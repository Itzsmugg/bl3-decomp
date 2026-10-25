// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1435aa2d0 FUN_1435aa2d0 body=181 status=ok
// SIG undefined FUN_1435aa2d0(void)

void FUN_1435aa2d0(longlong param_1,ushort param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  ushort uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      uVar4 = 0x100;
      if (0x100 < param_2) {
        uVar4 = param_2;
      }
      puVar3 = (undefined2 *)
               (**(code **)(*DAT_146b62f28 + 0x70))
                         (DAT_146b62f28,param_1,(longlong)(int)(uVar4 - 1) * 0x20 + 0x38,0);
      puVar3[1] = uVar4;
      *puVar3 = 0;
      return;
    }
    if (param_2 <= *(ushort *)(lVar1 + 2)) break;
    lVar1 = *(longlong *)(lVar1 + 8);
  }
  if (lVar1 != *(longlong *)(param_1 + 0x18)) {
    *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 8) = *(undefined8 *)(lVar1 + 8);
    if (*(longlong *)(lVar1 + 8) != 0) {
      *(undefined8 *)(*(longlong *)(lVar1 + 8) + 0x10) = *(undefined8 *)(lVar1 + 0x10);
    }
    *(undefined8 *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    return;
  }
  lVar2 = *(longlong *)(lVar1 + 8);
  *(longlong *)(param_1 + 0x18) = lVar2;
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x10) = 0;
  }
  *(undefined8 *)(lVar1 + 8) = 0;
  return;
}



// FUNCTION 1435aa390 FUN_1435aa390 body=83 status=ok
// SIG undefined FUN_1435aa390(void)

undefined8 * FUN_1435aa390(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[5] = 0;
  lVar1 = FUN_1435aaa70(param_1,0);
  param_1[4] = lVar1;
  *(undefined8 *)(lVar1 + 8) = 0;
  *(undefined8 *)(param_1[4] + 0x10) = 0;
  lVar1 = param_1[4] + 0x18;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_1[4] + -8;
  return param_1;
}



// FUNCTION 1435aa3f0 FUN_1435aa3f0 body=95 status=ok
// SIG undefined FUN_1435aa3f0(void)

void FUN_1435aa3f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  while (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8);
    (**(code **)(*DAT_146b62f28 + 0x60))();
    lVar1 = *(longlong *)(param_1 + 0x28);
  }
  FUN_143611d10(param_1,(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10)) + 0x20 >> 5)
  ;
                    /* WARNING: Could not recover jumptable at 0x0001435aa44b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 1435aa460 FUN_1435aa460 body=946 status=ok
// SIG undefined FUN_1435aa460(void)

void FUN_1435aa460(longlong *param_1,undefined8 *param_2,ushort param_3,uint *param_4,ushort param_5
                  ,ushort param_6,char param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar7 = param_5 - 1;
  if (param_7 == '\0') {
    if (param_4 == (uint *)0x0) {
      puVar8 = (uint *)param_1[3];
    }
    else {
      puVar8 = param_4 + -8;
    }
  }
  else {
    puVar8 = (uint *)(param_1[3] + 0x20);
  }
  if ((uint *)(param_1[4] + 0x18 + (ulonglong)*(ushort *)(param_1[4] + 2) * 0x20) <
      puVar8 + (ulonglong)(uVar7 & 0xffff) * 8 + (ulonglong)param_6 * 8) {
    lVar9 = FUN_1435aaa70(param_1,(uint)param_5 + (uint)param_6);
    *(undefined8 *)(lVar9 + 8) = 0;
    *(longlong *)(lVar9 + 0x10) = param_1[4];
    *(longlong *)(param_1[4] + 8) = lVar9;
    param_1[4] = lVar9;
    if (param_7 == '\0') {
      lVar6 = lVar9 + 0x18;
      param_1[1] = lVar6;
      *param_1 = lVar6;
      param_1[2] = (ulonglong)((uVar7 & 0xffff) + 1) * 0x20 + lVar6;
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar9 + 0x38),0,(ulonglong)((uint)param_6 + (uVar7 & 0xffff)) << 5);
      puVar1 = (undefined8 *)param_1[1];
      uVar2 = param_2[1];
      *puVar1 = *param_2;
      puVar1[1] = uVar2;
      uVar2 = param_2[3];
      puVar1[2] = param_2[2];
      puVar1[3] = uVar2;
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      for (uVar10 = (ulonglong)param_3; uVar10 != 0; uVar10 = uVar10 - 1) {
        uVar2 = *(undefined8 *)(param_4 + 2);
        puVar1[4] = *(undefined8 *)param_4;
        puVar1[5] = uVar2;
        uVar2 = *(undefined8 *)(param_4 + 6);
        puVar1[6] = *(undefined8 *)(param_4 + 4);
        puVar1[7] = uVar2;
        *param_4 = 0;
        puVar1 = puVar1 + 4;
        param_4 = param_4 + 8;
      }
    }
    else {
      pvVar5 = (void *)(lVar9 + 0x18);
      param_1[1] = (longlong)pvVar5;
      *param_1 = (longlong)pvVar5;
      param_1[2] = (longlong)((ulonglong)((uVar7 & 0xffff) + 1) * 0x20 + (longlong)pvVar5);
      _guard_xfg_dispatch_icall_nop(pvVar5,0,(ulonglong)((uVar7 & 0xffff) + param_6 + 1) << 5);
      FUN_1435901e0(param_1[1],param_2);
      if (param_3 != 0) {
        uVar10 = (ulonglong)param_3;
        lVar9 = 0x20 - (longlong)param_4;
        do {
          puVar8 = (uint *)((longlong)param_4 + lVar9 + param_1[1]);
          if (param_4 != puVar8) {
            uVar2 = *(undefined8 *)(param_4 + 2);
            *(undefined8 *)puVar8 = *(undefined8 *)param_4;
            *(undefined8 *)(puVar8 + 2) = uVar2;
            uVar2 = *(undefined8 *)(param_4 + 6);
            *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(param_4 + 4);
            *(undefined8 *)(puVar8 + 6) = uVar2;
            uVar7 = *puVar8 & 0x1f;
            if (9 < uVar7) {
              if ((*puVar8 >> 9 & 1) == 0) {
                if (uVar7 == 10) {
                  *(int *)(*(longlong *)(puVar8 + 4) + 0x18) =
                       *(int *)(*(longlong *)(puVar8 + 4) + 0x18) + 1;
                }
                else if (10 < uVar7) {
                  if (uVar7 < 0xd) {
                    lVar6 = *(longlong *)(puVar8 + 4);
                  }
                  else {
                    if (0xe < uVar7) goto LAB_1435aa742;
                    lVar6 = *(longlong *)(puVar8 + 6);
                  }
                  if (lVar6 != 0) {
                    *(uint *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1U & 0x8fffffff;
                  }
                }
              }
              else {
                **(int **)(puVar8 + 2) = **(int **)(puVar8 + 2) + 1;
              }
            }
          }
LAB_1435aa742:
          param_4 = param_4 + 8;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
    }
    param_1[3] = param_1[2] + -0x20;
  }
  else {
    if (param_7 == '\0') {
      *param_1 = (longlong)param_2;
      if (param_4 == (uint *)0x0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(param_1[3] + 0x20),0,
                   ((ulonglong)(uVar7 & 0xffff) + (ulonglong)param_6) * 0x20);
        param_1[1] = param_1[3];
      }
      else {
        iVar4 = (uVar7 & 0xffff) - (uint)param_3;
        _guard_xfg_dispatch_icall_nop
                  (param_4 + (longlong)iVar4 * 8,0,(longlong)(int)((uint)param_6 + iVar4) << 5);
        param_1[1] = (longlong)(param_4 + -8);
      }
    }
    else {
      pvVar5 = (void *)(param_1[3] + 0x20);
      param_1[1] = (longlong)pvVar5;
      *param_1 = (longlong)pvVar5;
      _guard_xfg_dispatch_icall_nop
                (pvVar5,0,((ulonglong)param_6 + 1 + (ulonglong)(uVar7 & 0xffff)) * 0x20);
      FUN_1435901e0(param_1[1],param_2);
      if (param_3 != 0) {
        uVar10 = (ulonglong)param_3;
        lVar9 = 0x20 - (longlong)param_4;
        do {
          puVar8 = (uint *)(param_1[1] + lVar9 + (longlong)param_4);
          if (param_4 != puVar8) {
            uVar2 = *(undefined8 *)(param_4 + 2);
            *(undefined8 *)puVar8 = *(undefined8 *)param_4;
            *(undefined8 *)(puVar8 + 2) = uVar2;
            uVar2 = *(undefined8 *)(param_4 + 6);
            *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(param_4 + 4);
            *(undefined8 *)(puVar8 + 6) = uVar2;
            uVar3 = *puVar8 & 0x1f;
            if (9 < uVar3) {
              if ((*puVar8 >> 9 & 1) == 0) {
                if (uVar3 == 10) {
                  *(int *)(*(longlong *)(puVar8 + 4) + 0x18) =
                       *(int *)(*(longlong *)(puVar8 + 4) + 0x18) + 1;
                }
                else if (10 < uVar3) {
                  if (uVar3 < 0xd) {
                    lVar6 = *(longlong *)(puVar8 + 4);
                  }
                  else {
                    if (0xe < uVar3) goto LAB_1435aa5c2;
                    lVar6 = *(longlong *)(puVar8 + 6);
                  }
                  if (lVar6 != 0) {
                    *(uint *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1U & 0x8fffffff;
                  }
                }
              }
              else {
                **(int **)(puVar8 + 2) = **(int **)(puVar8 + 2) + 1;
              }
            }
          }
LAB_1435aa5c2:
          param_4 = param_4 + 8;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
    }
    lVar9 = param_1[1] + (ulonglong)(uVar7 & 0xffff) * 0x20;
    param_1[3] = lVar9;
    param_1[2] = lVar9 + 0x20;
  }
  *(short *)param_1[4] = *(short *)param_1[4] + 1;
  return;
}



// FUNCTION 1435aa820 FUN_1435aa820 body=152 status=ok
// SIG undefined FUN_1435aa820(void)

void FUN_1435aa820(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(short *)param_1[4] = *(short *)param_1[4] + -1;
  psVar1 = (short *)param_1[4];
  if ((*psVar1 == 0) && (lVar2 = *(longlong *)(psVar1 + 8), lVar2 != 0)) {
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    psVar1[8] = 0;
    psVar1[9] = 0;
    psVar1[10] = 0;
    psVar1[0xb] = 0;
    *(undefined8 *)(param_1[4] + 8) = param_1[5];
    param_1[5] = param_1[4];
    param_1[4] = lVar2;
    *(undefined8 *)(lVar2 + 8) = 0;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    param_1[1] = param_2[1];
    *param_1 = *param_2;
    return;
  }
  param_1[3] = param_2[3];
  param_1[2] = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = *param_2;
  return;
}



// FUNCTION 1435aa8c0 FUN_1435aa8c0 body=343 status=ok
// SIG undefined FUN_1435aa8c0(void)

void FUN_1435aa8c0(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  
  FUN_143611d10(param_1,(param_1[3] - param_1[2]) + 0x20 >> 5);
  puVar4 = (uint *)*param_1;
  if (9 < ((byte)*puVar4 & 0x1f)) {
    if ((*puVar4 >> 9 & 1) == 0) {
      FUN_1435920c0(puVar4);
    }
    else {
      piVar1 = *(int **)(puVar4 + 2);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *puVar4 = *puVar4 & 0xfffffde0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
    }
  }
  puVar4 = (uint *)(param_1[1] + 0x20);
  if (puVar4 < (uint *)param_1[2]) {
    do {
      uVar2 = *puVar4 & 0x1f;
      if (9 < uVar2) {
        if ((*puVar4 >> 9 & 1) == 0) {
          if (uVar2 == 10) {
            piVar1 = (int *)(*(longlong *)(puVar4 + 4) + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          else if ((uVar2 == 0xb) || (uVar2 == 0xc)) {
            uVar3 = *(ulonglong *)(puVar4 + 4);
            if ((uVar3 & 1) == 0) {
LAB_1435aa9cf:
              if ((uVar3 != 0) && ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0)) {
                *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
                FUN_1434ef880();
              }
            }
            else {
              *(ulonglong *)(puVar4 + 4) = uVar3 - 1;
            }
          }
          else if (uVar2 - 0xd < 2) {
            uVar3 = *(ulonglong *)(puVar4 + 6);
            if ((uVar3 & 1) == 0) goto LAB_1435aa9cf;
            *(ulonglong *)(puVar4 + 6) = uVar3 - 1;
          }
        }
        else {
          piVar1 = *(int **)(puVar4 + 2);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          *puVar4 = *puVar4 & 0xfffffde0;
          puVar4[2] = 0;
          puVar4[3] = 0;
          puVar4[4] = 0;
          puVar4[5] = 0;
          puVar4[6] = 0;
          puVar4[7] = 0;
        }
      }
      puVar4 = puVar4 + 8;
    } while (puVar4 < (uint *)param_1[2]);
  }
  return;
}



// FUNCTION 1435aaa20 FUN_1435aaa20 body=72 status=ok
// SIG undefined FUN_1435aaa20(void)

void FUN_1435aaa20(undefined8 param_1,ushort param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  
  uVar2 = 0x100;
  if (0x100 < param_2) {
    uVar2 = (uint)param_2;
  }
  puVar1 = (undefined2 *)
           (**(code **)(*DAT_146b62f28 + 0x70))
                     (DAT_146b62f28,param_1,(longlong)(int)(uVar2 - 1) * 0x20 + 0x38,0);
  puVar1[1] = (short)uVar2;
  *puVar1 = 0;
  return;
}



// FUNCTION 1435aaa70 FUN_1435aaa70 body=181 status=ok
// SIG undefined FUN_1435aaa70(void)

void FUN_1435aaa70(longlong param_1,ushort param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  ushort uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  while( true ) {
    if (lVar1 == 0) {
      uVar4 = 0x100;
      if (0x100 < param_2) {
        uVar4 = param_2;
      }
      puVar3 = (undefined2 *)
               (**(code **)(*DAT_146b62f28 + 0x70))
                         (DAT_146b62f28,param_1,(longlong)(int)(uVar4 - 1) * 0x20 + 0x38,0);
      puVar3[1] = uVar4;
      *puVar3 = 0;
      return;
    }
    if (param_2 <= *(ushort *)(lVar1 + 2)) break;
    lVar1 = *(longlong *)(lVar1 + 8);
  }
  if (lVar1 != *(longlong *)(param_1 + 0x28)) {
    *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 8) = *(undefined8 *)(lVar1 + 8);
    if (*(longlong *)(lVar1 + 8) != 0) {
      *(undefined8 *)(*(longlong *)(lVar1 + 8) + 0x10) = *(undefined8 *)(lVar1 + 0x10);
    }
    *(undefined8 *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    return;
  }
  lVar2 = *(longlong *)(lVar1 + 8);
  *(longlong *)(param_1 + 0x28) = lVar2;
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x10) = 0;
  }
  *(undefined8 *)(lVar1 + 8) = 0;
  return;
}



// FUNCTION 1435aaba0 FUN_1435aaba0 body=126 status=ok
// SIG undefined FUN_1435aaba0(void)

undefined8 * FUN_1435aaba0(undefined8 *param_1)

{
  FUN_143609d90();
  *(undefined8 *)((longlong)param_1 + 0xdc) = 10;
  *param_1 = &PTR_FUN_145b4a910;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 1000;
  *(undefined4 *)(param_1 + 0x19) = 1000;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 5;
  *(undefined4 *)(param_1 + 0x1b) = 5;
  return param_1;
}



// FUNCTION 1435aac30 FUN_1435aac30 body=121 status=ok
// SIG undefined FUN_1435aac30(void)

void FUN_1435aac30(longlong param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != -1) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0xcc) = iVar1;
  if (param_3 == -1) {
    *(undefined4 *)(param_1 + 0xac) = 1000;
    *(undefined4 *)(param_1 + 200) = 1000;
  }
  else {
    *(int *)(param_1 + 0xac) = param_3;
    *(int *)(param_1 + 200) = param_3;
  }
  iVar1 = 5;
  if (param_4 != -1) {
    iVar1 = param_4;
  }
  *(int *)(param_1 + 0xd4) = iVar1;
  iVar1 = 5;
  if (param_5 != -1) {
    iVar1 = param_5;
  }
  *(int *)(param_1 + 0xd8) = iVar1;
  iVar1 = 10;
  if (param_6 != -1) {
    iVar1 = param_6;
  }
  *(int *)(param_1 + 0xdc) = iVar1;
  return;
}



// FUNCTION 1435aacb0 FUN_1435aacb0 body=557 status=ok
// SIG undefined FUN_1435aacb0(void)

void FUN_1435aacb0(longlong param_1,uint *param_2,int *param_3,RefCountImpl *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  RefCountImpl *local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_34;
  
  if (*param_3 != *(int *)(param_1 + 0xc4)) {
    *param_3 = *(int *)(param_1 + 0xc4);
    *param_2 = 1;
    return;
  }
  uVar5 = *(uint *)(param_1 + 0xa8);
  if (*param_2 < uVar5) {
    *param_2 = *param_2 + 1;
    return;
  }
  uVar2 = *(uint *)(param_1 + 0xd0);
  uVar3 = 0;
  uVar4 = 0;
  if (uVar2 != 0) {
    if (uVar2 % *(uint *)(param_1 + 0xdc) == 0) {
      uVar3 = 2;
    }
    else {
      uVar3 = 0;
      if (uVar2 % *(uint *)(param_1 + 0xd8) == 0) {
        uVar3 = 1;
      }
    }
    if (uVar2 % *(uint *)(param_1 + 0xd4) == 0) {
      uVar4 = 1;
    }
  }
  uVar1 = FUN_143610690(param_1,uVar3);
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
  uVar5 = uVar5 + 1;
  *(uint *)(param_1 + 0xa8) = uVar5;
  uVar2 = uVar1;
  if (uVar1 < *(uint *)(param_1 + 0xb0)) {
    uVar2 = *(uint *)(param_1 + 0xb0);
  }
  *(uint *)(param_1 + 0xb0) = uVar2;
  if ((*(char *)(param_1 + 0xe4) == '\0') &&
     (((*(uint *)(param_1 + 200) != 0 && (*(uint *)(param_1 + 0xac) < uVar1)) ||
      ((*(uint *)(param_1 + 0xcc) != 0 &&
       ((*(uint *)(param_1 + 0xcc) <= uVar5 && (*(uint *)(param_1 + 200) < uVar1)))))))) {
    if (param_4 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(param_4);
    }
    local_34 = 0;
    local_3c = 0;
    local_40 = 0;
    local_48 = param_4;
    FUN_14360eda0(param_1,uVar3,uVar4,&local_48);
    *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
    if (*(uint *)(param_1 + 200) < (uint)local_3c) {
      *(uint *)(param_1 + 0xb0) = uVar1;
      *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 200);
    }
    if ((uint)local_3c < uVar1) {
      uVar5 = uVar1 - (uint)local_3c;
      if (uVar1 - (uint)local_3c < *(uint *)(param_1 + 0xac)) {
        uVar5 = *(uint *)(param_1 + 0xac);
      }
      *(uint *)(param_1 + 0xac) = uVar5;
    }
    uVar5 = (uint)(longlong)((double)*(uint *)(param_1 + 0xac) * 0.7);
    if (*(uint *)(param_1 + 0xb0) < uVar5) {
      *(uint *)(param_1 + 0xac) = uVar5;
    }
    *(uint *)(param_1 + 0xbc) = *(uint *)(param_1 + 0xb0);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0xc0);
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(uint *)(param_1 + 0xb8) = (uint)local_3c;
    if (local_48 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_48);
    }
  }
  *(uint *)(param_1 + 0xb4) = uVar1;
  *param_2 = *(uint *)(param_1 + 0xa8);
  *param_3 = *(int *)(param_1 + 0xc4);
  return;
}



// FUNCTION 1435aaef0 FUN_1435aaef0 body=368 status=ok
// SIG undefined FUN_1435aaef0(void)

void FUN_1435aaef0(longlong param_1,RefCountImpl *param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  RefCountImpl *local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_34;
  
  if (*(char *)(param_1 + 0xe4) == '\0') {
    uVar1 = *(uint *)(param_1 + 0xd0);
    uVar2 = 0;
    uVar4 = 2;
    uVar5 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar4;
      if ((uVar1 % *(uint *)(param_1 + 0xdc) != 0) &&
         (uVar2 = 0, uVar1 % *(uint *)(param_1 + 0xd8) == 0)) {
        uVar2 = 1;
      }
      if (uVar1 % *(uint *)(param_1 + 0xd4) == 0) {
        uVar5 = 1;
      }
    }
    if ((param_3 & 3) == 0) {
      uVar5 = 0;
      if ((((param_3 & 0x20) == 0) && (uVar4 = 1, (param_3 & 0x10) == 0)) &&
         (uVar4 = uVar2, (param_3 & 8) != 0)) {
        uVar4 = 0;
      }
    }
    else {
      *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) | 0x20;
    }
    uVar1 = FUN_143610690(param_1,uVar4);
    if (param_2 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(param_2);
    }
    local_34 = 0;
    local_3c = 0;
    local_40 = 0;
    local_48 = param_2;
    FUN_14360eda0(param_1,uVar4,uVar5,&local_48);
    if ((param_3 & 3) != 0) {
      *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
    }
    *(undefined4 *)(param_1 + 0xa8) = 0;
    uVar3 = uVar1;
    if (uVar1 < *(uint *)(param_1 + 0xb0)) {
      uVar3 = *(uint *)(param_1 + 0xb0);
    }
    *(uint *)(param_1 + 0xb4) = uVar1;
    *(uint *)(param_1 + 0xb0) = uVar3;
    if ((*(byte *)(param_1 + 0x94) & 0x10) != 0) {
      *(uint *)(param_1 + 0xe0) = param_3 & 0xfffffff8 | 8;
    }
    if (local_48 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_48);
    }
  }
  return;
}



// FUNCTION 1435ab070 FUN_1435ab070 body=73 status=ok
// SIG undefined FUN_1435ab070(void)

void FUN_1435ab070(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0xe4) != '\0') {
    *(undefined4 *)(param_1 + 0xe0) = 10;
    return;
  }
  FUN_1435aaef0(param_1,param_2,2);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  return;
}



// FUNCTION 1435ab0c0 FUN_1435ab0c0 body=276 status=ok
// SIG undefined FUN_1435ab0c0(void)

void FUN_1435ab0c0(undefined8 *param_1)

{
  byte *pbVar1;
  ulonglong uVar2;
  int *piVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *local_res8;
  
  *param_1 = &PTR__purecall_145b17410;
  if ((*(uint *)(param_1 + 1) >> 0x1a & 1) != 0) {
    uVar2 = param_1[4];
    local_res8 = param_1;
    lVar8 = *(longlong *)((uVar2 & 0xfffffffffffffffc) + 0x88);
    if (lVar8 != 0) {
      uVar4 = 0x1505;
      lVar6 = 8;
      do {
        pbVar1 = &stack0x00000007 + lVar6;
        lVar6 = lVar6 + -1;
        uVar4 = (ulonglong)*pbVar1 + uVar4 * 0x1003f;
      } while (lVar6 != 0);
      uVar4 = *(ulonglong *)(lVar8 + 8) & uVar4;
      puVar5 = (ulonglong *)(lVar8 + 0x10 + uVar4 * 0x20);
      if ((*puVar5 != 0xfffffffffffffffe) && (uVar7 = uVar4, puVar5[1] == uVar4)) {
        while ((puVar5[1] != uVar4 || ((undefined8 *)puVar5[2] != param_1))) {
          uVar7 = *puVar5;
          if (uVar7 == 0xffffffffffffffff) goto LAB_1435ab1c4;
          puVar5 = (ulonglong *)(lVar8 + 0x10 + uVar7 * 0x20);
        }
        if (((-1 < (longlong)uVar7) && (lVar8 = (uVar7 + 1) * 0x20 + lVar8, lVar8 != 0)) &&
           (piVar3 = *(int **)(lVar8 + 8), piVar3 != (int *)0x0)) {
          piVar3[2] = 0;
          piVar3[3] = 0;
          *piVar3 = *piVar3 + -1;
          if (*piVar3 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          local_res8 = param_1;
          FUN_143604270((uVar2 & 0xfffffffffffffffc) + 0x88,&local_res8);
        }
      }
    }
  }
LAB_1435ab1c4:
  *param_1 = &PTR__purecall_145b173f0;
  return;
}



// FUNCTION 1435ab1e0 FUN_1435ab1e0 body=420 status=ok
// SIG undefined FUN_1435ab1e0(void)

undefined8 * FUN_1435ab1e0(ulonglong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  int *piVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 local_res8;
  int *local_res18;
  undefined8 *local_28;
  int **local_20;
  
  uVar10 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffc;
  local_res18 = (int *)0x0;
  local_res8 = param_1;
  lVar9 = 0x1505;
  lVar8 = 8;
  lVar3 = *(longlong *)(uVar10 + 0x88);
  if (lVar3 != 0) {
    uVar4 = 0x1505;
    lVar6 = 8;
    do {
      pbVar1 = &stack0x00000007 + lVar6;
      lVar6 = lVar6 + -1;
      uVar4 = (ulonglong)*pbVar1 + uVar4 * 0x1003f;
    } while (lVar6 != 0);
    uVar4 = *(ulonglong *)(lVar3 + 8) & uVar4;
    puVar5 = (ulonglong *)(lVar3 + 0x10 + uVar4 * 0x20);
    if ((*puVar5 != 0xfffffffffffffffe) && (uVar7 = uVar4, puVar5[1] == uVar4)) {
      while ((puVar5[1] != uVar4 || (puVar5[2] != param_1))) {
        uVar7 = *puVar5;
        if (uVar7 == 0xffffffffffffffff) goto LAB_1435ab2bf;
        puVar5 = (ulonglong *)(lVar3 + 0x10 + uVar7 * 0x20);
      }
      if ((-1 < (longlong)uVar7) && (lVar3 = (uVar7 + 1) * 0x20 + lVar3, lVar3 != 0)) {
        piVar2 = *(int **)(lVar3 + 8);
        *piVar2 = *piVar2 + 1;
        *param_2 = piVar2;
        return param_2;
      }
    }
  }
LAB_1435ab2bf:
  local_res8 = CONCAT44((int)(param_1 >> 0x20),0x148);
  local_res18 = (int *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x10,&local_res8);
  if (local_res18 == (int *)0x0) {
    *param_2 = 0;
  }
  else {
    *local_res18 = 1;
    *(ulonglong *)(local_res18 + 2) = param_1;
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x4000000;
    local_28 = &local_res8;
    local_20 = &local_res18;
    local_res8 = param_1;
    do {
      pbVar1 = &stack0x00000007 + lVar8;
      lVar8 = lVar8 + -1;
      lVar9 = (ulonglong)*pbVar1 + lVar9 * 0x1003f;
    } while (lVar8 != 0);
    FUN_143607eb0(uVar10 + 0x88,uVar10 + 0x88,&local_28,lVar9);
    *local_res18 = *local_res18 + 1;
    *param_2 = local_res18;
  }
  return param_2;
}



// FUNCTION 1435ab450 FUN_1435ab450 body=186 status=ok
// SIG undefined FUN_1435ab450(void)

uint * FUN_1435ab450(uint *param_1,uint *param_2)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  
  *param_1 = *param_1 ^ (*param_2 ^ *param_1) & 3;
  uVar3 = (*param_1 ^ *param_2) & 0xc ^ *param_1;
  *param_1 = uVar3;
  uVar3 = (uVar3 ^ *param_2) & 0x30 ^ uVar3;
  *param_1 = uVar3;
  uVar3 = (uVar3 ^ *param_2) & 0x7c0 ^ uVar3;
  *param_1 = uVar3;
  *param_1 = (uVar3 ^ *param_2) & 0x7ff ^ *param_2;
  param_1[1] = param_2[1];
  lVar2 = *(longlong *)(param_2 + 2);
  *(longlong *)(param_1 + 2) = lVar2;
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1U & 0x8fffffff;
  }
  lVar2 = *(longlong *)(param_2 + 4);
  *(longlong *)(param_1 + 4) = lVar2;
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1U & 0x8fffffff;
  }
  lVar2 = *(longlong *)(param_2 + 6);
  *(longlong *)(param_1 + 6) = lVar2;
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1U & 0x8fffffff;
  }
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  if (*(longlong *)(param_2 + 10) != 0) {
    piVar1 = (int *)(*(longlong *)(param_2 + 10) + 0x18);
    *piVar1 = *piVar1 + 1;
  }
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  return param_1;
}



// FUNCTION 1435ab510 FUN_1435ab510 body=176 status=ok
// SIG undefined FUN_1435ab510(void)

void FUN_1435ab510(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  uVar2 = *(ulonglong *)(param_1 + 0x18);
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x18) = uVar2 - 1;
    }
  }
  uVar2 = *(ulonglong *)(param_1 + 0x10);
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *(ulonglong *)(param_1 + 0x10) = uVar2 - 1;
    }
  }
  uVar2 = *(ulonglong *)(param_1 + 8);
  if (uVar2 != 0) {
    if ((uVar2 & 1) != 0) {
      *(ulonglong *)(param_1 + 8) = uVar2 - 1;
      return;
    }
    if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
      FUN_1434ef880();
      return;
    }
  }
  return;
}



// FUNCTION 1435ab5d0 FUN_1435ab5d0 body=196 status=ok
// SIG undefined FUN_1435ab5d0(void)

uint * FUN_1435ab5d0(uint *param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  
  if (param_1 != param_2) {
    *param_1 = *param_1 ^ (*param_2 ^ *param_1) & 3;
    uVar2 = (*param_2 ^ *param_1) & 0xc ^ *param_1;
    *param_1 = uVar2;
    uVar2 = (uVar2 ^ *param_2) & 0x30 ^ uVar2;
    *param_1 = uVar2;
    uVar2 = (uVar2 ^ *param_2) & 0x7c0 ^ uVar2;
    *param_1 = uVar2;
    *param_1 = (uVar2 ^ *param_2) & 0x7ff ^ *param_2;
    param_1[1] = param_2[1];
    FUN_1434e6830(param_1 + 2,param_2 + 2);
    FUN_1434e6830(param_1 + 4,param_2 + 4);
    FUN_1434e6830(param_1 + 6,param_2 + 6);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    if (*(longlong *)(param_2 + 10) != 0) {
      piVar1 = (int *)(*(longlong *)(param_2 + 10) + 0x18);
      *piVar1 = *piVar1 + 1;
    }
    if (*(longlong *)(param_1 + 10) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 10) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  }
  return param_1;
}



// FUNCTION 1435ab720 IsConst body=76 status=ok
// SIG undefined IsConst(void)

bool Scaleform::GFx::AS3::SlotInfo::IsConst(byte *param_1)

{
  bool bVar1;
  byte local_res8 [4];
  undefined4 local_resc;
  longlong local_res10 [3];
  
  if ((*param_1 & 3) != 0) {
    return true;
  }
  local_res10[0] = *(longlong *)(param_1 + 0x20);
  bVar1 = false;
  if (local_res10[0] != 0) {
    local_res8[0] = 0;
    local_resc = 0xffffffff;
    FUN_14361ce00(local_res10,local_res8);
    bVar1 = (local_res8[0] & 0xf) == 6;
  }
  return bVar1;
}



// FUNCTION 1435ab780 FUN_1435ab780 body=358 status=ok
// SIG undefined FUN_1435ab780(void)

bool FUN_1435ab780(uint *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  int *piVar6;
  uint *puVar7;
  bool bVar8;
  longlong local_res8;
  undefined8 local_res10;
  byte local_28 [4];
  undefined8 local_24;
  uint local_1c;
  char *local_18;
  longlong local_10;
  
  if ((*param_1 & 0x7c0) == 0x40) {
    return true;
  }
  local_res8 = *(longlong *)(param_1 + 8);
  bVar8 = false;
  if (local_res8 != 0) {
    local_28[0] = 0;
    local_24 = 0xffffffffffffffff;
    local_1c = 0xffffffff;
    Scaleform::GFx::AS3::Abc::ReadTraitInfoHeader(&local_res8,local_28);
    bVar8 = (local_28[0] & 0xf) == 4;
    if ((local_28[0] & 0xf) != 4) {
      if (((local_28[0] & 0xf) == 0) || ((local_28[0] & 0xf) == 6)) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 6) + 0xa0);
        if (((local_28[0] & 0xf) == 0) || ((local_28[0] & 0xf) == 6)) {
          uVar5 = (ulonglong)(int)local_1c;
        }
        else {
          local_res10 = *(undefined8 *)(*(longlong *)(lVar1 + 0x78) + (ulonglong)local_1c * 8);
          uVar2 = FUN_14358f8b0(&local_res10);
          uVar5 = (ulonglong)uVar2;
        }
        piVar6 = (int *)(uVar5 * 0x10 + *(longlong *)(lVar1 + 0x148));
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 6) + 0xa0);
        lVar4 = (longlong)*piVar6;
        if (lVar4 == 0) {
          puVar7 = (uint *)(lVar1 + 0x160);
        }
        else {
          puVar7 = (uint *)(*(longlong *)(lVar1 + 0x118) + lVar4 * 0x18);
        }
        FUN_14361cb40(*(longlong *)(lVar1 + 0x100) + (ulonglong)(uint)piVar6[2] * 8,&local_18);
        if (local_10 == 5) {
          if (local_18 != "Class") {
            if (local_18 == (char *)0x0) {
              return bVar8;
            }
            iVar3 = strncmp(local_18,"Class",5);
            if (iVar3 != 0) {
              return bVar8;
            }
          }
          if (((*puVar7 & 0xfffffffb) == 0) && (*(longlong *)(puVar7 + 4) == 0)) {
            bVar8 = true;
          }
        }
      }
    }
  }
  return bVar8;
}



// FUNCTION 1435ab8f0 FUN_1435ab8f0 body=83 status=ok
// SIG undefined FUN_1435ab8f0(void)

bool FUN_1435ab8f0(byte *param_1)

{
  bool bVar1;
  byte local_res8 [4];
  undefined4 local_resc;
  longlong local_res10 [3];
  
  if ((*param_1 & 3) != 0) {
    return true;
  }
  local_res10[0] = *(longlong *)(param_1 + 0x20);
  bVar1 = false;
  if (local_res10[0] != 0) {
    local_res8[0] = 0;
    local_resc = 0xffffffff;
    FUN_14361ce00(local_res10,local_res8);
    bVar1 = ((local_res8[0] & 0xf) - 4 & 0xfffffffd) == 0;
  }
  return bVar1;
}



// FUNCTION 1435ab950 FUN_1435ab950 body=1270 status=ok
// SIG undefined FUN_1435ab950(void)

undefined1 * FUN_1435ab950(int *param_1,undefined1 *param_2,undefined8 param_3,ulonglong param_4)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 local_res8;
  ulonglong in_stack_ffffffffffffff88;
  uint local_58 [2];
  int *local_50;
  uint local_48;
  uint uStack_44;
  ulonglong uStack_40;
  uint local_38 [2];
  int *local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  uVar2 = param_1[1];
  switch((*param_1 << 0x15) >> 0x1b) {
  case 1:
    FUN_143590140(param_3,(ulonglong)uVar2 * 0x20 + *(longlong *)(param_4 + 0xb0));
    *param_2 = 1;
    break;
  case 2:
    FUN_143590140(param_3,uVar2 + param_4);
    *param_2 = 1;
    break;
  case 3:
    FUN_1436108d0(uVar2 + param_4,param_3);
    *param_2 = 1;
    break;
  case 4:
    if (uVar2 + param_4 != 0) {
      FUN_1435903c0(param_3);
      *param_2 = 1;
      return param_2;
    }
    goto LAB_1435abde4;
  case 5:
    FUN_1434f05f0(param_3,*(undefined1 *)(uVar2 + param_4));
    *param_2 = 1;
    break;
  case 6:
    FUN_1434f0780(param_3,*(undefined4 *)(uVar2 + param_4));
    *param_2 = 1;
    break;
  case 7:
    FUN_143614720(param_3,*(undefined4 *)(uVar2 + param_4));
    *param_2 = 1;
    break;
  case 8:
    FUN_1434f06a0(param_3,*(undefined8 *)(uVar2 + param_4));
    *param_2 = 1;
    break;
  case 9:
    if (*(longlong *)(uVar2 + param_4) == 0) {
      FUN_1434f0650(param_3);
      *param_2 = 1;
    }
    else {
      FUN_143590310();
      *param_2 = 1;
    }
    break;
  case 10:
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (*(char *)(*(longlong *)(uVar2 + param_4) + lVar8) != '\0');
    lVar8 = FUN_143360950(*(undefined8 *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(param_4 + 0x28) + 0x98) + 0x10) + 0x218),
                          *(longlong *)(uVar2 + param_4),lVar8,0);
    *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
    local_res8 = lVar8;
    FUN_143590250(param_3,&local_res8);
    piVar1 = (int *)(lVar8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar8);
      *param_2 = 1;
      return param_2;
    }
    goto LAB_1435abde4;
  case 0xb:
    uVar3 = FUN_1434ef190(*(undefined8 *)(param_4 + 0x28));
    FUN_1435d7c40(uVar3,param_3,(longlong)(int)uVar2,param_4,
                  in_stack_ffffffffffffff88 & 0xffffffffffffff00);
    *param_2 = 1;
    break;
  case 0xc:
  case 0xe:
    puVar4 = (ulonglong *)FUN_1434ef190(*(undefined8 *)(param_4 + 0x28));
    puVar7 = (uint *)((ulonglong)uVar2 * 0x20 + puVar4[1]);
    local_58[0] = *puVar7;
    if (((byte)local_58[0] & 0x1f) == 6) {
      uStack_40 = *puVar4;
      local_58[0] = 7;
      local_50 = (int *)0x0;
      local_48 = uVar2;
    }
    else {
      local_50 = *(int **)(puVar7 + 2);
      local_48 = puVar7[4];
      uStack_44 = puVar7[5];
      uStack_40 = *(ulonglong *)(puVar7 + 6);
      uVar2 = *puVar7 & 0x1f;
      if (9 < uVar2) {
        if ((*puVar7 >> 9 & 1) == 0) {
          if (uVar2 == 10) {
            *(int *)(*(longlong *)(puVar7 + 4) + 0x18) =
                 *(int *)(*(longlong *)(puVar7 + 4) + 0x18) + 1;
          }
          else if (10 < uVar2) {
            if (uVar2 < 0xd) {
              lVar8 = *(longlong *)(puVar7 + 4);
            }
            else {
              if (0xe < uVar2) goto LAB_1435abbd3;
              lVar8 = *(longlong *)(puVar7 + 6);
            }
            if (lVar8 != 0) {
              *(uint *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1U & 0x8fffffff;
            }
          }
        }
        else {
          **(int **)(puVar7 + 2) = **(int **)(puVar7 + 2) + 1;
        }
      }
    }
LAB_1435abbd3:
    lVar8 = *(longlong *)(*(longlong *)(param_4 + 0x28) + 0x98);
    local_30 = (int *)0x0;
    local_res8 = (ulonglong)local_res8._4_4_ << 0x20;
    *(uint *)(param_4 + 8) = *(int *)(param_4 + 8) + 1U & 0x8fffffff;
    local_38[0] = 0xc;
    local_28 = param_4;
    FUN_1435ce880(lVar8,local_58,local_38,param_3,&local_res8,0,0,1);
    uVar2 = local_38[0] & 0x1f;
    if (9 < uVar2) {
      if ((local_38[0] >> 9 & 1) == 0) {
        if (uVar2 == 10) {
          piVar1 = (int *)(local_28 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else {
          uVar6 = local_28;
          if ((((uVar2 == 0xb) || (uVar2 == 0xc)) || (uVar6 = local_20, uVar2 - 0xd < 2)) &&
             ((((uVar6 & 1) == 0 && (uVar6 != 0)) && ((*(uint *)(uVar6 + 8) & 0x3fffff) != 0)))) {
            *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) - 1;
            FUN_1434ef880();
          }
        }
      }
      else {
        *local_30 = *local_30 + -1;
        if (*local_30 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
      }
    }
    uVar2 = local_58[0] & 0x1f;
    if (*(char *)(lVar8 + 0xb8) != '\0') {
      *param_2 = 0;
      if (uVar2 < 10) {
        return param_2;
      }
      if ((local_58[0] >> 9 & 1) != 0) {
        *local_50 = *local_50 + -1;
        if (*local_50 != 0) {
          return param_2;
        }
        (**(code **)(*DAT_146b62f28 + 0x60))();
        return param_2;
      }
      if (uVar2 == 10) {
        piVar1 = (int *)(CONCAT44(uStack_44,local_48) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) {
          return param_2;
        }
        FUN_14335f920();
        return param_2;
      }
      if ((uVar2 == 0xb) || (uVar2 == 0xc)) {
        uVar6 = CONCAT44(uStack_44,local_48);
      }
      else {
        uVar6 = uStack_40;
        if (1 < uVar2 - 0xd) {
          return param_2;
        }
      }
      if ((uVar6 & 1) != 0) {
        return param_2;
      }
      if (uVar6 == 0) {
        return param_2;
      }
      if ((*(uint *)(uVar6 + 8) & 0x3fffff) == 0) {
        return param_2;
      }
      *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) - 1;
      FUN_1434ef880();
      return param_2;
    }
    if (9 < uVar2) {
      if ((local_58[0] >> 9 & 1) == 0) {
        if (uVar2 == 10) {
          piVar1 = (int *)(CONCAT44(uStack_44,local_48) + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else {
          if ((uVar2 == 0xb) || (uVar2 == 0xc)) {
            uVar6 = CONCAT44(uStack_44,local_48);
          }
          else {
            uVar6 = uStack_40;
            if (1 < uVar2 - 0xd) goto LAB_1435abde4;
          }
          if ((((uVar6 & 1) == 0) && (uVar6 != 0)) && ((*(uint *)(uVar6 + 8) & 0x3fffff) != 0)) {
            *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) - 1;
            FUN_1434ef880();
            *param_2 = 1;
            return param_2;
          }
        }
      }
      else {
        *local_50 = *local_50 + -1;
        if (*local_50 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
          *param_2 = 1;
          return param_2;
        }
      }
    }
LAB_1435abde4:
    *param_2 = 1;
    break;
  case 0xd:
    uVar3 = *(undefined8 *)(*(longlong *)(param_4 + 0x28) + 0x98);
    uVar5 = FUN_1435c8e40(local_58,0x435,uVar3);
    FUN_1435ccf60(uVar3,uVar5,&DAT_145b14e70);
    local_50 = (int *)((longlong)local_50 + 0x18);
    *local_50 = *local_50 + -1;
    if (*local_50 == 0) {
      FUN_14335f920();
    }
  default:
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 1435abe90 FUN_1435abe90 body=1386 status=ok
// SIG undefined FUN_1435abe90(void)

undefined1 * FUN_1435abe90(int *param_1,undefined1 *param_2,uint *param_3,ulonglong param_4)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined4 local_res8 [2];
  ulonglong in_stack_ffffffffffffff88;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  uint uStack_44;
  ulonglong uStack_40;
  uint local_38 [2];
  int *local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  uVar2 = param_1[1];
  switch((*param_1 << 0x15) >> 0x1b) {
  case 1:
    FUN_1435901e0(param_3,(ulonglong)uVar2 * 0x20 + *(longlong *)(param_4 + 0xb0));
    *param_2 = 1;
    break;
  case 2:
    FUN_1435901e0(param_3,uVar2 + param_4);
    *param_2 = 1;
    break;
  case 3:
    FUN_143610910(uVar2 + param_4,param_3);
    *param_2 = 1;
    break;
  case 4:
    if ((longlong *)(uVar2 + param_4) != (longlong *)0x0) {
      lVar8 = *(longlong *)(uVar2 + param_4);
      if ((lVar8 != 0) &&
         (((*(byte *)(*(longlong *)(lVar8 + 0x28) + 0x88) >> 5 & 1) != 0 || (lVar8 != 0)))) {
        *(uint *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1U & 0x8fffffff;
      }
      *param_3 = *param_3 & 0xffffffec;
      *param_3 = *param_3 | 0xc;
      *param_2 = 1;
      *(longlong *)(param_3 + 4) = lVar8;
      *(int **)(param_3 + 6) = uStack_50;
      return param_2;
    }
    goto LAB_1435ac398;
  case 5:
    *param_2 = 1;
    local_58 = CONCAT71(local_58._1_7_,*(undefined1 *)(uVar2 + param_4));
    *param_3 = *param_3 & 0xffffffe1 | 1;
    *(longlong *)(param_3 + 4) = local_58;
    *(int **)(param_3 + 6) = uStack_50;
    break;
  case 6:
    *param_2 = 1;
    local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)(uVar2 + param_4));
    *param_3 = *param_3 & 0xffffffe2 | 2;
    *(longlong *)(param_3 + 4) = local_58;
    *(int **)(param_3 + 6) = uStack_50;
    break;
  case 7:
    *param_2 = 1;
    local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)(uVar2 + param_4));
    *param_3 = *param_3 & 0xffffffe3 | 3;
    *(longlong *)(param_3 + 4) = local_58;
    *(int **)(param_3 + 6) = uStack_50;
    break;
  case 8:
    *param_2 = 1;
    uVar3 = *(undefined8 *)(uVar2 + param_4);
    *param_3 = *param_3 & 0xffffffe4 | 4;
    *(undefined8 *)(param_3 + 4) = uVar3;
    *(int **)(param_3 + 6) = uStack_50;
    break;
  case 9:
    lVar8 = *(longlong *)(uVar2 + param_4);
    if (lVar8 == 0) {
      *param_3 = *param_3 & 0xffffffec;
      *param_3 = *param_3 | 0xc;
      *param_2 = 1;
      param_3[4] = 0;
      param_3[5] = 0;
      *(int **)(param_3 + 6) = uStack_50;
    }
    else {
      *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
      *param_3 = *param_3 & 0xffffffea;
      *param_3 = *param_3 | 10;
      *param_2 = 1;
      *(longlong *)(param_3 + 4) = lVar8;
      *(int **)(param_3 + 6) = uStack_50;
    }
    break;
  case 10:
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (*(char *)(*(longlong *)(uVar2 + param_4) + lVar8) != '\0');
    lVar8 = FUN_143360950(*(undefined8 *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(param_4 + 0x28) + 0x98) + 0x10) + 0x218),
                          *(longlong *)(uVar2 + param_4),lVar8,0);
    local_58._0_4_ = (uint)lVar8;
    local_58._4_4_ = (uint)((ulonglong)lVar8 >> 0x20);
    *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 2;
    *param_3 = *param_3 & 0xffffffea;
    *param_3 = *param_3 | 10;
    param_3[4] = (uint)local_58;
    param_3[5] = local_58._4_4_;
    param_3[6] = (uint)uStack_50;
    param_3[7] = uStack_50._4_4_;
    piVar1 = (int *)(lVar8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      local_58 = lVar8;
      FUN_14335f920(lVar8);
      *param_2 = 1;
      return param_2;
    }
    goto LAB_1435ac398;
  case 0xb:
    uVar3 = FUN_1434ef190(*(undefined8 *)(param_4 + 0x28));
    FUN_1435d7c40(uVar3,param_3,(longlong)(int)uVar2,param_4,
                  in_stack_ffffffffffffff88 & 0xffffffffffffff00);
    *param_2 = 1;
    break;
  case 0xc:
  case 0xe:
    puVar4 = (ulonglong *)FUN_1434ef190(*(undefined8 *)(param_4 + 0x28));
    puVar7 = (uint *)((ulonglong)uVar2 * 0x20 + puVar4[1]);
    if (((byte)*puVar7 & 0x1f) == 6) {
      uStack_40 = *puVar4;
      local_58 = CONCAT44(local_58._4_4_,7);
      uStack_50 = (int *)0x0;
      local_48 = uVar2;
    }
    else {
      local_58 = CONCAT44(local_58._4_4_,*puVar7);
      uStack_50 = *(int **)(puVar7 + 2);
      local_48 = puVar7[4];
      uStack_44 = puVar7[5];
      uStack_40 = *(ulonglong *)(puVar7 + 6);
      uVar2 = *puVar7 & 0x1f;
      if (9 < uVar2) {
        if ((*puVar7 >> 9 & 1) == 0) {
          if (uVar2 == 10) {
            *(int *)(*(longlong *)(puVar7 + 4) + 0x18) =
                 *(int *)(*(longlong *)(puVar7 + 4) + 0x18) + 1;
          }
          else if (10 < uVar2) {
            if (uVar2 < 0xd) {
              lVar8 = *(longlong *)(puVar7 + 4);
            }
            else {
              if (0xe < uVar2) goto LAB_1435ac183;
              lVar8 = *(longlong *)(puVar7 + 6);
            }
            if (lVar8 != 0) {
              *(uint *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1U & 0x8fffffff;
            }
          }
        }
        else {
          **(int **)(puVar7 + 2) = **(int **)(puVar7 + 2) + 1;
        }
      }
    }
LAB_1435ac183:
    lVar8 = *(longlong *)(*(longlong *)(param_4 + 0x28) + 0x98);
    local_30 = (int *)0x0;
    local_res8[0] = 0;
    *(uint *)(param_4 + 8) = *(int *)(param_4 + 8) + 1U & 0x8fffffff;
    local_38[0] = 0xc;
    local_28 = param_4;
    FUN_1435ce880(lVar8,&local_58,local_38,param_3,local_res8,0,0,1);
    uVar2 = local_38[0] & 0x1f;
    if (9 < uVar2) {
      if ((local_38[0] >> 9 & 1) == 0) {
        if (uVar2 == 10) {
          piVar1 = (int *)(local_28 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else {
          uVar6 = local_28;
          if ((((uVar2 == 0xb) || (uVar2 == 0xc)) || (uVar6 = local_20, uVar2 - 0xd < 2)) &&
             ((((uVar6 & 1) == 0 && (uVar6 != 0)) && ((*(uint *)(uVar6 + 8) & 0x3fffff) != 0)))) {
            *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) - 1;
            FUN_1434ef880();
          }
        }
      }
      else {
        *local_30 = *local_30 + -1;
        if (*local_30 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
      }
    }
    uVar2 = (uint)local_58 & 0x1f;
    if (*(char *)(lVar8 + 0xb8) != '\0') {
      *param_2 = 0;
      if (uVar2 < 10) {
        return param_2;
      }
      if (((uint)local_58 >> 9 & 1) != 0) {
        *uStack_50 = *uStack_50 + -1;
        if (*uStack_50 != 0) {
          return param_2;
        }
        (**(code **)(*DAT_146b62f28 + 0x60))();
        return param_2;
      }
      if (uVar2 == 10) {
        piVar1 = (int *)(CONCAT44(uStack_44,local_48) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) {
          return param_2;
        }
        FUN_14335f920();
        return param_2;
      }
      if ((uVar2 == 0xb) || (uVar2 == 0xc)) {
        uVar6 = CONCAT44(uStack_44,local_48);
      }
      else {
        uVar6 = uStack_40;
        if (1 < uVar2 - 0xd) {
          return param_2;
        }
      }
      if ((uVar6 & 1) != 0) {
        return param_2;
      }
      if (uVar6 == 0) {
        return param_2;
      }
      if ((*(uint *)(uVar6 + 8) & 0x3fffff) == 0) {
        return param_2;
      }
      *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) - 1;
      FUN_1434ef880();
      return param_2;
    }
    if (9 < uVar2) {
      if (((uint)local_58 >> 9 & 1) == 0) {
        if (uVar2 == 10) {
          piVar1 = (int *)(CONCAT44(uStack_44,local_48) + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else {
          if ((uVar2 == 0xb) || (uVar2 == 0xc)) {
            uVar6 = CONCAT44(uStack_44,local_48);
          }
          else {
            uVar6 = uStack_40;
            if (1 < uVar2 - 0xd) goto LAB_1435ac398;
          }
          if ((((uVar6 & 1) == 0) && (uVar6 != 0)) && ((*(uint *)(uVar6 + 8) & 0x3fffff) != 0)) {
            *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) - 1;
            FUN_1434ef880();
            *param_2 = 1;
            return param_2;
          }
        }
      }
      else {
        *uStack_50 = *uStack_50 + -1;
        if (*uStack_50 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
          *param_2 = 1;
          return param_2;
        }
      }
    }
LAB_1435ac398:
    *param_2 = 1;
    break;
  case 0xd:
    uVar3 = *(undefined8 *)(*(longlong *)(param_4 + 0x28) + 0x98);
    uVar5 = FUN_1435c8e40(&local_58,0x435,uVar3);
    FUN_1435ccf60(uVar3,uVar5,&DAT_145b14e70);
    piVar1 = (int *)((longlong)uStack_50 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  default:
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 1435ac440 FUN_1435ac440 body=1566 status=ok
// SIG undefined FUN_1435ac440(void)

undefined1 *
FUN_1435ac440(int *param_1,undefined1 *param_2,longlong param_3,uint *param_4,undefined4 *param_5,
             ulonglong *param_6,int param_7)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  longlong lVar7;
  bool bVar8;
  undefined4 local_res8 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  uint uStack_34;
  ulonglong uStack_30;
  
  uVar2 = param_1[1];
  local_38 = uVar2;
  switch((*param_1 << 0x15) >> 0x1b) {
  case 1:
    FUN_1435901e0(param_4,(ulonglong)uVar2 * 0x20 + *(longlong *)(*(longlong *)(param_5 + 4) + 0xb0)
                 );
    *param_2 = 1;
    break;
  case 2:
    FUN_1435901e0(param_4,(ulonglong)uVar2 + *(longlong *)(param_5 + 4));
    *param_2 = 1;
    break;
  case 3:
    FUN_143610910((ulonglong)uVar2 + *(longlong *)(param_5 + 4),param_4);
    *param_2 = 1;
    break;
  case 4:
    if ((longlong *)((ulonglong)uVar2 + *(longlong *)(param_5 + 4)) != (longlong *)0x0) {
      lVar7 = *(longlong *)((ulonglong)uVar2 + *(longlong *)(param_5 + 4));
      if ((lVar7 != 0) &&
         (((*(byte *)(*(longlong *)(lVar7 + 0x28) + 0x88) >> 5 & 1) != 0 || (lVar7 != 0)))) {
        *(uint *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1U & 0x8fffffff;
      }
      *param_4 = *param_4 & 0xffffffec;
      *param_4 = *param_4 | 0xc;
      *param_2 = 1;
      *(longlong *)(param_4 + 4) = lVar7;
      *(int **)(param_4 + 6) = uStack_40;
      return param_2;
    }
    goto LAB_1435aca0b;
  case 5:
    *param_2 = 1;
    local_48 = CONCAT71(local_48._1_7_,
                        *(undefined1 *)((ulonglong)uVar2 + *(longlong *)(param_5 + 4)));
    *param_4 = *param_4 & 0xffffffe1 | 1;
    *(longlong *)(param_4 + 4) = local_48;
    *(int **)(param_4 + 6) = uStack_40;
    break;
  case 6:
    lVar7 = *(longlong *)(param_5 + 4);
    uVar4 = *param_4 & 0xffffffe2 | 2;
    goto LAB_1435ac582;
  case 7:
    lVar7 = *(longlong *)(param_5 + 4);
    uVar4 = *param_4 & 0xffffffe3 | 3;
LAB_1435ac582:
    *param_2 = 1;
    local_48 = CONCAT44(local_48._4_4_,*(undefined4 *)((ulonglong)uVar2 + lVar7));
    *param_4 = uVar4;
    *(longlong *)(param_4 + 4) = local_48;
    *(int **)(param_4 + 6) = uStack_40;
    break;
  case 8:
    *param_2 = 1;
    uVar3 = *(undefined8 *)((ulonglong)uVar2 + *(longlong *)(param_5 + 4));
    *param_4 = *param_4 & 0xffffffe4 | 4;
    *(undefined8 *)(param_4 + 4) = uVar3;
    *(int **)(param_4 + 6) = uStack_40;
    break;
  case 9:
    lVar7 = *(longlong *)((ulonglong)uVar2 + *(longlong *)(param_5 + 4));
    if (lVar7 == 0) {
      *param_4 = *param_4 & 0xffffffec;
      *param_4 = *param_4 | 0xc;
      *param_2 = 1;
      param_4[4] = 0;
      param_4[5] = 0;
      *(int **)(param_4 + 6) = uStack_40;
    }
    else {
      *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
      *param_4 = *param_4 & 0xffffffea;
      *param_4 = *param_4 | 10;
      *param_2 = 1;
      *(longlong *)(param_4 + 4) = lVar7;
      *(int **)(param_4 + 6) = uStack_40;
    }
    break;
  case 10:
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (*(char *)(*(longlong *)((ulonglong)uVar2 + *(longlong *)(param_5 + 4)) + lVar7) != '\0'
            );
    lVar7 = FUN_143360950(*(undefined8 *)(*(longlong *)(param_3 + 0x10) + 0x218),
                          *(longlong *)((ulonglong)uVar2 + *(longlong *)(param_5 + 4)),lVar7,0);
    local_48._0_4_ = (uint)lVar7;
    local_48._4_4_ = (uint)((ulonglong)lVar7 >> 0x20);
    *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 2;
    *param_4 = *param_4 & 0xffffffea;
    *param_4 = *param_4 | 10;
    param_4[4] = (uint)local_48;
    param_4[5] = local_48._4_4_;
    param_4[6] = (uint)uStack_40;
    param_4[7] = uStack_40._4_4_;
    piVar1 = (int *)(lVar7 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      local_48 = lVar7;
      FUN_14335f920(lVar7);
      *param_2 = 1;
      return param_2;
    }
    goto LAB_1435aca0b;
  case 0xb:
    bVar8 = param_6 != (ulonglong *)0x0;
    if (!bVar8) {
      uVar3 = FUN_1435caba0(param_3,param_5);
      param_6 = (ulonglong *)FUN_1434ef190(uVar3);
    }
    if ((((byte)*param_5 & 0x1f) == 0xc) && (param_7 == 0)) {
      FUN_1435d7c40(param_6,param_4,(longlong)(int)uVar2,*(undefined8 *)(param_5 + 4),bVar8);
      *param_2 = 1;
      return param_2;
    }
    puVar6 = (uint *)((ulonglong)uVar2 * 0x20 + param_6[1]);
    uVar2 = *puVar6;
    uVar4 = uVar2 & 0x1f;
    if (uVar4 == 6) {
      uStack_30 = *param_6;
      uStack_40 = (int *)0x0;
      local_48 = CONCAT44(local_48._4_4_,7);
    }
    else {
      uStack_40 = *(int **)(puVar6 + 2);
      local_48 = CONCAT44(local_48._4_4_,uVar2);
      local_38 = puVar6[4];
      uStack_34 = puVar6[5];
      uStack_30 = *(ulonglong *)(puVar6 + 6);
      if (9 < uVar4) {
        if ((uVar2 >> 9 & 1) == 0) {
          if (uVar4 == 10) {
            *(int *)(*(longlong *)(puVar6 + 4) + 0x18) =
                 *(int *)(*(longlong *)(puVar6 + 4) + 0x18) + 1;
          }
          else if (10 < uVar4) {
            if (uVar4 < 0xd) {
              lVar7 = *(longlong *)(puVar6 + 4);
            }
            else {
              if (0xe < uVar4) goto LAB_1435ac77e;
              lVar7 = *(longlong *)(puVar6 + 6);
            }
            if (lVar7 != 0) {
              *(uint *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1U & 0x8fffffff;
            }
          }
        }
        else {
          *uStack_40 = *uStack_40 + 1;
        }
      }
    }
LAB_1435ac77e:
    FUN_1435901e0(param_4,&local_48);
    uVar2 = (uint)local_48 & 0x1f;
    if (9 < uVar2) {
      if (((uint)local_48 >> 9 & 1) == 0) {
        if (uVar2 == 10) {
LAB_1435ac9fc:
          piVar1 = (int *)(CONCAT44(uStack_34,local_38) + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else if ((uVar2 == 0xb) || (uVar2 == 0xc)) {
          if ((local_38 & 1) == 0) {
            uVar5 = CONCAT44(uStack_34,local_38);
            goto LAB_1435ac9de;
          }
        }
        else {
          uVar5 = uStack_30;
          if (uVar2 - 0xd < 2) goto joined_r0x0001435ac9dc;
        }
      }
      else {
LAB_1435ac997:
        *uStack_40 = *uStack_40 + -1;
        if (*uStack_40 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
          *param_2 = 1;
          return param_2;
        }
      }
    }
    goto LAB_1435aca0b;
  case 0xc:
  case 0xe:
    if (param_6 == (ulonglong *)0x0) {
      uVar3 = FUN_1435caba0(param_3,param_5);
      param_6 = (ulonglong *)FUN_1434ef190(uVar3);
    }
    puVar6 = (uint *)((ulonglong)uVar2 * 0x20 + param_6[1]);
    if (((byte)*puVar6 & 0x1f) == 6) {
      uStack_30 = *param_6;
      local_48 = CONCAT44(local_48._4_4_,7);
      uStack_40 = (int *)0x0;
    }
    else {
      local_48 = CONCAT44(local_48._4_4_,*puVar6);
      uStack_40 = *(int **)(puVar6 + 2);
      local_38 = puVar6[4];
      uStack_34 = puVar6[5];
      uStack_30 = *(ulonglong *)(puVar6 + 6);
      uVar2 = *puVar6 & 0x1f;
      if (9 < uVar2) {
        if ((*puVar6 >> 9 & 1) == 0) {
          if (uVar2 == 10) {
            *(int *)(*(longlong *)(puVar6 + 4) + 0x18) =
                 *(int *)(*(longlong *)(puVar6 + 4) + 0x18) + 1;
          }
          else if (10 < uVar2) {
            if (uVar2 < 0xd) {
              lVar7 = *(longlong *)(puVar6 + 4);
            }
            else {
              if (0xe < uVar2) goto LAB_1435ac8a4;
              lVar7 = *(longlong *)(puVar6 + 6);
            }
            if (lVar7 != 0) {
              *(uint *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1U & 0x8fffffff;
            }
          }
        }
        else {
          **(int **)(puVar6 + 2) = **(int **)(puVar6 + 2) + 1;
        }
      }
    }
LAB_1435ac8a4:
    local_res8[0] = 0;
    FUN_1435ce880(param_3,&local_48,param_5,param_4,local_res8,0,0,1);
    uVar2 = (uint)local_48 & 0x1f;
    if (*(char *)(param_3 + 0xb8) != '\0') {
      *param_2 = 0;
      if (uVar2 < 10) {
        return param_2;
      }
      if (((uint)local_48 >> 9 & 1) != 0) {
        *uStack_40 = *uStack_40 + -1;
        if (*uStack_40 != 0) {
          return param_2;
        }
        (**(code **)(*DAT_146b62f28 + 0x60))();
        return param_2;
      }
      if (uVar2 == 10) {
        piVar1 = (int *)(CONCAT44(uStack_34,local_38) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) {
          return param_2;
        }
        FUN_14335f920();
        return param_2;
      }
      if ((uVar2 == 0xb) || (uVar2 == 0xc)) {
        uVar5 = CONCAT44(uStack_34,local_38);
      }
      else {
        uVar5 = uStack_30;
        if (1 < uVar2 - 0xd) {
          return param_2;
        }
      }
      if ((uVar5 & 1) != 0) {
        return param_2;
      }
      if (uVar5 == 0) {
        return param_2;
      }
      if ((*(uint *)(uVar5 + 8) & 0x3fffff) == 0) {
        return param_2;
      }
      *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
      FUN_1434ef880();
      return param_2;
    }
    if (9 < uVar2) {
      if (((uint)local_48 >> 9 & 1) != 0) goto LAB_1435ac997;
      if (uVar2 == 10) goto LAB_1435ac9fc;
      if ((uVar2 == 0xb) || (uVar2 == 0xc)) {
        uVar5 = CONCAT44(uStack_34,local_38);
      }
      else {
        uVar5 = uStack_30;
        if (1 < uVar2 - 0xd) goto LAB_1435aca0b;
      }
joined_r0x0001435ac9dc:
      if ((uVar5 & 1) == 0) {
LAB_1435ac9de:
        if ((uVar5 != 0) && ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
          FUN_1434ef880();
          *param_2 = 1;
          return param_2;
        }
      }
    }
LAB_1435aca0b:
    *param_2 = 1;
    break;
  case 0xd:
    uVar3 = FUN_1435c8e40(&local_48,0x435);
    FUN_1435ccf60(param_3,uVar3,&DAT_145b14e70);
    piVar1 = (int *)((longlong)uStack_40 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  default:
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 1435acaa0 FUN_1435acaa0 body=2346 status=ok
// SIG undefined FUN_1435acaa0(void)

/* WARNING: Type propagation algorithm not settling */

undefined1 *
FUN_1435acaa0(uint *param_1,undefined1 *param_2,longlong param_3,uint *param_4,ulonglong param_5)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  undefined4 local_res8 [2];
  uint local_a8 [2];
  int *local_a0;
  ulonglong uStack_98;
  ulonglong local_90;
  uint local_88;
  uint uStack_84;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  uint local_68 [2];
  int *local_60;
  ulonglong uStack_58;
  ulonglong local_50;
  uint local_48 [2];
  int *local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  uVar4 = *param_1;
  if ((((uVar4 & 3) != 0) && (*(int *)(param_3 + 0x40) < 1)) &&
     (*(int *)(*(longlong *)(param_5 + 0x28) + 0x90) != 0x14)) {
    uVar5 = FUN_1435c8e40(local_a8,0x432);
    FUN_1435ccf60(param_3,uVar5,&DAT_145b14e70);
    local_a0 = local_a0 + 6;
    *local_a0 = *local_a0 + -1;
    if (*local_a0 == 0) {
      FUN_14335f920();
    }
    *param_2 = 0;
    return param_2;
  }
  uVar11 = 0;
  local_88 = 0;
  uStack_80 = (int *)0x0;
  lVar6 = FUN_1435caba0(param_3,param_4);
  if (((*(byte *)(lVar6 + 0x88) >> 5 & 1) == 0) &&
     ((int)((uVar4 & 0xffffffc0) * 0x200000) < 0x50000001)) {
    plVar7 = (longlong *)FUN_1435adda0(param_1,param_3);
    if (plVar7 == (longlong *)0x0) {
      uVar5 = FUN_1435c8e40(local_a8,0x3f6,param_3);
      FUN_1435ccf60(param_3,uVar5,&DAT_145b15be8);
      piVar1 = local_a0 + 6;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *param_2 = 0;
    }
    else {
      cVar3 = (**(code **)(*plVar7 + 0x58))(plVar7,param_4,&local_88);
      if (cVar3 != '\0') goto LAB_1435acd22;
      uVar5 = FUN_1435c8e40(local_a8,0x40a,param_3);
      FUN_1435ccf60(param_3,uVar5,&DAT_145b155b0);
      piVar1 = local_a0 + 6;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *param_2 = 0;
    }
joined_r0x0001435acbbf:
    uVar2 = local_88 & 0x1f;
    if ((uint)uVar2 < 10) {
      return param_2;
    }
    if ((local_88 >> 9 & 1) == 0) {
      if (uVar2 == 10) {
        piVar1 = (int *)(local_78 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) {
          return param_2;
        }
        FUN_14335f920();
        return param_2;
      }
      uVar11 = local_78;
      if (((uVar2 != 0xb) && (uVar2 != 0xc)) && (uVar11 = uStack_70, 1 < uVar2 - 0xd)) {
        return param_2;
      }
      if ((uVar11 & 1) != 0) {
        return param_2;
      }
      if (uVar11 == 0) {
        return param_2;
      }
      if ((*(uint *)(uVar11 + 8) & 0x3fffff) == 0) {
        return param_2;
      }
      *(uint *)(uVar11 + 8) = *(uint *)(uVar11 + 8) - 1;
      FUN_1434ef880();
      return param_2;
    }
    goto LAB_1435ad381;
  }
  if (param_4 != &local_88) {
    uVar4 = *param_4 & 0x1f;
    if (9 < uVar4) {
      if ((*param_4 >> 9 & 1) == 0) {
        if (uVar4 == 10) {
          *(int *)(*(longlong *)(param_4 + 4) + 0x18) =
               *(int *)(*(longlong *)(param_4 + 4) + 0x18) + 1;
        }
        else if (10 < uVar4) {
          if (uVar4 < 0xd) {
            lVar6 = *(longlong *)(param_4 + 4);
          }
          else {
            if (0xe < uVar4) goto LAB_1435acd0a;
            lVar6 = *(longlong *)(param_4 + 6);
          }
          if (lVar6 != 0) {
            *(uint *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1U & 0x8fffffff;
          }
        }
      }
      else {
        **(int **)(param_4 + 2) = **(int **)(param_4 + 2) + 1;
      }
    }
LAB_1435acd0a:
    FUN_143603d30(&local_88);
    local_88 = *param_4;
    uStack_84 = param_4[1];
    uStack_80 = *(int **)(param_4 + 2);
    local_78 = *(ulonglong *)(param_4 + 4);
    uStack_70 = *(ulonglong *)(param_4 + 6);
  }
LAB_1435acd22:
  uVar4 = param_1[1];
  uVar9 = (ulonglong)uVar4;
  switch((int)(*param_1 << 0x15) >> 0x1b) {
  case 1:
    puVar12 = (uint *)(uVar9 * 0x20 + *(longlong *)(param_5 + 0xb0));
    if (&local_88 == puVar12) goto LAB_1435ad324;
    if (9 < (local_88 & 0x1f)) {
      if ((local_88 >> 9 & 1) == 0) {
LAB_1435acd89:
        uVar4 = local_88 & 0x1f;
        if (uVar4 == 10) {
          *(int *)(local_78 + 0x18) = *(int *)(local_78 + 0x18) + 1;
        }
        else if ((10 < uVar4) &&
                (((uVar11 = local_78, uVar4 < 0xd || (uVar11 = uStack_70, uVar4 < 0xf)) &&
                 (uVar11 != 0)))) {
          *(int *)(uVar11 + 8) = *(int *)(uVar11 + 8) + 1;
          *(uint *)(uVar11 + 8) = *(uint *)(uVar11 + 8) & 0x8fffffff;
        }
      }
      else {
        *uStack_80 = *uStack_80 + 1;
      }
    }
LAB_1435acdbc:
    FUN_143603d30(puVar12);
    *param_2 = 1;
    *puVar12 = local_88;
    puVar12[1] = uStack_84;
    puVar12[2] = (uint)uStack_80;
    puVar12[3] = uStack_80._4_4_;
    *(ulonglong *)(puVar12 + 4) = local_78;
    *(ulonglong *)(puVar12 + 6) = uStack_70;
    break;
  case 2:
    puVar12 = (uint *)(uVar9 + param_5);
    if (&local_88 != puVar12) {
      if (9 < (local_88 & 0x1f)) {
        if ((local_88 >> 9 & 1) == 0) goto LAB_1435acd89;
        *uStack_80 = *uStack_80 + 1;
      }
      goto LAB_1435acdbc;
    }
    goto LAB_1435ad324;
  case 3:
    puVar8 = (ulonglong *)(uVar9 + param_5);
    if (((local_88 & 0x1f) - 0xb < 2) && (local_78 != 0)) {
      if ((local_88 & 0x1f) == 0xb) {
        uVar11 = 2;
      }
      uVar11 = uVar11 | local_78;
    }
    if (uVar11 == *puVar8) goto LAB_1435ad324;
    uVar9 = uVar11 & 0xfffffffffffffffc;
    if (uVar9 != 0) {
      *(uint *)(uVar9 + 8) = *(int *)(uVar9 + 8) + 1U & 0x8fffffff;
    }
    uVar9 = *puVar8;
    if (uVar9 != 0) {
      uVar10 = uVar9 & 0xfffffffffffffffd;
      if ((uVar9 & 1) != 0) {
        uVar9 = *puVar8;
        *param_2 = 1;
        *puVar8 = ((ulonglong)((uint)uVar9 & 2) - 1) + uVar10;
        *puVar8 = uVar11;
        break;
      }
      if ((*(uint *)(uVar10 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar10 + 8) = *(uint *)(uVar10 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *puVar8 = uVar11;
    *param_2 = 1;
    break;
  case 4:
    FUN_1434f0700(param_5 + uVar9,local_78);
    *param_2 = 1;
    break;
  case 5:
    *(undefined1 *)(uVar9 + param_5) = (undefined1)local_78;
    *param_2 = 1;
    break;
  case 6:
  case 7:
    *(undefined4 *)(uVar9 + param_5) = (undefined4)local_78;
    *param_2 = 1;
    break;
  case 8:
    *(ulonglong *)(uVar9 + param_5) = local_78;
    *param_2 = 1;
    break;
  case 9:
    FUN_143614360(param_5,uVar9,local_78);
    *param_2 = 1;
    break;
  case 10:
  case 0xc:
    uVar5 = FUN_1435c8e40(local_a8,0x432,param_3);
    FUN_1435ccf60(param_3,uVar5,&DAT_145b14e70);
    piVar1 = local_a0 + 6;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) goto LAB_1435ad324;
    FUN_14335f920();
    *param_2 = 1;
    break;
  case 0xb:
    uVar5 = FUN_1435c8e40(local_a8,0x40d,param_3);
    FUN_1435ccf60(param_3,uVar5,&DAT_145b14e70);
    local_a0 = local_a0 + 6;
    *local_a0 = *local_a0 + -1;
    if (*local_a0 == 0) {
      FUN_14335f920();
    }
    *param_2 = 0;
    FUN_1434e64f0(&local_88);
    return param_2;
  case 0xd:
  case 0xe:
    puVar8 = (ulonglong *)FUN_1434ef190(*(undefined8 *)(param_5 + 0x28));
    uVar4 = uVar4 + 1;
    puVar12 = (uint *)((ulonglong)uVar4 * 0x20 + puVar8[1]);
    local_68[0] = *puVar12;
    if (((byte)local_68[0] & 0x1f) == 6) {
      local_50 = *puVar8;
      local_68[0] = 7;
      local_60 = (int *)0x0;
      uStack_58 = CONCAT44(uStack_58._4_4_,uVar4);
    }
    else {
      local_60 = *(int **)(puVar12 + 2);
      uStack_58 = *(ulonglong *)(puVar12 + 4);
      local_50 = *(ulonglong *)(puVar12 + 6);
      uVar4 = *puVar12 & 0x1f;
      if (9 < uVar4) {
        if ((*puVar12 >> 9 & 1) == 0) {
          if (uVar4 == 10) {
            *(int *)(*(longlong *)(puVar12 + 4) + 0x18) =
                 *(int *)(*(longlong *)(puVar12 + 4) + 0x18) + 1;
          }
          else if (10 < uVar4) {
            if (uVar4 < 0xd) {
              lVar6 = *(longlong *)(puVar12 + 4);
            }
            else {
              if (0xe < uVar4) goto LAB_1435acfe2;
              lVar6 = *(longlong *)(puVar12 + 6);
            }
            if (lVar6 != 0) {
              *(uint *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1U & 0x8fffffff;
            }
          }
        }
        else {
          **(int **)(puVar12 + 2) = **(int **)(puVar12 + 2) + 1;
        }
      }
    }
LAB_1435acfe2:
    uVar5 = FUN_143590540();
    FUN_14360ab50(local_a8,uVar5);
    *(uint *)(param_5 + 8) = *(int *)(param_5 + 8) + 1U & 0x8fffffff;
    local_48[0] = 0xc;
    local_40 = (int *)0x0;
    local_38 = param_5;
    local_res8[0] = 1;
    FUN_1435ce880(param_3,local_68,local_48,local_a8,local_res8,&local_88,0,1);
    uVar4 = local_48[0] & 0x1f;
    if (9 < uVar4) {
      if ((local_48[0] >> 9 & 1) == 0) {
        if (uVar4 == 10) {
          piVar1 = (int *)(local_38 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else {
          uVar11 = local_38;
          if ((((uVar4 == 0xb) || (uVar4 == 0xc)) || (uVar11 = local_30, uVar4 - 0xd < 2)) &&
             ((((uVar11 & 1) == 0 && (uVar11 != 0)) && ((*(uint *)(uVar11 + 8) & 0x3fffff) != 0))))
          {
            *(uint *)(uVar11 + 8) = *(uint *)(uVar11 + 8) - 1;
            FUN_1434ef880();
          }
        }
      }
      else {
        *local_40 = *local_40 + -1;
        if (*local_40 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
      }
    }
    uVar4 = local_a8[0] & 0x1f;
    if (*(char *)(param_3 + 0xb8) != '\0') {
      *param_2 = 0;
      if (9 < uVar4) {
        if ((local_a8[0] >> 9 & 1) == 0) {
          if (uVar4 == 10) {
            piVar1 = (int *)(uStack_98 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          else if ((uVar4 == 0xb) || (uVar4 == 0xc)) {
            uVar11 = uStack_98;
            if ((uStack_98 & 1) == 0) {
LAB_1435ad155:
              if ((uVar11 != 0) && ((*(uint *)(uVar11 + 8) & 0x3fffff) != 0)) {
                *(uint *)(uVar11 + 8) = *(uint *)(uVar11 + 8) - 1;
                FUN_1434ef880();
              }
            }
            else {
              uStack_98 = uStack_98 - 1;
            }
          }
          else if (uVar4 - 0xd < 2) {
            uVar11 = local_90;
            if ((local_90 & 1) == 0) goto LAB_1435ad155;
            local_90 = local_90 - 1;
          }
        }
        else {
          *local_a0 = *local_a0 + -1;
          if (*local_a0 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          local_a8[0] = local_a8[0] & 0xfffffde0;
          local_a0 = (int *)0x0;
          uStack_98 = 0;
          local_90 = 0;
        }
      }
      uVar4 = local_68[0] & 0x1f;
      if (9 < uVar4) {
        if ((local_68[0] >> 9 & 1) == 0) {
          if (uVar4 == 10) {
            piVar1 = (int *)(uStack_58 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          else if ((uVar4 == 0xb) || (uVar4 == 0xc)) {
            uVar11 = uStack_58;
            if ((uStack_58 & 1) == 0) {
LAB_1435ad1fe:
              if ((uVar11 != 0) && ((*(uint *)(uVar11 + 8) & 0x3fffff) != 0)) {
                *(uint *)(uVar11 + 8) = *(uint *)(uVar11 + 8) - 1;
                FUN_1434ef880();
              }
            }
            else {
              uStack_58 = uStack_58 - 1;
            }
          }
          else if (uVar4 - 0xd < 2) {
            uVar11 = local_50;
            if ((local_50 & 1) == 0) goto LAB_1435ad1fe;
            local_50 = local_50 - 1;
          }
        }
        else {
          *local_60 = *local_60 + -1;
          if (*local_60 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          local_68[0] = local_68[0] & 0xfffffde0;
          local_60 = (int *)0x0;
          uStack_58 = 0;
          local_50 = 0;
        }
      }
      goto joined_r0x0001435acbbf;
    }
    if (9 < uVar4) {
      if ((local_a8[0] >> 9 & 1) == 0) {
        if (uVar4 == 10) {
          piVar1 = (int *)(uStack_98 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else if ((uVar4 == 0xb) || (uVar4 == 0xc)) {
          uVar11 = uStack_98;
          if ((uStack_98 & 1) == 0) {
LAB_1435ad2c1:
            if ((uVar11 != 0) && ((*(uint *)(uVar11 + 8) & 0x3fffff) != 0)) {
              *(uint *)(uVar11 + 8) = *(uint *)(uVar11 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            uStack_98 = uStack_98 - 1;
          }
        }
        else if (uVar4 - 0xd < 2) {
          uVar11 = local_90;
          if ((local_90 & 1) == 0) goto LAB_1435ad2c1;
          local_90 = local_90 - 1;
        }
      }
      else {
        *local_a0 = *local_a0 + -1;
        if (*local_a0 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        local_a8[0] = local_a8[0] & 0xfffffde0;
        local_a0 = (int *)0x0;
        uStack_98 = 0;
        local_90 = 0;
      }
    }
    if (9 < ((byte)local_68[0] & 0x1f)) {
      if ((local_68[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_68);
      }
      else {
        *local_60 = *local_60 + -1;
        if (*local_60 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
          *param_2 = 1;
          break;
        }
      }
    }
LAB_1435ad324:
    *param_2 = 1;
    break;
  default:
    *param_2 = 0;
  }
  if (9 < ((byte)local_88 & 0x1f)) {
    if ((local_88 >> 9 & 1) == 0) {
      FUN_1435920c0(&local_88);
    }
    else {
LAB_1435ad381:
      *uStack_80 = *uStack_80 + -1;
      if (*uStack_80 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
  }
  return param_2;
}



// FUNCTION 1435ad410 FUN_1435ad410 body=2369 status=ok
// SIG undefined FUN_1435ad410(void)

/* WARNING: Type propagation algorithm not settling */

undefined1 *
FUN_1435ad410(uint *param_1,undefined1 *param_2,longlong param_3,uint *param_4,uint *param_5,
             ulonglong *param_6)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int *piVar9;
  ulonglong *puVar10;
  undefined *puVar11;
  uint *puVar12;
  int *piVar13;
  uint *local_res8;
  uint local_88 [2];
  int *local_80;
  ulonglong uStack_78;
  ulonglong local_70;
  uint local_68;
  uint uStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48 [2];
  int *local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  uVar2 = *param_1;
  local_res8 = param_1;
  if (((uVar2 & 3) != 0) && (*(int *)(param_3 + 0x40) < 1)) {
    uVar3 = FUN_1435c8e40(local_88,0x432);
    FUN_1435ccf60(param_3,uVar3,&DAT_145b14e70);
    local_80 = local_80 + 6;
    *local_80 = *local_80 + -1;
    if (*local_80 == 0) {
      FUN_14335f920();
    }
    *param_2 = 0;
    return param_2;
  }
  piVar13 = (int *)0x0;
  uStack_60 = (int *)0x0;
  local_68 = 0;
  lVar4 = FUN_1435caba0(param_3,param_4);
  puVar12 = local_res8;
  if (((*(byte *)(lVar4 + 0x88) >> 5 & 1) == 0) &&
     ((int)((uVar2 & 0xffffffc0) * 0x200000) < 0x50000001)) {
    plVar5 = (longlong *)FUN_1435adda0(local_res8,param_3);
    if (plVar5 == (longlong *)0x0) {
      uVar3 = FUN_1435c8e40(local_88,0x3f6,param_3);
      puVar11 = &DAT_145b15be8;
    }
    else {
      cVar1 = (**(code **)(*plVar5 + 0x58))(plVar5,param_4,&local_68);
      piVar9 = uStack_60;
      uVar2 = local_68;
      if (cVar1 != '\0') goto LAB_1435ad689;
      uVar3 = FUN_1435c8e40(local_88,0x40a,param_3);
      puVar11 = &DAT_145b155b0;
    }
    FUN_1435ccf60(param_3,uVar3,puVar11);
    piVar13 = local_80 + 6;
    *piVar13 = *piVar13 + -1;
    if (*piVar13 == 0) {
      FUN_14335f920();
    }
    *param_2 = 0;
    goto LAB_1435ad527;
  }
  piVar9 = piVar13;
  uVar2 = 0;
  if (param_4 != &local_68) {
    uVar2 = *param_4 & 0x1f;
    if (9 < uVar2) {
      if ((*param_4 >> 9 & 1) == 0) {
        if (uVar2 == 10) {
          *(int *)(*(longlong *)(param_4 + 4) + 0x18) =
               *(int *)(*(longlong *)(param_4 + 4) + 0x18) + 1;
        }
        else if (10 < uVar2) {
          if (uVar2 < 0xd) {
            lVar4 = *(longlong *)(param_4 + 4);
          }
          else {
            if (0xe < uVar2) goto LAB_1435ad666;
            lVar4 = *(longlong *)(param_4 + 6);
          }
          if (lVar4 != 0) {
            *(uint *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1U & 0x8fffffff;
          }
        }
      }
      else {
        **(int **)(param_4 + 2) = **(int **)(param_4 + 2) + 1;
      }
    }
LAB_1435ad666:
    FUN_143603d30(&local_68);
    local_68 = *param_4;
    uStack_64 = param_4[1];
    uStack_60 = *(int **)(param_4 + 2);
    local_58 = *(ulonglong *)(param_4 + 4);
    uStack_50 = *(ulonglong *)(param_4 + 6);
    piVar9 = uStack_60;
    puVar12 = local_res8;
    uVar2 = local_68;
  }
LAB_1435ad689:
  uVar6 = puVar12[1];
  uVar7 = (ulonglong)uVar6;
  switch((int)(*puVar12 << 0x15) >> 0x1b) {
  case 1:
    puVar12 = (uint *)(uVar7 * 0x20 + *(longlong *)(*(longlong *)(param_5 + 4) + 0xb0));
    if (&local_68 != puVar12) {
joined_r0x0001435ad758:
      if (9 < (uVar2 & 0x1f)) {
        if ((uVar2 >> 9 & 1) == 0) {
          uVar2 = uVar2 & 0x1f;
          if (uVar2 == 10) {
            *(int *)(local_58 + 0x18) = *(int *)(local_58 + 0x18) + 1;
          }
          else if (((10 < uVar2) &&
                   ((uVar7 = local_58, uVar2 < 0xd || (uVar7 = uStack_50, uVar2 < 0xf)))) &&
                  (uVar7 != 0)) {
            *(int *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1;
            *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) & 0x8fffffff;
          }
        }
        else {
          *piVar9 = *piVar9 + 1;
        }
      }
      FUN_143603d30(puVar12);
      *param_2 = 1;
      *puVar12 = local_68;
      puVar12[1] = uStack_64;
      puVar12[2] = (uint)uStack_60;
      puVar12[3] = uStack_60._4_4_;
      puVar12[4] = (uint)local_58;
      puVar12[5] = local_58._4_4_;
      puVar12[6] = (uint)uStack_50;
      puVar12[7] = uStack_50._4_4_;
      FUN_1434e64f0(&local_68);
      return param_2;
    }
    goto LAB_1435adc85;
  case 2:
    puVar12 = (uint *)(uVar7 + *(longlong *)(param_5 + 4));
    if (&local_68 != puVar12) goto joined_r0x0001435ad758;
    goto LAB_1435adc85;
  case 3:
    puVar10 = (ulonglong *)(uVar7 + *(longlong *)(param_5 + 4));
    if (((uVar2 & 0x1f) - 0xb < 2) && (local_58 != 0)) {
      if ((uVar2 & 0x1f) == 0xb) {
        piVar13 = (int *)0x2;
      }
      piVar13 = (int *)((ulonglong)piVar13 | local_58);
    }
    if (piVar13 != (int *)*puVar10) {
      uVar7 = (ulonglong)piVar13 & 0xfffffffffffffffc;
      if (uVar7 != 0) {
        *(uint *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1U & 0x8fffffff;
      }
      uVar7 = *puVar10;
      if (uVar7 != 0) {
        uVar8 = uVar7 & 0xfffffffffffffffd;
        if ((uVar7 & 1) != 0) {
          uVar7 = *puVar10;
          *param_2 = 1;
          *puVar10 = ((ulonglong)((uint)uVar7 & 2) - 1) + uVar8;
          *puVar10 = (ulonglong)piVar13;
          FUN_1434e64f0(&local_68);
          return param_2;
        }
        if ((*(uint *)(uVar8 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar8 + 8) = *(uint *)(uVar8 + 8) - 1;
          FUN_1434ef880();
        }
      }
      *puVar10 = (ulonglong)piVar13;
      *param_2 = 1;
      FUN_1434e64f0(&local_68);
      return param_2;
    }
    goto LAB_1435adc85;
  case 4:
    FUN_1434f0700(uVar7 + *(longlong *)(param_5 + 4),local_58);
    *param_2 = 1;
    FUN_1434e64f0(&local_68);
    break;
  case 5:
    *param_2 = 1;
    *(undefined1 *)(uVar7 + *(longlong *)(param_5 + 4)) = (undefined1)local_58;
    FUN_1434e64f0(&local_68);
    break;
  case 6:
  case 7:
    *param_2 = 1;
    *(uint *)(uVar7 + *(longlong *)(param_5 + 4)) = (uint)local_58;
    FUN_1434e64f0(&local_68);
    break;
  case 8:
    *param_2 = 1;
    *(ulonglong *)(uVar7 + *(longlong *)(param_5 + 4)) = local_58;
    FUN_1434e64f0(&local_68);
    break;
  case 9:
    FUN_143614360(*(undefined8 *)(param_5 + 4),uVar7,local_58);
    *param_2 = 1;
    FUN_1434e64f0(&local_68);
    break;
  case 10:
  case 0xc:
    uVar3 = FUN_1435c8e40(local_88,0x432,param_3);
    FUN_1435ccf60(param_3,uVar3,&DAT_145b14e70);
    piVar13 = local_80 + 6;
    *piVar13 = *piVar13 + -1;
    if (*piVar13 == 0) {
      FUN_14335f920();
    }
    *param_2 = 0;
    goto LAB_1435ad527;
  case 0xb:
    if (((*param_5 & 0x1f) < 5) || (uVar3 = 0x40d, (*param_5 & 0x1f) == 10)) {
      uVar3 = 0x420;
    }
    uVar3 = FUN_1435c8e40(local_88,uVar3,param_3);
    FUN_1435ccf60(param_3,uVar3,&DAT_145b14e70);
    local_80 = local_80 + 6;
    *local_80 = *local_80 + -1;
    if (*local_80 == 0) {
      FUN_14335f920();
    }
    *param_2 = 0;
    FUN_1434e64f0(&local_68);
    break;
  case 0xd:
  case 0xe:
    if (param_6 == (ulonglong *)0x0) {
      uVar3 = FUN_1435caba0(param_3,param_5);
      param_6 = (ulonglong *)FUN_1434ef190(uVar3);
    }
    uVar6 = uVar6 + 1;
    puVar12 = (uint *)((ulonglong)uVar6 * 0x20 + param_6[1]);
    local_48[0] = *puVar12;
    if (((byte)local_48[0] & 0x1f) == 6) {
      local_30 = *param_6;
      local_48[0] = 7;
      local_40 = (int *)0x0;
      uStack_38 = CONCAT44(uStack_38._4_4_,uVar6);
    }
    else {
      local_40 = *(int **)(puVar12 + 2);
      uStack_38 = *(ulonglong *)(puVar12 + 4);
      local_30 = *(ulonglong *)(puVar12 + 6);
      uVar2 = *puVar12 & 0x1f;
      if (9 < uVar2) {
        if ((*puVar12 >> 9 & 1) == 0) {
          if (uVar2 == 10) {
            *(int *)(*(longlong *)(puVar12 + 4) + 0x18) =
                 *(int *)(*(longlong *)(puVar12 + 4) + 0x18) + 1;
          }
          else if (10 < uVar2) {
            if (uVar2 < 0xd) {
              lVar4 = *(longlong *)(puVar12 + 4);
            }
            else {
              if (0xe < uVar2) goto LAB_1435ad9d3;
              lVar4 = *(longlong *)(puVar12 + 6);
            }
            if (lVar4 != 0) {
              *(uint *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1U & 0x8fffffff;
            }
          }
        }
        else {
          **(int **)(puVar12 + 2) = **(int **)(puVar12 + 2) + 1;
        }
      }
    }
LAB_1435ad9d3:
    uVar3 = FUN_143590540();
    FUN_14360ab50(local_88,uVar3);
    local_res8 = (uint *)CONCAT44(local_res8._4_4_,1);
    FUN_1435ce880(param_3,local_48,param_5,local_88,&local_res8,&local_68,0,1);
    uVar2 = local_88[0] & 0x1f;
    if (*(char *)(param_3 + 0xb8) != '\0') {
      *param_2 = 0;
      if (9 < uVar2) {
        if ((local_88[0] >> 9 & 1) == 0) {
          if (uVar2 == 10) {
            piVar13 = (int *)(uStack_78 + 0x18);
            *piVar13 = *piVar13 + -1;
            if (*piVar13 == 0) {
              FUN_14335f920();
            }
          }
          else if ((uVar2 == 0xb) || (uVar2 == 0xc)) {
            uVar7 = uStack_78;
            if ((uStack_78 & 1) == 0) {
LAB_1435adaaa:
              if ((uVar7 != 0) && ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0)) {
                *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
                FUN_1434ef880();
              }
            }
            else {
              uStack_78 = uStack_78 - 1;
            }
          }
          else if (uVar2 - 0xd < 2) {
            uVar7 = local_70;
            if ((local_70 & 1) == 0) goto LAB_1435adaaa;
            local_70 = local_70 - 1;
          }
        }
        else {
          *local_80 = *local_80 + -1;
          if (*local_80 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          local_88[0] = local_88[0] & 0xfffffde0;
          local_80 = (int *)0x0;
          uStack_78 = 0;
          local_70 = 0;
        }
      }
      uVar2 = local_48[0] & 0x1f;
      if (9 < uVar2) {
        if ((local_48[0] >> 9 & 1) == 0) {
          if (uVar2 == 10) {
            piVar13 = (int *)(uStack_38 + 0x18);
            *piVar13 = *piVar13 + -1;
            if (*piVar13 == 0) {
              FUN_14335f920();
            }
          }
          else {
            if ((uVar2 == 0xb) || (uVar2 == 0xc)) {
              uVar7 = uStack_38;
              if ((uStack_38 & 1) != 0) {
                uStack_38 = uStack_38 - 1;
                goto LAB_1435ad527;
              }
            }
            else {
              if (1 < uVar2 - 0xd) goto LAB_1435ad527;
              uVar7 = local_30;
              if ((local_30 & 1) != 0) {
                local_30 = local_30 - 1;
                goto LAB_1435ad527;
              }
            }
            if ((uVar7 != 0) && ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0)) {
              *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
              FUN_1434ef880();
            }
          }
        }
        else {
          *local_40 = *local_40 + -1;
          if (*local_40 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          local_48[0] = local_48[0] & 0xfffffde0;
          local_40 = (int *)0x0;
          uStack_38 = 0;
          local_30 = 0;
        }
      }
LAB_1435ad527:
      uVar2 = local_68 & 0x1f;
      if (uVar2 < 10) {
        return param_2;
      }
      if ((local_68 >> 9 & 1) != 0) {
        *uStack_60 = *uStack_60 + -1;
        if (*uStack_60 != 0) {
          return param_2;
        }
        (**(code **)(*DAT_146b62f28 + 0x60))();
        return param_2;
      }
      if (uVar2 == 10) {
        piVar13 = (int *)(local_58 + 0x18);
        *piVar13 = *piVar13 + -1;
        if (*piVar13 != 0) {
          return param_2;
        }
        FUN_14335f920();
        return param_2;
      }
      uVar7 = local_58;
      if (((uVar2 != 0xb) && (uVar2 != 0xc)) && (uVar7 = uStack_50, 1 < uVar2 - 0xd)) {
        return param_2;
      }
      if ((uVar7 & 1) != 0) {
        return param_2;
      }
      if (uVar7 == 0) {
        return param_2;
      }
      if ((*(uint *)(uVar7 + 8) & 0x3fffff) == 0) {
        return param_2;
      }
      *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
      FUN_1434ef880();
      return param_2;
    }
    if (9 < uVar2) {
      if ((local_88[0] >> 9 & 1) == 0) {
        if (uVar2 == 10) {
          piVar13 = (int *)(uStack_78 + 0x18);
          *piVar13 = *piVar13 + -1;
          if (*piVar13 == 0) {
            FUN_14335f920();
          }
        }
        else if ((uVar2 == 0xb) || (uVar2 == 0xc)) {
          uVar7 = uStack_78;
          if ((uStack_78 & 1) == 0) {
LAB_1435adc15:
            if ((uVar7 != 0) && ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0)) {
              *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            uStack_78 = uStack_78 - 1;
          }
        }
        else if (uVar2 - 0xd < 2) {
          uVar7 = local_70;
          if ((local_70 & 1) == 0) goto LAB_1435adc15;
          local_70 = local_70 - 1;
        }
      }
      else {
        *local_80 = *local_80 + -1;
        if (*local_80 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        local_88[0] = local_88[0] & 0xfffffde0;
        local_80 = (int *)0x0;
        uStack_78 = 0;
        local_70 = 0;
      }
    }
    if (9 < ((byte)local_48[0] & 0x1f)) {
      if ((local_48[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_48);
      }
      else {
        *local_40 = *local_40 + -1;
        if (*local_40 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
          *param_2 = 1;
          FUN_1434e64f0(&local_68);
          return param_2;
        }
      }
    }
LAB_1435adc85:
    *param_2 = 1;
    FUN_1434e64f0(&local_68);
    break;
  default:
    *param_2 = 0;
    if (9 < ((byte)uVar2 & 0x1f)) {
      if ((uVar2 >> 9 & 1) == 0) {
        FUN_1435920c0(&local_68);
      }
      else {
        *piVar9 = *piVar9 + -1;
        if (*piVar9 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar9);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 1435adda0 FUN_1435adda0 body=410 status=ok
// SIG undefined FUN_1435adda0(void)

undefined8 FUN_1435adda0(int *param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong local_res8;
  undefined8 local_res18;
  byte local_58 [4];
  undefined8 local_54;
  uint local_4c;
  undefined1 local_48 [48];
  
  if (*(longlong *)(param_1 + 4) != 0) goto switchD_1435adedc_default;
  if ((*(longlong *)(param_1 + 6) == 0) || (*(longlong *)(param_1 + 8) == 0)) {
    switch((*param_1 << 0x15) >> 0x1b) {
    case 0:
    case 1:
    case 2:
      uVar2 = *(undefined8 *)(param_2 + 0x200);
      break;
    case 3:
    case 4:
      uVar2 = *(undefined8 *)(param_2 + 0x208);
      break;
    case 5:
      uVar2 = *(undefined8 *)(param_2 + 0x220);
      break;
    case 6:
      uVar2 = *(undefined8 *)(param_2 + 0x230);
      break;
    case 7:
      uVar2 = *(undefined8 *)(param_2 + 0x238);
      break;
    case 8:
      uVar2 = *(undefined8 *)(param_2 + 0x228);
      break;
    case 9:
    case 10:
      uVar2 = *(undefined8 *)(param_2 + 0x240);
      break;
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
      goto switchD_1435adedc_caseD_b;
    default:
      goto switchD_1435adedc_default;
    }
  }
  else {
    local_58[0] = 0;
    local_54 = 0xffffffffffffffff;
    local_4c = 0xffffffff;
    local_res8 = *(longlong *)(param_1 + 8);
    Scaleform::GFx::AS3::Abc::ReadTraitInfoHeader(&local_res8,local_58);
    if (((local_58[0] & 0xf) == 0) || ((local_58[0] & 0xf) - 4 < 3)) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 6) + 0xa0);
      if (((local_58[0] & 0xf) == 0) || ((local_58[0] & 0xf) == 6)) {
        uVar3 = (ulonglong)(int)local_4c;
      }
      else {
        local_res18 = *(undefined8 *)(*(longlong *)(lVar4 + 0x78) + (ulonglong)local_4c * 8);
        uVar1 = FUN_14358f8b0(&local_res18);
        uVar3 = (ulonglong)uVar1;
      }
      lVar4 = uVar3 * 0x10 + *(longlong *)(lVar4 + 0x148);
      FUN_1435ae740(local_48,*(undefined8 *)(param_1 + 6),lVar4);
      uVar2 = FUN_1435c84e0(param_2,*(undefined8 *)(param_1 + 6),lVar4);
      FUN_1434f0700(param_1 + 4,uVar2);
      FUN_1434e6250(local_48);
      return *(undefined8 *)(param_1 + 4);
    }
switchD_1435adedc_caseD_b:
    uVar2 = *(undefined8 *)(param_2 + 0x218);
  }
  FUN_1434f0700(param_1 + 4,uVar2);
switchD_1435adedc_default:
  return *(undefined8 *)(param_1 + 4);
}



// FUNCTION 1435adf80 FUN_1435adf80 body=208 status=ok
// SIG undefined FUN_1435adf80(void)

bool FUN_1435adf80(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int *piVar4;
  longlong local_res8;
  undefined8 local_res10;
  byte local_18 [4];
  undefined8 local_14;
  uint local_c;
  
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     (local_res8 = *(longlong *)(param_1 + 0x20), local_res8 != 0)) {
    local_18[0] = 0;
    local_14 = 0xffffffffffffffff;
    local_c = 0xffffffff;
    Scaleform::GFx::AS3::Abc::ReadTraitInfoHeader(&local_res8,local_18);
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0xa0);
    if (((local_18[0] & 0xf) == 0) || ((local_18[0] & 0xf) == 6)) {
      uVar3 = (ulonglong)(int)local_c;
    }
    else {
      local_res10 = *(undefined8 *)(*(longlong *)(lVar1 + 0x78) + (ulonglong)local_c * 8);
      uVar2 = FUN_14358f8b0(&local_res10);
      uVar3 = (ulonglong)uVar2;
    }
    piVar4 = (int *)(uVar3 * 0x10 + *(longlong *)(lVar1 + 0x148));
    if ((piVar4[3] == 0) && (piVar4[2] == 0)) {
      return *piVar4 == 0;
    }
  }
  return false;
}



// FUNCTION 1435ae060 FUN_1435ae060 body=329 status=ok
// SIG undefined FUN_1435ae060(void)

bool FUN_1435ae060(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  int *piVar6;
  uint *puVar7;
  longlong local_res8;
  undefined8 local_res10;
  byte local_28 [4];
  undefined8 local_24;
  uint local_1c;
  char *local_18;
  longlong local_10;
  
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     (local_res8 = *(longlong *)(param_1 + 0x20), local_res8 != 0)) {
    local_28[0] = 0;
    local_24 = 0xffffffffffffffff;
    local_1c = 0xffffffff;
    Scaleform::GFx::AS3::Abc::ReadTraitInfoHeader(&local_res8,local_28);
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0xa0);
    if (((local_28[0] & 0xf) == 0) || ((local_28[0] & 0xf) == 6)) {
      uVar5 = (ulonglong)(int)local_1c;
    }
    else {
      local_res10 = *(undefined8 *)(*(longlong *)(lVar1 + 0x78) + (ulonglong)local_1c * 8);
      uVar2 = FUN_14358f8b0(&local_res10);
      uVar5 = (ulonglong)uVar2;
    }
    piVar6 = (int *)(uVar5 * 0x10 + *(longlong *)(lVar1 + 0x148));
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0xa0);
    lVar4 = (longlong)*piVar6;
    if (lVar4 == 0) {
      puVar7 = (uint *)(lVar1 + 0x160);
    }
    else {
      puVar7 = (uint *)(*(longlong *)(lVar1 + 0x118) + lVar4 * 0x18);
    }
    FUN_14361cb40(*(longlong *)(lVar1 + 0x100) + (ulonglong)(uint)piVar6[2] * 8,&local_18);
    if ((local_10 == 5) &&
       (((local_18 == "Class" ||
         ((local_18 != (char *)0x0 && (iVar3 = strncmp(local_18,"Class",5), iVar3 == 0)))) &&
        ((*puVar7 & 0xfffffffb) == 0)))) {
      return *(longlong *)(puVar7 + 4) == 0;
    }
  }
  return false;
}



// FUNCTION 1435ae1b0 FUN_1435ae1b0 body=126 status=ok
// SIG undefined FUN_1435ae1b0(void)

longlong * FUN_1435ae1b0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong local_18;
  ulonglong local_10;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  local_10 = (ulonglong)*(uint *)(plVar1 + 4);
  local_18 = *plVar1;
  lVar2 = FUN_1432c6260(&local_18,0x2f,0xffffffffffffffff);
  if (lVar2 < 0) {
    lVar2 = FUN_1432c6260(&local_18,0x2e,0xffffffffffffffff);
  }
  uVar3 = lVar2 + 1U;
  if (local_10 < lVar2 + 1U) {
    uVar3 = local_10;
  }
  lVar2 = FUN_143360a90(plVar1[1],local_18 + uVar3,local_10 - uVar3);
  *param_2 = lVar2;
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  return param_2;
}



// FUNCTION 1435ae320 FUN_1435ae320 body=167 status=ok
// SIG undefined FUN_1435ae320(void)

void FUN_1435ae320(int *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  switch((*param_1 << 0x15) >> 0x1b) {
  case 2:
    FUN_143590140((ulonglong)uVar1 + param_3,(ulonglong)uVar1 + param_2);
    return;
  case 3:
    FUN_1435925e0((ulonglong)uVar1 + param_3,(ulonglong)uVar1 + param_2);
    return;
  case 4:
    FUN_1436142e0(param_3,uVar1,(ulonglong)uVar1 + param_2);
    return;
  case 5:
    *(undefined1 *)((ulonglong)uVar1 + param_3) = *(undefined1 *)((ulonglong)uVar1 + param_2);
    return;
  case 6:
  case 7:
    *(undefined4 *)((ulonglong)uVar1 + param_3) = *(undefined4 *)((ulonglong)uVar1 + param_2);
    return;
  case 8:
    *(undefined8 *)((ulonglong)uVar1 + param_3) = *(undefined8 *)((ulonglong)uVar1 + param_2);
    return;
  case 9:
    FUN_143614360(param_3,uVar1,*(undefined8 *)((ulonglong)uVar1 + param_2));
    return;
  case 10:
    *(undefined8 *)((ulonglong)uVar1 + param_3) = *(undefined8 *)((ulonglong)uVar1 + param_2);
  }
  return;
}



// FUNCTION 1435ae440 FUN_1435ae440 body=146 status=ok
// SIG undefined FUN_1435ae440(void)

undefined4 * FUN_1435ae440(undefined4 *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  *(int *)(lVar2 + 0x60) = *(int *)(lVar2 + 0x60) + 2;
  param_1[4] = param_1[4] & 0xffffffea;
  param_1[4] = param_1[4] | 10;
  *(longlong *)(param_1 + 8) = lVar2 + 0x48;
  param_1[10] = uStack_10;
  param_1[0xb] = uStack_c;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_1434f0700(param_1 + 2,*(undefined8 *)(param_2 + 0x2b0));
  if (*(longlong *)(param_1 + 2) == 0) {
    FUN_1434f0700(param_1 + 2,*(undefined8 *)(param_2 + 0x1d8));
  }
  return param_1;
}



// FUNCTION 1435ae4e0 FUN_1435ae4e0 body=450 status=ok
// SIG undefined FUN_1435ae4e0(void)

uint * FUN_1435ae4e0(uint *param_1,longlong param_2,uint *param_3)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined1 local_28 [8];
  longlong local_20;
  
  puVar1 = param_1 + 4;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *puVar1 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar8 = *param_3 & 0x1f;
  if ((2 < uVar8 - 2) && (uVar8 != 10)) {
    if (uVar8 == 0xc) {
      lVar6 = *(longlong *)(param_3 + 4);
      if (((lVar6 != 0) && (*(int *)(*(longlong *)(lVar6 + 0x28) + 0x90) == 0x11)) &&
         ((~(*(byte *)(*(longlong *)(lVar6 + 0x28) + 0x88) >> 5) & 1) != 0)) {
        FUN_143590250(puVar1,lVar6 + 0x40);
        FUN_1434f0700(param_1 + 2,*(undefined8 *)(lVar6 + 0x48));
        *param_1 = *param_1 & 0xfffffff9;
        return param_1;
      }
      if (*(longlong *)(param_3 + 4) != 0) {
        FUN_1435901e0(puVar1,param_3);
        pcVar5 = (char *)FUN_143591c60(puVar1,local_res8,*(undefined8 *)(param_2 + 0x10));
        if (*pcVar5 == '\0') {
          return param_1;
        }
        goto LAB_1435ae65b;
      }
      uVar7 = 0x3e9;
    }
    else {
      uVar7 = 0x5e4;
    }
    uVar7 = FUN_1435c8e40(local_28,uVar7,param_2);
    FUN_1435ccf60(param_2,uVar7,&DAT_145b155b0);
    piVar2 = (int *)(local_20 + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 != 0) {
      return param_1;
    }
    FUN_14335f920();
    return param_1;
  }
  if (param_3 != puVar1) {
    uVar8 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    *puVar1 = *param_3;
    param_1[5] = uVar8;
    param_1[6] = uVar3;
    param_1[7] = uVar4;
    uVar7 = *(undefined8 *)(param_3 + 6);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 4);
    *(undefined8 *)(param_1 + 10) = uVar7;
    uVar8 = *puVar1 & 0x1f;
    if (9 < uVar8) {
      if ((*puVar1 >> 9 & 1) == 0) {
        if (uVar8 == 10) {
          *(int *)(*(longlong *)(param_1 + 8) + 0x18) =
               *(int *)(*(longlong *)(param_1 + 8) + 0x18) + 1;
        }
        else if (10 < uVar8) {
          if (uVar8 < 0xd) {
            lVar6 = *(longlong *)(param_1 + 8);
          }
          else {
            if (0xe < uVar8) goto LAB_1435ae65b;
            lVar6 = *(longlong *)(param_1 + 10);
          }
          if (lVar6 != 0) {
            *(uint *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1U & 0x8fffffff;
          }
        }
      }
      else {
        **(int **)(param_1 + 6) = **(int **)(param_1 + 6) + 1;
      }
    }
  }
LAB_1435ae65b:
  FUN_1435aef90(param_1,0);
  FUN_1434f0700(param_1 + 2,*(undefined8 *)(param_2 + 0x2b0));
  if (*(longlong *)(param_1 + 2) == 0) {
    FUN_1434f0700(param_1 + 2,*(undefined8 *)(param_2 + 0x1d8));
  }
  return param_1;
}



// FUNCTION 1435ae6b0 FUN_1435ae6b0 body=62 status=ok
// SIG undefined FUN_1435ae6b0(void)

undefined4 * FUN_1435ae6b0(undefined4 *param_1,longlong param_2,undefined8 param_3)

{
  *param_1 = 0;
  *(longlong *)(param_1 + 2) = param_2;
  if (param_2 != 0) {
    *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  }
  param_1[4] = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  FUN_1435aecd0(param_1,param_3);
  return param_1;
}



// FUNCTION 1435ae700 FUN_1435ae700 body=58 status=ok
// SIG undefined FUN_1435ae700(void)

undefined4 * FUN_1435ae700(undefined4 *param_1,longlong param_2,undefined8 param_3)

{
  *param_1 = 2;
  *(longlong *)(param_1 + 2) = param_2;
  if (param_2 != 0) {
    *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  }
  FUN_14360ab50(param_1 + 4,param_3);
  return param_1;
}



// FUNCTION 1435ae740 FUN_1435ae740 body=219 status=ok
// SIG undefined FUN_1435ae740(void)

int * FUN_1435ae740(int *param_1,undefined8 param_2,int *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong local_res8;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  *param_1 = param_3[3];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (((param_3[3] != 0) || (param_3[2] != 0)) || (*param_3 != 0)) {
    plVar2 = (longlong *)FUN_1435ba8a0(param_2,&local_res8,(longlong)param_3[2]);
    *(int *)(*plVar2 + 0x18) = *(int *)(*plVar2 + 0x18) + 1;
    param_1[4] = param_1[4] & 0xffffffea;
    param_1[4] = param_1[4] | 10;
    local_18 = (int)*plVar2;
    iStack_14 = (int)((ulonglong)*plVar2 >> 0x20);
    param_1[8] = local_18;
    param_1[9] = iStack_14;
    param_1[10] = iStack_10;
    param_1[0xb] = iStack_c;
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    FUN_1435aef90(param_1,0);
  }
  if ((param_3[3] & 3U) == 0) {
    if (*param_3 == 0) {
      return param_1;
    }
    uVar3 = FUN_1435ba6d0(param_2,(longlong)*param_3);
  }
  else {
    if ((param_3[3] & 3U) != 2) {
      return param_1;
    }
    uVar3 = FUN_1435ba7c0(param_2,(longlong)*param_3);
  }
  FUN_1434f0700(param_1 + 2,uVar3);
  return param_1;
}



// FUNCTION 1435ae830 FUN_1435ae830 body=373 status=ok
// SIG undefined FUN_1435ae830(void)

undefined4 * FUN_1435ae830(undefined4 *param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_res8;
  undefined1 local_res10 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  lVar6 = FUN_1432c6260(param_3,0x3a,0xffffffffffffffff);
  bVar10 = lVar6 < 0;
  if (bVar10) {
    lVar6 = FUN_1432c6260(param_3,0x2e,0xffffffffffffffff);
  }
  uVar2 = param_3[1];
  lVar3 = *param_3;
  uVar7 = lVar6 + 1U;
  if (uVar2 < lVar6 + 1U) {
    uVar7 = uVar2;
  }
  if (lVar6 < 1) {
    FUN_1434f0700(param_1 + 2,*(undefined8 *)(param_2 + 0x1d8));
  }
  else {
    lVar9 = lVar6;
    if ((!bVar10) && (lVar9 = lVar6 + -1, lVar6 + -1 < 0)) {
      lVar9 = 0;
    }
    local_res8 = FUN_143360a90(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x218),lVar3,lVar9);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    puVar8 = (ulonglong *)FUN_1435cc220(param_2,local_res10,0,&local_res8);
    uVar4 = *(ulonglong *)(param_1 + 2);
    uVar5 = *puVar8;
    if (uVar5 != uVar4) {
      if (uVar4 != 0) {
        if ((uVar4 & 1) == 0) {
          if ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *(ulonglong *)(param_1 + 2) = uVar4 - 1;
        }
      }
      *(ulonglong *)(param_1 + 2) = uVar5;
    }
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  lVar6 = FUN_143360a90(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x218),lVar3 + uVar7,
                        uVar2 - uVar7);
  local_48 = (undefined4)lVar6;
  uStack_44 = (undefined4)((ulonglong)lVar6 >> 0x20);
  *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 2;
  param_1[4] = param_1[4] & 0xffffffea;
  param_1[4] = param_1[4] | 10;
  param_1[8] = local_48;
  param_1[9] = uStack_44;
  param_1[10] = uStack_40;
  param_1[0xb] = uStack_3c;
  piVar1 = (int *)(lVar6 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar6);
  }
  FUN_1435aef90(param_1,0);
  return param_1;
}



// FUNCTION 1435ae9b0 FUN_1435ae9b0 body=292 status=ok
// SIG undefined FUN_1435ae9b0(void)

undefined4 * FUN_1435ae9b0(undefined4 *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_res8;
  undefined1 local_res10 [8];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *param_1 = 0;
  lVar6 = -1;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  lVar5 = *(longlong *)(param_2 + 0x10);
  lVar7 = -1;
  do {
    lVar7 = lVar7 + 1;
  } while (*(char *)(*(longlong *)(param_3 + 0x18) + lVar7) != '\0');
  local_res8 = FUN_143360950(*(undefined8 *)(lVar5 + 0x218),*(longlong *)(param_3 + 0x18),lVar7,0);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  puVar4 = (ulonglong *)FUN_1435cc220(param_2,local_res10,0,&local_res8);
  uVar2 = *(ulonglong *)(param_1 + 2);
  uVar3 = *puVar4;
  if (uVar3 != uVar2) {
    if (uVar2 != 0) {
      if ((uVar2 & 1) == 0) {
        if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *(ulonglong *)(param_1 + 2) = uVar2 - 1;
      }
    }
    *(ulonglong *)(param_1 + 2) = uVar3;
  }
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  do {
    lVar6 = lVar6 + 1;
  } while (*(char *)(*(longlong *)(param_3 + 0x10) + lVar6) != '\0');
  lVar5 = FUN_143360950(*(undefined8 *)(lVar5 + 0x218),*(longlong *)(param_3 + 0x10),lVar6,0);
  local_28 = (undefined4)lVar5;
  uStack_24 = (undefined4)((ulonglong)lVar5 >> 0x20);
  *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 2;
  param_1[4] = param_1[4] & 0xffffffea;
  param_1[4] = param_1[4] | 10;
  param_1[8] = local_28;
  param_1[9] = uStack_24;
  param_1[10] = uStack_20;
  param_1[0xb] = uStack_1c;
  piVar1 = (int *)(lVar5 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar5);
  }
  FUN_1435aef90(param_1,0);
  return param_1;
}



// FUNCTION 1435aeae0 IsAnyType body=169 status=ok
// SIG undefined IsAnyType(void)

undefined8 Scaleform::GFx::AS3::Multiname::IsAnyType(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined7 uVar5;
  undefined8 uVar6;
  bool bVar7;
  
  uVar3 = *(uint *)(param_1 + 0x10) & 0x1f;
  uVar5 = 0;
  if (uVar3 != 0) {
    if (uVar3 == 0xc) {
      bVar7 = *(longlong *)(param_1 + 0x20) == 0;
      lVar4 = 0;
    }
    else {
      if (uVar3 != 10) goto LAB_1435aeb1a;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8) + 0x80;
      bVar7 = *(longlong *)(param_1 + 0x20) == lVar4;
    }
    uVar5 = (undefined7)((ulonglong)lVar4 >> 8);
    if (!bVar7) {
LAB_1435aeb1a:
      if (((byte)*(undefined4 *)(param_1 + 0x10) & 0x1f) == 10) {
        puVar2 = *(undefined8 **)(param_1 + 0x20);
        iVar1 = *(int *)(puVar2 + 3);
        *(int *)(puVar2 + 3) = iVar1 + 1;
        if ((*(int *)(puVar2 + 4) == 0) ||
           ((*(char *)*puVar2 == '*' && (((char *)*puVar2)[1] == '\0')))) {
          uVar6 = 1;
        }
        else {
          uVar6 = 0;
        }
        *(int *)(puVar2 + 3) = iVar1;
        if (iVar1 == 0) {
          FUN_14335f920();
        }
        return uVar6;
      }
      return 0;
    }
  }
  return CONCAT71(uVar5,1);
}



// FUNCTION 1435aeb90 ContainsNamespace body=110 status=ok
// SIG undefined ContainsNamespace(void)

ulonglong Scaleform::GFx::AS3::Multiname::ContainsNamespace(uint *param_1,longlong param_2)

{
  byte *pbVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  
  lVar2 = *(longlong *)(param_1 + 2);
  uVar3 = (ulonglong)*param_1 & 0xffffffffffffff03;
  if ((char)uVar3 == '\x02') {
    uVar4 = 0;
    if (*(ulonglong *)(lVar2 + 0x30) != 0) {
      puVar5 = *(ulonglong **)(lVar2 + 0x28);
      do {
        uVar3 = *puVar5;
        if ((*(longlong *)(uVar3 + 0x38) == *(longlong *)(param_2 + 0x38)) &&
           (pbVar1 = (byte *)(uVar3 + 0x28), uVar3 = 0,
           ((*pbVar1 ^ *(byte *)(param_2 + 0x28)) & 0xf) == 0)) {
          return 1;
        }
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar4 < *(ulonglong *)(lVar2 + 0x30));
    }
    return uVar3 & 0xffffffffffffff00;
  }
  if ((*(longlong *)(lVar2 + 0x38) == *(longlong *)(param_2 + 0x38)) &&
     (((*(byte *)(lVar2 + 0x28) ^ *(byte *)(param_2 + 0x28)) & 0xf) == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1435aec10 FUN_1435aec10 body=5 status=ok
// SIG undefined FUN_1435aec10(void)

undefined8 FUN_1435aec10(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 1435aec20 FUN_1435aec20 body=5 status=ok
// SIG undefined FUN_1435aec20(void)

undefined8 FUN_1435aec20(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 1435aec30 FUN_1435aec30 body=98 status=ok
// SIG undefined FUN_1435aec30(void)

void FUN_1435aec30(longlong param_1,undefined8 param_2,code *param_3)

{
  uint uVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    (*param_3)(param_2,param_1 + 8);
  }
  uVar1 = *(uint *)(param_1 + 0x10) & 0x1f;
  if (10 < uVar1) {
    if (uVar1 < 0xd) {
      plVar2 = (longlong *)(param_1 + 0x20);
    }
    else {
      if (0xe < uVar1) {
        return;
      }
      plVar2 = (longlong *)(param_1 + 0x28);
    }
    if (*plVar2 != 0) {
      (*param_3)(param_2);
    }
  }
  return;
}



// FUNCTION 1435aeca0 FUN_1435aeca0 body=27 status=ok
// SIG undefined FUN_1435aeca0(void)

void FUN_1435aeca0(uint *param_1)

{
  FUN_1434f0700(param_1 + 2);
  *param_1 = *param_1 & 0xfffffffc;
  return;
}



// FUNCTION 1435aecd0 FUN_1435aecd0 body=129 status=ok
// SIG undefined FUN_1435aecd0(void)

void FUN_1435aecd0(uint *param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  if ((((((byte)*param_2 & 0x1f) == 0xc) && (lVar1 = *(longlong *)(param_2 + 4), lVar1 != 0)) &&
      (*(int *)(*(longlong *)(lVar1 + 0x28) + 0x90) == 0x11)) &&
     ((~(*(byte *)(*(longlong *)(lVar1 + 0x28) + 0x88) >> 5) & 1) != 0)) {
    FUN_143590250(param_1 + 4,lVar1 + 0x40);
    FUN_1434f0700(param_1 + 2,*(undefined8 *)(lVar1 + 0x48));
    *param_1 = *param_1 & 0xfffffff9;
    return;
  }
  FUN_1435901e0(param_1 + 4);
  FUN_1435aef90(param_1,0);
  return;
}



// FUNCTION 1435aed60 FUN_1435aed60 body=129 status=ok
// SIG undefined FUN_1435aed60(void)

void FUN_1435aed60(uint *param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  if ((((((byte)*param_2 & 0x1f) == 0xc) && (lVar1 = *(longlong *)(param_2 + 4), lVar1 != 0)) &&
      (*(int *)(*(longlong *)(lVar1 + 0x28) + 0x90) == 0x11)) &&
     ((~(*(byte *)(*(longlong *)(lVar1 + 0x28) + 0x88) >> 5) & 1) != 0)) {
    FUN_143590250(param_1 + 4,lVar1 + 0x40);
    FUN_1434f0700(param_1 + 2,*(undefined8 *)(lVar1 + 0x48));
    *param_1 = *param_1 & 0xfffffff9;
    return;
  }
  FUN_143590140(param_1 + 4);
  FUN_1435aef90(param_1,0);
  return;
}



// FUNCTION 1435aedf0 FUN_1435aedf0 body=161 status=ok
// SIG undefined FUN_1435aedf0(void)

void FUN_1435aedf0(uint *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined4 *)*param_2;
  if ((((((byte)*puVar1 & 0x1f) == 0xc) && (*(longlong *)(puVar1 + 4) != 0)) &&
      (lVar2 = *(longlong *)(*(longlong *)(puVar1 + 4) + 0x28), *(int *)(lVar2 + 0x90) == 0x11)) &&
     ((~(*(byte *)(lVar2 + 0x88) >> 5) & 1) != 0)) {
    lVar2 = *(longlong *)(puVar1 + 4);
    FUN_143590250(param_1 + 4,lVar2 + 0x40);
    FUN_1434f0700(param_1 + 2,*(undefined8 *)(lVar2 + 0x48));
    *param_1 = *param_1 & 0xfffffff9;
    FUN_143611f90(param_2);
    return;
  }
  FUN_143611bd0(param_1 + 4);
  FUN_1435aef90(param_1,0);
  return;
}



// FUNCTION 1435aeea0 FUN_1435aeea0 body=162 status=ok
// SIG undefined FUN_1435aeea0(void)

void FUN_1435aeea0(uint *param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  puVar1 = *(undefined4 **)(param_2 + 0x18);
  if ((((((byte)*puVar1 & 0x1f) == 0xc) && (*(longlong *)(puVar1 + 4) != 0)) &&
      (lVar2 = *(longlong *)(*(longlong *)(puVar1 + 4) + 0x28), *(int *)(lVar2 + 0x90) == 0x11)) &&
     ((~(*(byte *)(lVar2 + 0x88) >> 5) & 1) != 0)) {
    lVar2 = *(longlong *)(puVar1 + 4);
    FUN_143590250(param_1 + 4,lVar2 + 0x40);
    FUN_1434f0700(param_1 + 2,*(undefined8 *)(lVar2 + 0x48));
    *param_1 = *param_1 & 0xfffffff9;
    FUN_143611e10(param_2);
    return;
  }
  FUN_143611b40(param_1 + 4);
  FUN_1435aef90(param_1,0);
  return;
}



// FUNCTION 1435aef50 FUN_1435aef50 body=57 status=ok
// SIG undefined FUN_1435aef50(void)

void FUN_1435aef50(uint *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  FUN_143590250(param_1 + 4,lVar1 + 0x40);
  FUN_1434f0700(param_1 + 2,*(undefined8 *)(lVar1 + 0x48));
  *param_1 = *param_1 & 0xfffffff9;
  return;
}



// FUNCTION 1435aef90 FUN_1435aef90 body=241 status=ok
// SIG undefined FUN_1435aef90(void)

void FUN_1435aef90(uint *param_1,char param_2)

{
  uint *puVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *local_res8;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  puVar1 = param_1 + 4;
  if ((((byte)param_1[4] & 0x1f) == 10) && (param_2 == '\0')) {
    local_res8 = *(undefined8 **)(param_1 + 8);
    *(int *)(local_res8 + 3) = *(int *)(local_res8 + 3) + 1;
    if ((*(int *)(local_res8 + 4) != 0) && (*(char *)*local_res8 == '@')) {
      *param_1 = *param_1 | 8;
      lVar3 = FUN_14335fd10(&local_res8,1,*(undefined4 *)(local_res8 + 4));
      *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 2;
      if (9 < ((byte)*puVar1 & 0x1f)) {
        if ((*puVar1 >> 9 & 1) == 0) {
          FUN_1435920c0(puVar1);
        }
        else {
          piVar2 = *(int **)(param_1 + 6);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          *puVar1 = *puVar1 & 0xfffffde0;
          param_1[6] = 0;
          param_1[7] = 0;
          param_1[8] = 0;
          param_1[9] = 0;
          param_1[10] = 0;
          param_1[0xb] = 0;
        }
      }
      *puVar1 = *puVar1 & 0xffffffea;
      *puVar1 = *puVar1 | 10;
      local_18 = (uint)lVar3;
      uStack_14 = (uint)((ulonglong)lVar3 >> 0x20);
      param_1[8] = local_18;
      param_1[9] = uStack_14;
      param_1[10] = uStack_10;
      param_1[0xb] = uStack_c;
      piVar2 = (int *)(lVar3 + 0x18);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FUN_14335f920(lVar3);
      }
    }
    piVar2 = (int *)(local_res8 + 3);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_14335f920();
    }
  }
  return;
}



// FUNCTION 1435af110 FUN_1435af110 body=138 status=ok
// SIG undefined FUN_1435af110(void)

void FUN_1435af110(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  
  if (param_2 != 0) {
    *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  }
  plVar1 = (longlong *)(param_1 + 0x28);
  FUN_1434f0230(plVar1,plVar1,*(longlong *)(param_1 + 0x30) + 1);
  puVar2 = (ulonglong *)(*plVar1 + (*(longlong *)(param_1 + 0x30) + -1) * 8);
  if (puVar2 != (ulonglong *)0x0) {
    *puVar2 = param_2;
    if (param_2 == 0) {
      return;
    }
    *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  }
  if (((param_2 != 0) && ((param_2 & 1) == 0)) && ((*(uint *)(param_2 + 8) & 0x3fffff) != 0)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) - 1;
    FUN_1434ef880(param_2);
  }
  return;
}



// FUNCTION 1435af1a0 ForEachChild_GC body=103 status=ok
// SIG undefined ForEachChild_GC(void)

void Scaleform::GFx::AS3::NamespaceSet::ForEachChild_GC
               (longlong param_1,undefined8 param_2,code *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *(ulonglong *)(param_1 + 0x30);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x28) + uVar2 * 8) != 0) {
        (*param_3)(param_2,*(longlong *)(param_1 + 0x28) + uVar2 * 8);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}



// FUNCTION 1435af210 FUN_1435af210 body=169 status=ok
// SIG undefined FUN_1435af210(void)

undefined1 *
FUN_1435af210(ulonglong *param_1,undefined1 *param_2,undefined8 param_3,uint *param_4,
             undefined4 param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined1 local_res8 [32];
  undefined8 uStack_10;
  
  uVar3 = *param_1;
  uVar1 = (uint)uVar3 & 3;
  if ((uVar3 & 3) == 0) {
    puVar2 = (undefined1 *)FUN_1435ac440(uVar3,local_res8,param_3,param_4,param_1 + 2,0,param_5);
    *param_2 = *puVar2;
    return param_2;
  }
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      uVar3 = uVar3 & 0xfffffffffffffffd;
      if (uVar3 != 0) {
        *(uint *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1U & 0x8fffffff;
      }
      *param_4 = *param_4 & 0xffffffec;
      *param_4 = *param_4 | 0xc;
      *(ulonglong *)(param_4 + 4) = uVar3;
      *(undefined8 *)(param_4 + 6) = uStack_10;
    }
    *param_2 = 1;
    return param_2;
  }
  FUN_1435901e0(param_4,uVar3 & 0xfffffffffffffffe);
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1435af2c0 FUN_1435af2c0 body=170 status=ok
// SIG undefined FUN_1435af2c0(void)

undefined1 *
FUN_1435af2c0(ulonglong *param_1,undefined1 *param_2,undefined8 param_3,uint *param_4,
             undefined8 param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined1 local_res8 [32];
  undefined8 uStack_10;
  
  uVar3 = *param_1;
  uVar1 = (uint)uVar3 & 3;
  if ((uVar3 & 3) == 0) {
    puVar2 = (undefined1 *)FUN_1435ac440(uVar3,local_res8,param_3,param_4,param_1 + 2,param_5,0);
    *param_2 = *puVar2;
    return param_2;
  }
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      uVar3 = uVar3 & 0xfffffffffffffffd;
      if (uVar3 != 0) {
        *(uint *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1U & 0x8fffffff;
      }
      *param_4 = *param_4 & 0xffffffec;
      *param_4 = *param_4 | 0xc;
      *(ulonglong *)(param_4 + 4) = uVar3;
      *(undefined8 *)(param_4 + 6) = uStack_10;
    }
    *param_2 = 1;
    return param_2;
  }
  FUN_1435901e0(param_4,uVar3 & 0xfffffffffffffffe);
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1435af370 FUN_1435af370 body=122 status=ok
// SIG undefined FUN_1435af370(void)

undefined1 *
FUN_1435af370(ulonglong *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 local_res8 [32];
  
  uVar1 = *param_1;
  uVar2 = (uint)uVar1 & 3;
  if ((uVar1 & 3) == 0) {
    puVar3 = (undefined1 *)FUN_1435ad410(uVar1,local_res8,param_3,param_4,param_1 + 2,0);
    *param_2 = *puVar3;
    return param_2;
  }
  if (uVar2 != 1) {
    if (uVar2 == 2) {
      *param_2 = 0;
      return param_2;
    }
    *param_2 = 1;
    return param_2;
  }
  FUN_143590140(uVar1 & 0xfffffffffffffffe,param_4);
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1435af3f0 FUN_1435af3f0 body=315 status=ok
// SIG undefined FUN_1435af3f0(void)

longlong FUN_1435af3f0(longlong param_1,undefined8 param_2,longlong param_3,ulonglong *param_4,
                      longlong *param_5)

{
  longlong lVar1;
  uint *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  
  puVar2 = (uint *)FUN_14360fa90(param_1 + 0x28);
  lVar5 = 0;
  if (puVar2 != (uint *)0x0) {
    uVar3 = (ulonglong)*puVar2;
    do {
      *param_4 = uVar3;
      if (((longlong)uVar3 < 0) || (uVar3 < *(ulonglong *)(param_1 + 0x28))) {
        lVar5 = FUN_1434ef150(*(undefined8 *)(param_1 + 0x30),uVar3);
      }
      else {
        lVar5 = *(longlong *)(param_1 + 0x38) + 0x10 +
                ((uVar3 & 0xffffffff) - *(ulonglong *)(param_1 + 0x28)) * 0x40;
      }
      lVar1 = *(longlong *)(lVar5 + 8);
      iVar4 = (int)((*(longlong *)(param_3 + 0x28) << 0x3c) >> 0x3c);
      if ((int)((*(longlong *)(lVar1 + 0x28) << 0x3c) >> 0x3c) == iVar4) {
        if (iVar4 == 1) break;
        if (iVar4 == 3) {
          bVar6 = param_3 == lVar1;
        }
        else {
          bVar6 = *(longlong *)(lVar1 + 0x38) == *(longlong *)(param_3 + 0x38);
        }
        if (bVar6) break;
      }
      if (uVar3 < *(ulonglong *)(param_1 + 0x28)) {
        uVar3 = Scaleform::GFx::AS3::Slots::GetPrevSlotIndex(*(undefined8 *)(param_1 + 0x30),uVar3);
      }
      else {
        uVar3 = *(ulonglong *)
                 ((uVar3 - *(ulonglong *)(param_1 + 0x28)) * 0x40 + 8 +
                 *(longlong *)(param_1 + 0x38));
      }
      lVar5 = 0;
    } while (-1 < (longlong)uVar3);
  }
  if ((param_5 != (longlong *)0x0) && (*(int *)(param_1 + 0x90) == 0x17)) {
    lVar5 = (**(code **)(*param_5 + 0xb8))(param_5,lVar5,param_2,param_3,param_4);
  }
  return lVar5;
}



// FUNCTION 1435af540 FUN_1435af540 body=55 status=ok
// SIG undefined FUN_1435af540(void)

void FUN_1435af540(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1435af3f0();
  if (lVar1 != 0) {
    FUN_1435adda0(lVar1,*(undefined8 *)(param_1 + 0x98));
    return;
  }
  return;
}



// FUNCTION 1435af580 FUN_1435af580 body=556 status=ok
// SIG undefined FUN_1435af580(void)

ulonglong FUN_1435af580(longlong param_1,longlong param_2,undefined4 *param_3,ulonglong *param_4,
                       longlong *param_5)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  uint *puVar7;
  ulonglong uVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  longlong *local_res8;
  longlong local_res10;
  longlong local_res18;
  
  local_res18 = **(longlong **)(param_1 + 0x10);
  *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
  local_res10 = param_2;
  pcVar5 = (char *)FUN_1435911f0(param_3 + 4,&local_res8,&local_res18);
  uVar6 = 0;
  if (*pcVar5 != '\0') {
    if (((byte)*param_3 & 3) < 2) {
      uVar6 = FUN_1435af3f0(param_2,&local_res18,*(undefined8 *)(param_3 + 2),param_4,param_5);
    }
    else {
      lVar2 = *(longlong *)(param_3 + 2);
      plVar10 = (longlong *)(lVar2 + 0x28);
      local_res8 = plVar10;
      puVar7 = (uint *)FUN_14360fa90(param_2 + 0x28,&local_res18);
      uVar3 = *(ulonglong *)(lVar2 + 0x30);
      uVar11 = uVar6;
      uVar12 = uVar6;
      if (uVar3 != 0) {
        do {
          lVar2 = *(longlong *)(*plVar10 + uVar12 * 8);
          uVar6 = uVar11;
          if (puVar7 != (uint *)0x0) {
            uVar8 = (ulonglong)*puVar7;
            do {
              *param_4 = uVar8;
              if (((longlong)uVar8 < 0) || (uVar8 < *(ulonglong *)(param_2 + 0x28))) {
                uVar6 = FUN_1434ef150(*(undefined8 *)(param_2 + 0x30),uVar8);
              }
              else {
                uVar6 = *(longlong *)(param_2 + 0x38) + 0x10 +
                        ((uVar8 & 0xffffffff) - *(ulonglong *)(param_2 + 0x28)) * 0x40;
              }
              lVar4 = *(longlong *)(uVar6 + 8);
              iVar9 = (int)((*(longlong *)(lVar2 + 0x28) << 0x3c) >> 0x3c);
              if ((int)((*(longlong *)(lVar4 + 0x28) << 0x3c) >> 0x3c) == iVar9) {
                plVar10 = local_res8;
                if (iVar9 == 1) break;
                if (iVar9 == 3) {
                  bVar13 = lVar2 == lVar4;
                }
                else {
                  bVar13 = *(longlong *)(lVar4 + 0x38) == *(longlong *)(lVar2 + 0x38);
                }
                if (bVar13) break;
              }
              if (uVar8 < *(ulonglong *)(param_2 + 0x28)) {
                uVar8 = Scaleform::GFx::AS3::Slots::GetPrevSlotIndex
                                  (*(undefined8 *)(param_2 + 0x30),uVar8);
              }
              else {
                uVar8 = *(ulonglong *)
                         ((uVar8 - *(ulonglong *)(param_2 + 0x28)) * 0x40 + 8 +
                         *(longlong *)(param_2 + 0x38));
              }
              plVar10 = local_res8;
              uVar6 = uVar11;
            } while (-1 < (longlong)uVar8);
          }
          if ((param_5 != (longlong *)0x0) && (*(int *)(local_res10 + 0x90) == 0x17)) {
            uVar6 = (**(code **)(*param_5 + 0xb8))(param_5,uVar6,&local_res18,lVar2,param_4);
          }
        } while ((uVar6 == 0) && (uVar12 = uVar12 + 1, uVar11 = uVar6, uVar12 < uVar3));
      }
    }
  }
  piVar1 = (int *)(local_res18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return uVar6;
}



// FUNCTION 1435af7c0 FUN_1435af7c0 body=831 status=ok
// SIG undefined FUN_1435af7c0(void)

ulonglong FUN_1435af7c0(longlong param_1,longlong param_2,undefined4 *param_3,longlong param_4,
                       undefined8 param_5)

{
  int *piVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong *plVar12;
  bool bVar13;
  longlong *local_res8;
  longlong local_res18;
  longlong local_res20;
  ulonglong local_78;
  ulonglong local_70;
  uint *local_68;
  longlong local_60;
  ulonglong local_58;
  longlong *local_50;
  ulonglong *local_48;
  
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x218);
  local_res18 = lVar6 + 0x48;
  piVar1 = (int *)(lVar6 + 0x60);
  *piVar1 = *piVar1 + 1;
  local_res20 = param_4;
  pcVar5 = (char *)FUN_1435911f0(param_3 + 4,&local_res8,&local_res18);
  uVar10 = 0;
  uVar7 = uVar10;
  if (*pcVar5 != '\0') {
    if (((byte)*param_3 & 3) < 2) {
      local_res8 = (longlong *)0x0;
      lVar6 = FUN_1435af3f0(param_2,&local_res18,*(undefined8 *)(param_3 + 2),&local_res8,param_5);
      if (lVar6 != 0) {
        uVar7 = FUN_1435adda0(lVar6,*(undefined8 *)(param_2 + 0x98));
      }
    }
    else {
      lVar6 = *(longlong *)(param_3 + 2);
      puVar2 = (ulonglong *)(param_2 + 0x28);
      plVar12 = (longlong *)(lVar6 + 0x28);
      local_res8 = plVar12;
      local_68 = (uint *)FUN_14360fa90(puVar2,&local_res18);
      local_70 = *(ulonglong *)(lVar6 + 0x30);
      if (local_70 != 0) {
        do {
          uVar3 = *(ulonglong *)(*plVar12 + uVar10 * 8);
          if (local_68 != (uint *)0x0) {
            lVar6 = *(longlong *)(uVar3 + 0x28);
            uVar7 = (ulonglong)*local_68;
            do {
              if (uVar7 < *puVar2) {
                lVar9 = FUN_1434ef150(*(undefined8 *)(param_2 + 0x30),uVar7);
              }
              else {
                lVar9 = *(longlong *)(param_2 + 0x38) + 0x10 +
                        ((uVar7 & 0xffffffff) - *puVar2) * 0x40;
              }
              uVar4 = *(ulonglong *)(lVar9 + 8);
              iVar11 = (int)((lVar6 << 0x3c) >> 0x3c);
              if ((int)((*(longlong *)(uVar4 + 0x28) << 0x3c) >> 0x3c) == iVar11) {
                if (iVar11 != 1) {
                  if (iVar11 == 3) {
                    bVar13 = uVar3 == uVar4;
                  }
                  else {
                    bVar13 = *(longlong *)(uVar4 + 0x38) == *(longlong *)(uVar3 + 0x38);
                  }
                  if (!bVar13) goto LAB_1435af936;
                }
                uVar7 = FUN_1435adda0(lVar9,param_1);
                plVar12 = local_res8;
                if (uVar7 != 0) goto LAB_1435afac5;
                break;
              }
LAB_1435af936:
              if (uVar7 < *puVar2) {
                uVar7 = Scaleform::GFx::AS3::Slots::GetPrevSlotIndex
                                  (*(undefined8 *)(param_2 + 0x30),uVar7);
              }
              else {
                uVar7 = *(ulonglong *)((uVar7 - *puVar2) * 0x40 + 8 + *(longlong *)(param_2 + 0x38))
                ;
              }
              plVar12 = local_res8;
            } while (-1 < (longlong)uVar7);
          }
          lVar6 = local_res20;
          if ((((*(longlong *)(local_res20 + 0x28) != 0) &&
               (puVar8 = (ulonglong *)
                         FUN_1435be2b0(*(longlong *)(local_res20 + 0x28),&local_res18,uVar3),
               puVar8 != (ulonglong *)0x0)) ||
              (puVar8 = (ulonglong *)FUN_143610010(lVar6 + 0x30,&local_res18,uVar3),
              puVar8 != (ulonglong *)0x0)) && (uVar7 = *puVar8, uVar7 != 0)) break;
          uVar7 = FUN_1434decf0(*(undefined8 *)(param_1 + 0x2c0),&local_res18,uVar3);
          if (uVar7 != 0) {
            lVar6 = *(longlong *)(param_1 + 0x1c8);
            local_60 = local_res18;
            *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
            if (uVar3 != 0) {
              *(uint *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1U & 0x8fffffff;
            }
            local_50 = &local_60;
            local_48 = &local_78;
            local_78 = uVar7;
            local_58 = uVar3;
            FUN_1434e5270(lVar6 + 0x30,*(undefined8 *)(lVar6 + 0x38),&local_50,
                          (uint)((*(longlong *)(uVar3 + 0x28) << 0x3c) >> 0x3c) ^
                          (*(uint *)(*(longlong *)(uVar3 + 0x38) + 0x1c) & 0xffffff) << 2 ^
                          *(uint *)(local_res18 + 0x1c) & 0xffffff);
            if (local_58 != 0) {
              if ((local_58 & 1) == 0) {
                if ((*(uint *)(local_58 + 8) & 0x3fffff) != 0) {
                  *(uint *)(local_58 + 8) = *(uint *)(local_58 + 8) - 1;
                  FUN_1434ef880();
                }
              }
              else {
                local_58 = local_58 - 1;
              }
            }
            piVar1 = (int *)(local_60 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          if ((uVar7 != 0) || (uVar10 = uVar10 + 1, local_70 <= uVar10)) break;
        } while( true );
      }
    }
  }
LAB_1435afac5:
  piVar1 = (int *)(local_res18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return uVar7;
}



// FUNCTION 1435afb10 FUN_1435afb10 body=511 status=ok
// SIG undefined FUN_1435afb10(void)

ulonglong FUN_1435afb10(longlong param_1,undefined4 *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong local_res10 [2];
  ulonglong local_res20;
  longlong local_58;
  ulonglong local_50;
  longlong *local_48;
  ulonglong *local_40;
  
  uVar6 = 0;
  if (1 < ((byte)*param_2 & 3)) {
    lVar2 = *(longlong *)(param_2 + 2);
    uVar3 = *(ulonglong *)(lVar2 + 0x30);
    uVar8 = uVar6;
    if (uVar3 != 0) {
      do {
        local_res10[0] = *(longlong *)(param_2 + 8);
        *(int *)(local_res10[0] + 0x18) = *(int *)(local_res10[0] + 0x18) + 1;
        uVar4 = *(ulonglong *)(*(longlong *)(lVar2 + 0x28) + uVar8 * 8);
        if (((((*(longlong *)(param_3 + 0x28) == 0) ||
              (puVar7 = (ulonglong *)FUN_1435be2b0(*(longlong *)(param_3 + 0x28),local_res10,uVar4),
              puVar7 == (ulonglong *)0x0)) &&
             (puVar7 = (ulonglong *)FUN_143610010(param_3 + 0x30,local_res10,uVar4),
             puVar7 == (ulonglong *)0x0)) || (uVar6 = *puVar7, uVar6 == 0)) &&
           (uVar6 = FUN_1434decf0(*(undefined8 *)(param_1 + 0x2c0),local_res10,uVar4), uVar6 != 0))
        {
          lVar5 = *(longlong *)(param_1 + 0x1c8);
          local_58 = local_res10[0];
          *(int *)(local_res10[0] + 0x18) = *(int *)(local_res10[0] + 0x18) + 1;
          if (uVar4 != 0) {
            *(uint *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1U & 0x8fffffff;
          }
          local_48 = &local_58;
          local_40 = &local_res20;
          local_res20 = uVar6;
          local_50 = uVar4;
          FUN_1434e5270(lVar5 + 0x30,*(undefined8 *)(lVar5 + 0x38),&local_48,
                        (uint)((*(longlong *)(uVar4 + 0x28) << 0x3c) >> 0x3c) ^
                        (*(uint *)(*(longlong *)(uVar4 + 0x38) + 0x1c) & 0xffffff) << 2 ^
                        *(uint *)(local_res10[0] + 0x1c) & 0xffffff);
          if (local_50 != 0) {
            if ((local_50 & 1) == 0) {
              if ((*(uint *)(local_50 + 8) & 0x3fffff) != 0) {
                *(uint *)(local_50 + 8) = *(uint *)(local_50 + 8) - 1;
                FUN_1434ef880();
              }
            }
            else {
              local_50 = local_50 - 1;
            }
          }
          piVar1 = (int *)(local_58 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        piVar1 = (int *)(local_res10[0] + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      } while ((uVar6 == 0) && (uVar8 = uVar8 + 1, uVar8 < uVar3));
    }
    return uVar6;
  }
  uVar6 = FUN_1435c82a0();
  return uVar6;
}



// FUNCTION 1435afd20 FUN_1435afd20 body=200 status=ok
// SIG undefined FUN_1435afd20(void)

longlong FUN_1435afd20(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 local_res8;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = 0;
  if (((byte)param_2[3] & 3) < 2) {
    lVar3 = FUN_1435c84e0(uVar1,param_1,param_2);
    return lVar3;
  }
  local_res8 = *(undefined8 *)
                (*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x130) + (longlong)*param_2 * 8);
  uVar2 = FUN_14358f8b0(&local_res8);
  if (uVar2 != 0) {
    local_24 = 0xffffffff;
    local_1c = 0;
    do {
      local_28 = FUN_14358f8b0(&local_res8);
      local_20 = param_2[2];
      lVar3 = FUN_1435c84e0(uVar1,param_1,&local_28);
      if (lVar3 != 0) {
        return lVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return 0;
}



// FUNCTION 1435afe40 FUN_1435afe40 body=187 status=ok
// SIG undefined FUN_1435afe40(void)

void FUN_1435afe40(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  puVar1 = (undefined8 *)param_1[7];
  *param_1 = &PTR_FUN_145b4a938;
  if (puVar1 != (undefined8 *)0x0) {
    if (puVar1[1] != 0) {
      Scaleform::GFx::ASUserData::SetLastObjectValue(puVar1[1],0,0,0);
      (**(code **)(*(longlong *)puVar1[1] + 8))((longlong *)puVar1[1],*puVar1,param_1);
      puVar1[1] = 0;
    }
    if (param_1[7] != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
  }
  FUN_14360e970(param_1 + 6);
  uVar2 = param_1[5];
  if (uVar2 != 0) {
    if ((uVar2 & 1) != 0) {
      param_1[5] = uVar2 - 1;
      FUN_1435ab0c0(param_1);
      return;
    }
    if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
      FUN_1434ef880();
    }
  }
  FUN_1435ab0c0(param_1);
  return;
}



// FUNCTION 1435aff10 FUN_1435aff10 body=50 status=ok
// SIG undefined FUN_1435aff10(void)

undefined8 * FUN_1435aff10(undefined8 *param_1,longlong param_2)

{
  param_1[4] = *(undefined8 *)(param_2 + 0x30);
  *param_1 = &PTR_FUN_145b4a938;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[5] = 0;
  param_1[6] = &DAT_1467d9aa0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 1435aff50 FUN_1435aff50 body=550 status=ok
// SIG undefined FUN_1435aff50(void)

undefined1 *
FUN_1435aff50(longlong *param_1,undefined1 *param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 uVar8;
  undefined1 local_res8 [8];
  undefined4 local_78 [2];
  longlong local_70;
  longlong *local_68;
  ulonglong local_58 [2];
  uint local_48 [2];
  int *local_40;
  
  plVar7 = param_1;
  if (param_1 != (longlong *)0x0) {
    if ((*(uint *)(param_1 + 1) & 0x3fffff) == 0) {
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
    }
    else {
      plVar7 = (longlong *)0x0;
    }
  }
  local_78[0] = 0xc;
  local_70 = 0;
  lVar2 = *(longlong *)(param_1[5] + 0x98);
  *(uint *)(param_1 + 1) = (int)param_1[1] + 1U & 0x8fffffff;
  local_58[0] = 0;
  local_58[1] = 0;
  local_48[0] = 0;
  local_40 = (int *)0x0;
  local_68 = param_1;
  FUN_1435b2320(local_58,*(undefined8 *)(param_1[5] + 0x98),local_78,param_3,1);
  if ((((ulonglong)param_1 & 1) == 0) && ((*(uint *)(param_1 + 1) & 0x3fffff) != 0)) {
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) - 1;
    FUN_1434ef880(param_1);
  }
  if ((((local_48[0] & 0x1f) == 0) || (local_58[0] == 1)) ||
     ((((byte)local_58[0] >> 1 & 1) != 0 && ((local_58[0] & 0xfffffffffffffffd) == 0)))) {
    if (((*(byte *)(param_1[5] + 0x88) >> 1 & 1) == 0) ||
       (cVar3 = Scaleform::GFx::AS3::Multiname::ContainsNamespace
                          (param_3,*(undefined8 *)(lVar2 + 0x1d8)), cVar3 == '\0')) {
      uVar6 = FUN_1435c8e40(local_78,0x420,lVar2);
      FUN_1435ccf60(lVar2,uVar6,&DAT_145b14e70);
      piVar1 = (int *)(local_70 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *param_2 = 0;
    }
    else {
      (**(code **)(*param_1 + 0x90))(param_1,param_3 + 0x10,param_4,0);
      *param_2 = 1;
    }
    goto LAB_1435b0118;
  }
  uVar8 = 1;
  uVar4 = (uint)local_58[0] & 3;
  if ((local_58[0] & 3) == 0) {
    puVar5 = (undefined1 *)FUN_1435ad410(local_58[0],local_res8,lVar2,param_4,local_48,0);
    uVar8 = *puVar5;
  }
  else {
    if (uVar4 == 1) {
      FUN_143590140(local_58[0] & 0xfffffffffffffffe,param_4);
      *param_2 = 1;
      goto LAB_1435b0118;
    }
    if (uVar4 == 2) {
      *param_2 = 0;
      goto LAB_1435b0118;
    }
  }
  *param_2 = uVar8;
LAB_1435b0118:
  if (9 < ((byte)local_48[0] & 0x1f)) {
    if ((local_48[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_48);
    }
    else {
      *local_40 = *local_40 + -1;
      if (*local_40 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    *(int *)(plVar7 + 1) = (int)plVar7[1] + -1;
  }
  return param_2;
}



// FUNCTION 1435b0180 FUN_1435b0180 body=968 status=ok
// SIG undefined FUN_1435b0180(void)

undefined1 * FUN_1435b0180(ulonglong param_1,undefined1 *param_2,undefined8 param_3,uint *param_4)

{
  undefined8 uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 local_res8 [8];
  ulonglong in_stack_ffffffffffffff58;
  ulonglong uStack_80;
  uint local_78;
  uint uStack_74;
  int *piStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulonglong local_58 [2];
  uint local_48 [2];
  int *local_40;
  
  uVar9 = param_1;
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 8) & 0x3fffff) == 0) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) + 1;
    }
    else {
      uVar9 = 0;
    }
  }
  local_78 = 0xc;
  piStack_70 = (int *)0x0;
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_48[0] = 0;
  local_40 = (int *)0x0;
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + 1U & 0x8fffffff;
  local_58[0] = 0;
  local_58[1] = 0;
  uStack_68 = param_1;
  FUN_1435b2320(local_58,uVar1,&local_78,param_3,in_stack_ffffffffffffff58 & 0xffffffff00000000);
  if (((param_1 & 1) == 0) && ((*(uint *)(param_1 + 8) & 0x3fffff) != 0)) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) - 1;
    FUN_1434ef880(param_1);
  }
  if ((((local_48[0] & 0x1f) == 0) || (local_58[0] == 1)) ||
     ((((byte)local_58[0] >> 1 & 1) != 0 && ((local_58[0] & 0xfffffffffffffffd) == 0)))) {
LAB_1435b04e9:
    *param_2 = 0;
  }
  else {
    local_78 = 0;
    piStack_70 = (int *)0x0;
    uVar3 = (uint)local_58[0] & 3;
    if ((local_58[0] & 3) == 0) {
      pcVar5 = (char *)FUN_1435ac440(local_58[0],local_res8,uVar1,&local_78,local_48,0,0);
      if (*pcVar5 == '\0') {
        uVar3 = local_78 & 0x1f;
        if (9 < uVar3) {
          if ((local_78 >> 9 & 1) == 0) {
            if (uVar3 == 10) {
              piVar2 = (int *)(uStack_68 + 0x18);
              *piVar2 = *piVar2 + -1;
              if (*piVar2 == 0) {
                FUN_14335f920();
              }
            }
            else {
              uVar7 = uStack_68;
              if (((((uVar3 == 0xb) || (uVar3 == 0xc)) || (uVar7 = uStack_60, uVar3 - 0xd < 2)) &&
                  (((uVar7 & 1) == 0 && (uVar7 != 0)))) && ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0))
              {
                *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
                FUN_1434ef880();
              }
            }
          }
          else {
            *piStack_70 = *piStack_70 + -1;
            if (*piStack_70 == 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
          }
        }
        goto LAB_1435b04e9;
      }
    }
    else if (uVar3 == 1) {
      puVar6 = (uint *)(local_58[0] & 0xfffffffffffffffe);
      if (puVar6 != &local_78) {
        local_78 = *puVar6;
        uStack_74 = puVar6[1];
        piStack_70 = *(int **)(puVar6 + 2);
        uStack_68 = *(ulonglong *)(puVar6 + 4);
        uStack_60 = *(ulonglong *)(puVar6 + 6);
        uVar3 = local_78 & 0x1f;
        if (9 < uVar3) {
          if ((local_78 >> 9 & 1) == 0) {
            if (uVar3 == 10) {
              *(int *)(uStack_68 + 0x18) = *(int *)(uStack_68 + 0x18) + 1;
            }
            else if (((10 < uVar3) &&
                     ((uVar7 = uStack_68, uVar3 < 0xd || (uVar7 = uStack_60, uVar3 < 0xf)))) &&
                    (uVar7 != 0)) {
              *(int *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1;
              *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) & 0x8fffffff;
            }
          }
          else {
            *piStack_70 = *piStack_70 + 1;
          }
        }
      }
    }
    else if (uVar3 == 2) {
      uStack_68 = local_58[0] & 0xfffffffffffffffd;
      if (uStack_68 != 0) {
        *(uint *)(uStack_68 + 8) = *(int *)(uStack_68 + 8) + 1U & 0x8fffffff;
      }
      local_78 = 0xc;
      uStack_60 = uStack_80;
    }
    uVar3 = *param_4;
    piVar2 = *(int **)(param_4 + 2);
    uVar7 = *(ulonglong *)(param_4 + 4);
    uVar8 = *(ulonglong *)(param_4 + 6);
    *(int **)(param_4 + 2) = piStack_70;
    uVar4 = uVar3 & 0x1f;
    *param_4 = local_78;
    *param_2 = 1;
    param_4[4] = (uint)uStack_68;
    param_4[5] = uStack_68._4_4_;
    param_4[6] = (uint)uStack_60;
    param_4[7] = uStack_60._4_4_;
    local_78 = uVar3;
    piStack_70 = piVar2;
    uStack_68 = uVar7;
    uStack_60 = uVar8;
    if (9 < uVar4) {
      if ((uVar3 >> 9 & 1) == 0) {
        if (uVar4 == 10) {
          piVar2 = (int *)(uVar7 + 0x18);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            FUN_14335f920();
          }
        }
        else {
          if ((uVar4 == 0xb) || (uVar4 == 0xc)) {
            uVar8 = uVar7;
            if ((uVar7 & 1) != 0) {
              uStack_68 = uVar7 - 1;
              goto LAB_1435b04ec;
            }
          }
          else {
            if (1 < uVar4 - 0xd) goto LAB_1435b04ec;
            if ((uVar8 & 1) != 0) {
              uStack_60 = uVar8 - 1;
              goto LAB_1435b04ec;
            }
          }
          if ((uVar8 != 0) && ((*(uint *)(uVar8 + 8) & 0x3fffff) != 0)) {
            *(uint *)(uVar8 + 8) = *(uint *)(uVar8 + 8) - 1;
            FUN_1434ef880();
          }
        }
      }
      else {
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        piStack_70 = (int *)0x0;
        uStack_68 = 0;
        uStack_60 = 0;
        local_78 = local_78 & 0xfffffde0;
      }
    }
  }
LAB_1435b04ec:
  if (9 < ((byte)local_48[0] & 0x1f)) {
    if ((local_48[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_48);
    }
    else {
      *local_40 = *local_40 + -1;
      if (*local_40 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
  }
  if (uVar9 != 0) {
    *(int *)(uVar9 + 8) = *(int *)(uVar9 + 8) + -1;
  }
  return param_2;
}



// FUNCTION 1435b0550 FUN_1435b0550 body=44 status=ok
// SIG undefined FUN_1435b0550(void)

undefined1 * FUN_1435b0550(longlong param_1,undefined1 *param_2,uint param_3,undefined8 param_4)

{
  FUN_143590140(param_4,(ulonglong)param_3 * 0x20 +
                        *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x28));
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1435b0590 FUN_1435b0590 body=162 status=ok
// SIG undefined FUN_1435b0590(void)

undefined8 FUN_1435b0590(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  ulonglong local_38 [2];
  uint local_28 [2];
  int *local_20;
  
  local_28[0] = 0;
  local_20 = (int *)0x0;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_1435b1b30(0,local_38,param_2,param_3 == '\0');
  if ((((local_28[0] & 0x1f) == 0) || (local_38[0] == 1)) ||
     ((((byte)local_38[0] >> 1 & 1) != 0 && ((local_38[0] & 0xfffffffffffffffd) == 0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  if (9 < (local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_28);
    }
    else {
      *local_20 = *local_20 + -1;
      if (*local_20 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        return uVar1;
      }
    }
  }
  return uVar1;
}



// FUNCTION 1435b0650 FUN_1435b0650 body=56 status=ok
// SIG undefined FUN_1435b0650(void)

undefined1 * FUN_1435b0650(longlong param_1,undefined1 *param_2)

{
  if ((*(byte *)(*(longlong *)(param_1 + 0x28) + 0x88) >> 1 & 1) != 0) {
    FUN_1435b1480();
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1435b0690 FUN_1435b0690 body=1510 status=ok
// SIG undefined FUN_1435b0690(void)

undefined1 * FUN_1435b0690(longlong *param_1,undefined1 *param_2,uint *param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  char *pcVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  char local_res20 [8];
  uint local_d8;
  undefined4 uStack_d4;
  int *piStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  uint local_b8 [2];
  int *local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  ulonglong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  undefined4 local_68 [2];
  ulonglong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar4 = *(longlong *)(param_1[5] + 0x98);
  iVar3 = *(int *)(param_1[5] + 0x90);
  lVar5 = *(longlong *)(lVar4 + 0x10);
  uVar15 = *(ulonglong *)(lVar4 + 0x1d8);
  uStack_90 = uVar15;
  if (iVar3 - 0x12U < 2) {
    param_4 = 2;
LAB_1435b06fd:
    local_b8[0] = 0;
    local_b0 = (int *)0x0;
    if (param_4 == 2) goto LAB_1435b0710;
    local_c8 = *(ulonglong *)(lVar5 + 200);
    local_d8 = 10;
    piStack_d0 = (int *)0x0;
    *(int *)(local_c8 + 0x18) = *(int *)(local_c8 + 0x18) + 1;
    local_98 = 0;
    if (uVar15 != 0) {
      *(uint *)(uVar15 + 8) = *(int *)(uVar15 + 8) + 1U & 0x8fffffff;
    }
    local_88 = CONCAT44(uStack_d4,10);
    uStack_80 = (int *)0x0;
    uStack_70 = uStack_c0;
    local_78 = local_c8;
    FUN_14360dee0(&local_88);
    FUN_1435aef90(&local_98,0);
    pcVar14 = (char *)(**(code **)(*param_1 + 0x58))(param_1,local_res20,&local_98,local_b8,0,0);
    cVar2 = *pcVar14;
    FUN_1434e6250(&local_98);
    FUN_1435920c0(&local_d8);
    if (cVar2 == '\0') {
      *param_2 = 0;
      goto LAB_1435b0c4f;
    }
    uVar13 = *param_3;
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar9 = param_3[6];
    uVar10 = param_3[7];
    *param_3 = local_b8[0];
    uVar16 = local_b8[0] & 0x1f;
    piVar1 = *(int **)(param_3 + 2);
    *(int **)(param_3 + 2) = local_b0;
    param_3[4] = local_a8;
    param_3[5] = uStack_a4;
    param_3[6] = uStack_a0;
    param_3[7] = uStack_9c;
    local_b8[0] = uVar13;
    local_b0 = piVar1;
    local_a8 = uVar7;
    uStack_a4 = uVar8;
    uStack_a0 = uVar9;
    uStack_9c = uVar10;
    if ((4 < uVar16) && (uVar16 != 10)) {
      local_88 = *(longlong *)(lVar5 + 0xc0);
      local_d8 = 0;
      piStack_d0 = (int *)0x0;
      local_98 = 10;
      *(int *)(local_88 + 0x18) = *(int *)(local_88 + 0x18) + 1;
      uStack_90 = 0;
      local_68[0] = 0;
      if (uVar15 != 0) {
        *(uint *)(uVar15 + 8) = *(int *)(uVar15 + 8) + 1U & 0x8fffffff;
      }
      local_58 = 0;
      uStack_50 = 0;
      local_60 = uVar15;
      FUN_1435901e0(&local_58,&local_98);
      FUN_1435aef90(local_68,0);
      pcVar14 = (char *)(**(code **)(*param_1 + 0x58))(param_1,local_res20,local_68,&local_d8,0,0);
      cVar2 = *pcVar14;
      FUN_1434e6250(local_68);
      FUN_1434e64f0(&local_98);
      if (cVar2 == '\0') {
        *param_2 = 0;
        FUN_1434e64f0(&local_d8);
        goto LAB_1435b0c4f;
      }
      goto LAB_1435b0c15;
    }
LAB_1435b0c4c:
    *param_2 = 1;
LAB_1435b0c4f:
    FUN_1434e64f0(local_b8);
  }
  else {
    if (param_4 != 0) goto LAB_1435b06fd;
    if (iVar3 != 9) {
      param_4 = 1;
      goto LAB_1435b06fd;
    }
LAB_1435b0710:
    local_b0 = (int *)0x0;
    local_b8[0] = 0;
    uVar6 = *(ulonglong *)(lVar5 + 0xc0);
    local_d8 = 10;
    piStack_d0 = (int *)0x0;
    *(int *)(uVar6 + 0x18) = *(int *)(uVar6 + 0x18) + 1;
    local_98 = 0;
    if (uVar15 != 0) {
      *(uint *)(uVar15 + 8) = *(int *)(uVar15 + 8) + 1U & 0x8fffffff;
    }
    local_88 = CONCAT44(uStack_d4,10);
    uStack_80 = (int *)0x0;
    uStack_70 = uStack_c0;
    *(int *)(uVar6 + 0x18) = *(int *)(uVar6 + 0x18) + 1;
    local_c8 = uVar6;
    local_78 = uVar6;
    FUN_1435aef90(&local_98,0);
    pcVar14 = (char *)(**(code **)(*param_1 + 0x58))(param_1,local_res8,&local_98,local_b8,0,0);
    local_res20[0] = *pcVar14;
    if (9 < ((byte)local_88 & 0x1f)) {
      if (((uint)local_88 >> 9 & 1) == 0) {
        FUN_1435920c0(&local_88);
      }
      else {
        *uStack_80 = *uStack_80 + -1;
        if (*uStack_80 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        local_88 = local_88 & 0xfffffffffffffde0;
        uStack_80 = (int *)0x0;
        local_78 = 0;
        uStack_70 = 0;
      }
    }
    if (uStack_90 != 0) {
      if ((uStack_90 & 1) == 0) {
        if ((*(uint *)(uStack_90 + 8) & 0x3fffff) != 0) {
          *(uint *)(uStack_90 + 8) = *(uint *)(uStack_90 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        uStack_90 = uStack_90 - 1;
      }
    }
    piVar1 = (int *)(uVar6 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(uVar6);
    }
    if (local_res20[0] == '\0') {
      *param_2 = 0;
    }
    else {
      uVar13 = *param_3;
      uVar11 = CONCAT44(uStack_a4,local_a8);
      uVar12 = CONCAT44(uStack_9c,uStack_a0);
      local_a8 = param_3[4];
      uStack_a4 = param_3[5];
      uStack_a0 = param_3[6];
      uStack_9c = param_3[7];
      piVar1 = *(int **)(param_3 + 2);
      *param_3 = local_b8[0];
      *(int **)(param_3 + 2) = local_b0;
      *(undefined8 *)(param_3 + 4) = uVar11;
      *(undefined8 *)(param_3 + 6) = uVar12;
      local_b0 = piVar1;
      if ((4 < (local_b8[0] & 0x1f)) && ((local_b8[0] & 0x1f) != 10)) {
        lVar4 = *(longlong *)(lVar5 + 200);
        local_d8 = 0;
        piStack_d0 = (int *)0x0;
        local_98 = 10;
        *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
        uStack_90 = 0;
        local_68[0] = 0;
        if (uVar15 != 0) {
          *(uint *)(uVar15 + 8) = *(int *)(uVar15 + 8) + 1U & 0x8fffffff;
        }
        local_88._0_4_ = (uint)lVar4;
        local_88._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
        local_58 = 10;
        uStack_54 = uStack_94;
        uStack_50 = 0;
        local_48 = (uint)local_88;
        uStack_44 = local_88._4_4_;
        uStack_40 = (undefined4)uStack_80;
        uStack_3c = uStack_80._4_4_;
        *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
        local_b8[0] = uVar13;
        local_88 = lVar4;
        local_60 = uVar15;
        FUN_1435aef90(local_68,0);
        pcVar14 = (char *)(**(code **)(*param_1 + 0x58))(param_1,local_res20,local_68,&local_d8,0,0)
        ;
        cVar2 = *pcVar14;
        FUN_1434e6250(local_68);
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(lVar4);
        }
        if (cVar2 != '\0') {
LAB_1435b0c15:
          uVar13 = *param_3;
          uVar15 = *(ulonglong *)(param_3 + 4);
          uVar6 = *(ulonglong *)(param_3 + 6);
          piVar1 = *(int **)(param_3 + 2);
          *param_3 = local_d8;
          *(int **)(param_3 + 2) = piStack_d0;
          param_3[4] = (uint)local_c8;
          param_3[5] = local_c8._4_4_;
          param_3[6] = (uint)uStack_c0;
          param_3[7] = uStack_c0._4_4_;
          local_d8 = uVar13;
          piStack_d0 = piVar1;
          local_c8 = uVar15;
          uStack_c0 = uVar6;
          FUN_1434e64f0(&local_d8);
          goto LAB_1435b0c4c;
        }
        uVar13 = local_d8 & 0x1f;
        *param_2 = 0;
        if (9 < uVar13) {
          if ((local_d8 >> 9 & 1) == 0) {
            if (uVar13 == 10) {
              piVar1 = (int *)(local_c8 + 0x18);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_14335f920();
              }
            }
            else if ((uVar13 == 0xb) || (uVar13 == 0xc)) {
              uVar15 = local_c8;
              if ((local_c8 & 1) == 0) {
LAB_1435b0a36:
                if ((uVar15 != 0) && ((*(uint *)(uVar15 + 8) & 0x3fffff) != 0)) {
                  *(uint *)(uVar15 + 8) = *(uint *)(uVar15 + 8) - 1;
                  FUN_1434ef880();
                }
              }
              else {
                local_c8 = local_c8 - 1;
              }
            }
            else if (uVar13 - 0xd < 2) {
              uVar15 = uStack_c0;
              if ((uStack_c0 & 1) == 0) goto LAB_1435b0a36;
              uStack_c0 = uStack_c0 - 1;
            }
          }
          else {
            *piStack_d0 = *piStack_d0 + -1;
            if (*piStack_d0 == 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
            local_d8 = local_d8 & 0xfffffde0;
            piStack_d0 = (int *)0x0;
            local_c8 = 0;
            uStack_c0 = 0;
          }
        }
        goto LAB_1435b0c4f;
      }
      *param_2 = 1;
      local_b8[0] = uVar13;
    }
    uVar13 = local_b8[0] & 0x1f;
    if (9 < uVar13) {
      if ((local_b8[0] >> 9 & 1) == 0) {
        if (uVar13 == 10) {
          piVar1 = (int *)(CONCAT44(uStack_a4,local_a8) + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else {
          if ((uVar13 == 0xb) || (uVar13 == 0xc)) {
            uVar15 = CONCAT44(uStack_a4,local_a8);
          }
          else {
            if (1 < uVar13 - 0xd) {
              return param_2;
            }
            uVar15 = CONCAT44(uStack_9c,uStack_a0);
          }
          if ((((uVar15 & 1) == 0) && (uVar15 != 0)) && ((*(uint *)(uVar15 + 8) & 0x3fffff) != 0)) {
            *(uint *)(uVar15 + 8) = *(uint *)(uVar15 + 8) - 1;
            FUN_1434ef880();
          }
        }
      }
      else {
        *local_b0 = *local_b0 + -1;
        if (*local_b0 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 1435b0c80 FUN_1435b0c80 body=104 status=ok
// SIG undefined FUN_1435b0c80(void)

void FUN_1435b0c80(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  
  if (((byte)*param_3 & 0x1f) < 10) {
    *param_3 = *param_3 & 0xffffffe0;
    return;
  }
  if ((*param_3 >> 9 & 1) != 0) {
    piVar1 = *(int **)(param_3 + 2);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    *param_3 = *param_3 & 0xfffffde0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    return;
  }
  FUN_1435920c0(param_3);
  *param_3 = *param_3 & 0xffffffe0;
  return;
}



// FUNCTION 1435b0cf0 FUN_1435b0cf0 body=1309 status=ok
// SIG undefined FUN_1435b0cf0(void)

undefined1 *
FUN_1435b0cf0(ulonglong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  char *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint *puVar8;
  undefined *puVar9;
  bool bVar10;
  undefined4 local_res8 [2];
  uint in_stack_ffffffffffffff58;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  uint uStack_84;
  int *piStack_80;
  ulonglong local_78;
  undefined8 uStack_70;
  uint local_68 [2];
  int *local_60;
  ulonglong uStack_58;
  ulonglong local_50;
  ulonglong local_48 [2];
  uint local_38 [2];
  int *local_30;
  
  local_68[0] = 0xc;
  local_38[0] = 0;
  local_30 = (int *)0x0;
  local_60 = (int *)0x0;
  local_48[0] = 0;
  local_48[1] = 0;
  if (param_1 != 0) {
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + 1U & 0x8fffffff;
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uStack_58 = param_1;
  FUN_1435b2320(local_48,lVar2,local_68,param_3,2);
  if ((((local_38[0] & 0x1f) == 0) || (local_48[0] == 1)) ||
     ((((byte)local_48[0] >> 1 & 1) != 0 && ((local_48[0] & 0xfffffffffffffffd) == 0)))) {
    lVar6 = FUN_1435caba0(lVar2,local_68);
    if ((((*(byte *)(lVar6 + 0x88) >> 1 & 1) == 0) && (4 < (local_68[0] & 0x1f))) &&
       ((local_68[0] & 0x1f) != 10)) {
      uVar5 = FUN_1435c8e40(&local_98,0x42d,lVar2);
      puVar9 = &DAT_145b14e70;
    }
    else {
      uVar5 = FUN_1435c8e40(&local_98,0x3ee,lVar2);
      puVar9 = &DAT_145b155b0;
    }
    FUN_1435ccf60(lVar2,uVar5,puVar9);
    uVar7 = CONCAT44(uStack_8c,uStack_90);
LAB_1435b10fb:
    piVar1 = (int *)(uVar7 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
LAB_1435b1106:
    *param_2 = *(char *)(lVar2 + 0xb8) == '\0';
  }
  else {
    local_88 = 0;
    piStack_80 = (int *)0x0;
    uVar3 = (uint)local_48[0] & 3;
    if ((local_48[0] & 3) != 0) {
      if (uVar3 == 1) {
        puVar8 = (uint *)(local_48[0] & 0xfffffffffffffffe);
        if (puVar8 != &local_88) {
          local_88 = *puVar8;
          uStack_84 = puVar8[1];
          piStack_80 = *(int **)(puVar8 + 2);
          local_78 = *(ulonglong *)(puVar8 + 4);
          uStack_70 = *(ulonglong *)(puVar8 + 6);
          uVar3 = local_88 & 0x1f;
          if (9 < uVar3) {
            if ((local_88 >> 9 & 1) == 0) {
              if (uVar3 == 10) {
                *(int *)(local_78 + 0x18) = *(int *)(local_78 + 0x18) + 1;
              }
              else if (((10 < uVar3) &&
                       ((uVar7 = local_78, uVar3 < 0xd || (uVar7 = uStack_70, uVar3 < 0xf)))) &&
                      (uVar7 != 0)) {
                *(int *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1;
                *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) & 0x8fffffff;
              }
            }
            else {
              *piStack_80 = *piStack_80 + 1;
            }
          }
        }
      }
      else if (uVar3 == 2) {
        uVar7 = local_48[0] & 0xfffffffffffffffd;
        if (uVar7 != 0) {
          *(uint *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1U & 0x8fffffff;
        }
        local_98._4_4_ = (undefined4)(uVar7 >> 0x20);
        local_88 = 0xc;
        local_78 = CONCAT44(local_98._4_4_,(uint)local_48[0]) & 0xfffffffffffffffd;
        uStack_70 = CONCAT44(uStack_8c,uStack_90);
        local_98 = uVar7;
      }
LAB_1435b0e94:
      uVar3 = local_88 & 0x1f;
      if (uVar3 == 0) {
LAB_1435b0ef9:
        uVar5 = FUN_1435c8e40(&local_98,0x3ee,lVar2);
        FUN_1435ccf60(lVar2,uVar5,&DAT_145b155b0);
        piVar1 = (int *)(CONCAT44(uStack_8c,uStack_90) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else {
        if (uVar3 == 0xc) {
          bVar10 = local_78 == 0;
LAB_1435b0ebb:
          if (bVar10) goto LAB_1435b0ef9;
        }
        else if (uVar3 == 10) {
          bVar10 = local_78 == *(longlong *)(local_78 + 8) + 0x80U;
          goto LAB_1435b0ebb;
        }
        local_res8[0] = param_5;
        FUN_1435ce880(lVar2,&local_88,local_68,param_4,local_res8,param_6,
                      in_stack_ffffffffffffff58 & 0xffffff00,1);
      }
      uVar3 = local_88 & 0x1f;
      if (9 < uVar3) {
        if ((local_88 >> 9 & 1) == 0) {
          uVar7 = local_78;
          if (uVar3 == 10) goto LAB_1435b10fb;
          if ((((uVar3 == 0xb) || (uVar3 == 0xc)) || (uVar7 = uStack_70, uVar3 - 0xd < 2)) &&
             ((((uVar7 & 1) == 0 && (uVar7 != 0)) && ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0)))) {
            *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *piStack_80 = *piStack_80 + -1;
          if (*piStack_80 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
        }
      }
      goto LAB_1435b1106;
    }
    in_stack_ffffffffffffff58 = 0;
    pcVar4 = (char *)FUN_1435ac440(local_48[0],local_res8,lVar2,&local_88,local_38,0,1);
    if (*pcVar4 != '\0') goto LAB_1435b0e94;
    uVar3 = local_88 & 0x1f;
    *param_2 = 0;
    if (9 < uVar3) {
      if ((local_88 >> 9 & 1) == 0) {
        if (uVar3 == 10) {
          piVar1 = (int *)(local_78 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else if ((uVar3 == 0xb) || (uVar3 == 0xc)) {
          uVar7 = local_78;
          if ((local_78 & 1) == 0) {
LAB_1435b1052:
            if ((uVar7 != 0) && ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0)) {
              *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            local_78 = local_78 - 1;
          }
        }
        else if (uVar3 - 0xd < 2) {
          uVar7 = uStack_70;
          if ((uStack_70 & 1) == 0) goto LAB_1435b1052;
          uStack_70 = uStack_70 - 1;
        }
      }
      else {
        *piStack_80 = *piStack_80 + -1;
        if (*piStack_80 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        local_88 = local_88 & 0xfffffde0;
        piStack_80 = (int *)0x0;
        local_78 = 0;
        uStack_70 = 0;
      }
    }
  }
  uVar3 = local_68[0] & 0x1f;
  if (9 < uVar3) {
    if ((local_68[0] >> 9 & 1) == 0) {
      if (uVar3 == 10) {
        piVar1 = (int *)(uStack_58 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else {
        if ((uVar3 == 0xb) || (uVar3 == 0xc)) {
          uVar7 = uStack_58;
          if ((uStack_58 & 1) != 0) {
            uStack_58 = uStack_58 - 1;
            goto LAB_1435b11bd;
          }
        }
        else {
          if (1 < uVar3 - 0xd) goto LAB_1435b11bd;
          uVar7 = local_50;
          if ((local_50 & 1) != 0) {
            local_50 = local_50 - 1;
            goto LAB_1435b11bd;
          }
        }
        if ((uVar7 != 0) && ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
          FUN_1434ef880();
        }
      }
    }
    else {
      *local_60 = *local_60 + -1;
      if (*local_60 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_68[0] = local_68[0] & 0xfffffde0;
      local_60 = (int *)0x0;
      uStack_58 = 0;
      local_50 = 0;
    }
  }
LAB_1435b11bd:
  if (9 < ((byte)local_38[0] & 0x1f)) {
    if ((local_38[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_38);
    }
    else {
      *local_30 = *local_30 + -1;
      if (*local_30 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
  }
  return param_2;
}



// FUNCTION 1435b1220 ShutdownModule body=3 status=ok
// SIG undefined ShutdownModule(void)

void FSettingsModule::ShutdownModule(void)

{
  return;
}



// FUNCTION 1435b1240 GetName body=28 status=ok
// SIG undefined GetName(void)

undefined8 Scaleform::GFx::AS3::Object::GetName(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x20))();
  return param_2;
}



// FUNCTION 1435b1270 ToString body=28 status=ok
// SIG undefined ToString(void)

undefined8 FOnlineSessionInfoEOS::ToString(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))();
  return param_2;
}



// FUNCTION 1435b12c0 FUN_1435b12c0 body=168 status=ok
// SIG undefined FUN_1435b12c0(void)

void FUN_1435b12c0(longlong param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  undefined *puVar5;
  int iVar6;
  uint local_18 [2];
  longlong local_10;
  
  lVar4 = *param_2;
  puVar1 = (undefined8 *)(param_1 + 0x30);
  *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
  uVar3 = *(uint *)(lVar4 + 0x1c);
  puVar5 = (undefined *)*puVar1;
  local_18[0] = (uint)(param_4 == 4);
  local_10 = lVar4;
  if (puVar5 == &DAT_1467d9aa0) {
    iVar6 = 8;
  }
  else {
    if (*(uint *)(puVar5 + 8) < *(uint *)(puVar5 + 0x18)) goto LAB_1435b1332;
    iVar6 = *(int *)(puVar5 + 0x30) * 2 + 2;
  }
  FUN_143614420(puVar1,iVar6,0,0);
LAB_1435b1332:
  FUN_143613ea0(*puVar1,local_18,param_3,uVar3 & 0xffffff);
  piVar2 = (int *)(lVar4 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920(lVar4);
  }
  return;
}



// FUNCTION 1435b1370 FUN_1435b1370 body=262 status=ok
// SIG undefined FUN_1435b1370(void)

void FUN_1435b1370(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined *puVar4;
  char *pcVar5;
  int iVar6;
  undefined1 local_res8 [8];
  longlong local_28;
  uint local_20 [2];
  longlong local_18;
  
  lVar3 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218);
  local_28 = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  pcVar5 = (char *)FUN_1435911f0(param_2,local_res8,&local_28);
  lVar3 = local_28;
  if (*pcVar5 == '\0') goto LAB_1435b1452;
  local_18 = local_28;
  local_20[0] = (uint)(param_4 == 4);
  *(int *)(local_28 + 0x18) = *(int *)(local_28 + 0x18) + 1;
  uVar2 = *(uint *)(local_28 + 0x1c);
  puVar4 = *(undefined **)(param_1 + 0x30);
  if (puVar4 == &DAT_1467d9aa0) {
    iVar6 = 8;
LAB_1435b141c:
    FUN_143614420(param_1 + 0x30,iVar6,0,0);
  }
  else if (*(uint *)(puVar4 + 0x18) <= *(uint *)(puVar4 + 8)) {
    iVar6 = *(int *)(puVar4 + 0x30) * 2 + 2;
    goto LAB_1435b141c;
  }
  FUN_143613ea0(*(undefined8 *)(param_1 + 0x30),local_20,param_3,uVar2 & 0xffffff);
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar3);
  }
LAB_1435b1452:
  piVar1 = (int *)(local_28 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435b1480 FUN_1435b1480 body=191 status=ok
// SIG undefined FUN_1435b1480(void)

undefined1 * FUN_1435b1480(longlong param_1,undefined1 *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 uVar4;
  char *pcVar5;
  undefined1 local_res8 [8];
  longlong local_res18;
  undefined4 local_18 [2];
  longlong local_10;
  
  lVar3 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218);
  local_res18 = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  pcVar5 = (char *)FUN_1435911f0(param_3 + 0x10,local_res8,&local_res18);
  lVar3 = local_res18;
  if (*pcVar5 == '\0') {
    *param_2 = 0;
  }
  else {
    local_18[0] = 0;
    local_10 = local_res18;
    *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
    if (*(int *)(*(longlong *)(param_1 + 0x30) + 8) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_143612330(*(longlong *)(param_1 + 0x30),local_18,
                            *(uint *)(local_res18 + 0x1c) & 0xffffff);
    }
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    *param_2 = uVar4;
    if (iVar2 == 0) {
      FUN_14335f920(lVar3);
    }
  }
  piVar1 = (int *)(local_res18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return param_2;
}



// FUNCTION 1435b1550 FUN_1435b1550 body=325 status=ok
// SIG undefined FUN_1435b1550(void)

void FUN_1435b1550(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48 [2];
  ulonglong local_40;
  uint local_38 [2];
  int *piStack_30;
  longlong local_28;
  undefined8 uStack_20;
  
  local_40 = *(ulonglong *)(*(longlong *)(param_1[5] + 0x98) + 0x1d8);
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 200);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  local_48[0] = 0;
  if (local_40 != 0) {
    *(uint *)(local_40 + 8) = *(int *)(local_40 + 8) + 1U & 0x8fffffff;
  }
  local_38[0] = 10;
  piStack_30 = (int *)0x0;
  uStack_20 = CONCAT44(uStack_4c,uStack_50);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  local_28 = lVar2;
  FUN_1435aef90(local_48,0);
  (**(code **)(*param_1 + 0x58))(param_1,local_res8,local_48,param_2,0,0);
  if (9 < ((byte)local_38[0] & 0x1f)) {
    if ((local_38[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_38);
    }
    else {
      *piStack_30 = *piStack_30 + -1;
      if (*piStack_30 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_38[0] = local_38[0] & 0xfffffde0;
      piStack_30 = (int *)0x0;
      local_28 = 0;
      uStack_20 = 0;
    }
  }
  if (local_40 != 0) {
    if ((local_40 & 1) == 0) {
      if ((*(uint *)(local_40 + 8) & 0x3fffff) != 0) {
        *(uint *)(local_40 + 8) = *(uint *)(local_40 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      local_40 = local_40 - 1;
    }
  }
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar2);
  }
  return;
}



// FUNCTION 1435b16a0 FUN_1435b16a0 body=341 status=ok
// SIG undefined FUN_1435b16a0(void)

void FUN_1435b16a0(longlong param_1,undefined8 param_2,code *param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar5 = 0;
  lVar1 = *(longlong *)(param_1 + 0x30);
  uVar6 = (*(longlong *)(lVar1 + 0x10) - lVar1) + -0x40 >> 3;
  uVar7 = *(ulonglong *)(lVar1 + 0x40);
  while (uVar7 == 0) {
    uVar5 = uVar5 + 1;
    if (uVar6 <= uVar5) goto LAB_1435b17ab;
    uVar7 = *(ulonglong *)(lVar1 + 0x40 + uVar5 * 8);
  }
  uVar3 = FUN_143561b20(uVar7);
  while (uVar5 < uVar6) {
    puVar4 = (uint *)((uVar5 * 0x40 + uVar3) * 0x20 + *(longlong *)(lVar1 + 0x28));
    uVar2 = *puVar4 & 0x1f;
    if (10 < uVar2) {
      if (uVar2 < 0xd) {
        puVar4 = puVar4 + 4;
      }
      else {
        if (0xe < uVar2) goto LAB_1435b175c;
        puVar4 = puVar4 + 6;
      }
      if (*(longlong *)puVar4 != 0) {
        (*param_3)(param_2);
      }
    }
LAB_1435b175c:
    if (uVar6 <= uVar5) break;
    if (uVar3 < 0x3f) {
      uVar7 = uVar7 & ~(1L << (uVar3 & 0x3f));
    }
    else {
      uVar5 = uVar5 + 1;
      if (uVar6 <= uVar5) break;
      uVar7 = *(ulonglong *)(lVar1 + 0x40 + uVar5 * 8);
    }
    while (uVar7 == 0) {
      uVar5 = uVar5 + 1;
      if (uVar6 <= uVar5) goto LAB_1435b17ab;
      uVar7 = *(ulonglong *)(lVar1 + 0x40 + uVar5 * 8);
    }
    uVar3 = FUN_143561b20(uVar7);
  }
LAB_1435b17ab:
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_14360fcc0(*(longlong *)(param_1 + 0x28),param_2,param_1,param_3);
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (*param_3)(param_2,(longlong *)(param_1 + 0x28));
  }
  return;
}



// FUNCTION 1435b1820 FUN_1435b1820 body=55 status=ok
// SIG undefined FUN_1435b1820(void)

void FUN_1435b1820(longlong param_1,undefined8 param_2,int param_3)

{
  FUN_143590250(param_2,*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x20) + 8 +
                        (((ulonglong)(param_3 - 1U) & 0xffffffffffffffc0) +
                        (ulonglong)(param_3 - 1U & 0x3f)) * 0x10);
  return;
}



// FUNCTION 1435b1860 FUN_1435b1860 body=514 status=ok
// SIG undefined FUN_1435b1860(void)

int * FUN_1435b1860(longlong param_1,int *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (param_3 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
    uVar5 = 0;
    uVar6 = (*(longlong *)(lVar1 + 0x10) - lVar1) + -0x40 >> 3;
    uVar7 = *(ulonglong *)(lVar1 + 0x40);
    while (uVar7 == 0) {
      uVar5 = uVar5 + 1;
      if (uVar6 <= uVar5) goto LAB_1435b1a3f;
      uVar7 = *(ulonglong *)(lVar1 + 0x40 + uVar5 * 8);
    }
    uVar3 = FUN_143561b20(uVar7);
    if (uVar5 < uVar6) {
      lVar2 = *(longlong *)(lVar1 + 0x20);
      while( true ) {
        if ((*(byte *)(lVar2 + (uVar5 * 0x40 + uVar3) * 0x10) & 1) == 0) goto LAB_1435b1988;
        if (uVar6 <= uVar5) break;
        if (uVar3 < 0x3f) {
          uVar7 = uVar7 & ~(1L << (uVar3 & 0x3f));
        }
        else {
          uVar5 = uVar5 + 1;
          if (uVar6 <= uVar5) break;
          uVar7 = *(ulonglong *)(lVar1 + 0x40 + uVar5 * 8);
        }
        while (uVar7 == 0) {
          uVar5 = uVar5 + 1;
          if (uVar6 <= uVar5) goto LAB_1435b1a3f;
          uVar7 = *(ulonglong *)(lVar1 + 0x40 + uVar5 * 8);
        }
        uVar3 = FUN_143561b20(uVar7);
        if (uVar6 <= uVar5) break;
      }
    }
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x30);
    uVar4 = param_3 - 1U & 0x3f;
    uVar5 = (ulonglong)(param_3 - 1U >> 6);
    uVar6 = (*(longlong *)(lVar1 + 0x10) - lVar1) + -0x40 >> 3;
    if (uVar5 < uVar6) {
      if (uVar4 < 0x3f) {
        uVar7 = *(ulonglong *)(lVar1 + 0x40 + uVar5 * 8) & ~((1L << (sbyte)uVar4) - 1U) &
                ~(1L << uVar4);
      }
      else {
        uVar5 = uVar5 + 1;
        if (uVar6 <= uVar5) goto LAB_1435b1a3f;
        uVar7 = *(ulonglong *)(lVar1 + 0x40 + uVar5 * 8);
      }
      while (uVar7 == 0) {
        uVar5 = uVar5 + 1;
        if (uVar6 <= uVar5) goto LAB_1435b1a3f;
        uVar7 = *(ulonglong *)(lVar1 + 0x40 + uVar5 * 8);
      }
      uVar3 = FUN_143561b20(uVar7);
      if (uVar5 < uVar6) {
        lVar2 = *(longlong *)(lVar1 + 0x20);
        while( true ) {
          if ((*(byte *)(lVar2 + (uVar5 * 0x40 + uVar3) * 0x10) & 1) == 0) goto LAB_1435b1988;
          if (uVar6 <= uVar5) break;
          if (uVar3 < 0x3f) {
            uVar7 = uVar7 & ~(1L << (uVar3 & 0x3f));
          }
          else {
            uVar5 = uVar5 + 1;
            if (uVar6 <= uVar5) break;
            uVar7 = *(ulonglong *)(lVar1 + 0x40 + uVar5 * 8);
          }
          while (uVar7 == 0) {
            uVar5 = uVar5 + 1;
            if (uVar6 <= uVar5) goto LAB_1435b1a3f;
            uVar7 = *(ulonglong *)(lVar1 + 0x40 + uVar5 * 8);
          }
          uVar3 = FUN_143561b20(uVar7);
          if (uVar6 <= uVar5) break;
        }
      }
    }
  }
  goto LAB_1435b1a3f;
LAB_1435b1988:
  if (uVar5 < uVar6) {
    *param_2 = (int)uVar3 + 1 + (int)uVar5 * 0x40;
    return param_2;
  }
LAB_1435b1a3f:
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1435b1a70 FUN_1435b1a70 body=34 status=ok
// SIG undefined FUN_1435b1a70(void)

void FUN_1435b1a70(longlong *param_1,undefined8 param_2,uint param_3)

{
  undefined1 local_res20 [8];
  
  if (param_3 != 0) {
    (**(code **)(*param_1 + 0x30))(param_1,local_res20,(ulonglong)param_3 - 1,param_2);
  }
  return;
}



// FUNCTION 1435b1aa0 FUN_1435b1aa0 body=48 status=ok
// SIG undefined FUN_1435b1aa0(void)

undefined8 FUN_1435b1aa0(longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  FUN_1436143a0(*(longlong *)(param_1 + 0x28),param_2,
                ((ulonglong)param_3 - 1) +
                (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x28) + 0x70),param_4,param_1);
  return param_2;
}



// FUNCTION 1435b1ae0 FUN_1435b1ae0 body=61 status=ok
// SIG undefined FUN_1435b1ae0(void)

void FUN_1435b1ae0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1[0x15] == 0) {
    (**(code **)(*plVar1 + 0x50))(plVar1);
  }
  FUN_1435903c0(param_2,plVar1[0x15]);
  return;
}



// FUNCTION 1435b1b30 FUN_1435b1b30 body=562 status=ok
// SIG undefined FUN_1435b1b30(void)

void FUN_1435b1b30(longlong *param_1,ulonglong *param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong local_res8;
  ulonglong local_48;
  ulonglong local_40;
  uint local_38 [2];
  int *local_30;
  longlong *local_28;
  
  local_res8 = 0;
  local_48 = FUN_1435af580(*(undefined8 *)(param_1[5] + 0x98),param_1[5],param_3,&local_res8,param_1
                          );
  if (local_48 == 0) {
    lVar1 = param_1[5];
    if (((*(byte *)(lVar1 + 0x88) >> 1 & 1) != 0) &&
       (((param_4 != 2 || (*(int *)(lVar1 + 0x90) != 0x12)) ||
        ((~(*(byte *)(lVar1 + 0x88) >> 5) & 1) == 0)))) {
      puVar4 = (ulonglong *)(**(code **)(*param_1 + 0xb0))(param_1,&local_48,param_3);
      *param_2 = *puVar4;
      *param_2 = *puVar4;
      *param_2 = *puVar4;
      param_2[1] = puVar4[1];
      FUN_143590140(param_2 + 2,puVar4 + 2);
      if (9 < ((byte)local_38[0] & 0x1f)) {
        if ((local_38[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_38);
        }
        else {
          *local_30 = *local_30 + -1;
          if (*local_30 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
        }
      }
    }
    if (((((param_2[2] & 0x1f) == 0) || (uVar2 = *param_2, uVar2 == 1)) ||
        ((((byte)uVar2 >> 1 & 1) != 0 && ((uVar2 & 0xfffffffffffffffd) == 0)))) &&
       ((param_4 != 1 && (plVar6 = (longlong *)param_1[5], plVar6 != (longlong *)0x0)))) {
      while( true ) {
        if (plVar6[0x15] == 0) {
          (**(code **)(*plVar6 + 0x50))(plVar6);
        }
        plVar5 = (longlong *)FUN_1435b3ae0(plVar6[0x15]);
        if (plVar5 == param_1) break;
        FUN_1435b1b30(plVar5,param_2,param_3,param_4);
        cVar3 = Scaleform::GFx::AS3::PropRef::operator_bool(param_2);
        if (cVar3 != '\0') {
          return;
        }
        plVar6 = (longlong *)plVar6[0x16];
        if (plVar6 == (longlong *)0x0) {
          return;
        }
      }
    }
  }
  else {
    local_40 = local_res8;
    *(uint *)(param_1 + 1) = (int)param_1[1] + 1U & 0x8fffffff;
    *param_2 = local_48;
    param_2[1] = local_res8;
    local_38[0] = 0xc;
    local_30 = (int *)0x0;
    local_28 = param_1;
    FUN_143590140(param_2 + 2,local_38);
    if (9 < ((byte)local_38[0] & 0x1f)) {
      if ((local_38[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_38);
        return;
      }
      *local_30 = *local_30 + -1;
      if (*local_30 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1435b1d70 FUN_1435b1d70 body=421 status=ok
// SIG undefined FUN_1435b1d70(void)

ulonglong * FUN_1435b1d70(ulonglong param_1,ulonglong *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  longlong local_res18 [2];
  
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218);
  local_res18[0] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  pcVar5 = (char *)FUN_1435911f0(param_3 + 0x10,local_res8,local_res18);
  plVar10 = (longlong *)0x0;
  if (*pcVar5 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    param_2[3] = 0;
  }
  else {
    *(int *)(local_res18[0] + 0x18) = *(int *)(local_res18[0] + 0x18) + 1;
    lVar2 = *(longlong *)(param_1 + 0x30);
    if ((*(int *)(lVar2 + 8) != 0) &&
       (uVar12 = *(uint *)(local_res18[0] + 0x1c) & 0xffffff, *(int *)(lVar2 + 8) != 0)) {
      uVar6 = (ulonglong)(*(uint *)(lVar2 + 0x30) & uVar12);
      plVar7 = (longlong *)(uVar6 * 0x10 + *(longlong *)(lVar2 + 0x38));
      if (*plVar7 != -1) {
        plVar9 = plVar10;
        while( true ) {
          plVar8 = plVar7;
          lVar3 = *plVar8;
          lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 8 + lVar3 * 0x10);
          uVar11 = *(uint *)(lVar4 + 0x1c) & 0xffffff;
          if ((plVar9 == (longlong *)0x0) && (uVar6 != (*(uint *)(lVar2 + 0x30) & uVar11)))
          goto LAB_1435b1eb9;
          if ((uVar11 == uVar12) && (lVar4 == local_res18[0])) break;
          uVar6 = plVar8[1];
          if (uVar6 == 0xffffffffffffffff) goto LAB_1435b1eb9;
          plVar7 = (longlong *)(uVar6 * 0x10 + *(longlong *)(lVar2 + 0x38));
          plVar9 = plVar8;
        }
        if (lVar3 != -1) {
          plVar10 = (longlong *)(lVar3 * 0x20 + *(longlong *)(lVar2 + 0x28));
        }
      }
    }
LAB_1435b1eb9:
    *param_2 = (ulonglong)plVar10 | 1;
    param_2[1] = 0xffffffffffffffff;
    *(undefined4 *)(param_2 + 2) = 0xc;
    param_2[3] = 0;
    param_2[4] = param_1;
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + 1U & 0x8fffffff;
    piVar1 = (int *)(local_res18[0] + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(local_res18[0]);
    }
  }
  piVar1 = (int *)(local_res18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return param_2;
}



// FUNCTION 1435b1f30 FUN_1435b1f30 body=202 status=ok
// SIG undefined FUN_1435b1f30(void)

void FUN_1435b1f30(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 local_res8 [2];
  
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    if (puVar1[1] != 0) {
      Scaleform::GFx::ASUserData::SetLastObjectValue(puVar1[1],0,0,0);
      (**(code **)(*(longlong *)puVar1[1] + 8))((longlong *)puVar1[1],*puVar1,param_1);
      puVar1[1] = 0;
    }
    if (*(longlong *)(param_1 + 0x38) != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
  }
  local_res8[0] = 0x152;
  plVar2 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x10,local_res8);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = param_2;
    plVar2[1] = param_3;
  }
  *(longlong **)(param_1 + 0x38) = plVar2;
  if (param_3 != 0) {
    Scaleform::GFx::ASUserData::SetLastObjectValue
              (param_3,*(undefined8 *)(param_2 + 0x40),param_1,param_4);
  }
  return;
}



// FUNCTION 1435b2010 FUN_1435b2010 body=73 status=ok
// SIG undefined FUN_1435b2010(void)

void FUN_1435b2010(undefined8 *param_1,undefined8 param_2)

{
  if (param_1[1] != 0) {
    Scaleform::GFx::ASUserData::SetLastObjectValue(param_1[1],0,0,0);
    (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],*param_1,param_2);
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 1435b2060 FUN_1435b2060 body=216 status=ok
// SIG undefined FUN_1435b2060(void)

longlong FUN_1435b2060(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = 0;
  plVar3 = (longlong *)FUN_1435c7e00(param_1,param_3,param_4);
  lVar4 = lVar6;
  if (plVar3 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
  }
  lVar7 = param_2[1];
  if (lVar7 != 0) {
    while( true ) {
      lVar1 = *(longlong *)(*param_2 + -8 + lVar7 * 8);
      plVar2 = *(longlong **)(lVar1 + 0x28);
      if (((plVar3 == (longlong *)0x0) ||
          (lVar5 = (**(code **)(*plVar2 + 0x38))(plVar2), lVar4 == lVar5)) &&
         (lVar6 = FUN_1435af7c0(param_1,plVar2,param_3,param_4,lVar1), lVar6 != 0)) break;
      lVar7 = lVar7 + -1;
      if (lVar7 == 0) {
        return lVar6;
      }
    }
    return lVar6;
  }
  return 0;
}



// FUNCTION 1435b2140 FUN_1435b2140 body=162 status=ok
// SIG undefined FUN_1435b2140(void)

void FUN_1435b2140(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (*param_3 - param_3[1]) + 0x20 >> 5;
  if (lVar2 != 0) {
    lVar3 = lVar2 << 5;
    do {
      FUN_1435b2460(param_1,param_2,param_3[1] + -0x20 + lVar3,param_4,0);
      cVar1 = Scaleform::GFx::AS3::PropRef::operator_bool(param_1);
      if (cVar1 != '\0') {
        return;
      }
      lVar3 = lVar3 + -0x20;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1435b21f0 FUN_1435b21f0 body=286 status=ok
// SIG undefined FUN_1435b21f0(void)

void FUN_1435b21f0(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  longlong *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 local_48 [2];
  undefined8 local_40;
  ulonglong local_38;
  
  lVar4 = 0;
  if (param_5 != (longlong *)0x0) {
    lVar4 = (**(code **)(*param_5 + 0x38))(param_5);
  }
  uVar1 = param_3[1];
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = *(ulonglong *)(*param_3 + uVar6 * 8);
      if ((param_5 == (longlong *)0x0) ||
         (lVar5 = (**(code **)(**(longlong **)(uVar2 + 0x28) + 0x38))(), lVar4 == lVar5)) {
        local_48[0] = 0xc;
        local_40 = 0;
        if (uVar2 != 0) {
          *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
        }
        local_38 = uVar2;
        FUN_1435b2460(param_1,param_2,local_48,param_4,0);
        if ((((uVar2 & 1) == 0) && (uVar2 != 0)) && ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
          FUN_1434ef880(uVar2);
        }
        cVar3 = Scaleform::GFx::AS3::PropRef::operator_bool(param_1);
        if (cVar3 != '\0') {
          return;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  return;
}



// FUNCTION 1435b2320 FUN_1435b2320 body=302 status=ok
// SIG undefined FUN_1435b2320(void)

void FUN_1435b2320(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_res18 [2];
  uint local_48 [2];
  int *local_40;
  
  if ((((byte)*param_3 & 0x1f) == 0xc) && (*(longlong *)(param_3 + 4) != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  uVar3 = FUN_1435caba0(param_2,param_3);
  uVar5 = 0;
  local_res18[0] = 0;
  if (bVar1) {
    uVar5 = *(undefined8 *)(param_3 + 4);
  }
  lVar4 = FUN_1435af580(param_2,uVar3,param_4,local_res18,uVar5);
  lVar2 = local_res18[0];
  if (lVar4 == 0) {
    FUN_1435b27d0(param_1,param_2,uVar5,uVar3,param_4,param_5);
  }
  else {
    FUN_14360ab50(local_48,param_3);
    *param_1 = lVar4;
    param_1[1] = lVar2;
    FUN_143590140(param_1 + 2,local_48);
    if (9 < ((byte)local_48[0] & 0x1f)) {
      if ((local_48[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_48);
      }
      else {
        *local_40 = *local_40 + -1;
        if (*local_40 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
      }
    }
  }
  return;
}



// FUNCTION 1435b2460 FUN_1435b2460 body=873 status=ok
// SIG undefined FUN_1435b2460(void)

void FUN_1435b2460(ulonglong *param_1,undefined8 param_2,uint *param_3,undefined8 param_4,
                  int param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong local_res18;
  ulonglong local_88;
  ulonglong uStack_80;
  uint local_78 [2];
  int *local_70;
  ulonglong local_58;
  ulonglong local_50;
  uint local_48 [2];
  int *local_40;
  
  plVar5 = (longlong *)FUN_1435caba0(param_2,param_3);
  local_res18 = 0;
  if (((byte)*param_3 & 0x1f) == 0xc) {
    uVar6 = *(undefined8 *)(param_3 + 4);
  }
  else {
    uVar6 = 0;
  }
  local_88 = FUN_1435af580(param_2,plVar5,param_4,&local_res18,uVar6);
  if (local_88 == 0) {
    if (((int)plVar5[0x12] == 0x17) || ((*param_3 >> 8 & 1) != 0)) {
      if (((((byte)*param_3 & 0x1f) == 0xc) && ((*(byte *)(plVar5 + 0x11) >> 1 & 1) != 0)) &&
         ((param_5 != 2 || (cVar4 = FUN_1434ef480(param_3), cVar4 == '\0')))) {
        uVar6 = (**(code **)(**(longlong **)(param_3 + 4) + 0xb0))
                          (*(longlong **)(param_3 + 4),&local_58,param_4);
        FUN_14360c630(param_1,uVar6);
        if (9 < ((byte)local_48[0] & 0x1f)) {
          if ((local_48[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_48);
          }
          else {
            *local_40 = *local_40 + -1;
            if (*local_40 == 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
          }
        }
      }
      if (((((param_1[2] & 0x1f) == 0) || (uVar1 = *param_1, uVar1 == 1)) ||
          ((((byte)uVar1 >> 1 & 1) != 0 && ((uVar1 & 0xfffffffffffffffd) == 0)))) && (param_5 != 1))
      {
        local_78[0] = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_70 = (int *)0x0;
        do {
          if (plVar5[0x15] == 0) {
            (**(code **)(*plVar5 + 0x50))(plVar5);
          }
          uVar6 = FUN_1435b3ae0(plVar5[0x15]);
          FUN_1435b1b30(uVar6,&local_88,param_4,param_5);
          if ((((local_78[0] & 0x1f) == 0) || (local_88 == 1)) ||
             ((((byte)local_88 >> 1 & 1) != 0 && ((local_88 & 0xfffffffffffffffd) == 0)))) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            local_58 = 0;
            local_50 = 0;
            FUN_14360ab50(local_48,param_3);
            *param_1 = local_58;
            param_1[1] = local_50;
            FUN_143590140(param_1 + 2,local_48);
            if (9 < ((byte)local_48[0] & 0x1f)) {
              if ((local_48[0] >> 9 & 1) == 0) {
                FUN_1435920c0(local_48);
              }
              else {
                *local_40 = *local_40 + -1;
                if (*local_40 == 0) {
                  (**(code **)(*DAT_146b62f28 + 0x60))();
                }
              }
            }
            break;
          }
          plVar5 = (longlong *)plVar5[0x16];
        } while (plVar5 != (longlong *)0x0);
        if (9 < ((byte)local_78[0] & 0x1f)) {
          if ((local_78[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_78);
          }
          else {
            *local_70 = *local_70 + -1;
            if (*local_70 == 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
          }
        }
        if ((((((param_1[2] & 0x1f) == 0) || (uVar1 = *param_1, uVar1 == 1)) ||
             ((((byte)uVar1 >> 1 & 1) != 0 && ((uVar1 & 0xfffffffffffffffd) == 0)))) &&
            (((((byte)*param_3 & 0x1f) == 0xc && (lVar2 = *(longlong *)(param_3 + 4), lVar2 != 0))
             && ((~(*(byte *)(*(longlong *)(lVar2 + 0x28) + 0x88) >> 5) & 1) != 0)))) &&
           (*(int *)(*(longlong *)(lVar2 + 0x28) + 0x90) == 10)) {
          FUN_1435b2140(param_1,param_2,lVar2 + 0x48,param_4);
        }
      }
    }
  }
  else {
    uStack_80 = local_res18;
    FUN_14360ab50(local_78,param_3);
    *param_1 = local_88;
    param_1[1] = uStack_80;
    FUN_143590140(param_1 + 2,local_78);
    if (9 < ((byte)local_78[0] & 0x1f)) {
      if ((local_78[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_78);
      }
      else {
        *local_70 = *local_70 + -1;
        if (*local_70 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
      }
    }
  }
  return;
}



// FUNCTION 1435b27d0 FUN_1435b27d0 body=457 status=ok
// SIG undefined FUN_1435b27d0(void)

void FUN_1435b27d0(ulonglong *param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  undefined8 param_5,int param_6)

{
  ulonglong uVar1;
  longlong *plVar2;
  char cVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  undefined1 local_48 [16];
  uint local_38 [2];
  int *local_30;
  
  cVar3 = Scaleform::GFx::AS3::Multiname::ContainsNamespace
                    (param_5,*(undefined8 *)(param_2 + 0x1d8));
  if (cVar3 != '\0') {
    if (((param_3 != (longlong *)0x0) && ((*(byte *)(param_4 + 0x11) >> 1 & 1) != 0)) &&
       ((param_6 != 2 || (cVar3 = FUN_143592750(param_3), cVar3 == '\0')))) {
      puVar4 = (ulonglong *)(**(code **)(*param_3 + 0xb0))(param_3,local_48,param_5);
      *param_1 = *puVar4;
      *param_1 = *puVar4;
      *param_1 = *puVar4;
      param_1[1] = puVar4[1];
      FUN_143590140(param_1 + 2,puVar4 + 2);
      if (9 < ((byte)local_38[0] & 0x1f)) {
        if ((local_38[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_38);
        }
        else {
          *local_30 = *local_30 + -1;
          if (*local_30 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
        }
      }
    }
    if (((((param_1[2] & 0x1f) == 0) || (uVar1 = *param_1, uVar1 == 1)) ||
        ((((byte)uVar1 >> 1 & 1) != 0 && ((uVar1 & 0xfffffffffffffffd) == 0)))) &&
       (plVar2 = param_4, param_6 != 1)) {
      for (; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[0x16]) {
        if (plVar2[0x15] == 0) {
          (**(code **)(*plVar2 + 0x50))(plVar2);
        }
        uVar5 = FUN_1435b3ae0(plVar2[0x15]);
        FUN_1435b1b30(uVar5,param_1,param_5,param_6);
        cVar3 = Scaleform::GFx::AS3::PropRef::operator_bool(param_1);
        if (cVar3 != '\0') {
          return;
        }
      }
      if (((param_3 != (longlong *)0x0) && ((~(*(byte *)(param_4 + 0x11) >> 5) & 1) != 0)) &&
         ((int)param_4[0x12] == 10)) {
        FUN_1435b2140(param_1,param_2,param_3 + 9,param_5);
      }
    }
  }
  return;
}



// FUNCTION 1435b29a0 FUN_1435b29a0 body=1150 status=ok
// SIG undefined FUN_1435b29a0(void)

undefined1 *
FUN_1435b29a0(undefined1 *param_1,longlong param_2,undefined8 param_3,uint *param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  char *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint *puVar8;
  undefined *puVar9;
  bool bVar10;
  undefined4 local_res20 [2];
  uint in_stack_ffffffffffffff78;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  uint uStack_64;
  int *piStack_60;
  ulonglong local_58;
  undefined8 uStack_50;
  ulonglong local_48 [2];
  uint local_38 [2];
  int *local_30;
  
  if ((((byte)*param_4 & 0x1f) == 0xc) &&
     (plVar2 = *(longlong **)(param_4 + 4), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x58))(plVar2,param_1,param_3,param_5,param_6,param_7);
    return param_1;
  }
  local_38[0] = 0;
  local_30 = (int *)0x0;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_1435b2320(local_48,param_2,param_4,param_3,2);
  if ((((local_38[0] & 0x1f) == 0) || (local_48[0] == 1)) ||
     ((((byte)local_48[0] >> 1 & 1) != 0 && ((local_48[0] & 0xfffffffffffffffd) == 0)))) {
    lVar6 = FUN_1435caba0(param_2,param_4);
    if ((((*(byte *)(lVar6 + 0x88) >> 1 & 1) == 0) && (4 < (*param_4 & 0x1f))) &&
       ((*param_4 & 0x1f) != 10)) {
      uVar5 = FUN_1435c8e40(&local_78,0x42d,param_2);
      puVar9 = &DAT_145b14e70;
    }
    else {
      uVar5 = FUN_1435c8e40(&local_78,0x3ee,param_2);
      puVar9 = &DAT_145b155b0;
    }
    FUN_1435ccf60(param_2,uVar5,puVar9);
    uVar7 = CONCAT44(uStack_6c,uStack_70);
LAB_1435b2db4:
    piVar1 = (int *)(uVar7 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    local_68 = 0;
    piStack_60 = (int *)0x0;
    uVar3 = (uint)local_48[0] & 3;
    if ((local_48[0] & 3) == 0) {
      in_stack_ffffffffffffff78 = 0;
      pcVar4 = (char *)FUN_1435ac440(local_48[0],local_res20,param_2,&local_68,local_38,0,1);
      if (*pcVar4 == '\0') {
        uVar3 = local_68 & 0x1f;
        *param_1 = 0;
        if (9 < uVar3) {
          if ((local_68 >> 9 & 1) == 0) {
            if (uVar3 == 10) {
              piVar1 = (int *)(local_58 + 0x18);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_14335f920();
              }
            }
            else {
              if ((uVar3 == 0xb) || (uVar3 == 0xc)) {
                uVar7 = local_58;
                if ((local_58 & 1) != 0) {
                  local_58 = local_58 - 1;
                  goto LAB_1435b2dcb;
                }
              }
              else {
                if (1 < uVar3 - 0xd) goto LAB_1435b2dcb;
                uVar7 = uStack_50;
                if ((uStack_50 & 1) != 0) {
                  uStack_50 = uStack_50 - 1;
                  goto LAB_1435b2dcb;
                }
              }
              if ((uVar7 != 0) && ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0)) {
                *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
                FUN_1434ef880();
              }
            }
          }
          else {
            *piStack_60 = *piStack_60 + -1;
            if (*piStack_60 == 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
            local_68 = local_68 & 0xfffffde0;
            piStack_60 = (int *)0x0;
            local_58 = 0;
            uStack_50 = 0;
          }
        }
        goto LAB_1435b2dcb;
      }
    }
    else if (uVar3 == 1) {
      puVar8 = (uint *)(local_48[0] & 0xfffffffffffffffe);
      if (puVar8 != &local_68) {
        local_68 = *puVar8;
        uStack_64 = puVar8[1];
        piStack_60 = *(int **)(puVar8 + 2);
        local_58 = *(ulonglong *)(puVar8 + 4);
        uStack_50 = *(ulonglong *)(puVar8 + 6);
        uVar3 = local_68 & 0x1f;
        if (9 < uVar3) {
          if ((local_68 >> 9 & 1) == 0) {
            if (uVar3 == 10) {
              *(int *)(local_58 + 0x18) = *(int *)(local_58 + 0x18) + 1;
            }
            else if (((10 < uVar3) &&
                     ((uVar7 = local_58, uVar3 < 0xd || (uVar7 = uStack_50, uVar3 < 0xf)))) &&
                    (uVar7 != 0)) {
              *(int *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1;
              *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) & 0x8fffffff;
            }
          }
          else {
            *piStack_60 = *piStack_60 + 1;
          }
        }
      }
    }
    else if (uVar3 == 2) {
      uVar7 = local_48[0] & 0xfffffffffffffffd;
      if (uVar7 != 0) {
        *(uint *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1U & 0x8fffffff;
      }
      local_78._4_4_ = (undefined4)(uVar7 >> 0x20);
      local_68 = 0xc;
      local_58 = CONCAT44(local_78._4_4_,(uint)local_48[0]) & 0xfffffffffffffffd;
      uStack_50 = CONCAT44(uStack_6c,uStack_70);
      local_78 = uVar7;
    }
    uVar3 = local_68 & 0x1f;
    if (uVar3 == 0) {
LAB_1435b2bb4:
      uVar5 = FUN_1435c8e40(&local_78,0x3ee,param_2);
      FUN_1435ccf60(param_2,uVar5,&DAT_145b155b0);
      piVar1 = (int *)(CONCAT44(uStack_6c,uStack_70) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    else {
      if (uVar3 == 0xc) {
        bVar10 = local_58 == 0;
LAB_1435b2b76:
        if (bVar10) goto LAB_1435b2bb4;
      }
      else if (uVar3 == 10) {
        bVar10 = local_58 == *(longlong *)(local_58 + 8) + 0x80U;
        goto LAB_1435b2b76;
      }
      local_res20[0] = param_6;
      FUN_1435ce880(param_2,&local_68,param_4,param_5,local_res20,param_7,
                    in_stack_ffffffffffffff78 & 0xffffff00,1);
    }
    uVar3 = local_68 & 0x1f;
    if (9 < uVar3) {
      if ((local_68 >> 9 & 1) == 0) {
        uVar7 = local_58;
        if (uVar3 == 10) goto LAB_1435b2db4;
        if ((((uVar3 == 0xb) || (uVar3 == 0xc)) || (uVar7 = uStack_50, uVar3 - 0xd < 2)) &&
           ((((uVar7 & 1) == 0 && (uVar7 != 0)) && ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0)))) {
          *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *piStack_60 = *piStack_60 + -1;
        if (*piStack_60 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
      }
    }
  }
  *param_1 = *(char *)(param_2 + 0xb8) == '\0';
LAB_1435b2dcb:
  if (9 < ((byte)local_38[0] & 0x1f)) {
    if ((local_38[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_38);
    }
    else {
      *local_30 = *local_30 + -1;
      if (*local_30 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
  }
  return param_1;
}



// FUNCTION 1435b2e30 FUN_1435b2e30 body=497 status=ok
// SIG undefined FUN_1435b2e30(void)

undefined1 *
FUN_1435b2e30(undefined1 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 local_res18 [16];
  undefined1 local_48 [8];
  longlong local_40;
  ulonglong local_38 [2];
  uint local_28 [2];
  int *local_20;
  
  if ((((byte)*param_3 & 0x1f) == 0xc) &&
     (plVar2 = *(longlong **)(param_3 + 4), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x20))(plVar2,param_1,param_4,param_5);
    return param_1;
  }
  local_28[0] = 0;
  local_20 = (int *)0x0;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_1435b2320(local_38);
  if ((((local_28[0] & 0x1f) == 0) || (local_38[0] == 1)) ||
     ((((byte)local_38[0] >> 1 & 1) != 0 && ((local_38[0] & 0xfffffffffffffffd) == 0)))) {
    uVar5 = FUN_1435c8e40(local_48,0x420,param_2);
    FUN_1435ccf60(param_2,uVar5,&DAT_145b14e70);
    piVar1 = (int *)(local_40 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_1 = 0;
    if (((byte)local_28[0] & 0x1f) < 10) {
      return param_1;
    }
    if ((local_28[0] >> 9 & 1) != 0) {
      *local_20 = *local_20 + -1;
      if (*local_20 != 0) {
        return param_1;
      }
      (**(code **)(*DAT_146b62f28 + 0x60))();
      return param_1;
    }
  }
  else {
    uVar6 = 1;
    uVar3 = (uint)local_38[0] & 3;
    if ((local_38[0] & 3) == 0) {
      puVar4 = (undefined1 *)FUN_1435ad410(local_38[0],local_res18,param_2,param_5,local_28,0);
      uVar6 = *puVar4;
    }
    else if (uVar3 == 1) {
      FUN_143590140(local_38[0] & 0xfffffffffffffffe,param_5);
    }
    else if (uVar3 == 2) {
      uVar6 = 0;
    }
    *param_1 = uVar6;
    if (((byte)local_28[0] & 0x1f) < 10) {
      return param_1;
    }
    if ((local_28[0] >> 9 & 1) != 0) {
      *local_20 = *local_20 + -1;
      if (*local_20 != 0) {
        return param_1;
      }
      (**(code **)(*DAT_146b62f28 + 0x60))();
      return param_1;
    }
  }
  FUN_1435920c0(local_28);
  return param_1;
}



// FUNCTION 1435b3030 FUN_1435b3030 body=418 status=ok
// SIG undefined FUN_1435b3030(void)

undefined1 *
FUN_1435b3030(undefined1 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             uint *param_5)

{
  longlong *plVar1;
  byte bVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  undefined1 local_res18 [8];
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  ulonglong local_38 [2];
  uint local_28 [2];
  int *local_20;
  
  if ((((byte)*param_3 & 0x1f) == 0xc) &&
     (plVar1 = *(longlong **)(param_3 + 4), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_1,param_4,param_5);
  }
  else {
    local_28[0] = 0;
    local_20 = (int *)0x0;
    local_38[0] = 0;
    local_38[1] = 0;
    FUN_1435b2320(local_38);
    uVar6 = local_28[0] & 0x1f;
    if (((uVar6 == 0) || (local_38[0] == 1)) ||
       ((((byte)local_38[0] >> 1 & 1) != 0 && ((local_38[0] & 0xfffffffffffffffd) == 0)))) {
      *param_1 = 0;
      bVar7 = uVar6 < 9;
      bVar8 = uVar6 == 9;
    }
    else {
      uVar5 = 1;
      uVar6 = (uint)local_38[0] & 3;
      if ((local_38[0] & 3) == 0) {
        puVar3 = (undefined1 *)FUN_1435ac440(local_38[0],local_res18,param_2,param_5,local_28,0,0);
        uVar5 = *puVar3;
      }
      else if (uVar6 == 1) {
        FUN_1435901e0(param_5,local_38[0] & 0xfffffffffffffffe);
      }
      else if (uVar6 == 2) {
        uVar4 = local_38[0] & 0xfffffffffffffffd;
        if (uVar4 != 0) {
          *(uint *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1U & 0x8fffffff;
        }
        local_48 = (uint)uVar4;
        uStack_44 = (uint)(uVar4 >> 0x20);
        *param_5 = *param_5 & 0xffffffec;
        *param_5 = *param_5 | 0xc;
        param_5[4] = local_48;
        param_5[5] = uStack_44;
        param_5[6] = uStack_40;
        param_5[7] = uStack_3c;
      }
      *param_1 = uVar5;
      bVar2 = (byte)local_28[0] & 0x1f;
      bVar7 = bVar2 < 9;
      bVar8 = bVar2 == 9;
    }
    if (!bVar7 && !bVar8) {
      if ((local_28[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_28);
      }
      else {
        *local_20 = *local_20 + -1;
        if (*local_20 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 1435b31e0 FUN_1435b31e0 body=564 status=ok
// SIG undefined FUN_1435b31e0(void)

undefined1 *
FUN_1435b31e0(undefined1 *param_1,undefined8 param_2,longlong param_3,uint *param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  longlong lVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong *puVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  char *pcVar12;
  ulonglong uVar13;
  undefined1 local_res18 [8];
  undefined8 local_58;
  uint local_50 [2];
  int *local_48;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  
  if (param_3 == 0) {
    param_3 = FUN_1435caba0(param_2,param_5);
  }
  lVar1 = *(longlong *)(param_3 + 0xb0);
  if (lVar1 != 0) {
    local_58 = 0;
    lVar10 = FUN_1435af580(param_2,lVar1,param_6,&local_58,0);
    if (lVar10 != 0) {
      local_50[0] = 0;
      local_48 = (int *)0x0;
      uVar11 = FUN_1434ef190(lVar1);
      pcVar12 = (char *)FUN_1435ac440(lVar10,local_res18,param_2,local_50,param_5,uVar11,param_7);
      if (*pcVar12 != '\0') {
        uVar9 = *param_4;
        piVar2 = *(int **)(param_4 + 2);
        *(int **)(param_4 + 2) = local_48;
        puVar7 = (ulonglong *)(param_4 + 4);
        uVar3 = (uint)*puVar7;
        uVar4 = param_4[5];
        uVar13 = *puVar7;
        uVar5 = (uint)*(ulonglong *)(param_4 + 6);
        uVar6 = param_4[7];
        uVar8 = uVar9 & 0x1f;
        *param_4 = local_50[0];
        *param_1 = 1;
        param_4[4] = local_40;
        param_4[5] = uStack_3c;
        param_4[6] = uStack_38;
        param_4[7] = uStack_34;
        if (uVar8 < 10) {
          return param_1;
        }
        local_50[0] = uVar9;
        local_48 = piVar2;
        local_40 = uVar3;
        uStack_3c = uVar4;
        uStack_38 = uVar5;
        uStack_34 = uVar6;
        if ((uVar9 >> 9 & 1) != 0) {
          *piVar2 = *piVar2 + -1;
          if (*piVar2 != 0) {
            return param_1;
          }
          (**(code **)(*DAT_146b62f28 + 0x60))();
          return param_1;
        }
        if (uVar8 == 10) {
          piVar2 = (int *)(uVar13 + 0x18);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 != 0) {
            return param_1;
          }
          FUN_14335f920();
          return param_1;
        }
        if (((uVar8 != 0xb) && (uVar8 != 0xc)) &&
           (puVar7 = (ulonglong *)(param_4 + 6), 1 < uVar8 - 0xd)) {
          return param_1;
        }
        uVar13 = *puVar7;
        if ((uVar13 & 1) != 0) {
          return param_1;
        }
        if (uVar13 == 0) {
          return param_1;
        }
        if ((*(uint *)(uVar13 + 8) & 0x3fffff) == 0) {
          return param_1;
        }
        *(uint *)(uVar13 + 8) = *(uint *)(uVar13 + 8) - 1;
        FUN_1434ef880();
        return param_1;
      }
      uVar9 = local_50[0] & 0x1f;
      if (9 < uVar9) {
        if ((local_50[0] >> 9 & 1) == 0) {
          if (uVar9 == 10) {
            piVar2 = (int *)(CONCAT44(uStack_3c,local_40) + 0x18);
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              FUN_14335f920();
            }
          }
          else {
            if ((uVar9 == 0xb) || (uVar9 == 0xc)) {
              uVar13 = CONCAT44(uStack_3c,local_40);
            }
            else {
              if (1 < uVar9 - 0xd) goto LAB_1435b33ea;
              uVar13 = CONCAT44(uStack_34,uStack_38);
            }
            if ((((uVar13 & 1) == 0) && (uVar13 != 0)) && ((*(uint *)(uVar13 + 8) & 0x3fffff) != 0))
            {
              *(uint *)(uVar13 + 8) = *(uint *)(uVar13 + 8) - 1;
              FUN_1434ef880();
            }
          }
        }
        else {
          *local_48 = *local_48 + -1;
          if (*local_48 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
        }
      }
    }
  }
LAB_1435b33ea:
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1435b3420 FUN_1435b3420 body=192 status=ok
// SIG undefined FUN_1435b3420(void)

undefined1 *
FUN_1435b3420(undefined1 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined4 local_res18 [4];
  undefined8 local_28 [2];
  
  local_res18[0] = 0;
  if (param_3 == 0) {
    param_3 = FUN_1435caba0(param_2,param_4);
  }
  lVar1 = *(longlong *)(param_3 + 0xb0);
  if (lVar1 == 0) {
    *param_1 = 0;
  }
  else {
    local_28[0] = 0;
    lVar2 = FUN_1435af580(param_2,lVar1,param_5,local_28,0);
    if (lVar2 != 0) {
      uVar3 = FUN_1434ef190(lVar1);
      pcVar4 = (char *)FUN_1435ad410(lVar2,local_res18,param_2,param_6,param_4,uVar3);
      if (*pcVar4 != '\0') {
        *param_1 = 1;
        return param_1;
      }
    }
    *param_1 = 0;
  }
  return param_1;
}



// FUNCTION 1435b34f0 FUN_1435b34f0 body=715 status=ok
// SIG undefined FUN_1435b34f0(void)

undefined1 * FUN_1435b34f0(undefined1 *param_1,longlong param_2,uint *param_3,undefined8 param_4)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  char *pcVar4;
  bool bVar5;
  undefined4 local_res18 [4];
  uint local_98 [2];
  int *local_90;
  ulonglong local_88;
  ulonglong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58 [2];
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_res18[0] = 0;
  uVar2 = *param_3 & 0x1f;
  if (uVar2 == 0) {
LAB_1435b379b:
    pcVar4 = (char *)FUN_1435911f0(param_3,local_res18,param_4);
    if (*pcVar4 == '\0') {
      *param_1 = 0;
      return param_1;
    }
  }
  else {
    if (uVar2 == 0xc) {
      bVar5 = *(longlong *)(param_3 + 4) == 0;
LAB_1435b3547:
      if (bVar5) goto LAB_1435b379b;
    }
    else if (uVar2 == 10) {
      bVar5 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
      goto LAB_1435b3547;
    }
    local_98[0] = 0;
    local_90 = (int *)0x0;
    lVar3 = FUN_143360950(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x218),"toString",8);
    local_78 = 10;
    uStack_70 = 0;
    *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 2;
    local_50 = *(longlong *)(param_2 + 0x1d8);
    local_58[0] = 0;
    if (local_50 != 0) {
      *(uint *)(local_50 + 8) = *(int *)(local_50 + 8) + 1U & 0x8fffffff;
    }
    local_68._0_4_ = (undefined4)lVar3;
    local_68._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
    local_48 = 10;
    uStack_44 = uStack_74;
    uStack_40 = 0;
    uStack_3c = 0;
    local_38 = (undefined4)local_68;
    uStack_34 = local_68._4_4_;
    uStack_30 = uStack_60;
    uStack_2c = uStack_5c;
    *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
    local_68 = lVar3;
    FUN_1435aef90(local_58,0);
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar3);
    }
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar3);
    }
    pcVar4 = (char *)FUN_1435b29a0(local_res18,param_2,local_58,param_3,local_98,0,0);
    if ((*pcVar4 == '\0') ||
       ((((byte)local_98[0] & 0x1f) != 10 &&
        (pcVar4 = (char *)FUN_1435911f0(local_98,local_res18,param_4), *pcVar4 == '\0')))) {
      *param_1 = 0;
      FUN_1434e6250(local_58);
      uVar2 = local_98[0] & 0x1f;
      if (uVar2 < 10) {
        return param_1;
      }
      if ((local_98[0] >> 9 & 1) != 0) {
        *local_90 = *local_90 + -1;
        if (*local_90 != 0) {
          return param_1;
        }
        (**(code **)(*DAT_146b62f28 + 0x60))();
        return param_1;
      }
      if (uVar2 == 10) {
        piVar1 = (int *)(local_88 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) {
          return param_1;
        }
        FUN_14335f920();
        return param_1;
      }
      if (((uVar2 != 0xb) && (uVar2 != 0xc)) && (local_88 = local_80, 1 < uVar2 - 0xd)) {
        return param_1;
      }
      if ((local_88 & 1) != 0) {
        return param_1;
      }
      if (local_88 == 0) {
        return param_1;
      }
      if ((*(uint *)(local_88 + 8) & 0x3fffff) == 0) {
        return param_1;
      }
      *(uint *)(local_88 + 8) = *(uint *)(local_88 + 8) - 1;
      FUN_1434ef880();
      return param_1;
    }
    FUN_1434e6250(local_58);
    uVar2 = local_98[0] & 0x1f;
    if (9 < uVar2) {
      if ((local_98[0] >> 9 & 1) == 0) {
        if (uVar2 == 10) {
          piVar1 = (int *)(local_88 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else if (((((uVar2 == 0xb) || (uVar2 == 0xc)) || (local_88 = local_80, uVar2 - 0xd < 2)) &&
                 (((local_88 & 1) == 0 && (local_88 != 0)))) &&
                ((*(uint *)(local_88 + 8) & 0x3fffff) != 0)) {
          *(uint *)(local_88 + 8) = *(uint *)(local_88 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *local_90 = *local_90 + -1;
        if (*local_90 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
      }
    }
  }
  *param_1 = 1;
  return param_1;
}



// FUNCTION 1435b37d0 FUN_1435b37d0 body=266 status=ok
// SIG undefined FUN_1435b37d0(void)

undefined8 * FUN_1435b37d0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0x30);
  *param_1 = &PTR_FUN_145b4a938;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[4] = uVar1;
  param_1[5] = param_2;
  *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  param_1[6] = &DAT_1467d9aa0;
  *param_1 = &PTR_ForEachChild_GC_145b18698;
  param_1[7] = 0;
  if (*(longlong *)(param_2 + 0xb0) == 0) {
    lVar4 = 0;
  }
  else {
    plVar2 = *(longlong **)(*(longlong *)(param_2 + 0xb0) + 0xd8);
    if (plVar2[0x15] == 0) {
      (**(code **)(*plVar2 + 0x50))(plVar2);
    }
    lVar4 = plVar2[0x15];
  }
  param_1[8] = lVar4;
  if (lVar4 != 0) {
    *(uint *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1U & 0x8fffffff;
  }
  param_1[9] = 0;
  lVar4 = *(longlong *)(param_2 + 0xd8);
  puVar3 = *(undefined8 **)(lVar4 + 0xa8);
  if (param_1 != puVar3) {
    if (puVar3 != (undefined8 *)0x0) {
      if (((ulonglong)puVar3 & 1) == 0) {
        if ((*(uint *)(puVar3 + 1) & 0x3fffff) != 0) {
          *(uint *)(puVar3 + 1) = *(uint *)(puVar3 + 1) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *(ulonglong *)(lVar4 + 0xa8) = (longlong)puVar3 - 1;
      }
    }
    *(undefined8 **)(lVar4 + 0xa8) = param_1;
  }
  return param_1;
}



// FUNCTION 1435b38e0 FUN_1435b38e0 body=131 status=ok
// SIG undefined FUN_1435b38e0(void)

void FUN_1435b38e0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  *param_1 = &PTR_ForEachChild_GC_145b18698;
  uVar1 = param_1[9];
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[9] = uVar1 - 1;
    }
  }
  uVar1 = param_1[8];
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      param_1[8] = uVar1 - 1;
      FUN_1435afe40(param_1);
      return;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880();
    }
  }
  FUN_1435afe40(param_1);
  return;
}



// FUNCTION 1435b3980 ForEachChild_GC body=77 status=ok
// SIG undefined ForEachChild_GC(void)

void Scaleform::GFx::AS3::Class::ForEachChild_GC(longlong param_1,undefined8 param_2,code *param_3)

{
  FUN_1435b16a0();
  if (*(longlong *)(param_1 + 0x40) != 0) {
    (*param_3)(param_2,param_1 + 0x40);
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    (*param_3)(param_2,param_1 + 0x48);
  }
  return;
}



// FUNCTION 1435b39e0 FUN_1435b39e0 body=237 status=ok
// SIG undefined FUN_1435b39e0(void)

void FUN_1435b39e0(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  undefined1 local_28 [8];
  longlong local_20;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0xd8);
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  (**(code **)(*plVar2 + 0x58))(plVar2,param_2,plVar2);
  if ((*param_2 & 0x1f) == 0xc) {
    bVar6 = *(longlong *)(param_2 + 4) == 0;
  }
  else {
    if ((*param_2 & 0x1f) != 10) goto LAB_1435b3a79;
    bVar6 = *(longlong *)(param_2 + 4) == *(longlong *)(*(longlong *)(param_2 + 4) + 8) + 0x80;
  }
  if (bVar6) {
    uVar4 = FUN_1435c8e40(local_28,1000,uVar3);
    FUN_1435ccf60(uVar3,uVar4,&DAT_145b26738);
    piVar1 = (int *)(local_20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
LAB_1435b3a79:
  pcVar5 = (char *)(**(code **)(*plVar2 + 0x68))(plVar2,local_res8,param_2);
  if (*pcVar5 != '\0') {
    (**(code **)(**(longlong **)(param_2 + 4) + 0x70))(*(longlong **)(param_2 + 4),0);
    (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4,param_6);
  }
  return;
}



// FUNCTION 1435b3ae0 FUN_1435b3ae0 body=132 status=ok
// SIG undefined FUN_1435b3ae0(void)

longlong FUN_1435b3ae0(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  undefined1 local_res8 [8];
  
  if (param_1[9] == 0) {
    puVar3 = (ulonglong *)(**(code **)(*param_1 + 0xd0))(param_1,local_res8);
    uVar1 = param_1[9];
    uVar2 = *puVar3;
    if (uVar2 != uVar1) {
      if (uVar1 != 0) {
        if ((uVar1 & 1) == 0) {
          if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          param_1[9] = uVar1 - 1;
        }
      }
      param_1[9] = uVar2;
    }
    (**(code **)(*param_1 + 200))(param_1,param_1[9]);
    return param_1[9];
  }
  return param_1[9];
}



// FUNCTION 1435b3b70 FUN_1435b3b70 body=141 status=ok
// SIG undefined FUN_1435b3b70(void)

void FUN_1435b3b70(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (*param_4 == 1) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x58))
                      (*(longlong **)(param_1 + 0x28),param_5);
    if (cVar2 != '\0') {
      return;
    }
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x40a,uVar4);
    puVar5 = &DAT_145b155b0;
  }
  else {
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
    uVar3 = FUN_1435c8e40(local_18,0x458,uVar4);
    puVar5 = &DAT_145b16b90;
  }
  FUN_1435ccf60(uVar4,uVar3,puVar5);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435b3c10 FUN_1435b3c10 body=578 status=ok
// SIG undefined FUN_1435b3c10(void)

void FUN_1435b3c10(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  uint *puVar13;
  undefined4 local_68 [2];
  longlong local_60;
  undefined1 local_58 [8];
  int *local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xd8);
  lVar7 = FUN_1434ef190(lVar3);
  uVar12 = 0;
  uVar10 = *(ulonglong *)(lVar3 + 0x28);
  if (*(longlong *)(lVar3 + 0x40) + uVar10 != 0) {
    do {
      if (((longlong)uVar12 < 0) || (uVar12 < uVar10)) {
        puVar13 = (uint *)FUN_1434ef150(*(undefined8 *)(lVar3 + 0x30),uVar12);
      }
      else {
        puVar13 = (uint *)(*(longlong *)(lVar3 + 0x38) + 0x10 +
                          ((uVar12 & 0xffffffff) - uVar10) * 0x40);
      }
      if ((*puVar13 & 0x7c0) == 0x2c0) {
        if (((longlong)uVar12 < 0) || (uVar12 < uVar10)) {
          lVar8 = Scaleform::GFx::AS3::Slots::GetSlotNameNode(*(undefined8 *)(lVar3 + 0x30),uVar12);
        }
        else {
          lVar8 = *(longlong *)
                   (((uVar12 & 0xffffffff) - uVar10) * 0x40 + *(longlong *)(lVar3 + 0x38));
        }
        uVar6 = puVar13[1];
        lVar4 = *(longlong *)(lVar7 + 8);
        *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
        uVar9 = (*(code *)*param_3)(*(int *)(param_3 + 1) + param_1,local_58,
                                    (ulonglong)uVar6 * 0x20 + lVar4,lVar3);
        *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
        puVar1 = (undefined8 *)(param_2 + 0x30);
        uVar6 = *(uint *)(lVar8 + 0x1c);
        puVar5 = (undefined *)*puVar1;
        local_68[0] = 1;
        local_60 = lVar8;
        if (puVar5 == &DAT_1467d9aa0) {
          iVar11 = 8;
LAB_1435b3d40:
          FUN_143614420(puVar1,iVar11,0,0);
        }
        else if (*(uint *)(puVar5 + 0x18) <= *(uint *)(puVar5 + 8)) {
          iVar11 = *(int *)(puVar5 + 0x30) * 2 + 2;
          goto LAB_1435b3d40;
        }
        FUN_143613ea0(*puVar1,local_68,uVar9,uVar6 & 0xffffff);
        piVar2 = (int *)(lVar8 + 0x18);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FUN_14335f920(lVar8);
        }
        piVar2 = (int *)(lVar8 + 0x18);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FUN_14335f920(lVar8);
        }
        uVar6 = local_58._0_4_ & 0x1f;
        if (9 < uVar6) {
          if ((local_58._0_4_ >> 9 & 1) == 0) {
            if (uVar6 == 10) {
              piVar2 = (int *)(local_48 + 0x18);
              *piVar2 = *piVar2 + -1;
              if (*piVar2 == 0) {
                FUN_14335f920();
              }
            }
            else {
              uVar10 = local_48;
              if (((((uVar6 == 0xb) || (uVar6 == 0xc)) || (uVar10 = local_40, uVar6 - 0xd < 2)) &&
                  (((uVar10 & 1) == 0 && (uVar10 != 0)))) &&
                 ((*(uint *)(uVar10 + 8) & 0x3fffff) != 0)) {
                *(uint *)(uVar10 + 8) = *(uint *)(uVar10 + 8) - 1;
                FUN_1434ef880();
              }
            }
          }
          else {
            *local_50 = *local_50 + -1;
            if (*local_50 == 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
          }
        }
      }
      if (((longlong)uVar12 < 0) ||
         (uVar12 < (ulonglong)(*(longlong *)(lVar3 + 0x28) + *(longlong *)(lVar3 + 0x40)))) {
        uVar12 = uVar12 + 1;
      }
      uVar10 = *(ulonglong *)(lVar3 + 0x28);
    } while ((uVar12 & 0xffffffff) < *(longlong *)(lVar3 + 0x40) + uVar10);
  }
  return;
}



// FUNCTION 1435b3e60 FUN_1435b3e60 body=50 status=ok
// SIG undefined FUN_1435b3e60(void)

void FUN_1435b3e60(undefined8 param_1,undefined8 param_2)

{
  code *local_18;
  undefined4 uStack_10;
  
  local_18 = FUN_1435b4110;
  uStack_10 = 0;
  FUN_1435b3c10(0x435b4110,param_2,&local_18);
  return;
}



// FUNCTION 1435b3ea0 FUN_1435b3ea0 body=102 status=ok
// SIG undefined FUN_1435b3ea0(void)

void FUN_1435b3ea0(longlong param_1,undefined8 param_2)

{
  code *local_18;
  undefined4 uStack_10;
  
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 200))();
  }
  local_18 = FUN_1435b4110;
  uStack_10 = 0;
  FUN_1435b3c10(param_1,param_2,&local_18);
  FUN_1435b3fb0(param_1,param_2);
  return;
}



// FUNCTION 1435b3f10 FUN_1435b3f10 body=153 status=ok
// SIG undefined FUN_1435b3f10(void)

undefined8 * FUN_1435b3f10(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  
  lVar1 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x208) + 0xd8);
  lVar3 = *(longlong *)(lVar1 + 0xa0);
  if (lVar3 == 0) {
    local_res8[0] = 0x152;
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x98) + 0x48);
    lVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,*(undefined4 *)(lVar1 + 0x80),local_res8);
  }
  else {
    *(undefined8 *)(lVar1 + 0xa0) = *(undefined8 *)(lVar3 + 0x28);
  }
  if (lVar3 != 0) {
    uVar4 = UInterpTrackInst::UInterpTrackInst(lVar3,lVar1);
    *param_2 = uVar4;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1435b3fb0 FUN_1435b3fb0 body=292 status=ok
// SIG undefined FUN_1435b3fb0(void)

void FUN_1435b3fb0(ulonglong param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  longlong lVar4;
  int iVar5;
  undefined4 local_38 [2];
  longlong local_30;
  undefined4 local_28 [2];
  undefined8 local_20;
  ulonglong local_18;
  
  local_28[0] = 0xc;
  local_20 = 0;
  if (param_1 != 0) {
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + 1U & 0x8fffffff;
  }
  local_18 = param_1;
  lVar4 = FUN_143360950(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10)
                         + 0x218),"constructor",0xb);
  local_38[0] = 1;
  *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 2;
  uVar2 = *(uint *)(lVar4 + 0x1c);
  puVar3 = *(undefined **)(param_2 + 0x30);
  local_30 = lVar4;
  if (puVar3 == &DAT_1467d9aa0) {
    iVar5 = 8;
  }
  else {
    if (*(uint *)(puVar3 + 8) < *(uint *)(puVar3 + 0x18)) goto LAB_1435b4070;
    iVar5 = *(int *)(puVar3 + 0x30) * 2 + 2;
  }
  FUN_143614420(param_2 + 0x30,iVar5,0,0);
LAB_1435b4070:
  FUN_143613ea0(*(undefined8 *)(param_2 + 0x30),local_38,local_28,uVar2 & 0xffffff);
  piVar1 = (int *)(lVar4 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar4);
  }
  piVar1 = (int *)(lVar4 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar4);
  }
  if (((param_1 & 1) == 0) && ((*(uint *)(param_1 + 8) & 0x3fffff) != 0)) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) - 1;
    FUN_1434ef880(param_1);
  }
  return;
}



// FUNCTION 1435b40e0 FUN_1435b40e0 body=29 status=ok
// SIG undefined FUN_1435b40e0(void)

undefined8 FUN_1435b40e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14360ab50(param_2,param_3);
  return param_2;
}



// FUNCTION 1435b4110 FUN_1435b4110 body=156 status=ok
// SIG undefined FUN_1435b4110(void)

uint * FUN_1435b4110(longlong param_1,uint *param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 uStack_20;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  plVar2 = *(longlong **)
            (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x218) + 0xd8);
  if (plVar2[0x15] == 0) {
    (**(code **)(*plVar2 + 0x50))(plVar2);
  }
  puVar3 = (undefined8 *)FUN_1434b2070(plVar2[0x15],local_res8,param_1,uVar1,param_4);
  uVar1 = *puVar3;
  *param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = *param_2 & 0xffffffec;
  *param_2 = *param_2 | 0xc;
  *(undefined8 *)(param_2 + 4) = uVar1;
  *(undefined8 *)(param_2 + 6) = uStack_20;
  return param_2;
}



// FUNCTION 1435b41d0 FUN_1435b41d0 body=30 status=ok
// SIG undefined FUN_1435b41d0(void)

void FUN_1435b41d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1435b3ae0();
  FUN_1435903c0(param_2,uVar1);
  return;
}



// FUNCTION 1435b4200 FUN_1435b4200 body=391 status=ok
// SIG undefined FUN_1435b4200(void)

void FUN_1435b4200(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong local_res8;
  ulonglong local_res10;
  ulonglong local_res18;
  ulonglong local_res20;
  longlong local_28 [2];
  
  plVar3 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x28) + 0x20))
                     (*(longlong **)(param_1 + 0x28),local_28);
  uVar4 = FUN_1432c3140(&local_res18,*(undefined8 *)*plVar3,
                        *(undefined4 *)((undefined8 *)*plVar3 + 4));
  uVar5 = FUN_1432c2fb0(&local_res10,"[class ");
  FString::TrimQuotes(uVar5,&local_res8,uVar4);
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res10 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res10 & 0xfffffffffffffffc);
  }
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res18 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res18 & 0xfffffffffffffffc);
  }
  puVar6 = (ulonglong *)FUN_1432c50d0(&local_res8,&local_res20,&DAT_145b18618);
  lVar7 = FUN_143360a90(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10)
                         + 0x218),(longlong)(*puVar6 & 0xfffffffffffffffc) + 0xc,
                        *(ulonglong *)(*puVar6 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
  *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 2;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar7;
  piVar1 = (int *)(lVar7 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar7);
  }
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res20 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res20 & 0xfffffffffffffffc);
  }
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  piVar1 = (int *)(local_28[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435b4390 FUN_1435b4390 body=38 status=ok
// SIG undefined FUN_1435b4390(void)

void FUN_1435b4390(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001435b43b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1,param_3,param_4,param_5);
  return;
}



// FUNCTION 1435b43c0 FUN_1435b43c0 body=185 status=ok
// SIG undefined FUN_1435b43c0(void)

undefined1 * FUN_1435b43c0(ulonglong *param_1,undefined1 *param_2,longlong *param_3)

{
  longlong lVar1;
  char *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 local_res8 [8];
  
  uVar4 = *param_1;
  uVar3 = 0;
  if (param_1[3] + uVar4 != 0) {
    do {
      if (((longlong)uVar3 < 0) || (uVar3 < uVar4)) {
        lVar1 = FUN_1434ef150(param_1[1],uVar3);
      }
      else {
        lVar1 = param_1[2] + 0x10 + ((uVar3 & 0xffffffff) - uVar4) * 0x40;
      }
      pcVar2 = (char *)(**(code **)(*param_3 + 8))(param_3,local_res8,lVar1);
      if (*pcVar2 == '\0') {
        *param_2 = 0;
        return param_2;
      }
      if (((longlong)uVar3 < 0) || (uVar3 < param_1[3] + *param_1)) {
        uVar3 = uVar3 + 1;
      }
      uVar4 = *param_1;
    } while ((uVar3 & 0xffffffff) < param_1[3] + uVar4);
  }
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1435b44b0 FUN_1435b44b0 body=114 status=ok
// SIG undefined FUN_1435b44b0(void)

void FUN_1435b44b0(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  
  param_1[1] = (longlong)param_2;
  *param_1 = param_2[3] + *param_2;
  FUN_14360e110(param_1 + 8,param_1 + 8,param_2 + 8);
  FUN_143612fc0(param_1 + 5,param_2[6]);
  uVar1 = 0;
  if (param_1[6] != 0) {
    do {
      *(undefined4 *)(param_1[5] + uVar1 * 4) = *(undefined4 *)(param_2[5] + uVar1 * 4);
      uVar1 = uVar1 + 1;
    } while (uVar1 < (ulonglong)param_1[6]);
  }
  return;
}



// FUNCTION 1435b4530 FUN_1435b4530 body=252 status=ok
// SIG undefined FUN_1435b4530(void)

ulonglong * FUN_1435b4530(ulonglong *param_1,ulonglong *param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  bool bVar6;
  
  puVar2 = (uint *)FUN_14360fa90(param_1,param_3);
  if (puVar2 != (uint *)0x0) {
    lVar1 = *(longlong *)(param_4 + 0x28);
    uVar4 = (ulonglong)*puVar2;
    do {
      if (uVar4 < *param_1) {
        lVar3 = FUN_1434ef150(param_1[1],uVar4);
      }
      else {
        lVar3 = param_1[2] + 0x10 + ((uVar4 & 0xffffffff) - *param_1) * 0x40;
      }
      lVar3 = *(longlong *)(lVar3 + 8);
      iVar5 = (int)((lVar1 << 0x3c) >> 0x3c);
      if ((int)((*(longlong *)(lVar3 + 0x28) << 0x3c) >> 0x3c) == iVar5) {
        if (iVar5 == 1) {
LAB_1435b4627:
          *param_2 = uVar4;
          return param_2;
        }
        if (iVar5 == 3) {
          bVar6 = param_4 == lVar3;
        }
        else {
          bVar6 = *(longlong *)(lVar3 + 0x38) == *(longlong *)(param_4 + 0x38);
        }
        if (bVar6) goto LAB_1435b4627;
      }
      if (uVar4 < *param_1) {
        uVar4 = Scaleform::GFx::AS3::Slots::GetPrevSlotIndex(param_1[1],uVar4);
      }
      else {
        uVar4 = *(ulonglong *)((uVar4 - *param_1) * 0x40 + 8 + param_1[2]);
      }
    } while (-1 < (longlong)uVar4);
  }
  *param_2 = 0xffffffffffffffff;
  return param_2;
}



// FUNCTION 1435b4640 FUN_1435b4640 body=101 status=ok
// SIG undefined FUN_1435b4640(void)

void FUN_1435b4640(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1435ab5d0(param_1[2] + 0x10 + ((param_2 & 0xffffffff) - *param_1) * 0x40,param_4);
  FUN_1435b4740(param_1,param_2,param_3);
  FUN_1435b4b70(param_1,param_4);
  return;
}



// FUNCTION 1435b46b0 FUN_1435b46b0 body=126 status=ok
// SIG undefined FUN_1435b46b0(void)

longlong FUN_1435b46b0(longlong *param_1,undefined8 param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  
  plVar2 = (longlong *)FUN_1435b4530(param_1,local_res8,param_2,*(undefined8 *)(param_3 + 8));
  lVar1 = *plVar2;
  *(longlong *)param_4 = lVar1;
  if (lVar1 < 0) {
    puVar3 = (undefined8 *)FUN_1435b4900(param_1,local_res8,param_2,param_3);
    *(undefined8 *)param_4 = *puVar3;
  }
  return param_1[2] + 0x10 + ((ulonglong)*param_4 - *param_1) * 0x40;
}



// FUNCTION 1435b4740 FUN_1435b4740 body=430 status=ok
// SIG undefined FUN_1435b4740(void)

void FUN_1435b4740(longlong *param_1,ulonglong param_2,ulonglong *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int local_res8 [2];
  ulonglong local_res18;
  ulonglong *local_38;
  int *piStack_30;
  
  lVar3 = param_1[2];
  uVar4 = *param_3;
  lVar7 = (param_2 & 0xffffffff) - *param_1;
  lVar11 = lVar7 * 0x40;
  if (*(ulonglong *)(lVar3 + lVar11) != uVar4) {
    if (uVar4 != 0) {
      *(int *)(uVar4 + 0x18) = *(int *)(uVar4 + 0x18) + 1;
    }
    if (*(longlong *)(lVar3 + lVar11) != 0) {
      piVar1 = (int *)(*(longlong *)(lVar3 + lVar11) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    *(ulonglong *)(lVar3 + lVar11) = uVar4;
    if (uVar4 != 0) {
      *(int *)(uVar4 + 0x18) = *(int *)(uVar4 + 0x18) + 1;
    }
    lVar3 = param_1[8];
    if (lVar3 != 0) {
      uVar5 = *(ulonglong *)(lVar3 + 8);
      uVar10 = *(uint *)(uVar4 + 0x1c) & uVar5;
      lVar2 = uVar10 * 3 + 2;
      puVar6 = (ulonglong *)(lVar3 + lVar2 * 8);
      if ((*(longlong *)(lVar3 + lVar2 * 8) != -2) &&
         (uVar9 = uVar10, (*(uint *)(puVar6[1] + 0x1c) & uVar5) == uVar10)) {
        while (((*(uint *)(puVar6[1] + 0x1c) & uVar5) != uVar10 || (puVar6[1] != uVar4))) {
          uVar9 = *puVar6;
          if (uVar9 == 0xffffffffffffffff) goto LAB_1435b4816;
          puVar6 = (ulonglong *)(lVar3 + uVar9 * 0x18 + 0x10);
        }
        if (-1 < (longlong)uVar9) {
          plVar8 = param_1 + 8;
          goto LAB_1435b4829;
        }
      }
    }
LAB_1435b4816:
    local_38 = (ulonglong *)0x0;
    piStack_30 = (int *)0x0;
    uVar9 = 0;
    plVar8 = (longlong *)0x0;
LAB_1435b4829:
    if (uVar4 != 0) {
      piVar1 = (int *)(uVar4 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(uVar4);
      }
    }
    local_res8[0] = (int)lVar7;
    if (((plVar8 == (longlong *)0x0) || (lVar3 = *plVar8, lVar3 == 0)) ||
       (*(longlong *)(lVar3 + 8) < (longlong)uVar9)) {
      local_res8[0] = (int)*param_1 + local_res8[0];
      if (uVar4 != 0) {
        *(int *)(uVar4 + 0x18) = *(int *)(uVar4 + 0x18) + 1;
      }
      local_38 = &local_res18;
      piStack_30 = local_res8;
      local_res18 = uVar4;
      FUN_143608720(param_1 + 8,param_1 + 8,&local_38,*(undefined4 *)(uVar4 + 0x1c));
      if (local_res18 != 0) {
        piVar1 = (int *)(local_res18 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      *(undefined8 *)(lVar11 + 8 + param_1[2]) = 0xffffffffffffffff;
    }
    else {
      *(ulonglong *)(lVar11 + 8 + param_1[2]) = (ulonglong)*(uint *)(uVar9 * 0x18 + 0x20 + lVar3);
      *(int *)(uVar9 * 0x18 + 0x20 + *plVar8) = (int)*param_1 + local_res8[0];
    }
  }
  return;
}



// FUNCTION 1435b4900 FUN_1435b4900 body=606 status=ok
// SIG undefined FUN_1435b4900(void)

longlong * FUN_1435b4900(longlong *param_1,longlong *param_2,ulonglong *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int local_res8 [2];
  ulonglong local_res10;
  ulonglong *local_88;
  int *piStack_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined1 local_68 [48];
  
  lVar3 = param_1[3];
  FUN_1435b4b70(param_1,param_4);
  uVar4 = *param_3;
  if (uVar4 != 0) {
    *(int *)(uVar4 + 0x18) = *(int *)(uVar4 + 0x18) + 1;
    *(int *)(uVar4 + 0x18) = *(int *)(uVar4 + 0x18) + 1;
  }
  local_70 = 0xffffffffffffffff;
  local_78 = uVar4;
  FUN_1435ab450(local_68,param_4);
  FUN_143613140(param_1 + 2,param_1 + 2,param_1[3] + 1);
  puVar7 = (ulonglong *)(param_1[3] * 0x40 + param_1[2] + -0x40);
  if (puVar7 != (ulonglong *)0x0) {
    if (local_78 != 0) {
      *(int *)(local_78 + 0x18) = *(int *)(local_78 + 0x18) + 1;
    }
    *puVar7 = local_78;
    puVar7[1] = local_70;
    FUN_1435ab450(puVar7 + 2,local_68);
  }
  FUN_1435ab510(local_68);
  if (local_78 != 0) {
    piVar1 = (int *)(local_78 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if (uVar4 != 0) {
    piVar1 = (int *)(uVar4 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(uVar4);
    }
  }
  uVar4 = *param_3;
  if (uVar4 != 0) {
    *(int *)(uVar4 + 0x18) = *(int *)(uVar4 + 0x18) + 1;
  }
  lVar5 = param_1[8];
  if (lVar5 != 0) {
    uVar6 = *(ulonglong *)(lVar5 + 8);
    uVar10 = *(uint *)(uVar4 + 0x1c) & uVar6;
    lVar2 = uVar10 * 3 + 2;
    puVar7 = (ulonglong *)(lVar5 + lVar2 * 8);
    if ((*(longlong *)(lVar5 + lVar2 * 8) != -2) &&
       (uVar9 = uVar10, (*(uint *)(puVar7[1] + 0x1c) & uVar6) == uVar10)) {
      while (((*(uint *)(puVar7[1] + 0x1c) & uVar6) != uVar10 || (puVar7[1] != uVar4))) {
        uVar9 = *puVar7;
        if (uVar9 == 0xffffffffffffffff) goto LAB_1435b4a56;
        puVar7 = (ulonglong *)(lVar5 + uVar9 * 0x18 + 0x10);
      }
      if (-1 < (longlong)uVar9) {
        plVar8 = param_1 + 8;
        goto LAB_1435b4a69;
      }
    }
  }
LAB_1435b4a56:
  local_88 = (ulonglong *)0x0;
  piStack_80 = (int *)0x0;
  uVar9 = 0;
  plVar8 = (longlong *)0x0;
LAB_1435b4a69:
  if (uVar4 != 0) {
    piVar1 = (int *)(uVar4 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(uVar4);
    }
  }
  if (((plVar8 == (longlong *)0x0) || (lVar5 = *plVar8, lVar5 == 0)) ||
     (*(longlong *)(lVar5 + 8) < (longlong)uVar9)) {
    local_res8[0] = (int)*param_1 + (int)lVar3;
    if (uVar4 != 0) {
      *(int *)(uVar4 + 0x18) = *(int *)(uVar4 + 0x18) + 1;
    }
    local_88 = &local_res10;
    piStack_80 = local_res8;
    local_res10 = uVar4;
    FUN_143608720(param_1 + 8,param_1 + 8,&local_88,*(undefined4 *)(uVar4 + 0x1c));
    if (local_res10 != 0) {
      piVar1 = (int *)(local_res10 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    *(undefined8 *)(lVar3 * 0x40 + 8 + param_1[2]) = 0xffffffffffffffff;
  }
  else {
    *(ulonglong *)(lVar3 * 0x40 + 8 + param_1[2]) =
         (ulonglong)*(uint *)(uVar9 * 0x18 + 0x20 + lVar5);
    *(int *)(*plVar8 + 0x20 + uVar9 * 0x18) = (int)*param_1 + (int)lVar3;
  }
  *param_2 = *param_1 + lVar3;
  return param_2;
}



// FUNCTION 1435b4b70 FUN_1435b4b70 body=204 status=ok
// SIG undefined FUN_1435b4b70(void)

void FUN_1435b4b70(longlong param_1,int *param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  
  iVar2 = param_2[1];
  iVar5 = (*param_2 << 0x15) >> 0x1b;
  if (iVar5 == 1) {
    uVar3 = 1;
  }
  else if (iVar5 == 2) {
    uVar3 = 2;
  }
  else if (iVar5 == 3) {
    uVar3 = 3;
  }
  else {
    if (iVar5 != 4) {
      return;
    }
    uVar3 = 4;
  }
  if (iVar2 < 0) {
    return;
  }
  if ((uVar3 == 3) && (iVar2 == 0)) {
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x28);
  uVar4 = *(longlong *)(param_1 + 0x30) + 1;
  if (uVar4 < *(ulonglong *)(param_1 + 0x30)) {
    uVar6 = uVar4;
    if (*(ulonglong *)(param_1 + 0x38) >> 1 <= uVar4) goto LAB_1435b4c1d;
  }
  else {
    if (uVar4 <= *(ulonglong *)(param_1 + 0x38)) goto LAB_1435b4c1d;
    uVar6 = (uVar4 >> 2) + uVar4;
  }
  FUN_143612910(plVar1,plVar1,uVar6);
LAB_1435b4c1d:
  *(ulonglong *)(param_1 + 0x30) = uVar4;
  *(uint *)(*plVar1 + -4 + uVar4 * 4) = iVar2 * 8 | uVar3;
  return;
}



// FUNCTION 1435b4c50 FUN_1435b4c50 body=349 status=ok
// SIG undefined FUN_1435b4c50(void)

/* WARNING: Removing unreachable block (ram,0x0001435b4d77) */

undefined8 *
FUN_1435b4c50(undefined8 *param_1,longlong param_2,longlong param_3,byte param_4,byte param_5)

{
  byte bVar1;
  undefined4 uVar2;
  
  param_1[4] = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_145b4a9f8;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  if (param_3 != 0) {
    uVar2 = *(undefined4 *)(param_3 + 0x90);
  }
  *(undefined4 *)(param_1 + 0x12) = uVar2;
  param_1[0x13] = param_2;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = param_3;
  if (param_3 != 0) {
    *(uint *)(param_3 + 8) = *(int *)(param_3 + 8) + 1U & 0x8fffffff;
  }
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  param_1[0x19] = 0xffffffffffffffe0;
  param_1[0x1a] = 0;
  if (param_3 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(param_3 + 0x88) & 1;
  }
  param_1[0x11] = param_1[0x11] & 0xffffffffffffffbc;
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x8000000;
  param_1[0x11] =
       param_1[0x11] | (ulonglong)(-(uint)bVar1 & 1 | -(uint)param_5 & 0x40 | -(uint)param_4 & 2);
  if (param_1[0x16] != 0) {
    FUN_1435b44b0(param_1 + 5,param_1[0x16] + 0x28);
    param_1[0xe] = param_1[8] + param_1[5];
    param_1[0xf] = *(undefined8 *)(param_1[0x16] + 0x78);
  }
  return param_1;
}



// FUNCTION 1435b4dc0 FUN_1435b4dc0 body=293 status=ok
// SIG undefined FUN_1435b4dc0(void)

void FUN_1435b4dc0(undefined8 *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = param_1[0x14];
  *param_1 = &PTR_FUN_145b4a9f8;
  while (lVar1 != 0) {
    param_1[0x14] = *(undefined8 *)(param_1[0x14] + 0x28);
    (**(code **)(*DAT_146b62f28 + 0x60))();
    lVar1 = param_1[0x14];
  }
  FUN_143611e90(param_1 + 0x19,(param_1[0x19] - param_1[0x1a]) + 0x20 >> 5);
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[0x1a]);
  Scaleform::AutoPtr<Scaleform::GFx::AS3::VTable>::~AutoPtr<Scaleform::GFx::AS3::VTable>
            (param_1 + 0x17);
  uVar2 = param_1[0x16];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x16] = uVar2 - 1;
    }
  }
  uVar2 = param_1[0x15];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x15] = uVar2 - 1;
    }
  }
  FUN_14360b1b0(param_1 + 0xd);
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[10]);
  FUN_14360ac30(param_1 + 7);
  FUN_1435ab0c0(param_1);
  return;
}



// FUNCTION 1435b4fa0 FUN_1435b4fa0 body=51 status=ok
// SIG undefined FUN_1435b4fa0(void)

longlong FUN_1435b4fa0(longlong *param_1)

{
  if (param_1[0x15] == 0) {
    (**(code **)(*param_1 + 0x50))();
    return param_1[0x15];
  }
  return param_1[0x15];
}



// FUNCTION 1435b4fe0 FUN_1435b4fe0 body=51 status=ok
// SIG undefined FUN_1435b4fe0(void)

longlong FUN_1435b4fe0(longlong *param_1)

{
  if (param_1[0x15] == 0) {
    (**(code **)(*param_1 + 0x50))();
    return param_1[0x15];
  }
  return param_1[0x15];
}



// FUNCTION 1435b5020 FUN_1435b5020 body=166 status=ok
// SIG undefined FUN_1435b5020(void)

undefined8 FUN_1435b5020(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x90);
  while( true ) {
    if (param_2 == 0) {
      return 0;
    }
    if ((param_1 == param_2) || ((iVar1 == 10 && (*(int *)(param_2 + 0x90) == 10)))) break;
    if (*(int *)(param_2 + 0x90) != 0x10) {
      lVar3 = param_2;
      if ((~(*(byte *)(param_2 + 0x88) >> 5) & 1) == 0) {
        lVar3 = *(longlong *)(param_2 + 0xd8);
      }
      lVar4 = param_1;
      if ((~(*(byte *)(param_1 + 0x88) >> 5) & 1) == 0) {
        lVar4 = *(longlong *)(param_1 + 0xd8);
      }
      cVar2 = FUN_1435b8a50(lVar3,lVar4);
      if (cVar2 != '\0') {
        return 1;
      }
    }
    param_2 = *(longlong *)(param_2 + 0xb0);
  }
  return 1;
}



// FUNCTION 1435b5130 FUN_1435b5130 body=158 status=ok
// SIG undefined FUN_1435b5130(void)

void FUN_1435b5130(longlong param_1)

{
  char cVar1;
  byte bVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  do {
    if ((param_1 == 0) || (*(char *)(param_1 + 0x88) < '\0')) {
      return;
    }
    bVar2 = (byte)*(undefined8 *)(param_1 + 0x88);
    if ((~(bVar2 >> 5) & 1) != 0) {
      if ((bVar2 >> 4 & 1) == 0) {
        if ((*(int *)(param_1 + 0x90) - 0x10U & 0xfffffffb) == 0) goto LAB_1435b51bc;
        cVar1 = FUN_143605080(param_1,local_res8);
      }
      else {
        cVar1 = FUN_143605200(param_1,local_res8);
      }
      if (cVar1 != '\0') {
        return;
      }
    }
LAB_1435b51bc:
    param_1 = *(longlong *)(param_1 + 0xb0);
  } while( true );
}



// FUNCTION 1435b51e0 FUN_1435b51e0 body=23 status=ok
// SIG undefined FUN_1435b51e0(void)

void FUN_1435b51e0(undefined8 param_1,undefined1 param_2)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = param_2;
  FUN_143605520(param_1,local_res10);
  return;
}



// FUNCTION 1435b5230 FUN_1435b5230 body=50 status=ok
// SIG undefined FUN_1435b5230(void)

undefined8 FUN_1435b5230(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x38))();
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x30);
  }
  return *(undefined8 *)(param_1[0x13] + 0x1c8);
}



// FUNCTION 1435b5270 FUN_1435b5270 body=272 status=ok
// SIG undefined FUN_1435b5270(void)

void FUN_1435b5270(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  uint param_5,uint param_6,char param_7)

{
  int *piVar1;
  longlong lVar2;
  uint *puVar3;
  uint uVar4;
  uint local_res8 [2];
  uint local_38 [2];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  longlong local_10;
  
  lVar2 = *param_2;
  uVar4 = (param_7 != '\0') + 0x14;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  }
  local_38[1] = 0xffffffff;
  if (param_4 != 0) {
    *(uint *)(param_4 + 8) = *(int *)(param_4 + 8) + 1U & 0x8fffffff;
  }
  local_20 = 0;
  uStack_18 = 0;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  }
  local_38[0] = ((uVar4 >> 4) << 2 | uVar4 >> 2 & 1) << 2 | uVar4 & 1;
  local_30 = param_3;
  local_28 = param_4;
  local_10 = lVar2;
  FUN_1435b4900(param_1 + 0x28,local_res8,param_2,local_38);
  FUN_1435ab510(local_38);
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar2);
    }
  }
  puVar3 = (uint *)(((ulonglong)local_res8[0] - *(longlong *)(param_1 + 0x28)) * 0x40 +
                   *(longlong *)(param_1 + 0x38) + 0x10);
  *puVar3 = *puVar3 & 0xfffff83f;
  *puVar3 = *puVar3 | (param_5 & 0x1f) << 6;
  puVar3[1] = param_6;
  FUN_1435b4b70(param_1 + 0x28);
  return;
}



// FUNCTION 1435b5390 FUN_1435b5390 body=269 status=ok
// SIG undefined FUN_1435b5390(void)

void FUN_1435b5390(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  uint param_5,uint param_6,char param_7)

{
  int *piVar1;
  longlong lVar2;
  uint *puVar3;
  uint local_res8 [2];
  int local_38 [2];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  longlong local_10;
  
  lVar2 = *param_2;
  local_38[0] = (param_7 != '\0') + 4;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  }
  local_38[1] = 0xffffffff;
  if (param_4 != 0) {
    *(uint *)(param_4 + 8) = *(int *)(param_4 + 8) + 1U & 0x8fffffff;
  }
  local_20 = 0;
  uStack_18 = 0;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  }
  local_30 = param_3;
  local_28 = param_4;
  local_10 = lVar2;
  FUN_1435b4900(param_1 + 0x28,local_res8,param_2,local_38);
  FUN_1435ab510(local_38);
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar2);
    }
  }
  puVar3 = (uint *)(((ulonglong)local_res8[0] - *(longlong *)(param_1 + 0x28)) * 0x40 +
                   *(longlong *)(param_1 + 0x38) + 0x10);
  *puVar3 = *puVar3 & 0xfffff83f;
  *puVar3 = *puVar3 | (param_5 & 0x1f) << 6;
  puVar3[1] = param_6;
  FUN_1435b4b70(param_1 + 0x28);
  return;
}



// FUNCTION 1435b54b0 FUN_1435b54b0 body=218 status=ok
// SIG undefined FUN_1435b54b0(void)

undefined8
FUN_1435b54b0(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6,char param_7)

{
  int *piVar1;
  longlong lVar2;
  int local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  longlong local_10;
  
  lVar2 = *param_3;
  local_38[0] = (param_7 != '\0') + 4;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  }
  local_38[1] = 0xffffffff;
  local_28 = 0;
  local_20 = param_5;
  if (param_5 != 0) {
    *(uint *)(param_5 + 8) = *(int *)(param_5 + 8) + 1U & 0x8fffffff;
  }
  local_18 = param_6;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  }
  local_30 = param_4;
  local_10 = lVar2;
  FUN_1435b4900(param_1 + 0x28,param_2,param_3,local_38);
  FUN_1435ab510(local_38);
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar2);
    }
  }
  return param_2;
}



// FUNCTION 1435b5590 FUN_1435b5590 body=259 status=ok
// SIG undefined FUN_1435b5590(void)

void FUN_1435b5590(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4,uint param_5,
                  char param_6)

{
  int *piVar1;
  longlong lVar2;
  uint *puVar3;
  uint local_res8 [2];
  int local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  longlong local_10;
  
  lVar2 = *param_2;
  local_38[0] = (param_6 != '\0') + 4;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  }
  local_38[1] = 0xffffffff;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  }
  local_30 = param_3;
  local_10 = lVar2;
  FUN_1435b4900(param_1 + 0x28,local_res8,param_2,local_38);
  FUN_1435ab510(local_38);
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar2);
    }
  }
  puVar3 = (uint *)(((ulonglong)local_res8[0] - *(longlong *)(param_1 + 0x28)) * 0x40 +
                   *(longlong *)(param_1 + 0x38) + 0x10);
  *puVar3 = *puVar3 & 0xfffff83f;
  *puVar3 = *puVar3 | (param_4 & 0x1f) << 6;
  puVar3[1] = param_5;
  FUN_1435b4b70(param_1 + 0x28);
  return;
}



// FUNCTION 1435b56a0 FUN_1435b56a0 body=483 status=ok
// SIG undefined FUN_1435b56a0(void)

longlong FUN_1435b56a0(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong local_res8;
  undefined1 local_68 [8];
  undefined4 local_60;
  undefined4 local_5c;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  undefined8 uStack_40;
  longlong local_38;
  
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x70) + (param_2 & 0xffffffff);
  uVar3 = *(longlong *)(param_1 + 0x40) + *(longlong *)(param_1 + 0x28);
  while (uVar3 < (uVar5 & 0xffffffff)) {
    local_60 = 0;
    local_5c = 0xffffffff;
    local_38 = 0;
    local_58 = 0;
    uStack_50 = 0;
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x10) + 0x218);
    *(int *)(lVar2 + 0x60) = *(int *)(lVar2 + 0x60) + 1;
    local_48 = 0;
    uStack_40 = 0;
    local_res8 = lVar2 + 0x48;
    FUN_1435b4900(param_1 + 0x28,local_68,&local_res8,&local_60);
    piVar1 = (int *)(lVar2 + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar2 + 0x48);
    }
    if (local_38 != 0) {
      piVar1 = (int *)(local_38 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    if (((local_48 != 0) && ((local_48 & 1) == 0)) && ((*(uint *)(local_48 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_48 + 8) = *(uint *)(local_48 + 8) - 1;
      FUN_1434ef880();
    }
    if (((uStack_50 != 0) && ((uStack_50 & 1) == 0)) && ((*(uint *)(uStack_50 + 8) & 0x3fffff) != 0)
       ) {
      *(uint *)(uStack_50 + 8) = *(uint *)(uStack_50 + 8) - 1;
      FUN_1434ef880();
    }
    if (((local_58 != 0) && ((local_58 & 1) == 0)) && ((*(uint *)(local_58 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_58 + 8) = *(uint *)(local_58 + 8) - 1;
      FUN_1434ef880();
    }
    uVar3 = *(longlong *)(param_1 + 0x40) + *(longlong *)(param_1 + 0x28);
  }
  if ((uVar5 & 0xffffffff) == *(longlong *)(param_1 + 0x40) + *(longlong *)(param_1 + 0x28)) {
    puVar4 = (ulonglong *)FUN_1435b54b0(param_1,&local_res8);
    uVar5 = *puVar4;
  }
  else {
    FUN_1436141c0(param_1,uVar5,param_3,param_4,param_5,param_6,param_7);
  }
  return *(longlong *)(param_1 + 0x38) + 0x10 +
         ((uVar5 & 0xffffffff) - *(longlong *)(param_1 + 0x28)) * 0x40;
}



// FUNCTION 1435b5890 FUN_1435b5890 body=157 status=ok
// SIG undefined FUN_1435b5890(void)

undefined1 *
FUN_1435b5890(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  char *pcVar1;
  undefined4 local_res10 [2];
  undefined1 local_18;
  undefined1 local_17 [15];
  
  local_res10[0] = 0;
  pcVar1 = (char *)FUN_1435b7560(param_1,local_res10);
  if (((*pcVar1 != '\0') &&
      (pcVar1 = (char *)FUN_1435b77a0(param_1,&local_18,param_3,param_4,1), *pcVar1 != '\0')) &&
     (pcVar1 = (char *)FUN_1435b77a0(param_1,local_17,param_3,param_4,0), *pcVar1 != '\0')) {
    FUN_1435b6220(param_1,param_5);
    *param_2 = 1;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1435b5940 FUN_1435b5940 body=602 status=ok
// SIG undefined FUN_1435b5940(void)

void FUN_1435b5940(longlong param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  longlong *plVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_res8;
  uint local_res10;
  undefined4 uStackX_14;
  uint local_58 [2];
  longlong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong local_30;
  
  uVar4 = *(uint *)(param_2 + 2);
  lVar9 = *(longlong *)(param_1 + 0x98);
  pcVar5 = (char *)param_2[1];
  lVar7 = *(longlong *)(lVar9 + 0x10);
  if ((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) {
    if ((uVar4 & 0xf0000) != 0) {
      local_res8 = *(longlong *)(lVar7 + 0x218) + 0x48;
      piVar1 = (int *)(*(longlong *)(lVar7 + 0x218) + 0x60);
      *piVar1 = *piVar1 + 1;
      plVar6 = (longlong *)
               FUN_1435cc220(lVar9,&local_res10,((int)param_2[2] << 0xc) >> 0x1c,&local_res8);
      lVar9 = *plVar6;
      piVar1 = (int *)(local_res8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      goto LAB_1435b5a8f;
    }
    lVar9 = *(longlong *)(lVar9 + 0x1d8);
  }
  else {
    if (pcVar5 != PTR_s_http___adobe_com_AS3_2006_builti_1467d9780) {
      lVar10 = (longlong)PTR_s_http___adobe_com_AS3_2006_builti_1467d9780 - (longlong)pcVar5;
      do {
        cVar2 = *pcVar5;
        cVar3 = pcVar5[lVar10];
        if (cVar2 != cVar3) break;
        pcVar5 = pcVar5 + 1;
      } while (cVar3 != '\0');
      if (cVar2 != cVar3) {
        local_res8 = FUN_143360a60(*(undefined8 *)(lVar7 + 0x218));
        *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
        FUN_1435cc220(lVar9,&local_res10,(int)(uVar4 << 0xc) >> 0x1c,&local_res8);
        piVar1 = (int *)(local_res8 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        lVar9 = CONCAT44(uStackX_14,local_res10);
        goto LAB_1435b5a8f;
      }
    }
    lVar9 = *(longlong *)(lVar9 + 0x1e0);
  }
  if (lVar9 != 0) {
    *(uint *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1U & 0x8fffffff;
  }
LAB_1435b5a8f:
  lVar10 = -1;
  do {
    lVar10 = lVar10 + 1;
  } while (*(char *)(*param_2 + lVar10) != '\0');
  lVar7 = FUN_143360950(*(undefined8 *)(lVar7 + 0x218),*param_2,lVar10,0);
  local_58[1] = 0xffffffff;
  *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 3;
  local_38 = 0;
  local_58[0] = (uVar4 & 0x2000000) >> 0x19 | 0x14;
  local_48 = 0;
  uStack_40 = 0;
  local_res8 = lVar7;
  local_50 = lVar9;
  local_30 = lVar7;
  FUN_1435b4900(param_1 + 0x28,&local_res10,&local_res8,local_58);
  FUN_1435ab510(local_58);
  piVar1 = (int *)(lVar7 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar7);
  }
  uVar4 = *(uint *)(param_2 + 2);
  puVar8 = (uint *)(((ulonglong)local_res10 - *(longlong *)(param_1 + 0x28)) * 0x40 +
                   *(longlong *)(param_1 + 0x38) + 0x10);
  *puVar8 = *puVar8 & 0xfffff83f;
  *puVar8 = *puVar8 | (int)uVar4 >> 0xe & 0x7c0U;
  puVar8[1] = uVar4 & 0xffff;
  FUN_1435b4b70(param_1 + 0x28);
  piVar1 = (int *)(lVar7 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar7);
  }
  return;
}



// FUNCTION 1435b5bc0 FUN_1435b5bc0 body=77 status=ok
// SIG undefined FUN_1435b5bc0(void)

void FUN_1435b5bc0(longlong param_1)

{
  longlong *plVar1;
  undefined4 local_res8 [8];
  
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x28);
    return;
  }
  local_res8[0] = 0x152;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x98) + 0x48);
  (**(code **)(*plVar1 + 0x50))(plVar1,*(undefined4 *)(param_1 + 0x80),local_res8);
  return;
}



// FUNCTION 1435b5c40 FUN_1435b5c40 body=66 status=ok
// SIG undefined FUN_1435b5c40(void)

void FUN_1435b5c40(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xa0);
  while (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x28);
    (**(code **)(*DAT_146b62f28 + 0x60))();
    lVar1 = *(longlong *)(param_1 + 0xa0);
  }
  return;
}



// FUNCTION 1435b5c90 FUN_1435b5c90 body=145 status=ok
// SIG undefined FUN_1435b5c90(void)

uint * FUN_1435b5c90(longlong param_1,uint *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  byte *pbVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = param_3 & 0xffffffff;
  param_3 = param_3 & 0xffffffff;
  do {
    if ((ulonglong)(*(longlong *)(param_1 + 0x40) + *(longlong *)(param_1 + 0x28)) <= param_3) {
      *param_2 = 0;
      return param_2;
    }
    uVar3 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar3;
    param_3 = (ulonglong)uVar3;
    uVar1 = uVar4 - 1;
    if (((longlong)uVar1 < 0) || (uVar1 < *(ulonglong *)(param_1 + 0x28))) {
      pbVar2 = (byte *)FUN_1434ef150(*(undefined8 *)(param_1 + 0x30));
    }
    else {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x38) + 0x10 +
                       ((uVar1 & 0xffffffff) - *(ulonglong *)(param_1 + 0x28)) * 0x40);
    }
  } while ((*pbVar2 & 0xc) != 0);
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 1435b5d30 FUN_1435b5d30 body=154 status=ok
// SIG undefined FUN_1435b5d30(void)

void FUN_1435b5d30(longlong param_1,undefined8 param_2,code *param_3)

{
  longlong lVar1;
  
  FUN_14360fc30(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    (*param_3)(param_2);
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    (*param_3)(param_2);
  }
  FUN_1434e8d30(param_2,param_1 + 200,param_3);
  lVar1 = *(longlong *)(param_1 + 0xa0);
  while (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x28);
    (**(code **)(*DAT_146b62f28 + 0x60))();
    lVar1 = *(longlong *)(param_1 + 0xa0);
  }
  return;
}



// FUNCTION 1435b5dd0 FUN_1435b5dd0 body=861 status=ok
// SIG undefined FUN_1435b5dd0(void)

undefined1 *
FUN_1435b5dd0(longlong param_1,undefined1 *param_2,longlong param_3,uint *param_4,undefined8 param_5
             )

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *pcVar7;
  longlong lVar8;
  uint *puVar9;
  ulonglong uVar10;
  char cVar11;
  uint uVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  uint local_a8 [2];
  int *local_a0;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_88;
  byte local_80 [4];
  undefined8 local_7c;
  uint local_74;
  undefined1 local_70 [4];
  int local_6c;
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  
  lVar2 = *(longlong *)(param_1 + 0x98);
  piVar1 = (int *)(lVar2 + 0x40);
  *piVar1 = *piVar1 + 1;
  local_48 = *(undefined8 *)(param_4 + 2);
  local_88 = *param_4;
  uVar12 = 0;
  if (local_88 != 0) {
    do {
      local_80[0] = 0;
      local_7c = 0xffffffffffffffff;
      local_74 = 0xffffffff;
      local_70[0] = 0;
      local_6c = -1;
      local_68 = 0;
      local_60 = 0;
      FUN_14361ced0(&local_48,local_80);
      if (((local_80[0] & 0xf) == 0) || ((local_80[0] & 0xf) == 6)) {
        local_58 = *(undefined1 (*) [16])
                    (*(longlong *)(*(longlong *)(param_3 + 0xa0) + 0x148) +
                    (longlong)(int)local_7c * 0x10);
        lVar5 = FUN_14360f960(param_1,param_3,local_58);
        if (lVar5 != 0) {
          if (local_6c < 1) {
            lVar8 = *(longlong *)(param_3 + 0xa0);
            if (((local_80[0] & 0xf) == 0) || ((local_80[0] & 0xf) == 6)) {
              uVar10 = (ulonglong)(int)local_74;
            }
            else {
              local_40 = *(undefined8 *)(*(longlong *)(lVar8 + 0x78) + (ulonglong)local_74 * 8);
              uVar4 = FUN_14358f8b0(&local_40);
              uVar10 = (ulonglong)uVar4;
            }
            uVar3 = *(undefined8 *)(param_1 + 0x98);
            local_58 = *(undefined1 (*) [16])(uVar10 * 0x10 + *(longlong *)(lVar8 + 0x148));
            if ((((local_58._12_4_ == 0) && (local_58._8_4_ == 0)) && (local_58._0_4_ == 0)) ||
               (lVar8 = FUN_1435c84e0(uVar3,param_3,local_58), lVar8 == 0)) {
              puVar9 = (uint *)FUN_143590540();
              local_a8[0] = *puVar9;
              local_a0 = *(int **)(puVar9 + 2);
              local_98 = puVar9[4];
              uStack_94 = puVar9[5];
              uStack_90 = puVar9[6];
              uStack_8c = puVar9[7];
              uVar4 = *puVar9 & 0x1f;
              if (9 < uVar4) {
                if ((*puVar9 >> 9 & 1) == 0) {
                  if (uVar4 == 10) {
                    *(int *)(*(longlong *)(puVar9 + 4) + 0x18) =
                         *(int *)(*(longlong *)(puVar9 + 4) + 0x18) + 1;
                  }
                  else if (10 < uVar4) {
                    if (uVar4 < 0xd) {
                      lVar8 = *(longlong *)(puVar9 + 4);
                    }
                    else {
                      if (0xe < uVar4) goto LAB_1435b6048;
                      lVar8 = *(longlong *)(puVar9 + 6);
                    }
                    if (lVar8 != 0) {
                      *(uint *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1U & 0x8fffffff;
                    }
                  }
                }
                else {
                  **(int **)(puVar9 + 2) = **(int **)(puVar9 + 2) + 1;
                }
              }
            }
            else {
              FUN_1435cb580(uVar3,local_a8,lVar8);
            }
LAB_1435b6048:
            pcVar7 = (char *)FUN_1435acaa0(lVar5,local_res20,*(undefined8 *)(param_1 + 0x98),
                                           local_a8,param_5);
            cVar11 = *pcVar7;
            uVar4 = local_a8[0] & 0x1f;
            if (9 < uVar4) {
              if ((local_a8[0] >> 9 & 1) == 0) {
                if (uVar4 == 10) goto LAB_1435b60dc;
                if ((uVar4 == 0xb) || (uVar4 == 0xc)) {
                  lVar5 = CONCAT44(uStack_94,local_98);
                  bVar13 = (local_98 & 1) == 0;
                }
                else {
                  if (1 < uVar4 - 0xd) goto LAB_1435b60eb;
                  lVar5 = CONCAT44(uStack_8c,uStack_90);
                  bVar13 = (uStack_90 & 1) == 0;
                }
LAB_1435b60bf:
                if (((bVar13) && (lVar5 != 0)) && ((*(uint *)(lVar5 + 8) & 0x3fffff) != 0)) {
                  *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) - 1;
                  FUN_1434ef880();
                }
              }
              else {
                *local_a0 = *local_a0 + -1;
                if (*local_a0 == 0) {
                  (**(code **)(*DAT_146b62f28 + 0x60))();
                }
              }
            }
          }
          else {
            uVar3 = *(undefined8 *)(param_1 + 0x98);
            uVar6 = FUN_1435bb2a0(param_3,local_a8,local_70);
            pcVar7 = (char *)FUN_1435acaa0(lVar5,local_res8,uVar3,uVar6,param_5);
            cVar11 = *pcVar7;
            uVar4 = local_a8[0] & 0x1f;
            if (9 < uVar4) {
              if ((local_a8[0] >> 9 & 1) == 0) {
                if (uVar4 != 10) {
                  if ((uVar4 == 0xb) || (uVar4 == 0xc)) {
                    lVar5 = CONCAT44(uStack_94,local_98);
                    bVar13 = (local_98 & 1) == 0;
                  }
                  else {
                    if (1 < uVar4 - 0xd) goto LAB_1435b60eb;
                    lVar5 = CONCAT44(uStack_8c,uStack_90);
                    bVar13 = (uStack_90 & 1) == 0;
                  }
                  goto LAB_1435b60bf;
                }
LAB_1435b60dc:
                piVar1 = (int *)(CONCAT44(uStack_94,local_98) + 0x18);
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  FUN_14335f920();
                }
              }
              else {
                *local_a0 = *local_a0 + -1;
                if (*local_a0 == 0) {
                  (**(code **)(*DAT_146b62f28 + 0x60))();
                }
              }
            }
          }
LAB_1435b60eb:
          if (cVar11 == '\0') {
            *param_2 = 0;
            goto LAB_1435b610c;
          }
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < local_88);
  }
  *param_2 = 1;
LAB_1435b610c:
  piVar1 = (int *)(lVar2 + 0x40);
  *piVar1 = *piVar1 + -1;
  return param_2;
}



// FUNCTION 1435b6140 FUN_1435b6140 body=171 status=ok
// SIG undefined FUN_1435b6140(void)

char FUN_1435b6140(longlong param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x98);
  if ((((param_3[3] != 0) || (param_3[2] != 0)) || (*param_3 != 0)) &&
     (lVar2 = FUN_1435c84e0(lVar1), lVar2 != 0)) {
    switch(*(undefined4 *)(lVar2 + 0x90)) {
    case 1:
      return '\x05';
    case 2:
      return '\x06';
    case 3:
      return '\a';
    case 4:
      return '\b';
    case 5:
      return '\t';
    default:
      return (lVar2 != *(longlong *)(lVar1 + 0x208)) + '\x02';
    case 10:
      break;
    }
  }
  return '\x02';
}



// FUNCTION 1435b6220 FUN_1435b6220 body=544 status=ok
// SIG undefined FUN_1435b6220(void)

void FUN_1435b6220(longlong param_1,int param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int local_res18;
  
  puVar1 = (ulonglong *)(param_1 + 0x28);
  *(int *)(param_1 + 0x80) = param_2;
  uVar10 = *(longlong *)(param_1 + 0x40) + *puVar1;
  iVar14 = 0;
  local_res18 = 0;
  iVar11 = 0;
  uVar8 = (ulonglong)*(uint *)(param_1 + 0x70);
  iVar12 = iVar14;
  iVar6 = iVar11;
  for (uVar5 = uVar8; uVar5 < uVar10; uVar5 = uVar5 + 1) {
    if (((longlong)uVar5 < 0) || (uVar5 < *puVar1)) {
      puVar3 = (uint *)FUN_1434ef150(*(undefined8 *)(param_1 + 0x30),uVar5);
    }
    else {
      puVar3 = (uint *)(*(longlong *)(param_1 + 0x38) + 0x10 +
                       ((uVar5 & 0xffffffff) - *puVar1) * 0x40);
    }
    if ((*puVar3 & 0x30) == 0) {
      switch((int)(*puVar3 << 0x15) >> 0x1b) {
      case 2:
        iVar11 = iVar11 + 1;
        break;
      case 3:
      case 8:
      case 9:
        iVar6 = iVar6 + 1;
        break;
      case 5:
        iVar12 = iVar12 + 1;
        break;
      case 6:
      case 7:
        iVar14 = iVar14 + 1;
      }
    }
  }
  iVar9 = 0;
  if (iVar14 + iVar12 + iVar6 + iVar11 != 0) {
    uVar13 = iVar12 + param_2;
    if (iVar14 != 0) {
      uVar13 = uVar13 + 3 & 0xfffffffc;
    }
    uVar4 = uVar13 + iVar14 * 4;
    if (iVar6 != 0) {
      uVar4 = uVar4 + 7 & 0xfffffff8;
    }
    uVar7 = uVar4 + iVar6 * 8;
    if (iVar11 != 0) {
      uVar7 = uVar7 + 0x1f & 0xffffffe0;
    }
    iVar14 = 0;
    *(uint *)(param_1 + 0x80) = iVar11 * 0x20 + uVar7;
    iVar12 = iVar9;
    iVar11 = iVar9;
    iVar6 = iVar9;
    for (; uVar8 < uVar10; uVar8 = uVar8 + 1) {
      puVar3 = (uint *)(*(longlong *)(param_1 + 0x38) + 0x10 +
                       ((uVar8 & 0xffffffff) - *puVar1) * 0x40);
      if ((*puVar3 & 0x30) != 0) goto switchD_1435b6399_caseD_4;
      switch((int)(*puVar3 << 0x15) >> 0x1b) {
      case 2:
        uVar2 = uVar7 + iVar9 * 0x20;
        iVar9 = iVar9 + 1;
        goto LAB_1435b63ef;
      case 3:
      case 9:
        uVar2 = uVar4 + iVar12 * 8;
        iVar12 = iVar12 + 1;
        iVar9 = iVar14;
LAB_1435b63ef:
        puVar3[1] = uVar2;
        FUN_1435b4b70(puVar1);
        iVar6 = local_res18;
        iVar14 = iVar9;
        break;
      case 5:
        local_res18 = iVar6 + 1;
        puVar3[1] = param_2 + iVar6;
        iVar6 = local_res18;
        break;
      case 6:
      case 7:
        puVar3[1] = uVar13 + iVar11 * 4;
        iVar11 = iVar11 + 1;
        break;
      case 8:
        puVar3[1] = uVar4 + iVar12 * 8;
        iVar12 = iVar12 + 1;
      }
switchD_1435b6399_caseD_4:
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b643c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,0);
  return;
}



// FUNCTION 1435b64a0 FUN_1435b64a0 body=548 status=ok
// SIG undefined FUN_1435b64a0(void)

longlong FUN_1435b64a0(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong local_res10;
  longlong local_res20;
  ulonglong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  longlong *local_28;
  longlong *local_20;
  
  if (*(longlong *)(*param_2 + 0x20) == 0) {
    return 0;
  }
  puVar2 = *(undefined1 **)(*(longlong *)(*param_2 + 0x20) + 0x18);
  puVar5 = &DAT_145af3922;
  if (puVar2 != (undefined1 *)0x0) {
    puVar5 = puVar2;
  }
  local_res20 = FUN_143360a60(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x218),puVar5);
  *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
  FUN_1435cc220(param_1,&local_48,0,&local_res20);
  piVar1 = (int *)(local_res20 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  lVar6 = -1;
  lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x20) + 0x10);
  do {
    lVar6 = lVar6 + 1;
  } while (*(char *)(lVar4 + lVar6) != '\0');
  local_res10 = FUN_143360950(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x218),lVar4,lVar6,0);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  if (*(longlong *)(param_3 + 0x28) == 0) {
LAB_1435b656a:
    plVar3 = (longlong *)FUN_143610010(param_3 + 0x30,&local_res10,local_48);
    if (plVar3 != (longlong *)0x0) goto LAB_1435b657f;
  }
  else {
    plVar3 = (longlong *)FUN_1435be2b0(*(longlong *)(param_3 + 0x28),&local_res10,local_48);
    if (plVar3 == (longlong *)0x0) goto LAB_1435b656a;
LAB_1435b657f:
    lVar4 = *plVar3;
    if (lVar4 != 0) goto LAB_1435b6669;
  }
  lVar4 = FUN_1434decf0(*(undefined8 *)(param_1 + 0x2c0),&local_res10,local_48);
  if (lVar4 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x1c8);
    local_38 = local_res10;
    *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
    local_30 = local_48;
    if (local_48 != 0) {
      *(uint *)(local_48 + 8) = *(int *)(local_48 + 8) + 1U & 0x8fffffff;
    }
    local_28 = &local_38;
    local_20 = &local_40;
    local_40 = lVar4;
    FUN_1434e5270(lVar6 + 0x30,*(undefined8 *)(lVar6 + 0x38),&local_28,
                  (uint)((*(longlong *)(local_48 + 0x28) << 0x3c) >> 0x3c) ^
                  (*(uint *)(*(longlong *)(local_48 + 0x38) + 0x1c) & 0xffffff) << 2 ^
                  *(uint *)(local_res10 + 0x1c) & 0xffffff);
    if (local_30 != 0) {
      if ((local_30 & 1) == 0) {
        if ((*(uint *)(local_30 + 8) & 0x3fffff) != 0) {
          *(uint *)(local_30 + 8) = *(uint *)(local_30 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        local_30 = local_30 - 1;
      }
    }
    piVar1 = (int *)(local_38 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
LAB_1435b6669:
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (((local_48 != 0) && ((local_48 & 1) == 0)) && ((*(uint *)(local_48 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_48 + 8) = *(uint *)(local_48 + 8) - 1;
    FUN_1434ef880(local_48);
  }
  return lVar4;
}



// FUNCTION 1435b66d0 FUN_1435b66d0 body=333 status=ok
// SIG undefined FUN_1435b66d0(void)

undefined1 *
FUN_1435b66d0(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,int param_6)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  ulonglong local_res8;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar1 = *(undefined8 *)(param_4 + 8);
  FUN_1435b4530(param_1 + 0x28,&local_res8,param_3,uVar1);
  if ((longlong)local_res8 < 0) {
    FUN_1435b7100(param_1,param_3,uVar1,param_4,param_5,param_6);
    *param_2 = 1;
    return param_2;
  }
  if (local_res8 < *(ulonglong *)(param_1 + 0x28)) {
    piVar3 = (int *)FUN_1434ef150(*(undefined8 *)(param_1 + 0x30),local_res8);
  }
  else {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x38) + 0x10 +
                    ((local_res8 & 0xffffffff) - *(ulonglong *)(param_1 + 0x28)) * 0x40);
  }
  iVar2 = (*piVar3 << 0x15) >> 0x1b;
  if ((iVar2 != 0) && (iVar2 < 0xb)) {
    *param_2 = 0;
    return param_2;
  }
  if (iVar2 == 0xc) {
    if (param_6 != 0xd) goto LAB_1435b6792;
  }
  else if ((iVar2 != 0xd) || (param_6 != 0xc)) goto LAB_1435b6792;
  iVar2 = 0xe;
LAB_1435b6792:
  if (iVar2 == param_6) {
    FUN_1435b71f0(param_1,param_3,uVar1,param_5,CONCAT44(uVar4,param_6));
    FUN_1435b7190(param_1,piVar3,param_5,param_6);
    *param_2 = 1;
  }
  else {
    FUN_1435b7100();
    *param_2 = 1;
  }
  return param_2;
}



// FUNCTION 1435b6830 FUN_1435b6830 body=1701 status=ok
// SIG undefined FUN_1435b6830(void)

void FUN_1435b6830(longlong param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  char *pcVar6;
  uint *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  int *piVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  ulonglong uVar14;
  char *pcVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  bool bVar21;
  longlong local_res18;
  ulonglong local_res20;
  uint local_c8;
  uint uStack_c4;
  undefined8 uStack_c0;
  ulonglong local_b8;
  byte bStack_b0;
  undefined7 uStack_af;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  uint local_90;
  uint uStack_8c;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  longlong local_48;
  
  lVar17 = -1;
  do {
    lVar17 = lVar17 + 1;
  } while (*(char *)(*(longlong *)(param_3 + 0x10) + lVar17) != '\0');
  lVar5 = FUN_143360950(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x10) + 0x218)
                        ,*(longlong *)(param_3 + 0x10),lVar17,0);
  *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
  pcVar6 = *(char **)(param_3 + 0x18);
  lVar17 = *(longlong *)(param_1 + 0x98);
  local_res18 = lVar5;
  local_a0 = lVar17;
  if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) {
    pcVar6 = *(char **)(*param_2 + 0x10);
    if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) {
      bVar21 = true;
    }
    else {
      bVar21 = false;
    }
    pcVar6 = *(char **)(*param_2 + 0x18);
    if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if ((bVar21) && (!bVar4)) {
      uVar13 = *(uint *)(param_3 + 0x20);
      pcVar15 = "";
      if (pcVar6 != (char *)0x0) {
        pcVar15 = pcVar6;
      }
      local_res20 = FUN_143360a60(*(undefined8 *)(*(longlong *)(lVar17 + 0x10) + 0x218),pcVar15);
      *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
      FUN_1435cc220(lVar17,&local_a8,uVar13 & 0xf,&local_res20);
      piVar10 = (int *)(local_res20 + 0x18);
      *piVar10 = *piVar10 + -1;
      lVar17 = local_a8;
      if (*piVar10 == 0) {
        FUN_14335f920();
        lVar17 = local_a8;
      }
      goto LAB_1435b69e3;
    }
    lVar17 = *(longlong *)(lVar17 + 0x1d8);
  }
  else {
    if (pcVar6 != PTR_s_http___adobe_com_AS3_2006_builti_1467d9780) {
      lVar18 = (longlong)PTR_s_http___adobe_com_AS3_2006_builti_1467d9780 - (longlong)pcVar6;
      do {
        cVar2 = *pcVar6;
        cVar3 = pcVar6[lVar18];
        if (cVar2 != cVar3) break;
        pcVar6 = pcVar6 + 1;
      } while (cVar3 != '\0');
      if (cVar2 != cVar3) {
        uVar13 = *(uint *)(param_3 + 0x20);
        local_res20 = FUN_143360a60(*(undefined8 *)(*(longlong *)(lVar17 + 0x10) + 0x218));
        *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
        FUN_1435cc220(lVar17,&local_a8,uVar13 & 0xf,&local_res20);
        piVar10 = (int *)(local_res20 + 0x18);
        *piVar10 = *piVar10 + -1;
        lVar17 = local_a8;
        if (*piVar10 == 0) {
          FUN_14335f920();
          lVar17 = local_a8;
        }
        goto LAB_1435b69e3;
      }
    }
    lVar17 = *(longlong *)(lVar17 + 0x1e0);
  }
  if (lVar17 != 0) {
    *(uint *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1U & 0x8fffffff;
  }
LAB_1435b69e3:
  *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
  local_c8 = 5;
  uVar19 = 0xb;
  uStack_c0 = (int *)0x0;
  uVar13 = *(uint *)(param_3 + 0x20) >> 4 & 3;
  if (uVar13 != 0) {
    if (uVar13 == 1) {
      uVar19 = 0xc;
    }
    else if (uVar13 == 2) {
      uVar19 = 0xd;
    }
  }
  local_6c = 0xffffffff;
  puVar1 = (ulonglong *)(param_1 + 0x28);
  local_50 = 0;
  *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 4;
  local_b8 = param_3;
  local_68 = lVar17;
  local_48 = lVar5;
  puVar7 = (uint *)FUN_14360fa90(puVar1,&local_res18);
  if (puVar7 != (uint *)0x0) {
    lVar18 = *(longlong *)(lVar17 + 0x28);
    uVar9 = (ulonglong)*puVar7;
    do {
      if (uVar9 < *puVar1) {
        lVar8 = FUN_1434ef150(*(undefined8 *)(param_1 + 0x30),uVar9);
      }
      else {
        lVar8 = *(longlong *)(param_1 + 0x38) + 0x10 + ((uVar9 & 0xffffffff) - *puVar1) * 0x40;
      }
      lVar8 = *(longlong *)(lVar8 + 8);
      iVar20 = (int)((lVar18 << 0x3c) >> 0x3c);
      if ((int)((*(longlong *)(lVar8 + 0x28) << 0x3c) >> 0x3c) == iVar20) {
        if (iVar20 != 1) {
          if (iVar20 == 3) {
            bVar21 = lVar17 == lVar8;
          }
          else {
            bVar21 = *(longlong *)(lVar8 + 0x38) == *(longlong *)(lVar17 + 0x38);
          }
          if (!bVar21) goto LAB_1435b6ae2;
        }
        if (-1 < (longlong)uVar9) {
          if (uVar9 < *puVar1) {
            piVar10 = (int *)FUN_1434ef150(*(undefined8 *)(param_1 + 0x30),uVar9);
          }
          else {
            piVar10 = (int *)(*(longlong *)(param_1 + 0x38) + 0x10 +
                             ((uVar9 & 0xffffffff) - *puVar1) * 0x40);
          }
          uVar13 = (*piVar10 << 0x15) >> 0x1b;
          if ((uVar13 != 0) && ((int)uVar13 < 0xb)) {
            uVar13 = 5;
            bVar21 = false;
            goto LAB_1435b6d98;
          }
          if (uVar13 == 0xc) {
            if (uVar19 == 0xd) {
LAB_1435b6bd7:
              uVar13 = 0xe;
            }
          }
          else if ((uVar13 == 0xd) && (uVar19 == 0xc)) goto LAB_1435b6bd7;
          if (uVar13 == uVar19) {
            FUN_1435b71f0(param_1,&local_res18,lVar17,&local_c8,uVar19);
            puVar11 = (undefined8 *)FUN_1434ef190(param_1);
            param_3 = local_b8;
            uVar13 = local_c8;
            uVar16 = piVar10[1];
            if (((*piVar10 << 0x15) >> 0x1b != 0xb) || (uVar19 == 0xb)) {
              puVar7 = (uint *)0x0;
              if (uVar19 < 0xd) {
LAB_1435b6c9a:
                puVar7 = (uint *)((ulonglong)uVar16 * 0x20 + puVar11[1]);
              }
              else if (uVar19 == 0xd) {
                uVar16 = uVar16 + 1;
                goto LAB_1435b6c9a;
              }
              uVar19 = local_c8 & 0x1f;
              if (uVar19 == 3) {
                uStack_78 = *puVar11;
                local_80 = (undefined4)local_b8;
                local_90 = 6;
                uStack_88 = 0;
                if (&local_90 != puVar7) {
                  FUN_143603d30(puVar7);
                  bVar21 = true;
                  *puVar7 = local_90;
                  puVar7[1] = uStack_8c;
                  puVar7[2] = (uint)uStack_88;
                  puVar7[3] = uStack_88._4_4_;
                  *(ulonglong *)(puVar7 + 4) = CONCAT44(uStack_7c,local_80);
                  *(undefined8 *)(puVar7 + 6) = uStack_78;
                  param_3 = local_b8;
                  goto LAB_1435b6d98;
                }
              }
              else if (&local_c8 != puVar7) {
                if (9 < uVar19) {
                  if ((local_c8 >> 9 & 1) == 0) {
                    if (uVar19 == 10) {
                      *(int *)(local_b8 + 0x18) = *(int *)(local_b8 + 0x18) + 1;
                    }
                    else if (10 < uVar19) {
                      if (uVar19 < 0xd) {
                        if (local_b8 != 0) {
                          *(uint *)(local_b8 + 8) = *(int *)(local_b8 + 8) + 1U & 0x8fffffff;
                        }
                      }
                      else if ((uVar19 < 0xf) &&
                              (lVar17 = CONCAT71(uStack_af,bStack_b0), lVar17 != 0)) {
                        *(uint *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1U & 0x8fffffff;
                      }
                    }
                  }
                  else {
                    *uStack_c0 = *uStack_c0 + 1;
                  }
                }
                FUN_143603d30(puVar7);
                bVar21 = true;
                *puVar7 = local_c8;
                puVar7[1] = uStack_c4;
                puVar7[2] = (uint)uStack_c0;
                puVar7[3] = uStack_c0._4_4_;
                *(ulonglong *)(puVar7 + 4) = local_b8;
                *(ulonglong *)(puVar7 + 6) = CONCAT71(uStack_af,bStack_b0);
                goto LAB_1435b6d98;
              }
            }
          }
          else {
            FUN_1435b4900(puVar1,&local_res20,&local_res18,piVar10);
            lVar18 = *(longlong *)(param_1 + 0x38);
            uVar14 = local_res20 & 0xffffffff;
            uVar9 = *puVar1;
            FUN_1435b71f0(param_1,&local_res18,lVar17,&local_c8,uVar19);
            FUN_1435b7020(param_1,lVar18 + 0x10 + (uVar14 - uVar9) * 0x40,&local_c8,uVar19);
          }
          bVar21 = true;
          param_3 = local_b8;
          uVar13 = local_c8;
          goto LAB_1435b6d98;
        }
        break;
      }
LAB_1435b6ae2:
      if (uVar9 < *puVar1) {
        uVar9 = Scaleform::GFx::AS3::Slots::GetPrevSlotIndex(*(undefined8 *)(param_1 + 0x30),uVar9);
      }
      else {
        uVar9 = *(ulonglong *)((uVar9 - *puVar1) * 0x40 + 8 + *(longlong *)(param_1 + 0x38));
      }
    } while (-1 < (longlong)uVar9);
  }
  FUN_1435b4900(puVar1,&local_res20,&local_res18,&local_70);
  lVar18 = *(longlong *)(param_1 + 0x38);
  uVar14 = local_res20 & 0xffffffff;
  uVar9 = *puVar1;
  FUN_1435b71f0(param_1,&local_res18,lVar17,&local_c8,uVar19);
  FUN_1435b7020(param_1,lVar18 + 0x10 + (uVar14 - uVar9) * 0x40,&local_c8,uVar19);
  bVar21 = true;
  param_3 = local_b8;
  uVar13 = local_c8;
LAB_1435b6d98:
  FUN_1435ab510(&local_70);
  piVar10 = (int *)(lVar5 + 0x18);
  *piVar10 = *piVar10 + -1;
  if (*piVar10 == 0) {
    FUN_14335f920(lVar5);
  }
  uVar19 = uVar13 & 0x1f;
  if (9 < uVar19) {
    if ((uVar13 >> 9 & 1) == 0) {
      if (uVar19 == 10) {
        piVar10 = (int *)(param_3 + 0x18);
        *piVar10 = *piVar10 + -1;
        if (*piVar10 == 0) {
          FUN_14335f920(param_3);
        }
      }
      else if ((uVar19 == 0xb) || (uVar19 == 0xc)) {
        if (((local_b8 & 1) == 0) && ((param_3 != 0 && ((*(uint *)(param_3 + 8) & 0x3fffff) != 0))))
        {
          *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) - 1;
          FUN_1434ef880(param_3);
        }
      }
      else if ((((uVar19 - 0xd < 2) && ((bStack_b0 & 1) == 0)) &&
               (lVar17 = CONCAT71(uStack_af,bStack_b0), lVar17 != 0)) &&
              ((*(uint *)(lVar17 + 8) & 0x3fffff) != 0)) {
        *(uint *)(lVar17 + 8) = *(uint *)(lVar17 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *uStack_c0 = *uStack_c0 + -1;
      if (*uStack_c0 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
  }
  lVar17 = local_a0;
  if (!bVar21) {
    uVar12 = FUN_1435c8e40(&local_a0,0x41d,local_a0);
    FUN_1435ccf60(lVar17,uVar12,&DAT_145b15be8);
    piVar10 = (int *)(local_98 + 0x18);
    *piVar10 = *piVar10 + -1;
    if (*piVar10 == 0) {
      FUN_14335f920();
    }
  }
  piVar10 = (int *)(lVar5 + 0x18);
  *piVar10 = *piVar10 + -1;
  if (*piVar10 == 0) {
    FUN_14335f920(lVar5);
  }
  return;
}



// FUNCTION 1435b6ee0 FUN_1435b6ee0 body=22 status=ok
// SIG undefined FUN_1435b6ee0(void)

uint * FUN_1435b6ee0(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  uint *in_RAX;
  longlong lVar5;
  
  plVar1 = (longlong *)(param_1 + 200);
  *plVar1 = *plVar1 + 0x20;
  puVar2 = *(uint **)(param_1 + 200);
  if (*plVar1 == 0) {
    return in_RAX;
  }
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(param_2 + 2);
  uVar3 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(puVar2 + 6) = uVar3;
  uVar4 = *param_2 & 0x1f;
  if (9 < uVar4) {
    if ((*param_2 >> 9 & 1) != 0) {
      **(int **)(param_2 + 2) = **(int **)(param_2 + 2) + 1;
      return puVar2;
    }
    if (uVar4 == 10) {
      *(int *)(*(longlong *)(param_2 + 4) + 0x18) = *(int *)(*(longlong *)(param_2 + 4) + 0x18) + 1;
    }
    else if (10 < uVar4) {
      if (uVar4 < 0xd) {
        lVar5 = *(longlong *)(param_2 + 4);
      }
      else {
        if (0xe < uVar4) {
          return puVar2;
        }
        lVar5 = *(longlong *)(param_2 + 6);
      }
      if (lVar5 != 0) {
        *(uint *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1U & 0x8fffffff;
        return puVar2;
      }
    }
  }
  return puVar2;
}



// FUNCTION 1435b6f00 FUN_1435b6f00 body=268 status=ok
// SIG undefined FUN_1435b6f00(void)

void FUN_1435b6f00(longlong param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  plVar1 = (longlong *)(param_1 + 200);
  lVar9 = (*param_2 - param_2[1]) + 0x20 >> 5;
  if (*(longlong *)(param_1 + 0xd0) == 0) {
    lVar6 = (**(code **)(*DAT_146b62f28 + 0x70))
                      (DAT_146b62f28,plVar1,(ulonglong)(param_3 + (int)lVar9 & 0xffff) << 5,0);
    *(longlong *)(param_1 + 0xd0) = lVar6;
    *plVar1 = lVar6 + -0x20;
  }
  if (lVar9 != 0) {
    lVar6 = 0;
    do {
      lVar8 = param_2[1];
      *plVar1 = *plVar1 + 0x20;
      puVar3 = (undefined4 *)*plVar1;
      if (*plVar1 != 0) {
        *puVar3 = *(undefined4 *)(lVar6 + lVar8);
        *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(lVar6 + 8 + lVar8);
        puVar2 = (undefined8 *)(lVar6 + 0x10 + lVar8);
        uVar5 = puVar2[1];
        *(undefined8 *)(puVar3 + 4) = *puVar2;
        *(undefined8 *)(puVar3 + 6) = uVar5;
        uVar7 = *(uint *)(lVar6 + lVar8) & 0x1f;
        if (9 < uVar7) {
          if ((*(uint *)(lVar6 + lVar8) >> 9 & 1) == 0) {
            if (uVar7 == 10) {
              piVar4 = (int *)(*(longlong *)(lVar6 + 0x10 + lVar8) + 0x18);
              *piVar4 = *piVar4 + 1;
            }
            else if (10 < uVar7) {
              if (uVar7 < 0xd) {
                lVar8 = *(longlong *)(lVar6 + 0x10 + lVar8);
              }
              else {
                if (0xe < uVar7) goto LAB_1435b6fee;
                lVar8 = *(longlong *)(lVar6 + 0x18 + lVar8);
              }
              if (lVar8 != 0) {
                *(uint *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1U & 0x8fffffff;
              }
            }
          }
          else {
            piVar4 = *(int **)(lVar6 + 8 + lVar8);
            *piVar4 = *piVar4 + 1;
          }
        }
      }
LAB_1435b6fee:
      lVar6 = lVar6 + 0x20;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 1435b7020 FUN_1435b7020 body=217 status=ok
// SIG undefined FUN_1435b7020(void)

void FUN_1435b7020(longlong param_1,uint *param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 local_res10 [8];
  
  uVar3 = FUN_1434ef190();
  *param_2 = *param_2 & 0xffffffdf;
  *param_2 = *param_2 | 0x10;
  uVar1 = param_2[1];
  if ((longlong)(int)uVar1 < 0) {
    puVar4 = (undefined8 *)FUN_1435d7fc0(uVar3,local_res10,param_3,param_4);
    uVar3 = *puVar4;
    *param_2 = *param_2 ^ (param_4 << 6 ^ *param_2) & 0x7c0;
    param_2[1] = (uint)uVar3;
    goto LAB_1435b70d4;
  }
  uVar5 = (int)(*param_2 << 0x15) >> 0x1b;
  if ((uVar5 == 0xb) && (param_4 != 0xb)) {
    return;
  }
  FUN_1435d7f20(uVar3,(longlong)(int)uVar1,param_3,param_4);
  uVar2 = uVar5;
  if (uVar5 == 0xc) {
    if (param_4 == 0xd) {
LAB_1435b7092:
      uVar2 = 0xe;
    }
  }
  else {
    if (uVar5 != 0xd) {
      return;
    }
    if (param_4 == 0xc) goto LAB_1435b7092;
  }
  if (uVar2 == uVar5) {
    return;
  }
  *param_2 = *param_2 & 0xfffff83f;
  *param_2 = *param_2 | (uVar2 & 0x1f) << 6;
  param_2[1] = uVar1;
LAB_1435b70d4:
  FUN_1435b4b70(param_1 + 0x28,param_2);
  return;
}



// FUNCTION 1435b7100 FUN_1435b7100 body=137 status=ok
// SIG undefined FUN_1435b7100(void)

void FUN_1435b7100(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  longlong lVar1;
  longlong lVar2;
  uint local_res8 [2];
  
  FUN_1435b4900(param_1 + 0x28,local_res8,param_2);
  lVar1 = *(longlong *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x38);
  FUN_1435b71f0(param_1,param_2,param_3,param_5,param_6);
  FUN_1435b7020(param_1,((ulonglong)local_res8[0] - lVar1) * 0x40 + lVar2 + 0x10,param_5,param_6);
  return;
}



// FUNCTION 1435b7190 FUN_1435b7190 body=80 status=ok
// SIG undefined FUN_1435b7190(void)

void FUN_1435b7190(undefined8 param_1,int *param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1434ef190();
  if (((*param_2 << 0x15) >> 0x1b != 0xb) || (param_4 == 0xb)) {
    FUN_1435d7f20(uVar1,(longlong)param_2[1],param_3,param_4);
  }
  return;
}



// FUNCTION 1435b71f0 FUN_1435b71f0 body=252 status=ok
// SIG undefined FUN_1435b71f0(void)

void FUN_1435b71f0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  int param_5)

{
  uint *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int *piVar4;
  
  if (param_3 == *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x1d8)) {
    puVar1 = (uint *)FUN_14360fa90(param_1 + 0x28);
    uVar2 = (ulonglong)*puVar1;
    do {
      if (uVar2 < *(ulonglong *)(param_1 + 0x28)) {
        piVar4 = (int *)FUN_1434ef150(*(undefined8 *)(param_1 + 0x30),uVar2);
      }
      else {
        piVar4 = (int *)(*(longlong *)(param_1 + 0x38) + 0x10 +
                        ((uVar2 & 0xffffffff) - *(ulonglong *)(param_1 + 0x28)) * 0x40);
      }
      if ((*(byte *)(*(longlong *)(piVar4 + 2) + 0x28) >> 4 & 1) != 0) {
        uVar3 = FUN_1434ef190(param_1);
        if (((*piVar4 << 0x15) >> 0x1b == 0xb) && (param_5 != 0xb)) {
          return;
        }
        FUN_1435d7f20(uVar3,(longlong)piVar4[1],param_4);
        return;
      }
      if (uVar2 < *(ulonglong *)(param_1 + 0x28)) {
        uVar2 = Scaleform::GFx::AS3::Slots::GetPrevSlotIndex(*(undefined8 *)(param_1 + 0x30),uVar2);
      }
      else {
        uVar2 = *(ulonglong *)
                 ((uVar2 - *(ulonglong *)(param_1 + 0x28)) * 0x40 + 8 +
                 *(longlong *)(param_1 + 0x38));
      }
    } while (-1 < (longlong)uVar2);
  }
  return;
}



// FUNCTION 1435b7330 FUN_1435b7330 body=331 status=ok
// SIG undefined FUN_1435b7330(void)

void FUN_1435b7330(longlong param_1,longlong param_2)

{
  int *piVar1;
  ulonglong uVar2;
  uint *puVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  
  uVar6 = *(longlong *)(param_1 + 0x40) + *(longlong *)(param_1 + 0x28);
  while (uVar6 != 0) {
    uVar6 = uVar6 - 1;
    if (((longlong)uVar6 < 0) || (uVar6 < *(ulonglong *)(param_1 + 0x28))) {
      puVar3 = (uint *)FUN_1434ef150(*(undefined8 *)(param_1 + 0x30),uVar6);
    }
    else {
      puVar3 = (uint *)(*(longlong *)(param_1 + 0x38) + 0x10 +
                       ((uVar6 & 0xffffffff) - *(ulonglong *)(param_1 + 0x28)) * 0x40);
    }
    if ((*puVar3 & 0x30) == 0) {
      puVar7 = (ulonglong *)((int)puVar3[1] + param_2);
      iVar4 = (int)(*puVar3 << 0x15) >> 0x1b;
      if (iVar4 == 2) {
        if (9 < ((byte)(uint)*puVar7 & 0x1f)) {
          if (((uint)*puVar7 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar7);
          }
          else {
            piVar1 = (int *)puVar7[1];
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
            *(uint *)puVar7 = (uint)*puVar7 & 0xfffffde0;
            puVar7[1] = 0;
            puVar7[2] = 0;
            puVar7[3] = 0;
          }
        }
      }
      else if (iVar4 == 3) {
        uVar2 = *puVar7;
        if (uVar2 != 0) {
          uVar5 = uVar2 & 0xfffffffffffffffd;
          if ((uVar2 & 1) == 0) {
            if ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *puVar7 = ((ulonglong)((uint)*puVar7 & 2) - 1) + uVar5;
          }
        }
      }
      else if ((iVar4 == 9) && (*puVar7 != 0)) {
        piVar1 = (int *)(*puVar7 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
    }
  }
  return;
}



// FUNCTION 1435b7490 FUN_1435b7490 body=196 status=ok
// SIG undefined FUN_1435b7490(void)

void FUN_1435b7490(longlong param_1,longlong param_2)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  uVar5 = *(longlong *)(param_1 + 0x40) + *(longlong *)(param_1 + 0x28);
  if (uVar5 != 0) {
    do {
      if (((longlong)uVar4 < 0) || (uVar4 < *(ulonglong *)(param_1 + 0x28))) {
        puVar1 = (uint *)FUN_1434ef150(*(undefined8 *)(param_1 + 0x30),uVar4);
      }
      else {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x38) + 0x10 +
                         ((uVar4 & 0xffffffff) - *(ulonglong *)(param_1 + 0x28)) * 0x40);
      }
      if ((*puVar1 & 0x30) == 0) {
        puVar3 = (undefined8 *)((int)puVar1[1] + param_2);
        iVar2 = (int)(*puVar1 << 0x15) >> 0x1b;
        if (iVar2 == 2) {
          if (puVar3 != (undefined8 *)0x0) {
            *(undefined4 *)puVar3 = 0;
            puVar3[1] = 0;
          }
        }
        else if (iVar2 == 3) {
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = 0;
          }
        }
        else if (iVar2 == 9) {
          *puVar3 = 0;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  return;
}



// FUNCTION 1435b7560 FUN_1435b7560 body=566 status=ok
// SIG undefined FUN_1435b7560(void)

undefined1 * FUN_1435b7560(undefined8 param_1,undefined1 *param_2,uint *param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 uVar13;
  uint uVar14;
  longlong local_res20;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  byte local_70 [4];
  undefined8 local_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_50;
  
  local_80 = *(undefined8 *)(param_4 + 0x28);
  local_90 = *(undefined8 *)(param_3 + 2);
  uVar14 = 0;
  uVar3 = *param_3;
  if (uVar3 != 0) {
    do {
      local_58 = 0;
      local_50 = 0;
      local_70[0] = 0;
      local_6c = 0xffffffffffffffff;
      local_64 = 0xffffffff;
      local_60 = 0;
      local_5c = 0xffffffff;
      local_98 = local_90;
      FUN_14361ced0(&local_98,local_70);
      uVar10 = local_70[0] & 0xf;
      if (((local_70[0] & 0xf) == 0) || (uVar10 - 4 < 3)) {
        lVar7 = *(longlong *)(param_4 + 0xa0);
        iVar2 = local_6c._4_4_;
        lVar11 = (longlong)(int)local_6c * 0x10 + *(longlong *)(lVar7 + 0x148);
        if (local_6c._4_4_ != 0) {
          uVar13 = 0;
          iVar6 = 1;
          uVar5 = 0;
          if ((local_70[0] & 0xf) == 0) {
LAB_1435b766e:
            uVar13 = uVar5;
            uVar12 = (ulonglong)(int)local_64;
LAB_1435b7672:
            iVar6 = FUN_1435b6140(param_1,param_4,uVar12 * 0x10 + *(longlong *)(lVar7 + 0x148));
          }
          else {
            if (uVar10 == 4) {
LAB_1435b7644:
              uVar13 = 1;
              uVar5 = uVar13;
              if (((local_70[0] & 0xf) == 0) || (uVar10 == 6)) goto LAB_1435b766e;
              local_88 = *(undefined8 *)(*(longlong *)(lVar7 + 0x78) + (ulonglong)local_64 * 8);
              uVar10 = FUN_14358f8b0(&local_88);
              uVar12 = (ulonglong)uVar10;
              goto LAB_1435b7672;
            }
            if (uVar10 == 5) {
              iVar6 = 2;
            }
            else if (uVar10 == 6) goto LAB_1435b7644;
          }
          FUN_1435ba8a0(param_4,&local_res20,(longlong)*(int *)(lVar11 + 8));
          lVar7 = FUN_1435ba5d0(param_4,lVar11);
          if (lVar7 != 0) {
            *(uint *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1U & 0x8fffffff;
          }
          puVar8 = (uint *)FUN_1435b56a0(param_1,iVar2 + -1,&local_res20,lVar7,param_4,local_90,
                                         uVar13);
          uVar4 = local_80;
          uVar10 = *puVar8;
          if ((uVar10 & 0x7c0) != 0) {
            uVar9 = FUN_1435c8e40(&local_80,0x41d,local_80);
            FUN_1435ccf60(uVar4,uVar9,&DAT_145b15be8);
            piVar1 = (int *)(local_78 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
            piVar1 = (int *)(local_res20 + 0x18);
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1;
            *param_2 = 0;
            if (iVar2 != 0) {
              return param_2;
            }
            FUN_14335f920();
            return param_2;
          }
          puVar8[1] = 0xffffffff;
          *puVar8 = (iVar6 << 6 ^ uVar10) & 0x7c0 ^ uVar10;
          piVar1 = (int *)(local_res20 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
      }
      uVar14 = uVar14 + 1;
      if (uVar3 <= uVar14) break;
      local_90 = local_98;
    } while( true );
  }
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1435b77a0 FUN_1435b77a0 body=2123 status=ok
// SIG undefined FUN_1435b77a0(void)

void FUN_1435b77a0(longlong *param_1,char *param_2,uint *param_3,longlong param_4,char param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  int *piVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  char cVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  uint *puVar18;
  longlong lVar19;
  bool bVar20;
  char local_res18;
  longlong local_148;
  uint local_140;
  uint uStack_13c;
  undefined8 uStack_138;
  uint local_130;
  undefined4 uStack_12c;
  byte bStack_128;
  undefined7 uStack_127;
  uint local_120;
  uint local_11c;
  byte local_118 [4];
  undefined8 local_114;
  uint local_10c;
  undefined1 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  uint local_c8 [2];
  uint local_c0 [2];
  undefined8 local_b8;
  uint local_b0;
  uint uStack_ac;
  undefined8 uStack_a8;
  uint local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  int local_90 [2];
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 local_60 [8];
  longlong local_58;
  
  local_f0 = *(undefined8 *)(param_3 + 2);
  local_b8 = *(undefined8 *)(param_4 + 0x28);
  local_11c = *param_3;
  cVar14 = '\x01';
  local_res18 = '\x01';
  local_120 = 0;
  if (local_11c == 0) {
    *param_2 = '\x01';
    return;
  }
  do {
    uVar12 = local_f0;
    local_100 = 0;
    local_f8 = 0;
    local_118[0] = 0;
    local_114 = 0xffffffffffffffff;
    local_10c = 0xffffffff;
    local_108 = 0;
    local_104 = 0xffffffff;
    FUN_14361ced0(&local_f0,local_118);
    uVar13 = local_118[0] & 0xf;
    if (((local_118[0] & 0xf) == 0) || (uVar13 - 4 < 3)) {
      if ((param_5 != '\0') && (local_114._4_4_ == 0)) goto LAB_1435b787a;
    }
    else if (param_5 == '\0') {
LAB_1435b787a:
      iVar2 = 1;
      lVar15 = (longlong)(int)local_114 * 0x10 +
               *(longlong *)(*(longlong *)(param_4 + 0xa0) + 0x148);
      if (uVar13 - 1 < 3) {
        lVar19 = -1;
      }
      else {
        lVar19 = param_1[0xf];
        param_1[0xf] = lVar19 + 1;
      }
      bVar1 = 0;
      switch(uVar13) {
      case 1:
        iVar2 = 0xb;
        break;
      case 2:
        iVar2 = 0xc;
        break;
      case 3:
        iVar2 = 0xd;
        break;
      case 4:
      case 6:
        bVar1 = 1;
      case 0:
        lVar8 = *(longlong *)(param_4 + 0xa0);
        if (((local_118[0] & 0xf) == 0) || (uVar13 == 6)) {
          uVar9 = (ulonglong)(int)local_10c;
        }
        else {
          local_e8 = *(undefined8 *)(*(longlong *)(lVar8 + 0x78) + (ulonglong)local_10c * 8);
          uVar13 = FUN_14358f8b0(&local_e8);
          uVar9 = (ulonglong)uVar13;
        }
        iVar2 = FUN_1435b6140(param_1,param_4,uVar9 * 0x10 + *(longlong *)(lVar8 + 0x148));
        break;
      case 5:
        iVar2 = 2;
      }
      FUN_1435ba8a0(param_4,&local_148,(longlong)*(int *)(lVar15 + 8));
      lVar15 = FUN_1435ba5d0(param_4,lVar15);
      uVar5 = (**(code **)(*param_1 + 0x28))(param_1,&local_d0,0);
      uVar5 = FUN_143360200(uVar5,&local_d8,&DAT_145b11fc0);
      plVar6 = (longlong *)Scaleform::GFx::ASString::operator+(uVar5,&local_e0,&local_148);
      local_68 = *plVar6;
      if (local_68 != 0) {
        *(int *)(local_68 + 0x18) = *(int *)(local_68 + 0x18) + 1;
      }
      if (lVar15 != 0) {
        *(uint *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1U & 0x8fffffff;
      }
      local_90[1] = 0xffffffff;
      local_80 = 0;
      local_90[0] = bVar1 + 4;
      *(uint *)(param_4 + 8) = *(int *)(param_4 + 8) + 1U & 0x8fffffff;
      local_88 = lVar15;
      local_78 = param_4;
      local_70 = uVar12;
      if (local_68 != 0) {
        *(int *)(local_68 + 0x18) = *(int *)(local_68 + 0x18) + 1;
        piVar10 = (int *)(local_68 + 0x18);
        *piVar10 = *piVar10 + -1;
        if (*piVar10 == 0) {
          FUN_14335f920();
        }
      }
      piVar10 = (int *)(local_e0 + 0x18);
      *piVar10 = *piVar10 + -1;
      if (*piVar10 == 0) {
        FUN_14335f920();
      }
      piVar10 = (int *)(local_d8 + 0x18);
      *piVar10 = *piVar10 + -1;
      if (*piVar10 == 0) {
        FUN_14335f920();
      }
      piVar10 = (int *)(local_d0 + 0x18);
      *piVar10 = *piVar10 + -1;
      if (*piVar10 == 0) {
        FUN_14335f920();
      }
      puVar18 = (uint *)0x0;
      if ((local_118[0] & 0xf) - 1 < 3) {
        puVar17 = (ulonglong *)(param_1 + 5);
        uStack_138 = (int *)0x0;
        uVar13 = 3;
        local_130 = local_10c;
        local_140 = 3;
        local_res18 = '\0';
        puVar7 = (uint *)FUN_14360fa90(puVar17,&local_148);
        if (puVar7 != (uint *)0x0) {
          lVar19 = *(longlong *)(lVar15 + 0x28);
          uVar9 = (ulonglong)*puVar7;
          do {
            if (uVar9 < *puVar17) {
              lVar8 = FUN_1434ef150(param_1[6],uVar9);
            }
            else {
              lVar8 = param_1[7] + 0x10 + ((uVar9 & 0xffffffff) - *puVar17) * 0x40;
            }
            lVar8 = *(longlong *)(lVar8 + 8);
            iVar4 = (int)((lVar19 << 0x3c) >> 0x3c);
            if ((int)((*(longlong *)(lVar8 + 0x28) << 0x3c) >> 0x3c) == iVar4) {
              if (iVar4 != 1) {
                if (iVar4 == 3) {
                  bVar20 = lVar15 == lVar8;
                }
                else {
                  bVar20 = *(longlong *)(lVar8 + 0x38) == *(longlong *)(lVar15 + 0x38);
                }
                if (!bVar20) goto LAB_1435b7b21;
              }
              if (-1 < (longlong)uVar9) {
                if (uVar9 < *puVar17) {
                  piVar10 = (int *)FUN_1434ef150(param_1[6]);
                }
                else {
                  piVar10 = (int *)(param_1[7] + 0x10 + ((uVar9 & 0xffffffff) - *puVar17) * 0x40);
                }
                iVar4 = (*piVar10 << 0x15) >> 0x1b;
                if ((iVar4 != 0) && (iVar4 < 0xb)) goto LAB_1435b7bb6;
                if (iVar4 == 0xc) {
                  if (iVar2 == 0xd) {
LAB_1435b7c61:
                    iVar4 = 0xe;
                  }
                }
                else if ((iVar4 == 0xd) && (iVar2 == 0xc)) goto LAB_1435b7c61;
                if (iVar4 == iVar2) {
                  FUN_1435b71f0(param_1,&local_148,lVar15,&local_140,iVar2);
                  puVar11 = (undefined8 *)FUN_1434ef190(param_1);
                  uVar13 = local_140;
                  uVar3 = piVar10[1];
                  if (((*piVar10 << 0x15) >> 0x1b != 0xb) || (iVar2 == 0xb)) {
                    if (10 < iVar2) {
                      if (0xc < iVar2) {
                        if (iVar2 != 0xd) goto LAB_1435b7d3d;
                        uVar3 = uVar3 + 1;
                      }
                      puVar18 = (uint *)((ulonglong)uVar3 * 0x20 + puVar11[1]);
                    }
LAB_1435b7d3d:
                    uVar3 = local_140 & 0x1f;
                    if (uVar3 == 3) {
                      uStack_98 = *puVar11;
                      local_a0 = local_130;
                      local_b0 = 6;
                      uStack_a8 = 0;
                      if (&local_b0 != puVar18) {
                        FUN_143603d30(puVar18);
                        lVar15 = CONCAT44(uStack_12c,local_130);
                        local_res18 = '\x01';
                        *puVar18 = local_b0;
                        puVar18[1] = uStack_ac;
                        puVar18[2] = (uint)uStack_a8;
                        puVar18[3] = uStack_a8._4_4_;
                        *(ulonglong *)(puVar18 + 4) = CONCAT44(uStack_9c,local_a0);
                        *(undefined8 *)(puVar18 + 6) = uStack_98;
                        goto LAB_1435b7bbb;
                      }
                    }
                    else if (&local_140 != puVar18) {
                      lVar15 = CONCAT44(uStack_12c,local_130);
                      if (9 < uVar3) {
                        if ((local_140 >> 9 & 1) == 0) {
                          if (uVar3 == 10) {
                            *(int *)(lVar15 + 0x18) = *(int *)(lVar15 + 0x18) + 1;
                          }
                          else if (10 < uVar3) {
                            if (uVar3 < 0xd) {
                              if (lVar15 != 0) {
                                *(uint *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1U & 0x8fffffff;
                              }
                            }
                            else if ((uVar3 < 0xf) &&
                                    (lVar19 = CONCAT71(uStack_127,bStack_128), lVar19 != 0)) {
                              *(uint *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1U & 0x8fffffff;
                            }
                          }
                        }
                        else {
                          *uStack_138 = *uStack_138 + 1;
                        }
                      }
                      FUN_143603d30(puVar18);
                      local_res18 = '\x01';
                      *puVar18 = local_140;
                      puVar18[1] = uStack_13c;
                      puVar18[2] = (uint)uStack_138;
                      puVar18[3] = uStack_138._4_4_;
                      *(ulonglong *)(puVar18 + 4) = CONCAT44(uStack_12c,local_130);
                      *(ulonglong *)(puVar18 + 6) = CONCAT71(uStack_127,bStack_128);
                      goto LAB_1435b7bbb;
                    }
                  }
                }
                else {
                  FUN_1435b4900(puVar17,local_c8,&local_148,piVar10);
                  uVar16 = (ulonglong)local_c8[0];
                  uVar9 = *puVar17;
                  lVar19 = param_1[7];
                  FUN_1435b71f0(param_1,&local_148,lVar15,&local_140,iVar2);
                  FUN_1435b7020(param_1,(uVar16 - uVar9) * 0x40 + lVar19 + 0x10,&local_140,iVar2);
                }
                lVar15 = CONCAT44(uStack_12c,local_130);
                local_res18 = '\x01';
                uVar13 = local_140;
                goto LAB_1435b7bbb;
              }
              break;
            }
LAB_1435b7b21:
            if (uVar9 < *puVar17) {
              uVar9 = Scaleform::GFx::AS3::Slots::GetPrevSlotIndex(param_1[6],uVar9);
            }
            else {
              uVar9 = *(ulonglong *)((uVar9 - *puVar17) * 0x40 + 8 + param_1[7]);
            }
          } while (-1 < (longlong)uVar9);
        }
        FUN_1435b4900(puVar17,local_c0,&local_148,local_90);
        uVar16 = (ulonglong)local_c0[0];
        uVar9 = *puVar17;
        lVar19 = param_1[7];
        FUN_1435b71f0(param_1,&local_148,lVar15,&local_140,iVar2);
        FUN_1435b7020(param_1,(uVar16 - uVar9) * 0x40 + lVar19 + 0x10,&local_140,iVar2);
        local_res18 = '\x01';
        uVar13 = local_140;
LAB_1435b7bb6:
        lVar15 = CONCAT44(uStack_12c,local_130);
LAB_1435b7bbb:
        uVar3 = uVar13 & 0x1f;
        if (9 < uVar3) {
          if ((uVar13 >> 9 & 1) == 0) {
            if (uVar3 == 10) {
              piVar10 = (int *)(lVar15 + 0x18);
              *piVar10 = *piVar10 + -1;
              if (*piVar10 == 0) {
                FUN_14335f920(lVar15);
              }
            }
            else if ((uVar3 == 0xb) || (uVar3 == 0xc)) {
              if (((local_130 & 1) == 0) &&
                 ((lVar15 != 0 && ((*(uint *)(lVar15 + 8) & 0x3fffff) != 0)))) {
                *(uint *)(lVar15 + 8) = *(uint *)(lVar15 + 8) - 1;
                FUN_1434ef880(lVar15);
              }
            }
            else if ((((uVar3 - 0xd < 2) && ((bStack_128 & 1) == 0)) &&
                     (lVar15 = CONCAT71(uStack_127,bStack_128), lVar15 != 0)) &&
                    ((*(uint *)(lVar15 + 8) & 0x3fffff) != 0)) {
              *(uint *)(lVar15 + 8) = *(uint *)(lVar15 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *uStack_138 = *uStack_138 + -1;
            if (*uStack_138 == 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
          }
        }
LAB_1435b7f0e:
        if (local_res18 != '\0') {
          FUN_1435ab510(local_90);
          piVar10 = (int *)(local_148 + 0x18);
          *piVar10 = *piVar10 + -1;
          cVar14 = local_res18;
          if (*piVar10 == 0) {
            FUN_14335f920();
          }
          goto LAB_1435b7f40;
        }
      }
      else {
        puVar18 = (uint *)FUN_1435b4900(param_1 + 5,local_60,&local_148,local_90);
        lVar15 = param_1[7];
        lVar8 = ((ulonglong)*puVar18 - param_1[5]) * 0x40;
        uVar13 = *(uint *)(lVar8 + 0x10 + lVar15);
        if ((uVar13 & 0x7c0) == 0) {
          *(int *)(lVar8 + 0x14 + lVar15) = (int)lVar19;
          *(uint *)(lVar8 + 0x10 + lVar15) = (iVar2 << 6 ^ uVar13) & 0x7c0 ^ uVar13;
          goto LAB_1435b7f0e;
        }
        local_res18 = '\0';
      }
      uVar12 = FUN_1435c8e40(local_60,0x41d,local_b8);
      FUN_1435ccf60(local_b8,uVar12,&DAT_145b15be8);
      piVar10 = (int *)(local_58 + 0x18);
      *piVar10 = *piVar10 + -1;
      if (*piVar10 == 0) {
        FUN_14335f920();
      }
      FUN_1435ab510(local_90);
      piVar10 = (int *)(local_148 + 0x18);
      *piVar10 = *piVar10 + -1;
      cVar14 = local_res18;
      if (*piVar10 == 0) {
        FUN_14335f920();
      }
      break;
    }
LAB_1435b7f40:
    local_120 = local_120 + 1;
  } while (local_120 < local_11c);
  *param_2 = cVar14;
  return;
}



// FUNCTION 1435b8010 FUN_1435b8010 body=86 status=ok
// SIG undefined FUN_1435b8010(void)

void FUN_1435b8010(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x28;
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    FUN_1435b44b0(param_1 + 0x28,lVar2);
    *(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x40) + *(longlong *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x78);
  }
  return;
}



// FUNCTION 1435b8070 FUN_1435b8070 body=325 status=ok
// SIG undefined FUN_1435b8070(void)

undefined8 * FUN_1435b8070(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  ushort uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  byte bVar4;
  ulonglong uVar5;
  
  uVar3 = FUN_1435b64a0(param_2,param_3,*(undefined8 *)(param_2 + 0x1c8));
  FUN_1435b4c50(param_1,param_2,uVar3,1,0);
  *param_1 = &PTR_FUN_145b17648;
  param_1[0x1b] = 0;
  plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x200) + 0xd8);
  if (plVar2[0x15] == 0) {
    (**(code **)(*plVar2 + 0x50))(plVar2);
  }
  FUN_1434f0700(param_1 + 0x15,plVar2[0x15]);
  param_1[0x11] = param_1[0x11] | 0x20;
  if (param_1[0x16] == 0) {
    FUN_1435b82b0(param_1);
  }
  uVar5 = 0;
  uVar1 = *(ushort *)(*param_3 + 8);
  if (uVar1 != 0) {
    do {
      FUN_1435b5940(param_1,param_3[3] + uVar5 * 0x18);
      bVar4 = (char)uVar5 + 1;
      uVar5 = (ulonglong)bVar4;
    } while (bVar4 < uVar1);
  }
  uVar5 = 0;
  uVar1 = *(ushort *)(*param_3 + 6);
  if (uVar1 != 0) {
    do {
      FUN_1435b6830(param_1,param_3,uVar5 * 0x30 + param_3[2]);
      bVar4 = (char)uVar5 + 1;
      uVar5 = (ulonglong)bVar4;
    } while (bVar4 < uVar1);
  }
  return param_1;
}



// FUNCTION 1435b81c0 FUN_1435b81c0 body=142 status=ok
// SIG undefined FUN_1435b81c0(void)

undefined8 * FUN_1435b81c0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  
  FUN_1435b4c50();
  *param_1 = &PTR_FUN_145b17648;
  param_1[0x1b] = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x200) + 0xd8);
  if (plVar1[0x15] == 0) {
    (**(code **)(*plVar1 + 0x50))(plVar1);
  }
  FUN_1434f0700(param_1 + 0x15,plVar1[0x15]);
  param_1[0x11] = param_1[0x11] | 0x20;
  if (param_1[0x16] == 0) {
    FUN_1435b82b0(param_1);
  }
  return param_1;
}



// FUNCTION 1435b8260 FUN_1435b8260 body=63 status=ok
// SIG undefined FUN_1435b8260(void)

void FUN_1435b8260(longlong param_1,undefined8 param_2,code *param_3)

{
  FUN_1435b5d30();
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    (*param_3)(param_2);
  }
  return;
}



// FUNCTION 1435b82b0 FUN_1435b82b0 body=232 status=ok
// SIG undefined FUN_1435b82b0(void)

void FUN_1435b82b0(longlong param_1)

{
  undefined **ppuVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar3 = 3;
  ppuVar1 = &PTR_FUN_1467d9a10;
  lVar2 = 3;
  do {
    FUN_1435b6830(param_1,&PTR_DAT_145b14f60,ppuVar1);
    ppuVar1 = ppuVar1 + 6;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  ppuVar1 = &PTR_LAB_145b4a550;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = &DAT_145af3922;
  local_50 = &DAT_145af3922;
  local_38 = &local_68;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_48 = 0;
  uStack_40 = 0;
  do {
    FUN_1435b6830(param_1,&local_38,ppuVar1);
    ppuVar1 = ppuVar1 + 6;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + 6;
  return;
}



// FUNCTION 1435b83b0 FUN_1435b83b0 body=428 status=ok
// SIG undefined FUN_1435b83b0(void)

undefined8 FUN_1435b83b0(longlong param_1,uint *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x98);
  iVar1 = *(int *)(param_1 + 0x90);
  switch(*param_2 & 0x1f) {
  case 0:
    FUN_1434f0650(param_3);
    return 1;
  case 1:
    if ((param_1 != *(longlong *)(lVar2 + 0x208)) && (iVar1 != 1)) {
      return 0;
    }
    break;
  case 2:
    if ((param_1 != *(longlong *)(lVar2 + 0x208)) && (iVar1 != 2)) {
      return 0;
    }
    FUN_1434f0780(param_3,param_2[4]);
    return 1;
  case 3:
    if ((param_1 != *(longlong *)(lVar2 + 0x208)) && (iVar1 != 3)) {
      return 0;
    }
    FUN_143614720(param_3,param_2[4]);
    return 1;
  case 4:
    if ((param_1 != *(longlong *)(lVar2 + 0x208)) && (iVar1 != 4)) {
      return 0;
    }
    break;
  case 5:
  case 6:
  case 7:
    if ((param_1 != *(longlong *)(lVar2 + 0x208)) && (iVar1 != 10)) {
      return 0;
    }
    break;
  default:
    goto switchD_1435b83f7_caseD_8;
  case 10:
    if ((param_1 != *(longlong *)(lVar2 + 0x208)) && (iVar1 != 5)) {
      return 0;
    }
    break;
  case 0xb:
    if ((param_1 != *(longlong *)(lVar2 + 0x208)) && (iVar1 != 6)) {
      return 0;
    }
    break;
  case 0xc:
    if (*(longlong *)(param_2 + 4) != 0) {
      uVar4 = FUN_1435ca910(lVar2,param_2);
      cVar3 = FUN_1435b5020(param_1,uVar4);
      if (cVar3 == '\0') {
        return 0;
      }
      break;
    }
    goto LAB_1435b8542;
  case 0xd:
  case 0xe:
    break;
  }
LAB_1435b8542:
  FUN_143590140(param_3,param_2);
switchD_1435b83f7_caseD_8:
  return 1;
}



// FUNCTION 1435b85a0 FUN_1435b85a0 body=31 status=ok
// SIG undefined FUN_1435b85a0(void)

undefined8 FUN_1435b85a0(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x20))();
  return param_2;
}



// FUNCTION 1435b85d0 GetFriendsInterface body=31 status=ok
// SIG undefined GetFriendsInterface(void)

undefined8 FOnlineSubsystemSteamEOS::GetFriendsInterface(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))();
  return param_2;
}



// FUNCTION 1435b8600 FUN_1435b8600 body=137 status=ok
// SIG undefined FUN_1435b8600(void)

void FUN_1435b8600(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  *(ulonglong *)(param_1 + 0x88) =
       *(ulonglong *)(param_1 + 0x88) ^
       (ulonglong)((-(*(uint *)(param_2 + 0x88) >> 2 & 1) ^ *(uint *)(param_1 + 0x88)) & 4);
  uVar1 = *(ulonglong *)(param_1 + 0xd8);
  if (param_2 != uVar1) {
    if (uVar1 != 0) {
      if ((uVar1 & 1) != 0) {
        *(ulonglong *)(param_1 + 0xd8) = uVar1 - 1;
        *(ulonglong *)(param_1 + 0xd8) = param_2;
        return;
      }
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *(ulonglong *)(param_1 + 0xd8) = param_2;
  }
  return;
}



// FUNCTION 1435b86b0 FUN_1435b86b0 body=179 status=ok
// SIG undefined FUN_1435b86b0(void)

undefined8 * FUN_1435b86b0(undefined8 *param_1,longlong param_2)

{
  param_1[4] = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 1) = 1;
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
  param_1[0x11] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = param_2;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  param_1[0x19] = 0xffffffffffffffe0;
  param_1[0x1a] = 0;
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x8000000;
  *param_1 = &PTR_FUN_145b17648;
  param_1[0x1b] = 0;
  param_1[0x11] = param_1[0x11] | 0x20;
  return param_1;
}



// FUNCTION 1435b8770 FUN_1435b8770 body=73 status=ok
// SIG undefined FUN_1435b8770(void)

undefined8 *
FUN_1435b8770(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  FUN_1435b4c50(param_1,param_3,param_4,param_5,param_6);
  *param_1 = &PTR_FUN_145b4aa50;
  param_1[0x1b] = param_2;
  return param_1;
}



// FUNCTION 1435b87c0 FUN_1435b87c0 body=93 status=ok
// SIG undefined FUN_1435b87c0(void)

void FUN_1435b87c0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  *param_1 = &PTR_FUN_145b4aa50;
  uVar1 = param_1[0x1b];
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      param_1[0x1b] = uVar1 - 1;
      FUN_1435b4dc0(param_1);
      return;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880();
    }
  }
  FUN_1435b4dc0(param_1);
  return;
}



// FUNCTION 1435b8830 FUN_1435b8830 body=63 status=ok
// SIG undefined FUN_1435b8830(void)

void FUN_1435b8830(longlong param_1,undefined8 param_2,code *param_3)

{
  FUN_1435b5d30();
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    (*param_3)(param_2);
  }
  return;
}



// FUNCTION 1435b8880 FUN_1435b8880 body=225 status=ok
// SIG undefined FUN_1435b8880(void)

void FUN_1435b8880(undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 local_res10 [6];
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  
  lVar2 = *(longlong *)(param_3 + 0xa0);
  if (lVar2 == 0) {
    local_res10[0] = 0x152;
    plVar1 = *(longlong **)(*(longlong *)(param_3 + 0x98) + 0x48);
    lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,*(undefined4 *)(param_3 + 0x80),local_res10);
  }
  else {
    *(undefined8 *)(param_3 + 0xa0) = *(undefined8 *)(lVar2 + 0x28);
  }
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = UInterpTrackInst::UInterpTrackInst(lVar2,param_3);
  }
  uStack_20 = 0;
  local_28 = 0xc;
  if (&local_28 != param_2) {
    if (uVar3 != 0) {
      *(uint *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1U & 0x8fffffff;
    }
    FUN_143603d30(param_2);
    *param_2 = local_28;
    param_2[1] = uStack_24;
    param_2[2] = (undefined4)uStack_20;
    param_2[3] = uStack_20._4_4_;
    *(ulonglong *)(param_2 + 4) = uVar3;
    *(undefined8 *)(param_2 + 6) = uStack_30;
  }
  if ((((uVar3 & 1) == 0) && (uVar3 != 0)) && ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
    FUN_1434ef880(uVar3);
  }
  return;
}



// FUNCTION 1435b8990 FUN_1435b8990 body=161 status=ok
// SIG undefined FUN_1435b8990(void)

longlong * FUN_1435b8990(longlong *param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  longlong local_res8;
  longlong local_res20;
  
  lVar2 = param_1[0x1b];
  (**(code **)(*param_1 + 0x20))(param_1,&local_res8);
  if (*(int *)(*(longlong *)(lVar2 + 0x38) + 0x20) == 0) {
    *param_2 = local_res8;
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  }
  else {
    puVar4 = &DAT_145b1a93c;
    if (param_3 != 0) {
      puVar4 = &DAT_145af796c;
    }
    uVar3 = FUN_143360200(lVar2 + 0x38,&local_res20,puVar4);
    Scaleform::GFx::ASString::operator+(uVar3,param_2,&local_res8);
    piVar1 = (int *)(local_res20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return param_2;
}



// FUNCTION 1435b8a50 FUN_1435b8a50 body=377 status=ok
// SIG undefined FUN_1435b8a50(void)

undefined8 FUN_1435b8a50(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong local_res8;
  
  lVar1 = param_1[0x13];
  if ((int)param_1[0x12] == 0x10) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x11) >> 4 & 1) == 0) {
    local_res8 = param_1[0x1e];
    uVar9 = 0;
    uVar10 = uVar9;
    if (local_res8 != 0) {
      do {
        lVar7 = (**(code **)(*param_1 + 0x38))(param_1);
        if (lVar7 == 0) {
          uVar11 = *(undefined8 *)(param_1[0x13] + 0x1c8);
        }
        else {
          uVar11 = *(undefined8 *)(lVar7 + 0x30);
        }
        lVar7 = FUN_1435c7e00(lVar1,param_1[0x1d] + uVar10,uVar11);
        if (lVar7 != 0) {
          if (*(longlong *)(lVar7 + 0xd8) == param_2) {
            return 1;
          }
          cVar2 = FUN_1435b8a50(*(longlong *)(lVar7 + 0xd8),param_2);
          if (cVar2 != '\0') {
            return 1;
          }
        }
        uVar9 = uVar9 + 1;
        uVar10 = uVar10 + 0x30;
      } while (uVar9 < local_res8);
    }
  }
  else {
    lVar5 = FUN_1434e0eb0();
    local_res8 = param_1[0x20];
    lVar7 = *(longlong *)(lVar5 + 0xa0);
    uVar3 = FUN_14358f8b0(&local_res8);
    uVar8 = 0;
    if (uVar3 != 0) {
      do {
        uVar4 = FUN_14358f8b0(&local_res8);
        lVar6 = FUN_1435c7f00(lVar1,lVar5,(ulonglong)uVar4 * 0x10 + *(longlong *)(lVar7 + 0x148));
        if ((lVar6 != 0) &&
           ((*(longlong *)(lVar6 + 0xd8) == param_2 ||
            (cVar2 = FUN_1435b8a50(*(longlong *)(lVar6 + 0xd8),param_2), cVar2 != '\0')))) {
          return 1;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar3);
    }
  }
  return 0;
}



// FUNCTION 1435b8be0 FUN_1435b8be0 body=2024 status=ok
// SIG undefined FUN_1435b8be0(void)

void FUN_1435b8be0(longlong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint *puVar8;
  ulonglong *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  int *piVar20;
  longlong lVar21;
  bool bVar22;
  ulonglong local_res18;
  int *local_res20;
  undefined1 local_b0 [8];
  longlong local_a8;
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  ulonglong local_70;
  
  lVar3 = *(longlong *)(param_1 + 0x98);
  uVar17 = 0;
  uVar5 = *(ulonglong *)(param_3 + 0x28);
  if (*(longlong *)(param_3 + 0x40) + uVar5 != 0) {
    puVar1 = (ulonglong *)(param_1 + 0x28);
    do {
      if (((longlong)uVar17 < 0) || (uVar17 < uVar5)) {
        uVar5 = Scaleform::GFx::AS3::Slots::GetSlotNameNode(*(undefined8 *)(param_3 + 0x30),uVar17);
      }
      else {
        uVar5 = *(ulonglong *)
                 (((uVar17 & 0xffffffff) - uVar5) * 0x40 + *(longlong *)(param_3 + 0x38));
      }
      *(int *)(uVar5 + 0x18) = *(int *)(uVar5 + 0x18) + 1;
      iVar19 = *(int *)(uVar5 + 0x18);
      local_res18 = uVar5;
      if (((longlong)uVar17 < 0) || (uVar17 < *(ulonglong *)(param_3 + 0x28))) {
        piVar20 = (int *)FUN_1434ef150(*(undefined8 *)(param_3 + 0x30),uVar17);
      }
      else {
        piVar20 = (int *)(*(longlong *)(param_3 + 0x38) + 0x10 +
                         ((uVar17 & 0xffffffff) - *(ulonglong *)(param_3 + 0x28)) * 0x40);
      }
      lVar10 = *(longlong *)(piVar20 + 2);
      *(int *)(uVar5 + 0x18) = iVar19 + 1;
      lVar21 = *(longlong *)(param_1 + 0x68);
      if (lVar21 != 0) {
        uVar7 = *(ulonglong *)(lVar21 + 8);
        uVar18 = *(uint *)(uVar5 + 0x1c) & uVar7;
        lVar6 = uVar18 * 3 + 2;
        puVar9 = (ulonglong *)(lVar21 + lVar6 * 8);
        if ((*(longlong *)(lVar21 + lVar6 * 8) != -2) &&
           (uVar14 = uVar18, (*(uint *)(puVar9[1] + 0x1c) & uVar7) == uVar18)) {
          while (((*(uint *)(puVar9[1] + 0x1c) & uVar7) != uVar18 || (puVar9[1] != uVar5))) {
            uVar14 = *puVar9;
            if (uVar14 == 0xffffffffffffffff) goto LAB_1435b8d31;
            puVar9 = (ulonglong *)(lVar21 + uVar14 * 0x18 + 0x10);
          }
          if (-1 < (longlong)uVar14) {
            lVar21 = lVar21 + (uVar14 + 1) * 0x18;
            goto LAB_1435b8d37;
          }
        }
      }
LAB_1435b8d31:
      lVar21 = 0;
LAB_1435b8d37:
      *(int *)(uVar5 + 0x18) = iVar19;
      puVar8 = (uint *)(lVar21 + 8);
      if (lVar21 == 0) {
        puVar8 = (uint *)0x0;
      }
      local_res20 = piVar20;
      if (iVar19 == 0) {
        FUN_14335f920(uVar5);
      }
      if (puVar8 != (uint *)0x0) {
        lVar21 = *(longlong *)(lVar10 + 0x28);
        uVar7 = (ulonglong)*puVar8;
        do {
          if (((longlong)uVar7 < 0) || (uVar7 < *puVar1)) {
            lVar6 = FUN_1434ef150(*(undefined8 *)(param_1 + 0x30),uVar7);
          }
          else {
            lVar6 = *(longlong *)(param_1 + 0x38) + 0x10 + ((uVar7 & 0xffffffff) - *puVar1) * 0x40;
          }
          lVar6 = *(longlong *)(lVar6 + 8);
          iVar19 = (int)((lVar21 << 0x3c) >> 0x3c);
          if ((int)((*(longlong *)(lVar6 + 0x28) << 0x3c) >> 0x3c) == iVar19) {
            if (iVar19 != 1) {
              if (iVar19 == 3) {
                bVar22 = lVar10 == lVar6;
              }
              else {
                bVar22 = *(longlong *)(lVar6 + 0x38) == *(longlong *)(lVar10 + 0x38);
              }
              if (!bVar22) goto LAB_1435b8dce;
            }
            if (-1 < (longlong)uVar7) {
              if (uVar7 < *puVar1) {
                lVar21 = FUN_1434ef150(*(undefined8 *)(param_1 + 0x30),uVar7);
              }
              else {
                lVar21 = *(longlong *)(param_1 + 0x38) + 0x10 +
                         ((uVar7 & 0xffffffff) - *puVar1) * 0x40;
              }
              if (lVar21 != 0) goto LAB_1435b92e6;
            }
            break;
          }
LAB_1435b8dce:
          if (uVar7 < *puVar1) {
            uVar7 = Scaleform::GFx::AS3::Slots::GetPrevSlotIndex
                              (*(undefined8 *)(param_1 + 0x30),uVar7);
          }
          else {
            uVar7 = *(ulonglong *)((uVar7 - *puVar1) * 0x40 + 8 + *(longlong *)(param_1 + 0x38));
          }
        } while (-1 < (longlong)uVar7);
      }
      lVar10 = *(longlong *)(lVar3 + 0x1d8);
      *(int *)(uVar5 + 0x18) = *(int *)(uVar5 + 0x18) + 1;
      lVar21 = *(longlong *)(param_1 + 0x68);
      if (lVar21 != 0) {
        uVar7 = *(ulonglong *)(lVar21 + 8);
        uVar18 = *(uint *)(uVar5 + 0x1c) & uVar7;
        lVar6 = uVar18 * 3 + 2;
        puVar9 = (ulonglong *)(lVar21 + lVar6 * 8);
        if ((*(longlong *)(lVar21 + lVar6 * 8) != -2) &&
           (uVar14 = uVar18, (*(uint *)(puVar9[1] + 0x1c) & uVar7) == uVar18)) {
          while (((*(uint *)(puVar9[1] + 0x1c) & uVar7) != uVar18 || (puVar9[1] != uVar5))) {
            uVar14 = *puVar9;
            if (uVar14 == 0xffffffffffffffff) goto LAB_1435b8ed1;
            puVar9 = (ulonglong *)(lVar21 + uVar14 * 0x18 + 0x10);
          }
          if (-1 < (longlong)uVar14) {
            lVar21 = lVar21 + (uVar14 + 1) * 0x18;
            goto LAB_1435b8ed7;
          }
        }
      }
LAB_1435b8ed1:
      lVar21 = 0;
LAB_1435b8ed7:
      iVar19 = *(int *)(uVar5 + 0x18) + -1;
      *(int *)(uVar5 + 0x18) = iVar19;
      puVar8 = (uint *)(lVar21 + 8);
      if (lVar21 == 0) {
        puVar8 = (uint *)0x0;
      }
      if (iVar19 == 0) {
        FUN_14335f920(uVar5);
      }
      if (puVar8 != (uint *)0x0) {
        lVar21 = *(longlong *)(lVar10 + 0x28);
        uVar7 = (ulonglong)*puVar8;
        do {
          if (((longlong)uVar7 < 0) || (uVar7 < *puVar1)) {
            lVar6 = FUN_1434ef150(*(undefined8 *)(param_1 + 0x30),uVar7);
          }
          else {
            lVar6 = *(longlong *)(param_1 + 0x38) + 0x10 + ((uVar7 & 0xffffffff) - *puVar1) * 0x40;
          }
          lVar6 = *(longlong *)(lVar6 + 8);
          iVar19 = (int)((lVar21 << 0x3c) >> 0x3c);
          if ((int)((*(longlong *)(lVar6 + 0x28) << 0x3c) >> 0x3c) == iVar19) {
            if (iVar19 != 1) {
              if (iVar19 == 3) {
                bVar22 = lVar10 == lVar6;
              }
              else {
                bVar22 = *(longlong *)(lVar6 + 0x38) == *(longlong *)(lVar10 + 0x38);
              }
              if (!bVar22) goto LAB_1435b8f79;
            }
            if (-1 < (longlong)uVar7) {
              if (uVar7 < *puVar1) {
                lVar21 = FUN_1434ef150(*(undefined8 *)(param_1 + 0x30),uVar7);
              }
              else {
                lVar21 = *(longlong *)(param_1 + 0x38) + 0x10 +
                         ((uVar7 & 0xffffffff) - *puVar1) * 0x40;
              }
              goto LAB_1435b8fb1;
            }
            break;
          }
LAB_1435b8f79:
          if (uVar7 < *puVar1) {
            uVar7 = Scaleform::GFx::AS3::Slots::GetPrevSlotIndex
                              (*(undefined8 *)(param_1 + 0x30),uVar7);
          }
          else {
            uVar7 = *(ulonglong *)((uVar7 - *puVar1) * 0x40 + 8 + *(longlong *)(param_1 + 0x38));
          }
        } while (-1 < (longlong)uVar7);
      }
      lVar21 = 0;
LAB_1435b8fb1:
      if (lVar21 == 0) {
        if ((*(byte *)(param_3 + 0x88) >> 2 & 1) == 0) {
          uVar11 = *(undefined8 *)(param_1 + 0x98);
          uVar13 = FUN_1435c8e40(local_b0,0x462,uVar11);
          FUN_1435ccf60(uVar11,uVar13,&DAT_145b15be8);
          piVar20 = (int *)(local_a8 + 0x18);
          *piVar20 = *piVar20 + -1;
          if (*piVar20 == 0) {
            FUN_14335f920();
          }
          piVar20 = (int *)(uVar5 + 0x18);
          *piVar20 = *piVar20 + -1;
          if (*piVar20 != 0) {
            return;
          }
          FUN_14335f920(uVar5);
          return;
        }
        iVar19 = (*piVar20 << 0x15) >> 0x1b;
        *(ulonglong *)(*(longlong *)(piVar20 + 2) + 0x28) =
             *(ulonglong *)(*(longlong *)(piVar20 + 2) + 0x28) | 0x10;
        lVar21 = *(longlong *)(piVar20 + 2);
        puVar8 = (uint *)FUN_14360fa90(puVar1,&local_res18);
        if (puVar8 != (uint *)0x0) {
          lVar10 = *(longlong *)(lVar21 + 0x28);
          uVar7 = (ulonglong)*puVar8;
          do {
            if (uVar7 < *puVar1) {
              lVar6 = FUN_1434ef150(*(undefined8 *)(param_1 + 0x30),uVar7);
            }
            else {
              lVar6 = *(longlong *)(param_1 + 0x38) + 0x10 + ((uVar7 & 0xffffffff) - *puVar1) * 0x40
              ;
            }
            lVar6 = *(longlong *)(lVar6 + 8);
            iVar16 = (int)((lVar10 << 0x3c) >> 0x3c);
            if ((int)((*(longlong *)(lVar6 + 0x28) << 0x3c) >> 0x3c) == iVar16) {
              if (iVar16 == 1) goto LAB_1435b9155;
              if (iVar16 == 3) {
                bVar22 = lVar21 == lVar6;
              }
              else {
                bVar22 = *(longlong *)(lVar6 + 0x38) == *(longlong *)(lVar21 + 0x38);
              }
              if (bVar22) goto LAB_1435b9155;
            }
            if (uVar7 < *puVar1) {
              uVar7 = Scaleform::GFx::AS3::Slots::GetPrevSlotIndex
                                (*(undefined8 *)(param_1 + 0x30),uVar7);
            }
            else {
              uVar7 = *(ulonglong *)((uVar7 - *puVar1) * 0x40 + 8 + *(longlong *)(param_1 + 0x38));
            }
          } while (-1 < (longlong)uVar7);
        }
        uVar7 = 0xffffffffffffffff;
LAB_1435b9155:
        piVar20 = local_res20;
        if ((longlong)uVar7 < 0) {
          puVar9 = (ulonglong *)FUN_1435b4900(puVar1,local_98,&local_res18,local_res20);
          uVar7 = *puVar9;
        }
        lVar21 = ((uVar7 & 0xffffffff) - *puVar1) * 0x40 + *(longlong *)(param_1 + 0x38);
        if (10 < iVar19) {
          if (iVar19 < 0xd) {
            uVar2 = piVar20[1];
            lVar10 = FUN_1434ef190(param_3);
            lVar10 = *(longlong *)(lVar10 + 8);
            uVar11 = FUN_1434ef190(param_1);
            puVar12 = (undefined8 *)
                      FUN_1435d7fc0(uVar11,local_b0,(ulonglong)uVar2 * 0x20 + lVar10,iVar19);
            uVar11 = *puVar12;
            *(uint *)(lVar21 + 0x10) =
                 *(uint *)(lVar21 + 0x10) ^ (iVar19 << 6 ^ *(uint *)(lVar21 + 0x10)) & 0x7c0;
            *(int *)(lVar21 + 0x14) = (int)uVar11;
          }
          else {
            if (iVar19 == 0xd) {
              iVar19 = piVar20[1];
              lVar10 = FUN_1434ef190(param_3);
              lVar10 = (ulonglong)(iVar19 + 1) * 0x20 + *(longlong *)(lVar10 + 8);
              uVar11 = FUN_1434ef190(param_1);
              puVar15 = local_80;
            }
            else {
              if (iVar19 != 0xe) goto LAB_1435b92e6;
              uVar2 = piVar20[1];
              lVar10 = FUN_1434ef190(param_3);
              lVar10 = *(longlong *)(lVar10 + 8);
              uVar11 = FUN_1434ef190(param_1);
              puVar12 = (undefined8 *)
                        FUN_1435d7fc0(uVar11,local_90,(ulonglong)uVar2 * 0x20 + lVar10,0xc);
              uVar11 = *puVar12;
              *(uint *)(lVar21 + 0x10) = *(uint *)(lVar21 + 0x10) & 0xfffffb3f | 0x300;
              *(int *)(lVar21 + 0x14) = (int)uVar11;
              iVar19 = piVar20[1];
              lVar10 = FUN_1434ef190(param_3);
              lVar10 = (ulonglong)(iVar19 + 1) * 0x20 + *(longlong *)(lVar10 + 8);
              uVar11 = FUN_1434ef190(param_1);
              puVar15 = local_88;
            }
            puVar12 = (undefined8 *)FUN_1435d7fc0(uVar11,puVar15,lVar10,0xd);
            uVar11 = *puVar12;
            *(uint *)(lVar21 + 0x10) = *(uint *)(lVar21 + 0x10) & 0xfffffb7f | 0x340;
            *(int *)(lVar21 + 0x14) = (int)uVar11;
          }
        }
      }
      else {
        FUN_1435ab450(local_78,lVar21);
        uVar7 = *(ulonglong *)(piVar20 + 2);
        uVar18 = local_70;
        if (uVar7 != local_70) {
          if (uVar7 != 0) {
            *(uint *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1U & 0x8fffffff;
          }
          uVar18 = uVar7;
          if (((local_70 != 0) && ((local_70 & 1) == 0)) &&
             ((*(uint *)(local_70 + 8) & 0x3fffff) != 0)) {
            *(uint *)(local_70 + 8) = *(uint *)(local_70 + 8) - 1;
            FUN_1434ef880();
          }
        }
        local_70 = uVar18;
        FUN_1435b4900(puVar1,local_a0,&local_res18,local_78);
        FUN_1435ab510(local_78);
      }
LAB_1435b92e6:
      piVar20 = (int *)(uVar5 + 0x18);
      *piVar20 = *piVar20 + -1;
      if (*piVar20 == 0) {
        FUN_14335f920(uVar5);
      }
      if (((longlong)uVar17 < 0) ||
         (uVar17 < (ulonglong)(*(longlong *)(param_3 + 0x28) + *(longlong *)(param_3 + 0x40)))) {
        uVar17 = uVar17 + 1;
      }
      uVar5 = *(ulonglong *)(param_3 + 0x28);
    } while ((uVar17 & 0xffffffff) < *(longlong *)(param_3 + 0x40) + uVar5);
  }
  for (plVar4 = *(longlong **)(param_3 + 0xb0); plVar4 != (longlong *)0x0;
      plVar4 = (longlong *)plVar4[0x16]) {
    (**(code **)(*plVar4 + 0x70))(plVar4,param_2,param_1);
  }
  return;
}



// FUNCTION 1435b93d0 FUN_1435b93d0 body=914 status=ok
// SIG undefined FUN_1435b93d0(void)

undefined8 * FUN_1435b93d0(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  ushort uVar3;
  uint *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  byte bVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong local_res8;
  undefined8 local_res10;
  undefined4 local_68 [2];
  ulonglong local_60;
  uint local_58;
  int *local_50;
  uint local_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  
  uVar8 = *(uint *)*param_3;
  lVar5 = FUN_1435b64a0(param_2,param_3,*(undefined8 *)(param_2 + 0x1c8));
  lVar7 = 0;
  lVar13 = lVar7;
  if (lVar5 != 0) {
    lVar13 = *(longlong *)(lVar5 + 0xd8);
  }
  puVar9 = &DAT_145af3922;
  if (*(undefined1 **)(*param_3 + 0x18) != (undefined1 *)0x0) {
    puVar9 = *(undefined1 **)(*param_3 + 0x18);
  }
  local_res8 = FUN_143360a60(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x218),puVar9);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_1435cc220(param_2,&local_res10,0,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_1435b4c50(param_1,param_2,lVar13,(byte)(uVar8 >> 1) & 1,(byte)(uVar8 >> 3) & 1);
  param_1[0x1b] = local_res10;
  plVar2 = param_1 + 0x1d;
  param_1[0x1c] = param_3;
  *param_1 = &PTR_FUN_145b4aac8;
  uVar12 = 0;
  *plVar2 = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(uint *)(param_1 + 0x10) = (uint)*(ushort *)(*param_3 + 4);
  uVar3 = *(ushort *)(*param_3 + 0xc);
  if (uVar3 != 0) {
    do {
      FUN_1435b5940(param_1,param_3[5] + uVar12 * 0x18);
      bVar11 = (char)uVar12 + 1;
      uVar12 = (ulonglong)bVar11;
    } while (bVar11 < uVar3);
  }
  uVar12 = 0;
  uVar3 = *(ushort *)(*param_3 + 10);
  if (uVar3 != 0) {
    do {
      FUN_1435b6830(param_1,param_3,uVar12 * 0x30 + param_3[4]);
      bVar11 = (char)uVar12 + 1;
      uVar12 = (ulonglong)bVar11;
    } while (bVar11 < uVar3);
  }
  puVar4 = (uint *)*param_3;
  if ((*puVar4 >> 4 & 1) != 0) {
    param_1[0x11] = param_1[0x11] | 4;
  }
  plVar6 = *(longlong **)(puVar4 + 10);
  if ((plVar6 != (longlong *)0x0) && (lVar13 = lVar7, *plVar6 != 0)) {
    do {
      FUN_1435ae9b0(local_68,param_1[0x13],*(undefined8 *)(lVar7 + (longlong)plVar6));
      FUN_1436139a0(plVar2,plVar2,param_1[0x1e] + 1);
      uVar12 = local_60;
      lVar5 = CONCAT44(uStack_3c,uStack_40);
      puVar10 = (undefined4 *)(*plVar2 + -0x30 + param_1[0x1e] * 0x30);
      lVar7 = CONCAT44(uStack_44,local_48);
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = local_68[0];
        *(ulonglong *)(puVar10 + 2) = local_60;
        if (local_60 != 0) {
          *(uint *)(local_60 + 8) = *(int *)(local_60 + 8) + 1U & 0x8fffffff;
        }
        puVar10[4] = local_58;
        *(int **)(puVar10 + 6) = local_50;
        puVar10[8] = local_48;
        puVar10[9] = uStack_44;
        puVar10[10] = uStack_40;
        puVar10[0xb] = uStack_3c;
        uVar8 = local_58 & 0x1f;
        if (9 < uVar8) {
          if ((local_58 >> 9 & 1) == 0) {
            if (uVar8 == 10) {
              *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
            }
            else if (10 < uVar8) {
              if (uVar8 < 0xd) {
                if (lVar7 != 0) {
                  *(uint *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1U & 0x8fffffff;
                }
              }
              else if ((uVar8 < 0xf) && (lVar5 != 0)) {
                *(uint *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1U & 0x8fffffff;
              }
            }
          }
          else {
            *local_50 = *local_50 + 1;
          }
        }
      }
      uVar8 = local_58 & 0x1f;
      if (9 < uVar8) {
        if ((local_58 >> 9 & 1) == 0) {
          if (uVar8 == 10) {
            piVar1 = (int *)(lVar7 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          else if ((uVar8 == 0xb) || (uVar8 == 0xc)) {
            if (((local_48 & 1) == 0) && ((lVar7 != 0 && ((*(uint *)(lVar7 + 8) & 0x3fffff) != 0))))
            {
              *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else if ((((uVar8 - 0xd < 2) && ((uStack_40 & 1) == 0)) && (lVar5 != 0)) &&
                  ((*(uint *)(lVar5 + 8) & 0x3fffff) != 0)) {
            *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) - 1;
            FUN_1434ef880(lVar5);
          }
        }
        else {
          *local_50 = *local_50 + -1;
          if (*local_50 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_50);
          }
        }
      }
      if (((uVar12 != 0) && ((uVar12 & 1) == 0)) && ((*(uint *)(uVar12 + 8) & 0x3fffff) != 0)) {
        *(uint *)(uVar12 + 8) = *(uint *)(uVar12 + 8) - 1;
        FUN_1434ef880(uVar12);
      }
      plVar6 = *(longlong **)(puVar4 + 10);
      lVar13 = lVar13 + 1;
      lVar7 = lVar13 * 8;
    } while (plVar6[lVar13] != 0);
    if (lVar13 != 0) {
      FUN_1435b9950(param_1,0,param_1);
    }
  }
  return param_1;
}



// FUNCTION 1435b9770 FUN_1435b9770 body=185 status=ok
// SIG undefined FUN_1435b9770(void)

void FUN_1435b9770(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_145b4aac8;
  lVar3 = param_1[0x1e];
  lVar2 = param_1[0x1d] + -0x30 + lVar3 * 0x30;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    FUN_1434e6250(lVar2);
    lVar2 = lVar2 + -0x30;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[0x1d]);
  *param_1 = &PTR_FUN_145b4aa50;
  uVar1 = param_1[0x1b];
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x1b] = uVar1 - 1;
    }
  }
  FUN_1435b4dc0(param_1);
  return;
}



// FUNCTION 1435b9830 FUN_1435b9830 body=78 status=ok
// SIG undefined FUN_1435b9830(void)

longlong * FUN_1435b9830(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(**(longlong **)(param_1 + 0xe0) + 0x10);
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(lVar1 + lVar2) != '\0');
  lVar1 = FUN_143360950(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x10) + 0x218)
                        ,lVar1,lVar2,0);
  *param_2 = lVar1;
  *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
  return param_2;
}



// FUNCTION 1435b9890 FUN_1435b9890 body=183 status=ok
// SIG undefined FUN_1435b9890(void)

void FUN_1435b9890(longlong param_1,undefined8 param_2,code *param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_1435b5d30();
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    (*param_3)(param_2);
  }
  lVar5 = *(longlong *)(param_1 + 0xf0);
  if (lVar5 != 0) {
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0xe8) + lVar4;
      if (*(longlong *)(lVar3 + 8) != 0) {
        (*param_3)(param_2,lVar3 + 8);
      }
      uVar1 = *(uint *)(lVar3 + 0x10) & 0x1f;
      if (10 < uVar1) {
        if (uVar1 < 0xd) {
          plVar2 = (longlong *)(lVar3 + 0x20);
        }
        else {
          if (0xe < uVar1) goto LAB_1435b9924;
          plVar2 = (longlong *)(lVar3 + 0x28);
        }
        if (*plVar2 != 0) {
          (*param_3)(param_2);
        }
      }
LAB_1435b9924:
      lVar4 = lVar4 + 0x30;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 1435b9950 FUN_1435b9950 body=247 status=ok
// SIG undefined FUN_1435b9950(void)

void FUN_1435b9950(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined1 local_38 [8];
  longlong local_30;
  
  lVar2 = *(longlong *)(param_1 + 0x98);
  uVar3 = *(ulonglong *)(param_1 + 0xf0);
  if (param_2 == 0) {
    uVar8 = *(undefined8 *)(lVar2 + 0x1c8);
  }
  else {
    uVar8 = *(undefined8 *)(param_2 + 0x30);
  }
  uVar6 = 0;
  uVar7 = uVar6;
  if (uVar3 != 0) {
    do {
      lVar4 = FUN_1435c82a0(lVar2,*(longlong *)(param_1 + 0xe8) + uVar7,uVar8);
      if ((lVar4 == 0) || (*(longlong *)(lVar4 + 0xd8) == 0)) {
        uVar8 = *(undefined8 *)(param_1 + 0x98);
        uVar5 = FUN_1435c8e40(local_38,0x3f6,uVar8);
        FUN_1435ccf60(uVar8,uVar5,&DAT_145b15be8);
        piVar1 = (int *)(local_30 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) {
          return;
        }
        FUN_14335f920();
        return;
      }
      FUN_1435b8be0(param_3,param_2);
      uVar6 = uVar6 + 1;
      uVar7 = uVar7 + 0x30;
    } while (uVar6 < uVar3);
  }
  return;
}



// FUNCTION 1435b9a50 FUN_1435b9a50 body=31 status=ok
// SIG undefined FUN_1435b9a50(void)

undefined8 FUN_1435b9a50(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1435b64a0();
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0xd8);
  }
  return 0;
}



// FUNCTION 1435b9a80 FUN_1435b9a80 body=95 status=ok
// SIG undefined FUN_1435b9a80(void)

undefined8 *
FUN_1435b9a80(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_1435b4c50(param_1,param_2,param_5,param_6,param_7);
  param_1[0x1b] = param_4;
  *param_1 = &PTR_FUN_145b4ab40;
  lVar2 = *param_3;
  param_1[0x1c] = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  return param_1;
}



// FUNCTION 1435b9af0 FUN_1435b9af0 body=121 status=ok
// SIG undefined FUN_1435b9af0(void)

void FUN_1435b9af0(undefined8 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  *param_1 = &PTR_FUN_145b4ab40;
  piVar1 = (int *)(param_1[0x1c] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_1 = &PTR_FUN_145b4aa50;
  uVar2 = param_1[0x1b];
  if (uVar2 != 0) {
    if ((uVar2 & 1) != 0) {
      param_1[0x1b] = uVar2 - 1;
      FUN_1435b4dc0(param_1);
      return;
    }
    if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
      FUN_1434ef880();
    }
  }
  FUN_1435b4dc0(param_1);
  return;
}



// FUNCTION 1435b9bd0 FUN_1435b9bd0 body=25 status=ok
// SIG undefined FUN_1435b9bd0(void)

undefined8 FUN_1435b9bd0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001435b9bdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x30))();
    return uVar1;
  }
  return 0x40;
}



// FUNCTION 1435b9bf0 FUN_1435b9bf0 body=97 status=ok
// SIG undefined FUN_1435b9bf0(void)

undefined8 * FUN_1435b9bf0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  
  FUN_1435b93d0();
  *param_1 = &PTR_FUN_145b4abb8;
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x208) + 0xd8);
  if (plVar1[0x15] == 0) {
    (**(code **)(*plVar1 + 0x50))(plVar1);
  }
  FUN_1434f0700(param_1 + 0x15,plVar1[0x15]);
  return param_1;
}



// FUNCTION 1435b9c60 FUN_1435b9c60 body=60 status=ok
// SIG undefined FUN_1435b9c60(void)

undefined8 *
FUN_1435b9c60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1435b93d0();
  *param_1 = &PTR_FUN_145b4abb8;
  FUN_1434f0700(param_1 + 0x15,param_4);
  return param_1;
}



// FUNCTION 1435b9cc0 FUN_1435b9cc0 body=114 status=ok
// SIG undefined FUN_1435b9cc0(void)

undefined8 * FUN_1435b9cc0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  
  FUN_1435b93d0(param_1,param_2,&PTR_DAT_145b4a810);
  *param_1 = &PTR_FUN_145b4abb8;
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x208) + 0xd8);
  if (plVar1[0x15] == 0) {
    (**(code **)(*plVar1 + 0x50))(plVar1);
  }
  FUN_1434f0700(param_1 + 0x15,plVar1[0x15]);
  *param_1 = &PTR_FUN_145b4abb8;
  return param_1;
}



// FUNCTION 1435b9d40 FUN_1435b9d40 body=110 status=ok
// SIG undefined FUN_1435b9d40(void)

undefined8 * FUN_1435b9d40(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0x30);
  *param_1 = &PTR_FUN_145b4a938;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[4] = uVar1;
  param_1[5] = param_2;
  *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  param_1[6] = &DAT_1467d9aa0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_145b17510;
  FUN_1435b7490(param_2,param_1);
  return param_1;
}



// FUNCTION 1435b9dc0 FUN_1435b9dc0 body=48 status=ok
// SIG undefined FUN_1435b9dc0(void)

void FUN_1435b9dc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145b17510;
  FUN_1435b7330(param_1[5] & 0xfffffffffffffffe,param_1);
  FUN_1435afe40(param_1);
  return;
}



// FUNCTION 1435b9e00 FUN_1435b9e00 body=75 status=ok
// SIG undefined FUN_1435b9e00(void)

void FUN_1435b9e00(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x45b,uVar2);
  FUN_1435ccf60(uVar2,uVar3,&DAT_145b155b0);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435b9e60 FUN_1435b9e60 body=90 status=ok
// SIG undefined FUN_1435b9e60(void)

void FUN_1435b9e60(longlong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = param_1[5] & 0xfffffffffffffffe;
  if (1 < (*(uint *)(uVar1 + 8) & 0x3fffff)) {
    (**(code **)(*param_1 + 0x10))(param_1,0);
    param_1[5] = *(longlong *)(uVar1 + 0xa0);
    *(longlong **)(uVar1 + 0xa0) = param_1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b9eb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,1);
  return;
}



// FUNCTION 1435b9ec0 FUN_1435b9ec0 body=75 status=ok
// SIG undefined FUN_1435b9ec0(void)

void FUN_1435b9ec0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = param_1 + 0x18;
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar3 = *(longlong *)(param_1 + 0x20);
  while (lVar3 != lVar1) {
    lVar2 = *(longlong *)(lVar3 + 8);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar3);
    lVar3 = lVar2;
  }
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(param_1 + 0x20) = lVar1;
  return;
}



// FUNCTION 1435b9f20 FUN_1435b9f20 body=177 status=ok
// SIG undefined FUN_1435b9f20(void)

longlong FUN_1435b9f20(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  if ((*(longlong *)(param_1 + 0x10) == 0) ||
     (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x10) < param_2)) {
    FUN_1435ba040(param_1,param_2,0);
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar2 = *(ulonglong *)(lVar1 + 0x10);
  if (param_2 < uVar2) {
    puVar4 = (undefined8 *)(lVar1 + param_2 + 7 & 0xfffffffffffffff8);
    uVar3 = (longlong)puVar4 + (param_2 - (lVar1 + param_2));
    uVar5 = 0;
    if (uVar3 < uVar2) {
      uVar5 = uVar2 - uVar3;
    }
    if (0x17 < uVar5) {
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0xffffffffffffffff;
        puVar4[1] = 0xffffffffffffffff;
        puVar4[2] = uVar5;
        *(undefined8 **)(param_1 + 0x10) = puVar4;
        return lVar1;
      }
      *(undefined8 *)(param_1 + 0x10) = 0;
      return lVar1;
    }
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return lVar1;
}



// FUNCTION 1435b9fe0 FUN_1435b9fe0 body=79 status=ok
// SIG undefined FUN_1435b9fe0(void)

void FUN_1435b9fe0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = Scaleform::Alg::RoundUpToPowerOfTwo(param_3);
  bVar2 = 0x40;
  if (bVar1 < 0x40) {
    bVar2 = bVar1;
  }
  if (bVar2 < 8) {
    bVar2 = 8;
  }
  FUN_1435ba1a0(param_1,param_2,bVar2);
  return;
}



// FUNCTION 1435ba040 FUN_1435ba040 body=199 status=ok
// SIG undefined FUN_1435ba040(void)

void FUN_1435ba040(longlong param_1,longlong param_2,byte param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)*(byte *)(param_1 + 1) << 10;
  uVar4 = (param_2 + (ulonglong)param_3 + ((ulonglong)param_3 - 2) & (longlong)(int)-(uint)param_3)
          + 0x18;
  if (uVar6 < uVar4) {
    uVar6 = uVar4;
  }
  puVar3 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),uVar6,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    *puVar3 = 0xffffffffffffffff;
    puVar3[1] = 0xffffffffffffffff;
    puVar3[2] = uVar6;
    puVar5 = puVar3;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  plVar1 = (longlong *)(param_1 + 0x18);
  puVar5[1] = plVar1;
  *puVar5 = uVar2;
  *(undefined8 **)(*plVar1 + 8) = puVar5;
  *plVar1 = (longlong)puVar5;
  puVar5 = puVar3 + 3;
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = 0xffffffffffffffff;
    puVar3[5] = uVar6 - 0x18;
    puVar3[4] = 0xffffffffffffffff;
    *(undefined8 **)(param_1 + 0x10) = puVar5;
    return;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 1435ba1a0 FUN_1435ba1a0 body=251 status=ok
// SIG undefined FUN_1435ba1a0(void)

longlong FUN_1435ba1a0(longlong param_1,ulonglong param_2,byte param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  while( true ) {
    if (*(longlong *)(param_1 + 0x10) == 0) {
      FUN_1435ba040(param_1,param_2,param_3);
    }
    uVar1 = *(ulonglong *)(param_1 + 0x10);
    uVar2 = uVar1;
    if (1 < (ulonglong)param_3) {
      uVar2 = (ulonglong)param_3 - 1;
      uVar2 = uVar2 + uVar1 & ~uVar2;
    }
    uVar2 = uVar2 - uVar1;
    if (uVar2 < *(ulonglong *)(uVar1 + 0x10)) {
      uVar3 = *(ulonglong *)(uVar1 + 0x10) - uVar2;
    }
    else {
      uVar3 = 0;
    }
    if (param_2 <= uVar3) break;
    FUN_1435ba040(param_1,param_2,param_3);
  }
  uVar3 = *(ulonglong *)(uVar1 + 0x10);
  param_2 = uVar2 + param_2;
  if (param_2 < uVar3) {
    puVar5 = (undefined8 *)(uVar1 + param_2 + 7 & 0xfffffffffffffff8);
    uVar4 = (longlong)puVar5 + (param_2 - (uVar1 + param_2));
    uVar6 = 0;
    if (uVar4 < uVar3) {
      uVar6 = uVar3 - uVar4;
    }
    if (0x17 < uVar6) {
      if (puVar5 == (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
      else {
        *puVar5 = 0xffffffffffffffff;
        puVar5[1] = 0xffffffffffffffff;
        puVar5[2] = uVar6;
        *(undefined8 **)(param_1 + 0x10) = puVar5;
      }
      goto LAB_1435ba283;
    }
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
LAB_1435ba283:
  return uVar2 + uVar1;
}



// FUNCTION 1435ba2b0 FUN_1435ba2b0 body=244 status=ok
// SIG undefined FUN_1435ba2b0(void)

undefined8 * FUN_1435ba2b0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  param_1[4] = *(undefined8 *)(param_2 + 0x30);
  *param_1 = &PTR_FUN_145b4ac50;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[5] = param_2;
  param_1[6] = param_3;
  if (param_3 != 0) {
    *(uint *)(param_3 + 8) = *(int *)(param_3 + 8) + 1U & 0x8fffffff;
  }
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
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  uVar4 = lVar3 + 0x48;
  if (uVar4 != 0) {
    *(int *)(lVar3 + 0x60) = *(int *)(lVar3 + 0x60) + 1;
  }
  FUN_1436135b0(param_1 + 0xb,param_1 + 0xb,param_1[0xc] + 1);
  puVar2 = (ulonglong *)(param_1[0xb] + (param_1[0xc] + -1) * 8);
  if (puVar2 != (ulonglong *)0x0) {
    *puVar2 = uVar4;
    if (uVar4 == 0) {
      return param_1;
    }
    *(int *)(lVar3 + 0x60) = *(int *)(lVar3 + 0x60) + 1;
  }
  if ((uVar4 != 0) && ((uVar4 & 1) == 0)) {
    piVar1 = (int *)(lVar3 + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(uVar4);
    }
  }
  return param_1;
}



// FUNCTION 1435ba3b0 FUN_1435ba3b0 body=167 status=ok
// SIG undefined FUN_1435ba3b0(void)

void FUN_1435ba3b0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  *param_1 = &PTR_FUN_145b4ac50;
  FUN_14360b2d0(param_1 + 0x12);
  FUN_1434e5ef0(param_1 + 0xf);
  FUN_14360afc0(param_1 + 0xe);
  FUN_14360acb0(param_1 + 0xb);
  FUN_1434e5ef0(param_1 + 8);
  FUN_14360b100(param_1 + 7);
  FUN_14360b100(param_1 + 7);
  uVar1 = param_1[6];
  if (uVar1 != 0) {
    if ((uVar1 & 1) != 0) {
      param_1[6] = uVar1 - 1;
      FUN_1435ab0c0(param_1);
      return;
    }
    if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
      FUN_1434ef880();
    }
  }
  FUN_1435ab0c0(param_1);
  return;
}



// FUNCTION 1435ba460 FUN_1435ba460 body=359 status=ok
// SIG undefined FUN_1435ba460(void)

void FUN_1435ba460(longlong param_1,undefined8 param_2,code *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  FUN_14360fb50(param_1 + 0x38);
  uVar4 = *(ulonglong *)(param_1 + 0x48);
  uVar5 = 0;
  uVar3 = uVar5;
  if (uVar4 != 0) {
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x40) + uVar3 * 8) != 0) {
        (*param_3)(param_2,*(longlong *)(param_1 + 0x40) + uVar3 * 8);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  lVar1 = *(longlong *)(param_1 + 0x70);
  plVar6 = (longlong *)(param_1 + 0x70);
  if (lVar1 == 0) {
    plVar6 = (longlong *)0x0;
    uVar4 = 0;
  }
  else {
    plVar2 = (longlong *)(lVar1 + 0x10);
    uVar4 = uVar5;
    do {
      if (*plVar2 != -2) break;
      uVar4 = uVar4 + 1;
      plVar2 = plVar2 + 4;
    } while (uVar4 <= *(ulonglong *)(lVar1 + 8));
  }
  do {
    do {
      if (((plVar6 == (longlong *)0x0) || (lVar1 = *plVar6, lVar1 == 0)) ||
         (*(longlong *)(lVar1 + 8) < (longlong)uVar4)) {
        uVar4 = *(ulonglong *)(param_1 + 0x80);
        if (uVar4 != 0) {
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0x78) + uVar5 * 8) != 0) {
              (*param_3)(param_2,*(longlong *)(param_1 + 0x78) + uVar5 * 8);
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar4);
        }
        if (*(longlong *)(param_1 + 0x30) != 0) {
          (*param_3)(param_2,param_1 + 0x30);
        }
        return;
      }
      if (*(longlong *)(lVar1 + 0x28 + uVar4 * 0x20) != 0) {
        (*param_3)(param_2);
      }
      uVar3 = *(ulonglong *)(*plVar6 + 8);
    } while (((longlong)uVar3 < (longlong)uVar4) || (uVar4 = uVar4 + 1, uVar3 < uVar4));
    plVar2 = (longlong *)(uVar4 * 0x20 + 0x10 + *plVar6);
    do {
      if (*plVar2 != -2) break;
      uVar4 = uVar4 + 1;
      plVar2 = plVar2 + 4;
    } while (uVar4 <= uVar3);
  } while( true );
}



// FUNCTION 1435ba5d0 FUN_1435ba5d0 body=249 status=ok
// SIG undefined FUN_1435ba5d0(void)

longlong FUN_1435ba5d0(longlong *param_1,int *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong local_res10;
  undefined1 local_res18 [16];
  byte bStack_29;
  longlong local_28;
  longlong local_20;
  longlong *local_18;
  ulonglong *local_10;
  
  if ((((byte)param_2[3] & 3) < 2) &&
     (lVar2 = FUN_14360fe60(param_1 + 7,(longlong)*param_2,param_2[1]), lVar2 != 0)) {
    return lVar2;
  }
  puVar3 = (ulonglong *)(**(code **)(*param_1 + 0x30))(param_1,local_res18,param_2);
  param_1 = param_1 + 7;
  lVar4 = 0x1505;
  local_res10 = *puVar3;
  local_28 = (longlong)*param_2;
  local_20 = (longlong)param_2[1];
  local_18 = &local_28;
  local_10 = &local_res10;
  lVar2 = 0x10;
  do {
    pbVar1 = &bStack_29 + lVar2;
    lVar2 = lVar2 + -1;
    lVar4 = lVar4 * 0x1003f + (ulonglong)*pbVar1;
  } while (lVar2 != 0);
  FUN_143608340(param_1,param_1,&local_18,lVar4);
  if (((local_res10 != 0) && ((local_res10 & 1) == 0)) &&
     ((*(uint *)(local_res10 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res10 + 8) = *(uint *)(local_res10 + 8) - 1;
    FUN_1434ef880();
  }
  if (1 < ((byte)param_2[3] & 3)) {
    return 0;
  }
  lVar2 = FUN_14360fe60(param_1,(longlong)*param_2,param_2[1]);
  return lVar2;
}



// FUNCTION 1435ba6d0 FUN_1435ba6d0 body=221 status=ok
// SIG undefined FUN_1435ba6d0(void)

void FUN_1435ba6d0(longlong *param_1,undefined8 param_2)

{
  byte *pbVar1;
  longlong lVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong local_res8;
  undefined1 local_res18 [8];
  byte bStack_29;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  ulonglong *local_10;
  
  lVar2 = FUN_14360fe60(param_1 + 7,param_2,0xffffffff);
  if (lVar2 == 0) {
    puVar3 = (ulonglong *)(**(code **)(*param_1 + 0x28))(param_1,local_res18,param_2);
    local_28 = param_2;
    lVar4 = 0x1505;
    local_20 = 0xffffffffffffffff;
    local_res8 = *puVar3;
    local_18 = &local_28;
    local_10 = &local_res8;
    lVar2 = 0x10;
    do {
      pbVar1 = &bStack_29 + lVar2;
      lVar2 = lVar2 + -1;
      lVar4 = lVar4 * 0x1003f + (ulonglong)*pbVar1;
    } while (lVar2 != 0);
    FUN_143608340(param_1 + 7,param_1 + 7,&local_18,lVar4);
    if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
       ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
      FUN_1434ef880();
    }
    FUN_14360fe60(param_1 + 7,param_2,0xffffffff);
  }
  return;
}



// FUNCTION 1435ba7c0 FUN_1435ba7c0 body=210 status=ok
// SIG undefined FUN_1435ba7c0(void)

undefined8 FUN_1435ba7c0(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  if ((ulonglong)param_1[9] <= param_2) {
    uVar1 = param_2 + 1;
    uVar3 = param_1[9];
    FUN_143613680(param_1 + 8,param_1 + 8,uVar1);
    if (uVar3 < uVar1) {
      puVar4 = (undefined8 *)(param_1[8] + uVar3 * 8);
      for (lVar6 = uVar1 - uVar3; lVar6 != 0; lVar6 = lVar6 + -1) {
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = 0;
        }
        puVar4 = puVar4 + 1;
      }
    }
  }
  lVar6 = param_1[8];
  puVar2 = (ulonglong *)(lVar6 + param_2 * 8);
  if (*(longlong *)(lVar6 + param_2 * 8) == 0) {
    puVar5 = (ulonglong *)(**(code **)(*param_1 + 0x38))(param_1,local_res8,param_2);
    uVar1 = *puVar2;
    uVar3 = *puVar5;
    if (uVar3 != uVar1) {
      if (uVar1 != 0) {
        if ((uVar1 & 1) == 0) {
          if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *puVar2 = uVar1 - 1;
        }
      }
      *puVar2 = uVar3;
    }
    lVar6 = param_1[8];
  }
  return *(undefined8 *)(lVar6 + param_2 * 8);
}



// FUNCTION 1435ba8a0 FUN_1435ba8a0 body=246 status=ok
// SIG undefined FUN_1435ba8a0(void)

longlong * FUN_1435ba8a0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  int *piVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong local_res8;
  
  if ((ulonglong)param_1[0xc] <= param_3) {
    uVar1 = param_3 + 1;
    uVar3 = param_1[0xc];
    FUN_1436135b0(param_1 + 0xb,param_1 + 0xb,uVar1);
    if (uVar3 < uVar1) {
      puVar5 = (undefined8 *)(param_1[0xb] + uVar3 * 8);
      for (lVar6 = uVar1 - uVar3; lVar6 != 0; lVar6 = lVar6 + -1) {
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = 0;
        }
        puVar5 = puVar5 + 1;
      }
    }
  }
  if (*(longlong *)(param_1[0xb] + param_3 * 8) == 0) {
    puVar4 = (ulonglong *)(**(code **)(*param_1 + 0x48))(param_1,&local_res8,param_3);
    uVar1 = *puVar4;
    puVar4 = (ulonglong *)(param_1[0xb] + param_3 * 8);
    if (uVar1 != *(ulonglong *)(param_1[0xb] + param_3 * 8)) {
      if (uVar1 != 0) {
        *(int *)(uVar1 + 0x18) = *(int *)(uVar1 + 0x18) + 1;
      }
      uVar3 = *puVar4;
      if (uVar3 != 0) {
        if ((uVar3 & 1) == 0) {
          piVar2 = (int *)(uVar3 + 0x18);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            FUN_14335f920();
          }
        }
        else {
          *puVar4 = uVar3 - 1;
        }
      }
      *puVar4 = uVar1;
    }
    piVar2 = (int *)(local_res8 + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_14335f920();
    }
  }
  lVar6 = *(longlong *)(param_1[0xb] + param_3 * 8);
  *param_2 = lVar6;
  piVar2 = (int *)(lVar6 + 0x18);
  *piVar2 = *piVar2 + 1;
  return param_2;
}



// FUNCTION 1435ba9a0 FUN_1435ba9a0 body=245 status=ok
// SIG undefined FUN_1435ba9a0(void)

ulonglong FUN_1435ba9a0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined8 local_res8;
  undefined4 local_res10 [2];
  ulonglong local_res18 [2];
  undefined4 *local_28;
  undefined8 *local_20;
  
  local_res10[0] = param_2;
  lVar2 = FUN_143315540(param_1 + 0xe);
  puVar3 = (ulonglong *)0x0;
  if (-1 < lVar2) {
    puVar3 = (ulonglong *)((lVar2 + 1) * 0x20 + param_1[0xe]);
  }
  puVar4 = puVar3 + 1;
  if (puVar3 == (ulonglong *)0x0) {
    puVar4 = (ulonglong *)0x0;
  }
  if (puVar4 != (ulonglong *)0x0) {
    return *puVar4;
  }
  (**(code **)(*param_1 + 0x40))(param_1,local_res18,param_2);
  lVar2 = 4;
  local_res8 = local_res18[0];
  lVar5 = 0x1505;
  local_28 = local_res10;
  local_20 = &local_res8;
  do {
    lVar1 = lVar2 + -1;
    lVar2 = lVar2 + -1;
    lVar5 = lVar5 * 0x1003f + (ulonglong)*(byte *)((longlong)local_res10 + lVar1);
  } while (lVar2 != 0);
  FUN_143607b20(param_1 + 0xe,param_1 + 0xe,&local_28,lVar5);
  if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
     ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
    FUN_1434ef880();
  }
  return local_res18[0];
}



// FUNCTION 1435baaa0 FUN_1435baaa0 body=74 status=ok
// SIG undefined FUN_1435baaa0(void)

void FUN_1435baaa0(longlong param_1)

{
  FUN_14360b100(param_1 + 0x38);
  FUN_143613680(param_1 + 0x40,param_1 + 0x40,0);
  FUN_1436135b0(param_1 + 0x58,param_1 + 0x58,0);
  FUN_14360afc0(param_1 + 0x70);
  FUN_14360b2d0(param_1 + 0x90);
  return;
}



// FUNCTION 1435baaf0 FUN_1435baaf0 body=105 status=ok
// SIG undefined FUN_1435baaf0(void)

ulonglong FUN_1435baaf0(longlong param_1,longlong param_2,ulonglong param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x24);
  if (*param_4 < uVar3) {
    do {
      lVar4 = (ulonglong)*(uint *)(param_1 + 0x20) + *param_4;
      if ((*(uint *)(*(longlong *)(param_2 + 0x118) + lVar4 * 0x18) <= param_3) &&
         (uVar2 = *(uint *)(*(longlong *)(param_2 + 0x118) + lVar4 * 0x18 + 4), param_3 < uVar2)) {
        return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
      }
      uVar1 = *param_4 + 1;
      *param_4 = uVar1;
      uVar3 = (ulonglong)*(uint *)(param_1 + 0x24);
    } while (uVar1 < uVar3);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1435bab80 FUN_1435bab80 body=190 status=ok
// SIG undefined FUN_1435bab80(void)

undefined8 FUN_1435bab80(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  ulonglong local_res8;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 600) + 0xd8);
    if (plVar1[0x15] == 0) {
      (**(code **)(*plVar1 + 0x50))(plVar1);
    }
    uVar2 = FUN_1434bb150(plVar1[0x15],&local_res8,param_2,param_1);
    FUN_1434e6830(param_1 + 0x10,uVar2);
    if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
       ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
      FUN_1434ef880();
    }
    return *(undefined8 *)(param_1 + 0x10);
  }
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 1435bac50 FUN_1435bac50 body=66 status=ok
// SIG undefined FUN_1435bac50(void)

undefined8 FUN_1435bac50(uint *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 2) == 0) {
    uVar1 = FUN_1435c84e0(*(undefined8 *)(param_2 + 0x28),param_2,
                          (ulonglong)*param_1 * 0x10 +
                          *(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x148));
    *(undefined8 *)(param_1 + 2) = uVar1;
    return uVar1;
  }
  return *(undefined8 *)(param_1 + 2);
}



// FUNCTION 1435baca0 FUN_1435baca0 body=621 status=ok
// SIG undefined FUN_1435baca0(void)

undefined8 *
FUN_1435baca0(undefined8 *param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong local_res8;
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  
  FUN_1435ba2b0(param_1,param_2,param_4);
  uVar9 = 0;
  *param_1 = &PTR_FUN_145b4aca0;
  param_1[0x13] = 0;
  if ((RefCountImpl *)*param_3 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef((RefCountImpl *)*param_3);
  }
  param_1[0x14] = *param_3;
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  uVar5 = Scaleform::Alg::RoundUpToPowerOfTwo(4);
  *(undefined1 *)(param_1 + 0x15) = uVar5;
  *(undefined1 *)((longlong)param_1 + 0xa9) = 4;
  puVar2 = param_1 + 0x18;
  param_1[0x16] = uVar3;
  param_1[0x17] = 0;
  *puVar2 = puVar2;
  param_1[0x19] = puVar2;
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
  uVar10 = *(ulonglong *)(*param_3 + 0x98);
  DSP::CAkRectifier::CAkRectifier(local_58);
  FUN_143613040(param_1 + 0x26,uVar10);
  uVar11 = uVar9;
  if (uVar10 != 0) {
    do {
      local_res8 = *(longlong *)(*(longlong *)(*param_3 + 0x90) + (uVar9 & 0xffffffff) * 8);
      Scaleform::GFx::AS3::Abc::Read(&local_res8,local_40);
      uVar6 = FUN_14358f8b0(&local_res8);
      local_res8 = local_res8 + (ulonglong)uVar6;
      uVar6 = FUN_14358f8b0(&local_res8);
      if (uVar6 != 0) {
        uVar8 = (ulonglong)uVar6;
        do {
          Scaleform::GFx::AS3::Abc::Read(&local_res8,local_58);
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      uVar7 = FUN_14358f8b0(&local_res8);
      lVar4 = param_1[0x26];
      uVar9 = uVar9 + 1;
      *(undefined4 *)(uVar11 + lVar4) = uVar7;
      *(longlong *)(uVar11 + 8 + lVar4) = local_res8;
      uVar11 = uVar11 + 0x50;
    } while (uVar9 < uVar10);
  }
  plVar1 = (longlong *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x20);
  uVar9 = *(longlong *)(param_2 + 0x20) + 1;
  if (uVar9 < *(ulonglong *)(param_2 + 0x20)) {
    uVar10 = uVar9;
    if (*(ulonglong *)(param_2 + 0x28) >> 1 <= uVar9) goto LAB_1435baef6;
  }
  else {
    if (uVar9 <= *(ulonglong *)(param_2 + 0x28)) goto LAB_1435baef6;
    uVar10 = (uVar9 >> 2) + uVar9;
  }
  FUN_1436127b0(plVar1,plVar1,uVar10);
LAB_1435baef6:
  *(ulonglong *)(param_2 + 0x20) = uVar9;
  *(undefined8 **)(*plVar1 + -8 + uVar9 * 8) = param_1;
  return param_1;
}



// FUNCTION 1435baf20 FUN_1435baf20 body=889 status=ok
// SIG undefined FUN_1435baf20(void)

void FUN_1435baf20(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  
  plVar1 = param_1 + 0x29;
  lVar14 = param_1[5];
  *param_1 = &PTR_FUN_145b4aca0;
  plVar8 = (longlong *)*plVar1;
  if (plVar8 == (longlong *)0x0) {
    uVar11 = 0;
    plVar16 = (longlong *)0x0;
  }
  else {
    puVar9 = (ulonglong *)(plVar8 + 1);
    uVar11 = 0;
    do {
      plVar8 = plVar8 + 2;
      plVar16 = plVar1;
      if (*plVar8 != -2) break;
      uVar11 = uVar11 + 1;
    } while (uVar11 <= *puVar9);
  }
  do {
    do {
      uVar10 = uVar11;
      if (((plVar16 == (longlong *)0x0) || (lVar12 = *plVar16, lVar12 == 0)) ||
         (*(longlong *)(lVar12 + 8) < (longlong)uVar10)) {
        if (*(longlong *)(*(longlong *)(lVar14 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x13) * 8)
            != 0) {
          *(undefined8 *)(*(longlong *)(lVar14 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x13) * 8) =
               0;
        }
        FUN_14360b410(plVar1);
        FUN_14360f550(param_1[0x26],param_1[0x27]);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[0x26]);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[0x23]);
        lVar14 = param_1[0x21];
        if (lVar14 != 0) {
          puVar9 = (ulonglong *)(param_1[0x20] + -8 + lVar14 * 0x18);
          do {
            uVar11 = *puVar9;
            if (uVar11 != 0) {
              if ((uVar11 & 1) == 0) {
                if ((*(uint *)(uVar11 + 8) & 0x3fffff) != 0) {
                  *(uint *)(uVar11 + 8) = *(uint *)(uVar11 + 8) - 1;
                  FUN_1434ef880();
                }
              }
              else {
                *puVar9 = uVar11 - 1;
              }
            }
            puVar9 = puVar9 + -3;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[0x20]);
        FUN_14360afc0(param_1 + 0x1f);
        lVar14 = param_1[0x1d];
        puVar9 = (ulonglong *)(param_1[0x1c] + (lVar14 + -1) * 8);
        for (; lVar14 != 0; lVar14 = lVar14 + -1) {
          uVar11 = *puVar9;
          if (uVar11 != 0) {
            if ((uVar11 & 1) == 0) {
              if ((*(uint *)(uVar11 + 8) & 0x3fffff) != 0) {
                *(uint *)(uVar11 + 8) = *(uint *)(uVar11 + 8) - 1;
                FUN_1434ef880();
              }
            }
            else {
              *puVar9 = uVar11 - 1;
            }
          }
          puVar9 = puVar9 + -1;
        }
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[0x1c]);
        FUN_14360b360(param_1 + 0x1b);
        FUN_14360b360(param_1 + 0x1a);
        puVar2 = param_1 + 0x18;
        param_1[0x17] = 0;
        puVar7 = (undefined8 *)param_1[0x19];
        while (puVar7 != puVar2) {
          puVar6 = (undefined8 *)puVar7[1];
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar7);
          puVar7 = puVar6;
        }
        *puVar2 = puVar2;
        param_1[0x19] = puVar2;
        if ((RefCountImpl *)param_1[0x14] != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x14]);
        }
        FUN_1435ba3b0(param_1);
        return;
      }
      lVar4 = *(longlong *)(lVar14 + 0x2f0);
      lVar12 = uVar10 * 0x10 + lVar12;
      if (lVar4 != 0) {
        uVar11 = *(ulonglong *)(lVar12 + 0x18);
        uVar5 = *(ulonglong *)(lVar4 + 8);
        uVar15 = *(uint *)(uVar11 + 0x1c) & uVar5;
        lVar3 = uVar15 * 3 + 2;
        puVar9 = (ulonglong *)(lVar4 + lVar3 * 8);
        if ((*(longlong *)(lVar4 + lVar3 * 8) != -2) &&
           (uVar13 = uVar15, (*(uint *)(puVar9[1] + 0x1c) & uVar5) == uVar15)) {
          while (((*(uint *)(puVar9[1] + 0x1c) & uVar5) != uVar15 || (puVar9[1] != uVar11))) {
            uVar13 = *puVar9;
            if (uVar13 == 0xffffffffffffffff) goto LAB_1435bb084;
            puVar9 = (ulonglong *)(lVar4 + uVar13 * 0x18 + 0x10);
          }
          if ((-1 < (longlong)uVar13) && ((longlong)uVar13 <= (longlong)uVar5)) {
            FUN_143490b30(lVar14 + 0x2f0,lVar12 + 0x18);
            FUN_143604120(lVar14 + 0x2f8,*(longlong *)(lVar14 + 0x2f0) + uVar13 * 0x18 + 0x20);
          }
        }
      }
LAB_1435bb084:
      uVar5 = *(ulonglong *)(*plVar16 + 8);
      uVar11 = uVar10;
    } while (((longlong)uVar5 < (longlong)uVar10) || (uVar11 = uVar10 + 1, uVar5 < uVar11));
    plVar8 = (longlong *)((uVar10 + 2) * 0x10 + *plVar16);
    do {
      if (*plVar8 != -2) break;
      uVar11 = uVar11 + 1;
      plVar8 = plVar8 + 2;
    } while (uVar11 <= uVar5);
  } while( true );
}



// FUNCTION 1435bb2a0 FUN_1435bb2a0 body=643 status=ok
// SIG undefined FUN_1435bb2a0(void)

uint * FUN_1435bb2a0(longlong param_1,uint *param_2,undefined1 *param_3)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong local_res18 [2];
  
  lVar5 = (longlong)*(int *)(param_3 + 4);
  if (0 < *(int *)(param_3 + 4)) {
    switch(*param_3) {
    case 0:
      uVar4 = FUN_143590540();
      FUN_14360ab50(param_2,uVar4);
      return param_2;
    case 1:
      plVar3 = (longlong *)FUN_1435ba8a0(param_1,local_res18,lVar5);
      *param_2 = 10;
      param_2[2] = 0;
      param_2[3] = 0;
      lVar5 = *plVar3;
      *(longlong *)(param_2 + 4) = lVar5;
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)(local_res18[0] + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return param_2;
      }
      FUN_14335f920();
      return param_2;
    case 3:
      uVar2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0xd0) + lVar5 * 4);
      *param_2 = 2;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = uVar2;
      return param_2;
    case 4:
      uVar2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0xe8) + lVar5 * 4);
      *param_2 = 3;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = uVar2;
      return param_2;
    case 5:
    case 8:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
      uVar4 = FUN_1435ba6d0(param_1,lVar5);
      FUN_1434ae780(param_2,uVar4);
      return param_2;
    case 6:
      uVar4 = FUN_14361cc30(*(longlong *)(param_1 + 0xa0) + 0xc0,lVar5);
      *param_2 = 4;
      param_2[2] = 0;
      param_2[3] = 0;
      *(undefined8 *)(param_2 + 4) = uVar4;
      return param_2;
    case 10:
      *param_2 = 1;
      param_2[2] = 0;
      param_2[3] = 0;
      *(undefined1 *)(param_2 + 4) = 0;
      return param_2;
    case 0xb:
      *param_2 = 1;
      param_2[2] = 0;
      param_2[3] = 0;
      *(undefined1 *)(param_2 + 4) = 1;
      return param_2;
    case 0xc:
      uVar4 = FUN_1435905b0();
      FUN_14360ab50(param_2,uVar4);
      return param_2;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b7a928) && (_Init_thread_header(), DAT_146b7a928 == -1)) {
    DAT_146b7a908 = 0;
    DAT_146b7a910 = (int *)0x0;
    atexit(FUN_143ec4e30);
    _Init_thread_footer(&DAT_146b7a928);
  }
  *param_2 = DAT_146b7a908;
  *(int **)(param_2 + 2) = DAT_146b7a910;
  lVar5 = DAT_146b7a920;
  *(longlong *)(param_2 + 4) = DAT_146b7a918;
  *(longlong *)(param_2 + 6) = lVar5;
  uVar2 = DAT_146b7a908 & 0x1f;
  if (9 < uVar2) {
    if ((DAT_146b7a908 >> 9 & 1) != 0) {
      *DAT_146b7a910 = *DAT_146b7a910 + 1;
      return param_2;
    }
    if (uVar2 == 10) {
      *(int *)(DAT_146b7a918 + 0x18) = *(int *)(DAT_146b7a918 + 0x18) + 1;
    }
    else if ((10 < uVar2) &&
            (((lVar5 = DAT_146b7a918, uVar2 < 0xd || (lVar5 = DAT_146b7a920, uVar2 < 0xf)) &&
             (lVar5 != 0)))) {
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) & 0x8fffffff;
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 1435bb570 FUN_1435bb570 body=459 status=ok
// SIG undefined FUN_1435bb570(void)

undefined8 * FUN_1435bb570(longlong param_1,int param_2)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  int local_res8 [2];
  int local_res10;
  undefined8 *local_res18;
  int *local_38;
  undefined8 **local_30;
  
  lVar2 = *(longlong *)(param_1 + 0xf8);
  puVar4 = (undefined8 *)0x0;
  local_res8[0] = param_2;
  lVar8 = 0x1505;
  lVar7 = 4;
  puVar11 = puVar4;
  if (lVar2 != 0) {
    uVar5 = 0x1505;
    lVar9 = 4;
    do {
      pbVar1 = &stack0x00000007 + lVar9;
      lVar9 = lVar9 + -1;
      uVar5 = (ulonglong)*pbVar1 + uVar5 * 0x1003f;
    } while (lVar9 != 0);
    uVar5 = *(ulonglong *)(lVar2 + 8) & uVar5;
    puVar6 = (ulonglong *)(lVar2 + 0x10 + uVar5 * 0x20);
    if ((*puVar6 != 0xfffffffffffffffe) && (uVar10 = uVar5, puVar6[1] == uVar5)) {
      while ((puVar6[1] != uVar5 || ((int)puVar6[2] != param_2))) {
        uVar10 = *puVar6;
        if (uVar10 == 0xffffffffffffffff) goto LAB_1435bb628;
        puVar6 = (ulonglong *)(lVar2 + 0x10 + uVar10 * 0x20);
      }
      if (-1 < (longlong)uVar10) {
        puVar11 = (undefined8 *)((uVar10 + 1) * 0x20 + lVar2);
      }
    }
  }
LAB_1435bb628:
  puVar3 = puVar11 + 1;
  if (puVar11 == (undefined8 *)0x0) {
    puVar3 = puVar4;
  }
  if (puVar3 == (undefined8 *)0x0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    local_res10 = param_2;
    lVar9 = (**(code **)(**(longlong **)(lVar2 + 0x48) + 0x50))
                      (*(longlong **)(lVar2 + 0x48),0x110,0);
    if (lVar9 != 0) {
      puVar4 = (undefined8 *)FUN_1434b1410(lVar9,param_1,&PTR_DAT_145b15970,local_res10);
    }
    if (*(char *)(lVar2 + 0xb8) == '\0') {
      local_res8[0] = local_res10;
      local_38 = local_res8;
      local_30 = &local_res18;
      do {
        pbVar1 = &stack0x00000007 + lVar7;
        lVar7 = lVar7 + -1;
        lVar8 = (ulonglong)*pbVar1 + lVar8 * 0x1003f;
      } while (lVar7 != 0);
      local_res18 = puVar4;
      FUN_143607b20(param_1 + 0xf8,param_1 + 0xf8,&local_38,lVar8);
      if (((local_res18 != (undefined8 *)0x0) && (((ulonglong)local_res18 & 1) == 0)) &&
         ((*(uint *)(local_res18 + 1) & 0x3fffff) != 0)) {
        *(uint *)(local_res18 + 1) = *(uint *)(local_res18 + 1) - 1;
        FUN_1434ef880();
      }
      return puVar4;
    }
    return *(undefined8 **)(lVar2 + 0x2a8);
  }
  return (undefined8 *)*puVar3;
}



// FUNCTION 1435bb770 FUN_1435bb770 body=116 status=ok
// SIG undefined FUN_1435bb770(void)

longlong FUN_1435bb770(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_2f8 [752];
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  lVar2 = (ulonglong)*(uint *)(param_2 + 0x20) * 0x50 + *(longlong *)(param_1 + 0x130);
  if ((*(char *)(lVar2 + 0x2e) != '\0') && (*(char *)(lVar2 + 0x2d) == '\0')) {
    FUN_1435d1120(local_2f8,*(undefined8 *)(lVar1 + 0x48),param_2,lVar2);
    if (*(char *)(lVar1 + 0xb8) == '\0') {
      FUN_1435d1570(local_2f8);
    }
    FUN_1435d14a0(local_2f8);
  }
  return lVar2;
}



// FUNCTION 1435bb7f0 FUN_1435bb7f0 body=78 status=ok
// SIG undefined FUN_1435bb7f0(void)

void FUN_1435bb7f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_1435ba1a0((undefined1 *)(param_1 + 0xa8),0x18,*(undefined1 *)(param_1 + 0xa8));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined8 *)(puVar1 + 2) = param_2;
    *(undefined8 *)(puVar1 + 4) = param_3;
    return;
  }
  return;
}



// FUNCTION 1435bb850 FUN_1435bb850 body=296 status=ok
// SIG undefined FUN_1435bb850(void)

undefined8 FUN_1435bb850(longlong param_1,undefined8 param_2,int *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong local_res8;
  longlong local_res10;
  
  lVar4 = *(longlong *)(param_1 + 0xa0);
  if ((longlong)*param_3 == 0) {
    puVar5 = (undefined4 *)(lVar4 + 0x160);
  }
  else {
    puVar5 = (undefined4 *)(*(longlong *)(lVar4 + 0x118) + (longlong)*param_3 * 0x18);
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10);
  local_res8 = FUN_143360a90(*(undefined8 *)(lVar2 + 0x218),*(undefined8 *)(puVar5 + 2),
                             *(undefined8 *)(puVar5 + 4));
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  if (-1 < param_3[1]) {
    lVar3 = (longlong)*(int *)(*(longlong *)(lVar4 + 0x148) + (longlong)param_3[1] * 0x10);
    if (lVar3 == 0) {
      lVar4 = lVar4 + 0x160;
    }
    else {
      lVar4 = *(longlong *)(lVar4 + 0x118) + lVar3 * 0x18;
    }
    FUN_143360130(&local_res8,&DAT_145b4e0e8,1);
    local_res10 = FUN_143360a90(*(undefined8 *)(lVar2 + 0x218),*(undefined8 *)(lVar4 + 8),
                                *(undefined8 *)(lVar4 + 0x10));
    *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
    FUN_143360170(&local_res8,&local_res10);
    piVar1 = (int *)(local_res10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  FUN_1435cc220(*(undefined8 *)(param_1 + 0x28),param_2,*puVar5,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return param_2;
}



// FUNCTION 1435bb980 FUN_1435bb980 body=149 status=ok
// SIG undefined FUN_1435bb980(void)

undefined8 FUN_1435bb980(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong local_res8;
  
  if (param_3 == 0) {
    puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0xa0) + 0x160);
  }
  else {
    puVar4 = (undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x118) + param_3 * 0x18);
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  uVar2 = *puVar4;
  local_res8 = FUN_143360a90(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),
                             *(undefined8 *)(puVar4 + 2),*(undefined8 *)(puVar4 + 4));
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_1435cc220(lVar3,param_2,uVar2,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return param_2;
}



// FUNCTION 1435bba20 FUN_1435bba20 body=319 status=ok
// SIG undefined FUN_1435bba20(void)

longlong * FUN_1435bba20(longlong param_1,longlong *param_2,longlong param_3)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 local_res8;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x48);
  puVar6 = (undefined8 *)(**(code **)(*plVar2 + 0x50))(plVar2,0x40);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6[4] = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x30);
    *puVar6 = &PTR_ForEachChild_GC_145b4a918;
    *(undefined4 *)(puVar6 + 1) = 1;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
  }
  *param_2 = (longlong)puVar6;
  local_res8 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x130) + param_3 * 8);
  uVar4 = FUN_14358f8b0(&local_res8);
  if (uVar4 != 0) {
    uVar8 = (ulonglong)uVar4;
    do {
      uVar5 = FUN_14358f8b0(&local_res8);
      lVar3 = *param_2;
      uVar7 = FUN_1435ba6d0(param_1,uVar5);
      if (uVar7 != 0) {
        *(uint *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1U & 0x8fffffff;
      }
      FUN_1434f0230(lVar3 + 0x28,lVar3 + 0x28,*(longlong *)(lVar3 + 0x30) + 1);
      puVar1 = (ulonglong *)(*(longlong *)(lVar3 + 0x28) + (*(longlong *)(lVar3 + 0x30) + -1) * 8);
      if (puVar1 == (ulonglong *)0x0) {
LAB_1435bbb1e:
        if (((uVar7 != 0) && ((uVar7 & 1) == 0)) && ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
          FUN_1434ef880(uVar7);
        }
      }
      else {
        *puVar1 = uVar7;
        if (uVar7 != 0) {
          *(uint *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1U & 0x8fffffff;
          goto LAB_1435bbb1e;
        }
      }
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return param_2;
}



// FUNCTION 1435bbb70 FUN_1435bbb70 body=128 status=ok
// SIG undefined FUN_1435bbb70(void)

undefined8 * FUN_1435bbb70(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x130);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x48);
  lVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,0xe8,0);
  if (lVar3 != 0) {
    uVar4 = FUN_1434b2130(lVar3,param_1,(param_3 & 0xffffffff) * 0x50 + lVar1);
    *param_2 = uVar4;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1435bbc00 FUN_1435bbc00 body=97 status=ok
// SIG undefined FUN_1435bbc00(void)

longlong * FUN_1435bbc00(longlong param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_14361cb40(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x100) + (ulonglong)param_3 * 8,
                &local_18);
  lVar1 = FUN_143360a90(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10) + 0x218)
                        ,local_18,local_10);
  *param_2 = lVar1;
  *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
  return param_2;
}



// FUNCTION 1435bbc70 FUN_1435bbc70 body=728 status=ok
// SIG undefined FUN_1435bbc70(void)

void FUN_1435bbc70(longlong param_1,undefined8 param_2,code *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  FUN_1435ba460();
  plVar7 = (longlong *)(param_1 + 0xd0);
  uVar6 = 0;
  lVar2 = *plVar7;
  if (lVar2 == 0) {
    plVar7 = (longlong *)0x0;
    uVar4 = 0;
  }
  else {
    plVar3 = (longlong *)(lVar2 + 0x10);
    uVar4 = uVar6;
    do {
      if (*plVar3 != -2) break;
      uVar4 = uVar4 + 1;
      plVar3 = plVar3 + 3;
    } while (uVar4 <= *(ulonglong *)(lVar2 + 8));
  }
  do {
    if (((plVar7 == (longlong *)0x0) || (lVar2 = *plVar7, lVar2 == 0)) ||
       (*(longlong *)(lVar2 + 8) < (longlong)uVar4)) break;
    lVar1 = uVar4 * 3 + 4;
    if (*(longlong *)(lVar2 + lVar1 * 8) != 0) {
      (*param_3)(param_2,lVar2 + lVar1 * 8);
    }
    uVar5 = *(ulonglong *)(*plVar7 + 8);
    if (((longlong)uVar4 <= (longlong)uVar5) && (uVar4 = uVar4 + 1, uVar4 <= uVar5)) {
      plVar3 = (longlong *)(*plVar7 + uVar4 * 0x18 + 0x10);
      do {
        if (*plVar3 != -2) break;
        uVar4 = uVar4 + 1;
        plVar3 = plVar3 + 3;
      } while (uVar4 <= uVar5);
    }
  } while( true );
  plVar7 = (longlong *)(param_1 + 0xd8);
  lVar2 = *plVar7;
  if (lVar2 == 0) {
    plVar7 = (longlong *)0x0;
    uVar4 = 0;
  }
  else {
    plVar3 = (longlong *)(lVar2 + 0x10);
    uVar4 = uVar6;
    do {
      if (*plVar3 != -2) break;
      uVar4 = uVar4 + 1;
      plVar3 = plVar3 + 3;
    } while (uVar4 <= *(ulonglong *)(lVar2 + 8));
  }
  do {
    if (((plVar7 == (longlong *)0x0) || (lVar2 = *plVar7, lVar2 == 0)) ||
       (*(longlong *)(lVar2 + 8) < (longlong)uVar4)) break;
    lVar1 = uVar4 * 3 + 4;
    if (*(longlong *)(lVar2 + lVar1 * 8) != 0) {
      (*param_3)(param_2,lVar2 + lVar1 * 8);
    }
    uVar5 = *(ulonglong *)(*plVar7 + 8);
    if (((longlong)uVar4 <= (longlong)uVar5) && (uVar4 = uVar4 + 1, uVar4 <= uVar5)) {
      plVar3 = (longlong *)(*plVar7 + uVar4 * 0x18 + 0x10);
      do {
        if (*plVar3 != -2) break;
        uVar4 = uVar4 + 1;
        plVar3 = plVar3 + 3;
      } while (uVar4 <= uVar5);
    }
  } while( true );
  uVar4 = *(ulonglong *)(param_1 + 0xe8);
  uVar5 = uVar6;
  if (uVar4 != 0) {
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0xe0) + uVar5 * 8) != 0) {
        (*param_3)(param_2,*(longlong *)(param_1 + 0xe0) + uVar5 * 8);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  plVar7 = (longlong *)(param_1 + 0xf8);
  lVar2 = *plVar7;
  if (lVar2 == 0) {
    plVar7 = (longlong *)0x0;
    uVar4 = 0;
  }
  else {
    plVar3 = (longlong *)(lVar2 + 0x10);
    uVar4 = uVar6;
    do {
      if (*plVar3 != -2) break;
      uVar4 = uVar4 + 1;
      plVar3 = plVar3 + 4;
    } while (uVar4 <= *(ulonglong *)(lVar2 + 8));
  }
  do {
    do {
      if (((plVar7 == (longlong *)0x0) || (lVar2 = *plVar7, lVar2 == 0)) ||
         (*(longlong *)(lVar2 + 8) < (longlong)uVar4)) {
        uVar4 = *(ulonglong *)(param_1 + 0x108);
        uVar5 = uVar6;
        while (uVar6 != uVar4) {
          if (*(longlong *)(*(longlong *)(param_1 + 0x100) + 0x10 + uVar5) != 0) {
            (*param_3)(param_2);
          }
          if ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0x108)) {
            uVar6 = uVar6 + 1;
            uVar5 = uVar5 + 0x18;
          }
        }
        return;
      }
      if (*(longlong *)(lVar2 + 0x28 + uVar4 * 0x20) != 0) {
        (*param_3)(param_2);
      }
      uVar5 = *(ulonglong *)(*plVar7 + 8);
    } while (((longlong)uVar5 < (longlong)uVar4) || (uVar4 = uVar4 + 1, uVar5 < uVar4));
    plVar3 = (longlong *)(*plVar7 + 0x10 + uVar4 * 0x20);
    do {
      if (*plVar3 != -2) break;
      uVar4 = uVar4 + 1;
      plVar3 = plVar3 + 4;
    } while (uVar4 <= uVar5);
  } while( true );
}



// FUNCTION 1435bbf50 FUN_1435bbf50 body=1679 status=ok
// SIG undefined FUN_1435bbf50(void)

ulonglong FUN_1435bbf50(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  char *pcVar11;
  longlong *plVar12;
  int *piVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong local_res8;
  longlong *local_res10;
  longlong local_res18;
  undefined8 local_res20;
  longlong *local_b0;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  ulonglong local_90;
  ulonglong local_88;
  longlong *local_80;
  longlong **local_78;
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  longlong **local_58;
  
  lVar2 = *(longlong *)(param_1 + 0xa0);
  plVar15 = (longlong *)0x0;
  lVar16 = *(longlong *)(param_1 + 0x28);
  local_res18 = 0;
  local_88 = *(ulonglong *)(lVar2 + 0x68);
  local_68 = lVar16;
  if ((int)local_88 != 0) {
    plVar1 = (longlong *)(param_1 + 0xe0);
    local_res10 = (longlong *)0x0;
    local_70 = (ulonglong)_tls_index * 8;
    plVar14 = plVar15;
    do {
      local_res20 = *(undefined8 *)((longlong)local_res10 + *(longlong *)(lVar2 + 0x78));
      uVar3 = FUN_14358f8b0(&local_res20);
      piVar13 = (int *)((ulonglong)uVar3 * 0x10 + *(longlong *)(lVar2 + 0x148));
      FUN_1435ba8a0(param_1,&local_res8,(longlong)piVar13[2]);
      uVar5 = FUN_1435ba6d0(param_1,(longlong)*piVar13);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + local_70) + 0x38) <
           DAT_146b7a934) && (_Init_thread_header(&DAT_146b7a934), DAT_146b7a934 == -1)) {
        DAT_1467d9b10 = 0xd;
        PTR_s_scaleform_gfx_1467d9b08 = s_scaleform_gfx_145b45cd0;
        _Init_thread_footer(&DAT_146b7a934);
      }
      if ((*(uint *)(*(undefined8 **)(uVar5 + 0x38) + 4) < DAT_1467d9b10) ||
         (iVar4 = strncmp((char *)**(undefined8 **)(uVar5 + 0x38),PTR_s_scaleform_gfx_1467d9b08,
                          DAT_1467d9b10), iVar4 != 0)) {
        lVar8 = *(longlong *)(param_1 + 0x30);
        lVar10 = *(longlong *)(lVar8 + 0x28);
        if ((((lVar10 == 0) ||
             (plVar6 = (longlong *)FUN_1435be2b0(lVar10,&local_res8,uVar5),
             plVar6 == (longlong *)0x0)) &&
            (plVar6 = (longlong *)FUN_143610010(lVar8 + 0x30,&local_res8,uVar5),
            plVar6 == (longlong *)0x0)) || (plVar6 = (longlong *)*plVar6, plVar6 == (longlong *)0x0)
           ) {
          plVar6 = (longlong *)FUN_1434decf0(*(undefined8 *)(lVar16 + 0x2c0),&local_res8,uVar5);
          if (plVar6 != (longlong *)0x0) {
            lVar8 = *(longlong *)(lVar16 + 0x1c8);
            local_a8 = local_res8;
            *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
            if (uVar5 != 0) {
              *(uint *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
            }
            local_60 = &local_a8;
            local_58 = &local_b0;
            local_b0 = plVar6;
            local_a0 = uVar5;
            FUN_1434e5270(lVar8 + 0x30,*(undefined8 *)(lVar8 + 0x38),&local_60,
                          (uint)((*(longlong *)(uVar5 + 0x28) << 0x3c) >> 0x3c) ^
                          (*(uint *)(*(longlong *)(uVar5 + 0x38) + 0x1c) & 0xffffff) << 2 ^
                          *(uint *)(local_res8 + 0x1c) & 0xffffff);
            if (local_a0 != 0) {
              if ((local_a0 & 1) == 0) {
                if ((*(uint *)(local_a0 + 8) & 0x3fffff) != 0) {
                  *(uint *)(local_a0 + 8) = *(uint *)(local_a0 + 8) - 1;
                  FUN_1434ef880();
                }
              }
              else {
                local_a0 = local_a0 - 1;
              }
            }
            piVar13 = (int *)(local_a8 + 0x18);
            *piVar13 = *piVar13 + -1;
            if (*piVar13 == 0) {
              FUN_14335f920();
            }
            goto LAB_1435bc1b9;
          }
          lVar8 = (**(code **)(**(longlong **)(lVar16 + 0x48) + 0x50))
                            (*(longlong **)(lVar16 + 0x48),0xf0,0);
          plVar6 = plVar15;
          if (lVar8 != 0) {
            plVar6 = (longlong *)FUN_1434e11d0(lVar8,param_1,plVar14);
          }
          lVar8 = *(longlong *)(param_1 + 0x30);
          local_98 = local_res8;
          *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
          if (uVar5 != 0) {
            *(uint *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
          }
          local_80 = &local_98;
          local_78 = &local_b0;
          local_b0 = plVar6;
          local_90 = uVar5;
          FUN_1434e5270(lVar8 + 0x30,*(undefined8 *)(lVar8 + 0x38),&local_80,
                        (uint)((*(longlong *)(uVar5 + 0x28) << 0x3c) >> 0x3c) ^
                        (*(uint *)(*(longlong *)(uVar5 + 0x38) + 0x1c) & 0xffffff) << 2 ^
                        *(uint *)(local_res8 + 0x1c) & 0xffffff);
          if (local_90 != 0) {
            if ((local_90 & 1) == 0) {
              if ((*(uint *)(local_90 + 8) & 0x3fffff) != 0) {
                *(uint *)(local_90 + 8) = *(uint *)(local_90 + 8) - 1;
                FUN_1434ef880();
              }
            }
            else {
              local_90 = local_90 - 1;
            }
          }
          piVar13 = (int *)(local_98 + 0x18);
          *piVar13 = *piVar13 + -1;
          if (*piVar13 == 0) {
            FUN_14335f920();
          }
          local_res18 = local_res18 + 1;
          FUN_143613750(param_1 + 0x78,param_1 + 0x78,*(longlong *)(param_1 + 0x80) + 1);
          puVar7 = (undefined8 *)
                   (*(longlong *)(param_1 + 0x78) + (*(longlong *)(param_1 + 0x80) + -1) * 8);
          if (puVar7 == (undefined8 *)0x0) {
LAB_1435bc38b:
            if (((plVar6 == (longlong *)0x0) || (((ulonglong)plVar6 & 1) != 0)) ||
               ((*(uint *)(plVar6 + 1) & 0x3fffff) == 0)) goto LAB_1435bc3ad;
            *(uint *)(plVar6 + 1) = *(uint *)(plVar6 + 1) - 1;
            goto LAB_1435bc3a8;
          }
          *puVar7 = plVar6;
          if (plVar6 != (longlong *)0x0) {
            *(uint *)(plVar6 + 1) = (int)plVar6[1] + 1U & 0x8fffffff;
            goto LAB_1435bc38b;
          }
        }
        else {
LAB_1435bc1b9:
          plVar6 = (longlong *)(**(code **)(*plVar6 + 0x38))(plVar6);
          if (plVar6 != (longlong *)0x0) {
            if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
              puVar7 = (undefined8 *)*plVar1;
              plVar12 = plVar15;
              do {
                if ((longlong *)*puVar7 == plVar6) goto LAB_1435bc3ad;
                plVar12 = (longlong *)((longlong)plVar12 + 1);
                puVar7 = puVar7 + 1;
              } while (plVar12 < *(longlong **)(param_1 + 0xe8));
            }
            *(uint *)(plVar6 + 1) = (int)plVar6[1] + 1U & 0x8fffffff;
            FUN_143613750(plVar1,plVar1,*(longlong *)(param_1 + 0xe8) + 1);
            puVar7 = (undefined8 *)(*plVar1 + (*(longlong *)(param_1 + 0xe8) + -1) * 8);
            if (puVar7 != (undefined8 *)0x0) {
              *puVar7 = plVar6;
              *(uint *)(plVar6 + 1) = (int)plVar6[1] + 1U & 0x8fffffff;
            }
            if ((((ulonglong)plVar6 & 1) == 0) && ((*(uint *)(plVar6 + 1) & 0x3fffff) != 0)) {
              *(uint *)(plVar6 + 1) = *(uint *)(plVar6 + 1) - 1;
LAB_1435bc3a8:
              FUN_1434ef880(plVar6);
            }
          }
        }
LAB_1435bc3ad:
        piVar13 = (int *)(local_res8 + 0x18);
        *piVar13 = *piVar13 + -1;
        if (*piVar13 == 0) {
          FUN_14335f920();
        }
      }
      else {
        piVar13 = (int *)(local_res8 + 0x18);
        *piVar13 = *piVar13 + -1;
        if (*piVar13 == 0) {
          FUN_14335f920();
        }
      }
      uVar3 = (int)plVar14 + 1;
      plVar14 = (longlong *)(ulonglong)uVar3;
      local_res10 = local_res10 + 1;
    } while (uVar3 < (uint)local_88);
    if ((local_res18 == 0) && ((uint)local_88 != 0)) {
LAB_1435bc5d8:
      return local_88 & 0xffffffffffffff00;
    }
  }
  if ((int)local_88 != 0) {
    uVar5 = (ulonglong)_tls_index;
    lVar16 = 0;
    do {
      local_res20 = *(undefined8 *)(lVar16 + *(longlong *)(lVar2 + 0x78));
      uVar3 = FUN_14358f8b0(&local_res20);
      piVar13 = (int *)((ulonglong)uVar3 * 0x10 + *(longlong *)(lVar2 + 0x148));
      FUN_1435ba8a0(param_1,&local_res10,(longlong)piVar13[2]);
      uVar9 = FUN_1435ba6d0(param_1,(longlong)*piVar13);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar5 * 8) + 0x38) <
           DAT_146b7a934) && (_Init_thread_header(&DAT_146b7a934), DAT_146b7a934 == -1)) {
        DAT_1467d9b10 = 0xd;
        PTR_s_scaleform_gfx_1467d9b08 = s_scaleform_gfx_145b45cd0;
        _Init_thread_footer(&DAT_146b7a934);
      }
      if ((((*(uint *)(*(undefined8 **)(uVar9 + 0x38) + 4) < DAT_1467d9b10) ||
           (iVar4 = strncmp((char *)**(undefined8 **)(uVar9 + 0x38),PTR_s_scaleform_gfx_1467d9b08,
                            DAT_1467d9b10), iVar4 != 0)) &&
          (lVar8 = local_68, lVar10 = FUN_1435cf010(local_68,param_1,uVar3),
          *(longlong *)(lVar10 + 0xe8) == param_1)) &&
         (pcVar11 = (char *)FUN_1434e1570(lVar10,&local_res8), *pcVar11 == '\0')) {
        if (*(char *)(lVar8 + 0xb8) != '\0') {
          FUN_1435cc020(lVar8);
        }
        plVar15 = local_res10;
        lVar2 = *(longlong *)(param_1 + 0x30);
        local_80 = local_res10;
        *(int *)(local_res10 + 3) = (int)local_res10[3] + 1;
        if (uVar9 != 0) {
          *(uint *)(uVar9 + 8) = *(int *)(uVar9 + 8) + 1U & 0x8fffffff;
        }
        local_78 = (longlong **)uVar9;
        FUN_1436044b0(lVar2 + 0x30,&local_80);
        if (((uVar9 != 0) && ((uVar9 & 1) == 0)) && ((*(uint *)(uVar9 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) - 1;
          FUN_1434ef880(uVar9);
        }
        plVar1 = plVar15 + 3;
        *(int *)plVar1 = (int)*plVar1 + -1;
        if ((int)*plVar1 == 0) {
          FUN_14335f920(plVar15);
        }
        plVar1 = plVar15 + 3;
        *(int *)plVar1 = (int)*plVar1 + -1;
        if ((int)*plVar1 == 0) {
          FUN_14335f920(plVar15);
        }
        local_88 = FUN_1435bc5f0(param_1);
        goto LAB_1435bc5d8;
      }
      plVar1 = local_res10 + 3;
      *(int *)plVar1 = (int)*plVar1 + -1;
      if ((int)*plVar1 == 0) {
        FUN_14335f920();
      }
      uVar3 = (int)plVar15 + 1;
      plVar15 = (longlong *)(ulonglong)uVar3;
      lVar16 = lVar16 + 8;
    } while (uVar3 < (uint)local_88);
    if (((uint)local_88 != 0) && (local_res18 == 0)) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1435bc5f0 FUN_1435bc5f0 body=290 status=ok
// SIG undefined FUN_1435bc5f0(void)

void FUN_1435bc5f0(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong local_res8;
  longlong local_res10;
  longlong local_28;
  ulonglong local_20;
  
  uVar2 = *(ulonglong *)(param_1 + 0x80);
  uVar7 = 0;
  if (uVar2 != 0) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x78) + uVar7 * 8);
      plVar4 = *(longlong **)(lVar3 + 0xd8);
      if (plVar4 == (longlong *)0x0) {
        local_res10 = lVar3;
        FUN_143612580(*(longlong *)(param_1 + 0x30) + 0x30,&local_res10);
      }
      else {
        (**(code **)(*plVar4 + 0x20))(plVar4,&local_res8);
        lVar6 = local_res8;
        uVar5 = plVar4[0x1b];
        lVar3 = *(longlong *)(param_1 + 0x30);
        local_28 = local_res8;
        *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
        if (uVar5 != 0) {
          *(uint *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
        }
        local_20 = uVar5;
        FUN_1436044b0(lVar3 + 0x30,&local_28);
        if (uVar5 != 0) {
          if ((uVar5 & 1) == 0) {
            if ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
              FUN_1434ef880(uVar5);
            }
          }
          else {
            local_20 = uVar5 - 1;
          }
        }
        piVar1 = (int *)(lVar6 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(lVar6);
        }
        piVar1 = (int *)(local_res8 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar2);
  }
  FUN_143613750(param_1 + 0x78,param_1 + 0x78,0);
  return;
}



// FUNCTION 1435bc720 FUN_1435bc720 body=486 status=ok
// SIG undefined FUN_1435bc720(void)

bool FUN_1435bc720(longlong param_1,char param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 local_res8;
  undefined1 local_res20 [8];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined4 local_48;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x28);
  local_58[0] = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  uVar2 = FUN_14358f8b0(&local_res8);
  uVar7 = 0;
  if (uVar2 != 0) {
    do {
      lVar3 = (**(code **)(**(longlong **)(lVar1 + 0x48) + 0x50))
                        (*(longlong **)(lVar1 + 0x48),0x110,0);
      uVar6 = 0;
      if ((lVar3 != 0) && (uVar4 = FUN_1434e0780(lVar3,param_1,local_res8), uVar4 != 0)) {
        uVar6 = uVar4;
      }
      if (*(char *)(lVar1 + 0xb8) != '\0') {
LAB_1435bc8e1:
        if ((uVar6 != 0) && ((uVar6 & 1) == 0)) {
          if ((*(uint *)(uVar6 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) - 1;
            FUN_1434ef880(uVar6);
          }
        }
        return false;
      }
      FUN_14361d0e0(&local_res8,local_58);
      puVar5 = (ulonglong *)FUN_1434e0890(uVar6,local_res20);
      uVar4 = *puVar5;
      if (*(char *)(lVar1 + 0xb8) != '\0') {
        if ((uVar4 != 0) && ((uVar4 & 1) == 0)) {
          if ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
            FUN_1434ef880();
          }
        }
        goto LAB_1435bc8e1;
      }
      FUN_1436122b0(lVar1,uVar4);
      FUN_143604b00(param_1 + 0xd8,param_1 + 0xd8);
      FUN_1434de160(uVar4);
      if ((uVar4 != 0) && ((uVar4 & 1) == 0)) {
        if ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
          FUN_1434ef880(uVar4);
        }
      }
      if ((uVar6 != 0) && ((uVar6 & 1) == 0)) {
        if ((*(uint *)(uVar6 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) - 1;
          FUN_1434ef880(uVar6);
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar2);
  }
  if ((param_2 != '\0') && (uVar2 != 0)) {
    (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 0xe8) + -8 + *(longlong *)(lVar1 + 0xf0) * 8)
                + 0xc0))();
  }
  return *(char *)(lVar1 + 0xb8) == '\0';
}



// FUNCTION 1435bc910 FUN_1435bc910 body=110 status=ok
// SIG undefined FUN_1435bc910(void)

undefined1 * FUN_1435bc910(longlong param_1,undefined1 *param_2,undefined1 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1435bbf50();
  if (cVar1 != '\0') {
    cVar1 = FUN_1435bc720(param_1,param_3);
    if (cVar1 != '\0') {
      cVar1 = FUN_1435be4e0(*(undefined8 *)(param_1 + 0x30),param_1);
      if (cVar1 != '\0') {
        *param_2 = 1;
        return param_2;
      }
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1435bc990 FUN_1435bc990 body=408 status=ok
// SIG undefined FUN_1435bc990(void)

void FUN_1435bc990(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  piVar1 = (int *)(param_1 + 0x9c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 != 0) {
    return;
  }
  uVar6 = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18);
  if (*(longlong *)(lVar2 + (ulonglong)*(uint *)(param_1 + 0x98) * 8) != 0) {
    *(undefined8 *)(lVar2 + (ulonglong)*(uint *)(param_1 + 0x98) * 8) = 0;
  }
  FUN_1435bc5f0();
  FUN_143613040(param_1 + 0x130,0);
  FUN_14360b360(param_1 + 0xd0);
  lVar2 = *(longlong *)(param_1 + 0xd8);
  if (lVar2 == 0) {
    uVar6 = 0;
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = (longlong *)(lVar2 + 0x10);
    do {
      if (*plVar4 != -2) break;
      uVar6 = uVar6 + 1;
      plVar4 = plVar4 + 3;
    } while (uVar6 <= *(ulonglong *)(lVar2 + 8));
    plVar4 = (longlong *)(param_1 + 0xd8);
  }
  do {
    do {
      if (((plVar4 == (longlong *)0x0) || (lVar2 = *plVar4, lVar2 == 0)) ||
         (*(longlong *)(lVar2 + 8) < (longlong)uVar6)) {
        FUN_14360b360(param_1 + 0xd8);
        FUN_143613750(param_1 + 0xe0,param_1 + 0xe0,0);
        FUN_14360afc0(param_1 + 0xf8);
        FUN_14360b100(param_1 + 0x38);
        FUN_143613680(param_1 + 0x40,param_1 + 0x40,0);
        FUN_1436135b0(param_1 + 0x58,param_1 + 0x58,0);
        FUN_14360afc0(param_1 + 0x70);
        FUN_14360b2d0(param_1 + 0x90);
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x30);
        if ((plVar4 != (longlong *)0x0) && (*plVar4 != 0)) {
          return;
        }
        if (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x48) != 0) {
          return;
        }
        FUN_1435be3f0();
        return;
      }
      FUN_1435c8740(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(lVar2 + 0x20 + uVar6 * 0x18));
      uVar3 = *(ulonglong *)(*plVar4 + 8);
    } while (((longlong)uVar3 < (longlong)uVar6) || (uVar6 = uVar6 + 1, uVar3 < uVar6));
    plVar5 = (longlong *)(*plVar4 + uVar6 * 0x18 + 0x10);
    do {
      if (*plVar5 != -2) break;
      uVar6 = uVar6 + 1;
      plVar5 = plVar5 + 3;
    } while (uVar6 <= uVar3);
  } while( true );
}



// FUNCTION 1435bcb30 FUN_1435bcb30 body=204 status=ok
// SIG undefined FUN_1435bcb30(void)

undefined1 *
FUN_1435bcb30(undefined1 *param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  lVar3 = *(longlong *)(param_2 + 0xa0);
  uVar2 = FUN_14358f8b0(param_3);
  piVar5 = (int *)((ulonglong)uVar2 * 0x10 + *(longlong *)(lVar3 + 0x148));
  if (((piVar5[3] == 0) && (piVar5[2] == 0)) && (*piVar5 == 0)) {
    *param_4 = 0;
  }
  else {
    lVar3 = FUN_1435c84e0(uVar1,param_2);
    *param_4 = lVar3;
    if (lVar3 == 0) {
      uVar4 = FUN_1435c8e40(local_18,0x3f6,uVar1);
      FUN_1435ccf60(uVar1,uVar4,&DAT_145b14e70);
      piVar5 = (int *)(local_10 + 0x18);
      *piVar5 = *piVar5 + -1;
      if (*piVar5 == 0) {
        FUN_14335f920();
      }
      *param_1 = 0;
      return param_1;
    }
  }
  *param_1 = 1;
  return param_1;
}



// FUNCTION 1435bcc10 FUN_1435bcc10 body=213 status=ok
// SIG undefined FUN_1435bcc10(void)

undefined1 * FUN_1435bcc10(undefined1 *param_1,longlong param_2,uint param_3,longlong *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 local_res8;
  undefined1 local_res10 [4];
  uint local_res14;
  undefined1 local_28 [8];
  longlong local_20;
  
  lVar2 = *(longlong *)(param_2 + 0xa0);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  local_res8 = *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + (ulonglong)param_3 * 8);
  Scaleform::GFx::AS3::Abc::ReadMethodInfoSmallHeader(&local_res8,local_res10);
  piVar4 = (int *)((ulonglong)local_res14 * 0x10 + *(longlong *)(lVar2 + 0x148));
  if (((piVar4[3] == 0) && (piVar4[2] == 0)) && (*piVar4 == 0)) {
    *param_4 = 0;
  }
  else {
    lVar2 = FUN_1435c84e0(uVar1,param_2);
    *param_4 = lVar2;
    if (lVar2 == 0) {
      uVar3 = FUN_1435c8e40(local_28,0x3f6,uVar1);
      FUN_1435ccf60(uVar1,uVar3,&DAT_145b14e70);
      piVar4 = (int *)(local_20 + 0x18);
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) {
        FUN_14335f920();
      }
      *param_1 = 0;
      return param_1;
    }
  }
  *param_1 = 1;
  return param_1;
}



// FUNCTION 1435bccf0 FUN_1435bccf0 body=43 status=ok
// SIG undefined FUN_1435bccf0(void)

undefined2 * FUN_1435bccf0(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  return param_1;
}



// FUNCTION 1435bcd30 FUN_1435bcd30 body=442 status=ok
// SIG undefined FUN_1435bcd30(void)

void FUN_1435bcd30(char *param_1)

{
  char *pcVar1;
  ulonglong *puVar2;
  uint *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int *piVar7;
  ulonglong local_res8;
  
  if (*param_1 != '\0') {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x28);
    FUN_1435a9c60(lVar4 + 0x58,param_1 + 0x60);
    FUN_1435a9bf0(lVar4 + 0x58,param_1 + 0x60);
    FUN_1435aa100(lVar4 + 0x78,param_1 + 0x50);
    FUN_143611e90(lVar4 + 0x98,
                  (*(longlong *)(lVar4 + 0x98) - *(longlong *)(lVar4 + 0xa0)) + 0x20 >> 5);
    FUN_1435a9bf0(lVar4 + 0x98,param_1 + 0x70);
    uVar5 = *(ulonglong *)(param_1 + 0x48);
    if (uVar5 != 0) {
      *(uint *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
    }
    puVar2 = (ulonglong *)(lVar4 + 0x2b0);
    if (&local_res8 != puVar2) {
      if (uVar5 != 0) {
        *(uint *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
      }
      uVar6 = *puVar2;
      if (uVar6 != 0) {
        if ((uVar6 & 1) == 0) {
          if ((*(uint *)(uVar6 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *puVar2 = uVar6 - 1;
        }
      }
      *puVar2 = uVar5;
    }
    if (((uVar5 != 0) && ((uVar5 & 1) == 0)) && ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
      FUN_1434ef880(uVar5);
    }
    pcVar1 = (char *)((ulonglong)*(uint *)(param_1 + 0x20) * 0x50 +
                      *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x130) + 0x2d);
    *pcVar1 = *pcVar1 + -1;
  }
  puVar3 = (uint *)(param_1 + 0x80);
  if (9 < ((byte)*puVar3 & 0x1f)) {
    if ((*puVar3 >> 9 & 1) == 0) {
      FUN_1435920c0(puVar3);
    }
    else {
      piVar7 = *(int **)(param_1 + 0x88);
      *piVar7 = *piVar7 + -1;
      if (*piVar7 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *puVar3 = *puVar3 & 0xfffffde0;
      param_1[0x88] = '\0';
      param_1[0x89] = '\0';
      param_1[0x8a] = '\0';
      param_1[0x8b] = '\0';
      param_1[0x8c] = '\0';
      param_1[0x8d] = '\0';
      param_1[0x8e] = '\0';
      param_1[0x8f] = '\0';
      param_1[0x90] = '\0';
      param_1[0x91] = '\0';
      param_1[0x92] = '\0';
      param_1[0x93] = '\0';
      param_1[0x94] = '\0';
      param_1[0x95] = '\0';
      param_1[0x96] = '\0';
      param_1[0x97] = '\0';
      param_1[0x98] = '\0';
      param_1[0x99] = '\0';
      param_1[0x9a] = '\0';
      param_1[0x9b] = '\0';
      param_1[0x9c] = '\0';
      param_1[0x9d] = '\0';
      param_1[0x9e] = '\0';
      param_1[0x9f] = '\0';
    }
  }
  uVar5 = *(ulonglong *)(param_1 + 0x48);
  if (uVar5 != 0) {
    if ((uVar5 & 1) != 0) {
      *(ulonglong *)(param_1 + 0x48) = uVar5 - 1;
      return;
    }
    if ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0) {
      *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
      FUN_1434ef880();
      return;
    }
  }
  return;
}



// FUNCTION 1435bcef0 FUN_1435bcef0 body=60 status=ok
// SIG undefined FUN_1435bcef0(void)

undefined4 * FUN_1435bcef0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 local_res8 [4];
  
  local_res8[0] =
       *(undefined8 *)
        (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xa0) + 0x90) +
        (ulonglong)*(uint *)(param_1 + 0x20) * 8);
  uVar1 = FUN_14358f8b0(local_res8);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 1435bcf40 FUN_1435bcf40 body=2835 status=ok
// SIG undefined FUN_1435bcf40(void)

undefined1 *
FUN_1435bcf40(longlong param_1,undefined1 *param_2,uint *param_3,uint *param_4,uint param_5,
             void *param_6,uint param_7,ulonglong param_8)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  uint uVar14;
  longlong *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  ulonglong uVar19;
  int *piVar20;
  longlong lVar21;
  int iVar22;
  ulonglong *puVar23;
  void *pvVar24;
  uint *puVar25;
  ulonglong uVar26;
  int *piVar27;
  uint uVar28;
  bool bVar29;
  int local_108;
  ulonglong local_100;
  int *piStack_f8;
  ulonglong local_f0;
  ulonglong uStack_e8;
  uint local_e0;
  uint uStack_dc;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  ulonglong uStack_c8;
  ulonglong local_c0;
  int *piStack_b8;
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  undefined1 local_a0 [4];
  undefined4 local_9c;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80 [12];
  int local_74;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 uStack_60;
  
  uVar26 = 0;
  uVar14 = *param_3;
  bVar12 = true;
  bVar11 = false;
  local_108 = 1;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x28);
  uVar28 = uVar14 & 0x1f;
  if (uVar28 == 0) {
LAB_1435bd03e:
    local_f0 = *(ulonglong *)(param_1 + 0x38);
    local_100 = CONCAT44(local_100._4_4_,0xc);
    piStack_f8 = (int *)0x0;
    if (local_f0 != 0) {
      *(uint *)(local_f0 + 8) = *(int *)(local_f0 + 8) + 1U & 0x8fffffff;
    }
    puVar23 = &local_100;
  }
  else {
    if (uVar28 == 0xc) {
      bVar29 = *(longlong *)(param_3 + 4) == 0;
LAB_1435bcfb9:
      if (bVar29) goto LAB_1435bd03e;
    }
    else if (uVar28 == 10) {
      bVar29 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
      goto LAB_1435bcfb9;
    }
    piStack_b8 = *(int **)(param_3 + 2);
    local_c0 = CONCAT44(local_c0._4_4_,uVar14);
    local_b0 = param_3[4];
    uStack_ac = param_3[5];
    uStack_a8 = param_3[6];
    uStack_a4 = param_3[7];
    if (9 < uVar28) {
      if ((uVar14 >> 9 & 1) != 0) {
        *piStack_b8 = *piStack_b8 + 1;
        puVar23 = &local_c0;
        bVar12 = false;
        bVar11 = true;
        goto LAB_1435bd06e;
      }
      if (uVar28 == 10) {
        *(int *)(*(longlong *)(param_3 + 4) + 0x18) =
             *(int *)(*(longlong *)(param_3 + 4) + 0x18) + 1;
      }
      else if (10 < uVar28) {
        if (uVar28 < 0xd) {
          lVar21 = *(longlong *)(param_3 + 4);
        }
        else {
          if (0xe < uVar28) goto LAB_1435bd033;
          lVar21 = *(longlong *)(param_3 + 6);
        }
        if (lVar21 != 0) {
          puVar23 = &local_c0;
          bVar12 = false;
          bVar11 = true;
          *(uint *)(lVar21 + 8) = *(int *)(lVar21 + 8) + 1U & 0x8fffffff;
          goto LAB_1435bd06e;
        }
      }
    }
LAB_1435bd033:
    puVar23 = &local_c0;
    bVar12 = false;
    bVar11 = true;
  }
LAB_1435bd06e:
  FUN_143590140(*(undefined8 *)(lVar6 + 0x78),puVar23);
  if (bVar11) {
    uVar14 = (uint)local_c0 & 0x1f;
    if (9 < uVar14) {
      if (((uint)local_c0 >> 9 & 1) == 0) {
        if (uVar14 == 10) {
          piVar27 = (int *)(CONCAT44(uStack_ac,local_b0) + 0x18);
          *piVar27 = *piVar27 + -1;
          if (*piVar27 == 0) {
            FUN_14335f920();
          }
        }
        else if ((uVar14 == 0xb) || (uVar14 == 0xc)) {
          if ((local_b0 & 1) == 0) {
            lVar21 = CONCAT44(uStack_ac,local_b0);
            goto LAB_1435bd0dd;
          }
        }
        else if ((uVar14 == 0xd || uVar14 == 0xe) && ((uStack_a8 & 1) == 0)) {
          lVar21 = CONCAT44(uStack_a4,uStack_a8);
LAB_1435bd0dd:
          if ((lVar21 != 0) && ((*(uint *)(lVar21 + 8) & 0x3fffff) != 0)) {
            *(uint *)(lVar21 + 8) = *(uint *)(lVar21 + 8) - 1;
            FUN_1434ef880();
          }
        }
      }
      else {
        *piStack_b8 = *piStack_b8 + -1;
        if (*piStack_b8 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
      }
    }
  }
  if (bVar12) {
    uVar14 = (uint)local_100 & 0x1f;
    if (9 < uVar14) {
      if (((uint)local_100 >> 9 & 1) == 0) {
        if (uVar14 == 10) {
          piVar27 = (int *)(local_f0 + 0x18);
          *piVar27 = *piVar27 + -1;
          if (*piVar27 == 0) {
            FUN_14335f920();
          }
        }
        else {
          uVar19 = local_f0;
          if ((((uVar14 == 0xb) || (uVar14 == 0xc)) ||
              (uVar19 = uStack_e8, uVar14 == 0xd || uVar14 == 0xe)) &&
             ((((uVar19 & 1) == 0 && (uVar19 != 0)) && ((*(uint *)(uVar19 + 8) & 0x3fffff) != 0))))
          {
            *(uint *)(uVar19 + 8) = *(uint *)(uVar19 + 8) - 1;
            FUN_1434ef880();
          }
        }
      }
      else {
        *piStack_f8 = *piStack_f8 + -1;
        if (*piStack_f8 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
      }
    }
  }
  uVar14 = *(uint *)(param_8 + 0x1c);
  if ((char)param_7 == '\0') {
    local_100 = *(ulonglong *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xa0) + 0x90) +
                 (ulonglong)*(uint *)(param_1 + 0x20) * 8);
    uVar28 = FUN_14358f8b0(&local_100);
    lVar21 = *(longlong *)(param_1 + 0x18);
    local_90 = *(undefined8 *)
                (*(longlong *)(*(longlong *)(lVar21 + 0xa0) + 0x30) + (ulonglong)uVar28 * 8);
    local_74 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_98 = lVar21;
    FUN_14361cce0(&local_90,local_80);
    uVar19 = 0;
    local_88 = local_70;
    local_c0 = local_68;
    param_7 = uVar14 - local_74;
    local_a0[0] = 0;
    local_9c = 0xffffffff;
    if (uVar14 != 0) {
      lVar18 = 0x20;
      local_100 = (longlong)param_6 - 0x20;
      do {
        uVar16 = *(undefined8 *)(lVar21 + 0x28);
        lVar21 = *(longlong *)(lVar21 + 0xa0);
        uVar28 = FUN_14358f8b0(&local_88);
        piVar27 = (int *)((ulonglong)uVar28 * 0x10 + *(longlong *)(lVar21 + 0x148));
        if (((piVar27[3] == 0) && (piVar27[2] == 0)) && (*piVar27 == 0)) {
          plVar15 = (longlong *)0x0;
        }
        else {
          plVar15 = (longlong *)FUN_1435c84e0(uVar16,local_98);
          if (plVar15 == (longlong *)0x0) {
            uVar17 = FUN_1435c8e40(&local_100,0x3f6,uVar16);
            FUN_1435ccf60(uVar16,uVar17,&DAT_145b14e70);
            piVar27 = piStack_f8 + 6;
            *piVar27 = *piVar27 + -1;
            if (*piVar27 == 0) {
              FUN_14335f920();
            }
            goto LAB_1435bd55c;
          }
        }
        uVar28 = (uint)uVar19;
        if (param_7 <= uVar28) {
          Scaleform::GFx::AS3::Abc::Read(&local_c0,local_a0);
        }
        if (uVar28 < *param_4) {
          if ((plVar15 != (longlong *)0x0) &&
             (pvVar24 = (void *)(uVar19 * 0x20 + (longlong)param_6),
             cVar13 = (**(code **)(*plVar15 + 0x58))(plVar15,pvVar24,pvVar24), cVar13 == '\0')) {
            uVar16 = FUN_1435c8e40(&local_100,0x40a,lVar6);
            FUN_1435ccf60(lVar6,uVar16,&DAT_145b155b0);
            piVar27 = piStack_f8 + 6;
            *piVar27 = *piVar27 + -1;
            if (*piVar27 == 0) {
              FUN_14335f920();
              *param_2 = 0;
              return param_2;
            }
LAB_1435bd55c:
            *param_2 = 0;
            return param_2;
          }
          uVar26 = (ulonglong)((int)uVar26 + 1);
          lVar21 = *(longlong *)(lVar6 + 0x78);
          puVar2 = (undefined4 *)(local_100 + lVar18);
          uVar8 = puVar2[1];
          uVar9 = puVar2[2];
          uVar10 = puVar2[3];
          puVar3 = (undefined4 *)(lVar18 + lVar21);
          *puVar3 = *puVar2;
          puVar3[1] = uVar8;
          puVar3[2] = uVar9;
          puVar3[3] = uVar10;
          puVar4 = (undefined8 *)(local_100 + 0x10 + lVar18);
          uVar16 = puVar4[1];
          puVar5 = (undefined8 *)(lVar18 + 0x10 + lVar21);
          *puVar5 = *puVar4;
          puVar5[1] = uVar16;
          *(undefined4 *)(local_100 + lVar18) = 0;
        }
        else if (uVar28 < param_7) {
          if (plVar15 != (longlong *)0x0) {
            uVar16 = FUN_1435c8e40(&local_100,0x427,lVar6);
            FUN_1435ccf60(lVar6,uVar16,&DAT_145b15f30);
            piVar27 = piStack_f8 + 6;
            *piVar27 = *piVar27 + -1;
            if (*piVar27 == 0) {
              FUN_14335f920();
              *param_2 = 0;
              return param_2;
            }
            goto LAB_1435bd55c;
          }
        }
        else {
          FUN_1435bb2a0(local_98,&local_e0,local_a0);
          if ((plVar15 != (longlong *)0x0) &&
             (cVar13 = (**(code **)(*plVar15 + 0x58))(plVar15,&local_e0,&local_e0), cVar13 == '\0'))
          {
            uVar16 = FUN_1435c8e40(&local_100,0x40a,lVar6);
            FUN_1435ccf60(lVar6,uVar16,&DAT_145b155b0);
            piVar27 = piStack_f8 + 6;
            *piVar27 = *piVar27 + -1;
            if (*piVar27 == 0) {
              FUN_14335f920();
            }
            uVar14 = local_e0 & 0x1f;
            *param_2 = 0;
            if (uVar14 < 10) {
              return param_2;
            }
            if ((local_e0 >> 9 & 1) != 0) {
              *uStack_d8 = *uStack_d8 + -1;
              if (*uStack_d8 != 0) {
                return param_2;
              }
              (**(code **)(*DAT_146b62f28 + 0x60))();
              return param_2;
            }
            if (uVar14 == 10) {
              piVar27 = (int *)(CONCAT44(uStack_cc,local_d0) + 0x18);
              *piVar27 = *piVar27 + -1;
              if (*piVar27 != 0) {
                return param_2;
              }
              FUN_14335f920();
              return param_2;
            }
            if ((uVar14 == 0xb) || (uVar14 == 0xc)) {
              uStack_c8 = CONCAT44(uStack_cc,local_d0);
            }
            else if (1 < uVar14 - 0xd) {
              return param_2;
            }
            if ((uStack_c8 & 1) != 0) {
              return param_2;
            }
            if (uStack_c8 == 0) {
              return param_2;
            }
            if ((*(uint *)(uStack_c8 + 8) & 0x3fffff) == 0) {
              return param_2;
            }
            *(uint *)(uStack_c8 + 8) = *(uint *)(uStack_c8 + 8) - 1;
            FUN_1434ef880();
            return param_2;
          }
          lVar21 = *(longlong *)(lVar6 + 0x78);
          puVar25 = (uint *)(lVar18 + lVar21);
          *puVar25 = local_e0;
          puVar25[1] = uStack_dc;
          puVar25[2] = (uint)uStack_d8;
          puVar25[3] = uStack_d8._4_4_;
          puVar4 = (undefined8 *)(lVar18 + 0x10 + lVar21);
          *puVar4 = CONCAT44(uStack_cc,local_d0);
          puVar4[1] = uStack_c8;
        }
        lVar18 = lVar18 + 0x20;
        local_108 = local_108 + 1;
        uVar19 = (ulonglong)(uVar28 + 1);
        lVar21 = local_98;
      } while (uVar28 + 1 < uVar14);
    }
  }
  else if (uVar14 != 0) {
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(lVar6 + 0x78) + 0x20),param_6,(ulonglong)(uVar14 << 5));
    _guard_xfg_dispatch_icall_nop(param_6,0,(ulonglong)(uVar14 << 5));
    local_108 = uVar14 + 1;
    uVar26 = (ulonglong)uVar14;
  }
  if ((*(byte *)(param_8 + 0x2c) & 4) != 0) {
    lVar21 = *(longlong *)(*(longlong *)(lVar6 + 0x248) + 0xd8);
    lVar18 = *(longlong *)(lVar21 + 0xa0);
    if (lVar18 == 0) {
      param_7 = 0x152;
      plVar15 = *(longlong **)(*(longlong *)(lVar21 + 0x98) + 0x48);
      lVar18 = (**(code **)(*plVar15 + 0x50))(plVar15,*(undefined4 *)(lVar21 + 0x80),&param_7);
    }
    else {
      *(undefined8 *)(lVar21 + 0xa0) = *(undefined8 *)(lVar18 + 0x28);
    }
    if (lVar18 == 0) {
      uVar19 = 0;
    }
    else {
      uVar19 = FUN_1434b64a0(lVar18,lVar21);
    }
    if (uVar14 < *param_4) {
      FUN_1434b46d0(uVar19 + 0x40,*param_4 - uVar14,
                    (void *)((ulonglong)uVar14 * 0x20 + (longlong)param_6));
      uVar26 = (ulonglong)((int)uVar26 + (*param_4 - uVar14));
    }
    piVar27 = piStack_b8;
    puVar25 = (uint *)((longlong)local_108 * 0x20 + *(longlong *)(lVar6 + 0x78));
    uStack_d8 = (int *)0x0;
    local_e0 = 0xc;
    local_c0 = uVar19;
    if (&local_e0 != puVar25) {
      if (uVar19 != 0) {
        *(uint *)(uVar19 + 8) = *(int *)(uVar19 + 8) + 1U & 0x8fffffff;
      }
      if (9 < ((byte)*puVar25 & 0x1f)) {
        if ((*puVar25 >> 9 & 1) == 0) {
          FUN_1435920c0(puVar25);
        }
        else {
          piVar20 = *(int **)(puVar25 + 2);
          *piVar20 = *piVar20 + -1;
          if (*piVar20 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          *puVar25 = *puVar25 & 0xfffffde0;
          puVar25[2] = 0;
          puVar25[3] = 0;
          puVar25[4] = 0;
          puVar25[5] = 0;
          puVar25[6] = 0;
          puVar25[7] = 0;
        }
      }
      *puVar25 = local_e0;
      puVar25[1] = uStack_dc;
      puVar25[2] = (uint)uStack_d8;
      puVar25[3] = uStack_d8._4_4_;
      *(ulonglong *)(puVar25 + 4) = uVar19;
      *(int **)(puVar25 + 6) = piVar27;
    }
    if ((((uVar19 & 1) == 0) && (uVar19 != 0)) && ((*(uint *)(uVar19 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar19 + 8) = *(uint *)(uVar19 + 8) - 1;
      FUN_1434ef880(uVar19);
    }
    goto LAB_1435bd9cd;
  }
  if ((*(byte *)(param_8 + 0x2c) & 1) == 0) goto LAB_1435bd9cd;
  lVar21 = *(longlong *)(*(longlong *)(lVar6 + 0x248) + 0xd8);
  lVar18 = *(longlong *)(lVar21 + 0xa0);
  if (lVar18 == 0) {
    param_7 = 0x152;
    plVar15 = *(longlong **)(*(longlong *)(lVar21 + 0x98) + 0x48);
    lVar18 = (**(code **)(*plVar15 + 0x50))(plVar15,*(undefined4 *)(lVar21 + 0x80),&param_7);
  }
  else {
    *(undefined8 *)(lVar21 + 0xa0) = *(undefined8 *)(lVar18 + 0x28);
  }
  if (lVar18 == 0) {
    param_8 = 0;
  }
  else {
    param_8 = FUN_1434b64a0(lVar18,lVar21);
  }
  uVar28 = 0;
  if (param_5 != 0) {
    lVar21 = param_8 + 0x40;
    do {
      if (uVar28 < uVar14) {
        FUN_1434b49b0(lVar21,(ulonglong)(uVar28 + 1) * 0x20 + *(longlong *)(lVar6 + 0x78));
      }
      else {
        FUN_1434b4a10(lVar21,(void *)((ulonglong)uVar28 * 0x20 + (longlong)param_6));
        uVar26 = (ulonglong)((int)uVar26 + 1);
      }
      uVar28 = uVar28 + 1;
    } while (uVar28 < param_5);
  }
  piVar27 = piStack_b8;
  uVar19 = param_8;
  puVar25 = (uint *)((longlong)local_108 * 0x20 + *(longlong *)(lVar6 + 0x78));
  uStack_d8 = (int *)0x0;
  local_e0 = 0xc;
  local_c0 = param_8;
  if (&local_e0 != puVar25) {
    if (param_8 != 0) {
      *(uint *)(param_8 + 8) = *(int *)(param_8 + 8) + 1U & 0x8fffffff;
    }
    if (9 < ((byte)*puVar25 & 0x1f)) {
      if ((*puVar25 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar25);
      }
      else {
        piVar20 = *(int **)(puVar25 + 2);
        *piVar20 = *piVar20 + -1;
        if (*piVar20 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        *puVar25 = *puVar25 & 0xfffffde0;
        puVar25[2] = 0;
        puVar25[3] = 0;
        puVar25[4] = 0;
        puVar25[5] = 0;
        puVar25[6] = 0;
        puVar25[7] = 0;
      }
    }
    *puVar25 = local_e0;
    puVar25[1] = uStack_dc;
    puVar25[2] = (uint)uStack_d8;
    puVar25[3] = uStack_d8._4_4_;
    *(ulonglong *)(puVar25 + 4) = uVar19;
    *(int **)(puVar25 + 6) = piVar27;
  }
  if ((((uVar19 & 1) == 0) && (uVar19 != 0)) && ((*(uint *)(uVar19 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar19 + 8) = *(uint *)(uVar19 + 8) - 1;
    FUN_1434ef880(uVar19);
  }
  local_100 = local_100 & 0xffffffff00000000;
  piStack_f8 = (int *)0x0;
  puVar23 = (ulonglong *)(param_1 + 0x80);
  if (((byte)*(undefined4 *)puVar23 & 0x1f) == 7) {
    local_d0 = *(undefined4 *)(param_1 + 0x90);
    uStack_d8 = (int *)0x0;
    uStack_e8 = *(ulonglong *)(param_3 + 4);
    if (uStack_e8 != 0) {
      *(uint *)(uStack_e8 + 8) = *(int *)(uStack_e8 + 8) + 1U & 0x8fffffff;
    }
    local_f0 = CONCAT44(uStack_cc,local_d0);
    local_e0 = 0xe;
    local_100 = CONCAT44(uStack_dc,0xe);
    piStack_f8 = (int *)0x0;
    uStack_c8 = uStack_e8;
LAB_1435bd8e9:
    uVar14 = (uint)local_100;
  }
  else {
    uVar14 = 0;
    if (puVar23 != &local_100) {
      local_100 = *puVar23;
      piStack_f8 = *(int **)(param_1 + 0x88);
      local_f0 = *(ulonglong *)(param_1 + 0x90);
      uStack_e8 = *(ulonglong *)(param_1 + 0x98);
      FUN_14360dee0(&local_100);
      goto LAB_1435bd8e9;
    }
  }
  piVar27 = piStack_f8;
  piVar20 = (int *)FUN_143360950(*(undefined8 *)(*(longlong *)(lVar6 + 0x10) + 0x218),"callee",6);
  local_c0 = local_c0 & 0xffffffff00000000;
  piVar20[6] = piVar20[6] + 2;
  uVar28 = piVar20[7];
  puVar7 = *(undefined **)(uVar19 + 0x30);
  piStack_b8 = piVar20;
  if (puVar7 == &DAT_1467d9aa0) {
    iVar22 = 8;
LAB_1435bd954:
    FUN_143614420(uVar19 + 0x30,iVar22,0,0);
  }
  else if (*(uint *)(puVar7 + 0x18) <= *(uint *)(puVar7 + 8)) {
    iVar22 = *(int *)(puVar7 + 0x30) * 2 + 2;
    goto LAB_1435bd954;
  }
  FUN_143613ea0(*(undefined8 *)(uVar19 + 0x30),&local_c0,&local_100,uVar28 & 0xffffff);
  piVar1 = piVar20 + 6;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(piVar20);
  }
  piVar1 = piVar20 + 6;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(piVar20);
  }
  if (9 < ((byte)uVar14 & 0x1f)) {
    if ((uVar14 >> 9 & 1) == 0) {
      FUN_1435920c0(&local_100);
    }
    else {
      *piVar27 = *piVar27 + -1;
      if (*piVar27 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar27);
      }
    }
  }
LAB_1435bd9cd:
  if ((uint)uVar26 < *param_4) {
    do {
      puVar25 = (uint *)(uVar26 * 0x20 + (longlong)param_6);
      if (9 < ((byte)*puVar25 & 0x1f)) {
        if ((*puVar25 >> 9 & 1) == 0) {
          FUN_1435920c0(puVar25);
        }
        else {
          piVar27 = *(int **)(puVar25 + 2);
          *piVar27 = *piVar27 + -1;
          if (*piVar27 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          *puVar25 = *puVar25 & 0xfffffde0;
          puVar25[2] = 0;
          puVar25[3] = 0;
          puVar25[4] = 0;
          puVar25[5] = 0;
          puVar25[6] = 0;
          puVar25[7] = 0;
        }
      }
      *puVar25 = *puVar25 & 0xffffffe0;
      uVar14 = (int)uVar26 + 1;
      uVar26 = (ulonglong)uVar14;
    } while (uVar14 < *param_4);
  }
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1435bda60 FUN_1435bda60 body=214 status=ok
// SIG undefined FUN_1435bda60(void)

void FUN_1435bda60(undefined1 *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  ulonglong local_res8;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x28);
  uVar3 = *(undefined4 *)(lVar1 + 0x5c);
  uVar4 = *(undefined4 *)(lVar1 + 0x60);
  uVar5 = *(undefined4 *)(lVar1 + 100);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar1 + 0x58);
  *(undefined4 *)(param_1 + 100) = uVar3;
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  *(undefined4 *)(param_1 + 0x6c) = uVar5;
  FUN_1435a9b60(lVar1 + 0x58,*(undefined2 *)(param_2 + 0x10));
  uVar3 = *(undefined4 *)(lVar1 + 0x7c);
  uVar4 = *(undefined4 *)(lVar1 + 0x80);
  uVar5 = *(undefined4 *)(lVar1 + 0x84);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(lVar1 + 0x78);
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  FUN_1435aa060(lVar1 + 0x78,*(undefined2 *)(param_2 + 0x14));
  uVar3 = *(undefined4 *)(lVar1 + 0x9c);
  uVar4 = *(undefined4 *)(lVar1 + 0xa0);
  uVar5 = *(undefined4 *)(lVar1 + 0xa4);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(lVar1 + 0x98);
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  *(undefined4 *)(param_1 + 0x78) = uVar4;
  *(undefined4 *)(param_1 + 0x7c) = uVar5;
  FUN_1435a9b60((undefined4 *)(lVar1 + 0x98),*(undefined2 *)(param_2 + 0x18));
  puVar6 = (ulonglong *)(lVar1 + 0x2b0);
  *(undefined8 **)(param_1 + 0x10) = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x38);
  if (*puVar6 != 0) {
    FUN_1434f0700(param_1 + 0x48);
    if (&local_res8 != puVar6) {
      uVar2 = *puVar6;
      if (uVar2 != 0) {
        if ((uVar2 & 1) == 0) {
          if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *puVar6 = uVar2 - 1;
        }
      }
      *puVar6 = 0;
    }
  }
  *(char *)(param_2 + 0x2d) = *(char *)(param_2 + 0x2d) + '\x01';
  *param_1 = 1;
  return;
}



// FUNCTION 1435bdca0 GetArrayInd body=184 status=ok
// SIG undefined GetArrayInd(void)

undefined1 *
Scaleform::GFx::AS3::GetArrayInd(undefined1 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  uint uVar1;
  char *_Str;
  char *pcVar2;
  uint uVar3;
  double dVar4;
  char *local_res10 [3];
  
  uVar1 = *(uint *)(param_2 + 4);
  if (uVar1 != 0) {
    _Str = (char *)*param_2;
    if (*_Str == '0') {
      *param_3 = 0;
      *param_1 = uVar1 == 1;
      return param_1;
    }
    if ((byte)(*_Str - 0x30U) < 10) {
      uVar3 = 1;
      pcVar2 = _Str;
      if (1 < uVar1) {
        do {
          if (9 < (byte)(pcVar2[1] - 0x30U)) goto LAB_1435bdd47;
          uVar3 = uVar3 + 1;
          pcVar2 = pcVar2 + 1;
        } while (uVar3 < uVar1);
      }
      dVar4 = strtod(_Str,local_res10);
      if (dVar4 <= 4294967295.0) {
        *param_1 = 1;
        *param_3 = (int)(longlong)dVar4;
        return param_1;
      }
    }
  }
LAB_1435bdd47:
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1435bdd60 FUN_1435bdd60 body=97 status=ok
// SIG undefined FUN_1435bdd60(void)

undefined1 * FUN_1435bdd60(undefined1 *param_1,uint *param_2)

{
  undefined1 *puVar1;
  undefined1 local_res8 [32];
  
  if ((*param_2 & 0x1f) == 10) {
    puVar1 = (undefined1 *)Scaleform::GFx::AS3::GetArrayInd(local_res8,*(undefined8 *)(param_2 + 4))
    ;
    *param_1 = *puVar1;
    return param_1;
  }
  if ((*param_2 & 0x1f) - 2 < 3) {
    puVar1 = (undefined1 *)FUN_143590eb0(param_2,local_res8);
    *param_1 = *puVar1;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1435bddd0 FUN_1435bddd0 body=204 status=ok
// SIG undefined FUN_1435bddd0(void)

undefined1 * FUN_1435bddd0(undefined1 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  char *_Str;
  uint uVar3;
  undefined1 uVar4;
  char *pcVar5;
  double dVar6;
  char *local_res8;
  
  uVar4 = 0;
  if (((param_2 == (undefined8 *)0x0) || (uVar2 = *(uint *)(param_2 + 4), uVar2 == 0)) ||
     (_Str = (char *)*param_2, 9 < (byte)(*_Str - 0x30U))) goto LAB_1435bde86;
  uVar3 = 1;
  pcVar5 = _Str;
  if (1 < uVar2) {
    do {
      cVar1 = pcVar5[1];
      if (9 < (byte)(cVar1 - 0x30U)) {
        if (cVar1 != '.') goto LAB_1435bde86;
        uVar3 = uVar3 + 1;
        if (uVar3 < uVar2) {
          pcVar5 = _Str + uVar3;
          goto LAB_1435bde50;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      pcVar5 = pcVar5 + 1;
    } while (uVar3 < uVar2);
  }
  goto LAB_1435bde60;
  while( true ) {
    uVar3 = uVar3 + 1;
    pcVar5 = pcVar5 + 1;
    if (uVar2 <= uVar3) break;
LAB_1435bde50:
    if (*pcVar5 != '0') goto LAB_1435bde86;
  }
LAB_1435bde60:
  dVar6 = strtod(_Str,&local_res8);
  if (dVar6 <= 4294967295.0) {
    uVar4 = 1;
    *param_3 = (int)(longlong)dVar6;
  }
LAB_1435bde86:
  *param_1 = uVar4;
  return param_1;
}



// FUNCTION 1435bdeb0 FUN_1435bdeb0 body=190 status=ok
// SIG undefined FUN_1435bdeb0(void)

undefined1 * FUN_1435bdeb0(undefined1 *param_1,uint *param_2,uint *param_3)

{
  double _X;
  undefined1 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  double dVar4;
  double local_res8;
  
  uVar2 = 0;
  uVar3 = *param_2 & 0x1f;
  if (uVar3 == 2) {
    uVar3 = param_2[4];
    if ((int)uVar3 < 0) goto LAB_1435bdf4f;
LAB_1435bdf4a:
    *param_3 = uVar3;
  }
  else {
    if (uVar3 == 3) {
      uVar3 = param_2[4];
      goto LAB_1435bdf4a;
    }
    if (uVar3 != 4) {
      if (uVar3 == 10) {
        puVar1 = (undefined1 *)FUN_1435bddd0(&local_res8,*(undefined8 *)(param_2 + 4));
        uVar2 = *puVar1;
      }
      goto LAB_1435bdf4f;
    }
    _X = *(double *)(param_2 + 4);
    if (((_X < 0.0) || (dVar4 = modf(_X,&local_res8), dVar4 != 0.0)) || (4294967295.0 < _X))
    goto LAB_1435bdf4f;
    *param_3 = (uint)(longlong)_X;
  }
  uVar2 = 1;
LAB_1435bdf4f:
  *param_1 = uVar2;
  return param_1;
}



// FUNCTION 1435bdf80 FUN_1435bdf80 body=211 status=ok
// SIG undefined FUN_1435bdf80(void)

undefined1 * FUN_1435bdf80(undefined1 *param_1,undefined8 *param_2,double *param_3)

{
  char cVar1;
  uint uVar2;
  char *_Str;
  uint uVar3;
  char *pcVar4;
  double dVar5;
  char *local_res10 [3];
  
  if (((param_2 == (undefined8 *)0x0) || (uVar2 = *(uint *)(param_2 + 4), uVar2 == 0)) ||
     (_Str = (char *)*param_2, 9 < (byte)(*_Str - 0x30U))) {
    *param_1 = 0;
    return param_1;
  }
  uVar3 = 1;
  pcVar4 = _Str;
  if (1 < uVar2) {
    do {
      cVar1 = pcVar4[1];
      if (9 < (byte)(cVar1 - 0x30U)) {
        if (cVar1 != '.') goto LAB_1435be031;
        uVar3 = uVar3 + 1;
        if (uVar3 < uVar2) {
          pcVar4 = _Str + uVar3;
          do {
            if (*pcVar4 != '0') {
LAB_1435be031:
              *param_1 = 0;
              return param_1;
            }
            uVar3 = uVar3 + 1;
            pcVar4 = pcVar4 + 1;
          } while (uVar3 < uVar2);
        }
        break;
      }
      uVar3 = uVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (uVar3 < uVar2);
  }
  dVar5 = strtod(_Str,local_res10);
  *param_1 = 1;
  *param_3 = dVar5;
  return param_1;
}



// FUNCTION 1435be060 FUN_1435be060 body=57 status=ok
// SIG undefined FUN_1435be060(void)

ulonglong FUN_1435be060(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 extraout_var;
  
  uVar2 = (ulonglong)*(uint *)(*(undefined8 **)(param_1 + 0x38) + 4);
  if (DAT_1467d9b10 <= uVar2) {
    iVar1 = strncmp((char *)**(undefined8 **)(param_1 + 0x38),PTR_s_scaleform_gfx_1467d9b08,
                    DAT_1467d9b10);
    uVar2 = CONCAT44(extraout_var,iVar1);
    if (iVar1 == 0) {
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1435be0a0 FUN_1435be0a0 body=104 status=ok
// SIG undefined FUN_1435be0a0(void)

undefined8 * FUN_1435be0a0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  param_1[4] = *(undefined8 *)(param_2 + 0x30);
  *param_1 = &PTR_ForEachChild_GC_145b4ad68;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[5] = 0;
  param_1[7] = *(undefined8 *)(param_2 + 0x48);
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_3 != 0) {
    FUN_1435be170(param_3,param_1);
  }
  return param_1;
}



// FUNCTION 1435be110 FUN_1435be110 body=77 status=ok
// SIG undefined FUN_1435be110(void)

void FUN_1435be110(undefined8 *param_1)

{
  *param_1 = &PTR_ForEachChild_GC_145b4ad68;
  FUN_1434e5ef0(param_1 + 0xb);
  FUN_1434e5ef0(param_1 + 8);
  FUN_1434e8840(param_1 + 6);
  FUN_1434e8840(param_1 + 6);
  FUN_1435ab0c0(param_1);
  return;
}



// FUNCTION 1435be170 FUN_1435be170 body=154 status=ok
// SIG undefined FUN_1435be170(void)

void FUN_1435be170(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  
  if (param_2 != 0) {
    *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  }
  FUN_143613820(param_1 + 0x40,param_1 + 0x40,*(longlong *)(param_1 + 0x48) + 1);
  puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x40) + (*(longlong *)(param_1 + 0x48) + -1) * 8);
  if (puVar1 != (ulonglong *)0x0) {
    *puVar1 = param_2;
    if (param_2 == 0) goto LAB_1435be1f6;
    *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  }
  if (((param_2 != 0) && ((param_2 & 1) == 0)) && ((*(uint *)(param_2 + 8) & 0x3fffff) != 0)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) - 1;
    FUN_1434ef880(param_2);
  }
LAB_1435be1f6:
  *(longlong *)(param_2 + 0x28) = param_1;
  return;
}



// FUNCTION 1435be210 FUN_1435be210 body=153 status=ok
// SIG undefined FUN_1435be210(void)

longlong * FUN_1435be210(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  if (DAT_1467d97e8 == '\0') {
    *param_2 = param_1;
    if (param_1 != 0) {
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + 1U & 0x8fffffff;
    }
    return param_2;
  }
  lVar1 = (**(code **)(**(longlong **)(param_3 + 0x48) + 0x50))(*(longlong **)(param_3 + 0x48),0x78)
  ;
  if (lVar1 != 0) {
    lVar1 = FUN_1435be0a0(lVar1,param_3,param_1);
    *param_2 = lVar1;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1435be2b0 FUN_1435be2b0 body=74 status=ok
// SIG undefined FUN_1435be2b0(void)

void FUN_1435be2b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (lVar1 = FUN_1435be2b0(), lVar1 != 0)) {
    return;
  }
  FUN_143610010(param_1 + 0x30,param_2,param_3);
  return;
}



// FUNCTION 1435be300 FUN_1435be300 body=58 status=ok
// SIG undefined FUN_1435be300(void)

void FUN_1435be300(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (lVar1 = FUN_1435be300(), lVar1 != 0)) {
    return;
  }
  FUN_143610150(param_1 + 0x30,param_2);
  return;
}



// FUNCTION 1435be340 FUN_1435be340 body=74 status=ok
// SIG undefined FUN_1435be340(void)

void FUN_1435be340(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (lVar1 = FUN_1435be340(), lVar1 != 0)) {
    return;
  }
  FUN_14360ff40(param_1 + 0x30,param_2,param_3);
  return;
}



// FUNCTION 1435be390 FUN_1435be390 body=89 status=ok
// SIG undefined FUN_1435be390(void)

void FUN_1435be390(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  FUN_1436104b0(param_1 + 0x30);
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    do {
      FUN_1435be390(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + uVar1 * 8),param_2);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ulonglong *)(param_1 + 0x48));
  }
  return;
}



// FUNCTION 1435be3f0 FUN_1435be3f0 body=228 status=ok
// SIG undefined FUN_1435be3f0(void)

ulonglong FUN_1435be3f0(longlong param_1)

{
  void *_Dst;
  longlong lVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar5 = 0;
  if (lVar1 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar2 = *(ulonglong *)(lVar1 + 0x48);
  uVar4 = 0;
  if (uVar2 != 0) {
    plVar3 = *(longlong **)(lVar1 + 0x40);
    while (*plVar3 != param_1) {
      uVar4 = uVar4 + 1;
      plVar3 = plVar3 + 1;
      if (uVar2 <= uVar4) {
        return 0;
      }
    }
    if (uVar2 == 1) {
      FUN_143613820(lVar1 + 0x40,lVar1 + 0x40,0);
      return 1;
    }
    uVar5 = *(ulonglong *)(*(longlong *)(lVar1 + 0x40) + uVar4 * 8);
    if (uVar5 != 0) {
      if ((uVar5 & 1) == 0) {
        if ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *(ulonglong *)(*(longlong *)(lVar1 + 0x40) + uVar4 * 8) = uVar5 - 1;
      }
    }
    _Dst = (void *)(*(longlong *)(lVar1 + 0x40) + uVar4 * 8);
    memmove(_Dst,(void *)((longlong)_Dst + 8),(*(longlong *)(lVar1 + 0x48) - uVar4) * 8 - 8);
    *(longlong *)(lVar1 + 0x48) = *(longlong *)(lVar1 + 0x48) + -1;
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 1435be4e0 FUN_1435be4e0 body=161 status=ok
// SIG undefined FUN_1435be4e0(void)

undefined8 FUN_1435be4e0(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  
  if (param_2 != 0) {
    *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  }
  FUN_143613820(param_1 + 0x58,param_1 + 0x58,*(longlong *)(param_1 + 0x60) + 1);
  puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x58) + (*(longlong *)(param_1 + 0x60) + -1) * 8);
  if (puVar1 != (ulonglong *)0x0) {
    *puVar1 = param_2;
    if (param_2 == 0) goto LAB_1435be566;
    *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  }
  if ((param_2 != 0) && ((param_2 & 1) == 0)) {
    if ((*(uint *)(param_2 + 8) & 0x3fffff) != 0) {
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) - 1;
      FUN_1434ef880(param_2);
    }
  }
LAB_1435be566:
  *(int *)(param_2 + 0x9c) = *(int *)(param_2 + 0x9c) + 1;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  return 1;
}



// FUNCTION 1435be590 FUN_1435be590 body=139 status=ok
// SIG undefined FUN_1435be590(void)

void FUN_1435be590(ulonglong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
  uVar2 = 0;
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + 1U & 0x8fffffff;
  if (*(ulonglong *)(param_1 + 0x60) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x58);
    do {
      if (*plVar1 == param_2) {
        FUN_1435bc990(param_2);
        FUN_143612470(param_1 + 0x58,uVar2);
        break;
      }
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 1;
    } while (uVar2 < *(ulonglong *)(param_1 + 0x60));
  }
  if (((param_1 & 1) == 0) && ((*(uint *)(param_1 + 8) & 0x3fffff) != 0)) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) - 1;
    FUN_1434ef880(param_1);
    return;
  }
  return;
}


