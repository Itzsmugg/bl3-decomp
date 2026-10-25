// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14353fec0 FUN_14353fec0 body=150 status=ok
// SIG undefined FUN_14353fec0(void)

longlong FUN_14353fec0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x48);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x48) = uVar1 - 1;
    }
  }
  if (*(RefCountImpl **)(param_1 + 0x40) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x40));
  }
  FUN_1435b9dc0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14353ff60 FUN_14353ff60 body=89 status=ok
// SIG undefined FUN_14353ff60(void)

undefined8 FUN_14353ff60(undefined8 param_1,ulonglong param_2)

{
  FUN_14353fd80();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 14353ffc0 FUN_14353ffc0 body=46 status=ok
// SIG undefined FUN_14353ffc0(void)

ulonglong FUN_14353ffc0(uint *param_1)

{
  longlong lVar1;
  
  if ((*param_1 & 0x1f) == 0xc) {
    return (ulonglong)(*(longlong *)(param_1 + 4) == 0);
  }
  if ((*param_1 & 0x1f) == 10) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 4) + 8) + 0x80;
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(longlong *)(param_1 + 4) == lVar1);
  }
  return 0;
}



// FUNCTION 14353fff0 FUN_14353fff0 body=89 status=ok
// SIG undefined FUN_14353fff0(void)

void FUN_14353fff0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78410)((longlong)DAT_146b78418 + *(longlong *)(param_3 + 0x10),param_4,
                     *(undefined8 *)(param_6 + 0x10),*(undefined8 *)(param_6 + 0x30),
                     *(undefined8 *)(param_6 + 0x50),*(undefined8 *)(param_6 + 0x70),
                     *(undefined8 *)(param_6 + 0x90));
  }
  return;
}



// FUNCTION 1435400b0 FUN_1435400b0 body=197 status=ok
// SIG undefined FUN_1435400b0(void)

void FUN_1435400b0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(param_6 + 0x10);
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78170)((longlong)DAT_146b78178 + *(longlong *)(param_3 + 0x10),&local_18);
  }
  uVar1 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880(local_18);
  }
  return;
}



// FUNCTION 143540180 FUN_143540180 body=77 status=ok
// SIG undefined FUN_143540180(void)

undefined8 * FUN_143540180(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b33e00;
  param_1[0xe] = 0x3ff0000000000000;
  param_1[0xc] = 0x3ff0000000000000;
  param_1[10] = 0x3ff0000000000000;
  param_1[8] = 0x3ff0000000000000;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 1435401e0 FUN_1435401e0 body=296 status=ok
// SIG undefined FUN_1435401e0(void)

void FUN_1435401e0(longlong param_1,uint param_2,longlong param_3)

{
  char *pcVar1;
  undefined1 local_res10 [8];
  
  if (((((param_2 != 0) &&
        (pcVar1 = (char *)FUN_143590af0(param_3,local_res10,param_1 + 0x70), *pcVar1 != '\0')) &&
       (1 < param_2)) &&
      (((pcVar1 = (char *)FUN_143590af0(param_3 + 0x20,local_res10,param_1 + 0x60), *pcVar1 != '\0'
        && (2 < param_2)) &&
       ((pcVar1 = (char *)FUN_143590af0(param_3 + 0x40,local_res10,param_1 + 0x50), *pcVar1 != '\0'
        && ((3 < param_2 &&
            (pcVar1 = (char *)FUN_143590af0(param_3 + 0x60,local_res10,param_1 + 0x40),
            *pcVar1 != '\0')))))))) &&
     ((4 < param_2 &&
      (((((pcVar1 = (char *)FUN_143590af0(param_3 + 0x80,local_res10,param_1 + 0x78),
          *pcVar1 != '\0' && (5 < param_2)) &&
         (pcVar1 = (char *)FUN_143590af0(param_3 + 0xa0,local_res10,param_1 + 0x68), *pcVar1 != '\0'
         )) && ((6 < param_2 &&
                (pcVar1 = (char *)FUN_143590af0(param_3 + 0xc0,local_res10,param_1 + 0x58),
                *pcVar1 != '\0')))) && (7 < param_2)))))) {
    FUN_143590af0(param_3 + 0xe0,local_res10,param_1 + 0x48);
  }
  return;
}



// FUNCTION 143540450 FUN_143540450 body=2737 status=ok
// SIG undefined FUN_143540450(void)

void FUN_143540450(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong local_res8;
  undefined8 local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  longlong local_298;
  longlong local_290;
  longlong local_288;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  longlong local_238;
  longlong local_230;
  longlong local_228;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  longlong local_208;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  uint local_150 [2];
  undefined8 local_148;
  undefined8 local_140;
  uint local_130 [2];
  undefined8 local_128;
  undefined8 local_120;
  uint local_110 [2];
  undefined8 local_108;
  undefined8 local_100;
  uint local_f0 [2];
  undefined8 local_e8;
  undefined8 local_e0;
  uint local_d0 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  uint local_b0 [2];
  undefined8 local_a8;
  undefined8 local_a0;
  uint local_90 [2];
  undefined8 local_88;
  undefined8 local_80;
  uint local_70 [2];
  undefined8 local_68;
  undefined8 local_60;
  
  local_res10 = param_2;
  local_250 = FUN_143360950(*(undefined8 *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218)
                            ,&DAT_145b12c80,1);
  *(int *)(local_250 + 0x18) = *(int *)(local_250 + 0x18) + 1;
  local_60 = *(undefined8 *)(param_1 + 0x48);
  local_70[0] = 4;
  local_68 = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_258 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x218),"alphaOffset=",0xc,
                            0);
  *(int *)(local_258 + 0x18) = *(int *)(local_258 + 0x18) + 1;
  local_260 = FUN_143360950(*(undefined8 *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218)
                            ,&DAT_145b036e8,2,0);
  *(int *)(local_260 + 0x18) = *(int *)(local_260 + 0x18) + 1;
  local_80 = *(undefined8 *)(param_1 + 0x58);
  local_90[0] = 4;
  local_88 = 0;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_268 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"blueOffset=",0xb,0
                           );
  *(int *)(local_268 + 0x18) = *(int *)(local_268 + 0x18) + 1;
  local_270 = FUN_143360950(*(undefined8 *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218)
                            ,&DAT_145b036e8,2,0);
  *(int *)(local_270 + 0x18) = *(int *)(local_270 + 0x18) + 1;
  local_a0 = *(undefined8 *)(param_1 + 0x68);
  local_b0[0] = 4;
  local_a8 = 0;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_278 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"greenOffset=",0xc,
                            0);
  *(int *)(local_278 + 0x18) = *(int *)(local_278 + 0x18) + 1;
  local_280 = FUN_143360950(*(undefined8 *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218)
                            ,&DAT_145b036e8,2,0);
  *(int *)(local_280 + 0x18) = *(int *)(local_280 + 0x18) + 1;
  local_c0 = *(undefined8 *)(param_1 + 0x78);
  local_d0[0] = 4;
  local_c8 = 0;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_288 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar5 + 0x10) + 0x218),"redOffset=",10,0);
  *(int *)(local_288 + 0x18) = *(int *)(local_288 + 0x18) + 1;
  local_290 = FUN_143360950(*(undefined8 *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218)
                            ,&DAT_145b036e8,2,0);
  *(int *)(local_290 + 0x18) = *(int *)(local_290 + 0x18) + 1;
  local_e0 = *(undefined8 *)(param_1 + 0x40);
  local_f0[0] = 4;
  local_e8 = 0;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_298 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar6 + 0x10) + 0x218),"alphaMultiplier=",
                            0x10,0);
  *(int *)(local_298 + 0x18) = *(int *)(local_298 + 0x18) + 1;
  local_2a0 = FUN_143360950(*(undefined8 *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218)
                            ,&DAT_145b036e8,2,0);
  *(int *)(local_2a0 + 0x18) = *(int *)(local_2a0 + 0x18) + 1;
  local_100 = *(undefined8 *)(param_1 + 0x50);
  local_110[0] = 4;
  local_108 = 0;
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_2a8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar7 + 0x10) + 0x218),"blueMultiplier=",
                            0xf,0);
  *(int *)(local_2a8 + 0x18) = *(int *)(local_2a8 + 0x18) + 1;
  local_2b0 = FUN_143360950(*(undefined8 *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218)
                            ,&DAT_145b036e8,2,0);
  *(int *)(local_2b0 + 0x18) = *(int *)(local_2b0 + 0x18) + 1;
  local_120 = *(undefined8 *)(param_1 + 0x60);
  local_130[0] = 4;
  local_128 = 0;
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_res20 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar8 + 0x10) + 0x218),
                              "greenMultiplier=",0x10);
  *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
  local_res18 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) +
                               0x218),&DAT_145b036e8,2);
  *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
  local_140 = *(undefined8 *)(param_1 + 0x70);
  local_150[0] = 4;
  local_148 = 0;
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar9 + 0x10) + 0x218),"(redMultiplier=",
                             0xf);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  uVar10 = FUN_1435cad50(lVar2,&local_158,local_70);
  uVar11 = FUN_1435cad50(lVar3,&local_160,local_90);
  uVar12 = FUN_1435cad50(lVar4,&local_168,local_b0);
  uVar13 = FUN_1435cad50(lVar5,&local_170,local_d0);
  uVar14 = FUN_1435cad50(lVar6,&local_178,local_f0);
  uVar15 = FUN_1435cad50(lVar7,&local_180,local_110);
  uVar16 = FUN_1435cad50(lVar8,&local_188,local_130);
  uVar17 = FUN_1435cad50(lVar9,&local_190,local_150);
  uVar17 = Scaleform::GFx::ASString::operator+(&local_res8,&local_198,uVar17);
  uVar17 = Scaleform::GFx::ASString::operator+(uVar17,&local_1a0,&local_res18);
  uVar17 = Scaleform::GFx::ASString::operator+(uVar17,&local_1a8,&local_res20);
  uVar16 = Scaleform::GFx::ASString::operator+(uVar17,&local_1b0,uVar16);
  uVar16 = Scaleform::GFx::ASString::operator+(uVar16,&local_1b8,&local_2b0);
  uVar16 = Scaleform::GFx::ASString::operator+(uVar16,&local_1c0,&local_2a8);
  uVar15 = Scaleform::GFx::ASString::operator+(uVar16,&local_1c8,uVar15);
  uVar15 = Scaleform::GFx::ASString::operator+(uVar15,&local_1d0,&local_2a0);
  uVar15 = Scaleform::GFx::ASString::operator+(uVar15,&local_1d8,&local_298);
  uVar14 = Scaleform::GFx::ASString::operator+(uVar15,&local_1e0,uVar14);
  uVar14 = Scaleform::GFx::ASString::operator+(uVar14,&local_1e8,&local_290);
  uVar14 = Scaleform::GFx::ASString::operator+(uVar14,&local_1f0,&local_288);
  uVar13 = Scaleform::GFx::ASString::operator+(uVar14,&local_1f8,uVar13);
  uVar13 = Scaleform::GFx::ASString::operator+(uVar13,&local_200,&local_280);
  uVar13 = Scaleform::GFx::ASString::operator+(uVar13,&local_208,&local_278);
  uVar12 = Scaleform::GFx::ASString::operator+(uVar13,&local_210,uVar12);
  uVar12 = Scaleform::GFx::ASString::operator+(uVar12,&local_218,&local_270);
  uVar12 = Scaleform::GFx::ASString::operator+(uVar12,&local_220,&local_268);
  uVar11 = Scaleform::GFx::ASString::operator+(uVar12,&local_228,uVar11);
  uVar11 = Scaleform::GFx::ASString::operator+(uVar11,&local_230,&local_260);
  uVar11 = Scaleform::GFx::ASString::operator+(uVar11,&local_238,&local_258);
  uVar10 = Scaleform::GFx::ASString::operator+(uVar11,&local_240,uVar10);
  uVar10 = Scaleform::GFx::ASString::operator+(uVar10,&local_248,&local_250);
  FUN_143360170(local_res10,uVar10);
  piVar1 = (int *)(local_248 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_240 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_238 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_230 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_228 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_220 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_218 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_210 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_208 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_200 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_1f8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_1f0 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_1e8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_1e0 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_1d8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_1d0 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_1c8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_1c0 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_1b8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_1b0 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_1a8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_1a0 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_198 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_190 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (9 < ((byte)local_150[0] & 0x1f)) {
    if ((local_150[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_150);
    }
    else {
      FUN_143592150();
    }
  }
  piVar1 = (int *)(local_res18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_res20 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_188 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (9 < ((byte)local_130[0] & 0x1f)) {
    if ((local_130[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_130);
    }
    else {
      FUN_143592150();
    }
  }
  piVar1 = (int *)(local_2b0 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_2a8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_180 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (9 < ((byte)local_110[0] & 0x1f)) {
    if ((local_110[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_110);
    }
    else {
      FUN_143592150();
    }
  }
  piVar1 = (int *)(local_2a0 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_298 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_178 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (9 < ((byte)local_f0[0] & 0x1f)) {
    if ((local_f0[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_f0);
    }
    else {
      FUN_143592150();
    }
  }
  piVar1 = (int *)(local_290 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_288 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_170 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (9 < ((byte)local_d0[0] & 0x1f)) {
    if ((local_d0[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_d0);
    }
    else {
      FUN_143592150();
    }
  }
  piVar1 = (int *)(local_280 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_278 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_168 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (9 < ((byte)local_b0[0] & 0x1f)) {
    if ((local_b0[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_b0);
    }
    else {
      FUN_143592150();
    }
  }
  piVar1 = (int *)(local_270 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_268 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_160 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (9 < ((byte)local_90[0] & 0x1f)) {
    if ((local_90[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_90);
    }
    else {
      FUN_143592150();
    }
  }
  piVar1 = (int *)(local_260 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_258 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_158 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (9 < ((byte)local_70[0] & 0x1f)) {
    if ((local_70[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_70);
    }
    else {
      FUN_143592150();
    }
  }
  piVar1 = (int *)(local_250 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143540f10 FUN_143540f10 body=33 status=ok
// SIG undefined FUN_143540f10(void)

undefined8 * FUN_143540f10(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b33ec0;
  return param_1;
}



// FUNCTION 143540f40 FUN_143540f40 body=210 status=ok
// SIG undefined FUN_143540f40(void)

void FUN_143540f40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar1,param_3);
    *puVar1 = &PTR_FUN_145b33e00;
    puVar1[0xe] = 0x3ff0000000000000;
    puVar1[0xc] = 0x3ff0000000000000;
    puVar1[10] = 0x3ff0000000000000;
    puVar1[8] = 0x3ff0000000000000;
    puVar1[0xf] = 0;
    puVar1[0xd] = 0;
    puVar1[0xb] = 0;
    puVar1[9] = 0;
  }
  local_20 = 0;
  local_28[0] = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143541020 FUN_143541020 body=33 status=ok
// SIG undefined FUN_143541020(void)

undefined8 * FUN_143541020(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143541050 FUN_143541050 body=214 status=ok
// SIG undefined FUN_143541050(void)

undefined8 * FUN_143541050(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b323f8);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b323f8);
    *puVar2 = &PTR_FUN_145b33ec0;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143541130 GetCxformFromColorTransform body=159 status=ok
// SIG undefined GetCxformFromColorTransform(void)

float * Scaleform::GFx::AS3::ClassTraits::fl_geom::ColorTransform::GetCxformFromColorTransform
                  (float *param_1,longlong param_2)

{
  FUN_1432bfaf0();
  if (param_2 != 0) {
    *param_1 = (float)*(double *)(param_2 + 0x70);
    param_1[1] = (float)*(double *)(param_2 + 0x60);
    param_1[2] = (float)*(double *)(param_2 + 0x50);
    param_1[3] = (float)*(double *)(param_2 + 0x40);
    param_1[4] = (float)*(double *)(param_2 + 0x78);
    param_1[5] = (float)*(double *)(param_2 + 0x68);
    param_1[6] = (float)*(double *)(param_2 + 0x58);
    param_1[7] = (float)*(double *)(param_2 + 0x48);
    Render::Cxform::Normalize(param_1);
  }
  return param_1;
}



// FUNCTION 1435411e0 FUN_1435411e0 body=51 status=ok
// SIG undefined FUN_1435411e0(void)

undefined8 * FUN_1435411e0(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b33fb8;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 143541220 FUN_143541220 body=148 status=ok
// SIG undefined FUN_143541220(void)

void FUN_143541220(longlong param_1,uint param_2,longlong param_3)

{
  char *pcVar1;
  undefined1 local_res10 [8];
  
  if ((((param_2 != 0) &&
       (pcVar1 = (char *)FUN_143590af0(param_3,local_res10,param_1 + 0x40), *pcVar1 != '\0')) &&
      (1 < param_2)) &&
     (((pcVar1 = (char *)FUN_143590af0(param_3 + 0x20,local_res10,param_1 + 0x48), *pcVar1 != '\0'
       && (2 < param_2)) &&
      ((pcVar1 = (char *)FUN_143590af0(param_3 + 0x40,local_res10,param_1 + 0x50), *pcVar1 != '\0'
       && (3 < param_2)))))) {
    FUN_143590af0(param_3 + 0x60,local_res10,param_1 + 0x58);
  }
  return;
}



// FUNCTION 1435412c0 FUN_1435412c0 body=59 status=ok
// SIG undefined FUN_1435412c0(void)

void FUN_1435412c0(longlong param_1,double *param_2)

{
  double dVar1;
  
  dVar1 = _guard_xfg_dispatch_icall_nop
                    (*(double *)(param_1 + 0x40) * *(double *)(param_1 + 0x40) +
                     *(double *)(param_1 + 0x48) * *(double *)(param_1 + 0x48) +
                     *(double *)(param_1 + 0x50) * *(double *)(param_1 + 0x50));
  *param_2 = dVar1;
  return;
}



// FUNCTION 1435413c0 FUN_1435413c0 body=291 status=ok
// SIG undefined FUN_1435413c0(void)

void FUN_1435413c0(longlong param_1,ulonglong *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_18,0x3f1,uVar2);
    FUN_1435cbe70(uVar2,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puVar5 = (undefined8 *)FUN_1435b5bc0(uVar2);
    if (puVar5 != (undefined8 *)0x0) {
      UInterpTrackInst::UInterpTrackInst(puVar5,uVar2);
      *puVar5 = &PTR_FUN_145b33fb8;
      puVar5[8] = 0;
      puVar5[9] = 0;
      puVar5[10] = 0;
      puVar5[0xb] = 0;
    }
    puVar5[8] = *(double *)(param_3 + 0x40) + *(double *)(param_1 + 0x40);
    puVar5[9] = *(double *)(param_3 + 0x48) + *(double *)(param_1 + 0x48);
    puVar5[10] = *(double *)(param_3 + 0x50) + *(double *)(param_1 + 0x50);
    puVar3 = (undefined8 *)*param_2;
    if (puVar5 != puVar3) {
      if (puVar3 != (undefined8 *)0x0) {
        if (((ulonglong)puVar3 & 1) == 0) {
          if ((*(uint *)(puVar3 + 1) & 0x3fffff) != 0) {
            *(uint *)(puVar3 + 1) = *(uint *)(puVar3 + 1) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *param_2 = (longlong)puVar3 - 1;
        }
      }
      *param_2 = (ulonglong)puVar5;
    }
  }
  return;
}



// FUNCTION 1435414f0 FUN_1435414f0 body=224 status=ok
// SIG undefined FUN_1435414f0(void)

void FUN_1435414f0(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  uint local_28 [4];
  undefined8 local_18;
  
  local_78 = *(undefined8 *)(param_1 + 0x40);
  lVar3 = 4;
  local_88[0] = 4;
  local_80 = 0;
  local_58 = *(undefined8 *)(param_1 + 0x48);
  local_68 = 4;
  local_60 = 0;
  local_38 = *(undefined8 *)(param_1 + 0x50);
  local_48 = 4;
  local_18 = *(undefined8 *)(param_1 + 0x58);
  local_40 = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[0] = 4;
  FUN_1435ccdc0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_res8,param_2,
                "flash.geom.Vector3D",4,local_88);
  puVar2 = &stack0xfffffffffffffff8;
  do {
    puVar1 = (uint *)(puVar2 + -0x20);
    puVar2 = puVar2 + -0x20;
    lVar3 = lVar3 + -1;
    if (9 < ((byte)*puVar1 & 0x1f)) {
      if ((*puVar1 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar2);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar3 != 0);
  return;
}



// FUNCTION 1435415e0 FUN_1435415e0 body=349 status=ok
// SIG undefined FUN_1435415e0(void)

void FUN_1435415e0(longlong param_1,ulonglong *param_2,longlong param_3)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined1 local_28 [8];
  longlong local_20;
  
  if (param_3 == 0) {
    uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar10 = FUN_1435c8e40(local_28,0x3f1,uVar8);
    FUN_1435cbe70(uVar8,uVar10);
    piVar1 = (int *)(local_20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    puVar11 = (undefined8 *)FUN_1435b5bc0(uVar8);
    if (puVar11 != (undefined8 *)0x0) {
      UInterpTrackInst::UInterpTrackInst(puVar11,uVar8);
      *puVar11 = &PTR_FUN_145b33fb8;
      puVar11[8] = 0;
      puVar11[9] = 0;
      puVar11[10] = 0;
      puVar11[0xb] = 0;
    }
    dVar2 = *(double *)(param_3 + 0x48);
    dVar3 = *(double *)(param_1 + 0x48);
    dVar4 = *(double *)(param_1 + 0x40);
    dVar5 = *(double *)(param_1 + 0x50);
    dVar6 = *(double *)(param_3 + 0x50);
    dVar7 = *(double *)(param_3 + 0x40);
    puVar11[9] = *(double *)(param_3 + 0x40) * *(double *)(param_1 + 0x50) -
                 *(double *)(param_1 + 0x40) * *(double *)(param_3 + 0x50);
    puVar11[8] = dVar3 * dVar6 - dVar2 * dVar5;
    puVar11[10] = dVar2 * dVar4 - dVar3 * dVar7;
    puVar9 = (undefined8 *)*param_2;
    if (puVar11 != puVar9) {
      if (puVar9 != (undefined8 *)0x0) {
        if (((ulonglong)puVar9 & 1) == 0) {
          if ((*(uint *)(puVar9 + 1) & 0x3fffff) != 0) {
            *(uint *)(puVar9 + 1) = *(uint *)(puVar9 + 1) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *param_2 = (longlong)puVar9 - 1;
        }
      }
      *param_2 = (ulonglong)puVar11;
    }
  }
  return;
}



// FUNCTION 143541750 FUN_143541750 body=133 status=ok
// SIG undefined FUN_143541750(void)

void FUN_143541750(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x3f1,uVar2);
    FUN_1435cbe70(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    *(double *)(param_1 + 0x40) = *(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40);
    *(double *)(param_1 + 0x48) = *(double *)(param_1 + 0x48) - *(double *)(param_3 + 0x48);
    *(double *)(param_1 + 0x50) = *(double *)(param_1 + 0x50) - *(double *)(param_3 + 0x50);
  }
  return;
}



// FUNCTION 1435417e0 FUN_1435417e0 body=130 status=ok
// SIG undefined FUN_1435417e0(void)

void FUN_1435417e0(longlong param_1,double *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x3f1,uVar2);
    FUN_1435cbe70(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    *param_2 = *(double *)(param_3 + 0x48) * *(double *)(param_1 + 0x48) +
               *(double *)(param_3 + 0x40) * *(double *)(param_1 + 0x40) +
               *(double *)(param_3 + 0x50) * *(double *)(param_1 + 0x50);
  }
  return;
}



// FUNCTION 143541870 FUN_143541870 body=176 status=ok
// SIG undefined FUN_143541870(void)

void FUN_143541870(longlong param_1,char *param_2,longlong param_3,char param_4)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char cVar5;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_18,0x3f1,uVar2);
    FUN_1435cbe70(uVar2,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    cVar5 = '\x01';
    if (((*(double *)(param_1 + 0x40) == *(double *)(param_3 + 0x40)) &&
        (*(double *)(param_1 + 0x48) == *(double *)(param_3 + 0x48))) &&
       (*(double *)(param_1 + 0x50) == *(double *)(param_3 + 0x50))) {
      cVar3 = '\x01';
    }
    else {
      cVar3 = '\0';
    }
    *param_2 = cVar3;
    if (param_4 != '\0') {
      if ((cVar3 == '\0') || (*(double *)(param_1 + 0x58) != *(double *)(param_3 + 0x58))) {
        cVar5 = '\0';
      }
      *param_2 = cVar5;
    }
  }
  return;
}



// FUNCTION 143541930 FUN_143541930 body=133 status=ok
// SIG undefined FUN_143541930(void)

void FUN_143541930(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x3f1,uVar2);
    FUN_1435cbe70(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    *(double *)(param_1 + 0x40) = *(double *)(param_3 + 0x40) + *(double *)(param_1 + 0x40);
    *(double *)(param_1 + 0x48) = *(double *)(param_3 + 0x48) + *(double *)(param_1 + 0x48);
    *(double *)(param_1 + 0x50) = *(double *)(param_3 + 0x50) + *(double *)(param_1 + 0x50);
  }
  return;
}



// FUNCTION 1435419c0 FUN_1435419c0 body=238 status=ok
// SIG undefined FUN_1435419c0(void)

void FUN_1435419c0(longlong param_1,char *param_2,longlong param_3,double param_4,char param_5)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char cVar5;
  double dVar6;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_18,0x3f1,uVar2);
    FUN_1435cbe70(uVar2,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  dVar6 = *(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40);
  if (dVar6 < 0.0) {
    dVar6 = -dVar6;
  }
  cVar5 = '\x01';
  if (param_4 <= dVar6) {
LAB_143541a7b:
    cVar3 = '\0';
  }
  else {
    dVar6 = *(double *)(param_1 + 0x48) - *(double *)(param_3 + 0x48);
    if (dVar6 < 0.0) {
      dVar6 = -dVar6;
    }
    if (param_4 <= dVar6) goto LAB_143541a7b;
    dVar6 = *(double *)(param_1 + 0x50) - *(double *)(param_3 + 0x50);
    if (dVar6 < 0.0) {
      dVar6 = -dVar6;
    }
    if (param_4 <= dVar6) goto LAB_143541a7b;
    cVar3 = '\x01';
  }
  *param_2 = cVar3;
  if (param_5 == '\0') {
    return;
  }
  if (cVar3 != '\0') {
    dVar6 = *(double *)(param_1 + 0x58) - *(double *)(param_3 + 0x58);
    if (dVar6 < 0.0) {
      dVar6 = -dVar6;
    }
    if (dVar6 < param_4) goto LAB_143541aa7;
  }
  cVar5 = '\0';
LAB_143541aa7:
  *param_2 = cVar5;
  return;
}



// FUNCTION 143541af0 FUN_143541af0 body=113 status=ok
// SIG undefined FUN_143541af0(void)

void FUN_143541af0(longlong param_1,double *param_2)

{
  double dVar1;
  
  dVar1 = _guard_xfg_dispatch_icall_nop
                    (*(double *)(param_1 + 0x40) * *(double *)(param_1 + 0x40) +
                     *(double *)(param_1 + 0x48) * *(double *)(param_1 + 0x48) +
                     *(double *)(param_1 + 0x50) * *(double *)(param_1 + 0x50));
  *param_2 = dVar1;
  *(double *)(param_1 + 0x40) = *(double *)(param_1 + 0x40) / dVar1;
  *(double *)(param_1 + 0x48) = *(double *)(param_1 + 0x48) / *param_2;
  *(double *)(param_1 + 0x50) = *(double *)(param_1 + 0x50) / *param_2;
  return;
}



// FUNCTION 143541bd0 FUN_143541bd0 body=291 status=ok
// SIG undefined FUN_143541bd0(void)

void FUN_143541bd0(longlong param_1,ulonglong *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_18,0x3f1,uVar2);
    FUN_1435cbe70(uVar2,uVar4);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puVar5 = (undefined8 *)FUN_1435b5bc0(uVar2);
    if (puVar5 != (undefined8 *)0x0) {
      UInterpTrackInst::UInterpTrackInst(puVar5,uVar2);
      *puVar5 = &PTR_FUN_145b33fb8;
      puVar5[8] = 0;
      puVar5[9] = 0;
      puVar5[10] = 0;
      puVar5[0xb] = 0;
    }
    puVar5[8] = *(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40);
    puVar5[9] = *(double *)(param_1 + 0x48) - *(double *)(param_3 + 0x48);
    puVar5[10] = *(double *)(param_1 + 0x50) - *(double *)(param_3 + 0x50);
    puVar3 = (undefined8 *)*param_2;
    if (puVar5 != puVar3) {
      if (puVar3 != (undefined8 *)0x0) {
        if (((ulonglong)puVar3 & 1) == 0) {
          if ((*(uint *)(puVar3 + 1) & 0x3fffff) != 0) {
            *(uint *)(puVar3 + 1) = *(uint *)(puVar3 + 1) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *param_2 = (longlong)puVar3 - 1;
        }
      }
      *param_2 = (ulonglong)puVar5;
    }
  }
  return;
}



// FUNCTION 143541d00 FUN_143541d00 body=961 status=ok
// SIG undefined FUN_143541d00(void)

void FUN_143541d00(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  ulonglong local_res8 [2];
  ulonglong local_res18;
  ulonglong local_res20;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  uint local_88 [2];
  undefined8 local_80;
  undefined8 local_78;
  uint local_68 [2];
  undefined8 local_60;
  undefined8 local_58;
  uint local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = *(undefined8 *)(param_1 + 0x50);
  local_58 = *(undefined8 *)(param_1 + 0x48);
  uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_78 = *(undefined8 *)(param_1 + 0x40);
  local_40 = 0;
  local_60 = 0;
  local_80 = 0;
  local_48[0] = 4;
  local_68[0] = 4;
  local_88[0] = 4;
  plVar3 = (longlong *)FUN_1435cad50(uVar6,&local_a0,local_88);
  uVar4 = FUN_1432c3140(&local_d0,*(undefined8 *)*plVar3,*(undefined4 *)((undefined8 *)*plVar3 + 4))
  ;
  uVar5 = FUN_1432c2fb0(&local_d8,&DAT_145b1366c);
  FString::TrimQuotes(uVar5,&local_res20,uVar4);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_d8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_d8 & 0xfffffffffffffffc);
  }
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_d0 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_d0 & 0xfffffffffffffffc);
  }
  plVar3 = (longlong *)FUN_1435cad50(uVar6,&local_98,local_68);
  uVar4 = FUN_1432c50d0(&local_res20,&local_a8,&DAT_145b13670);
  uVar5 = FUN_1432c3140(&local_c8,*(undefined8 *)*plVar3,*(undefined4 *)((undefined8 *)*plVar3 + 4))
  ;
  FString::TrimQuotes(uVar4,&local_res18,uVar5);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_c8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_c8 & 0xfffffffffffffffc);
  }
  plVar3 = (longlong *)FUN_1435cad50(uVar6,&local_90,local_48);
  uVar6 = FUN_1432c50d0(&local_res18,&local_b0,&DAT_145b341dc);
  uVar4 = FUN_1432c3140(&local_c0,*(undefined8 *)*plVar3,*(undefined4 *)((undefined8 *)*plVar3 + 4))
  ;
  FString::TrimQuotes(uVar6,local_res8,uVar4);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_c0 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_c0 & 0xfffffffffffffffc);
  }
  puVar7 = (ulonglong *)FUN_1432c50d0(local_res8,&local_b8);
  lVar8 = -1;
  do {
    lVar8 = lVar8 + 1;
  } while (*(char *)((*puVar7 & 0xfffffffffffffffc) + 0xc + lVar8) != '\0');
  FUN_143360130(param_2);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_b8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_b8 & 0xfffffffffffffffc);
  }
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8[0] & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8[0] & 0xfffffffffffffffc);
  }
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_b0 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_b0 & 0xfffffffffffffffc);
  }
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res18 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res18 & 0xfffffffffffffffc);
  }
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_a8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_a8 & 0xfffffffffffffffc);
  }
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res20 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res20 & 0xfffffffffffffffc);
  }
  piVar1 = (int *)(local_a0 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (9 < ((byte)local_88[0] & 0x1f)) {
    if ((local_88[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_88);
    }
    else {
      FUN_143592150();
    }
  }
  piVar1 = (int *)(local_98 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (9 < ((byte)local_68[0] & 0x1f)) {
    if ((local_68[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_68);
    }
    else {
      FUN_143592150();
    }
  }
  piVar1 = (int *)(local_90 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (9 < ((byte)local_48[0] & 0x1f)) {
    if ((local_48[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_48);
  }
  return;
}



// FUNCTION 1435420d0 FUN_1435420d0 body=33 status=ok
// SIG undefined FUN_1435420d0(void)

undefined8 * FUN_1435420d0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b34078;
  return param_1;
}



// FUNCTION 143542100 FUN_143542100 body=184 status=ok
// SIG undefined FUN_143542100(void)

void FUN_143542100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar1,param_3);
    *puVar1 = &PTR_FUN_145b33fb8;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
  }
  local_20 = 0;
  local_28[0] = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 1435421c0 FUN_1435421c0 body=33 status=ok
// SIG undefined FUN_1435421c0(void)

undefined8 * FUN_1435421c0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1435421f0 FUN_1435421f0 body=214 status=ok
// SIG undefined FUN_1435421f0(void)

undefined8 * FUN_1435421f0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b31d00);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b31d00);
    *puVar2 = &PTR_FUN_145b34078;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x68);
  if (lVar3 != 0) {
    FUN_1435422d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1435422d0 FUN_1435422d0 body=452 status=ok
// SIG undefined FUN_1435422d0(void)

undefined8 * FUN_1435422d0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  FUN_1435b37d0();
  puVar4 = (undefined8 *)0x0;
  *param_1 = &PTR_ForEachChild_GC_145b340f0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  uVar1 = *(undefined8 *)(param_1[5] + 0xd8);
  puVar2 = (undefined8 *)FUN_1435b5bc0(uVar1);
  puVar3 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar2,uVar1);
    *puVar2 = &PTR_FUN_145b33fb8;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar3 = puVar2;
  }
  puVar2 = (undefined8 *)param_1[10];
  if (puVar3 != puVar2) {
    if (puVar2 != (undefined8 *)0x0) {
      if (((ulonglong)puVar2 & 1) == 0) {
        if ((*(uint *)(puVar2 + 1) & 0x3fffff) != 0) {
          *(uint *)(puVar2 + 1) = *(uint *)(puVar2 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        param_1[10] = (longlong)puVar2 - 1;
      }
    }
    param_1[10] = puVar3;
  }
  puVar2 = (undefined8 *)FUN_1435b5bc0(uVar1);
  puVar3 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar2,uVar1);
    *puVar2 = &PTR_FUN_145b33fb8;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar3 = puVar2;
  }
  puVar2 = (undefined8 *)param_1[0xb];
  if (puVar3 != puVar2) {
    if (puVar2 != (undefined8 *)0x0) {
      if (((ulonglong)puVar2 & 1) == 0) {
        if ((*(uint *)(puVar2 + 1) & 0x3fffff) != 0) {
          *(uint *)(puVar2 + 1) = *(uint *)(puVar2 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        param_1[0xb] = (longlong)puVar2 - 1;
      }
    }
    param_1[0xb] = puVar3;
  }
  puVar3 = (undefined8 *)FUN_1435b5bc0(uVar1);
  if (puVar3 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar3,uVar1);
    *puVar3 = &PTR_FUN_145b33fb8;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar4 = puVar3;
  }
  puVar3 = (undefined8 *)param_1[0xc];
  if (puVar4 != puVar3) {
    if (puVar3 != (undefined8 *)0x0) {
      if (((ulonglong)puVar3 & 1) == 0) {
        if ((*(uint *)(puVar3 + 1) & 0x3fffff) != 0) {
          *(uint *)(puVar3 + 1) = *(uint *)(puVar3 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        param_1[0xc] = (longlong)puVar3 - 1;
      }
    }
    param_1[0xc] = puVar4;
  }
  *(undefined8 *)(param_1[10] + 0x40) = 0x3ff0000000000000;
  *(undefined8 *)(param_1[0xb] + 0x48) = 0x3ff0000000000000;
  *(undefined8 *)(param_1[0xc] + 0x50) = 0x3ff0000000000000;
  return param_1;
}



// FUNCTION 1435424a0 FUN_1435424a0 body=227 status=ok
// SIG undefined FUN_1435424a0(void)

void FUN_1435424a0(undefined8 param_1,double *param_2,longlong param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar8 = *(double *)(param_3 + 0x40);
  dVar1 = *(double *)(param_3 + 0x48);
  dVar2 = *(double *)(param_3 + 0x50);
  dVar3 = *(double *)(param_4 + 0x48);
  dVar4 = *(double *)(param_4 + 0x50);
  dVar5 = *(double *)(param_4 + 0x40);
  dVar6 = _guard_xfg_dispatch_icall_nop(dVar8 * dVar8 + dVar1 * dVar1 + dVar2 * dVar2);
  dVar7 = _guard_xfg_dispatch_icall_nop(dVar5 * dVar5 + dVar3 * dVar3 + dVar4 * dVar4);
  dVar8 = _guard_xfg_dispatch_icall_nop
                    ((dVar5 * dVar8 + dVar3 * dVar1 + dVar4 * dVar2) / (dVar6 * dVar7));
  *param_2 = dVar8;
  return;
}



// FUNCTION 143542590 FUN_143542590 body=80 status=ok
// SIG undefined FUN_143542590(void)

void FUN_143542590(undefined8 param_1,double *param_2,longlong param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = *(double *)(param_3 + 0x40) - *(double *)(param_4 + 0x40);
  dVar3 = *(double *)(param_3 + 0x48) - *(double *)(param_4 + 0x48);
  dVar2 = *(double *)(param_3 + 0x50) - *(double *)(param_4 + 0x50);
  dVar1 = _guard_xfg_dispatch_icall_nop(dVar1 * dVar1 + dVar3 * dVar3 + dVar2 * dVar2);
  *param_2 = dVar1;
  return;
}



// FUNCTION 143542620 FUN_143542620 body=102 status=ok
// SIG undefined FUN_143542620(void)

undefined8 * FUN_143542620(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b341e8;
  _guard_xfg_dispatch_icall_nop(param_1 + 8,0,0x80);
  param_1[8] = 0x3ff0000000000000;
  param_1[0xd] = 0x3ff0000000000000;
  param_1[0x12] = 0x3ff0000000000000;
  param_1[0x17] = 0x3ff0000000000000;
  param_1[0x18] = 0;
  return param_1;
}



// FUNCTION 143542690 FUN_143542690 body=209 status=ok
// SIG undefined FUN_143542690(void)

undefined8 * FUN_143542690(longlong param_1,undefined8 *param_2)

{
  double dVar1;
  double dVar2;
  float *pfVar3;
  double *pdVar4;
  longlong lVar5;
  
  lVar5 = 2;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)param_2 = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_2 + 5) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0x3f800000;
  pfVar3 = (float *)(param_2 + 1);
  pdVar4 = (double *)(param_1 + 0x48);
  do {
    dVar1 = *pdVar4;
    pfVar3[-2] = (float)pdVar4[-1];
    dVar2 = pdVar4[1];
    pfVar3[-1] = (float)dVar1;
    dVar1 = pdVar4[2];
    *pfVar3 = (float)dVar2;
    dVar2 = pdVar4[3];
    pfVar3[1] = (float)dVar1;
    dVar1 = pdVar4[4];
    pfVar3[2] = (float)dVar2;
    dVar2 = pdVar4[5];
    pfVar3[3] = (float)dVar1;
    dVar1 = pdVar4[6];
    pfVar3[4] = (float)dVar2;
    pfVar3[5] = (float)dVar1;
    lVar5 = lVar5 + -1;
    pfVar3 = pfVar3 + 8;
    pdVar4 = pdVar4 + 8;
  } while (lVar5 != 0);
  return param_2;
}



// FUNCTION 143542770 FUN_143542770 body=693 status=ok
// SIG undefined FUN_143542770(void)

/* WARNING: Removing unreachable block (ram,0x0001435428ef) */

void FUN_143542770(longlong param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong local_res20;
  float local_88;
  float fStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  uVar9 = 0;
  if (param_2 == 0x10) {
    lVar10 = 2;
    puVar5 = (undefined8 *)(param_1 + 0x48);
    puVar7 = (undefined8 *)(param_3 + 0xc);
    do {
      puVar5[-1] = puVar7[-4];
      *puVar5 = *puVar7;
      puVar5[1] = puVar7[4];
      puVar5[2] = puVar7[8];
      puVar5[3] = puVar7[0xc];
      puVar5[4] = puVar7[0x10];
      puVar5[5] = puVar7[0x14];
      puVar5[6] = puVar7[0x18];
      lVar10 = lVar10 + -1;
      puVar5 = puVar5 + 8;
      puVar7 = puVar7 + 0x20;
    } while (lVar10 != 0);
    return;
  }
  if (param_2 != 1) {
    return;
  }
  uVar8 = uVar9;
  if (((byte)*param_3 & 0x1f) == 0xc) {
    puVar5 = (undefined8 *)
             (**(code **)(**(longlong **)(param_3 + 4) + 0x78))
                       (*(longlong **)(param_3 + 4),&local_res20);
    uVar8 = 1;
    iVar4 = _guard_xfg_dispatch_icall_nop(*(char **)*puVar5,"Vector$double");
    if (iVar4 == 0) {
      bVar3 = false;
      goto LAB_143542869;
    }
  }
  bVar3 = true;
LAB_143542869:
  if (uVar8 != 0) {
    piVar1 = (int *)(local_res20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if (!bVar3) {
    lVar10 = *(longlong *)(param_3 + 4);
    uVar8 = uVar9;
    do {
      uStack_80 = 0;
      local_88 = 0.0;
      bVar6 = 0;
      if ((uint)uVar8 < *(uint *)(lVar10 + 0x60)) {
        bVar6 = 4;
        local_78 = *(undefined8 *)(uVar9 + *(longlong *)(lVar10 + 0x58));
        local_88 = 5.60519e-45;
      }
      *(undefined8 *)(param_1 + 0x40 + uVar9) = local_78;
      if (9 < bVar6) {
        FUN_1435920c0(&local_88);
      }
      uVar8 = (ulonglong)((uint)uVar8 + 1);
      uVar9 = uVar9 + 8;
    } while ((longlong)uVar9 < 0x80);
    Scaleform::Render::Matrix4x4<double>::Transpose((Matrix4x4<double> *)(param_1 + 0x40));
    plVar2 = *(longlong **)(param_1 + 0xc0);
    if (plVar2 != (longlong *)0x0) {
      local_88 = (float)*(double *)(param_1 + 0x40);
      fStack_84 = (float)*(double *)(param_1 + 0x48);
      uStack_80 = CONCAT44((float)*(double *)(param_1 + 0x58),(float)*(double *)(param_1 + 0x50));
      local_48 = (float)*(double *)(param_1 + 0x60);
      fStack_44 = (float)*(double *)(param_1 + 0x68);
      fStack_40 = (float)*(double *)(param_1 + 0x70);
      local_78 = CONCAT44(fStack_44,local_48);
      fStack_3c = (float)*(double *)(param_1 + 0x78);
      local_68 = (float)*(double *)(param_1 + 0x80);
      _fStack_70 = CONCAT44(fStack_3c,fStack_40);
      fStack_64 = (float)*(double *)(param_1 + 0x88);
      fStack_60 = (float)*(double *)(param_1 + 0x90);
      fStack_5c = (float)*(double *)(param_1 + 0x98);
      local_58 = CONCAT44(fStack_84,local_88);
      uStack_50 = uStack_80;
      local_38 = local_68;
      fStack_34 = fStack_64;
      fStack_30 = fStack_60;
      fStack_2c = fStack_5c;
      (**(code **)(*plVar2 + 0x28))(plVar2,&local_58);
    }
  }
  return;
}



// FUNCTION 143542a30 determinantGet body=28 status=ok
// SIG undefined determinantGet(void)

void Scaleform::GFx::AS3::Instances::fl_geom::Matrix3D::determinantGet
               (longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1435540f0(param_1 + 0x40);
  *param_2 = uVar1;
  return;
}



// FUNCTION 143542a60 FUN_143542a60 body=292 status=ok
// SIG undefined FUN_143542a60(void)

void FUN_143542a60(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  char *local_98;
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  double local_78;
  undefined4 local_68;
  undefined8 local_60;
  double local_58;
  undefined4 local_48;
  undefined8 local_40;
  double local_38;
  uint local_28 [8];
  
  lVar5 = 4;
  local_88[0] = 4;
  local_80 = 0;
  local_68 = 4;
  local_78 = *(double *)(param_1 + 0x58) * 0.05;
  local_90 = 0x13;
  local_60 = 0;
  local_58 = *(double *)(param_1 + 0x78) * 0.05;
  local_40 = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_38 = *(double *)(param_1 + 0x98) * 0.05;
  local_48 = 4;
  local_28[0] = 4;
  local_28[4] = 0;
  local_28[5] = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_98 = "flash.geom.Vector3D";
  uVar3 = FUN_1435cc580(lVar2,&local_98,*(undefined8 *)(lVar2 + 0x1c8));
  FUN_1435e8720(lVar2,param_2,uVar3,4,local_88);
  puVar4 = &stack0xfffffffffffffff8;
  do {
    puVar1 = (uint *)(puVar4 + -0x20);
    puVar4 = puVar4 + -0x20;
    lVar5 = lVar5 + -1;
    if (9 < ((byte)*puVar1 & 0x1f)) {
      if ((*puVar1 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar4);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar5 != 0);
  return;
}



// FUNCTION 143542b90 FUN_143542b90 body=308 status=ok
// SIG undefined FUN_143542b90(void)

void FUN_143542b90(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  *(double *)(param_1 + 0x58) = *(double *)(param_3 + 0x40) * 20.0;
  *(double *)(param_1 + 0x78) = *(double *)(param_3 + 0x48) * 20.0;
  plVar1 = *(longlong **)(param_1 + 0xc0);
  *(double *)(param_1 + 0x98) = *(double *)(param_3 + 0x50) * 20.0;
  if (plVar1 != (longlong *)0x0) {
    local_28 = (float)*(double *)(param_1 + 0x60);
    fStack_24 = (float)*(double *)(param_1 + 0x68);
    fStack_20 = (float)*(double *)(param_1 + 0x70);
    fStack_1c = (float)*(double *)(param_1 + 0x78);
    local_18 = (float)*(double *)(param_1 + 0x80);
    fStack_14 = (float)*(double *)(param_1 + 0x88);
    fStack_10 = (float)*(double *)(param_1 + 0x90);
    fStack_c = (float)*(double *)(param_1 + 0x98);
    local_38 = CONCAT44((float)*(double *)(param_1 + 0x48),(float)*(double *)(param_1 + 0x40));
    uStack_30 = CONCAT44((float)*(double *)(param_1 + 0x58),(float)*(double *)(param_1 + 0x50));
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_38);
  }
  return;
}



// FUNCTION 143542cd0 FUN_143542cd0 body=897 status=ok
// SIG undefined FUN_143542cd0(void)

void FUN_143542cd0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  longlong *local_res10;
  undefined1 local_res18 [8];
  uint local_138 [2];
  undefined8 local_130;
  undefined8 local_128;
  uint local_118 [2];
  undefined8 local_110;
  undefined8 local_108;
  uint local_f8 [2];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_d8 [8];
  longlong local_d0;
  undefined1 local_c8 [8];
  longlong local_c0;
  double local_b8 [16];
  
  local_b8[0] = *(double *)(param_1 + 0x40);
  local_b8[1] = *(double *)(param_1 + 0x48);
  local_b8[2] = *(double *)(param_1 + 0x50);
  local_b8[6] = *(double *)(param_1 + 0x70);
  local_b8[10] = *(double *)(param_1 + 0x90);
  local_b8[0xe] = *(double *)(param_1 + 0xb0);
  local_b8[0xf] = *(double *)(param_1 + 0xb8);
  local_b8[4] = *(double *)(param_1 + 0x60);
  local_b8[5] = *(double *)(param_1 + 0x68);
  local_b8[8] = *(double *)(param_1 + 0x80);
  local_b8[9] = *(double *)(param_1 + 0x88);
  local_b8[0xc] = *(double *)(param_1 + 0xa0);
  local_b8[0xd] = *(double *)(param_1 + 0xa8);
  local_b8[3] = *(double *)(param_1 + 0x58) * 0.05;
  local_b8[7] = *(double *)(param_1 + 0x78) * 0.05;
  local_b8[0xb] = *(double *)(param_1 + 0x98) * 0.05;
  local_res10 = param_2;
  Scaleform::Render::Matrix4x4<double>::Transpose((Matrix4x4<double> *)local_b8);
  local_e8 = 0;
  local_f8[0] = 4;
  local_f0 = 0;
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar4 = FUN_1435cb280(uVar2);
  FUN_1435e8720(uVar2,param_2,uVar4,1,local_f8);
  uVar8 = 0;
  uVar7 = uVar8;
  do {
    lVar3 = *param_2;
    local_108 = *(undefined8 *)((longlong)local_b8 + uVar8);
    local_118[0] = 4;
    local_110 = 0;
    uVar2 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x28) + 0x98) + 0x228);
    uVar9 = (uint)uVar7;
    if ((*(char *)(lVar3 + 0x48) != '\0') && (*(uint *)(lVar3 + 0x60) <= uVar9)) {
      uVar2 = *(undefined8 *)(lVar3 + 0x50);
      uVar4 = FUN_1435c8e40(local_d8,0x465,uVar2);
      FUN_1435cbdf0(uVar2,uVar4);
      local_c0 = local_d0;
LAB_143542fd3:
      piVar1 = (int *)(local_c0 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
LAB_143542fde:
      if (9 < ((byte)local_118[0] & 0x1f)) {
        if ((local_118[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_118);
        }
        else {
          FUN_143592150();
        }
      }
      break;
    }
    if (*(uint *)(lVar3 + 0x60) < uVar9) {
      uVar2 = *(undefined8 *)(lVar3 + 0x50);
      uVar4 = FUN_1435c8e40(local_c8,0x465,uVar2);
      FUN_1435cbdf0(uVar2,uVar4);
      goto LAB_143542fd3;
    }
    if (uVar9 == *(uint *)(lVar3 + 0x60)) {
      uVar7 = (ulonglong)(uVar9 + 1);
      pcVar5 = (char *)FUN_14361f950(lVar3 + 0x40,local_res8);
      if (*pcVar5 != '\0') {
        uVar6 = *(ulonglong *)(lVar3 + 0x60);
        FUN_1433ab800(lVar3 + 0x58,uVar7);
        param_2 = local_res10;
        if (uVar6 < uVar7) {
          if (3 < (uVar9 + 1) - uVar6) {
            do {
              *(undefined8 *)(*(longlong *)(lVar3 + 0x58) + uVar6 * 8) = 0;
              *(undefined8 *)(*(longlong *)(lVar3 + 0x58) + 8 + uVar6 * 8) = 0;
              *(undefined8 *)(*(longlong *)(lVar3 + 0x58) + 0x10 + uVar6 * 8) = 0;
              *(undefined8 *)(*(longlong *)(lVar3 + 0x58) + 0x18 + uVar6 * 8) = 0;
              uVar6 = uVar6 + 4;
            } while (uVar6 < uVar7 - 3);
          }
          for (; uVar6 < uVar7; uVar6 = uVar6 + 1) {
            *(undefined8 *)(*(longlong *)(lVar3 + 0x58) + uVar6 * 8) = 0;
          }
        }
        goto LAB_143542eb5;
      }
      goto LAB_143542fde;
    }
LAB_143542eb5:
    local_138[0] = 0;
    local_130 = 0;
    pcVar5 = (char *)FUN_14361fbd0(lVar3 + 0x40,local_res18,uVar2,local_118,local_138);
    if (*pcVar5 == '\0') {
      if (9 < ((byte)local_138[0] & 0x1f)) {
        if ((local_138[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_138);
        }
        else {
          FUN_143592150();
        }
      }
      goto LAB_143542fde;
    }
    *(undefined8 *)(uVar8 + *(longlong *)(lVar3 + 0x58)) = local_128;
    if (9 < ((byte)local_138[0] & 0x1f)) {
      if ((local_138[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_138);
      }
      else {
        FUN_143592150();
      }
    }
    if (9 < ((byte)local_118[0] & 0x1f)) {
      if ((local_118[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_118);
      }
      else {
        FUN_143592150();
      }
    }
    uVar7 = (ulonglong)(uVar9 + 1);
    uVar8 = uVar8 + 8;
  } while ((longlong)uVar8 < 0x80);
  if (9 < ((byte)local_f8[0] & 0x1f)) {
    if ((local_f8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_f8);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 143543060 FUN_143543060 body=590 status=ok
// SIG undefined FUN_143543060(void)

/* WARNING: Removing unreachable block (ram,0x00014354312e) */

void FUN_143543060(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 local_88;
  longlong lStack_80;
  float local_78;
  float fStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(&local_88,0x3f1,uVar2);
    FUN_1435cbe70(uVar2,uVar4);
    piVar1 = (int *)(lStack_80 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    uVar6 = 0;
    uVar7 = uVar6;
    do {
      uStack_70 = 0;
      local_78 = 0.0;
      bVar5 = 0;
      if ((uint)uVar7 < *(uint *)(param_3 + 0x60)) {
        bVar5 = 4;
        local_88 = *(undefined8 *)(uVar6 + *(longlong *)(param_3 + 0x58));
        local_78 = 5.60519e-45;
        uStack_60 = lStack_80;
        local_68 = local_88;
      }
      *(undefined8 *)(uVar6 + 0x40 + param_1) = local_68;
      if (9 < bVar5) {
        FUN_1435920c0(&local_78);
      }
      uVar7 = (ulonglong)((uint)uVar7 + 1);
      uVar6 = uVar6 + 8;
    } while ((longlong)uVar6 < 0x80);
    Scaleform::Render::Matrix4x4<double>::Transpose((Matrix4x4<double> *)(param_1 + 0x40));
    plVar3 = *(longlong **)(param_1 + 0xc0);
    *(double *)(param_1 + 0x58) = *(double *)(param_1 + 0x58) * 20.0;
    *(double *)(param_1 + 0x98) = *(double *)(param_1 + 0x98) * 20.0;
    *(double *)(param_1 + 0x78) = *(double *)(param_1 + 0x78) * 20.0;
    if (plVar3 != (longlong *)0x0) {
      local_78 = (float)*(double *)(param_1 + 0x40);
      fStack_74 = (float)*(double *)(param_1 + 0x48);
      uStack_70 = CONCAT44((float)*(double *)(param_1 + 0x58),(float)*(double *)(param_1 + 0x50));
      local_38 = (float)*(double *)(param_1 + 0x60);
      fStack_34 = (float)*(double *)(param_1 + 0x68);
      fStack_30 = (float)*(double *)(param_1 + 0x70);
      local_68 = CONCAT44(fStack_34,local_38);
      fStack_2c = (float)*(double *)(param_1 + 0x78);
      local_58 = (float)*(double *)(param_1 + 0x80);
      uStack_60 = CONCAT44(fStack_2c,fStack_30);
      fStack_54 = (float)*(double *)(param_1 + 0x88);
      fStack_50 = (float)*(double *)(param_1 + 0x90);
      fStack_4c = (float)*(double *)(param_1 + 0x98);
      local_48 = CONCAT44(fStack_74,local_78);
      uStack_40 = uStack_70;
      local_28 = local_58;
      fStack_24 = fStack_54;
      fStack_20 = fStack_50;
      fStack_1c = fStack_4c;
      (**(code **)(*plVar3 + 0x28))(plVar3,&local_48);
    }
  }
  return;
}



// FUNCTION 1435432c0 FUN_1435432c0 body=458 status=ok
// SIG undefined FUN_1435432c0(void)

void FUN_1435432c0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 local_c8 [8];
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_c8,0x3f1,uVar2);
    FUN_1435cbe70(uVar2,uVar4);
    piVar1 = (int *)(local_c0 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    local_88 = *(undefined8 *)(param_1 + 0x40);
    uStack_80 = *(undefined8 *)(param_1 + 0x48);
    local_78 = *(undefined8 *)(param_1 + 0x50);
    uStack_70 = *(undefined8 *)(param_1 + 0x58);
    local_68 = *(undefined8 *)(param_1 + 0x60);
    uStack_60 = *(undefined8 *)(param_1 + 0x68);
    local_58 = *(undefined8 *)(param_1 + 0x70);
    uStack_50 = *(undefined8 *)(param_1 + 0x78);
    local_48 = *(undefined8 *)(param_1 + 0x80);
    uStack_40 = *(undefined8 *)(param_1 + 0x88);
    local_38 = *(undefined8 *)(param_1 + 0x90);
    uStack_30 = *(undefined8 *)(param_1 + 0x98);
    local_28 = *(undefined8 *)(param_1 + 0xa0);
    uStack_20 = *(undefined8 *)(param_1 + 0xa8);
    local_18 = *(undefined8 *)(param_1 + 0xb0);
    uStack_10 = *(undefined8 *)(param_1 + 0xb8);
    Scaleform::Render::Matrix4x4<double>::MultiplyMatrix_NonOpt
              ((Matrix4x4<double> *)(param_1 + 0x40),(Matrix4x4<double> *)(param_3 + 0x40),
               (Matrix4x4<double> *)&local_88);
    plVar3 = *(longlong **)(param_1 + 0xc0);
    if (plVar3 != (longlong *)0x0) {
      local_a8 = (float)*(double *)(param_1 + 0x60);
      fStack_a4 = (float)*(double *)(param_1 + 0x68);
      fStack_a0 = (float)*(double *)(param_1 + 0x70);
      fStack_9c = (float)*(double *)(param_1 + 0x78);
      local_98 = (float)*(double *)(param_1 + 0x80);
      fStack_94 = (float)*(double *)(param_1 + 0x88);
      fStack_90 = (float)*(double *)(param_1 + 0x90);
      fStack_8c = (float)*(double *)(param_1 + 0x98);
      local_b8 = CONCAT44((float)*(double *)(param_1 + 0x48),(float)*(double *)(param_1 + 0x40));
      uStack_b0 = CONCAT44((float)*(double *)(param_1 + 0x58),(float)*(double *)(param_1 + 0x50));
      (**(code **)(*plVar3 + 0x28))(plVar3,&local_b8);
    }
  }
  return;
}



// FUNCTION 143543490 FUN_143543490 body=572 status=ok
// SIG undefined FUN_143543490(void)

void FUN_143543490(longlong param_1,undefined8 param_2,double param_3,longlong param_4,
                  longlong param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  Matrix4x4<double> *pMVar3;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [128];
  
  if (param_4 == 0) {
    local_128 = 0;
    local_138 = 0;
    uStack_130 = 0;
    puVar2 = &local_138;
  }
  else {
    puVar2 = &local_188;
    local_188 = *(undefined8 *)(param_4 + 0x40);
    uStack_180 = *(undefined8 *)(param_4 + 0x48);
    local_178 = *(undefined8 *)(param_4 + 0x50);
  }
  local_168 = *puVar2;
  uStack_160 = puVar2[1];
  local_158 = puVar2[2];
  if (param_5 == 0) {
    local_178 = 0;
    local_188 = 0;
    uStack_180 = 0;
  }
  else {
    local_188 = *(undefined8 *)(param_5 + 0x40);
    uStack_180 = *(undefined8 *)(param_5 + 0x48);
    local_178 = *(undefined8 *)(param_5 + 0x50);
  }
  local_138 = local_188;
  uStack_130 = uStack_180;
  local_128 = local_178;
  pMVar3 = (Matrix4x4<double> *)
           FUN_143556070(local_88,SUB84((param_3 * 3.141592653589793) / 180.0,0),&local_168,
                         &local_138);
  local_108 = *(undefined8 *)(param_1 + 0x40);
  uStack_100 = *(undefined8 *)(param_1 + 0x48);
  local_f8 = *(undefined8 *)(param_1 + 0x50);
  uStack_f0 = *(undefined8 *)(param_1 + 0x58);
  local_e8 = *(undefined8 *)(param_1 + 0x60);
  uStack_e0 = *(undefined8 *)(param_1 + 0x68);
  local_d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_d0 = *(undefined8 *)(param_1 + 0x78);
  local_c8 = *(undefined8 *)(param_1 + 0x80);
  uStack_c0 = *(undefined8 *)(param_1 + 0x88);
  local_b8 = *(undefined8 *)(param_1 + 0x90);
  uStack_b0 = *(undefined8 *)(param_1 + 0x98);
  local_a8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xa8);
  local_98 = *(undefined8 *)(param_1 + 0xb0);
  uStack_90 = *(undefined8 *)(param_1 + 0xb8);
  Scaleform::Render::Matrix4x4<double>::MultiplyMatrix_NonOpt
            ((Matrix4x4<double> *)(param_1 + 0x40),pMVar3,(Matrix4x4<double> *)&local_108);
  plVar1 = *(longlong **)(param_1 + 0xc0);
  if (plVar1 != (longlong *)0x0) {
    local_168 = CONCAT44((float)*(double *)(param_1 + 0x48),(float)*(double *)(param_1 + 0x40));
    uStack_160 = CONCAT44((float)*(double *)(param_1 + 0x58),(float)*(double *)(param_1 + 0x50));
    fStack_150 = (float)*(double *)(param_1 + 0x70);
    local_158 = CONCAT44((float)*(double *)(param_1 + 0x68),(float)*(double *)(param_1 + 0x60));
    fStack_14c = (float)*(double *)(param_1 + 0x78);
    local_148 = (float)*(double *)(param_1 + 0x80);
    fStack_144 = (float)*(double *)(param_1 + 0x88);
    fStack_140 = (float)*(double *)(param_1 + 0x90);
    fStack_13c = (float)*(double *)(param_1 + 0x98);
    local_138 = local_168;
    uStack_130 = uStack_160;
    local_128 = CONCAT44((float)*(double *)(param_1 + 0x68),(float)*(double *)(param_1 + 0x60));
    fStack_120 = fStack_150;
    fStack_11c = fStack_14c;
    local_118 = local_148;
    fStack_114 = fStack_144;
    fStack_110 = fStack_140;
    fStack_10c = fStack_13c;
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_138);
  }
  return;
}



// FUNCTION 1435436e0 FUN_1435436e0 body=469 status=ok
// SIG undefined FUN_1435436e0(void)

void FUN_1435436e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  undefined8 local_158;
  undefined8 uStack_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8 [5];
  undefined8 local_80;
  undefined8 local_58;
  undefined8 local_30;
  
  _guard_xfg_dispatch_icall_nop((Matrix4x4<double> *)local_a8,0,0x80);
  local_118 = *(undefined8 *)(param_1 + 0x50);
  uStack_110 = *(undefined8 *)(param_1 + 0x58);
  local_30 = 0x3ff0000000000000;
  local_58 = param_5;
  local_128 = *(undefined8 *)(param_1 + 0x40);
  uStack_120 = *(undefined8 *)(param_1 + 0x48);
  local_f8 = *(undefined8 *)(param_1 + 0x70);
  uStack_f0 = *(undefined8 *)(param_1 + 0x78);
  local_108 = *(undefined8 *)(param_1 + 0x60);
  uStack_100 = *(undefined8 *)(param_1 + 0x68);
  local_d8 = *(undefined8 *)(param_1 + 0x90);
  uStack_d0 = *(undefined8 *)(param_1 + 0x98);
  local_e8 = *(undefined8 *)(param_1 + 0x80);
  uStack_e0 = *(undefined8 *)(param_1 + 0x88);
  local_b8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xb8);
  local_c8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_c0 = *(undefined8 *)(param_1 + 0xa8);
  local_a8[0] = param_3;
  local_80 = param_4;
  Scaleform::Render::Matrix4x4<double>::MultiplyMatrix_NonOpt
            ((Matrix4x4<double> *)(param_1 + 0x40),(Matrix4x4<double> *)local_a8,
             (Matrix4x4<double> *)&local_128);
  plVar1 = *(longlong **)(param_1 + 0xc0);
  if (plVar1 != (longlong *)0x0) {
    local_148 = (float)*(double *)(param_1 + 0x60);
    fStack_144 = (float)*(double *)(param_1 + 0x68);
    fStack_140 = (float)*(double *)(param_1 + 0x70);
    fStack_13c = (float)*(double *)(param_1 + 0x78);
    local_138 = (float)*(double *)(param_1 + 0x80);
    fStack_134 = (float)*(double *)(param_1 + 0x88);
    fStack_130 = (float)*(double *)(param_1 + 0x90);
    fStack_12c = (float)*(double *)(param_1 + 0x98);
    local_158 = CONCAT44((float)*(double *)(param_1 + 0x48),(float)*(double *)(param_1 + 0x40));
    uStack_150 = CONCAT44((float)*(double *)(param_1 + 0x58),(float)*(double *)(param_1 + 0x50));
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_158);
  }
  return;
}



// FUNCTION 1435438c0 FUN_1435438c0 body=662 status=ok
// SIG undefined FUN_1435438c0(void)

void FUN_1435438c0(longlong param_1,undefined8 param_2,double param_3,double param_4,double param_5)

{
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  double dStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  double dStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  double dStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  double dStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  double dStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  double dStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    _guard_xfg_dispatch_icall_nop(&local_158,0,0x80);
    local_c8 = *(undefined8 *)(param_1 + 0x50);
    dStack_c0 = *(double *)(param_1 + 0x58);
    local_158 = 0x3ff0000000000000;
    uStack_130 = 0x3ff0000000000000;
    local_108 = 0x3ff0000000000000;
    uStack_e0 = 0x3ff0000000000000;
    dStack_100 = param_5;
    local_d8 = *(undefined8 *)(param_1 + 0x40);
    uStack_d0 = *(undefined8 *)(param_1 + 0x48);
    local_a8 = *(undefined8 *)(param_1 + 0x70);
    dStack_a0 = *(double *)(param_1 + 0x78);
    local_b8 = *(undefined8 *)(param_1 + 0x60);
    uStack_b0 = *(undefined8 *)(param_1 + 0x68);
    local_88 = *(undefined8 *)(param_1 + 0x90);
    dStack_80 = *(double *)(param_1 + 0x98);
    local_98 = *(undefined8 *)(param_1 + 0x80);
    uStack_90 = *(undefined8 *)(param_1 + 0x88);
    local_68 = *(undefined8 *)(param_1 + 0xb0);
    uStack_60 = *(undefined8 *)(param_1 + 0xb8);
    local_78 = *(undefined8 *)(param_1 + 0xa0);
    uStack_70 = *(undefined8 *)(param_1 + 0xa8);
    dStack_140 = param_3;
    dStack_120 = param_4;
    Scaleform::Render::Matrix4x4<double>::MultiplyMatrix_NonOpt
              ((Matrix4x4<double> *)(param_1 + 0x40),(Matrix4x4<double> *)&local_158,
               (Matrix4x4<double> *)&local_d8);
  }
  else {
    _guard_xfg_dispatch_icall_nop(&local_d8,0,0x80);
    local_d8 = 0x3ff0000000000000;
    uStack_b0 = 0x3ff0000000000000;
    local_88 = 0x3ff0000000000000;
    uStack_60 = 0x3ff0000000000000;
    dStack_80 = param_5 * 20.0;
    dStack_c0 = param_3 * 20.0;
    dStack_a0 = param_4 * 20.0;
    local_148 = *(undefined8 *)(param_1 + 0x50);
    dStack_140 = *(double *)(param_1 + 0x58);
    local_158 = *(undefined8 *)(param_1 + 0x40);
    uStack_150 = *(undefined8 *)(param_1 + 0x48);
    local_128 = *(undefined8 *)(param_1 + 0x70);
    dStack_120 = *(double *)(param_1 + 0x78);
    local_138 = *(undefined8 *)(param_1 + 0x60);
    uStack_130 = *(undefined8 *)(param_1 + 0x68);
    local_108 = *(undefined8 *)(param_1 + 0x90);
    dStack_100 = *(double *)(param_1 + 0x98);
    local_118 = *(undefined8 *)(param_1 + 0x80);
    uStack_110 = *(undefined8 *)(param_1 + 0x88);
    local_e8 = *(undefined8 *)(param_1 + 0xb0);
    uStack_e0 = *(undefined8 *)(param_1 + 0xb8);
    local_f8 = *(undefined8 *)(param_1 + 0xa0);
    uStack_f0 = *(undefined8 *)(param_1 + 0xa8);
    Scaleform::Render::Matrix4x4<double>::MultiplyMatrix_NonOpt
              ((Matrix4x4<double> *)(param_1 + 0x40),(Matrix4x4<double> *)&local_d8,
               (Matrix4x4<double> *)&local_158);
    local_48 = (float)*(double *)(param_1 + 0x60);
    fStack_44 = (float)*(double *)(param_1 + 0x68);
    fStack_40 = (float)*(double *)(param_1 + 0x70);
    fStack_3c = (float)*(double *)(param_1 + 0x78);
    local_38 = (float)*(double *)(param_1 + 0x80);
    fStack_34 = (float)*(double *)(param_1 + 0x88);
    fStack_30 = (float)*(double *)(param_1 + 0x90);
    fStack_2c = (float)*(double *)(param_1 + 0x98);
    local_58 = CONCAT44((float)*(double *)(param_1 + 0x48),(float)*(double *)(param_1 + 0x40));
    uStack_50 = CONCAT44((float)*(double *)(param_1 + 0x58),(float)*(double *)(param_1 + 0x50));
    (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x28))(*(longlong **)(param_1 + 0xc0),&local_58);
  }
  return;
}



// FUNCTION 143543b60 FUN_143543b60 body=306 status=ok
// SIG undefined FUN_143543b60(void)

void FUN_143543b60(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  uint local_238;
  uint uStack_234;
  uint uStack_230;
  uint uStack_22c;
  uint local_228 [2];
  undefined8 local_220;
  uint local_218 [116];
  uint local_48 [8];
  undefined1 local_28 [16];
  
  lVar5 = 0x10;
  puVar2 = local_228;
  lVar6 = 0x10;
  do {
    *puVar2 = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2 = puVar2 + 8;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  puVar2 = local_228;
  lVar6 = 0x10;
  puVar4 = (undefined8 *)(param_1 + 0x40);
  do {
    uVar1 = *puVar4;
    if (9 < ((byte)*puVar2 & 0x1f)) {
      if ((*puVar2 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar2);
      }
      else {
        FUN_143592150();
      }
    }
    *puVar2 = *puVar2 & 0xffffffe4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar2 | 4;
    local_238 = (uint)uVar1;
    uStack_234 = (uint)((ulonglong)uVar1 >> 0x20);
    puVar2[4] = local_238;
    puVar2[5] = uStack_234;
    puVar2[6] = uStack_230;
    puVar2[7] = uStack_22c;
    puVar2 = puVar2 + 8;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  FUN_1435ccdc0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_res8,param_2,
                "flash.geom.Matrix3D",0x10,local_228);
  puVar3 = local_28;
  do {
    puVar2 = (uint *)(puVar3 + -0x20);
    puVar3 = puVar3 + -0x20;
    lVar5 = lVar5 + -1;
    if (9 < ((byte)*puVar2 & 0x1f)) {
      if ((*puVar2 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar3);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar5 != 0);
  return;
}



// FUNCTION 143543ca0 FUN_143543ca0 body=68 status=ok
// SIG undefined FUN_143543ca0(void)

void FUN_143543ca0(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x3e9,uVar2);
  FUN_1435cbdb0(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143543cf0 FUN_143543cf0 body=508 status=ok
// SIG undefined FUN_143543cf0(void)

void FUN_143543cf0(longlong param_1,ulonglong *param_2,longlong param_3)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  undefined1 local_e8 [8];
  longlong local_e0;
  
  if (param_3 == 0) {
    uVar11 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar22 = FUN_1435c8e40(local_e8,0x3f1,uVar11);
    FUN_1435cbe70(uVar11,uVar22);
    piVar1 = (int *)(local_e0 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    dVar13 = *(double *)(param_1 + 0x40);
    dVar14 = *(double *)(param_1 + 0x48);
    dVar15 = *(double *)(param_1 + 0x60);
    dVar16 = *(double *)(param_1 + 0x68);
    uVar11 = *(undefined8 *)(param_3 + 0x28);
    dVar17 = *(double *)(param_1 + 0x50);
    dVar18 = *(double *)(param_1 + 0x70);
    dVar2 = *(double *)(param_3 + 0x50);
    dVar3 = *(double *)(param_3 + 0x50);
    dVar19 = *(double *)(param_1 + 0x80);
    dVar20 = *(double *)(param_1 + 0x88);
    dVar21 = *(double *)(param_1 + 0x90);
    dVar4 = *(double *)(param_3 + 0x50);
    dVar5 = *(double *)(param_3 + 0x48);
    dVar6 = *(double *)(param_3 + 0x40);
    dVar7 = *(double *)(param_3 + 0x48);
    dVar8 = *(double *)(param_3 + 0x40);
    dVar9 = *(double *)(param_3 + 0x48);
    dVar10 = *(double *)(param_3 + 0x40);
    puVar23 = (undefined8 *)FUN_1435b5bc0(uVar11);
    if (puVar23 != (undefined8 *)0x0) {
      UInterpTrackInst::UInterpTrackInst(puVar23,uVar11);
      *puVar23 = &PTR_FUN_145b33fb8;
      puVar23[8] = 0;
      puVar23[9] = 0;
      puVar23[10] = 0;
      puVar23[0xb] = 0;
    }
    puVar23[8] = dVar14 * dVar5 + dVar13 * dVar6 + dVar17 * dVar2 + 0.0;
    puVar23[9] = dVar16 * dVar7 + dVar15 * dVar8 + dVar18 * dVar3 + 0.0;
    puVar23[10] = dVar20 * dVar9 + dVar19 * dVar10 + dVar21 * dVar4 + 0.0;
    puVar12 = (undefined8 *)*param_2;
    if (puVar23 != puVar12) {
      if (puVar12 != (undefined8 *)0x0) {
        if (((ulonglong)puVar12 & 1) == 0) {
          if ((*(uint *)(puVar12 + 1) & 0x3fffff) != 0) {
            *(uint *)(puVar12 + 1) = *(uint *)(puVar12 + 1) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *param_2 = (longlong)puVar12 - 1;
        }
      }
      *param_2 = (ulonglong)puVar23;
    }
  }
  return;
}



// FUNCTION 143543f00 FUN_143543f00 body=331 status=ok
// SIG undefined FUN_143543f00(void)

void FUN_143543f00(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x40),0,0x80);
  *(undefined8 *)(param_1 + 0x40) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x68) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x90) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0xb8) = 0x3ff0000000000000;
  plVar1 = *(longlong **)(param_1 + 0xc0);
  if (plVar1 != (longlong *)0x0) {
    local_28 = (float)*(double *)(param_1 + 0x60);
    fStack_24 = (float)*(double *)(param_1 + 0x68);
    fStack_20 = (float)*(double *)(param_1 + 0x70);
    fStack_1c = (float)*(double *)(param_1 + 0x78);
    local_18 = (float)*(double *)(param_1 + 0x80);
    fStack_14 = (float)*(double *)(param_1 + 0x88);
    fStack_10 = (float)*(double *)(param_1 + 0x90);
    fStack_c = (float)*(double *)(param_1 + 0x98);
    local_38 = CONCAT44((float)*(double *)(param_1 + 0x48),(float)*(double *)(param_1 + 0x40));
    uStack_30 = CONCAT44((float)*(double *)(param_1 + 0x58),(float)*(double *)(param_1 + 0x50));
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_38);
  }
  return;
}



// FUNCTION 143544060 FUN_143544060 body=660 status=ok
// SIG undefined FUN_143544060(void)

void FUN_143544060(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  int *piVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res18 [8];
  undefined8 local_348;
  uint uStack_340;
  uint uStack_33c;
  undefined8 local_338 [17];
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  uint local_238 [2];
  undefined8 local_230;
  uint local_228 [116];
  uint local_58 [8];
  undefined1 local_38 [16];
  
  if ((param_3 == 0) || (param_4 == 0)) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(&local_348,0x3f1,uVar2);
    FUN_1435cbe70(uVar2,uVar4);
    piVar1 = (int *)(CONCAT44(uStack_33c,uStack_340) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    if (*param_2 == 0) {
      _guard_xfg_dispatch_icall_nop(local_338,0,0x80);
      puVar3 = local_238;
      lVar7 = 0x10;
      local_338[0] = 0x3ff0000000000000;
      local_338[5] = 0x3ff0000000000000;
      lVar5 = 0x10;
      local_338[10] = 0x3ff0000000000000;
      lVar8 = 0;
      local_338[0xf] = 0x3ff0000000000000;
      do {
        *puVar3 = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3 = puVar3 + 8;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      puVar3 = local_238;
      do {
        uVar2 = local_338[lVar8];
        if (9 < ((byte)*puVar3 & 0x1f)) {
          if ((*puVar3 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar3);
          }
          else {
            FUN_143592150();
          }
        }
        *puVar3 = *puVar3 & 0xffffffe4;
        lVar8 = lVar8 + 1;
        *puVar3 = *puVar3 | 4;
        local_348._0_4_ = (uint)uVar2;
        local_348._4_4_ = (uint)((ulonglong)uVar2 >> 0x20);
        puVar3[4] = (uint)local_348;
        puVar3[5] = local_348._4_4_;
        puVar3[6] = uStack_340;
        puVar3[7] = uStack_33c;
        puVar3 = puVar3 + 8;
        local_348 = uVar2;
      } while (lVar8 < 0x10);
      FUN_1435ccdc0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_res18,param_2,
                    "flash.geom.Matrix3D",0x10,local_238);
      puVar6 = local_38;
      do {
        puVar3 = (uint *)(puVar6 + -0x20);
        puVar6 = puVar6 + -0x20;
        lVar7 = lVar7 + -1;
        if (9 < ((byte)*puVar3 & 0x1f)) {
          if ((*puVar3 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar6);
          }
          else {
            FUN_143592150();
          }
        }
      } while (lVar7 != 0);
    }
    local_338[0] = *(undefined8 *)(param_3 + 0x40);
    local_338[1] = *(undefined8 *)(param_3 + 0x48);
    local_338[2] = *(undefined8 *)(param_3 + 0x50);
    local_338[3] = *(undefined8 *)(param_3 + 0x58);
    local_338[4] = *(undefined8 *)(param_3 + 0x60);
    local_338[5] = *(undefined8 *)(param_3 + 0x68);
    local_338[6] = *(undefined8 *)(param_3 + 0x70);
    local_338[7] = *(undefined8 *)(param_3 + 0x78);
    local_338[8] = *(undefined8 *)(param_3 + 0x80);
    local_338[9] = *(undefined8 *)(param_3 + 0x88);
    local_338[10] = *(undefined8 *)(param_3 + 0x90);
    local_338[0xb] = *(undefined8 *)(param_3 + 0x98);
    local_338[0xc] = *(undefined8 *)(param_3 + 0xa0);
    local_338[0xd] = *(undefined8 *)(param_3 + 0xa8);
    local_338[0xe] = *(undefined8 *)(param_3 + 0xb0);
    local_338[0xf] = *(undefined8 *)(param_3 + 0xb8);
    local_338[0x10] = *(undefined8 *)(param_4 + 0x40);
    uStack_2b0 = *(undefined8 *)(param_4 + 0x48);
    local_2a8 = *(undefined8 *)(param_4 + 0x50);
    uStack_2a0 = *(undefined8 *)(param_4 + 0x58);
    local_298 = *(undefined8 *)(param_4 + 0x60);
    uStack_290 = *(undefined8 *)(param_4 + 0x68);
    local_288 = *(undefined8 *)(param_4 + 0x70);
    uStack_280 = *(undefined8 *)(param_4 + 0x78);
    local_278 = *(undefined8 *)(param_4 + 0x80);
    uStack_270 = *(undefined8 *)(param_4 + 0x88);
    local_268 = *(undefined8 *)(param_4 + 0x90);
    uStack_260 = *(undefined8 *)(param_4 + 0x98);
    local_258 = *(undefined4 *)(param_4 + 0xa0);
    uStack_254 = *(undefined4 *)(param_4 + 0xa4);
    uStack_250 = *(undefined4 *)(param_4 + 0xa8);
    uStack_24c = *(undefined4 *)(param_4 + 0xac);
    local_248 = *(undefined4 *)(param_4 + 0xb0);
    uStack_244 = *(undefined4 *)(param_4 + 0xb4);
    uStack_240 = *(undefined4 *)(param_4 + 0xb8);
    uStack_23c = *(undefined4 *)(param_4 + 0xbc);
    FUN_143554ec0(*param_2 + 0x40,local_338,local_338 + 0x10,param_5);
  }
  return;
}



// FUNCTION 143544300 FUN_143544300 body=548 status=ok
// SIG undefined FUN_143544300(void)

void FUN_143544300(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 local_148 [8];
  longlong local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_148,0x3f1,uVar2);
    FUN_1435cbe70(uVar2,uVar4);
    piVar1 = (int *)(local_140 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    local_88 = *(undefined8 *)(param_1 + 0x40);
    uStack_80 = *(undefined8 *)(param_1 + 0x48);
    local_78 = *(undefined8 *)(param_1 + 0x50);
    uStack_70 = *(undefined8 *)(param_1 + 0x58);
    local_68 = *(undefined8 *)(param_1 + 0x60);
    uStack_60 = *(undefined8 *)(param_1 + 0x68);
    local_58 = *(undefined8 *)(param_1 + 0x70);
    uStack_50 = *(undefined8 *)(param_1 + 0x78);
    local_48 = *(undefined8 *)(param_1 + 0x80);
    uStack_40 = *(undefined8 *)(param_1 + 0x88);
    local_38 = *(undefined8 *)(param_1 + 0x90);
    uStack_30 = *(undefined8 *)(param_1 + 0x98);
    local_28 = *(undefined8 *)(param_1 + 0xa0);
    uStack_20 = *(undefined8 *)(param_1 + 0xa8);
    local_18 = *(undefined8 *)(param_1 + 0xb0);
    uStack_10 = *(undefined8 *)(param_1 + 0xb8);
    local_108 = *(undefined8 *)(param_3 + 0x40);
    uStack_100 = *(undefined8 *)(param_3 + 0x48);
    local_f8 = *(undefined8 *)(param_3 + 0x50);
    uStack_f0 = *(undefined8 *)(param_3 + 0x58);
    local_e8 = *(undefined8 *)(param_3 + 0x60);
    uStack_e0 = *(undefined8 *)(param_3 + 0x68);
    local_d8 = *(undefined8 *)(param_3 + 0x70);
    uStack_d0 = *(undefined8 *)(param_3 + 0x78);
    local_c8 = *(undefined8 *)(param_3 + 0x80);
    uStack_c0 = *(undefined8 *)(param_3 + 0x88);
    local_b8 = *(undefined8 *)(param_3 + 0x90);
    uStack_b0 = *(undefined8 *)(param_3 + 0x98);
    local_a8 = *(undefined4 *)(param_3 + 0xa0);
    uStack_a4 = *(undefined4 *)(param_3 + 0xa4);
    uStack_a0 = *(undefined4 *)(param_3 + 0xa8);
    uStack_9c = *(undefined4 *)(param_3 + 0xac);
    local_98 = *(undefined4 *)(param_3 + 0xb0);
    uStack_94 = *(undefined4 *)(param_3 + 0xb4);
    uStack_90 = *(undefined4 *)(param_3 + 0xb8);
    uStack_8c = *(undefined4 *)(param_3 + 0xbc);
    FUN_143554ec0(param_1 + 0x40,&local_88,&local_108);
    plVar3 = *(longlong **)(param_1 + 0xc0);
    if (plVar3 != (longlong *)0x0) {
      local_128 = (float)*(double *)(param_1 + 0x60);
      fStack_124 = (float)*(double *)(param_1 + 0x68);
      fStack_120 = (float)*(double *)(param_1 + 0x70);
      fStack_11c = (float)*(double *)(param_1 + 0x78);
      local_118 = (float)*(double *)(param_1 + 0x80);
      fStack_114 = (float)*(double *)(param_1 + 0x88);
      fStack_110 = (float)*(double *)(param_1 + 0x90);
      fStack_10c = (float)*(double *)(param_1 + 0x98);
      local_138 = CONCAT44((float)*(double *)(param_1 + 0x48),(float)*(double *)(param_1 + 0x40));
      uStack_130 = CONCAT44((float)*(double *)(param_1 + 0x58),(float)*(double *)(param_1 + 0x50));
      (**(code **)(*plVar3 + 0x28))(plVar3,&local_138);
    }
  }
  return;
}



// FUNCTION 143544530 FUN_143544530 body=389 status=ok
// SIG undefined FUN_143544530(void)

void FUN_143544530(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [128];
  
  puVar3 = (undefined8 *)FUN_1435547f0(param_1 + 0x40,local_88);
  uVar2 = puVar3[1];
  *(undefined8 *)(param_1 + 0x40) = *puVar3;
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  uVar2 = puVar3[3];
  *(undefined8 *)(param_1 + 0x50) = puVar3[2];
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  uVar2 = puVar3[5];
  *(undefined8 *)(param_1 + 0x60) = puVar3[4];
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  uVar2 = puVar3[7];
  *(undefined8 *)(param_1 + 0x70) = puVar3[6];
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  uVar2 = puVar3[9];
  *(undefined8 *)(param_1 + 0x80) = puVar3[8];
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  uVar2 = puVar3[0xb];
  *(undefined8 *)(param_1 + 0x90) = puVar3[10];
  *(undefined8 *)(param_1 + 0x98) = uVar2;
  uVar2 = puVar3[0xd];
  *(undefined8 *)(param_1 + 0xa0) = puVar3[0xc];
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  uVar2 = puVar3[0xf];
  *(undefined8 *)(param_1 + 0xb0) = puVar3[0xe];
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  plVar1 = *(longlong **)(param_1 + 0xc0);
  if (plVar1 != (longlong *)0x0) {
    local_a8 = (float)*(double *)(param_1 + 0x60);
    fStack_a4 = (float)*(double *)(param_1 + 0x68);
    fStack_a0 = (float)*(double *)(param_1 + 0x70);
    fStack_9c = (float)*(double *)(param_1 + 0x78);
    local_98 = (float)*(double *)(param_1 + 0x80);
    fStack_94 = (float)*(double *)(param_1 + 0x88);
    fStack_90 = (float)*(double *)(param_1 + 0x90);
    fStack_8c = (float)*(double *)(param_1 + 0x98);
    local_b8 = CONCAT44((float)*(double *)(param_1 + 0x48),(float)*(double *)(param_1 + 0x40));
    uStack_b0 = CONCAT44((float)*(double *)(param_1 + 0x58),(float)*(double *)(param_1 + 0x50));
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_b8);
  }
  *param_2 = 1;
  return;
}



// FUNCTION 1435446c0 FUN_1435446c0 body=5564 status=ok
// SIG undefined FUN_1435446c0(void)

void FUN_1435446c0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  longlong *plVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  char cVar16;
  bool bVar17;
  undefined8 uVar18;
  double *pdVar19;
  Matrix4x4<double> *pMVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  double local_res18;
  double local_458;
  double local_450;
  double local_448;
  double local_440;
  double local_438;
  double local_430;
  double local_428;
  double dStack_420;
  double local_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  double local_408;
  double local_400;
  double local_3f8;
  double local_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  double local_368;
  double local_360;
  undefined8 uStack_358;
  double local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  longlong local_f0;
  double local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  if (param_3 == 0) {
    uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar18 = FUN_1435c8e40(&local_f8,0x3f1,uVar5);
    FUN_1435cbe70(uVar5,uVar18);
    piVar1 = (int *)(local_f0 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  dVar2 = *(double *)(param_3 + 0x40);
  dVar3 = *(double *)(param_3 + 0x48);
  dVar4 = *(double *)(param_3 + 0x50);
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    dVar2 = dVar2 * 20.0;
    dVar3 = dVar3 * 20.0;
    dVar4 = dVar4 * 20.0;
  }
  local_e8 = *(double *)(param_1 + 0x98);
  if (param_4 == 0) {
    local_418 = -1.0;
    local_428 = 0.0;
    dStack_420 = 0.0;
    pdVar19 = &local_428;
  }
  else {
    pdVar19 = &local_360;
    local_360 = *(double *)(param_4 + 0x40);
    uStack_358 = *(undefined8 *)(param_4 + 0x48);
    local_350 = *(double *)(param_4 + 0x50);
  }
  local_440 = *pdVar19;
  local_438 = pdVar19[1];
  local_430 = pdVar19[2];
  if (param_5 == 0) {
    pdVar19 = &local_428;
    local_428 = 0.0;
    dStack_420 = -1.0;
    local_418 = 0.0;
  }
  else {
    local_360 = *(double *)(param_5 + 0x40);
    uStack_358 = *(undefined8 *)(param_5 + 0x48);
    pdVar19 = &local_360;
    local_350 = *(double *)(param_5 + 0x50);
  }
  local_458 = *pdVar19;
  dVar4 = dVar4 - local_e8;
  local_450 = pdVar19[1];
  dVar3 = dVar3 - *(double *)(param_1 + 0x78);
  local_448 = pdVar19[2];
  dVar2 = dVar2 - *(double *)(param_1 + 0x58);
  if (dVar2 * dVar2 + dVar3 * dVar3 + dVar4 * dVar4 < 4e-06) {
    return;
  }
  if (local_440 * local_440 + local_438 * local_438 + local_430 * local_430 <= 1e-08) {
    return;
  }
  if (local_450 * local_450 + local_458 * local_458 + local_448 * local_448 <= 1e-08) {
    return;
  }
  FUN_143555e50(&local_440);
  FUN_143555e50(&local_458);
  dVar9 = local_430;
  dVar8 = local_438;
  uVar25 = SUB84(local_458,0);
  uVar26 = (undefined4)((ulonglong)local_458 >> 0x20);
  uVar21 = SUB84(local_450,0);
  uVar22 = (undefined4)((ulonglong)local_450 >> 0x20);
  uVar23 = SUB84(local_448,0);
  uVar24 = (undefined4)((ulonglong)local_448 >> 0x20);
  dVar7 = local_458 * local_440 + local_450 * local_438 + local_448 * local_430;
  if (0.0001 <= ABS(dVar7) && ABS(dVar7) != 0.0001) {
    local_458 = local_458 - local_440 * dVar7;
    local_450 = local_450 - local_438 * dVar7;
    local_448 = local_448 - local_430 * dVar7;
    if (local_450 * local_450 + local_458 * local_458 + local_448 * local_448 <= 1e-08) {
      if (1.0 <= ABS(local_438) + 0.002) {
        local_458 = -(local_440 * local_430);
        local_450 = -(local_430 * local_438);
        local_448 = 1.0 - local_430 * local_430;
      }
      else {
        local_458 = -(local_440 * local_438);
        local_450 = -1.0 - local_438 * local_438;
        local_448 = -(local_430 * local_438);
      }
    }
    FUN_143555e50(&local_458);
    uVar23 = SUB84(local_448,0);
    uVar24 = (undefined4)((ulonglong)local_448 >> 0x20);
    uVar21 = SUB84(local_450,0);
    uVar22 = (undefined4)((ulonglong)local_450 >> 0x20);
    uVar25 = SUB84(local_458,0);
    uVar26 = (undefined4)((ulonglong)local_458 >> 0x20);
  }
  local_408 = dVar2;
  local_400 = dVar3;
  local_3f8 = dVar4;
  FUN_143555e50(&local_408);
  local_2a8 = *(double *)(param_1 + 0x40);
  uStack_2a0 = *(double *)(param_1 + 0x48);
  local_298 = *(double *)(param_1 + 0x50);
  uStack_290 = *(double *)(param_1 + 0x58);
  local_288 = *(double *)(param_1 + 0x60);
  uStack_280 = *(double *)(param_1 + 0x68);
  local_278 = *(double *)(param_1 + 0x70);
  uStack_270 = *(undefined8 *)(param_1 + 0x78);
  local_268 = *(double *)(param_1 + 0x80);
  uStack_260 = *(double *)(param_1 + 0x88);
  local_258 = *(double *)(param_1 + 0x90);
  uStack_250 = *(double *)(param_1 + 0x98);
  local_248 = *(undefined8 *)(param_1 + 0xa0);
  uStack_240 = *(undefined8 *)(param_1 + 0xa8);
  local_238 = *(undefined8 *)(param_1 + 0xb0);
  uStack_230 = *(undefined8 *)(param_1 + 0xb8);
  cVar16 = FUN_143553e80(&local_2a8,&local_360,&local_428,&local_1a8,&local_d8,&local_228,3);
  if (cVar16 == '\0') {
    uStack_358 = *(undefined8 *)(param_1 + 0x78);
    local_360 = *(double *)(param_1 + 0x58);
    local_350 = local_e8;
    local_2c8 = _guard_xfg_dispatch_icall_nop
                          (local_2a8 * local_2a8 + local_288 * local_288 + local_268 * local_268);
    local_2c0 = _guard_xfg_dispatch_icall_nop
                          (uStack_2a0 * uStack_2a0 + uStack_280 * uStack_280 +
                           uStack_260 * uStack_260);
    local_2b8 = _guard_xfg_dispatch_icall_nop
                          (local_298 * local_298 + local_278 * local_278 + local_258 * local_258);
    local_c8 = 0;
    uStack_c0 = 0x3ff0000000000000;
    local_368 = 0.0;
    local_188 = 0;
    local_3f0 = 0.0;
    local_f8 = 0;
    local_res18 = 0.0;
  }
  else {
    local_f8 = uStack_d0;
    local_188 = local_d8;
    local_res18 = local_198;
    local_3f0 = dStack_1a0;
    local_368 = local_1a8;
    local_2b8 = local_418;
    local_2c0 = dStack_420;
    local_2c8 = local_428;
  }
  dVar2 = local_440;
  if (local_408 * local_440 + local_400 * dVar8 + local_3f8 * dVar9 + 1.0 <= 0.0001) {
    FUN_1435561d0(&local_3e8,0x54442d18,&local_458);
    local_328 = (double)CONCAT44(uStack_3c4,local_3c8);
    local_308 = (double)CONCAT44(uStack_3a4,local_3a8);
    uStack_300 = (double)CONCAT44(uStack_39c,uStack_3a0);
    local_2e8 = local_388;
    uStack_2e0 = uStack_380;
    local_2d8 = local_378;
    uStack_2d0 = uStack_370;
    local_348 = local_3e8;
    uStack_340 = uStack_3e0;
    uStack_320 = uStack_3c0;
    local_338 = local_3d8;
    uStack_330 = uStack_3d0;
    local_318 = local_3b8;
    uStack_310 = uStack_3b0;
    local_408 = local_3e8 * dVar2 + uStack_3e0 * dVar8 + local_3d8 * dVar9;
    local_2f8 = local_398;
    uStack_2f0 = uStack_390;
    local_400 = local_328 * dVar2 + uStack_3c0 * dVar8 + local_3b8 * dVar9;
    local_3f8 = local_308 * dVar2 + uStack_300 * dVar8 + local_398 * dVar9;
    FUN_143555e50(&local_408);
    dVar2 = (local_408 * 0.0 - local_400 * 1.0) + local_3f8 * 0.0;
    local_440 = 0.0 - local_408 * dVar2;
    local_430 = 0.0 - local_3f8 * dVar2;
    local_438 = -1.0 - local_400 * dVar2;
    FUN_143555e50(&local_440);
    if (1e-08 < local_438 * local_438 + local_440 * local_440 + local_430 * local_430) {
      if (local_438 * (double)CONCAT44(uVar22,uVar21) + local_440 * (double)CONCAT44(uVar26,uVar25)
          + local_430 * (double)CONCAT44(uVar24,uVar23) + 1.0 <= 0.0001) {
        FUN_1435561d0(&local_228,0x54442d18,&local_408);
      }
      else {
        local_d8 = 0;
        uStack_d0 = 0;
        local_c8 = 0;
        uStack_c0 = 0x3ff0000000000000;
        FUN_143556350(&local_d8,&local_458,&local_440);
        _guard_xfg_dispatch_icall_nop(&local_228,0,0x80);
        local_228 = 1.0;
        uStack_200 = 1.0;
        local_1d8 = 1.0;
        local_1b0 = 0x3ff0000000000000;
        FUN_143552ce0(&local_228,&local_d8);
      }
      local_178 = local_348;
      uStack_170 = uStack_340;
      local_168 = local_338;
      uStack_160 = uStack_330;
      local_148 = local_318;
      uStack_140 = uStack_310;
      local_128 = local_2f8;
      uStack_120 = uStack_2f0;
      local_118 = local_388;
      uStack_110 = uStack_380;
      local_158 = local_328;
      uStack_150 = uStack_320;
      local_108 = local_378;
      uStack_100 = uStack_370;
      local_138 = local_308;
      uStack_130 = uStack_300;
      Scaleform::Render::Matrix4x4<double>::MultiplyMatrix_NonOpt
                ((Matrix4x4<double> *)&local_348,(Matrix4x4<double> *)&local_228,
                 (Matrix4x4<double> *)&local_178);
    }
  }
  else {
    local_428 = 0.0;
    dStack_420 = 0.0;
    local_418 = 0.0;
    uStack_410 = 0;
    uStack_40c = 0x3ff00000;
    FUN_143556350(&local_428,&local_440,&local_408);
    dVar10 = local_3f8;
    dVar9 = local_400;
    dVar8 = local_408;
    uVar33 = SUB84(dStack_420,0);
    uVar34 = (undefined4)((ulonglong)dStack_420 >> 0x20);
    uVar39 = SUB84(local_418,0);
    uVar40 = (undefined4)((ulonglong)local_418 >> 0x20);
    uVar41 = SUB84(local_428,0);
    uVar42 = (undefined4)((ulonglong)local_428 >> 0x20);
    dVar7 = dStack_420 * (double)CONCAT44(uVar24,uVar23) -
            local_418 * (double)CONCAT44(uVar22,uVar21);
    dVar4 = local_418 * (double)CONCAT44(uVar26,uVar25) -
            local_428 * (double)CONCAT44(uVar24,uVar23);
    dVar3 = local_428 * (double)CONCAT44(uVar22,uVar21) -
            dStack_420 * (double)CONCAT44(uVar26,uVar25);
    dVar2 = (double)CONCAT44(uStack_40c,uStack_410) * 2.0;
    local_450 = dVar4 * dVar2 + (double)CONCAT44(uVar22,uVar21) +
                (dVar7 * local_418 - dVar3 * local_428) * 2.0;
    local_448 = dVar3 * dVar2 + (double)CONCAT44(uVar24,uVar23) +
                (dVar4 * local_428 - dVar7 * dStack_420) * 2.0;
    local_458 = dVar7 * dVar2 + (double)CONCAT44(uVar26,uVar25) +
                (dVar3 * dStack_420 - dVar4 * local_418) * 2.0;
    dVar2 = local_450 * local_400 + local_458 * local_408 + local_448 * local_3f8;
    local_458 = local_458 - local_408 * dVar2;
    local_450 = local_450 - local_400 * dVar2;
    local_448 = local_448 - local_3f8 * dVar2;
    FUN_143555e50(&local_458);
    dVar2 = (dVar8 * 0.0 - dVar9 * 1.0) + dVar10 * 0.0;
    local_440 = 0.0 - dVar8 * dVar2;
    local_430 = 0.0 - dVar10 * dVar2;
    local_438 = -1.0 - dVar9 * dVar2;
    FUN_143555e50(&local_440);
    if (0.0001 < local_438 * local_450 + local_440 * local_458 + local_430 * local_448 + 1.0) {
      if ((1e-08 < local_450 * local_450 + local_458 * local_458 + local_448 * local_448) &&
         (1.4210854715202004e-14 <
          local_438 * local_438 + local_440 * local_440 + local_430 * local_430)) {
        local_1a8 = 0.0;
        dStack_1a0 = 0.0;
        local_198 = 0.0;
        uStack_190 = 0x3ff0000000000000;
        FUN_143556350(&local_1a8,&local_458,&local_440);
        pdVar19 = (double *)FUN_143552f50(&local_428,&local_228,&local_1a8);
        if (pdVar19 != &local_428) {
          local_428 = *pdVar19;
          dStack_420 = pdVar19[1];
          local_418 = pdVar19[2];
          uStack_410 = *(undefined4 *)(pdVar19 + 3);
          uStack_40c = *(undefined4 *)((longlong)pdVar19 + 0x1c);
        }
        FUN_143555ee0(&local_428);
        uVar39 = SUB84(local_418,0);
        uVar40 = (undefined4)((ulonglong)local_418 >> 0x20);
        uVar33 = SUB84(dStack_420,0);
        uVar34 = (undefined4)((ulonglong)dStack_420 >> 0x20);
        uVar41 = SUB84(local_428,0);
        uVar42 = (undefined4)((ulonglong)local_428 >> 0x20);
      }
      _guard_xfg_dispatch_icall_nop(&local_178,0,0x60);
      dVar10 = local_158;
      dVar9 = uStack_160;
      dVar8 = local_168;
      dVar7 = uStack_170;
      dVar4 = local_2c0;
      dVar3 = local_2c8;
      dVar2 = local_3f0;
      local_178 = local_2c8;
      local_178._0_4_ = SUB84(local_2c8,0);
      local_178._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
      uStack_150 = local_2c0;
      uStack_150._0_4_ = SUB84(local_2c0,0);
      uStack_150._4_4_ = (undefined4)((ulonglong)local_2c0 >> 0x20);
      local_1f8 = local_148;
      uStack_1f0 = uStack_140;
      local_128 = local_2b8;
      dVar15 = local_128;
      local_1e8 = local_138;
      uStack_1e0 = uStack_130;
      local_228 = local_2c8;
      uStack_220 = uStack_170;
      local_1d8 = local_2b8;
      uStack_1d0 = uStack_120;
      local_218 = local_168;
      fStack_210 = (float)(undefined4)uStack_160;
      fStack_20c = (float)uStack_160._4_4_;
      local_208 = (float)(undefined4)local_158;
      fStack_204 = (float)local_158._4_4_;
      uStack_200 = local_2c0;
      local_178 = dVar3;
      uStack_150 = dVar4;
      if (((1.1920928955078125e-07 <= ABS(local_368) && ABS(local_368) != 1.1920928955078125e-07) ||
          (1.1920928955078125e-07 <= ABS(local_3f0) && ABS(local_3f0) != 1.1920928955078125e-07)) ||
         (1.1920928955078125e-07 <= ABS(local_res18) && ABS(local_res18) != 1.1920928955078125e-07))
      {
        _guard_xfg_dispatch_icall_nop(&local_3e8,0,0x60);
        local_3d8 = dVar2;
        local_3b8 = local_res18;
        local_318 = local_148;
        uStack_310 = uStack_140;
        local_308 = local_138;
        uStack_300 = uStack_130;
        local_3e8 = 1.0;
        uStack_3c0 = 1.0;
        local_398 = 1.0;
        uStack_3e0 = local_368;
        local_348 = dVar3;
        uStack_340 = dVar7;
        local_338 = dVar8;
        uStack_330 = dVar9;
        local_328 = dVar10;
        uStack_320 = dVar4;
        local_2f8 = local_128;
        uStack_2f0 = uStack_120;
        Scaleform::Render::Matrix3x4<double>::MultiplyMatrix_NonOpt
                  ((Matrix3x4<double> *)&local_228,(Matrix3x4<double> *)&local_3e8,
                   (Matrix3x4<double> *)&local_348);
        uVar21 = (undefined4)local_1f8;
        uVar22 = local_1f8._4_4_;
        uVar23 = (undefined4)uStack_1f0;
        uVar24 = uStack_1f0._4_4_;
        uVar25 = (undefined4)local_1e8;
        uVar26 = local_1e8._4_4_;
        uVar27 = (undefined4)uStack_1e0;
        uVar28 = uStack_1e0._4_4_;
        uVar29 = (undefined4)local_228;
        uVar30 = local_228._4_4_;
        uVar31 = (undefined4)uStack_220;
        uVar32 = uStack_220._4_4_;
        uVar35 = (undefined4)local_218;
        uVar36 = local_218._4_4_;
        uVar37 = (undefined4)uStack_200;
        uVar38 = uStack_200._4_4_;
        uVar43 = (undefined4)local_1d8;
        uVar44 = local_1d8._4_4_;
        uVar45 = (undefined4)uStack_1d0;
        uVar46 = uStack_1d0._4_4_;
      }
      else {
        local_128._0_4_ = SUB84(local_2b8,0);
        local_128._4_4_ = (undefined4)((ulonglong)local_2b8 >> 0x20);
        uVar21 = (undefined4)local_148;
        uVar22 = local_148._4_4_;
        uVar23 = (undefined4)uStack_140;
        uVar24 = uStack_140._4_4_;
        uVar25 = (undefined4)local_138;
        uVar26 = local_138._4_4_;
        uVar27 = (undefined4)uStack_130;
        uVar28 = uStack_130._4_4_;
        uVar29 = (undefined4)local_178;
        uVar30 = local_178._4_4_;
        uVar31 = (undefined4)uStack_170;
        uVar32 = uStack_170._4_4_;
        uVar35 = (undefined4)local_168;
        uVar36 = local_168._4_4_;
        uVar37 = (undefined4)uStack_150;
        uVar38 = uStack_150._4_4_;
        uVar43 = (undefined4)local_128;
        uVar44 = local_128._4_4_;
        uVar45 = (undefined4)uStack_120;
        uVar46 = uStack_120._4_4_;
        local_128 = dVar15;
      }
      fVar14 = fStack_204;
      fVar13 = local_208;
      fVar12 = fStack_20c;
      fVar11 = fStack_210;
      _guard_xfg_dispatch_icall_nop(&local_3e8,0,0x60);
      uStack_190 = CONCAT44(uStack_40c,uStack_410);
      dStack_1a0 = (double)CONCAT44(uVar34,uVar33);
      local_1a8 = (double)CONCAT44(uVar42,uVar41);
      local_198 = (double)CONCAT44(uVar40,uVar39);
      local_3e8 = 1.0;
      uStack_3c0 = 1.0;
      local_398 = 1.0;
      if (1.4210854715202004e-14 <
          (double)CONCAT44(uVar34,uVar33) * (double)CONCAT44(uVar34,uVar33) +
          (double)CONCAT44(uVar42,uVar41) * (double)CONCAT44(uVar42,uVar41) +
          (double)CONCAT44(uVar40,uVar39) * (double)CONCAT44(uVar40,uVar39)) {
        FUN_143555ee0(&local_1a8);
        FUN_143552b30(&local_3e8,&local_1a8);
        local_348 = (double)CONCAT44(uVar30,uVar29);
        uStack_340 = (double)CONCAT44(uVar32,uVar31);
        local_338 = (double)CONCAT44(uVar36,uVar35);
        uStack_330 = (double)CONCAT44(fVar12,fVar11);
        local_328 = (double)CONCAT44(fVar14,fVar13);
        uStack_320 = (double)CONCAT44(uVar38,uVar37);
        local_318 = (double)CONCAT44(uVar22,uVar21);
        uStack_310 = CONCAT44(uVar24,uVar23);
        local_308 = (double)CONCAT44(uVar26,uVar25);
        uStack_300 = (double)CONCAT44(uVar28,uVar27);
        local_2f8 = (double)CONCAT44(uVar44,uVar43);
        uStack_2f0 = (double)CONCAT44(uVar46,uVar45);
        Scaleform::Render::Matrix3x4<double>::MultiplyMatrix_NonOpt
                  ((Matrix3x4<double> *)&local_228,(Matrix3x4<double> *)&local_3e8,
                   (Matrix3x4<double> *)&local_348);
      }
      dVar8 = uStack_1e0;
      dVar7 = uStack_200;
      dVar4 = uStack_220;
      dVar3 = local_350;
      uVar5 = uStack_358;
      dVar2 = local_360;
      local_248 = 0;
      uStack_240 = 0;
      local_238 = 0;
      uStack_230 = 0x3ff0000000000000;
      _guard_xfg_dispatch_icall_nop(&local_3e8,0,0x80);
      local_388 = local_188;
      uStack_380 = local_f8;
      local_378 = local_c8;
      uStack_370 = uStack_c0;
      local_2a8 = local_228;
      uStack_2a0 = dVar4;
      local_348 = local_228;
      uStack_340 = dVar4;
      local_298 = local_218;
      uStack_290 = dVar2;
      local_338 = local_218;
      uStack_330 = dVar2;
      local_288 = (double)CONCAT44(fStack_204,local_208);
      uStack_280 = dVar7;
      local_328 = (double)CONCAT44(fStack_204,local_208);
      uStack_320 = dVar7;
      local_278 = local_1f8;
      uStack_270 = uVar5;
      local_318 = local_1f8;
      uStack_310 = uVar5;
      local_268 = local_1e8;
      uStack_260 = dVar8;
      local_308 = local_1e8;
      uStack_300 = dVar8;
      local_3e8 = 1.0;
      uStack_3c0 = 1.0;
      local_398 = 1.0;
      local_258 = local_1d8;
      uStack_250 = dVar3;
      local_2f8 = local_1d8;
      uStack_2f0 = dVar3;
      local_2e8 = 0;
      uStack_2e0 = 0;
      local_2d8 = 0;
      uStack_2d0 = 0x3ff0000000000000;
      Scaleform::Render::Matrix4x4<double>::MultiplyMatrix_NonOpt
                ((Matrix4x4<double> *)&local_2a8,(Matrix4x4<double> *)&local_3e8,
                 (Matrix4x4<double> *)&local_348);
      uStack_230 = 0x3ff0000000000000;
      goto LAB_143545a7c;
    }
    _guard_xfg_dispatch_icall_nop(&local_3e8,0,0x80);
    local_3e8 = 1.0;
    uStack_3c0 = 1.0;
    local_398 = 1.0;
    uStack_370 = 0x3ff0000000000000;
    FUN_143552ce0(&local_3e8,&local_428);
    pMVar20 = (Matrix4x4<double> *)FUN_1435561d0(&local_178,0x54442d18,&local_408);
    local_348 = local_3e8;
    uStack_340 = uStack_3e0;
    local_338 = local_3d8;
    uStack_330 = uStack_3d0;
    uStack_320 = uStack_3c0;
    local_318 = local_3b8;
    uStack_310 = uStack_3b0;
    local_2f8 = local_398;
    uStack_2f0 = uStack_390;
    local_2e8 = local_388;
    uStack_2e0 = uStack_380;
    local_2d8 = local_378;
    uStack_2d0 = uStack_370;
    Scaleform::Render::Matrix4x4<double>::MultiplyMatrix_NonOpt
              ((Matrix4x4<double> *)&local_3e8,pMVar20,(Matrix4x4<double> *)&local_348);
    local_348 = local_3e8;
    uStack_340 = uStack_3e0;
    local_338 = local_3d8;
    uStack_330 = uStack_3d0;
    uStack_320 = uStack_3c0;
    local_318 = local_3b8;
    uStack_310 = uStack_3b0;
    local_2f8 = local_398;
    uStack_2f0 = uStack_390;
    local_2e8 = local_388;
    uStack_2e0 = uStack_380;
    local_2d8 = local_378;
    uStack_2d0 = uStack_370;
  }
  _guard_xfg_dispatch_icall_nop(&local_3e8,0,0x80);
  dVar4 = local_2c0;
  dVar3 = local_2c8;
  dVar8 = local_368;
  dVar2 = local_3f0;
  local_3e8 = local_2c8;
  local_3e8._0_4_ = SUB84(local_2c8,0);
  local_3e8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
  uStack_3c0 = local_2c0;
  uStack_3c0._0_4_ = SUB84(local_2c0,0);
  uStack_3c0._4_4_ = (undefined4)((ulonglong)local_2c0 >> 0x20);
  uStack_370 = 0x3ff0000000000000;
  uStack_370._0_4_ = 0;
  uStack_370._4_4_ = 0x3ff00000;
  local_398 = local_2b8;
  dVar7 = local_398;
  local_398._0_4_ = SUB84(local_2b8,0);
  local_398._4_4_ = (undefined4)((ulonglong)local_2b8 >> 0x20);
  local_2a8 = local_2c8;
  uStack_2a0 = uStack_3e0;
  local_298 = local_3d8;
  uStack_290 = uStack_3d0;
  local_288 = (double)CONCAT44(uStack_3c4,local_3c8);
  uStack_280 = local_2c0;
  local_278 = local_3b8;
  uStack_270 = uStack_3b0;
  local_268 = (double)CONCAT44(uStack_3a4,local_3a8);
  uStack_260 = (double)CONCAT44(uStack_39c,uStack_3a0);
  local_258 = local_2b8;
  uStack_250 = uStack_390;
  local_248 = local_388;
  uStack_240 = uStack_380;
  local_238 = local_378;
  uStack_230 = 0x3ff0000000000000;
  if (((1.1920928955078125e-07 <= ABS(local_368) && ABS(local_368) != 1.1920928955078125e-07) ||
      (1.1920928955078125e-07 <= ABS(local_3f0) && ABS(local_3f0) != 1.1920928955078125e-07)) ||
     (1.1920928955078125e-07 <= ABS(local_res18) && ABS(local_res18) != 1.1920928955078125e-07)) {
    local_3e8 = dVar3;
    uStack_3c0 = dVar4;
    local_398 = dVar7;
    _guard_xfg_dispatch_icall_nop(&local_228,0,0x80);
    local_128 = local_398;
    uStack_120 = uStack_390;
    local_228 = 1.0;
    local_108 = local_378;
    uStack_100 = uStack_370;
    uStack_200 = 1.0;
    local_1d8 = 1.0;
    local_1b0 = 0x3ff0000000000000;
    uStack_220 = dVar8;
    local_218 = dVar2;
    local_1f8 = local_res18;
    local_178 = dVar3;
    uStack_170 = uStack_3e0;
    local_168 = local_3d8;
    uStack_160 = uStack_3d0;
    local_158 = (double)CONCAT44(uStack_3c4,local_3c8);
    uStack_150 = dVar4;
    local_148 = local_3b8;
    uStack_140 = uStack_3b0;
    local_138 = (double)CONCAT44(uStack_3a4,local_3a8);
    uStack_130 = (double)CONCAT44(uStack_39c,uStack_3a0);
    local_118 = local_388;
    uStack_110 = uStack_380;
    Scaleform::Render::Matrix4x4<double>::MultiplyMatrix_NonOpt
              ((Matrix4x4<double> *)&local_2a8,(Matrix4x4<double> *)&local_228,
               (Matrix4x4<double> *)&local_178);
    local_398._0_4_ = (undefined4)local_258;
    local_398._4_4_ = local_258._4_4_;
    uStack_390._0_4_ = (undefined4)uStack_250;
    uStack_390._4_4_ = uStack_250._4_4_;
    local_388._0_4_ = (undefined4)local_248;
    local_388._4_4_ = local_248._4_4_;
    uStack_380._0_4_ = (undefined4)uStack_240;
    uStack_380._4_4_ = uStack_240._4_4_;
    local_378._0_4_ = (undefined4)local_238;
    local_378._4_4_ = local_238._4_4_;
    uStack_370._0_4_ = (undefined4)uStack_230;
    uStack_370._4_4_ = uStack_230._4_4_;
    local_3e8._0_4_ = (undefined4)local_2a8;
    local_3e8._4_4_ = local_2a8._4_4_;
    uStack_3e0._0_4_ = (undefined4)uStack_2a0;
    uStack_3e0._4_4_ = uStack_2a0._4_4_;
    local_3d8._0_4_ = (undefined4)local_298;
    local_3d8._4_4_ = local_298._4_4_;
    uStack_3d0._0_4_ = (undefined4)uStack_290;
    uStack_3d0._4_4_ = uStack_290._4_4_;
    local_3c8 = (undefined4)local_288;
    uStack_3c4 = local_288._4_4_;
    uStack_3c0._0_4_ = (undefined4)uStack_280;
    uStack_3c0._4_4_ = uStack_280._4_4_;
    local_3b8._0_4_ = (undefined4)local_278;
    local_3b8._4_4_ = local_278._4_4_;
    uStack_3b0._0_4_ = (undefined4)uStack_270;
    uStack_3b0._4_4_ = uStack_270._4_4_;
    local_3a8 = (undefined4)local_268;
    uStack_3a4 = local_268._4_4_;
    uStack_3a0 = (undefined4)uStack_260;
    uStack_39c = uStack_260._4_4_;
  }
  Scaleform::Render::Matrix4x4<double>::MultiplyMatrix_NonOpt
            ((Matrix4x4<double> *)&local_2a8,(Matrix4x4<double> *)&local_348,
             (Matrix4x4<double> *)&local_3e8);
  _guard_xfg_dispatch_icall_nop(&local_3e8,0,0x80);
  uStack_3d0 = *(double *)(param_1 + 0x58);
  uStack_3b0 = *(undefined8 *)(param_1 + 0x78);
  uStack_390 = *(double *)(param_1 + 0x98);
  local_348 = local_2a8;
  uStack_340 = uStack_2a0;
  local_338 = local_298;
  uStack_330 = uStack_290;
  local_328 = local_288;
  uStack_320 = uStack_280;
  local_318 = local_278;
  uStack_310 = uStack_270;
  local_308 = local_268;
  uStack_300 = uStack_260;
  local_2f8 = local_258;
  uStack_2f0 = uStack_250;
  local_2e8 = local_248;
  uStack_2e0 = uStack_240;
  local_3e8 = 1.0;
  uStack_3c0 = 1.0;
  local_398 = 1.0;
  uStack_370 = 0x3ff0000000000000;
  local_2d8 = local_238;
  uStack_2d0 = uStack_230;
  Scaleform::Render::Matrix4x4<double>::MultiplyMatrix_NonOpt
            ((Matrix4x4<double> *)&local_2a8,(Matrix4x4<double> *)&local_3e8,
             (Matrix4x4<double> *)&local_348);
LAB_143545a7c:
  bVar17 = Scaleform::Render::Matrix4x4<double>::IsValid((Matrix4x4<double> *)&local_2a8);
  if (bVar17) {
    *(double *)(param_1 + 0x40) = local_2a8;
    *(double *)(param_1 + 0x48) = uStack_2a0;
    *(double *)(param_1 + 0x50) = local_298;
    *(double *)(param_1 + 0x58) = uStack_290;
    *(double *)(param_1 + 0x60) = local_288;
    *(double *)(param_1 + 0x68) = uStack_280;
    *(double *)(param_1 + 0x70) = local_278;
    *(undefined8 *)(param_1 + 0x78) = uStack_270;
    *(double *)(param_1 + 0x80) = local_268;
    *(double *)(param_1 + 0x88) = uStack_260;
    *(double *)(param_1 + 0x90) = local_258;
    *(double *)(param_1 + 0x98) = uStack_250;
    *(undefined8 *)(param_1 + 0xa0) = local_248;
    *(undefined8 *)(param_1 + 0xa8) = uStack_240;
    *(undefined8 *)(param_1 + 0xb0) = local_238;
    *(undefined8 *)(param_1 + 0xb8) = uStack_230;
    plVar6 = *(longlong **)(param_1 + 0xc0);
    if (plVar6 != (longlong *)0x0) {
      local_228 = (double)CONCAT44((float)*(double *)(param_1 + 0x48),
                                   (float)*(double *)(param_1 + 0x40));
      uStack_220 = (double)CONCAT44((float)*(double *)(param_1 + 0x58),
                                    (float)*(double *)(param_1 + 0x50));
      fStack_210 = (float)*(double *)(param_1 + 0x70);
      local_218 = (double)CONCAT44((float)*(double *)(param_1 + 0x68),
                                   (float)*(double *)(param_1 + 0x60));
      fStack_20c = (float)*(double *)(param_1 + 0x78);
      local_208 = (float)*(double *)(param_1 + 0x80);
      fStack_204 = (float)*(double *)(param_1 + 0x88);
      fStack_b0 = (float)*(double *)(param_1 + 0x90);
      fStack_ac = (float)*(double *)(param_1 + 0x98);
      local_d8 = local_228;
      uStack_d0 = uStack_220;
      uStack_200 = (double)CONCAT44(fStack_ac,fStack_b0);
      local_c8 = CONCAT44((float)*(double *)(param_1 + 0x68),(float)*(double *)(param_1 + 0x60));
      uStack_c0 = CONCAT44(fStack_20c,fStack_210);
      local_b8 = local_208;
      fStack_b4 = fStack_204;
      (**(code **)(*plVar6 + 0x28))(plVar6,&local_d8);
    }
  }
  return;
}



// FUNCTION 143545c90 FUN_143545c90 body=458 status=ok
// SIG undefined FUN_143545c90(void)

void FUN_143545c90(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 local_c8 [8];
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_c8,0x3f1,uVar2);
    FUN_1435cbe70(uVar2,uVar4);
    piVar1 = (int *)(local_c0 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    local_88 = *(undefined8 *)(param_1 + 0x40);
    uStack_80 = *(undefined8 *)(param_1 + 0x48);
    local_78 = *(undefined8 *)(param_1 + 0x50);
    uStack_70 = *(undefined8 *)(param_1 + 0x58);
    local_68 = *(undefined8 *)(param_1 + 0x60);
    uStack_60 = *(undefined8 *)(param_1 + 0x68);
    local_58 = *(undefined8 *)(param_1 + 0x70);
    uStack_50 = *(undefined8 *)(param_1 + 0x78);
    local_48 = *(undefined8 *)(param_1 + 0x80);
    uStack_40 = *(undefined8 *)(param_1 + 0x88);
    local_38 = *(undefined8 *)(param_1 + 0x90);
    uStack_30 = *(undefined8 *)(param_1 + 0x98);
    local_28 = *(undefined8 *)(param_1 + 0xa0);
    uStack_20 = *(undefined8 *)(param_1 + 0xa8);
    local_18 = *(undefined8 *)(param_1 + 0xb0);
    uStack_10 = *(undefined8 *)(param_1 + 0xb8);
    Scaleform::Render::Matrix4x4<double>::MultiplyMatrix_NonOpt
              ((Matrix4x4<double> *)(param_1 + 0x40),(Matrix4x4<double> *)&local_88,
               (Matrix4x4<double> *)(param_3 + 0x40));
    plVar3 = *(longlong **)(param_1 + 0xc0);
    if (plVar3 != (longlong *)0x0) {
      local_a8 = (float)*(double *)(param_1 + 0x60);
      fStack_a4 = (float)*(double *)(param_1 + 0x68);
      fStack_a0 = (float)*(double *)(param_1 + 0x70);
      fStack_9c = (float)*(double *)(param_1 + 0x78);
      local_98 = (float)*(double *)(param_1 + 0x80);
      fStack_94 = (float)*(double *)(param_1 + 0x88);
      fStack_90 = (float)*(double *)(param_1 + 0x90);
      fStack_8c = (float)*(double *)(param_1 + 0x98);
      local_b8 = CONCAT44((float)*(double *)(param_1 + 0x48),(float)*(double *)(param_1 + 0x40));
      uStack_b0 = CONCAT44((float)*(double *)(param_1 + 0x58),(float)*(double *)(param_1 + 0x50));
      (**(code **)(*plVar3 + 0x28))(plVar3,&local_b8);
    }
  }
  return;
}



// FUNCTION 143545e60 FUN_143545e60 body=572 status=ok
// SIG undefined FUN_143545e60(void)

void FUN_143545e60(longlong param_1,undefined8 param_2,double param_3,longlong param_4,
                  longlong param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  Matrix4x4<double> *pMVar3;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [128];
  
  if (param_4 == 0) {
    local_128 = 0;
    local_138 = 0;
    uStack_130 = 0;
    puVar2 = &local_138;
  }
  else {
    puVar2 = &local_188;
    local_188 = *(undefined8 *)(param_4 + 0x40);
    uStack_180 = *(undefined8 *)(param_4 + 0x48);
    local_178 = *(undefined8 *)(param_4 + 0x50);
  }
  local_168 = *puVar2;
  uStack_160 = puVar2[1];
  local_158 = puVar2[2];
  if (param_5 == 0) {
    local_178 = 0;
    local_188 = 0;
    uStack_180 = 0;
  }
  else {
    local_188 = *(undefined8 *)(param_5 + 0x40);
    uStack_180 = *(undefined8 *)(param_5 + 0x48);
    local_178 = *(undefined8 *)(param_5 + 0x50);
  }
  local_138 = local_188;
  uStack_130 = uStack_180;
  local_128 = local_178;
  pMVar3 = (Matrix4x4<double> *)
           FUN_143556070(local_88,SUB84((param_3 * 3.141592653589793) / 180.0,0),&local_168,
                         &local_138);
  local_108 = *(undefined8 *)(param_1 + 0x40);
  uStack_100 = *(undefined8 *)(param_1 + 0x48);
  local_f8 = *(undefined8 *)(param_1 + 0x50);
  uStack_f0 = *(undefined8 *)(param_1 + 0x58);
  local_e8 = *(undefined8 *)(param_1 + 0x60);
  uStack_e0 = *(undefined8 *)(param_1 + 0x68);
  local_d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_d0 = *(undefined8 *)(param_1 + 0x78);
  local_c8 = *(undefined8 *)(param_1 + 0x80);
  uStack_c0 = *(undefined8 *)(param_1 + 0x88);
  local_b8 = *(undefined8 *)(param_1 + 0x90);
  uStack_b0 = *(undefined8 *)(param_1 + 0x98);
  local_a8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xa8);
  local_98 = *(undefined8 *)(param_1 + 0xb0);
  uStack_90 = *(undefined8 *)(param_1 + 0xb8);
  Scaleform::Render::Matrix4x4<double>::MultiplyMatrix_NonOpt
            ((Matrix4x4<double> *)(param_1 + 0x40),(Matrix4x4<double> *)&local_108,pMVar3);
  plVar1 = *(longlong **)(param_1 + 0xc0);
  if (plVar1 != (longlong *)0x0) {
    local_168 = CONCAT44((float)*(double *)(param_1 + 0x48),(float)*(double *)(param_1 + 0x40));
    uStack_160 = CONCAT44((float)*(double *)(param_1 + 0x58),(float)*(double *)(param_1 + 0x50));
    fStack_150 = (float)*(double *)(param_1 + 0x70);
    local_158 = CONCAT44((float)*(double *)(param_1 + 0x68),(float)*(double *)(param_1 + 0x60));
    fStack_14c = (float)*(double *)(param_1 + 0x78);
    local_148 = (float)*(double *)(param_1 + 0x80);
    fStack_144 = (float)*(double *)(param_1 + 0x88);
    fStack_140 = (float)*(double *)(param_1 + 0x90);
    fStack_13c = (float)*(double *)(param_1 + 0x98);
    local_138 = local_168;
    uStack_130 = uStack_160;
    local_128 = CONCAT44((float)*(double *)(param_1 + 0x68),(float)*(double *)(param_1 + 0x60));
    fStack_120 = fStack_150;
    fStack_11c = fStack_14c;
    local_118 = local_148;
    fStack_114 = fStack_144;
    fStack_110 = fStack_140;
    fStack_10c = fStack_13c;
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_138);
  }
  return;
}



// FUNCTION 1435460b0 FUN_1435460b0 body=469 status=ok
// SIG undefined FUN_1435460b0(void)

void FUN_1435460b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  undefined8 local_158;
  undefined8 uStack_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8 [5];
  undefined8 local_80;
  undefined8 local_58;
  undefined8 local_30;
  
  _guard_xfg_dispatch_icall_nop((Matrix4x4<double> *)local_a8,0,0x80);
  local_118 = *(undefined8 *)(param_1 + 0x50);
  uStack_110 = *(undefined8 *)(param_1 + 0x58);
  local_30 = 0x3ff0000000000000;
  local_58 = param_5;
  local_128 = *(undefined8 *)(param_1 + 0x40);
  uStack_120 = *(undefined8 *)(param_1 + 0x48);
  local_f8 = *(undefined8 *)(param_1 + 0x70);
  uStack_f0 = *(undefined8 *)(param_1 + 0x78);
  local_108 = *(undefined8 *)(param_1 + 0x60);
  uStack_100 = *(undefined8 *)(param_1 + 0x68);
  local_d8 = *(undefined8 *)(param_1 + 0x90);
  uStack_d0 = *(undefined8 *)(param_1 + 0x98);
  local_e8 = *(undefined8 *)(param_1 + 0x80);
  uStack_e0 = *(undefined8 *)(param_1 + 0x88);
  local_b8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xb8);
  local_c8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_c0 = *(undefined8 *)(param_1 + 0xa8);
  local_a8[0] = param_3;
  local_80 = param_4;
  Scaleform::Render::Matrix4x4<double>::MultiplyMatrix_NonOpt
            ((Matrix4x4<double> *)(param_1 + 0x40),(Matrix4x4<double> *)&local_128,
             (Matrix4x4<double> *)local_a8);
  plVar1 = *(longlong **)(param_1 + 0xc0);
  if (plVar1 != (longlong *)0x0) {
    local_148 = (float)*(double *)(param_1 + 0x60);
    fStack_144 = (float)*(double *)(param_1 + 0x68);
    fStack_140 = (float)*(double *)(param_1 + 0x70);
    fStack_13c = (float)*(double *)(param_1 + 0x78);
    local_138 = (float)*(double *)(param_1 + 0x80);
    fStack_134 = (float)*(double *)(param_1 + 0x88);
    fStack_130 = (float)*(double *)(param_1 + 0x90);
    fStack_12c = (float)*(double *)(param_1 + 0x98);
    local_158 = CONCAT44((float)*(double *)(param_1 + 0x48),(float)*(double *)(param_1 + 0x40));
    uStack_150 = CONCAT44((float)*(double *)(param_1 + 0x58),(float)*(double *)(param_1 + 0x50));
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_158);
  }
  return;
}



// FUNCTION 143546290 FUN_143546290 body=484 status=ok
// SIG undefined FUN_143546290(void)

void FUN_143546290(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  undefined8 local_158;
  undefined8 uStack_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined8 local_128 [3];
  undefined8 local_110;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  _guard_xfg_dispatch_icall_nop(local_128,0,0x80);
  local_98 = *(undefined8 *)(param_1 + 0x50);
  uStack_90 = *(undefined8 *)(param_1 + 0x58);
  local_128[0] = 0x3ff0000000000000;
  local_100 = 0x3ff0000000000000;
  local_d8 = 0x3ff0000000000000;
  local_b0 = 0x3ff0000000000000;
  local_d0 = param_5;
  local_a8 = *(undefined8 *)(param_1 + 0x40);
  uStack_a0 = *(undefined8 *)(param_1 + 0x48);
  local_78 = *(undefined8 *)(param_1 + 0x70);
  uStack_70 = *(undefined8 *)(param_1 + 0x78);
  local_88 = *(undefined8 *)(param_1 + 0x60);
  uStack_80 = *(undefined8 *)(param_1 + 0x68);
  local_58 = *(undefined8 *)(param_1 + 0x90);
  uStack_50 = *(undefined8 *)(param_1 + 0x98);
  local_68 = *(undefined8 *)(param_1 + 0x80);
  uStack_60 = *(undefined8 *)(param_1 + 0x88);
  local_38 = *(undefined8 *)(param_1 + 0xb0);
  uStack_30 = *(undefined8 *)(param_1 + 0xb8);
  local_48 = *(undefined8 *)(param_1 + 0xa0);
  uStack_40 = *(undefined8 *)(param_1 + 0xa8);
  local_110 = param_3;
  local_f0 = param_4;
  Scaleform::Render::Matrix4x4<double>::MultiplyMatrix_NonOpt
            ((Matrix4x4<double> *)(param_1 + 0x40),(Matrix4x4<double> *)&local_a8,
             (Matrix4x4<double> *)local_128);
  plVar1 = *(longlong **)(param_1 + 0xc0);
  if (plVar1 != (longlong *)0x0) {
    local_148 = (float)*(double *)(param_1 + 0x60);
    fStack_144 = (float)*(double *)(param_1 + 0x68);
    fStack_140 = (float)*(double *)(param_1 + 0x70);
    fStack_13c = (float)*(double *)(param_1 + 0x78);
    local_138 = (float)*(double *)(param_1 + 0x80);
    fStack_134 = (float)*(double *)(param_1 + 0x88);
    fStack_130 = (float)*(double *)(param_1 + 0x90);
    fStack_12c = (float)*(double *)(param_1 + 0x98);
    local_158 = CONCAT44((float)*(double *)(param_1 + 0x48),(float)*(double *)(param_1 + 0x40));
    uStack_150 = CONCAT44((float)*(double *)(param_1 + 0x58),(float)*(double *)(param_1 + 0x50));
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_158);
  }
  return;
}



// FUNCTION 143546480 FUN_143546480 body=68 status=ok
// SIG undefined FUN_143546480(void)

void FUN_143546480(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x3e9,uVar2);
  FUN_1435cbdb0(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435464d0 FUN_1435464d0 body=421 status=ok
// SIG undefined FUN_1435464d0(void)

void FUN_1435464d0(longlong param_1,ulonglong *param_2,longlong param_3)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined1 local_48 [8];
  longlong local_40;
  
  if (param_3 == 0) {
    uVar17 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar19 = FUN_1435c8e40(local_48,0x3f1,uVar17);
    FUN_1435cbe70(uVar17,uVar19);
    piVar1 = (int *)(local_40 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    dVar2 = *(double *)(param_3 + 0x40);
    dVar3 = *(double *)(param_3 + 0x50);
    dVar4 = *(double *)(param_1 + 0x40);
    dVar5 = *(double *)(param_1 + 0x50);
    uVar17 = *(undefined8 *)(param_3 + 0x28);
    dVar6 = *(double *)(param_3 + 0x48);
    dVar7 = *(double *)(param_1 + 0x48);
    dVar8 = *(double *)(param_1 + 0x68);
    dVar9 = *(double *)(param_1 + 0x88);
    dVar10 = *(double *)(param_1 + 0x80);
    dVar11 = *(double *)(param_1 + 0x60);
    dVar12 = *(double *)(param_1 + 0x70);
    dVar13 = *(double *)(param_1 + 0x90);
    dVar14 = *(double *)(param_1 + 0x58);
    dVar15 = *(double *)(param_1 + 0x78);
    dVar16 = *(double *)(param_1 + 0x98);
    puVar20 = (undefined8 *)FUN_1435b5bc0(uVar17);
    if (puVar20 != (undefined8 *)0x0) {
      UInterpTrackInst::UInterpTrackInst(puVar20,uVar17);
      *puVar20 = &PTR_FUN_145b33fb8;
      puVar20[8] = 0;
      puVar20[9] = 0;
      puVar20[10] = 0;
      puVar20[0xb] = 0;
    }
    puVar20[8] = dVar6 * dVar7 + dVar2 * dVar4 + dVar3 * dVar5 + dVar14;
    puVar20[9] = dVar6 * dVar8 + dVar2 * dVar11 + dVar3 * dVar12 + dVar15;
    puVar20[10] = dVar6 * dVar9 + dVar2 * dVar10 + dVar3 * dVar13 + dVar16;
    puVar18 = (undefined8 *)*param_2;
    if (puVar20 != puVar18) {
      if (puVar18 != (undefined8 *)0x0) {
        if (((ulonglong)puVar18 & 1) != 0) {
          *param_2 = (longlong)puVar18 - 1;
          *param_2 = (ulonglong)puVar20;
          return;
        }
        if ((*(uint *)(puVar18 + 1) & 0x3fffff) != 0) {
          *(uint *)(puVar18 + 1) = *(uint *)(puVar18 + 1) - 1;
          FUN_1434ef880();
        }
      }
      *param_2 = (ulonglong)puVar20;
    }
  }
  return;
}



// FUNCTION 143546680 FUN_143546680 body=2167 status=ok
// SIG undefined FUN_143546680(void)

void FUN_143546680(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 local_res20 [8];
  undefined1 local_1c8;
  undefined1 local_1c7 [2];
  undefined1 local_1c5;
  undefined1 local_1c4;
  undefined1 local_1c3;
  undefined1 local_1c2;
  undefined1 local_1c1;
  uint local_1c0 [2];
  undefined8 local_1b8;
  undefined8 local_1b0;
  int local_1a0 [2];
  uint local_198 [2];
  undefined8 local_190;
  double local_188;
  undefined8 local_178;
  uint local_170 [2];
  undefined8 local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  uint local_150 [2];
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  uint local_130 [2];
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  double local_110;
  double local_108;
  double local_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [8];
  longlong local_c0;
  undefined1 local_b8 [8];
  longlong local_b0;
  undefined1 local_a8 [8];
  longlong local_a0;
  undefined1 local_98 [8];
  longlong local_90;
  undefined1 local_88 [8];
  longlong local_80;
  undefined1 local_78 [8];
  longlong local_70;
  
  uVar12 = 0;
  local_130[0] = 0;
  local_128 = 0;
  local_150[0] = 0;
  local_148 = 0;
  local_170[0] = 0;
  local_168 = 0;
  Scaleform::GFx::AS3::Instances::fl_events::MouseEvent::deltaGet(param_3,local_1a0);
  local_178 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_4 + 0x28) + 0x98) + 0x228);
  if (0 < local_1a0[0]) {
    lVar9 = param_4 + 0x40;
    do {
      uVar11 = (uint)uVar12;
      if (uVar11 < *(uint *)(param_3 + 0x60)) {
        uVar2 = *(undefined8 *)(*(longlong *)(param_3 + 0x58) + uVar12 * 8);
        if (9 < ((byte)local_130[0] & 0x1f)) {
          if ((local_130[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_130);
          }
          else {
            FUN_143592150();
          }
        }
        local_f8._0_4_ = (undefined4)uVar2;
        local_f8._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
        local_130[0] = local_130[0] & 0xffffffe4 | 4;
        local_120 = (undefined4)local_f8;
        uStack_11c = local_f8._4_4_;
        uStack_118 = uStack_f0;
        uStack_114 = uStack_ec;
        local_f8 = uVar2;
      }
      pcVar5 = (char *)FUN_143590af0(local_130,local_res20,&local_108);
      if (*pcVar5 == '\0') {
        local_108 = 0.0;
      }
      uVar13 = uVar11 + 1;
      uVar8 = (ulonglong)uVar13;
      if (uVar13 < *(uint *)(param_3 + 0x60)) {
        uVar2 = *(undefined8 *)(*(longlong *)(param_3 + 0x58) + uVar8 * 8);
        if (9 < ((byte)local_150[0] & 0x1f)) {
          if ((local_150[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_150);
          }
          else {
            FUN_143592150();
          }
        }
        local_e8._0_4_ = (undefined4)uVar2;
        local_e8._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
        local_150[0] = local_150[0] & 0xffffffe4 | 4;
        local_140 = (undefined4)local_e8;
        uStack_13c = local_e8._4_4_;
        uStack_138 = uStack_e0;
        uStack_134 = uStack_dc;
        local_e8 = uVar2;
      }
      pcVar5 = (char *)FUN_143590af0(local_150,&local_1c8,&local_100);
      if (*pcVar5 == '\0') {
        local_100 = 0.0;
      }
      uVar10 = uVar11 + 2;
      if (uVar10 < *(uint *)(param_3 + 0x60)) {
        uVar2 = *(undefined8 *)(*(longlong *)(param_3 + 0x58) + (ulonglong)uVar10 * 8);
        if (9 < ((byte)local_170[0] & 0x1f)) {
          if ((local_170[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_170);
          }
          else {
            FUN_143592150();
          }
        }
        local_d8._0_4_ = (undefined4)uVar2;
        local_d8._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
        local_170[0] = local_170[0] & 0xffffffe4 | 4;
        local_160 = (undefined4)local_d8;
        uStack_15c = local_d8._4_4_;
        uStack_158 = uStack_d0;
        uStack_154 = uStack_cc;
        local_d8 = uVar2;
      }
      pcVar5 = (char *)FUN_143590af0(local_170,local_1c7,&local_110);
      if (*pcVar5 == '\0') {
        local_110 = 0.0;
      }
      local_198[0] = 4;
      local_190 = 0;
      local_188 = local_108 * *(double *)(param_1 + 0x40) + local_100 * *(double *)(param_1 + 0x48)
                  + local_110 * *(double *)(param_1 + 0x50) + *(double *)(param_1 + 0x58);
      dVar3 = local_100 * *(double *)(param_1 + 0x68) + local_108 * *(double *)(param_1 + 0x60) +
              local_110 * *(double *)(param_1 + 0x70) + *(double *)(param_1 + 0x78);
      dVar4 = local_100 * *(double *)(param_1 + 0x88) + local_108 * *(double *)(param_1 + 0x80) +
              local_110 * *(double *)(param_1 + 0x90) + *(double *)(param_1 + 0x98);
      if ((*(char *)(param_4 + 0x48) == '\0') || (uVar11 < *(uint *)(param_4 + 0x60))) {
        if (*(uint *)(param_4 + 0x60) < uVar11) {
          uVar2 = *(undefined8 *)(param_4 + 0x50);
          FUN_1435c8e40(local_b8,0x465,uVar2);
          FUN_1435cbdf0(uVar2);
          piVar1 = (int *)(local_b0 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else {
          if (uVar11 == *(uint *)(param_4 + 0x60)) {
            pcVar5 = (char *)FUN_14361f950(lVar9);
            if (*pcVar5 == '\0') goto LAB_143546a89;
            uVar7 = *(ulonglong *)(param_4 + 0x60);
            FUN_1433ab800(param_4 + 0x58);
            if (uVar7 < uVar13) {
              if (3 < uVar13 - uVar7) {
                do {
                  *(undefined8 *)(*(longlong *)(param_4 + 0x58) + uVar7 * 8) = 0;
                  *(undefined8 *)(*(longlong *)(param_4 + 0x58) + 8 + uVar7 * 8) = 0;
                  *(undefined8 *)(*(longlong *)(param_4 + 0x58) + 0x10 + uVar7 * 8) = 0;
                  *(undefined8 *)(*(longlong *)(param_4 + 0x58) + 0x18 + uVar7 * 8) = 0;
                  uVar7 = uVar7 + 4;
                } while (uVar7 < uVar8 - 3);
              }
              for (; uVar7 < uVar13; uVar7 = uVar7 + 1) {
                *(undefined8 *)(*(longlong *)(param_4 + 0x58) + uVar7 * 8) = 0;
              }
            }
          }
          local_1c0[0] = 0;
          local_1b8 = 0;
          pcVar5 = (char *)FUN_14361fbd0(lVar9,&local_1c5,local_178,local_198,local_1c0);
          if (*pcVar5 != '\0') {
            *(undefined8 *)(*(longlong *)(param_4 + 0x58) + uVar12 * 8) = local_1b0;
          }
          if (9 < ((byte)local_1c0[0] & 0x1f)) {
            if ((local_1c0[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_1c0);
            }
            else {
              FUN_143592150();
            }
          }
        }
      }
      else {
        uVar2 = *(undefined8 *)(param_4 + 0x50);
        FUN_1435c8e40(local_c8,0x465,uVar2);
        FUN_1435cbdf0(uVar2);
        piVar1 = (int *)(local_c0 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
LAB_143546a89:
      if (9 < ((byte)local_198[0] & 0x1f)) {
        if ((local_198[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_198);
        }
        else {
          FUN_143592150();
        }
      }
      local_198[0] = 4;
      local_190 = 0;
      local_188 = dVar3;
      if ((*(char *)(param_4 + 0x48) == '\0') || (uVar13 < *(uint *)(param_4 + 0x60))) {
        if (*(uint *)(param_4 + 0x60) < uVar13) {
          uVar2 = *(undefined8 *)(param_4 + 0x50);
          uVar6 = FUN_1435c8e40(local_98,0x465,uVar2);
          FUN_1435cbdf0(uVar2,uVar6);
          piVar1 = (int *)(local_90 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else {
          if (uVar13 == *(uint *)(param_4 + 0x60)) {
            uVar12 = (ulonglong)(uVar11 + 2);
            pcVar5 = (char *)FUN_14361f950(lVar9,&local_1c4);
            if (*pcVar5 == '\0') goto LAB_143546c35;
            uVar7 = *(ulonglong *)(param_4 + 0x60);
            FUN_1433ab800(param_4 + 0x58);
            if (uVar7 < uVar12) {
              if (3 < (uVar11 + 2) - uVar7) {
                do {
                  *(undefined8 *)(*(longlong *)(param_4 + 0x58) + uVar7 * 8) = 0;
                  *(undefined8 *)(*(longlong *)(param_4 + 0x58) + 8 + uVar7 * 8) = 0;
                  *(undefined8 *)(*(longlong *)(param_4 + 0x58) + 0x10 + uVar7 * 8) = 0;
                  *(undefined8 *)(*(longlong *)(param_4 + 0x58) + 0x18 + uVar7 * 8) = 0;
                  uVar7 = uVar7 + 4;
                } while (uVar7 < uVar12 - 3);
              }
              for (; uVar7 < uVar12; uVar7 = uVar7 + 1) {
                *(undefined8 *)(*(longlong *)(param_4 + 0x58) + uVar7 * 8) = 0;
              }
            }
          }
          local_1c0[0] = 0;
          local_1b8 = 0;
          pcVar5 = (char *)FUN_14361fbd0(lVar9,&local_1c3,local_178,local_198,local_1c0);
          if (*pcVar5 != '\0') {
            *(undefined8 *)(*(longlong *)(param_4 + 0x58) + uVar8 * 8) = local_1b0;
          }
          if (9 < ((byte)local_1c0[0] & 0x1f)) {
            if ((local_1c0[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_1c0);
            }
            else {
              FUN_143592150();
            }
          }
        }
      }
      else {
        uVar2 = *(undefined8 *)(param_4 + 0x50);
        uVar6 = FUN_1435c8e40(local_a8,0x465,uVar2);
        FUN_1435cbdf0(uVar2,uVar6);
        piVar1 = (int *)(local_a0 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
LAB_143546c35:
      if (9 < ((byte)local_198[0] & 0x1f)) {
        if ((local_198[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_198);
        }
        else {
          FUN_143592150();
        }
      }
      local_198[0] = 4;
      local_190 = 0;
      local_188 = dVar4;
      if ((*(char *)(param_4 + 0x48) == '\0') || (uVar10 < *(uint *)(param_4 + 0x60))) {
        if (*(uint *)(param_4 + 0x60) < uVar10) {
          uVar2 = *(undefined8 *)(param_4 + 0x50);
          uVar6 = FUN_1435c8e40(local_78,0x465,uVar2);
          FUN_1435cbdf0(uVar2,uVar6);
          piVar1 = (int *)(local_70 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else {
          if (uVar10 == *(uint *)(param_4 + 0x60)) {
            uVar12 = (ulonglong)(uVar11 + 3);
            pcVar5 = (char *)FUN_14361f950(lVar9,&local_1c2);
            if (*pcVar5 == '\0') goto LAB_143546de7;
            uVar8 = *(ulonglong *)(param_4 + 0x60);
            FUN_1433ab800(param_4 + 0x58,uVar12);
            if (uVar8 < uVar12) {
              if (3 < (uVar11 + 3) - uVar8) {
                do {
                  *(undefined8 *)(*(longlong *)(param_4 + 0x58) + uVar8 * 8) = 0;
                  *(undefined8 *)(*(longlong *)(param_4 + 0x58) + 8 + uVar8 * 8) = 0;
                  *(undefined8 *)(*(longlong *)(param_4 + 0x58) + 0x10 + uVar8 * 8) = 0;
                  *(undefined8 *)(*(longlong *)(param_4 + 0x58) + 0x18 + uVar8 * 8) = 0;
                  uVar8 = uVar8 + 4;
                } while (uVar8 < uVar12 - 3);
              }
              for (; uVar8 < uVar12; uVar8 = uVar8 + 1) {
                *(undefined8 *)(*(longlong *)(param_4 + 0x58) + uVar8 * 8) = 0;
              }
            }
          }
          local_1c0[0] = 0;
          local_1b8 = 0;
          pcVar5 = (char *)FUN_14361fbd0(lVar9,&local_1c1,local_178,local_198,local_1c0);
          if (*pcVar5 != '\0') {
            *(undefined8 *)(*(longlong *)(param_4 + 0x58) + (ulonglong)uVar10 * 8) = local_1b0;
          }
          if (9 < ((byte)local_1c0[0] & 0x1f)) {
            if ((local_1c0[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_1c0);
            }
            else {
              FUN_143592150();
            }
          }
        }
      }
      else {
        uVar2 = *(undefined8 *)(param_4 + 0x50);
        uVar6 = FUN_1435c8e40(local_88,0x465,uVar2);
        FUN_1435cbdf0(uVar2,uVar6);
        piVar1 = (int *)(local_80 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
LAB_143546de7:
      if (9 < ((byte)local_198[0] & 0x1f)) {
        if ((local_198[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_198);
        }
        else {
          FUN_143592150();
        }
      }
      uVar12 = (ulonglong)(uVar11 + 3);
    } while ((int)(uVar11 + 3) < local_1a0[0]);
  }
  if (9 < ((byte)local_170[0] & 0x1f)) {
    if ((local_170[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_170);
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)local_150[0] & 0x1f)) {
    if ((local_150[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_150);
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)local_130[0] & 0x1f)) {
    if ((local_130[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_130);
  }
  return;
}



// FUNCTION 143546f00 FUN_143546f00 body=291 status=ok
// SIG undefined FUN_143546f00(void)

void FUN_143546f00(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  Scaleform::Render::Matrix4x4<double>::Transpose((Matrix4x4<double> *)(param_1 + 0x40));
  plVar1 = *(longlong **)(param_1 + 0xc0);
  if (plVar1 != (longlong *)0x0) {
    local_28 = (float)*(double *)(param_1 + 0x60);
    fStack_24 = (float)*(double *)(param_1 + 0x68);
    fStack_20 = (float)*(double *)(param_1 + 0x70);
    fStack_1c = (float)*(double *)(param_1 + 0x78);
    local_18 = (float)*(double *)(param_1 + 0x80);
    fStack_14 = (float)*(double *)(param_1 + 0x88);
    fStack_10 = (float)*(double *)(param_1 + 0x90);
    fStack_c = (float)*(double *)(param_1 + 0x98);
    local_38 = CONCAT44((float)*(double *)(param_1 + 0x48),(float)*(double *)(param_1 + 0x40));
    uStack_30 = CONCAT44((float)*(double *)(param_1 + 0x58),(float)*(double *)(param_1 + 0x50));
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_38);
  }
  return;
}



// FUNCTION 143547030 FUN_143547030 body=30 status=ok
// SIG undefined FUN_143547030(void)

undefined8 * FUN_143547030(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_143542a60();
  return param_2;
}



// FUNCTION 143547060 FUN_143547060 body=30 status=ok
// SIG undefined FUN_143547060(void)

undefined8 * FUN_143547060(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_143542cd0();
  return param_2;
}



// FUNCTION 143547090 FUN_143547090 body=90 status=ok
// SIG undefined FUN_143547090(void)

undefined8 * FUN_143547090(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  *param_2 = 0;
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x3e9,uVar2);
  FUN_1435cbdb0(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return param_2;
}



// FUNCTION 1435470f0 FUN_1435470f0 body=30 status=ok
// SIG undefined FUN_1435470f0(void)

undefined8 * FUN_1435470f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_143543cf0();
  return param_2;
}



// FUNCTION 143547120 FUN_143547120 body=30 status=ok
// SIG undefined FUN_143547120(void)

undefined8 * FUN_143547120(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1435464d0();
  return param_2;
}



// FUNCTION 143547150 FUN_143547150 body=33 status=ok
// SIG undefined FUN_143547150(void)

undefined8 * FUN_143547150(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b342a8;
  return param_1;
}



// FUNCTION 143547180 FUN_143547180 body=141 status=ok
// SIG undefined FUN_143547180(void)

void FUN_143547180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_143542620(lVar1,param_3);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,uVar2);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143547220 FUN_143547220 body=33 status=ok
// SIG undefined FUN_143547220(void)

undefined8 * FUN_143547220(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143547250 FUN_143547250 body=214 status=ok
// SIG undefined FUN_143547250(void)

undefined8 * FUN_143547250(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b31ca0);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b31ca0);
    *puVar2 = &PTR_FUN_145b342a8;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143547330 UKWIllustDemoOrderDataAsset body=59 status=ok
// SIG undefined UKWIllustDemoOrderDataAsset(void)

undefined8 * UKWIllustDemoOrderDataAsset::UKWIllustDemoOrderDataAsset(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b34338;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 1435473c0 GetMatrix body=61 status=ok
// SIG undefined GetMatrix(void)

undefined8 *
Scaleform::GFx::AS3::Instances::fl_geom::Matrix::GetMatrix(longlong param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[6] = 0;
  *param_2 = *(undefined8 *)(param_1 + 0x40);
  param_2[4] = *(undefined8 *)(param_1 + 0x48);
  param_2[1] = *(undefined8 *)(param_1 + 0x50);
  param_2[5] = *(undefined8 *)(param_1 + 0x58);
  param_2[3] = *(undefined8 *)(param_1 + 0x60);
  param_2[7] = *(undefined8 *)(param_1 + 0x68);
  return param_2;
}



// FUNCTION 143547410 FUN_143547410 body=95 status=ok
// SIG undefined FUN_143547410(void)

float * FUN_143547410(longlong param_1,float *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = *(double *)(param_1 + 0x40);
  dVar2 = *(double *)(param_1 + 0x48);
  param_2[2] = 0.0;
  param_2[6] = 0.0;
  *param_2 = (float)dVar1;
  dVar1 = *(double *)(param_1 + 0x50);
  param_2[4] = (float)dVar2;
  dVar2 = *(double *)(param_1 + 0x58);
  param_2[1] = (float)dVar1;
  dVar1 = *(double *)(param_1 + 0x60);
  param_2[5] = (float)dVar2;
  dVar2 = *(double *)(param_1 + 0x68);
  param_2[3] = (float)dVar1;
  param_2[7] = (float)dVar2;
  return param_2;
}



// FUNCTION 143547480 FUN_143547480 body=279 status=ok
// SIG undefined FUN_143547480(void)

void FUN_143547480(longlong param_1,uint param_2,longlong param_3)

{
  char *pcVar1;
  undefined1 local_res10 [8];
  
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x58) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (param_2 != 0) {
    pcVar1 = (char *)FUN_143590af0(param_3,local_res10,param_1 + 0x40);
    if ((*pcVar1 != '\0') && (1 < param_2)) {
      pcVar1 = (char *)FUN_143590af0(param_3 + 0x20,local_res10,(undefined8 *)(param_1 + 0x48));
      if ((*pcVar1 != '\0') && (2 < param_2)) {
        pcVar1 = (char *)FUN_143590af0(param_3 + 0x40,local_res10,param_1 + 0x50);
        if ((*pcVar1 != '\0') && (3 < param_2)) {
          pcVar1 = (char *)FUN_143590af0(param_3 + 0x60,local_res10,param_1 + 0x58);
          if ((*pcVar1 != '\0') && (4 < param_2)) {
            pcVar1 = (char *)FUN_143590af0(param_3 + 0x80,local_res10,param_1 + 0x60);
            if ((*pcVar1 != '\0') && (5 < param_2)) {
              FUN_143590af0(param_3 + 0xa0,local_res10,param_1 + 0x68);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1435475a0 FUN_1435475a0 body=288 status=ok
// SIG undefined FUN_1435475a0(void)

void FUN_1435475a0(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined4 local_c8 [2];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  uint local_28 [4];
  undefined8 local_18;
  
  local_b8 = *(undefined8 *)(param_1 + 0x40);
  local_98 = *(undefined8 *)(param_1 + 0x48);
  local_78 = *(undefined8 *)(param_1 + 0x50);
  lVar3 = 6;
  local_c0 = 0;
  local_a0 = 0;
  local_c8[0] = 4;
  local_a8 = 4;
  local_88 = 4;
  local_58 = *(undefined8 *)(param_1 + 0x58);
  local_38 = *(undefined8 *)(param_1 + 0x60);
  local_18 = *(undefined8 *)(param_1 + 0x68);
  local_80 = 0;
  local_60 = 0;
  local_40 = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_68 = 4;
  local_48 = 4;
  local_28[0] = 4;
  FUN_1435ccdc0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_res8,param_2,
                "flash.geom.Matrix",6,local_c8);
  puVar2 = &stack0xfffffffffffffff8;
  do {
    puVar1 = (uint *)(puVar2 + -0x20);
    puVar2 = puVar2 + -0x20;
    lVar3 = lVar3 + -1;
    if (9 < ((byte)*puVar1 & 0x1f)) {
      if ((*puVar1 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar2);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar3 != 0);
  return;
}



// FUNCTION 1435476d0 FUN_1435476d0 body=370 status=ok
// SIG undefined FUN_1435476d0(void)

void FUN_1435476d0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 local_78 [8];
  longlong local_70;
  
  if (param_3 == 0) {
    uVar13 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar14 = FUN_1435c8e40(local_78,0x3f1,uVar13);
    FUN_1435cbe70(uVar13,uVar14);
    piVar1 = (int *)(local_70 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    dVar2 = *(double *)(param_1 + 0x40);
    dVar3 = *(double *)(param_3 + 0x40);
    dVar4 = *(double *)(param_1 + 0x50);
    dVar5 = *(double *)(param_1 + 0x60);
    dVar6 = *(double *)(param_3 + 0x50);
    dVar7 = *(double *)(param_3 + 0x58);
    dVar8 = *(double *)(param_3 + 0x48);
    dVar9 = *(double *)(param_3 + 0x48);
    dVar10 = *(double *)(param_3 + 0x48);
    dVar11 = *(double *)(param_3 + 0x60);
    dVar12 = *(double *)(param_3 + 0x68);
    *(double *)(param_1 + 0x40) = dVar6 * *(double *)(param_1 + 0x48) + dVar3 * dVar2;
    *(double *)(param_1 + 0x60) = dVar6 * *(double *)(param_1 + 0x68) + dVar3 * dVar5 + dVar11;
    *(double *)(param_1 + 0x68) = dVar7 * *(double *)(param_1 + 0x68) + dVar5 * dVar9 + dVar12;
    *(double *)(param_1 + 0x48) = dVar7 * *(double *)(param_1 + 0x48) + dVar2 * dVar8;
    *(double *)(param_1 + 0x50) = dVar6 * *(double *)(param_1 + 0x58) + dVar3 * dVar4;
    *(double *)(param_1 + 0x58) = dVar7 * *(double *)(param_1 + 0x58) + dVar4 * dVar10;
  }
  return;
}



// FUNCTION 143547850 FUN_143547850 body=246 status=ok
// SIG undefined FUN_143547850(void)

void FUN_143547850(longlong param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,double param_6,double param_7)

{
  double local_68;
  double local_60;
  undefined8 local_58;
  double local_50;
  double local_48;
  double local_40;
  undefined8 local_38;
  double local_30;
  
  local_48 = *(double *)(param_1 + 0x48);
  local_58 = 0;
  local_38 = 0;
  local_68 = *(double *)(param_1 + 0x40);
  local_40 = *(double *)(param_1 + 0x58);
  local_60 = *(double *)(param_1 + 0x50);
  local_30 = *(double *)(param_1 + 0x68);
  local_50 = *(double *)(param_1 + 0x60);
  FUN_143553280(&local_68,param_5);
  *(double *)(param_1 + 0x60) = local_50 * param_3 + param_6;
  *(double *)(param_1 + 0x68) = local_30 * param_4 + param_7;
  *(double *)(param_1 + 0x40) = local_68 * param_3;
  *(double *)(param_1 + 0x48) = local_48 * param_4;
  *(double *)(param_1 + 0x50) = local_60 * param_3;
  *(double *)(param_1 + 0x58) = local_40 * param_4;
  return;
}



// FUNCTION 143547950 FUN_143547950 body=348 status=ok
// SIG undefined FUN_143547950(void)

void FUN_143547950(longlong param_1,undefined8 param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7)

{
  double dVar1;
  double dVar2;
  double local_98;
  double dStack_90;
  undefined8 local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  undefined8 local_68;
  double dStack_60;
  
  local_98 = 1.0;
  dStack_90 = 0.0;
  local_88 = 0;
  dStack_80 = 0.0;
  local_78 = 0.0;
  dStack_70 = 1.0;
  local_68 = 0;
  dStack_60 = 0.0;
  FUN_143553280(&local_98,SUB84((double)(float)param_5,0));
  dVar2 = (double)((float)param_4 * 0.00061035156);
  dVar1 = (double)((float)param_3 * 0.00061035156);
  *(double *)(param_1 + 0x40) = local_98 * dVar1;
  *(double *)(param_1 + 0x50) = dStack_90 * dVar1;
  *(double *)(param_1 + 0x60) = dStack_80 * dVar1 + (double)((float)param_3 * 0.5 + (float)param_6);
  *(double *)(param_1 + 0x48) = local_78 * dVar2;
  *(double *)(param_1 + 0x58) = dStack_70 * dVar2;
  *(double *)(param_1 + 0x68) = dStack_60 * dVar2 + (double)((float)param_4 * 0.5 + (float)param_7);
  return;
}



// FUNCTION 143547ac0 FUN_143547ac0 body=304 status=ok
// SIG undefined FUN_143547ac0(void)

void FUN_143547ac0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 local_res18 [16];
  undefined1 local_58 [8];
  longlong local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  double local_38;
  uint local_28 [4];
  double local_18;
  
  if (param_3 == 0) {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_58,0x3f1,uVar3);
    FUN_1435cbe70(uVar3,uVar4);
    piVar1 = (int *)(local_50 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    local_40 = 0;
    local_28[2] = 0;
    local_28[3] = 0;
    local_48[0] = 4;
    local_28[0] = 4;
    local_38 = *(double *)(param_3 + 0x48) * *(double *)(param_1 + 0x50) +
               *(double *)(param_3 + 0x40) * *(double *)(param_1 + 0x40);
    lVar6 = 2;
    local_18 = *(double *)(param_3 + 0x48) * *(double *)(param_1 + 0x58) +
               *(double *)(param_3 + 0x40) * *(double *)(param_1 + 0x48);
    FUN_1435ccdc0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_res18,param_2,
                  "flash.geom.Point",2,local_48);
    puVar5 = &stack0xfffffffffffffff8;
    do {
      puVar2 = (uint *)(puVar5 + -0x20);
      puVar5 = puVar5 + -0x20;
      lVar6 = lVar6 + -1;
      if (9 < ((byte)*puVar2 & 0x1f)) {
        if ((*puVar2 >> 9 & 1) == 0) {
          FUN_1435920c0(puVar5);
        }
        else {
          FUN_143592150();
        }
      }
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 143547c30 FUN_143547c30 body=240 status=ok
// SIG undefined FUN_143547c30(void)

void FUN_143547c30(longlong param_1)

{
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
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_98 = *(undefined8 *)(param_1 + 0x40);
  local_90 = *(undefined8 *)(param_1 + 0x50);
  local_80 = *(undefined8 *)(param_1 + 0x60);
  local_78 = *(undefined8 *)(param_1 + 0x48);
  local_70 = *(undefined8 *)(param_1 + 0x58);
  local_60 = *(undefined8 *)(param_1 + 0x68);
  local_88 = 0;
  local_68 = 0;
  local_48 = 0;
  local_28 = 0;
  local_58 = local_98;
  local_50 = local_90;
  local_40 = local_80;
  local_38 = local_78;
  local_30 = local_70;
  local_20 = local_60;
  Scaleform::Render::Matrix2x4<double>::SetInverse
            ((Matrix2x4<double> *)&local_98,(Matrix2x4<double> *)&local_58);
  *(undefined8 *)(param_1 + 0x40) = local_98;
  *(undefined8 *)(param_1 + 0x48) = local_78;
  *(undefined8 *)(param_1 + 0x50) = local_90;
  *(undefined8 *)(param_1 + 0x58) = local_70;
  *(undefined8 *)(param_1 + 0x60) = local_80;
  *(undefined8 *)(param_1 + 0x68) = local_60;
  return;
}



// FUNCTION 143547d30 FUN_143547d30 body=168 status=ok
// SIG undefined FUN_143547d30(void)

void FUN_143547d30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_48 = *(undefined8 *)(param_1 + 0x40);
  local_40 = *(undefined8 *)(param_1 + 0x50);
  local_30 = *(undefined8 *)(param_1 + 0x60);
  local_20 = *(undefined8 *)(param_1 + 0x58);
  local_28 = *(undefined8 *)(param_1 + 0x48);
  local_10 = *(undefined8 *)(param_1 + 0x68);
  local_38 = 0;
  local_18 = 0;
  FUN_143553280(&local_48,param_3);
  *(undefined8 *)(param_1 + 0x40) = local_48;
  *(undefined8 *)(param_1 + 0x48) = local_28;
  *(undefined8 *)(param_1 + 0x50) = local_40;
  *(undefined8 *)(param_1 + 0x58) = local_20;
  *(undefined8 *)(param_1 + 0x60) = local_30;
  *(undefined8 *)(param_1 + 0x68) = local_10;
  return;
}



// FUNCTION 143547de0 FUN_143547de0 body=114 status=ok
// SIG undefined FUN_143547de0(void)

void FUN_143547de0(longlong param_1,undefined8 param_2,double param_3,double param_4)

{
  *(double *)(param_1 + 0x60) = *(double *)(param_1 + 0x60) * param_3;
  *(double *)(param_1 + 0x68) = *(double *)(param_1 + 0x68) * param_4;
  *(double *)(param_1 + 0x40) = *(double *)(param_1 + 0x40) * param_3;
  *(double *)(param_1 + 0x48) = *(double *)(param_1 + 0x48) * param_4;
  *(double *)(param_1 + 0x50) = *(double *)(param_1 + 0x50) * param_3;
  *(double *)(param_1 + 0x58) = *(double *)(param_1 + 0x58) * param_4;
  return;
}



// FUNCTION 143547e60 FUN_143547e60 body=2019 status=ok
// SIG undefined FUN_143547e60(void)

void FUN_143547e60(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong local_res8;
  undefined8 local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong local_208;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  uint local_108 [2];
  undefined8 local_100;
  undefined8 local_f8;
  uint local_e8 [2];
  undefined8 local_e0;
  undefined8 local_d8;
  uint local_c8 [2];
  undefined8 local_c0;
  undefined8 local_b8;
  uint local_a8 [2];
  undefined8 local_a0;
  undefined8 local_98;
  uint local_88 [2];
  undefined8 local_80;
  undefined8 local_78;
  uint local_68 [2];
  undefined8 local_60;
  undefined8 local_58;
  
  local_res10 = param_2;
  local_1c8 = FUN_143360950(*(undefined8 *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218)
                            ,&DAT_145b12c80,1);
  *(int *)(local_1c8 + 0x18) = *(int *)(local_1c8 + 0x18) + 1;
  local_58 = *(undefined8 *)(param_1 + 0x68);
  local_68[0] = 4;
  local_60 = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_1d0 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x218),&DAT_145b345b8,3,0)
  ;
  *(int *)(local_1d0 + 0x18) = *(int *)(local_1d0 + 0x18) + 1;
  local_1d8 = FUN_143360950(*(undefined8 *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218)
                            ,&DAT_145b036e8,2,0);
  *(int *)(local_1d8 + 0x18) = *(int *)(local_1d8 + 0x18) + 1;
  local_78 = *(undefined8 *)(param_1 + 0x60);
  local_88[0] = 4;
  local_80 = 0;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_1e0 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),&DAT_145b345b4,3,0)
  ;
  *(int *)(local_1e0 + 0x18) = *(int *)(local_1e0 + 0x18) + 1;
  local_1e8 = FUN_143360950(*(undefined8 *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218)
                            ,&DAT_145b036e8,2,0);
  *(int *)(local_1e8 + 0x18) = *(int *)(local_1e8 + 0x18) + 1;
  local_98 = *(undefined8 *)(param_1 + 0x58);
  local_a8[0] = 4;
  local_a0 = 0;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_1f0 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),&DAT_145b345b0,2,0)
  ;
  *(int *)(local_1f0 + 0x18) = *(int *)(local_1f0 + 0x18) + 1;
  local_1f8 = FUN_143360950(*(undefined8 *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218)
                            ,&DAT_145b036e8,2,0);
  *(int *)(local_1f8 + 0x18) = *(int *)(local_1f8 + 0x18) + 1;
  local_b8 = *(undefined8 *)(param_1 + 0x50);
  local_c8[0] = 4;
  local_c0 = 0;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_200 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar5 + 0x10) + 0x218),&DAT_145b345ac,2,0)
  ;
  *(int *)(local_200 + 0x18) = *(int *)(local_200 + 0x18) + 1;
  local_208 = FUN_143360950(*(undefined8 *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218)
                            ,&DAT_145b036e8,2,0);
  *(int *)(local_208 + 0x18) = *(int *)(local_208 + 0x18) + 1;
  local_d8 = *(undefined8 *)(param_1 + 0x48);
  local_e8[0] = 4;
  local_e0 = 0;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_res20 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar6 + 0x10) + 0x218),&DAT_145b345a8,2,
                              0);
  *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
  local_res18 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) +
                               0x218),&DAT_145b036e8,2,0);
  *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
  local_f8 = *(undefined8 *)(param_1 + 0x40);
  local_108[0] = 4;
  local_100 = 0;
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar7 + 0x10) + 0x218),&DAT_145b13244,3,0
                            );
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  uVar8 = FUN_1435cad50(lVar2,&local_110,local_68);
  uVar9 = FUN_1435cad50(lVar3,&local_118,local_88);
  uVar10 = FUN_1435cad50(lVar4,&local_120,local_a8);
  uVar11 = FUN_1435cad50(lVar5,&local_128,local_c8);
  uVar12 = FUN_1435cad50(lVar6,&local_130,local_e8);
  uVar13 = FUN_1435cad50(lVar7,&local_138,local_108);
  uVar13 = Scaleform::GFx::ASString::operator+(&local_res8,&local_140,uVar13);
  uVar13 = Scaleform::GFx::ASString::operator+(uVar13,&local_148,&local_res18);
  uVar13 = Scaleform::GFx::ASString::operator+(uVar13,&local_150,&local_res20);
  uVar12 = Scaleform::GFx::ASString::operator+(uVar13,&local_158,uVar12);
  uVar12 = Scaleform::GFx::ASString::operator+(uVar12,&local_160,&local_208);
  uVar12 = Scaleform::GFx::ASString::operator+(uVar12,&local_168,&local_200);
  uVar11 = Scaleform::GFx::ASString::operator+(uVar12,&local_170,uVar11);
  uVar11 = Scaleform::GFx::ASString::operator+(uVar11,&local_178,&local_1f8);
  uVar11 = Scaleform::GFx::ASString::operator+(uVar11,&local_180,&local_1f0);
  uVar10 = Scaleform::GFx::ASString::operator+(uVar11,&local_188,uVar10);
  uVar10 = Scaleform::GFx::ASString::operator+(uVar10,&local_190,&local_1e8);
  uVar10 = Scaleform::GFx::ASString::operator+(uVar10,&local_198,&local_1e0);
  uVar9 = Scaleform::GFx::ASString::operator+(uVar10,&local_1a0,uVar9);
  uVar9 = Scaleform::GFx::ASString::operator+(uVar9,&local_1a8,&local_1d8);
  uVar9 = Scaleform::GFx::ASString::operator+(uVar9,&local_1b0,&local_1d0);
  uVar8 = Scaleform::GFx::ASString::operator+(uVar9,&local_1b8,uVar8);
  uVar8 = Scaleform::GFx::ASString::operator+(uVar8,&local_1c0,&local_1c8);
  FUN_143360170(local_res10,uVar8);
  piVar1 = (int *)(local_1c0 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_1b8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_1b0 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_1a8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_1a0 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_198 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_190 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_188 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_180 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_178 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_170 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_168 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_160 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_158 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_150 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_148 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_140 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_138 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (9 < ((byte)local_108[0] & 0x1f)) {
    if ((local_108[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_108);
    }
    else {
      FUN_143592150();
    }
  }
  piVar1 = (int *)(local_res18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_res20 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_130 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (9 < ((byte)local_e8[0] & 0x1f)) {
    if ((local_e8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_e8);
    }
    else {
      FUN_143592150();
    }
  }
  piVar1 = (int *)(local_208 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_200 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_128 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (9 < ((byte)local_c8[0] & 0x1f)) {
    if ((local_c8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_c8);
    }
    else {
      FUN_143592150();
    }
  }
  piVar1 = (int *)(local_1f8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_1f0 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_120 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (9 < ((byte)local_a8[0] & 0x1f)) {
    if ((local_a8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_a8);
    }
    else {
      FUN_143592150();
    }
  }
  piVar1 = (int *)(local_1e8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_1e0 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_118 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (9 < ((byte)local_88[0] & 0x1f)) {
    if ((local_88[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_88);
    }
    else {
      FUN_143592150();
    }
  }
  piVar1 = (int *)(local_1d8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_1d0 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_110 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (9 < ((byte)local_68[0] & 0x1f)) {
    if ((local_68[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_68);
    }
    else {
      FUN_143592150();
    }
  }
  piVar1 = (int *)(local_1c8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143548650 FUN_143548650 body=320 status=ok
// SIG undefined FUN_143548650(void)

void FUN_143548650(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 local_res18 [16];
  undefined1 local_58 [8];
  longlong local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  double local_38;
  uint local_28 [4];
  double local_18;
  
  if (param_3 == 0) {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_58,0x3f1,uVar3);
    FUN_1435cbe70(uVar3,uVar4);
    piVar1 = (int *)(local_50 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    local_40 = 0;
    local_28[2] = 0;
    local_28[3] = 0;
    local_48[0] = 4;
    local_28[0] = 4;
    lVar6 = 2;
    local_38 = *(double *)(param_3 + 0x48) * *(double *)(param_1 + 0x50) +
               *(double *)(param_3 + 0x40) * *(double *)(param_1 + 0x40) +
               *(double *)(param_1 + 0x60);
    local_18 = *(double *)(param_3 + 0x48) * *(double *)(param_1 + 0x58) +
               *(double *)(param_3 + 0x40) * *(double *)(param_1 + 0x48) +
               *(double *)(param_1 + 0x68);
    FUN_1435ccdc0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_res18,param_2,
                  "flash.geom.Point",2,local_48);
    puVar5 = &stack0xfffffffffffffff8;
    do {
      puVar2 = (uint *)(puVar5 + -0x20);
      puVar5 = puVar5 + -0x20;
      lVar6 = lVar6 + -1;
      if (9 < ((byte)*puVar2 & 0x1f)) {
        if ((*puVar2 >> 9 & 1) == 0) {
          FUN_1435920c0(puVar5);
        }
        else {
          FUN_143592150();
        }
      }
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 1435487d0 FUN_1435487d0 body=30 status=ok
// SIG undefined FUN_1435487d0(void)

undefined8 * FUN_1435487d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_143547ac0();
  return param_2;
}



// FUNCTION 143548800 FUN_143548800 body=30 status=ok
// SIG undefined FUN_143548800(void)

undefined8 * FUN_143548800(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_143548650();
  return param_2;
}



// FUNCTION 143548830 FUN_143548830 body=33 status=ok
// SIG undefined FUN_143548830(void)

undefined8 * FUN_143548830(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b343f8;
  return param_1;
}



// FUNCTION 143548860 FUN_143548860 body=192 status=ok
// SIG undefined FUN_143548860(void)

void FUN_143548860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar1,param_3);
    *puVar1 = &PTR_FUN_145b34338;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
  }
  local_20 = 0;
  local_28[0] = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143548930 FUN_143548930 body=33 status=ok
// SIG undefined FUN_143548930(void)

undefined8 * FUN_143548930(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143548960 FUN_143548960 body=214 status=ok
// SIG undefined FUN_143548960(void)

undefined8 * FUN_143548960(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b31d60);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b31d60);
    *puVar2 = &PTR_FUN_145b343f8;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 143548a40 FUN_143548a40 body=43 status=ok
// SIG undefined FUN_143548a40(void)

undefined8 * FUN_143548a40(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b34470;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 143548a80 FUN_143548a80 body=88 status=ok
// SIG undefined FUN_143548a80(void)

void FUN_143548a80(longlong param_1,uint param_2,longlong param_3)

{
  char *pcVar1;
  undefined1 local_res10 [8];
  
  if (((param_2 != 0) &&
      (pcVar1 = (char *)FUN_143590af0(param_3,local_res10,param_1 + 0x40), *pcVar1 != '\0')) &&
     (1 < param_2)) {
    FUN_143590af0(param_3 + 0x20,local_res10,param_1 + 0x48);
  }
  return;
}



// FUNCTION 143548ae0 FUN_143548ae0 body=46 status=ok
// SIG undefined FUN_143548ae0(void)

void FUN_143548ae0(longlong param_1,double *param_2)

{
  double dVar1;
  
  dVar1 = _guard_xfg_dispatch_icall_nop
                    (*(double *)(param_1 + 0x40) * *(double *)(param_1 + 0x40) +
                     *(double *)(param_1 + 0x48) * *(double *)(param_1 + 0x48));
  *param_2 = dVar1;
  return;
}



// FUNCTION 143548b20 FUN_143548b20 body=288 status=ok
// SIG undefined FUN_143548b20(void)

void FUN_143548b20(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 local_res18 [16];
  undefined1 local_58 [8];
  longlong local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  double local_38;
  uint local_28 [4];
  double local_18;
  
  if (param_3 == 0) {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_58,0x3f1,uVar3);
    FUN_1435cbe70(uVar3,uVar4);
    piVar1 = (int *)(local_50 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    local_38 = *(double *)(param_3 + 0x40) + *(double *)(param_1 + 0x40);
    local_48[0] = 4;
    local_40 = 0;
    local_28[2] = 0;
    local_28[3] = 0;
    local_28[0] = 4;
    local_18 = *(double *)(param_3 + 0x48) + *(double *)(param_1 + 0x48);
    lVar6 = 2;
    FUN_1435ccdc0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_res18,param_2,
                  "flash.geom.Point",2,local_48);
    puVar5 = &stack0xfffffffffffffff8;
    do {
      puVar2 = (uint *)(puVar5 + -0x20);
      puVar5 = puVar5 + -0x20;
      lVar6 = lVar6 + -1;
      if (9 < ((byte)*puVar2 & 0x1f)) {
        if ((*puVar2 >> 9 & 1) == 0) {
          FUN_1435920c0(puVar5);
        }
        else {
          FUN_143592150();
        }
      }
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 143548c50 FUN_143548c50 body=173 status=ok
// SIG undefined FUN_143548c50(void)

void FUN_143548c50(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  uint local_28 [4];
  undefined8 local_18;
  
  local_38 = *(undefined8 *)(param_1 + 0x40);
  local_48[0] = 4;
  local_40 = 0;
  local_18 = *(undefined8 *)(param_1 + 0x48);
  lVar3 = 2;
  local_28[0] = 4;
  local_28[2] = 0;
  local_28[3] = 0;
  FUN_1435ccdc0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_res8,param_2,
                "flash.geom.Point",2,local_48);
  puVar2 = &stack0xfffffffffffffff8;
  do {
    puVar1 = (uint *)(puVar2 + -0x20);
    puVar2 = puVar2 + -0x20;
    lVar3 = lVar3 + -1;
    if (9 < ((byte)*puVar1 & 0x1f)) {
      if ((*puVar1 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar2);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar3 != 0);
  return;
}



// FUNCTION 143548d30 FUN_143548d30 body=131 status=ok
// SIG undefined FUN_143548d30(void)

void FUN_143548d30(longlong param_1,undefined1 *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x3f1,uVar2);
    FUN_1435cbe70(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    if ((*(double *)(param_1 + 0x40) == *(double *)(param_3 + 0x40)) &&
       (*(double *)(param_1 + 0x48) == *(double *)(param_3 + 0x48))) {
      *param_2 = 1;
      return;
    }
    *param_2 = 0;
  }
  return;
}



// FUNCTION 143548dc0 FUN_143548dc0 body=163 status=ok
// SIG undefined FUN_143548dc0(void)

void FUN_143548dc0(longlong param_1,undefined8 param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = *(double *)(param_1 + 0x40);
  if ((dVar1 == 0.0) && (*(double *)(param_1 + 0x48) == 0.0)) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    return;
  }
  dVar2 = *(double *)(param_1 + 0x48);
  dVar3 = _guard_xfg_dispatch_icall_nop(dVar2 * dVar2 + dVar1 * dVar1);
  *(double *)(param_1 + 0x40) = (dVar1 * param_3) / dVar3;
  *(double *)(param_1 + 0x48) = (dVar2 * param_3) / dVar3;
  return;
}



// FUNCTION 143548eb0 FUN_143548eb0 body=288 status=ok
// SIG undefined FUN_143548eb0(void)

void FUN_143548eb0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 local_res18 [16];
  undefined1 local_58 [8];
  longlong local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  double local_38;
  uint local_28 [4];
  double local_18;
  
  if (param_3 == 0) {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_58,0x3f1,uVar3);
    FUN_1435cbe70(uVar3,uVar4);
    piVar1 = (int *)(local_50 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    local_38 = *(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40);
    local_48[0] = 4;
    local_40 = 0;
    local_28[2] = 0;
    local_28[3] = 0;
    local_28[0] = 4;
    local_18 = *(double *)(param_1 + 0x48) - *(double *)(param_3 + 0x48);
    lVar6 = 2;
    FUN_1435ccdc0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_res18,param_2,
                  "flash.geom.Point",2,local_48);
    puVar5 = &stack0xfffffffffffffff8;
    do {
      puVar2 = (uint *)(puVar5 + -0x20);
      puVar5 = puVar5 + -0x20;
      lVar6 = lVar6 + -1;
      if (9 < ((byte)*puVar2 & 0x1f)) {
        if ((*puVar2 >> 9 & 1) == 0) {
          FUN_1435920c0(puVar5);
        }
        else {
          FUN_143592150();
        }
      }
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 143548fe0 FUN_143548fe0 body=649 status=ok
// SIG undefined FUN_143548fe0(void)

void FUN_143548fe0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong local_res8;
  longlong local_res18;
  longlong local_res20;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  uint local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  uint local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  
  local_98 = FUN_143360950(*(undefined8 *)
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218),
                           &DAT_145b12c80,1);
  *(int *)(local_98 + 0x18) = *(int *)(local_98 + 0x18) + 1;
  local_28 = *(undefined8 *)(param_1 + 0x48);
  local_38[0] = 4;
  local_30 = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_res20 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x218),&DAT_145b346f8,2)
  ;
  *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
  local_res18 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) +
                               0x218),&DAT_145b036e8,2);
  *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
  local_48 = *(undefined8 *)(param_1 + 0x40);
  local_58[0] = 4;
  local_50 = 0;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),&DAT_145b1366c,3);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  uVar4 = FUN_1435cad50(lVar2,&local_60,local_38);
  uVar5 = FUN_1435cad50(lVar3,&local_68,local_58);
  uVar5 = Scaleform::GFx::ASString::operator+(&local_res8,&local_70,uVar5);
  uVar5 = Scaleform::GFx::ASString::operator+(uVar5,&local_78,&local_res18);
  uVar5 = Scaleform::GFx::ASString::operator+(uVar5,&local_80,&local_res20);
  uVar4 = Scaleform::GFx::ASString::operator+(uVar5,&local_88,uVar4);
  uVar4 = Scaleform::GFx::ASString::operator+(uVar4,&local_90,&local_98);
  FUN_143360170(param_2,uVar4);
  piVar1 = (int *)(local_90 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_88 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_80 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_78 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_70 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_68 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (9 < ((byte)local_58[0] & 0x1f)) {
    if ((local_58[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_58);
    }
    else {
      FUN_143592150();
    }
  }
  piVar1 = (int *)(local_res18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_res20 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_60 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (9 < ((byte)local_38[0] & 0x1f)) {
    if ((local_38[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_38);
    }
    else {
      FUN_143592150();
    }
  }
  piVar1 = (int *)(local_98 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143549270 FUN_143549270 body=33 status=ok
// SIG undefined FUN_143549270(void)

undefined8 * FUN_143549270(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b34530;
  return param_1;
}



// FUNCTION 1435492a0 FUN_1435492a0 body=176 status=ok
// SIG undefined FUN_1435492a0(void)

void FUN_1435492a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar1,param_3);
    *puVar1 = &PTR_FUN_145b34470;
    puVar1[8] = 0;
    puVar1[9] = 0;
  }
  local_20 = 0;
  local_28[0] = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143549360 FUN_143549360 body=33 status=ok
// SIG undefined FUN_143549360(void)

undefined8 * FUN_143549360(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143549390 FUN_143549390 body=227 status=ok
// SIG undefined FUN_143549390(void)

undefined8 * FUN_143549390(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b32e00);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b32e00);
    *puVar3 = &PTR_FUN_145b34530;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b18698;
  }
  return param_1;
}



// FUNCTION 143549480 FUN_143549480 body=33 status=ok
// SIG undefined FUN_143549480(void)

undefined8 * FUN_143549480(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18698;
  return param_1;
}



// FUNCTION 1435494b0 FUN_1435494b0 body=60 status=ok
// SIG undefined FUN_1435494b0(void)

void FUN_1435494b0(undefined8 param_1,double *param_2,longlong param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  
  dVar1 = *(double *)(param_3 + 0x40) - *(double *)(param_4 + 0x40);
  dVar2 = *(double *)(param_3 + 0x48) - *(double *)(param_4 + 0x48);
  dVar1 = _guard_xfg_dispatch_icall_nop(dVar1 * dVar1 + dVar2 * dVar2);
  *param_2 = dVar1;
  return;
}



// FUNCTION 143549500 FUN_143549500 body=221 status=ok
// SIG undefined FUN_143549500(void)

void FUN_143549500(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  double param_5)

{
  uint *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined4 local_48 [2];
  undefined8 local_40;
  double local_38;
  uint local_28 [4];
  double local_18;
  
  lVar3 = 2;
  local_48[0] = 4;
  local_40 = 0;
  local_28[0] = 4;
  local_38 = (*(double *)(param_3 + 0x40) - *(double *)(param_4 + 0x40)) * param_5 +
             *(double *)(param_4 + 0x40);
  local_28[2] = 0;
  local_28[3] = 0;
  local_18 = (*(double *)(param_3 + 0x48) - *(double *)(param_4 + 0x48)) * param_5 +
             *(double *)(param_4 + 0x48);
  FUN_1435ccdc0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),&param_5,param_2,
                "flash.geom.Point",2,local_48);
  puVar2 = &stack0xfffffffffffffff8;
  do {
    puVar1 = (uint *)(puVar2 + -0x20);
    puVar2 = puVar2 + -0x20;
    lVar3 = lVar3 + -1;
    if (9 < ((byte)*puVar1 & 0x1f)) {
      if ((*puVar1 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar2);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar3 != 0);
  return;
}



// FUNCTION 1435495f0 FUN_1435495f0 body=238 status=ok
// SIG undefined FUN_1435495f0(void)

void FUN_1435495f0(longlong param_1,undefined8 param_2,double param_3,double param_4)

{
  uint *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined4 local_68 [2];
  undefined8 local_60;
  double local_58;
  uint local_48 [4];
  double local_38;
  undefined1 local_28 [32];
  
  local_60 = 0;
  local_68[0] = 4;
  local_58 = _guard_xfg_dispatch_icall_nop(param_4);
  local_58 = local_58 * param_3;
  local_48[0] = 4;
  local_48[2] = 0;
  local_48[3] = 0;
  local_38 = _guard_xfg_dispatch_icall_nop(param_4);
  local_38 = local_38 * param_3;
  lVar3 = 2;
  FUN_1435ccdc0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_res8,param_2,
                "flash.geom.Point",2,local_68);
  puVar2 = local_28;
  do {
    puVar1 = (uint *)(puVar2 + -0x20);
    puVar2 = puVar2 + -0x20;
    lVar3 = lVar3 + -1;
    if (9 < ((byte)*puVar1 & 0x1f)) {
      if ((*puVar1 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar2);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar3 != 0);
  return;
}



// FUNCTION 1435496f0 FUN_1435496f0 body=99 status=ok
// SIG undefined FUN_1435496f0(void)

undefined8 * FUN_1435496f0(undefined8 *param_1)

{
  double dVar1;
  
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b345c0;
  param_1[10] = 0x404b800000000000;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 8) = 0x437a0000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x437a0000;
  dVar1 = _guard_xfg_dispatch_icall_nop(0.4799655442984406);
  param_1[9] = 250.0 / dVar1;
  return param_1;
}



// FUNCTION 143549760 FUN_143549760 body=75 status=ok
// SIG undefined FUN_143549760(void)

double FUN_143549760(longlong param_1,float param_2)

{
  double dVar1;
  
  dVar1 = _guard_xfg_dispatch_icall_nop
                    ((*(double *)(param_1 + 0x50) * 0.5 * 3.141592653589793) / 180.0);
  return (double)(param_2 * 0.5) / dVar1;
}



// FUNCTION 1435497c0 FUN_1435497c0 body=42 status=ok
// SIG undefined FUN_1435497c0(void)

double FUN_1435497c0(longlong param_1,float param_2)

{
  double dVar1;
  
  dVar1 = _guard_xfg_dispatch_icall_nop
                    ((double)param_2 / (*(double *)(param_1 + 0x48) + *(double *)(param_1 + 0x48)));
  return dVar1 * 114.59155902616465;
}



// FUNCTION 1435497f0 FUN_1435497f0 body=272 status=ok
// SIG undefined FUN_1435497f0(void)

void FUN_1435497f0(longlong param_1,uint param_2,longlong param_3)

{
  char *pcVar1;
  char cVar2;
  undefined1 local_res10 [8];
  double local_res20;
  double local_28;
  double local_20 [3];
  
  if ((param_2 != 0) &&
     (pcVar1 = (char *)FUN_143590af0(param_3,local_res10,&local_res20), *pcVar1 != '\0')) {
    if (local_res20 != 0.0) {
      *(double *)(param_1 + 0x50) = local_res20;
    }
    if ((1 < param_2) &&
       (pcVar1 = (char *)FUN_143590af0(param_3 + 0x20,local_res10,&local_res20), *pcVar1 != '\0')) {
      if (local_res20 != 0.0) {
        *(double *)(param_1 + 0x48) = local_res20;
      }
      if ((((2 < param_2) &&
           (pcVar1 = (char *)FUN_143590af0(param_3 + 0x40,local_res10,local_20), *pcVar1 != '\0'))
          && (pcVar1 = (char *)FUN_143590af0(param_3 + 0x60,local_res10,&local_28), *pcVar1 != '\0')
          ) && ((cVar2 = Scaleform::GFx::NumberUtil::IsNaN(local_20[0]), cVar2 == '\0' &&
                (cVar2 = Scaleform::GFx::NumberUtil::IsNaN(local_28), cVar2 == '\0')))) {
        *(float *)(param_1 + 0x44) = (float)local_28;
        *(float *)(param_1 + 0x40) = (float)local_20[0];
      }
    }
  }
  return;
}



// FUNCTION 143549910 FUN_143549910 body=272 status=ok
// SIG undefined FUN_143549910(void)

void FUN_143549910(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined4 local_res8 [2];
  uint local_68 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_48 [2];
  undefined8 local_40;
  double local_38;
  uint local_28 [4];
  double local_18;
  
  local_48[0] = 4;
  local_40 = 0;
  local_28[0] = 4;
  local_68[0] = 0;
  local_60 = 0;
  lVar4 = 2;
  local_38 = (double)*(float *)(param_1 + 0x40);
  local_res8[0] = 2;
  local_28[2] = 0;
  local_28[3] = 0;
  local_18 = (double)*(float *)(param_1 + 0x44);
  plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x3c8);
  (**(code **)(*plVar2 + 0x68))(plVar2,local_68,local_res8,local_48,1,1);
  FUN_1434f0700(param_2,local_58);
  if (9 < ((byte)local_68[0] & 0x1f)) {
    if ((local_68[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_68);
    }
    else {
      FUN_143592150();
    }
  }
  puVar3 = &stack0xfffffffffffffff8;
  do {
    puVar1 = (uint *)(puVar3 + -0x20);
    puVar3 = puVar3 + -0x20;
    lVar4 = lVar4 + -1;
    if (9 < ((byte)*puVar1 & 0x1f)) {
      if ((*puVar1 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar3);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar4 != 0);
  return;
}



// FUNCTION 143549a30 FUN_143549a30 body=101 status=ok
// SIG undefined FUN_143549a30(void)

void FUN_143549a30(longlong param_1,undefined8 param_2,longlong param_3)

{
  double dVar1;
  longlong *plVar2;
  float local_18;
  float local_14;
  
  dVar1 = *(double *)(param_3 + 0x40);
  *(float *)(param_1 + 0x40) = (float)dVar1;
  plVar2 = *(longlong **)(param_1 + 0x58);
  *(float *)(param_1 + 0x44) = (float)*(double *)(param_3 + 0x48);
  if (plVar2 != (longlong *)0x0) {
    local_14 = *(float *)(param_1 + 0x44) * 20.0;
    local_18 = (float)dVar1 * 20.0;
    (**(code **)(*plVar2 + 0x158))(plVar2,&local_18);
  }
  return;
}



// FUNCTION 143549ab0 FUN_143549ab0 body=162 status=ok
// SIG undefined FUN_143549ab0(void)

void FUN_143549ab0(longlong param_1,undefined8 param_2,double param_3)

{
  longlong *plVar1;
  float *pfVar2;
  double dVar3;
  undefined1 local_18 [16];
  
  *(double *)(param_1 + 0x48) = (double)(float)param_3;
  plVar1 = *(longlong **)
            (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x300) + 0x10);
  pfVar2 = (float *)(**(code **)(*plVar1 + 0x90))(plVar1,local_18);
  dVar3 = _guard_xfg_dispatch_icall_nop
                    ((double)(pfVar2[2] - *pfVar2) /
                     (*(double *)(param_1 + 0x48) + *(double *)(param_1 + 0x48)));
  plVar1 = *(longlong **)(param_1 + 0x58);
  *(double *)(param_1 + 0x50) = dVar3 * 114.59155902616465;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x138))(plVar1,dVar3 * 114.59155902616465);
                    /* WARNING: Could not recover jumptable at 0x000143549b45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x148))
              (*(longlong **)(param_1 + 0x58),*(double *)(param_1 + 0x48) * 20.0);
    return;
  }
  return;
}



// FUNCTION 143549b70 FUN_143549b70 body=188 status=ok
// SIG undefined FUN_143549b70(void)

void FUN_143549b70(longlong param_1,undefined8 param_2,double param_3)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  float *pfVar4;
  double dVar5;
  undefined1 local_28 [32];
  
  *(double *)(param_1 + 0x50) = (double)(float)param_3;
  plVar3 = *(longlong **)
            (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x300) + 0x10);
  pfVar4 = (float *)(**(code **)(*plVar3 + 0x90))(plVar3,local_28);
  fVar1 = pfVar4[2];
  fVar2 = *pfVar4;
  dVar5 = _guard_xfg_dispatch_icall_nop
                    ((*(double *)(param_1 + 0x50) * 0.5 * 3.141592653589793) / 180.0);
  plVar3 = *(longlong **)(param_1 + 0x58);
  *(double *)(param_1 + 0x48) = (double)((fVar1 - fVar2) * 0.5) / dVar5;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x138))(plVar3,*(undefined8 *)(param_1 + 0x50));
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x148))
              (*(longlong **)(param_1 + 0x58),*(double *)(param_1 + 0x48) * 20.0);
  }
  return;
}



// FUNCTION 143549c40 FUN_143549c40 body=561 status=ok
// SIG undefined FUN_143549c40(void)

void FUN_143549c40(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined1 local_res8 [8];
  ulonglong local_2b8;
  longlong local_2a8;
  uint uStack_270;
  uint uStack_26c;
  ulonglong local_268 [3];
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  uint local_228 [2];
  undefined8 local_220 [2];
  uint auStack_210 [114];
  uint local_48 [8];
  undefined1 local_28 [16];
  
  if (*(longlong *)(param_1 + 0x58) == 0) {
    fVar7 = 500.0;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x20) + 0x10);
    fVar7 = ABS(*(float *)(lVar2 + 0x108) - *(float *)(lVar2 + 0x100)) * 0.05;
  }
  if (*(double *)(param_1 + 0x48) == 0.0) {
    fVar6 = _guard_xfg_dispatch_icall_nop
                      ((float)((*(double *)(param_1 + 0x50) * 3.141592653589793) / 180.0) * 0.5);
    fVar6 = (fVar7 * 0.5) / fVar6;
  }
  else {
    fVar6 = (float)*(double *)(param_1 + 0x48);
  }
  lVar4 = 0x10;
  lVar2 = 0x10;
  lVar5 = 0;
  puVar1 = local_228;
  local_2b8 = (ulonglong)(uint)fVar6;
  local_268[0] = local_2b8;
  local_268[1] = 0;
  local_2a8 = (ulonglong)(uint)fVar6 << 0x20;
  local_268[2] = local_2a8;
  uStack_250 = 0;
  local_238 = 0;
  local_248 = 0;
  uStack_240 = 0x3f800000;
  uStack_230 = 0x3f800000;
  do {
    *puVar1 = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1 = puVar1 + 8;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  puVar1 = local_228;
  do {
    if (9 < ((byte)*puVar1 & 0x1f)) {
      if ((*puVar1 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar1);
      }
      else {
        FUN_143592150();
      }
    }
    *puVar1 = *puVar1 & 0xffffffe4;
    fVar7 = *(float *)((longlong)local_268 + lVar5 * 4);
    lVar5 = lVar5 + 1;
    *puVar1 = *puVar1 | 4;
    *(double *)(puVar1 + 4) = (double)fVar7;
    puVar1[6] = uStack_270;
    puVar1[7] = uStack_26c;
    puVar1 = puVar1 + 8;
  } while (lVar5 < 0x10);
  FUN_1435ccdc0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_res8,param_2,
                "flash.geom.Matrix3D",0x10,local_228);
  puVar3 = local_28;
  do {
    puVar1 = (uint *)(puVar3 + -0x20);
    puVar3 = puVar3 + -0x20;
    lVar4 = lVar4 + -1;
    if (9 < ((byte)*puVar1 & 0x1f)) {
      if ((*puVar1 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar3);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar4 != 0);
  return;
}



// FUNCTION 143549e80 FUN_143549e80 body=30 status=ok
// SIG undefined FUN_143549e80(void)

undefined8 * FUN_143549e80(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_143549910();
  return param_2;
}



// FUNCTION 143549eb0 FUN_143549eb0 body=30 status=ok
// SIG undefined FUN_143549eb0(void)

undefined8 * FUN_143549eb0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_143549c40();
  return param_2;
}



// FUNCTION 143549ee0 FUN_143549ee0 body=33 status=ok
// SIG undefined FUN_143549ee0(void)

undefined8 * FUN_143549ee0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b34680;
  return param_1;
}



// FUNCTION 143549f10 FUN_143549f10 body=231 status=ok
// SIG undefined FUN_143549f10(void)

void FUN_143549f10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  double dVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    UInterpTrackInst::UInterpTrackInst(puVar1,param_3);
    *puVar1 = &PTR_FUN_145b345c0;
    puVar1[0xb] = 0;
    puVar1[10] = 0x404b800000000000;
    *(undefined4 *)(puVar1 + 8) = 0x437a0000;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0x437a0000;
    dVar2 = _guard_xfg_dispatch_icall_nop(0.4799655442984406);
    puVar1[9] = 250.0 / dVar2;
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 14354a000 FUN_14354a000 body=33 status=ok
// SIG undefined FUN_14354a000(void)

undefined8 * FUN_14354a000(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14354a030 FUN_14354a030 body=214 status=ok
// SIG undefined FUN_14354a030(void)

undefined8 * FUN_14354a030(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b32f10);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b32f10);
    *puVar2 = &PTR_FUN_145b34680;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14354a110 FUN_14354a110 body=51 status=ok
// SIG undefined FUN_14354a110(void)

undefined8 * FUN_14354a110(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_FUN_145b34700;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 14354a150 FUN_14354a150 body=148 status=ok
// SIG undefined FUN_14354a150(void)

void FUN_14354a150(longlong param_1,uint param_2,longlong param_3)

{
  char *pcVar1;
  undefined1 local_res10 [8];
  
  if ((((param_2 != 0) &&
       (pcVar1 = (char *)FUN_143590af0(param_3,local_res10,param_1 + 0x50), *pcVar1 != '\0')) &&
      (1 < param_2)) &&
     (((pcVar1 = (char *)FUN_143590af0(param_3 + 0x20,local_res10,param_1 + 0x58), *pcVar1 != '\0'
       && (2 < param_2)) &&
      ((pcVar1 = (char *)FUN_143590af0(param_3 + 0x40,local_res10,param_1 + 0x48), *pcVar1 != '\0'
       && (3 < param_2)))))) {
    FUN_143590af0(param_3 + 0x60,local_res10,param_1 + 0x40);
  }
  return;
}



// FUNCTION 14354a230 FUN_14354a230 body=189 status=ok
// SIG undefined FUN_14354a230(void)

void FUN_14354a230(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined4 local_48 [2];
  undefined8 local_40;
  double local_38;
  uint local_28 [4];
  double local_18;
  
  local_38 = *(double *)(param_1 + 0x50) + *(double *)(param_1 + 0x48);
  local_48[0] = 4;
  local_40 = 0;
  local_28[0] = 4;
  lVar3 = 2;
  local_18 = *(double *)(param_1 + 0x58) + *(double *)(param_1 + 0x40);
  local_28[2] = 0;
  local_28[3] = 0;
  FUN_1435ccdc0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_res8,param_2,
                "flash.geom.Point",2,local_48);
  puVar2 = &stack0xfffffffffffffff8;
  do {
    puVar1 = (uint *)(puVar2 + -0x20);
    puVar2 = puVar2 + -0x20;
    lVar3 = lVar3 + -1;
    if (9 < ((byte)*puVar1 & 0x1f)) {
      if ((*puVar1 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar2);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar3 != 0);
  return;
}



// FUNCTION 14354a300 FUN_14354a300 body=117 status=ok
// SIG undefined FUN_14354a300(void)

void FUN_14354a300(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x3f1,uVar2);
    FUN_1435cbe70(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    *(double *)(param_1 + 0x48) = *(double *)(param_3 + 0x40) - *(double *)(param_1 + 0x50);
    *(double *)(param_1 + 0x40) = *(double *)(param_3 + 0x48) - *(double *)(param_1 + 0x58);
  }
  return;
}



// FUNCTION 14354a3f0 FUN_14354a3f0 body=173 status=ok
// SIG undefined FUN_14354a3f0(void)

void FUN_14354a3f0(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  uint local_28 [4];
  undefined8 local_18;
  
  local_38 = *(undefined8 *)(param_1 + 0x48);
  local_48[0] = 4;
  local_40 = 0;
  local_18 = *(undefined8 *)(param_1 + 0x40);
  lVar3 = 2;
  local_28[0] = 4;
  local_28[2] = 0;
  local_28[3] = 0;
  FUN_1435ccdc0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_res8,param_2,
                "flash.geom.Point",2,local_48);
  puVar2 = &stack0xfffffffffffffff8;
  do {
    puVar1 = (uint *)(puVar2 + -0x20);
    puVar2 = puVar2 + -0x20;
    lVar3 = lVar3 + -1;
    if (9 < ((byte)*puVar1 & 0x1f)) {
      if ((*puVar1 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar2);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar3 != 0);
  return;
}



// FUNCTION 14354a4b0 FUN_14354a4b0 body=101 status=ok
// SIG undefined FUN_14354a4b0(void)

void FUN_14354a4b0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x3f1,uVar2);
    FUN_1435cbe70(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_3 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_3 + 0x48);
  }
  return;
}



// FUNCTION 14354a550 FUN_14354a550 body=173 status=ok
// SIG undefined FUN_14354a550(void)

void FUN_14354a550(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  uint local_28 [4];
  undefined8 local_18;
  
  local_38 = *(undefined8 *)(param_1 + 0x50);
  local_48[0] = 4;
  local_40 = 0;
  local_18 = *(undefined8 *)(param_1 + 0x58);
  lVar3 = 2;
  local_28[0] = 4;
  local_28[2] = 0;
  local_28[3] = 0;
  FUN_1435ccdc0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_res8,param_2,
                "flash.geom.Point",2,local_48);
  puVar2 = &stack0xfffffffffffffff8;
  do {
    puVar1 = (uint *)(puVar2 + -0x20);
    puVar2 = puVar2 + -0x20;
    lVar3 = lVar3 + -1;
    if (9 < ((byte)*puVar1 & 0x1f)) {
      if ((*puVar1 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar2);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar3 != 0);
  return;
}



// FUNCTION 14354a610 FUN_14354a610 body=143 status=ok
// SIG undefined FUN_14354a610(void)

void FUN_14354a610(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x3f1,uVar2);
    FUN_1435cbe70(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    *(double *)(param_1 + 0x48) =
         (*(double *)(param_1 + 0x50) - *(double *)(param_3 + 0x40)) + *(double *)(param_1 + 0x48);
    *(double *)(param_1 + 0x40) =
         (*(double *)(param_1 + 0x58) - *(double *)(param_3 + 0x48)) + *(double *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_3 + 0x40);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_3 + 0x48);
  }
  return;
}



// FUNCTION 14354a6b0 FUN_14354a6b0 body=224 status=ok
// SIG undefined FUN_14354a6b0(void)

void FUN_14354a6b0(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  uint local_28 [4];
  undefined8 local_18;
  
  local_78 = *(undefined8 *)(param_1 + 0x50);
  lVar3 = 4;
  local_88[0] = 4;
  local_80 = 0;
  local_58 = *(undefined8 *)(param_1 + 0x58);
  local_68 = 4;
  local_60 = 0;
  local_38 = *(undefined8 *)(param_1 + 0x48);
  local_48 = 4;
  local_18 = *(undefined8 *)(param_1 + 0x40);
  local_40 = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[0] = 4;
  FUN_1435ccdc0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_res8,param_2,
                "flash.geom.Rectangle",4,local_88);
  puVar2 = &stack0xfffffffffffffff8;
  do {
    puVar1 = (uint *)(puVar2 + -0x20);
    puVar2 = puVar2 + -0x20;
    lVar3 = lVar3 + -1;
    if (9 < ((byte)*puVar1 & 0x1f)) {
      if ((*puVar1 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar2);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar3 != 0);
  return;
}



// FUNCTION 14354a7e0 FUN_14354a7e0 body=163 status=ok
// SIG undefined FUN_14354a7e0(void)

void FUN_14354a7e0(longlong param_1,undefined1 *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x3f1,uVar2);
    FUN_1435cbe70(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    if ((((*(double *)(param_3 + 0x40) < *(double *)(param_1 + 0x50) + *(double *)(param_1 + 0x48))
         && (*(double *)(param_1 + 0x50) <= *(double *)(param_3 + 0x40))) &&
        (*(double *)(param_3 + 0x48) < *(double *)(param_1 + 0x58) + *(double *)(param_1 + 0x40)))
       && (*(double *)(param_1 + 0x58) <= *(double *)(param_3 + 0x48))) {
      *param_2 = 1;
      return;
    }
    *param_2 = 0;
  }
  return;
}



// FUNCTION 14354a890 FUN_14354a890 body=251 status=ok
// SIG undefined FUN_14354a890(void)

void FUN_14354a890(longlong param_1,undefined1 *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x3f1,uVar2);
    FUN_1435cbe70(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    if ((*(double *)(param_3 + 0x40) == 0.0) && (*(double *)(param_3 + 0x48) == 0.0)) {
      if ((*(double *)(param_1 + 0x50) <= *(double *)(param_3 + 0x50) &&
           *(double *)(param_3 + 0x50) != *(double *)(param_1 + 0x50)) &&
         (*(double *)(param_1 + 0x58) <= *(double *)(param_3 + 0x58) &&
          *(double *)(param_3 + 0x58) != *(double *)(param_1 + 0x58))) {
        *param_2 = 1;
        return;
      }
      *param_2 = 0;
      return;
    }
    if ((((*(double *)(param_3 + 0x50) + *(double *)(param_3 + 0x48) <=
           *(double *)(param_1 + 0x50) + *(double *)(param_1 + 0x48)) &&
         (*(double *)(param_3 + 0x40) + *(double *)(param_3 + 0x58) <=
          *(double *)(param_1 + 0x58) + *(double *)(param_1 + 0x40))) &&
        (*(double *)(param_1 + 0x50) <= *(double *)(param_3 + 0x50))) &&
       (*(double *)(param_1 + 0x58) <= *(double *)(param_3 + 0x58))) {
      *param_2 = 1;
      return;
    }
    *param_2 = 0;
  }
  return;
}



// FUNCTION 14354a9d0 FUN_14354a9d0 body=161 status=ok
// SIG undefined FUN_14354a9d0(void)

void FUN_14354a9d0(longlong param_1,undefined1 *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x3f1,uVar2);
    FUN_1435cbe70(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    if ((((*(double *)(param_1 + 0x50) == *(double *)(param_3 + 0x50)) &&
         (*(double *)(param_1 + 0x58) == *(double *)(param_3 + 0x58))) &&
        (*(double *)(param_1 + 0x48) == *(double *)(param_3 + 0x48))) &&
       (*(double *)(param_1 + 0x40) == *(double *)(param_3 + 0x40))) {
      *param_2 = 1;
      return;
    }
    *param_2 = 0;
  }
  return;
}



// FUNCTION 14354aac0 FUN_14354aac0 body=153 status=ok
// SIG undefined FUN_14354aac0(void)

void FUN_14354aac0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar5 = FUN_1435c8e40(local_18,0x3f1,uVar4);
    FUN_1435cbe70(uVar4,uVar5);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    dVar2 = *(double *)(param_3 + 0x40);
    dVar3 = *(double *)(param_3 + 0x48);
    *(double *)(param_1 + 0x50) = *(double *)(param_1 + 0x50) - dVar2;
    *(double *)(param_1 + 0x48) = dVar2 + dVar2 + *(double *)(param_1 + 0x48);
    *(double *)(param_1 + 0x58) = *(double *)(param_1 + 0x58) - dVar3;
    *(double *)(param_1 + 0x40) = dVar3 + dVar3 + *(double *)(param_1 + 0x40);
  }
  return;
}



// FUNCTION 14354ab60 FUN_14354ab60 body=552 status=ok
// SIG undefined FUN_14354ab60(void)

void FUN_14354ab60(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  double dVar8;
  double dVar9;
  char local_res18 [8];
  undefined1 local_128 [8];
  longlong local_120;
  undefined4 local_118 [2];
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  uint local_b8 [8];
  undefined4 local_98 [2];
  undefined8 local_90;
  double local_88;
  undefined4 local_78;
  undefined8 local_70;
  double local_68;
  undefined4 local_58;
  undefined8 local_50;
  double local_48;
  uint local_38 [4];
  double local_28;
  undefined1 local_18 [16];
  
  if (param_3 == 0) {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_128,0x3f1,uVar3);
    FUN_1435cbe70(uVar3,uVar4);
    piVar1 = (int *)(local_120 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    FUN_14354ad90(param_1,local_res18);
    if (local_res18[0] == '\0') {
      lVar5 = 4;
      local_110 = 0;
      local_f0 = 0;
      local_d0 = 0;
      local_b8[2] = 0;
      local_b8[3] = 0;
      local_108 = 0;
      local_e8 = 0;
      local_c8 = 0;
      local_b8[4] = 0;
      local_b8[5] = 0;
      local_118[0] = 4;
      local_f8 = 4;
      local_d8 = 4;
      local_b8[0] = 4;
      FUN_1435ccdc0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_res18,param_2,
                    "flash.geom.Rectangle",4,local_118);
      puVar6 = local_98;
      do {
        puVar2 = puVar6 + -8;
        puVar6 = puVar6 + -8;
        lVar5 = lVar5 + -1;
        if (9 < ((byte)*puVar2 & 0x1f)) {
          if ((*puVar2 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar6);
          }
          else {
            FUN_143592150();
          }
        }
      } while (lVar5 != 0);
    }
    else {
      dVar8 = *(double *)(param_1 + 0x50);
      dVar9 = *(double *)(param_1 + 0x58);
      local_48 = *(double *)(param_3 + 0x50) + *(double *)(param_3 + 0x48);
      local_88 = dVar8;
      if (dVar8 <= *(double *)(param_3 + 0x50)) {
        local_88 = *(double *)(param_3 + 0x50);
      }
      dVar8 = dVar8 + *(double *)(param_1 + 0x48);
      local_68 = dVar9;
      if (dVar9 <= *(double *)(param_3 + 0x58)) {
        local_68 = *(double *)(param_3 + 0x58);
      }
      dVar9 = dVar9 + *(double *)(param_1 + 0x40);
      if (dVar8 <= local_48) {
        local_48 = dVar8;
      }
      local_28 = *(double *)(param_3 + 0x58) + *(double *)(param_3 + 0x40);
      lVar5 = 4;
      local_90 = 0;
      local_70 = 0;
      local_50 = 0;
      local_38[2] = 0;
      local_38[3] = 0;
      local_48 = local_48 - local_88;
      if (dVar9 <= local_28) {
        local_28 = dVar9;
      }
      local_98[0] = 4;
      local_78 = 4;
      local_28 = local_28 - local_68;
      local_58 = 4;
      local_38[0] = 4;
      FUN_1435ccdc0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_res18,param_2,
                    "flash.geom.Rectangle",4,local_98);
      puVar7 = local_18;
      do {
        puVar2 = (uint *)(puVar7 + -0x20);
        puVar7 = puVar7 + -0x20;
        lVar5 = lVar5 + -1;
        if (9 < ((byte)*puVar2 & 0x1f)) {
          if ((*puVar2 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar7);
          }
          else {
            FUN_143592150();
          }
        }
      } while (lVar5 != 0);
    }
  }
  return;
}



// FUNCTION 14354ad90 FUN_14354ad90 body=228 status=ok
// SIG undefined FUN_14354ad90(void)

void FUN_14354ad90(longlong param_1,undefined1 *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x3f1,uVar2);
    FUN_1435cbe70(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    if ((((0.0 < *(double *)(param_3 + 0x48)) && (0.0 < *(double *)(param_3 + 0x40))) &&
        (0.0 < *(double *)(param_1 + 0x48))) && (0.0 < *(double *)(param_1 + 0x40))) {
      if ((*(double *)(param_3 + 0x58) < *(double *)(param_1 + 0x58) + *(double *)(param_1 + 0x40))
         && (dVar4 = *(double *)(param_3 + 0x58) + *(double *)(param_3 + 0x40),
            *(double *)(param_1 + 0x58) <= dVar4 && dVar4 != *(double *)(param_1 + 0x58))) {
        if ((*(double *)(param_1 + 0x50) < *(double *)(param_3 + 0x50) + *(double *)(param_3 + 0x48)
            ) && (*(double *)(param_3 + 0x50) <
                  *(double *)(param_1 + 0x50) + *(double *)(param_1 + 0x48))) {
          *param_2 = 1;
          return;
        }
      }
      *param_2 = 0;
      return;
    }
    *param_2 = 0;
  }
  return;
}



// FUNCTION 14354aec0 FUN_14354aec0 body=117 status=ok
// SIG undefined FUN_14354aec0(void)

void FUN_14354aec0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x3f1,uVar2);
    FUN_1435cbe70(uVar2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    *(double *)(param_1 + 0x50) = *(double *)(param_3 + 0x40) + *(double *)(param_1 + 0x50);
    *(double *)(param_1 + 0x58) = *(double *)(param_3 + 0x48) + *(double *)(param_1 + 0x58);
  }
  return;
}



// FUNCTION 14354af80 FUN_14354af80 body=1327 status=ok
// SIG undefined FUN_14354af80(void)

void FUN_14354af80(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong local_res8 [2];
  longlong local_res18;
  longlong local_res20;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  uint local_b8 [2];
  undefined8 local_b0;
  undefined8 local_a8;
  uint local_98 [2];
  undefined8 local_90;
  undefined8 local_88;
  uint local_78 [2];
  undefined8 local_70;
  undefined8 local_68;
  uint local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  
  local_138 = FUN_143360950(*(undefined8 *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218)
                            ,&DAT_145b12c80,1);
  *(int *)(local_138 + 0x18) = *(int *)(local_138 + 0x18) + 1;
  local_48 = *(undefined8 *)(param_1 + 0x40);
  local_58[0] = 4;
  local_50 = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_140 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x218),&DAT_145b3483c,2,0)
  ;
  *(int *)(local_140 + 0x18) = *(int *)(local_140 + 0x18) + 1;
  local_148 = FUN_143360950(*(undefined8 *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218)
                            ,&DAT_145b036e8,2,0);
  *(int *)(local_148 + 0x18) = *(int *)(local_148 + 0x18) + 1;
  local_68 = *(undefined8 *)(param_1 + 0x48);
  local_78[0] = 4;
  local_70 = 0;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_150 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),&DAT_145b34838,2,0)
  ;
  *(int *)(local_150 + 0x18) = *(int *)(local_150 + 0x18) + 1;
  local_158 = FUN_143360950(*(undefined8 *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218)
                            ,&DAT_145b036e8,2,0);
  *(int *)(local_158 + 0x18) = *(int *)(local_158 + 0x18) + 1;
  local_88 = *(undefined8 *)(param_1 + 0x58);
  local_98[0] = 4;
  local_90 = 0;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_res20 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),&DAT_145b346f8,2,
                              0);
  *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
  local_res18 = FUN_143360950(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) +
                               0x218),&DAT_145b036e8,2,0);
  *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
  local_a8 = *(undefined8 *)(param_1 + 0x50);
  local_b8[0] = 4;
  local_b0 = 0;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_res8[0] =
       FUN_143360950(*(undefined8 *)(*(longlong *)(lVar5 + 0x10) + 0x218),&DAT_145b1366c,3,0);
  *(int *)(local_res8[0] + 0x18) = *(int *)(local_res8[0] + 0x18) + 1;
  uVar6 = FUN_1435cad50(lVar2,&local_c0,local_58);
  uVar7 = FUN_1435cad50(lVar3,&local_c8,local_78);
  uVar8 = FUN_1435cad50(lVar4,&local_d0,local_98);
  uVar9 = FUN_1435cad50(lVar5,&local_d8,local_b8);
  uVar9 = Scaleform::GFx::ASString::operator+(local_res8,&local_e0,uVar9);
  uVar9 = Scaleform::GFx::ASString::operator+(uVar9,&local_e8,&local_res18);
  uVar9 = Scaleform::GFx::ASString::operator+(uVar9,&local_f0,&local_res20);
  uVar8 = Scaleform::GFx::ASString::operator+(uVar9,&local_f8,uVar8);
  uVar8 = Scaleform::GFx::ASString::operator+(uVar8,&local_100,&local_158);
  uVar8 = Scaleform::GFx::ASString::operator+(uVar8,&local_108,&local_150);
  uVar7 = Scaleform::GFx::ASString::operator+(uVar8,&local_110,uVar7);
  uVar7 = Scaleform::GFx::ASString::operator+(uVar7,&local_118,&local_148);
  uVar7 = Scaleform::GFx::ASString::operator+(uVar7,&local_120,&local_140);
  uVar6 = Scaleform::GFx::ASString::operator+(uVar7,&local_128,uVar6);
  uVar6 = Scaleform::GFx::ASString::operator+(uVar6,&local_130,&local_138);
  FUN_143360170(param_2,uVar6);
  piVar1 = (int *)(local_130 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_128 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_120 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_118 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_110 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_108 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_100 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_f8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_f0 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_e8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_e0 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_res8[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_d8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_b8);
    }
    else {
      FUN_143592150();
    }
  }
  piVar1 = (int *)(local_res18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_res20 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_d0 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (9 < ((byte)local_98[0] & 0x1f)) {
    if ((local_98[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_98);
    }
    else {
      FUN_143592150();
    }
  }
  piVar1 = (int *)(local_158 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_150 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_c8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (9 < ((byte)local_78[0] & 0x1f)) {
    if ((local_78[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_78);
    }
    else {
      FUN_143592150();
    }
  }
  piVar1 = (int *)(local_148 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_140 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_c0 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (9 < ((byte)local_58[0] & 0x1f)) {
    if ((local_58[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_58);
    }
    else {
      FUN_143592150();
    }
  }
  piVar1 = (int *)(local_138 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14354b4c0 FUN_14354b4c0 body=824 status=ok
// SIG undefined FUN_14354b4c0(void)

void FUN_14354b4c0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 local_res18 [16];
  undefined4 local_138 [2];
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_f8;
  undefined8 local_f0;
  double local_e8;
  uint local_d8 [4];
  double local_c8;
  undefined1 local_b8 [8];
  longlong local_b0;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  double local_98;
  undefined4 local_88;
  undefined8 local_80;
  double local_78;
  undefined4 local_68;
  undefined8 local_60;
  double local_58;
  uint local_48 [4];
  double local_38;
  undefined1 local_28 [32];
  
  if (param_3 == 0) {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_b8,0x3f1,uVar3);
    FUN_1435cbe70(uVar3,uVar4);
    piVar1 = (int *)(local_b0 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    local_e8 = *(double *)(param_3 + 0x48);
    if ((local_e8 <= 0.0) || (local_c8 = *(double *)(param_3 + 0x40), local_c8 <= 0.0)) {
      local_128 = *(undefined8 *)(param_1 + 0x50);
      local_108 = *(undefined8 *)(param_1 + 0x58);
      lVar5 = 4;
      local_e8 = *(double *)(param_1 + 0x48);
      local_c8 = *(double *)(param_1 + 0x40);
      local_130 = 0;
      local_110 = 0;
      local_f0 = 0;
      local_d8[2] = 0;
      local_d8[3] = 0;
      local_138[0] = 4;
      local_118 = 4;
      local_f8 = 4;
      local_d8[0] = 4;
      FUN_1435ccdc0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_res18,param_2,
                    "flash.geom.Rectangle",4,local_138);
      puVar6 = local_b8;
      do {
        puVar2 = (uint *)(puVar6 + -0x20);
        puVar6 = puVar6 + -0x20;
        lVar5 = lVar5 + -1;
        if (9 < ((byte)*puVar2 & 0x1f)) {
          if ((*puVar2 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar6);
          }
          else {
            FUN_143592150();
          }
        }
      } while (lVar5 != 0);
    }
    else if ((*(double *)(param_1 + 0x48) <= 0.0) || (*(double *)(param_1 + 0x40) <= 0.0)) {
      local_128 = *(undefined8 *)(param_3 + 0x50);
      lVar5 = 4;
      local_108 = *(undefined8 *)(param_3 + 0x58);
      local_130 = 0;
      local_110 = 0;
      local_f0 = 0;
      local_d8[2] = 0;
      local_d8[3] = 0;
      local_138[0] = 4;
      local_118 = 4;
      local_f8 = 4;
      local_d8[0] = 4;
      FUN_1435ccdc0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_res18,param_2,
                    "flash.geom.Rectangle",4,local_138);
      puVar6 = local_b8;
      do {
        puVar2 = (uint *)(puVar6 + -0x20);
        puVar6 = puVar6 + -0x20;
        lVar5 = lVar5 + -1;
        if (9 < ((byte)*puVar2 & 0x1f)) {
          if ((*puVar2 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar6);
          }
          else {
            FUN_143592150();
          }
        }
      } while (lVar5 != 0);
    }
    else {
      local_58 = *(double *)(param_1 + 0x50);
      local_38 = *(double *)(param_1 + 0x58);
      lVar5 = 4;
      local_98 = *(double *)(param_3 + 0x50);
      if (local_58 <= *(double *)(param_3 + 0x50)) {
        local_98 = local_58;
      }
      local_58 = local_58 + *(double *)(param_1 + 0x48);
      local_e8 = local_e8 + *(double *)(param_3 + 0x50);
      local_c8 = local_c8 + *(double *)(param_3 + 0x58);
      local_78 = *(double *)(param_3 + 0x58);
      if (local_38 <= *(double *)(param_3 + 0x58)) {
        local_78 = local_38;
      }
      local_a0 = 0;
      local_38 = local_38 + *(double *)(param_1 + 0x40);
      local_80 = 0;
      if (local_58 <= local_e8) {
        local_58 = local_e8;
      }
      local_60 = 0;
      local_48[2] = 0;
      local_48[3] = 0;
      if (local_38 <= local_c8) {
        local_38 = local_c8;
      }
      local_58 = local_58 - local_98;
      local_a8[0] = 4;
      local_88 = 4;
      local_68 = 4;
      local_38 = local_38 - local_78;
      local_48[0] = 4;
      FUN_1435ccdc0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_res18,param_2,
                    "flash.geom.Rectangle",4,local_a8);
      puVar6 = local_28;
      do {
        puVar2 = (uint *)(puVar6 + -0x20);
        puVar6 = puVar6 + -0x20;
        lVar5 = lVar5 + -1;
        if (9 < ((byte)*puVar2 & 0x1f)) {
          if ((*puVar2 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar6);
          }
          else {
            FUN_143592150();
          }
        }
      } while (lVar5 != 0);
    }
  }
  return;
}



// FUNCTION 14354b800 FUN_14354b800 body=30 status=ok
// SIG undefined FUN_14354b800(void)

undefined8 * FUN_14354b800(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14354a230();
  return param_2;
}



// FUNCTION 14354b830 FUN_14354b830 body=30 status=ok
// SIG undefined FUN_14354b830(void)

undefined8 * FUN_14354b830(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14354a3f0();
  return param_2;
}



// FUNCTION 14354b860 FUN_14354b860 body=30 status=ok
// SIG undefined FUN_14354b860(void)

undefined8 * FUN_14354b860(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14354a550();
  return param_2;
}



// FUNCTION 14354b890 FUN_14354b890 body=33 status=ok
// SIG undefined FUN_14354b890(void)

undefined8 * FUN_14354b890(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b347c0;
  return param_1;
}



// FUNCTION 14354b8c0 FUN_14354b8c0 body=184 status=ok
// SIG undefined FUN_14354b8c0(void)

void FUN_14354b8c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar1,param_3);
    *puVar1 = &PTR_FUN_145b34700;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
  }
  local_20 = 0;
  local_28[0] = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 14354b980 FUN_14354b980 body=33 status=ok
// SIG undefined FUN_14354b980(void)

undefined8 * FUN_14354b980(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14354b9b0 FUN_14354b9b0 body=214 status=ok
// SIG undefined FUN_14354b9b0(void)

undefined8 * FUN_14354b9b0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b32d40);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b32d40);
    *puVar2 = &PTR_FUN_145b347c0;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14354ba90 UGraphNodeContextMenuContext body=41 status=ok
// SIG undefined UGraphNodeContextMenuContext(void)

undefined8 * UGraphNodeContextMenuContext::UGraphNodeContextMenuContext(undefined8 *param_1)

{
  UInterpTrackInst::UInterpTrackInst();
  param_1[8] = 0;
  *param_1 = &PTR_FUN_145b34840;
  return param_1;
}



// FUNCTION 14354bad0 FUN_14354bad0 body=966 status=ok
// SIG undefined FUN_14354bad0(void)

void FUN_14354bad0(longlong param_1,ulonglong *param_2)

{
  float fVar1;
  longlong lVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  uint *puVar6;
  float *pfVar7;
  undefined1 *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong local_res8;
  uint local_138 [2];
  double local_130 [3];
  uint local_118 [4];
  double local_108;
  uint local_f8 [4];
  double local_e8;
  uint local_d8 [4];
  double local_c8;
  uint local_b8 [4];
  double local_a8;
  uint local_98 [4];
  double local_88;
  uint local_78 [4];
  double local_68;
  uint local_58 [4];
  double local_48;
  undefined1 local_38 [32];
  
  lVar9 = 8;
  lVar10 = 8;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  puVar6 = local_138;
  local_res8 = 0;
  do {
    *puVar6 = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6 = puVar6 + 8;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  pfVar7 = (float *)FUN_1433679a0(*(undefined8 *)(param_1 + 0x40));
  dVar4 = (double)*pfVar7;
  if (9 < ((byte)local_138[0] & 0x1f)) {
    if ((local_138[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_138);
    }
    else {
      FUN_143592150();
    }
  }
  local_138[0] = local_138[0] & 0xffffffe4 | 4;
  dVar5 = (double)pfVar7[1];
  local_130[1] = dVar4;
  if (9 < ((byte)local_118[0] & 0x1f)) {
    if ((local_118[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_118);
    }
    else {
      FUN_143592150();
    }
  }
  local_118[0] = local_118[0] & 0xffffffe4 | 4;
  dVar4 = (double)pfVar7[2];
  local_108 = dVar5;
  if (9 < ((byte)local_f8[0] & 0x1f)) {
    if ((local_f8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_f8);
    }
    else {
      FUN_143592150();
    }
  }
  local_f8[0] = local_f8[0] & 0xffffffe4 | 4;
  dVar5 = (double)pfVar7[3];
  local_e8 = dVar4;
  if (9 < ((byte)local_d8[0] & 0x1f)) {
    if ((local_d8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_d8);
    }
    else {
      FUN_143592150();
    }
  }
  local_d8[0] = local_d8[0] & 0xffffffe4 | 4;
  dVar4 = (double)(pfVar7[4] * 255.0);
  local_c8 = dVar5;
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_b8);
    }
    else {
      FUN_143592150();
    }
  }
  local_b8[0] = local_b8[0] & 0xffffffe4 | 4;
  dVar5 = (double)(pfVar7[5] * 255.0);
  local_a8 = dVar4;
  if (9 < ((byte)local_98[0] & 0x1f)) {
    if ((local_98[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_98);
    }
    else {
      FUN_143592150();
    }
  }
  local_98[0] = local_98[0] & 0xffffffe4 | 4;
  dVar4 = (double)(pfVar7[6] * 255.0);
  local_88 = dVar5;
  if (9 < ((byte)local_78[0] & 0x1f)) {
    if ((local_78[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_78);
    }
    else {
      FUN_143592150();
    }
  }
  local_78[0] = local_78[0] & 0xffffffe4 | 4;
  fVar1 = pfVar7[7];
  local_68 = dVar4;
  if (9 < ((byte)local_58[0] & 0x1f)) {
    if ((local_58[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_58);
    }
    else {
      FUN_143592150();
    }
  }
  local_58[0] = local_58[0] & 0xffffffe4 | 4;
  local_48 = (double)(fVar1 * 255.0);
  FUN_1435e8720(lVar2,&local_res8,*(undefined8 *)(lVar2 + 0x330),8,local_138);
  if (&local_res8 != param_2) {
    if (local_res8 != 0) {
      *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) & 0x8fffffff;
    }
    uVar3 = *param_2;
    if (uVar3 != 0) {
      if ((uVar3 & 1) == 0) {
        if ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar3 - 1;
      }
    }
    *param_2 = local_res8;
  }
  puVar8 = local_38;
  do {
    puVar6 = (uint *)(puVar8 + -0x20);
    puVar8 = puVar8 + -0x20;
    lVar9 = lVar9 + -1;
    if (9 < ((byte)*puVar6 & 0x1f)) {
      if ((*puVar6 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar8);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar9 != 0);
  if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
     ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14354bea0 FUN_14354bea0 body=216 status=ok
// SIG undefined FUN_14354bea0(void)

void FUN_14354bea0(longlong param_1,undefined8 param_2,longlong param_3)

{
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1432bfaf0(&local_28);
    if (param_3 != 0) {
      local_28 = (float)*(double *)(param_3 + 0x70);
      local_24 = (float)*(double *)(param_3 + 0x60);
      local_20 = (float)*(double *)(param_3 + 0x50);
      local_1c = (float)*(double *)(param_3 + 0x40);
      local_18 = (float)*(double *)(param_3 + 0x78);
      local_14 = (float)*(double *)(param_3 + 0x68);
      local_10 = (float)*(double *)(param_3 + 0x58);
      local_c = (float)*(double *)(param_3 + 0x48);
      Scaleform::Render::Cxform::Normalize(&local_28);
    }
    FUN_1433679d0(*(undefined8 *)(param_1 + 0x40),&local_28);
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x1a8))(*(longlong **)(param_1 + 0x40),0);
  }
  return;
}



// FUNCTION 14354bf80 FUN_14354bf80 body=1014 status=ok
// SIG undefined FUN_14354bf80(void)

void FUN_14354bf80(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong local_res8;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  uint local_138 [2];
  double local_130 [3];
  uint local_118 [4];
  double local_108;
  uint local_f8 [4];
  double local_e8;
  uint local_d8 [4];
  double local_c8;
  uint local_b8 [4];
  double local_a8;
  uint local_98 [4];
  double local_88;
  uint local_78 [4];
  double local_68;
  uint local_58 [4];
  double local_48;
  undefined1 local_38 [32];
  
  local_res8 = 0;
  FUN_1432bfaf0(&local_158);
  lVar8 = 8;
  puVar5 = local_138;
  lVar9 = 8;
  do {
    *puVar5 = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5 = puVar5 + 8;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  for (lVar9 = *(longlong *)(param_1 + 0x40); lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x38)) {
    uVar6 = FUN_1433679a0(lVar9);
    FUN_1432bfb20(&local_158,uVar6);
  }
  dVar3 = (double)local_158;
  if (9 < ((byte)local_138[0] & 0x1f)) {
    if ((local_138[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_138);
    }
    else {
      FUN_143592150();
    }
  }
  local_138[0] = local_138[0] & 0xffffffe4 | 4;
  dVar4 = (double)local_154;
  local_130[1] = dVar3;
  if (9 < ((byte)local_118[0] & 0x1f)) {
    if ((local_118[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_118);
    }
    else {
      FUN_143592150();
    }
  }
  local_118[0] = local_118[0] & 0xffffffe4 | 4;
  dVar3 = (double)local_150;
  local_108 = dVar4;
  if (9 < ((byte)local_f8[0] & 0x1f)) {
    if ((local_f8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_f8);
    }
    else {
      FUN_143592150();
    }
  }
  local_f8[0] = local_f8[0] & 0xffffffe4 | 4;
  dVar4 = (double)local_14c;
  local_e8 = dVar3;
  if (9 < ((byte)local_d8[0] & 0x1f)) {
    if ((local_d8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_d8);
    }
    else {
      FUN_143592150();
    }
  }
  local_d8[0] = local_d8[0] & 0xffffffe4 | 4;
  dVar3 = (double)(local_148 * 255.0);
  local_c8 = dVar4;
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_b8);
    }
    else {
      FUN_143592150();
    }
  }
  local_b8[0] = local_b8[0] & 0xffffffe4 | 4;
  dVar4 = (double)(local_144 * 255.0);
  local_a8 = dVar3;
  if (9 < ((byte)local_98[0] & 0x1f)) {
    if ((local_98[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_98);
    }
    else {
      FUN_143592150();
    }
  }
  local_98[0] = local_98[0] & 0xffffffe4 | 4;
  dVar3 = (double)(local_140 * 255.0);
  local_88 = dVar4;
  if (9 < ((byte)local_78[0] & 0x1f)) {
    if ((local_78[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_78);
    }
    else {
      FUN_143592150();
    }
  }
  local_78[0] = local_78[0] & 0xffffffe4 | 4;
  local_68 = dVar3;
  if (9 < ((byte)local_58[0] & 0x1f)) {
    if ((local_58[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_58);
    }
    else {
      FUN_143592150();
    }
  }
  local_58[0] = local_58[0] & 0xffffffe4 | 4;
  local_48 = (double)(local_13c * 255.0);
  FUN_1435e8720(lVar1,&local_res8,*(undefined8 *)(lVar1 + 0x330),8,local_138);
  if (&local_res8 != param_2) {
    if (local_res8 != 0) {
      *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) & 0x8fffffff;
    }
    uVar2 = *param_2;
    if (uVar2 != 0) {
      if ((uVar2 & 1) == 0) {
        if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar2 - 1;
      }
    }
    *param_2 = local_res8;
  }
  puVar7 = local_38;
  do {
    puVar5 = (uint *)(puVar7 + -0x20);
    puVar7 = puVar7 + -0x20;
    lVar8 = lVar8 + -1;
    if (9 < ((byte)*puVar5 & 0x1f)) {
      if ((*puVar5 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar7);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar8 != 0);
  if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
     ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14354c380 FUN_14354c380 body=835 status=ok
// SIG undefined FUN_14354c380(void)

void FUN_14354c380(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  uint *puVar5;
  Matrix2x4<float> *pMVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  ulonglong local_res8;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  uint local_f8 [2];
  double local_f0 [3];
  uint local_d8 [4];
  double local_c8;
  uint local_b8 [4];
  double local_a8;
  uint local_98 [4];
  double local_88;
  uint local_78 [4];
  double local_68;
  uint local_58 [4];
  double local_48;
  undefined1 local_38 [32];
  
  lVar8 = 6;
  lVar9 = 6;
  local_res8 = 0;
  puVar5 = local_f8;
  local_118 = 0x3f800000;
  uStack_110 = 0;
  local_108 = 0x3f80000000000000;
  uStack_100 = 0;
  do {
    *puVar5 = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5 = puVar5 + 8;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  for (plVar1 = *(longlong **)(param_1 + 0x40); plVar1 != (longlong *)0x0;
      plVar1 = (longlong *)plVar1[7]) {
    pMVar6 = (Matrix2x4<float> *)(**(code **)(*plVar1 + 0x10))(plVar1);
    Scaleform::Render::Matrix2x4<float>::Append((Matrix2x4<float> *)&local_118,pMVar6);
  }
  dVar3 = (double)(float)local_118;
  if (9 < ((byte)local_f8[0] & 0x1f)) {
    if ((local_f8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_f8);
    }
    else {
      FUN_143592150();
    }
  }
  local_f8[0] = local_f8[0] & 0xffffffe4 | 4;
  dVar4 = (double)(float)local_108;
  local_f0[1] = dVar3;
  if (9 < ((byte)local_d8[0] & 0x1f)) {
    if ((local_d8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_d8);
    }
    else {
      FUN_143592150();
    }
  }
  local_d8[0] = local_d8[0] & 0xffffffe4 | 4;
  dVar3 = (double)local_118._4_4_;
  local_c8 = dVar4;
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_b8);
    }
    else {
      FUN_143592150();
    }
  }
  local_b8[0] = local_b8[0] & 0xffffffe4 | 4;
  dVar4 = (double)local_108._4_4_;
  local_a8 = dVar3;
  if (9 < ((byte)local_98[0] & 0x1f)) {
    if ((local_98[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_98);
    }
    else {
      FUN_143592150();
    }
  }
  local_98[0] = local_98[0] & 0xffffffe4 | 4;
  dVar3 = (double)(uStack_110._4_4_ * 0.05);
  local_88 = dVar4;
  if (9 < ((byte)local_78[0] & 0x1f)) {
    if ((local_78[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_78);
    }
    else {
      FUN_143592150();
    }
  }
  local_78[0] = local_78[0] & 0xffffffe4 | 4;
  fVar10 = uStack_100._4_4_ * 0.05;
  local_68 = dVar3;
  if (9 < ((byte)local_58[0] & 0x1f)) {
    if ((local_58[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_58);
    }
    else {
      FUN_143592150();
    }
  }
  local_58[0] = local_58[0] & 0xffffffe4 | 4;
  local_48 = (double)fVar10;
  FUN_1435e8720(lVar9,&local_res8,*(undefined8 *)(lVar9 + 0x318),6,local_f8);
  if (&local_res8 != param_2) {
    if (local_res8 != 0) {
      *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) & 0x8fffffff;
    }
    uVar2 = *param_2;
    if (uVar2 != 0) {
      if ((uVar2 & 1) == 0) {
        if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar2 - 1;
      }
    }
    *param_2 = local_res8;
  }
  puVar7 = local_38;
  do {
    puVar5 = (uint *)(puVar7 + -0x20);
    puVar7 = puVar7 + -0x20;
    lVar8 = lVar8 + -1;
    if (9 < ((byte)*puVar5 & 0x1f)) {
      if ((*puVar5 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar7);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar8 != 0);
  if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
     ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14354c6d0 FUN_14354c6d0 body=840 status=ok
// SIG undefined FUN_14354c6d0(void)

void FUN_14354c6d0(longlong param_1,ulonglong *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  uint *puVar10;
  float *pfVar11;
  undefined1 *puVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong local_res8;
  uint local_128 [2];
  double local_120 [3];
  uint local_108 [4];
  double local_f8;
  uint local_e8 [4];
  double local_d8;
  uint local_c8 [4];
  double local_b8;
  uint local_a8 [4];
  double local_98;
  uint local_88 [4];
  double local_78;
  undefined1 local_68 [96];
  
  puVar12 = local_68;
  lVar13 = 6;
  lVar14 = 6;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  puVar10 = local_128;
  local_res8 = 0;
  do {
    *puVar10 = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10 = puVar10 + 8;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  pfVar11 = (float *)(**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))();
  fVar1 = pfVar11[1];
  fVar2 = pfVar11[3];
  fVar3 = pfVar11[4];
  fVar4 = pfVar11[5];
  fVar5 = pfVar11[7];
  dVar9 = (double)*pfVar11;
  if (9 < ((byte)local_128[0] & 0x1f)) {
    if ((local_128[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_128);
    }
    else {
      FUN_143592150();
    }
  }
  local_128[0] = local_128[0] & 0xffffffe4 | 4;
  dVar8 = (double)fVar3;
  local_120[1] = dVar9;
  if (9 < ((byte)local_108[0] & 0x1f)) {
    if ((local_108[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_108);
    }
    else {
      FUN_143592150();
    }
  }
  local_108[0] = local_108[0] & 0xffffffe4 | 4;
  dVar9 = (double)fVar1;
  local_f8 = dVar8;
  if (9 < ((byte)local_e8[0] & 0x1f)) {
    if ((local_e8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_e8);
    }
    else {
      FUN_143592150();
    }
  }
  local_e8[0] = local_e8[0] & 0xffffffe4 | 4;
  dVar8 = (double)fVar4;
  local_d8 = dVar9;
  if (9 < ((byte)local_c8[0] & 0x1f)) {
    if ((local_c8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_c8);
    }
    else {
      FUN_143592150();
    }
  }
  local_c8[0] = local_c8[0] & 0xffffffe4 | 4;
  dVar9 = (double)(fVar2 * 0.05);
  local_b8 = dVar8;
  if (9 < ((byte)local_a8[0] & 0x1f)) {
    if ((local_a8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_a8);
    }
    else {
      FUN_143592150();
    }
  }
  local_a8[0] = local_a8[0] & 0xffffffe4 | 4;
  local_98 = dVar9;
  if (9 < ((byte)local_88[0] & 0x1f)) {
    if ((local_88[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_88);
    }
    else {
      FUN_143592150();
    }
  }
  local_88[0] = local_88[0] & 0xffffffe4 | 4;
  local_78 = (double)(fVar5 * 0.05);
  FUN_1435e8720(lVar6,&local_res8,*(undefined8 *)(lVar6 + 0x318),6,local_128);
  if (&local_res8 != param_2) {
    if (local_res8 != 0) {
      *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) & 0x8fffffff;
    }
    uVar7 = *param_2;
    if (uVar7 != 0) {
      if ((uVar7 & 1) == 0) {
        if ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar7 - 1;
      }
    }
    *param_2 = local_res8;
  }
  do {
    puVar10 = (uint *)(puVar12 + -0x20);
    puVar12 = puVar12 + -0x20;
    lVar13 = lVar13 + -1;
    if (9 < ((byte)*puVar10 & 0x1f)) {
      if ((*puVar10 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar12);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar13 != 0);
  if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
     ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14354ca20 FUN_14354ca20 body=465 status=ok
// SIG undefined FUN_14354ca20(void)

void FUN_14354ca20(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  double dVar2;
  float local_98;
  float local_94;
  undefined4 local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  float local_7c;
  undefined8 local_78;
  double local_70;
  double local_68;
  double dStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    if (param_3 != 0) {
      local_98 = (float)*(double *)(param_3 + 0x40);
      local_90 = 0;
      local_80 = 0;
      local_94 = (float)*(double *)(param_3 + 0x50);
      local_88 = (float)*(double *)(param_3 + 0x48);
      local_8c = (float)*(double *)(param_3 + 0x60) * 20.0;
      local_7c = (float)*(double *)(param_3 + 0x68) * 20.0;
      local_84 = (float)*(double *)(param_3 + 0x58);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_98);
      local_68 = 100.0;
      dStack_60 = 0.0;
      local_48 = 0x3f80000000000000;
      uStack_40 = 0;
      local_58 = 0x3f800000;
      uStack_50 = 0;
      local_28 = 0;
      uStack_20 = 0;
      local_70 = 100.0;
      local_78 = 0;
      local_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0x40590000;
      FUN_14336b690(*(undefined8 *)(param_1 + 0x40),&local_78);
      local_78 = CONCAT44((int)local_7c,(int)local_8c);
      dVar2 = _guard_xfg_dispatch_icall_nop((double)local_88,(double)local_98);
      dStack_60 = (dVar2 * 180.0) / 3.141592653589793;
      local_70 = _guard_xfg_dispatch_icall_nop
                           ((double)local_98 * (double)local_98 +
                            (double)local_88 * (double)local_88);
      local_70 = local_70 * 100.0;
      local_68 = _guard_xfg_dispatch_icall_nop
                           ((double)local_94 * (double)local_94 +
                            (double)local_84 * (double)local_84);
      local_68 = local_68 * 100.0;
      FUN_14336b830(*(undefined8 *)(param_1 + 0x40),&local_78);
    }
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x1a8))(*(longlong **)(param_1 + 0x40),0);
  }
  return;
}



// FUNCTION 14354cc00 FUN_14354cc00 body=641 status=ok
// SIG undefined FUN_14354cc00(void)

void FUN_14354cc00(longlong param_1,ulonglong *param_2)

{
  float fVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  uint *puVar6;
  float *pfVar7;
  undefined1 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong local_res8;
  float local_278 [16];
  double local_238;
  uint uStack_230;
  uint uStack_22c;
  uint local_228 [2];
  undefined8 local_220 [2];
  uint auStack_210 [114];
  uint local_48 [8];
  
  plVar2 = *(longlong **)(param_1 + 0x40);
  if (plVar2 != (longlong *)0x0) {
    lVar9 = 0x10;
    lVar11 = 0x10;
    lVar10 = 0;
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
    puVar6 = local_228;
    local_res8 = 0;
    do {
      *puVar6 = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6 = puVar6 + 8;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    pfVar7 = (float *)(**(code **)(*plVar2 + 0x20))();
    puVar6 = local_228;
    local_278[4] = pfVar7[4];
    local_278[8] = pfVar7[8];
    local_278[1] = pfVar7[1];
    local_278[2] = pfVar7[2];
    local_278[5] = pfVar7[5];
    local_278[6] = pfVar7[6];
    local_278[0] = *pfVar7;
    local_278[9] = pfVar7[9];
    local_278[0xb] = pfVar7[0xb];
    local_278[3] = pfVar7[3];
    local_278[7] = pfVar7[7];
    local_278[10] = pfVar7[10];
    local_278[0xc] = 0.0;
    local_278[0xd] = 0.0;
    local_278[0xe] = 0.0;
    local_278[0xf] = 1.0;
    do {
      if (9 < ((byte)*puVar6 & 0x1f)) {
        if ((*puVar6 >> 9 & 1) == 0) {
          FUN_1435920c0(puVar6);
        }
        else {
          FUN_143592150();
        }
      }
      *puVar6 = *puVar6 & 0xffffffe4;
      fVar1 = local_278[lVar10];
      lVar10 = lVar10 + 1;
      *puVar6 = *puVar6 | 4;
      local_238 = (double)fVar1;
      *(double *)(puVar6 + 4) = local_238;
      puVar6[6] = uStack_230;
      puVar6[7] = uStack_22c;
      puVar6 = puVar6 + 8;
    } while (lVar10 < 0x10);
    cVar5 = FUN_1435e8720(lVar3,&local_res8,*(undefined8 *)(lVar3 + 800),0x10,local_228);
    if (cVar5 != '\0') {
      *(undefined8 *)(local_res8 + 0xc0) = *(undefined8 *)(param_1 + 0x40);
    }
    if (&local_res8 != param_2) {
      if (local_res8 != 0) {
        *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
        *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) & 0x8fffffff;
      }
      uVar4 = *param_2;
      if (uVar4 != 0) {
        if ((uVar4 & 1) == 0) {
          if ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *param_2 = uVar4 - 1;
        }
      }
      *param_2 = local_res8;
    }
    puVar8 = &stack0xffffffffffffffd8;
    do {
      puVar6 = (uint *)(puVar8 + -0x20);
      puVar8 = puVar8 + -0x20;
      lVar9 = lVar9 + -1;
      if (9 < ((byte)*puVar6 & 0x1f)) {
        if ((*puVar6 >> 9 & 1) == 0) {
          FUN_1435920c0(puVar8);
        }
        else {
          FUN_143592150();
        }
      }
    } while (lVar9 != 0);
    if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
       ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
      FUN_1434ef880();
    }
  }
  return;
}



// FUNCTION 14354ce90 FUN_14354ce90 body=690 status=ok
// SIG undefined FUN_14354ce90(void)

void FUN_14354ce90(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  float fVar3;
  float local_res8 [2];
  float local_res20 [2];
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78 [4];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    if (param_3 == 0) {
      if (plVar1[9] != 0) {
        lVar2 = FUN_1432cd1e0();
        if ((*(ushort *)(lVar2 + 10) >> 9 & 1) != 0) {
          FUN_143367900(*(undefined8 *)(param_1 + 0x40),0);
        }
      }
    }
    else {
      FUN_143542690(param_3,&local_68);
      local_a4 = local_68._4_4_;
      local_98 = (float)local_58;
      local_a8 = (float)local_68;
      local_90 = (float)uStack_50;
      local_a0 = (float)local_60;
      local_84 = local_48._4_4_;
      local_94 = local_58._4_4_;
      local_88 = (float)local_48;
      local_9c = local_60._4_4_ * 20.0;
      local_80 = (float)uStack_40;
      local_7c = uStack_40._4_4_ * 20.0;
      local_8c = uStack_50._4_4_ * 20.0;
      (**(code **)(*plVar1 + 0x28))(plVar1,&local_a8);
      local_60 = 100.0;
      local_58 = 100.0;
      uStack_50 = 0.0;
      local_48 = 0x3f800000;
      uStack_40 = 0;
      local_38 = 0x3f80000000000000;
      uStack_30 = 0;
      local_28 = 0.0;
      dStack_20 = 100.0;
      local_18 = 0.0;
      dStack_10 = 0.0;
      local_68 = 0;
      FUN_14336b690(*(undefined8 *)(param_1 + 0x40),&local_68);
      local_68 = CONCAT44((int)local_8c,(int)local_9c);
      local_28 = (double)(int)local_7c;
      FUN_1434a00d0(&local_a8,local_res20,local_78,local_res8);
      uStack_50 = ((double)local_res8[0] * 180.0) / 3.141592653589793;
      dStack_10 = ((double)local_78[0] * 180.0) / 3.141592653589793;
      local_18 = ((double)local_res20[0] * 180.0) / 3.141592653589793;
      fVar3 = _guard_xfg_dispatch_icall_nop
                        (local_a8 * local_a8 + local_98 * local_98 + local_88 * local_88);
      local_60 = (double)(fVar3 * 100.0);
      fVar3 = _guard_xfg_dispatch_icall_nop
                        (local_a4 * local_a4 + local_94 * local_94 + local_84 * local_84);
      local_58 = (double)(fVar3 * 100.0);
      fVar3 = _guard_xfg_dispatch_icall_nop
                        (local_a0 * local_a0 + local_90 * local_90 + local_80 * local_80);
      dStack_20 = (double)(fVar3 * 100.0);
      FUN_14336b830(*(undefined8 *)(param_1 + 0x40),&local_68);
    }
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x1a8))(*(longlong **)(param_1 + 0x40),0);
  }
  return;
}



// FUNCTION 14354d150 FUN_14354d150 body=1022 status=ok
// SIG undefined FUN_14354d150(void)

void FUN_14354d150(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  char cVar5;
  uint *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  float *pfVar9;
  longlong lVar10;
  undefined1 *puVar11;
  longlong lVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  ulonglong local_res8 [2];
  double local_res18;
  undefined1 local_res20 [8];
  double local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  uint local_d8 [2];
  double local_d0 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  uint local_b8 [4];
  double local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint local_98 [4];
  double local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78 [4];
  double local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [32];
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    return;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x58) == 0) {
    return;
  }
  lVar12 = 4;
  lVar10 = 4;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  puVar6 = local_d8;
  local_res8[0] = 0;
  do {
    *puVar6 = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6 = puVar6 + 8;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  plVar2 = *(longlong **)(param_1 + 0x40);
  plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar1 + 0x300) + 0x80))();
  dVar13 = (double)(**(code **)(*plVar2 + 0x140))(plVar2);
  if (9 < ((byte)local_d8[0] & 0x1f)) {
    if ((local_d8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_d8);
    }
    else {
      FUN_143592150();
    }
  }
  local_d8[0] = local_d8[0] & 0xffffffe4 | 4;
  uStack_c0 = uStack_e0;
  uStack_bc = uStack_dc;
  local_e8 = dVar13;
  local_d0[1] = dVar13;
  dVar13 = (double)(**(code **)(**(longlong **)(param_1 + 0x40) + 0x150))();
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_b8);
    }
    else {
      FUN_143592150();
    }
  }
  local_e8 = dVar13 * 0.05;
  local_b8[0] = local_b8[0] & 0xffffffe4 | 4;
  plVar3 = *(longlong **)(param_1 + 0x40);
  uStack_a0 = uStack_e0;
  uStack_9c = uStack_dc;
  lVar10 = plVar3[7];
  local_a8 = local_e8;
  if (lVar10 == 0) {
    pfVar9 = (float *)(**(code **)(*plVar3 + 0x160))(plVar3,&local_e8);
  }
  else {
    uVar8 = (**(code **)(*plVar3 + 0x160))(plVar3,&local_res18);
    pfVar9 = (float *)FUN_14336ab40(lVar10,local_res20,uVar8);
  }
  fVar14 = *pfVar9;
  fVar15 = pfVar9[1];
  if ((plVar7 != plVar2) &&
     ((local_res18 = (double)fVar14,
      ((ulonglong)local_res18 & 0x7ff0000000000000) != 0x7ff0000000000000 ||
      (((ulonglong)local_res18 & 0xfffffffffffff) == 0)))) {
    cVar5 = Scaleform::GFx::NumberUtil::IsNaN(SUB84((double)fVar15,0));
    if (cVar5 == '\0') goto LAB_14354d349;
  }
  lVar10 = *(longlong *)(*(longlong *)(lVar1 + 0x300) + 0x10);
  fVar14 = (*(float *)(lVar10 + 0x108) + *(float *)(lVar10 + 0x100)) * 0.5;
  fVar15 = (*(float *)(lVar10 + 0x10c) + *(float *)(lVar10 + 0x104)) * 0.5;
LAB_14354d349:
  dVar13 = (double)(fVar14 * 0.05);
  if (9 < ((byte)local_98[0] & 0x1f)) {
    if ((local_98[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_98);
    }
    else {
      FUN_143592150();
    }
  }
  local_98[0] = local_98[0] & 0xffffffe4 | 4;
  uStack_80 = uStack_e0;
  uStack_7c = uStack_dc;
  local_88 = dVar13;
  if (9 < ((byte)local_78[0] & 0x1f)) {
    local_e8 = dVar13;
    if ((local_78[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_78);
    }
    else {
      FUN_143592150();
    }
  }
  local_78[0] = local_78[0] & 0xffffffe4 | 4;
  uStack_60 = uStack_e0;
  uStack_5c = uStack_dc;
  local_e8 = (double)(fVar15 * 0.05);
  local_68 = (double)(fVar15 * 0.05);
  cVar5 = FUN_1435e8720(lVar1,local_res8,*(undefined8 *)(lVar1 + 0x328),4,local_d8);
  if ((cVar5 != '\0') &&
     (*(undefined8 *)(local_res8[0] + 0x58) = *(undefined8 *)(param_1 + 0x40), plVar7 == plVar2)) {
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x300) + 0x10);
    pfVar9 = (float *)(**(code **)(*plVar2 + 0x90))(plVar2,&local_e8);
    uVar4 = local_res8[0];
    fVar14 = pfVar9[2];
    fVar15 = *pfVar9;
    dVar13 = _guard_xfg_dispatch_icall_nop
                       ((*(double *)(local_res8[0] + 0x50) * 0.5 * 3.141592653589793) / 180.0);
    *(double *)(uVar4 + 0x48) = (double)((fVar14 - fVar15) * 0.5) / dVar13;
  }
  if (local_res8 != param_2) {
    if (local_res8[0] != 0) {
      *(int *)(local_res8[0] + 8) = *(int *)(local_res8[0] + 8) + 1;
      *(uint *)(local_res8[0] + 8) = *(uint *)(local_res8[0] + 8) & 0x8fffffff;
    }
    uVar4 = *param_2;
    if (uVar4 != 0) {
      if ((uVar4 & 1) == 0) {
        if ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar4 - 1;
      }
    }
    *param_2 = local_res8[0];
  }
  puVar11 = local_58;
  do {
    puVar6 = (uint *)(puVar11 + -0x20);
    puVar11 = puVar11 + -0x20;
    lVar12 = lVar12 + -1;
    if (9 < ((byte)*puVar6 & 0x1f)) {
      if ((*puVar6 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar11);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar12 != 0);
  if (((local_res8[0] != 0) && ((local_res8[0] & 1) == 0)) &&
     ((*(uint *)(local_res8[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8[0] + 8) = *(uint *)(local_res8[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14354d560 FUN_14354d560 body=413 status=ok
// SIG undefined FUN_14354d560(void)

void FUN_14354d560(longlong param_1,undefined8 param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  longlong lVar4;
  float *pfVar5;
  double dVar6;
  float local_res18;
  float local_res1c;
  float local_28;
  float local_24;
  undefined4 local_20;
  
  if ((param_3 != 0) && (*(longlong *)(param_1 + 0x40) != 0)) {
    plVar3 = *(longlong **)
              (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x300) + 0x10);
    pfVar5 = (float *)(**(code **)(*plVar3 + 0x90))(plVar3,&local_28);
    fVar1 = pfVar5[2];
    fVar2 = *pfVar5;
    dVar6 = _guard_xfg_dispatch_icall_nop
                      ((*(double *)(param_3 + 0x50) * 0.5 * 3.141592653589793) / 180.0);
    dVar6 = (double)((fVar1 - fVar2) * 0.5) / dVar6;
    *(double *)(param_3 + 0x48) = dVar6;
    *(undefined8 *)(param_3 + 0x58) = *(undefined8 *)(param_1 + 0x40);
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x148))
              (*(longlong **)(param_1 + 0x40),(double)(float)(dVar6 * 20.0));
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x138))
              (*(longlong **)(param_1 + 0x40),(double)(float)*(double *)(param_3 + 0x50));
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x38);
    local_28 = *(float *)(param_3 + 0x40) * 20.0;
    local_24 = *(float *)(param_3 + 0x44) * 20.0;
    if (lVar4 != 0) {
      local_20 = 0;
      FUN_14336a740(lVar4,&local_res18,&local_28);
      local_28 = local_res18;
      local_24 = local_res1c;
    }
    local_res1c = local_24;
    local_res18 = local_28;
    local_28 = local_res18;
    local_24 = local_res1c;
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x158))(*(longlong **)(param_1 + 0x40),&local_28)
    ;
    return;
  }
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x148))(*(longlong **)(param_1 + 0x40),0);
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x138))(*(longlong **)(param_1 + 0x40),0);
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x40))();
                    /* WARNING: Could not recover jumptable at 0x00014354d6f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x58))();
  return;
}



// FUNCTION 14354d710 FUN_14354d710 body=876 status=ok
// SIG undefined FUN_14354d710(void)

void FUN_14354d710(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  ulonglong local_res8;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  uint local_c8 [2];
  double local_c0 [3];
  uint local_a8 [4];
  double local_98;
  uint local_88 [4];
  double local_78;
  uint local_68 [4];
  double local_58;
  undefined1 local_48 [48];
  
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    lVar7 = 4;
    lVar8 = 4;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
    puVar4 = local_c8;
    local_res8 = 0;
    do {
      *puVar4 = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4 = puVar4 + 8;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    lVar8 = *plVar1;
    uVar5 = (**(code **)(lVar8 + 0x10))(plVar1);
    (**(code **)(lVar8 + 0x1f0))(plVar1,&local_d8,uVar5);
    fVar9 = local_d8 * 0.05;
    if (fVar9 <= 0.0) {
      fVar9 = fVar9 - 0.5;
    }
    else {
      fVar9 = fVar9 + 0.5;
    }
    if (9 < ((byte)local_c8[0] & 0x1f)) {
      if ((local_c8[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_c8);
      }
      else {
        FUN_143592150();
      }
    }
    fVar10 = local_d4 * 0.05;
    local_c8[0] = local_c8[0] & 0xffffffe4 | 4;
    local_c0[1] = (double)(int)fVar9;
    if (fVar10 <= 0.0) {
      fVar10 = fVar10 - 0.5;
    }
    else {
      fVar10 = fVar10 + 0.5;
    }
    if (9 < ((byte)local_a8[0] & 0x1f)) {
      if ((local_a8[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_a8);
      }
      else {
        FUN_143592150();
      }
    }
    local_a8[0] = local_a8[0] & 0xffffffe4 | 4;
    local_98 = (double)(int)fVar10;
    fVar9 = (local_d0 - local_d8) * 0.05;
    if (fVar9 <= 0.0) {
      fVar9 = fVar9 - 0.5;
    }
    else {
      fVar9 = fVar9 + 0.5;
    }
    if (9 < ((byte)local_88[0] & 0x1f)) {
      if ((local_88[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_88);
      }
      else {
        FUN_143592150();
      }
    }
    local_88[0] = local_88[0] & 0xffffffe4 | 4;
    local_78 = (double)(int)fVar9;
    fVar9 = (local_cc - local_d4) * 0.05;
    if (fVar9 <= 0.0) {
      fVar9 = fVar9 - 0.5;
    }
    else {
      fVar9 = fVar9 + 0.5;
    }
    if (9 < ((byte)local_68[0] & 0x1f)) {
      if ((local_68[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_68);
      }
      else {
        FUN_143592150();
      }
    }
    local_58 = (double)(int)fVar9;
    local_68[0] = local_68[0] & 0xffffffe4 | 4;
    FUN_1435e8720(lVar2,&local_res8,*(undefined8 *)(lVar2 + 0x3d0),4,local_c8);
    if (&local_res8 != param_2) {
      if (local_res8 != 0) {
        *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
        *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) & 0x8fffffff;
      }
      uVar3 = *param_2;
      if (uVar3 != 0) {
        if ((uVar3 & 1) == 0) {
          if ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *param_2 = uVar3 - 1;
        }
      }
      *param_2 = local_res8;
    }
    puVar6 = local_48;
    do {
      puVar4 = (uint *)(puVar6 + -0x20);
      puVar6 = puVar6 + -0x20;
      lVar7 = lVar7 + -1;
      if (9 < ((byte)*puVar4 & 0x1f)) {
        if ((*puVar4 >> 9 & 1) == 0) {
          FUN_1435920c0(puVar6);
        }
        else {
          FUN_143592150();
        }
      }
    } while (lVar7 != 0);
    if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
       ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
      FUN_1434ef880();
    }
  }
  return;
}



// FUNCTION 14354da90 FUN_14354da90 body=762 status=ok
// SIG undefined FUN_14354da90(void)

void FUN_14354da90(longlong param_1,ulonglong *param_2,longlong *param_3)

{
  int *piVar1;
  float fVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  undefined8 uVar7;
  uint *puVar8;
  Matrix3x4<float> *pMVar9;
  longlong lVar10;
  undefined1 *puVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong local_res18 [2];
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  double local_2d8;
  uint uStack_2d0;
  uint uStack_2cc;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  uint local_228 [2];
  undefined8 local_220 [2];
  uint auStack_210 [114];
  uint local_48 [8];
  
  if (param_3 == (longlong *)0x0) {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar7 = FUN_1435c8e40(&local_2d8,0x7d7,uVar3);
    FUN_1435cbe70(uVar3,uVar7);
    piVar1 = (int *)(CONCAT44(uStack_2cc,uStack_2d0) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    if (param_3[0x11] == 0) {
      (**(code **)(*param_3 + 0xd0))(param_3);
    }
    lVar13 = 0;
    lVar12 = 0x10;
    lVar10 = 0x10;
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
    puVar8 = local_228;
    local_res18[0] = 0;
    do {
      *puVar8 = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8 = puVar8 + 8;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    local_258 = 0x3f800000;
    local_248 = 0x3f80000000000000;
    local_230 = 0x3f800000;
    local_250 = 0;
    local_240 = 0;
    local_238 = 0;
    FUN_14336a5a0(*(undefined8 *)(param_1 + 0x40),&local_258);
    local_288 = 0x3f800000;
    local_278 = 0x3f80000000000000;
    local_260 = 0x3f800000;
    local_280 = 0;
    local_270 = 0;
    local_268 = 0;
    FUN_14336a5a0(param_3[0x11],&local_288);
    pMVar9 = (Matrix3x4<float> *)FUN_1432f0a30(&local_288,&local_2c8);
    Scaleform::Render::Matrix3x4<float>::MultiplyMatrix
              ((Matrix3x4<float> *)&local_308,pMVar9,(Matrix3x4<float> *)&local_258);
    puVar8 = local_228;
    local_2c8 = local_308;
    uStack_2c0 = uStack_300;
    local_2b8 = local_2f8;
    uStack_2b0 = uStack_2f0;
    local_2a8 = local_2e8;
    uStack_2a0 = uStack_2e0;
    local_298 = 0;
    uStack_294 = 0;
    uStack_290 = 0;
    uStack_28c = 0x3f800000;
    do {
      if (9 < ((byte)*puVar8 & 0x1f)) {
        if ((*puVar8 >> 9 & 1) == 0) {
          FUN_1435920c0(puVar8);
        }
        else {
          FUN_143592150();
        }
      }
      *puVar8 = *puVar8 & 0xffffffe4;
      fVar2 = *(float *)((longlong)&local_2c8 + lVar13 * 4);
      lVar13 = lVar13 + 1;
      *puVar8 = *puVar8 | 4;
      local_2d8 = (double)fVar2;
      *(double *)(puVar8 + 4) = local_2d8;
      puVar8[6] = uStack_2d0;
      puVar8[7] = uStack_2cc;
      puVar8 = puVar8 + 8;
    } while (lVar13 < 0x10);
    cVar6 = FUN_1435e8720(lVar4,local_res18,*(undefined8 *)(lVar4 + 800),0x10,local_228);
    if (cVar6 != '\0') {
      *(undefined8 *)(local_res18[0] + 0xc0) = *(undefined8 *)(param_1 + 0x40);
    }
    if (local_res18 != param_2) {
      if (local_res18[0] != 0) {
        *(int *)(local_res18[0] + 8) = *(int *)(local_res18[0] + 8) + 1;
        *(uint *)(local_res18[0] + 8) = *(uint *)(local_res18[0] + 8) & 0x8fffffff;
      }
      uVar5 = *param_2;
      if (uVar5 != 0) {
        if ((uVar5 & 1) == 0) {
          if ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *param_2 = uVar5 - 1;
        }
      }
      *param_2 = local_res18[0];
    }
    puVar11 = &stack0xffffffffffffffd8;
    do {
      puVar8 = (uint *)(puVar11 + -0x20);
      puVar11 = puVar11 + -0x20;
      lVar12 = lVar12 + -1;
      if (9 < ((byte)*puVar8 & 0x1f)) {
        if ((*puVar8 >> 9 & 1) == 0) {
          FUN_1435920c0(puVar11);
        }
        else {
          FUN_143592150();
        }
      }
    } while (lVar12 != 0);
    if (((local_res18[0] != 0) && ((local_res18[0] & 1) == 0)) &&
       ((*(uint *)(local_res18[0] + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_res18[0] + 8) = *(uint *)(local_res18[0] + 8) - 1;
      FUN_1434ef880();
    }
  }
  return;
}



// FUNCTION 14354dd90 FUN_14354dd90 body=30 status=ok
// SIG undefined FUN_14354dd90(void)

undefined8 * FUN_14354dd90(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14354bad0();
  return param_2;
}



// FUNCTION 14354ddc0 FUN_14354ddc0 body=30 status=ok
// SIG undefined FUN_14354ddc0(void)

undefined8 * FUN_14354ddc0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14354bf80();
  return param_2;
}



// FUNCTION 14354ddf0 FUN_14354ddf0 body=30 status=ok
// SIG undefined FUN_14354ddf0(void)

undefined8 * FUN_14354ddf0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14354c380();
  return param_2;
}



// FUNCTION 14354de20 FUN_14354de20 body=30 status=ok
// SIG undefined FUN_14354de20(void)

undefined8 * FUN_14354de20(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14354c6d0();
  return param_2;
}



// FUNCTION 14354de50 FUN_14354de50 body=30 status=ok
// SIG undefined FUN_14354de50(void)

undefined8 * FUN_14354de50(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14354cc00();
  return param_2;
}



// FUNCTION 14354de80 FUN_14354de80 body=30 status=ok
// SIG undefined FUN_14354de80(void)

undefined8 * FUN_14354de80(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14354d150();
  return param_2;
}



// FUNCTION 14354deb0 FUN_14354deb0 body=30 status=ok
// SIG undefined FUN_14354deb0(void)

undefined8 * FUN_14354deb0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14354d710();
  return param_2;
}



// FUNCTION 14354dee0 FUN_14354dee0 body=30 status=ok
// SIG undefined FUN_14354dee0(void)

undefined8 * FUN_14354dee0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14354da90();
  return param_2;
}



// FUNCTION 14354df10 FUN_14354df10 body=33 status=ok
// SIG undefined FUN_14354df10(void)

undefined8 * FUN_14354df10(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b34900;
  return param_1;
}



// FUNCTION 14354df40 FUN_14354df40 body=172 status=ok
// SIG undefined FUN_14354df40(void)

void FUN_14354df40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar1,param_3);
    *puVar1 = &PTR_FUN_145b34840;
    puVar1[8] = 0;
  }
  local_20 = 0;
  local_28[0] = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 14354e000 FUN_14354e000 body=33 status=ok
// SIG undefined FUN_14354e000(void)

undefined8 * FUN_14354e000(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14354e030 FUN_14354e030 body=214 status=ok
// SIG undefined FUN_14354e030(void)

undefined8 * FUN_14354e030(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b32da0);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b32da0);
    *puVar2 = &PTR_FUN_145b34900;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 14354e110 FUN_14354e110 body=33 status=ok
// SIG undefined FUN_14354e110(void)

undefined8 * FUN_14354e110(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14354e140 FUN_14354e140 body=228 status=ok
// SIG undefined FUN_14354e140(void)

undefined8 * FUN_14354e140(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b33360);
    *puVar2 = &PTR_FUN_145b17648;
    puVar5 = puVar2;
  }
  lVar3 = *plVar1;
  *param_1 = puVar5;
  lVar3 = (**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)
             UMaterialExpression::UMaterialExpression(lVar3,param_2,&PTR_DAT_145b33360);
  }
  FUN_1435b8600(*param_1,puVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar5,*param_1);
    *puVar5 = &PTR_ForEachChild_GC_145b18698;
  }
  return param_1;
}



// FUNCTION 14354e230 FUN_14354e230 body=33 status=ok
// SIG undefined FUN_14354e230(void)

undefined8 * FUN_14354e230(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18698;
  return param_1;
}



// FUNCTION 14354e260 FUN_14354e260 body=411 status=ok
// SIG undefined FUN_14354e260(void)

void FUN_14354e260(longlong param_1,ulonglong *param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7)

{
  int *piVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong local_res20;
  ulonglong local_38;
  undefined1 local_30 [8];
  longlong local_28;
  
  if ((param_4 == 0) || (param_5 == 0)) {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar4 = FUN_1435c8e40(local_30,0x3f1,uVar3);
    FUN_1435cbe70(uVar3,uVar4);
    piVar1 = (int *)(local_28 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    local_38 = 0;
    FUN_143543b60(param_4,&local_38);
    uVar2 = local_38;
    uVar3 = FUN_143590540();
    FUN_1435446c0(uVar2,uVar3,param_5,param_6,param_7);
    local_res20 = 0;
    FUN_143544060(param_4,&local_res20,param_4,local_38,param_3);
    if (&local_res20 != param_2) {
      if (local_res20 != 0) {
        *(int *)(local_res20 + 8) = *(int *)(local_res20 + 8) + 1;
        *(uint *)(local_res20 + 8) = *(uint *)(local_res20 + 8) & 0x8fffffff;
      }
      uVar2 = *param_2;
      if (uVar2 != 0) {
        if ((uVar2 & 1) == 0) {
          if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
            FUN_1434ef880(uVar2);
          }
        }
        else {
          *param_2 = uVar2 - 1;
        }
      }
      *param_2 = local_res20;
    }
    if (((local_res20 != 0) && ((local_res20 & 1) == 0)) &&
       ((*(uint *)(local_res20 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_res20 + 8) = *(uint *)(local_res20 + 8) - 1;
      FUN_1434ef880();
    }
    if (((local_38 != 0) && ((local_38 & 1) == 0)) && ((*(uint *)(local_38 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_38 + 8) = *(uint *)(local_38 + 8) - 1;
      FUN_1434ef880();
    }
  }
  return;
}



// FUNCTION 14354e410 FUN_14354e410 body=356 status=ok
// SIG undefined FUN_14354e410(void)

void FUN_14354e410(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  undefined8 uVar2;
  double dVar3;
  char cVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 local_48 [8];
  longlong local_40;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar5 = FUN_1435c8e40(local_48,0x3f1,uVar2);
    FUN_1435cbe70(uVar2,uVar5);
    piVar1 = (int *)(local_40 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    dVar7 = 0.0;
    dVar8 = 0.0;
    dVar6 = 0.0;
    dVar3 = 1.0;
    cVar4 = 1.1920928955078125e-07 < ABS(*(double *)(param_3 + 0xa0));
    if ((bool)cVar4) {
      dVar7 = *(double *)(param_3 + 0xa0) * *(double *)(param_4 + 0x40);
    }
    if (1.1920928955078125e-07 < ABS(*(double *)(param_3 + 0xa8))) {
      cVar4 = cVar4 + '\x01';
      dVar8 = *(double *)(param_3 + 0xa8) * *(double *)(param_4 + 0x48);
    }
    if (1.1920928955078125e-07 < ABS(*(double *)(param_3 + 0xb0))) {
      cVar4 = cVar4 + '\x01';
      dVar6 = *(double *)(param_3 + 0xb0) * *(double *)(param_4 + 0x50);
    }
    if (cVar4 != '\0') {
      dVar3 = dVar8 + dVar7 + dVar6;
    }
    FUN_1435464d0(param_3,dVar6,param_4);
    if ((1e-12 < ABS(dVar3)) && (1e-12 < ABS(1.0 - dVar3))) {
      FUN_143556ce0(*param_2,1.0 / dVar3);
    }
  }
  return;
}



// FUNCTION 14354e580 FUN_14354e580 body=1907 status=ok
// SIG undefined FUN_14354e580(void)

void FUN_14354e580(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  uint uVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  double dVar11;
  longlong local_res18;
  char local_1e8 [4];
  uint local_1e4;
  undefined1 local_1e0;
  undefined1 local_1df [3];
  uint local_1dc;
  uint local_1d8 [2];
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  uint local_1b8 [2];
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  uint local_198 [2];
  undefined8 local_190;
  double local_188;
  uint local_178 [2];
  undefined8 local_170;
  double local_168;
  int local_158 [2];
  undefined8 local_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 local_118 [64];
  undefined1 local_d8 [24];
  longlong local_c0;
  uint local_b8;
  
  local_res18 = param_3;
  if (((param_3 == 0) || (param_4 == 0)) || (param_5 == 0)) {
    uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar8 = FUN_1435c8e40(&local_140,0x3f1,uVar7);
    FUN_1435cbe70(uVar7,uVar8);
    piVar2 = (int *)(CONCAT44(uStack_134,uStack_138) + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    FUN_1436234c0(param_5,local_1e8);
    if (local_1e8[0] != '\0') {
      Scaleform::GFx::AS3::Instances::fl_events::MouseEvent::deltaGet(param_5,local_158);
      Scaleform::GFx::AS3::Instances::fl_events::MouseEvent::deltaGet(param_4,&local_150);
      if ((uint)(local_158[0] * 3) < (uint)((int)local_150 * 2)) {
        return;
      }
    }
    Scaleform::GFx::AS3::Instances::fl_events::MouseEvent::deltaGet(param_4,&local_1e4);
    iVar10 = 0;
    local_1dc = 0;
    if ((param_6 != 0) &&
       (Scaleform::GFx::AS3::Instances::fl_events::MouseEvent::deltaGet(param_6,&local_1dc),
       local_1dc < local_1e4)) {
      FUN_1436234c0(param_6,local_1e8);
      if (local_1e8[0] != '\0') {
        return;
      }
      uVar9 = local_1dc;
      if (local_1dc < local_1e4) {
        do {
          FUN_143516110(param_6,0);
          uVar9 = uVar9 + 1;
        } while (uVar9 < local_1e4);
      }
    }
    dVar3 = *(double *)(param_3 + 0xa0);
    dVar4 = *(double *)(param_3 + 0xa8);
    dVar5 = *(double *)(param_3 + 0xb0);
    local_1d8[0] = 0;
    local_1d0 = 0;
    local_1b8[0] = 0;
    local_1b0 = 0;
    local_178[0] = 0;
    local_170 = 0;
    uVar7 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_6 + 0x28) + 0x98) + 0x228);
    if (local_1e4 != 0) {
      uVar9 = 2;
      do {
        if (uVar9 - 2 < *(uint *)(param_4 + 0x60)) {
          dVar11 = *(double *)(*(longlong *)(param_4 + 0x58) + (ulonglong)(uVar9 - 2) * 8);
          if (9 < ((byte)local_1d8[0] & 0x1f)) {
            if ((local_1d8[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_1d8);
            }
            else {
              FUN_143592150();
            }
          }
          local_150._0_4_ = SUB84(dVar11,0);
          local_150._4_4_ = (undefined4)((ulonglong)dVar11 >> 0x20);
          local_1d8[0] = local_1d8[0] & 0xffffffe4 | 4;
          local_1c8 = (int)local_150;
          uStack_1c4 = local_150._4_4_;
          uStack_1c0 = uStack_148;
          uStack_1bc = uStack_144;
          local_150 = dVar11;
        }
        if (uVar9 - 1 < *(uint *)(param_4 + 0x60)) {
          uVar8 = *(undefined8 *)(*(longlong *)(param_4 + 0x58) + (ulonglong)(uVar9 - 1) * 8);
          if (9 < ((byte)local_1b8[0] & 0x1f)) {
            if ((local_1b8[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_1b8);
            }
            else {
              FUN_143592150();
            }
          }
          local_130._0_4_ = (undefined4)uVar8;
          local_130._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
          local_1b8[0] = local_1b8[0] & 0xffffffe4 | 4;
          local_1a8 = (undefined4)local_130;
          uStack_1a4 = local_130._4_4_;
          uStack_1a0 = uStack_128;
          uStack_19c = uStack_124;
          local_130 = uVar8;
        }
        if (uVar9 < *(uint *)(param_4 + 0x60)) {
          dVar11 = *(double *)(*(longlong *)(param_4 + 0x58) + (ulonglong)uVar9 * 8);
          if (9 < ((byte)local_178[0] & 0x1f)) {
            if ((local_178[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_178);
            }
            else {
              FUN_143592150();
            }
          }
          local_178[0] = local_178[0] & 0xffffffe4 | 4;
          local_168 = dVar11;
          local_140 = dVar11;
        }
        local_188 = 1.0;
        if (1.1920928955078125e-07 <= ABS(dVar5) && ABS(dVar5) != 1.1920928955078125e-07 ||
            (1.1920928955078125e-07 <= ABS(dVar4) && ABS(dVar4) != 1.1920928955078125e-07 ||
            1.1920928955078125e-07 <= ABS(dVar3) && ABS(dVar3) != 1.1920928955078125e-07)) {
          dVar11 = (double)CONCAT44(uStack_1a4,local_1a8) * dVar4 +
                   (double)CONCAT44(uStack_1c4,local_1c8) * dVar3 + local_168 * dVar5;
          local_188 = 1.0;
          if ((1e-12 <= ABS(dVar11) && ABS(dVar11) != 1e-12) &&
             (1e-12 <= ABS(1.0 - dVar11) && ABS(1.0 - dVar11) != 1e-12)) {
            local_188 = 1.0 / dVar11;
          }
        }
        local_198[0] = 4;
        local_190 = 0;
        FUN_1435565e0(param_6 + 0x40,local_1e8,uVar9,local_198,uVar7);
        if (9 < ((byte)local_198[0] & 0x1f)) {
          if ((local_198[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_198);
          }
          else {
            FUN_143592150();
          }
        }
        uVar1 = uVar9 + 1;
        uVar9 = uVar9 + 3;
      } while (uVar1 < local_1e4);
    }
    lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(param_4 + 0x28) + 0x98) + 0x228);
    FUN_1436234c0(param_4,local_1e8);
    FUN_143622f70(local_118,*(undefined8 *)(lVar6 + 0xd8),local_1e4,local_1e8[0]);
    uVar7 = FUN_143590540();
    FUN_143546680(local_res18,uVar7,param_4,local_118);
    uVar7 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_5 + 0x28) + 0x98) + 0x228);
    uVar9 = 2;
    if (local_1e4 != 0) {
      do {
        if (uVar9 - 2 < local_b8) {
          dVar3 = *(double *)(local_c0 + (ulonglong)(uVar9 - 2) * 8);
          if (9 < ((byte)local_1d8[0] & 0x1f)) {
            if ((local_1d8[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_1d8);
            }
            else {
              FUN_143592150();
            }
          }
          local_140._0_4_ = SUB84(dVar3,0);
          local_140._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
          local_1d8[0] = local_1d8[0] & 0xffffffe4 | 4;
          local_1c8 = (undefined4)local_140;
          uStack_1c4 = local_140._4_4_;
          uStack_1c0 = uStack_138;
          uStack_1bc = uStack_134;
          local_140 = dVar3;
        }
        if (uVar9 - 1 < local_b8) {
          uVar8 = *(undefined8 *)(local_c0 + (ulonglong)(uVar9 - 1) * 8);
          if (9 < ((byte)local_1b8[0] & 0x1f)) {
            if ((local_1b8[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_1b8);
            }
            else {
              FUN_143592150();
            }
          }
          local_130._0_4_ = (undefined4)uVar8;
          local_130._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
          local_1b8[0] = local_1b8[0] & 0xffffffe4 | 4;
          local_1a8 = (undefined4)local_130;
          uStack_1a4 = local_130._4_4_;
          uStack_1a0 = uStack_128;
          uStack_19c = uStack_124;
          local_130 = uVar8;
        }
        if (uVar9 < *(uint *)(param_6 + 0x60)) {
          dVar3 = *(double *)(*(longlong *)(param_6 + 0x58) + (ulonglong)uVar9 * 8);
          if (9 < ((byte)local_178[0] & 0x1f)) {
            if ((local_178[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_178);
            }
            else {
              FUN_143592150();
            }
          }
          local_178[0] = local_178[0] & 0xffffffe4 | 4;
          local_168 = dVar3;
          local_150 = dVar3;
        }
        if (1e-12 < ABS(1.0 - local_168)) {
          local_198[0] = 4;
          local_188 = local_168 * (double)CONCAT44(uStack_1c4,local_1c8);
          local_190 = 0;
          dVar3 = local_168 * (double)CONCAT44(uStack_1a4,local_1a8);
          FUN_1435565e0(param_5 + 0x40,&local_1e0,iVar10,local_198,uVar7);
          if (9 < ((byte)local_198[0] & 0x1f)) {
            if ((local_198[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_198);
            }
            else {
              FUN_143592150();
            }
          }
          local_198[0] = 4;
          local_190 = 0;
          local_188 = dVar3;
          FUN_1435565e0(param_5 + 0x40,local_1df,iVar10 + 1,local_198,uVar7);
          if (9 < ((byte)local_198[0] & 0x1f)) {
            if ((local_198[0] >> 9 & 1) == 0) {
              FUN_1435920c0(local_198);
            }
            else {
              FUN_143592150();
            }
          }
        }
        else {
          FUN_1435565e0(param_5 + 0x40,&local_res18,iVar10,local_1d8,uVar7);
          FUN_1435565e0(param_5 + 0x40,local_1e8,iVar10 + 1,local_1b8,uVar7);
        }
        iVar10 = iVar10 + 2;
        uVar1 = uVar9 + 1;
        uVar9 = uVar9 + 3;
      } while (uVar1 < local_1e4);
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_c0);
    FUN_14361f810(local_d8);
    FUN_1435b9dc0(local_118);
    if (9 < ((byte)local_178[0] & 0x1f)) {
      if ((local_178[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_178);
      }
      else {
        FUN_143592150();
      }
    }
    if (9 < ((byte)local_1b8[0] & 0x1f)) {
      if ((local_1b8[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_1b8);
      }
      else {
        FUN_143592150();
      }
    }
    if (9 < ((byte)local_1d8[0] & 0x1f)) {
      if ((local_1d8[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_1d8);
      }
      else {
        FUN_143592150();
      }
    }
  }
  return;
}



// FUNCTION 14354ed30 FUN_14354ed30 body=197 status=ok
// SIG undefined FUN_14354ed30(void)

void FUN_14354ed30(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(param_6 + 0x10);
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78420)((longlong)DAT_146b78428 + *(longlong *)(param_3 + 0x10),&local_18);
  }
  uVar1 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880(local_18);
  }
  return;
}



// FUNCTION 14354ee00 FUN_14354ee00 body=175 status=ok
// SIG undefined FUN_14354ee00(void)

void FUN_14354ee00(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b78500)((longlong)DAT_146b78508 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14354eef0 FUN_14354eef0 body=279 status=ok
// SIG undefined FUN_14354eef0(void)

void FUN_14354eef0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = *(undefined8 *)(param_6 + 0x10);
  local_28 = *(undefined8 *)(param_6 + 0x30);
  local_20 = *(undefined8 *)(param_6 + 0x50);
  local_18 = *(undefined8 *)(param_6 + 0x70);
  local_10 = *(undefined8 *)(param_6 + 0x90);
  local_38 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78890)((longlong)DAT_146b78898 + *(longlong *)(param_3 + 0x10),&local_38,local_28,
                     local_28,local_20,local_18,local_10);
  }
  uVar1 = local_38;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_38 != 0) {
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      *(uint *)(local_38 + 8) = *(uint *)(local_38 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_38);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_38 != 0) && ((local_38 & 1) == 0)) && ((*(uint *)(local_38 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_38 + 8) = *(uint *)(local_38 + 8) - 1;
    FUN_1434ef880(local_38);
  }
  return;
}



// FUNCTION 14354f090 FUN_14354f090 body=175 status=ok
// SIG undefined FUN_14354f090(void)

void FUN_14354f090(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b787d0)((longlong)DAT_146b787d8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14354f180 FUN_14354f180 body=212 status=ok
// SIG undefined FUN_14354f180(void)

void FUN_14354f180(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = *(undefined8 *)(param_6 + 0x10);
  local_18 = *(undefined8 *)(param_6 + 0x30);
  local_28 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b788a0)((longlong)DAT_146b788a8 + *(longlong *)(param_3 + 0x10),&local_28,local_20,
                     local_18);
  }
  uVar1 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_28 != 0) {
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_28);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_28 != 0) && ((local_28 & 1) == 0)) && ((*(uint *)(local_28 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) - 1;
    FUN_1434ef880(local_28);
  }
  return;
}



// FUNCTION 14354f260 FUN_14354f260 body=189 status=ok
// SIG undefined FUN_14354f260(void)

void FUN_14354f260(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28 = Scaleform::GFx::NumberUtil::NaN();
  local_20 = *(undefined8 *)(param_6 + 0x10);
  uVar2 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78190)(DAT_146b78198 + lVar1,&local_28);
    uVar2 = local_28;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      local_28 = uVar2;
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14354f320 FUN_14354f320 body=197 status=ok
// SIG undefined FUN_14354f320(void)

void FUN_14354f320(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(param_6 + 0x10);
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78740)((longlong)DAT_146b78748 + *(longlong *)(param_3 + 0x10),&local_18);
  }
  uVar1 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880(local_18);
  }
  return;
}



// FUNCTION 14354f480 FUN_14354f480 body=181 status=ok
// SIG undefined FUN_14354f480(void)

void FUN_14354f480(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined1 local_18;
  
  local_28[0] = 0;
  local_20 = *(undefined8 *)(param_6 + 0x10);
  local_18 = *(undefined1 *)(param_6 + 0x30);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b781a0)((longlong)DAT_146b781a8 + *(longlong *)(param_3 + 0x10),local_28);
  }
  uVar1 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_47,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14354f590 FUN_14354f590 body=171 status=ok
// SIG undefined FUN_14354f590(void)

void FUN_14354f590(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_18[0] = 0;
  local_10 = *(undefined8 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78750)((longlong)DAT_146b78758 + *(longlong *)(param_3 + 0x10),local_18);
  }
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14354f670 FUN_14354f670 body=175 status=ok
// SIG undefined FUN_14354f670(void)

void FUN_14354f670(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b787f0)((longlong)DAT_146b787f8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14354f720 FUN_14354f720 body=175 status=ok
// SIG undefined FUN_14354f720(void)

void FUN_14354f720(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b782e0)((longlong)DAT_146b782e8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14354f800 FUN_14354f800 body=144 status=ok
// SIG undefined FUN_14354f800(void)

void FUN_14354f800(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b78760)((longlong)DAT_146b78768 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 14354f8c0 FUN_14354f8c0 body=175 status=ok
// SIG undefined FUN_14354f8c0(void)

void FUN_14354f8c0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b78800)((longlong)DAT_146b78808 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14354f970 FUN_14354f970 body=266 status=ok
// SIG undefined FUN_14354f970(void)

void FUN_14354f970(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong local_18;
  longlong local_10;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  local_18 = 0;
  if ((((byte)*param_6 & 0x1f) == 0xc) && (*(longlong *)(param_6 + 4) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_10 = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_10 = *(longlong *)(param_6 + 4);
    *(int *)(local_10 + 0x18) = *(int *)(local_10 + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b782f0)(DAT_146b782f8 + lVar2,&local_18,&local_10);
  }
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar4 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar4 != 0) && ((uVar4 & 1) == 0)) && ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
      FUN_1434ef880(uVar4);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14354fa80 FUN_14354fa80 body=196 status=ok
// SIG undefined FUN_14354fa80(void)

void FUN_14354fa80(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  local_28[0] = 0;
  local_20 = *(undefined8 *)(param_6 + 0x10);
  local_18 = *(undefined8 *)(param_6 + 0x30);
  local_10 = *(undefined1 *)(param_6 + 0x50);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b781c0)((longlong)DAT_146b781c8 + *(longlong *)(param_3 + 0x10),local_28,local_20,
                     local_10,local_10);
  }
  uVar1 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_47,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14354fb80 FUN_14354fb80 body=112 status=ok
// SIG undefined FUN_14354fb80(void)

void FUN_14354fb80(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b78470)(DAT_146b78478 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14354fbf0 FUN_14354fbf0 body=175 status=ok
// SIG undefined FUN_14354fbf0(void)

void FUN_14354fbf0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b78810)((longlong)DAT_146b78818 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14354fca0 FUN_14354fca0 body=197 status=ok
// SIG undefined FUN_14354fca0(void)

void FUN_14354fca0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(param_6 + 0x10);
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78300)((longlong)DAT_146b78308 + *(longlong *)(param_3 + 0x10),&local_18);
  }
  uVar1 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880(local_18);
  }
  return;
}



// FUNCTION 14354fdc0 FUN_14354fdc0 body=197 status=ok
// SIG undefined FUN_14354fdc0(void)

void FUN_14354fdc0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(param_6 + 0x10);
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78480)((longlong)DAT_146b78488 + *(longlong *)(param_3 + 0x10),&local_18);
  }
  uVar1 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880(local_18);
  }
  return;
}



// FUNCTION 14354fee0 FUN_14354fee0 body=148 status=ok
// SIG undefined FUN_14354fee0(void)

void FUN_14354fee0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b781e0)(DAT_146b781e8 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 14354ffa0 FUN_14354ffa0 body=175 status=ok
// SIG undefined FUN_14354ffa0(void)

void FUN_14354ffa0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b78830)((longlong)DAT_146b78838 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143550080 FUN_143550080 body=231 status=ok
// SIG undefined FUN_143550080(void)

void FUN_143550080(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = *(undefined8 *)(param_6 + 0x10);
  local_18 = *(undefined8 *)(param_6 + 0x30);
  local_10 = *(undefined8 *)(param_6 + 0x50);
  local_28 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78320)((longlong)DAT_146b78328 + *(longlong *)(param_3 + 0x10),&local_28,local_20,
                     local_18,local_10);
  }
  uVar1 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_28 != 0) {
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_28);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_28 != 0) && ((local_28 & 1) == 0)) && ((*(uint *)(local_28 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) - 1;
    FUN_1434ef880(local_28);
  }
  return;
}



// FUNCTION 143550270 FUN_143550270 body=148 status=ok
// SIG undefined FUN_143550270(void)

void FUN_143550270(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b78510)(DAT_146b78518 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143550310 FUN_143550310 body=175 status=ok
// SIG undefined FUN_143550310(void)

void FUN_143550310(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b78850)((longlong)DAT_146b78858 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1435503c0 FUN_1435503c0 body=112 status=ok
// SIG undefined FUN_1435503c0(void)

void FUN_1435503c0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b787b0)(DAT_146b787b8 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143550430 FUN_143550430 body=144 status=ok
// SIG undefined FUN_143550430(void)

void FUN_143550430(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [16];
  
  local_18[0] = 0;
  (*DAT_146b78340)((longlong)DAT_146b78348 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1435504c0 FUN_1435504c0 body=197 status=ok
// SIG undefined FUN_1435504c0(void)

void FUN_1435504c0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(param_6 + 0x10);
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78210)((longlong)DAT_146b78218 + *(longlong *)(param_3 + 0x10),&local_18);
  }
  uVar1 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880(local_18);
  }
  return;
}



// FUNCTION 143550590 FUN_143550590 body=197 status=ok
// SIG undefined FUN_143550590(void)

void FUN_143550590(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(param_6 + 0x10);
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78520)((longlong)DAT_146b78528 + *(longlong *)(param_3 + 0x10),&local_18);
  }
  uVar1 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880(local_18);
  }
  return;
}



// FUNCTION 143550690 FUN_143550690 body=197 status=ok
// SIG undefined FUN_143550690(void)

void FUN_143550690(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(param_6 + 0x10);
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b787c0)((longlong)DAT_146b787c8 + *(longlong *)(param_3 + 0x10),&local_18);
  }
  uVar1 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880(local_18);
  }
  return;
}



// FUNCTION 143550760 FUN_143550760 body=112 status=ok
// SIG undefined FUN_143550760(void)

void FUN_143550760(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b78220)(DAT_146b78228 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435507d0 FUN_1435507d0 body=175 status=ok
// SIG undefined FUN_1435507d0(void)

void FUN_1435507d0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b78530)((longlong)DAT_146b78538 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1435508c0 FUN_1435508c0 body=175 status=ok
// SIG undefined FUN_1435508c0(void)

void FUN_1435508c0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b78870)((longlong)DAT_146b78878 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1435509d0 FUN_1435509d0 body=197 status=ok
// SIG undefined FUN_1435509d0(void)

void FUN_1435509d0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(param_6 + 0x10);
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78880)((longlong)DAT_146b78888 + *(longlong *)(param_3 + 0x10),&local_18);
  }
  uVar1 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880(local_18);
  }
  return;
}



// FUNCTION 143550aa0 FUN_143550aa0 body=171 status=ok
// SIG undefined FUN_143550aa0(void)

void FUN_143550aa0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_18[0] = 0;
  local_10 = *(undefined8 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78550)((longlong)DAT_146b78558 + *(longlong *)(param_3 + 0x10),local_18);
  }
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 143550b90 FUN_143550b90 body=148 status=ok
// SIG undefined FUN_143550b90(void)

void FUN_143550b90(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b785e0)(DAT_146b785e8 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143550d00 FUN_143550d00 body=175 status=ok
// SIG undefined FUN_143550d00(void)

void FUN_143550d00(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b78600)((longlong)DAT_146b78608 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143550e50 FUN_143550e50 body=253 status=ok
// SIG undefined FUN_143550e50(void)

void FUN_143550e50(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong local_18 [2];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  local_20 = *(undefined8 *)(param_6 + 0x10);
  local_28[0] = 0;
  if ((((byte)*(undefined4 *)(param_6 + 0x20) & 0x1f) == 0xc) &&
     (*(longlong *)(param_6 + 0x30) == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
    local_18[0] = lVar3 + 0x80;
    piVar1 = (int *)(lVar3 + 0x98);
    *piVar1 = *piVar1 + 1;
  }
  else {
    local_18[0] = *(longlong *)(param_6 + 0x30);
    *(int *)(local_18[0] + 0x18) = *(int *)(local_18[0] + 0x18) + 1;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b783a0)(DAT_146b783a8 + lVar2,local_28,local_20,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar4 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_47,uVar4);
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143550f50 FUN_143550f50 body=197 status=ok
// SIG undefined FUN_143550f50(void)

void FUN_143550f50(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(param_6 + 0x10);
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78590)((longlong)DAT_146b78598 + *(longlong *)(param_3 + 0x10),&local_18);
  }
  uVar1 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880(local_18);
  }
  return;
}



// FUNCTION 143551020 FUN_143551020 body=148 status=ok
// SIG undefined FUN_143551020(void)

void FUN_143551020(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b78620)(DAT_146b78628 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1435510c0 FUN_1435510c0 body=197 status=ok
// SIG undefined FUN_1435510c0(void)

void FUN_1435510c0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(param_6 + 0x10);
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b783b0)((longlong)DAT_146b783b8 + *(longlong *)(param_3 + 0x10),&local_18);
  }
  uVar1 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880(local_18);
  }
  return;
}



// FUNCTION 143551190 FUN_143551190 body=112 status=ok
// SIG undefined FUN_143551190(void)

void FUN_143551190(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b785a0)(DAT_146b785a8 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143551260 FUN_143551260 body=148 status=ok
// SIG undefined FUN_143551260(void)

void FUN_143551260(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b78640)(DAT_146b78648 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143551350 FUN_143551350 body=175 status=ok
// SIG undefined FUN_143551350(void)

void FUN_143551350(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b78660)((longlong)DAT_146b78668 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143551400 FUN_143551400 body=148 status=ok
// SIG undefined FUN_143551400(void)

void FUN_143551400(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b780b0)(DAT_146b780b8 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1435514a0 FUN_1435514a0 body=201 status=ok
// SIG undefined FUN_1435514a0(void)

void FUN_1435514a0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_38 = Scaleform::GFx::NumberUtil::NaN();
  local_30 = *(undefined8 *)(param_6 + 0x10);
  local_28 = *(undefined8 *)(param_6 + 0x30);
  uVar2 = local_38;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78230)(DAT_146b78238 + lVar1,&local_38);
    uVar2 = local_38;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      local_38 = uVar2;
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_50;
  }
  return;
}



// FUNCTION 1435515a0 FUN_1435515a0 body=148 status=ok
// SIG undefined FUN_1435515a0(void)

void FUN_1435515a0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b780c0)(DAT_146b780c8 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143551640 FUN_143551640 body=201 status=ok
// SIG undefined FUN_143551640(void)

void FUN_143551640(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_38 = Scaleform::GFx::NumberUtil::NaN();
  local_30 = *(undefined8 *)(param_6 + 0x10);
  local_28 = *(undefined8 *)(param_6 + 0x30);
  uVar2 = local_38;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78240)(DAT_146b78248 + lVar1,&local_38);
    uVar2 = local_38;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      local_38 = uVar2;
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_50;
  }
  return;
}



// FUNCTION 143551710 FUN_143551710 body=148 status=ok
// SIG undefined FUN_143551710(void)

void FUN_143551710(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b78680)(DAT_146b78688 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 1435517e0 FUN_1435517e0 body=145 status=ok
// SIG undefined FUN_1435517e0(void)

void FUN_1435517e0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  undefined4 uVar1;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  (*DAT_146b78070)((longlong)DAT_146b78078 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_34,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1435518b0 FUN_1435518b0 body=148 status=ok
// SIG undefined FUN_1435518b0(void)

void FUN_1435518b0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b780e0)(DAT_146b780e8 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143551950 FUN_143551950 body=175 status=ok
// SIG undefined FUN_143551950(void)

void FUN_143551950(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b786a0)((longlong)DAT_146b786a8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143551a60 FUN_143551a60 body=201 status=ok
// SIG undefined FUN_143551a60(void)

void FUN_143551a60(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_38 = Scaleform::GFx::NumberUtil::NaN();
  local_30 = *(undefined8 *)(param_6 + 0x10);
  local_28 = *(undefined8 *)(param_6 + 0x30);
  uVar2 = local_38;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b785b0)(DAT_146b785b8 + lVar1,&local_38);
    uVar2 = local_38;
  }
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      local_38 = uVar2;
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_50;
  }
  return;
}



// FUNCTION 143551b90 FUN_143551b90 body=148 status=ok
// SIG undefined FUN_143551b90(void)

void FUN_143551b90(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b78100)(DAT_146b78108 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143551c30 FUN_143551c30 body=231 status=ok
// SIG undefined FUN_143551c30(void)

void FUN_143551c30(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = *(undefined8 *)(param_6 + 0x10);
  local_18 = *(undefined8 *)(param_6 + 0x30);
  local_10 = *(undefined8 *)(param_6 + 0x50);
  local_28 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b785c0)((longlong)DAT_146b785c8 + *(longlong *)(param_3 + 0x10),&local_28,local_20,
                     local_18,local_10);
  }
  uVar1 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_28 != 0) {
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_28);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_28 != 0) && ((local_28 & 1) == 0)) && ((*(uint *)(local_28 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) - 1;
    FUN_1434ef880(local_28);
  }
  return;
}



// FUNCTION 143551d20 FUN_143551d20 body=175 status=ok
// SIG undefined FUN_143551d20(void)

void FUN_143551d20(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b786c0)((longlong)DAT_146b786c8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143551dd0 FUN_143551dd0 body=112 status=ok
// SIG undefined FUN_143551dd0(void)

void FUN_143551dd0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  (*DAT_146b780a0)(DAT_146b780a8 + lVar2,local_18);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    FUN_143590250(param_4,local_18);
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143551e70 FUN_143551e70 body=148 status=ok
// SIG undefined FUN_143551e70(void)

void FUN_143551e70(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b78250)(DAT_146b78258 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143551f10 FUN_143551f10 body=175 status=ok
// SIG undefined FUN_143551f10(void)

void FUN_143551f10(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b784a0)((longlong)DAT_146b784a8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143551fc0 FUN_143551fc0 body=212 status=ok
// SIG undefined FUN_143551fc0(void)

void FUN_143551fc0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = *(undefined8 *)(param_6 + 0x10);
  local_18 = *(undefined8 *)(param_6 + 0x30);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b785d0)((longlong)DAT_146b785d8 + *(longlong *)(param_3 + 0x10),&local_28);
  }
  uVar1 = local_28;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_28 != 0) {
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_28);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_28 != 0) && ((local_28 & 1) == 0)) && ((*(uint *)(local_28 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) - 1;
    FUN_1434ef880(local_28);
  }
  return;
}



// FUNCTION 1435520a0 FUN_1435520a0 body=148 status=ok
// SIG undefined FUN_1435520a0(void)

void FUN_1435520a0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b78120)(DAT_146b78128 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143552140 FUN_143552140 body=181 status=ok
// SIG undefined FUN_143552140(void)

void FUN_143552140(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  
  local_28[0] = 0;
  local_20 = *(undefined8 *)(param_6 + 0x10);
  local_18 = *(undefined8 *)(param_6 + 0x30);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b786d0)((longlong)DAT_146b786d8 + *(longlong *)(param_3 + 0x10),local_28);
  }
  uVar1 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_47,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143552200 FUN_143552200 body=175 status=ok
// SIG undefined FUN_143552200(void)

void FUN_143552200(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b78260)((longlong)DAT_146b78268 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1435522e0 FUN_1435522e0 body=175 status=ok
// SIG undefined FUN_1435522e0(void)

void FUN_1435522e0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b783e0)((longlong)DAT_146b783e8 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1435523c0 FUN_1435523c0 body=171 status=ok
// SIG undefined FUN_1435523c0(void)

void FUN_1435523c0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_18[0] = 0;
  local_10 = *(undefined8 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b786e0)((longlong)DAT_146b786e8 + *(longlong *)(param_3 + 0x10),local_18);
  }
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1435524a0 FUN_1435524a0 body=148 status=ok
// SIG undefined FUN_1435524a0(void)

void FUN_1435524a0(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b784c0)(DAT_146b784c8 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143552570 FUN_143552570 body=148 status=ok
// SIG undefined FUN_143552570(void)

void FUN_143552570(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b78140)(DAT_146b78148 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}



// FUNCTION 143552610 FUN_143552610 body=171 status=ok
// SIG undefined FUN_143552610(void)

void FUN_143552610(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_18[0] = 0;
  local_10 = *(undefined8 *)(param_6 + 0x10);
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b786f0)((longlong)DAT_146b786f8 + *(longlong *)(param_3 + 0x10),local_18);
  }
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe1;
    *param_4 = *param_4 | 1;
    *(ulonglong *)(param_4 + 4) = CONCAT71(uStack_37,uVar1);
    *(undefined8 *)(param_4 + 6) = uStack_30;
  }
  return;
}



// FUNCTION 1435526c0 FUN_1435526c0 body=175 status=ok
// SIG undefined FUN_1435526c0(void)

void FUN_1435526c0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong local_18 [2];
  
  local_18[0] = 0;
  (*DAT_146b78280)((longlong)DAT_146b78288 + *(longlong *)(param_3 + 0x10),local_18);
  uVar1 = local_18[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18[0] != 0) {
      *(int *)(local_18[0] + 8) = *(int *)(local_18[0] + 8) + 1;
      *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18[0]);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18[0] != 0) && ((local_18[0] & 1) == 0)) &&
     ((*(uint *)(local_18[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18[0] + 8) = *(uint *)(local_18[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1435527a0 FUN_1435527a0 body=197 status=ok
// SIG undefined FUN_1435527a0(void)

void FUN_1435527a0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(param_6 + 0x10);
  local_18 = 0;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78150)((longlong)DAT_146b78158 + *(longlong *)(param_3 + 0x10),&local_18);
  }
  uVar1 = local_18;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (local_18 != 0) {
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) & 0x8fffffff;
    }
    FUN_1435903c0(param_4,local_18);
    if (((uVar1 != 0) && ((uVar1 & 1) == 0)) && ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880(uVar1);
    }
  }
  if (((local_18 != 0) && ((local_18 & 1) == 0)) && ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
    FUN_1434ef880(local_18);
  }
  return;
}



// FUNCTION 1435528a0 FUN_1435528a0 body=89 status=ok
// SIG undefined FUN_1435528a0(void)

void FUN_1435528a0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  if (*(char *)(param_2 + 0xb8) == '\0') {
    (*DAT_146b78400)((longlong)DAT_146b78408 + *(longlong *)(param_3 + 0x10),param_4,
                     *(undefined8 *)(param_6 + 0x10),*(undefined8 *)(param_6 + 0x30),
                     *(undefined8 *)(param_6 + 0x50),*(undefined8 *)(param_6 + 0x70),
                     *(undefined8 *)(param_6 + 0x90));
  }
  return;
}



// FUNCTION 143552930 FUN_143552930 body=148 status=ok
// SIG undefined FUN_143552930(void)

void FUN_143552930(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 local_28 [4];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  local_28[0] = Scaleform::GFx::NumberUtil::NaN();
  (*DAT_146b784e0)(DAT_146b784e8 + lVar1,local_28);
  uVar2 = local_28[0];
  if (*(char *)(param_2 + 0xb8) == '\0') {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe4;
    *param_4 = *param_4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar2;
    *(undefined8 *)(param_4 + 6) = uStack_40;
  }
  return;
}


