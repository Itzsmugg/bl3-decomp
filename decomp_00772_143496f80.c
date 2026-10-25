// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143496f80 FUN_143496f80 body=281 status=ok
// SIG undefined FUN_143496f80(void)

undefined8 *
FUN_143496f80(undefined8 *param_1,float param_2,float param_3,float param_4,float param_5,
             undefined4 param_6)

{
  float fVar1;
  float fVar2;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 1;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 4) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  param_1[8] = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x35) = 0xff0000;
  *(undefined2 *)((longlong)param_1 + 0x39) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3b) = 0;
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) & 0xfffffff9;
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) | 1;
  *param_1 = &PTR_FUN_145af82e0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_6;
  param_3 = param_3 * 20.0;
  *(float *)((longlong)param_1 + 0x24) = param_5 * 20.0;
  *(float *)(param_1 + 4) = param_4 * 20.0;
  *(float *)((longlong)param_1 + 0x4c) = param_2;
  *(float *)(param_1 + 9) = param_3;
  fVar1 = _guard_xfg_dispatch_icall_nop(param_2);
  fVar2 = _guard_xfg_dispatch_icall_nop(param_2);
  *(float *)(param_1 + 5) = fVar1 * param_3;
  *(float *)((longlong)param_1 + 0x2c) = fVar2 * param_3;
  *(undefined2 *)((longlong)param_1 + 0x35) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)((longlong)param_1 + 0x37) = 0xff;
  return param_1;
}



// FUNCTION 1434970a0 FUN_1434970a0 body=114 status=ok
// SIG undefined FUN_1434970a0(void)

undefined8 * FUN_1434970a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0fe18;
  param_1[4] = &PTR_LAB_145b0fe60;
  FUN_1432c2f70(param_1 + 0xd);
  FUN_1432c2f70(param_1 + 0xe);
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  return param_1;
}



// FUNCTION 143497120 FUN_143497120 body=146 status=ok
// SIG undefined FUN_143497120(void)

undefined8 * FUN_143497120(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0c340;
  param_1[4] = &PTR_LAB_145b0c388;
  param_1[0xd] = &PTR__scalar_deleting_destructor__145b0c308;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 2;
  FUN_1432c5250(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x12) = 0;
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  return param_1;
}



// FUNCTION 1434971c0 FUN_1434971c0 body=224 status=ok
// SIG undefined FUN_1434971c0(void)

undefined8 *
FUN_1434971c0(undefined8 *param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  
  FUN_143416140(param_1,*(undefined8 *)(param_2 + 8));
  *param_1 = &PTR_LAB_145b0b778;
  param_1[4] = &PTR_LAB_145b0b7c0;
  *(uint *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1U & 0x8fffffff;
  param_1[0xd] = param_2;
  param_1[0xe] = 0;
  param_1[0xf] = param_3;
  *(undefined1 *)(param_1 + 0x12) = 0;
  lVar1 = *param_4;
  param_1[0x10] = lVar1;
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1U & 0x8fffffff;
  }
  param_1[0x11] = 0;
  if (param_4[1] != 0) {
    FUN_1434109d0(param_1 + 0x10,param_4[1],*(byte *)(param_4 + 2) & 1);
  }
  *(uint *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1U & 0x8fffffff;
  lVar1 = param_1[6];
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80();
  }
  param_1[6] = param_2;
  return param_1;
}



// FUNCTION 1434972a0 FUN_1434972a0 body=153 status=ok
// SIG undefined FUN_1434972a0(void)

undefined8 * FUN_1434972a0(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0fba8;
  param_1[4] = &PTR_LAB_145b0fbf0;
  FUN_1433dd540(param_1 + 0xd,*(undefined8 *)(*param_2 + 0x30));
  *(undefined4 *)(param_1 + 0x18) = 1;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  return param_1;
}



// FUNCTION 143497340 FUN_143497340 body=111 status=ok
// SIG undefined FUN_143497340(void)

undefined8 * FUN_143497340(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0dd80;
  param_1[4] = &PTR_LAB_145b0ddc8;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  return param_1;
}



// FUNCTION 1434973b0 FUN_1434973b0 body=143 status=ok
// SIG undefined FUN_1434973b0(void)

undefined8 *
FUN_1434973b0(undefined8 *param_1,undefined8 *param_2,RefCountImpl *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_143414770();
  *param_1 = &PTR_LAB_145b12d70;
  param_1[4] = &PTR_LAB_145b12df8;
  if (param_3 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_3);
  }
  param_1[0xd] = param_3;
  param_1[0xe] = param_4;
  uVar1 = FUN_14341b750(*param_2,7);
  FUN_1434a4d00(param_1 + 4,param_2,uVar1);
  return param_1;
}



// FUNCTION 143497440 FUN_143497440 body=84 status=ok
// SIG undefined FUN_143497440(void)

undefined8 * FUN_143497440(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  param_1[2] = param_2;
  *param_1 = &PTR_FUN_145b0ab18;
  *(undefined4 *)(param_1 + 1) = 1;
  *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  FUN_143306bc0(param_1 + 3,param_3,*(undefined8 *)param_1[2],
                *(undefined4 *)((undefined8 *)param_1[2] + 4));
  return param_1;
}



// FUNCTION 1434974a0 FUN_1434974a0 body=150 status=ok
// SIG undefined FUN_1434974a0(void)

undefined8 * FUN_1434974a0(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  if (param_3 == (undefined8 *)0x0) {
    param_1[1] = 0;
    return param_1;
  }
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x50))(param_2,0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    FUN_14349d4d0(puVar1,*param_3,param_3[1]);
    param_1[1] = puVar1;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 143497540 FUN_143497540 body=104 status=ok
// SIG undefined FUN_143497540(void)

void FUN_143497540(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    plVar2 = (longlong *)(*param_1 + -8 + lVar3 * 0x10);
    do {
      piVar1 = (int *)(*plVar2 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      plVar2 = plVar2 + -2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001434975a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  return;
}



// FUNCTION 1434975b0 FUN_1434975b0 body=108 status=ok
// SIG undefined FUN_1434975b0(void)

void FUN_1434975b0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = param_1[1];
  plVar2 = (longlong *)(*param_1 + (lVar3 + -1) * 8);
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    lVar1 = *plVar2;
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    plVar2 = plVar2 + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x000143497618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  return;
}



// FUNCTION 143497620 FUN_143497620 body=117 status=ok
// SIG undefined FUN_143497620(void)

void FUN_143497620(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    puVar1 = (undefined8 *)(*param_1 + -0x10 + lVar2 * 0x20);
    do {
      if ((RefCountNTSImpl *)*puVar1 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*puVar1);
      }
      puVar1 = puVar1 + -4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (*param_1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014349768c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))();
  return;
}



// FUNCTION 1434976a0 FUN_1434976a0 body=108 status=ok
// SIG undefined FUN_1434976a0(void)

void FUN_1434976a0(longlong *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  pbVar1 = (byte *)(*param_1 + -0x20 + lVar2 * 0x20);
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (4 < *pbVar1) {
      FUN_143411150(pbVar1);
    }
    pbVar1 = pbVar1 + -0x20;
  }
  if (*param_1 != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  return;
}



// FUNCTION 143497710 FUN_143497710 body=103 status=ok
// SIG undefined FUN_143497710(void)

void FUN_143497710(longlong *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  pbVar1 = (byte *)(*param_1 + -0x20 + lVar2 * 0x20);
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (4 < *pbVar1) {
      FUN_143411150(pbVar1);
    }
    pbVar1 = pbVar1 + -0x20;
  }
                    /* WARNING: Could not recover jumptable at 0x000143497773. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  return;
}



// FUNCTION 143497780 FUN_143497780 body=109 status=ok
// SIG undefined FUN_143497780(void)

void FUN_143497780(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  
  piVar1 = (int *)(param_1[3] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  lVar3 = param_1[1];
  plVar2 = (longlong *)(*param_1 + (lVar3 + -1) * 8);
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    piVar1 = (int *)(*plVar2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    plVar2 = plVar2 + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001434977e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  return;
}



// FUNCTION 1434977f0 FUN_1434977f0 body=165 status=ok
// SIG undefined FUN_1434977f0(void)

void FUN_1434977f0(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*param_1 != 0) {
    lVar5 = 0;
    lVar4 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar5 + 0x10 + lVar2) != -2) {
        lVar3 = *(longlong *)(lVar5 + 0x28 + lVar2);
        if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
          FUN_1434a2b80();
        }
        piVar1 = (int *)(*(longlong *)(lVar5 + 0x18 + lVar2) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *(undefined8 *)(lVar5 + 0x10 + lVar2) = 0xfffffffffffffffe;
      }
      lVar5 = lVar5 + 0x20;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1434978a0 FUN_1434978a0 body=324 status=ok
// SIG undefined FUN_1434978a0(void)

void FUN_1434978a0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*param_1 != 0) {
    lVar5 = 0;
    lVar4 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar1 = *param_1;
      if (*(longlong *)(lVar5 + 0x10 + lVar1) != -2) {
        if ((((*(byte *)(lVar5 + 0x40 + lVar1) & 2) == 0) &&
            (lVar2 = *(longlong *)(lVar5 + 0x30 + lVar1), lVar2 != 0)) &&
           ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
          FUN_1434a2b80();
        }
        *(undefined8 *)(lVar5 + 0x30 + lVar1) = 0;
        if ((((*(byte *)(lVar5 + 0x40 + lVar1) & 1) == 0) &&
            (lVar2 = *(longlong *)(lVar5 + 0x38 + lVar1), lVar2 != 0)) &&
           ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
          FUN_1434a2b80();
        }
        *(undefined8 *)(lVar5 + 0x38 + lVar1) = 0;
        piVar3 = *(int **)(lVar5 + 0x28 + lVar1);
        if ((piVar3 != (int *)0x0) && (*piVar3 = *piVar3 + -1, *piVar3 < 1)) {
          FUN_14336bed0(piVar3);
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar3);
        }
        lVar2 = *(longlong *)(lVar5 + 0x20 + lVar1);
        if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
          FUN_1434a2b80();
        }
        piVar3 = (int *)(*(longlong *)(lVar5 + 0x18 + lVar1) + 0x18);
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          FUN_14335f920();
        }
        *(undefined8 *)(lVar5 + 0x10 + lVar1) = 0xfffffffffffffffe;
      }
      lVar5 = lVar5 + 0x38;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1434979f0 FUN_1434979f0 body=180 status=ok
// SIG undefined FUN_1434979f0(void)

void FUN_1434979f0(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 != 0) {
    lVar4 = 0;
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar2 = lVar4 + *param_1;
      if (*(longlong *)(lVar4 + 0x10 + *param_1) != -2) {
        piVar1 = (int *)(*(longlong *)(lVar2 + 0x18) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        if ((9 < *(byte *)(lVar2 + 0x38)) || ((0x35fU >> (*(byte *)(lVar2 + 0x38) & 0x1f) & 1) == 0)
           ) {
          FUN_143411150(lVar2 + 0x38);
        }
        *(undefined8 *)(lVar2 + 0x10) = 0xfffffffffffffffe;
      }
      lVar4 = lVar4 + 0x48;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143497ab0 FUN_143497ab0 body=232 status=ok
// SIG undefined FUN_143497ab0(void)

void FUN_143497ab0(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*param_1 != 0) {
    lVar5 = 0;
    lVar4 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar5 + 0x10 + lVar2) != -2) {
        if ((((*(byte *)(lVar5 + 0x30 + lVar2) & 2) == 0) &&
            (lVar3 = *(longlong *)(lVar5 + 0x20 + lVar2), lVar3 != 0)) &&
           ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
          FUN_1434a2b80();
        }
        *(undefined8 *)(lVar5 + 0x20 + lVar2) = 0;
        if ((((*(byte *)(lVar5 + 0x30 + lVar2) & 1) == 0) &&
            (lVar3 = *(longlong *)(lVar5 + 0x28 + lVar2), lVar3 != 0)) &&
           ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
          FUN_1434a2b80();
        }
        *(undefined8 *)(lVar5 + 0x28 + lVar2) = 0;
        piVar1 = (int *)(*(longlong *)(lVar5 + 0x18 + lVar2) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *(undefined8 *)(lVar5 + 0x10 + lVar2) = 0xfffffffffffffffe;
      }
      lVar5 = lVar5 + 0x28;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143497ba0 FUN_143497ba0 body=180 status=ok
// SIG undefined FUN_143497ba0(void)

void FUN_143497ba0(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 != 0) {
    lVar4 = 0;
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar2 = lVar4 + *param_1;
      if (*(longlong *)(lVar4 + 0x10 + *param_1) != -2) {
        piVar1 = (int *)(*(longlong *)(lVar2 + 0x18) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        if ((9 < *(byte *)(lVar2 + 0x20)) || ((0x35fU >> (*(byte *)(lVar2 + 0x20) & 0x1f) & 1) == 0)
           ) {
          FUN_143411150(lVar2 + 0x20);
        }
        *(undefined8 *)(lVar2 + 0x10) = 0xfffffffffffffffe;
      }
      lVar4 = lVar4 + 0x30;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143497c60 FUN_143497c60 body=146 status=ok
// SIG undefined FUN_143497c60(void)

void FUN_143497c60(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 != 0) {
    lVar4 = 0;
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar2 = *param_1 + lVar4;
      if (*(longlong *)(lVar2 + 0x10) != -2) {
        piVar1 = (int *)(*(longlong *)(lVar2 + 0x18) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        (**(code **)(*(longlong *)(lVar2 + 0x20) + 8))(lVar2 + 0x20);
        *(undefined8 *)(lVar2 + 0x10) = 0xfffffffffffffffe;
      }
      lVar4 = lVar4 + 0x20;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143497d00 FUN_143497d00 body=213 status=ok
// SIG undefined FUN_143497d00(void)

void FUN_143497d00(longlong *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*param_1 != 0) {
    lVar2 = 0;
    lVar5 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar3 = *param_1 + lVar2;
      if (*(longlong *)(lVar3 + 0x10) != -2) {
        lVar4 = *(longlong *)(lVar3 + 0x40);
        pbVar1 = (byte *)(*(longlong *)(lVar3 + 0x38) + -0x20 + lVar4 * 0x20);
        for (; lVar4 != 0; lVar4 = lVar4 + -1) {
          if (4 < *pbVar1) {
            FUN_143411150(pbVar1);
          }
          pbVar1 = pbVar1 + -0x20;
        }
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(lVar3 + 0x38));
        *(undefined8 *)(lVar3 + 0x10) = 0xfffffffffffffffe;
      }
      lVar2 = lVar2 + 0x40;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143497de0 FUN_143497de0 body=149 status=ok
// SIG undefined FUN_143497de0(void)

void FUN_143497de0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 != 0) {
    lVar4 = 0;
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar1 = *param_1;
      if (*(longlong *)(lVar1 + 0x10 + lVar4) != -2) {
        lVar2 = *(longlong *)(lVar1 + 0x20 + lVar4);
        if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
          FUN_1434a2b80();
        }
        *(undefined8 *)(lVar1 + 0x10 + lVar4) = 0xfffffffffffffffe;
      }
      lVar4 = lVar4 + 0x18;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143497e80 FUN_143497e80 body=225 status=ok
// SIG undefined FUN_143497e80(void)

void FUN_143497e80(ulonglong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  for (iVar3 = (int)param_1[5] * 0x20 + -0x20 + (int)((longlong)(*param_1 - param_1[1]) >> 3);
      iVar3 != 0; iVar3 = iVar3 + -1) {
    lVar1 = *(longlong *)*param_1;
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80();
    }
    *param_1 = *param_1 - 8;
    if (*param_1 < param_1[1]) {
      FUN_1434a2500(param_1);
    }
  }
  lVar1 = *(longlong *)*param_1;
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80();
  }
  uVar2 = *(ulonglong *)((param_1[4] - 8) + param_1[5] * 8);
  *(ulonglong *)(uVar2 + 0x100) = param_1[7];
  param_1[7] = uVar2;
  do {
    uVar2 = *(ulonglong *)(param_1[7] + 0x100);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[7]);
    param_1[7] = uVar2;
  } while (uVar2 != 0);
                    /* WARNING: Could not recover jumptable at 0x000143497f5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[4]);
  return;
}



// FUNCTION 143497f70 FUN_143497f70 body=193 status=ok
// SIG undefined FUN_143497f70(void)

void FUN_143497f70(ulonglong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  for (iVar2 = (int)param_1[5] * 0x20 + -0x20 + (int)((longlong)(*param_1 - param_1[1]) >> 5);
      iVar2 != 0; iVar2 = iVar2 + -1) {
    if (4 < *(byte *)*param_1) {
      FUN_143411150();
    }
    *param_1 = *param_1 - 0x20;
    if (*param_1 < param_1[1]) {
      FUN_1434a25c0(param_1);
    }
  }
  if (4 < *(byte *)*param_1) {
    FUN_143411150();
  }
  uVar1 = *(ulonglong *)((param_1[4] - 8) + param_1[5] * 8);
  *(ulonglong *)(uVar1 + 0x400) = param_1[7];
  param_1[7] = uVar1;
  do {
    uVar1 = *(ulonglong *)(param_1[7] + 0x400);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[7]);
    param_1[7] = uVar1;
  } while (uVar1 != 0);
                    /* WARNING: Could not recover jumptable at 0x00014349802d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[4]);
  return;
}



// FUNCTION 143498040 FUN_143498040 body=126 status=ok
// SIG undefined FUN_143498040(void)

void FUN_143498040(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_145b0ea30;
  param_1[4] = &PTR_LAB_145b0ea78;
  lVar1 = param_1[0x1a];
  param_1[0x13] = &PTR_FUN_145b0b580;
  if (lVar1 != 0) {
    FUN_1434975b0(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  FUN_14349ebc0(param_1 + 0x17);
  FUN_14349ebc0(param_1 + 0x14);
  FUN_14345da30(param_1);
  return;
}



// FUNCTION 1434980c0 FUN_1434980c0 body=120 status=ok
// SIG undefined FUN_1434980c0(void)

void FUN_1434980c0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_145b0f180;
  param_1[4] = &PTR_LAB_145b0f1c8;
  lVar1 = param_1[0x14];
  param_1[0xd] = &PTR_FUN_145b0b580;
  if (lVar1 != 0) {
    FUN_1434975b0(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  FUN_14349ebc0(param_1 + 0x11);
  FUN_14349ebc0(param_1 + 0xe);
  FUN_143414980(param_1);
  return;
}



// FUNCTION 143498140 FUN_143498140 body=155 status=ok
// SIG undefined FUN_143498140(void)

void FUN_143498140(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_145b10ce8;
  param_1[4] = &PTR_LAB_145b10d30;
  lVar1 = param_1[0x15];
  param_1[0xe] = &PTR_FUN_145b0b580;
  if (lVar1 != 0) {
    FUN_1434975b0(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  FUN_14349ebc0(param_1 + 0x12);
  FUN_14349ebc0(param_1 + 0xf);
  *param_1 = &PTR_LAB_145b103e0;
  param_1[4] = &PTR_LAB_145b10428;
  if ((RefCountImpl *)param_1[0xd] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xd]);
  }
  FUN_143414980(param_1);
  return;
}



// FUNCTION 1434981e0 FUN_1434981e0 body=172 status=ok
// SIG undefined FUN_1434981e0(void)

void FUN_1434981e0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_145b0e0e0;
  param_1[4] = &PTR_LAB_145b0e128;
  lVar1 = param_1[0x16];
  param_1[0xf] = &PTR_FUN_145b0b580;
  if (lVar1 != 0) {
    FUN_1434975b0(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  FUN_14349ebc0(param_1 + 0x13);
  FUN_14349ebc0(param_1 + 0x10);
  *param_1 = &PTR_LAB_145b0dff0;
  param_1[4] = &PTR_LAB_145b0e038;
  if (param_1[0xe] != 0) {
    FUN_1432de450();
  }
  if (param_1[0xd] != 0) {
    FUN_1432de450();
  }
  FUN_143414980(param_1);
  return;
}



// FUNCTION 143498290 FUN_143498290 body=155 status=ok
// SIG undefined FUN_143498290(void)

void FUN_143498290(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_145b104d0;
  param_1[4] = &PTR_LAB_145b10518;
  lVar1 = param_1[0x15];
  param_1[0xe] = &PTR_FUN_145b0b580;
  if (lVar1 != 0) {
    FUN_1434975b0(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  FUN_14349ebc0(param_1 + 0x12);
  FUN_14349ebc0(param_1 + 0xf);
  *param_1 = &PTR_LAB_145b103e0;
  param_1[4] = &PTR_LAB_145b10428;
  if ((RefCountImpl *)param_1[0xd] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xd]);
  }
  FUN_143414980(param_1);
  return;
}



// FUNCTION 143498330 FUN_143498330 body=155 status=ok
// SIG undefined FUN_143498330(void)

void FUN_143498330(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_145b10ac0;
  param_1[4] = &PTR_LAB_145b10b08;
  lVar1 = param_1[0x15];
  param_1[0xe] = &PTR_FUN_145b0b580;
  if (lVar1 != 0) {
    FUN_1434975b0(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  FUN_14349ebc0(param_1 + 0x12);
  FUN_14349ebc0(param_1 + 0xf);
  *param_1 = &PTR_LAB_145b103e0;
  param_1[4] = &PTR_LAB_145b10428;
  if ((RefCountImpl *)param_1[0xd] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xd]);
  }
  FUN_143414980(param_1);
  return;
}



// FUNCTION 1434983d0 FUN_1434983d0 body=120 status=ok
// SIG undefined FUN_1434983d0(void)

void FUN_1434983d0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_145b0ef10;
  param_1[4] = &PTR_LAB_145b0ef58;
  lVar1 = param_1[0x15];
  param_1[0xe] = &PTR_FUN_145b0b580;
  if (lVar1 != 0) {
    FUN_1434975b0(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  FUN_14349ebc0(param_1 + 0x12);
  FUN_14349ebc0(param_1 + 0xf);
  FUN_143414980(param_1);
  return;
}



// FUNCTION 143498450 FUN_143498450 body=147 status=ok
// SIG undefined FUN_143498450(void)

void FUN_143498450(undefined8 *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  *param_1 = &PTR_LAB_145b0cc10;
  param_1[4] = &PTR_LAB_145b0cc58;
  lVar1 = param_1[0x15];
  param_1[0xe] = &PTR_FUN_145b0b580;
  if (lVar1 != 0) {
    FUN_1434975b0(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  FUN_14349ebc0(param_1 + 0x12);
  FUN_14349ebc0(param_1 + 0xf);
  piVar2 = (int *)param_1[0xd];
  if ((piVar2 != (int *)0x0) && (*piVar2 = *piVar2 + -1, *piVar2 == 0)) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  FUN_143414980(param_1);
  return;
}



// FUNCTION 1434984f0 FUN_1434984f0 body=155 status=ok
// SIG undefined FUN_1434984f0(void)

void FUN_1434984f0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_145b10f10;
  param_1[4] = &PTR_LAB_145b10f58;
  lVar1 = param_1[0x15];
  param_1[0xe] = &PTR_FUN_145b0b580;
  if (lVar1 != 0) {
    FUN_1434975b0(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  FUN_14349ebc0(param_1 + 0x12);
  FUN_14349ebc0(param_1 + 0xf);
  *param_1 = &PTR_LAB_145b103e0;
  param_1[4] = &PTR_LAB_145b10428;
  if ((RefCountImpl *)param_1[0xd] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xd]);
  }
  FUN_143414980(param_1);
  return;
}



// FUNCTION 143498590 FUN_143498590 body=147 status=ok
// SIG undefined FUN_143498590(void)

void FUN_143498590(undefined8 *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  *param_1 = &PTR_LAB_145b0d540;
  param_1[4] = &PTR_LAB_145b0d588;
  lVar1 = param_1[0x15];
  param_1[0xe] = &PTR_FUN_145b0b580;
  if (lVar1 != 0) {
    FUN_1434975b0(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  FUN_14349ebc0(param_1 + 0x12);
  FUN_14349ebc0(param_1 + 0xf);
  piVar2 = (int *)param_1[0xd];
  if ((piVar2 != (int *)0x0) && (*piVar2 = *piVar2 + -1, *piVar2 == 0)) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  FUN_143414980(param_1);
  return;
}



// FUNCTION 143498630 FUN_143498630 body=126 status=ok
// SIG undefined FUN_143498630(void)

void FUN_143498630(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_145b0d9d8;
  param_1[4] = &PTR_LAB_145b0da20;
  lVar1 = param_1[0x19];
  param_1[0x12] = &PTR_FUN_145b0b580;
  if (lVar1 != 0) {
    FUN_1434975b0(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  FUN_14349ebc0(param_1 + 0x16);
  FUN_14349ebc0(param_1 + 0x13);
  FUN_143414980(param_1);
  return;
}



// FUNCTION 1434986b0 FUN_1434986b0 body=126 status=ok
// SIG undefined FUN_1434986b0(void)

void FUN_1434986b0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_145b0f3f0;
  param_1[4] = &PTR_LAB_145b0f438;
  lVar1 = param_1[0x1a];
  param_1[0x13] = &PTR_FUN_145b0b580;
  if (lVar1 != 0) {
    FUN_1434975b0(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  FUN_14349ebc0(param_1 + 0x17);
  FUN_14349ebc0(param_1 + 0x14);
  FUN_143414980(param_1);
  return;
}



// FUNCTION 143498730 FUN_143498730 body=155 status=ok
// SIG undefined FUN_143498730(void)

void FUN_143498730(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_145b10670;
  param_1[4] = &PTR_LAB_145b106b8;
  lVar1 = param_1[0x15];
  param_1[0xe] = &PTR_FUN_145b0b580;
  if (lVar1 != 0) {
    FUN_1434975b0(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  FUN_14349ebc0(param_1 + 0x12);
  FUN_14349ebc0(param_1 + 0xf);
  *param_1 = &PTR_LAB_145b103e0;
  param_1[4] = &PTR_LAB_145b10428;
  if ((RefCountImpl *)param_1[0xd] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xd]);
  }
  FUN_143414980(param_1);
  return;
}



// FUNCTION 1434987d0 FUN_1434987d0 body=120 status=ok
// SIG undefined FUN_1434987d0(void)

void FUN_1434987d0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_145b0e4a8;
  param_1[4] = &PTR_LAB_145b0e4f0;
  lVar1 = param_1[0x14];
  param_1[0xd] = &PTR_FUN_145b0b580;
  if (lVar1 != 0) {
    FUN_1434975b0(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  FUN_14349ebc0(param_1 + 0x11);
  FUN_14349ebc0(param_1 + 0xe);
  FUN_143414980(param_1);
  return;
}



// FUNCTION 143498850 FUN_143498850 body=155 status=ok
// SIG undefined FUN_143498850(void)

void FUN_143498850(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_145b10898;
  param_1[4] = &PTR_LAB_145b108e0;
  lVar1 = param_1[0x15];
  param_1[0xe] = &PTR_FUN_145b0b580;
  if (lVar1 != 0) {
    FUN_1434975b0(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  FUN_14349ebc0(param_1 + 0x12);
  FUN_14349ebc0(param_1 + 0xf);
  *param_1 = &PTR_LAB_145b103e0;
  param_1[4] = &PTR_LAB_145b10428;
  if ((RefCountImpl *)param_1[0xd] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xd]);
  }
  FUN_143414980(param_1);
  return;
}



// FUNCTION 1434988f0 FUN_1434988f0 body=120 status=ok
// SIG undefined FUN_1434988f0(void)

void FUN_1434988f0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_145b0f618;
  param_1[4] = &PTR_LAB_145b0f660;
  lVar1 = param_1[0x14];
  param_1[0xd] = &PTR_FUN_145b0b580;
  if (lVar1 != 0) {
    FUN_1434975b0(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  FUN_14349ebc0(param_1 + 0x11);
  FUN_14349ebc0(param_1 + 0xe);
  FUN_143414980(param_1);
  return;
}



// FUNCTION 143498970 FUN_143498970 body=123 status=ok
// SIG undefined FUN_143498970(void)

void FUN_143498970(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_145b0c188;
  param_1[4] = &PTR_LAB_145b0c1d0;
  lVar1 = param_1[0x16];
  param_1[0xf] = &PTR_FUN_145b0b580;
  if (lVar1 != 0) {
    FUN_1434975b0(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  FUN_14349ebc0(param_1 + 0x13);
  FUN_14349ebc0(param_1 + 0x10);
  FUN_143414980(param_1);
  return;
}



// FUNCTION 1434989f0 FUN_1434989f0 body=120 status=ok
// SIG undefined FUN_1434989f0(void)

void FUN_1434989f0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_145b0b588;
  param_1[4] = &PTR_LAB_145b0b5d0;
  lVar1 = param_1[0x14];
  param_1[0xd] = &PTR_FUN_145b0b580;
  if (lVar1 != 0) {
    FUN_1434975b0(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  FUN_14349ebc0(param_1 + 0x11);
  FUN_14349ebc0(param_1 + 0xe);
  FUN_143414980(param_1);
  return;
}



// FUNCTION 143498a70 FUN_143498a70 body=120 status=ok
// SIG undefined FUN_143498a70(void)

void FUN_143498a70(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_145b0d768;
  param_1[4] = &PTR_LAB_145b0d7b0;
  lVar1 = param_1[0x14];
  param_1[0xd] = &PTR_FUN_145b0b580;
  if (lVar1 != 0) {
    FUN_1434975b0(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  FUN_14349ebc0(param_1 + 0x11);
  FUN_14349ebc0(param_1 + 0xe);
  FUN_143414980(param_1);
  return;
}



// FUNCTION 143498af0 FUN_143498af0 body=129 status=ok
// SIG undefined FUN_143498af0(void)

void FUN_143498af0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_145b0bef0;
  param_1[4] = &PTR_LAB_145b0bf60;
  lVar1 = param_1[0x15];
  param_1[0xe] = &PTR_FUN_145b0b580;
  if (lVar1 != 0) {
    FUN_1434975b0(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  FUN_14349ebc0(param_1 + 0x12);
  FUN_14349ebc0(param_1 + 0xf);
  FUN_143315ea0(param_1 + 0xd);
  FUN_143414980(param_1);
  return;
}



// FUNCTION 143498b80 FUN_143498b80 body=150 status=ok
// SIG undefined FUN_143498b80(void)

void FUN_143498b80(undefined8 *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  *param_1 = &PTR_LAB_145b0bc58;
  param_1[4] = &PTR_LAB_145b0bca0;
  lVar1 = param_1[0x16];
  param_1[0xf] = &PTR_FUN_145b0b580;
  if (lVar1 != 0) {
    FUN_1434975b0(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  FUN_14349ebc0(param_1 + 0x13);
  FUN_14349ebc0(param_1 + 0x10);
  piVar2 = (int *)param_1[0xd];
  if ((piVar2 != (int *)0x0) && (*piVar2 = *piVar2 + -1, *piVar2 == 0)) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  FUN_143414980(param_1);
  return;
}



// FUNCTION 143498c20 FUN_143498c20 body=164 status=ok
// SIG undefined FUN_143498c20(void)

void FUN_143498c20(undefined8 *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  *param_1 = &PTR_LAB_145b0eca0;
  param_1[4] = &PTR_LAB_145b0ece8;
  lVar1 = param_1[0x16];
  param_1[0xf] = &PTR_FUN_145b0b580;
  if (lVar1 != 0) {
    FUN_1434975b0(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  FUN_14349ebc0(param_1 + 0x13);
  FUN_14349ebc0(param_1 + 0x10);
  uVar2 = param_1[0xe];
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar2 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar2 & 0xfffffffffffffffc);
  }
  FUN_143414980(param_1);
  return;
}



// FUNCTION 143498cd0 FUN_143498cd0 body=120 status=ok
// SIG undefined FUN_143498cd0(void)

void FUN_143498cd0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_145b0e280;
  param_1[4] = &PTR_LAB_145b0e2c8;
  lVar1 = param_1[0x14];
  param_1[0xd] = &PTR_FUN_145b0b580;
  if (lVar1 != 0) {
    FUN_1434975b0(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  FUN_14349ebc0(param_1 + 0x11);
  FUN_14349ebc0(param_1 + 0xe);
  FUN_143414980(param_1);
  return;
}



// FUNCTION 143498d50 FUN_143498d50 body=120 status=ok
// SIG undefined FUN_143498d50(void)

void FUN_143498d50(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_145b0dc00;
  param_1[4] = &PTR_LAB_145b0dc48;
  lVar1 = param_1[0x14];
  param_1[0xd] = &PTR_FUN_145b0b580;
  if (lVar1 != 0) {
    FUN_1434975b0(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  FUN_14349ebc0(param_1 + 0x11);
  FUN_14349ebc0(param_1 + 0xe);
  FUN_143414980(param_1);
  return;
}



// FUNCTION 143498dd0 FUN_143498dd0 body=123 status=ok
// SIG undefined FUN_143498dd0(void)

void FUN_143498dd0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_145b0ff08;
  param_1[4] = &PTR_LAB_145b0ff50;
  lVar1 = param_1[0x16];
  param_1[0xf] = &PTR_FUN_145b0b580;
  if (lVar1 != 0) {
    FUN_1434975b0(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  FUN_14349ebc0(param_1 + 0x13);
  FUN_14349ebc0(param_1 + 0x10);
  FUN_143499760(param_1);
  return;
}



// FUNCTION 143498e50 FUN_143498e50 body=135 status=ok
// SIG undefined FUN_143498e50(void)

void FUN_143498e50(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  *param_1 = &PTR_LAB_145b0e7c0;
  param_1[4] = &PTR_LAB_145b0e808;
  lVar2 = param_1[0x15];
  param_1[0xe] = &PTR_FUN_145b0b580;
  if (lVar2 != 0) {
    FUN_1434975b0(lVar2);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
  }
  FUN_14349ebc0(param_1 + 0x12);
  FUN_14349ebc0(param_1 + 0xf);
  piVar1 = (int *)(param_1[0xd] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143414980(param_1);
  return;
}



// FUNCTION 143498ee0 FUN_143498ee0 body=135 status=ok
// SIG undefined FUN_143498ee0(void)

void FUN_143498ee0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_145b0c430;
  param_1[4] = &PTR_LAB_145b0c478;
  lVar1 = param_1[0x1a];
  param_1[0x13] = &PTR_FUN_145b0b580;
  if (lVar1 != 0) {
    FUN_1434975b0(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  FUN_14349ebc0(param_1 + 0x17);
  FUN_14349ebc0(param_1 + 0x14);
  FUN_143dee360(param_1 + 0xd);
  FUN_143414980(param_1);
  return;
}



// FUNCTION 143498f70 FUN_143498f70 body=188 status=ok
// SIG undefined FUN_143498f70(void)

void FUN_143498f70(undefined8 *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  *param_1 = &PTR_LAB_145b0d2d0;
  param_1[4] = &PTR_LAB_145b0d318;
  lVar1 = param_1[0x16];
  param_1[0xf] = &PTR_FUN_145b0b580;
  if (lVar1 != 0) {
    FUN_1434975b0(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  FUN_14349ebc0(param_1 + 0x13);
  FUN_14349ebc0(param_1 + 0x10);
  *param_1 = &PTR_LAB_145b0d1e0;
  param_1[4] = &PTR_LAB_145b0d228;
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[0xe]);
  piVar2 = (int *)param_1[0xd];
  if ((piVar2 != (int *)0x0) && (*piVar2 = *piVar2 + -1, *piVar2 == 0)) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  FUN_143414980(param_1);
  return;
}



// FUNCTION 143499030 FUN_143499030 body=147 status=ok
// SIG undefined FUN_143499030(void)

void FUN_143499030(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_145b0fc98;
  param_1[4] = &PTR_LAB_145b0fce0;
  lVar1 = param_1[0x23];
  param_1[0x1c] = &PTR_FUN_145b0b580;
  if (lVar1 != 0) {
    FUN_1434975b0(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  FUN_14349ebc0(param_1 + 0x20);
  FUN_14349ebc0(param_1 + 0x1d);
  FUN_1433dedf0(param_1 + 0x17);
  FUN_1433dd700(param_1 + 0xd);
  FUN_143414980(param_1);
  return;
}



// FUNCTION 1434990d0 FUN_1434990d0 body=126 status=ok
// SIG undefined FUN_1434990d0(void)

void FUN_1434990d0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_145b10240;
  param_1[4] = &PTR_LAB_145b10288;
  lVar1 = param_1[0x19];
  param_1[0x12] = &PTR_FUN_145b0b580;
  if (lVar1 != 0) {
    FUN_1434975b0(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  FUN_14349ebc0(param_1 + 0x16);
  FUN_14349ebc0(param_1 + 0x13);
  FUN_1434761a0(param_1);
  return;
}



// FUNCTION 143499150 FUN_143499150 body=126 status=ok
// SIG undefined FUN_143499150(void)

void FUN_143499150(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_145b0de70;
  param_1[4] = &PTR_LAB_145b0deb8;
  lVar1 = param_1[0x19];
  param_1[0x12] = &PTR_FUN_145b0b580;
  if (lVar1 != 0) {
    FUN_1434975b0(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  FUN_14349ebc0(param_1 + 0x16);
  FUN_14349ebc0(param_1 + 0x13);
  Scaleform::GFx::AS2::TransformObject::~TransformObject(param_1);
  return;
}



// FUNCTION 1434991d0 FUN_1434991d0 body=156 status=ok
// SIG undefined FUN_1434991d0(void)

void FUN_1434991d0(undefined8 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1[0x18] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143497540(param_1 + 0x14);
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[0x10]);
  if ((RefCountNTSImpl *)param_1[0xf] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[0xf]);
  }
  piVar1 = (int *)param_1[0xe];
  if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 < 1)) {
    FUN_14336bed0(piVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar1);
  }
  *param_1 = &PTR_LAB_145b0ad40;
  param_1[4] = &PTR_LAB_145b0adc8;
  FUN_143414980(param_1);
  return;
}



// FUNCTION 143499270 FUN_143499270 body=116 status=ok
// SIG undefined FUN_143499270(void)

void FUN_143499270(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[7];
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80();
  }
  *param_1 = &PTR_FUN_145b0b0f0;
  param_1[6] = &PTR_FUN_145b0aa60;
  param_1[1] = &PTR_LAB_145b0b230;
  FUN_143497d00(param_1 + 5);
  FUN_143414300(param_1 + 1);
  *param_1 = &PTR_FUN_145b0aa60;
  return;
}



// FUNCTION 1434992f0 FUN_1434992f0 body=146 status=ok
// SIG undefined FUN_1434992f0(void)

void FUN_1434992f0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = param_1[0xc];
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
    FUN_1434a2b80();
  }
  if (4 < *(byte *)(param_1 + 8)) {
    FUN_143411150(param_1 + 8);
  }
  piVar1 = (int *)(param_1[7] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_1 = &PTR_FUN_145b0b0f0;
  param_1[6] = &PTR_FUN_145b0aa60;
  param_1[1] = &PTR_LAB_145b0b230;
  FUN_143497d00(param_1 + 5);
  FUN_143414300(param_1 + 1);
  *param_1 = &PTR_FUN_145b0aa60;
  return;
}



// FUNCTION 143499390 FUN_143499390 body=125 status=ok
// SIG undefined FUN_143499390(void)

void FUN_143499390(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1[1] != 0) {
    lVar2 = 0;
    lVar1 = *(longlong *)(param_1[1] + 8) + 1;
    do {
      if (*(longlong *)(param_1[1] + 0x10 + lVar2) != -2) {
        *(undefined8 *)(param_1[1] + 0x10 + lVar2) = 0xfffffffffffffffe;
      }
      lVar2 = lVar2 + 0x18;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    if (param_1[1] != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    param_1[1] = 0;
    *param_1 = &PTR_FUN_145af1858;
    return;
  }
  *param_1 = &PTR_FUN_145af1858;
  return;
}



// FUNCTION 143499410 FUN_143499410 body=172 status=ok
// SIG undefined FUN_143499410(void)

void FUN_143499410(undefined8 *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_145b0b0d8;
  FUN_1434975b0(param_1 + 0x30);
  if (4 < *(byte *)(param_1 + 0x2b)) {
    FUN_143411150();
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[0x28]);
  FUN_143497e80(param_1 + 0x1f);
  pbVar1 = (byte *)(param_1 + 0x19);
  FUN_143497710(pbVar1);
  lVar2 = 4;
  do {
    pbVar1 = pbVar1 + -0x20;
    lVar2 = lVar2 + -1;
    if (4 < *pbVar1) {
      FUN_143411150(pbVar1);
    }
  } while (lVar2 != 0);
  FUN_143497f70(param_1 + 1);
  *param_1 = &PTR_FUN_145af8cf0;
  return;
}



// FUNCTION 1434994c0 FUN_1434994c0 body=151 status=ok
// SIG undefined FUN_1434994c0(void)

void FUN_1434994c0(RefCountImplCore *param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  if (*(RefCountImpl **)(param_1 + 0x30) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x30));
  }
  uVar1 = *(ulonglong *)(param_1 + 0x28);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  uVar1 = *(ulonglong *)(param_1 + 0x20);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
  }
  *(undefined ***)param_1 = &PTR_FUN_145af9d58;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 143499560 FUN_143499560 body=215 status=ok
// SIG undefined FUN_143499560(void)

void FUN_143499560(undefined8 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  
  if ((RefCountImpl *)param_1[0x18] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x18]);
  }
  if (4 < *(byte *)(param_1 + 0x14)) {
    FUN_143411150(param_1 + 0x14);
  }
  if ((RefCountImpl *)param_1[0x13] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x13]);
  }
  if (4 < *(byte *)(param_1 + 0xf)) {
    FUN_143411150(param_1 + 0xf);
  }
  if (4 < *(byte *)(param_1 + 0xb)) {
    FUN_143411150(param_1 + 0xb);
  }
  if (4 < *(byte *)(param_1 + 7)) {
    FUN_143411150(param_1 + 7);
  }
  piVar1 = (int *)param_1[6];
  if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 < 1)) {
    FUN_14336bed0(piVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar1);
  }
  *param_1 = &PTR_FUN_145b0aac0;
  uVar2 = param_1[3];
  iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar2 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar3 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar2 & 0xfffffffffffffffc);
  }
  return;
}



// FUNCTION 143499640 FUN_143499640 body=170 status=ok
// SIG undefined FUN_143499640(void)

void FUN_143499640(RefCountImplCore *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  piVar1 = *(int **)(param_1 + 0x70);
  if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 < 1)) {
    FUN_14336bed0(piVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar1);
  }
  FUN_1434976a0(param_1 + 0x40);
  piVar1 = (int *)(*(longlong *)(param_1 + 0x38) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = *(int **)(param_1 + 0x30);
  if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
    FUN_1434a2b80();
  }
  FUN_14349ebc0(param_1 + 0x10);
  *(undefined ***)param_1 = &PTR_FUN_145b0aad0;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1434996f0 FUN_1434996f0 body=102 status=ok
// SIG undefined FUN_1434996f0(void)

void FUN_1434996f0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_145b0b0b0;
  if (4 < *(byte *)(param_1 + 0xd)) {
    FUN_143411150();
  }
  if (4 < *(byte *)(param_1 + 9)) {
    FUN_143411150(param_1 + 9);
  }
  lVar1 = param_1[5];
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80();
  }
  FUN_143497ba0(param_1 + 4);
  *param_1 = &PTR_StartProfileThreadUsage_145b0ab30;
  return;
}



// FUNCTION 143499760 FUN_143499760 body=113 status=ok
// SIG undefined FUN_143499760(void)

void FUN_143499760(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = *(ulonglong *)(param_1 + 0x70) & 0xfffffffffffffffc;
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar2 + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar2);
  }
  uVar2 = *(ulonglong *)(param_1 + 0x68) & 0xfffffffffffffffc;
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar2 + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar2);
  }
  FUN_143414980(param_1);
  return;
}



// FUNCTION 1434997e0 ~TransformObject body=164 status=ok
// SIG undefined ~TransformObject(void)

void Scaleform::GFx::AS2::TransformObject::~TransformObject(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x88);
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80();
  }
  lVar1 = *(longlong *)(param_1 + 0x80);
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80();
  }
  lVar1 = *(longlong *)(param_1 + 0x78);
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80();
  }
  piVar2 = *(int **)(param_1 + 0x70);
  if ((piVar2 != (int *)0x0) && (*piVar2 = *piVar2 + -1, *piVar2 < 1)) {
    FUN_14336bed0(piVar2);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar2);
  }
  FUN_143414980(param_1);
  return;
}



// FUNCTION 143499890 FUN_143499890 body=151 status=ok
// SIG undefined FUN_143499890(void)

longlong * FUN_143499890(longlong *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = param_2[1];
  uVar3 = param_1[1];
  FUN_1434a3be0(param_1,param_1,uVar4);
  if (uVar3 < uVar4) {
    puVar1 = (undefined1 *)(uVar3 * 0x20 + *param_1);
    for (lVar2 = uVar4 - uVar3; lVar2 != 0; lVar2 = lVar2 + -1) {
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = 0;
      }
      puVar1 = puVar1 + 0x20;
    }
  }
  uVar3 = 0;
  uVar4 = uVar3;
  if (param_1[1] != 0) {
    do {
      FUN_143411240(*param_1 + uVar3,*param_2 + uVar3);
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 + 0x20;
    } while (uVar4 < (ulonglong)param_1[1]);
  }
  return param_1;
}



// FUNCTION 143499930 FUN_143499930 body=151 status=ok
// SIG undefined FUN_143499930(void)

longlong * FUN_143499930(longlong *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = param_2[1];
  uVar3 = param_1[1];
  FUN_1434a3d60(param_1,param_1,uVar4);
  if (uVar3 < uVar4) {
    puVar1 = (undefined1 *)(uVar3 * 0x20 + *param_1);
    for (lVar2 = uVar4 - uVar3; lVar2 != 0; lVar2 = lVar2 + -1) {
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = 0;
      }
      puVar1 = puVar1 + 0x20;
    }
  }
  uVar3 = 0;
  uVar4 = uVar3;
  if (param_1[1] != 0) {
    do {
      FUN_143411240(*param_1 + uVar3,*param_2 + uVar3);
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 + 0x20;
    } while (uVar4 < (ulonglong)param_1[1]);
  }
  return param_1;
}



// FUNCTION 1434999d0 FUN_1434999d0 body=130 status=ok
// SIG undefined FUN_1434999d0(void)

longlong * FUN_1434999d0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_1 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_1 = lVar2;
  param_1[1] = param_2[1];
  lVar2 = param_2[2];
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
  }
  lVar2 = param_1[2];
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
    FUN_1434a2b80();
  }
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 143499a60 FUN_143499a60 body=133 status=ok
// SIG undefined FUN_143499a60(void)

void FUN_143499a60(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)*param_2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_1 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_1 = lVar2;
  plVar3 = (longlong *)param_2[1];
  param_1[1] = *plVar3;
  lVar2 = plVar3[1];
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
  }
  lVar2 = param_1[2];
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
    FUN_1434a2b80();
  }
  param_1[2] = plVar3[1];
  return;
}



// FUNCTION 143499af0 FUN_143499af0 body=89 status=ok
// SIG undefined FUN_143499af0(void)

longlong * FUN_143499af0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_1 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_1 = lVar2;
  FUN_143410a60(param_1 + 1,param_2 + 1);
  FUN_143411240(param_1 + 4,param_2 + 4);
  return param_1;
}



// FUNCTION 143499b50 FUN_143499b50 body=91 status=ok
// SIG undefined FUN_143499b50(void)

void FUN_143499b50(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)*param_2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_1 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_1 = lVar2;
  lVar2 = param_2[1];
  FUN_143410a60(param_1 + 1,lVar2);
  FUN_143411240(param_1 + 4,lVar2 + 0x18);
  return;
}



// FUNCTION 143499bb0 FUN_143499bb0 body=86 status=ok
// SIG undefined FUN_143499bb0(void)

void FUN_143499bb0(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)*param_2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_1 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_1 = lVar2;
  lVar2 = param_2[1];
  FUN_143411240(param_1 + 1,lVar2);
  *(undefined1 *)((longlong)param_1 + 9) = *(undefined1 *)(lVar2 + 1);
  return;
}



// FUNCTION 143499c10 FUN_143499c10 body=137 status=ok
// SIG undefined FUN_143499c10(void)

longlong * FUN_143499c10(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *param_2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_1 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_1 = lVar2;
  plVar3 = param_2 + 2;
  if (param_2 == (longlong *)0xfffffffffffffff8) {
    plVar3 = (longlong *)0x0;
  }
  lVar2 = *plVar3;
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
  }
  lVar2 = param_1[2];
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
    FUN_1434a2b80();
  }
  param_1[2] = *plVar3;
  return param_1;
}



// FUNCTION 143499ca0 FUN_143499ca0 body=137 status=ok
// SIG undefined FUN_143499ca0(void)

void FUN_143499ca0(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)*param_2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_1 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_1 = lVar2;
  plVar3 = (longlong *)(param_2[1] + 8);
  if (param_2[1] == 0) {
    plVar3 = (longlong *)0x0;
  }
  lVar2 = *plVar3;
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
  }
  lVar2 = param_1[2];
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
    FUN_1434a2b80();
  }
  param_1[2] = *plVar3;
  return;
}



// FUNCTION 143499d30 FUN_143499d30 body=93 status=ok
// SIG undefined FUN_143499d30(void)

undefined4 * FUN_143499d30(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  lVar1 = *(longlong *)(param_2 + 2);
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1U & 0x8fffffff;
  }
  lVar1 = *(longlong *)(param_1 + 2);
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80();
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 143499d90 operator= body=94 status=ok
// SIG undefined operator=(void)

void Scaleform::
     HashNode<enum_Scaleform::GFx::AS2::ASBuiltinType,Scaleform::Ptr<Scaleform::GFx::AS2::Object>,Scaleform::FixedSizeHash<enum_Scaleform::GFx::AS2::ASBuiltinType>_>
     ::operator=(undefined4 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = *(undefined4 *)*param_2;
  plVar1 = (longlong *)param_2[1];
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
  }
  lVar2 = *(longlong *)(param_1 + 2);
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
    FUN_1434a2b80();
  }
  *(longlong *)(param_1 + 2) = *plVar1;
  return;
}



// FUNCTION 143499df0 FUN_143499df0 body=79 status=ok
// SIG undefined FUN_143499df0(void)

longlong * FUN_143499df0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    *(uint *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1U & 0x8fffffff;
  }
  lVar1 = *param_1;
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80();
  }
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 143499e40 FUN_143499e40 body=46 status=ok
// SIG undefined FUN_143499e40(void)

undefined8 * FUN_143499e40(undefined8 *param_1,undefined8 param_2)

{
  if ((RefCountImpl *)*param_1 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)*param_1);
  }
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 143499e70 FUN_143499e70 body=54 status=ok
// SIG undefined FUN_143499e70(void)

longlong * FUN_143499e70(longlong *param_1,longlong param_2)

{
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  if ((RefCountNTSImpl *)*param_1 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*param_1);
  }
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 143499eb0 FUN_143499eb0 body=47 status=ok
// SIG undefined FUN_143499eb0(void)

void FUN_143499eb0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_1 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_1 = lVar2;
  return;
}



// FUNCTION 143499ee0 FUN_143499ee0 body=167 status=ok
// SIG undefined FUN_143499ee0(void)

longlong * FUN_143499ee0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1U & 0x8fffffff;
  }
  lVar1 = *param_1;
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80();
  }
  *param_1 = *param_2;
  piVar2 = (int *)param_2[1];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  piVar2 = (int *)param_1[1];
  if ((piVar2 != (int *)0x0) && (*piVar2 = *piVar2 + -1, *piVar2 < 1)) {
    FUN_14336bed0(piVar2);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar2);
  }
  param_1[1] = param_2[1];
  FUN_143410a60(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 143499f90 operator> body=34 status=ok
// SIG undefined operator>(void)

bool Scaleform::GFx::ASString::operator>(longlong *param_1,longlong *param_2)

{
  char cVar1;
  
  if (*param_1 == *param_2) {
    return false;
  }
  cVar1 = FUN_143360290();
  return cVar1 == '\0';
}



// FUNCTION 14349a490 FUN_14349a490 body=89 status=ok
// SIG undefined FUN_14349a490(void)

undefined8 FUN_14349a490(undefined8 param_1,ulonglong param_2)

{
  FUN_143498040();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 14349a4f0 FUN_14349a4f0 body=89 status=ok
// SIG undefined FUN_14349a4f0(void)

undefined8 FUN_14349a4f0(undefined8 param_1,ulonglong param_2)

{
  FUN_1434980c0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 14349a550 FUN_14349a550 body=89 status=ok
// SIG undefined FUN_14349a550(void)

undefined8 FUN_14349a550(undefined8 param_1,ulonglong param_2)

{
  FUN_143498140();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 14349a5b0 FUN_14349a5b0 body=89 status=ok
// SIG undefined FUN_14349a5b0(void)

undefined8 FUN_14349a5b0(undefined8 param_1,ulonglong param_2)

{
  FUN_1434981e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 14349a610 FUN_14349a610 body=89 status=ok
// SIG undefined FUN_14349a610(void)

undefined8 FUN_14349a610(undefined8 param_1,ulonglong param_2)

{
  FUN_143498290();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 14349a670 FUN_14349a670 body=89 status=ok
// SIG undefined FUN_14349a670(void)

undefined8 FUN_14349a670(undefined8 param_1,ulonglong param_2)

{
  FUN_143498330();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 14349a6d0 FUN_14349a6d0 body=89 status=ok
// SIG undefined FUN_14349a6d0(void)

undefined8 FUN_14349a6d0(undefined8 param_1,ulonglong param_2)

{
  FUN_1434983d0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 14349a730 FUN_14349a730 body=89 status=ok
// SIG undefined FUN_14349a730(void)

undefined8 FUN_14349a730(undefined8 param_1,ulonglong param_2)

{
  FUN_143498450();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 14349a790 FUN_14349a790 body=89 status=ok
// SIG undefined FUN_14349a790(void)

undefined8 FUN_14349a790(undefined8 param_1,ulonglong param_2)

{
  FUN_1434984f0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 14349a7f0 FUN_14349a7f0 body=89 status=ok
// SIG undefined FUN_14349a7f0(void)

undefined8 FUN_14349a7f0(undefined8 param_1,ulonglong param_2)

{
  FUN_143498590();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 14349a850 FUN_14349a850 body=89 status=ok
// SIG undefined FUN_14349a850(void)

undefined8 FUN_14349a850(undefined8 param_1,ulonglong param_2)

{
  FUN_143498630();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 14349a8b0 FUN_14349a8b0 body=89 status=ok
// SIG undefined FUN_14349a8b0(void)

undefined8 FUN_14349a8b0(undefined8 param_1,ulonglong param_2)

{
  FUN_1434986b0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 14349a910 FUN_14349a910 body=89 status=ok
// SIG undefined FUN_14349a910(void)

undefined8 FUN_14349a910(undefined8 param_1,ulonglong param_2)

{
  FUN_143498730();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 14349a970 FUN_14349a970 body=89 status=ok
// SIG undefined FUN_14349a970(void)

undefined8 FUN_14349a970(undefined8 param_1,ulonglong param_2)

{
  FUN_1434987d0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 14349a9d0 FUN_14349a9d0 body=89 status=ok
// SIG undefined FUN_14349a9d0(void)

undefined8 FUN_14349a9d0(undefined8 param_1,ulonglong param_2)

{
  FUN_143498850();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 14349aa30 FUN_14349aa30 body=89 status=ok
// SIG undefined FUN_14349aa30(void)

undefined8 FUN_14349aa30(undefined8 param_1,ulonglong param_2)

{
  FUN_1434988f0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 14349aa90 FUN_14349aa90 body=89 status=ok
// SIG undefined FUN_14349aa90(void)

undefined8 FUN_14349aa90(undefined8 param_1,ulonglong param_2)

{
  FUN_143498970();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 14349aaf0 FUN_14349aaf0 body=89 status=ok
// SIG undefined FUN_14349aaf0(void)

undefined8 FUN_14349aaf0(undefined8 param_1,ulonglong param_2)

{
  FUN_1434989f0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 14349ab50 FUN_14349ab50 body=89 status=ok
// SIG undefined FUN_14349ab50(void)

undefined8 FUN_14349ab50(undefined8 param_1,ulonglong param_2)

{
  FUN_143498a70();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 14349abb0 FUN_14349abb0 body=89 status=ok
// SIG undefined FUN_14349abb0(void)

undefined8 FUN_14349abb0(undefined8 param_1,ulonglong param_2)

{
  FUN_143498af0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 14349ac10 FUN_14349ac10 body=89 status=ok
// SIG undefined FUN_14349ac10(void)

undefined8 FUN_14349ac10(undefined8 param_1,ulonglong param_2)

{
  FUN_143498b80();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 14349ac70 FUN_14349ac70 body=89 status=ok
// SIG undefined FUN_14349ac70(void)

undefined8 FUN_14349ac70(undefined8 param_1,ulonglong param_2)

{
  FUN_143498c20();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 14349acd0 FUN_14349acd0 body=89 status=ok
// SIG undefined FUN_14349acd0(void)

undefined8 FUN_14349acd0(undefined8 param_1,ulonglong param_2)

{
  FUN_143498cd0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 14349ad30 FUN_14349ad30 body=89 status=ok
// SIG undefined FUN_14349ad30(void)

undefined8 FUN_14349ad30(undefined8 param_1,ulonglong param_2)

{
  FUN_143498d50();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 14349ad90 FUN_14349ad90 body=89 status=ok
// SIG undefined FUN_14349ad90(void)

undefined8 FUN_14349ad90(undefined8 param_1,ulonglong param_2)

{
  FUN_143498dd0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 14349adf0 FUN_14349adf0 body=89 status=ok
// SIG undefined FUN_14349adf0(void)

undefined8 FUN_14349adf0(undefined8 param_1,ulonglong param_2)

{
  FUN_143498e50();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 14349ae50 FUN_14349ae50 body=89 status=ok
// SIG undefined FUN_14349ae50(void)

undefined8 FUN_14349ae50(undefined8 param_1,ulonglong param_2)

{
  FUN_143498ee0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 14349aeb0 FUN_14349aeb0 body=89 status=ok
// SIG undefined FUN_14349aeb0(void)

undefined8 FUN_14349aeb0(undefined8 param_1,ulonglong param_2)

{
  FUN_143498f70();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 14349af10 FUN_14349af10 body=89 status=ok
// SIG undefined FUN_14349af10(void)

undefined8 FUN_14349af10(undefined8 param_1,ulonglong param_2)

{
  FUN_143499030();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 14349af70 FUN_14349af70 body=89 status=ok
// SIG undefined FUN_14349af70(void)

undefined8 FUN_14349af70(undefined8 param_1,ulonglong param_2)

{
  FUN_1434990d0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 14349afd0 FUN_14349afd0 body=89 status=ok
// SIG undefined FUN_14349afd0(void)

undefined8 FUN_14349afd0(undefined8 param_1,ulonglong param_2)

{
  FUN_143499150();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 14349b030 FUN_14349b030 body=73 status=ok
// SIG undefined FUN_14349b030(void)

undefined8 * FUN_14349b030(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_StartProfileThreadUsage_145b0ab30;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14349b080 FUN_14349b080 body=129 status=ok
// SIG undefined FUN_14349b080(void)

RefCountImplCore * FUN_14349b080(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145b0ab60;
  FUN_14349e200(param_1,0);
  *(undefined ***)(param_1 + 0x40) = &PTR_StartProfileThreadUsage_145b0ab30;
  Scaleform::ArrayPagedBase<unsigned_int,6,64,Scaleform::AllocatorPagedLH_POD<unsigned_int,2>_>::
  ClearAndRelease(param_1 + 0x10);
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 14349b110 FUN_14349b110 body=73 status=ok
// SIG undefined FUN_14349b110(void)

undefined8 * FUN_14349b110(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145b0a6f0;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14349b160 FUN_14349b160 body=99 status=ok
// SIG undefined FUN_14349b160(void)

RefCountImplCore * FUN_14349b160(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145b0c328;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14349b1d0 FUN_14349b1d0 body=99 status=ok
// SIG undefined FUN_14349b1d0(void)

RefCountImplCore * FUN_14349b1d0(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145b0aad0;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14349b240 FUN_14349b240 body=116 status=ok
// SIG undefined FUN_14349b240(void)

RefCountImplCore * FUN_14349b240(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145b0a870;
  if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14349b2c0 FUN_14349b2c0 body=129 status=ok
// SIG undefined FUN_14349b2c0(void)

RefCountImplCore * FUN_14349b2c0(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145b0ab60;
  FUN_14349e200(param_1,0);
  *(undefined ***)(param_1 + 0x40) = &PTR_StartProfileThreadUsage_145b0ab30;
  Scaleform::ArrayPagedBase<unsigned_int,6,64,Scaleform::AllocatorPagedLH_POD<unsigned_int,2>_>::
  ClearAndRelease(param_1 + 0x10);
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 14349b350 FUN_14349b350 body=62 status=ok
// SIG undefined FUN_14349b350(void)

longlong * FUN_14349b350(longlong *param_1,ulonglong param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*param_1 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14349b390 FUN_14349b390 body=125 status=ok
// SIG undefined FUN_14349b390(void)

RefCountNTSImplCore * FUN_14349b390(RefCountNTSImplCore *param_1,ulonglong param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145b0ab78;
  FUN_143497780(param_1 + 0x18);
  if (*(RefCountImpl **)(param_1 + 0x10) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x10));
  }
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14349b410 FUN_14349b410 body=124 status=ok
// SIG undefined FUN_14349b410(void)

RefCountImplCore * FUN_14349b410(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145b0ab70;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14349b490 FUN_14349b490 body=43 status=ok
// SIG undefined FUN_14349b490(void)

undefined8 * FUN_14349b490(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af8cf0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14349b4c0 FUN_14349b4c0 body=110 status=ok
// SIG undefined FUN_14349b4c0(void)

undefined8 * FUN_14349b4c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_LAB_145b0ad40;
  param_1[4] = &PTR_LAB_145b0adc8;
  FUN_143414980();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 14349b530 FUN_14349b530 body=89 status=ok
// SIG undefined FUN_14349b530(void)

undefined8 FUN_14349b530(undefined8 param_1,ulonglong param_2)

{
  FUN_14345da30();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 14349b590 FUN_14349b590 body=89 status=ok
// SIG undefined FUN_14349b590(void)

undefined8 FUN_14349b590(undefined8 param_1,ulonglong param_2)

{
  FUN_143414980();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 14349b5f0 FUN_14349b5f0 body=89 status=ok
// SIG undefined FUN_14349b5f0(void)

undefined8 FUN_14349b5f0(undefined8 param_1,ulonglong param_2)

{
  FUN_1434991d0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 14349b650 FUN_14349b650 body=55 status=ok
// SIG undefined FUN_14349b650(void)

undefined8 FUN_14349b650(undefined8 param_1,byte param_2)

{
  FUN_143499270();
  if ((param_2 & 5) == 5) {
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14349b690 FUN_14349b690 body=110 status=ok
// SIG undefined FUN_14349b690(void)

undefined8 * FUN_14349b690(undefined8 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_145b0b0f0;
  param_1[1] = &PTR_LAB_145b0b230;
  FUN_143497d00(param_1 + 5);
  FUN_143414300(param_1 + 1);
  *param_1 = &PTR_FUN_145b0aa60;
  if ((param_2 & 5) == 5) {
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14349b700 FUN_14349b700 body=43 status=ok
// SIG undefined FUN_14349b700(void)

undefined8 * FUN_14349b700(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145b0aa60;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14349b730 FUN_14349b730 body=55 status=ok
// SIG undefined FUN_14349b730(void)

undefined8 FUN_14349b730(undefined8 param_1,byte param_2)

{
  FUN_143425f10();
  if ((param_2 & 5) == 5) {
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x200);
  }
  return param_1;
}



// FUNCTION 14349b770 FUN_14349b770 body=55 status=ok
// SIG undefined FUN_14349b770(void)

undefined8 FUN_14349b770(undefined8 param_1,byte param_2)

{
  FUN_1434992f0();
  if ((param_2 & 5) == 5) {
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 14349b7b0 FUN_14349b7b0 body=127 status=ok
// SIG undefined FUN_14349b7b0(void)

undefined8 * FUN_14349b7b0(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_LAB_145b103e0;
  param_1[4] = &PTR_LAB_145b10428;
  if ((RefCountImpl *)param_1[0xd] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xd]);
  }
  FUN_143414980(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 14349b830 FUN_14349b830 body=141 status=ok
// SIG undefined FUN_14349b830(void)

undefined8 * FUN_14349b830(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_LAB_145b0dff0;
  param_1[4] = &PTR_LAB_145b0e038;
  if (param_1[0xe] != 0) {
    FUN_1432de450();
  }
  if (param_1[0xd] != 0) {
    FUN_1432de450();
  }
  FUN_143414980(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 14349b8c0 FUN_14349b8c0 body=89 status=ok
// SIG undefined FUN_14349b8c0(void)

undefined8 FUN_14349b8c0(undefined8 param_1,ulonglong param_2)

{
  FUN_143414980();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 14349b920 FUN_14349b920 body=119 status=ok
// SIG undefined FUN_14349b920(void)

longlong FUN_14349b920(longlong param_1,uint param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x68);
  if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  FUN_143414980(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 14349b9a0 FUN_14349b9a0 body=134 status=ok
// SIG undefined FUN_14349b9a0(void)

RefCountImplCore * FUN_14349b9a0(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145b13998;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  *(undefined ***)param_1 = &PTR_FUN_145b0c328;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14349ba30 FUN_14349ba30 body=132 status=ok
// SIG undefined FUN_14349ba30(void)

undefined8 * FUN_14349ba30(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[10];
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80();
  }
  *param_1 = &PTR_FUN_145b0cec0;
  FUN_143497620(param_1 + 1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14349bac0 FUN_14349bac0 body=103 status=ok
// SIG undefined FUN_14349bac0(void)

undefined8 * FUN_14349bac0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145b0cec0;
  FUN_143497620(param_1 + 1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14349bb30 FUN_14349bb30 body=89 status=ok
// SIG undefined FUN_14349bb30(void)

undefined8 FUN_14349bb30(undefined8 param_1,ulonglong param_2)

{
  FUN_143414980();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 14349bb90 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 CAkEffectContextBase::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_143499390();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14349bbd0 FUN_14349bbd0 body=89 status=ok
// SIG undefined FUN_14349bbd0(void)

undefined8 FUN_14349bbd0(undefined8 param_1,ulonglong param_2)

{
  FUN_143414980();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 14349bc30 FUN_14349bc30 body=89 status=ok
// SIG undefined FUN_14349bc30(void)

undefined8 FUN_14349bc30(undefined8 param_1,ulonglong param_2)

{
  FUN_143499410();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x198);
  }
  return param_1;
}



// FUNCTION 14349bc90 FUN_14349bc90 body=76 status=ok
// SIG undefined FUN_14349bc90(void)

undefined8 * FUN_14349bc90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145b0ab98;
  FUN_14349ebc0(param_1 + 3);
  *param_1 = &PTR_FUN_145af8cf0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14349bce0 FUN_14349bce0 body=110 status=ok
// SIG undefined FUN_14349bce0(void)

undefined8 * FUN_14349bce0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_LAB_145b0ad40;
  param_1[4] = &PTR_LAB_145b0adc8;
  FUN_143414980();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 14349bd50 FUN_14349bd50 body=121 status=ok
// SIG undefined FUN_14349bd50(void)

undefined8 * FUN_14349bd50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_LAB_145b0b680;
  param_1[4] = &PTR_LAB_145b0b6c8;
  param_1[0xd] = &PTR_LAB_145b0b770;
  FUN_1434989f0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 14349bdd0 FUN_14349bdd0 body=110 status=ok
// SIG undefined FUN_14349bdd0(void)

undefined8 * FUN_14349bdd0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_LAB_145b11280;
  param_1[4] = &PTR_LAB_145b112c8;
  FUN_143414980();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 14349be40 FUN_14349be40 body=119 status=ok
// SIG undefined FUN_14349be40(void)

undefined8 * FUN_14349be40(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[7];
  *param_1 = &PTR_FUN_145b0b580;
  if (lVar1 != 0) {
    FUN_1434975b0(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  FUN_14349ebc0(param_1 + 4);
  FUN_14349ebc0(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14349bec0 FUN_14349bec0 body=114 status=ok
// SIG undefined FUN_14349bec0(void)

RefCountNTSImplCore * FUN_14349bec0(RefCountNTSImplCore *param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14349bf40 FUN_14349bf40 body=43 status=ok
// SIG undefined FUN_14349bf40(void)

undefined8 * FUN_14349bf40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145b10140;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 14349bf70 FUN_14349bf70 body=89 status=ok
// SIG undefined FUN_14349bf70(void)

undefined8 FUN_14349bf70(undefined8 param_1,ulonglong param_2)

{
  FUN_1434994c0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14349bfd0 FUN_14349bfd0 body=89 status=ok
// SIG undefined FUN_14349bfd0(void)

undefined8 FUN_14349bfd0(undefined8 param_1,ulonglong param_2)

{
  FUN_143499560();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,200);
  }
  return param_1;
}



// FUNCTION 14349c030 FUN_14349c030 body=130 status=ok
// SIG undefined FUN_14349c030(void)

undefined8 * FUN_14349c030(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_145b0c648;
  if ((RefCountImpl *)param_1[6] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[6]);
  }
  if ((RefCountImpl *)param_1[5] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[5]);
  }
  Scaleform::GFx::LoadQueueEntryMT::~LoadQueueEntryMT(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14349c0c0 FUN_14349c0c0 body=144 status=ok
// SIG undefined FUN_14349c0c0(void)

undefined8 * FUN_14349c0c0(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_145b0c5e8;
  if ((RefCountNTSImpl *)param_1[8] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[8]);
  }
  if ((RefCountNTSImpl *)param_1[6] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[6]);
  }
  if ((RefCountImpl *)param_1[5] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[5]);
  }
  Scaleform::GFx::LoadQueueEntryMT::~LoadQueueEntryMT(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14349c150 FUN_14349c150 body=130 status=ok
// SIG undefined FUN_14349c150(void)

undefined8 * FUN_14349c150(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_145b0c618;
  if ((RefCountImpl *)param_1[6] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[6]);
  }
  if ((RefCountImpl *)param_1[5] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[5]);
  }
  Scaleform::GFx::LoadQueueEntryMT::~LoadQueueEntryMT(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14349c1e0 FUN_14349c1e0 body=106 status=ok
// SIG undefined FUN_14349c1e0(void)

longlong FUN_14349c1e0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1432de450();
  }
  FUN_143366960(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 14349c250 FUN_14349c250 body=167 status=ok
// SIG undefined FUN_14349c250(void)

RefCountNTSImplCore * FUN_14349c250(RefCountNTSImplCore *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_145b0b0e8;
  FUN_1432ef9e0(param_1 + 0x70);
  lVar1 = *(longlong *)(param_1 + 0x60);
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80();
  }
  FUN_1434977f0(param_1 + 0x20);
  FUN_143497ab0(param_1 + 0x18);
  FUN_143497de0(param_1 + 0x10);
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 14349c300 FUN_14349c300 body=43 status=ok
// SIG undefined FUN_14349c300(void)

undefined8 * FUN_14349c300(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145b10140;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14349c330 FUN_14349c330 body=89 status=ok
// SIG undefined FUN_14349c330(void)

undefined8 FUN_14349c330(undefined8 param_1,ulonglong param_2)

{
  FUN_143499640();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 14349c390 FUN_14349c390 body=121 status=ok
// SIG undefined FUN_14349c390(void)

undefined8 * FUN_14349c390(undefined8 *param_1,ulonglong param_2)

{
  param_1[0xe] = &PTR_FUN_145af3848;
  *param_1 = &PTR_LAB_145b0ad40;
  param_1[4] = &PTR_LAB_145b0adc8;
  FUN_143414980();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 14349c410 FUN_14349c410 body=150 status=ok
// SIG undefined FUN_14349c410(void)

undefined8 * FUN_14349c410(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = param_1[3];
  *param_1 = &PTR_FUN_145b0aac0;
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14349c4b0 FUN_14349c4b0 body=89 status=ok
// SIG undefined FUN_14349c4b0(void)

undefined8 FUN_14349c4b0(undefined8 param_1,ulonglong param_2)

{
  FUN_143414980();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 14349c510 FUN_14349c510 body=89 status=ok
// SIG undefined FUN_14349c510(void)

undefined8 FUN_14349c510(undefined8 param_1,ulonglong param_2)

{
  FUN_1434996f0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 14349c570 FUN_14349c570 body=43 status=ok
// SIG undefined FUN_14349c570(void)

undefined8 * FUN_14349c570(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af1858;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14349c5a0 FUN_14349c5a0 body=87 status=ok
// SIG undefined FUN_14349c5a0(void)

undefined8 * FUN_14349c5a0(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80();
  }
  *param_1 = &PTR_FUN_145af1858;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14349c600 FUN_14349c600 body=165 status=ok
// SIG undefined FUN_14349c600(void)

undefined8 * FUN_14349c600(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  FUN_14349ebc0(param_1 + 0x12);
  lVar1 = param_1[0xf];
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80();
  }
  param_1[0xe] = &PTR_FUN_145b0c5b0;
  *param_1 = &PTR_LAB_145b0ad40;
  param_1[4] = &PTR_LAB_145b0adc8;
  FUN_143414980(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 14349c6b0 FUN_14349c6b0 body=43 status=ok
// SIG undefined FUN_14349c6b0(void)

undefined8 * FUN_14349c6b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145b0c5b0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14349c6e0 FUN_14349c6e0 body=101 status=ok
// SIG undefined FUN_14349c6e0(void)

longlong FUN_14349c6e0(longlong param_1,ulonglong param_2)

{
  FUN_143315ea0(param_1 + 0x68);
  FUN_143414980(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 14349c750 FUN_14349c750 body=119 status=ok
// SIG undefined FUN_14349c750(void)

longlong FUN_14349c750(longlong param_1,uint param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x68);
  if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  FUN_143414980(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 14349c7d0 FUN_14349c7d0 body=135 status=ok
// SIG undefined FUN_14349c7d0(void)

undefined8 * FUN_14349c7d0(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_145b0aac8;
  lVar1 = param_1[7];
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) == param_1[4])) {
    *(undefined8 *)(lVar1 + 0x30) = 0;
  }
  if ((RefCountImpl *)param_1[7] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[7]);
  }
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14349c860 FUN_14349c860 body=89 status=ok
// SIG undefined FUN_14349c860(void)

undefined8 FUN_14349c860(undefined8 param_1,ulonglong param_2)

{
  FUN_143437970();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x640);
  }
  return param_1;
}



// FUNCTION 14349c8c0 FUN_14349c8c0 body=148 status=ok
// SIG undefined FUN_14349c8c0(void)

longlong FUN_14349c8c0(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = *(ulonglong *)(param_1 + 0x70) & 0xfffffffffffffffc;
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar2 + 8,0xffffffff);
  if (iVar1 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar2);
  }
  FUN_143414980(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 14349c960 FUN_14349c960 body=52 status=ok
// SIG undefined FUN_14349c960(void)

undefined8 FUN_14349c960(undefined8 param_1,ulonglong param_2)

{
  FUN_143414300();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14349c9a0 FUN_14349c9a0 body=89 status=ok
// SIG undefined FUN_14349c9a0(void)

undefined8 FUN_14349c9a0(undefined8 param_1,ulonglong param_2)

{
  FUN_143499760();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 14349ca00 FUN_14349ca00 body=122 status=ok
// SIG undefined FUN_14349ca00(void)

undefined8 * FUN_14349ca00(undefined8 *param_1,ulonglong param_2)

{
  FUN_143497c60(param_1 + 0xe);
  *param_1 = &PTR_LAB_145b0ad40;
  param_1[4] = &PTR_LAB_145b0adc8;
  FUN_143414980(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 14349ca80 FUN_14349ca80 body=87 status=ok
// SIG undefined FUN_14349ca80(void)

undefined8 * FUN_14349ca80(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_145b10000;
  lVar1 = param_1[1];
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14349cae0 FUN_14349cae0 body=110 status=ok
// SIG undefined FUN_14349cae0(void)

undefined8 * FUN_14349cae0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_LAB_145b0ad40;
  param_1[4] = &PTR_LAB_145b0adc8;
  FUN_143414980();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 14349cb50 FUN_14349cb50 body=109 status=ok
// SIG undefined FUN_14349cb50(void)

undefined8 * FUN_14349cb50(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_145b0ab20;
  piVar1 = (int *)(param_1[1] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14349cbc0 FUN_14349cbc0 body=123 status=ok
// SIG undefined FUN_14349cbc0(void)

undefined8 * FUN_14349cbc0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  
  if (4 < *(byte *)(param_1 + 4)) {
    FUN_143411150();
  }
  *param_1 = &PTR_FUN_145b0ab20;
  piVar1 = (int *)(param_1[1] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14349cc40 FUN_14349cc40 body=107 status=ok
// SIG undefined FUN_14349cc40(void)

longlong FUN_14349cc40(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 0x68) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143414980(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 14349ccb0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 CAkSwitchHistory::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_143dee360();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14349ccf0 FUN_14349ccf0 body=101 status=ok
// SIG undefined FUN_14349ccf0(void)

longlong FUN_14349ccf0(longlong param_1,ulonglong param_2)

{
  FUN_143dee360(param_1 + 0x68);
  FUN_143414980(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 14349cd60 FUN_14349cd60 body=159 status=ok
// SIG undefined FUN_14349cd60(void)

longlong FUN_14349cd60(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  
  FUN_14349ebc0(param_1 + 0x80);
  lVar1 = *(longlong *)(param_1 + 0x70);
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80();
  }
  lVar1 = *(longlong *)(param_1 + 0x68);
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80();
  }
  FUN_143414980(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 14349ce00 FUN_14349ce00 body=157 status=ok
// SIG undefined FUN_14349ce00(void)

undefined8 * FUN_14349ce00(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  
  *param_1 = &PTR_LAB_145b0d1e0;
  param_1[4] = &PTR_LAB_145b0d228;
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[0xe]);
  piVar1 = (int *)param_1[0xd];
  if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  FUN_143414980(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 14349cea0 FUN_14349cea0 body=113 status=ok
// SIG undefined FUN_14349cea0(void)

longlong FUN_14349cea0(longlong param_1,ulonglong param_2)

{
  FUN_1433dedf0(param_1 + 0xb8);
  FUN_1433dd700(param_1 + 0x68);
  FUN_143414980(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 14349cf20 FUN_14349cf20 body=89 status=ok
// SIG undefined FUN_14349cf20(void)

undefined8 FUN_14349cf20(undefined8 param_1,ulonglong param_2)

{
  FUN_1434761a0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 14349cf80 FUN_14349cf80 body=89 status=ok
// SIG undefined FUN_14349cf80(void)

undefined8 FUN_14349cf80(undefined8 param_1,ulonglong param_2)

{
  Scaleform::GFx::AS2::TransformObject::~TransformObject();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 14349cfe0 FUN_14349cfe0 body=148 status=ok
// SIG undefined FUN_14349cfe0(void)

undefined8 * FUN_14349cfe0(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_LAB_145b12d70;
  param_1[4] = &PTR_LAB_145b12df8;
  if ((RefCountImpl *)param_1[0xd] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xd]);
  }
  *param_1 = &PTR_LAB_145b0ad40;
  param_1[4] = &PTR_LAB_145b0adc8;
  FUN_143414980(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 14349d080 FUN_14349d080 body=94 status=ok
// SIG undefined FUN_14349d080(void)

byte * FUN_14349d080(byte *param_1,ulonglong param_2)

{
  if (4 < *param_1) {
    FUN_143411150();
  }
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14349d0e0 FUN_14349d0e0 body=112 status=ok
// SIG undefined FUN_14349d0e0(void)

undefined8 * FUN_14349d0e0(undefined8 *param_1,ulonglong param_2)

{
  FUN_14349ebc0(param_1 + 7);
  FUN_14349ebc0(param_1 + 4);
  *param_1 = &PTR_StartProfileThreadUsage_145b0ab30;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14349d150 FUN_14349d150 body=117 status=ok
// SIG undefined FUN_14349d150(void)

RefCountImplCore * FUN_14349d150(RefCountImplCore *param_1,ulonglong param_2)

{
  int *piVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_145b0ab18;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14349d250 FUN_14349d250 body=103 status=ok
// SIG undefined FUN_14349d250(void)

void FUN_14349d250(longlong param_1,uint param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)(param_1 + 200);
  uVar4 = (ulonglong)param_2 + *(longlong *)(param_1 + 0xd0);
  uVar2 = *(ulonglong *)(param_1 + 0xd0);
  FUN_1434a3ca0(plVar1,plVar1,uVar4);
  if (uVar2 < uVar4) {
    puVar3 = (undefined1 *)(uVar2 * 0x20 + *plVar1);
    for (lVar5 = uVar4 - uVar2; lVar5 != 0; lVar5 = lVar5 + -1) {
      if (puVar3 != (undefined1 *)0x0) {
        *puVar3 = 0;
      }
      puVar3 = puVar3 + 0x20;
    }
  }
  return;
}



// FUNCTION 14349d2c0 FUN_14349d2c0 body=306 status=ok
// SIG undefined FUN_14349d2c0(void)

void FUN_14349d2c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  ulonglong uVar6;
  longlong local_res10;
  
  if (*(longlong *)(param_1 + 0x38) != -1) {
    uVar2 = *(undefined4 *)(param_1 + 0x38);
    *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) | 0x80000000;
    *(undefined4 *)(param_2 + 0x10) = uVar2;
    uVar6 = *(ulonglong *)(param_1 + 0x38);
    lVar3 = *(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x30) + (uVar6 >> 10) * 8) +
             (ulonglong)((uint)uVar6 & 0x3ff) * 8);
    *(longlong *)
     (*(longlong *)(*(longlong *)(param_1 + 0x30) + (uVar6 >> 10) * 8) +
     (ulonglong)((uint)uVar6 & 0x3ff) * 8) = param_2;
    *(longlong *)(param_1 + 0x38) = lVar3 >> 1;
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) | 0x80000000;
  *(int *)(param_2 + 0x10) = (int)uVar4;
  *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) | 1;
  uVar6 = *(ulonglong *)(param_1 + 0x18) >> 10;
  local_res10 = param_2;
  if (uVar6 < *(ulonglong *)(param_1 + 0x20)) {
LAB_14349d36b:
    plVar1 = (longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x30) + uVar6 * 8) +
             (ulonglong)(*(uint *)(param_1 + 0x18) & 0x3ff) * 8);
    if (plVar1 != (longlong *)0x0) {
      *plVar1 = param_2;
      *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
      goto LAB_14349d3d9;
    }
  }
  else {
    cVar5 = FUN_1434a6210(param_1 + 0x10,uVar6);
    if (cVar5 != '\0') goto LAB_14349d36b;
  }
  *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) & 0xfe;
  cVar5 = FUN_14349e200(param_1,0);
  *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) | 1;
  if (cVar5 != '\0') {
    cVar5 = FUN_1434a2860(param_1 + 0x10,&local_res10);
    if (cVar5 != '\0') goto LAB_14349d3d9;
  }
  *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) & 0x7fffffff;
  if ((*(uint *)(param_2 + 0x18) >> 0x1b & 1) == 0) {
    *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
  }
  *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) & 0x8fffffff;
LAB_14349d3d9:
  *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) & 0xfe;
  return;
}



// FUNCTION 14349d400 FUN_14349d400 body=79 status=ok
// SIG undefined FUN_14349d400(void)

void FUN_14349d400(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_143411e30(param_3);
  uVar2 = FUN_143411e30(param_1,param_2);
  if (4 < *param_1) {
    FUN_143411150(param_1);
  }
  *(uint *)(param_1 + 8) = uVar1 & uVar2;
  *param_1 = 4;
  return;
}



// FUNCTION 14349d450 FUN_14349d450 body=115 status=ok
// SIG undefined FUN_14349d450(void)

void FUN_14349d450(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = param_1[1];
    FUN_1434a3d60(param_1,param_1,param_3 + lVar1);
    lVar1 = lVar1 * 0x20 + *param_1;
    for (; param_3 != 0; param_3 = param_3 + -1) {
      if (lVar1 != 0) {
        FUN_143410ec0(lVar1,param_2);
      }
      param_2 = param_2 + 0x20;
      lVar1 = lVar1 + 0x20;
    }
  }
  return;
}



// FUNCTION 14349d4d0 FUN_14349d4d0 body=154 status=ok
// SIG undefined FUN_14349d4d0(void)

void FUN_14349d4d0(longlong *param_1,void *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_3 == 0) {
    return;
  }
  uVar2 = param_1[1];
  uVar1 = uVar2 + param_3;
  if (uVar1 < uVar2) {
    uVar3 = uVar1;
    if ((ulonglong)param_1[2] >> 1 <= uVar1) goto LAB_14349d532;
  }
  else {
    if (uVar1 <= (ulonglong)param_1[2]) goto LAB_14349d532;
    uVar3 = (uVar1 >> 2) + uVar1;
  }
  FUN_1434a2ea0(param_1,param_1,uVar3);
LAB_14349d532:
  param_1[1] = uVar1;
  _guard_xfg_dispatch_icall_nop((void *)(uVar2 * 0x10 + *param_1),param_2,param_3 << 4);
  return;
}



// FUNCTION 14349d570 FUN_14349d570 body=84 status=ok
// SIG undefined FUN_14349d570(void)

void FUN_14349d570(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = FUN_143411e30(param_3);
  iVar2 = FUN_143411e30(param_1,param_2);
  if (4 < *param_1) {
    FUN_143411150(param_1);
  }
  *(int *)(param_1 + 8) = iVar2 >> (bVar1 & 0x1f);
  *param_1 = 4;
  return;
}



// FUNCTION 14349d5d0 FUN_14349d5d0 body=313 status=ok
// SIG undefined FUN_14349d5d0(void)

void FUN_14349d5d0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint *puVar6;
  
  FUN_143497d00();
  if (((longlong *)*param_3 == (longlong *)0x0) || (lVar2 = *(longlong *)*param_3, lVar2 == 0)) {
    return;
  }
  uVar5 = 0;
  uVar3 = uVar5;
  if ((ulonglong *)*param_1 != (ulonglong *)0x0) {
    uVar3 = *(ulonglong *)*param_1;
  }
  if (uVar3 < (ulonglong)(lVar2 * 5) >> 2) {
    FUN_1434a71c0(param_1,param_2);
  }
  lVar2 = *param_3;
  if (lVar2 == 0) {
    param_3 = (longlong *)0x0;
    uVar5 = 0;
  }
  else {
    plVar4 = (longlong *)(lVar2 + 0x10);
    do {
      if (*plVar4 != -2) break;
      uVar5 = uVar5 + 1;
      plVar4 = plVar4 + 8;
    } while (uVar5 <= *(ulonglong *)(lVar2 + 8));
  }
  do {
    do {
      if (param_3 == (longlong *)0x0) {
        return;
      }
      lVar2 = *param_3;
      if (lVar2 == 0) {
        return;
      }
      if (*(longlong *)(lVar2 + 8) < (longlong)uVar5) {
        return;
      }
      puVar6 = (uint *)(lVar2 + 0x20 + uVar5 * 0x40);
      uVar1 = *puVar6;
      if ((uVar1 >> 0x11 & 1) != 0) {
        uVar1 = uVar1 ^ puVar6[2];
      }
      FUN_143491f90(param_1,param_2,puVar6,uVar1);
      uVar3 = *(ulonglong *)(*param_3 + 8);
    } while (((longlong)uVar3 < (longlong)uVar5) || (uVar5 = uVar5 + 1, uVar3 < uVar5));
    plVar4 = (longlong *)(uVar5 * 0x40 + 0x10 + *param_3);
    do {
      if (*plVar4 != -2) break;
      uVar5 = uVar5 + 1;
      plVar4 = plVar4 + 8;
    } while (uVar5 <= uVar3);
  } while( true );
}



// FUNCTION 14349d710 FUN_14349d710 body=70 status=ok
// SIG undefined FUN_14349d710(void)

void FUN_14349d710(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 8);
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(param_1 + 8) = lVar2;
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  return;
}



// FUNCTION 14349d760 FUN_14349d760 body=82 status=ok
// SIG undefined FUN_14349d760(void)

void FUN_14349d760(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 8);
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(param_1 + 8) = lVar2;
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  FUN_143411240(param_1 + 0x20,param_2 + 0x20);
  return;
}



// FUNCTION 14349d7c0 BitCount32 body=309 status=ok
// SIG undefined BitCount32(void)

uint Scaleform::Alg::BitCount32(uint param_1)

{
  if (0x7fff < param_1) {
    if (0x7fffff < param_1) {
      if (param_1 < 0x8000000) {
        if (param_1 < 0x2000000) {
          return 0x19 - (param_1 < 0x1000000);
        }
        return 0x1b - (param_1 < 0x4000000);
      }
      if (param_1 < 0x20000000) {
        return 0x1d - (param_1 < 0x10000000);
      }
      if (param_1 < 0x40000000) {
        return 0x1e;
      }
      return 0x20 - (param_1 < 0x80000000);
    }
    if (0x7ffff < param_1) {
      if (param_1 < 0x200000) {
        return 0x15 - (param_1 < 0x100000);
      }
      return 0x17 - (param_1 < 0x400000);
    }
    if (param_1 < 0x20000) {
      return 0x11 - (param_1 < 0x10000);
    }
    return 0x13 - (param_1 < 0x40000);
  }
  if (0x7f < param_1) {
    if (0x7ff < param_1) {
      if (param_1 < 0x2000) {
        return 0xd - (param_1 < 0x1000);
      }
      return 0xf - (param_1 < 0x4000);
    }
    if (param_1 < 0x200) {
      return 9 - (param_1 < 0x100);
    }
    return 0xb - (param_1 < 0x400);
  }
  if (7 < param_1) {
    if (param_1 < 0x20) {
      return 5 - (param_1 < 0x10);
    }
    return 7 - (param_1 < 0x40);
  }
  if (param_1 < 2) {
    return (uint)(param_1 != 0);
  }
  return 3 - (param_1 < 4);
}



// FUNCTION 14349d900 FUN_14349d900 body=76 status=ok
// SIG undefined FUN_14349d900(void)

void FUN_14349d900(longlong param_1,longlong param_2)

{
  *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + -1;
  if ((*(uint *)(param_2 + 0x18) >> 0x1b & 1) == 0) {
    *(undefined8 *)(param_2 + 0x10) =
         *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 8) + 0x10);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 8);
    *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 8) + 0x10) = param_2;
    *(longlong *)(*(longlong *)(param_1 + 0x60) + 8) = param_2;
    *(longlong *)(param_1 + 0x60) = param_2;
    *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) | 0x8000000;
  }
  return;
}



// FUNCTION 14349d950 FUN_14349d950 body=139 status=ok
// SIG undefined FUN_14349d950(void)

void FUN_14349d950(longlong param_1,longlong param_2)

{
  *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + -1;
  if ((*(uint *)(param_2 + 0x18) & 0x3ffffff) == 0) {
    FUN_1434a2e10();
    *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) | 0x4000000;
    if ((*(uint *)(param_2 + 0x18) >> 0x1b & 1) == 0) {
      *(undefined8 *)(param_2 + 0x10) =
           *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 8) + 0x10);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 8);
      *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 8) + 0x10) = param_2;
      *(longlong *)(*(longlong *)(param_1 + 0x60) + 8) = param_2;
      *(longlong *)(param_1 + 0x60) = param_2;
      *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) | 0x8000000;
      return;
    }
  }
  else {
    FUN_1434a2b80(param_2);
  }
  return;
}



// FUNCTION 14349d9e0 FUN_14349d9e0 body=104 status=ok
// SIG undefined FUN_14349d9e0(void)

void FUN_14349d9e0(longlong param_1,longlong param_2)

{
  uint uVar1;
  
  *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  if (((*(uint *)(param_2 + 0x18) & 0x70000000) != 0) &&
     (uVar1 = *(uint *)(param_2 + 0x18) & 0x8fffffff, *(uint *)(param_2 + 0x18) = uVar1,
     (uVar1 >> 0x1b & 1) != 0)) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x10) =
         *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 8) + 0x10);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 8);
    *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 8) + 0x10) = param_2;
    *(longlong *)(*(longlong *)(param_1 + 0x60) + 8) = param_2;
  }
  return;
}



// FUNCTION 14349da50 FUN_14349da50 body=127 status=ok
// SIG undefined FUN_14349da50(void)

void FUN_14349da50(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    *(uint *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1U & 0x8fffffff;
  }
  puVar1 = (ulonglong *)(param_1 + 0xf8);
  *puVar1 = *puVar1 + 8;
  if (*(ulonglong *)(param_1 + 0x108) <= *puVar1) {
    FUN_1434a28e0(puVar1);
  }
  plVar2 = (longlong *)*puVar1;
  if (plVar2 != (longlong *)0x0) {
    if (param_2 != 0) {
      *(uint *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1U & 0x8fffffff;
    }
    *plVar2 = param_2;
  }
  if ((param_2 != 0) && ((*(uint *)(param_2 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) - 1;
    FUN_1434a2b80(param_2);
  }
  return;
}



// FUNCTION 14349dad0 FUN_14349dad0 body=153 status=ok
// SIG undefined FUN_14349dad0(void)

undefined1 * FUN_14349dad0(longlong param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  
  if ((uint)(*(int *)(param_1 + 0x120) * 0x20 + -0x20 +
            (int)(*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0x100) >> 3)) < param_3) {
    *param_2 = 1;
    return param_2;
  }
  puVar2 = (undefined8 *)0x0;
  uVar1 = *(int *)(param_1 + 0x120) * 0x20 + -0x20 +
          (int)(*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0x100) >> 3);
  if (param_3 <= uVar1) {
    uVar1 = uVar1 - param_3;
    puVar2 = (undefined8 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x118) + (ulonglong)(uVar1 >> 5) * 8) +
             (ulonglong)(uVar1 & 0x1f) * 8);
  }
  FUN_143410c00(param_2,*puVar2);
  return param_2;
}



// FUNCTION 14349db70 FUN_14349db70 body=67 status=ok
// SIG undefined FUN_14349db70(void)

void FUN_14349db70(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_1434a63b0(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_1434a63b0(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 14349dbc0 FUN_14349dbc0 body=67 status=ok
// SIG undefined FUN_14349dbc0(void)

void FUN_14349dbc0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_1434a6630(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_1434a6630(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 14349dc10 FUN_14349dc10 body=67 status=ok
// SIG undefined FUN_14349dc10(void)

void FUN_14349dc10(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_1434a67a0(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_1434a67a0(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 14349dc60 FUN_14349dc60 body=67 status=ok
// SIG undefined FUN_14349dc60(void)

void FUN_14349dc60(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_1434a69b0(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_1434a69b0(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 14349dcb0 FUN_14349dcb0 body=67 status=ok
// SIG undefined FUN_14349dcb0(void)

void FUN_14349dcb0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_1434a6d50(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_1434a6d50(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 14349dd00 FUN_14349dd00 body=67 status=ok
// SIG undefined FUN_14349dd00(void)

void FUN_14349dd00(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_1434a6ec0(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_1434a6ec0(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 14349dd50 FUN_14349dd50 body=67 status=ok
// SIG undefined FUN_14349dd50(void)

void FUN_14349dd50(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_1434a7050(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_1434a7050(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 14349dda0 FUN_14349dda0 body=67 status=ok
// SIG undefined FUN_14349dda0(void)

void FUN_14349dda0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_1434a7380(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_1434a7380(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 14349ddf0 FUN_14349ddf0 body=67 status=ok
// SIG undefined FUN_14349ddf0(void)

void FUN_14349ddf0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_1434a7510(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_1434a7510(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 14349de40 FUN_14349de40 body=249 status=ok
// SIG undefined FUN_14349de40(void)

void FUN_14349de40(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*param_1 != 0) {
    lVar5 = 0;
    lVar4 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar5 + 0x10 + lVar2) != -2) {
        if (4 < *(byte *)(lVar2 + 0x38 + lVar5)) {
          FUN_143411150();
        }
        if ((((*(byte *)(lVar5 + 0x30 + lVar2) & 2) == 0) &&
            (lVar3 = *(longlong *)(lVar5 + 0x20 + lVar2), lVar3 != 0)) &&
           ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
          FUN_1434a2b80();
        }
        *(undefined8 *)(lVar5 + 0x20 + lVar2) = 0;
        if ((((*(byte *)(lVar5 + 0x30 + lVar2) & 1) == 0) &&
            (lVar3 = *(longlong *)(lVar5 + 0x28 + lVar2), lVar3 != 0)) &&
           ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
          FUN_1434a2b80();
        }
        *(undefined8 *)(lVar5 + 0x28 + lVar2) = 0;
        piVar1 = (int *)(*(longlong *)(lVar5 + 0x18 + lVar2) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *(undefined8 *)(lVar5 + 0x10 + lVar2) = 0xfffffffffffffffe;
      }
      lVar5 = lVar5 + 0x48;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 14349df40 FUN_14349df40 body=150 status=ok
// SIG undefined FUN_14349df40(void)

void FUN_14349df40(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 != 0) {
    lVar4 = 0;
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar2 = *param_1 + lVar4;
      if (*(longlong *)(lVar2 + 0x10) != -2) {
        if (4 < *(byte *)(lVar2 + 0x20)) {
          FUN_143411150(lVar2 + 0x20);
        }
        piVar1 = (int *)(*(longlong *)(lVar2 + 0x18) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *(undefined8 *)(lVar2 + 0x10) = 0xfffffffffffffffe;
      }
      lVar4 = lVar4 + 0x30;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 14349dfe0 FUN_14349dfe0 body=191 status=ok
// SIG undefined FUN_14349dfe0(void)

void FUN_14349dfe0(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*param_1 != 0) {
    lVar5 = 0;
    lVar4 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar5 + 0x10 + lVar2) != -2) {
        *(undefined ***)(lVar5 + 0x20 + lVar2) = &PTR_FUN_145b10000;
        lVar3 = *(longlong *)(lVar5 + 0x28 + lVar2);
        if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
          FUN_1434a2b80();
        }
        piVar1 = (int *)(*(longlong *)(lVar5 + 0x18 + lVar2) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *(undefined8 *)(lVar5 + 0x10 + lVar2) = 0xfffffffffffffffe;
      }
      lVar5 = lVar5 + 0x20;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 14349e0a0 FUN_14349e0a0 body=46 status=ok
// SIG undefined FUN_14349e0a0(void)

void FUN_14349e0a0(undefined8 *param_1)

{
  int *piVar1;
  
  FUN_14349ebc0(param_1 + 2);
  piVar1 = (int *)(param_1[1] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_1 = 0xfffffffffffffffe;
  return;
}



// FUNCTION 14349e0d0 FUN_14349e0d0 body=69 status=ok
// SIG undefined FUN_14349e0d0(void)

void FUN_14349e0d0(undefined8 *param_1)

{
  int *piVar1;
  
  if (4 < *(byte *)(param_1 + 5)) {
    FUN_143411150();
  }
  FUN_14349ebc0(param_1 + 2);
  piVar1 = (int *)(param_1[1] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_1 = 0xfffffffffffffffe;
  return;
}



// FUNCTION 14349e120 FUN_14349e120 body=51 status=ok
// SIG undefined FUN_14349e120(void)

void FUN_14349e120(undefined8 *param_1)

{
  int *piVar1;
  
  if (4 < *(byte *)(param_1 + 2)) {
    FUN_143411150();
  }
  piVar1 = (int *)(param_1[1] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_1 = 0xfffffffffffffffe;
  return;
}



// FUNCTION 14349e160 ClearImageSubstitutor body=69 status=ok
// SIG undefined ClearImageSubstitutor(void)

void Scaleform::GFx::TextField::ClearImageSubstitutor(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xe0);
  lVar2 = *(longlong *)(lVar1 + 0x30);
  if (lVar2 != 0) {
    FUN_143403e20(lVar2);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
  }
  *(undefined8 *)(lVar1 + 0x30) = 0;
  return;
}



// FUNCTION 14349e1b0 FUN_14349e1b0 body=54 status=ok
// SIG undefined FUN_14349e1b0(void)

void FUN_14349e1b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(*(longlong *)(param_2 + (ulonglong)*(byte *)(param_2 + 0x6d) * 4) + 8))
                      (param_2 + (ulonglong)*(byte *)(param_2 + 0x6d) * 4);
  }
  FUN_14349d5d0(param_1 + 0x28,param_1 + 0x28,lVar1 + 0x28);
  return;
}



// FUNCTION 14349e200 FUN_14349e200 body=830 status=ok
// SIG undefined FUN_14349e200(void)

undefined8 FUN_14349e200(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  if (((*(byte *)(param_1 + 0x68) & 1) == 0) &&
     (uVar10 = *(ulonglong *)(param_1 + 0x18), uVar10 != 0)) {
    if (param_2 == (undefined8 *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)*param_2;
    }
    uVar9 = 0;
    uVar11 = 0;
    plVar1 = (longlong *)(param_1 + 0x40);
    do {
      uVar8 = 0;
      *(longlong **)(param_1 + 0x60) = plVar1;
      uVar9 = uVar9 + (uVar10 & 0xffffffff);
      *(longlong **)(param_1 + 0x50) = plVar1;
      *(longlong **)(param_1 + 0x48) = plVar1;
      *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x8000000;
      if (uVar10 != 0) {
        do {
          plVar3 = *(longlong **)
                    (*(longlong *)(*(longlong *)(param_1 + 0x30) + (uVar8 >> 10) * 8) +
                    (ulonglong)((uint)uVar8 & 0x3ff) * 8);
          if (((ulonglong)plVar3 & 1) == 0) {
            uVar2 = *(uint *)(plVar3 + 3);
            if ((uVar2 & 0x70000000) == 0x30000000) {
              if ((uVar2 >> 0x1b & 1) == 0) {
                plVar3[2] = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 8) + 0x10);
                plVar3[1] = *(longlong *)(*(longlong *)(param_1 + 0x60) + 8);
                *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 8) + 0x10) = plVar3;
                *(longlong **)(*(longlong *)(param_1 + 0x60) + 8) = plVar3;
                *(longlong **)(param_1 + 0x60) = plVar3;
                *(uint *)(plVar3 + 3) = *(uint *)(plVar3 + 3) | 0x8000000;
              }
              for (; plVar3 != plVar1; plVar3 = (longlong *)plVar3[1]) {
                if ((*(uint *)(plVar3 + 3) & 0x70000000) != 0x10000000) {
                  *(uint *)(plVar3 + 3) = *(uint *)(plVar3 + 3) & 0x9fffffff | 0x10000000;
                  (**(code **)*plVar3)(plVar3,param_1,1);
                }
              }
            }
            else {
              *(uint *)(plVar3 + 3) = uVar2 & 0x7fffffff;
              if (((uVar2 & 0x7fffffff) >> 0x1b & 1) == 0) {
                *(undefined4 *)(plVar3 + 2) = 0xffffffff;
              }
            }
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar10);
      }
      *(undefined8 *)(param_1 + 0x38) = 0xffffffffffffffff;
      FUN_1434a3810(param_1 + 0x10,0);
      for (plVar3 = *(longlong **)(param_1 + 0x48); plVar3 != plVar1; plVar3 = (longlong *)plVar3[1]
          ) {
        uVar2 = *(uint *)(plVar3 + 3);
        if ((uVar2 & 0x3ffffff) == 0) {
          *(uint *)(plVar3 + 3) = uVar2 & 0xafffffff | 0x20000000;
        }
        else {
          *(uint *)(plVar3 + 3) = uVar2 & 0x8fffffff;
          *(longlong **)(param_1 + 0x60) = plVar3;
          (**(code **)*plVar3)(plVar3,param_1,2);
        }
      }
      plVar3 = *(longlong **)(param_1 + 0x48);
      while (plVar3 != plVar1) {
        uVar2 = *(uint *)(plVar3 + 3);
        plVar4 = (longlong *)plVar3[1];
        if ((uVar2 & 0x70000000) == 0x20000000) {
          (**(code **)(*plVar3 + 8))(plVar3);
          (**(code **)(*DAT_146b62f28 + 0x60))();
          uVar11 = uVar11 + 1;
          plVar3 = plVar4;
        }
        else {
          uVar7 = uVar2 & 0x77ffffff;
          plVar3[1] = param_1;
          *(uint *)(plVar3 + 3) = uVar7;
          *(undefined4 *)(plVar3 + 2) = 0xffffffff;
          if ((uVar7 >> 0x1a & 1) == 0) {
            if ((uVar2 & 0x70000000) == 0x30000000) {
              FUN_14349d2c0(param_1);
              plVar3 = plVar4;
            }
            else {
              *(uint *)(plVar3 + 3) = uVar7;
              *(undefined4 *)(plVar3 + 2) = 0xffffffff;
              plVar3 = plVar4;
            }
          }
          else {
            *(uint *)(plVar3 + 3) = uVar2 & 0x73ffffff;
            FUN_1434a2b80(plVar3);
            plVar3 = plVar4;
          }
        }
      }
      *(longlong **)(param_1 + 0x60) = plVar1;
      *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0x77ffffff;
      *(undefined8 *)(param_1 + 0x48) = 0;
      if ((*(uint *)(param_1 + 0x58) >> 0x1b & 1) == 0) {
        *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
      }
      uVar10 = *(ulonglong *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x38) = 0xffffffffffffffff;
    } while (uVar10 != 0);
    if (param_2 != (undefined8 *)0x0) {
      *(int *)(param_2 + 1) = (int)uVar9;
      uVar5 = (int)uVar11;
      if (uVar9 < uVar11) {
        uVar5 = (int)uVar9;
      }
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar5;
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x18))(plVar6,uVar9 & 0xffffffff);
        (**(code **)(*plVar6 + 0x20))(plVar6,*(undefined4 *)((longlong)param_2 + 0xc));
      }
    }
    return 1;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  return 0;
}



// FUNCTION 14349e540 CompareBuiltIn_CaseCheck body=84 status=ok
// SIG undefined CompareBuiltIn_CaseCheck(void)

undefined8
Scaleform::GFx::ASString::CompareBuiltIn_CaseCheck(longlong *param_1,longlong *param_2,char param_3)

{
  if (param_3 != '\0') {
    return CONCAT71((int7)((ulonglong)*param_2 >> 8),*param_1 == *param_2);
  }
  if (*(longlong *)(*param_2 + 0x10) == 0) {
    FUN_14335f970();
  }
  return CONCAT71((int7)((ulonglong)*(longlong *)(*param_2 + 0x10) >> 8),
                  *(longlong *)(*param_1 + 0x10) == *(longlong *)(*param_2 + 0x10));
}



// FUNCTION 14349e5a0 FUN_14349e5a0 body=59 status=ok
// SIG undefined FUN_14349e5a0(void)

undefined8 FUN_14349e5a0(longlong *param_1,longlong *param_2)

{
  if (*(longlong *)(*param_2 + 0x10) == 0) {
    FUN_14335f970();
  }
  return CONCAT71((int7)((ulonglong)*(longlong *)(*param_2 + 0x10) >> 8),
                  *(longlong *)(*param_1 + 0x10) == *(longlong *)(*param_2 + 0x10));
}



// FUNCTION 14349e5e0 FUN_14349e5e0 body=172 status=ok
// SIG undefined FUN_14349e5e0(void)

bool FUN_14349e5e0(longlong *param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  bool bVar4;
  
  bVar2 = *(byte *)(param_1 + 1);
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (*(char *)(param_3 + lVar3) != '\0');
  lVar3 = FUN_143360950(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*param_1 + 0x28) + 0x18) + 0x618),param_3,
                        lVar3,0);
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
  if (bVar2 < 7) {
    if (*(longlong *)(lVar3 + 0x10) == 0) {
      FUN_14335f970(lVar3);
    }
    if (*(longlong *)(*param_2 + 0x10) == 0) {
      FUN_14335f970();
    }
    bVar4 = *(longlong *)(lVar3 + 0x10) == *(longlong *)(*param_2 + 0x10);
  }
  else {
    bVar4 = lVar3 == *param_2;
  }
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar3);
  }
  return bVar4;
}



// FUNCTION 14349e690 FUN_14349e690 body=140 status=ok
// SIG undefined FUN_14349e690(void)

bool FUN_14349e690(longlong *param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (*(char *)(param_3 + lVar4) != '\0');
  lVar4 = FUN_143360950(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*param_1 + 0x28) + 0x18) + 0x618),param_3,
                        lVar4,0);
  *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
  if (*(longlong *)(lVar4 + 0x10) == 0) {
    FUN_14335f970(lVar4);
  }
  if (*(longlong *)(*param_2 + 0x10) == 0) {
    FUN_14335f970();
  }
  lVar2 = *(longlong *)(*param_2 + 0x10);
  lVar3 = *(longlong *)(lVar4 + 0x10);
  piVar1 = (int *)(lVar4 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar4);
  }
  return lVar3 == lVar2;
}



// FUNCTION 14349e720 Construct body=88 status=ok
// SIG undefined Construct(void)

void Scaleform::ConstructorCPP<Scaleform::GFx::Value>::Construct
               (undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0xffffffffffffffff;
    param_1[1] = 0xffffffffffffffff;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
    param_1[4] = *(undefined8 *)(param_2 + 0x20);
    param_1[5] = *(undefined8 *)(param_2 + 0x28);
    if ((*(uint *)(param_2 + 0x18) >> 6 & 1) != 0) {
      plVar1 = *(longlong **)(param_2 + 0x10);
      param_1[2] = plVar1;
                    /* WARNING: Could not recover jumptable at 0x00014349e773. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 8))(plVar1,param_1,param_1[4]);
      return;
    }
  }
  return;
}



// FUNCTION 14349e780 FUN_14349e780 body=179 status=ok
// SIG undefined FUN_14349e780(void)

void FUN_14349e780(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x18);
    plVar3 = (longlong *)(param_3 + 0x18);
    do {
      if (puVar2 + -3 != (longlong *)0x0) {
        puVar2[-3] = plVar3[-3];
        *(int *)(puVar2 + -2) = (int)plVar3[-2];
        *(undefined1 *)(puVar2 + 1) = 0;
        lVar1 = plVar3[-1];
        puVar2[-1] = lVar1;
        if (lVar1 != 0) {
          *(uint *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1U & 0x8fffffff;
        }
        *puVar2 = 0;
        if (*plVar3 != 0) {
          FUN_1434109d0(puVar2 + -1,*plVar3,*(byte *)(plVar3 + 1) & 1);
        }
        puVar2[2] = plVar3[2];
        puVar2[3] = plVar3[3];
      }
      puVar2 = puVar2 + 7;
      plVar3 = plVar3 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14349e840 CreateImageSubstitutor body=85 status=ok
// SIG undefined CreateImageSubstitutor(void)

undefined8 * Scaleform::GFx::TextField::CreateImageSubstitutor(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xe0);
  if (*(longlong *)(lVar1 + 0x30) == 0) {
    puVar2 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x18);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *(undefined8 **)(lVar1 + 0x30) = puVar2;
      return puVar2;
    }
    *(undefined8 *)(lVar1 + 0x30) = 0;
  }
  return *(undefined8 **)(lVar1 + 0x30);
}



// FUNCTION 14349e8a0 FUN_14349e8a0 body=54 status=ok
// SIG undefined FUN_14349e8a0(void)

longlong * FUN_14349e8a0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_143360a60(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x28) + 0x18)
                         + 0x618),param_3);
  *param_2 = lVar1;
  *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
  return param_2;
}



// FUNCTION 14349e8f0 FUN_14349e8f0 body=108 status=ok
// SIG undefined FUN_14349e8f0(void)

void FUN_14349e8f0(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    param_1 = param_2 * 0x30 + -0x30 + param_1;
    do {
      if ((*(uint *)(param_1 + 0x18) >> 6 & 1) != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
                  (*(longlong **)(param_1 + 0x10),param_1,*(undefined8 *)(param_1 + 0x20));
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
      *(undefined4 *)(param_1 + 0x18) = 0;
      param_1 = param_1 + -0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14349e960 FUN_14349e960 body=142 status=ok
// SIG undefined FUN_14349e960(void)

void FUN_14349e960(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + -0x20 + param_2 * 0x38);
    do {
      if ((((*(byte *)(plVar2 + 1) & 2) == 0) && (lVar1 = plVar2[-1], lVar1 != 0)) &&
         ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
        FUN_1434a2b80();
      }
      plVar2[-1] = 0;
      if ((((*(byte *)(plVar2 + 1) & 1) == 0) && (lVar1 = *plVar2, lVar1 != 0)) &&
         ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
        FUN_1434a2b80();
      }
      *plVar2 = 0;
      plVar2 = plVar2 + -7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14349eac0 FUN_14349eac0 body=56 status=ok
// SIG undefined FUN_14349eac0(void)

void FUN_14349eac0(longlong param_1)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)(param_1 + 8);
  if (4 < **(byte **)(param_1 + 8)) {
    FUN_143411150();
  }
  *puVar1 = *puVar1 - 0x20;
  if (*puVar1 < *(ulonglong *)(param_1 + 0x10)) {
    FUN_1434a25c0(puVar1);
    return;
  }
  return;
}



// FUNCTION 14349eb00 FUN_14349eb00 body=70 status=ok
// SIG undefined FUN_14349eb00(void)

void FUN_14349eb00(longlong param_1,int param_2)

{
  ulonglong *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (ulonglong *)(param_1 + 8);
    do {
      if (4 < *(byte *)*puVar1) {
        FUN_143411150();
      }
      *puVar1 = *puVar1 - 0x20;
      if (*puVar1 < *(ulonglong *)(param_1 + 0x10)) {
        FUN_1434a25c0(puVar1);
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14349eb50 FUN_14349eb50 body=106 status=ok
// SIG undefined FUN_14349eb50(void)

void FUN_14349eb50(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)(param_1 + 200);
  uVar2 = *(ulonglong *)(param_1 + 0xd0);
  uVar4 = *(longlong *)(param_1 + 0xd0) - (param_2 & 0xffffffff);
  FUN_1434a3ca0(plVar1,plVar1,uVar4);
  if (uVar2 < uVar4) {
    puVar3 = (undefined1 *)(uVar2 * 0x20 + *plVar1);
    for (lVar5 = uVar4 - uVar2; lVar5 != 0; lVar5 = lVar5 + -1) {
      if (puVar3 != (undefined1 *)0x0) {
        *puVar3 = 0;
      }
      puVar3 = puVar3 + 0x20;
    }
  }
  return;
}



// FUNCTION 14349ebc0 FUN_14349ebc0 body=102 status=ok
// SIG undefined FUN_14349ebc0(void)

void FUN_14349ebc0(longlong *param_1)

{
  longlong lVar1;
  
  if ((((*(byte *)(param_1 + 2) & 2) == 0) && (lVar1 = *param_1, lVar1 != 0)) &&
     ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80();
  }
  *param_1 = 0;
  if ((((*(byte *)(param_1 + 2) & 1) == 0) && (lVar1 = param_1[1], lVar1 != 0)) &&
     ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80();
  }
  param_1[1] = 0;
  return;
}



// FUNCTION 14349ede0 FUN_14349ede0 body=95 status=ok
// SIG undefined FUN_14349ede0(void)

void FUN_14349ede0(longlong param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_14348e5b0();
  }
  else {
    if (param_3 == 1) {
      Scaleform::GFx::AS2::FunctionRefBase::
      ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>(param_1 + 0x20);
      Scaleform::GFx::AS2::FunctionRefBase::
      ForEachChild_GC<Scaleform::GFx::AS2::RefCountBaseGC<323>::MarkInCycleFunctor>
                (param_1 + 0x38,param_2);
      return;
    }
    if (param_3 == 2) {
      FUN_14348fa70();
      return;
    }
  }
  return;
}



// FUNCTION 14349ee40 FUN_14349ee40 body=70 status=ok
// SIG undefined FUN_14349ee40(void)

void FUN_14349ee40(longlong param_1)

{
  if (*(undefined8 **)(param_1 + 0xd0) != (undefined8 *)0x0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,**(undefined8 **)(param_1 + 0xd0));
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0xd0));
  }
  FUN_14345d650(param_1);
  return;
}



// FUNCTION 14349ee90 Finalize_GC body=70 status=ok
// SIG undefined Finalize_GC(void)

void Scaleform::GFx::AS2::Prototype<Scaleform::GFx::AS2::GASIme,Scaleform::GFx::AS2::Environment>::
     Finalize_GC(longlong param_1)

{
  if (*(undefined8 **)(param_1 + 0xa0) != (undefined8 *)0x0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,**(undefined8 **)(param_1 + 0xa0));
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0xa0));
  }
  FUN_143416210(param_1);
  return;
}



// FUNCTION 14349eee0 Finalize_GC body=93 status=ok
// SIG undefined Finalize_GC(void)

void Scaleform::GFx::AS2::
     Prototype<Scaleform::GFx::AS2::BevelFilterObject,Scaleform::GFx::AS2::Environment>::Finalize_GC
               (longlong param_1)

{
  if (*(undefined8 **)(param_1 + 0xa8) != (undefined8 *)0x0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,**(undefined8 **)(param_1 + 0xa8));
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0xa8));
  }
  FUN_143416210(param_1);
  if (*(RefCountImpl **)(param_1 + 0x68) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x68));
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}



// FUNCTION 14349ef40 Finalize_GC body=114 status=ok
// SIG undefined Finalize_GC(void)

void Scaleform::GFx::AS2::
     Prototype<Scaleform::GFx::AS2::BitmapData,Scaleform::GFx::AS2::Environment>::Finalize_GC
               (longlong param_1)

{
  if (*(undefined8 **)(param_1 + 0xb0) != (undefined8 *)0x0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,**(undefined8 **)(param_1 + 0xb0));
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0xb0));
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1432de450();
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1432de450();
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  FUN_143416210(param_1);
  return;
}



// FUNCTION 14349efc0 Finalize_GC body=70 status=ok
// SIG undefined Finalize_GC(void)

void Scaleform::GFx::AS2::
     Prototype<Scaleform::GFx::AS2::BooleanObject,Scaleform::GFx::AS2::Environment>::Finalize_GC
               (longlong param_1)

{
  if (*(undefined8 **)(param_1 + 0xa8) != (undefined8 *)0x0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,**(undefined8 **)(param_1 + 0xa8));
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0xa8));
  }
  FUN_143416210(param_1);
  return;
}



// FUNCTION 14349f010 FUN_14349f010 body=97 status=ok
// SIG undefined FUN_14349f010(void)

void FUN_14349f010(longlong param_1)

{
  int *piVar1;
  
  if (*(undefined8 **)(param_1 + 0xa8) != (undefined8 *)0x0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,**(undefined8 **)(param_1 + 0xa8));
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0xa8));
  }
  piVar1 = *(int **)(param_1 + 0x68);
  if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  FUN_143416210(param_1);
  return;
}



// FUNCTION 14349f080 Finalize_GC body=70 status=ok
// SIG undefined Finalize_GC(void)

void Scaleform::GFx::AS2::
     Prototype<Scaleform::GFx::AS2::ColorTransformObject,Scaleform::GFx::AS2::Environment>::
     Finalize_GC(longlong param_1)

{
  if (*(undefined8 **)(param_1 + 200) != (undefined8 *)0x0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,**(undefined8 **)(param_1 + 200));
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 200));
  }
  FUN_143416210(param_1);
  return;
}



// FUNCTION 14349f0d0 FUN_14349f0d0 body=70 status=ok
// SIG undefined FUN_14349f0d0(void)

void FUN_14349f0d0(longlong param_1)

{
  if (*(undefined8 **)(param_1 + 0xd0) != (undefined8 *)0x0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,**(undefined8 **)(param_1 + 0xd0));
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0xd0));
  }
  FUN_143416210(param_1);
  return;
}


