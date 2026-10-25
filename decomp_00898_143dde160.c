// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143dde160 __sse2_cos2 body=1182 status=ok
// SIG undefined __sse2_cos2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __sse2_cos2(double param_1,undefined4 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  uint uVar3;
  int iVar4;
  double in_XMM0_Qb;
  double dVar5;
  undefined4 uVar6;
  double dVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  ulonglong local_68;
  ulonglong local_58;
  double local_38;
  
  param_1 = ABS(param_1);
  dVar5 = ABS(in_XMM0_Qb);
  dVar7 = (param_1 + 1.5707963267948966) * 0.3183098861837907 - -6755399441055744.0;
  uVar6 = (undefined4)(-(ulonglong)(128000.0 < ABS(param_1)) >> 0x20);
  uVar8 = (longlong)dVar7 << 0x3f;
  dVar11 = (dVar7 + -6755399441055744.0) - 0.5;
  auVar1._8_4_ = (int)-(ulonglong)(128000.0 < ABS(dVar5));
  auVar1._0_8_ = -(ulonglong)(128000.0 < ABS(param_1));
  auVar1._12_4_ = (int)(-(ulonglong)(128000.0 < ABS(dVar5)) >> 0x20);
  uVar3 = movmskpd(in_EAX,auVar1);
  dVar10 = dVar11 * 3.141592502593994;
  dVar7 = dVar11 * 1.5099578831723193e-07;
  if (uVar3 != 0) {
    auVar2._4_4_ = -(uint)((uint)((ulonglong)param_1 >> 0x20) < 0x41d00000);
    auVar2._0_4_ = -(uint)(SUB84(param_1,0) < 0);
    auVar2._8_4_ = -(uint)(SUB84(dVar5,0) < 0);
    auVar2._12_4_ = -(uint)((uint)((ulonglong)dVar5 >> 0x20) < 0x41d00000);
    iVar4 = movmskpd(param_2,auVar2);
    if (iVar4 == 3) {
      if (uVar3 != 3) {
        dVar5 = ((param_1 - dVar10) - dVar7) - dVar11 * 1.078060505991553e-14;
        local_68 = ((ulonglong)(dVar11 * -6.564007085747001e-22 + dVar5) ^ uVar8) &
                   (CONCAT44(uVar6,uVar6) ^ 0xffffffffffffffff);
        local_58 = (ulonglong)(dVar5 * dVar5) & (CONCAT44(uVar6,uVar6) ^ 0xffffffffffffffff);
      }
      uVar8 = (ulonglong)(uint)(int)(param_1 * 0.6366197723675814) | (ulonglong)DAT_146febe10;
      dVar9 = (double)(uVar8 | 0x4338000000000000) - 6755399441055744.0;
      param_1 = param_1 - dVar9 * 1.5707950592041016;
      dVar5 = param_1 - dVar9 * 1.267590960196685e-06;
      dVar7 = dVar5 - dVar9 * -1.6513982022126061e-13;
      dVar5 = ((param_1 - dVar5) - dVar9 * 1.267590960196685e-06) +
              ((dVar5 - dVar7) - dVar9 * -1.6513982022126061e-13);
      dVar10 = dVar7 + dVar5;
      dVar11 = dVar10 - dVar9 * -1.3350302175814904e-19;
      dVar11 = dVar11 + ((dVar5 + (dVar7 - dVar10) +
                         ((dVar10 - dVar11) - dVar9 * -1.3350302175814904e-19)) -
                        dVar9 * 1.6446256936324258e-26);
      dVar5 = (double)((uVar8 & 2) << 0x3e ^ (ulonglong)DAT_146febda0 ^ (ulonglong)dVar11);
      dVar11 = dVar11 * dVar11;
      if (uVar3 != 3) {
        dVar5 = (double)((ulonglong)dVar5 & CONCAT44(uVar6,uVar6) | local_68);
        dVar11 = (double)((ulonglong)dVar11 & CONCAT44(uVar6,uVar6) | local_58);
      }
      dVar7 = dVar11 * dVar11;
      local_38 = dVar7 * (((dVar7 * 2.7204790957888847e-15 + 1.605893649037159e-10) * dVar7 +
                          2.7557319210152756e-06) * dVar7 + 0.008333333333333165) * dVar5 +
                 (((dVar7 * -7.642917806891047e-13 + -2.5052106798274583e-08) * dVar7 +
                  -0.0001984126984120184) * dVar7 + -0.16666666666666666) * dVar11 * dVar5 + dVar5;
    }
    else {
      if (uVar3 != 3) {
        dVar7 = ((param_1 - dVar10) - dVar7) - dVar11 * 1.078060505991553e-14;
        dVar10 = dVar7 * dVar7;
        dVar11 = (double)((ulonglong)(dVar11 * -6.564007085747001e-22 + dVar7) ^ uVar8);
        dVar7 = dVar10 * dVar10;
        local_38 = dVar7 * (((dVar7 * 2.7204790957888847e-15 + 1.605893649037159e-10) * dVar7 +
                            2.7557319210152756e-06) * dVar7 + 0.008333333333333165) * dVar11 +
                   (((dVar7 * -7.642917806891047e-13 + -2.5052106798274583e-08) * dVar7 +
                    -0.0001984126984120184) * dVar7 + -0.16666666666666666) * dVar10 * dVar11 +
                   dVar11;
      }
      if ((uVar3 & 1) != 0) {
        local_38 = (double)__static_scalar_cos(param_1);
      }
      if (((int)uVar3 >> 1 & 1U) != 0) {
        __static_scalar_cos(dVar5);
      }
    }
    return local_38;
  }
  dVar5 = ((param_1 - dVar10) - dVar7) - dVar11 * 1.078060505991553e-14;
  dVar7 = dVar5 * dVar5;
  dVar10 = (double)((ulonglong)(dVar11 * -6.564007085747001e-22 + dVar5) ^ uVar8);
  dVar5 = dVar7 * dVar7;
  return dVar5 * (((dVar5 * 2.7204790957888847e-15 + 1.605893649037159e-10) * dVar5 +
                  2.7557319210152756e-06) * dVar5 + 0.008333333333333165) * dVar10 +
         (((dVar5 * -7.642917806891047e-13 + -2.5052106798274583e-08) * dVar5 +
          -0.0001984126984120184) * dVar5 + -0.16666666666666666) * dVar7 * dVar10 + dVar10;
}



// FUNCTION 143dde600 __security_init_cookie body=172 status=ok
// SIG void __security_init_cookie(void)

void __cdecl __security_init_cookie(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  _FILETIME local_res10;
  LARGE_INTEGER local_res18;
  
  if (DAT_1468387a8 == 0x2b992ddfa232) {
    local_res10.dwLowDateTime = 0;
    local_res10.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_1468387a8 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_1468387a8 == 0x2b992ddfa232) {
      DAT_1468387a8 = 0x2b992ddfa233;
    }
  }
  DAT_1468387a0 = ~DAT_1468387a8;
  return;
}



// FUNCTION 143dde6ac __scrt_initialize_default_local_stdio_options body=27 status=ok
// SIG undefined __scrt_initialize_default_local_stdio_options(void)

void __scrt_initialize_default_local_stdio_options(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)__local_stdio_printf_options();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)__local_stdio_scanf_options();
  *puVar1 = *puVar1 | 2;
  return;
}



// FUNCTION 143dde6c8 __scrt_is_user_matherr_present body=12 status=ok
// SIG undefined __scrt_is_user_matherr_present(void)

bool __scrt_is_user_matherr_present(void)

{
  return DAT_1468387c0 == 0;
}



// FUNCTION 143dde6d4 FUN_143dde6d4 body=8 status=ok
// SIG undefined FUN_143dde6d4(void)

undefined * FUN_143dde6d4(void)

{
  return &DAT_146bcd5a8;
}



// FUNCTION 143dde6dc FUN_143dde6dc body=8 status=ok
// SIG undefined FUN_143dde6dc(void)

undefined * FUN_143dde6dc(void)

{
  return &DAT_146bcd5a0;
}



// FUNCTION 143dde6e4 _RTC_Initialize body=60 status=ok
// SIG undefined _RTC_Initialize(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void _RTC_Initialize(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_145e3f3e0; puVar1 < &DAT_145e3f3e0; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



// FUNCTION 143dde720 _RTC_Initialize body=60 status=ok
// SIG undefined _RTC_Initialize(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void _RTC_Initialize(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_145e3f3f0; puVar1 < &DAT_145e3f3f0; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



// FUNCTION 143dde760 _raise_zerodivide body=18 status=ok
// SIG undefined _raise_zerodivide(void)

undefined8 _raise_zerodivide(void)

{
  return 0xf0000000ff800000;
}



// FUNCTION 143dde780 FUN_143dde780 body=1145 status=ok
// SIG undefined FUN_143dde780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dde780(double param_1)

{
  longlong lVar1;
  longlong lVar2;
  ushort uVar3;
  undefined1 auVar4 [12];
  ulonglong uVar5;
  int iVar6;
  undefined1 in_XMM0 [16];
  undefined1 auVar7 [12];
  ulonglong uVar8;
  double in_XMM1_Qb;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar26 [16];
  int local_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  uint uVar18;
  
  auVar7 = in_XMM0._4_12_ & DAT_145dc71b0._4_12_;
  auVar4._4_8_ = auVar7._4_8_;
  auVar4._0_4_ = auVar7._0_4_ + 0x200;
  auVar11._0_8_ = auVar4._0_8_ << 0x20;
  auVar11._8_4_ = auVar7._4_4_;
  auVar11._12_4_ = auVar7._8_4_ + 0x200;
  uVar3 = 0;
  uVar8 = auVar11._8_8_ >> 0x2a;
  uVar5 = (auVar4._0_8_ & 0xffffffff) >> 10;
  dVar15 = *(double *)(&DAT_145dc1190 + uVar5 * 8);
  dVar16 = *(double *)(&DAT_145dc1190 + (uVar8 & 0xffff) * 8);
  lVar1 = (ulonglong)(uint)((int)uVar5 * 2) * 8;
  auVar11 = in_XMM0 & _DAT_145dc0f60 | _DAT_145dc0f80;
  lVar2 = (ulonglong)((uint)(ushort)uVar8 * 2) * 8;
  uVar18 = (int)(in_XMM0._0_8_ + -0x3fe7fe0000000000 >> 0x34) + 0x41380000;
  auVar7._4_8_ = 0;
  auVar7._0_4_ = uVar18;
  auVar17._0_12_ = auVar7 << 0x20;
  auVar17._12_4_ = (int)(in_XMM0._8_8_ + -0x3fe7fe0000000000 >> 0x34) + 0x41380000;
  dVar9 = auVar11._0_8_ * dVar15;
  dVar12 = auVar11._8_8_ * dVar16;
  if (((int)(in_XMM0._6_2_ + 0x7ffffff0) < -0x7fff8020) &&
     ((int)(in_XMM0._14_2_ + 0x7ffffff0) < -0x7fff8020)) {
    dVar14 = ((double)((ulonglong)uVar18 << 0x20) - 1572864.0) + *(double *)(&DAT_145dc31a0 + lVar1)
    ;
    dVar19 = (auVar17._8_8_ - 1572864.0) + *(double *)(&DAT_145dc31a0 + lVar2);
    dVar23 = SUB168(_DAT_145dc0fb0 & auVar11,0);
    dVar24 = SUB168(_DAT_145dc0fb0 & auVar11,8);
    dVar10 = dVar9 + -1.442694902420044;
    dVar13 = dVar12 + -1.442694902420044;
    dVar23 = (dVar23 * dVar15 - dVar9) + (auVar11._0_8_ - dVar23) * dVar15;
    dVar27 = (dVar24 * dVar16 - dVar12) + (auVar11._8_8_ - dVar24) * dVar16;
    dVar15 = dVar14 + dVar10;
    dVar9 = dVar19 + dVar13;
    dVar16 = dVar15 + dVar23;
    dVar12 = dVar9 + dVar27;
    dVar24 = dVar23 + dVar10;
    dVar28 = dVar27 + dVar13;
    dVar25 = dVar24 * dVar24;
    dVar29 = dVar28 * dVar28;
    uStack_74 = (uint)((ulonglong)param_1 >> 0x20);
    if ((((uint)((ulonglong)dVar16 >> 0x20) & 0x7ff00000) + (uStack_74 & 0x7ff00000) < 0x80900001)
       && (uStack_6c = (uint)((ulonglong)in_XMM1_Qb >> 0x20),
          ((uint)((ulonglong)dVar12 >> 0x20) & 0x7ff00000) + (uStack_6c & 0x7ff00000) < 0x80900001))
    {
      local_78 = SUB84(param_1,0);
      if ((local_78 != 0 || ((ulonglong)param_1 & 0x7fffffff00000000) != 0) &&
         ((uStack_74 & 0x7fffffff) < 0x7ff00000)) {
        iStack_70 = SUB84(in_XMM1_Qb,0);
        if ((iStack_70 != 0 || ((ulonglong)in_XMM1_Qb & 0x7fffffff00000000) != 0) &&
           ((uStack_6c & 0x7fffffff) < 0x7ff00000)) {
          dVar9 = (double)((ulonglong)in_XMM1_Qb & 0xfffffffff8000000) *
                  (double)((ulonglong)
                           (dVar12 + (dVar9 - dVar12) + dVar27 + (dVar19 - dVar9) + dVar13 +
                                     *(double *)(&UNK_145dc31a8 + lVar2) +
                                     (((dVar29 * 0.015843641906397053 + 0.04616704187202374) *
                                       dVar29 + 0.16015105075297303) * dVar29 +
                                     9.597935033233511e-08) * dVar28 +
                                     ((dVar29 * -0.026667131649815552 + -0.08325619496072671) *
                                      dVar29 + -0.3465736568077919) * dVar29) & 0xfffffffff8000000)
                  + 52776558133248.0;
          uVar18 = (uint)SUB82(dVar9,0) | (uint)(((ulonglong)dVar9 >> 0x10 & 0xffff) << 0x10);
          iVar6 = SUB84((double)((ulonglong)param_1 & 0xfffffffff8000000) *
                        (double)((ulonglong)
                                 (dVar16 + (dVar15 - dVar16) + dVar23 + (dVar14 - dVar15) + dVar10 +
                                           *(double *)(&UNK_145dc31a8 + lVar1) +
                                           (((dVar25 * 0.015843641906397053 + 0.04616704187202374) *
                                             dVar25 + 0.16015105075297303) * dVar25 +
                                           9.597935033233511e-08) * dVar24 +
                                           ((dVar25 * -0.026667131649815552 + -0.08325619496072671)
                                            * dVar25 + -0.3465736568077919) * dVar25) &
                                0xfffffffff8000000) + 52776558133248.0,0);
          if ((iVar6 < 0x1ff80) &&
             ((((int)uVar18 < 0x1ff80 && (-0x1e200 < iVar6)) && (-0x1e200 < (int)uVar18)))) {
            return;
          }
        }
      }
    }
  }
  else {
    auVar22._8_8_ = -(ulonglong)(0.0 < in_XMM1_Qb);
    auVar22._0_8_ = -(ulonglong)(0.0 < param_1);
    auVar26._8_8_ = -(ulonglong)(in_XMM1_Qb <= INFINITY);
    auVar26._0_8_ = -(ulonglong)(param_1 <= INFINITY);
    local_68 = in_XMM0._0_4_;
    iStack_64 = in_XMM0._4_4_;
    iStack_60 = in_XMM0._8_4_;
    iStack_5c = in_XMM0._12_4_;
    auVar20._0_4_ = -(uint)(local_68 == 0);
    auVar20._4_4_ = -(uint)(iStack_64 == 0);
    auVar20._8_4_ = -(uint)(iStack_60 == 0);
    auVar20._12_4_ = -(uint)(SUB124(SUB1612((undefined1  [16])0x0,4),8) == iStack_5c);
    auVar21._4_4_ = auVar20._0_4_;
    auVar21._0_4_ = auVar20._4_4_;
    auVar21._8_4_ = auVar20._12_4_;
    auVar21._12_4_ = auVar20._8_4_;
    auVar21 = auVar20 & auVar22 & auVar26 & auVar21;
    uVar3 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb;
  }
  if ((uVar3 & 0xf) == 0) {
    FUN_143ddec00(in_XMM0._0_8_,param_1);
  }
  if ((uVar3 & 0xf00) == 0) {
    FUN_143ddec00(in_XMM0._8_8_,in_XMM1_Qb);
  }
                    /* WARNING: Read-only address (ram,0x000145dc0f60) is written */
                    /* WARNING: Read-only address (ram,0x000145dc0f80) is written */
                    /* WARNING: Read-only address (ram,0x000145dc0fb0) is written */
                    /* WARNING: Read-only address (ram,0x000145dc71b0) is written */
  return;
}



// FUNCTION 143ddec00 FUN_143ddec00 body=3702 status=ok
// SIG undefined FUN_143ddec00(void)

/* WARNING: Type propagation algorithm not settling */

double FUN_143ddec00(double param_1,double param_2)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined8 local_118;
  undefined8 local_110;
  double local_108;
  uint uStack_ec;
  double local_c0;
  int local_b0;
  uint uStack_ac;
  
  local_110._4_4_ = (uint)((ulonglong)param_1 >> 0x20);
  iVar7 = SUB84(param_1,0);
  iVar8 = 0;
  uStack_ac = (uint)((ulonglong)param_2 >> 0x20);
  local_b0 = SUB84(param_2,0);
  if (((uStack_ac & 0x7fffffff) < 0x7ff00000) &&
     (((ulonglong)param_2 & 0x7fffffff00000000) != 0 || local_b0 != 0)) {
    if (((local_110._4_4_ & 0x7fffffff) - 0x100000 < 0x7fe00000) &&
       ((local_110._4_4_ & 0x80000000) != 0x80000000)) {
      local_108 = 1.0;
      dVar1 = param_1;
      goto LAB_143ddf117;
    }
    if (((local_110._4_4_ & 0x7fffffff) < 0x7ff00000) &&
       (((ulonglong)param_1 & 0x7fffffff00000000) != 0 || iVar7 != 0)) {
      if (local_110._4_4_ < 0x100000) {
        local_108 = 1.0;
        local_110._4_4_ = (uint)((ulonglong)(param_1 * 4503599627370496.0) >> 0x20);
        iVar8 = 0x34;
        dVar1 = param_1 * 4503599627370496.0;
        goto LAB_143ddf117;
      }
      uVar11 = uStack_ac & 0x7fffffff;
      if (((ulonglong)param_2 & 0x7fffffff00000000) == 0 && local_b0 == 0) {
LAB_143dded91:
        iVar8 = 2;
      }
      else {
        if (0x3fffffff < uVar11 + 0xc0100000) goto LAB_143dded70;
        if (0x433fffff < uVar11) goto LAB_143dded91;
        iVar8 = (int)((uStack_ac & 0x7ff00000) + 0xc0100000) >> 0x14;
        bVar9 = (byte)iVar8;
        if (iVar8 < 0x15) {
          if ((uVar11 << (bVar9 & 0x1f) & 0xfffff) == 0 && local_b0 == 0) {
            iVar8 = 1 - ((int)~(uVar11 << (bVar9 + 0xb & 0x1f)) >> 0x1f);
          }
          else {
LAB_143dded70:
            iVar8 = 0;
          }
        }
        else {
          uVar11 = local_b0 << (bVar9 + 0xb & 0x1f);
          if ((uVar11 & 0x7fffffff) != 0) goto LAB_143dded70;
          iVar8 = 1 - ((int)~uVar11 >> 0x1f);
        }
      }
      if (((local_110._4_4_ & 0x80000000) == 0x80000000) && (iVar8 != 0)) {
        dVar1 = 0.0 - param_1;
        if (iVar8 == 1) {
          local_108 = -1.0;
        }
        else {
          local_108 = 1.0;
        }
        local_110._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
        iVar8 = 0;
        if ((local_110._4_4_ & 0x7fffffff) < 0x100000) {
          iVar8 = 0x34;
          local_110._4_4_ = (uint)((ulonglong)(dVar1 * 4503599627370496.0) >> 0x20);
          dVar1 = dVar1 * 4503599627370496.0;
        }
LAB_143ddf117:
        local_118._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
        uVar5 = local_118._4_4_;
        iVar7 = local_110._4_4_ + 0xc0180200;
        uVar11 = (local_110._4_4_ & 0xffe00) + 0x200 >> 10;
        local_118 = (double)((ulonglong)dVar1 & 0xfffffffffffff | 0x3ff0000000000000);
        dVar21 = local_118;
        local_118._0_4_ = (uint)((ulonglong)dVar1 & 0xfffffffffffff);
        dVar1 = *(double *)(&DAT_145dc1190 + (ulonglong)uVar11 * 8);
        local_110 = (double)(CONCAT44(uVar5,(uint)local_118) & 0xffffff8000000 | 0x3ff0000000000000)
        ;
        dVar18 = dVar1 * dVar21;
        dVar1 = (dVar1 * local_110 - dVar18) + (dVar21 - local_110) * dVar1;
        dVar21 = (double)((iVar7 >> 0x14) - iVar8) +
                 *(double *)(&DAT_145dc31a0 + (ulonglong)(uVar11 * 2) * 8);
        dVar18 = dVar18 + -1.442694902420044;
        dVar20 = dVar21 + dVar18;
        uStack_ec = (uint)((ulonglong)dVar20 >> 0x20);
        if (((int)((uStack_ec & 0x7ff00000) + 0xc0100000) >> 0x14) +
            ((int)((uStack_ac & 0x7ff00000) + 0xc0100000) >> 0x14) < 0xc) {
          local_110 = (double)((ulonglong)param_2 & 0xfffffffff8000000);
          dVar22 = dVar20 + dVar1;
          dVar17 = dVar18 + dVar1;
          dVar1 = *(double *)(&DAT_145dc31a0 + (ulonglong)(uVar11 * 2 + 1) * 8) +
                  (dVar21 - dVar20) + dVar18 + dVar1 + (dVar20 - dVar22) +
                  ((((((dVar17 * 0.015843641906397053 + -0.026667131649815552) * dVar17 +
                      0.04616704187202374) * dVar17 + -0.08325619496072671) * dVar17 +
                    0.16015105075297303) * dVar17 + -0.3465736568077919) * dVar17 +
                  9.597935033233511e-08) * dVar17;
          dVar20 = dVar22 + dVar1;
          local_c0 = (double)((ulonglong)dVar20 & 0xfffffffff8000000);
          dVar21 = local_c0 * local_110;
          dVar17 = dVar21 + 52776558133248.0;
          dVar18 = (param_2 - local_110) * local_c0 +
                   (dVar20 - local_c0) * local_110 + (dVar20 - local_c0) * (param_2 - local_110);
          local_118._0_4_ = SUB84(dVar17,0);
          uVar11 = (uint)local_118 & 0x7f;
          iVar8 = (int)(uint)local_118 >> 7;
          param_2 = (dVar1 - (dVar20 - dVar22)) * param_2;
          if (iVar8 < 0x3ff) {
            if (iVar8 < -0x3c3) {
              if (iVar8 < -0x433) {
                return 0.0;
              }
              dVar18 = dVar18 + param_2;
              dVar21 = dVar21 - (dVar17 - 52776558133248.0);
              dVar19 = dVar21 + dVar18;
              dVar1 = *(double *)(&DAT_145dc71d0 + (ulonglong)(uVar11 * 2) * 8);
              dVar20 = *(double *)(&DAT_145dc71d0 + (ulonglong)(uVar11 * 2 + 1) * 8);
              local_110 = (double)((ulonglong)((iVar8 + 0x6f) * 0x100000 + 0x3ff00000) << 0x20);
              dVar6 = local_110;
              local_108 = local_108 * 3.851859888774472e-34;
              dVar22 = (dVar19 * 0.0013333558146428443 + 0.009618129107628477) * dVar19 +
                       0.055504108664821576;
              dVar17 = (dVar22 * dVar19 + 0.2402265069591007) * dVar1 * dVar19 * dVar19 + dVar20 +
                       dVar19 * 0.6931471805599453 * dVar1;
              local_118._4_4_ = (uint)((ulonglong)(local_110 * dVar1 * local_108) >> 0x20);
              if (0x100000 < (local_118._4_4_ & 0x7fffffff)) {
                local_108 = local_108 * local_110;
                dVar22 = (dVar22 * dVar19 + 0.2402265069591007) * dVar19 + 0.6931471805599453;
                dVar17 = dVar19 * dVar22;
                local_118 = (double)((ulonglong)dVar17 & 0xffffffffff000000);
                dVar21 = dVar22 * ((dVar21 - dVar19) + dVar18) + (dVar17 - local_118);
                local_110 = (double)(*(ulonglong *)(&DAT_145dc71d0 + (ulonglong)(uVar11 * 2) * 8) &
                                    0xffffffff00000000);
                return (dVar20 + dVar17 * dVar20 + (dVar1 - local_110) * dVar21 + dVar21 * local_110
                        + (dVar1 - local_110) * local_118 + local_118 * local_110 + dVar1) *
                       local_108;
              }
              local_118 = (double)((*(ulonglong *)(&DAT_145dc71d0 + (ulonglong)(uVar11 * 2) * 8) >>
                                    0x20 & 0xffff0000) << 0x20);
              local_110 = (double)((ulonglong)dVar17 & 0xffffffff00000000);
              return ((dVar17 - local_110) + (dVar1 - local_118) + local_110) * local_108 * dVar6 +
                     dVar6 * local_118 * local_108;
            }
          }
          else {
            if (0x400 < iVar8) {
              return 0.0;
            }
            iVar8 = iVar8 + -1;
            local_108 = local_108 + local_108;
          }
          dVar21 = dVar18 + param_2 + (dVar21 - (dVar17 - 52776558133248.0));
          dVar1 = *(double *)(&DAT_145dc71d0 + (ulonglong)(uVar11 * 2) * 8);
          local_110 = (double)((ulonglong)(iVar8 * 0x100000 + 0x3ff00000) << 0x20);
          return local_108 *
                 ((dVar21 * 0.0013333558146428443 + 0.009618129107628477) * dVar21 * dVar21 * dVar21
                  * dVar21 * dVar1 + *(double *)(&DAT_145dc71d0 + (ulonglong)(uVar11 * 2 + 1) * 8) +
                  (dVar21 * 0.055504108664821576 + 0.2402265069591007) * dVar21 * dVar21 * dVar1 +
                  dVar21 * 0.6931471805599453 * dVar1 + dVar1) * local_110;
        }
        if (((uStack_ac ^ uStack_ec) & 0x80000000) == 0) {
          if ((((ulonglong)param_1 & 0x8000000000000000) != 0) &&
             (uVar11 = uStack_ac & 0x7fffffff,
             ((ulonglong)param_2 & 0x7fffffff00000000) != 0 || local_b0 != 0)) {
            if (0x3fffffff < uVar11 + 0xc0100000) {
              return 0.0;
            }
            if (uVar11 < 0x43400000) {
              iVar8 = (int)((uStack_ac & 0x7ff00000) + 0xc0100000) >> 0x14;
              bVar9 = (byte)iVar8;
              if (iVar8 < 0x15) {
                if ((uVar11 << (bVar9 & 0x1f) & 0xfffff) != 0 || local_b0 != 0) {
                  return 0.0;
                }
                if ((uVar11 << (bVar9 + 0xb & 0x1f) & 0x80000000) != 0) {
                  return 0.0;
                }
              }
              else {
                uVar11 = local_b0 << (bVar9 + 0xb & 0x1f);
                if ((uVar11 & 0x7fffffff) != 0) {
                  return 0.0;
                }
                if ((uVar11 & 0x80000000) != 0) {
                  return 0.0;
                }
              }
            }
          }
          return 0.0;
        }
        if ((((ulonglong)param_1 & 0x8000000000000000) != 0) &&
           (uVar11 = uStack_ac & 0x7fffffff,
           ((ulonglong)param_2 & 0x7fffffff00000000) != 0 || local_b0 != 0)) {
          if (0x3fffffff < uVar11 + 0xc0100000) {
            return 0.0;
          }
          if (uVar11 < 0x43400000) {
            iVar8 = (int)((uStack_ac & 0x7ff00000) + 0xc0100000) >> 0x14;
            bVar9 = (byte)iVar8;
            if (0x14 < iVar8) {
              uVar11 = local_b0 << (bVar9 + 0xb & 0x1f);
              if ((uVar11 & 0x7fffffff) != 0) {
                return 0.0;
              }
              if ((uVar11 & 0x80000000) == 0) {
                return 0.0;
              }
              return 0.0;
            }
            if ((uVar11 << (bVar9 & 0x1f) & 0xfffff) != 0 || local_b0 != 0) {
              return 0.0;
            }
            if ((uVar11 << (bVar9 + 0xb & 0x1f) & 0x80000000) == 0) {
              return 0.0;
            }
            return 0.0;
          }
        }
        return 0.0;
      }
    }
  }
  uVar11 = local_110._4_4_ & 0x7fffffff;
  bVar13 = uVar11 != 0x7ff00000;
  bVar16 = iVar7 != 0;
  bVar14 = (uStack_ac & 0x7fffffff) == 0x7ff00000;
  bVar15 = local_b0 == 0;
  bVar2 = ((ulonglong)param_1 & 0x7fffffff00000000) != 0;
  bVar3 = iVar7 != 0;
  bVar4 = uVar11 == 0x3ff00000 && iVar7 == 0;
  uVar12 = uStack_ac & 0x7fffffff;
  if (((ulonglong)param_2 & 0x7fffffff00000000) == 0 && local_b0 == 0) {
LAB_143ddef83:
    iVar8 = 2;
  }
  else {
    if (0x3fffffff < uVar12 + 0xc0100000) goto LAB_143ddef5b;
    if (0x433fffff < uVar12) goto LAB_143ddef83;
    iVar8 = (int)((uStack_ac & 0x7ff00000) + 0xc0100000) >> 0x14;
    bVar9 = (byte)iVar8;
    if (iVar8 < 0x15) {
      if ((uVar12 << (bVar9 & 0x1f) & 0xfffff) == 0 && local_b0 == 0) {
        iVar8 = 1 - ((int)~(uVar12 << (bVar9 + 0xb & 0x1f)) >> 0x1f);
      }
      else {
LAB_143ddef5b:
        iVar8 = 0;
      }
    }
    else {
      uVar12 = local_b0 << (bVar9 + 0xb & 0x1f);
      if ((uVar12 & 0x7fffffff) != 0) goto LAB_143ddef5b;
      iVar8 = 1 - ((int)~uVar12 >> 0x1f);
    }
  }
  if ((uVar11 < 0x3ff00001) && ((uVar11 != 0x3ff00000 || (iVar7 == 0)))) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if (((ulonglong)param_2 & 0x7fffffff00000000) == 0 && local_b0 == 0) {
    return 0.0;
  }
  if (((ulonglong)param_1 & 0x8000000000000000) == 0) {
    if (bVar4) {
      return 0.0;
    }
  }
  else if ((bVar4) && (bVar14 && bVar15)) {
    return 0.0;
  }
  if ((local_110._4_4_ & 0x7ff00000) == 0x7ff00000 && (bVar13 || bVar16)) {
    return param_1;
  }
  if ((uStack_ac & 0x7ff00000) == 0x7ff00000 && (!bVar14 || !bVar15)) {
    return param_2;
  }
  if (((bVar2 || bVar3) || (((ulonglong)param_2 & 0x8000000000000000) == 0)) || (!bVar14 || !bVar15)
     ) {
    if (bVar10) {
      if (((ulonglong)param_2 & 0x8000000000000000) == 0) {
        if (bVar14 && bVar15) {
          return 0.0;
        }
      }
      else if (bVar14 && bVar15) {
        return 0.0;
      }
    }
    if (uVar11 < 0x3ff00000) {
      if (((ulonglong)param_2 & 0x8000000000000000) == 0) {
        if (bVar14 && bVar15) {
          return 0.0;
        }
      }
      else if (bVar14 && bVar15) {
        return 0.0;
      }
    }
    if (((ulonglong)param_1 & 0x8000000000000000) == 0) {
      if (!bVar13 && !bVar16) {
        if (((ulonglong)param_2 & 0x8000000000000000) == 0) {
          return 0.0;
        }
        return 0.0;
      }
      if (bVar2 || bVar3) {
        return 0.0;
      }
      if (((ulonglong)param_2 & 0x8000000000000000) == 0) {
LAB_143ddf0d3:
        if (bVar14 && bVar15) {
          return 0.0;
        }
        return 0.0;
      }
    }
    else {
      if (!bVar13 && !bVar16) {
        if (((ulonglong)param_2 & 0x8000000000000000) != 0) {
          if (iVar8 != 1) {
            return 0.0;
          }
          return 0.0;
        }
        if (iVar8 == 1) {
          return 0.0;
        }
        return 0.0;
      }
      if ((bVar14 && bVar15) || (iVar8 != 0)) {
        if (bVar2 || bVar3) {
          return 0.0;
        }
      }
      else if (bVar2 || bVar3) {
        _raise_invalid();
        return 0.0;
      }
      if (((ulonglong)param_2 & 0x8000000000000000) == 0) {
        if (iVar8 == 1) {
          return 0.0;
        }
        goto LAB_143ddf0d3;
      }
      if (iVar8 == 1) {
        _raise_zerodivide();
        return 0.0;
      }
    }
  }
  _raise_zerodivide();
  return 0.0;
}



// FUNCTION 143ddfa80 _raise_invalid body=14 status=ok
// SIG undefined _raise_invalid(void)

undefined8 _raise_invalid(void)

{
  return 0xffc00000;
}



// FUNCTION 143ddfa90 __sse2_cosf4 body=2227 status=ok
// SIG undefined __sse2_cosf4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong __sse2_cosf4(undefined8 param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar10;
  float fVar13;
  undefined1 in_XMM0 [16];
  undefined1 auVar8 [16];
  float fVar11;
  float fVar12;
  int iVar14;
  float fVar15;
  undefined1 auVar9 [16];
  float fVar16;
  float fVar20;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  float fVar28;
  float fVar29;
  double dVar27;
  float fVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  uint uVar38;
  uint uVar39;
  undefined1 local_d8 [2] [16];
  uint local_b8;
  uint uStack_b4;
  undefined1 local_38 [3] [16];
  
  auVar8 = in_XMM0 & _DAT_146fec620;
  fVar26 = auVar8._0_4_;
  fVar28 = auVar8._4_4_;
  fVar11 = auVar8._12_4_;
  fVar6 = auVar8._8_4_;
  fVar5 = (fVar26 + (float)DAT_146fec610) * 0.31830987;
  fVar10 = (fVar28 + DAT_146fec610._4_4_) * 0.31830987;
  fVar16 = (float)DAT_146fec5e0;
  fVar20 = DAT_146fec5e0._4_4_;
  uVar38 = -(uint)(0x461c4000 < (int)fVar26);
  uVar39 = -(uint)(0x461c4000 < (int)fVar28);
  auVar8._0_8_ = CONCAT44(uVar39,uVar38);
  auVar8._8_4_ = -(uint)(0x461c4000 < (int)fVar6);
  auVar8._12_4_ = -(uint)(0x461c4000 < (int)fVar11);
  uVar1 = movmskps(in_EAX,auVar8);
  fVar29 = (float)DAT_146fec5d0;
  fVar30 = DAT_146fec5d0._4_4_;
  if (uVar1 == 0) {
    fVar6 = (float)(int)fVar5 - 0.5;
    fVar11 = (float)(int)fVar10 - 0.5;
    fVar26 = ((fVar26 - fVar16 * fVar6) - fVar29 * fVar6) - fVar6 * 1.5099067e-07;
    fVar28 = ((fVar28 - fVar20 * fVar11) - fVar30 * fVar11) - fVar11 * 1.5099067e-07;
    fVar16 = fVar26 - fVar6 * 5.126688e-12;
    fVar20 = fVar28 - fVar11 * 5.126688e-12;
    fVar26 = fVar26 * fVar26;
    fVar28 = fVar28 * fVar28;
    return CONCAT44((((fVar28 * 2.608e-06 + -0.000198107) * fVar28 + 0.008333075) * fVar28 +
                    -0.16666658) * fVar28 * fVar20 + fVar20,
                    (((fVar26 * 2.608e-06 + -0.000198107) * fVar26 + 0.008333075) * fVar26 +
                    -0.16666658) * fVar26 * fVar16 + fVar16) ^
           CONCAT44((int)fVar10 << 0x1f,(int)fVar5 << 0x1f);
  }
  local_d8[0] = in_XMM0 & _DAT_146fec620;
  fVar7 = local_d8[0]._0_4_;
  auVar37._0_4_ = -(uint)(0x4e800000 < (int)fVar7);
  fVar12 = local_d8[0]._4_4_;
  auVar37._4_4_ = -(uint)(0x4e800000 < (int)fVar12);
  auVar37._8_4_ = -(uint)(0x4e800000 < local_d8[0]._8_4_);
  auVar37._12_4_ = -(uint)(0x4e800000 < local_d8[0]._12_4_);
  iVar3 = movmskps(param_2,auVar37);
  if (iVar3 == 0) {
    if (uVar1 == 0xf) {
      auVar34._0_4_ = (uint)((double)fVar7 * 0.6366197723675814);
      auVar34._4_4_ = 0;
      auVar34._8_4_ = (int)((double)fVar12 * 0.6366197723675814);
      auVar34._12_4_ = 0;
      auVar34 = auVar34 | _DAT_146fec6a0;
      dVar27 = SUB168(_DAT_146fec690 | auVar34,0) - 6755399441055744.0;
      dVar31 = SUB168(_DAT_146fec690 | auVar34,8) - 6755399441055744.0;
      dVar17 = (double)fVar7 - dVar27 * 1.5707950592041016;
      dVar21 = (double)fVar12 - dVar31 * 1.5707950592041016;
      dVar18 = dVar17 - dVar27 * 1.267590960196685e-06;
      dVar22 = dVar21 - dVar31 * 1.267590960196685e-06;
      dVar19 = dVar18 - dVar27 * -1.6513982022126061e-13;
      dVar23 = dVar22 - dVar31 * -1.6513982022126061e-13;
      auVar35._0_8_ = auVar34._0_8_ << 0x3e;
      auVar35._8_8_ = auVar34._8_8_ << 0x3e;
      dVar17 = ((dVar17 - dVar18) - dVar27 * 1.267590960196685e-06) +
               ((dVar18 - dVar19) - dVar27 * -1.6513982022126061e-13);
      dVar18 = ((dVar21 - dVar22) - dVar31 * 1.267590960196685e-06) +
               ((dVar22 - dVar23) - dVar31 * -1.6513982022126061e-13);
      dVar21 = dVar19 + dVar17;
      dVar24 = dVar23 + dVar18;
      dVar22 = dVar21 - dVar27 * -1.3350302175814904e-19;
      dVar25 = dVar24 - dVar31 * -1.3350302175814904e-19;
      auVar8 = _DAT_146fec630 & auVar35 ^ _DAT_146fec630;
      fVar16 = (float)(((dVar17 + (dVar19 - dVar21) +
                        ((dVar21 - dVar22) - dVar27 * -1.3350302175814904e-19)) -
                       dVar27 * 1.6446256936324258e-26) + dVar22);
      fVar26 = (float)(((dVar18 + (dVar23 - dVar24) +
                        ((dVar24 - dVar25) - dVar31 * -1.3350302175814904e-19)) -
                       dVar31 * 1.6446256936324258e-26) + dVar25);
      fVar20 = fVar16 * fVar16;
      fVar5 = fVar26 * fVar26;
      local_38[0]._0_8_ =
           CONCAT44((((fVar5 * 2.608e-06 + -0.000198107) * fVar5 + 0.008333075) * fVar5 +
                    -0.16666658) * fVar5 * fVar26 + fVar26,
                    (((fVar20 * 2.608e-06 + -0.000198107) * fVar20 + 0.008333075) * fVar20 +
                    -0.16666658) * fVar20 * fVar16 + fVar16) ^ CONCAT44(auVar8._12_4_,auVar8._4_4_);
    }
    else {
      fVar6 = (float)(int)fVar5 - 0.5;
      fVar11 = (float)(int)fVar10 - 0.5;
      fVar26 = ((fVar26 - fVar16 * fVar6) - fVar29 * fVar6) - fVar6 * 1.5099067e-07;
      fVar29 = ((fVar28 - fVar20 * fVar11) - fVar30 * fVar11) - fVar11 * 1.5099067e-07;
      local_b8 = SUB164(auVar8 ^ _DAT_146fec6c0,0);
      uStack_b4 = SUB164(auVar8 ^ _DAT_146fec6c0,4);
      auVar32._0_4_ = (uint)((double)fVar7 * 0.6366197723675814);
      auVar32._4_4_ = 0;
      auVar32._8_4_ = (int)((double)fVar12 * 0.6366197723675814);
      auVar32._12_4_ = 0;
      auVar32 = auVar32 | _DAT_146fec6a0;
      dVar27 = SUB168(_DAT_146fec690 | auVar32,0) - 6755399441055744.0;
      dVar31 = SUB168(_DAT_146fec690 | auVar32,8) - 6755399441055744.0;
      dVar17 = (double)fVar7 - dVar27 * 1.5707950592041016;
      dVar21 = (double)fVar12 - dVar31 * 1.5707950592041016;
      dVar18 = dVar17 - dVar27 * 1.267590960196685e-06;
      dVar22 = dVar21 - dVar31 * 1.267590960196685e-06;
      dVar19 = dVar18 - dVar27 * -1.6513982022126061e-13;
      dVar23 = dVar22 - dVar31 * -1.6513982022126061e-13;
      auVar33._0_8_ = auVar32._0_8_ << 0x3e;
      auVar33._8_8_ = auVar32._8_8_ << 0x3e;
      dVar17 = ((dVar17 - dVar18) - dVar27 * 1.267590960196685e-06) +
               ((dVar18 - dVar19) - dVar27 * -1.6513982022126061e-13);
      dVar18 = ((dVar21 - dVar22) - dVar31 * 1.267590960196685e-06) +
               ((dVar22 - dVar23) - dVar31 * -1.6513982022126061e-13);
      dVar21 = dVar19 + dVar17;
      dVar24 = dVar23 + dVar18;
      dVar22 = dVar21 - dVar27 * -1.3350302175814904e-19;
      dVar25 = dVar24 - dVar31 * -1.3350302175814904e-19;
      auVar37 = _DAT_146fec630 & auVar33 ^ _DAT_146fec630;
      fVar28 = (float)(((dVar17 + (dVar19 - dVar21) +
                        ((dVar21 - dVar22) - dVar27 * -1.3350302175814904e-19)) -
                       dVar27 * 1.6446256936324258e-26) + dVar22);
      fVar30 = (float)(((dVar18 + (dVar23 - dVar24) +
                        ((dVar24 - dVar25) - dVar31 * -1.3350302175814904e-19)) -
                       dVar31 * 1.6446256936324258e-26) + dVar25);
      fVar16 = (float)((uint)fVar28 & uVar38 | (uint)(fVar26 - fVar6 * 5.126688e-12) & local_b8);
      fVar20 = (float)((uint)fVar30 & uVar39 | (uint)(fVar29 - fVar11 * 5.126688e-12) & uStack_b4);
      fVar26 = (float)((uint)(fVar28 * fVar28) & uVar38 | (uint)(fVar26 * fVar26) & local_b8);
      fVar28 = (float)((uint)(fVar30 * fVar30) & uVar39 | (uint)(fVar29 * fVar29) & uStack_b4);
      local_38[0]._0_8_ =
           CONCAT44((((fVar28 * 2.608e-06 + -0.000198107) * fVar28 + 0.008333075) * fVar28 +
                    -0.16666658) * fVar28 * fVar20 + fVar20,
                    (((fVar26 * 2.608e-06 + -0.000198107) * fVar26 + 0.008333075) * fVar26 +
                    -0.16666658) * fVar26 * fVar16 + fVar16) ^
           (CONCAT44(auVar37._12_4_,auVar37._4_4_) & auVar8._0_8_ |
           CONCAT44((int)fVar10 << 0x1f & uStack_b4,(int)fVar5 << 0x1f & local_b8));
    }
  }
  else {
    if (uVar1 != 0xf) {
      iVar3 = (int)((fVar6 + DAT_146fec610._8_4_) * 0.31830987);
      iVar14 = (int)((fVar11 + DAT_146fec610._12_4_) * 0.31830987);
      fVar7 = (float)(int)fVar5 - 0.5;
      fVar12 = (float)(int)fVar10 - 0.5;
      fVar13 = (float)iVar3 - 0.5;
      fVar15 = (float)iVar14 - 0.5;
      auVar36._0_4_ = (int)fVar5 << 0x1f;
      auVar36._4_4_ = (int)fVar10 << 0x1f;
      auVar36._8_4_ = iVar3 << 0x1f;
      auVar36._12_4_ = iVar14 << 0x1f;
      fVar10 = ((fVar26 - fVar16 * fVar7) - fVar29 * fVar7) - fVar7 * 1.5099067e-07;
      fVar28 = ((fVar28 - fVar20 * fVar12) - fVar30 * fVar12) - fVar12 * 1.5099067e-07;
      fVar6 = ((fVar6 - DAT_146fec5e0._8_4_ * fVar13) - DAT_146fec5d0._8_4_ * fVar13) -
              fVar13 * 1.5099067e-07;
      fVar11 = ((fVar11 - DAT_146fec5e0._12_4_ * fVar15) - DAT_146fec5d0._12_4_ * fVar15) -
               fVar15 * 1.5099067e-07;
      fVar16 = fVar10 - fVar7 * 5.126688e-12;
      fVar20 = fVar28 - fVar12 * 5.126688e-12;
      fVar26 = fVar6 - fVar13 * 5.126688e-12;
      fVar5 = fVar11 - fVar15 * 5.126688e-12;
      fVar10 = fVar10 * fVar10;
      fVar28 = fVar28 * fVar28;
      fVar6 = fVar6 * fVar6;
      fVar11 = fVar11 * fVar11;
      auVar9._0_4_ = (((fVar10 * 2.608e-06 + -0.000198107) * fVar10 + (float)DAT_146fec580) * fVar10
                     + -0.16666658) * fVar10 * fVar16 + fVar16;
      auVar9._4_4_ = (((fVar28 * 2.608e-06 + -0.000198107) * fVar28 + DAT_146fec580._4_4_) * fVar28
                     + -0.16666658) * fVar28 * fVar20 + fVar20;
      auVar9._8_4_ = (((fVar6 * 2.608e-06 + -0.000198107) * fVar6 + DAT_146fec580._8_4_) * fVar6 +
                     -0.16666658) * fVar6 * fVar26 + fVar26;
      auVar9._12_4_ =
           (((fVar11 * 2.608e-06 + -0.000198107) * fVar11 + DAT_146fec580._12_4_) * fVar11 +
           -0.16666658) * fVar11 * fVar5 + fVar5;
      local_38[0] = auVar9 ^ auVar36;
    }
    lVar4 = 0;
    do {
      if ((uVar1 & 1) != 0) {
        fVar16 = *(float *)(local_d8[0] + lVar4 * 4);
        dVar17 = (double)fVar16;
        if (((uint)fVar16 & 0x7f800000) == 0x7f800000) {
          fVar16 = fVar16 - fVar16;
        }
        else {
          uVar2 = (ulonglong)(((uint)ABS(fVar16) >> 0x17) - 0x8e & 0xfff8);
          dVar18 = (double)(*(ulonglong *)(&DAT_146fec410 + uVar2 * 2) & 0xffffffffff000000) *
                   dVar17;
          dVar21 = (double)(*(ulonglong *)(&DAT_146fec410 + uVar2 * 2) << 0x28) * dVar17;
          dVar19 = dVar18 + dVar21;
          iVar3 = SUB84(dVar19 + 6755399441055744.0,0);
          uVar38 = iVar3 * 2;
          uVar39 = (iVar3 << 0x19) >> 0x1f;
          dVar17 = dVar17 * *(double *)(&DAT_146fec418 + uVar2 * 2) + dVar21 + (dVar18 - dVar19) +
                   (dVar19 - ((dVar19 + 6755399441055744.0) - 6755399441055744.0));
          uVar2 = (ulonglong)((uVar38 + uVar39 ^ uVar39) & 0xfe);
          fVar16 = (float)((double)((ulonglong)
                                    ((3320.092545592124 - dVar17 * dVar17) *
                                    *(double *)(&DAT_146fec008 + uVar2 * 8)) ^
                                   (ulonglong)(((uVar38 & 0x180) + 0x80 & 0x100) << 0x17) << 0x20) +
                          *(double *)(&DAT_146fec000 + uVar2 * 8) * dVar17 *
                          (double)((ulonglong)(9960.277636776373 - dVar17 * dVar17) ^
                                  (ulonglong)((uVar38 & 0x100) << 0x17) << 0x20));
        }
        *(float *)(local_38[0] + lVar4 * 4) = fVar16;
      }
      lVar4 = lVar4 + 1;
      uVar1 = (int)uVar1 >> 1;
    } while (lVar4 < 4);
  }
  return local_38[0]._0_8_;
}



// FUNCTION 143de0410 DelayLoad_MFCreateMediaSession body=12 status=ok
// SIG undefined DelayLoad_MFCreateMediaSession(void)

void DelayLoad_MFCreateMediaSession(void)

{
  FUN_143de0422();
  return;
}



// FUNCTION 143de041c _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de041c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MFCreateMediaSession();
  return;
}



// FUNCTION 143de0422 FUN_143de0422 body=121 status=ok
// SIG undefined FUN_143de0422(void)

void FUN_143de0422(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)__delayLoadHelper2(&ImgDelayDescr_1461de1c8);
                    /* WARNING: Could not recover jumptable at 0x000143de0499. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143de049b DelayLoad_MFCreateTopology body=12 status=ok
// SIG undefined DelayLoad_MFCreateTopology(void)

void DelayLoad_MFCreateTopology(void)

{
  FUN_143de0422();
  return;
}



// FUNCTION 143de04a7 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de04a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MFCreateTopology();
  return;
}



// FUNCTION 143de04ad DelayLoad_MFCreateTopologyNode body=12 status=ok
// SIG undefined DelayLoad_MFCreateTopologyNode(void)

void DelayLoad_MFCreateTopologyNode(void)

{
  FUN_143de0422();
  return;
}



// FUNCTION 143de04b9 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de04b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MFCreateTopologyNode();
  return;
}



// FUNCTION 143de04bf DelayLoad_MFGetService body=12 status=ok
// SIG undefined DelayLoad_MFGetService(void)

void DelayLoad_MFGetService(void)

{
  FUN_143de0422();
  return;
}



// FUNCTION 143de04cb _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de04cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MFGetService();
  return;
}



// FUNCTION 143de04d1 DelayLoad_MFCreateAudioRendererActivate body=12 status=ok
// SIG undefined DelayLoad_MFCreateAudioRendererActivate(void)

void DelayLoad_MFCreateAudioRendererActivate(void)

{
  FUN_143de0422();
  return;
}



// FUNCTION 143de04dd _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de04dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MFCreateAudioRendererActivate();
  return;
}



// FUNCTION 143de04e3 DelayLoad_MFCreateSampleGrabberSinkActivate body=12 status=ok
// SIG undefined DelayLoad_MFCreateSampleGrabberSinkActivate(void)

void DelayLoad_MFCreateSampleGrabberSinkActivate(void)

{
  FUN_143de0422();
  return;
}



// FUNCTION 143de04ef _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de04ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MFCreateSampleGrabberSinkActivate();
  return;
}



// FUNCTION 143de04f5 DelayLoad_MFEnumDeviceSources body=12 status=ok
// SIG undefined DelayLoad_MFEnumDeviceSources(void)

void DelayLoad_MFEnumDeviceSources(void)

{
  FUN_143de0422();
  return;
}



// FUNCTION 143de0501 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0501. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MFEnumDeviceSources();
  return;
}



// FUNCTION 143de0507 DelayLoad_MFCreateDeviceSource body=12 status=ok
// SIG undefined DelayLoad_MFCreateDeviceSource(void)

void DelayLoad_MFCreateDeviceSource(void)

{
  FUN_143de0422();
  return;
}



// FUNCTION 143de0513 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0513. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MFCreateDeviceSource();
  return;
}



// FUNCTION 143de0519 DelayLoad_MFStartup body=12 status=ok
// SIG undefined DelayLoad_MFStartup(void)

void DelayLoad_MFStartup(void)

{
  FUN_143de052b();
  return;
}



// FUNCTION 143de0525 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG HRESULT _guard_xfg_dispatch_icall_nop(ULONG Version, DWORD dwFlags)

HRESULT __stdcall _guard_xfg_dispatch_icall_nop(ULONG Version,DWORD dwFlags)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0525. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = MFStartup(Version,dwFlags);
  return HVar1;
}



// FUNCTION 143de052b FUN_143de052b body=121 status=ok
// SIG undefined FUN_143de052b(void)

void FUN_143de052b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)__delayLoadHelper2(&ImgDelayDescr_1461de1e8);
                    /* WARNING: Could not recover jumptable at 0x000143de05a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143de05a4 DelayLoad_MFShutdown body=12 status=ok
// SIG undefined DelayLoad_MFShutdown(void)

void DelayLoad_MFShutdown(void)

{
  FUN_143de052b();
  return;
}



// FUNCTION 143de05b0 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG HRESULT _guard_xfg_dispatch_icall_nop(void)

HRESULT __stdcall _guard_xfg_dispatch_icall_nop(void)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de05b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = MFShutdown();
  return HVar1;
}



// FUNCTION 143de05b6 DelayLoad_MFPutWorkItem body=12 status=ok
// SIG undefined DelayLoad_MFPutWorkItem(void)

void DelayLoad_MFPutWorkItem(void)

{
  FUN_143de052b();
  return;
}



// FUNCTION 143de05c2 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG HRESULT _guard_xfg_dispatch_icall_nop(DWORD dwQueue, IMFAsyncCallback * pCallback, IUnknown * pState)

HRESULT __stdcall
_guard_xfg_dispatch_icall_nop(DWORD dwQueue,IMFAsyncCallback *pCallback,IUnknown *pState)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de05c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = MFPutWorkItem(dwQueue,pCallback,pState);
  return HVar1;
}



// FUNCTION 143de05c8 DelayLoad_MFCreateAsyncResult body=12 status=ok
// SIG undefined DelayLoad_MFCreateAsyncResult(void)

void DelayLoad_MFCreateAsyncResult(void)

{
  FUN_143de052b();
  return;
}



// FUNCTION 143de05d4 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG HRESULT _guard_xfg_dispatch_icall_nop(IUnknown * punkObject, IMFAsyncCallback * pCallback, IUnknown * punkState, IMFAsyncResult * * ppAsyncResult)

HRESULT __stdcall
_guard_xfg_dispatch_icall_nop
          (IUnknown *punkObject,IMFAsyncCallback *pCallback,IUnknown *punkState,
          IMFAsyncResult **ppAsyncResult)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = MFCreateAsyncResult(punkObject,pCallback,punkState,ppAsyncResult);
  return HVar1;
}



// FUNCTION 143de05da DelayLoad_MFInvokeCallback body=12 status=ok
// SIG undefined DelayLoad_MFInvokeCallback(void)

void DelayLoad_MFInvokeCallback(void)

{
  FUN_143de052b();
  return;
}



// FUNCTION 143de05e6 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG HRESULT _guard_xfg_dispatch_icall_nop(IMFAsyncResult * pAsyncResult)

HRESULT __stdcall _guard_xfg_dispatch_icall_nop(IMFAsyncResult *pAsyncResult)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de05e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = MFInvokeCallback(pAsyncResult);
  return HVar1;
}



// FUNCTION 143de05ec DelayLoad_MFCreateAttributes body=12 status=ok
// SIG undefined DelayLoad_MFCreateAttributes(void)

void DelayLoad_MFCreateAttributes(void)

{
  FUN_143de052b();
  return;
}



// FUNCTION 143de05f8 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG HRESULT _guard_xfg_dispatch_icall_nop(IMFAttributes * * ppMFAttributes, UINT32 cInitialSize)

HRESULT __stdcall _guard_xfg_dispatch_icall_nop(IMFAttributes **ppMFAttributes,UINT32 cInitialSize)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = MFCreateAttributes(ppMFAttributes,cInitialSize);
  return HVar1;
}



// FUNCTION 143de05fe DelayLoad_MFCreateMediaType body=12 status=ok
// SIG undefined DelayLoad_MFCreateMediaType(void)

void DelayLoad_MFCreateMediaType(void)

{
  FUN_143de052b();
  return;
}



// FUNCTION 143de060a _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG HRESULT _guard_xfg_dispatch_icall_nop(IMFMediaType * * ppMFType)

HRESULT __stdcall _guard_xfg_dispatch_icall_nop(IMFMediaType **ppMFType)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de060a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = MFCreateMediaType(ppMFType);
  return HVar1;
}



// FUNCTION 143de0610 DelayLoad_MFCreateSourceResolver body=12 status=ok
// SIG undefined DelayLoad_MFCreateSourceResolver(void)

void DelayLoad_MFCreateSourceResolver(void)

{
  FUN_143de052b();
  return;
}



// FUNCTION 143de061c _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de061c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MFCreateSourceResolver();
  return;
}



// FUNCTION 143de0622 DelayLoad_Ordinal_219 body=12 status=ok
// SIG undefined DelayLoad_Ordinal_219(void)

void DelayLoad_Ordinal_219(void)

{
  FUN_143de0634();
  return;
}



// FUNCTION 143de0634 FUN_143de0634 body=121 status=ok
// SIG undefined FUN_143de0634(void)

void FUN_143de0634(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)__delayLoadHelper2(&ImgDelayDescr_1461de208);
                    /* WARNING: Could not recover jumptable at 0x000143de06ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143de06b0 _com_issue_error body=16 status=ok
// SIG undefined _com_issue_error(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void _com_issue_error(undefined8 param_1)

{
  (*(code *)PTR__com_raise_error_1468387d0)(param_1,0);
  return;
}



// FUNCTION 143de06c0 ConvertStringToBSTR body=412 status=ok
// SIG undefined ConvertStringToBSTR(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong _com_util::ConvertStringToBSTR(LPCSTR param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  DWORD DVar4;
  void *_Memory;
  longlong lVar5;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 auStackY_68 [32];
  int local_38;
  int iStack_34;
  void *local_30;
  ulonglong local_28;
  longlong lVar6;
  
  puVar8 = auStackY_68;
  local_28 = DAT_1468387a8 ^ (ulonglong)&local_38;
  if (param_1 == (LPCSTR)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = -1;
    do {
      lVar6 = lVar5;
      lVar5 = lVar6 + 1;
    } while (param_1[lVar5] != '\0');
    uVar7 = lVar6 + 2;
    if (0x7fffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
      _com_issue_error(0x80070057);
    }
    iVar3 = (int)uVar7;
    iStack_34 = iVar3;
    iVar2 = MultiByteToWideChar(0,0,param_1,iVar3,(LPWSTR)0x0,0);
    local_38 = iVar2;
    if (iVar2 == 0) {
      DVar4 = GetLastError();
      if (0 < (int)DVar4) {
        DVar4 = DVar4 & 0xffff | 0x80070000;
      }
                    /* WARNING: Subroutine does not return */
      _com_issue_error(DVar4);
    }
    if (iVar2 < 0x1000) {
      uVar1 = (longlong)iVar2 * 2;
      uVar7 = uVar1 + 0xf;
      if (uVar7 <= uVar1) {
        uVar7 = 0xffffffffffffff0;
      }
      _Memory = (void *)((longlong)&local_38 + -(uVar7 & 0xfffffffffffffff0));
      puVar8 = auStackY_68 + -(uVar7 & 0xfffffffffffffff0);
    }
    else {
      _Memory = ::_guard_xfg_dispatch_icall_nop((longlong)iVar2 * 2);
      puVar8 = auStackY_68;
    }
    local_30 = _Memory;
    if (_Memory == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar8 + -8) = &UNK_143de083b;
      _com_issue_error(0x8007000e);
    }
    *(int *)(puVar8 + 0x28) = iVar2;
    *(void **)(puVar8 + 0x20) = _Memory;
    *(undefined8 *)(puVar8 + -8) = 0x143de07c6;
    iVar3 = MultiByteToWideChar(0,0,param_1,iVar3,*(LPWSTR *)(puVar8 + 0x20),*(int *)(puVar8 + 0x28)
                               );
    if (iVar3 == 0) {
      if (0xfff < iVar2) {
        *(undefined8 *)(puVar8 + -8) = 0x143de084d;
        ::_guard_xfg_dispatch_icall_nop(_Memory);
      }
      *(undefined8 *)(puVar8 + -8) = 0x143de0853;
      DVar4 = GetLastError();
      if (0 < (int)DVar4) {
        DVar4 = DVar4 & 0xffff | 0x80070000;
      }
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar8 + -8) = &UNK_143de0866;
      _com_issue_error(DVar4);
    }
    *(undefined8 *)(puVar8 + -8) = 0x143de07d3;
    lVar5 = Ordinal_2(_Memory);
    if (0xfff < iVar2) {
      *(undefined8 *)(puVar8 + -8) = 0x143de07e7;
      ::_guard_xfg_dispatch_icall_nop(_Memory);
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar8 + -8) = &UNK_143de0871;
      _com_issue_error(0x8007000e);
    }
  }
  *(undefined8 *)(puVar8 + -8) = 0x143de07fb;
  return lVar5;
}



// FUNCTION 143de0880 _com_error body=68 status=ok
// SIG undefined _com_error(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * _com_error::_com_error(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__145dc7fe0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  plVar1 = *(longlong **)(param_2 + 0x10);
  param_1[2] = plVar1;
  param_1[3] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



// FUNCTION 143de08d0 _com_error body=69 status=ok
// SIG undefined _com_error(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 *
_com_error::_com_error(undefined8 *param_1,undefined4 param_2,longlong *param_3,char param_4)

{
  *(undefined4 *)(param_1 + 1) = param_2;
  *param_1 = &PTR__scalar_deleting_destructor__145dc7fe0;
  param_1[2] = param_3;
  param_1[3] = 0;
  if ((param_3 != (longlong *)0x0) && (param_4 != '\0')) {
    (**(code **)(*param_3 + 8))(param_3);
  }
  return param_1;
}



// FUNCTION 143de0920 ~_com_error body=68 status=ok
// SIG undefined ~_com_error(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void _com_error::~_com_error(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__145dc7fe0;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  if ((HLOCAL)param_1[3] != (HLOCAL)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143de0957. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LocalFree((HLOCAL)param_1[3]);
    return;
  }
  return;
}



// FUNCTION 143de0970 `scalar_deleting_destructor' body=95 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * _com_error::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145dc7fe0;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  if ((HLOCAL)param_1[3] != (HLOCAL)0x0) {
    LocalFree((HLOCAL)param_1[3]);
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 143de09d0 _com_raise_error body=39 status=ok
// SIG undefined _com_raise_error(void)

void _com_raise_error(undefined4 param_1,undefined8 param_2)

{
  undefined1 local_28 [40];
  
  _com_error::_com_error(local_28,param_1,param_2,0);
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_28,(ThrowInfo *)&DAT_1461db9d0);
}



// FUNCTION 143de09f8 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG LONG _guard_xfg_dispatch_icall_nop(HWND hwnd, GUID * pgActionID, LPVOID pWVTData)

LONG __stdcall _guard_xfg_dispatch_icall_nop(HWND hwnd,GUID *pgActionID,LPVOID pWVTData)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de09f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = WinVerifyTrust(hwnd,pgActionID,pWVTData);
  return LVar1;
}



// FUNCTION 143de09fe _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG NTSTATUS _guard_xfg_dispatch_icall_nop(BCRYPT_ALG_HANDLE hAlgorithm, PUCHAR pbBuffer, ULONG cbBuffer, ULONG dwFlags)

NTSTATUS __stdcall
_guard_xfg_dispatch_icall_nop
          (BCRYPT_ALG_HANDLE hAlgorithm,PUCHAR pbBuffer,ULONG cbBuffer,ULONG dwFlags)

{
  NTSTATUS NVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de09fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NVar1 = BCryptGenRandom(hAlgorithm,pbBuffer,cbBuffer,dwFlags);
  return NVar1;
}



// FUNCTION 143de0a04 _purecall body=6 status=ok
// SIG undefined _purecall(void)

void _purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _purecall();
  return;
}



// FUNCTION 143de0a0a _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG EXCEPTION_DISPOSITION _guard_xfg_dispatch_icall_nop(_EXCEPTION_RECORD * ExceptionRecord, void * EstablisherFrame, _CONTEXT * ContextRecord, _DISPATCHER_CONTEXT * DispatcherContext)

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EXCEPTION_DISPOSITION
_guard_xfg_dispatch_icall_nop
          (_EXCEPTION_RECORD *ExceptionRecord,void *EstablisherFrame,_CONTEXT *ContextRecord,
          _DISPATCHER_CONTEXT *DispatcherContext)

{
  EXCEPTION_DISPOSITION EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0a0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = __C_specific_handler(ExceptionRecord,EstablisherFrame,ContextRecord,DispatcherContext);
  return EVar1;
}



// FUNCTION 143de0a10 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void * _guard_xfg_dispatch_icall_nop(void * _Dst, void * _Src, size_t _Size)

void * __cdecl _guard_xfg_dispatch_icall_nop(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



// FUNCTION 143de0a16 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void * _guard_xfg_dispatch_icall_nop(void * _Dst, void * _Src, size_t _Size)

void * __cdecl _guard_xfg_dispatch_icall_nop(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0a16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memmove(_Dst,_Src,_Size);
  return pvVar1;
}



// FUNCTION 143de0a1c _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void * _guard_xfg_dispatch_icall_nop(void * _Dst, int _Val, size_t _Size)

void * __cdecl _guard_xfg_dispatch_icall_nop(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



// FUNCTION 143de0a22 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG wchar_t * _guard_xfg_dispatch_icall_nop(wchar_t * _Str, wchar_t _Ch)

wchar_t * __cdecl _guard_xfg_dispatch_icall_nop(wchar_t *_Str,wchar_t _Ch)

{
  wchar_t *pwVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0a22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pwVar1 = wcsrchr(_Str,_Ch);
  return pwVar1;
}



// FUNCTION 143de0a28 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG int _guard_xfg_dispatch_icall_nop(void * _Buf1, void * _Buf2, size_t _Size)

int __cdecl _guard_xfg_dispatch_icall_nop(void *_Buf1,void *_Buf2,size_t _Size)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = memcmp(_Buf1,_Buf2,_Size);
  return iVar1;
}



// FUNCTION 143de0a2e _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG char * _guard_xfg_dispatch_icall_nop(char * _Str, int _Val)

char * __cdecl _guard_xfg_dispatch_icall_nop(char *_Str,int _Val)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0a2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = strchr(_Str,_Val);
  return pcVar1;
}



// FUNCTION 143de0a34 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG wchar_t * _guard_xfg_dispatch_icall_nop(wchar_t * _Str, wchar_t _Ch)

wchar_t * __cdecl _guard_xfg_dispatch_icall_nop(wchar_t *_Str,wchar_t _Ch)

{
  wchar_t *pwVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pwVar1 = wcschr(_Str,_Ch);
  return pwVar1;
}



// FUNCTION 143de0a3a _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG wchar_t * _guard_xfg_dispatch_icall_nop(wchar_t * _Str, wchar_t * _SubStr)

wchar_t * __cdecl _guard_xfg_dispatch_icall_nop(wchar_t *_Str,wchar_t *_SubStr)

{
  wchar_t *pwVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0a3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pwVar1 = wcsstr(_Str,_SubStr);
  return pwVar1;
}



// FUNCTION 143de0a40 Unwind@143de0a40 body=6 status=ok
// SIG undefined Unwind@143de0a40(void)

void Unwind_143de0a40(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __std_terminate();
  return;
}



// FUNCTION 143de0a46 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0a46. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  __CxxFrameHandler3();
  return;
}



// FUNCTION 143de0a4c _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __RTDynamicCast();
  return;
}



// FUNCTION 143de0a52 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG char * _guard_xfg_dispatch_icall_nop(char * _Str, int _Ch)

char * __cdecl _guard_xfg_dispatch_icall_nop(char *_Str,int _Ch)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0a52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = strrchr(_Str,_Ch);
  return pcVar1;
}



// FUNCTION 143de0a58 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG _purecall_handler _guard_xfg_dispatch_icall_nop(_purecall_handler _Handler)

_purecall_handler __cdecl _guard_xfg_dispatch_icall_nop(_purecall_handler _Handler)

{
  _purecall_handler p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = _set_purecall_handler(_Handler);
  return p_Var1;
}



// FUNCTION 143de0a5e _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(_JBTYPE * _Buf, int _Value)

void __cdecl _guard_xfg_dispatch_icall_nop(_JBTYPE *_Buf,int _Value)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0a5e. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  longjmp(_Buf,_Value);
  return;
}



// FUNCTION 143de0a64 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(void * pExceptionObject, ThrowInfo * pThrowInfo)

void __stdcall _guard_xfg_dispatch_icall_nop(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0a64. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



// FUNCTION 143de0a6a _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG char * _guard_xfg_dispatch_icall_nop(char * _Str, char * _SubStr)

char * __cdecl _guard_xfg_dispatch_icall_nop(char *_Str,char *_SubStr)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0a6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = strstr(_Str,_SubStr);
  return pcVar1;
}



// FUNCTION 143de0a70 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void * _guard_xfg_dispatch_icall_nop(void * _Buf, int _Val, size_t _MaxCount)

void * __cdecl _guard_xfg_dispatch_icall_nop(void *_Buf,int _Val,size_t _MaxCount)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memchr(_Buf,_Val,_MaxCount);
  return pvVar1;
}



// FUNCTION 143de0a76 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0a76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __std_exception_copy();
  return;
}



// FUNCTION 143de0a7c _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __std_exception_destroy();
  return;
}



// FUNCTION 143de0a82 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0a82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __RTtypeid();
  return;
}



// FUNCTION 143de0a88 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __intrinsic_setjmp();
  return;
}



// FUNCTION 143de0a8e _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(int _Code)

void __cdecl _guard_xfg_dispatch_icall_nop(int _Code)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0a8e. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  exit(_Code);
  return;
}



// FUNCTION 143de0a94 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(int _Code)

void __cdecl _guard_xfg_dispatch_icall_nop(int _Code)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0a94. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _exit(_Code);
  return;
}



// FUNCTION 143de0a9a _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG int _guard_xfg_dispatch_icall_nop(void)

int __cdecl _guard_xfg_dispatch_icall_nop(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0a9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = rand();
  return iVar1;
}



// FUNCTION 143de0aa0 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __acrt_iob_func();
  return;
}



// FUNCTION 143de0aa6 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG int _guard_xfg_dispatch_icall_nop(wchar_t * _Str1, wchar_t * _Str2, size_t _MaxCount)

int __cdecl _guard_xfg_dispatch_icall_nop(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0aa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wcsnicmp(_Str1,_Str2,_MaxCount);
  return iVar1;
}



// FUNCTION 143de0ab2 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG float _guard_xfg_dispatch_icall_nop(float _X)

float __cdecl _guard_xfg_dispatch_icall_nop(float _X)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0ab2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = logf(_X);
  return fVar1;
}



// FUNCTION 143de0ab8 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG float _guard_xfg_dispatch_icall_nop(float _X, float _Y)

float __cdecl _guard_xfg_dispatch_icall_nop(float _X,float _Y)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = powf(_X,_Y);
  return fVar1;
}



// FUNCTION 143de0abe _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0abe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __stdio_common_vfprintf();
  return;
}



// FUNCTION 143de0ac4 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG int _guard_xfg_dispatch_icall_nop(char * _Str1, char * _Str2)

int __cdecl _guard_xfg_dispatch_icall_nop(char *_Str1,char *_Str2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = strcmp(_Str1,_Str2);
  return iVar1;
}



// FUNCTION 143de0aca _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG float _guard_xfg_dispatch_icall_nop(float _X)

float __cdecl _guard_xfg_dispatch_icall_nop(float _X)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0aca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = sinf(_X);
  return fVar1;
}



// FUNCTION 143de0ad0 calloc body=6 status=ok
// SIG void * calloc(size_t _Count, size_t _Size)

void * __cdecl calloc(size_t _Count,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = calloc(_Count,_Size);
  return pvVar1;
}



// FUNCTION 143de0ad6 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(void * _Memory)

void __cdecl _guard_xfg_dispatch_icall_nop(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0ad6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}



// FUNCTION 143de0adc realloc body=6 status=ok
// SIG void * realloc(void * _Memory, size_t _NewSize)

void * __cdecl realloc(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = realloc(_Memory,_NewSize);
  return pvVar1;
}



// FUNCTION 143de0ae2 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(void)

void __cdecl _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0ae2. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  abort();
  return;
}



// FUNCTION 143de0ae8 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG float _guard_xfg_dispatch_icall_nop(float _X)

float __cdecl _guard_xfg_dispatch_icall_nop(float _X)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = acosf(_X);
  return fVar1;
}



// FUNCTION 143de0aee _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG float _guard_xfg_dispatch_icall_nop(float _X)

float __cdecl _guard_xfg_dispatch_icall_nop(float _X)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0aee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = cosf(_X);
  return fVar1;
}



// FUNCTION 143de0af4 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG float _guard_xfg_dispatch_icall_nop(float _X)

float __cdecl _guard_xfg_dispatch_icall_nop(float _X)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = tanf(_X);
  return fVar1;
}



// FUNCTION 143de0afa _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG double _guard_xfg_dispatch_icall_nop(double _X)

double __cdecl _guard_xfg_dispatch_icall_nop(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0afa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = cos(_X);
  return dVar1;
}



// FUNCTION 143de0b00 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG double _guard_xfg_dispatch_icall_nop(double _X)

double __cdecl _guard_xfg_dispatch_icall_nop(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = sin(_X);
  return dVar1;
}



// FUNCTION 143de0b06 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG char * _guard_xfg_dispatch_icall_nop(char * _Dest, char * _Source, size_t _Count)

char * __cdecl _guard_xfg_dispatch_icall_nop(char *_Dest,char *_Source,size_t _Count)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0b06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = strncpy(_Dest,_Source,_Count);
  return pcVar1;
}



// FUNCTION 143de0b0c _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG float _guard_xfg_dispatch_icall_nop(float _X)

float __cdecl _guard_xfg_dispatch_icall_nop(float _X)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = sqrtf(_X);
  return fVar1;
}



// FUNCTION 143de0b12 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG float _guard_xfg_dispatch_icall_nop(float _Y, float _X)

float __cdecl _guard_xfg_dispatch_icall_nop(float _Y,float _X)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0b12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = atan2f(_Y,_X);
  return fVar1;
}



// FUNCTION 143de0b18 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG float _guard_xfg_dispatch_icall_nop(float _X)

float __cdecl _guard_xfg_dispatch_icall_nop(float _X)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = atanf(_X);
  return fVar1;
}



// FUNCTION 143de0b1e _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG double _guard_xfg_dispatch_icall_nop(double _X, double _Y)

double __cdecl _guard_xfg_dispatch_icall_nop(double _X,double _Y)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0b1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = fmod(_X,_Y);
  return dVar1;
}



// FUNCTION 143de0b24 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG float _guard_xfg_dispatch_icall_nop(float _X)

float __cdecl _guard_xfg_dispatch_icall_nop(float _X)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = asinf(_X);
  return fVar1;
}



// FUNCTION 143de0b2a _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG float _guard_xfg_dispatch_icall_nop(float _X, float _Y)

float __cdecl _guard_xfg_dispatch_icall_nop(float _X,float _Y)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0b2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = fmodf(_X,_Y);
  return fVar1;
}



// FUNCTION 143de0b30 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG double _guard_xfg_dispatch_icall_nop(double _X, double _Y)

double __cdecl _guard_xfg_dispatch_icall_nop(double _X,double _Y)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = pow(_X,_Y);
  return dVar1;
}



// FUNCTION 143de0b36 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG float _guard_xfg_dispatch_icall_nop(float _X)

float __cdecl _guard_xfg_dispatch_icall_nop(float _X)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0b36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = expf(_X);
  return fVar1;
}



// FUNCTION 143de0b3c _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void * _guard_xfg_dispatch_icall_nop(size_t _Size)

void * __cdecl _guard_xfg_dispatch_icall_nop(size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = malloc(_Size);
  return pvVar1;
}



// FUNCTION 143de0b42 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG int _guard_xfg_dispatch_icall_nop(char * _Str1, char * _Str2, size_t _MaxCount)

int __cdecl _guard_xfg_dispatch_icall_nop(char *_Str1,char *_Str2,size_t _MaxCount)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0b42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = strncmp(_Str1,_Str2,_MaxCount);
  return iVar1;
}



// FUNCTION 143de0b48 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG int _guard_xfg_dispatch_icall_nop(FILE * _File)

int __cdecl _guard_xfg_dispatch_icall_nop(FILE *_File)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = fclose(_File);
  return iVar1;
}



// FUNCTION 143de0b4e _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG size_t _guard_xfg_dispatch_icall_nop(void * _DstBuf, size_t _ElementSize, size_t _Count, FILE * _File)

size_t __cdecl
_guard_xfg_dispatch_icall_nop(void *_DstBuf,size_t _ElementSize,size_t _Count,FILE *_File)

{
  size_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0b4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = fread(_DstBuf,_ElementSize,_Count,_File);
  return sVar1;
}



// FUNCTION 143de0b54 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG size_t _guard_xfg_dispatch_icall_nop(void * _Str, size_t _Size, size_t _Count, FILE * _File)

size_t __cdecl _guard_xfg_dispatch_icall_nop(void *_Str,size_t _Size,size_t _Count,FILE *_File)

{
  size_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = fwrite(_Str,_Size,_Count,_File);
  return sVar1;
}



// FUNCTION 143de0b5a _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG double _guard_xfg_dispatch_icall_nop(double _X)

double __cdecl _guard_xfg_dispatch_icall_nop(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0b5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = acos(_X);
  return dVar1;
}



// FUNCTION 143de0b60 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG float _guard_xfg_dispatch_icall_nop(float _X)

float __cdecl _guard_xfg_dispatch_icall_nop(float _X)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = log10f(_X);
  return fVar1;
}



// FUNCTION 143de0b66 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG long _guard_xfg_dispatch_icall_nop(FILE * _File)

long __cdecl _guard_xfg_dispatch_icall_nop(FILE *_File)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0b66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = ftell(_File);
  return lVar1;
}



// FUNCTION 143de0b6c _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(void * _Base, size_t _NumOfElements, size_t _SizeOfElements, _PtFuncCompare * _PtFuncCompare)

void __cdecl
_guard_xfg_dispatch_icall_nop
          (void *_Base,size_t _NumOfElements,size_t _SizeOfElements,_PtFuncCompare *_PtFuncCompare)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  qsort(_Base,_NumOfElements,_SizeOfElements,_PtFuncCompare);
  return;
}



// FUNCTION 143de0b72 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG float _guard_xfg_dispatch_icall_nop(float _X)

float __cdecl _guard_xfg_dispatch_icall_nop(float _X)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0b72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = sinhf(_X);
  return fVar1;
}



// FUNCTION 143de0b78 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG wchar_t * _guard_xfg_dispatch_icall_nop(wchar_t * _Str)

wchar_t * __cdecl _guard_xfg_dispatch_icall_nop(wchar_t *_Str)

{
  wchar_t *pwVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pwVar1 = _wcsupr(_Str);
  return pwVar1;
}



// FUNCTION 143de0b7e _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG double _guard_xfg_dispatch_icall_nop(double _X)

double __cdecl _guard_xfg_dispatch_icall_nop(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0b7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = exp(_X);
  return dVar1;
}



// FUNCTION 143de0b84 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG double _guard_xfg_dispatch_icall_nop(double _X)

double __cdecl _guard_xfg_dispatch_icall_nop(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = log(_X);
  return dVar1;
}



// FUNCTION 143de0b8a _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG double _guard_xfg_dispatch_icall_nop(double _X)

double __cdecl _guard_xfg_dispatch_icall_nop(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0b8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = log10(_X);
  return dVar1;
}



// FUNCTION 143de0b90 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG double _guard_xfg_dispatch_icall_nop(double _X)

double __cdecl _guard_xfg_dispatch_icall_nop(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = tan(_X);
  return dVar1;
}



// FUNCTION 143de0b96 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG float _guard_xfg_dispatch_icall_nop(float _X)

float __cdecl _guard_xfg_dispatch_icall_nop(float _X)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0b96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = ceilf(_X);
  return fVar1;
}



// FUNCTION 143de0b9c _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG float _guard_xfg_dispatch_icall_nop(float _X)

float __cdecl _guard_xfg_dispatch_icall_nop(float _X)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = floorf(_X);
  return fVar1;
}



// FUNCTION 143de0ba2 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG int _guard_xfg_dispatch_icall_nop(FILE * _File, long _Offset, int _Origin)

int __cdecl _guard_xfg_dispatch_icall_nop(FILE *_File,long _Offset,int _Origin)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0ba2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = fseek(_File,_Offset,_Origin);
  return iVar1;
}



// FUNCTION 143de0ba8 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG int _guard_xfg_dispatch_icall_nop(wchar_t * _Filename, int _AccessMode)

int __cdecl _guard_xfg_dispatch_icall_nop(wchar_t *_Filename,int _AccessMode)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _waccess(_Filename,_AccessMode);
  return iVar1;
}



// FUNCTION 143de0bae _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG int _guard_xfg_dispatch_icall_nop(wchar_t * _Str1, wchar_t * _Str2)

int __cdecl _guard_xfg_dispatch_icall_nop(wchar_t *_Str1,wchar_t *_Str2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0bae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = wcscmp(_Str1,_Str2);
  return iVar1;
}



// FUNCTION 143de0bb4 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG double _guard_xfg_dispatch_icall_nop(double _X)

double __cdecl _guard_xfg_dispatch_icall_nop(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = sqrt(_X);
  return dVar1;
}



// FUNCTION 143de0bba _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG int _guard_xfg_dispatch_icall_nop(wchar_t * _Str1, wchar_t * _Str2)

int __cdecl _guard_xfg_dispatch_icall_nop(wchar_t *_Str1,wchar_t *_Str2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0bba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _wcsicmp(_Str1,_Str2);
  return iVar1;
}



// FUNCTION 143de0bc0 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG int _guard_xfg_dispatch_icall_nop(int _C)

int __cdecl _guard_xfg_dispatch_icall_nop(int _C)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = isdigit(_C);
  return iVar1;
}



// FUNCTION 143de0bc6 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG double _guard_xfg_dispatch_icall_nop(double _Y, double _X)

double __cdecl _guard_xfg_dispatch_icall_nop(double _Y,double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0bc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = atan2(_Y,_X);
  return dVar1;
}



// FUNCTION 143de0bcc _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG double _guard_xfg_dispatch_icall_nop(double _X)

double __cdecl _guard_xfg_dispatch_icall_nop(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = floor(_X);
  return dVar1;
}



// FUNCTION 143de0bd2 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG double _guard_xfg_dispatch_icall_nop(double _X)

double __cdecl _guard_xfg_dispatch_icall_nop(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0bd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = asin(_X);
  return dVar1;
}



// FUNCTION 143de0bd8 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG double _guard_xfg_dispatch_icall_nop(double _X)

double __cdecl _guard_xfg_dispatch_icall_nop(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = atan(_X);
  return dVar1;
}



// FUNCTION 143de0bde _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG double _guard_xfg_dispatch_icall_nop(double _X)

double __cdecl _guard_xfg_dispatch_icall_nop(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0bde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = ceil(_X);
  return dVar1;
}



// FUNCTION 143de0be4 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG char * _guard_xfg_dispatch_icall_nop(char * _VarName)

char * __cdecl _guard_xfg_dispatch_icall_nop(char *_VarName)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = getenv(_VarName);
  return pcVar1;
}



// FUNCTION 143de0bea _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0bea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __stdio_common_vsscanf();
  return;
}



// FUNCTION 143de0bf0 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG FILE * _guard_xfg_dispatch_icall_nop(char * _Filename, char * _Mode)

FILE * __cdecl _guard_xfg_dispatch_icall_nop(char *_Filename,char *_Mode)

{
  FILE *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = fopen(_Filename,_Mode);
  return pFVar1;
}



// FUNCTION 143de0bf6 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG int _guard_xfg_dispatch_icall_nop(int _C)

int __cdecl _guard_xfg_dispatch_icall_nop(int _C)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0bf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = isalpha(_C);
  return iVar1;
}



// FUNCTION 143de0bfc _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0bfc. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  terminate();
  return;
}



// FUNCTION 143de0c02 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG char * _guard_xfg_dispatch_icall_nop(char * _Dest, char * _Source)

char * __cdecl _guard_xfg_dispatch_icall_nop(char *_Dest,char *_Source)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0c02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = strcpy(_Dest,_Source);
  return pcVar1;
}



// FUNCTION 143de0c08 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG size_t _guard_xfg_dispatch_icall_nop(char * _Str)

size_t __cdecl _guard_xfg_dispatch_icall_nop(char *_Str)

{
  size_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = strlen(_Str);
  return sVar1;
}



// FUNCTION 143de0c0e _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG double _guard_xfg_dispatch_icall_nop(double _X)

double __cdecl _guard_xfg_dispatch_icall_nop(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0c0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = fabs(_X);
  return dVar1;
}



// FUNCTION 143de0c14 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG char * _guard_xfg_dispatch_icall_nop(char * _Dest, char * _Source)

char * __cdecl _guard_xfg_dispatch_icall_nop(char *_Dest,char *_Source)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = strcat(_Dest,_Source);
  return pcVar1;
}



// FUNCTION 143de0c1a _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG long _guard_xfg_dispatch_icall_nop(char * _Str)

long __cdecl _guard_xfg_dispatch_icall_nop(char *_Str)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0c1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = atol(_Str);
  return lVar1;
}



// FUNCTION 143de0c20 _strdup body=6 status=ok
// SIG char * _strdup(char * _Src)

char * __cdecl _strdup(char *_Src)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = _strdup(_Src);
  return pcVar1;
}



// FUNCTION 143de0c26 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0c26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _configure_narrow_argv();
  return;
}



// FUNCTION 143de0c2c _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initialize_narrow_environment();
  return;
}



// FUNCTION 143de0c32 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0c32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initialize_onexit_table();
  return;
}



// FUNCTION 143de0c38 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _register_onexit_function();
  return;
}



// FUNCTION 143de0c3e _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0c3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _crt_atexit();
  return;
}



// FUNCTION 143de0c44 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(void)

void __cdecl _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _cexit();
  return;
}



// FUNCTION 143de0c4a _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0c4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _seh_filter_exe();
  return;
}



// FUNCTION 143de0c50 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _set_app_type();
  return;
}



// FUNCTION 143de0c56 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0c56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __setusermatherr();
  return;
}



// FUNCTION 143de0c5c _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _get_narrow_winmain_command_line();
  return;
}



// FUNCTION 143de0c62 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0c62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initterm();
  return;
}



// FUNCTION 143de0c68 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _initterm_e();
  return;
}



// FUNCTION 143de0c6e _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG errno_t _guard_xfg_dispatch_icall_nop(int _Mode)

errno_t __cdecl _guard_xfg_dispatch_icall_nop(int _Mode)

{
  errno_t eVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0c6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  eVar1 = _set_fmode(_Mode);
  return eVar1;
}



// FUNCTION 143de0c7a _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0c7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _register_thread_local_exe_atexit_callback();
  return;
}



// FUNCTION 143de0c80 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG int _guard_xfg_dispatch_icall_nop(int _Flag)

int __cdecl _guard_xfg_dispatch_icall_nop(int _Flag)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de0c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _configthreadlocale(_Flag);
  return iVar1;
}



// FUNCTION 143de0c86 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0c86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _set_new_mode();
  return;
}



// FUNCTION 143de0c8c _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de0c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __p__commode();
  return;
}



// FUNCTION 143de0c94 DloadAcquireSectionWriteAccess body=170 status=ok
// SIG undefined DloadAcquireSectionWriteAccess(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x000143de0caa) */
/* WARNING: Removing unreachable block (ram,0x000143de0cd0) */
/* WARNING: Removing unreachable block (ram,0x000143de0cdc) */
/* WARNING: Removing unreachable block (ram,0x000143de0cb8) */
/* WARNING: Removing unreachable block (ram,0x000143de0ce7) */
/* WARNING: Removing unreachable block (ram,0x000143de0cf9) */
/* WARNING: Removing unreachable block (ram,0x000143de0d0a) */
/* WARNING: Removing unreachable block (ram,0x000143de0d13) */
/* WARNING: Removing unreachable block (ram,0x000143de0d2d) */

void DloadAcquireSectionWriteAccess(void)

{
  return;
}



// FUNCTION 143de0d40 DloadGetSRWLockFunctionPointers body=155 status=ok
// SIG undefined DloadGetSRWLockFunctionPointers(void)

undefined8 DloadGetSRWLockFunctionPointers(void)

{
  HMODULE pHVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  HMODULE pHVar3;
  undefined8 uVar4;
  bool bVar5;
  
  if (DAT_146bcc200 == (HMODULE)0x1) {
LAB_143de0dce:
    uVar4 = 0;
  }
  else {
    if (DAT_146bcc200 == (HMODULE)0x0) {
      hModule = GetModuleHandleW(L"KERNEL32.DLL");
      if (((hModule == (HMODULE)0x0) ||
          (pFVar2 = GetProcAddress(hModule,"AcquireSRWLockExclusive"), pFVar2 == (FARPROC)0x0)) ||
         (DAT_146bcc208 = pFVar2, pFVar2 = GetProcAddress(hModule,"ReleaseSRWLockExclusive"),
         pFVar2 == (FARPROC)0x0)) {
        hModule = (HMODULE)0x1;
        pFVar2 = DAT_146bcc210;
      }
      DAT_146bcc210 = pFVar2;
      pHVar3 = (HMODULE)0x0;
      LOCK();
      bVar5 = DAT_146bcc200 == (HMODULE)0x0;
      pHVar1 = hModule;
      if (!bVar5) {
        pHVar3 = DAT_146bcc200;
        pHVar1 = DAT_146bcc200;
      }
      DAT_146bcc200 = pHVar1;
      UNLOCK();
      if (((bVar5) && (hModule == (HMODULE)0x1)) || (pHVar3 == (HMODULE)0x1)) goto LAB_143de0dce;
    }
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 143de0ddc DloadMakePermanentImageCommit body=152 status=ok
// SIG undefined DloadMakePermanentImageCommit(void)

void DloadMakePermanentImageCommit(LPCVOID param_1,ulonglong param_2)

{
  code *pcVar1;
  SIZE_T SVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  _MEMORY_BASIC_INFORMATION local_68 [2];
  
  puVar6 = auStack_88;
  SVar2 = VirtualQuery(param_1,local_68,0x30);
  if (SVar2 == 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(0x19);
    puVar6 = auStack_80;
  }
  if ((puVar6[0x44] & 0x44) != 0) {
    *(undefined8 *)(puVar6 + -8) = 0x143de0e1c;
    GetSystemInfo((LPSYSTEM_INFO)(puVar6 + 0x50));
    uVar8 = (ulonglong)*(uint *)(puVar6 + 0x54);
    puVar7 = (undefined4 *)(-uVar8 & (ulonglong)param_1);
    uVar4 = *(uint *)(puVar6 + 0x54) - 1;
    uVar5 = (((ulonglong)((uVar4 & (uint)param_2) + (uVar4 & (uint)param_1)) - 1) + uVar8) / uVar8 +
            param_2 / uVar8;
    uVar3 = uVar5 & 0xffffffff;
    if ((int)uVar5 != 0) {
      do {
        LOCK();
        *puVar7 = *puVar7;
        UNLOCK();
        puVar7 = (undefined4 *)((longlong)puVar7 + uVar8);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  return;
}



// FUNCTION 143de0e74 DloadObtainSection body=153 status=ok
// SIG undefined DloadObtainSection(void)

/* WARNING: Enum "SectionFlags": Some values do not have unique names */

char * DloadObtainSection(dword *param_1,SectionFlags *param_2)

{
  IMAGE_SECTION_HEADER *pIVar1;
  uint uVar2;
  
  uVar2 = 0;
  pIVar1 = &IMAGE_SECTION_HEADER_140000318;
  while ((0x684f558 < (uint)pIVar1->VirtualAddress ||
         (pIVar1->VirtualAddress + (pIVar1->Misc).PhysicalAddress < 0x684f559))) {
    uVar2 = uVar2 + 1;
    pIVar1 = pIVar1 + 1;
    if (7 < uVar2) {
      return (char *)0x0;
    }
  }
  *param_1 = (pIVar1->Misc).PhysicalAddress;
  *param_2 = pIVar1->Characteristics;
  return IMAGE_DOS_HEADER_140000000.e_magic + (uint)pIVar1->VirtualAddress;
}



// FUNCTION 143de0f10 DloadProtectSection body=142 status=ok
// SIG undefined DloadProtectSection(void)

void DloadProtectSection(DWORD param_1,PDWORD param_2)

{
  code *pcVar1;
  BOOL BVar2;
  LPVOID lpAddress;
  undefined1 *puVar3;
  undefined1 local_res18 [8];
  uint local_res20 [2];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar3 = auStack_28;
  lpAddress = (LPVOID)DloadObtainSection(local_res18,local_res20);
  if (lpAddress == (LPVOID)0x0) {
    *param_2 = 4;
  }
  else {
    if (DAT_146bcc228 == 0) {
      DAT_146bcc228 = 1;
      puVar3 = auStack_28;
      if ((local_res20[0] & 0x80000000) == 0) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(0x19);
        puVar3 = auStack_20;
      }
      *(undefined8 *)(puVar3 + -8) = 0x143de0f72;
      DloadMakePermanentImageCommit(lpAddress,*(undefined4 *)(puVar3 + 0x40));
    }
    *(undefined8 *)(puVar3 + -8) = 0x143de0f85;
    BVar2 = VirtualProtect(lpAddress,(ulonglong)*(uint *)(puVar3 + 0x40),param_1,param_2);
    if (BVar2 == 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(0x19);
    }
  }
  return;
}



// FUNCTION 143de0fa0 DloadReleaseSectionWriteAccess body=147 status=ok
// SIG undefined DloadReleaseSectionWriteAccess(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x000143de0fb0) */
/* WARNING: Removing unreachable block (ram,0x000143de0fd1) */
/* WARNING: Removing unreachable block (ram,0x000143de0fdd) */
/* WARNING: Removing unreachable block (ram,0x000143de0fe0) */
/* WARNING: Removing unreachable block (ram,0x000143de0fb9) */
/* WARNING: Removing unreachable block (ram,0x000143de0feb) */
/* WARNING: Removing unreachable block (ram,0x000143de0ff4) */
/* WARNING: Removing unreachable block (ram,0x000143de1004) */
/* WARNING: Removing unreachable block (ram,0x000143de1023) */
/* WARNING: Removing unreachable block (ram,0x000143de100d) */

void DloadReleaseSectionWriteAccess(void)

{
  return;
}



// FUNCTION 143de1034 __delayLoadHelper2 body=701 status=ok
// SIG undefined __delayLoadHelper2(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x000143de126d) */
/* WARNING: Removing unreachable block (ram,0x000143de1193) */
/* WARNING: Removing unreachable block (ram,0x000143de1125) */
/* WARNING: Removing unreachable block (ram,0x000143de113d) */
/* WARNING: Removing unreachable block (ram,0x000143de1152) */
/* WARNING: Removing unreachable block (ram,0x000143de11f7) */
/* WARNING: Removing unreachable block (ram,0x000143de12bd) */

FARPROC __delayLoadHelper2(uint *param_1,longlong *param_2)

{
  HMODULE pHVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  HMODULE hLibModule;
  longlong lVar6;
  FARPROC pFVar7;
  char *pcVar8;
  ulonglong uVar9;
  undefined4 *local_res10;
  undefined4 *local_res18;
  undefined4 *local_res20;
  undefined4 local_98 [2];
  uint *local_90;
  longlong *local_88;
  char *local_80;
  ulonglong local_78;
  char *local_70;
  HMODULE local_68;
  FARPROC local_60;
  DWORD local_58;
  
  DloadAcquireSectionWriteAccess();
  local_80 = IMAGE_DOS_HEADER_140000000.e_magic + param_1[1];
  pcVar8 = IMAGE_DOS_HEADER_140000000.e_magic + param_1[2];
  uVar2 = param_1[4];
  uVar3 = param_1[5];
  uVar4 = param_1[7];
  local_68 = (HMODULE)0x0;
  local_60 = (FARPROC)0x0;
  local_58 = 0;
  local_78 = 0;
  local_70 = (char *)0x0;
  local_98[0] = 0x48;
  local_90 = param_1;
  local_88 = param_2;
  if ((*param_1 & 1) == 0) {
    local_res10 = local_98;
    DloadReleaseSectionWriteAccess();
    RaiseException(0xc06d0057,0,1,(ULONG_PTR *)&local_res10);
    pFVar7 = (FARPROC)0x0;
  }
  else {
    hLibModule = *(HMODULE *)pcVar8;
    uVar9 = (longlong)param_2 - (longlong)(IMAGE_DOS_HEADER_140000000.e_magic + param_1[3]) >> 3 &
            0xffffffff;
    uVar5 = -(int)((longlong)
                   *(undefined8 *)
                    (IMAGE_DOS_HEADER_140000000.e_magic + uVar9 * 8 + (ulonglong)uVar2) >> 0x3f);
    local_78 = (ulonglong)uVar5 ^ 1;
    if (uVar5 == 1) {
      local_70 = (char *)(ulonglong)
                         *(ushort *)
                          (IMAGE_DOS_HEADER_140000000.e_magic + uVar9 * 8 + (ulonglong)uVar2);
    }
    else {
      local_70 = IMAGE_DOS_HEADER_140000000.e_magic +
                 (ulonglong)
                 *(uint *)(IMAGE_DOS_HEADER_140000000.e_magic + uVar9 * 8 + (ulonglong)uVar2) + 2;
    }
    if (hLibModule == (HMODULE)0x0) {
      hLibModule = LoadLibraryExA(local_80,(HANDLE)0x0,0);
      if (hLibModule == (HMODULE)0x0) {
        local_58 = GetLastError();
        local_res18 = local_98;
        DloadReleaseSectionWriteAccess();
        RaiseException(0xc06d007e,0,1,(ULONG_PTR *)&local_res18);
        return local_60;
      }
      LOCK();
      pHVar1 = *(HMODULE *)pcVar8;
      *(HMODULE *)pcVar8 = hLibModule;
      UNLOCK();
      if (pHVar1 == hLibModule) {
        FreeLibrary(hLibModule);
      }
    }
    local_68 = hLibModule;
    if (((((param_1[5] == 0) || (param_1[7] == 0)) ||
         (lVar6 = (longlong)hLibModule[0xf].unused,
         *(int *)((longlong)&hLibModule->unused + lVar6) != 0x4550)) ||
        (((*(uint *)((longlong)&hLibModule[2].unused + lVar6) != uVar4 ||
          (hLibModule != *(HMODULE *)((longlong)&hLibModule[0xc].unused + lVar6))) ||
         (pFVar7 = *(FARPROC *)(IMAGE_DOS_HEADER_140000000.e_magic + uVar9 * 8 + (ulonglong)uVar3),
         *(FARPROC *)(IMAGE_DOS_HEADER_140000000.e_magic + uVar9 * 8 + (ulonglong)uVar3) ==
         (FARPROC)0x0)))) && (pFVar7 = GetProcAddress(hLibModule,local_70), pFVar7 == (FARPROC)0x0))
    {
      local_58 = GetLastError();
      local_res20 = local_98;
      DloadReleaseSectionWriteAccess();
      RaiseException(0xc06d007f,0,1,(ULONG_PTR *)&local_res20);
      DloadAcquireSectionWriteAccess();
      pFVar7 = local_60;
    }
    *param_2 = (longlong)pFVar7;
    DloadReleaseSectionWriteAccess();
  }
  return pFVar7;
}



// FUNCTION 143de12f1 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG BOOL _guard_xfg_dispatch_icall_nop(DWORD ProcessorFeature)

BOOL __stdcall _guard_xfg_dispatch_icall_nop(DWORD ProcessorFeature)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de12f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsProcessorFeaturePresent(ProcessorFeature);
  return BVar1;
}



// FUNCTION 143de1300 CAkMidiClipMgr body=33 status=ok
// SIG undefined CAkMidiClipMgr(void)

undefined8 * CAkMidiClipMgr::CAkMidiClipMgr(undefined8 *param_1)

{
  CAkMidiBaseMgr::CAkMidiBaseMgr();
  *param_1 = &PTR_LAB_145dc8058;
  return param_1;
}



// FUNCTION 143de1330 ~CAkMidiClipMgr body=15 status=ok
// SIG undefined ~CAkMidiClipMgr(void)

void CAkMidiClipMgr::~CAkMidiClipMgr(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_145dc8058;
  FUN_1431bad30();
  return;
}



// FUNCTION 143de1340 FUN_143de1340 body=257 status=ok
// SIG undefined FUN_143de1340(void)

undefined8
FUN_143de1340(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined8 *param_12)

{
  void *pvVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    uVar3 = 0x1f;
  }
  else {
    pvVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,400);
    if (pvVar1 == (void *)0x0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = (longlong *)
               FUN_143de18c0(pvVar1,param_2,param_1,param_3,param_4,param_5,param_6,param_7,param_8,
                             param_9,param_10,param_11);
    }
    *param_12 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar2 + 8))();
      if ((int)uVar3 == 1) {
        return uVar3;
      }
      CAkMidiBaseCtx::Release(*param_12);
      *param_12 = 0;
    }
    uVar3 = 2;
  }
  return uVar3;
}



// FUNCTION 143de1450 NextFrame body=213 status=ok
// SIG undefined NextFrame(void)

void CAkMidiClipMgr::NextFrame(longlong param_1,undefined4 param_2,float param_3)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined8 local_28;
  longlong lStack_20;
  
  local_28 = 0;
  lStack_20 = 0;
  lVar2 = *(longlong *)(param_1 + 0x10);
  while (lVar2 != 0) {
    lVar1 = *(longlong *)(lVar2 + 8);
    FUN_143de21d0(lVar2,&local_28,param_2);
    lVar2 = lVar1;
  }
  if (lStack_20 != 0) {
    lVar2 = lStack_20;
    do {
      fVar4 = (float)*(uint *)(lVar2 + 0xc) * (1.0 / param_3);
      if (fVar4 <= 0.0) {
        fVar3 = -0.5;
      }
      else {
        fVar3 = 0.5;
      }
      *(int *)(lVar2 + 0xc) = (int)(fVar3 + fVar4);
      lVar2 = *(longlong *)(lVar2 + 0x18);
    } while (lVar2 != 0);
  }
  FUN_1431bb5f0(param_1,&local_28,param_2);
  return;
}



// FUNCTION 143de1530 StopNoteIfUsingData body=140 status=ok
// SIG undefined StopNoteIfUsingData(void)

void CAkMidiClipMgr::StopNoteIfUsingData(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  while (lVar2 = lVar1, lVar2 != 0) {
    lVar1 = *(longlong *)(lVar2 + 8);
    cVar3 = AK::StreamMgr::CAkStmDeferredLinedUpBase<AK::StreamMgr::CAkStdStmBase>::
            IsOldestPendingTransfer(lVar2,param_2);
    if ((cVar3 != '\0') &&
       ((param_3 == '\0' || (cVar3 = FUN_143de24e0(lVar2,param_2), cVar3 == '\0')))) {
      (*(code *)**(undefined8 **)(lVar2 + 0x58))(lVar2 + 0x58,0xffffffff);
    }
  }
  return;
}



// FUNCTION 143de15c0 FUN_143de15c0 body=763 status=ok
// SIG undefined FUN_143de15c0(void)

void FUN_143de15c0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  long lVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 local_res20;
  undefined1 local_res21;
  undefined2 local_res22;
  undefined4 local_68 [2];
  longlong local_60;
  undefined8 local_58;
  undefined8 *puStack_50;
  
  plVar9 = *(longlong **)(param_1 + 0x18);
  local_60 = *(longlong *)(*param_3 + 0x40);
  plVar11 = plVar9 + (ulonglong)*(uint *)(param_1 + 0x20) * 4;
  for (; (plVar9 != plVar11 && (*plVar9 != local_60)); plVar9 = plVar9 + 4) {
  }
  plVar8 = plVar9 + 1;
  if (plVar9 == plVar11) {
    plVar8 = (longlong *)0x0;
  }
  if (plVar8 != (longlong *)0x0) {
    lVar3 = local_60;
    lVar1 = *(longlong *)(param_1 + 0x10);
    while (lVar4 = lVar1, lVar4 != 0) {
      lVar1 = *(longlong *)(lVar4 + 8);
      if ((((*(uint *)(lVar4 + 0x184) >> 1 & 1) != 0) && (lVar4 != *param_3)) &&
         (*(longlong *)(lVar4 + 0x40) == lVar3)) {
        CAkMidiBaseCtx::AddRef(lVar4);
        plVar8 = (longlong *)param_2[1];
        plVar12 = (longlong *)0x0;
        while (plVar6 = plVar12, plVar5 = plVar8, plVar5 != (longlong *)0x0) {
          plVar8 = (longlong *)plVar5[3];
          plVar12 = plVar5;
          if (*plVar5 == lVar4) {
            if (plVar5 == (longlong *)param_2[1]) {
              param_2[1] = plVar8;
            }
            else {
              plVar6[3] = (longlong)plVar8;
            }
            if (plVar5 == (longlong *)*param_2) {
              *param_2 = plVar6;
            }
            lVar7 = g_DefaultPoolId;
            plVar12 = plVar6;
            if (plVar5 != (longlong *)0x0) {
              CAkMidiBaseCtx::Release(*plVar5);
              AK::MemoryMgr::Free(lVar7,plVar5);
            }
          }
        }
        uVar10 = 0;
        do {
          local_res20 = 0xb0;
          local_res21 = (undefined1)uVar10;
          local_res22 = 0x40;
          FUN_1431bb3e0(param_1,lVar4,&local_res20,*(undefined4 *)((longlong)param_3 + 0xc),0,1);
          uVar10 = uVar10 + 1;
        } while (uVar10 < 0x10);
        plVar8 = plVar9 + 3;
        plVar12 = plVar9 + 2;
        if (plVar9 == plVar11) {
          plVar8 = (longlong *)&DAT_00000010;
        }
        *(undefined2 *)plVar8 = 0;
        if (plVar9 == plVar11) {
          plVar12 = (longlong *)&DAT_00000008;
        }
        for (puVar2 = (undefined8 *)*plVar12; puVar2 != (undefined8 *)0x0;
            puVar2 = (undefined8 *)*puVar2) {
          if (((puVar2[3] == lVar4) && (*(char *)(puVar2 + 5) == -0x70)) &&
             ((*(char *)((longlong)puVar2 + 0x2b) != '\0' && ((*(byte *)(puVar2 + 6) & 4) == 0)))) {
            local_68[0] = CONCAT31((int3)((uint)*(undefined4 *)(puVar2 + 5) >> 8),0x80);
            FUN_1431bb3e0(param_1,lVar4,local_68,*(undefined4 *)((longlong)param_3 + 0xc),1,1);
          }
        }
        CAkMidiBaseCtx::Release(lVar4);
        lVar3 = local_60;
      }
    }
  }
  lVar1 = *param_3;
  local_58 = 0;
  puStack_50 = (undefined8 *)0x0;
  FUN_143de1c30(lVar1,&local_58,*(undefined4 *)((longlong)param_3 + 0xc),
                *(uint *)(param_3 + 2) & 0x3fffffff);
  puVar2 = puStack_50;
  while (puVar2 != (undefined8 *)0x0) {
    puStack_50 = (undefined8 *)puVar2[3];
    if (puStack_50 == (undefined8 *)0x0) {
      puStack_50 = (undefined8 *)0x0;
      local_58 = 0;
    }
    if ((((char)param_3[1] != -0x50) ||
        (*(char *)((longlong)param_3 + 9) != *(char *)((longlong)puVar2 + 9))) ||
       ((*(char *)(puVar2 + 1) != -0x50 ||
        (*(char *)((longlong)param_3 + 10) != *(char *)((longlong)puVar2 + 10))))) {
      FUN_1431bb3e0(param_1,lVar1,puVar2 + 1,*(undefined4 *)((longlong)puVar2 + 0xc),0,1);
    }
    lVar7 = g_DefaultPoolId;
    CAkMidiBaseCtx::Release(*puVar2);
    AK::MemoryMgr::Free(lVar7,puVar2);
    puVar2 = puStack_50;
  }
  return;
}



// FUNCTION 143de18c0 FUN_143de18c0 body=356 status=ok
// SIG undefined FUN_143de18c0(void)

undefined8 *
FUN_143de18c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12)

{
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined1 local_28;
  undefined8 local_20;
  
  CAkMidiBaseCtx::CAkMidiBaseCtx(param_1,param_6,param_7,param_8,0);
  CAkChildCtx::CAkChildCtx(param_1 + 0xb,param_2);
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0xff;
  local_28 = 0xff;
  local_20 = 0;
  FUN_1431aaf50(param_1 + 0xe,&local_48,1);
  param_1[0x18] = param_3;
  *param_1 = &PTR_FUN_145dc8068;
  param_1[0x19] = param_4;
  param_1[0xb] = &PTR_Serialize_145dc8098;
  param_1[0xe] = &PTR_LAB_145dc80f0;
  param_1[0x1a] = param_5;
  param_1[0x1b] = param_9;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  AkMidiParseSe::AkMidiParseSe(param_1 + 0x1f);
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = param_11;
  *(undefined4 *)((longlong)param_1 + 0x17c) = param_12;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(uint *)((longlong)param_1 + 0x184) = *(uint *)((longlong)param_1 + 0x184) & 0xfffffff4 | 4;
  (**(code **)(*(longlong *)param_1[0x19] + 8))();
  return param_1;
}



// FUNCTION 143de1a40 FUN_143de1a40 body=410 status=ok
// SIG undefined FUN_143de1a40(void)

undefined8 * FUN_143de1a40(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_145dc8068;
  param_1[0xb] = &PTR_Serialize_145dc8098;
  param_1[0xe] = &PTR_LAB_145dc80f0;
  if (param_1[0x1d] != 0) {
    CAkSource::UnLockDataPtr(param_1[0x1a]);
  }
  puVar1 = (undefined8 *)param_1[0x1c];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,0);
  }
  (**(code **)(*(longlong *)param_1[0x19] + 0x130))((longlong *)param_1[0x19],1);
  FUN_143177a90();
  puVar4 = (undefined8 *)0x0;
  puVar1 = *(undefined8 **)(param_1[0x19] + 0x128);
  puVar2 = puVar1;
  puVar3 = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
LAB_143de1af6:
    if (puVar3 != (undefined8 *)0x0) {
      if (puVar3 == puVar1) {
        *(undefined8 *)(param_1[0x19] + 0x128) = puVar3[0x31];
      }
      else {
        puVar4[0x31] = puVar3[0x31];
      }
    }
  }
  else {
    do {
      puVar3 = puVar2;
      if (puVar3 == param_1) goto LAB_143de1af6;
      puVar2 = (undefined8 *)puVar3[0x31];
      puVar4 = puVar3;
    } while ((undefined8 *)puVar3[0x31] != (undefined8 *)0x0);
  }
  (**(code **)(*(longlong *)param_1[0x19] + 0x10))();
  if (param_1[0x18] != 0) {
    CAkMidiBaseMgr::DetachCtx(param_1[0x18],param_1);
  }
  if (param_1[0xd] != 0) {
    FUN_1431db420(param_1[0xd],param_1 + 0xb);
  }
  FUN_1431da830(param_1 + 0xb);
  if ((void *)param_1[0x2d] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x2e) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[0x2d]);
    param_1[0x2d] = 0;
    *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  }
  FUN_143de26f0(param_1 + 0x1f);
  FUN_1431ab010(param_1 + 0xe);
  CAkChildCtx::~CAkChildCtx(param_1 + 0xb);
  CAkMidiBaseCtx::~CAkMidiBaseCtx(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,400);
  }
  return param_1;
}



// FUNCTION 143de1be0 FUN_143de1be0 body=62 status=ok
// SIG undefined FUN_143de1be0(void)

ulonglong FUN_143de1be0(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  float fVar3;
  
  uVar2 = *(ulonglong *)(param_1 + 0x168);
  fVar3 = 1.0;
  uVar1 = uVar2 + (ulonglong)*(uint *)(param_1 + 0x170) * 0x18;
  if (uVar2 != uVar1) {
    do {
      fVar3 = fVar3 * *(float *)(uVar2 + 0x10);
      uVar2 = uVar2 + 0x18;
    } while (uVar2 != uVar1);
    if (fVar3 == 0.0) {
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 143de1c30 FUN_143de1c30 body=390 status=ok
// SIG undefined FUN_143de1c30(void)

void FUN_143de1c30(longlong param_1,longlong *param_2,undefined4 param_3,uint param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  char cVar6;
  uint uVar7;
  undefined2 local_res20;
  char local_res22;
  uint local_58 [2];
  undefined1 local_50 [24];
  
  lVar1 = param_1 + 0xf8;
  AkMidiParseSe::GetCurrentPos(lVar1,local_50);
  AkMidiParseSe::SeekToStart(lVar1);
  uVar7 = 0;
  if (param_4 != 0) {
    do {
      local_res20 = 0xff00;
      cVar6 = AkMidiParseSe::GetNextEvent(lVar1,&local_res20,local_58);
      if ((cVar6 == '\0') || (param_4 < local_58[0])) break;
      if ((char)local_res20 == -0x50) {
        puVar2 = (undefined8 *)param_2[1];
        puVar4 = (undefined8 *)0x0;
        cVar6 = -0x50;
        while (puVar3 = puVar2, puVar3 != (undefined8 *)0x0) {
          if (((*(char *)(puVar3 + 1) == -0x50) && (cVar6 == -0x50)) &&
             (*(char *)((longlong)puVar3 + 10) == local_res22)) {
            puVar2 = (undefined8 *)puVar3[3];
            if (puVar3 == (undefined8 *)param_2[1]) {
              param_2[1] = (longlong)puVar2;
            }
            else {
              puVar4[3] = puVar2;
            }
            if (puVar3 == (undefined8 *)*param_2) {
              *param_2 = (longlong)puVar4;
            }
            lVar5 = g_DefaultPoolId;
            CAkMidiBaseCtx::Release(*puVar3);
            AK::MemoryMgr::Free(lVar5,puVar3);
            cVar6 = (char)local_res20;
          }
          else {
            puVar2 = (undefined8 *)puVar3[3];
            puVar4 = puVar3;
          }
        }
        CAkMidiBaseCtx::AddMidiEvent(param_1,param_2,&local_res20,param_3,local_58[0],0,0);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != param_4);
  }
  AkMidiParseSe::SetCurrentPos(lVar1,local_50);
  return;
}



// FUNCTION 143de1df0 FUN_143de1df0 body=843 status=ok
// SIG undefined FUN_143de1df0(void)

undefined8 FUN_143de1df0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  short sVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  char local_res8 [8];
  int local_res10 [2];
  undefined4 local_res18 [4];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined1 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [144];
  
  iVar5 = CAkMidiBaseCtx::Init();
  FUN_1431da820(param_1 + 0x58);
  cVar2 = (**(code **)(**(longlong **)(param_1 + 200) + 0x128))(*(longlong **)(param_1 + 200),1);
  if (cVar2 != '\0') {
    FUN_143173d90(*(undefined8 *)(param_1 + 200));
    uVar1 = *(undefined8 *)(param_1 + 200);
    uVar3 = (**(code **)(*(longlong *)(param_1 + 0x70) + 0x28))(param_1 + 0x70);
    uVar6 = (**(code **)(*(longlong *)(param_1 + 0x70) + 0x20))(param_1 + 0x70,local_res8);
    FUN_1431abd30(param_1 + 0x70,uVar1,uVar6,uVar3);
    if ((((*(longlong *)(param_1 + 0x68) != 0) &&
         (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10), lVar7 != 0)) &&
        (lVar7 = *(longlong *)(lVar7 + 0x10), lVar7 != 0)) &&
       (lVar7 = *(longlong *)(lVar7 + 0x68), lVar7 != 0)) {
      *(undefined2 *)(lVar7 + 0x58) = 0;
    }
    if (((iVar5 == 1) &&
        (CAkSource::LockDataPtr
                   (*(undefined8 *)(param_1 + 0xd0),param_1 + 0xe8,param_1 + 0xf0,param_1 + 0xe0),
        *(longlong *)(param_1 + 0xe8) != 0)) &&
       ((*(int *)(param_1 + 0xf0) != 0 &&
        (iVar5 = AkMidiParseSe::SetBuffer(param_1 + 0xf8), iVar5 == 1)))) {
      local_res18[0] = 0;
      CAkMusicTrack::GetMidiTempoSource(*(undefined8 *)(param_1 + 200),local_res8,local_res10);
      for (lVar7 = *(longlong *)(*(longlong *)(param_1 + 200) + 0x80);
          (local_res8[0] == '\0' && (lVar7 != 0)); lVar7 = *(longlong *)(lVar7 + 0x80)) {
        CAkMusicNode::GetMidiTempoSource(lVar7,local_res8,local_res10);
      }
      if (local_res10[0] == 0) {
        local_res8[0] = '\0';
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 200) + 0x80);
        do {
          if (lVar7 == 0) break;
          CAkMusicNode::GetMidiTargetTempo(lVar7,local_res8,local_res18);
          lVar7 = *(longlong *)(lVar7 + 0x80);
        } while (local_res8[0] == '\0');
      }
      AkMidiParseSe::SetTempo(param_1 + 0xf8);
      iVar5 = AkMidiParseSe::SeekToTime(param_1 + 0xf8);
      if (iVar5 == 1) {
        sVar4 = CAkSoundBase::Loop(*(undefined8 *)(param_1 + 200));
        AkMidiParseSe::SetLoopOk(param_1 + 0xf8,sVar4 != 1);
        CAkMidiBaseMgr::AttachCtx(*(undefined8 *)(param_1 + 0xc0));
        lVar7 = *(longlong *)(param_1 + 200);
        if (*(longlong *)(lVar7 + 0x128) == 0) {
          *(longlong *)(lVar7 + 0x128) = param_1;
          *(undefined8 *)(param_1 + 0x188) = 0;
        }
        else {
          *(longlong *)(param_1 + 0x188) = *(longlong *)(lVar7 + 0x128);
          *(longlong *)(lVar7 + 0x128) = param_1;
        }
        local_e8 = *(undefined8 *)(param_1 + 0x10);
        local_d8 = 0;
        local_c0 = 0;
        local_e0 = *(undefined4 *)(param_1 + 0x2c);
        local_d0 = 0xff;
        local_c8 = 0xff;
        (**(code **)(**(longlong **)(param_1 + 200) + 0x150))
                  (*(longlong **)(param_1 + 200),local_b8,0,param_1 + 0x168,&local_e8,0,0,0,0);
        uVar3 = FUN_143de1be0(param_1);
        *(undefined1 *)(param_1 + 0x50) = uVar3;
        return 1;
      }
    }
  }
  return 2;
}



// FUNCTION 143de2140 IsOldestPendingTransfer body=11 status=ok
// SIG undefined IsOldestPendingTransfer(void)

bool AK::StreamMgr::CAkStmDeferredLinedUpBase<AK::StreamMgr::CAkStdStmBase>::IsOldestPendingTransfer
               (longlong param_1,longlong param_2)

{
  return *(longlong *)(param_1 + 0xe0) == param_2;
}



// FUNCTION 143de2150 FUN_143de2150 body=125 status=ok
// SIG undefined FUN_143de2150(void)

void FUN_143de2150(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  float fVar4;
  
  FUN_14317e170(param_1 + 0x168);
  lVar3 = *(longlong *)(param_1 + 0x168);
  fVar4 = 1.0;
  lVar1 = lVar3 + (ulonglong)*(uint *)(param_1 + 0x170) * 0x18;
  if (lVar3 != lVar1) {
    do {
      fVar4 = fVar4 * *(float *)(lVar3 + 0x10);
      lVar3 = lVar3 + 0x18;
    } while (lVar3 != lVar1);
    if (fVar4 == 0.0) {
      cVar2 = '\x01';
      goto LAB_143de21ac;
    }
  }
  cVar2 = '\0';
LAB_143de21ac:
  *(char *)(param_1 + 0x50) = cVar2;
  if (cVar2 != '\0') {
    CAkMidiBaseMgr::KillAllNotes(*(undefined8 *)(param_1 + 0xc0),param_1);
  }
  return;
}



// FUNCTION 143de21d0 FUN_143de21d0 body=544 status=ok
// SIG undefined FUN_143de21d0(void)

void FUN_143de21d0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  bool bVar5;
  float fVar6;
  double dVar7;
  undefined8 local_68;
  char *pcStack_60;
  
  if ((*(byte *)(param_1 + 0x184) & 1) == 0) {
    CAkMidiBaseCtx::AddRef();
    iVar1 = *(int *)(param_1 + 0x17c);
    uVar2 = *(uint *)(param_1 + 0x180);
    *(undefined4 *)(param_1 + 0x17c) = 0;
    bVar5 = (bool)((byte)(*(uint *)(param_1 + 0x184) >> 1) & 1);
    fVar6 = (float)(param_3 - iVar1) * (1000.0 / (float)DAT_1467bdcac);
    if (fVar6 != 0.0) {
      local_68 = 0;
      pcStack_60 = (char *)0x0;
      AkMidiParseSe::MoveEventWindow(param_1 + 0xf8,fVar6,&local_68);
      if (pcStack_60 != (char *)0x0) {
        pcVar4 = pcStack_60;
        do {
          pcStack_60 = *(char **)(pcVar4 + 0x10);
          if (pcStack_60 == (char *)0x0) {
            pcStack_60 = (char *)0x0;
            local_68 = 0;
          }
          dVar7 = (double)*(float *)(pcVar4 + 4) * (double)DAT_1467bdcac * 0.001;
          uVar3 = 0x3fe00000;
          if (dVar7 <= 0.0) {
            uVar3 = 0xbfe00000;
          }
          uVar3 = (uint)((double)((ulonglong)uVar3 << 0x20) + dVar7);
          if (uVar2 != 0xffffffff) {
            bVar5 = uVar2 <= uVar3;
          }
          if (((*pcVar4 != -0x70) || (pcVar4[3] == '\0')) || (bVar5 == false)) {
            CAkMidiBaseCtx::AddMidiEvent
                      (param_1,param_2,pcVar4,uVar3 + iVar1,*(undefined4 *)(pcVar4 + 8),
                       (byte)(*(uint *)(param_1 + 0x184) >> 1) & 1,
                       (byte)(*(uint *)(param_1 + 0x184) >> 2) & 1);
            *(uint *)(param_1 + 0x184) = *(uint *)(param_1 + 0x184) & 0xfffffffb;
          }
          AK::MemoryMgr::Free(g_DefaultPoolId,pcVar4);
          pcVar4 = pcStack_60;
        } while (pcStack_60 != (char *)0x0);
      }
    }
    if (uVar2 != 0xffffffff) {
      *(undefined4 *)(param_1 + 0x180) = 0;
      if ((*(uint *)(param_1 + 0x184) & 2) == 0) {
        *(uint *)(param_1 + 0x184) = *(uint *)(param_1 + 0x184) | 2;
        CAkMidiBaseCtx::Release(param_1);
      }
    }
    CAkMidiBaseCtx::Release(param_1);
  }
  return;
}



// FUNCTION 143de23f0 FUN_143de23f0 body=175 status=ok
// SIG undefined FUN_143de23f0(void)

void FUN_143de23f0(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  lVar1 = param_1 + -0x58;
  CAkMidiBaseCtx::AddRef(lVar1);
  if (param_2 == 0xffffffff) {
    *(undefined4 *)(param_1 + 0x128) = 0;
    *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 8;
    CAkMidiBaseCtx::CleanupActions(lVar1);
    if ((*(uint *)(param_1 + 300) & 2) == 0) {
      *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 2;
      CAkMidiBaseCtx::Release(lVar1);
    }
  }
  else if (param_2 < *(uint *)(param_1 + 0x128)) {
    *(uint *)(param_1 + 0x128) = param_2;
  }
  plVar4 = (longlong *)(param_1 + 0x18);
  uVar2 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x28))(plVar4);
  uVar3 = (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
  FUN_1431ac080(plVar4,uVar3,uVar2);
  CAkMidiBaseCtx::Release(lVar1);
  return;
}



// FUNCTION 143de24e0 FUN_143de24e0 body=180 status=ok
// SIG undefined FUN_143de24e0(void)

undefined8 FUN_143de24e0(longlong param_1)

{
  undefined8 *puVar1;
  uint local_res18 [2];
  longlong local_res20;
  undefined8 local_18 [2];
  
  local_res20 = 0;
  if (DAT_146b50b18 != 0) {
    local_18[0] = 0;
    CAkSource::LockDataPtr(*(undefined8 *)(param_1 + 0xd0),local_18,local_res18,&local_res20);
    if (local_res20 != 0) {
      CAkSource::UnLockDataPtr(*(undefined8 *)(param_1 + 0xd0));
      puVar1 = *(undefined8 **)(param_1 + 0xe0);
      *(longlong *)(param_1 + 0xe0) = local_res20;
      AkMidiParseSe::RelocateMedia(param_1 + 0xf8,local_18[0]);
      *(undefined8 *)(param_1 + 0xe8) = local_18[0];
      *(uint *)(param_1 + 0xf0) = local_res18[0];
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143de25a0 FUN_143de25a0 body=216 status=ok
// SIG undefined FUN_143de25a0(void)

bool FUN_143de25a0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char local_res8 [8];
  char local_res10 [8];
  int local_res18 [4];
  
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))();
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  CAkMusicTrack::GetMidiTargetNode
            (*(undefined8 *)(param_1 + 200),local_res8,local_res18,local_res10);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 200) + 0x80);
  while ((lVar1 != 0 && (local_res8[0] == '\0'))) {
    CAkMusicNode::GetMidiTargetNode(lVar1,local_res8,local_res18,local_res10);
    lVar1 = *(longlong *)(lVar1 + 0x80);
  }
  *(char *)(param_1 + 0x48) = local_res10[0];
  *(int *)(param_1 + 0x3c) = local_res18[0];
  if (local_res18[0] == 0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    bVar2 = true;
  }
  else {
    lVar1 = CAkAudioLibIndex::GetNodePtrAndAddRef
                      (DAT_146b50af8,local_res18[0],local_res10[0] != '\0');
    *(longlong *)(param_1 + 0x40) = lVar1;
    bVar2 = false;
    if (lVar1 == 0) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
      return false;
    }
  }
  return !bVar2;
}



// FUNCTION 143de26a0 AkMidiParseSe body=68 status=ok
// SIG undefined AkMidiParseSe(void)

undefined8 * AkMidiParseSe::AkMidiParseSe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145dc8120;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4a) = 0;
  *(uint *)((longlong)param_1 + 0x6c) = *(uint *)((longlong)param_1 + 0x6c) & 0xfffffffc;
  *(uint *)((longlong)param_1 + 0x6c) = *(uint *)((longlong)param_1 + 0x6c) | 4;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  return param_1;
}



// FUNCTION 143de26f0 FUN_143de26f0 body=11 status=ok
// SIG undefined FUN_143de26f0(void)

void FUN_143de26f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145dc8120;
  return;
}



// FUNCTION 143de2700 FUN_143de2700 body=43 status=ok
// SIG undefined FUN_143de2700(void)

undefined8 * FUN_143de2700(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145dc8120;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 143de2730 DecodeVariableLength body=71 status=ok
// SIG undefined DecodeVariableLength(void)

void DecodeVariableLength(undefined8 *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0;
  *param_2 = 0;
  do {
    *param_2 = *param_2 << 7;
    bVar1 = *(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
    *param_2 = *param_2 | bVar1 & 0x7f;
    if (bVar1 < 0x80) break;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  if (uVar2 == 4) {
    *param_2 = 0xffffffff;
  }
  return;
}



// FUNCTION 143de2780 ExtractEvent body=67 status=ok
// SIG undefined ExtractEvent(void)

void ExtractEvent(longlong param_1)

{
  char *_Dst;
  char *_Src;
  size_t _Size;
  
  _Dst = (char *)(param_1 + 0x24);
  _Dst[0] = '\0';
  _Dst[1] = '\0';
  _Dst[2] = '\0';
  _Dst[3] = '\0';
  *(undefined2 *)(param_1 + 0x28) = 0;
  _Src = *(char **)(param_1 + 0x18);
  if (_Src != (char *)0x0) {
    _Size = 6;
    if ((-1 < *_Src) && (*(char *)(param_1 + 0x2a) != '\0')) {
      *_Dst = *(char *)(param_1 + 0x2a);
      _Size = 5;
      _Src = *(char **)(param_1 + 0x18);
      _Dst = (char *)(param_1 + 0x25);
    }
    _guard_xfg_dispatch_icall_nop(_Dst,_Src,_Size);
    return;
  }
  return;
}



// FUNCTION 143de27d0 GetCurrentPos body=24 status=ok
// SIG undefined GetCurrentPos(void)

void AkMidiParseSe::GetCurrentPos(longlong param_1,undefined4 *param_2)

{
  param_2[2] = *(undefined4 *)(param_1 + 100);
  param_2[3] = *(undefined4 *)(param_1 + 0x68);
  *param_2 = *(undefined4 *)(param_1 + 0x5c);
  param_2[1] = *(undefined4 *)(param_1 + 0x60);
  return;
}



// FUNCTION 143de27f0 GetNextEvent body=253 status=ok
// SIG undefined GetNextEvent(void)

/* WARNING: Removing unreachable block (ram,0x000143de283c) */

longlong AkMidiParseSe::GetNextEvent(longlong param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  uint7 uVar5;
  longlong lVar4;
  byte bVar6;
  
  while( true ) {
    if (((((*(byte *)(param_1 + 0x6c) & 2) == 0) || (*(longlong *)(param_1 + 0x38) == 0)) ||
        (-1 < (char)*(byte *)(param_1 + 0x44))) ||
       (bVar6 = *(byte *)(param_1 + 0x44) & 0xf0, bVar6 == 0xf0)) {
      bVar3 = false;
    }
    else {
      *param_2 = bVar6;
      param_2[1] = *(byte *)(param_1 + 0x44) & 0xf;
      param_2[2] = *(byte *)(param_1 + 0x45);
      bVar1 = *(byte *)(param_1 + 0x46);
      param_2[3] = bVar1;
      if (bVar6 == 0x90) {
        bVar6 = 0x90;
        if (bVar1 == 0) {
          bVar6 = 0x80;
        }
        *param_2 = bVar6;
      }
      bVar3 = true;
    }
    *param_3 = *(undefined4 *)(param_1 + 0x5c);
    uVar2 = *(uint *)(param_1 + 0x6c);
    uVar5 = (uint7)(uint3)(uVar2 >> 8);
    if ((uVar2 & 2) == 0) {
      lVar4 = (ulonglong)uVar5 << 8;
    }
    else if ((*(longlong *)(param_1 + 0x38) == 0) && ((uVar2 & 4) == 0)) {
      lVar4 = (ulonglong)uVar5 << 8;
    }
    else {
      SeekNextEvent(param_1 + 0x20);
      if ((*(longlong *)(param_1 + 0x38) == 0) && ((*(byte *)(param_1 + 0x6c) & 4) != 0)) {
        ResetSeek(param_1 + 0x20,1);
      }
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x40);
      lVar4 = CONCAT71((uint7)(uint3)((uint)*(int *)(param_1 + 0x40) >> 8),1);
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
    }
    if (bVar3) break;
    if ((char)lVar4 == '\0') {
      return lVar4;
    }
  }
  return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
}



// FUNCTION 143de28f0 MoveEventWindow body=439 status=ok
// SIG undefined MoveEventWindow(void)

/* WARNING: Removing unreachable block (ram,0x000143de29bf) */

void AkMidiParseSe::MoveEventWindow(longlong param_1,undefined8 param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 in_EAX;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined1 auVar11 [16];
  uint local_res10;
  undefined1 auVar10 [16];
  
  uVar8 = (undefined4)((ulonglong)param_2 >> 0x20);
  iVar2 = *(int *)(param_1 + 100);
  fVar7 = (float)param_2 * *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x68);
  auVar11._4_4_ = uVar8;
  auVar11._0_4_ = fVar7;
  iVar6 = (int)fVar7;
  fVar9 = fVar7;
  if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar7)) {
    auVar11._8_4_ = uVar8;
    auVar11._12_4_ = uVar8;
    auVar10._8_8_ = auVar11._8_8_;
    auVar10._4_4_ = fVar7;
    auVar10._0_4_ = fVar7;
    uVar4 = movmskps(in_EAX,auVar10);
    fVar9 = (float)(int)(iVar6 - (uVar4 & 1));
  }
  *(int *)(param_1 + 100) = (int)(longlong)fVar9 + iVar2;
  *(float *)(param_1 + 0x68) = fVar7 - fVar9;
  while( true ) {
    if (((*(longlong *)(param_1 + 0x38) == 0) && ((*(byte *)(param_1 + 0x6c) & 4) == 0)) ||
       (*(uint *)(param_1 + 100) <= *(uint *)(param_1 + 0x60))) {
      return;
    }
    if ((((*(byte *)(param_1 + 0x6c) & 2) != 0) && (*(longlong *)(param_1 + 0x38) != 0)) &&
       ((bVar1 = *(byte *)(param_1 + 0x44), (char)bVar1 < '\0' && ((bVar1 & 0xf0) != 0xf0)))) {
      local_res10 = CONCAT13(*(char *)(param_1 + 0x46),
                             CONCAT12(*(undefined1 *)(param_1 + 0x45),CONCAT11(bVar1,bVar1))) &
                    0xffff0ff0;
      if ((bVar1 & 0xf0) == 0x90) {
        uVar3 = 0x90;
        if (*(char *)(param_1 + 0x46) == '\0') {
          uVar3 = 0x80;
        }
        local_res10 = CONCAT31(local_res10._1_3_,uVar3);
      }
      puVar5 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x18);
      if (puVar5 != (uint *)0x0) {
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = local_res10;
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar5[1] = (uint)((float)(uint)(*(int *)(param_1 + 0x60) - iVar2) *
                          *(float *)(param_1 + 0x54));
        puVar5[2] = *(uint *)(param_1 + 0x5c);
        if (param_3[1] == 0) {
          param_3[1] = (longlong)puVar5;
        }
        else {
          *(uint **)(*param_3 + 0x10) = puVar5;
        }
        *param_3 = (longlong)puVar5;
      }
    }
    if ((*(uint *)(param_1 + 0x6c) & 2) == 0) break;
    if ((*(longlong *)(param_1 + 0x38) == 0) && ((*(uint *)(param_1 + 0x6c) & 4) == 0)) {
      return;
    }
    SeekNextEvent(param_1 + 0x20);
    if ((*(longlong *)(param_1 + 0x38) == 0) && ((*(byte *)(param_1 + 0x6c) & 4) != 0)) {
      ResetSeek(param_1 + 0x20,1);
    }
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  }
  return;
}



// FUNCTION 143de2ab0 RelocateMedia body=68 status=ok
// SIG undefined RelocateMedia(void)

void AkMidiParseSe::RelocateMedia(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = param_2 - *(longlong *)(param_1 + 8);
    if (*(longlong *)(param_1 + 0x28) != 0) {
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + lVar1;
    }
    if (*(longlong *)(param_1 + 0x30) != 0) {
      *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + lVar1;
    }
    if (*(longlong *)(param_1 + 0x38) != 0) {
      *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + lVar1;
    }
    *(longlong *)(param_1 + 8) = param_2;
  }
  return;
}



// FUNCTION 143de2b00 ResetSeek body=247 status=ok
// SIG undefined ResetSeek(void)

undefined8 ResetSeek(longlong param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  char *_Src;
  uint *puVar4;
  uint uVar5;
  size_t _Size;
  uint *_Dst;
  
  uVar5 = 0;
  if (param_2 != 0) {
    puVar4 = (uint *)(param_1 + 0x20);
    do {
      _Dst = puVar4 + 1;
      *(undefined1 *)((longlong)puVar4 + 10) = 0;
      *(longlong *)(puVar4 + -2) = *(longlong *)(puVar4 + -6);
      *puVar4 = 0xffffffff;
      if (*(longlong *)(puVar4 + -6) != 0) {
        *puVar4 = 0;
        uVar3 = 0;
        do {
          *puVar4 = *puVar4 << 7;
          bVar1 = **(byte **)(puVar4 + -2);
          *(byte **)(puVar4 + -2) = *(byte **)(puVar4 + -2) + 1;
          uVar2 = bVar1 & 0x7f | *puVar4;
          *puVar4 = uVar2;
          if (bVar1 < 0x80) break;
          uVar3 = uVar3 + 1;
        } while (uVar3 < 4);
        if (uVar3 == 4) {
          *puVar4 = 0xffffffff;
          return 0;
        }
        if (uVar2 == 0xffffffff) {
          return 0;
        }
        if (*(ulonglong *)(puVar4 + -4) <= *(ulonglong *)(puVar4 + -2)) {
          return 0;
        }
        *_Dst = 0;
        *(undefined2 *)(puVar4 + 2) = 0;
        _Src = *(char **)(puVar4 + -2);
        if (_Src != (char *)0x0) {
          _Size = 6;
          if ((-1 < *_Src) && (*(char *)((longlong)puVar4 + 10) != '\0')) {
            *(char *)_Dst = *(char *)((longlong)puVar4 + 10);
            _Size = 5;
            _Src = *(char **)(puVar4 + -2);
            _Dst = (uint *)((longlong)puVar4 + 5);
          }
          _guard_xfg_dispatch_icall_nop(_Dst,_Src,_Size);
        }
      }
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 0xc;
    } while (uVar5 < param_2);
  }
  return 1;
}



// FUNCTION 143de2c00 SeekNextEvent body=474 status=ok
// SIG undefined SeekNextEvent(void)

undefined8 SeekNextEvent(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  
  pbVar3 = *(byte **)(param_1 + 0x18);
  if (pbVar3 == (byte *)0x0) {
    return 1;
  }
  pbVar4 = (byte *)0x0;
  bVar1 = *(byte *)(param_1 + 0x24);
  bVar5 = bVar1 & 0xf0;
  if (((char)bVar1 < '\0') && (bVar5 != 0xf0)) {
    if (bVar5 != 0) {
      if (bVar5 == 0xb0) {
        if (0x7f < *(byte *)(param_1 + 0x25)) goto LAB_143de2d27;
      }
      else if ((bVar5 + 0x40 & 0xef) == 0) {
        uVar2 = 2;
        goto LAB_143de2d00;
      }
      uVar2 = 3;
LAB_143de2d00:
      if ((((char)bVar1 < '\0') && (bVar5 != 0xf0)) && ((~(*pbVar3 >> 7) & 1) != 0)) {
        uVar2 = (ulonglong)((int)uVar2 - 1);
      }
      pbVar3 = pbVar3 + uVar2;
      *(byte **)(param_1 + 0x18) = pbVar3;
      if (pbVar3 <= *(byte **)(param_1 + 0x10)) goto LAB_143de2d2e;
    }
  }
  else if (((byte)(bVar1 + 0x10) < 0x10) && ((0x8081U >> (bVar1 + 0x10 & 0x1f) & 1) != 0)) {
    pbVar7 = pbVar4;
    pbVar8 = (byte *)(param_1 + 0x26);
    pbVar11 = pbVar4;
    if (bVar1 != 0xff) {
      pbVar8 = (byte *)(param_1 + 0x25);
    }
    do {
      uVar6 = (uint)pbVar7;
      pbVar9 = pbVar8 + 1;
      uVar10 = *pbVar8 & 0x7f | (int)pbVar11 << 7;
      if (*pbVar8 < 0x80) break;
      uVar6 = uVar6 + 1;
      pbVar7 = (byte *)(ulonglong)uVar6;
      pbVar8 = pbVar9;
      pbVar11 = (byte *)(ulonglong)uVar10;
    } while (uVar6 < 4);
    if ((((uVar6 != 4) && (uVar10 != 0xffffffff)) && (pbVar9 <= pbVar9 + uVar10)) &&
       (uVar6 = (uVar10 - 0x24) + ((int)pbVar9 - (int)param_1), uVar2 = (ulonglong)uVar6,
       uVar6 != 0xffffffff)) goto LAB_143de2d00;
  }
LAB_143de2d27:
  *(undefined8 *)(param_1 + 0x18) = 0;
  pbVar3 = pbVar4;
LAB_143de2d2e:
  if ((pbVar3 != (byte *)0x0) && (pbVar3 <= *(byte **)(param_1 + 0x10))) {
    bVar1 = *(byte *)(param_1 + 0x24);
    if ((-1 < (char)bVar1) || ((bVar1 & 0xf0) == 0xf0)) {
      bVar1 = 0;
    }
    *(byte *)(param_1 + 0x2a) = bVar1;
    if (*(longlong *)(param_1 + 0x18) == *(longlong *)(param_1 + 0x10)) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined2 *)(param_1 + 0x28) = 0;
      *(undefined1 *)(param_1 + 0x2a) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
      return 1;
    }
    DecodeVariableLength(param_1 + 0x18,param_1 + 0x20);
    if ((*(int *)(param_1 + 0x20) != -1) &&
       (*(ulonglong *)(param_1 + 0x18) < *(ulonglong *)(param_1 + 0x10))) {
      ExtractEvent(param_1);
      return 1;
    }
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  return 0;
}



// FUNCTION 143de2de0 SeekToStart body=44 status=ok
// SIG undefined SeekToStart(void)

void AkMidiParseSe::SeekToStart(longlong param_1)

{
  ResetSeek(param_1 + 0x20,1);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x40);
  return;
}



// FUNCTION 143de2e10 SeekToTime body=256 status=ok
// SIG undefined SeekToTime(void)

undefined8 AkMidiParseSe::SeekToTime(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  undefined1 auVar5 [16];
  float fVar6;
  undefined1 auVar4 [16];
  
  auVar5._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
  if ((*(byte *)(param_1 + 0x6c) & 2) != 0) {
    ResetSeek(param_1 + 0x20,1);
    fVar6 = (float)param_2 * *(float *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x40);
    auVar5._0_4_ = fVar6;
    iVar2 = (int)fVar6;
    fVar3 = fVar6;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar6)) {
      auVar5._8_4_ = auVar5._4_4_;
      auVar5._12_4_ = auVar5._4_4_;
      auVar4._8_8_ = auVar5._8_8_;
      auVar4._4_4_ = fVar6;
      auVar4._0_4_ = fVar6;
      uVar1 = movmskps(*(undefined4 *)(param_1 + 0x40),auVar4);
      fVar3 = (float)(int)(iVar2 - (uVar1 & 1));
    }
    *(int *)(param_1 + 100) = (int)(longlong)fVar3;
    *(float *)(param_1 + 0x68) = fVar6 - fVar3;
    while ((*(longlong *)(param_1 + 0x38) != 0 || ((*(byte *)(param_1 + 0x6c) & 4) != 0))) {
      if (*(uint *)(param_1 + 100) <= *(uint *)(param_1 + 0x60)) {
        return 1;
      }
      if (((*(uint *)(param_1 + 0x6c) & 2) != 0) &&
         ((*(longlong *)(param_1 + 0x38) != 0 || ((*(uint *)(param_1 + 0x6c) & 4) != 0)))) {
        SeekNextEvent(param_1 + 0x20);
        if ((*(longlong *)(param_1 + 0x38) == 0) && ((*(byte *)(param_1 + 0x6c) & 4) != 0)) {
          ResetSeek(param_1 + 0x20,1);
        }
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x40);
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
      }
    }
  }
  return 2;
}



// FUNCTION 143de2f10 SetBuffer body=344 status=ok
// SIG undefined SetBuffer(void)

undefined8 AkMidiParseSe::SetBuffer(longlong param_1,undefined1 *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  float fVar3;
  
  uVar2 = *(uint *)(param_1 + 0x6c) & 0xfffffffc;
  *(uint *)(param_1 + 0x6c) = uVar2;
  if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
    *(undefined1 **)(param_1 + 8) = param_2;
    *(uint *)(param_1 + 0x6c) = uVar2 | 1;
    *(uint *)(param_1 + 0x10) = param_3;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    uVar2 = (uint)CONCAT11(*param_2,param_2[1]);
    *(uint *)(param_1 + 0x1c) = uVar2;
    if (uVar2 == 0) {
      uVar2 = *(uint *)(param_1 + 0x6c);
    }
    else {
      fVar3 = *(float *)(param_2 + 2);
      *(float *)(param_1 + 0x50) = fVar3;
      fVar3 = (float)uVar2 * fVar3;
      *(float *)(param_1 + 0x54) = 60000.0 / fVar3;
      *(float *)(param_1 + 0x58) = fVar3 * 1.6666667e-05;
      *(undefined1 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined1 *)(param_1 + 0x4a) = 0;
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 2;
      uVar2 = *(uint *)(param_1 + 0x6c);
      *(undefined1 **)(param_1 + 0x28) = param_2 + 6;
      *(undefined1 **)(param_1 + 0x30) = param_2 + param_3;
    }
    if ((uVar2 & 2) != 0) {
      bVar1 = ResetSeek(param_1 + 0x20,1);
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined8 *)(param_1 + 100) = 0;
      *(uint *)(param_1 + 0x6c) = (uint)bVar1 * 2 | *(uint *)(param_1 + 0x6c) & 0xfffffffd;
      if (((uint)bVar1 * 2 & 2) != 0) {
        return 1;
      }
    }
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    return 2;
  }
  return 2;
}



// FUNCTION 143de3070 SetCurrentPos body=172 status=ok
// SIG undefined SetCurrentPos(void)

void AkMidiParseSe::SetCurrentPos(longlong param_1,uint *param_2)

{
  uint uVar1;
  
  ResetSeek(param_1 + 0x20,1);
  uVar1 = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 100) = 0;
  if (*param_2 != 0) {
    do {
      if (((*(uint *)(param_1 + 0x6c) & 2) != 0) &&
         ((*(longlong *)(param_1 + 0x38) != 0 || ((*(uint *)(param_1 + 0x6c) & 4) != 0)))) {
        SeekNextEvent(param_1 + 0x20);
        if ((*(longlong *)(param_1 + 0x38) == 0) && ((*(byte *)(param_1 + 0x6c) & 4) != 0)) {
          ResetSeek(param_1 + 0x20,1);
        }
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x40);
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *param_2);
  }
  *(uint *)(param_1 + 0x60) = param_2[1];
  *(uint *)(param_1 + 100) = param_2[2];
  *(uint *)(param_1 + 0x68) = param_2[3];
  return;
}



// FUNCTION 143de3120 SetLoopOk body=14 status=ok
// SIG undefined SetLoopOk(void)

void AkMidiParseSe::SetLoopOk(longlong param_1,byte param_2)

{
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffffffb;
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | (uint)param_2 << 2;
  return;
}



// FUNCTION 143de3130 SetTempo body=69 status=ok
// SIG undefined SetTempo(void)

void AkMidiParseSe::SetTempo(longlong param_1,float param_2)

{
  if (param_2 == 0.0) {
    param_2 = *(float *)(param_1 + 0x50);
  }
  else {
    *(float *)(param_1 + 0x50) = param_2;
  }
  param_2 = (float)*(uint *)(param_1 + 0x1c) * param_2;
  *(float *)(param_1 + 0x54) = 60000.0 / param_2;
  *(float *)(param_1 + 0x58) = param_2 * 1.6666667e-05;
  return;
}



// FUNCTION 143de3175 DelayLoad_PxGetPhysicsBinaryMetaData body=12 status=ok
// SIG undefined DelayLoad_PxGetPhysicsBinaryMetaData(void)

void DelayLoad_PxGetPhysicsBinaryMetaData(void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143de3187 DelayLoad_PxRegisterPhysicsSerializers body=12 status=ok
// SIG undefined DelayLoad_PxRegisterPhysicsSerializers(void)

void DelayLoad_PxRegisterPhysicsSerializers(void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143de3193 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de3193. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PxRegisterPhysicsSerializers();
  return;
}



// FUNCTION 143de3199 DelayLoad_PxUnregisterPhysicsSerializers body=12 status=ok
// SIG undefined DelayLoad_PxUnregisterPhysicsSerializers(void)

void DelayLoad_PxUnregisterPhysicsSerializers(void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143de31a5 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143de31a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PxUnregisterPhysicsSerializers();
  return;
}



// FUNCTION 143de31ab DelayLoad_?getGeometry@PxShapeGeometryPropertyHelper@physx@@QEBA_NPEBVPxShape@2@AEAVPxBoxGeometry@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?getGeometry@PxShapeGeometryPropertyHelper@physx@@QEBA_NPEBVPxShape@2@AEAVPxBoxGeometry@2@@Z(void)

void DelayLoad__getGeometry_PxShapeGeometryPropertyHelper_physx__QEBA_NPEBVPxShape_2_AEAVPxBoxGeometry_2__Z
               (void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143de31b7 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG bool _guard_xfg_dispatch_icall_nop(PxShapeGeometryPropertyHelper * this, PxShape * param_1, PxBoxGeometry * param_2)

bool __thiscall
physx::PxShapeGeometryPropertyHelper::_guard_xfg_dispatch_icall_nop
          (PxShapeGeometryPropertyHelper *this,PxShape *param_1,PxBoxGeometry *param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de31b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = getGeometry(this,param_1,param_2);
  return bVar1;
}



// FUNCTION 143de31bd DelayLoad_?getGeometry@PxShapeGeometryPropertyHelper@physx@@QEBA_NPEBVPxShape@2@AEAVPxSphereGeometry@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?getGeometry@PxShapeGeometryPropertyHelper@physx@@QEBA_NPEBVPxShape@2@AEAVPxSphereGeometry@2@@Z(void)

void DelayLoad__getGeometry_PxShapeGeometryPropertyHelper_physx__QEBA_NPEBVPxShape_2_AEAVPxSphereGeometry_2__Z
               (void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143de31c9 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG bool _guard_xfg_dispatch_icall_nop(PxShapeGeometryPropertyHelper * this, PxShape * param_1, PxSphereGeometry * param_2)

bool __thiscall
physx::PxShapeGeometryPropertyHelper::_guard_xfg_dispatch_icall_nop
          (PxShapeGeometryPropertyHelper *this,PxShape *param_1,PxSphereGeometry *param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de31c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = getGeometry(this,param_1,param_2);
  return bVar1;
}



// FUNCTION 143de31cf DelayLoad_?getGeometry@PxShapeGeometryPropertyHelper@physx@@QEBA_NPEBVPxShape@2@AEAVPxCapsuleGeometry@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?getGeometry@PxShapeGeometryPropertyHelper@physx@@QEBA_NPEBVPxShape@2@AEAVPxCapsuleGeometry@2@@Z(void)

void DelayLoad__getGeometry_PxShapeGeometryPropertyHelper_physx__QEBA_NPEBVPxShape_2_AEAVPxCapsuleGeometry_2__Z
               (void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143de31db _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG bool _guard_xfg_dispatch_icall_nop(PxShapeGeometryPropertyHelper * this, PxShape * param_1, PxCapsuleGeometry * param_2)

bool __thiscall
physx::PxShapeGeometryPropertyHelper::_guard_xfg_dispatch_icall_nop
          (PxShapeGeometryPropertyHelper *this,PxShape *param_1,PxCapsuleGeometry *param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de31db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = getGeometry(this,param_1,param_2);
  return bVar1;
}



// FUNCTION 143de31e1 DelayLoad_?getGeometry@PxShapeGeometryPropertyHelper@physx@@QEBA_NPEBVPxShape@2@AEAVPxPlaneGeometry@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?getGeometry@PxShapeGeometryPropertyHelper@physx@@QEBA_NPEBVPxShape@2@AEAVPxPlaneGeometry@2@@Z(void)

void DelayLoad__getGeometry_PxShapeGeometryPropertyHelper_physx__QEBA_NPEBVPxShape_2_AEAVPxPlaneGeometry_2__Z
               (void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143de31ed _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG bool _guard_xfg_dispatch_icall_nop(PxShapeGeometryPropertyHelper * this, PxShape * param_1, PxPlaneGeometry * param_2)

bool __thiscall
physx::PxShapeGeometryPropertyHelper::_guard_xfg_dispatch_icall_nop
          (PxShapeGeometryPropertyHelper *this,PxShape *param_1,PxPlaneGeometry *param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de31ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = getGeometry(this,param_1,param_2);
  return bVar1;
}



// FUNCTION 143de31f3 DelayLoad_?getGeometry@PxShapeGeometryPropertyHelper@physx@@QEBA_NPEBVPxShape@2@AEAVPxConvexMeshGeometry@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?getGeometry@PxShapeGeometryPropertyHelper@physx@@QEBA_NPEBVPxShape@2@AEAVPxConvexMeshGeometry@2@@Z(void)

void DelayLoad__getGeometry_PxShapeGeometryPropertyHelper_physx__QEBA_NPEBVPxShape_2_AEAVPxConvexMeshGeometry_2__Z
               (void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143de31ff _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG bool _guard_xfg_dispatch_icall_nop(PxShapeGeometryPropertyHelper * this, PxShape * param_1, PxConvexMeshGeometry * param_2)

bool __thiscall
physx::PxShapeGeometryPropertyHelper::_guard_xfg_dispatch_icall_nop
          (PxShapeGeometryPropertyHelper *this,PxShape *param_1,PxConvexMeshGeometry *param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de31ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = getGeometry(this,param_1,param_2);
  return bVar1;
}



// FUNCTION 143de3205 DelayLoad_?getGeometry@PxShapeGeometryPropertyHelper@physx@@QEBA_NPEBVPxShape@2@AEAVPxTriangleMeshGeometry@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?getGeometry@PxShapeGeometryPropertyHelper@physx@@QEBA_NPEBVPxShape@2@AEAVPxTriangleMeshGeometry@2@@Z(void)

void DelayLoad__getGeometry_PxShapeGeometryPropertyHelper_physx__QEBA_NPEBVPxShape_2_AEAVPxTriangleMeshGeometry_2__Z
               (void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143de3211 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG bool _guard_xfg_dispatch_icall_nop(PxShapeGeometryPropertyHelper * this, PxShape * param_1, PxTriangleMeshGeometry * param_2)

bool __thiscall
physx::PxShapeGeometryPropertyHelper::_guard_xfg_dispatch_icall_nop
          (PxShapeGeometryPropertyHelper *this,PxShape *param_1,PxTriangleMeshGeometry *param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de3211. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = getGeometry(this,param_1,param_2);
  return bVar1;
}



// FUNCTION 143de3217 DelayLoad_?getGeometry@PxShapeGeometryPropertyHelper@physx@@QEBA_NPEBVPxShape@2@AEAVPxHeightFieldGeometry@2@@Z body=12 status=ok
// SIG undefined DelayLoad_?getGeometry@PxShapeGeometryPropertyHelper@physx@@QEBA_NPEBVPxShape@2@AEAVPxHeightFieldGeometry@2@@Z(void)

void DelayLoad__getGeometry_PxShapeGeometryPropertyHelper_physx__QEBA_NPEBVPxShape_2_AEAVPxHeightFieldGeometry_2__Z
               (void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143de3223 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG bool _guard_xfg_dispatch_icall_nop(PxShapeGeometryPropertyHelper * this, PxShape * param_1, PxHeightFieldGeometry * param_2)

bool __thiscall
physx::PxShapeGeometryPropertyHelper::_guard_xfg_dispatch_icall_nop
          (PxShapeGeometryPropertyHelper *this,PxShape *param_1,PxHeightFieldGeometry *param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143de3223. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = getGeometry(this,param_1,param_2);
  return bVar1;
}



// FUNCTION 143de3229 DelayLoad_??0PxMaterialGeneratedInfo@physx@@QEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??0PxMaterialGeneratedInfo@physx@@QEAA@XZ(void)

void DelayLoad___0PxMaterialGeneratedInfo_physx__QEAA_XZ(void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143de3235 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(PxMaterialGeneratedInfo * this)

void __thiscall
physx::PxMaterialGeneratedInfo::_guard_xfg_dispatch_icall_nop(PxMaterialGeneratedInfo *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143de3235. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PxMaterialGeneratedInfo(this);
  return;
}



// FUNCTION 143de323b DelayLoad_??0PxRigidDynamicGeneratedInfo@physx@@QEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??0PxRigidDynamicGeneratedInfo@physx@@QEAA@XZ(void)

void DelayLoad___0PxRigidDynamicGeneratedInfo_physx__QEAA_XZ(void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143de3247 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(PxRigidDynamicGeneratedInfo * this)

void __thiscall
physx::PxRigidDynamicGeneratedInfo::_guard_xfg_dispatch_icall_nop(PxRigidDynamicGeneratedInfo *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143de3247. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PxRigidDynamicGeneratedInfo(this);
  return;
}



// FUNCTION 143de324d DelayLoad_??0PxRigidStaticGeneratedInfo@physx@@QEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??0PxRigidStaticGeneratedInfo@physx@@QEAA@XZ(void)

void DelayLoad___0PxRigidStaticGeneratedInfo_physx__QEAA_XZ(void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143de3259 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(PxRigidStaticGeneratedInfo * this)

void __thiscall
physx::PxRigidStaticGeneratedInfo::_guard_xfg_dispatch_icall_nop(PxRigidStaticGeneratedInfo *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143de3259. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PxRigidStaticGeneratedInfo(this);
  return;
}



// FUNCTION 143de325f DelayLoad_??0PxArticulationLinkGeneratedInfo@physx@@QEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??0PxArticulationLinkGeneratedInfo@physx@@QEAA@XZ(void)

void DelayLoad___0PxArticulationLinkGeneratedInfo_physx__QEAA_XZ(void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143de326b _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(PxArticulationLinkGeneratedInfo * this)

void __thiscall
physx::PxArticulationLinkGeneratedInfo::_guard_xfg_dispatch_icall_nop
          (PxArticulationLinkGeneratedInfo *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143de326b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PxArticulationLinkGeneratedInfo(this);
  return;
}



// FUNCTION 143de3271 DelayLoad_??0PxArticulationJointGeneratedInfo@physx@@QEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??0PxArticulationJointGeneratedInfo@physx@@QEAA@XZ(void)

void DelayLoad___0PxArticulationJointGeneratedInfo_physx__QEAA_XZ(void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143de327d _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(PxArticulationJointGeneratedInfo * this)

void __thiscall
physx::PxArticulationJointGeneratedInfo::_guard_xfg_dispatch_icall_nop
          (PxArticulationJointGeneratedInfo *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143de327d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PxArticulationJointGeneratedInfo(this);
  return;
}



// FUNCTION 143de3283 DelayLoad_??0PxArticulationGeneratedInfo@physx@@QEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??0PxArticulationGeneratedInfo@physx@@QEAA@XZ(void)

void DelayLoad___0PxArticulationGeneratedInfo_physx__QEAA_XZ(void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143de328f _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(PxArticulationGeneratedInfo * this)

void __thiscall
physx::PxArticulationGeneratedInfo::_guard_xfg_dispatch_icall_nop(PxArticulationGeneratedInfo *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143de328f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PxArticulationGeneratedInfo(this);
  return;
}



// FUNCTION 143de3295 DelayLoad_??0PxAggregateGeneratedInfo@physx@@QEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??0PxAggregateGeneratedInfo@physx@@QEAA@XZ(void)

void DelayLoad___0PxAggregateGeneratedInfo_physx__QEAA_XZ(void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143de32a1 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(PxAggregateGeneratedInfo * this)

void __thiscall
physx::PxAggregateGeneratedInfo::_guard_xfg_dispatch_icall_nop(PxAggregateGeneratedInfo *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143de32a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PxAggregateGeneratedInfo(this);
  return;
}



// FUNCTION 143de32a7 DelayLoad_??0PxShapeGeneratedInfo@physx@@QEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??0PxShapeGeneratedInfo@physx@@QEAA@XZ(void)

void DelayLoad___0PxShapeGeneratedInfo_physx__QEAA_XZ(void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143de32b3 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(PxShapeGeneratedInfo * this)

void __thiscall
physx::PxShapeGeneratedInfo::_guard_xfg_dispatch_icall_nop(PxShapeGeneratedInfo *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143de32b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PxShapeGeneratedInfo(this);
  return;
}



// FUNCTION 143de32b9 DelayLoad_??0PxClothFabricGeneratedInfo@physx@@QEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??0PxClothFabricGeneratedInfo@physx@@QEAA@XZ(void)

void DelayLoad___0PxClothFabricGeneratedInfo_physx__QEAA_XZ(void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143de32c5 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(PxClothFabricGeneratedInfo * this)

void __thiscall
physx::PxClothFabricGeneratedInfo::_guard_xfg_dispatch_icall_nop(PxClothFabricGeneratedInfo *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143de32c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PxClothFabricGeneratedInfo(this);
  return;
}



// FUNCTION 143de32cb DelayLoad_??0PxClothGeneratedInfo@physx@@QEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??0PxClothGeneratedInfo@physx@@QEAA@XZ(void)

void DelayLoad___0PxClothGeneratedInfo_physx__QEAA_XZ(void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143de32d7 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(PxClothGeneratedInfo * this)

void __thiscall
physx::PxClothGeneratedInfo::_guard_xfg_dispatch_icall_nop(PxClothGeneratedInfo *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143de32d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PxClothGeneratedInfo(this);
  return;
}



// FUNCTION 143de32dd DelayLoad_??0PxParticleFluidGeneratedInfo@physx@@QEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??0PxParticleFluidGeneratedInfo@physx@@QEAA@XZ(void)

void DelayLoad___0PxParticleFluidGeneratedInfo_physx__QEAA_XZ(void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143de32e9 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(PxParticleFluidGeneratedInfo * this)

void __thiscall
physx::PxParticleFluidGeneratedInfo::_guard_xfg_dispatch_icall_nop
          (PxParticleFluidGeneratedInfo *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143de32e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PxParticleFluidGeneratedInfo(this);
  return;
}



// FUNCTION 143de32ef DelayLoad_??0PxParticleSystemGeneratedInfo@physx@@QEAA@XZ body=12 status=ok
// SIG undefined DelayLoad_??0PxParticleSystemGeneratedInfo@physx@@QEAA@XZ(void)

void DelayLoad___0PxParticleSystemGeneratedInfo_physx__QEAA_XZ(void)

{
  FUN_143267dec();
  return;
}



// FUNCTION 143de32fb _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(PxParticleSystemGeneratedInfo * this)

void __thiscall
physx::PxParticleSystemGeneratedInfo::_guard_xfg_dispatch_icall_nop
          (PxParticleSystemGeneratedInfo *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143de32fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PxParticleSystemGeneratedInfo(this);
  return;
}


