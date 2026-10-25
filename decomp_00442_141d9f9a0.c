// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141d9f9a0 FUN_141d9f9a0 body=1315 status=ok
// SIG undefined FUN_141d9f9a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141d9f9a0(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float *pfVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  longlong lVar10;
  char cVar11;
  char cVar12;
  undefined2 *puVar13;
  undefined8 uVar14;
  byte bVar15;
  byte bVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 *local_d0;
  undefined4 *local_c8;
  undefined4 local_c0;
  undefined2 local_b8;
  char local_b4;
  char local_b3;
  char local_b2;
  char local_b1;
  undefined4 local_b0;
  int local_ac;
  undefined1 local_a8 [4];
  undefined1 local_a4 [4];
  int local_a0;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  longlong local_98;
  int *local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong lStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_78 = *(longlong *)(param_1 + 0x18);
  local_ac = 0;
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x5fa0) -
       *(int *)(*(longlong *)(param_1 + 0x10) + 0x5fcc) < 1) ||
     (*(longlong *)(local_78 + 0x18) == 0)) {
    local_80 = 0;
  }
  else {
    local_80 = *(longlong *)(local_78 + 0x18) + 0x380;
  }
  local_88 = (longlong)*(int *)(param_1 + 0x248);
  iVar17 = 0;
  if (0 < local_88) {
    local_90 = (int *)(param_1 + 0x24c);
    do {
      lVar10 = local_80;
      iVar17 = *local_90;
      lVar18 = (longlong)iVar17;
      lVar20 = *(longlong *)(param_1 + 0x18);
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1000);
      lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0xfe0) + lVar18 * 8);
      local_50 = *(longlong *)(lVar20 + 0x1b30);
      lVar5 = *(longlong *)(param_1 + 0x28);
      local_b0 = 0;
      local_b8 = 0x7f7f;
      local_58 = lVar18;
      if ((*(byte *)(lVar4 + 0xe4) & 1) == 0) {
        local_68 = *(undefined4 *)(lVar3 + lVar18 * 0x28);
        local_c8 = &local_b0;
        local_64 = *(undefined4 *)(lVar3 + 4 + lVar18 * 0x28);
        local_60 = *(undefined4 *)(lVar3 + 8 + lVar18 * 0x28);
        local_5c = 0x3f800000;
        local_c0 = *(undefined4 *)(lVar5 + 0x10);
        local_d8 = *(undefined4 *)(lVar3 + 0x18 + lVar18 * 0x28);
        local_d0 = (undefined4 *)CONCAT44(local_d0._4_4_,*(undefined4 *)(lVar5 + 0xc));
        puVar13 = (undefined2 *)FUN_142749260(local_a4,lVar4 + 0x30,lVar20,&local_68);
      }
      else {
        local_d0 = &local_b0;
        local_d8 = *(undefined4 *)(lVar5 + 0xc);
        puVar13 = (undefined2 *)
                  (**(code **)(**(longlong **)(lVar4 + 8) + 0x158))
                            (*(longlong **)(lVar4 + 8),local_a8,lVar20,
                             *(undefined4 *)(lVar20 + 0x11ec));
      }
      local_b8 = *puVar13;
      *(ulonglong *)(param_1 + 0x5b60 + (longlong)*(int *)(param_1 + 0x5b5c) * 8) =
           CONCAT26(uStack_9a,CONCAT24(local_b8,iVar17));
      *(int *)(param_1 + 0x5b5c) = *(int *)(param_1 + 0x5b5c) + 1;
      local_98 = 0;
      local_a0 = iVar17;
      uStack_9c = local_b8;
      if (*(char *)(lVar18 + **(longlong **)(param_1 + 0x6758)) != '\0') {
        local_d0 = (undefined4 *)&local_b8;
        local_c8 = (undefined4 *)CONCAT44(local_c8._4_4_,local_b0);
        local_d8 = CONCAT31(local_d8._1_3_,1);
        local_98 = (**(code **)(**(longlong **)(lVar4 + 8) + 0x140))
                             (*(longlong **)(lVar4 + 8),*(longlong *)(param_1 + 0x18),
                              *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x11ec),
                              *(undefined8 *)(param_1 + 0x6750));
        if (local_98 != 0) {
          plVar1 = (longlong *)(param_1 + 0x5f60 + (longlong)*(int *)(param_1 + 0x5f58) * 0x10);
          *plVar1 = lVar4;
          plVar1[1] = local_98;
          *(int *)(param_1 + 0x5f58) = *(int *)(param_1 + 0x5f58) + 1;
          local_40 = lVar4;
          lStack_38 = local_98;
        }
      }
      if (lVar10 == 0) {
        local_b3 = false;
        local_b2 = false;
      }
      else {
        uVar19 = 1 << ((byte)iVar17 & 0x1f);
        if (iVar17 < 0) {
          iVar17 = iVar17 + 0x1f;
        }
        lVar20 = *(longlong *)(lVar10 + 0x10);
        if (*(longlong *)(lVar10 + 0x10) == 0) {
          lVar20 = lVar10;
        }
        local_b3 = (*(uint *)(lVar20 + (longlong)(iVar17 >> 5) * 4) & uVar19) != 0;
        lVar20 = *(longlong *)(lVar10 + 0x30);
        if (*(longlong *)(lVar10 + 0x30) == 0) {
          lVar20 = lVar10 + 0x20;
        }
        local_b2 = (*(uint *)(lVar20 + (longlong)(iVar17 >> 5) * 4) & uVar19) != 0;
      }
      pfVar6 = *(float **)(param_1 + 0x28);
      fVar26 = *(float *)(lVar3 + 4 + lVar18 * 0x28) - pfVar6[1];
      fVar23 = *(float *)(lVar3 + 8 + lVar18 * 0x28) - pfVar6[2];
      fVar25 = *(float *)(lVar3 + lVar18 * 0x28) - *pfVar6;
      bVar21 = (char)local_b8 == local_b8._1_1_;
      fVar22 = *(float *)(*(longlong *)(param_1 + 0x18) + 0x11ec) * pfVar6[5];
      fVar24 = *(float *)(lVar3 + 0x18 + lVar18 * 0x28);
      fVar24 = fVar24 * fVar24;
      fVar22 = (fVar26 * fVar26 + fVar25 * fVar25 + fVar23 * fVar23) * fVar22 * fVar22;
      local_b1 = fVar22 * pfVar6[6] < fVar24;
      if ((*(char *)(pfVar6 + 8) != '\0') || (DAT_1464c3118 * DAT_1464c3118 * fVar22 < fVar24)) {
        local_b4 = '\x01';
      }
      else {
        local_b4 = '\0';
      }
      local_48 = (longlong)*(int *)(lVar4 + 0x38);
      lVar20 = 0;
      cVar11 = (char)local_b8;
      if (0 < local_48) {
        do {
          cVar9 = local_b4;
          lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x30) + lVar20 * 8);
          cVar12 = *(char *)(lVar3 + 0x88);
          if ((cVar11 == cVar12) || (local_b8._1_1_ == cVar12)) {
            bVar15 = 0;
            bVar8 = false;
            bVar7 = false;
            if (local_b3 == '\0') {
              if ((!bVar21) && (bVar15 = 0x20, cVar11 == cVar12)) {
                bVar15 = 0x10;
              }
            }
            else if (local_b2 == '\0') {
              if ((bVar21) || (cVar11 != cVar12)) {
                bVar15 = 0x20;
              }
              else {
                bVar7 = true;
              }
            }
            else if ((bVar21) || (local_b8._1_1_ != cVar12)) {
              bVar15 = 0x10;
            }
            else {
              bVar7 = true;
            }
            uVar19 = *(uint *)(local_50 + 4 + local_58 * 8);
            if ((((uVar19 >> 0xb & 1) != 0) && (local_b1 != '\0')) &&
               ((*(byte *)(lVar3 + 0x8c) & 0x20) != 0)) {
              bVar15 = bVar15 | 1;
              bVar8 = true;
            }
            if ((uVar19 >> 10 & 1) != 0) {
              uVar2 = *(uint *)(lVar3 + 0x8c);
              cVar12 = (char)uVar2;
              if ((((uVar2 & 0xc0) != 0) &&
                  (((uVar19 >> 0xd & 1) != 0 || ((uVar19 >> 0xc & 1) != 0)))) && (!bVar7)) {
                bVar16 = bVar15;
                if ((uVar2 & 0x40) != 0) {
                  bVar16 = bVar15 | 2;
                  cVar11 = FUN_141d4f4f0(lVar4,*(undefined8 *)(param_1 + 0x18),0);
                  if (cVar11 != '\0') {
                    bVar16 = bVar15 | 6;
                  }
                  local_ac = local_ac + 1;
                  cVar12 = (char)*(undefined4 *)(lVar3 + 0x8c);
                  cVar11 = (char)local_b8;
                }
                bVar15 = bVar16;
                if ((cVar12 < '\0') && (cVar9 != '\0')) {
                  bVar15 = bVar16 | 8;
                }
                bVar8 = true;
              }
            }
            if (bVar15 != 0) {
              *(byte *)((longlong)*(int *)(lVar3 + 200) + *(longlong *)(param_1 + 0x40)) = bVar15;
              cVar11 = (char)local_b8;
            }
            if ((bVar8) && ((*(uint *)(lVar3 + 0x8c) & 0x2000000) != 0)) {
              lVar5 = *(longlong *)(local_78 + 0x1c50);
              iVar17 = *(int *)(lVar3 + 0xcc);
              uVar14 = (**(code **)(**(longlong **)(lVar3 + 0xa0) + 0x68))
                                 (*(longlong **)(lVar3 + 0xa0),*(undefined8 *)(param_1 + 0x18),lVar3
                                  ,local_98);
              *(undefined8 *)(lVar5 + (longlong)iVar17 * 8) = uVar14;
              cVar11 = (char)local_b8;
            }
          }
          lVar20 = lVar20 + 1;
        } while (lVar20 < local_48);
      }
      local_90 = local_90 + 1;
      local_88 = local_88 + -1;
      iVar17 = local_ac;
    } while (local_88 != 0);
  }
  LOCK();
  *(int *)(local_78 + 0x2f24) = *(int *)(local_78 + 0x2f24) + iVar17;
  UNLOCK();
  return;
}



// FUNCTION 141d9fed0 Matches body=416 status=ok
// SIG undefined Matches(void)

uint * FShadowDepthDrawingPolicy<1>::Matches(longlong param_1,uint *param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;
  undefined1 local_res10 [8];
  
  *param_2 = *param_2 & 0xfffffffe;
  puVar3 = (uint *)FUN_141ac2bf0(param_1,local_res10);
  uVar1 = *puVar3;
  uVar4 = *param_2;
  *param_2 = uVar1 & 1 | uVar4;
  if ((uVar1 & 1) != 0 || (uVar4 & 1) != 0) {
    bVar5 = *(longlong *)(param_1 + 0x38) == *(longlong *)(param_3 + 0x38);
    uVar4 = uVar4 & 0xfffffffe;
    *param_2 = bVar5 | uVar4;
    if (bVar5) {
      bVar5 = *(longlong *)(param_1 + 0x40) == *(longlong *)(param_3 + 0x40);
      *param_2 = bVar5 | uVar4;
      if (bVar5) {
        bVar5 = *(longlong *)(param_1 + 0x50) == *(longlong *)(param_3 + 0x50);
        *param_2 = bVar5 | uVar4;
        if (bVar5) {
          bVar5 = *(longlong *)(param_1 + 0x58) == *(longlong *)(param_3 + 0x58);
          *param_2 = bVar5 | uVar4;
          if (bVar5) {
            bVar5 = *(longlong *)(param_1 + 0x48) == *(longlong *)(param_3 + 0x48);
            uVar4 = bVar5 | uVar4;
            *param_2 = uVar4;
            if (bVar5) {
              uVar1 = *(uint *)(param_1 + 100);
              uVar2 = *(uint *)(param_3 + 100);
              uVar4 = (~uVar1 ^ uVar4 ^ uVar2) & 1 ^ uVar4;
              *param_2 = uVar4;
              if ((uVar4 & 1) != 0) {
                uVar4 = (~(uVar2 >> 1) ^ uVar1 >> 1 ^ uVar4) & 1 ^ uVar4;
                *param_2 = uVar4;
                if ((uVar4 & 1) != 0) {
                  uVar4 = (~(uVar1 >> 2) ^ uVar2 >> 2 ^ uVar4) & 1 ^ uVar4;
                  *param_2 = uVar4;
                  if ((uVar4 & 1) != 0) {
                    uVar4 = (~(uVar1 >> 3) ^ uVar2 >> 3 ^ uVar4) & 1 ^ uVar4;
                    *param_2 = uVar4;
                    if ((uVar4 & 1) != 0) {
                      uVar4 = (~(uVar1 >> 4) ^ uVar2 >> 4 ^ uVar4) & 1 ^ uVar4;
                      *param_2 = uVar4;
                      if ((uVar4 & 1) != 0) {
                        *param_2 = (uint)(*(int *)(param_1 + 0x60) == *(int *)(param_3 + 0x60)) |
                                   uVar4 & 0xfffffffe;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 141da0070 FUN_141da0070 body=137 status=ok
// SIG undefined FUN_141da0070(void)

void FUN_141da0070(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  longlong *plVar4;
  
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"OUTPUT_QUAD_OVERDRAW",0);
  plVar4 = (longlong *)(param_2 + 0xb0);
  piVar2 = (int *)*plVar4;
  iVar1 = *(int *)(param_2 + 0xb8);
  piVar3 = piVar2;
  do {
    if (piVar3 == piVar2 + iVar1) {
LAB_141da00d1:
      *(int *)(param_2 + 0xb8) = iVar1 + 1;
      if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar4);
      }
      *(undefined4 *)((longlong)iVar1 * 4 + *plVar4) = 0x10;
      return;
    }
    if (*piVar3 == 0x10) {
      if ((int)((longlong)piVar3 - (longlong)piVar2 >> 2) != -1) {
        return;
      }
      goto LAB_141da00d1;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}



// FUNCTION 141da0100 ModifyCompilationEnvironment body=116 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TDirectionalPercentageCloserShadowProjectionPS<5,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADOW_QUALITY",5);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_FADE_PLANE",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TRANSMISSION",0);
  FUN_141a172f0(param_2,L"USE_PCSS",1);
  return;
}



// FUNCTION 141da0180 ModifyCompilationEnvironment body=113 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TDirectionalPercentageCloserShadowProjectionPS<5,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADOW_QUALITY",5);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_FADE_PLANE",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TRANSMISSION",0);
  FUN_141a172f0(param_2,L"USE_PCSS",1);
  return;
}



// FUNCTION 141da0200 ModifyCompilationEnvironment body=113 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TModulatedShadowProjection<1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADOW_QUALITY",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_FADE_PLANE",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TRANSMISSION",0);
  FUN_141a172f0(param_2,L"MODULATED_SHADOWS",1);
  return;
}



// FUNCTION 141da0280 ModifyCompilationEnvironment body=113 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TModulatedShadowProjection<2>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADOW_QUALITY",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_FADE_PLANE",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TRANSMISSION",0);
  FUN_141a172f0(param_2,L"MODULATED_SHADOWS",1);
  return;
}



// FUNCTION 141da0300 ModifyCompilationEnvironment body=113 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TModulatedShadowProjection<3>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADOW_QUALITY",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_FADE_PLANE",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TRANSMISSION",0);
  FUN_141a172f0(param_2,L"MODULATED_SHADOWS",1);
  return;
}



// FUNCTION 141da0380 ModifyCompilationEnvironment body=113 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TModulatedShadowProjection<4>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADOW_QUALITY",4);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_FADE_PLANE",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TRANSMISSION",0);
  FUN_141a172f0(param_2,L"MODULATED_SHADOWS",1);
  return;
}



// FUNCTION 141da0400 ModifyCompilationEnvironment body=113 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TModulatedShadowProjection<5>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADOW_QUALITY",5);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_FADE_PLANE",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TRANSMISSION",0);
  FUN_141a172f0(param_2,L"MODULATED_SHADOWS",1);
  return;
}



// FUNCTION 141da0480 ModifyCompilationEnvironment body=60 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TOnePassPointShadowProjectionPS<1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADOW_QUALITY",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TRANSMISSION",1);
  return;
}



// FUNCTION 141da04c0 ModifyCompilationEnvironment body=57 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TOnePassPointShadowProjectionPS<1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADOW_QUALITY",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TRANSMISSION",0);
  return;
}



// FUNCTION 141da0500 ModifyCompilationEnvironment body=60 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TOnePassPointShadowProjectionPS<2,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADOW_QUALITY",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TRANSMISSION",1);
  return;
}



// FUNCTION 141da0540 ModifyCompilationEnvironment body=57 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TOnePassPointShadowProjectionPS<2,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADOW_QUALITY",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TRANSMISSION",0);
  return;
}



// FUNCTION 141da0580 ModifyCompilationEnvironment body=60 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TOnePassPointShadowProjectionPS<3,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADOW_QUALITY",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TRANSMISSION",1);
  return;
}



// FUNCTION 141da05c0 ModifyCompilationEnvironment body=57 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TOnePassPointShadowProjectionPS<3,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADOW_QUALITY",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TRANSMISSION",0);
  return;
}



// FUNCTION 141da0600 ModifyCompilationEnvironment body=60 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TOnePassPointShadowProjectionPS<4,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADOW_QUALITY",4);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TRANSMISSION",1);
  return;
}



// FUNCTION 141da0640 ModifyCompilationEnvironment body=57 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TOnePassPointShadowProjectionPS<4,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADOW_QUALITY",4);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TRANSMISSION",0);
  return;
}



// FUNCTION 141da0680 ModifyCompilationEnvironment body=60 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TOnePassPointShadowProjectionPS<5,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADOW_QUALITY",5);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TRANSMISSION",1);
  return;
}



// FUNCTION 141da06c0 ModifyCompilationEnvironment body=57 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TOnePassPointShadowProjectionPS<5,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADOW_QUALITY",5);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TRANSMISSION",0);
  return;
}



// FUNCTION 141da0700 FUN_141da0700 body=101 status=ok
// SIG undefined FUN_141da0700(void)

void FUN_141da0700(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141ac7cb0();
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"PERSPECTIVE_CORRECT_DEPTH",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"ONEPASS_POINTLIGHT_SHADOW",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"REFLECTIVE_SHADOW_MAP",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"POSITION_ONLY",0);
  return;
}



// FUNCTION 141da0770 FUN_141da0770 body=98 status=ok
// SIG undefined FUN_141da0770(void)

void FUN_141da0770(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141ac7cb0();
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"PERSPECTIVE_CORRECT_DEPTH",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"ONEPASS_POINTLIGHT_SHADOW",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"REFLECTIVE_SHADOW_MAP",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"POSITION_ONLY",0);
  return;
}



// FUNCTION 141da07e0 FUN_141da07e0 body=101 status=ok
// SIG undefined FUN_141da07e0(void)

void FUN_141da07e0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141ac7cb0();
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"PERSPECTIVE_CORRECT_DEPTH",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"ONEPASS_POINTLIGHT_SHADOW",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"REFLECTIVE_SHADOW_MAP",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"POSITION_ONLY",0);
  return;
}



// FUNCTION 141da0860 FUN_141da0860 body=101 status=ok
// SIG undefined FUN_141da0860(void)

void FUN_141da0860(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141ac7cb0();
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"PERSPECTIVE_CORRECT_DEPTH",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"ONEPASS_POINTLIGHT_SHADOW",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"REFLECTIVE_SHADOW_MAP",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"POSITION_ONLY",0);
  return;
}



// FUNCTION 141da08d0 FUN_141da08d0 body=86 status=ok
// SIG undefined FUN_141da08d0(void)

void FUN_141da08d0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141ac7cb0();
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"PERSPECTIVE_CORRECT_DEPTH",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"ONEPASS_POINTLIGHT_SHADOW",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"REFLECTIVE_SHADOW_MAP",1);
  return;
}



// FUNCTION 141da0930 FUN_141da0930 body=83 status=ok
// SIG undefined FUN_141da0930(void)

void FUN_141da0930(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141ac7cb0();
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"PERSPECTIVE_CORRECT_DEPTH",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"ONEPASS_POINTLIGHT_SHADOW",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"REFLECTIVE_SHADOW_MAP",0);
  return;
}



// FUNCTION 141da0990 FUN_141da0990 body=86 status=ok
// SIG undefined FUN_141da0990(void)

void FUN_141da0990(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141ac7cb0();
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"PERSPECTIVE_CORRECT_DEPTH",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"ONEPASS_POINTLIGHT_SHADOW",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"REFLECTIVE_SHADOW_MAP",1);
  return;
}



// FUNCTION 141da09f0 FUN_141da09f0 body=83 status=ok
// SIG undefined FUN_141da09f0(void)

void FUN_141da09f0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141ac7cb0();
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"PERSPECTIVE_CORRECT_DEPTH",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"ONEPASS_POINTLIGHT_SHADOW",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"REFLECTIVE_SHADOW_MAP",0);
  return;
}



// FUNCTION 141da0a50 FUN_141da0a50 body=83 status=ok
// SIG undefined FUN_141da0a50(void)

void FUN_141da0a50(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141ac7cb0();
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"PERSPECTIVE_CORRECT_DEPTH",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"ONEPASS_POINTLIGHT_SHADOW",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"REFLECTIVE_SHADOW_MAP",1);
  return;
}



// FUNCTION 141da0ab0 FUN_141da0ab0 body=80 status=ok
// SIG undefined FUN_141da0ab0(void)

void FUN_141da0ab0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141ac7cb0();
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"PERSPECTIVE_CORRECT_DEPTH",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"ONEPASS_POINTLIGHT_SHADOW",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"REFLECTIVE_SHADOW_MAP",0);
  return;
}



// FUNCTION 141da0b00 FUN_141da0b00 body=172 status=ok
// SIG undefined FUN_141da0b00(void)

void FUN_141da0b00(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  FUN_141ac7cb0();
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"PERSPECTIVE_CORRECT_DEPTH",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ONEPASS_POINTLIGHT_SHADOW",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"REFLECTIVE_SHADOW_MAP",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"POSITION_ONLY",0);
  iVar1 = *(int *)(param_3 + 0xb8);
  *(int *)(param_3 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_3 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_3 + 0xb0) + (longlong)iVar1 * 4) = 0xd;
  return;
}



// FUNCTION 141da0bb0 FUN_141da0bb0 body=101 status=ok
// SIG undefined FUN_141da0bb0(void)

void FUN_141da0bb0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141ac7cb0();
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"PERSPECTIVE_CORRECT_DEPTH",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"ONEPASS_POINTLIGHT_SHADOW",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"REFLECTIVE_SHADOW_MAP",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"POSITION_ONLY",1);
  return;
}



// FUNCTION 141da0c20 FUN_141da0c20 body=169 status=ok
// SIG undefined FUN_141da0c20(void)

void FUN_141da0c20(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  FUN_141ac7cb0();
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"PERSPECTIVE_CORRECT_DEPTH",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ONEPASS_POINTLIGHT_SHADOW",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"REFLECTIVE_SHADOW_MAP",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"POSITION_ONLY",0);
  iVar1 = *(int *)(param_3 + 0xb8);
  *(int *)(param_3 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_3 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_3 + 0xb0) + (longlong)iVar1 * 4) = 0xd;
  return;
}



// FUNCTION 141da0cd0 FUN_141da0cd0 body=175 status=ok
// SIG undefined FUN_141da0cd0(void)

void FUN_141da0cd0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  FUN_141ac7cb0();
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"PERSPECTIVE_CORRECT_DEPTH",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ONEPASS_POINTLIGHT_SHADOW",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"REFLECTIVE_SHADOW_MAP",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"POSITION_ONLY",1);
  iVar1 = *(int *)(param_3 + 0xb8);
  *(int *)(param_3 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_3 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_3 + 0xb0) + (longlong)iVar1 * 4) = 0xd;
  return;
}



// FUNCTION 141da0d80 FUN_141da0d80 body=104 status=ok
// SIG undefined FUN_141da0d80(void)

void FUN_141da0d80(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141ac7cb0();
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"PERSPECTIVE_CORRECT_DEPTH",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"ONEPASS_POINTLIGHT_SHADOW",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"REFLECTIVE_SHADOW_MAP",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"POSITION_ONLY",1);
  return;
}



// FUNCTION 141da0df0 FUN_141da0df0 body=172 status=ok
// SIG undefined FUN_141da0df0(void)

void FUN_141da0df0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  FUN_141ac7cb0();
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"PERSPECTIVE_CORRECT_DEPTH",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ONEPASS_POINTLIGHT_SHADOW",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"REFLECTIVE_SHADOW_MAP",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"POSITION_ONLY",0);
  iVar1 = *(int *)(param_3 + 0xb8);
  *(int *)(param_3 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_3 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_3 + 0xb0) + (longlong)iVar1 * 4) = 0xd;
  return;
}



// FUNCTION 141da0ea0 FUN_141da0ea0 body=175 status=ok
// SIG undefined FUN_141da0ea0(void)

void FUN_141da0ea0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  FUN_141ac7cb0();
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"PERSPECTIVE_CORRECT_DEPTH",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ONEPASS_POINTLIGHT_SHADOW",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"REFLECTIVE_SHADOW_MAP",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"POSITION_ONLY",0);
  iVar1 = *(int *)(param_3 + 0xb8);
  *(int *)(param_3 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_3 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_3 + 0xb0) + (longlong)iVar1 * 4) = 0xd;
  return;
}



// FUNCTION 141da0f50 FUN_141da0f50 body=104 status=ok
// SIG undefined FUN_141da0f50(void)

void FUN_141da0f50(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141ac7cb0();
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"PERSPECTIVE_CORRECT_DEPTH",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"ONEPASS_POINTLIGHT_SHADOW",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"REFLECTIVE_SHADOW_MAP",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"POSITION_ONLY",0);
  return;
}



// FUNCTION 141da0fc0 FUN_141da0fc0 body=104 status=ok
// SIG undefined FUN_141da0fc0(void)

void FUN_141da0fc0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141ac7cb0();
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"PERSPECTIVE_CORRECT_DEPTH",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"ONEPASS_POINTLIGHT_SHADOW",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"REFLECTIVE_SHADOW_MAP",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"POSITION_ONLY",1);
  return;
}



// FUNCTION 141da1030 FUN_141da1030 body=172 status=ok
// SIG undefined FUN_141da1030(void)

void FUN_141da1030(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  FUN_141ac7cb0();
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"PERSPECTIVE_CORRECT_DEPTH",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ONEPASS_POINTLIGHT_SHADOW",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"REFLECTIVE_SHADOW_MAP",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"POSITION_ONLY",0);
  iVar1 = *(int *)(param_3 + 0xb8);
  *(int *)(param_3 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_3 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_3 + 0xb0) + (longlong)iVar1 * 4) = 0xd;
  return;
}



// FUNCTION 141da10e0 ModifyCompilationEnvironment body=113 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TShadowProjectionFromTranslucencyPS<1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADOW_QUALITY",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_FADE_PLANE",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TRANSMISSION",0);
  FUN_141a172f0(param_2,L"APPLY_TRANSLUCENCY_SHADOWS",1);
  return;
}



// FUNCTION 141da1160 ModifyCompilationEnvironment body=113 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TShadowProjectionFromTranslucencyPS<2>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADOW_QUALITY",2);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_FADE_PLANE",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TRANSMISSION",0);
  FUN_141a172f0(param_2,L"APPLY_TRANSLUCENCY_SHADOWS",1);
  return;
}



// FUNCTION 141da11e0 ModifyCompilationEnvironment body=113 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TShadowProjectionFromTranslucencyPS<3>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADOW_QUALITY",3);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_FADE_PLANE",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TRANSMISSION",0);
  FUN_141a172f0(param_2,L"APPLY_TRANSLUCENCY_SHADOWS",1);
  return;
}



// FUNCTION 141da1260 ModifyCompilationEnvironment body=113 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TShadowProjectionFromTranslucencyPS<4>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADOW_QUALITY",4);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_FADE_PLANE",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TRANSMISSION",0);
  FUN_141a172f0(param_2,L"APPLY_TRANSLUCENCY_SHADOWS",1);
  return;
}



// FUNCTION 141da12e0 ModifyCompilationEnvironment body=113 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TShadowProjectionFromTranslucencyPS<5>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADOW_QUALITY",5);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_FADE_PLANE",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TRANSMISSION",0);
  FUN_141a172f0(param_2,L"APPLY_TRANSLUCENCY_SHADOWS",1);
  return;
}



// FUNCTION 141da1360 ModifyCompilationEnvironment body=81 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TShadowProjectionPS<1,1,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADOW_QUALITY",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FADE_PLANE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_TRANSMISSION",1);
  return;
}



// FUNCTION 141da13c0 ModifyCompilationEnvironment body=78 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TShadowProjectionPS<1,1,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADOW_QUALITY",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FADE_PLANE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_TRANSMISSION",0);
  return;
}



// FUNCTION 141da1410 ModifyCompilationEnvironment body=78 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TShadowProjectionPS<1,0,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADOW_QUALITY",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FADE_PLANE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_TRANSMISSION",1);
  return;
}



// FUNCTION 141da1460 ModifyCompilationEnvironment body=75 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TShadowProjectionPS<1,0,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADOW_QUALITY",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FADE_PLANE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_TRANSMISSION",0);
  return;
}



// FUNCTION 141da14b0 ModifyCompilationEnvironment body=81 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TShadowProjectionPS<2,1,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADOW_QUALITY",2);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FADE_PLANE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_TRANSMISSION",1);
  return;
}



// FUNCTION 141da1510 ModifyCompilationEnvironment body=78 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TShadowProjectionPS<2,1,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADOW_QUALITY",2);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FADE_PLANE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_TRANSMISSION",0);
  return;
}



// FUNCTION 141da1560 ModifyCompilationEnvironment body=78 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TShadowProjectionPS<2,0,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADOW_QUALITY",2);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FADE_PLANE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_TRANSMISSION",1);
  return;
}



// FUNCTION 141da15b0 ModifyCompilationEnvironment body=75 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TShadowProjectionPS<2,0,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADOW_QUALITY",2);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FADE_PLANE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_TRANSMISSION",0);
  return;
}



// FUNCTION 141da1600 ModifyCompilationEnvironment body=81 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TShadowProjectionPS<3,1,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADOW_QUALITY",3);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FADE_PLANE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_TRANSMISSION",1);
  return;
}



// FUNCTION 141da1660 ModifyCompilationEnvironment body=78 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TShadowProjectionPS<3,1,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADOW_QUALITY",3);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FADE_PLANE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_TRANSMISSION",0);
  return;
}



// FUNCTION 141da16b0 ModifyCompilationEnvironment body=78 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TShadowProjectionPS<3,0,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADOW_QUALITY",3);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FADE_PLANE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_TRANSMISSION",1);
  return;
}



// FUNCTION 141da1700 ModifyCompilationEnvironment body=75 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TShadowProjectionPS<3,0,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADOW_QUALITY",3);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FADE_PLANE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_TRANSMISSION",0);
  return;
}



// FUNCTION 141da1750 ModifyCompilationEnvironment body=81 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TShadowProjectionPS<4,1,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADOW_QUALITY",4);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FADE_PLANE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_TRANSMISSION",1);
  return;
}



// FUNCTION 141da17b0 ModifyCompilationEnvironment body=78 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TShadowProjectionPS<4,1,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADOW_QUALITY",4);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FADE_PLANE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_TRANSMISSION",0);
  return;
}



// FUNCTION 141da1800 ModifyCompilationEnvironment body=78 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TShadowProjectionPS<4,0,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADOW_QUALITY",4);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FADE_PLANE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_TRANSMISSION",1);
  return;
}



// FUNCTION 141da1850 ModifyCompilationEnvironment body=75 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TShadowProjectionPS<4,0,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADOW_QUALITY",4);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FADE_PLANE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_TRANSMISSION",0);
  return;
}



// FUNCTION 141da18a0 ModifyCompilationEnvironment body=81 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TShadowProjectionPS<5,1,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADOW_QUALITY",5);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FADE_PLANE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_TRANSMISSION",1);
  return;
}



// FUNCTION 141da1900 ModifyCompilationEnvironment body=78 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TShadowProjectionPS<5,1,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADOW_QUALITY",5);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FADE_PLANE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_TRANSMISSION",0);
  return;
}



// FUNCTION 141da1950 ModifyCompilationEnvironment body=78 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TShadowProjectionPS<5,0,0,1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADOW_QUALITY",5);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FADE_PLANE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_TRANSMISSION",1);
  return;
}



// FUNCTION 141da19a0 ModifyCompilationEnvironment body=75 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TShadowProjectionPS<5,0,0,0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADOW_QUALITY",5);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_FADE_PLANE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_TRANSMISSION",0);
  return;
}



// FUNCTION 141da19f0 ModifyCompilationEnvironment body=137 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TSpotPercentageCloserShadowProjectionPS<5,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADOW_QUALITY",5);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_FADE_PLANE",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TRANSMISSION",0);
  FUN_141a172f0(param_2,L"USE_PCSS",1);
  FUN_141a172f0(param_2,L"SPOT_LIGHT_PCSS",1);
  return;
}



// FUNCTION 141da1a80 ModifyCompilationEnvironment body=134 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TSpotPercentageCloserShadowProjectionPS<5,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SHADOW_QUALITY",5);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_FADE_PLANE",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USE_TRANSMISSION",0);
  FUN_141a172f0(param_2,L"USE_PCSS",1);
  FUN_141a172f0(param_2,L"SPOT_LIGHT_PCSS",1);
  return;
}



// FUNCTION 141da1b10 ModifyCompilationEnvironment body=56 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FMeshDecalsEmissivePS::ModifyCompilationEnvironment
               (undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141ac7cb0();
  FUN_141da0df0(param_1,param_2,param_3);
  return;
}



// FUNCTION 141da1b90 FUN_141da1b90 body=872 status=ok
// SIG undefined FUN_141da1b90(void)

void FUN_141da1b90(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong local_res8 [2];
  longlong local_res18;
  longlong local_res20;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 local_138 [64];
  undefined1 local_f8 [64];
  undefined1 local_b8 [64];
  undefined1 local_78 [64];
  
  uVar6 = *(undefined8 *)(param_3 + 0x1aa0);
  uVar7 = *(undefined8 *)(param_3 + 0x1aa8);
  lVar1 = param_3 + 0x390;
  lVar12 = 0;
  *(undefined8 *)(param_3 + 0x1aa0) = 0;
  *(undefined4 *)(param_3 + 0x1aa8) = *(undefined4 *)(param_1 + 0x538);
  *(undefined4 *)(param_3 + 0x1aac) = *(undefined4 *)(param_1 + 0x53c);
  *(float *)(param_3 + 0x470) = *(float *)(param_3 + 0x470) - *(float *)(param_3 + 0x8f0);
  *(float *)(param_3 + 0x3b0) = *(float *)(param_3 + 0x3b0) - *(float *)(param_3 + 0x8f0);
  *(float *)(param_3 + 0x3b4) = *(float *)(param_3 + 0x3b4) - *(float *)(param_3 + 0x8f4);
  *(float *)(param_3 + 0x474) = *(float *)(param_3 + 0x474) - *(float *)(param_3 + 0x8f4);
  puVar9 = (undefined8 *)FViewMatrices::InvertProjectionMatrix(local_f8,lVar1);
  uVar10 = puVar9[1];
  *(undefined8 *)(param_3 + 0x410) = *puVar9;
  *(undefined8 *)(param_3 + 0x418) = uVar10;
  uVar10 = puVar9[3];
  *(undefined8 *)(param_3 + 0x420) = puVar9[2];
  *(undefined8 *)(param_3 + 0x428) = uVar10;
  uVar3 = *(undefined4 *)((longlong)puVar9 + 0x24);
  uVar4 = *(undefined4 *)(puVar9 + 5);
  uVar5 = *(undefined4 *)((longlong)puVar9 + 0x2c);
  *(undefined4 *)(param_3 + 0x430) = *(undefined4 *)(puVar9 + 4);
  *(undefined4 *)(param_3 + 0x434) = uVar3;
  *(undefined4 *)(param_3 + 0x438) = uVar4;
  *(undefined4 *)(param_3 + 0x43c) = uVar5;
  uVar3 = *(undefined4 *)((longlong)puVar9 + 0x34);
  uVar4 = *(undefined4 *)(puVar9 + 7);
  uVar5 = *(undefined4 *)((longlong)puVar9 + 0x3c);
  *(undefined4 *)(param_3 + 0x440) = *(undefined4 *)(puVar9 + 6);
  *(undefined4 *)(param_3 + 0x444) = uVar3;
  *(undefined4 *)(param_3 + 0x448) = uVar4;
  *(undefined4 *)(param_3 + 0x44c) = uVar5;
  puVar9 = (undefined8 *)FViewMatrices::InvertProjectionMatrix(local_b8,param_3 + 0x450);
  uVar10 = puVar9[1];
  *(undefined8 *)(param_3 + 0x490) = *puVar9;
  *(undefined8 *)(param_3 + 0x498) = uVar10;
  uVar10 = puVar9[3];
  *(undefined8 *)(param_3 + 0x4a0) = puVar9[2];
  *(undefined8 *)(param_3 + 0x4a8) = uVar10;
  uVar10 = puVar9[5];
  *(undefined8 *)(param_3 + 0x4b0) = puVar9[4];
  *(undefined8 *)(param_3 + 0x4b8) = uVar10;
  uVar10 = puVar9[7];
  *(undefined8 *)(param_3 + 0x4c0) = puVar9[6];
  *(undefined8 *)(param_3 + 0x4c8) = uVar10;
  *(undefined4 *)(param_3 + 0x8f0) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_3 + 0x8f4) = DAT_1468b5d88._4_4_;
  FUN_141c90d50(lVar1);
  *(undefined4 *)(param_3 + 0x2f2c) = 0;
  uVar10 = FSceneRenderTargets::Get(param_2);
  lVar11 = operator_new(0xf30);
  local_res8[0] = lVar12;
  if (lVar11 != 0) {
    local_res8[0] = FUN_142745180(lVar11);
  }
  plVar2 = (longlong *)(param_3 + 0x1ab8);
  lVar11 = local_res8[0];
  if (plVar2 != local_res8) {
    lVar11 = *plVar2;
    *plVar2 = local_res8[0];
    local_res8[0] = 0;
    FMemory::operator_delete(lVar11,0xf30);
    lVar11 = lVar12;
  }
  FMemory::operator_delete(lVar11,0xf30);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_3 + 0x510) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_3 + 0x518) = uVar8;
  uVar8 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_3 + 0x520) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_3 + 0x528) = uVar8;
  uVar8 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_3 + 0x530) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_3 + 0x538) = uVar8;
  uVar8 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_3 + 0x540) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_3 + 0x548) = uVar8;
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_3 + 0x750) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_3 + 0x758) = uVar8;
  uVar8 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_3 + 0x760) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_3 + 0x768) = uVar8;
  uVar3 = *(undefined4 *)(param_1 + 0x74);
  uVar4 = *(undefined4 *)(param_1 + 0x78);
  uVar5 = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(param_3 + 0x770) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_3 + 0x774) = uVar3;
  *(undefined4 *)(param_3 + 0x778) = uVar4;
  *(undefined4 *)(param_3 + 0x77c) = uVar5;
  uVar3 = *(undefined4 *)(param_1 + 0x84);
  uVar4 = *(undefined4 *)(param_1 + 0x88);
  uVar5 = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(param_3 + 0x780) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(param_3 + 0x784) = uVar3;
  *(undefined4 *)(param_3 + 0x788) = uVar4;
  *(undefined4 *)(param_3 + 0x78c) = uVar5;
  puVar9 = (undefined8 *)FMatrix::Inverse((undefined8 *)(param_1 + 0x50),local_78);
  uVar8 = puVar9[1];
  *(undefined8 *)(param_3 + 0x790) = *puVar9;
  *(undefined8 *)(param_3 + 0x798) = uVar8;
  uVar8 = puVar9[3];
  *(undefined8 *)(param_3 + 0x7a0) = puVar9[2];
  *(undefined8 *)(param_3 + 0x7a8) = uVar8;
  uVar3 = *(undefined4 *)((longlong)puVar9 + 0x24);
  uVar4 = *(undefined4 *)(puVar9 + 5);
  uVar5 = *(undefined4 *)((longlong)puVar9 + 0x2c);
  *(undefined4 *)(param_3 + 0x7b0) = *(undefined4 *)(puVar9 + 4);
  *(undefined4 *)(param_3 + 0x7b4) = uVar3;
  *(undefined4 *)(param_3 + 0x7b8) = uVar4;
  *(undefined4 *)(param_3 + 0x7bc) = uVar5;
  uVar3 = *(undefined4 *)((longlong)puVar9 + 0x34);
  uVar4 = *(undefined4 *)(puVar9 + 7);
  uVar5 = *(undefined4 *)((longlong)puVar9 + 0x3c);
  *(undefined4 *)(param_3 + 0x7c0) = *(undefined4 *)(puVar9 + 6);
  *(undefined4 *)(param_3 + 0x7c4) = uVar3;
  *(undefined4 *)(param_3 + 0x7c8) = uVar4;
  *(undefined4 *)(param_3 + 0x7cc) = uVar5;
  lVar11 = *plVar2 + 0xaf0;
  if ((*(byte *)(param_3 + 0x28cc) & 4) == 0) {
    lVar11 = lVar12;
  }
  FUN_141d746a0(param_3,uVar10,lVar1,param_3 + 0x28e0,local_138,2,*plVar2,lVar11,0xa0);
  (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_res18,*plVar2,&DAT_146b09708,1);
  local_res20 = local_res18;
  if (local_res18 != 0) {
    LOCK();
    *(int *)(local_res18 + 8) = *(int *)(local_res18 + 8) + 1;
    UNLOCK();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_3 + 0x20,&local_res20);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res20);
  local_148 = (undefined4)uVar6;
  *(undefined4 *)(param_3 + 0x1aa0) = local_148;
  uStack_144 = (undefined4)((ulonglong)uVar6 >> 0x20);
  *(undefined4 *)(param_3 + 0x1aa4) = uStack_144;
  uStack_140 = (undefined4)uVar7;
  *(undefined4 *)(param_3 + 0x1aa8) = uStack_140;
  uStack_13c = (undefined4)((ulonglong)uVar7 >> 0x20);
  *(undefined4 *)(param_3 + 0x1aac) = uStack_13c;
  if (((*(uint *)(param_1 + 0x560) & 0x800) != 0) && (DAT_146aa6080 != 0)) {
    *(undefined4 *)(param_3 + 0xf74) = 1;
  }
  return;
}



// FUNCTION 141da1f00 FUN_141da1f00 body=1341 status=ok
// SIG undefined FUN_141da1f00(void)

undefined4 FUN_141da1f00(undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  float *pfVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  char local_res10;
  undefined1 local_res18;
  undefined2 local_res19;
  undefined1 local_res1b;
  longlong local_res20;
  int local_118;
  uint local_114;
  uint *local_110;
  uint local_108;
  int local_104;
  int local_100;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_ec;
  float local_e4;
  undefined1 local_e0;
  float local_d4;
  float local_c8;
  undefined **local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [88];
  
  FRHICommandListImmediate::SetCurrentStat(param_1,local_res10);
  local_res20 = *(longlong *)(param_3 + 0x18);
  if ((((0x1a < (uint)(&DAT_1464c9c48)[*(int *)(param_2 + 8)]) ||
       ((0x700a74aU >> ((&DAT_1464c9c48)[*(int *)(param_2 + 8)] & 0x1f) & 1) == 0)) &&
      (DAT_146a9ecd0 != 0)) || (local_res10 = '\0', DAT_146a9ecd0 == 2)) {
    local_res10 = '\x01';
  }
  if (*(longlong *)(param_3 + 0x2f30) != 0) {
    local_110 = (uint *)(param_3 + 0x1ac0);
    local_c0 = &PTR__scalar_deleting_destructor__144deb6d0;
    local_a8 = (undefined8 *)0x0;
    uStack_a0 = 0;
    iVar2 = *(int *)(param_3 + 0x1ad8);
    local_118 = 0;
    local_114 = 1;
    local_104 = 0;
    local_100 = 0;
    if (iVar2 != 0) {
      puVar12 = *(uint **)(param_3 + 0x1ad0);
      if (*(uint **)(param_3 + 0x1ad0) == (uint *)0x0) {
        puVar12 = local_110;
      }
      uVar13 = *puVar12;
      while (uVar13 == 0) {
        lVar7 = (longlong)local_118;
        local_100 = local_100 + 0x20;
        iVar11 = local_118 + 1;
        bVar4 = (int)((iVar2 + -1 >> 0x1f & 0x1fU) + iVar2 + -1) >> 5 <= local_118;
        local_118 = iVar11;
        local_104 = iVar2;
        if (bVar4) goto LAB_141da206c;
        uVar13 = puVar12[lVar7 + 1];
      }
      local_114 = -uVar13 & uVar13;
      iVar11 = 0x1f;
      if (local_114 != 0) {
        for (; local_114 >> iVar11 == 0; iVar11 = iVar11 + -1) {
        }
      }
      if (local_114 == 0) {
        iVar11 = 0x20;
      }
      else {
        iVar11 = 0x1f - iVar11;
      }
      local_104 = (local_100 - iVar11) + 0x1f;
      if (iVar2 < local_104) {
        local_104 = iVar2;
      }
    }
LAB_141da206c:
    local_b8 = param_3;
    local_b0 = param_3;
    if (local_104 < iVar2) {
      uVar13 = 0xffffffff;
      do {
        uVar5 = local_114;
        lVar7 = (longlong)local_104;
        if (((*(byte *)(lVar7 + *(longlong *)(param_2 + 0x1030)) & 9) == 9) &&
           (uVar3 = *(undefined8 *)(*(longlong *)(param_2 + 0x1020) + lVar7 * 8),
           (*(byte *)((longlong)(int)uVar3 + *(longlong *)(param_3 + 0x2f30)) &
           (byte)((ulonglong)uVar3 >> 0x20)) == 0)) {
          lVar8 = *(longlong *)(param_3 + 0x1ad0);
          if (*(longlong *)(param_3 + 0x1ad0) == 0) {
            lVar8 = param_3 + 0x1ac0;
          }
          puVar12 = (uint *)(lVar8 + (longlong)local_118 * 4);
          *puVar12 = *puVar12 & ~local_114;
          if (DAT_146a9ecd4 != 0) {
            local_res19 = 0x6432;
            pfVar10 = (float *)(lVar7 * 0x1c + *(longlong *)(param_2 + 0x1040));
            local_res18 = 0x32;
            local_res1b = 0xff;
            FLinearColor::FLinearColor(local_98,&local_res18);
            local_e4 = pfVar10[2] + pfVar10[5];
            local_f0 = pfVar10[2] - pfVar10[5];
            local_f8 = CONCAT44(pfVar10[1] - pfVar10[4],*pfVar10 - pfVar10[3]);
            local_ec = CONCAT44(pfVar10[1] + pfVar10[4],*pfVar10 + pfVar10[3]);
            local_e0 = 1;
            local_d4 = local_f0;
            local_c8 = local_e4;
            FUN_1427055a0(&local_c0,&local_f8,local_98,1,0,0,0);
          }
        }
        local_108 = uVar13 & ~uVar5;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_118);
        uVar13 = local_108;
      } while (local_104 < (int)local_110[6]);
      if (local_a8 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_a8 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*local_a8)(local_a8,1);
        }
      }
    }
  }
  uVar6 = 0;
  if (local_res20 != 0) {
    if (*(longlong *)(local_res20 + 0x460) == 0) {
      if (*(int *)(param_2 + 8) < 1) {
        local_110 = (uint *)(param_3 + 0x1ac0);
        local_118 = 0;
        iVar2 = *(int *)(param_3 + 0x1ad8);
        local_114 = 1;
        local_104 = 0;
        local_100 = 0;
        if (iVar2 != 0) {
          puVar12 = *(uint **)(param_3 + 0x1ad0);
          if (*(uint **)(param_3 + 0x1ad0) == (uint *)0x0) {
            puVar12 = local_110;
          }
          uVar13 = *puVar12;
          while (uVar13 == 0) {
            lVar7 = (longlong)local_118;
            local_100 = local_100 + 0x20;
            iVar11 = local_118 + 1;
            bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_118;
            local_118 = iVar11;
            local_104 = iVar2;
            if (bVar4) goto LAB_141da23d7;
            uVar13 = puVar12[lVar7 + 1];
          }
          local_114 = -uVar13 & uVar13;
          iVar11 = 0x1f;
          if (local_114 != 0) {
            for (; local_114 >> iVar11 == 0; iVar11 = iVar11 + -1) {
            }
          }
          if (local_114 == 0) {
            iVar11 = 0x20;
          }
          else {
            iVar11 = 0x1f - iVar11;
          }
          local_104 = (local_100 - iVar11) + 0x1f;
          if (iVar2 < local_104) {
            local_104 = iVar2;
          }
        }
LAB_141da23d7:
        if (local_104 < iVar2) {
          local_108 = 0xffffffff;
          do {
            lVar7 = *(longlong *)(param_3 + 0x1af0);
            if (*(longlong *)(param_3 + 0x1af0) == 0) {
              lVar7 = param_3 + 0x1ae0;
            }
            puVar12 = (uint *)(lVar7 + (longlong)local_118 * 4);
            *puVar12 = *puVar12 | local_114;
            local_108 = local_108 & ~local_114;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_118);
            uVar6 = 0;
          } while (local_104 < (int)local_110[6]);
        }
      }
      else {
        lVar7 = local_res20 + 0x178;
        bVar9 = ~(byte)(*(uint *)(param_3 + 0x28cc) >> 7) & 1;
        if (local_res10 != '\0') {
          FUN_141d6b290(lVar7,param_1);
        }
        uVar6 = FUN_141d99440(param_2,param_3,bVar9,local_res10);
        if ((local_res10 != '\0') && (FUN_141d78520(lVar7,param_1), bVar9 != 0)) {
          FHZBOcclusionTester::SetValidFrameNumber(lVar7,*(undefined4 *)(local_res20 + 0x25c));
        }
      }
    }
    else {
      uVar6 = FSceneSoftwareOcclusion::Process
                        (*(longlong *)(local_res20 + 0x460),param_1,param_2,param_3);
    }
  }
  FRHICommandListImmediate::SetCurrentStat(param_1,local_res10);
  return uVar6;
}



// FUNCTION 141da2440 FUN_141da2440 body=91 status=ok
// SIG undefined FUN_141da2440(void)

void FUN_141da2440(longlong param_1,uint param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = 1;
  if (param_2 != 0) {
    uVar3 = param_2;
  }
  bVar2 = 0xff;
  if (uVar3 < 0x100) {
    bVar2 = (byte)uVar3;
  }
  *(byte *)(param_1 + 0x4d5) = bVar2;
  bVar1 = *(byte *)(param_1 + 0x4d4);
  if (*(char *)(param_3 + 0x6c) == '\0') {
    bVar1 = bVar1 + 1;
    *(byte *)(param_1 + 0x4d4) = bVar1;
    *(uint *)(param_1 + 0x4d8) = *(int *)(param_1 + 0x4d8) + 1U & 7;
  }
  if (bVar2 <= bVar1) {
    *(undefined1 *)(param_1 + 0x4d4) = 0;
  }
  return;
}



// FUNCTION 141da24a0 FUN_141da24a0 body=156 status=ok
// SIG undefined FUN_141da24a0(void)

void FUN_141da24a0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined4 param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined8 local_18;
  undefined1 local_10 [8];
  
  cVar1 = FUN_141b196e0(*param_2,1);
  if (cVar1 != '\0') {
    cVar1 = FUN_14259cbc0(*param_2);
    if ((cVar1 == '\0') && (param_3 == '\0')) {
      plVar2 = (longlong *)UMaterial::GetDefaultMaterial(0);
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2a8))(plVar2,0,0);
      local_18 = 0;
      (**(code **)(*plVar2 + 0x40))(plVar2,param_4,local_10,&local_18);
      *param_1 = plVar2;
      *param_2 = local_18;
    }
  }
  return;
}



// FUNCTION 141da2540 FUN_141da2540 body=1074 status=ok
// SIG undefined FUN_141da2540(void)

/* WARNING: Removing unreachable block (ram,0x000141da2767) */
/* WARNING: Removing unreachable block (ram,0x000141da2775) */
/* WARNING: Removing unreachable block (ram,0x000141da2784) */

void FUN_141da2540(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  DWORD *pDVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  longlong *plVar19;
  longlong lVar20;
  ulonglong uVar21;
  int iVar22;
  int local_res18;
  longlong local_80 [2];
  longlong local_70;
  longlong local_68;
  longlong local_60;
  
  cVar6 = FUN_141636a40();
  if ((cVar6 == '\0') || (*(int *)(DAT_146a9eec8 + 4) < 1)) {
    lVar20 = *(longlong *)(param_1 + 0xc0);
    lVar10 = (longlong)*(int *)(param_1 + 200) * 0x30d0 + lVar20;
    if (lVar20 != lVar10) {
      plVar16 = (longlong *)(lVar20 + 0x27e8);
      do {
        uVar17 = 0;
        plVar12 = (longlong *)plVar16[-4];
        uVar21 = (longlong)(int)plVar16[-3] & 0x1fffffffffffffff;
        if (plVar12 + (int)plVar16[-3] < plVar12) {
          uVar21 = uVar17;
        }
        if (uVar21 != 0) {
          do {
            uVar18 = 0;
            lVar15 = *plVar12;
            plVar19 = (longlong *)*plVar16;
            if ((longlong *)*plVar16 == (longlong *)0x0) {
              plVar19 = plVar16 + -2;
            }
            uVar4 = *(uint *)(lVar15 + 0xe8);
            uVar9 = uVar4;
            if ((int)uVar4 < 0) {
              uVar9 = uVar4 + 0x1f;
            }
            if ((*(uint *)((longlong)plVar19 + (longlong)((int)uVar9 >> 5) * 4) >> (uVar4 & 0x1f) &
                1) == 0) {
              if ((-1 < (int)uVar4) && ((int)uVar4 < (int)plVar16[-0x1b3])) {
                uVar18 = *(undefined8 *)(plVar16[-0x1b4] + (longlong)(int)uVar4 * 8);
              }
              (**(code **)(**(longlong **)(lVar15 + 8) + 0x148))
                        (*(longlong **)(lVar15 + 8),lVar20,uVar18);
              iVar22 = *(int *)(lVar15 + 0xe8);
              plVar19 = (longlong *)*plVar16;
              if ((longlong *)*plVar16 == (longlong *)0x0) {
                plVar19 = plVar16 + -2;
              }
              iVar14 = iVar22;
              if (iVar22 < 0) {
                iVar14 = iVar22 + 0x1f;
              }
              puVar3 = (uint *)((longlong)plVar19 + (longlong)(iVar14 >> 5) * 4);
              *puVar3 = *puVar3 | 1 << ((byte)iVar22 & 0x1f);
            }
            plVar12 = plVar12 + 1;
            uVar17 = uVar17 + 1;
          } while (uVar17 != uVar21);
        }
        lVar20 = lVar20 + 0x30d0;
        plVar16 = plVar16 + 0x61a;
      } while (lVar20 != lVar10);
    }
  }
  else {
    lVar20 = *(longlong *)(param_1 + 0xc0);
    lVar10 = (longlong)*(int *)(param_1 + 200) * 0x30d0 + lVar20;
    local_68 = lVar10;
    if (lVar20 != lVar10) {
      do {
        iVar22 = *(int *)(lVar20 + 0x27d0);
        if (0 < iVar22) {
          local_res18 = 0;
          iVar7 = (int)ROUND((float)iVar22 * 0.1 + (float)iVar22 * 0.1 + 0.5) >> 1;
          iVar14 = 1;
          if (0 < iVar7) {
            iVar14 = iVar7;
          }
          iVar7 = 100;
          if (99 < iVar14) {
            iVar7 = iVar14;
          }
          do {
            uVar5 = DAT_1464a8210;
            plVar16 = (longlong *)0x0;
            iVar14 = iVar22;
            if (-1 < iVar22 - iVar7) {
              iVar14 = iVar7;
            }
            pDVar11 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
            plVar12 = TlsGetValue(*pDVar11);
            if (plVar12 == (longlong *)0x0) {
              plVar12 = (longlong *)operator_new(0x18);
              if (plVar12 != (longlong *)0x0) {
                *plVar12 = 0;
                plVar12[1] = 0;
                *(undefined4 *)(plVar12 + 2) = 0;
                plVar16 = plVar12;
              }
              TlsSetValue(*pDVar11,plVar16);
              plVar12 = plVar16;
            }
            plVar16 = (longlong *)plVar12[1];
            if (plVar16 == (longlong *)0x0) {
              if (*plVar12 == 0) {
                lVar10 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar11 + 2);
                plVar12[1] = lVar10;
                if (lVar10 == 0) {
                  puVar13 = (undefined8 *)FMemory::Malloc(0x2000,0);
                  plVar12[1] = (longlong)puVar13;
                  lVar10 = 0x1f;
                  do {
                    puVar2 = puVar13 + 0x20;
                    *puVar13 = puVar2;
                    lVar10 = lVar10 + -1;
                    puVar13 = puVar2;
                  } while (lVar10 != 0);
                  *puVar2 = 0;
                }
              }
              else {
                plVar12[1] = *plVar12;
                *plVar12 = 0;
              }
              plVar16 = (longlong *)plVar12[1];
              iVar7 = 0x20;
              *(undefined4 *)(plVar12 + 2) = 0x20;
            }
            else {
              iVar7 = (int)plVar12[2];
            }
            plVar12[1] = *plVar16;
            *(int *)(plVar12 + 2) = iVar7 + -1;
            plVar12 = (longlong *)FUN_1415914c0(local_80);
            local_60 = *plVar12;
            *plVar12 = 0;
            *plVar16 = (longlong)&PTR_FUN_143f3edd8;
            *(undefined4 *)(plVar16 + 1) = 0xff;
            *(undefined4 *)((longlong)plVar16 + 0xc) = 1;
            *plVar16 = (longlong)&PTR_FUN_144e5bba8;
            *(undefined1 *)(plVar16 + 4) = 0;
            plVar16[5] = local_60;
            if (local_80[0] != 0) {
              LOCK();
              piVar1 = (int *)(local_80[0] + 0x48);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                FGraphEvent::Recycle();
              }
            }
            *(int *)(plVar16 + 3) = local_res18;
            plVar16[2] = lVar20;
            *(int *)((longlong)plVar16 + 0x1c) = iVar14;
            lVar10 = plVar16[5];
            if (lVar10 != 0) {
              LOCK();
              *(int *)(lVar10 + 0x48) = *(int *)(lVar10 + 0x48) + 1;
              UNLOCK();
            }
            local_70 = lVar10;
            FUN_14048ab20(plVar16,0,uVar5,1);
            iVar7 = *(int *)(param_2 + 0x28);
            iVar8 = iVar7 + 1;
            *(int *)(param_2 + 0x28) = iVar8;
            if (*(int *)(param_2 + 0x2c) < iVar8) {
              TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow()
              ;
            }
            lVar15 = *(longlong *)(param_2 + 0x20);
            if (*(longlong *)(param_2 + 0x20) == 0) {
              lVar15 = param_2;
            }
            local_res18 = local_res18 + iVar14;
            iVar22 = iVar22 - iVar14;
            *(longlong *)(lVar15 + (longlong)iVar7 * 8) = lVar10;
            lVar10 = local_68;
            iVar7 = iVar14;
          } while (0 < iVar22);
        }
        lVar20 = lVar20 + 0x30d0;
      } while (lVar20 != lVar10);
    }
  }
  return;
}



// FUNCTION 141da2980 FUN_141da2980 body=6509 status=ok
// SIG undefined FUN_141da2980(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141da2980(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  DWORD DVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  float *pfVar14;
  float *pfVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong *plVar23;
  longlong lVar24;
  undefined8 *puVar25;
  uint uVar26;
  uint *puVar27;
  uint uVar28;
  ulonglong uVar29;
  longlong lVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auStack_4d8 [32];
  undefined8 *local_4b8;
  float local_4b0;
  undefined8 *local_4a8;
  uint local_4a0;
  undefined8 *local_498;
  undefined1 local_490;
  undefined1 local_488 [8];
  float local_480;
  float local_47c;
  float local_478;
  float local_470;
  float fStack_46c;
  float fStack_468;
  float fStack_464;
  undefined1 local_460 [4];
  float local_45c;
  int local_458;
  float local_454;
  float local_450 [4];
  undefined8 local_440;
  float local_438;
  undefined8 local_434;
  float local_42c;
  longlong local_428;
  undefined8 local_420;
  float local_418;
  undefined8 local_410;
  float local_408;
  float local_400;
  float local_3fc;
  float local_3f8 [4];
  float local_3e8;
  float fStack_3e4;
  float fStack_3e0;
  undefined4 uStack_3dc;
  float local_3d8;
  float fStack_3d4;
  float fStack_3d0;
  undefined4 uStack_3cc;
  float local_3c8;
  float fStack_3c4;
  float fStack_3c0;
  undefined4 uStack_3bc;
  longlong local_3b8;
  longlong lStack_3b0;
  int local_3a8;
  uint uStack_3a4;
  uint *puStack_3a0;
  undefined4 local_398;
  uint uStack_394;
  int iStack_390;
  undefined4 uStack_38c;
  float local_388;
  float fStack_384;
  float local_380;
  float local_37c;
  float fStack_378;
  float local_374;
  float local_370;
  float fStack_36c;
  float local_368;
  float local_364;
  float fStack_360;
  float local_35c;
  float local_358;
  float fStack_354;
  float local_350;
  undefined8 local_348;
  undefined4 local_340;
  float local_33c;
  float local_338;
  float local_334;
  float local_330;
  float local_32c;
  float local_328;
  float local_324;
  float local_320;
  undefined8 local_31c;
  float local_314;
  float local_310;
  float local_30c;
  float local_308;
  float local_304;
  float local_300;
  float local_2fc;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  float fStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float local_2c4;
  float local_2c0;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  float local_29c;
  float local_278;
  float fStack_274;
  undefined8 uStack_270;
  undefined **local_260;
  longlong local_258;
  longlong local_250;
  undefined8 *local_248;
  undefined8 uStack_240;
  longlong *local_238;
  int local_230;
  uint uStack_22c;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  longlong *local_1b8;
  ulonglong local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined *local_198;
  undefined1 *puStack_190;
  uint local_178;
  uint uStack_174;
  undefined1 local_168 [16];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined1 local_134;
  wchar_t *local_130;
  undefined8 local_128;
  undefined4 local_120;
  longlong local_118 [4];
  longlong *local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  
  uVar8 = local_488[0];
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_4d8;
  iVar18 = *(int *)(param_1 + 200);
  uVar13 = 0;
  uVar22 = uVar13;
  uVar29 = uVar13;
  if (0 < iVar18) {
    do {
      lVar24 = *(longlong *)(param_1 + 0xc0);
      FTranslucentPrimSet::SortPrimitives(lVar24 + 0x1d70 + uVar22);
      FUN_141d82b10(*(undefined8 *)(uVar22 + 0x1da8 + lVar24),
                    (longlong)*(int *)(uVar22 + 0x1db0 + lVar24),uVar8,local_460);
      lVar24 = *(longlong *)(uVar22 + 0x18 + lVar24);
      if (lVar24 != 0) {
        FUN_141be8450(lVar24,*(undefined8 *)(param_1 + 8));
      }
      iVar18 = *(int *)(param_1 + 200);
      uVar28 = (int)uVar29 + 1;
      uVar22 = uVar22 + 0x30d0;
      uVar29 = (ulonglong)uVar28;
    } while ((int)uVar28 < iVar18);
  }
  lVar24 = *(longlong *)(param_1 + 8);
  if ((*(int *)(lVar24 + 8) < 2) && (uVar22 = uVar13, 0 < iVar18)) {
    do {
      lVar24 = *(longlong *)(param_1 + 0xc0);
      uVar28 = (int)uVar22 + 1;
      *(undefined1 *)(uVar13 + 0x3010 + lVar24) = 0;
      *(undefined8 *)(uVar13 + 0x2fe0 + lVar24) = 0;
      puVar5 = (undefined4 *)(uVar13 + 0x2ff0 + lVar24);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0x3f800000;
      puVar5 = (undefined4 *)(uVar13 + 0x3000 + lVar24);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0x3f800000;
      uVar13 = uVar13 + 0x30d0;
      uVar22 = (ulonglong)uVar28;
    } while ((int)uVar28 < *(int *)(param_1 + 200));
    lVar24 = *(longlong *)(param_1 + 8);
  }
  if (0 < *(int *)(lVar24 + 0x13e0)) {
    if ((DAT_1464c3124 == 0) || (cVar9 = FUN_1415bac00(), cVar9 == '\0')) {
      FIndirectLightingCache::UpdateCache
                (*(longlong *)(param_1 + 8) + 0x13e8,*(longlong *)(param_1 + 8),param_1,1);
    }
    else {
      local_4b8 = param_2;
      FIndirectLightingCache::StartUpdateCachePrimitivesTask
                (*(longlong *)(param_1 + 8) + 0x13e8,*(longlong *)(param_1 + 8),param_1,1);
    }
  }
  if ((*(uint *)(param_1 + 0x3c) & 0x1000) != 0) {
    lVar24 = *(longlong *)(param_1 + 0xc0);
    iVar18 = *(int *)(param_1 + 200);
    lVar30 = (longlong)iVar18 * 0x30d0 + lVar24;
    if (lVar24 != lVar30) {
      do {
        plVar11 = (longlong *)FTaskGraphInterface::Get();
        local_f8 = (longlong *)0x0;
        local_f0 = 1;
        TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                  (local_118,0);
        lVar6 = *(longlong *)(lVar24 + 0x30b8);
        plVar12 = local_118;
        if (local_f8 != (longlong *)0x0) {
          plVar12 = local_f8;
        }
        *plVar12 = lVar6;
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 0x48) = *(int *)(lVar6 + 0x48) + 1;
          UNLOCK();
        }
        (**(code **)(*plVar11 + 0x48))(plVar11,local_118,0xff);
        plVar12 = local_118;
        iVar18 = (int)local_f0;
        if (local_f8 != (longlong *)0x0) {
          plVar12 = local_f8;
        }
        for (; iVar18 != 0; iVar18 = iVar18 + -1) {
          if (*plVar12 != 0) {
            LOCK();
            piVar1 = (int *)(*plVar12 + 0x48);
            iVar20 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar20 == 1) {
              FGraphEvent::Recycle();
            }
          }
          plVar12 = plVar12 + 1;
        }
        if (local_f8 != (longlong *)0x0) {
          FMemory::Free();
        }
        lVar24 = lVar24 + 0x30d0;
      } while (lVar24 != lVar30);
      iVar18 = *(int *)(param_1 + 200);
    }
    piVar1 = *(int **)(param_1 + 0xc0);
    iVar20 = 0;
    if (piVar1 != piVar1 + (longlong)iVar18 * 0xc34) {
      piVar19 = piVar1 + 0x78b;
      do {
        iVar20 = iVar20 + (piVar19[-0xb] - *piVar19);
        piVar4 = piVar19 + 0x4a9;
        piVar19 = piVar19 + 0xc34;
      } while (piVar4 != piVar1 + (longlong)iVar18 * 0xc34);
      if (iVar20 != 0) {
        local_130 = L"LightParameters";
        local_4a8 = &local_158;
        uVar28 = 0;
        if (DAT_1464c9c54 == 0x14) {
          uVar28 = 2;
        }
        local_158 = 0;
        uStack_150 = 0;
        local_4b0 = (float)(uVar28 | 0x200);
        local_148 = 1;
        local_144 = _DAT_1468b5d78;
        uStack_140 = uRam00000001468b5d7c;
        uStack_13c = uRam00000001468b5d80;
        uStack_138 = uRam00000001468b5d84;
        local_134 = 0;
        local_128 = 0;
        local_120 = 0;
        local_4b8 = (undefined8 *)CONCAT44(local_4b8._4_4_,iVar20 * 0xe0);
        (**(code **)(*DAT_146ab6358 + 0x498))(DAT_146ab6358,&local_410,&DAT_146ab6e78,0xe0);
        TRefCountPtr<FRHIIndexBuffer>::operator=(*(longlong *)(param_1 + 8) + 0x60d8,&local_410);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_410);
        (**(code **)(*DAT_146ab6358 + 0x620))
                  (DAT_146ab6358,&local_428,&DAT_146ab6e78,
                   *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x60d8));
        TRefCountPtr<FRHIIndexBuffer>::operator=(*(longlong *)(param_1 + 8) + 0x60e0,&local_428);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_428);
      }
    }
    local_458 = 0;
    if (0 < *(int *)(param_1 + 200)) {
      local_428 = 0;
      do {
        uStack_3a4 = 1;
        lVar24 = local_428 * 0x30d0 + *(longlong *)(param_1 + 0xc0);
        local_3a8 = 0;
        uStack_394 = 0;
        iStack_390 = 0;
        local_238 = (longlong *)(lVar24 + 0x1df8);
        uVar28 = *(uint *)(lVar24 + 0x1e20);
        puVar2 = (uint *)(lVar24 + 0x1e08);
        if (uVar28 != 0) {
          puVar27 = *(uint **)(lVar24 + 0x1e18);
          if (*(uint **)(lVar24 + 0x1e18) == (uint *)0x0) {
            puVar27 = puVar2;
          }
          uVar26 = *puVar27;
          while (uVar26 == 0) {
            lVar30 = (longlong)local_3a8;
            iStack_390 = iStack_390 + 0x20;
            iVar18 = local_3a8 + 1;
            bVar7 = (int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_3a8;
            local_3a8 = iVar18;
            if (bVar7) goto LAB_141da2e9f;
            uVar26 = puVar27[lVar30 + 1];
          }
          uStack_3a4 = uVar26 - 1 & uVar26 ^ uVar26;
          iVar18 = 0x1f;
          if (uStack_3a4 != 0) {
            for (; uStack_3a4 >> iVar18 == 0; iVar18 = iVar18 + -1) {
            }
          }
          if (uStack_3a4 == 0) {
            iVar18 = 0x20;
          }
          else {
            iVar18 = 0x1f - iVar18;
          }
          uStack_394 = (iStack_390 - iVar18) + 0x1f;
          if ((int)uVar28 < (int)uStack_394) {
LAB_141da2e9f:
            uStack_394 = uVar28;
          }
        }
        local_398 = 0xffffffff;
        uStack_174 = *(uint *)(lVar24 + 0x1e20);
        local_220 = CONCAT44(uStack_394,0xffffffff);
        uStack_218 = CONCAT44(uStack_38c,iStack_390);
        local_178 = -1 << ((byte)uStack_174 & 0x1f);
        uVar26 = uStack_174 & 0xffffffe0;
        local_230 = local_3a8;
        uStack_22c = uStack_3a4;
        puStack_3a0 = puVar2;
        uStack_228 = puVar2;
        uVar21 = uStack_174;
        if (uStack_174 != uVar28) {
          puVar27 = *(uint **)(lVar24 + 0x1e18);
          if (*(uint **)(lVar24 + 0x1e18) == (uint *)0x0) {
            puVar27 = puVar2;
          }
          uVar21 = puVar27[(int)uStack_174 >> 5] & local_178;
          iVar18 = (int)uStack_174 >> 5;
          while (uVar21 == 0) {
            uVar26 = uVar26 + 0x20;
            if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar18)
            goto LAB_141da2f70;
            uVar21 = puVar27[(longlong)iVar18 + 1];
            local_178 = 0xffffffff;
            iVar18 = iVar18 + 1;
          }
          uVar21 = uVar21 - 1 & uVar21 ^ uVar21;
          iVar18 = 0x1f;
          if (uVar21 != 0) {
            for (; uVar21 >> iVar18 == 0; iVar18 = iVar18 + -1) {
            }
          }
          if (uVar21 == 0) {
            iVar18 = 0x20;
          }
          else {
            iVar18 = 0x1f - iVar18;
          }
          uStack_174 = (uVar26 - iVar18) + 0x1f;
          uVar21 = uStack_174;
          if ((int)uVar28 < (int)uStack_174) {
LAB_141da2f70:
            uStack_174 = uVar28;
            uVar21 = uVar28;
          }
        }
        while( true ) {
          plVar12 = (longlong *)0x0;
          if ((local_220._4_4_ == uVar21) && (uStack_228 == puVar2)) {
            bVar7 = true;
          }
          else {
            bVar7 = false;
          }
          if ((bVar7) && (local_238 == (longlong *)(lVar24 + 0x1df8))) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if (!bVar7) break;
          lVar30 = *(longlong *)
                    (*(longlong *)((longlong)(int)local_220._4_4_ * 0x78 + *local_238 + 0x70) + 0x20
                    );
          iVar18 = *(int *)(lVar30 + 0x58);
          plVar11 = *(longlong **)(lVar30 + 0x30);
          if ((iVar18 < 0) || (*(int *)(param_1 + 0x1f0) <= iVar18)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if (bVar7) {
            lVar30 = *(longlong *)(param_1 + 0x1e8);
            if (*(longlong *)(param_1 + 0x1e8) == 0) {
              lVar30 = param_1 + 0x1d8;
            }
            iVar20 = iVar18;
            if (iVar18 < 0) {
              iVar20 = iVar18 + 0x1f;
            }
            if ((*(uint *)(lVar30 + (longlong)(iVar20 >> 5) * 4) & 1 << ((byte)iVar18 & 0x1f)) == 0)
            goto LAB_141da3035;
            bVar7 = true;
          }
          else {
LAB_141da3035:
            bVar7 = false;
          }
          if (!bVar7) {
            local_208 = 0;
            local_1a8 = 0;
            local_1b8 = (longlong *)0x0;
            local_1a0 = 0;
            local_200 = 0;
            local_1f8 = 0;
            local_1f0 = 0;
            local_1e8 = 0;
            local_1e0 = 0;
            local_1d8 = 0;
            local_1d0 = 0;
            local_1c8 = 0;
            local_1c0 = 0;
            local_1b0 = 0;
            lVar30 = FUN_141d9f1d0(param_1 + 0x1c8,local_168,iVar18);
            plVar23 = plVar12;
            if (*(longlong *)(lVar30 + 8) != 0) {
              FVisibleLightInfo::FVisibleLightInfo(*(longlong *)(lVar30 + 8),&local_208);
              plVar12 = (longlong *)(local_1b0 & 0xffffffff);
              plVar23 = local_1b8;
            }
            uVar28 = (uint)plVar12;
            while (uVar28 != 0) {
              puVar16 = (undefined8 *)*plVar23;
              if (puVar16 != (undefined8 *)0x0) {
                piVar1 = (int *)(puVar16 + 1);
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  (**(code **)*puVar16)(puVar16,1);
                }
              }
              plVar23 = plVar23 + 1;
              uVar28 = (int)plVar12 - 1;
              plVar12 = (longlong *)(ulonglong)uVar28;
            }
          }
          if ((char)plVar11[0x31] == '\x01') {
            cVar9 = (**(code **)(*plVar11 + 0x58))(plVar11);
            if (cVar9 != '\0') {
              iVar18 = *(int *)(lVar24 + 0x1e38);
              *(int *)(lVar24 + 0x1e38) = iVar18 + 1;
              if (*(int *)(lVar24 + 0x1e3c) < iVar18 + 1) {
                FUN_140822430(lVar24 + 0x1e30,iVar18);
              }
              *(longlong **)(*(longlong *)(lVar24 + 0x1e30) + (longlong)iVar18 * 8) = plVar11;
            }
          }
          if (((*(char *)(lVar24 + 0x1203) != '\0') && ((*(uint *)(plVar11 + 0x30) >> 2 & 1) != 0))
             && ((char)plVar11[0x31] != '\0')) {
            local_480 = *(float *)(plVar11 + 0x14);
            local_47c = *(float *)((longlong)plVar11 + 0xa4);
            local_478 = *(float *)(plVar11 + 0x15);
            fVar37 = local_480 - *(float *)(lVar24 + 0x8dc);
            fVar36 = local_47c - *(float *)(lVar24 + 0x8e0);
            fVar35 = local_478 - *(float *)(lVar24 + 0x8e4);
            fVar39 = fVar37 * fVar37 + fVar36 * fVar36 + fVar35 * fVar35;
            local_450[0] = fVar37;
            local_450[1] = fVar36;
            local_450[2] = fVar35;
            fVar31 = (float)(**(code **)(*plVar11 + 0x18))(plVar11);
            if (fVar39 < fVar31 * fVar31) {
              local_2e8 = 0;
              uStack_2e4 = 0;
              uStack_2e0 = 0;
              fStack_2dc = 1.0;
              local_2d8 = 0;
              uStack_2d4 = 0;
              uStack_2d0 = 0;
              fStack_2cc = 1.0;
              (**(code **)(*plVar11 + 0x68))(plVar11,0);
              if (DAT_1468b1f88 == (longlong *)0x0) {
                IConsoleManager::SetupSingleton();
              }
              plVar12 = (longlong *)
                        (**(code **)(*DAT_1468b1f88 + 0x98))
                                  (DAT_1468b1f88,L"r.ReflectionCaptureResolution");
              if (plVar12 == (longlong *)0x0) {
                lVar30 = 0;
              }
              else {
                lVar30 = (**(code **)(*plVar12 + 0x38))(plVar12);
              }
              cVar9 = FUN_1415ad720(&DAT_1468e2448);
              if ((cVar9 == '\0') && (DAT_1468c21ae != '\0')) {
                DVar10 = GetCurrentThreadId();
                uVar13 = 1;
                if (DVar10 == DAT_1468c21c0) goto LAB_141da32be;
              }
              else {
LAB_141da32be:
                uVar13 = 0;
              }
              fVar32 = (float)*(int *)(lVar30 + uVar13 * 4);
              fVar31 = (SQRT(fVar39) * 0.75) / fVar32;
              if (local_2a4 <= fVar31) {
                local_2a4 = fVar31;
              }
              local_3f8[0] = ABS(fVar37);
              local_3f8[1] = ABS(fVar36);
              local_3f8[2] = ABS(fVar35);
              if (local_3f8[0] <= local_3f8[1]) {
                uVar13 = (ulonglong)((local_3f8[1] <= local_3f8[2]) + 1);
              }
              else {
                uVar13 = 2;
                if (local_3f8[2] < local_3f8[0]) {
                  uVar13 = 0;
                }
              }
              fVar32 = fVar32 * 0.5;
              iVar18 = (int)uVar13;
              lVar30 = 2;
              do {
                iVar18 = iVar18 + 1;
                iVar20 = iVar18 + (iVar18 / 3 + (iVar18 >> 0x1f) +
                                  (int)(((longlong)iVar18 / 3 + ((longlong)iVar18 >> 0x3f) &
                                        0xffffffffU) >> 0x1f)) * -3;
                if (iVar20 == 0) {
                  pfVar14 = local_450;
                }
                else {
                  pfVar14 = local_450 + 1;
                  if (iVar20 != 1) {
                    pfVar14 = local_450 + 2;
                  }
                }
                fVar31 = local_3f8[0];
                if ((uVar13 != 0) && (fVar31 = local_3f8[2], uVar13 == 1)) {
                  fVar31 = local_3f8[1];
                }
                fVar31 = (*pfVar14 / fVar31) * fVar32;
                if (uVar13 == 0) {
                  pfVar14 = local_3f8;
                }
                else {
                  pfVar14 = local_3f8 + 1;
                  if (uVar13 != 1) {
                    pfVar14 = local_3f8 + 2;
                  }
                }
                if (iVar20 == 0) {
                  pfVar15 = local_450;
                }
                else {
                  pfVar15 = local_450 + 1;
                  if (iVar20 != 1) {
                    pfVar15 = local_450 + 2;
                  }
                }
                *pfVar15 = ((float)((int)ROUND((fVar31 - 0.5) + fVar31) >> 1) + 0.5) *
                           (1.0 / fVar32) * *pfVar14;
                fVar36 = local_450[2];
                fVar35 = local_450[1];
                fVar31 = local_450[0];
                lVar30 = lVar30 + -1;
              } while (lVar30 != 0);
              local_480 = local_450[0] + *(float *)(lVar24 + 0x8dc);
              local_47c = local_450[1] + *(float *)(lVar24 + 0x8e0);
              local_478 = local_450[2] + *(float *)(lVar24 + 0x8e4);
              FUN_14161f6d0(&local_470,&local_2d8);
              cVar9 = (**(code **)(*plVar11 + 0x38))(plVar11);
              if (cVar9 == '\0') {
                fVar37 = 4.0 / (local_2a4 * 6.2831855 * local_29c +
                               local_2a4 * local_2a4 * 12.566371);
                local_470 = local_470 * fVar37;
                fStack_46c = fStack_46c * fVar37;
                fStack_468 = fStack_468 * fVar37;
                fStack_464 = fStack_464 * fVar37;
              }
              cVar9 = (**(code **)(*plVar11 + 0x30))(plVar11);
              if (cVar9 == '\0') {
                fVar37 = fVar39 + 1.0;
                fStack_46c = fStack_46c * fVar37;
                local_470 = local_470 * fVar37;
                fStack_468 = fStack_468 * fVar37;
                fVar39 = _guard_xfg_dispatch_icall_nop
                                   (1.0 - fStack_2dc * fStack_2dc * fVar39,fStack_2cc);
              }
              else {
                fVar39 = fStack_2dc * fStack_2dc * fVar39;
                fVar39 = 1.0 - fVar39 * fVar39;
                fVar39 = fVar39 * fVar39;
              }
              fVar33 = fVar35 * fVar35 + fVar31 * fVar31 + fVar36 * fVar36;
              fVar37 = fVar31;
              fVar32 = fVar35;
              fVar38 = fVar36;
              if ((fVar33 != 1.0) &&
                 (fVar37 = DAT_1468b5d90, fVar32 = DAT_1468b5d94, fVar38 = DAT_1468b5d98,
                 1e-08 <= fVar33)) {
                auVar34 = rsqrtss(ZEXT416((uint)fVar33),ZEXT416((uint)fVar33));
                local_45c = auVar34._0_4_;
                local_45c = local_45c + local_45c * (0.5 - fVar33 * 0.5 * local_45c * local_45c);
                local_45c = local_45c + local_45c * (0.5 - fVar33 * 0.5 * local_45c * local_45c);
                fVar37 = local_45c * fVar31;
                fVar32 = local_45c * fVar35;
                fVar38 = local_45c * fVar36;
              }
              fVar31 = ((fVar37 * local_2c8 + fVar32 * local_2c4 + local_2c0 * fVar38) - local_2b0)
                       * local_2ac;
              if (0.0 <= fVar31) {
                if (1.0 <= fVar31) {
                  fVar31 = 1.0;
                }
              }
              else {
                fVar31 = 0.0;
              }
              fStack_464 = fVar31 * fVar31 * fVar39 * local_2a8;
              cVar9 = (**(code **)(*plVar11 + 0x38))(plVar11);
              if ((cVar9 == '\0') ||
                 (0.0 <= fVar37 * local_2c8 + fVar32 * local_2c4 + local_2c0 * fVar38)) {
                puStack_190 = local_488;
                local_488[0] = 0;
                local_198 = &DAT_14060d670;
                local_278 = 3.5130882;
                fStack_274 = 1.4013e-45;
                uStack_270 = puStack_190;
                lVar30 = FUN_1415d8310(&local_278,&DAT_146216a38);
                puVar25 = (undefined8 *)(*(longlong *)(lVar30 + 0x18) + 0xfU & 0xfffffffffffffff0);
                puVar3 = (ulonglong *)(lVar30 + 0x18);
                puVar16 = puVar25 + 0x2b;
                if (*(undefined8 **)(lVar30 + 0x20) < puVar16) {
                  FMemStackBase::AllocateNewChunk(puVar3,0x168);
                  puVar25 = (undefined8 *)(*puVar3 + 0xf & 0xfffffffffffffff0);
                  puVar16 = puVar25 + 0x2b;
                }
                *puVar3 = (ulonglong)puVar16;
                if (puVar25 != (undefined8 *)0x0) {
                  local_348 = 0x3e;
                  uVar17 = (**(code **)(**(longlong **)(DAT_146b17150 + 0x3c0) + 0x2a8))
                                     (*(longlong **)(DAT_146b17150 + 0x3c0),0,0);
                  FUN_14257dfd0(puVar25);
                  puVar25[0x27] = uVar17;
                  *puVar25 = &PTR__scalar_deleting_destructor__1440fad20;
                  puVar25[0x2a] = local_348;
                  puVar25[0x28] = CONCAT44(fStack_46c,local_470);
                  puVar25[0x29] = CONCAT44(fStack_464,fStack_468);
                }
                local_3e8 = *(float *)(plVar11 + 0xe);
                fStack_3e4 = *(float *)((longlong)plVar11 + 0x74);
                fStack_3e0 = *(float *)(plVar11 + 0xf);
                uStack_3dc = *(undefined4 *)((longlong)plVar11 + 0x7c);
                local_3d8 = *(float *)(plVar11 + 0x10);
                fStack_3d4 = *(float *)((longlong)plVar11 + 0x84);
                fStack_3d0 = *(float *)(plVar11 + 0x11);
                uStack_3cc = *(undefined4 *)((longlong)plVar11 + 0x8c);
                local_3c8 = *(float *)(plVar11 + 0x12);
                fStack_3c4 = *(float *)((longlong)plVar11 + 0x94);
                local_278 = *(float *)(plVar11 + 0x13);
                uStack_3bc = *(undefined4 *)((longlong)plVar11 + 0x9c);
                local_3b8 = plVar11[0x14];
                lStack_3b0 = plVar11[0x15];
                fVar35 = local_3e8 * local_3e8 + fStack_3e4 * fStack_3e4 + fStack_3e0 * fStack_3e0;
                fVar39 = local_3d8 * local_3d8 + fStack_3d4 * fStack_3d4 + fStack_3d0 * fStack_3d0;
                local_45c = local_3c8 * local_3c8 + fStack_3c4 * fStack_3c4 + local_278 * local_278;
                auVar34 = rsqrtss(ZEXT416((uint)fVar35),ZEXT416((uint)fVar35));
                local_400 = auVar34._0_4_;
                local_400 = local_400 + local_400 * (0.5 - fVar35 * 0.5 * local_400 * local_400);
                local_400 = local_400 + local_400 * (0.5 - fVar35 * 0.5 * local_400 * local_400);
                fVar31 = local_400;
                if (fVar35 < 1e-08) {
                  fVar31 = 1.0;
                }
                auVar34 = rsqrtss(ZEXT416((uint)fVar39),ZEXT416((uint)fVar39));
                local_454 = auVar34._0_4_;
                local_454 = local_454 + local_454 * (0.5 - fVar39 * 0.5 * local_454 * local_454);
                local_454 = local_454 + local_454 * (0.5 - fVar39 * 0.5 * local_454 * local_454);
                fVar35 = local_454;
                if (fVar39 < 1e-08) {
                  fVar35 = 1.0;
                }
                auVar34 = rsqrtss(ZEXT416((uint)local_45c),ZEXT416((uint)local_45c));
                local_3fc = auVar34._0_4_;
                local_3fc = local_3fc + local_3fc * (0.5 - local_45c * 0.5 * local_3fc * local_3fc);
                local_3fc = local_3fc + local_3fc * (0.5 - local_45c * 0.5 * local_3fc * local_3fc);
                fVar39 = local_3fc;
                if (local_45c < 1e-08) {
                  fVar39 = 1.0;
                }
                fStack_3c0 = local_278 * fVar39;
                local_260 = &PTR__scalar_deleting_destructor__144deb6d0;
                local_3c8 = local_3c8 * fVar39;
                fStack_3c4 = fStack_3c4 * fVar39;
                local_3d8 = local_3d8 * fVar35;
                fStack_3d4 = fStack_3d4 * fVar35;
                fStack_3d0 = fStack_3d0 * fVar35;
                local_3e8 = local_3e8 * fVar31;
                fStack_3e4 = fStack_3e4 * fVar31;
                fStack_3e0 = fStack_3e0 * fVar31;
                local_248 = (undefined8 *)0x0;
                uStack_240 = 0;
                fStack_274 = local_278;
                uStack_270._0_4_ = local_278;
                uStack_270._4_4_ = local_278;
                local_258 = lVar24;
                local_250 = lVar24;
                cVar9 = (**(code **)(*plVar11 + 0x38))(plVar11);
                if (cVar9 == '\0') {
                  local_4a8 = puVar25;
                  if (local_29c <= 0.0) {
                    local_498 = (undefined8 *)((ulonglong)local_498._1_7_ << 8);
                    local_4a0 = (uint)local_4a0._1_3_ << 8;
                    local_4b0 = 3.36312e-44;
                    local_4b8 = (undefined8 *)CONCAT44(local_4b8._4_4_,0x24);
                    local_2f8 = local_2a4 * (float)DAT_1464aa788;
                    local_2f4 = local_2a4 * DAT_1464aa788._4_4_;
                    local_2f0 = local_2a4 * DAT_1464aa790;
                    FUN_1427044e0(&local_260,&local_480,&DAT_1468b5da0,&local_2f8);
                  }
                  else {
                    local_364 = local_3c8;
                    fStack_360 = fStack_3c4;
                    local_35c = fStack_3c0;
                    fVar31 = local_3c8 * local_3c8 + fStack_3c4 * fStack_3c4 +
                             fStack_3c0 * fStack_3c0;
                    if (fVar31 == 1.0) {
                      local_410 = CONCAT44(fStack_3c4,local_3c8);
                      local_408 = fStack_3c0;
                      fVar39 = fStack_3c4;
                      fVar35 = local_3c8;
                      fVar36 = fStack_3c0;
                    }
                    else {
                      fVar39 = DAT_1468b5d94;
                      fVar35 = DAT_1468b5d90;
                      fVar36 = DAT_1468b5d98;
                      if (1e-08 <= fVar31) {
                        auVar34 = rsqrtss(ZEXT416((uint)fVar31),ZEXT416((uint)fVar31));
                        fVar36 = auVar34._0_4_;
                        fVar36 = fVar36 + fVar36 * (0.5 - fVar31 * 0.5 * fVar36 * fVar36);
                        fVar36 = fVar36 + fVar36 * (0.5 - fVar31 * 0.5 * fVar36 * fVar36);
                        fVar39 = fStack_3c4 * fVar36;
                        fVar35 = local_3c8 * fVar36;
                        fVar36 = fStack_3c0 * fVar36;
                      }
                    }
                    local_498 = (undefined8 *)((ulonglong)local_498._1_7_ << 8);
                    fVar31 = local_29c * 0.5;
                    local_4a0 = (uint)local_4a0._1_3_ << 8;
                    local_4b0 = 3.36312e-44;
                    local_4b8._0_4_ = 0x24;
                    local_324 = fVar39 * fVar31 + local_47c;
                    local_320 = fVar36 * fVar31 + local_478;
                    local_328 = local_480 + fVar35 * fVar31;
                    local_334 = local_2a4 * (float)DAT_1464aa788;
                    local_330 = local_2a4 * DAT_1464aa788._4_4_;
                    local_32c = local_2a4 * DAT_1464aa790;
                    FUN_1427044e0(&local_260,&local_328,&DAT_1468b5da0,&local_334);
                    local_310 = local_2a4 * (float)DAT_1464aa788;
                    local_308 = local_2a4 * DAT_1464aa790;
                    local_30c = local_2a4 * DAT_1464aa788._4_4_;
                    local_358 = local_3c8;
                    fStack_354 = fStack_3c4;
                    local_350 = fStack_3c0;
                    fVar31 = local_3c8 * local_3c8 + fStack_3c4 * fStack_3c4 +
                             fStack_3c0 * fStack_3c0;
                    if (fVar31 == 1.0) {
                      local_31c = CONCAT44(fStack_3c4,local_3c8);
                      local_314 = fStack_3c0;
                      fVar39 = fStack_3c0;
                      fVar35 = local_3c8;
                      fVar36 = fStack_3c4;
                    }
                    else {
                      fVar39 = DAT_1468b5d98;
                      fVar35 = DAT_1468b5d90;
                      fVar36 = DAT_1468b5d94;
                      if (1e-08 <= fVar31) {
                        auVar34 = rsqrtss(ZEXT416((uint)fVar31),ZEXT416((uint)fVar31));
                        fVar39 = auVar34._0_4_;
                        fVar39 = fVar39 + fVar39 * (0.5 - fVar31 * 0.5 * fVar39 * fVar39);
                        fVar39 = fVar39 + fVar39 * (0.5 - fVar31 * 0.5 * fVar39 * fVar39);
                        fVar36 = fStack_3c4 * fVar39;
                        fVar35 = local_3c8 * fVar39;
                        fVar39 = fStack_3c0 * fVar39;
                      }
                    }
                    fVar31 = local_29c * 0.5;
                    local_498 = (undefined8 *)((ulonglong)local_498 & 0xffffffffffffff00);
                    local_4a0 = local_4a0 & 0xffffff00;
                    local_4b0 = 3.36312e-44;
                    local_4b8 = (undefined8 *)CONCAT44(local_4b8._4_4_,0x24);
                    local_300 = local_47c - fVar36 * fVar31;
                    local_304 = local_480 - fVar35 * fVar31;
                    local_2fc = local_478 - fVar39 * fVar31;
                    local_4a8 = puVar25;
                    FUN_1427044e0(&local_260,&local_304,&DAT_1468b5da0,&local_310);
                    local_388 = local_3c8;
                    fStack_384 = fStack_3c4;
                    local_380 = fStack_3c0;
                    fVar31 = local_3c8 * local_3c8 + fStack_3c4 * fStack_3c4 +
                             fStack_3c0 * fStack_3c0;
                    if (fVar31 == 1.0) {
                      local_420 = CONCAT44(fStack_3c4,local_3c8);
                      local_418 = fStack_3c0;
                    }
                    else if (1e-08 <= fVar31) {
                      auVar34 = rsqrtss(ZEXT416((uint)fVar31),ZEXT416((uint)fVar31));
                      fVar39 = auVar34._0_4_;
                      fVar39 = fVar39 + fVar39 * (0.5 - fVar31 * 0.5 * fVar39 * fVar39);
                      fVar39 = fVar39 + fVar39 * (0.5 - fVar31 * 0.5 * fVar39 * fVar39);
                      local_418 = fStack_3c0 * fVar39;
                      local_420 = CONCAT44(fStack_3c4 * fVar39,local_3c8 * fVar39);
                    }
                    else {
                      local_420 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
                      local_418 = DAT_1468b5d98;
                    }
                    local_37c = local_3d8;
                    fStack_378 = fStack_3d4;
                    local_374 = fStack_3d0;
                    fVar31 = local_3d8 * local_3d8 + fStack_3d4 * fStack_3d4 +
                             fStack_3d0 * fStack_3d0;
                    if (fVar31 == 1.0) {
                      local_440 = CONCAT44(fStack_3d4,local_3d8);
                      local_438 = fStack_3d0;
                    }
                    else if (1e-08 <= fVar31) {
                      auVar34 = rsqrtss(ZEXT416((uint)fVar31),ZEXT416((uint)fVar31));
                      fVar39 = auVar34._0_4_;
                      fVar39 = fVar39 + fVar39 * (0.5 - fVar31 * 0.5 * fVar39 * fVar39);
                      fVar39 = fVar39 + fVar39 * (0.5 - fVar31 * 0.5 * fVar39 * fVar39);
                      local_438 = fStack_3d0 * fVar39;
                      local_440 = CONCAT44(fStack_3d4 * fVar39,local_3d8 * fVar39);
                    }
                    else {
                      local_440 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
                      local_438 = DAT_1468b5d98;
                    }
                    local_370 = local_3e8;
                    fStack_36c = fStack_3e4;
                    local_368 = fStack_3e0;
                    fVar31 = local_3e8 * local_3e8 + fStack_3e4 * fStack_3e4 +
                             fStack_3e0 * fStack_3e0;
                    if (fVar31 == 1.0) {
                      local_434 = CONCAT44(fStack_3e4,local_3e8);
                      local_42c = fStack_3e0;
                    }
                    else if (1e-08 <= fVar31) {
                      auVar34 = rsqrtss(ZEXT416((uint)fVar31),ZEXT416((uint)fVar31));
                      fVar39 = auVar34._0_4_;
                      fVar39 = fVar39 + fVar39 * (0.5 - fVar31 * 0.5 * fVar39 * fVar39);
                      fVar39 = fVar39 + fVar39 * (0.5 - fVar31 * 0.5 * fVar39 * fVar39);
                      local_42c = fStack_3e0 * fVar39;
                      local_434 = CONCAT44(fStack_3e4 * fVar39,local_3e8 * fVar39);
                    }
                    else {
                      local_434 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
                      local_42c = DAT_1468b5d98;
                    }
                    local_4b8 = &local_420;
                    local_490 = 0;
                    local_4a0 = 0x24;
                    local_4a8 = (undefined8 *)CONCAT44(local_4a8._4_4_,local_29c * 0.5);
                    local_4b0 = local_2a4;
                    local_498 = puVar25;
                    DrawCylinder(&local_260,&local_480,&local_434,&local_440);
                  }
                }
                else {
                  local_33c = local_2a4;
                  local_338 = local_29c;
                  local_340 = 0;
                  local_4b8 = (undefined8 *)((ulonglong)local_4b8 & 0xffffffffffffff00);
                  FUN_142702970(&local_260,&local_3e8,&local_340,puVar25);
                }
                if (local_248 != (undefined8 *)0x0) {
                  piVar1 = (int *)(local_248 + 1);
                  *piVar1 = *piVar1 + -1;
                  if (*piVar1 == 0) {
                    (**(code **)*local_248)(local_248,1);
                  }
                }
              }
            }
          }
          local_220 = CONCAT44(local_220._4_4_,(uint)local_220 & ~uStack_22c);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_230);
        }
        local_458 = local_458 + 1;
        local_428 = local_428 + 1;
      } while (local_458 < *(int *)(param_1 + 200));
    }
  }
  FUN_141b34490(param_1);
  return;
}



// FUNCTION 141da42f0 FUN_141da42f0 body=4848 status=ok
// SIG undefined FUN_141da42f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141da42f0(longlong param_1,undefined8 param_2)

{
  undefined8 *_Src;
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  int *piVar15;
  undefined8 *puVar16;
  byte bVar17;
  int iVar18;
  longlong *plVar19;
  undefined1 *puVar20;
  longlong lVar21;
  undefined8 uVar22;
  undefined1 extraout_var [12];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_818 [32];
  undefined4 local_7f8;
  int local_7e8;
  float local_7e0 [4];
  longlong local_7d0;
  float local_7c8;
  uint uStack_7c4;
  float fStack_7c0;
  undefined4 uStack_7bc;
  undefined8 local_7b8;
  undefined1 local_7b0 [8];
  undefined1 local_7a8 [64];
  undefined1 local_768 [1392];
  undefined8 local_1f8;
  longlong lStack_1f0;
  undefined1 local_1e8 [8];
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1c8;
  longlong lStack_1c0;
  undefined1 local_1b8 [8];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_198;
  longlong lStack_190;
  undefined1 local_188 [8];
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_168;
  longlong lStack_160;
  undefined1 local_158 [8];
  undefined8 local_150;
  undefined8 local_148;
  longlong *local_138;
  float local_128 [2];
  ulonglong uStack_120;
  float local_118 [4];
  float local_108 [4];
  float local_f8 [4];
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_818;
  local_7b8 = param_2;
  FRHICommandList::BeginFrame(param_2);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a9fb90) && (_Init_thread_header(&DAT_146a9fb90), DAT_146a9fb90 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146a9fb88 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))();
    _Init_thread_footer(&DAT_146a9fb90);
  }
  iVar12 = (**(code **)(*DAT_146a9fb88 + 0x68))();
  iVar18 = 0;
  if (iVar12 != 0) {
    if (*(int *)(*(longlong *)(param_1 + 8) + 0xfe8) <= DAT_146a9fb94) {
      DAT_146a9fb94 = iVar18;
    }
    do {
      if (*(int *)(*(longlong *)(param_1 + 8) + 0xfe8) <= DAT_146a9fb94) break;
      FPrimitiveSceneInfo::UpdateStaticMeshes
                (*(undefined8 *)
                  (*(longlong *)(*(longlong *)(param_1 + 8) + 0xfe0) + (longlong)DAT_146a9fb94 * 8),
                 param_2,0);
      iVar18 = iVar18 + 1;
      DAT_146a9fb94 = DAT_146a9fb94 + 1;
    } while (iVar18 < 10);
  }
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x18);
  if ((plVar3 != (longlong *)0x0) && (*(char *)(*(longlong *)(param_1 + 0xc0) + 0x1204) == '\0')) {
    (**(code **)(*plVar3 + 0x30))();
  }
  local_7e8 = 0;
  if (0 < *(int *)(param_1 + 200)) {
    local_7d0 = 0;
    do {
      iVar12 = local_7e8;
      lVar21 = local_7d0 * 0x30d0 + *(longlong *)(param_1 + 0xc0);
      plVar3 = *(longlong **)(lVar21 + 0x1ab0);
      if (plVar3 != (longlong *)0x0) {
        *(int *)((longlong)plVar3 + 0x25c) = *(int *)((longlong)plVar3 + 0x25c) + 1;
      }
      if (((DAT_1468c2184 != '\0') || (cVar11 = FUN_141d66670(param_1), cVar11 == '\0')) ||
         (*(char *)(lVar21 + 0x1a98) == '\0')) {
        *(uint *)(lVar21 + 0x28cc) = *(uint *)(lVar21 + 0x28cc) | 0xc0;
      }
      lVar14 = FSceneRenderTargets::Get(param_2);
      if ((*(char *)(lVar14 + 0x398) == '\0') ||
         (*(longlong *)(*(longlong *)(lVar14 + 0xa0) + 8) == 0)) {
        fVar24 = (float)((*(int *)(lVar21 + 0x1aa8) - *(int *)(lVar21 + 0x1aa0)) *
                        (*(int *)(lVar21 + 0x1aac) - *(int *)(lVar21 + 0x1aa4)));
      }
      else {
        fVar24 = 1.0 / (float)*(uint *)(lVar14 + 0x394);
        fVar24 = (float)(*(int *)(lVar21 + 0x1aa8) - *(int *)(lVar21 + 0x1aa0)) * fVar24 *
                 (float)(*(int *)(lVar21 + 0x1aac) - *(int *)(lVar21 + 0x1aa4)) * fVar24;
      }
      if (fVar24 <= 0.0) {
        fVar24 = 0.0;
      }
      else {
        fVar24 = 1.0 / fVar24;
      }
      *(float *)(lVar21 + 0x2fd8) = fVar24;
      _Src = (undefined8 *)(lVar21 + 0x390);
      *(undefined8 *)(lVar21 + 0x3d0) = *_Src;
      *(undefined8 *)(lVar21 + 0x3d8) = *(undefined8 *)(lVar21 + 0x398);
      *(undefined8 *)(lVar21 + 0x3e0) = *(undefined8 *)(lVar21 + 0x3a0);
      *(undefined8 *)(lVar21 + 1000) = *(undefined8 *)(lVar21 + 0x3a8);
      *(undefined8 *)(lVar21 + 0x3f0) = *(undefined8 *)(lVar21 + 0x3b0);
      *(undefined8 *)(lVar21 + 0x3f8) = *(undefined8 *)(lVar21 + 0x3b8);
      *(undefined4 *)(lVar21 + 0x400) = *(undefined4 *)(lVar21 + 0x3c0);
      *(undefined4 *)(lVar21 + 0x404) = *(undefined4 *)(lVar21 + 0x3c4);
      *(undefined4 *)(lVar21 + 0x408) = *(undefined4 *)(lVar21 + 0x3c8);
      *(undefined4 *)(lVar21 + 0x40c) = *(undefined4 *)(lVar21 + 0x3cc);
      if (plVar3 != (longlong *)0x0) {
        if (*(char *)(param_1 + 0x7c) == '\0') {
          *(int *)((longlong)plVar3 + 0x4dc) = *(int *)((longlong)plVar3 + 0x4dc) + 1;
        }
        if (3 < *(int *)((longlong)plVar3 + 0x4dc)) {
          *(undefined4 *)((longlong)plVar3 + 0x4dc) = 0;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        if (*(int *)(lVar21 + 0x1a10) == 2) {
          iVar18 = *(int *)(DAT_146a9ed50 + 4);
          if ((1 < iVar18) && (*(char *)(lVar21 + 0x1060) != '\0')) {
            if ((*(int *)(*(longlong *)(param_1 + 8) + 8) < 2) || (iVar18 == 2)) {
              bVar17 = *(byte *)((longlong)plVar3 + 0x4d4);
              *(undefined1 *)((longlong)plVar3 + 0x4d5) = 2;
              local_7e0[0] = -0.5;
              local_7e0[1] = 0.0;
              local_7e0[2] = 0.0;
              local_7e0[3] = 0.5;
              if (*(char *)(param_1 + 0x7c) == '\0') {
                bVar17 = bVar17 + 1;
                *(byte *)((longlong)plVar3 + 0x4d4) = bVar17;
                *(uint *)(plVar3 + 0x9b) = (int)plVar3[0x9b] + 1U & 7;
              }
              if (1 < bVar17) {
                *(undefined1 *)((longlong)plVar3 + 0x4d4) = 0;
              }
              uVar13 = (**(code **)(*plVar3 + 0x58))(plVar3);
              fVar24 = local_7e0[uVar13];
              fVar26 = local_7e0[(ulonglong)uVar13 + 2];
            }
            else if (iVar18 == 3) {
              bVar17 = *(byte *)((longlong)plVar3 + 0x4d4);
              *(undefined1 *)((longlong)plVar3 + 0x4d5) = 3;
              local_118[0] = -0.6666667;
              local_118[1] = 0.6666667;
              local_118[2] = 0.0;
              local_108[0] = -0.6666667;
              local_108[1] = 0.0;
              local_108[2] = 0.6666667;
              if (*(char *)(param_1 + 0x7c) == '\0') {
                bVar17 = bVar17 + 1;
                *(byte *)((longlong)plVar3 + 0x4d4) = bVar17;
                *(uint *)(plVar3 + 0x9b) = (int)plVar3[0x9b] + 1U & 7;
              }
              if (2 < bVar17) {
                *(undefined1 *)((longlong)plVar3 + 0x4d4) = 0;
              }
              uVar13 = (**(code **)(*plVar3 + 0x58))(plVar3);
              fVar24 = local_118[uVar13];
              fVar26 = local_108[uVar13];
            }
            else if (iVar18 == 4) {
              bVar17 = *(byte *)((longlong)plVar3 + 0x4d4);
              *(undefined1 *)((longlong)plVar3 + 0x4d5) = 4;
              local_128[0] = -0.125;
              local_128[1] = 0.375;
              uStack_120 = 0xbec000003e000000;
              local_f8[0] = -0.375;
              local_f8[1] = -0.125;
              local_f8[2] = 0.375;
              local_f8[3] = 0.125;
              if (*(char *)(param_1 + 0x7c) == '\0') {
                bVar17 = bVar17 + 1;
                *(byte *)((longlong)plVar3 + 0x4d4) = bVar17;
                *(uint *)(plVar3 + 0x9b) = (int)plVar3[0x9b] + 1U & 7;
              }
              if (3 < bVar17) {
                *(undefined1 *)((longlong)plVar3 + 0x4d4) = 0;
              }
              uVar13 = (**(code **)(*plVar3 + 0x58))(plVar3);
              fVar24 = local_128[uVar13];
              fVar26 = local_f8[uVar13];
            }
            else if (iVar18 == 5) {
              bVar17 = *(byte *)((longlong)plVar3 + 0x4d4);
              *(undefined1 *)((longlong)plVar3 + 0x4d5) = 4;
              local_f8[0] = 0.0;
              local_f8[1] = 0.5;
              local_f8[2] = 0.0;
              local_f8[3] = -0.5;
              local_128[0] = -0.5;
              local_128[1] = 0.0;
              uStack_120 = 0x3f000000;
              if (*(char *)(param_1 + 0x7c) == '\0') {
                bVar17 = bVar17 + 1;
                *(byte *)((longlong)plVar3 + 0x4d4) = bVar17;
                *(uint *)(plVar3 + 0x9b) = (int)plVar3[0x9b] + 1U & 7;
              }
              if (3 < bVar17) {
                *(undefined1 *)((longlong)plVar3 + 0x4d4) = 0;
              }
              uVar13 = (**(code **)(*plVar3 + 0x58))(plVar3);
              fVar24 = local_f8[uVar13];
              fVar26 = local_128[uVar13];
            }
            else if (*(int *)(lVar21 + 0x1a14) == 1) {
              iVar1 = *(int *)(lVar21 + 0x1aa8);
              iVar2 = *(int *)(lVar21 + 0x1aa0);
              piVar15 = (int *)FUN_141d6a140(lVar21,local_7b0);
              fVar27 = (float)(iVar1 - iVar2) / (float)*piVar15;
              fVar24 = 1.0 / (fVar27 * fVar27);
              if (fVar24 <= 1.0) {
                fVar24 = 1.0;
              }
              FUN_141da2440(plVar3,(int)((float)iVar18 * fVar24),param_1 + 0x10);
              iVar18 = (**(code **)(*plVar3 + 0x58))(plVar3);
              fVar24 = (float)FUN_141d9dd40(iVar18 + 1,2);
              fVar24 = fVar24 - 0.5;
              fVar26 = (float)FUN_141d9dd40(iVar18 + 1,3);
              fVar26 = fVar26 - 0.5;
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x38) < DAT_1468509dc) &&
                 (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
                DAT_1468509d8 = 1.442695;
                _Init_thread_footer(&DAT_1468509dc);
              }
              fVar27 = _guard_xfg_dispatch_icall_nop(fVar27);
              auVar23._0_8_ = CONCAT44(extraout_var._0_4_,fVar27 * DAT_1468509d8) ^ 0x80000000;
              auVar23._8_4_ = extraout_var._4_4_;
              auVar23._12_4_ = extraout_var._8_4_;
              if ((float)auVar23._0_8_ <= 0.0) {
                auVar6._12_4_ = 0;
                auVar6._0_12_ = auVar23._4_12_;
                auVar23 = auVar6 << 0x20;
              }
              fVar25 = *(float *)(DAT_146a9edc8 + 4) - auVar23._0_4_;
              *(float *)(lVar21 + 0x2f2c) = fVar25;
              fVar27 = *(float *)(DAT_146a9edb0 + 4);
              if (*(float *)(DAT_146a9edb0 + 4) <= fVar25) {
                fVar27 = fVar25;
              }
              *(float *)(lVar21 + 0x2f2c) = fVar27;
            }
            else {
              FUN_141da2440(plVar3,iVar18,param_1 + 0x10);
              iVar18 = (**(code **)(*plVar3 + 0x58))(plVar3);
              fVar24 = (float)FUN_141d9dd40(iVar18 + 1,2);
              fVar27 = (float)FUN_141d9dd40(iVar18 + 1,3);
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x38) < DAT_146a9fba0) &&
                 (_Init_thread_header(&DAT_146a9fba0), DAT_146a9fba0 == -1)) {
                if (DAT_1468b1f88 == (longlong *)0x0) {
                  IConsoleManager::SetupSingleton();
                }
                DAT_146a9fb98 =
                     (longlong *)
                     (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.TemporalAAFilterSize");
                _Init_thread_footer(&DAT_146a9fba0);
              }
              fVar26 = (float)(**(code **)(*DAT_146a9fb98 + 0x70))();
              fVar25 = 0.5 / (fVar26 * 0.47);
              fVar25 = _guard_xfg_dispatch_icall_nop(fVar25 * fVar25 * -0.5);
              fVar24 = _guard_xfg_dispatch_icall_nop(fVar25 * (1.0 - fVar24) + fVar24);
              fVar26 = SQRT(fVar24 * -2.0) * fVar26 * 0.47;
              uVar22 = __libm_sse2_sincosf_(fVar27 * 6.2831855);
              fVar24 = (float)((ulonglong)uVar22 >> 0x20) * fVar26;
              fVar26 = (float)uVar22 * fVar26;
            }
            *(float *)(lVar21 + 0x28c4) = fVar24;
            *(float *)(lVar21 + 0x28c8) = fVar26;
            fVar24 = (fVar24 + fVar24) /
                     (float)(*(int *)(lVar21 + 0x1aa8) - *(int *)(lVar21 + 0x1aa0));
            *(float *)(lVar21 + 0x8f0) = fVar24;
            *(float *)(lVar21 + 0x8f4) =
                 (-2.0 / (float)(*(int *)(lVar21 + 0x1aac) - *(int *)(lVar21 + 0x1aa4))) * fVar26;
            *(float *)(lVar21 + 0x3b0) = fVar24 + *(float *)(lVar21 + 0x3b0);
            *(float *)(lVar21 + 0x3b4) = *(float *)(lVar21 + 0x3b4) + *(float *)(lVar21 + 0x8f4);
            *(float *)(lVar21 + 0x470) = *(float *)(lVar21 + 0x470) + *(float *)(lVar21 + 0x8f0);
            *(float *)(lVar21 + 0x474) = *(float *)(lVar21 + 0x474) + *(float *)(lVar21 + 0x8f4);
            puVar16 = (undefined8 *)FViewMatrices::InvertProjectionMatrix(local_7a8,_Src);
            uVar22 = puVar16[1];
            *(undefined8 *)(lVar21 + 0x410) = *puVar16;
            *(undefined8 *)(lVar21 + 0x418) = uVar22;
            uVar22 = puVar16[3];
            *(undefined8 *)(lVar21 + 0x420) = puVar16[2];
            *(undefined8 *)(lVar21 + 0x428) = uVar22;
            uVar22 = puVar16[5];
            *(undefined8 *)(lVar21 + 0x430) = puVar16[4];
            *(undefined8 *)(lVar21 + 0x438) = uVar22;
            uVar7 = *(undefined4 *)((longlong)puVar16 + 0x34);
            uVar8 = *(undefined4 *)(puVar16 + 7);
            uVar9 = *(undefined4 *)((longlong)puVar16 + 0x3c);
            *(undefined4 *)(lVar21 + 0x440) = *(undefined4 *)(puVar16 + 6);
            *(undefined4 *)(lVar21 + 0x444) = uVar7;
            *(undefined4 *)(lVar21 + 0x448) = uVar8;
            *(undefined4 *)(lVar21 + 0x44c) = uVar9;
            puVar16 = (undefined8 *)FViewMatrices::InvertProjectionMatrix(local_7a8,lVar21 + 0x450);
            uVar22 = puVar16[1];
            *(undefined8 *)(lVar21 + 0x490) = *puVar16;
            *(undefined8 *)(lVar21 + 0x498) = uVar22;
            uVar22 = puVar16[3];
            *(undefined8 *)(lVar21 + 0x4a0) = puVar16[2];
            *(undefined8 *)(lVar21 + 0x4a8) = uVar22;
            uVar22 = puVar16[5];
            *(undefined8 *)(lVar21 + 0x4b0) = puVar16[4];
            *(undefined8 *)(lVar21 + 0x4b8) = uVar22;
            uVar7 = *(undefined4 *)((longlong)puVar16 + 0x34);
            uVar8 = *(undefined4 *)(puVar16 + 7);
            uVar9 = *(undefined4 *)((longlong)puVar16 + 0x3c);
            *(undefined4 *)(lVar21 + 0x4c0) = *(undefined4 *)(puVar16 + 6);
            *(undefined4 *)(lVar21 + 0x4c4) = uVar7;
            *(undefined4 *)(lVar21 + 0x4c8) = uVar8;
            *(undefined4 *)(lVar21 + 0x4cc) = uVar9;
            FUN_141c90d50(_Src);
          }
        }
        else {
          cVar11 = *(char *)((longlong)plVar3 + 0x4d4);
          *(undefined1 *)((longlong)plVar3 + 0x4d5) = 1;
          if (*(char *)(param_1 + 0x7c) == '\0') {
            cVar11 = cVar11 + '\x01';
            *(char *)((longlong)plVar3 + 0x4d4) = cVar11;
            *(uint *)(plVar3 + 0x9b) = (int)plVar3[0x9b] + 1U & 7;
          }
          if (cVar11 != '\0') {
            *(undefined1 *)((longlong)plVar3 + 0x4d4) = 0;
          }
          plVar19 = plVar3 + 0x214;
          lVar14 = 2;
          do {
            plVar4 = (longlong *)*plVar19;
            *plVar19 = 0;
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x30))();
            }
            plVar19 = plVar19 + 1;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
      }
      FUN_1404546d0(local_768);
      local_1e0 = 0;
      local_1f8 = 0;
      lStack_1f0 = 0;
      local_1d8 = 0;
      local_1c8 = 0;
      lStack_1c0 = 0;
      local_1b0 = 0;
      local_1a8 = 0;
      local_198 = 0;
      lStack_190 = 0;
      local_180 = 0;
      local_178 = 0;
      local_168 = 0;
      lStack_160 = 0;
      local_150 = 0;
      local_148 = 0;
      local_138 = (longlong *)0x0;
      _guard_xfg_dispatch_icall_nop(local_768,_Src,0x570);
      if (plVar3 == (longlong *)0x0) {
        _guard_xfg_dispatch_icall_nop((void *)(lVar21 + 0x28e0),local_768,0x570);
        FTemporalAAHistory::operator=(lVar21 + 0x2e50,&local_1f8);
        FTemporalAAHistory::operator=(lVar21 + 0x2e80,&local_1c8);
        FTemporalAAHistory::operator=(lVar21 + 0x2eb0,&local_198);
        FTemporalAAHistory::operator=(lVar21 + 12000);
        plVar19 = local_138;
        plVar3 = *(longlong **)(lVar21 + 0x2f10);
        *(longlong **)(lVar21 + 0x2f10) = local_138;
        if (local_138 != (longlong *)0x0) {
          (**(code **)(*local_138 + 0x28))(local_138);
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x30))(plVar3);
        }
      }
      else {
        if ((*(char *)(param_1 + 0x7c) == '\0') || (*(int *)(lVar21 + 0x1a10) == 2)) {
          _guard_xfg_dispatch_icall_nop(plVar3 + 0x9e,plVar3 + 0x166,0x570);
          FTemporalAAHistory::operator=(plVar3 + 0x14c,plVar3 + 0x214);
          FTemporalAAHistory::operator=(plVar3 + 0x152,plVar3 + 0x21a);
          FTemporalAAHistory::operator=(plVar3 + 0x158,plVar3 + 0x220);
          FTemporalAAHistory::operator=(plVar3 + 0x15e,plVar3 + 0x226);
          plVar19 = (longlong *)plVar3[0x22c];
          plVar4 = (longlong *)plVar3[0x164];
          plVar3[0x164] = (longlong)plVar19;
          if (plVar19 != (longlong *)0x0) {
            (**(code **)(*plVar19 + 0x28))();
          }
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x30))(plVar4);
          }
        }
        _guard_xfg_dispatch_icall_nop(plVar3 + 0x166,local_768,0x570);
        FTemporalAAHistory::operator=(plVar3 + 0x214,&local_1f8);
        FTemporalAAHistory::operator=(plVar3 + 0x21a,&local_1c8);
        FTemporalAAHistory::operator=(plVar3 + 0x220,&local_198);
        FTemporalAAHistory::operator=(plVar3 + 0x226,&local_168);
        plVar19 = local_138;
        plVar4 = (longlong *)plVar3[0x22c];
        plVar3[0x22c] = (longlong)local_138;
        if (local_138 != (longlong *)0x0) {
          (**(code **)(*local_138 + 0x28))(local_138);
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x30))(plVar4);
        }
        if (((*(float *)(lVar21 + 0x11e0) != 0.0) || (*(float *)(lVar21 + 0x11e4) != 0.0)) ||
           (*(float *)(lVar21 + 0x11e8) != 0.0)) {
          local_128[0] = 0.0;
          local_128[1] = 0.0;
          uStack_120 = uStack_120 & 0xffffffff00000000;
          *(float *)((longlong)plVar3 + 0xa3c) =
               *(float *)(lVar21 + 0x11e0) + *(float *)((longlong)plVar3 + 0xa3c);
          *(float *)(plVar3 + 0x148) = *(float *)(lVar21 + 0x11e4) + *(float *)(plVar3 + 0x148);
          *(float *)((longlong)plVar3 + 0xa44) =
               *(float *)((longlong)plVar3 + 0xa44) + *(float *)(lVar21 + 0x11e8);
          *(float *)(plVar3 + 0x146) = *(float *)(plVar3 + 0x146) - *(float *)(lVar21 + 0x11e0);
          *(float *)((longlong)plVar3 + 0xa34) =
               *(float *)((longlong)plVar3 + 0xa34) - *(float *)(lVar21 + 0x11e4);
          *(float *)(plVar3 + 0x147) = *(float *)(plVar3 + 0x147) - *(float *)(lVar21 + 0x11e8);
          fVar24 = -*(float *)(lVar21 + 0x11e0);
          fStack_7c0 = -*(float *)(lVar21 + 0x11e8);
          fVar26 = -*(float *)(lVar21 + 0x11e4);
          local_7c8 = -*(float *)(lVar21 + 0x11e0);
          uStack_7c4 = *(uint *)(lVar21 + 0x11e4) ^ 0x80000000;
          uStack_7bc = 0;
          *(float *)(plVar3 + 0xd4) =
               *(float *)(plVar3 + 0xd4) * 0.0 + fStack_7c0 * *(float *)(plVar3 + 0xd2) +
               fVar26 * *(float *)(plVar3 + 0xd0) + fVar24 * *(float *)(plVar3 + 0xce) +
               *(float *)(plVar3 + 0xd4);
          *(float *)((longlong)plVar3 + 0x6a4) =
               *(float *)((longlong)plVar3 + 0x6a4) * 0.0 +
               fStack_7c0 * *(float *)((longlong)plVar3 + 0x694) +
               fVar26 * *(float *)((longlong)plVar3 + 0x684) +
               fVar24 * *(float *)((longlong)plVar3 + 0x674) + *(float *)((longlong)plVar3 + 0x6a4);
          *(float *)(plVar3 + 0xd5) =
               *(float *)(plVar3 + 0xd5) * 0.0 + fStack_7c0 * *(float *)(plVar3 + 0xd3) +
               fVar26 * *(float *)(plVar3 + 0xd1) + fVar24 * *(float *)(plVar3 + 0xcf) +
               *(float *)(plVar3 + 0xd5);
          *(undefined4 *)(plVar3 + 0xdc) = *(undefined4 *)((longlong)plVar3 + 0xa3c);
          *(int *)((longlong)plVar3 + 0x6e4) = (int)plVar3[0x148];
          *(undefined4 *)(plVar3 + 0xdd) = *(undefined4 *)((longlong)plVar3 + 0xa44);
          FUN_141c90d50();
        }
        fVar24 = *(float *)((longlong)plVar3 + 0x1fc);
        fVar26 = *(float *)(*(longlong *)(lVar21 + 0x10) + 0x58);
        if ((fVar26 - fVar24 < -0.0001) || (fVar24 < 0.0001)) {
          bVar10 = true;
LAB_141da50a9:
          *(uint *)(lVar21 + 0x28cc) = *(uint *)(lVar21 + 0x28cc) | 0x140;
        }
        else {
          bVar10 = false;
          if ((fVar24 + *(float *)(DAT_146b17150 + 0x8d0) < fVar26) ||
             (*(char *)(lVar21 + 0x11f4) != '\0')) goto LAB_141da50a9;
          local_7f8 = *(undefined4 *)(DAT_146b17150 + 0x8cc);
          cVar11 = FUN_141d9f810(lVar21,plVar3 + 0x42,plVar3 + 0x4a,
                                 *(undefined4 *)(DAT_146b17150 + 0x8c8));
          if (cVar11 != '\0') goto LAB_141da50a9;
        }
        lVar14 = *(longlong *)(lVar21 + 0x518);
        plVar3[0x42] = *(longlong *)(lVar21 + 0x510);
        plVar3[0x43] = lVar14;
        lVar14 = *(longlong *)(lVar21 + 0x528);
        plVar3[0x44] = *(longlong *)(lVar21 + 0x520);
        plVar3[0x45] = lVar14;
        lVar14 = *(longlong *)(lVar21 + 0x538);
        plVar3[0x46] = *(longlong *)(lVar21 + 0x530);
        plVar3[0x47] = lVar14;
        uVar7 = *(undefined4 *)(lVar21 + 0x544);
        uVar8 = *(undefined4 *)(lVar21 + 0x548);
        uVar9 = *(undefined4 *)(lVar21 + 0x54c);
        *(undefined4 *)(plVar3 + 0x48) = *(undefined4 *)(lVar21 + 0x540);
        *(undefined4 *)((longlong)plVar3 + 0x244) = uVar7;
        *(undefined4 *)(plVar3 + 0x49) = uVar8;
        *(undefined4 *)((longlong)plVar3 + 0x24c) = uVar9;
        plVar3[0x4a] = *(longlong *)(lVar21 + 0x8dc);
        *(undefined4 *)(plVar3 + 0x4b) = *(undefined4 *)(lVar21 + 0x8e4);
        if ((bVar10) || (*(char *)(lVar21 + 0x11f4) != '\0')) {
LAB_141da5230:
          _guard_xfg_dispatch_icall_nop((void *)(lVar21 + 0x28e0),local_768,0x570);
          FTemporalAAHistory::operator=(lVar21 + 0x2e50,&local_1f8);
          FTemporalAAHistory::operator=(lVar21 + 0x2e80,&local_1c8);
          FTemporalAAHistory::operator=(lVar21 + 0x2eb0,&local_198);
          FTemporalAAHistory::operator=(lVar21 + 12000,&local_168);
          plVar19 = *(longlong **)(lVar21 + 0x2f10);
          *(longlong **)(lVar21 + 0x2f10) = local_138;
          if (local_138 != (longlong *)0x0) {
            (**(code **)(*local_138 + 0x28))();
          }
          if (plVar19 != (longlong *)0x0) {
            (**(code **)(*plVar19 + 0x30))(plVar19);
          }
          _guard_xfg_dispatch_icall_nop(plVar3 + 0x9e,local_768,0x570);
          FTemporalAAHistory::operator=(plVar3 + 0x14c,&local_1f8);
          FTemporalAAHistory::operator=(plVar3 + 0x152,&local_1c8);
          FTemporalAAHistory::operator=(plVar3 + 0x158,&local_198);
          FTemporalAAHistory::operator=(plVar3 + 0x15e,&local_168);
          plVar19 = local_138;
          plVar4 = (longlong *)plVar3[0x164];
          plVar3[0x164] = (longlong)local_138;
          if (local_138 != (longlong *)0x0) {
            (**(code **)(*local_138 + 0x28))(local_138);
          }
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x30))(plVar4);
          }
          *(uint *)(lVar21 + 0x28cc) = *(uint *)(lVar21 + 0x28cc) | 0x20;
        }
        else {
          local_7f8 = 0x461c4000;
          cVar11 = FUN_141d9f810(lVar21,plVar3 + 0xce,(longlong)plVar3 + 0xa3c,0x42340000);
          if (cVar11 != '\0') goto LAB_141da5230;
          _guard_xfg_dispatch_icall_nop((void *)(lVar21 + 0x28e0),plVar3 + 0x9e,0x570);
          FTemporalAAHistory::operator=(lVar21 + 0x2e50,plVar3 + 0x14c);
          FTemporalAAHistory::operator=(lVar21 + 0x2e80,plVar3 + 0x152);
          FTemporalAAHistory::operator=(lVar21 + 0x2eb0,plVar3 + 0x158);
          FTemporalAAHistory::operator=(lVar21 + 12000,plVar3 + 0x15e);
          plVar4 = (longlong *)plVar3[0x164];
          plVar5 = *(longlong **)(lVar21 + 0x2f10);
          *(longlong **)(lVar21 + 0x2f10) = plVar4;
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x28))();
          }
          iVar12 = local_7e8;
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x30))(plVar5);
            iVar12 = local_7e8;
          }
        }
        if (*(char *)(param_1 + 0x7c) == '\0') {
          if (*(char *)((longlong)plVar3 + 0x1777) == '\0') {
            fVar24 = *(float *)(*(longlong *)(lVar21 + 0x10) + 0x54);
            if (fVar24 <= 0.00833) {
              fVar24 = 0.00833;
            }
            fVar24 = 0.033333335 / fVar24;
          }
          else {
            fVar24 = 2.0;
          }
          *(float *)((longlong)plVar3 + 0x204) = fVar24;
        }
        *(undefined4 *)(plVar3 + 0x3f) = *(undefined4 *)((longlong)plVar3 + 500);
        *(undefined4 *)((longlong)plVar3 + 500) =
             *(undefined4 *)(*(longlong *)(lVar21 + 0x10) + 0x5c);
        lVar21 = *(longlong *)(lVar21 + 0x10);
        fVar24 = *(float *)(lVar21 + 0x58);
        if (fVar24 != *(float *)((longlong)plVar3 + 0x1fc)) {
          *(float *)(plVar3 + 0x40) = fVar24 - *(float *)((longlong)plVar3 + 0x1fc);
          *(undefined4 *)((longlong)plVar3 + 0x1fc) = *(undefined4 *)(lVar21 + 0x58);
        }
        FUN_142760f10(plVar3 + 0x2ef);
      }
      if (plVar19 != (longlong *)0x0) {
        (**(code **)(*plVar19 + 0x30))(plVar19);
      }
      lVar21 = 2;
      puVar20 = local_158;
      do {
        plVar3 = (longlong *)(puVar20 + -8);
        puVar20 = puVar20 + -8;
        lVar21 = lVar21 + -1;
        if ((longlong *)*plVar3 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar3 + 0x30))();
        }
      } while (lVar21 != 0);
      lVar21 = 2;
      puVar20 = local_188;
      do {
        plVar3 = (longlong *)(puVar20 + -8);
        puVar20 = puVar20 + -8;
        lVar21 = lVar21 + -1;
        if ((longlong *)*plVar3 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar3 + 0x30))();
        }
      } while (lVar21 != 0);
      lVar21 = 2;
      puVar20 = local_1b8;
      do {
        plVar3 = (longlong *)(puVar20 + -8);
        puVar20 = puVar20 + -8;
        lVar21 = lVar21 + -1;
        if ((longlong *)*plVar3 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar3 + 0x30))();
        }
      } while (lVar21 != 0);
      lVar21 = 2;
      puVar20 = local_1e8;
      do {
        plVar3 = (longlong *)(puVar20 + -8);
        puVar20 = puVar20 + -8;
        lVar21 = lVar21 + -1;
        if ((longlong *)*plVar3 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar3 + 0x30))();
        }
      } while (lVar21 != 0);
      local_7e8 = iVar12 + 1;
      local_7d0 = local_7d0 + 1;
      param_2 = local_7b8;
    } while (local_7e8 < *(int *)(param_1 + 200));
  }
  return;
}



// FUNCTION 141da55e0 FUN_141da55e0 body=577 status=ok
// SIG undefined FUN_141da55e0(void)

void FUN_141da55e0(longlong param_1)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
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
  
  lVar1 = param_1 + 0x828;
  if (*(longlong *)(param_1 + 0x928) != 0) {
    uVar6 = FMemory::Realloc(*(longlong *)(param_1 + 0x928),0,0);
    *(undefined8 *)(param_1 + 0x928) = uVar6;
  }
  puVar2 = (uint *)(param_1 + 0x930);
  uVar5 = *puVar2;
  if (uVar5 != 0) {
    TInlineAllocator<64,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation(lVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar8 = (longlong)(int)*puVar2 - 1U & uVar10;
        lVar9 = *(longlong *)(param_1 + 0x928);
        if (*(longlong *)(param_1 + 0x928) == 0) {
          lVar9 = lVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)(lVar9 + uVar8 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    uStack_54 = 1;
    puStack_28 = (uint *)(param_1 + 0x800);
    local_58 = 0;
    iVar3 = *(int *)(param_1 + 0x818);
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar12 = *(uint **)(param_1 + 0x810);
      if (*(uint **)(param_1 + 0x810) == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar5 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar9 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_141da573f;
        uVar5 = puVar12[lVar9 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
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
      if (iVar3 < iStack_44) {
LAB_141da573f:
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
        lVar9 = *(longlong *)(param_1 + 0x7f0);
        if (*(longlong *)(param_1 + 0x7f0) == 0) {
          lVar9 = param_1;
        }
        puVar12 = (uint *)(lVar9 + (longlong)iStack_1c * 0x10);
        uVar5 = *puVar2 - 1 & *puVar12;
        puVar12[3] = uVar5;
        lVar9 = *(longlong *)(param_1 + 0x928);
        if (*(longlong *)(param_1 + 0x928) == 0) {
          lVar9 = lVar1;
        }
        puVar12[2] = *(uint *)(lVar9 + ((longlong)(int)*puVar2 - 1U & (longlong)(int)uVar5) * 4);
        lVar9 = *(longlong *)(param_1 + 0x928);
        if (*(longlong *)(param_1 + 0x928) == 0) {
          lVar9 = lVar1;
        }
        *(int *)(lVar9 + ((longlong)(int)*puVar2 - 1U & (longlong)(int)uVar5) * 4) = iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141da5830 Rehash body=538 status=ok
// SIG undefined Rehash(void)

void TSet<TStaticMeshDrawList<FShadowDepthDrawingPolicy<1>_>::FDrawingPolicyLink,TStaticMeshDrawList<FShadowDepthDrawingPolicy<1>_>::FDrawingPolicyKeyFuncs,FDefaultSetAllocator>
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
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_141da595f;
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
LAB_141da595f:
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
        lVar6 = (longlong)iStack_2c * 0xe8 + *param_1;
        uVar5 = FMeshDrawingPolicy::GetTypeHash(lVar6 + 0x20);
        uVar5 = uVar5 & (int)*plVar2 - 1U;
        *(uint *)(lVar6 + 0xe4) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0xe0) =
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



// FUNCTION 141da5a50 FUN_141da5a50 body=528 status=ok
// SIG undefined FUN_141da5a50(void)

void FUN_141da5a50(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
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
    lVar5 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar5;
  }
  uVar8 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar8 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar8) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
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
      uVar8 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_141da5b8f;
        uVar8 = puVar12[lVar5 + 1];
      }
      uStack_54 = -uVar8 & uVar8;
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
      if (iVar3 < iStack_44) {
LAB_141da5b8f:
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
        puVar12 = (uint *)((longlong)iStack_1c * 0x58 + *param_1);
        uVar8 = (puVar12[0x12] >> 0x14 ^ *puVar12) & (int)*plVar2 - 1U;
        puVar12[0x15] = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        puVar12[0x14] =
             *(uint *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141da5c60 Remove body=252 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  uVar8 = (longlong)(int)param_1[9] - 1;
  iVar6 = *(int *)((longlong)plVar7 + ((longlong)*param_2 & uVar8) * 4);
  if (iVar6 != -1) {
    lVar4 = *param_1;
    do {
      lVar5 = (longlong)iVar6;
      if (*(int *)(lVar4 + lVar5 * 0x28) == *param_2) {
        lVar5 = lVar5 * 0x28;
        uVar8 = (longlong)*(int *)(lVar5 + 0x24 + lVar4) & uVar8;
        puVar2 = (undefined4 *)((longlong)plVar7 + uVar8 * 4);
        iVar3 = *(int *)((longlong)plVar7 + uVar8 * 4);
        goto joined_r0x000141da5cf7;
      }
      iVar6 = *(int *)(lVar4 + 0x20 + lVar5 * 0x28);
    } while (iVar6 != -1);
  }
  return 0;
joined_r0x000141da5cf7:
  if (iVar3 == -1) {
LAB_141da5d22:
    if (*(longlong *)(lVar5 + 8 + *param_1) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar6,1);
    return 1;
  }
  if (iVar3 == iVar6) {
    *puVar2 = *(undefined4 *)(lVar5 + lVar4 + 0x20);
    goto LAB_141da5d22;
  }
  lVar1 = (longlong)iVar3 * 5 + 4;
  iVar3 = *(int *)(lVar4 + lVar1 * 8);
  puVar2 = (undefined4 *)(lVar4 + lVar1 * 8);
  goto joined_r0x000141da5cf7;
}



// FUNCTION 141da5d60 Remove body=174 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<FPrimitiveComponentId,FPrimitiveFadingState>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FPrimitiveFadingState,0>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar6 = (longlong)param_2;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_1;
    lVar4 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar2 + 0x2c + lVar6 * 0x30));
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    piVar5 = (int *)((longlong)plVar3 + lVar4 * 4);
    iVar1 = *(int *)((longlong)plVar3 + lVar4 * 4);
    while (iVar1 != -1) {
      if (iVar1 == param_2) {
        *piVar5 = *(int *)(lVar2 + 0x28 + lVar6 * 0x30);
        break;
      }
      piVar5 = (int *)(lVar2 + 0x28 + (longlong)iVar1 * 0x30);
      iVar1 = *piVar5;
    }
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar6 * 0x30 + 0x10 + *param_1);
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 141da5e10 FUN_141da5e10 body=751 status=ok
// SIG undefined FUN_141da5e10(void)

void FUN_141da5e10(longlong param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  iVar6 = *(int *)(param_1 + 0x1c);
  lVar11 = (longlong)iVar6;
  plVar9 = (longlong *)((longlong)*(int *)(param_1 + 0x18) * 0xe8 + *(longlong *)(lVar1 + 0x40));
  if (param_2 != '\0') {
    FUN_141d78430(*(undefined8 *)(lVar11 * 0x38 + 8 + plVar9[2]),param_1);
  }
  iVar10 = 0;
  *(undefined8 *)(lVar11 * 0x38 + 8 + plVar9[2]) = 0;
  iVar5 = *(int *)((longlong)plVar9 + 0x1c);
  iVar3 = *(int *)((longlong)plVar9 + 0xc);
  TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
  ::RemoveAtSwapImpl(plVar9 + 2,iVar6,1,1);
  iVar4 = (int)plVar9[1];
  iVar2 = (iVar4 - iVar6) + -1;
  if (0 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    _guard_xfg_dispatch_icall_nop
              ((void *)(*plVar9 + lVar11 * 4),(void *)(*plVar9 + (longlong)(iVar4 - iVar2) * 4),
               (longlong)iVar2 << 2);
    iVar4 = (int)plVar9[1];
  }
  *(int *)(plVar9 + 1) = iVar4 + -1;
  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar9);
  DAT_146a81050 =
       DAT_146a81050 -
       (ulonglong)
       ((((iVar5 + 4) * 0xe + iVar3) * 4 +
        (*(int *)((longlong)plVar9 + 0x1c) * 0xe + *(int *)((longlong)plVar9 + 0xc)) * -4) - 0xe0);
  iVar5 = (int)plVar9[3];
  if (iVar6 < iVar5) {
    *(int *)(*(longlong *)(lVar11 * 0x38 + 0x30 + plVar9[2]) + 0x1c) = iVar6;
    iVar5 = (int)plVar9[3];
  }
  if (iVar5 == 0) {
    DAT_146a81050 =
         DAT_146a81050 +
         ((-0xe0 - (ulonglong)(uint)(*(int *)((longlong)plVar9 + 0xc) << 2)) -
         (ulonglong)(uint)(*(int *)((longlong)plVar9 + 0x1c) * 0x38));
    iVar5 = *(int *)(lVar1 + 0x38);
    iVar6 = iVar5 + -1;
    if (0 < iVar6) {
      lVar11 = *(longlong *)(lVar1 + 0x40);
      lVar13 = *(longlong *)(lVar1 + 0x30);
      iVar5 = iVar10;
      do {
        iVar3 = (iVar6 + iVar5) / 2;
        iVar4 = CompareDrawingPolicy<1>
                          ((longlong)*(int *)(lVar13 + (longlong)iVar3 * 4) * 0xe8 + 0x20 + lVar11,
                           plVar9 + 4);
        iVar10 = iVar3 + 1;
        if (-1 < iVar4) {
          iVar10 = iVar5;
          iVar6 = iVar3;
        }
        iVar5 = iVar10;
      } while (iVar10 < iVar6);
      iVar5 = *(int *)(lVar1 + 0x38);
    }
    plVar14 = (longlong *)(lVar1 + 0x40);
    if (iVar10 < iVar5) {
      lVar11 = (longlong)iVar10;
      piVar8 = (int *)(*(longlong *)(lVar1 + 0x30) + lVar11 * 4);
      do {
        if (*piVar8 == *(int *)(param_1 + 0x18)) break;
        iVar10 = iVar10 + 1;
        lVar11 = lVar11 + 1;
        piVar8 = piVar8 + 1;
      } while (lVar11 < iVar5);
    }
    if (iVar10 < iVar5) {
      iVar6 = *(int *)(lVar1 + 0x38);
      iVar5 = (iVar6 - iVar10) + -1;
      if (iVar5 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar10 * 4),
                   (void *)(*(longlong *)(lVar1 + 0x30) + (longlong)(iVar10 + 1) * 4),
                   (longlong)iVar5 << 2);
        iVar6 = *(int *)(lVar1 + 0x38);
      }
      *(int *)(lVar1 + 0x38) = iVar6 + -1;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(lVar1 + 0x30);
    }
    else {
      TArray<FSetElementId,FDefaultAllocator>::RemoveSingle(lVar1 + 0x30,(longlong)plVar9 + 0xcc);
    }
    iVar6 = *(int *)((longlong)plVar9 + 0xcc);
    if (*(int *)(lVar1 + 0x48) != *(int *)(lVar1 + 0x74)) {
      lVar11 = *plVar14;
      lVar12 = (longlong)iVar6 * 0xe8;
      lVar7 = (longlong)(int)(*(int *)(lVar1 + 0x88) - 1U & *(uint *)(lVar12 + 0xe4 + lVar11));
      lVar13 = *(longlong *)(lVar1 + 0x80);
      if (*(longlong *)(lVar1 + 0x80) == 0) {
        lVar13 = lVar1 + 0x78;
      }
      piVar8 = (int *)(lVar13 + lVar7 * 4);
      iVar5 = *(int *)(lVar13 + lVar7 * 4);
      while (iVar5 != -1) {
        if (iVar5 == iVar6) {
          *piVar8 = *(int *)(lVar12 + 0xe0 + lVar11);
          break;
        }
        piVar8 = (int *)(lVar11 + 0xe0 + (longlong)iVar5 * 0xe8);
        iVar5 = *piVar8;
      }
    }
    plVar9 = (longlong *)((longlong)iVar6 * 0xe8 + *plVar14);
    TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
    ::
    ~TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
              (plVar9 + 2);
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TStaticMeshDrawList<FShadowDepthDrawingPolicy<1>_>::FDrawingPolicyLink>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(plVar14,iVar6,1);
  }
  return;
}



// FUNCTION 141da6100 RemoveAtUninitialized body=181 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TStaticMeshDrawList<FShadowDepthDrawingPolicy<1>_>::FDrawingPolicyLink>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
    lVar8 = uVar10 * 0xe8;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0xe8 + *param_1) = iVar9;
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
      lVar8 = lVar8 + 0xe8;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 141da61c0 RemoveChildNode body=427 status=ok
// SIG undefined RemoveChildNode(void)

void FLODSceneTree::RemoveChildNode(longlong param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  bool bVar10;
  int local_res10 [4];
  longlong *local_res20;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    local_res20 = (longlong *)(param_1 + 8);
    plVar4 = (longlong *)0x0;
    if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
      lVar2 = *(longlong *)(param_1 + 0x48);
      if (*(longlong *)(param_1 + 0x48) == 0) {
        lVar2 = param_1 + 0x40;
      }
      iVar6 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0x50) - 1U & (longlong)param_2) * 4);
      if (iVar6 != -1) {
        do {
          plVar1 = (longlong *)(*local_res20 + (longlong)iVar6 * 0x28);
          if (*(int *)(*local_res20 + (longlong)iVar6 * 0x28) == param_2) {
            if (iVar6 != -1) goto LAB_141da6253;
            break;
          }
          iVar6 = (int)plVar1[4];
        } while (iVar6 != -1);
      }
    }
    plVar1 = plVar4;
LAB_141da6253:
    plVar7 = plVar1 + 1;
    if (plVar1 == (longlong *)0x0) {
      plVar7 = plVar4;
    }
    if (plVar7 != (longlong *)0x0) {
      lVar2 = (longlong)(int)plVar7[1];
      local_res10[0] = param_2;
      if ((int)plVar7[1] != 0) {
        bVar10 = *(longlong *)*plVar7 != param_3;
        plVar1 = plVar4;
        plVar9 = plVar4;
        do {
          iVar6 = (int)plVar1;
          plVar4 = (longlong *)((longlong)plVar4 + 1);
          plVar1 = (longlong *)(ulonglong)(iVar6 + 1);
          if ((longlong)plVar4 < lVar2) {
            plVar3 = (longlong *)(*plVar7 + (longlong)plVar4 * 8);
            do {
              if (bVar10 != (*plVar3 != param_3)) break;
              plVar1 = (longlong *)(ulonglong)((int)plVar1 + 1);
              plVar4 = (longlong *)((longlong)plVar4 + 1);
              plVar3 = plVar3 + 1;
            } while ((longlong)plVar4 < lVar2);
          }
          iVar5 = (int)plVar1 - iVar6;
          if (bVar10 != false) {
            iVar8 = (int)plVar9;
            if (iVar8 != iVar6) {
              ::_guard_xfg_dispatch_icall_nop
                        ((void *)(*plVar7 + (longlong)iVar8 * 8),
                         (void *)(*plVar7 + (longlong)iVar6 * 8),(longlong)iVar5 << 3);
            }
            plVar9 = (longlong *)(ulonglong)(uint)(iVar8 + iVar5);
          }
          bVar10 = (bool)(bVar10 ^ 1);
        } while ((longlong)plVar4 < lVar2);
        *(int *)(plVar7 + 1) = (int)plVar9;
        if ((int)plVar9 != 0) {
          return;
        }
      }
      TSet<TTuple<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FLODSceneTree::FLODSceneNode,0>,FDefaultSetAllocator>
      ::Remove(local_res20,local_res10);
    }
  }
  return;
}



// FUNCTION 141da6370 FUN_141da6370 body=170 status=ok
// SIG undefined FUN_141da6370(void)

void FUN_141da6370(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x690)) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x688);
      if ((*(uint *)(lVar1 + 0x10 + lVar3) >> 3 & 1) != 0) {
        FUN_141d96df0(param_2,param_4,param_1,*(longlong *)(lVar1 + lVar3),1,param_5,
                      *(undefined8 *)(lVar1 + 8 + lVar3),
                      *(undefined4 *)(*(longlong *)(lVar1 + lVar3) + 0xb0));
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 0x18;
    } while (iVar2 < *(int *)(param_1 + 0x690));
  }
  return;
}



// FUNCTION 141da6420 FUN_141da6420 body=2264 status=ok
// SIG undefined FUN_141da6420(void)

void FUN_141da6420(longlong param_1,undefined *param_2,longlong param_3,longlong param_4,
                  undefined8 *param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint *puVar9;
  longlong *plVar10;
  undefined1 uVar11;
  char cVar12;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined8 in_stack_fffffffffffffb68;
  undefined4 uVar13;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined4 local_448;
  longlong local_440;
  longlong local_438;
  undefined4 local_430;
  uint local_42c;
  undefined4 local_428;
  undefined1 local_424;
  longlong local_420;
  longlong local_418;
  longlong local_410;
  longlong local_408;
  longlong local_400;
  longlong local_3f8;
  longlong local_3f0;
  longlong local_3e8;
  undefined *local_3e0;
  undefined1 local_3d8;
  uint local_3c8;
  undefined4 uStack_3c4;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined4 local_3a8;
  longlong local_3a0;
  longlong local_398;
  undefined4 local_390;
  uint local_38c;
  undefined4 local_388;
  undefined1 local_384;
  undefined8 local_380;
  undefined8 local_378;
  undefined4 local_370;
  longlong local_368;
  longlong local_360;
  undefined4 local_358;
  uint local_354;
  undefined4 local_350;
  undefined1 local_34c;
  undefined *local_348;
  undefined1 *puStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined *local_328;
  undefined1 *puStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  uint local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  uint local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined **local_2d8 [3];
  undefined1 local_2c0 [56];
  undefined8 local_288;
  undefined1 local_260;
  undefined1 local_25e;
  longlong local_220;
  code *local_218;
  undefined8 uStack_210;
  int local_208;
  undefined1 local_1f8 [24];
  undefined1 local_1e0 [24];
  undefined1 local_1c8 [80];
  undefined1 local_178 [320];
  
  uVar13 = (undefined4)((ulonglong)in_stack_fffffffffffffb68 >> 0x20);
  local_3e8 = 0;
  local_3f0 = 0;
  if (*(int *)(param_4 + 0x1a38) < 2) {
LAB_141da64ed:
    uVar7 = FSceneRenderTargets::Get(param_2);
    FUN_141d05b30(uVar7,*(undefined4 *)(param_4 + 0x1a38),0,local_1c8);
    (**(code **)(*DAT_146ab6358 + 0x110))
              (DAT_146ab6358,&local_408,local_1c8,&DAT_146a63368,CONCAT44(uVar13,1));
    local_418 = local_408;
    if (local_408 != 0) {
      LOCK();
      *(int *)(local_408 + 8) = *(int *)(local_408 + 8) + 1;
      UNLOCK();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_408);
    local_3f0 = local_408;
    local_418 = 0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>();
    local_410 = local_408;
  }
  else {
    uVar7 = FSceneRenderTargets::Get(param_2);
    FUN_141d05c90(uVar7,*(undefined4 *)(param_4 + 0x1a38),0,local_178);
    uVar7 = CONCAT44(uVar13,1);
    (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_410,local_178,&DAT_146a632d8,uVar7);
    uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
    local_420 = local_410;
    if (local_410 != 0) {
      LOCK();
      *(int *)(local_410 + 8) = *(int *)(local_410 + 8) + 1;
      UNLOCK();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_410);
    local_3e8 = local_410;
    local_420 = 0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>();
    if (*(int *)(param_4 + 0x1a38) < 2) goto LAB_141da64ed;
  }
  local_440 = *(longlong *)(param_4 + 0x20);
  local_448 = 0x11;
  local_458 = 0;
  uStack_450 = 0;
  if (local_440 != 0) {
    LOCK();
    *(int *)(local_440 + 8) = *(int *)(local_440 + 8) + 1;
    UNLOCK();
  }
  local_428 = 0;
  local_430 = 0;
  local_424 = 0;
  local_42c = (uint)(*(char *)(param_4 + 0x1205) != '\0') |
              -(uint)(*(char *)(param_4 + 0x11b4) != '\0') & 8;
  local_438 = local_410;
  FProjectedShadowInfo::SetStateForDepth(param_1,param_2,param_6,&local_458);
  if (*(int *)(param_1 + 0x30) == 0) {
    local_338 = *param_5;
    uStack_330 = param_5[1];
    FUN_141d950b0(param_1,param_2,&local_458,param_3,param_4,&local_338);
  }
  local_3c8 = local_3c8 & 0xffffff00;
  puVar9 = &local_3c8;
  if ((((*(uint *)(param_1 + 0x560) & 0x40) == 0) || (*(int *)(param_1 + 0x524) < 0)) ||
     ((*(uint *)(param_1 + 0x560) & 0x10) == 0)) {
    cVar12 = '\0';
  }
  else {
    cVar12 = '\x01';
  }
  uStack_3c0 = param_1;
  if (param_2 == &DAT_146ab6e78) {
    cVar6 = FUN_141636a40();
    if ((((cVar6 != '\0') && ((DAT_1464c9c18 != '\0' || (DAT_146ab6383 == '\0')))) &&
        (*(int *)(DAT_146a9ef88 + 4) != 0)) &&
       ((cVar12 != '\0' || (0 < *(int *)(DAT_146a9f0f0 + 4))))) {
      if ((*(int *)(DAT_146a9f120 + 4) < 1) && (*(int *)(DAT_146ab6d10 + 4) < 1)) {
        local_3d8 = 0;
        local_3e0 = &DAT_146ab6e78;
        puStack_340 = local_res10;
        local_res10[0] = 0;
        local_348 = &DAT_14060d670;
        local_328 = &DAT_14060d670;
        puStack_320 = puStack_340;
        lVar8 = FUN_1415d8310(&local_328,&DAT_146216a38);
        puVar9 = (uint *)operator_new(0x10,lVar8 + 0x18,1);
        uVar11 = 1;
        if (puVar9 == (uint *)0x0) {
          puVar9 = (uint *)0x0;
        }
        else {
          *(undefined1 *)puVar9 = 0;
          *(longlong *)(puVar9 + 2) = param_1;
        }
      }
      else {
        local_3d8 = 1;
        local_3e0 = &DAT_146ab6e78;
        uVar11 = 0;
      }
      pcVar4 = (code *)*param_5;
      uVar7 = param_5[1];
      FUN_141d59a10(local_2d8,cVar12,param_4,param_3,&DAT_146ab6e78,0 < *(int *)(DAT_146a9f108 + 4),
                    uVar11,&local_458);
      local_2d8[0] = &PTR__scalar_deleting_destructor__144e5bc10;
      local_208 = param_6;
      local_res20[0] = 0;
      local_220 = param_1;
      local_218 = pcVar4;
      uStack_210 = uVar7;
      (*pcVar4)(uVar7,local_288,local_res20);
      FProjectedShadowInfo::SetStateForDepth(local_220,local_288,local_208,local_2c0);
      local_25e = 0;
      local_260 = 0;
      if ((cVar12 == '\0') || (param_6 - 1U < 2)) {
        if (0 < *(int *)(param_1 + 0x680)) {
          uVar7 = FUN_141d6b6f0(local_2d8);
          if (((char)*(uint *)(param_1 + 0x560) < '\0') &&
             ((*(uint *)(param_1 + 0x560) & 0x20) == 0)) {
            uVar11 = 1;
          }
          else {
            uVar11 = 0;
          }
          plVar10 = (longlong *)FUN_141d96710(local_1f8,0,DAT_1464a8210);
          lVar8 = *plVar10;
          *(longlong *)(lVar8 + 0x10) = param_1;
          *(undefined8 *)(lVar8 + 0x18) = uVar7;
          *(longlong *)(lVar8 + 0x20) = param_4;
          *(undefined8 *)(lVar8 + 0x28) = local_458;
          *(undefined8 *)(lVar8 + 0x30) = uStack_450;
          *(undefined4 *)(lVar8 + 0x38) = local_448;
          *(longlong *)(lVar8 + 0x40) = local_440;
          if (local_440 != 0) {
            LOCK();
            *(int *)(local_440 + 8) = *(int *)(local_440 + 8) + 1;
            UNLOCK();
          }
          *(longlong *)(lVar8 + 0x48) = local_438;
          *(undefined4 *)(lVar8 + 0x50) = local_430;
          *(uint *)(lVar8 + 0x54) = local_42c;
          *(undefined4 *)(lVar8 + 0x58) = local_428;
          *(undefined1 *)(lVar8 + 0x5c) = 0;
          *(undefined1 *)(lVar8 + 0x60) = uVar11;
          lVar8 = *plVar10;
          lVar5 = plVar10[2];
          lVar3 = plVar10[1];
          local_400 = *(longlong *)(lVar8 + 0x70);
          if (local_400 != 0) {
            LOCK();
            *(int *)(local_400 + 0x48) = *(int *)(local_400 + 0x48) + 1;
            UNLOCK();
          }
          FUN_141db0680(lVar8,lVar3,(int)lVar5,1);
          FParallelCommandListSet::AddParallelCommandList
                    (local_2d8,uVar7,&local_400,*(undefined4 *)(param_1 + 0x680));
          if (local_400 != 0) {
            LOCK();
            piVar1 = (int *)(local_400 + 0x48);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              FGraphEvent::Recycle();
            }
          }
        }
      }
      else if ((*(byte *)(param_1 + 0x560) & 0x80) == 0) {
        local_308 = *(undefined8 *)puVar9;
        uStack_300 = *(undefined8 *)(puVar9 + 2);
        FUN_141d98190(*(longlong *)(param_3 + 8) + 0xb20,&local_308,param_1 + 0x568,param_1 + 0x588,
                      0,local_2d8);
      }
      else {
        local_318 = *(undefined8 *)puVar9;
        uStack_310 = *(undefined8 *)(puVar9 + 2);
        FUN_141d976f0(*(longlong *)(param_3 + 8) + 3000,&local_318);
      }
      if (*(int *)(param_1 + 0x690) != 0) {
        uVar7 = FUN_141d6b6f0(local_2d8);
        plVar10 = (longlong *)FUN_141d96890(local_1e0,0,DAT_1464a8210);
        lVar8 = *plVar10;
        *(longlong *)(lVar8 + 0x10) = param_1;
        *(undefined8 *)(lVar8 + 0x18) = uVar7;
        *(longlong *)(lVar8 + 0x20) = param_4;
        *(undefined8 *)(lVar8 + 0x28) = local_458;
        *(undefined8 *)(lVar8 + 0x30) = uStack_450;
        *(undefined4 *)(lVar8 + 0x38) = local_448;
        *(longlong *)(lVar8 + 0x40) = local_440;
        if (local_440 != 0) {
          LOCK();
          *(int *)(local_440 + 8) = *(int *)(local_440 + 8) + 1;
          UNLOCK();
        }
        *(longlong *)(lVar8 + 0x48) = local_438;
        *(undefined4 *)(lVar8 + 0x50) = local_430;
        *(uint *)(lVar8 + 0x54) = local_42c;
        *(undefined4 *)(lVar8 + 0x58) = local_428;
        *(undefined1 *)(lVar8 + 0x5c) = 0;
        *(longlong *)(lVar8 + 0x60) = param_3;
        lVar8 = *plVar10;
        lVar5 = plVar10[2];
        lVar3 = plVar10[1];
        local_3f8 = *(longlong *)(lVar8 + 0x70);
        if (local_3f8 != 0) {
          LOCK();
          *(int *)(local_3f8 + 0x48) = *(int *)(local_3f8 + 0x48) + 1;
          UNLOCK();
        }
        FUN_141db0680(lVar8,lVar3,(int)lVar5,1);
        FParallelCommandListSet::AddParallelCommandList
                  (local_2d8,uVar7,&local_3f8,*(undefined4 *)(param_1 + 0x690));
        if (local_3f8 != 0) {
          LOCK();
          piVar1 = (int *)(local_3f8 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle();
          }
        }
      }
      local_2d8[0] = &PTR__scalar_deleting_destructor__144e5bc10;
      FUN_141d662d0(local_2d8,0);
      FParallelCommandListSet::~FParallelCommandListSet(local_2d8);
      FScopedCommandListWaitForTasks::~FScopedCommandListWaitForTasks(&local_3e0);
      goto LAB_141da6cc1;
    }
  }
  FProjectedShadowInfo::SetStateForDepth(param_1,param_2,param_6,&local_458);
  if ((cVar12 == '\0') || (param_6 - 1U < 2)) {
    if (0 < *(int *)(param_1 + 0x680)) {
      if (((char)*(uint *)(param_1 + 0x560) < '\0') && ((*(uint *)(param_1 + 0x560) & 0x20) == 0)) {
        FUN_141d7e1e0(param_2,param_4,&local_458,param_1);
      }
      else {
        FUN_141d7e630(param_2,param_4,&local_458,param_1);
      }
    }
  }
  else {
    lVar8 = *(longlong *)(param_3 + 8);
    if ((*(byte *)(param_1 + 0x560) & 0x80) == 0) {
      local_380 = local_458;
      local_378 = uStack_450;
      local_370 = local_448;
      local_368 = local_440;
      if (local_440 != 0) {
        LOCK();
        *(int *)(local_440 + 8) = *(int *)(local_440 + 8) + 1;
        UNLOCK();
      }
      local_360 = local_438;
      local_358 = local_430;
      local_354 = local_42c;
      local_350 = local_428;
      local_34c = 0;
      local_2e8 = local_3c8;
      uStack_2e4 = uStack_3c4;
      uStack_2e0 = (undefined4)uStack_3c0;
      uStack_2dc = uStack_3c0._4_4_;
      FUN_141d7ec40(lVar8 + 0xb20,param_2,param_4,&local_2e8,&local_380,param_1 + 0x568,
                    param_1 + 0x588,0,0,*(int *)(lVar8 + 0xb58) + -1,0);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_368);
    }
    else {
      local_3b8 = local_458;
      local_3b0 = uStack_450;
      local_3a8 = local_448;
      local_3a0 = local_440;
      if (local_440 != 0) {
        LOCK();
        *(int *)(local_440 + 8) = *(int *)(local_440 + 8) + 1;
        UNLOCK();
      }
      local_398 = local_438;
      local_390 = local_430;
      local_38c = local_42c;
      local_388 = local_428;
      local_384 = 0;
      local_2f8 = local_3c8;
      uStack_2f4 = uStack_3c4;
      uStack_2f0 = (undefined4)uStack_3c0;
      uStack_2ec = uStack_3c0._4_4_;
      FUN_141d7e9e0(lVar8 + 3000,param_2,param_4,&local_2f8,&local_3b8,param_1 + 0x568,
                    param_1 + 0x588,0,0,*(int *)(lVar8 + 0xbf0) + -1,0);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_3a0);
    }
  }
  FUN_141da6370(param_1,param_2,param_3,param_4,&local_458);
LAB_141da6cc1:
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_440);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_3f0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_3e8);
  return;
}



// FUNCTION 141da6d00 FUN_141da6d00 body=377 status=ok
// SIG undefined FUN_141da6d00(void)

void FUN_141da6d00(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *local_48;
  undefined1 local_40 [4];
  uint local_3c;
  longlong local_38;
  uint local_30;
  int local_2c;
  
  cVar3 = FUN_141ee4480((&DAT_1464c9c48)[*(int *)(param_1 + 0x2a0)]);
  if (((cVar3 == '\0') && ((*(byte *)(param_1 + 0x3c) & 0x40) != 0)) &&
     ((cVar3 = FUN_142753a10(), cVar3 != '\0' ||
      (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 != '\0')))) {
    FSceneRenderTargets::Get(param_2);
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_48,*(longlong *)(param_1 + 8) + 0x1070);
    if (local_2c < *(int *)(local_38 + 0x18)) {
      do {
        lVar1 = *(longlong *)(*local_48 + 0x20 + (longlong)local_2c * 0x30);
        lVar2 = *(longlong *)(lVar1 + 0x30);
        if (((((1e-05 <= *(float *)(lVar2 + 0x100) * *(float *)(lVar2 + 0x100)) ||
              (1e-05 <= *(float *)(lVar2 + 0x104) * *(float *)(lVar2 + 0x104))) ||
             (1e-05 <= *(float *)(lVar2 + 0x108) * *(float *)(lVar2 + 0x108))) &&
            (((*(uint *)(lVar2 + 0x180) >> 2 & 1) == 0 ||
             (cVar3 = FUN_141ba17a0(lVar1), cVar3 == '\0')))) &&
           ((*(longlong *)(lVar1 + 0x30) != 0 &&
            ((*(uint *)(*(longlong *)(lVar1 + 0x30) + 0x180) >> 0x11 & 1) != 0)))) {
          FUN_141daa4a0(param_1,param_2,lVar1,0,0,1);
        }
        local_30 = local_30 & ~local_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_40);
      } while (local_2c < *(int *)(local_38 + 0x18));
    }
  }
  return;
}



// FUNCTION 141da6e80 FUN_141da6e80 body=2387 status=ok
// SIG undefined FUN_141da6e80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141da6e80(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  byte bVar9;
  longlong *plVar10;
  float fVar11;
  undefined1 auStack_188 [32];
  longlong local_168;
  ulonglong local_158;
  float local_150;
  undefined *local_148;
  undefined4 local_140;
  undefined4 local_138;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  undefined8 local_118;
  longlong *plStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  ulonglong local_cc;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  plVar7 = (longlong *)0x0;
  bVar3 = false;
  local_158 = local_158 & 0xffffffff00000000;
  plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x5c8) + 0x30);
  local_138 = param_3;
  (**(code **)(*plVar10 + 0x10))(plVar10,&local_130);
  local_d8 = 0;
  local_118 = 0;
  plStack_110 = (longlong *)0x0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = (longlong *)0x0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_d0 = 0;
  local_cc = 0x26;
  local_c4 = 0;
  local_bc = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_74 = 0;
  local_6c = 0;
  local_64 = 0;
  FUN_14049afe0(param_2,&local_118);
  FUN_141dac6c0(param_1,&local_118,param_5,0);
  local_158 = *(ulonglong *)(param_4 + 0x8dc);
  local_150 = *(float *)(param_4 + 0x8e4);
  local_130 = (float)local_158 - local_130;
  local_12c = (float)(local_158 >> 0x20) - local_12c;
  fVar11 = *(float *)(param_4 + 0x11b0) + *(float *)(param_4 + 0x11b0) + local_124 * 1.05;
  local_cc = local_cc & 0xffffffff00000000;
  if (fVar11 * fVar11 <=
      local_12c * local_12c + local_130 * local_130 +
      (local_150 - local_128) * (local_150 - local_128)) {
    local_d8 = FUN_141abfb70();
    if (*(char *)(param_4 + 0x11b4) != '\0') {
      uStack_e0 = FUN_141ac06b0();
      goto LAB_141da7005;
    }
  }
  else {
    local_d8 = FUN_1409853f0();
    if (*(char *)(param_4 + 0x11b4) == '\0') {
      uStack_e0 = FUN_141ac06b0();
      goto LAB_141da7005;
    }
  }
  uStack_e0 = FUN_141ac0570();
LAB_141da7005:
  iVar4 = FUN_141d9d740();
  if (iVar4 == 1) {
    lVar1 = *(longlong *)(param_4 + 0x3090);
    local_148 = &DAT_146a9f790;
    local_140 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,&local_158,&local_148);
    plVar10 = plVar7;
    if ((int)local_158 != -1) {
      plVar10 = (longlong *)((longlong)(int)local_158 * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    local_140 = 0;
    plVar6 = plVar10 + 2;
    if (plVar10 == (longlong *)0x0) {
      plVar6 = plVar7;
    }
    local_148 = &DAT_146aa4d40;
    plVar6 = (longlong *)*plVar6;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,&local_158,&local_148);
    plVar10 = plVar7;
    if ((int)local_158 != -1) {
      plVar10 = (longlong *)((longlong)(int)local_158 * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    plVar8 = plVar10 + 2;
    if (plVar10 == (longlong *)0x0) {
      plVar8 = plVar7;
    }
    lVar1 = *plVar8;
    puVar5 = (undefined8 *)FUN_141ee3620();
    local_118 = *puVar5;
    if (plVar6 == (longlong *)0x0) {
      local_158 = 0;
      plVar10 = (longlong *)0x1;
      plStack_110 = plVar7;
    }
    else {
      local_158 = plVar6[9];
      if (*(char *)(local_158 + 0x28) == '\0') {
        FUN_1419f3850(local_158);
      }
      plStack_110 = *(longlong **)(local_158 + 0x38);
      plVar10 = plVar7;
    }
    if (plVar10 != (longlong *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
    }
    bVar3 = false;
    if (lVar1 == 0) {
      bVar3 = true;
      local_158 = 0;
    }
    else {
      lVar2 = *(longlong *)(lVar1 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      plVar7 = *(longlong **)(lVar2 + 0x40);
    }
    local_f8 = plVar7;
    if (bVar3) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
    }
    FUN_141ed6ac0(param_2,&local_118,2,1);
    (**(code **)(*plVar6 + 0x30))(plVar6,param_2,param_4,param_1);
    local_168 = param_1;
    FUN_141dad240(lVar1,param_2,local_138,param_4);
  }
  else if (iVar4 == 2) {
    lVar1 = *(longlong *)(param_4 + 0x3090);
    local_148 = &DAT_146a9f790;
    local_140 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,&local_158,&local_148);
    plVar10 = plVar7;
    if ((int)local_158 != -1) {
      plVar10 = (longlong *)((longlong)(int)local_158 * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    local_140 = 0;
    plVar6 = plVar10 + 2;
    if (plVar10 == (longlong *)0x0) {
      plVar6 = plVar7;
    }
    local_148 = &DAT_146aa4e90;
    plVar6 = (longlong *)*plVar6;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,&local_158,&local_148);
    plVar10 = plVar7;
    if ((int)local_158 != -1) {
      plVar10 = (longlong *)((longlong)(int)local_158 * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    plVar8 = plVar10 + 2;
    if (plVar10 == (longlong *)0x0) {
      plVar8 = plVar7;
    }
    lVar1 = *plVar8;
    puVar5 = (undefined8 *)FUN_141ee3620();
    local_118 = *puVar5;
    if (plVar6 == (longlong *)0x0) {
      local_158 = 0;
      plVar10 = (longlong *)&DAT_00000004;
      plStack_110 = plVar7;
    }
    else {
      local_158 = plVar6[9];
      if (*(char *)(local_158 + 0x28) == '\0') {
        FUN_1419f3850(local_158);
      }
      plStack_110 = *(longlong **)(local_158 + 0x38);
      plVar10 = plVar7;
    }
    if (plVar10 != (longlong *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
    }
    bVar3 = false;
    if (lVar1 == 0) {
      bVar3 = true;
      local_158 = 0;
    }
    else {
      lVar2 = *(longlong *)(lVar1 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      plVar7 = *(longlong **)(lVar2 + 0x40);
    }
    local_f8 = plVar7;
    if (bVar3) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
    }
    FUN_141ed6ac0(param_2,&local_118,2,1);
    (**(code **)(*plVar6 + 0x30))(plVar6,param_2,param_4,param_1);
    local_168 = param_1;
    FUN_141dad240(lVar1,param_2,local_138,param_4);
  }
  else if (iVar4 == 3) {
    lVar1 = *(longlong *)(param_4 + 0x3090);
    local_148 = &DAT_146a9f790;
    local_140 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,&local_158,&local_148);
    plVar10 = plVar7;
    if ((int)local_158 != -1) {
      plVar10 = (longlong *)((longlong)(int)local_158 * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    local_140 = 0;
    plVar6 = plVar10 + 2;
    if (plVar10 == (longlong *)0x0) {
      plVar6 = plVar7;
    }
    local_148 = &DAT_146aa4fe0;
    plVar6 = (longlong *)*plVar6;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,&local_158,&local_148);
    plVar10 = plVar7;
    if ((int)local_158 != -1) {
      plVar10 = (longlong *)((longlong)(int)local_158 * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    plVar8 = plVar10 + 2;
    if (plVar10 == (longlong *)0x0) {
      plVar8 = plVar7;
    }
    lVar1 = *plVar8;
    puVar5 = (undefined8 *)FUN_141ee3620();
    local_118 = *puVar5;
    if (plVar6 == (longlong *)0x0) {
      local_158 = 0;
      plVar10 = (longlong *)&DAT_00000010;
      plStack_110 = plVar7;
    }
    else {
      local_158 = plVar6[9];
      if (*(char *)(local_158 + 0x28) == '\0') {
        FUN_1419f3850(local_158);
      }
      plStack_110 = *(longlong **)(local_158 + 0x38);
      plVar10 = plVar7;
    }
    if (plVar10 != (longlong *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
    }
    bVar3 = false;
    if (lVar1 == 0) {
      bVar3 = true;
      local_158 = 0;
    }
    else {
      lVar2 = *(longlong *)(lVar1 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      plVar7 = *(longlong **)(lVar2 + 0x40);
    }
    local_f8 = plVar7;
    if (bVar3) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
    }
    FUN_141ed6ac0(param_2,&local_118,2,1);
    (**(code **)(*plVar6 + 0x30))(plVar6,param_2,param_4,param_1);
    local_168 = param_1;
    FUN_141dad240(lVar1,param_2,local_138,param_4);
  }
  else if (iVar4 == 4) {
    lVar1 = *(longlong *)(param_4 + 0x3090);
    local_148 = &DAT_146a9f790;
    local_140 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,&local_158,&local_148);
    plVar10 = plVar7;
    if ((int)local_158 != -1) {
      plVar10 = (longlong *)((longlong)(int)local_158 * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    local_140 = 0;
    plVar6 = plVar10 + 2;
    if (plVar10 == (longlong *)0x0) {
      plVar6 = plVar7;
    }
    local_148 = &DAT_146aa5130;
    plVar6 = (longlong *)*plVar6;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,&local_158,&local_148);
    plVar10 = plVar7;
    if ((int)local_158 != -1) {
      plVar10 = (longlong *)((longlong)(int)local_158 * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    plVar8 = plVar10 + 2;
    if (plVar10 == (longlong *)0x0) {
      plVar8 = plVar7;
    }
    lVar1 = *plVar8;
    puVar5 = (undefined8 *)FUN_141ee3620();
    local_118 = *puVar5;
    if (plVar6 == (longlong *)0x0) {
      local_158 = 0;
      plVar10 = (longlong *)&DAT_00000040;
      plStack_110 = plVar7;
    }
    else {
      local_158 = plVar6[9];
      if (*(char *)(local_158 + 0x28) == '\0') {
        FUN_1419f3850(local_158);
      }
      plStack_110 = *(longlong **)(local_158 + 0x38);
      plVar10 = plVar7;
    }
    bVar9 = (byte)plVar10;
    if (plVar10 != (longlong *)0x0) {
      bVar9 = 0;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
    }
    if (lVar1 == 0) {
      bVar9 = bVar9 | 0x80;
      local_158 = 0;
    }
    else {
      lVar2 = *(longlong *)(lVar1 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      plVar7 = *(longlong **)(lVar2 + 0x40);
    }
    local_f8 = plVar7;
    if ((char)bVar9 < '\0') {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
    }
    FUN_141ed6ac0(param_2,&local_118,2,1);
    (**(code **)(*plVar6 + 0x30))(plVar6,param_2,param_4,param_1);
    local_168 = param_1;
    FUN_141dad240(lVar1,param_2,local_138,param_4);
  }
  else if (iVar4 == 5) {
    lVar1 = *(longlong *)(param_4 + 0x3090);
    local_148 = &DAT_146a9f790;
    local_140 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,&local_158,&local_148);
    plVar10 = plVar7;
    if ((int)local_158 != -1) {
      plVar10 = (longlong *)((longlong)(int)local_158 * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    local_140 = 0;
    plVar6 = plVar10 + 2;
    if (plVar10 == (longlong *)0x0) {
      plVar6 = plVar7;
    }
    local_148 = &DAT_146aa5280;
    plVar6 = (longlong *)*plVar6;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,&local_158,&local_148);
    plVar10 = plVar7;
    if ((int)local_158 != -1) {
      plVar10 = (longlong *)((longlong)(int)local_158 * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    plVar8 = plVar10 + 2;
    if (plVar10 == (longlong *)0x0) {
      plVar8 = plVar7;
    }
    lVar1 = *plVar8;
    puVar5 = (undefined8 *)FUN_141ee3620();
    local_118 = *puVar5;
    if (plVar6 == (longlong *)0x0) {
      local_158 = 0;
      bVar3 = true;
      plStack_110 = plVar7;
    }
    else {
      local_158 = plVar6[9];
      if (*(char *)(local_158 + 0x28) == '\0') {
        FUN_1419f3850(local_158);
      }
      plStack_110 = *(longlong **)(local_158 + 0x38);
    }
    if (bVar3) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
    }
    bVar3 = false;
    if (lVar1 == 0) {
      bVar3 = true;
      local_158 = 0;
    }
    else {
      lVar2 = *(longlong *)(lVar1 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      plVar7 = *(longlong **)(lVar2 + 0x40);
    }
    local_f8 = plVar7;
    if (bVar3) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
    }
    FUN_141ed6ac0(param_2,&local_118,2,1);
    (**(code **)(*plVar6 + 0x30))(plVar6,param_2,param_4,param_1);
    local_168 = param_1;
    FUN_141dad240(lVar1,param_2,local_138,param_4);
  }
  FUN_141b97230(param_2);
  return;
}



// FUNCTION 141da77e0 FUN_141da77e0 body=1646 status=ok
// SIG undefined FUN_141da77e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141da77e0(longlong param_1,longlong param_2,undefined4 param_3,longlong param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  int iVar1;
  bool bVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 *puVar11;
  int iVar12;
  ulonglong uVar13;
  char cVar14;
  longlong lVar15;
  undefined1 auStack_268 [32];
  longlong **local_248;
  longlong **local_240;
  undefined4 local_238;
  undefined1 *local_230;
  undefined4 local_228;
  char local_218;
  undefined1 local_217 [7];
  longlong *local_210;
  longlong *local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined8 local_1a4;
  undefined4 local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_154;
  undefined8 local_14c;
  undefined4 local_144;
  undefined1 local_138 [128];
  undefined1 *local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  uVar13 = 0;
  local_210 = (longlong *)((ulonglong)local_210 & 0xffffffff00000000);
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_160 = 0;
  local_14c = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 0x26;
  local_1a4 = 0;
  local_19c = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_158 = 0;
  local_154 = 0;
  local_144 = 0;
  local_200 = param_3;
  FUN_14049afe0(param_2,&local_1f8);
  uVar10 = *(uint *)(*(longlong *)(param_1 + 0x5c8) + 0x58);
  if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)(param_4 + 0x1e20))) {
    lVar15 = *(longlong *)(param_4 + 0x1e18);
    if (*(longlong *)(param_4 + 0x1e18) == 0) {
      lVar15 = param_4 + 0x1e08;
    }
    if (((*(uint *)(lVar15 + (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4) >>
          (uVar10 & 0x1f) & 1) != 0) &&
       (((uint)((ulonglong)
                *(undefined8 *)
                 (*(longlong *)
                   ((longlong)(int)uVar10 * 0x78 + *(longlong *)(param_4 + 0x1df8) + 0x30) +
                 (longlong)*(int *)(param_1 + 0x40) * 8) >> 0x2b) & 1) != 0)) {
      local_b8 = (undefined1 *)0x0;
      local_a8 = 0;
      FUN_141daf430(param_1,param_4,local_138,local_217);
      uVar10 = *(uint *)(param_1 + 0x560);
      if (((uVar10 & 0x40) == 0) ||
         ((((*(int *)(param_1 + 0x524) < 0 || ((uVar10 & 0x10) == 0)) || (DAT_146ab62ec == '\0')) ||
          (*(int *)(DAT_146a9f570 + 4) == 0)))) {
        cVar14 = '\0';
        local_238 = CONCAT31(local_238._1_3_,local_217[0]);
        local_248 = (longlong **)local_138;
        local_240 = (longlong **)CONCAT71(local_240._1_7_,param_7);
        local_218 = '\0';
        FUN_141db0c00(param_1,param_2,param_4,param_5);
        uVar10 = *(uint *)(param_1 + 0x560);
      }
      else {
        cVar14 = '\x01';
        local_218 = '\x01';
      }
      if ((*(char *)(param_4 + 0x11b4) == '\0') &&
         ((((uVar10 & 0x40) == 0 || (*(int *)(param_1 + 0x524) < 0)) || ((uVar10 & 0x10) == 0)))) {
        uStack_1c0 = FUN_141ac0570();
      }
      else {
        uStack_1c0 = FUN_141ac06b0();
      }
      local_1b0 = CONCAT31(local_1b0._1_3_,cVar14);
      if (cVar14 == '\0') {
        if (DAT_1464c3148 == 0) {
          local_1b8 = FUN_141d9c760();
        }
        else {
          local_1b8 = FUN_141d9c620();
        }
      }
      else {
        local_1b8 = FUN_1409853f0();
      }
      FUN_141dac6c0(param_1,&local_1f8,param_6,param_7);
      uVar10 = 0;
      if ((((*(uint *)(param_1 + 0x560) & 0x40) == 0) || (*(int *)(param_1 + 0x524) < 0)) ||
         (uVar4 = 1, (*(uint *)(param_1 + 0x560) & 0x10) == 0)) {
        uVar4 = uVar10;
      }
      local_1ac = CONCAT44(local_1ac._4_4_,uVar4);
      uVar4 = FUN_141d9d740();
      if (1 < uVar4) {
        uVar5 = *(uint *)(param_1 + 0x560) & 0x40;
        if (((((uVar5 == 0) || (*(int *)(param_1 + 0x524) < 0)) ||
             ((*(uint *)(param_1 + 0x560) & 0x10) == 0)) || (*(int *)(param_1 + 0x524) < 1)) &&
           ((2 < uVar4 && (uVar5 == 0)))) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38) <
               DAT_146aa5fa8) && (_Init_thread_header(&DAT_146aa5fa8), DAT_146aa5fa8 == -1)) {
            if (DAT_1468b1f88 == (longlong *)0x0) {
              IConsoleManager::SetupSingleton();
            }
            plVar8 = (longlong *)
                     (**(code **)(*DAT_1468b1f88 + 0x98))
                               (DAT_1468b1f88,L"r.Shadow.PreShadowResolutionFactor");
            uVar9 = uVar13;
            if (plVar8 != (longlong *)0x0) {
              uVar9 = (**(code **)(*plVar8 + 0x40))(plVar8);
            }
            DAT_146aa5fa0 = uVar9;
            _Init_thread_footer(&DAT_146aa5fa8);
          }
          if ((*(uint *)(param_1 + 0x560) & 0x800) == 0) {
            iVar12 = 0x200;
          }
          else {
            iVar12 = (int)(*(float *)(DAT_146aa5fa0 + 4) * 512.0);
          }
          uVar9 = uVar13;
          for (iVar1 = *(int *)(param_1 + 0x538); iVar1 < iVar12; iVar1 = iVar1 * 2) {
            uVar10 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar10;
          }
          uVar10 = uVar4 - uVar10;
          if ((int)uVar10 < 3) {
            uVar4 = 3;
          }
          else {
            uVar4 = 5;
            if ((int)uVar10 < 5) {
              uVar4 = uVar10;
            }
          }
        }
      }
      local_240 = &local_208;
      local_210 = (longlong *)0x0;
      local_248 = &local_210;
      local_208 = (longlong *)0x0;
      FUN_141d9d210(uVar4,param_4,param_1,param_7);
      puVar6 = (undefined8 *)FUN_141ee3620();
      plVar8 = local_210;
      local_1f8 = *puVar6;
      if (local_210 == (longlong *)0x0) {
        uStack_1f0 = 0;
        uVar13 = 1;
        local_210 = (longlong *)0x0;
      }
      else {
        lVar15 = local_210[9];
        if (*(char *)(lVar15 + 0x28) == '\0') {
          FUN_1419f3850(lVar15);
        }
        uStack_1f0 = *(undefined8 *)(lVar15 + 0x38);
      }
      uVar7 = 0;
      if (uVar13 != 0) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_210);
      }
      plVar3 = local_208;
      bVar2 = false;
      if (local_208 == (longlong *)0x0) {
        bVar2 = true;
        local_208 = (longlong *)0x0;
      }
      else {
        lVar15 = local_208[9];
        if (*(char *)(lVar15 + 0x28) == '\0') {
          FUN_1419f3850(lVar15);
        }
        uVar7 = *(undefined8 *)(lVar15 + 0x40);
      }
      local_1d8 = uVar7;
      if (bVar2) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_208);
      }
      FUN_141ed6ac0(param_2,&local_1f8,2,1);
      cVar14 = local_218;
      if (local_218 != '\0') {
        SetDepthBoundsTest(param_2,*(undefined4 *)(param_1 + 0x3c0),*(undefined4 *)(param_1 + 0x3c4)
                           ,param_4 + 0x390);
      }
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar11 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
        puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar11 + 3;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar11;
      *(undefined8 **)(param_2 + 8) = puVar11 + 1;
      puVar11[1] = 0;
      *puVar11 = &PTR_LAB_143f489c0;
      *(undefined4 *)(puVar11 + 2) = 0;
      (**(code **)(*plVar8 + 0x30))(plVar8,param_2,param_4,param_1);
      local_248 = (longlong **)param_1;
      (**(code **)(*plVar3 + 0x30))(plVar3,param_2,local_200,param_4);
      if ((((*(uint *)(param_1 + 0x560) & 0x40) == 0) || (*(int *)(param_1 + 0x524) < 0)) ||
         ((*(uint *)(param_1 + 0x560) & 0x10) == 0)) {
        local_228 = 0x10;
        local_230 = local_138;
        if (local_b8 != (undefined1 *)0x0) {
          local_230 = local_b8;
        }
        local_238 = 2;
        local_240 = (longlong **)&DAT_144edc3c0;
        local_248 = (longlong **)CONCAT44(local_248._4_4_,0xc);
        FUN_141abae60(param_2,0,0,8);
      }
      else {
        local_98 = 0x3f800000bf800000;
        uStack_90 = 0x3f80000000000000;
        local_88 = 0x3f8000003f800000;
        uStack_80 = 0x3f80000000000000;
        local_78 = 0xbf800000;
        uStack_74 = 0xbf800000;
        uStack_70 = 0;
        uStack_6c = 0x3f800000;
        local_68 = 0x3f800000;
        uStack_64 = 0xbf800000;
        uStack_60 = 0;
        uStack_5c = 0x3f800000;
        local_248 = (longlong **)CONCAT44(local_248._4_4_,0x10);
        FUN_141a14d80(param_2,1,2,&local_98);
      }
      if ((cVar14 == '\0') && (DAT_1464c3148 == 0)) {
        local_230 = (undefined1 *)CONCAT44(local_230._4_4_,1);
        local_238 = CONCAT31(local_238._1_3_,1);
        local_240 = (longlong **)((ulonglong)local_240 & 0xffffffff00000000);
        local_248 = (longlong **)((ulonglong)local_248 & 0xffffffffffffff00);
        DrawClearQuadMRT(param_2,0,1,&DAT_1468b5d78);
      }
      if (local_b8 != (undefined1 *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 141da7e50 FUN_141da7e50 body=1694 status=ok
// SIG undefined FUN_141da7e50(void)

void FUN_141da7e50(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  int *piVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  uint in_stack_ffffffffffffff20;
  longlong local_b8;
  undefined1 *local_a8;
  longlong **pplStack_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined1 *local_58;
  longlong **pplStack_50;
  
  uVar8 = FSceneRenderTargets::Get(param_2);
  lVar9 = -1;
  bVar3 = false;
  uVar6 = 0xffffffff;
  iVar7 = -1;
  iVar12 = (int)param_1[0x41] + -1;
  if (*(int *)(DAT_146a10070 + 4) == 0) {
    iVar12 = 0;
    iVar7 = (int)param_1[0x41];
  }
  local_b8 = (longlong)iVar12;
  local_78 = (longlong)iVar7;
  bVar4 = false;
  if (local_b8 != local_78) {
    if (*(int *)(DAT_146a10070 + 4) == 0) {
      lVar9 = 1;
    }
    lVar13 = local_b8 * 0x28;
    local_80 = lVar9 * 0x28;
    local_88 = lVar9;
    do {
      puVar21 = (ulonglong *)(param_2 + 0x30);
      lVar9 = param_1[0x40] + lVar13;
      plVar1 = *(longlong **)(lVar9 + 0x10) + 1;
      (**(code **)(**(longlong **)(lVar9 + 0x10) + 0x10))();
      AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
      uVar17 = 0;
      uVar20 = uVar17;
      if (0 < *(int *)(lVar9 + 0x20)) {
        do {
          lVar10 = *(longlong *)(uVar20 + *(longlong *)(lVar9 + 0x18));
          if (*(int *)(lVar10 + 0x30) == 0) {
            lVar2 = param_1[1];
            if (*(int *)(lVar2 + 0x17a0) != *(int *)(lVar2 + 0x17cc)) {
              iVar7 = *(int *)(*(longlong *)(lVar10 + 0x5c8) + 0x58);
              lVar10 = *(longlong *)(lVar2 + 0x17d8);
              if (*(longlong *)(lVar2 + 0x17d8) == 0) {
                lVar10 = lVar2 + 0x17d0;
              }
              iVar12 = *(int *)(lVar10 + ((longlong)*(int *)(lVar2 + 0x17e0) - 1U & (longlong)iVar7)
                                         * 4);
              if (iVar12 != -1) {
                do {
                  piVar14 = (int *)((longlong)iVar12 * 0x270 + *(longlong *)(lVar2 + 0x1798));
                  if (*piVar14 == iVar7) {
                    if (iVar12 != -1) goto LAB_141da8027;
                    break;
                  }
                  iVar12 = piVar14[0x98];
                } while (iVar12 != -1);
              }
            }
            piVar14 = (int *)0x0;
LAB_141da8027:
            if (((char)piVar14[0x97] != '\0') &&
               ((*(longlong *)(piVar14 + 0x94) != 0 || (0 < piVar14[0x92])))) {
              puVar16 = (undefined8 *)(*puVar21 + 7 & 0xfffffffffffffff8);
              local_a8 = *(undefined1 **)(*(longlong *)(piVar14 + 0x94) + 8);
              puVar11 = puVar16 + 1;
              if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
                FMemStackBase::AllocateNewChunk(puVar21,0x10);
                puVar16 = (undefined8 *)(*puVar21 + 7 & 0xfffffffffffffff8);
                puVar11 = puVar16 + 1;
              }
              *puVar21 = (ulonglong)puVar11;
              *puVar16 = local_a8;
              puVar15 = (undefined8 *)(*puVar21 + 7 & 0xfffffffffffffff8);
              puVar11 = puVar15 + 5;
              if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
                FMemStackBase::AllocateNewChunk(puVar21,0x30);
                puVar15 = (undefined8 *)(*puVar21 + 7 & 0xfffffffffffffff8);
                puVar11 = puVar15 + 5;
              }
              *puVar21 = (ulonglong)puVar11;
              *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
              **(undefined8 **)(param_2 + 8) = puVar15;
              *(undefined8 **)(param_2 + 8) = puVar15 + 1;
              puVar15[1] = 0;
              *puVar15 = &PTR_LAB_143f59470;
              *(undefined4 *)(puVar15 + 2) = 1;
              puVar15[3] = puVar16;
              *(undefined4 *)(puVar15 + 4) = 0;
              *(undefined1 *)((longlong)puVar15 + 0x24) = 0;
            }
          }
          uVar18 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar18;
          uVar20 = uVar20 + 8;
        } while ((int)uVar18 < *(int *)(lVar9 + 0x20));
      }
      local_70 = param_1;
      local_68 = plVar1;
      local_60 = uVar8;
      FUN_141d8c660(&local_70,param_2,1);
      uVar17 = 0;
      uVar20 = uVar17;
      if (0 < *(int *)(lVar9 + 0x20)) {
        local_58 = &LAB_141d90d20;
        uVar19 = uVar17;
        pplStack_50 = &local_70;
        do {
          lVar10 = *(longlong *)(uVar19 + *(longlong *)(lVar9 + 0x18));
          if ((uVar20 == 0) || (*(ulonglong *)(*(longlong *)(lVar10 + 0x5c8) + 0x30) != uVar20)) {
            uVar20 = *(ulonglong *)(*(longlong *)(lVar10 + 0x5c8) + 0x30);
            local_98 = 0;
            local_90 = 0;
            AK::MemoryMgr::StartProfileThreadUsage((long)uVar20);
            if (local_98 != 0) {
              FMemory::Free();
            }
          }
          in_stack_ffffffffffffff20 = 0;
          local_a8 = &LAB_141d90d20;
          pplStack_a0 = &local_70;
          FUN_141da6420(lVar10,param_2,param_1,*(undefined8 *)(lVar10 + 0x10),&local_a8,0);
          uVar18 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar18;
          uVar19 = uVar19 + 8;
        } while ((int)uVar18 < *(int *)(lVar9 + 0x20));
      }
      puVar21 = (ulonglong *)(param_2 + 0x30);
      puVar16 = (undefined8 *)(*puVar21 + 7 & 0xfffffffffffffff8);
      local_a8 = (undefined1 *)*plVar1;
      puVar11 = puVar16 + 1;
      if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
        FMemStackBase::AllocateNewChunk(puVar21,0x10);
        puVar16 = (undefined8 *)(*puVar21 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar16 + 1;
      }
      *puVar21 = (ulonglong)puVar11;
      *puVar16 = local_a8;
      puVar15 = (undefined8 *)(*puVar21 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar15 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
        FMemStackBase::AllocateNewChunk(puVar21,0x30);
        puVar15 = (undefined8 *)(*puVar21 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar15 + 5;
      }
      *puVar21 = (ulonglong)puVar11;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar15;
      *(undefined8 **)(param_2 + 8) = puVar15 + 1;
      puVar15[1] = 0;
      *puVar15 = &PTR_LAB_143f59470;
      *(undefined4 *)(puVar15 + 2) = 1;
      puVar15[3] = puVar16;
      *(undefined4 *)(puVar15 + 4) = 0;
      *(undefined1 *)((longlong)puVar15 + 0x24) = 0;
      if (((*(int *)(DAT_146a10070 + 4) == 1) && (uVar20 != 0)) &&
         (*(char *)(uVar20 + 0x188) == '\0')) {
        lVar9 = **(longlong **)(lVar9 + 0x18);
        FUN_141cde450(uVar8,param_2,!bVar3);
        lVar10 = *(longlong *)(uVar20 + 0x20);
        bVar3 = true;
        puVar11 = (undefined8 *)FSceneRenderTargets::GetLightAttenuation(uVar8);
        in_stack_ffffffffffffff20 = in_stack_ffffffffffffff20 & 0xffffff00;
        FUN_141daa120(param_1,param_2,lVar10,*puVar11,lVar9,in_stack_ffffffffffffff20,0);
        uVar18 = *(uint *)(lVar9 + 0x560);
        if (((((byte)uVar18 & 0x41) == 0x41) && ((uVar18 & 0x8200) == 0)) &&
           (((*(uint *)(*(longlong *)(lVar10 + 0x30) + 0x180) >> 3 & 1) == 0 ||
            ((((uVar18 & 0x40) != 0 && (-1 < *(int *)(lVar9 + 0x524))) && ((uVar18 & 0x10) != 0)))))
           ) {
          lVar2 = *(longlong *)(lVar9 + 0x38);
          uVar18 = 0;
          iVar7 = (int)param_1[0x19];
          if (lVar2 == 0) {
            if (0 < iVar7) {
              do {
                in_stack_ffffffffffffff20 = uVar18;
                (**(code **)(*param_1 + 0x18))
                          (param_1,param_2,lVar10,lVar9,
                           (longlong)(int)uVar18 * 0x30d0 + param_1[0x18],uVar18);
                uVar18 = uVar18 + 1;
              } while ((int)uVar18 < (int)param_1[0x19]);
            }
            *(uint *)(lVar9 + 0x560) = *(uint *)(lVar9 + 0x560) | 0x8000;
          }
          else {
            uVar5 = uVar6;
            if (0 < iVar7) {
              do {
                uVar5 = uVar18;
                if (lVar2 == (longlong)(int)uVar18 * 0x30d0 + param_1[0x18]) break;
                uVar18 = uVar18 + 1;
                uVar5 = uVar6;
              } while ((int)uVar18 < iVar7);
            }
            in_stack_ffffffffffffff20 = uVar5;
            (**(code **)(*param_1 + 0x18))(param_1,param_2,lVar10,lVar9,lVar2,uVar5);
            *(uint *)(lVar9 + 0x560) = *(uint *)(lVar9 + 0x560) | 0x8000;
            uVar6 = uVar5;
          }
        }
      }
      local_b8 = local_b8 + local_88;
      lVar13 = lVar13 + local_80;
      bVar4 = bVar3;
    } while (local_b8 != local_78);
  }
  if ((*(int *)(DAT_146a10070 + 4) == 1) && (bVar4)) {
    FUN_141ce3770(uVar8,param_2);
  }
  return;
}



// FUNCTION 141da84f0 FUN_141da84f0 body=6532 status=ok
// SIG undefined FUN_141da84f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141da84f0(ulonglong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 *puVar7;
  ulonglong *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  longlong *plVar13;
  ulonglong *puVar14;
  longlong lVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined1 auStack_498 [32];
  longlong **local_478;
  longlong *local_470;
  undefined1 local_468;
  undefined1 local_460;
  int local_458;
  ulonglong local_450;
  longlong local_448;
  longlong local_440;
  ulonglong local_438;
  undefined8 local_430;
  longlong local_428;
  undefined8 local_420;
  ulonglong local_418;
  longlong local_410;
  undefined8 local_408;
  undefined8 uStack_400;
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
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  ulonglong local_378;
  longlong local_370;
  longlong local_368;
  longlong **local_360;
  longlong **local_358;
  longlong **local_350;
  undefined4 local_348;
  longlong local_340;
  undefined8 local_338;
  undefined8 local_330;
  longlong local_328;
  longlong local_320;
  longlong *local_318;
  longlong *local_310;
  longlong *local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  longlong local_2f0 [3];
  longlong *local_2d8;
  longlong local_2d0;
  undefined1 *local_2c8;
  ulonglong *puStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  longlong local_298;
  longlong local_290;
  undefined1 *local_288;
  ulonglong *puStack_280;
  undefined1 *local_278;
  longlong *plStack_270;
  undefined1 *local_268;
  ulonglong *puStack_260;
  undefined1 *local_258;
  ulonglong *puStack_250;
  undefined1 *local_248;
  longlong *plStack_240;
  undefined1 *local_238;
  ulonglong *puStack_230;
  undefined1 *local_228;
  ulonglong *puStack_220;
  undefined1 *local_218;
  ulonglong *puStack_210;
  undefined1 *local_208;
  ulonglong *puStack_200;
  longlong *local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  longlong *local_1d8;
  int local_1d0;
  undefined4 local_1cc;
  longlong *local_1c8;
  int local_1c0;
  undefined4 local_1bc;
  longlong local_1b8;
  longlong local_1b0;
  longlong *local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong *local_188;
  int local_180;
  undefined4 local_17c;
  longlong *local_178;
  int local_170;
  undefined4 local_16c;
  longlong local_168;
  longlong local_160;
  longlong *local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong *local_138;
  int local_130;
  undefined4 local_12c;
  longlong *local_128;
  int local_120;
  undefined4 local_11c;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong *local_e8;
  int local_e0;
  undefined4 local_dc;
  longlong *local_d8;
  int local_d0;
  undefined4 local_cc;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong *local_98;
  int local_90;
  undefined4 local_8c;
  longlong *local_88;
  int local_80;
  undefined4 local_7c;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_498;
  lVar15 = (longlong)*(int *)(param_1 + 0x18);
  uVar17 = 0;
  if (0 < lVar15) {
    plVar18 = *(longlong **)(param_1 + 0x10);
    uVar11 = uVar17;
    do {
      lVar4 = *plVar18;
      plVar18 = plVar18 + 1;
      uVar19 = (uint)uVar11 + 1;
      if (*(char *)(lVar4 + 0x1a98) == '\0') {
        uVar19 = (uint)uVar11;
      }
      uVar11 = (ulonglong)uVar19;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    if ((0 < (int)uVar19) && ((*(byte *)(param_1 + 0x3c) & 0x40) != 0)) {
      local_450 = param_1;
      local_448 = FSceneRenderTargets::Get(param_2);
      local_430 = 0;
      local_2f0[0] = 0;
      local_2f0[1] = 0;
      FScopedGPUStatEvent::Begin(local_2f0,param_2,&DAT_146a9ef50,&local_430);
      FUN_141da7e50(param_1,param_2);
      if (0 < *(int *)(param_1 + 0x228)) {
        lVar15 = 0;
        uVar11 = uVar17;
        do {
          lVar4 = *(longlong *)(local_450 + 0x220);
          plVar13 = *(longlong **)(lVar4 + 0x10 + lVar15);
          plVar18 = plVar13 + 1;
          (**(code **)(*plVar13 + 0x10))();
          lVar4 = **(longlong **)(lVar4 + 0x18 + lVar15);
          AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
          local_428 = 0;
          local_420 = 0;
          AK::MemoryMgr::StartProfileThreadUsage
                    ((long)*(undefined8 *)(*(longlong *)(lVar4 + 0x5c8) + 0x30));
          uVar20 = local_450;
          uVar16 = 1;
          local_2d0 = local_448;
          local_2f0[2] = local_450;
          if (*(int *)(lVar4 + 0x30) == 0) {
            lVar1 = *(longlong *)(local_450 + 8);
            if (*(int *)(lVar1 + 0x17a0) != *(int *)(lVar1 + 0x17cc)) {
              iVar12 = *(int *)(*(longlong *)(lVar4 + 0x5c8) + 0x58);
              lVar3 = *(longlong *)(lVar1 + 0x17d8);
              if (*(longlong *)(lVar1 + 0x17d8) == 0) {
                lVar3 = lVar1 + 0x17d0;
              }
              iVar2 = *(int *)(lVar3 + ((longlong)*(int *)(lVar1 + 0x17e0) - 1U & (longlong)iVar12)
                                       * 4);
              if (iVar2 != -1) {
                do {
                  piVar6 = (int *)((longlong)iVar2 * 0x270 + *(longlong *)(lVar1 + 0x1798));
                  if (*piVar6 == iVar12) {
                    if (iVar2 != -1) goto LAB_141da86e5;
                    break;
                  }
                  iVar2 = piVar6[0x98];
                } while (iVar2 != -1);
              }
            }
            piVar6 = (int *)0x0;
LAB_141da86e5:
            uVar16 = 1;
            if ((char)piVar6[0x97] != '\0') {
              uVar16 = 0;
            }
          }
          local_2d8 = plVar18;
          FUN_141d8d400(local_2f0 + 2,param_2,uVar16);
          plStack_270 = local_2f0 + 2;
          local_278 = &LAB_141d90d40;
          local_470 = (longlong *)((ulonglong)local_470 & 0xffffffff00000000);
          local_478 = (longlong **)&local_248;
          local_248 = &LAB_141d90d40;
          plStack_240 = plStack_270;
          FUN_141da6420(lVar4,param_2,uVar20,*(undefined8 *)(lVar4 + 0x10));
          local_340 = *plVar18;
          plVar13 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          plVar18 = plVar13 + 1;
          if (*(longlong **)(param_2 + 0x38) < plVar18) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30);
            plVar13 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            plVar18 = plVar13 + 1;
          }
          *(longlong **)(param_2 + 0x30) = plVar18;
          *plVar13 = local_340;
          puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar5 = puVar7 + 5;
          if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30);
            puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar5 = puVar7 + 5;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar5;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar7;
          *(undefined8 **)(param_2 + 8) = puVar7 + 1;
          puVar7[1] = 0;
          *puVar7 = &PTR_LAB_143f59470;
          *(undefined4 *)(puVar7 + 2) = 1;
          puVar7[3] = plVar13;
          *(undefined4 *)(puVar7 + 4) = 0;
          *(undefined1 *)((longlong)puVar7 + 0x24) = 0;
          if (local_428 != 0) {
            FMemory::Free();
          }
          uVar19 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar19;
          lVar15 = lVar15 + 0x28;
          param_1 = local_450;
        } while ((int)uVar19 < *(int *)(local_450 + 0x228));
      }
      if (0 < *(int *)(param_1 + 0x250)) {
        lVar15 = *(longlong *)(param_1 + 0x240);
        local_448 = lVar15;
        AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
        uVar11 = local_450;
        uVar20 = uVar17;
        if (0 < *(int *)(param_1 + 0x250)) {
          do {
            lVar15 = *(longlong *)(uVar17 + *(longlong *)(uVar11 + 0x248));
            if ((*(byte *)(lVar15 + 0x560) & 8) == 0) {
              local_418 = uVar11;
              puVar14 = (ulonglong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              local_438 = *(ulonglong *)(*(longlong *)(*(longlong *)(uVar11 + 8) + 0x17e8) + 8);
              puVar8 = puVar14 + 1;
              local_410 = lVar15;
              if (*(ulonglong **)(param_2 + 0x38) < puVar8) {
                FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
                puVar14 = (ulonglong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar8 = puVar14 + 1;
              }
              *(ulonglong **)(param_2 + 0x30) = puVar8;
              *puVar14 = local_438;
              puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar5 = puVar7 + 5;
              if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
                FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
                puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar5 = puVar7 + 5;
              }
              *(undefined8 **)(param_2 + 0x30) = puVar5;
              *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
              local_470 = (longlong *)((ulonglong)local_470 & 0xffffffffffffff00);
              local_348 = 0x22;
              **(undefined8 **)(param_2 + 8) = puVar7;
              *(undefined8 **)(param_2 + 8) = puVar7 + 1;
              puVar7[1] = 0;
              *puVar7 = &PTR_LAB_143f59470;
              *(undefined4 *)(puVar7 + 2) = 1;
              puVar7[3] = puVar14;
              *(undefined4 *)(puVar7 + 4) = 1;
              *(undefined1 *)((longlong)puVar7 + 0x24) = 0;
              local_338 = 0;
              local_478 = (longlong **)CONCAT44(local_478._4_4_,0x22);
              FUN_141ad74f0(param_2,0,local_438,0);
              TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_338);
              local_468 = 1;
              local_470 = (longlong *)local_438;
              local_478 = (longlong **)0x0;
              FProjectedShadowInfo::ClearDepth(local_410,param_2,local_418,0);
              puStack_280 = &local_418;
              local_470 = (longlong *)((ulonglong)local_470 & 0xffffffff00000000);
              local_288 = &LAB_141d90d60;
              local_478 = (longlong **)&local_238;
              local_238 = &LAB_141d90d60;
              puStack_230 = puStack_280;
              FUN_141da6420(lVar15);
              *(uint *)(lVar15 + 0x560) = *(uint *)(lVar15 + 0x560) | 8;
            }
            uVar19 = (int)uVar20 + 1;
            uVar17 = uVar17 + 8;
            param_1 = local_450;
            lVar15 = local_448;
            uVar20 = (ulonglong)uVar19;
          } while ((int)uVar19 < *(int *)(uVar11 + 0x250));
        }
        local_330 = *(undefined8 *)(lVar15 + 8);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar7 + 1;
        if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
          puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar5 = puVar7 + 1;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar5;
        *puVar7 = local_330;
        puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar9 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
          puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar5 = puVar9 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar5;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar9;
        *(undefined8 **)(param_2 + 8) = puVar9 + 1;
        puVar9[1] = 0;
        *puVar9 = &PTR_LAB_143f59470;
        *(undefined4 *)(puVar9 + 2) = 1;
        puVar9[3] = puVar7;
        *(undefined4 *)(puVar9 + 4) = 0;
        *(undefined1 *)((longlong)puVar9 + 0x24) = 0;
      }
      local_458 = 0;
      if (0 < *(int *)(param_1 + 0x260)) {
        local_440 = 0;
        do {
          plVar18 = (longlong *)(*(longlong *)(param_1 + 600) + local_440);
          (**(code **)(**(longlong **)*plVar18 + 0x10))();
          lVar15 = *(longlong *)*plVar18;
          local_b8 = *(longlong *)(lVar15 + 8);
          if (local_b8 != 0) {
            LOCK();
            *(int *)(local_b8 + 8) = *(int *)(local_b8 + 8) + 1;
            UNLOCK();
          }
          local_b0 = *(longlong *)(lVar15 + 0x10);
          if (local_b0 != 0) {
            LOCK();
            *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
            UNLOCK();
          }
          local_a8 = *(longlong *)(lVar15 + 0x18);
          if (local_a8 != 0) {
            LOCK();
            *(int *)(local_a8 + 8) = *(int *)(local_a8 + 8) + 1;
            UNLOCK();
          }
          local_98 = (longlong *)0x0;
          iVar12 = *(int *)(lVar15 + 0x30);
          plVar13 = *(longlong **)(lVar15 + 0x28);
          local_90 = iVar12;
          if (iVar12 == 0) {
            local_8c = 0;
          }
          else {
            TArray<TRefCountPtr<FRHIUnorderedAccessView>,TInlineAllocator<1,FDefaultAllocator>_>::
            ResizeForCopy(&local_a0,iVar12);
            if (plVar13 == (longlong *)0x0) {
              plVar13 = (longlong *)(lVar15 + 0x20);
            }
            plVar10 = &local_a0;
            if (local_98 != (longlong *)0x0) {
              plVar10 = local_98;
            }
            do {
              lVar4 = *plVar13;
              *plVar10 = lVar4;
              if (lVar4 != 0) {
                LOCK();
                *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
                UNLOCK();
              }
              plVar13 = plVar13 + 1;
              iVar12 = iVar12 + -1;
              plVar10 = plVar10 + 1;
            } while (iVar12 != 0);
          }
          local_88 = (longlong *)0x0;
          iVar12 = *(int *)(lVar15 + 0x40);
          plVar13 = *(longlong **)(lVar15 + 0x38);
          local_80 = iVar12;
          if (iVar12 == 0) {
            local_7c = 0;
          }
          else {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_88,iVar12);
            plVar10 = local_88;
            do {
              lVar4 = *plVar13;
              *plVar10 = lVar4;
              if (lVar4 != 0) {
                LOCK();
                *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
                UNLOCK();
              }
              plVar10 = plVar10 + 1;
              plVar13 = plVar13 + 1;
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
          local_78 = *(longlong *)(lVar15 + 0x48);
          if (local_78 != 0) {
            LOCK();
            *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
            UNLOCK();
          }
          local_70 = *(longlong *)(lVar15 + 0x50);
          if (local_70 != 0) {
            LOCK();
            *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
            UNLOCK();
          }
          lVar15 = *(longlong *)(*plVar18 + 8);
          local_108 = *(longlong *)(lVar15 + 8);
          if (local_108 != 0) {
            LOCK();
            *(int *)(local_108 + 8) = *(int *)(local_108 + 8) + 1;
            UNLOCK();
          }
          local_100 = *(longlong *)(lVar15 + 0x10);
          if (local_100 != 0) {
            LOCK();
            *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
            UNLOCK();
          }
          local_f8 = *(longlong *)(lVar15 + 0x18);
          if (local_f8 != 0) {
            LOCK();
            *(int *)(local_f8 + 8) = *(int *)(local_f8 + 8) + 1;
            UNLOCK();
          }
          local_e8 = (longlong *)0x0;
          iVar12 = *(int *)(lVar15 + 0x30);
          plVar13 = *(longlong **)(lVar15 + 0x28);
          local_e0 = iVar12;
          if (iVar12 == 0) {
            local_dc = 0;
          }
          else {
            TArray<TRefCountPtr<FRHIUnorderedAccessView>,TInlineAllocator<1,FDefaultAllocator>_>::
            ResizeForCopy(&local_f0,iVar12);
            if (plVar13 == (longlong *)0x0) {
              plVar13 = (longlong *)(lVar15 + 0x20);
            }
            plVar10 = &local_f0;
            if (local_e8 != (longlong *)0x0) {
              plVar10 = local_e8;
            }
            do {
              lVar4 = *plVar13;
              *plVar10 = lVar4;
              if (lVar4 != 0) {
                LOCK();
                *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
                UNLOCK();
              }
              plVar13 = plVar13 + 1;
              iVar12 = iVar12 + -1;
              plVar10 = plVar10 + 1;
            } while (iVar12 != 0);
          }
          local_d8 = (longlong *)0x0;
          iVar12 = *(int *)(lVar15 + 0x40);
          plVar13 = *(longlong **)(lVar15 + 0x38);
          local_d0 = iVar12;
          if (iVar12 == 0) {
            local_cc = 0;
          }
          else {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                      (&local_d8,iVar12,0);
            plVar10 = local_d8;
            do {
              lVar4 = *plVar13;
              *plVar10 = lVar4;
              if (lVar4 != 0) {
                LOCK();
                *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
                UNLOCK();
              }
              plVar10 = plVar10 + 1;
              plVar13 = plVar13 + 1;
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
          local_c8 = *(longlong *)(lVar15 + 0x48);
          if (local_c8 != 0) {
            LOCK();
            *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
            UNLOCK();
          }
          local_c0 = *(longlong *)(lVar15 + 0x50);
          if (local_c0 != 0) {
            LOCK();
            *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
            UNLOCK();
          }
          uVar17 = 0;
          local_460 = 0;
          local_298 = local_b8;
          local_468 = 1;
          local_470 = (undefined8 *)0x0;
          local_290 = local_108;
          local_478 = (longlong **)((ulonglong)local_478 & 0xffffffff00000000);
          FUN_141ad7ef0(param_2,2,&local_298,0);
          uVar11 = uVar17;
          if (0 < (int)plVar18[4]) {
            do {
              FUN_141ddc480(*(undefined8 *)(plVar18[3] + uVar17),param_2);
              uVar19 = (int)uVar11 + 1;
              uVar17 = uVar17 + 8;
              uVar11 = (ulonglong)uVar19;
            } while ((int)uVar19 < (int)plVar18[4]);
          }
          plVar13 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          local_328 = local_b8;
          plVar18 = plVar13 + 1;
          if (*(longlong **)(param_2 + 0x38) < plVar18) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
            plVar13 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            plVar18 = plVar13 + 1;
          }
          *(longlong **)(param_2 + 0x30) = plVar18;
          *plVar13 = local_328;
          puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar5 = puVar7 + 5;
          if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
            puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar5 = puVar7 + 5;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar5;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar7;
          *(undefined8 **)(param_2 + 8) = puVar7 + 1;
          puVar7[3] = plVar13;
          *puVar7 = &PTR_LAB_143f59470;
          *(undefined4 *)(puVar7 + 2) = 1;
          *(undefined4 *)(puVar7 + 4) = 0;
          *(undefined1 *)((longlong)puVar7 + 0x24) = 0;
          puVar7[1] = 0;
          plVar13 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          local_320 = local_108;
          plVar18 = plVar13 + 1;
          if (*(longlong **)(param_2 + 0x38) < plVar18) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
            plVar13 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            plVar18 = plVar13 + 1;
          }
          *(longlong **)(param_2 + 0x30) = plVar18;
          *plVar13 = local_320;
          puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar5 = puVar7 + 5;
          if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
            puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar5 = puVar7 + 5;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar5;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar7;
          *(undefined8 **)(param_2 + 8) = puVar7 + 1;
          *puVar7 = &PTR_LAB_143f59470;
          *(undefined4 *)(puVar7 + 2) = 1;
          puVar7[3] = plVar13;
          *(undefined4 *)(puVar7 + 4) = 0;
          *(undefined1 *)((longlong)puVar7 + 0x24) = 0;
          puVar7[1] = 0;
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_c0);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_c8);
          FUN_141a82840(&local_d8);
          FUN_141a82770(&local_f0);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_f8);
          TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_100);
          TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_108);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_70);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_78);
          FUN_141a82840(&local_88);
          FUN_141a82770(&local_a0);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_a8);
          TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_b0);
          TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_b8);
          local_440 = local_440 + 0x28;
          local_458 = local_458 + 1;
          param_1 = local_450;
        } while (local_458 < *(int *)(local_450 + 0x260));
      }
      lVar15 = 0;
      iVar12 = 0;
      if (0 < *(int *)(param_1 + 200)) {
        do {
          lVar4 = *(longlong *)(lVar15 + 0x1ab0 + *(longlong *)(param_1 + 0xc0));
          if ((lVar4 != 0) &&
             (lVar4 = FSceneViewState::GetLightPropagationVolume
                                (lVar4,*(undefined4 *)(param_1 + 0x2a0)), lVar4 != 0)) {
            FLightPropagationVolume::SetRsmUniformBuffer(lVar4);
          }
          iVar12 = iVar12 + 1;
          lVar15 = lVar15 + 0x30d0;
        } while (iVar12 < *(int *)(param_1 + 200));
      }
      local_450 = local_450 & 0xffffffff00000000;
      if (0 < *(int *)(param_1 + 0x218)) {
        local_448 = 0;
        do {
          plVar18 = (longlong *)(*(longlong *)(param_1 + 0x210) + local_448 * 0x28);
          lVar15 = **(longlong **)(*(longlong *)(param_1 + 0x210) + local_448 * 0x28);
          local_1a8 = *(longlong **)(lVar15 + 8);
          if (local_1a8 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_1a8 + 1) = (int)local_1a8[1] + 1;
            UNLOCK();
          }
          local_1a0 = *(longlong *)(lVar15 + 0x10);
          if (local_1a0 != 0) {
            LOCK();
            *(int *)(local_1a0 + 8) = *(int *)(local_1a0 + 8) + 1;
            UNLOCK();
          }
          local_198 = *(longlong *)(lVar15 + 0x18);
          if (local_198 != 0) {
            LOCK();
            *(int *)(local_198 + 8) = *(int *)(local_198 + 8) + 1;
            UNLOCK();
          }
          local_188 = (longlong *)0x0;
          iVar12 = *(int *)(lVar15 + 0x30);
          plVar13 = *(longlong **)(lVar15 + 0x28);
          local_318 = plVar18;
          local_180 = iVar12;
          if (iVar12 == 0) {
            local_17c = 0;
          }
          else {
            TArray<TRefCountPtr<FRHIUnorderedAccessView>,TInlineAllocator<1,FDefaultAllocator>_>::
            ResizeForCopy(&local_190,iVar12);
            if (plVar13 == (longlong *)0x0) {
              plVar13 = (longlong *)(lVar15 + 0x20);
            }
            plVar10 = &local_190;
            if (local_188 != (longlong *)0x0) {
              plVar10 = local_188;
            }
            do {
              lVar4 = *plVar13;
              *plVar10 = lVar4;
              if (lVar4 != 0) {
                LOCK();
                *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
                UNLOCK();
              }
              plVar13 = plVar13 + 1;
              iVar12 = iVar12 + -1;
              plVar10 = plVar10 + 1;
            } while (iVar12 != 0);
          }
          local_178 = (longlong *)0x0;
          iVar12 = *(int *)(lVar15 + 0x40);
          plVar13 = *(longlong **)(lVar15 + 0x38);
          local_170 = iVar12;
          if (iVar12 == 0) {
            local_16c = 0;
          }
          else {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_178,iVar12)
            ;
            plVar10 = local_178;
            do {
              lVar4 = *plVar13;
              *plVar10 = lVar4;
              if (lVar4 != 0) {
                LOCK();
                *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
                UNLOCK();
              }
              plVar10 = plVar10 + 1;
              plVar13 = plVar13 + 1;
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
          local_168 = *(longlong *)(lVar15 + 0x48);
          if (local_168 != 0) {
            LOCK();
            *(int *)(local_168 + 8) = *(int *)(local_168 + 8) + 1;
            UNLOCK();
          }
          local_160 = *(longlong *)(lVar15 + 0x50);
          if (local_160 != 0) {
            LOCK();
            *(int *)(local_160 + 8) = *(int *)(local_160 + 8) + 1;
            UNLOCK();
          }
          lVar15 = *(longlong *)(*plVar18 + 8);
          local_1f8 = *(longlong **)(lVar15 + 8);
          if (local_1f8 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_1f8 + 1) = (int)local_1f8[1] + 1;
            UNLOCK();
          }
          local_1f0 = *(longlong *)(lVar15 + 0x10);
          if (local_1f0 != 0) {
            LOCK();
            *(int *)(local_1f0 + 8) = *(int *)(local_1f0 + 8) + 1;
            UNLOCK();
          }
          local_1e8 = *(longlong *)(lVar15 + 0x18);
          if (local_1e8 != 0) {
            LOCK();
            *(int *)(local_1e8 + 8) = *(int *)(local_1e8 + 8) + 1;
            UNLOCK();
          }
          local_1d8 = (longlong *)0x0;
          iVar12 = *(int *)(lVar15 + 0x30);
          plVar13 = *(longlong **)(lVar15 + 0x28);
          local_1d0 = iVar12;
          if (iVar12 == 0) {
            local_1cc = 0;
          }
          else {
            TArray<TRefCountPtr<FRHIUnorderedAccessView>,TInlineAllocator<1,FDefaultAllocator>_>::
            ResizeForCopy(&local_1e0,iVar12);
            if (plVar13 == (longlong *)0x0) {
              plVar13 = (longlong *)(lVar15 + 0x20);
            }
            plVar10 = &local_1e0;
            if (local_1d8 != (longlong *)0x0) {
              plVar10 = local_1d8;
            }
            do {
              lVar4 = *plVar13;
              *plVar10 = lVar4;
              if (lVar4 != 0) {
                LOCK();
                *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
                UNLOCK();
              }
              plVar13 = plVar13 + 1;
              iVar12 = iVar12 + -1;
              plVar10 = plVar10 + 1;
            } while (iVar12 != 0);
          }
          local_1c8 = (longlong *)0x0;
          iVar12 = *(int *)(lVar15 + 0x40);
          plVar13 = *(longlong **)(lVar15 + 0x38);
          local_1c0 = iVar12;
          if (iVar12 == 0) {
            local_1bc = 0;
          }
          else {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_1c8,iVar12)
            ;
            plVar10 = local_1c8;
            do {
              lVar4 = *plVar13;
              *plVar10 = lVar4;
              if (lVar4 != 0) {
                LOCK();
                *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
                UNLOCK();
              }
              plVar10 = plVar10 + 1;
              plVar13 = plVar13 + 1;
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
          local_1b8 = *(longlong *)(lVar15 + 0x48);
          if (local_1b8 != 0) {
            LOCK();
            *(int *)(local_1b8 + 8) = *(int *)(local_1b8 + 8) + 1;
            UNLOCK();
          }
          local_1b0 = *(longlong *)(lVar15 + 0x50);
          if (local_1b0 != 0) {
            LOCK();
            *(int *)(local_1b0 + 8) = *(int *)(local_1b0 + 8) + 1;
            UNLOCK();
          }
          lVar15 = plVar18[2];
          local_158 = *(longlong **)(lVar15 + 8);
          if (local_158 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_158 + 1) = (int)local_158[1] + 1;
            UNLOCK();
          }
          local_150 = *(longlong *)(lVar15 + 0x10);
          if (local_150 != 0) {
            LOCK();
            *(int *)(local_150 + 8) = *(int *)(local_150 + 8) + 1;
            UNLOCK();
          }
          local_148 = *(longlong *)(lVar15 + 0x18);
          if (local_148 != 0) {
            LOCK();
            *(int *)(local_148 + 8) = *(int *)(local_148 + 8) + 1;
            UNLOCK();
          }
          local_138 = (longlong *)0x0;
          iVar12 = *(int *)(lVar15 + 0x30);
          plVar13 = *(longlong **)(lVar15 + 0x28);
          local_130 = iVar12;
          if (iVar12 == 0) {
            local_12c = 0;
          }
          else {
            TArray<TRefCountPtr<FRHIUnorderedAccessView>,TInlineAllocator<1,FDefaultAllocator>_>::
            ResizeForCopy(&local_140,iVar12);
            if (plVar13 == (longlong *)0x0) {
              plVar13 = (longlong *)(lVar15 + 0x20);
            }
            plVar10 = &local_140;
            if (local_138 != (longlong *)0x0) {
              plVar10 = local_138;
            }
            do {
              lVar4 = *plVar13;
              *plVar10 = lVar4;
              if (lVar4 != 0) {
                LOCK();
                *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
                UNLOCK();
              }
              plVar13 = plVar13 + 1;
              iVar12 = iVar12 + -1;
              plVar10 = plVar10 + 1;
            } while (iVar12 != 0);
          }
          local_128 = (longlong *)0x0;
          iVar12 = *(int *)(lVar15 + 0x40);
          plVar13 = *(longlong **)(lVar15 + 0x38);
          local_120 = iVar12;
          if (iVar12 == 0) {
            local_11c = 0;
          }
          else {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_128,iVar12)
            ;
            plVar10 = local_128;
            do {
              lVar4 = *plVar13;
              *plVar10 = lVar4;
              if (lVar4 != 0) {
                LOCK();
                *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
                UNLOCK();
              }
              plVar10 = plVar10 + 1;
              plVar13 = plVar13 + 1;
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
          local_118 = *(longlong *)(lVar15 + 0x48);
          if (local_118 != 0) {
            LOCK();
            *(int *)(local_118 + 8) = *(int *)(local_118 + 8) + 1;
            UNLOCK();
          }
          local_110 = *(longlong *)(lVar15 + 0x50);
          if (local_110 != 0) {
            LOCK();
            *(int *)(local_110 + 8) = *(int *)(local_110 + 8) + 1;
            UNLOCK();
          }
          (**(code **)(*(longlong *)plVar18[2] + 0x10))();
          local_458 = 0;
          if (0 < (int)plVar18[4]) {
            local_440 = 0;
            do {
              lVar15 = *(longlong *)(local_440 + plVar18[3]);
              lVar4 = FSceneViewState::GetLightPropagationVolume
                                (*(undefined8 *)(*(longlong *)(lVar15 + 0x38) + 0x18),
                                 *(undefined4 *)(param_1 + 0x2a0),0);
              local_360 = &local_1a8;
              puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              local_358 = &local_1f8;
              local_350 = &local_158;
              local_310 = local_1a8;
              local_308 = local_1f8;
              local_68 = *(undefined8 *)(*(longlong *)(lVar4 + 0x130) + 8);
              local_60 = *(undefined8 *)(*(longlong *)(lVar4 + 0x128) + 0x18);
              local_58 = *(undefined8 *)(*(longlong *)(lVar4 + 0x88) + 8);
              local_50 = *(undefined8 *)(*(longlong *)(lVar4 + 0x80) + 0x18);
              puVar5 = puVar7 + 4;
              local_378 = param_1;
              local_370 = lVar4;
              local_368 = lVar15;
              if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
                FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x28);
                puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar5 = puVar7 + 4;
              }
              *(undefined8 **)(param_2 + 0x30) = puVar5;
              *puVar7 = local_68;
              puVar7[1] = local_60;
              puVar7[2] = local_58;
              puVar7[3] = local_50;
              puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar5 = puVar9 + 6;
              if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
                FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
                puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar5 = puVar9 + 6;
              }
              *(undefined8 **)(param_2 + 0x30) = puVar5;
              *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
              local_460 = 0;
              local_468 = 0;
              **(undefined8 **)(param_2 + 8) = puVar9;
              *(undefined8 **)(param_2 + 8) = puVar9 + 1;
              puVar9[1] = 0;
              *puVar9 = &PTR_LAB_144d91e60;
              local_470 = &local_68;
              *(undefined4 *)(puVar9 + 2) = 4;
              puVar9[3] = puVar7;
              *(undefined4 *)(puVar9 + 4) = 2;
              *(undefined4 *)((longlong)puVar9 + 0x24) = 2;
              puVar9[5] = 0;
              local_478 = (longlong **)CONCAT44(local_478._4_4_,4);
              FUN_141ad7ef0(param_2,2,&local_310,*local_350);
              local_468 = 1;
              local_470 = *local_350;
              local_478 = &local_310;
              FProjectedShadowInfo::ClearDepth(local_368,param_2,local_378,2);
              puStack_250 = &local_378;
              local_478 = (longlong **)&local_228;
              local_258 = &LAB_141d90d50;
              local_470 = (longlong *)((ulonglong)local_470 & 0xffffffff00000000);
              local_228 = &LAB_141d90d50;
              puStack_220 = puStack_250;
              FUN_141da6420(lVar15,param_2,param_1,*(undefined8 *)(lVar15 + 0x10));
              puStack_260 = &local_378;
              local_268 = &LAB_141d90d50;
              if ((*(int *)(lVar15 + 0x650) != 0) || (*(int *)(lVar15 + 0x640) != 0)) {
                local_478 = (longlong **)&local_218;
                local_470 = (longlong *)CONCAT44(local_470._4_4_,1);
                local_218 = &LAB_141d90d50;
                puStack_210 = puStack_260;
                FUN_141da6420(lVar15,param_2,param_1,*(undefined8 *)(lVar15 + 0x10));
              }
              puStack_2c0 = &local_378;
              local_2c8 = &LAB_141d90d50;
              if ((*(int *)(lVar15 + 0x670) != 0) || (*(int *)(lVar15 + 0x660) != 0)) {
                local_478 = (longlong **)&local_208;
                local_470 = (longlong *)CONCAT44(local_470._4_4_,2);
                local_208 = &LAB_141d90d50;
                puStack_200 = puStack_2c0;
                FUN_141da6420(lVar15,param_2,param_1,*(undefined8 *)(lVar15 + 0x10));
              }
              lVar15 = local_150;
              plVar18 = local_158;
              puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              local_3d8 = 0xffffffff00000000;
              uStack_3d0 = 0xffffffffffffffff;
              puVar5 = puVar7 + 10;
              local_3c8 = 0xffffffffffffffff;
              uStack_3c0 = 0xffffffffffffffff;
              local_3b8 = 0xffffffff;
              uStack_3b0 = 0;
              if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
                FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x58);
                puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar5 = puVar7 + 10;
              }
              *(undefined8 **)(param_2 + 0x30) = puVar5;
              *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
              **(undefined8 **)(param_2 + 8) = puVar7;
              *(undefined8 **)(param_2 + 8) = puVar7 + 1;
              puVar7[1] = 0;
              *puVar7 = &PTR_LAB_143f489f0;
              *(undefined4 *)(puVar7 + 2) = (undefined4)local_3d8;
              *(undefined4 *)((longlong)puVar7 + 0x14) = local_3d8._4_4_;
              *(undefined4 *)(puVar7 + 3) = (undefined4)uStack_3d0;
              *(undefined4 *)((longlong)puVar7 + 0x1c) = uStack_3d0._4_4_;
              *(undefined4 *)(puVar7 + 4) = (undefined4)local_3c8;
              *(undefined4 *)((longlong)puVar7 + 0x24) = local_3c8._4_4_;
              *(undefined4 *)(puVar7 + 5) = (undefined4)uStack_3c0;
              *(undefined4 *)((longlong)puVar7 + 0x2c) = uStack_3c0._4_4_;
              *(undefined4 *)(puVar7 + 6) = (undefined4)local_3b8;
              *(undefined4 *)((longlong)puVar7 + 0x34) = local_3b8._4_4_;
              *(undefined4 *)(puVar7 + 7) = (undefined4)uStack_3b0;
              *(undefined4 *)((longlong)puVar7 + 0x3c) = uStack_3b0._4_4_;
              puVar7[8] = plVar18;
              puVar7[9] = lVar15;
              lVar15 = (**(code **)(*plVar18 + 8))(plVar18);
              if ((lVar15 == 0) &&
                 (lVar15 = (**(code **)(*(longlong *)puVar7[8] + 0x18))(), lVar15 == 0)) {
                (**(code **)(*(longlong *)puVar7[8] + 0x20))();
              }
              lVar15 = (**(code **)(*(longlong *)puVar7[9] + 8))();
              if ((lVar15 == 0) &&
                 (lVar15 = (**(code **)(*(longlong *)puVar7[9] + 0x18))(), lVar15 == 0)) {
                (**(code **)(*(longlong *)puVar7[9] + 0x20))();
              }
              lVar15 = local_1a0;
              plVar18 = local_1a8;
              puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              local_408 = 0xffffffff00000000;
              uStack_400 = 0xffffffffffffffff;
              puVar5 = puVar7 + 10;
              local_3f8 = 0xffffffffffffffff;
              uStack_3f0 = 0xffffffffffffffff;
              local_3e8 = 0xffffffff;
              uStack_3e0 = 0;
              if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
                FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x58);
                puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar5 = puVar7 + 10;
              }
              *(undefined8 **)(param_2 + 0x30) = puVar5;
              *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
              **(undefined8 **)(param_2 + 8) = puVar7;
              *(undefined8 **)(param_2 + 8) = puVar7 + 1;
              puVar7[1] = 0;
              *puVar7 = &PTR_LAB_143f489f0;
              *(undefined4 *)(puVar7 + 2) = (undefined4)local_408;
              *(undefined4 *)((longlong)puVar7 + 0x14) = local_408._4_4_;
              *(undefined4 *)(puVar7 + 3) = (undefined4)uStack_400;
              *(undefined4 *)((longlong)puVar7 + 0x1c) = uStack_400._4_4_;
              *(undefined4 *)(puVar7 + 4) = (undefined4)local_3f8;
              *(undefined4 *)((longlong)puVar7 + 0x24) = local_3f8._4_4_;
              *(undefined4 *)(puVar7 + 5) = (undefined4)uStack_3f0;
              *(undefined4 *)((longlong)puVar7 + 0x2c) = uStack_3f0._4_4_;
              *(undefined4 *)(puVar7 + 6) = (undefined4)local_3e8;
              *(undefined4 *)((longlong)puVar7 + 0x34) = local_3e8._4_4_;
              *(undefined4 *)(puVar7 + 7) = (undefined4)uStack_3e0;
              *(undefined4 *)((longlong)puVar7 + 0x3c) = uStack_3e0._4_4_;
              puVar7[8] = plVar18;
              puVar7[9] = lVar15;
              lVar15 = (**(code **)(*plVar18 + 8))(plVar18);
              if ((lVar15 == 0) &&
                 (lVar15 = (**(code **)(*(longlong *)puVar7[8] + 0x18))(), lVar15 == 0)) {
                (**(code **)(*(longlong *)puVar7[8] + 0x20))();
              }
              lVar15 = (**(code **)(*(longlong *)puVar7[9] + 8))();
              if ((lVar15 == 0) &&
                 (lVar15 = (**(code **)(*(longlong *)puVar7[9] + 0x18))(), lVar15 == 0)) {
                (**(code **)(*(longlong *)puVar7[9] + 0x20))();
              }
              lVar15 = local_1f0;
              plVar18 = local_1f8;
              puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              local_3a8 = 0xffffffff00000000;
              uStack_3a0 = 0xffffffffffffffff;
              puVar5 = puVar7 + 10;
              local_398 = 0xffffffffffffffff;
              uStack_390 = 0xffffffffffffffff;
              local_388 = 0xffffffff;
              uStack_380 = 0;
              if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
                FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x58);
                puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar5 = puVar7 + 10;
              }
              *(undefined8 **)(param_2 + 0x30) = puVar5;
              *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
              **(undefined8 **)(param_2 + 8) = puVar7;
              *(undefined8 **)(param_2 + 8) = puVar7 + 1;
              puVar7[1] = 0;
              *puVar7 = &PTR_LAB_143f489f0;
              *(undefined4 *)(puVar7 + 2) = (undefined4)local_3a8;
              *(undefined4 *)((longlong)puVar7 + 0x14) = local_3a8._4_4_;
              *(undefined4 *)(puVar7 + 3) = (undefined4)uStack_3a0;
              *(undefined4 *)((longlong)puVar7 + 0x1c) = uStack_3a0._4_4_;
              *(undefined4 *)(puVar7 + 4) = (undefined4)local_398;
              *(undefined4 *)((longlong)puVar7 + 0x24) = local_398._4_4_;
              *(undefined4 *)(puVar7 + 5) = (undefined4)uStack_390;
              *(undefined4 *)((longlong)puVar7 + 0x2c) = uStack_390._4_4_;
              *(undefined4 *)(puVar7 + 6) = (undefined4)local_388;
              *(undefined4 *)((longlong)puVar7 + 0x34) = local_388._4_4_;
              *(undefined4 *)(puVar7 + 7) = (undefined4)uStack_380;
              *(undefined4 *)((longlong)puVar7 + 0x3c) = uStack_380._4_4_;
              puVar7[8] = plVar18;
              puVar7[9] = lVar15;
              lVar15 = (**(code **)(*plVar18 + 8))(plVar18);
              if ((lVar15 == 0) &&
                 (lVar15 = (**(code **)(*(longlong *)puVar7[8] + 0x18))(), lVar15 == 0)) {
                (**(code **)(*(longlong *)puVar7[8] + 0x20))();
              }
              lVar15 = (**(code **)(*(longlong *)puVar7[9] + 8))();
              if ((lVar15 == 0) &&
                 (lVar15 = (**(code **)(*(longlong *)puVar7[9] + 0x18))(), lVar15 == 0)) {
                (**(code **)(*(longlong *)puVar7[9] + 0x20))();
              }
              puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              local_300 = *(undefined8 *)(*(longlong *)(lVar4 + 0x130) + 8);
              local_2f8 = *(undefined8 *)(*(longlong *)(lVar4 + 0x128) + 0x18);
              puVar5 = puVar7 + 2;
              if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
                FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x18);
                puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar5 = puVar7 + 2;
              }
              *(undefined8 **)(param_2 + 0x30) = puVar5;
              *puVar7 = local_300;
              puVar7[1] = local_2f8;
              puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar5 = puVar9 + 6;
              if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
                FMemStackBase::AllocateNewChunk(param_2 + 0x30);
                puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar5 = puVar9 + 6;
              }
              *(undefined8 **)(param_2 + 0x30) = puVar5;
              *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
              **(undefined8 **)(param_2 + 8) = puVar9;
              *(undefined8 **)(param_2 + 8) = puVar9 + 1;
              puVar9[1] = 0;
              *puVar9 = &PTR_LAB_144d91e60;
              local_460 = 0;
              *(undefined4 *)(puVar9 + 4) = 0;
              puVar9[5] = 0;
              *(undefined4 *)(puVar9 + 2) = 2;
              puVar9[3] = puVar7;
              *(undefined4 *)((longlong)puVar9 + 0x24) = 2;
              local_468 = 0;
              local_2a8 = 0;
              local_2a0 = 0;
              local_2b8 = 0;
              local_2b0 = 0;
              local_470 = &local_2b8;
              local_478 = (longlong **)CONCAT44(local_478._4_4_,2);
              FUN_141ad7ef0(param_2,2);
              local_440 = local_440 + 8;
              local_458 = local_458 + 1;
              plVar18 = local_318;
            } while (local_458 < (int)local_318[4]);
          }
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_110);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_118);
          FUN_141a82840(&local_128);
          FUN_141a82770(&local_140);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_148);
          TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_150);
          TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_158);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1b0);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1b8);
          FUN_141a82840(&local_1c8);
          FUN_141a82770(&local_1e0);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1e8);
          TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_1f0);
          TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_1f8);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_160);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_168);
          FUN_141a82840(&local_178);
          FUN_141a82770(&local_190);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_198);
          TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_1a0);
          TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_1a8);
          iVar12 = (int)local_450 + 1;
          local_448 = local_448 + 1;
          local_450 = CONCAT44(local_450._4_4_,iVar12);
        } while (iVar12 < *(int *)(param_1 + 0x218));
      }
      if (local_2f0[0] != 0) {
        FScopedGPUStatEvent::End(local_2f0);
      }
    }
  }
  return;
}



// FUNCTION 141da9e80 FUN_141da9e80 body=670 status=ok
// SIG undefined FUN_141da9e80(void)

undefined8
FUN_141da9e80(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined1 *param_5)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined8 local_res8;
  ulonglong in_stack_ffffffffffffffa8;
  uint in_stack_ffffffffffffffb0;
  longlong local_48 [2];
  
  local_res8 = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  FScopedGPUStatEvent::Begin(local_48,param_2,&DAT_146a9f630,&local_res8);
  in_stack_ffffffffffffffb0 = in_stack_ffffffffffffffb0 & 0xffffff00;
  lVar4 = (longlong)*(int *)(param_3 + 0x58) * 0x70 + param_1[0x39];
  FUN_141daa4a0(param_1,param_2,param_3,param_4,in_stack_ffffffffffffffa8 & 0xffffffffffffff00,
                in_stack_ffffffffffffffb0);
  iVar6 = 0;
  if (0 < *(int *)(lVar4 + 0x28)) {
    lVar7 = 0;
    do {
      lVar5 = *(longlong *)(lVar7 + *(longlong *)(lVar4 + 0x20));
      uVar2 = *(uint *)(lVar5 + 0x560);
      if (((((byte)uVar2 & 0x41) == 0x41) && ((uVar2 & 0x8200) == 0)) &&
         (((*(uint *)(*(longlong *)(param_3 + 0x30) + 0x180) >> 3 & 1) == 0 ||
          ((((uVar2 & 0x40) != 0 && (-1 < *(int *)(lVar5 + 0x524))) && ((uVar2 & 0x10) != 0)))))) {
        *param_5 = 1;
        lVar1 = *(longlong *)(lVar5 + 0x38);
        iVar3 = (int)param_1[0x19];
        if (lVar1 == 0) {
          uVar2 = 0;
          if (0 < iVar3) {
            do {
              in_stack_ffffffffffffffb0 = uVar2;
              (**(code **)(*param_1 + 0x18))
                        (param_1,param_2,param_3,lVar5,(longlong)(int)uVar2 * 0x30d0 + param_1[0x18]
                         ,uVar2);
              uVar2 = uVar2 + 1;
            } while ((int)uVar2 < (int)param_1[0x19]);
          }
        }
        else {
          uVar2 = 0;
          in_stack_ffffffffffffffb0 = 0xffffffff;
          if (0 < iVar3) {
            do {
              in_stack_ffffffffffffffb0 = uVar2;
              if (lVar1 == (longlong)(int)uVar2 * 0x30d0 + param_1[0x18]) break;
              uVar2 = uVar2 + 1;
              in_stack_ffffffffffffffb0 = 0xffffffff;
            } while ((int)uVar2 < iVar3);
          }
          (**(code **)(*param_1 + 0x18))
                    (param_1,param_2,param_3,lVar5,lVar1,in_stack_ffffffffffffffb0);
        }
        *(uint *)(lVar5 + 0x560) = *(uint *)(lVar5 + 0x560) | 0x8000;
      }
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 8;
    } while (iVar6 < *(int *)(lVar4 + 0x28));
  }
  FUN_141ad03e0(param_1,param_2,param_3,param_4,lVar4 + 0x30,in_stack_ffffffffffffffb0 & 0xffffff00)
  ;
  iVar6 = 0;
  if (0 < (int)param_1[0x19]) {
    do {
      iVar3 = 0;
      lVar7 = (longlong)iVar6 * 0x30d0 + param_1[0x18];
      if (0 < *(int *)(lVar4 + 0x28)) {
        lVar5 = 0;
        do {
          if (((byte)*(undefined4 *)(*(longlong *)(lVar5 + *(longlong *)(lVar4 + 0x20)) + 0x560) &
              0x41) == 0x41) {
            FUN_141b5c900(lVar7 + 0x3018,lVar7,param_2);
          }
          iVar3 = iVar3 + 1;
          lVar5 = lVar5 + 8;
        } while (iVar3 < *(int *)(lVar4 + 0x28));
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)param_1[0x19]);
  }
  if (local_48[0] != 0) {
    FScopedGPUStatEvent::End(local_48);
  }
  return 1;
}



// FUNCTION 141daa120 FUN_141daa120 body=894 status=ok
// SIG undefined FUN_141daa120(void)

undefined8
FUN_141daa120(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,longlong param_5
             ,undefined1 param_6,char param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 uVar13;
  longlong local_90;
  ulonglong uVar12;
  
  uVar5 = FSceneRenderTargets::Get(param_2);
  if (param_7 == '\0') {
    FUN_141cde450(uVar5,param_2);
  }
  else {
    FUN_141cdeb70();
  }
  uVar10 = 0;
  if (0 < *(int *)(param_1 + 200)) {
    local_90 = 0;
    uVar12 = uVar10;
    do {
      lVar9 = *(longlong *)(param_1 + 0xc0) + uVar10;
      if (lVar9 == *(longlong *)(param_5 + 0x38)) {
        if (((*(uint *)(param_5 + 0x560) & 0x10000) == 0) &&
           ((*(uint *)(param_3 + 0x90) >> 1 & 1) == 0)) {
          uVar13 = 0;
        }
        else {
          uVar13 = 0x3f600000;
        }
        uVar1 = *(undefined4 *)(lVar9 + 0x1aac);
        uVar2 = *(undefined4 *)(lVar9 + 0x1aa8);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        uVar3 = *(undefined4 *)(lVar9 + 0x1aa4);
        uVar4 = *(undefined4 *)(lVar9 + 0x1aa0);
        puVar6 = puVar7 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
          puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar6 = puVar7 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar6;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar7;
        *(undefined8 **)(param_2 + 8) = puVar7 + 1;
        puVar7[1] = 0;
        *puVar7 = &PTR_LAB_143f59420;
        *(undefined4 *)(puVar7 + 2) = uVar4;
        *(undefined4 *)((longlong)puVar7 + 0x14) = uVar3;
        *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar2;
        *(undefined4 *)(puVar7 + 4) = uVar1;
        *(undefined4 *)(puVar7 + 3) = uVar13;
        *(undefined4 *)((longlong)puVar7 + 0x24) = 0x3f800000;
        (**(code **)(**(longlong **)(param_3 + 0x30) + 0xe0))
                  (*(longlong **)(param_3 + 0x30),param_2,lVar9,lVar9 + 0x1aa0);
        uVar11 = *(uint *)(param_5 + 0x560);
        if ((uVar11 & 2) == 0) {
          if ((uVar11 >> 9 & 1) == 0) {
            if ((uVar11 & 1) != 0) {
              lVar8 = *(longlong *)(param_5 + 0x550);
              if (*(longlong *)(param_5 + 0x550) == 0) {
                lVar8 = param_5 + 0x548;
              }
              if (0.00390625 < *(float *)(lVar8 + local_90)) {
                if ((uVar11 & 0x20) == 0) {
                  FUN_141da77e0(param_5,param_2,uVar12,lVar9,param_1,param_6,param_7);
                }
                else {
                  FUN_141da6e80();
                }
              }
            }
          }
          else {
            FUN_141b3b730(param_5,param_2,lVar9,param_4,param_6);
          }
          puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar6 = puVar7 + 5;
          if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
            puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar6 = puVar7 + 5;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar6;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar7;
          *(undefined8 **)(param_2 + 8) = puVar7 + 1;
          puVar7[1] = 0;
          *puVar7 = &PTR_LAB_143f59430;
          *(undefined1 *)(puVar7 + 2) = 0;
          *(undefined8 *)((longlong)puVar7 + 0x14) = 0;
          *(undefined8 *)((longlong)puVar7 + 0x1c) = 0;
        }
      }
      local_90 = local_90 + 4;
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      uVar10 = uVar10 + 0x30d0;
    } while ((int)uVar11 < *(int *)(param_1 + 200));
  }
  *(uint *)(param_5 + 0x560) = *(uint *)(param_5 + 0x560) | 2;
  return 1;
}



// FUNCTION 141daa4a0 FUN_141daa4a0 body=1129 status=ok
// SIG undefined FUN_141daa4a0(void)

undefined8
FUN_141daa4a0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,undefined1 param_5
             ,char param_6)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined4 uVar19;
  longlong local_98;
  longlong local_90;
  
  lVar18 = (longlong)*(int *)(param_3 + 0x58) * 0x70 + *(longlong *)(param_1 + 0x1c8);
  lVar8 = FSceneRenderTargets::Get(param_2);
  if (param_6 == '\0') {
    FUN_141ad74f0(param_2,*(undefined8 *)(param_4 + 8),
                  *(undefined8 *)(*(longlong *)(lVar8 + 0x60) + 8),0,0x21,1);
  }
  else {
    FUN_141cdeb70(lVar8,param_2,0,0x21,1);
  }
  puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar6 = *(undefined8 *)(*(longlong *)(lVar8 + 0x60) + 8);
  puVar10 = puVar11 + 4;
  if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk((longlong *)(param_2 + 0x30),0x28);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar11 + 4;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar10;
  uVar13 = 0;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar11;
  *(undefined8 **)(param_2 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  ppuVar9 = &PTR_LAB_144dc9c70;
  *puVar11 = &PTR_LAB_144dc9c70;
  *(undefined4 *)(puVar11 + 2) = 0x21;
  puVar11[3] = uVar6;
  if (0 < *(int *)(param_1 + 200)) {
    local_98 = 0;
    local_90 = 0;
    uVar16 = uVar13;
    do {
      lVar8 = *(longlong *)(param_1 + 0xc0) + local_90;
      if ((*(uint *)(param_3 + 0x90) >> 1 & 1) == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0x3f600000;
      }
      uVar2 = *(undefined4 *)(lVar8 + 0x1aa8);
      uVar3 = *(undefined4 *)(lVar8 + 0x1aac);
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      uVar4 = *(undefined4 *)(lVar8 + 0x1aa4);
      uVar5 = *(undefined4 *)(lVar8 + 0x1aa0);
      puVar10 = puVar11 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
        FMemStackBase::AllocateNewChunk((longlong *)(param_2 + 0x30),0x30);
        puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar10 = puVar11 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar10;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar11;
      *(undefined8 **)(param_2 + 8) = puVar11 + 1;
      puVar11[1] = 0;
      *puVar11 = &PTR_LAB_143f59420;
      *(undefined4 *)(puVar11 + 2) = uVar5;
      *(undefined4 *)((longlong)puVar11 + 0x14) = uVar4;
      *(undefined4 *)((longlong)puVar11 + 0x1c) = uVar2;
      *(undefined4 *)(puVar11 + 3) = uVar19;
      *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
      *(undefined4 *)(puVar11 + 4) = uVar3;
      (**(code **)(**(longlong **)(param_3 + 0x30) + 0xe0))
                (*(longlong **)(param_3 + 0x30),param_2,lVar8,lVar8 + 0x1aa0);
      uVar15 = uVar13;
      uVar17 = uVar13;
      if (0 < *(int *)(lVar18 + 0x28)) {
        do {
          lVar7 = *(longlong *)(uVar17 + *(longlong *)(lVar18 + 0x20));
          uVar14 = *(uint *)(lVar7 + 0x560);
          if ((uVar14 & 2) == 0) {
            if ((uVar14 >> 9 & 1) == 0) {
              if ((uVar14 & 1) != 0) {
                lVar12 = *(longlong *)(lVar7 + 0x550);
                if (*(longlong *)(lVar7 + 0x550) == 0) {
                  lVar12 = lVar7 + 0x548;
                }
                if (0.00390625 < *(float *)(lVar12 + local_98)) {
                  if ((uVar14 & 0x20) == 0) {
                    FUN_141da77e0(lVar7,param_2,uVar16,lVar8,param_1,param_5,param_6);
                  }
                  else {
                    FUN_141da6e80();
                  }
                }
              }
            }
            else {
              FUN_141b3b730(lVar7,param_2,lVar8,param_4,param_5);
            }
          }
          uVar14 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar14;
          uVar17 = uVar17 + 8;
        } while ((int)uVar14 < *(int *)(lVar18 + 0x28));
      }
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar11 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar10 = puVar11 + 5;
      }
      local_98 = local_98 + 4;
      uVar14 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar14;
      *(undefined8 **)(param_2 + 0x30) = puVar10;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar11;
      *(undefined8 **)(param_2 + 8) = puVar11 + 1;
      *(undefined1 *)(puVar11 + 2) = 0;
      *(undefined8 *)((longlong)puVar11 + 0x14) = 0;
      *(undefined8 *)((longlong)puVar11 + 0x1c) = 0;
      puVar11[1] = 0;
      ppuVar9 = &PTR_LAB_143f59430;
      *puVar11 = &PTR_LAB_143f59430;
      local_90 = local_90 + 0x30d0;
    } while ((int)uVar14 < *(int *)(param_1 + 200));
  }
  uVar16 = uVar13;
  if (0 < *(int *)(lVar18 + 0x28)) {
    do {
      ppuVar9 = *(undefined ***)(lVar18 + 0x20);
      uVar14 = (int)uVar16 + 1;
      puVar1 = (uint *)(*(longlong *)(uVar13 + (longlong)ppuVar9) + 0x560);
      *puVar1 = *puVar1 | 2;
      uVar13 = uVar13 + 8;
      uVar16 = (ulonglong)uVar14;
    } while ((int)uVar14 < *(int *)(lVar18 + 0x28));
  }
  return CONCAT71((int7)((ulonglong)ppuVar9 >> 8),1);
}



// FUNCTION 141daa910 FUN_141daa910 body=1784 status=ok
// SIG undefined FUN_141daa910(void)

void FUN_141daa910(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  longlong *plVar18;
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
  
  lVar5 = *(longlong *)(param_1 + 0x18);
  iVar15 = 0;
  if (0 < *(int *)(param_1 + 0x448)) {
    piVar14 = (int *)(param_1 + 0x44c);
    do {
      iVar3 = *piVar14;
      lVar11 = *(longlong *)(lVar5 + 0x1ad0);
      if (*(longlong *)(lVar5 + 0x1ad0) == 0) {
        lVar11 = lVar5 + 0x1ac0;
      }
      iVar8 = iVar3;
      if (iVar3 < 0) {
        iVar8 = iVar3 + 0x1f;
      }
      iVar15 = iVar15 + 1;
      puVar2 = (uint *)(lVar11 + (longlong)(iVar8 >> 5) * 4);
      piVar14 = piVar14 + 1;
      *puVar2 = *puVar2 & ~(1 << ((byte)iVar3 & 0x1f));
    } while (iVar15 < *(int *)(param_1 + 0x448));
  }
  *(ushort *)(lVar5 + 0x28d0) = *(ushort *)(lVar5 + 0x28d0) | *(ushort *)(param_1 + 0x6760);
  uVar9 = *(uint *)(lVar5 + 0x28cc);
  uVar9 = (((uint)*(byte *)(param_1 + 0x6762) << 9 | uVar9) ^ uVar9) & 0x200 ^ uVar9;
  *(uint *)(lVar5 + 0x28cc) = uVar9;
  uVar9 = uVar9 ^ (((uint)*(byte *)(param_1 + 0x6763) << 10 | uVar9) ^ uVar9) & 0x400;
  *(uint *)(lVar5 + 0x28cc) = uVar9;
  uVar9 = uVar9 ^ (((uint)*(byte *)(param_1 + 0x6764) << 0xb | uVar9) ^ uVar9) & 0x800;
  *(uint *)(lVar5 + 0x28cc) = uVar9;
  uVar9 = uVar9 ^ (((uint)*(byte *)(param_1 + 0x6765) << 0xc | uVar9) ^ uVar9) & 0x1000;
  *(uint *)(lVar5 + 0x28cc) = uVar9;
  *(uint *)(lVar5 + 0x28cc) =
       (((uint)*(byte *)(param_1 + 0x6766) << 0xd | uVar9) ^ uVar9) & 0x2000 ^ uVar9;
  iVar15 = *(int *)(param_1 + 0x4a20);
  iVar3 = *(int *)(lVar5 + 0x1c78);
  iVar8 = iVar3 + iVar15;
  *(int *)(lVar5 + 0x1c78) = iVar8;
  if (*(int *)(lVar5 + 0x1c7c) < iVar8) {
    FUN_140822430(lVar5 + 0x1c70,iVar3);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(*(longlong *)(lVar5 + 0x1c70) + (longlong)iVar3 * 8),
             (void *)(param_1 + 0x4a28),(longlong)iVar15 << 3);
  iVar15 = *(int *)(param_1 + 0x648);
  iVar3 = *(int *)(lVar5 + 0x1c68);
  iVar8 = iVar3 + iVar15;
  *(int *)(lVar5 + 0x1c68) = iVar8;
  if (*(int *)(lVar5 + 0x1c6c) < iVar8) {
    FUN_140822430(lVar5 + 0x1c60,iVar3);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(*(longlong *)(lVar5 + 0x1c60) + (longlong)iVar3 * 8),(void *)(param_1 + 0x650)
             ,(longlong)iVar15 << 3);
  FUN_141df9e50(lVar5 + 0x1d70,param_1 + 0xa50,*(undefined4 *)(param_1 + 0xa48));
  iVar15 = *(int *)(param_1 + 0x2a28);
  iVar3 = *(int *)(lVar5 + 0x1da0);
  iVar8 = iVar3 + iVar15;
  *(int *)(lVar5 + 0x1da0) = iVar8;
  if (*(int *)(lVar5 + 0x1da4) < iVar8) {
    FUN_140822430(lVar5 + 0x1d98,iVar3);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(*(longlong *)(lVar5 + 0x1d98) + (longlong)iVar3 * 8),
             (void *)(param_1 + 0x2a30),(longlong)iVar15 << 3);
  iVar15 = *(int *)(param_1 + 0x2e28);
  iVar3 = *(int *)(lVar5 + 0x1db0);
  iVar8 = iVar3 + iVar15;
  *(int *)(lVar5 + 0x1db0) = iVar8;
  if (*(int *)(lVar5 + 0x1db4) < iVar8) {
    FUN_141daba00(lVar5 + 0x1da8,iVar3);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar5 + 0x1da8)),
             (void *)(param_1 + 0x2e30),(longlong)iVar15 << 4);
  iVar15 = *(int *)(param_1 + 0x3620);
  iVar3 = *(int *)(lVar5 + 0x1dc0);
  iVar8 = iVar3 + iVar15;
  *(int *)(lVar5 + 0x1dc0) = iVar8;
  if (*(int *)(lVar5 + 0x1dc4) < iVar8) {
    FUN_140822430(lVar5 + 0x1db8,iVar3);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(*(longlong *)(lVar5 + 0x1db8) + (longlong)iVar3 * 8),
             (void *)(param_1 + 0x3628),(longlong)iVar15 << 3);
  iVar15 = *(int *)(param_1 + 0x3a20);
  iVar3 = *(int *)(lVar5 + 0x1dd0);
  iVar8 = iVar3 + iVar15;
  *(int *)(lVar5 + 0x1dd0) = iVar8;
  if (*(int *)(lVar5 + 0x1dd4) < iVar8) {
    FUN_140822430(lVar5 + 0x1dc8,iVar3);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(*(longlong *)(lVar5 + 0x1dc8) + (longlong)iVar3 * 8),
             (void *)(param_1 + 0x3a28),(longlong)iVar15 << 3);
  iVar15 = *(int *)(param_1 + 0x3e20);
  iVar3 = *(int *)(lVar5 + 0x1df0);
  iVar8 = iVar3 + iVar15;
  *(int *)(lVar5 + 0x1df0) = iVar8;
  if (*(int *)(lVar5 + 0x1df4) < iVar8) {
    FUN_140822430(lVar5 + 0x1de8,iVar3);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(*(longlong *)(lVar5 + 0x1de8) + (longlong)iVar3 * 8),
             (void *)(param_1 + 0x3e28),(longlong)iVar15 << 3);
  iVar15 = *(int *)(param_1 + 0x4620);
  iVar3 = *(int *)(lVar5 + 0x1c88);
  iVar8 = iVar3 + iVar15;
  *(int *)(lVar5 + 0x1c88) = iVar8;
  if (*(int *)(lVar5 + 0x1c8c) < iVar8) {
    FUN_140822430(lVar5 + 0x1c80,iVar3);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(*(longlong *)(lVar5 + 0x1c80) + (longlong)iVar3 * 8),
             (void *)(param_1 + 0x4628),(longlong)iVar15 << 3);
  iVar15 = *(int *)(param_1 + 20000);
  iVar3 = *(int *)(lVar5 + 0x1de0);
  iVar8 = iVar3 + iVar15;
  *(int *)(lVar5 + 0x1de0) = iVar8;
  if (*(int *)(lVar5 + 0x1de4) < iVar8) {
    FUN_140822430(lVar5 + 0x1dd8,iVar3);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(*(longlong *)(lVar5 + 0x1dd8) + (longlong)iVar3 * 8),
             (void *)(param_1 + 0x4e28),(longlong)iVar15 << 3);
  iVar15 = 0;
  if (0 < *(int *)(param_1 + 0x4220)) {
    plVar18 = (longlong *)(param_1 + 0x4228);
    do {
      lVar11 = *plVar18;
      uVar6 = *(undefined8 *)(param_1 + 8);
      if (*(char *)(lVar11 + 0xf9) != '\0') {
        FPrimitiveSceneInfo::UpdateUniformBuffer(lVar11,uVar6);
      }
      if (*(char *)(lVar11 + 0xf8) != '\0') {
        FPrimitiveSceneInfo::UpdateStaticMeshes(lVar11,uVar6);
      }
      iVar15 = iVar15 + 1;
      plVar18 = plVar18 + 1;
    } while (iVar15 < *(int *)(param_1 + 0x4220));
  }
  iVar15 = 0;
  if (0 < *(int *)(param_1 + 0x5f58)) {
    puVar13 = (undefined8 *)(param_1 + 0x5f60);
    do {
      FUN_141d72900(lVar5,*puVar13);
      iVar15 = iVar15 + 1;
      puVar13 = puVar13 + 2;
    } while (iVar15 < *(int *)(param_1 + 0x5f58));
  }
  iVar15 = 0;
  if (0 < *(int *)(param_1 + 0x5b5c)) {
    piVar14 = (int *)(param_1 + 0x5b60);
    do {
      iVar3 = *piVar14;
      iVar15 = iVar15 + 1;
      piVar1 = piVar14 + 1;
      piVar14 = piVar14 + 2;
      *(short *)(*(longlong *)(lVar5 + 0x1c20) + (longlong)iVar3 * 2) = (short)*piVar1;
    } while (iVar15 < *(int *)(param_1 + 0x5b5c));
  }
  uStack_84 = 1;
  lVar11 = param_1 + 0x5220;
  local_88 = 0;
  puVar2 = (uint *)(param_1 + 0x5a20);
  uVar9 = *(uint *)(param_1 + 0x5a38);
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar9 != 0) {
    puVar17 = *(uint **)(param_1 + 0x5a30);
    if (*(uint **)(param_1 + 0x5a30) == (uint *)0x0) {
      puVar17 = puVar2;
    }
    uVar4 = *puVar17;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar12 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar15 = local_88 + 1;
      bVar7 = (int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar15;
      if (bVar7) goto LAB_141daaeac;
      uVar4 = puVar17[lVar12 + 1];
    }
    uStack_84 = -uVar4 & uVar4;
    iVar15 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar15 = 0x20;
    }
    else {
      iVar15 = 0x1f - iVar15;
    }
    uStack_74 = (iStack_70 - iVar15) + 0x1f;
    if ((int)uVar9 < (int)uStack_74) {
LAB_141daaeac:
      uStack_74 = uVar9;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x5a38);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar16 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar2;
  local_40 = lVar11;
  puStack_30 = puVar2;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar9) {
    puVar17 = *(uint **)(param_1 + 0x5a30);
    if (*(uint **)(param_1 + 0x5a30) == (uint *)0x0) {
      puVar17 = puVar2;
    }
    uVar10 = puVar17[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar15 = (int)uVar4 >> 5;
    while (uVar10 == 0) {
      uVar16 = uVar16 + 0x20;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar15)
      goto LAB_141daaf82;
      uVar10 = puVar17[(longlong)iVar15 + 1];
      iVar15 = iVar15 + 1;
    }
    uVar10 = -uVar10 & uVar10;
    iVar15 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar10 == 0) {
      iVar15 = 0x20;
    }
    else {
      iVar15 = 0x1f - iVar15;
    }
    uStack_74 = (uVar16 - iVar15) + 0x1f;
    if ((int)uVar9 < (int)uStack_74) {
LAB_141daaf82:
      uStack_74 = uVar9;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar2))) {
    lVar12 = *(longlong *)(param_1 + 0x5a10);
    if (*(longlong *)(param_1 + 0x5a10) == 0) {
      lVar12 = lVar11;
    }
    *(undefined4 *)
     (*(longlong *)(lVar5 + 0x1c10) +
     (longlong)*(int *)(lVar12 + (longlong)(int)uStack_4c * 0x10) * 4) =
         *(undefined4 *)(lVar12 + 4 + (longlong)(int)uStack_4c * 0x10);
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 141dab010 FUN_141dab010 body=335 status=ok
// SIG undefined FUN_141dab010(void)

void FUN_141dab010(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar2 = (int)param_1[1];
  if (iVar2 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if (*(int *)((longlong)param_1 + 0xc) < param_2) {
      FUN_141dab650(param_1,iVar2);
    }
    iVar7 = param_2 + -1;
    lVar10 = (longlong)iVar7;
    if (iVar2 <= lVar10) {
      iVar3 = *(int *)((longlong)param_1 + 0x34);
      lVar9 = lVar10 * 0x70;
      lVar10 = (lVar10 - iVar2) + 1;
      do {
        if (iVar3 != 0) {
          *(int *)((longlong)(int)param_1[6] * 0x70 + *param_1) = iVar7;
        }
        *(undefined4 *)(lVar9 + *param_1) = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (undefined4)param_1[6];
        }
        *(undefined4 *)(lVar9 + 4 + *param_1) = uVar5;
        lVar9 = lVar9 + -0x70;
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = *(int *)((longlong)param_1 + 0x34);
        *(int *)(param_1 + 6) = iVar7;
        iVar7 = iVar7 + -1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    if (0 < param_2 - iVar2) {
      uVar8 = (ulonglong)(uint)(param_2 - iVar2);
      do {
        iVar2 = (int)param_1[5];
        *(int *)(param_1 + 5) = iVar2 + 1;
        if (*(int *)((longlong)param_1 + 0x2c) <= iVar2) {
          uVar4 = (int)(iVar2 + 0x20 + (iVar2 + 0x20 >> 0x1f & 0x1fU)) >> 5;
          if (uVar4 < 5) {
            iVar7 = 4;
          }
          else {
            iVar7 = (int)((ulonglong)((longlong)(int)uVar4 * 3) >> 3) + 0x10 + uVar4;
            if (iVar7 < (int)uVar4) {
              iVar7 = 0x7fffffff;
            }
          }
          *(int *)((longlong)param_1 + 0x2c) = iVar7 << 5;
          TBitArray<SceneRenderingBitArrayAllocator>::Realloc(param_1 + 2,iVar2);
        }
        plVar6 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar6 = param_1 + 2;
        }
        iVar7 = iVar2;
        if (iVar2 < 0) {
          iVar7 = iVar2 + 0x1f;
        }
        puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar7 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar2 & 0x1f));
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return;
}



// FUNCTION 141dab160 FUN_141dab160 body=161 status=ok
// SIG undefined FUN_141dab160(void)

void FUN_141dab160(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x7f0);
  if (param_3 < 0x80) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 4);
    pvVar1 = *(void **)((longlong)param_1 + 0x7f0);
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
        *(void **)((longlong)param_1 + 0x7f0) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 4);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x7f0) = uVar2;
  return;
}



// FUNCTION 141dab210 FUN_141dab210 body=64 status=ok
// SIG undefined FUN_141dab210(void)

void FUN_141dab210(longlong param_1,int param_2,int param_3)

{
  if (param_2 != param_3) {
    FUN_140848a70(param_1,0,param_2,8);
    *(int *)(param_1 + 0xc) = param_2;
    return;
  }
  *(int *)(param_1 + 0xc) = param_2;
  return;
}



// FUNCTION 141dab250 FUN_141dab250 body=251 status=ok
// SIG undefined FUN_141dab250(void)

void FUN_141dab250(ulonglong *param_1,int param_2,int param_3)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 local_res10 [8];
  undefined *local_38;
  undefined1 *puStack_30;
  
  if ((param_2 != param_3) && (param_2 != 0)) {
    puStack_30 = local_res10;
    iVar2 = param_2 * 8;
    local_38 = &DAT_14060d670;
    local_res10[0] = 0;
    lVar4 = FUN_1415d8310(&local_38,&DAT_146216a38);
    puVar1 = (ulonglong *)(lVar4 + 0x18);
    uVar7 = 8;
    uVar3 = uVar7;
    if (0xf < iVar2) {
      uVar3 = 0x10;
    }
    uVar8 = (ulonglong)uVar3;
    uVar6 = *(longlong *)(lVar4 + 0x18) + -1 + uVar8 & ~(uVar8 - 1);
    uVar5 = (longlong)iVar2 + uVar6;
    if (*(ulonglong *)(lVar4 + 0x20) < uVar5) {
      if (0xf < iVar2) {
        uVar7 = 0x10;
      }
      FMemStackBase::AllocateNewChunk(puVar1,uVar7 + iVar2);
      uVar6 = (*puVar1 - 1) + uVar8 & ~(uVar8 - 1);
      uVar5 = (longlong)iVar2 + uVar6;
    }
    *puVar1 = uVar5;
    *param_1 = uVar6;
    *(int *)((longlong)param_1 + 0xc) = param_2;
    return;
  }
  *(int *)((longlong)param_1 + 0xc) = param_2;
  return;
}



// FUNCTION 141dab350 FUN_141dab350 body=298 status=ok
// SIG undefined FUN_141dab350(void)

void FUN_141dab350(undefined8 *param_1,int param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  ulonglong uVar4;
  void *_Dst;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 local_res8 [8];
  undefined *local_38;
  undefined1 *puStack_30;
  
  uVar2 = *(uint *)(param_1 + 1);
  iVar6 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar2)) {
    iVar6 = uVar2 + 0x10 + (int)((ulonglong)((longlong)(int)uVar2 * 3) >> 3);
  }
  if (iVar6 < (int)uVar2) {
    iVar6 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar6;
  _Src = (void *)*param_1;
  if (iVar6 != 0) {
    puStack_30 = local_res8;
    local_38 = &DAT_14060d670;
    local_res8[0] = 0;
    lVar3 = FUN_1415d8310(&local_38,&DAT_146216a38);
    puVar1 = (ulonglong *)(lVar3 + 0x18);
    uVar5 = 8;
    uVar2 = uVar5;
    if (0xf < iVar6) {
      uVar2 = 0x10;
    }
    uVar7 = (ulonglong)uVar2;
    _Dst = (void *)(*(longlong *)(lVar3 + 0x18) + -1 + uVar7 & ~(uVar7 - 1));
    uVar4 = (longlong)_Dst + (longlong)iVar6;
    if (*(ulonglong *)(lVar3 + 0x20) < uVar4) {
      if (0xf < iVar6) {
        uVar5 = 0x10;
      }
      FMemStackBase::AllocateNewChunk(puVar1,uVar5 + iVar6);
      _Dst = (void *)((*puVar1 - 1) + uVar7 & ~(uVar7 - 1));
      uVar4 = (longlong)_Dst + (longlong)iVar6;
    }
    *puVar1 = uVar4;
    *param_1 = _Dst;
    if ((_Src != (void *)0x0) && (param_2 != 0)) {
      if (iVar6 <= param_2) {
        param_2 = iVar6;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)param_2);
    }
  }
  return;
}



// FUNCTION 141dab480 FUN_141dab480 body=311 status=ok
// SIG undefined FUN_141dab480(void)

void FUN_141dab480(undefined8 *param_1,int param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  ulonglong uVar4;
  void *_Dst;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 local_res8 [8];
  undefined *local_38;
  undefined1 *puStack_30;
  
  uVar2 = *(uint *)(param_1 + 1);
  iVar6 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar2)) {
    iVar6 = uVar2 + 0x10 + (int)((ulonglong)((longlong)(int)uVar2 * 3) >> 3);
  }
  if (iVar6 < (int)uVar2) {
    iVar6 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar6;
  _Src = (void *)*param_1;
  if (iVar6 != 0) {
    puStack_30 = local_res8;
    iVar8 = iVar6 * 4;
    local_38 = &DAT_14060d670;
    local_res8[0] = 0;
    lVar3 = FUN_1415d8310(&local_38,&DAT_146216a38);
    uVar5 = 8;
    uVar2 = uVar5;
    if (0xf < iVar8) {
      uVar2 = 0x10;
    }
    uVar7 = (ulonglong)uVar2;
    puVar1 = (ulonglong *)(lVar3 + 0x18);
    _Dst = (void *)(*(longlong *)(lVar3 + 0x18) + -1 + uVar7 & ~(uVar7 - 1));
    uVar4 = (longlong)iVar8 + (longlong)_Dst;
    if (*(ulonglong *)(lVar3 + 0x20) < uVar4) {
      if (0xf < iVar8) {
        uVar5 = 0x10;
      }
      FMemStackBase::AllocateNewChunk(puVar1,uVar5 + iVar8);
      _Dst = (void *)((*puVar1 - 1) + uVar7 & ~(uVar7 - 1));
      uVar4 = (longlong)iVar8 + (longlong)_Dst;
    }
    *puVar1 = uVar4;
    *param_1 = _Dst;
    if ((_Src != (void *)0x0) && (param_2 != 0)) {
      if (iVar6 <= param_2) {
        param_2 = iVar6;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)(param_2 << 2));
    }
  }
  return;
}



// FUNCTION 141dab5c0 FUN_141dab5c0 body=137 status=ok
// SIG undefined FUN_141dab5c0(void)

void FUN_141dab5c0(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x7f8);
  if (uVar1 < 0x80) {
    iVar2 = 0x7f;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x7fc) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 << 4,0);
    iVar2 = (int)(uVar3 >> 4);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x7fc) = iVar2;
  FUN_141dab160(param_1,param_2,iVar2,0x10);
  return;
}



// FUNCTION 141dab650 FUN_141dab650 body=307 status=ok
// SIG undefined FUN_141dab650(void)

void FUN_141dab650(undefined8 *param_1,int param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  ulonglong uVar4;
  void *_Dst;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 local_res8 [8];
  undefined *local_38;
  undefined1 *puStack_30;
  
  uVar2 = *(uint *)(param_1 + 1);
  iVar6 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar2)) {
    iVar6 = uVar2 + 0x10 + (int)((ulonglong)((longlong)(int)uVar2 * 3) >> 3);
  }
  if (iVar6 < (int)uVar2) {
    iVar6 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar6;
  _Src = (void *)*param_1;
  if (iVar6 != 0) {
    puStack_30 = local_res8;
    local_38 = &DAT_14060d670;
    local_res8[0] = 0;
    iVar8 = iVar6 * 0x70;
    lVar3 = FUN_1415d8310(&local_38,&DAT_146216a38);
    uVar5 = 8;
    uVar2 = uVar5;
    if (0xf < iVar8) {
      uVar2 = 0x10;
    }
    uVar7 = (ulonglong)uVar2;
    puVar1 = (ulonglong *)(lVar3 + 0x18);
    _Dst = (void *)(*(longlong *)(lVar3 + 0x18) + -1 + uVar7 & ~(uVar7 - 1));
    uVar4 = (longlong)iVar8 + (longlong)_Dst;
    if (*(ulonglong *)(lVar3 + 0x20) < uVar4) {
      if (0xf < iVar8) {
        uVar5 = 0x10;
      }
      FMemStackBase::AllocateNewChunk(puVar1,uVar5 + iVar8);
      _Dst = (void *)((*puVar1 - 1) + uVar7 & ~(uVar7 - 1));
      uVar4 = (longlong)iVar8 + (longlong)_Dst;
    }
    *puVar1 = uVar4;
    *param_1 = _Dst;
    if ((_Src != (void *)0x0) && (param_2 != 0)) {
      if (iVar6 <= param_2) {
        param_2 = iVar6;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)(param_2 * 0x70));
    }
  }
  return;
}



// FUNCTION 141dab790 FUN_141dab790 body=307 status=ok
// SIG undefined FUN_141dab790(void)

void FUN_141dab790(undefined8 *param_1,int param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  ulonglong uVar4;
  void *_Dst;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 local_res8 [8];
  undefined *local_38;
  undefined1 *puStack_30;
  
  uVar2 = *(uint *)(param_1 + 1);
  iVar6 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar2)) {
    iVar6 = uVar2 + 0x10 + (int)((ulonglong)((longlong)(int)uVar2 * 3) >> 3);
  }
  if (iVar6 < (int)uVar2) {
    iVar6 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar6;
  _Src = (void *)*param_1;
  if (iVar6 != 0) {
    puStack_30 = local_res8;
    local_38 = &DAT_14060d670;
    local_res8[0] = 0;
    iVar8 = iVar6 * 0x78;
    lVar3 = FUN_1415d8310(&local_38,&DAT_146216a38);
    uVar5 = 8;
    uVar2 = uVar5;
    if (0xf < iVar8) {
      uVar2 = 0x10;
    }
    uVar7 = (ulonglong)uVar2;
    puVar1 = (ulonglong *)(lVar3 + 0x18);
    _Dst = (void *)(*(longlong *)(lVar3 + 0x18) + -1 + uVar7 & ~(uVar7 - 1));
    uVar4 = (longlong)iVar8 + (longlong)_Dst;
    if (*(ulonglong *)(lVar3 + 0x20) < uVar4) {
      if (0xf < iVar8) {
        uVar5 = 0x10;
      }
      FMemStackBase::AllocateNewChunk(puVar1,uVar5 + iVar8);
      _Dst = (void *)((*puVar1 - 1) + uVar7 & ~(uVar7 - 1));
      uVar4 = (longlong)iVar8 + (longlong)_Dst;
    }
    *puVar1 = uVar4;
    *param_1 = _Dst;
    if ((_Src != (void *)0x0) && (param_2 != 0)) {
      if (iVar6 <= param_2) {
        param_2 = iVar6;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)(param_2 * 0x78));
    }
  }
  return;
}



// FUNCTION 141dab8d0 FUN_141dab8d0 body=304 status=ok
// SIG undefined FUN_141dab8d0(void)

void FUN_141dab8d0(undefined8 *param_1,int param_2)

{
  ulonglong *puVar1;
  void *_Src;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  void *_Dst;
  int iVar6;
  int iVar7;
  undefined1 local_res8 [8];
  undefined *local_38;
  undefined1 *puStack_30;
  
  uVar2 = *(uint *)(param_1 + 1);
  iVar6 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar2)) {
    iVar6 = uVar2 + 0x10 + (int)((ulonglong)((longlong)(int)uVar2 * 3) >> 3);
  }
  if (iVar6 < (int)uVar2) {
    iVar6 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar6;
  _Src = (void *)*param_1;
  if (iVar6 != 0) {
    puStack_30 = local_res8;
    local_38 = &DAT_14060d670;
    local_res8[0] = 0;
    iVar7 = iVar6 * 0x40;
    lVar3 = FUN_1415d8310(&local_38,&DAT_146216a38);
    puVar1 = (ulonglong *)(lVar3 + 0x18);
    uVar2 = 8;
    if (0xf < iVar7) {
      uVar2 = 0x10;
    }
    uVar5 = 0x10;
    if (0xf < iVar7) {
      uVar5 = (ulonglong)uVar2;
    }
    _Dst = (void *)((*puVar1 - 1) + uVar5 & ~(uVar5 - 1));
    uVar4 = (longlong)iVar7 + (longlong)_Dst;
    if (*(ulonglong *)(lVar3 + 0x20) < uVar4) {
      FMemStackBase::AllocateNewChunk(puVar1,(int)uVar5 + iVar7);
      _Dst = (void *)((*puVar1 - 1) + uVar5 & ~(uVar5 - 1));
      uVar4 = (longlong)iVar7 + (longlong)_Dst;
    }
    *puVar1 = uVar4;
    *param_1 = _Dst;
    if ((_Src != (void *)0x0) && (param_2 != 0)) {
      if (iVar6 <= param_2) {
        param_2 = iVar6;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)(param_2 << 6));
    }
  }
  return;
}



// FUNCTION 141daba00 FUN_141daba00 body=310 status=ok
// SIG undefined FUN_141daba00(void)

void FUN_141daba00(undefined8 *param_1,int param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  ulonglong uVar4;
  void *_Dst;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 local_res8 [8];
  undefined *local_38;
  undefined1 *puStack_30;
  
  uVar2 = *(uint *)(param_1 + 1);
  iVar6 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar2)) {
    iVar6 = uVar2 + 0x10 + (int)((ulonglong)((longlong)(int)uVar2 * 3) >> 3);
  }
  if (iVar6 < (int)uVar2) {
    iVar6 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar6;
  _Src = (void *)*param_1;
  if (iVar6 != 0) {
    puStack_30 = local_res8;
    local_38 = &DAT_14060d670;
    local_res8[0] = 0;
    iVar8 = iVar6 * 0x10;
    lVar3 = FUN_1415d8310(&local_38,&DAT_146216a38);
    uVar5 = 8;
    uVar2 = uVar5;
    if (0xf < iVar8) {
      uVar2 = 0x10;
    }
    uVar7 = (ulonglong)uVar2;
    puVar1 = (ulonglong *)(lVar3 + 0x18);
    _Dst = (void *)(*(longlong *)(lVar3 + 0x18) + -1 + uVar7 & ~(uVar7 - 1));
    uVar4 = (longlong)iVar8 + (longlong)_Dst;
    if (*(ulonglong *)(lVar3 + 0x20) < uVar4) {
      if (0xf < iVar8) {
        uVar5 = 0x10;
      }
      FMemStackBase::AllocateNewChunk(puVar1,uVar5 + iVar8);
      _Dst = (void *)((*puVar1 - 1) + uVar7 & ~(uVar7 - 1));
      uVar4 = (longlong)iVar8 + (longlong)_Dst;
    }
    *puVar1 = uVar4;
    *param_1 = _Dst;
    if ((_Src != (void *)0x0) && (param_2 != 0)) {
      if (iVar6 <= param_2) {
        param_2 = iVar6;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)(param_2 << 4));
    }
  }
  return;
}



// FUNCTION 141dabb40 ResizeGrow body=257 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FVector4,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x90);
  if (uVar1 < 9) {
    uVar2 = 8;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x94) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 << 4,0);
    uVar2 = (uint)(uVar3 >> 4);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x94) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x80);
  if (uVar2 < 9) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 4);
    pvVar4 = *(void **)((longlong)param_1 + 0x80);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 4,0);
        *(void **)((longlong)param_1 + 0x80) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 4);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 4;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x80) = uVar5;
  return;
}



// FUNCTION 141dabc50 ResizeShrink body=84 status=ok
// SIG undefined ResizeShrink(void)

void TArray<unsigned_int,TMemStackAllocator<0>_>::ResizeShrink(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 8);
  if ((((ulonglong)((longlong)(iVar1 - iVar2) << 2) < 0x4000) && (iVar1 * 2 <= iVar2 * 3)) ||
     ((iVar3 = iVar2, (uint)(iVar1 - iVar2) < 0x41 && (iVar2 != 0)))) {
    iVar3 = iVar1;
  }
  if (iVar3 == iVar1) {
    return;
  }
  *(int *)(param_1 + 0xc) = iVar3;
  FUN_140848a70(param_1,iVar2,iVar3,4);
  return;
}



// FUNCTION 141dabcb0 FUN_141dabcb0 body=74 status=ok
// SIG undefined FUN_141dabcb0(void)

undefined1 FUN_141dabcb0(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 200);
  FUN_1419e0a40(param_2,param_1 + 0xce);
  FUN_1419e0b60(param_2,param_1 + 0xd4);
  return 0;
}



// FUNCTION 141dabd00 FUN_141dabd00 body=1222 status=ok
// SIG undefined FUN_141dabd00(void)

void FUN_141dabd00(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  ushort uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  int iVar11;
  uint local_res8 [2];
  ulonglong local_res18;
  undefined8 local_res20;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined8 local_d8;
  float local_d0;
  undefined1 local_c8 [64];
  undefined1 local_88 [80];
  
  lVar6 = *(longlong *)(param_3 + 0x48);
  local_res20 = param_4;
  if (*(char *)(lVar6 + 0x28) == '\0') {
    FUN_1419f3850(lVar6);
  }
  uVar2 = *(ulonglong *)(lVar6 + 0x40);
  local_res18 = uVar2;
  FUN_141aa6800(param_1,param_2,&local_res18,*(undefined4 *)(param_4 + 0x1a38),0xf);
  plVar9 = *(longlong **)(param_5 + 0x28);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)**(longlong **)(param_5 + 0x18);
  }
  lVar6 = (**(code **)(*plVar9 + 0x10))();
  local_d8 = *(ulonglong *)(lVar6 + 0x14);
  local_res18 = local_d8 >> 0x20;
  iVar11 = (int)local_d8;
  iVar5 = (int)(local_d8 >> 0x20);
  if (*(short *)(param_1 + 0x40) != 0) {
    local_e8 = (float)(uint)(*(int *)(param_5 + 0x530) + *(int *)(param_5 + 0x540)) *
               (1.0 / (float)iVar11);
    local_e4 = (float)(uint)(*(int *)(param_5 + 0x534) + *(int *)(param_5 + 0x540)) *
               (1.0 / (float)iVar5);
    local_e0 = (float)*(uint *)(param_5 + 0x538) * (1.0 / (float)iVar11);
    local_dc = (float)*(uint *)(param_5 + 0x53c) * (1.0 / (float)iVar5);
    SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
              (param_2,uVar2,param_1 + 0x3c,&local_e8,0);
  }
  uVar4 = local_d8._4_4_;
  FUN_141d9cb50(param_5,local_c8,param_4,0,0,0,iVar11,local_d8._4_4_);
  SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
            (param_2,uVar2,param_1 + 0x10,local_c8,0);
  FUN_141d9cb50(param_5,local_88,local_res20,1,0,0,iVar11,uVar4);
  SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
            (param_2,uVar2,param_1 + 0x10,local_88,0);
  if (*(short *)(param_1 + 0x1a) == 0) {
    iVar5 = (int)local_res18;
  }
  else {
    local_d8 = 0;
    local_d0 = (float)FUN_141d92500(param_5);
    local_d0 = 1.0 / local_d0;
    SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
              (param_2,uVar2,param_1 + 0x16,&local_d8,0);
  }
  if (*(short *)(param_1 + 0x20) != 0) {
    local_e8 = (float)iVar11;
    local_e4 = (float)iVar5;
    local_e0 = 1.0 / local_e8;
    local_dc = 1.0 / local_e4;
    SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
              (param_2,uVar2,param_1 + 0x1c,&local_e8,0);
  }
  lVar6 = *(longlong *)(param_5 + 0x28);
  if (*(longlong *)(param_5 + 0x28) == 0) {
    lVar6 = DAT_1464c3318;
  }
  uVar3 = *(undefined8 *)(lVar6 + 0x10);
  uVar7 = FUN_1404a0e20();
  if (*(short *)(param_1 + 0x24) != 0) {
    local_res20 = CONCAT44(local_res20._4_4_,(uint)*(ushort *)(param_1 + 0x22));
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar10 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f59c80;
    *(float *)(puVar10 + 3) = (float)local_res20;
    puVar10[2] = uVar2;
    puVar10[4] = uVar3;
  }
  if (*(short *)(param_1 + 0x28) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x26);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar10 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f59c70;
    puVar10[2] = uVar2;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
    puVar10[4] = uVar7;
    if (*(short *)(param_1 + 0x28) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x26);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar10 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar10 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar8;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar10;
      *(undefined8 **)(param_2 + 8) = puVar10 + 1;
      puVar10[1] = 0;
      *puVar10 = &PTR_LAB_143f59c70;
      puVar10[2] = uVar2;
      *(uint *)(puVar10 + 3) = (uint)uVar1;
      puVar10[4] = uVar7;
    }
  }
  local_res20._4_4_ = *(float *)(param_5 + 0x154) - *(float *)(param_5 + 0x158);
  local_res20._0_4_ = *(float *)(param_5 + 0x6b8);
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
            (param_2,uVar2,param_1 + 0x2a,&local_res20,0);
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar2,param_1 + 0x30,param_5 + 0x3d0,0);
  if (*(short *)(param_1 + 0x3a) != 0) {
    local_res20._0_4_ = 1.0 / *(float *)(param_5 + 0x3d4);
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,uVar2,param_1 + 0x36,&local_res20,0);
  }
  local_res8[0] = *(ushort *)(param_5 + 0x562) & 1;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar2,param_1 + 0x42,local_res8,0);
  return;
}



// FUNCTION 141dac1d0 FUN_141dac1d0 body=1258 status=ok
// SIG undefined FUN_141dac1d0(void)

void FUN_141dac1d0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  uint local_res8 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_d8;
  float local_d0;
  float local_cc;
  undefined1 local_c8 [64];
  undefined1 local_88 [80];
  
  lVar4 = *(longlong *)(param_3 + 0x48);
  local_res20 = param_4;
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  uVar2 = *(undefined8 *)(lVar4 + 0x40);
  local_res18 = uVar2;
  FUN_141aa6800(param_1,param_2,&local_res18,*(undefined4 *)(param_4 + 0x1a38),0xf);
  plVar8 = *(longlong **)(param_5 + 0x28);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)**(longlong **)(param_5 + 0x18);
  }
  lVar4 = (**(code **)(*plVar8 + 0x10))();
  iVar10 = (int)*(undefined8 *)(lVar4 + 0x14);
  iVar7 = (int)((ulonglong)*(undefined8 *)(lVar4 + 0x14) >> 0x20);
  if (*(short *)(param_1 + 0x40) != 0) {
    fVar11 = 1.0 / (float)iVar10;
    local_cc = 1.0 / (float)iVar7;
    local_d0 = (float)*(uint *)(param_5 + 0x538) * fVar11;
    local_d8 = CONCAT44((float)(uint)(*(int *)(param_5 + 0x534) + *(int *)(param_5 + 0x540)) *
                        local_cc,(float)(uint)(*(int *)(param_5 + 0x530) + *(int *)(param_5 + 0x540)
                                              ) * fVar11);
    local_cc = (float)*(uint *)(param_5 + 0x53c) * local_cc;
    SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
              (param_2,uVar2,param_1 + 0x3c,&local_d8,0);
  }
  FUN_141d9cb50(param_5,local_c8,param_4,0,*(undefined4 *)(param_5 + 0x530),
                *(undefined4 *)(param_5 + 0x534),*(undefined4 *)(param_5 + 0x538),
                *(undefined4 *)(param_5 + 0x53c));
  SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
            (param_2,uVar2,param_1 + 0x10,local_c8,0);
  FUN_141d9cb50(param_5,local_88,local_res20,1,*(undefined4 *)(param_5 + 0x530),
                *(undefined4 *)(param_5 + 0x534),*(undefined4 *)(param_5 + 0x538),
                *(undefined4 *)(param_5 + 0x53c));
  SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
            (param_2,uVar2,param_1 + 0x10,local_88,1);
  if (*(short *)(param_1 + 0x1a) != 0) {
    local_d8 = 0;
    local_d0 = (float)FUN_141d92500(param_5);
    local_d0 = 1.0 / local_d0;
    SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
              (param_2,uVar2,param_1 + 0x16,&local_d8,0);
  }
  if (*(short *)(param_1 + 0x20) != 0) {
    fVar11 = (float)iVar10;
    local_d0 = 1.0 / fVar11;
    fVar12 = (float)iVar7;
    local_cc = 1.0 / fVar12;
    local_d8 = CONCAT44(fVar12,fVar11);
    SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
              (param_2,uVar2,param_1 + 0x1c,&local_d8,0);
  }
  lVar4 = *(longlong *)(param_5 + 0x28);
  if (*(longlong *)(param_5 + 0x28) == 0) {
    lVar4 = DAT_1464c3318;
  }
  uVar3 = *(undefined8 *)(lVar4 + 0x10);
  uVar5 = FUN_1404a0e20();
  if (*(short *)(param_1 + 0x24) != 0) {
    local_res20 = CONCAT44(local_res20._4_4_,(uint)*(ushort *)(param_1 + 0x22));
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c80;
    *(float *)(puVar9 + 3) = (float)local_res20;
    puVar9[2] = uVar2;
    puVar9[4] = uVar3;
  }
  if (*(short *)(param_1 + 0x28) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x26);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c70;
    puVar9[2] = uVar2;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar5;
    if (*(short *)(param_1 + 0x28) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x26);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar9 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar9 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar9;
      *(undefined8 **)(param_2 + 8) = puVar9 + 1;
      puVar9[1] = 0;
      *puVar9 = &PTR_LAB_143f59c70;
      puVar9[2] = uVar2;
      *(uint *)(puVar9 + 3) = (uint)uVar1;
      puVar9[4] = uVar5;
    }
  }
  local_res20._4_4_ = *(float *)(param_5 + 0x154) - *(float *)(param_5 + 0x158);
  local_res20._0_4_ = *(float *)(param_5 + 0x6b8);
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
            (param_2,uVar2,param_1 + 0x2a,&local_res20,0);
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar2,param_1 + 0x30,param_5 + 0x3d0,0);
  if (*(short *)(param_1 + 0x3a) != 0) {
    local_res20._0_4_ = 1.0 / *(float *)(param_5 + 0x3d4);
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,uVar2,param_1 + 0x36,&local_res20,0);
  }
  local_res8[0] = *(ushort *)(param_5 + 0x562) & 1;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar2,param_1 + 0x42,local_res8,0);
  return;
}



// FUNCTION 141dac6c0 FUN_141dac6c0 body=388 status=ok
// SIG undefined FUN_141dac6c0(void)

void FUN_141dac6c0(longlong param_1,longlong param_2,char param_3,char param_4)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x560);
  if ((*(float *)(param_1 + 0x3d4) <= 0.0) || ((uVar1 >> 9 & 1) != 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((((uVar1 & 0x40) == 0) || (*(int *)(param_1 + 0x524) < 0)) || ((uVar1 & 0x10) == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x5c8) + 0x30);
  if ((*(uint *)(lVar2 + 0x180) >> 3 & 1) == 0) {
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x5c8) + 0x88);
  }
  else {
    iVar5 = *(int *)(lVar2 + 0x14c);
  }
  if (param_3 == '\0') {
    if (bVar4) {
      if (bVar3) {
        uVar6 = FUN_141d9b360();
        *(undefined8 *)(param_2 + 0x30) = uVar6;
        return;
      }
      uVar6 = FUN_141d9b220();
      *(undefined8 *)(param_2 + 0x30) = uVar6;
      return;
    }
    if (param_4 != '\0') {
      iVar5 = FUN_14274f1e0();
      if (iVar5 == 4) {
        uVar6 = FUN_1404a0ce0();
        *(undefined8 *)(param_2 + 0x30) = uVar6;
        return;
      }
      uVar6 = FUN_141d9b720();
      *(undefined8 *)(param_2 + 0x30) = uVar6;
      return;
    }
    uVar6 = FUN_141d9bd60();
  }
  else {
    uVar6 = 0;
    if (bVar3) {
      if (iVar5 == 0) {
        uVar6 = FUN_141d9ae60();
        *(undefined8 *)(param_2 + 0x30) = uVar6;
        return;
      }
      if (iVar5 == 1) {
        uVar6 = FUN_141d9b0e0();
        *(undefined8 *)(param_2 + 0x30) = uVar6;
        return;
      }
      if (iVar5 == 2) {
        uVar6 = FUN_141d9b5e0();
        *(undefined8 *)(param_2 + 0x30) = uVar6;
        return;
      }
      if (iVar5 == 3) {
        uVar6 = FUN_141d9b9a0();
        *(undefined8 *)(param_2 + 0x30) = uVar6;
        return;
      }
    }
    else {
      if (iVar5 == 0) {
        uVar6 = FUN_141d9ad20();
        *(undefined8 *)(param_2 + 0x30) = uVar6;
        return;
      }
      if (iVar5 == 1) {
        uVar6 = FUN_141d9afa0();
        *(undefined8 *)(param_2 + 0x30) = uVar6;
        return;
      }
      if (iVar5 == 2) {
        uVar6 = FUN_141d9b4a0();
        *(undefined8 *)(param_2 + 0x30) = uVar6;
        return;
      }
      if (iVar5 == 3) {
        uVar6 = FUN_141d9b860();
        *(undefined8 *)(param_2 + 0x30) = uVar6;
        return;
      }
    }
  }
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  return;
}



// FUNCTION 141dac850 SetBlendStateForProjection body=291 status=ok
// SIG undefined SetBlendStateForProjection(void)

void FProjectedShadowInfo::SetBlendStateForProjection
               (longlong param_1,int param_2,char param_3,char param_4,char param_5,char param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_5 == '\0') {
    if (param_3 != '\0') {
      if (param_4 != '\0') {
        uVar2 = FUN_141d9b360();
        *(undefined8 *)(param_1 + 0x30) = uVar2;
        return;
      }
      uVar2 = FUN_141d9b220();
      *(undefined8 *)(param_1 + 0x30) = uVar2;
      return;
    }
    if (param_6 != '\0') {
      iVar1 = FUN_14274f1e0();
      if (iVar1 == 4) {
        uVar2 = FUN_1404a0ce0();
        *(undefined8 *)(param_1 + 0x30) = uVar2;
        return;
      }
      uVar2 = FUN_141d9b720();
      *(undefined8 *)(param_1 + 0x30) = uVar2;
      return;
    }
    uVar2 = FUN_141d9bd60();
  }
  else {
    uVar2 = 0;
    if (param_4 == '\0') {
      if (param_2 == 0) {
        uVar2 = FUN_141d9ad20();
        *(undefined8 *)(param_1 + 0x30) = uVar2;
        return;
      }
      if (param_2 == 1) {
        uVar2 = FUN_141d9afa0();
        *(undefined8 *)(param_1 + 0x30) = uVar2;
        return;
      }
      if (param_2 == 2) {
        uVar2 = FUN_141d9b4a0();
        *(undefined8 *)(param_1 + 0x30) = uVar2;
        return;
      }
      if (param_2 == 3) {
        uVar2 = FUN_141d9b860();
        *(undefined8 *)(param_1 + 0x30) = uVar2;
        return;
      }
    }
    else {
      if (param_2 == 0) {
        uVar2 = FUN_141d9ae60();
        *(undefined8 *)(param_1 + 0x30) = uVar2;
        return;
      }
      if (param_2 == 1) {
        uVar2 = FUN_141d9b0e0();
        *(undefined8 *)(param_1 + 0x30) = uVar2;
        return;
      }
      if (param_2 == 2) {
        uVar2 = FUN_141d9b5e0();
        *(undefined8 *)(param_1 + 0x30) = uVar2;
        return;
      }
      if (param_2 == 3) {
        uVar2 = FUN_141d9b9a0();
        *(undefined8 *)(param_1 + 0x30) = uVar2;
        return;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  return;
}



// FUNCTION 141dac980 FUN_141dac980 body=280 status=ok
// SIG undefined FUN_141dac980(void)

void FUN_141dac980(longlong *param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_3 + 0xe8);
  if ((*(char *)(*param_2 + (longlong)iVar1) != '\0') && (iVar5 = 0, 0 < (int)param_1[1])) {
    uVar4 = 1;
    lVar7 = 0;
    do {
      lVar6 = *param_1 + lVar7;
      if ((*(byte *)(*param_2 + (longlong)iVar1) & (byte)uVar4) != 0) {
        iVar2 = *(int *)(param_3 + 0xe8);
        if (((iVar2 < 0) || (*(int *)(lVar6 + 0x1a50) <= iVar2)) ||
           (*(longlong *)(*(longlong *)(lVar6 + 0x1a48) + (longlong)iVar2 * 8) == 0)) {
          uVar3 = (**(code **)(**(longlong **)(param_3 + 8) + 0x140))
                            (*(longlong **)(param_3 + 8),lVar6,*(undefined4 *)(lVar6 + 0x11ec),
                             *(undefined8 *)(lVar6 + 0x27f8),0,0,0xbf800000);
          FUN_141d72900(lVar6,param_3,uVar3);
        }
      }
      iVar5 = iVar5 + 1;
      uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      lVar7 = lVar7 + 0x30d0;
    } while (iVar5 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 141dacaa0 FUN_141dacaa0 body=543 status=ok
// SIG undefined FUN_141dacaa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141dacaa0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  uint uVar4;
  byte bVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  void *_Dst;
  longlong lVar10;
  float *pfVar11;
  ulonglong _Size;
  float fVar12;
  undefined1 auStack_e8 [32];
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8 [24];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (*(short *)(param_1 + 0x15a) != 0) {
    fVar12 = 0.0;
    lVar9 = 0;
    local_b8[0] = 0.0;
    local_b8[1] = 0.0;
    local_b8[2] = 0.0;
    local_b8[3] = 1.0;
    lVar10 = 6;
    local_b8[4] = 0.0;
    local_b8[5] = 0.0;
    local_b8[6] = 0.0;
    local_b8[7] = 1.0;
    local_b8[8] = 0.0;
    local_b8[9] = 0.0;
    local_b8[10] = 0.0;
    local_b8[0xb] = 1.0;
    local_b8[0xc] = 0.0;
    local_b8[0xd] = 0.0;
    local_b8[0xe] = 0.0;
    local_b8[0xf] = 1.0;
    local_b8[0x10] = 0.0;
    local_b8[0x11] = 0.0;
    local_b8[0x12] = 0.0;
    local_b8[0x13] = 1.0;
    local_b8[0x14] = 0.0;
    local_b8[0x15] = 0.0;
    local_b8[0x16] = 0.0;
    local_b8[0x17] = 1.0;
    fStack_c4 = 0.0;
    fStack_c0 = 0.0;
    fStack_bc = 0.0;
    pfVar11 = local_b8;
    do {
      bVar5 = FConvexVolume::IntersectBox
                        (lVar9 * 0x120 + *(longlong *)(param_4 + 0x5a8),fVar12,param_3 + 0xcc);
      lVar9 = lVar9 + 1;
      fVar12 = (float)bVar5;
      *pfVar11 = fVar12;
      pfVar11[1] = fStack_c4;
      pfVar11[2] = fStack_c0;
      pfVar11[3] = fStack_bc;
      lVar10 = lVar10 + -1;
      pfVar11 = pfVar11 + 4;
      local_c8 = fVar12;
    } while (lVar10 != 0);
    lVar9 = *(longlong *)(param_1 + 0x48);
    if (*(char *)(lVar9 + 0x28) == '\0') {
      FUN_1419f3850(lVar9);
    }
    uVar3 = *(undefined8 *)(lVar9 + 0x58);
    uVar4 = (uint)*(ushort *)(param_1 + 0x15a);
    if (0x5f < *(ushort *)(param_1 + 0x15a)) {
      uVar4 = 0x60;
    }
    _Size = (ulonglong)uVar4;
    if (uVar4 != 0) {
      uVar1 = *(ushort *)(param_1 + 0x158);
      uVar2 = *(ushort *)(param_1 + 0x156);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar6 = _Size + (longlong)_Dst;
      if (*(ulonglong *)(param_2 + 0x38) < uVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar4 + 0x10);
        _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
        uVar6 = _Size + (longlong)_Dst;
      }
      *(ulonglong *)(param_2 + 0x30) = uVar6;
      _guard_xfg_dispatch_icall_nop(_Dst,local_b8,_Size);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 6;
      if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
        puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar8 + 6;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar7;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar8;
      *(undefined8 **)(param_2 + 8) = puVar8 + 1;
      puVar8[1] = 0;
      *puVar8 = &PTR_LAB_144e147b0;
      puVar8[2] = uVar3;
      puVar8[3] = _Dst;
      *(uint *)(puVar8 + 4) = (uint)uVar2;
      *(uint *)((longlong)puVar8 + 0x24) = (uint)uVar1;
      *(uint *)(puVar8 + 5) = uVar4;
    }
  }
  return;
}



// FUNCTION 141daccc0 FUN_141daccc0 body=611 status=ok
// SIG undefined FUN_141daccc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141daccc0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  byte bVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  void *_Dst;
  float *pfVar11;
  ulonglong _Size;
  longlong lVar12;
  float fVar13;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  longlong local_c8;
  float local_b8 [24];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar3 = *(longlong *)(param_1 + 0x48);
  local_c8 = param_8;
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  local_e8 = 0;
  local_f0 = param_7;
  local_f8 = param_6;
  local_100 = param_5;
  local_108 = param_4;
  FUN_141d84f90(param_1,param_2,*(undefined8 *)(lVar3 + 0x38),param_3);
  lVar3 = local_c8;
  if (*(short *)(param_1 + 0x16c) != 0) {
    fVar13 = 0.0;
    lVar10 = 0;
    local_b8[0] = 0.0;
    local_b8[1] = 0.0;
    local_b8[2] = 0.0;
    local_b8[3] = 1.0;
    local_b8[4] = 0.0;
    local_b8[5] = 0.0;
    local_b8[6] = 0.0;
    local_b8[7] = 1.0;
    local_b8[8] = 0.0;
    local_b8[9] = 0.0;
    local_b8[10] = 0.0;
    local_b8[0xb] = 1.0;
    lVar12 = 6;
    local_b8[0xc] = 0.0;
    local_b8[0xd] = 0.0;
    local_b8[0xe] = 0.0;
    local_b8[0xf] = 1.0;
    local_b8[0x10] = 0.0;
    local_b8[0x11] = 0.0;
    local_b8[0x12] = 0.0;
    local_b8[0x13] = 1.0;
    local_b8[0x14] = 0.0;
    local_b8[0x15] = 0.0;
    local_b8[0x16] = 0.0;
    local_b8[0x17] = 1.0;
    fStack_d4 = 0.0;
    fStack_d0 = 0.0;
    fStack_cc = 0.0;
    pfVar11 = local_b8;
    do {
      bVar6 = FConvexVolume::IntersectBox
                        (lVar10 * 0x120 + *(longlong *)(lVar3 + 0x5a8),fVar13,param_5 + 0xcc);
      lVar10 = lVar10 + 1;
      fVar13 = (float)bVar6;
      *pfVar11 = fVar13;
      pfVar11[1] = fStack_d4;
      pfVar11[2] = fStack_d0;
      pfVar11[3] = fStack_cc;
      lVar12 = lVar12 + -1;
      pfVar11 = pfVar11 + 4;
      local_d8 = fVar13;
    } while (lVar12 != 0);
    lVar3 = *(longlong *)(param_1 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    uVar4 = *(undefined8 *)(lVar3 + 0x38);
    uVar5 = (uint)*(ushort *)(param_1 + 0x16c);
    if (0x5f < *(ushort *)(param_1 + 0x16c)) {
      uVar5 = 0x60;
    }
    _Size = (ulonglong)uVar5;
    if (uVar5 != 0) {
      uVar1 = *(ushort *)(param_1 + 0x16a);
      uVar2 = *(ushort *)(param_1 + 0x168);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar7 = _Size + (longlong)_Dst;
      if (*(ulonglong *)(param_2 + 0x38) < uVar7) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar5 + 0x10);
        _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
        uVar7 = (longlong)_Dst + _Size;
      }
      *(ulonglong *)(param_2 + 0x30) = uVar7;
      _guard_xfg_dispatch_icall_nop(_Dst,local_b8,_Size);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 6;
      if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
        puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar9 + 6;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar8;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar9;
      *(undefined8 **)(param_2 + 8) = puVar9 + 1;
      puVar9[1] = 0;
      *puVar9 = &PTR_LAB_143f4d340;
      puVar9[2] = uVar4;
      puVar9[3] = _Dst;
      *(uint *)(puVar9 + 4) = (uint)uVar2;
      *(uint *)((longlong)puVar9 + 0x24) = (uint)uVar1;
      *(uint *)(puVar9 + 5) = uVar5;
    }
  }
  return;
}



// FUNCTION 141dacf30 FUN_141dacf30 body=355 status=ok
// SIG undefined FUN_141dacf30(void)

void FUN_141dacf30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,int param_6,undefined8 param_7,undefined8 param_8,
                  longlong param_9)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_5 + 0x78);
  if (*(longlong *)(param_5 + 0x78) == 0) {
    lVar4 = param_5;
  }
  lVar4 = lVar4 + (longlong)param_6 * 0x78;
  uVar1 = *(undefined8 *)(param_9 + 8);
  FUN_141daccc0(*(undefined8 *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 8),param_3,param_4
                ,lVar4,param_7,uVar1);
  if ((*(longlong *)(param_1 + 0x50) != 0) && (*(longlong *)(param_1 + 0x58) != 0)) {
    FBaseHS::SetMesh(*(longlong *)(param_1 + 0x50),param_2,*(undefined8 *)(param_1 + 8),param_3,
                     param_4,lVar4,param_7);
    FBaseDS::SetMesh(*(undefined8 *)(param_1 + 0x58),param_2,*(undefined8 *)(param_1 + 8),param_3,
                     param_4,lVar4,param_7);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_141dacaa0(*(longlong *)(param_1 + 0x40),param_2,param_4,uVar1,param_3);
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    FUN_141d84bb0(lVar2,param_2,*(undefined8 *)(lVar3 + 0x40),uVar1,param_3,param_4,lVar4,param_7,0)
    ;
  }
  return;
}



// FUNCTION 141dad0a0 FUN_141dad0a0 body=414 status=ok
// SIG undefined FUN_141dad0a0(void)

void FUN_141dad0a0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,longlong *param_6,longlong param_7)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  byte bVar7;
  float fVar8;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_30;
  
  lVar5 = param_7;
  fVar8 = (float)FUN_141ce4f50(*(undefined4 *)(param_7 + 0x1a38));
  uVar3 = FUN_14274f980(lVar5);
  if (DAT_146ac3ac0 == 0) {
LAB_141dad113:
    cVar2 = FUN_141ee4480(uVar3);
    bVar7 = 0;
    if (cVar2 == '\0') goto LAB_141dad120;
  }
  else {
    iVar4 = FUN_1419ef5f0(uVar3);
    if (iVar4 < 3) goto LAB_141dad113;
  }
  bVar7 = 1;
LAB_141dad120:
  iVar4 = (**(code **)(*param_6 + 0x1f8))();
  local_30 = 0x3d000000;
  uVar1 = -(uint)bVar7 & 0x189;
  if (iVar4 == 0) {
    uVar1 = 0;
  }
  iVar6 = *(int *)(*(longlong *)(param_4 + 0x48) + 0xa4) - uVar1;
  iVar4 = 0;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  local_40 = 0x3d000000;
  local_48 = CONCAT44((float)*(uint *)(*(longlong *)(param_3 + 0x48) + 0xa4) * (1.0 / fVar8),
                      (float)iVar4 * (1.0 / fVar8));
  lVar5 = FSceneRenderTargets::Get(param_2);
  bVar7 = 0;
  if (*(short *)(param_1 + 0x16) != 0) {
    bVar7 = 0;
    if (*(uint *)(lVar5 + 0x400) != (uint)*(ushort *)(param_1 + 0x14)) {
      bVar7 = 1;
    }
  }
  lVar5 = *(longlong *)(param_1 + -0x78);
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,*(undefined8 *)(lVar5 + 0x40),param_1 + 8,&local_48,0);
  lVar5 = *(longlong *)(param_1 + -0x78);
  param_7._0_1_ = bVar7 ^ 1;
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  SetShaderValue<FRHIPixelShader_*>(param_2,*(undefined8 *)(lVar5 + 0x40),param_1 + 0xe,&param_7,0);
  return;
}



// FUNCTION 141dad240 FUN_141dad240 body=1104 status=ok
// SIG undefined FUN_141dad240(void)

void FUN_141dad240(longlong param_1,longlong param_2,int param_3,ulonglong param_4,longlong param_5)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint local_res8 [2];
  float local_res18 [2];
  undefined8 local_res20;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar12;
  ulonglong uVar11;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  lVar6 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar6 + 0x28) == '\0') {
    FUN_1419f3850(lVar6);
  }
  uVar2 = *(undefined8 *)(lVar6 + 0x40);
  local_res20 = uVar2;
  FUN_141aa9590(param_1,param_2,uVar2,*(undefined8 *)(param_4 + 0x20));
  uVar11 = CONCAT44(uVar12,0xf);
  FUN_141aa6800(param_1 + 0xc0,param_2,&local_res20,*(undefined4 *)(param_4 + 0x1a38),uVar11);
  lVar5 = param_5;
  FUN_141d83610(param_1 + 0xd0,param_2,uVar2,param_5);
  plVar3 = *(longlong **)(*(longlong *)(lVar5 + 0x5c8) + 0x30);
  lVar6 = plVar3[0x1e];
  uVar12 = *(undefined4 *)((longlong)plVar3 + 0xf4);
  lVar4 = plVar3[0x1f];
  local_4c = (float)(**(code **)(*plVar3 + 0x18))(plVar3);
  local_4c = 1.0 / local_4c;
  uVar11 = uVar11 & 0xffffffff00000000;
  local_58 = (int)lVar6;
  local_54 = uVar12;
  local_50 = (float)(int)lVar4;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,uVar2,param_1 + 0xec,&local_58,uVar11);
  uVar11 = uVar11 & 0xffffffff00000000;
  lVar6 = *(longlong *)(lVar5 + 0x550);
  if (*(longlong *)(lVar5 + 0x550) == 0) {
    lVar6 = lVar5 + 0x548;
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar2,param_1 + 0xf2,lVar6 + (longlong)param_3 * 4,uVar11);
  uVar11 = uVar11 & 0xffffffff00000000;
  local_res18[0] = *(float *)(plVar3 + 0x25) * 7.0 + 1.0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar2,param_1 + 0xf8,local_res18,uVar11);
  local_4c = (float)(**(code **)(*plVar3 + 0x18))(plVar3);
  uVar11 = uVar11 & 0xffffffff00000000;
  local_4c = local_4c / (local_4c - 1.0);
  local_50 = -1.0 / local_4c;
  local_54 = 0;
  local_4c = local_50 * local_4c;
  local_58 = *(undefined4 *)(lVar5 + 0x6b8);
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,uVar2,param_1 + 0xfe,&local_58,uVar11);
  FSceneRenderTargets::Get(param_2);
  lVar6 = GetSubsufaceProfileTexture_RT(param_2);
  if (lVar6 == 0) {
    lVar6 = DAT_1464c3318;
  }
  uVar7 = *(undefined8 *)(lVar6 + 0x10);
  if (*(short *)(param_1 + 0x106) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x104);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar10;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c80;
    puVar9[2] = uVar2;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar7;
  }
  plVar3 = *(longlong **)(*(longlong *)(param_4 + 0x10) + 0x20);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x210))();
  }
  uVar7 = FUN_1404a0e20();
  if (*(short *)(param_1 + 0xea) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe8);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar10;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c70;
    puVar9[2] = uVar2;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar7;
  }
  lVar6 = 0;
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      if (*(undefined **)(*(longlong *)(param_1 + 8) + lVar6 * 8) == &DAT_146a286e0) {
        if (iVar8 != -1) {
          puVar10 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar8 * 8);
          *(undefined4 *)puVar10 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141dad5b2;
        }
        break;
      }
      iVar8 = iVar8 + 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x10));
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a253f8) && (_Init_thread_header(&DAT_146a253f8), DAT_146a253f8 == -1))
  {
    DAT_146a253f0._0_4_ = 0;
    DAT_146a253f0._4_2_ = 0;
    DAT_146a253f0._6_1_ = 0;
    _Init_thread_footer(&DAT_146a253f8);
  }
  puVar10 = &DAT_146a253f0;
LAB_141dad5b2:
  param_5 = *puVar10;
  if ((char)((ulonglong)param_5 >> 0x30) != '\0') {
    FUN_141b51280(param_2,uVar2,&param_5,*(undefined8 *)(lVar5 + 0x5c8),param_4);
    uVar11 = param_4;
  }
  local_res8[0] = *(ushort *)(lVar5 + 0x562) & 1;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar2,param_1 + 0x108,local_res8,uVar11 & 0xffffffff00000000);
  return;
}



// FUNCTION 141dad690 FUN_141dad690 body=1182 status=ok
// SIG undefined FUN_141dad690(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141dad690(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                  undefined8 param_5,longlong param_6,undefined8 param_7)

{
  undefined8 uVar1;
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
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  int iVar22;
  ulonglong uVar23;
  undefined4 *puVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
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
  
  lVar20 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar20 + 0x28) == '\0') {
    FUN_1419f3850(lVar20);
  }
  uVar1 = *(undefined8 *)(lVar20 + 0x40);
  lVar20 = CONCAT44(param_5._4_4_,(float)param_5);
  FUN_141aa87d0(param_1,param_2,uVar1,param_3,param_4,lVar20,
                CONCAT44(param_7._4_4_,(undefined4)param_7) + 0x18,
                *(undefined8 *)(CONCAT44(param_7._4_4_,(undefined4)param_7) + 0x20));
  lVar18 = param_6;
  uVar21 = 0;
  param_4 = param_4 & 0xffffffff00000000;
  param_7._0_4_ = *(undefined4 *)(param_6 + 0x6b8);
  param_7._4_4_ = *(undefined4 *)(param_6 + 0x150);
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
            (param_2,uVar1,param_1 + 0x150,&param_7,param_4);
  lVar19 = FSceneRenderTargets::Get(param_2);
  param_4 = param_4 & 0xffffffff00000000;
  param_5._0_4_ = (float)*(int *)(lVar19 + 0x3b0);
  param_5._4_4_ = (float)param_5;
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
            (param_2,uVar1,param_1 + 0x156,&param_5,param_4);
  fVar2 = *(float *)(lVar18 + 0xa0);
  fVar3 = *(float *)(lVar18 + 0xa4);
  fVar4 = *(float *)(lVar18 + 0xa8);
  fVar5 = *(float *)(lVar18 + 0xac);
  fVar6 = *(float *)(lVar18 + 0x90);
  fVar7 = *(float *)(lVar18 + 0x94);
  fVar8 = *(float *)(lVar18 + 0x98);
  fVar9 = *(float *)(lVar18 + 0x9c);
  fVar10 = *(float *)(lVar18 + 0xb0);
  fVar11 = *(float *)(lVar18 + 0xb4);
  fVar12 = *(float *)(lVar18 + 0xb8);
  fVar13 = *(float *)(lVar18 + 0xbc);
  fVar14 = *(float *)(lVar18 + 0xc0);
  fVar15 = *(float *)(lVar18 + 0xc4);
  fVar16 = *(float *)(lVar18 + 200);
  fVar17 = *(float *)(lVar18 + 0xcc);
  fVar26 = *(float *)(lVar18 + 0x4c) - *(float *)(lVar20 + 0x8d8);
  fVar25 = *(float *)(lVar18 + 0x48) - *(float *)(lVar20 + 0x8d4);
  fVar27 = *(float *)(lVar18 + 0x44) - *(float *)(lVar20 + 0x8d0);
  local_f8 = fVar6 * 1.0 + fVar2 * 0.0 + fVar10 * 0.0 + fVar14 * 0.0;
  fStack_f4 = fVar7 * 1.0 + fVar3 * 0.0 + fVar11 * 0.0 + fVar15 * 0.0;
  fStack_f0 = fVar8 * 1.0 + fVar4 * 0.0 + fVar12 * 0.0 + fVar16 * 0.0;
  fStack_ec = fVar9 * 1.0 + fVar5 * 0.0 + fVar13 * 0.0 + fVar17 * 0.0;
  local_e8 = fVar6 * 0.0 + fVar2 * 1.0 + fVar10 * 0.0 + fVar14 * 0.0;
  fStack_e4 = fVar7 * 0.0 + fVar3 * 1.0 + fVar11 * 0.0 + fVar15 * 0.0;
  fStack_e0 = fVar8 * 0.0 + fVar4 * 1.0 + fVar12 * 0.0 + fVar16 * 0.0;
  fStack_dc = fVar9 * 0.0 + fVar5 * 1.0 + fVar13 * 0.0 + fVar17 * 0.0;
  local_d8 = fVar6 * 0.0 + fVar2 * 0.0 + fVar10 * 1.0 + fVar14 * 0.0;
  fStack_d4 = fVar7 * 0.0 + fVar3 * 0.0 + fVar11 * 1.0 + fVar15 * 0.0;
  fStack_d0 = fVar8 * 0.0 + fVar4 * 0.0 + fVar12 * 1.0 + fVar16 * 0.0;
  fStack_cc = fVar9 * 0.0 + fVar5 * 0.0 + fVar13 * 1.0 + fVar17 * 0.0;
  local_c8 = fVar14 * 1.0 + fVar6 * fVar27 + fVar2 * fVar25 + fVar10 * fVar26;
  fStack_c4 = fVar15 * 1.0 + fVar7 * fVar27 + fVar3 * fVar25 + fVar11 * fVar26;
  fStack_c0 = fVar16 * 1.0 + fVar8 * fVar27 + fVar4 * fVar25 + fVar12 * fVar26;
  fStack_bc = fVar17 * 1.0 + fVar9 * fVar27 + fVar5 * fVar25 + fVar13 * fVar26;
  SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
            (param_2,uVar1,param_1 + 0x15c,&local_f8,param_4 & 0xffffffff00000000);
  if (*(longlong *)(lVar20 + 0x18) != 0) {
    lVar20 = FSceneViewState::GetLightPropagationVolume
                       (*(longlong *)(lVar20 + 0x18),*(undefined4 *)(lVar20 + 0x1a38),0);
    if (lVar20 != 0) {
      param_6 = *(longlong *)(lVar20 + 0x218);
      if (param_6 != 0) {
        LOCK();
        *(int *)(param_6 + 8) = *(int *)(param_6 + 8) + 1;
        UNLOCK();
      }
      if (0 < *(int *)(param_1 + 0x10)) {
        uVar23 = uVar21;
        do {
          iVar22 = (int)uVar23;
          if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar21 * 8) == &DAT_146a277d0) {
            if (iVar22 != -1) {
              puVar24 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar22 * 8);
              *puVar24 = *(undefined4 *)(param_1 + 0xb8);
              goto LAB_141dada52;
            }
            break;
          }
          uVar23 = (ulonglong)(iVar22 + 1);
          uVar21 = uVar21 + 1;
        } while ((longlong)uVar21 < (longlong)*(int *)(param_1 + 0x10));
      }
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38) < DAT_146a49680) {
        _Init_thread_header(&DAT_146a49680);
        if (DAT_146a49680 == -1) {
          _DAT_146a49678 = 0;
          DAT_146a4967c = 0;
          DAT_146a4967e = 0;
          _Init_thread_footer(&DAT_146a49680);
        }
      }
      puVar24 = (undefined4 *)&DAT_146a49678;
LAB_141dada52:
      FUN_141aad5c0(param_2,uVar1,puVar24,&param_6);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_6);
    }
  }
  return;
}



// FUNCTION 141dadb30 FUN_141dadb30 body=384 status=ok
// SIG undefined FUN_141dadb30(void)

void FUN_141dadb30(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FUN_141aa9590(param_1,param_2,*(undefined8 *)(lVar2 + 0x40),uVar3);
  lVar2 = *(longlong *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_4 + 0x10);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar4 = *(undefined8 *)(lVar2 + 0x40);
  uVar5 = FUN_1404a0e20();
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c80;
    puVar7[2] = uVar4;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar3;
  }
  if (*(short *)(param_1 + 0xc6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc4);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c70;
    puVar7[2] = uVar4;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar5;
  }
  return;
}



// FUNCTION 141dadcb0 FUN_141dadcb0 body=1970 status=ok
// SIG undefined FUN_141dadcb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141dadcb0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  float *pfVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
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
  ulonglong uVar23;
  longlong lVar24;
  float *pfVar25;
  ulonglong uVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  float *pfVar29;
  int iVar30;
  ulonglong uVar31;
  void *_Dst;
  undefined4 *puVar32;
  longlong lVar33;
  undefined1 auStack_368 [32];
  longlong local_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  longlong local_338;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float local_268 [96];
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_368;
  lVar24 = *(longlong *)(param_1 + 0x48);
  local_338 = param_4;
  if (*(char *)(lVar24 + 0x28) == '\0') {
    FUN_1419f3850(lVar24);
  }
  uVar23 = 0;
  uVar4 = *(undefined8 *)(lVar24 + 0x58);
  uVar26 = (ulonglong)_tls_index;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar31 = uVar23;
    do {
      iVar30 = (int)uVar31;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar23 * 8) == &DAT_146b096e0) {
        if (iVar30 != -1) {
          puVar32 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar30 * 8);
          *puVar32 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141dadd9a;
        }
        break;
      }
      uVar31 = (ulonglong)(iVar30 + 1);
      uVar23 = uVar23 + 1;
    } while ((longlong)uVar23 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar26 * 8) + 0x38) <
      DAT_146a0e8b8) {
    _Init_thread_header(&DAT_146a0e8b8);
    if (DAT_146a0e8b8 == -1) {
      _DAT_146a0e8b0 = 0;
      DAT_146a0e8b4 = 0;
      DAT_146a0e8b6 = 0;
      _Init_thread_footer(&DAT_146a0e8b8);
    }
  }
  puVar32 = (undefined4 *)&DAT_146a0e8b0;
LAB_141dadd9a:
  FUN_141af8a80(param_2,uVar4,puVar32,param_3 + 0x20);
  if (*(short *)(param_1 + 0xd2) != 0) {
    lVar24 = FSceneRenderTargets::Get(param_2);
    if (*(char *)(param_3 + 0x1207) == '\0') {
      lVar24 = *(longlong *)(lVar24 + 0x438);
    }
    else {
      lVar24 = *(longlong *)(lVar24 + 0x430);
    }
    lVar24 = *(longlong *)(lVar24 + 0x10);
    if (lVar24 != 0) {
      LOCK();
      *(int *)(lVar24 + 8) = *(int *)(lVar24 + 8) + 1;
      UNLOCK();
    }
    uVar2 = *(ushort *)(param_1 + 0xd0);
    puVar28 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar27 = puVar28 + 5;
    local_348 = lVar24;
    if (*(undefined8 **)(param_2 + 0x38) < puVar27) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar28 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar27 = puVar28 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar27;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar28;
    *(undefined8 **)(param_2 + 8) = puVar28 + 1;
    puVar28[1] = 0;
    *puVar28 = &PTR_LAB_144d8e630;
    puVar28[2] = uVar4;
    *(uint *)(puVar28 + 3) = (uint)uVar2;
    puVar28[4] = lVar24;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_348);
  }
  if (*(short *)(param_1 + 0xd6) != 0) {
    uVar5 = *(undefined8 *)(param_3 + 0x60);
    uVar2 = *(ushort *)(param_1 + 0xd4);
    puVar28 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar27 = puVar28 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar27) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar28 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar27 = puVar28 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar27;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar28;
    *(undefined8 **)(param_2 + 8) = puVar28 + 1;
    puVar28[1] = 0;
    *puVar28 = &PTR_LAB_144d8e630;
    puVar28[2] = uVar4;
    *(uint *)(puVar28 + 3) = (uint)uVar2;
    puVar28[4] = uVar5;
    uVar5 = *(undefined8 *)(param_3 + 0x70);
    uVar2 = *(ushort *)(param_1 + 0xd8);
    puVar28 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar27 = puVar28 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar27) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar28 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar27 = puVar28 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar27;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar28;
    *(undefined8 **)(param_2 + 8) = puVar28 + 1;
    puVar28[1] = 0;
    *puVar28 = &PTR_LAB_144d8e630;
    puVar28[2] = uVar4;
    *(uint *)(puVar28 + 3) = (uint)uVar2;
    puVar28[4] = uVar5;
  }
  if ((*(char *)(param_3 + 0x120d) != '\0') && (0 < *(int *)(*(longlong *)(param_3 + 0x10) + 8))) {
    lVar24 = FSceneViewFamily::GetStereoEyeView
                       (*(longlong *)(param_3 + 0x10),-(*(int *)(param_3 + 0xf60) != 0) & 2);
    uVar23 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      uVar31 = uVar23;
      do {
        iVar30 = (int)uVar31;
        if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar23 * 8) == &DAT_146b09780) {
          if (iVar30 != -1) {
            puVar32 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar30 * 8);
            *puVar32 = *(undefined4 *)(param_1 + 0xb8);
            goto LAB_141dae00c;
          }
          break;
        }
        uVar31 = (ulonglong)(iVar30 + 1);
        uVar23 = uVar23 + 1;
      } while ((longlong)uVar23 < (longlong)*(int *)(param_1 + 0x10));
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar26 * 8) + 0x38) <
        DAT_146a0e8c8) {
      _Init_thread_header(&DAT_146a0e8c8);
      if (DAT_146a0e8c8 == -1) {
        _DAT_146a0e8c0 = 0;
        _DAT_146a0e8c4 = 0;
        DAT_146a0e8c6 = 0;
        _Init_thread_footer(&DAT_146a0e8c8);
      }
    }
    puVar32 = (undefined4 *)&DAT_146a0e8c0;
LAB_141dae00c:
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
              (param_2,uVar4,puVar32,*(undefined8 *)(lVar24 + 0x20));
  }
  pfVar25 = local_268;
  fStack_2d4 = *(float *)(param_3 + 0x8d0);
  fStack_2b4 = *(float *)(param_3 + 0x8d8);
  fStack_2d0 = -fStack_2d4;
  fStack_2c4 = *(float *)(param_3 + 0x8d4);
  fStack_2b0 = -fStack_2b4;
  fStack_2c0 = -fStack_2c4;
  local_328 = 0x3f800000;
  uStack_324 = 0x3f800000;
  uStack_320 = 0x3f800000;
  uStack_31c = 0x3f800000;
  lVar24 = *(longlong *)(local_338 + 0x598);
  local_348 = 0;
  uStack_340 = 0;
  uStack_33c = 0;
  local_318 = 0;
  uStack_314 = 0;
  uStack_310 = 0;
  uStack_30c = 0;
  pfVar29 = (float *)(lVar24 + 0x20);
  local_2f8 = 0;
  uStack_2f4 = 0;
  uStack_2f0 = 0;
  uStack_2ec = 0;
  local_308 = 0;
  uStack_304 = 0;
  uStack_300 = 0;
  uStack_2fc = 0;
  lVar33 = 6;
  local_2e8 = 0x3f800000;
  uStack_2e4 = 0x3f800000;
  uStack_2e0 = 0x3f800000;
  uStack_2dc = 0x3f800000;
  local_2c8 = -fStack_2c4;
  fStack_2c4 = -fStack_2c4;
  local_2d8 = -fStack_2d4;
  fStack_2d4 = -fStack_2d4;
  local_2b8 = -fStack_2b4;
  fStack_2b4 = -fStack_2b4;
  do {
    fVar7 = pfVar29[-4];
    fVar8 = pfVar29[-3];
    fVar9 = pfVar29[-2];
    fVar10 = pfVar29[-1];
    pfVar1 = (float *)((lVar24 - (longlong)local_268) + (longlong)pfVar25);
    fVar11 = *pfVar1;
    fVar12 = pfVar1[1];
    fVar13 = pfVar1[2];
    fVar14 = pfVar1[3];
    fVar15 = *pfVar29;
    fVar16 = pfVar29[1];
    fVar17 = pfVar29[2];
    fVar18 = pfVar29[3];
    fVar19 = pfVar29[4];
    fVar20 = pfVar29[5];
    fVar21 = pfVar29[6];
    fVar22 = pfVar29[7];
    pfVar29 = pfVar29 + 0x10;
    *pfVar25 = fVar11 * 1.0 + fVar7 * 0.0 + fVar15 * 0.0 + fVar19 * 0.0;
    pfVar25[1] = fVar12 * 1.0 + fVar8 * 0.0 + fVar16 * 0.0 + fVar20 * 0.0;
    pfVar25[2] = fVar13 * 1.0 + fVar9 * 0.0 + fVar17 * 0.0 + fVar21 * 0.0;
    pfVar25[3] = fVar14 * 1.0 + fVar10 * 0.0 + fVar18 * 0.0 + fVar22 * 0.0;
    pfVar25[4] = fVar11 * 0.0 + fVar7 * 1.0 + fVar15 * 0.0 + fVar19 * 0.0;
    pfVar25[5] = fVar12 * 0.0 + fVar8 * 1.0 + fVar16 * 0.0 + fVar20 * 0.0;
    pfVar25[6] = fVar13 * 0.0 + fVar9 * 1.0 + fVar17 * 0.0 + fVar21 * 0.0;
    pfVar25[7] = fVar14 * 0.0 + fVar10 * 1.0 + fVar18 * 0.0 + fVar22 * 0.0;
    pfVar25[8] = fVar11 * 0.0 + fVar7 * 0.0 + fVar15 * 1.0 + fVar19 * 0.0;
    pfVar25[9] = fVar12 * 0.0 + fVar8 * 0.0 + fVar16 * 1.0 + fVar20 * 0.0;
    pfVar25[10] = fVar13 * 0.0 + fVar9 * 0.0 + fVar17 * 1.0 + fVar21 * 0.0;
    pfVar25[0xb] = fVar14 * 0.0 + fVar10 * 0.0 + fVar18 * 1.0 + fVar22 * 0.0;
    pfVar25[0xc] = fVar11 * local_2d8 + fVar7 * local_2c8 + fVar15 * local_2b8 + fVar19 * 1.0;
    pfVar25[0xd] = fVar12 * fStack_2d4 + fVar8 * fStack_2c4 + fVar16 * fStack_2b4 + fVar20 * 1.0;
    pfVar25[0xe] = fVar13 * fStack_2d0 + fVar9 * fStack_2c0 + fVar17 * fStack_2b0 + fVar21 * 1.0;
    pfVar25[0xf] = fVar14 * fStack_2d0 + fVar10 * fStack_2c0 + fVar18 * fStack_2b0 + fVar22 * 1.0;
    pfVar25 = pfVar25 + 0x10;
    lVar33 = lVar33 + -1;
  } while (lVar33 != 0);
  lVar24 = *(longlong *)(param_1 + 0x48);
  fStack_2cc = fStack_2d0;
  fStack_2bc = fStack_2c0;
  fStack_2ac = fStack_2b0;
  if (*(char *)(lVar24 + 0x28) == '\0') {
    FUN_1419f3850(lVar24);
  }
  uVar4 = *(undefined8 *)(lVar24 + 0x58);
  uVar6 = (uint)*(ushort *)(param_1 + 0x154);
  if (0x17f < *(ushort *)(param_1 + 0x154)) {
    uVar6 = 0x180;
  }
  uVar23 = (ulonglong)uVar6;
  if (uVar6 != 0) {
    uVar2 = *(ushort *)(param_1 + 0x152);
    uVar3 = *(ushort *)(param_1 + 0x150);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar26 = (longlong)_Dst + uVar23;
    if (*(ulonglong *)(param_2 + 0x38) < uVar26) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar6 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar26 = (longlong)_Dst + uVar23;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar26;
    _guard_xfg_dispatch_icall_nop(_Dst,local_268,uVar23);
    puVar28 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar27 = puVar28 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar27) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar28 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar27 = puVar28 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar27;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar28;
    *(undefined8 **)(param_2 + 8) = puVar28 + 1;
    puVar28[1] = 0;
    *puVar28 = &PTR_LAB_144e147b0;
    puVar28[2] = uVar4;
    puVar28[3] = _Dst;
    *(uint *)(puVar28 + 4) = (uint)uVar3;
    *(uint *)((longlong)puVar28 + 0x24) = (uint)uVar2;
    *(uint *)(puVar28 + 5) = uVar6;
  }
  return;
}



// FUNCTION 141dae470 FUN_141dae470 body=1259 status=ok
// SIG undefined FUN_141dae470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141dae470(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  float *pfVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
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
  float *pfVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  float *pfVar26;
  undefined8 *puVar27;
  void *_Dst;
  ulonglong _Size;
  longlong lVar28;
  undefined1 auStack_388 [32];
  longlong local_368;
  longlong *local_360;
  longlong local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined8 local_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_278 [96];
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_388;
  local_348 = 0;
  uVar4 = *(undefined8 *)(param_6 + 0x20);
  (**(code **)(*param_3 + 0x40))(param_3,*(undefined4 *)(param_4 + 0x1a38),&local_328,&local_348);
  lVar5 = *(longlong *)(param_1 + 0x48);
  local_338 = local_348;
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  local_358 = param_6 + 0x18;
  local_368 = local_338;
  local_360 = (longlong *)param_4;
  local_350 = uVar4;
  FUN_141aa7ef0(param_1,param_2,*(undefined8 *)(lVar5 + 0x50),param_3);
  lVar5 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  local_368 = param_5;
  local_360 = param_3;
  FUN_141d83170(param_1 + 0x150,param_2,*(undefined8 *)(lVar5 + 0x50),param_4);
  if (*(short *)(param_1 + 0x166) != 0) {
    fStack_2c4 = *(float *)(param_4 + 0x8d8);
    pfVar23 = local_278;
    fStack_2d4 = *(float *)(param_4 + 0x8d4);
    fStack_2c0 = -fStack_2c4;
    lVar5 = *(longlong *)(param_5 + 0x598);
    fStack_2d0 = -fStack_2d4;
    pfVar26 = (float *)(lVar5 + 0x20);
    fStack_2e4 = *(float *)(param_4 + 0x8d0);
    lVar28 = 6;
    fStack_2e0 = -fStack_2e4;
    local_338._0_4_ = 0x3f800000;
    local_338._4_4_ = 0x3f800000;
    uStack_330 = 0x3f800000;
    uStack_32c = 0x3f800000;
    local_328 = 0;
    uStack_324 = 0;
    uStack_320 = 0;
    uStack_31c = 0;
    local_348 = 0;
    uStack_340 = 0;
    uStack_33c = 0;
    local_308 = 0;
    uStack_304 = 0;
    uStack_300 = 0;
    uStack_2fc = 0;
    local_318 = 0;
    uStack_314 = 0;
    uStack_310 = 0;
    uStack_30c = 0;
    local_2f8 = 0x3f800000;
    uStack_2f4 = 0x3f800000;
    uStack_2f0 = 0x3f800000;
    uStack_2ec = 0x3f800000;
    local_2d8 = -fStack_2d4;
    fStack_2d4 = -fStack_2d4;
    local_2e8 = -fStack_2e4;
    fStack_2e4 = -fStack_2e4;
    local_2c8 = -fStack_2c4;
    fStack_2c4 = -fStack_2c4;
    do {
      fVar7 = pfVar26[-4];
      fVar8 = pfVar26[-3];
      fVar9 = pfVar26[-2];
      fVar10 = pfVar26[-1];
      pfVar1 = (float *)((lVar5 - (longlong)local_278) + (longlong)pfVar23);
      fVar11 = *pfVar1;
      fVar12 = pfVar1[1];
      fVar13 = pfVar1[2];
      fVar14 = pfVar1[3];
      fVar15 = *pfVar26;
      fVar16 = pfVar26[1];
      fVar17 = pfVar26[2];
      fVar18 = pfVar26[3];
      fVar19 = pfVar26[4];
      fVar20 = pfVar26[5];
      fVar21 = pfVar26[6];
      fVar22 = pfVar26[7];
      pfVar26 = pfVar26 + 0x10;
      *pfVar23 = fVar11 * 1.0 + fVar7 * 0.0 + fVar15 * 0.0 + fVar19 * 0.0;
      pfVar23[1] = fVar12 * 1.0 + fVar8 * 0.0 + fVar16 * 0.0 + fVar20 * 0.0;
      pfVar23[2] = fVar13 * 1.0 + fVar9 * 0.0 + fVar17 * 0.0 + fVar21 * 0.0;
      pfVar23[3] = fVar14 * 1.0 + fVar10 * 0.0 + fVar18 * 0.0 + fVar22 * 0.0;
      pfVar23[4] = fVar11 * 0.0 + fVar7 * 1.0 + fVar15 * 0.0 + fVar19 * 0.0;
      pfVar23[5] = fVar12 * 0.0 + fVar8 * 1.0 + fVar16 * 0.0 + fVar20 * 0.0;
      pfVar23[6] = fVar13 * 0.0 + fVar9 * 1.0 + fVar17 * 0.0 + fVar21 * 0.0;
      pfVar23[7] = fVar14 * 0.0 + fVar10 * 1.0 + fVar18 * 0.0 + fVar22 * 0.0;
      pfVar23[8] = fVar11 * 0.0 + fVar7 * 0.0 + fVar15 * 1.0 + fVar19 * 0.0;
      pfVar23[9] = fVar12 * 0.0 + fVar8 * 0.0 + fVar16 * 1.0 + fVar20 * 0.0;
      pfVar23[10] = fVar13 * 0.0 + fVar9 * 0.0 + fVar17 * 1.0 + fVar21 * 0.0;
      pfVar23[0xb] = fVar14 * 0.0 + fVar10 * 0.0 + fVar18 * 1.0 + fVar22 * 0.0;
      pfVar23[0xc] = fVar11 * local_2e8 + fVar7 * local_2d8 + fVar15 * local_2c8 + fVar19 * 1.0;
      pfVar23[0xd] = fVar12 * fStack_2e4 + fVar8 * fStack_2d4 + fVar16 * fStack_2c4 + fVar20 * 1.0;
      pfVar23[0xe] = fVar13 * fStack_2e0 + fVar9 * fStack_2d0 + fVar17 * fStack_2c0 + fVar21 * 1.0;
      pfVar23[0xf] = fVar14 * fStack_2e0 + fVar10 * fStack_2d0 + fVar18 * fStack_2c0 + fVar22 * 1.0;
      pfVar23 = pfVar23 + 0x10;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    lVar5 = *(longlong *)(param_1 + 0x48);
    fStack_2dc = fStack_2e0;
    fStack_2cc = fStack_2d0;
    fStack_2bc = fStack_2c0;
    if (*(char *)(lVar5 + 0x28) == '\0') {
      FUN_1419f3850(lVar5);
    }
    uVar4 = *(undefined8 *)(lVar5 + 0x50);
    uVar6 = (uint)*(ushort *)(param_1 + 0x166);
    if (0x17f < *(ushort *)(param_1 + 0x166)) {
      uVar6 = 0x180;
    }
    _Size = (ulonglong)uVar6;
    if (uVar6 != 0) {
      uVar2 = *(ushort *)(param_1 + 0x164);
      uVar3 = *(ushort *)(param_1 + 0x162);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar24 = _Size + (longlong)_Dst;
      if (*(ulonglong *)(param_2 + 0x38) < uVar24) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar6 + 0x10);
        _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
        uVar24 = (longlong)_Dst + _Size;
      }
      *(ulonglong *)(param_2 + 0x30) = uVar24;
      _guard_xfg_dispatch_icall_nop(_Dst,local_278,_Size);
      puVar27 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar25 = puVar27 + 6;
      if (*(undefined8 **)(param_2 + 0x38) < puVar25) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
        puVar27 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar25 = puVar27 + 6;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar25;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar27;
      *(undefined8 **)(param_2 + 8) = puVar27 + 1;
      puVar27[1] = 0;
      *puVar27 = &PTR_LAB_144e34a28;
      puVar27[2] = uVar4;
      puVar27[3] = _Dst;
      *(uint *)(puVar27 + 4) = (uint)uVar3;
      *(uint *)((longlong)puVar27 + 0x24) = (uint)uVar2;
      *(uint *)(puVar27 + 5) = uVar6;
    }
  }
  return;
}



// FUNCTION 141dae960 FUN_141dae960 body=1227 status=ok
// SIG undefined FUN_141dae960(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141dae960(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,longlong param_6,longlong param_7)

{
  float *pfVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
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
  float *pfVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  float *pfVar26;
  undefined8 *puVar27;
  void *_Dst;
  ulonglong _Size;
  longlong lVar28;
  undefined1 auStack_388 [32];
  longlong local_368;
  longlong local_360;
  longlong local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_278 [96];
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_388;
  lVar4 = *(longlong *)(param_1 + 0x48);
  local_348 = *(undefined8 *)(param_7 + 0x20);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  local_358 = param_7 + 0x18;
  local_350 = local_348;
  local_360 = param_5;
  local_368 = param_4;
  FUN_141aa8c40(param_1,param_2,*(undefined8 *)(lVar4 + 0x38),param_3);
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  local_368 = param_6;
  local_360 = param_3;
  FUN_141d838d0(param_1 + 0x150,param_2,*(undefined8 *)(lVar4 + 0x38),param_5);
  if (*(short *)(param_1 + 0x166) != 0) {
    fStack_2c4 = *(float *)(param_5 + 0x8d8);
    pfVar23 = local_278;
    fStack_2d4 = *(float *)(param_5 + 0x8d4);
    fStack_2c0 = -fStack_2c4;
    lVar4 = *(longlong *)(param_6 + 0x598);
    fStack_2d0 = -fStack_2d4;
    pfVar26 = (float *)(lVar4 + 0x20);
    fStack_2e4 = *(float *)(param_5 + 0x8d0);
    lVar28 = 6;
    fStack_2e0 = -fStack_2e4;
    local_338 = 0x3f800000;
    uStack_334 = 0x3f800000;
    uStack_330 = 0x3f800000;
    uStack_32c = 0x3f800000;
    local_348 = 0;
    uStack_340 = 0;
    uStack_33c = 0;
    local_328 = 0;
    uStack_324 = 0;
    uStack_320 = 0;
    uStack_31c = 0;
    local_308 = 0;
    uStack_304 = 0;
    uStack_300 = 0;
    uStack_2fc = 0;
    local_318 = 0;
    uStack_314 = 0;
    uStack_310 = 0;
    uStack_30c = 0;
    local_2f8 = 0x3f800000;
    uStack_2f4 = 0x3f800000;
    uStack_2f0 = 0x3f800000;
    uStack_2ec = 0x3f800000;
    local_2d8 = -fStack_2d4;
    fStack_2d4 = -fStack_2d4;
    local_2e8 = -fStack_2e4;
    fStack_2e4 = -fStack_2e4;
    local_2c8 = -fStack_2c4;
    fStack_2c4 = -fStack_2c4;
    do {
      fVar7 = pfVar26[-4];
      fVar8 = pfVar26[-3];
      fVar9 = pfVar26[-2];
      fVar10 = pfVar26[-1];
      pfVar1 = (float *)((lVar4 - (longlong)local_278) + (longlong)pfVar23);
      fVar11 = *pfVar1;
      fVar12 = pfVar1[1];
      fVar13 = pfVar1[2];
      fVar14 = pfVar1[3];
      fVar15 = *pfVar26;
      fVar16 = pfVar26[1];
      fVar17 = pfVar26[2];
      fVar18 = pfVar26[3];
      fVar19 = pfVar26[4];
      fVar20 = pfVar26[5];
      fVar21 = pfVar26[6];
      fVar22 = pfVar26[7];
      pfVar26 = pfVar26 + 0x10;
      *pfVar23 = fVar11 * 1.0 + fVar7 * 0.0 + fVar15 * 0.0 + fVar19 * 0.0;
      pfVar23[1] = fVar12 * 1.0 + fVar8 * 0.0 + fVar16 * 0.0 + fVar20 * 0.0;
      pfVar23[2] = fVar13 * 1.0 + fVar9 * 0.0 + fVar17 * 0.0 + fVar21 * 0.0;
      pfVar23[3] = fVar14 * 1.0 + fVar10 * 0.0 + fVar18 * 0.0 + fVar22 * 0.0;
      pfVar23[4] = fVar11 * 0.0 + fVar7 * 1.0 + fVar15 * 0.0 + fVar19 * 0.0;
      pfVar23[5] = fVar12 * 0.0 + fVar8 * 1.0 + fVar16 * 0.0 + fVar20 * 0.0;
      pfVar23[6] = fVar13 * 0.0 + fVar9 * 1.0 + fVar17 * 0.0 + fVar21 * 0.0;
      pfVar23[7] = fVar14 * 0.0 + fVar10 * 1.0 + fVar18 * 0.0 + fVar22 * 0.0;
      pfVar23[8] = fVar11 * 0.0 + fVar7 * 0.0 + fVar15 * 1.0 + fVar19 * 0.0;
      pfVar23[9] = fVar12 * 0.0 + fVar8 * 0.0 + fVar16 * 1.0 + fVar20 * 0.0;
      pfVar23[10] = fVar13 * 0.0 + fVar9 * 0.0 + fVar17 * 1.0 + fVar21 * 0.0;
      pfVar23[0xb] = fVar14 * 0.0 + fVar10 * 0.0 + fVar18 * 1.0 + fVar22 * 0.0;
      pfVar23[0xc] = fVar11 * local_2e8 + fVar7 * local_2d8 + fVar15 * local_2c8 + fVar19 * 1.0;
      pfVar23[0xd] = fVar12 * fStack_2e4 + fVar8 * fStack_2d4 + fVar16 * fStack_2c4 + fVar20 * 1.0;
      pfVar23[0xe] = fVar13 * fStack_2e0 + fVar9 * fStack_2d0 + fVar17 * fStack_2c0 + fVar21 * 1.0;
      pfVar23[0xf] = fVar14 * fStack_2e0 + fVar10 * fStack_2d0 + fVar18 * fStack_2c0 + fVar22 * 1.0;
      pfVar23 = pfVar23 + 0x10;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    lVar4 = *(longlong *)(param_1 + 0x48);
    fStack_2dc = fStack_2e0;
    fStack_2cc = fStack_2d0;
    fStack_2bc = fStack_2c0;
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    uVar5 = *(undefined8 *)(lVar4 + 0x38);
    uVar6 = (uint)*(ushort *)(param_1 + 0x166);
    if (0x17f < *(ushort *)(param_1 + 0x166)) {
      uVar6 = 0x180;
    }
    _Size = (ulonglong)uVar6;
    if (uVar6 != 0) {
      uVar2 = *(ushort *)(param_1 + 0x164);
      uVar3 = *(ushort *)(param_1 + 0x162);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar24 = _Size + (longlong)_Dst;
      if (*(ulonglong *)(param_2 + 0x38) < uVar24) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar6 + 0x10);
        _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
        uVar24 = (longlong)_Dst + _Size;
      }
      *(ulonglong *)(param_2 + 0x30) = uVar24;
      _guard_xfg_dispatch_icall_nop(_Dst,local_278,_Size);
      puVar27 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar25 = puVar27 + 6;
      if (*(undefined8 **)(param_2 + 0x38) < puVar25) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
        puVar27 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar25 = puVar27 + 6;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar25;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar27;
      *(undefined8 **)(param_2 + 8) = puVar27 + 1;
      puVar27[1] = 0;
      *puVar27 = &PTR_LAB_143f4d340;
      puVar27[2] = uVar5;
      puVar27[3] = _Dst;
      *(uint *)(puVar27 + 4) = (uint)uVar3;
      *(uint *)((longlong)puVar27 + 0x24) = (uint)uVar2;
      *(uint *)(puVar27 + 5) = uVar6;
    }
  }
  return;
}



// FUNCTION 141daee30 SetSharedState body=288 status=ok
// SIG undefined SetSharedState(void)

void FShadowDepthDrawingPolicy<1>::SetSharedState
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
               undefined1 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_5 + 8);
  FUN_141dae960(*(undefined8 *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18),param_4,uVar1,param_3);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_141dadcb0(*(longlong *)(param_1 + 0x40),param_2,param_4,uVar1);
  }
  if ((*(longlong *)(param_1 + 0x50) != 0) && (*(longlong *)(param_1 + 0x58) != 0)) {
    FUN_141ad6a40(*(longlong *)(param_1 + 0x50),param_2,*(undefined8 *)(param_1 + 0x10),param_4,
                  param_3 + 0x18,*(undefined8 *)(param_3 + 0x20));
    FUN_141dae470(*(undefined8 *)(param_1 + 0x58),param_2,*(undefined8 *)(param_1 + 0x10),param_4,
                  uVar1,param_3);
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_141dad690(*(longlong *)(param_1 + 0x48),param_2,*(undefined8 *)(param_1 + 0x10),
                  *(undefined8 *)(param_1 + 0x18),param_4,uVar1,param_3);
  }
  if ((*(byte *)(param_1 + 100) & 8) == 0) {
    FUN_141b45c10(param_1,param_2,param_3,param_4,*param_5);
  }
  else {
    FUN_141a0cf10(*(undefined8 *)(param_1 + 8));
  }
  return;
}



// FUNCTION 141daef50 FUN_141daef50 body=451 status=ok
// SIG undefined FUN_141daef50(void)

void FUN_141daef50(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  
  puVar6 = param_5;
  lVar1 = *(longlong *)(param_5 + 8);
  FUN_141dae960(*(undefined8 *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18),param_4,lVar1,param_3);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_141dadcb0(*(longlong *)(param_1 + 0x40),param_2,param_4,lVar1);
  }
  if ((*(longlong *)(param_1 + 0x50) != 0) && (*(longlong *)(param_1 + 0x58) != 0)) {
    FUN_141ad6a40(*(longlong *)(param_1 + 0x50),param_2,*(undefined8 *)(param_1 + 0x10),param_4,
                  param_3 + 0x18,*(undefined8 *)(param_3 + 0x20));
    FUN_141dae470(*(undefined8 *)(param_1 + 0x58),param_2,*(undefined8 *)(param_1 + 0x10),param_4,
                  lVar1,param_3);
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (lVar2 != 0) {
    param_5 = *(undefined1 **)(param_1 + 0x18);
    lVar3 = *(longlong *)(lVar2 + 0x48);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    if (*(char *)(lVar3 + 0x28) == '\0') {
      FUN_1419f3850(lVar3);
    }
    uVar5 = *(undefined8 *)(lVar3 + 0x40);
    uVar7 = (ulonglong)param_5;
    FUN_141aa87d0(lVar2,param_2,uVar5,uVar4,param_5,param_4,param_3 + 0x18,
                  *(undefined8 *)(param_3 + 0x20));
    param_5 = (undefined1 *)CONCAT44(*(undefined4 *)(lVar1 + 0x150),*(undefined4 *)(lVar1 + 0x6b8));
    SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
              (param_2,uVar5,lVar2 + 0x150,&param_5,uVar7 & 0xffffffff00000000);
  }
  if ((*(byte *)(param_1 + 100) & 8) != 0) {
    FUN_141a0cf10(*(undefined8 *)(param_1 + 8));
    return;
  }
  param_5 = (undefined1 *)CONCAT71(param_5._1_7_,*puVar6);
  FUN_141b45c10(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 141daf120 SetStateForDepth body=324 status=ok
// SIG undefined SetStateForDepth(void)

void FProjectedShadowInfo::SetStateForDepth
               (longlong param_1,longlong param_2,int param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  iVar1 = *(int *)(param_1 + 0x540);
  iVar2 = *(int *)(param_1 + 0x530);
  iVar3 = *(int *)(param_1 + 0x534);
  iVar4 = *(int *)(param_1 + 0x53c);
  iVar5 = *(int *)(param_1 + 0x538);
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar8 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar6;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar8;
  *(undefined8 **)(param_2 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_143f59420;
  *(int *)(puVar8 + 2) = iVar2 + iVar1;
  *(int *)((longlong)puVar8 + 0x14) = iVar3 + iVar1;
  *(undefined4 *)(puVar8 + 3) = 0;
  *(int *)((longlong)puVar8 + 0x1c) = iVar5 + iVar2 + iVar1;
  *(int *)(puVar8 + 4) = iVar4 + iVar3 + iVar1;
  *(undefined4 *)((longlong)puVar8 + 0x24) = 0x3f800000;
  if (param_3 == 2) {
    uVar7 = FUN_141d9bc20();
  }
  else if (param_3 == 1) {
    uVar7 = FUN_141d9bae0();
  }
  else if (((char)*(uint *)(param_1 + 0x560) < '\0') && ((*(uint *)(param_1 + 0x560) & 0x20) == 0))
  {
    uVar7 = FUN_1404a0ce0();
  }
  else {
    uVar7 = FUN_141b08790();
  }
  *param_4 = uVar7;
  if (param_3 - 1U < 2) {
    uVar7 = FUN_141d9bfe0();
  }
  else {
    uVar7 = FUN_141d9bea0();
  }
  param_4[1] = uVar7;
  *(undefined4 *)(param_4 + 5) = 0;
  return;
}



// FUNCTION 141daf270 SetStateOnCommandList body=75 status=ok
// SIG undefined SetStateOnCommandList(void)

void FShadowParallelCommandListSet::SetStateOnCommandList(longlong param_1,undefined8 param_2)

{
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  (**(code **)(param_1 + 0xc0))(*(undefined8 *)(param_1 + 200),param_2,local_res8);
  FProjectedShadowInfo::SetStateForDepth
            (*(undefined8 *)(param_1 + 0xb8),param_2,*(undefined4 *)(param_1 + 0xd0),param_1 + 0x18)
  ;
  return;
}



// FUNCTION 141daf2c0 FUN_141daf2c0 body=368 status=ok
// SIG undefined FUN_141daf2c0(void)

void FUN_141daf2c0(longlong param_1,longlong param_2,int param_3,char param_4,char param_5,
                  byte param_6)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  longlong lVar9;
  
  lVar9 = 0;
  iVar1 = (&DAT_1464c9c48)[param_3];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146aa25c8) && (_Init_thread_header(&DAT_146aa25c8), DAT_146aa25c8 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))();
    lVar5 = lVar9;
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_146aa25c0 = lVar5;
    _Init_thread_footer(&DAT_146aa25c8);
  }
  lVar5 = DAT_146aa25c0;
  if ((iVar1 - 8U < 3) || (iVar1 == 0x18)) {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar2 == '\0') &&
       ((DAT_1468c21ae != '\0' && (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)))) {
      lVar9 = 4;
    }
    if (*(int *)(lVar9 + lVar5) == 0) {
      bVar8 = 1;
      goto LAB_141daf372;
    }
  }
  bVar8 = 0;
LAB_141daf372:
  if ((*(char *)(param_2 + 0x1205) == '\0') && (param_4 == '\0' && param_5 == '\0')) {
    uVar6 = *(uint *)(param_1 + 0x2c) & 0xfffffffe;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x2c) | 1;
  }
  *(uint *)(param_1 + 0x2c) = uVar6;
  uVar7 = uVar6 | 8;
  if (*(byte *)(param_2 + 0x11b4) == (bVar8 ^ param_6)) {
    uVar7 = uVar6 & 0xfffffff7;
  }
  *(uint *)(param_1 + 0x2c) = uVar7;
  return;
}



// FUNCTION 141daf430 FUN_141daf430 body=3962 status=ok
// SIG undefined FUN_141daf430(void)

void FUN_141daf430(longlong param_1,longlong param_2,float *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  float *pfVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
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
  undefined1 auVar23 [16];
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
  float local_148;
  float fStack_144;
  float fStack_104;
  
  *param_4 = 1;
  if ((((*(uint *)(param_1 + 0x560) & 0x40) == 0) || (*(int *)(param_1 + 0x524) < 0)) ||
     ((*(uint *)(param_1 + 0x560) & 0x10) == 0)) {
    fVar24 = param_3[0x24];
    param_3[0x24] = (float)((int)fVar24 + 8);
    if ((int)param_3[0x25] < (int)fVar24 + 8) {
      TArray<FVector4,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(param_3);
    }
    uVar3 = 0;
    fVar24 = *(float *)(param_2 + 0x8d0) - *(float *)(param_1 + 0x44);
    fVar27 = *(float *)(param_2 + 0x8d4) - *(float *)(param_1 + 0x48);
    fVar28 = *(float *)(param_2 + 0x8d8) - *(float *)(param_1 + 0x4c);
    uVar5 = uVar3;
    uVar7 = uVar3;
    uVar6 = uVar3;
    do {
      if (uVar7 == 0) {
        fVar20 = 1.0;
      }
      else {
        fVar20 = 0.0;
      }
      fVar21 = -1.0;
      fVar19 = fVar21;
      if (uVar6 == 0) {
        fVar19 = 1.0;
      }
      fVar8 = fVar21;
      if (uVar5 == 0) {
        fVar8 = 1.0;
      }
      sVar4 = (short)uVar5 * 2 + (short)uVar6;
      fVar9 = *(float *)(param_1 + 0x144);
      fVar10 = *(float *)(param_1 + 0x148);
      pfVar2 = *(float **)(param_3 + 0x20);
      if (*(float **)(param_3 + 0x20) == (float *)0x0) {
        pfVar2 = param_3;
      }
      fVar13 = *(float *)(param_1 + 0x134);
      fVar14 = *(float *)(param_1 + 0x138);
      fVar15 = *(float *)(param_1 + 0x114);
      fVar16 = *(float *)(param_1 + 0x118);
      fVar17 = *(float *)(param_1 + 0x124);
      fVar12 = *(float *)(param_1 + 0x128);
      fVar11 = 1.0 / (*(float *)(param_1 + 0x14c) * 1.0 + fVar20 * *(float *)(param_1 + 0x13c) +
                     fVar8 * *(float *)(param_1 + 0x11c) + fVar19 * *(float *)(param_1 + 300));
      pfVar2 = pfVar2 + (ulonglong)(ushort)(sVar4 * 2 + (short)uVar7) * 4;
      *pfVar2 = fVar11 * (*(float *)(param_1 + 0x140) * 1.0 + fVar20 * *(float *)(param_1 + 0x130) +
                         fVar8 * *(float *)(param_1 + 0x110) + fVar19 * *(float *)(param_1 + 0x120))
                + fVar24;
      pfVar2[1] = fVar11 * (fVar9 * 1.0 + fVar20 * fVar13 + fVar8 * fVar15 + fVar19 * fVar17) +
                  fVar27;
      pfVar2[2] = fVar11 * (fVar10 * 1.0 + fVar20 * fVar14 + fVar8 * fVar16 + fVar19 * fVar12) +
                  fVar28;
      pfVar2[3] = 0.0;
      if (uVar7 == 0) {
        fVar20 = 1.0;
      }
      else {
        fVar20 = 0.0;
      }
      fVar19 = fVar21;
      if (uVar6 == 0) {
        fVar19 = 1.0;
      }
      if (uVar5 == 0xffffffff) {
        fVar21 = 1.0;
      }
      fVar8 = *(float *)(param_1 + 0x144);
      fVar9 = *(float *)(param_1 + 0x148);
      fVar10 = *(float *)(param_1 + 0x134);
      fVar13 = *(float *)(param_1 + 0x138);
      pfVar2 = *(float **)(param_3 + 0x20);
      if (*(float **)(param_3 + 0x20) == (float *)0x0) {
        pfVar2 = param_3;
      }
      uVar5 = uVar5 + 2;
      fVar14 = *(float *)(param_1 + 0x114);
      fVar15 = *(float *)(param_1 + 0x118);
      fVar16 = *(float *)(param_1 + 0x124);
      fVar17 = *(float *)(param_1 + 0x128);
      fVar12 = 1.0 / (*(float *)(param_1 + 0x14c) * 1.0 + fVar20 * *(float *)(param_1 + 0x13c) +
                     fVar21 * *(float *)(param_1 + 0x11c) + fVar19 * *(float *)(param_1 + 300));
      pfVar2 = pfVar2 + (ulonglong)(ushort)((sVar4 + 2) * 2 + (short)uVar7) * 4;
      *pfVar2 = fVar12 * (*(float *)(param_1 + 0x140) * 1.0 + fVar20 * *(float *)(param_1 + 0x130) +
                         fVar21 * *(float *)(param_1 + 0x110) + fVar19 * *(float *)(param_1 + 0x120)
                         ) + fVar24;
      pfVar2[1] = fVar12 * (fVar8 * 1.0 + fVar20 * fVar10 + fVar21 * fVar14 + fVar19 * fVar16) +
                  fVar27;
      pfVar2[2] = fVar12 * (fVar9 * 1.0 + fVar20 * fVar13 + fVar21 * fVar15 + fVar19 * fVar17) +
                  fVar28;
      pfVar2[3] = 0.0;
    } while (((uVar5 < 2) || (uVar6 = uVar6 + 1, uVar5 = uVar3, uVar6 < 2)) ||
            (uVar7 = uVar7 + 1, uVar6 = uVar3, uVar7 < 2));
    fVar28 = (float)*(undefined8 *)(param_2 + 0x8d0);
    fVar24 = *(float *)(param_2 + 0x8e4);
    fStack_104 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x8d0) >> 0x20);
    fVar27 = *(float *)(param_2 + 0x8d8);
    pfVar2 = *(float **)(param_3 + 0x20);
    if (*(float **)(param_3 + 0x20) == (float *)0x0) {
      pfVar2 = param_3;
    }
    fVar13 = pfVar2[6] - fVar27;
    fVar49 = pfVar2[4] - fVar28;
    fVar22 = pfVar2[0x14] - fVar28;
    fVar48 = pfVar2[0xc] - fVar28;
    fVar36 = pfVar2[0x10] - fVar28;
    fVar38 = pfVar2[5] - fStack_104;
    fVar29 = pfVar2[0x15] - fStack_104;
    fVar43 = pfVar2[0x16] - fVar27;
    fVar25 = pfVar2[0x12] - fVar27;
    fVar14 = pfVar2[0xd] - fStack_104;
    fVar15 = pfVar2[0xe] - fVar27;
    fVar16 = *pfVar2 - fVar28;
    fVar17 = pfVar2[1] - fStack_104;
    fVar12 = pfVar2[2] - fVar27;
    fVar11 = pfVar2[0x11] - fStack_104;
    fVar18 = pfVar2[8] - fVar28;
    fVar9 = pfVar2[9] - fStack_104;
    fVar8 = pfVar2[10] - fVar27;
    fVar19 = (pfVar2[0x1d] - fStack_104) - fVar38;
    fVar20 = (pfVar2[0x1e] - fVar27) - fVar13;
    fVar21 = (pfVar2[0x1c] - fVar28) - fVar49;
    fVar44 = (fVar29 - fVar38) * fVar20 - (fVar43 - fVar13) * fVar19;
    fVar30 = (fVar43 - fVar13) * fVar21 - (fVar22 - fVar49) * fVar20;
    fVar39 = (fVar22 - fVar49) * fVar19 - (fVar29 - fVar38) * fVar21;
    fVar10 = fVar30 * fVar30 + fVar44 * fVar44 + fVar39 * fVar39;
    fVar20 = fVar30;
    fVar19 = fVar39;
    fVar21 = fVar44;
    if ((fVar10 != 1.0) &&
       (fVar20 = DAT_1468b5d94, fVar19 = DAT_1468b5d98, fVar21 = DAT_1468b5d90, 1e-08 <= fVar10)) {
      auVar23 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
      fVar21 = auVar23._0_4_;
      fVar21 = fVar21 + fVar21 * (0.5 - fVar10 * 0.5 * fVar21 * fVar21);
      fVar21 = fVar21 + fVar21 * (0.5 - fVar10 * 0.5 * fVar21 * fVar21);
      fVar20 = fVar30 * fVar21;
      fVar19 = fVar39 * fVar21;
      fVar21 = fVar44 * fVar21;
    }
    local_148 = (float)*(undefined8 *)(param_2 + 0x8dc);
    fStack_144 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x8dc) >> 0x20);
    fVar31 = (fVar17 - fVar9) * (fVar13 - fVar8) - (fVar12 - fVar8) * (fVar38 - fVar9);
    fVar40 = (fVar12 - fVar8) * (fVar49 - fVar18) - (fVar16 - fVar18) * (fVar13 - fVar8);
    fVar45 = (fVar16 - fVar18) * (fVar38 - fVar9) - (fVar17 - fVar9) * (fVar49 - fVar18);
    fVar44 = fVar40 * fVar40 + fVar31 * fVar31 + fVar45 * fVar45;
    fVar10 = fVar31;
    fVar30 = fVar40;
    fVar39 = fVar45;
    if ((fVar44 != 1.0) &&
       (fVar10 = DAT_1468b5d90, fVar30 = DAT_1468b5d94, fVar39 = DAT_1468b5d98, 1e-08 <= fVar44)) {
      auVar23 = rsqrtss(ZEXT416((uint)fVar44),ZEXT416((uint)fVar44));
      fVar39 = auVar23._0_4_;
      fVar39 = fVar39 + fVar39 * (0.5 - fVar44 * 0.5 * fVar39 * fVar39);
      fVar39 = fVar39 + fVar39 * (0.5 - fVar44 * 0.5 * fVar39 * fVar39);
      fVar10 = fVar39 * fVar31;
      fVar30 = fVar39 * fVar40;
      fVar39 = fVar39 * fVar45;
    }
    fVar46 = (fVar17 - fVar11) * (fVar8 - fVar25) - (fVar12 - fVar25) * (fVar9 - fVar11);
    fVar32 = (fVar12 - fVar25) * (fVar18 - fVar36) - (fVar16 - fVar36) * (fVar8 - fVar25);
    fVar41 = (fVar16 - fVar36) * (fVar9 - fVar11) - (fVar17 - fVar11) * (fVar18 - fVar36);
    fVar45 = fVar32 * fVar32 + fVar46 * fVar46 + fVar41 * fVar41;
    fVar44 = fVar32;
    fVar31 = fVar41;
    fVar40 = fVar46;
    if ((fVar45 != 1.0) &&
       (fVar44 = DAT_1468b5d94, fVar31 = DAT_1468b5d98, fVar40 = DAT_1468b5d90, 1e-08 <= fVar45)) {
      auVar23 = rsqrtss(ZEXT416((uint)fVar45),ZEXT416((uint)fVar45));
      fVar40 = auVar23._0_4_;
      fVar40 = fVar40 + fVar40 * (0.5 - fVar45 * 0.5 * fVar40 * fVar40);
      fVar40 = fVar40 + fVar40 * (0.5 - fVar45 * 0.5 * fVar40 * fVar40);
      fVar44 = fVar40 * fVar32;
      fVar31 = fVar40 * fVar41;
      fVar40 = fVar40 * fVar46;
    }
    fVar32 = (pfVar2[0x19] - fStack_104) - fVar29;
    fVar41 = (pfVar2[0x18] - fVar28) - fVar22;
    fVar45 = (pfVar2[0x1a] - fVar27) - fVar43;
    fVar47 = (fVar11 - fVar29) * fVar45 - (fVar25 - fVar43) * fVar32;
    fVar42 = (fVar36 - fVar22) * fVar32 - (fVar11 - fVar29) * fVar41;
    fVar33 = (fVar25 - fVar43) * fVar41 - (fVar36 - fVar22) * fVar45;
    fVar46 = fVar33 * fVar33 + fVar47 * fVar47 + fVar42 * fVar42;
    fVar45 = fVar33;
    fVar32 = fVar42;
    fVar41 = fVar47;
    if ((fVar46 != 1.0) &&
       (fVar45 = DAT_1468b5d94, fVar32 = DAT_1468b5d98, fVar41 = DAT_1468b5d90, 1e-08 <= fVar46)) {
      auVar23 = rsqrtss(ZEXT416((uint)fVar46),ZEXT416((uint)fVar46));
      fVar41 = auVar23._0_4_;
      fVar41 = fVar41 + fVar41 * (0.5 - fVar46 * 0.5 * fVar41 * fVar41);
      fVar41 = fVar41 + fVar41 * (0.5 - fVar46 * 0.5 * fVar41 * fVar41);
      fVar45 = fVar41 * fVar33;
      fVar32 = fVar41 * fVar42;
      fVar41 = fVar41 * fVar47;
    }
    fVar34 = (fVar11 - fVar17) * (fVar43 - fVar12) - (fVar25 - fVar12) * (fVar29 - fVar17);
    fVar37 = (fVar36 - fVar16) * (fVar29 - fVar17) - (fVar11 - fVar17) * (fVar22 - fVar16);
    fVar26 = (fVar25 - fVar12) * (fVar22 - fVar16) - (fVar36 - fVar16) * (fVar43 - fVar12);
    fVar47 = fVar26 * fVar26 + fVar34 * fVar34 + fVar37 * fVar37;
    fVar46 = fVar26;
    fVar33 = fVar34;
    fVar42 = fVar37;
    if ((fVar47 != 1.0) &&
       (fVar46 = DAT_1468b5d94, fVar33 = DAT_1468b5d90, fVar42 = DAT_1468b5d98, 1e-08 <= fVar47)) {
      auVar23 = rsqrtss(ZEXT416((uint)fVar47),ZEXT416((uint)fVar47));
      fVar42 = auVar23._0_4_;
      fVar42 = fVar42 + fVar42 * (0.5 - fVar47 * 0.5 * fVar42 * fVar42);
      fVar42 = fVar42 + fVar42 * (0.5 - fVar47 * 0.5 * fVar42 * fVar42);
      fVar46 = fVar42 * fVar26;
      fVar33 = fVar42 * fVar34;
      fVar42 = fVar42 * fVar37;
    }
    fVar47 = (pfVar2[0x1e] - fVar27) - fVar15;
    fVar26 = (pfVar2[0x1c] - fVar28) - fVar48;
    fVar28 = (pfVar2[0x18] - fVar28) - fVar48;
    fVar35 = (pfVar2[0x19] - fStack_104) - fVar14;
    fVar37 = (pfVar2[0x1a] - fVar27) - fVar15;
    fVar27 = (pfVar2[0x1d] - fStack_104) - fVar14;
    fVar34 = fVar27 * fVar37 - fVar47 * fVar35;
    fVar37 = fVar47 * fVar28 - fVar26 * fVar37;
    fVar35 = fVar26 * fVar35 - fVar27 * fVar28;
    fVar26 = fVar37 * fVar37 + fVar34 * fVar34 + fVar35 * fVar35;
    fVar27 = fVar34;
    fVar28 = fVar37;
    fVar47 = fVar35;
    if ((fVar26 != 1.0) &&
       (fVar27 = DAT_1468b5d90, fVar28 = DAT_1468b5d94, fVar47 = DAT_1468b5d98, 1e-08 <= fVar26)) {
      auVar23 = rsqrtss(ZEXT416((uint)fVar26),ZEXT416((uint)fVar26));
      fVar47 = auVar23._0_4_;
      fVar47 = fVar47 + fVar47 * (0.5 - fVar26 * 0.5 * fVar47 * fVar47);
      fVar47 = fVar47 + fVar47 * (0.5 - fVar26 * 0.5 * fVar47 * fVar47);
      fVar27 = fVar34 * fVar47;
      fVar28 = fVar37 * fVar47;
      fVar47 = fVar35 * fVar47;
    }
    fVar26 = *(float *)(param_2 + 0x11b0) * -3.0;
    if ((((((fVar21 * local_148 + fVar20 * fStack_144 + fVar19 * fVar24) -
            (fVar38 * fVar20 + fVar49 * fVar21 + fVar13 * fVar19) <= fVar26) ||
          ((fVar10 * local_148 + fVar30 * fStack_144 + fVar39 * fVar24) -
           (fVar10 * fVar18 + fVar9 * fVar30 + fVar8 * fVar39) <= fVar26)) ||
         ((fVar40 * local_148 + fVar44 * fStack_144 + fVar31 * fVar24) -
          (fVar44 * fVar11 + fVar40 * fVar36 + fVar31 * fVar25) <= fVar26)) ||
        (((fVar41 * local_148 + fVar45 * fStack_144 + fVar32 * fVar24) -
          (fVar29 * fVar45 + fVar22 * fVar41 + fVar43 * fVar32) <= fVar26 ||
         ((fVar33 * local_148 + fVar46 * fStack_144 + fVar42 * fVar24) -
          (fVar46 * fVar17 + fVar33 * fVar16 + fVar42 * fVar12) <= fVar26)))) ||
       ((fVar27 * local_148 + fVar28 * fStack_144 + fVar47 * fVar24) -
        (fVar48 * fVar27 + fVar28 * fVar14 + fVar47 * fVar15) <= fVar26)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *param_4 = uVar1;
  }
  return;
}



// FUNCTION 141db03b0 FUN_141db03b0 body=707 status=ok
// SIG undefined FUN_141db03b0(void)

void FUN_141db03b0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  
  *(undefined1 *)(param_1 + 0xc0) = 1;
  iVar4 = DAT_1464a820c;
  if (((DAT_146ac32c8 != 0x800) && (iVar4 = DAT_1464a8208, DAT_146ac32c8 != 0x1000)) ||
     (uVar3 = DAT_146ac32d0, iVar4 != 0)) {
    uVar3 = DAT_146ac32cc | DAT_146ac32c8;
  }
  iVar11 = 0;
  *(uint *)(param_1 + 8) = uVar3 | 0xff;
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
          goto LAB_141db05c7;
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
LAB_141db05c7:
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



// FUNCTION 141db0680 FUN_141db0680 body=691 status=ok
// SIG undefined FUN_141db0680(void)

void FUN_141db0680(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  
  *(undefined1 *)(param_1 + 0x68) = 1;
  iVar4 = DAT_1464a820c;
  if (((DAT_146ac32c8 != 0x800) && (iVar4 = DAT_1464a8208, DAT_146ac32c8 != 0x1000)) ||
     (uVar3 = DAT_146ac32d0, iVar4 != 0)) {
    uVar3 = DAT_146ac32cc | DAT_146ac32c8;
  }
  iVar11 = 0;
  *(uint *)(param_1 + 8) = uVar3 | 0xff;
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
          goto LAB_141db0887;
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
LAB_141db0887:
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



// FUNCTION 141db0940 FUN_141db0940 body=691 status=ok
// SIG undefined FUN_141db0940(void)

void FUN_141db0940(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  
  *(undefined1 *)(param_1 + 0x18) = 1;
  iVar4 = DAT_1464a820c;
  if (((DAT_146a9ef10 != 0x800) && (iVar4 = DAT_1464a8208, DAT_146a9ef10 != 0x1000)) ||
     (uVar3 = DAT_146a9ef18, iVar4 != 0)) {
    uVar3 = DAT_146a9ef14 | DAT_146a9ef10;
  }
  iVar11 = 0;
  *(uint *)(param_1 + 8) = uVar3 | 0xff;
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
          goto LAB_141db0b47;
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
LAB_141db0b47:
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



// FUNCTION 141db0c00 FUN_141db0c00 body=3719 status=ok
// SIG undefined FUN_141db0c00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141db0c00(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,char param_6,char param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined4 uVar16;
  uint uVar17;
  longlong *plVar18;
  undefined1 auStack_478 [32];
  longlong *local_458;
  undefined8 *local_450;
  undefined8 *local_448;
  longlong local_440;
  undefined4 local_438;
  undefined1 local_430;
  char local_428;
  char local_418;
  uint local_414;
  longlong local_410;
  undefined4 local_408;
  longlong local_400;
  undefined4 local_3f8;
  longlong local_3f0;
  undefined4 local_3e8;
  longlong local_3e0;
  undefined4 local_3d8;
  ulonglong local_3d0;
  int local_3c8 [2];
  longlong *local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined4 local_3a8;
  longlong local_3a0 [2];
  undefined4 local_390;
  uint local_38c;
  undefined4 local_388;
  undefined1 local_384;
  longlong local_380;
  undefined8 local_378;
  undefined4 uStack_36c;
  undefined8 local_368;
  undefined4 uStack_35c;
  undefined8 local_358;
  undefined4 local_350;
  undefined8 local_348;
  undefined4 local_340;
  undefined8 local_338;
  undefined4 local_330;
  undefined8 local_328;
  undefined4 local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined *local_308;
  undefined4 local_300;
  undefined *local_2f8;
  undefined4 local_2f0;
  undefined4 local_2dc;
  undefined4 local_2cc;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined4 local_280;
  ulonglong local_27c;
  undefined8 local_274;
  undefined4 local_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_224;
  undefined8 local_21c;
  undefined4 local_214;
  undefined8 local_208;
  longlong *plStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  ulonglong local_1bc;
  undefined8 local_1b4;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_164;
  undefined8 local_15c;
  undefined4 local_154;
  undefined4 local_148;
  undefined4 local_144;
  float local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  float local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  float local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  float local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  float local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  float local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  float local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  float local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  float local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  float local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  float local_90;
  undefined4 local_8c;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_478;
  local_3a0[0] = *(longlong *)(param_3 + 0x20);
  plVar14 = (longlong *)0x0;
  local_3f0 = param_5;
  local_3d0 = local_3d0 & 0xffffffff00000000;
  local_3a8 = 0x11;
  if (local_3a0[0] != 0) {
    LOCK();
    *(int *)(local_3a0[0] + 8) = *(int *)(local_3a0[0] + 8) + 1;
    UNLOCK();
  }
  bVar5 = false;
  local_3a0[1] = 0;
  local_388 = 0;
  local_384 = 0;
  local_38c = (uint)(*(char *)(param_3 + 0x1205) != '\0') |
              -(uint)(*(char *)(param_3 + 0x11b4) != '\0') & 8;
  local_380 = param_1;
  FUN_141abfb70();
  local_3b8 = FUN_141b08790();
  uVar17 = *(uint *)(param_1 + 0x560);
  if ((uVar17 & 0x1800) == 0) {
    if ((((uVar17 & 0x40) == 0) || (*(int *)(param_1 + 0x524) < 0)) || ((uVar17 & 0x10) == 0)) {
      if (param_7 == '\0') {
        uVar8 = FUN_141d9c4e0();
      }
      else {
        uVar8 = FUN_141d9c120();
      }
      local_390 = 0;
      local_208 = 0;
      plStack_200 = (longlong *)0x0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_1c8 = 0;
      local_1c0 = 0;
      local_1bc = 0x26;
      local_1b4 = 0;
      local_1ac = 0;
      local_198 = 0;
      local_190 = 0;
      local_188 = 0;
      local_180 = 0;
      local_178 = 0;
      local_170 = 0;
      local_168 = 0;
      local_164 = 0;
      local_15c = 0;
      local_154 = 0;
      local_3b0 = uVar8;
      FUN_14049afe0(param_2,&local_208);
      local_1d8 = local_3b8;
      local_1bc = local_1bc & 0xffffffff00000000;
      local_1c8 = uVar8;
      uStack_1d0 = FUN_140985530();
      lVar4 = *(longlong *)(param_3 + 0x3090);
      local_2f0 = 0;
      local_2f8 = &DAT_146a9f790;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar4 + 0x38,local_3c8,&local_2f8);
      plVar10 = plVar14;
      if (local_3c8[0] != -1) {
        plVar10 = (longlong *)((longlong)local_3c8[0] * 0x20 + *(longlong *)(lVar4 + 0x38));
      }
      plVar13 = plVar10 + 2;
      if (plVar10 == (longlong *)0x0) {
        plVar13 = plVar14;
      }
      plVar13 = (longlong *)*plVar13;
      puVar9 = (undefined8 *)FUN_141ee3620();
      local_208 = *puVar9;
      if (plVar13 == (longlong *)0x0) {
        local_3c0 = (longlong *)0x0;
        bVar5 = true;
        plStack_200 = plVar14;
      }
      else {
        lVar4 = plVar13[9];
        if (*(char *)(lVar4 + 0x28) == '\0') {
          FUN_1419f3850(lVar4);
        }
        plStack_200 = *(longlong **)(lVar4 + 0x38);
        param_5 = local_3f0;
      }
      if (bVar5) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_3c0);
      }
      local_1bc = local_1bc & 0xffffffff00000000;
      FUN_141ed6ac0(param_2,&local_208,2,1);
      (**(code **)(*plVar13 + 0x30))(plVar13,param_2,param_3,param_1);
      local_438 = 0x10;
      local_440 = *(longlong *)(param_5 + 0x80);
      if (*(longlong *)(param_5 + 0x80) == 0) {
        local_440 = param_5;
      }
      local_448 = (undefined8 *)CONCAT44(local_448._4_4_,2);
      local_450 = (undefined8 *)&DAT_144edc3c0;
      local_458 = (longlong *)CONCAT44(local_458._4_4_,0xc);
      FUN_141abae60(param_2,0,0,8);
      if ((param_6 != '\0') && (*(int *)(DAT_146a9f5e8 + 4) == 0)) {
        local_3b0 = FUN_141d9c260();
        local_410 = 2;
        local_408 = CONCAT22(local_408._2_2_,0x100);
        uVar16 = local_408;
        plVar10 = plVar14;
        plVar13 = plVar14;
        if (0 < *(int *)(param_1 + 0x690)) {
          do {
            lVar4 = *(longlong *)(param_1 + 0x688);
            if ((*(uint *)((longlong)plVar10 + lVar4 + 0x10) >> 3 & 1) != 0) {
              local_428 = '\0';
              local_430 = 0;
              local_438 = 0;
              local_440 = CONCAT44(local_440._4_4_,
                                   *(undefined4 *)(*(longlong *)((longlong)plVar10 + lVar4) + 0xb0))
              ;
              local_448 = *(undefined8 **)((longlong)plVar10 + lVar4 + 8);
              local_450 = &local_3b8;
              local_458 = (longlong *)CONCAT71(local_458._1_7_,1);
              local_358 = 2;
              local_350 = uVar16;
              FUN_141b04180(param_2,param_3,&local_358);
            }
            uVar17 = (int)plVar13 + 1;
            plVar10 = plVar10 + 3;
            plVar13 = (longlong *)(ulonglong)uVar17;
          } while ((int)uVar17 < *(int *)(param_1 + 0x690));
        }
        plVar10 = plVar14;
        if (0 < *(int *)(param_1 + 0x680)) {
          do {
            lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x678) + 0x10 + (longlong)plVar14);
            if ((*(uint *)(lVar4 + 0x8c) & 0x2000000) == 0) {
              local_400 = (1L << ((byte)*(undefined4 *)(lVar4 + 0x80) & 0x3f)) + -1;
            }
            else {
              local_400 = *(longlong *)
                           (*(longlong *)(param_3 + 0x1c50) + (longlong)*(int *)(lVar4 + 200) * 8);
            }
            local_428 = '\0';
            local_430 = 0;
            local_408 = CONCAT22(local_408._2_2_,0x100);
            local_340 = local_408;
            local_438 = *(undefined4 *)(lVar4 + 0xb0);
            local_440 = *(longlong *)(*(longlong *)(lVar4 + 0xc0) + 8);
            local_448 = &local_3b8;
            local_458 = &local_400;
            local_410 = 2;
            local_450 = (undefined8 *)CONCAT71(local_450._1_7_,1);
            local_348 = 2;
            FUN_141b06250(param_2,param_3,&local_348);
            uVar17 = (int)plVar10 + 1;
            plVar14 = plVar14 + 4;
            plVar10 = (longlong *)(ulonglong)uVar17;
          } while ((int)uVar17 < *(int *)(param_1 + 0x680));
        }
      }
    }
    else {
      uVar8 = FUN_141d9c120();
      local_2c8 = 0;
      uStack_2c0 = 0;
      local_2b8 = 0;
      uStack_2b0 = 0;
      local_2a8 = 0;
      uStack_2a0 = 0;
      local_298 = 0;
      uStack_290 = 0;
      local_268 = 0;
      uStack_260 = 0;
      local_390 = 0;
      local_288 = 0;
      local_280 = 0;
      local_27c = 0x26;
      local_274 = 0;
      local_26c = 0;
      local_258 = 0;
      local_250 = 0;
      local_248 = 0;
      local_240 = 0;
      local_238 = 0;
      local_230 = 0;
      local_228 = 0;
      local_224 = 0;
      local_21c = 0;
      local_214 = 0;
      local_3b0 = uVar8;
      FUN_14049afe0(param_2,&local_2c8);
      local_298 = local_3b8;
      local_27c = local_27c & 0xffffffff00000000;
      local_288 = uVar8;
      uStack_290 = FUN_140985530();
      lVar4 = *(longlong *)(param_3 + 0x3090);
      local_300 = 0;
      local_308 = &DAT_146a9f640;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar4 + 0x38,&local_414,&local_308);
      plVar10 = plVar14;
      if (local_414 != 0xffffffff) {
        plVar10 = (longlong *)((longlong)(int)local_414 * 0x20 + *(longlong *)(lVar4 + 0x38));
      }
      uVar8 = *(undefined8 *)(param_3 + 0x20);
      plVar13 = plVar10 + 2;
      if (plVar10 == (longlong *)0x0) {
        plVar13 = plVar14;
      }
      lVar4 = *plVar13;
      lVar15 = *(longlong *)(lVar4 + 0x48);
      if (*(char *)(lVar15 + 0x28) == '\0') {
        FUN_1419f3850(lVar15);
      }
      FUN_141aa9800(lVar4,param_2,*(undefined8 *)(lVar15 + 0x38),uVar8);
      puVar9 = (undefined8 *)FUN_141ee3620();
      local_2c8 = *puVar9;
      lVar4 = *(longlong *)(lVar4 + 0x48);
      if (*(char *)(lVar4 + 0x28) == '\0') {
        FUN_1419f3850(lVar4);
      }
      uStack_2c0 = *(undefined8 *)(lVar4 + 0x38);
      uVar16 = 2;
      local_27c = local_27c & 0xffffffff00000000;
      FUN_141ed6ac0(param_2,&local_2c8,2,1);
      local_378 = 0;
      uStack_36c = 0x3f800000;
      local_368 = 0;
      uStack_35c = 0x3f800000;
      local_2dc = 0x3f800000;
      local_2cc = 0x3f800000;
      local_148 = 0x3f800000;
      local_144 = 0x3f800000;
      local_13c = 0x3f800000;
      local_138 = 0xbf800000;
      local_134 = 0x3f800000;
      local_12c = 0x3f800000;
      local_128 = 0x3f800000;
      local_124 = 0xbf800000;
      local_11c = 0x3f800000;
      local_118 = 0x3f800000;
      local_114 = 0xbf800000;
      local_10c = 0x3f800000;
      local_e0 = (*(float *)(param_3 + 0x398) * 0.0 + *(float *)(param_3 + 0x3a8) * 0.0 +
                 *(float *)(param_1 + 0x3c0) * *(float *)(param_3 + 0x3b8) +
                 *(float *)(param_3 + 0x3c8) * 1.0) /
                 (*(float *)(param_3 + 0x39c) * 0.0 + *(float *)(param_3 + 0x3ac) * 0.0 +
                 *(float *)(param_1 + 0x3c0) * *(float *)(param_3 + 0x3bc) +
                 *(float *)(param_3 + 0x3cc) * 1.0);
      local_140 = (*(float *)(param_3 + 0x398) * 0.0 + *(float *)(param_3 + 0x3a8) * 0.0 +
                  *(float *)(param_1 + 0x3c4) * *(float *)(param_3 + 0x3b8) +
                  *(float *)(param_3 + 0x3c8) * 1.0) /
                  (*(float *)(param_3 + 0x39c) * 0.0 + *(float *)(param_3 + 0x3ac) * 0.0 +
                  *(float *)(param_1 + 0x3c4) * *(float *)(param_3 + 0x3bc) +
                  *(float *)(param_3 + 0x3cc) * 1.0);
      if (0 < *(int *)(param_1 + 0x524)) {
        uVar16 = 4;
      }
      local_108 = 0xbf800000;
      local_104 = 0x3f800000;
      local_fc = 0x3f800000;
      local_f8 = 0xbf800000;
      local_f4 = 0xbf800000;
      local_ec = 0x3f800000;
      local_e8 = 0xbf800000;
      local_e4 = 0x3f800000;
      local_dc = 0x3f800000;
      local_d8 = 0x3f800000;
      local_d4 = 0x3f800000;
      local_cc = 0x3f800000;
      local_c8 = 0xbf800000;
      local_c4 = 0xbf800000;
      local_bc = 0x3f800000;
      local_b8 = 0xbf800000;
      local_b4 = 0xbf800000;
      local_ac = 0x3f800000;
      local_a8 = 0x3f800000;
      local_a4 = 0x3f800000;
      local_9c = 0x3f800000;
      local_98 = 0x3f800000;
      local_94 = 0xbf800000;
      local_8c = 0x3f800000;
      local_458 = (longlong *)CONCAT44(local_458._4_4_,0x10);
      local_130 = local_140;
      local_120 = local_140;
      local_110 = local_140;
      local_100 = local_140;
      local_f0 = local_140;
      local_d0 = local_e0;
      local_c0 = local_e0;
      local_b0 = local_e0;
      local_a0 = local_e0;
      local_90 = local_e0;
      FUN_141a14d80(param_2,0,uVar16,&local_148);
    }
  }
  else {
    if (((*(char *)(param_3 + 0x1209) == '\0') || (*(char *)(param_3 + 0x120a) != '\0')) ||
       (*(int *)(param_3 + 0xf60) == 0)) {
      local_418 = '\0';
    }
    else {
      uVar16 = *(undefined4 *)(param_3 + 0x1aac);
      uVar1 = *(undefined4 *)(param_4 + 0x2a4);
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      local_418 = '\x01';
      puVar9 = puVar11 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar11 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar9;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar11;
      *(undefined8 **)(param_2 + 8) = puVar11 + 1;
      puVar11[1] = 0;
      *puVar11 = &PTR_LAB_143f59420;
      puVar11[2] = 0;
      *(undefined4 *)(puVar11 + 3) = 0;
      *(undefined4 *)((longlong)puVar11 + 0x1c) = uVar1;
      *(undefined4 *)(puVar11 + 4) = uVar16;
      *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
    }
    local_3b0 = FUN_141d9c3a0();
    cVar6 = local_418;
    uVar17 = *(uint *)(param_1 + 0x560);
    local_390 = 1;
    local_400 = 2;
    plVar18 = (longlong *)((((ulonglong)(uVar17 & 0x800) | 0x34400) >> 7) + param_1);
    local_3f8 = CONCAT22(local_3f8._2_2_,0x100);
    uVar16 = local_3f8;
    local_414 = 0;
    plVar10 = plVar14;
    plVar13 = plVar14;
    if (0 < (int)plVar18[1]) {
      do {
        lVar4 = *plVar18;
        uVar17 = (uint)plVar10;
        if ((*(uint *)((longlong)plVar13 + lVar4 + 0x10) >> 3 & 1) != 0) {
          local_428 = cVar6;
          local_430 = 0;
          local_438 = 0;
          local_440 = CONCAT44(local_440._4_4_,
                               *(undefined4 *)(*(longlong *)((longlong)plVar13 + lVar4) + 0xb0));
          local_448 = *(undefined8 **)((longlong)plVar13 + lVar4 + 8);
          local_450 = &local_3b8;
          local_458 = (longlong *)CONCAT71(local_458._1_7_,1);
          local_338 = 2;
          local_330 = uVar16;
          FUN_141b04180(param_2,param_3,&local_338);
          uVar17 = local_414;
        }
        local_414 = uVar17 + 1;
        plVar10 = (longlong *)(ulonglong)local_414;
        plVar13 = plVar13 + 3;
      } while ((int)local_414 < (int)plVar18[1]);
      uVar17 = *(uint *)(local_380 + 0x560);
      param_1 = local_380;
    }
    local_3c0 = (longlong *)((((ulonglong)(uVar17 & 0x800) | 0x30400) >> 7) + param_1);
    local_400 = (longlong)(int)local_3c0[1];
    if (0 < local_400) {
      local_3d0 = 0;
      do {
        lVar4 = *(longlong *)(*local_3c0 + local_3d0 * 8);
        uVar17 = *(uint *)(lVar4 + 0xe8);
        lVar15 = *(longlong *)(param_3 + 0x1ad0);
        if (*(longlong *)(param_3 + 0x1ad0) == 0) {
          lVar15 = param_3 + 0x1ac0;
        }
        uVar7 = uVar17;
        if ((int)uVar17 < 0) {
          uVar7 = uVar17 + 0x1f;
        }
        if ((((*(uint *)(lVar15 + (longlong)((int)uVar7 >> 5) * 4) >> (uVar17 & 0x1f) & 1) != 0) &&
            ((*(uint *)(*(longlong *)(param_3 + 0x1b30) + 4 + (longlong)(int)uVar17 * 8) & 0x2100)
             == 0x2100)) && (plVar10 = plVar14, plVar13 = plVar14, 0 < *(int *)(lVar4 + 0x38))) {
          do {
            lVar15 = *(longlong *)((longlong)plVar13 + *(longlong *)(lVar4 + 0x30));
            uVar17 = *(uint *)(lVar15 + 200);
            lVar12 = *(longlong *)(param_3 + 0x1b50);
            if (*(longlong *)(param_3 + 0x1b50) == 0) {
              lVar12 = param_3 + 0x1b40;
            }
            uVar7 = uVar17;
            if ((int)uVar17 < 0) {
              uVar7 = uVar17 + 0x1f;
            }
            if ((*(uint *)(lVar12 + (longlong)((int)uVar7 >> 5) * 4) >> (uVar17 & 0x1f) & 1) != 0) {
              if ((*(uint *)(lVar15 + 0x8c) & 0x2000000) == 0) {
                local_3e0 = (1L << ((byte)*(undefined4 *)(lVar15 + 0x80) & 0x3f)) + -1;
              }
              else {
                local_3e0 = *(longlong *)
                             (*(longlong *)(param_3 + 0x1c50) +
                             (longlong)*(int *)(lVar15 + 0xcc) * 8);
              }
              local_3e8 = CONCAT22(local_3e8._2_2_,0x100);
              local_320 = local_3e8;
              local_428 = local_418;
              local_438 = *(undefined4 *)(lVar15 + 0xb0);
              local_430 = 0;
              local_440 = *(longlong *)(lVar4 + 8);
              local_448 = &local_3b8;
              local_458 = &local_3e0;
              local_3f0 = 2;
              local_450 = (undefined8 *)CONCAT71(local_450._1_7_,1);
              local_328 = 2;
              FUN_141b06250(param_2,param_3,&local_328);
            }
            uVar17 = (int)plVar10 + 1;
            plVar10 = (longlong *)(ulonglong)uVar17;
            plVar13 = plVar13 + 1;
          } while ((int)uVar17 < *(int *)(lVar4 + 0x38));
        }
        local_3d0 = local_3d0 + 1;
      } while ((longlong)local_3d0 < local_400);
      uVar17 = *(uint *)(local_380 + 0x560);
      param_1 = local_380;
    }
    cVar6 = local_418;
    if ((((uVar17 >> 0xc & 1) != 0) && ((uVar17 >> 0xb & 1) == 0)) &&
       (plVar10 = plVar14, 0 < *(int *)(param_1 + 0x680))) {
      do {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x678) + 0x10 + (longlong)plVar14);
        if ((*(uint *)(lVar4 + 0x8c) & 0x2000000) == 0) {
          local_410 = (1L << ((byte)*(undefined4 *)(lVar4 + 0x80) & 0x3f)) + -1;
        }
        else {
          local_410 = *(longlong *)
                       (*(longlong *)(param_3 + 0x1c50) + (longlong)*(int *)(lVar4 + 0xcc) * 8);
        }
        local_428 = cVar6;
        local_430 = 0;
        local_3d8 = CONCAT22(local_3d8._2_2_,0x100);
        local_310 = local_3d8;
        local_438 = *(undefined4 *)(lVar4 + 0xb0);
        local_440 = *(longlong *)(*(longlong *)(lVar4 + 0xc0) + 8);
        local_448 = &local_3b8;
        local_458 = &local_410;
        local_3e0 = 2;
        local_450 = (undefined8 *)CONCAT71(local_450._1_7_,1);
        local_318 = 2;
        FUN_141b06250(param_2,param_3,&local_318);
        uVar17 = (int)plVar10 + 1;
        plVar14 = plVar14 + 4;
        plVar10 = (longlong *)(ulonglong)uVar17;
      } while ((int)uVar17 < *(int *)(param_1 + 0x680));
    }
    if (local_418 != '\0') {
      uVar16 = *(undefined4 *)(param_3 + 0x1aac);
      uVar1 = *(undefined4 *)(param_3 + 0x1aa8);
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      uVar2 = *(undefined4 *)(param_3 + 0x1aa4);
      uVar3 = *(undefined4 *)(param_3 + 0x1aa0);
      puVar9 = puVar11 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar11 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar9;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar11;
      *(undefined8 **)(param_2 + 8) = puVar11 + 1;
      puVar11[1] = 0;
      *puVar11 = &PTR_LAB_143f59420;
      *(undefined4 *)(puVar11 + 2) = uVar3;
      *(undefined4 *)((longlong)puVar11 + 0x14) = uVar2;
      *(undefined4 *)(puVar11 + 3) = 0;
      *(undefined4 *)((longlong)puVar11 + 0x1c) = uVar1;
      *(undefined4 *)(puVar11 + 4) = uVar16;
      *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
    }
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_3a0);
  return;
}



// FUNCTION 141db1a90 FUN_141db1a90 body=264 status=ok
// SIG undefined FUN_141db1a90(void)

void FUN_141db1a90(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar4 = 0;
  lVar5 = lVar4;
  if (0 < *(int *)(param_3 + 200)) {
    lVar6 = *(longlong *)(param_3 + 0xc0);
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x5c8) + 0x58);
    lVar7 = lVar4;
    do {
      if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(lVar6 + 0x1e20))) {
        lVar5 = *(longlong *)(lVar6 + 0x1e18);
        if (*(longlong *)(lVar6 + 0x1e18) == 0) {
          lVar5 = lVar6 + 0x1e08;
        }
        uVar2 = uVar1;
        if ((int)uVar1 < 0) {
          uVar2 = uVar1 + 0x1f;
        }
        if (((*(uint *)(lVar5 + (longlong)((int)uVar2 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) &&
           (lVar5 = lVar6,
           ((uint)((ulonglong)
                   *(undefined8 *)
                    (*(longlong *)
                      (*(longlong *)(lVar6 + 0x1df8) + 0x30 + (longlong)(int)uVar1 * 0x78) +
                    (longlong)*(int *)(param_1 + 0x40) * 8) >> 0x2b) & 1) != 0)) break;
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x30d0;
      lVar5 = lVar4;
    } while (lVar7 < *(int *)(param_3 + 200));
  }
  uVar3 = FUN_141d64e30(lVar5);
  FUN_141da1b90(param_1,param_2,uVar3);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  return;
}



// FUNCTION 141db1ba0 FUN_141db1ba0 body=104 status=ok
// SIG undefined FUN_141db1ba0(void)

undefined8 FUN_141db1ba0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_1 + 0x1f8))();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = (**(code **)(*param_1 + 0x1e8))(param_1);
  if ((iVar2 != 0) && (iVar2 = (**(code **)(*param_1 + 0x1e8))(param_1), iVar2 != 1)) {
    iVar2 = (**(code **)(*param_1 + 0x1e8))(param_1);
    if ((iVar2 == 2) && (cVar1 = (**(code **)(*param_1 + 0x210))(param_1), cVar1 != '\0')) {
      return 1;
    }
    return 0;
  }
  return 1;
}



// FUNCTION 141db1c10 ShouldCompilePermutation body=60 status=ok
// SIG undefined ShouldCompilePermutation(void)

undefined8
TDirectionalPercentageCloserShadowProjectionPS<5,1>::ShouldCompilePermutation(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = FUN_1419ef5f0(iVar1);
  if ((1 < iVar2) &&
     (((iVar1 == 0 || ((iVar1 - 0x14U & 0xfffffff7) == 0)) || ((iVar1 - 0x10U & 0xfffffffd) == 0))))
  {
    return 1;
  }
  return 0;
}



// FUNCTION 141db1c50 FUN_141db1c50 body=118 status=ok
// SIG undefined FUN_141db1c50(void)

undefined8 FUN_141db1c50(undefined4 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_141ed13a0();
  if (cVar1 != '\0') {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141db2820(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141db1cd0 FUN_141db1cd0 body=118 status=ok
// SIG undefined FUN_141db1cd0(void)

undefined8 FUN_141db1cd0(undefined4 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_141ed13a0();
  if (cVar1 != '\0') {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141db2d50(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141db1d50 FUN_141db1d50 body=118 status=ok
// SIG undefined FUN_141db1d50(void)

undefined8 FUN_141db1d50(undefined4 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_141ed13a0();
  if (cVar1 != '\0') {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141db33b0(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141db1dd0 FUN_141db1dd0 body=118 status=ok
// SIG undefined FUN_141db1dd0(void)

undefined8 FUN_141db1dd0(undefined4 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_141ed13a0();
  if (cVar1 != '\0') {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141db3790(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141db1e50 FUN_141db1e50 body=118 status=ok
// SIG undefined FUN_141db1e50(void)

undefined8 FUN_141db1e50(undefined4 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_141ed13a0();
  if (cVar1 != '\0') {
    if ((param_3 != 0) && (cVar1 = (**(code **)(param_3 + 0x48))(), cVar1 == '\0')) {
      return 0;
    }
    if (((param_2 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*param_2 + 0x178))(param_2), iVar2 != 0)) &&
       (cVar1 = FUN_141db3ce0(param_1,param_2,param_3), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141db1ed0 FUN_141db1ed0 body=404 status=ok
// SIG undefined FUN_141db1ed0(void)

undefined8 FUN_141db1ed0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = FUN_1419ef5f0();
  if (iVar2 < 2) {
    cVar1 = (**(code **)(*param_2 + 200))(param_2);
    if (((cVar1 == '\0') && (cVar1 = FUN_141b196e0(param_2,1), cVar1 != '\0')) &&
       ((cVar1 = FUN_14259cb20(param_2), cVar1 == '\0' ||
        (cVar1 = (**(code **)(*param_2 + 0x138))(param_2), cVar1 == '\0')))) {
      FUN_14259cb20(param_2);
    }
  }
  else {
    lVar6 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146a9f988) &&
       (_Init_thread_header(&DAT_146a9f988), DAT_146a9f988 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar4 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowReflectiveShadowMaps");
      lVar5 = lVar6;
      if (plVar4 != (longlong *)0x0) {
        lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
      }
      DAT_146a9f980 = lVar5;
      _Init_thread_footer(&DAT_146a9f988);
    }
    lVar5 = DAT_146a9f980;
    if (DAT_146a9f980 != 0) {
      cVar1 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
        lVar6 = 4;
      }
      if (*(int *)(lVar6 + lVar5) == 0) {
        return 0;
      }
    }
    cVar1 = FUN_141db1ba0(param_2);
    if ((((cVar1 != '\0') || (cVar1 = (**(code **)(*param_2 + 0x48))(param_2), cVar1 != '\0')) ||
        (cVar1 = (**(code **)(*param_2 + 0x50))(param_2), cVar1 != '\0')) && (2 < iVar2)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141db2070 FUN_141db2070 body=190 status=ok
// SIG undefined FUN_141db2070(void)

undefined8 FUN_141db2070(undefined8 param_1,longlong *param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  
  pcVar1 = *(code **)(*param_2 + 200);
  iVar3 = FUN_1419ef5f0();
  if (1 < iVar3) {
    cVar2 = (*pcVar1)(param_2);
    if ((((cVar2 == '\0') && (cVar2 = FUN_141b196e0(param_2,1), cVar2 != '\0')) &&
        ((cVar2 = FUN_14259cb20(param_2), cVar2 == '\0' ||
         (cVar2 = (**(code **)(*param_2 + 0x138))(param_2), cVar2 == '\0')))) &&
       (cVar2 = FUN_14259cb20(param_2), cVar2 == '\0')) {
      return 0;
    }
    cVar2 = FUN_141db1ba0(param_2);
    if (cVar2 == '\0') {
      return 0;
    }
    return 1;
  }
  cVar2 = (*pcVar1)();
  if (cVar2 != '\0') {
    return 0;
  }
  cVar2 = FUN_141b196e0(param_2,1);
  if (cVar2 == '\0') {
    return 0;
  }
  cVar2 = FUN_14259cb20(param_2);
  if ((cVar2 != '\0') && (cVar2 = (**(code **)(*param_2 + 0x138))(param_2), cVar2 != '\0')) {
    return 0;
  }
  FUN_14259cb20(param_2);
  return 0;
}



// FUNCTION 141db2130 FUN_141db2130 body=392 status=ok
// SIG undefined FUN_141db2130(void)

undefined8 FUN_141db2130(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = FUN_1419ef5f0();
  if (iVar2 < 2) {
    cVar1 = (**(code **)(*param_2 + 200))(param_2);
    if (((cVar1 == '\0') && (cVar1 = FUN_141b196e0(param_2,1), cVar1 != '\0')) &&
       (cVar1 = FUN_14259cb20(param_2), cVar1 != '\0')) {
      (**(code **)(*param_2 + 0x138))(param_2);
    }
  }
  else {
    lVar6 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146a9f978) &&
       (_Init_thread_header(&DAT_146a9f978), DAT_146a9f978 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar4 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowReflectiveShadowMaps");
      lVar5 = lVar6;
      if (plVar4 != (longlong *)0x0) {
        lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
      }
      DAT_146a9f970 = lVar5;
      _Init_thread_footer(&DAT_146a9f978);
    }
    lVar5 = DAT_146a9f970;
    if (DAT_146a9f970 != 0) {
      cVar1 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
        lVar6 = 4;
      }
      if (*(int *)(lVar6 + lVar5) == 0) {
        return 0;
      }
    }
    cVar1 = FUN_141db1ba0(param_2);
    if ((((cVar1 != '\0') || (cVar1 = (**(code **)(*param_2 + 0x48))(param_2), cVar1 != '\0')) ||
        (cVar1 = (**(code **)(*param_2 + 0x50))(param_2), cVar1 != '\0')) && (2 < iVar2)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141db22c0 FUN_141db22c0 body=166 status=ok
// SIG undefined FUN_141db22c0(void)

undefined8 FUN_141db22c0(undefined8 param_1,longlong *param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  
  pcVar1 = *(code **)(*param_2 + 200);
  iVar3 = FUN_1419ef5f0();
  if (iVar3 < 2) {
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      return 0;
    }
    cVar2 = FUN_141b196e0(param_2,1);
    if (cVar2 == '\0') {
      return 0;
    }
    cVar2 = FUN_14259cb20(param_2);
    if (cVar2 == '\0') {
      return 0;
    }
    (**(code **)(*param_2 + 0x138))(param_2);
    return 0;
  }
  cVar2 = (*pcVar1)(param_2);
  if ((cVar2 == '\0') && (cVar2 = FUN_141b196e0(param_2,1), cVar2 != '\0')) {
    cVar2 = FUN_14259cb20(param_2);
    if (cVar2 == '\0') {
      return 0;
    }
    cVar2 = (**(code **)(*param_2 + 0x138))(param_2);
    if (cVar2 == '\0') {
      return 0;
    }
  }
  cVar2 = FUN_141db1ba0(param_2);
  if (cVar2 == '\0') {
    return 0;
  }
  return 1;
}



// FUNCTION 141db2370 FUN_141db2370 body=404 status=ok
// SIG undefined FUN_141db2370(void)

undefined8 FUN_141db2370(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = FUN_1419ef5f0();
  if (iVar2 < 2) {
    cVar1 = (**(code **)(*param_2 + 200))(param_2);
    if (((cVar1 != '\0') || (cVar1 = FUN_141b196e0(param_2,1), cVar1 == '\0')) ||
       ((cVar1 = FUN_14259cb20(param_2), cVar1 != '\0' &&
        (cVar1 = (**(code **)(*param_2 + 0x138))(param_2), cVar1 != '\0')))) {
      FUN_141db1ba0(param_2);
    }
  }
  else {
    lVar6 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146a9f998) &&
       (_Init_thread_header(&DAT_146a9f998), DAT_146a9f998 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar4 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowReflectiveShadowMaps");
      lVar5 = lVar6;
      if (plVar4 != (longlong *)0x0) {
        lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
      }
      DAT_146a9f990 = lVar5;
      _Init_thread_footer(&DAT_146a9f998);
    }
    lVar5 = DAT_146a9f990;
    if (DAT_146a9f990 != 0) {
      cVar1 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
        lVar6 = 4;
      }
      if (*(int *)(lVar6 + lVar5) == 0) {
        return 0;
      }
    }
    cVar1 = FUN_141db1ba0(param_2);
    if ((((cVar1 != '\0') || (cVar1 = (**(code **)(*param_2 + 0x48))(param_2), cVar1 != '\0')) ||
        (cVar1 = (**(code **)(*param_2 + 0x50))(param_2), cVar1 != '\0')) && (2 < iVar2)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141db2510 FUN_141db2510 body=117 status=ok
// SIG undefined FUN_141db2510(void)

undefined8 FUN_141db2510(undefined8 param_1,longlong *param_2)

{
  code *pcVar1;
  char cVar2;
  
  pcVar1 = *(code **)(*param_2 + 200);
  FUN_1419ef5f0();
  cVar2 = (*pcVar1)(param_2);
  if ((cVar2 == '\0') && (cVar2 = FUN_141b196e0(param_2,1), cVar2 != '\0')) {
    cVar2 = FUN_14259cb20(param_2);
    if (cVar2 == '\0') {
      return 0;
    }
    cVar2 = (**(code **)(*param_2 + 0x138))(param_2);
    if (cVar2 == '\0') {
      return 0;
    }
  }
  cVar2 = FUN_141db1ba0(param_2);
  if (cVar2 == '\0') {
    return 0;
  }
  return 1;
}



// FUNCTION 141db2590 FUN_141db2590 body=648 status=ok
// SIG undefined FUN_141db2590(void)

undefined8 FUN_141db2590(uint param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  DWORD DVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  
  piVar10 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar10 < DAT_146a9fa18) && (_Init_thread_header(&DAT_146a9fa18), DAT_146a9fa18 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    lVar8 = 0;
    if (plVar7 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar7 + 0x38))(plVar7);
    }
    DAT_146a9fa10 = lVar8;
    _Init_thread_footer(&DAT_146a9fa18);
  }
  lVar8 = DAT_146a9fa10;
  lVar9 = 4;
  if (DAT_146a9fa10 != 0) {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
      lVar6 = 4;
    }
    else {
      lVar6 = 0;
    }
    if (*(int *)(lVar6 + lVar8) != 0) {
      bVar3 = true;
      goto LAB_141db2626;
    }
  }
  bVar3 = false;
LAB_141db2626:
  lVar8 = DAT_146a9ef70;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
    lVar6 = 4;
  }
  else {
    lVar6 = 0;
  }
  if ((*(int *)(lVar6 + lVar8) != 0) || (bVar1 = false, bVar3)) {
    bVar1 = true;
  }
  iVar5 = FUN_1419ef5f0(param_1);
  if (((iVar5 < 2) || ((param_1 < 0x1e && ((0x28e71800U >> (param_1 & 0x1f) & 1) != 0)))) &&
     ((iVar5 < 2 || ((0x1b < param_1 || ((0x8c50000U >> (param_1 & 0x1f) & 1) == 0)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar1) {
    if (!bVar3) {
      return 0;
    }
    if ((*piVar10 < DAT_146a9fa28) && (_Init_thread_header(&DAT_146a9fa28), DAT_146a9fa28 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar7 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowReflectiveShadowMaps");
      lVar8 = 0;
      if (plVar7 != (longlong *)0x0) {
        lVar8 = (**(code **)(*plVar7 + 0x38))(plVar7);
      }
      DAT_146a9fa20 = lVar8;
      _Init_thread_footer(&DAT_146a9fa28);
    }
    lVar8 = DAT_146a9fa20;
    if (DAT_146a9fa20 != 0) {
      cVar2 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
         (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
        lVar9 = 0;
      }
      if (*(int *)(lVar8 + lVar9) == 0) {
        return 0;
      }
    }
    cVar2 = FUN_141db1ba0(param_2);
    if ((((cVar2 != '\0') || (cVar2 = (**(code **)(*param_2 + 0x48))(param_2), cVar2 != '\0')) ||
        (cVar2 = (**(code **)(*param_2 + 0x50))(param_2), cVar2 != '\0')) && (2 < iVar5)) {
      return 1;
    }
    return 0;
  }
  return 0;
}



// FUNCTION 141db2820 FUN_141db2820 body=516 status=ok
// SIG undefined FUN_141db2820(void)

undefined8 FUN_141db2820(undefined4 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  
  lVar6 = 0;
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar7 < DAT_146a9fa38) && (_Init_thread_header(&DAT_146a9fa38), DAT_146a9fa38 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    lVar5 = lVar6;
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_146a9fa30 = lVar5;
    _Init_thread_footer(&DAT_146a9fa38);
  }
  if (((DAT_146a9fa30 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = FUN_1419ef5f0(param_1);
  if ((*piVar7 < DAT_146a9fa48) && (_Init_thread_header(&DAT_146a9fa48), DAT_146a9fa48 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowReflectiveShadowMaps");
    lVar5 = lVar6;
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_146a9fa40 = lVar5;
    _Init_thread_footer(&DAT_146a9fa48);
  }
  lVar5 = DAT_146a9fa40;
  if (DAT_146a9fa40 != 0) {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
      lVar6 = 4;
    }
    if (*(int *)(lVar6 + lVar5) == 0) {
      return 0;
    }
  }
  cVar1 = FUN_141db1ba0(param_2);
  if ((((cVar1 != '\0') || (cVar1 = (**(code **)(*param_2 + 0x48))(param_2), cVar1 != '\0')) ||
      (cVar1 = (**(code **)(*param_2 + 0x50))(param_2), cVar1 != '\0')) && (2 < iVar2)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141db2a30 FUN_141db2a30 body=316 status=ok
// SIG undefined FUN_141db2a30(void)

undefined8 FUN_141db2a30(undefined8 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a9f9c8) {
    _Init_thread_header(&DAT_146a9f9c8);
    if (DAT_146a9f9c8 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar2 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations")
      ;
      lVar3 = 0;
      if (plVar2 != (longlong *)0x0) {
        lVar3 = (**(code **)(*plVar2 + 0x38))(plVar2);
      }
      DAT_146a9f9c0 = lVar3;
      _Init_thread_footer(&DAT_146a9f9c8);
    }
  }
  if (DAT_146a9f9c0 != 0) {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
      GetCurrentThreadId();
    }
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = (**(code **)(*param_2 + 200))(param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_141b196e0(param_2,1);
    if (cVar1 != '\0') {
      FUN_14259cb20(param_2);
    }
  }
  else if ((*(uint *)(param_3 + 0x28) >> 4 & 1) != 0) {
    cVar1 = FUN_141db1ba0(param_2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141db2b70 FUN_141db2b70 body=478 status=ok
// SIG undefined FUN_141db2b70(void)

undefined8 FUN_141db2b70(uint param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  DWORD DVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a9f9f8) && (_Init_thread_header(&DAT_146a9f9f8), DAT_146a9f9f8 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    lVar8 = 0;
    if (plVar7 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar7 + 0x38))(plVar7);
    }
    DAT_146a9f9f0 = lVar8;
    _Init_thread_footer(&DAT_146a9f9f8);
  }
  lVar8 = DAT_146a9f9f0;
  lVar9 = 4;
  if (DAT_146a9f9f0 != 0) {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
      lVar6 = 4;
    }
    else {
      lVar6 = 0;
    }
    if (*(int *)(lVar6 + lVar8) != 0) {
      bVar1 = true;
      goto LAB_141db2c08;
    }
  }
  bVar1 = false;
LAB_141db2c08:
  lVar8 = DAT_146a9ef70;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
    lVar9 = 0;
  }
  if ((*(int *)(lVar9 + lVar8) != 0) || (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  iVar5 = FUN_1419ef5f0(param_1);
  if ((iVar5 < 2) ||
     (((param_1 < 0x1e && ((0x28e71800U >> (param_1 & 0x1f) & 1) != 0)) &&
      ((iVar5 < 2 || ((0x1b < param_1 || ((0x8c50000U >> (param_1 & 0x1f) & 1) == 0)))))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((((bVar1) && (bVar3)) &&
      ((cVar2 = (**(code **)(*param_2 + 200))(param_2), cVar2 != '\0' ||
       ((cVar2 = FUN_141b196e0(param_2,1), cVar2 == '\0' ||
        (cVar2 = FUN_14259cb20(param_2), cVar2 != '\0')))))) &&
     (cVar2 = FUN_141db1ba0(param_2), cVar2 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 141db2d50 FUN_141db2d50 body=293 status=ok
// SIG undefined FUN_141db2d50(void)

undefined8 FUN_141db2d50(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a9fa08) && (_Init_thread_header(&DAT_146a9fa08), DAT_146a9fa08 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar2 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    lVar3 = 0;
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x38))(plVar2);
    }
    DAT_146a9fa00 = lVar3;
    _Init_thread_footer(&DAT_146a9fa08);
  }
  if (((DAT_146a9fa00 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = (**(code **)(*param_2 + 200))(param_2);
  if (((cVar1 == '\0') && (cVar1 = FUN_141b196e0(param_2,1), cVar1 != '\0')) &&
     (cVar1 = FUN_14259cb20(param_2), cVar1 == '\0')) {
    return 0;
  }
  cVar1 = FUN_141db1ba0(param_2);
  if (cVar1 == '\0') {
    return 0;
  }
  return 1;
}



// FUNCTION 141db2e80 FUN_141db2e80 body=485 status=ok
// SIG undefined FUN_141db2e80(void)

undefined8 FUN_141db2e80(uint param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  DWORD DVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a9f9a8) && (_Init_thread_header(&DAT_146a9f9a8), DAT_146a9f9a8 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    lVar8 = 0;
    if (plVar7 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar7 + 0x38))(plVar7);
    }
    DAT_146a9f9a0 = lVar8;
    _Init_thread_footer(&DAT_146a9f9a8);
  }
  lVar8 = DAT_146a9f9a0;
  lVar9 = 4;
  if (DAT_146a9f9a0 != 0) {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
      lVar6 = 4;
    }
    else {
      lVar6 = 0;
    }
    if (*(int *)(lVar6 + lVar8) != 0) {
      bVar3 = true;
      goto LAB_141db2f19;
    }
  }
  bVar3 = false;
LAB_141db2f19:
  lVar8 = DAT_146a9ef70;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
    lVar9 = 0;
  }
  if ((*(int *)(lVar9 + lVar8) != 0) || (bVar1 = false, bVar3)) {
    bVar1 = true;
  }
  iVar5 = FUN_1419ef5f0(param_1);
  if (((iVar5 < 2) || ((param_1 < 0x1e && ((0x28e71800U >> (param_1 & 0x1f) & 1) != 0)))) &&
     ((iVar5 < 2 || ((0x1b < param_1 || ((0x8c50000U >> (param_1 & 0x1f) & 1) == 0)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((bVar1) && (bVar3)) {
    cVar2 = (**(code **)(*param_2 + 200))(param_2);
    if (cVar2 == '\0') {
      cVar2 = FUN_141b196e0(param_2,1);
      if (cVar2 != '\0') {
        FUN_14259cb20(param_2);
      }
    }
    else if (((1 < iVar5) && ((*(uint *)(param_3 + 0x28) >> 4 & 1) != 0)) &&
            (cVar2 = FUN_141db1ba0(param_2), cVar2 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141db3070 FUN_141db3070 body=349 status=ok
// SIG undefined FUN_141db3070(void)

undefined8 FUN_141db3070(undefined4 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a9f9b8) {
    _Init_thread_header(&DAT_146a9f9b8);
    if (DAT_146a9f9b8 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations")
      ;
      lVar4 = 0;
      if (plVar3 != (longlong *)0x0) {
        lVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
      }
      DAT_146a9f9b0 = lVar4;
      _Init_thread_footer(&DAT_146a9f9b8);
    }
  }
  if (DAT_146a9f9b0 != 0) {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
      GetCurrentThreadId();
    }
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = FUN_1419ef5f0(param_1);
  cVar1 = (**(code **)(*param_2 + 200))(param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_141b196e0(param_2,1);
    if (cVar1 != '\0') {
      FUN_14259cb20(param_2);
    }
  }
  else if ((1 < iVar2) && ((*(uint *)(param_3 + 0x28) >> 4 & 1) != 0)) {
    cVar1 = FUN_141db1ba0(param_2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141db31d0 FUN_141db31d0 body=479 status=ok
// SIG undefined FUN_141db31d0(void)

undefined8 FUN_141db31d0(uint param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  DWORD DVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a9fab8) && (_Init_thread_header(&DAT_146a9fab8), DAT_146a9fab8 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    lVar8 = 0;
    if (plVar7 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar7 + 0x38))(plVar7);
    }
    DAT_146a9fab0 = lVar8;
    _Init_thread_footer(&DAT_146a9fab8);
  }
  lVar8 = DAT_146a9fab0;
  lVar9 = 4;
  if (DAT_146a9fab0 != 0) {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
      lVar6 = 4;
    }
    else {
      lVar6 = 0;
    }
    if (*(int *)(lVar6 + lVar8) != 0) {
      bVar3 = true;
      goto LAB_141db3268;
    }
  }
  bVar3 = false;
LAB_141db3268:
  lVar8 = DAT_146a9ef70;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
    lVar9 = 0;
  }
  if ((*(int *)(lVar9 + lVar8) != 0) || (bVar1 = false, bVar3)) {
    bVar1 = true;
  }
  iVar5 = FUN_1419ef5f0(param_1);
  if (((iVar5 < 2) || ((param_1 < 0x1e && ((0x28e71800U >> (param_1 & 0x1f) & 1) != 0)))) &&
     ((iVar5 < 2 || ((0x1b < param_1 || ((0x8c50000U >> (param_1 & 0x1f) & 1) == 0)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (((((bVar1) && (bVar3)) &&
       ((cVar2 = (**(code **)(*param_2 + 200))(param_2), cVar2 != '\0' ||
        ((cVar2 = FUN_141b196e0(param_2,1), cVar2 == '\0' ||
         (cVar2 = FUN_14259cb20(param_2), cVar2 != '\0')))))) && (1 < iVar5)) &&
     (cVar2 = FUN_141db1ba0(param_2), cVar2 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 141db33b0 FUN_141db33b0 body=325 status=ok
// SIG undefined FUN_141db33b0(void)

undefined8 FUN_141db33b0(undefined4 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a9f9e8) && (_Init_thread_header(&DAT_146a9f9e8), DAT_146a9f9e8 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    lVar4 = 0;
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    DAT_146a9f9e0 = lVar4;
    _Init_thread_footer(&DAT_146a9f9e8);
  }
  if (((DAT_146a9f9e0 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = FUN_1419ef5f0(param_1);
  cVar1 = (**(code **)(*param_2 + 200))(param_2);
  if (((cVar1 == '\0') && (cVar1 = FUN_141b196e0(param_2,1), cVar1 != '\0')) &&
     (cVar1 = FUN_14259cb20(param_2), cVar1 == '\0')) {
    return 0;
  }
  if ((1 < iVar2) && (cVar1 = FUN_141db1ba0(param_2), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 141db3500 FUN_141db3500 body=648 status=ok
// SIG undefined FUN_141db3500(void)

undefined8 FUN_141db3500(uint param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  DWORD DVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  
  piVar10 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar10 < DAT_146a9fa78) && (_Init_thread_header(&DAT_146a9fa78), DAT_146a9fa78 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    lVar8 = 0;
    if (plVar7 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar7 + 0x38))(plVar7);
    }
    DAT_146a9fa70 = lVar8;
    _Init_thread_footer(&DAT_146a9fa78);
  }
  lVar8 = DAT_146a9fa70;
  lVar9 = 4;
  if (DAT_146a9fa70 != 0) {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
      lVar6 = 4;
    }
    else {
      lVar6 = 0;
    }
    if (*(int *)(lVar6 + lVar8) != 0) {
      bVar3 = true;
      goto LAB_141db3596;
    }
  }
  bVar3 = false;
LAB_141db3596:
  lVar8 = DAT_146a9ef70;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
    lVar6 = 4;
  }
  else {
    lVar6 = 0;
  }
  if ((*(int *)(lVar6 + lVar8) != 0) || (bVar1 = false, bVar3)) {
    bVar1 = true;
  }
  iVar5 = FUN_1419ef5f0(param_1);
  if (((iVar5 < 2) || ((param_1 < 0x1e && ((0x28e71800U >> (param_1 & 0x1f) & 1) != 0)))) &&
     ((iVar5 < 2 || ((0x1b < param_1 || ((0x8c50000U >> (param_1 & 0x1f) & 1) == 0)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar1) {
    if (!bVar3) {
      return 0;
    }
    if ((*piVar10 < DAT_146a9fa88) && (_Init_thread_header(&DAT_146a9fa88), DAT_146a9fa88 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar7 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowReflectiveShadowMaps");
      lVar8 = 0;
      if (plVar7 != (longlong *)0x0) {
        lVar8 = (**(code **)(*plVar7 + 0x38))(plVar7);
      }
      DAT_146a9fa80 = lVar8;
      _Init_thread_footer(&DAT_146a9fa88);
    }
    lVar8 = DAT_146a9fa80;
    if (DAT_146a9fa80 != 0) {
      cVar2 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
         (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
        lVar9 = 0;
      }
      if (*(int *)(lVar8 + lVar9) == 0) {
        return 0;
      }
    }
    cVar2 = FUN_141db1ba0(param_2);
    if ((((cVar2 != '\0') || (cVar2 = (**(code **)(*param_2 + 0x48))(param_2), cVar2 != '\0')) ||
        (cVar2 = (**(code **)(*param_2 + 0x50))(param_2), cVar2 != '\0')) && (2 < iVar5)) {
      return 1;
    }
    return 0;
  }
  return 0;
}



// FUNCTION 141db3790 FUN_141db3790 body=516 status=ok
// SIG undefined FUN_141db3790(void)

undefined8 FUN_141db3790(undefined4 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  
  lVar6 = 0;
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar7 < DAT_146a9fa98) && (_Init_thread_header(&DAT_146a9fa98), DAT_146a9fa98 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    lVar5 = lVar6;
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_146a9fa90 = lVar5;
    _Init_thread_footer(&DAT_146a9fa98);
  }
  if (((DAT_146a9fa90 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = FUN_1419ef5f0(param_1);
  if ((*piVar7 < DAT_146a9faa8) && (_Init_thread_header(&DAT_146a9faa8), DAT_146a9faa8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowReflectiveShadowMaps");
    lVar5 = lVar6;
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_146a9faa0 = lVar5;
    _Init_thread_footer(&DAT_146a9faa8);
  }
  lVar5 = DAT_146a9faa0;
  if (DAT_146a9faa0 != 0) {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
      lVar6 = 4;
    }
    if (*(int *)(lVar6 + lVar5) == 0) {
      return 0;
    }
  }
  cVar1 = FUN_141db1ba0(param_2);
  if ((((cVar1 != '\0') || (cVar1 = (**(code **)(*param_2 + 0x48))(param_2), cVar1 != '\0')) ||
      (cVar1 = (**(code **)(*param_2 + 0x50))(param_2), cVar1 != '\0')) && (2 < iVar2)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141db39a0 FUN_141db39a0 body=349 status=ok
// SIG undefined FUN_141db39a0(void)

undefined8 FUN_141db39a0(undefined4 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a9f9d8) {
    _Init_thread_header(&DAT_146a9f9d8);
    if (DAT_146a9f9d8 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations")
      ;
      lVar4 = 0;
      if (plVar3 != (longlong *)0x0) {
        lVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
      }
      DAT_146a9f9d0 = lVar4;
      _Init_thread_footer(&DAT_146a9f9d8);
    }
  }
  if (DAT_146a9f9d0 != 0) {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
      GetCurrentThreadId();
    }
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = FUN_1419ef5f0(param_1);
  cVar1 = (**(code **)(*param_2 + 200))(param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_141b196e0(param_2,1);
    if (cVar1 != '\0') {
      FUN_14259cb20(param_2);
    }
  }
  else if ((*(uint *)(param_3 + 0x28) >> 4 & 1) != 0) {
    cVar1 = FUN_141db1ba0(param_2);
    if ((cVar1 != '\0') && (1 < iVar2)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141db3b00 FUN_141db3b00 body=479 status=ok
// SIG undefined FUN_141db3b00(void)

undefined8 FUN_141db3b00(uint param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  DWORD DVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a9fa58) && (_Init_thread_header(&DAT_146a9fa58), DAT_146a9fa58 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    lVar8 = 0;
    if (plVar7 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar7 + 0x38))(plVar7);
    }
    DAT_146a9fa50 = lVar8;
    _Init_thread_footer(&DAT_146a9fa58);
  }
  lVar8 = DAT_146a9fa50;
  lVar9 = 4;
  if (DAT_146a9fa50 != 0) {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
      lVar6 = 4;
    }
    else {
      lVar6 = 0;
    }
    if (*(int *)(lVar6 + lVar8) != 0) {
      bVar3 = true;
      goto LAB_141db3b98;
    }
  }
  bVar3 = false;
LAB_141db3b98:
  lVar8 = DAT_146a9ef70;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
    lVar9 = 0;
  }
  if ((*(int *)(lVar9 + lVar8) != 0) || (bVar1 = false, bVar3)) {
    bVar1 = true;
  }
  iVar5 = FUN_1419ef5f0(param_1);
  if (((iVar5 < 2) || ((param_1 < 0x1e && ((0x28e71800U >> (param_1 & 0x1f) & 1) != 0)))) &&
     ((iVar5 < 2 || ((0x1b < param_1 || ((0x8c50000U >> (param_1 & 0x1f) & 1) == 0)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (((((bVar1) && (bVar3)) &&
       ((cVar2 = (**(code **)(*param_2 + 200))(param_2), cVar2 != '\0' ||
        ((cVar2 = FUN_141b196e0(param_2,1), cVar2 == '\0' ||
         (cVar2 = FUN_14259cb20(param_2), cVar2 != '\0')))))) &&
      (cVar2 = FUN_141db1ba0(param_2), cVar2 != '\0')) && (1 < iVar5)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141db3ce0 FUN_141db3ce0 body=325 status=ok
// SIG undefined FUN_141db3ce0(void)

undefined8 FUN_141db3ce0(undefined4 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146a9fa68) && (_Init_thread_header(&DAT_146a9fa68), DAT_146a9fa68 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations");
    lVar4 = 0;
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    DAT_146a9fa60 = lVar4;
    _Init_thread_footer(&DAT_146a9fa68);
  }
  if (((DAT_146a9fa60 != 0) && (cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0')) &&
     (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = FUN_1419ef5f0(param_1);
  cVar1 = (**(code **)(*param_2 + 200))(param_2);
  if (((cVar1 == '\0') && (cVar1 = FUN_141b196e0(param_2,1), cVar1 != '\0')) &&
     (cVar1 = FUN_14259cb20(param_2), cVar1 == '\0')) {
    return 0;
  }
  cVar1 = FUN_141db1ba0(param_2);
  if ((cVar1 != '\0') && (1 < iVar2)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141db3e30 ShouldCompilePermutation body=60 status=ok
// SIG undefined ShouldCompilePermutation(void)

undefined8 TSpotPercentageCloserShadowProjectionPS<5,1>::ShouldCompilePermutation(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = FUN_1419ef5f0(iVar1);
  if ((2 < iVar2) &&
     (((iVar1 == 0 || ((iVar1 - 0x14U & 0xfffffff7) == 0)) || ((iVar1 - 0x10U & 0xfffffffd) == 0))))
  {
    return 1;
  }
  return 0;
}



// FUNCTION 141db3e70 ShouldCompilePermutation body=63 status=ok
// SIG undefined ShouldCompilePermutation(void)

undefined8 FCopyShadowMapsCubeGS::ShouldCompilePermutation(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  iVar2 = FUN_1419ef5f0(uVar1);
  if ((1 < iVar2) && ((0x1d < uVar1 || ((0x28e71800U >> (uVar1 & 0x1f) & 1) == 0)))) {
    iVar2 = FUN_1419ef5f0(uVar1);
    if (1 < iVar2) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141db3eb0 ShouldCompilePermutation body=101 status=ok
// SIG undefined ShouldCompilePermutation(void)

undefined8
FOnePassPointShadowDepthGS::ShouldCompilePermutation
          (uint param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_1419ef5f0();
  if ((1 < iVar2) && ((0x1d < param_1 || ((0x28e71800U >> (param_1 & 0x1f) & 1) == 0)))) {
    cVar1 = FUN_141db31d0(param_1,param_2,param_3);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141db3f20 SortSubjectMeshElements body=39 status=ok
// SIG undefined SortSubjectMeshElements(void)

void FProjectedShadowInfo::SortSubjectMeshElements(longlong param_1)

{
  undefined1 local_res8 [32];
  
  FUN_141d82d90(*(undefined8 *)(param_1 + 0x678),(longlong)*(int *)(param_1 + 0x680),local_res8[0],
                local_res8);
  return;
}



// FUNCTION 141db3f50 FUN_141db3f50 body=490 status=ok
// SIG undefined FUN_141db3f50(void)

void FUN_141db3f50(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulonglong local_res8;
  undefined1 local_78 [112];
  
  lVar2 = param_2[2];
  uVar4 = *(uint *)((longlong)param_1 + 100);
  uVar1 = *(uint *)(lVar2 + 0x8c);
  local_res8 = CONCAT44(uVar1 >> 0xc,
                        (uint)(*(char *)(param_2 + 3) != '\0') |
                        ((uVar1 >> 0x13 & 0x80 | uVar1 & 0x100) >> 2 | uVar1 & 0x10) >> 4 |
                        uVar1 & 8) & 0x3fffffffff;
  puVar3 = (undefined8 *)
           FUN_141d88c30(local_78,param_2[1],uVar4 & 0xffffff01,uVar4 >> 2 & 0xffffff01,
                         (byte)(uVar4 >> 4) & 1,&local_res8,param_3,*(undefined8 *)(lVar2 + 0xa0),
                         *param_2,(byte)(*(uint *)(lVar2 + 0x8c) >> 3) & 1);
  param_1[7] = puVar3[7];
  param_1[8] = puVar3[8];
  param_1[10] = puVar3[10];
  param_1[0xb] = puVar3[0xb];
  param_1[9] = puVar3[9];
  *(uint *)((longlong)param_1 + 100) =
       *(uint *)((longlong)param_1 + 100) ^
       (*(uint *)((longlong)puVar3 + 100) ^ *(uint *)((longlong)param_1 + 100)) & 1;
  uVar4 = (*(uint *)((longlong)param_1 + 100) ^ *(uint *)((longlong)puVar3 + 100)) & 2 ^
          *(uint *)((longlong)param_1 + 100);
  *(uint *)((longlong)param_1 + 100) = uVar4;
  uVar4 = (uVar4 ^ *(uint *)((longlong)puVar3 + 100)) & 4 ^ uVar4;
  *(uint *)((longlong)param_1 + 100) = uVar4;
  uVar4 = (uVar4 ^ *(uint *)((longlong)puVar3 + 100)) & 8 ^ uVar4;
  *(uint *)((longlong)param_1 + 100) = uVar4;
  *(uint *)((longlong)param_1 + 100) = (uVar4 ^ *(uint *)((longlong)puVar3 + 100)) & 0x10 ^ uVar4;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(puVar3 + 0xc);
  param_1[1] = puVar3[1];
  param_1[2] = puVar3[2];
  param_1[3] = puVar3[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(puVar3 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)puVar3 + 0x24);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(puVar3 + 5);
  *(uint *)(param_1 + 6) =
       *(uint *)(param_1 + 6) ^ (*(uint *)(param_1 + 6) ^ *(uint *)(puVar3 + 6)) & 1;
  uVar4 = (*(uint *)(param_1 + 6) ^ *(uint *)(puVar3 + 6)) & 2 ^ *(uint *)(param_1 + 6);
  *(uint *)(param_1 + 6) = uVar4;
  *(uint *)(param_1 + 6) = (uVar4 ^ *(uint *)(puVar3 + 6)) & 0xfc ^ uVar4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)puVar3 + 0x2c);
  *param_1 = *puVar3;
  *(undefined1 *)((longlong)param_1 + 0x34) = *(undefined1 *)((longlong)puVar3 + 0x34);
  *(undefined1 *)((longlong)param_1 + 0x35) = *(undefined1 *)((longlong)puVar3 + 0x35);
  return;
}



// FUNCTION 141db4140 FUN_141db4140 body=490 status=ok
// SIG undefined FUN_141db4140(void)

void FUN_141db4140(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulonglong local_res8;
  undefined1 local_78 [112];
  
  lVar2 = param_2[2];
  uVar4 = *(uint *)((longlong)param_1 + 100);
  uVar1 = *(uint *)(lVar2 + 0x8c);
  local_res8 = CONCAT44(uVar1 >> 0xc,
                        (uint)(*(char *)(param_2 + 3) != '\0') |
                        ((uVar1 >> 0x13 & 0x80 | uVar1 & 0x100) >> 2 | uVar1 & 0x10) >> 4 |
                        uVar1 & 8) & 0x3fffffffff;
  puVar3 = (undefined8 *)
           FUN_141d88ee0(local_78,param_2[1],uVar4 & 0xffffff01,uVar4 >> 2 & 0xffffff01,
                         (byte)(uVar4 >> 4) & 1,&local_res8,param_3,*(undefined8 *)(lVar2 + 0xa0),
                         *param_2,(byte)(*(uint *)(lVar2 + 0x8c) >> 3) & 1);
  param_1[7] = puVar3[7];
  param_1[8] = puVar3[8];
  param_1[10] = puVar3[10];
  param_1[0xb] = puVar3[0xb];
  param_1[9] = puVar3[9];
  *(uint *)((longlong)param_1 + 100) =
       *(uint *)((longlong)param_1 + 100) ^
       (*(uint *)((longlong)puVar3 + 100) ^ *(uint *)((longlong)param_1 + 100)) & 1;
  uVar4 = (*(uint *)((longlong)param_1 + 100) ^ *(uint *)((longlong)puVar3 + 100)) & 2 ^
          *(uint *)((longlong)param_1 + 100);
  *(uint *)((longlong)param_1 + 100) = uVar4;
  uVar4 = (uVar4 ^ *(uint *)((longlong)puVar3 + 100)) & 4 ^ uVar4;
  *(uint *)((longlong)param_1 + 100) = uVar4;
  uVar4 = (uVar4 ^ *(uint *)((longlong)puVar3 + 100)) & 8 ^ uVar4;
  *(uint *)((longlong)param_1 + 100) = uVar4;
  *(uint *)((longlong)param_1 + 100) = (uVar4 ^ *(uint *)((longlong)puVar3 + 100)) & 0x10 ^ uVar4;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(puVar3 + 0xc);
  param_1[1] = puVar3[1];
  param_1[2] = puVar3[2];
  param_1[3] = puVar3[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(puVar3 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)puVar3 + 0x24);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(puVar3 + 5);
  *(uint *)(param_1 + 6) =
       *(uint *)(param_1 + 6) ^ (*(uint *)(param_1 + 6) ^ *(uint *)(puVar3 + 6)) & 1;
  uVar4 = (*(uint *)(param_1 + 6) ^ *(uint *)(puVar3 + 6)) & 2 ^ *(uint *)(param_1 + 6);
  *(uint *)(param_1 + 6) = uVar4;
  *(uint *)(param_1 + 6) = (uVar4 ^ *(uint *)(puVar3 + 6)) & 0xfc ^ uVar4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)puVar3 + 0x2c);
  *param_1 = *puVar3;
  *(undefined1 *)((longlong)param_1 + 0x34) = *(undefined1 *)((longlong)puVar3 + 0x34);
  *(undefined1 *)((longlong)param_1 + 0x35) = *(undefined1 *)((longlong)puVar3 + 0x35);
  return;
}



// FUNCTION 141db4330 UpdateNodeSceneInfo body=146 status=ok
// SIG undefined UpdateNodeSceneInfo(void)

void FLODSceneTree::UpdateNodeSceneInfo(longlong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar2 = param_1 + 0x40;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0x50) - 1U & (longlong)param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 8) + (longlong)iVar1 * 0x28;
        if (*(int *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 0x28) == param_2) {
          if (iVar1 != -1) goto LAB_141db43a3;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x20);
      } while (iVar1 != -1);
    }
  }
  lVar2 = 0;
LAB_141db43a3:
  lVar3 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = param_3;
  }
  return;
}



// FUNCTION 141db43d0 FUN_141db43d0 body=1083 status=ok
// SIG undefined FUN_141db43d0(void)

void FUN_141db43d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  int local_res20 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  uint uStack_c0;
  int iStack_bc;
  undefined1 local_b8 [16];
  longlong *local_a8;
  char local_a0;
  char cStack_9f;
  int *local_98;
  longlong local_90;
  longlong *local_88;
  int iStack_80;
  uint uStack_7c;
  uint *puStack_78;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  
  lVar5 = *(longlong *)(param_2 + 0x18);
  if (lVar5 != 0) {
    iVar4 = *(int *)(lVar5 + 0x1f8);
    plVar1 = (longlong *)(lVar5 + 0x2b0);
    iVar9 = *(int *)(lVar5 + 0x2d8);
    puStack_78 = (uint *)(lVar5 + 0x2c0);
    local_d8._0_4_ = 0;
    local_d8._4_4_ = 1;
    fVar3 = *(float *)(*(longlong *)(param_2 + 0x10) + 0x58);
    local_c8._4_4_ = 0;
    uStack_c0 = 0;
    if (iVar9 != 0) {
      puVar15 = *(uint **)(lVar5 + 0x2d0);
      if (*(uint **)(lVar5 + 0x2d0) == (uint *)0x0) {
        puVar15 = puStack_78;
      }
      uVar13 = *puVar15;
      uStack_c0 = 0;
      local_d8._0_4_ = 0;
      while (uVar13 == 0) {
        lVar11 = (longlong)(int)local_d8;
        uStack_c0 = uStack_c0 + 0x20;
        iVar14 = (int)local_d8 + 1;
        bVar6 = (int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_d8;
        local_d8._0_4_ = iVar14;
        if (bVar6) goto LAB_141db44cb;
        uVar13 = puVar15[lVar11 + 1];
      }
      local_d8._4_4_ = -uVar13 & uVar13;
      iVar14 = 0x1f;
      if (local_d8._4_4_ != 0) {
        for (; local_d8._4_4_ >> iVar14 == 0; iVar14 = iVar14 + -1) {
        }
      }
      if (local_d8._4_4_ == 0) {
        iVar14 = 0x20;
      }
      else {
        iVar14 = 0x1f - iVar14;
      }
      local_c8._4_4_ = (uStack_c0 - iVar14) + 0x1f;
      if (iVar9 < local_c8._4_4_) {
LAB_141db44cb:
        local_c8._4_4_ = iVar9;
      }
    }
    auStack_70._4_4_ = local_c8._4_4_;
    auStack_70._0_4_ = 0xffffffff;
    auStack_70._8_4_ = uStack_c0;
    auStack_70._12_4_ = iStack_bc;
    iStack_80 = (int)local_d8;
    uStack_7c = local_d8._4_4_;
    local_a0 = '\0';
    cStack_9f = '\0';
    local_60._0_4_ = SUB84(plVar1,0);
    local_60._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
    local_c8._0_4_ = (uint)puStack_78;
    uStack_c0 = 0xffffffff;
    iStack_bc = local_c8._4_4_;
    uStack_d0._0_4_ = (int)local_d8;
    uStack_d0._4_4_ = local_d8._4_4_;
    local_b8._8_4_ = (undefined4)local_60;
    local_b8._0_8_ = auStack_70._8_8_;
    local_b8._12_4_ = local_60._4_4_;
    local_d8 = plVar1;
    local_a8 = plVar1;
    local_88 = plVar1;
    local_60 = plVar1;
    puVar15 = puStack_78;
    if (local_c8._4_4_ < *(int *)(lVar5 + 0x2d8)) {
      do {
        lVar8 = (longlong)iStack_bc;
        lVar11 = *local_d8;
        local_c8 = puVar15;
        if ((*(int *)(lVar11 + 0x18 + lVar8 * 0x30) != iVar4) ||
           ((*(longlong *)(lVar11 + 0x10 + lVar8 * 0x30) != 0 &&
            (*(float *)(lVar11 + 0x1c + lVar8 * 0x30) <= fVar3)))) {
          TSet<TTuple<FPrimitiveComponentId,FPrimitiveFadingState>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FPrimitiveFadingState,0>,FDefaultSetAllocator>
          ::Remove(local_b8._8_8_);
          local_a0 = '\x01';
        }
        uStack_c0 = uStack_c0 & ~uStack_d0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
        puVar15 = local_c8;
      } while (iStack_bc < (int)local_c8[6]);
      if ((local_a0 != '\0') && (cStack_9f != '\0')) {
        TSet<TTuple<FPrimitiveComponentId,FPrimitiveFadingState>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FPrimitiveFadingState,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_a8,(int)local_a8[1] - *(int *)((longlong)local_a8 + 0x34));
      }
    }
    if ((DAT_146a9ecec == 0) && ((*(uint *)(param_2 + 0x28cc) & 0x100) == 0)) {
      uStack_d0 = (uint *)(param_2 + 0x1b00);
      iVar4 = *(int *)(param_2 + 0x1b18);
      local_d8._0_4_ = 0;
      local_d8._4_4_ = 1;
      local_c8._4_4_ = 0;
      uStack_c0 = 0;
      if (iVar4 != 0) {
        puVar15 = *(uint **)(param_2 + 0x1b10);
        if (*(uint **)(param_2 + 0x1b10) == (uint *)0x0) {
          puVar15 = uStack_d0;
        }
        uVar13 = *puVar15;
        local_d8._0_4_ = 0;
        uStack_c0 = 0;
        while (uVar13 == 0) {
          lVar11 = (longlong)(int)local_d8;
          uStack_c0 = uStack_c0 + 0x20;
          iVar9 = (int)local_d8 + 1;
          bVar6 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_d8;
          local_c8._4_4_ = iVar4;
          local_d8._0_4_ = iVar9;
          if (bVar6) goto LAB_141db4682;
          uVar13 = puVar15[lVar11 + 1];
        }
        local_d8._4_4_ = -uVar13 & uVar13;
        iVar9 = 0x1f;
        if (local_d8._4_4_ != 0) {
          for (; local_d8._4_4_ >> iVar9 == 0; iVar9 = iVar9 + -1) {
          }
        }
        if (local_d8._4_4_ == 0) {
          iVar9 = 0x20;
        }
        else {
          iVar9 = 0x1f - iVar9;
        }
        local_c8._4_4_ = (uStack_c0 - iVar9) + 0x1f;
        if (iVar4 < local_c8._4_4_) {
          local_c8._4_4_ = iVar4;
        }
      }
LAB_141db4682:
      if (local_c8._4_4_ < iVar4) {
        uVar13 = 0xffffffff;
        do {
          uVar7 = local_d8._4_4_;
          lVar8 = (longlong)(int)local_d8;
          lVar11 = *(longlong *)(param_2 + 0x1ad0);
          if (*(longlong *)(param_2 + 0x1ad0) == 0) {
            lVar11 = param_2 + 0x1ac0;
          }
          uVar16 = local_d8._4_4_ & *(uint *)(lVar11 + lVar8 * 4);
          local_90 = (longlong)local_c8._4_4_;
          piVar2 = (int *)(*(longlong *)(param_1 + 0x1050) + local_90 * 4);
          if (*(int *)(lVar5 + 0x2b8) != *(int *)(lVar5 + 0x2e4)) {
            iVar4 = *piVar2;
            lVar11 = *(longlong *)(lVar5 + 0x2f0);
            if (*(longlong *)(lVar5 + 0x2f0) == 0) {
              lVar11 = lVar5 + 0x2e8;
            }
            iVar9 = *(int *)(lVar11 + ((longlong)*(int *)(lVar5 + 0x2f8) - 1U & (longlong)iVar4) * 4
                            );
            if (iVar9 != -1) {
              do {
                piVar12 = (int *)((longlong)iVar9 * 0x30 + *plVar1);
                if (*piVar12 == iVar4) {
                  if ((iVar9 != -1) && (piVar12 != (int *)0x0)) goto LAB_141db475d;
                  break;
                }
                iVar9 = piVar12[10];
              } while (iVar9 != -1);
            }
          }
          local_98 = piVar2;
          FUN_141d7fd80(plVar1,local_res20,&local_98,0);
          piVar12 = (int *)((longlong)local_res20[0] * 0x30 + *plVar1);
LAB_141db475d:
          FUN_141db4810(piVar12 + 2,param_2,uVar16 != 0);
          lVar11 = *(longlong *)(piVar12 + 4);
          if ((lVar11 != 0) && (uVar16 == 0)) {
            lVar10 = *(longlong *)(param_2 + 0x1ad0);
            if (*(longlong *)(param_2 + 0x1ad0) == 0) {
              lVar10 = param_2 + 0x1ac0;
            }
            puVar15 = (uint *)(lVar10 + lVar8 * 4);
            *puVar15 = *puVar15 | uVar7;
          }
          local_c8._0_4_ = uVar13 & ~uVar7;
          *(longlong *)(*(longlong *)(param_2 + 0x1b20) + local_90 * 8) = lVar11;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_d8);
          uVar13 = (uint)local_c8;
        } while (local_c8._4_4_ < (int)uStack_d0[6]);
      }
    }
  }
  return;
}



// FUNCTION 141db4810 FUN_141db4810 body=517 status=ok
// SIG undefined FUN_141db4810(void)

void FUN_141db4810(float *param_1,longlong param_2,char param_3)

{
  float fVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  longlong local_res8;
  longlong local_res10;
  longlong local_res20;
  longlong local_48 [2];
  undefined8 local_38 [2];
  undefined8 local_28 [2];
  
  if ((*(char *)((longlong)param_1 + 0x19) != '\0') && (*(char *)(param_1 + 6) != param_3)) {
    fVar4 = *(float *)(*(longlong *)(param_2 + 0x10) + 0x58);
    if (*(longlong *)(param_1 + 2) == 0) {
      param_1[5] = DAT_1464c3138 + fVar4;
      if (param_3 == '\0') {
        *param_1 = -1.0 / DAT_1464c3138;
        fVar4 = fVar4 / DAT_1464c3138 + 1.0;
      }
      else {
        *param_1 = 1.0 / DAT_1464c3138;
        fVar4 = -(fVar4 / DAT_1464c3138);
      }
      param_1[1] = fVar4;
      local_38[0] = *(undefined8 *)param_1;
      (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_res8,local_38,&DAT_146a825a8,2);
      local_res10 = local_res8;
      if (local_res8 != 0) {
        LOCK();
        *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
        UNLOCK();
      }
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 2,&local_res10);
      plVar2 = &local_res10;
    }
    else {
      fVar1 = *param_1;
      fVar3 = -fVar1;
      *param_1 = fVar3;
      fVar3 = 1.0 / fVar3;
      fVar4 = (fVar4 + fVar4) * fVar1 + param_1[1];
      param_1[1] = fVar4;
      if (param_3 == '\0') {
        fVar3 = -(fVar3 * fVar4);
      }
      else {
        fVar3 = (1.0 - fVar4) * fVar3;
      }
      param_1[5] = fVar3;
      local_28[0] = *(undefined8 *)param_1;
      (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_res20,local_28,&DAT_146a825a8,2);
      local_48[0] = local_res20;
      if (local_res20 != 0) {
        LOCK();
        *(int *)(local_res20 + 8) = *(int *)(local_res20 + 8) + 1;
        UNLOCK();
      }
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res20);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 2,local_48);
      plVar2 = local_48;
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar2);
  }
  param_1[4] = *(float *)(*(longlong *)(param_2 + 0x10) + 0x5c);
  *(char *)(param_1 + 6) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}



// FUNCTION 141db4a20 FUN_141db4a20 body=486 status=ok
// SIG undefined FUN_141db4a20(void)

void FUN_141db4a20(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  float fVar5;
  
  uVar1 = *(uint *)(param_1 + 0x560);
  if (((uVar1 & 0x40) != 0) &&
     (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x5c8) + 0x30),
     (*(char *)(lVar4 + 0x188) - 1U & 0xfd) == 0)) {
    fVar5 = *(float *)(lVar4 + 0x124);
    uVar1 = *(uint *)(param_1 + 0x53c);
    if (*(uint *)(param_1 + 0x53c) <= *(uint *)(param_1 + 0x538)) {
      uVar1 = *(uint *)(param_1 + 0x538);
    }
    fVar5 = ((*(float *)(DAT_146a9f5b8 + 4) * 512.0) / (float)uVar1) * (fVar5 + fVar5);
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    *(float *)(param_1 + 0x6b8) = fVar5;
    return;
  }
  if ((((uVar1 & 0x40) != 0) && (-1 < *(int *)(param_1 + 0x524))) && ((uVar1 & 0x10) != 0)) {
    fVar5 = (*(float *)(DAT_146a9f138 + 4) /
            (*(float *)(param_1 + 0x154) - *(float *)(param_1 + 0x158))) *
            (*(float *)(param_1 + 0x3b0) / (float)*(uint *)(param_1 + 0x538)) *
            *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x5c8) + 0x30) + 0x124);
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    *(float *)(param_1 + 0x6b8) = fVar5;
    return;
  }
  if ((uVar1 >> 0xb & 1) == 0) {
    uVar2 = *(uint *)(param_1 + 0x53c);
    uVar3 = *(uint *)(param_1 + 0x538);
    if ((uVar1 & 0x10) == 0) {
      if (uVar2 <= uVar3) {
        uVar2 = uVar3;
      }
      fVar5 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x5c8) + 0x30) + 0x124);
      fVar5 = ((*(float *)(DAT_146a9f5d0 + 4) * 512.0) /
              ((float)uVar2 * (*(float *)(param_1 + 0x154) - *(float *)(param_1 + 0x158)))) *
              (fVar5 + fVar5);
    }
    else {
      if (uVar2 <= uVar3) {
        uVar2 = uVar3;
      }
      fVar5 = (*(float *)(param_1 + 0x3b0) / (float)uVar2) *
              (*(float *)(DAT_146a9f540 + 4) /
              (*(float *)(param_1 + 0x154) - *(float *)(param_1 + 0x158))) * 0.5;
    }
    if (0.1 < fVar5) {
      fVar5 = 0.1;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    *(float *)(param_1 + 0x6b8) = fVar5;
    return;
  }
  *(undefined4 *)(param_1 + 0x6b8) = 0;
  return;
}



// FUNCTION 141db4c10 FUN_141db4c10 body=2275 status=ok
// SIG undefined FUN_141db4c10(void)

void FUN_141db4c10(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  float fVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  short sVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  ushort uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  longlong *plVar17;
  int *piVar18;
  longlong lVar19;
  ushort uVar20;
  ushort uVar21;
  uint *puVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  int local_148 [2];
  longlong *local_140;
  undefined8 local_138;
  uint uStack_130;
  uint uStack_12c;
  undefined8 local_128;
  uint uStack_120;
  int iStack_11c;
  undefined1 local_118 [16];
  longlong *local_108;
  undefined2 local_100;
  longlong local_f8;
  longlong local_f0;
  longlong *local_e8;
  uint uStack_e0;
  uint uStack_dc;
  uint *puStack_d8;
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  
  plVar5 = *(longlong **)(param_2 + 0x18);
  if (plVar5 != (longlong *)0x0) {
    plVar1 = plVar5 + 0x82;
    plVar2 = plVar5 + 0x70;
    iVar4 = *(int *)(*param_1 + 0xfe8);
    *(undefined4 *)(plVar5 + 0x73) = 0;
    iVar10 = (int)(iVar4 + 0x1f + (iVar4 + 0x1f >> 0x1f & 0x1fU)) >> 5;
    iVar14 = iVar10 << 5;
    local_140 = plVar5;
    if (*(int *)((longlong)plVar5 + 0x39c) != iVar14) {
      *(int *)((longlong)plVar5 + 0x39c) = iVar14;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(plVar2);
    }
    if (iVar4 != 0) {
      *(int *)(plVar5 + 0x73) = iVar4;
      plVar17 = (longlong *)plVar5[0x72];
      if ((longlong *)plVar5[0x72] == (longlong *)0x0) {
        plVar17 = plVar2;
      }
      _guard_xfg_dispatch_icall_nop(plVar17,0,(longlong)iVar10 << 2);
    }
    iVar4 = *(int *)(*param_1 + 0xfe8);
    *(undefined4 *)(plVar5 + 0x77) = 0;
    iVar10 = (int)(iVar4 + 0x1f + (iVar4 + 0x1f >> 0x1f & 0x1fU)) >> 5;
    iVar14 = iVar10 << 5;
    if (*(int *)((longlong)plVar5 + 0x3bc) != iVar14) {
      *(int *)((longlong)plVar5 + 0x3bc) = iVar14;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(plVar5 + 0x74);
    }
    if (iVar4 != 0) {
      *(int *)(plVar5 + 0x77) = iVar4;
      plVar17 = (longlong *)plVar5[0x76];
      if ((longlong *)plVar5[0x76] == (longlong *)0x0) {
        plVar17 = plVar5 + 0x74;
      }
      _guard_xfg_dispatch_icall_nop(plVar17,0,(longlong)iVar10 << 2);
    }
    plVar17 = plVar5 + 0x78;
    iVar4 = *(int *)(*param_1 + 0xfe8);
    *(undefined4 *)(plVar5 + 0x7b) = 0;
    iVar10 = (int)(iVar4 + 0x1f + (iVar4 + 0x1f >> 0x1f & 0x1fU)) >> 5;
    iVar14 = iVar10 << 5;
    if (*(int *)((longlong)plVar5 + 0x3dc) != iVar14) {
      *(int *)((longlong)plVar5 + 0x3dc) = iVar14;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(plVar17);
    }
    if (iVar4 != 0) {
      *(int *)(plVar5 + 0x7b) = iVar4;
      plVar12 = (longlong *)plVar5[0x7a];
      if ((longlong *)plVar5[0x7a] == (longlong *)0x0) {
        plVar12 = plVar17;
      }
      _guard_xfg_dispatch_icall_nop(plVar12,0,(longlong)iVar10 << 2);
    }
    iVar4 = *(int *)(*param_1 + 0xfe8);
    *(undefined4 *)(plVar5 + 0x7f) = 0;
    iVar10 = (int)(iVar4 + 0x1f + (iVar4 + 0x1f >> 0x1f & 0x1fU)) >> 5;
    iVar14 = iVar10 << 5;
    if (*(int *)((longlong)plVar5 + 0x3fc) != iVar14) {
      *(int *)((longlong)plVar5 + 0x3fc) = iVar14;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(plVar5 + 0x7c);
    }
    if (iVar4 != 0) {
      *(int *)(plVar5 + 0x7f) = iVar4;
      plVar12 = (longlong *)plVar5[0x7e];
      if ((longlong *)plVar5[0x7e] == (longlong *)0x0) {
        plVar12 = plVar5 + 0x7c;
      }
      _guard_xfg_dispatch_icall_nop(plVar12,0,(longlong)iVar10 << 2);
    }
    if ((int)plVar5[0x73] == *(int *)(*param_1 + 0xfe8)) {
      sVar9 = (short)plVar5[0x81] + 1;
      *(short *)(plVar5 + 0x81) = sVar9;
      lVar11 = (**(code **)(*local_140 + 0x40))();
      bVar8 = false;
      if (*(float *)(lVar11 + 0x20) != *(float *)(plVar5 + 0x80)) {
        *(float *)(plVar5 + 0x80) = *(float *)(lVar11 + 0x20);
        bVar8 = true;
        lVar11 = FUN_1428742e0();
        if (*(int *)(lVar11 + 0x24) == 0) {
          *(undefined4 *)((longlong)plVar5 + 0x404) = 0x3f800000;
        }
        else {
          fVar23 = (float)FCachedSystemScalabilityCVars::CalculateFieldOfViewDistanceScale
                                    (lVar11,*(undefined4 *)(param_2 + 0xf70));
          *(float *)((longlong)plVar5 + 0x404) = fVar23 * fVar23;
        }
      }
      local_108 = param_1 + 1;
      iVar4 = (int)param_1[6];
      puStack_d8 = (uint *)(param_1 + 3);
      local_138._0_4_ = 0;
      local_138._4_4_ = 1;
      local_128._4_4_ = 0;
      uStack_120 = 0;
      if (iVar4 != 0) {
        puVar22 = (uint *)param_1[5];
        if ((uint *)param_1[5] == (uint *)0x0) {
          puVar22 = puStack_d8;
        }
        uVar15 = *puVar22;
        local_138._0_4_ = 0;
        uStack_120 = 0;
        while (uVar15 == 0) {
          lVar11 = (longlong)(int)(uint)local_138;
          uStack_120 = uStack_120 + 0x20;
          uVar15 = (uint)local_138 + 1;
          bVar7 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)(uint)local_138;
          local_138._0_4_ = uVar15;
          if (bVar7) goto LAB_141db4f44;
          uVar15 = puVar22[lVar11 + 1];
        }
        local_138._4_4_ = -uVar15 & uVar15;
        iVar10 = 0x1f;
        if (local_138._4_4_ != 0) {
          for (; local_138._4_4_ >> iVar10 == 0; iVar10 = iVar10 + -1) {
          }
        }
        if (local_138._4_4_ == 0) {
          iVar10 = 0x20;
        }
        else {
          iVar10 = 0x1f - iVar10;
        }
        local_128._4_4_ = (uStack_120 - iVar10) + 0x1f;
        if (iVar4 < local_128._4_4_) {
LAB_141db4f44:
          local_128._4_4_ = iVar4;
        }
      }
      auStack_d0._4_4_ = local_128._4_4_;
      auStack_d0._0_4_ = 0xffffffff;
      auStack_d0._8_4_ = uStack_120;
      auStack_d0._12_4_ = iStack_11c;
      uStack_e0 = (uint)local_138;
      uStack_dc = local_138._4_4_;
      local_100 = 0;
      local_c0._0_4_ = SUB84(local_108,0);
      local_c0._4_4_ = (undefined4)((ulonglong)local_108 >> 0x20);
      uStack_120 = 0xffffffff;
      iStack_11c = local_128._4_4_;
      uStack_130 = (uint)local_138;
      uStack_12c = local_138._4_4_;
      local_118._8_4_ = (undefined4)local_c0;
      local_118._0_8_ = auStack_d0._8_8_;
      local_118._12_4_ = local_c0._4_4_;
      bVar7 = local_128._4_4_ < (int)param_1[6];
      local_138 = local_108;
      local_e8 = local_108;
      local_c0 = local_108;
      local_128 = puStack_d8;
      if (bVar7) {
        do {
          lVar11 = *(longlong *)(*local_138 + 0x18 + (longlong)iStack_11c * 0x28);
          local_f8 = *local_138 + 8 + (longlong)iStack_11c * 0x28;
          if (lVar11 != 0) {
            iVar4 = *(int *)(lVar11 + 0x10);
            if ((iVar4 != 0) && ((*(int *)(lVar11 + 0xe8) + 1U & 0x7fffffff) != 0)) {
              if ((int)plVar5[0x83] != *(int *)((longlong)plVar5 + 0x444)) {
                plVar12 = (longlong *)plVar5[0x8a];
                if ((longlong *)plVar5[0x8a] == (longlong *)0x0) {
                  plVar12 = plVar5 + 0x89;
                }
                iVar10 = *(int *)((longlong)plVar12 +
                                 ((longlong)(int)plVar5[0x8b] - 1U & (longlong)iVar4) * 4);
                if (iVar10 != -1) {
                  do {
                    piVar18 = (int *)(*plVar1 + (longlong)iVar10 * 0x10);
                    if (*piVar18 == iVar4) {
                      if ((iVar10 != -1) && (piVar18 != (int *)0x0)) goto LAB_141db50d8;
                      break;
                    }
                    iVar10 = piVar18[2];
                  } while (iVar10 != -1);
                }
              }
              local_f0 = lVar11 + 0x10;
              FUN_141d7fac0(plVar1,local_148,&local_f0,0);
              piVar18 = (int *)((longlong)local_148[0] * 0x10 + *plVar1);
LAB_141db50d8:
              if (((short)piVar18[1] != sVar9) && (0 < *(int *)(lVar11 + 0x38))) {
                iVar4 = *(int *)(lVar11 + 0xe8);
                lVar19 = (longlong)iVar4;
                if ((-1 < iVar4) && (iVar4 < *(int *)(*param_1 + 0x1008))) {
                  lVar6 = *(longlong *)(*param_1 + 0x1000);
                  fVar23 = *(float *)(lVar6 + lVar19 * 0x28);
                  fVar26 = *(float *)(lVar6 + 4 + lVar19 * 0x28);
                  fVar28 = *(float *)(lVar6 + 8 + lVar19 * 0x28);
                  fVar30 = *(float *)(lVar6 + 0x1c + lVar19 * 0x28);
                  fVar27 = fVar23 - *(float *)(lVar6 + 0xc + lVar19 * 0x28);
                  fVar25 = fVar26 - *(float *)(lVar6 + 0x10 + lVar19 * 0x28);
                  fVar29 = fVar28 - *(float *)(lVar6 + 0x14 + lVar19 * 0x28);
                  fVar23 = fVar23 + *(float *)(lVar6 + 0xc + lVar19 * 0x28);
                  fVar26 = fVar26 + *(float *)(lVar6 + 0x10 + lVar19 * 0x28);
                  fVar28 = fVar28 + *(float *)(lVar6 + 0x14 + lVar19 * 0x28);
                  fVar3 = *(float *)(param_2 + 0x8dc);
                  fVar24 = 0.0;
                  bVar7 = ABS(fVar30) <= 1e-08;
                  if ((fVar3 < fVar27) || (fVar27 = fVar23, fVar23 < fVar3)) {
                    fVar24 = (fVar3 - fVar27) * (fVar3 - fVar27);
                  }
                  fVar23 = *(float *)(param_2 + 0x8e0);
                  if ((fVar23 < fVar25) || (fVar25 = fVar26, fVar26 < fVar23)) {
                    fVar24 = fVar24 + (fVar23 - fVar25) * (fVar23 - fVar25);
                  }
                  fVar23 = *(float *)(param_2 + 0x8e4);
                  if ((fVar23 < fVar29) || (fVar29 = fVar28, fVar28 < fVar23)) {
                    fVar24 = fVar24 + (fVar23 - fVar29) * (fVar23 - fVar29);
                  }
                  fVar30 = fVar30 * *(float *)((longlong)plVar5 + 0x404);
                  uVar20 = *(ushort *)((longlong)piVar18 + 6);
                  uVar21 = uVar20 >> 2;
                  if (((*(uint *)(**(longlong **)(lVar11 + 0x30) + 0x8c) >> 0x1a & 1) == 0) ||
                     (bVar7)) {
                    if ((fVar30 <= fVar24) || (bVar7)) {
                      uVar13 = 2;
                    }
                    else {
                      uVar13 = 0;
                    }
                    uVar20 = (uVar20 ^ (uVar20 >> 1 ^ uVar20) & 1) & 0xfff9 | uVar13;
LAB_141db52cf:
                    *(ushort *)((longlong)piVar18 + 6) = uVar20;
                  }
                  else if (bVar8) {
                    uVar13 = (ushort)(fVar30 <= fVar24);
                    if ((uVar21 & 1) == 0) {
                      if (uVar13 != (uVar20 & 1)) {
                        uVar20 = uVar20 | 4;
                      }
                    }
                    else {
                      uVar20 = uVar20 & 0xfffb;
                    }
                    uVar20 = uVar20 >> 1 & 1 | uVar20 & 0xfffc | uVar13 * 2;
                    goto LAB_141db52cf;
                  }
                  if (((((((byte)uVar20 >> 1 ^ (byte)uVar20) & 1) != 0) || ((uVar21 & 1) != 0)) ||
                      ((uVar20 & 4) != 0)) && (lVar11 = *(longlong *)(lVar11 + 200), lVar11 != 0)) {
                    do {
                      FUN_141d69180();
                      lVar11 = *(longlong *)(lVar11 + 0x38);
                    } while (lVar11 != 0);
                    uVar20 = *(ushort *)((longlong)piVar18 + 6);
                  }
                  if (((uVar20 & 2) == 0) && (iVar4 < *(int *)(param_2 + 0x1b38))) {
                    lVar11 = *(longlong *)(param_2 + 0x1b30);
                    *(undefined8 *)(lVar11 + lVar19 * 8) = 0;
                    puVar22 = (uint *)(lVar11 + 4 + lVar19 * 8);
                    *puVar22 = *puVar22 | 0x20000000;
                    uVar20 = *(ushort *)((longlong)piVar18 + 6);
                  }
                  uVar15 = 1 << ((byte)iVar4 & 0x1f);
                  lVar11 = (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5);
                  if ((uVar20 & 4) == 0) {
                    if ((uVar20 & 2) == 0) {
                      plVar12 = (longlong *)plVar5[0x7e];
                      if ((longlong *)plVar5[0x7e] == (longlong *)0x0) {
                        plVar12 = plVar5 + 0x7c;
                      }
                      puVar22 = (uint *)((longlong)plVar12 + lVar11 * 4);
                      *puVar22 = *puVar22 | uVar15;
                    }
                    else {
                      plVar12 = (longlong *)plVar5[0x7a];
                      if ((longlong *)plVar5[0x7a] == (longlong *)0x0) {
                        plVar12 = plVar17;
                      }
                      puVar22 = (uint *)((longlong)plVar12 + lVar11 * 4);
                      *puVar22 = *puVar22 | uVar15;
                      FUN_141d9dda0(param_1,local_140,local_f8);
                    }
                  }
                  else {
                    plVar12 = (longlong *)plVar5[0x72];
                    if ((longlong *)plVar5[0x72] == (longlong *)0x0) {
                      plVar12 = plVar2;
                    }
                    puVar22 = (uint *)((longlong)plVar12 + lVar11 * 4);
                    *puVar22 = *puVar22 | uVar15;
                    plVar12 = (longlong *)plVar5[0x76];
                    if ((longlong *)plVar5[0x76] == (longlong *)0x0) {
                      plVar12 = plVar5 + 0x74;
                    }
                    uVar16 = *(uint *)((longlong)plVar12 + lVar11 * 4);
                    if ((~(*(byte *)((longlong)piVar18 + 6) >> 1) & 1) == 0) {
                      uVar16 = uVar16 & ~uVar15;
                    }
                    else {
                      uVar16 = uVar16 | uVar15;
                    }
                    *(uint *)((longlong)plVar12 + lVar11 * 4) = uVar16;
                    plVar12 = (longlong *)plVar5[0x7a];
                    if ((longlong *)plVar5[0x7a] == (longlong *)0x0) {
                      plVar12 = plVar17;
                    }
                    puVar22 = (uint *)((longlong)plVar12 + lVar11 * 4);
                    *puVar22 = *puVar22 | uVar15;
                    FUN_141d8fbb0(param_1,local_140,local_f8,piVar18 + 1,1,
                                  *(byte *)((longlong)piVar18 + 6) >> 1 & 1);
                  }
                }
              }
            }
          }
          uStack_120 = uStack_120 & ~uStack_12c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_130);
        } while (iStack_11c < (int)local_128[6]);
        if (((char)local_100 != '\0') && (local_100._1_1_ != '\0')) {
          TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
          ::ConditionalRehash(local_108,(int)local_108[1] - *(int *)((longlong)local_108 + 0x34),1);
        }
      }
    }
  }
  return;
}



// FUNCTION 141db5500 Serialize body=104 status=ok
// SIG undefined Serialize(void)

undefined1 FFilterTranslucentVolumePS::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 0xc0);
  FUN_1419e0b60(param_2,param_1 + 0xc6);
  FUN_1419e0b60(param_2,param_1 + 0xca);
  FUN_1419e0b60(param_2,param_1 + 0xce);
  FUN_1419e0b60(param_2,param_1 + 0xd2);
  return 0;
}



// FUNCTION 141db5570 Serialize body=144 status=ok
// SIG undefined Serialize(void)

undefined1 FTranslucentObjectShadowingPS::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(param_2,param_1 + 0xc4);
  FUN_1419e0b60(param_2,param_1 + 200);
  FUN_1419e0b60(param_2,param_1 + 0xcc);
  FUN_1419e0a40(param_2,param_1 + 0xd0);
  FUN_1419e0a40(param_2,param_1 + 0xd6);
  FUN_1419e0a40(param_2,param_1 + 0xdc);
  return 0;
}



// FUNCTION 141db5600 FUN_141db5600 body=164 status=ok
// SIG undefined FUN_141db5600(void)

undefined1 FUN_141db5600(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_141d7c120();
  operator<<(param_2,param_1 + 0x110);
  FUN_1419e0a40(param_2,param_1 + 0x168);
  FUN_1419e0a40(param_2,param_1 + 0x16e);
  FUN_1419e0a40(param_2,param_1 + 0x174);
  FUN_1419e0a40(param_2,param_1 + 0x17a);
  FUN_1419e0a40(param_2,param_1 + 0x180);
  FUN_1419e0a40(param_2,param_1 + 0x186);
  return uVar1;
}



// FUNCTION 141db56b0 FUN_141db56b0 body=73 status=ok
// SIG undefined FUN_141db56b0(void)

longlong FUN_141db56b0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  FShader::~FShader(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,400);
  }
  return param_1;
}



// FUNCTION 141db5700 Serialize body=159 status=ok
// SIG undefined Serialize(void)

undefined1 FClearTranslucentLightingVolumeCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(uVar1,param_1 + 0xc4);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 200);
  FUN_1419e0b60(uVar1,param_1 + 0xcc);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xd0);
  FUN_1419e0b60(uVar1,param_1 + 0xd4);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xd8);
  FUN_1419e0b60(uVar1,param_1 + 0xdc);
  return 0;
}



// FUNCTION 141db57a0 FUN_141db57a0 body=29 status=ok
// SIG undefined FUN_141db57a0(void)

ulonglong FUN_141db57a0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_141ab2110(param_2,param_1 + 0xc0);
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 141db57c0 Serialize body=89 status=ok
// SIG undefined Serialize(void)

undefined1 FComputeTriangleAreasCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1419e0a40(param_2,param_1 + 0xc0);
  FUN_1419e0b60(param_2,param_1 + 0xc6);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xca);
  FUN_1419e0b60(uVar1,param_1 + 0xce);
  return 0;
}



// FUNCTION 141db5820 Serialize body=214 status=ok
// SIG undefined Serialize(void)

undefined1 FSampleTrianglesCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xc4);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 200);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xcc);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xd0);
  FUN_1419e0b60(uVar1,param_1 + 0xd4);
  FUN_1419e0a40(param_2,param_1 + 0xd8);
  FUN_1419e0a40(param_2,param_1 + 0xde);
  FUN_1419e0a40(param_2,param_1 + 0xe4);
  FUN_1419e0b60(param_2,param_1 + 0xea);
  FUN_1419e0b60(param_2,param_1 + 0xee);
  return 0;
}



// FUNCTION 141db5900 FUN_141db5900 body=360 status=ok
// SIG undefined FUN_141db5900(void)

void FUN_141db5900(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  FUN_141ce4020(&PTR_PTR_1464c2560);
  *(undefined1 *)(param_1 + 0xac) = 0;
  return;
}



// FUNCTION 141db5a70 FUN_141db5a70 body=246 status=ok
// SIG undefined FUN_141db5a70(void)

undefined1 FUN_141db5a70(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_141ad3f10(param_1 + 0xc0);
  FUN_141ad3f10(param_1 + 200,param_2);
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xd4);
  FUN_1419e0b60(uVar1,param_1 + 0xd8);
  FUN_1419e0b60(param_2,param_1 + 0xd0);
  FUN_1419e0a40(param_2,param_1 + 0xdc);
  FUN_1419e0a40(param_2,param_1 + 0xe2);
  FUN_1419e0b60(param_2,param_1 + 0xe8);
  FUN_1419e0b60(param_2,param_1 + 0xec);
  FUN_1419e0b60(param_2,param_1 + 0xf0);
  FUN_1419e0b60(param_2,param_1 + 0xf4);
  FUN_1419e0b60(param_2,param_1 + 0xf8);
  FUN_1419e0b60(param_2,param_1 + 0xfc);
  FUN_1419e0b60(param_2,param_1 + 0x100);
  return 0;
}



// FUNCTION 141db5b70 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FVPLResources>::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e82b48;
  FRenderResource::ReleaseResource();
  FUN_141dbd230(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 141db5bc0 Serialize body=119 status=ok
// SIG undefined Serialize(void)

undefined1 FParticleBoundsCS::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(param_2,param_1 + 0xc4);
  FUN_1419e0b60(param_2,param_1 + 200);
  FUN_1419e0b60(param_2,param_1 + 0xcc);
  FUN_1419e0a40(param_2,param_1 + 0xd0);
  FUN_1419e0a40(param_2,param_1 + 0xd6);
  return 0;
}



// FUNCTION 141db5c40 FUN_141db5c40 body=119 status=ok
// SIG undefined FUN_141db5c40(void)

undefined1 FUN_141db5c40(longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(param_2,param_1 + 0xc4);
  FUN_1419e0b60(param_2,param_1 + 200);
  FUN_1419e0a40(param_2,param_1 + 0xcc);
  FUN_1419e0b60(param_2,param_1 + 0xe0);
  FUN_1419e0a40(param_2,param_1 + 0xe4);
  return 0;
}



// FUNCTION 141db5cc0 FUN_141db5cc0 body=67 status=ok
// SIG undefined FUN_141db5cc0(void)

longlong FUN_141db5cc0(longlong param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xd8);
  FShader::~FShader(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 141db5d10 FUN_141db5d10 body=104 status=ok
// SIG undefined FUN_141db5d10(void)

undefined1 FUN_141db5d10(longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(param_2,param_1 + 0xc4);
  FUN_1419e0a40(param_2,param_1 + 200);
  FUN_1419e0b60(param_2,param_1 + 0xce);
  FUN_1419e0a40(param_2,param_1 + 0xd2);
  return 0;
}



// FUNCTION 141db5d80 FUN_141db5d80 body=164 status=ok
// SIG undefined FUN_141db5d80(void)

undefined1 FUN_141db5d80(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_141d7c390();
  FUN_1419e0a40(param_2,param_1 + 0x150);
  FUN_1419e0a40(param_2,param_1 + 0x156);
  FUN_1419e0b60(param_2,param_1 + 0x162);
  FUN_1419e0b60(param_2,param_1 + 0x166);
  FUN_1419e0b60(param_2,param_1 + 0x16a);
  FUN_1419e0b60(param_2,param_1 + 0x16e);
  FUN_1419e0a40(param_2,param_1 + 0x15c);
  return uVar1;
}



// FUNCTION 141db5e30 FUN_141db5e30 body=578 status=ok
// SIG undefined FUN_141db5e30(void)

int * FUN_141db5e30(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  bool bVar9;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<624,16>_>,FDefaultAllocator>::
      ResizeGrow(param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar5 = *(int *)((longlong)iVar7 * 0x270 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)((longlong)iVar5 * 0x270 + *param_1) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  puVar8 = (uint *)((longlong)plVar4 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar8 = *puVar8 | 1 << ((byte)iVar7 & 0x1f);
  puVar8 = (uint *)((longlong)iVar7 * 0x270 + *param_1);
  uVar1 = param_3[1];
  *puVar8 = *(uint *)*param_3;
  FCachedShadowMapData::FCachedShadowMapData(puVar8 + 4,uVar1);
  puVar8[0x98] = 0xffffffff;
  bVar9 = false;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 != 1) {
    if (iVar7 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar4 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar8) * 4);
      if (iVar5 != -1) {
        do {
          if (*(uint *)((longlong)iVar5 * 0x270 + *param_1) == *puVar8) goto LAB_141db5f91;
          iVar5 = *(int *)((longlong)iVar5 * 0x270 + 0x260 + *param_1);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_141db5f91:
    bVar9 = iVar5 != -1;
    if (bVar9) {
      _Dst = (void *)((longlong)iVar5 * 0x270 + *param_1);
      FCachedShadowMapData::~FCachedShadowMapData((longlong)_Dst + 0x10);
      _guard_xfg_dispatch_icall_nop(_Dst,puVar8,0x260);
      TSparseArray<TSetElement<TTuple<int,FCachedShadowMapData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar5;
      goto LAB_141db6047;
    }
  }
  cVar2 = TSet<TTuple<int,FCachedShadowMapData>,TDefaultMapHashableKeyFuncs<int,FCachedShadowMapData,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar7,0);
  if (cVar2 == '\0') {
    uVar6 = (int)param_1[9] - 1U & *puVar8;
    puVar8[0x99] = uVar6;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    puVar8[0x98] = *(uint *)((longlong)plVar4 +
                            ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
LAB_141db6047:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar9;
  }
  return param_2;
}



// FUNCTION 141db6080 FUN_141db6080 body=91 status=ok
// SIG undefined FUN_141db6080(void)

undefined8 FUN_141db6080(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [6];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146aa87a0;
  local_10 = param_2;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141db60e0 FUN_141db60e0 body=91 status=ok
// SIG undefined FUN_141db60e0(void)

undefined8 FUN_141db60e0(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [6];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146aa8a40;
  local_10 = param_2;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141db6140 FUN_141db6140 body=91 status=ok
// SIG undefined FUN_141db6140(void)

undefined8 FUN_141db6140(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [6];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146aa8f80;
  local_10 = param_2;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141db61a0 FUN_141db61a0 body=91 status=ok
// SIG undefined FUN_141db61a0(void)

undefined8 FUN_141db61a0(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [6];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146aa9220;
  local_10 = param_2;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141db6200 FUN_141db6200 body=91 status=ok
// SIG undefined FUN_141db6200(void)

undefined8 FUN_141db6200(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [6];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146aa88f0;
  local_10 = param_2;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141db6260 FUN_141db6260 body=91 status=ok
// SIG undefined FUN_141db6260(void)

undefined8 FUN_141db6260(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [6];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146aa8b90;
  local_10 = param_2;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141db62c0 FUN_141db62c0 body=91 status=ok
// SIG undefined FUN_141db62c0(void)

undefined8 FUN_141db62c0(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [6];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146aa90d0;
  local_10 = param_2;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141db6320 FUN_141db6320 body=91 status=ok
// SIG undefined FUN_141db6320(void)

undefined8 FUN_141db6320(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [6];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146aa9370;
  local_10 = param_2;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141db6380 FUN_141db6380 body=91 status=ok
// SIG undefined FUN_141db6380(void)

undefined8 FUN_141db6380(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [6];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146aa8500;
  local_10 = param_2;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141db63e0 FUN_141db63e0 body=91 status=ok
// SIG undefined FUN_141db63e0(void)

undefined8 FUN_141db63e0(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [6];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146aa8ce0;
  local_10 = param_2;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141db6440 FUN_141db6440 body=91 status=ok
// SIG undefined FUN_141db6440(void)

undefined8 FUN_141db6440(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [6];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146aa8650;
  local_10 = param_2;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141db64a0 FUN_141db64a0 body=91 status=ok
// SIG undefined FUN_141db64a0(void)

undefined8 FUN_141db64a0(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res10 [6];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146aa8e30;
  local_10 = param_2;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x38),local_res10,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res10[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(param_1 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return *puVar1;
}



// FUNCTION 141db6500 HeapSortInternal<FProjectedShadowInfo_*,FIdentityFunctor,TDereferenceWrapper<FProjectedShadowInfo_*,FCompareFProjectedShadowInfoByResolution>_> body=462 status=ok
// SIG undefined HeapSortInternal<FProjectedShadowInfo_*,FIdentityFunctor,TDereferenceWrapper<FProjectedShadowInfo_*,FCompareFProjectedShadowInfoByResolution>_>(void)

void AlgoImpl::
     HeapSortInternal<FProjectedShadowInfo_*,FIdentityFunctor,TDereferenceWrapper<FProjectedShadowInfo_*,FCompareFProjectedShadowInfoByResolution>_>
               (undefined8 *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  iVar5 = (param_2 + -2) / 2;
  if (-1 < iVar5) {
    iVar6 = iVar5 * 2 + 1;
    iVar4 = iVar6;
    iVar7 = iVar5;
joined_r0x000141db6534:
    do {
      if (iVar6 < param_2) {
        iVar6 = iVar5 * 2;
        iVar9 = iVar6 + 1;
        if (iVar6 + 2 < param_2) {
          if ((uint)(*(int *)(param_1[iVar9] + 0x53c) * *(int *)(param_1[iVar9] + 0x538)) <
              (uint)(*(int *)(param_1[(longlong)iVar6 + 2] + 0x53c) *
                    *(int *)(param_1[(longlong)iVar6 + 2] + 0x538))) {
            iVar9 = iVar6;
          }
          iVar9 = iVar9 + 1;
        }
        lVar8 = param_1[iVar9];
        lVar1 = param_1[iVar5];
        if ((uint)(*(int *)(lVar8 + 0x53c) * *(int *)(lVar8 + 0x538)) <
            (uint)(*(int *)(lVar1 + 0x53c) * *(int *)(lVar1 + 0x538))) {
          param_1[iVar5] = lVar8;
          iVar6 = iVar9 * 2 + 1;
          param_1[iVar9] = lVar1;
          iVar5 = iVar9;
          goto joined_r0x000141db6534;
        }
      }
      iVar6 = iVar4 + -2;
      iVar5 = iVar7 + -1;
      iVar4 = iVar6;
      iVar7 = iVar5;
    } while (-1 < iVar5);
  }
  param_2 = param_2 + -1;
  lVar8 = (longlong)param_2;
  if (0 < param_2) {
    do {
      iVar5 = 0;
      uVar2 = *param_1;
      *param_1 = param_1[lVar8];
      param_1[lVar8] = uVar2;
      if (1 < param_2) {
        do {
          iVar4 = iVar5 * 2;
          iVar6 = iVar4 + 1;
          if (iVar4 + 2 < param_2) {
            if ((uint)(*(int *)(param_1[iVar6] + 0x53c) * *(int *)(param_1[iVar6] + 0x538)) <
                (uint)(*(int *)(param_1[(longlong)iVar4 + 2] + 0x53c) *
                      *(int *)(param_1[(longlong)iVar4 + 2] + 0x538))) {
              iVar6 = iVar4;
            }
            iVar6 = iVar6 + 1;
          }
          lVar1 = param_1[iVar6];
          lVar3 = param_1[iVar5];
          if ((uint)(*(int *)(lVar3 + 0x53c) * *(int *)(lVar3 + 0x538)) <=
              (uint)(*(int *)(lVar1 + 0x53c) * *(int *)(lVar1 + 0x538))) break;
          param_1[iVar5] = lVar1;
          param_1[iVar6] = lVar3;
          iVar5 = iVar6;
        } while (iVar6 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar8 = lVar8 + -1;
    } while (0 < lVar8);
  }
  return;
}



// FUNCTION 141db66d0 HeapSortInternal<FProjectedShadowInfo_*,FIdentityFunctor,TDereferenceWrapper<FProjectedShadowInfo_*,FCompareFProjectedShadowInfoBySplitIndex>_> body=1045 status=ok
// SIG undefined HeapSortInternal<FProjectedShadowInfo_*,FIdentityFunctor,TDereferenceWrapper<FProjectedShadowInfo_*,FCompareFProjectedShadowInfoBySplitIndex>_>(void)

void AlgoImpl::
     HeapSortInternal<FProjectedShadowInfo_*,FIdentityFunctor,TDereferenceWrapper<FProjectedShadowInfo_*,FCompareFProjectedShadowInfoBySplitIndex>_>
               (undefined8 *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  
  iVar5 = (param_2 + -2) / 2;
  if (-1 < iVar5) {
    iVar8 = iVar5 * 2 + 1;
    iVar4 = iVar8;
    iVar11 = iVar5;
joined_r0x000141db670a:
    do {
      if (iVar8 < param_2) {
        iVar8 = iVar5 * 2;
        iVar10 = iVar8 + 1;
        if (iVar8 + 2 < param_2) {
          lVar12 = param_1[iVar10];
          lVar1 = param_1[(longlong)iVar8 + 2];
          uVar6 = *(uint *)(lVar1 + 0x560);
          if ((((uVar6 & 0x40) == 0) || (*(int *)(lVar1 + 0x524) < 0)) || ((uVar6 & 0x10) == 0)) {
            bVar13 = false;
          }
          else {
            bVar13 = true;
          }
          uVar7 = *(uint *)(lVar12 + 0x560);
          if (bVar13) {
            if ((((uVar7 & 0x40) == 0) || (*(int *)(lVar12 + 0x524) < 0)) || ((uVar7 & 0x10) == 0))
            {
LAB_141db6793:
              bVar13 = true;
            }
            else {
              uVar9 = uVar6 >> 9 & 1;
              uVar6 = uVar7 >> 9 & 1;
              bVar13 = SUB41(uVar6,0);
              if (uVar9 != uVar6) {
                if (uVar9 == 0) {
                  if (uVar6 != 0) goto LAB_141db6793;
                }
                else if (uVar6 == 0) goto LAB_141db67e1;
              }
              bVar13 = *(int *)(lVar12 + 0x524) < *(int *)(lVar1 + 0x524);
            }
          }
          else if ((((uVar7 & 0x40) == 0) || (*(int *)(lVar12 + 0x524) < 0)) ||
                  ((uVar7 & 0x10) == 0)) {
            bVar13 = (uint)(*(int *)(lVar12 + 0x53c) * *(int *)(lVar12 + 0x538)) <
                     (uint)(*(int *)(lVar1 + 0x53c) * *(int *)(lVar1 + 0x538));
          }
          else {
            bVar13 = false;
          }
LAB_141db67e1:
          if (bVar13 != false) {
            iVar10 = iVar8;
          }
          iVar10 = iVar10 + 1;
        }
        lVar12 = param_1[iVar10];
        lVar1 = param_1[iVar5];
        uVar6 = *(uint *)(lVar1 + 0x560);
        if ((((uVar6 & 0x40) == 0) || (*(int *)(lVar1 + 0x524) < 0)) || ((uVar6 & 0x10) == 0)) {
          bVar13 = false;
        }
        else {
          bVar13 = true;
        }
        uVar7 = *(uint *)(lVar12 + 0x560);
        if (bVar13) {
          if ((((uVar7 & 0x40) != 0) && (-1 < *(int *)(lVar12 + 0x524))) && ((uVar7 & 0x10) != 0)) {
            uVar7 = uVar7 >> 9 & 1;
            uVar6 = uVar6 >> 9 & 1;
            if (uVar6 != uVar7) {
              if (uVar6 == 0) {
                if (uVar7 != 0) goto LAB_141db68ad;
              }
              else if (uVar7 == 0) goto LAB_141db68c4;
            }
            bVar13 = *(int *)(lVar12 + 0x524) < *(int *)(lVar1 + 0x524);
LAB_141db68a9:
            if (!bVar13) goto LAB_141db68c4;
          }
LAB_141db68ad:
          param_1[iVar5] = lVar12;
          iVar8 = iVar10 * 2 + 1;
          param_1[iVar10] = lVar1;
          iVar5 = iVar10;
          goto joined_r0x000141db670a;
        }
        if ((((uVar7 & 0x40) == 0) || (*(int *)(lVar12 + 0x524) < 0)) || ((uVar7 & 0x10) == 0)) {
          bVar13 = (uint)(*(int *)(lVar12 + 0x53c) * *(int *)(lVar12 + 0x538)) <
                   (uint)(*(int *)(lVar1 + 0x53c) * *(int *)(lVar1 + 0x538));
          goto LAB_141db68a9;
        }
      }
LAB_141db68c4:
      iVar8 = iVar4 + -2;
      iVar5 = iVar11 + -1;
      iVar4 = iVar8;
      iVar11 = iVar5;
    } while (-1 < iVar5);
  }
  param_2 = param_2 + -1;
  lVar12 = (longlong)param_2;
  if (0 < param_2) {
    do {
      uVar2 = *param_1;
      *param_1 = param_1[lVar12];
      param_1[lVar12] = uVar2;
      iVar5 = 0;
      if (1 < param_2) {
        do {
          iVar4 = iVar5 * 2;
          iVar8 = iVar4 + 1;
          if (iVar4 + 2 < param_2) {
            lVar1 = param_1[iVar8];
            lVar3 = param_1[(longlong)iVar4 + 2];
            uVar6 = *(uint *)(lVar3 + 0x560);
            if ((((uVar6 & 0x40) == 0) || (*(int *)(lVar3 + 0x524) < 0)) || ((uVar6 & 0x10) == 0)) {
              bVar13 = false;
            }
            else {
              bVar13 = true;
            }
            uVar7 = *(uint *)(lVar1 + 0x560);
            if (bVar13) {
              if ((((uVar7 & 0x40) == 0) || (*(int *)(lVar1 + 0x524) < 0)) || ((uVar7 & 0x10) == 0))
              {
LAB_141db6993:
                bVar13 = true;
              }
              else {
                uVar9 = uVar6 >> 9 & 1;
                uVar6 = uVar7 >> 9 & 1;
                bVar13 = SUB41(uVar6,0);
                if (uVar9 != uVar6) {
                  if (uVar9 == 0) {
                    if (uVar6 != 0) goto LAB_141db6993;
                  }
                  else if (uVar6 == 0) goto LAB_141db69e1;
                }
                bVar13 = *(int *)(lVar1 + 0x524) < *(int *)(lVar3 + 0x524);
              }
            }
            else if ((((uVar7 & 0x40) == 0) || (*(int *)(lVar1 + 0x524) < 0)) ||
                    ((uVar7 & 0x10) == 0)) {
              bVar13 = (uint)(*(int *)(lVar1 + 0x53c) * *(int *)(lVar1 + 0x538)) <
                       (uint)(*(int *)(lVar3 + 0x53c) * *(int *)(lVar3 + 0x538));
            }
            else {
              bVar13 = false;
            }
LAB_141db69e1:
            if (bVar13 != false) {
              iVar8 = iVar4;
            }
            iVar8 = iVar8 + 1;
          }
          lVar1 = param_1[iVar8];
          lVar3 = param_1[iVar5];
          uVar6 = *(uint *)(lVar3 + 0x560);
          if ((((uVar6 & 0x40) == 0) || (*(int *)(lVar3 + 0x524) < 0)) || ((uVar6 & 0x10) == 0)) {
            bVar13 = false;
          }
          else {
            bVar13 = true;
          }
          uVar7 = *(uint *)(lVar1 + 0x560);
          if (bVar13) {
            if ((((uVar7 & 0x40) != 0) && (-1 < *(int *)(lVar1 + 0x524))) && ((uVar7 & 0x10) != 0))
            {
              uVar7 = uVar7 >> 9 & 1;
              uVar6 = uVar6 >> 9 & 1;
              if (uVar6 != uVar7) {
                if (uVar6 == 0) {
                  if (uVar7 != 0) goto LAB_141db6aad;
                }
                else if (uVar7 == 0) break;
              }
              bVar13 = *(int *)(lVar1 + 0x524) < *(int *)(lVar3 + 0x524);
              goto LAB_141db6aa9;
            }
          }
          else {
            if ((((uVar7 & 0x40) != 0) && (-1 < *(int *)(lVar1 + 0x524))) && ((uVar7 & 0x10) != 0))
            break;
            bVar13 = (uint)(*(int *)(lVar1 + 0x53c) * *(int *)(lVar1 + 0x538)) <
                     (uint)(*(int *)(lVar3 + 0x53c) * *(int *)(lVar3 + 0x538));
LAB_141db6aa9:
            if (!bVar13) break;
          }
LAB_141db6aad:
          param_1[iVar5] = lVar1;
          param_1[iVar8] = lVar3;
          iVar5 = iVar8;
        } while (iVar8 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar12 = lVar12 + -1;
    } while (0 < lVar12);
  }
  return;
}



// FUNCTION 141db6af0 FUN_141db6af0 body=508 status=ok
// SIG undefined FUN_141db6af0(void)

void FUN_141db6af0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  
  iVar8 = (param_2 + -2) / 2;
  if (-1 < iVar8) {
    iVar9 = iVar8 * 2 + 1;
    iVar4 = iVar9;
    iVar10 = iVar8;
joined_r0x000141db6b1a:
    do {
      if (iVar9 < param_2) {
        iVar9 = iVar8 * 2;
        iVar12 = iVar9 + 1;
        if (iVar9 + 2 < param_2) {
          if (*(short *)(param_1[(longlong)iVar9 * 3 + 7] + 0x170) <
              *(short *)(param_1[(longlong)iVar12 * 3 + 1] + 0x170)) {
            iVar12 = iVar9;
          }
          iVar12 = iVar12 + 1;
        }
        puVar11 = param_1 + (longlong)iVar12 * 3;
        puVar1 = param_1 + (longlong)iVar8 * 3;
        if (*(short *)(param_1[(longlong)iVar8 * 3 + 1] + 0x170) < *(short *)(puVar11[1] + 0x170)) {
          if (puVar1 != puVar11) {
            uVar5 = puVar11[1];
            uVar6 = *puVar1;
            uVar7 = puVar1[1];
            uVar3 = puVar1[2];
            *puVar1 = *puVar11;
            puVar1[1] = uVar5;
            puVar1[2] = puVar11[2];
            *puVar11 = uVar6;
            puVar11[1] = uVar7;
            puVar11[2] = uVar3;
          }
          iVar9 = iVar12 * 2 + 1;
          iVar8 = iVar12;
          goto joined_r0x000141db6b1a;
        }
      }
      iVar9 = iVar4 + -2;
      iVar8 = iVar10 + -1;
      iVar4 = iVar9;
      iVar10 = iVar8;
    } while (-1 < iVar8);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar11 = param_1 + (longlong)param_2 * 3;
    do {
      if (param_1 != puVar11) {
        uVar5 = puVar11[1];
        uVar6 = *param_1;
        uVar7 = param_1[1];
        uVar3 = param_1[2];
        *param_1 = *puVar11;
        param_1[1] = uVar5;
        param_1[2] = puVar11[2];
        *puVar11 = uVar6;
        puVar11[1] = uVar7;
        puVar11[2] = uVar3;
      }
      iVar8 = 0;
      if (1 < param_2) {
        do {
          iVar4 = iVar8 * 2;
          iVar9 = iVar4 + 1;
          if (iVar4 + 2 < param_2) {
            if (*(short *)(param_1[(longlong)iVar4 * 3 + 7] + 0x170) <
                *(short *)(param_1[(longlong)iVar9 * 3 + 1] + 0x170)) {
              iVar9 = iVar4;
            }
            iVar9 = iVar9 + 1;
          }
          puVar1 = param_1 + (longlong)iVar9 * 3;
          puVar2 = param_1 + (longlong)iVar8 * 3;
          if (*(short *)(puVar1[1] + 0x170) <= *(short *)(param_1[(longlong)iVar8 * 3 + 1] + 0x170))
          break;
          if (puVar2 != puVar1) {
            uVar5 = puVar1[1];
            uVar6 = *puVar2;
            uVar7 = puVar2[1];
            uVar3 = puVar2[2];
            *puVar2 = *puVar1;
            puVar2[1] = uVar5;
            puVar2[2] = puVar1[2];
            *puVar1 = uVar6;
            puVar1[1] = uVar7;
            puVar1[2] = uVar3;
          }
          iVar8 = iVar9;
        } while (iVar9 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar11 = puVar11 + -3;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 141db6cf0 HeapSortInternal<TRefCountPtr<FProjectedShadowInfo>,FIdentityFunctor,TDereferenceWrapper<TRefCountPtr<FProjectedShadowInfo>,FComparePreshadows>_> body=501 status=ok
// SIG undefined HeapSortInternal<TRefCountPtr<FProjectedShadowInfo>,FIdentityFunctor,TDereferenceWrapper<TRefCountPtr<FProjectedShadowInfo>,FComparePreshadows>_>(void)

void AlgoImpl::
     HeapSortInternal<TRefCountPtr<FProjectedShadowInfo>,FIdentityFunctor,TDereferenceWrapper<TRefCountPtr<FProjectedShadowInfo>,FComparePreshadows>_>
               (undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  
  iVar6 = (param_2 + -2) / 2;
  if (-1 < iVar6) {
    iVar7 = iVar6 * 2 + 1;
    iVar5 = iVar7;
    iVar8 = iVar6;
joined_r0x000141db6d25:
    do {
      if (iVar7 < param_2) {
        iVar7 = iVar6 * 2;
        iVar10 = iVar7 + 1;
        if (iVar7 + 2 < param_2) {
          if ((uint)(*(int *)(param_1[iVar10] + 0x53c) * *(int *)(param_1[iVar10] + 0x538)) <
              (uint)(*(int *)(param_1[(longlong)iVar7 + 2] + 0x53c) *
                    *(int *)(param_1[(longlong)iVar7 + 2] + 0x538))) {
            iVar10 = iVar7;
          }
          iVar10 = iVar10 + 1;
        }
        plVar1 = param_1 + iVar6;
        plVar2 = param_1 + iVar10;
        if ((uint)(*(int *)(param_1[iVar10] + 0x53c) * *(int *)(param_1[iVar10] + 0x538)) <
            (uint)(*(int *)(*plVar1 + 0x53c) * *(int *)(*plVar1 + 0x538))) {
          if (plVar1 != plVar2) {
            lVar3 = *plVar1;
            *plVar1 = *plVar2;
            *plVar2 = lVar3;
          }
          iVar7 = iVar10 * 2 + 1;
          iVar6 = iVar10;
          goto joined_r0x000141db6d25;
        }
      }
      iVar7 = iVar5 + -2;
      iVar6 = iVar8 + -1;
      iVar5 = iVar7;
      iVar8 = iVar6;
    } while (-1 < iVar6);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar9 = param_1 + param_2;
    do {
      if (param_1 != puVar9) {
        uVar4 = *param_1;
        *param_1 = *puVar9;
        *puVar9 = uVar4;
      }
      iVar6 = 0;
      if (1 < param_2) {
        do {
          iVar5 = iVar6 * 2;
          iVar7 = iVar5 + 1;
          if (iVar5 + 2 < param_2) {
            if ((uint)(*(int *)(param_1[iVar7] + 0x53c) * *(int *)(param_1[iVar7] + 0x538)) <
                (uint)(*(int *)(param_1[(longlong)iVar5 + 2] + 0x53c) *
                      *(int *)(param_1[(longlong)iVar5 + 2] + 0x538))) {
              iVar7 = iVar5;
            }
            iVar7 = iVar7 + 1;
          }
          plVar1 = param_1 + iVar6;
          plVar2 = param_1 + iVar7;
          if ((uint)(*(int *)(*plVar1 + 0x53c) * *(int *)(*plVar1 + 0x538)) <=
              (uint)(*(int *)(param_1[iVar7] + 0x53c) * *(int *)(param_1[iVar7] + 0x538))) break;
          if (plVar1 != plVar2) {
            lVar3 = *plVar1;
            *plVar1 = *plVar2;
            *plVar2 = lVar3;
          }
          iVar6 = iVar7;
        } while (iVar7 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar9 = puVar9 + -1;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 141db6ef0 IntroSortInternal<FProjectedShadowInfo_*,FIdentityFunctor,TDereferenceWrapper<FProjectedShadowInfo_*,FCompareFProjectedShadowInfoByResolution>_> body=687 status=ok
// SIG undefined IntroSortInternal<FProjectedShadowInfo_*,FIdentityFunctor,TDereferenceWrapper<FProjectedShadowInfo_*,FCompareFProjectedShadowInfoByResolution>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FProjectedShadowInfo_*,FIdentityFunctor,TDereferenceWrapper<FProjectedShadowInfo_*,FCompareFProjectedShadowInfoByResolution>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  float fVar11;
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
    fVar11 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar11 = fVar11 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar11 = ::_guard_xfg_dispatch_icall_nop(fVar11);
    local_328 = (undefined4)(longlong)(fVar11 + fVar11);
    ::_guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar10 = &local_338;
    do {
      plVar6 = (longlong *)*plVar10;
      plVar2 = (longlong *)plVar10[1];
      lVar1 = plVar10[2];
      local_348._0_4_ = (int)lVar1;
      lVar3 = (longlong)plVar2 - (longlong)plVar6;
      plVar5 = plVar2;
      plVar9 = plVar6;
      if ((int)local_348 != 0) {
LAB_141db6fc0:
        lVar4 = (lVar3 >> 3) + 1;
        if (8 < lVar4) {
          if (lVar4 < 0) {
            lVar4 = (lVar3 >> 3) + 2;
          }
          plVar7 = plVar5 + 1;
          lVar3 = plVar9[lVar4 >> 1];
          plVar9[lVar4 >> 1] = *plVar9;
          *plVar9 = lVar3;
          plVar6 = plVar9;
LAB_141db6ff0:
          plVar6 = plVar6 + 1;
          if (plVar6 <= plVar5) goto code_r0x000141db6ff9;
          goto LAB_141db7020;
        }
        for (; plVar2 = plVar9, plVar6 = plVar9, plVar9 < plVar5; plVar5 = plVar5 + -1) {
          while (plVar7 = plVar2, plVar6 = plVar6 + 1, plVar6 <= plVar5) {
            plVar2 = plVar6;
            if ((uint)(*(int *)(*plVar7 + 0x53c) * *(int *)(*plVar7 + 0x538)) <=
                (uint)(*(int *)(*plVar6 + 0x53c) * *(int *)(*plVar6 + 0x538))) {
              plVar2 = plVar7;
            }
          }
          lVar1 = *plVar7;
          *plVar7 = *plVar5;
          *plVar5 = lVar1;
        }
        goto LAB_141db70f3;
      }
LAB_141db70e4:
      local_348 = lVar1;
      HeapSortInternal<FProjectedShadowInfo_*,FIdentityFunctor,TDereferenceWrapper<FProjectedShadowInfo_*,FCompareFProjectedShadowInfoByResolution>_>
                (plVar6,plVar2,param_3,param_4);
LAB_141db70f3:
      plVar10 = plVar10 + -3;
    } while (&local_338 <= plVar10);
  }
  return;
code_r0x000141db6ff9:
  if ((uint)(*(int *)(*plVar9 + 0x53c) * *(int *)(*plVar9 + 0x538)) <=
      (uint)(*(int *)(*plVar6 + 0x53c) * *(int *)(*plVar6 + 0x538))) goto LAB_141db6ff0;
LAB_141db7020:
  do {
    plVar8 = plVar7;
    lVar3 = plVar8[-1];
    plVar7 = plVar8 + -1;
    if (plVar7 <= plVar9) break;
  } while ((uint)(*(int *)(lVar3 + 0x53c) * *(int *)(lVar3 + 0x538)) <=
           (uint)(*(int *)(*plVar9 + 0x53c) * *(int *)(*plVar9 + 0x538)));
  if (plVar6 <= plVar7) {
    lVar4 = *plVar6;
    *plVar6 = lVar3;
    *plVar7 = lVar4;
    goto LAB_141db6ff0;
  }
  lVar4 = *plVar9;
  *plVar9 = lVar3;
  *plVar7 = lVar4;
  local_348._0_4_ = (int)local_348 + -1;
  if ((longlong)((longlong)plVar7 + (-8 - (longlong)plVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)plVar5 - (longlong)plVar6 & 0xfffffffffffffff8U)) {
    if (plVar6 < plVar5) {
      *plVar10 = (longlong)plVar6;
      plVar10[1] = (longlong)plVar5;
      *(int *)(plVar10 + 2) = (int)local_348;
      plVar10 = plVar10 + 3;
    }
    if (plVar7 <= plVar9 + 1) goto LAB_141db70f3;
    plVar5 = plVar8 + -2;
    plVar6 = plVar9;
  }
  else {
    if (plVar9 + 1 < plVar7) {
      *plVar10 = (longlong)plVar9;
      plVar10[1] = (longlong)(plVar8 + -2);
      *(int *)(plVar10 + 2) = (int)local_348;
      plVar10 = plVar10 + 3;
    }
    if (plVar5 <= plVar6) goto LAB_141db70f3;
  }
  lVar3 = (longlong)plVar5 - (longlong)plVar6;
  plVar9 = plVar6;
  if ((int)local_348 == 0) goto LAB_141db70e4;
  goto LAB_141db6fc0;
}



// FUNCTION 141db71a0 IntroSortInternal<FProjectedShadowInfo_*,FIdentityFunctor,TDereferenceWrapper<FProjectedShadowInfo_*,FCompareFProjectedShadowInfoBySplitIndex>_> body=1246 status=ok
// SIG undefined IntroSortInternal<FProjectedShadowInfo_*,FIdentityFunctor,TDereferenceWrapper<FProjectedShadowInfo_*,FCompareFProjectedShadowInfoBySplitIndex>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FProjectedShadowInfo_*,FIdentityFunctor,TDereferenceWrapper<FProjectedShadowInfo_*,FCompareFProjectedShadowInfoBySplitIndex>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  float fVar16;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_1 + (param_2 - 1) * 8;
    fVar16 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar16 = fVar16 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar16 = ::_guard_xfg_dispatch_icall_nop(fVar16);
    local_338 = (undefined4)(longlong)(fVar16 + fVar16);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar12 = &local_348;
    do {
      plVar9 = (longlong *)*plVar12;
      plVar3 = (longlong *)plVar12[1];
      lVar1 = plVar12[2];
      local_358._0_4_ = (int)lVar1;
      lVar7 = (longlong)plVar3 - (longlong)plVar9;
      plVar13 = plVar9;
      plVar14 = plVar3;
      if ((int)local_358 == 0) {
LAB_141db7508:
        local_358 = lVar1;
        HeapSortInternal<FProjectedShadowInfo_*,FIdentityFunctor,TDereferenceWrapper<FProjectedShadowInfo_*,FCompareFProjectedShadowInfoBySplitIndex>_>
                  (plVar9,plVar3,param_3,param_4);
      }
      else {
LAB_141db7280:
        lVar8 = (lVar7 >> 3) + 1;
        if (8 < lVar8) {
          if (lVar8 < 0) {
            lVar8 = (lVar7 >> 3) + 2;
          }
          plVar10 = plVar14 + 1;
          lVar7 = plVar13[lVar8 >> 1];
          plVar13[lVar8 >> 1] = *plVar13;
          *plVar13 = lVar7;
          plVar9 = plVar13;
LAB_141db72b0:
          while( true ) {
            plVar9 = plVar9 + 1;
            if (plVar14 < plVar9) goto LAB_141db7390;
            lVar7 = *plVar13;
            lVar8 = *plVar9;
            uVar4 = *(uint *)(lVar7 + 0x560);
            if ((((uVar4 & 0x40) == 0) || (*(int *)(lVar7 + 0x524) < 0)) || ((uVar4 & 0x10) == 0)) {
              bVar15 = false;
            }
            else {
              bVar15 = true;
            }
            uVar5 = *(uint *)(lVar8 + 0x560);
            if (!bVar15) goto LAB_141db734d;
            if ((((uVar5 & 0x40) == 0) || (iVar2 = *(int *)(lVar8 + 0x524), iVar2 < 0)) ||
               ((uVar5 & 0x10) == 0)) goto LAB_141db7390;
            uVar6 = uVar4 >> 9 & 1;
            uVar4 = uVar5 >> 9 & 1;
            if (uVar6 == uVar4) break;
            if (uVar6 == 0) {
              if (uVar4 != 0) goto LAB_141db7390;
              bVar15 = iVar2 < *(int *)(lVar7 + 0x524);
              goto LAB_141db7384;
            }
            if (uVar4 != 0) break;
          }
          bVar15 = iVar2 < *(int *)(lVar7 + 0x524);
          goto LAB_141db7384;
        }
        for (; plVar3 = plVar13, plVar9 = plVar13, plVar13 < plVar14; plVar14 = plVar14 + -1) {
          while (plVar10 = plVar3, plVar9 = plVar9 + 1, plVar9 <= plVar14) {
            lVar1 = *plVar10;
            lVar7 = *plVar9;
            uVar4 = *(uint *)(lVar1 + 0x560);
            if ((((uVar4 & 0x40) == 0) || (*(int *)(lVar1 + 0x524) < 0)) || ((uVar4 & 0x10) == 0)) {
              bVar15 = false;
            }
            else {
              bVar15 = true;
            }
            uVar5 = *(uint *)(lVar7 + 0x560);
            if (bVar15) {
              if ((((uVar5 & 0x40) == 0) || (*(int *)(lVar7 + 0x524) < 0)) || ((uVar5 & 0x10) == 0))
              {
LAB_141db75f8:
                bVar15 = true;
              }
              else {
                uVar6 = uVar4 >> 9 & 1;
                uVar4 = uVar5 >> 9 & 1;
                if (uVar6 != uVar4) {
                  if (uVar6 == 0) {
                    if (uVar4 != 0) goto LAB_141db75f8;
                  }
                  else if (uVar4 == 0) {
                    bVar15 = false;
                    goto LAB_141db7647;
                  }
                }
                bVar15 = *(int *)(lVar7 + 0x524) < *(int *)(lVar1 + 0x524);
              }
            }
            else if ((((uVar5 & 0x40) == 0) || (*(int *)(lVar7 + 0x524) < 0)) ||
                    ((uVar5 & 0x10) == 0)) {
              bVar15 = (uint)(*(int *)(lVar7 + 0x53c) * *(int *)(lVar7 + 0x538)) <
                       (uint)(*(int *)(lVar1 + 0x53c) * *(int *)(lVar1 + 0x538));
            }
            else {
              bVar15 = false;
            }
LAB_141db7647:
            plVar3 = plVar9;
            if (!bVar15) {
              plVar3 = plVar10;
            }
          }
          lVar1 = *plVar10;
          *plVar10 = *plVar14;
          *plVar14 = lVar1;
        }
      }
LAB_141db7517:
      plVar12 = plVar12 + -3;
    } while (&local_348 <= plVar12);
  }
  return;
LAB_141db734d:
  if ((((uVar5 & 0x40) != 0) && (-1 < *(int *)(lVar8 + 0x524))) && ((uVar5 & 0x10) != 0))
  goto LAB_141db72b0;
  bVar15 = (uint)(*(int *)(lVar8 + 0x53c) * *(int *)(lVar8 + 0x538)) <
           (uint)(*(int *)(lVar7 + 0x53c) * *(int *)(lVar7 + 0x538));
LAB_141db7384:
  if (!bVar15) goto LAB_141db72b0;
LAB_141db7390:
  do {
    plVar11 = plVar10;
    plVar10 = plVar11 + -1;
    if (plVar10 <= plVar13) break;
    lVar7 = *plVar10;
    lVar8 = *plVar13;
    uVar4 = *(uint *)(lVar7 + 0x560);
    if ((((uVar4 & 0x40) == 0) || (*(int *)(lVar7 + 0x524) < 0)) || ((uVar4 & 0x10) == 0)) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    uVar5 = *(uint *)(lVar8 + 0x560);
    if (bVar15) {
      if ((((uVar5 & 0x40) == 0) || (iVar2 = *(int *)(lVar8 + 0x524), iVar2 < 0)) ||
         ((uVar5 & 0x10) == 0)) break;
      uVar5 = uVar5 >> 9 & 1;
      uVar4 = uVar4 >> 9 & 1;
      if (uVar4 != uVar5) {
        if (uVar4 == 0) {
          if (uVar5 == 0) {
            bVar15 = iVar2 < *(int *)(lVar7 + 0x524);
            goto LAB_141db7460;
          }
          break;
        }
        if (uVar5 == 0) goto LAB_141db7390;
      }
      bVar15 = iVar2 < *(int *)(lVar7 + 0x524);
    }
    else {
      if ((((uVar5 & 0x40) != 0) && (-1 < *(int *)(lVar8 + 0x524))) && ((uVar5 & 0x10) != 0))
      goto LAB_141db7390;
      bVar15 = (uint)(*(int *)(lVar8 + 0x53c) * *(int *)(lVar8 + 0x538)) <
               (uint)(*(int *)(lVar7 + 0x53c) * *(int *)(lVar7 + 0x538));
    }
LAB_141db7460:
  } while (!bVar15);
  if (plVar9 <= plVar10) {
    lVar7 = *plVar9;
    *plVar9 = *plVar10;
    *plVar10 = lVar7;
    goto LAB_141db72b0;
  }
  lVar7 = *plVar13;
  local_358._0_4_ = (int)local_358 + -1;
  *plVar13 = *plVar10;
  *plVar10 = lVar7;
  if ((longlong)((longlong)plVar10 + (-8 - (longlong)plVar13) & 0xfffffffffffffff8U) <
      (longlong)((longlong)plVar14 - (longlong)plVar9 & 0xfffffffffffffff8U)) {
    if (plVar9 < plVar14) {
      *plVar12 = (longlong)plVar9;
      plVar12[1] = (longlong)plVar14;
      *(int *)(plVar12 + 2) = (int)local_358;
      plVar12 = plVar12 + 3;
    }
    if (plVar10 <= plVar13 + 1) goto LAB_141db7517;
    plVar14 = plVar11 + -2;
    plVar9 = plVar13;
  }
  else {
    if (plVar13 + 1 < plVar10) {
      *plVar12 = (longlong)plVar13;
      plVar12[1] = (longlong)(plVar11 + -2);
      *(int *)(plVar12 + 2) = (int)local_358;
      plVar12 = plVar12 + 3;
    }
    if (plVar14 <= plVar9) goto LAB_141db7517;
  }
  lVar7 = (longlong)plVar14 - (longlong)plVar9;
  plVar13 = plVar9;
  if ((int)local_358 == 0) goto LAB_141db7508;
  goto LAB_141db7280;
}



// FUNCTION 141db7680 FUN_141db7680 body=864 status=ok
// SIG undefined FUN_141db7680(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141db7680(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  float fVar18;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
    lStack_330 = param_1 + param_2 * 0x18 + -0x18;
    fVar18 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar18 = fVar18 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar18 = _guard_xfg_dispatch_icall_nop(fVar18);
    local_328 = (undefined4)(longlong)(fVar18 + fVar18);
    _guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar17 = &local_338;
    do {
      puVar16 = (undefined8 *)*plVar17;
      puVar11 = (undefined8 *)plVar17[1];
      lVar2 = plVar17[2];
      local_348._0_4_ = (int)lVar2;
      lVar10 = ((longlong)puVar11 - (longlong)puVar16) / 0x18 + 1;
      puVar15 = puVar16;
      if ((int)local_348 != 0) {
LAB_141db7770:
        if (8 < lVar10) {
          if (lVar10 < 0) {
            lVar10 = lVar10 + 1;
          }
          puVar16 = puVar15 + (lVar10 >> 1) * 3;
          if (puVar16 != puVar15) {
            uVar4 = *(undefined4 *)((longlong)puVar15 + 4);
            uVar5 = *(undefined4 *)(puVar15 + 1);
            uVar6 = *(undefined4 *)((longlong)puVar15 + 0xc);
            uVar7 = *puVar16;
            uVar8 = puVar16[1];
            uVar3 = puVar16[2];
            *(undefined4 *)puVar16 = *(undefined4 *)puVar15;
            *(undefined4 *)((longlong)puVar16 + 4) = uVar4;
            *(undefined4 *)(puVar16 + 1) = uVar5;
            *(undefined4 *)((longlong)puVar16 + 0xc) = uVar6;
            puVar16[2] = puVar15[2];
            *puVar15 = uVar7;
            puVar15[1] = uVar8;
            puVar15[2] = uVar3;
          }
          puVar13 = puVar11 + 3;
          puVar16 = puVar15;
LAB_141db77c0:
          puVar12 = puVar16;
          puVar16 = puVar12 + 3;
          if (puVar16 <= puVar11) goto code_r0x000141db77c9;
          goto LAB_141db77e1;
        }
        for (; puVar16 = puVar15, puVar13 = puVar15, puVar15 < puVar11; puVar11 = puVar11 + -3) {
          while (puVar12 = puVar16, puVar16 = puVar13 + 3, puVar16 <= puVar11) {
            plVar1 = puVar13 + 4;
            puVar13 = puVar16;
            if (*(short *)(*plVar1 + 0x170) <= *(short *)(puVar12[1] + 0x170)) {
              puVar16 = puVar12;
            }
          }
          if (puVar12 != puVar11) {
            uVar7 = puVar11[1];
            uVar8 = *puVar12;
            uVar9 = puVar12[1];
            uVar3 = puVar12[2];
            *puVar12 = *puVar11;
            puVar12[1] = uVar7;
            puVar12[2] = puVar11[2];
            *puVar11 = uVar8;
            puVar11[1] = uVar9;
            puVar11[2] = uVar3;
          }
        }
        goto LAB_141db791d;
      }
LAB_141db790e:
      local_348 = lVar2;
      FUN_141db6af0(puVar16,lVar10,param_3,param_4);
LAB_141db791d:
      plVar17 = plVar17 + -3;
    } while (&local_338 <= plVar17);
  }
  return;
code_r0x000141db77c9:
  if (*(short *)(puVar12[4] + 0x170) <= *(short *)(puVar15[1] + 0x170)) goto LAB_141db77c0;
LAB_141db77e1:
  do {
    puVar14 = puVar13;
    puVar13 = puVar14 + -3;
    if (puVar13 <= puVar15) break;
  } while (*(short *)(puVar15[1] + 0x170) <= *(short *)(puVar14[-2] + 0x170));
  if (puVar16 <= puVar13) {
    if (puVar16 != puVar13) {
      uVar4 = *(undefined4 *)((longlong)puVar14 + -0x14);
      uVar5 = *(undefined4 *)(puVar14 + -2);
      uVar6 = *(undefined4 *)((longlong)puVar14 + -0xc);
      uVar7 = *puVar16;
      uVar8 = puVar12[4];
      uVar3 = puVar12[5];
      *(undefined4 *)puVar16 = *(undefined4 *)puVar13;
      *(undefined4 *)((longlong)puVar12 + 0x1c) = uVar4;
      *(undefined4 *)(puVar12 + 4) = uVar5;
      *(undefined4 *)((longlong)puVar12 + 0x24) = uVar6;
      puVar12[5] = puVar14[-1];
      *puVar13 = uVar7;
      puVar14[-2] = uVar8;
      puVar14[-1] = uVar3;
    }
    goto LAB_141db77c0;
  }
  if (puVar15 != puVar13) {
    uVar4 = *(undefined4 *)((longlong)puVar14 + -0x14);
    uVar5 = *(undefined4 *)(puVar14 + -2);
    uVar6 = *(undefined4 *)((longlong)puVar14 + -0xc);
    uVar7 = *puVar15;
    uVar8 = puVar15[1];
    uVar3 = puVar15[2];
    *(undefined4 *)puVar15 = *(undefined4 *)puVar13;
    *(undefined4 *)((longlong)puVar15 + 4) = uVar4;
    *(undefined4 *)(puVar15 + 1) = uVar5;
    *(undefined4 *)((longlong)puVar15 + 0xc) = uVar6;
    puVar15[2] = puVar14[-1];
    *puVar13 = uVar7;
    puVar14[-2] = uVar8;
    puVar14[-1] = uVar3;
  }
  local_348._0_4_ = (int)local_348 + -1;
  lVar10 = (longlong)puVar13 + (-0x18 - (longlong)puVar15);
  lVar10 = lVar10 / 6 + (lVar10 >> 0x3f);
  if ((lVar10 >> 2) - (lVar10 >> 0x3f) < ((longlong)puVar11 - (longlong)puVar16) / 0x18) {
    if (puVar16 < puVar11) {
      *plVar17 = (longlong)puVar16;
      plVar17[1] = (longlong)puVar11;
      *(int *)(plVar17 + 2) = (int)local_348;
      plVar17 = plVar17 + 3;
    }
    if (puVar13 <= puVar15 + 3) goto LAB_141db791d;
    puVar11 = puVar14 + -6;
    puVar16 = puVar15;
  }
  else {
    if (puVar15 + 3 < puVar13) {
      *plVar17 = (longlong)puVar15;
      plVar17[1] = (longlong)(puVar14 + -6);
      *(int *)(plVar17 + 2) = (int)local_348;
      plVar17 = plVar17 + 3;
    }
    if (puVar11 <= puVar16) goto LAB_141db791d;
  }
  lVar10 = ((longlong)puVar11 - (longlong)puVar16) / 0x18 + 1;
  puVar15 = puVar16;
  if ((int)local_348 == 0) goto LAB_141db790e;
  goto LAB_141db7770;
}



// FUNCTION 141db79e0 IntroSortInternal<TRefCountPtr<FProjectedShadowInfo>,FIdentityFunctor,TDereferenceWrapper<TRefCountPtr<FProjectedShadowInfo>,FComparePreshadows>_> body=732 status=ok
// SIG undefined IntroSortInternal<TRefCountPtr<FProjectedShadowInfo>,FIdentityFunctor,TDereferenceWrapper<TRefCountPtr<FProjectedShadowInfo>,FComparePreshadows>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<TRefCountPtr<FProjectedShadowInfo>,FIdentityFunctor,TDereferenceWrapper<TRefCountPtr<FProjectedShadowInfo>,FComparePreshadows>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  float fVar9;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_1 + (param_2 - 1) * 8;
    fVar9 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar9 = fVar9 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar9 = ::_guard_xfg_dispatch_icall_nop(fVar9);
    local_318 = (undefined4)(longlong)(fVar9 + fVar9);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar8 = &local_328;
    do {
      plVar3 = (longlong *)*plVar8;
      plVar7 = (longlong *)plVar8[1];
      lVar1 = plVar8[2];
      local_338._0_4_ = (int)lVar1;
      lVar2 = ((longlong)plVar7 - (longlong)plVar3 >> 3) + 1;
      plVar6 = plVar3;
      if ((int)local_338 != 0) {
LAB_141db7ab0:
        if (8 < lVar2) {
          if (lVar2 < 0) {
            lVar2 = lVar2 + 1;
          }
          plVar3 = plVar6 + (lVar2 >> 1);
          if (plVar3 != plVar6) {
            lVar2 = *plVar3;
            *plVar3 = *plVar6;
            *plVar6 = lVar2;
          }
          plVar4 = plVar7 + 1;
          plVar3 = plVar6;
LAB_141db7ae7:
          plVar3 = plVar3 + 1;
          if (plVar3 <= plVar7) goto code_r0x000141db7af0;
          goto LAB_141db7b14;
        }
        for (; plVar4 = plVar6, plVar3 = plVar6, plVar6 < plVar7; plVar7 = plVar7 + -1) {
          while (plVar5 = plVar4, plVar3 = plVar3 + 1, plVar3 <= plVar7) {
            plVar4 = plVar3;
            if ((uint)(*(int *)(*plVar5 + 0x53c) * *(int *)(*plVar5 + 0x538)) <=
                (uint)(*(int *)(*plVar3 + 0x53c) * *(int *)(*plVar3 + 0x538))) {
              plVar4 = plVar5;
            }
          }
          if (plVar5 != plVar7) {
            lVar1 = *plVar5;
            *plVar5 = *plVar7;
            *plVar7 = lVar1;
          }
        }
        goto LAB_141db7c01;
      }
LAB_141db7bf2:
      local_338 = lVar1;
      HeapSortInternal<TRefCountPtr<FProjectedShadowInfo>,FIdentityFunctor,TDereferenceWrapper<TRefCountPtr<FProjectedShadowInfo>,FComparePreshadows>_>
                (plVar3,lVar2,param_3,param_4);
LAB_141db7c01:
      plVar8 = plVar8 + -3;
    } while (&local_328 <= plVar8);
  }
  return;
code_r0x000141db7af0:
  if ((uint)(*(int *)(*plVar6 + 0x53c) * *(int *)(*plVar6 + 0x538)) <=
      (uint)(*(int *)(*plVar3 + 0x53c) * *(int *)(*plVar3 + 0x538))) goto LAB_141db7ae7;
LAB_141db7b14:
  do {
    plVar5 = plVar4;
    plVar4 = plVar5 + -1;
    if (plVar4 <= plVar6) break;
  } while ((uint)(*(int *)(*plVar4 + 0x53c) * *(int *)(*plVar4 + 0x538)) <=
           (uint)(*(int *)(*plVar6 + 0x53c) * *(int *)(*plVar6 + 0x538)));
  if (plVar3 <= plVar4) {
    if (plVar3 != plVar4) {
      lVar2 = *plVar3;
      *plVar3 = *plVar4;
      *plVar4 = lVar2;
    }
    goto LAB_141db7ae7;
  }
  if (plVar6 != plVar4) {
    lVar2 = *plVar6;
    *plVar6 = *plVar4;
    *plVar4 = lVar2;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)plVar4 + (-8 - (longlong)plVar6) & 0xfffffffffffffff8U) <
      (longlong)((longlong)plVar7 - (longlong)plVar3 & 0xfffffffffffffff8U)) {
    if (plVar3 < plVar7) {
      *plVar8 = (longlong)plVar3;
      plVar8[1] = (longlong)plVar7;
      *(int *)(plVar8 + 2) = (int)local_338;
      plVar8 = plVar8 + 3;
    }
    if (plVar4 <= plVar6 + 1) goto LAB_141db7c01;
    plVar7 = plVar5 + -2;
    plVar3 = plVar6;
  }
  else {
    if (plVar6 + 1 < plVar4) {
      *plVar8 = (longlong)plVar6;
      plVar8[1] = (longlong)(plVar5 + -2);
      *(int *)(plVar8 + 2) = (int)local_338;
      plVar8 = plVar8 + 3;
    }
    if (plVar7 <= plVar3) goto LAB_141db7c01;
  }
  lVar2 = ((longlong)plVar7 - (longlong)plVar3 >> 3) + 1;
  plVar6 = plVar3;
  if ((int)local_338 == 0) goto LAB_141db7bf2;
  goto LAB_141db7ab0;
}



// FUNCTION 141db7cc0 FUN_141db7cc0 body=1164 status=ok
// SIG undefined FUN_141db7cc0(void)

char FUN_141db7cc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  float fVar1;
  float *pfVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  char local_188;
  float local_170;
  float local_16c;
  float local_168;
  longlong local_158;
  longlong lStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong local_118;
  int local_110;
  int local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  undefined8 local_e8;
  longlong lStack_e0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  
  local_148 = *(undefined8 *)(param_1 + 0x5e80);
  uStack_140 = *(undefined8 *)(param_1 + 0x5e88);
  local_138 = *(undefined8 *)(param_1 + 0x5e90);
  uStack_130 = *(undefined8 *)(param_1 + 0x5e98);
  iVar11 = 0;
  local_188 = '\0';
  local_158 = param_1 + 0x1e20;
  local_128 = *(undefined8 *)(param_1 + 0x5ea0);
  uStack_120 = *(undefined8 *)(param_1 + 0x5ea8);
  local_118 = 0;
  local_10c = 0;
  do {
    lVar5 = local_158;
    uVar7 = 0;
    fVar14 = (float)local_128;
    fVar15 = local_128._4_4_;
    fVar16 = (float)uStack_140;
    fVar17 = local_148._4_4_;
    fVar18 = (float)local_148;
    do {
      lVar9 = *(longlong *)(lVar5 + 0x4018 + (ulonglong)(uVar7 & 7) * 8);
      if ((lVar9 != 0) && ((*(uint *)(lVar9 + 0x4058) & 0x7fffffff) != 0)) {
        uVar4 = (ulonglong)(uVar7 >> 1 & 1);
        uVar10 = (ulonglong)(uVar7 >> 2 & 1);
        local_170 = fVar15 * *(float *)(&DAT_146534f00 + (ulonglong)(uVar7 & 1) * 4) + fVar18;
        local_16c = fVar15 * *(float *)(&DAT_146534f00 + uVar4 * 4) + fVar17;
        local_168 = fVar15 * *(float *)(&DAT_146534f00 + uVar10 * 4) + fVar16;
        local_108 = fVar14;
        local_104 = fVar14;
        local_100 = fVar14;
        cVar3 = FConvexVolume::IntersectBox(*param_4,&local_170,&local_108);
        if (cVar3 != '\0') {
          pfVar2 = (float *)param_4[2];
          local_f4 = local_168 + pfVar2[2];
          local_f8 = local_16c + pfVar2[1];
          local_fc = local_170 + *pfVar2;
          cVar3 = FConvexVolume::IntersectBox(param_4[1],&local_fc,&local_108);
          if (cVar3 != '\0') {
            local_110 = iVar11 + 1;
            if (local_10c < local_110) {
              TArray<TOctree<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::FNodeReference,TMemStackAllocator<0>_>
              ::ResizeGrow(&local_118);
              fVar14 = (float)local_128;
              fVar15 = local_128._4_4_;
              fVar16 = (float)uStack_140;
              fVar17 = local_148._4_4_;
              fVar18 = (float)local_148;
            }
            puVar6 = (undefined8 *)((longlong)iVar11 * 0x40 + local_118);
            if (puVar6 == (undefined8 *)0x0) {
              puVar6 = (undefined8 *)0x0;
            }
            else {
              *(undefined8 *)((longlong)puVar6 + 0x1c) = 0x3f800000;
              puVar6[2] = 0;
              *(undefined4 *)(puVar6 + 3) = 0;
              *(undefined8 *)((longlong)puVar6 + 0x24) = 0;
              *(undefined4 *)((longlong)puVar6 + 0x2c) = 0x3f800000;
              *puVar6 = 0;
            }
            *puVar6 = *(undefined8 *)(local_158 + 0x4018 + (ulonglong)(uVar7 & 7) * 8);
            *(float *)(puVar6 + 2) =
                 fVar15 * *(float *)(&DAT_146534f00 + (ulonglong)(uVar7 & 1) * 4) + fVar18;
            *(float *)((longlong)puVar6 + 0x14) =
                 fVar15 * *(float *)(&DAT_146534f00 + uVar4 * 4) + fVar17;
            fVar1 = *(float *)(&DAT_146534f00 + uVar10 * 4);
            *(undefined4 *)((longlong)puVar6 + 0x1c) = 0;
            *(undefined4 *)((longlong)puVar6 + 0x2c) = 0;
            *(float *)(puVar6 + 4) = fVar14;
            *(float *)((longlong)puVar6 + 0x24) = fVar14;
            fVar13 = fVar14 * 0.5 * 1.0625;
            *(float *)(puVar6 + 5) = fVar14;
            *(float *)(puVar6 + 3) = fVar15 * fVar1 + fVar16;
            *(float *)(puVar6 + 6) = fVar13;
            *(float *)((longlong)puVar6 + 0x34) = fVar14 - fVar13;
            iVar11 = local_110;
          }
        }
      }
      iVar8 = 0;
      if (((byte)uVar7 & 7) < 7) {
        uVar7 = uVar7 ^ (uVar7 + 1 ^ uVar7) & 7;
      }
      else {
        uVar7 = uVar7 | 8;
      }
    } while (uVar7 >> 3 == 0);
    while ((-1 < iVar8 && (iVar8 < *(int *)(lVar5 + 0x4008)))) {
      lVar9 = *(longlong *)(lVar5 + 0x4000);
      if (*(longlong *)(lVar5 + 0x4000) == 0) {
        lVar9 = lVar5;
      }
      cVar3 = FUN_141db97d0(param_1,param_2,lVar9 + (longlong)iVar8 * 0x40,param_3,param_4);
      if ((cVar3 == '\0') && (local_188 == '\0')) {
        iVar8 = iVar8 + 1;
      }
      else {
        iVar8 = iVar8 + 1;
        local_188 = '\x01';
      }
    }
    if (iVar11 == 0) {
      local_e8 = 0;
      local_158 = 0;
      lStack_150 = lStack_e0;
      local_128 = CONCAT44(uStack_b4,local_b8);
      uStack_120 = CONCAT44(uStack_ac,uStack_b0);
      local_148 = 0;
      uStack_140 = 0x3f80000000000000;
      local_138 = 0;
      uStack_130 = 0x3f80000000000000;
    }
    else {
      iVar8 = iVar11 + -1;
      lVar5 = (longlong)iVar8 * 0x40;
      local_158 = *(longlong *)(lVar5 + local_118);
      lStack_150 = ((longlong *)(lVar5 + local_118))[1];
      puVar6 = (undefined8 *)(lVar5 + 0x10 + local_118);
      local_148 = *puVar6;
      uStack_140 = puVar6[1];
      puVar6 = (undefined8 *)(lVar5 + 0x20 + local_118);
      local_138 = *puVar6;
      uStack_130 = puVar6[1];
      puVar6 = (undefined8 *)(lVar5 + 0x30 + local_118);
      local_128 = *puVar6;
      uStack_120 = puVar6[1];
      iVar12 = (iVar11 - iVar8) + -1;
      if (iVar12 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar8 * 0x40 + local_118),
                   (void *)((longlong)iVar11 * 0x40 + local_118),(longlong)iVar12 << 6);
      }
      local_110 = iVar8;
      TArray<TOctree<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::FNodeReference,TMemStackAllocator<0>_>
      ::ResizeShrink(&local_118);
      iVar11 = local_110;
    }
  } while (local_158 != 0);
  return local_188;
}



// FUNCTION 141db8150 FUN_141db8150 body=1272 status=ok
// SIG undefined FUN_141db8150(void)

char FUN_141db8150(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  float *pfVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint local_res8;
  char local_1c8;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  ulonglong local_1a8;
  longlong local_198;
  longlong lStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong local_158;
  int local_150;
  int local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  longlong local_128;
  longlong lStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  undefined8 local_f8;
  longlong lStack_f0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  
  local_188 = *(undefined8 *)(param_1 + 0x5e80);
  uStack_180 = *(undefined8 *)(param_1 + 0x5e88);
  local_178 = *(undefined8 *)(param_1 + 0x5e90);
  uStack_170 = *(undefined8 *)(param_1 + 0x5e98);
  local_res8 = (uint)param_1;
  iVar6 = 0;
  local_1c8 = '\0';
  local_198 = param_1 + 0x1e20;
  local_168 = *(undefined8 *)(param_1 + 0x5ea0);
  uStack_160 = *(undefined8 *)(param_1 + 0x5ea8);
  local_158 = 0;
  local_14c = 0;
  do {
    lVar4 = local_198;
    local_res8 = local_res8 & 0xfffffff0;
    fVar13 = (float)local_168;
    fVar14 = local_168._4_4_;
    fVar15 = (float)uStack_180;
    fVar16 = local_188._4_4_;
    fVar17 = (float)local_188;
    do {
      lVar9 = *(longlong *)(lVar4 + 0x4018 + (ulonglong)(local_res8 & 7) * 8);
      if ((lVar9 != 0) && ((*(uint *)(lVar9 + 0x4058) & 0x7fffffff) != 0)) {
        puVar5 = (undefined8 *)*param_4;
        local_1a8 = (ulonglong)(local_res8 & 1);
        uVar3 = (ulonglong)(local_res8 >> 1 & 1);
        uVar10 = (ulonglong)(local_res8 >> 2 & 1);
        local_1b8 = fVar14 * *(float *)(&DAT_146534f00 + local_1a8 * 4) + fVar17;
        local_1b4 = fVar14 * *(float *)(&DAT_146534f00 + uVar3 * 4) + fVar16;
        local_1b0 = fVar14 * *(float *)(&DAT_146534f00 + uVar10 * 4) + fVar15;
        local_148 = fVar13;
        local_144 = fVar13;
        local_140 = fVar13;
        cVar2 = FConvexVolume::IntersectBox(*puVar5,&local_1b8,&local_148);
        if (cVar2 != '\0') {
          pfVar1 = (float *)puVar5[2];
          local_134 = local_1b0 + pfVar1[2];
          local_138 = local_1b4 + pfVar1[1];
          local_13c = local_1b8 + *pfVar1;
          cVar2 = FConvexVolume::IntersectBox(puVar5[1],&local_13c,&local_148);
          if ((cVar2 != '\0') &&
             (fVar12 = SQRT((fVar13 + fVar13 + fVar13) * fVar13) + *(float *)(param_4[2] + 0x18),
             fVar11 = (float)FMath::PointDistToSegmentSquared(&local_1b8,param_4[3],param_4[4]),
             fVar11 < fVar12 * fVar12)) {
            local_150 = iVar6 + 1;
            if (local_14c < local_150) {
              TArray<TOctree<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::FNodeReference,TMemStackAllocator<0>_>
              ::ResizeGrow(&local_158);
              fVar13 = (float)local_168;
              fVar14 = local_168._4_4_;
              fVar15 = (float)uStack_180;
              fVar16 = local_188._4_4_;
              fVar17 = (float)local_188;
            }
            puVar5 = (undefined8 *)((longlong)iVar6 * 0x40 + local_158);
            if (puVar5 == (undefined8 *)0x0) {
              puVar5 = (undefined8 *)0x0;
            }
            else {
              *(undefined8 *)((longlong)puVar5 + 0x1c) = 0x3f800000;
              puVar5[2] = 0;
              *(undefined4 *)(puVar5 + 3) = 0;
              *(undefined8 *)((longlong)puVar5 + 0x24) = 0;
              *(undefined4 *)((longlong)puVar5 + 0x2c) = 0x3f800000;
              *puVar5 = 0;
            }
            *puVar5 = *(undefined8 *)(local_198 + 0x4018 + (ulonglong)(local_res8 & 7) * 8);
            *(float *)(puVar5 + 2) = fVar14 * *(float *)(&DAT_146534f00 + local_1a8 * 4) + fVar17;
            *(float *)((longlong)puVar5 + 0x14) =
                 fVar14 * *(float *)(&DAT_146534f00 + uVar3 * 4) + fVar16;
            fVar11 = *(float *)(&DAT_146534f00 + uVar10 * 4);
            *(undefined4 *)((longlong)puVar5 + 0x1c) = 0;
            *(undefined4 *)((longlong)puVar5 + 0x2c) = 0;
            *(float *)(puVar5 + 4) = fVar13;
            *(float *)((longlong)puVar5 + 0x24) = fVar13;
            fVar12 = fVar13 * 0.5 * 1.0625;
            *(float *)(puVar5 + 5) = fVar13;
            *(float *)(puVar5 + 3) = fVar14 * fVar11 + fVar15;
            *(float *)(puVar5 + 6) = fVar12;
            *(float *)((longlong)puVar5 + 0x34) = fVar13 - fVar12;
            iVar6 = local_150;
          }
        }
      }
      iVar8 = 0;
      if (((byte)local_res8 & 7) < 7) {
        local_res8 = local_res8 ^ (local_res8 + 1 ^ local_res8) & 7;
      }
      else {
        local_res8 = local_res8 | 8;
      }
    } while ((local_res8 >> 3 & 1) == 0);
    local_1a8 = CONCAT44(local_1a8._4_4_,local_res8);
    while ((-1 < iVar8 && (iVar8 < *(int *)(lVar4 + 0x4008)))) {
      local_128 = *param_4;
      lStack_120 = param_4[1];
      local_118 = (undefined4)param_4[2];
      uStack_114 = *(undefined4 *)((longlong)param_4 + 0x14);
      uStack_110 = (undefined4)param_4[3];
      uStack_10c = *(undefined4 *)((longlong)param_4 + 0x1c);
      lVar9 = *(longlong *)(lVar4 + 0x4000);
      if (*(longlong *)(lVar4 + 0x4000) == 0) {
        lVar9 = lVar4;
      }
      local_108 = param_4[4];
      cVar2 = FUN_141db9aa0(param_1,param_2,lVar9 + (longlong)iVar8 * 0x40,param_3,&local_128);
      if ((cVar2 == '\0') && (local_1c8 == '\0')) {
        iVar8 = iVar8 + 1;
      }
      else {
        iVar8 = iVar8 + 1;
        local_1c8 = '\x01';
      }
    }
    if (iVar6 == 0) {
      local_f8 = 0;
      local_198 = 0;
      lStack_190 = lStack_f0;
      local_168 = local_c8;
      uStack_160 = uStack_c0;
      local_188 = 0;
      uStack_180 = 0x3f80000000000000;
      local_178 = 0;
      uStack_170 = 0x3f80000000000000;
    }
    else {
      iVar8 = iVar6 + -1;
      lVar4 = (longlong)iVar8 * 0x40;
      local_198 = *(longlong *)(lVar4 + local_158);
      lStack_190 = ((longlong *)(lVar4 + local_158))[1];
      puVar5 = (undefined8 *)(lVar4 + 0x10 + local_158);
      local_188 = *puVar5;
      uStack_180 = puVar5[1];
      puVar5 = (undefined8 *)(lVar4 + 0x20 + local_158);
      local_178 = *puVar5;
      uStack_170 = puVar5[1];
      puVar5 = (undefined8 *)(lVar4 + 0x30 + local_158);
      local_168 = *puVar5;
      uStack_160 = puVar5[1];
      iVar7 = (iVar6 - iVar8) + -1;
      if (iVar7 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar8 * 0x40 + local_158),
                   (void *)((longlong)iVar6 * 0x40 + local_158),(longlong)iVar7 << 6);
      }
      local_150 = iVar8;
      TArray<TOctree<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::FNodeReference,TMemStackAllocator<0>_>
      ::ResizeShrink(&local_158);
      iVar6 = local_150;
    }
    local_res8 = (uint)local_1a8;
  } while (local_198 != 0);
  return local_1c8;
}



// FUNCTION 141db8650 FUN_141db8650 body=1246 status=ok
// SIG undefined FUN_141db8650(void)

char FUN_141db8650(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  float fVar1;
  float *pfVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint local_res8;
  char local_1b8;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  ulonglong local_198;
  float local_190;
  float local_18c;
  float local_188;
  longlong local_178;
  longlong lStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  int local_130;
  int local_12c;
  float local_128;
  float local_124;
  float local_120;
  longlong local_118;
  longlong lStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  undefined8 local_e8;
  longlong lStack_e0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  local_168 = *(undefined8 *)(param_1 + 0x5e80);
  uStack_160 = *(undefined8 *)(param_1 + 0x5e88);
  local_158 = *(undefined8 *)(param_1 + 0x5e90);
  uStack_150 = *(undefined8 *)(param_1 + 0x5e98);
  local_res8 = (uint)param_1;
  iVar7 = 0;
  local_1b8 = '\0';
  local_178 = param_1 + 0x1e20;
  local_148 = *(undefined8 *)(param_1 + 0x5ea0);
  uStack_140 = *(undefined8 *)(param_1 + 0x5ea8);
  local_138 = 0;
  local_12c = 0;
  do {
    lVar5 = local_178;
    local_res8 = local_res8 & 0xfffffff0;
    fVar13 = (float)local_148;
    fVar14 = local_148._4_4_;
    fVar15 = (float)uStack_160;
    fVar16 = local_168._4_4_;
    fVar17 = (float)local_168;
    do {
      lVar10 = *(longlong *)(lVar5 + 0x4018 + (ulonglong)(local_res8 & 7) * 8);
      if ((lVar10 != 0) && ((*(uint *)(lVar10 + 0x4058) & 0x7fffffff) != 0)) {
        puVar6 = (undefined8 *)*param_4;
        local_198 = (ulonglong)(local_res8 & 1);
        uVar4 = (ulonglong)(local_res8 >> 1 & 1);
        uVar11 = (ulonglong)(local_res8 >> 2 & 1);
        local_1a8 = fVar14 * *(float *)(&DAT_146534f00 + local_198 * 4) + fVar17;
        local_1a4 = fVar14 * *(float *)(&DAT_146534f00 + uVar4 * 4) + fVar16;
        local_1a0 = fVar14 * *(float *)(&DAT_146534f00 + uVar11 * 4) + fVar15;
        local_190 = fVar13;
        local_18c = fVar13;
        local_188 = fVar13;
        cVar3 = FConvexVolume::IntersectBox(*puVar6,&local_1a8,&local_190);
        if (cVar3 != '\0') {
          pfVar2 = (float *)puVar6[2];
          local_120 = local_1a0 + pfVar2[2];
          local_124 = local_1a4 + pfVar2[1];
          local_128 = local_1a8 + *pfVar2;
          cVar3 = FConvexVolume::IntersectBox(puVar6[1],&local_128,&local_190);
          if ((cVar3 != '\0') &&
             (cVar3 = FUN_141dbd780(param_4[1],&local_1a8,&local_190,param_4[3],param_4[4],
                                    *(undefined4 *)(param_4[2] + 0x18)), cVar3 != '\0')) {
            local_130 = iVar7 + 1;
            if (local_12c < local_130) {
              TArray<TOctree<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::FNodeReference,TMemStackAllocator<0>_>
              ::ResizeGrow(&local_138);
              fVar13 = (float)local_148;
              fVar14 = local_148._4_4_;
              fVar15 = (float)uStack_160;
              fVar16 = local_168._4_4_;
              fVar17 = (float)local_168;
            }
            puVar6 = (undefined8 *)((longlong)iVar7 * 0x40 + local_138);
            if (puVar6 == (undefined8 *)0x0) {
              puVar6 = (undefined8 *)0x0;
            }
            else {
              *(undefined8 *)((longlong)puVar6 + 0x1c) = 0x3f800000;
              puVar6[2] = 0;
              *(undefined4 *)(puVar6 + 3) = 0;
              *(undefined8 *)((longlong)puVar6 + 0x24) = 0;
              *(undefined4 *)((longlong)puVar6 + 0x2c) = 0x3f800000;
              *puVar6 = 0;
            }
            *puVar6 = *(undefined8 *)(local_178 + 0x4018 + (ulonglong)(local_res8 & 7) * 8);
            *(float *)(puVar6 + 2) = fVar14 * *(float *)(&DAT_146534f00 + local_198 * 4) + fVar17;
            *(float *)((longlong)puVar6 + 0x14) =
                 fVar14 * *(float *)(&DAT_146534f00 + uVar4 * 4) + fVar16;
            fVar1 = *(float *)(&DAT_146534f00 + uVar11 * 4);
            *(undefined4 *)((longlong)puVar6 + 0x1c) = 0;
            *(undefined4 *)((longlong)puVar6 + 0x2c) = 0;
            *(float *)(puVar6 + 4) = fVar13;
            *(float *)((longlong)puVar6 + 0x24) = fVar13;
            fVar12 = fVar13 * 0.5 * 1.0625;
            *(float *)(puVar6 + 5) = fVar13;
            *(float *)(puVar6 + 3) = fVar14 * fVar1 + fVar15;
            *(float *)(puVar6 + 6) = fVar12;
            *(float *)((longlong)puVar6 + 0x34) = fVar13 - fVar12;
            iVar7 = local_130;
          }
        }
      }
      iVar8 = 0;
      if (((byte)local_res8 & 7) < 7) {
        local_res8 = local_res8 ^ (local_res8 + 1 ^ local_res8) & 7;
      }
      else {
        local_res8 = local_res8 | 8;
      }
    } while ((local_res8 >> 3 & 1) == 0);
    local_198 = CONCAT44(local_198._4_4_,local_res8);
    while ((-1 < iVar8 && (iVar8 < *(int *)(lVar5 + 0x4008)))) {
      local_118 = *param_4;
      lStack_110 = param_4[1];
      local_108 = (undefined4)param_4[2];
      uStack_104 = *(undefined4 *)((longlong)param_4 + 0x14);
      uStack_100 = (undefined4)param_4[3];
      uStack_fc = *(undefined4 *)((longlong)param_4 + 0x1c);
      lVar10 = *(longlong *)(lVar5 + 0x4000);
      if (*(longlong *)(lVar5 + 0x4000) == 0) {
        lVar10 = lVar5;
      }
      local_f8 = param_4[4];
      cVar3 = FUN_141db9d70(param_1,param_2,lVar10 + (longlong)iVar8 * 0x40,param_3,&local_118);
      if ((cVar3 == '\0') && (local_1b8 == '\0')) {
        iVar8 = iVar8 + 1;
      }
      else {
        iVar8 = iVar8 + 1;
        local_1b8 = '\x01';
      }
    }
    if (iVar7 == 0) {
      local_e8 = 0;
      local_178 = 0;
      lStack_170 = lStack_e0;
      local_148 = local_b8;
      uStack_140 = uStack_b0;
      local_168 = 0;
      uStack_160 = 0x3f80000000000000;
      local_158 = 0;
      uStack_150 = 0x3f80000000000000;
    }
    else {
      iVar9 = iVar7 + -1;
      lVar5 = (longlong)iVar9 * 0x40;
      local_178 = *(longlong *)(lVar5 + local_138);
      lStack_170 = ((longlong *)(lVar5 + local_138))[1];
      puVar6 = (undefined8 *)(lVar5 + 0x10 + local_138);
      local_168 = *puVar6;
      uStack_160 = puVar6[1];
      puVar6 = (undefined8 *)(lVar5 + 0x20 + local_138);
      local_158 = *puVar6;
      uStack_150 = puVar6[1];
      puVar6 = (undefined8 *)(lVar5 + 0x30 + local_138);
      local_148 = *puVar6;
      uStack_140 = puVar6[1];
      iVar8 = (iVar7 - iVar9) + -1;
      if (iVar8 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar9 * 0x40 + local_138),
                   (void *)((longlong)iVar7 * 0x40 + local_138),(longlong)iVar8 << 6);
      }
      local_130 = iVar9;
      TArray<TOctree<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::FNodeReference,TMemStackAllocator<0>_>
      ::ResizeShrink(&local_138);
      iVar7 = local_130;
    }
    local_res8 = (uint)local_198;
  } while (local_178 != 0);
  return local_1b8;
}



// FUNCTION 141db8b30 FUN_141db8b30 body=1449 status=ok
// SIG undefined FUN_141db8b30(void)

char FUN_141db8b30(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  float *pfVar2;
  longlong *plVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint local_res8;
  char local_1d8;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  ulonglong local_1b0;
  longlong local_1a8;
  longlong lStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  longlong local_168;
  int local_160;
  int local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  longlong lStack_110;
  undefined8 local_e8;
  undefined8 uStack_e0;
  
  local_198 = *(undefined8 *)(param_1 + 0x5e80);
  uStack_190 = *(undefined8 *)(param_1 + 0x5e88);
  local_188 = *(undefined8 *)(param_1 + 0x5e90);
  uStack_180 = *(undefined8 *)(param_1 + 0x5e98);
  local_res8 = (uint)param_1;
  iVar12 = 0;
  local_1d8 = '\0';
  local_1a8 = param_1 + 0x1e20;
  local_178 = *(undefined8 *)(param_1 + 0x5ea0);
  uStack_170 = *(undefined8 *)(param_1 + 0x5ea8);
  local_168 = 0;
  local_15c = 0;
  do {
    lVar6 = local_1a8;
    local_res8 = local_res8 & 0xfffffff0;
    fVar16 = (float)local_178;
    fVar17 = local_178._4_4_;
    fVar18 = (float)uStack_190;
    fVar19 = local_198._4_4_;
    fVar20 = (float)local_198;
    do {
      lVar10 = *(longlong *)(lVar6 + 0x4018 + (ulonglong)(local_res8 & 7) * 8);
      if ((lVar10 != 0) && ((*(uint *)(lVar10 + 0x4058) & 0x7fffffff) != 0)) {
        puVar7 = (undefined8 *)*param_4;
        local_1b0 = (ulonglong)(local_res8 & 1);
        uVar5 = (ulonglong)(local_res8 >> 1 & 1);
        uVar11 = (ulonglong)(local_res8 >> 2 & 1);
        local_1c0 = fVar17 * *(float *)(&DAT_146534f00 + local_1b0 * 4) + fVar20;
        local_1bc = fVar17 * *(float *)(&DAT_146534f00 + uVar5 * 4) + fVar19;
        local_1b8 = fVar17 * *(float *)(&DAT_146534f00 + uVar11 * 4) + fVar18;
        local_158 = fVar16;
        local_154 = fVar16;
        local_150 = fVar16;
        cVar4 = FConvexVolume::IntersectBox(*puVar7,&local_1c0,&local_158);
        if (cVar4 != '\0') {
          pfVar2 = (float *)puVar7[2];
          local_144 = local_1b8 + pfVar2[2];
          local_148 = local_1bc + pfVar2[1];
          local_14c = local_1c0 + *pfVar2;
          cVar4 = FConvexVolume::IntersectBox(puVar7[1],&local_14c,&local_158);
          if (cVar4 != '\0') {
            plVar3 = (longlong *)param_4[1];
            plVar9 = *(longlong **)*plVar3;
            plVar1 = plVar9 + (int)((longlong *)*plVar3)[1];
            for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
              lVar10 = *(longlong *)(*plVar9 + 8);
              fVar14 = *(float *)plVar3[3];
              pfVar2 = (float *)plVar3[2];
              fVar15 = *(float *)(lVar10 + 0xd8) + SQRT((fVar16 + fVar16 + fVar16) * fVar16);
              local_138 = fVar14 * pfVar2[2] + *(float *)(lVar10 + 200);
              local_13c = fVar14 * pfVar2[1] + *(float *)(lVar10 + 0xc4);
              local_140 = fVar14 * *pfVar2 + *(float *)(lVar10 + 0xc0);
              fVar14 = (float)FMath::PointDistToSegmentSquared
                                        (&local_1c0,(float *)(lVar10 + 0xc0),&local_140);
              if (fVar14 < fVar15 * fVar15) {
                local_160 = iVar12 + 1;
                if (local_15c < local_160) {
                  TArray<TOctree<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::FNodeReference,TMemStackAllocator<0>_>
                  ::ResizeGrow(&local_168);
                  fVar16 = (float)local_178;
                  fVar17 = local_178._4_4_;
                  fVar18 = (float)uStack_190;
                  fVar19 = local_198._4_4_;
                  fVar20 = (float)local_198;
                }
                puVar7 = (undefined8 *)((longlong)iVar12 * 0x40 + local_168);
                if (puVar7 == (undefined8 *)0x0) {
                  puVar7 = (undefined8 *)0x0;
                }
                else {
                  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0x3f800000;
                  puVar7[2] = 0;
                  *(undefined4 *)(puVar7 + 3) = 0;
                  *(undefined8 *)((longlong)puVar7 + 0x24) = 0;
                  *(undefined4 *)((longlong)puVar7 + 0x2c) = 0x3f800000;
                  *puVar7 = 0;
                }
                *puVar7 = *(undefined8 *)(local_1a8 + 0x4018 + (ulonglong)(local_res8 & 7) * 8);
                *(float *)(puVar7 + 2) =
                     fVar17 * *(float *)(&DAT_146534f00 + local_1b0 * 4) + fVar20;
                *(float *)((longlong)puVar7 + 0x14) =
                     fVar17 * *(float *)(&DAT_146534f00 + uVar5 * 4) + fVar19;
                fVar14 = *(float *)(&DAT_146534f00 + uVar11 * 4);
                *(undefined4 *)((longlong)puVar7 + 0x1c) = 0;
                *(undefined4 *)((longlong)puVar7 + 0x2c) = 0;
                *(float *)(puVar7 + 4) = fVar16;
                *(float *)((longlong)puVar7 + 0x24) = fVar16;
                fVar15 = fVar16 * 0.5 * 1.0625;
                *(float *)(puVar7 + 5) = fVar16;
                *(float *)(puVar7 + 3) = fVar17 * fVar14 + fVar18;
                *(float *)(puVar7 + 6) = fVar15;
                *(float *)((longlong)puVar7 + 0x34) = fVar16 - fVar15;
                iVar12 = local_160;
                break;
              }
            }
          }
        }
      }
      iVar8 = 0;
      if (((byte)local_res8 & 7) < 7) {
        local_res8 = local_res8 ^ (local_res8 + 1 ^ local_res8) & 7;
      }
      else {
        local_res8 = local_res8 | 8;
      }
    } while ((local_res8 >> 3 & 1) == 0);
    local_1b0 = CONCAT44(local_1b0._4_4_,local_res8);
    while ((-1 < iVar8 && (iVar8 < *(int *)(lVar6 + 0x4008)))) {
      local_128 = (undefined4)*param_4;
      uStack_124 = *(undefined4 *)((longlong)param_4 + 4);
      uStack_120 = (undefined4)param_4[1];
      uStack_11c = *(undefined4 *)((longlong)param_4 + 0xc);
      lVar10 = *(longlong *)(lVar6 + 0x4000);
      if (*(longlong *)(lVar6 + 0x4000) == 0) {
        lVar10 = lVar6;
      }
      cVar4 = FUN_141dba040(param_1,param_2,lVar10 + (longlong)iVar8 * 0x40,param_3,&local_128);
      if ((cVar4 == '\0') && (local_1d8 == '\0')) {
        iVar8 = iVar8 + 1;
      }
      else {
        iVar8 = iVar8 + 1;
        local_1d8 = '\x01';
      }
    }
    if (iVar12 == 0) {
      local_118 = 0;
      local_1a8 = 0;
      lStack_1a0 = lStack_110;
      local_178 = local_e8;
      uStack_170 = uStack_e0;
      local_198 = 0;
      uStack_190 = 0x3f80000000000000;
      local_188 = 0;
      uStack_180 = 0x3f80000000000000;
    }
    else {
      iVar8 = iVar12 + -1;
      lVar6 = (longlong)iVar8 * 0x40;
      local_1a8 = *(longlong *)(lVar6 + local_168);
      lStack_1a0 = ((longlong *)(lVar6 + local_168))[1];
      puVar7 = (undefined8 *)(lVar6 + 0x10 + local_168);
      local_198 = *puVar7;
      uStack_190 = puVar7[1];
      puVar7 = (undefined8 *)(lVar6 + 0x20 + local_168);
      local_188 = *puVar7;
      uStack_180 = puVar7[1];
      puVar7 = (undefined8 *)(lVar6 + 0x30 + local_168);
      local_178 = *puVar7;
      uStack_170 = puVar7[1];
      iVar13 = (iVar12 - iVar8) + -1;
      if (iVar13 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar8 * 0x40 + local_168),
                   (void *)((longlong)iVar12 * 0x40 + local_168),(longlong)iVar13 << 6);
      }
      local_160 = iVar8;
      TArray<TOctree<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::FNodeReference,TMemStackAllocator<0>_>
      ::ResizeShrink(&local_168);
      iVar12 = local_160;
    }
    local_res8 = (uint)local_1b0;
    if (local_1a8 == 0) {
      return local_1d8;
    }
  } while( true );
}



// FUNCTION 141db90e0 FUN_141db90e0 body=1776 status=ok
// SIG undefined FUN_141db90e0(void)

char FUN_141db90e0(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong *param_4)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  char local_248;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  longlong local_220;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  longlong local_1f8;
  longlong lStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  int local_1b0;
  int local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_198;
  float local_194;
  float local_190;
  float local_188;
  float local_184;
  float local_180;
  ulonglong local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  float local_160;
  undefined8 local_15c;
  float local_154;
  undefined1 local_150;
  float local_140;
  float local_134;
  undefined8 local_128;
  longlong lStack_120;
  undefined8 local_f8;
  undefined8 uStack_f0;
  
  local_1e8 = *(undefined8 *)(param_1 + 0x5e80);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x5e88);
  local_1d8 = *(undefined8 *)(param_1 + 0x5e90);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x5e98);
  iVar15 = 0;
  local_248 = '\0';
  local_1f8 = param_1 + 0x1e20;
  local_1c8 = *(undefined8 *)(param_1 + 0x5ea0);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x5ea8);
  local_1b8 = 0;
  local_1ac = 0;
  do {
    uVar9 = 0;
    lVar7 = local_1f8;
    fVar19 = (float)local_1c8;
    local_220 = local_1f8;
    do {
      lVar13 = *(longlong *)(lVar7 + 0x4018 + (ulonglong)(uVar9 & 7) * 8);
      if ((lVar13 != 0) && ((*(uint *)(lVar13 + 0x4058) & 0x7fffffff) != 0)) {
        puVar8 = (undefined8 *)*param_4;
        local_178 = (ulonglong)(uVar9 & 1);
        uVar14 = (ulonglong)(uVar9 >> 1 & 1);
        uVar10 = (ulonglong)(uVar9 >> 2 & 1);
        local_238 = local_1c8._4_4_ * *(float *)(&DAT_146534f00 + uVar14 * 4) + local_1e8._4_4_;
        local_23c = local_1c8._4_4_ * *(float *)(&DAT_146534f00 + local_178 * 4) + (float)local_1e8;
        local_234 = local_1c8._4_4_ * *(float *)(&DAT_146534f00 + uVar10 * 4) + (float)uStack_1e0;
        local_230 = fVar19;
        local_22c = fVar19;
        local_228 = fVar19;
        cVar6 = FConvexVolume::IntersectBox(*puVar8,&local_23c,&local_230);
        lVar7 = local_220;
        if (cVar6 != '\0') {
          pfVar4 = (float *)puVar8[2];
          local_1a0 = local_234 + pfVar4[2];
          local_1a4 = local_238 + pfVar4[1];
          local_1a8 = local_23c + *pfVar4;
          cVar6 = FConvexVolume::IntersectBox(puVar8[1],&local_1a8,&local_230);
          lVar7 = local_220;
          if (cVar6 != '\0') {
            plVar5 = (longlong *)param_4[1];
            plVar12 = *(longlong **)*plVar5;
            plVar1 = plVar12 + (int)((longlong *)*plVar5)[1];
            if (plVar12 != plVar1) {
              pfVar4 = (float *)plVar5[2];
              fVar2 = *(float *)plVar5[3];
              local_204 = local_23c + local_230;
              local_200 = local_238 + local_22c;
              fVar18 = local_234 + local_228;
              local_20c = fVar2 * *pfVar4;
              local_208 = fVar2 * pfVar4[1];
              fVar17 = pfVar4[2];
              do {
                local_150 = 1;
                lVar7 = *(longlong *)(*plVar12 + 8);
                local_198 = *(float *)(lVar7 + 0xc0);
                local_188 = local_198 + local_20c;
                fVar3 = *(float *)(lVar7 + 0xd8);
                local_180 = *(float *)(lVar7 + 200) + fVar2 * fVar17;
                local_154 = fVar18 + fVar3;
                local_184 = *(float *)(lVar7 + 0xc4) + local_208;
                local_198 = local_188 - local_198;
                local_190 = local_180 - *(float *)(lVar7 + 200);
                local_194 = local_184 - *(float *)(lVar7 + 0xc4);
                local_160 = local_234 - (local_228 + fVar3);
                local_168 = CONCAT44(local_238 - (local_22c + fVar3),local_23c - (local_230 + fVar3)
                                    );
                local_15c = CONCAT44(local_200 + fVar3,local_204 + fVar3);
                if (local_198 == 0.0) {
                  local_218 = 3.4e+38;
                }
                else {
                  local_218 = 1.0 / local_198;
                }
                if (local_194 == 0.0) {
                  local_214 = 3.4e+38;
                }
                else {
                  local_214 = 1.0 / local_194;
                }
                if (local_190 == 0.0) {
                  local_210 = 3.4e+38;
                }
                else {
                  local_210 = 1.0 / local_190;
                }
                local_140 = local_160;
                local_134 = local_154;
                cVar6 = FMath::LineBoxIntersection
                                  (&local_168,(float *)(lVar7 + 0xc0),&local_188,&local_198,
                                   &local_218);
                if (cVar6 != '\0') {
                  local_1b0 = iVar15 + 1;
                  if (local_1ac < local_1b0) {
                    TArray<TOctree<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::FNodeReference,TMemStackAllocator<0>_>
                    ::ResizeGrow(&local_1b8);
                    fVar19 = (float)local_1c8;
                  }
                  puVar8 = (undefined8 *)((longlong)iVar15 * 0x40 + local_1b8);
                  if (puVar8 == (undefined8 *)0x0) {
                    puVar8 = (undefined8 *)0x0;
                  }
                  else {
                    *(undefined8 *)((longlong)puVar8 + 0x1c) = 0x3f800000;
                    puVar8[2] = 0;
                    *(undefined4 *)(puVar8 + 3) = 0;
                    *(undefined8 *)((longlong)puVar8 + 0x24) = 0;
                    *(undefined4 *)((longlong)puVar8 + 0x2c) = 0x3f800000;
                    *puVar8 = 0;
                  }
                  *puVar8 = *(undefined8 *)(local_1f8 + 0x4018 + (ulonglong)(uVar9 & 7) * 8);
                  *(float *)(puVar8 + 2) =
                       local_1c8._4_4_ * *(float *)(&DAT_146534f00 + local_178 * 4) +
                       (float)local_1e8;
                  *(float *)((longlong)puVar8 + 0x14) =
                       local_1c8._4_4_ * *(float *)(&DAT_146534f00 + uVar14 * 4) + local_1e8._4_4_;
                  fVar2 = *(float *)(&DAT_146534f00 + uVar10 * 4);
                  *(undefined4 *)((longlong)puVar8 + 0x1c) = 0;
                  *(undefined4 *)((longlong)puVar8 + 0x2c) = 0;
                  *(float *)(puVar8 + 4) = fVar19;
                  fVar17 = fVar19 * 0.5 * 1.0625;
                  *(float *)((longlong)puVar8 + 0x24) = fVar19;
                  *(float *)(puVar8 + 3) = local_1c8._4_4_ * fVar2 + (float)uStack_1e0;
                  *(float *)(puVar8 + 5) = fVar19;
                  *(float *)(puVar8 + 6) = fVar17;
                  *(float *)((longlong)puVar8 + 0x34) = fVar19 - fVar17;
                  lVar7 = local_220;
                  iVar15 = local_1b0;
                  break;
                }
                plVar12 = plVar12 + 1;
                lVar7 = local_220;
              } while (plVar12 != plVar1);
            }
          }
        }
      }
      iVar11 = 0;
      if (((byte)uVar9 & 7) < 7) {
        uVar9 = uVar9 ^ (uVar9 + 1 ^ uVar9) & 7;
      }
      else {
        uVar9 = uVar9 | 8;
      }
    } while (uVar9 >> 3 == 0);
    while ((-1 < iVar11 && (iVar11 < *(int *)(lVar7 + 0x4008)))) {
      local_178 = *param_4;
      uStack_170 = (undefined4)param_4[1];
      uStack_16c = *(undefined4 *)((longlong)param_4 + 0xc);
      lVar13 = *(longlong *)(lVar7 + 0x4000);
      if (*(longlong *)(lVar7 + 0x4000) == 0) {
        lVar13 = lVar7;
      }
      cVar6 = FUN_141dba310(param_1,param_2,lVar13 + (longlong)iVar11 * 0x40,param_3,&local_178);
      lVar7 = local_220;
      if ((cVar6 == '\0') && (local_248 == '\0')) {
        iVar11 = iVar11 + 1;
      }
      else {
        iVar11 = iVar11 + 1;
        local_248 = '\x01';
      }
    }
    if (iVar15 == 0) {
      local_128 = 0;
      local_1f8 = 0;
      lStack_1f0 = lStack_120;
      local_1c8 = local_f8;
      uStack_1c0 = uStack_f0;
      local_1e8 = 0;
      uStack_1e0 = 0x3f80000000000000;
      local_1d8 = 0;
      uStack_1d0 = 0x3f80000000000000;
    }
    else {
      iVar11 = iVar15 + -1;
      lVar7 = (longlong)iVar11 * 0x40;
      local_1f8 = *(longlong *)(lVar7 + local_1b8);
      lStack_1f0 = ((longlong *)(lVar7 + local_1b8))[1];
      puVar8 = (undefined8 *)(lVar7 + 0x10 + local_1b8);
      local_1e8 = *puVar8;
      uStack_1e0 = puVar8[1];
      puVar8 = (undefined8 *)(lVar7 + 0x20 + local_1b8);
      local_1d8 = *puVar8;
      uStack_1d0 = puVar8[1];
      puVar8 = (undefined8 *)(lVar7 + 0x30 + local_1b8);
      local_1c8 = *puVar8;
      uStack_1c0 = puVar8[1];
      iVar16 = (iVar15 - iVar11) + -1;
      if (iVar16 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar11 * 0x40 + local_1b8),
                   (void *)((longlong)iVar15 * 0x40 + local_1b8),(longlong)iVar16 << 6);
      }
      local_1b0 = iVar11;
      TArray<TOctree<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::FNodeReference,TMemStackAllocator<0>_>
      ::ResizeShrink(&local_1b8);
      iVar15 = local_1b0;
    }
    if (local_1f8 == 0) {
      return local_248;
    }
  } while( true );
}



// FUNCTION 141db97d0 FUN_141db97d0 body=718 status=ok
// SIG undefined FUN_141db97d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_141db97d0(undefined8 param_1,longlong param_2,longlong *param_3,longlong param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_1d8 [128];
  longlong local_158;
  undefined8 local_148;
  longlong local_b8;
  undefined8 local_a8;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  lVar1 = *(longlong *)(param_4 + 0x5c8);
  lVar2 = *param_3;
  local_158 = 0;
  lVar6 = param_3[1];
  uVar5 = 0;
  local_148 = 0;
  local_b8 = 0;
  local_a8 = 0;
  plVar3 = *(longlong **)(lVar1 + 0x30);
  if ((((*(uint *)(lVar6 + 0x1c) >> 1 & 1) != 0) && ((*(byte *)(lVar6 + 0x20) & 1) != 0)) &&
     ((*(byte *)(lVar6 + 0x2c) & *(byte *)((longlong)plVar3 + 0x189)) != 0)) {
    if (((*(byte *)(param_4 + 0x560) & 0x80) != 0) && ((*(uint *)(lVar6 + 0x1c) >> 3 & 1) == 0)) {
      return 0;
    }
    fVar10 = *(float *)(param_4 + 0x3a8) - *(float *)((longlong)param_3 + 0x14);
    fVar11 = *(float *)(param_4 + 0x3a4) - *(float *)(param_3 + 2);
    fVar12 = *(float *)(param_4 + 0x3ac) - *(float *)(param_3 + 3);
    fVar13 = *(float *)(param_4 + 0x3b0) + *(float *)(param_3 + 5);
    fVar13 = fVar13 * fVar13;
    fVar15 = fVar10 * *(float *)(plVar3 + 8) + fVar11 * *(float *)(plVar3 + 6) +
             fVar12 * *(float *)(plVar3 + 10);
    fVar9 = fVar10 - fVar15 * *(float *)(plVar3 + 8);
    fVar14 = fVar11 - fVar15 * *(float *)(plVar3 + 6);
    fVar8 = fVar12 - fVar15 * *(float *)(plVar3 + 10);
    if (((((*(uint *)(plVar3 + 0x30) >> 2 & 1) == 0) ||
         (cVar4 = FUN_141ba17a0(lVar1), cVar4 == '\0')) ||
        (cVar4 = (**(code **)(*plVar3 + 0xa0))(plVar3), cVar4 != '\0')) &&
       ((fVar14 * fVar14 + fVar9 * fVar9 + fVar8 * fVar8 < fVar13 &&
        ((0.0 <= fVar15 || (fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12 <= fVar13)))))) {
      lVar6 = (longlong)*(int *)(lVar2 + 0xe8);
      if ((*(short *)(*(longlong *)(param_2 + 0x1b30) + lVar6 * 8) != 1) &&
         (((*(byte *)(*(longlong *)(param_2 + 0x1b30) + 4 + lVar6 * 8) & 3) != 0 &&
          (cVar4 = FUN_141dbda30(param_5,param_3 + 2,(longlong)param_3 + 0x1c), cVar4 != '\0')))) {
        if (((*(uint *)(plVar3 + 0x30) >> 1 & 1) == 0) ||
           (cVar4 = FUN_141be7e40(lVar1), cVar4 == '\0')) {
          uVar7 = 0;
        }
        else {
          uVar7 = 1;
        }
        uVar5 = FUN_141dcb3c0(uVar7,lVar2,param_2 + 0x2740,param_2);
      }
    }
  }
  if (local_b8 != 0) {
    FMemory::Free();
  }
  if (local_158 != 0) {
    FMemory::Free();
  }
  return uVar5;
}



// FUNCTION 141db9aa0 FUN_141db9aa0 body=718 status=ok
// SIG undefined FUN_141db9aa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_141db9aa0(undefined8 param_1,longlong param_2,longlong *param_3,longlong param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_1e8 [128];
  longlong local_168;
  undefined8 local_158;
  longlong local_c8;
  undefined8 local_b8;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  lVar1 = *(longlong *)(param_4 + 0x5c8);
  lVar2 = *param_3;
  lVar6 = param_3[1];
  uVar5 = 0;
  local_168 = 0;
  local_158 = 0;
  local_c8 = 0;
  local_b8 = 0;
  plVar3 = *(longlong **)(lVar1 + 0x30);
  if ((((*(uint *)(lVar6 + 0x1c) >> 1 & 1) != 0) && ((*(byte *)(lVar6 + 0x20) & 1) != 0)) &&
     ((*(byte *)(lVar6 + 0x2c) & *(byte *)((longlong)plVar3 + 0x189)) != 0)) {
    if (((*(byte *)(param_4 + 0x560) & 0x80) != 0) && ((*(uint *)(lVar6 + 0x1c) >> 3 & 1) == 0)) {
      return 0;
    }
    fVar10 = *(float *)(param_4 + 0x3a4) - *(float *)(param_3 + 2);
    fVar11 = *(float *)(param_4 + 0x3a8) - *(float *)((longlong)param_3 + 0x14);
    fVar12 = *(float *)(param_4 + 0x3ac) - *(float *)(param_3 + 3);
    fVar13 = *(float *)(param_4 + 0x3b0) + *(float *)(param_3 + 5);
    fVar13 = fVar13 * fVar13;
    fVar15 = fVar11 * *(float *)(plVar3 + 8) + fVar10 * *(float *)(plVar3 + 6) +
             fVar12 * *(float *)(plVar3 + 10);
    fVar9 = fVar11 - fVar15 * *(float *)(plVar3 + 8);
    fVar14 = fVar10 - fVar15 * *(float *)(plVar3 + 6);
    fVar8 = fVar12 - fVar15 * *(float *)(plVar3 + 10);
    if (((((*(uint *)(plVar3 + 0x30) >> 2 & 1) == 0) ||
         (cVar4 = FUN_141ba17a0(lVar1), cVar4 == '\0')) ||
        (cVar4 = (**(code **)(*plVar3 + 0xa0))(plVar3), cVar4 != '\0')) &&
       ((fVar14 * fVar14 + fVar9 * fVar9 + fVar8 * fVar8 < fVar13 &&
        ((0.0 <= fVar15 || (fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12 <= fVar13)))))) {
      lVar6 = (longlong)*(int *)(lVar2 + 0xe8);
      if ((*(short *)(*(longlong *)(param_2 + 0x1b30) + lVar6 * 8) != 1) &&
         (((*(byte *)(*(longlong *)(param_2 + 0x1b30) + 4 + lVar6 * 8) & 3) != 0 &&
          (cVar4 = FUN_141dbd710(param_5,param_3 + 2,(longlong)param_3 + 0x1c,(int)param_3[5]),
          cVar4 != '\0')))) {
        if (((*(uint *)(plVar3 + 0x30) >> 1 & 1) == 0) ||
           (cVar4 = FUN_141be7e40(lVar1), cVar4 == '\0')) {
          uVar7 = 0;
        }
        else {
          uVar7 = 1;
        }
        uVar5 = FUN_141dcb3c0(uVar7,lVar2,param_2 + 0x2740,param_2);
      }
    }
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  if (local_168 != 0) {
    FMemory::Free();
  }
  return uVar5;
}



// FUNCTION 141db9d70 FUN_141db9d70 body=718 status=ok
// SIG undefined FUN_141db9d70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_141db9d70(undefined8 param_1,longlong param_2,longlong *param_3,longlong param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_1e8 [128];
  longlong local_168;
  undefined8 local_158;
  longlong local_c8;
  undefined8 local_b8;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  lVar1 = *(longlong *)(param_4 + 0x5c8);
  lVar2 = *param_3;
  lVar6 = param_3[1];
  uVar5 = 0;
  local_168 = 0;
  local_158 = 0;
  local_c8 = 0;
  local_b8 = 0;
  plVar3 = *(longlong **)(lVar1 + 0x30);
  if ((((*(uint *)(lVar6 + 0x1c) >> 1 & 1) != 0) && ((*(byte *)(lVar6 + 0x20) & 1) != 0)) &&
     ((*(byte *)(lVar6 + 0x2c) & *(byte *)((longlong)plVar3 + 0x189)) != 0)) {
    if (((*(byte *)(param_4 + 0x560) & 0x80) != 0) && ((*(uint *)(lVar6 + 0x1c) >> 3 & 1) == 0)) {
      return 0;
    }
    fVar10 = *(float *)(param_4 + 0x3a4) - *(float *)(param_3 + 2);
    fVar11 = *(float *)(param_4 + 0x3a8) - *(float *)((longlong)param_3 + 0x14);
    fVar12 = *(float *)(param_4 + 0x3ac) - *(float *)(param_3 + 3);
    fVar13 = *(float *)(param_4 + 0x3b0) + *(float *)(param_3 + 5);
    fVar13 = fVar13 * fVar13;
    fVar15 = fVar11 * *(float *)(plVar3 + 8) + fVar10 * *(float *)(plVar3 + 6) +
             fVar12 * *(float *)(plVar3 + 10);
    fVar9 = fVar11 - fVar15 * *(float *)(plVar3 + 8);
    fVar14 = fVar10 - fVar15 * *(float *)(plVar3 + 6);
    fVar8 = fVar12 - fVar15 * *(float *)(plVar3 + 10);
    if (((((*(uint *)(plVar3 + 0x30) >> 2 & 1) == 0) ||
         (cVar4 = FUN_141ba17a0(lVar1), cVar4 == '\0')) ||
        (cVar4 = (**(code **)(*plVar3 + 0xa0))(plVar3), cVar4 != '\0')) &&
       ((fVar14 * fVar14 + fVar9 * fVar9 + fVar8 * fVar8 < fVar13 &&
        ((0.0 <= fVar15 || (fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12 <= fVar13)))))) {
      lVar6 = (longlong)*(int *)(lVar2 + 0xe8);
      if ((*(short *)(*(longlong *)(param_2 + 0x1b30) + lVar6 * 8) != 1) &&
         (((*(byte *)(*(longlong *)(param_2 + 0x1b30) + 4 + lVar6 * 8) & 3) != 0 &&
          (cVar4 = FUN_141dbdac0(param_5,param_3 + 2,(longlong)param_3 + 0x1c,(int)param_3[5]),
          cVar4 != '\0')))) {
        if (((*(uint *)(plVar3 + 0x30) >> 1 & 1) == 0) ||
           (cVar4 = FUN_141be7e40(lVar1), cVar4 == '\0')) {
          uVar7 = 0;
        }
        else {
          uVar7 = 1;
        }
        uVar5 = FUN_141dcb3c0(uVar7,lVar2,param_2 + 0x2740,param_2);
      }
    }
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  if (local_168 != 0) {
    FMemory::Free();
  }
  return uVar5;
}



// FUNCTION 141dba040 FUN_141dba040 body=718 status=ok
// SIG undefined FUN_141dba040(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_141dba040(undefined8 param_1,longlong param_2,longlong *param_3,longlong param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_1e8 [128];
  longlong local_168;
  undefined8 local_158;
  longlong local_c8;
  undefined8 local_b8;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  lVar1 = *(longlong *)(param_4 + 0x5c8);
  lVar2 = *param_3;
  lVar6 = param_3[1];
  uVar5 = 0;
  local_168 = 0;
  local_158 = 0;
  local_c8 = 0;
  local_b8 = 0;
  plVar3 = *(longlong **)(lVar1 + 0x30);
  if ((((*(uint *)(lVar6 + 0x1c) >> 1 & 1) != 0) && ((*(byte *)(lVar6 + 0x20) & 1) != 0)) &&
     ((*(byte *)(lVar6 + 0x2c) & *(byte *)((longlong)plVar3 + 0x189)) != 0)) {
    if (((*(byte *)(param_4 + 0x560) & 0x80) != 0) && ((*(uint *)(lVar6 + 0x1c) >> 3 & 1) == 0)) {
      return 0;
    }
    fVar10 = *(float *)(param_4 + 0x3a4) - *(float *)(param_3 + 2);
    fVar11 = *(float *)(param_4 + 0x3a8) - *(float *)((longlong)param_3 + 0x14);
    fVar12 = *(float *)(param_4 + 0x3ac) - *(float *)(param_3 + 3);
    fVar13 = *(float *)(param_4 + 0x3b0) + *(float *)(param_3 + 5);
    fVar13 = fVar13 * fVar13;
    fVar15 = fVar11 * *(float *)(plVar3 + 8) + fVar10 * *(float *)(plVar3 + 6) +
             fVar12 * *(float *)(plVar3 + 10);
    fVar9 = fVar11 - fVar15 * *(float *)(plVar3 + 8);
    fVar14 = fVar10 - fVar15 * *(float *)(plVar3 + 6);
    fVar8 = fVar12 - fVar15 * *(float *)(plVar3 + 10);
    if (((((*(uint *)(plVar3 + 0x30) >> 2 & 1) == 0) ||
         (cVar4 = FUN_141ba17a0(lVar1), cVar4 == '\0')) ||
        (cVar4 = (**(code **)(*plVar3 + 0xa0))(plVar3), cVar4 != '\0')) &&
       ((fVar14 * fVar14 + fVar9 * fVar9 + fVar8 * fVar8 < fVar13 &&
        ((0.0 <= fVar15 || (fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12 <= fVar13)))))) {
      lVar6 = (longlong)*(int *)(lVar2 + 0xe8);
      if ((*(short *)(*(longlong *)(param_2 + 0x1b30) + lVar6 * 8) != 1) &&
         (((*(byte *)(*(longlong *)(param_2 + 0x1b30) + 4 + lVar6 * 8) & 3) != 0 &&
          (cVar4 = FUN_141dbde10(param_5,param_3 + 2,(longlong)param_3 + 0x1c,(int)param_3[5]),
          cVar4 != '\0')))) {
        if (((*(uint *)(plVar3 + 0x30) >> 1 & 1) == 0) ||
           (cVar4 = FUN_141be7e40(lVar1), cVar4 == '\0')) {
          uVar7 = 0;
        }
        else {
          uVar7 = 1;
        }
        uVar5 = FUN_141dcb3c0(uVar7,lVar2,param_2 + 0x2740,param_2);
      }
    }
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  if (local_168 != 0) {
    FMemory::Free();
  }
  return uVar5;
}



// FUNCTION 141dba310 FUN_141dba310 body=718 status=ok
// SIG undefined FUN_141dba310(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_141dba310(undefined8 param_1,longlong param_2,longlong *param_3,longlong param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_1e8 [128];
  longlong local_168;
  undefined8 local_158;
  longlong local_c8;
  undefined8 local_b8;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  lVar1 = *(longlong *)(param_4 + 0x5c8);
  lVar2 = *param_3;
  lVar6 = param_3[1];
  uVar5 = 0;
  local_168 = 0;
  local_158 = 0;
  local_c8 = 0;
  local_b8 = 0;
  plVar3 = *(longlong **)(lVar1 + 0x30);
  if ((((*(uint *)(lVar6 + 0x1c) >> 1 & 1) != 0) && ((*(byte *)(lVar6 + 0x20) & 1) != 0)) &&
     ((*(byte *)(lVar6 + 0x2c) & *(byte *)((longlong)plVar3 + 0x189)) != 0)) {
    if (((*(byte *)(param_4 + 0x560) & 0x80) != 0) && ((*(uint *)(lVar6 + 0x1c) >> 3 & 1) == 0)) {
      return 0;
    }
    fVar10 = *(float *)(param_4 + 0x3a4) - *(float *)(param_3 + 2);
    fVar11 = *(float *)(param_4 + 0x3a8) - *(float *)((longlong)param_3 + 0x14);
    fVar12 = *(float *)(param_4 + 0x3ac) - *(float *)(param_3 + 3);
    fVar13 = *(float *)(param_4 + 0x3b0) + *(float *)(param_3 + 5);
    fVar13 = fVar13 * fVar13;
    fVar15 = fVar11 * *(float *)(plVar3 + 8) + fVar10 * *(float *)(plVar3 + 6) +
             fVar12 * *(float *)(plVar3 + 10);
    fVar9 = fVar11 - fVar15 * *(float *)(plVar3 + 8);
    fVar14 = fVar10 - fVar15 * *(float *)(plVar3 + 6);
    fVar8 = fVar12 - fVar15 * *(float *)(plVar3 + 10);
    if (((((*(uint *)(plVar3 + 0x30) >> 2 & 1) == 0) ||
         (cVar4 = FUN_141ba17a0(lVar1), cVar4 == '\0')) ||
        (cVar4 = (**(code **)(*plVar3 + 0xa0))(plVar3), cVar4 != '\0')) &&
       ((fVar14 * fVar14 + fVar9 * fVar9 + fVar8 * fVar8 < fVar13 &&
        ((0.0 <= fVar15 || (fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12 <= fVar13)))))) {
      lVar6 = (longlong)*(int *)(lVar2 + 0xe8);
      if ((*(short *)(*(longlong *)(param_2 + 0x1b30) + lVar6 * 8) != 1) &&
         (((*(byte *)(*(longlong *)(param_2 + 0x1b30) + 4 + lVar6 * 8) & 3) != 0 &&
          (cVar4 = FUN_141dbdf00(param_5,param_3 + 2,(longlong)param_3 + 0x1c,(int)param_3[5]),
          cVar4 != '\0')))) {
        if (((*(uint *)(plVar3 + 0x30) >> 1 & 1) == 0) ||
           (cVar4 = FUN_141be7e40(lVar1), cVar4 == '\0')) {
          uVar7 = 0;
        }
        else {
          uVar7 = 1;
        }
        uVar5 = FUN_141dcb3c0(uVar7,lVar2,param_2 + 0x2740,param_2);
      }
    }
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  if (local_168 != 0) {
    FMemory::Free();
  }
  return uVar5;
}



// FUNCTION 141dba5e0 FUN_141dba5e0 body=426 status=ok
// SIG undefined FUN_141dba5e0(void)

void FUN_141dba5e0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  ulonglong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  char param_9)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [64];
  
  iVar3 = 0;
  if (0 < *(int *)(param_4 + 0x10)) {
    lVar1 = 0;
    do {
      if (*(undefined **)(*(longlong *)(param_4 + 8) + lVar1 * 8) == &DAT_146a286e0) {
        if (iVar3 != -1) {
          puVar2 = *(undefined8 **)(*(longlong *)(param_4 + 0x18) + (longlong)iVar3 * 8);
          *(undefined4 *)puVar2 = *(undefined4 *)(param_4 + 0xb8);
          goto LAB_141dba667;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_4 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a253f8) {
    _Init_thread_header(&DAT_146a253f8);
    if (DAT_146a253f8 == -1) {
      DAT_146a253f0._0_4_ = 0;
      DAT_146a253f0._4_2_ = 0;
      DAT_146a253f0._6_1_ = 0;
      _Init_thread_footer(&DAT_146a253f8);
    }
  }
  puVar2 = &DAT_146a253f0;
LAB_141dba667:
  FUN_141b51280(param_2,param_3,puVar2,param_6,param_5);
  if (param_9 != '\0') {
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0x3f800000;
    FProjectedShadowInfo::GetWorldToShadowMatrix(param_7,local_48,&local_58,0);
    param_5 = param_5 & 0xffffffff00000000;
    SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
              (param_2,param_3,param_1,local_48,param_5);
    param_5 = param_5 & 0xffffffff00000000;
    SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
              (param_2,param_3,param_1 + 6,&local_58,param_5);
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xc,&param_8,param_5 & 0xffffffff00000000);
  return;
}



// FUNCTION 141dba790 FUN_141dba790 body=2180 status=ok
// SIG undefined FUN_141dba790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141dba790(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,longlong param_6,int param_7,char param_8)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  void *pvVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_328 [32];
  undefined4 local_308;
  undefined4 *local_300;
  char local_2f8;
  uint local_2f4;
  float local_2f0;
  float local_2ec;
  undefined8 local_2e8;
  ulonglong uStack_2e0;
  int local_2d8 [4];
  undefined8 local_2c8;
  float fStack_2c0;
  float fStack_2bc;
  longlong local_2b8;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  undefined8 local_298;
  ulonglong uStack_290;
  undefined8 local_288;
  ulonglong uStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 local_228 [64];
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  longlong local_168;
  undefined8 local_158;
  longlong local_c8;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88;
  undefined4 local_84;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_328;
  local_2b8 = param_6;
  if (param_8 != '\0') {
    local_2e8 = 0;
    uStack_2e0 = 0x3f80000000000000;
    FProjectedShadowInfo::GetWorldToShadowMatrix(param_6,local_228,&local_2e8,0);
    local_308 = 0;
    SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>(param_2,param_3,param_1,local_228);
    local_308 = 0;
    SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
              (param_2,param_3,param_1 + 6,&local_2e8);
  }
  local_298 = 0;
  uStack_290 = 0xbf80000000000000;
  local_288 = 0;
  uStack_280 = 0xbf80000000000000;
  local_2a8 = 1.0;
  fStack_2a4 = 1.0;
  fStack_2a0 = 0.0;
  fStack_29c = 0.0;
  if (-1 < param_7) {
    local_1d8 = 0x4a000000;
    local_1e8 = 0;
    uStack_1e4 = 0x4a000000;
    fStack_1e0 = 0.0;
    fStack_1dc = 0.0;
    local_1d4 = 0;
    local_168 = 0;
    local_158 = 0;
    local_c8 = 0;
    local_b8 = 0;
    local_88 = 0;
    local_84 = 0xffffffff;
    lVar10 = **(longlong **)(param_5 + 0x30);
    uVar5 = FUN_141ba17a0(param_5);
    local_300 = &local_1e8;
    local_308._0_1_ = uVar5;
    (**(code **)(lVar10 + 200))(*(undefined8 *)(param_5 + 0x30),&local_2e8,param_4,param_7);
    if (fStack_1e0 != 0.0) {
      local_2a8 = 1.0 / fStack_1e0;
    }
    local_298 = CONCAT44(local_a4,local_a8);
    uStack_290 = CONCAT44(local_9c,local_a0) ^ 0x8000000000000000;
    lVar10 = **(longlong **)(param_5 + 0x30);
    local_2e8 = CONCAT44(local_a4,local_a8);
    uStack_2e0 = CONCAT44(local_9c,local_a0) ^ 0x8000000000000000;
    uVar5 = FUN_141ba17a0(param_5);
    iVar7 = (**(code **)(lVar10 + 0xa8))(*(undefined8 *)(param_5 + 0x30),param_4,uVar5);
    if (param_7 != iVar7 + -1) {
      fStack_2a4 = 1.0 / fStack_1dc;
      local_2e8 = CONCAT44(local_94,local_98);
      uStack_2e0 = CONCAT44(local_8c,local_90) ^ 0x8000000000000000;
      local_288 = CONCAT44(local_94,local_98);
      uStack_280 = CONCAT44(local_8c,local_90) ^ 0x8000000000000000;
    }
    uVar2 = *(undefined4 *)(param_4 + 0x1a38);
    lVar10 = **(longlong **)(param_5 + 0x30);
    uVar5 = FUN_141ba17a0(param_5);
    local_300 = (undefined4 *)CONCAT44(local_300._4_4_,*(undefined4 *)(param_4 + 0x388));
    local_308 = CONCAT31(local_308._1_3_,uVar5);
    (**(code **)(lVar10 + 0x70))(*(undefined8 *)(param_5 + 0x30),&local_2f0,param_4,uVar2);
    fStack_2a0 = local_2ec;
    fStack_29c = -(local_2f0 * local_2ec);
    if (local_c8 != 0) {
      FMemory::Free();
    }
    if (local_168 != 0) {
      FMemory::Free();
    }
  }
  local_308 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x12,&local_2a8);
  uVar3 = (uint)*(ushort *)(param_1 + 0x1c);
  if (0x1f < *(ushort *)(param_1 + 0x1c)) {
    uVar3 = 0x20;
  }
  uVar15 = (ulonglong)uVar3;
  if (uVar3 != 0) {
    local_2f0 = (float)(uint)*(ushort *)(param_1 + 0x1a);
    pvVar14 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    local_2f4 = (uint)*(ushort *)(param_1 + 0x18);
    uVar8 = (longlong)pvVar14 + uVar15;
    if (*(ulonglong *)(param_2 + 0x38) < uVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar3 + 0x10);
      pvVar14 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar8 = (longlong)pvVar14 + uVar15;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar8;
    _guard_xfg_dispatch_icall_nop(pvVar14,&local_298,uVar15);
    puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar13 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar13 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar11;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar13;
    *(undefined8 **)(param_2 + 8) = puVar13 + 1;
    puVar13[1] = 0;
    *puVar13 = &PTR_LAB_143f594b0;
    *(uint *)(puVar13 + 4) = local_2f4;
    puVar13[3] = pvVar14;
    *(float *)((longlong)puVar13 + 0x24) = local_2f0;
    puVar13[2] = param_3;
    *(uint *)(puVar13 + 5) = uVar3;
  }
  local_2f8 = *(char *)(*(longlong *)(param_5 + 0x30) + 0x188);
  if (param_8 != '\0') {
    uVar3 = (uint)*(ushort *)(param_1 + 0x10);
    if (7 < *(ushort *)(param_1 + 0x10)) {
      uVar3 = 8;
    }
    local_2c8 = CONCAT44(1.0 / (*(float *)(local_2b8 + 0x154) - *(float *)(local_2b8 + 0x158)),
                         *(undefined4 *)(local_2b8 + 0x6b8));
    if (uVar3 != 0) {
      local_2f4 = (uint)*(ushort *)(param_1 + 0xe);
      pvVar14 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      local_2f0 = (float)(uint)*(ushort *)(param_1 + 0xc);
      uVar15 = (ulonglong)uVar3 + (longlong)pvVar14;
      if (*(ulonglong *)(param_2 + 0x38) < uVar15) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar3 + 0x10);
        pvVar14 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
        uVar15 = (ulonglong)uVar3 + (longlong)pvVar14;
      }
      *(ulonglong *)(param_2 + 0x30) = uVar15;
      _guard_xfg_dispatch_icall_nop(pvVar14,&local_2c8,(ulonglong)uVar3);
      puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar13 + 6;
      if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
        puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar11 = puVar13 + 6;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar11;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar13;
      *(undefined8 **)(param_2 + 8) = puVar13 + 1;
      puVar13[1] = 0;
      *puVar13 = &PTR_LAB_143f594b0;
      *(float *)(puVar13 + 4) = local_2f0;
      *(uint *)((longlong)puVar13 + 0x24) = local_2f4;
      puVar13[3] = pvVar14;
      puVar13[2] = param_3;
      *(uint *)(puVar13 + 5) = uVar3;
    }
    uVar9 = 0;
    if (local_2f8 == '\x01') {
      if ((DAT_146ac3e00 != 0) && (*(longlong **)(DAT_146ac3e00 + 0x30) != (longlong *)0x0)) {
        uVar9 = (**(code **)(**(longlong **)(DAT_146ac3e00 + 0x30) + 8))();
      }
    }
    else {
      uVar9 = *(undefined8 *)(*(longlong *)(local_2b8 + 0x28) + 0x10);
    }
    local_2c8 = FUN_1404a0e20();
    if (*(short *)(param_1 + 0x20) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x1e);
      puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar13 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar11 = puVar13 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar11;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar13;
      *(undefined8 **)(param_2 + 8) = puVar13 + 1;
      puVar13[1] = 0;
      *(uint *)(puVar13 + 3) = (uint)uVar1;
      *puVar13 = &PTR_LAB_143f59c80;
      puVar13[2] = param_3;
      puVar13[4] = uVar9;
    }
    uVar9 = local_2c8;
    if (*(short *)(param_1 + 0x24) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x22);
      puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar13 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar11 = puVar13 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar11;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar13;
      *(undefined8 **)(param_2 + 8) = puVar13 + 1;
      puVar13[1] = 0;
      *puVar13 = &PTR_LAB_143f59c70;
      puVar13[2] = param_3;
      *(uint *)(puVar13 + 3) = (uint)uVar1;
      puVar13[4] = uVar9;
    }
    lVar10 = local_2b8;
    if (local_2f8 == '\x01') goto LAB_141dbadca;
  }
  lVar10 = 0;
LAB_141dbadca:
  FUN_141d83610(param_1 + 0x26,param_2,param_3,lVar10);
  lVar10 = *(longlong *)(*(longlong *)(param_5 + 0x30) + 0x150);
  cVar6 = FUN_141ba17a0();
  if ((((cVar6 == '\0') || (lVar10 == 0)) || (*(longlong *)(lVar10 + 0x68) == 0)) ||
     (*(longlong *)(lVar10 + 0x30) == 0)) {
    local_2d8[0] = 0;
    lVar4 = DAT_146ac3d68;
  }
  else {
    local_2d8[0] = 1;
    lVar4 = lVar10;
  }
  uVar9 = *(undefined8 *)(lVar4 + 0x30);
  if (local_2d8[0] == 0) {
    puVar11 = (undefined8 *)&DAT_1464aa7d0;
  }
  else {
    puVar11 = *(undefined8 **)(lVar10 + 0x68);
  }
  local_268 = *puVar11;
  uStack_260 = puVar11[1];
  local_258 = puVar11[2];
  uStack_250 = puVar11[3];
  local_248 = puVar11[4];
  uStack_240 = puVar11[5];
  local_238 = puVar11[6];
  uStack_230 = puVar11[7];
  if (local_2d8[0] == 0) {
    puVar11 = &local_2e8;
    local_2e8 = 0;
    uStack_2e0 = 0;
  }
  else {
    puVar11 = &local_2c8;
    fVar16 = (float)*(int *)(*(longlong *)(lVar10 + 0x68) + 0x40);
    fVar17 = (float)*(int *)(*(longlong *)(lVar10 + 0x68) + 0x44);
    fStack_2c0 = 1.0 / fVar16;
    fStack_2bc = 1.0 / fVar17;
    local_2c8 = CONCAT44(fVar17,fVar16);
  }
  local_278 = *(undefined4 *)puVar11;
  uStack_274 = *(undefined4 *)((longlong)puVar11 + 4);
  uStack_270 = *(undefined4 *)(puVar11 + 1);
  uStack_26c = *(undefined4 *)((longlong)puVar11 + 0xc);
  local_308 = 0;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x3e,local_2d8);
  uVar12 = FUN_141a156e0();
  if (*(short *)(param_1 + 0x46) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x44);
    puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar13 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar13 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar11;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar13;
    *(undefined8 **)(param_2 + 8) = puVar13 + 1;
    puVar13[1] = 0;
    *puVar13 = &PTR_LAB_143f59c80;
    puVar13[2] = param_3;
    *(uint *)(puVar13 + 3) = (uint)uVar1;
    puVar13[4] = uVar9;
  }
  if (*(short *)(param_1 + 0x4a) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x48);
    puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar13 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar13 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar11;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar13;
    *(undefined8 **)(param_2 + 8) = puVar13 + 1;
    puVar13[1] = 0;
    *puVar13 = &PTR_LAB_143f59c70;
    puVar13[2] = param_3;
    *(uint *)(puVar13 + 3) = (uint)uVar1;
    puVar13[4] = uVar12;
  }
  local_308 = 0;
  SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
            (param_2,param_3,param_1 + 0x4c,&local_268);
  local_308 = 0;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x52,&local_278);
  return;
}



// FUNCTION 141dbb020 FUN_141dbb020 body=703 status=ok
// SIG undefined FUN_141dbb020(void)

void FUN_141dbb020(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong *param_4,
                  undefined8 param_5)

{
  bool bVar1;
  char cVar2;
  uchar *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  WriteBytesMem *local_res10;
  longlong local_res18;
  longlong *local_res20;
  longlong in_stack_00000048;
  longlong in_stack_00000050;
  char in_stack_00000058;
  char in_stack_00000060;
  undefined1 local_48 [16];
  
  lVar8 = 0;
  local_res10 = (WriteBytesMem *)0x0;
  local_res18 = param_3;
  local_res20 = param_4;
  (**(code **)(*param_4 + 0x40))(param_4,*(undefined4 *)(param_3 + 0x1a38),local_48,&local_res10);
  puVar3 = AK::WriteBytesMem::Bytes(local_res10);
  cVar2 = in_stack_00000060;
  if (in_stack_00000058 == '\0') {
    if (in_stack_00000060 == '\0') {
      lVar4 = FUN_141db61a0(puVar3,0);
    }
    else {
      lVar4 = FUN_141db6140();
    }
  }
  else if (in_stack_00000060 == '\0') {
    lVar4 = FUN_141db60e0();
  }
  else {
    lVar4 = FUN_141db6080();
  }
  *param_2 = DAT_146534c78;
  if (in_stack_00000048 == 0) {
    in_stack_00000048 = 0;
    lVar7 = 1;
    lVar5 = lVar8;
  }
  else {
    lVar5 = *(longlong *)(in_stack_00000048 + 0x48);
    if (*(char *)(lVar5 + 0x28) == '\0') {
      FUN_1419f3850(lVar5);
    }
    lVar5 = *(longlong *)(lVar5 + 0x38);
    lVar7 = lVar8;
  }
  param_2[1] = lVar5;
  if (lVar7 != 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&stack0x00000048);
  }
  bVar1 = false;
  if (in_stack_00000050 == 0) {
    bVar1 = true;
    in_stack_00000048 = 0;
    lVar5 = lVar8;
  }
  else {
    lVar5 = *(longlong *)(in_stack_00000050 + 0x48);
    if (*(char *)(lVar5 + 0x28) == '\0') {
      FUN_1419f3850(lVar5);
    }
    lVar5 = *(longlong *)(lVar5 + 0x58);
  }
  param_2[5] = lVar5;
  if (bVar1) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&stack0x00000048);
  }
  bVar1 = false;
  if (lVar4 == 0) {
    bVar1 = true;
    in_stack_00000048 = 0;
  }
  else {
    lVar8 = *(longlong *)(lVar4 + 0x48);
    if (*(char *)(lVar8 + 0x28) == '\0') {
      FUN_1419f3850(lVar8);
    }
    lVar8 = *(longlong *)(lVar8 + 0x40);
  }
  param_2[4] = lVar8;
  if (bVar1) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&stack0x00000048);
  }
  FUN_141ed6ac0(param_1,param_2,2,1);
  if (in_stack_00000058 != '\0') {
    if (cVar2 != '\0') {
      uVar6 = FUN_141db6080();
      FUN_141ddf8b0(uVar6,param_1,local_res18,param_5);
      return;
    }
    uVar6 = FUN_141db60e0();
    FUN_141ddf8b0(uVar6,param_1,local_res18,param_5);
    return;
  }
  if (cVar2 != '\0') {
    uVar6 = FUN_141db6140();
    FUN_141ddf8b0(uVar6,param_1,local_res18,param_5);
    return;
  }
  uVar6 = FUN_141db61a0(puVar3);
  FUN_141ddf8b0(uVar6,param_1,local_res18,param_5);
  return;
}



// FUNCTION 141dbb2e0 FUN_141dbb2e0 body=703 status=ok
// SIG undefined FUN_141dbb2e0(void)

void FUN_141dbb2e0(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong *param_4,
                  undefined8 param_5)

{
  bool bVar1;
  char cVar2;
  uchar *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  WriteBytesMem *local_res10;
  longlong local_res18;
  longlong *local_res20;
  longlong in_stack_00000048;
  longlong in_stack_00000050;
  char in_stack_00000058;
  char in_stack_00000060;
  undefined1 local_48 [16];
  
  lVar8 = 0;
  local_res10 = (WriteBytesMem *)0x0;
  local_res18 = param_3;
  local_res20 = param_4;
  (**(code **)(*param_4 + 0x40))(param_4,*(undefined4 *)(param_3 + 0x1a38),local_48,&local_res10);
  puVar3 = AK::WriteBytesMem::Bytes(local_res10);
  cVar2 = in_stack_00000060;
  if (in_stack_00000058 == '\0') {
    if (in_stack_00000060 == '\0') {
      lVar4 = FUN_141db6320(puVar3,0);
    }
    else {
      lVar4 = FUN_141db62c0();
    }
  }
  else if (in_stack_00000060 == '\0') {
    lVar4 = FUN_141db6260();
  }
  else {
    lVar4 = FUN_141db6200();
  }
  *param_2 = DAT_146534c78;
  if (in_stack_00000048 == 0) {
    in_stack_00000048 = 0;
    lVar7 = 1;
    lVar5 = lVar8;
  }
  else {
    lVar5 = *(longlong *)(in_stack_00000048 + 0x48);
    if (*(char *)(lVar5 + 0x28) == '\0') {
      FUN_1419f3850(lVar5);
    }
    lVar5 = *(longlong *)(lVar5 + 0x38);
    lVar7 = lVar8;
  }
  param_2[1] = lVar5;
  if (lVar7 != 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&stack0x00000048);
  }
  bVar1 = false;
  if (in_stack_00000050 == 0) {
    bVar1 = true;
    in_stack_00000048 = 0;
    lVar5 = lVar8;
  }
  else {
    lVar5 = *(longlong *)(in_stack_00000050 + 0x48);
    if (*(char *)(lVar5 + 0x28) == '\0') {
      FUN_1419f3850(lVar5);
    }
    lVar5 = *(longlong *)(lVar5 + 0x58);
  }
  param_2[5] = lVar5;
  if (bVar1) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&stack0x00000048);
  }
  bVar1 = false;
  if (lVar4 == 0) {
    bVar1 = true;
    in_stack_00000048 = 0;
  }
  else {
    lVar8 = *(longlong *)(lVar4 + 0x48);
    if (*(char *)(lVar8 + 0x28) == '\0') {
      FUN_1419f3850(lVar8);
    }
    lVar8 = *(longlong *)(lVar8 + 0x40);
  }
  param_2[4] = lVar8;
  if (bVar1) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&stack0x00000048);
  }
  FUN_141ed6ac0(param_1,param_2,2,1);
  if (in_stack_00000058 != '\0') {
    if (cVar2 != '\0') {
      uVar6 = FUN_141db6200();
      FUN_141ddfcb0(uVar6,param_1,local_res18,param_5);
      return;
    }
    uVar6 = FUN_141db6260();
    FUN_141ddfcb0(uVar6,param_1,local_res18,param_5);
    return;
  }
  if (cVar2 != '\0') {
    uVar6 = FUN_141db62c0();
    FUN_141ddfcb0(uVar6,param_1,local_res18,param_5);
    return;
  }
  uVar6 = FUN_141db6320(puVar3);
  FUN_141ddfcb0(uVar6,param_1,local_res18,param_5);
  return;
}



// FUNCTION 141dbb5a0 FUN_141dbb5a0 body=551 status=ok
// SIG undefined FUN_141dbb5a0(void)

void FUN_141dbb5a0(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong *param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
                  longlong param_9,longlong param_10,char param_11)

{
  bool bVar1;
  uchar *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  WriteBytesMem *local_res10;
  longlong local_res18;
  undefined1 local_res20 [8];
  
  lVar7 = 0;
  local_res10 = (WriteBytesMem *)0x0;
  local_res18 = param_3;
  (**(code **)(*param_4 + 0x40))(param_4,*(undefined4 *)(param_3 + 0x1a38),local_res20,&local_res10)
  ;
  puVar2 = AK::WriteBytesMem::Bytes(local_res10);
  if (param_11 == '\0') {
    lVar3 = FUN_141db63e0(puVar2,0);
  }
  else {
    lVar3 = FUN_141db6380();
  }
  *param_2 = DAT_146534c78;
  if (param_9 == 0) {
    param_9 = 0;
    lVar6 = 1;
    lVar4 = lVar7;
  }
  else {
    lVar4 = *(longlong *)(param_9 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    lVar4 = *(longlong *)(lVar4 + 0x38);
    lVar6 = lVar7;
  }
  param_2[1] = lVar4;
  if (lVar6 != 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_9);
  }
  bVar1 = false;
  if (param_10 == 0) {
    bVar1 = true;
    param_9 = 0;
    lVar4 = lVar7;
  }
  else {
    lVar4 = *(longlong *)(param_10 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    lVar4 = *(longlong *)(lVar4 + 0x58);
  }
  param_2[5] = lVar4;
  if (bVar1) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_9);
  }
  bVar1 = false;
  if (lVar3 == 0) {
    bVar1 = true;
    param_9 = 0;
  }
  else {
    lVar7 = *(longlong *)(lVar3 + 0x48);
    if (*(char *)(lVar7 + 0x28) == '\0') {
      FUN_1419f3850(lVar7);
    }
    lVar7 = *(longlong *)(lVar7 + 0x40);
  }
  param_2[4] = lVar7;
  if (bVar1) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_9);
  }
  FUN_141ed6ac0(param_1,param_2,2,1);
  if (param_11 == '\0') {
    uVar5 = FUN_141db63e0(puVar2);
    FUN_141ddf8b0(uVar5,param_1,local_res18,param_5,param_4,param_6,param_7,param_8);
  }
  else {
    uVar5 = FUN_141db6380();
    FUN_141ddf8b0(uVar5,param_1,local_res18,param_5,param_4,param_6,param_7,param_8);
  }
  return;
}



// FUNCTION 141dbb7d0 FUN_141dbb7d0 body=551 status=ok
// SIG undefined FUN_141dbb7d0(void)

void FUN_141dbb7d0(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong *param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
                  longlong param_9,longlong param_10,char param_11)

{
  bool bVar1;
  uchar *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  WriteBytesMem *local_res10;
  longlong local_res18;
  undefined1 local_res20 [8];
  
  lVar7 = 0;
  local_res10 = (WriteBytesMem *)0x0;
  local_res18 = param_3;
  (**(code **)(*param_4 + 0x40))(param_4,*(undefined4 *)(param_3 + 0x1a38),local_res20,&local_res10)
  ;
  puVar2 = AK::WriteBytesMem::Bytes(local_res10);
  if (param_11 == '\0') {
    lVar3 = FUN_141db64a0(puVar2,0);
  }
  else {
    lVar3 = FUN_141db6440();
  }
  *param_2 = DAT_146534c78;
  if (param_9 == 0) {
    param_9 = 0;
    lVar6 = 1;
    lVar4 = lVar7;
  }
  else {
    lVar4 = *(longlong *)(param_9 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    lVar4 = *(longlong *)(lVar4 + 0x38);
    lVar6 = lVar7;
  }
  param_2[1] = lVar4;
  if (lVar6 != 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_9);
  }
  bVar1 = false;
  if (param_10 == 0) {
    bVar1 = true;
    param_9 = 0;
    lVar4 = lVar7;
  }
  else {
    lVar4 = *(longlong *)(param_10 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    lVar4 = *(longlong *)(lVar4 + 0x58);
  }
  param_2[5] = lVar4;
  if (bVar1) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_9);
  }
  bVar1 = false;
  if (lVar3 == 0) {
    bVar1 = true;
    param_9 = 0;
  }
  else {
    lVar7 = *(longlong *)(lVar3 + 0x48);
    if (*(char *)(lVar7 + 0x28) == '\0') {
      FUN_1419f3850(lVar7);
    }
    lVar7 = *(longlong *)(lVar7 + 0x40);
  }
  param_2[4] = lVar7;
  if (bVar1) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_9);
  }
  FUN_141ed6ac0(param_1,param_2,2,1);
  if (param_11 == '\0') {
    uVar5 = FUN_141db64a0(puVar2);
    FUN_141ddfcb0(uVar5,param_1,local_res18,param_5,param_4,param_6,param_7,param_8);
  }
  else {
    uVar5 = FUN_141db6440();
    FUN_141ddfcb0(uVar5,param_1,local_res18,param_5,param_4,param_6,param_7,param_8);
  }
  return;
}



// FUNCTION 141dbba00 FUN_141dbba00 body=685 status=ok
// SIG undefined FUN_141dbba00(void)

void FUN_141dbba00(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8,
                  undefined4 param_9,undefined8 param_10,longlong param_11)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int local_res10 [2];
  undefined *local_38;
  undefined4 local_30;
  
  lVar1 = *(longlong *)(param_2 + 0x3090);
  local_38 = &DAT_146aa8260;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_res10,&local_38);
  plVar7 = (longlong *)0x0;
  if (local_res10[0] != -1) {
    plVar7 = (longlong *)((longlong)local_res10[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar10 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  lVar1 = *plVar10;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  FRHIComputeShader::UpdateStats(uVar3);
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar8 + 3;
  if (*(undefined8 **)(param_1 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 3;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar6;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar8;
  *(undefined8 **)(param_1 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_144d91e50;
  puVar8[2] = uVar3;
  FUN_141dde650(lVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                param_10,param_11);
  iVar4 = (*(int *)(param_2 + 0x1aac) - *(int *)(param_2 + 0x1aa4)) + 0xf;
  iVar5 = (*(int *)(param_2 + 0x1aa8) - *(int *)(param_2 + 0x1aa0)) + 0xf;
  DispatchComputeShader
            (param_1,lVar1,(int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4,
             (int)((iVar4 >> 0x1f & 0xfU) + iVar4) >> 4,1);
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar1 + 0xd4,param_1,*(undefined8 *)(lVar2 + 0x60));
  uVar3 = *(undefined8 *)(param_11 + 0x18);
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar8 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar6;
  *puVar8 = uVar3;
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar9 + 6;
  if (*(undefined8 **)(param_1 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
    puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar9 + 6;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar6;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar9;
  *(undefined8 **)(param_1 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  puVar9[3] = puVar8;
  *puVar9 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar9 + 2) = 1;
  *(undefined4 *)(puVar9 + 4) = 0;
  *(undefined4 *)((longlong)puVar9 + 0x24) = 1;
  puVar9[5] = 0;
  return;
}



// FUNCTION 141dbbcb0 FUN_141dbbcb0 body=221 status=ok
// SIG undefined FUN_141dbbcb0(void)

void FUN_141dbbcb0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_res18 [2];
  
  if (*(char *)(param_3 + 6) != '\0') {
    (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,local_res18,param_4,&DAT_146aa7218,0);
    uVar1 = *(ushort *)(param_3 + 4);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar3;
    *(undefined8 **)(param_1 + 8) = puVar3 + 1;
    puVar3[1] = 0;
    *puVar3 = &PTR_LAB_144dcb3c8;
    puVar3[2] = param_2;
    *(uint *)(puVar3 + 3) = (uint)uVar1;
    puVar3[4] = local_res18[0];
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res18);
  }
  return;
}



// FUNCTION 141dbbd90 FUN_141dbbd90 body=221 status=ok
// SIG undefined FUN_141dbbd90(void)

void FUN_141dbbd90(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_res18 [2];
  
  if (*(char *)(param_3 + 6) != '\0') {
    (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,local_res18,param_4,&DAT_146aa72a8,0);
    uVar1 = *(ushort *)(param_3 + 4);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar3;
    *(undefined8 **)(param_1 + 8) = puVar3 + 1;
    puVar3[1] = 0;
    *puVar3 = &PTR_LAB_144dcb3c8;
    puVar3[2] = param_2;
    *(uint *)(puVar3 + 3) = (uint)uVar1;
    puVar3[4] = local_res18[0];
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res18);
  }
  return;
}



// FUNCTION 141dbbe70 FUN_141dbbe70 body=221 status=ok
// SIG undefined FUN_141dbbe70(void)

void FUN_141dbbe70(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_res18 [2];
  
  if (*(char *)(param_3 + 6) != '\0') {
    (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,local_res18,param_4,&DAT_146aa7178,0);
    uVar1 = *(ushort *)(param_3 + 4);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar3;
    *(undefined8 **)(param_1 + 8) = puVar3 + 1;
    puVar3[1] = 0;
    *puVar3 = &PTR_LAB_144dcb3c8;
    puVar3[2] = param_2;
    *(uint *)(puVar3 + 3) = (uint)uVar1;
    puVar3[4] = local_res18[0];
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res18);
  }
  return;
}



// FUNCTION 141dbbf50 FUN_141dbbf50 body=489 status=ok
// SIG undefined FUN_141dbbf50(void)

undefined8 * FUN_141dbbf50(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e82b18;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_141cdf500(param_2);
  FShaderResourceParameter::Bind(param_1 + 0x1a,*(undefined8 *)(param_2 + 0x18),L"InTexture",0);
  FRWShaderParameter::Bind((longlong)param_1 + 0xd4,*(undefined8 *)(param_2 + 0x18),L"OutTexture");
  FShaderParameter::Bind((longlong)param_1 + 0xdc,*(undefined8 *)(param_2 + 0x18),L"NumLights",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xe2,*(undefined8 *)(param_2 + 0x18),L"ViewDimensions",0);
  FShaderResourceParameter::Bind(param_1 + 0x1d,*(undefined8 *)(param_2 + 0x18),L"LTCMatTexture",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xec,*(undefined8 *)(param_2 + 0x18),L"LTCMatSampler",0);
  FShaderResourceParameter::Bind(param_1 + 0x1e,*(undefined8 *)(param_2 + 0x18),L"LTCAmpTexture",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xf4,*(undefined8 *)(param_2 + 0x18),L"LTCAmpSampler",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1f,*(undefined8 *)(param_2 + 0x18),L"SSProfilesTexture",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xfc,*(undefined8 *)(param_2 + 0x18),
             L"TransmissionProfilesLinearSampler",0);
  FShaderResourceParameter::Bind(param_1 + 0x20,*(undefined8 *)(param_2 + 0x18),L"EyeAdaptation",0);
  return param_1;
}



// FUNCTION 141dbc140 FUN_141dbc140 body=119 status=ok
// SIG undefined FUN_141dbc140(void)

undefined8 * FUN_141dbc140(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146aa7fc0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 141dbc1c0 FUN_141dbc1c0 body=119 status=ok
// SIG undefined FUN_141dbc1c0(void)

undefined8 * FUN_141dbc1c0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146aa7e70;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 141dbc240 FUN_141dbc240 body=119 status=ok
// SIG undefined FUN_141dbc240(void)

undefined8 * FUN_141dbc240(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146aa6530;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 141dbc2c0 FUN_141dbc2c0 body=119 status=ok
// SIG undefined FUN_141dbc2c0(void)

undefined8 * FUN_141dbc2c0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146aa6fe0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 141dbc340 FUN_141dbc340 body=347 status=ok
// SIG undefined FUN_141dbc340(void)

undefined8 * FUN_141dbc340(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_141d89a50();
  *param_1 = &PTR_FUN_144e82698;
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
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x184) = 0;
  *(undefined4 *)((longlong)param_1 + 0x186) = 0;
  *(undefined2 *)((longlong)param_1 + 0x18a) = 0;
  FVolumeShadowingParameters::Bind(param_1 + 0x22,*(undefined8 *)(param_2 + 0x18));
  FShaderParameter::Bind(param_1 + 0x2d,*(undefined8 *)(param_2 + 0x18),L"SpotlightMask",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x16e,*(undefined8 *)(param_2 + 0x18),L"LightFunctionParameters",0)
  ;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  FShaderParameter::Bind((undefined8 *)((longlong)param_1 + 0x174),uVar1,L"WorldToShadowMatrix",0);
  FShaderParameter::Bind((longlong)param_1 + 0x17a,uVar1,L"ShadowmapMinMax",0);
  FShaderParameter::Bind(param_1 + 0x30,uVar1,L"VolumeCascadeIndex",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x186,*(undefined8 *)(param_2 + 0x18),L"LightFunctionWorldToLight",
             0);
  return param_1;
}



// FUNCTION 141dbc4a0 FUN_141dbc4a0 body=146 status=ok
// SIG undefined FUN_141dbc4a0(void)

undefined8 * FUN_141dbc4a0(undefined8 *param_1)

{
  FUN_141afa950();
  *param_1 = &PTR_FUN_144e82698;
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
  *(undefined4 *)(param_1 + 0x31) = 0;
  return param_1;
}



// FUNCTION 141dbc540 FCachedShadowMapData body=668 status=ok
// SIG undefined FCachedShadowMapData(void)

undefined8 * FCachedShadowMapData::FCachedShadowMapData(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  uVar4 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar4;
  uVar4 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar4;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  uVar4 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar4;
  uVar4 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar4;
  uVar4 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar4;
  uVar4 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar4;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x94);
  uVar2 = *(undefined4 *)(param_2 + 0x13);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar1;
  *(undefined4 *)(param_1 + 0x13) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar3;
  uVar4 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar4;
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)((longlong)param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)((longlong)param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)((longlong)param_2 + 0xc4);
  param_1[0x26] = 0;
  if (param_2[0x26] == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_1 + 0x1a,param_2 + 0x1a,0x60);
  }
  if (param_1[0x26] != 0) {
    FMemory::Free();
  }
  param_1[0x26] = param_2[0x26];
  param_2[0x26] = 0;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x144) = *(undefined4 *)((longlong)param_2 + 0x144);
  param_2[0x28] = 0;
  param_1[0x3a] = 0;
  if (param_2[0x3a] == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_1 + 0x2a,param_2 + 0x2a,0x80);
  }
  if (param_1[0x3a] != 0) {
    FMemory::Free();
  }
  param_1[0x3a] = param_2[0x3a];
  param_2[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)((longlong)param_1 + 0x1e4) = *(undefined4 *)((longlong)param_2 + 0x1e4);
  param_2[0x3c] = 0;
  param_1[0x3e] = param_2[0x3e];
  *(undefined4 *)(param_1 + 0x3f) = *(undefined4 *)(param_2 + 0x3f);
  *(undefined4 *)((longlong)param_1 + 0x1fc) = *(undefined4 *)((longlong)param_2 + 0x1fc);
  param_1[0x40] = param_2[0x40];
  *(undefined4 *)(param_1 + 0x41) = *(undefined4 *)(param_2 + 0x41);
  *(undefined4 *)((longlong)param_1 + 0x20c) = *(undefined4 *)((longlong)param_2 + 0x20c);
  *(undefined1 *)(param_1 + 0x42) = *(undefined1 *)(param_2 + 0x42);
  *(undefined4 *)((longlong)param_1 + 0x214) = *(undefined4 *)((longlong)param_2 + 0x214);
  *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)(param_2 + 0x44);
  *(undefined1 *)((longlong)param_1 + 0x221) = *(undefined1 *)((longlong)param_2 + 0x221);
  param_1[0x46] = 0;
  param_1[0x46] = param_2[0x46];
  param_2[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = *(undefined4 *)(param_2 + 0x47);
  *(undefined4 *)((longlong)param_1 + 0x23c) = *(undefined4 *)((longlong)param_2 + 0x23c);
  param_2[0x47] = 0;
  param_1[0x48] = param_2[0x48];
  param_2[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = *(undefined4 *)(param_2 + 0x49);
  *(undefined1 *)((longlong)param_1 + 0x24c) = *(undefined1 *)((longlong)param_2 + 0x24c);
  return param_1;
}



// FUNCTION 141dbc7e0 FLayoutAndAssignedShadows body=239 status=ok
// SIG undefined FLayoutAndAssignedShadows(void)

undefined4 *
FLayoutAndAssignedShadows::FLayoutAndAssignedShadows(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((longlong)param_1 + 9) = *(undefined1 *)((longlong)param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 10) = *(undefined1 *)((longlong)param_2 + 10);
  *(undefined8 *)(param_1 + 0x1e) = 0;
  if (*(longlong *)(param_2 + 0x1e) == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_1 + 4,param_2 + 4,100);
  }
  if (*(longlong *)(param_1 + 0x1e) != 0) {
    FMemory::Free();
  }
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_2 + 0x1e) = 0;
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_2 + 0x22) = 0;
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  *(undefined8 *)(param_2 + 0x24) = 0;
  return param_1;
}



// FUNCTION 141dbc8d0 FLayoutAndAssignedShadows body=165 status=ok
// SIG undefined FLayoutAndAssignedShadows(void)

undefined4 *
FLayoutAndAssignedShadows::FLayoutAndAssignedShadows(undefined4 *param_1,undefined2 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = 1;
  param_1[1] = 1;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x20] = param_1[0x20] + 1;
  if ((int)param_1[0x21] < (int)param_1[0x20]) {
    TArray<FTextureLayout::FTextureLayoutNode,TInlineAllocator<5,FDefaultAllocator>_>::ResizeGrow
              (param_1 + 4,0);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x1e);
  if (*(undefined8 **)(param_1 + 0x1e) == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)(param_1 + 4);
  }
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0xffffffffffffffff;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc) = param_2;
    *(undefined2 *)((longlong)puVar1 + 0xe) = param_2;
    *(undefined1 *)(puVar1 + 2) = 0;
  }
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  return param_1;
}



// FUNCTION 141dbc980 FUN_141dbc980 body=513 status=ok
// SIG undefined FUN_141dbc980(void)

undefined8 * FUN_141dbc980(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e83230;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 2;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  param_1[0x38] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0x3a] = 0;
  param_1[0x4c] = 0;
  param_1[0x4e] = 0;
  param_1[0x5c] = 0;
  param_1[0x5e] = 0;
  param_1[0x70] = 0;
  param_1[0x72] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ac) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c4) = 0x4a000000;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0;
  param_1[0x7a] = 0x4a000000;
  param_1[0x88] = 0;
  param_1[0x8a] = 0;
  param_1[0x9c] = 0;
  param_1[0x9e] = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x524) = 0xffffffff;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x544) = 0x3f800000;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) & 0xfffe0000;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xbe] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  *(undefined4 *)(param_1 + 0xd7) = 0;
  return param_1;
}



// FUNCTION 141dbcb90 FSampleTrianglesCS body=323 status=ok
// SIG undefined FSampleTrianglesCS(void)

undefined8 * FSampleTrianglesCS::FSampleTrianglesCS(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e82950;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  FRWShaderParameter::Bind(param_1 + 0x18,uVar1,L"InterpolatedVertexData");
  FRWShaderParameter::Bind(param_1 + 0x19,uVar1,L"SurfelData");
  FRWShaderParameter::Bind(param_1 + 0x1a,uVar1,L"VPLFlux");
  FShaderParameter::Bind(param_1 + 0x1b,*(undefined8 *)(param_2 + 0x18),L"SurfelStartIndex",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xde,*(undefined8 *)(param_2 + 0x18),L"NumSurfelsToGenerate",0);
  FShaderParameter::Bind((longlong)param_1 + 0xe4,*(undefined8 *)(param_2 + 0x18),L"NumTriangles",0)
  ;
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xea,*(undefined8 *)(param_2 + 0x18),L"TriangleVertexData",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xee,*(undefined8 *)(param_2 + 0x18),L"TriangleCDFs",0);
  return param_1;
}



// FUNCTION 141dbcce0 FUN_141dbcce0 body=668 status=ok
// SIG undefined FUN_141dbcce0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_141dbcce0(undefined8 *param_1,longlong *param_2,undefined8 param_3,WriteBytesMem *param_4,
             undefined8 param_5,int param_6)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  uchar *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined4 uVar12;
  undefined *local_38;
  undefined4 local_30;
  
  plVar11 = (longlong *)0x0;
  uVar12 = 0;
  FUN_141b279e0();
  param_1[9] = 0;
  param_1[10] = 0;
  uVar5 = (**(code **)(*param_2 + 0x40))(param_2);
  uVar5 = FUN_1425939a0(param_4,&DAT_146aa6920,uVar5,1,param_5,uVar12);
  param_1[8] = uVar5;
  uVar5 = (**(code **)(*(longlong *)param_1[1] + 0x40))();
  uVar5 = FUN_1425939a0(param_4,&DAT_146aa67d0,uVar5,1);
  param_1[7] = uVar5;
  *param_1 = uVar5;
  iVar4 = (**(code **)(*(longlong *)param_4 + 0x178))(param_4);
  cVar3 = FUN_141ed13a0((&DAT_1464c9c48)[param_6]);
  if (cVar3 != '\0') {
    lVar6 = (**(code **)(*param_2 + 0x40))(param_2);
    cVar3 = (**(code **)(lVar6 + 0x48))();
    if ((cVar3 != '\0') && (iVar4 != 0)) {
      puVar7 = AK::WriteBytesMem::Bytes(param_4);
      uVar5 = (**(code **)(*param_2 + 0x40))(param_2);
      lVar6 = FUN_142591c80(puVar7,uVar5);
      local_30 = 0;
      local_38 = &DAT_146aa6a70;
      plVar10 = (longlong *)(lVar6 + 0x38);
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(plVar10,&param_6,&local_38);
      plVar9 = plVar11;
      if (param_6 != -1) {
        plVar9 = (longlong *)((longlong)param_6 * 0x20 + *plVar10);
      }
      plVar8 = plVar9 + 2;
      if (plVar9 == (longlong *)0x0) {
        plVar8 = plVar11;
      }
      if ((plVar8 == (longlong *)0x0) || (*plVar8 == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      local_30 = 0;
      local_38 = &DAT_146aa6bc0;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(plVar10,&param_6,&local_38);
      plVar9 = plVar11;
      if (param_6 != -1) {
        plVar9 = (longlong *)((longlong)param_6 * 0x20 + *plVar10);
      }
      plVar8 = plVar9 + 2;
      if (plVar9 == (longlong *)0x0) {
        plVar8 = plVar11;
      }
      if ((plVar8 == (longlong *)0x0) || (*plVar8 == 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar1) {
        local_38 = &DAT_146aa6a70;
        local_30 = 0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar10,&param_6,&local_38);
        lVar6 = _DAT_00000000;
        if (param_6 != -1) {
          lVar6 = (longlong)param_6 * 0x20 + *plVar10;
          plVar9 = (longlong *)(lVar6 + 0x10);
          if (lVar6 == 0) {
            plVar9 = plVar11;
          }
          lVar6 = *plVar9;
        }
      }
      else {
        lVar6 = 0;
      }
      param_1[9] = lVar6;
      if (bVar2) {
        local_38 = &DAT_146aa6bc0;
        local_30 = 0;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar10,&param_6,&local_38);
        plVar9 = plVar11;
        if (param_6 != -1) {
          plVar9 = (longlong *)((longlong)param_6 * 0x20 + *plVar10);
        }
        plVar10 = plVar9 + 2;
        if (plVar9 == (longlong *)0x0) {
          plVar10 = plVar11;
        }
        plVar11 = (longlong *)*plVar10;
      }
      param_1[10] = plVar11;
    }
  }
  uVar12 = (**(code **)(*(longlong *)param_4 + 0x1e8))(param_4);
  *(undefined4 *)(param_1 + 0xb) = uVar12;
  return param_1;
}



// FUNCTION 141dbcf80 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<7,0,1,1,0,0,1,7,0,1,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e83300;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<7,0,1,1,0,0,1,7,0,1,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141dbd010 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<15,0,1,1,0,1,1,7,0,1,1,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e83340;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<15,0,1,1,0,1,1,7,0,1,1,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141dbd0a0 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<15,0,1,1,0,1,1,15,0,1,1,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e83380;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<15,0,1,1,0,1,1,15,0,1,1,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141dbd130 ~TArray<FConvexVolume,FDefaultAllocator> body=115 status=ok
// SIG undefined ~TArray<FConvexVolume,FDefaultAllocator>(void)

void TArray<FConvexVolume,FDefaultAllocator>::~TArray<FConvexVolume,FDefaultAllocator>
               (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    do {
      if (plVar2[0x14] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x24;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141dbd1b0 ~FCachedShadowMapData body=126 status=ok
// SIG undefined ~FCachedShadowMapData(void)

void FCachedShadowMapData::~FCachedShadowMapData(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  if (*(longlong **)(param_1 + 0x240) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x240) + 0x30))();
  }
  plVar1 = *(longlong **)(param_1 + 0x230);
  for (iVar2 = *(int *)(param_1 + 0x238); iVar2 != 0; iVar2 = iVar2 + -1) {
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x30))();
    }
    plVar1 = plVar1 + 1;
  }
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141dbd230 FUN_141dbd230 body=262 status=ok
// SIG undefined FUN_141dbd230(void)

void FUN_141dbd230(longlong param_1)

{
  if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x30))();
  }
  if (*(longlong **)(param_1 + 0x98) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x98) + 0x30))();
  }
  if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x30))();
  }
  if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x30))();
  }
  if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))();
  }
  if (*(longlong **)(param_1 + 0x78) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))();
  }
  if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))();
  }
  if (*(longlong **)(param_1 + 0x68) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x30))();
  }
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x30))();
  }
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x30))();
  }
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x30))();
  }
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x30))();
  }
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x30))();
  }
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))();
  }
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x30))();
  }
  FUN_141edd2d0(param_1);
  return;
}



// FUNCTION 141dbd340 operator= body=371 status=ok
// SIG undefined operator=(void)

undefined4 * FShadowCascadeSettings::operator=(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  *param_1 = *param_2;
  puVar5 = param_1 + 8;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  if (puVar5 != param_2 + 8) {
    iVar1 = param_2[0x24];
    puVar4 = *(undefined4 **)(param_2 + 0x20);
    param_1[0x24] = iVar1;
    if ((iVar1 == 0) && (param_1[0x25] == 0)) {
      param_1[0x25] = 0;
    }
    else {
      TArray<FPlane,TInlineAllocator<6,FDefaultAllocator>_>::ResizeForCopy(puVar5,iVar1);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = param_2 + 8;
      }
      puVar3 = *(undefined4 **)(param_1 + 0x20);
      if (*(undefined4 **)(param_1 + 0x20) == (undefined4 *)0x0) {
        puVar3 = puVar5;
      }
      ::_guard_xfg_dispatch_icall_nop(puVar3,puVar4,(longlong)iVar1 << 4);
    }
  }
  puVar5 = param_1 + 0x28;
  if (puVar5 != param_2 + 0x28) {
    iVar1 = param_2[0x4c];
    puVar4 = *(undefined4 **)(param_2 + 0x48);
    param_1[0x4c] = iVar1;
    if ((iVar1 == 0) && (param_1[0x4d] == 0)) {
      param_1[0x4d] = 0;
    }
    else {
      TArray<FPlane,TInlineAllocator<8,FDefaultAllocator>_>::ResizeForCopy(puVar5,iVar1);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = param_2 + 0x28;
      }
      puVar3 = *(undefined4 **)(param_1 + 0x48);
      if (*(undefined4 **)(param_1 + 0x48) == (undefined4 *)0x0) {
        puVar3 = puVar5;
      }
      ::_guard_xfg_dispatch_icall_nop(puVar3,puVar4,(longlong)iVar1 << 4);
    }
  }
  uVar2 = *(undefined8 *)(param_2 + 0x52);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x52) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x56);
  *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_2 + 0x54);
  *(undefined8 *)(param_1 + 0x56) = uVar2;
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  param_1[0x59] = param_2[0x59];
  return param_1;
}



// FUNCTION 141dbd4c0 operator= body=149 status=ok
// SIG undefined operator=(void)

undefined4 * FTextureLayout::operator=(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((longlong)param_1 + 9) = *(undefined1 *)((longlong)param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 10) = *(undefined1 *)((longlong)param_2 + 10);
  if (param_1 + 4 != param_2 + 4) {
    if (*(longlong *)(param_2 + 0x1e) == 0) {
      ::_guard_xfg_dispatch_icall_nop(param_1 + 4,param_2 + 4,100);
    }
    if (*(longlong *)(param_1 + 0x1e) != 0) {
      FMemory::Free();
    }
    *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
    *(undefined8 *)(param_2 + 0x1e) = 0;
    param_1[0x20] = param_2[0x20];
    param_1[0x21] = param_2[0x21];
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  return param_1;
}


