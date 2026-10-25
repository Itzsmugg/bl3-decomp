// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143d6ab60 int_bn_mod_inverse body=1675 status=ok
// SIG undefined int_bn_mod_inverse(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong int_bn_mod_inverse(longlong param_1,undefined8 param_2,undefined8 param_3,
                           undefined8 param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  
  iVar1 = BN_abs_is_word(param_3,1);
  if ((iVar1 != 0) || (iVar1 = BN_is_zero(param_3), iVar1 != 0)) {
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 1;
    }
    return 0;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  iVar1 = BN_get_flags(param_2,4);
  if ((iVar1 != 0) || (iVar1 = BN_get_flags(param_3,4), iVar1 != 0)) {
    lVar6 = BN_mod_inverse_no_branch(param_1,param_2,param_3,param_4);
    return lVar6;
  }
  BN_CTX_start(param_4);
  lVar4 = BN_CTX_get(param_4);
  lVar5 = BN_CTX_get(param_4);
  lVar6 = BN_CTX_get(param_4);
  puVar7 = (undefined8 *)BN_CTX_get(param_4);
  lVar8 = BN_CTX_get(param_4);
  lVar9 = BN_CTX_get(param_4);
  lVar10 = BN_CTX_get(param_4);
  if (lVar10 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1;
    if (param_1 == 0) {
      lVar11 = BN_new();
    }
    if (lVar11 != 0) {
      BN_set_word(lVar6,1);
      BN_set_word(lVar9,0);
      lVar12 = BN_copy(lVar5,param_2);
      if (((lVar12 != 0) && (lVar12 = BN_copy(lVar4,param_3), lVar12 != 0)) &&
         (((*(undefined4 *)(lVar4 + 0x10) = 0, *(int *)(lVar5 + 0x10) == 0 &&
           (iVar1 = BN_ucmp(lVar5,lVar4), iVar1 < 0)) ||
          (iVar1 = BN_nnmod(lVar5,lVar5,lVar4,param_4), iVar1 != 0)))) {
        iVar2 = -1;
        iVar1 = BN_is_odd(param_3);
        if ((iVar1 == 0) || (iVar1 = BN_num_bits(param_3), 0x800 < iVar1)) {
          iVar1 = BN_is_zero(lVar5);
          lVar12 = lVar4;
          if (iVar1 != 0) goto LAB_143d6b0aa;
          do {
            lVar13 = lVar9;
            lVar4 = lVar5;
            lVar9 = lVar6;
            iVar1 = BN_num_bits(lVar4);
            iVar3 = BN_num_bits(lVar12);
            if (iVar3 == iVar1) {
              iVar1 = BN_set_word(puVar7,1);
              if (iVar1 == 0) goto LAB_143d6b15a;
              iVar1 = BN_sub(lVar8,lVar12,lVar4);
            }
            else {
              iVar1 = BN_num_bits(lVar4);
              iVar3 = BN_num_bits(lVar12);
              if (iVar3 == iVar1 + 1) {
                iVar1 = BN_lshift1(lVar10,lVar4);
                if (iVar1 == 0) goto LAB_143d6b15a;
                iVar1 = BN_ucmp(lVar12,lVar10);
                if (iVar1 < 0) {
                  iVar1 = BN_set_word(puVar7,1);
                  if (iVar1 == 0) goto LAB_143d6b15a;
                  iVar1 = BN_sub(lVar8,lVar12,lVar4);
                }
                else {
                  iVar1 = BN_sub(lVar8,lVar12,lVar10);
                  if ((iVar1 == 0) || (iVar1 = BN_add(puVar7,lVar10,lVar4), iVar1 == 0))
                  goto LAB_143d6b15a;
                  iVar1 = BN_ucmp(lVar12,puVar7);
                  if (iVar1 < 0) {
                    iVar1 = BN_set_word(puVar7,2);
                  }
                  else {
                    iVar1 = BN_set_word(puVar7,3);
                    if (iVar1 == 0) goto LAB_143d6b15a;
                    iVar1 = BN_sub(lVar8,lVar8,lVar4);
                  }
                }
              }
              else {
                iVar1 = BN_div(puVar7,lVar8,lVar12,lVar4,param_4);
              }
            }
            if (iVar1 == 0) goto LAB_143d6b15a;
            iVar1 = BN_is_one(puVar7);
            lVar6 = lVar9;
            if (iVar1 == 0) {
              iVar1 = BN_is_word(puVar7,2);
              if (iVar1 == 0) {
                iVar1 = BN_is_word(puVar7,4);
                if (iVar1 == 0) {
                  if (*(int *)(puVar7 + 1) == 1) {
                    lVar6 = BN_copy(lVar12,lVar9);
                    if (lVar6 == 0) goto LAB_143d6b15a;
                    iVar1 = BN_mul_word(lVar12,*(undefined8 *)*puVar7);
                  }
                  else {
                    iVar1 = BN_mul(lVar12,puVar7,lVar9,param_4);
                  }
                }
                else {
                  iVar1 = BN_lshift(lVar12,lVar9,2);
                }
              }
              else {
                iVar1 = BN_lshift1(lVar12,lVar9);
              }
              lVar6 = lVar12;
              if (iVar1 == 0) goto LAB_143d6b15a;
            }
            iVar1 = BN_add(lVar12,lVar6,lVar13);
            if (iVar1 == 0) goto LAB_143d6b15a;
            iVar2 = -iVar2;
            iVar1 = BN_is_zero(lVar8);
            lVar6 = lVar12;
            lVar5 = lVar8;
            lVar8 = lVar13;
            lVar12 = lVar4;
          } while (iVar1 == 0);
          if (iVar2 < 0) goto LAB_143d6b0aa;
        }
        else {
          iVar1 = BN_is_zero(lVar5);
          if (iVar1 == 0) {
            do {
              iVar2 = BN_is_bit_set(lVar5,0);
              iVar1 = 0;
              if (iVar2 == 0) {
                do {
                  iVar1 = iVar1 + 1;
                  iVar2 = BN_is_odd(lVar6);
                  if (((iVar2 != 0) && (iVar2 = BN_uadd(lVar6,lVar6,param_3), iVar2 == 0)) ||
                     (iVar2 = BN_rshift1(lVar6,lVar6), iVar2 == 0)) goto LAB_143d6b15a;
                  iVar2 = BN_is_bit_set(lVar5,iVar1);
                } while (iVar2 == 0);
                if ((0 < iVar1) && (iVar1 = BN_rshift(lVar5,lVar5,iVar1), iVar1 == 0))
                goto LAB_143d6b15a;
              }
              iVar2 = BN_is_bit_set(lVar4,0);
              iVar1 = 0;
              if (iVar2 == 0) {
                do {
                  iVar1 = iVar1 + 1;
                  iVar2 = BN_is_odd(lVar9);
                  if (((iVar2 != 0) && (iVar2 = BN_uadd(lVar9,lVar9,param_3), iVar2 == 0)) ||
                     (iVar2 = BN_rshift1(lVar9,lVar9), iVar2 == 0)) goto LAB_143d6b15a;
                  iVar2 = BN_is_bit_set(lVar4,iVar1);
                } while (iVar2 == 0);
                if ((0 < iVar1) && (iVar1 = BN_rshift(lVar4,lVar4,iVar1), iVar1 == 0))
                goto LAB_143d6b15a;
              }
              iVar1 = BN_ucmp(lVar5,lVar4);
              if (iVar1 < 0) {
                iVar1 = BN_uadd(lVar9,lVar9,lVar6);
                lVar8 = lVar4;
                lVar10 = lVar5;
              }
              else {
                iVar1 = BN_uadd(lVar6,lVar6,lVar9);
                lVar8 = lVar5;
                lVar10 = lVar4;
              }
              if ((iVar1 == 0) || (iVar1 = BN_usub(lVar8,lVar8,lVar10), iVar1 == 0))
              goto LAB_143d6b15a;
              iVar1 = BN_is_zero(lVar5);
            } while (iVar1 == 0);
          }
LAB_143d6b0aa:
          iVar1 = BN_sub(lVar9,param_3,lVar9);
          if (iVar1 == 0) goto LAB_143d6b15a;
        }
        iVar1 = BN_is_one(lVar4);
        if (iVar1 == 0) {
          if (param_5 != (undefined4 *)0x0) {
            *param_5 = 1;
          }
        }
        else {
          if ((*(int *)(lVar9 + 0x10) == 0) && (iVar1 = BN_ucmp(lVar9,param_3), iVar1 < 0)) {
            lVar6 = BN_copy(lVar11,lVar9);
            bVar14 = lVar6 == 0;
          }
          else {
            iVar1 = BN_nnmod(lVar11,lVar9,param_3,param_4);
            bVar14 = iVar1 == 0;
          }
          lVar6 = lVar11;
          if (!bVar14) goto LAB_143d6b16d;
        }
      }
    }
  }
LAB_143d6b15a:
  lVar6 = 0;
  if (param_1 == 0) {
    BN_free(lVar11);
  }
LAB_143d6b16d:
  BN_CTX_end(param_4);
  return lVar6;
}



// FUNCTION 143d6b1f0 generate_key body=531 status=ok
// SIG undefined generate_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong generate_key(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar11;
  undefined8 uVar10;
  
  lVar9 = 0;
  bVar1 = false;
  iVar2 = BN_num_bits(*(undefined8 *)(param_1 + 8));
  if (10000 < iVar2) {
    ERR_put_error(5,0x67,0x67,"crypto\\dh\\dh_key.c",0x56);
    return 0;
  }
  lVar3 = BN_CTX_new();
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar8 = lVar9;
  lVar4 = lVar9;
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x28);
    if (lVar4 == 0) {
      lVar4 = BN_secure_new();
      uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
      lVar8 = 0;
      if (lVar4 == 0) goto LAB_143d6b39b;
      bVar1 = true;
    }
    lVar5 = *(longlong *)(param_1 + 0x20);
    if (lVar5 == 0) {
      lVar5 = BN_new();
      uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
      lVar8 = lVar5;
      if (lVar5 == 0) goto LAB_143d6b39b;
    }
    lVar6 = lVar9;
    lVar8 = lVar5;
    if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
      lVar6 = BN_MONT_CTX_set_locked
                        (param_1 + 0x38,*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 8)
                         ,lVar3);
      uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
      if (lVar6 == 0) goto LAB_143d6b39b;
    }
    uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
    if (bVar1) {
      if (*(longlong *)(param_1 + 0x40) == 0) {
        iVar2 = *(int *)(param_1 + 0x18);
        if (iVar2 == 0) {
          iVar2 = BN_num_bits(*(undefined8 *)(param_1 + 8));
          iVar2 = iVar2 + -1;
        }
        iVar2 = BN_priv_rand(lVar4,iVar2,0,0);
        if (iVar2 == 0) goto LAB_143d6b39b;
      }
      else {
        do {
          do {
            iVar2 = BN_priv_rand_range(lVar4,*(undefined8 *)(param_1 + 0x40));
            uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
            if (iVar2 == 0) goto LAB_143d6b39b;
            iVar2 = BN_is_zero(lVar4);
          } while (iVar2 != 0);
          iVar2 = BN_is_one(lVar4);
          uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
        } while (iVar2 != 0);
      }
    }
    lVar7 = BN_new();
    if (lVar7 != 0) {
      BN_with_flags(lVar7,lVar4,4);
      uVar10 = *(undefined8 *)(param_1 + 8);
      iVar2 = (**(code **)(*(longlong *)(param_1 + 0x78) + 0x18))
                        (param_1,lVar5,*(undefined8 *)(param_1 + 0x10),lVar7,uVar10,lVar3,lVar6);
      uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
      BN_free(lVar7);
      if (iVar2 != 0) {
        *(longlong *)(param_1 + 0x20) = lVar5;
        lVar9 = 1;
        *(longlong *)(param_1 + 0x28) = lVar4;
        goto LAB_143d6b3bf;
      }
    }
  }
LAB_143d6b39b:
  ERR_put_error(5,0x67,3,"crypto\\dh\\dh_key.c",CONCAT44(uVar11,0x97));
  lVar5 = *(longlong *)(param_1 + 0x20);
LAB_143d6b3bf:
  if (lVar8 != lVar5) {
    BN_free(lVar8);
  }
  if (lVar4 != *(longlong *)(param_1 + 0x28)) {
    BN_free(lVar4);
  }
  BN_CTX_free(lVar3);
  return lVar9;
}



// FUNCTION 143d6b410 compute_key body=419 status=ok
// SIG undefined compute_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 compute_key(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_res18 [4];
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uVar5 = 0xffffffff;
  lVar4 = 0;
  iVar1 = BN_num_bits(*(undefined8 *)(param_3 + 8));
  if (10000 < iVar1) {
    ERR_put_error(5,0x66,0x67,"crypto\\dh\\dh_key.c",CONCAT44(uVar6,0xaa));
    return 0xffffffff;
  }
  lVar2 = BN_CTX_new();
  if (lVar2 == 0) {
    return 0xffffffff;
  }
  BN_CTX_start(lVar2);
  lVar3 = BN_CTX_get(lVar2);
  if (lVar3 != 0) {
    if (*(longlong *)(param_3 + 0x28) == 0) {
      uVar7 = 0xb7;
      uVar6 = 100;
    }
    else {
      if ((*(byte *)(param_3 + 0x30) & 1) != 0) {
        lVar4 = BN_MONT_CTX_set_locked
                          (param_3 + 0x38,*(undefined8 *)(param_3 + 0x88),
                           *(undefined8 *)(param_3 + 8),lVar2);
        BN_set_flags(*(undefined8 *)(param_3 + 0x28),4);
        if (lVar4 == 0) goto LAB_143d6b58a;
      }
      iVar1 = DH_check_pub_key(param_3,param_2,local_res18);
      if ((iVar1 == 0) || (local_res18[0] != 0)) {
        uVar7 = 0xc4;
        uVar6 = 0x66;
      }
      else {
        iVar1 = (**(code **)(*(longlong *)(param_3 + 0x78) + 0x18))
                          (param_3,lVar3,param_2,*(undefined8 *)(param_3 + 0x28),
                           *(undefined8 *)(param_3 + 8),lVar2,lVar4);
        if (iVar1 != 0) {
          uVar5 = BN_bn2bin(lVar3,param_1);
          goto LAB_143d6b58a;
        }
        uVar7 = 0xca;
        uVar6 = 3;
      }
    }
    ERR_put_error(5,0x66,uVar6,"crypto\\dh\\dh_key.c",uVar7);
  }
LAB_143d6b58a:
  BN_CTX_end(lVar2);
  BN_CTX_free(lVar2);
  return uVar5;
}



// FUNCTION 143d6b5c0 dh_bn_mod_exp body=66 status=ok
// SIG undefined dh_bn_mod_exp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dh_bn_mod_exp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  BN_mod_exp_mont(param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 143d6b620 dh_finish body=32 status=ok
// SIG undefined dh_finish(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dh_finish(longlong param_1)

{
  BN_MONT_CTX_free(*(undefined8 *)(param_1 + 0x38));
  return 1;
}



// FUNCTION 143d6b640 DH_compute_key body=25 status=ok
// SIG undefined DH_compute_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DH_compute_key(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000143d6b655. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_3 + 0x78) + 0x10))();
  return;
}



// FUNCTION 143d6b660 DH_compute_key_padded body=150 status=ok
// SIG undefined DH_compute_key_padded(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int DH_compute_key_padded(void *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*(longlong *)(param_3 + 0x78) + 0x10))();
  if (iVar1 < 1) {
    return iVar1;
  }
  iVar2 = BN_num_bits(*(undefined8 *)(param_3 + 8));
  iVar2 = (int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3;
  iVar3 = iVar2 - iVar1;
  if (0 < iVar3) {
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar3 + (longlong)param_1),param_1,(longlong)iVar1);
    _guard_xfg_dispatch_icall_nop(param_1,0,(longlong)iVar3);
  }
  return iVar2;
}



// FUNCTION 143d6b700 DH_generate_key body=25 status=ok
// SIG undefined DH_generate_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DH_generate_key(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143d6b715. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x78) + 8))();
  return;
}



// FUNCTION 143d6b720 DH_get_default_method body=8 status=ok
// SIG undefined DH_get_default_method(void)

undefined * DH_get_default_method(void)

{
  return PTR_PTR_146837af8;
}



// FUNCTION 143d6b730 ENGINE_get_default_DH body=32 status=ok
// SIG undefined ENGINE_get_default_DH(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_get_default_DH(void)

{
  engine_table_select(&DAT_146bcb9e0,1);
  return;
}



// FUNCTION 143d6b750 ENGINE_register_DH body=80 status=ok
// SIG undefined ENGINE_register_DH(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_register_DH(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar1 = engine_table_register
                      (&DAT_146bcb9e0,FUN_143d6b7f0,param_1,&DAT_145d8b2cc,1,0,0x143d6b75a);
    return uVar1;
  }
  return 1;
}



// FUNCTION 143d6b7a0 ENGINE_set_default_DH body=80 status=ok
// SIG undefined ENGINE_set_default_DH(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_set_default_DH(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar1 = engine_table_register
                      (&DAT_146bcb9e0,FUN_143d6b7f0,param_1,&DAT_145d8b2cc,1,1,0x143d6b7aa);
    return uVar1;
  }
  return 1;
}



// FUNCTION 143d6b7f0 FUN_143d6b7f0 body=29 status=ok
// SIG undefined FUN_143d6b7f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d6b7f0(void)

{
  engine_table_cleanup(&DAT_146bcb9e0);
  return;
}



// FUNCTION 143d6b810 BN_div body=1402 status=ok
// SIG undefined BN_div(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
BN_div(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4,undefined8 param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  bool bVar23;
  longlong *local_res8;
  int local_84;
  ulonglong *local_80;
  longlong local_60;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  longlong *local_48;
  
  bVar23 = false;
  local_84 = 0;
  if (((0 < (int)param_3[1]) && (*(longlong *)(*param_3 + -8 + (longlong)(int)param_3[1] * 8) == 0))
     || ((0 < (int)param_4[1] && (*(longlong *)(*param_4 + -8 + (longlong)(int)param_4[1] * 8) == 0)
         ))) {
    ERR_put_error(3,0x6b,0x6b,"crypto\\bn\\bn_div.c",0x9a);
    return 0;
  }
  iVar4 = BN_get_flags(param_3,4);
  if ((iVar4 != 0) || (iVar4 = BN_get_flags(param_4,4), iVar4 != 0)) {
    bVar23 = true;
    local_84 = 1;
  }
  iVar4 = BN_is_zero(param_4);
  if (iVar4 != 0) {
    ERR_put_error(3,0x6b,0x67,"crypto\\bn\\bn_div.c",0xb0);
    return 0;
  }
  if ((!bVar23) && (iVar4 = BN_ucmp(param_3,param_4), iVar4 < 0)) {
    if ((param_2 != 0) && (lVar7 = BN_copy(param_2,param_3), lVar7 == 0)) {
      return 0;
    }
    if (param_1 != (longlong *)0x0) {
      BN_set_word(param_1,0);
    }
    return 1;
  }
  BN_CTX_start(param_5);
  local_res8 = param_1;
  if (param_1 == (longlong *)0x0) {
    local_res8 = (longlong *)BN_CTX_get(param_5);
  }
  plVar8 = (longlong *)BN_CTX_get(param_5);
  plVar9 = (longlong *)BN_CTX_get(param_5);
  local_48 = plVar9;
  plVar10 = (longlong *)BN_CTX_get(param_5);
  if (plVar10 != (longlong *)0x0) {
    uVar5 = BN_num_bits(param_4);
    uVar5 = uVar5 & 0x8000003f;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xffffffc0) + 1;
    }
    iVar4 = BN_lshift(plVar10,param_4,-uVar5 + 0x40);
    if (iVar4 != 0) {
      iVar18 = -uVar5 + 0x80;
      *(undefined4 *)(plVar10 + 2) = 0;
      iVar4 = BN_lshift(plVar9,param_3,iVar18);
      if (iVar4 != 0) {
        *(undefined4 *)(plVar9 + 2) = 0;
        if (bVar23) {
          if ((int)plVar10[1] + 1 < (int)plVar9[1]) {
            lVar7 = bn_wexpand(plVar9,(int)plVar9[1] + 1);
            if (lVar7 == 0) goto LAB_143d6bd5b;
            *(undefined8 *)(*plVar9 + (longlong)(int)plVar9[1] * 8) = 0;
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          }
          else {
            lVar7 = bn_wexpand(plVar9,(int)plVar10[1] + 2);
            if (lVar7 == 0) goto LAB_143d6bd5b;
            iVar4 = (int)plVar10[1];
            uVar14 = (ulonglong)(int)plVar9[1];
            if ((int)plVar9[1] < iVar4 + 2) {
              lVar7 = uVar14 * 8;
              do {
                uVar5 = (int)uVar14 + 1;
                uVar14 = (ulonglong)uVar5;
                *(undefined8 *)(lVar7 + *plVar9) = 0;
                iVar4 = (int)plVar10[1];
                lVar7 = lVar7 + 8;
              } while ((int)uVar5 < iVar4 + 2);
            }
            *(int *)(plVar9 + 1) = iVar4 + 2;
          }
        }
        iVar4 = (int)plVar10[1];
        lVar7 = (longlong)iVar4;
        local_50 = 0;
        iVar19 = (int)plVar9[1] - iVar4;
        local_4c = 2;
        local_60 = *plVar9 + (longlong)iVar19 * 8;
        local_54 = *(int *)((longlong)plVar9 + 0xc) - iVar19;
        uVar14 = *(ulonglong *)(*plVar10 + -8 + lVar7 * 8);
        if (iVar4 == 1) {
          uVar21 = 0;
        }
        else {
          uVar21 = *(ulonglong *)(*plVar10 + -0x10 + lVar7 * 8);
        }
        puVar17 = (ulonglong *)(*plVar9 + -8 + (longlong)(int)plVar9[1] * 8);
        local_58 = iVar4;
        lVar11 = bn_wexpand(local_res8,iVar19 + 1);
        if (lVar11 != 0) {
          *(uint *)(local_res8 + 2) = *(uint *)(param_4 + 2) ^ *(uint *)(param_3 + 2);
          *(int *)(local_res8 + 1) = iVar19 - local_84;
          local_80 = (ulonglong *)(*local_res8 + -8 + (longlong)iVar19 * 8);
          lVar11 = bn_wexpand(plVar8,iVar4 + 1);
          if (lVar11 != 0) {
            if (local_84 == 0) {
              iVar6 = BN_ucmp(&local_60,plVar10);
              if (iVar6 < 0) {
                *(int *)(local_res8 + 1) = (int)local_res8[1] + -1;
              }
              else {
                bn_sub_words(local_60,local_60,*plVar10,iVar4);
                *local_80 = 1;
              }
            }
            if ((int)local_res8[1] == 0) {
              *(undefined4 *)(local_res8 + 2) = 0;
              local_80 = local_80 + 1;
            }
            if (0 < (int)(iVar19 - 1U)) {
              uVar22 = (ulonglong)(iVar19 - 1U);
              do {
                if (*puVar17 == uVar14) {
                  uVar20 = 0xffffffffffffffff;
                }
                else {
                  uVar16 = puVar17[-1];
                  uVar20 = bn_div_words(*puVar17,uVar16,uVar14);
                  auVar1._8_8_ = 0;
                  auVar1._0_8_ = uVar20;
                  auVar2._8_8_ = 0;
                  auVar2._0_8_ = uVar21;
                  auVar3 = auVar1 * auVar2;
                  uVar16 = uVar16 - uVar20 * uVar14;
                  bVar23 = auVar3._8_8_ == uVar16;
                  if (uVar16 <= auVar3._8_8_) {
                    do {
                      uVar15 = auVar3._8_8_;
                      uVar12 = auVar3._0_8_;
                      if ((bVar23) && (uVar12 <= puVar17[-2])) break;
                      uVar20 = uVar20 - 1;
                      uVar16 = uVar16 + uVar14;
                      if (uVar16 < uVar14) break;
                      if (uVar12 < uVar21) {
                        uVar15 = uVar15 - 1;
                      }
                      auVar3._8_8_ = uVar15;
                      auVar3._0_8_ = uVar12 - uVar21;
                      bVar23 = uVar15 == uVar16;
                    } while (uVar16 <= uVar15);
                  }
                }
                uVar13 = bn_mul_words(*plVar8,*plVar10,iVar4,uVar20);
                *(undefined8 *)(lVar7 * 8 + *plVar8) = uVar13;
                local_60 = local_60 + -8;
                lVar11 = bn_sub_words(local_60,local_60,*plVar8,iVar4 + 1);
                if (lVar11 != 0) {
                  uVar20 = uVar20 - 1;
                  lVar11 = bn_add_words(local_60,local_60,*plVar10,iVar4);
                  if (lVar11 != 0) {
                    *puVar17 = *puVar17 + 1;
                  }
                }
                puVar17 = puVar17 + -1;
                local_80 = local_80 + -1;
                *local_80 = uVar20;
                uVar22 = uVar22 - 1;
                plVar9 = local_48;
              } while (uVar22 != 0);
            }
            bn_correct_top(plVar9);
            if (param_2 != 0) {
              lVar7 = param_3[2];
              BN_rshift(param_2,plVar9,iVar18);
              iVar4 = BN_is_zero(param_2);
              if (iVar4 == 0) {
                *(int *)(param_2 + 0x10) = (int)lVar7;
              }
            }
            if (local_84 != 0) {
              bn_correct_top(local_res8);
            }
            BN_CTX_end(param_5);
            return 1;
          }
        }
      }
    }
  }
LAB_143d6bd5b:
  BN_CTX_end(param_5);
  return 0;
}



// FUNCTION 143d6bd90 BN_GENCB_call body=94 status=ok
// SIG undefined BN_GENCB_call(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_GENCB_call(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 != 1) {
      if (*param_1 != 2) {
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x000143d6bdcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 4))(param_2,param_3,param_1);
      return uVar1;
    }
    if (*(code **)(param_1 + 4) != (code *)0x0) {
      (**(code **)(param_1 + 4))(param_2,param_3,*(undefined8 *)(param_1 + 2),param_1,0x143d6bd9a);
    }
  }
  return 1;
}



// FUNCTION 143d6bdf0 BN_generate_prime_ex body=1419 status=ok
// SIG undefined BN_generate_prime_ex(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong BN_generate_prime_ex
                    (undefined8 param_1,int param_2,int param_3,longlong param_4,longlong param_5,
                    undefined8 param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ushort *puVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined2 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  int local_res10;
  undefined8 uVar16;
  uint local_58;
  
  uVar13 = 0;
  local_58 = 0;
  if (param_2 < 0xea3) {
    if (param_2 < 0x541) {
      if (param_2 < 0x1dc) {
        if (param_2 < 400) {
          if (param_2 < 0x15b) {
            if (param_2 < 0x134) {
              local_res10 = 0x22;
              if (0x36 < param_2) {
                local_res10 = 0x1b;
              }
            }
            else {
              local_res10 = 8;
            }
          }
          else {
            local_res10 = 7;
          }
        }
        else {
          local_res10 = 6;
        }
      }
      else {
        local_res10 = 5;
      }
    }
    else {
      local_res10 = 4;
    }
  }
  else {
    local_res10 = 3;
  }
  if (param_2 < 2) {
    uVar16 = 0x40;
  }
  else {
    if ((param_2 != 2) || (param_3 == 0)) {
      puVar4 = (ushort *)CRYPTO_zalloc(0x1000,"crypto\\bn\\bn_prime.c",0x48);
      uVar11 = uVar13;
      uVar5 = uVar13;
      if ((puVar4 != (ushort *)0x0) && (uVar5 = BN_CTX_new(), uVar11 = 0, uVar5 != 0)) {
        BN_CTX_start(uVar5);
        lVar6 = BN_CTX_get(uVar5);
        if (lVar6 != 0) {
LAB_143d6bf90:
          do {
            uVar10 = (uint)uVar13;
            if (param_4 == 0) {
              uVar13 = 0xffffffffffffba38;
LAB_143d6bfb0:
              while (iVar2 = BN_priv_rand(param_1,param_2,1), iVar2 != 0) {
                lVar14 = 1;
                puVar9 = puVar4;
                do {
                  puVar9 = puVar9 + 1;
                  lVar7 = BN_mod_word(param_1);
                  if (lVar7 == -1) goto LAB_143d6c332;
                  *puVar9 = (ushort)lVar7;
                  lVar14 = lVar14 + 1;
                } while (lVar14 < 0x800);
                if (param_2 < 0x41) {
                  lVar14 = BN_get_word(param_1);
                  if (param_2 == 0x40) {
                    lVar14 = -lVar14;
                  }
                  else {
                    lVar14 = (1L << ((byte)param_2 & 0x3f)) - lVar14;
                  }
                  if (lVar14 - 1U < uVar13) {
                    uVar13 = lVar14 - 1U;
                  }
                }
                uVar11 = 0;
                do {
                  if (param_2 < 0x41) {
                    uVar8 = BN_get_word(param_1);
                    iVar2 = 1;
                    puVar9 = puVar4;
                    while( true ) {
                      puVar9 = puVar9 + 1;
                      if ((0x7ff < iVar2) ||
                         (uVar15 = (ulonglong)
                                   *(ushort *)
                                    ((longlong)puVar9 +
                                    ((longlong)&DAT_145d8c530 - (longlong)puVar4)), uVar8 <= uVar15)
                         ) goto LAB_143d6c0da;
                      if ((*puVar9 + uVar11) % uVar15 == 0) break;
                      iVar2 = iVar2 + 1;
                    }
                  }
                  else {
                    puVar9 = &DAT_145d8c532;
                    while( true ) {
                      if (0x145d8d52f < (longlong)puVar9) goto LAB_143d6c0da;
                      if ((*(ushort *)((longlong)(puVar4 + -0xa2ec6298) + (longlong)puVar9) + uVar11
                          ) % (ulonglong)*puVar9 < 2) break;
                      puVar9 = puVar9 + 1;
                    }
                  }
                  uVar11 = uVar11 + 2;
                } while (uVar11 <= uVar13);
              }
              goto LAB_143d6c332;
            }
            if (param_3 == 0) {
              bVar1 = false;
              BN_CTX_start(uVar5);
              lVar14 = BN_CTX_get(uVar5);
              if ((((lVar14 != 0) && (iVar2 = BN_rand(param_1,param_2,0,1), iVar2 != 0)) &&
                  (iVar2 = BN_div(0,lVar14,param_1,param_4,uVar5), iVar2 != 0)) &&
                 (iVar2 = BN_sub(param_1,param_1,lVar14), iVar2 != 0)) {
                if (param_5 == 0) {
                  iVar2 = BN_add_word(param_1,1);
                }
                else {
                  iVar2 = BN_add(param_1,param_1);
                }
                while (iVar2 != 0) {
                  puVar12 = &DAT_145d8c532;
                  while( true ) {
                    if (0x145d8d52f < (longlong)puVar12) {
                      bVar1 = true;
                      goto LAB_143d6c232;
                    }
                    uVar13 = BN_mod_word(param_1,*puVar12);
                    if (uVar13 == 0xffffffffffffffff) goto LAB_143d6c232;
                    if (uVar13 < 2) break;
                    puVar12 = puVar12 + 1;
                  }
                  iVar2 = BN_add(param_1,param_1,param_4);
                }
              }
LAB_143d6c232:
              BN_CTX_end(uVar5);
              if (bVar1) goto LAB_143d6c24e;
LAB_143d6c332:
              uVar11 = 0;
              goto LAB_143d6c334;
            }
            iVar2 = probable_prime_dh_safe(param_1,param_2,param_4,param_5,uVar5);
            local_58 = uVar10;
            if (iVar2 == 0) goto LAB_143d6c332;
LAB_143d6c24e:
            iVar2 = BN_GENCB_call(param_6,0,local_58);
            local_58 = local_58 + 1;
            uVar13 = (ulonglong)local_58;
            if (iVar2 == 0) goto LAB_143d6c332;
            if (param_3 != 0) {
              iVar2 = BN_rshift1(lVar6,param_1);
              if (iVar2 == 0) goto LAB_143d6c332;
              iVar2 = 0;
              while( true ) {
                if (local_res10 <= iVar2) goto LAB_143d6c29e;
                iVar3 = BN_is_prime_fasttest_ex(param_1);
                if (iVar3 == -1) goto LAB_143d6c332;
                if (iVar3 == 0) break;
                iVar3 = BN_is_prime_fasttest_ex(lVar6);
                if (iVar3 == -1) goto LAB_143d6c332;
                if (iVar3 == 0) break;
                iVar3 = BN_GENCB_call(param_6,2,uVar10);
                if (iVar3 == 0) goto LAB_143d6c332;
                iVar2 = iVar2 + 1;
              }
              uVar13 = (ulonglong)local_58;
              goto LAB_143d6bf90;
            }
            iVar2 = BN_is_prime_fasttest_ex(param_1);
            if (iVar2 == -1) goto LAB_143d6c332;
          } while (iVar2 == 0);
LAB_143d6c29e:
          uVar11 = 1;
        }
      }
LAB_143d6c334:
      CRYPTO_free(puVar4,"crypto\\bn\\bn_prime.c",0x89);
      if (uVar5 != 0) {
        BN_CTX_end(uVar5);
      }
      BN_CTX_free(uVar5);
      return uVar11;
    }
    uVar16 = 0x44;
  }
  ERR_put_error(3,0x8d,0x76,"crypto\\bn\\bn_prime.c",uVar16);
  return 0;
LAB_143d6c0da:
  iVar2 = BN_add_word(param_1,uVar11);
  if (iVar2 == 0) goto LAB_143d6c332;
  iVar2 = BN_num_bits(param_1);
  if (iVar2 == param_2) goto LAB_143d6c24e;
  goto LAB_143d6bfb0;
}



// FUNCTION 143d6c380 BN_is_prime_ex body=31 status=ok
// SIG undefined BN_is_prime_ex(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BN_is_prime_ex(void)

{
  BN_is_prime_fasttest_ex();
  return;
}



// FUNCTION 143d6c3a0 BN_is_prime_fasttest_ex body=1121 status=ok
// SIG undefined BN_is_prime_fasttest_ex(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong BN_is_prime_fasttest_ex
                    (undefined8 param_1,int param_2,longlong param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  uint local_48;
  longlong local_40;
  
  local_48 = 0xffffffff;
  lVar11 = 0;
  local_40 = 0;
  iVar1 = BN_is_word(param_1,2);
  if ((iVar1 != 0) || (iVar1 = BN_is_word(param_1,3), iVar1 != 0)) {
    return 1;
  }
  iVar1 = BN_is_odd(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  uVar5 = BN_value_one();
  iVar1 = BN_cmp(param_1,uVar5);
  if (iVar1 < 1) {
    return 0;
  }
  if (param_2 == 0) {
    iVar1 = BN_num_bits(param_1);
    if (iVar1 < 0xea3) {
      iVar1 = BN_num_bits(param_1);
      if (iVar1 < 0x541) {
        iVar1 = BN_num_bits(param_1);
        if (iVar1 < 0x1dc) {
          iVar1 = BN_num_bits(param_1);
          if (iVar1 < 400) {
            iVar1 = BN_num_bits(param_1);
            if (iVar1 < 0x15b) {
              iVar1 = BN_num_bits(param_1);
              if (iVar1 < 0x134) {
                iVar1 = BN_num_bits(param_1);
                param_2 = 0x22;
                if (0x36 < iVar1) {
                  param_2 = 0x1b;
                }
              }
              else {
                param_2 = 8;
              }
            }
            else {
              param_2 = 7;
            }
          }
          else {
            param_2 = 6;
          }
        }
        else {
          param_2 = 5;
        }
      }
      else {
        param_2 = 4;
      }
    }
    else {
      param_2 = 3;
    }
  }
  if (param_4 != 0) {
    iVar1 = 1;
    puVar13 = &DAT_145d8c532;
    do {
      lVar6 = BN_mod_word(param_1,*puVar13);
      if (lVar6 == -1) goto LAB_143d6c75f;
      if (lVar6 == 0) {
        uVar12 = BN_is_word(param_1,*(undefined2 *)(&DAT_145d8c530 + (longlong)iVar1 * 2));
        return uVar12;
      }
      iVar1 = iVar1 + 1;
      puVar13 = puVar13 + 1;
    } while ((longlong)puVar13 < 0x145d8d530);
    iVar1 = BN_GENCB_call(param_5,1,0xffffffff);
    if (iVar1 == 0) goto LAB_143d6c75f;
  }
  lVar6 = param_3;
  if ((param_3 != 0) || (lVar6 = BN_CTX_new(), lVar6 != 0)) {
    BN_CTX_start(lVar6);
    uVar5 = BN_CTX_get(lVar6);
    uVar7 = BN_CTX_get(lVar6);
    uVar8 = BN_CTX_get(lVar6);
    lVar9 = BN_CTX_get(lVar6);
    if ((lVar9 != 0) &&
       ((((lVar10 = BN_copy(uVar5,param_1), lVar10 != 0 &&
          (iVar1 = BN_sub_word(uVar5,1), iVar1 != 0)) &&
         (lVar10 = BN_copy(uVar7,param_1), lVar11 = 0, lVar10 != 0)) &&
        (iVar1 = BN_sub_word(uVar7,3), iVar1 != 0)))) {
      iVar1 = 1;
      iVar2 = BN_is_bit_set(uVar5);
      while (iVar2 == 0) {
        iVar1 = iVar1 + 1;
        iVar2 = BN_is_bit_set(uVar5,iVar1);
      }
      iVar2 = BN_rshift(uVar8,uVar5,iVar1);
      lVar11 = local_40;
      if (((iVar2 != 0) && (lVar11 = BN_MONT_CTX_new(), lVar11 != 0)) &&
         (iVar2 = BN_MONT_CTX_set(lVar11,param_1,lVar6), iVar2 != 0)) {
        iVar2 = 0;
        if (0 < param_2) {
          do {
            iVar3 = BN_priv_rand_range(lVar9,uVar7);
            if (((iVar3 == 0) || (iVar3 = BN_add_word(lVar9,2), iVar3 == 0)) ||
               (iVar3 = BN_mod_exp_mont(lVar9,lVar9,uVar8,param_1,lVar6,lVar11), iVar3 == 0))
            goto LAB_143d6c737;
            iVar3 = BN_is_one(lVar9);
            if (iVar3 == 0) {
              iVar4 = BN_cmp(lVar9,uVar5);
              iVar3 = iVar1;
              while (iVar4 != 0) {
                iVar3 = iVar3 + -1;
                if (iVar3 == 0) {
LAB_143d6c72a:
                  local_48 = 0;
                  goto LAB_143d6c737;
                }
                iVar4 = BN_mod_mul(lVar9,lVar9,lVar9,param_1,lVar6);
                if (iVar4 == 0) goto LAB_143d6c737;
                iVar4 = BN_is_one(lVar9);
                if (iVar4 != 0) goto LAB_143d6c72a;
                iVar4 = BN_cmp(lVar9,uVar5);
              }
            }
            iVar3 = BN_GENCB_call(param_5,1,iVar2);
            if (iVar3 == 0) goto LAB_143d6c737;
            iVar2 = iVar2 + 1;
          } while (iVar2 < param_2);
        }
        local_48 = 1;
      }
    }
LAB_143d6c737:
    if ((lVar6 != 0) && (BN_CTX_end(lVar6), param_3 == 0)) {
      BN_CTX_free(lVar6);
    }
  }
LAB_143d6c75f:
  BN_MONT_CTX_free(lVar11);
  return (ulonglong)local_48;
}



// FUNCTION 143d6c810 probable_prime_dh_safe body=472 status=ok
// SIG undefined probable_prime_dh_safe(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
probable_prime_dh_safe
          (undefined8 param_1,int param_2,undefined8 param_3,longlong param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined4 local_res10;
  
  local_res10 = 0;
  BN_CTX_start(param_5);
  uVar2 = BN_CTX_get(param_5);
  uVar3 = BN_CTX_get(param_5);
  lVar4 = BN_CTX_get(param_5);
  if ((((lVar4 != 0) && (iVar1 = BN_rshift1(lVar4,param_3), iVar1 != 0)) &&
      (iVar1 = BN_rand(uVar3,param_2 + -1,0,1), iVar1 != 0)) &&
     ((iVar1 = BN_div(0,uVar2,uVar3,lVar4,param_5), iVar1 != 0 &&
      (iVar1 = BN_sub(uVar3,uVar3,uVar2), iVar1 != 0)))) {
    if (param_4 == 0) {
      iVar1 = BN_add_word(uVar3,1);
    }
    else {
      iVar1 = BN_rshift1(uVar2,param_4);
      if (iVar1 == 0) goto LAB_143d6c9bf;
      iVar1 = BN_add(uVar3,uVar3,uVar2);
    }
    if ((iVar1 != 0) && (iVar1 = BN_lshift1(param_1,uVar3), iVar1 != 0)) {
      iVar1 = BN_add_word(param_1,1);
      while (iVar1 != 0) {
        puVar7 = &DAT_145d8c532;
        while( true ) {
          if (0x145d8d52f < (longlong)puVar7) {
            local_res10 = 1;
            goto LAB_143d6c9bf;
          }
          lVar5 = BN_mod_word(param_1,*puVar7);
          lVar6 = BN_mod_word(uVar3,*puVar7);
          if ((lVar5 == -1) || (lVar6 == -1)) goto LAB_143d6c9bf;
          if ((lVar5 == 0) || (lVar6 == 0)) break;
          puVar7 = puVar7 + 1;
        }
        iVar1 = BN_add(param_1,param_1,param_3);
        if (iVar1 == 0) break;
        iVar1 = BN_add(uVar3,uVar3,lVar4);
      }
    }
  }
LAB_143d6c9bf:
  BN_CTX_end(param_5);
  return local_res10;
}



// FUNCTION 143d6c9f0 asn1_do_adb body=266 status=ok
// SIG undefined asn1_do_adb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint * asn1_do_adb(longlong *param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x143d6ca05;
  if ((*param_2 & 0x300) == 0) {
    return param_2;
  }
  lVar4 = (**(code **)(param_2 + 6))();
  if (*(longlong *)((ulonglong)*(uint *)(lVar4 + 4) + *param_1) == 0) {
    puVar1 = *(uint **)(lVar4 + 0x28);
  }
  else {
    if ((*param_2 & 0x100) == 0) {
      iVar2 = ASN1_INTEGER_get();
    }
    else {
      iVar2 = OBJ_obj2nid();
    }
    if ((*(code **)(lVar4 + 8) != (code *)0x0) && (iVar3 = (**(code **)(lVar4 + 8))(), iVar3 == 0))
    {
      uVar6 = 0xe2;
      goto LAB_143d6cac4;
    }
    iVar3 = 0;
    piVar5 = *(int **)(lVar4 + 0x10);
    if (0 < *(int *)(lVar4 + 0x18)) {
      do {
        if (*piVar5 == iVar2) {
          return (uint *)(piVar5 + 2);
        }
        iVar3 = iVar3 + 1;
        piVar5 = piVar5 + 10;
      } while (iVar3 < *(int *)(lVar4 + 0x18));
    }
    puVar1 = *(uint **)(lVar4 + 0x20);
  }
  if (puVar1 != (uint *)0x0) {
    return puVar1;
  }
  if (param_3 == 0) {
    return (uint *)0x0;
  }
  uVar6 = 0xfb;
LAB_143d6cac4:
  ERR_put_error(0xd,0x6e,0xa4,"crypto\\asn1\\tasn_utl.c",uVar6,uVar7);
  return (uint *)0x0;
}



// FUNCTION 143d6cb00 asn1_do_lock body=225 status=ok
// SIG undefined asn1_do_lock(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int asn1_do_lock(longlong *param_1,int param_2,char *param_3)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143d6cb0c;
  iVar3 = -1;
  if ((((*param_3 == '\x01') || (*param_3 == '\x06')) &&
      (lVar1 = *(longlong *)(param_3 + 0x18), lVar1 != 0)) && ((*(byte *)(lVar1 + 8) & 1) != 0)) {
    piVar2 = (int *)((longlong)*(int *)(lVar1 + 0xc) + *param_1);
    plVar4 = (longlong *)((longlong)*(int *)(lVar1 + 0x10) + *param_1);
    if (param_2 == -1) {
      LOCK();
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        CRYPTO_THREAD_lock_free(*plVar4);
        *plVar4 = 0;
      }
    }
    else if (param_2 == 0) {
      iVar3 = 1;
      *piVar2 = 1;
      lVar1 = CRYPTO_THREAD_lock_new();
      *plVar4 = lVar1;
      if (lVar1 == 0) {
        ERR_put_error(0xd,0xe9,0x41,"crypto\\asn1\\tasn_utl.c",0x4f,uVar5);
        return -1;
      }
    }
    else if (param_2 == 1) {
      LOCK();
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + 1;
      UNLOCK();
      return iVar3 + 1;
    }
    return iVar3;
  }
  return 0;
}



// FUNCTION 143d6cbf0 asn1_enc_free body=101 status=ok
// SIG undefined asn1_enc_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void asn1_enc_free(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if ((((param_1 != (longlong *)0x0) && (*param_1 != 0)) &&
      (lVar1 = *(longlong *)(param_2 + 0x18), lVar1 != 0)) &&
     (((*(byte *)(lVar1 + 8) & 2) != 0 &&
      (puVar2 = (undefined8 *)((longlong)*(int *)(lVar1 + 0x20) + *param_1),
      puVar2 != (undefined8 *)0x0)))) {
    CRYPTO_free(*puVar2,"crypto\\asn1\\tasn_utl.c",0x83);
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 0;
  }
  return;
}



// FUNCTION 143d6cc60 FUN_143d6cc60 body=53 status=ok
// SIG undefined FUN_143d6cc60(void)

void FUN_143d6cc60(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if ((((param_1 != (longlong *)0x0) && (*param_1 != 0)) &&
      (lVar1 = *(longlong *)(param_2 + 0x18), lVar1 != 0)) &&
     (((*(byte *)(lVar1 + 8) & 2) != 0 &&
      (puVar2 = (undefined8 *)((longlong)*(int *)(lVar1 + 0x20) + *param_1),
      puVar2 != (undefined8 *)0x0)))) {
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 0;
  }
  return;
}



// FUNCTION 143d6cca0 asn1_enc_restore body=149 status=ok
// SIG undefined asn1_enc_restore(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
asn1_enc_restore(undefined4 *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if ((((param_3 != (longlong *)0x0) && (*param_3 != 0)) &&
      (lVar1 = *(longlong *)(param_4 + 0x18), lVar1 != 0)) &&
     ((((*(byte *)(lVar1 + 8) & 2) != 0 &&
       (puVar2 = (undefined8 *)((longlong)*(int *)(lVar1 + 0x20) + *param_3),
       puVar2 != (undefined8 *)0x0)) && (*(int *)((longlong)puVar2 + 0xc) == 0)))) {
    if (param_2 != (longlong *)0x0) {
      _guard_xfg_dispatch_icall_nop((void *)*param_2,(void *)*puVar2,(longlong)*(int *)(puVar2 + 1))
      ;
      *param_2 = *param_2 + (longlong)*(int *)(puVar2 + 1);
    }
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *(undefined4 *)(puVar2 + 1);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 143d6cd40 asn1_enc_save body=247 status=ok
// SIG undefined asn1_enc_save(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool asn1_enc_save(longlong *param_1,void *param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  void *_Dst;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143d6cd55;
  if ((((param_1 != (longlong *)0x0) && (*param_1 != 0)) &&
      (lVar1 = *(longlong *)(param_4 + 0x18), lVar1 != 0)) &&
     (((*(byte *)(lVar1 + 8) & 2) != 0 &&
      (puVar2 = (undefined8 *)((longlong)*(int *)(lVar1 + 0x20) + *param_1),
      puVar2 != (undefined8 *)0x0)))) {
    CRYPTO_free(*puVar2,"crypto\\asn1\\tasn_utl.c",0x92);
    _Dst = (void *)CRYPTO_malloc((longlong)param_3,"crypto\\asn1\\tasn_utl.c",0x93);
    *puVar2 = _Dst;
    if (_Dst != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,param_2,(longlong)param_3);
      *(int *)(puVar2 + 1) = param_3;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    }
    else {
      ERR_put_error(0xd,0x73,0x41,"crypto\\asn1\\tasn_utl.c",0x94,uVar3);
    }
    return _Dst != (void *)0x0;
  }
  return true;
}



// FUNCTION 143d6ce40 FUN_143d6ce40 body=11 status=ok
// SIG undefined FUN_143d6ce40(void)

undefined4 FUN_143d6ce40(longlong *param_1,longlong param_2)

{
  return *(undefined4 *)((longlong)*(int *)(param_2 + 4) + *param_1);
}



// FUNCTION 143d6ce50 FUN_143d6ce50 body=7 status=ok
// SIG undefined FUN_143d6ce50(void)

longlong FUN_143d6ce50(longlong *param_1,longlong param_2)

{
  return (ulonglong)*(uint *)(param_2 + 8) + *param_1;
}



// FUNCTION 143d6ce60 FUN_143d6ce60 body=14 status=ok
// SIG undefined FUN_143d6ce60(void)

undefined4 FUN_143d6ce60(longlong *param_1,undefined4 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)((longlong)*(int *)(param_3 + 4) + *param_1);
  uVar1 = *puVar2;
  *puVar2 = param_2;
  return uVar1;
}



// FUNCTION 143d6ce70 ASN1_BIT_STRING_get_bit body=74 status=ok
// SIG undefined ASN1_BIT_STRING_get_bit(void)

bool ASN1_BIT_STRING_get_bit(int *param_1,int param_2)

{
  int iVar1;
  
  if (((param_1 != (int *)0x0) &&
      (iVar1 = (int)(param_2 + (param_2 >> 0x1f & 7U)) >> 3, iVar1 + 1 <= *param_1)) &&
     (*(longlong *)(param_1 + 2) != 0)) {
    return (*(byte *)((longlong)iVar1 + *(longlong *)(param_1 + 2)) &
           (byte)(1 << (7 - ((byte)param_2 & 7) & 0x1f))) != 0;
  }
  return false;
}



// FUNCTION 143d6cec0 ASN1_BIT_STRING_set_bit body=343 status=ok
// SIG undefined ASN1_BIT_STRING_set_bit(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_BIT_STRING_set_bit(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  byte bVar6;
  
  iVar2 = (int)(param_2 + (param_2 >> 0x1f & 7U)) >> 3;
  bVar1 = (byte)(1 << (7 - ((byte)param_2 & 7) & 0x1f));
  bVar6 = 0;
  if (param_3 != 0) {
    bVar6 = bVar1;
  }
  if (param_1 == (int *)0x0) {
    return 0;
  }
  param_1[4] = param_1[4] & 0xfffffff0;
  iVar5 = iVar2 + 1;
  if ((*param_1 < iVar5) || (lVar4 = *(longlong *)(param_1 + 2), lVar4 == 0)) {
    if (param_3 == 0) {
      return 1;
    }
    lVar4 = CRYPTO_clear_realloc
                      (*(undefined8 *)(param_1 + 2),(longlong)*param_1,(longlong)iVar5,
                       "crypto\\asn1\\a_bitstr.c",0xa5,0x143d6ced5);
    if (lVar4 == 0) {
      ERR_put_error(0xd,0xb7,0x41,"crypto\\asn1\\a_bitstr.c",0xa7);
      return 0;
    }
    iVar3 = (iVar2 - *param_1) + 1;
    if (0 < iVar3) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar4),0,(longlong)iVar3);
    }
    *(longlong *)(param_1 + 2) = lVar4;
    *param_1 = iVar5;
  }
  *(byte *)(iVar2 + lVar4) = *(byte *)(iVar2 + lVar4) & ~bVar1 | bVar6;
  iVar2 = *param_1;
  if (0 < iVar2) {
    do {
      if (*(char *)((longlong)iVar2 + -1 + *(longlong *)(param_1 + 2)) != '\0') {
        return 1;
      }
      iVar2 = iVar2 + -1;
      *param_1 = iVar2;
    } while (0 < iVar2);
  }
  return 1;
}



// FUNCTION 143d6d020 c2i_ASN1_BIT_STRING body=351 status=ok
// SIG undefined c2i_ASN1_BIT_STRING(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * c2i_ASN1_BIT_STRING(longlong *param_1,undefined8 *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  int *_Dst;
  byte *_Src;
  undefined4 uVar4;
  size_t _Size;
  undefined8 uVar5;
  
  uVar5 = 0x143d6d042;
  _Dst = (int *)0x0;
  if (param_3 < 1) {
    uVar4 = 0x98;
    piVar3 = _Dst;
  }
  else {
    if (((param_1 == (longlong *)0x0) || (piVar3 = (int *)*param_1, piVar3 == (int *)0x0)) &&
       (piVar3 = (int *)ASN1_BIT_STRING_new(), piVar3 == (int *)0x0)) {
      return (int *)0x0;
    }
    bVar2 = *(byte *)*param_2;
    _Src = (byte *)*param_2 + 1;
    if (bVar2 < 8) {
      piVar3[4] = piVar3[4] & 0xfffffff8;
      piVar3[4] = piVar3[4] | bVar2 | 8;
      if (1 < param_3) {
        _Size = (size_t)(param_3 + -1);
        _Dst = (int *)CRYPTO_malloc(_Size,"crypto\\asn1\\a_bitstr.c",0x75);
        if (_Dst == (int *)0x0) {
          uVar4 = 0x41;
          goto LAB_143d6d0d7;
        }
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,_Size);
        pbVar1 = (byte *)((longlong)param_3 + -2 + (longlong)_Dst);
        *pbVar1 = *pbVar1 & -1 << (bVar2 & 0x1f);
        _Src = _Src + _Size;
      }
      *piVar3 = param_3 + -1;
      CRYPTO_free(*(undefined8 *)(piVar3 + 2),"crypto\\asn1\\a_bitstr.c",0x81);
      *(int **)(piVar3 + 2) = _Dst;
      piVar3[1] = 3;
      if (param_1 != (longlong *)0x0) {
        *param_1 = (longlong)piVar3;
      }
      *param_2 = _Src;
      return piVar3;
    }
    uVar4 = 0xdc;
  }
LAB_143d6d0d7:
  ERR_put_error(0xd,0xbd,uVar4,"crypto\\asn1\\a_bitstr.c",0x89,uVar5);
  if ((param_1 == (longlong *)0x0) || ((int *)*param_1 != piVar3)) {
    ASN1_BIT_STRING_free(piVar3);
  }
  return (int *)0x0;
}



// FUNCTION 143d6d180 i2c_ASN1_BIT_STRING body=293 status=ok
// SIG undefined i2c_ASN1_BIT_STRING(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int i2c_ASN1_BIT_STRING(uint *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  byte *pbVar4;
  byte bVar5;
  ulonglong uVar3;
  
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  uVar1 = *param_1;
  uVar2 = (ulonglong)(int)uVar1;
  if (0 < (int)uVar1) {
    if ((param_1[4] & 8) != 0) {
      bVar5 = (byte)param_1[4] & 7;
      goto LAB_143d6d245;
    }
    uVar3 = uVar2;
    do {
      uVar1 = (uint)uVar3;
      if (*(char *)(*(longlong *)(param_1 + 2) + -1 + uVar2) != '\0') break;
      uVar1 = uVar1 - 1;
      uVar3 = (ulonglong)uVar1;
      uVar2 = uVar2 - 1;
    } while (0 < (longlong)uVar2);
    bVar5 = *(byte *)((longlong)(int)uVar1 + -1 + *(longlong *)(param_1 + 2));
    if ((bVar5 & 1) == 0) {
      if ((bVar5 & 2) == 0) {
        if ((bVar5 & 4) == 0) {
          if ((bVar5 & 8) == 0) {
            if ((bVar5 & 0x10) == 0) {
              if ((bVar5 & 0x20) == 0) {
                if ((bVar5 & 0x40) == 0) {
                  bVar5 = -((bVar5 & 0x80) != 0) & 7;
                }
                else {
                  bVar5 = 6;
                }
              }
              else {
                bVar5 = 5;
              }
            }
            else {
              bVar5 = 4;
            }
          }
          else {
            bVar5 = 3;
          }
        }
        else {
          bVar5 = 2;
        }
      }
      else {
        bVar5 = 1;
      }
      goto LAB_143d6d245;
    }
  }
  bVar5 = 0;
LAB_143d6d245:
  if (param_2 != (longlong *)0x0) {
    pbVar4 = (byte *)*param_2;
    *pbVar4 = bVar5;
    pbVar4 = pbVar4 + 1;
    if (0 < (int)uVar1) {
      _guard_xfg_dispatch_icall_nop(pbVar4,*(void **)(param_1 + 2),(longlong)(int)uVar1);
      pbVar4 = pbVar4 + (int)uVar1;
      pbVar4[-1] = pbVar4[-1] & -1 << bVar5;
    }
    *param_2 = (longlong)pbVar4;
  }
  return uVar1 + 1;
}



// FUNCTION 143d6d2b0 dh_cb body=86 status=ok
// SIG undefined dh_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte dh_cb(int param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = DH_new();
    *param_2 = lVar1;
    return -(lVar1 != 0) & 2;
  }
  if (param_1 == 2) {
    DH_free(*param_2);
    *param_2 = 0;
    return 2;
  }
  return 1;
}



// FUNCTION 143d6d320 d2i_DHparams body=29 status=ok
// SIG undefined d2i_DHparams(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_DHparams(void)

{
  ASN1_item_d2i();
  return;
}



// FUNCTION 143d6d340 d2i_DHxparams body=279 status=ok
// SIG undefined d2i_DHxparams(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong d2i_DHxparams(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = DH_new();
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)ASN1_item_d2i(0,param_2,param_3,&DAT_145d8d750);
    if (puVar2 != (undefined8 *)0x0) {
      if (param_1 != (longlong *)0x0) {
        DH_free(*param_1);
        *param_1 = lVar1;
      }
      *(undefined8 *)(lVar1 + 8) = *puVar2;
      *(undefined8 *)(lVar1 + 0x40) = puVar2[1];
      *(undefined8 *)(lVar1 + 0x10) = puVar2[2];
      *(undefined8 *)(lVar1 + 0x48) = puVar2[3];
      if ((longlong *)puVar2[4] != (longlong *)0x0) {
        *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(*(longlong *)puVar2[4] + 8);
        *(undefined4 *)(lVar1 + 0x58) = **(undefined4 **)puVar2[4];
        *(undefined8 *)(lVar1 + 0x60) = *(undefined8 *)(puVar2[4] + 8);
        *(undefined8 *)(*(longlong *)puVar2[4] + 8) = 0;
        ASN1_BIT_STRING_free(*(undefined8 *)puVar2[4]);
        CRYPTO_free(puVar2[4],"crypto\\dh\\dh_asn1.c",0x6e);
        puVar2[4] = 0;
      }
      CRYPTO_free(puVar2,"crypto\\dh\\dh_asn1.c",0x72);
      return lVar1;
    }
    DH_free(lVar1);
  }
  return 0;
}



// FUNCTION 143d6d460 i2d_ASN1_INTEGER body=29 status=ok
// SIG undefined i2d_ASN1_INTEGER(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_ASN1_INTEGER(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_145d8d610);
  return;
}



// FUNCTION 143d6d480 i2d_DHxparams body=155 status=ok
// SIG undefined i2d_DHxparams(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_DHxparams(longlong param_1,undefined8 param_2)

{
  int *local_58;
  longlong local_50;
  int local_48 [2];
  longlong local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 **local_10;
  undefined8 uStack_8;
  
  uStack_8 = 0x143d6d48a;
  local_30 = *(undefined8 *)(param_1 + 8);
  local_20 = *(undefined8 *)(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x40);
  local_18 = *(undefined8 *)(param_1 + 0x48);
  if (((*(longlong *)(param_1 + 0x60) == 0) || (*(longlong *)(param_1 + 0x50) == 0)) ||
     (*(int *)(param_1 + 0x58) < 1)) {
    local_10 = (int **)0x0;
  }
  else {
    local_58 = local_48;
    local_10 = &local_58;
    local_38 = 8;
    local_50 = *(longlong *)(param_1 + 0x60);
    local_48[0] = *(int *)(param_1 + 0x58);
    local_40 = *(longlong *)(param_1 + 0x50);
  }
  ASN1_item_i2d(&local_30,param_2,&DAT_145d8d750);
  return;
}



// FUNCTION 143d6d520 PKCS8_PRIV_KEY_INFO_free body=29 status=ok
// SIG undefined PKCS8_PRIV_KEY_INFO_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS8_PRIV_KEY_INFO_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145d8d830);
  return;
}



// FUNCTION 143d6d540 ECDSA_SIG_get0 body=24 status=ok
// SIG undefined ECDSA_SIG_get0(void)

void ECDSA_SIG_get0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *param_1;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = param_1[1];
  }
  return;
}



// FUNCTION 143d6d570 PKCS8_PRIV_KEY_INFO_free body=29 status=ok
// SIG undefined PKCS8_PRIV_KEY_INFO_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS8_PRIV_KEY_INFO_free(void)

{
  ASN1_item_d2i();
  return;
}



// FUNCTION 143d6d590 i2d_X509_SIG body=29 status=ok
// SIG undefined i2d_X509_SIG(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_X509_SIG(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_145d8d830);
  return;
}



// FUNCTION 143d6d5b0 pkey_cb body=52 status=ok
// SIG undefined pkey_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_cb(int param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  
  if ((param_1 == 2) && (piVar1 = *(int **)(*param_2 + 0x10), piVar1 != (int *)0x0)) {
    FUN_14004ff40(*(undefined8 *)(piVar1 + 2),(longlong)*piVar1,param_3,param_4,0x143d6d5ba);
  }
  return 1;
}



// FUNCTION 143d6d5f0 PKCS8_PRIV_KEY_INFO_free body=29 status=ok
// SIG undefined PKCS8_PRIV_KEY_INFO_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS8_PRIV_KEY_INFO_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145d8d920);
  return;
}



// FUNCTION 143d6d610 PKCS8_PRIV_KEY_INFO_it body=8 status=ok
// SIG undefined PKCS8_PRIV_KEY_INFO_it(void)

undefined * PKCS8_PRIV_KEY_INFO_it(void)

{
  return &DAT_145d8d920;
}



// FUNCTION 143d6d620 PKCS8_pkey_get0 body=127 status=ok
// SIG undefined PKCS8_pkey_get0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
PKCS8_pkey_get0(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
               longlong param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = **(undefined8 **)(param_5 + 8);
  }
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
            ::GetBoundProgramCounterForTimerManager(*(undefined8 *)(param_5 + 0x10));
    *param_2 = uVar2;
    uVar1 = FRollingHash::GetWindowSize(*(undefined8 *)(param_5 + 0x10));
    *param_3 = uVar1;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_5 + 8);
  }
  return 1;
}



// FUNCTION 143d6d6a0 PKCS8_pkey_set0 body=140 status=ok
// SIG undefined PKCS8_pkey_set0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
PKCS8_pkey_set0(undefined8 *param_1,undefined8 param_2,int param_3,undefined4 param_4,
               undefined8 param_5,longlong param_6,undefined4 param_7)

{
  int iVar1;
  
  if ((-1 < param_3) && (iVar1 = ASN1_INTEGER_set(*param_1,param_3), iVar1 == 0)) {
    return 0;
  }
  iVar1 = X509_ALGOR_set0(param_1[1],param_2,param_4,param_5);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_6 != 0) {
    ASN1_STRING_set0(param_1[2],param_6,param_7);
  }
  return 1;
}



// FUNCTION 143d6d730 PKCS8_PRIV_KEY_INFO_free body=29 status=ok
// SIG undefined PKCS8_PRIV_KEY_INFO_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS8_PRIV_KEY_INFO_free(void)

{
  ASN1_item_d2i();
  return;
}



// FUNCTION 143d6d750 EVP_PKCS82PKEY body=348 status=ok
// SIG undefined EVP_PKCS82PKEY(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong EVP_PKCS82PKEY(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_78 [2];
  undefined1 local_68 [80];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d6d75c;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = param_1;
  iVar2 = PKCS8_pkey_get0(local_78,0,0,0);
  if (iVar2 != 0) {
    lVar4 = EVP_PKEY_new();
    if (lVar4 == 0) {
      local_88 = CONCAT44(local_88._4_4_,0x1f);
      ERR_put_error(6,0x6f,0x41,"crypto\\evp\\evp_pkey.c");
    }
    else {
      uVar3 = OBJ_obj2nid(local_78[0]);
      iVar2 = EVP_PKEY_set_type(lVar4,uVar3);
      if (iVar2 == 0) {
        local_88 = CONCAT44(local_88._4_4_,0x24);
        ERR_put_error(6,0x6f,0x76,"crypto\\evp\\evp_pkey.c");
        i2t_ASN1_OBJECT(local_68,0x50,local_78[0]);
        ERR_add_error_data(2,"TYPE=",local_68);
      }
      else {
        pcVar1 = *(code **)(*(longlong *)(lVar4 + 0x10) + 0x40);
        if (pcVar1 == (code *)0x0) {
          local_88 = CONCAT44(local_88._4_4_,0x30);
          uVar5 = 0x90;
        }
        else {
          iVar2 = (*pcVar1)(lVar4,param_1);
          if (iVar2 != 0) {
            return lVar4;
          }
          local_88 = CONCAT44(local_88._4_4_,0x2c);
          uVar5 = 0x91;
        }
        ERR_put_error(6,0x6f,uVar5,"crypto\\evp\\evp_pkey.c");
      }
      EVP_PKEY_free(lVar4);
    }
  }
  return 0;
}



// FUNCTION 143d6d8b0 PKCS8_decrypt body=93 status=ok
// SIG undefined PKCS8_decrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS8_decrypt(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 local_res20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d6d8c0;
  ECDSA_SIG_get0(param_1,&local_18,&local_res20);
  uVar1 = PKCS8_PRIV_KEY_INFO_it();
  PKCS12_item_decrypt_d2i(local_18,uVar1,param_2,param_3,local_res20,1);
  return;
}



// FUNCTION 143d6d910 bn_new body=42 status=ok
// SIG undefined bn_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool bn_new(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = BN_new();
  *param_1 = lVar1;
  return lVar1 != 0;
}



// FUNCTION 143d6d940 bn_secure_new body=42 status=ok
// SIG undefined bn_secure_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool bn_secure_new(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = BN_secure_new();
  *param_1 = lVar1;
  return lVar1 != 0;
}



// FUNCTION 143d6d970 bn_free body=68 status=ok
// SIG undefined bn_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void bn_free(longlong *param_1,longlong param_2)

{
  if (*param_1 != 0) {
    if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
      BN_clear_free();
      *param_1 = 0;
      return;
    }
    BN_free();
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143d6d9c0 bn_i2c body=132 status=ok
// SIG undefined bn_i2c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int bn_i2c(longlong *param_1,undefined1 *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return -1;
  }
  uVar2 = BN_num_bits(lVar1);
  if (param_2 != (undefined1 *)0x0) {
    if ((uVar2 & 7) == 0) {
      *param_2 = 0;
      param_2 = param_2 + 1;
    }
    BN_bn2bin(lVar1,param_2);
  }
  iVar3 = BN_num_bits(lVar1);
  return ((int)(iVar3 + 7 + (iVar3 + 7 >> 0x1f & 7U)) >> 3) + (uint)((uVar2 & 7) == 0);
}



// FUNCTION 143d6da50 bn_c2i body=172 status=ok
// SIG undefined bn_c2i(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
bn_c2i(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5
      ,longlong param_6)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    lVar1 = BN_new();
    *param_1 = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  lVar1 = BN_bin2bn(param_2,param_3,lVar1);
  if (lVar1 == 0) {
    if (*param_1 != 0) {
      if ((*(byte *)(param_6 + 0x20) & 1) != 0) {
        BN_clear_free();
        *param_1 = 0;
        return 0;
      }
      BN_free();
      *param_1 = 0;
    }
    return 0;
  }
  return 1;
}



// FUNCTION 143d6db00 bn_secure_c2i body=185 status=ok
// SIG undefined bn_secure_c2i(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
bn_secure_c2i(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    lVar1 = BN_secure_new();
    *param_1 = lVar1;
    if (lVar1 == 0) {
      lVar1 = BN_new();
      *param_1 = lVar1;
      if (lVar1 == 0) {
        return 0;
      }
    }
  }
  lVar1 = BN_bin2bn(param_2,param_3,lVar1);
  if (lVar1 == 0) {
    if (*param_1 != 0) {
      if ((*(byte *)(param_6 + 0x20) & 1) != 0) {
        BN_clear_free();
        *param_1 = 0;
        return 0;
      }
      BN_free();
      *param_1 = 0;
    }
    return 0;
  }
  return 1;
}



// FUNCTION 143d6dbc0 bn_print body=68 status=ok
// SIG undefined bn_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 bn_print(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = BN_print(param_1,*param_2);
  if (iVar1 != 0) {
    iVar1 = BIO_puts(param_1,&DAT_143fc48d8);
    if (0 < iVar1) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d6dc30 ASN1_d2i_bio body=121 status=ok
// SIG undefined ASN1_d2i_bio(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_d2i_bio(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 0x143d6dc4a;
  uVar3 = 0;
  local_18 = 0;
  iVar2 = asn1_d2i_read_bio(param_3,&local_18);
  lVar1 = local_18;
  if (-1 < iVar2) {
    local_10 = *(undefined8 *)(local_18 + 8);
    uVar3 = (*param_2)(param_4,&local_10,iVar2);
  }
  BUF_MEM_free(lVar1);
  return uVar3;
}



// FUNCTION 143d6dcb0 ASN1_item_d2i_bio body=130 status=ok
// SIG undefined ASN1_item_d2i_bio(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ASN1_item_d2i_bio(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong local_res20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d6dcca;
  uVar3 = 0;
  local_res20 = 0;
  iVar2 = asn1_d2i_read_bio(param_2,&local_res20);
  lVar1 = local_res20;
  if (-1 < iVar2) {
    local_18 = *(undefined8 *)(local_res20 + 8);
    uVar3 = ASN1_item_d2i(param_3,&local_18,iVar2,param_1);
  }
  BUF_MEM_free(lVar1);
  return uVar3;
}



// FUNCTION 143d6dd40 asn1_d2i_read_bio body=806 status=ok
// SIG undefined asn1_d2i_read_bio(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong asn1_d2i_read_bio(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  int iVar11;
  ulonglong uVar12;
  int local_res18 [2];
  int local_res20 [2];
  undefined4 uVar13;
  undefined1 local_48 [8];
  longlong local_40;
  
  iVar11 = 0;
  lVar5 = BUF_MEM_new();
  if (lVar5 == 0) {
    ERR_put_error(0xd,0x6b,0x41,"crypto\\asn1\\a_d2i_fp.c",0x6e);
    return 0xffffffff;
  }
  ERR_clear_error();
  uVar12 = 0;
  uVar7 = 0;
  do {
    while( true ) {
      uVar8 = uVar12;
      if (uVar12 - uVar7 < 9) {
        uVar9 = (uVar7 - uVar12) + 8;
        if ((uVar12 + uVar9 < uVar12) || (lVar6 = BUF_MEM_grow_clean(lVar5), lVar6 == 0)) {
          uVar13 = 0x78;
          uVar10 = 0x41;
          goto LAB_143d6e026;
        }
        iVar3 = BIO_read(param_1,*(longlong *)(lVar5 + 8) + uVar12,uVar9 & 0xffffffff);
        if ((iVar3 < 0) && (uVar12 == uVar7)) {
          uVar13 = 0x7d;
          uVar10 = 0x8e;
          goto LAB_143d6e026;
        }
        if ((0 < iVar3) && (uVar8 = (longlong)iVar3 + uVar12, uVar8 < uVar12)) {
          uVar13 = 0x82;
          goto LAB_143d6e020;
        }
      }
      lVar6 = *(longlong *)(lVar5 + 8) + uVar7;
      local_40 = lVar6;
      bVar2 = ASN1_get_object(&local_40,local_res18,local_res20,local_48,(int)uVar8 - (int)uVar7);
      if ((char)bVar2 < '\0') {
        uVar4 = ERR_peek_error();
        if ((uVar4 & 0xfff) != 0x9b) goto LAB_143d6e03a;
        ERR_clear_error();
      }
      uVar12 = uVar7 + (longlong)((int)local_40 - (int)lVar6);
      uVar7 = uVar12;
      if ((bVar2 & 1) == 0) break;
      if (iVar11 == -1) {
        uVar13 = 0x9c;
        uVar10 = 0x7b;
        goto LAB_143d6e026;
      }
      iVar11 = iVar11 + 1;
      uVar12 = uVar8;
    }
    if (((iVar11 == 0) || (local_res18[0] != 0)) || (local_res20[0] != 0)) {
      if (uVar8 - uVar12 < (ulonglong)(longlong)local_res18[0]) {
        uVar7 = (longlong)local_res18[0] + (uVar12 - uVar8);
        if ((0x7fffffff < uVar7) || (uVar9 = 0x4000, uVar8 + uVar7 < uVar8)) {
          uVar13 = 0xb1;
          goto LAB_143d6e020;
        }
        while (uVar1 = uVar9, uVar7 != 0) {
          uVar9 = uVar7;
          if (uVar1 < uVar7) {
            uVar9 = uVar1;
          }
          lVar6 = BUF_MEM_grow_clean(lVar5,uVar9 + uVar8);
          if (lVar6 == 0) {
            uVar13 = 0xbe;
            uVar10 = 0x41;
            goto LAB_143d6e026;
          }
          uVar7 = uVar7 - uVar9;
          for (; uVar9 != 0; uVar9 = uVar9 - (longlong)iVar3) {
            iVar3 = BIO_read(param_1,*(longlong *)(lVar5 + 8) + uVar8,uVar9 & 0xffffffff);
            if (iVar3 < 1) {
              uVar13 = 0xc6;
              uVar10 = 0x8e;
              goto LAB_143d6e026;
            }
            uVar8 = uVar8 + (longlong)iVar3;
          }
          uVar9 = uVar1 * 2;
          if (0x3ffffffe < uVar1) {
            uVar9 = uVar1;
          }
        }
      }
      uVar7 = (longlong)local_res18[0] + uVar12;
      if (uVar7 < uVar12) {
        uVar13 = 0xd5;
        goto LAB_143d6e020;
      }
    }
    else {
      iVar11 = iVar11 + -1;
    }
    uVar12 = uVar8;
  } while (iVar11 != 0);
  if (uVar7 < 0x80000000) {
    *param_2 = lVar5;
    uVar7 = uVar7 & 0xffffffff;
  }
  else {
    uVar13 = 0xe1;
LAB_143d6e020:
    uVar10 = 0x9b;
LAB_143d6e026:
    ERR_put_error(0xd,0x6b,uVar10,"crypto\\asn1\\a_d2i_fp.c",uVar13);
LAB_143d6e03a:
    BUF_MEM_free(lVar5);
    uVar7 = 0xffffffff;
  }
  return uVar7;
}



// FUNCTION 143d6e0f0 ECDSA_SIG_free body=66 status=ok
// SIG undefined ECDSA_SIG_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ECDSA_SIG_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    BN_clear_free(*param_1);
    BN_clear_free(param_1[1]);
    CRYPTO_free(param_1,"crypto\\ec\\ec_asn1.c",0x48b);
  }
  return;
}



// FUNCTION 143d6e140 ECDSA_SIG_new body=85 status=ok
// SIG undefined ECDSA_SIG_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ECDSA_SIG_new(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d6e14c;
  lVar1 = CRYPTO_zalloc(0x10,"crypto\\ec\\ec_asn1.c",0x47f);
  if (lVar1 == 0) {
    ERR_put_error(0x10,0x109,0x41,"crypto\\ec\\ec_asn1.c",0x481,uVar2);
  }
  return lVar1;
}



// FUNCTION 143d6e1a0 ECDSA_SIG_set0 body=106 status=ok
// SIG undefined ECDSA_SIG_set0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ECDSA_SIG_set0(longlong *param_1,longlong param_2,longlong param_3)

{
  if ((param_2 != 0) && (param_3 != 0)) {
    BN_clear_free(*param_1);
    BN_clear_free(param_1[1]);
    *param_1 = param_2;
    param_1[1] = param_3;
    return 1;
  }
  return 0;
}



// FUNCTION 143d6e210 ECDSA_size body=120 status=ok
// SIG undefined ECDSA_size(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ECDSA_size(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_res8 [32];
  int local_28 [2];
  undefined1 *local_20;
  undefined8 uStack_8;
  
  uStack_8 = 0x143d6e21a;
  if (param_1 != 0) {
    lVar2 = FUniqueNetIdString::GetBytes();
    if (lVar2 != 0) {
      iVar1 = EC_GROUP_order_bits(lVar2);
      if (iVar1 != 0) {
        local_28[1] = 2;
        local_res8[0] = 0xff;
        local_28[0] = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
        local_20 = local_res8;
        iVar1 = i2d_ASN1_INTEGER(local_28,0);
        uVar3 = ASN1_object_size(1,iVar1 * 2,0x10);
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 143d6e290 EC_GROUP_get_basis_type body=111 status=ok
// SIG undefined EC_GROUP_get_basis_type(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_GROUP_get_basis_type(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar2 = FHardwareCursor::GetHandle();
  iVar1 = FCachedCompositeFontData::FCachedFontRange::BinarySearchKey(uVar2);
  if (iVar1 == 0x197) {
    uVar4 = 0;
    piVar3 = (int *)(param_1 + 0x48);
    uVar6 = uVar4;
    do {
      uVar5 = (uint)uVar6;
      if (*piVar3 == 0) break;
      uVar5 = uVar5 + 1;
      uVar6 = (ulonglong)uVar5;
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 1;
    } while ((longlong)uVar4 < 6);
    if (uVar5 == 4) {
      return 0x2ab;
    }
    if (uVar5 == 2) {
      return 0x2aa;
    }
  }
  return 0;
}



// FUNCTION 143d6e300 EC_GROUP_get_ecparameters body=492 status=ok
// SIG undefined EC_GROUP_get_ecparameters(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * EC_GROUP_get_ecparameters(WriteBytesMem *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  uchar *puVar6;
  undefined4 uVar7;
  undefined8 local_res10;
  undefined8 uVar8;
  
  uVar8 = 0x143d6e31a;
  local_res10 = 0;
  puVar3 = param_2;
  if ((param_2 == (undefined4 *)0x0) &&
     (puVar3 = (undefined4 *)ASN1_item_new(&DAT_145d8de80), puVar3 == (undefined4 *)0x0)) {
    uVar2 = 0x1c4;
    uVar7 = 0x41;
  }
  else {
    *puVar3 = 1;
    iVar1 = ec_asn1_group2fieldid(param_1,*(undefined8 *)(puVar3 + 2));
    if (iVar1 == 0) {
      uVar2 = 0x1cf;
      uVar7 = 0x10;
    }
    else {
      iVar1 = ec_asn1_group2curve(param_1,*(undefined8 *)(puVar3 + 4));
      if (iVar1 == 0) {
        uVar2 = 0x1d5;
        uVar7 = 0x10;
      }
      else {
        lVar4 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
                ::GetBoundProgramCounterForTimerManager(param_1);
        if (lVar4 == 0) {
          uVar2 = 0x1db;
          uVar7 = 0x71;
        }
        else {
          uVar2 = FWmfMediaTextureSample::GetFormat(param_1);
          uVar5 = EC_POINT_point2buf(param_1,lVar4,uVar2,&local_res10,0);
          if (uVar5 == 0) {
            uVar2 = 0x1e3;
            uVar7 = 0x10;
          }
          else {
            lVar4 = *(longlong *)(puVar3 + 6);
            if (lVar4 == 0) {
              lVar4 = ASN1_OCTET_STRING_new();
              *(longlong *)(puVar3 + 6) = lVar4;
              if (lVar4 == 0) {
                CRYPTO_free(local_res10,"crypto\\ec\\ec_asn1.c",0x1e7);
                uVar2 = 0x1e8;
                uVar7 = 0x41;
                goto LAB_143d6e4a2;
              }
            }
            ASN1_STRING_set0(lVar4,local_res10,uVar5 & 0xffffffff);
            puVar6 = AK::WriteBytesMem::Bytes(param_1);
            if (puVar6 == (uchar *)0x0) {
              uVar2 = 0x1f0;
              uVar7 = 0x10;
            }
            else {
              lVar4 = BN_to_ASN1_INTEGER(puVar6,*(undefined8 *)(puVar3 + 8));
              *(longlong *)(puVar3 + 8) = lVar4;
              if (lVar4 == 0) {
                uVar2 = 0x1f5;
              }
              else {
                lVar4 = FUniqueNetIdString::GetBytes(param_1);
                if (lVar4 == 0) {
                  return puVar3;
                }
                lVar4 = BN_to_ASN1_INTEGER(lVar4,*(undefined8 *)(puVar3 + 10));
                *(longlong *)(puVar3 + 10) = lVar4;
                if (lVar4 != 0) {
                  return puVar3;
                }
                uVar2 = 0x1fe;
              }
              uVar7 = 0xd;
            }
          }
        }
      }
    }
  }
LAB_143d6e4a2:
  ERR_put_error(0x10,0x105,uVar7,"crypto\\ec\\ec_asn1.c",uVar2,uVar8);
  if (param_2 == (undefined4 *)0x0) {
    ASN1_item_free(puVar3,&DAT_145d8de80);
  }
  return (undefined4 *)0x0;
}



// FUNCTION 143d6e4f0 EC_GROUP_get_ecpkparameters body=241 status=ok
// SIG undefined EC_GROUP_get_ecpkparameters(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * EC_GROUP_get_ecpkparameters(undefined8 param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143d6e500;
  if (param_2 == (int *)0x0) {
    param_2 = (int *)ASN1_item_new(&DAT_145d8df10);
    if (param_2 == (int *)0x0) {
      ERR_put_error(0x10,0x106,0x41,"crypto\\ec\\ec_asn1.c",0x213,uVar3);
      return (int *)0x0;
    }
  }
  else if (*param_2 == 0) {
    ASN1_OBJECT_free(*(undefined8 *)(param_2 + 2));
  }
  else if ((*param_2 == 1) && (*(longlong *)(param_2 + 2) != 0)) {
    ASN1_item_free(*(longlong *)(param_2 + 2),&DAT_145d8de80);
  }
  iVar1 = BuildPatchServices::FMemoryChunkStoreStatistics::GetPeakStoreUse(param_1);
  if (iVar1 == 0) {
    *param_2 = 1;
    lVar2 = EC_GROUP_get_ecparameters(param_1,0);
  }
  else {
    iVar1 = TMeshAttributeArraySet<int>::GetNumIndices();
    if (iVar1 == 0) goto LAB_143d6e5b7;
    *param_2 = 0;
    lVar2 = OBJ_nid2obj(iVar1);
  }
  *(longlong *)(param_2 + 2) = lVar2;
  if (lVar2 != 0) {
    return param_2;
  }
LAB_143d6e5b7:
  ASN1_item_free(param_2,&DAT_145d8df10);
  return (int *)0x0;
}



// FUNCTION 143d6e5f0 EC_GROUP_new_from_ecparameters body=1722 status=ok
// SIG undefined EC_GROUP_new_from_ecparameters(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EC_GROUP_new_from_ecparameters(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  void *_Dst;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 uVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  longlong local_res18;
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uVar19 = 0x143d6e60a;
  plVar1 = *(longlong **)(param_1 + 8);
  lVar13 = 0;
  bVar6 = false;
  local_res18 = 0;
  lVar11 = 0;
  lVar12 = 0;
  lVar15 = 0;
  lVar16 = 0;
  lVar10 = lVar11;
  if (((plVar1 == (longlong *)0x0) || (*plVar1 == 0)) || (plVar1[1] == 0)) {
    ERR_put_error(0x10,0x107,0x73,"crypto\\ec\\ec_asn1.c",0x242,0x143d6e60a);
    goto LAB_143d6ec53;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (((puVar2 == (undefined8 *)0x0) ||
      (puVar3 = (undefined4 *)*puVar2, puVar3 == (undefined4 *)0x0)) ||
     ((*(longlong *)(puVar3 + 2) == 0 || ((puVar2[1] == 0 || (*(longlong *)(puVar2[1] + 8) == 0)))))
     ) {
    uVar18 = 0x24f;
    goto LAB_143d6e77a;
  }
  lVar15 = BN_bin2bn(*(longlong *)(puVar3 + 2),*puVar3,0);
  if (lVar15 == 0) {
    uVar18 = CONCAT44(uVar14,0x254);
    lVar16 = lVar13;
LAB_143d6e69b:
    uVar14 = 3;
    lVar11 = lVar13;
    lVar12 = lVar13;
LAB_143d6e6a6:
    ERR_put_error(0x10,0x107,uVar14,"crypto\\ec\\ec_asn1.c",uVar18,uVar19);
    lVar10 = lVar13;
  }
  else {
    puVar3 = *(undefined4 **)(*(longlong *)(param_1 + 0x10) + 8);
    lVar16 = BN_bin2bn(*(undefined8 *)(puVar3 + 2),*puVar3,0);
    if (lVar16 == 0) {
      uVar18 = CONCAT44(uVar14,0x259);
      goto LAB_143d6e69b;
    }
    iVar7 = OBJ_obj2nid(**(undefined8 **)(param_1 + 8));
    if (iVar7 != 0x197) {
      if (iVar7 == 0x196) {
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
        if (lVar10 == 0) {
          uVar18 = CONCAT44(uVar14,0x2bd);
          goto LAB_143d6e77a;
        }
        lVar12 = ASN1_INTEGER_to_BN(lVar10,0);
        if (lVar12 == 0) {
          uVar18 = CONCAT44(uVar14,0x2c2);
          uVar14 = 0xd;
          lVar11 = lVar13;
        }
        else {
          iVar7 = BN_is_negative(lVar12);
          if ((iVar7 == 0) && (iVar7 = BN_is_zero(lVar12), iVar7 == 0)) {
            iVar7 = BN_num_bits(lVar12);
            if (iVar7 < 0x296) {
              lVar10 = EC_GROUP_new_curve_GF2m(lVar12,lVar15,lVar16,0);
LAB_143d6e97c:
              lVar11 = lVar10;
              if (lVar10 != 0) {
                if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) != 0) {
                  CRYPTO_free(*(undefined8 *)(lVar10 + 0x30),"crypto\\ec\\ec_asn1.c",0x2df);
                  _Dst = (void *)CRYPTO_malloc((longlong)
                                               **(int **)(*(longlong *)(param_1 + 0x10) + 0x10),
                                               "crypto\\ec\\ec_asn1.c",0x2e0);
                  *(void **)(lVar10 + 0x30) = _Dst;
                  if (_Dst == (void *)0x0) {
                    ERR_put_error(0x10,0x107,0x41,"crypto\\ec\\ec_asn1.c",CONCAT44(uVar14,0x2e1));
                    goto LAB_143d6ec5b;
                  }
                  piVar4 = *(int **)(*(longlong *)(param_1 + 0x10) + 0x10);
                  _guard_xfg_dispatch_icall_nop(_Dst,*(void **)(piVar4 + 2),(longlong)*piVar4);
                  *(longlong *)(lVar10 + 0x38) =
                       (longlong)**(int **)(*(longlong *)(param_1 + 0x10) + 0x10);
                }
                if (((*(longlong *)(param_1 + 0x20) == 0) || (*(longlong *)(param_1 + 0x18) == 0))
                   || (*(longlong *)(*(longlong *)(param_1 + 0x18) + 8) == 0)) {
                  uVar18 = 0x2ea;
                  uVar19 = 0x73;
LAB_143d6eaf9:
                  ERR_put_error(0x10,0x107,uVar19,"crypto\\ec\\ec_asn1.c",uVar18);
                }
                else {
                  local_res18 = EC_POINT_new(lVar10);
                  if (local_res18 == 0) goto LAB_143d6ec53;
                  EC_GROUP_set_point_conversion_form
                            (lVar10,**(byte **)(*(longlong *)(param_1 + 0x18) + 8) & 0xfe);
                  uVar14 = 0;
                  iVar8 = EC_POINT_oct2point(lVar10,local_res18,
                                             *(undefined8 *)(*(int **)(param_1 + 0x18) + 2),
                                             (longlong)**(int **)(param_1 + 0x18),0);
                  if (iVar8 != 0) {
                    lVar15 = ASN1_INTEGER_to_BN(*(undefined8 *)(param_1 + 0x20),lVar15);
                    if (lVar15 == 0) {
                      uVar18 = 0x2fe;
LAB_143d6eaee:
                      uVar19 = 0xd;
                    }
                    else {
                      iVar8 = BN_is_negative(lVar15);
                      if ((iVar8 == 0) && (iVar8 = BN_is_zero(lVar15), iVar8 == 0)) {
                        iVar8 = BN_num_bits(lVar15);
                        if (iVar7 + 1 < iVar8) {
                          ERR_put_error(0x10,0x107,0x7a,"crypto\\ec\\ec_asn1.c",
                                        CONCAT44(uVar14,0x306));
                          goto LAB_143d6ec5b;
                        }
                        if (*(longlong *)(param_1 + 0x28) == 0) {
                          BN_free(lVar16);
                          lVar16 = lVar13;
                        }
                        else {
                          lVar16 = ASN1_INTEGER_to_BN(*(longlong *)(param_1 + 0x28),lVar16);
                          if (lVar16 == 0) {
                            uVar18 = 0x30f;
                            goto LAB_143d6eaee;
                          }
                        }
                        iVar7 = EC_GROUP_set_generator(lVar10,local_res18,lVar15,lVar16);
                        if (iVar7 != 0) {
                          bVar6 = true;
                          goto LAB_143d6ec53;
                        }
                        uVar18 = 0x314;
                        uVar19 = 0x10;
                      }
                      else {
                        uVar18 = 0x302;
                        uVar19 = 0x7a;
                      }
                    }
                    goto LAB_143d6eaf9;
                  }
                  ERR_put_error(0x10,0x107,0x10,"crypto\\ec\\ec_asn1.c",CONCAT44(uVar14,0x2f8));
                }
                goto LAB_143d6ec5b;
              }
              uVar18 = CONCAT44(uVar14,0x2d9);
              uVar14 = 0x10;
            }
            else {
              uVar18 = CONCAT44(uVar14,0x2cd);
              uVar14 = 0x8f;
              lVar11 = lVar13;
            }
          }
          else {
            uVar18 = CONCAT44(uVar14,0x2c7);
            uVar14 = 0x67;
            lVar11 = lVar13;
          }
        }
      }
      else {
        uVar18 = CONCAT44(uVar14,0x2d4);
        uVar14 = 0x67;
        lVar11 = lVar13;
      }
      goto LAB_143d6e6a6;
    }
    piVar4 = *(int **)(*(longlong *)(param_1 + 8) + 8);
    iVar7 = *piVar4;
    if (0x295 < iVar7) {
      uVar18 = CONCAT44(uVar14,0x26d);
      uVar14 = 0x8f;
      lVar11 = lVar13;
      goto LAB_143d6e6a6;
    }
    lVar12 = BN_new();
    if (lVar12 == 0) {
      uVar18 = CONCAT44(uVar14,0x272);
      uVar14 = 0x41;
      lVar11 = lVar13;
      goto LAB_143d6e6a6;
    }
    iVar8 = OBJ_obj2nid(*(undefined8 *)(piVar4 + 2));
    if (iVar8 == 0x2aa) {
      if (*(longlong *)(piVar4 + 4) != 0) {
        iVar8 = ASN1_INTEGER_get();
        if ((iVar8 < *piVar4) && (0 < iVar8)) {
          iVar9 = BN_set_bit(lVar12);
          lVar10 = lVar13;
          if (iVar9 != 0) {
LAB_143d6e850:
            iVar8 = BN_set_bit(lVar12,iVar8);
            lVar10 = lVar11;
            if ((iVar8 != 0) && (iVar8 = BN_set_bit(lVar12,0), iVar8 != 0)) {
              lVar10 = EC_GROUP_new_curve_GF2m(lVar12,lVar15,lVar16,0);
              goto LAB_143d6e97c;
            }
          }
LAB_143d6ec53:
          bVar17 = !bVar6;
          lVar11 = lVar10;
          if (!bVar17) goto LAB_143d6ec66;
          goto LAB_143d6ec5b;
        }
        uVar18 = CONCAT44(uVar14,0x285);
        uVar14 = 0x89;
        lVar11 = lVar13;
        goto LAB_143d6e6a6;
      }
      uVar18 = CONCAT44(uVar14,0x27d);
    }
    else if (iVar8 == 0x2ab) {
      piVar5 = *(int **)(piVar4 + 4);
      if (piVar5 != (int *)0x0) {
        if ((((piVar5[2] < *piVar4) && (piVar5[1] < piVar5[2])) && (*piVar5 < piVar5[1])) &&
           (0 < *piVar5)) {
          iVar8 = BN_set_bit(lVar12);
          if (((iVar8 != 0) && (iVar8 = BN_set_bit(lVar12,*piVar5), iVar8 != 0)) &&
             (iVar8 = BN_set_bit(lVar12,piVar5[1]), iVar8 != 0)) {
            iVar8 = piVar5[2];
            goto LAB_143d6e850;
          }
          goto LAB_143d6ec53;
        }
        uVar18 = CONCAT44(uVar14,0x29d);
        uVar14 = 0x84;
        lVar11 = lVar13;
        goto LAB_143d6e6a6;
      }
      uVar18 = CONCAT44(uVar14,0x295);
    }
    else {
      if (iVar8 == 0x2a9) {
        ERR_put_error(0x10,0x107,0x7e,"crypto\\ec\\ec_asn1.c",CONCAT44(uVar14,0x2ad));
        lVar10 = 0;
        goto LAB_143d6ec5b;
      }
      uVar18 = CONCAT44(uVar14,0x2b1);
    }
LAB_143d6e77a:
    ERR_put_error(0x10,0x107,0x73,"crypto\\ec\\ec_asn1.c",uVar18,uVar19);
    lVar10 = lVar13;
    lVar11 = lVar13;
  }
LAB_143d6ec5b:
  EC_GROUP_clear_free(lVar11);
  bVar17 = !bVar6;
LAB_143d6ec66:
  if (!bVar17) {
    lVar13 = lVar10;
  }
  BN_free(lVar12);
  BN_free(lVar15);
  BN_free(lVar16);
  EC_POINT_free(local_res18);
  return lVar13;
}



// FUNCTION 143d6ecb0 EC_GROUP_new_from_ecpkparameters body=248 status=ok
// SIG undefined EC_GROUP_new_from_ecpkparameters(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong EC_GROUP_new_from_ecpkparameters(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  if (param_1 == (int *)0x0) {
    ERR_put_error(0x10,0x108,0x7c,"crypto\\ec\\ec_asn1.c",0x32d);
    return 0;
  }
  iVar1 = *param_1;
  if (iVar1 == 0) {
    uVar2 = OBJ_obj2nid(*(undefined8 *)(param_1 + 2));
    lVar3 = EC_GROUP_new_by_curve_name(uVar2);
    if (lVar3 != 0) {
      BIO_set_shutdown(lVar3,1);
      return lVar3;
    }
    uVar4 = 0x335;
    uVar2 = 0x77;
  }
  else if (iVar1 == 1) {
    lVar3 = EC_GROUP_new_from_ecparameters(*(undefined8 *)(param_1 + 2));
    if (lVar3 != 0) {
      BIO_set_shutdown(lVar3,0);
      return lVar3;
    }
    uVar4 = 0x33d;
    uVar2 = 0x10;
  }
  else {
    if (iVar1 == 2) {
      return 0;
    }
    uVar4 = 0x344;
    uVar2 = 0x73;
  }
  ERR_put_error(0x10,0x108,uVar2,"crypto\\ec\\ec_asn1.c",uVar4);
  return 0;
}



// FUNCTION 143d6edb0 i2d_ECDSA_SIG body=29 status=ok
// SIG undefined i2d_ECDSA_SIG(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_ECDSA_SIG(void)

{
  ASN1_item_d2i();
  return;
}



// FUNCTION 143d6edd0 d2i_ECParameters body=422 status=ok
// SIG undefined d2i_ECParameters(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong d2i_ECParameters(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong local_res10;
  undefined8 uVar7;
  
  uVar7 = 0x143d6edde;
  if ((param_2 == (longlong *)0x0) || (*param_2 == 0)) {
    ERR_put_error(0x10,0x90,0x43,"crypto\\ec\\ec_asn1.c",0x421,0x143d6edde);
    return 0;
  }
  if (((param_1 == (longlong *)0x0) || (lVar3 = *param_1, lVar3 == 0)) &&
     (lVar3 = EC_KEY_new(), lVar3 == 0)) {
    ERR_put_error(0x10,0x90,0x41,"crypto\\ec\\ec_asn1.c",0x427,uVar7);
    return 0;
  }
  local_res10 = *param_2;
  plVar1 = (longlong *)(lVar3 + 0x18);
  lVar4 = ASN1_item_d2i(0,&local_res10,param_3,&DAT_145d8df10);
  if (lVar4 == 0) {
    uVar2 = 0x354;
    uVar6 = 0x75;
  }
  else {
    lVar5 = EC_GROUP_new_from_ecpkparameters(lVar4);
    if (lVar5 != 0) {
      if (plVar1 != (longlong *)0x0) {
        EC_GROUP_clear_free(*plVar1);
        *plVar1 = lVar5;
      }
      ASN1_item_free(lVar4,&DAT_145d8df10);
      *param_2 = local_res10;
      if (param_1 == (longlong *)0x0) {
        return lVar3;
      }
      *param_1 = lVar3;
      return lVar3;
    }
    uVar2 = 0x35a;
    uVar6 = 0x7f;
  }
  ERR_put_error(0x10,0x91,uVar6,"crypto\\ec\\ec_asn1.c",uVar2,uVar7);
  ASN1_item_free(lVar4,&DAT_145d8df10);
  ERR_put_error(0x10,0x90,0x10,"crypto\\ec\\ec_asn1.c",0x42e);
  if ((param_1 == (longlong *)0x0) || (*param_1 != lVar3)) {
    EC_KEY_free(lVar3);
  }
  return 0;
}



// FUNCTION 143d6ef80 d2i_ECPrivateKey body=556 status=ok
// SIG undefined d2i_ECPrivateKey(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong d2i_ECPrivateKey(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined8 local_res10;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x143d6ef90;
  local_res10 = *param_2;
  puVar3 = (undefined4 *)ASN1_item_d2i(0,&local_res10,param_3,&DAT_145d8dfc0);
  if (puVar3 == (undefined4 *)0x0) {
    ERR_put_error(0x10,0x92,0x10,"crypto\\ec\\ec_asn1.c",899,uVar9);
    return 0;
  }
  if (((param_1 == (longlong *)0x0) || (lVar4 = *param_1, lVar4 == 0)) &&
     (lVar4 = EC_KEY_new(), lVar4 == 0)) {
    uVar8 = 0x389;
    uVar7 = 0x41;
  }
  else {
    if (*(longlong *)(puVar3 + 4) != 0) {
      EC_GROUP_clear_free(*(undefined8 *)(lVar4 + 0x18));
      uVar5 = EC_GROUP_new_from_ecpkparameters(*(undefined8 *)(puVar3 + 4));
      *(undefined8 *)(lVar4 + 0x18) = uVar5;
    }
    if (*(longlong *)(lVar4 + 0x18) == 0) {
      uVar8 = 0x395;
      uVar7 = 0x10;
    }
    else {
      *(undefined4 *)(lVar4 + 0x10) = *puVar3;
      lVar6 = *(longlong *)(puVar3 + 2);
      if (lVar6 == 0) {
        uVar8 = 0x3a1;
        uVar7 = 0x7d;
      }
      else {
        iVar2 = FRollingHash::GetWindowSize(lVar6);
        uVar5 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
                ::GetBoundProgramCounterForTimerManager(lVar6);
        iVar2 = EC_KEY_oct2priv(lVar4,uVar5,(longlong)iVar2);
        if (iVar2 == 0) goto LAB_143d6f170;
        EC_POINT_clear_free(*(undefined8 *)(lVar4 + 0x20));
        lVar6 = EC_POINT_new(*(undefined8 *)(lVar4 + 0x18));
        *(longlong *)(lVar4 + 0x20) = lVar6;
        if (lVar6 == 0) {
          uVar8 = 0x3a8;
          uVar7 = 0x10;
        }
        else {
          if (*(longlong *)(puVar3 + 6) == 0) {
            pcVar1 = *(code **)(**(longlong **)(lVar4 + 0x18) + 0x160);
            if ((pcVar1 == (code *)0x0) || (iVar2 = (*pcVar1)(lVar4), iVar2 == 0))
            goto LAB_143d6f170;
            *(uint *)(lVar4 + 0x30) = *(uint *)(lVar4 + 0x30) | 2;
LAB_143d6f128:
            if (param_1 != (longlong *)0x0) {
              *param_1 = lVar4;
            }
            ASN1_item_free(puVar3,&DAT_145d8dfc0);
            *param_2 = local_res10;
            return lVar4;
          }
          uVar5 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
                  ::GetBoundProgramCounterForTimerManager();
          iVar2 = FRollingHash::GetWindowSize(*(undefined8 *)(puVar3 + 6));
          iVar2 = EC_KEY_oct2key(lVar4,uVar5,(longlong)iVar2,0);
          if (iVar2 != 0) goto LAB_143d6f128;
          uVar8 = 0x3b3;
          uVar7 = 0x10;
        }
      }
    }
  }
  ERR_put_error(0x10,0x92,uVar7,"crypto\\ec\\ec_asn1.c",uVar8,uVar9);
LAB_143d6f170:
  if ((param_1 == (longlong *)0x0) || (*param_1 != lVar4)) {
    EC_KEY_free(lVar4);
  }
  ASN1_item_free(puVar3,&DAT_145d8dfc0);
  return 0;
}



// FUNCTION 143d6f1b0 ec_asn1_group2curve body=628 status=ok
// SIG undefined ec_asn1_group2curve(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ec_asn1_group2curve(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 uVar10;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar10 = 0x143d6f1c7;
  lVar7 = 0;
  lVar9 = 0;
  if ((((param_1 == 0) || (param_2 == (longlong *)0x0)) || (*param_2 == 0)) || (param_2[1] == 0)) {
    return 0;
  }
  lVar2 = BN_new();
  lVar3 = lVar7;
  lVar4 = lVar7;
  if ((lVar2 == 0) || (lVar3 = BN_new(), lVar3 == 0)) {
    uVar10 = CONCAT44(uVar8,0x179);
LAB_143d6f39c:
    uVar8 = 0x41;
  }
  else {
    uVar8 = 0;
    iVar1 = EC_GROUP_get_curve(param_1,0,lVar2,lVar3,0,uVar10);
    if (iVar1 == 0) {
      uVar10 = CONCAT44(uVar8,0x17f);
      uVar8 = 0x10;
      lVar9 = lVar7;
    }
    else {
      iVar1 = EC_GROUP_get_degree(param_1);
      uVar6 = (longlong)iVar1 + 7U >> 3;
      lVar9 = CRYPTO_malloc(uVar6,"crypto\\ec\\ec_asn1.c",0x189);
      if ((lVar9 == 0) || (lVar4 = CRYPTO_malloc(uVar6,"crypto\\ec\\ec_asn1.c",0x18a), lVar4 == 0))
      {
        uVar10 = CONCAT44(uVar8,0x18b);
        goto LAB_143d6f39c;
      }
      iVar1 = BN_bn2binpad(lVar2,lVar9,uVar6 & 0xffffffff);
      if ((iVar1 < 0) || (iVar1 = BN_bn2binpad(lVar3,lVar4,uVar6 & 0xffffffff), iVar1 < 0)) {
        uVar10 = CONCAT44(uVar8,400);
        uVar8 = 3;
      }
      else {
        iVar1 = ASN1_OCTET_STRING_set(*param_2,lVar9,uVar6 & 0xffffffff);
        if ((iVar1 != 0) &&
           (iVar1 = ASN1_OCTET_STRING_set(param_2[1],lVar4,uVar6 & 0xffffffff), iVar1 != 0)) {
          if (*(longlong *)(param_1 + 0x30) == 0) {
            ASN1_BIT_STRING_free(param_2[2]);
            param_2[2] = 0;
          }
          else {
            lVar5 = param_2[2];
            if (lVar5 == 0) {
              lVar5 = ASN1_BIT_STRING_new();
              param_2[2] = lVar5;
              if (lVar5 == 0) {
                uVar10 = CONCAT44(uVar8,0x19f);
                goto LAB_143d6f39c;
              }
            }
            *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) & 0xfffffff0;
            *(uint *)(param_2[2] + 0x10) = *(uint *)(param_2[2] + 0x10) | 8;
            iVar1 = ASN1_OCTET_STRING_set
                              (param_2[2],*(undefined8 *)(param_1 + 0x30),
                               *(undefined4 *)(param_1 + 0x38));
            if (iVar1 == 0) {
              uVar10 = CONCAT44(uVar8,0x1a6);
              uVar8 = 0xd;
              goto LAB_143d6f3a7;
            }
          }
          lVar7 = 1;
          goto LAB_143d6f3b8;
        }
        uVar10 = CONCAT44(uVar8,0x197);
        uVar8 = 0xd;
      }
    }
  }
LAB_143d6f3a7:
  ERR_put_error(0x10,0x99,uVar8,"crypto\\ec\\ec_asn1.c",uVar10);
LAB_143d6f3b8:
  CRYPTO_free(lVar9,"crypto\\ec\\ec_asn1.c",0x1b1);
  CRYPTO_free(lVar4,"crypto\\ec\\ec_asn1.c",0x1b2);
  BN_free(lVar2);
  BN_free(lVar3);
  return lVar7;
}



// FUNCTION 143d6f430 ec_asn1_group2fieldid body=904 status=ok
// SIG undefined ec_asn1_group2fieldid(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ec_asn1_group2fieldid(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int *piVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 uVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 in_stack_ffffffffffffffd8;
  ulonglong uVar11;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar16 = 0;
  uVar14 = 0;
  if ((param_1 == 0) || (param_2 == (longlong *)0x0)) {
    return 0;
  }
  ASN1_OBJECT_free(*param_2);
  ASN1_TYPE_free(param_2[1]);
  uVar5 = FHardwareCursor::GetHandle(param_1);
  iVar3 = FCachedCompositeFontData::FCachedFontRange::BinarySearchKey(uVar5);
  lVar6 = OBJ_nid2obj(iVar3);
  *param_2 = lVar6;
  uVar15 = uVar16;
  if (lVar6 == 0) {
    ERR_put_error(0x10,0x9a,8,"crypto\\ec\\ec_asn1.c",CONCAT44(uVar13,0x103));
    goto LAB_143d6f783;
  }
  if (iVar3 == 0x196) {
    uVar14 = BN_new();
    if (uVar14 == 0) {
      uVar5 = CONCAT44(uVar13,0x109);
      uVar13 = 0x41;
    }
    else {
      uVar13 = 0;
      iVar3 = EC_GROUP_get_curve(param_1,uVar14,0,0,0);
      if (iVar3 == 0) {
        uVar5 = CONCAT44(uVar13,0x10e);
        uVar13 = 0x10;
      }
      else {
        lVar6 = BN_to_ASN1_INTEGER(uVar14,0);
        param_2[1] = lVar6;
        uVar15 = uVar14;
        if (lVar6 != 0) goto LAB_143d6f70c;
        uVar5 = CONCAT44(uVar13,0x114);
        uVar13 = 0xd;
      }
    }
LAB_143d6f76d:
    uVar12 = 0x9a;
  }
  else {
    if (iVar3 != 0x197) {
      uVar5 = CONCAT44(uVar13,0x163);
      uVar13 = 0x83;
      goto LAB_143d6f76d;
    }
    puVar7 = (undefined4 *)ASN1_item_new(&DAT_145d8dbf0);
    param_2[1] = (longlong)puVar7;
    if (puVar7 == (undefined4 *)0x0) {
      uVar5 = CONCAT44(uVar13,0x126);
      uVar13 = 0x41;
      goto LAB_143d6f76d;
    }
    uVar4 = EC_GROUP_get_degree(param_1);
    *puVar7 = uVar4;
    uVar5 = FHardwareCursor::GetHandle(param_1);
    iVar3 = FCachedCompositeFontData::FCachedFontRange::BinarySearchKey(uVar5);
    if (iVar3 != 0x197) {
LAB_143d6f748:
      uVar5 = CONCAT44(uVar13,0x12f);
      uVar13 = 0x10;
      uVar14 = uVar16;
      goto LAB_143d6f76d;
    }
    piVar8 = (int *)(param_1 + 0x48);
    uVar9 = uVar16;
    uVar11 = uVar16;
    do {
      uVar10 = (uint)uVar11;
      if (*piVar8 == 0) break;
      uVar10 = uVar10 + 1;
      uVar11 = (ulonglong)uVar10;
      uVar9 = uVar9 + 1;
      piVar8 = piVar8 + 1;
    } while ((longlong)uVar9 < 6);
    if (uVar10 == 4) {
      iVar3 = 0x2ab;
    }
    else {
      if (uVar10 != 2) goto LAB_143d6f748;
      iVar3 = 0x2aa;
    }
    lVar6 = OBJ_nid2obj(iVar3);
    *(longlong *)(puVar7 + 2) = lVar6;
    if (lVar6 == 0) {
      uVar5 = CONCAT44(uVar13,0x134);
      uVar13 = 8;
      goto LAB_143d6f76d;
    }
    if (iVar3 != 0x2aa) {
      uVar15 = uVar14;
      if (iVar3 == 0x2ab) {
        uVar5 = FHardwareCursor::GetHandle(param_1);
        iVar3 = FCachedCompositeFontData::FCachedFontRange::BinarySearchKey(uVar5);
        if ((((iVar3 != 0x197) || (*(int *)(param_1 + 0x48) == 0)) ||
            ((iVar3 = *(int *)(param_1 + 0x4c), iVar3 == 0 ||
             ((iVar1 = *(int *)(param_1 + 0x50), iVar1 == 0 ||
              (iVar2 = *(int *)(param_1 + 0x54), iVar2 == 0)))))) || (*(int *)(param_1 + 0x58) != 0)
           ) {
          uVar12 = 0xc1;
          uVar5 = CONCAT44(uVar13,0x4a);
          uVar13 = 0x42;
          goto LAB_143d6f772;
        }
        piVar8 = (int *)ASN1_item_new(&DAT_145d8da90);
        *(int **)(puVar7 + 4) = piVar8;
        if (piVar8 != (int *)0x0) {
          *piVar8 = iVar2;
          *(int *)(*(longlong *)(puVar7 + 4) + 4) = iVar1;
          *(int *)(*(longlong *)(puVar7 + 4) + 8) = iVar3;
          goto LAB_143d6f70c;
        }
        uVar5 = CONCAT44(uVar13,0x14f);
        uVar13 = 0x41;
      }
      else {
        lVar6 = ASN1_NULL_new();
        *(longlong *)(puVar7 + 4) = lVar6;
        if (lVar6 != 0) {
LAB_143d6f70c:
          uVar16 = 1;
          goto LAB_143d6f783;
        }
        uVar5 = CONCAT44(uVar13,0x15c);
        uVar13 = 0x41;
      }
      goto LAB_143d6f76d;
    }
    uVar5 = FHardwareCursor::GetHandle(param_1);
    iVar3 = FCachedCompositeFontData::FCachedFontRange::BinarySearchKey(uVar5);
    if ((((iVar3 == 0x197) && (*(int *)(param_1 + 0x48) != 0)) &&
        (iVar3 = *(int *)(param_1 + 0x4c), iVar3 != 0)) && (*(int *)(param_1 + 0x50) == 0)) {
      lVar6 = ASN1_INTEGER_new();
      *(longlong *)(puVar7 + 4) = lVar6;
      if (lVar6 == 0) {
        uVar5 = CONCAT44(uVar13,0x140);
        uVar13 = 0x41;
      }
      else {
        iVar3 = ASN1_INTEGER_set(lVar6,iVar3);
        if (iVar3 != 0) goto LAB_143d6f70c;
        uVar5 = CONCAT44(uVar13,0x144);
        uVar13 = 0xd;
      }
      goto LAB_143d6f76d;
    }
    uVar12 = 0xc2;
    uVar5 = CONCAT44(uVar13,0x34);
    uVar13 = 0x42;
    uVar14 = uVar16;
  }
LAB_143d6f772:
  ERR_put_error(0x10,uVar12,uVar13,"crypto\\ec\\ec_asn1.c",uVar5);
  uVar15 = uVar14;
LAB_143d6f783:
  BN_free(uVar15);
  return uVar16;
}



// FUNCTION 143d6f7c0 i2d_ECDSA_SIG body=29 status=ok
// SIG undefined i2d_ECDSA_SIG(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_ECDSA_SIG(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_145d8e030);
  return;
}



// FUNCTION 143d6f7e0 i2d_ECParameters body=246 status=ok
// SIG undefined i2d_ECParameters(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int i2d_ECParameters(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143d6f7ec;
  if (param_1 == 0) {
    ERR_put_error(0x10,0xbe,0x43,"crypto\\ec\\ec_asn1.c",0x416,0x143d6f7ec);
    return 0;
  }
  lVar2 = EC_GROUP_get_ecpkparameters(*(undefined8 *)(param_1 + 0x18),0);
  if (lVar2 == 0) {
    ERR_put_error(0x10,0xbf,0x78,"crypto\\ec\\ec_asn1.c",0x36e,uVar3);
    return 0;
  }
  iVar1 = ASN1_item_i2d(lVar2,param_2,&DAT_145d8df10);
  if (iVar1 == 0) {
    ERR_put_error(0x10,0xbf,0x79,"crypto\\ec\\ec_asn1.c",0x372,uVar3);
    ASN1_item_free(lVar2,&DAT_145d8df10);
    return 0;
  }
  ASN1_item_free(lVar2,&DAT_145d8df10);
  return iVar1;
}



// FUNCTION 143d6f8e0 i2d_ECPrivateKey body=552 status=ok
// SIG undefined i2d_ECPrivateKey(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong i2d_ECPrivateKey(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined8 local_res8;
  undefined8 local_res18;
  undefined4 uVar10;
  undefined8 uVar11;
  
  uVar11 = 0x143d6f8fc;
  uVar6 = 0;
  local_res8 = 0;
  local_res18 = 0;
  uVar9 = 0;
  bVar1 = false;
  uVar5 = 0;
  puVar7 = (undefined4 *)0x0;
  if (((param_1 == 0) || (*(longlong *)(param_1 + 0x18) == 0)) ||
     (((*(byte *)(param_1 + 0x30) & 2) == 0 && (*(longlong *)(param_1 + 0x20) == 0)))) {
    uVar10 = 0x3d5;
    uVar8 = 0x43;
    uVar9 = uVar6;
  }
  else {
    puVar7 = (undefined4 *)ASN1_item_new(&DAT_145d8dfc0);
    if (puVar7 == (undefined4 *)0x0) {
      uVar10 = 0x3da;
      uVar8 = 0x41;
      uVar5 = uVar6;
      uVar9 = uVar6;
    }
    else {
      *puVar7 = *(undefined4 *)(param_1 + 0x10);
      uVar5 = EC_KEY_priv2buf(param_1,&local_res8);
      if (uVar5 == 0) {
        uVar10 = 0x3e3;
        uVar8 = 0x10;
      }
      else {
        ASN1_STRING_set0(*(undefined8 *)(puVar7 + 2),local_res8,uVar5 & 0xffffffff);
        local_res8 = 0;
        if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
          lVar3 = EC_GROUP_get_ecpkparameters
                            (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(puVar7 + 4));
          *(longlong *)(puVar7 + 4) = lVar3;
          if (lVar3 == 0) {
            uVar10 = 0x3ee;
            uVar8 = 0x10;
            goto LAB_143d6fa97;
          }
        }
        if ((*(byte *)(param_1 + 0x30) & 2) == 0) {
          lVar3 = ASN1_BIT_STRING_new();
          *(longlong *)(puVar7 + 6) = lVar3;
          if (lVar3 == 0) {
            uVar10 = 0x3f6;
            uVar8 = 0x41;
            uVar9 = uVar6;
          }
          else {
            uVar4 = EC_KEY_key2buf(param_1,*(undefined4 *)(param_1 + 0x34),&local_res18,0);
            if (uVar4 != 0) {
              *(uint *)(*(longlong *)(puVar7 + 6) + 0x10) =
                   *(uint *)(*(longlong *)(puVar7 + 6) + 0x10) & 0xfffffff0;
              *(uint *)(*(longlong *)(puVar7 + 6) + 0x10) =
                   *(uint *)(*(longlong *)(puVar7 + 6) + 0x10) | 8;
              ASN1_STRING_set0(*(undefined8 *)(puVar7 + 6),local_res18,uVar4 & 0xffffffff);
              local_res18 = 0;
              goto LAB_143d6fa51;
            }
            uVar10 = 0x3fd;
            uVar8 = 0x10;
          }
        }
        else {
LAB_143d6fa51:
          uVar2 = ASN1_item_i2d(puVar7,param_2,&DAT_145d8dfc0);
          uVar9 = (ulonglong)uVar2;
          if (uVar2 != 0) {
            bVar1 = true;
            goto LAB_143d6faa8;
          }
          uVar10 = 0x408;
          uVar8 = 0x10;
        }
      }
    }
  }
LAB_143d6fa97:
  ERR_put_error(0x10,0xc0,uVar8,"crypto\\ec\\ec_asn1.c",uVar10,uVar11);
LAB_143d6faa8:
  CRYPTO_clear_free(local_res8,uVar5,"crypto\\ec\\ec_asn1.c",0x40d);
  CRYPTO_free(local_res18,"crypto\\ec\\ec_asn1.c",0x40e);
  ASN1_item_free(puVar7,&DAT_145d8dfc0);
  if (bVar1) {
    uVar6 = uVar9;
  }
  return uVar6;
}



// FUNCTION 143d6fb10 i2o_ECPublicKey body=354 status=ok
// SIG undefined i2o_ECPublicKey(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong i2o_ECPublicKey(longlong param_1,longlong *param_2)

{
  bool bVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  bVar1 = false;
  if (param_1 == 0) {
    ERR_put_error(0x10,0x97,0x43,"crypto\\ec\\ec_asn1.c",0x454,0x143d6fb2b);
    uVar2 = 0;
  }
  else {
    uVar4 = 0;
    uVar2 = EC_POINT_point2oct(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                               *(undefined4 *)(param_1 + 0x34),0,0,0);
    if ((param_2 != (longlong *)0x0) && (uVar2 != 0)) {
      lVar3 = *param_2;
      if (lVar3 == 0) {
        lVar3 = CRYPTO_malloc(uVar2,"crypto\\ec\\ec_asn1.c",0x460);
        *param_2 = lVar3;
        if (lVar3 == 0) {
          ERR_put_error(0x10,0x97,0x41,"crypto\\ec\\ec_asn1.c",CONCAT44(uVar4,0x461));
          return 0;
        }
        bVar1 = true;
      }
      lVar3 = EC_POINT_point2oct(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                                 *(undefined4 *)(param_1 + 0x34),lVar3,uVar2,0);
      if (lVar3 == 0) {
        ERR_put_error(0x10,0x97,0x10,"crypto\\ec\\ec_asn1.c",0x468);
        if (bVar1) {
          CRYPTO_free(*param_2,"crypto\\ec\\ec_asn1.c",0x46a);
          *param_2 = 0;
        }
        return 0;
      }
      if (!bVar1) {
        *param_2 = *param_2 + uVar2;
      }
    }
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 143d6fc80 o2i_ECPublicKey body=191 status=ok
// SIG undefined o2i_ECPublicKey(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong o2i_ECPublicKey(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143d6fc90;
  if (((param_1 != (longlong *)0x0) && (lVar1 = *param_1, lVar1 != 0)) &&
     (*(longlong *)(lVar1 + 0x18) != 0)) {
    iVar2 = EC_KEY_oct2key(lVar1,*param_2,(longlong)param_3,0);
    if (iVar2 == 0) {
      ERR_put_error(0x10,0x98,0x10,"crypto\\ec\\ec_asn1.c",0x447,uVar3);
      return 0;
    }
    *param_2 = *param_2 + (longlong)param_3;
    return lVar1;
  }
  ERR_put_error(0x10,0x98,0x43,"crypto\\ec\\ec_asn1.c",0x442,0x143d6fc90);
  return 0;
}



// FUNCTION 143d6fd40 dsa_cb body=86 status=ok
// SIG undefined dsa_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte dsa_cb(int param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = DSA_new();
    *param_2 = lVar1;
    return -(lVar1 != 0) & 2;
  }
  if (param_1 == 2) {
    DSA_free(*param_2);
    *param_2 = 0;
    return 2;
  }
  return 1;
}



// FUNCTION 143d6fda0 DSA_SIG_free body=66 status=ok
// SIG undefined DSA_SIG_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DSA_SIG_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    BN_clear_free(*param_1);
    BN_clear_free(param_1[1]);
    CRYPTO_free(param_1,"crypto\\dsa\\dsa_asn1.c",0x26);
  }
  return;
}



// FUNCTION 143d6fdf0 DSA_SIG_new body=81 status=ok
// SIG undefined DSA_SIG_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong DSA_SIG_new(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d6fdfc;
  lVar1 = CRYPTO_zalloc(0x10,"crypto\\dsa\\dsa_asn1.c",0x1a);
  if (lVar1 == 0) {
    ERR_put_error(10,0x66,0x41,"crypto\\dsa\\dsa_asn1.c",0x1c,uVar2);
  }
  return lVar1;
}



// FUNCTION 143d6fe50 DSA_sign body=136 status=ok
// SIG undefined DSA_sign(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
DSA_sign(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
        undefined4 *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  puVar2 = (undefined8 *)DSA_do_sign(param_2,param_3,param_6);
  if (puVar2 == (undefined8 *)0x0) {
    *param_5 = 0;
    return 0;
  }
  uVar1 = ASN1_item_i2d(puVar2,&local_res20,&DAT_145d8e270);
  *param_5 = uVar1;
  BN_clear_free(*puVar2);
  BN_clear_free(puVar2[1]);
  CRYPTO_free(puVar2,"crypto\\dsa\\dsa_asn1.c",0x26);
  return 1;
}



// FUNCTION 143d6fee0 DSA_verify body=350 status=ok
// SIG undefined DSA_verify(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
DSA_verify(undefined8 param_1,undefined8 param_2,undefined4 param_3,void *param_4,int param_5,
          undefined8 param_6)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *local_res20;
  void *local_28;
  void *local_20;
  
  local_28 = (void *)0x0;
  iVar2 = -1;
  local_20 = param_4;
  local_res20 = (undefined8 *)CRYPTO_zalloc(0x10,"crypto\\dsa\\dsa_asn1.c",0x1a);
  if (local_res20 == (undefined8 *)0x0) {
    ERR_put_error(10,0x66,0x41,"crypto\\dsa\\dsa_asn1.c",0x1c);
    uVar4 = 0xffffffff;
  }
  else {
    lVar5 = ASN1_item_d2i(&local_res20,&local_20,param_5,&DAT_145d8e270);
    uVar4 = 0xffffffff;
    if (lVar5 != 0) {
      iVar2 = ASN1_item_i2d(local_res20,&local_28,&DAT_145d8e270);
      uVar4 = 0xffffffff;
      if ((iVar2 == param_5) &&
         (iVar3 = _guard_xfg_dispatch_icall_nop(param_4,local_28,(longlong)iVar2), iVar3 == 0)) {
        uVar4 = DSA_do_verify(param_2,param_3,local_res20,param_6);
      }
    }
    CRYPTO_clear_free(local_28,(longlong)iVar2,"crypto\\dsa\\dsa_asn1.c",0x98);
    puVar1 = local_res20;
    if (local_res20 != (undefined8 *)0x0) {
      BN_clear_free(*local_res20);
      BN_clear_free(puVar1[1]);
      CRYPTO_free(puVar1,"crypto\\dsa\\dsa_asn1.c",0x26);
    }
  }
  return uVar4;
}



// FUNCTION 143d70040 d2i_DSAPrivateKey body=29 status=ok
// SIG undefined d2i_DSAPrivateKey(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_DSAPrivateKey(void)

{
  ASN1_item_d2i();
  return;
}



// FUNCTION 143d70060 d2i_DSA_SIG body=29 status=ok
// SIG undefined d2i_DSA_SIG(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_DSA_SIG(void)

{
  ASN1_item_d2i();
  return;
}



// FUNCTION 143d70080 d2i_DSAparams body=29 status=ok
// SIG undefined d2i_DSAparams(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_DSAparams(void)

{
  ASN1_item_d2i();
  return;
}



// FUNCTION 143d700a0 FUN_143d700a0 body=29 status=ok
// SIG undefined FUN_143d700a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d700a0(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_145d8e3b0);
  return;
}



// FUNCTION 143d700c0 i2d_ASN1_INTEGER body=29 status=ok
// SIG undefined i2d_ASN1_INTEGER(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_ASN1_INTEGER(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_145d8e440);
  return;
}



// FUNCTION 143d70190 pk7_cb body=126 status=ok
// SIG undefined pk7_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pk7_cb(int param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 == 10) {
    iVar1 = PKCS7_stream(param_4 + 2,*param_2);
    if (iVar1 < 1) {
      return 0;
    }
LAB_143d701ea:
    lVar2 = PKCS7_dataInit(*param_2,*param_4);
    param_4[1] = lVar2;
    if (lVar2 != 0) {
      return 1;
    }
  }
  else {
    if (param_1 != 0xb) {
      if (param_1 == 0xc) goto LAB_143d701ea;
      if (param_1 != 0xd) {
        return 1;
      }
    }
    iVar1 = PKCS7_dataFinal(*param_2,param_4[1]);
    if (0 < iVar1) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d70210 si_cb body=40 status=ok
// SIG undefined si_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 si_cb(int param_1,longlong *param_2)

{
  if (param_1 == 3) {
    EVP_PKEY_free(*(undefined8 *)(*param_2 + 0x38));
  }
  return 1;
}



// FUNCTION 143d70240 ri_cb body=40 status=ok
// SIG undefined ri_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ri_cb(int param_1,longlong *param_2)

{
  if (param_1 == 3) {
    X509_free(*(undefined8 *)(*param_2 + 0x20));
  }
  return 1;
}



// FUNCTION 143d70270 PKCS7_ATTR_SIGN_it body=8 status=ok
// SIG undefined PKCS7_ATTR_SIGN_it(void)

undefined * PKCS7_ATTR_SIGN_it(void)

{
  return &DAT_145d8ee50;
}



// FUNCTION 143d70280 FUN_143d70280 body=29 status=ok
// SIG undefined FUN_143d70280(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d70280(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145d8e760);
  return;
}



// FUNCTION 143d702b0 rinf_cb body=54 status=ok
// SIG undefined rinf_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rinf_cb(int param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  if (param_1 == 1) {
    lVar2 = OPENSSL_sk_new_null();
    *(longlong *)(lVar1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143d70300 ASN1_item_digest body=158 status=ok
// SIG undefined ASN1_item_digest(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ASN1_item_digest(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5)

{
  int iVar1;
  longlong local_18 [2];
  
  local_18[1] = 0x143d70310;
  local_18[0] = 0;
  iVar1 = ASN1_item_i2d(param_3,local_18,param_1);
  if (local_18[0] != 0) {
    iVar1 = EVP_Digest(local_18[0],(longlong)iVar1,param_4,param_5,param_2,0);
    if (iVar1 != 0) {
      CRYPTO_free(local_18[0],"crypto\\asn1\\a_digest.c",0x3d);
      return 1;
    }
    CRYPTO_free(local_18[0],"crypto\\asn1\\a_digest.c",0x3a);
  }
  return 0;
}



// FUNCTION 143d703a0 ASN1_item_verify body=705 status=ok
// SIG undefined ASN1_item_verify(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ASN1_item_verify(undefined8 param_1,undefined8 *param_2,int *param_3,undefined8 param_4,
                    longlong param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 in_stack_ffffffffffffffb8;
  int *piVar10;
  longlong lVar11;
  undefined4 local_38 [2];
  longlong local_30;
  
  lVar11 = param_5;
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  iVar4 = -1;
  uVar8 = 0;
  local_30 = 0;
  if (param_5 == 0) {
    ERR_put_error(0xd,0xc5,0x43,"crypto\\asn1\\a_verify.c",CONCAT44(uVar2,0x5e));
    return -1;
  }
  if ((param_3[1] == 3) && ((*(byte *)(param_3 + 4) & 7) != 0)) {
    ERR_put_error(0xd,0xc5,0xdc,"crypto\\asn1\\a_verify.c",CONCAT44(uVar2,99));
    return -1;
  }
  lVar5 = EVP_MD_CTX_new();
  if (lVar5 == 0) {
    ERR_put_error(0xd,0xc5,0x41,"crypto\\asn1\\a_verify.c",CONCAT44(uVar2,0x69));
    iVar4 = -1;
    goto LAB_143d7061f;
  }
  uVar2 = OBJ_obj2nid(*param_2);
  iVar3 = OBJ_find_sigid_algs(uVar2,&param_5,local_38);
  if (iVar3 == 0) {
    uVar6 = 0x6f;
LAB_143d7049b:
    uVar9 = 199;
    iVar4 = -1;
  }
  else if ((int)param_5 == 0) {
    if ((*(longlong *)(lVar11 + 0x10) == 0) ||
       (pcVar1 = *(code **)(*(longlong *)(lVar11 + 0x10) + 200), pcVar1 == (code *)0x0)) {
      uVar6 = 0x75;
      goto LAB_143d7049b;
    }
    piVar10 = param_3;
    iVar4 = (*pcVar1)(lVar5,param_1,param_4,param_2,param_3,lVar11);
    uVar2 = (undefined4)((ulonglong)piVar10 >> 0x20);
    if (iVar4 != 2) goto LAB_143d7061f;
LAB_143d70504:
    iVar4 = ASN1_item_i2d(param_4,&local_30,param_1);
    uVar8 = (ulonglong)iVar4;
    if (local_30 == 0) {
      ERR_put_error(0xd,0xc5,0x41,"crypto\\asn1\\a_verify.c",CONCAT44(uVar2,0x9b));
      iVar4 = -1;
      goto LAB_143d7061f;
    }
    iVar4 = EVP_DigestVerify(lVar5,*(undefined8 *)(param_3 + 2),(longlong)*param_3,local_30,uVar8);
    if (0 < iVar4) {
      iVar4 = 1;
      goto LAB_143d7061f;
    }
    uVar6 = 0xa2;
    uVar9 = 6;
  }
  else {
    uVar6 = OBJ_nid2sn();
    lVar7 = EVP_get_digestbyname(uVar6);
    if (lVar7 == 0) {
      uVar6 = 0x86;
      uVar9 = 0xa1;
    }
    else {
      iVar3 = EVP_PKEY_type(local_38[0]);
      if (iVar3 == **(int **)(lVar11 + 0x10)) {
        iVar4 = EVP_DigestVerifyInit(lVar5,0,lVar7,0,lVar11);
        uVar2 = (undefined4)((ulonglong)lVar11 >> 0x20);
        if (iVar4 == 0) {
          ERR_put_error(0xd,0xc5,6,"crypto\\asn1\\a_verify.c",CONCAT44(uVar2,0x91));
          iVar4 = 0;
          goto LAB_143d7061f;
        }
        goto LAB_143d70504;
      }
      uVar6 = 0x8c;
      uVar9 = 200;
    }
  }
  ERR_put_error(0xd,0xc5,uVar9,"crypto\\asn1\\a_verify.c",uVar6);
LAB_143d7061f:
  CRYPTO_clear_free(local_30,uVar8 & 0xffffffff,"crypto\\asn1\\a_verify.c",0xa7);
  EVP_MD_CTX_free(lVar5);
  return iVar4;
}



// FUNCTION 143d70670 nsseq_cb body=52 status=ok
// SIG undefined nsseq_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 nsseq_cb(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 1) {
    param_2 = (undefined8 *)*param_2;
    uVar1 = OBJ_nid2obj(0x4f);
    *param_2 = uVar1;
  }
  return 1;
}



// FUNCTION 143d706b0 drbg_ctr_instantiate body=208 status=ok
// SIG undefined drbg_ctr_instantiate(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
drbg_ctr_instantiate
          (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d706ca;
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    iVar1 = FUN_143cf75a0(*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xb0),0,
                          (undefined8 *)(param_1 + 0xc0),0,1);
    if ((iVar1 != 0) &&
       (iVar1 = ctr_update(param_1,param_2,param_3,param_6,param_7,param_4,param_5,uVar2),
       iVar1 != 0)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d70780 drbg_ctr_reseed body=66 status=ok
// SIG undefined drbg_ctr_reseed(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 drbg_ctr_reseed(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = ctr_update();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d707d0 drbg_ctr_generate body=356 status=ok
// SIG undefined drbg_ctr_generate(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
drbg_ctr_generate(longlong param_1,void *param_2,ulonglong param_3,longlong param_4,longlong param_5
                 )

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  int local_res8 [2];
  undefined8 uVar5;
  
  uVar5 = 0x143d707f2;
  if ((param_4 == 0) || (param_5 == 0)) {
    lVar3 = 0;
    lVar4 = param_4;
  }
  else {
    iVar1 = ctr_update(param_1,param_4,param_5,0,0,0,0,0x143d707f2);
    if (iVar1 == 0) {
      return 0;
    }
    lVar3 = 1;
    lVar4 = 0;
    if ((*(ushort *)(param_1 + 0x1c) & 1) != 0) {
      lVar3 = param_5;
      lVar4 = param_4;
    }
  }
  do {
    iVar1 = 0;
    local_res8[0] = 0x10;
    pcVar2 = (char *)(param_1 + 0xef);
    do {
      *pcVar2 = *pcVar2 + '\x01';
      if (*pcVar2 != '\0') break;
      iVar1 = iVar1 + 1;
      pcVar2 = pcVar2 + -1;
    } while (iVar1 < 0x10);
    if (param_3 < 0x10) {
      iVar1 = EVP_CipherUpdate(*(undefined8 *)(param_1 + 0xa0),param_1 + 0xc0,local_res8,
                               param_1 + 0xe0,0x10);
      if (iVar1 == 0) {
        return 0;
      }
      if (local_res8[0] != 0x10) {
        return 0;
      }
      _guard_xfg_dispatch_icall_nop(param_2,(void *)(param_1 + 0xc0),param_3);
      goto LAB_143d708e9;
    }
    iVar1 = EVP_CipherUpdate(*(undefined8 *)(param_1 + 0xa0),param_2,local_res8,param_1 + 0xe0,0x10)
    ;
    if (iVar1 == 0) {
      return 0;
    }
    if (local_res8[0] != 0x10) {
      return 0;
    }
    param_2 = (void *)((longlong)param_2 + 0x10);
    param_3 = param_3 - 0x10;
    if (param_3 == 0) {
LAB_143d708e9:
      iVar1 = ctr_update(param_1,lVar4,lVar3,0,0,0,0,uVar5);
      if (iVar1 == 0) {
        return 0;
      }
      return 1;
    }
  } while( true );
}



// FUNCTION 143d70940 drbg_ctr_uninstantiate body=79 status=ok
// SIG undefined drbg_ctr_uninstantiate(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 drbg_ctr_uninstantiate(longlong param_1)

{
  EVP_CIPHER_CTX_free(*(undefined8 *)(param_1 + 0xa0));
  EVP_CIPHER_CTX_free(*(undefined8 *)(param_1 + 0xa8));
  FUN_14004ff40(param_1 + 0xa0,0x98);
  return 1;
}



// FUNCTION 143d70990 ctr_BCC_block body=169 status=ok
// SIG undefined ctr_BCC_block(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ctr_BCC_block(longlong param_1,ulonglong *param_2,ulonglong *param_3)

{
  int iVar1;
  byte *pbVar2;
  longlong lVar3;
  ulonglong uVar4;
  int local_res8 [8];
  
  local_res8[0] = 0x10;
  if (((ulonglong *)((longlong)param_3 + 0xfU) < param_2) ||
     (uVar4 = 0, (ulonglong *)((longlong)param_2 + 0xf) < param_3)) {
    uVar4 = param_3[1];
    *param_2 = *param_2 ^ *param_3;
    param_2[1] = param_2[1] ^ uVar4;
    uVar4 = 0x10;
  }
  if (uVar4 < 0x10) {
    pbVar2 = (byte *)(uVar4 + (longlong)param_2);
    lVar3 = 0x10 - uVar4;
    do {
      *pbVar2 = *pbVar2 ^ pbVar2[(longlong)param_3 - (longlong)param_2];
      pbVar2 = pbVar2 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  iVar1 = EVP_CipherUpdate(*(undefined8 *)(param_1 + 8),param_2,local_res8,param_2,0x10);
  if ((iVar1 != 0) && (local_res8[0] == 0x10)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143d70a40 ctr_BCC_blocks body=118 status=ok
// SIG undefined ctr_BCC_blocks(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ctr_BCC_blocks(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = ctr_BCC_block(param_1,param_1 + 0x68,param_2);
  if ((iVar1 == 0) || (iVar1 = ctr_BCC_block(param_1,param_1 + 0x78,param_2), iVar1 == 0)) {
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x18) != 0x10) &&
     (iVar1 = ctr_BCC_block(param_1,param_1 + 0x88,param_2), iVar1 == 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 143d70ac0 ctr_BCC_update body=283 status=ok
// SIG undefined ctr_BCC_update(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ctr_BCC_update(longlong param_1,void *param_2,ulonglong param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong _Size;
  
  if ((param_2 != (void *)0x0) && (param_3 != 0)) {
    lVar1 = *(longlong *)(param_1 + 0x60);
    if ((lVar1 != 0) && (_Size = 0x10 - lVar1, _Size <= param_3)) {
      _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x50 + lVar1),param_2,_Size);
      iVar2 = ctr_BCC_blocks(param_1,param_1 + 0x50);
      if (iVar2 == 0) {
        return 0;
      }
      param_3 = param_3 - _Size;
      *(undefined8 *)(param_1 + 0x60) = 0;
      param_2 = (void *)((longlong)param_2 + _Size);
    }
    for (; 0xf < param_3; param_3 = param_3 - 0x10) {
      iVar2 = ctr_BCC_block(param_1,param_1 + 0x68,param_2);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = ctr_BCC_block(param_1,param_1 + 0x78,param_2);
      if (iVar2 == 0) {
        return 0;
      }
      if ((*(longlong *)(param_1 + 0x18) != 0x10) &&
         (iVar2 = ctr_BCC_block(param_1,param_1 + 0x88,param_2), iVar2 == 0)) {
        return 0;
      }
      param_2 = (void *)((longlong)param_2 + 0x10);
    }
    if (param_3 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(param_1 + 0x50 + *(longlong *)(param_1 + 0x60)),param_2,param_3);
      *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + param_3;
    }
  }
  return 1;
}



// FUNCTION 143d70be0 ctr_XOR body=137 status=ok
// SIG undefined ctr_XOR(void)

void ctr_XOR(longlong param_1,longlong param_2,ulonglong param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar2 = *(ulonglong *)(param_1 + 0x18);
    uVar3 = uVar2;
    if (param_3 < uVar2) {
      uVar3 = param_3;
    }
    if (uVar3 != 0) {
      pbVar1 = (byte *)(param_1 + 0x20);
      do {
        *pbVar1 = *pbVar1 ^ pbVar1[(param_2 - param_1) + -0x20];
        pbVar1 = pbVar1 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      uVar2 = *(ulonglong *)(param_1 + 0x18);
    }
    if (uVar2 < param_3) {
      param_3 = param_3 - uVar2;
      if (0x10 < param_3) {
        param_3 = 0x10;
      }
      uVar2 = 0;
      if (param_3 != 0) {
        do {
          pbVar1 = (byte *)(param_1 + 0x40 + uVar2);
          *pbVar1 = *pbVar1 ^ *(byte *)(*(longlong *)(param_1 + 0x18) + uVar2 + param_2);
          uVar2 = uVar2 + 1;
        } while (uVar2 < param_3);
      }
    }
  }
  return;
}



// FUNCTION 143d70c70 ctr_df body=658 status=ok
// SIG undefined ctr_df(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ctr_df(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
      longlong param_6,longlong param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int local_res8 [2];
  longlong local_res10;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar6 = 1;
  local_res8[0] = 0x10;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  local_res10 = param_2;
  iVar1 = ctr_BCC_block(param_1,param_1 + 0xd,param_1 + 10);
  if (iVar1 != 0) {
    *(undefined1 *)((longlong)param_1 + 0x53) = 1;
    iVar1 = ctr_BCC_block(param_1,param_1 + 0xf);
    if (iVar1 != 0) {
      if (param_1[3] != 0x10) {
        *(undefined1 *)((longlong)param_1 + 0x53) = 2;
        iVar1 = ctr_BCC_block(param_1,param_1 + 0x11);
        if (iVar1 == 0) {
          return 0;
        }
      }
      lVar2 = 0;
      if (param_2 != 0) {
        lVar2 = param_3;
      }
      lVar4 = 0;
      if (param_4 != 0) {
        lVar4 = param_5;
      }
      lVar3 = 0;
      if (param_6 != 0) {
        lVar3 = param_7;
      }
      lVar2 = lVar3 + lVar4 + lVar2;
      *(char *)(param_1 + 10) = (char)((ulonglong)lVar2 >> 0x18);
      *(char *)((longlong)param_1 + 0x51) = (char)((ulonglong)lVar2 >> 0x10);
      *(char *)((longlong)param_1 + 0x52) = (char)((ulonglong)lVar2 >> 8);
      *(char *)((longlong)param_1 + 0x53) = (char)lVar2;
      *(undefined2 *)((longlong)param_1 + 0x54) = 0;
      *(undefined1 *)((longlong)param_1 + 0x56) = 0;
      *(char *)((longlong)param_1 + 0x57) = *(char *)(param_1 + 3) + '\x10';
      param_1[0xc] = 8;
      iVar1 = ctr_BCC_update(param_1,local_res10);
      if ((((iVar1 != 0) && (iVar1 = ctr_BCC_update(param_1,param_4,lVar4), iVar1 != 0)) &&
          (iVar1 = ctr_BCC_update(param_1,param_6,lVar3), iVar1 != 0)) &&
         (iVar1 = ctr_BCC_update(param_1,&DAT_146837b80,1), iVar1 != 0)) {
        lVar2 = param_1[0xc];
        if (lVar2 != 0) {
          _guard_xfg_dispatch_icall_nop((void *)((longlong)param_1 + lVar2 + 0x50),0,0x10 - lVar2);
          iVar1 = ctr_BCC_blocks(param_1,param_1 + 10);
          if (iVar1 == 0) {
            return 0;
          }
        }
        uVar5 = 0;
        iVar1 = FUN_143cf75a0(*param_1,param_1[2],0,param_1 + 0xd,0,CONCAT44(uVar6,1));
        if ((((iVar1 != 0) &&
             (iVar1 = EVP_CipherUpdate(*param_1,param_1 + 0xd,local_res8,
                                       (longlong)param_1 + param_1[3] + 0x68,CONCAT44(uVar5,0x10)),
             iVar1 != 0)) &&
            ((local_res8[0] == 0x10 &&
             ((iVar1 = EVP_CipherUpdate(*param_1,param_1 + 0xf,local_res8,param_1 + 0xd,0x10),
              iVar1 != 0 && (local_res8[0] == 0x10)))))) &&
           ((param_1[3] == 0x10 ||
            ((iVar1 = EVP_CipherUpdate(*param_1,param_1 + 0x11,local_res8,param_1 + 0xf,0x10),
             iVar1 != 0 && (local_res8[0] == 0x10)))))) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143d70f10 ctr_update body=519 status=ok
// SIG undefined ctr_update(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ctr_update(longlong param_1,longlong param_2,longlong param_3,longlong param_4,undefined8 param_5,
          longlong param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int local_res8 [2];
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 in_stack_ffffffffffffffc0;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
  uVar8 = 0x143d70f32;
  puVar1 = (undefined8 *)(param_1 + 0xa0);
  local_res8[0] = 0x10;
  pcVar2 = (char *)(param_1 + 0xef);
  iVar4 = 0;
  pcVar3 = pcVar2;
  do {
    *pcVar3 = *pcVar3 + '\x01';
    if (*pcVar3 != '\0') break;
    iVar4 = iVar4 + 1;
    pcVar3 = pcVar3 + -1;
  } while (iVar4 < 0x10);
  uVar5 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20),0x10);
  iVar4 = EVP_CipherUpdate(*puVar1,param_1 + 0xc0,local_res8,param_1 + 0xe0,uVar5);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (iVar4 == 0) {
    return 0;
  }
  if (local_res8[0] != 0x10) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0xb8) != 0x10) {
    iVar4 = 0;
    pcVar3 = pcVar2;
    do {
      *pcVar3 = *pcVar3 + '\x01';
      if (*pcVar3 != '\0') break;
      iVar4 = iVar4 + 1;
      pcVar3 = pcVar3 + -1;
    } while (iVar4 < 0x10);
    uVar5 = CONCAT44(uVar6,0x10);
    iVar4 = EVP_CipherUpdate(*puVar1,param_1 + 0xd0,local_res8,param_1 + 0xe0,uVar5);
    uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (iVar4 == 0) {
      return 0;
    }
    if (local_res8[0] != 0x10) {
      return 0;
    }
  }
  iVar4 = 0;
  do {
    *pcVar2 = *pcVar2 + '\x01';
    if (*pcVar2 != '\0') break;
    iVar4 = iVar4 + 1;
    pcVar2 = pcVar2 + -1;
  } while (iVar4 < 0x10);
  iVar4 = EVP_CipherUpdate(*puVar1,param_1 + 0xe0,local_res8,param_1 + 0xe0,CONCAT44(uVar6,0x10));
  if (iVar4 == 0) {
    return 0;
  }
  if (local_res8[0] != 0x10) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0xb8) == 0x18) {
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0xd8);
  }
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    if (((param_2 != 0) || (param_6 != 0)) || (param_4 != 0)) {
      iVar4 = ctr_df(puVar1,param_2,param_3,param_6,param_7,param_4,param_5,uVar8);
      uVar7 = (undefined4)((ulonglong)param_4 >> 0x20);
      if (iVar4 == 0) {
        return 0;
      }
    }
    if (param_3 == 0) goto LAB_143d710c8;
    param_5 = *(undefined8 *)(param_1 + 0x88);
    param_4 = param_1 + 0x108;
  }
  else {
    ctr_XOR(puVar1,param_2,param_3);
  }
  ctr_XOR(puVar1,param_4,param_5);
LAB_143d710c8:
  iVar4 = FUN_143cf75a0(*puVar1,*(undefined8 *)(param_1 + 0xb0),0,param_1 + 0xc0,0,CONCAT44(uVar7,1)
                       );
  if (iVar4 == 0) {
    return 0;
  }
  return 1;
}



// FUNCTION 143d71120 drbg_ctr_init body=349 status=ok
// SIG undefined drbg_ctr_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 drbg_ctr_init(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  
  uVar10 = 1;
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0x388) {
    lVar4 = 0x10;
    uVar2 = EVP_aes_256_cbc();
  }
  else if (iVar1 == 0x389) {
    lVar4 = 0x18;
    uVar2 = EVP_aes_256_cbc();
  }
  else {
    if (iVar1 != 0x38a) {
      return 0;
    }
    lVar4 = 0x20;
    uVar2 = EVP_aes_256_cbc();
  }
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  *(undefined ***)(param_1 + 0x138) = &PTR_drbg_ctr_instantiate_146837b88;
  *(longlong *)(param_1 + 0xb8) = lVar4;
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    lVar3 = EVP_CIPHER_CTX_new();
    *(longlong *)(param_1 + 0xa0) = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  uVar7 = lVar4 + 0x10;
  *(int *)(param_1 + 0x28) = (int)lVar4 * 8;
  *(ulonglong *)(param_1 + 0x88) = uVar7;
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    lVar4 = *(longlong *)(param_1 + 0xa8);
    if (lVar4 == 0) {
      lVar4 = EVP_CIPHER_CTX_new();
      *(longlong *)(param_1 + 0xa8) = lVar4;
      if (lVar4 == 0) {
        return 0;
      }
    }
    iVar1 = FUN_143cf75a0(lVar4,*(undefined8 *)(param_1 + 0xb0),0,&DAT_145d8f558,0,
                          CONCAT44(uVar10,1));
    if (iVar1 == 0) {
      return 0;
    }
    uVar9 = *(ulonglong *)(param_1 + 0xb8);
    uVar5 = uVar9 >> 1;
    uVar7 = uVar9 << 7;
    uVar6 = uVar5 << 7;
    uVar8 = 0x1000;
  }
  else {
    uVar5 = 0;
    uVar6 = uVar5;
    uVar8 = uVar7;
    uVar9 = uVar7;
  }
  *(ulonglong *)(param_1 + 0x38) = uVar9;
  *(ulonglong *)(param_1 + 0x48) = uVar5;
  *(ulonglong *)(param_1 + 0x40) = uVar7;
  *(ulonglong *)(param_1 + 0x50) = uVar6;
  *(ulonglong *)(param_1 + 0x58) = uVar8;
  *(ulonglong *)(param_1 + 0x60) = uVar8;
  *(undefined8 *)(param_1 + 0x30) = 0x10000;
  return 1;
}



// FUNCTION 143d71280 desx_cbc_init_key body=95 status=ok
// SIG undefined desx_cbc_init_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 desx_cbc_init_key(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FTcpDeserializedMessage::GetMessage();
  DES_set_key_unchecked(param_2,uVar1);
  lVar2 = FTcpDeserializedMessage::GetMessage(param_1);
  *(undefined8 *)(lVar2 + 0x80) = *(undefined8 *)(param_2 + 8);
  lVar2 = FTcpDeserializedMessage::GetMessage(param_1);
  *(undefined8 *)(lVar2 + 0x88) = *(undefined8 *)(param_2 + 0x10);
  return 1;
}



// FUNCTION 143d712e0 desx_cbc_cipher body=367 status=ok
// SIG undefined desx_cbc_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 desx_cbc_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x143d712ff;
  uVar1 = 1;
  if (0x3fffffff < param_4) {
    uVar7 = param_4 >> 0x1e;
    param_4 = param_4 + uVar7 * -0x40000000;
    do {
      uVar2 = (undefined4)((ulonglong)uVar8 >> 0x20);
      uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      lVar3 = FTcpDeserializedMessage::GetMessage(param_1);
      lVar4 = FTcpDeserializedMessage::GetMessage(param_1);
      uVar5 = IMessageToken::ToText(param_1);
      uVar6 = FTcpDeserializedMessage::GetMessage(param_1);
      uVar8 = CONCAT44(uVar2,uVar1);
      FUN_143da8b40(param_3,param_2,0x40000000,uVar6,uVar5,lVar4 + 0x80,lVar3 + 0x88,uVar8);
      uVar1 = (undefined4)((ulonglong)uVar8 >> 0x20);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (param_4 != 0) {
    uVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
    lVar3 = FTcpDeserializedMessage::GetMessage(param_1);
    lVar4 = FTcpDeserializedMessage::GetMessage(param_1);
    uVar8 = IMessageToken::ToText(param_1);
    uVar5 = FTcpDeserializedMessage::GetMessage(param_1);
    FUN_143da8b40(param_3,param_2,param_4 & 0xffffffff,uVar5,uVar8,lVar4 + 0x80,lVar3 + 0x88,
                  CONCAT44(uVar1,uVar2));
  }
  return 1;
}



// FUNCTION 143d71450 FUN_143d71450 body=8 status=ok
// SIG undefined FUN_143d71450(void)

undefined * FUN_143d71450(void)

{
  return &DAT_145d8f580;
}



// FUNCTION 143d71460 bf_init_key body=79 status=ok
// SIG undefined bf_init_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 bf_init_key(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = UVariantSet::GetNumVariants();
  uVar2 = FTcpDeserializedMessage::GetMessage(param_1);
  BF_set_key(uVar2,uVar1,param_2);
  return 1;
}



// FUNCTION 143d714b0 FUN_143d714b0 body=254 status=ok
// SIG undefined FUN_143d714b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_143d714b0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143d714cf;
  uVar1 = 1;
  if (0x3fffffff < param_4) {
    uVar5 = param_4 >> 0x1e;
    param_4 = param_4 + uVar5 * -0x40000000;
    do {
      uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      uVar3 = IMessageToken::ToText(param_1);
      uVar4 = FTcpDeserializedMessage::GetMessage(param_1);
      uVar6 = CONCAT44(uVar2,uVar1);
      FUN_143da95b0(param_3,param_2,0x40000000,uVar4,uVar3,uVar6);
      uVar1 = (undefined4)((ulonglong)uVar6 >> 0x20);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (param_4 != 0) {
    uVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
    uVar6 = IMessageToken::ToText(param_1);
    uVar3 = FTcpDeserializedMessage::GetMessage(param_1);
    FUN_143da95b0(param_3,param_2,param_4 & 0xffffffff,uVar3,uVar6,CONCAT44(uVar1,uVar2));
  }
  return 1;
}



// FUNCTION 143d715b0 bf_cfb64_cipher body=267 status=ok
// SIG undefined bf_cfb64_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 bf_cfb64_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 local_res20 [2];
  
  if (param_4 == 0) {
    return 1;
  }
  uVar5 = param_4;
  if (0x3fffffff < param_4) {
    uVar5 = 0x40000000;
  }
  do {
    if (param_4 < uVar5) {
      return 1;
    }
    local_res20[0] = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
    uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
    uVar2 = IMessageToken::ToText(param_1);
    uVar3 = FTcpDeserializedMessage::GetMessage(param_1);
    BF_cfb64_encrypt(param_3,param_2,uVar5 & 0xffffffff,uVar3,uVar2,local_res20,uVar1);
    FArchiveState::SetGameNetVer(param_1,local_res20[0]);
    param_4 = param_4 - uVar5;
    param_3 = param_3 + uVar5;
    param_2 = param_2 + uVar5;
    uVar4 = param_4;
    if (uVar5 <= param_4) {
      uVar4 = uVar5;
    }
    uVar5 = uVar4;
  } while (param_4 != 0);
  return 1;
}



// FUNCTION 143d716c0 bf_ecb_cipher body=166 status=ok
// SIG undefined bf_ecb_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 bf_ecb_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  lVar2 = FHardwareCursor::GetHandle();
  uVar4 = (ulonglong)*(int *)(lVar2 + 4);
  if (uVar4 <= param_4) {
    lVar2 = param_3;
    do {
      uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      uVar3 = FTcpDeserializedMessage::GetMessage(param_1);
      BF_ecb_encrypt(lVar2,(param_2 - param_3) + lVar2,uVar3,uVar1);
      lVar2 = lVar2 + uVar4;
    } while ((ulonglong)(lVar2 - param_3) <= param_4 - uVar4);
  }
  return 1;
}



// FUNCTION 143d71770 bf_ofb_cipher body=279 status=ok
// SIG undefined bf_ofb_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 bf_ofb_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 local_res20 [2];
  
  if (0x3fffffff < param_4) {
    uVar3 = param_4 >> 0x1e;
    param_4 = param_4 + uVar3 * -0x40000000;
    do {
      local_res20[0] = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
      uVar1 = IMessageToken::ToText(param_1);
      uVar2 = FTcpDeserializedMessage::GetMessage(param_1);
      BF_ofb64_encrypt(param_3,param_2,0x40000000,uVar2,uVar1,local_res20);
      FArchiveState::SetGameNetVer(param_1,local_res20[0]);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (param_4 != 0) {
    local_res20[0] = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
    uVar1 = IMessageToken::ToText(param_1);
    uVar2 = FTcpDeserializedMessage::GetMessage(param_1);
    BF_ofb64_encrypt(param_3,param_2,param_4 & 0xffffffff,uVar2,uVar1,local_res20);
    FArchiveState::SetGameNetVer(param_1,local_res20[0]);
  }
  return 1;
}



// FUNCTION 143d71890 FUN_143d71890 body=8 status=ok
// SIG undefined FUN_143d71890(void)

undefined * FUN_143d71890(void)

{
  return &DAT_145d8f5e0;
}



// FUNCTION 143d718a0 FUN_143d718a0 body=8 status=ok
// SIG undefined FUN_143d718a0(void)

undefined * FUN_143d718a0(void)

{
  return &DAT_145d8f640;
}



// FUNCTION 143d718b0 FUN_143d718b0 body=8 status=ok
// SIG undefined FUN_143d718b0(void)

undefined * FUN_143d718b0(void)

{
  return &DAT_145d8f700;
}



// FUNCTION 143d718c0 FUN_143d718c0 body=8 status=ok
// SIG undefined FUN_143d718c0(void)

undefined * FUN_143d718c0(void)

{
  return &DAT_145d8f6a0;
}



// FUNCTION 143d718d0 bf_init_key body=79 status=ok
// SIG undefined bf_init_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 bf_init_key(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = UVariantSet::GetNumVariants();
  uVar2 = FTcpDeserializedMessage::GetMessage(param_1);
  FUN_143daa830(uVar2,uVar1,param_2);
  return 1;
}



// FUNCTION 143d71920 FUN_143d71920 body=254 status=ok
// SIG undefined FUN_143d71920(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_143d71920(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143d7193f;
  uVar1 = 1;
  if (0x3fffffff < param_4) {
    uVar5 = param_4 >> 0x1e;
    param_4 = param_4 + uVar5 * -0x40000000;
    do {
      uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      uVar3 = IMessageToken::ToText(param_1);
      uVar4 = FTcpDeserializedMessage::GetMessage(param_1);
      uVar6 = CONCAT44(uVar2,uVar1);
      FUN_143dac080(param_3,param_2,0x40000000,uVar4,uVar3,uVar6);
      uVar1 = (undefined4)((ulonglong)uVar6 >> 0x20);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (param_4 != 0) {
    uVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
    uVar6 = IMessageToken::ToText(param_1);
    uVar3 = FTcpDeserializedMessage::GetMessage(param_1);
    FUN_143dac080(param_3,param_2,param_4 & 0xffffffff,uVar3,uVar6,CONCAT44(uVar1,uVar2));
  }
  return 1;
}



// FUNCTION 143d71a20 FUN_143d71a20 body=267 status=ok
// SIG undefined FUN_143d71a20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_143d71a20(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 local_res20 [2];
  
  if (param_4 == 0) {
    return 1;
  }
  uVar5 = param_4;
  if (0x3fffffff < param_4) {
    uVar5 = 0x40000000;
  }
  do {
    if (param_4 < uVar5) {
      return 1;
    }
    local_res20[0] = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
    uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
    uVar2 = IMessageToken::ToText(param_1);
    uVar3 = FTcpDeserializedMessage::GetMessage(param_1);
    FUN_143dacf50(param_3,param_2,uVar5 & 0xffffffff,uVar3,uVar2,local_res20,uVar1);
    FArchiveState::SetGameNetVer(param_1,local_res20[0]);
    param_4 = param_4 - uVar5;
    param_3 = param_3 + uVar5;
    param_2 = param_2 + uVar5;
    uVar4 = param_4;
    if (uVar5 <= param_4) {
      uVar4 = uVar5;
    }
    uVar5 = uVar4;
  } while (param_4 != 0);
  return 1;
}



// FUNCTION 143d71b30 bf_ecb_cipher body=166 status=ok
// SIG undefined bf_ecb_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 bf_ecb_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  lVar2 = FHardwareCursor::GetHandle();
  uVar4 = (ulonglong)*(int *)(lVar2 + 4);
  if (uVar4 <= param_4) {
    lVar2 = param_3;
    do {
      uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      uVar3 = FTcpDeserializedMessage::GetMessage(param_1);
      BF_ecb_encrypt(lVar2,(param_2 - param_3) + lVar2,uVar3,uVar1);
      lVar2 = lVar2 + uVar4;
    } while ((ulonglong)(lVar2 - param_3) <= param_4 - uVar4);
  }
  return 1;
}



// FUNCTION 143d71be0 FUN_143d71be0 body=279 status=ok
// SIG undefined FUN_143d71be0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_143d71be0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 local_res20 [2];
  
  if (0x3fffffff < param_4) {
    uVar3 = param_4 >> 0x1e;
    param_4 = param_4 + uVar3 * -0x40000000;
    do {
      local_res20[0] = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
      uVar1 = IMessageToken::ToText(param_1);
      uVar2 = FTcpDeserializedMessage::GetMessage(param_1);
      FUN_143dad180(param_3,param_2,0x40000000,uVar2,uVar1,local_res20);
      FArchiveState::SetGameNetVer(param_1,local_res20[0]);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (param_4 != 0) {
    local_res20[0] = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
    uVar1 = IMessageToken::ToText(param_1);
    uVar2 = FTcpDeserializedMessage::GetMessage(param_1);
    FUN_143dad180(param_3,param_2,param_4 & 0xffffffff,uVar2,uVar1,local_res20);
    FArchiveState::SetGameNetVer(param_1,local_res20[0]);
  }
  return 1;
}



// FUNCTION 143d71d00 FUN_143d71d00 body=8 status=ok
// SIG undefined FUN_143d71d00(void)

undefined * FUN_143d71d00(void)

{
  return &DAT_145d8f760;
}



// FUNCTION 143d71d10 FUN_143d71d10 body=8 status=ok
// SIG undefined FUN_143d71d10(void)

undefined * FUN_143d71d10(void)

{
  return &DAT_145d8f7c0;
}



// FUNCTION 143d71d20 FUN_143d71d20 body=8 status=ok
// SIG undefined FUN_143d71d20(void)

undefined * FUN_143d71d20(void)

{
  return &DAT_145d8f880;
}



// FUNCTION 143d71d30 FUN_143d71d30 body=8 status=ok
// SIG undefined FUN_143d71d30(void)

undefined * FUN_143d71d30(void)

{
  return &DAT_145d8f820;
}



// FUNCTION 143d71d40 sm4_init_key body=45 status=ok
// SIG undefined sm4_init_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 sm4_init_key(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FTcpDeserializedMessage::GetMessage();
  SM4_set_key(param_2,uVar1);
  return 1;
}



// FUNCTION 143d71d70 sm4_cbc_cipher body=340 status=ok
// SIG undefined sm4_cbc_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 sm4_cbc_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  if (0x3fffffff < param_4) {
    uVar4 = param_4 >> 0x1e;
    param_4 = param_4 + uVar4 * -0x40000000;
    do {
      iVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      uVar2 = IMessageToken::ToText(param_1);
      uVar3 = FTcpDeserializedMessage::GetMessage(param_1);
      if (iVar1 == 0) {
        CRYPTO_cbc128_decrypt(param_3,param_2,0x40000000,uVar3,uVar2,FUN_143dad370);
      }
      else {
        CRYPTO_cbc128_encrypt();
      }
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (param_4 != 0) {
    iVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
    uVar2 = IMessageToken::ToText(param_1);
    uVar3 = FTcpDeserializedMessage::GetMessage(param_1);
    if (iVar1 == 0) {
      CRYPTO_cbc128_decrypt(param_3,param_2,(longlong)(int)param_4,uVar3,uVar2,FUN_143dad370);
    }
    else {
      CRYPTO_cbc128_encrypt();
    }
  }
  return 1;
}



// FUNCTION 143d71ed0 aria_128_cfb8_cipher body=287 status=ok
// SIG undefined aria_128_cfb8_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
aria_128_cfb8_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 local_res20 [2];
  
  if (param_4 == 0) {
    return 1;
  }
  uVar5 = param_4;
  if (0x3fffffff < param_4) {
    uVar5 = 0x40000000;
  }
  do {
    if (param_4 < uVar5) {
      return 1;
    }
    local_res20[0] = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
    uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
    uVar2 = IMessageToken::ToText(param_1);
    uVar3 = FTcpDeserializedMessage::GetMessage(param_1);
    CRYPTO_cfb128_encrypt
              (param_3,param_2,(longlong)(int)uVar5,uVar3,uVar2,local_res20,uVar1,FUN_143dae110);
    FArchiveState::SetGameNetVer(param_1,local_res20[0]);
    param_4 = param_4 - uVar5;
    param_3 = param_3 + uVar5;
    param_2 = param_2 + uVar5;
    uVar4 = param_4;
    if (uVar5 <= param_4) {
      uVar4 = uVar5;
    }
    uVar5 = uVar4;
  } while (param_4 != 0);
  return 1;
}



// FUNCTION 143d71ff0 sm4_ecb_cipher body=174 status=ok
// SIG undefined sm4_ecb_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 sm4_ecb_cipher(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  lVar2 = FHardwareCursor::GetHandle();
  uVar4 = (ulonglong)*(int *)(lVar2 + 4);
  if (uVar4 <= param_4) {
    lVar2 = param_3;
    do {
      iVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_1);
      uVar3 = FTcpDeserializedMessage::GetMessage(param_1);
      if (iVar1 == 0) {
        FUN_143dad370(lVar2,(param_2 - param_3) + lVar2,uVar3);
      }
      else {
        FUN_143dae110();
      }
      lVar2 = lVar2 + uVar4;
    } while ((ulonglong)(lVar2 - param_3) <= param_4 - uVar4);
  }
  return 1;
}



// FUNCTION 143d720a0 FUN_143d720a0 body=314 status=ok
// SIG undefined FUN_143d720a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_143d720a0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 local_res20 [2];
  undefined8 uVar4;
  
  uVar4 = 0x143d720b7;
  if (0x3fffffff < param_4) {
    uVar3 = param_4 >> 0x1e;
    param_4 = param_4 + uVar3 * -0x40000000;
    do {
      local_res20[0] = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
      uVar1 = IMessageToken::ToText(param_1);
      uVar2 = FTcpDeserializedMessage::GetMessage(param_1);
      CRYPTO_ofb128_encrypt(param_3,param_2,0x40000000,uVar2,uVar1,local_res20,FUN_143dae110);
      FArchiveState::SetGameNetVer(param_1,local_res20[0]);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (param_4 != 0) {
    local_res20[0] = FOnlineVoiceImpl::GetNumLocalTalkers(param_1);
    uVar1 = IMessageToken::ToText(param_1);
    uVar2 = FTcpDeserializedMessage::GetMessage(param_1);
    CRYPTO_ofb128_encrypt
              (param_3,param_2,(longlong)(int)param_4,uVar2,uVar1,local_res20,FUN_143dae110,uVar4);
    FArchiveState::SetGameNetVer(param_1,local_res20[0]);
  }
  return 1;
}



// FUNCTION 143d721e0 FUN_143d721e0 body=178 status=ok
// SIG undefined FUN_143d721e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_143d721e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_28 [2];
  undefined8 uStack_20;
  
  uStack_20 = 0x143d721fe;
  local_28[0] = FOnlineVoiceImpl::GetNumLocalTalkers();
  uVar1 = FTcpDeserializedMessage::GetMessage(param_1);
  uVar2 = UListView::OnItemSelectionChanged(param_1);
  uVar3 = IMessageToken::ToText(param_1);
  CRYPTO_ctr128_encrypt(param_3,param_2,param_4,uVar1,uVar3,uVar2,local_28,FUN_143dae110);
  FArchiveState::SetGameNetVer(param_1,local_28[0]);
  return 1;
}



// FUNCTION 143d722a0 FUN_143d722a0 body=8 status=ok
// SIG undefined FUN_143d722a0(void)

undefined * FUN_143d722a0(void)

{
  return &DAT_145d8f8e0;
}



// FUNCTION 143d722b0 FUN_143d722b0 body=8 status=ok
// SIG undefined FUN_143d722b0(void)

undefined * FUN_143d722b0(void)

{
  return &DAT_145d8f940;
}



// FUNCTION 143d722c0 FUN_143d722c0 body=8 status=ok
// SIG undefined FUN_143d722c0(void)

undefined * FUN_143d722c0(void)

{
  return &DAT_145d8fa60;
}



// FUNCTION 143d722d0 FUN_143d722d0 body=8 status=ok
// SIG undefined FUN_143d722d0(void)

undefined * FUN_143d722d0(void)

{
  return &DAT_145d8fa00;
}



// FUNCTION 143d722e0 FUN_143d722e0 body=8 status=ok
// SIG undefined FUN_143d722e0(void)

undefined * FUN_143d722e0(void)

{
  return &DAT_145d8f9a0;
}



// FUNCTION 143d722f0 FUN_143d722f0 body=54 status=ok
// SIG undefined FUN_143d722f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d722f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  MD4_Update(uVar1,param_2,param_3);
  return;
}



// FUNCTION 143d72330 FUN_143d72330 body=39 status=ok
// SIG undefined FUN_143d72330(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d72330(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  MD4_Final(param_2,uVar1);
  return;
}



// FUNCTION 143d72360 FUN_143d72360 body=8 status=ok
// SIG undefined FUN_143d72360(void)

undefined * FUN_143d72360(void)

{
  return &DAT_145d8fac0;
}



// FUNCTION 143d72370 cmac_key_free body=30 status=ok
// SIG undefined cmac_key_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cmac_key_free(void)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  BLAKE2b_Init(uVar1);
  return;
}



// FUNCTION 143d72390 FUN_143d72390 body=54 status=ok
// SIG undefined FUN_143d72390(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d72390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  BLAKE2b_Update(uVar1,param_2,param_3);
  return;
}



// FUNCTION 143d723d0 FUN_143d723d0 body=39 status=ok
// SIG undefined FUN_143d723d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d723d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  BLAKE2b_Final(param_2,uVar1);
  return;
}



// FUNCTION 143d72400 FUN_143d72400 body=8 status=ok
// SIG undefined FUN_143d72400(void)

undefined * FUN_143d72400(void)

{
  return &DAT_145d8fb10;
}



// FUNCTION 143d72410 cmac_key_free body=30 status=ok
// SIG undefined cmac_key_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cmac_key_free(void)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  BLAKE2s_Init(uVar1);
  return;
}



// FUNCTION 143d72430 FUN_143d72430 body=54 status=ok
// SIG undefined FUN_143d72430(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d72430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  BLAKE2s_Update(uVar1,param_2,param_3);
  return;
}



// FUNCTION 143d72470 FUN_143d72470 body=39 status=ok
// SIG undefined FUN_143d72470(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d72470(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  BLAKE2s_Final(param_2,uVar1);
  return;
}



// FUNCTION 143d724a0 FUN_143d724a0 body=8 status=ok
// SIG undefined FUN_143d724a0(void)

undefined * FUN_143d724a0(void)

{
  return &DAT_145d8fb60;
}



// FUNCTION 143d724b0 sha3_init body=24 status=ok
// SIG undefined sha3_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void sha3_init(undefined8 param_1)

{
  init(param_1,6);
  return;
}



// FUNCTION 143d724d0 shake_init body=24 status=ok
// SIG undefined shake_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void shake_init(undefined8 param_1)

{
  init(param_1,0x1f);
  return;
}



// FUNCTION 143d724f0 sha3_update body=258 status=ok
// SIG undefined sha3_update(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 sha3_update(longlong param_1,void *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  size_t _Size;
  void *_Dst;
  ulonglong _Size_00;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar2 = *(ulonglong *)(lVar1 + 200);
  if (param_3 != 0) {
    lVar3 = *(longlong *)(lVar1 + 0xd8);
    if (lVar3 != 0) {
      _Size_00 = uVar2 - lVar3;
      _Dst = (void *)(lVar1 + 0xe0 + lVar3);
      if (param_3 < _Size_00) {
        _guard_xfg_dispatch_icall_nop(_Dst,param_2,param_3);
        *(longlong *)(lVar1 + 0xd8) = *(longlong *)(lVar1 + 0xd8) + param_3;
        return 1;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,param_2,_Size_00);
      param_2 = (void *)((longlong)param_2 + _Size_00);
      param_3 = param_3 - _Size_00;
      FUN_1400c5d60(lVar1,lVar1 + 0xe0,uVar2,uVar2);
      *(undefined8 *)(lVar1 + 0xd8) = 0;
    }
    _Size = param_3;
    if (uVar2 <= param_3) {
      _Size = FUN_1400c5d60(lVar1,param_2,param_3,uVar2);
    }
    if (_Size != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar1 + 0xe0),(void *)((longlong)param_2 + (param_3 - _Size)),_Size);
      *(size_t *)(lVar1 + 0xd8) = _Size;
    }
  }
  return 1;
}



// FUNCTION 143d72600 sha3_final body=163 status=ok
// SIG undefined sha3_final(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 sha3_final(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  lVar4 = *(longlong *)(lVar3 + 200);
  lVar1 = *(longlong *)(lVar3 + 0xd8) + lVar3;
  _guard_xfg_dispatch_icall_nop((void *)(lVar1 + 0xe0),0,lVar4 - *(longlong *)(lVar3 + 0xd8));
  *(undefined1 *)(lVar1 + 0xe0) = *(undefined1 *)(lVar3 + 0x188);
  pbVar2 = (byte *)(lVar4 + 0xdf + lVar3);
  *pbVar2 = *pbVar2 | 0x80;
  FUN_1400c5d60(lVar3,lVar3 + 0xe0,lVar4,lVar4);
  FUN_1400c5e40(lVar3,param_2,*(undefined8 *)(lVar3 + 0xd0),lVar4);
  return 1;
}



// FUNCTION 143d726d0 FUN_143d726d0 body=8 status=ok
// SIG undefined FUN_143d726d0(void)

undefined * FUN_143d726d0(void)

{
  return &DAT_145d8fbb0;
}



// FUNCTION 143d726e0 FUN_143d726e0 body=8 status=ok
// SIG undefined FUN_143d726e0(void)

undefined * FUN_143d726e0(void)

{
  return &DAT_145d8fc00;
}



// FUNCTION 143d726f0 FUN_143d726f0 body=8 status=ok
// SIG undefined FUN_143d726f0(void)

undefined * FUN_143d726f0(void)

{
  return &DAT_145d8fc50;
}



// FUNCTION 143d72700 FUN_143d72700 body=8 status=ok
// SIG undefined FUN_143d72700(void)

undefined * FUN_143d72700(void)

{
  return &DAT_145d8fca0;
}



// FUNCTION 143d72710 FUN_143d72710 body=8 status=ok
// SIG undefined FUN_143d72710(void)

undefined * FUN_143d72710(void)

{
  return &DAT_145d8fcf0;
}



// FUNCTION 143d72720 EVP_shake256 body=8 status=ok
// SIG undefined EVP_shake256(void)

undefined * EVP_shake256(void)

{
  return &DAT_145d8fd40;
}



// FUNCTION 143d72730 init body=140 status=ok
// SIG undefined init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool init(longlong *param_1,undefined1 param_2)

{
  void *_Dst;
  ulonglong uVar1;
  
  _Dst = (void *)param_1[3];
  uVar1 = (ulonglong)*(int *)(*param_1 + 0x38);
  if (uVar1 < 0xa9) {
    _guard_xfg_dispatch_icall_nop(_Dst,0,200);
    *(undefined8 *)((longlong)_Dst + 0xd8) = 0;
    *(ulonglong *)((longlong)_Dst + 200) = uVar1;
    *(longlong *)((longlong)_Dst + 0xd0) = (longlong)*(int *)(*param_1 + 8);
    *(undefined1 *)((longlong)_Dst + 0x188) = param_2;
  }
  return uVar1 < 0xa9;
}



// FUNCTION 143d727c0 cmac_key_free body=30 status=ok
// SIG undefined cmac_key_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cmac_key_free(void)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  FUN_143db4160(uVar1);
  return;
}



// FUNCTION 143d727e0 FUN_143d727e0 body=54 status=ok
// SIG undefined FUN_143d727e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d727e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  MDC2_Update(uVar1,param_2,param_3);
  return;
}



// FUNCTION 143d72820 FUN_143d72820 body=39 status=ok
// SIG undefined FUN_143d72820(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d72820(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  MDC2_Final(param_2,uVar1);
  return;
}



// FUNCTION 143d72850 FUN_143d72850 body=8 status=ok
// SIG undefined FUN_143d72850(void)

undefined * FUN_143d72850(void)

{
  return &DAT_145d8fd90;
}



// FUNCTION 143d72860 FUN_143d72860 body=54 status=ok
// SIG undefined FUN_143d72860(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d72860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  RIPEMD160_Update(uVar1,param_2,param_3);
  return;
}



// FUNCTION 143d728a0 FUN_143d728a0 body=39 status=ok
// SIG undefined FUN_143d728a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d728a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  RIPEMD160_Final(param_2,uVar1);
  return;
}



// FUNCTION 143d728d0 FUN_143d728d0 body=8 status=ok
// SIG undefined FUN_143d728d0(void)

undefined * FUN_143d728d0(void)

{
  return &DAT_145d8fde0;
}



// FUNCTION 143d728e0 cmac_key_free body=30 status=ok
// SIG undefined cmac_key_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cmac_key_free(void)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  WHIRLPOOL_Init(uVar1);
  return;
}



// FUNCTION 143d72900 FUN_143d72900 body=54 status=ok
// SIG undefined FUN_143d72900(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d72900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  WHIRLPOOL_Update(uVar1,param_2,param_3);
  return;
}



// FUNCTION 143d72940 FUN_143d72940 body=39 status=ok
// SIG undefined FUN_143d72940(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d72940(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  WHIRLPOOL_Final(param_2,uVar1);
  return;
}



// FUNCTION 143d72970 FUN_143d72970 body=8 status=ok
// SIG undefined FUN_143d72970(void)

undefined * FUN_143d72970(void)

{
  return &DAT_145d8fe30;
}



// FUNCTION 143d72980 cmac_key_free body=30 status=ok
// SIG undefined cmac_key_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cmac_key_free(void)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  FUN_143db90c0(uVar1);
  return;
}



// FUNCTION 143d729a0 FUN_143d729a0 body=54 status=ok
// SIG undefined FUN_143d729a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d729a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  sm3_update(uVar1,param_2,param_3);
  return;
}



// FUNCTION 143d729e0 FUN_143d729e0 body=39 status=ok
// SIG undefined FUN_143d729e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d729e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUniqueNetIdString::GetBytes();
  sm3_final(param_2,uVar1);
  return;
}



// FUNCTION 143d72a10 EVP_sm3 body=8 status=ok
// SIG undefined EVP_sm3(void)

undefined * EVP_sm3(void)

{
  return &DAT_145d8fe80;
}



// FUNCTION 143d72a20 ENGINE_load_builtin_engines body=34 status=ok
// SIG undefined ENGINE_load_builtin_engines(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ENGINE_load_builtin_engines(void)

{
  OPENSSL_cpuid_setup();
  OPENSSL_init_crypto(0x7600,0);
  return;
}



// FUNCTION 143d72a50 ENGINE_add body=445 status=ok
// SIG undefined ENGINE_add(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_add(longlong *param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x143d72a60;
  if (param_1 == (longlong *)0x0) {
    uVar8 = 0xd6;
    uVar9 = 0x43;
LAB_143d72bec:
    ERR_put_error(0x26,0x69,uVar9,"crypto\\engine\\eng_list.c",uVar8,0x143d72a60);
    return 0;
  }
  if ((*param_1 == 0) || (param_1[1] == 0)) {
    uVar8 = 0xda;
    uVar9 = 0x6c;
    goto LAB_143d72bec;
  }
  CRYPTO_THREAD_read_lock(DAT_146bcd570);
  bVar7 = false;
  plVar6 = DAT_146bcb9e8;
  if (DAT_146bcb9e8 == (longlong *)0x0) {
    if (DAT_146bcb9f0 == (longlong *)0x0) {
      DAT_146bcb9e8 = param_1;
      param_1[0x16] = 0;
      engine_cleanup_add_last(engine_list_cleanup);
LAB_143d72ba5:
      param_1[0x17] = 0;
      *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + 1;
      DAT_146bcb9f0 = param_1;
      CRYPTO_THREAD_unlock(DAT_146bcd570);
      return 1;
    }
    uVar8 = 0x45;
  }
  else {
    do {
      if (bVar7) goto LAB_143d72b19;
      pcVar3 = (char *)*plVar6;
      lVar4 = *param_1 - (longlong)pcVar3;
      do {
        cVar1 = *pcVar3;
        cVar2 = pcVar3[lVar4];
        if (cVar1 != cVar2) break;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      plVar6 = (longlong *)plVar6[0x17];
      bVar7 = cVar1 == cVar2;
    } while (plVar6 != (longlong *)0x0);
    if (cVar1 == cVar2) {
LAB_143d72b19:
      uVar8 = 0x3f;
      uVar5 = 0x67;
      goto LAB_143d72b38;
    }
    if ((DAT_146bcb9f0 != (longlong *)0x0) && (*(longlong *)((longlong)DAT_146bcb9f0 + 0xb8) == 0))
    {
      *(longlong **)((longlong)DAT_146bcb9f0 + 0xb8) = param_1;
      param_1[0x16] = (longlong)DAT_146bcb9f0;
      goto LAB_143d72ba5;
    }
    uVar8 = 0x51;
  }
  uVar5 = 0x6e;
LAB_143d72b38:
  ERR_put_error(0x26,0x78,uVar5,"crypto\\engine\\eng_list.c",uVar8,uVar9);
  ERR_put_error(0x26,0x69,0x6e,"crypto\\engine\\eng_list.c",0xdf);
  CRYPTO_THREAD_unlock(DAT_146bcd570);
  return 0;
}



// FUNCTION 143d72c10 ENGINE_by_id body=816 status=ok
// SIG undefined ENGINE_by_id(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * ENGINE_by_id(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  
  uVar11 = 0x143d72c1c;
  if (param_1 == (char *)0x0) {
    ERR_put_error(0x26,0x6a,0x43,"crypto\\engine\\eng_list.c",0x11a,0x143d72c1c);
    return (longlong *)0x0;
  }
  iVar3 = CRYPTO_THREAD_run_once(&DAT_146bcb6f8,FUN_143d29020);
  plVar9 = (longlong *)0x0;
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = DAT_146bcb6fc;
  }
  if (iVar4 == 0) {
    ERR_put_error(0x26,0x6a,0x41,"crypto\\engine\\eng_list.c",0x11e,uVar11);
    return (longlong *)0x0;
  }
  CRYPTO_THREAD_read_lock(DAT_146bcd570);
  for (plVar10 = DAT_146bcb9e8; plVar8 = plVar10, plVar10 != (longlong *)0x0;
      plVar10 = (longlong *)plVar10[0x17]) {
    pcVar5 = param_1;
    do {
      cVar1 = *pcVar5;
      cVar2 = pcVar5[*plVar10 - (longlong)param_1];
      if (cVar1 != cVar2) break;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    if (cVar1 == cVar2) {
      if ((*(byte *)(plVar10 + 0x13) & 4) == 0) {
        *(int *)((longlong)plVar10 + 0x9c) = *(int *)((longlong)plVar10 + 0x9c) + 1;
      }
      else {
        plVar6 = (longlong *)ENGINE_new();
        plVar8 = plVar9;
        if (plVar6 != (longlong *)0x0) {
          *plVar6 = *plVar10;
          plVar6[1] = plVar10[1];
          plVar6[2] = plVar10[2];
          plVar6[3] = plVar10[3];
          plVar6[4] = plVar10[4];
          plVar6[5] = plVar10[5];
          plVar6[6] = plVar10[6];
          plVar6[7] = plVar10[7];
          plVar6[8] = plVar10[8];
          plVar6[9] = plVar10[9];
          plVar6[0xb] = plVar10[0xb];
          plVar6[0xc] = plVar10[0xc];
          plVar6[0xd] = plVar10[0xd];
          plVar6[0xe] = plVar10[0xe];
          plVar6[0xf] = plVar10[0xf];
          plVar6[0x10] = plVar10[0x10];
          plVar6[0x12] = plVar10[0x12];
          *(int *)(plVar6 + 0x13) = (int)plVar10[0x13];
          plVar8 = plVar6;
        }
      }
      break;
    }
  }
  uVar11 = DAT_146bcd570;
  CRYPTO_THREAD_unlock();
  if (plVar8 != (longlong *)0x0) {
    return plVar8;
  }
  do {
    plVar10 = (longlong *)((longlong)plVar9 + 1);
    if (param_1[(longlong)plVar9] != (char)plVar9[0x28bafe3e]) {
      pwVar7 = AK::MemoryMgr::GetPoolName((long)uVar11);
      if (((int)pwVar7 != 0) || (pcVar5 = getenv("OPENSSL_ENGINES"), pcVar5 == (char *)0x0)) {
        pcVar5 = "C:\\Windows\\lib\\engines-1_1";
      }
      plVar8 = (longlong *)ENGINE_by_id("dynamic");
      if ((((plVar8 != (longlong *)0x0) &&
           (iVar4 = ENGINE_ctrl_cmd_string(plVar8,&DAT_145d7f3b0,param_1,0), iVar4 != 0)) &&
          (iVar4 = ENGINE_ctrl_cmd_string(plVar8,"DIR_LOAD",&DAT_145d82bc8,0), iVar4 != 0)) &&
         (((iVar4 = ENGINE_ctrl_cmd_string(plVar8,"DIR_ADD",pcVar5,0), iVar4 != 0 &&
           (iVar4 = ENGINE_ctrl_cmd_string(plVar8,"LIST_ADD",&DAT_145cc5558,0), iVar4 != 0)) &&
          (iVar4 = ENGINE_ctrl_cmd_string(plVar8,&DAT_145d7f4dc,0,0), iVar4 != 0)))) {
        return plVar8;
      }
      break;
    }
    plVar8 = (longlong *)0x0;
    plVar9 = plVar10;
  } while (plVar10 != (longlong *)&DAT_00000008);
  ENGINE_free(plVar8);
  ERR_put_error(0x26,0x6a,0x74,"crypto\\engine\\eng_list.c",0x14f);
  ERR_add_error_data(2,&DAT_145d8ff14,param_1);
  return (longlong *)0x0;
}



// FUNCTION 143d72f40 ENGINE_get_first body=155 status=ok
// SIG undefined ENGINE_get_first(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ENGINE_get_first(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = CRYPTO_THREAD_run_once(&DAT_146bcb6f8,FUN_143d29020);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = DAT_146bcb6fc;
  }
  if (iVar3 == 0) {
    ERR_put_error(0x26,0xc3,0x41,"crypto\\engine\\eng_list.c",0x87);
    return 0;
  }
  CRYPTO_THREAD_read_lock(DAT_146bcd570);
  lVar1 = DAT_146bcb9e8;
  if (DAT_146bcb9e8 != 0) {
    *(int *)(DAT_146bcb9e8 + 0x9c) = *(int *)(DAT_146bcb9e8 + 0x9c) + 1;
  }
  CRYPTO_THREAD_unlock(DAT_146bcd570);
  return lVar1;
}



// FUNCTION 143d72fe0 ENGINE_get_next body=138 status=ok
// SIG undefined ENGINE_get_next(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ENGINE_get_next(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    ERR_put_error(0x26,0x73,0x43,"crypto\\engine\\eng_list.c",0xad,0x143d72fec);
    return 0;
  }
  CRYPTO_THREAD_read_lock(DAT_146bcd570);
  lVar1 = *(longlong *)(param_1 + 0xb8);
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x9c) = *(int *)(lVar1 + 0x9c) + 1;
  }
  CRYPTO_THREAD_unlock(DAT_146bcd570);
  ENGINE_free(param_1);
  return lVar1;
}



// FUNCTION 143d73070 engine_list_cleanup body=330 status=ok
// SIG undefined engine_list_cleanup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void engine_list_cleanup(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143d7307c;
  lVar2 = DAT_146bcb9e8;
  do {
    while( true ) {
      if (lVar2 == 0) {
        DAT_146bcb9e8 = lVar2;
        return;
      }
      DAT_146bcb9e8 = lVar2;
      if (lVar2 != 0) break;
      ERR_put_error(0x26,0x7b,0x43,"crypto\\engine\\eng_list.c",0xeb,uVar4);
      lVar2 = DAT_146bcb9e8;
    }
    CRYPTO_THREAD_read_lock(DAT_146bcd570);
    lVar3 = DAT_146bcb9e8;
    for (lVar1 = DAT_146bcb9e8; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0xb8)) {
      if (lVar1 == lVar2) {
        if (lVar1 != 0) {
          if (*(longlong *)(lVar2 + 0xb8) != 0) {
            *(undefined8 *)(*(longlong *)(lVar2 + 0xb8) + 0xb0) = *(undefined8 *)(lVar2 + 0xb0);
          }
          if (*(longlong *)(lVar2 + 0xb0) != 0) {
            *(undefined8 *)(*(longlong *)(lVar2 + 0xb0) + 0xb8) = *(undefined8 *)(lVar2 + 0xb8);
          }
          if (lVar3 == lVar2) {
            DAT_146bcb9e8 = *(longlong *)(lVar2 + 0xb8);
          }
          if (DAT_146bcb9f0 == lVar2) {
            DAT_146bcb9f0 = *(longlong *)(lVar2 + 0xb0);
          }
          engine_free_util(lVar2,0);
          goto LAB_143d73123;
        }
        break;
      }
    }
    ERR_put_error(0x26,0x79,0x69,"crypto\\engine\\eng_list.c",0x70,uVar4);
    ERR_put_error(0x26,0x7b,0x6e,"crypto\\engine\\eng_list.c",0xf0);
LAB_143d73123:
    CRYPTO_THREAD_unlock(DAT_146bcd570);
    lVar2 = DAT_146bcb9e8;
  } while( true );
}



// FUNCTION 143d731c0 FUN_143d731c0 body=32 status=ok
// SIG undefined FUN_143d731c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d731c0(void)

{
  engine_table_select(&DAT_146bcb9f8,1);
  return;
}



// FUNCTION 143d731e0 ENGINE_register_DSA body=80 status=ok
// SIG undefined ENGINE_register_DSA(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_register_DSA(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    uVar1 = engine_table_register
                      (&DAT_146bcb9f8,engine_unregister_all_DH,param_1,&DAT_145d8ff18,1,0,
                       0x143d731ea);
    return uVar1;
  }
  return 1;
}



// FUNCTION 143d73230 ENGINE_set_default_DSA body=80 status=ok
// SIG undefined ENGINE_set_default_DSA(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_set_default_DSA(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    uVar1 = engine_table_register
                      (&DAT_146bcb9f8,engine_unregister_all_DH,param_1,&DAT_145d8ff18,1,1,
                       0x143d7323a);
    return uVar1;
  }
  return 1;
}



// FUNCTION 143d73280 engine_unregister_all_DH body=29 status=ok
// SIG undefined engine_unregister_all_DH(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void engine_unregister_all_DH(void)

{
  engine_table_cleanup(&DAT_146bcb9f8);
  return;
}



// FUNCTION 143d732a0 FUN_143d732a0 body=32 status=ok
// SIG undefined FUN_143d732a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143d732a0(void)

{
  engine_table_select(&DAT_146bcba00,1);
  return;
}



// FUNCTION 143d732c0 ENGINE_register_EC body=80 status=ok
// SIG undefined ENGINE_register_EC(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_register_EC(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    uVar1 = engine_table_register
                      (&DAT_146bcba00,engine_unregister_all_DH,param_1,&DAT_145d8ff1c,1,0,
                       0x143d732ca);
    return uVar1;
  }
  return 1;
}



// FUNCTION 143d73310 ENGINE_set_EC body=10 status=ok
// SIG undefined ENGINE_set_EC(void)

undefined8 ENGINE_set_EC(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return 1;
}



// FUNCTION 143d73320 ENGINE_set_default_EC body=80 status=ok
// SIG undefined ENGINE_set_default_EC(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ENGINE_set_default_EC(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    uVar1 = engine_table_register
                      (&DAT_146bcba00,engine_unregister_all_DH,param_1,&DAT_145d8ff1c,1,1,
                       0x143d7332a);
    return uVar1;
  }
  return 1;
}



// FUNCTION 143d73370 engine_unregister_all_DH body=29 status=ok
// SIG undefined engine_unregister_all_DH(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void engine_unregister_all_DH(void)

{
  engine_table_cleanup(&DAT_146bcba00);
  return;
}



// FUNCTION 143d73390 dsa_do_sign body=792 status=ok
// SIG undefined dsa_do_sign(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * dsa_do_sign(undefined8 param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uVar10 = 0x143d733aa;
  lVar4 = 0;
  local_res18 = 0;
  plVar2 = (longlong *)0x0;
  if (((*(longlong *)(param_3 + 8) == 0) || (*(longlong *)(param_3 + 0x10) == 0)) ||
     (*(longlong *)(param_3 + 0x18) == 0)) {
    uVar5 = 0x65;
  }
  else {
    plVar2 = (longlong *)DSA_SIG_new();
    if (plVar2 != (longlong *)0x0) {
      lVar3 = BN_new();
      *plVar2 = lVar3;
      lVar3 = BN_new();
      plVar2[1] = lVar3;
      if (((*plVar2 != 0) && (lVar3 != 0)) && (lVar4 = BN_CTX_new(), lVar4 != 0)) {
        local_res20 = BN_CTX_get(lVar4);
        uVar5 = BN_CTX_get(lVar4);
        uVar6 = BN_CTX_get(lVar4);
        lVar3 = BN_CTX_get(lVar4);
        if (lVar3 != 0) {
          uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),param_2);
          uVar8 = param_1;
          iVar1 = dsa_sign_setup(param_3,lVar4,&local_res18,plVar2,param_1,uVar10);
          uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
          if (iVar1 != 0) {
            while( true ) {
              iVar1 = BN_num_bits(*(undefined8 *)(param_3 + 0x10));
              if ((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3 < param_2) {
                iVar1 = BN_num_bits(*(undefined8 *)(param_3 + 0x10));
                param_2 = (int)((iVar1 + 7 >> 0x1f & 7U) + iVar1 + 7) >> 3;
              }
              lVar7 = BN_bin2bn(param_1,param_2,local_res20);
              uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
              if (lVar7 == 0) break;
              do {
                iVar1 = BN_num_bits(*(undefined8 *)(param_3 + 0x10));
                iVar1 = BN_priv_rand(uVar5,iVar1 + -1,0xffffffff);
                uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
                if (iVar1 == 0) goto LAB_143d73647;
                iVar1 = BN_is_zero(uVar5);
              } while (iVar1 != 0);
              BN_set_flags(uVar5,4);
              BN_set_flags(uVar6,4);
              BN_set_flags(lVar3,4);
              lVar7 = lVar4;
              iVar1 = BN_mod_mul(lVar3,uVar5,*(undefined8 *)(param_3 + 0x28),
                                 *(undefined8 *)(param_3 + 0x10),lVar4);
              uVar9 = (undefined4)((ulonglong)lVar7 >> 0x20);
              if (iVar1 == 0) break;
              lVar7 = lVar4;
              iVar1 = BN_mod_mul(lVar3,lVar3,*plVar2,*(undefined8 *)(param_3 + 0x10),lVar4);
              uVar9 = (undefined4)((ulonglong)lVar7 >> 0x20);
              if (iVar1 == 0) break;
              lVar7 = lVar4;
              iVar1 = BN_mod_mul(uVar6,uVar5,local_res20,*(undefined8 *)(param_3 + 0x10),lVar4);
              uVar9 = (undefined4)((ulonglong)lVar7 >> 0x20);
              if ((iVar1 == 0) ||
                 (iVar1 = BN_mod_add_quick(plVar2[1],lVar3,uVar6,*(undefined8 *)(param_3 + 0x10)),
                 iVar1 == 0)) break;
              lVar7 = lVar4;
              iVar1 = BN_mod_mul(plVar2[1],plVar2[1],local_res18,*(undefined8 *)(param_3 + 0x10),
                                 lVar4);
              uVar9 = (undefined4)((ulonglong)lVar7 >> 0x20);
              if ((iVar1 == 0) ||
                 (lVar7 = BN_mod_inverse(uVar5,uVar5,*(undefined8 *)(param_3 + 0x10),lVar4),
                 lVar7 == 0)) break;
              lVar7 = lVar4;
              iVar1 = BN_mod_mul(plVar2[1],plVar2[1],uVar5,*(undefined8 *)(param_3 + 0x10),lVar4);
              uVar9 = (undefined4)((ulonglong)lVar7 >> 0x20);
              if (iVar1 == 0) break;
              iVar1 = BN_is_zero(*plVar2);
              uVar9 = (undefined4)((ulonglong)uVar10 >> 0x20);
              if ((iVar1 == 0) && (iVar1 = BN_is_zero(plVar2[1]), iVar1 == 0)) goto LAB_143d73673;
              uVar10 = CONCAT44(uVar9,param_2);
              uVar8 = param_1;
              iVar1 = dsa_sign_setup(param_3,lVar4,&local_res18,plVar2,param_1,uVar10);
              uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
              if (iVar1 == 0) break;
            }
          }
        }
      }
    }
LAB_143d73647:
    uVar5 = 3;
  }
  ERR_put_error(10,0x70,uVar5,"crypto\\dsa\\dsa_ossl.c",CONCAT44(uVar9,0xa0),uVar10);
  DSA_SIG_free(plVar2);
  plVar2 = (longlong *)0x0;
LAB_143d73673:
  BN_CTX_free(lVar4);
  BN_clear_free(local_res18);
  return plVar2;
}



// FUNCTION 143d736b0 dsa_sign_setup_no_digest body=34 status=ok
// SIG undefined dsa_sign_setup_no_digest(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dsa_sign_setup_no_digest(void)

{
  dsa_sign_setup();
  return;
}



// FUNCTION 143d736e0 dsa_do_verify body=953 status=ok
// SIG undefined dsa_do_verify(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong dsa_do_verify(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined8 local_res20;
  undefined8 in_stack_ffffffffffffff78;
  undefined8 uVar13;
  undefined8 local_58 [3];
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  uVar9 = 0;
  uVar10 = 0;
  if (((*(longlong *)(param_4 + 8) == 0) || (*(longlong *)(param_4 + 0x10) == 0)) ||
     (*(longlong *)(param_4 + 0x18) == 0)) {
    ERR_put_error(10,0x71,0x65,"crypto\\dsa\\dsa_ossl.c",0x121);
    return 0xffffffff;
  }
  iVar2 = BN_num_bits();
  if (((iVar2 - 0xa0U & 0xffffff9f) != 0) || (iVar2 == 0xc0)) {
    uVar13 = CONCAT44(uVar12,0x128);
    uVar12 = 0x66;
LAB_143d7377b:
    ERR_put_error(10,0x71,uVar12,"crypto\\dsa\\dsa_ossl.c",uVar13);
    return 0xffffffff;
  }
  iVar3 = BN_num_bits(*(undefined8 *)(param_4 + 8));
  if (10000 < iVar3) {
    uVar13 = CONCAT44(uVar12,0x12d);
    uVar12 = 0x67;
    goto LAB_143d7377b;
  }
  lVar4 = BN_new();
  lVar5 = BN_new();
  lVar6 = BN_new();
  lVar7 = BN_CTX_new();
  if (((lVar4 == 0) || (lVar5 == 0)) || ((lVar6 == 0 || (lVar7 == 0)))) goto LAB_143d739d6;
  ECDSA_SIG_get0(param_3,&local_res20,local_58);
  iVar3 = BN_is_zero(local_res20);
  uVar11 = uVar9;
  if (iVar3 != 0) goto LAB_143d739fb;
  iVar3 = BN_is_negative(local_res20);
  if (iVar3 != 0) goto LAB_143d739fb;
  iVar3 = BN_ucmp(local_res20,*(undefined8 *)(param_4 + 0x10));
  if (-1 < iVar3) goto LAB_143d739fb;
  iVar3 = BN_is_zero(local_58[0]);
  uVar11 = uVar10;
  if (iVar3 != 0) goto LAB_143d739fb;
  iVar3 = BN_is_negative(local_58[0]);
  if (iVar3 != 0) goto LAB_143d739fb;
  iVar3 = BN_ucmp(local_58[0],*(undefined8 *)(param_4 + 0x10));
  if (-1 < iVar3) goto LAB_143d739fb;
  lVar8 = BN_mod_inverse(lVar5,local_58[0],*(undefined8 *)(param_4 + 0x10),lVar7);
  if (lVar8 != 0) {
    if (iVar2 >> 3 < param_2) {
      param_2 = iVar2 >> 3;
    }
    lVar8 = BN_bin2bn(param_1,param_2,lVar4);
    if (lVar8 != 0) {
      lVar8 = lVar7;
      iVar2 = BN_mod_mul(lVar4,lVar4,lVar5,*(undefined8 *)(param_4 + 0x10),lVar7);
      uVar12 = (undefined4)((ulonglong)lVar8 >> 0x20);
      if (iVar2 != 0) {
        lVar8 = lVar7;
        iVar2 = BN_mod_mul(lVar5,local_res20,lVar5,*(undefined8 *)(param_4 + 0x10),lVar7);
        uVar12 = (undefined4)((ulonglong)lVar8 >> 0x20);
        if (iVar2 != 0) {
          if ((*(byte *)(param_4 + 0x30) & 1) != 0) {
            uVar9 = BN_MONT_CTX_set_locked
                              (param_4 + 0x38,*(undefined8 *)(param_4 + 0x60),
                               *(undefined8 *)(param_4 + 8),lVar7);
            if (uVar9 == 0) goto LAB_143d739d6;
          }
          uVar13 = *(undefined8 *)(param_4 + 0x20);
          pcVar1 = *(code **)(*(longlong *)(param_4 + 0x50) + 0x20);
          if (pcVar1 == (code *)0x0) {
            lVar8 = lVar5;
            iVar2 = BN_mod_exp2_mont(lVar6,*(undefined8 *)(param_4 + 0x18),lVar4,uVar13,lVar5,
                                     *(undefined8 *)(param_4 + 8),lVar7,uVar9);
            uVar12 = (undefined4)((ulonglong)lVar8 >> 0x20);
          }
          else {
            iVar2 = (*pcVar1)(param_4,lVar6,*(undefined8 *)(param_4 + 0x18),lVar4,uVar13,lVar5,
                              *(undefined8 *)(param_4 + 8),lVar7,uVar9);
            uVar12 = (undefined4)((ulonglong)uVar13 >> 0x20);
          }
          if (iVar2 != 0) {
            lVar8 = lVar7;
            iVar2 = BN_div(0,lVar4,lVar6,*(undefined8 *)(param_4 + 0x10),lVar7);
            uVar12 = (undefined4)((ulonglong)lVar8 >> 0x20);
            if (iVar2 != 0) {
              iVar2 = BN_ucmp(lVar4,local_res20);
              uVar11 = (ulonglong)(iVar2 == 0);
              goto LAB_143d739fb;
            }
          }
        }
      }
    }
  }
LAB_143d739d6:
  ERR_put_error(10,0x71,3,"crypto\\dsa\\dsa_ossl.c",CONCAT44(uVar12,0x179));
  uVar11 = 0xffffffff;
LAB_143d739fb:
  BN_CTX_free(lVar7);
  BN_free(lVar4);
  BN_free(lVar5);
  BN_free(lVar6);
  return uVar11;
}



// FUNCTION 143d73aa0 FUN_143d73aa0 body=8 status=ok
// SIG undefined FUN_143d73aa0(void)

undefined ** FUN_143d73aa0(void)

{
  return &PTR_s_OpenSSL_DSA_method_146837bb0;
}



// FUNCTION 143d73ab0 DSA_get_default_method body=8 status=ok
// SIG undefined DSA_get_default_method(void)

undefined * DSA_get_default_method(void)

{
  return PTR_PTR_146837c10;
}



// FUNCTION 143d73ac0 dsa_sign_setup body=794 status=ok
// SIG undefined dsa_sign_setup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
dsa_sign_setup(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
              longlong param_5,int param_6)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong in_stack_ffffffffffffff98;
  undefined4 uVar11;
  undefined8 uVar10;
  
  uVar9 = *param_4;
  lVar7 = 0;
  if (((*(longlong *)(param_1 + 8) == 0) || (*(longlong *)(param_1 + 0x10) == 0)) ||
     (*(longlong *)(param_1 + 0x18) == 0)) {
    ERR_put_error(10,0x6b,0x65,"crypto\\dsa\\dsa_ossl.c",0xba);
    return 0;
  }
  lVar4 = BN_new();
  lVar5 = BN_new();
  lVar6 = BN_new();
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  if (((lVar4 != 0) && (lVar5 != 0)) && (lVar6 != 0)) {
    lVar7 = param_2;
    if (param_2 == 0) {
      lVar7 = BN_CTX_new();
      uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
      if (lVar7 == 0) goto LAB_143d73d43;
    }
    iVar2 = BN_num_bits(*(undefined8 *)(param_1 + 0x10));
    iVar3 = BN_set_bit(lVar4,iVar2);
    uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
    if (iVar3 != 0) {
      iVar3 = BN_set_bit(lVar5,iVar2);
      uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
      if (iVar3 != 0) {
        iVar3 = BN_set_bit(lVar6,iVar2);
        uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
        if (iVar3 != 0) {
          do {
            if (param_5 == 0) {
              iVar3 = BN_priv_rand_range(lVar4,*(undefined8 *)(param_1 + 0x10));
            }
            else {
              in_stack_ffffffffffffff98 = (longlong)param_6;
              iVar3 = BN_generate_dsa_nonce
                                (lVar4,*(undefined8 *)(param_1 + 0x10),
                                 *(undefined8 *)(param_1 + 0x28),param_5,(longlong)param_6,lVar7);
            }
            uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
            if (iVar3 == 0) goto LAB_143d73d43;
            iVar3 = BN_is_zero(lVar4);
            uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
          } while (iVar3 != 0);
          BN_set_flags(lVar4,4);
          if ((((*(byte *)(param_1 + 0x30) & 1) == 0) ||
              (lVar8 = BN_MONT_CTX_set_locked
                                 (param_1 + 0x38,*(undefined8 *)(param_1 + 0x60),
                                  *(undefined8 *)(param_1 + 8),lVar7), lVar8 != 0)) &&
             ((iVar3 = BN_add(lVar5,lVar4,*(undefined8 *)(param_1 + 0x10)), iVar3 != 0 &&
              (iVar3 = BN_add(lVar6,lVar5,*(undefined8 *)(param_1 + 0x10)), iVar3 != 0)))) {
            iVar3 = BN_num_bits(lVar5);
            lVar8 = lVar6;
            if (iVar2 < iVar3) {
              lVar8 = lVar5;
            }
            lVar8 = BN_copy(lVar4,lVar8);
            if (lVar8 != 0) {
              uVar10 = *(undefined8 *)(param_1 + 8);
              pcVar1 = *(code **)(*(longlong *)(param_1 + 0x50) + 0x28);
              if (pcVar1 == (code *)0x0) {
                lVar8 = lVar7;
                iVar2 = BN_mod_exp_mont(uVar9,*(undefined8 *)(param_1 + 0x18),lVar4,uVar10,lVar7,
                                        *(undefined8 *)(param_1 + 0x38));
                uVar11 = (undefined4)((ulonglong)lVar8 >> 0x20);
              }
              else {
                iVar2 = (*pcVar1)(param_1,uVar9,*(undefined8 *)(param_1 + 0x18),lVar4,uVar10,lVar7,
                                  *(undefined8 *)(param_1 + 0x38));
                uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
              }
              if (iVar2 != 0) {
                lVar8 = lVar7;
                iVar2 = BN_div(0,uVar9,uVar9,*(undefined8 *)(param_1 + 0x10),lVar7);
                uVar11 = (undefined4)((ulonglong)lVar8 >> 0x20);
                if ((iVar2 != 0) &&
                   (lVar8 = BN_mod_inverse(0,lVar4,*(undefined8 *)(param_1 + 0x10),lVar7),
                   lVar8 != 0)) {
                  BN_clear_free(*param_3);
                  *param_3 = lVar8;
                  uVar9 = 1;
                  goto LAB_143d73d63;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_143d73d43:
  uVar9 = 0;
  ERR_put_error(10,0x6b,3,"crypto\\dsa\\dsa_ossl.c",CONCAT44(uVar11,0x10f));
LAB_143d73d63:
  if (lVar7 != param_2) {
    BN_CTX_free(lVar7);
  }
  BN_clear_free(lVar4);
  BN_clear_free(lVar5);
  BN_clear_free(lVar6);
  return uVar9;
}



// FUNCTION 143d73de0 EVP_CIPHER_meth_free body=32 status=ok
// SIG undefined EVP_CIPHER_meth_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_CIPHER_meth_free(undefined8 param_1)

{
  CRYPTO_free(param_1,"crypto\\evp\\cmeth_lib.c",0x28);
  return;
}



// FUNCTION 143d73e00 EVP_CIPHER_meth_new body=79 status=ok
// SIG undefined EVP_CIPHER_meth_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_CIPHER_meth_new(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x58,"crypto\\evp\\cmeth_lib.c",0x12);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
  }
  return;
}



// FUNCTION 143d73e50 EVP_CIPHER_meth_set_flags body=9 status=ok
// SIG undefined EVP_CIPHER_meth_set_flags(void)

undefined8 EVP_CIPHER_meth_set_flags(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return 1;
}



// FUNCTION 143d73e60 EVP_CIPHER_meth_set_impl_ctx_size body=9 status=ok
// SIG undefined EVP_CIPHER_meth_set_impl_ctx_size(void)

undefined8 EVP_CIPHER_meth_set_impl_ctx_size(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return 1;
}



// FUNCTION 143d73e70 RSA_meth_free body=68 status=ok
// SIG undefined RSA_meth_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_meth_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    CRYPTO_free(*param_1,"crypto\\rsa\\rsa_meth.c",0x23);
    CRYPTO_free(param_1,"crypto\\rsa\\rsa_meth.c",0x24);
  }
  return;
}



// FUNCTION 143d73ec0 RSA_meth_new body=180 status=ok
// SIG undefined RSA_meth_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * RSA_meth_new(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143d73ed5;
  plVar1 = (longlong *)CRYPTO_zalloc(0x78,"crypto\\rsa\\rsa_meth.c",0x10);
  if (plVar1 != (longlong *)0x0) {
    *(undefined4 *)(plVar1 + 9) = param_2;
    lVar2 = CRYPTO_strdup(param_1,"crypto\\rsa\\rsa_meth.c",0x15);
    *plVar1 = lVar2;
    if (lVar2 != 0) {
      return plVar1;
    }
    CRYPTO_free(plVar1,"crypto\\rsa\\rsa_meth.c",0x19);
  }
  ERR_put_error(4,0xa2,0x41,"crypto\\rsa\\rsa_meth.c",0x1c,uVar3);
  return (longlong *)0x0;
}



// FUNCTION 143d73f80 RSA_meth_set_pub_enc body=10 status=ok
// SIG undefined RSA_meth_set_pub_enc(void)

undefined8 RSA_meth_set_pub_enc(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return 1;
}



// FUNCTION 143d73f90 DSA_meth_free body=68 status=ok
// SIG undefined DSA_meth_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DSA_meth_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    CRYPTO_free(*param_1,"crypto\\dsa\\dsa_meth.c",0x2b);
    CRYPTO_free(param_1,"crypto\\dsa\\dsa_meth.c",0x2c);
  }
  return;
}



// FUNCTION 143d73fe0 DSA_meth_new body=178 status=ok
// SIG undefined DSA_meth_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * DSA_meth_new(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143d73ff5;
  plVar1 = (longlong *)CRYPTO_zalloc(0x60,"crypto\\dsa\\dsa_meth.c",0x18);
  if (plVar1 != (longlong *)0x0) {
    *(undefined4 *)(plVar1 + 8) = param_2;
    lVar2 = CRYPTO_strdup(param_1,"crypto\\dsa\\dsa_meth.c",0x1d);
    *plVar1 = lVar2;
    if (lVar2 != 0) {
      return plVar1;
    }
    CRYPTO_free(plVar1,"crypto\\dsa\\dsa_meth.c",0x21);
  }
  ERR_put_error(10,0x80,0x41,"crypto\\dsa\\dsa_meth.c",0x24,uVar3);
  return (longlong *)0x0;
}



// FUNCTION 143d740a0 X509_aux_print body=733 status=ok
// SIG undefined X509_aux_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 X509_aux_print(undefined8 param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined1 *local_b0;
  int local_a8 [2];
  undefined8 local_a0;
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_a0 = param_2;
  iVar2 = X509_trusted(param_2);
  if (iVar2 != 0) {
    lVar4 = X509_get0_trust_objects(param_2);
    lVar5 = X509_get0_reject_objects(param_2);
    iVar2 = 0;
    if (lVar4 == 0) {
      BIO_printf(param_1,"%*sNo Trusted Uses.\n",param_3,&DAT_143f3f584);
    }
    else {
      local_b0 = &DAT_143f3f584;
      local_b8 = CONCAT44(local_b8._4_4_,param_3 + 2);
      bVar1 = true;
      BIO_printf(param_1,"%*sTrusted Uses:\n%*s",param_3,&DAT_143f3f584);
      iVar3 = OPENSSL_sk_num(lVar4);
      iVar9 = iVar2;
      if (0 < iVar3) {
        do {
          if (bVar1) {
            bVar1 = false;
          }
          else {
            BIO_puts(param_1,&DAT_145cbbc74);
          }
          uVar6 = OPENSSL_sk_value(lVar4,iVar9);
          OBJ_obj2txt(local_98,0x50,uVar6);
          BIO_puts(param_1,local_98);
          iVar9 = iVar9 + 1;
          iVar3 = OPENSSL_sk_num(lVar4);
        } while (iVar9 < iVar3);
      }
      BIO_puts(param_1,&DAT_143fc48d8);
    }
    if (lVar5 == 0) {
      BIO_printf(param_1,"%*sNo Rejected Uses.\n",param_3,&DAT_143f3f584);
    }
    else {
      local_b0 = &DAT_143f3f584;
      local_b8 = CONCAT44(local_b8._4_4_,param_3 + 2);
      bVar1 = true;
      BIO_printf(param_1,"%*sRejected Uses:\n%*s",param_3,&DAT_143f3f584);
      iVar3 = OPENSSL_sk_num(lVar5);
      iVar9 = iVar2;
      if (0 < iVar3) {
        do {
          if (bVar1) {
            bVar1 = false;
          }
          else {
            BIO_puts(param_1,&DAT_145cbbc74);
          }
          uVar6 = OPENSSL_sk_value(lVar5,iVar9);
          OBJ_obj2txt(local_98,0x50,uVar6);
          BIO_puts(param_1,local_98);
          iVar9 = iVar9 + 1;
          iVar3 = OPENSSL_sk_num(lVar5);
        } while (iVar9 < iVar3);
      }
      BIO_puts(param_1,&DAT_143fc48d8);
    }
    uVar6 = local_a0;
    lVar4 = X509_alias_get0(local_a0,0);
    if (lVar4 != 0) {
      local_b8 = lVar4;
      BIO_printf(param_1,"%*sAlias: %s\n",param_3,&DAT_143f3f584);
    }
    puVar7 = (undefined1 *)X509_keyid_get0(uVar6,local_a8);
    if (puVar7 != (undefined1 *)0x0) {
      BIO_printf(param_1,"%*sKey Id: ",param_3,&DAT_143f3f584);
      if (0 < local_a8[0]) {
        do {
          puVar8 = (undefined2 *)&DAT_143f3f584;
          if (iVar2 != 0) {
            puVar8 = &DAT_145cc3708;
          }
          BIO_printf(param_1,"%s%02X",puVar8,*puVar7);
          iVar2 = iVar2 + 1;
          puVar7 = puVar7 + 1;
        } while (iVar2 < local_a8[0]);
      }
      BIO_write(param_1,&DAT_143fc48d8,1);
    }
  }
  return 1;
}



// FUNCTION 143d74380 X509_print_ex body=1533 status=ok
// SIG undefined X509_print_ex(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong X509_print_ex(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  char *pcVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar16;
  uint local_48;
  undefined4 uStack_44;
  longlong local_40;
  
  local_40 = 0x143d7439a;
  uVar9 = 0;
  uVar12 = 0;
  uVar14 = param_3 & 0xf0000;
  uVar8 = 0xc;
  if (uVar14 != 0x40000) {
    uVar8 = uVar9;
  }
  if (param_3 == 0) {
    uVar8 = 0x10;
  }
  local_48 = uVar14;
  uVar13 = uVar9;
  if (((param_4 & 1) == 0) &&
     ((iVar3 = BIO_write(param_1,"Certificate:\n",0xd), iVar3 < 1 ||
      (iVar3 = BIO_write(param_1,"    Data:\n",10), iVar3 < 1)))) goto LAB_143d74956;
  if ((param_4 & 2) == 0) {
    uVar4 = X509_get_version(param_2);
    if (uVar4 < 3) {
      in_stack_ffffffffffffffa8 =
           CONCAT44((int)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20),uVar4);
      iVar3 = BIO_printf(param_1,"%8sVersion: %ld (0x%lx)\n",&DAT_143f3f584,uVar4 + 1,
                         in_stack_ffffffffffffffa8);
    }
    else {
      iVar3 = BIO_printf(param_1,"%8sVersion: Unknown (%ld)\n",&DAT_143f3f584,uVar4);
    }
    if (iVar3 < 1) goto LAB_143d74956;
  }
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  if ((param_4 & 4) == 0) {
    iVar3 = BIO_write(param_1,"        Serial Number:",0x16);
    if (iVar3 < 1) goto LAB_143d74956;
    puVar5 = (uint *)UE4Function_Private::
                     TFunction_OwnedObject<<lambda_6ee2cf6eb29fb3eaf224d7c8f92aa15b>,0>::GetAddress
                               (param_2);
    if ((int)*puVar5 < 5) {
      ERR_set_mark();
      iVar3 = ASN1_INTEGER_get(puVar5);
      ERR_pop_to_mark();
    }
    else {
      iVar3 = -1;
    }
    uVar4 = puVar5[1];
    if (iVar3 == -1) {
      pcVar11 = "";
      if (uVar4 == 0x102) {
        pcVar11 = " (Negative)";
      }
      iVar3 = BIO_printf(param_1,"\n%12s%s",&DAT_143f3f584,pcVar11);
      uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
      uVar13 = uVar12;
      if (iVar3 < 1) goto LAB_143d74956;
      uVar4 = *puVar5;
      uVar13 = uVar9;
      uVar14 = local_48;
      if (0 < (int)uVar4) {
        do {
          uVar15 = (int)uVar13 + 1;
          uVar6 = 0x3a;
          if (uVar15 == uVar4) {
            uVar6 = 10;
          }
          iVar3 = BIO_printf(param_1,"%02x%c",*(undefined1 *)(*(longlong *)(puVar5 + 2) + uVar9),
                             uVar6);
          uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
          uVar13 = uVar12;
          if (iVar3 < 1) goto LAB_143d74956;
          uVar4 = *puVar5;
          uVar9 = uVar9 + 1;
          uVar13 = (ulonglong)uVar15;
          uVar14 = local_48;
        } while ((int)uVar15 < (int)uVar4);
      }
    }
    else {
      puVar10 = &DAT_145cc6554;
      if (uVar4 != 0x102) {
        puVar10 = &DAT_143f3f584;
      }
      iVar1 = -iVar3;
      if (uVar4 != 0x102) {
        iVar1 = iVar3;
      }
      iVar3 = BIO_printf(param_1," %s%lu (%s0x%lx)\n",puVar10,iVar1,puVar10,iVar1);
      uVar16 = (undefined4)((ulonglong)puVar10 >> 0x20);
      if (iVar3 < 1) goto LAB_143d74956;
    }
  }
  if ((param_4 & 8) == 0) {
    uVar6 = FAvfMediaFactoryModule::GetSupportedPlatforms(param_2);
    iVar3 = BIO_puts(param_1,&DAT_145d90048);
    uVar13 = uVar12;
    if ((iVar3 < 1) || (iVar3 = X509_signature_print(param_1,uVar6,0), iVar3 < 1))
    goto LAB_143d74956;
  }
  if ((param_4 & 0x10) == 0) {
    uVar2 = 10;
    if (uVar14 != 0x40000) {
      uVar2 = 0x20;
    }
    iVar3 = BIO_printf(param_1,"        Issuer:%c",uVar2);
    uVar13 = uVar12;
    if (iVar3 < 1) goto LAB_143d74956;
    uVar6 = FVoicePacketImpl::GetSampleCounter(param_2);
    iVar3 = X509_NAME_print_ex(param_1,uVar6,uVar8,param_3);
    if ((iVar3 < 0) || (iVar3 = BIO_write(param_1,&DAT_143fc48d8,1), iVar3 < 1)) goto LAB_143d74956;
  }
  if ((param_4 & 0x20) == 0) {
    iVar3 = BIO_write(param_1,"        Validity\n",0x11);
    uVar13 = uVar12;
    if ((iVar3 < 1) || (iVar3 = BIO_write(param_1,"            Not Before: ",0x18), iVar3 < 1))
    goto LAB_143d74956;
    uVar6 = UNiagaraSystem::GetEffectType(param_2);
    iVar3 = ASN1_TIME_print(param_1,uVar6);
    if ((iVar3 == 0) || (iVar3 = BIO_write(param_1,"\n            Not After : ",0x19), iVar3 < 1))
    goto LAB_143d74956;
    uVar6 = FWmfMediaPlayer::GetSamples(param_2);
    iVar3 = ASN1_TIME_print(param_1,uVar6);
    if ((iVar3 == 0) || (iVar3 = BIO_write(param_1,&DAT_143fc48d8,1), iVar3 < 1))
    goto LAB_143d74956;
  }
  if ((param_4 & 0x40) == 0) {
    uVar2 = 10;
    if (uVar14 != 0x40000) {
      uVar2 = 0x20;
    }
    iVar3 = BIO_printf(param_1,"        Subject:%c",uVar2);
    uVar13 = uVar12;
    if (iVar3 < 1) goto LAB_143d74956;
    uVar6 = FBackChannelConnection::GetSocket(param_2);
    iVar3 = X509_NAME_print_ex(param_1,uVar6,uVar8,param_3);
    if ((iVar3 < 0) || (iVar3 = BIO_write(param_1,&DAT_143fc48d8,1), iVar3 < 1)) goto LAB_143d74956;
  }
  if (-1 < (char)param_4) {
    uVar6 = AAIController::GetPerceptionComponent(param_2);
    X509_PUBKEY_get0_param(&local_40,0,0,0,uVar6);
    uVar16 = (undefined4)((ulonglong)uVar6 >> 0x20);
    iVar3 = BIO_write(param_1,"        Subject Public Key Info:\n",0x21);
    uVar13 = uVar12;
    if ((((iVar3 < 1) ||
         (iVar3 = BIO_printf(param_1,"%12sPublic Key Algorithm: ",&DAT_143f3f584), iVar3 < 1)) ||
        (iVar3 = i2a_ASN1_OBJECT(param_1,local_40), iVar3 < 1)) ||
       (iVar3 = BIO_puts(param_1,&DAT_143fc48d8), iVar3 < 1)) goto LAB_143d74956;
    lVar7 = X509_get0_pubkey(param_2);
    if (lVar7 == 0) {
      BIO_printf(param_1,"%12sUnable to load Public Key\n",&DAT_143f3f584);
      ERR_print_errors(param_1);
    }
    else {
      EVP_PKEY_print_public(param_1,lVar7,0x10);
    }
  }
  if (((param_4 >> 0xc & 1) != 0) ||
     (((X509_get0_uids(param_2,&local_48,&local_40), CONCAT44(uStack_44,local_48) == 0 ||
       ((iVar3 = BIO_printf(param_1,"%8sIssuer Unique ID: ",&DAT_143f3f584), uVar13 = uVar12,
        0 < iVar3 &&
        (iVar3 = X509_signature_dump(param_1,CONCAT44(uStack_44,local_48),0xc), iVar3 != 0)))) &&
      ((local_40 == 0 ||
       ((iVar3 = BIO_printf(param_1,"%8sSubject Unique ID: ",&DAT_143f3f584), uVar13 = uVar12,
        0 < iVar3 && (iVar3 = X509_signature_dump(param_1,local_40,0xc), iVar3 != 0)))))))) {
    if ((param_4 >> 8 & 1) == 0) {
      uVar6 = UVariant::GetThumbnail(param_2);
      X509V3_extensions_print(param_1,"X509v3 extensions",uVar6,param_4,CONCAT44(uVar16,8));
    }
    if ((param_4 >> 9 & 1) == 0) {
      X509_get0_signature(&local_40,&local_48,param_2);
      iVar3 = X509_signature_print(param_1,CONCAT44(uStack_44,local_48),local_40);
      uVar13 = uVar12;
      if (iVar3 < 1) goto LAB_143d74956;
    }
    if (((param_4 >> 10 & 1) != 0) ||
       (iVar3 = X509_aux_print(param_1,param_2,0), uVar13 = uVar12, iVar3 != 0)) {
      uVar13 = 1;
    }
  }
LAB_143d74956:
  CRYPTO_free(0,"crypto\\x509\\t_x509.c",0xd9);
  return uVar13;
}



// FUNCTION 143d74980 X509_signature_dump body=260 status=ok
// SIG undefined X509_signature_dump(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_signature_dump(undefined8 param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  
  uVar1 = *param_2;
  uVar6 = 0;
  lVar2 = *(longlong *)(param_2 + 2);
  uVar7 = uVar6;
  if (0 < (int)uVar1) {
    do {
      iVar4 = (int)uVar7;
      if ((iVar4 == (iVar4 / 0x12) * 0x12) &&
         ((iVar3 = BIO_write(param_1,&DAT_143fc48d8,1), iVar3 < 1 ||
          (iVar3 = BIO_indent(param_1,param_3,param_3), iVar3 < 1)))) goto LAB_143d74a5e;
      puVar8 = &DAT_145cc3708;
      if (iVar4 + 1U == uVar1) {
        puVar8 = (undefined2 *)&DAT_143f3f584;
      }
      iVar3 = BIO_printf(param_1,"%02x%s",*(undefined1 *)(uVar6 + lVar2),puVar8);
      if (iVar3 < 1) goto LAB_143d74a5e;
      uVar6 = uVar6 + 1;
      uVar7 = (ulonglong)(iVar4 + 1U);
    } while ((longlong)uVar6 < (longlong)(int)uVar1);
  }
  iVar4 = BIO_write(param_1,&DAT_143fc48d8,1);
  if (iVar4 == 1) {
    uVar5 = 1;
  }
  else {
LAB_143d74a5e:
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 143d74a90 X509_signature_print body=268 status=ok
// SIG undefined X509_signature_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_signature_print(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_res20 [2];
  undefined1 local_18 [8];
  undefined8 uStack_10;
  
  uStack_10 = 0x143d74aa5;
  iVar1 = BIO_puts(param_1,"    Signature Algorithm: ");
  if (0 < iVar1) {
    iVar1 = i2a_ASN1_OBJECT(param_1,*param_2);
    if (0 < iVar1) {
      iVar1 = OBJ_obj2nid(*param_2);
      if (iVar1 != 0) {
        iVar1 = OBJ_find_sigid_algs(iVar1,local_18,local_res20);
        if (iVar1 != 0) {
          lVar2 = EVP_PKEY_asn1_find(0,local_res20[0]);
          if ((lVar2 != 0) && (*(code **)(lVar2 + 0xa0) != (code *)0x0)) {
            uVar3 = (**(code **)(lVar2 + 0xa0))(param_1,param_2,param_3,9,0);
            return uVar3;
          }
        }
      }
      if (param_3 != 0) {
        uVar3 = X509_signature_dump(param_1,param_3,9);
        return uVar3;
      }
      iVar1 = BIO_puts(param_1,&DAT_143fc48d8);
      if (0 < iVar1) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143d74ba0 ERR_load_ASN1_strings body=62 status=ok
// SIG undefined ERR_load_ASN1_strings(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_ASN1_strings(void)

{
  longlong lVar1;
  
  lVar1 = ERR_func_error_string(0xd064000);
  if (lVar1 == 0) {
    ERR_load_strings_const(&DAT_145d90230);
    ERR_load_strings_const(&DAT_145d90950);
  }
  return 1;
}



// FUNCTION 143d74be0 ERR_load_BN_strings body=62 status=ok
// SIG undefined ERR_load_BN_strings(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_BN_strings(void)

{
  longlong lVar1;
  
  lVar1 = ERR_func_error_string(0x307f000);
  if (lVar1 == 0) {
    ERR_load_strings_const(&DAT_145d92320);
    ERR_load_strings_const(&DAT_145d92640);
  }
  return 1;
}



// FUNCTION 143d74c20 ERR_load_EC_strings body=62 status=ok
// SIG undefined ERR_load_EC_strings(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_EC_strings(void)

{
  longlong lVar1;
  
  lVar1 = ERR_func_error_string(0x100e0000);
  if (lVar1 == 0) {
    ERR_load_strings_const(&DAT_145d92ca0);
    ERR_load_strings_const(&DAT_145d93760);
  }
  return 1;
}



// FUNCTION 143d74c60 ERR_load_BUF_strings body=62 status=ok
// SIG undefined ERR_load_BUF_strings(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_BUF_strings(void)

{
  longlong lVar1;
  
  lVar1 = ERR_func_error_string(0x7064000);
  if (lVar1 == 0) {
    ERR_load_strings_const(&DAT_145d952c0);
    ERR_load_strings_const(&DAT_145d95300);
  }
  return 1;
}



// FUNCTION 143d74ca0 ERR_load_BIO_strings body=62 status=ok
// SIG undefined ERR_load_BIO_strings(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_BIO_strings(void)

{
  longlong lVar1;
  
  lVar1 = ERR_func_error_string(0x20064000);
  if (lVar1 == 0) {
    ERR_load_strings_const(&DAT_145d95350);
    ERR_load_strings_const(&DAT_145d956e0);
  }
  return 1;
}



// FUNCTION 143d74ce0 ERR_load_COMP_strings body=62 status=ok
// SIG undefined ERR_load_COMP_strings(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_COMP_strings(void)

{
  longlong lVar1;
  
  lVar1 = ERR_func_error_string(0x29063000);
  if (lVar1 == 0) {
    ERR_load_strings_const(&DAT_145d96000);
    ERR_load_strings_const(&DAT_145d96060);
  }
  return 1;
}



// FUNCTION 143d74d20 ERR_load_RSA_strings body=62 status=ok
// SIG undefined ERR_load_RSA_strings(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_RSA_strings(void)

{
  longlong lVar1;
  
  lVar1 = ERR_func_error_string(0x408c000);
  if (lVar1 == 0) {
    ERR_load_strings_const(&DAT_145d96140);
    ERR_load_strings_const(&DAT_145d96540);
  }
  return 1;
}



// FUNCTION 143d74d60 ERR_load_DH_strings body=62 status=ok
// SIG undefined ERR_load_DH_strings(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_DH_strings(void)

{
  longlong lVar1;
  
  lVar1 = ERR_func_error_string(0x5066000);
  if (lVar1 == 0) {
    ERR_load_strings_const(&DAT_145d97590);
    ERR_load_strings_const(&DAT_145d97740);
  }
  return 1;
}



// FUNCTION 143d74da0 ERR_load_DSA_strings body=62 status=ok
// SIG undefined ERR_load_DSA_strings(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_DSA_strings(void)

{
  longlong lVar1;
  
  lVar1 = ERR_func_error_string(0xa064000);
  if (lVar1 == 0) {
    ERR_load_strings_const(&DAT_145d97c80);
    ERR_load_strings_const(&DAT_145d97e00);
  }
  return 1;
}



// FUNCTION 143d74de0 ERR_load_EVP_strings body=62 status=ok
// SIG undefined ERR_load_EVP_strings(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_EVP_strings(void)

{
  longlong lVar1;
  
  lVar1 = ERR_func_error_string(0x60a5000);
  if (lVar1 == 0) {
    ERR_load_strings_const(&DAT_145d980d0);
    ERR_load_strings_const(&DAT_145d986f0);
  }
  return 1;
}



// FUNCTION 143d74e20 ERR_load_OBJ_strings body=62 status=ok
// SIG undefined ERR_load_OBJ_strings(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_OBJ_strings(void)

{
  longlong lVar1;
  
  lVar1 = ERR_func_error_string(0x8069000);
  if (lVar1 == 0) {
    ERR_load_strings_const(&DAT_145d999a0);
    ERR_load_strings_const(&DAT_145d99a40);
  }
  return 1;
}



// FUNCTION 143d74e60 ERR_load_PEM_strings body=62 status=ok
// SIG undefined ERR_load_PEM_strings(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_PEM_strings(void)

{
  longlong lVar1;
  
  lVar1 = ERR_func_error_string(0x907f000);
  if (lVar1 == 0) {
    ERR_load_strings_const(&DAT_145d99b20);
    ERR_load_strings_const(&DAT_145d99dd0);
  }
  return 1;
}



// FUNCTION 143d74ea0 ERR_load_PKCS7_strings body=62 status=ok
// SIG undefined ERR_load_PKCS7_strings(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_PKCS7_strings(void)

{
  longlong lVar1;
  
  lVar1 = ERR_func_error_string(0x21088000);
  if (lVar1 == 0) {
    ERR_load_strings_const(&DAT_145d9a520);
    ERR_load_strings_const(&DAT_145d9a750);
  }
  return 1;
}



// FUNCTION 143d74ee0 ERR_load_X509_strings body=62 status=ok
// SIG undefined ERR_load_X509_strings(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_X509_strings(void)

{
  longlong lVar1;
  
  lVar1 = ERR_func_error_string(0xb064000);
  if (lVar1 == 0) {
    ERR_load_strings_const(&DAT_145d9b080);
    ERR_load_strings_const(&DAT_145d9b460);
  }
  return 1;
}



// FUNCTION 143d74f20 ERR_load_X509V3_strings body=62 status=ok
// SIG undefined ERR_load_X509V3_strings(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_X509V3_strings(void)

{
  longlong lVar1;
  
  lVar1 = ERR_func_error_string(0x220a4000);
  if (lVar1 == 0) {
    ERR_load_strings_const(&DAT_145d9bf70);
    ERR_load_strings_const(&DAT_145d9c3a0);
  }
  return 1;
}



// FUNCTION 143d74f60 ERR_load_CONF_strings body=62 status=ok
// SIG undefined ERR_load_CONF_strings(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_CONF_strings(void)

{
  longlong lVar1;
  
  lVar1 = ERR_func_error_string(0xe068000);
  if (lVar1 == 0) {
    ERR_load_strings_const(&DAT_145d9d340);
    ERR_load_strings_const(&DAT_145d9d4c0);
  }
  return 1;
}



// FUNCTION 143d74fa0 ERR_load_PKCS12_strings body=62 status=ok
// SIG undefined ERR_load_PKCS12_strings(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_PKCS12_strings(void)

{
  longlong lVar1;
  
  lVar1 = ERR_func_error_string(0x23079000);
  if (lVar1 == 0) {
    ERR_load_strings_const(&DAT_145d9d950);
    ERR_load_strings_const(&DAT_145d9db30);
  }
  return 1;
}



// FUNCTION 143d74fe0 ERR_load_RAND_strings body=62 status=ok
// SIG undefined ERR_load_RAND_strings(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_RAND_strings(void)

{
  longlong lVar1;
  
  lVar1 = ERR_func_error_string(0x24065000);
  if (lVar1 == 0) {
    ERR_load_strings_const(&DAT_145d9e0d0);
    ERR_load_strings_const(&DAT_145d9e260);
  }
  return 1;
}



// FUNCTION 143d75020 ERR_load_CRYPTO_strings body=62 status=ok
// SIG undefined ERR_load_CRYPTO_strings(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_CRYPTO_strings(void)

{
  longlong lVar1;
  
  lVar1 = ERR_func_error_string(0xf078000);
  if (lVar1 == 0) {
    ERR_load_strings_const(&DAT_145d9ea90);
    ERR_load_strings_const(&DAT_145d9ec10);
  }
  return 1;
}



// FUNCTION 143d75060 ERR_load_DSO_strings body=62 status=ok
// SIG undefined ERR_load_DSO_strings(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_DSO_strings(void)

{
  longlong lVar1;
  
  lVar1 = ERR_func_error_string(0x25064000);
  if (lVar1 == 0) {
    ERR_load_strings_const(&DAT_145d9ee60);
    ERR_load_strings_const(&DAT_145d9f0a0);
  }
  return 1;
}



// FUNCTION 143d750a0 ERR_load_ENGINE_strings body=62 status=ok
// SIG undefined ERR_load_ENGINE_strings(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_ENGINE_strings(void)

{
  longlong lVar1;
  
  lVar1 = ERR_func_error_string(0x260c6000);
  if (lVar1 == 0) {
    ERR_load_strings_const(&DAT_145d9f5d0);
    ERR_load_strings_const(&DAT_145d9f860);
  }
  return 1;
}



// FUNCTION 143d750e0 ERR_load_UI_strings body=62 status=ok
// SIG undefined ERR_load_UI_strings(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_UI_strings(void)

{
  longlong lVar1;
  
  lVar1 = ERR_func_error_string(0x28073000);
  if (lVar1 == 0) {
    ERR_load_strings_const(&DAT_145da0100);
    ERR_load_strings_const(&DAT_145da0260);
  }
  return 1;
}



// FUNCTION 143d75120 ERR_load_OCSP_strings body=62 status=ok
// SIG undefined ERR_load_OCSP_strings(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_OCSP_strings(void)

{
  longlong lVar1;
  
  lVar1 = ERR_func_error_string(0x27066000);
  if (lVar1 == 0) {
    ERR_load_strings_const(&DAT_145da0630);
    ERR_load_strings_const(&DAT_145da0740);
  }
  return 1;
}



// FUNCTION 143d75160 ERR_load_TS_strings body=62 status=ok
// SIG undefined ERR_load_TS_strings(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_TS_strings(void)

{
  longlong lVar1;
  
  lVar1 = ERR_func_error_string(0x2f06e000);
  if (lVar1 == 0) {
    ERR_load_strings_const(&DAT_145da0c70);
    ERR_load_strings_const(&DAT_145da1010);
  }
  return 1;
}



// FUNCTION 143d751a0 ERR_load_CMS_strings body=62 status=ok
// SIG undefined ERR_load_CMS_strings(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_CMS_strings(void)

{
  longlong lVar1;
  
  lVar1 = ERR_func_error_string(0x2e063000);
  if (lVar1 == 0) {
    ERR_load_strings_const(&DAT_145da1b20);
    ERR_load_strings_const(&DAT_145da2050);
  }
  return 1;
}



// FUNCTION 143d751e0 ERR_load_CT_strings body=62 status=ok
// SIG undefined ERR_load_CT_strings(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_CT_strings(void)

{
  longlong lVar1;
  
  lVar1 = ERR_func_error_string(0x32075000);
  if (lVar1 == 0) {
    ERR_load_strings_const(&DAT_145da3460);
    ERR_load_strings_const(&DAT_145da3620);
  }
  return 1;
}



// FUNCTION 143d75220 ERR_load_ASYNC_strings body=62 status=ok
// SIG undefined ERR_load_ASYNC_strings(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_ASYNC_strings(void)

{
  longlong lVar1;
  
  lVar1 = ERR_func_error_string(0x33064000);
  if (lVar1 == 0) {
    ERR_load_strings_const(&DAT_145da3ac0);
    ERR_load_strings_const(&DAT_145da3b40);
  }
  return 1;
}



// FUNCTION 143d75260 ERR_load_KDF_strings body=62 status=ok
// SIG undefined ERR_load_KDF_strings(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_KDF_strings(void)

{
  longlong lVar1;
  
  lVar1 = ERR_func_error_string(0x34067000);
  if (lVar1 == 0) {
    ERR_load_strings_const(&DAT_145da3c70);
    ERR_load_strings_const(&DAT_145da3d40);
  }
  return 1;
}



// FUNCTION 143d752a0 ERR_load_OSSL_STORE_strings body=62 status=ok
// SIG undefined ERR_load_OSSL_STORE_strings(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ERR_load_OSSL_STORE_strings(void)

{
  longlong lVar1;
  
  lVar1 = ERR_func_error_string(0x2c081000);
  if (lVar1 == 0) {
    ERR_load_strings_const(&DAT_145da3fe0);
    ERR_load_strings_const(&DAT_145da4250);
  }
  return 1;
}



// FUNCTION 143d752e0 ossl_store_destroy_loaders_int body=64 status=ok
// SIG undefined ossl_store_destroy_loaders_int(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_store_destroy_loaders_int(void)

{
  OPENSSL_LH_free(DAT_146bcba18);
  DAT_146bcba18 = 0;
  CRYPTO_THREAD_lock_free(DAT_146bcba08);
  DAT_146bcba08 = 0;
  return;
}



// FUNCTION 143d75320 try_decode_PKCS12 body=791 status=ok
// SIG undefined try_decode_PKCS12(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
try_decode_PKCS12(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 longlong *param_5,undefined4 *param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  char *pcVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auStack_4a8 [32];
  undefined8 *local_488;
  undefined8 local_478;
  undefined4 *local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458 [2];
  undefined1 local_448 [1024];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143d75335;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_4a8;
  uVar8 = 0;
  lVar5 = *param_5;
  local_470 = param_6;
  local_458[0] = param_3;
  if (lVar5 == 0) {
    uVar12 = 0;
    if (param_1 == 0) {
      lVar3 = X509_free(0,local_458,param_4);
      if (lVar3 != 0) {
        *param_6 = 1;
        pcVar10 = "";
        local_468 = 0;
        local_460 = 0;
        local_478 = 0;
        iVar2 = PKCS12_verify_mac(lVar3,&DAT_143f3f584,0);
        if ((iVar2 == 0) && (iVar2 = PKCS12_verify_mac(lVar3,0,0), iVar2 == 0)) {
          local_488 = (undefined8 *)param_8;
          pcVar10 = (char *)file_get_pass(param_7,local_448,0x400,"PKCS12 import password");
          if (pcVar10 == (char *)0x0) {
            local_488 = (undefined8 *)CONCAT44(local_488._4_4_,0xe8);
            ERR_put_error(0x2c,0x7a,0x72,"crypto\\store\\loader_file.c");
            param_6 = local_470;
            uVar12 = 0;
          }
          else {
            cVar1 = *pcVar10;
            pcVar4 = pcVar10;
            uVar6 = uVar8;
            while ((cVar1 != '\0' && (uVar12 = (uint)uVar6, uVar12 < 0x80000000))) {
              pcVar4 = pcVar4 + 1;
              uVar12 = uVar12 + 1;
              cVar1 = *pcVar4;
              uVar6 = (ulonglong)uVar12;
            }
            iVar2 = PKCS12_verify_mac(lVar3,pcVar10,uVar12 & 0x7fffffff);
            if (iVar2 != 0) goto LAB_143d7549a;
            local_488 = (undefined8 *)CONCAT44(local_488._4_4_,0xed);
            ERR_put_error(0x2c,0x7a,0x71,"crypto\\store\\loader_file.c");
            param_6 = local_470;
            uVar12 = 0;
          }
        }
        else {
LAB_143d7549a:
          local_488 = &local_478;
          iVar2 = PKCS12_parse(lVar3,pcVar10,&local_468,&local_460);
          param_6 = local_470;
          uVar12 = 0;
          if (iVar2 != 0) {
            uVar11 = 0;
            lVar5 = OPENSSL_sk_new_null();
            uVar6 = uVar8;
            uVar7 = uVar8;
            if ((((lVar5 == 0) || (uVar6 = OSSL_STORE_INFO_new_PKEY(local_468), uVar6 == 0)) ||
                (iVar2 = OPENSSL_sk_push(lVar5,uVar6), uVar8 = uVar11, uVar7 = 0, iVar2 == 0)) ||
               ((uVar7 = OSSL_STORE_INFO_new_CERT(local_460), uVar7 == 0 ||
                (iVar2 = OPENSSL_sk_push(lVar5,uVar7), iVar2 == 0)))) {
LAB_143d75588:
              FUN_143dbaa00(uVar8);
              FUN_143dbaa00(uVar7);
              FUN_143dbaa00(uVar6);
              OPENSSL_sk_pop_free(lVar5,FUN_143dbaa00);
              EVP_PKEY_free(local_468);
              X509_free(local_460);
              OPENSSL_sk_pop_free(local_478,X509_free);
              lVar5 = 0;
              uVar12 = 0;
            }
            else {
              uVar6 = 0;
              uVar7 = 0;
              iVar2 = OPENSSL_sk_num(local_478);
              while (uVar12 = 1, 0 < iVar2) {
                uVar9 = OPENSSL_sk_value(local_478,0);
                uVar8 = OSSL_STORE_INFO_new_CERT(uVar9);
                if ((uVar8 == 0) || (iVar2 = OPENSSL_sk_push(lVar5), iVar2 == 0))
                goto LAB_143d75588;
                OPENSSL_sk_shift(local_478);
                iVar2 = OPENSSL_sk_num(local_478);
              }
            }
            *param_5 = lVar5;
            param_6 = local_470;
          }
        }
      }
      X509_free(lVar3);
      if (uVar12 != 0) {
        if (lVar5 == 0) {
          return 0;
        }
        goto LAB_143d755fd;
      }
    }
    uVar9 = 0;
  }
  else {
LAB_143d755fd:
    *param_6 = 1;
    uVar9 = OPENSSL_sk_shift(lVar5);
  }
  return uVar9;
}



// FUNCTION 143d75640 eof_PKCS12 body=44 status=ok
// SIG undefined eof_PKCS12(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 eof_PKCS12(longlong param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = OPENSSL_sk_num();
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143d75670 destroy_ctx_PKCS12 body=46 status=ok
// SIG undefined destroy_ctx_PKCS12(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void destroy_ctx_PKCS12(undefined8 *param_1)

{
  OPENSSL_sk_pop_free(*param_1,FUN_143dbaa00);
  *param_1 = 0;
  return;
}



// FUNCTION 143d756a0 try_decode_PKCS8Encrypted body=497 status=ok
// SIG undefined try_decode_PKCS8Encrypted(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong try_decode_PKCS8Encrypted
                   (char *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                   undefined8 param_5,undefined4 *param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char *pcVar5;
  char *pcVar6;
  longlong lVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined1 auStack_498 [32];
  undefined8 local_478;
  longlong *local_470;
  int *local_468;
  undefined4 local_460;
  int local_458 [2];
  undefined4 *local_450;
  undefined8 local_448;
  longlong local_440;
  undefined8 local_438 [2];
  undefined1 local_428 [1024];
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x143d756b8;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_498;
  local_448 = 0;
  local_450 = (undefined4 *)0x0;
  local_440 = 0;
  local_438[0] = param_3;
  if (param_1 != (char *)0x0) {
    iVar2 = _guard_xfg_dispatch_icall_nop(param_1,"ENCRYPTED PRIVATE KEY");
    if (iVar2 != 0) {
      return 0;
    }
    *param_6 = 1;
  }
  lVar3 = PKCS8_PRIV_KEY_INFO_free(0,local_438,param_4);
  if (lVar3 == 0) {
    return 0;
  }
  *param_6 = 1;
  plVar4 = (longlong *)BUF_MEM_new();
  if (plVar4 == (longlong *)0x0) {
    local_478._0_4_ = 0x162;
LAB_143d7583d:
    uVar8 = 0x41;
  }
  else {
    local_478 = param_8;
    pcVar5 = (char *)file_get_pass(param_7,local_428,0x400,"PKCS8 decrypt password");
    if (pcVar5 != (char *)0x0) {
      ECDSA_SIG_get0(lVar3,&local_448,&local_450);
      cVar1 = *pcVar5;
      pcVar6 = pcVar5;
      for (uVar9 = 0; (cVar1 != '\0' && (uVar9 < 0x80000000)); uVar9 = uVar9 + 1) {
        pcVar6 = pcVar6 + 1;
        cVar1 = *pcVar6;
      }
      local_468 = local_458;
      local_460 = 0;
      local_470 = &local_440;
      local_478._0_4_ = *local_450;
      lVar7 = PKCS12_pbe_crypt(local_448,pcVar5,uVar9 & 0x7fffffff,*(undefined8 *)(local_450 + 2));
      if (lVar7 == 0) goto LAB_143d75857;
      plVar4[1] = local_440;
      *plVar4 = (longlong)local_458[0];
      plVar4[2] = (longlong)local_458[0];
      PKCS8_PRIV_KEY_INFO_free(lVar3);
      lVar7 = ossl_store_info_new_EMBEDDED("PRIVATE KEY",plVar4);
      if (lVar7 != 0) {
        return lVar7;
      }
      local_478._0_4_ = 0x179;
      goto LAB_143d7583d;
    }
    local_478._0_4_ = 0x169;
    uVar8 = 0x73;
  }
  ERR_put_error(0x2c,0x7d,uVar8,"crypto\\store\\loader_file.c");
LAB_143d75857:
  PKCS8_PRIV_KEY_INFO_free(lVar3);
  BUF_MEM_free(plVar4);
  return 0;
}



// FUNCTION 143d758a0 try_decode_PrivateKey body=367 status=ok
// SIG undefined try_decode_PrivateKey(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong try_decode_PrivateKey
                   (char *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                   undefined8 param_5,int *param_6)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  ulonglong uVar7;
  
  uVar3 = 0;
  local_res18[0] = param_3;
  if (param_1 == (char *)0x0) {
    iVar1 = EVP_PKEY_asn1_get_count();
    uVar7 = uVar3;
    if (0 < iVar1) {
      do {
        local_res8 = local_res18[0];
        puVar4 = (undefined4 *)EVP_PKEY_asn1_get0(uVar7);
        if (((*(byte *)(puVar4 + 2) & 1) == 0) &&
           (uVar5 = d2i_PrivateKey(*puVar4,0,&local_res8,param_4), uVar5 != 0)) {
          if (uVar3 != 0) {
            EVP_PKEY_free(uVar5);
            uVar5 = uVar3;
          }
          *param_6 = *param_6 + 1;
          uVar3 = uVar5;
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        iVar1 = EVP_PKEY_asn1_get_count();
      } while ((int)uVar6 < iVar1);
    }
    if (1 < *param_6) {
      EVP_PKEY_free(uVar3);
      return 0;
    }
  }
  else {
    iVar1 = _guard_xfg_dispatch_icall_nop(param_1,"PRIVATE KEY");
    if (iVar1 == 0) {
      lVar2 = PKCS8_PRIV_KEY_INFO_free(0,local_res18,param_4);
      *param_6 = 1;
      if (lVar2 != 0) {
        uVar3 = EVP_PKCS82PKEY(lVar2);
      }
      PKCS8_PRIV_KEY_INFO_free(lVar2);
    }
    else {
      iVar1 = pem_check_suffix(param_1,"PRIVATE KEY");
      if (iVar1 < 1) {
        return 0;
      }
      puVar4 = (undefined4 *)EVP_PKEY_asn1_find_str(0,param_1,iVar1);
      if (puVar4 == (undefined4 *)0x0) {
        return 0;
      }
      *param_6 = 1;
      uVar3 = d2i_PrivateKey(*puVar4,0,local_res18,param_4);
    }
  }
  if (uVar3 == 0) {
    return 0;
  }
  lVar2 = OSSL_STORE_INFO_new_PKEY(uVar3);
  if (lVar2 == 0) {
    EVP_PKEY_free(uVar3);
  }
  return lVar2;
}



// FUNCTION 143d75a10 try_decode_PUBKEY body=140 status=ok
// SIG undefined try_decode_PUBKEY(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
try_decode_PUBKEY(char *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,undefined4 *param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res18 [2];
  
  uVar3 = 0;
  local_res18[0] = param_3;
  if (param_1 != (char *)0x0) {
    iVar1 = _guard_xfg_dispatch_icall_nop(param_1,"PUBLIC KEY");
    if (iVar1 != 0) {
      return 0;
    }
    *param_6 = 1;
  }
  lVar2 = d2i_PUBKEY(0,local_res18,param_4);
  if (lVar2 != 0) {
    *param_6 = 1;
    uVar3 = OSSL_STORE_INFO_new_PKEY(lVar2);
  }
  return uVar3;
}



// FUNCTION 143d75aa0 try_decode_params body=482 status=ok
// SIG undefined try_decode_params(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong try_decode_params(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4
                          ,undefined8 param_5,int *param_6)

{
  int iVar1;
  WriteBytesMem *pWVar2;
  uchar *puVar3;
  WriteBytesMem *this;
  undefined4 *puVar4;
  longlong lVar5;
  WriteBytesMem *pWVar6;
  uint uVar7;
  WriteBytesMem *pWVar9;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  undefined8 uVar10;
  WriteBytesMem *pWVar8;
  
  uVar10 = 0x143d75abb;
  pWVar6 = (WriteBytesMem *)0x0;
  local_res18[0] = param_3;
  if (param_1 == 0) {
LAB_143d75b87:
    iVar1 = EVP_PKEY_asn1_get_count();
    this = pWVar6;
    pWVar8 = pWVar6;
    pWVar9 = pWVar6;
    pWVar2 = pWVar6;
    if (0 < iVar1) {
      do {
        local_res8 = local_res18[0];
        pWVar2 = pWVar9;
        if ((this == (WriteBytesMem *)0x0) &&
           (this = (WriteBytesMem *)EVP_PKEY_new(), this == (WriteBytesMem *)0x0)) {
          ERR_put_error(0x2c,0x79,6,"crypto\\store\\loader_file.c",0x225,uVar10);
          break;
        }
        puVar4 = (undefined4 *)EVP_PKEY_asn1_get0(pWVar8);
        if (((((*(byte *)(puVar4 + 2) & 1) == 0) &&
             (iVar1 = EVP_PKEY_set_type(this,*puVar4), iVar1 != 0)) &&
            (puVar3 = AK::WriteBytesMem::Bytes(this), puVar3 != (uchar *)0x0)) &&
           ((*(code **)(puVar3 + 0x70) != (code *)0x0 &&
            (iVar1 = (**(code **)(puVar3 + 0x70))(this,&local_res8,param_4), iVar1 != 0)))) {
          pWVar2 = this;
          if (pWVar9 != (WriteBytesMem *)0x0) {
            EVP_PKEY_free(this);
            pWVar2 = pWVar9;
          }
          *param_6 = *param_6 + 1;
          this = pWVar6;
        }
        uVar7 = (int)pWVar8 + 1;
        pWVar8 = (WriteBytesMem *)(ulonglong)uVar7;
        iVar1 = EVP_PKEY_asn1_get_count();
        pWVar9 = pWVar2;
      } while ((int)uVar7 < iVar1);
    }
    EVP_PKEY_free(this);
    if (*param_6 != 1) goto LAB_143d75c66;
  }
  else {
    iVar1 = pem_check_suffix(param_1,"PARAMETERS");
    if (iVar1 == 0) {
      return 0;
    }
    *param_6 = 1;
    if (iVar1 < 1) goto LAB_143d75b87;
    pWVar2 = (WriteBytesMem *)EVP_PKEY_new();
    if (pWVar2 == (WriteBytesMem *)0x0) {
      ERR_put_error(0x2c,0x79,6,"crypto\\store\\loader_file.c",0x213,uVar10);
      return 0;
    }
    iVar1 = EVP_PKEY_set_type_str(pWVar2,param_1,iVar1);
    if (((iVar1 == 0) || (puVar3 = AK::WriteBytesMem::Bytes(pWVar2), puVar3 == (uchar *)0x0)) ||
       ((*(code **)(puVar3 + 0x70) == (code *)0x0 ||
        (iVar1 = (**(code **)(puVar3 + 0x70))(pWVar2,local_res18,param_4), iVar1 == 0))))
    goto LAB_143d75c66;
  }
  lVar5 = OSSL_STORE_INFO_new_PARAMS(pWVar2);
  if (lVar5 != 0) {
    return lVar5;
  }
LAB_143d75c66:
  EVP_PKEY_free(pWVar2);
  return 0;
}



// FUNCTION 143d75c90 try_decode_X509Certificate body=231 status=ok
// SIG undefined try_decode_X509Certificate(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong try_decode_X509Certificate
                   (char *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                   undefined8 param_5,undefined4 *param_6)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_res18 [2];
  
  bVar1 = true;
  local_res18[0] = param_3;
  if (param_1 != (char *)0x0) {
    iVar2 = _guard_xfg_dispatch_icall_nop(param_1,"TRUSTED CERTIFICATE");
    if (iVar2 == 0) {
      bVar1 = false;
    }
    else {
      iVar2 = _guard_xfg_dispatch_icall_nop(param_1,"X509 CERTIFICATE");
      if ((iVar2 != 0) && (iVar2 = _guard_xfg_dispatch_icall_nop(param_1,"CERTIFICATE"), iVar2 != 0)
         ) {
        return 0;
      }
    }
    *param_6 = 1;
  }
  lVar3 = d2i_X509_AUX(0,local_res18,param_4);
  if ((lVar3 != 0) || ((bVar1 && (lVar3 = d2i_X509(0,local_res18,param_4), lVar3 != 0)))) {
    *param_6 = 1;
    lVar4 = OSSL_STORE_INFO_new_CERT(lVar3);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  X509_free(lVar3);
  return 0;
}



// FUNCTION 143d75d80 try_decode_X509CRL body=156 status=ok
// SIG undefined try_decode_X509CRL(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong try_decode_X509CRL(char *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                           undefined8 param_5,undefined4 *param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  if (param_1 != (char *)0x0) {
    iVar1 = _guard_xfg_dispatch_icall_nop(param_1,"X509 CRL");
    if (iVar1 != 0) {
      return 0;
    }
    *param_6 = 1;
  }
  lVar2 = X509_CRL_free(0,local_res18,param_4);
  if (lVar2 != 0) {
    *param_6 = 1;
    lVar3 = OSSL_STORE_INFO_new_CRL(lVar2);
    if (lVar3 != 0) {
      return lVar3;
    }
  }
  X509_CRL_free(lVar2);
  return 0;
}


