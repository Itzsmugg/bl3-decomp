// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1438a0230 FUN_1438a0230 body=524 status=ok
// SIG undefined FUN_1438a0230(void)

undefined8 * FUN_1438a0230(undefined8 *param_1,longlong param_2)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  undefined2 uVar6;
  undefined1 local_res8 [8];
  
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar1,"TthkaiWorldProcessingTasks::makeMainPhaseTaskGraph");
  }
  pvVar2 = TlsGetValue(DAT_146b7bf70);
  if (pvVar2 == (LPVOID)0x0) {
    pvVar2 = DAT_146b7bf68;
  }
  puVar3 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar2 + 0x58),0x208);
  puVar5 = (undefined8 *)0x0;
  uVar6 = 0xffff;
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = 0;
    *(undefined2 *)(puVar3 + 2) = 0xffff;
    *(undefined2 *)((longlong)puVar3 + 0x12) = 1;
    *puVar3 = hkTaskGraph::vftable;
    puVar3[3] = puVar3 + 5;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x24) = 0x80000010;
    puVar3[0x35] = puVar3 + 0x37;
    *(undefined4 *)(puVar3 + 0x36) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x1b4) = 0x80000010;
    puVar3[0x3f] = 0;
    *(undefined4 *)(puVar3 + 0x40) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x204) = 0x80000000;
    puVar5 = puVar3;
  }
  *param_1 = puVar5;
  if (*(char *)(param_2 + 0x28) != '\0') {
    thunk_FUN_143719c70(0xb289c3cd);
    puVar4 = (undefined2 *)FUN_1438be090(local_res8,*param_1,*(undefined8 *)(param_2 + 0x70),0xffff)
    ;
    uVar6 = *puVar4;
    thunk_FUN_143719c70(0xd07b477f);
    if (*(char *)(param_2 + 0x90) == '\0') {
      thunk_FUN_143719c70(0x4816ae3c);
      puVar4 = (undefined2 *)
               FUN_1438bdbb0(local_res8,*param_1,*(undefined8 *)(param_2 + 0x70),uVar6);
      uVar6 = *puVar4;
      thunk_FUN_143719c70(0x7e7f2668);
    }
  }
  if (*(char *)(param_2 + 0x4c) != '\0') {
    thunk_FUN_143719c70(0x3428a163);
    puVar4 = (undefined2 *)FUN_1438c4b80(local_res8,*param_1,*(undefined8 *)(param_2 + 0x78),uVar6);
    uVar6 = *puVar4;
    thunk_FUN_143719c70(0xda99b7f4);
  }
  if (*(char *)(param_2 + 0x54) != '\0') {
    thunk_FUN_143719c70(0x20aaabff);
    puVar4 = (undefined2 *)FUN_1438c2470(local_res8,*param_1,*(undefined8 *)(param_2 + 0x80),uVar6);
    uVar6 = *puVar4;
    thunk_FUN_143719c70(0x8226ccdb);
  }
  if (*(char *)(param_2 + 100) != '\0') {
    thunk_FUN_143719c70(0x84d4d86);
    FUN_1438c3a10(local_res8,*param_1,*(undefined8 *)(param_2 + 0x88),uVar6);
    thunk_FUN_143719c70(0xcf046760);
  }
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d750(pvVar1,&DAT_145b8eda0);
  }
  return param_1;
}



// FUNCTION 1438a0440 FUN_1438a0440 body=173 status=ok
// SIG undefined FUN_1438a0440(void)

undefined8 * FUN_1438a0440(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  LPVOID pvVar2;
  
  pvVar2 = TlsGetValue(DAT_146b8198c);
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar2,"TthkaiWorldProcessingTasks::makeNextTaskGraph");
  }
  iVar1 = *(int *)(param_2 + 0x94);
  *(int *)(param_2 + 0x94) = iVar1 + 1;
  if (iVar1 == 0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      FUN_1438a04f0(param_1,param_2);
      goto LAB_1438a04c6;
    }
  }
  else {
    if (iVar1 != 1) {
      *param_1 = 0;
      goto LAB_1438a04c6;
    }
    if (*(char *)(param_2 + 0x28) == '\0') {
      *param_1 = 0;
      goto LAB_1438a04c6;
    }
  }
  FUN_1438a0230(param_1,param_2);
LAB_1438a04c6:
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d750(pvVar2,&DAT_145b8eda0);
  }
  return param_1;
}



// FUNCTION 1438a04f0 FUN_1438a04f0 body=309 status=ok
// SIG undefined FUN_1438a04f0(void)

undefined8 * FUN_1438a04f0(undefined8 *param_1,longlong param_2)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar1,"TthkaiWorldProcessingTasks::makePreCuttingTaskGraph");
  }
  pvVar2 = TlsGetValue(DAT_146b7bf70);
  if (pvVar2 == (LPVOID)0x0) {
    pvVar2 = DAT_146b7bf68;
  }
  puVar3 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar2 + 0x58),0x208);
  puVar4 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = 0;
    *(undefined2 *)(puVar3 + 2) = 0xffff;
    *(undefined2 *)((longlong)puVar3 + 0x12) = 1;
    *puVar3 = hkTaskGraph::vftable;
    puVar3[3] = puVar3 + 5;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x24) = 0x80000010;
    puVar3[0x35] = puVar3 + 0x37;
    *(undefined4 *)(puVar3 + 0x36) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x1b4) = 0x80000010;
    puVar3[0x3f] = 0;
    *(undefined4 *)(puVar3 + 0x40) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x204) = 0x80000000;
    puVar4 = puVar3;
  }
  *param_1 = puVar4;
  thunk_FUN_143719c70(0x9721ebcc);
  FUN_1438bde30(local_res8,*param_1,*(undefined8 *)(param_2 + 0x70),0xffff);
  thunk_FUN_143719c70(0xc3cdd67d);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d750(pvVar1,&DAT_145b8eda0);
  }
  return param_1;
}



// FUNCTION 1438a0630 FUN_1438a0630 body=276 status=ok
// SIG undefined FUN_1438a0630(void)

void FUN_1438a0630(longlong param_1)

{
  longlong lVar1;
  LPVOID pvVar2;
  undefined8 uVar3;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined4 local_48;
  uint local_44;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_18;
  
  pvVar2 = TlsGetValue(DAT_146b8198c);
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar2,"TtFireProcessingRunCommitted");
  }
  FUN_14382bbe0(local_58);
  lVar1 = *(longlong *)(param_1 + 0x10);
  local_58[0] = *(undefined1 *)(lVar1 + 0x28);
  FUN_143802ce0(&local_50,lVar1 + 0x30);
  local_38 = *(undefined4 *)(lVar1 + 0x48);
  local_34 = *(undefined1 *)(lVar1 + 0x4c);
  local_30 = *(undefined4 *)(lVar1 + 0x50);
  local_2c = *(undefined1 *)(lVar1 + 0x54);
  local_28 = *(undefined4 *)(lVar1 + 0x58);
  local_24 = *(undefined4 *)(lVar1 + 0x5c);
  local_20 = *(undefined4 *)(lVar1 + 0x60);
  local_1c = *(undefined1 *)(lVar1 + 100);
  local_18 = *(undefined4 *)(lVar1 + 0x68);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18);
  FUN_1438484d0(lVar1 + 0xf0,lVar1,local_58);
  uVar3 = FUN_143703a50();
  local_48 = 0;
  if (-1 < (int)local_44) {
    FUN_143702e10(uVar3,local_50,4,local_44 & 0x3fffffff);
  }
  local_50 = 0;
  local_44 = 0x80000000;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d750(pvVar2,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438a0750 FUN_1438a0750 body=129 status=ok
// SIG undefined FUN_1438a0750(void)

void FUN_1438a0750(longlong param_1)

{
  longlong lVar1;
  LPVOID pvVar2;
  
  pvVar2 = TlsGetValue(DAT_146b8198c);
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar2,"TtJoinPathRequestManager");
  }
  FUN_143877510(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + 0x270),
                *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(lVar1 + 0x20) != 0) {
    FUN_14370c150();
  }
  *(undefined8 *)(lVar1 + 0x20) = 0;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d750(pvVar2,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438a07e0 FUN_1438a07e0 body=12 status=ok
// SIG undefined FUN_1438a07e0(void)

void FUN_1438a07e0(longlong param_1)

{
  FUN_143876ec0(*(undefined8 *)(param_1 + 0x270));
  return;
}



// FUNCTION 1438a07f0 FUN_1438a07f0 body=12 status=ok
// SIG undefined FUN_1438a07f0(void)

void FUN_1438a07f0(longlong param_1)

{
  FUN_143876f40(*(undefined8 *)(param_1 + 0x270));
  return;
}



// FUNCTION 1438a0800 FUN_1438a0800 body=12 status=ok
// SIG undefined FUN_1438a0800(void)

void FUN_1438a0800(longlong param_1)

{
  FUN_1438771d0(*(undefined8 *)(param_1 + 0x270));
  return;
}



// FUNCTION 1438a0810 FUN_1438a0810 body=12 status=ok
// SIG undefined FUN_1438a0810(void)

void FUN_1438a0810(longlong param_1)

{
  FUN_1438772d0(*(undefined8 *)(param_1 + 0x270));
  return;
}



// FUNCTION 1438a0820 FUN_1438a0820 body=12 status=ok
// SIG undefined FUN_1438a0820(void)

void FUN_1438a0820(longlong param_1)

{
  FUN_143877fb0(*(undefined8 *)(param_1 + 0x270));
  return;
}



// FUNCTION 1438a0830 FUN_1438a0830 body=12 status=ok
// SIG undefined FUN_1438a0830(void)

void FUN_1438a0830(longlong param_1)

{
  FUN_143878000(*(undefined8 *)(param_1 + 0x270));
  return;
}



// FUNCTION 1438a0840 FUN_1438a0840 body=29 status=ok
// SIG undefined FUN_1438a0840(void)

void FUN_1438a0840(longlong param_1)

{
  FUN_143878050(*(undefined8 *)(param_1 + 0x270));
  return;
}



// FUNCTION 1438a0860 FUN_1438a0860 body=29 status=ok
// SIG undefined FUN_1438a0860(void)

void FUN_1438a0860(longlong param_1)

{
  FUN_1438780c0(*(undefined8 *)(param_1 + 0x270));
  return;
}



// FUNCTION 1438a0880 FUN_1438a0880 body=47 status=ok
// SIG undefined FUN_1438a0880(void)

undefined8 * FUN_1438a0880(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = 0;
  *param_1 = hkaiNavigatorManager::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = param_2;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  return param_1;
}



// FUNCTION 1438a08b0 FUN_1438a08b0 body=95 status=ok
// SIG undefined FUN_1438a08b0(void)

void FUN_1438a08b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_2 + 0x1fc) = *(undefined4 *)(param_1 + 0x28);
  uVar2 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x28) == (*(uint *)(param_1 + 0x2c) & 0x3fffffff)) {
    FUN_14370c460(uVar2,(longlong *)(param_1 + 0x20),8);
  }
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_1 + 0x28) * 8);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = param_2;
  }
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return;
}



// FUNCTION 1438a0910 FUN_1438a0910 body=68 status=ok
// SIG undefined FUN_1438a0910(void)

void FUN_1438a0910(longlong param_1,longlong param_2)

{
  int iVar1;
  
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)(*(int *)(param_1 + 0x28) + -1) * 8) +
   0x1fc) = *(undefined4 *)(param_2 + 0x1fc);
  iVar1 = *(int *)(param_2 + 0x1fc);
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
  if (*(int *)(param_1 + 0x28) != iVar1) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 8) =
         *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_1 + 0x28) * 8);
  }
  return;
}



// FUNCTION 1438a0960 FUN_1438a0960 body=67 status=ok
// SIG undefined FUN_1438a0960(void)

void FUN_1438a0960(undefined8 *param_1,longlong param_2)

{
  param_1[0xd] = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = *(undefined8 *)(param_2 + 0xa0);
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x82) = 1;
  return;
}



// FUNCTION 1438a09b0 FUN_1438a09b0 body=79 status=ok
// SIG undefined FUN_1438a09b0(void)

void FUN_1438a09b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_1438a0960();
  uVar1 = param_4[1];
  *param_1 = *param_4;
  param_1[1] = uVar1;
  uVar1 = param_4[3];
  param_1[2] = param_4[2];
  param_1[3] = uVar1;
  uVar1 = param_4[7];
  param_1[4] = param_4[6];
  param_1[5] = uVar1;
  uVar1 = param_4[4];
  uVar2 = param_4[5];
  param_1[0xe] = param_3;
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  return;
}



// FUNCTION 1438a0a00 FUN_1438a0a00 body=23 status=ok
// SIG undefined FUN_1438a0a00(void)

void FUN_1438a0a00(longlong param_1)

{
  if ((*(char *)(param_1 + 0x82) != '\0') && (*(longlong *)(param_1 + 0x70) != 0)) {
    return;
  }
  return;
}



// FUNCTION 1438a0a20 FUN_1438a0a20 body=572 status=ok
// SIG undefined FUN_1438a0a20(void)

void FUN_1438a0a20(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  LPVOID pvVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 local_res8 [8];
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar8;
  float local_88;
  undefined4 local_84;
  longlong local_80;
  int local_78;
  uint local_74;
  longlong local_70;
  int local_68;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  lVar2 = *(longlong *)(param_1 + 0xa0);
  local_48 = *(float *)(param_1 + 0x20);
  iVar5 = 0;
  local_58 = local_48 + *(float *)(lVar2 + 0x40);
  fStack_54 = *(float *)(param_1 + 0x24) + *(float *)(lVar2 + 0x44);
  fStack_50 = *(float *)(param_1 + 0x28) + *(float *)(lVar2 + 0x48);
  fStack_4c = *(float *)(param_1 + 0x2c) + *(float *)(lVar2 + 0x4c);
  local_48 = local_48 + *(float *)(lVar2 + 0x50);
  fStack_44 = *(float *)(param_1 + 0x24) + *(float *)(lVar2 + 0x54);
  fStack_40 = *(float *)(param_1 + 0x28) + *(float *)(lVar2 + 0x58);
  fStack_3c = *(float *)(param_1 + 0x2c) + *(float *)(lVar2 + 0x5c);
  local_80 = 0;
  local_78 = 0;
  local_74 = 0x80000000;
  local_68 = 0x20;
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  local_70 = *(longlong *)((longlong)pvVar3 + 0x18);
  if ((*(int *)((longlong)pvVar3 + 0x10) < 0x200) ||
     (*(ulonglong *)((longlong)pvVar3 + 0x20) < local_70 + 0x200U)) {
    local_70 = FUN_1437138c0(pvVar3,0x200);
  }
  else {
    *(ulonglong *)((longlong)pvVar3 + 0x18) = local_70 + 0x200U;
  }
  local_84 = *(undefined4 *)(param_1 + 0x98);
  local_88 = *(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x68);
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  local_74 = 0x80000020;
  cVar1 = *(char *)(*(longlong *)(param_1 + 0xa0) + 0x3c);
  local_80 = local_70;
  FUN_14383f5e0(param_2,local_res8,*(undefined4 *)(param_1 + 200),uVar4,CONCAT44(uVar8,local_84));
  FUN_143853700(param_2,param_3,&local_58,&local_88,uVar4,cVar1 == '\x01',(float *)(param_1 + 0x20),
                param_1 + 0x50,&local_80);
  iVar7 = iVar5;
  if (0 < local_78 / 2) {
    do {
      FUN_1438a2750(param_4,(longlong)iVar5 * 0x10 + local_80,
                    (longlong)(iVar5 + 1) * 0x10 + local_80);
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 2;
    } while (iVar7 < local_78 / 2);
  }
  iVar5 = local_68;
  lVar2 = local_70;
  if (local_70 == local_80) {
    local_78 = 0;
  }
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  uVar6 = iVar5 * 0x10 + 0x7fU & 0xffffff80;
  if (((*(int *)((longlong)pvVar3 + 0x10) < (int)uVar6) ||
      ((int)uVar6 + lVar2 != *(longlong *)((longlong)pvVar3 + 0x18))) ||
     (*(longlong *)((longlong)pvVar3 + 0x28) == lVar2)) {
    FUN_143713ff0(pvVar3,lVar2);
  }
  else {
    *(longlong *)((longlong)pvVar3 + 0x18) = lVar2;
  }
  uVar4 = FUN_143703a50();
  local_78 = 0;
  if (-1 < (int)local_74) {
    FUN_143702e10(uVar4,local_80,0x10,local_74 & 0x3fffffff);
  }
  return;
}



// FUNCTION 1438a0c60 FUN_1438a0c60 body=132 status=ok
// SIG undefined FUN_1438a0c60(void)

void FUN_1438a0c60(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  lVar2 = *(longlong *)(param_1 + 0xa0);
  iVar1 = 0;
  local_18 = *(float *)(param_1 + 0x20) + *(float *)(lVar2 + 0x50);
  fStack_14 = *(float *)(param_1 + 0x24) + *(float *)(lVar2 + 0x54);
  fStack_10 = *(float *)(param_1 + 0x28) + *(float *)(lVar2 + 0x58);
  fStack_c = *(float *)(param_1 + 0x2c) + *(float *)(lVar2 + 0x5c);
  local_28 = *(float *)(param_1 + 0x20) + *(float *)(lVar2 + 0x40);
  fStack_24 = *(float *)(param_1 + 0x24) + *(float *)(lVar2 + 0x44);
  fStack_20 = *(float *)(param_1 + 0x28) + *(float *)(lVar2 + 0x48);
  fStack_1c = *(float *)(param_1 + 0x2c) + *(float *)(lVar2 + 0x4c);
  if (0 < (int)param_2[1]) {
    lVar2 = 0;
    do {
      FUN_14387b500(*(undefined8 *)(*param_2 + lVar2),&local_28,param_3);
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 8;
    } while (iVar1 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 1438a0cf0 FUN_1438a0cf0 body=1499 status=ok
// SIG undefined FUN_1438a0cf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438a0cf0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7,char param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar14;
  float fVar18;
  undefined1 in_XMM2 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar19;
  float fVar20;
  undefined1 in_XMM4 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float local_res10;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined1 local_c8 [8];
  float fStack_c0;
  float fStack_bc;
  undefined1 local_b8 [144];
  
  if (*(char *)(param_2 + 8) != '\0') {
    if (*(char *)(param_2 + 8) == '\x02') {
      fVar7 = *param_3;
      fVar11 = param_3[1];
      fVar13 = param_3[2];
      fVar27 = param_3[3];
      fVar28 = param_6[3];
      fVar6 = *param_4 * fVar7;
      fVar10 = param_4[1] * fVar11;
      fVar12 = param_4[2] * fVar13;
      fVar38 = *param_4 - (fVar10 + fVar6 + fVar12) * fVar7;
      fVar39 = param_4[1] - (fVar10 + fVar6 + fVar12) * fVar11;
      fVar40 = param_4[2] - (fVar10 + fVar6 + fVar12) * fVar13;
      fVar41 = param_4[3] - (fVar10 + fVar6 + fVar12) * fVar27;
      fVar14 = fVar7 * *param_6;
      fVar18 = fVar11 * param_6[1];
      auVar15._8_4_ = fVar13 * param_6[2];
      fVar6 = fVar38 * fVar38;
      fVar10 = fVar39 * fVar39;
      fVar12 = fVar40 * fVar40;
      auVar22._0_4_ = fVar10 + fVar6 + fVar12;
      auVar22._4_4_ = fVar10 + fVar6 + fVar12;
      auVar22._8_4_ = fVar10 + fVar6 + fVar12;
      auVar22._12_4_ = fVar10 + fVar6 + fVar12;
      auVar15._4_4_ = auVar15._8_4_;
      auVar15._0_4_ = auVar15._8_4_;
      auVar15._12_4_ = auVar15._8_4_;
      auVar21 = rsqrtps(in_XMM4,auVar22);
      fVar12 = auVar21._0_4_;
      fVar19 = auVar21._4_4_;
      fVar20 = auVar21._8_4_;
      fVar35 = (*param_6 - (fVar18 + fVar14 + auVar15._8_4_) * fVar7) - fVar38;
      fVar36 = (param_6[1] - (fVar18 + fVar14 + auVar15._8_4_) * fVar11) - fVar39;
      fVar37 = (param_6[2] - (fVar18 + fVar14 + auVar15._8_4_) * fVar13) - fVar40;
      fVar7 = fVar35 * fVar35;
      fVar11 = fVar36 * fVar36;
      fVar13 = fVar37 * fVar37;
      fVar24 = fVar11 + fVar7 + fVar13;
      fVar25 = fVar11 + fVar7 + fVar13;
      fVar26 = fVar11 + fVar7 + fVar13;
      fVar13 = fVar11 + fVar7 + fVar13;
      auVar3._4_4_ = fVar25;
      auVar3._0_4_ = fVar24;
      auVar3._8_4_ = fVar26;
      auVar3._12_4_ = fVar13;
      auVar21 = rsqrtps(auVar15,auVar3);
      fVar7 = auVar21._0_4_;
      fVar11 = auVar21._4_4_;
      fVar6 = auVar21._8_4_;
      fVar10 = auVar21._12_4_;
      fVar29 = (float)(~-(uint)(fVar24 <= 0.0) &
                      (uint)((3.0 - fVar24 * fVar7 * fVar7) * fVar7 * 0.5));
      fVar32 = (float)(~-(uint)(fVar25 <= 0.0) &
                      (uint)((3.0 - fVar25 * fVar11 * fVar11) * fVar11 * 0.5));
      fVar33 = (float)(~-(uint)(fVar26 <= 0.0) &
                      (uint)((3.0 - fVar26 * fVar6 * fVar6) * fVar6 * 0.5));
      fVar34 = (float)(~-(uint)(fVar13 <= 0.0) &
                      (uint)((3.0 - fVar13 * fVar10 * fVar10) * fVar10 * 0.5));
      fVar35 = fVar35 * fVar29;
      fVar36 = fVar36 * fVar32;
      fVar37 = fVar37 * fVar33;
      fVar7 = param_2[2];
      fVar11 = param_2[3];
      fVar6 = (float)(~-(uint)(auVar22._0_4_ <= 0.0) &
                     (uint)((3.0 - auVar22._0_4_ * fVar12 * fVar12) * fVar12 * 0.5)) * fVar38 *
              fVar35;
      fVar10 = (float)(~-(uint)(auVar22._4_4_ <= 0.0) &
                      (uint)((3.0 - auVar22._4_4_ * fVar19 * fVar19) * fVar19 * 0.5)) * fVar39 *
               fVar36;
      fVar12 = (float)(~-(uint)(auVar22._8_4_ <= 0.0) &
                      (uint)((3.0 - auVar22._8_4_ * fVar20 * fVar20) * fVar20 * 0.5)) * fVar40 *
               fVar37;
      auVar16._0_4_ = DAT_1467f06f0 - _DAT_1467f06d0;
      auVar16._4_4_ = fRam00000001467f06f4 - fRam00000001467f06d4;
      auVar16._8_4_ = fRam00000001467f06f8 - fRam00000001467f06d8;
      auVar16._12_4_ = fRam00000001467f06fc - fRam00000001467f06dc;
      auVar30._0_4_ = fVar29 * fVar24;
      auVar30._4_4_ = fVar32 * fVar25;
      auVar30._8_4_ = fVar33 * fVar26;
      auVar30._12_4_ = fVar34 * fVar13;
      auVar23._0_4_ = fVar7 - fVar11;
      auVar23._4_4_ = fVar7 - fVar11;
      auVar23._8_4_ = fVar7 - fVar11;
      auVar23._12_4_ = fVar7 - fVar11;
      auVar21 = divps(auVar23,auVar16);
      auVar1._4_4_ = (((fVar10 + fVar6 + fVar12) - fRam00000001467f06d4) *
                      (float)(~-(uint)(auVar16._4_4_ == 0.0) & auVar21._4_4_) + fVar11) * param_1[1]
      ;
      auVar1._0_4_ = (((fVar10 + fVar6 + fVar12) - _DAT_1467f06d0) *
                      (float)(~-(uint)(auVar16._0_4_ == 0.0) & auVar21._0_4_) + fVar11) * *param_1;
      auVar1._8_4_ = (((fVar10 + fVar6 + fVar12) - fRam00000001467f06d8) *
                      (float)(~-(uint)(auVar16._8_4_ == 0.0) & auVar21._8_4_) + fVar11) * param_1[2]
      ;
      auVar1._12_4_ =
           (((fVar10 + fVar6 + fVar12) - fRam00000001467f06dc) *
            (float)(~-(uint)(auVar16._12_4_ == 0.0) & auVar21._12_4_) + fVar11) * param_1[3];
      auVar31 = minps(auVar30,auVar1);
      fVar38 = auVar31._0_4_ * fVar35 + fVar38;
      fVar39 = auVar31._4_4_ * fVar36 + fVar39;
      fVar40 = auVar31._8_4_ * fVar37 + fVar40;
      fVar7 = fVar38 * fVar38;
      fVar11 = fVar39 * fVar39;
      auVar8._8_4_ = fVar40 * fVar40;
      auVar8._4_4_ = auVar8._8_4_;
      auVar8._0_4_ = auVar8._8_4_;
      auVar8._12_4_ = auVar8._8_4_;
      fVar12 = fVar11 + fVar7 + auVar8._8_4_;
      fVar19 = fVar11 + fVar7 + auVar8._8_4_;
      fVar20 = fVar11 + fVar7 + auVar8._8_4_;
      fVar24 = fVar11 + fVar7 + auVar8._8_4_;
      auVar2._4_4_ = fVar19;
      auVar2._0_4_ = fVar12;
      auVar2._8_4_ = fVar20;
      auVar2._12_4_ = fVar24;
      auVar21 = rsqrtps(auVar8,auVar2);
      fVar11 = auVar21._0_4_;
      fVar13 = auVar21._4_4_;
      fVar6 = auVar21._8_4_;
      fVar10 = auVar21._12_4_;
      fVar7 = param_2[1];
      auVar9._4_4_ = fVar7;
      auVar9._0_4_ = fVar7;
      auVar9._8_4_ = fVar7;
      auVar9._12_4_ = fVar7;
      fVar7 = (float)(~-(uint)(fVar12 <= 0.0) &
                     (uint)((3.0 - fVar12 * fVar11 * fVar11) * fVar11 * 0.5));
      fVar11 = (float)(~-(uint)(fVar19 <= 0.0) &
                      (uint)((3.0 - fVar19 * fVar13 * fVar13) * fVar13 * 0.5));
      fVar13 = (float)(~-(uint)(fVar20 <= 0.0) &
                      (uint)((3.0 - fVar20 * fVar6 * fVar6) * fVar6 * 0.5));
      fVar6 = (float)(~-(uint)(fVar24 <= 0.0) &
                     (uint)((3.0 - fVar24 * fVar10 * fVar10) * fVar10 * 0.5));
      auVar5._0_4_ = fVar7 * fVar12;
      auVar5._4_4_ = fVar11 * fVar19;
      auVar5._8_4_ = fVar13 * fVar20;
      auVar5._12_4_ = fVar6 * fVar24;
      auVar21 = minps(auVar5,auVar9);
      *param_7 = auVar21._0_4_ * fVar7 * fVar38;
      param_7[1] = auVar21._4_4_ * fVar11 * fVar39;
      param_7[2] = auVar21._8_4_ * fVar13 * fVar40;
      param_7[3] = auVar21._12_4_ *
                   fVar6 * (auVar31._12_4_ *
                            ((fVar28 - (fVar18 + fVar14 + auVar15._8_4_) * fVar27) - fVar41) *
                            fVar34 + fVar41);
    }
    else {
      fVar11 = *param_6;
      fVar13 = param_6[1];
      fVar27 = param_6[2];
      fVar28 = param_6[3];
      fVar7 = fVar11 * fVar11;
      fVar6 = fVar13 * fVar13;
      fVar10 = fVar27 * fVar27;
      fVar12 = fVar6 + fVar7 + fVar10;
      auVar21._4_4_ = fVar6 + fVar7 + fVar10;
      auVar21._0_4_ = fVar12;
      auVar21._8_4_ = fVar6 + fVar7 + fVar10;
      auVar21._12_4_ = fVar6 + fVar7 + fVar10;
      auVar21 = rsqrtps(in_XMM2,auVar21);
      fVar7 = auVar21._0_4_;
      fVar7 = (float)(~-(uint)(fVar12 <= 0.0) &
                     (uint)((3.0 - fVar12 * fVar7 * fVar7) * fVar7 * 0.5 * fVar12));
      if (fVar7 <= 0.001) {
        *param_7 = fVar11;
        param_7[1] = fVar13;
        param_7[2] = fVar27;
        param_7[3] = fVar28;
      }
      else {
        fVar18 = 1.0 / fVar7;
        fVar6 = *param_4 * *param_4;
        fVar10 = param_4[1] * param_4[1];
        auVar31._8_4_ = param_4[2] * param_4[2];
        fVar11 = fVar18 * fVar11;
        fVar13 = fVar18 * fVar13;
        fVar27 = fVar18 * fVar27;
        auVar31._4_4_ = auVar31._8_4_;
        auVar31._0_4_ = auVar31._8_4_;
        auVar31._12_4_ = auVar31._8_4_;
        auVar17._0_4_ = fVar10 + fVar6 + auVar31._8_4_;
        auVar17._4_4_ = fVar10 + fVar6 + auVar31._8_4_;
        auVar17._8_4_ = fVar10 + fVar6 + auVar31._8_4_;
        auVar17._12_4_ = fVar10 + fVar6 + auVar31._8_4_;
        auVar21 = rsqrtps(auVar31,auVar17);
        fVar19 = auVar21._0_4_;
        fVar6 = param_2[6];
        fVar10 = param_1[1];
        fVar12 = param_1[2];
        fVar14 = param_1[3];
        fVar20 = fVar6 * *param_1;
        fVar24 = (float)(~-(uint)(auVar17._0_4_ <= 0.0) &
                        (uint)((3.0 - auVar17._0_4_ * fVar19 * fVar19) * fVar19 * 0.5 *
                              auVar17._0_4_));
        _local_c8 = ZEXT416((uint)(fVar13 * param_5[1] + fVar11 * *param_5 + fVar27 * param_5[2]));
        fVar19 = (float)FUN_143715de0(local_c8);
        fVar28 = fVar18 * fVar28;
        if (fVar20 < 1.5707964 - fVar19) {
          if (0.0 <= (*param_5 * param_3[2] - *param_3 * param_5[2]) * fVar13 +
                     (param_5[2] * param_3[1] - param_3[2] * param_5[1]) * fVar11 +
                     (param_5[1] * *param_3 - param_3[1] * *param_5) * fVar27) {
            local_c8._4_4_ = fVar6 * fVar10;
            local_c8._0_4_ = fVar20;
            fStack_c0 = fVar6 * fVar12;
            fStack_bc = fVar6 * fVar14;
          }
          else {
            local_c8._4_4_ = 0.0 - fVar6 * fVar10;
            local_c8._0_4_ = 0.0 - fVar20;
            fStack_c0 = 0.0 - fVar6 * fVar12;
            fStack_bc = 0.0 - fVar6 * fVar14;
          }
          FUN_14375e8d0(local_b8,param_3,local_c8);
          FUN_143713650(&local_d8,local_b8,param_5);
          fVar6 = (float)FUN_1438a1e70(&local_d8,param_4,param_6,param_3);
          fVar11 = local_d8;
          fVar13 = fStack_d4;
          fVar27 = fStack_d0;
          fVar28 = fStack_cc;
          if (fVar6 < 3.40282e+38) {
            if (*(char *)(param_2 + 8) == '\x01') {
              local_res10 = param_2[7];
            }
            else {
              local_res10 = param_2[1];
            }
            if (local_res10 <= fVar7) {
              fVar7 = local_res10;
            }
            local_res10 = fVar7;
            if (param_8 == '\0') {
              local_res10 = *param_2;
            }
            if (fVar6 <= local_res10) {
              fVar6 = local_res10;
            }
            fVar7 = fVar6;
            if (param_2[1] <= fVar6) {
              fVar7 = param_2[1];
            }
          }
        }
        fVar7 = fVar7 - fVar24;
        fVar6 = *param_1 * param_2[2];
        fVar10 = -(*param_1 * param_2[3]);
        if (fVar7 <= fVar10) {
          fVar7 = fVar10;
        }
        if (fVar6 <= fVar7) {
          fVar7 = fVar6;
        }
        fVar7 = fVar7 + fVar24;
        if (fVar7 <= *param_2) {
          fVar7 = *param_2;
        }
        if (param_2[1] <= fVar7) {
          fVar7 = param_2[1];
        }
        *param_7 = fVar7 * fVar11;
        param_7[1] = fVar7 * fVar13;
        param_7[2] = fVar7 * fVar27;
        param_7[3] = fVar7 * fVar28;
      }
    }
    return;
  }
  uVar4 = *(undefined8 *)(param_6 + 2);
  *(undefined8 *)param_7 = *(undefined8 *)param_6;
  *(undefined8 *)(param_7 + 2) = uVar4;
  return;
}



// FUNCTION 1438a12d0 FUN_1438a12d0 body=1114 status=ok
// SIG undefined FUN_1438a12d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438a12d0(undefined8 param_1,float *param_2,float *param_3,float *param_4,longlong param_5,
                  undefined1 (*param_6) [16],undefined1 (*param_7) [16],float *param_8)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 extraout_XMM0_Qb;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar21;
  float fVar22;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar23;
  undefined1 auVar20 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
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
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [8];
  float fStack_80;
  float fStack_7c;
  
  fVar15 = *param_4;
  fVar7 = param_4[1];
  fVar23 = param_4[2];
  fVar16 = param_4[3];
  fVar12 = fVar15 * *param_2;
  fVar21 = fVar7 * param_2[1];
  fVar22 = fVar23 * param_2[2];
  fVar33 = *param_2 - (fVar21 + fVar12 + fVar22) * fVar15;
  fVar34 = param_2[1] - (fVar21 + fVar12 + fVar22) * fVar7;
  fVar35 = param_2[2] - (fVar21 + fVar12 + fVar22) * fVar23;
  fVar12 = param_2[3] - (fVar21 + fVar12 + fVar22) * fVar16;
  auVar18._4_4_ = -(uint)(ABS(fVar34) <= fRam00000001467f08f4);
  auVar18._0_4_ = -(uint)(ABS(fVar33) <= _DAT_1467f08f0);
  auVar18._8_4_ = -(uint)(ABS(fVar35) <= fRam00000001467f08f8);
  auVar18._12_4_ = -(uint)(ABS(fVar12) <= fRam00000001467f08fc);
  uVar2 = movmskps((int)&stack0x00000000,auVar18);
  if (((byte)uVar2 & 7) == 7) {
    *(undefined8 *)*param_7 = 0;
    *(undefined8 *)(*param_7 + 8) = 0;
    uVar8 = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)param_8 = *(undefined8 *)param_3;
    *(undefined8 *)(param_8 + 2) = uVar8;
  }
  else {
    auVar18 = *param_6;
    fVar21 = auVar18._0_4_;
    auVar9 = divps(_DAT_1467f06f0,auVar18);
    fVar22 = (float)(~-(uint)(fVar21 == 0.0) & auVar9._0_4_);
    fVar36 = (float)(~-(uint)(auVar18._4_4_ == 0.0) & auVar9._4_4_);
    fVar37 = (float)(~-(uint)(auVar18._8_4_ == 0.0) & auVar9._8_4_);
    fVar38 = (float)(~-(uint)(auVar18._12_4_ == 0.0) & auVar9._12_4_);
    if (*(char *)(param_5 + 0x20) == '\x01') {
      fVar12 = *param_3;
      fVar21 = param_3[1];
      fVar13 = param_3[2];
      fVar14 = param_3[3];
      fVar30 = fVar21 * fVar15 - fVar7 * fVar12;
      fVar31 = fVar13 * fVar7 - fVar23 * fVar21;
      fVar32 = fVar12 * fVar23 - fVar15 * fVar13;
      fVar7 = _guard_xfg_dispatch_icall_nop
                        (fVar32 * fVar34 + fVar31 * fVar33 + fVar30 * fVar35,
                         fVar21 * fVar34 + fVar12 * fVar33 + fVar13 * fVar35);
      fVar15 = *(float *)(param_5 + 0x18);
      fVar22 = fVar7 * fVar22;
      fVar36 = fVar7 * fVar36;
      fVar37 = fVar7 * fVar37;
      fVar7 = fVar7 * fVar38;
      auVar17._0_4_ = 0.0 - fVar15;
      auVar17._4_4_ = 0.0 - fVar15;
      auVar17._8_4_ = 0.0 - fVar15;
      auVar17._12_4_ = 0.0 - fVar15;
      uVar3 = -(uint)(fVar22 < fVar15);
      uVar4 = -(uint)(fVar36 < fVar15);
      uVar5 = -(uint)(fVar37 < fVar15);
      uVar6 = -(uint)(fVar7 < fVar15);
      auVar10._0_4_ = uVar3 & (uint)fVar22;
      auVar10._4_4_ = uVar4 & (uint)fVar36;
      auVar10._8_4_ = uVar5 & (uint)fVar37;
      auVar10._12_4_ = uVar6 & (uint)fVar7;
      auVar24._0_4_ = ~uVar3 & (uint)fVar15;
      auVar24._4_4_ = ~uVar4 & (uint)fVar15;
      auVar24._8_4_ = ~uVar5 & (uint)fVar15;
      auVar24._12_4_ = ~uVar6 & (uint)fVar15;
      auVar18 = maxps(auVar17,auVar24 | auVar10);
      *param_7 = auVar18;
      local_98 = auVar18._0_4_ * *(float *)*param_6;
      fStack_94 = auVar18._4_4_ * *(float *)(*param_6 + 4);
      fStack_90 = auVar18._8_4_ * *(float *)(*param_6 + 8);
      fStack_8c = auVar18._12_4_ * *(float *)(*param_6 + 0xc);
      FUN_143716280(&local_98,&local_a8,local_88);
      fVar15 = param_3[1];
      fVar7 = param_3[2];
      fVar23 = param_3[3];
      *param_8 = local_a8 * fVar31 + *param_3 * (float)local_88._0_4_;
      param_8[1] = fStack_a4 * fVar32 + fVar15 * (float)local_88._4_4_;
      param_8[2] = fStack_a0 * fVar30 + fVar7 * fStack_80;
      param_8[3] = fStack_9c * (fVar14 * fVar16 - fVar16 * fVar14) + fVar23 * fStack_7c;
    }
    else {
      fVar13 = *param_3 * fVar15;
      fVar30 = param_3[1] * fVar7;
      fVar32 = param_3[2] * fVar23;
      fVar39 = *param_3 - (fVar30 + fVar13 + fVar32) * fVar15;
      fVar40 = param_3[1] - (fVar30 + fVar13 + fVar32) * fVar7;
      fVar41 = param_3[2] - (fVar30 + fVar13 + fVar32) * fVar23;
      fVar14 = fVar39 * fVar39;
      fVar31 = fVar40 * fVar40;
      auVar19._8_4_ = fVar41 * fVar41;
      auVar19._4_4_ = auVar19._8_4_;
      auVar19._0_4_ = auVar19._8_4_;
      auVar19._12_4_ = auVar19._8_4_;
      fVar26 = fVar31 + fVar14 + auVar19._8_4_;
      fVar27 = fVar31 + fVar14 + auVar19._8_4_;
      fVar28 = fVar31 + fVar14 + auVar19._8_4_;
      fVar29 = fVar31 + fVar14 + auVar19._8_4_;
      auVar9._4_4_ = fVar27;
      auVar9._0_4_ = fVar26;
      auVar9._8_4_ = fVar28;
      auVar9._12_4_ = fVar29;
      auVar9 = rsqrtps(auVar19,auVar9);
      fVar14 = auVar9._0_4_;
      fVar31 = auVar9._4_4_;
      fVar42 = auVar9._8_4_;
      fVar43 = auVar9._12_4_;
      fVar39 = fVar39 * (float)(~-(uint)(fVar26 <= 0.0) &
                               (uint)((3.0 - fVar26 * fVar14 * fVar14) * fVar14 * 0.5));
      fVar40 = fVar40 * (float)(~-(uint)(fVar27 <= 0.0) &
                               (uint)((3.0 - fVar27 * fVar31 * fVar31) * fVar31 * 0.5));
      fVar41 = fVar41 * (float)(~-(uint)(fVar28 <= 0.0) &
                               (uint)((3.0 - fVar28 * fVar42 * fVar42) * fVar42 * 0.5));
      fVar32 = (param_3[3] - (fVar30 + fVar13 + fVar32) * fVar16) *
               (float)(~-(uint)(fVar29 <= 0.0) &
                      (uint)((3.0 - fVar29 * fVar43 * fVar43) * fVar43 * 0.5));
      fVar13 = fVar15 * fVar33;
      fVar14 = fVar7 * fVar34;
      fVar30 = fVar23 * fVar35;
      fVar42 = fVar40 * fVar15 - fVar7 * fVar39;
      fVar43 = fVar41 * fVar7 - fVar23 * fVar40;
      fVar26 = fVar39 * fVar23 - fVar15 * fVar41;
      fVar31 = (fVar33 - (fVar14 + fVar13 + fVar30) * fVar15) * fVar21 * _DAT_1467f0700 + fVar39;
      fVar34 = (fVar34 - (fVar14 + fVar13 + fVar30) * fVar7) * auVar18._4_4_ * fRam00000001467f0704
               + fVar40;
      fVar35 = (fVar35 - (fVar14 + fVar13 + fVar30) * fVar23) * auVar18._8_4_ * fRam00000001467f0708
               + fVar41;
      fVar15 = fVar31 * fVar31;
      fVar7 = fVar34 * fVar34;
      fVar23 = fVar35 * fVar35;
      auVar11._4_4_ = fVar15;
      auVar11._0_4_ = fVar15;
      auVar11._8_4_ = fVar15;
      auVar11._12_4_ = fVar15;
      auVar25._0_4_ = fVar7 + fVar15 + fVar23;
      auVar25._4_4_ = fVar7 + fVar15 + fVar23;
      auVar25._8_4_ = fVar7 + fVar15 + fVar23;
      auVar25._12_4_ = fVar7 + fVar15 + fVar23;
      auVar9 = rsqrtps(auVar11,auVar25);
      fVar15 = auVar9._0_4_;
      fVar7 = auVar9._4_4_;
      fVar23 = auVar9._8_4_;
      fVar33 = auVar9._12_4_;
      fVar31 = fVar31 * (float)(~-(uint)(auVar25._0_4_ <= 0.0) &
                               (uint)((3.0 - auVar25._0_4_ * fVar15 * fVar15) * fVar15 * 0.5));
      fVar34 = fVar34 * (float)(~-(uint)(auVar25._4_4_ <= 0.0) &
                               (uint)((3.0 - auVar25._4_4_ * fVar7 * fVar7) * fVar7 * 0.5));
      fVar35 = fVar35 * (float)(~-(uint)(auVar25._8_4_ <= 0.0) &
                               (uint)((3.0 - auVar25._8_4_ * fVar23 * fVar23) * fVar23 * 0.5));
      fVar23 = ((fVar12 - (fVar14 + fVar13 + fVar30) * fVar16) *
                auVar18._12_4_ * fRam00000001467f070c + fVar32) *
               (float)(~-(uint)(auVar25._12_4_ <= 0.0) &
                      (uint)((3.0 - auVar25._12_4_ * fVar33 * fVar33) * fVar33 * 0.5));
      fVar15 = fVar31 * fVar39;
      fVar7 = fVar34 * fVar40;
      fStack_9c = fVar35 * fVar41;
      local_a8 = fVar7 + fVar15 + fStack_9c;
      fStack_a4 = fVar7 + fVar15 + fStack_9c;
      fStack_a0 = fVar7 + fVar15 + fStack_9c;
      fStack_9c = fVar7 + fVar15 + fStack_9c;
      fVar15 = fVar31 * fVar43;
      fVar7 = fVar34 * fVar26;
      fStack_8c = fVar35 * fVar42;
      fVar21 = *(float *)(param_5 + 0x18) * fVar21;
      local_98 = fVar7 + fVar15 + fStack_8c;
      fStack_94 = fVar7 + fVar15 + fStack_8c;
      fStack_90 = fVar7 + fVar15 + fStack_8c;
      fStack_8c = fVar7 + fVar15 + fStack_8c;
      _local_88 = ZEXT416((uint)fVar21);
      fVar15 = (float)FUN_143716040(local_88);
      if ((fVar21 < _DAT_1467f09f0) && (local_a8 < fVar15)) {
        _local_88 = ZEXT416((uint)fVar21);
        local_a8 = fVar15;
        fStack_a4 = fVar15;
        fStack_a0 = fVar15;
        fStack_9c = fVar15;
        uVar3 = FUN_143716150(local_88);
        local_98 = (float)(uVar3 ^ (uint)local_98 & 0x80000000);
        fStack_94 = (float)(uVar3 ^ (uint)fStack_94 & 0x80000000);
        fStack_90 = (float)(uVar3 ^ (uint)fStack_90 & 0x80000000);
        fStack_8c = (float)(uVar3 ^ (uint)fStack_8c & 0x80000000);
        fVar31 = local_98 * fVar43 + local_a8 * fVar39;
        fVar34 = fStack_94 * fVar26 + fStack_a4 * fVar40;
        fVar35 = fStack_90 * fVar42 + fStack_a0 * fVar41;
        fVar23 = fStack_8c * (fVar32 * fVar16 - fVar16 * fVar32) + fStack_9c * fVar32;
      }
      uVar8 = FUN_143715ee0(&local_98,&local_a8);
      *(float *)*param_7 = (float)uVar8 * fVar22;
      *(float *)(*param_7 + 4) = (float)((ulonglong)uVar8 >> 0x20) * fVar36;
      *(float *)(*param_7 + 8) = (float)extraout_XMM0_Qb * fVar37;
      *(float *)(*param_7 + 0xc) = (float)((ulonglong)extraout_XMM0_Qb >> 0x20) * fVar38;
      *param_8 = fVar31;
      param_8[1] = fVar34;
      param_8[2] = fVar35;
      param_8[3] = fVar23;
    }
  }
  fVar15 = *param_8;
  fVar7 = param_8[1];
  fVar23 = param_8[2];
  fVar16 = fVar15 * fVar15;
  fVar12 = fVar7 * fVar7;
  auVar20._8_4_ = fVar23 * fVar23;
  auVar20._4_4_ = auVar20._8_4_;
  auVar20._0_4_ = auVar20._8_4_;
  auVar20._12_4_ = auVar20._8_4_;
  fVar33 = fVar12 + fVar16 + auVar20._8_4_;
  fVar34 = fVar12 + fVar16 + auVar20._8_4_;
  fVar35 = fVar12 + fVar16 + auVar20._8_4_;
  fVar36 = fVar12 + fVar16 + auVar20._8_4_;
  auVar1._4_4_ = fVar34;
  auVar1._0_4_ = fVar33;
  auVar1._8_4_ = fVar35;
  auVar1._12_4_ = fVar36;
  auVar18 = rsqrtps(auVar20,auVar1);
  fVar16 = auVar18._0_4_;
  fVar12 = auVar18._4_4_;
  fVar21 = auVar18._8_4_;
  fVar22 = auVar18._12_4_;
  *param_8 = (float)(~-(uint)(fVar33 <= 0.0) &
                    (uint)((3.0 - fVar33 * fVar16 * fVar16) * fVar16 * 0.5)) * fVar15;
  param_8[1] = (float)(~-(uint)(fVar34 <= 0.0) &
                      (uint)((3.0 - fVar34 * fVar12 * fVar12) * fVar12 * 0.5)) * fVar7;
  param_8[2] = (float)(~-(uint)(fVar35 <= 0.0) &
                      (uint)((3.0 - fVar35 * fVar21 * fVar21) * fVar21 * 0.5)) * fVar23;
  param_8[3] = (float)(~-(uint)(fVar36 <= 0.0) &
                      (uint)((3.0 - fVar36 * fVar22 * fVar22) * fVar22 * 0.5)) * param_8[3];
  return;
}



// FUNCTION 1438a1730 FUN_1438a1730 body=634 status=ok
// SIG undefined FUN_1438a1730(void)

int FUN_1438a1730(undefined4 *param_1,float *param_2,longlong param_3,float *param_4,
                 undefined8 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  LPVOID pvVar7;
  LPVOID pvVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pvVar7 = TlsGetValue(DAT_146b8198c);
  if (pvVar7 != (LPVOID)0x0) {
    FUN_14370d620(pvVar7,"LtcalcSteerVel","Stinit");
  }
  fVar12 = *(float *)(param_3 + 0x10);
  fVar13 = *(float *)(param_3 + 0x14);
  fVar14 = *(float *)(param_3 + 0x18);
  fVar1 = *(float *)(param_3 + 0x1c);
  local_68 = *(undefined4 *)(param_3 + 0x20);
  uStack_64 = *(undefined4 *)(param_3 + 0x24);
  uStack_60 = *(undefined4 *)(param_3 + 0x28);
  uStack_5c = *(undefined4 *)(param_3 + 0x2c);
  local_58 = fVar12;
  fStack_54 = fVar13;
  fStack_50 = fVar14;
  fStack_4c = fVar1;
  pvVar8 = TlsGetValue(DAT_146b8198c);
  if (pvVar8 != (LPVOID)0x0) {
    FUN_14370d800(pvVar8,"StapplyKineConst1");
  }
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  iVar6 = 0;
  fVar12 = *(float *)(param_3 + 0x90) - fVar12;
  fVar13 = *(float *)(param_3 + 0x94) - fVar13;
  fVar14 = *(float *)(param_3 + 0x98) - fVar14;
  fVar9 = fVar2 * fVar12;
  fVar10 = fVar3 * fVar13;
  fVar11 = fVar4 * fVar14;
  local_78 = fVar12 - (fVar10 + fVar9 + fVar11) * fVar2;
  fStack_74 = fVar13 - (fVar10 + fVar9 + fVar11) * fVar3;
  fStack_70 = fVar14 - (fVar10 + fVar9 + fVar11) * fVar4;
  fStack_6c = (*(float *)(param_3 + 0x9c) - fVar1) - (fVar10 + fVar9 + fVar11) * param_2[3];
  if (((*(int *)(param_3 + 0xe8) != 0) || (*(int *)(param_3 + 0x108) != 0)) ||
     (*(int *)(param_3 + 0xf8) != 0)) {
    local_38 = *param_1;
    uStack_34 = param_1[1];
    uStack_30 = param_1[2];
    uStack_2c = param_1[3];
    local_48 = fVar2;
    fStack_44 = fVar3;
    fStack_40 = fVar4;
    fStack_3c = param_2[3];
    pvVar8 = TlsGetValue(DAT_146b8198c);
    if (pvVar8 != (LPVOID)0x0) {
      FUN_14370d800(pvVar8,"StsolveSingleAgent");
    }
    iVar6 = FUN_1438c5bd0(&local_48,param_3,&local_78);
  }
  fVar12 = *(float *)(param_3 + 0x80) + local_78;
  fVar13 = *(float *)(param_3 + 0x84) + fStack_74;
  fVar14 = *(float *)(param_3 + 0x88) + fStack_70;
  fStack_7c = *(float *)(param_3 + 0x8c) + fStack_6c;
  local_88 = fVar12;
  fStack_84 = fVar13;
  fStack_80 = fVar14;
  pvVar8 = TlsGetValue(DAT_146b8198c);
  if (pvVar8 != (LPVOID)0x0) {
    FUN_14370d800(pvVar8,"StapplyKineConst2");
  }
  if ((*(char *)(*(longlong *)(param_3 + 0x30) + 0x38) == '\x01') && (iVar6 < 0)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if ((*(char *)(param_3 + 0xd0) != '\0') && (!bVar5)) {
    FUN_1438a0cf0(param_1,*(longlong *)(param_3 + 0x30) + 0x18,param_2,&local_58,&local_68,&local_88
                  ,&local_48,1);
    local_88 = local_48;
    fStack_84 = fStack_44;
    fStack_80 = fStack_40;
    fStack_7c = fStack_3c;
    fVar12 = local_48;
    fVar13 = fStack_44;
    fVar14 = fStack_40;
  }
  pvVar8 = TlsGetValue(DAT_146b8198c);
  if (pvVar8 != (LPVOID)0x0) {
    FUN_14370d800(pvVar8,"StcalcAngVel");
  }
  FUN_1438a12d0(param_3 + 0x80,&local_88,param_3 + 0x60,param_3 + 0x70,
                *(longlong *)(param_3 + 0x30) + 0x18,param_1,&local_48,param_5);
  *param_4 = fVar12;
  param_4[1] = fVar13;
  param_4[2] = fVar14;
  param_4[3] = fStack_3c;
  if (pvVar7 != (LPVOID)0x0) {
    FUN_14370d7a0(pvVar7,&DAT_145b8dd34);
  }
  return iVar6;
}



// FUNCTION 1438a19b0 FUN_1438a19b0 body=548 status=ok
// SIG undefined FUN_1438a19b0(void)

void FUN_1438a19b0(undefined8 param_1,float *param_2,undefined8 param_3,longlong param_4,
                  float *param_5,undefined8 param_6)

{
  LPVOID pvVar1;
  LPVOID pvVar2;
  float fVar3;
  float fVar6;
  float fVar7;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d620(pvVar1,"LtcalcUnsteeredVelocity","Stinit");
  }
  fVar3 = *param_2;
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = fVar3 * *(float *)(param_4 + 0x30);
  fVar10 = fVar6 * *(float *)(param_4 + 0x34);
  fVar12 = fVar7 * *(float *)(param_4 + 0x38);
  fVar9 = *(float *)(param_4 + 0x10) * fVar3;
  fVar11 = *(float *)(param_4 + 0x14) * fVar6;
  fVar13 = *(float *)(param_4 + 0x18) * fVar7;
  local_58 = (0.0 - (fVar10 + fVar8 + fVar12)) * fVar3 + *(float *)(param_4 + 0x30);
  fStack_54 = (0.0 - (fVar10 + fVar8 + fVar12)) * fVar6 + *(float *)(param_4 + 0x34);
  fStack_50 = (0.0 - (fVar10 + fVar8 + fVar12)) * fVar7 + *(float *)(param_4 + 0x38);
  fStack_4c = (0.0 - (fVar10 + fVar8 + fVar12)) * param_2[3] + *(float *)(param_4 + 0x3c);
  local_48 = (0.0 - (fVar11 + fVar9 + fVar13)) * fVar3 + *(float *)(param_4 + 0x10);
  fStack_44 = (0.0 - (fVar11 + fVar9 + fVar13)) * fVar6 + *(float *)(param_4 + 0x14);
  fStack_40 = (0.0 - (fVar11 + fVar9 + fVar13)) * fVar7 + *(float *)(param_4 + 0x18);
  fVar3 = local_48 * local_48;
  fVar6 = fStack_44 * fStack_44;
  auVar4._8_4_ = fStack_40 * fStack_40;
  auVar4._4_4_ = auVar4._8_4_;
  auVar4._0_4_ = auVar4._8_4_;
  auVar4._12_4_ = auVar4._8_4_;
  fVar10 = fVar6 + fVar3 + auVar4._8_4_;
  fVar12 = fVar6 + fVar3 + auVar4._8_4_;
  fVar14 = fVar6 + fVar3 + auVar4._8_4_;
  fVar15 = fVar6 + fVar3 + auVar4._8_4_;
  auVar5._4_4_ = fVar12;
  auVar5._0_4_ = fVar10;
  auVar5._8_4_ = fVar14;
  auVar5._12_4_ = fVar15;
  auVar5 = rsqrtps(auVar4,auVar5);
  fVar3 = auVar5._0_4_;
  fVar6 = auVar5._4_4_;
  fVar7 = auVar5._8_4_;
  fVar8 = auVar5._12_4_;
  local_48 = local_48 *
             (float)(~-(uint)(fVar10 <= 0.0) & (uint)((3.0 - fVar10 * fVar3 * fVar3) * fVar3 * 0.5))
  ;
  fStack_44 = fStack_44 *
              (float)(~-(uint)(fVar12 <= 0.0) & (uint)((3.0 - fVar12 * fVar6 * fVar6) * fVar6 * 0.5)
                     );
  fStack_40 = fStack_40 *
              (float)(~-(uint)(fVar14 <= 0.0) & (uint)((3.0 - fVar14 * fVar7 * fVar7) * fVar7 * 0.5)
                     );
  fStack_3c = ((0.0 - (fVar11 + fVar9 + fVar13)) * param_2[3] + *(float *)(param_4 + 0x1c)) *
              (float)(~-(uint)(fVar15 <= 0.0) & (uint)((3.0 - fVar15 * fVar8 * fVar8) * fVar8 * 0.5)
                     );
  pvVar2 = TlsGetValue(DAT_146b8198c);
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d800(pvVar2,"StapplyKineConst");
  }
  if (*(char *)(param_4 + 0x80) == '\0') {
    fVar3 = *(float *)(param_4 + 0x40);
    fVar6 = *(float *)(param_4 + 0x44);
    fVar7 = *(float *)(param_4 + 0x48);
    fStack_4c = *(float *)(param_4 + 0x4c);
  }
  else {
    FUN_1438a0cf0(param_1,param_3,param_2,&local_58,&local_48,param_4 + 0x40,&local_38,1);
    fVar3 = local_38;
    fVar6 = fStack_34;
    fVar7 = fStack_30;
    fStack_4c = fStack_2c;
  }
  local_58 = fVar3;
  fStack_54 = fVar6;
  fStack_50 = fVar7;
  pvVar2 = TlsGetValue(DAT_146b8198c);
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d800(pvVar2,"StcalcAngVel");
  }
  FUN_1438a12d0(param_4 + 0x30,&local_58,param_4 + 0x10,param_4 + 0x20,param_3,param_1,&local_38,
                param_6);
  *param_5 = fVar3;
  param_5[1] = fVar6;
  param_5[2] = fVar7;
  param_5[3] = fStack_2c;
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d7a0(pvVar1,&DAT_145b8dd34);
  }
  return;
}



// FUNCTION 1438a1be0 FUN_1438a1be0 body=583 status=ok
// SIG undefined FUN_1438a1be0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1438a1be0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 in_EAX;
  uint uVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined4 uVar26;
  undefined4 uVar32;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
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
  float fVar50;
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fVar5 = param_1[4];
  fVar6 = param_1[5];
  fVar7 = param_1[6];
  fVar8 = param_1[7];
  auVar20._0_4_ = -(uint)(fVar1 <= *param_2 && *param_2 <= fVar5);
  auVar20._4_4_ = -(uint)(fVar2 <= param_2[1] && param_2[1] <= fVar6);
  auVar20._8_4_ = -(uint)(fVar3 <= param_2[2] && param_2[2] <= fVar7);
  auVar20._12_4_ = -(uint)(fVar4 <= param_2[3] && param_2[3] <= fVar8);
  uVar10 = movmskps(in_EAX,auVar20);
  auVar34._0_4_ = -(uint)(fVar1 <= *param_3 && *param_3 <= fVar5);
  auVar34._4_4_ = -(uint)(fVar2 <= param_3[1] && param_3[1] <= fVar6);
  auVar34._8_4_ = -(uint)(fVar3 <= param_3[2] && param_3[2] <= fVar7);
  auVar34._12_4_ = -(uint)(fVar4 <= param_3[3] && param_3[3] <= fVar8);
  uVar12 = movmskps((int)param_2,auVar34);
  if (((uVar10 & 7) == 7) && ((uVar12 & 7) == 7)) {
    return 1;
  }
  fVar38 = *param_2;
  fVar39 = param_2[1];
  fVar40 = param_2[2];
  fVar9 = param_2[3];
  fVar48 = *param_3;
  fVar49 = param_3[1];
  fVar50 = param_3[2];
  fVar51 = param_3[3];
  fVar18 = DAT_1467f06f0._12_4_;
  fVar42 = fVar38;
  fVar44 = fVar39;
  fVar46 = fVar40;
  fVar47 = fVar9;
  if ((uVar10 & 7) == 7) {
LAB_1438a1d41:
    if ((uVar12 & 7) != 7) {
      fVar38 = fVar38 - fVar48;
      fVar39 = fVar39 - fVar49;
      fVar40 = fVar40 - fVar50;
      auVar15._4_4_ = DAT_1467f06f0._8_4_;
      auVar15._0_4_ = fVar40;
      auVar15._8_4_ = fVar9 - fVar51;
      auVar15._12_4_ = fVar18;
      auVar29._0_4_ = (float)(~-(uint)(fVar38 == 0.0) & (uint)fVar38);
      auVar29._4_4_ = (float)(~-(uint)(fVar39 == 0.0) & (uint)fVar39);
      auVar29._8_4_ = (float)(~-(uint)(fVar40 == 0.0) & (uint)fVar40);
      auVar29._12_4_ = (float)(~-(uint)(fVar18 == 0.0) & (uint)fVar18);
      auVar20 = rcpps(auVar15,auVar29);
      fVar18 = (float)(~-(uint)(auVar29._0_4_ == 0.0) &
                       (uint)((2.0 - auVar29._0_4_ * auVar20._0_4_) * auVar20._0_4_) |
                      -(uint)(auVar29._0_4_ == 0.0) & 0x7f7fffee);
      fVar41 = (float)(~-(uint)(auVar29._4_4_ == 0.0) &
                       (uint)((2.0 - auVar29._4_4_ * auVar20._4_4_) * auVar20._4_4_) |
                      -(uint)(auVar29._4_4_ == 0.0) & 0x7f7fffee);
      fVar43 = (float)(~-(uint)(auVar29._8_4_ == 0.0) &
                       (uint)((2.0 - auVar29._8_4_ * auVar20._8_4_) * auVar20._8_4_) |
                      -(uint)(auVar29._8_4_ == 0.0) & 0x7f7fffee);
      fVar45 = (float)(~-(uint)(auVar29._12_4_ == 0.0) &
                       (uint)((2.0 - auVar29._12_4_ * auVar20._12_4_) * auVar20._12_4_) |
                      -(uint)(auVar29._12_4_ == 0.0) & 0x7f7fffee);
      auVar23._0_4_ = fVar18 * (fVar5 - fVar48);
      auVar23._4_4_ = fVar41 * (fVar6 - fVar49);
      auVar23._8_4_ = fVar43 * (fVar7 - fVar50);
      auVar23._12_4_ = fVar45 * (fVar8 - fVar51);
      auVar30._0_8_ = CONCAT44(fVar41 * (fVar2 - fVar49),fVar18 * (fVar1 - fVar48));
      auVar30._8_4_ = fVar43 * (fVar3 - fVar50);
      auVar30._12_4_ = fVar45 * (fVar4 - fVar51);
      auVar36._8_4_ = auVar30._8_4_;
      auVar36._0_8_ = auVar30._0_8_;
      auVar36._12_4_ = auVar30._12_4_;
      auVar20 = minps(auVar36,auVar23);
      auVar34 = maxps(auVar30,auVar23);
      uVar26 = auVar20._0_4_;
      uVar32 = auVar20._4_4_;
      auVar37._8_4_ = auVar20._8_4_;
      auVar24._4_4_ = uVar32;
      auVar24._0_4_ = uVar32;
      auVar24._8_4_ = uVar32;
      auVar24._12_4_ = uVar32;
      auVar16._4_4_ = uVar26;
      auVar16._0_4_ = uVar26;
      auVar16._8_4_ = uVar26;
      auVar16._12_4_ = uVar26;
      auVar20 = maxps(auVar24,auVar16);
      uVar26 = auVar34._0_4_;
      uVar32 = auVar34._4_4_;
      auVar31._8_4_ = auVar34._8_4_;
      auVar37._4_4_ = auVar37._8_4_;
      auVar37._0_4_ = auVar37._8_4_;
      auVar37._12_4_ = auVar37._8_4_;
      auVar20 = maxps(auVar37,auVar20);
      auVar17._4_4_ = uVar26;
      auVar17._0_4_ = uVar26;
      auVar17._8_4_ = uVar26;
      auVar17._12_4_ = uVar26;
      auVar34 = maxps(auVar20,_DAT_1467f06e0);
      auVar25._4_4_ = uVar32;
      auVar25._0_4_ = uVar32;
      auVar25._8_4_ = uVar32;
      auVar25._12_4_ = uVar32;
      auVar31._4_4_ = auVar31._8_4_;
      auVar31._0_4_ = auVar31._8_4_;
      auVar31._12_4_ = auVar31._8_4_;
      auVar20 = minps(auVar25,auVar17);
      auVar20 = minps(auVar31,auVar20);
      auVar20 = minps(auVar20,_DAT_1467f06f0);
      if (auVar20._0_4_ < auVar34._0_4_) goto LAB_1438a1ded;
      fVar48 = fVar48 + fVar38 * auVar34._0_4_;
      fVar49 = fVar49 + fVar39 * auVar34._4_4_;
      fVar50 = fVar50 + fVar40 * auVar34._8_4_;
      fVar51 = fVar51 + (fVar9 - fVar51) * auVar34._12_4_;
    }
    *param_2 = fVar42;
    param_2[1] = fVar44;
    param_2[2] = fVar46;
    param_2[3] = fVar47;
    uVar11 = 1;
    *param_3 = fVar48;
    param_3[1] = fVar49;
    param_3[2] = fVar50;
    param_3[3] = fVar51;
  }
  else {
    fVar41 = fVar48 - fVar38;
    fVar43 = fVar49 - fVar39;
    fVar45 = fVar50 - fVar40;
    auVar19._4_4_ = fVar43;
    auVar19._0_4_ = fVar41;
    auVar19._8_4_ = fVar45;
    auVar19._12_4_ = fVar18;
    auVar27._0_4_ = (float)(~-(uint)(fVar41 == 0.0) & (uint)fVar41);
    auVar27._4_4_ = (float)(~-(uint)(fVar43 == 0.0) & (uint)fVar43);
    auVar27._8_4_ = (float)(~-(uint)(fVar45 == 0.0) & (uint)fVar45);
    auVar27._12_4_ = (float)(~-(uint)(fVar18 == 0.0) & (uint)fVar18);
    auVar20 = rcpps(auVar19,auVar27);
    fVar42 = (float)(~-(uint)(auVar27._0_4_ == 0.0) &
                     (uint)((2.0 - auVar27._0_4_ * auVar20._0_4_) * auVar20._0_4_) |
                    -(uint)(auVar27._0_4_ == 0.0) & 0x7f7fffee);
    fVar44 = (float)(~-(uint)(auVar27._4_4_ == 0.0) &
                     (uint)((2.0 - auVar27._4_4_ * auVar20._4_4_) * auVar20._4_4_) |
                    -(uint)(auVar27._4_4_ == 0.0) & 0x7f7fffee);
    fVar46 = (float)(~-(uint)(auVar27._8_4_ == 0.0) &
                     (uint)((2.0 - auVar27._8_4_ * auVar20._8_4_) * auVar20._8_4_) |
                    -(uint)(auVar27._8_4_ == 0.0) & 0x7f7fffee);
    fVar47 = (float)(~-(uint)(auVar27._12_4_ == 0.0) &
                     (uint)((2.0 - auVar27._12_4_ * auVar20._12_4_) * auVar20._12_4_) |
                    -(uint)(auVar27._12_4_ == 0.0) & 0x7f7fffee);
    auVar28._0_4_ = fVar42 * (fVar5 - fVar38);
    auVar28._4_4_ = fVar44 * (fVar6 - fVar39);
    auVar28._8_4_ = fVar46 * (fVar7 - fVar40);
    auVar28._12_4_ = fVar47 * (fVar8 - fVar9);
    auVar33._0_8_ = CONCAT44(fVar44 * (fVar2 - fVar39),fVar42 * (fVar1 - fVar38));
    auVar33._8_4_ = fVar46 * (fVar3 - fVar40);
    auVar33._12_4_ = fVar47 * (fVar4 - fVar9);
    auVar52._8_4_ = auVar33._8_4_;
    auVar52._0_8_ = auVar33._0_8_;
    auVar52._12_4_ = auVar33._12_4_;
    auVar20 = minps(auVar52,auVar28);
    auVar34 = maxps(auVar33,auVar28);
    uVar26 = auVar20._0_4_;
    uVar32 = auVar20._4_4_;
    auVar53._8_4_ = auVar20._8_4_;
    auVar21._4_4_ = uVar32;
    auVar21._0_4_ = uVar32;
    auVar21._8_4_ = uVar32;
    auVar21._12_4_ = uVar32;
    auVar13._4_4_ = uVar26;
    auVar13._0_4_ = uVar26;
    auVar13._8_4_ = uVar26;
    auVar13._12_4_ = uVar26;
    auVar20 = maxps(auVar21,auVar13);
    uVar26 = auVar34._0_4_;
    uVar32 = auVar34._4_4_;
    auVar35._8_4_ = auVar34._8_4_;
    auVar53._4_4_ = auVar53._8_4_;
    auVar53._0_4_ = auVar53._8_4_;
    auVar53._12_4_ = auVar53._8_4_;
    auVar20 = maxps(auVar53,auVar20);
    auVar14._4_4_ = uVar26;
    auVar14._0_4_ = uVar26;
    auVar14._8_4_ = uVar26;
    auVar14._12_4_ = uVar26;
    auVar34 = maxps(auVar20,_DAT_1467f06e0);
    auVar22._4_4_ = uVar32;
    auVar22._0_4_ = uVar32;
    auVar22._8_4_ = uVar32;
    auVar22._12_4_ = uVar32;
    auVar35._4_4_ = auVar35._8_4_;
    auVar35._0_4_ = auVar35._8_4_;
    auVar35._12_4_ = auVar35._8_4_;
    auVar20 = minps(auVar22,auVar14);
    auVar20 = minps(auVar35,auVar20);
    auVar20 = minps(auVar20,_DAT_1467f06f0);
    if (auVar34._0_4_ <= auVar20._0_4_) {
      fVar42 = fVar41 * auVar34._0_4_ + fVar38;
      fVar44 = fVar43 * auVar34._4_4_ + fVar39;
      fVar46 = fVar45 * auVar34._8_4_ + fVar40;
      fVar47 = (fVar51 - fVar9) * auVar34._12_4_ + fVar9;
      goto LAB_1438a1d41;
    }
LAB_1438a1ded:
    uVar11 = 0;
  }
  return uVar11;
}



// FUNCTION 1438a1e30 FUN_1438a1e30 body=59 status=ok
// SIG undefined FUN_1438a1e30(void)

undefined8 FUN_1438a1e30(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (param_2[2] * param_1[1] - param_1[2] * param_2[1]) * *param_3;
  fVar2 = (*param_2 * param_1[2] - *param_1 * param_2[2]) * param_3[1];
  fVar3 = (param_2[1] * *param_1 - param_1[1] * *param_2) * param_3[2];
  return CONCAT44(fVar2 + fVar1 + fVar3,fVar2 + fVar1 + fVar3);
}



// FUNCTION 1438a1e70 FUN_1438a1e70 body=424 status=ok
// SIG undefined FUN_1438a1e70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1438a1e70(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar5;
  undefined8 uVar4;
  float fVar8;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  fVar10 = *param_3 - fVar2;
  fVar12 = param_3[1] - fVar3;
  fVar13 = param_3[2] - fVar8;
  fStack_5c = param_3[3] - fVar9;
  local_78 = fVar2;
  fStack_74 = fVar3;
  fStack_70 = fVar8;
  fStack_6c = fVar9;
  local_68 = fVar10;
  fStack_64 = fVar12;
  fStack_60 = fVar13;
  fVar1 = (float)FUN_1438a1e30(param_1,&local_68,param_4);
  if (fVar1 == 0.0) {
    fVar2 = 3.40282e+38;
    uVar5 = 0;
    goto LAB_1438a1ff6;
  }
  uVar4 = FUN_1438a1e30(&local_78,&local_68,param_4);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_78 = fVar2 * _DAT_1467f06d0;
  fStack_74 = fVar3 * fRam00000001467f06d4;
  fStack_70 = fVar8 * fRam00000001467f06d8;
  fStack_6c = fVar9 * fRam00000001467f06dc;
  fVar2 = (float)uVar4 * (1.0 / fVar1);
  fVar3 = (float)FUN_1438a1e30(&local_78,param_1,param_4);
  fVar3 = -(fVar3 * (1.0 / fVar1));
  if ((0.0 <= fVar3) && (fVar3 <= 1.0)) {
    if (0.0 < fVar2) goto LAB_1438a1ff6;
    fVar11 = fVar12 * *param_4 - param_4[1] * fVar10;
    fVar12 = fVar13 * param_4[1] - param_4[2] * fVar12;
    fVar13 = fVar10 * param_4[2] - *param_4 * fVar13;
    fVar2 = fVar12 * fVar12;
    fVar3 = fVar13 * fVar13;
    auVar6._8_4_ = fVar11 * fVar11;
    auVar6._4_4_ = auVar6._8_4_;
    auVar6._0_4_ = auVar6._8_4_;
    auVar6._12_4_ = auVar6._8_4_;
    fVar9 = fVar3 + fVar2 + auVar6._8_4_;
    fVar1 = fVar3 + fVar2 + auVar6._8_4_;
    fVar10 = fVar3 + fVar2 + auVar6._8_4_;
    auVar7._4_4_ = fVar1;
    auVar7._0_4_ = fVar9;
    auVar7._8_4_ = fVar10;
    auVar7._12_4_ = fVar3 + fVar2 + auVar6._8_4_;
    auVar7 = rsqrtps(auVar6,auVar7);
    fVar2 = auVar7._0_4_;
    fVar3 = auVar7._4_4_;
    fVar8 = auVar7._8_4_;
    if ((float)(~-(uint)(fVar1 <= 0.0) & (uint)((3.0 - fVar1 * fVar3 * fVar3) * fVar3 * 0.5)) *
        fVar13 * param_1[1] +
        (float)(~-(uint)(fVar9 <= 0.0) & (uint)((3.0 - fVar9 * fVar2 * fVar2) * fVar2 * 0.5)) *
        fVar12 * *param_1 +
        (float)(~-(uint)(fVar10 <= 0.0) & (uint)((3.0 - fVar10 * fVar8 * fVar8) * fVar8 * 0.5)) *
        fVar11 * param_1[2] < 0.0) {
      fVar2 = 0.0;
      uVar5 = 0;
      goto LAB_1438a1ff6;
    }
  }
  fVar2 = 3.40282e+38;
  uVar5 = 0;
LAB_1438a1ff6:
  return CONCAT44(uVar5,fVar2);
}



// FUNCTION 1438a2020 FUN_1438a2020 body=1658 status=ok
// SIG undefined FUN_1438a2020(void)

void FUN_1438a2020(float *param_1,undefined8 param_2,int param_3,float param_4,longlong *param_5,
                  longlong param_6,longlong param_7,float *param_8,undefined8 *param_9)

{
  float *pfVar1;
  undefined4 uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  bool bVar14;
  float fVar15;
  LPVOID pvVar16;
  LPVOID pvVar17;
  ulonglong uVar18;
  int *piVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
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
  float fVar50;
  float fVar51;
  float local_res8;
  uint local_104;
  longlong local_100;
  float fStack_f4;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  
  pvVar16 = TlsGetValue(DAT_146b8198c);
  if (pvVar16 != (LPVOID)0x0) {
    FUN_14370d620(pvVar16,"LtsetupAgent","Stinit");
  }
  lVar4 = *(longlong *)(param_1 + 0x1a);
  fVar15 = param_1[8];
  fVar8 = param_1[9];
  fVar9 = param_1[10];
  fVar10 = param_1[0xb];
  uVar20 = 0;
  bVar3 = *(byte *)(lVar4 + 0xb2);
  fVar23 = 0.0;
  if (((bVar3 & 7) == 0) ||
     (((param_3 == -1 && ((int)param_5[1] == 0)) && (*(int *)(param_6 + 8) == 0)))) {
    bVar14 = false;
  }
  else {
    bVar14 = true;
    pvVar17 = TlsGetValue(DAT_146b8198c);
    if (pvVar17 != (LPVOID)0x0) {
      FUN_14370d800(pvVar17,"StobstacleSetup");
    }
    lVar5 = *(longlong *)(param_1 + 0x1c);
    param_9[10] = lVar5;
    if ((bVar3 & 1) != 0) {
      FUN_1438a0a20(lVar4,param_2,param_3,param_9);
    }
    if ((bVar3 & 4) != 0) {
      FUN_1438a0c60(lVar4,param_6,param_9);
    }
    param_9[10] = 0;
    if (((bVar3 & 2) != 0) && (local_104 = 0, 0 < *(int *)(param_9 + 5))) {
      local_100 = 0;
      uVar21 = uVar20;
      uVar18 = uVar20;
      do {
        uVar22 = (uint)uVar18;
        lVar6 = *(longlong *)(local_100 + *param_5);
        if (*(char *)(*(longlong *)(lVar4 + 0xa0) + 0x38) == '\x01') {
          fVar36 = *(float *)(lVar6 + 0x30);
          fVar40 = *(float *)(lVar6 + 0x34);
          local_d8 = *(undefined8 *)(lVar6 + 0x30);
          fVar44 = *(float *)(lVar6 + 0x38);
          fVar24 = *(float *)(lVar6 + 0x3c);
          uStack_d0 = *(undefined8 *)(lVar6 + 0x38);
        }
        else {
          fVar36 = 0.0;
          fVar40 = 0.0;
          fVar44 = 0.0;
          fVar24 = 0.0;
          local_d8 = 0;
          uStack_d0 = 0;
        }
        if (lVar5 == 0) {
          local_c8 = *(float *)(lVar6 + 0x20);
          fStack_c4 = *(float *)(lVar6 + 0x24);
          fStack_c0 = *(float *)(lVar6 + 0x28);
          fStack_bc = *(float *)(lVar6 + 0x2c);
          local_b8 = *(undefined8 *)(lVar6 + 0x40);
          uStack_b0 = *(undefined8 *)(lVar6 + 0x48);
          local_98 = *(undefined8 *)(lVar6 + 0x50);
          uStack_90 = *(undefined8 *)(lVar6 + 0x58);
          local_a8 = fVar36;
          fStack_a4 = fVar40;
          fStack_a0 = fVar44;
          fStack_9c = fVar24;
        }
        else {
          FUN_1438892b0(lVar5,lVar6 + 0x20,&local_d8,lVar6 + 0x40,lVar6 + 0x50,&local_c8,&local_a8,
                        &local_b8,&local_98);
          uVar22 = local_104;
        }
        lVar7 = param_9[4];
        fVar36 = fVar15 * local_c8;
        fVar40 = fVar8 * fStack_c4;
        fVar44 = fVar9 * fStack_c0;
        pfVar1 = (float *)(uVar21 + lVar7);
        *pfVar1 = (0.0 - (fVar40 + fVar36 + fVar44)) * fVar15 + local_c8;
        pfVar1[1] = (0.0 - (fVar40 + fVar36 + fVar44)) * fVar8 + fStack_c4;
        pfVar1[2] = (0.0 - (fVar40 + fVar36 + fVar44)) * fVar9 + fStack_c0;
        pfVar1[3] = (0.0 - (fVar40 + fVar36 + fVar44)) * fVar10 + fStack_bc;
        fVar36 = fVar15 * (float)local_b8;
        fVar40 = fVar8 * local_b8._4_4_;
        fVar44 = fVar9 * (float)uStack_b0;
        pfVar1 = (float *)(uVar21 + 0x10 + lVar7);
        *pfVar1 = (0.0 - (fVar40 + fVar36 + fVar44)) * fVar15 + (float)local_b8;
        pfVar1[1] = (0.0 - (fVar40 + fVar36 + fVar44)) * fVar8 + local_b8._4_4_;
        pfVar1[2] = (0.0 - (fVar40 + fVar36 + fVar44)) * fVar9 + (float)uStack_b0;
        pfVar1[3] = (0.0 - (fVar40 + fVar36 + fVar44)) * fVar10 + uStack_b0._4_4_;
        fVar36 = fVar15 * local_a8;
        fVar40 = fVar8 * fStack_a4;
        fVar44 = fVar9 * fStack_a0;
        pfVar1 = (float *)(uVar21 + 0x20 + lVar7);
        *pfVar1 = (0.0 - (fVar40 + fVar36 + fVar44)) * fVar15 + local_a8;
        pfVar1[1] = (0.0 - (fVar40 + fVar36 + fVar44)) * fVar8 + fStack_a4;
        pfVar1[2] = (0.0 - (fVar40 + fVar36 + fVar44)) * fVar9 + fStack_a0;
        pfVar1[3] = (0.0 - (fVar40 + fVar36 + fVar44)) * fVar10 + fStack_9c;
        *(undefined8 *)(uVar21 + 0x30 + lVar7) = *(undefined8 *)(lVar6 + 0xa0);
        *(undefined2 *)(uVar21 + 0x38 + lVar7) = *(undefined2 *)(lVar6 + 0xac);
        uVar2 = *(undefined4 *)(lVar6 + 0x68);
        *(undefined4 *)(uVar21 + 0x3c + lVar7) = uVar2;
        *(undefined4 *)(uVar21 + 0x40 + lVar7) = uVar2;
        *(undefined4 *)(uVar21 + 0x44 + lVar7) = 0x3f000000;
        if (param_7 != 0) {
          if (0 < *(int *)(param_7 + 0x20)) {
            uVar18 = uVar20;
            piVar19 = *(int **)(param_7 + 0x18);
            do {
              if ((uint)*(ushort *)(lVar4 + 0xb0) * 0x10000 + (uint)*(ushort *)(lVar6 + 0xb0) ==
                  *piVar19) {
                fStack_f4 = (float)((ulonglong)
                                    *(undefined8 *)(*(int **)(param_7 + 0x18) + uVar18 * 3) >> 0x20)
                ;
                *(float *)(uVar21 + 0x44 + lVar7) = fStack_f4;
                break;
              }
              uVar18 = uVar18 + 1;
              piVar19 = piVar19 + 3;
            } while ((longlong)uVar18 < (longlong)*(int *)(param_7 + 0x20));
          }
        }
        local_104 = uVar22 + 1;
        uVar18 = (ulonglong)local_104;
        local_100 = local_100 + 8;
        uVar21 = uVar21 + 0x50;
      } while ((int)local_104 < *(int *)(param_9 + 5));
    }
  }
  pvVar17 = TlsGetValue(DAT_146b8198c);
  if (pvVar17 != (LPVOID)0x0) {
    FUN_14370d800(pvVar17,"StagentSetup");
  }
  fVar33 = fVar15 * param_1[0xc];
  fVar37 = fVar8 * param_1[0xd];
  fVar41 = fVar9 * param_1[0xe];
  fVar34 = fVar15 * param_1[4];
  fVar38 = fVar8 * param_1[5];
  fVar42 = fVar9 * param_1[6];
  fVar35 = fVar15 * *param_1;
  fVar39 = fVar8 * param_1[1];
  fVar43 = fVar9 * param_1[2];
  fVar36 = param_1[0xd];
  fVar40 = param_1[0xe];
  fVar44 = param_1[0xf];
  fVar24 = param_1[7];
  fVar49 = (0.0 - (fVar38 + fVar34 + fVar42)) * fVar15 + param_1[4];
  fVar50 = (0.0 - (fVar38 + fVar34 + fVar42)) * fVar8 + param_1[5];
  fVar51 = (0.0 - (fVar38 + fVar34 + fVar42)) * fVar9 + param_1[6];
  fVar25 = fVar49 * fVar49;
  fVar29 = fVar50 * fVar50;
  auVar27._8_4_ = fVar51 * fVar51;
  auVar27._4_4_ = auVar27._8_4_;
  auVar27._0_4_ = auVar27._8_4_;
  auVar27._12_4_ = auVar27._8_4_;
  fVar45 = fVar29 + fVar25 + auVar27._8_4_;
  fVar46 = fVar29 + fVar25 + auVar27._8_4_;
  fVar47 = fVar29 + fVar25 + auVar27._8_4_;
  fVar48 = fVar29 + fVar25 + auVar27._8_4_;
  auVar28._4_4_ = fVar46;
  auVar28._0_4_ = fVar45;
  auVar28._8_4_ = fVar47;
  auVar28._12_4_ = fVar48;
  auVar28 = rsqrtps(auVar27,auVar28);
  fVar26 = auVar28._0_4_;
  fVar30 = auVar28._4_4_;
  fVar31 = auVar28._8_4_;
  fVar32 = auVar28._12_4_;
  fVar25 = *param_1;
  fVar29 = param_1[1];
  fVar11 = param_1[2];
  fVar12 = param_1[3];
  param_8[4] = (0.0 - (fVar37 + fVar33 + fVar41)) * fVar15 + param_1[0xc];
  param_8[5] = (0.0 - (fVar37 + fVar33 + fVar41)) * fVar8 + fVar36;
  param_8[6] = (0.0 - (fVar37 + fVar33 + fVar41)) * fVar9 + fVar40;
  param_8[7] = (0.0 - (fVar37 + fVar33 + fVar41)) * fVar10 + fVar44;
  param_8[8] = (float)(~-(uint)(fVar45 <= 0.0) &
                      (uint)((3.0 - fVar45 * fVar26 * fVar26) * fVar26 * 0.5)) * fVar49;
  param_8[9] = (float)(~-(uint)(fVar46 <= 0.0) &
                      (uint)((3.0 - fVar46 * fVar30 * fVar30) * fVar30 * 0.5)) * fVar50;
  param_8[10] = (float)(~-(uint)(fVar47 <= 0.0) &
                       (uint)((3.0 - fVar47 * fVar31 * fVar31) * fVar31 * 0.5)) * fVar51;
  param_8[0xb] = (float)(~-(uint)(fVar48 <= 0.0) &
                        (uint)((3.0 - fVar48 * fVar32 * fVar32) * fVar32 * 0.5)) *
                 ((0.0 - (fVar38 + fVar34 + fVar42)) * fVar10 + fVar24);
  *param_8 = (0.0 - (fVar39 + fVar35 + fVar43)) * fVar15 + fVar25;
  param_8[1] = (0.0 - (fVar39 + fVar35 + fVar43)) * fVar8 + fVar29;
  param_8[2] = (0.0 - (fVar39 + fVar35 + fVar43)) * fVar9 + fVar11;
  param_8[3] = (0.0 - (fVar39 + fVar35 + fVar43)) * fVar10 + fVar12;
  uVar13 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(param_8 + 0x14) = *(undefined8 *)param_1;
  *(undefined8 *)(param_8 + 0x16) = uVar13;
  uVar13 = *(undefined8 *)(param_1 + 6);
  *(undefined8 *)(param_8 + 0x18) = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_8 + 0x1a) = uVar13;
  uVar13 = *(undefined8 *)(param_1 + 10);
  *(undefined8 *)(param_8 + 0x1c) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_8 + 0x1e) = uVar13;
  uVar13 = *(undefined8 *)(param_1 + 0xe);
  *(undefined8 *)(param_8 + 0x20) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)(param_8 + 0x22) = uVar13;
  fVar15 = param_1[0x11];
  fVar8 = param_1[0x12];
  fVar9 = param_1[0x13];
  param_8[0x24] = param_1[0x10];
  param_8[0x25] = fVar15;
  param_8[0x26] = fVar8;
  param_8[0x27] = fVar9;
  uVar13 = *(undefined8 *)(param_1 + 0x16);
  *(undefined8 *)(param_8 + 0x28) = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)(param_8 + 0x2a) = uVar13;
  param_8[0x2c] = param_1[0x18];
  *(undefined8 *)(param_8 + 0x2e) = *(undefined8 *)(param_1 + 0x1a);
  *(undefined8 *)(param_8 + 0x30) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)(param_8 + 0x32) = *(undefined8 *)(param_1 + 0x1e);
  *(undefined1 *)(param_8 + 0x34) = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)((longlong)param_8 + 0xd1) = *(undefined1 *)((longlong)param_1 + 0x81);
  *(undefined1 *)((longlong)param_8 + 0xd2) = *(undefined1 *)((longlong)param_1 + 0x82);
  *(undefined8 *)(param_8 + 0xc) = *(undefined8 *)(lVar4 + 0xa0);
  fVar15 = fVar23;
  if ((bVar3 & 2) != 0) {
    fVar15 = *(float *)(param_9 + 5);
  }
  param_8[0x3a] = fVar15;
  fVar15 = fVar23;
  if ((bVar3 & 5) != 0) {
    fVar15 = *(float *)(param_9 + 3);
  }
  param_8[0x3e] = fVar15;
  if ((bVar3 & 4) != 0) {
    fVar23 = *(float *)(param_9 + 1);
  }
  param_8[0x42] = fVar23;
  if (bVar14) {
    *(undefined8 *)(param_8 + 0x38) = param_9[4];
    *(undefined8 *)(param_8 + 0x3c) = param_9[2];
    *(undefined8 *)(param_8 + 0x40) = *param_9;
    *(undefined2 *)(param_8 + 0xe) = *(undefined2 *)(lVar4 + 0xac);
    fVar23 = *(float *)(lVar4 + 0x68);
    param_8[0xf] = fVar23;
    fVar23 = fVar23 - param_4;
    param_8[0x11] = 0.5;
    local_res8 = 0.0;
    if (0.0 <= fVar23) {
      local_res8 = fVar23;
    }
    param_8[0x10] = local_res8;
    if (param_7 != 0) {
      if (0 < *(int *)(param_7 + 0x20)) {
        piVar19 = *(int **)(param_7 + 0x18);
        uVar21 = uVar20;
        do {
          if (CONCAT22(*(undefined2 *)(lVar4 + 0xb0),*(undefined2 *)(lVar4 + 0xb0)) == *piVar19) {
            fStack_f4 = (float)((ulonglong)
                                *(undefined8 *)
                                 (*(int **)(param_7 + 0x18) + (longlong)(int)uVar21 * 3) >> 0x20);
            param_8[0x11] = fStack_f4;
            break;
          }
          uVar21 = (ulonglong)((int)uVar21 + 1);
          uVar20 = uVar20 + 1;
          piVar19 = piVar19 + 3;
        } while ((longlong)uVar20 < (longlong)*(int *)(param_7 + 0x20));
      }
    }
    *(undefined1 *)(param_8 + 0x43) = 0;
  }
  if (pvVar16 != (LPVOID)0x0) {
    FUN_14370d7a0(pvVar16,&DAT_145b8dd34);
  }
  return;
}



// FUNCTION 1438a26a0 FUN_1438a26a0 body=173 status=ok
// SIG undefined FUN_1438a26a0(void)

undefined8 * FUN_1438a26a0(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  param_1[10] = 0;
  uVar2 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  if (uVar2 < 0x20) {
    uVar2 = uVar2 * 2;
    uVar1 = 0x20;
    if (0x20 < uVar2) {
      uVar1 = uVar2;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,param_1,uVar1,0x20);
  }
  uVar2 = *(uint *)((longlong)param_1 + 0x1c) & 0x3fffffff;
  if (uVar2 < 0x20) {
    uVar2 = uVar2 * 2;
    uVar1 = 0x20;
    if (0x20 < uVar2) {
      uVar1 = uVar2;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,param_1 + 2,uVar1,0x20);
  }
  return param_1;
}



// FUNCTION 1438a2750 FUN_1438a2750 body=545 status=ok
// SIG undefined FUN_1438a2750(void)

void FUN_1438a2750(longlong param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  longlong lVar4;
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
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58 [20];
  
  local_68 = *param_2;
  fStack_64 = param_2[1];
  fStack_60 = param_2[2];
  fStack_5c = param_2[3];
  local_78 = *param_3;
  fStack_74 = param_3[1];
  fStack_70 = param_3[2];
  fStack_6c = param_3[3];
  pfVar1 = *(float **)(param_1 + 0x50);
  if (pfVar1 != (float *)0x0) {
    fVar6 = local_68 - pfVar1[0xc];
    fVar7 = fStack_64 - pfVar1[0xd];
    fVar8 = fStack_60 - pfVar1[0xe];
    fVar14 = local_78 - pfVar1[0xc];
    fVar15 = fStack_74 - pfVar1[0xd];
    fVar16 = fStack_70 - pfVar1[0xe];
    fVar9 = pfVar1[9];
    fVar10 = pfVar1[0xb];
    local_68 = pfVar1[1] * fVar7 + fVar6 * *pfVar1 + fVar8 * pfVar1[2];
    fStack_64 = pfVar1[5] * fVar7 + fVar6 * pfVar1[4] + fVar8 * pfVar1[6];
    fStack_60 = fVar9 * fVar7 + fVar6 * pfVar1[8] + fVar8 * pfVar1[10];
    fStack_5c = fVar10 * fVar7 + fVar6 * fVar9 + fVar8 * fVar10;
    local_78 = pfVar1[1] * fVar15 + fVar14 * *pfVar1 + fVar16 * pfVar1[2];
    fStack_74 = pfVar1[5] * fVar15 + fVar14 * pfVar1[4] + fVar16 * pfVar1[6];
    fStack_70 = fVar9 * fVar15 + fVar14 * pfVar1[8] + fVar16 * pfVar1[10];
    fStack_6c = fVar10 * fVar15 + fVar14 * fVar9 + fVar16 * fVar10;
  }
  fVar9 = *(float *)(param_1 + 0x30);
  fVar10 = *(float *)(param_1 + 0x34);
  fVar6 = *(float *)(param_1 + 0x38);
  fVar7 = fVar9 * local_68;
  fVar14 = fVar10 * fStack_64;
  fVar16 = fVar6 * fStack_60;
  fVar8 = fVar9 * local_78;
  fVar15 = fVar10 * fStack_74;
  fVar5 = fVar6 * fStack_70;
  fVar11 = (0.0 - (fVar14 + fVar7 + fVar16)) * fVar9 + local_68;
  fVar12 = (0.0 - (fVar14 + fVar7 + fVar16)) * fVar10 + fStack_64;
  fVar13 = (0.0 - (fVar14 + fVar7 + fVar16)) * fVar6 + fStack_60;
  fVar14 = (0.0 - (fVar14 + fVar7 + fVar16)) * *(float *)(param_1 + 0x3c) + fStack_5c;
  fVar9 = (0.0 - (fVar15 + fVar8 + fVar5)) * fVar9 + local_78;
  fVar10 = (0.0 - (fVar15 + fVar8 + fVar5)) * fVar10 + fStack_74;
  fVar6 = (0.0 - (fVar15 + fVar8 + fVar5)) * fVar6 + fStack_70;
  fVar7 = (0.0 - (fVar15 + fVar8 + fVar5)) * *(float *)(param_1 + 0x3c) + fStack_6c;
  if (*(int *)(param_1 + 0x18) == 0x20) {
    pfVar2 = (float *)0x0;
    FUN_1438a2ba0(fVar8,local_58,&local_68,&local_78);
    pfVar1 = pfVar2;
    fVar8 = local_58[0];
    if (0 < *(int *)(param_1 + 0x18)) {
      do {
        lVar4 = (longlong)(int)pfVar1 * 0x20;
        IMovieScenePlayer::FindBoundObjects(param_1,local_58,*(longlong *)(param_1 + 0x10) + lVar4);
        if (fVar8 < local_58[0]) {
          pfVar2 = (float *)(*(longlong *)(param_1 + 0x10) + lVar4);
          fVar8 = local_58[0];
        }
        uVar3 = (int)pfVar1 + 1;
        pfVar1 = (float *)(ulonglong)uVar3;
      } while ((int)uVar3 < *(int *)(param_1 + 0x18));
      if (pfVar2 != (float *)0x0) {
        *pfVar2 = fVar11;
        pfVar2[1] = fVar12;
        pfVar2[2] = fVar13;
        pfVar2[3] = fVar14;
        pfVar2[4] = fVar9;
        pfVar2[5] = fVar10;
        pfVar2[6] = fVar6;
        pfVar2[7] = fVar7;
      }
    }
  }
  else {
    pfVar1 = (float *)((longlong)*(int *)(param_1 + 0x18) * 0x20 + *(longlong *)(param_1 + 0x10));
    *pfVar1 = fVar11;
    pfVar1[1] = fVar12;
    pfVar1[2] = fVar13;
    pfVar1[3] = fVar14;
    pfVar1[4] = fVar9;
    pfVar1[5] = fVar10;
    pfVar1[6] = fVar6;
    pfVar1[7] = fVar7;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  return;
}



// FUNCTION 1438a2980 FUN_1438a2980 body=512 status=ok
// SIG undefined FUN_1438a2980(void)

void FUN_1438a2980(longlong *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
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
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  local_48 = param_2[4];
  fStack_44 = param_2[5];
  fStack_40 = param_2[6];
  fStack_3c = param_2[7];
  local_58 = *param_2;
  fStack_54 = param_2[1];
  fStack_50 = param_2[2];
  fStack_4c = param_2[3];
  fVar12 = fStack_4c;
  if (param_1[10] != 0) {
    FUN_1438895c0(param_1[10],&local_58,&local_48,&local_68);
    pfVar3 = (float *)param_1[10];
    fVar12 = local_58 - pfVar3[0xc];
    fVar13 = fStack_54 - pfVar3[0xd];
    fStack_50 = fStack_50 - pfVar3[0xe];
    local_58 = pfVar3[1] * fVar13 + fVar12 * *pfVar3 + fStack_50 * pfVar3[2];
    fStack_54 = pfVar3[5] * fVar13 + fVar12 * pfVar3[4] + fStack_50 * pfVar3[6];
    fStack_50 = pfVar3[9] * fVar13 + fVar12 * pfVar3[8] + fStack_50 * pfVar3[10];
    local_48 = local_68;
    fStack_44 = fStack_64;
    fStack_40 = fStack_60;
    fStack_3c = fStack_5c;
    fVar12 = fStack_4c;
  }
  fVar13 = *(float *)(param_1 + 6);
  fVar1 = *(float *)((longlong)param_1 + 0x34);
  fVar2 = *(float *)(param_1 + 7);
  fVar6 = fVar13 * local_58;
  fVar8 = fVar1 * fStack_54;
  fVar10 = fVar2 * fStack_50;
  fVar7 = fVar13 * local_48;
  fVar9 = fVar1 * fStack_44;
  fVar11 = fVar2 * fStack_40;
  fVar14 = (0.0 - (fVar8 + fVar6 + fVar10)) * fVar13 + local_58;
  fVar15 = (0.0 - (fVar8 + fVar6 + fVar10)) * fVar1 + fStack_54;
  fVar6 = (0.0 - (fVar8 + fVar6 + fVar10)) * fVar2 + fStack_50;
  local_48 = local_48 + (0.0 - (fVar9 + fVar7 + fVar11)) * fVar13;
  fStack_44 = fStack_44 + (0.0 - (fVar9 + fVar7 + fVar11)) * fVar1;
  fStack_40 = fStack_40 + (0.0 - (fVar9 + fVar7 + fVar11)) * fVar2;
  fStack_3c = fStack_3c + (0.0 - (fVar9 + fVar7 + fVar11)) * *(float *)((longlong)param_1 + 0x3c);
  if ((int)param_1[1] == 0x20) {
    pfVar4 = (float *)0x0;
    local_58 = fVar14;
    fStack_54 = fVar15;
    fStack_50 = fVar6;
    fStack_4c = fVar12;
    FUN_1438a2c60(param_1,&local_68,&local_58);
    pfVar3 = (float *)*param_1;
    lVar5 = 0x20;
    fVar13 = local_68;
    do {
      FUN_1438a2c60(param_1,&local_68,pfVar3);
      if (fVar13 < local_68) {
        pfVar4 = pfVar3;
        fVar13 = local_68;
      }
      pfVar3 = pfVar3 + 8;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    if (pfVar4 != (float *)0x0) {
      *pfVar4 = fVar14;
      pfVar4[1] = fVar15;
      pfVar4[2] = fVar6;
      pfVar4[3] = fVar12;
      *(ulonglong *)(pfVar4 + 4) = CONCAT44(fStack_44,local_48);
      *(ulonglong *)(pfVar4 + 6) = CONCAT44(fStack_3c,fStack_40);
    }
    return;
  }
  pfVar3 = (float *)((longlong)(int)param_1[1] * 0x20 + *param_1);
  *pfVar3 = fVar14;
  pfVar3[1] = fVar15;
  pfVar3[2] = fVar6;
  pfVar3[3] = fVar12;
  *(ulonglong *)(pfVar3 + 4) = CONCAT44(fStack_44,local_48);
  *(ulonglong *)(pfVar3 + 6) = CONCAT44(fStack_3c,fStack_40);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return;
}



// FUNCTION 1438a2b80 FindBoundObjects body=27 status=ok
// SIG undefined FindBoundObjects(void)

undefined8 IMovieScenePlayer::FindBoundObjects(undefined8 param_1,undefined8 param_2)

{
  FUN_1438a2ba0();
  return param_2;
}



// FUNCTION 1438a2ba0 FUN_1438a2ba0 body=183 status=ok
// SIG undefined FUN_1438a2ba0(void)

float * FUN_1438a2ba0(longlong param_1,float *param_2,float *param_3,float *param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar19 = *param_3 - *(float *)(param_1 + 0x40);
  fVar20 = param_3[1] - *(float *)(param_1 + 0x44);
  fVar21 = param_3[2] - *(float *)(param_1 + 0x48);
  fVar16 = *param_3 - *param_4;
  fVar17 = param_3[1] - param_4[1];
  fVar18 = param_3[2] - param_4[2];
  fVar8 = fVar16 * fVar16;
  fVar9 = fVar17 * fVar17;
  fVar10 = fVar18 * fVar18;
  fVar13 = fVar9 + fVar8 + fVar10;
  fVar14 = fVar9 + fVar8 + fVar10;
  fVar15 = fVar9 + fVar8 + fVar10;
  fVar10 = fVar9 + fVar8 + fVar10;
  fVar8 = fVar19 * fVar16;
  fVar9 = fVar20 * fVar17;
  fVar11 = fVar21 * fVar18;
  auVar6._4_4_ = fVar8;
  auVar6._0_4_ = fVar8;
  auVar6._8_4_ = fVar8;
  auVar6._12_4_ = fVar8;
  auVar1._4_4_ = fVar14;
  auVar1._0_4_ = fVar13;
  auVar1._8_4_ = fVar15;
  auVar1._12_4_ = fVar10;
  auVar7 = rcpps(auVar6,auVar1);
  fVar13 = (2.0 - fVar13 * auVar7._0_4_) * auVar7._0_4_ * (fVar9 + fVar8 + fVar11);
  fVar14 = (2.0 - fVar14 * auVar7._4_4_) * auVar7._4_4_ * (fVar9 + fVar8 + fVar11);
  fVar15 = (2.0 - fVar15 * auVar7._8_4_) * auVar7._8_4_ * (fVar9 + fVar8 + fVar11);
  fVar8 = (2.0 - fVar10 * auVar7._12_4_) * auVar7._12_4_ * (fVar9 + fVar8 + fVar11);
  uVar2 = -(uint)(fVar13 < DAT_1467f06f0);
  uVar3 = -(uint)(fVar14 < fRam00000001467f06f4);
  uVar4 = -(uint)(fVar15 < fRam00000001467f06f8);
  uVar5 = -(uint)(fVar8 < fRam00000001467f06fc);
  auVar12._0_4_ = (uint)fVar13 & uVar2;
  auVar12._4_4_ = (uint)fVar14 & uVar3;
  auVar12._8_4_ = (uint)fVar15 & uVar4;
  auVar12._12_4_ = (uint)fVar8 & uVar5;
  auVar7._4_4_ = ~uVar3 & (uint)fRam00000001467f06f4;
  auVar7._0_4_ = ~uVar2 & (uint)DAT_1467f06f0;
  auVar7._8_4_ = ~uVar4 & (uint)fRam00000001467f06f8;
  auVar7._12_4_ = ~uVar5 & (uint)fRam00000001467f06fc;
  auVar7 = maxps(ZEXT816(0),auVar12 | auVar7);
  fVar19 = fVar19 - auVar7._0_4_ * fVar16;
  fVar20 = fVar20 - auVar7._4_4_ * fVar17;
  fVar21 = fVar21 - auVar7._8_4_ * fVar18;
  fVar19 = fVar19 * fVar19;
  fVar20 = fVar20 * fVar20;
  fVar21 = fVar21 * fVar21;
  *param_2 = fVar20 + fVar19 + fVar21;
  param_2[1] = fVar20 + fVar19 + fVar21;
  param_2[2] = fVar20 + fVar19 + fVar21;
  param_2[3] = fVar20 + fVar19 + fVar21;
  return param_2;
}



// FUNCTION 1438a2c60 FUN_1438a2c60 body=100 status=ok
// SIG undefined FUN_1438a2c60(void)

float * FUN_1438a2c60(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar6;
  undefined1 in_XMM2 [16];
  undefined1 auVar5 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = param_3[3];
  fVar2 = *(float *)(param_1 + 0x40) - *param_3;
  fVar3 = *(float *)(param_1 + 0x44) - param_3[1];
  fVar4 = *(float *)(param_1 + 0x48) - param_3[2];
  fVar2 = fVar2 * fVar2;
  fVar3 = fVar3 * fVar3;
  fVar4 = fVar4 * fVar4;
  fVar8 = fVar3 + fVar2 + fVar4;
  fVar9 = fVar3 + fVar2 + fVar4;
  fVar10 = fVar3 + fVar2 + fVar4;
  fVar4 = fVar3 + fVar2 + fVar4;
  auVar5._4_4_ = fVar9;
  auVar5._0_4_ = fVar8;
  auVar5._8_4_ = fVar10;
  auVar5._12_4_ = fVar4;
  auVar5 = rsqrtps(in_XMM2,auVar5);
  fVar2 = auVar5._0_4_;
  fVar3 = auVar5._4_4_;
  fVar6 = auVar5._8_4_;
  fVar7 = auVar5._12_4_;
  *param_2 = (float)(~-(uint)(fVar8 <= 0.0) &
                    (uint)((3.0 - fVar8 * fVar2 * fVar2) * fVar2 * 0.5 * fVar8)) - fVar1;
  param_2[1] = (float)(~-(uint)(fVar9 <= 0.0) &
                      (uint)((3.0 - fVar9 * fVar3 * fVar3) * fVar3 * 0.5 * fVar9)) - fVar1;
  param_2[2] = (float)(~-(uint)(fVar10 <= 0.0) &
                      (uint)((3.0 - fVar10 * fVar6 * fVar6) * fVar6 * 0.5 * fVar10)) - fVar1;
  param_2[3] = (float)(~-(uint)(fVar4 <= 0.0) &
                      (uint)((3.0 - fVar4 * fVar7 * fVar7) * fVar7 * 0.5 * fVar4)) - fVar1;
  return param_2;
}



// FUNCTION 1438a2cd0 FUN_1438a2cd0 body=150 status=ok
// SIG undefined FUN_1438a2cd0(void)

void FUN_1438a2cd0(longlong param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar4 = *(uint *)(param_1 + 0x2c) & 0x3fffffff;
  if ((int)uVar4 < param_2) {
    iVar2 = uVar4 * 2;
    iVar1 = param_2;
    if (param_2 < iVar2) {
      iVar1 = iVar2;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,param_1 + 0x20,iVar1,0x50);
  }
  *(int *)(param_1 + 0x28) = param_2;
  uVar3 = param_4[1];
  *(undefined8 *)(param_1 + 0x30) = *param_4;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  uVar3 = param_3[1];
  *(undefined8 *)(param_1 + 0x40) = *param_3;
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



// FUNCTION 1438a2d70 FUN_1438a2d70 body=25 status=ok
// SIG undefined FUN_1438a2d70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1438a2d70(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = uRam00000001467f0708;
  *param_1 = _DAT_1467f0700;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  return param_1;
}



// FUNCTION 1438a2d90 FUN_1438a2d90 body=97 status=ok
// SIG undefined FUN_1438a2d90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1438a2d90(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = uRam00000001467f0708;
  *param_1 = _DAT_1467f0700;
  param_1[1] = uVar1;
  uVar1 = uRam00000001467f0708;
  param_1[2] = _DAT_1467f0700;
  param_1[3] = uVar1;
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f000000;
  *(undefined4 *)(param_1 + 5) = 0x3fc00000;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined4 *)(param_1 + 6) = 0x3a83126f;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3a83126f;
  *(undefined4 *)(param_1 + 7) = 0x3a83126f;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3a83126f;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  return param_1;
}



// FUNCTION 1438a2e00 FUN_1438a2e00 body=145 status=ok
// SIG undefined FUN_1438a2e00(void)

void FUN_1438a2e00(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined4 param_5,undefined1 param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar2 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x20) == (*(uint *)(param_1 + 0x24) & 0x3fffffff)) {
    FUN_14370c460(uVar2,(longlong *)(param_1 + 0x18),0x30);
  }
  iVar1 = *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x20) = iVar1 + 1;
  uVar2 = param_2[1];
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x30 + *(longlong *)(param_1 + 0x18));
  *puVar3 = *param_2;
  puVar3[1] = uVar2;
  uVar2 = param_3[1];
  puVar3[2] = *param_3;
  puVar3[3] = uVar2;
  *(undefined4 *)((longlong)puVar3 + 0x24) = *param_4;
  *(undefined4 *)(puVar3 + 4) = param_5;
  *(undefined1 *)(puVar3 + 5) = param_6;
  return;
}



// FUNCTION 1438a2ea0 FUN_1438a2ea0 body=329 status=ok
// SIG undefined FUN_1438a2ea0(void)

longlong FUN_1438a2ea0(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  LPVOID pvVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  
  lVar12 = (longlong)param_4;
  pvVar6 = TlsGetValue(DAT_146b7bf70);
  if (pvVar6 == (LPVOID)0x0) {
    pvVar6 = DAT_146b7bf68;
  }
  lVar7 = (**(code **)(**(longlong **)((longlong)pvVar6 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar6 + 0x58),0xe0);
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = FUN_143841d70(lVar7,0);
  }
  FUN_1438468b0(lVar7,param_1 + 0x290);
  *(float *)(lVar7 + 0x5c) = *(float *)(param_2 + 0x68) + *(float *)(param_2 + 0x68);
  uVar8 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(lVar7 + 0x70) = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(lVar7 + 0x78) = uVar8;
  *(undefined4 *)(lVar7 + 0x60) = *(undefined4 *)(param_2 + 0x98);
  *(undefined8 *)(lVar7 + 0x80) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(lVar7 + 0x88) = *(undefined8 *)(param_2 + 0x80);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(lVar7 + 0x24) = uVar3;
  *(undefined4 *)(lVar7 + 0x28) = uVar4;
  *(undefined4 *)(lVar7 + 0x2c) = uVar5;
  *(undefined4 *)(lVar7 + 0x40) = 0xffffffff;
  uVar8 = FUN_143703a50();
  uVar10 = *(uint *)(lVar7 + 0x3c) & 0x3fffffff;
  iVar11 = *(int *)(lVar7 + 0x38) + param_4;
  if (((int)uVar10 < iVar11) && ((int)uVar10 < iVar11)) {
    iVar2 = iVar11;
    if (iVar11 < (int)(uVar10 * 2)) {
      iVar2 = uVar10 * 2;
    }
    FUN_14370c310(uVar8,lVar7 + 0x30,iVar2,0x10);
  }
  puVar9 = (undefined8 *)((longlong)*(int *)(lVar7 + 0x38) * 0x10 + *(longlong *)(lVar7 + 0x30));
  if (0 < param_4) {
    param_3 = param_3 - (longlong)puVar9;
    do {
      puVar1 = (undefined8 *)(param_3 + (longlong)puVar9);
      uVar8 = puVar1[1];
      *puVar9 = *puVar1;
      puVar9[1] = uVar8;
      puVar9 = puVar9 + 2;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  *(int *)(lVar7 + 0x38) = iVar11;
  *(undefined4 *)(lVar7 + 0x50) = 0;
  return lVar7;
}



// FUNCTION 1438a2ff0 FUN_1438a2ff0 body=329 status=ok
// SIG undefined FUN_1438a2ff0(void)

longlong FUN_1438a2ff0(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  LPVOID pvVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  
  lVar12 = (longlong)param_4;
  pvVar6 = TlsGetValue(DAT_146b7bf70);
  if (pvVar6 == (LPVOID)0x0) {
    pvVar6 = DAT_146b7bf68;
  }
  lVar7 = (**(code **)(**(longlong **)((longlong)pvVar6 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar6 + 0x58),0xc0);
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = FUN_143875090(lVar7,0);
  }
  FUN_143846aa0(lVar7,param_1 + 0x370);
  uVar8 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(lVar7 + 0x70) = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(lVar7 + 0x78) = uVar8;
  *(float *)(lVar7 + 0x5c) = *(float *)(param_2 + 0x68) + *(float *)(param_2 + 0x68);
  *(undefined4 *)(lVar7 + 0x60) = *(undefined4 *)(param_2 + 0x98);
  *(undefined8 *)(lVar7 + 0x80) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(lVar7 + 0x88) = *(undefined8 *)(param_2 + 0x80);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(lVar7 + 0x24) = uVar3;
  *(undefined4 *)(lVar7 + 0x28) = uVar4;
  *(undefined4 *)(lVar7 + 0x2c) = uVar5;
  *(undefined4 *)(lVar7 + 0x40) = 0xffffffff;
  uVar8 = FUN_143703a50();
  uVar10 = *(uint *)(lVar7 + 0x3c) & 0x3fffffff;
  iVar11 = *(int *)(lVar7 + 0x38) + param_4;
  if (((int)uVar10 < iVar11) && ((int)uVar10 < iVar11)) {
    iVar2 = iVar11;
    if (iVar11 < (int)(uVar10 * 2)) {
      iVar2 = uVar10 * 2;
    }
    FUN_14370c310(uVar8,lVar7 + 0x30,iVar2,0x10);
  }
  puVar9 = (undefined8 *)((longlong)*(int *)(lVar7 + 0x38) * 0x10 + *(longlong *)(lVar7 + 0x30));
  if (0 < param_4) {
    param_3 = param_3 - (longlong)puVar9;
    do {
      puVar1 = (undefined8 *)(param_3 + (longlong)puVar9);
      uVar8 = puVar1[1];
      *puVar9 = *puVar1;
      puVar9[1] = uVar8;
      puVar9 = puVar9 + 2;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  *(int *)(lVar7 + 0x38) = iVar11;
  *(undefined4 *)(lVar7 + 0x50) = 0;
  return lVar7;
}



// FUNCTION 1438a3140 FUN_1438a3140 body=333 status=ok
// SIG undefined FUN_1438a3140(void)

undefined4 *
FUN_1438a3140(undefined4 *param_1,longlong param_2,float *param_3,undefined8 *param_4,
             undefined4 *param_5,float *param_6)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  LPVOID pvVar9;
  longlong *plVar10;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pvVar9 = TlsGetValue(DAT_146b8198c);
  if (pvVar9 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar9,"TtgetCellForPathfinding");
  }
  if (((*(char *)(param_5 + 4) != '\0') && (uVar1 = param_5[5], uVar1 != 0xffffffff)) &&
     (lVar2 = *(longlong *)((ulonglong)(uVar1 >> 0x16) * 0x100 + 8 + *(longlong *)(param_2 + 0x38)),
     lVar2 != 0)) {
    if ((int)(uVar1 & 0x3fffff) < *(int *)(*(longlong *)(lVar2 + 0x18) + 0x20)) {
      uVar8 = FUN_142fbd3f0(lVar2,*(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x18) +
                                  (ulonglong)(uVar1 & 0x3fffff) * 0x18,&local_78);
      fVar4 = *param_3;
      fVar5 = param_3[1];
      fVar6 = param_3[2];
      fVar7 = param_3[3];
      auVar3._4_4_ = -(uint)(fVar5 <= fStack_64 && fStack_74 <= fVar5);
      auVar3._0_4_ = -(uint)(fVar4 <= local_68 && local_78 <= fVar4);
      auVar3._8_4_ = -(uint)(fVar6 <= fStack_60 && fStack_70 <= fVar6);
      auVar3._12_4_ = -(uint)(fVar7 <= fStack_5c && fStack_6c <= fVar7);
      uVar8 = movmskps(uVar8,auVar3);
      if (((byte)uVar8 & 7) == 7) {
        *param_6 = fVar4;
        param_6[1] = fVar5;
        param_6[2] = fVar6;
        param_6[3] = fVar7;
        *param_1 = param_5[5];
        goto LAB_1438a3259;
      }
    }
  }
  local_58 = *param_4;
  uStack_50 = param_4[1];
  local_48 = param_4[2];
  uStack_40 = param_4[3];
  local_38 = *param_3;
  fStack_34 = param_3[1];
  fStack_30 = param_3[2];
  fStack_2c = param_3[3];
  local_28 = *param_5;
  uStack_24 = param_5[1];
  uStack_20 = param_5[2];
  uStack_1c = param_5[3];
  plVar10 = (longlong *)FUN_1412bf1c0(param_2);
  (**(code **)(*plVar10 + 0x18))(plVar10,param_1,&local_58,param_6);
LAB_1438a3259:
  if (pvVar9 != (LPVOID)0x0) {
    FUN_14370d750(pvVar9,&DAT_145b8eda0);
  }
  return param_1;
}



// FUNCTION 1438a3290 FUN_1438a3290 body=45 status=ok
// SIG undefined FUN_1438a3290(void)

longlong FUN_1438a3290(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((*(uint *)(param_1 + 0x60) != 0xffffffff) &&
     (lVar1 = *(longlong *)
               ((ulonglong)(*(uint *)(param_1 + 0x60) >> 0x16) * 0x100 +
               *(longlong *)(*(longlong *)(param_2 + 0x130) + 0x38)), lVar1 != 0)) {
    return lVar1 + 0x40;
  }
  return 0;
}



// FUNCTION 1438a32c0 FUN_1438a32c0 body=89 status=ok
// SIG undefined FUN_1438a32c0(void)

float FUN_1438a32c0(longlong param_1,uint param_2,float param_3,float param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = 0.0;
  if ((param_2 != 0xffffffff) &&
     (lVar1 = *(longlong *)((ulonglong)(param_2 >> 0x16) * 0x100 + *(longlong *)(param_1 + 0x38)),
     lVar1 != 0)) {
    fVar2 = *(float *)(*(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x68) + 0xb0);
  }
  fVar3 = 0.0;
  if (0.0 <= param_3 - fVar2) {
    fVar3 = param_3 - fVar2;
  }
  return fVar3 * param_4;
}



// FUNCTION 1438a3320 FUN_1438a3320 body=231 status=ok
// SIG undefined FUN_1438a3320(void)

ulonglong FUN_1438a3320(longlong param_1,int param_2,float param_3,float param_4)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  ulonglong uVar4;
  float fVar5;
  undefined1 local_230 [40];
  undefined1 local_208 [520];
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    do {
      lVar1 = *(longlong *)((longlong)iVar3 * 0x100 + *(longlong *)(param_1 + 0x38));
      if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x18), *(int *)(lVar1 + 0x180) == param_2))
      {
        param_3 = param_3 - *(float *)(*(longlong *)(lVar1 + 0x68) + 0xb0);
        fVar5 = 0.0;
        if (0.0 <= param_3) {
          fVar5 = param_3;
        }
        return (ulonglong)(uint)(fVar5 * param_4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x40));
  }
  FUN_1437134a0(local_230,local_208,0x200);
  Electra::FHTTPResourceRequest::URL(local_230,"Layer not found");
  iVar3 = FUN_143732300(0x4ed2fce5,local_208,"Character\\Utilities\\hkaiCharacterUtil.cpp",0x277);
  if (iVar3 != 0) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  FUN_143713520(local_230);
  return 0;
}



// FUNCTION 1438a3410 FUN_1438a3410 body=848 status=ok
// SIG undefined FUN_1438a3410(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1438a3410(float *param_1,undefined8 param_2,float *param_3,float *param_4,float *param_5
                     ,float *param_6)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  LPVOID pvVar5;
  longlong *plVar6;
  float *pfVar7;
  float fVar8;
  float local_168 [4];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  int local_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  undefined8 uStack_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  float local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined4 local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  
  pvVar5 = TlsGetValue(DAT_146b8198c);
  if (pvVar5 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar5,"TtgetFaceForPath");
  }
  cVar3 = FUN_14383f830(param_2);
  if (cVar3 == '\0') {
    *param_1 = -NAN;
    if (pvVar5 == (LPVOID)0x0) {
      return param_1;
    }
    FUN_14370d750(pvVar5,&DAT_145b8eda0);
    return param_1;
  }
  plVar6 = (longlong *)UWeapon::GetStatusEffectOriginStats(param_2);
  fVar8 = (float)FUN_1438a3320(param_2,param_5[0x11],param_5[9],param_5[10] + 0.01);
  if ((*(char *)(param_5 + 8) == '\0') || (fVar8 <= 0.0)) {
    local_158 = *(undefined8 *)param_3;
    uStack_150 = *(undefined8 *)(param_3 + 2);
    local_f8 = _DAT_1467f08d0;
    uStack_f0 = uRam00000001467f08d8;
    local_e8 = _DAT_1467f08d0;
    uStack_e0 = uRam00000001467f08d8;
    local_168[0] = 0.1;
    local_c8 = 0x3a83126f3a83126f;
    uStack_c0 = 0x3a83126f3a83126f;
    local_b8 = 0.1;
    fStack_b4 = 0.1;
    fStack_b0 = 0.1;
    fStack_ac = 0.1;
    local_d8 = -NAN;
    if (*(char *)(param_5 + 0xb) != '\0') {
      local_c8 = *(undefined8 *)(param_5 + 0xc);
      uStack_c0 = *(undefined8 *)(param_5 + 0xe);
      local_e8 = *(undefined8 *)param_4;
      uStack_e0 = *(undefined8 *)(param_4 + 2);
      local_d8 = param_5[0x10];
      local_f8 = *(undefined8 *)param_3;
      uStack_f0 = *(undefined8 *)(param_3 + 2);
    }
    local_78 = *param_3;
    fStack_74 = param_3[1];
    fStack_70 = param_3[2];
    fStack_6c = param_3[3];
    local_a8 = 0;
    local_a0 = 0;
    local_88 = 0;
    local_a4 = 1 << (SUB41(param_5[0x11],0) & 0x1f);
    local_98 = 0;
    uStack_90 = 0;
    local_68 = *param_5 * *param_4 + local_78;
    fStack_64 = param_5[1] * param_4[1] + fStack_74;
    fStack_60 = param_5[2] * param_4[2] + fStack_70;
    fStack_5c = param_5[3] * param_4[3] + fStack_6c;
    if (*(char *)(param_5 + 0xb) == '\0') {
      cVar3 = (**(code **)(*plVar6 + 0x38))(plVar6,&local_a8,&local_58);
    }
    else {
      local_b8 = *param_5;
      fStack_b4 = param_5[1];
      fStack_b0 = param_5[2];
      fStack_ac = param_5[3];
      cVar3 = FUN_1438c64a0(plVar6,param_2,&local_a8,&local_f8,&local_58);
    }
    if (cVar3 == '\0') {
LAB_1438a368b:
      local_118 = *param_3;
      fStack_114 = param_3[1];
      uStack_110 = *(undefined8 *)(param_3 + 2);
      local_144 = 1 << (SUB41(param_5[0x11],0) & 0x1f);
      local_138 = 0;
      uStack_130 = 0;
      local_108 = param_5[4];
      fStack_104 = param_5[5];
      fStack_100 = param_5[6];
      fStack_fc = param_5[7];
      local_148 = 0;
      local_140 = 0;
      local_128 = 0;
      if (*(char *)(param_5 + 0xb) == '\0') {
        pfVar7 = (float *)(**(code **)(*plVar6 + 0x18))(plVar6,local_168,&local_148,&local_158);
      }
      else {
        local_b8 = param_5[0xc];
        fStack_b4 = param_5[0xd];
        fStack_b0 = param_5[0xe];
        fStack_ac = param_5[0xf];
        pfVar7 = (float *)FUN_1438c6620(plVar6,local_168,param_2,&local_148,&local_f8,&local_158);
      }
      local_48 = *pfVar7;
    }
    else {
      local_158 = CONCAT44((fStack_64 - fStack_74) * fStack_54 + fStack_74,
                           (local_68 - local_78) * local_58 + local_78);
      uStack_150 = CONCAT44((fStack_5c - fStack_6c) * fStack_4c + fStack_6c,
                            (fStack_60 - fStack_70) * fStack_50 + fStack_70);
      if (local_48 == -NAN) goto LAB_1438a368b;
    }
    *param_6 = (float)local_158;
    param_6[1] = local_158._4_4_;
    param_6[2] = (float)uStack_150;
    param_6[3] = uStack_150._4_4_;
  }
  else {
    local_168[0] = fVar8;
    FUN_143850ae0(&local_148);
    FUN_143854e80(&local_148,param_3,fVar8,*param_5);
    local_118 = param_5[0x11];
    local_128 = *(undefined8 *)param_4;
    fStack_120 = param_4[2];
    fStack_11c = param_4[3];
    uStack_110 = *(undefined8 *)(param_5 + 0x12);
    local_108 = param_5[0x14];
    iVar4 = FUN_143854bc0(param_2,&local_148,param_6,local_168);
    local_48 = local_168[0];
    if (iVar4 == 0) {
      fVar8 = param_3[1];
      fVar1 = param_3[2];
      fVar2 = param_3[3];
      *param_6 = *param_3;
      param_6[1] = fVar8;
      param_6[2] = fVar1;
      param_6[3] = fVar2;
      *param_1 = -NAN;
      goto LAB_1438a3719;
    }
  }
  *param_1 = local_48;
LAB_1438a3719:
  if (pvVar5 != (LPVOID)0x0) {
    FUN_14370d750(pvVar5,&DAT_145b8eda0);
  }
  return param_1;
}



// FUNCTION 1438a3760 FUN_1438a3760 body=47 status=ok
// SIG undefined FUN_1438a3760(void)

void FUN_1438a3760(float *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  
  lVar5 = 0;
  if (0 < param_3) {
    do {
      lVar1 = *(longlong *)(param_2 + lVar5 * 8);
      lVar5 = lVar5 + 1;
      fVar2 = param_1[1];
      fVar3 = param_1[2];
      fVar4 = param_1[3];
      *(float *)(lVar1 + 0x20) = *(float *)(lVar1 + 0x40) * *param_1 + *(float *)(lVar1 + 0x20);
      *(float *)(lVar1 + 0x24) = *(float *)(lVar1 + 0x44) * fVar2 + *(float *)(lVar1 + 0x24);
      *(float *)(lVar1 + 0x28) = *(float *)(lVar1 + 0x48) * fVar3 + *(float *)(lVar1 + 0x28);
      *(float *)(lVar1 + 0x2c) = *(float *)(lVar1 + 0x4c) * fVar4 + *(float *)(lVar1 + 0x2c);
    } while (lVar5 < param_3);
  }
  return;
}



// FUNCTION 1438a3790 FUN_1438a3790 body=532 status=ok
// SIG undefined FUN_1438a3790(void)

undefined8 *
FUN_1438a3790(undefined8 *param_1,longlong param_2,undefined8 param_3,longlong param_4,
             float *param_5)

{
  longlong lVar1;
  longlong lVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  float *pfVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  uint local_res10 [2];
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_2 + 0x18);
    if (*(int *)(lVar2 + 0x40) == -1) {
      param_1[1] = 1;
      *param_1 = 0;
    }
    else if (*(char *)(lVar1 + 0x4c) == '\x05') {
      param_1[1] = 2;
      *param_1 = 0;
    }
    else if (*(char *)(lVar1 + 0x4c) == '\x02') {
      param_1[1] = 3;
      *param_1 = 0;
    }
    else {
      pvVar3 = TlsGetValue(DAT_146b7bf70);
      if (pvVar3 == (LPVOID)0x0) {
        pvVar3 = DAT_146b7bf68;
      }
      puVar4 = (undefined8 *)
               (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                         (*(longlong **)((longlong)pvVar3 + 0x58),0x30);
      puVar6 = (undefined8 *)0x0;
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = 0;
        *(undefined4 *)(puVar4 + 2) = 0x1ffff;
        *puVar4 = hkaiPath::vftable;
        puVar4[3] = 0;
        *(undefined4 *)(puVar4 + 4) = 0;
        *(undefined4 *)((longlong)puVar4 + 0x24) = 0x80000000;
        *(undefined1 *)(puVar4 + 5) = 0;
        puVar6 = puVar4;
      }
      pfVar5 = (float *)(param_4 + 0x50);
      fVar13 = *(float *)(param_4 + 0x20) - *(float *)(lVar2 + 0x20);
      fVar14 = *(float *)(param_4 + 0x24) - *(float *)(lVar2 + 0x24);
      fVar15 = *(float *)(param_4 + 0x28) - *(float *)(lVar2 + 0x28);
      fVar8 = *pfVar5 * fVar13;
      fVar9 = *(float *)(param_4 + 0x54) * fVar14;
      fVar10 = *(float *)(param_4 + 0x58) * fVar15;
      auVar11._0_4_ = (fVar9 + fVar8 + fVar10) * *pfVar5;
      auVar11._4_4_ = (fVar9 + fVar8 + fVar10) * *(float *)(param_4 + 0x54);
      auVar11._8_4_ = (fVar9 + fVar8 + fVar10) * *(float *)(param_4 + 0x58);
      auVar11._12_4_ = (fVar9 + fVar8 + fVar10) * *(float *)(param_4 + 0x5c);
      fVar13 = fVar13 - auVar11._0_4_;
      fVar14 = fVar14 - auVar11._4_4_;
      fVar15 = fVar15 - auVar11._8_4_;
      fVar13 = fVar13 * fVar13;
      fVar14 = fVar14 * fVar14;
      fVar15 = fVar15 * fVar15;
      fVar9 = fVar14 + fVar13 + fVar15;
      auVar12._4_4_ = fVar14 + fVar13 + fVar15;
      auVar12._0_4_ = fVar9;
      auVar12._8_4_ = fVar14 + fVar13 + fVar15;
      auVar12._12_4_ = fVar14 + fVar13 + fVar15;
      auVar12 = rsqrtps(auVar11,auVar12);
      fVar8 = auVar12._0_4_;
      fVar8 = (float)(~-(uint)(fVar9 <= 0.0) &
                     (uint)((3.0 - fVar8 * fVar9 * fVar8) * fVar8 * 0.5 * fVar9));
      if (*param_5 <= fVar8 && fVar8 != *param_5) {
        if (*(uint *)(param_4 + 0x60) == 0xffffffff) {
          local_res10[0] = 0xffffffff;
        }
        else {
          local_res10[0] = *(uint *)(param_4 + 0x60) >> 0x16;
        }
        if (*(int *)(lVar1 + 0x30) != 0) {
          pfVar5 = (float *)(*(longlong *)(lVar1 + 0x28) + 0x10);
        }
        local_38 = *pfVar5;
        fStack_34 = pfVar5[1];
        fStack_30 = pfVar5[2];
        fStack_2c = pfVar5[3];
        FUN_1438a2e00(puVar6,param_4 + 0x20,&local_38,local_res10,0,0);
      }
      FUN_1438888f0(lVar1 + 0x28,puVar6);
      if ((*(char *)(lVar1 + 0x4c) == '\x04') || (uVar7 = 1, *(int *)(lVar1 + 0x44) < 0)) {
        uVar7 = 0;
      }
      *param_1 = puVar6;
      *(undefined4 *)(param_1 + 1) = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar7;
    }
    return param_1;
  }
  param_1[1] = 4;
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1438a39b0 FUN_1438a39b0 body=335 status=ok
// SIG undefined FUN_1438a39b0(void)

undefined8 * FUN_1438a39b0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  LPVOID pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  if (lVar1 == 0) {
    param_1[1] = 4;
    *param_1 = 0;
    return param_1;
  }
  if (*(int *)(*(longlong *)(param_2 + 0x18) + 0x40) == -1) {
    param_1[1] = 1;
    *param_1 = 0;
    return param_1;
  }
  if (*(char *)(lVar1 + 0x5c) == '\x05') {
    param_1[1] = 2;
    *param_1 = 0;
    return param_1;
  }
  if (*(char *)(lVar1 + 0x5c) != '\x02') {
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    puVar3 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar2 + 0x58),0x30);
    puVar4 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 2) = 0x1ffff;
      *puVar3 = hkaiPath::vftable;
      puVar3[3] = 0;
      *(undefined4 *)(puVar3 + 4) = 0;
      *(undefined4 *)((longlong)puVar3 + 0x24) = 0x80000000;
      *(undefined1 *)(puVar3 + 5) = 0;
      puVar4 = puVar3;
    }
    FUN_1438888f0(lVar1 + 0x38,puVar4,0x3dcccccd);
    *(uint *)((longlong)param_1 + 0xc) = ~*(uint *)(lVar1 + 0x54) >> 0x1f;
    *param_1 = puVar4;
    *(undefined4 *)(param_1 + 1) = 0;
    return param_1;
  }
  param_1[1] = 3;
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1438a3b00 FUN_1438a3b00 body=56 status=ok
// SIG undefined FUN_1438a3b00(void)

void FUN_1438a3b00(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = *(undefined4 *)(param_1 + 0x98);
  *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 0x88);
  param_2[1] = 1 << ((byte)*(undefined4 *)(param_1 + 200) & 0x1f);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_2 + 10) = uVar1;
  return;
}



// FUNCTION 1438a3b40 FUN_1438a3b40 body=44 status=ok
// SIG undefined FUN_1438a3b40(void)

void FUN_1438a3b40(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x98);
  *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 0x88);
  param_2[1] = 1 << ((byte)*(undefined4 *)(param_1 + 200) & 0x1f);
  return;
}



// FUNCTION 1438a3b70 FUN_1438a3b70 body=964 status=ok
// SIG undefined FUN_1438a3b70(void)

void FUN_1438a3b70(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,int param_6)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  LPVOID pvVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  float fVar19;
  longlong local_f8;
  uint local_f0;
  uint local_ec;
  longlong local_e8;
  uint local_e0;
  uint local_dc;
  LPVOID local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined4 local_84;
  int local_80;
  undefined1 local_7c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  
  pvVar9 = TlsGetValue(DAT_146b8198c);
  local_d8 = pvVar9;
  if (pvVar9 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar9,"TtutilPathReq");
  }
  FUN_1438a2d90(&local_a8);
  iVar8 = param_6;
  local_64 = *(undefined4 *)(param_3 + 200);
  local_a8 = *(undefined8 *)CONCAT44(param_5._4_4_,(undefined4)param_5);
  uStack_a0 = ((undefined8 *)CONCAT44(param_5._4_4_,(undefined4)param_5))[1];
  local_60 = *(undefined8 *)(param_3 + 0x80);
  local_58 = *(undefined4 *)(param_3 + 0x98);
  local_84 = *(undefined4 *)(param_3 + 0x68);
  local_c8 = *(undefined4 *)(param_3 + 0x50);
  uStack_c4 = *(undefined4 *)(param_3 + 0x54);
  uStack_c0 = *(undefined4 *)(param_3 + 0x58);
  uStack_bc = *(undefined4 *)(param_3 + 0x5c);
  local_80 = param_6;
  local_88 = 1;
  local_7c = 0;
  local_98 = local_a8;
  uStack_90 = uStack_a0;
  FUN_1438a3410(&param_5,param_1,param_3 + 0x20,&local_c8,&local_a8,&local_b8);
  plVar1 = (longlong *)(param_4 + 0x30);
  lVar16 = 0;
  local_dc = 0x80000000;
  local_e8 = 0;
  local_e0 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 0x80000000;
  if (0 < (int)*(uint *)(param_4 + 0x38)) {
    uVar15 = (ulonglong)*(uint *)(param_4 + 0x38);
    do {
      FUN_1438a3410(&param_6,param_1,*plVar1 + lVar16,param_2,&local_a8,&local_c8);
      iVar18 = param_6;
      if (param_6 != -1) {
        if (local_e0 == (local_dc & 0x3fffffff)) {
          FUN_14370c460(&PTR_vftable_1467f0638,&local_e8,4);
        }
        *(int *)(local_e8 + (longlong)(int)local_e0 * 4) = iVar18;
        local_e0 = local_e0 + 1;
        if (local_f0 == (local_ec & 0x3fffffff)) {
          FUN_14370c460(&PTR_vftable_1467f0638,&local_f8,0x10);
        }
        puVar10 = (undefined4 *)((longlong)(int)local_f0 * 0x10 + local_f8);
        *puVar10 = local_c8;
        puVar10[1] = uStack_c4;
        puVar10[2] = uStack_c0;
        puVar10[3] = uStack_bc;
        local_f0 = local_f0 + 1;
      }
      lVar16 = lVar16 + 0x10;
      uVar15 = uVar15 - 1;
      pvVar9 = local_d8;
    } while (uVar15 != 0);
  }
  uVar13 = local_e0;
  lVar16 = local_e8;
  uVar7 = (undefined4)param_5;
  *(undefined4 *)(param_4 + 0x20) = local_b8;
  *(undefined4 *)(param_4 + 0x24) = uStack_b4;
  *(undefined4 *)(param_4 + 0x28) = uStack_b0;
  *(undefined4 *)(param_4 + 0x2c) = uStack_ac;
  *(undefined4 *)(param_4 + 0x40) = (undefined4)param_5;
  *(undefined4 *)(param_4 + 0x50) = 0;
  uVar11 = FUN_143703a50();
  uVar12 = *(uint *)(param_4 + 0x54) & 0x3fffffff;
  iVar18 = *(int *)(param_4 + 0x50) + uVar13;
  if (((int)uVar12 < iVar18) && ((int)uVar12 < iVar18)) {
    iVar3 = iVar18;
    if (iVar18 < (int)(uVar12 * 2)) {
      iVar3 = uVar12 * 2;
    }
    FUN_14370c310(uVar11,param_4 + 0x48,iVar3,4);
  }
  uVar12 = local_f0;
  lVar17 = local_f8;
  puVar10 = (undefined4 *)(*(longlong *)(param_4 + 0x48) + (longlong)*(int *)(param_4 + 0x50) * 4);
  lVar14 = (longlong)(int)uVar13;
  if (0 < (int)uVar13) {
    lVar16 = lVar16 - (longlong)puVar10;
    do {
      *puVar10 = *(undefined4 *)(lVar16 + (longlong)puVar10);
      puVar10 = puVar10 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  lVar16 = (longlong)(int)local_f0;
  *(int *)(param_4 + 0x50) = iVar18;
  *(undefined4 *)(param_4 + 0x38) = 0;
  uVar11 = FUN_143703a50();
  uVar13 = *(uint *)(param_4 + 0x3c) & 0x3fffffff;
  iVar18 = *(int *)(param_4 + 0x38) + uVar12;
  if (((int)uVar13 < iVar18) && ((int)uVar13 < iVar18)) {
    iVar3 = iVar18;
    if (iVar18 < (int)(uVar13 * 2)) {
      iVar3 = uVar13 * 2;
    }
    FUN_14370c310(uVar11,plVar1,iVar3,0x10);
  }
  puVar10 = (undefined4 *)((longlong)*(int *)(param_4 + 0x38) * 0x10 + *plVar1);
  if (0 < (int)uVar12) {
    lVar17 = lVar17 - (longlong)puVar10;
    do {
      puVar2 = (undefined4 *)(lVar17 + (longlong)puVar10);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      *puVar10 = *puVar2;
      puVar10[1] = uVar4;
      puVar10[2] = uVar5;
      puVar10[3] = uVar6;
      puVar10 = puVar10 + 4;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  *(int *)(param_4 + 0x38) = iVar18;
  fVar19 = (float)FUN_1438a32c0(param_1,uVar7,*(undefined4 *)(param_3 + 0x68),iVar8);
  local_f0 = 0;
  *(float *)(param_4 + 0x5c) = fVar19 * 2.0;
  if (-1 < (int)local_ec) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_f8,0x10,local_ec & 0x3fffffff);
  }
  local_f8 = 0;
  local_ec = 0x80000000;
  local_e0 = 0;
  if (-1 < (int)local_dc) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_e8,4,local_dc & 0x3fffffff);
  }
  local_e8 = 0;
  local_dc = 0x80000000;
  if (pvVar9 != (LPVOID)0x0) {
    FUN_14370d750(pvVar9,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438a3f40 FUN_1438a3f40 body=861 status=ok
// SIG undefined FUN_1438a3f40(void)

void FUN_1438a3f40(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  LPVOID pvVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  longlong local_b8;
  uint local_b0;
  uint local_ac;
  longlong local_a8;
  uint local_a0;
  uint local_9c;
  int local_98;
  undefined4 local_94 [3];
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pvVar6 = TlsGetValue(DAT_146b8198c);
  if (pvVar6 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar6,"TtutilPathReq");
  }
  plVar7 = (longlong *)FUN_1412bf1c0(param_1);
  lVar14 = 0;
  if (plVar7 == (longlong *)0x0) {
    *(undefined4 *)(param_3 + 0x50) = 0;
    *(undefined4 *)(param_3 + 0x38) = 0;
  }
  else {
    local_68 = DAT_1467f08d0;
    uStack_64 = uRam00000001467f08d4;
    uStack_60 = uRam00000001467f08d8;
    uStack_5c = uRam00000001467f08dc;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    local_84 = 0xffffffff;
    local_80 = 0;
    FUN_1438a3b00(param_2,&local_88);
    local_58 = *param_4;
    uStack_54 = param_4[1];
    uStack_50 = param_4[2];
    uStack_4c = param_4[3];
    (**(code **)(*plVar7 + 0x18))(plVar7,local_94,&local_88,&local_38);
    lVar15 = (longlong)*(int *)(param_3 + 0x38);
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 0x80000000;
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 0x80000000;
    if (0 < lVar15) {
      do {
        puVar10 = (undefined4 *)(lVar14 + *(longlong *)(param_3 + 0x30));
        local_68 = *puVar10;
        uStack_64 = puVar10[1];
        uStack_60 = puVar10[2];
        uStack_5c = puVar10[3];
        (**(code **)(*plVar7 + 0x18))(plVar7,&local_98,&local_88,&local_48);
        if (local_98 != -1) {
          if (local_a0 == (local_9c & 0x3fffffff)) {
            FUN_14370c460(&PTR_vftable_1467f0638,&local_a8,4);
          }
          *(int *)(local_a8 + (longlong)(int)local_a0 * 4) = local_98;
          local_a0 = local_a0 + 1;
          if (local_b0 == (local_ac & 0x3fffffff)) {
            FUN_14370c460(&PTR_vftable_1467f0638,&local_b8,0x10);
          }
          puVar8 = (undefined8 *)((longlong)(int)local_b0 * 0x10 + local_b8);
          *puVar8 = local_48;
          puVar8[1] = uStack_40;
          local_b0 = local_b0 + 1;
        }
        lVar14 = lVar14 + 0x10;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    uVar12 = local_a0;
    lVar14 = local_a8;
    *(undefined4 *)(param_3 + 0x20) = local_38;
    *(undefined4 *)(param_3 + 0x24) = uStack_34;
    *(undefined4 *)(param_3 + 0x28) = uStack_30;
    *(undefined4 *)(param_3 + 0x2c) = uStack_2c;
    *(undefined4 *)(param_3 + 0x40) = local_94[0];
    *(undefined4 *)(param_3 + 0x50) = 0;
    uVar9 = FUN_143703a50();
    uVar11 = *(uint *)(param_3 + 0x54) & 0x3fffffff;
    iVar16 = *(int *)(param_3 + 0x50) + uVar12;
    if (((int)uVar11 < iVar16) && ((int)uVar11 < iVar16)) {
      iVar2 = iVar16;
      if (iVar16 < (int)(uVar11 * 2)) {
        iVar2 = uVar11 * 2;
      }
      FUN_14370c310(uVar9,param_3 + 0x48,iVar2,4);
    }
    uVar11 = local_b0;
    lVar15 = local_b8;
    puVar10 = (undefined4 *)(*(longlong *)(param_3 + 0x48) + (longlong)*(int *)(param_3 + 0x50) * 4)
    ;
    lVar13 = (longlong)(int)uVar12;
    if (0 < (int)uVar12) {
      lVar14 = lVar14 - (longlong)puVar10;
      do {
        *puVar10 = *(undefined4 *)(lVar14 + (longlong)puVar10);
        puVar10 = puVar10 + 1;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    *(int *)(param_3 + 0x50) = iVar16;
    lVar14 = (longlong)(int)local_b0;
    *(undefined4 *)(param_3 + 0x38) = 0;
    uVar9 = FUN_143703a50();
    uVar12 = *(uint *)(param_3 + 0x3c) & 0x3fffffff;
    iVar16 = *(int *)(param_3 + 0x38) + uVar11;
    if (((int)uVar12 < iVar16) && ((int)uVar12 < iVar16)) {
      iVar2 = iVar16;
      if (iVar16 < (int)(uVar12 * 2)) {
        iVar2 = uVar12 * 2;
      }
      FUN_14370c310(uVar9,param_3 + 0x30,iVar2,0x10);
    }
    puVar10 = (undefined4 *)
              ((longlong)*(int *)(param_3 + 0x38) * 0x10 + *(longlong *)(param_3 + 0x30));
    if (0 < (int)uVar11) {
      lVar15 = lVar15 - (longlong)puVar10;
      do {
        puVar1 = (undefined4 *)(lVar15 + (longlong)puVar10);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *puVar10 = *puVar1;
        puVar10[1] = uVar3;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
        puVar10 = puVar10 + 4;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    *(int *)(param_3 + 0x38) = iVar16;
    local_b0 = 0;
    if (-1 < (int)local_ac) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_b8,0x10,local_ac & 0x3fffffff);
    }
    local_b8 = 0;
    local_ac = 0x80000000;
    local_a0 = 0;
    if (-1 < (int)local_9c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_a8,4,local_9c & 0x3fffffff);
    }
    local_a8 = 0;
    local_9c = 0x80000000;
  }
  if (pvVar6 != (LPVOID)0x0) {
    FUN_14370d750(pvVar6,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438a42a0 FUN_1438a42a0 body=69 status=ok
// SIG undefined FUN_1438a42a0(void)

void FUN_1438a42a0(float *param_1,uint param_2,int param_3)

{
  float fVar1;
  
  if ((int)(param_2 >> 2) < (int)-(param_3 - param_2)) {
    fVar1 = *param_1;
    *param_1 = fVar1 * 1.05;
    if (1.0 < fVar1 * 1.05) {
      *param_1 = 1.0;
      return;
    }
  }
  else if ((int)(param_2 >> 2) < (int)(param_3 - param_2)) {
    *param_1 = *param_1 * 0.952381;
  }
  return;
}



// FUNCTION 1438a42f0 FUN_1438a42f0 body=970 status=ok
// SIG undefined FUN_1438a42f0(void)

void FUN_1438a42f0(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  LPVOID pvVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 local_2e8;
  uint local_2e0;
  uint local_2dc;
  undefined8 local_2d8;
  uint local_2d0;
  uint local_2cc;
  undefined **local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined8 local_2b0;
  uint local_2a8;
  uint local_2a4;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined4 local_280;
  uint local_27c;
  undefined8 local_278;
  undefined4 local_270;
  uint local_26c;
  undefined8 local_268;
  undefined4 local_260;
  uint local_25c;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8 [2];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  longlong lStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [272];
  
  pvVar6 = TlsGetValue(DAT_146b8198c);
  if (pvVar6 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar6,"TtAvoidanceSolver");
  }
  local_2a8 = *(uint *)(param_1 + 0x20);
  local_2b0 = *(undefined8 *)(param_1 + 0x18);
  iVar8 = 0;
  puVar9 = *(undefined8 **)(param_1 + 0x28);
  local_2a4 = local_2a8 | 0x80000000;
  local_2c0 = 0;
  local_2b8 = 0x1ffff;
  local_2c8 = hkaiAvoidancePairProperties::vftable;
  FUN_1438a26a0(&local_288);
  local_208 = *(undefined4 *)(param_1 + 8);
  uStack_204 = local_208;
  uStack_200 = local_208;
  uStack_1fc = local_208;
  if (0 < *(int *)(param_1 + 0x30)) {
    do {
      local_1e8 = *puVar9;
      uStack_1e0 = puVar9[1];
      local_1d8 = puVar9[2];
      uStack_1d0 = puVar9[3];
      uVar7 = puVar9[4];
      uVar1 = puVar9[5];
      local_1b8 = puVar9[6];
      uStack_1b0 = puVar9[7];
      local_1a8 = puVar9[8];
      uStack_1a0 = puVar9[9];
      local_198 = puVar9[10];
      uStack_190 = puVar9[0xb];
      local_188 = puVar9[0xc];
      lStack_180 = puVar9[0xd];
      local_178 = puVar9[0xe];
      uStack_170 = puVar9[0xf];
      local_168 = puVar9[0x10];
      uStack_160 = puVar9[0x11];
      local_2d8 = puVar9[0x12];
      local_2e8 = puVar9[0x13];
      uVar2 = puVar9[0x14];
      uStack_140 = puVar9[0x15];
      local_138 = *(undefined4 *)(puVar9 + 0x16);
      uStack_134 = *(undefined4 *)((longlong)puVar9 + 0xb4);
      uStack_130 = *(undefined4 *)(puVar9 + 0x17);
      uStack_12c = *(undefined4 *)((longlong)puVar9 + 0xbc);
      local_148._0_4_ = (uint)uVar2;
      local_1c8._0_4_ = (undefined4)uVar7;
      local_1c8._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      uStack_1c0._0_4_ = (undefined4)uVar1;
      uStack_1c0._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
      local_2cc = (uint)local_148 | 0x80000000;
      local_2d0 = (uint)local_148;
      local_148._4_4_ = (uint)(uVar2 >> 0x20);
      local_2e0 = local_148._4_4_;
      local_2dc = local_148._4_4_ | 0x80000000;
      local_298 = (undefined4)local_1c8;
      uStack_294 = local_1c8._4_4_;
      uStack_290 = (undefined4)uStack_1c0;
      uStack_28c = uStack_1c0._4_4_;
      local_1c8 = uVar7;
      uStack_1c0 = uVar1;
      local_158 = local_2d8;
      uStack_150 = local_2e8;
      local_148 = uVar2;
      FUN_1438a2cd0(&local_288,uVar2 & 0xffffffff,lStack_180 + 0x20,&local_298);
      FUN_1438a2020(&local_1e8,*(undefined8 *)(param_1 + 0x10),uStack_140 & 0xffffffff,
                    uStack_140._4_4_,&local_2d8,&local_2e8,&local_2c8,local_128,&local_288);
      iVar5 = FUN_1438a1730(&local_208,&local_298,local_128,&local_218,local_1f8);
      puVar3 = (undefined4 *)CONCAT44(uStack_12c,uStack_130);
      local_228 = local_1f8[0];
      uVar7 = local_228;
      uStack_220._0_4_ = (undefined4)local_1f8[1];
      uVar4 = (undefined4)uStack_220;
      uStack_220 = (ulonglong)CONCAT14(iVar5 < 0,(undefined4)uStack_220) | 0x3f00000000000000;
      local_228._0_4_ = (undefined4)local_1f8[0];
      local_228._4_4_ = (undefined4)((ulonglong)local_1f8[0] >> 0x20);
      *puVar3 = (undefined4)local_228;
      puVar3[1] = local_228._4_4_;
      puVar3[2] = uVar4;
      puVar3[3] = uStack_220._4_4_;
      puVar3[4] = local_218;
      puVar3[5] = uStack_214;
      puVar3[6] = uStack_210;
      puVar3[7] = uStack_20c;
      local_228 = uVar7;
      uVar7 = FUN_143703a50();
      local_2e0 = 0;
      if (-1 < (int)local_2dc) {
        FUN_143702e10(uVar7,local_2e8,8,local_2dc & 0x3fffffff);
      }
      local_2e8 = 0;
      local_2dc = 0x80000000;
      uVar7 = FUN_143703a50();
      local_2d0 = 0;
      if (-1 < (int)local_2cc) {
        FUN_143702e10(uVar7,local_2d8,8,local_2cc & 0x3fffffff);
      }
      iVar8 = iVar8 + 1;
      local_2d8 = 0;
      local_2cc = 0x80000000;
      puVar9 = puVar9 + 0x18;
    } while (iVar8 < *(int *)(param_1 + 0x30));
  }
  pvVar6 = TlsGetValue(DAT_146b8198c);
  if (pvVar6 != (LPVOID)0x0) {
    FUN_14370d750(pvVar6,&DAT_145b8eda0);
  }
  local_260 = 0;
  if (-1 < (int)local_25c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_268,0x50,local_25c & 0x3fffffff);
  }
  local_268 = 0;
  local_25c = 0x80000000;
  local_270 = 0;
  if (-1 < (int)local_26c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_278,0x20,local_26c & 0x3fffffff);
  }
  local_278 = 0;
  local_26c = 0x80000000;
  local_280 = 0;
  if (-1 < (int)local_27c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_288,0x20,local_27c & 0x3fffffff);
  }
  local_288 = 0;
  local_27c = 0x80000000;
  local_2c8 = hkaiAvoidancePairProperties::vftable;
  uVar7 = FUN_143703a50();
  local_2a8 = 0;
  if (-1 < (int)local_2a4) {
    FUN_143702e10(uVar7,local_2b0,0xc,local_2a4 & 0x3fffffff);
  }
  local_2b0 = 0;
  local_2a4 = 0x80000000;
  FUN_14370c000(&local_2c8);
  return;
}



// FUNCTION 1438a46c0 FUN_1438a46c0 body=422 status=ok
// SIG undefined FUN_1438a46c0(void)

void FUN_1438a46c0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  LPVOID pvVar5;
  longlong lVar6;
  LPVOID pvVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong local_res18;
  
  pvVar5 = TlsGetValue(DAT_146b8198c);
  if (pvVar5 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar5,"TtBehaviorCalcVelocities");
  }
  iVar1 = *(int *)(param_1 + 0x28);
  lVar10 = 0;
  local_res18 = *(longlong *)(param_1 + 0x30);
  iVar9 = *(int *)(param_1 + 0x38);
  if (0 < (longlong)iVar1) {
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x20) + lVar10 * 8);
      iVar4 = (**(code **)(*plVar2 + 0x70))(plVar2);
      iVar8 = 0;
      if (0 < iVar4) {
        do {
          lVar6 = (**(code **)(*plVar2 + 0x78))(plVar2,iVar8);
          if (*(int *)(lVar6 + 0xb4) != 7) {
            cVar3 = (**(code **)(*plVar2 + 0xc0))(plVar2);
            if (cVar3 == '\0') {
              FUN_14384b4b0(plVar2[4],lVar6);
            }
            else {
              FUN_14384b560();
            }
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar4);
      }
      pvVar7 = TlsGetValue(DAT_146b8198c);
      if (pvVar7 != (LPVOID)0x0) {
        FUN_14370d5c0(pvVar7,"TtcalcVelocities");
      }
      iVar4 = (**(code **)(*plVar2 + 0x18))
                        (plVar2,*(undefined4 *)(param_1 + 0x3c),local_res18,iVar9);
      iVar9 = iVar9 - iVar4;
      local_res18 = local_res18 + (longlong)iVar4 * 0x90;
      if (pvVar7 != (LPVOID)0x0) {
        FUN_14370d750(pvVar7,&DAT_145b8eda0);
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar1);
  }
  thunk_FUN_1438ac3b0(param_1 + -0x20);
  if (pvVar5 == (LPVOID)0x0) {
    return;
  }
  FUN_14370d750(pvVar5,&DAT_145b8eda0);
  return;
}



// FUNCTION 1438a4870 FUN_1438a4870 body=544 status=ok
// SIG undefined FUN_1438a4870(void)

uint * FUN_1438a4870(longlong *param_1,uint *param_2,int *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint *puVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  longlong local_48;
  int local_40;
  uint local_3c;
  
  plVar1 = param_1 + 2;
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(plVar1);
  }
  iVar4 = *param_3;
  uVar14 = iVar4 * -0x61c8864f;
  uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | iVar4 * -0x4f000000;
  uVar9 = (ulonglong)(*(uint *)(param_1 + 3) & uVar14);
  puVar11 = (uint *)(*plVar1 + uVar9 * 8);
  if (-1 < *(int *)(*plVar1 + 4 + uVar9 * 8)) {
    do {
      if (*(int *)(*param_1 + (longlong)(int)puVar11[1] * 0x18) == iVar4) {
        *param_2 = puVar11[1];
        goto LAB_1438a4a65;
      }
      lVar6 = *plVar1;
      uVar9 = ((longlong)puVar11 - lVar6 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar11 = (uint *)(lVar6 + uVar9 * 8);
    } while (-1 < *(int *)(lVar6 + 4 + uVar9 * 8));
  }
  uVar5 = *(uint *)(param_1 + 1);
  *puVar11 = uVar14;
  puVar11[1] = uVar5;
  uVar7 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar7,param_1);
  }
  lVar6 = *param_1 + (longlong)(int)param_1[1] * 0x18;
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 8) = 0;
    *(undefined4 *)(lVar6 + 0x10) = 0;
    *(undefined4 *)(lVar6 + 0x14) = 0x80000000;
  }
  local_48 = 0;
  local_40 = 0;
  local_3c = 0x80000000;
  piVar3 = (int *)(*param_1 + (longlong)(int)param_1[1] * 0x18);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  *piVar3 = *param_3;
  FUN_14383a8d0(*param_4,&local_48);
  iVar4 = local_40;
  lVar6 = local_48;
  plVar2 = (longlong *)(piVar3 + 2);
  if ((int)(piVar3[5] & 0x3fffffffU) < local_40) {
    FUN_14370c310(&PTR_vftable_1467f0638,plVar2,local_40,8);
  }
  iVar12 = iVar4;
  if (piVar3[4] < iVar4) {
    iVar12 = piVar3[4];
  }
  FUN_143738e40(*plVar2,lVar6,iVar12);
  puVar8 = (undefined8 *)(*plVar2 + (longlong)iVar12 * 8);
  lVar10 = (longlong)(iVar4 - iVar12);
  if (0 < iVar4 - iVar12) {
    lVar13 = (longlong)iVar12 * 8 - (longlong)puVar8;
    do {
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = *(undefined8 *)(lVar13 + lVar6 + (longlong)puVar8);
      }
      puVar8 = puVar8 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  piVar3[4] = iVar4;
  local_40 = 0;
  if (-1 < (int)local_3c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_48,8,local_3c & 0x3fffffff);
  }
  *param_2 = uVar5;
LAB_1438a4a65:
  param_2[1] = (uint)((longlong)puVar11 - *plVar1 >> 3);
  return param_2;
}



// FUNCTION 1438a4a90 FUN_1438a4a90 body=215 status=ok
// SIG undefined FUN_1438a4a90(void)

void FUN_1438a4a90(longlong *param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint *puVar3;
  longlong lVar4;
  
  thunk_FUN_143734820(param_1 + 2);
  uVar1 = FUN_143703a50();
  iVar2 = (int)param_1[1] + -1;
  lVar4 = (longlong)iVar2;
  if (-1 < iVar2) {
    puVar3 = (uint *)(*param_1 + 0x14 + lVar4 * 0x18);
    do {
      puVar3[-1] = 0;
      if (-1 < (int)*puVar3) {
        FUN_143702e10(&PTR_vftable_1467f0638,*(undefined8 *)(puVar3 + -3),8,*puVar3 & 0x3fffffff);
      }
      puVar3[-3] = 0;
      puVar3[-2] = 0;
      *puVar3 = 0x80000000;
      puVar3 = puVar3 + -6;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar1,*param_1,0x18,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  return;
}



// FUNCTION 1438a4b70 FUN_1438a4b70 body=46 status=ok
// SIG undefined FUN_1438a4b70(void)

undefined8 FUN_1438a4b70(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 8;
  if (8 < param_3 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_3 * 2);
  }
  FUN_143854a20();
  return param_2;
}



// FUNCTION 1438a4ba0 FUN_1438a4ba0 body=2845 status=ok
// SIG undefined FUN_1438a4ba0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438a4ba0(longlong param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  LPVOID pvVar7;
  longlong lVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  undefined8 *puVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  int *piVar22;
  longlong lVar23;
  undefined4 local_res18 [2];
  char local_res20 [8];
  uint local_178 [2];
  longlong local_170;
  uint local_168;
  uint local_164;
  longlong local_160;
  uint local_158;
  uint local_154;
  int local_150;
  longlong local_148;
  longlong local_140;
  int local_138;
  uint local_134;
  int local_130;
  int local_128;
  uint local_124;
  undefined8 local_120;
  undefined4 local_118;
  uint local_114;
  uint local_108;
  int local_104;
  uint *local_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [16];
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  int local_c0 [2];
  longlong local_b8;
  uint *local_b0;
  LPVOID local_a8;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  pvVar7 = TlsGetValue(DAT_146b8198c);
  local_a8 = pvVar7;
  if (pvVar7 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar7,"TtthreadSafeResetClearanceFloodFill");
  }
  local_170 = 0;
  local_168 = 0;
  local_164 = 0x80000000;
  local_160 = 0;
  local_158 = 0;
  local_154 = 0x80000000;
  local_150 = 0;
  local_140 = 0;
  local_138 = 0;
  local_134 = 0x80000000;
  local_130 = 0;
  FUN_14370c310(&PTR_vftable_1467f0638,&local_170,0x20);
  local_168 = 0x20;
  FUN_1438a4b70(&local_160,local_res18,0x20);
  FUN_1438a4b70(&local_140,local_res18,0x20);
  lVar15 = *(longlong *)((longlong)*param_2 * 0x100 + *(longlong *)(param_1 + 0x38));
  local_120 = 0;
  local_118 = 0;
  local_114 = 0x80000000;
  local_b8 = lVar15;
  FUN_14383a8d0(lVar15,&local_120);
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 0x80000000;
  FUN_143734b10(local_d8);
  local_res18[0] = FUN_14383f750(param_1,*(undefined4 *)(*(longlong *)(lVar15 + 0x18) + 0x180));
  local_b0 = (uint *)param_3[1];
  local_100 = (uint *)*param_3;
  local_58 = local_res18[0];
  uStack_54 = local_res18[0];
  uStack_50 = local_res18[0];
  uStack_4c = local_res18[0];
  if (local_100 != local_b0) {
    do {
      uVar1 = *local_100;
      local_168 = 0;
      FUN_143729ad0(&local_160);
      local_178[0] = uVar1;
      FUN_143852340(lVar15,local_178,&local_58,&local_78);
      iVar16 = *param_2;
      if (local_168 == (local_164 & 0x3fffffff)) {
        FUN_14370c460(&PTR_vftable_1467f0638,&local_170,4);
      }
      *(uint *)(local_170 + (longlong)(int)local_168 * 4) = iVar16 << 0x16 | uVar1;
      local_168 = local_168 + 1;
      lVar14 = local_160;
      pvVar7 = local_a8;
      while (local_a8 = pvVar7, local_168 != 0) {
        local_168 = local_168 - 1;
        uVar19 = local_158 - 1;
        uVar1 = *(uint *)(local_170 + (longlong)(int)local_168 * 4);
        uVar10 = local_158;
        if (0 < (int)uVar19) {
          uVar10 = uVar1 * -0x61c8864f;
          uVar11 = (uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                   uVar1 * -0x4f000000) & uVar19;
          uVar12 = *(uint *)(lVar14 + (longlong)(int)uVar11 * 4);
          while ((uVar10 = local_158, uVar12 != 0xffffffff && (uVar10 = uVar11, uVar12 != uVar1))) {
            uVar11 = uVar11 + 1 & uVar19;
            uVar12 = *(uint *)(lVar14 + (longlong)(int)uVar11 * 4);
          }
        }
        if ((int)uVar19 < (int)uVar10) {
          local_178[0] = uVar1 >> 0x16;
          lVar14 = *(longlong *)((ulonglong)local_178[0] * 0x100 + *(longlong *)(param_1 + 0x38));
          local_148 = lVar14;
          if (lVar14 == lVar15) {
            puVar18 = &local_120;
          }
          else {
            local_f8 = lVar14;
            FUN_1438a4870(&local_e8,local_c0,local_178,&local_f8);
            puVar18 = (undefined8 *)(local_e8 + ((longlong)local_c0[0] * 3 + 1) * 8);
          }
          uVar10 = uVar1 & 0x3fffff;
          local_178[0] = uVar10;
          FUN_143839060(*(undefined8 *)(lVar14 + 0x18),local_res18,local_178,&local_108,&local_128);
          lVar15 = local_148;
          if (((char)local_res18[0] != '\0') &&
             (lVar14 = lVar15, uVar19 = local_108, (int)local_108 < local_128)) {
            do {
              local_178[0] = uVar19;
              FUN_14383aa60(lVar15,puVar18,local_178);
              uVar19 = uVar19 + 1;
            } while ((int)uVar19 < local_128);
          }
          local_178[0] = uVar10;
          FUN_14383aa60(lVar14,puVar18,local_178);
          lVar23 = (longlong)(int)uVar10;
          piVar22 = (int *)(lVar23 * 0x10 + *(longlong *)(*(longlong *)(lVar14 + 0x18) + 0x18));
          iVar16 = *piVar22;
          lVar15 = local_160;
          if (iVar16 < (short)piVar22[2] + iVar16) {
            do {
              lVar8 = (longlong)iVar16;
              lVar3 = *(longlong *)(*(longlong *)(lVar14 + 0x18) + 0x28);
              uVar19 = *(uint *)(lVar3 + 0xc + lVar8 * 0x14);
              if (((*(byte *)(lVar3 + 0x10 + lVar8 * 0x14) & 0x40) == 0) && (uVar19 != 0xffffffff))
              {
                uVar19 = *(int *)(*(longlong *)(lVar14 + 0x18) + 0x17c) << 0x16 | uVar19 & 0x3fffff;
              }
              if (*(int *)(lVar3 + 8 + lVar8 * 0x14) != -1) {
                uVar11 = local_158 - 1;
                uVar12 = local_158;
                if (0 < (int)uVar11) {
                  uVar12 = uVar19 * -0x61c8864f;
                  uVar13 = (uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                           uVar19 * -0x4f000000) & uVar11;
                  uVar2 = *(uint *)(lVar15 + (longlong)(int)uVar13 * 4);
                  while ((uVar12 = local_158, uVar2 != 0xffffffff &&
                         (uVar12 = uVar13, uVar2 != uVar19))) {
                    uVar13 = uVar13 + 1 & uVar11;
                    uVar2 = *(uint *)(lVar15 + (longlong)(int)uVar13 * 4);
                  }
                }
                if ((int)uVar11 < (int)uVar12) {
                  local_f8 = CONCAT44(uRam00000001467f06e4,_DAT_1467f06e0);
                  uStack_f0 = uRam00000001467f06e8;
                  uStack_ec = DAT_1467f06ec;
                  local_178[0] = uVar19 & 0x3fffff;
                  uVar6 = FUN_143852340(local_148,local_178,&local_f8,&local_98);
                  auVar4._4_4_ = -(uint)(fStack_94 <= fStack_64 && fStack_74 <= fStack_84);
                  auVar4._0_4_ = -(uint)(local_98 <= local_68 && local_78 <= local_88);
                  auVar4._8_4_ = -(uint)(fStack_90 <= fStack_60 && fStack_70 <= fStack_80);
                  auVar4._12_4_ = -(uint)(fStack_8c <= fStack_5c && fStack_6c <= fStack_7c);
                  uVar6 = movmskps(uVar6,auVar4);
                  lVar15 = local_160;
                  if (((byte)uVar6 & 7) == 7) {
                    if (local_168 == (local_164 & 0x3fffffff)) {
                      FUN_14370c460(&PTR_vftable_1467f0638,&local_170,4);
                    }
                    *(uint *)(local_170 + (longlong)(int)local_168 * 4) = uVar19;
                    local_168 = local_168 + 1;
                    lVar15 = local_160;
                  }
                }
              }
              iVar16 = iVar16 + 1;
              lVar14 = local_148;
            } while (iVar16 < (int)(short)piVar22[2] + *piVar22);
          }
          lVar3 = *(longlong *)(lVar14 + 0x18);
          if (*(int *)(lVar3 + 0x108) == 0) {
            bVar9 = 0;
          }
          else {
            bVar9 = *(byte *)(*(longlong *)(lVar3 + 0x100) + lVar23);
          }
          if ((bVar9 & 4) != 0) {
            if (*(int *)(lVar3 + 0x108) == 0) {
              bVar9 = 0;
            }
            else {
              bVar9 = *(byte *)(*(longlong *)(lVar3 + 0x100) + lVar23);
            }
            if ((bVar9 & 1) != 0) {
              FUN_143729ad0(&local_140);
              local_178[0] = uVar10;
              FUN_143839060(*(undefined8 *)(lVar14 + 0x18),local_res20,local_178,&local_104,
                            &local_124);
              lVar15 = local_160;
              if ((local_res20[0] != '\0') &&
                 (uVar21 = (ulonglong)local_124, iVar16 = local_104, local_104 < (int)local_124)) {
                do {
                  lVar23 = *(longlong *)(lVar14 + 0x18);
                  piVar22 = (int *)FUN_1437fb610(*(undefined8 *)(lVar23 + 0x18),
                                                 *(undefined4 *)(lVar23 + 0x20),lVar23 + 0xb0,
                                                 lVar23 + 0xd0,lVar23 + 0x90,iVar16);
                  iVar17 = *piVar22;
                  if (iVar17 < (short)piVar22[2] + iVar17) {
                    do {
                      lVar23 = *(longlong *)(lVar14 + 0x18);
                      lVar23 = FUN_1437fb5b0(*(undefined8 *)(lVar23 + 0x28),
                                             *(undefined4 *)(lVar23 + 0x30),lVar23 + 0xc0,
                                             lVar23 + 0xe0,lVar23 + 0x70,iVar17);
                      if (((*(byte *)(lVar23 + 0x10) & 0x40) != 0) && (*(int *)(lVar23 + 8) != -1))
                      {
                        uVar10 = *(uint *)(lVar23 + 0xc);
                        lVar14 = *(longlong *)
                                  (*(longlong *)
                                    ((ulonglong)(uVar10 >> 0x16) * 0x100 +
                                    *(longlong *)(param_1 + 0x38)) + 0x18);
                        uVar11 = local_158 - 1;
                        uVar19 = *(uint *)(*(longlong *)(lVar14 + 0x168) +
                                          (longlong)
                                          (int)(*(int *)(lVar14 + 0x20) +
                                               ((uVar10 & 0x3fffff) - *(int *)(lVar14 + 0x20))) * 4)
                        ;
                        uVar12 = uVar10 & 0xffc00000 | uVar19;
                        uVar10 = local_158;
                        if (0 < (int)uVar11) {
                          uVar10 = uVar12 * -0x61c8864f;
                          uVar13 = (uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 |
                                    (uVar10 & 0xff00) << 8 | uVar19 * -0x4f000000) & uVar11;
                          uVar2 = *(uint *)(lVar15 + (longlong)(int)uVar13 * 4);
                          while ((uVar10 = local_158, uVar2 != 0xffffffff &&
                                 (uVar10 = uVar13, uVar2 != uVar12))) {
                            uVar13 = uVar13 + 1 & uVar11;
                            uVar2 = *(uint *)(lVar15 + (longlong)(int)uVar13 * 4);
                          }
                        }
                        lVar14 = local_148;
                        if ((int)uVar11 < (int)uVar10) {
                          if (local_138 + -1 < local_130 * 2) {
                            FUN_143854a20(&local_140,local_c8,local_138 * 2);
                          }
                          uVar10 = uVar12 * -0x61c8864f;
                          iVar20 = 1;
                          uVar19 = (uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 |
                                    (uVar10 & 0xff00) << 8 | uVar19 * -0x4f000000) & local_138 - 1U;
                          uVar10 = *(uint *)(local_140 + (longlong)(int)uVar19 * 4);
                          while (uVar10 != 0xffffffff) {
                            if (uVar10 == uVar12) {
                              iVar20 = 0;
                              break;
                            }
                            uVar19 = uVar19 + 1 & local_138 - 1U;
                            uVar10 = *(uint *)(local_140 + (longlong)(int)uVar19 * 4);
                          }
                          local_130 = local_130 + iVar20;
                          *(uint *)(local_140 + (longlong)(int)uVar19 * 4) = uVar12;
                          lVar14 = local_148;
                          lVar15 = local_160;
                        }
                      }
                      iVar17 = iVar17 + 1;
                    } while (iVar17 < (int)(short)piVar22[2] + *piVar22);
                    uVar21 = (ulonglong)local_124;
                  }
                  iVar16 = iVar16 + 1;
                } while (iVar16 < (int)uVar21);
              }
              iVar16 = 0;
              lVar14 = 0;
              iVar17 = local_138 + -1;
              if (-1 < iVar17) {
                do {
                  if (*(int *)(local_140 + lVar14 * 4) != -1) break;
                  iVar16 = iVar16 + 1;
                  lVar14 = lVar14 + 1;
                } while (lVar14 <= iVar17);
              }
              lVar14 = local_140;
              if (iVar16 <= iVar17) {
                do {
                  uVar10 = *(uint *)(lVar14 + (longlong)iVar16 * 4);
                  lVar15 = *(longlong *)
                            ((ulonglong)(uVar10 >> 0x16) * 0x100 + *(longlong *)(param_1 + 0x38));
                  if (lVar15 != 0) {
                    local_f8 = CONCAT44(uRam00000001467f06e4,_DAT_1467f06e0);
                    uStack_f0 = uRam00000001467f06e8;
                    uStack_ec = DAT_1467f06ec;
                    local_178[0] = uVar10 & 0x3fffff;
                    uVar6 = FUN_143852340(lVar15,local_178,&local_f8,&local_98);
                    auVar5._4_4_ = -(uint)(fStack_74 <= fStack_84 && fStack_94 <= fStack_64);
                    auVar5._0_4_ = -(uint)(local_78 <= local_88 && local_98 <= local_68);
                    auVar5._8_4_ = -(uint)(fStack_70 <= fStack_80 && fStack_90 <= fStack_60);
                    auVar5._12_4_ = -(uint)(fStack_6c <= fStack_7c && fStack_8c <= fStack_5c);
                    uVar6 = movmskps(uVar6,auVar5);
                    lVar14 = local_140;
                    if (((byte)uVar6 & 7) == 7) {
                      if (local_168 == (local_164 & 0x3fffffff)) {
                        FUN_14370c460(&PTR_vftable_1467f0638,&local_170,4);
                      }
                      *(uint *)(local_170 + (longlong)(int)local_168 * 4) = uVar10;
                      local_168 = local_168 + 1;
                      lVar14 = local_140;
                    }
                  }
                  iVar16 = iVar16 + 1;
                  for (lVar15 = (longlong)iVar16;
                      (lVar15 <= local_138 + -1 && (*(int *)(lVar14 + lVar15 * 4) == -1));
                      lVar15 = lVar15 + 1) {
                    iVar16 = iVar16 + 1;
                  }
                  lVar15 = local_160;
                } while (iVar16 <= local_138 + -1);
              }
            }
          }
          if ((int)(local_158 - 1) < local_150 * 2) {
            FUN_143854a20(&local_160,local_c4,local_158 * 2);
            lVar15 = local_160;
          }
          iVar16 = 1;
          uVar10 = uVar1 * -0x61c8864f;
          uVar19 = (uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                   uVar1 * -0x4f000000) & local_158 - 1;
          uVar10 = *(uint *)(lVar15 + (longlong)(int)uVar19 * 4);
          while (uVar10 != 0xffffffff) {
            if (uVar10 == uVar1) {
              iVar16 = 0;
              break;
            }
            uVar19 = uVar19 + 1 & local_158 - 1;
            uVar10 = *(uint *)(lVar15 + (longlong)(int)uVar19 * 4);
          }
          local_150 = local_150 + iVar16;
          *(uint *)(lVar15 + (longlong)(int)uVar19 * 4) = uVar1;
          lVar15 = local_b8;
          lVar14 = local_160;
          pvVar7 = local_a8;
        }
      }
      local_100 = local_100 + 1;
      local_168 = 0;
    } while (local_100 != local_b0);
  }
  FUN_14383a990(lVar15,&local_120);
  iVar16 = local_e0;
  while (iVar16 = iVar16 + -1, -1 < iVar16) {
    FUN_14383a990(*(undefined8 *)
                   ((longlong)*(int *)(local_e8 + (longlong)iVar16 * 0x18) * 0x100 +
                   *(longlong *)(param_1 + 0x38)),local_e8 + 8 + (longlong)iVar16 * 0x18);
  }
  FUN_1438a4a90(&local_e8);
  local_118 = 0;
  if (-1 < (int)local_114) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_120,8,local_114 & 0x3fffffff);
  }
  local_120 = 0;
  local_114 = 0x80000000;
  local_138 = 0;
  if (-1 < (int)local_134) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_140,4,local_134 & 0x3fffffff);
  }
  local_140 = 0;
  local_134 = 0x80000000;
  local_158 = 0;
  if (-1 < (int)local_154) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_160,4,local_154 & 0x3fffffff);
  }
  local_160 = 0;
  local_154 = 0x80000000;
  local_168 = 0;
  if (-1 < (int)local_164) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_170,4,local_164 & 0x3fffffff);
  }
  local_170 = 0;
  local_164 = 0x80000000;
  if (pvVar7 != (LPVOID)0x0) {
    FUN_14370d750(pvVar7,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438a56c0 FUN_1438a56c0 body=1068 status=ok
// SIG undefined FUN_1438a56c0(void)

void FUN_1438a56c0(longlong param_1,uint *param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  LPVOID pvVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  undefined8 local_res8;
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_res20;
  uint *local_168;
  int local_160;
  uint local_15c;
  undefined8 local_158;
  undefined4 local_150;
  uint local_14c;
  longlong local_140;
  int local_138;
  undefined4 local_134;
  undefined1 local_130 [16];
  int local_120 [2];
  longlong local_118;
  LPVOID local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined1 local_98 [88];
  
  local_res10 = param_2;
  pvVar5 = TlsGetValue(DAT_146b8198c);
  local_110 = pvVar5;
  if (pvVar5 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar5,"TtthreadSafeResetClearanceMediator");
  }
  thunk_FUN_143719c70(0xac362e3e);
  lVar2 = *(longlong *)((longlong)(int)*param_2 * 0x100 + *(longlong *)(param_1 + 0x38));
  fVar11 = (float)FUN_14383f750(param_1,*(undefined4 *)(*(longlong *)(lVar2 + 0x18) + 0x180));
  local_res8 = (uint *)CONCAT44(local_res8._4_4_,fVar11);
  local_158 = 0;
  local_150 = 0;
  local_14c = 0x80000000;
  FUN_14383a8d0(lVar2,&local_158);
  local_140 = 0;
  local_138 = 0;
  local_134 = 0x80000000;
  FUN_143734b10(local_130);
  thunk_FUN_143719c70(0x5f30567d);
  FUN_1438443a0(local_98,param_1);
  local_118 = param_3[1];
  lVar7 = *param_3;
  local_res18 = lVar7;
  if (lVar7 != local_118) {
    do {
      uVar9 = 0;
      local_d8 = (float)DAT_1467f08d0;
      fStack_d4 = (float)uRam00000001467f08d4;
      fStack_d0 = (float)uRam00000001467f08d8;
      fStack_cc = (float)uRam00000001467f08dc;
      fStack_c0 = (float)(uRam00000001467f08d8 ^ 0x80000000);
      fStack_bc = (float)(uRam00000001467f08dc ^ 0x80000000);
      local_108 = 0;
      local_c8 = (float)(DAT_1467f08d0 ^ 0x80000000);
      fStack_c4 = (float)(uRam00000001467f08d4 ^ 0x80000000);
      local_104 = 0xffffffff;
      local_100 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      local_res18 = lVar7;
      FUN_143717be0(lVar2 + 0x40,lVar7,&local_b8);
      local_c8 = local_a8 + fVar11;
      fStack_c4 = fStack_a4 + fVar11;
      fStack_c0 = fStack_a0 + fVar11;
      fStack_bc = fStack_9c + fVar11;
      local_d8 = local_b8 - fVar11;
      fStack_d4 = fStack_b4 - fVar11;
      fStack_d0 = fStack_b0 - fVar11;
      fStack_cc = fStack_ac - fVar11;
      local_168 = (uint *)0x0;
      local_160 = 0;
      local_15c = 0x80000000;
      FUN_143845290(local_98,&local_108,&local_168);
      thunk_FUN_143719c70(0xe6579a76);
      uVar10 = (ulonglong)((longlong)(local_168 + local_160) + (3 - (longlong)local_168)) >> 2;
      if (local_168 + local_160 < local_168) {
        uVar10 = 0;
      }
      puVar8 = local_168;
      if (uVar10 != 0) {
        do {
          uVar1 = *puVar8;
          uVar4 = uVar1 >> 0x16;
          if (uVar4 == *param_2) {
            local_res8 = (uint *)(CONCAT44(local_res8._4_4_,uVar1) & 0xffffffff003fffff);
            FUN_14383aa60(lVar2,&local_158);
            thunk_FUN_143719c70(0x47a824b0);
          }
          else {
            uVar3 = *(undefined8 *)((ulonglong)uVar4 * 0x100 + *(longlong *)(param_1 + 0x38));
            local_res20 = uVar3;
            local_res8._0_4_ = uVar4;
            FUN_1438a4870(&local_140,local_120,&local_res8,&local_res20);
            local_res8 = (uint *)(CONCAT44(local_res8._4_4_,uVar1) & 0xffffffff003fffff);
            FUN_14383aa60(uVar3,local_140 + ((longlong)local_120[0] * 3 + 1) * 8,&local_res8);
            thunk_FUN_143719c70(0x5787d2de);
            param_2 = local_res10;
          }
          puVar8 = puVar8 + 1;
          uVar9 = uVar9 + 1;
          lVar7 = local_res18;
        } while (uVar9 != uVar10);
      }
      local_160 = 0;
      if (-1 < (int)local_15c) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_168,4,local_15c & 0x3fffffff);
      }
      lVar7 = lVar7 + 0x20;
      local_168 = (uint *)0x0;
      local_15c = 0x80000000;
      pvVar5 = local_110;
      local_res18 = lVar7;
    } while (lVar7 != local_118);
  }
  FUN_14383a990(lVar2,&local_158);
  iVar6 = local_138 + -1;
  if (-1 < iVar6) {
    local_res10 = (uint *)CONCAT44(0xffffffff,(undefined4)local_res10);
    do {
      FUN_14383a990(*(undefined8 *)
                     ((longlong)*(int *)(local_140 + (longlong)iVar6 * 0x18) * 0x100 +
                     *(longlong *)(param_1 + 0x38)),local_140 + 8 + (longlong)iVar6 * 0x18);
      iVar6 = iVar6 + -1;
      local_res10 = (uint *)CONCAT44(local_res10._4_4_,iVar6);
      local_res8 = local_res10;
    } while (-1 < iVar6);
  }
  FUN_1438443d0(local_98);
  FUN_1438a4a90(&local_140);
  local_150 = 0;
  if (-1 < (int)local_14c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_158,8,local_14c & 0x3fffffff);
  }
  local_158 = 0;
  local_14c = 0x80000000;
  if (pvVar5 != (LPVOID)0x0) {
    FUN_14370d750(pvVar5,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438a5af0 FUN_1438a5af0 body=271 status=ok
// SIG undefined FUN_1438a5af0(void)

void FUN_1438a5af0(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  
  thunk_FUN_143734820(param_1 + 2);
  uVar1 = FUN_143703a50();
  iVar3 = (int)param_1[1] + -1;
  lVar5 = (longlong)iVar3;
  if (-1 < iVar3) {
    puVar4 = (uint *)(*param_1 + 0x3c + lVar5 * 0x40);
    do {
      uVar2 = FUN_143703a50();
      puVar4[-1] = 0;
      if (-1 < (int)*puVar4) {
        FUN_143702e10(uVar2,*(undefined8 *)(puVar4 + -3),4,*puVar4 & 0x3fffffff);
      }
      puVar4[-3] = 0;
      puVar4[-2] = 0;
      *puVar4 = 0x80000000;
      uVar2 = FUN_143703a50();
      puVar4[-0xb] = 0;
      if (-1 < (int)puVar4[-10]) {
        FUN_143702e10(uVar2,*(undefined8 *)(puVar4 + -0xd),0x14,puVar4[-10] & 0x3fffffff);
      }
      puVar4[-0xd] = 0;
      puVar4[-0xc] = 0;
      puVar4[-10] = 0x80000000;
      puVar4 = puVar4 + -0x10;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar1,*param_1,0x40,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  return;
}



// FUNCTION 1438a5c00 FUN_1438a5c00 body=1512 status=ok
// SIG undefined FUN_1438a5c00(void)

int FUN_1438a5c00(undefined8 param_1,longlong param_2,undefined1 (*param_3) [16],float *param_4,
                 float *param_5,float *param_6,undefined8 param_7,float *param_8,undefined4 *param_9
                 )

{
  float *pfVar1;
  undefined8 *puVar2;
  int iVar3;
  float *pfVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  int local_res20 [2];
  longlong local_148;
  int local_140;
  uint local_13c;
  longlong local_138;
  uint local_130;
  uint local_12c;
  longlong local_120;
  int local_118;
  uint local_114;
  undefined4 local_110 [2];
  float local_108;
  float local_104;
  float local_100;
  float fStack_fc;
  float local_f8;
  float local_f4;
  longlong local_f0;
  int local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  longlong lStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  ulonglong uVar11;
  
  pfVar4 = param_5;
  fVar19 = DAT_1467f08d0;
  param_5._0_4_ = 0;
  local_f8 = param_4[1] * param_6[1] + *param_4 * *param_6 + param_4[2] * param_6[2];
  local_f4 = pfVar4[1] * param_6[1] + *pfVar4 * *param_6 + pfVar4[2] * param_6[2];
  FUN_1438c7d80(param_2,local_res20);
  while (local_res20[0] != -1) {
    local_f0 = 0;
    local_e8 = 0;
    local_e4 = 0x80000000;
    local_e0 = 0;
    local_d8 = 0;
    local_d4 = 0x80000000;
    FUN_1438c7de0(&local_f0,param_1,local_res20[0],param_2);
    iVar13 = local_e8;
    local_148 = 0;
    local_140 = 0;
    local_13c = 0x80000000;
    uVar6 = FUN_143703a50();
    if ((int)(local_13c & 0x3fffffff) < iVar13) {
      iVar9 = (local_13c & 0x3fffffff) * 2;
      if (iVar13 < iVar9) {
        iVar13 = iVar9;
      }
      FUN_14370c310(uVar6,&local_148,iVar13,0x10);
    }
    iVar13 = 0;
    if (0 < local_e8) {
      lVar15 = 0;
      do {
        uVar11 = 0;
        local_120 = 0;
        local_118 = 0;
        local_114 = 0x80000000;
        FUN_1438c81a0(param_1,*(undefined8 *)(lVar15 + local_f0),&local_120);
        iVar9 = local_118;
        local_138 = 0;
        local_130 = 0;
        local_12c = 0x80000000;
        uVar6 = FUN_143703a50();
        if ((int)(local_12c & 0x3fffffff) < iVar9) {
          iVar3 = (local_12c & 0x3fffffff) * 2;
          if (iVar9 < iVar3) {
            iVar9 = iVar3;
          }
          FUN_14370c310(uVar6,&local_138,iVar9,8);
        }
        uVar14 = uVar11;
        if (0 < local_118) {
          do {
            pfVar1 = (float *)(uVar14 + local_120);
            local_100 = param_4[1] * pfVar1[1] + *param_4 * *pfVar1 + param_4[2] * pfVar1[2];
            pfVar1 = (float *)(uVar14 + local_120);
            fStack_fc = pfVar4[1] * pfVar1[1] + *pfVar4 * *pfVar1 + pfVar4[2] * pfVar1[2];
            uVar6 = FUN_143703a50();
            if (local_130 == (local_12c & 0x3fffffff)) {
              FUN_14370c460(uVar6,&local_138,8);
            }
            uVar10 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar10;
            *(ulonglong *)(local_138 + (longlong)(int)local_130 * 8) = CONCAT44(fStack_fc,local_100)
            ;
            local_130 = local_130 + 1;
            uVar14 = uVar14 + 0x10;
          } while ((int)uVar10 < local_118);
        }
        FUN_1438c9980(&local_138);
        if (2 < (int)local_130) {
          lVar7 = (longlong)local_140;
          local_140 = local_140 + 1;
          puVar2 = (undefined8 *)(local_148 + lVar7 * 0x10);
          if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = 0;
            *(undefined4 *)(puVar2 + 1) = 0;
            *(undefined4 *)((longlong)puVar2 + 0xc) = 0x80000000;
          }
          FUN_1438c8d60(local_148 + lVar7 * 0x10,&local_138);
        }
        uVar6 = FUN_143703a50();
        local_130 = 0;
        if (-1 < (int)local_12c) {
          FUN_143702e10(uVar6,local_138,8,local_12c & 0x3fffffff);
        }
        local_138 = 0;
        local_12c = 0x80000000;
        uVar6 = FUN_143703a50();
        local_118 = 0;
        if (-1 < (int)local_114) {
          FUN_143702e10(uVar6,local_120,0x10,local_114 & 0x3fffffff);
        }
        iVar13 = iVar13 + 1;
        local_120 = 0;
        lVar15 = lVar15 + 8;
        local_114 = 0x80000000;
      } while (iVar13 < local_e8);
    }
    lStack_b0 = (longlong)local_140 * 0x10 + local_148;
    local_b8 = local_148;
    lVar15 = local_b8;
    local_b8._0_4_ = (undefined4)local_148;
    local_b8._4_4_ = (undefined4)((ulonglong)local_148 >> 0x20);
    local_c8 = (undefined4)local_b8;
    uStack_c4 = local_b8._4_4_;
    local_b8 = lVar15;
    uStack_c0 = lStack_b0;
    cVar5 = FUN_1438c8d00(&local_c8,&local_f8,&local_108);
    if (cVar5 != '\0') {
      lVar15 = *(longlong *)(param_2 + 0x48);
      auVar17 = *param_3;
      auVar16._0_12_ = auVar17._0_12_;
      auVar16._12_4_ = fRam00000001467f06fc;
      lStack_a0 = lVar15 + (longlong)*(int *)(param_2 + 0x50) * 8;
      local_78._0_4_ = (float)(~-(uint)(auVar17._0_4_ == 0.0) & (uint)auVar17._0_4_);
      local_78._4_4_ = (float)(~-(uint)(auVar17._4_4_ == 0.0) & (uint)auVar17._4_4_);
      local_78._8_4_ = (float)(~-(uint)(auVar17._8_4_ == 0.0) & (uint)auVar17._8_4_);
      local_78._12_4_ = (float)(~-(uint)(fRam00000001467f06fc == 0.0) & (uint)fRam00000001467f06fc);
      auVar17 = rcpps(auVar16,local_78);
      local_88 = local_108 * *param_4 + local_104 * *pfVar4;
      fStack_84 = local_108 * param_4[1] + local_104 * pfVar4[1];
      fStack_80 = local_108 * param_4[2] + local_104 * pfVar4[2];
      fStack_7c = local_108 * param_4[3] + local_104 * pfVar4[3];
      local_68._0_4_ =
           ~-(uint)(local_78._0_4_ == 0.0) &
           (uint)((2.0 - local_78._0_4_ * auVar17._0_4_) * auVar17._0_4_);
      local_68._4_4_ =
           ~-(uint)(local_78._4_4_ == 0.0) &
           (uint)((2.0 - local_78._4_4_ * auVar17._4_4_) * auVar17._4_4_);
      local_68._8_4_ =
           ~-(uint)(local_78._8_4_ == 0.0) &
           (uint)((2.0 - local_78._8_4_ * auVar17._8_4_) * auVar17._8_4_);
      local_68._12_4_ =
           ~-(uint)(local_78._12_4_ == 0.0) &
           (uint)((2.0 - local_78._12_4_ * auVar17._12_4_) * auVar17._12_4_);
      auVar17._8_4_ = -(uint)(local_78._8_4_ == 0.0) & 0x7f7fffee;
      auVar17._0_8_ =
           CONCAT44(-(uint)(local_78._4_4_ == 0.0),-(uint)(local_78._0_4_ == 0.0)) &
           0x7f7fffee7f7fffee;
      auVar17._12_4_ = -(uint)(local_78._12_4_ == 0.0) & 0x7f7fffee;
      local_68 = local_68 | auVar17;
      local_a8._0_4_ = (undefined4)lVar15;
      local_a8._4_4_ = (undefined4)((ulonglong)lVar15 >> 0x20);
      local_c8 = (undefined4)local_a8;
      uStack_c4 = local_a8._4_4_;
      local_a8 = lVar15;
      uStack_c0 = lStack_a0;
      FUN_1438a66d0(param_1,&local_c8,param_4,pfVar4,&local_108,&local_88,&local_98,local_110);
      fVar18 = (fStack_94 - param_6[1]) * (fStack_94 - param_6[1]) +
               (local_98 - *param_6) * (local_98 - *param_6) +
               (fStack_90 - param_6[2]) * (fStack_90 - param_6[2]);
      if (((int)param_5 == 0) || (fVar18 < fVar19)) {
        param_5._0_4_ = 1;
        *param_8 = local_98;
        param_8[1] = fStack_94;
        param_8[2] = fStack_90;
        param_8[3] = fStack_8c;
        *param_9 = local_110[0];
        fVar19 = fVar18;
      }
    }
    uVar6 = FUN_143703a50();
    lVar15 = (longlong)(local_140 + -1);
    if (-1 < local_140 + -1) {
      puVar12 = (uint *)(local_148 + 0xc + lVar15 * 0x10);
      do {
        uVar8 = FUN_143703a50();
        puVar12[-1] = 0;
        if (-1 < (int)*puVar12) {
          FUN_143702e10(uVar8,*(undefined8 *)(puVar12 + -3),8,*puVar12 & 0x3fffffff);
        }
        puVar12[-3] = 0;
        puVar12[-2] = 0;
        *puVar12 = 0x80000000;
        puVar12 = puVar12 + -4;
        lVar15 = lVar15 + -1;
      } while (-1 < lVar15);
    }
    local_140 = 0;
    if (-1 < (int)local_13c) {
      FUN_143702e10(uVar6,local_148,0x10,local_13c & 0x3fffffff);
    }
    local_148 = 0;
    local_13c = 0x80000000;
    FUN_1438c7b50(&local_f0);
    FUN_1438c7d80(param_2,local_res20);
  }
  return (int)param_5;
}



// FUNCTION 1438a6200 FUN_1438a6200 body=1225 status=ok
// SIG undefined FUN_1438a6200(void)

undefined4
FUN_1438a6200(longlong param_1,byte param_2,longlong param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined4 *param_9,
             undefined8 param_10,undefined8 param_11)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  ulonglong in_stack_fffffffffffffe50;
  ulonglong uVar13;
  longlong local_188;
  int local_180;
  uint local_17c;
  longlong local_178;
  undefined8 *puStack_170;
  undefined4 *local_168;
  undefined1 local_160;
  undefined **local_158 [3];
  undefined8 local_140;
  undefined4 local_138;
  uint local_134;
  undefined1 local_130 [32];
  undefined8 local_110;
  undefined4 local_108;
  uint local_104;
  longlong local_100;
  undefined4 local_f8 [2];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_78;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_68 = 0;
  uStack_60 = 0;
  local_74 = 1 << (param_2 & 0x1f);
  local_188 = 0;
  local_180 = 0;
  local_17c = 0x80000000;
  local_48 = *param_9;
  uStack_44 = param_9[1];
  uStack_40 = param_9[2];
  uStack_3c = param_9[3];
  local_38 = param_9[4];
  uStack_34 = param_9[5];
  uStack_30 = param_9[6];
  uStack_2c = param_9[7];
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  plVar6 = (longlong *)UWeapon::GetStatusEffectOriginStats(param_1);
  (**(code **)(*plVar6 + 0x40))(plVar6,&local_78,&local_188);
  if (*(longlong *)(param_3 + 0x10) == 0) {
    puStack_170 = (undefined8 *)(local_188 + (longlong)local_180 * 4);
    local_178 = local_188;
    FUN_1438c77f0(local_158,param_1,param_5,param_6,&local_178);
    uVar5 = FUN_1438a5c00(param_1,local_158,param_4,param_5,param_6,param_7,param_8,param_10,
                          param_11);
    local_108 = 0;
    if (-1 < (int)local_104) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_110,8,local_104 & 0x3fffffff);
    }
    local_110 = 0;
    local_104 = 0x80000000;
    FUN_1438a5af0(local_130);
    local_138 = 0;
    if (-1 < (int)local_134) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_140,0xc,local_134 & 0x3fffffff);
    }
    local_140 = 0;
    local_134 = 0x80000000;
  }
  else {
    iVar9 = local_180 + -1;
    lVar10 = (longlong)iVar9;
    iVar8 = local_180;
    if (-1 < iVar9) {
      do {
        uVar5 = (undefined4)(in_stack_fffffffffffffe50 >> 0x20);
        uVar7 = 0;
        lVar2 = *(longlong *)(param_1 + 0x38);
        local_f8[0] = 0xffffffff;
        local_f0 = 0;
        local_e8 = 0;
        local_c8 = 0xffffffff;
        local_c0 = 0;
        local_b8 = 0;
        local_98 = 0xffffffff;
        local_90 = 0;
        local_88 = 0;
        uVar1 = *(uint *)(local_188 + lVar10 * 4);
        uVar12 = (ulonglong)uVar1;
        lVar3 = *(longlong *)(*(longlong *)((ulonglong)(uVar1 >> 0x16) * 0x100 + lVar2) + 0x18);
        if (*(int *)(lVar3 + 0x50) != 0) {
          uVar13 = CONCAT44(uVar5,uVar1) & 0xffffffff003fffff;
          uVar7 = FUN_1438360c0(*(undefined8 *)(lVar3 + 0x48),*(undefined4 *)(lVar3 + 0x20),
                                lVar3 + 0x120,lVar3 + 0x140,lVar3 + 0x90,uVar13,
                                *(int *)(lVar3 + 0x50));
          uVar5 = (undefined4)(uVar13 >> 0x20);
        }
        uVar11 = (undefined4)uVar12;
        in_stack_fffffffffffffe50 = CONCAT44(uVar5,uVar11) & 0xffffffff003fffff;
        lVar2 = *(longlong *)(*(longlong *)((uVar12 >> 0x16 & 0x3ff) * 0x100 + lVar2) + 0x18);
        local_90 = FUN_1437fb610(*(undefined8 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x20),
                                 lVar2 + 0xb0,lVar2 + 0xd0,lVar2 + 0x90,in_stack_fffffffffffffe50);
        plVar6 = *(longlong **)(param_3 + 0x10);
        local_98 = uVar11;
        local_88 = uVar7;
        if (plVar6 != (longlong *)0x0) {
          param_9._4_4_ = *(undefined4 *)(param_3 + 0x44);
          param_9._0_4_ = *(float *)(param_3 + 0x40) + *(float *)(param_3 + 0x40);
          local_178 = *(longlong *)(param_3 + 0x20);
          puStack_170 = &param_9;
          local_168 = local_f8;
          local_160 = 0x80;
          cVar4 = (**(code **)(*plVar6 + 0x30))(plVar6,&local_178);
          iVar8 = local_180;
          if ((cVar4 == '\0') && (iVar8 = local_180 + -1, local_180 = iVar8, iVar8 != iVar9)) {
            *(undefined4 *)(local_188 + lVar10 * 4) =
                 *(undefined4 *)(local_188 + (longlong)iVar8 * 4);
          }
        }
        iVar9 = iVar9 + -1;
        lVar10 = lVar10 + -1;
      } while (-1 < lVar10);
    }
    puStack_170 = (undefined8 *)(local_188 + (longlong)iVar8 * 4);
    local_178 = local_188;
    FUN_1438c77f0(local_158,param_1,param_5,param_6,&local_178);
    local_158[0] = hkaiNavMeshBoundary::FilteredNonOverlappingConnectedHandler::vftable;
    local_100 = param_3;
    uVar5 = FUN_1438a5c00(param_1,local_158,param_4,param_5,param_6,param_7,param_8,param_10,
                          param_11);
    local_108 = 0;
    if (-1 < (int)local_104) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_110,8,local_104 & 0x3fffffff);
    }
    local_110 = 0;
    local_104 = 0x80000000;
    FUN_1438a5af0(local_130);
    local_138 = 0;
    if (-1 < (int)local_134) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_140,0xc,local_134 & 0x3fffffff);
    }
  }
  local_180 = 0;
  if (-1 < (int)local_17c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_188,4,local_17c & 0x3fffffff);
  }
  return uVar5;
}



// FUNCTION 1438a66d0 FUN_1438a66d0 body=1059 status=ok
// SIG undefined FUN_1438a66d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438a66d0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  float *param_5,float *param_6,float *param_7,uint *param_8)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  char cVar9;
  uint uVar10;
  longlong *plVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte bVar16;
  longlong *plVar17;
  float fVar18;
  float fVar21;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 local_res8;
  longlong *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  char local_c8 [4];
  uint local_c4;
  longlong *local_c0;
  uint local_b8 [2];
  ulonglong local_b0;
  undefined8 local_a8;
  float fStack_a0;
  float fStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  uint local_8c;
  undefined8 local_70;
  undefined4 local_68;
  uint local_64;
  
  plVar11 = (longlong *)param_2[1];
  uVar14 = 0xffffffff;
  plVar17 = (longlong *)*param_2;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  local_c0 = plVar11;
  if (plVar17 != plVar11) {
    do {
      lVar1 = *plVar17;
      fVar25 = *param_5;
      if ((((*(float *)(lVar1 + 0x10) <= fVar25) &&
           (fVar18 = param_5[1], *(float *)(lVar1 + 0x14) <= fVar18)) &&
          (fVar25 < *(float *)(lVar1 + 0x18) || fVar25 == *(float *)(lVar1 + 0x18))) &&
         ((fVar18 < *(float *)(lVar1 + 0x1c) || fVar18 == *(float *)(lVar1 + 0x1c) &&
          (cVar9 = FUN_1438c7310(lVar1,*(undefined8 *)param_5), plVar11 = local_c0, cVar9 != '\0')))
         ) {
        uVar10 = *(uint *)(lVar1 + 0x20) & 0x3fffff;
        uVar15 = *(uint *)(lVar1 + 0x20) >> 0x16;
        lVar2 = *(longlong *)((ulonglong)uVar15 * 0x100 + *(longlong *)(param_1 + 0x38));
        lVar3 = *(longlong *)(lVar2 + 0x18);
        if (*(int *)(lVar3 + 0x108) == 0) {
          bVar16 = 0;
        }
        else {
          bVar16 = *(byte *)((longlong)(int)uVar10 + *(longlong *)(lVar3 + 0x100));
        }
        if ((bVar16 & 1) == 0) {
          uVar14 = *(uint *)(lVar1 + 0x20);
          break;
        }
        local_c4 = uVar10;
        FUN_143839060(lVar3,local_c8,&local_c4,local_b8,&local_b0);
        plVar11 = local_c0;
        if ((local_c8[0] != '\0') && (local_b8[0] != (uint)local_b0)) {
          uVar10 = local_b8[0];
          do {
            local_a8 = CONCAT44(uRam00000001467f0864,_DAT_1467f0860);
            fStack_a0 = fRam00000001467f0868;
            fStack_9c = fRam00000001467f086c;
            local_c4 = uVar10;
            cVar9 = FUN_143854160(lVar2,&local_c4,param_6 + 4,param_6,&local_a8);
            plVar11 = local_c0;
            param_1 = local_res8;
            if (cVar9 != '\0') {
              uVar14 = uVar15 << 0x16 | uVar10;
              break;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 != (uint)local_b0);
        }
      }
      plVar17 = plVar17 + 1;
    } while (plVar17 != plVar11);
    if (uVar14 != 0xffffffff) goto LAB_1438a6a2c;
  }
  plVar11 = (longlong *)*local_res10;
  fVar25 = 3.40282e+38;
  local_b0 = 0;
  local_a8 = (ulonglong)(local_res10[1] + (7 - (longlong)plVar11)) >> 3;
  if ((longlong *)local_res10[1] < plVar11) {
    local_a8 = 0;
  }
  local_c0 = plVar11;
  if (local_a8 != 0) {
    do {
      lVar1 = *plVar11;
      uVar15 = *(uint *)(lVar1 + 0x20) >> 0x16;
      uVar10 = *(uint *)(lVar1 + 0x20) & 0x3fffff;
      lVar2 = *(longlong *)
               (*(longlong *)((ulonglong)uVar15 * 0x100 + *(longlong *)(param_1 + 0x38)) + 0x18);
      if (*(int *)(lVar2 + 0x108) == 0) {
        bVar16 = 0;
      }
      else {
        bVar16 = *(byte *)((longlong)(int)uVar10 + *(longlong *)(lVar2 + 0x100));
      }
      local_c0 = plVar11;
      if ((bVar16 & 1) == 0) {
        fVar18 = (float)FUN_1438c6de0(lVar1,*(undefined8 *)param_5);
        if (fVar18 < fVar25) {
          uVar14 = *(uint *)(lVar1 + 0x20);
          fVar25 = fVar18;
        }
      }
      else {
        local_b8[0] = uVar10;
        FUN_143839060(lVar2,&local_res8,local_b8,&local_c4,&local_res10);
        uVar8 = local_res20;
        if (((char)local_res8 != '\0') && (local_c4 != (uint)local_res10)) {
          uVar10 = local_c4;
          do {
            local_8c = 0x80000000;
            local_98 = 0;
            uVar13 = uVar15 << 0x16 | uVar10;
            local_90 = 0;
            local_70 = 0;
            local_68 = 0;
            local_64 = 0x80000000;
            FUN_1438c70c0(&local_98,param_1,uVar13,local_res18,uVar8);
            fVar18 = (float)FUN_1438c6de0(&local_98,*(undefined8 *)param_5);
            if (fVar18 < fVar25) {
              fVar25 = fVar18;
              uVar14 = uVar13;
            }
            uVar12 = FUN_143703a50();
            local_68 = 0;
            if (-1 < (int)local_64) {
              FUN_143702e10(uVar12,local_70,4,local_64 & 0x3fffffff);
            }
            local_70 = 0;
            local_64 = 0x80000000;
            uVar12 = FUN_143703a50();
            local_90 = 0;
            if (-1 < (int)local_8c) {
              FUN_143702e10(uVar12,local_98,0x14,local_8c & 0x3fffffff);
            }
            uVar10 = uVar10 + 1;
            plVar11 = local_c0;
          } while (uVar10 != (uint)local_res10);
        }
      }
      plVar11 = plVar11 + 1;
      local_b0 = local_b0 + 1;
      local_c0 = plVar11;
    } while (local_b0 != local_a8);
  }
LAB_1438a6a2c:
  local_res8 = CONCAT44(local_res8._4_4_,uVar14) & 0xffffffff003fffff;
  FUN_1438525c0(*(undefined8 *)((ulonglong)(uVar14 >> 0x16) * 0x100 + *(longlong *)(param_1 + 0x38))
                ,&local_res8,&local_a8);
  fVar25 = (float)local_a8 * param_6[4];
  fVar18 = local_a8._4_4_ * param_6[5];
  fVar21 = fStack_a0 * param_6[6];
  fVar22 = fVar18 + fVar25 + fVar21;
  fVar23 = fVar18 + fVar25 + fVar21;
  fVar24 = fVar18 + fVar25 + fVar21;
  fVar21 = fVar18 + fVar25 + fVar21;
  auVar19._0_4_ = fStack_a0 * param_6[2] + (float)local_a8 * *param_6;
  auVar19._4_4_ = fStack_9c + local_a8._4_4_ * param_6[1];
  auVar19._8_4_ = (float)local_a8 * *param_6 + fStack_a0 * param_6[2];
  auVar19._12_4_ = local_a8._4_4_ * param_6[1] + fStack_9c;
  auVar20._4_4_ = fVar23;
  auVar20._0_4_ = fVar22;
  auVar20._8_4_ = fVar24;
  auVar20._12_4_ = fVar21;
  auVar20 = rcpps(auVar19,auVar20);
  fVar25 = param_6[5];
  fVar18 = param_6[6];
  fVar4 = param_6[7];
  fVar5 = param_6[1];
  fVar6 = param_6[2];
  fVar7 = param_6[3];
  *param_7 = (2.0 - auVar20._0_4_ * fVar22) * auVar20._0_4_ *
             (0.0 - (auVar19._4_4_ + auVar19._0_4_)) * param_6[4] + *param_6;
  param_7[1] = (2.0 - auVar20._4_4_ * fVar23) * auVar20._4_4_ *
               (0.0 - (auVar19._0_4_ + auVar19._4_4_)) * fVar25 + fVar5;
  param_7[2] = (2.0 - auVar20._8_4_ * fVar24) * auVar20._8_4_ *
               (0.0 - (auVar19._12_4_ + auVar19._8_4_)) * fVar18 + fVar6;
  param_7[3] = (2.0 - auVar20._12_4_ * fVar21) * auVar20._12_4_ *
               (0.0 - (auVar19._8_4_ + auVar19._12_4_)) * fVar4 + fVar7;
  *param_8 = uVar14;
  return;
}



// FUNCTION 1438a6b00 FUN_1438a6b00 body=92 status=ok
// SIG undefined FUN_1438a6b00(void)

float FUN_1438a6b00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_1438a8fb0(param_1,param_2,param_4,param_5);
  fVar2 = (float)FUN_1438a8fb0(param_2,param_3,param_4,param_5);
  return fVar1 + fVar2;
}



// FUNCTION 1438a6b60 FUN_1438a6b60 body=104 status=ok
// SIG undefined FUN_1438a6b60(void)

void FUN_1438a6b60(void)

{
  FUN_1438a6bd0();
  return;
}



// FUNCTION 1438a6bd0 FUN_1438a6bd0 body=5630 status=ok
// SIG undefined FUN_1438a6bd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1438a6bd0(undefined8 param_1,int *param_2,float *param_3,undefined4 *param_4,undefined8 param_5,
             float *param_6,float *param_7,float *param_8,undefined8 param_9,int *param_10,
             char *param_11)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  byte bVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  float *pfVar13;
  undefined4 uVar14;
  char *pcVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  char cVar19;
  float *pfVar20;
  float *pfVar21;
  char cVar22;
  uint uVar23;
  uint uVar24;
  float fVar29;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar33 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  float fVar54;
  undefined1 auVar48 [12];
  float fVar52;
  float fVar53;
  float fVar55;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float *local_res18;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  undefined1 local_228 [8];
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float *local_1a8 [2];
  undefined8 local_198;
  undefined8 uStack_190;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined1 local_148 [16];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  undefined1 local_f8 [16];
  float local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  
  lVar11 = hkaiEdgePath::getEdge(param_1,0);
  pfVar13 = (float *)CONCAT44(param_9._4_4_,(undefined4)param_9);
  bVar7 = false;
  pfVar13[0] = 0.0;
  pfVar13[1] = 0.0;
  pfVar13[2] = 0.0;
  pfVar13[3] = 0.0;
  fVar31 = *param_3;
  fVar32 = param_3[1];
  fVar35 = param_3[2];
  fVar65 = param_3[3];
  local_158 = fVar31;
  fStack_154 = fVar32;
  fStack_150 = fVar35;
  fStack_14c = fVar65;
  FUN_1438798e0(param_1,param_2,&local_res18,local_1a8);
  if (local_res18 == local_1a8[0]) {
    return 4;
  }
  param_9._0_4_ = *param_4;
  pcVar15 = (char *)&param_9;
  local_148 = *(undefined1 (*) [16])(local_res18 + 8);
  fVar1 = local_148._0_4_;
  fVar2 = local_148._4_4_;
  fVar3 = local_148._8_4_;
  fVar4 = local_148._12_4_;
  uVar12 = FUN_1438a9180(pcVar15,local_res18,param_5,&local_138);
  if ((int)uVar12 != 0) {
    return uVar12;
  }
  pfVar17 = (float *)0x0;
  cVar22 = false;
  local_278 = 0.0;
  fStack_274 = 0.0;
  fStack_270 = 0.0;
  fStack_26c = 0.0;
  fVar78 = 0.0;
  fVar79 = 0.0;
  fVar80 = 0.0;
  fVar81 = 0.0;
  param_9._0_4_ = 0x3a83126f;
  local_e8 = -0.001;
  uStack_e4 = 0xba83126f;
  uStack_e0 = 0xba83126f;
  uStack_dc = 0xba83126f;
  local_178 = 0;
  uStack_170 = 0;
  local_1c8 = 0.001;
  fStack_1c4 = 0.001;
  fStack_1c0 = 0.001;
  fStack_1bc = 0.001;
  fVar56 = 0.0;
  fVar58 = 0.0;
  fVar60 = 0.0;
  fVar40 = 0.0;
  if (local_res18 != local_1a8[0]) {
    pfVar16 = local_res18 + 0x14;
    local_198 = 0x4040000040400000;
    uStack_190 = 0x4040000040400000;
    fStack_20c = fStack_10c;
    fVar75 = local_118;
    fVar77 = fStack_114;
    fVar71 = fStack_110;
    fVar82 = local_108;
    fVar83 = fStack_104;
    fVar84 = fStack_100;
    fVar85 = local_128;
    fVar86 = fStack_124;
    fVar87 = fStack_120;
    fVar88 = fStack_11c;
    fVar89 = local_138;
    fVar90 = fStack_134;
    fVar91 = fStack_130;
    fStack_17c = fStack_12c;
    do {
      pfVar17 = local_res18;
      fVar60 = *pfVar17;
      fVar30 = pfVar17[1];
      fVar34 = pfVar17[2];
      fVar40 = pfVar17[3];
      fVar56 = fVar60 * fVar89 + fVar82 + fVar30 * fVar85 + fVar34 * fVar75;
      fVar58 = fVar60 * fVar90 + fVar83 + fVar30 * fVar86 + fVar34 * fVar77;
      fVar60 = fVar60 * fVar91 + fVar84 + fVar30 * fVar87 + fVar34 * fVar71;
      fVar30 = pfVar16[-0x10];
      fVar34 = pfVar16[-0xf];
      fVar36 = pfVar16[-0xe];
      fStack_25c = pfVar16[-0xd];
      fVar68 = fVar56 - fVar31;
      fVar69 = fVar58 - fVar32;
      fVar70 = fVar60 - fVar35;
      local_1e8 = fVar56;
      fStack_1e4 = fVar58;
      fStack_1e0 = fVar60;
      fStack_1dc = fVar40;
      local_268 = fVar30 * fVar89 + fVar82 + fVar34 * fVar85 + fVar36 * fVar75;
      fStack_264 = fVar30 * fVar90 + fVar83 + fVar34 * fVar86 + fVar36 * fVar77;
      fStack_260 = fVar30 * fVar91 + fVar84 + fVar34 * fVar87 + fVar36 * fVar71;
      fVar30 = fVar1 * fVar68;
      fVar34 = fVar2 * fVar69;
      fVar37 = fVar3 * fVar70;
      local_1f8 = local_268;
      fStack_1f4 = fStack_264;
      fStack_1f0 = fStack_260;
      fStack_1ec = fStack_25c;
      local_1d8 = local_268 - fVar31;
      fStack_1d4 = fStack_264 - fVar32;
      fStack_1d0 = fStack_260 - fVar35;
      fVar31 = fVar1 * local_1d8;
      fVar35 = fVar2 * fStack_1d4;
      fVar38 = fVar3 * fStack_1d0;
      fStack_1cc = fStack_25c - fVar65;
      fVar57 = fVar68 - (fVar34 + fVar30 + fVar37) * fVar1;
      fVar59 = fVar69 - (fVar34 + fVar30 + fVar37) * fVar2;
      fVar61 = fVar70 - (fVar34 + fVar30 + fVar37) * fVar3;
      fVar46 = local_1d8 - (fVar35 + fVar31 + fVar38) * fVar1;
      fVar52 = fStack_1d4 - (fVar35 + fVar31 + fVar38) * fVar2;
      fVar53 = fStack_1d0 - (fVar35 + fVar31 + fVar38) * fVar3;
      fVar64 = fVar59 * fVar59 + fVar57 * fVar57 + fVar61 * fVar61;
      fVar32 = fVar46 * fVar46;
      fVar36 = fVar52 * fVar52;
      fVar39 = fVar53 * fVar53;
      auVar41._0_4_ = fVar36 + fVar32 + fVar39;
      auVar41._4_4_ = fVar36 + fVar32 + fVar39;
      auVar41._8_4_ = fVar36 + fVar32 + fVar39;
      auVar41._12_4_ = fVar36 + fVar32 + fVar39;
      auVar42._4_4_ = auVar41._0_4_;
      auVar42._0_4_ = fVar64;
      auVar42._8_4_ = fVar64;
      auVar42._12_4_ = auVar41._0_4_;
      auVar42 = rsqrtps(auVar41,auVar42);
      fVar32 = auVar42._0_4_;
      fVar36 = auVar42._4_4_;
      fVar39 = auVar42._8_4_;
      fVar54 = auVar42._12_4_;
      local_228._4_4_ = fVar40;
      local_228._0_4_ = fVar40;
      fStack_220 = fVar40;
      fStack_21c = fVar40;
      fVar62 = (float)(~-(uint)(fVar64 <= 0.0) &
                      (uint)((3.0 - fVar64 * fVar32 * fVar32) * fVar32 * 0.5));
      fVar63 = (float)(~-(uint)(auVar41._0_4_ <= 0.0) &
                      (uint)((3.0 - auVar41._0_4_ * fVar36 * fVar36) * fVar36 * 0.5));
      fVar57 = fVar62 * fVar57;
      fVar59 = fVar62 * fVar59;
      fVar61 = fVar62 * fVar61;
      fVar66 = fVar62 * ((fVar40 - fVar65) - (fVar34 + fVar30 + fVar37) * fVar4);
      fVar46 = fVar63 * fVar46;
      fVar52 = fVar63 * fVar52;
      fVar53 = fVar63 * fVar53;
      fVar67 = fVar63 * ((fStack_25c - fVar65) - (fVar35 + fVar31 + fVar38) * fVar4);
      fVar36 = (float)((uint)(fVar61 * fVar2 - fVar59 * fVar3) ^ (uint)fVar40 & 0x80000000);
      fVar37 = (float)((uint)(fVar57 * fVar3 - fVar61 * fVar1) ^ (uint)fVar40 & 0x80000000);
      fVar38 = (float)((uint)(fVar59 * fVar1 - fVar57 * fVar2) ^ (uint)fVar40 & 0x80000000);
      fVar55 = (float)((uint)(fVar66 * fVar4 - fVar66 * fVar4) ^ (uint)fVar40 & 0x80000000);
      local_248 = fStack_25c;
      fStack_244 = fStack_25c;
      fStack_240 = fStack_25c;
      fStack_23c = fStack_25c;
      fVar31 = fVar64 - fVar40 * fVar40;
      fVar32 = auVar41._0_4_ - fStack_25c * fStack_25c;
      fVar35 = fVar64 - fVar40 * fVar40;
      fVar65 = auVar41._0_4_ - fStack_25c * fStack_25c;
      fVar72 = (float)((uint)(fVar53 * fVar2 - fVar52 * fVar3) ^ (uint)fStack_25c & 0x80000000);
      fVar73 = (float)((uint)(fVar46 * fVar3 - fVar53 * fVar1) ^ (uint)fStack_25c & 0x80000000);
      fVar74 = (float)((uint)(fVar52 * fVar1 - fVar46 * fVar2) ^ (uint)fStack_25c & 0x80000000);
      fVar76 = (float)((uint)(fVar67 * fVar4 - fVar67 * fVar4) ^ (uint)fStack_25c & 0x80000000);
      uVar23 = -(uint)(fVar31 <= 0.0);
      uVar24 = -(uint)(fVar32 <= 0.0);
      auVar25._0_8_ = CONCAT44(uVar24,uVar23) & 0x38d1b71738d1b717;
      auVar25._8_8_ = 0;
      auVar49._0_4_ = ~uVar23 & (uint)(fVar40 * fVar40 * fVar31);
      auVar49._4_4_ = ~uVar24 & (uint)(fStack_25c * fStack_25c * fVar32);
      auVar49._8_4_ = ~-(uint)(fVar35 <= 0.0) & (uint)(fVar35 * fVar35);
      auVar49._12_4_ = ~-(uint)(fVar65 <= 0.0) & (uint)(fVar65 * fVar65);
      auVar49 = auVar49 | auVar25;
      auVar42 = rsqrtps(_local_228,auVar49);
      fVar30 = auVar49._0_4_;
      fVar34 = auVar49._4_4_;
      fVar29 = auVar49._8_4_;
      fVar47 = auVar49._12_4_;
      fVar31 = auVar42._0_4_;
      fVar32 = auVar42._4_4_;
      fVar35 = auVar42._8_4_;
      fVar65 = auVar42._12_4_;
      fVar62 = (float)(~-(uint)(fVar30 <= 0.0) &
                      (uint)((3.0 - fVar30 * fVar31 * fVar31) * fVar31 * 0.5 * fVar30)) * fVar62;
      fVar63 = (float)(~-(uint)(fVar34 <= 0.0) &
                      (uint)((3.0 - fVar34 * fVar32 * fVar32) * fVar32 * 0.5 * fVar34)) * fVar63;
      fVar39 = (float)(~-(uint)(fVar29 <= 0.0) &
                      (uint)((3.0 - fVar29 * fVar35 * fVar35) * fVar35 * 0.5 * fVar29)) *
               (float)(~-(uint)(fVar64 <= 0.0) &
                      (uint)((3.0 - fVar64 * fVar39 * fVar39) * fVar39 * 0.5));
      fVar64 = (float)(~-(uint)(fVar47 <= 0.0) &
                      (uint)((3.0 - fVar47 * fVar65 * fVar65) * fVar65 * 0.5 * fVar47)) *
               (float)(~-(uint)(auVar41._0_4_ <= 0.0) &
                      (uint)((3.0 - auVar41._0_4_ * fVar54 * fVar54) * fVar54 * 0.5));
      fVar31 = pfVar16[-8];
      fVar32 = pfVar16[-7];
      fVar35 = pfVar16[-6];
      local_278 = fVar36 * fVar62 + fVar57 * fVar39;
      fStack_274 = fVar37 * fVar62 + fVar59 * fVar39;
      fStack_270 = fVar38 * fVar62 + fVar61 * fVar39;
      fStack_26c = fVar55 * fVar62 + fVar66 * fVar39;
      local_238 = local_278;
      fStack_234 = fStack_274;
      fStack_230 = fStack_270;
      fStack_22c = fStack_26c;
      local_168 = fVar72 * fVar63 + fVar46 * fVar64;
      fStack_164 = fVar73 * fVar63 + fVar52 * fVar64;
      fStack_160 = fVar74 * fVar63 + fVar53 * fVar64;
      fStack_15c = fVar76 * fVar63 + fVar67 * fVar64;
      fVar65 = pfVar16[-4];
      fVar30 = pfVar16[-3];
      fVar34 = pfVar16[-2];
      local_258 = (float)((uint)(fVar36 * fVar39 - fVar57 * fVar62) ^ (uint)fVar40 & 0x80000000);
      fStack_254 = (float)((uint)(fVar37 * fVar39 - fVar59 * fVar62) ^ (uint)fVar40 & 0x80000000);
      fStack_250 = (float)((uint)(fVar38 * fVar39 - fVar61 * fVar62) ^ (uint)fVar40 & 0x80000000);
      local_1b8 = (float)((uint)(fVar72 * fVar64 - fVar46 * fVar63) ^ (uint)fStack_25c & 0x80000000)
      ;
      fStack_1b4 = (float)((uint)(fVar73 * fVar64 - fVar52 * fVar63) ^ (uint)fStack_25c & 0x80000000
                          );
      fStack_1b0 = (float)((uint)(fVar74 * fVar64 - fVar53 * fVar63) ^ (uint)fStack_25c & 0x80000000
                          );
      fStack_24c = (float)((uint)(fVar55 * fVar39 - fVar66 * fVar62) ^ (uint)fVar40 & 0x80000000);
      fVar36 = *pfVar16;
      fVar37 = pfVar16[1];
      fVar38 = pfVar16[2];
      fVar52 = fVar65 * fVar89;
      fVar53 = fVar65 * fVar90;
      fVar29 = fVar65 * fVar91;
      fVar65 = fVar65 * fStack_17c;
      local_208 = local_168;
      fStack_204 = fStack_164;
      fStack_200 = fStack_160;
      fStack_1fc = fStack_15c;
      fVar39 = pfVar16[4];
      fVar54 = pfVar16[5];
      fVar46 = pfVar16[6];
      fVar62 = fVar39 * fVar89;
      fVar59 = fVar39 * fVar90;
      fVar39 = fVar39 * fVar91;
      fVar47 = fVar54 * fVar85;
      fVar57 = fVar54 * fVar86;
      fVar54 = fVar54 * fVar87;
      fVar55 = fVar36 * fStack_17c;
      fStack_1ac = (float)((uint)(fVar76 * fVar64 - fVar67 * fVar63) ^ (uint)fStack_25c & 0x80000000
                          );
      local_218 = fVar38 * fVar75 + fVar37 * fVar85 + fVar36 * fVar89;
      fStack_214 = fVar38 * fVar77 + fVar37 * fVar86 + fVar36 * fVar90;
      fStack_210 = fVar38 * fVar71 + fVar37 * fVar87 + fVar36 * fVar91;
      fVar36 = fVar34 * fStack_20c;
      fVar89 = fVar32 * fVar85 + fVar31 * fVar89 + fVar35 * fVar75;
      fVar90 = fVar32 * fVar86 + fVar31 * fVar90 + fVar35 * fVar77;
      fVar91 = fVar32 * fVar87 + fVar31 * fVar91 + fVar35 * fVar71;
      fStack_17c = fVar32 * fVar88 + fVar31 * fStack_17c + fVar35 * fStack_20c;
      fStack_20c = fVar38 * fStack_20c + fVar37 * fVar88 + fVar55;
      fVar85 = fVar34 * fVar75 + fVar30 * fVar85 + fVar52;
      fVar86 = fVar34 * fVar77 + fVar30 * fVar86 + fVar53;
      fVar87 = fVar34 * fVar71 + fVar30 * fVar87 + fVar29;
      fVar88 = fVar36 + fVar30 * fVar88 + fVar65;
      local_188 = fVar89;
      fStack_184 = fVar90;
      fStack_180 = fVar91;
      fVar82 = fVar82 + fVar62 + fVar47 + fVar46 * fVar75;
      fVar83 = fVar83 + fVar59 + fVar57 + fVar46 * fVar77;
      fVar84 = fVar84 + fVar39 + fVar54 + fVar46 * fVar71;
      if (((uint)pfVar16[0xc] & 0x10) != 0) {
        local_288 = fVar56;
        fStack_284 = fVar58;
        fStack_280 = fVar60;
        fStack_27c = fVar40;
        if (0.0 < fStack_254 * fStack_164 + local_258 * local_168 + fStack_250 * fStack_160) {
          local_208 = local_278;
          fStack_204 = fStack_274;
          fStack_200 = fStack_270;
          fStack_1fc = fStack_26c;
          local_1e8 = local_268;
          fStack_1e4 = fStack_264;
          fStack_1e0 = fStack_260;
          fStack_1dc = fStack_25c;
          local_1f8 = fVar56;
          fStack_1f4 = fVar58;
          fStack_1f0 = fVar60;
          fStack_1ec = fVar40;
          local_288 = local_268;
          fStack_284 = fStack_264;
          fStack_280 = fStack_260;
          fStack_27c = fStack_25c;
          local_278 = local_168;
          fStack_274 = fStack_164;
          fStack_270 = fStack_160;
          fStack_26c = fStack_15c;
          local_268 = fVar56;
          fStack_264 = fVar58;
          fStack_260 = fVar60;
          fStack_25c = fVar40;
        }
        bVar7 = true;
        fVar80 = (fStack_264 - fStack_284) * fVar1 - (local_268 - local_288) * fVar2;
        fVar78 = (fStack_260 - fStack_280) * fVar2 - (fStack_264 - fStack_284) * fVar3;
        fVar79 = (local_268 - local_288) * fVar3 - (fStack_260 - fStack_280) * fVar1;
        fVar31 = fVar78 * fVar78;
        fVar32 = fVar79 * fVar79;
        fVar35 = fVar80 * fVar80;
        auVar26._4_4_ = fVar31;
        auVar26._0_4_ = fVar31;
        auVar26._8_4_ = fVar31;
        auVar26._12_4_ = fVar31;
        auVar43._0_4_ = fVar32 + fVar31 + fVar35;
        auVar43._4_4_ = fVar32 + fVar31 + fVar35;
        auVar43._8_4_ = fVar32 + fVar31 + fVar35;
        auVar43._12_4_ = fVar32 + fVar31 + fVar35;
        auVar42 = rsqrtps(auVar26,auVar43);
        fVar31 = auVar42._0_4_;
        fVar32 = auVar42._4_4_;
        fVar35 = auVar42._8_4_;
        fVar78 = fVar78 * (float)(~-(uint)(auVar43._0_4_ <= 0.0) &
                                 (uint)((3.0 - auVar43._0_4_ * fVar31 * fVar31) * fVar31 * 0.5));
        fVar79 = fVar79 * (float)(~-(uint)(auVar43._4_4_ <= 0.0) &
                                 (uint)((3.0 - auVar43._4_4_ * fVar32 * fVar32) * fVar32 * 0.5));
        fVar80 = fVar80 * (float)(~-(uint)(auVar43._8_4_ <= 0.0) &
                                 (uint)((3.0 - auVar43._8_4_ * fVar35 * fVar35) * fVar35 * 0.5));
        fVar81 = 0.0 - (fVar79 * fStack_284 + fVar78 * local_288 + fVar80 * fStack_280);
        local_178 = CONCAT44(fVar79,fVar78);
        uStack_170 = CONCAT44(fVar81,fVar80);
        *pfVar13 = -fVar78;
        pfVar13[1] = -fVar79;
        pfVar13[2] = -fVar80;
        pfVar13[3] = -fVar81;
        local_198 = 0x4040000040400000;
        uStack_190 = 0x4040000040400000;
        local_1f8 = local_268;
        fStack_1f4 = fStack_264;
        fStack_1f0 = fStack_260;
        fStack_1ec = fStack_25c;
        local_1e8 = local_288;
        fStack_1e4 = fStack_284;
        fStack_1e0 = fStack_280;
        fStack_1dc = fStack_27c;
LAB_1438a74fa:
        uStack_190 = 0x4040000040400000;
        local_198 = 0x4040000040400000;
        pfVar16 = pfVar17 + 0x24;
        fVar56 = local_1e8;
        fVar58 = fStack_1e4;
        fVar60 = fStack_1e0;
        fVar40 = fStack_1dc;
        if (pfVar16 != local_1a8[0]) {
          local_d8 = 0x80000000;
          uStack_d0 = 0;
          pfVar18 = pfVar17 + 0x38;
          local_f8._8_4_ = 0x80000000;
          local_f8._0_8_ = 0x8000000080000000;
          local_f8._12_4_ = 0;
          pfVar20 = local_1a8[0];
          pfVar21 = pfVar17;
          local_288 = local_1e8;
          fStack_284 = fStack_1e4;
          fStack_280 = fStack_1e0;
          fStack_27c = fStack_1dc;
          local_268 = local_1f8;
          fStack_264 = fStack_1f4;
          fStack_260 = fStack_1f0;
          fStack_25c = fStack_1ec;
          bVar9 = bVar7;
          cVar19 = bVar7;
          goto LAB_1438a7540;
        }
        break;
      }
      if (((fVar40 == 0.0) && (fStack_25c == 0.0)) ||
         (0.001 < fStack_1b4 * fStack_274 + local_1b8 * local_278 + fStack_1b0 * fStack_270))
      goto LAB_1438a74fa;
      if (0.0 <= (fVar68 * fStack_1d0 - local_1d8 * fVar70) * fVar2 +
                 (fVar70 * fStack_1d4 - fStack_1d0 * fVar69) * fVar1 +
                 (fVar69 * local_1d8 - fStack_1d4 * fVar68) * fVar3) {
        if (-1 < *param_2) {
          bVar7 = fStack_274 * fStack_274 + local_278 * local_278 + fStack_270 * fStack_270 <
                  fStack_164 * fStack_164 + local_168 * local_168 + fStack_160 * fStack_160;
          *param_11 = bVar7;
          pfVar13 = &local_238;
          if (!bVar7) {
            pfVar13 = &local_168;
          }
          fVar31 = *pfVar13;
          fVar32 = pfVar13[1];
          fVar35 = pfVar13[2];
          fVar65 = pfVar13[3];
          *param_6 = fVar31;
          param_6[1] = fVar32;
          param_6[2] = fVar35;
          param_6[3] = fVar65;
          *param_7 = fVar35 * fVar2 - fVar32 * fVar3;
          param_7[1] = fVar31 * fVar3 - fVar35 * fVar1;
          param_7[2] = fVar32 * fVar1 - fVar31 * fVar2;
          param_7[3] = fVar65 * fVar4 - fVar65 * fVar4;
          pfVar13 = &local_1e8;
          if (*param_11 == '\0') {
            pfVar13 = &local_1f8;
          }
          uVar12 = *(undefined8 *)(pfVar13 + 2);
          *(undefined8 *)param_8 = *(undefined8 *)pfVar13;
          *(undefined8 *)(param_8 + 2) = uVar12;
          *param_10 = (int)(((longlong)pfVar17 - lVar11) / 0x90);
          return 0;
        }
        goto LAB_1438a74fa;
      }
      pfVar16 = pfVar16 + 0x24;
      local_res18 = pfVar17 + 0x24;
      fVar75 = local_218;
      fVar77 = fStack_214;
      fVar71 = fStack_210;
      fVar31 = local_158;
      fVar32 = fStack_154;
      fVar35 = fStack_150;
      fVar65 = fStack_14c;
    } while (pfVar17 + 0x24 != local_1a8[0]);
  }
  *param_6 = local_278;
  param_6[1] = fStack_274;
  param_6[2] = fStack_270;
  param_6[3] = fStack_26c;
  param_7[0] = 0.0;
  param_7[1] = 0.0;
  param_7[2] = 0.0;
  param_7[3] = 0.0;
  *param_8 = fVar56;
  param_8[1] = fVar58;
  param_8[2] = fVar60;
  param_8[3] = fVar40;
  goto LAB_1438a7243;
LAB_1438a7540:
  do {
    uVar14 = SUB84(pcVar15,0);
    local_238 = *pfVar16;
    fStack_234 = pfVar16[1];
    fStack_230 = pfVar16[2];
    fStack_22c = pfVar16[3];
    local_248 = pfVar18[-0x10];
    fStack_244 = pfVar18[-0xf];
    local_258 = pfVar18[-0xe];
    fStack_23c = pfVar18[-0xd];
    local_168 = local_238;
    fStack_164 = local_238;
    fStack_160 = local_238;
    fStack_15c = local_238;
    fVar31 = fVar89 * local_238 + fVar82 + fVar85 * fStack_234 + local_218 * fStack_230;
    fVar32 = fVar90 * local_238 + fVar83 + fVar86 * fStack_234 + fStack_214 * fStack_230;
    fVar35 = fVar91 * local_238 + fVar84 + fVar87 * fStack_234 + fStack_210 * fStack_230;
    local_228._4_4_ = fStack_244;
    local_228._0_4_ = fStack_244;
    fStack_220 = fStack_244;
    fStack_21c = fStack_244;
    auVar48._0_4_ = fVar89 * local_248 + fVar82 + fVar85 * fStack_244 + local_218 * local_258;
    auVar48._4_4_ = fVar90 * local_248 + fVar83 + fVar86 * fStack_244 + fStack_214 * local_258;
    auVar48._8_4_ = fVar91 * local_248 + fVar84 + fVar87 * fStack_244 + fStack_210 * local_258;
    local_188 = fVar89;
    fStack_184 = fVar90;
    fStack_180 = fVar91;
    if (bVar9 != false) {
      if ((fVar81 + fVar32 * fVar79 + fVar35 * fVar80 + fVar31 * fVar78 < 0.0) &&
         (fVar81 + auVar48._4_4_ * fVar79 + auVar48._8_4_ * fVar80 + auVar48._0_4_ * fVar78 < 0.0))
      {
        uVar14 = SUB84(&local_178,0);
        fStack_254 = local_258;
        fStack_250 = local_258;
        fStack_24c = local_258;
        fStack_240 = local_258;
        local_1d8 = local_248;
        fStack_1d4 = local_248;
        fStack_1d0 = local_248;
        fStack_1cc = local_248;
        local_1c8 = fStack_230;
        fStack_1c4 = fStack_230;
        fStack_1c0 = fStack_230;
        fStack_1bc = fStack_230;
        local_1b8 = fStack_234;
        fStack_1b4 = fStack_234;
        fStack_1b0 = fStack_234;
        fStack_1ac = fStack_234;
        FUN_1438a9330();
        fVar31 = fVar85 * fStack_134;
        fVar32 = fVar85 * fStack_130;
        fVar35 = fVar85 * fStack_12c;
        cVar22 = cVar22 == '\0';
        fVar75 = fVar86 * fStack_120;
        fVar77 = fVar86 * fStack_11c;
        fVar56 = fVar83 * fStack_120;
        fVar40 = fStack_210 * fStack_10c;
        fVar65 = local_218 * fStack_12c;
        fVar88 = fVar87 * fStack_10c;
        fVar71 = fStack_214 * fStack_11c;
        fVar58 = fVar82 * fStack_134;
        fVar60 = fVar82 * fStack_130;
        fVar85 = fVar86 * local_128 + fVar85 * local_138 + fVar87 * local_118;
        fVar86 = fVar86 * fStack_124 + fVar31 + fVar87 * fStack_114;
        fVar87 = fVar75 + fVar32 + fVar87 * fStack_110;
        fVar88 = fVar77 + fVar35 + fVar88;
        fVar75 = fStack_214 * local_128 + local_218 * local_138 + fStack_210 * local_118;
        fVar77 = fStack_214 * fStack_124 + local_218 * fStack_134 + fStack_210 * fStack_114;
        fStack_210 = fStack_214 * fStack_120 + local_218 * fStack_130 + fStack_210 * fStack_110;
        local_218 = fVar75;
        fStack_214 = fVar77;
        fStack_20c = fVar71 + fVar65 + fVar40;
        local_188 = fVar90 * local_128 + fVar89 * local_138 + fVar91 * local_118;
        fStack_184 = fVar90 * fStack_124 + fVar89 * fStack_134 + fVar91 * fStack_114;
        fStack_180 = fVar90 * fStack_120 + fVar89 * fStack_130 + fVar91 * fStack_110;
        fVar82 = local_108 + fVar82 * local_138 + fVar83 * local_128 + fVar84 * local_118;
        fVar83 = fStack_104 + fVar58 + fVar83 * fStack_124 + fVar84 * fStack_114;
        fVar84 = fStack_100 + fVar60 + fVar56 + fVar84 * fStack_110;
        fStack_17c = fVar90 * fStack_11c + fVar89 * fStack_12c + fVar91 * fStack_10c;
        fVar31 = local_188 * local_168 + fVar82 + fVar85 * local_1b8 + fVar75 * local_1c8;
        fVar32 = fStack_184 * fStack_164 + fVar83 + fVar86 * fStack_1b4 + fVar77 * fStack_1c4;
        fVar35 = fStack_180 * fStack_160 + fVar84 + fVar87 * fStack_1b0 + fStack_210 * fStack_1c0;
        auVar48._0_4_ =
             local_188 * local_1d8 + fVar82 + fVar85 * (float)local_228._0_4_ + fVar75 * local_258;
        auVar48._4_4_ =
             fStack_184 * fStack_1d4 + fVar83 + fVar86 * (float)local_228._4_4_ +
             fVar77 * fStack_254;
        auVar48._8_4_ =
             fStack_180 * fStack_1d0 + fVar84 + fVar87 * fStack_220 + fStack_210 * fStack_250;
      }
      bVar9 = false;
    }
    fVar71 = fStack_1fc;
    fVar77 = fStack_200;
    fVar75 = fStack_204;
    fVar60 = local_208;
    fVar56 = auVar48._0_4_;
    fVar65 = auVar48._4_4_;
    fVar58 = auVar48._8_4_;
    local_238 = fVar31;
    fStack_234 = fVar32;
    fStack_230 = fVar35;
    fVar40 = fStack_23c;
    if ((bool)cVar22 != false) {
      fVar40 = 0.0 - fStack_22c;
      fStack_22c = 0.0 - fStack_23c;
      local_238 = fVar56;
      fStack_234 = fVar65;
      fStack_230 = fVar58;
      fVar65 = fVar32;
      fVar56 = fVar31;
      fVar58 = fVar35;
    }
    local_258 = fVar56;
    fStack_254 = fVar65;
    fStack_250 = fVar58;
    fStack_24c = fVar40;
    local_248 = local_238;
    fStack_244 = fStack_234;
    fStack_240 = fStack_230;
    fStack_23c = fStack_22c;
    fVar31 = (local_238 - local_158) * fVar1;
    fVar89 = (fStack_234 - fStack_154) * fVar2;
    fVar30 = (fStack_230 - fStack_150) * fVar3;
    fVar32 = (fVar56 - local_158) * fVar1;
    fVar90 = (fVar65 - fStack_154) * fVar2;
    fVar34 = (fVar58 - fStack_150) * fVar3;
    fVar38 = (local_238 - local_158) - (fVar89 + fVar31 + fVar30) * fVar1;
    fVar39 = (fStack_234 - fStack_154) - (fVar89 + fVar31 + fVar30) * fVar2;
    fVar54 = (fStack_230 - fStack_150) - (fVar89 + fVar31 + fVar30) * fVar3;
    fVar46 = (fVar56 - local_158) - (fVar90 + fVar32 + fVar34) * fVar1;
    fVar47 = (fVar65 - fStack_154) - (fVar90 + fVar32 + fVar34) * fVar2;
    fVar62 = (fVar58 - fStack_150) - (fVar90 + fVar32 + fVar34) * fVar3;
    fVar53 = fVar39 * fVar39 + fVar38 * fVar38 + fVar54 * fVar54;
    fVar35 = fVar46 * fVar46;
    fVar91 = fVar47 * fVar47;
    fVar36 = fVar62 * fVar62;
    auVar44._0_4_ = fVar91 + fVar35 + fVar36;
    auVar44._4_4_ = fVar91 + fVar35 + fVar36;
    auVar44._8_4_ = fVar91 + fVar35 + fVar36;
    auVar44._12_4_ = fVar91 + fVar35 + fVar36;
    auVar5._4_4_ = auVar44._0_4_;
    auVar5._0_4_ = fVar53;
    auVar5._8_4_ = fVar53;
    auVar5._12_4_ = auVar44._0_4_;
    auVar42 = rsqrtps(auVar44,auVar5);
    fVar35 = auVar42._0_4_;
    fVar91 = auVar42._4_4_;
    fVar36 = auVar42._8_4_;
    fVar37 = auVar42._12_4_;
    auVar45._0_4_ = fVar35 * 0.5;
    auVar45._4_4_ = fVar91 * 0.5;
    auVar45._8_4_ = fVar36 * 0.5;
    auVar45._12_4_ = fVar37 * 0.5;
    fVar52 = (float)(~-(uint)(fVar53 <= 0.0) &
                    (uint)(((float)local_198 - fVar53 * fVar35 * fVar35) * auVar45._0_4_));
    fVar57 = (float)(~-(uint)(auVar44._0_4_ <= 0.0) &
                    (uint)((local_198._4_4_ - auVar44._0_4_ * fVar91 * fVar91) * auVar45._4_4_));
    fVar38 = fVar52 * fVar38;
    fVar39 = fVar52 * fVar39;
    fVar54 = fVar52 * fVar54;
    fVar29 = fVar52 * ((fStack_22c - fStack_14c) - (fVar89 + fVar31 + fVar30) * fVar4);
    fVar46 = fVar57 * fVar46;
    fVar47 = fVar57 * fVar47;
    fVar62 = fVar57 * fVar62;
    fVar59 = fVar57 * ((fVar40 - fStack_14c) - (fVar90 + fVar32 + fVar34) * fVar4);
    fVar55 = (float)((uint)(fVar54 * fVar2 - fVar39 * fVar3) ^ (uint)fStack_22c & 0x80000000);
    fVar63 = (float)((uint)(fVar38 * fVar3 - fVar54 * fVar1) ^ (uint)fStack_22c & 0x80000000);
    fVar61 = (float)((uint)(fVar39 * fVar1 - fVar38 * fVar2) ^ (uint)fStack_22c & 0x80000000);
    local_1d8 = (float)((uint)(fVar62 * fVar2 - fVar47 * fVar3) ^ (uint)fVar40 & 0x80000000);
    fStack_1d4 = (float)((uint)(fVar46 * fVar3 - fVar62 * fVar1) ^ (uint)fVar40 & 0x80000000);
    fStack_1d0 = (float)((uint)(fVar47 * fVar1 - fVar46 * fVar2) ^ (uint)fVar40 & 0x80000000);
    fStack_1cc = (float)((uint)(fVar59 * fVar4 - fVar59 * fVar4) ^ (uint)fVar40 & 0x80000000);
    fVar31 = fVar53 - fStack_22c * fStack_22c;
    fVar32 = auVar44._0_4_ - fVar40 * fVar40;
    fVar35 = fVar53 - fStack_22c * fStack_22c;
    fVar89 = auVar44._0_4_ - fVar40 * fVar40;
    uVar23 = -(uint)(fVar31 <= 0.0);
    uVar24 = -(uint)(fVar32 <= 0.0);
    auVar27._0_8_ = CONCAT44(uVar24,uVar23) & 0x38d1b71738d1b717;
    auVar27._8_8_ = 0;
    auVar50._0_4_ = ~uVar23 & (uint)(fStack_22c * fStack_22c * fVar31);
    auVar50._4_4_ = ~uVar24 & (uint)(fVar40 * fVar40 * fVar32);
    auVar50._8_4_ = ~-(uint)(fVar35 <= 0.0) & (uint)(fVar35 * fVar35);
    auVar50._12_4_ = ~-(uint)(fVar89 <= 0.0) & (uint)(fVar89 * fVar89);
    auVar50 = auVar50 | auVar27;
    auVar42 = rsqrtps(auVar45,auVar50);
    fVar90 = auVar50._0_4_;
    fVar91 = auVar50._4_4_;
    fVar30 = auVar50._8_4_;
    fVar34 = auVar50._12_4_;
    fVar31 = auVar42._0_4_;
    fVar32 = auVar42._4_4_;
    fVar35 = auVar42._8_4_;
    fVar89 = auVar42._12_4_;
    fVar52 = (float)(~-(uint)(fVar90 <= 0.0) &
                    (uint)(((float)local_198 - fVar90 * fVar31 * fVar31) * fVar31 * 0.5 * fVar90)) *
             fVar52;
    fVar57 = (float)(~-(uint)(fVar91 <= 0.0) &
                    (uint)((local_198._4_4_ - fVar91 * fVar32 * fVar32) * fVar32 * 0.5 * fVar91)) *
             fVar57;
    fVar31 = (float)(~-(uint)(fVar30 <= 0.0) &
                    (uint)(((float)uStack_190 - fVar30 * fVar35 * fVar35) * fVar35 * 0.5 * fVar30))
             * (float)(~-(uint)(fVar53 <= 0.0) &
                      (uint)(((float)uStack_190 - fVar53 * fVar36 * fVar36) * auVar45._8_4_));
    fVar32 = (float)(~-(uint)(fVar34 <= 0.0) &
                    (uint)((uStack_190._4_4_ - fVar34 * fVar89 * fVar89) * fVar89 * 0.5 * fVar34)) *
             (float)(~-(uint)(auVar44._0_4_ <= 0.0) &
                    (uint)((uStack_190._4_4_ - auVar44._0_4_ * fVar37 * fVar37) * auVar45._12_4_));
    fVar90 = fVar55 * fVar52 + fVar38 * fVar31;
    fVar91 = fVar63 * fVar52 + fVar39 * fVar31;
    fVar30 = fVar61 * fVar52 + fVar54 * fVar31;
    fVar34 = (float)((uint)(fVar29 * fVar4 - fVar29 * fVar4) ^ (uint)fStack_22c & 0x80000000) *
             fVar52 + fVar29 * fVar31;
    local_228._4_4_ = fVar91;
    local_228._0_4_ = fVar90;
    fStack_220 = fVar30;
    fStack_21c = fVar34;
    local_1c8 = fVar90;
    fStack_1c4 = fVar91;
    fStack_1c0 = fVar30;
    fStack_1bc = fVar34;
    fVar53 = (float)((uint)(fVar55 * fVar31 - fVar38 * fVar52) ^ (uint)fStack_22c & 0x80000000);
    fVar29 = (float)((uint)(fVar63 * fVar31 - fVar39 * fVar52) ^ (uint)fStack_22c & 0x80000000);
    fVar55 = (float)((uint)(fVar61 * fVar31 - fVar54 * fVar52) ^ (uint)fStack_22c & 0x80000000);
    local_1c8 = local_1d8 * fVar57 + fVar46 * fVar32;
    fStack_1c4 = fStack_1d4 * fVar57 + fVar47 * fVar32;
    fStack_1c0 = fStack_1d0 * fVar57 + fVar62 * fVar32;
    fStack_1bc = fStack_1cc * fVar57 + fVar59 * fVar32;
    fVar59 = (float)((uint)(local_1d8 * fVar32 - fVar46 * fVar57) ^ (uint)fVar40 & 0x80000000);
    fVar47 = (float)((uint)(fStack_1d4 * fVar32 - fVar47 * fVar57) ^ (uint)fVar40 & 0x80000000);
    fVar57 = (float)((uint)(fStack_1d0 * fVar32 - fVar62 * fVar57) ^ (uint)fVar40 & 0x80000000);
    local_1b8 = local_1c8;
    fStack_1b4 = fStack_1c4;
    fStack_1b0 = fStack_1c0;
    fStack_1ac = fStack_1bc;
    fVar31 = local_1c8;
    fVar32 = fStack_1c4;
    fVar35 = fStack_1c0;
    fVar89 = fStack_1bc;
    fVar36 = fVar59;
    fVar37 = fVar47;
    fVar38 = fVar57;
    fVar39 = local_238;
    fVar54 = fStack_234;
    fVar46 = fStack_230;
    fVar52 = fStack_22c;
    if (((*(byte *)(pfVar18 + 0xc) & 0x10) != 0) &&
       (0.0 < fVar29 * fStack_1c4 + fVar53 * local_1c8 + fVar55 * fStack_1c0)) {
      local_1b8 = fVar90;
      fStack_1b4 = fVar91;
      fStack_1b0 = fVar30;
      fStack_1ac = fVar34;
      local_248 = fVar56;
      fStack_244 = fVar65;
      fStack_240 = fVar58;
      fStack_23c = fVar40;
      local_258 = local_238;
      fStack_254 = fStack_234;
      fStack_250 = fStack_230;
      fStack_24c = fStack_22c;
      fVar31 = fVar90;
      fVar32 = fVar91;
      fVar35 = fVar30;
      fVar89 = fVar34;
      fVar90 = local_1c8;
      fVar91 = fStack_1c4;
      fVar30 = fStack_1c0;
      fVar34 = fStack_1bc;
      fVar36 = fVar53;
      fVar37 = fVar29;
      fVar38 = fVar55;
      fVar39 = fVar56;
      fVar54 = fVar65;
      fVar46 = fVar58;
      fVar52 = fVar40;
      fVar56 = local_238;
      fVar65 = fStack_234;
      fVar58 = fStack_230;
      fVar40 = fStack_22c;
      fVar53 = fVar59;
      fVar29 = fVar47;
      fVar55 = fVar57;
    }
    if (((cVar19 != '\0') ||
        ((fVar91 - fVar32) * (fVar91 - fVar32) + (fVar90 - fVar31) * (fVar90 - fVar31) +
         (fVar30 - fVar35) * (fVar30 - fVar35) <= local_e8)) ||
       (fVar29 * fVar32 + fVar53 * fVar31 + fVar55 * fVar35 <= local_e8)) {
      bVar8 = 0;
    }
    else {
      bVar8 = 1;
    }
    auVar6._4_4_ = -(uint)(0.0 <= (float)((uint)fVar38 ^ local_f8._8_4_) * fStack_270 +
                                  (float)((uint)fVar37 ^ local_f8._4_4_) * fStack_274 +
                                  (float)((uint)fVar36 ^ local_f8._0_4_) * local_278);
    auVar6._0_4_ = -(uint)(0.0 <= fVar55 * fStack_270 + fVar29 * fStack_274 + fVar53 * local_278);
    auVar6._8_4_ = -(uint)(0.0 <= fVar55 * fStack_200 + fVar29 * fStack_204 + fVar53 * local_208);
    auVar6._12_4_ =
         -(uint)(0.0 <= (float)((uint)fVar38 ^ local_f8._8_4_) * fStack_200 +
                        (float)((uint)fVar37 ^ local_f8._4_4_) * fStack_204 +
                        (float)((uint)fVar36 ^ local_f8._0_4_) * local_208);
    uVar24 = movmskps(uVar14,auVar6);
    uVar23 = -(uint)bVar8 & 0x10;
    uVar24 = (uVar24 | uVar23) - 1;
    pcVar15 = (char *)(ulonglong)uVar24;
    if (0x1e < uVar24) goto LAB_1438a7c02;
    uVar23 = (uint)(&switchD_1438a7bb1::switchdataD_1438a81fc)[(int)uVar24];
    pcVar15 = IMAGE_DOS_HEADER_140000000.e_magic +
              (&switchD_1438a7bb1::switchdataD_1438a81d0)
              [(&switchD_1438a7bb1::switchdataD_1438a81fc)[(int)uVar24]];
    local_258 = fVar56;
    fStack_254 = fVar65;
    fStack_250 = fVar58;
    fStack_24c = fVar40;
    local_248 = fVar39;
    fStack_244 = fVar54;
    fStack_240 = fVar46;
    fStack_23c = fVar52;
    local_1c8 = fVar90;
    fStack_1c4 = fVar91;
    fStack_1c0 = fVar30;
    fStack_1bc = fVar34;
    local_1b8 = fVar31;
    fStack_1b4 = fVar32;
    fStack_1b0 = fVar35;
    fStack_1ac = fVar89;
    switch(uVar24) {
    case 0:
    case 2:
      local_1e8 = fVar39;
      fStack_1e4 = fVar54;
      fStack_1e0 = fVar46;
      fStack_1dc = fVar52;
      pfVar17 = pfVar16;
      local_288 = fVar39;
      fStack_284 = fVar54;
      fStack_280 = fVar46;
      fStack_27c = fVar52;
      local_278 = fVar90;
      fStack_274 = fVar91;
      fStack_270 = fVar30;
      fStack_26c = fVar34;
      break;
    default:
      goto switchD_1438a7bb1_caseD_1;
    case 3:
    case 6:
    case 0xc:
    case 0x10:
    case 0x13:
    case 0x16:
    case 0x1b:
      goto switchD_1438a7bb1_caseD_3;
    case 4:
    case 0x14:
      if ((fVar91 * fVar91 + fVar90 * fVar90 + fVar30 * fVar30 <
           fStack_204 * fStack_204 + local_208 * local_208 + fStack_200 * fStack_200) &&
         (iVar10 = FUN_143879aa0(&local_248,&local_1e8,&local_1f8,local_148), iVar10 != 0))
      goto switchD_1438a7bb1_caseD_1e;
      goto switchD_1438a7bb1_caseD_3;
    case 5:
    case 0x15:
    case 0x18:
    case 0x1a:
      bVar7 = fVar91 * fVar91 + fVar90 * fVar90 + fVar30 * fVar30 <
              fVar32 * fVar32 + fVar31 * fVar31 + fVar35 * fVar35;
      *param_11 = bVar7;
      pfVar13 = &local_1c8;
      if (!bVar7) {
        pfVar13 = &local_1b8;
      }
      fVar31 = *pfVar13;
      fVar32 = pfVar13[1];
      fVar35 = pfVar13[2];
      fVar65 = pfVar13[3];
      *param_6 = fVar31;
      param_6[1] = fVar32;
      param_6[2] = fVar35;
      param_6[3] = fVar65;
      *param_7 = fVar35 * fVar2 - fVar32 * fVar3;
      param_7[1] = fVar31 * fVar3 - fVar35 * fVar1;
      param_7[2] = fVar32 * fVar1 - fVar31 * fVar2;
      param_7[3] = fVar65 * fVar4 - fVar65 * fVar4;
      pfVar13 = &local_248;
      if (*param_11 == '\0') {
        pfVar13 = &local_258;
      }
      uVar12 = *(undefined8 *)(pfVar13 + 2);
      *(undefined8 *)param_8 = *(undefined8 *)pfVar13;
      *(undefined8 *)(param_8 + 2) = uVar12;
      *param_10 = (int)(((longlong)pfVar16 - lVar11) / 0x90);
      return 0;
    case 7:
    case 0xb:
      local_208 = fVar31;
      fStack_204 = fVar32;
      fStack_200 = fVar35;
      fStack_1fc = fVar89;
      local_1f8 = fVar56;
      fStack_1f4 = fVar65;
      fStack_1f0 = fVar58;
      fStack_1ec = fVar40;
      pfVar21 = pfVar16;
      local_268 = fVar56;
      fStack_264 = fVar65;
      fStack_260 = fVar58;
      fStack_25c = fVar40;
      break;
    case 8:
      local_208 = fVar31;
      fStack_204 = fVar32;
      fStack_200 = fVar35;
      fStack_1fc = fVar89;
      local_1e8 = fVar39;
      fStack_1e4 = fVar54;
      fStack_1e0 = fVar46;
      fStack_1dc = fVar52;
      local_1f8 = fVar56;
      fStack_1f4 = fVar65;
      fStack_1f0 = fVar58;
      fStack_1ec = fVar40;
      pfVar17 = pfVar16;
      pfVar21 = pfVar16;
      local_288 = fVar39;
      fStack_284 = fVar54;
      fStack_280 = fVar46;
      fStack_27c = fVar52;
      local_278 = fVar90;
      fStack_274 = fVar91;
      fStack_270 = fVar30;
      fStack_26c = fVar34;
      local_268 = fVar56;
      fStack_264 = fVar65;
      fStack_260 = fVar58;
      fStack_25c = fVar40;
      break;
    case 9:
    case 0x19:
      if ((fVar32 * fVar32 + fVar31 * fVar31 + fVar35 * fVar35 <
           fStack_274 * fStack_274 + local_278 * local_278 + fStack_270 * fStack_270) &&
         (iVar10 = FUN_143879aa0(&local_258,&local_1e8,&local_1f8,local_148), iVar10 != 0))
      goto switchD_1438a7bb1_caseD_1c;
      goto switchD_1438a7bb1_caseD_1;
    case 0xe:
    case 0xf:
      if (0.0 < fVar91 * fStack_204 + fVar90 * local_208 + fVar30 * fStack_200) goto LAB_1438a7f28;
      goto LAB_1438a7ee8;
    case 0x1c:
switchD_1438a7bb1_caseD_1c:
      *param_6 = fVar31;
      param_6[1] = fVar32;
      param_6[2] = fVar35;
      param_6[3] = fVar89;
      *param_7 = fVar32 * fVar3 - fVar35 * fVar2;
      param_7[1] = fVar35 * fVar1 - fVar31 * fVar3;
      param_7[2] = fVar31 * fVar2 - fVar32 * fVar1;
      param_7[3] = fVar89 * fVar4 - fVar89 * fVar4;
      *param_8 = fVar56;
      param_8[1] = fVar65;
      param_8[2] = fVar58;
      param_8[3] = fVar40;
      *param_10 = (int)(((longlong)pfVar16 - lVar11) / 0x90);
      *param_11 = '\0';
      return 0;
    case 0x1e:
switchD_1438a7bb1_caseD_1e:
      *param_6 = fVar90;
      param_6[1] = fVar91;
      param_6[2] = fVar30;
      param_6[3] = fVar34;
      *param_7 = fVar30 * fVar2 - fVar91 * fVar3;
      param_7[1] = fVar90 * fVar3 - fVar30 * fVar1;
      param_7[2] = fVar91 * fVar1 - fVar90 * fVar2;
      param_7[3] = fVar34 * fVar4 - fVar34 * fVar4;
      *param_8 = fVar39;
      param_8[1] = fVar54;
      param_8[2] = fVar46;
      param_8[3] = fVar52;
      lVar11 = ((longlong)pfVar16 - lVar11) / 0x12 + ((longlong)pfVar16 - lVar11 >> 0x3f);
      goto LAB_1438a7253;
    }
LAB_1438a7c02:
    fVar31 = pfVar18[-4];
    fVar32 = pfVar18[-3];
    fVar35 = pfVar18[-2];
    fVar40 = *pfVar18;
    fVar60 = pfVar18[1];
    fVar75 = pfVar18[2];
    fVar77 = pfVar18[-8];
    fVar71 = pfVar18[-7];
    fVar30 = pfVar18[-6];
    fVar89 = pfVar18[4];
    fVar90 = pfVar18[5];
    fVar91 = pfVar18[6];
    fVar37 = fVar60 * fVar88;
    fVar36 = fVar71 * fVar88;
    fVar34 = fVar40 * fStack_17c;
    fVar82 = fVar82 + fVar89 * local_188 + fVar90 * fVar85 + fVar91 * local_218;
    fVar83 = fVar83 + fVar89 * fStack_184 + fVar90 * fVar86 + fVar91 * fStack_214;
    fVar84 = fVar84 + fVar89 * fStack_180 + fVar90 * fVar87 + fVar91 * fStack_210;
    fVar38 = fVar35 * local_218;
    fVar52 = fVar35 * fStack_214;
    fVar53 = fVar35 * fStack_210;
    fVar89 = fVar71 * fVar85 + fVar77 * local_188 + fVar30 * local_218;
    fVar90 = fVar71 * fVar86 + fVar77 * fStack_184 + fVar30 * fStack_214;
    fVar91 = fVar71 * fVar87 + fVar77 * fStack_180 + fVar30 * fStack_210;
    local_218 = fVar75 * local_218 + fVar60 * fVar85 + fVar40 * local_188;
    fStack_214 = fVar75 * fStack_214 + fVar60 * fVar86 + fVar40 * fStack_184;
    fStack_210 = fVar75 * fStack_210 + fVar60 * fVar87 + fVar40 * fStack_180;
    fVar85 = fVar38 + fVar32 * fVar85 + fVar31 * local_188;
    fVar86 = fVar52 + fVar32 * fVar86 + fVar31 * fStack_184;
    fVar87 = fVar53 + fVar32 * fVar87 + fVar31 * fStack_180;
    fVar88 = fVar35 * fStack_20c + fVar32 * fVar88 + fVar31 * fStack_17c;
    local_188 = fVar89;
    fStack_184 = fVar90;
    fStack_180 = fVar91;
    fStack_17c = fVar36 + fVar77 * fStack_17c + fVar30 * fStack_20c;
    fStack_20c = fVar75 * fStack_20c + fVar37 + fVar34;
    if ((*(byte *)(pfVar18 + 0xc) & 0x10) == 0) {
      cVar19 = false;
    }
    else {
      fVar80 = (fVar65 - fVar54) * fVar1 - (fVar56 - fVar39) * fVar2;
      fVar78 = (fVar58 - fVar46) * fVar2 - (fVar65 - fVar54) * fVar3;
      fVar79 = (fVar56 - fVar39) * fVar3 - (fVar58 - fVar46) * fVar1;
      fVar31 = fVar78 * fVar78;
      fVar32 = fVar79 * fVar79;
      auVar33._8_4_ = fVar80 * fVar80;
      auVar33._4_4_ = auVar33._8_4_;
      auVar33._0_4_ = auVar33._8_4_;
      auVar33._12_4_ = auVar33._8_4_;
      auVar51._0_4_ = fVar32 + fVar31 + auVar33._8_4_;
      auVar51._4_4_ = fVar32 + fVar31 + auVar33._8_4_;
      auVar51._8_4_ = fVar32 + fVar31 + auVar33._8_4_;
      auVar51._12_4_ = fVar32 + fVar31 + auVar33._8_4_;
      auVar42 = rsqrtps(auVar33,auVar51);
      fVar31 = auVar42._0_4_;
      fVar32 = auVar42._4_4_;
      fVar35 = auVar42._8_4_;
      fVar78 = fVar78 * (float)(~-(uint)(auVar51._0_4_ <= 0.0) &
                               (uint)(((float)local_198 - auVar51._0_4_ * fVar31 * fVar31) *
                                     fVar31 * 0.5));
      fVar79 = fVar79 * (float)(~-(uint)(auVar51._4_4_ <= 0.0) &
                               (uint)((local_198._4_4_ - auVar51._4_4_ * fVar32 * fVar32) *
                                     fVar32 * 0.5));
      fVar80 = fVar80 * (float)(~-(uint)(auVar51._8_4_ <= 0.0) &
                               (uint)(((float)uStack_190 - auVar51._8_4_ * fVar35 * fVar35) *
                                     fVar35 * 0.5));
      fVar81 = 0.0 - (fVar54 * fVar79 + fVar39 * fVar78 + fVar46 * fVar80);
      local_178 = CONCAT44(fVar79,fVar78);
      uStack_170 = CONCAT44(fVar81,fVar80);
      if (!bVar7) {
        bVar7 = true;
        *pfVar13 = (float)((uint)fVar78 ^ (uint)local_d8);
        pfVar13[1] = (float)((uint)fVar79 ^ (uint)local_d8);
        pfVar13[2] = (float)((uint)fVar80 ^ (uint)local_d8);
        pfVar13[3] = (float)((uint)fVar81 ^ (uint)local_d8);
        local_198 = 0x4040000040400000;
        uStack_190 = 0x4040000040400000;
      }
      bVar9 = true;
      cVar19 = true;
    }
    pfVar16 = pfVar16 + 0x24;
    pfVar18 = pfVar18 + 0x24;
  } while (pfVar16 != pfVar20);
  auVar28._4_4_ = -(uint)(pfVar17[5] == pfVar17[1]);
  auVar28._0_4_ = -(uint)(pfVar17[4] == *pfVar17);
  auVar28._8_4_ = -(uint)(pfVar17[6] == pfVar17[2]);
  auVar28._12_4_ = -(uint)(pfVar17[7] == pfVar17[3]);
  iVar10 = movmskps(uVar23,auVar28);
  lVar11 = (longlong)pfVar17 - lVar11;
  if (iVar10 != 0xf) {
    fVar31 = (fStack_204 - fStack_274) * fRam00000001467f07e4;
    fVar32 = (fStack_200 - fStack_270) * fRam00000001467f07e8;
    fVar35 = (fStack_1fc - fStack_26c) * fRam00000001467f07ec;
    *param_6 = (local_208 - local_278) * _DAT_1467f07e0 + local_278;
    param_6[1] = fVar31 + fStack_274;
    param_6[2] = fVar32 + fStack_270;
    param_6[3] = fVar35 + fStack_26c;
    fVar31 = (fStack_264 - fStack_284) * fRam00000001467f07e4;
    fVar32 = (fStack_260 - fStack_280) * fRam00000001467f07e8;
    fVar35 = (fStack_25c - fStack_27c) * fRam00000001467f07ec;
    *param_8 = (local_268 - local_288) * _DAT_1467f07e0 + local_288;
    param_8[1] = fVar31 + fStack_284;
    param_8[2] = fVar32 + fStack_280;
    param_8[3] = fVar35 + fStack_27c;
    param_7[0] = 0.0;
    param_7[1] = 0.0;
    param_7[2] = 0.0;
    param_7[3] = 0.0;
    *param_10 = (int)(lVar11 / 0x90);
    *param_11 = '\x01';
    return 1;
  }
  *(ulonglong *)param_6 = CONCAT44(fStack_274,local_278);
  *(ulonglong *)(param_6 + 2) = CONCAT44(fStack_26c,fStack_270);
  *(ulonglong *)param_8 = CONCAT44(fStack_284,local_288);
  *(ulonglong *)(param_8 + 2) = CONCAT44(fStack_27c,fStack_280);
  param_7[0] = 0.0;
  param_7[1] = 0.0;
  param_7[2] = 0.0;
  param_7[3] = 0.0;
  goto LAB_1438a7246;
switchD_1438a7bb1_caseD_3:
LAB_1438a7f28:
  *param_6 = fVar60;
  param_6[1] = fVar75;
  param_6[2] = fVar77;
  param_6[3] = fVar71;
  *param_7 = fVar75 * fVar3 - fVar77 * fVar2;
  param_7[1] = fVar77 * fVar1 - fVar60 * fVar3;
  param_7[2] = fVar60 * fVar2 - fVar75 * fVar1;
  param_7[3] = fVar71 * fVar4 - fVar71 * fVar4;
  *(ulonglong *)param_8 = CONCAT44(fStack_264,local_268);
  *(ulonglong *)(param_8 + 2) = CONCAT44(fStack_25c,fStack_260);
  *param_10 = (int)(((longlong)pfVar21 - lVar11) / 0x90);
  *param_11 = '\0';
  return 0;
switchD_1438a7bb1_caseD_1:
LAB_1438a7ee8:
  *param_6 = local_278;
  param_6[1] = fStack_274;
  param_6[2] = fStack_270;
  param_6[3] = fStack_26c;
  *param_7 = fStack_270 * fVar2 - fStack_274 * fVar3;
  param_7[1] = local_278 * fVar3 - fStack_270 * fVar1;
  param_7[2] = fStack_274 * fVar1 - local_278 * fVar2;
  param_7[3] = fStack_26c * fVar4 - fStack_26c * fVar4;
  *(ulonglong *)param_8 = CONCAT44(fStack_284,local_288);
  *(ulonglong *)(param_8 + 2) = CONCAT44(fStack_27c,fStack_280);
LAB_1438a7243:
  lVar11 = (longlong)pfVar17 - lVar11;
LAB_1438a7246:
  lVar11 = lVar11 / 0x12 + (lVar11 >> 0x3f);
LAB_1438a7253:
  *param_10 = (int)(lVar11 >> 3) - (int)(lVar11 >> 0x3f);
  *param_11 = '\x01';
  return 0;
}



// FUNCTION 1438a8220 FUN_1438a8220 body=3341 status=ok
// SIG undefined FUN_1438a8220(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000144040402) overlaps instruction at (ram,0x000144040401)
    */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001438a8371) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_1438a8220(undefined8 param_1,uint param_2,char param_3,float *param_4,undefined1 *param_5
                    )

{
  longlong *plVar1;
  float fVar2;
  byte bVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  bool bVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  uint uVar22;
  undefined8 *puVar23;
  longlong *plVar24;
  int *piVar25;
  int *piVar26;
  longlong lVar27;
  float *pfVar28;
  byte *pbVar29;
  float *pfVar30;
  undefined4 uVar31;
  uint uVar32;
  longlong lVar33;
  int *piVar34;
  undefined8 uVar35;
  float *pfVar36;
  ulonglong uVar37;
  char *pcVar38;
  undefined4 uVar39;
  uint uVar40;
  ulonglong *puVar41;
  byte bVar44;
  float fVar42;
  ulonglong *puVar45;
  byte bVar46;
  float *pfVar47;
  ulonglong *puVar48;
  bool bVar49;
  bool bVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar58;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar59;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar80;
  undefined1 auVar79 [12];
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  longlong lStack_2b8;
  longlong *plStack_2b0;
  undefined1 auStack_2a8 [8];
  longlong *plStack_2a0;
  undefined8 uStack_298;
  float *local_278;
  double dStack_270;
  double local_268;
  ulonglong *puStack_260;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float *local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  byte abStack_57 [31];
  ulonglong *puVar43;
  
  puVar45 = (ulonglong *)(ulonglong)param_2;
  plStack_2a0 = (longlong *)0x1438a827a;
  pfVar47 = param_4;
  pfVar28 = (float *)hkaiEdgePath::getEdge();
  fVar71 = fRam00000001467f08ac;
  fVar66 = fRam00000001467f08a8;
  fVar53 = fRam00000001467f08a4;
  fVar61 = _DAT_1467f08a0;
  fVar59 = fRam00000001467f089c;
  fVar78 = fRam00000001467f0898;
  fVar76 = fRam00000001467f0894;
  fVar74 = _DAT_1467f0890;
  fVar2 = pfVar28[8];
  fVar14 = pfVar28[9];
  fVar15 = pfVar28[10];
  fStack_1cc = pfVar28[0xb];
  puVar48 = (ulonglong *)(ulonglong)param_2;
  fVar89 = 0.0;
  fVar90 = 0.0;
  fVar91 = 0.0;
  fVar92 = 0.0;
  local_208 = _DAT_1467f08b0;
  uStack_200 = uRam00000001467f08b8;
  bVar49 = false;
  local_268._0_4_ = 0x3a83126f;
  local_128 = -0.001;
  uStack_124 = 0xba83126f;
  uStack_120 = 0xba83126f;
  uStack_11c = 0xba83126f;
  local_228 = _DAT_1467f08a0;
  fStack_224 = fRam00000001467f08a4;
  fStack_220 = fRam00000001467f08a8;
  fStack_21c = fRam00000001467f08ac;
  local_1e8 = DAT_1467f08c0;
  fStack_1e4 = DAT_1467f08c4;
  fStack_1e0 = DAT_1467f08c8;
  fStack_1dc = DAT_1467f08cc;
  bVar16 = false;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_178 = 0.001;
  fStack_174 = 0.001;
  fStack_170 = 0.001;
  fStack_16c = 0.001;
  plStack_2a0 = (longlong *)0x1438a82ff;
  local_1d8 = fVar2;
  fStack_1d4 = fVar14;
  fStack_1d0 = fVar15;
  iVar18 = TMeshAttributeArraySet<int>::GetNumIndices(param_1);
  local_268 = (double)CONCAT44(local_268._4_4_,iVar18);
  if (param_2 == iVar18 - 1U) {
    pbVar29 = &DAT_00000004;
  }
  else {
    if (((uint)pfVar28[0x20] & 0x10) == 0) {
      local_278 = &local_218;
      pfVar47 = &local_258;
      if (param_3 == '\0') {
        fVar72 = pfVar28[4];
        fVar73 = pfVar28[5];
        fVar75 = pfVar28[6];
        fVar95 = 0.0;
        fVar96 = 0.0;
        fVar97 = 0.0;
        fVar98 = 0.0;
        fVar77 = 0.0 - pfVar28[7];
        plStack_2a0 = (longlong *)0x1438a84b0;
        local_1f8 = fVar72;
        fStack_1f4 = fVar73;
        fStack_1f0 = fVar75;
        fStack_1ec = fVar77;
        local_1c8 = fVar72;
        fStack_1c4 = fVar73;
        fStack_1c0 = fVar75;
        fStack_1bc = fVar77;
        FUN_14385a4c0(&local_1f8,pfVar28,&local_1d8);
        local_248 = CONCAT44(fStack_214 - fStack_254,local_218 - local_258);
        uStack_240 = (double)CONCAT44(fStack_20c - fStack_24c,fStack_210 - fStack_250);
      }
      else {
        fVar72 = *pfVar28;
        fVar73 = pfVar28[1];
        fVar75 = pfVar28[2];
        local_248 = 0;
        uStack_240 = 0.0;
        fVar77 = 0.0 - pfVar28[3];
        plStack_2a0 = (longlong *)0x1438a8477;
        local_1f8 = fVar72;
        fStack_1f4 = fVar73;
        fStack_1f0 = fVar75;
        fStack_1ec = fVar77;
        local_1c8 = fVar72;
        fStack_1c4 = fVar73;
        fStack_1c0 = fVar75;
        fStack_1bc = fVar77;
        FUN_14385a4c0(&local_1f8,pfVar28 + 4,&local_1d8);
        fVar95 = local_218 - local_258;
        fVar96 = fStack_214 - fStack_254;
        fVar97 = fStack_210 - fStack_250;
        fVar98 = fStack_20c - fStack_24c;
      }
    }
    else {
      pfVar30 = pfVar28;
      if (param_3 == '\0') {
        pfVar30 = pfVar28 + 4;
      }
      fVar72 = *pfVar30;
      fVar73 = pfVar30[1];
      fVar75 = pfVar30[2];
      fVar95 = 0.0;
      fVar96 = 0.0;
      fVar97 = 0.0;
      fVar98 = 0.0;
      fVar77 = 0.0;
      fStack_1bc = 0.0;
      fStack_1ec = 0.0;
      local_248 = 0;
      uStack_240 = 0.0;
      fVar91 = (pfVar28[5] - pfVar28[1]) * fVar2 - fVar14 * (pfVar28[4] - *pfVar28);
      fVar89 = (pfVar28[6] - pfVar28[2]) * fVar14 - fVar15 * (pfVar28[5] - pfVar28[1]);
      fVar90 = (pfVar28[4] - *pfVar28) * fVar15 - fVar2 * (pfVar28[6] - pfVar28[2]);
      fVar92 = fVar89 * fVar89;
      fVar58 = fVar90 * fVar90;
      auVar54._8_4_ = fVar91 * fVar91;
      auVar54._4_4_ = auVar54._8_4_;
      auVar54._0_4_ = auVar54._8_4_;
      auVar54._12_4_ = auVar54._8_4_;
      fVar60 = fVar58 + fVar92 + auVar54._8_4_;
      fVar63 = fVar58 + fVar92 + auVar54._8_4_;
      fVar65 = fVar58 + fVar92 + auVar54._8_4_;
      auVar55._4_4_ = fVar63;
      auVar55._0_4_ = fVar60;
      auVar55._8_4_ = fVar65;
      auVar55._12_4_ = fVar58 + fVar92 + auVar54._8_4_;
      auVar55 = rsqrtps(auVar54,auVar55);
      fVar92 = auVar55._0_4_;
      fVar58 = auVar55._4_4_;
      fVar80 = auVar55._8_4_;
      fVar89 = fVar89 * (float)(~-(uint)(fVar60 <= 0.0) &
                               (uint)((3.0 - fVar60 * fVar92 * fVar92) * fVar92 * 0.5));
      fVar90 = fVar90 * (float)(~-(uint)(fVar63 <= 0.0) &
                               (uint)((3.0 - fVar63 * fVar58 * fVar58) * fVar58 * 0.5));
      fVar91 = fVar91 * (float)(~-(uint)(fVar65 <= 0.0) &
                               (uint)((3.0 - fVar65 * fVar80 * fVar80) * fVar80 * 0.5));
      fVar92 = 0.0 - (fVar73 * fVar90 + fVar72 * fVar89 + fVar75 * fVar91);
      local_1a8 = CONCAT44(fVar90,fVar89);
      uStack_1a0 = CONCAT44(fVar92,fVar91);
      local_1f8 = fVar72;
      fStack_1f4 = fVar73;
      fStack_1f0 = fVar75;
      local_1c8 = fVar72;
      fStack_1c4 = fVar73;
      fStack_1c0 = fVar75;
    }
    fVar58 = pfVar28[0x10];
    fVar80 = pfVar28[0x11];
    fVar60 = pfVar28[0x12];
    fVar63 = pfVar28[0x14];
    fVar65 = pfVar28[0x15];
    fVar93 = pfVar28[0x16];
    fVar94 = pfVar28[0x18];
    fVar62 = pfVar28[0x19];
    fVar64 = pfVar28[0x1a];
    fVar84 = pfVar28[0xc];
    fVar51 = pfVar28[0xd];
    fVar52 = pfVar28[0xe];
    fVar42 = (float)(param_2 + 1);
    fVar86 = fVar51 * fStack_21c;
    fVar82 = fVar60 * (float)local_208 + fVar80 * fVar61 + fVar58 * fVar74;
    fVar83 = fVar60 * local_208._4_4_ + fVar80 * fVar53 + fVar58 * fVar76;
    fVar85 = fVar60 * (float)uStack_200 + fVar80 * fVar66 + fVar58 * fVar78;
    fStack_21c = fVar60 * uStack_200._4_4_ + fVar80 * fVar71 + fVar58 * fVar59;
    local_258 = fVar51 * local_228 + fVar84 * fVar74 + fVar52 * (float)local_208;
    fStack_254 = fVar51 * fStack_224 + fVar84 * fVar76 + fVar52 * local_208._4_4_;
    fStack_250 = fVar51 * fStack_220 + fVar84 * fVar78 + fVar52 * (float)uStack_200;
    fStack_24c = fVar86 + fVar84 * fVar59 + fVar52 * uStack_200._4_4_;
    local_238 = fVar93 * (float)local_208 + fVar65 * fVar61 + fVar63 * fVar74;
    fStack_234 = fVar93 * local_208._4_4_ + fVar65 * fVar53 + fVar63 * fVar76;
    fStack_230 = fVar93 * (float)uStack_200 + fVar65 * fVar66 + fVar63 * fVar78;
    fStack_22c = fVar93 * uStack_200._4_4_ + fVar65 * fVar71 + fVar63 * fVar59;
    fVar74 = local_1e8 + fVar94 * fVar74 + fVar62 * fVar61 + fVar64 * (float)local_208;
    fVar76 = fStack_1e4 + fVar94 * fVar76 + fVar62 * fVar53 + fVar64 * local_208._4_4_;
    fVar78 = fStack_1e0 + fVar94 * fVar78 + fVar62 * fVar66 + fVar64 * (float)uStack_200;
    fStack_1dc = fStack_1dc + fVar94 * fVar59 + fVar62 * fVar71 + fVar64 * uStack_200._4_4_;
    if ((int)fVar42 < iVar18) {
      fVar59 = fVar77;
      local_1b8 = (float *)&local_208;
      local_188 = fVar77;
      fStack_184 = fVar77;
      fStack_180 = fVar77;
      fStack_17c = fVar77;
      if (param_3 == '\0') {
        local_1b8 = &local_218;
      }
LAB_1438a85c0:
      fVar80 = fStack_250;
      fVar58 = fStack_254;
      fVar61 = local_258;
      puVar43 = (ulonglong *)(ulonglong)(uint)fVar42;
      plStack_2a0 = (longlong *)0x1438a85ce;
      uVar35 = param_1;
      puVar41 = puVar43;
      local_228 = fVar82;
      fStack_224 = fVar83;
      fStack_220 = fVar85;
      local_1e8 = fVar74;
      fStack_1e4 = fVar76;
      fStack_1e0 = fVar78;
      pfVar30 = (float *)hkaiEdgePath::getEdge(fVar77);
      uVar39 = SUB84(puVar41,0);
      uVar31 = (undefined4)uVar35;
      local_208._0_4_ = *pfVar30;
      local_218 = pfVar30[1];
      local_198 = pfVar30[2];
      fVar53 = pfVar30[3];
      fStack_194 = local_198;
      fStack_190 = local_198;
      fStack_18c = local_198;
      uStack_200 = CONCAT44((float)local_208,(float)local_208);
      fVar60 = fVar61 * (float)local_208 + fVar74 + fVar82 * local_218 + local_238 * local_198;
      fVar63 = fVar58 * (float)local_208 + fVar76 + fVar83 * local_218 + fStack_234 * local_198;
      fVar65 = fVar80 * (float)local_208 + fVar78 + fVar85 * local_218 + fStack_230 * local_198;
      fVar66 = pfVar30[4];
      fVar71 = pfVar30[5];
      fVar77 = pfVar30[6];
      fVar61 = fVar66 * fVar61 + fVar74 + fVar71 * fVar82 + fVar77 * local_238;
      fVar74 = fVar66 * fVar58 + fVar76 + fVar71 * fVar83 + fVar77 * fStack_234;
      fVar76 = fVar66 * fVar80 + fVar78 + fVar71 * fVar85 + fVar77 * fStack_230;
      pfVar28 = pfVar30;
      if (bVar49) {
        if ((fVar92 + fVar63 * fVar90 + fVar65 * fVar91 + fVar60 * fVar89 < 0.0) &&
           (fVar92 + fVar74 * fVar90 + fVar76 * fVar91 + fVar61 * fVar89 < 0.0)) {
          uVar39 = SUB84(&local_118,0);
          uVar31 = SUB84(&local_1a8,0);
          plStack_2a0 = (longlong *)0x1438a86c5;
          fStack_214 = local_218;
          fStack_210 = local_218;
          fStack_20c = local_218;
          local_208._4_4_ = (float)local_208;
          pfVar28 = (float *)FUN_1438a9330();
          bVar16 = !bVar16;
          fVar66 = fStack_1e4 * fStack_fc;
          fVar63 = fStack_234 * fStack_fc;
          fVar71 = local_1e8 * fStack_10c;
          fVar74 = local_238 * fStack_10c;
          local_228 = fVar85 * local_f8 + fVar83 * local_108 + fVar82 * local_118;
          fStack_224 = fVar85 * fStack_f4 + fVar83 * fStack_104 + fVar82 * fStack_114;
          fStack_220 = fVar85 * fStack_f0 + fVar83 * fStack_100 + fVar82 * fStack_110;
          fVar61 = fStack_1e0 * fStack_ec;
          fVar76 = fStack_230 * fStack_ec;
          fStack_21c = fVar85 * fStack_ec + fVar83 * fStack_fc + fVar82 * fStack_10c;
          fVar59 = fStack_254 * fStack_fc;
          fVar78 = local_258 * fStack_10c;
          fVar60 = fStack_250 * fStack_ec;
          fVar72 = fStack_230 * local_f8 + fStack_234 * local_108 + local_238 * local_118;
          fVar73 = fStack_230 * fStack_f4 + fStack_234 * fStack_104 + local_238 * fStack_114;
          fStack_230 = fStack_230 * fStack_f0 + fStack_234 * fStack_100 + local_238 * fStack_110;
          fVar58 = fStack_254 * local_108 + local_258 * local_118 + fStack_250 * local_f8;
          fVar80 = fStack_254 * fStack_104 + local_258 * fStack_114 + fStack_250 * fStack_f4;
          fStack_250 = fStack_254 * fStack_100 + local_258 * fStack_110 + fStack_250 * fStack_f0;
          fVar75 = local_1e8 * local_118 + local_e8 + fStack_1e4 * local_108 + fStack_1e0 * local_f8
          ;
          fVar77 = local_1e8 * fStack_114 + fStack_e4 + fStack_1e4 * fStack_104 +
                   fStack_1e0 * fStack_f4;
          fStack_1e0 = local_1e8 * fStack_110 + fStack_e0 + fStack_1e4 * fStack_100 +
                       fStack_1e0 * fStack_f0;
          local_238 = fVar72;
          fStack_234 = fVar73;
          fStack_22c = fVar76 + fVar63 + fVar74;
          local_258 = fVar58;
          fStack_254 = fVar80;
          fStack_24c = fVar59 + fVar78 + fVar60;
          local_1e8 = fVar75;
          fStack_1e4 = fVar77;
          fStack_1dc = fVar71 + fStack_dc + fVar66 + fVar61;
          fVar60 = fVar58 * (float)local_208 + fVar75 + local_228 * local_218 + fVar72 * local_198;
          fVar63 = fVar80 * local_208._4_4_ + fVar77 + fStack_224 * fStack_214 + fVar73 * fStack_194
          ;
          fVar65 = fStack_250 * (float)uStack_200 + fStack_1e0 + fStack_220 * fStack_210 +
                   fStack_230 * fStack_190;
          fVar76 = pfVar28[4];
          fVar78 = pfVar28[5];
          fVar59 = pfVar28[6];
          fVar61 = fVar76 * fVar58 + fVar75 + fVar78 * local_228 + fVar59 * fVar72;
          fVar74 = fVar76 * fVar80 + fVar77 + fVar78 * fStack_224 + fVar59 * fVar73;
          fVar76 = fVar76 * fStack_250 + fStack_1e0 + fVar78 * fStack_220 + fVar59 * fStack_230;
          fVar72 = local_1c8;
          fVar73 = fStack_1c4;
          fVar75 = fStack_1c0;
          fVar59 = fStack_1bc;
        }
        bVar49 = false;
      }
      fVar77 = fStack_16c;
      fVar71 = fStack_170;
      fVar66 = fStack_174;
      fVar78 = local_178;
      if (bVar16) {
        fVar58 = 0.0 - fVar53;
        fVar53 = 0.0 - pfVar28[7];
        local_218 = fVar61;
        fStack_214 = fVar74;
        fStack_210 = fVar76;
        fStack_20c = fVar53;
        fVar80 = fVar61;
        fVar93 = fVar74;
        fVar94 = fVar76;
        fVar76 = fVar65;
        fVar74 = fVar63;
        fVar61 = fVar60;
      }
      else {
        fVar58 = pfVar28[7];
        local_218 = fVar60;
        fStack_214 = fVar63;
        fStack_210 = fVar65;
        fStack_20c = fVar53;
        fVar80 = fVar60;
        fVar93 = fVar63;
        fVar94 = fVar65;
      }
      local_208 = CONCAT44(fVar74,fVar61);
      uStack_200 = CONCAT44(fVar58,fVar76);
      fVar60 = (*local_1b8 - fVar72) * fVar2;
      fVar63 = (local_1b8[1] - fVar73) * fVar14;
      fVar65 = (local_1b8[2] - fVar75) * fVar15;
      fVar62 = (*local_1b8 - fVar72) - (fVar63 + fVar60 + fVar65) * fVar2;
      fVar64 = (local_1b8[1] - fVar73) - (fVar63 + fVar60 + fVar65) * fVar14;
      fVar60 = (local_1b8[2] - fVar75) - (fVar63 + fVar60 + fVar65) * fVar15;
      if (fVar64 * fVar64 + fVar62 * fVar62 + fVar60 * fVar60 <
          (local_1b8[3] + local_188) * (local_1b8[3] + local_188)) {
        return (byte *)0x5;
      }
      auVar56._4_4_ = -(uint)(ABS(fVar93 - fVar73) <= fStack_174);
      auVar56._0_4_ = -(uint)(ABS(fVar80 - fVar72) <= local_178);
      auVar56._8_4_ = -(uint)(ABS(fVar94 - fVar75) <= fStack_170);
      auVar56._12_4_ = -(uint)(ABS(fVar53 - fVar59) <= fStack_16c);
      uVar19 = movmskps((int)local_1b8,auVar56);
      uVar19 = uVar19 & 7;
      local_218 = fVar80;
      fStack_214 = fVar93;
      fStack_210 = fVar94;
      fStack_20c = fVar53;
      if ((char)uVar19 == '\a') {
        fVar53 = 0.0;
        fVar60 = 0.0;
        fVar63 = 0.0;
        fVar65 = 0.0;
        fVar64 = 0.0;
        fVar84 = 0.0;
        fVar62 = 0.0;
      }
      else {
        local_278 = &local_168;
        pfVar47 = &local_158;
        pfVar28 = &local_218;
        pfVar36 = &local_1f8;
        plStack_2a0 = (longlong *)0x1438a893e;
        uVar19 = FUN_14385a4c0(pfVar36,pfVar28,&local_1d8);
        uVar39 = SUB84(pfVar28,0);
        uVar31 = SUB84(pfVar36,0);
        fVar53 = local_168 - local_158;
        fVar60 = fStack_164 - fStack_154;
        fVar63 = fStack_160 - fStack_150;
        fVar65 = fStack_15c - fStack_14c;
        fVar62 = fVar60 * fVar2 - fVar14 * fVar53;
        fVar64 = fVar63 * fVar14 - fVar15 * fVar60;
        fVar84 = fVar53 * fVar15 - fVar2 * fVar63;
      }
      auVar11._4_4_ = -(uint)(ABS(fVar74 - fVar73) <= fVar66);
      auVar11._0_4_ = -(uint)(ABS(fVar61 - fVar72) <= fVar78);
      auVar11._8_4_ = -(uint)(ABS(fVar76 - fVar75) <= fVar71);
      auVar11._12_4_ = -(uint)(ABS(fVar58 - fVar59) <= fVar77);
      uVar20 = movmskps(uVar19,auVar11);
      if (((byte)uVar20 & 7) == 7) {
        fVar78 = 0.0;
        fVar59 = 0.0;
        fVar66 = 0.0;
        fVar71 = 0.0;
        auVar79 = SUB1612(ZEXT816(0),0);
      }
      else {
        local_278 = &local_148;
        pfVar47 = &local_138;
        puVar23 = &local_208;
        pfVar28 = &local_1f8;
        plStack_2a0 = (longlong *)0x1438a89b0;
        FUN_14385a4c0(pfVar28,puVar23,&local_1d8);
        uVar39 = SUB84(puVar23,0);
        uVar31 = SUB84(pfVar28,0);
        fVar78 = local_148 - local_138;
        fVar59 = fStack_144 - fStack_134;
        fVar66 = fStack_140 - fStack_130;
        fVar71 = fStack_13c - fStack_12c;
        auVar79._4_4_ = fVar78 * fVar15 - fVar2 * fVar66;
        auVar79._0_4_ = fVar66 * fVar14 - fVar15 * fVar59;
        auVar79._8_4_ = fVar59 * fVar2 - fVar14 * fVar78;
      }
      bVar46 = *(byte *)(pfVar30 + 0x20) & 0x10;
      piVar26 = (int *)(ulonglong)bVar46;
      fVar72 = fVar78;
      fVar73 = fVar59;
      fVar75 = fVar66;
      fVar77 = fVar71;
      fVar58 = fVar64;
      fVar51 = fVar84;
      fVar52 = fVar62;
      fVar86 = fVar61;
      fVar87 = fVar74;
      fVar88 = fVar76;
      if ((bVar46 != 0) && (0.0 < fVar59 * fVar84 + fVar78 * fVar64 + fVar66 * fVar62)) {
        fVar58 = auVar79._0_4_;
        fVar51 = auVar79._4_4_;
        fVar52 = auVar79._8_4_;
        auVar79._4_4_ = fVar84;
        auVar79._0_4_ = fVar64;
        auVar79._8_4_ = fVar62;
        fVar72 = fVar53;
        fVar73 = fVar60;
        fVar75 = fVar63;
        fVar77 = fVar65;
        fVar53 = fVar78;
        fVar60 = fVar59;
        fVar63 = fVar66;
        fVar65 = fVar71;
        fVar86 = fVar80;
        fVar87 = fVar93;
        fVar88 = fVar94;
        fVar80 = fVar61;
        fVar93 = fVar74;
        fVar94 = fVar76;
      }
      fVar78 = (fVar63 - fVar75) * (fVar63 - fVar75);
      fVar74 = (float)-(uint)(0.0 <= fVar52 * (float)uStack_240 +
                                     fVar51 * local_248._4_4_ + fVar58 * (float)local_248);
      fVar76 = (fVar60 - fVar73) * (fVar60 - fVar73) + (fVar53 - fVar72) * (fVar53 - fVar72) +
               fVar78;
      if (fVar76 <= local_128) {
LAB_1438a8aee:
        bVar44 = 0;
      }
      else {
        fVar78 = fVar75 * fVar52;
        fVar76 = fVar73 * fVar51 + fVar72 * fVar58 + fVar78;
        if (fVar76 <= local_128) goto LAB_1438a8aee;
        bVar44 = 1;
      }
      auVar12._4_4_ =
           -(uint)(0.0 <= -auVar79._8_4_ * (float)uStack_240 +
                          -auVar79._4_4_ * local_248._4_4_ + -auVar79._0_4_ * (float)local_248);
      auVar12._0_4_ = fVar74;
      auVar12._8_4_ = -(uint)(0.0 <= fVar52 * fVar97 + fVar51 * fVar96 + fVar58 * fVar95);
      auVar12._12_4_ =
           -(uint)(0.0 <= -auVar79._8_4_ * fVar97 +
                          -auVar79._4_4_ * fVar96 + -auVar79._0_4_ * fVar95);
      uVar32 = movmskps(uVar31,auVar12);
      uVar21 = -(uint)bVar44 & 0x10;
      auVar5._4_4_ = -(uint)(local_248._4_4_ == 0.0);
      auVar5._0_4_ = -(uint)((float)local_248 == 0.0);
      auVar5._8_4_ = -(uint)((float)uStack_240 == 0.0);
      auVar5._12_4_ = -(uint)(uStack_240._4_4_ == 0.0);
      uVar40 = movmskps(uVar39,auVar5);
      uVar19 = uVar21;
      if ((uVar40 & 7) == 7) {
        auVar6._4_4_ = -(uint)(fVar96 == 0.0);
        auVar6._0_4_ = -(uint)(fVar95 == 0.0);
        auVar6._8_4_ = -(uint)(fVar97 == 0.0);
        auVar6._12_4_ = -(uint)(fVar98 == 0.0);
        uVar19 = movmskps(uVar21,auVar6);
        uVar19 = uVar19 & 7;
        uVar22 = uVar19;
        if ((char)uVar19 != '\a') goto LAB_1438a8b26;
switchD_1438a8b71_caseD_2:
        local_248 = CONCAT44(fVar60,fVar53);
        uStack_240 = (double)CONCAT44(fVar65,fVar63);
        puVar45 = puVar43;
        uVar40 = uVar22;
        goto switchD_1438a8b71_caseD_d;
      }
LAB_1438a8b26:
      bVar44 = (byte)((uint)fVar42 >> 8);
      if (param_3 != '\0') {
        if ((uVar40 & 7) != 7) goto LAB_1438a8bc5;
        auVar7._4_4_ = -(uint)(fVar60 == 0.0);
        auVar7._0_4_ = -(uint)(fVar53 == 0.0);
        auVar7._8_4_ = -(uint)(fVar63 == 0.0);
        auVar7._12_4_ = -(uint)(fVar65 == 0.0);
        iVar18 = movmskps(uVar19,auVar7);
        if (iVar18 != 0xf) {
          bVar3 = *(byte *)((longlong)&UINT_1438a8f20 + (longlong)(int)(uVar32 & 0x1c | uVar21));
          pbVar29 = (byte *)(ulonglong)bVar3;
          uVar22 = (uint)bVar3;
          uVar19 = (uint)bVar3;
          uVar37 = (ulonglong)(&switchD_1438a8b71::switchdataD_1438a8f0c)[(longlong)pbVar29];
          pcVar38 = IMAGE_DOS_HEADER_140000000.e_magic + uVar37;
          bVar50 = pcVar38 == (char *)0x0;
          uVar40 = (uint)bVar3;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(bVar3) {
          case 0:
          case 0x17:
            goto switchD_1438a8b71_caseD_0;
          case 1:
          case 0x19:
            goto switchD_1438a8b71_caseD_1;
          case 2:
          case 0xe:
          case 0x1c:
            goto switchD_1438a8b71_caseD_2;
          case 3:
          case 0x10:
          case 0x1a:
            goto switchD_1438a8b71_caseD_3;
          case 4:
          case 0x11:
            goto switchD_1438a8b71_caseD_4;
          case 5:
            abStack_57[(longlong)puVar45 * 2] = abStack_57[(longlong)puVar45 * 2] ^ bVar44;
            *pbVar29 = *pbVar29 + bVar3;
            pcVar38 = (char *)0x14175;
            break;
          default:
            break;
          case 7:
            if (!bVar50) {
              *pbVar29 = *pbVar29 + bVar3;
              pbVar29[0x5d] = pbVar29[0x5d];
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          case 0x13:
          case 0x14:
          case 0x15:
switchD_1438a8b71_caseD_13:
            *(int *)pbVar29 = *(int *)pbVar29 + (int)pbVar29;
            break;
          case 0xb:
            *piVar26 = *piVar26 + (uint)bVar3;
            break;
          case 0xc:
            *pbVar29 = *pbVar29 + bVar3;
            pbVar29[-0x73] = pbVar29[-0x73] + (char)pcVar38;
            *puVar43 = (ulonglong)(bVar3 + 0x47aa3db);
            plStack_2a0 = (longlong *)0x1401f0f2b;
            puVar23 = (undefined8 *)FName::FName(&local_268,L"InventorySlotContainer",1);
            plStack_2a0 = (longlong *)0x1401f0f36;
            pbVar29 = (byte *)UScriptStruct::DeferCppStructOps(*puVar23,puVar43);
            return pbVar29;
          case 0xd:
          case 0x1b:
            goto switchD_1438a8b71_caseD_d;
          case 0xf:
          case 0x18:
            goto switchD_1438a8b71_caseD_f;
          case 0x12:
            goto switchD_1438a8b71_caseD_12;
          case 0x16:
            goto switchD_1438a8b71_caseD_16;
          case 0x1d:
            goto switchD_1438a8b71_caseD_1d;
          case 0x1e:
            goto switchD_1438a8b71_caseD_1e;
          case 0x1f:
            goto switchD_1438a8b71_caseD_1f;
          case 0x20:
            goto switchD_1438a8b71_caseD_20;
          case 0x21:
            goto switchD_1438a8b71_caseD_21;
          case 0x22:
            goto switchD_1438a8b71_caseD_22;
          case 0x23:
            goto switchD_1438a8b71_caseD_23;
          case 0x24:
            goto switchD_1438a8b71_caseD_24;
          case 0x25:
            goto switchD_1438a8b71_caseD_25;
          case 0x26:
            goto code_r0x00018b014195;
          }
          *pbVar29 = *pbVar29 + (char)pbVar29;
          pcVar38[0x14175] = pcVar38[0x14175] + bVar44;
          *pbVar29 = *pbVar29 + (char)pbVar29;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar19 = 0xf;
        uVar40 = uVar19;
        if ((uVar32 & 8) != 0) goto switchD_1438a8b71_caseD_d;
        goto switchD_1438a8b71_caseD_4;
      }
      auVar9._4_4_ = -(uint)(fVar96 == 0.0);
      auVar9._0_4_ = -(uint)(fVar95 == 0.0);
      auVar9._8_4_ = -(uint)(fVar97 == 0.0);
      auVar9._12_4_ = -(uint)(fVar98 == 0.0);
      uVar19 = movmskps(uVar19,auVar9);
      uVar19 = uVar19 & 7;
      if ((char)uVar19 != '\a') {
LAB_1438a8bc5:
        uVar40 = (uVar32 | uVar21) - 1;
        if (uVar40 < 0x1f) {
          bVar44 = *(byte *)((longlong)&switchD_1438a8be8::switchdataD_1438a8f8c +
                            (longlong)(int)uVar40);
          uVar22 = (uint)bVar44;
          uVar40 = (uint)bVar44;
          switch(uVar32 | uVar21) {
          case 1:
          case 3:
            goto switchD_1438a8b71_caseD_0;
          default:
switchD_1438a8b71_caseD_f:
            *param_4 = SUB84(puVar45,0);
            *param_5 = 1;
            return (byte *)0x0;
          case 4:
          case 5:
          case 7:
          case 0xd:
          case 0x11:
          case 0x14:
          case 0x15:
          case 0x17:
          case 0x1c:
switchD_1438a8b71_caseD_1:
            *param_4 = SUB84(puVar48,0);
            *param_5 = 0;
            return (byte *)0x0;
          case 6:
          case 0x16:
          case 0x19:
          case 0x1b:
switchD_1438a8b71_caseD_3:
            *param_4 = fVar42;
            *param_5 = fVar60 * fVar60 + fVar53 * fVar53 + fVar63 * fVar63 <
                       fVar73 * fVar73 + fVar72 * fVar72 + fVar75 * fVar75;
            return (byte *)0x0;
          case 8:
          case 0xc:
            goto switchD_1438a8b71_caseD_d;
          case 9:
            goto switchD_1438a8b71_caseD_2;
          case 0xf:
          case 0x10:
switchD_1438a8b71_caseD_1d:
            if (0.0 < fVar60 * fVar96 + fVar53 * fVar95 + fVar63 * fVar97) {
              *param_4 = SUB84(puVar48,0);
              *param_5 = 0;
              return (byte *)0x0;
            }
            *param_4 = SUB84(puVar45,0);
            *param_5 = 1;
            return (byte *)0x0;
          case 0x1d:
switchD_1438a8b71_caseD_1e:
            *param_4 = fVar42;
            *param_5 = 0;
            return (byte *)0x0;
          case 0x1f:
            goto switchD_1438a8b71_caseD_1f;
          }
        }
        goto switchD_1438a8b71_caseD_4;
      }
      auVar10._4_4_ = -(uint)(fVar73 == 0.0);
      auVar10._0_4_ = -(uint)(fVar72 == 0.0);
      auVar10._8_4_ = -(uint)(fVar75 == 0.0);
      auVar10._12_4_ = -(uint)(fVar77 == 0.0);
      iVar18 = movmskps(uVar19,auVar10);
      if (iVar18 != 0xf) {
        bVar3 = *(byte *)((longlong)&UINT_1438a8f54 + (longlong)(int)(uVar32 & 0x13 | uVar21));
        pbVar29 = (byte *)(ulonglong)bVar3;
        uVar22 = (uint)bVar3;
        uVar19 = (uint)bVar3;
        uVar37 = (ulonglong)(&switchD_1438a8bc3::switchdataD_1438a8f40)[(longlong)pbVar29];
        pcVar38 = IMAGE_DOS_HEADER_140000000.e_magic + uVar37;
        bVar50 = pcVar38 == (char *)0x0;
        uVar40 = (uint)bVar3;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(bVar3) {
        case 0:
        case 0xe:
          goto switchD_1438a8b71_caseD_d;
        case 1:
        case 0xf:
          goto switchD_1438a8b71_caseD_2;
        case 2:
        case 0xb:
          goto switchD_1438a8b71_caseD_f;
        case 3:
        case 0xd:
          goto switchD_1438a8b71_caseD_3;
        case 4:
          goto switchD_1438a8b71_caseD_4;
        case 5:
switchD_1438a8b71_caseD_12:
          fStack_18c = (float)CONCAT31(fStack_18c._1_3_,fStack_18c._0_1_ << ((byte)pcVar38 & 0x1f));
          if ((fVar74 != *(float *)((longlong)puVar43 + 0xc)) || (fVar78 != *(float *)(puVar43 + 2))
             ) {
            dStack_270 = (double)fVar76;
            local_1a8 = local_1a8 | 0x8300000000;
            uStack_240 = (double)*(float *)(puVar43 + 2);
            local_268 = (double)*(float *)((longlong)puVar43 + 0xc);
            plVar24 = *(longlong **)(*puVar43 + 0x98);
            uStack_298 = 0x14202015d;
            pbVar29 = (byte *)(**(code **)(*plVar24 + 0xe0))
                                        (plVar24,*(undefined8 *)(*puVar43 + 0xa8),&dStack_270);
          }
          return pbVar29;
        default:
          goto switchD_1438a8b71_caseD_13;
        case 9:
switchD_1438a8b71_caseD_16:
          pbVar29[-0x77] = pbVar29[-0x77] - (char)pcVar38;
          *(int *)(pbVar29 + -0x18000000) = *(int *)(pbVar29 + -0x18000000) + -0x6f;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 10:
          goto switchD_1438a8b71_caseD_0;
        case 0xc:
          goto switchD_1438a8b71_caseD_1;
        case 0x10:
          goto switchD_1438a8b71_caseD_1d;
        case 0x11:
          goto switchD_1438a8b71_caseD_1e;
        case 0x12:
          goto switchD_1438a8b71_caseD_1f;
        case 0x13:
switchD_1438a8b71_caseD_20:
          return pbVar29;
        case 0x14:
switchD_1438a8b71_caseD_21:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x15:
switchD_1438a8b71_caseD_22:
                    /* WARNING: Read-only address (ram,0x000140000000) is written */
          IMAGE_DOS_HEADER_140000000.e_magic[0] = 'M';
          *(char *)(puVar43 + 0x1fe0000000) = (char)puVar43[0x1fe0000000];
          fVar2 = (float)in(0);
          *pfVar30 = fVar2;
          *pbVar29 = *pbVar29;
          *(char *)puVar45 = (char)*puVar45;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x16:
switchD_1438a8b71_caseD_23:
          if (!bVar50 && !SCARRY8(uVar37,0x140000000)) {
            *pbVar29 = *pbVar29 << 1 | (char)*pbVar29 < '\0';
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x17:
switchD_1438a8b71_caseD_24:
          pbVar29[-0x75] = pbVar29[-0x75] | (byte)pcVar38;
          return (byte *)((ulonglong)pbVar29 & 0xffffffffffffff40);
        case 0x18:
switchD_1438a8b71_caseD_25:
          lVar27 = *(longlong *)(pcVar38 + 0x2c0);
          local_268 = (double)((ulonglong)local_268 & 0xffffffff00000000);
          if (lVar27 == 0) {
            lVar27 = *(longlong *)(pcVar38 + 0x2b8);
          }
          bVar49 = pcVar38[0x4c1] == '\0';
          if (bVar49) {
            plVar24 = &lStack_2b8;
            lStack_2b8 = 0;
            plStack_2b0 = (longlong *)0x0;
            lVar33 = 0;
          }
          else {
            plVar24 = (longlong *)FUN_140ad4c90(pcVar38,auStack_2a8);
            lVar33 = *plVar24;
          }
          plVar4 = (longlong *)plVar24[1];
          plVar24[1] = 0;
          *plVar24 = 0;
          plVar24 = plStack_2b0;
          if ((bVar49) && (plStack_2b0 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_2b0 + 1;
            lVar17 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar17 == 1) {
              (**(code **)*plStack_2b0)(plStack_2b0);
              LOCK();
              piVar34 = (int *)((longlong)plVar24 + 0xc);
              iVar18 = *piVar34;
              *piVar34 = *piVar34 + -1;
              UNLOCK();
              if (iVar18 == 1) {
                (**(code **)(*plStack_2b0 + 8))(plStack_2b0,1);
              }
            }
          }
          plVar24 = plStack_2a0;
          if ((!bVar49) && (puStack_260 = puVar48, plStack_2a0 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_2a0 + 1;
            lVar17 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar17 == 1) {
              (**(code **)*plStack_2a0)(plStack_2a0);
              LOCK();
              piVar34 = (int *)((longlong)plVar24 + 0xc);
              iVar18 = *piVar34;
              *piVar34 = *piVar34 + -1;
              UNLOCK();
              if (iVar18 == 1) {
                (**(code **)(*plVar24 + 8))(plVar24,1);
              }
            }
          }
          if (lVar33 == 0) {
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              plVar24 = plVar4 + 1;
              lVar27 = *plVar24;
              *(int *)plVar24 = (int)*plVar24 + -1;
              UNLOCK();
              if ((int)lVar27 == 1) {
                (**(code **)*plVar4)(plVar4);
                LOCK();
                piVar26 = (int *)((longlong)plVar4 + 0xc);
                iVar18 = *piVar26;
                *piVar26 = *piVar26 + -1;
                UNLOCK();
                if (iVar18 == 1) {
                  (**(code **)(*plVar4 + 8))(plVar4,1);
                }
              }
            }
            return (byte *)0x0;
          }
          if (piVar26 == (int *)0x0) goto LAB_14102044e;
          piVar25 = (int *)UPlatformInterfaceBase::GetPrivateStaticClass();
          piVar34 = piVar26;
          goto LAB_141020440;
        case 0x19:
code_r0x00018b014195:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      uVar19 = 0xf;
      if ((uVar32 & 1) != 0) {
        local_248 = CONCAT44(fVar60,fVar53);
        uStack_240 = (double)CONCAT44(fVar65,fVar63);
        puVar45 = puVar43;
      }
      goto switchD_1438a8b71_caseD_4;
    }
LAB_1438a8ea3:
    pbVar29 = (byte *)0x1;
  }
                    /* WARNING: Read-only address (ram,0x000140000000) is written */
  return pbVar29;
switchD_1438a8b71_caseD_d:
  uVar19 = uVar40;
  puVar48 = puVar43;
  fVar95 = fVar72;
  fVar96 = fVar73;
  fVar97 = fVar75;
  fVar98 = fVar77;
  goto switchD_1438a8b71_caseD_4;
switchD_1438a8b71_caseD_0:
  uVar19 = uVar40;
  local_248 = CONCAT44(fVar60,fVar53);
  uStack_240 = (double)CONCAT44(fVar65,fVar63);
  puVar45 = puVar43;
switchD_1438a8b71_caseD_4:
  auVar8._4_4_ = -(uint)(pfVar30[5] == pfVar30[1]);
  auVar8._0_4_ = -(uint)(pfVar30[4] == *pfVar30);
  auVar8._8_4_ = -(uint)(pfVar30[6] == pfVar30[2]);
  auVar8._12_4_ = -(uint)(pfVar30[7] == pfVar30[3]);
  iVar18 = movmskps(uVar19,auVar8);
  if (iVar18 == 0xf) {
switchD_1438a8b71_caseD_1f:
    *param_4 = fVar42;
    *param_5 = 1;
    return (byte *)0x0;
  }
  fVar59 = pfVar30[0x10];
  fVar61 = pfVar30[0x11];
  fVar53 = pfVar30[0x12];
  fVar66 = pfVar30[0x14];
  fVar71 = pfVar30[0x15];
  fVar72 = pfVar30[0x16];
  fVar73 = pfVar30[0x18];
  fVar75 = pfVar30[0x19];
  fVar77 = pfVar30[0x1a];
  fVar65 = fVar59 * local_258;
  fVar64 = fVar59 * fStack_254;
  fVar51 = fVar59 * fStack_250;
  fVar59 = fVar59 * fStack_24c;
  fVar81 = fVar71 * fStack_21c;
  fVar68 = fVar73 * local_258;
  fVar69 = fVar73 * fStack_254;
  fVar70 = fVar73 * fStack_250;
  fVar73 = fVar73 * fStack_24c;
  fVar67 = fVar75 * fStack_21c;
  fVar62 = fVar66 * local_258;
  fVar84 = fVar66 * fStack_254;
  fVar52 = fVar66 * fStack_250;
  fVar66 = fVar66 * fStack_24c;
  fVar58 = pfVar30[0xc];
  fVar60 = pfVar30[0xd];
  fVar63 = pfVar30[0xe];
  fVar74 = fVar77 * local_238;
  fVar76 = fVar77 * fStack_234;
  fVar78 = fVar77 * fStack_230;
  fVar77 = fVar77 * fStack_22c;
  local_258 = fVar60 * local_228 + fVar58 * local_258 + fVar63 * local_238;
  fStack_254 = fVar60 * fStack_224 + fVar58 * fStack_254 + fVar63 * fStack_234;
  fStack_250 = fVar60 * fStack_220 + fVar58 * fStack_250 + fVar63 * fStack_230;
  fStack_24c = fVar60 * fStack_21c + fVar58 * fStack_24c + fVar63 * fStack_22c;
  fVar82 = fVar53 * local_238 + fVar61 * local_228 + fVar65;
  fVar83 = fVar53 * fStack_234 + fVar61 * fStack_224 + fVar64;
  fVar85 = fVar53 * fStack_230 + fVar61 * fStack_220 + fVar51;
  fStack_21c = fVar53 * fStack_22c + fVar61 * fStack_21c + fVar59;
  local_238 = local_238 * fVar72 + fVar71 * local_228 + fVar62;
  fStack_234 = fStack_234 * fVar72 + fVar71 * fStack_224 + fVar84;
  fStack_230 = fStack_230 * fVar72 + fVar71 * fStack_220 + fVar52;
  fStack_22c = fStack_22c * fVar72 + fVar81 + fVar66;
  fVar74 = local_1e8 + fVar68 + fVar75 * local_228 + fVar74;
  fVar76 = fStack_1e4 + fVar69 + fVar75 * fStack_224 + fVar76;
  fVar78 = fStack_1e0 + fVar70 + fVar75 * fStack_220 + fVar78;
  fStack_1dc = fStack_1dc + fVar73 + fVar67 + fVar77;
  fVar77 = local_238;
  if (bVar46 != 0) {
    bVar49 = true;
    fVar91 = (fVar87 - fVar93) * fVar2 - fVar14 * (fVar86 - fVar80);
    fVar89 = (fVar88 - fVar94) * fVar14 - fVar15 * (fVar87 - fVar93);
    fVar90 = (fVar86 - fVar80) * fVar15 - fVar2 * (fVar88 - fVar94);
    fVar59 = fVar89 * fVar89;
    fVar61 = fVar90 * fVar90;
    auVar57._8_4_ = fVar91 * fVar91;
    auVar57._4_4_ = auVar57._8_4_;
    auVar57._0_4_ = auVar57._8_4_;
    auVar57._12_4_ = auVar57._8_4_;
    fVar66 = fVar61 + fVar59 + auVar57._8_4_;
    fVar71 = fVar61 + fVar59 + auVar57._8_4_;
    fVar92 = fVar61 + fVar59 + auVar57._8_4_;
    auVar13._4_4_ = fVar71;
    auVar13._0_4_ = fVar66;
    auVar13._8_4_ = fVar92;
    auVar13._12_4_ = fVar61 + fVar59 + auVar57._8_4_;
    auVar55 = rsqrtps(auVar57,auVar13);
    fVar59 = auVar55._0_4_;
    fVar61 = auVar55._4_4_;
    fVar53 = auVar55._8_4_;
    fVar89 = fVar89 * (float)(~-(uint)(fVar66 <= 0.0) &
                             (uint)((3.0 - fVar66 * fVar59 * fVar59) * fVar59 * 0.5));
    fVar90 = fVar90 * (float)(~-(uint)(fVar71 <= 0.0) &
                             (uint)((3.0 - fVar71 * fVar61 * fVar61) * fVar61 * 0.5));
    fVar91 = fVar91 * (float)(~-(uint)(fVar92 <= 0.0) &
                             (uint)((3.0 - fVar92 * fVar53 * fVar53) * fVar53 * 0.5));
    fVar77 = 0.0 - (fVar93 * fVar90 + fVar80 * fVar89 + fVar94 * fVar91);
    fVar92 = 0.0 - (fVar93 * fVar90 + fVar80 * fVar89 + fVar94 * fVar91);
    local_1a8 = CONCAT44(fVar90,fVar89);
    uStack_1a0 = CONCAT44(fVar92,fVar91);
  }
  fVar42 = (float)((int)fVar42 + 1);
  fVar72 = local_1c8;
  fVar73 = fStack_1c4;
  fVar75 = fStack_1c0;
  fVar59 = fStack_1bc;
  if (local_268._0_4_ <= (int)fVar42) goto LAB_1438a8ea3;
  goto LAB_1438a85c0;
  while (piVar34 = *(int **)(piVar34 + 0xc), piVar34 != (int *)0x0) {
LAB_141020440:
    if (piVar34 == piVar25) goto LAB_141020456;
  }
LAB_14102044e:
  piVar26 = (int *)UReplicationGraphNode_GridSpatialization2D::GetPrivateStaticClass();
LAB_141020456:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  pbVar29 = (byte *)FUN_14203b1b0(lVar33,piVar26,&IMAGE_DOS_HEADER_140000000,lVar27,(char)pfVar47,
                                  local_248);
  if (pbVar29 != (byte *)0x0) {
    lVar27 = UReplicationGraphNode_GridSpatialization2D::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pbVar29 + 0x10) + 0x90) < *(int *)(lVar27 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pbVar29 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar27 + 0x90) * 8) != lVar27 + 0x88)) {
      bVar49 = false;
    }
    else {
      bVar49 = true;
    }
    if (bVar49) goto LAB_1410204c9;
  }
  pbVar29 = (byte *)0x0;
LAB_1410204c9:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar24 = plVar4 + 1;
    lVar27 = *plVar24;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)lVar27 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar26 = (int *)((longlong)plVar4 + 0xc);
      iVar18 = *piVar26;
      *piVar26 = *piVar26 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    LOCK();
    plVar24 = plVar4 + 1;
    lVar27 = *plVar24;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)lVar27 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar26 = (int *)((longlong)plVar4 + 0xc);
      iVar18 = *piVar26;
      *piVar26 = *piVar26 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
                    /* WARNING: Read-only address (ram,0x000140000000) is written */
  return pbVar29;
}



// FUNCTION 1438a8fb0 FUN_1438a8fb0 body=144 status=ok
// SIG undefined FUN_1438a8fb0(void)

undefined8 FUN_1438a8fb0(float *param_1,float *param_2,undefined1 (*param_3) [16],float *param_4)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar10;
  float fVar11;
  undefined1 auVar9 [16];
  float fVar12;
  
  fVar5 = *param_1 - *param_2;
  fVar6 = param_1[1] - param_2[1];
  fVar7 = param_1[2] - param_2[2];
  auVar9 = *param_3;
  fVar8 = auVar9._4_4_;
  fVar10 = auVar9._12_4_;
  fVar11 = auVar9._8_4_;
  fVar2 = auVar9._0_4_ * fVar5;
  fVar3 = fVar8 * fVar6;
  fVar4 = fVar11 * fVar7;
  fVar12 = fVar3 + fVar2 + fVar4;
  if (ABS(fVar12) < *param_4) {
    auVar9._0_4_ = auVar9._0_4_ * fVar12;
    auVar9._4_4_ = fVar8 * (fVar3 + fVar2 + fVar4);
    auVar9._8_4_ = fVar11 * (fVar3 + fVar2 + fVar4);
    auVar9._12_4_ = fVar10 * (fVar3 + fVar2 + fVar4);
    fVar5 = fVar5 - auVar9._0_4_;
    fVar6 = fVar6 - auVar9._4_4_;
    fVar7 = fVar7 - auVar9._8_4_;
  }
  fVar5 = fVar5 * fVar5;
  fVar6 = fVar6 * fVar6;
  fVar7 = fVar7 * fVar7;
  fVar2 = fVar6 + fVar5 + fVar7;
  fVar3 = fVar6 + fVar5 + fVar7;
  auVar1._4_4_ = fVar3;
  auVar1._0_4_ = fVar2;
  auVar1._8_4_ = fVar6 + fVar5 + fVar7;
  auVar1._12_4_ = fVar6 + fVar5 + fVar7;
  auVar9 = rsqrtps(auVar9,auVar1);
  fVar8 = auVar9._0_4_;
  fVar10 = auVar9._4_4_;
  return CONCAT44(~-(uint)(fVar3 <= 0.0) &
                  (uint)((3.0 - fVar10 * fVar3 * fVar10) * fVar10 * 0.5 * fVar3),
                  ~-(uint)(fVar2 <= 0.0) &
                  (uint)((3.0 - fVar8 * fVar2 * fVar8) * fVar8 * 0.5 * fVar2));
}



// FUNCTION 1438a9040 FUN_1438a9040 body=112 status=ok
// SIG undefined FUN_1438a9040(void)

ulonglong FUN_1438a9040(float param_1,undefined8 param_2,ulonglong param_3,float param_4,
                       undefined8 param_5,float param_6)

{
  float fVar1;
  undefined1 *in_stack_00000050;
  
  fVar1 = param_6 * 0.5;
  param_4 = ((SQRT(param_4 * param_4 - fVar1 * 4.0 * -param_1) - param_4) / (fVar1 + fVar1)) *
            param_6 + param_4;
  if (param_4 < (float)param_3) {
    *in_stack_00000050 = 1;
    return (ulonglong)(uint)param_4;
  }
  *in_stack_00000050 = 0;
  return param_3;
}



// FUNCTION 1438a90b0 FUN_1438a90b0 body=197 status=ok
// SIG undefined FUN_1438a90b0(void)

undefined8
FUN_1438a90b0(undefined8 param_1,undefined4 param_2,undefined1 param_3,undefined8 param_4,
             undefined4 *param_5,undefined1 *param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_143879a40();
  if (iVar1 != 0) {
    uVar2 = FUN_143879850();
    return uVar2;
  }
  iVar1 = FUN_1438a8220(param_1,param_2,param_3,param_5,param_6);
  if ((iVar1 - 4U < 2) || (iVar1 == 1)) {
    FUN_14387a870(param_1,param_2,param_3);
    uVar2 = 0;
  }
  else {
    FUN_14387a890(param_1,param_2,param_3,*param_5,*param_6);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1438a9180 FUN_1438a9180 body=417 status=ok
// SIG undefined FUN_1438a9180(void)

/* WARNING: Removing unreachable block (ram,0x0001438a92ed) */
/* WARNING: Removing unreachable block (ram,0x0001438a92d4) */
/* WARNING: Removing unreachable block (ram,0x0001438a9214) */
/* WARNING: Removing unreachable block (ram,0x0001438a9200) */
/* WARNING: Removing unreachable block (ram,0x0001438a91ec) */
/* WARNING: Removing unreachable block (ram,0x0001438a92e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1438a9180(uint *param_1,longlong param_2,longlong param_3,undefined1 (*param_4) [16])

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ulonglong local_48;
  longlong lStack_40;
  ulonglong local_38;
  longlong lStack_30;
  ulonglong local_28;
  longlong lStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uVar7 = uRam00000001467f0898;
  uVar1 = *param_1;
  if (uVar1 == 0xffffffff) {
    if (*(uint *)(param_2 + 0x70) == 0xffffffff) {
      *(undefined8 *)*param_4 = _DAT_1467f0890;
      *(undefined8 *)(*param_4 + 8) = uVar7;
      uVar7 = uRam00000001467f08a8;
      *(undefined8 *)param_4[1] = _DAT_1467f08a0;
      *(undefined8 *)(param_4[1] + 8) = uVar7;
      uVar7 = uRam00000001467f08b8;
      *(undefined8 *)param_4[2] = _DAT_1467f08b0;
      *(undefined8 *)(param_4[2] + 8) = uVar7;
      uVar7 = _DAT_1467f08c8;
      *(undefined8 *)param_4[3] = _DAT_1467f08c0;
      *(undefined8 *)(param_4[3] + 8) = uVar7;
      return 0;
    }
    lVar2 = *(longlong *)
             ((ulonglong)(*(uint *)(param_2 + 0x70) >> 0x16) * 0x100 + *(longlong *)(param_3 + 0x38)
             );
    auVar9._0_8_ = *(ulonglong *)(lVar2 + 0x40) << 0x20;
    auVar9._8_8_ = *(longlong *)(lVar2 + 0x48) << 0x20 | *(ulonglong *)(lVar2 + 0x40) >> 0x20;
    *param_4 = auVar9 >> 0x20;
    auVar13._0_8_ = *(ulonglong *)(lVar2 + 0x50) << 0x20;
    auVar13._8_8_ = *(longlong *)(lVar2 + 0x58) << 0x20 | *(ulonglong *)(lVar2 + 0x50) >> 0x20;
    param_4[1] = auVar13 >> 0x20;
    auVar10._0_8_ = *(ulonglong *)(lVar2 + 0x60) << 0x20;
    auVar10._8_8_ = *(longlong *)(lVar2 + 0x68) << 0x20 | *(ulonglong *)(lVar2 + 0x60) >> 0x20;
    param_4[2] = auVar10 >> 0x20;
    uVar6 = uRam00000001467f06fc;
    uVar4 = *(undefined4 *)(lVar2 + 0x74);
    uVar5 = *(undefined4 *)(lVar2 + 0x78);
    *(undefined4 *)param_4[3] = *(undefined4 *)(lVar2 + 0x70);
    *(undefined4 *)(param_4[3] + 4) = uVar4;
    *(undefined4 *)(param_4[3] + 8) = uVar5;
    *(undefined4 *)(param_4[3] + 0xc) = uVar6;
    return 0;
  }
  lVar2 = *(longlong *)((longlong)(int)uVar1 * 0x100 + *(longlong *)(param_3 + 0x38));
  if (lVar2 == 0) {
    return 2;
  }
  uVar8 = *(uint *)(param_2 + 0x70) >> 0x16;
  if (uVar1 == uVar8) {
    *(undefined8 *)*param_4 = _DAT_1467f0890;
    *(undefined8 *)(*param_4 + 8) = uVar7;
    uVar7 = uRam00000001467f08a8;
    *(undefined8 *)param_4[1] = _DAT_1467f08a0;
    *(undefined8 *)(param_4[1] + 8) = uVar7;
    uVar7 = uRam00000001467f08b8;
    *(undefined8 *)param_4[2] = _DAT_1467f08b0;
    *(undefined8 *)(param_4[2] + 8) = uVar7;
    uVar7 = _DAT_1467f08c8;
    *(undefined8 *)param_4[3] = _DAT_1467f08c0;
    *(undefined8 *)(param_4[3] + 8) = uVar7;
    return 0;
  }
  lVar3 = *(longlong *)((ulonglong)uVar8 * 0x100 + *(longlong *)(param_3 + 0x38));
  if (lVar3 == 0) {
    return 3;
  }
  FUN_14375f720(&local_48,lVar2 + 0x40,lVar3 + 0x40);
  auVar11._0_8_ = local_48 << 0x20;
  auVar11._8_8_ = lStack_40 << 0x20 | local_48 >> 0x20;
  *param_4 = auVar11 >> 0x20;
  auVar14._0_8_ = local_38 << 0x20;
  auVar14._8_8_ = lStack_30 << 0x20 | local_38 >> 0x20;
  auVar12._0_8_ = local_28 << 0x20;
  auVar12._8_8_ = lStack_20 << 0x20 | local_28 >> 0x20;
  param_4[1] = auVar14 >> 0x20;
  param_4[2] = auVar12 >> 0x20;
  uVar4 = uRam00000001467f06fc;
  *(undefined4 *)param_4[3] = local_18;
  *(undefined4 *)(param_4[3] + 4) = uStack_14;
  *(undefined4 *)(param_4[3] + 8) = uStack_10;
  *(undefined4 *)(param_4[3] + 0xc) = uVar4;
  return 0;
}



// FUNCTION 1438a9330 FUN_1438a9330 body=114 status=ok
// SIG undefined FUN_1438a9330(void)

/* WARNING: Removing unreachable block (ram,0x0001438a9354) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438a9330(undefined1 (*param_1) [16],float *param_2)

{
  undefined1 auVar1 [16];
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
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar5 = fRam00000001467f089c;
  fVar4 = fRam00000001467f0898;
  fVar3 = fRam00000001467f0894;
  fVar2 = _DAT_1467f0890;
  auVar1 = *param_1;
  fVar20 = auVar1._0_4_;
  fVar21 = auVar1._4_4_;
  fVar6 = auVar1._8_4_;
  fVar9 = auVar1._12_4_;
  fVar17 = fVar20 + fVar20;
  fVar18 = fVar21 + fVar21;
  fVar19 = fVar6 + fVar6;
  fVar14 = fRam00000001467f08a4 - fVar21 * fVar18;
  fVar15 = fRam00000001467f08a8 - fVar21 * fVar19;
  fVar16 = fRam00000001467f08ac - fVar21 * 0.0;
  fVar10 = _DAT_1467f08b0 - fVar6 * fVar17;
  fVar11 = fRam00000001467f08b4 - fVar6 * fVar18;
  fVar12 = fRam00000001467f08b8 - fVar6 * fVar19;
  fVar13 = fRam00000001467f08bc - fVar6 * 0.0;
  fVar6 = DAT_1467f08c0 - fVar9 * fVar17;
  fVar7 = DAT_1467f08c4 - fVar9 * fVar18;
  fVar8 = DAT_1467f08c8 - fVar9 * fVar19;
  fVar9 = DAT_1467f08cc - fVar9 * 0.0;
  param_2[4] = _DAT_1467f08a0 - fVar21 * fVar17;
  param_2[5] = fVar14;
  param_2[6] = fVar15;
  param_2[7] = fVar16;
  param_2[8] = fVar10;
  param_2[9] = fVar11;
  param_2[10] = fVar12;
  param_2[0xb] = fVar13;
  param_2[0xc] = fVar6;
  param_2[0xd] = fVar7;
  param_2[0xe] = fVar8;
  param_2[0xf] = fVar9;
  *param_2 = fVar2 - fVar20 * fVar17;
  param_2[1] = fVar3 - fVar20 * fVar18;
  param_2[2] = fVar4 - fVar20 * fVar19;
  param_2[3] = fVar5 - fVar20 * 0.0;
  return;
}



// FUNCTION 1438a93b0 FUN_1438a93b0 body=282 status=ok
// SIG undefined FUN_1438a93b0(void)

uint * FUN_1438a93b0(uint *param_1,float *param_2,longlong param_3,undefined4 *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  float *pfVar9;
  float *pfVar10;
  uint local_res10 [2];
  
  FUN_1438b2190(param_2 + 0x1c,local_res10);
  if (local_res10[0] != 0xffffffff) {
    lVar2 = *(longlong *)
             (*(longlong *)
               ((ulonglong)(local_res10[0] >> 0x16) * 0x100 + *(longlong *)(param_3 + 0x38)) + 0x18)
    ;
    piVar8 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar2 + 0x28),*(undefined4 *)(lVar2 + 0x30),
                                  lVar2 + 0xc0,lVar2 + 0xe0,lVar2 + 0x70,local_res10[0] & 0x3fffff);
    iVar1 = *(int *)(lVar2 + 0x40);
    iVar5 = *piVar8;
    if (iVar5 < iVar1) {
      pfVar10 = (float *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar2 + 0x38));
    }
    else {
      pfVar10 = (float *)((longlong)(iVar5 - iVar1) * 0x10 + *(longlong *)(lVar2 + 0xf0));
    }
    iVar5 = piVar8[1];
    if (iVar5 < iVar1) {
      pfVar9 = (float *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar2 + 0x38));
    }
    else {
      iVar5 = iVar5 - iVar1;
      pfVar9 = (float *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar2 + 0xf0));
    }
    auVar3._4_4_ = -(uint)(param_2[5] == pfVar10[1]);
    auVar3._0_4_ = -(uint)(param_2[4] == *pfVar10);
    auVar3._8_4_ = -(uint)(param_2[6] == pfVar10[2]);
    auVar3._12_4_ = -(uint)(param_2[7] == pfVar10[3]);
    uVar6 = movmskps(iVar5,auVar3);
    if (((char)(uVar6 & 7) == '\a') &&
       (auVar4._4_4_ = -(uint)(param_2[1] == pfVar9[1]), auVar4._0_4_ = -(uint)(*param_2 == *pfVar9)
       , auVar4._8_4_ = -(uint)(param_2[2] == pfVar9[2]),
       auVar4._12_4_ = -(uint)(param_2[3] == pfVar9[3]), uVar7 = movmskps(uVar6 & 7,auVar4),
       ((byte)uVar7 & 7) == 7)) {
      *param_1 = local_res10[0];
      return param_1;
    }
    *param_4 = 0xffffffff;
  }
  *param_1 = 0xffffffff;
  return param_1;
}



// FUNCTION 1438a94d0 FUN_1438a94d0 body=48 status=ok
// SIG undefined FUN_1438a94d0(void)

void FUN_1438a94d0(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001438a94fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic + *(uint *)(&DAT_1438a9658 + (longlong)*param_1 * 4)
            ))();
  return;
}



// FUNCTION 1438a9680 FUN_1438a9680 body=60 status=ok
// SIG undefined FUN_1438a9680(void)

void FUN_1438a9680(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = UFoliageType_InstancedStaticMesh::GetStaticMesh();
  FUN_1438a08b0(uVar1,param_2);
  FUN_1438484d0(param_1 + 0xf8,param_1,param_2);
  return;
}



// FUNCTION 1438a96c0 FUN_1438a96c0 body=60 status=ok
// SIG undefined FUN_1438a96c0(void)

void FUN_1438a96c0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = UGeometryCacheComponent::GetGeometryCache();
  FUN_14389f6a0(uVar1,param_2);
  FUN_1438484d0(param_1 + 0x108,param_1,param_2);
  return;
}



// FUNCTION 1438a9700 FUN_1438a9700 body=60 status=ok
// SIG undefined FUN_1438a9700(void)

void FUN_1438a9700(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = UFoliageType_InstancedStaticMesh::GetStaticMesh();
  FUN_1438a0910(uVar1,param_2);
  FUN_1438484d0(param_1 + 0x100,param_1,param_2);
  return;
}



// FUNCTION 1438a9740 FUN_1438a9740 body=60 status=ok
// SIG undefined FUN_1438a9740(void)

void FUN_1438a9740(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = UGeometryCacheComponent::GetGeometryCache();
  FUN_14389f700(uVar1,param_2);
  FUN_1438484d0(param_1 + 0x110,param_1,param_2);
  return;
}



// FUNCTION 1438a9780 GetStaticMesh body=8 status=ok
// SIG undefined GetStaticMesh(void)

undefined8 UFoliageType_InstancedStaticMesh::GetStaticMesh(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x438);
}



// FUNCTION 1438a9790 FUN_1438a9790 body=169 status=ok
// SIG undefined FUN_1438a9790(void)

void FUN_1438a9790(undefined1 (*param_1) [16],uint *param_2,undefined1 (*param_3) [16])

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  iVar4 = hkaiGatePathUtil::Gate::isPoint();
  if (iVar4 != 0) {
    uVar2 = *(undefined8 *)(*param_1 + 8);
    *(undefined8 *)*param_3 = *(undefined8 *)*param_1;
    *(undefined8 *)(*param_3 + 8) = uVar2;
    return;
  }
  bVar3 = FUN_1438aaf40(param_1);
  lVar1 = (longlong)(4 << (bVar3 & 0x1f)) * 4;
  fVar11 = (float)(*(uint *)*param_1 & *(uint *)(&DAT_145b8de60 + lVar1) |
                  ~*(uint *)(&DAT_145b8de60 + lVar1) & *param_2);
  fVar12 = (float)(*(uint *)(*param_1 + 4) & *(uint *)(&UNK_145b8de64 + lVar1) |
                  ~*(uint *)(&UNK_145b8de64 + lVar1) & param_2[1]);
  fVar13 = (float)(*(uint *)(*param_1 + 8) & *(uint *)(&UNK_145b8de68 + lVar1) |
                  ~*(uint *)(&UNK_145b8de68 + lVar1) & param_2[2]);
  fVar14 = (float)(*(uint *)(*param_1 + 0xc) & *(uint *)(&UNK_145b8de6c + lVar1) |
                  ~*(uint *)(&UNK_145b8de6c + lVar1) & param_2[3]);
  FUN_1438aae60(param_1,&local_28);
  uVar5 = -(uint)(fVar11 < local_28);
  uVar6 = -(uint)(fVar12 < fStack_24);
  uVar7 = -(uint)(fVar13 < fStack_20);
  uVar8 = -(uint)(fVar14 < fStack_1c);
  auVar10._0_4_ = uVar5 & (uint)fVar11;
  auVar10._4_4_ = uVar6 & (uint)fVar12;
  auVar10._8_4_ = uVar7 & (uint)fVar13;
  auVar10._12_4_ = uVar8 & (uint)fVar14;
  auVar9._4_4_ = ~uVar6 & (uint)fStack_24;
  auVar9._0_4_ = ~uVar5 & (uint)local_28;
  auVar9._8_4_ = ~uVar7 & (uint)fStack_20;
  auVar9._12_4_ = ~uVar8 & (uint)fStack_1c;
  auVar9 = maxps(*param_1,auVar10 | auVar9);
  *param_3 = auVar9;
  return;
}



// FUNCTION 1438a9840 FUN_1438a9840 body=132 status=ok
// SIG undefined FUN_1438a9840(void)

void FUN_1438a9840(uint *param_1,uint *param_2,uint *param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  float *pfVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 local_18 [16];
  
  pfVar9 = (float *)FUN_1438a9d60(local_18,param_1,param_2);
  bVar8 = FUN_1438aaf40(param_1);
  lVar1 = (longlong)(4 << (bVar8 & 0x1f)) * 4;
  uVar10 = *(uint *)(&DAT_145b8de60 + lVar1) & -(uint)(0.0 < *pfVar9);
  uVar11 = *(uint *)(&UNK_145b8de64 + lVar1) & -(uint)(0.0 < pfVar9[1]);
  uVar12 = *(uint *)(&UNK_145b8de68 + lVar1) & -(uint)(0.0 < pfVar9[2]);
  uVar13 = *(uint *)(&UNK_145b8de6c + lVar1) & -(uint)(0.0 < pfVar9[3]);
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  *param_3 = ~uVar10 & *param_2 | *param_1 & uVar10;
  param_3[1] = ~uVar11 & uVar5 | uVar2 & uVar11;
  param_3[2] = ~uVar12 & uVar6 | uVar3 & uVar12;
  param_3[3] = ~uVar13 & uVar7 | uVar4 & uVar13;
  return;
}



// FUNCTION 1438a98d0 FUN_1438a98d0 body=135 status=ok
// SIG undefined FUN_1438a98d0(void)

void FUN_1438a98d0(uint *param_1,uint *param_2,uint *param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  float *pfVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 local_18 [16];
  
  pfVar9 = (float *)FUN_1438a9d60(local_18,param_1,param_2);
  bVar8 = FUN_1438aaf40(param_1);
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  lVar1 = (longlong)(4 << (bVar8 & 0x1f)) * 4;
  uVar10 = *(uint *)(&DAT_145b8de60 + lVar1) & -(uint)(*pfVar9 < 0.0);
  uVar11 = *(uint *)(&UNK_145b8de64 + lVar1) & -(uint)(pfVar9[1] < 0.0);
  uVar12 = *(uint *)(&UNK_145b8de68 + lVar1) & -(uint)(pfVar9[2] < 0.0);
  uVar13 = *(uint *)(&UNK_145b8de6c + lVar1) & -(uint)(pfVar9[3] < 0.0);
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  *param_3 = ~uVar10 & *param_2 | *param_1 & uVar10;
  param_3[1] = ~uVar11 & uVar5 | uVar2 & uVar11;
  param_3[2] = ~uVar12 & uVar6 | uVar3 & uVar12;
  param_3[3] = ~uVar13 & uVar7 | uVar4 & uVar13;
  return;
}



// FUNCTION 1438a9960 FUN_1438a9960 body=206 status=ok
// SIG undefined FUN_1438a9960(void)

void FUN_1438a9960(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  undefined4 in_EAX;
  undefined4 in_R11D;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float local_18 [6];
  
  auVar2 = param_1[1];
  auVar3 = param_2[1];
  auVar12 = maxps(*param_1,*param_2);
  auVar11._4_4_ = -(uint)(auVar2._4_4_ == *(float *)(*param_2 + 4));
  auVar11._0_4_ = -(uint)(auVar2._0_4_ == *(float *)*param_2);
  auVar11._8_4_ = -(uint)(auVar2._8_4_ == *(float *)(*param_2 + 8));
  auVar11._12_4_ = -(uint)(auVar2._12_4_ == *(float *)(*param_2 + 0xc));
  auVar10 = minps(auVar2,auVar3);
  iVar6 = -(uint)(auVar3._0_4_ == *(float *)*param_1);
  iVar7 = -(uint)(auVar3._4_4_ == *(float *)(*param_1 + 4));
  iVar8 = -(uint)(auVar3._8_4_ == *(float *)(*param_1 + 8));
  iVar9 = -(uint)(auVar3._12_4_ == *(float *)(*param_1 + 0xc));
  auVar2._4_4_ = iVar7;
  auVar2._0_4_ = iVar6;
  auVar2._8_4_ = iVar8;
  auVar2._12_4_ = iVar9;
  auVar3._4_4_ = iVar7;
  auVar3._0_4_ = iVar6;
  auVar3._8_4_ = iVar8;
  auVar3._12_4_ = iVar9;
  uVar5 = movmskps(in_R11D,auVar3);
  iVar6 = movmskps(in_EAX,auVar11 | auVar2);
  local_18[0] = auVar10._0_4_ - auVar12._0_4_;
  local_18[1] = auVar10._4_4_ - auVar12._4_4_;
  local_18[2] = auVar10._8_4_ - auVar12._8_4_;
  local_18[3] = auVar10._12_4_ - auVar12._12_4_;
  cVar4 = (&DAT_145ba08e0)[iVar6];
  iVar6 = (int)cVar4;
  if ((uVar5 & 7) == 0) {
    iVar7 = iVar6 + 2;
    iVar6 = iVar6 + 1;
    fVar1 = local_18[iVar7 + (iVar7 / 3 + (iVar7 >> 0x1f) +
                             (int)(((longlong)iVar7 / 3 + ((longlong)iVar7 >> 0x3f) & 0xffffffffU)
                                  >> 0x1f)) * -3];
  }
  else {
    iVar7 = iVar6 + 1;
    fVar1 = local_18[iVar7 + (iVar7 / 3 + (iVar7 >> 0x1f) +
                             (int)(((longlong)iVar7 / 3 + ((longlong)iVar7 >> 0x3f) & 0xffffffffU)
                                  >> 0x1f)) * -3];
    iVar6 = iVar6 + 2;
  }
  *(float *)param_3[1] = fVar1;
  *param_3 = auVar12;
  *(float *)(param_3[1] + 4) =
       local_18[iVar6 + (iVar6 / 3 + (iVar6 >> 0x1f) +
                        (int)(((longlong)iVar6 / 3 + ((longlong)iVar6 >> 0x3f) & 0xffffffffU) >>
                             0x1f)) * -3];
  param_3[1][8] = (uVar5 & 7) == 0 | cVar4 * '\x02';
  return;
}



// FUNCTION 1438a9a30 FUN_1438a9a30 body=200 status=ok
// SIG undefined FUN_1438a9a30(void)

longlong FUN_1438a9a30(uint *param_1,uint *param_2,uint *param_3,undefined1 (*param_4) [16])

{
  uint3 uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  bVar4 = FUN_1438aaf40();
  lVar5 = (longlong)(4 << (bVar4 & 0x1f)) * 4;
  uVar12 = *(uint *)(&DAT_145b8de60 + lVar5);
  uVar13 = *(uint *)(&UNK_145b8de64 + lVar5);
  uVar2 = *(uint *)(&UNK_145b8de68 + lVar5);
  uVar3 = *(uint *)(&UNK_145b8de6c + lVar5);
  uVar8 = param_2[2] & uVar2 | *param_2 & uVar12;
  uVar9 = param_2[3] & uVar3 | param_2[1] & uVar13;
  uVar10 = *param_2 & uVar12 | param_2[2] & uVar2;
  uVar11 = param_2[1] & uVar13 | param_2[3] & uVar3;
  fVar14 = (float)(uVar9 | uVar8);
  fVar15 = (float)(uVar8 | uVar9);
  fVar16 = (float)(uVar11 | uVar10);
  fVar17 = (float)(uVar10 | uVar11);
  uVar8 = uVar2 & param_3[2] | uVar12 & *param_3;
  uVar9 = uVar3 & param_3[3] | uVar13 & param_3[1];
  uVar10 = uVar12 & *param_3 | uVar2 & param_3[2];
  uVar11 = uVar13 & param_3[1] | uVar3 & param_3[3];
  auVar7._0_4_ = (float)(uVar9 | uVar8) - fVar14;
  auVar7._4_4_ = (float)(uVar8 | uVar9) - fVar15;
  auVar7._8_4_ = (float)(uVar11 | uVar10) - fVar16;
  auVar7._12_4_ = (float)(uVar10 | uVar11) - fVar17;
  uVar8 = param_1[2] & uVar2 | *param_1 & uVar12;
  uVar9 = param_1[3] & uVar3 | param_1[1] & uVar13;
  uVar12 = *param_1 & uVar12 | param_1[2] & uVar2;
  uVar13 = param_1[1] & uVar13 | param_1[3] & uVar3;
  uVar1 = (uint3)(-(uint)(auVar7._0_4_ == 0.0) >> 8);
  if (auVar7._0_4_ == 0.0) {
    lVar5 = (ulonglong)uVar1 << 8;
  }
  else {
    lVar5 = CONCAT71((uint7)uVar1,1);
    auVar6._0_4_ = (float)(uVar9 | uVar8) - fVar14;
    auVar6._4_4_ = (float)(uVar8 | uVar9) - fVar15;
    auVar6._8_4_ = (float)(uVar13 | uVar12) - fVar16;
    auVar6._12_4_ = (float)(uVar12 | uVar13) - fVar17;
    auVar7 = divps(auVar6,auVar7);
    *param_4 = auVar7;
  }
  return lVar5;
}



// FUNCTION 1438a9b00 FUN_1438a9b00 body=160 status=ok
// SIG undefined FUN_1438a9b00(void)

bool FUN_1438a9b00(uint *param_1,float *param_2,float *param_3,uint *param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  byte bVar20;
  char cVar21;
  longlong lVar22;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  bVar20 = FUN_1438aaf40();
  cVar21 = FUN_1438a9a30(param_1,param_2,param_3,&local_18);
  if (cVar21 != '\0') {
    fVar2 = param_3[1];
    fVar3 = param_3[2];
    fVar4 = param_3[3];
    fVar5 = param_2[1];
    fVar6 = param_2[2];
    fVar7 = param_2[3];
    uVar8 = param_1[1];
    uVar9 = param_1[2];
    uVar10 = param_1[3];
    lVar22 = (longlong)(4 << (bVar20 & 0x1f));
    lVar1 = lVar22 * 4;
    uVar11 = *(uint *)(&UNK_145b8de64 + lVar1);
    uVar12 = *(uint *)(&UNK_145b8de68 + lVar1);
    uVar13 = *(uint *)(&UNK_145b8de6c + lVar1);
    lVar22 = lVar22 * 4;
    uVar14 = *(uint *)(&UNK_145b8de64 + lVar22);
    uVar15 = *(uint *)(&UNK_145b8de68 + lVar22);
    uVar16 = *(uint *)(&UNK_145b8de6c + lVar22);
    fVar17 = param_2[1];
    fVar18 = param_2[2];
    fVar19 = param_2[3];
    *param_4 = ~*(uint *)(&DAT_145b8de60 + lVar1) &
               (uint)((*param_3 - *param_2) * local_18 + *param_2) |
               *param_1 & *(uint *)(&DAT_145b8de60 + lVar22);
    param_4[1] = ~uVar11 & (uint)((fVar2 - fVar5) * fStack_14 + fVar17) | uVar8 & uVar14;
    param_4[2] = ~uVar12 & (uint)((fVar3 - fVar6) * fStack_10 + fVar18) | uVar9 & uVar15;
    param_4[3] = ~uVar13 & (uint)((fVar4 - fVar7) * fStack_c + fVar19) | uVar10 & uVar16;
  }
  return cVar21 != '\0';
}



// FUNCTION 1438a9ba0 FUN_1438a9ba0 body=98 status=ok
// SIG undefined FUN_1438a9ba0(void)

undefined8
FUN_1438a9ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  int local_28;
  int local_24 [3];
  undefined4 local_18 [4];
  
  uVar1 = FUN_1438a9b00();
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  FUN_1438aadc0(param_1,&local_28,local_24);
  *param_4 = local_18[local_28];
  param_4[1] = local_18[local_24[0]];
  return 1;
}



// FUNCTION 1438a9c10 FUN_1438a9c10 body=336 status=ok
// SIG undefined FUN_1438a9c10(void)

bool FUN_1438a9c10(undefined1 (*param_1) [16],float *param_2,float *param_3,
                  undefined1 (*param_4) [16])

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 (*pauVar6) [16];
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 local_28 [8];
  float fStack_20;
  float fStack_1c;
  
  bVar2 = FUN_1438aaf40();
  cVar3 = FUN_1438a9a30(param_1,param_2,param_3,local_28);
  if (cVar3 == '\0') {
    FUN_1438a9790(param_1,param_2,param_4);
    bVar7 = false;
  }
  else {
    auVar15._0_4_ = local_28._0_4_ & -(uint)((float)local_28._0_4_ < DAT_1467f06f0);
    auVar15._4_4_ = local_28._4_4_ & -(uint)((float)local_28._4_4_ < fRam00000001467f06f4);
    auVar15._8_4_ = (uint)fStack_20 & -(uint)(fStack_20 < fRam00000001467f06f8);
    auVar15._12_4_ = (uint)fStack_1c & -(uint)(fStack_1c < fRam00000001467f06fc);
    auVar18._0_4_ = ~-(uint)((float)local_28._0_4_ < DAT_1467f06f0) & (uint)DAT_1467f06f0;
    auVar18._4_4_ =
         ~-(uint)((float)local_28._4_4_ < fRam00000001467f06f4) & (uint)fRam00000001467f06f4;
    auVar18._8_4_ = ~-(uint)(fStack_20 < fRam00000001467f06f8) & (uint)fRam00000001467f06f8;
    auVar18._12_4_ = ~-(uint)(fStack_1c < fRam00000001467f06fc) & (uint)fRam00000001467f06fc;
    auVar18 = maxps(ZEXT816(0),auVar15 | auVar18);
    fVar17 = auVar18._0_4_;
    if (fVar17 == (float)local_28._0_4_) {
      lVar5 = (longlong)(4 << (bVar2 & 0x1f));
      lVar1 = lVar5 * 4;
      lVar5 = lVar5 * 4;
      fVar17 = (float)(~*(uint *)(&DAT_145b8de60 + lVar1) &
                       (uint)((*param_3 - *param_2) * fVar17 + *param_2) |
                      *(uint *)*param_1 & *(uint *)(&DAT_145b8de60 + lVar5));
      fVar19 = (float)(~*(uint *)(&UNK_145b8de64 + lVar1) &
                       (uint)((param_3[1] - param_2[1]) * auVar18._4_4_ + param_2[1]) |
                      *(uint *)(*param_1 + 4) & *(uint *)(&UNK_145b8de64 + lVar5));
      fVar20 = (float)(~*(uint *)(&UNK_145b8de68 + lVar1) &
                       (uint)((param_3[2] - param_2[2]) * auVar18._8_4_ + param_2[2]) |
                      *(uint *)(*param_1 + 8) & *(uint *)(&UNK_145b8de68 + lVar5));
      fVar21 = (float)(~*(uint *)(&UNK_145b8de6c + lVar1) &
                       (uint)((param_3[3] - param_2[3]) * auVar18._12_4_ + param_2[3]) |
                      *(uint *)(*param_1 + 0xc) & *(uint *)(&UNK_145b8de6c + lVar5));
      pauVar6 = param_1;
      FUN_1438aae60(param_1,local_28);
      auVar14._0_4_ = ~-(uint)(fVar17 < (float)local_28._0_4_) & local_28._0_4_;
      auVar14._4_4_ = ~-(uint)(fVar19 < (float)local_28._4_4_) & local_28._4_4_;
      auVar14._8_4_ = ~-(uint)(fVar20 < fStack_20) & (uint)fStack_20;
      auVar14._12_4_ = ~-(uint)(fVar21 < fStack_1c) & (uint)fStack_1c;
      auVar16._0_4_ = -(uint)(fVar17 < (float)local_28._0_4_) & (uint)fVar17;
      auVar16._4_4_ = -(uint)(fVar19 < (float)local_28._4_4_) & (uint)fVar19;
      auVar16._8_4_ = -(uint)(fVar20 < fStack_20) & (uint)fVar20;
      auVar16._12_4_ = -(uint)(fVar21 < fStack_1c) & (uint)fVar21;
      auVar18 = maxps(*param_1,auVar14 | auVar16);
      *param_4 = auVar18;
      auVar12._4_4_ = -(uint)(auVar18._4_4_ == fVar19);
      auVar12._0_4_ = -(uint)(auVar18._0_4_ == fVar17);
      auVar12._8_4_ = -(uint)(auVar18._8_4_ == fVar20);
      auVar12._12_4_ = -(uint)(auVar18._12_4_ == fVar21);
      uVar4 = movmskps((int)pauVar6,auVar12);
      bVar7 = ((byte)uVar4 & 7) == 7;
    }
    else {
      uVar8 = -(uint)(auVar18._4_4_ < (float)local_28._4_4_);
      uVar9 = -(uint)(auVar18._8_4_ < fStack_20);
      uVar10 = -(uint)(auVar18._12_4_ < fStack_1c);
      auVar11._0_4_ = (uint)*param_2 & -(uint)(fVar17 < (float)local_28._0_4_);
      auVar11._4_4_ = (uint)param_2[1] & uVar8;
      auVar11._8_4_ = (uint)param_2[2] & uVar9;
      auVar11._12_4_ = (uint)param_2[3] & uVar10;
      auVar13._0_4_ = ~-(uint)(fVar17 < (float)local_28._0_4_) & (uint)*param_3;
      auVar13._4_4_ = ~uVar8 & (uint)param_3[1];
      auVar13._8_4_ = ~uVar9 & (uint)param_3[2];
      auVar13._12_4_ = ~uVar10 & (uint)param_3[3];
      _local_28 = auVar13 | auVar11;
      FUN_1438a9790(param_1,local_28,param_4);
      bVar7 = false;
    }
  }
  return bVar7;
}



// FUNCTION 1438a9d60 FUN_1438a9d60 body=158 status=ok
// SIG undefined FUN_1438a9d60(void)

undefined8 * FUN_1438a9d60(undefined8 *param_1,float *param_2,float *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  int iVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar12;
  undefined1 auVar11 [16];
  float fVar13;
  undefined1 local_28 [8];
  undefined8 uStack_20;
  
  bVar3 = FUN_1438aaf40(param_2);
  lVar1 = (longlong)((1 << (bVar3 & 0x1f)) << 2) * 4;
  uVar6 = *(uint *)(&DAT_145b8de60 + lVar1) & (uint)(*param_3 - *param_2);
  uVar7 = *(uint *)(&UNK_145b8de64 + lVar1) & (uint)(param_3[1] - param_2[1]);
  uVar8 = *(uint *)(&UNK_145b8de68 + lVar1) & (uint)(param_3[2] - param_2[2]);
  uVar9 = *(uint *)(&UNK_145b8de6c + lVar1) & (uint)(param_3[3] - param_2[3]);
  auVar5._4_4_ = uVar9;
  auVar5._0_4_ = uVar8;
  auVar5._8_4_ = uVar6;
  auVar5._12_4_ = uVar7;
  auVar2._4_4_ = uVar7;
  auVar2._0_4_ = uVar6;
  auVar2._8_4_ = uVar8;
  auVar2._12_4_ = uVar9;
  auVar5 = auVar5 | auVar2;
  auVar11._4_4_ = auVar5._0_4_;
  auVar11._0_4_ = auVar5._4_4_;
  auVar11._8_4_ = auVar5._12_4_;
  auVar11._12_4_ = auVar5._8_4_;
  _local_28 = auVar11 | auVar5;
  iVar4 = FUN_1438ab050(param_2);
  if (iVar4 != 0) {
    fVar10 = local_28._0_4_;
    fVar12 = local_28._8_4_;
    fVar13 = local_28._12_4_;
    local_28._4_4_ = 0.0 - local_28._4_4_;
    local_28._0_4_ = 0.0 - fVar10;
    uStack_20._0_4_ = 0.0 - fVar12;
    uStack_20._4_4_ = 0.0 - fVar13;
  }
  *param_1 = local_28;
  param_1[1] = uStack_20;
  return param_1;
}



// FUNCTION 1438a9e00 OnOwner_ConsumableExpired_Implementation body=38 status=ok
// SIG undefined OnOwner_ConsumableExpired_Implementation(void)

void AIcarusPlayerCharacter::OnOwner_ConsumableExpired_Implementation(undefined8 param_1)

{
  undefined1 local_28 [32];
  
  FUN_1438ab100(local_28);
  FUN_1438a9e30(param_1,local_28);
  return;
}



// FUNCTION 1438a9e30 FUN_1438a9e30 body=1434 status=ok
// SIG undefined FUN_1438a9e30(void)

void FUN_1438a9e30(longlong param_1,float *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_res8;
  undefined4 uStackX_c;
  float local_res18 [2];
  float local_res20 [2];
  float *pfVar8;
  undefined4 uVar9;
  float local_108 [2];
  float local_100 [2];
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8 [44];
  
  FUN_1438a9d60(local_d8,param_2,param_1);
  iVar3 = FUN_1438ab070(param_1 + 0x10);
  if (iVar3 == 0) {
    uVar1 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    *(float *)(param_1 + 0x20) = param_2[4];
    *(float *)(param_1 + 0x24) = param_2[5];
    *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 6);
    if (local_d8[0] < 0.0) {
      FUN_1438ab080(param_1 + 0x10);
    }
    FUN_1438ab090(param_2,param_1,&local_res8);
    *(float *)(param_1 + 0x30) = local_res8;
    *(undefined4 *)(param_1 + 0x34) = uStackX_c;
    *(float *)(param_1 + 0x38) = local_res8;
    *(undefined4 *)(param_1 + 0x3c) = uStackX_c;
    return;
  }
  iVar3 = FUN_1438ab030(param_1 + 0x10);
  if (iVar3 != 0) {
    return;
  }
  if (local_d8[0] < 0.0) {
    FUN_1438ab080(param_1 + 0x10);
    return;
  }
  if (local_d8[0] == 0.0) {
    return;
  }
  local_e8 = *param_2;
  fStack_e4 = param_2[1];
  fStack_e0 = param_2[2];
  fStack_dc = param_2[3];
  FUN_1438aae60(param_2,local_d8);
  FUN_1438a9840(param_1 + 0x10,&local_e8,&local_e8);
  FUN_1438a9840(param_1 + 0x10,local_d8,local_d8);
  FUN_1438a9ba0(param_1 + 0x10,param_1,&local_e8,&local_f8);
  FUN_1438a9ba0(param_1 + 0x10,param_1,local_d8,&local_f0);
  fVar4 = (float)FUN_1438aaf40(param_2);
  FUN_1438aadc0(param_1 + 0x10,local_100,&local_res8);
  pfVar8 = local_res18;
  FUN_1438aaf50(param_1 + 0x10,local_108,&local_res8,local_res20,pfVar8);
  uVar9 = (undefined4)((ulonglong)pfVar8 >> 0x20);
  FUN_1438ab090(param_1 + 0x10,param_1,&local_e8);
  fVar5 = (float)FUN_1438aaf40(param_1 + 0x10);
  fVar7 = local_res8;
  fVar6 = local_res20[0];
  if (fVar4 == fVar5) {
    if (*(char *)(param_2 + 6) != *(char *)(param_1 + 0x28)) goto LAB_1438aa23e;
    if (local_108[0] <= local_f8) {
      local_108[0] = local_f8;
    }
    if (local_res8 <= local_f4) {
      fVar7 = local_f4;
    }
    local_100[0] = local_f0;
    if (local_f0 <= local_res20[0]) {
      fVar6 = local_f0;
    }
    local_res20[0] = local_ec;
    local_res8 = local_res18[0];
    if (local_ec <= local_res18[0]) {
      local_res18[0] = local_ec;
    }
LAB_1438aa357:
    FUN_1438ab180(param_1 + 0x10,local_108[0],fVar7,fVar6,CONCAT44(uVar9,local_res18[0]));
  }
  else {
    if ((local_e8 == *(float *)(param_1 + 0x38)) && (fStack_e4 == *(float *)(param_1 + 0x3c))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (fVar4 == local_100[0]) {
      local_100[0] = local_f8;
      if (local_f0 <= local_f8) {
        local_100[0] = local_f0;
      }
      fVar4 = local_f8;
      if (local_f8 <= local_f0) {
        fVar4 = local_f0;
      }
      if (local_108[0] <= local_100[0]) {
        local_108[0] = local_100[0];
      }
      if (fVar4 <= local_res20[0]) {
        fVar6 = fVar4;
      }
      if ((!bVar2) || (local_e8 < *(float *)(param_1 + 0x38) == local_e8 < local_f8)) {
LAB_1438aa259:
        fVar4 = local_f0;
        fVar5 = local_f4;
        local_res8 = local_f8;
        if (0.0 < (local_f4 - fStack_e4) * (local_f0 - local_e8) -
                  (local_ec - fStack_e4) * (local_f8 - local_e8)) {
          fVar4 = local_f8;
          fVar5 = local_ec;
          local_res8 = local_f0;
          local_ec = local_f4;
        }
        if ((fVar5 - *(float *)(param_1 + 0x34)) * (local_e8 - *(float *)(param_1 + 0x30)) -
            (local_res8 - *(float *)(param_1 + 0x30)) * (fStack_e4 - *(float *)(param_1 + 0x34)) <=
            0.0) {
          *(ulonglong *)(param_1 + 0x30) = CONCAT44(fVar5,local_res8);
        }
        if ((*(float *)(param_1 + 0x38) - local_e8) * (local_ec - fStack_e4) -
            (*(float *)(param_1 + 0x3c) - fStack_e4) * (fVar4 - local_e8) <= 0.0) {
          *(ulonglong *)(param_1 + 0x38) = CONCAT44(local_ec,fVar4);
        }
        goto LAB_1438aa357;
      }
    }
    else {
      local_res8 = local_res18[0];
      fVar4 = local_f4;
      if (local_ec <= local_f4) {
        fVar4 = local_ec;
      }
      local_100[0] = local_ec;
      fVar5 = local_f4;
      if (local_f4 <= local_ec) {
        fVar5 = local_ec;
      }
      if (fVar7 <= fVar4) {
        fVar7 = fVar4;
      }
      if (fVar5 <= local_res18[0]) {
        local_res18[0] = fVar5;
      }
      if ((!bVar2) || (fStack_e4 < *(float *)(param_1 + 0x3c) == fStack_e4 < local_f4))
      goto LAB_1438aa259;
    }
LAB_1438aa23e:
    FUN_1438ab080(param_1 + 0x10);
  }
  return;
}



// FUNCTION 1438aa3d0 FUN_1438aa3d0 body=337 status=ok
// SIG undefined FUN_1438aa3d0(void)

bool FUN_1438aa3d0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  float local_res8;
  float local_resc;
  float local_res18 [2];
  float local_res20 [2];
  float local_48 [2];
  float local_40;
  float local_3c;
  
  iVar1 = FUN_1438ab070(param_1 + 0x10);
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = FUN_1438a9ba0(param_1 + 0x10,param_1,param_2,&local_40);
  if (iVar1 != 0) {
    FUN_1438aaf50(param_1 + 0x10,&local_res8,local_res18,local_res20,local_48);
    if ((((local_res8 <= local_40) && (local_res18[0] <= local_3c)) && (local_40 <= local_res20[0]))
       && ((local_3c <= local_48[0] &&
           (FUN_1438ab090(param_1 + 0x10,param_1,&local_res8),
           (*(float *)(param_1 + 0x38) - local_res8) * (local_3c - local_resc) -
           (*(float *)(param_1 + 0x3c) - local_resc) * (local_40 - local_res8) <= 0.0)))) {
      return (local_res8 - *(float *)(param_1 + 0x30)) * (local_3c - *(float *)(param_1 + 0x34)) -
             (local_40 - *(float *)(param_1 + 0x30)) * (local_resc - *(float *)(param_1 + 0x34)) <=
             0.0;
    }
    return false;
  }
  return false;
}



// FUNCTION 1438aa530 FUN_1438aa530 body=1426 status=ok
// SIG undefined FUN_1438aa530(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438aa530(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
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
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
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
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  undefined1 unaff_XMM12 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  
  fVar7 = param_4[8];
  fVar8 = param_4[9];
  fVar9 = param_4[10];
  fVar10 = param_4[0xb];
  fVar58 = *param_2;
  fVar109 = param_2[1];
  fVar50 = param_2[2];
  fVar74 = *param_1;
  fVar98 = param_1[1];
  fVar66 = param_1[2];
  fVar68 = fVar74 - *param_3;
  fVar70 = fVar74 - param_3[1];
  fVar72 = fVar74 - param_3[2];
  fVar74 = fVar74 - param_3[3];
  fVar92 = fVar98 - param_3[4];
  fVar94 = fVar98 - param_3[5];
  fVar96 = fVar98 - param_3[6];
  fVar98 = fVar98 - param_3[7];
  fVar11 = param_4[4];
  fVar12 = param_4[5];
  fVar13 = param_4[6];
  fVar14 = param_4[7];
  fVar15 = *param_4;
  fVar16 = param_4[1];
  fVar17 = param_4[2];
  fVar18 = param_4[3];
  fVar60 = fVar66 - param_3[8];
  fVar62 = fVar66 - param_3[9];
  fVar64 = fVar66 - param_3[10];
  fVar66 = fVar66 - param_3[0xb];
  fVar52 = fVar58 - *param_3;
  fVar54 = fVar58 - param_3[1];
  fVar56 = fVar58 - param_3[2];
  fVar58 = fVar58 - param_3[3];
  fVar106 = fVar109 - param_3[4];
  fVar107 = fVar109 - param_3[5];
  fVar108 = fVar109 - param_3[6];
  fVar109 = fVar109 - param_3[7];
  auVar29._4_4_ = fVar16 * fVar16 + fVar12 * fVar12 + fVar8 * fVar8;
  auVar29._0_4_ = fVar15 * fVar15 + fVar11 * fVar11 + fVar7 * fVar7;
  auVar29._8_4_ = fVar17 * fVar17 + fVar13 * fVar13 + fVar9 * fVar9;
  auVar29._12_4_ = fVar18 * fVar18 + fVar14 * fVar14 + fVar10 * fVar10;
  auVar100 = sqrtps(unaff_XMM12,auVar29);
  fVar44 = fVar50 - param_3[8];
  fVar46 = fVar50 - param_3[9];
  fVar48 = fVar50 - param_3[10];
  fVar50 = fVar50 - param_3[0xb];
  fVar76 = fVar68 - fVar15 * _DAT_1467f06e0;
  fVar77 = fVar70 - fVar16 * fRam00000001467f06e4;
  fVar78 = fVar72 - fVar17 * fRam00000001467f06e8;
  fVar79 = fVar74 - fVar18 * DAT_1467f06ec;
  fVar40 = fVar52 - fVar15 * _DAT_1467f06e0;
  fVar41 = fVar54 - fVar16 * fRam00000001467f06e4;
  fVar42 = fVar56 - fVar17 * fRam00000001467f06e8;
  fVar43 = fVar58 - fVar18 * DAT_1467f06ec;
  fVar80 = fVar92 - fVar11 * _DAT_1467f06e0;
  fVar83 = fVar94 - fVar12 * fRam00000001467f06e4;
  fVar86 = fVar96 - fVar13 * fRam00000001467f06e8;
  fVar89 = fVar98 - fVar14 * DAT_1467f06ec;
  fVar53 = fVar106 - fVar11 * _DAT_1467f06e0;
  fVar55 = fVar107 - fVar12 * fRam00000001467f06e4;
  fVar57 = fVar108 - fVar13 * fRam00000001467f06e8;
  fVar59 = fVar109 - fVar14 * DAT_1467f06ec;
  fVar69 = fVar60 - fVar7 * _DAT_1467f06e0;
  fVar71 = fVar62 - fVar8 * fRam00000001467f06e4;
  fVar73 = fVar64 - fVar9 * fRam00000001467f06e8;
  fVar75 = fVar66 - fVar10 * DAT_1467f06ec;
  fVar61 = fVar80 * fVar80 + fVar76 * fVar76 + fVar69 * fVar69;
  fVar63 = fVar83 * fVar83 + fVar77 * fVar77 + fVar71 * fVar71;
  fVar65 = fVar86 * fVar86 + fVar78 * fVar78 + fVar73 * fVar73;
  fVar67 = fVar89 * fVar89 + fVar79 * fVar79 + fVar75 * fVar75;
  fVar36 = fVar44 - fVar7 * _DAT_1467f06e0;
  fVar37 = fVar46 - fVar8 * fRam00000001467f06e4;
  fVar38 = fVar48 - fVar9 * fRam00000001467f06e8;
  fVar39 = fVar50 - fVar10 * DAT_1467f06ec;
  auVar28._0_12_ = ZEXT812(0);
  auVar28._12_4_ = 0;
  fVar45 = fVar53 * fVar53 + fVar40 * fVar40 + fVar36 * fVar36;
  fVar47 = fVar55 * fVar55 + fVar41 * fVar41 + fVar37 * fVar37;
  fVar49 = fVar57 * fVar57 + fVar42 * fVar42 + fVar38 * fVar38;
  fVar51 = fVar59 * fVar59 + fVar43 * fVar43 + fVar39 * fVar39;
  auVar34._4_4_ = fVar47;
  auVar34._0_4_ = fVar45;
  auVar34._8_4_ = fVar49;
  auVar34._12_4_ = fVar51;
  auVar29 = sqrtps(auVar28,auVar34);
  fVar102 = DAT_1467f06f0;
  fVar103 = DAT_1467f06f0._4_4_;
  fVar104 = DAT_1467f06f0._8_4_;
  fVar105 = DAT_1467f06f0._12_4_;
  auVar34 = divps(_DAT_1467f06f0,auVar29);
  auVar3._4_4_ = fVar63;
  auVar3._0_4_ = fVar61;
  auVar3._8_4_ = fVar65;
  auVar3._12_4_ = fVar67;
  auVar29 = sqrtps(auVar29,auVar3);
  auVar29 = divps(_DAT_1467f06f0,auVar29);
  fVar81 = fVar106 - fVar11 * fVar102;
  fVar84 = fVar107 - fVar12 * fVar103;
  fVar87 = fVar108 - fVar13 * fVar104;
  fVar90 = fVar109 - fVar14 * fVar105;
  fVar93 = fVar92 - fVar11 * fVar102;
  fVar95 = fVar94 - fVar12 * fVar103;
  fVar97 = fVar96 - fVar13 * fVar104;
  fVar99 = fVar98 - fVar14 * fVar105;
  uVar20 = -(uint)(0.0 <= -(fVar53 * fVar11 + fVar40 * fVar15 + fVar36 * fVar7) *
                          (float)(~-(uint)(fVar45 <= 0.0) & auVar34._0_4_) +
                          -(fVar80 * fVar11 + fVar76 * fVar15 + fVar69 * fVar7) *
                          (float)(~-(uint)(fVar61 <= 0.0) & auVar29._0_4_));
  uVar22 = -(uint)(0.0 <= -(fVar55 * fVar12 + fVar41 * fVar16 + fVar37 * fVar8) *
                          (float)(~-(uint)(fVar47 <= 0.0) & auVar34._4_4_) +
                          -(fVar83 * fVar12 + fVar77 * fVar16 + fVar71 * fVar8) *
                          (float)(~-(uint)(fVar63 <= 0.0) & auVar29._4_4_));
  uVar24 = -(uint)(0.0 <= -(fVar57 * fVar13 + fVar42 * fVar17 + fVar38 * fVar9) *
                          (float)(~-(uint)(fVar49 <= 0.0) & auVar34._8_4_) +
                          -(fVar86 * fVar13 + fVar78 * fVar17 + fVar73 * fVar9) *
                          (float)(~-(uint)(fVar65 <= 0.0) & auVar29._8_4_));
  uVar26 = -(uint)(0.0 <= -(fVar59 * fVar14 + fVar43 * fVar18 + fVar39 * fVar10) *
                          (float)(~-(uint)(fVar51 <= 0.0) & auVar34._12_4_) +
                          -(fVar89 * fVar14 + fVar79 * fVar18 + fVar75 * fVar10) *
                          (float)(~-(uint)(fVar67 <= 0.0) & auVar29._12_4_));
  fVar36 = fVar44 - fVar7 * fVar102;
  fVar37 = fVar46 - fVar8 * fVar103;
  fVar38 = fVar48 - fVar9 * fVar104;
  fVar39 = fVar50 - fVar10 * fVar105;
  fVar53 = fVar60 - fVar7 * fVar102;
  fVar55 = fVar62 - fVar8 * fVar103;
  fVar57 = fVar64 - fVar9 * fVar104;
  fVar59 = fVar66 - fVar10 * fVar105;
  fVar40 = fVar52 - fVar15 * fVar102;
  fVar41 = fVar54 - fVar16 * fVar103;
  fVar42 = fVar56 - fVar17 * fVar104;
  fVar43 = fVar58 - fVar18 * fVar105;
  fVar69 = fVar68 - fVar15 * fVar102;
  fVar71 = fVar70 - fVar16 * fVar103;
  fVar73 = fVar72 - fVar17 * fVar104;
  fVar75 = fVar74 - fVar18 * fVar105;
  auVar30._0_4_ = fVar40 * fVar40;
  auVar30._4_4_ = fVar41 * fVar41;
  auVar30._8_4_ = fVar42 * fVar42;
  auVar30._12_4_ = fVar43 * fVar43;
  fVar61 = fVar93 * fVar93 + fVar69 * fVar69 + fVar53 * fVar53;
  fVar63 = fVar95 * fVar95 + fVar71 * fVar71 + fVar55 * fVar55;
  fVar65 = fVar97 * fVar97 + fVar73 * fVar73 + fVar57 * fVar57;
  fVar67 = fVar99 * fVar99 + fVar75 * fVar75 + fVar59 * fVar59;
  fVar45 = fVar81 * fVar81 + auVar30._0_4_ + fVar36 * fVar36;
  fVar47 = fVar84 * fVar84 + auVar30._4_4_ + fVar37 * fVar37;
  fVar49 = fVar87 * fVar87 + auVar30._8_4_ + fVar38 * fVar38;
  fVar51 = fVar90 * fVar90 + auVar30._12_4_ + fVar39 * fVar39;
  auVar2._4_4_ = fVar47;
  auVar2._0_4_ = fVar45;
  auVar2._8_4_ = fVar49;
  auVar2._12_4_ = fVar51;
  auVar29 = sqrtps(auVar30,auVar2);
  auVar34 = divps(_DAT_1467f06f0,auVar29);
  auVar4._4_4_ = fVar63;
  auVar4._0_4_ = fVar61;
  auVar4._8_4_ = fVar65;
  auVar4._12_4_ = fVar67;
  auVar29 = sqrtps(auVar29,auVar4);
  auVar29 = divps(_DAT_1467f06f0,auVar29);
  uVar21 = -(uint)(-(fVar81 * fVar11 + fVar40 * fVar15 + fVar36 * fVar7) *
                   (float)(~-(uint)(fVar45 <= 0.0) & auVar34._0_4_) +
                   -(fVar93 * fVar11 + fVar69 * fVar15 + fVar53 * fVar7) *
                   (float)(~-(uint)(fVar61 <= 0.0) & auVar29._0_4_) <= 0.0);
  uVar23 = -(uint)(-(fVar84 * fVar12 + fVar41 * fVar16 + fVar37 * fVar8) *
                   (float)(~-(uint)(fVar47 <= 0.0) & auVar34._4_4_) +
                   -(fVar95 * fVar12 + fVar71 * fVar16 + fVar55 * fVar8) *
                   (float)(~-(uint)(fVar63 <= 0.0) & auVar29._4_4_) <= 0.0);
  uVar25 = -(uint)(-(fVar87 * fVar13 + fVar42 * fVar17 + fVar38 * fVar9) *
                   (float)(~-(uint)(fVar49 <= 0.0) & auVar34._8_4_) +
                   -(fVar97 * fVar13 + fVar73 * fVar17 + fVar57 * fVar9) *
                   (float)(~-(uint)(fVar65 <= 0.0) & auVar29._8_4_) <= 0.0);
  uVar27 = -(uint)(-(fVar90 * fVar14 + fVar43 * fVar18 + fVar39 * fVar10) *
                   (float)(~-(uint)(fVar51 <= 0.0) & auVar34._12_4_) +
                   -(fVar99 * fVar14 + fVar75 * fVar18 + fVar59 * fVar10) *
                   (float)(~-(uint)(fVar67 <= 0.0) & auVar29._12_4_) <= 0.0);
  fVar45 = (float)(~uVar21 & (uint)_DAT_1467f06e0 | uVar21 & (uint)fVar102);
  fVar47 = (float)(~uVar23 & (uint)fRam00000001467f06e4 | uVar23 & (uint)fVar103);
  fVar49 = (float)(~uVar25 & (uint)fRam00000001467f06e8 | uVar25 & (uint)fVar104);
  fVar51 = (float)(~uVar27 & (uint)DAT_1467f06ec | uVar27 & (uint)fVar105);
  fVar40 = (float)(uVar20 & (uint)_DAT_1467f06e0 | ~uVar20 & (uint)fVar102);
  fVar41 = (float)(uVar22 & (uint)fRam00000001467f06e4 | ~uVar22 & (uint)fVar103);
  fVar42 = (float)(uVar24 & (uint)fRam00000001467f06e8 | ~uVar24 & (uint)fVar104);
  fVar43 = (float)(uVar26 & (uint)DAT_1467f06ec | ~uVar26 & (uint)fVar105);
  fVar102 = (float)(~(uVar20 | uVar21) & auVar100._0_4_);
  fVar103 = (float)(~(uVar22 | uVar23) & auVar100._4_4_);
  fVar104 = (float)(~(uVar24 | uVar25) & auVar100._8_4_);
  fVar105 = (float)(~(uVar26 | uVar27) & auVar100._12_4_);
  auVar100._4_4_ = -(uint)(fVar103 <= param_5[1]);
  auVar100._0_4_ = -(uint)(fVar102 <= *param_5);
  auVar100._8_4_ = -(uint)(fVar104 <= param_5[2]);
  auVar100._12_4_ = -(uint)(fVar105 <= param_5[3]);
  iVar19 = movmskps(0x8000,auVar100);
  fVar36 = fVar40 + fVar45;
  fVar37 = fVar41 + fVar47;
  fVar38 = fVar42 + fVar49;
  fVar39 = fVar43 + fVar51;
  while( true ) {
    fVar39 = fVar39 * fRam00000001467f07ec;
    fVar38 = fVar38 * fRam00000001467f07e8;
    fVar37 = fVar37 * fRam00000001467f07e4;
    fVar36 = fVar36 * _DAT_1467f07e0;
    if (iVar19 == 0xf) break;
    fVar102 = fVar102 * _DAT_1467f07e0;
    fVar103 = fVar103 * fRam00000001467f07e4;
    fVar104 = fVar104 * fRam00000001467f07e8;
    fVar105 = fVar105 * fRam00000001467f07ec;
    fVar93 = fVar52 - fVar15 * fVar36;
    fVar95 = fVar54 - fVar16 * fVar37;
    fVar97 = fVar56 - fVar17 * fVar38;
    fVar99 = fVar58 - fVar18 * fVar39;
    fVar82 = fVar68 - fVar15 * fVar36;
    fVar85 = fVar70 - fVar16 * fVar37;
    fVar88 = fVar72 - fVar17 * fVar38;
    fVar91 = fVar74 - fVar18 * fVar39;
    fVar53 = fVar106 - fVar11 * fVar36;
    fVar55 = fVar107 - fVar12 * fVar37;
    fVar57 = fVar108 - fVar13 * fVar38;
    fVar59 = fVar109 - fVar14 * fVar39;
    fVar76 = fVar60 - fVar7 * fVar36;
    fVar77 = fVar62 - fVar8 * fVar37;
    fVar78 = fVar64 - fVar9 * fVar38;
    fVar79 = fVar66 - fVar10 * fVar39;
    fVar80 = fVar92 - fVar11 * fVar36;
    fVar81 = fVar94 - fVar12 * fVar37;
    fVar83 = fVar96 - fVar13 * fVar38;
    fVar84 = fVar98 - fVar14 * fVar39;
    fVar61 = fVar44 - fVar7 * fVar36;
    fVar63 = fVar46 - fVar8 * fVar37;
    fVar65 = fVar48 - fVar9 * fVar38;
    fVar67 = fVar50 - fVar10 * fVar39;
    auVar31._0_4_ = fVar93 * fVar93;
    auVar31._4_4_ = fVar95 * fVar95;
    auVar31._8_4_ = fVar97 * fVar97;
    auVar31._12_4_ = fVar99 * fVar99;
    fVar86 = fVar80 * fVar80 + fVar82 * fVar82 + fVar76 * fVar76;
    fVar87 = fVar81 * fVar81 + fVar85 * fVar85 + fVar77 * fVar77;
    fVar89 = fVar83 * fVar83 + fVar88 * fVar88 + fVar78 * fVar78;
    fVar90 = fVar84 * fVar84 + fVar91 * fVar91 + fVar79 * fVar79;
    fVar69 = fVar53 * fVar53 + auVar31._0_4_ + fVar61 * fVar61;
    fVar71 = fVar55 * fVar55 + auVar31._4_4_ + fVar63 * fVar63;
    fVar73 = fVar57 * fVar57 + auVar31._8_4_ + fVar65 * fVar65;
    fVar75 = fVar59 * fVar59 + auVar31._12_4_ + fVar67 * fVar67;
    auVar1._4_4_ = fVar71;
    auVar1._0_4_ = fVar69;
    auVar1._8_4_ = fVar73;
    auVar1._12_4_ = fVar75;
    auVar29 = sqrtps(auVar31,auVar1);
    auVar34 = divps(_DAT_1467f06f0,auVar29);
    auVar5._4_4_ = fVar87;
    auVar5._0_4_ = fVar86;
    auVar5._8_4_ = fVar89;
    auVar5._12_4_ = fVar90;
    auVar29 = sqrtps(auVar29,auVar5);
    auVar29 = divps(_DAT_1467f06f0,auVar29);
    uVar20 = -(uint)(-(fVar93 * fVar15 + fVar53 * fVar11 + fVar61 * fVar7) *
                     (float)(~-(uint)(fVar69 <= 0.0) & auVar34._0_4_) +
                     -(fVar82 * fVar15 + fVar80 * fVar11 + fVar76 * fVar7) *
                     (float)(~-(uint)(fVar86 <= 0.0) & auVar29._0_4_) < 0.0);
    uVar21 = -(uint)(-(fVar95 * fVar16 + fVar55 * fVar12 + fVar63 * fVar8) *
                     (float)(~-(uint)(fVar71 <= 0.0) & auVar34._4_4_) +
                     -(fVar85 * fVar16 + fVar81 * fVar12 + fVar77 * fVar8) *
                     (float)(~-(uint)(fVar87 <= 0.0) & auVar29._4_4_) < 0.0);
    uVar22 = -(uint)(-(fVar97 * fVar17 + fVar57 * fVar13 + fVar65 * fVar9) *
                     (float)(~-(uint)(fVar73 <= 0.0) & auVar34._8_4_) +
                     -(fVar88 * fVar17 + fVar83 * fVar13 + fVar78 * fVar9) *
                     (float)(~-(uint)(fVar89 <= 0.0) & auVar29._8_4_) < 0.0);
    uVar23 = -(uint)(-(fVar99 * fVar18 + fVar59 * fVar14 + fVar67 * fVar10) *
                     (float)(~-(uint)(fVar75 <= 0.0) & auVar34._12_4_) +
                     -(fVar91 * fVar18 + fVar84 * fVar14 + fVar79 * fVar10) *
                     (float)(~-(uint)(fVar90 <= 0.0) & auVar29._12_4_) < 0.0);
    fVar45 = (float)(uVar20 & (uint)fVar36 | ~uVar20 & (uint)fVar45);
    fVar47 = (float)(uVar21 & (uint)fVar37 | ~uVar21 & (uint)fVar47);
    fVar49 = (float)(uVar22 & (uint)fVar38 | ~uVar22 & (uint)fVar49);
    fVar51 = (float)(uVar23 & (uint)fVar39 | ~uVar23 & (uint)fVar51);
    fVar40 = (float)(~uVar20 & (uint)fVar36 | uVar20 & (uint)fVar40);
    fVar41 = (float)(~uVar21 & (uint)fVar37 | uVar21 & (uint)fVar41);
    fVar42 = (float)(~uVar22 & (uint)fVar38 | uVar22 & (uint)fVar42);
    fVar43 = (float)(~uVar23 & (uint)fVar39 | uVar23 & (uint)fVar43);
    fVar36 = fVar40 + fVar45;
    fVar37 = fVar41 + fVar47;
    fVar38 = fVar42 + fVar49;
    fVar39 = fVar43 + fVar51;
    auVar32._4_4_ = -(uint)(fVar103 <= param_5[1]);
    auVar32._0_4_ = -(uint)(fVar102 <= *param_5);
    auVar32._8_4_ = -(uint)(fVar104 <= param_5[2]);
    auVar32._12_4_ = -(uint)(fVar105 <= param_5[3]);
    iVar19 = movmskps(iVar19,auVar32);
  }
  *param_6 = fVar36;
  param_6[1] = fVar37;
  param_6[2] = fVar38;
  param_6[3] = fVar39;
  if (param_7 != (float *)0x0) {
    fVar68 = fVar68 - fVar15 * fVar36;
    fVar70 = fVar70 - fVar16 * fVar37;
    fVar72 = fVar72 - fVar17 * fVar38;
    fVar74 = fVar74 - fVar18 * fVar39;
    fVar92 = fVar92 - fVar11 * fVar36;
    fVar94 = fVar94 - fVar12 * fVar37;
    fVar96 = fVar96 - fVar13 * fVar38;
    fVar98 = fVar98 - fVar14 * fVar39;
    fVar106 = fVar106 - fVar11 * fVar36;
    fVar107 = fVar107 - fVar12 * fVar37;
    fVar108 = fVar108 - fVar13 * fVar38;
    fVar109 = fVar109 - fVar14 * fVar39;
    fVar60 = fVar60 - fVar7 * fVar36;
    fVar62 = fVar62 - fVar8 * fVar37;
    fVar64 = fVar64 - fVar9 * fVar38;
    fVar66 = fVar66 - fVar10 * fVar39;
    fVar52 = fVar52 - fVar15 * fVar36;
    fVar54 = fVar54 - fVar16 * fVar37;
    fVar56 = fVar56 - fVar17 * fVar38;
    fVar58 = fVar58 - fVar18 * fVar39;
    auVar35._0_4_ = fVar68 * fVar68;
    auVar35._4_4_ = fVar70 * fVar70;
    auVar35._8_4_ = fVar72 * fVar72;
    auVar35._12_4_ = fVar74 * fVar74;
    fVar44 = fVar44 - fVar7 * fVar36;
    fVar46 = fVar46 - fVar8 * fVar37;
    fVar48 = fVar48 - fVar9 * fVar38;
    fVar50 = fVar50 - fVar10 * fVar39;
    auVar6._4_4_ = fVar94 * fVar94 + auVar35._4_4_ + fVar62 * fVar62;
    auVar6._0_4_ = fVar92 * fVar92 + auVar35._0_4_ + fVar60 * fVar60;
    auVar6._8_4_ = fVar96 * fVar96 + auVar35._8_4_ + fVar64 * fVar64;
    auVar6._12_4_ = fVar98 * fVar98 + auVar35._12_4_ + fVar66 * fVar66;
    auVar34 = sqrtps(auVar35,auVar6);
    auVar33._0_4_ = fVar44 * fVar44;
    auVar33._4_4_ = fVar46 * fVar46;
    auVar33._8_4_ = fVar48 * fVar48;
    auVar33._12_4_ = fVar50 * fVar50;
    auVar101._0_4_ = fVar106 * fVar106 + fVar52 * fVar52 + auVar33._0_4_;
    auVar101._4_4_ = fVar107 * fVar107 + fVar54 * fVar54 + auVar33._4_4_;
    auVar101._8_4_ = fVar108 * fVar108 + fVar56 * fVar56 + auVar33._8_4_;
    auVar101._12_4_ = fVar109 * fVar109 + fVar58 * fVar58 + auVar33._12_4_;
    auVar29 = sqrtps(auVar33,auVar101);
    *param_7 = auVar34._0_4_ + auVar29._0_4_;
    param_7[1] = auVar34._4_4_ + auVar29._4_4_;
    param_7[2] = auVar34._8_4_ + auVar29._8_4_;
    param_7[3] = auVar34._12_4_ + auVar29._12_4_;
  }
  return;
}



// FUNCTION 1438aaad0 FUN_1438aaad0 body=745 status=ok
// SIG undefined FUN_1438aaad0(void)

void FUN_1438aaad0(undefined1 (*param_1) [16],undefined8 param_2,undefined8 param_3,
                  undefined8 param_4,float *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  int iVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  uint uVar18;
  uint uVar21;
  uint uVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_128;
  float fStack_124;
  float fStack_120;
  uint uStack_11c;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [4];
  float afStack_e4 [3];
  undefined1 local_d8 [8];
  float fStack_d0;
  float fStack_cc;
  undefined1 local_c8 [8];
  float fStack_c0;
  float fStack_bc;
  undefined1 local_b8 [16];
  undefined1 local_a8 [4];
  float afStack_a4 [3];
  undefined1 local_98 [8];
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [8];
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [16];
  
  auVar3 = *param_1;
  fVar5 = auVar3._0_4_;
  fVar7 = auVar3._4_4_;
  fVar9 = auVar3._8_4_;
  FUN_1438aafc0(param_1,&local_128,local_118);
  FUN_1438a98d0(param_1,param_2,local_f8);
  FUN_1438a9840(param_1,param_3,local_108);
  iVar13 = FUN_1438a9c10(param_1,local_f8,local_108,param_5);
  auVar12 = local_118;
  if (iVar13 == 0) {
    fVar6 = local_118._0_4_;
    fVar8 = local_118._4_4_;
    fVar10 = local_118._8_4_;
    uVar11 = CONCAT44(fStack_124,local_128);
    auVar16._8_4_ = fStack_120;
    auVar16._0_8_ = uVar11;
    fVar24 = fVar5 + local_128;
    fVar25 = fVar7 + fStack_124;
    fVar26 = fVar9 + fStack_120;
    fVar27 = -fStack_120;
    afStack_a4[0] = fVar24;
    local_a8 = (undefined1  [4])fVar5;
    afStack_a4[1] = fVar6 + fVar24;
    afStack_a4[2] = fVar6 + fVar5;
    afStack_e4[0] = fVar6;
    local_e8 = (undefined1  [4])local_128;
    afStack_e4[1] = -local_128;
    afStack_e4[2] = -fVar6;
    local_d8._4_4_ = fVar8;
    local_d8._0_4_ = fStack_124;
    fStack_d0 = -fStack_124;
    fStack_cc = -fVar8;
    local_98._4_4_ = fVar25;
    local_98._0_4_ = fVar7;
    fStack_90 = fVar8 + fVar25;
    fStack_8c = fVar8 + fVar7;
    local_88._4_4_ = fVar26;
    local_88._0_4_ = fVar9;
    fStack_80 = fVar10 + fVar26;
    fStack_7c = fVar10 + fVar9;
    local_c8._4_4_ = fVar10;
    local_c8._0_4_ = fStack_120;
    fStack_c0 = fVar27;
    fStack_bc = -fVar10;
    uVar14 = FUN_1438aa530(local_f8,local_108,local_a8,local_e8,param_4,&local_128,local_118);
    auVar19._0_8_ = local_118._8_8_;
    auVar19._8_4_ = local_118._0_4_;
    auVar19._12_4_ = local_118._4_4_;
    auVar20 = minps(auVar19,local_118);
    auVar15._4_4_ = auVar20._0_4_;
    auVar15._0_4_ = auVar20._4_4_;
    auVar15._8_4_ = auVar20._12_4_;
    auVar15._12_4_ = auVar20._8_4_;
    auVar20 = minps(auVar20,auVar15);
    fVar17 = auVar20._0_4_;
    auVar20._4_4_ = -(uint)(local_118._4_4_ <= fVar17);
    auVar20._0_4_ = -(uint)(local_118._0_4_ <= fVar17);
    auVar20._8_4_ = -(uint)(local_118._8_4_ <= fVar17);
    auVar20._12_4_ = -(uint)(local_118._12_4_ <= fVar17);
    iVar13 = movmskps(uVar14,auVar20);
    _local_e8 = auVar3._0_12_;
    afStack_e4[2] = 0.0;
    bVar4 = (&DAT_145ba08e0)[iVar13];
    local_c8._4_4_ = fVar8 + fVar25;
    local_c8._0_4_ = fVar6 + fVar24;
    fStack_c0 = fVar10 + fVar26;
    fStack_bc = 0.0;
    local_d8._4_4_ = fVar25;
    local_d8._0_4_ = fVar24;
    fStack_d0 = fVar26;
    fStack_cc = 0.0;
    auVar16._12_4_ = 0;
    _local_a8 = auVar16;
    local_88 = (undefined1  [8])(uVar11 ^ 0x8000000080000000);
    fStack_80 = fVar27;
    fStack_7c = 0.0;
    local_78._8_4_ = -fVar10;
    local_78._0_8_ = auVar12._0_8_ ^ 0x8000000080000000;
    local_78._12_4_ = 0;
    lVar2 = (longlong)(4 << (bVar4 & 0x1f)) * 4;
    uVar18 = *(uint *)(&UNK_145b8de68 + lVar2) & (uint)fStack_120 |
             *(uint *)(&DAT_145b8de60 + lVar2) & (uint)local_128;
    uVar21 = *(uint *)(&UNK_145b8de6c + lVar2) & uStack_11c |
             *(uint *)(&UNK_145b8de64 + lVar2) & (uint)fStack_124;
    uVar22 = *(uint *)(&DAT_145b8de60 + lVar2) & (uint)local_128 |
             *(uint *)(&UNK_145b8de68 + lVar2) & (uint)fStack_120;
    uVar23 = *(uint *)(&UNK_145b8de64 + lVar2) & (uint)fStack_124 |
             *(uint *)(&UNK_145b8de6c + lVar2) & uStack_11c;
    local_b8._4_4_ = fVar8 + fVar7;
    local_b8._0_4_ = fVar6 + fVar5;
    local_b8._8_4_ = fVar10 + fVar9;
    local_b8._12_4_ = 0;
    fStack_8c = 0.0;
    _local_98 = auVar12._0_12_;
    lVar2 = (longlong)(char)bVar4 * 0x10;
    fVar5 = *(float *)(local_a8 + lVar2 + 4);
    fVar7 = *(float *)(local_a8 + lVar2 + 8);
    fVar9 = *(float *)(local_a8 + lVar2 + 0xc);
    lVar1 = (longlong)(char)bVar4 * 0x10;
    fVar6 = *(float *)(local_e8 + lVar1 + 4);
    fVar8 = *(float *)(local_e8 + lVar1 + 8);
    fVar10 = *(float *)(local_e8 + lVar1 + 0xc);
    *param_5 = (float)(uVar21 | uVar18) * *(float *)(local_a8 + lVar2) +
               *(float *)(local_e8 + lVar1);
    param_5[1] = (float)(uVar18 | uVar21) * fVar5 + fVar6;
    param_5[2] = (float)(uVar23 | uVar22) * fVar7 + fVar8;
    param_5[3] = (float)(uVar22 | uVar23) * fVar9 + fVar10;
  }
  return;
}



// FUNCTION 1438aadc0 FUN_1438aadc0 body=148 status=ok
// SIG undefined FUN_1438aadc0(void)

void FUN_1438aadc0(undefined8 param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1438aaf40();
  iVar2 = FUN_1438ab050(param_1);
  if (iVar2 == 0) {
    iVar2 = iVar1 + 1;
    *param_2 = iVar2 + (iVar2 / 3 + (iVar2 >> 0x1f) +
                       (int)(((longlong)iVar2 / 3 + ((longlong)iVar2 >> 0x3f) & 0xffffffffU) >> 0x1f
                            )) * -3;
    iVar1 = iVar1 + 2;
  }
  else {
    iVar2 = iVar1 + 2;
    iVar1 = iVar1 + 1;
    *param_2 = iVar2 + (iVar2 / 3 + (iVar2 >> 0x1f) +
                       (int)(((longlong)iVar2 / 3 + ((longlong)iVar2 >> 0x3f) & 0xffffffffU) >> 0x1f
                            )) * -3;
  }
  *param_3 = iVar1 + (iVar1 / 3 + (iVar1 >> 0x1f) +
                     (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f))
                     * -3;
  return;
}



// FUNCTION 1438aae60 FUN_1438aae60 body=88 status=ok
// SIG undefined FUN_1438aae60(void)

void FUN_1438aae60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int local_res8 [2];
  int local_res10 [2];
  
  FUN_1438aadc0(param_1,local_res8,local_res10);
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  *(float *)((longlong)param_2 + (longlong)local_res8[0] * 4) =
       *(float *)(param_1 + 2) + *(float *)((longlong)param_2 + (longlong)local_res8[0] * 4);
  *(float *)((longlong)param_2 + (longlong)local_res10[0] * 4) =
       *(float *)((longlong)param_1 + 0x14) +
       *(float *)((longlong)param_2 + (longlong)local_res10[0] * 4);
  return;
}



// FUNCTION 1438aaec0 FUN_1438aaec0 body=115 status=ok
// SIG undefined FUN_1438aaec0(void)

void FUN_1438aaec0(undefined8 param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = FUN_1438aaf40();
  lVar1 = (longlong)iVar6 * 0x10;
  uVar2 = *(uint *)(&DAT_1467f0890 + lVar1);
  uVar3 = *(uint *)(lVar1 + 0x1467f0894);
  uVar4 = *(uint *)(lVar1 + 0x1467f0898);
  uVar5 = *(uint *)(lVar1 + 0x1467f089c);
  iVar6 = FUN_1438ab050(param_1);
  if (iVar6 != 0) {
    *param_2 = uVar2 ^ 0x80000000;
    param_2[1] = uVar3 ^ 0x80000000;
    param_2[2] = uVar4 ^ 0x80000000;
    param_2[3] = uVar5;
    return;
  }
  *param_2 = uVar2;
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  param_2[3] = uVar5;
  return;
}



// FUNCTION 1438aaf40 FUN_1438aaf40 body=7 status=ok
// SIG undefined FUN_1438aaf40(void)

byte FUN_1438aaf40(longlong param_1)

{
  return *(byte *)(param_1 + 0x18) >> 1;
}



// FUNCTION 1438aaf50 FUN_1438aaf50 body=112 status=ok
// SIG undefined FUN_1438aaf50(void)

void FUN_1438aaf50(longlong param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int local_res8 [2];
  int local_res10 [2];
  
  FUN_1438aadc0(param_1,local_res8,local_res10);
  fVar1 = *(float *)(param_1 + 0x10);
  fVar2 = *(float *)(param_1 + 0x14);
  fVar3 = *(float *)(param_1 + (longlong)local_res8[0] * 4);
  fVar4 = *(float *)(param_1 + (longlong)local_res10[0] * 4);
  *param_2 = fVar3;
  *param_3 = fVar4;
  *param_4 = fVar1 + fVar3;
  *param_5 = fVar2 + fVar4;
  return;
}



// FUNCTION 1438aafc0 FUN_1438aafc0 body=87 status=ok
// SIG undefined FUN_1438aafc0(void)

void FUN_1438aafc0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int local_res8 [2];
  int local_res10 [2];
  
  FUN_1438aadc0(param_1,local_res8,local_res10);
  *param_2 = 0;
  param_2[1] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  *(undefined4 *)((longlong)param_2 + (longlong)local_res8[0] * 4) = *(undefined4 *)(param_1 + 0x10)
  ;
  *(undefined4 *)((longlong)param_3 + (longlong)local_res10[0] * 4) =
       *(undefined4 *)(param_1 + 0x14);
  return;
}



// FUNCTION 1438ab020 FUN_1438ab020 body=15 status=ok
// SIG undefined FUN_1438ab020(void)

void FUN_1438ab020(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1438ab170(param_1 + 4);
  return;
}



// FUNCTION 1438ab030 FUN_1438ab030 body=24 status=ok
// SIG undefined FUN_1438ab030(void)

undefined8 FUN_1438ab030(longlong param_1)

{
  if ((0.0 < *(float *)(param_1 + 0x10) || *(float *)(param_1 + 0x10) == 0.0) &&
     (0.0 < *(float *)(param_1 + 0x14) || *(float *)(param_1 + 0x14) == 0.0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 1438ab050 FUN_1438ab050 body=8 status=ok
// SIG undefined FUN_1438ab050(void)

byte FUN_1438ab050(longlong param_1)

{
  return *(byte *)(param_1 + 0x18) & 1;
}



// FUNCTION 1438ab060 isPoint body=10 status=ok
// SIG undefined isPoint(void)

bool hkaiGatePathUtil::Gate::isPoint(longlong param_1)

{
  return *(char *)(param_1 + 0x18) == -1;
}



// FUNCTION 1438ab070 FUN_1438ab070 body=10 status=ok
// SIG undefined FUN_1438ab070(void)

bool FUN_1438ab070(longlong param_1)

{
  return *(char *)(param_1 + 0x18) != -2;
}



// FUNCTION 1438ab080 FUN_1438ab080 body=15 status=ok
// SIG undefined FUN_1438ab080(void)

void FUN_1438ab080(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x14) = 0xbf800000;
  return;
}



// FUNCTION 1438ab090 FUN_1438ab090 body=67 status=ok
// SIG undefined FUN_1438ab090(void)

void FUN_1438ab090(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int local_res10 [2];
  int local_res18 [4];
  
  FUN_1438aadc0(param_1,local_res18,local_res10);
  uVar1 = *(undefined4 *)(param_2 + (longlong)local_res18[0] * 4);
  param_3[1] = *(undefined4 *)(param_2 + (longlong)local_res10[0] * 4);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1438ab0e0 setAsPoint body=17 status=ok
// SIG undefined setAsPoint(void)

void hkaiGatePathUtil::Gate::setAsPoint(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0xff;
  return;
}



// FUNCTION 1438ab100 FUN_1438ab100 body=100 status=ok
// SIG undefined FUN_1438ab100(void)

void FUN_1438ab100(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = hkaiGatePathUtil::Gate::isPoint(param_2);
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
    return;
  }
  uVar1 = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(byte *)(param_1 + 3) = *(byte *)(param_2 + 3) ^ 1;
  return;
}



// FUNCTION 1438ab170 FUN_1438ab170 body=5 status=ok
// SIG undefined FUN_1438ab170(void)

void FUN_1438ab170(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 0xfe;
  return;
}



// FUNCTION 1438ab180 FUN_1438ab180 body=121 status=ok
// SIG undefined FUN_1438ab180(void)

void FUN_1438ab180(longlong param_1,float param_2,float param_3,float param_4,float param_5)

{
  int local_res10 [2];
  int local_res18 [4];
  
  FUN_1438aadc0(param_1,local_res10,local_res18);
  *(float *)(param_1 + (longlong)local_res10[0] * 4) = param_2;
  *(float *)(param_1 + (longlong)local_res18[0] * 4) = param_3;
  *(float *)(param_1 + 0x10) = param_4 - param_2;
  *(float *)(param_1 + 0x14) = param_5 - param_3;
  return;
}



// FUNCTION 1438ab200 FUN_1438ab200 body=174 status=ok
// SIG undefined FUN_1438ab200(void)

void FUN_1438ab200(longlong param_1,float *param_2,float *param_3)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  pfVar2 = (float *)((longlong)(int)param_2[4] * 0x40 + *(longlong *)(param_1 + 0x18));
  fVar4 = *pfVar2 - *param_2;
  fVar5 = pfVar2[1] - param_2[1];
  fVar6 = pfVar2[2] - param_2[2];
  fVar7 = pfVar2[3] - param_2[3];
  iVar1 = hkaiGatePathUtil::Gate::isPoint(pfVar2 + 4);
  if (iVar1 == 0) {
    fVar3 = pfVar2[8];
    if (pfVar2[9] <= pfVar2[8]) {
      fVar3 = pfVar2[9];
    }
    fVar3 = fVar3 * 0.01;
    FUN_1438aaec0(pfVar2 + 4,&local_38);
    fVar4 = fVar4 - fVar3 * local_38;
    fVar5 = fVar5 - fVar3 * fStack_34;
    fVar6 = fVar6 - fVar3 * fStack_30;
    fVar7 = fVar7 - fVar3 * fStack_2c;
  }
  *param_3 = fVar4;
  param_3[1] = fVar5;
  param_3[2] = fVar6;
  param_3[3] = fVar7;
  return;
}



// FUNCTION 1438ab2b0 FUN_1438ab2b0 body=1764 status=ok
// SIG undefined FUN_1438ab2b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438ab2b0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  float *pfVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auVar6 [14];
  int iVar7;
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [14];
  bool bVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined8 *puVar22;
  int iVar23;
  longlong lVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint local_110;
  longlong local_108;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8 [4];
  longlong local_d8;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8 [4];
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78 [14];
  
  plVar1 = (longlong *)(param_1 + 0x18);
  iVar4 = *(int *)(param_3 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = 0;
  uVar15 = FUN_143703a50();
  uVar19 = *(uint *)(param_1 + 0x24) & 0x3fffffff;
  if ((int)uVar19 < iVar4) {
    iVar7 = uVar19 * 2;
    iVar23 = iVar4;
    if (iVar4 < iVar7) {
      iVar23 = iVar7;
    }
    FUN_14370c310(uVar15,plVar1,iVar23,0x40);
  }
  uVar19 = *(uint *)(param_2 + 0x40);
  lVar24 = *(longlong *)((ulonglong)(uVar19 >> 0x16) * 0x100 + 8 + *(longlong *)(param_4 + 0x38));
  FUN_142fbd3f0(lVar24,*(longlong *)(*(longlong *)(lVar24 + 0x18) + 0x18) +
                       (ulonglong)(uVar19 & 0x3fffff) * 0x18,&local_c8);
  if (1 < (longlong)iVar4) {
    local_d8 = (longlong)iVar4 + -1;
    local_108 = 0;
    uVar21 = uVar19;
    local_110 = uVar19 >> 0x16;
    do {
      if ((*(int *)(param_3 + 0x30) == 0) ||
         (uVar19 = *(uint *)(local_108 + *(longlong *)(param_3 + 0x28)), uVar19 == 0xffffffff)) {
        bVar13 = false;
      }
      else {
        lVar5 = *(longlong *)(lVar24 + 0x18);
        uVar19 = uVar19 & 0x3fffff;
        bVar13 = true;
        if ((int)uVar19 < *(int *)(lVar5 + 0x30)) {
          lVar16 = *(longlong *)(lVar5 + 0x28);
          uVar20 = uVar19;
        }
        else {
          uVar20 = uVar19 - *(int *)(lVar5 + 0x30);
          lVar16 = *(longlong *)(lVar5 + 0x60);
        }
        uVar17 = (ulonglong)*(ushort *)(lVar16 + (longlong)(int)uVar20 * 8);
        lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x38) + 0x38);
        uVar15 = FUN_143703a50();
        iVar4 = *(int *)(param_1 + 0x20);
        uVar20 = *(uint *)(param_1 + 0x24) & 0x3fffffff;
        iVar23 = iVar4 + 2;
        if ((int)uVar20 < iVar23) {
          iVar7 = uVar20 * 2;
          if (iVar23 < iVar7) {
            iVar23 = iVar7;
          }
          FUN_14370c310(uVar15,plVar1,iVar23,0x40);
        }
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 2;
        puVar22 = (undefined8 *)((longlong)iVar4 * 0x40 + *plVar1);
        lVar16 = *(longlong *)(*(longlong *)(lVar24 + 0x18) + 0x38);
        bVar3 = *(byte *)(lVar24 + 0x30);
        local_98 = (float)*(ushort *)(lVar5 + uVar17 * 0x18) * *(float *)(lVar16 + 0x90) +
                   *(float *)(lVar16 + 0xa0);
        fStack_94 = (float)*(ushort *)(lVar5 + 2 + uVar17 * 0x18) * *(float *)(lVar16 + 0x94) +
                    *(float *)(lVar16 + 0xa4);
        fStack_90 = (float)*(ushort *)(lVar5 + 4 + uVar17 * 0x18) * *(float *)(lVar16 + 0x98) +
                    *(float *)(lVar16 + 0xa8);
        fStack_8c = *(float *)(lVar16 + 0x9c) * 0.0 + *(float *)(lVar16 + 0xac);
        if (bVar3 != 0) {
          uVar20 = (uint)bVar3;
          uVar28 = -(uint)(0x16a8300 << uVar20 < 0);
          uVar29 = -(uint)(0x502ab000 << uVar20 < 0);
          uVar30 = -(uint)(0xa2a8c00 << uVar20 < 0);
          uVar31 = -(uint)(0xa154c00 << uVar20 < 0);
          uVar32 = -(uint)(0x1554300 << uVar20 < 0);
          uVar33 = -(uint)(0x50157000 << uVar20 < 0);
          uVar20 = (uint)local_98 & uVar30;
          uVar34 = (uint)local_98 & uVar32;
          uVar35 = (uint)fStack_94 & uVar33;
          uVar18 = (ulonglong)bVar3;
          local_98 = (float)((0xae71e0U >> uVar18) << 0x1f ^
                            (~uVar31 & ((uint)fStack_94 & uVar28 | ~uVar28 & (uint)local_98) |
                            (uint)fStack_90 & uVar31));
          fStack_94 = (float)((0xb9e306U >> uVar18) << 0x1f ^
                             (~uVar32 & ((uint)fStack_90 & uVar29 | ~uVar29 & (uint)fStack_94) |
                             uVar34));
          fStack_90 = (float)((0xeb903cU >> uVar18) << 0x1f ^
                             (~uVar33 & (uVar20 | ~uVar30 & (uint)fStack_90) | uVar35));
          fStack_8c = (float)((0U >> uVar18) << 0x1f ^ (uint)fStack_8c);
        }
        local_98 = local_98 + *(float *)(lVar24 + 0x40);
        fStack_94 = fStack_94 + *(float *)(lVar24 + 0x44);
        fStack_90 = fStack_90 + *(float *)(lVar24 + 0x48);
        fStack_8c = fStack_8c + *(float *)(lVar24 + 0x4c);
        hkaiGatePathUtil::Gate::setAsPoint(puVar22 + 2,&local_98);
        *(uint *)((longlong)puVar22 + 0x34) = uVar21;
        *(uint *)(puVar22 + 7) = uVar19;
        *puVar22 = CONCAT44(fStack_94,local_98);
        puVar22[1] = CONCAT44(fStack_8c,fStack_90);
        *(undefined1 *)(puVar22 + 6) = 0xf;
        lVar16 = *(longlong *)(*(longlong *)(lVar24 + 0x18) + 0x38);
        bVar3 = *(byte *)(lVar24 + 0x30);
        local_88 = (float)*(ushort *)(lVar5 + 8 + uVar17 * 0x18) * *(float *)(lVar16 + 0x90) +
                   *(float *)(lVar16 + 0xa0);
        fStack_84 = (float)*(ushort *)(lVar5 + 10 + uVar17 * 0x18) * *(float *)(lVar16 + 0x94) +
                    *(float *)(lVar16 + 0xa4);
        fStack_80 = (float)*(ushort *)(lVar5 + 0xc + uVar17 * 0x18) * *(float *)(lVar16 + 0x98) +
                    *(float *)(lVar16 + 0xa8);
        fStack_7c = *(float *)(lVar16 + 0x9c) * 0.0 + *(float *)(lVar16 + 0xac);
        if (bVar3 != 0) {
          uVar19 = (uint)bVar3;
          uVar20 = -(uint)(0x16a8300 << uVar19 < 0);
          uVar28 = -(uint)(0x502ab000 << uVar19 < 0);
          uVar29 = -(uint)(0xa2a8c00 << uVar19 < 0);
          uVar30 = -(uint)(0xa154c00 << uVar19 < 0);
          uVar31 = -(uint)(0x1554300 << uVar19 < 0);
          uVar32 = -(uint)(0x50157000 << uVar19 < 0);
          uVar19 = (uint)local_88 & uVar29;
          uVar33 = (uint)local_88 & uVar31;
          uVar34 = (uint)fStack_84 & uVar32;
          uVar17 = (ulonglong)bVar3;
          local_88 = (float)((0xae71e0U >> uVar17) << 0x1f ^
                            (~uVar30 & ((uint)fStack_84 & uVar20 | ~uVar20 & (uint)local_88) |
                            (uint)fStack_80 & uVar30));
          fStack_84 = (float)((0xb9e306U >> uVar17) << 0x1f ^
                             (~uVar31 & ((uint)fStack_80 & uVar28 | ~uVar28 & (uint)fStack_84) |
                             uVar33));
          fStack_80 = (float)((0xeb903cU >> uVar17) << 0x1f ^
                             (~uVar32 & (uVar19 | ~uVar29 & (uint)fStack_80) | uVar34));
          fStack_7c = (float)((0U >> uVar17) << 0x1f ^ (uint)fStack_7c);
        }
        local_88 = local_88 + *(float *)(lVar24 + 0x40);
        fStack_84 = fStack_84 + *(float *)(lVar24 + 0x44);
        fStack_80 = fStack_80 + *(float *)(lVar24 + 0x48);
        fStack_7c = fStack_7c + *(float *)(lVar24 + 0x4c);
        hkaiGatePathUtil::Gate::setAsPoint(puVar22 + 10,&local_88);
        *(undefined8 *)((longlong)puVar22 + 0x74) = 0xffffffffffffffff;
        puVar22[8] = CONCAT44(fStack_84,local_88);
        puVar22[9] = CONCAT44(fStack_7c,fStack_80);
        *(undefined1 *)(puVar22 + 0xe) = 0xf;
      }
      local_108 = local_108 + 4;
      uVar19 = *(uint *)(local_108 + *(longlong *)(param_3 + 0x18));
      uVar20 = uVar19 >> 0x16;
      if (uVar20 != local_110) {
        lVar24 = *(longlong *)((ulonglong)uVar20 * 0x100 + 8 + *(longlong *)(param_4 + 0x38));
      }
      lVar5 = *(longlong *)(*(longlong *)(lVar24 + 0x18) + 0x38);
      auVar25 = *(undefined1 (*) [16])
                 (*(longlong *)(*(longlong *)(lVar24 + 0x18) + 0x18) +
                 (longlong)(int)(uVar19 & 0x3fffff) * 0x18);
      auVar6._10_2_ = 0;
      auVar6._0_10_ = auVar25._0_10_;
      auVar6._12_2_ = auVar25._6_2_;
      auVar8._8_2_ = auVar25._4_2_;
      auVar8._0_8_ = auVar25._0_8_;
      auVar8._10_4_ = auVar6._10_4_;
      auVar12._6_8_ = 0;
      auVar12._0_6_ = auVar8._8_6_;
      auVar9._4_2_ = auVar25._2_2_;
      auVar9._0_4_ = auVar25._0_4_;
      auVar9._6_8_ = SUB148(auVar12 << 0x40,6);
      local_f8 = *(float *)(lVar5 + 0x90) * ((float)(auVar25._0_4_ & 0xffff) + 0.0) +
                 *(float *)(lVar5 + 0xa0);
      fStack_f4 = *(float *)(lVar5 + 0x94) * ((float)auVar9._4_4_ + 0.0) + *(float *)(lVar5 + 0xa4);
      fStack_f0 = *(float *)(lVar5 + 0x98) *
                  ((float)(auVar8._8_4_ >> 0x10) * 65536.0 + (float)(auVar8._8_4_ & 0xffff)) +
                  *(float *)(lVar5 + 0xa8);
      fStack_ec = *(float *)(lVar5 + 0x9c) * ((float)(auVar6._10_4_ >> 0x10) + 0.0) +
                  *(float *)(lVar5 + 0xac);
      local_e8[0] = *(float *)(lVar5 + 0x90) * ((float)auVar25._8_2_ + 0.0) +
                    *(float *)(lVar5 + 0xa0);
      local_e8[1] = *(float *)(lVar5 + 0x94) * ((float)auVar25._10_2_ + 0.0) +
                    *(float *)(lVar5 + 0xa4);
      local_e8[2] = *(float *)(lVar5 + 0x98) * ((float)auVar25._12_2_ + 0.0) +
                    *(float *)(lVar5 + 0xa8);
      local_e8[3] = *(float *)(lVar5 + 0x9c) * ((float)auVar25._14_2_ + 0.0) +
                    *(float *)(lVar5 + 0xac);
      FUN_142fbdd20(lVar24 + 0x30,&local_f8);
      local_f8 = local_f8 + *(float *)(lVar24 + 0x40);
      fStack_f4 = fStack_f4 + *(float *)(lVar24 + 0x44);
      fStack_f0 = fStack_f0 + *(float *)(lVar24 + 0x48);
      fStack_ec = fStack_ec + *(float *)(lVar24 + 0x4c);
      local_e8[0] = local_e8[0] + *(float *)(lVar24 + 0x40);
      local_e8[1] = local_e8[1] + *(float *)(lVar24 + 0x44);
      local_e8[2] = local_e8[2] + *(float *)(lVar24 + 0x48);
      local_e8[3] = local_e8[3] + *(float *)(lVar24 + 0x4c);
      if (!bVar13) {
        uVar15 = FUN_143703a50();
        iVar4 = *(int *)(param_1 + 0x20);
        uVar28 = *(uint *)(param_1 + 0x24) & 0x3fffffff;
        iVar23 = iVar4 + 1;
        if ((int)uVar28 < iVar23) {
          iVar7 = uVar28 * 2;
          if (iVar23 < iVar7) {
            iVar23 = iVar7;
          }
          uVar15 = FUN_14370c310(uVar15,plVar1,iVar23,0x40);
        }
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        puVar22 = (undefined8 *)((longlong)iVar4 * 0x40 + *plVar1);
        if (uVar20 != local_110) {
          auVar25._4_4_ = fStack_f4;
          auVar25._0_4_ = local_f8;
          auVar25._8_4_ = fStack_f0;
          auVar25._12_4_ = fStack_ec;
          auVar10._4_4_ = fStack_c4;
          auVar10._0_4_ = local_c8;
          auVar10._8_4_ = fStack_c0;
          auVar10._12_4_ = fStack_bc;
          auVar11._4_4_ = local_b8[1];
          auVar11._0_4_ = local_b8[0];
          auVar11._8_4_ = local_b8[2];
          auVar11._12_4_ = local_b8[3];
          auVar27._4_4_ = local_e8[1];
          auVar27._0_4_ = local_e8[0];
          auVar27._8_4_ = local_e8[2];
          auVar27._12_4_ = local_e8[3];
          auVar26._0_4_ = -(uint)(local_f8 <= local_b8[0] && local_c8 <= local_e8[0]);
          auVar26._4_4_ = -(uint)(fStack_f4 <= local_b8[1] && fStack_c4 <= local_e8[1]);
          auVar26._8_4_ = -(uint)(fStack_f0 <= local_b8[2] && fStack_c0 <= local_e8[2]);
          auVar26._12_4_ = -(uint)(fStack_ec <= local_b8[3] && fStack_bc <= local_e8[3]);
          uVar14 = movmskps((int)uVar15,auVar26);
          if (((byte)uVar14 & 7) == 7) {
            auVar25 = maxps(auVar10,auVar25);
            auVar27 = minps(auVar11,auVar27);
            local_78[0] = auVar27._0_4_ - auVar25._0_4_;
            local_78[1] = auVar27._4_4_ - auVar25._4_4_;
            local_78[2] = auVar27._8_4_ - auVar25._8_4_;
            local_78[3] = auVar27._12_4_ - auVar25._12_4_;
            uVar18 = (ulonglong)(local_78[1] <= local_78[0]);
            uVar17 = 2;
            if (local_78[uVar18] <= local_78[2] && local_78[2] != local_78[uVar18]) {
              uVar17 = uVar18;
            }
            if (local_b8[uVar17] <= local_e8[uVar17]) {
              lVar5 = (longlong)(4 << (sbyte)uVar17) * 4;
              uVar28 = *(uint *)(&DAT_145b8de60 + lVar5);
              uVar29 = *(uint *)(&UNK_145b8de64 + lVar5);
              uVar30 = *(uint *)(&UNK_145b8de68 + lVar5);
              uVar31 = *(uint *)(&UNK_145b8de6c + lVar5);
              uVar32 = (uint)local_b8[2] & uVar30 | (uint)local_b8[0] & uVar28;
              uVar33 = (uint)local_b8[3] & uVar31 | (uint)local_b8[1] & uVar29;
              uVar34 = (uint)local_b8[0] & uVar28 | (uint)local_b8[2] & uVar30;
              uVar35 = (uint)local_b8[1] & uVar29 | (uint)local_b8[3] & uVar31;
              local_f8 = (float)((uVar33 | uVar32) & uVar28 | ~uVar28 & (uint)local_f8);
              fStack_f4 = (float)((uVar32 | uVar33) & uVar29 | ~uVar29 & (uint)fStack_f4);
              fStack_f0 = (float)((uVar35 | uVar34) & uVar30 | ~uVar30 & (uint)fStack_f0);
              fStack_ec = (float)((uVar34 | uVar35) & uVar31 | ~uVar31 & (uint)fStack_ec);
            }
            else {
              lVar5 = (longlong)(4 << (sbyte)uVar17) * 4;
              uVar28 = *(uint *)(&DAT_145b8de60 + lVar5);
              uVar29 = *(uint *)(&UNK_145b8de64 + lVar5);
              uVar30 = *(uint *)(&UNK_145b8de68 + lVar5);
              uVar31 = *(uint *)(&UNK_145b8de6c + lVar5);
              uVar32 = (uint)fStack_c0 & uVar30 | (uint)local_c8 & uVar28;
              uVar33 = (uint)fStack_bc & uVar31 | (uint)fStack_c4 & uVar29;
              uVar34 = (uint)local_c8 & uVar28 | (uint)fStack_c0 & uVar30;
              uVar35 = (uint)fStack_c4 & uVar29 | (uint)fStack_bc & uVar31;
              local_e8[0] = (float)((uVar33 | uVar32) & uVar28 | ~uVar28 & (uint)local_e8[0]);
              local_e8[1] = (float)((uVar32 | uVar33) & uVar29 | ~uVar29 & (uint)local_e8[1]);
              local_e8[2] = (float)((uVar35 | uVar34) & uVar30 | ~uVar30 & (uint)local_e8[2]);
              local_e8[3] = (float)((uVar34 | uVar35) & uVar31 | ~uVar31 & (uint)local_e8[3]);
            }
          }
        }
        FUN_1438a9960(&local_c8,&local_f8,puVar22 + 2);
        *(uint *)((longlong)puVar22 + 0x34) = uVar21;
        *(undefined4 *)(puVar22 + 7) = 0xffffffff;
        *puVar22 = puVar22[2];
        puVar22[1] = puVar22[3];
        *(undefined1 *)(puVar22 + 6) = 0;
      }
      local_d8 = local_d8 + -1;
      uVar21 = uVar19;
      local_c8 = local_f8;
      fStack_c4 = fStack_f4;
      fStack_c0 = fStack_f0;
      fStack_bc = fStack_ec;
      local_b8[0] = local_e8[0];
      local_b8[1] = local_e8[1];
      local_b8[2] = local_e8[2];
      local_b8[3] = local_e8[3];
      local_110 = uVar20;
    } while (local_d8 != 0);
    local_d8 = 0;
  }
  iVar4 = *(int *)(param_3 + 0x54);
  if (iVar4 < 0) {
    local_a8 = (local_b8[0] + local_c8) * _DAT_1467f07e0;
    fStack_a4 = (local_b8[1] + fStack_c4) * fRam00000001467f07e4;
    fStack_a0 = (local_b8[2] + fStack_c0) * fRam00000001467f07e8;
    fStack_9c = (local_b8[3] + fStack_bc) * fRam00000001467f07ec;
  }
  else {
    uVar19 = *(uint *)(*(longlong *)(param_2 + 0x48) + (longlong)iVar4 * 4);
    pfVar2 = (float *)(*(longlong *)(param_2 + 0x30) + (longlong)iVar4 * 0x10);
    local_a8 = *pfVar2;
    fStack_a4 = pfVar2[1];
    fStack_a0 = pfVar2[2];
    fStack_9c = pfVar2[3];
  }
  uVar15 = FUN_143703a50();
  iVar4 = *(int *)(param_1 + 0x20);
  uVar21 = *(uint *)(param_1 + 0x24) & 0x3fffffff;
  iVar23 = iVar4 + 1;
  if ((int)uVar21 < iVar23) {
    iVar7 = uVar21 * 2;
    if (iVar23 < iVar7) {
      iVar23 = iVar7;
    }
    FUN_14370c310(uVar15,plVar1,iVar23,0x40);
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  puVar22 = (undefined8 *)((longlong)iVar4 * 0x40 + *plVar1);
  hkaiGatePathUtil::Gate::setAsPoint(puVar22 + 2,&local_a8);
  *puVar22 = CONCAT44(fStack_a4,local_a8);
  puVar22[1] = CONCAT44(fStack_9c,fStack_a0);
  *(uint *)((longlong)puVar22 + 0x34) = uVar19;
  *(undefined1 *)(puVar22 + 6) = 0xf;
  *(undefined1 *)(param_1 + 0x44) = 1;
  return;
}



// FUNCTION 1438ab9a0 FUN_1438ab9a0 body=397 status=ok
// SIG undefined FUN_1438ab9a0(void)

int FUN_1438ab9a0(longlong param_1,int param_2,int param_3,undefined8 *param_4,undefined8 *param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [64];
  
  if (param_2 == param_3) {
    uVar3 = param_4[1];
    *param_5 = *param_4;
    param_5[1] = uVar3;
    return param_3 + -1;
  }
  puVar1 = (undefined4 *)((longlong)param_2 * 0x40 + *(longlong *)(param_1 + 0x18));
  local_68 = *puVar1;
  uStack_64 = puVar1[1];
  uStack_60 = puVar1[2];
  uStack_5c = puVar1[3];
  FUN_1438ab020(local_58,&local_68);
  param_2 = param_2 + -1;
  lVar7 = (longlong)param_2 * 0x40;
  iVar5 = hkaiGatePathUtil::Gate::isPoint(*(longlong *)(param_1 + 0x18) + 0x10 + lVar7);
  if (iVar5 == 0) {
    iVar5 = param_2;
    do {
      AIcarusPlayerCharacter::OnOwner_ConsumableExpired_Implementation
                (local_58,*(longlong *)(param_1 + 0x18) + 0x10 + lVar7);
      param_2 = iVar5 + -1;
      if (param_2 == param_3 + -1) {
        cVar4 = FUN_1438aa3d0(local_58,param_4);
        if (cVar4 == '\0') {
          puVar2 = (undefined8 *)((longlong)iVar5 * 0x40 + *(longlong *)(param_1 + 0x18));
          uVar3 = puVar2[1];
          *param_5 = *puVar2;
          param_5[1] = uVar3;
          return iVar5;
        }
        uVar8 = *(undefined4 *)param_4;
        uVar9 = *(undefined4 *)((longlong)param_4 + 4);
        uVar10 = *(undefined4 *)(param_4 + 1);
        uVar11 = *(undefined4 *)((longlong)param_4 + 0xc);
        goto LAB_1438abaa4;
      }
      lVar7 = (longlong)param_2 * 0x40;
      cVar4 = FUN_1438aa3d0(local_58,*(longlong *)(param_1 + 0x18) + lVar7);
      if (cVar4 == '\0') {
        puVar2 = (undefined8 *)((longlong)iVar5 * 0x40 + *(longlong *)(param_1 + 0x18));
        uVar3 = puVar2[1];
        *param_5 = *puVar2;
        param_5[1] = uVar3;
        return iVar5;
      }
      iVar6 = hkaiGatePathUtil::Gate::isPoint(*(longlong *)(param_1 + 0x18) + 0x10 + lVar7);
      iVar5 = param_2;
    } while (iVar6 == 0);
  }
  puVar1 = (undefined4 *)((longlong)param_2 * 0x40 + *(longlong *)(param_1 + 0x18));
  uVar8 = *puVar1;
  uVar9 = puVar1[1];
  uVar10 = puVar1[2];
  uVar11 = puVar1[3];
LAB_1438abaa4:
  *(undefined4 *)param_5 = uVar8;
  *(undefined4 *)((longlong)param_5 + 4) = uVar9;
  *(undefined4 *)(param_5 + 1) = uVar10;
  *(undefined4 *)((longlong)param_5 + 0xc) = uVar11;
  return param_2;
}



// FUNCTION 1438abb30 FUN_1438abb30 body=269 status=ok
// SIG undefined FUN_1438abb30(void)

int FUN_1438abb30(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [64];
  
  iVar5 = param_2 + 1;
  lVar4 = (longlong)iVar5 * 0x40;
  iVar3 = hkaiGatePathUtil::Gate::isPoint(*(longlong *)(param_1 + 0x18) + 0x10 + lVar4);
  if (iVar3 == 0) {
    puVar1 = (undefined4 *)((longlong)param_2 * 0x40 + *(longlong *)(param_1 + 0x18));
    local_58 = *puVar1;
    uStack_54 = puVar1[1];
    uStack_50 = puVar1[2];
    uStack_4c = puVar1[3];
    FUN_1438ab020(local_48,&local_58);
    FUN_1438a9e30(local_48,*(longlong *)(param_1 + 0x18) + 0x10 + lVar4);
    param_2 = param_2 + 2;
    lVar4 = (longlong)param_2 * 0x40 + *(longlong *)(param_1 + 0x18);
    cVar2 = FUN_1438aa3d0(local_48,lVar4);
    while (cVar2 != '\0') {
      iVar5 = iVar5 + 1;
      param_2 = param_2 + 1;
      iVar3 = hkaiGatePathUtil::Gate::isPoint(lVar4 + 0x10);
      if (iVar3 != 0) break;
      FUN_1438a9e30(local_48,lVar4 + 0x10);
      lVar4 = (longlong)param_2 * 0x40 + *(longlong *)(param_1 + 0x18);
      cVar2 = FUN_1438aa3d0(local_48,lVar4);
    }
    puVar1 = (undefined4 *)((longlong)iVar5 * 0x40 + *(longlong *)(param_1 + 0x18));
    uVar6 = *puVar1;
    uVar7 = puVar1[1];
    uVar8 = puVar1[2];
    uVar9 = puVar1[3];
  }
  else {
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x10 + lVar4);
    uVar6 = *puVar1;
    uVar7 = puVar1[1];
    uVar8 = puVar1[2];
    uVar9 = puVar1[3];
  }
  *param_3 = uVar6;
  param_3[1] = uVar7;
  param_3[2] = uVar8;
  param_3[3] = uVar9;
  return iVar5;
}



// FUNCTION 1438abc40 FUN_1438abc40 body=141 status=ok
// SIG undefined FUN_1438abc40(void)

void FUN_1438abc40(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x20);
  uVar3 = FUN_143703a50();
  uVar5 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
  if ((int)uVar5 < iVar1) {
    iVar2 = uVar5 * 2;
    if (iVar1 < iVar2) {
      iVar1 = iVar2;
    }
    FUN_14370c310(uVar3,param_2,iVar1,4);
  }
  lVar4 = *(longlong *)(param_1 + 0x18);
  lVar6 = (longlong)*(int *)(param_1 + 0x20) * 0x40 + lVar4;
  for (; lVar4 != lVar6; lVar4 = lVar4 + 0x40) {
    *(undefined4 *)(*param_2 + (longlong)(int)param_2[1] * 4) = *(undefined4 *)(lVar4 + 0x34);
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
  }
  return;
}



// FUNCTION 1438abcd0 getNumGatesRemaining body=7 status=ok
// SIG undefined getNumGatesRemaining(void)

int hkaiGatePath::getNumGatesRemaining(longlong param_1,longlong param_2)

{
  return *(int *)(param_1 + 0x20) - *(int *)(param_2 + 0x10);
}



// FUNCTION 1438abce0 FUN_1438abce0 body=148 status=ok
// SIG undefined FUN_1438abce0(void)

ulonglong FUN_1438abce0(longlong param_1,float *param_2,float param_3,int param_4)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar6 = (ulonglong)(int)param_2[4];
  iVar4 = *(int *)(param_1 + 0x20) + -1;
  if ((int)param_2[4] < iVar4) {
    pfVar5 = (float *)(uVar6 * 0x40 + *(longlong *)(param_1 + 0x18));
    uVar7 = uVar6;
    fVar8 = *param_2;
    fVar9 = param_2[1];
    fVar10 = param_2[2];
    do {
      fVar1 = *pfVar5;
      pfVar2 = pfVar5 + 1;
      pfVar3 = pfVar5 + 2;
      fVar8 = fVar8 - fVar1;
      fVar9 = fVar9 - *pfVar2;
      fVar10 = fVar10 - *pfVar3;
      fVar8 = fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10;
      if (param_3 * param_3 < fVar8) {
        return 0xffffffff;
      }
      if (pfVar5[0xe] != -NAN) {
        uVar6 = 0xffffffff;
        if (param_4 <= (int)uVar7) {
          uVar6 = uVar7 & 0xffffffff;
        }
        return uVar6;
      }
      uVar7 = (ulonglong)((int)uVar7 + 1);
      uVar6 = uVar6 + 1;
      pfVar5 = pfVar5 + 0x10;
      param_3 = param_3 - SQRT(fVar8);
      fVar8 = fVar1;
      fVar9 = *pfVar2;
      fVar10 = *pfVar3;
    } while ((longlong)uVar6 < (longlong)iVar4);
  }
  return 0xffffffff;
}



// FUNCTION 1438abd80 FUN_1438abd80 body=75 status=ok
// SIG undefined FUN_1438abd80(void)

undefined8 FUN_1438abd80(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  undefined4 local_res18 [4];
  
  local_res18[0] = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x38 + (longlong)param_3 * 0x40);
  FUN_14383c540(*(undefined8 *)
                 (*(longlong *)
                   ((ulonglong)
                    (*(uint *)(*(longlong *)(param_1 + 0x18) + 0x34 + (longlong)param_3 * 0x40) >>
                    0x16) * 0x100 + 8 + *(longlong *)(param_4 + 0x38)) + 0x18),param_2,local_res18);
  return param_2;
}



// FUNCTION 1438abdd0 FUN_1438abdd0 body=43 status=ok
// SIG undefined FUN_1438abdd0(void)

void FUN_1438abdd0(longlong param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)((longlong)param_2 * 0x40 + *(longlong *)(param_1 + 0x18));
  uVar2 = puVar1[1];
  *param_3 = *puVar1;
  param_3[1] = uVar2;
  puVar1 = (undefined8 *)((longlong)(param_2 + 1) * 0x40 + *(longlong *)(param_1 + 0x18));
  uVar2 = puVar1[1];
  *param_4 = *puVar1;
  param_4[1] = uVar2;
  return;
}



// FUNCTION 1438abe00 FUN_1438abe00 body=95 status=ok
// SIG undefined FUN_1438abe00(void)

void FUN_1438abe00(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(char *)(param_1 + 0x44) != '\0') {
    FUN_1438abe60();
    FUN_1438abf30(param_1,param_2,param_3,1);
    *(undefined1 *)(param_1 + 0x44) = 0;
    return;
  }
  FUN_1438abf30();
  return;
}



// FUNCTION 1438abe60 FUN_1438abe60 body=196 status=ok
// SIG undefined FUN_1438abe60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438abe60(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  pfVar7 = (float *)((longlong)(*(int *)(param_1 + 0x20) + -1) * 0x40 +
                    *(longlong *)(param_1 + 0x18));
  iVar6 = hkaiGatePathUtil::Gate::isPoint(pfVar7 + 4);
  if (iVar6 == 0) {
    fVar2 = pfVar7[4];
    fVar3 = pfVar7[5];
    fVar4 = pfVar7[6];
    fVar5 = pfVar7[7];
    FUN_1438aae60(pfVar7 + 4,&local_28);
    local_38 = (local_28 - fVar2) * _DAT_1467f07e0 + fVar2;
    fStack_34 = (fStack_24 - fVar3) * fRam00000001467f07e4 + fVar3;
    fStack_30 = (fStack_20 - fVar4) * fRam00000001467f07e8 + fVar4;
    fStack_2c = (fStack_1c - fVar5) * fRam00000001467f07ec + fVar5;
  }
  else {
    local_38 = pfVar7[4];
    fStack_34 = pfVar7[5];
    fStack_30 = pfVar7[6];
    fStack_2c = pfVar7[7];
  }
  *pfVar7 = local_38;
  pfVar7[1] = fStack_34;
  pfVar7[2] = fStack_30;
  pfVar7[3] = fStack_2c;
  iVar6 = *(int *)(param_1 + 0x20) + -2;
  lVar9 = (longlong)iVar6;
  if (-1 < iVar6) {
    lVar8 = lVar9 << 6;
    do {
      lVar1 = *(longlong *)(param_1 + 0x18);
      FUN_1438a9790(lVar1 + 0x10 + lVar8,&local_38,&local_38);
      pfVar7 = (float *)(lVar1 + lVar8);
      *pfVar7 = local_38;
      pfVar7[1] = fStack_34;
      pfVar7[2] = fStack_30;
      pfVar7[3] = fStack_2c;
      lVar8 = lVar8 + -0x40;
      lVar9 = lVar9 + -1;
    } while (-1 < lVar9);
  }
  return;
}



// FUNCTION 1438abf30 FUN_1438abf30 body=142 status=ok
// SIG undefined FUN_1438abf30(void)

void FUN_1438abf30(undefined8 param_1,undefined8 param_2,int *param_3,char param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_res20 [2];
  
  piVar2 = param_3 + 2;
  if (param_4 == '\0') {
    piVar2 = param_3;
  }
  iVar1 = *piVar2;
  if (param_4 == '\0') {
    iVar4 = param_3[1];
  }
  else {
    iVar4 = param_3[3];
  }
  FUN_1438abfc0();
  iVar3 = 1;
  if (1 < iVar4) {
    do {
      if ((iVar1 <= iVar3) && (local_res20[0] != 0)) {
        return;
      }
      FUN_1438abfc0(param_1,param_2,param_3,local_res20);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  return;
}



// FUNCTION 1438abfc0 FUN_1438abfc0 body=748 status=ok
// SIG undefined FUN_1438abfc0(void)

void FUN_1438abfc0(longlong param_1,float *param_2,longlong param_3,undefined4 *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
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
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [80];
  
  fVar13 = param_2[4];
  uVar9 = (*(int *)(param_1 + 0x20) - (int)fVar13) - 2;
  uVar7 = 2;
  uVar9 = uVar9 | uVar9 >> 0x10;
  bVar5 = true;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar10 = 0;
  if (*(int *)(param_1 + 0x40) < (int)((uVar9 >> 1 | uVar9) + 1)) {
    uVar10 = *(uint *)(param_1 + 0x40);
  }
  *(uint *)(param_1 + 0x40) = uVar10 + 1;
  iVar1 = (int)fVar13 + -1;
  fVar2 = *(float *)(param_3 + 0x10);
  fVar3 = *(float *)(param_3 + 0x14);
  bVar4 = false;
  local_a8 = fVar2 * fVar2;
  fStack_a4 = fVar2 * fVar2;
  fStack_a0 = fVar2 * fVar2;
  fStack_9c = fVar2 * fVar2;
  if ((int)fVar13 < *(int *)(param_1 + 0x20)) {
    do {
      pfVar8 = (float *)((longlong)(int)fVar13 * 0x40 + *(longlong *)(param_1 + 0x18));
      iVar6 = hkaiGatePathUtil::Gate::isPoint(pfVar8 + 4);
      if (iVar6 == 0) {
        FUN_1438ab9a0(param_1,fVar13,param_2[4],param_2,local_88);
        FUN_1438abb30(param_1,fVar13,local_98);
        fVar24 = *pfVar8;
        fVar25 = pfVar8[1];
        fVar26 = pfVar8[2];
        FUN_1438aaad0(pfVar8 + 4,local_88,local_98,&local_a8,&local_b8);
        *(ulonglong *)pfVar8 = CONCAT44(fStack_b4,local_b8);
        *(ulonglong *)(pfVar8 + 2) = CONCAT44(uStack_ac,fStack_b0);
        if (fVar13 == param_2[4]) {
          fVar27 = local_b8 - *param_2;
          fVar28 = fStack_b4 - param_2[1];
          fVar29 = fStack_b0 - param_2[2];
          fVar21 = fVar24 - *param_2;
          fVar22 = fVar25 - param_2[1];
          fVar23 = fVar26 - param_2[2];
          fVar13 = fVar27 * fVar27;
          fVar15 = fVar28 * fVar28;
          fVar16 = fVar29 * fVar29;
          fVar17 = fVar21 * fVar21;
          fVar18 = fVar22 * fVar22;
          fVar19 = fVar23 * fVar23;
          fVar20 = (fVar15 + fVar13 + fVar16) * (fVar18 + fVar17 + fVar19);
          if (fVar20 != 0.0) {
            fVar14 = fVar28 * fVar21 - fVar22 * fVar27;
            fVar22 = fVar29 * fVar22 - fVar23 * fVar28;
            fVar21 = fVar27 * fVar23 - fVar21 * fVar29;
            fVar22 = fVar22 * fVar22;
            auVar11._4_4_ = fVar22;
            auVar11._0_4_ = fVar22;
            auVar11._8_4_ = fVar22;
            auVar11._12_4_ = fVar22;
            auVar12._4_4_ = (fVar15 + fVar13 + fVar16) * (fVar18 + fVar17 + fVar19);
            auVar12._0_4_ = fVar20;
            auVar12._8_4_ = (fVar15 + fVar13 + fVar16) * (fVar18 + fVar17 + fVar19);
            auVar12._12_4_ = (fVar15 + fVar13 + fVar16) * (fVar18 + fVar17 + fVar19);
            auVar12 = rcpps(auVar11,auVar12);
            bVar4 = (2.0 - fVar20 * auVar12._0_4_) * auVar12._0_4_ *
                    (fVar21 * fVar21 + fVar22 + fVar14 * fVar14) < fVar3 * fVar3;
          }
        }
        if ((!bVar5) ||
           (fVar24 = fVar24 - local_b8, fVar25 = fVar25 - fStack_b4, fVar26 = fVar26 - fStack_b0,
           fVar2 <= fVar25 * fVar25 + fVar24 * fVar24 + fVar26 * fVar26)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
      }
      uVar9 = uVar7 - 1 & uVar10 | uVar7;
      uVar7 = uVar7 * 2;
      fVar13 = (float)(uVar9 + iVar1);
    } while ((int)fVar13 < *(int *)(param_1 + 0x20));
    if ((!bVar5) && (!bVar4)) {
      *param_4 = 0;
      return;
    }
  }
  *param_4 = 1;
  return;
}



// FUNCTION 1438ac2b0 FUN_1438ac2b0 body=255 status=ok
// SIG undefined FUN_1438ac2b0(void)

undefined8 FUN_1438ac2b0(longlong param_1,undefined8 *param_2,int param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  
  uVar3 = param_4[1];
  iVar1 = *(int *)(param_2 + 2);
  *param_2 = *param_4;
  param_2[1] = uVar3;
  iVar2 = *(int *)(param_1 + 0x20);
  if (((-1 < iVar1) && (iVar1 < iVar2)) &&
     (*(int *)((longlong)iVar1 * 0x40 + 0x34 + *(longlong *)(param_1 + 0x18)) == param_3)) {
    return 0;
  }
  iVar4 = iVar1 + 1;
  if (iVar4 < iVar2) {
    lVar6 = (longlong)iVar4;
    piVar5 = (int *)(*(longlong *)(param_1 + 0x18) + 0x34 + lVar6 * 0x40);
    do {
      if (*piVar5 == param_3) {
        *(int *)(param_2 + 2) = iVar4;
        return 0;
      }
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 1;
      piVar5 = piVar5 + 0x10;
    } while (lVar6 < iVar2);
  }
  iVar4 = iVar1 + -1;
  if (iVar2 + -1 < iVar1 + -1) {
    iVar4 = iVar2 + -1;
  }
  if (-1 < iVar4) {
    lVar6 = (longlong)iVar4;
    piVar5 = (int *)(*(longlong *)(param_1 + 0x18) + 0x34 + lVar6 * 0x40);
    do {
      if (*piVar5 == param_3) {
        *(int *)(param_2 + 2) = iVar4;
        return 0;
      }
      iVar4 = iVar4 + -1;
      piVar5 = piVar5 + -0x10;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  *(undefined4 *)(param_2 + 2) = 0xffffffff;
  return 1;
}



// FUNCTION 1438ac3b0 FUN_1438ac3b0 body=19 status=ok
// SIG undefined FUN_1438ac3b0(void)

void FUN_1438ac3b0(longlong param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x30);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1438ac3d0 thunk_FUN_1438ac3b0 body=5 status=ok
// SIG undefined thunk_FUN_1438ac3b0(void)

void thunk_FUN_1438ac3b0(longlong param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x30);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1438ac3e0 FUN_1438ac3e0 body=343 status=ok
// SIG undefined FUN_1438ac3e0(void)

uint * FUN_1438ac3e0(longlong *param_1,uint *param_2,int *param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  iVar2 = param_3[1];
  iVar3 = *param_3;
  uVar10 = iVar2 * -0x61c8864f;
  uVar8 = iVar3 * -0x61c8864f;
  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | iVar2 * -0x4f000000;
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | iVar3 * -0x4f000000;
  uVar8 = uVar10 + uVar8 * 0x40 + (uVar10 >> 2) + 0x9e3779b9 ^ uVar8;
  uVar7 = (ulonglong)(*(uint *)(param_1 + 3) & uVar8);
  puVar9 = (uint *)(param_1[2] + uVar7 * 8);
  if (-1 < *(int *)(param_1[2] + 4 + uVar7 * 8)) {
    do {
      if ((*(int *)(*param_1 + (longlong)(int)puVar9[1] * 0xc) == iVar3) &&
         (*(int *)(*param_1 + 4 + (longlong)(int)puVar9[1] * 0xc) == iVar2)) {
        *param_2 = puVar9[1];
        goto LAB_1438ac506;
      }
      lVar4 = param_1[2];
      uVar7 = ((longlong)puVar9 - lVar4 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar9 = (uint *)(lVar4 + uVar7 * 8);
    } while (-1 < *(int *)(lVar4 + 4 + uVar7 * 8));
  }
  uVar10 = *(uint *)(param_1 + 1);
  *puVar9 = uVar8;
  puVar9[1] = uVar10;
  uVar6 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar6,param_1,0xc);
  }
  lVar5 = param_1[1];
  lVar4 = *param_1;
  *param_2 = uVar10;
  puVar1 = (undefined8 *)(lVar4 + (longlong)(int)lVar5 * 0xc);
  *(int *)(param_1 + 1) = (int)lVar5 + 1;
  *puVar1 = *(undefined8 *)param_3;
  *(undefined4 *)(puVar1 + 1) = *param_4;
LAB_1438ac506:
  param_2[1] = (uint)((longlong)puVar9 - param_1[2] >> 3);
  return param_2;
}



// FUNCTION 1438ac540 FUN_1438ac540 body=352 status=ok
// SIG undefined FUN_1438ac540(void)

uint * FUN_1438ac540(longlong *param_1,uint *param_2,int *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint *puVar7;
  uint uVar8;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  iVar2 = *param_3;
  uVar8 = iVar2 * -0x61c8864f;
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | iVar2 * -0x4f000000;
  uVar6 = (ulonglong)(*(uint *)(param_1 + 3) & uVar8);
  puVar7 = (uint *)(param_1[2] + uVar6 * 8);
  if (-1 < *(int *)(param_1[2] + 4 + uVar6 * 8)) {
    do {
      if (*(int *)(*param_1 + (longlong)(int)puVar7[1] * 0x28) == iVar2) {
        *param_2 = puVar7[1];
        goto LAB_1438ac66f;
      }
      lVar4 = param_1[2];
      uVar6 = ((longlong)puVar7 - lVar4 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar7 = (uint *)(lVar4 + uVar6 * 8);
    } while (-1 < *(int *)(lVar4 + 4 + uVar6 * 8));
  }
  uVar3 = *(uint *)(param_1 + 1);
  *puVar7 = uVar8;
  puVar7[1] = uVar3;
  uVar5 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar5,param_1,0x28);
  }
  lVar4 = *param_1 + (longlong)(int)param_1[1] * 0x28;
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x14) = 0x80000000;
    *(undefined8 *)(lVar4 + 8) = 0;
    *(undefined4 *)(lVar4 + 0x10) = 0;
    FUN_143734b10(lVar4 + 0x18);
  }
  piVar1 = (int *)(*param_1 + (longlong)(int)param_1[1] * 0x28);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  *piVar1 = *param_3;
  FUN_14383dde0(piVar1 + 2,param_4);
  *param_2 = uVar3;
LAB_1438ac66f:
  param_2[1] = (uint)((longlong)puVar7 - param_1[2] >> 3);
  return param_2;
}



// FUNCTION 1438ac6a0 FUN_1438ac6a0 body=340 status=ok
// SIG undefined FUN_1438ac6a0(void)

uint * FUN_1438ac6a0(longlong *param_1,uint *param_2,int *param_3,longlong *param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint uVar7;
  int *piVar8;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  iVar1 = *param_3;
  uVar7 = iVar1 * -0x61c8864f;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar5 = (ulonglong)(*(uint *)(param_1 + 3) & uVar7);
  puVar6 = (uint *)(param_1[2] + uVar5 * 8);
  if (-1 < *(int *)(param_1[2] + 4 + uVar5 * 8)) {
    do {
      if (*(int *)(*param_1 + (longlong)(int)puVar6[1] * 0x10) == iVar1) {
        *param_2 = puVar6[1];
        goto LAB_1438ac7cb;
      }
      lVar4 = param_1[2];
      uVar5 = ((longlong)puVar6 - lVar4 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar6 = (uint *)(lVar4 + uVar5 * 8);
    } while (-1 < *(int *)(lVar4 + 4 + uVar5 * 8));
  }
  uVar2 = *(uint *)(param_1 + 1);
  *puVar6 = uVar7;
  puVar6[1] = uVar2;
  uVar3 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar3,param_1,0x10);
  }
  lVar4 = (longlong)(int)param_1[1] * 0x10 + *param_1;
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 8) = 0;
  }
  piVar8 = (int *)((longlong)(int)param_1[1] * 0x10 + *param_1);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  *piVar8 = *param_3;
  if (*param_4 != 0) {
    FUN_14370c030();
  }
  if (*(longlong *)(piVar8 + 2) != 0) {
    FUN_14370c150();
  }
  *(longlong *)(piVar8 + 2) = *param_4;
  *param_2 = uVar2;
LAB_1438ac7cb:
  param_2[1] = (uint)((longlong)puVar6 - param_1[2] >> 3);
  return param_2;
}



// FUNCTION 1438ac800 FUN_1438ac800 body=478 status=ok
// SIG undefined FUN_1438ac800(void)

uint * FUN_1438ac800(longlong *param_1,uint *param_2,int *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int *piVar7;
  uint *puVar8;
  longlong lVar9;
  uint uVar10;
  
  plVar1 = param_1 + 2;
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(plVar1);
  }
  iVar2 = *param_3;
  uVar10 = iVar2 * -0x61c8864f;
  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | iVar2 * -0x4f000000;
  uVar6 = (ulonglong)(*(uint *)(param_1 + 3) & uVar10);
  puVar8 = (uint *)(*plVar1 + uVar6 * 8);
  if (-1 < *(int *)(*plVar1 + 4 + uVar6 * 8)) {
    do {
      if (*(int *)((longlong)(int)puVar8[1] * 0x68 + *param_1) == iVar2) {
        *param_2 = puVar8[1];
        goto LAB_1438ac9b6;
      }
      lVar9 = *plVar1;
      uVar6 = ((longlong)puVar8 - lVar9 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar8 = (uint *)(lVar9 + uVar6 * 8);
    } while (-1 < *(int *)(lVar9 + 4 + uVar6 * 8));
  }
  uVar3 = *(uint *)(param_1 + 1);
  *puVar8 = uVar10;
  puVar8[1] = uVar3;
  uVar4 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar4,param_1,0x68);
  }
  lVar9 = (longlong)(int)param_1[1] * 0x68 + *param_1;
  if (lVar9 != 0) {
    *(undefined4 *)(lVar9 + 0x14) = 0x80000000;
    *(undefined8 *)(lVar9 + 8) = 0;
    *(undefined4 *)(lVar9 + 0x10) = 0;
    FUN_143734b10(lVar9 + 0x18);
    *(undefined4 *)(lVar9 + 0x34) = 0x80000000;
    *(undefined8 *)(lVar9 + 0x28) = 0;
    *(undefined4 *)(lVar9 + 0x30) = 0;
    FUN_143734b10(lVar9 + 0x38);
    *(undefined4 *)(lVar9 + 0x54) = 0x80000000;
    *(undefined8 *)(lVar9 + 0x48) = 0;
    *(undefined4 *)(lVar9 + 0x50) = 0;
    FUN_143734b10(lVar9 + 0x58);
  }
  piVar7 = (int *)((longlong)(int)param_1[1] * 0x68 + *param_1);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  *piVar7 = *param_3;
  iVar2 = *(int *)(param_4 + 1);
  uVar4 = *param_4;
  uVar5 = FUN_143703a50();
  if ((int)(piVar7[5] & 0x3fffffffU) < iVar2) {
    FUN_14370c310(uVar5,piVar7 + 2,iVar2,4);
  }
  FUN_142f87c00(*(undefined8 *)(piVar7 + 2),uVar4,iVar2);
  piVar7[4] = iVar2;
  FUN_1437347a0(piVar7 + 6,param_4 + 2);
  FUN_143863580(piVar7 + 10,param_4 + 4);
  FUN_14383dde0(piVar7 + 0x12,param_4 + 8);
  *param_2 = uVar3;
LAB_1438ac9b6:
  param_2[1] = (uint)((longlong)puVar8 - *plVar1 >> 3);
  return param_2;
}



// FUNCTION 1438ac9e0 FUN_1438ac9e0 body=195 status=ok
// SIG undefined FUN_1438ac9e0(void)

void FUN_1438ac9e0(longlong param_1,int param_2,int param_3,ulonglong param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  
  uVar5 = (ulonglong)param_2;
  uVar6 = uVar5;
  uVar10 = param_4;
  do {
    uVar4 = (ulonglong)param_3;
    uVar8 = uVar6 & 0xffffffff;
    uVar1 = *(uint *)(param_1 + ((longlong)(param_3 + (int)uVar6) >> 1) * 4);
    iVar9 = param_3;
    do {
      uVar7 = (uint)uVar8;
      uVar2 = *(uint *)(param_1 + uVar5 * 4);
      while (uVar2 < uVar1) {
        uVar5 = uVar5 + 1;
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        uVar2 = *(uint *)(param_1 + uVar5 * 4);
      }
      uVar2 = *(uint *)(param_1 + uVar4 * 4);
      while (uVar1 < uVar2) {
        uVar4 = uVar4 - 1;
        iVar9 = iVar9 + -1;
        uVar2 = *(uint *)(param_1 + uVar4 * 4);
      }
      if ((longlong)uVar4 < (longlong)uVar5) break;
      if (uVar4 != uVar5) {
        uVar3 = *(undefined4 *)(param_1 + uVar4 * 4);
        *(undefined4 *)(param_1 + uVar4 * 4) = *(undefined4 *)(param_1 + uVar5 * 4);
        *(undefined4 *)(param_1 + uVar5 * 4) = uVar3;
      }
      iVar9 = iVar9 + -1;
      uVar4 = uVar4 - 1;
      uVar7 = uVar7 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 <= (longlong)uVar4);
    if ((int)uVar6 < iVar9) {
      FUN_1438ac9e0(param_1,uVar6 & 0xffffffff,iVar9,uVar10);
      uVar10 = param_4 & 0xff;
    }
    if (param_3 <= (int)uVar7) {
      return;
    }
    uVar6 = (ulonglong)uVar7;
  } while( true );
}



// FUNCTION 1438acab0 FUN_1438acab0 body=98 status=ok
// SIG undefined FUN_1438acab0(void)

longlong FUN_1438acab0(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar1 = *param_2;
  lVar2 = param_1[2];
  uVar3 = iVar1 * -0x61c8864f;
  uVar4 = (ulonglong)
          ((uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | iVar1 * -0x4f000000) &
          *(uint *)(param_1 + 3));
  iVar5 = *(int *)(lVar2 + 4 + uVar4 * 8);
  if (-1 < iVar5) {
    do {
      if (*(int *)((longlong)iVar5 * 0x68 + *param_1) == iVar1) {
        return lVar2 + uVar4 * 8;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1U & *(uint *)(param_1 + 3));
      iVar5 = *(int *)(lVar2 + 4 + uVar4 * 8);
    } while (-1 < iVar5);
  }
  return 0;
}



// FUNCTION 1438acb20 FUN_1438acb20 body=312 status=ok
// SIG undefined FUN_1438acb20(void)

void FUN_1438acb20(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar2 = param_2[1];
  uVar4 = (int)param_1[1] - 1;
  if (uVar2 != uVar4) {
    lVar5 = FUN_143880bb0(param_1,*param_1 + (longlong)(int)uVar4 * 0x28);
    *(uint *)(lVar5 + 4) = uVar2;
  }
  FUN_14375d9f0(*param_1 + 8 + (longlong)(int)uVar2 * 0x28);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  if (*(uint *)(param_1 + 1) != uVar2) {
    puVar6 = (undefined8 *)(*param_1 + (longlong)(int)uVar2 * 0x28);
    lVar5 = 5;
    lVar8 = (*param_1 + (longlong)(int)*(uint *)(param_1 + 1) * 0x28) - (longlong)puVar6;
    do {
      *puVar6 = *(undefined8 *)(lVar8 + (longlong)puVar6);
      puVar6 = puVar6 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  lVar5 = param_1[2];
  uVar7 = ((longlong)param_2 - lVar5 >> 3) + 1U & (longlong)(int)param_1[3];
  puVar1 = (uint *)(lVar5 + uVar7 * 8);
  iVar3 = *(int *)(lVar5 + 4 + uVar7 * 8);
  while (-1 < iVar3) {
    lVar5 = param_1[2] + (ulonglong)(*(uint *)(param_1 + 3) & *puVar1) * 8;
    if ((ulonglong)((longlong)param_2 - lVar5 >> 3 & (longlong)(int)param_1[3]) <
        (ulonglong)((longlong)puVar1 - lVar5 >> 3 & (longlong)(int)param_1[3])) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar1;
      param_2 = puVar1;
    }
    lVar5 = param_1[2];
    uVar7 = ((longlong)puVar1 - lVar5 >> 3) + 1U & (longlong)(int)param_1[3];
    puVar1 = (uint *)(lVar5 + uVar7 * 8);
    iVar3 = *(int *)(lVar5 + 4 + uVar7 * 8);
  }
  param_2[1] = 0xffffffff;
  return;
}



// FUNCTION 1438acc60 FUN_1438acc60 body=296 status=ok
// SIG undefined FUN_1438acc60(void)

void FUN_1438acc60(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  uVar2 = param_2[1];
  uVar4 = (int)param_1[1] - 1;
  if (uVar2 != uVar4) {
    lVar5 = FUN_1438acab0(param_1,(longlong)(int)uVar4 * 0x68 + *param_1);
    *(uint *)(lVar5 + 4) = uVar2;
  }
  FUN_14382c2b0(*param_1 + 8 + (longlong)(int)uVar2 * 0x68);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  if (*(uint *)(param_1 + 1) != uVar2) {
    puVar7 = (undefined8 *)(*param_1 + (longlong)(int)uVar2 * 0x68);
    lVar5 = 0xd;
    lVar8 = ((longlong)(int)*(uint *)(param_1 + 1) * 0x68 + *param_1) - (longlong)puVar7;
    do {
      *puVar7 = *(undefined8 *)(lVar8 + (longlong)puVar7);
      puVar7 = puVar7 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  lVar5 = param_1[2];
  uVar6 = ((longlong)param_2 - lVar5 >> 3) + 1U & (longlong)(int)param_1[3];
  puVar1 = (uint *)(lVar5 + uVar6 * 8);
  iVar3 = *(int *)(lVar5 + 4 + uVar6 * 8);
  while (-1 < iVar3) {
    lVar5 = param_1[2] + (ulonglong)(*(uint *)(param_1 + 3) & *puVar1) * 8;
    if ((ulonglong)((longlong)param_2 - lVar5 >> 3 & (longlong)(int)param_1[3]) <
        (ulonglong)((longlong)puVar1 - lVar5 >> 3 & (longlong)(int)param_1[3])) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar1;
      param_2 = puVar1;
    }
    lVar5 = param_1[2];
    uVar6 = ((longlong)puVar1 - lVar5 >> 3) + 1U & (longlong)(int)param_1[3];
    puVar1 = (uint *)(lVar5 + uVar6 * 8);
    iVar3 = *(int *)(lVar5 + 4 + uVar6 * 8);
  }
  param_2[1] = 0xffffffff;
  return;
}



// FUNCTION 1438acd90 FUN_1438acd90 body=423 status=ok
// SIG undefined FUN_1438acd90(void)

void FUN_1438acd90(longlong param_1,uint param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint local_res20 [2];
  uint local_78 [2];
  uint local_70;
  uint local_6c;
  undefined8 local_68;
  undefined4 local_60;
  uint local_5c;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined4 local_40;
  uint local_3c;
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [16];
  
  uVar2 = param_2 >> 0x16;
  local_res20[0] = param_3 >> 0x16;
  local_70 = param_2;
  local_6c = param_3;
  if (uVar2 == local_res20[0]) {
    local_res20[0] = uVar2;
    _guard_xfg_dispatch_icall_nop(&local_68,0,0x60);
    local_5c = 0x80000000;
    local_68 = 0;
    local_60 = 0;
    FUN_143734b10(local_58);
    local_48 = 0;
    local_40 = 0;
    local_3c = 0x80000000;
    FUN_143734b10(local_38);
    local_28 = 0;
    local_20 = 0;
    local_1c = 0x80000000;
    FUN_143734b10(local_18);
    FUN_1438ac800(param_1 + 8,local_78,local_res20,&local_68);
    FUN_14375d9f0(&local_28);
    thunk_FUN_143734820(local_38);
    uVar3 = FUN_143703a50();
    local_40 = 0;
    if (-1 < (int)local_3c) {
      FUN_143702e10(uVar3,local_48,0xc,local_3c & 0x3fffffff);
    }
    local_48 = 0;
    local_3c = 0x80000000;
    thunk_FUN_143734820(local_58);
    uVar3 = FUN_143703a50();
    local_60 = 0;
    if (-1 < (int)local_5c) {
      FUN_143702e10(uVar3,local_68,4,local_5c & 0x3fffffff);
    }
    local_res20[0] = 0;
    lVar4 = (longlong)(int)local_78[0] * 0x68 + *(longlong *)(param_1 + 8);
    FUN_1438ac3e0(lVar4 + 0x28,local_78,&local_70,local_res20);
    lVar4 = *(longlong *)(lVar4 + 0x28);
  }
  else {
    local_78[0] = uVar2;
    lVar4 = FUN_1438ad600(param_1,local_78,local_res20);
    local_res20[0] = 0;
    FUN_1438ac3e0((longlong *)(lVar4 + 0x40),local_78,&local_70,local_res20);
    lVar4 = *(longlong *)(lVar4 + 0x40);
  }
  piVar1 = (int *)(lVar4 + 8 + (longlong)(int)local_78[0] * 0xc);
  *piVar1 = *piVar1 + 1;
  return;
}



// FUNCTION 1438acf40 FUN_1438acf40 body=415 status=ok
// SIG undefined FUN_1438acf40(void)

void FUN_1438acf40(longlong param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  uint local_res20;
  uint local_res24;
  uint local_88 [2];
  undefined8 local_80;
  undefined4 local_78;
  uint local_74;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined4 local_58;
  uint local_54;
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [24];
  
  uVar2 = param_2 >> 0x16;
  local_res20 = param_3 >> 0x16;
  if (uVar2 == local_res20) {
    local_res20 = uVar2;
    _guard_xfg_dispatch_icall_nop(&local_80,0,0x60);
    local_74 = 0x80000000;
    local_80 = 0;
    local_78 = 0;
    FUN_143734b10(local_70);
    local_60 = 0;
    local_58 = 0;
    local_54 = 0x80000000;
    FUN_143734b10(local_50);
    local_40 = 0;
    local_38 = 0;
    local_34 = 0x80000000;
    FUN_143734b10(local_30);
    FUN_1438ac800(param_1 + 8,local_88,&local_res20,&local_80);
    FUN_14375d9f0(&local_40);
    thunk_FUN_143734820(local_50);
    uVar1 = FUN_143703a50();
    local_58 = 0;
    if (-1 < (int)local_54) {
      FUN_143702e10(uVar1,local_60,0xc,local_54 & 0x3fffffff);
    }
    local_60 = 0;
    local_54 = 0x80000000;
    thunk_FUN_143734820(local_70);
    uVar1 = FUN_143703a50();
    local_78 = 0;
    if (-1 < (int)local_74) {
      FUN_143702e10(uVar1,local_80,4,local_74 & 0x3fffffff);
    }
    lVar3 = *(longlong *)(param_1 + 8) + (longlong)(int)local_88[0] * 0x68;
    local_res20 = param_2 & 0x3fffff;
    FUN_143864c20(lVar3 + 8,&local_res20);
    local_res20 = param_3 & 0x3fffff;
    FUN_143864c20(lVar3 + 8,&local_res20);
    return;
  }
  local_88[0] = uVar2;
  lVar3 = FUN_1438ad600(param_1,local_88,&local_res20);
  local_res20 = param_2;
  local_res24 = param_3;
  FUN_1438adbe0(lVar3 + 0x20,&local_res20);
  return;
}



// FUNCTION 1438ad0e0 FUN_1438ad0e0 body=118 status=ok
// SIG undefined FUN_1438ad0e0(void)

void FUN_1438ad0e0(undefined8 param_1,uint param_2,uint param_3)

{
  int *piVar1;
  longlong lVar2;
  uint local_res20 [2];
  uint local_18;
  uint local_14;
  int local_10 [2];
  
  local_res20[0] = param_3 >> 0x16;
  local_18 = param_2 >> 0x16;
  lVar2 = FUN_1438ad420(param_1,&local_18,local_res20);
  local_res20[0] = 0;
  local_18 = param_2;
  local_14 = param_3;
  FUN_1438ac3e0((longlong *)(lVar2 + 0x40),local_10,&local_18,local_res20);
  piVar1 = (int *)(*(longlong *)(lVar2 + 0x40) + 8 + (longlong)local_10[0] * 0xc);
  *piVar1 = *piVar1 + 1;
  return;
}



// FUNCTION 1438ad160 FUN_1438ad160 body=176 status=ok
// SIG undefined FUN_1438ad160(void)

void FUN_1438ad160(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = (int)param_1[1];
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    uVar1 = *(undefined4 *)(*param_1 + 8 + (longlong)iVar4 * 0xc);
    uVar2 = *(undefined8 *)(*param_1 + (longlong)iVar4 * 0xc);
    if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
      FUN_14370c460(&PTR_vftable_1467f0638,param_2,0xc);
    }
    lVar5 = param_2[1];
    lVar3 = *param_2;
    *(undefined8 *)(lVar3 + (longlong)(int)lVar5 * 0xc) = uVar2;
    *(undefined4 *)(lVar3 + 8 + (longlong)(int)lVar5 * 0xc) = uVar1;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
  }
  return;
}



// FUNCTION 1438ad210 FUN_1438ad210 body=224 status=ok
// SIG undefined FUN_1438ad210(void)

void FUN_1438ad210(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  
  iVar1 = *(int *)(param_1 + 0x10);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar5 = (int *)((longlong)iVar1 * 0x68 + *(longlong *)(param_1 + 8));
    iVar2 = *piVar5;
    FUN_1438ad160(piVar5 + 10,param_2);
    iVar3 = piVar5[0x14];
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      lVar4 = *(longlong *)(*(longlong *)(piVar5 + 0x12) + 8 + (longlong)iVar3 * 0x10);
      if (*(int *)(lVar4 + 0x18) == iVar2) {
        FUN_1438ad160(lVar4 + 0x40,param_2);
      }
    }
  }
  return;
}



// FUNCTION 1438ad2f0 FUN_1438ad2f0 body=135 status=ok
// SIG undefined FUN_1438ad2f0(void)

void FUN_1438ad2f0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = FUN_143880bb0();
  if ((lVar3 != 0) && (iVar1 = *(int *)(lVar3 + 4), -1 < iVar1)) {
    lVar3 = *param_1;
    iVar2 = *(int *)(lVar3 + 0x10 + (longlong)iVar1 * 0x28);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      FUN_1438ad160(*(longlong *)
                     (*(longlong *)(lVar3 + (longlong)iVar1 * 0x28 + 8) + 8 + (longlong)iVar2 * 0x10
                     ) + 0x40,param_3);
    }
  }
  return;
}



// FUNCTION 1438ad380 FUN_1438ad380 body=148 status=ok
// SIG undefined FUN_1438ad380(void)

void FUN_1438ad380(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_1438acab0((longlong *)(param_1 + 8));
  if ((lVar2 != 0) && (-1 < *(int *)(lVar2 + 4))) {
    lVar2 = (longlong)*(int *)(lVar2 + 4) * 0x68 + *(longlong *)(param_1 + 8);
    FUN_1438ad160(lVar2 + 0x28,param_3);
    iVar1 = *(int *)(lVar2 + 0x50);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      FUN_1438ad160(*(longlong *)(*(longlong *)(lVar2 + 0x48) + 8 + (longlong)iVar1 * 0x10) + 0x40,
                    param_3);
    }
  }
  return;
}



// FUNCTION 1438ad420 FUN_1438ad420 body=467 status=ok
// SIG undefined FUN_1438ad420(void)

undefined8 FUN_1438ad420(longlong *param_1,int *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  LPVOID pvVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  undefined8 local_res8;
  int local_res10 [2];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  iVar7 = *param_3;
  iVar1 = *param_2;
  iVar6 = iVar1;
  if (iVar1 < iVar7) {
    iVar6 = iVar7;
    iVar7 = iVar1;
  }
  local_50 = 0x8000000000000000;
  local_48 = 0;
  local_40 = 0;
  local_58 = 0;
  FUN_143734b10(&local_48);
  FUN_1438ac540(param_1,&local_res8,param_2,&local_58);
  FUN_14375d9f0(&local_58);
  lVar3 = (longlong)(int)local_res8;
  local_res8 = 0;
  lVar3 = *param_1 + lVar3 * 0x28;
  FUN_1438ac6a0(lVar3 + 8,local_res10,param_3,&local_res8);
  lVar3 = (longlong)local_res10[0] * 0x10 + *(longlong *)(lVar3 + 8);
  if (*(longlong *)(lVar3 + 8) == 0) {
    pvVar4 = TlsGetValue(DAT_146b7bf70);
    if (pvVar4 == (LPVOID)0x0) {
      pvVar4 = DAT_146b7bf68;
    }
    puVar5 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar4 + 0x58),0x60);
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      puVar5[1] = 0;
      *(undefined4 *)(puVar5 + 2) = 0x1ffff;
      *puVar5 = hkaiDynamicUserEdgeSetInfo::ExternalEdges::vftable;
      puVar5[4] = 0;
      *(undefined4 *)(puVar5 + 5) = 0;
      *(undefined4 *)((longlong)puVar5 + 0x2c) = 0x80000000;
      FUN_143734b10(puVar5 + 6);
      puVar5[8] = 0;
      *(undefined4 *)(puVar5 + 9) = 0;
      *(undefined4 *)((longlong)puVar5 + 0x4c) = 0x80000000;
      FUN_143734b10(puVar5 + 10);
    }
    if (puVar5 != *(undefined8 **)(lVar3 + 8)) {
      if (*(undefined8 **)(lVar3 + 8) != (undefined8 *)0x0) {
        FUN_14370c150();
      }
      *(undefined8 **)(lVar3 + 8) = puVar5;
    }
    lVar2 = *(longlong *)(lVar3 + 8);
    *(int *)(lVar2 + 0x18) = iVar7;
    *(int *)(lVar2 + 0x1c) = iVar6;
    local_50 = 0x8000000000000000;
    local_48 = 0;
    local_40 = 0;
    local_58 = 0;
    FUN_143734b10(&local_48);
    FUN_1438ac540(param_1,&local_res8,param_3,&local_58);
    FUN_14375d9f0(&local_58);
    FUN_14383fcf0(*param_1 + (longlong)(int)local_res8 * 0x28 + 8,param_2,lVar3 + 8);
  }
  return *(undefined8 *)(lVar3 + 8);
}



// FUNCTION 1438ad600 FUN_1438ad600 body=790 status=ok
// SIG undefined FUN_1438ad600(void)

undefined8 FUN_1438ad600(longlong param_1,int *param_2,int *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  LPVOID pvVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  undefined8 local_res8;
  int local_res10 [2];
  undefined8 local_98;
  undefined4 local_90;
  uint local_8c;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined4 local_70;
  uint local_6c;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [16];
  
  iVar9 = *param_3;
  iVar2 = *param_2;
  iVar8 = iVar2;
  if (iVar2 < iVar9) {
    iVar8 = iVar9;
    iVar9 = iVar2;
  }
  _guard_xfg_dispatch_icall_nop(&local_98,0,0x60);
  local_8c = 0x80000000;
  local_98 = 0;
  local_90 = 0;
  FUN_143734b10(local_88);
  local_78 = 0;
  local_70 = 0;
  local_6c = 0x80000000;
  FUN_143734b10(local_68);
  local_58 = 0;
  local_50 = 0;
  local_4c = 0x80000000;
  FUN_143734b10(local_48);
  plVar1 = (longlong *)(param_1 + 8);
  FUN_1438ac800(plVar1,&local_res8,param_2,&local_98);
  FUN_14375d9f0(&local_58);
  thunk_FUN_143734820(local_68);
  uVar4 = FUN_143703a50();
  local_70 = 0;
  if (-1 < (int)local_6c) {
    FUN_143702e10(uVar4,local_78,0xc,local_6c & 0x3fffffff);
  }
  local_78 = 0;
  local_6c = 0x80000000;
  thunk_FUN_143734820(local_88);
  uVar4 = FUN_143703a50();
  local_90 = 0;
  if (-1 < (int)local_8c) {
    FUN_143702e10(uVar4,local_98,4,local_8c & 0x3fffffff);
  }
  lVar5 = (longlong)(int)local_res8;
  local_res8 = 0;
  lVar5 = lVar5 * 0x68 + *plVar1;
  FUN_1438ac6a0(lVar5 + 0x48,local_res10,param_3,&local_res8);
  lVar5 = (longlong)local_res10[0] * 0x10 + *(longlong *)(lVar5 + 0x48);
  if (*(longlong *)(lVar5 + 8) == 0) {
    pvVar6 = TlsGetValue(DAT_146b7bf70);
    if (pvVar6 == (LPVOID)0x0) {
      pvVar6 = DAT_146b7bf68;
    }
    puVar7 = (undefined8 *)(**(code **)(**(longlong **)((longlong)pvVar6 + 0x58) + 8))();
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar7[1] = 0;
      *(undefined4 *)(puVar7 + 2) = 0x1ffff;
      *puVar7 = hkaiDynamicUserEdgeSetInfo::ExternalEdges::vftable;
      puVar7[4] = 0;
      *(undefined4 *)(puVar7 + 5) = 0;
      *(undefined4 *)((longlong)puVar7 + 0x2c) = 0x80000000;
      FUN_143734b10(puVar7 + 6);
      puVar7[8] = 0;
      *(undefined4 *)(puVar7 + 9) = 0;
      *(undefined4 *)((longlong)puVar7 + 0x4c) = 0x80000000;
      FUN_143734b10(puVar7 + 10);
    }
    if (puVar7 != *(undefined8 **)(lVar5 + 8)) {
      if (*(undefined8 **)(lVar5 + 8) != (undefined8 *)0x0) {
        FUN_14370c150();
      }
      *(undefined8 **)(lVar5 + 8) = puVar7;
    }
    lVar3 = *(longlong *)(lVar5 + 8);
    *(int *)(lVar3 + 0x18) = iVar9;
    *(int *)(lVar3 + 0x1c) = iVar8;
    _guard_xfg_dispatch_icall_nop(&local_98,0,0x60);
    local_8c = 0x80000000;
    local_98 = 0;
    local_90 = 0;
    FUN_143734b10(local_88);
    local_78 = 0;
    local_70 = 0;
    local_6c = 0x80000000;
    FUN_143734b10(local_68);
    local_58 = 0;
    local_50 = 0;
    local_4c = 0x80000000;
    FUN_143734b10(local_48);
    FUN_1438ac800(plVar1,&local_res8,param_3,&local_98);
    FUN_14375d9f0(&local_58);
    thunk_FUN_143734820(local_68);
    uVar4 = FUN_143703a50();
    local_70 = 0;
    if (-1 < (int)local_6c) {
      FUN_143702e10(uVar4,local_78,0xc,local_6c & 0x3fffffff);
    }
    local_78 = 0;
    local_6c = 0x80000000;
    thunk_FUN_143734820(local_88);
    uVar4 = FUN_143703a50();
    local_90 = 0;
    if (-1 < (int)local_8c) {
      FUN_143702e10(uVar4,local_98,4,local_8c & 0x3fffffff);
    }
    FUN_14383fcf0(*plVar1 + (longlong)(int)local_res8 * 0x68 + 0x48,param_2,lVar5 + 8);
  }
  return *(undefined8 *)(lVar5 + 8);
}



// FUNCTION 1438ad920 FUN_1438ad920 body=693 status=ok
// SIG undefined FUN_1438ad920(void)

void FUN_1438ad920(ulonglong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int *piVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  int *piVar11;
  
  iVar2 = *(int *)(param_1 + 0x10);
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    piVar11 = (int *)((longlong)iVar2 * 0x68 + *(longlong *)(param_1 + 8));
    iVar10 = piVar11[4] + -1;
    iVar3 = *piVar11;
    if (-1 < iVar10) {
      do {
        uVar5 = *(uint *)(*(longlong *)(piVar11 + 2) + (longlong)iVar10 * 4);
        if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
          FUN_14370c460(&PTR_vftable_1467f0638,param_2,4);
        }
        *(uint *)(*param_2 + (longlong)(int)param_2[1] * 4) = iVar3 << 0x16 | uVar5;
        iVar10 = iVar10 + -1;
        *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      } while (-1 < iVar10);
    }
    iVar10 = piVar11[0x14];
    while (iVar10 = iVar10 + -1, -1 < iVar10) {
      lVar6 = *(longlong *)(*(longlong *)(piVar11 + 0x12) + 8 + (longlong)iVar10 * 0x10);
      if (*(int *)(lVar6 + 0x18) == iVar3) {
        iVar4 = *(int *)(lVar6 + 0x28);
        while (iVar4 = iVar4 + -1, -1 < iVar4) {
          puVar1 = (undefined4 *)(*(longlong *)(lVar6 + 0x20) + (longlong)iVar4 * 8);
          if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
            FUN_14370c460(&PTR_vftable_1467f0638,param_2,4);
          }
          *(undefined4 *)(*param_2 + (longlong)(int)param_2[1] * 4) = *puVar1;
          *(int *)(param_2 + 1) = (int)param_2[1] + 1;
          if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
            FUN_14370c460(&PTR_vftable_1467f0638,param_2,4);
          }
          *(undefined4 *)(*param_2 + (longlong)(int)param_2[1] * 4) = puVar1[1];
          *(int *)(param_2 + 1) = (int)param_2[1] + 1;
        }
      }
    }
  }
  if (1 < (int)param_2[1]) {
    FUN_1438ac9e0(*param_2,0,(int)param_2[1] + -1,param_1 & 0xff);
  }
  iVar2 = (int)param_2[1];
  uVar8 = 0;
  iVar10 = 0;
  piVar11 = (int *)*param_2;
  if (iVar2 != 0) {
    if (1 < (longlong)iVar2) {
      lVar6 = 1;
      piVar7 = piVar11;
      uVar9 = uVar8;
      do {
        if (*piVar7 != piVar11[lVar6]) {
          uVar9 = (ulonglong)((int)uVar9 + 1);
          uVar8 = uVar8 + 1;
          piVar7 = piVar11 + uVar8;
          *piVar7 = piVar11[lVar6];
        }
        iVar10 = (int)uVar9;
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar2);
    }
    iVar10 = iVar10 + 1;
  }
  uVar5 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
  if ((int)uVar5 < iVar10) {
    iVar3 = uVar5 * 2;
    iVar2 = iVar10;
    if (iVar10 < iVar3) {
      iVar2 = iVar3;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,param_2,iVar2,4);
  }
  *(int *)(param_2 + 1) = iVar10;
  return;
}



// FUNCTION 1438adbe0 FUN_1438adbe0 body=278 status=ok
// SIG undefined FUN_1438adbe0(void)

ulonglong FUN_1438adbe0(longlong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  iVar1 = param_2[1];
  iVar2 = *param_2;
  uVar8 = iVar1 * -0x61c8864f;
  uVar7 = iVar2 * -0x61c8864f;
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar2 * -0x4f000000;
  uVar7 = uVar7 * 0x40 + uVar8 + (uVar8 >> 2) + 0x9e3779b9 ^ uVar7;
  uVar6 = (ulonglong)(*(uint *)(param_1 + 3) & uVar7);
  puVar4 = (uint *)(param_1[2] + uVar6 * 8);
  if (-1 < *(int *)(param_1[2] + 4 + uVar6 * 8)) {
    do {
      if ((*(int *)(*param_1 + (longlong)(int)puVar4[1] * 8) == iVar2) &&
         (*(int *)(*param_1 + 4 + (longlong)(int)puVar4[1] * 8) == iVar1)) {
        return (ulonglong)puVar4 & 0xffffffffffffff00;
      }
      lVar3 = param_1[2];
      uVar6 = ((longlong)puVar4 - lVar3 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar4 = (uint *)(lVar3 + uVar6 * 8);
    } while (-1 < *(int *)(lVar3 + 4 + uVar6 * 8));
  }
  uVar8 = *(uint *)(param_1 + 1);
  *puVar4 = uVar7;
  puVar4[1] = uVar8;
  uVar5 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar5,param_1,8);
  }
  uVar5 = *(undefined8 *)param_2;
  *(undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 8) = uVar5;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
}



// FUNCTION 1438add00 FUN_1438add00 body=285 status=ok
// SIG undefined FUN_1438add00(void)

void FUN_1438add00(longlong *param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined8 local_res8;
  
  lVar4 = FUN_143880bb0();
  if ((lVar4 != 0) && (iVar1 = *(int *)(lVar4 + 4), -1 < iVar1)) {
    lVar4 = *param_1;
    iVar7 = *(int *)(lVar4 + 0x10 + (longlong)iVar1 * 0x28) + -1;
    while (-1 < iVar7) {
      lVar5 = *(longlong *)
               (*(longlong *)(lVar4 + (longlong)iVar1 * 0x28 + 8) + 8 + (longlong)iVar7 * 0x10);
      lVar6 = 0x1c;
      if (*(int *)(lVar5 + 0x18) != *param_2) {
        lVar6 = 0x18;
      }
      uVar2 = (ulonglong)local_res8 >> 0x20;
      local_res8 = CONCAT44((int)uVar2,*(undefined4 *)(lVar6 + lVar5));
      lVar5 = FUN_143880bb0(param_1,&local_res8);
      if (lVar5 == 0) {
        iVar3 = -1;
      }
      else {
        iVar3 = *(int *)(lVar5 + 4);
      }
      lVar5 = *param_1 + (longlong)iVar3 * 0x28;
      lVar6 = FUN_14383df70(lVar5 + 8,param_2);
      if (lVar6 != 0) {
        FUN_14383e100(lVar5 + 8,lVar6);
      }
      iVar7 = iVar7 + -1;
      local_res8 = CONCAT44(0xffffffff,iVar7);
    }
    lVar4 = FUN_143880bb0(param_1,param_2);
    if (lVar4 != 0) {
      FUN_1438acb20(param_1,lVar4);
    }
  }
  return;
}



// FUNCTION 1438ade20 FUN_1438ade20 body=278 status=ok
// SIG undefined FUN_1438ade20(void)

void FUN_1438ade20(longlong param_1,int *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined8 local_res8;
  
  plVar1 = (longlong *)(param_1 + 8);
  lVar4 = FUN_1438acab0(plVar1);
  if ((lVar4 != 0) && (-1 < *(int *)(lVar4 + 4))) {
    lVar4 = (longlong)*(int *)(lVar4 + 4) * 0x68 + *plVar1;
    iVar7 = *(int *)(lVar4 + 0x50) + -1;
    while (-1 < iVar7) {
      lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x48) + 8 + (longlong)iVar7 * 0x10);
      lVar6 = 0x1c;
      if (*(int *)(lVar5 + 0x18) != *param_2) {
        lVar6 = 0x18;
      }
      uVar2 = (ulonglong)local_res8 >> 0x20;
      local_res8 = CONCAT44((int)uVar2,*(undefined4 *)(lVar6 + lVar5));
      lVar5 = FUN_1438acab0(plVar1,&local_res8);
      if (lVar5 == 0) {
        iVar3 = -1;
      }
      else {
        iVar3 = *(int *)(lVar5 + 4);
      }
      lVar6 = (longlong)iVar3 * 0x68 + *plVar1;
      lVar5 = FUN_14383df70(lVar6 + 0x48,param_2);
      if (lVar5 != 0) {
        FUN_14383e100(lVar6 + 0x48,lVar5);
      }
      iVar7 = iVar7 + -1;
      local_res8 = CONCAT44(0xffffffff,iVar7);
    }
    lVar4 = FUN_1438acab0(plVar1,param_2);
    if (lVar4 != 0) {
      FUN_1438acc60(plVar1,lVar4);
    }
  }
  return;
}



// FUNCTION 1438adf40 FUN_1438adf40 body=206 status=ok
// SIG undefined FUN_1438adf40(void)

void FUN_1438adf40(longlong param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  float *pfVar3;
  undefined4 *puVar4;
  longlong lVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 in_XMM2 [16];
  undefined1 auVar14 [16];
  float fVar15;
  
  puVar4 = *(undefined4 **)(param_1 + 0x18);
  iVar10 = 1;
  *puVar4 = *puVar4;
  puVar4[1] = puVar4[1];
  puVar4[2] = puVar4[2];
  puVar4[3] = 0;
  if (1 < *(int *)(param_1 + 0x20)) {
    lVar9 = 0x30;
    do {
      lVar5 = *(longlong *)(param_1 + 0x18);
      iVar10 = iVar10 + 1;
      pfVar3 = (float *)(lVar9 + -0x30 + lVar5);
      pfVar1 = (float *)(lVar9 + lVar5);
      puVar4 = (undefined4 *)(lVar9 + lVar5);
      uVar7 = puVar4[1];
      uVar8 = puVar4[2];
      fVar6 = *(float *)(lVar9 + lVar5 + -0x24);
      fVar11 = (*pfVar3 - *pfVar1) * (*pfVar3 - *pfVar1);
      fVar12 = (pfVar3[1] - pfVar1[1]) * (pfVar3[1] - pfVar1[1]);
      fVar13 = (pfVar3[2] - pfVar1[2]) * (pfVar3[2] - pfVar1[2]);
      fVar15 = fVar12 + fVar11 + fVar13;
      auVar14._4_4_ = fVar12 + fVar11 + fVar13;
      auVar14._0_4_ = fVar12 + fVar11 + fVar13;
      auVar14._8_4_ = fVar12 + fVar11 + fVar13;
      auVar14._12_4_ = fVar15;
      auVar14 = rsqrtps(in_XMM2,auVar14);
      fVar11 = auVar14._12_4_;
      in_XMM2._0_4_ = auVar14._0_4_ * 0.5;
      in_XMM2._4_4_ = auVar14._4_4_ * 0.5;
      in_XMM2._8_4_ = auVar14._8_4_ * 0.5;
      in_XMM2._12_4_ = fVar11 * 0.5;
      puVar2 = (undefined4 *)(lVar9 + lVar5);
      *puVar2 = *puVar4;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = (float)(~-(uint)(fVar15 <= 0.0) &
                         (uint)((3.0 - fVar15 * fVar11 * fVar11) * in_XMM2._12_4_ * fVar15)) + fVar6
      ;
      lVar9 = lVar9 + 0x30;
    } while (iVar10 < *(int *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 1438ae010 FUN_1438ae010 body=415 status=ok
// SIG undefined FUN_1438ae010(void)

void FUN_1438ae010(longlong param_1,longlong param_2,longlong *param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
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
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  uint uVar26;
  float *pfVar27;
  undefined8 *puVar28;
  longlong lVar29;
  longlong lVar30;
  
  iVar2 = *(int *)(param_2 + 0x20);
  lVar29 = (longlong)param_4;
  if (param_4 < iVar2) {
    param_4 = iVar2 - param_4;
    uVar26 = *(uint *)((longlong)param_3 + 0xc) & 0x3fffffff;
    if ((int)uVar26 < param_4) {
      iVar5 = uVar26 * 2;
      if (param_4 < iVar5) {
        param_4 = iVar5;
      }
      FUN_14370c310(&PTR_vftable_1467f0638,param_3,param_4,0x30);
    }
    if (lVar29 < iVar2) {
      lVar30 = lVar29 * 0x30;
      lVar29 = iVar2 - lVar29;
      do {
        lVar3 = *(longlong *)(param_2 + 0x18);
        iVar2 = *(int *)(lVar30 + 0x24 + lVar3);
        if (iVar2 == -1) {
          puVar28 = (undefined8 *)((longlong)(int)param_3[1] * 0x30 + *param_3);
          if (puVar28 != (undefined8 *)0x0) {
            uVar25 = ((undefined8 *)(lVar30 + lVar3))[1];
            *puVar28 = *(undefined8 *)(lVar30 + lVar3);
            puVar28[1] = uVar25;
            puVar1 = (undefined8 *)(lVar30 + 0x10 + lVar3);
            uVar25 = puVar1[1];
            puVar28[2] = *puVar1;
            puVar28[3] = uVar25;
            *(undefined4 *)(puVar28 + 4) = *(undefined4 *)(lVar30 + 0x20 + lVar3);
            *(undefined4 *)((longlong)puVar28 + 0x24) = *(undefined4 *)(lVar30 + 0x24 + lVar3);
            *(undefined1 *)(puVar28 + 5) = *(undefined1 *)(lVar30 + 0x28 + lVar3);
          }
          *(int *)(param_3 + 1) = (int)param_3[1] + 1;
        }
        else {
          pfVar27 = (float *)(lVar30 + lVar3);
          fVar6 = *pfVar27;
          fVar7 = pfVar27[1];
          fVar8 = pfVar27[2];
          if ((iVar2 < *(int *)(param_1 + 0x40)) &&
             (lVar4 = *(longlong *)((longlong)iVar2 * 0x100 + *(longlong *)(param_1 + 0x38)),
             lVar4 != 0)) {
            pfVar27 = (float *)(lVar4 + 0x40);
          }
          else {
            pfVar27 = (float *)&DAT_1467f0890;
          }
          fVar9 = pfVar27[4];
          fVar10 = pfVar27[5];
          fVar11 = pfVar27[6];
          fVar12 = pfVar27[7];
          fVar13 = *pfVar27;
          fVar14 = pfVar27[1];
          fVar15 = pfVar27[2];
          fVar16 = pfVar27[3];
          fVar17 = pfVar27[8];
          fVar18 = pfVar27[9];
          fVar19 = pfVar27[10];
          fVar20 = pfVar27[0xb];
          fVar21 = pfVar27[0xc];
          fVar22 = pfVar27[0xd];
          fVar23 = pfVar27[0xe];
          fVar24 = pfVar27[0xf];
          puVar28 = (undefined8 *)((longlong)(int)param_3[1] * 0x30 + *param_3);
          if (puVar28 != (undefined8 *)0x0) {
            uVar25 = ((undefined8 *)(lVar30 + lVar3))[1];
            *puVar28 = *(undefined8 *)(lVar30 + lVar3);
            puVar28[1] = uVar25;
            puVar1 = (undefined8 *)(lVar30 + 0x10 + lVar3);
            uVar25 = puVar1[1];
            puVar28[2] = *puVar1;
            puVar28[3] = uVar25;
            *(undefined4 *)(puVar28 + 4) = *(undefined4 *)(lVar30 + 0x20 + lVar3);
            *(undefined4 *)((longlong)puVar28 + 0x24) = *(undefined4 *)(lVar30 + 0x24 + lVar3);
            *(undefined1 *)(puVar28 + 5) = *(undefined1 *)(lVar30 + 0x28 + lVar3);
          }
          *(int *)(param_3 + 1) = (int)param_3[1] + 1;
          pfVar27 = (float *)(*param_3 + (longlong)((int)param_3[1] + -1) * 0x30);
          *pfVar27 = fVar7 * fVar9 + fVar6 * fVar13 + fVar8 * fVar17 + fVar21;
          pfVar27[1] = fVar7 * fVar10 + fVar6 * fVar14 + fVar8 * fVar18 + fVar22;
          pfVar27[2] = fVar7 * fVar11 + fVar6 * fVar15 + fVar8 * fVar19 + fVar23;
          pfVar27[3] = fVar7 * fVar12 + fVar6 * fVar16 + fVar8 * fVar20 + fVar24;
        }
        lVar30 = lVar30 + 0x30;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
    }
  }
  return;
}



// FUNCTION 1438ae1b0 FUN_1438ae1b0 body=604 status=ok
// SIG undefined FUN_1438ae1b0(void)

void FUN_1438ae1b0(longlong param_1,int *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  float fVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  float *pfVar17;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [64];
  
  iVar2 = *(int *)(param_3 + 0x20);
  plVar1 = (longlong *)(param_4 + 0x18);
  lVar14 = *(longlong *)(param_3 + 0x18);
  uVar11 = FUN_143703a50();
  if ((int)(*(uint *)(param_4 + 0x24) & 0x3fffffff) < iVar2) {
    FUN_14370c310(uVar11,plVar1,iVar2,0x30);
  }
  iVar15 = iVar2;
  if (*(int *)(param_4 + 0x20) < iVar2) {
    iVar15 = *(int *)(param_4 + 0x20);
  }
  FUN_143866a40(*plVar1,lVar14,iVar15);
  lVar16 = (longlong)(iVar2 - iVar15);
  if (0 < iVar2 - iVar15) {
    puVar12 = (undefined4 *)(lVar14 + 0x20 + (longlong)iVar15 * 0x30);
    lVar14 = *plVar1 - lVar14;
    do {
      puVar13 = (undefined8 *)(lVar14 + -0x20 + (longlong)puVar12);
      if (puVar13 != (undefined8 *)0x0) {
        uVar11 = *(undefined8 *)(puVar12 + -6);
        *puVar13 = *(undefined8 *)(puVar12 + -8);
        puVar13[1] = uVar11;
        uVar11 = *(undefined8 *)(puVar12 + -2);
        puVar13 = (undefined8 *)((longlong)puVar12 + lVar14 + -0x10);
        *puVar13 = *(undefined8 *)(puVar12 + -4);
        puVar13[1] = uVar11;
        *(undefined4 *)((longlong)puVar12 + lVar14) = *puVar12;
        *(undefined4 *)((longlong)puVar12 + lVar14 + 4) = puVar12[1];
        *(undefined1 *)((longlong)puVar12 + lVar14 + 8) = *(undefined1 *)(puVar12 + 2);
      }
      puVar12 = puVar12 + 0xc;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  *(int *)(param_4 + 0x20) = iVar2;
  *(undefined1 *)(param_4 + 0x28) = 2;
  iVar2 = *param_2;
  if (((iVar2 == -1) || (*(int *)(param_1 + 0x40) <= iVar2)) ||
     (lVar14 = *(longlong *)((longlong)iVar2 * 0x100 + *(longlong *)(param_1 + 0x38)), lVar14 == 0))
  {
    puVar13 = (undefined8 *)&DAT_1467f0890;
  }
  else {
    puVar13 = (undefined8 *)(lVar14 + 0x40);
  }
  local_e8 = *puVar13;
  uStack_e0 = puVar13[1];
  local_d8 = puVar13[2];
  uStack_d0 = puVar13[3];
  local_c8 = *(undefined4 *)(puVar13 + 4);
  uStack_c4 = *(undefined4 *)((longlong)puVar13 + 0x24);
  uStack_c0 = *(undefined4 *)(puVar13 + 5);
  uStack_bc = *(undefined4 *)((longlong)puVar13 + 0x2c);
  local_b8 = *(undefined4 *)(puVar13 + 6);
  uStack_b4 = *(undefined4 *)((longlong)puVar13 + 0x34);
  uStack_b0 = *(undefined4 *)(puVar13 + 7);
  uStack_ac = *(undefined4 *)((longlong)puVar13 + 0x3c);
  FUN_14375f650(local_68,&local_e8);
  lVar14 = (longlong)*(int *)(param_4 + 0x20);
  fVar10 = -NAN;
  if (0 < lVar14) {
    lVar16 = 0;
    do {
      pfVar17 = (float *)(*plVar1 + lVar16);
      fVar3 = pfVar17[9];
      if (fVar3 != fVar10) {
        if (((fVar3 == -NAN) || (*(int *)(param_1 + 0x40) <= (int)fVar3)) ||
           (lVar4 = *(longlong *)((longlong)(int)fVar3 * 0x100 + *(longlong *)(param_1 + 0x38)),
           lVar4 == 0)) {
          puVar13 = (undefined8 *)&DAT_1467f0890;
        }
        else {
          puVar13 = (undefined8 *)(lVar4 + 0x40);
        }
        local_a8 = *puVar13;
        uStack_a0 = puVar13[1];
        local_98 = puVar13[2];
        uStack_90 = puVar13[3];
        local_88 = *(undefined4 *)(puVar13 + 4);
        uStack_84 = *(undefined4 *)((longlong)puVar13 + 0x24);
        uStack_80 = *(undefined4 *)(puVar13 + 5);
        uStack_7c = *(undefined4 *)((longlong)puVar13 + 0x2c);
        local_78 = *(undefined4 *)(puVar13 + 6);
        uStack_74 = *(undefined4 *)((longlong)puVar13 + 0x34);
        uStack_70 = *(undefined4 *)(puVar13 + 7);
        uStack_6c = *(undefined4 *)((longlong)puVar13 + 0x3c);
        FUN_14375f6c0(&local_128,local_68,&local_a8);
        fVar10 = fVar3;
      }
      fVar3 = *pfVar17;
      fVar5 = pfVar17[1];
      fVar6 = pfVar17[2];
      lVar16 = lVar16 + 0x30;
      fVar7 = pfVar17[4];
      fVar8 = pfVar17[5];
      fVar9 = pfVar17[6];
      *pfVar17 = fVar3 * local_128 + fVar5 * local_118 + fVar6 * local_108 + local_f8;
      pfVar17[1] = fVar3 * fStack_124 + fVar5 * fStack_114 + fVar6 * fStack_104 + fStack_f4;
      pfVar17[2] = fVar3 * fStack_120 + fVar5 * fStack_110 + fVar6 * fStack_100 + fStack_f0;
      pfVar17[3] = fVar3 * fStack_11c + fVar5 * fStack_10c + fVar6 * fStack_fc + fStack_ec;
      pfVar17[4] = fVar7 * local_128 + fVar8 * local_118 + fVar9 * local_108;
      pfVar17[5] = fVar7 * fStack_124 + fVar8 * fStack_114 + fVar9 * fStack_104;
      pfVar17[6] = fVar7 * fStack_120 + fVar8 * fStack_110 + fVar9 * fStack_100;
      pfVar17[7] = fVar7 * fStack_11c + fVar8 * fStack_10c + fVar9 * fStack_fc;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return;
}



// FUNCTION 1438ae410 FUN_1438ae410 body=417 status=ok
// SIG undefined FUN_1438ae410(void)

void FUN_1438ae410(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  float fVar2;
  longlong lVar3;
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
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined4 *puVar22;
  float *pfVar23;
  undefined8 *puVar24;
  longlong lVar25;
  float *pfVar26;
  int iVar27;
  longlong lVar28;
  
  iVar1 = *(int *)(param_2 + 0x20);
  lVar25 = *(longlong *)(param_2 + 0x18);
  uVar21 = FUN_143703a50();
  if ((int)(*(uint *)(param_3 + 0x24) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar21,param_3 + 0x18,iVar1,0x30);
  }
  iVar27 = iVar1;
  if (*(int *)(param_3 + 0x20) < iVar1) {
    iVar27 = *(int *)(param_3 + 0x20);
  }
  FUN_143866a40(*(undefined8 *)(param_3 + 0x18),lVar25,iVar27);
  lVar28 = (longlong)(iVar1 - iVar27);
  if (0 < iVar1 - iVar27) {
    puVar22 = (undefined4 *)(lVar25 + 0x20 + (longlong)iVar27 * 0x30);
    lVar25 = *(longlong *)(param_3 + 0x18) - lVar25;
    do {
      puVar24 = (undefined8 *)(lVar25 + -0x20 + (longlong)puVar22);
      if (puVar24 != (undefined8 *)0x0) {
        uVar21 = *(undefined8 *)(puVar22 + -6);
        *puVar24 = *(undefined8 *)(puVar22 + -8);
        puVar24[1] = uVar21;
        uVar21 = *(undefined8 *)(puVar22 + -2);
        puVar24 = (undefined8 *)(lVar25 + -0x10 + (longlong)puVar22);
        *puVar24 = *(undefined8 *)(puVar22 + -4);
        puVar24[1] = uVar21;
        *(undefined4 *)(lVar25 + (longlong)puVar22) = *puVar22;
        *(undefined4 *)(lVar25 + 4 + (longlong)puVar22) = puVar22[1];
        *(undefined1 *)(lVar25 + 8 + (longlong)puVar22) = *(undefined1 *)(puVar22 + 2);
      }
      puVar22 = puVar22 + 0xc;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
  }
  *(int *)(param_3 + 0x20) = iVar1;
  lVar25 = (longlong)*(int *)(param_3 + 0x20);
  *(undefined1 *)(param_3 + 0x28) = 0;
  if (0 < lVar25) {
    lVar28 = 0;
    do {
      pfVar26 = (float *)(*(longlong *)(param_3 + 0x18) + lVar28);
      fVar2 = pfVar26[9];
      if (((fVar2 == -NAN) || (*(int *)(param_1 + 0x40) <= (int)fVar2)) ||
         (lVar3 = *(longlong *)((longlong)(int)fVar2 * 0x100 + *(longlong *)(param_1 + 0x38)),
         lVar3 == 0)) {
        pfVar23 = (float *)&DAT_1467f0890;
      }
      else {
        pfVar23 = (float *)(lVar3 + 0x40);
      }
      fVar2 = *pfVar26;
      fVar4 = pfVar26[1];
      fVar5 = pfVar26[2];
      lVar28 = lVar28 + 0x30;
      fVar6 = pfVar26[4];
      fVar7 = pfVar26[5];
      fVar8 = pfVar26[6];
      fVar9 = pfVar23[5];
      fVar10 = pfVar23[6];
      fVar11 = pfVar23[7];
      fVar12 = pfVar23[1];
      fVar13 = pfVar23[2];
      fVar14 = pfVar23[3];
      fVar15 = pfVar23[9];
      fVar16 = pfVar23[10];
      fVar17 = pfVar23[0xb];
      fVar18 = pfVar23[0xd];
      fVar19 = pfVar23[0xe];
      fVar20 = pfVar23[0xf];
      *pfVar26 = fVar4 * pfVar23[4] + fVar2 * *pfVar23 + fVar5 * pfVar23[8] + pfVar23[0xc];
      pfVar26[1] = fVar4 * fVar9 + fVar2 * fVar12 + fVar5 * fVar15 + fVar18;
      pfVar26[2] = fVar4 * fVar10 + fVar2 * fVar13 + fVar5 * fVar16 + fVar19;
      pfVar26[3] = fVar4 * fVar11 + fVar2 * fVar14 + fVar5 * fVar17 + fVar20;
      fVar2 = pfVar23[1];
      fVar4 = pfVar23[2];
      fVar5 = pfVar23[3];
      fVar9 = pfVar23[5];
      fVar10 = pfVar23[6];
      fVar11 = pfVar23[7];
      fVar12 = pfVar23[9];
      fVar13 = pfVar23[10];
      fVar14 = pfVar23[0xb];
      pfVar26[4] = fVar7 * pfVar23[4] + fVar6 * *pfVar23 + fVar8 * pfVar23[8];
      pfVar26[5] = fVar7 * fVar9 + fVar6 * fVar2 + fVar8 * fVar12;
      pfVar26[6] = fVar7 * fVar10 + fVar6 * fVar4 + fVar8 * fVar13;
      pfVar26[7] = fVar7 * fVar11 + fVar6 * fVar5 + fVar8 * fVar14;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
  }
  return;
}



// FUNCTION 1438ae5c0 FUN_1438ae5c0 body=515 status=ok
// SIG undefined FUN_1438ae5c0(void)

void FUN_1438ae5c0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  float fVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  int iVar15;
  float *pfVar16;
  longlong lVar17;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar2 = *(int *)(param_2 + 0x20);
  plVar1 = (longlong *)(param_3 + 0x18);
  lVar14 = *(longlong *)(param_2 + 0x18);
  uVar11 = FUN_143703a50();
  if ((int)(*(uint *)(param_3 + 0x24) & 0x3fffffff) < iVar2) {
    FUN_14370c310(uVar11,plVar1,iVar2,0x30);
  }
  iVar15 = iVar2;
  if (*(int *)(param_3 + 0x20) < iVar2) {
    iVar15 = *(int *)(param_3 + 0x20);
  }
  FUN_143866a40(*plVar1,lVar14,iVar15);
  lVar17 = (longlong)(iVar2 - iVar15);
  if (0 < iVar2 - iVar15) {
    puVar12 = (undefined4 *)(lVar14 + 0x20 + (longlong)iVar15 * 0x30);
    lVar14 = *plVar1 - lVar14;
    do {
      puVar13 = (undefined8 *)(lVar14 + -0x20 + (longlong)puVar12);
      if (puVar13 != (undefined8 *)0x0) {
        uVar11 = *(undefined8 *)(puVar12 + -6);
        *puVar13 = *(undefined8 *)(puVar12 + -8);
        puVar13[1] = uVar11;
        uVar11 = *(undefined8 *)(puVar12 + -2);
        puVar13 = (undefined8 *)(lVar14 + -0x10 + (longlong)puVar12);
        *puVar13 = *(undefined8 *)(puVar12 + -4);
        puVar13[1] = uVar11;
        *(undefined4 *)(lVar14 + (longlong)puVar12) = *puVar12;
        *(undefined4 *)(lVar14 + 4 + (longlong)puVar12) = puVar12[1];
        *(undefined1 *)(lVar14 + 8 + (longlong)puVar12) = *(undefined1 *)(puVar12 + 2);
      }
      puVar12 = puVar12 + 0xc;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  *(int *)(param_3 + 0x20) = iVar2;
  fVar10 = -NAN;
  *(undefined1 *)(param_3 + 0x28) = 1;
  lVar14 = (longlong)*(int *)(param_3 + 0x20);
  if (0 < lVar14) {
    lVar17 = 0;
    do {
      pfVar16 = (float *)(*plVar1 + lVar17);
      fVar3 = pfVar16[9];
      if (fVar3 != fVar10) {
        if (((fVar3 == -NAN) || (*(int *)(param_1 + 0x40) <= (int)fVar3)) ||
           (lVar4 = *(longlong *)((longlong)(int)fVar3 * 0x100 + *(longlong *)(param_1 + 0x38)),
           lVar4 == 0)) {
          puVar13 = (undefined8 *)&DAT_1467f0890;
        }
        else {
          puVar13 = (undefined8 *)(lVar4 + 0x40);
        }
        local_58 = *puVar13;
        uStack_50 = puVar13[1];
        local_48 = puVar13[2];
        uStack_40 = puVar13[3];
        local_38 = *(undefined4 *)(puVar13 + 4);
        uStack_34 = *(undefined4 *)((longlong)puVar13 + 0x24);
        uStack_30 = *(undefined4 *)(puVar13 + 5);
        uStack_2c = *(undefined4 *)((longlong)puVar13 + 0x2c);
        local_28 = *(undefined4 *)(puVar13 + 6);
        uStack_24 = *(undefined4 *)((longlong)puVar13 + 0x34);
        uStack_20 = *(undefined4 *)(puVar13 + 7);
        uStack_1c = *(undefined4 *)((longlong)puVar13 + 0x3c);
        FUN_14375f650(&local_98,&local_58);
        fVar10 = fVar3;
      }
      fVar3 = *pfVar16;
      fVar5 = pfVar16[1];
      fVar6 = pfVar16[2];
      lVar17 = lVar17 + 0x30;
      fVar7 = pfVar16[4];
      fVar8 = pfVar16[5];
      fVar9 = pfVar16[6];
      *pfVar16 = fVar5 * local_88 + fVar3 * local_98 + fVar6 * local_78 + local_68;
      pfVar16[1] = fVar5 * fStack_84 + fVar3 * fStack_94 + fVar6 * fStack_74 + fStack_64;
      pfVar16[2] = fVar5 * fStack_80 + fVar3 * fStack_90 + fVar6 * fStack_70 + fStack_60;
      pfVar16[3] = fVar5 * fStack_7c + fVar3 * fStack_8c + fVar6 * fStack_6c + fStack_5c;
      pfVar16[4] = fVar8 * local_88 + fVar7 * local_98 + fVar9 * local_78;
      pfVar16[5] = fVar8 * fStack_84 + fVar7 * fStack_94 + fVar9 * fStack_74;
      pfVar16[6] = fVar8 * fStack_80 + fVar7 * fStack_90 + fVar9 * fStack_70;
      pfVar16[7] = fVar8 * fStack_7c + fVar7 * fStack_8c + fVar9 * fStack_6c;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return;
}



// FUNCTION 1438ae7d0 FUN_1438ae7d0 body=29 status=ok
// SIG undefined FUN_1438ae7d0(void)

undefined4
FUN_1438ae7d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined1 local_18 [24];
  
  puVar1 = (undefined4 *)FUN_1438ae840(local_18,param_3,param_4);
  return *puVar1;
}



// FUNCTION 1438ae7f0 FUN_1438ae7f0 body=74 status=ok
// SIG undefined FUN_1438ae7f0(void)

undefined8
FUN_1438ae7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  float *pfVar1;
  float local_28;
  float fStack_24;
  undefined1 local_18 [16];
  
  FUN_1438325c0(param_2,&local_28,param_5,param_6);
  pfVar1 = (float *)FUN_1438ae840(local_18,param_3,param_4);
  return CONCAT44(pfVar1[1] * fStack_24,*pfVar1 * local_28);
}



// FUNCTION 1438ae840 FUN_1438ae840 body=56 status=ok
// SIG undefined FUN_1438ae840(void)

float * FUN_1438ae840(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (param_2[4] - *param_2) * (DAT_1467f06f0 - *param_3) + *param_3;
  fVar2 = (param_2[5] - param_2[1]) * (fRam00000001467f06f4 - param_3[1]) + param_3[1];
  fVar3 = (param_2[6] - param_2[2]) * (fRam00000001467f06f8 - param_3[2]) + param_3[2];
  *param_1 = fVar2 * fVar1 * fVar3;
  param_1[1] = fVar2 * fVar1 * fVar3;
  param_1[2] = fVar2 * fVar1 * fVar3;
  param_1[3] = fVar2 * fVar1 * fVar3;
  return param_1;
}



// FUNCTION 1438ae880 FUN_1438ae880 body=149 status=ok
// SIG undefined FUN_1438ae880(void)

void FUN_1438ae880(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar7 = param_2[1];
  lVar9 = 0;
  lVar3 = *param_2;
  if (0 < (longlong)(int)lVar7) {
    do {
      lVar4 = *(longlong *)(lVar3 + lVar9 * 8);
      for (lVar8 = lVar9; 0 < lVar8; lVar8 = lVar8 + -1) {
        lVar5 = *(longlong *)(lVar3 + -8 + lVar8 * 8);
        iVar1 = *(int *)(*(longlong *)(lVar4 + 0x20) + 0x24);
        iVar2 = *(int *)(*(longlong *)(lVar5 + 0x20) + 0x24);
        if (iVar1 == iVar2) {
          bVar6 = *(float *)(lVar4 + 0x10) < *(float *)(lVar5 + 0x10);
        }
        else {
          bVar6 = iVar1 < iVar2;
        }
        if (!bVar6) break;
        *(longlong *)(lVar3 + lVar8 * 8) = lVar5;
      }
      lVar9 = lVar9 + 1;
      *(longlong *)(lVar3 + lVar8 * 8) = lVar4;
    } while (lVar9 < (int)lVar7);
  }
  return;
}



// FUNCTION 1438ae920 FUN_1438ae920 body=495 status=ok
// SIG undefined FUN_1438ae920(void)

void FUN_1438ae920(longlong param_1,int param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  LPVOID pvVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pvVar3 = TlsGetValue(DAT_146b8198c);
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar3,"TtcreateNonmergedCompoundSilhouettes");
  }
  lVar8 = 0;
  if (0 < param_2) {
    do {
      puVar5 = *(undefined8 **)(param_1 + lVar8 * 8);
      local_58 = *puVar5;
      uStack_50 = puVar5[1];
      local_48 = *(undefined4 *)(puVar5 + 2);
      uStack_44 = *(undefined4 *)((longlong)puVar5 + 0x14);
      uStack_40 = *(undefined4 *)(puVar5 + 3);
      uStack_3c = *(undefined4 *)((longlong)puVar5 + 0x1c);
      lVar4 = (**(code **)(*(longlong *)puVar5[4] + 0x18))((longlong *)puVar5[4],&local_58,param_3);
      iVar7 = 0;
      iVar6 = *(int *)(lVar4 + 0x30);
      if (0 < iVar6) {
        lVar9 = 0;
        do {
          iVar1 = *(int *)(lVar9 + *(longlong *)(lVar4 + 0x28));
          lVar2 = *(longlong *)(lVar4 + 0x18);
          if (iVar7 == iVar6 + -1) {
            iVar6 = *(int *)(lVar4 + 0x20);
          }
          else {
            iVar6 = *(int *)(lVar9 + 4 + *(longlong *)(lVar4 + 0x28));
          }
          iVar6 = iVar6 - iVar1;
          if (*(uint *)(param_4 + 1) == (*(uint *)((longlong)param_4 + 0xc) & 0x3fffffff)) {
            FUN_14370c460(&PTR_vftable_1467f0638,param_4,0x10);
          }
          puVar5 = (undefined8 *)((longlong)(int)param_4[1] * 0x10 + *param_4);
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = 0;
            *(undefined4 *)(puVar5 + 1) = 0;
            *(undefined4 *)((longlong)puVar5 + 0xc) = 0x80000000;
          }
          puVar5 = (undefined8 *)((longlong)(int)param_4[1] * 0x10 + *param_4);
          *(int *)(param_4 + 1) = (int)param_4[1] + 1;
          if ((int)(*(uint *)((longlong)puVar5 + 0xc) & 0x3fffffff) < iVar6) {
            FUN_14370c310(&PTR_vftable_1467f0638,puVar5,iVar6,0x10);
          }
          FUN_142ba3370(*puVar5,(longlong)iVar1 * 0x10 + lVar2,iVar6);
          *(int *)(puVar5 + 1) = iVar6;
          iVar7 = iVar7 + 1;
          iVar6 = *(int *)(lVar4 + 0x30);
          lVar9 = lVar9 + 4;
        } while (iVar7 < iVar6);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < param_2);
  }
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d750(pvVar3,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438aeb10 FUN_1438aeb10 body=1846 status=ok
// SIG undefined FUN_1438aeb10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_1438aeb10(undefined4 *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
             longlong param_5,undefined8 param_6,undefined8 param_7,float *param_8,
             undefined8 param_9)

{
  ushort *puVar1;
  int iVar2;
  float fVar3;
  short sVar4;
  ushort uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 auVar13 [16];
  longlong lVar14;
  DWORD dwTlsIndex;
  char cVar15;
  int iVar16;
  LPVOID pvVar17;
  undefined8 uVar18;
  float *pfVar19;
  ulonglong uVar20;
  uint uVar21;
  int *piVar22;
  int *piVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  longlong lVar27;
  longlong lVar28;
  float fVar29;
  float fVar30;
  float fVar33;
  float fVar35;
  undefined1 auVar31 [16];
  float fVar34;
  undefined1 auVar32 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  int *local_138;
  longlong local_120;
  longlong *local_118;
  longlong *local_110;
  undefined1 local_108;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined1 local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 local_a8 [112];
  
  puVar10 = (undefined8 *)*param_4;
  uVar6 = *(undefined4 *)puVar10;
  *(int *)(param_4 + 1) = (int)param_4[1] + -1;
  *puVar10 = puVar10[(int)param_4[1]];
  lVar14 = param_4[1];
  iVar7 = 0;
  if ((int)lVar14 < 3) {
    iVar8 = 1;
  }
  else {
    iVar8 = (*(int *)(*param_4 + 0x14) < *(int *)(*param_4 + 0xc)) + 1;
  }
  while (iVar25 = iVar8, iVar25 < (int)lVar14) {
    lVar11 = *param_4;
    lVar28 = (longlong)iVar7;
    lVar27 = (longlong)iVar25;
    if (*(int *)(lVar11 + 4 + lVar28 * 8) <= *(int *)(lVar11 + 4 + lVar27 * 8)) break;
    uVar18 = *(undefined8 *)(lVar11 + lVar28 * 8);
    *(undefined8 *)(lVar11 + lVar28 * 8) = *(undefined8 *)(lVar11 + lVar27 * 8);
    *(undefined8 *)(lVar11 + lVar27 * 8) = uVar18;
    iVar8 = iVar25 * 2 + 1;
    iVar16 = iVar25 * 2 + 2;
    iVar7 = iVar25;
    if (iVar16 < (int)param_4[1]) {
      iVar8 = iVar8 + (uint)(*(int *)(*param_4 + 4 + (longlong)iVar16 * 8) <
                            *(int *)(*param_4 + 4 + (longlong)iVar8 * 8));
    }
  }
  FUN_1438af9e0(param_9,uVar6);
  lVar14 = (longlong)param_8;
  uVar24 = (int)*(short *)((longlong)param_2 + 0x6e) + *(int *)((longlong)param_2 + 0x84);
  fVar3 = **(float **)((longlong)param_8 + 0x48);
  if (uVar24 == 0) {
    local_138 = (int *)0x0;
  }
  else {
    pvVar17 = TlsGetValue(DAT_146b7bf70);
    if (pvVar17 == (LPVOID)0x0) {
      pvVar17 = DAT_146b7bf68;
    }
    uVar21 = uVar24 * 4 + 0x7f & 0xffffff80;
    local_138 = *(int **)((longlong)pvVar17 + 0x18);
    uVar20 = (longlong)(int)uVar21 + (longlong)local_138;
    if ((*(int *)((longlong)pvVar17 + 0x10) < (int)uVar21) ||
       (*(ulonglong *)((longlong)pvVar17 + 0x20) < uVar20)) {
      local_138 = (int *)FUN_1437138c0(pvVar17);
    }
    else {
      *(ulonglong *)((longlong)pvVar17 + 0x18) = uVar20;
    }
  }
  sVar4 = *(short *)((longlong)param_2 + 0x6e);
  iVar7 = *(int *)((longlong)param_2 + 0x84);
  iVar25 = 0;
  iVar8 = *(int *)(param_2 + 0xf);
  piVar22 = local_138;
  piVar23 = local_138;
  if (0 < sVar4) {
    do {
      iVar16 = iVar25 + iVar8;
      piVar23 = piVar22 + 1;
      iVar25 = iVar25 + 1;
      *piVar22 = iVar16;
      piVar22 = piVar23;
    } while (iVar25 < sVar4);
  }
  iVar8 = *(int *)((longlong)param_2 + 0x84);
  iVar16 = 0;
  iVar25 = *(int *)(param_2 + 0x10);
  if (0 < iVar8) {
    do {
      iVar2 = iVar16 + iVar25;
      iVar16 = iVar16 + 1;
      *piVar23 = iVar2;
      piVar23 = piVar23 + 1;
    } while (iVar16 < iVar8);
  }
  piVar23 = local_138;
  while ((piVar23 < local_138 + (iVar7 + sVar4) &&
         (iVar8 = *piVar23, *(int *)(param_5 + 0x1c) < *(int *)(param_5 + 0x18)))) {
    param_8._4_4_ = (undefined4)((ulonglong)param_8 >> 0x20);
    param_8 = (float *)CONCAT44(param_8._4_4_,iVar8);
    FUN_1438af810(param_9,uVar6,&param_8);
    uVar21 = *(uint *)((longlong)param_2 + 0x8c);
    uVar26 = uVar21 >> 0x16;
    if (*(uint *)((longlong)param_3 + 100) != uVar26) {
      param_3[0xb] = *(longlong *)((ulonglong)uVar26 * 0x100 + 8 + *(longlong *)(*param_3 + 0x38));
      *(uint *)((longlong)param_3 + 100) = uVar26;
    }
    FUN_1438afed0(param_3,uVar21);
    param_8 = (float *)param_3[9];
    if (uVar21 == 0xffffffff) {
      *(undefined8 *)((longlong)param_8 + 0x48) = 0;
    }
    else {
      uVar18 = FUN_143843a50(param_8,uVar21);
      *(undefined8 *)((longlong)param_8 + 0x48) = uVar18;
    }
    plVar12 = (longlong *)param_3[3];
    if (plVar12 == (longlong *)0x0) {
LAB_1438aee13:
      fVar42 = (*(float *)(param_2 + 0x2c) + *(float *)(param_2 + 0x2a)) * _DAT_1467f07e0;
      fVar43 = (*(float *)((longlong)param_2 + 0x164) + *(float *)((longlong)param_2 + 0x154)) *
               fRam00000001467f07e4;
      fVar44 = (*(float *)(param_2 + 0x2d) + *(float *)(param_2 + 0x2b)) * fRam00000001467f07e8;
      param_8 = (float *)CONCAT44(param_8._4_4_,fVar3);
      fVar29 = *(float *)(param_2 + 0x18) - fVar42;
      fVar33 = *(float *)((longlong)param_2 + 0xc4) - fVar43;
      fVar35 = *(float *)(param_2 + 0x19) - fVar44;
      fVar29 = fVar29 * fVar29;
      fVar33 = fVar33 * fVar33;
      fVar35 = fVar35 * fVar35;
      fVar37 = fVar33 + fVar29 + fVar35;
      fVar38 = fVar33 + fVar29 + fVar35;
      fVar39 = fVar33 + fVar29 + fVar35;
      fVar35 = fVar33 + fVar29 + fVar35;
      auVar36._4_4_ = fVar38;
      auVar36._0_4_ = fVar37;
      auVar36._8_4_ = fVar39;
      auVar36._12_4_ = fVar35;
      auVar36 = rsqrtps(in_XMM2,auVar36);
      fVar29 = auVar36._0_4_;
      fVar33 = auVar36._4_4_;
      fVar30 = auVar36._8_4_;
      fVar34 = auVar36._12_4_;
      auVar31._0_4_ = (3.0 - fVar37 * fVar29 * fVar29) * fVar29 * 0.5 * fVar37;
      auVar31._4_4_ = (3.0 - fVar38 * fVar33 * fVar33) * fVar33 * 0.5 * fVar38;
      auVar31._8_4_ = (3.0 - fVar39 * fVar30 * fVar30) * fVar30 * 0.5 * fVar39;
      auVar31._12_4_ = (3.0 - fVar35 * fVar34 * fVar34) * fVar34 * 0.5 * fVar35;
      fVar29 = (float)(~-(uint)(fVar37 <= 0.0) & (uint)auVar31._0_4_);
      if ((*(byte *)((longlong)param_2 + 0x8a) & 0x10) == 0) {
        fVar42 = fVar42 - *(float *)(param_2 + 0x20);
        fVar43 = fVar43 - *(float *)((longlong)param_2 + 0x104);
        fVar44 = fVar44 - *(float *)(param_2 + 0x21);
        fVar42 = fVar42 * fVar42;
        fVar43 = fVar43 * fVar43;
        fVar44 = fVar44 * fVar44;
        in_XMM2._0_4_ = fVar43 + fVar42 + fVar44;
        in_XMM2._4_4_ = fVar43 + fVar42 + fVar44;
        in_XMM2._8_4_ = fVar43 + fVar42 + fVar44;
        in_XMM2._12_4_ = fVar43 + fVar42 + fVar44;
        auVar36 = rsqrtps(auVar31,in_XMM2);
        fVar33 = auVar36._0_4_;
        fVar30 = auVar36._4_4_;
        fVar34 = auVar36._8_4_;
        fVar37 = auVar36._12_4_;
        fVar42 = (float)(~-(uint)(in_XMM2._0_4_ <= 0.0) &
                        (uint)((3.0 - in_XMM2._0_4_ * fVar33 * fVar33) * fVar33 * 0.5 *
                              in_XMM2._0_4_));
        fVar30 = (float)(~-(uint)(in_XMM2._4_4_ <= 0.0) &
                        (uint)((3.0 - in_XMM2._4_4_ * fVar30 * fVar30) * fVar30 * 0.5 *
                              in_XMM2._4_4_));
        fVar34 = (float)(~-(uint)(in_XMM2._8_4_ <= 0.0) &
                        (uint)((3.0 - in_XMM2._8_4_ * fVar34 * fVar34) * fVar34 * 0.5 *
                              in_XMM2._8_4_));
        fVar33 = (float)(~-(uint)(in_XMM2._12_4_ <= 0.0) &
                        (uint)((3.0 - in_XMM2._12_4_ * fVar37 * fVar37) * fVar37 * 0.5 *
                              in_XMM2._12_4_));
      }
      else {
        fVar30 = *(float *)(param_2 + 0x2e) - *(float *)(param_2 + 0x20);
        fVar34 = *(float *)((longlong)param_2 + 0x174) - *(float *)((longlong)param_2 + 0x104);
        fVar33 = *(float *)(param_2 + 0x2f) - *(float *)(param_2 + 0x21);
        fVar30 = fVar30 * fVar30;
        fVar34 = fVar34 * fVar34;
        auVar32._8_4_ = fVar33 * fVar33;
        auVar32._4_4_ = auVar32._8_4_;
        auVar32._0_4_ = auVar32._8_4_;
        auVar32._12_4_ = auVar32._8_4_;
        fVar33 = *(float *)(param_2[0x28] + 0x14);
        in_XMM2._4_4_ = fVar33;
        in_XMM2._0_4_ = fVar33;
        in_XMM2._8_4_ = fVar33;
        in_XMM2._12_4_ = fVar33;
        fVar42 = fVar34 + fVar30 + auVar32._8_4_;
        fVar44 = fVar34 + fVar30 + auVar32._8_4_;
        fVar40 = fVar34 + fVar30 + auVar32._8_4_;
        fVar41 = fVar34 + fVar30 + auVar32._8_4_;
        auVar13._4_4_ = fVar44;
        auVar13._0_4_ = fVar42;
        auVar13._8_4_ = fVar40;
        auVar13._12_4_ = fVar41;
        auVar36 = rsqrtps(auVar32,auVar13);
        fVar30 = auVar36._0_4_;
        fVar34 = auVar36._4_4_;
        fVar37 = auVar36._8_4_;
        fVar43 = auVar36._12_4_;
        fVar42 = (float)(~-(uint)(fVar42 <= 0.0) &
                        (uint)((3.0 - fVar42 * fVar30 * fVar30) * fVar30 * 0.5 * fVar42)) + fVar33;
        fVar30 = (float)(~-(uint)(fVar44 <= 0.0) &
                        (uint)((3.0 - fVar44 * fVar34 * fVar34) * fVar34 * 0.5 * fVar44)) + fVar33;
        fVar34 = (float)(~-(uint)(fVar40 <= 0.0) &
                        (uint)((3.0 - fVar40 * fVar37 * fVar37) * fVar37 * 0.5 * fVar40)) + fVar33;
        fVar33 = (float)(~-(uint)(fVar41 <= 0.0) &
                        (uint)((3.0 - fVar41 * fVar43 * fVar43) * fVar43 * 0.5 * fVar41)) + fVar33;
      }
      plVar12 = (longlong *)param_2[2];
      if (plVar12 == (longlong *)0x0) {
        fVar42 = fVar29 + fVar3 + fVar42;
      }
      else {
        local_f8 = *param_2;
        local_f0 = param_2 + 1;
        local_e0 = 1;
        local_e8 = param_2 + 0x16;
        local_d8 = fVar3;
        fStack_d4 = fVar3;
        fStack_d0 = fVar3;
        fStack_cc = fVar3;
        local_c8 = fVar29;
        uStack_c4 = ~-(uint)(fVar38 <= 0.0) & (uint)auVar31._4_4_;
        uStack_c0 = ~-(uint)(fVar39 <= 0.0) & (uint)auVar31._8_4_;
        uStack_bc = ~-(uint)(fVar35 <= 0.0) & (uint)auVar31._12_4_;
        local_b8 = fVar42;
        fStack_b4 = fVar30;
        fStack_b0 = fVar34;
        fStack_ac = fVar33;
        pfVar19 = (float *)(**(code **)(*plVar12 + 0x20))(plVar12,local_a8,&local_f8);
        fVar42 = *pfVar19 + fVar3;
      }
      if ((fVar42 < *(float *)(lVar14 + 0x38) || fVar42 == *(float *)(lVar14 + 0x38)) &&
         (((*(byte *)(*(longlong *)(param_5 + 0x48) + 0xe) & 3) == 0 ||
          (fVar42 < **(float **)(lVar14 + 0x48))))) {
        param_8 = *(float **)(lVar14 + 0x48);
        *param_8 = fVar42;
        if ((*(byte *)((longlong)param_8 + 0xe) & 3) == 0) {
          fVar29 = (float)FUN_1438af410(param_7,uVar21);
          param_8[1] = fVar29;
          if (fVar29 < *(float *)(lVar14 + 0x34)) {
            *(float *)(lVar14 + 0x34) = fVar29;
            *(uint *)(lVar14 + 0x30) = uVar21;
          }
        }
        param_8 = (float *)CONCAT44(param_8._4_4_,iVar8);
        FUN_1438b0130(param_6,uVar21,uVar6,&param_8);
        lVar11 = *(longlong *)(param_5 + 0x48);
        fVar29 = (*(float **)(lVar14 + 0x48))[1] * *(float *)(lVar14 + 0x3c) +
                 **(float **)(lVar14 + 0x48);
        in_XMM2 = ZEXT416((uint)fVar29);
        uVar5 = *(ushort *)(lVar11 + 0xe);
        if (fVar29 < *(float *)(lVar14 + 0x38) || fVar29 == *(float *)(lVar14 + 0x38)) {
          *(ushort *)(lVar11 + 0xe) = *(ushort *)(lVar11 + 0xe) & 0xfffd;
          *(ushort *)(lVar11 + 0xe) = *(ushort *)(lVar11 + 0xe) | 1;
          if ((uVar5 & 1) == 0) {
            uVar26 = *(uint *)(param_4 + 1);
            uVar20 = (ulonglong)(int)uVar26;
            if (*(int *)((longlong)param_4 + 0xc) <= (int)uVar26) break;
            lVar11 = *param_4;
            *(uint *)(param_4 + 1) = uVar26 + 1;
            *(float *)(lVar11 + 4 + uVar20 * 8) = fVar29;
            *(uint *)(lVar11 + uVar20 * 8) = uVar21;
            uVar9 = *(undefined4 *)(*param_4 + uVar20 * 8);
            iVar8 = *(int *)(*param_4 + 4 + uVar20 * 8);
            while (0 < (int)uVar26) {
              uVar21 = (int)(uVar26 - 1) / 2;
              uVar26 = (uint)uVar20;
              lVar11 = *param_4;
              if (*(int *)(lVar11 + 4 + (longlong)(int)uVar21 * 8) <= iVar8) break;
              uVar20 = (ulonglong)uVar21;
              *(undefined8 *)(lVar11 + (longlong)(int)uVar26 * 8) =
                   *(undefined8 *)(lVar11 + (longlong)(int)uVar21 * 8);
              uVar26 = uVar21;
            }
            *(undefined4 *)(*param_4 + (longlong)(int)uVar26 * 8) = uVar9;
            *(int *)(*param_4 + 4 + (longlong)(int)uVar26 * 8) = iVar8;
          }
          else {
            FUN_14389cf60(param_4,uVar21);
          }
        }
      }
    }
    else {
      local_120 = *param_3;
      local_118 = param_3 + 1;
      local_110 = param_3 + 0x16;
      local_108 = 1;
      cVar15 = (**(code **)(*plVar12 + 0x28))(plVar12,&local_120);
      if (cVar15 != '\0') goto LAB_1438aee13;
    }
    piVar23 = piVar23 + 1;
  }
  lVar14 = *(longlong *)(param_5 + 0x50);
  puVar1 = (ushort *)(lVar14 + 0xe);
  *puVar1 = *puVar1 & 0xfffe;
  puVar1 = (ushort *)(lVar14 + 0xe);
  *puVar1 = *puVar1 | 2;
  dwTlsIndex = DAT_146b7bf70;
  *param_1 = uVar6;
  pvVar17 = TlsGetValue(dwTlsIndex);
  if (pvVar17 == (LPVOID)0x0) {
    pvVar17 = DAT_146b7bf68;
  }
  uVar21 = uVar24 * 4 + 0x7f & 0xffffff80;
  if (((*(int *)((longlong)pvVar17 + 0x10) < (int)uVar21) ||
      ((longlong)(int)uVar21 + (longlong)local_138 != *(longlong *)((longlong)pvVar17 + 0x18))) ||
     (*(int **)((longlong)pvVar17 + 0x28) == local_138)) {
    FUN_143713ff0(pvVar17,local_138);
  }
  else {
    *(int **)((longlong)pvVar17 + 0x18) = local_138;
  }
  uVar18 = FUN_143703a50();
  if (-1 < (int)(uVar24 | 0x80000000)) {
    FUN_143702e10(uVar18,local_138,4,uVar24 & 0x3fffffff);
  }
  return param_1;
}



// FUNCTION 1438af250 FUN_1438af250 body=27 status=ok
// SIG undefined FUN_1438af250(void)

undefined8 * FUN_1438af250(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  return param_1;
}



// FUNCTION 1438af270 FUN_1438af270 body=171 status=ok
// SIG undefined FUN_1438af270(void)

longlong FUN_1438af270(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0x7f7fffee;
  *(undefined4 *)(param_1 + 0x48) = 0x7f7fffee;
  *(undefined2 *)(param_1 + 0x3c) = 0xffff;
  *(undefined2 *)(param_1 + 0x3e) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x7f7fffee;
  *(undefined4 *)(param_1 + 0x34) = 0x7f7fffee;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  iVar1 = *(int *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x70) = *param_2;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(int *)(param_1 + 0x7c) = (int)((ulonglong)(longlong)iVar1 >> 3);
  FUN_1438af250(param_1 + 0x110);
  FUN_14389d420(param_1 + 0x10,param_2[1],*(undefined4 *)((longlong)param_2 + 0x14));
  return param_1;
}



// FUNCTION 1438af320 FUN_1438af320 body=152 status=ok
// SIG undefined FUN_1438af320(void)

void FUN_1438af320(longlong *param_1,undefined8 param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 local_res8 [8];
  
  if (*(int *)((longlong)param_1 + 0xc) < (int)param_1[1] * 2) {
    FUN_1438afd90(param_1,local_res8,param_2,*(int *)((longlong)param_1 + 0xc) * 2 + 2);
  }
  *param_4 = 1;
  iVar1 = *param_3;
  lVar3 = *param_1;
  uVar4 = iVar1 * -0x61c8864f;
  uVar5 = (ulonglong)
          ((uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | iVar1 * -0x4f000000) &
          *(uint *)((longlong)param_1 + 0xc));
  iVar2 = *(int *)(lVar3 + uVar5 * 8);
  do {
    if (iVar2 == -1) {
LAB_1438af3a3:
      *(int *)(param_1 + 1) = (int)param_1[1] + *param_4;
      return;
    }
    if (*(int *)(lVar3 + uVar5 * 8) == iVar1) {
      *param_4 = 0;
      goto LAB_1438af3a3;
    }
    uVar5 = (ulonglong)((int)uVar5 + 1U & *(uint *)((longlong)param_1 + 0xc));
    iVar2 = *(int *)(lVar3 + uVar5 * 8);
  } while( true );
}



// FUNCTION 1438af3c0 FUN_1438af3c0 body=66 status=ok
// SIG undefined FUN_1438af3c0(void)

ulonglong FUN_1438af3c0(longlong *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if (0 < (int)uVar1) {
    iVar2 = *param_2;
    lVar4 = *param_1;
    uVar5 = iVar2 * -0x61c8864f;
    uVar6 = (ulonglong)
            ((uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | iVar2 * -0x4f000000)
            & uVar1);
    iVar3 = *(int *)(lVar4 + uVar6 * 8);
    while (iVar3 != -1) {
      if (*(int *)(lVar4 + uVar6 * 8) == iVar2) {
        return uVar6;
      }
      uVar6 = (ulonglong)((int)uVar6 + 1U & uVar1);
      iVar3 = *(int *)(lVar4 + uVar6 * 8);
    }
  }
  return (longlong)(int)(uVar1 + 1);
}



// FUNCTION 1438af410 FUN_1438af410 body=279 status=ok
// SIG undefined FUN_1438af410(void)

undefined8 FUN_1438af410(longlong *param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float *pfVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar11;
  undefined1 in_XMM2 [16];
  undefined1 auVar9 [16];
  float fVar12;
  undefined1 auVar10 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar18;
  undefined8 uVar16;
  uint uVar19;
  undefined1 auVar17 [16];
  
  lVar1 = *param_1;
  fVar6 = *(float *)(lVar1 + 0x100) - *(float *)(param_1 + 2);
  fVar7 = *(float *)(lVar1 + 0x104) - *(float *)((longlong)param_1 + 0x14);
  fVar8 = *(float *)(lVar1 + 0x108) - *(float *)(param_1 + 3);
  fVar6 = fVar6 * fVar6;
  fVar7 = fVar7 * fVar7;
  fVar8 = fVar8 * fVar8;
  fVar13 = fVar7 + fVar6 + fVar8;
  fVar14 = fVar7 + fVar6 + fVar8;
  fVar15 = fVar7 + fVar6 + fVar8;
  fVar8 = fVar7 + fVar6 + fVar8;
  auVar9._4_4_ = fVar14;
  auVar9._0_4_ = fVar13;
  auVar9._8_4_ = fVar15;
  auVar9._12_4_ = fVar8;
  auVar9 = rsqrtps(in_XMM2,auVar9);
  fVar6 = auVar9._0_4_;
  fVar7 = auVar9._4_4_;
  fVar11 = auVar9._8_4_;
  fVar12 = auVar9._12_4_;
  auVar10._0_4_ = fVar6 * 0.5;
  auVar10._4_4_ = fVar7 * 0.5;
  auVar10._8_4_ = fVar11 * 0.5;
  auVar10._12_4_ = fVar12 * 0.5;
  uVar18 = ~-(uint)(fVar13 <= 0.0) & (uint)((3.0 - fVar13 * fVar6 * fVar6) * auVar10._0_4_ * fVar13)
  ;
  register0x00001344 =
       ~-(uint)(fVar14 <= 0.0) & (uint)((3.0 - fVar14 * fVar7 * fVar7) * auVar10._4_4_ * fVar14);
  auVar17._8_4_ =
       ~-(uint)(fVar15 <= 0.0) & (uint)((3.0 - fVar15 * fVar11 * fVar11) * auVar10._8_4_ * fVar15);
  auVar17._12_4_ =
       ~-(uint)(fVar8 <= 0.0) & (uint)((3.0 - fVar8 * fVar12 * fVar12) * auVar10._12_4_ * fVar8);
  if ((longlong)(int)param_1[1] < 2) {
    uVar16 = CONCAT44(register0x00001344,uVar18);
  }
  else {
    pfVar4 = (float *)(param_1 + 6);
    lVar5 = (longlong)(int)param_1[1] + -1;
    do {
      fVar6 = *(float *)(lVar1 + 0x100) - *pfVar4;
      fVar7 = *(float *)(lVar1 + 0x104) - pfVar4[1];
      fVar8 = *(float *)(lVar1 + 0x108) - pfVar4[2];
      pfVar4 = pfVar4 + 8;
      fVar6 = fVar6 * fVar6;
      fVar7 = fVar7 * fVar7;
      fVar8 = fVar8 * fVar8;
      fVar13 = fVar7 + fVar6 + fVar8;
      fVar14 = fVar7 + fVar6 + fVar8;
      fVar15 = fVar7 + fVar6 + fVar8;
      fVar8 = fVar7 + fVar6 + fVar8;
      auVar3._4_4_ = fVar14;
      auVar3._0_4_ = fVar13;
      auVar3._8_4_ = fVar15;
      auVar3._12_4_ = fVar8;
      auVar9 = rsqrtps(auVar10,auVar3);
      fVar6 = auVar9._0_4_;
      fVar7 = auVar9._4_4_;
      fVar11 = auVar9._8_4_;
      fVar12 = auVar9._12_4_;
      auVar10._0_4_ = fVar6 * 0.5;
      auVar10._4_4_ = fVar7 * 0.5;
      auVar10._8_4_ = fVar11 * 0.5;
      auVar10._12_4_ = fVar12 * 0.5;
      auVar2._4_4_ = ~-(uint)(fVar14 <= 0.0) &
                     (uint)((3.0 - fVar14 * fVar7 * fVar7) * auVar10._4_4_ * fVar14);
      auVar2._0_4_ = ~-(uint)(fVar13 <= 0.0) &
                     (uint)((3.0 - fVar13 * fVar6 * fVar6) * auVar10._0_4_ * fVar13);
      auVar2._8_4_ = ~-(uint)(fVar15 <= 0.0) &
                     (uint)((3.0 - fVar15 * fVar11 * fVar11) * auVar10._8_4_ * fVar15);
      auVar2._12_4_ =
           ~-(uint)(fVar8 <= 0.0) & (uint)((3.0 - fVar8 * fVar12 * fVar12) * auVar10._12_4_ * fVar8)
      ;
      auVar17 = minps(auVar17,auVar2);
      uVar16 = auVar17._0_8_;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return uVar16;
}



// FUNCTION 1438af530 FUN_1438af530 body=53 status=ok
// SIG undefined FUN_1438af530(void)

undefined4 * FUN_1438af530(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 local_res8 [4];
  undefined4 local_res18 [4];
  
  local_res8[0] = 0xffffffff;
  local_res18[0] = param_3;
  puVar1 = (undefined4 *)FUN_1438af570(param_1 + 0x10,local_res18,local_res8);
  *param_2 = *puVar1;
  return param_2;
}



// FUNCTION 1438af570 FUN_1438af570 body=90 status=ok
// SIG undefined FUN_1438af570(void)

longlong FUN_1438af570(longlong *param_1,int *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  if (0 < (int)uVar2) {
    iVar3 = *param_2;
    lVar5 = *param_1;
    uVar6 = iVar3 * -0x61c8864f;
    uVar7 = (ulonglong)
            ((uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | iVar3 * -0x4f000000)
            & uVar2);
    lVar1 = uVar7 * 8;
    iVar4 = *(int *)(lVar5 + lVar1);
    while (iVar4 != -1) {
      if (*(int *)(lVar5 + lVar1) == iVar3) {
        return lVar5 + 4 + lVar1;
      }
      uVar7 = (ulonglong)((int)uVar7 + 1U & uVar2);
      lVar1 = uVar7 * 8;
      iVar4 = *(int *)(lVar5 + lVar1);
    }
  }
  return param_3;
}



// FUNCTION 1438af5d0 FUN_1438af5d0 body=16 status=ok
// SIG undefined FUN_1438af5d0(void)

bool FUN_1438af5d0(longlong param_1)

{
  return (*(uint *)(param_1 + 0x18) & 0x7fffffff) != 0;
}



// FUNCTION 1438af5e0 FUN_1438af5e0 body=212 status=ok
// SIG undefined FUN_1438af5e0(void)

void FUN_1438af5e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 local_18;
  undefined8 uStack_10;
  
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  *param_1 = param_2;
  local_18 = *param_4;
  uStack_10 = param_4[1];
  lVar8 = 0;
  puVar3 = (undefined4 *)param_4[4];
  puVar4 = (undefined4 *)param_4[2];
  iVar1 = *(int *)(param_4 + 5);
  uVar2 = *(undefined4 *)(param_4 + 3);
  param_1[0x10] = param_2;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x14) = *puVar3;
  uVar5 = puVar4[1];
  uVar6 = puVar4[2];
  uVar7 = puVar4[3];
  *(undefined4 *)(param_1 + 0x12) = *puVar4;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar5;
  *(undefined4 *)(param_1 + 0x13) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar7;
  *(int *)(param_1 + 0x11) = *(int *)(param_1 + 0x11) + 1;
  FUN_1438b0190(param_1,uVar2,&local_18,param_3);
  if (0 < (longlong)iVar1) {
    do {
      if (puVar3[lVar8] != -1) {
        FUN_1438b0110(param_1);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar1);
  }
  param_1[0x22] = param_1 + 2;
  param_1[0x23] = *param_1;
  return;
}



// FUNCTION 1438af6c0 FUN_1438af6c0 body=84 status=ok
// SIG undefined FUN_1438af6c0(void)

undefined4
FUN_1438af6c0(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 local_res8;
  
  iVar1 = FUN_1438af320();
  *(undefined4 *)(*param_1 + (longlong)iVar1 * 8) = *param_3;
  *(undefined4 *)((longlong)iVar1 * 8 + 4 + *param_1) = *param_4;
  return local_res8;
}



// FUNCTION 1438af720 FUN_1438af720 body=225 status=ok
// SIG undefined FUN_1438af720(void)

undefined8 FUN_1438af720(undefined8 *param_1)

{
  undefined8 uVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int local_res8 [2];
  
  if (*(int *)(param_1 + 0xf) == 0) {
    return 2;
  }
  uVar1 = *param_1;
  FUN_1438aeb10(local_res8,uVar1,uVar1,param_1 + 0xe,param_1 + 2,param_1 + 0x22,param_1 + 0x10,
                param_1 + 2,uVar1);
  *(int *)(param_1 + 0x26) = local_res8[0];
  iVar4 = 0;
  lVar3 = 0;
  if (0 < (longlong)*(int *)(param_1 + 0x11)) {
    piVar2 = (int *)(param_1 + 0x14);
    do {
      if (*piVar2 == local_res8[0]) {
        if (iVar4 != -1) {
          return 1;
        }
        break;
      }
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 1;
      piVar2 = piVar2 + 8;
    } while (lVar3 < *(int *)(param_1 + 0x11));
  }
  if ((*(int *)(param_1 + 0xf) < *(int *)((longlong)param_1 + 0x7c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < *(int *)(param_1 + 5))) {
    uVar1 = 2;
    if (*(int *)(param_1 + 0xf) != 0) {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}



// FUNCTION 1438af810 FUN_1438af810 body=459 status=ok
// SIG undefined FUN_1438af810(void)

void FUN_1438af810(longlong param_1,undefined8 param_2,uint *param_3)

{
  ushort *puVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  uint uVar18;
  float fVar19;
  
  lVar3 = *(longlong *)(param_1 + 0x50);
  uVar5 = *param_3;
  lVar4 = *(longlong *)(lVar3 + 0x18);
  if ((int)uVar5 < *(int *)(lVar4 + 0x30)) {
    puVar6 = (undefined8 *)(*(longlong *)(lVar4 + 0x28) + (longlong)(int)uVar5 * 8);
  }
  else {
    puVar6 = (undefined8 *)
             (*(longlong *)(lVar4 + 0x60) + (longlong)(int)(uVar5 - *(int *)(lVar4 + 0x30)) * 8);
  }
  puVar1 = (ushort *)(param_1 + 0x88);
  *(undefined8 *)puVar1 = *puVar6;
  uVar5 = *(uint *)(param_1 + 0x8c);
  if (((*(byte *)(param_1 + 0x8a) & 0x40) == 0) && (uVar5 != 0xffffffff)) {
    uVar5 = *(int *)(*(longlong *)(lVar3 + 0x18) + 0x94) << 0x16 | uVar5 & 0x3fffff;
  }
  *(uint *)(param_1 + 0x8c) = uVar5;
  *(uint *)(param_1 + 0x130) = *(int *)(param_1 + 0x60) << 0x16 | *param_3;
  *(ushort **)(param_1 + 0x138) = puVar1;
  if ((*(byte *)(param_1 + 0x8a) & 0x10) != 0) {
    *(ulonglong *)(param_1 + 0x140) =
         *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x38) + 0x38) +
         (ulonglong)*puVar1 * 0x18;
    lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x38);
    *(longlong *)(param_1 + 0x148) =
         *(longlong *)(lVar4 + 0x48) + (longlong)(int)(*(int *)(lVar4 + 0xbc) * (uint)*puVar1) * 4;
    puVar1 = *(ushort **)(param_1 + 0x140);
    lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x38);
    bVar2 = *(byte *)(lVar3 + 0x30);
    fVar14 = (float)*puVar1 * *(float *)(lVar4 + 0x90) + *(float *)(lVar4 + 0xa0);
    fVar15 = (float)puVar1[1] * *(float *)(lVar4 + 0x94) + *(float *)(lVar4 + 0xa4);
    fVar17 = (float)puVar1[2] * *(float *)(lVar4 + 0x98) + *(float *)(lVar4 + 0xa8);
    fVar19 = *(float *)(lVar4 + 0x9c) * 0.0 + *(float *)(lVar4 + 0xac);
    if (bVar2 != 0) {
      uVar5 = (uint)bVar2;
      uVar8 = -(uint)(0x16a8300 << uVar5 < 0);
      uVar9 = -(uint)(0x502ab000 << uVar5 < 0);
      uVar10 = -(uint)(0xa2a8c00 << uVar5 < 0);
      uVar11 = -(uint)(0xa154c00 << uVar5 < 0);
      uVar12 = -(uint)(0x1554300 << uVar5 < 0);
      uVar13 = -(uint)(0x50157000 << uVar5 < 0);
      uVar5 = (uint)fVar14 & uVar10;
      uVar16 = (uint)fVar14 & uVar12;
      uVar18 = (uint)fVar15 & uVar13;
      uVar7 = (ulonglong)bVar2;
      fVar14 = (float)((0xae71e0U >> uVar7) << 0x1f ^
                      (~uVar11 & ((uint)fVar15 & uVar8 | ~uVar8 & (uint)fVar14) |
                      (uint)fVar17 & uVar11));
      fVar15 = (float)((0xb9e306U >> uVar7) << 0x1f ^
                      (~uVar12 & ((uint)fVar17 & uVar9 | ~uVar9 & (uint)fVar15) | uVar16));
      fVar17 = (float)((0xeb903cU >> uVar7) << 0x1f ^
                      (~uVar13 & (uVar5 | ~uVar10 & (uint)fVar17) | uVar18));
      fVar19 = (float)((0U >> uVar7) << 0x1f ^ (uint)fVar19);
    }
    fVar14 = fVar14 + *(float *)(lVar3 + 0x40);
    fVar15 = fVar15 + *(float *)(lVar3 + 0x44);
    fVar17 = fVar17 + *(float *)(lVar3 + 0x48);
    fVar19 = fVar19 + *(float *)(lVar3 + 0x4c);
    *(float *)(param_1 + 0x150) = fVar14;
    *(float *)(param_1 + 0x154) = fVar15;
    *(float *)(param_1 + 0x158) = fVar17;
    *(float *)(param_1 + 0x15c) = fVar19;
    *(float *)(param_1 + 0x160) = fVar14;
    *(float *)(param_1 + 0x164) = fVar15;
    *(float *)(param_1 + 0x168) = fVar17;
    *(float *)(param_1 + 0x16c) = fVar19;
    return;
  }
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  return;
}



// FUNCTION 1438af9e0 FUN_1438af9e0 body=356 status=ok
// SIG undefined FUN_1438af9e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438af9e0(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar7 = param_2 >> 0x16;
  if (*(uint *)(param_1 + 0xc) != uVar7) {
    param_1[10] = *(longlong *)((ulonglong)uVar7 * 0x100 + 8 + *(longlong *)(*param_1 + 0x38));
    *(uint *)(param_1 + 0xc) = uVar7;
  }
  plVar1 = param_1 + 0xd;
  uVar8 = (ulonglong)(param_2 & 0x3fffff);
  lVar4 = *(longlong *)(*(longlong *)(param_1[10] + 0x18) + 0x18);
  lVar2 = lVar4 + uVar8 * 0x18;
  *(undefined2 *)plVar1 = *(undefined2 *)(lVar4 + uVar8 * 0x18);
  *(undefined2 *)((longlong)param_1 + 0x6a) = *(undefined2 *)(lVar2 + 2);
  *(undefined2 *)((longlong)param_1 + 0x6c) = *(undefined2 *)(lVar2 + 4);
  *(undefined2 *)((longlong)param_1 + 0x6e) = *(undefined2 *)(lVar2 + 6);
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(lVar2 + 8);
  *(undefined2 *)((longlong)param_1 + 0x72) = *(undefined2 *)(lVar2 + 10);
  *(undefined2 *)((longlong)param_1 + 0x74) = *(undefined2 *)(lVar2 + 0xc);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(lVar2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)(lVar2 + 0x14);
  lVar2 = *(longlong *)(param_1[10] + 0x18);
  if ((*(int *)(lVar2 + 0x48) == 0) ||
     (iVar3 = *(int *)(*(longlong *)(lVar2 + 0x40) + uVar8 * 4), iVar3 == -1)) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  }
  else {
    param_1[0x10] = *(longlong *)(*(longlong *)(lVar2 + 0x50) + (longlong)iVar3 * 8);
  }
  *(uint *)(param_1 + 0x16) = param_2;
  param_1[0x17] = (longlong)plVar1;
  FUN_142fbd3f0(param_1[10],plVar1,param_1 + 0x1a);
  if (param_2 == *(uint *)(param_1 + 6)) {
    fVar9 = *(float *)(param_1 + 4);
    fVar10 = *(float *)((longlong)param_1 + 0x24);
    fVar11 = *(float *)(param_1 + 5);
    fVar12 = *(float *)((longlong)param_1 + 0x2c);
  }
  else {
    fVar9 = (*(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x1a)) * _DAT_1467f07e0;
    fVar10 = (*(float *)((longlong)param_1 + 0xe4) + *(float *)((longlong)param_1 + 0xd4)) *
             fRam00000001467f07e4;
    fVar11 = (*(float *)(param_1 + 0x1d) + *(float *)(param_1 + 0x1b)) * fRam00000001467f07e8;
    fVar12 = (*(float *)((longlong)param_1 + 0xec) + *(float *)((longlong)param_1 + 0xdc)) *
             fRam00000001467f07ec;
  }
  *(float *)(param_1 + 0x18) = fVar9;
  *(float *)((longlong)param_1 + 0xc4) = fVar10;
  *(float *)(param_1 + 0x19) = fVar11;
  *(float *)((longlong)param_1 + 0xcc) = fVar12;
  piVar5 = (int *)param_1[9];
  uVar6 = FUN_143843a50(piVar5);
  *(undefined8 *)(piVar5 + 0x12) = uVar6;
  piVar5[0x10] = (int)(short)((longlong)(ulonglong)(uint)((int)uVar6 - *piVar5) >> 4);
  *(undefined8 *)(piVar5 + 0x14) = uVar6;
  return;
}



// FUNCTION 1438afb50 FUN_1438afb50 body=255 status=ok
// SIG undefined FUN_1438afb50(void)

void FUN_1438afb50(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  undefined4 *puVar8;
  uint local_res8 [2];
  
  iVar3 = FUN_1438af5d0(param_1 + 0x110);
  if ((iVar3 != 0) && (1 < (int)param_2[1])) {
    iVar3 = (int)param_2[1] + -1;
    uVar4 = FUN_143703a50();
    uVar5 = *(uint *)((longlong)param_3 + 0xc) & 0x3fffffff;
    if ((int)uVar5 < iVar3) {
      iVar2 = uVar5 * 2;
      iVar7 = iVar3;
      if (iVar3 < iVar2) {
        iVar7 = iVar2;
      }
      FUN_14370c310(uVar4,param_3,iVar7,4);
    }
    iVar7 = iVar3 - (int)param_3[1];
    if (0 < iVar7) {
      puVar8 = (undefined4 *)(*param_3 + (longlong)(int)param_3[1] * 4);
      for (lVar6 = (longlong)iVar7; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar8 = 0xffffffff;
        puVar8 = puVar8 + 1;
      }
    }
    lVar6 = 0;
    *(int *)(param_3 + 1) = iVar3;
    if (0 < iVar3) {
      do {
        lVar1 = *param_2;
        FUN_1438af530(param_1 + 0x110,local_res8,*(undefined4 *)(lVar1 + 4 + lVar6 * 4));
        if (local_res8[0] != 0xffffffff) {
          *(uint *)(*param_3 + lVar6 * 4) =
               *(uint *)(lVar1 + lVar6 * 4) & 0xffc00000 | local_res8[0];
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar3);
    }
  }
  return;
}



// FUNCTION 1438afc50 FUN_1438afc50 body=80 status=ok
// SIG undefined FUN_1438afc50(void)

undefined4 * FUN_1438afc50(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1438af3c0(param_1,param_3);
  if ((int)uVar1 <= *(int *)(param_1 + 0xc)) {
    FUN_1438afca0(param_1,uVar1);
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 1438afca0 FUN_1438afca0 body=238 status=ok
// SIG undefined FUN_1438afca0(void)

void FUN_1438afca0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  *(undefined4 *)(*param_1 + (param_2 & 0xffffffff) * 8) = 0xffffffff;
  uVar5 = *(uint *)((longlong)param_1 + 0xc);
  lVar3 = *param_1;
  uVar8 = uVar5 + (int)param_2 & uVar5;
  uVar7 = (ulonglong)uVar8;
  iVar2 = *(int *)(lVar3 + uVar7 * 8);
  while (iVar2 != -1) {
    uVar8 = (int)uVar7 + uVar5 & uVar5;
    uVar7 = (ulonglong)uVar8;
    iVar2 = *(int *)(lVar3 + uVar7 * 8);
  }
  uVar7 = (ulonglong)((int)param_2 + 1U & uVar5);
  uVar8 = uVar8 + 1 & uVar5;
  lVar1 = uVar7 * 8;
  iVar2 = *(int *)(lVar3 + uVar7 * 8);
  while (iVar2 != -1) {
    lVar3 = *param_1;
    uVar4 = *(int *)(lVar3 + lVar1) * -0x61c8864f;
    uVar5 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
            *(int *)(lVar3 + lVar1) * -0x4f000000) & uVar5;
    uVar6 = (uint)uVar7;
    uVar4 = (uint)param_2;
    if ((((uVar6 < uVar8) || (uVar5 <= uVar4)) &&
        ((uVar4 <= uVar6 || ((uVar5 <= uVar4 && (uVar6 < uVar5)))))) &&
       ((uVar5 <= uVar4 || (uVar8 <= uVar5)))) {
      FGenericPlatformString::Memcpy(lVar3 + (param_2 & 0xffffffff) * 8,lVar3 + lVar1,8);
      *(undefined4 *)(lVar1 + *param_1) = 0xffffffff;
      param_2 = uVar7;
    }
    uVar5 = *(uint *)((longlong)param_1 + 0xc);
    uVar7 = (ulonglong)(uVar6 + 1 & uVar5);
    lVar1 = uVar7 * 8;
    iVar2 = *(int *)(lVar1 + *param_1);
  }
  return;
}



// FUNCTION 1438afd90 FUN_1438afd90 body=311 status=ok
// SIG undefined FUN_1438afd90(void)

undefined4 * FUN_1438afd90(longlong *param_1,undefined4 *param_2,longlong *param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined1 local_res18 [8];
  int local_res20;
  
  lVar2 = param_1[1];
  lVar1 = *param_1;
  iVar3 = 8;
  if (8 < param_4) {
    iVar3 = param_4;
  }
  iVar7 = *(int *)((longlong)param_1 + 0xc) + 1;
  local_res20 = iVar7;
  lVar4 = (**(code **)(*param_3 + 8))(param_3,iVar3 * 8);
  if (lVar4 != 0) {
    lVar5 = 0;
    *param_1 = lVar4;
    if (0 < iVar3) {
      do {
        *(undefined4 *)(*param_1 + lVar5 * 8) = 0xffffffff;
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar3);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    lVar4 = 0;
    *(int *)((longlong)param_1 + 0xc) = iVar3 + -1;
    iVar6 = 0;
    iVar3 = iVar7;
    if (0 < iVar7) {
      do {
        if (*(int *)(lVar1 + lVar4 * 8) != -1) {
          lVar5 = lVar1 + (longlong)iVar6 * 8;
          iVar3 = FUN_1438af320(param_1,param_3,lVar5,local_res18);
          FGenericPlatformString::Memcpy(*param_1 + (longlong)iVar3 * 8,lVar5,8);
        }
        iVar6 = iVar6 + 1;
        lVar4 = lVar4 + 1;
        iVar3 = local_res20;
      } while (lVar4 < iVar7);
    }
    if (-1 < (int)lVar2) {
      (**(code **)(*param_3 + 0x10))(param_3,lVar1,iVar3 * 8);
    }
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 1438afed0 FUN_1438afed0 body=573 status=ok
// SIG undefined FUN_1438afed0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438afed0(longlong param_1,uint param_2)

{
  undefined2 *puVar1;
  byte bVar2;
  longlong lVar3;
  float *pfVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  uint uVar14;
  uint uVar15;
  undefined1 auVar13 [16];
  uint uVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  uint uVar23;
  float fVar24;
  
  puVar1 = (undefined2 *)(param_1 + 0x90);
  lVar7 = (longlong)(int)(param_2 & 0x3fffff);
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x18) + 0x18);
  *puVar1 = *(undefined2 *)(lVar3 + lVar7 * 0x18);
  *(undefined2 *)(param_1 + 0x92) = *(undefined2 *)(lVar3 + 2 + lVar7 * 0x18);
  *(undefined2 *)(param_1 + 0x94) = *(undefined2 *)(lVar3 + 4 + lVar7 * 0x18);
  *(undefined2 *)(param_1 + 0x96) = *(undefined2 *)(lVar3 + 6 + lVar7 * 0x18);
  *(undefined2 *)(param_1 + 0x98) = *(undefined2 *)(lVar3 + 8 + lVar7 * 0x18);
  *(undefined2 *)(param_1 + 0x9a) = *(undefined2 *)(lVar3 + 10 + lVar7 * 0x18);
  *(undefined2 *)(param_1 + 0x9c) = *(undefined2 *)(lVar3 + 0xc + lVar7 * 0x18);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(lVar3 + 0x10 + lVar7 * 0x18);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(lVar3 + 0x14 + lVar7 * 0x18);
  FUN_142fbd3f0(*(undefined8 *)(param_1 + 0x58),puVar1,param_1 + 0x110);
  if (param_2 == **(uint **)(param_1 + 0x40)) {
    pfVar4 = *(float **)(param_1 + 0x38);
    fVar19 = *pfVar4;
    fVar20 = pfVar4[1];
    fVar22 = pfVar4[2];
    fVar24 = pfVar4[3];
  }
  else {
    fVar19 = (*(float *)(param_1 + 0x120) + *(float *)(param_1 + 0x110)) * _DAT_1467f07e0;
    fVar20 = (*(float *)(param_1 + 0x124) + *(float *)(param_1 + 0x114)) * fRam00000001467f07e4;
    fVar22 = (*(float *)(param_1 + 0x128) + *(float *)(param_1 + 0x118)) * fRam00000001467f07e8;
    fVar24 = (*(float *)(param_1 + 300) + *(float *)(param_1 + 0x11c)) * fRam00000001467f07ec;
  }
  lVar3 = *(longlong *)(param_1 + 0x140);
  *(float *)(param_1 + 0x100) = fVar19;
  *(float *)(param_1 + 0x104) = fVar20;
  *(float *)(param_1 + 0x108) = fVar22;
  *(float *)(param_1 + 0x10c) = fVar24;
  *(uint *)(param_1 + 0xf0) = param_2;
  *(undefined2 **)(param_1 + 0xf8) = puVar1;
  if (lVar3 != 0) {
    lVar7 = *(longlong *)(param_1 + 0x58);
    lVar5 = *(longlong *)(*(longlong *)(lVar7 + 0x18) + 0x38);
    bVar2 = *(byte *)(lVar7 + 0x30);
    fVar19 = (float)*(ushort *)(lVar3 + 8) * *(float *)(lVar5 + 0x90) + *(float *)(lVar5 + 0xa0);
    fVar20 = (float)*(ushort *)(lVar3 + 10) * *(float *)(lVar5 + 0x94) + *(float *)(lVar5 + 0xa4);
    fVar22 = (float)*(ushort *)(lVar3 + 0xc) * *(float *)(lVar5 + 0x98) + *(float *)(lVar5 + 0xa8);
    fVar24 = *(float *)(lVar5 + 0x9c) * 0.0 + *(float *)(lVar5 + 0xac);
    if (bVar2 != 0) {
      uVar9 = (uint)bVar2;
      uVar12 = -(uint)(0x16a8300 << uVar9 < 0);
      uVar14 = -(uint)(0x502ab000 << uVar9 < 0);
      uVar15 = -(uint)(0xa2a8c00 << uVar9 < 0);
      uVar16 = -(uint)(0xa154c00 << uVar9 < 0);
      uVar17 = -(uint)(0x1554300 << uVar9 < 0);
      uVar18 = -(uint)(0x50157000 << uVar9 < 0);
      uVar9 = (uint)fVar19 & uVar15;
      uVar21 = (uint)fVar19 & uVar17;
      uVar23 = (uint)fVar20 & uVar18;
      uVar8 = (ulonglong)bVar2;
      fVar19 = (float)((0xae71e0U >> uVar8) << 0x1f ^
                      (~uVar16 & ((uint)fVar20 & uVar12 | ~uVar12 & (uint)fVar19) |
                      (uint)fVar22 & uVar16));
      fVar20 = (float)((0xb9e306U >> uVar8) << 0x1f ^
                      (~uVar17 & ((uint)fVar22 & uVar14 | ~uVar14 & (uint)fVar20) | uVar21));
      fVar22 = (float)((0xeb903cU >> uVar8) << 0x1f ^
                      (~uVar18 & (uVar9 | ~uVar15 & (uint)fVar22) | uVar23));
      fVar24 = (float)((0U >> uVar8) << 0x1f ^ (uint)fVar24);
    }
    fVar19 = fVar19 + *(float *)(lVar7 + 0x40);
    fVar20 = fVar20 + *(float *)(lVar7 + 0x44);
    fVar22 = fVar22 + *(float *)(lVar7 + 0x48);
    fVar24 = fVar24 + *(float *)(lVar7 + 0x4c);
    *(float *)(param_1 + 0x170) = fVar19;
    *(float *)(param_1 + 0x174) = fVar20;
    *(float *)(param_1 + 0x178) = fVar22;
    *(float *)(param_1 + 0x17c) = fVar24;
    *(float *)(param_1 + 0x180) = fVar19;
    *(float *)(param_1 + 0x184) = fVar20;
    *(float *)(param_1 + 0x188) = fVar22;
    *(float *)(param_1 + 0x18c) = fVar24;
    return;
  }
  auVar10 = maxps(*(undefined1 (*) [16])(param_1 + 0xd0),*(undefined1 (*) [16])(param_1 + 0x110));
  auVar13 = minps(*(undefined1 (*) [16])(param_1 + 0xe0),*(undefined1 (*) [16])(param_1 + 0x120));
  auVar11 = maxps(auVar10,auVar13);
  auVar10 = minps(auVar10,auVar13);
  *(undefined1 (*) [16])(param_1 + 0x160) = auVar11;
  *(undefined1 (*) [16])(param_1 + 0x150) = auVar10;
  uVar6 = uRam00000001467f08d8;
  *(undefined8 *)(param_1 + 0x170) = _DAT_1467f08d0;
  *(undefined8 *)(param_1 + 0x178) = uVar6;
  *(uint *)(param_1 + 0x180) = *(uint *)(param_1 + 0x170) ^ 0x80000000;
  *(uint *)(param_1 + 0x184) = *(uint *)(param_1 + 0x174) ^ 0x80000000;
  *(uint *)(param_1 + 0x188) = *(uint *)(param_1 + 0x178) ^ 0x80000000;
  *(uint *)(param_1 + 0x18c) = *(uint *)(param_1 + 0x17c) ^ 0x80000000;
  return;
}



// FUNCTION 1438b0110 FUN_1438b0110 body=30 status=ok
// SIG undefined FUN_1438b0110(void)

void FUN_1438b0110(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_143843a50(param_1 + 0x10);
  *(undefined4 *)(lVar1 + 4) = 0;
  *(ushort *)(lVar1 + 0xe) = *(ushort *)(lVar1 + 0xe) | 8;
  return;
}



// FUNCTION 1438b0130 FUN_1438b0130 body=81 status=ok
// SIG undefined FUN_1438b0130(void)

void FUN_1438b0130(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 local_res8 [2];
  undefined4 local_res10;
  
  *(undefined2 *)(*(longlong *)(*param_1 + 0x48) + 0xc) = *(undefined2 *)(*param_1 + 0x40);
  local_res10 = param_2;
  if ((param_1[1] != 0) && ((*(byte *)(param_1[1] + 0x8a) & 0x10) == 0)) {
    FUN_1438b0340(param_1,param_2);
    return;
  }
  local_res8[0] = *param_4;
  FUN_1438b0300(param_1,param_2,local_res8);
  return;
}



// FUNCTION 1438b0190 FUN_1438b0190 body=358 status=ok
// SIG undefined FUN_1438b0190(void)

void FUN_1438b0190(longlong *param_1,ulonglong param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  float *pfVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  float fVar15;
  
  uVar11 = param_2 >> 0x16 & 0x3ff;
  plVar4 = (longlong *)*param_1;
  iVar10 = (int)uVar11;
  uVar14 = param_2;
  if (*(int *)((longlong)plVar4 + 100) != iVar10) {
    plVar4[0xb] = *(longlong *)(uVar11 * 0x100 + 8 + *(longlong *)(*plVar4 + 0x38));
    *(int *)((longlong)plVar4 + 100) = iVar10;
    uVar14 = param_2 & 0xffffffff;
  }
  FUN_1438afed0(*param_1,uVar14);
  uVar3 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  lVar5 = *param_1;
  *(undefined4 *)(lVar5 + 0x100) = *param_3;
  *(undefined4 *)(lVar5 + 0x104) = uVar3;
  *(undefined4 *)(lVar5 + 0x108) = uVar6;
  *(undefined4 *)(lVar5 + 0x10c) = uVar7;
  puVar8 = (undefined4 *)FUN_143843a50(param_1 + 2,param_2 & 0xffffffff);
  *puVar8 = 0;
  fVar15 = (float)FUN_1438af410(param_1 + 0x10,param_2 & 0xffffffff);
  puVar8[1] = fVar15;
  *(ushort *)((longlong)puVar8 + 0xe) = *(ushort *)((longlong)puVar8 + 0xe) | 5;
  if (fVar15 < *(float *)((longlong)param_1 + 0x44)) {
    *(float *)((longlong)param_1 + 0x44) = fVar15;
    *(int *)(param_1 + 8) = (int)param_2;
  }
  if ((float)puVar8[1] <= 3.40282e+38 && (float)puVar8[1] != 3.40282e+38) {
    pfVar9 = (float *)FUN_143843b40(param_1 + 2,param_2 & 0xffffffff);
    uVar13 = *(uint *)(param_1 + 0xf);
    uVar14 = (ulonglong)(int)uVar13;
    lVar5 = param_1[0xe];
    fVar15 = pfVar9[1];
    fVar1 = *(float *)((longlong)param_1 + 0x4c);
    fVar2 = *pfVar9;
    *(uint *)(param_1 + 0xf) = uVar13 + 1;
    *(int *)(lVar5 + uVar14 * 8) = (int)param_2;
    *(float *)(lVar5 + 4 + uVar14 * 8) = fVar15 * fVar1 + fVar2;
    uVar3 = *(undefined4 *)(param_1[0xe] + uVar14 * 8);
    iVar10 = *(int *)(param_1[0xe] + 4 + uVar14 * 8);
    while (0 < (int)uVar13) {
      uVar12 = (int)(uVar13 - 1) / 2;
      uVar13 = (uint)uVar14;
      lVar5 = param_1[0xe];
      if (*(int *)(lVar5 + 4 + (longlong)(int)uVar12 * 8) <= iVar10) break;
      uVar14 = (ulonglong)uVar12;
      *(undefined8 *)(lVar5 + (longlong)(int)uVar13 * 8) =
           *(undefined8 *)(lVar5 + (longlong)(int)uVar12 * 8);
      uVar13 = uVar12;
    }
    *(undefined4 *)(param_1[0xe] + (longlong)(int)uVar13 * 8) = uVar3;
    *(int *)(param_1[0xe] + 4 + (longlong)(int)uVar13 * 8) = iVar10;
  }
  return;
}



// FUNCTION 1438b0300 FUN_1438b0300 body=56 status=ok
// SIG undefined FUN_1438b0300(void)

void FUN_1438b0300(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  uVar1 = FUN_143703a50();
  FUN_1438af6c0(param_1 + 0x10,uVar1,local_res10,param_3);
  return;
}



// FUNCTION 1438b0340 FUN_1438b0340 body=32 status=ok
// SIG undefined FUN_1438b0340(void)

void FUN_1438b0340(longlong param_1,undefined4 param_2)

{
  undefined1 local_res8 [8];
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  FUN_1438afc50(param_1 + 0x10,local_res8,local_res10);
  return;
}



// FUNCTION 1438b0360 FUN_1438b0360 body=3684 status=ok
// SIG undefined FUN_1438b0360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1438b0360(longlong param_1,longlong *param_2,longlong *param_3,uint param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  undefined1 (*pauVar1) [16];
  int *piVar2;
  ushort *puVar3;
  byte bVar4;
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  bool bVar17;
  char cVar18;
  uint uVar19;
  ulonglong uVar20;
  LPVOID pvVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint *puVar24;
  longlong *plVar25;
  undefined8 uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  longlong lVar32;
  longlong lVar33;
  undefined1 (*pauVar34) [16];
  undefined4 *puVar35;
  int iVar36;
  longlong lVar37;
  int iVar38;
  int iVar39;
  undefined1 (*pauVar40) [16];
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  uint uVar49;
  float fVar50;
  uint uVar54;
  float fVar55;
  uint uVar56;
  uint uVar57;
  float fVar58;
  uint uVar59;
  float fVar60;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  uint uVar61;
  uint uVar62;
  uint uVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  longlong *local_res10;
  longlong *local_res18;
  uint local_res20 [2];
  uint *local_168;
  undefined4 *local_160;
  undefined1 (*local_158) [16];
  undefined1 *local_150;
  undefined1 (*local_148) [16];
  uint local_130;
  undefined1 local_128 [16];
  uint local_118;
  uint local_114;
  longlong local_110;
  undefined8 local_108;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined8 local_e8;
  float fStack_e0;
  float fStack_dc;
  longlong local_d8 [2];
  int local_c8;
  int local_c4;
  ulonglong uVar31;
  
  uVar22 = 0;
  uVar19 = *(uint *)(param_3 + 1);
  iVar41 = (int)param_2[1] + -1;
  uVar27 = 0;
  if (uVar19 != 0) {
    uVar28 = uVar27;
    if ((0 < (int)uVar19) && (7 < uVar19)) {
      uVar29 = 0;
      uVar30 = 0;
      uVar49 = 0;
      uVar54 = 0;
      uVar27 = uVar19 & 0x80000007;
      if ((int)uVar27 < 0) {
        uVar27 = (uVar27 - 1 | 0xfffffff8) + 1;
      }
      uVar20 = uVar22;
      uVar31 = uVar22;
      uVar57 = uVar29;
      uVar61 = uVar30;
      uVar62 = uVar49;
      uVar63 = uVar54;
      do {
        piVar2 = (int *)(*param_3 + uVar20 * 4);
        uVar28 = (int)uVar31 + 8;
        uVar31 = (ulonglong)uVar28;
        uVar29 = ~-(uint)(*piVar2 == -1) & uVar29 + 1 | -(uint)(*piVar2 == -1) & uVar29;
        uVar30 = ~-(uint)(piVar2[1] == -1) & uVar30 + 1 | -(uint)(piVar2[1] == -1) & uVar30;
        uVar49 = ~-(uint)(piVar2[2] == -1) & uVar49 + 1 | -(uint)(piVar2[2] == -1) & uVar49;
        uVar54 = ~-(uint)(piVar2[3] == -1) & uVar54 + 1 | -(uint)(piVar2[3] == -1) & uVar54;
        piVar2 = (int *)(*param_3 + 0x10 + uVar20 * 4);
        uVar20 = uVar20 + 8;
        uVar57 = ~-(uint)(*piVar2 == -1) & uVar57 + 1 | uVar57 & -(uint)(*piVar2 == -1);
        uVar61 = ~-(uint)(piVar2[1] == -1) & uVar61 + 1 | uVar61 & -(uint)(piVar2[1] == -1);
        uVar62 = ~-(uint)(piVar2[2] == -1) & uVar62 + 1 | uVar62 & -(uint)(piVar2[2] == -1);
        uVar63 = ~-(uint)(piVar2[3] == -1) & uVar63 + 1 | uVar63 & -(uint)(piVar2[3] == -1);
      } while ((longlong)uVar20 < (longlong)(int)(uVar19 - uVar27));
      uVar27 = uVar29 + uVar57 + uVar49 + uVar62 + uVar30 + uVar61 + uVar54 + uVar63;
    }
    lVar32 = (longlong)(int)uVar28;
    if (lVar32 < (int)uVar19) {
      do {
        lVar23 = lVar32 * 4;
        lVar32 = lVar32 + 1;
        uVar28 = uVar27 + 1;
        if (*(int *)(*param_3 + lVar23) == -1) {
          uVar28 = uVar27;
        }
        uVar27 = uVar28;
      } while (lVar32 < (int)uVar19);
    }
  }
  uVar19 = iVar41 + uVar27;
  uVar28 = uVar19 + 2;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20[0] = param_4;
  local_118 = uVar19;
  if (uVar28 == 0) {
    local_148 = (undefined1 (*) [16])0x0;
  }
  else {
    pvVar21 = TlsGetValue(DAT_146b7bf70);
    if (pvVar21 == (LPVOID)0x0) {
      pvVar21 = DAT_146b7bf68;
    }
    uVar29 = uVar28 * 0x10 + 0x7f & 0xffffff80;
    local_148 = *(undefined1 (**) [16])((longlong)pvVar21 + 0x18);
    if ((*(int *)((longlong)pvVar21 + 0x10) < (int)uVar29) ||
       (*(undefined1 **)((longlong)pvVar21 + 0x20) < *local_148 + (int)uVar29)) {
      local_148 = (undefined1 (*) [16])FUN_1437138c0(pvVar21);
    }
    else {
      *(undefined1 **)((longlong)pvVar21 + 0x18) = *local_148 + (int)uVar29;
    }
  }
  uVar29 = uVar28 | 0x80000000;
  if (uVar28 == 0) {
    local_168 = (uint *)0x0;
  }
  else {
    pvVar21 = TlsGetValue(DAT_146b7bf70);
    if (pvVar21 == (LPVOID)0x0) {
      pvVar21 = DAT_146b7bf68;
    }
    uVar30 = uVar28 * 4 + 0x7f & 0xffffff80;
    local_168 = *(uint **)((longlong)pvVar21 + 0x18);
    uVar20 = (longlong)(int)uVar30 + (longlong)local_168;
    if ((*(int *)((longlong)pvVar21 + 0x10) < (int)uVar30) ||
       (*(ulonglong *)((longlong)pvVar21 + 0x20) < uVar20)) {
      local_168 = (uint *)FUN_1437138c0(pvVar21);
    }
    else {
      *(ulonglong *)((longlong)pvVar21 + 0x18) = uVar20;
    }
  }
  if (uVar19 == 0) {
    local_158 = (undefined1 (*) [16])0x0;
  }
  else {
    pvVar21 = TlsGetValue(DAT_146b7bf70);
    if (pvVar21 == (LPVOID)0x0) {
      pvVar21 = DAT_146b7bf68;
    }
    uVar30 = uVar19 * 0x20 + 0x7f & 0xffffff80;
    local_158 = *(undefined1 (**) [16])((longlong)pvVar21 + 0x18);
    if ((*(int *)((longlong)pvVar21 + 0x10) < (int)uVar30) ||
       (*(undefined1 **)((longlong)pvVar21 + 0x20) < *local_158 + (int)uVar30)) {
      local_158 = (undefined1 (*) [16])FUN_1437138c0();
    }
    else {
      *(undefined1 **)((longlong)pvVar21 + 0x18) = *local_158 + (int)uVar30;
    }
  }
  local_114 = uVar19 | 0x80000000;
  if (uVar28 == 0) {
    local_150 = (undefined1 *)0x0;
  }
  else {
    pvVar21 = TlsGetValue(DAT_146b7bf70);
    if (pvVar21 == (LPVOID)0x0) {
      pvVar21 = DAT_146b7bf68;
    }
    uVar30 = uVar19 + 0x81 & 0xffffff80;
    local_150 = *(undefined1 **)((longlong)pvVar21 + 0x18);
    if ((*(int *)((longlong)pvVar21 + 0x10) < (int)uVar30) ||
       (*(undefined1 **)((longlong)pvVar21 + 0x20) < local_150 + (int)uVar30)) {
      local_150 = (undefined1 *)FUN_1437138c0(pvVar21);
    }
    else {
      *(undefined1 **)((longlong)pvVar21 + 0x18) = local_150 + (int)uVar30;
    }
  }
  if (uVar28 == 0) {
    local_160 = (undefined4 *)0x0;
  }
  else {
    pvVar21 = TlsGetValue(DAT_146b7bf70);
    if (pvVar21 == (LPVOID)0x0) {
      pvVar21 = DAT_146b7bf68;
    }
    uVar30 = uVar28 * 4 + 0x7f & 0xffffff80;
    local_160 = *(undefined4 **)((longlong)pvVar21 + 0x18);
    uVar20 = (longlong)(int)uVar30 + (longlong)local_160;
    if ((*(int *)((longlong)pvVar21 + 0x10) < (int)uVar30) ||
       (*(ulonglong *)((longlong)pvVar21 + 0x20) < uVar20)) {
      local_160 = (undefined4 *)FUN_1437138c0(pvVar21);
    }
    else {
      *(ulonglong *)((longlong)pvVar21 + 0x18) = uVar20;
    }
  }
  iVar39 = 1;
  uVar26 = param_5[1];
  *(undefined8 *)*local_148 = *param_5;
  *(undefined8 *)(*local_148 + 8) = uVar26;
  *local_168 = local_res20[0] >> 0x16;
  iVar43 = 1;
  *local_150 = 0;
  *local_160 = 0;
  iVar42 = 1;
  local_130 = *(uint *)*local_res10 >> 0x16;
  lVar32 = *(longlong *)((ulonglong)local_130 * 0x100 + 8 + *(longlong *)(param_1 + 0x38));
  lVar23 = *(longlong *)(*(longlong *)(lVar32 + 0x18) + 0x38);
  auVar47 = *(undefined1 (*) [16])
             (*(longlong *)(*(longlong *)(lVar32 + 0x18) + 0x18) +
             (ulonglong)(*(uint *)*local_res10 & 0x3fffff) * 0x18);
  auVar5._10_2_ = 0;
  auVar5._0_10_ = auVar47._0_10_;
  auVar5._12_2_ = auVar47._6_2_;
  auVar7._8_2_ = auVar47._4_2_;
  auVar7._0_8_ = auVar47._0_8_;
  auVar7._10_4_ = auVar5._10_4_;
  auVar15._6_8_ = 0;
  auVar15._0_6_ = auVar7._8_6_;
  auVar9._4_2_ = auVar47._2_2_;
  auVar9._0_4_ = auVar47._0_4_;
  auVar9._6_8_ = SUB148(auVar15 << 0x40,6);
  auVar66 = *(undefined1 (*) [16])(lVar23 + 0xa0);
  fStack_100 = *(float *)(lVar23 + 0x98) *
               ((float)(auVar7._8_4_ >> 0x10) * 65536.0 + (float)(auVar7._8_4_ & 0xffff)) +
               auVar66._8_4_;
  fStack_fc = *(float *)(lVar23 + 0x9c) * ((float)(auVar5._10_4_ >> 0x10) + 0.0) + auVar66._12_4_;
  local_f8 = *(float *)(lVar23 + 0x90) * ((float)auVar47._8_2_ + 0.0) + auVar66._0_4_;
  fStack_f4 = *(float *)(lVar23 + 0x94) * ((float)auVar47._10_2_ + 0.0) + auVar66._4_4_;
  fStack_f0 = *(float *)(lVar23 + 0x98) * ((float)auVar47._12_2_ + 0.0) + auVar66._8_4_;
  fStack_ec = *(float *)(lVar23 + 0x9c) * ((float)auVar47._14_2_ + 0.0) + auVar66._12_4_;
  local_108 = CONCAT44(*(float *)(lVar23 + 0x94) * ((float)auVar9._4_4_ + 0.0) + auVar66._4_4_,
                       *(float *)(lVar23 + 0x90) * ((float)(auVar47._0_4_ & 0xffff) + 0.0) +
                       auVar66._0_4_);
  FUN_142fbdd20(lVar32 + 0x30,&local_108);
  auVar47._0_4_ = (float)local_108 + *(float *)(lVar32 + 0x40);
  auVar47._4_4_ = local_108._4_4_ + *(float *)(lVar32 + 0x44);
  auVar47._8_4_ = fStack_100 + *(float *)(lVar32 + 0x48);
  auVar47._12_4_ = fStack_fc + *(float *)(lVar32 + 0x4c);
  auVar66._0_4_ = local_f8 + *(float *)(lVar32 + 0x40);
  auVar66._4_4_ = fStack_f4 + *(float *)(lVar32 + 0x44);
  auVar66._8_4_ = fStack_f0 + *(float *)(lVar32 + 0x48);
  auVar66._12_4_ = fStack_ec + *(float *)(lVar32 + 0x4c);
  iVar44 = iVar43;
  if (0 < iVar41) {
    local_108 = (longlong)(int)uVar27;
    local_110 = 0;
    do {
      iVar36 = (int)uVar22;
      uVar27 = *(uint *)(*local_res10 + 4 + local_110 * 4);
      uVar30 = uVar27 >> 0x16;
      local_e8 = *(longlong *)((ulonglong)uVar30 * 0x100 + 8 + *(longlong *)(param_1 + 0x38));
      lVar23 = *(longlong *)(*(longlong *)(local_e8 + 0x18) + 0x38);
      auVar64 = *(undefined1 (*) [16])
                 (*(longlong *)(*(longlong *)(local_e8 + 0x18) + 0x18) +
                 (longlong)(int)(uVar27 & 0x3fffff) * 0x18);
      bVar4 = *(byte *)(local_e8 + 0x30);
      auVar6._10_2_ = 0;
      auVar6._0_10_ = auVar64._0_10_;
      auVar6._12_2_ = auVar64._6_2_;
      auVar8._8_2_ = auVar64._4_2_;
      auVar8._0_8_ = auVar64._0_8_;
      auVar8._10_4_ = auVar6._10_4_;
      auVar16._6_8_ = 0;
      auVar16._0_6_ = auVar8._8_6_;
      auVar10._4_2_ = auVar64._2_2_;
      auVar10._0_4_ = auVar64._0_4_;
      auVar10._6_8_ = SUB148(auVar16 << 0x40,6);
      auVar71._0_4_ =
           *(float *)(lVar23 + 0x90) * ((float)(auVar64._0_4_ & 0xffff) + 0.0) +
           *(float *)(lVar23 + 0xa0);
      auVar71._4_4_ =
           *(float *)(lVar23 + 0x94) * ((float)auVar10._4_4_ + 0.0) + *(float *)(lVar23 + 0xa4);
      auVar71._8_4_ =
           *(float *)(lVar23 + 0x98) *
           ((float)(auVar8._8_4_ >> 0x10) * 65536.0 + (float)(auVar8._8_4_ & 0xffff)) +
           *(float *)(lVar23 + 0xa8);
      auVar71._12_4_ =
           *(float *)(lVar23 + 0x9c) * ((float)(auVar6._10_4_ >> 0x10) + 0.0) +
           *(float *)(lVar23 + 0xac);
      auVar68._0_4_ =
           *(float *)(lVar23 + 0x90) * ((float)auVar64._8_2_ + 0.0) + *(float *)(lVar23 + 0xa0);
      auVar68._4_4_ =
           *(float *)(lVar23 + 0x94) * ((float)auVar64._10_2_ + 0.0) + *(float *)(lVar23 + 0xa4);
      auVar68._8_4_ =
           *(float *)(lVar23 + 0x98) * ((float)auVar64._12_2_ + 0.0) + *(float *)(lVar23 + 0xa8);
      auVar68._12_4_ =
           *(float *)(lVar23 + 0x9c) * ((float)auVar64._14_2_ + 0.0) + *(float *)(lVar23 + 0xac);
      if (bVar4 != 0) {
        uVar27 = (uint)bVar4;
        uVar61 = -(uint)(0x16a8300 << uVar27 < 0);
        uVar62 = -(uint)(0x502ab000 << uVar27 < 0);
        uVar63 = -(uint)(0xa2a8c00 << uVar27 < 0);
        uVar49 = -(uint)(0xa154c00 << uVar27 < 0);
        uVar54 = -(uint)(0x1554300 << uVar27 < 0);
        uVar57 = -(uint)(0x50157000 << uVar27 < 0);
        uVar27 = -(uint)(0 << uVar27 < 0);
        auVar70._0_4_ = (uint)auVar71._8_4_ & uVar49;
        auVar70._4_4_ = (uint)auVar71._0_4_ & uVar54;
        auVar70._8_4_ = (uint)auVar71._4_4_ & uVar57;
        auVar70._12_4_ = (uint)auVar71._12_4_ & uVar27;
        auVar48._0_4_ = ~uVar49 & ((uint)auVar71._4_4_ & uVar61 | ~uVar61 & (uint)auVar71._0_4_);
        auVar48._4_4_ = ~uVar54 & ((uint)auVar71._8_4_ & uVar62 | ~uVar62 & (uint)auVar71._4_4_);
        auVar48._8_4_ = ~uVar57 & ((uint)auVar71._0_4_ & uVar63 | ~uVar63 & (uint)auVar71._8_4_);
        auVar48._12_4_ = ~uVar27 & (uint)auVar71._12_4_;
        uVar22 = (ulonglong)bVar4;
        auVar45._0_4_ = (0xae71e0U >> uVar22) << 0x1f;
        auVar45._4_4_ = (0xb9e306U >> uVar22) << 0x1f;
        auVar45._8_4_ = (0xeb903cU >> uVar22) << 0x1f;
        auVar45._12_4_ = (0U >> uVar22) << 0x1f;
        auVar48 = (auVar48 | auVar70) ^ auVar45;
        auVar67._0_4_ = (uint)auVar68._8_4_ & uVar49;
        auVar67._4_4_ = (uint)auVar68._0_4_ & uVar54;
        auVar67._8_4_ = (uint)auVar68._4_4_ & uVar57;
        auVar67._12_4_ = (uint)auVar68._12_4_ & uVar27;
        auVar64._0_4_ = ~uVar49 & ((uint)auVar68._4_4_ & uVar61 | ~uVar61 & (uint)auVar68._0_4_);
        auVar64._4_4_ = ~uVar54 & ((uint)auVar68._8_4_ & uVar62 | ~uVar62 & (uint)auVar68._4_4_);
        auVar64._8_4_ = ~uVar57 & ((uint)auVar68._0_4_ & uVar63 | ~uVar63 & (uint)auVar68._8_4_);
        auVar64._12_4_ = ~uVar27 & (uint)auVar68._12_4_;
        auVar45 = (auVar64 | auVar67) ^ auVar45;
        auVar71 = minps(auVar48,auVar45);
        auVar68 = maxps(auVar48,auVar45);
      }
      auVar72._0_8_ =
           CONCAT44(auVar71._4_4_ + *(float *)(local_e8 + 0x44),
                    auVar71._0_4_ + *(float *)(local_e8 + 0x40));
      auVar72._8_4_ = auVar71._8_4_ + *(float *)(local_e8 + 0x48);
      auVar72._12_4_ = auVar71._12_4_ + *(float *)(local_e8 + 0x4c);
      auVar69._0_8_ =
           CONCAT44(auVar68._4_4_ + *(float *)(local_e8 + 0x44),
                    auVar68._0_4_ + *(float *)(local_e8 + 0x40));
      auVar69._8_4_ = auVar68._8_4_ + *(float *)(local_e8 + 0x48);
      auVar69._12_4_ = auVar68._12_4_ + *(float *)(local_e8 + 0x4c);
      if ((local_108 < 1) ||
         (uVar27 = *(uint *)(*local_res18 + local_110 * 4), uVar27 == 0xffffffff)) {
        auVar64 = maxps(auVar47,auVar72);
        auVar66 = minps(auVar66,auVar69);
        auVar47 = minps(auVar64,auVar66);
        auVar66 = maxps(auVar64,auVar66);
        pauVar40 = local_158 + (longlong)iVar36 * 2;
        if (pauVar40 != (undefined1 (*) [16])0x0) {
          *pauVar40 = auVar47;
          pauVar40[1] = auVar66;
        }
        lVar32 = (longlong)iVar39;
        iVar39 = iVar39 + 1;
        fVar50 = (auVar66._4_4_ + auVar47._4_4_) * fRam00000001467f07e4;
        fVar55 = (auVar66._8_4_ + auVar47._8_4_) * fRam00000001467f07e8;
        fVar58 = (auVar66._12_4_ + auVar47._12_4_) * fRam00000001467f07ec;
        pauVar40 = local_148 + lVar32;
        *(float *)*pauVar40 = (auVar66._0_4_ + auVar47._0_4_) * _DAT_1467f07e0;
        *(float *)(*pauVar40 + 4) = fVar50;
        *(float *)(*pauVar40 + 8) = fVar55;
        *(float *)(*pauVar40 + 0xc) = fVar58;
        local_168[iVar43] = local_130;
        local_150[iVar44] = 0;
        local_160[iVar42] = 0;
      }
      else {
        lVar23 = *(longlong *)(lVar32 + 0x18);
        uVar27 = uVar27 & 0x3fffff;
        if ((int)uVar27 < *(int *)(lVar23 + 0x30)) {
          lVar37 = *(longlong *)(lVar23 + 0x28);
        }
        else {
          uVar27 = uVar27 - *(int *)(lVar23 + 0x30);
          lVar37 = *(longlong *)(lVar23 + 0x60);
        }
        puVar3 = (ushort *)(lVar37 + (longlong)(int)uVar27 * 8);
        lVar23 = *(longlong *)(lVar23 + 0x38);
        uVar22 = (ulonglong)*puVar3;
        local_128._0_8_ = puVar3;
        lVar37 = *(longlong *)(lVar23 + 0x38);
        bVar4 = *(byte *)(lVar32 + 0x30);
        fVar50 = (float)*(ushort *)(lVar37 + uVar22 * 0x18) * *(float *)(lVar23 + 0x90) +
                 *(float *)(lVar23 + 0xa0);
        fVar55 = (float)*(ushort *)(lVar37 + 2 + uVar22 * 0x18) * *(float *)(lVar23 + 0x94) +
                 *(float *)(lVar23 + 0xa4);
        fVar58 = (float)*(ushort *)(lVar37 + 4 + uVar22 * 0x18) * *(float *)(lVar23 + 0x98) +
                 *(float *)(lVar23 + 0xa8);
        fVar60 = *(float *)(lVar23 + 0x9c) * 0.0 + *(float *)(lVar23 + 0xac);
        if (bVar4 != 0) {
          uVar27 = (uint)bVar4;
          uVar49 = -(uint)(0x16a8300 << uVar27 < 0);
          uVar54 = -(uint)(0x502ab000 << uVar27 < 0);
          uVar57 = -(uint)(0xa2a8c00 << uVar27 < 0);
          uVar61 = -(uint)(0xa154c00 << uVar27 < 0);
          uVar62 = -(uint)(0x1554300 << uVar27 < 0);
          uVar63 = -(uint)(0x50157000 << uVar27 < 0);
          uVar27 = (uint)fVar50 & uVar57;
          uVar56 = (uint)fVar50 & uVar62;
          uVar59 = (uint)fVar55 & uVar63;
          uVar20 = (ulonglong)bVar4;
          fVar50 = (float)((0xae71e0U >> uVar20) << 0x1f ^
                          (~uVar61 & ((uint)fVar55 & uVar49 | ~uVar49 & (uint)fVar50) |
                          (uint)fVar58 & uVar61));
          fVar55 = (float)((0xb9e306U >> uVar20) << 0x1f ^
                          (~uVar62 & ((uint)fVar58 & uVar54 | ~uVar54 & (uint)fVar55) | uVar56));
          fVar58 = (float)((0xeb903cU >> uVar20) << 0x1f ^
                          (~uVar63 & (uVar27 | ~uVar57 & (uint)fVar58) | uVar59));
          fVar60 = (float)((0U >> uVar20) << 0x1f ^ (uint)fVar60);
        }
        iVar38 = iVar39 + 1;
        fVar50 = fVar50 + *(float *)(lVar32 + 0x40);
        fVar55 = fVar55 + *(float *)(lVar32 + 0x44);
        fVar58 = fVar58 + *(float *)(lVar32 + 0x48);
        fVar60 = fVar60 + *(float *)(lVar32 + 0x4c);
        pauVar40 = local_148 + iVar39;
        *(float *)*pauVar40 = fVar50;
        *(float *)(*pauVar40 + 4) = fVar55;
        *(float *)(*pauVar40 + 8) = fVar58;
        *(float *)(*pauVar40 + 0xc) = fVar60;
        pauVar40 = local_158 + (longlong)iVar36 * 2;
        if (pauVar40 != (undefined1 (*) [16])0x0) {
          *(float *)*pauVar40 = fVar50;
          *(float *)(*pauVar40 + 4) = fVar55;
          *(float *)(*pauVar40 + 8) = fVar58;
          *(float *)(*pauVar40 + 0xc) = fVar60;
          *(float *)pauVar40[1] = fVar50;
          *(float *)(pauVar40[1] + 4) = fVar55;
          *(float *)(pauVar40[1] + 8) = fVar58;
          *(float *)(pauVar40[1] + 0xc) = fVar60;
        }
        iVar36 = iVar36 + 1;
        lVar23 = (longlong)iVar43;
        iVar43 = iVar43 + 1;
        local_168[lVar23] = local_130;
        lVar23 = (longlong)iVar44;
        iVar44 = iVar44 + 1;
        local_150[lVar23] = 1;
        lVar23 = *(longlong *)(*(longlong *)(lVar32 + 0x18) + 0x38);
        lVar33 = (longlong)iVar42;
        iVar42 = iVar42 + 1;
        local_160[lVar33] =
             *(undefined4 *)
              (*(longlong *)(lVar23 + 0x48) +
              (longlong)(int)(*(int *)(lVar23 + 0xbc) * (uint)*puVar3) * 4);
        lVar23 = *(longlong *)(*(longlong *)(local_e8 + 0x18) + 0x38);
        bVar4 = *(byte *)(local_e8 + 0x30);
        auVar53._0_4_ =
             (float)*(ushort *)(lVar37 + 8 + uVar22 * 0x18) * *(float *)(lVar23 + 0x90) +
             *(float *)(lVar23 + 0xa0);
        auVar53._4_4_ =
             (float)*(ushort *)(lVar37 + 10 + uVar22 * 0x18) * *(float *)(lVar23 + 0x94) +
             *(float *)(lVar23 + 0xa4);
        auVar53._8_4_ =
             (float)*(ushort *)(lVar37 + 0xc + uVar22 * 0x18) * *(float *)(lVar23 + 0x98) +
             *(float *)(lVar23 + 0xa8);
        auVar53._12_4_ = *(float *)(lVar23 + 0x9c) * 0.0 + *(float *)(lVar23 + 0xac);
        if (bVar4 != 0) {
          uVar27 = (uint)bVar4;
          uVar49 = -(uint)(0x16a8300 << uVar27 < 0);
          uVar54 = -(uint)(0x502ab000 << uVar27 < 0);
          uVar57 = -(uint)(0xa2a8c00 << uVar27 < 0);
          uVar61 = -(uint)(0xa154c00 << uVar27 < 0);
          uVar62 = -(uint)(0x1554300 << uVar27 < 0);
          uVar63 = -(uint)(0x50157000 << uVar27 < 0);
          uVar27 = -(uint)(0 << uVar27 < 0);
          auVar51._0_4_ = (uint)auVar53._8_4_ & uVar61;
          auVar51._4_4_ = (uint)auVar53._0_4_ & uVar62;
          auVar51._8_4_ = (uint)auVar53._4_4_ & uVar63;
          auVar51._12_4_ = (uint)auVar53._12_4_ & uVar27;
          auVar46._0_4_ = ~uVar61 & ((uint)auVar53._4_4_ & uVar49 | ~uVar49 & (uint)auVar53._0_4_);
          auVar46._4_4_ = ~uVar62 & ((uint)auVar53._8_4_ & uVar54 | ~uVar54 & (uint)auVar53._4_4_);
          auVar46._8_4_ = ~uVar63 & ((uint)auVar53._0_4_ & uVar57 | ~uVar57 & (uint)auVar53._8_4_);
          auVar46._12_4_ = ~uVar27 & (uint)auVar53._12_4_;
          uVar22 = (ulonglong)bVar4;
          auVar52._0_4_ = (0xae71e0U >> uVar22) << 0x1f;
          auVar52._4_4_ = (0xb9e306U >> uVar22) << 0x1f;
          auVar52._8_4_ = (0xeb903cU >> uVar22) << 0x1f;
          auVar52._12_4_ = (0U >> uVar22) << 0x1f;
          auVar53 = auVar52 ^ (auVar46 | auVar51);
        }
        iVar39 = iVar39 + 2;
        fVar50 = auVar53._0_4_ + *(float *)(local_e8 + 0x40);
        fVar55 = auVar53._4_4_ + *(float *)(local_e8 + 0x44);
        fVar58 = auVar53._8_4_ + *(float *)(local_e8 + 0x48);
        fVar60 = auVar53._12_4_ + *(float *)(local_e8 + 0x4c);
        pauVar40 = local_148 + iVar38;
        *(float *)*pauVar40 = fVar50;
        *(float *)(*pauVar40 + 4) = fVar55;
        *(float *)(*pauVar40 + 8) = fVar58;
        *(float *)(*pauVar40 + 0xc) = fVar60;
        pauVar40 = local_158 + (longlong)iVar36 * 2;
        if (pauVar40 != (undefined1 (*) [16])0x0) {
          *(float *)*pauVar40 = fVar50;
          *(float *)(*pauVar40 + 4) = fVar55;
          *(float *)(*pauVar40 + 8) = fVar58;
          *(float *)(*pauVar40 + 0xc) = fVar60;
          *(float *)pauVar40[1] = fVar50;
          *(float *)(pauVar40[1] + 4) = fVar55;
          *(float *)(pauVar40[1] + 8) = fVar58;
          *(float *)(pauVar40[1] + 0xc) = fVar60;
        }
        local_168[iVar43] = local_130;
        local_150[iVar44] = 2;
        lVar32 = *(longlong *)(*(longlong *)(lVar32 + 0x18) + 0x38);
        local_160[iVar42] =
             *(undefined4 *)
              (*(longlong *)(lVar32 + 0x48) +
              (longlong)(int)(*(int *)(lVar32 + 0xbc) * (uint)*puVar3) * 4);
      }
      uVar22 = (ulonglong)(iVar36 + 1);
      iVar43 = iVar43 + 1;
      iVar44 = iVar44 + 1;
      local_110 = local_110 + 1;
      iVar42 = iVar42 + 1;
      auVar47._8_4_ = auVar72._8_4_;
      auVar47._0_8_ = auVar72._0_8_;
      auVar47._12_4_ = auVar72._12_4_;
      auVar66._8_4_ = auVar69._8_4_;
      auVar66._0_8_ = auVar69._0_8_;
      auVar66._12_4_ = auVar69._12_4_;
      lVar32 = local_e8;
      local_130 = uVar30;
    } while (local_110 < iVar41);
  }
  uVar26 = param_6[1];
  *(undefined8 *)local_148[iVar39] = *param_6;
  *(undefined8 *)(local_148[iVar39] + 8) = uVar26;
  if ((int)local_res10[1] == 0) {
    puVar24 = local_res20;
  }
  else {
    puVar24 = (uint *)(*local_res10 + (longlong)((int)local_res10[1] + -1) * 4);
  }
  local_168[iVar43] = *puVar24 >> 0x16;
  local_150[iVar44] = 0;
  lVar32 = 0;
  local_160[iVar42] = 0;
  lVar23 = 3;
  plVar25 = (longlong *)(longlong)iVar39;
  local_res10 = plVar25;
  do {
    if (1 < (longlong)plVar25) {
      pauVar40 = local_148 + 2;
      lVar37 = (longlong)plVar25 + -1;
      pauVar34 = local_158;
      do {
        auVar47 = pauVar40[-2];
        fVar50 = *(float *)*pauVar40;
        fVar55 = *(float *)(*pauVar40 + 4);
        local_108 = *(longlong *)*pauVar40;
        fVar58 = *(float *)(*pauVar40 + 8);
        fVar60 = *(float *)(*pauVar40 + 0xc);
        local_128 = auVar47;
        fStack_100 = fVar58;
        fStack_fc = fVar60;
        cVar18 = FUN_1438b11d0(local_128,&local_108,pauVar34,&local_e8);
        fVar11 = fRam00000001467f07e8;
        fVar12 = fRam00000001467f07ec;
        fVar13 = _DAT_1467f07e0;
        fVar14 = fRam00000001467f07e4;
        if (cVar18 != '\0') {
          fVar11 = fStack_e0;
          fVar12 = fStack_dc;
          fVar13 = (float)local_e8;
          fVar14 = local_e8._4_4_;
        }
        pauVar1 = pauVar34 + 1;
        auVar66 = *pauVar34;
        pauVar34 = pauVar34 + 2;
        auVar65._0_4_ = (fVar50 - auVar47._0_4_) * fVar13 + auVar47._0_4_;
        auVar65._4_4_ = (fVar55 - auVar47._4_4_) * fVar14 + auVar47._4_4_;
        auVar65._8_4_ = (fVar58 - auVar47._8_4_) * fVar11 + auVar47._8_4_;
        auVar65._12_4_ = (fVar60 - auVar47._12_4_) * fVar12 + auVar47._12_4_;
        auVar47 = minps(*pauVar1,auVar65);
        auVar47 = maxps(auVar66,auVar47);
        pauVar40[-1] = auVar47;
        pauVar40 = pauVar40 + 1;
        lVar37 = lVar37 + -1;
        plVar25 = local_res10;
      } while (lVar37 != 0);
    }
    lVar23 = lVar23 + -1;
  } while (lVar23 != 0);
  FUN_1438b9180(local_d8);
  FUN_1438b9350(local_d8,param_7,param_8,param_9);
  if (0 < (int)uVar28) {
    puVar35 = local_160;
    pauVar40 = local_148;
    do {
      local_128 = *pauVar40;
      local_res10 = (longlong *)
                    CONCAT44(local_res10._4_4_,
                             *(undefined4 *)
                              (((longlong)local_168 - (longlong)local_160) + (longlong)puVar35));
      local_108 = 0;
      fStack_100 = 0.0;
      fStack_fc = 0.0;
      FUN_1438b9190(local_d8,local_128,&local_108,&local_res10,*puVar35,local_150[lVar32]);
      lVar32 = lVar32 + 1;
      pauVar40 = pauVar40 + 1;
      puVar35 = puVar35 + 1;
    } while (lVar32 < (int)uVar28);
  }
  FUN_1438b9320(local_d8);
  if ((local_d8[0] != 0) || (bVar17 = true, local_c4 < local_c8)) {
    bVar17 = false;
  }
  pvVar21 = TlsGetValue(DAT_146b7bf70);
  if (pvVar21 == (LPVOID)0x0) {
    pvVar21 = DAT_146b7bf68;
  }
  uVar27 = uVar28 * 4 + 0x7f & 0xffffff80;
  if (((*(int *)((longlong)pvVar21 + 0x10) < (int)uVar27) ||
      ((longlong)(int)uVar27 + (longlong)local_160 != *(longlong *)((longlong)pvVar21 + 0x18))) ||
     (*(undefined4 **)((longlong)pvVar21 + 0x28) == local_160)) {
    FUN_143713ff0(pvVar21,local_160);
  }
  else {
    *(undefined4 **)((longlong)pvVar21 + 0x18) = local_160;
  }
  uVar26 = FUN_143703a50();
  if (-1 < (int)uVar29) {
    FUN_143702e10(uVar26,local_160,4,uVar28 & 0x3fffffff);
  }
  pvVar21 = TlsGetValue(DAT_146b7bf70);
  if (pvVar21 == (LPVOID)0x0) {
    pvVar21 = DAT_146b7bf68;
  }
  uVar19 = uVar19 + 0x81 & 0xffffff80;
  if (((*(int *)((longlong)pvVar21 + 0x10) < (int)uVar19) ||
      (local_150 + (int)uVar19 != *(undefined1 **)((longlong)pvVar21 + 0x18))) ||
     (*(undefined1 **)((longlong)pvVar21 + 0x28) == local_150)) {
    FUN_143713ff0(pvVar21,local_150);
  }
  else {
    *(undefined1 **)((longlong)pvVar21 + 0x18) = local_150;
  }
  uVar26 = FUN_143703a50();
  if (-1 < (int)uVar29) {
    FUN_143702e10(uVar26,local_150,1,uVar28 & 0x3fffffff);
  }
  pvVar21 = TlsGetValue(DAT_146b7bf70);
  if (pvVar21 == (LPVOID)0x0) {
    pvVar21 = DAT_146b7bf68;
  }
  uVar19 = local_118 * 0x20 + 0x7f & 0xffffff80;
  if (((*(int *)((longlong)pvVar21 + 0x10) < (int)uVar19) ||
      (*local_158 + (int)uVar19 != *(undefined1 **)((longlong)pvVar21 + 0x18))) ||
     (*(undefined1 (**) [16])((longlong)pvVar21 + 0x28) == local_158)) {
    FUN_143713ff0(pvVar21,local_158);
  }
  else {
    *(undefined1 (**) [16])((longlong)pvVar21 + 0x18) = local_158;
  }
  uVar26 = FUN_143703a50();
  if (-1 < (int)local_114) {
    FUN_143702e10(uVar26,local_158,0x20,local_114 & 0x3fffffff);
  }
  pvVar21 = TlsGetValue(DAT_146b7bf70);
  if (pvVar21 == (LPVOID)0x0) {
    pvVar21 = DAT_146b7bf68;
  }
  if (((*(int *)((longlong)pvVar21 + 0x10) < (int)uVar27) ||
      ((longlong)(int)uVar27 + (longlong)local_168 != *(longlong *)((longlong)pvVar21 + 0x18))) ||
     (*(uint **)((longlong)pvVar21 + 0x28) == local_168)) {
    FUN_143713ff0(pvVar21,local_168);
  }
  else {
    *(uint **)((longlong)pvVar21 + 0x18) = local_168;
  }
  uVar26 = FUN_143703a50();
  if (-1 < (int)uVar29) {
    FUN_143702e10(uVar26,local_168,4,uVar28 & 0x3fffffff);
  }
  pvVar21 = TlsGetValue(DAT_146b7bf70);
  if (pvVar21 == (LPVOID)0x0) {
    pvVar21 = DAT_146b7bf68;
  }
  uVar19 = uVar28 * 0x10 + 0x7f & 0xffffff80;
  if (((*(int *)((longlong)pvVar21 + 0x10) < (int)uVar19) ||
      (*local_148 + (int)uVar19 != *(undefined1 **)((longlong)pvVar21 + 0x18))) ||
     (*(undefined1 (**) [16])((longlong)pvVar21 + 0x28) == local_148)) {
    FUN_143713ff0(pvVar21,local_148);
  }
  else {
    *(undefined1 (**) [16])((longlong)pvVar21 + 0x18) = local_148;
  }
  uVar26 = FUN_143703a50();
  if (-1 < (int)uVar29) {
    FUN_143702e10(uVar26,local_148,0x10,uVar28 & 0x3fffffff);
  }
  return !bVar17;
}



// FUNCTION 1438b11d0 FUN_1438b11d0 body=380 status=ok
// SIG undefined FUN_1438b11d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1438b11d0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
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
  
  fVar15 = ABS(param_3[4] - *param_3);
  fVar16 = ABS(param_3[5] - param_3[1]);
  fVar17 = ABS(param_3[6] - param_3[2]);
  uVar1 = -(uint)(fVar16 < fVar15);
  uVar3 = -(uint)(fVar16 < fVar15);
  uVar5 = -(uint)(fVar16 < fVar15);
  uVar2 = -(uint)(fVar17 < (float)(~uVar1 & (uint)fVar15 | uVar1 & (uint)fVar16));
  uVar4 = -(uint)(fVar17 < (float)(~uVar3 & (uint)fVar15 | uVar3 & (uint)fVar16));
  uVar6 = -(uint)(fVar17 < (float)(~uVar5 & (uint)fVar15 | uVar5 & (uint)fVar16));
  fVar16 = (float)(~uVar2 & (~uVar1 & _DAT_1467f0890 | uVar1 & _DAT_1467f08a0) |
                  uVar2 & _DAT_1467f08b0);
  fVar17 = (float)(~uVar4 & (~uVar3 & uRam00000001467f0894 | uVar3 & uRam00000001467f08a4) |
                  uVar4 & uRam00000001467f08b4);
  fVar18 = (float)(~uVar6 & (~uVar5 & uRam00000001467f0898 | uVar5 & uRam00000001467f08a8) |
                  uVar6 & uRam00000001467f08b8);
  fVar15 = 0.0 - ((param_3[1] + param_3[5]) * fRam00000001467f07e4 * fVar17 +
                  (*param_3 + param_3[4]) * _DAT_1467f07e0 * fVar16 +
                 (param_3[2] + param_3[6]) * fRam00000001467f07e8 * fVar18);
  fVar12 = (*param_2 - *param_1) * fVar16;
  fVar13 = (param_2[1] - param_1[1]) * fVar17;
  fVar14 = (param_2[2] - param_1[2]) * fVar18;
  if (ABS(fVar13 + fVar12 + fVar14) < _DAT_1467f08f0) {
    return 0;
  }
  fVar16 = *param_1 * fVar16;
  fVar17 = param_1[1] * fVar17;
  fVar18 = param_1[2] * fVar18;
  fVar9 = fVar13 + fVar12 + fVar14;
  fVar10 = fVar13 + fVar12 + fVar14;
  fVar11 = fVar13 + fVar12 + fVar14;
  fVar14 = fVar13 + fVar12 + fVar14;
  fVar12 = fVar18 + fVar16;
  fVar13 = fVar15 + fVar17;
  fVar16 = fVar16 + fVar18;
  fVar17 = fVar17 + fVar15;
  auVar7._0_4_ = fVar13 + fVar12;
  auVar7._4_4_ = fVar12 + fVar13;
  auVar7._8_4_ = fVar17 + fVar16;
  auVar7._12_4_ = fVar16 + fVar17;
  auVar8._4_4_ = fVar10;
  auVar8._0_4_ = fVar9;
  auVar8._8_4_ = fVar11;
  auVar8._12_4_ = fVar14;
  auVar8 = rcpps(auVar7,auVar8);
  *param_4 = (2.0 - fVar9 * auVar8._0_4_) * auVar8._0_4_ * (0.0 - auVar7._0_4_);
  param_4[1] = (2.0 - fVar10 * auVar8._4_4_) * auVar8._4_4_ * (0.0 - auVar7._4_4_);
  param_4[2] = (2.0 - fVar11 * auVar8._8_4_) * auVar8._8_4_ * (0.0 - auVar7._8_4_);
  param_4[3] = (2.0 - fVar14 * auVar8._12_4_) * auVar8._12_4_ * (0.0 - auVar7._12_4_);
  return 1;
}



// FUNCTION 1438b1350 FUN_1438b1350 body=25 status=ok
// SIG undefined FUN_1438b1350(void)

longlong FUN_1438b1350(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 100000;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return param_1;
}



// FUNCTION 1438b1370 FUN_1438b1370 body=3302 status=ok
// SIG undefined FUN_1438b1370(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1438b1370(longlong param_1,undefined1 (*param_2) [16],longlong *param_3,char param_4,
             int *param_5,float *param_6)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [14];
  undefined8 uVar12;
  undefined1 auVar13 [12];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [14];
  undefined1 auVar17 [12];
  uint uVar18;
  undefined2 uVar19;
  short sVar20;
  undefined2 uVar21;
  short sVar22;
  char cVar23;
  undefined4 uVar24;
  uint uVar25;
  LPVOID pvVar26;
  float *pfVar27;
  longlong lVar28;
  undefined8 uVar29;
  uint uVar30;
  longlong lVar31;
  ulonglong uVar32;
  uint uVar33;
  uint uVar34;
  int iVar35;
  int iVar36;
  ulonglong uVar37;
  uint uVar38;
  uint uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  float fVar55;
  float fVar58;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar56;
  float fVar57;
  float fVar59;
  undefined1 auVar54 [16];
  undefined4 uVar70;
  undefined1 in_XMM2 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar90;
  float fVar91;
  undefined1 auVar89 [16];
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  undefined4 uVar96;
  undefined4 uVar97;
  undefined4 uVar98;
  undefined4 uVar99;
  undefined4 uVar100;
  undefined4 uVar101;
  undefined4 uVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  int local_2c8;
  int iStack_2bc;
  int local_2b8;
  uint local_2b0;
  undefined2 uStack_2ac;
  short sStack_2aa;
  uint uStack_2a8;
  ushort uStack_2a4;
  ushort uStack_2a2;
  undefined8 local_2a0;
  undefined1 local_298;
  uint local_290;
  undefined2 local_28c;
  short local_28a;
  uint local_288;
  ushort local_284;
  uint local_280;
  undefined4 local_27c;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined1 local_258;
  ulonglong local_250;
  LPVOID local_248;
  uint local_238 [2];
  uint *local_230;
  undefined2 local_228;
  undefined2 uStack_226;
  undefined2 uStack_224;
  undefined2 uStack_222;
  undefined2 uStack_220;
  undefined2 uStack_21e;
  undefined4 uStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  uint local_1f8;
  uint *local_1f0;
  undefined1 local_1e8 [8];
  float fStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  uint local_1b8;
  undefined8 *local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  uint local_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
  uint local_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  undefined8 local_158;
  float fStack_150;
  float fStack_14c;
  longlong local_148;
  undefined1 *local_140;
  uint *local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [184];
  
  thunk_FUN_143719c70(0xd27d5388);
  fVar47 = *(float *)*param_2 - *(float *)param_2[1];
  fVar55 = *(float *)(*param_2 + 4) - *(float *)(param_2[1] + 4);
  fVar58 = *(float *)(*param_2 + 8) - *(float *)(param_2[1] + 8);
  fVar103 = 0.0;
  iVar35 = 0;
  local_2c8 = 0;
  fVar47 = fVar47 * fVar47;
  fVar55 = fVar55 * fVar55;
  fVar58 = fVar58 * fVar58;
  auVar61._0_4_ = fVar55 + fVar47 + fVar58;
  auVar61._4_4_ = fVar55 + fVar47 + fVar58;
  auVar61._8_4_ = fVar55 + fVar47 + fVar58;
  auVar61._12_4_ = fVar55 + fVar47 + fVar58;
  auVar60 = rsqrtps(in_XMM2,auVar61);
  fVar47 = auVar60._0_4_;
  fVar55 = auVar60._4_4_;
  fVar58 = auVar60._8_4_;
  fVar86 = auVar60._12_4_;
  fVar47 = (float)(~-(uint)(auVar61._0_4_ <= 0.0) &
                  (uint)((3.0 - fVar47 * auVar61._0_4_ * fVar47) * fVar47 * 0.5 * auVar61._0_4_));
  fVar55 = (float)(~-(uint)(auVar61._4_4_ <= 0.0) &
                  (uint)((3.0 - fVar55 * auVar61._4_4_ * fVar55) * fVar55 * 0.5 * auVar61._4_4_));
  fVar58 = (float)(~-(uint)(auVar61._8_4_ <= 0.0) &
                  (uint)((3.0 - fVar58 * auVar61._8_4_ * fVar58) * fVar58 * 0.5 * auVar61._8_4_));
  fVar86 = (float)(~-(uint)(auVar61._12_4_ <= 0.0) &
                  (uint)((3.0 - fVar86 * auVar61._12_4_ * fVar86) * fVar86 * 0.5 * auVar61._12_4_));
  if ((*(int *)param_2[2] == -1) || (*(int *)(param_2[2] + 4) == -1)) goto LAB_1438b1678;
  fStack_150 = *(float *)(param_2[1] + 8) - *(float *)(*param_2 + 8);
  fStack_14c = *(float *)(param_2[1] + 0xc) - *(float *)(*param_2 + 0xc);
  local_158 = CONCAT44(*(float *)(param_2[1] + 4) - *(float *)(*param_2 + 4),
                       *(float *)param_2[1] - *(float *)*param_2);
  pvVar26 = TlsGetValue(DAT_146b8198c);
  local_248 = pvVar26;
  if (pvVar26 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar26,"TtlosCheck");
  }
  local_238[0] = *(uint *)param_2[2];
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_178 = DAT_1467f08d0;
  uStack_174 = uRam00000001467f08d4;
  uStack_170 = uRam00000001467f08d8;
  uStack_16c = uRam00000001467f08dc;
  uVar37 = (ulonglong)(local_238[0] & 0x3fffff);
  local_1f8 = 0xffffffff;
  local_1f0 = (uint *)0x0;
  local_1b8 = 0xffffffff;
  local_1b0 = (undefined8 *)0x0;
  local_250 = (ulonglong)(local_238[0] >> 0x16);
  local_168 = DAT_1467f08d0 ^ 0x80000000;
  uStack_164 = uRam00000001467f08d4 ^ 0x80000000;
  uStack_160 = uRam00000001467f08d8 ^ 0x80000000;
  uStack_15c = uRam00000001467f08dc ^ 0x80000000;
  lVar2 = *(longlong *)(local_250 * 0x100 + 8 + *(longlong *)(param_1 + 0x38));
  lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x18);
  local_290 = *(uint *)(lVar3 + uVar37 * 0x18);
  local_28c = *(undefined2 *)(lVar3 + 4 + uVar37 * 0x18);
  local_28a = *(short *)(lVar3 + 6 + uVar37 * 0x18);
  local_288 = *(uint *)(lVar3 + 8 + uVar37 * 0x18);
  local_284 = *(ushort *)(lVar3 + 0xc + uVar37 * 0x18);
  local_280 = *(uint *)(lVar3 + 0x10 + uVar37 * 0x18);
  local_27c = *(undefined4 *)(lVar3 + 0x14 + uVar37 * 0x18);
  lVar3 = *(longlong *)(lVar2 + 0x18);
  if ((*(int *)(lVar3 + 0x48) == 0) ||
     (iVar35 = *(int *)(*(longlong *)(lVar3 + 0x40) + uVar37 * 4), iVar35 == -1)) {
    uVar37 = 0xffffffff;
    local_2b8 = 0;
  }
  else {
    uVar32 = *(ulonglong *)(*(longlong *)(lVar3 + 0x50) + (longlong)iVar35 * 8);
    uVar37 = uVar32 & 0xffffffff;
    iStack_2bc = (int)(uVar32 >> 0x20);
    local_2b8 = iStack_2bc;
  }
  uVar29 = *(undefined8 *)*param_2;
  uVar12 = *(undefined8 *)(*param_2 + 8);
  local_230 = &local_290;
  local_228 = (undefined2)uVar29;
  uStack_226 = (undefined2)((ulonglong)uVar29 >> 0x10);
  uStack_224 = (undefined2)((ulonglong)uVar29 >> 0x20);
  uStack_222 = (undefined2)((ulonglong)uVar29 >> 0x30);
  uStack_220 = (undefined2)uVar12;
  uStack_21e = (undefined2)((ulonglong)uVar12 >> 0x10);
  uStack_21c = (undefined4)((ulonglong)uVar12 >> 0x20);
  FUN_142fbd3f0(lVar2,&local_290,&local_218);
  sVar22 = sStack_2aa;
  uVar21 = uStack_2ac;
  uVar30 = local_2b0;
  uStack_2ac = (undefined2)((ulonglong)param_1 >> 0x20);
  uVar19 = uStack_2ac;
  sStack_2aa = (short)((ulonglong)param_1 >> 0x30);
  sVar20 = sStack_2aa;
  local_2b0 = (uint)param_1;
  uVar18 = local_2b0;
  fVar104 = fVar103;
  fVar105 = 0.0;
  fVar106 = 0.0;
  fVar107 = 0.0;
  if ((*(int *)param_2[2] == *(int *)(param_2[2] + 4)) &&
     ((plVar4 = *(longlong **)param_2[4], fVar104 = fVar47, fVar105 = fVar55, fVar106 = fVar58,
      fVar107 = fVar86, plVar4 != (longlong *)0x0 || (*(longlong *)(param_2[3] + 8) != 0)))) {
    local_1d8 = CONCAT44(fStack_214,local_218);
    uStack_1d0 = CONCAT44(fStack_20c,fStack_210);
    local_1f8 = local_238[0];
    local_1f0 = local_230;
    local_2a0 = local_238;
    _local_1e8 = param_2[1];
    local_1c8 = CONCAT44(fStack_204,local_208);
    uStack_1c0 = CONCAT44(fStack_1fc,fStack_200);
    puVar1 = param_2[2] + 0xc;
    local_1b8 = 0xffffffff;
    local_1b0 = (undefined8 *)0x0;
    uStack_2a8 = (uint)puVar1;
    uStack_2a4 = (ushort)((ulonglong)puVar1 >> 0x20);
    uStack_2a2 = (ushort)((ulonglong)puVar1 >> 0x30);
    local_298 = 0x52;
    if ((plVar4 == (longlong *)0x0) ||
       (cVar23 = (**(code **)(*plVar4 + 0x28))(plVar4,&local_2b0), iVar35 = local_2c8,
       cVar23 != '\0')) {
      plVar4 = *(longlong **)(param_2[3] + 8);
      uVar30 = local_2b0;
      uVar21 = uStack_2ac;
      sVar22 = sStack_2aa;
      if (plVar4 != (longlong *)0x0) {
        local_128 = CONCAT44(uRam00000001467f06e4,_DAT_1467f06e0);
        uStack_120 = CONCAT44(DAT_1467f06ec,uRam00000001467f06e8);
        local_138 = local_238;
        local_130 = 0x52;
        local_148 = param_1;
        local_140 = puVar1;
        local_118 = fVar47;
        fStack_114 = fVar55;
        fStack_110 = fVar58;
        fStack_10c = fVar86;
        local_108 = local_128;
        uStack_100 = uStack_120;
        pfVar27 = (float *)(**(code **)(*plVar4 + 0x20))(plVar4,&local_158,&local_148);
        fVar104 = *pfVar27;
        fVar105 = pfVar27[1];
        fVar106 = pfVar27[2];
        fVar107 = pfVar27[3];
        uVar30 = local_2b0;
        uVar21 = uStack_2ac;
        sVar22 = sStack_2aa;
      }
      goto LAB_1438b1763;
    }
  }
  else {
LAB_1438b1763:
    sStack_2aa = sVar22;
    uStack_2ac = uVar21;
    local_2b0 = uVar30;
    auVar60 = *param_2;
    fVar47 = *(float *)param_2[1];
    fVar55 = *(float *)(param_2[1] + 4);
    fVar58 = *(float *)(param_2[1] + 8);
    fVar86 = *(float *)(param_2[1] + 0xc);
    auVar63._0_4_ = auVar60._0_4_ - fVar47;
    auVar63._4_4_ = auVar60._4_4_ - fVar55;
    auVar63._8_4_ = auVar60._8_4_ - fVar58;
    auVar63._12_4_ = fRam00000001467f06fc;
    auVar89._0_4_ = (float)(~-(uint)(auVar63._0_4_ == 0.0) & (uint)auVar63._0_4_);
    auVar89._4_4_ = (float)(~-(uint)(auVar63._4_4_ == 0.0) & (uint)auVar63._4_4_);
    auVar89._8_4_ = (float)(~-(uint)(auVar63._8_4_ == 0.0) & (uint)auVar63._8_4_);
    auVar89._12_4_ = (float)(~-(uint)(fRam00000001467f06fc == 0.0) & (uint)fRam00000001467f06fc);
    auVar61 = rcpps(auVar63,auVar89);
    fVar92 = (float)(~-(uint)(auVar89._0_4_ == 0.0) &
                     (uint)((2.0 - auVar61._0_4_ * auVar89._0_4_) * auVar61._0_4_) |
                    -(uint)(auVar89._0_4_ == 0.0) & 0x7f7fffee);
    fVar93 = (float)(~-(uint)(auVar89._4_4_ == 0.0) &
                     (uint)((2.0 - auVar61._4_4_ * auVar89._4_4_) * auVar61._4_4_) |
                    -(uint)(auVar89._4_4_ == 0.0) & 0x7f7fffee);
    fVar94 = (float)(~-(uint)(auVar89._8_4_ == 0.0) &
                     (uint)((2.0 - auVar61._8_4_ * auVar89._8_4_) * auVar61._8_4_) |
                    -(uint)(auVar89._8_4_ == 0.0) & 0x7f7fffee);
    fVar95 = (float)(~-(uint)(auVar89._12_4_ == 0.0) &
                     (uint)((2.0 - auVar61._12_4_ * auVar89._12_4_) * auVar61._12_4_) |
                    -(uint)(auVar89._12_4_ == 0.0) & 0x7f7fffee);
    uVar32 = local_250;
    uVar96 = DAT_1467f06f0;
    uVar97 = uRam00000001467f06f4;
    uVar98 = uRam00000001467f06f8;
    fVar57 = fRam00000001467f06fc;
    uVar99 = _DAT_1467f06e0;
    uVar100 = uRam00000001467f06e4;
    uVar101 = uRam00000001467f06e8;
    uVar102 = DAT_1467f06ec;
    uVar30 = *(uint *)param_2[2];
    uVar33 = 0xffffffff;
    if (*(uint *)param_2[2] != *(uint *)(param_2[2] + 4)) {
LAB_1438b1800:
      uVar39 = uVar30;
      fVar103 = fVar104;
      iVar35 = local_2c8;
      pvVar26 = local_248;
      if (local_2c8 < *(int *)(param_2[2] + 8)) {
        local_2c8 = local_2c8 + 1;
        auVar61 = minps(auVar60,param_2[1]);
        lVar2 = *(longlong *)(param_1 + 0x38);
        auVar89 = maxps(auVar60,param_2[1]);
        lVar3 = *(longlong *)((longlong)(int)uVar32 * 0x100 + 8 + lVar2);
        iVar36 = 0;
        local_270 = CONCAT44((int)local_28a + local_280,local_280);
        local_268 = (undefined1 *)CONCAT44(local_2b8 + (int)uVar37,(int)uVar37);
        local_260 = (uint *)((ulonglong)local_280 << 0x20);
        uVar30 = local_280;
        iVar35 = local_2c8;
        if (local_280 == (int)local_28a + local_280) {
          do {
            iVar36 = iVar36 + 1;
            local_260 = (uint *)CONCAT44(local_260._4_4_,iVar36);
            if (iVar36 == 2) goto joined_r0x0001438b1f53;
            uVar30 = *(uint *)(&local_270 + iVar36);
            local_260 = (uint *)CONCAT44(uVar30,iVar36);
          } while (uVar30 == *(uint *)((longlong)&local_270 + (longlong)iVar36 * 8 + 4));
        }
        if (iVar36 < 2) {
          local_250 = (ulonglong)(uint)((int)uVar32 << 0x16);
          do {
            uVar38 = uVar30 + 1;
            local_260 = (uint *)CONCAT44(uVar38,(undefined4)local_260);
            if (uVar38 == *(uint *)((longlong)&local_270 + (longlong)iVar36 * 8 + 4)) {
              do {
                iVar36 = iVar36 + 1;
                local_260 = (uint *)CONCAT44(local_260._4_4_,iVar36);
                if (iVar36 == 2) break;
                uVar38 = *(uint *)(&local_270 + iVar36);
                local_260 = (uint *)CONCAT44(uVar38,iVar36);
              } while (uVar38 == *(uint *)((longlong)&local_270 + (longlong)iVar36 * 8 + 4));
            }
            uVar34 = uVar30 | (uint)local_250;
            lVar5 = *(longlong *)(lVar3 + 0x18);
            if ((int)uVar30 < *(int *)(lVar5 + 0x30)) {
              lVar28 = *(longlong *)(lVar5 + 0x28);
            }
            else {
              uVar30 = uVar30 - *(int *)(lVar5 + 0x30);
              lVar28 = *(longlong *)(lVar5 + 0x60);
            }
            local_278 = *(ulonglong *)(lVar28 + (longlong)(int)uVar30 * 8);
            if ((local_278 >> 0x10 & 0x10) == 0) {
              uVar32 = local_278 >> 0x20;
              if (((local_278 >> 0x10 & 0x40) == 0) &&
                 (uVar30 = (uint)(local_278 >> 0x20), uVar30 != 0xffffffff)) {
                uVar32 = (ulonglong)(uVar30 & 0x3fffff | *(int *)(lVar5 + 0x94) << 0x16);
              }
              uVar30 = (uint)uVar32;
              local_278 = CONCAT44(uVar30,(undefined4)local_278);
              if (uVar30 != uVar33) {
                lVar5 = *(longlong *)((uVar32 >> 0x16) * 0x100 + 8 + lVar2);
                lVar31 = (longlong)(int)(uVar30 & 0x3fffff);
                lVar28 = *(longlong *)(*(longlong *)(lVar5 + 0x18) + 0x18);
                local_2b0 = *(uint *)(lVar28 + lVar31 * 0x18);
                uStack_2ac = *(undefined2 *)(lVar28 + 4 + lVar31 * 0x18);
                sStack_2aa = *(short *)(lVar28 + 6 + lVar31 * 0x18);
                uStack_2a8 = *(uint *)(lVar28 + 8 + lVar31 * 0x18);
                uStack_2a4 = *(ushort *)(lVar28 + 0xc + lVar31 * 0x18);
                auVar17._2_4_ = uStack_2a8;
                auVar17._0_2_ = sStack_2aa;
                auVar17._6_6_ = 0;
                local_2a0 = (uint *)CONCAT44(*(undefined4 *)(lVar28 + 0x14 + lVar31 * 0x18),
                                             *(undefined4 *)(lVar28 + 0x10 + lVar31 * 0x18));
                auVar11._10_2_ = 0;
                auVar11._0_10_ = SUB1210(auVar17 << 0x30,0);
                auVar11._12_2_ = sStack_2aa;
                uVar29 = CONCAT44(auVar11._10_4_,CONCAT22(uStack_2ac,sStack_2aa));
                auVar16._6_8_ = 0;
                auVar16._0_6_ = (uint6)((ulonglong)uVar29 >> 0x10);
                uVar25 = (uint)((ulonglong)uVar29 >> 0x10);
                lVar28 = *(longlong *)(*(longlong *)(lVar5 + 0x18) + 0x38);
                local_1d8._0_4_ =
                     *(float *)(lVar28 + 0x90) * ((float)(local_2b0 & 0xffff) + 0.0) +
                     *(float *)(lVar28 + 0xa0);
                local_1d8._4_4_ =
                     *(float *)(lVar28 + 0x94) *
                     ((float)(int)CONCAT82(SUB148(auVar16 << 0x40,6),(short)(local_2b0 >> 0x10)) +
                     0.0) + *(float *)(lVar28 + 0xa4);
                uStack_1d0._0_4_ =
                     *(float *)(lVar28 + 0x98) *
                     ((float)(uVar25 >> 0x10) * 65536.0 + (float)(uVar25 & 0xffff)) +
                     *(float *)(lVar28 + 0xa8);
                uStack_1d0._4_4_ =
                     *(float *)(lVar28 + 0x9c) * ((float)(auVar11._10_4_ >> 0x10) + 0.0) +
                     *(float *)(lVar28 + 0xac);
                local_1c8._0_4_ =
                     *(float *)(lVar28 + 0x90) * ((float)(uStack_2a8 & 0xffff) + 0.0) +
                     *(float *)(lVar28 + 0xa0);
                local_1c8._4_4_ =
                     *(float *)(lVar28 + 0x94) * ((float)(uStack_2a8 >> 0x10) + 0.0) +
                     *(float *)(lVar28 + 0xa4);
                uStack_1c0._0_4_ =
                     *(float *)(lVar28 + 0x98) * ((float)uStack_2a4 + 0.0) +
                     *(float *)(lVar28 + 0xa8);
                uStack_1c0._4_4_ =
                     *(float *)(lVar28 + 0x9c) * ((float)uStack_2a2 + 0.0) +
                     *(float *)(lVar28 + 0xac);
                local_158 = lVar5;
                uVar24 = FUN_142fbdd20(lVar5 + 0x30,&local_1d8);
                fVar78 = (float)local_1d8 + *(float *)(lVar5 + 0x40);
                fVar79 = local_1d8._4_4_ + *(float *)(lVar5 + 0x44);
                fVar80 = (float)uStack_1d0 + *(float *)(lVar5 + 0x48);
                fVar81 = uStack_1d0._4_4_ + *(float *)(lVar5 + 0x4c);
                local_1d8 = CONCAT44(fVar79,fVar78);
                uStack_1d0 = CONCAT44(fVar81,fVar80);
                fVar82 = (float)local_1c8 + *(float *)(lVar5 + 0x40);
                fVar83 = local_1c8._4_4_ + *(float *)(lVar5 + 0x44);
                fVar84 = (float)uStack_1c0 + *(float *)(lVar5 + 0x48);
                fVar85 = uStack_1c0._4_4_ + *(float *)(lVar5 + 0x4c);
                auVar49._0_4_ = -(uint)(fVar78 <= auVar89._0_4_ && auVar61._0_4_ <= fVar82);
                auVar49._4_4_ = -(uint)(fVar79 <= auVar89._4_4_ && auVar61._4_4_ <= fVar83);
                auVar49._8_4_ = -(uint)(fVar80 <= auVar89._8_4_ && auVar61._8_4_ <= fVar84);
                auVar49._12_4_ = -(uint)(fVar81 <= auVar89._12_4_ && auVar61._12_4_ <= fVar85);
                local_1c8 = CONCAT44(fVar83,fVar82);
                uStack_1c0 = CONCAT44(fVar85,fVar84);
                uVar25 = movmskps(uVar24,auVar49);
                if ((char)(uVar25 & 7) == '\a') {
                  auVar62._4_4_ = fVar79;
                  auVar62._0_4_ = fVar78;
                  auVar62._8_4_ = fVar80;
                  auVar62._12_4_ = fVar81;
                  auVar40._4_4_ = fVar83;
                  auVar40._0_4_ = fVar82;
                  auVar40._8_4_ = fVar84;
                  auVar40._12_4_ = fVar85;
                  auVar14._4_4_ = fStack_214;
                  auVar14._0_4_ = local_218;
                  auVar14._8_4_ = fStack_210;
                  auVar14._12_4_ = fStack_20c;
                  auVar63 = maxps(auVar62,auVar14);
                  auVar15._4_4_ = fStack_204;
                  auVar15._0_4_ = local_208;
                  auVar15._8_4_ = fStack_200;
                  auVar15._12_4_ = fStack_1fc;
                  auVar60 = minps(auVar40,auVar15);
                  local_198 = minps(auVar63,auVar60);
                  local_188 = maxps(auVar63,auVar60);
                  auVar71._0_8_ =
                       CONCAT44(fVar93 * (local_198._4_4_ - fVar55),
                                fVar92 * (local_198._0_4_ - fVar47));
                  auVar71._8_4_ = fVar94 * (local_198._8_4_ - fVar58);
                  auVar71._12_4_ = fVar95 * (local_198._12_4_ - fVar86);
                  auVar41._0_4_ = fVar92 * (local_188._0_4_ - fVar47);
                  auVar41._4_4_ = fVar93 * (local_188._4_4_ - fVar55);
                  auVar41._8_4_ = fVar94 * (local_188._8_4_ - fVar58);
                  auVar41._12_4_ = fVar95 * (local_188._12_4_ - fVar86);
                  auVar64._8_4_ = auVar71._8_4_;
                  auVar64._0_8_ = auVar71._0_8_;
                  auVar64._12_4_ = auVar71._12_4_;
                  auVar60 = minps(auVar64,auVar41);
                  auVar63 = maxps(auVar71,auVar41);
                  uVar24 = auVar60._0_4_;
                  uVar70 = auVar60._4_4_;
                  auVar65._8_4_ = auVar60._8_4_;
                  auVar50._4_4_ = uVar70;
                  auVar50._0_4_ = uVar70;
                  auVar50._8_4_ = uVar70;
                  auVar50._12_4_ = uVar70;
                  auVar42._4_4_ = uVar24;
                  auVar42._0_4_ = uVar24;
                  auVar42._8_4_ = uVar24;
                  auVar42._12_4_ = uVar24;
                  auVar60 = maxps(auVar50,auVar42);
                  uVar24 = auVar63._0_4_;
                  uVar70 = auVar63._4_4_;
                  auVar72._8_4_ = auVar63._8_4_;
                  auVar65._4_4_ = auVar65._8_4_;
                  auVar65._0_4_ = auVar65._8_4_;
                  auVar65._12_4_ = auVar65._8_4_;
                  auVar63 = maxps(auVar65,auVar60);
                  auVar43._4_4_ = uVar24;
                  auVar43._0_4_ = uVar24;
                  auVar43._8_4_ = uVar24;
                  auVar43._12_4_ = uVar24;
                  auVar51._4_4_ = uVar70;
                  auVar51._0_4_ = uVar70;
                  auVar51._8_4_ = uVar70;
                  auVar51._12_4_ = uVar70;
                  auVar72._4_4_ = auVar72._8_4_;
                  auVar72._0_4_ = auVar72._8_4_;
                  auVar72._12_4_ = auVar72._8_4_;
                  auVar60 = minps(auVar51,auVar43);
                  auVar9._4_4_ = uVar100;
                  auVar9._0_4_ = uVar99;
                  auVar9._8_4_ = uVar101;
                  auVar9._12_4_ = uVar102;
                  auVar63 = maxps(auVar63,auVar9);
                  auVar60 = minps(auVar72,auVar60);
                  auVar7._4_4_ = uVar97;
                  auVar7._0_4_ = uVar96;
                  auVar7._8_4_ = uVar98;
                  auVar7._12_4_ = fVar57;
                  auVar60 = minps(auVar60,auVar7);
                  if (auVar63._0_4_ <= auVar60._0_4_) {
                    auVar60 = param_2[1];
                    auVar68._0_4_ = -(uint)(auVar60._0_4_ <= fVar82 && fVar78 <= auVar60._0_4_);
                    auVar68._4_4_ = -(uint)(auVar60._4_4_ <= fVar83 && fVar79 <= auVar60._4_4_);
                    auVar68._8_4_ = -(uint)(auVar60._8_4_ <= fVar84 && fVar80 <= auVar60._8_4_);
                    auVar68._12_4_ = -(uint)(auVar60._12_4_ <= fVar85 && fVar81 <= auVar60._12_4_);
                    uVar24 = movmskps(uVar25 & 7,auVar68);
                    if (((byte)uVar24 & 7) == 7) goto LAB_1438b1bc7;
                    auVar66._0_8_ = CONCAT44(fVar93 * (fVar79 - fVar55),fVar92 * (fVar78 - fVar47));
                    auVar66._8_4_ = fVar94 * (fVar80 - fVar58);
                    auVar66._12_4_ = fVar95 * (fVar81 - fVar86);
                    auVar44._0_4_ = fVar92 * (fVar82 - fVar47);
                    auVar44._4_4_ = fVar93 * (fVar83 - fVar55);
                    auVar44._8_4_ = fVar94 * (fVar84 - fVar58);
                    auVar44._12_4_ = fVar95 * (fVar85 - fVar86);
                    auVar73._8_4_ = auVar66._8_4_;
                    auVar73._0_8_ = auVar66._0_8_;
                    auVar73._12_4_ = auVar66._12_4_;
                    auVar60 = minps(auVar73,auVar44);
                    auVar63 = maxps(auVar66,auVar44);
                    uVar24 = auVar60._0_4_;
                    uVar70 = auVar60._4_4_;
                    auVar74._8_4_ = auVar60._8_4_;
                    auVar52._4_4_ = uVar70;
                    auVar52._0_4_ = uVar70;
                    auVar52._8_4_ = uVar70;
                    auVar52._12_4_ = uVar70;
                    auVar45._4_4_ = uVar24;
                    auVar45._0_4_ = uVar24;
                    auVar45._8_4_ = uVar24;
                    auVar45._12_4_ = uVar24;
                    auVar60 = maxps(auVar52,auVar45);
                    uVar24 = auVar63._0_4_;
                    uVar70 = auVar63._4_4_;
                    auVar67._8_4_ = auVar63._8_4_;
                    auVar74._4_4_ = auVar74._8_4_;
                    auVar74._0_4_ = auVar74._8_4_;
                    auVar74._12_4_ = auVar74._8_4_;
                    auVar63 = maxps(auVar74,auVar60);
                    auVar46._4_4_ = uVar24;
                    auVar46._0_4_ = uVar24;
                    auVar46._8_4_ = uVar24;
                    auVar46._12_4_ = uVar24;
                    auVar53._4_4_ = uVar70;
                    auVar53._0_4_ = uVar70;
                    auVar53._8_4_ = uVar70;
                    auVar53._12_4_ = uVar70;
                    auVar67._4_4_ = auVar67._8_4_;
                    auVar67._0_4_ = auVar67._8_4_;
                    auVar67._12_4_ = auVar67._8_4_;
                    auVar60 = minps(auVar53,auVar46);
                    auVar10._4_4_ = uVar100;
                    auVar10._0_4_ = uVar99;
                    auVar10._8_4_ = uVar101;
                    auVar10._12_4_ = uVar102;
                    auVar63 = maxps(auVar63,auVar10);
                    auVar60 = minps(auVar67,auVar60);
                    auVar8._4_4_ = uVar97;
                    auVar8._0_4_ = uVar96;
                    auVar8._8_4_ = uVar98;
                    auVar8._12_4_ = fVar57;
                    auVar68 = minps(auVar60,auVar8);
                    if (auVar63._0_4_ <= auVar68._0_4_) goto LAB_1438b1bb1;
                  }
                }
              }
            }
            uVar30 = uVar38;
            pvVar26 = local_248;
            if (1 < iVar36) break;
          } while( true );
        }
      }
      goto joined_r0x0001438b1f53;
    }
LAB_1438b1f62:
    plVar4 = *(longlong **)param_2[4];
    if (plVar4 == (longlong *)0x0) {
LAB_1438b1fc8:
      if (pvVar26 != (LPVOID)0x0) {
        FUN_14370d750(pvVar26,&DAT_145b8eda0);
      }
      if ((param_3 != (longlong *)0x0) &&
         ((param_4 == '\0' ||
          ((int)param_3[1] < (int)(*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff))))) {
        uVar29 = FUN_143703a50();
        if (*(uint *)(param_3 + 1) == (*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff)) {
          FUN_14370c460(uVar29,param_3,4);
        }
        *(undefined4 *)(*param_3 + (longlong)(int)param_3[1] * 4) = *(undefined4 *)(param_2[2] + 4);
        *(int *)(param_3 + 1) = (int)param_3[1] + 1;
      }
      if (param_5 != (int *)0x0) {
        *param_5 = local_2c8;
      }
      if (param_6 != (float *)0x0) {
        *param_6 = fVar104;
      }
      return 1;
    }
    _local_1e8 = param_2[1];
    puVar1 = param_2[2] + 0xc;
    uStack_2a8 = (uint)puVar1;
    uStack_2a4 = (ushort)((ulonglong)puVar1 >> 0x20);
    uStack_2a2 = (ushort)((ulonglong)puVar1 >> 0x30);
    local_2a0 = local_238;
    local_1f8 = 0xffffffff;
    local_1f0 = (uint *)0x0;
    local_1b8 = 0xffffffff;
    local_1b0 = (undefined8 *)0x0;
    local_298 = 0x42;
    local_2b0 = uVar18;
    uStack_2ac = uVar19;
    sStack_2aa = sVar20;
    cVar23 = (**(code **)(*plVar4 + 0x28))(plVar4,&local_2b0);
    fVar103 = fVar104;
    iVar35 = local_2c8;
    if (cVar23 != '\0') goto LAB_1438b1fc8;
  }
joined_r0x0001438b1f53:
  if (pvVar26 != (LPVOID)0x0) {
    FUN_14370d750(pvVar26,&DAT_145b8eda0);
  }
LAB_1438b1678:
  if (param_3 != (longlong *)0x0) {
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if (param_5 != (int *)0x0) {
    *param_5 = iVar35;
  }
  if (param_6 != (float *)0x0) {
    *param_6 = fVar103;
  }
  return 0;
LAB_1438b1bb1:
  auVar60._0_4_ = (*(float *)*param_2 - *(float *)param_2[1]) * auVar63._0_4_ + *(float *)param_2[1]
  ;
  auVar60._4_4_ =
       (*(float *)(*param_2 + 4) - *(float *)(param_2[1] + 4)) * auVar63._4_4_ +
       *(float *)(param_2[1] + 4);
  auVar60._8_4_ =
       (*(float *)(*param_2 + 8) - *(float *)(param_2[1] + 8)) * auVar63._8_4_ +
       *(float *)(param_2[1] + 8);
  auVar60._12_4_ =
       (*(float *)(*param_2 + 0xc) - *(float *)(param_2[1] + 0xc)) * auVar63._12_4_ +
       *(float *)(param_2[1] + 0xc);
LAB_1438b1bc7:
  uVar29 = CONCAT26(uStack_222,CONCAT24(uStack_224,CONCAT22(uStack_226,local_228)));
  auVar13._8_2_ = uStack_220;
  auVar13._0_8_ = uVar29;
  auVar13._10_2_ = uStack_21e;
  plVar4 = *(longlong **)param_2[4];
  local_1b0 = &local_278;
  fVar88 = auVar60._0_4_;
  fVar48 = (float)CONCAT22(uStack_226,local_228) - fVar88;
  fVar90 = auVar60._4_4_;
  fVar56 = (float)((ulonglong)uVar29 >> 0x20) - fVar90;
  fVar91 = auVar60._8_4_;
  fVar59 = auVar13._8_4_ - fVar91;
  local_1b8 = uVar34;
  local_1f8 = uVar30;
  local_1f0 = &local_2b0;
  _local_1e8 = auVar60;
  fVar48 = fVar48 * fVar48;
  fVar56 = fVar56 * fVar56;
  fVar59 = fVar59 * fVar59;
  auVar75._0_4_ = fVar56 + fVar48 + fVar59;
  auVar75._4_4_ = fVar56 + fVar48 + fVar59;
  auVar75._8_4_ = fVar56 + fVar48 + fVar59;
  auVar75._12_4_ = fVar56 + fVar48 + fVar59;
  auVar61 = rsqrtps(auVar68,auVar75);
  fVar48 = auVar61._0_4_;
  fVar56 = auVar61._4_4_;
  fVar59 = auVar61._8_4_;
  fVar87 = auVar61._12_4_;
  auVar69._0_4_ = fVar48 * 0.5;
  auVar69._4_4_ = fVar56 * 0.5;
  auVar69._8_4_ = fVar59 * 0.5;
  auVar69._12_4_ = fVar87 * 0.5;
  fVar48 = (float)(~-(uint)(auVar75._0_4_ <= 0.0) &
                  (uint)((3.0 - auVar75._0_4_ * fVar48 * fVar48) * auVar69._0_4_ * auVar75._0_4_));
  fVar56 = (float)(~-(uint)(auVar75._4_4_ <= 0.0) &
                  (uint)((3.0 - auVar75._4_4_ * fVar56 * fVar56) * auVar69._4_4_ * auVar75._4_4_));
  fVar59 = (float)(~-(uint)(auVar75._8_4_ <= 0.0) &
                  (uint)((3.0 - auVar75._8_4_ * fVar59 * fVar59) * auVar69._8_4_ * auVar75._8_4_));
  fVar87 = (float)(~-(uint)(auVar75._12_4_ <= 0.0) &
                  (uint)((3.0 - auVar75._12_4_ * fVar87 * fVar87) * auVar69._12_4_ * auVar75._12_4_)
                  );
  if (plVar4 == (longlong *)0x0) {
    if (*(longlong *)(param_2[3] + 8) == 0) goto LAB_1438b1dea;
  }
  else {
    local_268 = param_2[2] + 0xc;
    local_260 = local_238;
    local_258 = 0x22;
    if (uVar39 == *(uint *)param_2[2]) {
      local_258 = 0x12;
    }
    local_270 = param_1;
    cVar23 = (**(code **)(*plVar4 + 0x28))(plVar4,&local_270);
    pvVar26 = local_248;
    if (cVar23 == '\0') goto joined_r0x0001438b1f53;
    uVar32 = local_278 >> 0x20;
    fVar78 = (float)local_1d8;
    fVar79 = local_1d8._4_4_;
    fVar80 = (float)uStack_1d0;
    fVar81 = uStack_1d0._4_4_;
    fVar82 = (float)local_1c8;
    fVar83 = local_1c8._4_4_;
    fVar84 = (float)uStack_1c0;
    fVar85 = uStack_1c0._4_4_;
    uVar96 = DAT_1467f06f0;
    uVar97 = uRam00000001467f06f4;
    uVar98 = uRam00000001467f06f8;
    fVar57 = fRam00000001467f06fc;
    uVar99 = _DAT_1467f06e0;
    uVar100 = uRam00000001467f06e4;
    uVar101 = uRam00000001467f06e8;
    uVar102 = DAT_1467f06ec;
  }
  plVar4 = *(longlong **)(param_2[3] + 8);
  if (plVar4 != (longlong *)0x0) {
    fVar103 = (float)CONCAT22(uStack_226,local_228) - fVar88;
    fVar57 = (float)CONCAT22(uStack_222,uStack_224) - fVar90;
    fVar78 = (float)CONCAT22(uStack_21e,uStack_220) - fVar91;
    local_140 = param_2[2] + 0xc;
    local_130 = 0x52;
    local_138 = local_238;
    local_128 = CONCAT44(fVar105,fVar104);
    uStack_120 = CONCAT44(fVar107,fVar106);
    fVar103 = fVar103 * fVar103;
    fVar57 = fVar57 * fVar57;
    fVar78 = fVar78 * fVar78;
    auVar76._0_4_ = fVar57 + fVar103 + fVar78;
    auVar76._4_4_ = fVar57 + fVar103 + fVar78;
    auVar76._8_4_ = fVar57 + fVar103 + fVar78;
    auVar76._12_4_ = fVar57 + fVar103 + fVar78;
    auVar61 = rsqrtps(auVar69,auVar76);
    fVar103 = auVar61._0_4_;
    fVar57 = auVar61._4_4_;
    fVar78 = auVar61._8_4_;
    fVar79 = auVar61._12_4_;
    local_118 = (float)(~-(uint)(auVar76._0_4_ <= 0.0) &
                       (uint)((3.0 - auVar76._0_4_ * fVar103 * fVar103) * fVar103 * 0.5 *
                             auVar76._0_4_));
    fStack_114 = (float)(~-(uint)(auVar76._4_4_ <= 0.0) &
                        (uint)((3.0 - auVar76._4_4_ * fVar57 * fVar57) * fVar57 * 0.5 *
                              auVar76._4_4_));
    fStack_110 = (float)(~-(uint)(auVar76._8_4_ <= 0.0) &
                        (uint)((3.0 - auVar76._8_4_ * fVar78 * fVar78) * fVar78 * 0.5 *
                              auVar76._8_4_));
    fStack_10c = (float)(~-(uint)(auVar76._12_4_ <= 0.0) &
                        (uint)((3.0 - auVar76._12_4_ * fVar79 * fVar79) * fVar79 * 0.5 *
                              auVar76._12_4_));
    fVar103 = ((float)local_1e8._0_4_ - fVar88) * ((float)local_1e8._0_4_ - fVar88);
    fVar57 = ((float)local_1e8._4_4_ - fVar90) * ((float)local_1e8._4_4_ - fVar90);
    auVar54._8_4_ = (fStack_1e0 - fVar91) * (fStack_1e0 - fVar91);
    auVar54._4_4_ = auVar54._8_4_;
    auVar54._0_4_ = auVar54._8_4_;
    auVar54._12_4_ = auVar54._8_4_;
    auVar77._0_4_ = fVar57 + fVar103 + auVar54._8_4_;
    auVar77._4_4_ = fVar57 + fVar103 + auVar54._8_4_;
    auVar77._8_4_ = fVar57 + fVar103 + auVar54._8_4_;
    auVar77._12_4_ = fVar57 + fVar103 + auVar54._8_4_;
    auVar61 = rsqrtps(auVar54,auVar77);
    fVar103 = auVar61._0_4_;
    fVar57 = auVar61._4_4_;
    fVar78 = auVar61._8_4_;
    fVar79 = auVar61._12_4_;
    local_108 = CONCAT44(~-(uint)(auVar77._4_4_ <= 0.0) &
                         (uint)((3.0 - auVar77._4_4_ * fVar57 * fVar57) * fVar57 * 0.5 *
                               auVar77._4_4_),
                         ~-(uint)(auVar77._0_4_ <= 0.0) &
                         (uint)((3.0 - auVar77._0_4_ * fVar103 * fVar103) * fVar103 * 0.5 *
                               auVar77._0_4_));
    uStack_100 = CONCAT44(~-(uint)(auVar77._12_4_ <= 0.0) &
                          (uint)((3.0 - auVar77._12_4_ * fVar79 * fVar79) * fVar79 * 0.5 *
                                auVar77._12_4_),
                          ~-(uint)(auVar77._8_4_ <= 0.0) &
                          (uint)((3.0 - auVar77._8_4_ * fVar78 * fVar78) * fVar78 * 0.5 *
                                auVar77._8_4_));
    local_148 = param_1;
    pfVar27 = (float *)(**(code **)(*plVar4 + 0x20))(plVar4,local_f8,&local_148);
    fVar48 = *pfVar27;
    fVar56 = pfVar27[1];
    fVar59 = pfVar27[2];
    fVar87 = pfVar27[3];
    uVar32 = local_278 >> 0x20;
    fVar78 = (float)local_1d8;
    fVar79 = local_1d8._4_4_;
    fVar80 = (float)uStack_1d0;
    fVar81 = uStack_1d0._4_4_;
    fVar82 = (float)local_1c8;
    fVar83 = local_1c8._4_4_;
    fVar84 = (float)uStack_1c0;
    fVar85 = uStack_1c0._4_4_;
    uVar96 = DAT_1467f06f0;
    uVar97 = uRam00000001467f06f4;
    uVar98 = uRam00000001467f06f8;
    fVar57 = fRam00000001467f06fc;
    uVar99 = _DAT_1467f06e0;
    uVar100 = uRam00000001467f06e4;
    uVar101 = uRam00000001467f06e8;
    uVar102 = DAT_1467f06ec;
  }
LAB_1438b1dea:
  fVar104 = fVar104 + fVar48;
  fVar105 = fVar105 + fVar56;
  fVar106 = fVar106 + fVar59;
  fVar107 = fVar107 + fVar87;
  if ((param_3 != (longlong *)0x0) &&
     ((param_4 == '\0' || ((int)param_3[1] < (int)(*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff))
      ))) {
    uVar29 = FUN_143703a50();
    if (*(uint *)(param_3 + 1) == (*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff)) {
      FUN_14370c460(uVar29,param_3,4);
    }
    *(uint *)(*param_3 + (longlong)(int)param_3[1] * 4) = uVar39;
    *(int *)(param_3 + 1) = (int)param_3[1] + 1;
    uVar32 = local_278 >> 0x20;
    fVar78 = (float)local_1d8;
    fVar79 = local_1d8._4_4_;
    fVar80 = (float)uStack_1d0;
    fVar81 = uStack_1d0._4_4_;
    fVar82 = (float)local_1c8;
    fVar83 = local_1c8._4_4_;
    fVar84 = (float)uStack_1c0;
    fVar85 = uStack_1c0._4_4_;
    uVar96 = DAT_1467f06f0;
    uVar97 = uRam00000001467f06f4;
    uVar98 = uRam00000001467f06f8;
    fVar57 = fRam00000001467f06fc;
    uVar99 = _DAT_1467f06e0;
    uVar100 = uRam00000001467f06e4;
    uVar101 = uRam00000001467f06e8;
    uVar102 = DAT_1467f06ec;
  }
  local_290 = local_2b0;
  local_28a = sStack_2aa;
  local_280 = (uint)local_2a0;
  local_28c = uStack_2ac;
  local_288 = uStack_2a8;
  local_284 = uStack_2a4;
  local_27c = local_2a0._4_4_;
  local_238[0] = (uint)uVar32;
  local_218 = fVar78;
  fStack_214 = fVar79;
  fStack_210 = fVar80;
  fStack_20c = fVar81;
  local_208 = fVar82;
  fStack_204 = fVar83;
  fStack_200 = fVar84;
  fStack_1fc = fVar85;
  lVar2 = *(longlong *)(local_158 + 0x18);
  if ((*(int *)(lVar2 + 0x48) == 0) ||
     (iVar35 = *(int *)(*(longlong *)(lVar2 + 0x40) + (longlong)(int)(local_238[0] & 0x3fffff) * 4),
     iVar35 == -1)) {
    uVar37 = 0xffffffff;
    local_2b8 = 0;
  }
  else {
    uVar6 = *(ulonglong *)(*(longlong *)(lVar2 + 0x50) + (longlong)iVar35 * 8);
    uVar37 = uVar6 & 0xffffffff;
    local_2b8 = (int)(uVar6 >> 0x20);
  }
  local_228 = local_1e8._0_2_;
  uStack_226 = local_1e8._2_2_;
  uStack_224 = local_1e8._4_2_;
  uStack_222 = local_1e8._6_2_;
  uStack_220 = local_1e8._8_2_;
  uStack_21e = local_1e8._10_2_;
  uStack_21c = local_1e8._12_4_;
  uVar32 = uVar32 >> 0x16;
  local_230 = &local_290;
  pvVar26 = local_248;
  uVar30 = local_238[0];
  uVar33 = uVar39;
  if (local_238[0] == *(uint *)(param_2[2] + 4)) goto LAB_1438b1f62;
  goto LAB_1438b1800;
}



// FUNCTION 1438b2060 FUN_1438b2060 body=131 status=ok
// SIG undefined FUN_1438b2060(void)

void FUN_1438b2060(longlong param_1,longlong param_2,short param_3,uint param_4)

{
  longlong lVar1;
  short *psVar2;
  
  FUN_1438b20f0(param_1,param_2,param_4);
  lVar1 = *(longlong *)
           (*(longlong *)((ulonglong)(param_4 >> 0x16) * 0x100 + *(longlong *)(param_2 + 0x38)) +
           0x18);
  psVar2 = (short *)FUN_1437fb610(*(undefined8 *)(lVar1 + 0x18),*(undefined4 *)(lVar1 + 0x20),
                                  lVar1 + 0xb0,lVar1 + 0xd0,lVar1 + 0x90,param_4 & 0x3fffff);
  *(short *)(param_1 + 8) = param_3 - *psVar2;
  return;
}



// FUNCTION 1438b20f0 FUN_1438b20f0 body=146 status=ok
// SIG undefined FUN_1438b20f0(void)

void FUN_1438b20f0(uint *param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    *param_1 = param_3;
    *(undefined2 *)(param_1 + 1) = 0xffff;
    return;
  }
  uVar3 = param_3 & 0x3fffff;
  lVar2 = *(longlong *)
           (*(longlong *)((ulonglong)(param_3 >> 0x16) * 0x100 + *(longlong *)(param_2 + 0x38)) +
           0x18);
  if ((int)uVar3 < *(int *)(lVar2 + 0x20)) {
    *(undefined2 *)(param_1 + 1) = 0xffff;
    *param_1 = param_3;
    return;
  }
  lVar2 = *(longlong *)(lVar2 + 0x168);
  uVar1 = *(uint *)(lVar2 + (longlong)(int)uVar3 * 4);
  *(short *)(param_1 + 1) = (short)uVar3 - (short)*(undefined4 *)(lVar2 + (longlong)(int)uVar1 * 4);
  *param_1 = param_3 & 0xffc00000 | uVar1;
  return;
}



// FUNCTION 1438b2190 FUN_1438b2190 body=213 status=ok
// SIG undefined FUN_1438b2190(void)

uint * FUN_1438b2190(longlong param_1,uint *param_2,longlong param_3,uint *param_4)

{
  short sVar1;
  longlong lVar2;
  int *piVar3;
  uint uVar4;
  uint local_res8 [2];
  
  FUN_1438b2270(param_1,local_res8);
  if (param_4 != (uint *)0x0) {
    *param_4 = local_res8[0];
  }
  if (local_res8[0] != 0xffffffff) {
    uVar4 = local_res8[0] >> 0x16;
    lVar2 = *(longlong *)((ulonglong)uVar4 * 0x100 + *(longlong *)(param_3 + 0x38));
    if ((lVar2 != 0) && (sVar1 = *(short *)(param_1 + 8), sVar1 != -1)) {
      lVar2 = *(longlong *)(lVar2 + 0x18);
      piVar3 = (int *)FUN_1437fb610(*(undefined8 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x20),
                                    lVar2 + 0xb0,lVar2 + 0xd0,lVar2 + 0x90,local_res8[0] & 0x3fffff)
      ;
      if (sVar1 < (short)piVar3[2]) {
        *param_2 = uVar4 << 0x16 | (int)sVar1 + *piVar3;
        return param_2;
      }
      if (param_4 != (uint *)0x0) {
        *param_4 = 0xffffffff;
      }
    }
  }
  *param_2 = 0xffffffff;
  return param_2;
}



// FUNCTION 1438b2270 FUN_1438b2270 body=223 status=ok
// SIG undefined FUN_1438b2270(void)

uint * FUN_1438b2270(uint *param_1,uint *param_2,longlong param_3)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  char local_res18 [8];
  uint local_res20 [2];
  int local_28;
  int local_24 [3];
  
  if (param_3 == 0) {
    *param_2 = *param_1;
    return param_2;
  }
  uVar3 = *param_1 & 0x3fffff;
  lVar1 = *(longlong *)((ulonglong)(*param_1 >> 0x16) * 0x100 + *(longlong *)(param_3 + 0x38));
  local_res20[0] = uVar3;
  FUN_143839060(*(undefined8 *)(lVar1 + 0x18),local_res18,local_res20,&local_28,local_24);
  if (local_res18[0] == '\0') {
    lVar1 = *(longlong *)(lVar1 + 0x18);
    if (*(int *)(lVar1 + 0x108) == 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = *(byte *)((longlong)(int)uVar3 + *(longlong *)(lVar1 + 0x100));
    }
    if (((bVar2 & 1) == 0) && ((short)param_1[1] == -1)) {
      *param_2 = *param_1;
      return param_2;
    }
  }
  else if (((short)param_1[1] != -1) &&
          (uVar3 = (short)param_1[1] + local_28, (int)uVar3 < local_24[0])) {
    *param_2 = *param_1 & 0xffc00000 | uVar3;
    return param_2;
  }
  *param_2 = 0xffffffff;
  return param_2;
}



// FUNCTION 1438b2350 FUN_1438b2350 body=86 status=ok
// SIG undefined FUN_1438b2350(void)

void FUN_1438b2350(undefined4 *param_1,longlong *param_2)

{
  if ((*(uint *)(param_2 + 1) & 1) == 0) {
    if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
      FUN_14370c460(&PTR_vftable_1467f0638,param_2,4);
    }
    *(undefined4 *)(*param_2 + (longlong)(int)param_2[1] * 4) = *param_1;
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
  }
  return;
}



// FUNCTION 1438b23b0 FUN_1438b23b0 body=136 status=ok
// SIG undefined FUN_1438b23b0(void)

void FUN_1438b23b0(int *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  uVar2 = uVar1 & 0x80000001;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
  }
  if (uVar2 == 1) {
    if (*param_1 != *(int *)(*param_2 + (longlong)(int)(uVar1 - 1) * 4) + 1) {
      if (uVar1 == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(&PTR_vftable_1467f0638,param_2,4);
      }
      *(int *)(*param_2 + (longlong)(int)param_2[1] * 4) = *param_1;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      return;
    }
    *(uint *)(param_2 + 1) = uVar1 - 1;
  }
  return;
}



// FUNCTION 1438b2440 FUN_1438b2440 body=949 status=ok
// SIG undefined FUN_1438b2440(void)

float * FUN_1438b2440(float *param_1,longlong param_2,longlong param_3,float *param_4,
                     undefined4 *param_5,undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  int *piVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  
  lVar3 = *(longlong *)(param_2 + 0x18);
  piVar5 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar3 + 0x28),*(undefined4 *)(lVar3 + 0x30),
                                lVar3 + 0xc0,lVar3 + 0xe0,lVar3 + 0x70,*param_5);
  iVar1 = *(int *)(lVar3 + 0x40);
  iVar2 = *piVar5;
  if (iVar2 < iVar1) {
    pfVar6 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar3 + 0x38));
  }
  else {
    pfVar6 = (float *)((longlong)(iVar2 - iVar1) * 0x10 + *(longlong *)(lVar3 + 0xf0));
  }
  iVar2 = piVar5[1];
  fVar35 = *pfVar6;
  fVar7 = pfVar6[1];
  fVar8 = pfVar6[2];
  if (iVar2 < iVar1) {
    pfVar6 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar3 + 0x38));
  }
  else {
    pfVar6 = (float *)((longlong)(iVar2 - iVar1) * 0x10 + *(longlong *)(lVar3 + 0xf0));
  }
  fVar11 = *pfVar6;
  fVar14 = pfVar6[1];
  fVar16 = pfVar6[2];
  lVar3 = *(longlong *)(param_3 + 0x18);
  fVar33 = fVar7 * *(float *)(param_2 + 0x50) + fVar35 * *(float *)(param_2 + 0x40) +
           fVar8 * *(float *)(param_2 + 0x60) + *(float *)(param_2 + 0x70);
  fVar34 = fVar7 * *(float *)(param_2 + 0x54) + fVar35 * *(float *)(param_2 + 0x44) +
           fVar8 * *(float *)(param_2 + 100) + *(float *)(param_2 + 0x74);
  fVar35 = fVar7 * *(float *)(param_2 + 0x58) + fVar35 * *(float *)(param_2 + 0x48) +
           fVar8 * *(float *)(param_2 + 0x68) + *(float *)(param_2 + 0x78);
  auVar10._0_4_ =
       fVar14 * *(float *)(param_2 + 0x50) + fVar11 * *(float *)(param_2 + 0x40) +
       fVar16 * *(float *)(param_2 + 0x60) + *(float *)(param_2 + 0x70);
  auVar10._4_4_ =
       fVar14 * *(float *)(param_2 + 0x54) + fVar11 * *(float *)(param_2 + 0x44) +
       fVar16 * *(float *)(param_2 + 100) + *(float *)(param_2 + 0x74);
  auVar10._8_4_ =
       fVar14 * *(float *)(param_2 + 0x58) + fVar11 * *(float *)(param_2 + 0x48) +
       fVar16 * *(float *)(param_2 + 0x68) + *(float *)(param_2 + 0x78);
  auVar10._12_4_ =
       fVar14 * *(float *)(param_2 + 0x5c) + fVar11 * *(float *)(param_2 + 0x4c) +
       fVar16 * *(float *)(param_2 + 0x6c) + *(float *)(param_2 + 0x7c);
  piVar5 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar3 + 0x28),*(undefined4 *)(lVar3 + 0x30),
                                lVar3 + 0xc0,lVar3 + 0xe0,lVar3 + 0x70,*param_6);
  iVar1 = *(int *)(lVar3 + 0x40);
  iVar2 = *piVar5;
  if (iVar2 < iVar1) {
    pfVar6 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar3 + 0x38));
  }
  else {
    pfVar6 = (float *)((longlong)(iVar2 - iVar1) * 0x10 + *(longlong *)(lVar3 + 0xf0));
  }
  iVar2 = piVar5[1];
  fVar7 = *pfVar6;
  fVar8 = pfVar6[1];
  fVar11 = pfVar6[2];
  if (iVar2 < iVar1) {
    pfVar6 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar3 + 0x38));
  }
  else {
    pfVar6 = (float *)((longlong)(iVar2 - iVar1) * 0x10 + *(longlong *)(lVar3 + 0xf0));
  }
  fVar14 = *param_4;
  fVar16 = param_4[1];
  fVar19 = param_4[2];
  fVar12 = *pfVar6;
  fVar26 = pfVar6[1];
  fVar27 = pfVar6[2];
  fVar15 = auVar10._0_4_ * fVar14;
  fVar17 = auVar10._4_4_ * fVar16;
  fVar18 = auVar10._8_4_ * fVar19;
  fVar23 = fVar33 * fVar14;
  fVar24 = fVar34 * fVar16;
  fVar25 = fVar35 * fVar19;
  fVar20 = fVar8 * *(float *)(param_3 + 0x50) + fVar7 * *(float *)(param_3 + 0x40) +
           fVar11 * *(float *)(param_3 + 0x60) + *(float *)(param_3 + 0x70);
  fVar21 = fVar8 * *(float *)(param_3 + 0x54) + fVar7 * *(float *)(param_3 + 0x44) +
           fVar11 * *(float *)(param_3 + 100) + *(float *)(param_3 + 0x74);
  fVar22 = fVar8 * *(float *)(param_3 + 0x58) + fVar7 * *(float *)(param_3 + 0x48) +
           fVar11 * *(float *)(param_3 + 0x68) + *(float *)(param_3 + 0x78);
  fVar7 = fVar20 * fVar14;
  fVar11 = fVar21 * fVar16;
  fVar13 = fVar22 * fVar19;
  fVar30 = fVar26 * *(float *)(param_3 + 0x50) + fVar12 * *(float *)(param_3 + 0x40) +
           fVar27 * *(float *)(param_3 + 0x60) + *(float *)(param_3 + 0x70);
  fVar31 = fVar26 * *(float *)(param_3 + 0x54) + fVar12 * *(float *)(param_3 + 0x44) +
           fVar27 * *(float *)(param_3 + 100) + *(float *)(param_3 + 0x74);
  fVar32 = fVar26 * *(float *)(param_3 + 0x58) + fVar12 * *(float *)(param_3 + 0x48) +
           fVar27 * *(float *)(param_3 + 0x68) + *(float *)(param_3 + 0x78);
  fVar26 = fVar30 * fVar14;
  fVar27 = fVar31 * fVar16;
  fVar28 = fVar32 * fVar19;
  fVar8 = ((0.0 - (fVar17 + fVar15 + fVar18)) * fVar14 + auVar10._0_4_) -
          ((0.0 - (fVar11 + fVar7 + fVar13)) * fVar14 + fVar20);
  fVar12 = ((0.0 - (fVar17 + fVar15 + fVar18)) * fVar16 + auVar10._4_4_) -
           ((0.0 - (fVar11 + fVar7 + fVar13)) * fVar16 + fVar21);
  fVar11 = ((0.0 - (fVar17 + fVar15 + fVar18)) * fVar19 + auVar10._8_4_) -
           ((0.0 - (fVar11 + fVar7 + fVar13)) * fVar19 + fVar22);
  fVar8 = fVar8 * fVar8;
  fVar12 = fVar12 * fVar12;
  fVar11 = fVar11 * fVar11;
  fVar15 = fVar12 + fVar8 + fVar11;
  fVar17 = fVar12 + fVar8 + fVar11;
  fVar18 = fVar12 + fVar8 + fVar11;
  fVar11 = fVar12 + fVar8 + fVar11;
  auVar29._4_4_ = fVar17;
  auVar29._0_4_ = fVar15;
  auVar29._8_4_ = fVar18;
  auVar29._12_4_ = fVar11;
  auVar29 = rsqrtps(auVar10,auVar29);
  fVar7 = ((0.0 - (fVar24 + fVar23 + fVar25)) * fVar14 + fVar33) -
          ((0.0 - (fVar27 + fVar26 + fVar28)) * fVar14 + fVar30);
  fVar8 = ((0.0 - (fVar24 + fVar23 + fVar25)) * fVar16 + fVar34) -
          ((0.0 - (fVar27 + fVar26 + fVar28)) * fVar16 + fVar31);
  fVar35 = ((0.0 - (fVar24 + fVar23 + fVar25)) * fVar19 + fVar35) -
           ((0.0 - (fVar27 + fVar26 + fVar28)) * fVar19 + fVar32);
  fVar7 = fVar7 * fVar7;
  fVar8 = fVar8 * fVar8;
  auVar9._8_4_ = fVar35 * fVar35;
  auVar9._4_4_ = auVar9._8_4_;
  auVar9._0_4_ = auVar9._8_4_;
  auVar9._12_4_ = auVar9._8_4_;
  fVar16 = fVar8 + fVar7 + auVar9._8_4_;
  fVar33 = fVar8 + fVar7 + auVar9._8_4_;
  fVar34 = fVar8 + fVar7 + auVar9._8_4_;
  fVar19 = fVar8 + fVar7 + auVar9._8_4_;
  auVar4._4_4_ = fVar33;
  auVar4._0_4_ = fVar16;
  auVar4._8_4_ = fVar34;
  auVar4._12_4_ = fVar19;
  auVar10 = rsqrtps(auVar9,auVar4);
  fVar35 = auVar10._0_4_;
  fVar7 = auVar10._4_4_;
  fVar8 = auVar10._8_4_;
  fVar14 = auVar10._12_4_;
  fVar12 = auVar29._0_4_;
  fVar26 = auVar29._4_4_;
  fVar27 = auVar29._8_4_;
  fVar13 = auVar29._12_4_;
  *param_1 = (float)(~-(uint)(fVar16 <= 0.0) &
                    (uint)((3.0 - fVar35 * fVar16 * fVar35) * fVar35 * 0.5 * fVar16)) +
             (float)(~-(uint)(fVar15 <= 0.0) &
                    (uint)((3.0 - fVar12 * fVar15 * fVar12) * fVar12 * 0.5 * fVar15));
  param_1[1] = (float)(~-(uint)(fVar33 <= 0.0) &
                      (uint)((3.0 - fVar7 * fVar33 * fVar7) * fVar7 * 0.5 * fVar33)) +
               (float)(~-(uint)(fVar17 <= 0.0) &
                      (uint)((3.0 - fVar26 * fVar17 * fVar26) * fVar26 * 0.5 * fVar17));
  param_1[2] = (float)(~-(uint)(fVar34 <= 0.0) &
                      (uint)((3.0 - fVar8 * fVar34 * fVar8) * fVar8 * 0.5 * fVar34)) +
               (float)(~-(uint)(fVar18 <= 0.0) &
                      (uint)((3.0 - fVar27 * fVar18 * fVar27) * fVar27 * 0.5 * fVar18));
  param_1[3] = (float)(~-(uint)(fVar19 <= 0.0) &
                      (uint)((3.0 - fVar14 * fVar19 * fVar14) * fVar14 * 0.5 * fVar19)) +
               (float)(~-(uint)(fVar11 <= 0.0) &
                      (uint)((3.0 - fVar13 * fVar11 * fVar13) * fVar13 * 0.5 * fVar11));
  return param_1;
}



// FUNCTION 1438b2800 FUN_1438b2800 body=970 status=ok
// SIG undefined FUN_1438b2800(void)

undefined1 *
FUN_1438b2800(undefined1 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             short *param_5,int *param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int *piVar8;
  ulonglong uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50 [2];
  int *local_48;
  int local_40;
  uint local_3c;
  
  if (*(char *)(param_3 + 0x28) == '\x01') {
    lVar6 = *(longlong *)(param_3 + 0x18);
  }
  else {
    lVar6 = FUN_142fbda20(param_3 + 0x18);
  }
  local_5c = *(int *)(*(longlong *)(param_3 + 0x18) + 0x20);
  iVar10 = *(int *)(*(longlong *)(param_3 + 0x18) + 0x30);
  piVar11 = (int *)((longlong)*param_6 * 0x10 + *(longlong *)(lVar6 + 0xd0));
  local_48 = (int *)0x0;
  local_40 = 0;
  local_3c = 0x80000000;
  FUN_14370c310(&PTR_vftable_1467f0638,&local_48,8,4);
  iVar10 = *piVar11 - iVar10;
  iVar12 = (short)piVar11[2] + iVar10;
  local_58 = iVar12;
  for (; iVar10 < iVar12; iVar10 = iVar10 + 1) {
    if ((*(short *)(*(longlong *)(lVar6 + 0x110) + (longlong)iVar10 * 2) == *param_5) &&
       (*(int *)(*(longlong *)(*(longlong *)(param_3 + 0x18) + 0xe0) + 0xc + (longlong)iVar10 * 0x14
                ) == -1)) {
      local_68 = iVar10;
      FUN_1438b2350(&local_68,&local_48);
    }
    else {
      local_64 = iVar10;
      FUN_1438b23b0(&local_64,&local_48);
    }
  }
  local_60 = iVar12;
  FUN_1438b23b0(&local_60,&local_48);
  if (local_40 == 0) {
    *param_1 = 0;
    local_40 = 0;
    if (-1 < (int)local_3c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_48,4,local_3c & 0x3fffffff);
    }
  }
  else {
    local_5c = local_5c + *param_6;
    FUN_14383a3c0(param_3,&local_5c);
    iVar10 = 0;
    param_6._0_4_ = 0;
    if (0 < local_40) {
      uVar9 = (ulonglong)((local_40 - 1U >> 1) + 1);
      piVar8 = local_48;
      do {
        piVar1 = piVar8 + 1;
        iVar12 = *piVar8;
        piVar8 = piVar8 + 2;
        iVar10 = iVar10 + -1 + (*piVar1 - iVar12);
        uVar9 = uVar9 - 1;
        param_6._0_4_ = iVar10;
      } while (uVar9 != 0);
    }
    if ((int)(short)piVar11[2] - (int)(short)(int)param_6 < 3) {
      *param_1 = 0;
      local_40 = 0;
      if (-1 < (int)local_3c) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_48,4,local_3c & 0x3fffffff);
      }
    }
    else {
      *(short *)(piVar11 + 2) = (short)piVar11[2] - (short)(int)param_6;
      *(int *)(lVar6 + 0x164) = *(int *)(lVar6 + 0x164) + (int)param_6;
      iVar10 = *local_48;
      if (0 < local_40) {
        lVar16 = 0;
        iVar12 = 2;
        do {
          iVar13 = *(int *)(lVar16 + (longlong)local_48);
          lVar15 = *(longlong *)(lVar6 + 0xe0);
          puVar7 = (undefined4 *)(lVar15 + (longlong)iVar13 * 0x14);
          lVar3 = (longlong)iVar10 * 0x14;
          *(undefined4 *)(lVar3 + lVar15) = *puVar7;
          *(undefined4 *)(lVar3 + 4 + lVar15) = puVar7[1];
          *(undefined4 *)(lVar3 + 8 + lVar15) = puVar7[2];
          *(undefined4 *)(lVar3 + 0xc + lVar15) = puVar7[3];
          *(undefined1 *)(lVar3 + 0x10 + lVar15) = *(undefined1 *)(puVar7 + 4);
          *(undefined1 *)(lVar3 + 0x11 + lVar15) = *(undefined1 *)((longlong)puVar7 + 0x11);
          *(undefined2 *)(lVar3 + 0x12 + lVar15) = *(undefined2 *)((longlong)puVar7 + 0x12);
          *(undefined2 *)(*(longlong *)(lVar6 + 0x110) + (longlong)iVar10 * 2) =
               *(undefined2 *)(*(longlong *)(lVar6 + 0x110) + (longlong)iVar13 * 2);
          iVar4 = *(int *)(lVar6 + 0x60);
          lVar15 = (longlong)iVar4;
          puVar2 = (undefined4 *)(*(longlong *)(lVar6 + 0x150) + (longlong)(iVar4 * iVar13) * 4);
          puVar7 = (undefined4 *)(*(longlong *)(lVar6 + 0x150) + (longlong)(iVar4 * iVar10) * 4);
          if (iVar4 == 1) {
            *puVar7 = *puVar2;
          }
          else if (0 < lVar15) {
            lVar14 = (longlong)puVar2 - (longlong)puVar7;
            do {
              *puVar7 = *(undefined4 *)(lVar14 + (longlong)puVar7);
              puVar7 = puVar7 + 1;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
          }
          *(undefined4 *)(lVar3 + 4 + *(longlong *)(lVar6 + 0xe0)) =
               *(undefined4 *)
                (*(longlong *)(*(longlong *)(param_3 + 0x18) + 0xe0) + 4 +
                (longlong)(*(int *)(lVar16 + 4 + (longlong)local_48) + -1) * 0x14);
          local_54 = *(int *)(lVar16 + 4 + (longlong)local_48);
          if (iVar12 < local_40) {
            piVar11 = local_48 + iVar12;
          }
          else {
            piVar11 = &local_58;
          }
          iVar13 = *piVar11 - local_54;
          local_50[0] = iVar10 + 1;
          hkaiNavMeshThreadSafeUtils::moveOwnedEdgesDown(param_2,param_3,local_50,&local_54,iVar13);
          iVar10 = iVar10 + 1 + iVar13;
          lVar16 = lVar16 + 8;
          bVar5 = iVar12 < local_40;
          iVar12 = iVar12 + 2;
        } while (bVar5);
      }
      local_40 = 0;
      *param_1 = (int)param_6 != 0;
      if (-1 < (int)local_3c) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_48,4,local_3c & 0x3fffffff);
      }
    }
  }
  return param_1;
}



// FUNCTION 1438b2bd0 FUN_1438b2bd0 body=905 status=ok
// SIG undefined FUN_1438b2bd0(void)

undefined1 *
FUN_1438b2bd0(undefined1 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             short *param_5,int *param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int *piVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50 [2];
  int *local_48;
  int local_40;
  uint local_3c;
  
  if (*(char *)(param_3 + 0x28) == '\x01') {
    lVar6 = *(longlong *)(param_3 + 0x18);
  }
  else {
    lVar6 = FUN_142fbda20(param_3 + 0x18);
  }
  local_5c = *(int *)(*(longlong *)(param_3 + 0x18) + 0x20);
  iVar10 = *(int *)(*(longlong *)(param_3 + 0x18) + 0x30);
  lVar11 = (longlong)*param_6 * 0x10 + *(longlong *)(lVar6 + 0xd0);
  if (*(short *)(lVar11 + 10) == 0) {
    *param_1 = 0;
    return param_1;
  }
  local_48 = (int *)0x0;
  local_40 = 0;
  local_3c = 0x80000000;
  FUN_14370c310(&PTR_vftable_1467f0638,&local_48,8,4);
  iVar10 = *(int *)(lVar11 + 4) - iVar10;
  iVar12 = *(short *)(lVar11 + 10) + iVar10;
  local_58 = iVar12;
  for (; iVar10 < iVar12; iVar10 = iVar10 + 1) {
    if ((*(short *)(*(longlong *)(lVar6 + 0x110) + (longlong)iVar10 * 2) == *param_5) &&
       (*(int *)(*(longlong *)(*(longlong *)(param_3 + 0x18) + 0xe0) + 0xc + (longlong)iVar10 * 0x14
                ) == -1)) {
      local_68 = iVar10;
      FUN_1438b2350(&local_68,&local_48);
    }
    else {
      local_64 = iVar10;
      FUN_1438b23b0(&local_64,&local_48);
    }
  }
  local_60 = iVar12;
  FUN_1438b23b0(&local_60,&local_48);
  if (local_40 == 0) {
    *param_1 = 0;
    local_40 = 0;
    if (-1 < (int)local_3c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_48,4,local_3c & 0x3fffffff);
    }
  }
  else {
    local_5c = local_5c + *param_6;
    FUN_14383a3c0(param_3,&local_5c);
    iVar10 = 0;
    param_6._0_4_ = 0;
    if (0 < local_40) {
      uVar9 = (ulonglong)((local_40 - 1U >> 1) + 1);
      piVar8 = local_48;
      do {
        piVar1 = piVar8 + 1;
        iVar12 = *piVar8;
        piVar8 = piVar8 + 2;
        iVar10 = iVar10 + -1 + (*piVar1 - iVar12);
        uVar9 = uVar9 - 1;
        param_6._0_4_ = iVar10;
      } while (uVar9 != 0);
    }
    *(short *)(lVar11 + 10) = *(short *)(lVar11 + 10) - (short)(int)param_6;
    *(int *)(lVar6 + 0x164) = *(int *)(lVar6 + 0x164) + (int)param_6;
    iVar10 = *local_48;
    if (0 < local_40) {
      lVar11 = 0;
      iVar12 = 2;
      do {
        iVar13 = *(int *)(lVar11 + (longlong)local_48);
        lVar15 = *(longlong *)(lVar6 + 0xe0);
        puVar7 = (undefined4 *)(lVar15 + (longlong)iVar13 * 0x14);
        lVar3 = (longlong)iVar10 * 0x14;
        *(undefined4 *)(lVar3 + lVar15) = *puVar7;
        *(undefined4 *)(lVar3 + 4 + lVar15) = puVar7[1];
        *(undefined4 *)(lVar3 + 8 + lVar15) = puVar7[2];
        *(undefined4 *)(lVar3 + 0xc + lVar15) = puVar7[3];
        *(undefined1 *)(lVar3 + 0x10 + lVar15) = *(undefined1 *)(puVar7 + 4);
        *(undefined1 *)(lVar3 + 0x11 + lVar15) = *(undefined1 *)((longlong)puVar7 + 0x11);
        *(undefined2 *)(lVar3 + 0x12 + lVar15) = *(undefined2 *)((longlong)puVar7 + 0x12);
        *(undefined2 *)(*(longlong *)(lVar6 + 0x110) + (longlong)iVar10 * 2) =
             *(undefined2 *)(*(longlong *)(lVar6 + 0x110) + (longlong)iVar13 * 2);
        iVar4 = *(int *)(lVar6 + 0x60);
        lVar15 = (longlong)iVar4;
        puVar2 = (undefined4 *)(*(longlong *)(lVar6 + 0x150) + (longlong)(iVar4 * iVar13) * 4);
        puVar7 = (undefined4 *)(*(longlong *)(lVar6 + 0x150) + (longlong)(iVar4 * iVar10) * 4);
        if (iVar4 == 1) {
          *puVar7 = *puVar2;
        }
        else if (0 < lVar15) {
          lVar14 = (longlong)puVar2 - (longlong)puVar7;
          do {
            *puVar7 = *(undefined4 *)(lVar14 + (longlong)puVar7);
            puVar7 = puVar7 + 1;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
        *(undefined4 *)(lVar3 + 4 + *(longlong *)(lVar6 + 0xe0)) =
             *(undefined4 *)
              (*(longlong *)(*(longlong *)(param_3 + 0x18) + 0xe0) + 4 +
              (longlong)(*(int *)(lVar11 + 4 + (longlong)local_48) + -1) * 0x14);
        local_54 = *(int *)(lVar11 + 4 + (longlong)local_48);
        if (iVar12 < local_40) {
          piVar8 = local_48 + iVar12;
        }
        else {
          piVar8 = &local_58;
        }
        iVar13 = *piVar8 - local_54;
        local_50[0] = iVar10 + 1;
        hkaiNavMeshThreadSafeUtils::moveOwnedEdgesDown(param_2,param_3,local_50,&local_54,iVar13);
        iVar10 = iVar10 + 1 + iVar13;
        lVar11 = lVar11 + 8;
        bVar5 = iVar12 < local_40;
        iVar12 = iVar12 + 2;
      } while (bVar5);
    }
    local_40 = 0;
    *param_1 = (int)param_6 != 0;
    if (-1 < (int)local_3c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_48,4,local_3c & 0x3fffffff);
    }
  }
  return param_1;
}



// FUNCTION 1438b2f60 FUN_1438b2f60 body=2126 status=ok
// SIG undefined FUN_1438b2f60(void)

void FUN_1438b2f60(undefined8 param_1,longlong param_2,longlong param_3,float *param_4,
                  float *param_5,longlong *param_6,longlong *param_7,char *param_8)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  float *pfVar12;
  longlong lVar13;
  float *pfVar14;
  longlong lVar15;
  float fVar16;
  float fVar19;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  uint uVar30;
  undefined1 *local_208;
  undefined1 *puStack_200;
  undefined1 *local_1f8;
  int local_1f0;
  uint local_1ec;
  undefined1 *local_1e8;
  int local_1e0;
  uint local_1dc;
  undefined1 *local_1d8;
  undefined1 *puStack_1d0;
  undefined1 *local_1c8;
  undefined1 *puStack_1c0;
  undefined1 *local_1b8;
  undefined1 *puStack_1b0;
  undefined1 *local_1a8;
  int local_1a0;
  uint local_19c;
  undefined1 local_198 [64];
  undefined1 *local_158;
  int local_150;
  uint local_14c;
  undefined1 local_148 [64];
  undefined1 *local_108;
  int local_100;
  uint local_fc;
  undefined1 local_f8 [64];
  undefined1 *local_b8;
  int local_b0;
  uint local_ac;
  undefined1 local_a8 [104];
  
  fVar24 = param_4[4] - *param_4;
  fVar26 = param_4[5] - param_4[1];
  fVar28 = param_4[6] - param_4[2];
  local_1e8 = (undefined1 *)0x0;
  local_1e0 = 0;
  local_1dc = 0x80000000;
  local_1f8 = (undefined1 *)0x0;
  fVar16 = fVar24 * fVar24;
  fVar19 = fVar26 * fVar26;
  auVar17._8_4_ = fVar28 * fVar28;
  local_1f0 = 0;
  local_1ec = 0x80000000;
  auVar17._4_4_ = auVar17._8_4_;
  auVar17._0_4_ = auVar17._8_4_;
  auVar17._12_4_ = auVar17._8_4_;
  auVar20._0_4_ = fVar19 + fVar16 + auVar17._8_4_;
  auVar20._4_4_ = fVar19 + fVar16 + auVar17._8_4_;
  auVar20._8_4_ = fVar19 + fVar16 + auVar17._8_4_;
  auVar20._12_4_ = fVar19 + fVar16 + auVar17._8_4_;
  auVar17 = rcpps(auVar17,auVar20);
  auVar21._0_4_ = auVar20._0_4_ * auVar17._0_4_;
  auVar21._4_4_ = auVar20._4_4_ * auVar17._4_4_;
  auVar21._8_4_ = auVar20._8_4_ * auVar17._8_4_;
  auVar21._12_4_ = auVar20._12_4_ * auVar17._12_4_;
  fVar24 = fVar24 * (2.0 - auVar21._0_4_) * auVar17._0_4_;
  fVar26 = fVar26 * (2.0 - auVar21._4_4_) * auVar17._4_4_;
  fVar28 = fVar28 * (2.0 - auVar21._8_4_) * auVar17._8_4_;
  fVar19 = param_4[2] * fVar28;
  fVar16 = 0.0 - (param_4[1] * fVar26 + *param_4 * fVar24 + fVar19);
  lVar15 = *param_6;
  lVar7 = param_6[1];
  iVar10 = (int)(lVar7 - lVar15 >> 3);
  if (0 < iVar10) {
    if (iVar10 < 0) {
      iVar10 = 0;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_1e8,iVar10,fVar19);
  }
  if (lVar15 != lVar7) {
    lVar3 = *(longlong *)(param_2 + 0x18);
    do {
      iVar9 = local_1e0;
      puVar8 = local_1e8;
      piVar11 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar3 + 0x28),*(undefined4 *)(lVar3 + 0x30),
                                     lVar3 + 0xc0);
      iVar10 = *(int *)(lVar3 + 0x40);
      iVar2 = *piVar11;
      if (iVar2 < iVar10) {
        pfVar14 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar3 + 0x38));
      }
      else {
        pfVar14 = (float *)((longlong)(iVar2 - iVar10) * 0x10 + *(longlong *)(lVar3 + 0xf0));
      }
      iVar2 = piVar11[1];
      if (iVar2 < iVar10) {
        pfVar12 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar3 + 0x38));
      }
      else {
        pfVar12 = (float *)((longlong)(iVar2 - iVar10) * 0x10 + *(longlong *)(lVar3 + 0xf0));
      }
      lVar15 = lVar15 + 8;
      local_1e0 = iVar9 + 1;
      auVar21._0_4_ = *pfVar12 * fVar24;
      auVar21._4_4_ = pfVar12[1] * fVar26;
      auVar21._8_4_ = pfVar12[2] * fVar28;
      *(float *)(puVar8 + (longlong)iVar9 * 8) =
           fVar16 + pfVar14[1] * fVar26 + pfVar14[2] * fVar28 + *pfVar14 * fVar24;
      auVar21._12_4_ = fVar16;
      *(float *)(puVar8 + (longlong)iVar9 * 8 + 4) =
           fVar16 + auVar21._4_4_ + auVar21._8_4_ + auVar21._0_4_;
    } while (lVar15 != lVar7);
  }
  fVar25 = param_5[4] - *param_5;
  fVar27 = param_5[5] - param_5[1];
  fVar29 = param_5[6] - param_5[2];
  fVar16 = fVar25 * fVar25;
  fVar19 = fVar27 * fVar27;
  fVar24 = fVar29 * fVar29;
  fVar26 = fVar19 + fVar16 + fVar24;
  fVar28 = fVar19 + fVar16 + fVar24;
  fVar23 = fVar19 + fVar16 + fVar24;
  auVar4._4_4_ = fVar28;
  auVar4._0_4_ = fVar26;
  auVar4._8_4_ = fVar23;
  auVar4._12_4_ = fVar19 + fVar16 + fVar24;
  auVar17 = rcpps(auVar21,auVar4);
  fVar25 = fVar25 * (2.0 - auVar17._0_4_ * fVar26) * auVar17._0_4_;
  fVar27 = fVar27 * (2.0 - auVar17._4_4_ * fVar28) * auVar17._4_4_;
  fVar29 = fVar29 * (2.0 - auVar17._8_4_ * fVar23) * auVar17._8_4_;
  auVar22._8_4_ = fVar29 * param_5[2];
  auVar22._4_4_ = auVar22._8_4_;
  auVar22._0_4_ = auVar22._8_4_;
  auVar22._12_4_ = auVar22._8_4_;
  fVar16 = 0.0 - (fVar27 * param_5[1] + fVar25 * *param_5 + auVar22._8_4_);
  lVar15 = *param_7;
  lVar7 = param_7[1];
  iVar10 = (int)(lVar7 - lVar15 >> 3);
  if ((int)(local_1ec & 0x3fffffff) < iVar10) {
    iVar2 = (local_1ec & 0x3fffffff) * 2;
    if (iVar10 < iVar2) {
      iVar10 = iVar2;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_1f8,iVar10,8);
  }
  if (lVar15 != lVar7) {
    lVar3 = *(longlong *)(param_3 + 0x18);
    do {
      piVar11 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar3 + 0x28),*(undefined4 *)(lVar3 + 0x30),
                                     lVar3 + 0xc0);
      iVar10 = *(int *)(lVar3 + 0x40);
      iVar2 = *piVar11;
      if (iVar2 < iVar10) {
        pfVar14 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar3 + 0x38));
      }
      else {
        pfVar14 = (float *)((longlong)(iVar2 - iVar10) * 0x10 + *(longlong *)(lVar3 + 0xf0));
      }
      iVar2 = piVar11[1];
      if (iVar2 < iVar10) {
        pfVar12 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar3 + 0x38));
      }
      else {
        pfVar12 = (float *)((longlong)(iVar2 - iVar10) * 0x10 + *(longlong *)(lVar3 + 0xf0));
      }
      lVar15 = lVar15 + 8;
      lVar13 = (longlong)local_1f0;
      local_1f0 = local_1f0 + 1;
      auVar22._0_4_ = *pfVar12 * fVar25;
      auVar22._4_4_ = pfVar12[1] * fVar27;
      auVar22._8_4_ = pfVar12[2] * fVar29;
      *(float *)(local_1f8 + lVar13 * 8) =
           fVar16 + pfVar14[1] * fVar27 + pfVar14[2] * fVar29 + *pfVar14 * fVar25;
      auVar22._12_4_ = fVar16;
      *(float *)(local_1f8 + lVar13 * 8 + 4) =
           fVar16 + auVar22._4_4_ + auVar22._8_4_ + auVar22._0_4_;
    } while (lVar15 != lVar7);
  }
  fVar16 = (*param_4 - param_4[4]) * (*param_4 - param_4[4]);
  fVar19 = (param_4[1] - param_4[5]) * (param_4[1] - param_4[5]);
  fVar24 = (param_4[2] - param_4[6]) * (param_4[2] - param_4[6]);
  fVar23 = fVar19 + fVar16 + fVar24;
  fVar25 = fVar19 + fVar16 + fVar24;
  fVar27 = fVar19 + fVar16 + fVar24;
  fVar24 = fVar19 + fVar16 + fVar24;
  auVar5._4_4_ = fVar25;
  auVar5._0_4_ = fVar23;
  auVar5._8_4_ = fVar27;
  auVar5._12_4_ = fVar24;
  auVar17 = rsqrtps(auVar22,auVar5);
  fVar16 = auVar17._0_4_;
  fVar19 = auVar17._4_4_;
  fVar26 = auVar17._8_4_;
  fVar28 = auVar17._12_4_;
  uVar1 = *(undefined4 *)(param_8 + 4);
  fVar16 = (float)(~-(uint)(fVar23 <= 0.0) &
                  (uint)((3.0 - fVar16 * fVar23 * fVar16) * fVar16 * 0.5 * fVar23));
  auVar18._4_4_ = uVar1;
  auVar18._0_4_ = uVar1;
  auVar18._8_4_ = uVar1;
  auVar18._12_4_ = uVar1;
  auVar6._4_4_ = ~-(uint)(fVar25 <= 0.0) &
                 (uint)((3.0 - fVar19 * fVar25 * fVar19) * fVar19 * 0.5 * fVar25);
  auVar6._0_4_ = fVar16;
  auVar6._8_4_ = ~-(uint)(fVar27 <= 0.0) &
                 (uint)((3.0 - fVar26 * fVar27 * fVar26) * fVar26 * 0.5 * fVar27);
  auVar6._12_4_ =
       ~-(uint)(fVar24 <= 0.0) & (uint)((3.0 - fVar28 * fVar24 * fVar28) * fVar28 * 0.5 * fVar24);
  auVar17 = divps(auVar18,auVar6);
  uVar30 = ~-(uint)(fVar16 == 0.0) & auVar17._0_4_;
  if (*param_8 == '\0') {
    local_b8 = local_a8;
    local_b0 = 0;
    local_108 = local_f8;
    local_ac = 0x80000008;
    local_158 = local_148;
    local_100 = 0;
    local_1a8 = local_198;
    local_fc = 0x80000008;
    local_150 = 0;
    local_14c = 0x80000008;
    local_1a0 = 0;
    puStack_200 = local_1e8 + (longlong)local_1e0 * 8;
    local_19c = 0x80000008;
    local_1d8 = (undefined1 *)*param_6;
    puStack_1d0 = (undefined1 *)param_6[1];
    local_208 = local_1e8;
    FUN_1438b6710(&local_1d8,&local_208,&local_b8,&local_158);
    puStack_1d0 = local_1f8 + (longlong)local_1f0 * 8;
    local_1d8 = local_1f8;
    local_208 = (undefined1 *)*param_7;
    puStack_200 = (undefined1 *)param_7[1];
    FUN_1438b6710(&local_208,&local_1d8,&local_108,&local_1a8);
    puStack_1d0 = local_1a8 + (longlong)local_1a0 * 8;
    puStack_1c0 = local_158 + (longlong)local_150 * 8;
    local_1d8 = local_1a8;
    puStack_1b0 = local_108 + (longlong)local_100 * 8;
    local_1c8 = local_158;
    puStack_200 = local_b8 + (longlong)local_b0 * 8;
    local_1b8 = local_108;
    local_208 = local_b8;
    FUN_1438b4fd0(param_1,param_2,param_3,param_4,param_5,&local_208,&local_1b8,&local_1c8,
                  &local_1d8,uVar30,param_8[1]);
    local_1a0 = 0;
    if (-1 < (int)local_19c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_1a8,8,local_19c & 0x3fffffff);
    }
    local_1a8 = (undefined1 *)0x0;
    local_19c = 0x80000000;
    local_150 = 0;
    if (-1 < (int)local_14c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_158,8,local_14c & 0x3fffffff);
    }
    local_158 = (undefined1 *)0x0;
    local_14c = 0x80000000;
    local_100 = 0;
    if (-1 < (int)local_fc) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_108,8,local_fc & 0x3fffffff);
    }
    local_108 = (undefined1 *)0x0;
    local_fc = 0x80000000;
    local_b0 = 0;
    if (-1 < (int)local_ac) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_b8,8,local_ac & 0x3fffffff);
    }
  }
  else {
    puStack_1b0 = local_1f8 + (longlong)local_1f0 * 8;
    puStack_1c0 = local_1e8 + (longlong)local_1e0 * 8;
    local_1b8 = local_1f8;
    local_1d8 = (undefined1 *)*param_7;
    puStack_1d0 = (undefined1 *)param_7[1];
    local_208 = (undefined1 *)*param_6;
    puStack_200 = (undefined1 *)param_6[1];
    local_1c8 = local_1e8;
    FUN_1438b4fd0(param_1,param_2,param_3,param_4,param_5,&local_208,&local_1d8,&local_1c8,
                  &local_1b8,uVar30,param_8[1]);
  }
  local_1f0 = 0;
  if (-1 < (int)local_1ec) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_1f8,8,local_1ec & 0x3fffffff);
  }
  local_1f8 = (undefined1 *)0x0;
  local_1ec = 0x80000000;
  local_1e0 = 0;
  if (-1 < (int)local_1dc) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_1e8,8,local_1dc & 0x3fffffff);
  }
  return;
}



// FUNCTION 1438b37b0 FUN_1438b37b0 body=2158 status=ok
// SIG undefined FUN_1438b37b0(void)

void FUN_1438b37b0(undefined8 param_1,longlong param_2,longlong param_3,float *param_4,
                  float *param_5,longlong *param_6,longlong *param_7,char *param_8)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong lVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  float *pfVar11;
  longlong lVar12;
  float *pfVar13;
  longlong lVar14;
  float fVar15;
  float fVar19;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  undefined1 *local_1f8;
  undefined1 *puStack_1f0;
  undefined1 *local_1e8;
  int local_1e0;
  uint local_1dc;
  undefined1 *local_1d8;
  int local_1d0;
  uint local_1cc;
  undefined1 *local_1c8;
  undefined1 *puStack_1c0;
  undefined1 *local_1b8;
  undefined1 *puStack_1b0;
  undefined1 *local_1a8;
  undefined1 *puStack_1a0;
  undefined1 *local_198;
  int local_190;
  uint local_18c;
  undefined1 local_188 [64];
  undefined1 *local_148;
  int local_140;
  uint local_13c;
  undefined1 local_138 [64];
  undefined1 *local_f8;
  int local_f0;
  uint local_ec;
  undefined1 local_e8 [64];
  undefined1 *local_a8;
  int local_a0;
  uint local_9c;
  undefined1 local_98 [88];
  
  fVar25 = param_4[8];
  fVar26 = param_4[4] - *param_4;
  fVar28 = param_4[5] - param_4[1];
  fVar29 = param_4[6] - param_4[2];
  local_1d8 = (undefined1 *)0x0;
  local_1d0 = 0;
  fVar15 = fVar26 * fVar26;
  fVar19 = fVar28 * fVar28;
  auVar16._8_4_ = fVar29 * fVar29;
  local_1cc = 0x80000000;
  local_1e8 = (undefined1 *)0x0;
  local_1e0 = 0;
  local_1dc = 0x80000000;
  auVar16._4_4_ = auVar16._8_4_;
  auVar16._0_4_ = auVar16._8_4_;
  auVar16._12_4_ = auVar16._8_4_;
  auVar20._0_4_ = fVar19 + fVar15 + auVar16._8_4_;
  auVar20._4_4_ = fVar19 + fVar15 + auVar16._8_4_;
  auVar20._8_4_ = fVar19 + fVar15 + auVar16._8_4_;
  auVar20._12_4_ = fVar19 + fVar15 + auVar16._8_4_;
  auVar16 = rcpps(auVar16,auVar20);
  fVar26 = fVar26 * fVar25 * (2.0 - auVar16._0_4_ * auVar20._0_4_) * auVar16._0_4_;
  fVar28 = fVar28 * fVar25 * (2.0 - auVar16._4_4_ * auVar20._4_4_) * auVar16._4_4_;
  fVar29 = fVar29 * fVar25 * (2.0 - auVar16._8_4_ * auVar20._8_4_) * auVar16._8_4_;
  lVar14 = *param_6;
  lVar6 = param_6[1];
  fVar25 = param_4[9] - (fVar28 * param_4[1] + fVar26 * *param_4 + fVar29 * param_4[2]);
  iVar9 = (int)(lVar6 - lVar14 >> 3);
  if (0 < iVar9) {
    if (iVar9 < 0) {
      iVar9 = 0;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_1d8,iVar9,8);
  }
  if (lVar14 != lVar6) {
    lVar3 = *(longlong *)(param_2 + 0x18);
    do {
      iVar8 = local_1d0;
      puVar7 = local_1d8;
      piVar10 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar3 + 0x28),*(undefined4 *)(lVar3 + 0x30),
                                     lVar3 + 0xc0);
      iVar9 = *(int *)(lVar3 + 0x40);
      iVar2 = *piVar10;
      if (iVar2 < iVar9) {
        pfVar13 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar3 + 0x38));
      }
      else {
        pfVar13 = (float *)((longlong)(iVar2 - iVar9) * 0x10 + *(longlong *)(lVar3 + 0xf0));
      }
      iVar2 = piVar10[1];
      if (iVar2 < iVar9) {
        pfVar11 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar3 + 0x38));
      }
      else {
        pfVar11 = (float *)((longlong)(iVar2 - iVar9) * 0x10 + *(longlong *)(lVar3 + 0xf0));
      }
      fVar15 = *pfVar11;
      fVar19 = pfVar11[1];
      fVar23 = pfVar11[2];
      lVar14 = lVar14 + 8;
      local_1d0 = iVar8 + 1;
      *(float *)(puVar7 + (longlong)iVar8 * 8) =
           fVar25 + pfVar13[1] * fVar28 + pfVar13[2] * fVar29 + *pfVar13 * fVar26;
      *(float *)(puVar7 + (longlong)iVar8 * 8 + 4) =
           fVar25 + fVar19 * fVar28 + fVar23 * fVar29 + fVar15 * fVar26;
    } while (lVar14 != lVar6);
  }
  fVar25 = param_5[8];
  fVar26 = param_5[4] - *param_5;
  fVar28 = param_5[5] - param_5[1];
  fVar29 = param_5[6] - param_5[2];
  fVar15 = fVar26 * fVar26;
  fVar19 = fVar28 * fVar28;
  auVar17._8_4_ = fVar29 * fVar29;
  auVar17._4_4_ = auVar17._8_4_;
  auVar17._0_4_ = auVar17._8_4_;
  auVar17._12_4_ = auVar17._8_4_;
  auVar21._0_4_ = fVar19 + fVar15 + auVar17._8_4_;
  auVar21._4_4_ = fVar19 + fVar15 + auVar17._8_4_;
  auVar21._8_4_ = fVar19 + fVar15 + auVar17._8_4_;
  auVar21._12_4_ = fVar19 + fVar15 + auVar17._8_4_;
  auVar16 = rcpps(auVar17,auVar21);
  fVar26 = fVar26 * fVar25 * (2.0 - auVar16._0_4_ * auVar21._0_4_) * auVar16._0_4_;
  fVar28 = fVar28 * fVar25 * (2.0 - auVar16._4_4_ * auVar21._4_4_) * auVar16._4_4_;
  fVar29 = fVar29 * fVar25 * (2.0 - auVar16._8_4_ * auVar21._8_4_) * auVar16._8_4_;
  fVar25 = fVar26 * *param_5;
  fVar15 = fVar28 * param_5[1];
  fVar19 = fVar29 * param_5[2];
  auVar22._0_4_ = fVar15 + fVar25 + fVar19;
  auVar22._4_4_ = fVar15 + fVar25 + fVar19;
  auVar22._8_4_ = fVar15 + fVar25 + fVar19;
  auVar22._12_4_ = fVar15 + fVar25 + fVar19;
  lVar14 = *param_7;
  lVar6 = param_7[1];
  fVar25 = param_5[9] - auVar22._12_4_;
  iVar9 = (int)(lVar6 - lVar14 >> 3);
  if ((int)(local_1dc & 0x3fffffff) < iVar9) {
    iVar2 = (local_1dc & 0x3fffffff) * 2;
    if (iVar9 < iVar2) {
      iVar9 = iVar2;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_1e8,iVar9,8);
  }
  if (lVar14 != lVar6) {
    lVar3 = *(longlong *)(param_3 + 0x18);
    do {
      piVar10 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar3 + 0x28),*(undefined4 *)(lVar3 + 0x30),
                                     lVar3 + 0xc0);
      iVar9 = *(int *)(lVar3 + 0x40);
      iVar2 = *piVar10;
      if (iVar2 < iVar9) {
        pfVar13 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar3 + 0x38));
      }
      else {
        pfVar13 = (float *)((longlong)(iVar2 - iVar9) * 0x10 + *(longlong *)(lVar3 + 0xf0));
      }
      iVar2 = piVar10[1];
      if (iVar2 < iVar9) {
        pfVar11 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar3 + 0x38));
      }
      else {
        pfVar11 = (float *)((longlong)(iVar2 - iVar9) * 0x10 + *(longlong *)(lVar3 + 0xf0));
      }
      lVar14 = lVar14 + 8;
      lVar12 = (longlong)local_1e0;
      local_1e0 = local_1e0 + 1;
      auVar22._0_4_ = *pfVar11 * fVar26;
      auVar22._4_4_ = pfVar11[1] * fVar28;
      auVar22._8_4_ = pfVar11[2] * fVar29;
      *(float *)(local_1e8 + lVar12 * 8) =
           fVar25 + pfVar13[1] * fVar28 + pfVar13[2] * fVar29 + *pfVar13 * fVar26;
      auVar22._12_4_ = fVar25;
      *(float *)(local_1e8 + lVar12 * 8 + 4) =
           fVar25 + auVar22._4_4_ + auVar22._8_4_ + auVar22._0_4_;
    } while (lVar14 != lVar6);
  }
  fVar25 = (*param_4 - param_4[4]) * (*param_4 - param_4[4]);
  fVar15 = (param_4[1] - param_4[5]) * (param_4[1] - param_4[5]);
  fVar19 = (param_4[2] - param_4[6]) * (param_4[2] - param_4[6]);
  fVar29 = fVar15 + fVar25 + fVar19;
  fVar23 = fVar15 + fVar25 + fVar19;
  fVar24 = fVar15 + fVar25 + fVar19;
  fVar19 = fVar15 + fVar25 + fVar19;
  auVar4._4_4_ = fVar23;
  auVar4._0_4_ = fVar29;
  auVar4._8_4_ = fVar24;
  auVar4._12_4_ = fVar19;
  auVar16 = rsqrtps(auVar22,auVar4);
  fVar25 = auVar16._0_4_;
  fVar15 = auVar16._4_4_;
  fVar26 = auVar16._8_4_;
  fVar28 = auVar16._12_4_;
  uVar1 = *(undefined4 *)(param_8 + 4);
  fVar25 = (float)(~-(uint)(fVar29 <= 0.0) &
                  (uint)((3.0 - fVar25 * fVar29 * fVar25) * fVar25 * 0.5 * fVar29));
  auVar18._4_4_ = uVar1;
  auVar18._0_4_ = uVar1;
  auVar18._8_4_ = uVar1;
  auVar18._12_4_ = uVar1;
  auVar5._4_4_ = ~-(uint)(fVar23 <= 0.0) &
                 (uint)((3.0 - fVar15 * fVar23 * fVar15) * fVar15 * 0.5 * fVar23);
  auVar5._0_4_ = fVar25;
  auVar5._8_4_ = ~-(uint)(fVar24 <= 0.0) &
                 (uint)((3.0 - fVar26 * fVar24 * fVar26) * fVar26 * 0.5 * fVar24);
  auVar5._12_4_ =
       ~-(uint)(fVar19 <= 0.0) & (uint)((3.0 - fVar28 * fVar19 * fVar28) * fVar28 * 0.5 * fVar19);
  auVar16 = divps(auVar18,auVar5);
  uVar27 = ~-(uint)(fVar25 == 0.0) & auVar16._0_4_;
  if (*param_8 == '\0') {
    local_a8 = local_98;
    local_a0 = 0;
    local_f8 = local_e8;
    local_9c = 0x80000008;
    local_148 = local_138;
    local_f0 = 0;
    local_198 = local_188;
    local_ec = 0x80000008;
    local_140 = 0;
    local_13c = 0x80000008;
    local_190 = 0;
    puStack_1f0 = local_1d8 + (longlong)local_1d0 * 8;
    local_18c = 0x80000008;
    local_1c8 = (undefined1 *)*param_6;
    puStack_1c0 = (undefined1 *)param_6[1];
    local_1f8 = local_1d8;
    FUN_1438b6710(&local_1c8,&local_1f8,&local_a8,&local_148);
    puStack_1c0 = local_1e8 + (longlong)local_1e0 * 8;
    local_1c8 = local_1e8;
    local_1f8 = (undefined1 *)*param_7;
    puStack_1f0 = (undefined1 *)param_7[1];
    FUN_1438b6710(&local_1f8,&local_1c8,&local_f8,&local_198);
    puStack_1c0 = local_198 + (longlong)local_190 * 8;
    puStack_1b0 = local_148 + (longlong)local_140 * 8;
    local_1c8 = local_198;
    puStack_1a0 = local_f8 + (longlong)local_f0 * 8;
    local_1b8 = local_148;
    puStack_1f0 = local_a8 + (longlong)local_a0 * 8;
    local_1a8 = local_f8;
    local_1f8 = local_a8;
    FUN_1438b5880(param_1,param_2,param_3,param_4,param_5,&local_1f8,&local_1a8,&local_1b8,
                  &local_1c8,uVar27,param_8[1]);
    local_190 = 0;
    if (-1 < (int)local_18c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_198,8,local_18c & 0x3fffffff);
    }
    local_198 = (undefined1 *)0x0;
    local_18c = 0x80000000;
    local_140 = 0;
    if (-1 < (int)local_13c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_148,8,local_13c & 0x3fffffff);
    }
    local_148 = (undefined1 *)0x0;
    local_13c = 0x80000000;
    local_f0 = 0;
    if (-1 < (int)local_ec) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_f8,8,local_ec & 0x3fffffff);
    }
    local_f8 = (undefined1 *)0x0;
    local_ec = 0x80000000;
    local_a0 = 0;
    if (-1 < (int)local_9c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_a8,8,local_9c & 0x3fffffff);
    }
  }
  else {
    puStack_1a0 = local_1e8 + (longlong)local_1e0 * 8;
    puStack_1b0 = local_1d8 + (longlong)local_1d0 * 8;
    local_1a8 = local_1e8;
    local_1c8 = (undefined1 *)*param_7;
    puStack_1c0 = (undefined1 *)param_7[1];
    local_1f8 = (undefined1 *)*param_6;
    puStack_1f0 = (undefined1 *)param_6[1];
    local_1b8 = local_1d8;
    FUN_1438b5880(param_1,param_2,param_3,param_4,param_5,&local_1f8,&local_1c8,&local_1b8,
                  &local_1a8,uVar27,param_8[1]);
  }
  local_1e0 = 0;
  if (-1 < (int)local_1dc) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_1e8,8,local_1dc & 0x3fffffff);
  }
  local_1e8 = (undefined1 *)0x0;
  local_1dc = 0x80000000;
  local_1d0 = 0;
  if (-1 < (int)local_1cc) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_1d8,8,local_1cc & 0x3fffffff);
  }
  return;
}



// FUNCTION 1438b4020 FUN_1438b4020 body=1874 status=ok
// SIG undefined FUN_1438b4020(void)

void FUN_1438b4020(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  float param_5)

{
  undefined8 uVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 *puVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  undefined8 *puVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_res8;
  
  pfVar8 = (float *)*param_2;
  fVar12 = 0.0;
  puVar10 = (undefined8 *)*param_1;
  fVar13 = 0.0;
  if (puVar10 != (undefined8 *)param_1[1]) {
    local_res8 = *puVar10;
  }
  if (pfVar8 == (float *)param_2[1]) {
    fVar17 = (float)local_res8;
    fVar18 = local_res8._4_4_;
  }
  else {
    fVar17 = 1.0 - pfVar8[1];
    fVar18 = 1.0 - *pfVar8;
  }
  uVar5 = *(uint *)((longlong)param_3 + 0xc) & 0x3fffffff;
  iVar11 = (int)(param_1[1] - (longlong)puVar10 >> 3) +
           (int)((longlong)pfVar8 - param_2[1] >> 3) * 2 + 2;
  if ((int)uVar5 < iVar11) {
    iVar3 = uVar5 * 2;
    if (iVar11 < iVar3) {
      iVar11 = iVar3;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,param_3,iVar11,0x10);
  }
  iVar11 = (int)(*param_2 - param_2[1] >> 3) + 2 + (int)(param_1[1] - *param_1 >> 3) * 2;
  uVar5 = *(uint *)((longlong)param_4 + 0xc) & 0x3fffffff;
  if ((int)uVar5 < iVar11) {
    iVar3 = uVar5 * 2;
    if (iVar11 < iVar3) {
      iVar11 = iVar3;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,param_4,iVar11,0x10);
  }
  if (puVar10 != (undefined8 *)param_1[1]) {
    do {
      if (param_5 < local_res8._4_4_) goto LAB_1438b41b3;
      lVar4 = param_3[1];
      puVar10 = puVar10 + 1;
      *(int *)(param_3 + 1) = (int)lVar4 + 1;
      puVar6 = (undefined4 *)((longlong)(int)lVar4 * 0x10 + *param_3);
      puVar6[2] = fVar13;
      fVar13 = (float)((int)fVar13 + 1);
      *puVar6 = (float)local_res8;
      puVar6[1] = local_res8._4_4_;
      puVar6[3] = 0xffffffff;
      local_res8 = *puVar10;
    } while (puVar10 != (undefined8 *)param_1[1]);
  }
LAB_1438b41b3:
  pfVar9 = pfVar8;
  if (pfVar8 != (float *)param_2[1]) {
    do {
      pfVar9 = pfVar8;
      if (param_5 < fVar18) break;
      lVar4 = param_4[1];
      pfVar9 = pfVar8 + -2;
      *(int *)(param_4 + 1) = (int)lVar4 + 1;
      pfVar7 = (float *)((longlong)(int)lVar4 * 0x10 + *param_4);
      pfVar7[2] = fVar12;
      fVar12 = (float)((int)fVar12 + 1);
      *pfVar7 = fVar17;
      pfVar7[1] = fVar18;
      pfVar7[3] = -NAN;
      fVar17 = 1.0 - pfVar8[-1];
      fVar18 = 1.0 - *pfVar9;
      pfVar8 = pfVar9;
    } while (pfVar9 != (float *)param_2[1]);
  }
  if ((((puVar10 != (undefined8 *)param_1[1]) && (pfVar9 != (float *)param_2[1])) &&
      ((float)local_res8 <= -param_5)) && (fVar17 <= -param_5)) {
    lVar4 = param_3[1];
    *(int *)(param_3 + 1) = (int)lVar4 + 1;
    pfVar8 = (float *)((longlong)(int)lVar4 * 0x10 + *param_3);
    *pfVar8 = (float)local_res8;
    local_res8._0_4_ = 0.0;
    pfVar8[1] = 0.0;
    pfVar8[2] = fVar13;
    pfVar8[3] = -NAN;
    lVar4 = param_4[1];
    *(int *)(param_4 + 1) = (int)lVar4 + 1;
    pfVar8 = (float *)((longlong)(int)lVar4 * 0x10 + *param_4);
    *pfVar8 = fVar17;
    fVar17 = 0.0;
    pfVar8[1] = 0.0;
    pfVar8[2] = fVar12;
    pfVar8[3] = -NAN;
  }
  if (puVar10 != (undefined8 *)param_1[1]) {
    pfVar8 = pfVar9;
    fVar14 = local_res8._4_4_;
    fVar2 = fVar12;
    if (pfVar9 != (float *)param_2[1]) {
      fVar14 = (float)local_res8 - fVar17;
      fVar16 = -param_5;
      if (fVar14 < fVar16) goto LAB_1438b44e7;
LAB_1438b42d0:
      do {
        uVar5 = (uint)(param_5 < fVar14);
LAB_1438b42d3:
        while (fVar14 = local_res8._4_4_, fVar15 = param_5 + 1.0, pfVar8 = pfVar9,
              local_res8._4_4_ = fVar14, fVar2 = fVar12, uVar5 != 0xffffffff) {
          if (uVar5 == 1) {
            if (fVar15 < (float)local_res8) goto LAB_1438b4615;
            lVar4 = param_4[1];
            *(int *)(param_4 + 1) = (int)lVar4 + 1;
            pfVar8 = (float *)((longlong)(int)lVar4 * 0x10 + *param_4);
            pfVar8[2] = fVar12;
            pfVar8[3] = -NAN;
            *pfVar8 = fVar17;
            if ((float)local_res8 + param_5 < fVar18) {
              pfVar8[1] = (float)local_res8;
              uVar5 = 0;
              fVar17 = (float)local_res8;
            }
            else {
              pfVar8[1] = fVar18;
              pfVar8 = pfVar9 + -2;
              fVar2 = (float)((int)fVar12 + 1);
              if (pfVar8 == (float *)param_2[1]) goto LAB_1438b4615;
              fVar17 = 1.0 - pfVar9[-1];
              fVar18 = 1.0 - *pfVar8;
LAB_1438b44d7:
              fVar12 = (float)((int)fVar12 + 1);
              pfVar9 = pfVar9 + -2;
              fVar14 = (float)local_res8 - fVar17;
              if (fVar16 <= fVar14) goto LAB_1438b42d0;
LAB_1438b44e7:
              uVar5 = 0xffffffff;
            }
          }
          else {
            if ((fVar15 < fVar14) && (fVar15 < fVar18)) {
              fVar16 = *(float *)(param_3 + 1);
              fVar15 = *(float *)(param_4 + 1);
              *(int *)(param_3 + 1) = (int)fVar16 + 1;
              pfVar9 = (float *)((longlong)(int)fVar16 * 0x10 + *param_3);
              *pfVar9 = (float)local_res8;
              local_res8._0_4_ = 1.0;
              pfVar9[1] = 1.0;
              pfVar9[2] = fVar13;
              pfVar9[3] = fVar15;
              lVar4 = param_4[1];
              *(int *)(param_4 + 1) = (int)lVar4 + 1;
              pfVar9 = (float *)((longlong)(int)lVar4 * 0x10 + *param_4);
              *pfVar9 = fVar17;
              fVar17 = 1.0;
              pfVar9[1] = 1.0;
              pfVar9[2] = fVar12;
              pfVar9[3] = fVar16;
              goto LAB_1438b4615;
            }
            fVar2 = *(float *)(param_3 + 1);
            fVar15 = *(float *)(param_4 + 1);
            *(int *)(param_3 + 1) = (int)fVar2 + 1;
            pfVar7 = (float *)((longlong)(int)fVar2 * 0x10 + *param_3);
            pfVar7[2] = fVar13;
            pfVar7[3] = fVar15;
            *pfVar7 = (float)local_res8;
            if (fVar14 - fVar18 < fVar16) {
              pfVar7[1] = fVar14;
              fVar13 = (float)((int)fVar13 + 1);
              lVar4 = param_4[1];
              puVar10 = puVar10 + 1;
              *(int *)(param_4 + 1) = (int)lVar4 + 1;
              pfVar8 = (float *)((longlong)(int)lVar4 * 0x10 + *param_4);
              *pfVar8 = fVar17;
              pfVar8[1] = fVar14;
              pfVar8[2] = fVar12;
              pfVar8[3] = fVar2;
              fVar17 = fVar14;
              if (puVar10 == (undefined8 *)param_1[1]) goto LAB_1438b46b5;
              local_res8._0_4_ = (float)*puVar10;
              local_res8._4_4_ = (float)((ulonglong)*puVar10 >> 0x20);
              uVar5 = (uint)(fVar14 + param_5 < (float)local_res8);
            }
            else {
              pfVar8 = pfVar9 + -2;
              if (fVar14 - fVar18 <= param_5) {
                pfVar7[1] = fVar14;
                fVar13 = (float)((int)fVar13 + 1);
                lVar4 = param_4[1];
                puVar10 = puVar10 + 1;
                *(int *)(param_4 + 1) = (int)lVar4 + 1;
                pfVar7 = (float *)((longlong)(int)lVar4 * 0x10 + *param_4);
                pfVar7[2] = fVar12;
                *pfVar7 = fVar17;
                pfVar7[1] = fVar18;
                pfVar7[3] = fVar2;
                if (puVar10 != (undefined8 *)param_1[1]) {
                  local_res8._4_4_ = (float)((ulonglong)*puVar10 >> 0x20);
                  local_res8._0_4_ = (float)*puVar10;
                }
                if (pfVar8 != (float *)param_2[1]) {
                  fVar17 = 1.0 - pfVar9[-1];
                  fVar18 = 1.0 - *pfVar8;
                }
                fVar14 = local_res8._4_4_;
                fVar2 = (float)((int)fVar12 + 1);
                if ((puVar10 != (undefined8 *)param_1[1]) && (pfVar8 != (float *)param_2[1]))
                goto LAB_1438b44d7;
                goto LAB_1438b4615;
              }
              pfVar7[1] = fVar18;
              lVar4 = param_4[1];
              *(int *)(param_4 + 1) = (int)lVar4 + 1;
              pfVar7 = (float *)((longlong)(int)lVar4 * 0x10 + *param_4);
              pfVar7[2] = fVar12;
              fVar12 = (float)((int)fVar12 + 1);
              *pfVar7 = fVar17;
              pfVar7[1] = fVar18;
              pfVar7[3] = fVar2;
              local_res8._0_4_ = fVar18;
              fVar2 = fVar12;
              if (pfVar8 == (float *)param_2[1]) goto LAB_1438b4615;
              pfVar7 = pfVar9 + -1;
              uVar5 = (1.0 - *pfVar7 <= fVar18 + param_5) - 1;
              pfVar9 = pfVar8;
              fVar17 = 1.0 - *pfVar7;
              fVar18 = 1.0 - *pfVar8;
            }
          }
        }
        if (fVar15 < fVar17) break;
        lVar4 = param_3[1];
        *(int *)(param_3 + 1) = (int)lVar4 + 1;
        pfVar8 = (float *)((longlong)(int)lVar4 * 0x10 + *param_3);
        pfVar8[2] = fVar13;
        pfVar8[3] = -NAN;
        *pfVar8 = (float)local_res8;
        if (fVar17 + param_5 < fVar14) {
          pfVar8[1] = fVar17;
          uVar5 = 0;
          local_res8._0_4_ = fVar17;
          goto LAB_1438b42d3;
        }
        fVar13 = (float)((int)fVar13 + 1);
        pfVar8[1] = fVar14;
        puVar10 = puVar10 + 1;
        if (puVar10 == (undefined8 *)param_1[1]) goto LAB_1438b46b5;
        local_res8._0_4_ = (float)*puVar10;
        fVar14 = (float)local_res8 - fVar17;
        local_res8._4_4_ = (float)((ulonglong)*puVar10 >> 0x20);
        if (fVar14 < fVar16) {
          uVar5 = 0xffffffff;
          goto LAB_1438b42d3;
        }
      } while( true );
    }
LAB_1438b4615:
    fVar12 = fVar2;
    pfVar9 = pfVar8;
    if (puVar10 != (undefined8 *)param_1[1]) {
      lVar4 = param_3[1];
      puVar10 = puVar10 + 1;
      *(int *)(param_3 + 1) = (int)lVar4 + 1;
      pfVar8 = (float *)((longlong)(int)lVar4 * 0x10 + *param_3);
      pfVar8[2] = fVar13;
      *pfVar8 = (float)local_res8;
      pfVar8[1] = fVar14;
      pfVar8[3] = -NAN;
      if (puVar10 != (undefined8 *)param_1[1]) {
        do {
          fVar13 = (float)((int)fVar13 + 1);
          uVar1 = *puVar10;
          puVar10 = puVar10 + 1;
          lVar4 = param_3[1];
          local_res8._0_4_ = (float)uVar1;
          local_res8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
          *(int *)(param_3 + 1) = (int)lVar4 + 1;
          puVar6 = (undefined4 *)((longlong)(int)lVar4 * 0x10 + *param_3);
          puVar6[2] = fVar13;
          *puVar6 = (float)local_res8;
          puVar6[1] = local_res8._4_4_;
          puVar6[3] = 0xffffffff;
        } while (puVar10 != (undefined8 *)param_1[1]);
      }
    }
  }
LAB_1438b46b5:
  if (pfVar9 != (float *)param_2[1]) {
    lVar4 = param_4[1];
    pfVar9 = pfVar9 + -2;
    *(int *)(param_4 + 1) = (int)lVar4 + 1;
    pfVar8 = (float *)((longlong)(int)lVar4 * 0x10 + *param_4);
    pfVar8[2] = fVar12;
    *pfVar8 = fVar17;
    pfVar8[1] = fVar18;
    pfVar8[3] = -NAN;
    if (pfVar9 != (float *)param_2[1]) {
      do {
        fVar12 = (float)((int)fVar12 + 1);
        lVar4 = param_4[1];
        fVar13 = pfVar9[1];
        fVar17 = *pfVar9;
        pfVar9 = pfVar9 + -2;
        *(int *)(param_4 + 1) = (int)lVar4 + 1;
        pfVar8 = (float *)((longlong)(int)lVar4 * 0x10 + *param_4);
        pfVar8[2] = fVar12;
        *pfVar8 = 1.0 - fVar13;
        pfVar8[1] = 1.0 - fVar17;
        pfVar8[3] = -NAN;
      } while (pfVar9 != (float *)param_2[1]);
    }
  }
  return;
}



// FUNCTION 1438b4780 FUN_1438b4780 body=1411 status=ok
// SIG undefined FUN_1438b4780(void)

void FUN_1438b4780(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  float param_5)

{
  undefined8 uVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 *puVar8;
  float *pfVar9;
  undefined8 *puVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_res8;
  
  pfVar6 = (float *)*param_2;
  fVar13 = 0.0;
  fVar12 = 0.0;
  puVar10 = (undefined8 *)*param_1;
  fVar14 = 0.0;
  fVar15 = 0.0;
  if (puVar10 != (undefined8 *)param_1[1]) {
    local_res8 = *puVar10;
  }
  fVar17 = (float)local_res8;
  fVar18 = local_res8._4_4_;
  if (pfVar6 != (float *)param_2[1]) {
    fVar17 = 1.0 - pfVar6[1];
    fVar18 = 1.0 - *pfVar6;
  }
  iVar11 = (int)(param_1[1] - (longlong)puVar10 >> 3) +
           (int)((longlong)pfVar6 - param_2[1] >> 3) * 2;
  uVar5 = *(uint *)((longlong)param_3 + 0xc) & 0x3fffffff;
  if ((int)uVar5 < iVar11) {
    iVar3 = uVar5 * 2;
    if (iVar11 < iVar3) {
      iVar11 = iVar3;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,param_3,iVar11,0x10);
  }
  iVar11 = (int)(*param_2 - param_2[1] >> 3) + (int)(param_1[1] - *param_1 >> 3) * 2;
  uVar5 = *(uint *)((longlong)param_4 + 0xc) & 0x3fffffff;
  if ((int)uVar5 < iVar11) {
    iVar3 = uVar5 * 2;
    if (iVar11 < iVar3) {
      iVar11 = iVar3;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,param_4,iVar11,0x10);
  }
  if ((puVar10 != (undefined8 *)param_1[1]) && (pfVar6 != (float *)param_2[1])) {
    fVar15 = (float)local_res8 - fVar17;
    fVar16 = -param_5;
    pfVar9 = pfVar6;
    if (fVar16 <= fVar15) goto LAB_1438b48dc;
    uVar5 = 0xffffffff;
    fVar15 = (float)local_res8;
LAB_1438b48df:
    do {
      local_res8._0_4_ = fVar15;
LAB_1438b48f0:
      while (uVar5 != 0xffffffff) {
        fVar15 = fVar14;
        if (uVar5 == 1) {
          lVar4 = param_4[1];
          *(int *)(param_4 + 1) = (int)lVar4 + 1;
          pfVar6 = (float *)((longlong)(int)lVar4 * 0x10 + *param_4);
          pfVar6[2] = fVar13;
          pfVar6[3] = -NAN;
          *pfVar6 = fVar17;
          if ((float)local_res8 + param_5 < fVar18) {
            pfVar6[1] = (float)local_res8;
            uVar5 = 0;
            fVar17 = (float)local_res8;
          }
          else {
            fVar12 = (float)((int)fVar13 + 1);
            pfVar6[1] = fVar18;
            pfVar6 = pfVar9 + -2;
            if (pfVar6 == (float *)param_2[1]) goto LAB_1438b4bb2;
            fVar17 = 1.0 - pfVar9[-1];
            fVar18 = 1.0 - *pfVar6;
LAB_1438b4aba:
            if (fVar16 <= (float)local_res8 - fVar17) {
              uVar5 = (uint)(param_5 < (float)local_res8 - fVar17);
              pfVar9 = pfVar9 + -2;
              fVar13 = (float)((int)fVar13 + 1);
            }
            else {
              uVar5 = 0xffffffff;
              pfVar9 = pfVar9 + -2;
              fVar13 = (float)((int)fVar13 + 1);
            }
          }
        }
        else {
          fVar2 = *(float *)(param_3 + 1);
          fVar12 = *(float *)(param_4 + 1);
          *(int *)(param_3 + 1) = (int)fVar2 + 1;
          pfVar7 = (float *)((longlong)(int)fVar2 * 0x10 + *param_3);
          pfVar7[2] = fVar14;
          pfVar7[3] = fVar12;
          *pfVar7 = (float)local_res8;
          if (local_res8._4_4_ - fVar18 < fVar16) {
            pfVar7[1] = local_res8._4_4_;
            fVar14 = (float)((int)fVar14 + 1);
            lVar4 = param_4[1];
            puVar10 = puVar10 + 1;
            *(int *)(param_4 + 1) = (int)lVar4 + 1;
            pfVar6 = (float *)((longlong)(int)lVar4 * 0x10 + *param_4);
            *pfVar6 = fVar17;
            pfVar6[1] = local_res8._4_4_;
            pfVar6[2] = fVar13;
            pfVar6[3] = fVar2;
            fVar17 = local_res8._4_4_;
            if (puVar10 == (undefined8 *)param_1[1]) goto LAB_1438b4c47;
            local_res8._0_4_ = (float)*puVar10;
            uVar5 = (uint)(local_res8._4_4_ + param_5 < (float)local_res8);
            fVar15 = (float)local_res8;
            local_res8 = *puVar10;
            goto LAB_1438b48df;
          }
          pfVar6 = pfVar9 + -2;
          if (local_res8._4_4_ - fVar18 <= param_5) {
            pfVar7[1] = local_res8._4_4_;
            fVar14 = (float)((int)fVar14 + 1);
            lVar4 = param_4[1];
            puVar10 = puVar10 + 1;
            *(int *)(param_4 + 1) = (int)lVar4 + 1;
            pfVar7 = (float *)((longlong)(int)lVar4 * 0x10 + *param_4);
            pfVar7[2] = fVar13;
            fVar12 = (float)((int)fVar13 + 1);
            *pfVar7 = fVar17;
            pfVar7[1] = fVar18;
            pfVar7[3] = fVar2;
            if (puVar10 != (undefined8 *)param_1[1]) {
              local_res8._4_4_ = (float)((ulonglong)*puVar10 >> 0x20);
              local_res8._0_4_ = (float)*puVar10;
            }
            if (pfVar6 != (float *)param_2[1]) {
              fVar17 = 1.0 - pfVar9[-1];
              fVar18 = 1.0 - *pfVar6;
            }
            fVar15 = fVar14;
            if ((puVar10 != (undefined8 *)param_1[1]) && (pfVar6 != (float *)param_2[1]))
            goto LAB_1438b4aba;
            goto LAB_1438b4bb2;
          }
          pfVar7[1] = fVar18;
          lVar4 = param_4[1];
          *(int *)(param_4 + 1) = (int)lVar4 + 1;
          pfVar7 = (float *)((longlong)(int)lVar4 * 0x10 + *param_4);
          pfVar7[2] = fVar13;
          fVar12 = (float)((int)fVar13 + 1);
          *pfVar7 = fVar17;
          pfVar7[1] = fVar18;
          pfVar7[3] = fVar2;
          local_res8._0_4_ = fVar18;
          if (pfVar6 == (float *)param_2[1]) goto LAB_1438b4bb2;
          fVar17 = 1.0 - pfVar9[-1];
          uVar5 = (fVar17 <= fVar18 + param_5) - 1;
          pfVar9 = pfVar6;
          fVar18 = 1.0 - *pfVar6;
          fVar13 = fVar12;
        }
      }
      lVar4 = param_3[1];
      *(int *)(param_3 + 1) = (int)lVar4 + 1;
      pfVar6 = (float *)((longlong)(int)lVar4 * 0x10 + *param_3);
      pfVar6[2] = fVar14;
      pfVar6[3] = -NAN;
      *pfVar6 = (float)local_res8;
      if (fVar17 + param_5 < local_res8._4_4_) {
        pfVar6[1] = fVar17;
        uVar5 = 0;
        local_res8._0_4_ = fVar17;
        goto LAB_1438b48f0;
      }
      fVar14 = (float)((int)fVar14 + 1);
      pfVar6[1] = local_res8._4_4_;
      puVar10 = puVar10 + 1;
      if (puVar10 == (undefined8 *)param_1[1]) goto LAB_1438b4c47;
      local_res8 = *puVar10;
      fVar15 = (float)local_res8 - fVar17;
      if (fVar16 <= fVar15) {
LAB_1438b48dc:
        uVar5 = (uint)(param_5 < fVar15);
        fVar15 = (float)local_res8;
      }
      else {
        uVar5 = 0xffffffff;
        fVar15 = (float)local_res8;
      }
    } while( true );
  }
LAB_1438b4bb2:
  pfVar9 = pfVar6;
  fVar13 = fVar12;
  if (puVar10 != (undefined8 *)param_1[1]) {
    lVar4 = param_3[1];
    puVar10 = puVar10 + 1;
    *(int *)(param_3 + 1) = (int)lVar4 + 1;
    pfVar6 = (float *)((longlong)(int)lVar4 * 0x10 + *param_3);
    pfVar6[2] = fVar15;
    *pfVar6 = (float)local_res8;
    pfVar6[1] = local_res8._4_4_;
    pfVar6[3] = -NAN;
    if (puVar10 != (undefined8 *)param_1[1]) {
      do {
        fVar15 = (float)((int)fVar15 + 1);
        uVar1 = *puVar10;
        puVar10 = puVar10 + 1;
        lVar4 = param_3[1];
        local_res8._0_4_ = (float)uVar1;
        local_res8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
        *(int *)(param_3 + 1) = (int)lVar4 + 1;
        puVar8 = (undefined4 *)((longlong)(int)lVar4 * 0x10 + *param_3);
        puVar8[2] = fVar15;
        *puVar8 = (float)local_res8;
        puVar8[1] = local_res8._4_4_;
        puVar8[3] = 0xffffffff;
      } while (puVar10 != (undefined8 *)param_1[1]);
    }
  }
LAB_1438b4c47:
  if (pfVar9 != (float *)param_2[1]) {
    lVar4 = param_4[1];
    pfVar9 = pfVar9 + -2;
    *(int *)(param_4 + 1) = (int)lVar4 + 1;
    pfVar6 = (float *)((longlong)(int)lVar4 * 0x10 + *param_4);
    pfVar6[2] = fVar13;
    *pfVar6 = fVar17;
    pfVar6[1] = fVar18;
    pfVar6[3] = -NAN;
    if (pfVar9 != (float *)param_2[1]) {
      do {
        fVar13 = (float)((int)fVar13 + 1);
        lVar4 = param_4[1];
        fVar15 = pfVar9[1];
        fVar12 = *pfVar9;
        pfVar9 = pfVar9 + -2;
        *(int *)(param_4 + 1) = (int)lVar4 + 1;
        pfVar6 = (float *)((longlong)(int)lVar4 * 0x10 + *param_4);
        pfVar6[2] = fVar13;
        *pfVar6 = 1.0 - fVar15;
        pfVar6[1] = 1.0 - fVar12;
        pfVar6[3] = -NAN;
      } while (pfVar9 != (float *)param_2[1]);
    }
  }
  return;
}



// FUNCTION 1438b4d10 FUN_1438b4d10 body=453 status=ok
// SIG undefined FUN_1438b4d10(void)

undefined4 *
FUN_1438b4d10(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4,
             longlong *param_5,longlong *param_6,int param_7,int param_8)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined4 *puVar9;
  
  lVar1 = (longlong)param_7 * 4;
  iVar7 = *(int *)(lVar1 + *param_5);
  if (iVar7 == -1) {
    lVar3 = param_2[1];
    uVar4 = FUN_143703a50();
    if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
      FUN_14370c460(uVar4,param_2,0x10);
    }
    puVar6 = (undefined4 *)((longlong)param_7 * 0x10 + param_1);
    puVar9 = (undefined4 *)((longlong)(int)param_2[1] * 0x10 + *param_2);
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    *puVar9 = *puVar6;
    puVar9[1] = puVar6[1];
    *(undefined2 *)(puVar9 + 2) = *(undefined2 *)(puVar6 + 2);
    *(undefined2 *)((longlong)puVar9 + 10) = *(undefined2 *)((longlong)puVar6 + 10);
    *(undefined2 *)(puVar9 + 3) = *(undefined2 *)(puVar6 + 3);
    *(undefined2 *)((longlong)puVar9 + 0xe) = *(undefined2 *)((longlong)puVar6 + 0xe);
    if (param_8 != 0) {
      uVar4 = FUN_143703a50();
      lVar8 = param_4[1];
      uVar5 = *(uint *)((longlong)param_4 + 0xc) & 0x3fffffff;
      iVar7 = (int)lVar8 + param_8;
      if ((int)uVar5 < iVar7) {
        iVar2 = uVar5 * 2;
        if (iVar7 < iVar2) {
          iVar7 = iVar2;
        }
        FUN_14370c310(uVar4,param_4,iVar7,4);
      }
      *(int *)(param_4 + 1) = (int)param_4[1] + param_8;
      puVar6 = (undefined4 *)(*param_4 + (longlong)(int)lVar8 * 4);
      iVar7 = 0;
      if (0 < (longlong)param_8 * 4) {
        lVar8 = (param_3 + (longlong)(param_7 * param_8) * 4) - (longlong)puVar6;
        do {
          iVar7 = iVar7 + 4;
          *puVar6 = *(undefined4 *)(lVar8 + (longlong)puVar6);
          puVar6 = puVar6 + 1;
        } while ((longlong)iVar7 < (longlong)param_8 * 4);
      }
    }
    *(int *)(lVar1 + *param_5) = (int)lVar3;
    uVar4 = FUN_143703a50();
    if (*(uint *)(param_6 + 1) == (*(uint *)((longlong)param_6 + 0xc) & 0x3fffffff)) {
      FUN_14370c460(uVar4,param_6,4);
    }
    *(int *)(*param_6 + (longlong)(int)param_6[1] * 4) = param_7;
    *(int *)(param_6 + 1) = (int)param_6[1] + 1;
  }
  else {
    puVar9 = (undefined4 *)((longlong)iVar7 * 0x10 + *param_2);
  }
  return puVar9;
}



// FUNCTION 1438b4ee0 FUN_1438b4ee0 body=233 status=ok
// SIG undefined FUN_1438b4ee0(void)

void FUN_1438b4ee0(longlong param_1,int param_2,int param_3,longlong param_4)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  lVar7 = (longlong)param_2;
  do {
    iVar5 = *(int *)(param_1 + ((longlong)(param_2 + param_3) >> 1) * 4);
    lVar10 = (longlong)param_3;
    iVar8 = param_2;
    iVar9 = param_3;
    do {
      fVar3 = *(float *)(param_4 + (longlong)iVar5 * 8);
      pfVar1 = (float *)(param_4 + (longlong)*(int *)(param_1 + lVar7 * 4) * 8);
      if (*pfVar1 <= fVar3 && fVar3 != *pfVar1) {
        do {
          lVar2 = lVar7 * 4;
          lVar7 = lVar7 + 1;
          iVar8 = iVar8 + 1;
          pfVar1 = (float *)(param_4 + (longlong)*(int *)(param_1 + 4 + lVar2) * 8);
        } while (*pfVar1 <= fVar3 && fVar3 != *pfVar1);
      }
      fVar4 = *(float *)(param_4 + (longlong)*(int *)(param_1 + lVar10 * 4) * 8);
      while (fVar3 < fVar4) {
        lVar2 = lVar10 * 4;
        lVar10 = lVar10 + -1;
        iVar9 = iVar9 + -1;
        fVar4 = *(float *)(param_4 + (longlong)*(int *)(param_1 + -4 + lVar2) * 8);
      }
      if (lVar10 < lVar7) break;
      if (lVar10 != lVar7) {
        uVar6 = *(undefined4 *)(param_1 + lVar10 * 4);
        *(undefined4 *)(param_1 + lVar10 * 4) = *(undefined4 *)(param_1 + lVar7 * 4);
        *(undefined4 *)(param_1 + lVar7 * 4) = uVar6;
      }
      iVar9 = iVar9 + -1;
      lVar10 = lVar10 + -1;
      iVar8 = iVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 <= lVar10);
    if (param_2 < iVar9) {
      FUN_1438b4ee0(param_1);
    }
    param_2 = iVar8;
    if (param_3 <= iVar8) {
      return;
    }
  } while( true );
}



// FUNCTION 1438b4fd0 FUN_1438b4fd0 body=2212 status=ok
// SIG undefined FUN_1438b4fd0(void)

void FUN_1438b4fd0(undefined8 param_1,longlong param_2,longlong param_3,float *param_4,
                  float *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined4 param_10,undefined1 param_11)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  ulonglong uVar19;
  undefined8 in_stack_fffffffffffffe58;
  undefined4 uVar20;
  longlong local_188;
  int local_180;
  uint local_17c;
  longlong local_178;
  int local_170;
  uint local_16c;
  longlong local_168;
  int local_160;
  uint local_15c;
  longlong local_158;
  int local_150;
  uint local_14c;
  undefined4 local_148;
  int local_144;
  undefined4 local_140;
  int local_13c;
  undefined8 local_138;
  undefined4 *puStack_130;
  longlong local_128;
  longlong local_118;
  longlong *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 *local_d8;
  undefined4 *puStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  longlong lStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  longlong lStack_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  uVar20 = (undefined4)((ulonglong)in_stack_fffffffffffffe58 >> 0x20);
  if (*(char *)(param_2 + 0x28) == '\x01') {
    lVar7 = *(longlong *)(param_2 + 0x18);
  }
  else {
    lVar7 = FUN_142fbda20(param_2 + 0x18);
  }
  plVar16 = (longlong *)(param_3 + 0x18);
  local_128 = lVar7;
  local_108 = plVar16;
  if (*(char *)(param_3 + 0x28) == '\x01') {
    lVar3 = *plVar16;
  }
  else {
    lVar3 = FUN_142fbda20(plVar16);
  }
  iVar9 = 0;
  local_158 = 0;
  local_c8 = *param_9;
  uStack_c0 = param_9[1];
  local_150 = 0;
  local_14c = 0x80000000;
  local_b8 = *param_8;
  uStack_b0 = param_8[1];
  local_168 = 0;
  local_160 = 0;
  local_15c = 0x80000000;
  FUN_1438b69e0(&local_b8,&local_c8,&local_158,&local_168,CONCAT44(uVar20,param_10),param_11);
  iVar10 = local_150;
  local_17c = 0x80000000;
  local_178 = 0;
  local_170 = 0;
  local_16c = 0x80000000;
  local_188 = 0;
  local_180 = 0;
  if (0 < local_150) {
    iVar12 = local_150;
    if (local_150 < 0) {
      iVar12 = 0;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_178,iVar12,8);
  }
  iVar12 = local_160;
  local_170 = iVar10;
  if ((int)(local_17c & 0x3fffffff) < local_160) {
    iVar13 = (local_17c & 0x3fffffff) * 2;
    iVar10 = local_160;
    if (local_160 < iVar13) {
      iVar10 = iVar13;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_188,iVar10,8);
  }
  local_88 = *param_4;
  fStack_84 = param_4[1];
  fStack_80 = param_4[2];
  fStack_7c = param_4[3];
  lVar14 = (longlong)local_150 * 0x10 + local_158;
  local_118 = local_158;
  local_180 = iVar12;
  local_d8 = (undefined4 *)*param_6;
  puStack_d0 = (undefined4 *)param_6[1];
  local_78 = param_4[4] - local_88;
  fStack_74 = param_4[5] - fStack_84;
  fStack_70 = param_4[6] - fStack_80;
  fStack_6c = param_4[7] - fStack_7c;
  if (*(char *)(param_2 + 0x28) == '\x01') {
    lVar6 = *(longlong *)(param_2 + 0x18);
  }
  else {
    lVar6 = FUN_142fbda20(param_2 + 0x18);
  }
  lVar2 = local_118;
  if (local_d8 != puStack_d0) {
    lVar14 = lVar14 - local_118;
    lVar4 = 0;
    puVar18 = local_d8;
    iVar10 = iVar9;
    do {
      lVar7 = (longlong)(int)(lVar14 >> 4);
      lVar8 = lVar4;
      iVar12 = iVar10;
      if (lVar4 < lVar7) {
        piVar5 = (int *)(lVar2 + 8 + lVar4 * 0x10);
        do {
          if (*piVar5 != iVar9) break;
          iVar12 = iVar12 + 1;
          lVar8 = lVar8 + 1;
          piVar5 = piVar5 + 4;
        } while (lVar8 < lVar7);
      }
      if (iVar12 - iVar10 < 2) {
        local_144 = puVar18[1];
        local_148 = *puVar18;
        FUN_1438b6620(param_2,&local_144);
        *(undefined4 *)(local_178 + lVar4 * 8) = local_148;
        *(int *)(local_178 + 4 + lVar4 * 8) = local_144;
        lVar4 = (longlong)(local_144 - *(int *)(lVar6 + 0x30));
        lVar7 = *(longlong *)(lVar6 + 0xe0);
        *(undefined8 *)(lVar7 + 8 + lVar4 * 0x14) = 0xffffffffffffffff;
        pbVar1 = (byte *)(lVar7 + 0x10 + lVar4 * 0x14);
        *pbVar1 = *pbVar1 & 0xbf;
      }
      else {
        local_fc = puVar18[1];
        local_100 = *puVar18;
        FUN_1438b61d0(param_1,param_2,&local_88,&local_100,(longlong)iVar10 * 0x10 + lVar2,
                      iVar12 - iVar10,local_178 + (longlong)iVar10 * 8);
      }
      iVar9 = iVar9 + 1;
      puVar18 = puVar18 + 2;
      lVar7 = local_128;
      plVar16 = local_108;
      lVar4 = lVar8;
      iVar10 = iVar12;
    } while (puVar18 != puStack_d0);
  }
  local_118 = local_168;
  lVar14 = (longlong)local_160 * 0x10 + local_168;
  local_138 = (undefined4 *)*param_7;
  puStack_130 = (undefined4 *)param_7[1];
  local_68 = *param_5;
  fStack_64 = param_5[1];
  fStack_60 = param_5[2];
  fStack_5c = param_5[3];
  local_58 = param_5[4] - local_68;
  fStack_54 = param_5[5] - fStack_64;
  fStack_50 = param_5[6] - fStack_60;
  fStack_4c = param_5[7] - fStack_5c;
  if ((char)plVar16[2] == '\x01') {
    lVar6 = *plVar16;
  }
  else {
    lVar6 = FUN_142fbda20(plVar16);
  }
  lVar2 = local_118;
  iVar10 = 0;
  if (local_138 != puStack_130) {
    lVar14 = lVar14 - local_118;
    lVar4 = 0;
    puVar18 = local_138;
    iVar9 = 0;
    do {
      lVar7 = (longlong)(int)(lVar14 >> 4);
      lVar8 = lVar4;
      iVar12 = iVar9;
      if (lVar4 < lVar7) {
        piVar5 = (int *)(lVar2 + 8 + lVar4 * 0x10);
        do {
          if (*piVar5 != iVar10) break;
          iVar12 = iVar12 + 1;
          lVar8 = lVar8 + 1;
          piVar5 = piVar5 + 4;
        } while (lVar8 < lVar7);
      }
      if (iVar12 - iVar9 < 2) {
        local_13c = puVar18[1];
        local_140 = *puVar18;
        FUN_1438b6620(param_3,&local_13c);
        *(undefined4 *)(local_188 + lVar4 * 8) = local_140;
        *(int *)(local_188 + 4 + lVar4 * 8) = local_13c;
        lVar4 = (longlong)(local_13c - *(int *)(lVar6 + 0x30));
        lVar7 = *(longlong *)(lVar6 + 0xe0);
        *(undefined8 *)(lVar7 + 8 + lVar4 * 0x14) = 0xffffffffffffffff;
        pbVar1 = (byte *)(lVar7 + 0x10 + lVar4 * 0x14);
        *pbVar1 = *pbVar1 & 0xbf;
      }
      else {
        local_ec = puVar18[1];
        local_f0 = *puVar18;
        FUN_1438b61d0(param_1,param_3,&local_68,&local_f0,(longlong)iVar9 * 0x10 + lVar2,
                      iVar12 - iVar9,local_188 + (longlong)iVar9 * 8);
      }
      iVar10 = iVar10 + 1;
      puVar18 = puVar18 + 2;
      lVar7 = local_128;
      plVar16 = local_108;
      lVar4 = lVar8;
      iVar9 = iVar12;
    } while (puVar18 != puStack_130);
  }
  local_138 = (undefined4 *)local_178;
  lVar14 = (longlong)local_138;
  puStack_130 = (undefined4 *)(local_178 + (longlong)local_170 * 8);
  local_138._0_4_ = (undefined4)local_178;
  local_138._4_4_ = (undefined4)((ulonglong)local_178 >> 0x20);
  local_a8 = (undefined4)local_138;
  uStack_a4 = local_138._4_4_;
  local_138 = (undefined4 *)lVar14;
  lStack_a0 = (longlong)puStack_130;
  FUN_1438b66c0(param_2,&local_a8);
  local_138 = (undefined4 *)local_188;
  lVar14 = (longlong)local_138;
  puStack_130 = (undefined4 *)(local_188 + (longlong)local_180 * 8);
  local_138._0_4_ = (undefined4)local_188;
  local_138._4_4_ = (undefined4)((ulonglong)local_188 >> 0x20);
  local_98 = (undefined4)local_138;
  uStack_94 = local_138._4_4_;
  local_138 = (undefined4 *)lVar14;
  lStack_90 = (longlong)puStack_130;
  FUN_1438b66c0(param_3,&local_98);
  uVar11 = 0;
  iVar10 = *(int *)(*(longlong *)(param_2 + 0x18) + 0x17c);
  iVar9 = *(int *)(*plVar16 + 0x17c);
  uVar17 = uVar11;
  uVar19 = uVar11;
  if (0 < local_150) {
    do {
      if (*(int *)(uVar11 + 0xc + local_158) != -1) {
        iVar12 = *(int *)(uVar19 + 4 + local_178);
        if (iVar12 < *(int *)(lVar7 + 0x30)) {
          iVar13 = iVar12;
          if (*(int *)(lVar7 + 0x78) != 0) {
            iVar13 = *(int *)(*(longlong *)(lVar7 + 0x70) + (longlong)iVar12 * 4);
          }
          if (iVar13 == -1) {
            lVar14 = FUN_143836120(*(undefined8 *)(lVar7 + 0x28),lVar7 + 0xc0,
                                   *(undefined8 *)(lVar7 + 0x58),lVar7 + 0x130,
                                   (longlong *)(lVar7 + 0x70),lVar7 + 0x80,iVar12,
                                   *(undefined4 *)(lVar7 + 0x60));
          }
          else {
            lVar14 = *(longlong *)(lVar7 + 0xc0) + (longlong)iVar13 * 0x14;
          }
        }
        else {
          lVar14 = *(longlong *)(lVar7 + 0xe0) + (longlong)(iVar12 - *(int *)(lVar7 + 0x30)) * 0x14;
        }
        lVar6 = (longlong)*(int *)(uVar11 + 0xc + local_158);
        if (iVar10 == iVar9) {
          *(undefined4 *)(lVar14 + 0xc) = *(undefined4 *)(local_188 + lVar6 * 8);
          *(undefined4 *)(lVar14 + 8) =
               *(undefined4 *)(local_188 + 4 + (longlong)*(int *)(uVar11 + 0xc + local_158) * 8);
          *(byte *)(lVar14 + 0x10) = *(byte *)(lVar14 + 0x10) & 0xbf;
        }
        else {
          *(uint *)(lVar14 + 0xc) = iVar9 << 0x16 | *(uint *)(local_188 + lVar6 * 8);
          *(uint *)(lVar14 + 8) =
               iVar9 << 0x16 |
               *(uint *)(local_188 + 4 + (longlong)*(int *)(uVar11 + 0xc + local_158) * 8);
          *(byte *)(lVar14 + 0x10) = *(byte *)(lVar14 + 0x10) | 0x40;
        }
      }
      uVar15 = (int)uVar17 + 1;
      uVar11 = uVar11 + 0x10;
      uVar17 = (ulonglong)uVar15;
      uVar19 = uVar19 + 8;
    } while ((int)uVar15 < local_150);
  }
  uVar11 = 0;
  uVar17 = uVar11;
  uVar19 = uVar11;
  if (0 < local_160) {
    do {
      if (*(int *)(uVar11 + 0xc + local_168) != -1) {
        iVar12 = *(int *)(uVar19 + 4 + local_188);
        if (iVar12 < *(int *)(lVar3 + 0x30)) {
          iVar13 = iVar12;
          if (*(int *)(lVar3 + 0x78) != 0) {
            iVar13 = *(int *)(*(longlong *)(lVar3 + 0x70) + (longlong)iVar12 * 4);
          }
          if (iVar13 == -1) {
            lVar7 = FUN_143836120(*(undefined8 *)(lVar3 + 0x28),(longlong *)(lVar3 + 0xc0),
                                  *(undefined8 *)(lVar3 + 0x58),lVar3 + 0x130,
                                  (longlong *)(lVar3 + 0x70),lVar3 + 0x80,iVar12,
                                  *(undefined4 *)(lVar3 + 0x60));
          }
          else {
            lVar7 = *(longlong *)(lVar3 + 0xc0) + (longlong)iVar13 * 0x14;
          }
        }
        else {
          lVar7 = *(longlong *)(lVar3 + 0xe0) + (longlong)(iVar12 - *(int *)(lVar3 + 0x30)) * 0x14;
        }
        lVar14 = (longlong)*(int *)(uVar11 + 0xc + local_168);
        if (iVar10 == iVar9) {
          *(undefined4 *)(lVar7 + 0xc) = *(undefined4 *)(local_178 + lVar14 * 8);
          *(undefined4 *)(lVar7 + 8) =
               *(undefined4 *)(local_178 + 4 + (longlong)*(int *)(uVar11 + 0xc + local_168) * 8);
          *(byte *)(lVar7 + 0x10) = *(byte *)(lVar7 + 0x10) & 0xbf;
        }
        else {
          *(uint *)(lVar7 + 0xc) = iVar10 << 0x16 | *(uint *)(local_178 + lVar14 * 8);
          *(uint *)(lVar7 + 8) =
               iVar10 << 0x16 |
               *(uint *)(local_178 + 4 + (longlong)*(int *)(uVar11 + 0xc + local_168) * 8);
          *(byte *)(lVar7 + 0x10) = *(byte *)(lVar7 + 0x10) | 0x40;
        }
      }
      uVar15 = (int)uVar17 + 1;
      uVar11 = uVar11 + 0x10;
      uVar17 = (ulonglong)uVar15;
      uVar19 = uVar19 + 8;
    } while ((int)uVar15 < local_160);
  }
  local_180 = 0;
  if (-1 < (int)local_17c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_188,8,local_17c & 0x3fffffff);
  }
  local_188 = 0;
  local_17c = 0x80000000;
  local_170 = 0;
  if (-1 < (int)local_16c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_178,8,local_16c & 0x3fffffff);
  }
  local_178 = 0;
  local_16c = 0x80000000;
  local_160 = 0;
  if (-1 < (int)local_15c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_168,0x10,local_15c & 0x3fffffff);
  }
  local_168 = 0;
  local_150 = 0;
  local_15c = 0x80000000;
  if (-1 < (int)local_14c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_158,0x10,local_14c & 0x3fffffff);
  }
  return;
}



// FUNCTION 1438b5880 FUN_1438b5880 body=2383 status=ok
// SIG undefined FUN_1438b5880(void)

void FUN_1438b5880(undefined8 param_1,longlong param_2,longlong param_3,float *param_4,
                  float *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined4 param_10,undefined1 param_11)

{
  longlong *plVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  int local_res24;
  undefined8 in_stack_fffffffffffffe28;
  undefined4 uVar20;
  longlong local_1b8;
  int local_1b0;
  uint local_1ac;
  longlong local_1a8;
  int local_1a0;
  uint local_19c;
  longlong local_198;
  int local_190;
  uint local_18c;
  longlong local_188;
  int local_180;
  uint local_17c;
  undefined4 local_178;
  int local_174 [3];
  undefined8 local_168;
  undefined4 *puStack_160;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong *local_128;
  longlong *local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 *local_f8;
  undefined4 *puStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  longlong lStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  longlong lStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  uVar20 = (undefined4)((ulonglong)in_stack_fffffffffffffe28 >> 0x20);
  plVar1 = (longlong *)(param_2 + 0x18);
  local_120 = plVar1;
  if (*(char *)(param_2 + 0x28) == '\x01') {
    lVar9 = *plVar1;
  }
  else {
    lVar9 = FUN_142fbda20(plVar1);
  }
  plVar18 = (longlong *)(param_3 + 0x18);
  local_148 = lVar9;
  local_128 = plVar18;
  if (*(char *)(param_3 + 0x28) == '\x01') {
    lVar8 = *plVar18;
  }
  else {
    lVar8 = FUN_142fbda20(plVar18);
  }
  iVar14 = 0;
  local_188 = 0;
  local_180 = 0;
  local_e8 = *param_9;
  uStack_e0 = param_9[1];
  local_17c = 0x80000000;
  local_198 = 0;
  local_d8 = *param_8;
  uStack_d0 = param_8[1];
  local_190 = 0;
  local_18c = 0x80000000;
  local_140 = lVar8;
  FUN_1438b69e0(&local_d8,&local_e8,&local_188,&local_198,CONCAT44(uVar20,param_10),param_11);
  iVar15 = local_180;
  local_1ac = 0x80000000;
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 0x80000000;
  local_1b8 = 0;
  local_1b0 = 0;
  if (0 < local_180) {
    iVar12 = local_180;
    if (local_180 < 0) {
      iVar12 = 0;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_1a8,iVar12,8);
  }
  iVar12 = local_190;
  local_1a0 = iVar15;
  if ((int)(local_1ac & 0x3fffffff) < local_190) {
    iVar13 = (local_1ac & 0x3fffffff) * 2;
    iVar15 = local_190;
    if (local_190 < iVar13) {
      iVar15 = iVar13;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_1b8,iVar15,8);
  }
  lVar5 = (longlong)local_180 * 0x10 + local_188;
  local_138 = local_188;
  local_1b0 = iVar12;
  local_f8 = (undefined4 *)*param_6;
  puStack_f0 = (undefined4 *)param_6[1];
  local_158 = 1.0 / param_4[8];
  local_154 = -(local_158 * param_4[9]);
  local_a8 = local_154 * (param_4[4] - *param_4) + *param_4;
  fStack_a4 = local_154 * (param_4[5] - param_4[1]) + param_4[1];
  fStack_a0 = local_154 * (param_4[6] - param_4[2]) + param_4[2];
  fStack_9c = local_154 * (param_4[7] - param_4[3]) + param_4[3];
  local_98 = (param_4[4] - *param_4) * local_158;
  fStack_94 = (param_4[5] - param_4[1]) * local_158;
  fStack_90 = (param_4[6] - param_4[2]) * local_158;
  fStack_8c = (param_4[7] - param_4[3]) * local_158;
  if (*(char *)(param_2 + 0x28) == '\x01') {
    lVar7 = *plVar1;
  }
  else {
    lVar7 = FUN_142fbda20(plVar1);
  }
  lVar3 = local_138;
  if (local_f8 != puStack_f0) {
    lVar5 = lVar5 - local_138;
    puVar10 = local_f8;
    lVar4 = 0;
    iVar15 = iVar14;
    do {
      lVar8 = (longlong)(int)(lVar5 >> 4);
      lVar9 = lVar4;
      iVar12 = iVar15;
      if (lVar4 < lVar8) {
        piVar6 = (int *)(lVar3 + 8 + lVar4 * 0x10);
        do {
          if (*piVar6 != iVar14) break;
          iVar12 = iVar12 + 1;
          lVar9 = lVar9 + 1;
          piVar6 = piVar6 + 4;
        } while (lVar9 < lVar8);
      }
      uVar20 = *puVar10;
      if (iVar12 - iVar15 < 2) {
        local_res24 = puVar10[1];
        FUN_1438b6620(param_2,&local_res24);
        *(undefined4 *)(local_1a8 + lVar4 * 8) = uVar20;
        *(int *)(local_1a8 + 4 + lVar4 * 8) = local_res24;
        lVar4 = (longlong)(local_res24 - *(int *)(lVar7 + 0x30));
        lVar8 = *(longlong *)(lVar7 + 0xe0);
        *(undefined8 *)(lVar8 + 8 + lVar4 * 0x14) = 0xffffffffffffffff;
        pbVar2 = (byte *)(lVar8 + 0x10 + lVar4 * 0x14);
        *pbVar2 = *pbVar2 & 0xbf;
      }
      else {
        local_114 = puVar10[1];
        local_118 = uVar20;
        FUN_1438b61d0(param_1,param_2,&local_a8,&local_118,(longlong)iVar15 * 0x10 + lVar3,
                      iVar12 - iVar15,local_1a8 + (longlong)iVar15 * 8);
      }
      iVar14 = iVar14 + 1;
      puVar10 = puVar10 + 2;
      plVar18 = local_128;
      lVar4 = lVar9;
      lVar9 = local_148;
      lVar8 = local_140;
      iVar15 = iVar12;
    } while (puVar10 != puStack_f0);
  }
  lVar5 = (longlong)local_190 * 0x10 + local_198;
  local_138 = local_198;
  local_168 = (undefined4 *)*param_7;
  puStack_160 = (undefined4 *)param_7[1];
  local_150 = 1.0 / param_5[8];
  local_14c = -(local_150 * param_5[9]);
  local_88 = local_14c * (param_5[4] - *param_5) + *param_5;
  fStack_84 = local_14c * (param_5[5] - param_5[1]) + param_5[1];
  fStack_80 = local_14c * (param_5[6] - param_5[2]) + param_5[2];
  fStack_7c = local_14c * (param_5[7] - param_5[3]) + param_5[3];
  local_78 = (param_5[4] - *param_5) * local_150;
  fStack_74 = (param_5[5] - param_5[1]) * local_150;
  fStack_70 = (param_5[6] - param_5[2]) * local_150;
  fStack_6c = (param_5[7] - param_5[3]) * local_150;
  if ((char)plVar18[2] == '\x01') {
    lVar7 = *plVar18;
  }
  else {
    lVar7 = FUN_142fbda20(plVar18);
  }
  lVar3 = local_138;
  iVar15 = 0;
  if (local_168 != puStack_160) {
    lVar5 = lVar5 - local_138;
    puVar10 = local_168;
    lVar4 = 0;
    iVar14 = 0;
    do {
      lVar8 = (longlong)(int)(lVar5 >> 4);
      lVar9 = lVar4;
      iVar12 = iVar14;
      if (lVar4 < lVar8) {
        piVar6 = (int *)(lVar3 + 8 + lVar4 * 0x10);
        do {
          if (*piVar6 != iVar15) break;
          iVar12 = iVar12 + 1;
          lVar9 = lVar9 + 1;
          piVar6 = piVar6 + 4;
        } while (lVar9 < lVar8);
      }
      if (iVar12 - iVar14 < 2) {
        local_174[0] = puVar10[1];
        local_178 = *puVar10;
        FUN_1438b6620(param_3,local_174);
        *(undefined4 *)(local_1b8 + lVar4 * 8) = local_178;
        *(int *)(local_1b8 + 4 + lVar4 * 8) = local_174[0];
        lVar4 = (longlong)(local_174[0] - *(int *)(lVar7 + 0x30));
        lVar8 = *(longlong *)(lVar7 + 0xe0);
        *(undefined8 *)(lVar8 + 8 + lVar4 * 0x14) = 0xffffffffffffffff;
        pbVar2 = (byte *)(lVar8 + 0x10 + lVar4 * 0x14);
        *pbVar2 = *pbVar2 & 0xbf;
      }
      else {
        local_104 = puVar10[1];
        local_108 = *puVar10;
        FUN_1438b61d0(param_1,param_3,&local_88,&local_108,(longlong)iVar14 * 0x10 + lVar3,
                      iVar12 - iVar14,local_1b8 + (longlong)iVar14 * 8);
      }
      iVar15 = iVar15 + 1;
      puVar10 = puVar10 + 2;
      plVar18 = local_128;
      lVar4 = lVar9;
      lVar9 = local_148;
      lVar8 = local_140;
      iVar14 = iVar12;
    } while (puVar10 != puStack_160);
  }
  local_168 = (undefined4 *)local_1a8;
  lVar5 = (longlong)local_168;
  puStack_160 = (undefined4 *)(local_1a8 + (longlong)local_1a0 * 8);
  local_168._0_4_ = (undefined4)local_1a8;
  local_168._4_4_ = (undefined4)((ulonglong)local_1a8 >> 0x20);
  local_c8 = (undefined4)local_168;
  uStack_c4 = local_168._4_4_;
  local_168 = (undefined4 *)lVar5;
  lStack_c0 = (longlong)puStack_160;
  FUN_1438b66c0(param_2,&local_c8);
  local_168 = (undefined4 *)local_1b8;
  lVar5 = (longlong)local_168;
  puStack_160 = (undefined4 *)(local_1b8 + (longlong)local_1b0 * 8);
  local_168._0_4_ = (undefined4)local_1b8;
  local_168._4_4_ = (undefined4)((ulonglong)local_1b8 >> 0x20);
  local_b8 = (undefined4)local_168;
  uStack_b4 = local_168._4_4_;
  local_168 = (undefined4 *)lVar5;
  lStack_b0 = (longlong)puStack_160;
  FUN_1438b66c0(param_3,&local_b8);
  iVar15 = *(int *)(*local_120 + 0x17c);
  uVar11 = 0;
  iVar14 = *(int *)(*plVar18 + 0x17c);
  uVar17 = uVar11;
  uVar19 = uVar11;
  if (0 < local_180) {
    do {
      if (*(int *)(uVar11 + 0xc + local_188) != -1) {
        iVar12 = *(int *)(local_1a8 + 4 + uVar19);
        if (iVar12 < *(int *)(lVar9 + 0x30)) {
          iVar13 = iVar12;
          if (*(int *)(lVar9 + 0x78) != 0) {
            iVar13 = *(int *)(*(longlong *)(lVar9 + 0x70) + (longlong)iVar12 * 4);
          }
          if (iVar13 == -1) {
            lVar5 = FUN_143836120(*(undefined8 *)(lVar9 + 0x28),(longlong *)(lVar9 + 0xc0),
                                  *(undefined8 *)(lVar9 + 0x58),lVar9 + 0x130,
                                  (longlong *)(lVar9 + 0x70),lVar9 + 0x80,iVar12,
                                  *(undefined4 *)(lVar9 + 0x60));
          }
          else {
            lVar5 = *(longlong *)(lVar9 + 0xc0) + (longlong)iVar13 * 0x14;
          }
        }
        else {
          lVar5 = *(longlong *)(lVar9 + 0xe0) + (longlong)(iVar12 - *(int *)(lVar9 + 0x30)) * 0x14;
        }
        lVar7 = (longlong)*(int *)(uVar11 + 0xc + local_188);
        if (iVar15 == iVar14) {
          *(undefined4 *)(lVar5 + 0xc) = *(undefined4 *)(local_1b8 + lVar7 * 8);
          *(undefined4 *)(lVar5 + 8) =
               *(undefined4 *)(local_1b8 + 4 + (longlong)*(int *)(uVar11 + 0xc + local_188) * 8);
          *(byte *)(lVar5 + 0x10) = *(byte *)(lVar5 + 0x10) & 0xbf;
        }
        else {
          *(uint *)(lVar5 + 0xc) = iVar14 << 0x16 | *(uint *)(local_1b8 + lVar7 * 8);
          *(uint *)(lVar5 + 8) =
               iVar14 << 0x16 |
               *(uint *)(local_1b8 + 4 + (longlong)*(int *)(uVar11 + 0xc + local_188) * 8);
          *(byte *)(lVar5 + 0x10) = *(byte *)(lVar5 + 0x10) | 0x40;
        }
      }
      uVar16 = (int)uVar17 + 1;
      uVar11 = uVar11 + 0x10;
      uVar17 = (ulonglong)uVar16;
      uVar19 = uVar19 + 8;
    } while ((int)uVar16 < local_180);
  }
  uVar11 = 0;
  uVar17 = uVar11;
  uVar19 = uVar11;
  if (0 < local_190) {
    do {
      if (*(int *)(uVar11 + 0xc + local_198) != -1) {
        iVar12 = *(int *)(uVar17 + 4 + local_1b8);
        if (iVar12 < *(int *)(lVar8 + 0x30)) {
          iVar13 = iVar12;
          if (*(int *)(lVar8 + 0x78) != 0) {
            iVar13 = *(int *)(*(longlong *)(lVar8 + 0x70) + (longlong)iVar12 * 4);
          }
          if (iVar13 == -1) {
            lVar9 = FUN_143836120(*(undefined8 *)(lVar8 + 0x28),lVar8 + 0xc0,
                                  *(undefined8 *)(lVar8 + 0x58),lVar8 + 0x130,
                                  (longlong *)(lVar8 + 0x70),lVar8 + 0x80,iVar12,
                                  *(undefined4 *)(lVar8 + 0x60));
          }
          else {
            lVar9 = *(longlong *)(lVar8 + 0xc0) + (longlong)iVar13 * 0x14;
          }
        }
        else {
          lVar9 = *(longlong *)(lVar8 + 0xe0) + (longlong)(iVar12 - *(int *)(lVar8 + 0x30)) * 0x14;
        }
        lVar5 = (longlong)*(int *)(uVar11 + 0xc + local_198);
        if (iVar15 == iVar14) {
          *(undefined4 *)(lVar9 + 0xc) = *(undefined4 *)(local_1a8 + lVar5 * 8);
          *(undefined4 *)(lVar9 + 8) =
               *(undefined4 *)(local_1a8 + 4 + (longlong)*(int *)(uVar11 + 0xc + local_198) * 8);
          *(byte *)(lVar9 + 0x10) = *(byte *)(lVar9 + 0x10) & 0xbf;
        }
        else {
          *(uint *)(lVar9 + 0xc) = iVar15 << 0x16 | *(uint *)(local_1a8 + lVar5 * 8);
          *(uint *)(lVar9 + 8) =
               iVar15 << 0x16 |
               *(uint *)(local_1a8 + 4 + (longlong)*(int *)(uVar11 + 0xc + local_198) * 8);
          *(byte *)(lVar9 + 0x10) = *(byte *)(lVar9 + 0x10) | 0x40;
        }
      }
      uVar16 = (int)uVar19 + 1;
      uVar11 = uVar11 + 0x10;
      uVar17 = uVar17 + 8;
      uVar19 = (ulonglong)uVar16;
    } while ((int)uVar16 < local_190);
  }
  local_1b0 = 0;
  if (-1 < (int)local_1ac) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_1b8,8,local_1ac & 0x3fffffff);
  }
  local_1b8 = 0;
  local_1ac = 0x80000000;
  local_1a0 = 0;
  if (-1 < (int)local_19c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_1a8,8,local_19c & 0x3fffffff);
  }
  local_1a8 = 0;
  local_19c = 0x80000000;
  local_190 = 0;
  if (-1 < (int)local_18c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_198,0x10,local_18c & 0x3fffffff);
  }
  local_198 = 0;
  local_180 = 0;
  local_18c = 0x80000000;
  if (-1 < (int)local_17c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_188,0x10,local_17c & 0x3fffffff);
  }
  return;
}



// FUNCTION 1438b61d0 FUN_1438b61d0 body=1090 status=ok
// SIG undefined FUN_1438b61d0(void)

void FUN_1438b61d0(undefined8 param_1,longlong param_2,float *param_3,int *param_4,longlong param_5,
                  int param_6,int *param_7)

{
  undefined4 *puVar1;
  longlong lVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  undefined8 in_stack_ffffffffffffff38;
  longlong *plVar19;
  undefined4 uVar21;
  undefined8 uVar20;
  int local_9c;
  int local_98;
  int local_94;
  int local_90 [2];
  longlong local_88;
  int local_80;
  int local_7c;
  int local_78;
  int *local_70;
  longlong local_68;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  uVar21 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  if (*(char *)(param_2 + 0x28) == '\x01') {
    lVar6 = *(longlong *)(param_2 + 0x18);
  }
  else {
    lVar6 = FUN_142fbda20(param_2 + 0x18);
  }
  FUN_1438b6620(param_2,param_4 + 1);
  iVar14 = *param_4;
  plVar19 = (longlong *)(lVar6 + 0x90);
  if (iVar14 < *(int *)(lVar6 + 0x20)) {
    iVar9 = iVar14;
    if (*(int *)(lVar6 + 0x98) != 0) {
      iVar9 = *(int *)(*plVar19 + (longlong)iVar14 * 4);
    }
    if (iVar9 == -1) {
      piVar18 = (int *)FUN_1438b4d10(*(undefined8 *)(lVar6 + 0x18),lVar6 + 0xb0,
                                     *(undefined8 *)(lVar6 + 0x48),lVar6 + 0x120,plVar19,
                                     lVar6 + 0xa0,iVar14,*(undefined4 *)(lVar6 + 0x50));
      uVar21 = (undefined4)((ulonglong)plVar19 >> 0x20);
    }
    else {
      piVar18 = (int *)((longlong)iVar9 * 0x10 + *(longlong *)(lVar6 + 0xb0));
    }
  }
  else {
    piVar18 = (int *)((longlong)(iVar14 - *(int *)(lVar6 + 0x20)) * 0x10 +
                     *(longlong *)(lVar6 + 0xd0));
  }
  iVar14 = param_4[1];
  iVar9 = piVar18[1];
  if ((iVar14 < iVar9) ||
     (iVar13 = (int)*(short *)((longlong)piVar18 + 10), iVar13 + iVar9 <= iVar14)) {
    iVar13 = (int)(short)piVar18[2];
    iVar9 = *piVar18;
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (*(int *)(*(longlong *)(param_2 + 0x18) + 0x30) <= iVar9) {
    *(int *)(lVar6 + 0x164) = *(int *)(lVar6 + 0x164) + iVar13;
  }
  iVar11 = iVar14 - iVar9;
  local_7c = param_6 + -1 + iVar13;
  iVar4 = *(int *)(*(longlong *)(param_2 + 0x18) + 0x30);
  iVar17 = *(int *)(*(longlong *)(param_2 + 0x18) + 0xe8);
  local_94 = iVar17;
  local_90[0] = iVar14;
  local_80 = iVar13;
  local_78 = iVar11;
  local_70 = piVar18;
  FUN_143839fe0(param_2);
  local_9c = iVar9 - iVar4;
  uVar20 = CONCAT44(uVar21,iVar11);
  local_98 = iVar17;
  hkaiNavMeshThreadSafeUtils::moveOwnedEdgesUp(param_1,param_2,&local_98,&local_9c,uVar20);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  iVar9 = *(int *)(*(longlong *)(param_2 + 0x18) + 0xf8) +
          *(int *)(*(longlong *)(param_2 + 0x18) + 0x40);
  if (0 < param_6) {
    iVar16 = iVar17 + iVar11;
    iVar14 = iVar14 - iVar4;
    local_88 = (longlong)iVar14 * 0x14;
    local_68 = (longlong)iVar14 * 2;
    iVar10 = (iVar9 - iVar17) - iVar11;
    local_9c = (iVar17 - iVar9) + 1 + iVar4 + iVar11;
    local_98 = -iVar16;
    iVar12 = iVar10 + -1;
    iVar9 = local_98;
    do {
      lVar8 = *(longlong *)(lVar6 + 0xe0);
      lVar2 = (longlong)iVar16 * 0x14;
      *(undefined4 *)(lVar2 + lVar8) = *(undefined4 *)(lVar8 + local_88);
      *(undefined4 *)(lVar2 + 4 + lVar8) = *(undefined4 *)(lVar8 + 4 + local_88);
      *(undefined4 *)(lVar2 + 8 + lVar8) = *(undefined4 *)(lVar8 + 8 + local_88);
      *(undefined4 *)(lVar2 + 0xc + lVar8) = *(undefined4 *)(lVar8 + 0xc + local_88);
      *(undefined1 *)(lVar2 + 0x10 + lVar8) = *(undefined1 *)(lVar8 + 0x10 + local_88);
      *(undefined1 *)(lVar2 + 0x11 + lVar8) = *(undefined1 *)(lVar8 + 0x11 + local_88);
      *(undefined2 *)(lVar2 + 0x12 + lVar8) = *(undefined2 *)(lVar8 + 0x12 + local_88);
      *(undefined2 *)(*(longlong *)(lVar6 + 0x110) + (longlong)iVar16 * 2) =
           *(undefined2 *)(*(longlong *)(lVar6 + 0x110) + local_68);
      iVar13 = *(int *)(lVar6 + 0x60);
      lVar8 = (longlong)iVar13;
      puVar1 = (undefined4 *)(*(longlong *)(lVar6 + 0x150) + (longlong)(iVar14 * iVar13) * 4);
      puVar7 = (undefined4 *)(*(longlong *)(lVar6 + 0x150) + (longlong)(iVar16 * iVar13) * 4);
      if (iVar13 == 1) {
        *puVar7 = *puVar1;
      }
      else if (0 < lVar8) {
        lVar15 = (longlong)puVar1 - (longlong)puVar7;
        do {
          *puVar7 = *(undefined4 *)(lVar15 + (longlong)puVar7);
          puVar7 = puVar7 + 1;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      iVar13 = iVar9 + iVar16;
      piVar18 = (int *)(*(longlong *)(lVar6 + 0xe0) + lVar2);
      piVar18[2] = -1;
      piVar18[3] = -1;
      *(byte *)(piVar18 + 4) = *(byte *)(piVar18 + 4) & 0xbf;
      if (iVar13 != 0) {
        *piVar18 = iVar12 + iVar16;
      }
      if (iVar13 != param_6 + -1) {
        piVar18[1] = iVar10 + iVar16;
        fVar3 = *(float *)(param_5 + 4 + (longlong)iVar13 * 0x10);
        local_58 = fVar3 * param_3[4] + *param_3;
        fStack_54 = fVar3 * param_3[5] + param_3[1];
        fStack_50 = fVar3 * param_3[6] + param_3[2];
        fStack_4c = fVar3 * param_3[7] + param_3[3];
        FUN_143839f40(param_2,&local_58,1);
        iVar9 = local_98;
      }
      uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
      *param_7 = *param_4;
      iVar13 = local_9c + iVar12 + iVar16;
      iVar16 = iVar16 + 1;
      param_7[1] = iVar13;
      param_7 = param_7 + 2;
      piVar18 = local_70;
      iVar13 = local_80;
      iVar11 = local_78;
      iVar17 = local_94;
    } while (iVar9 + iVar16 < param_6);
  }
  local_90[0] = (local_90[0] + 1) - iVar4;
  local_94 = iVar17 + iVar11 + param_6;
  hkaiNavMeshThreadSafeUtils::moveOwnedEdgesUp
            (param_1,param_2,&local_94,local_90,CONCAT44(uVar21,(iVar13 - iVar11) + -1));
  if (bVar5) {
    piVar18[1] = iVar17 + iVar4;
    *(short *)((longlong)piVar18 + 10) = (short)local_7c;
  }
  else {
    *piVar18 = iVar17 + iVar4;
    *(short *)(piVar18 + 2) = (short)local_7c;
  }
  return;
}



// FUNCTION 1438b6620 FUN_1438b6620 body=150 status=ok
// SIG undefined FUN_1438b6620(void)

void FUN_1438b6620(longlong param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  lVar3 = FUN_1437fb5b0(*(undefined8 *)(lVar3 + 0x28),*(undefined4 *)(lVar3 + 0x30),lVar3 + 0xc0,
                        lVar3 + 0xe0,lVar3 + 0x70,*param_2);
  cVar1 = *(char *)(lVar3 + 0x10);
  while (cVar1 < '\0') {
    uVar2 = *(uint *)(lVar3 + 8) & 0x3fffff;
    *param_2 = uVar2;
    lVar3 = *(longlong *)(param_1 + 0x18);
    lVar3 = FUN_1437fb5b0(*(undefined8 *)(lVar3 + 0x28),*(undefined4 *)(lVar3 + 0x30),lVar3 + 0xc0,
                          lVar3 + 0xe0,lVar3 + 0x70,uVar2);
    cVar1 = *(char *)(lVar3 + 0x10);
  }
  return;
}



// FUNCTION 1438b66c0 FUN_1438b66c0 body=69 status=ok
// SIG undefined FUN_1438b66c0(void)

void FUN_1438b66c0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 8) {
    FUN_1438b6620(param_1,lVar2 + 4);
  }
  return;
}



// FUNCTION 1438b6710 FUN_1438b6710 body=515 status=ok
// SIG undefined FUN_1438b6710(void)

void FUN_1438b6710(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  LPVOID pvVar3;
  int *piVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar11 = 0;
  uVar10 = param_1[1] - *param_1 >> 3;
  uVar9 = (uint)uVar10;
  if (uVar9 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    pvVar3 = TlsGetValue(DAT_146b7bf70);
    if (pvVar3 == (LPVOID)0x0) {
      pvVar3 = DAT_146b7bf68;
    }
    uVar8 = uVar9 * 4 + 0x7f & 0xffffff80;
    piVar4 = *(int **)((longlong)pvVar3 + 0x18);
    uVar6 = (longlong)(int)uVar8 + (longlong)piVar4;
    if ((*(int *)((longlong)pvVar3 + 0x10) < (int)uVar8) ||
       (*(ulonglong *)((longlong)pvVar3 + 0x20) < uVar6)) {
      piVar4 = (int *)FUN_1437138c0(pvVar3);
    }
    else {
      *(ulonglong *)((longlong)pvVar3 + 0x18) = uVar6;
    }
  }
  uVar6 = uVar11;
  piVar7 = piVar4;
  if (0 < (int)uVar9) {
    do {
      *piVar7 = (int)uVar6;
      uVar8 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar8;
      piVar7 = piVar7 + 1;
    } while ((int)uVar8 < (int)uVar9);
  }
  if (1 < (int)uVar9) {
    FUN_1438b4ee0(piVar4,0,uVar9 - 1,*param_2);
  }
  uVar8 = *(uint *)((longlong)param_3 + 0xc) & 0x3fffffff;
  if ((int)uVar8 < (int)uVar9) {
    uVar8 = uVar8 * 2;
    uVar6 = uVar10 & 0xffffffff;
    if ((int)uVar9 < (int)uVar8) {
      uVar6 = (ulonglong)uVar8;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,param_3,uVar6,8);
  }
  *(uint *)(param_3 + 1) = uVar9;
  uVar8 = *(uint *)((longlong)param_4 + 0xc) & 0x3fffffff;
  if ((int)uVar8 < (int)uVar9) {
    uVar8 = uVar8 * 2;
    uVar10 = uVar10 & 0xffffffff;
    if ((int)uVar9 < (int)uVar8) {
      uVar10 = (ulonglong)uVar8;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,param_4,uVar10,8);
  }
  *(uint *)(param_4 + 1) = uVar9;
  if (0 < (int)uVar9) {
    do {
      puVar1 = (undefined4 *)(*param_1 + (longlong)piVar4[uVar11] * 8);
      puVar2 = (undefined4 *)(*param_3 + uVar11 * 8);
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      *(undefined8 *)(*param_4 + uVar11 * 8) =
           *(undefined8 *)(*param_2 + (longlong)piVar4[uVar11] * 8);
      uVar11 = uVar11 + 1;
    } while ((longlong)uVar11 < (longlong)(int)uVar9);
  }
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  uVar8 = uVar9 * 4 + 0x7f & 0xffffff80;
  if (((*(int *)((longlong)pvVar3 + 0x10) < (int)uVar8) ||
      ((longlong)(int)uVar8 + (longlong)piVar4 != *(longlong *)((longlong)pvVar3 + 0x18))) ||
     (*(int **)((longlong)pvVar3 + 0x28) == piVar4)) {
    FUN_143713ff0(pvVar3,piVar4);
  }
  else {
    *(int **)((longlong)pvVar3 + 0x18) = piVar4;
  }
  uVar5 = FUN_143703a50();
  if (-1 < (int)(uVar9 | 0x80000000)) {
    FUN_143702e10(uVar5,piVar4,4,uVar9 & 0x3fffffff);
  }
  return;
}



// FUNCTION 1438b6920 FUN_1438b6920 body=92 status=ok
// SIG undefined FUN_1438b6920(void)

void FUN_1438b6920(void)

{
  FUN_1438b2f60();
  return;
}



// FUNCTION 1438b6980 FUN_1438b6980 body=92 status=ok
// SIG undefined FUN_1438b6980(void)

void FUN_1438b6980(void)

{
  FUN_1438b37b0();
  return;
}



// FUNCTION 1438b69e0 FUN_1438b69e0 body=406 status=ok
// SIG undefined FUN_1438b69e0(void)

void FUN_1438b69e0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  undefined4 param_5,char param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong local_28;
  longlong lStack_20;
  longlong local_18;
  longlong lStack_10;
  
  local_18 = param_2[1] + -8;
  lStack_10 = *param_2 + -8;
  if (param_6 == '\0') {
    local_28 = *param_1;
    lStack_20 = param_1[1];
    FUN_1438b4780(&local_28,&local_18,param_3,param_4,param_5);
  }
  else {
    local_28 = local_18;
    lStack_20 = lStack_10;
    local_18 = *param_1;
    lStack_10 = param_1[1];
    FUN_1438b4020(&local_18);
  }
  uVar8 = 0;
  iVar6 = (int)param_4[1] + -1;
  lVar10 = (longlong)iVar6;
  if (0 < iVar6) {
    lVar7 = lVar10 << 4;
    uVar9 = uVar8;
    uVar12 = uVar8;
    do {
      lVar2 = *param_4;
      uVar12 = uVar12 + 1;
      lVar10 = lVar10 + -1;
      uVar3 = ((undefined8 *)(lVar7 + lVar2))[1];
      uVar4 = *(undefined8 *)(uVar9 + lVar2);
      uVar5 = ((undefined8 *)(uVar9 + lVar2))[1];
      *(undefined8 *)(uVar9 + lVar2) = *(undefined8 *)(lVar7 + lVar2);
      ((undefined8 *)(uVar9 + lVar2))[1] = uVar3;
      *(undefined8 *)(lVar7 + lVar2) = uVar4;
      ((undefined8 *)(lVar7 + lVar2))[1] = uVar5;
      lVar7 = lVar7 + -0x10;
      uVar9 = uVar9 + 0x10;
    } while ((longlong)uVar12 < lVar10);
  }
  uVar9 = uVar8;
  uVar12 = uVar8;
  if (0 < (int)param_4[1]) {
    do {
      lVar10 = *param_4;
      uVar11 = (int)uVar12 + 1;
      uVar1 = *(undefined4 *)(uVar9 + lVar10);
      *(undefined4 *)(uVar9 + lVar10) = *(undefined4 *)(uVar9 + 4 + lVar10);
      *(undefined4 *)(uVar9 + 4 + lVar10) = uVar1;
      *(float *)(uVar9 + *param_4) = 1.0 - *(float *)(uVar9 + *param_4);
      *(float *)(uVar9 + 4 + *param_4) = 1.0 - *(float *)(uVar9 + 4 + *param_4);
      *(int *)(uVar9 + 8 + *param_4) =
           ((int)(param_2[1] - *param_2 >> 3) - *(int *)(uVar9 + 8 + *param_4)) + -1;
      uVar9 = uVar9 + 0x10;
      uVar12 = (ulonglong)uVar11;
    } while ((int)uVar11 < (int)param_4[1]);
  }
  uVar9 = uVar8;
  if (0 < (int)param_3[1]) {
    do {
      iVar6 = *(int *)(uVar8 + 0xc + *param_3);
      if (iVar6 != -1) {
        *(int *)(uVar8 + 0xc + *param_3) = ((int)param_4[1] - iVar6) + -1;
      }
      uVar11 = (int)uVar9 + 1;
      uVar8 = uVar8 + 0x10;
      uVar9 = (ulonglong)uVar11;
    } while ((int)uVar11 < (int)param_3[1]);
  }
  return;
}



// FUNCTION 1438b6b80 FUN_1438b6b80 body=441 status=ok
// SIG undefined FUN_1438b6b80(void)

void FUN_1438b6b80(longlong param_1,longlong param_2,int *param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  if (0 < param_4) {
    iVar5 = 0;
    do {
      lVar1 = *(longlong *)(param_2 + 0xe0) + (longlong)(*param_3 + iVar5) * 0x14;
      LOCK();
      UNLOCK();
      uVar2 = *(uint *)(lVar1 + 8);
      if ((*(byte *)(*(longlong *)(param_2 + 0xe0) + 0x10 + (longlong)(*param_3 + iVar5) * 0x14) &
          0x40) == 0) {
        if (uVar2 == 0xffffffff) goto LAB_1438b6d16;
        uVar2 = uVar2 & 0x3fffff;
        if ((int)uVar2 < *(int *)(param_2 + 0x30)) {
          if (*(int *)(param_2 + 0x78) != 0) {
            uVar2 = *(uint *)(*(longlong *)(param_2 + 0x70) + (longlong)(int)uVar2 * 4);
          }
          if (uVar2 != 0xffffffff) {
            lVar3 = *(longlong *)(param_2 + 0xc0);
            goto LAB_1438b6cfa;
          }
          lVar3 = 0;
        }
        else {
          uVar2 = uVar2 - *(int *)(param_2 + 0x30);
          lVar3 = *(longlong *)(param_2 + 0xe0);
LAB_1438b6cfa:
          lVar3 = lVar3 + (longlong)(int)uVar2 * 0x14;
        }
        *(undefined8 *)(lVar1 + 8) = 0xffffffffffffffff;
        *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xbf;
        *(undefined8 *)(lVar3 + 8) = 0xffffffffffffffff;
        *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) & 0xbf;
      }
      else {
        LOCK();
        UNLOCK();
        if (uVar2 != 0xffffffff) {
          lVar3 = *(longlong *)((ulonglong)(uVar2 >> 0x16) * 0x100 + *(longlong *)(param_1 + 0x38));
          if (lVar3 == 0) {
            lVar3 = 0;
          }
          else if (*(char *)(lVar3 + 0x28) == '\x01') {
            lVar3 = *(longlong *)(lVar3 + 0x18);
          }
          else {
            lVar3 = FUN_142fbda20();
          }
          FUN_143839390(param_2);
          if (*(uint *)(lVar1 + 8) != 0xffffffff) {
            uVar2 = *(uint *)(lVar1 + 8) & 0x3fffff;
            if ((int)uVar2 < *(int *)(lVar3 + 0x30)) {
              if (*(int *)(lVar3 + 0x78) != 0) {
                uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x70) + (longlong)(int)uVar2 * 4);
              }
              if (uVar2 != 0xffffffff) {
                lVar4 = *(longlong *)(lVar3 + 0xc0);
                goto LAB_1438b6c80;
              }
              lVar4 = 0;
            }
            else {
              uVar2 = uVar2 - *(int *)(lVar3 + 0x30);
              lVar4 = *(longlong *)(lVar3 + 0xe0);
LAB_1438b6c80:
              lVar4 = lVar4 + (longlong)(int)uVar2 * 0x14;
            }
            *(undefined8 *)(lVar1 + 8) = 0xffffffffffffffff;
            *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xbf;
            *(undefined8 *)(lVar4 + 8) = 0xffffffffffffffff;
            LOCK();
            UNLOCK();
            *(byte *)(lVar4 + 0x10) = *(byte *)(lVar4 + 0x10) & 0xbf;
          }
          FUN_1438398d0(param_2,lVar3);
        }
      }
LAB_1438b6d16:
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_4);
  }
  return;
}



// FUNCTION 1438b6d40 FUN_1438b6d40 body=1047 status=ok
// SIG undefined FUN_1438b6d40(void)

void FUN_1438b6d40(longlong param_1,longlong param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  plVar1 = (longlong *)(param_2 + 0x18);
  if (*(char *)(param_2 + 0x28) == '\x01') {
    lVar8 = *plVar1;
  }
  else {
    lVar8 = FUN_142fbda20(plVar1);
  }
  uVar11 = *(int *)(*plVar1 + 0x30) + *param_3;
  lVar2 = *(longlong *)(lVar8 + 0xe0) + (longlong)*param_4 * 0x14;
  LOCK();
  UNLOCK();
  if ((*(byte *)(*(longlong *)(lVar8 + 0xe0) + 0x10 + (longlong)*param_4 * 0x14) & 0x40) == 0) {
    iVar4 = *param_4;
    iVar5 = *param_3;
    puVar10 = (undefined4 *)(*(longlong *)(lVar8 + 0xe0) + (longlong)iVar4 * 0x14);
    puVar3 = (undefined4 *)(*(longlong *)(lVar8 + 0xe0) + (longlong)iVar5 * 0x14);
    *puVar3 = *puVar10;
    puVar3[1] = puVar10[1];
    puVar3[2] = puVar10[2];
    puVar3[3] = puVar10[3];
    *(undefined1 *)(puVar3 + 4) = *(undefined1 *)(puVar10 + 4);
    *(undefined1 *)((longlong)puVar3 + 0x11) = *(undefined1 *)((longlong)puVar10 + 0x11);
    *(undefined2 *)((longlong)puVar3 + 0x12) = *(undefined2 *)((longlong)puVar10 + 0x12);
    *(undefined2 *)(*(longlong *)(lVar8 + 0x110) + (longlong)iVar5 * 2) =
         *(undefined2 *)(*(longlong *)(lVar8 + 0x110) + (longlong)iVar4 * 2);
    iVar6 = *(int *)(lVar8 + 0x60);
    lVar14 = (longlong)iVar6;
    puVar3 = (undefined4 *)(*(longlong *)(lVar8 + 0x150) + (longlong)(iVar6 * iVar4) * 4);
    puVar10 = (undefined4 *)(*(longlong *)(lVar8 + 0x150) + (longlong)(iVar6 * iVar5) * 4);
    if (iVar6 == 1) {
      *puVar10 = *puVar3;
    }
    else if (0 < lVar14) {
      lVar9 = (longlong)puVar3 - (longlong)puVar10;
      do {
        *puVar10 = *(undefined4 *)(lVar9 + (longlong)puVar10);
        puVar10 = puVar10 + 1;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    uVar7 = *(uint *)(*(longlong *)(lVar8 + 0xe0) + 8 + (longlong)*param_3 * 0x14);
    if (uVar7 != 0xffffffff) {
      uVar7 = uVar7 & 0x3fffff;
      if ((int)uVar7 < *(int *)(lVar8 + 0x30)) {
        if (*(int *)(lVar8 + 0x78) != 0) {
          uVar7 = *(uint *)(*(longlong *)(lVar8 + 0x70) + (longlong)(int)uVar7 * 4);
        }
        if (uVar7 == 0xffffffff) {
          lVar8 = 0;
        }
        else {
          lVar8 = *(longlong *)(lVar8 + 0xc0) + (longlong)(int)uVar7 * 0x14;
        }
      }
      else {
        lVar8 = *(longlong *)(lVar8 + 0xe0) + (longlong)(int)(uVar7 - *(int *)(lVar8 + 0x30)) * 0x14
        ;
      }
      *(uint *)(lVar8 + 8) = uVar11;
      *(undefined4 *)(lVar2 + 0xc) = 0xffffffff;
    }
    goto LAB_1438b7138;
  }
  LOCK();
  UNLOCK();
  if (*(uint *)(lVar2 + 8) == 0xffffffff) {
    FUN_143839380(lVar8);
    iVar4 = *param_4;
    iVar5 = *param_3;
    puVar10 = (undefined4 *)(*(longlong *)(lVar8 + 0xe0) + (longlong)iVar4 * 0x14);
    puVar3 = (undefined4 *)(*(longlong *)(lVar8 + 0xe0) + (longlong)iVar5 * 0x14);
    *puVar3 = *puVar10;
    puVar3[1] = puVar10[1];
    puVar3[2] = puVar10[2];
    puVar3[3] = puVar10[3];
    *(undefined1 *)(puVar3 + 4) = *(undefined1 *)(puVar10 + 4);
    *(undefined1 *)((longlong)puVar3 + 0x11) = *(undefined1 *)((longlong)puVar10 + 0x11);
    *(undefined2 *)((longlong)puVar3 + 0x12) = *(undefined2 *)((longlong)puVar10 + 0x12);
    *(undefined2 *)(*(longlong *)(lVar8 + 0x110) + (longlong)iVar5 * 2) =
         *(undefined2 *)(*(longlong *)(lVar8 + 0x110) + (longlong)iVar4 * 2);
    iVar6 = *(int *)(lVar8 + 0x60);
    lVar14 = (longlong)iVar6;
    puVar3 = (undefined4 *)(*(longlong *)(lVar8 + 0x150) + (longlong)(iVar6 * iVar4) * 4);
    puVar10 = (undefined4 *)(*(longlong *)(lVar8 + 0x150) + (longlong)(iVar6 * iVar5) * 4);
    if (iVar6 == 1) {
      *puVar10 = *puVar3;
    }
    else if (0 < lVar14) {
      lVar9 = (longlong)puVar3 - (longlong)puVar10;
      do {
        *puVar10 = *(undefined4 *)(lVar9 + (longlong)puVar10);
        puVar10 = puVar10 + 1;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    *(undefined1 *)(lVar2 + 0x10) = 0x80;
    *(uint *)(lVar2 + 8) = uVar11;
    *(undefined4 *)(lVar2 + 0xc) = 0xffffffff;
    FUN_1438398c0(lVar8);
    return;
  }
  lVar14 = 0;
  lVar9 = *(longlong *)
           ((ulonglong)(*(uint *)(lVar2 + 8) >> 0x16) * 0x100 + *(longlong *)(param_1 + 0x38));
  if (lVar9 == 0) {
    lVar9 = 0;
  }
  else if (*(char *)(lVar9 + 0x28) == '\x01') {
    lVar9 = *(longlong *)(lVar9 + 0x18);
  }
  else {
    lVar9 = FUN_142fbda20();
  }
  FUN_143839390(lVar8,lVar9);
  iVar4 = *param_4;
  iVar5 = *param_3;
  puVar10 = (undefined4 *)(*(longlong *)(lVar8 + 0xe0) + (longlong)iVar4 * 0x14);
  puVar3 = (undefined4 *)(*(longlong *)(lVar8 + 0xe0) + (longlong)iVar5 * 0x14);
  *puVar3 = *puVar10;
  puVar3[1] = puVar10[1];
  puVar3[2] = puVar10[2];
  puVar3[3] = puVar10[3];
  *(undefined1 *)(puVar3 + 4) = *(undefined1 *)(puVar10 + 4);
  *(undefined1 *)((longlong)puVar3 + 0x11) = *(undefined1 *)((longlong)puVar10 + 0x11);
  *(undefined2 *)((longlong)puVar3 + 0x12) = *(undefined2 *)((longlong)puVar10 + 0x12);
  *(undefined2 *)(*(longlong *)(lVar8 + 0x110) + (longlong)iVar5 * 2) =
       *(undefined2 *)(*(longlong *)(lVar8 + 0x110) + (longlong)iVar4 * 2);
  iVar6 = *(int *)(lVar8 + 0x60);
  lVar13 = (longlong)iVar6;
  puVar3 = (undefined4 *)(*(longlong *)(lVar8 + 0x150) + (longlong)(iVar6 * iVar4) * 4);
  puVar10 = (undefined4 *)(*(longlong *)(lVar8 + 0x150) + (longlong)(iVar6 * iVar5) * 4);
  if (iVar6 == 1) {
    *puVar10 = *puVar3;
  }
  else if (0 < lVar13) {
    lVar12 = (longlong)puVar3 - (longlong)puVar10;
    do {
      *puVar10 = *(undefined4 *)(lVar12 + (longlong)puVar10);
      puVar10 = puVar10 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  if (*(uint *)(lVar2 + 8) != 0xffffffff) {
    uVar7 = *(uint *)(lVar2 + 8) & 0x3fffff;
    if ((int)uVar7 < *(int *)(lVar9 + 0x30)) {
      if (*(int *)(lVar9 + 0x78) != 0) {
        uVar7 = *(uint *)(*(longlong *)(lVar9 + 0x70) + (longlong)(int)uVar7 * 4);
      }
      if (uVar7 != 0xffffffff) {
        lVar14 = *(longlong *)(lVar9 + 0xc0);
        goto LAB_1438b6f08;
      }
    }
    else {
      uVar7 = uVar7 - *(int *)(lVar9 + 0x30);
      lVar14 = *(longlong *)(lVar9 + 0xe0);
LAB_1438b6f08:
      lVar14 = lVar14 + (longlong)(int)uVar7 * 0x14;
    }
    *(uint *)(lVar14 + 8) = *(uint *)(lVar14 + 8) & 0xffc00000;
    *(uint *)(lVar14 + 8) = *(uint *)(lVar14 + 8) | uVar11;
  }
  FUN_1438398d0(lVar8,lVar9);
LAB_1438b7138:
  *(uint *)(lVar2 + 8) = uVar11;
  *(undefined4 *)(lVar2 + 0xc) = 0xffffffff;
  *(undefined1 *)(lVar2 + 0x10) = 0x80;
  return;
}



// FUNCTION 1438b7160 FUN_1438b7160 body=146 status=ok
// SIG undefined FUN_1438b7160(void)

void FUN_1438b7160(undefined8 param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int local_res10 [2];
  int local_res18 [4];
  
  plVar1 = (longlong *)(param_2 + 0x18);
  if (*(char *)(param_2 + 0x28) == '\x01') {
    lVar3 = *plVar1;
  }
  else {
    lVar3 = FUN_142fbda20(plVar1);
  }
  piVar4 = (int *)((longlong)*param_3 * 0x10 + *(longlong *)(lVar3 + 0xd0));
  iVar2 = *(int *)(*plVar1 + 0x30);
  local_res10[0] = *piVar4 - iVar2;
  FUN_1438b6b80(param_1,lVar3,local_res10,(int)(short)piVar4[2]);
  if (*(short *)((longlong)piVar4 + 10) != 0) {
    local_res18[0] = piVar4[1] - iVar2;
    FUN_1438b6b80(param_1,lVar3,local_res18,(int)*(short *)((longlong)piVar4 + 10));
  }
  return;
}



// FUNCTION 1438b7200 moveOwnedEdgesDown body=122 status=ok
// SIG undefined moveOwnedEdgesDown(void)

void hkaiNavMeshThreadSafeUtils::moveOwnedEdgesDown
               (undefined8 param_1,undefined8 param_2,int *param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int local_28 [4];
  
  iVar1 = param_5;
  iVar2 = 0;
  if (0 < param_5) {
    do {
      local_28[0] = *param_3 + iVar2;
      param_5 = *param_4 + iVar2;
      FUN_1438b6d40(param_1,param_2,local_28,&param_5);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}



// FUNCTION 1438b7280 moveOwnedEdgesUp body=123 status=ok
// SIG undefined moveOwnedEdgesUp(void)

void hkaiNavMeshThreadSafeUtils::moveOwnedEdgesUp
               (undefined8 param_1,undefined8 param_2,int *param_3,int *param_4,int param_5)

{
  int iVar1;
  int local_18 [4];
  
  iVar1 = param_5;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    local_18[0] = *param_3 + iVar1;
    param_5 = *param_4 + iVar1;
    FUN_1438b6d40(param_1,param_2,local_18,&param_5);
  }
  return;
}



// FUNCTION 1438b7300 FUN_1438b7300 body=2076 status=ok
// SIG undefined FUN_1438b7300(void)

uint * FUN_1438b7300(uint *param_1,longlong param_2,undefined8 *param_3,longlong *param_4,
                    longlong param_5,longlong param_6,longlong *param_7,undefined8 param_8,
                    longlong *param_9)

{
  ushort *puVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 uVar4;
  ushort uVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  longlong *plVar9;
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
  float fVar23;
  float fVar24;
  DWORD dwTlsIndex;
  longlong *plVar25;
  char cVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined8 uVar31;
  LPVOID pvVar32;
  undefined4 uVar33;
  ulonglong uVar34;
  uint uVar35;
  uint *puVar36;
  uint *puVar37;
  longlong lVar38;
  longlong lVar39;
  int iVar40;
  longlong lVar41;
  int iVar42;
  float fVar43;
  float fVar44;
  float fVar47;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar48;
  uint *local_d8;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined4 *local_b8;
  undefined4 local_a8 [2];
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  uint local_88;
  undefined8 *local_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  uint local_68;
  undefined8 local_60;
  
  plVar25 = param_9;
  puVar37 = (uint *)*param_4;
  uVar30 = *puVar37;
  *(int *)(param_4 + 1) = (int)param_4[1] + -1;
  *(undefined8 *)puVar37 = *(undefined8 *)(puVar37 + (longlong)(int)param_4[1] * 2);
  lVar39 = param_4[1];
  iVar42 = 0;
  if ((int)lVar39 < 3) {
    iVar40 = 1;
  }
  else {
    iVar40 = (*(int *)(*param_4 + 0x14) < *(int *)(*param_4 + 0xc)) + 1;
  }
  while (iVar6 = iVar40, iVar6 < (int)lVar39) {
    lVar7 = *param_4;
    lVar41 = (longlong)iVar42;
    lVar38 = (longlong)iVar6;
    if (*(int *)(lVar7 + 4 + lVar41 * 8) <= *(int *)(lVar7 + 4 + lVar38 * 8)) break;
    uVar31 = *(undefined8 *)(lVar7 + lVar41 * 8);
    *(undefined8 *)(lVar7 + lVar41 * 8) = *(undefined8 *)(lVar7 + lVar38 * 8);
    *(undefined8 *)(lVar7 + lVar38 * 8) = uVar31;
    iVar40 = iVar6 * 2 + 1;
    iVar27 = iVar6 * 2 + 2;
    iVar42 = iVar6;
    if (iVar27 < (int)param_4[1]) {
      iVar40 = iVar40 + (uint)(*(int *)(*param_4 + 4 + (longlong)iVar27 * 8) <
                              *(int *)(*param_4 + 4 + (longlong)iVar40 * 8));
    }
  }
  uVar28 = uVar30 >> 0x16;
  *(uint *)((longlong)param_9 + 0x74) = uVar30;
  if ((*param_9 != 0) && (*(uint *)(param_9 + 0xd) != uVar28)) {
    param_9[1] = *(longlong *)((ulonglong)uVar28 * 0x100 + 0x10 + *(longlong *)(*param_9 + 0x38));
    *(uint *)(param_9 + 0xd) = uVar28;
  }
  lVar39 = param_9[1];
  *(uint *)(param_9 + 0xd) = uVar28;
  uVar34 = (ulonglong)(uVar30 & 0x3fffff);
  param_9[6] = *(longlong *)(*(longlong *)(*(longlong *)(lVar39 + 0x18) + 0x18) + uVar34 * 8);
  lVar7 = *(longlong *)(lVar39 + 0x18);
  if ((*(int *)(lVar7 + 0x78) == 0) ||
     (iVar42 = *(int *)(*(longlong *)(lVar7 + 0x70) + uVar34 * 4), iVar42 == -1)) {
    *(undefined4 *)(param_9 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)param_9 + 0x3c) = 0;
  }
  else {
    param_9[7] = *(longlong *)(*(longlong *)(lVar7 + 0x80) + (longlong)iVar42 * 8);
  }
  uVar4 = 0x18;
  if (*(int *)((longlong)param_9 + 0x34) < 0x18) {
    uVar4 = *(undefined4 *)((longlong)param_9 + 0x34);
  }
  pfVar2 = (float *)(*(longlong *)(*(longlong *)(lVar39 + 0x18) + 0x38) + uVar34 * 0x10);
  fVar43 = *pfVar2;
  fVar48 = pfVar2[1];
  fVar10 = pfVar2[2];
  uVar33 = 0x18;
  if (*(int *)((longlong)param_9 + 0x3c) < 0x18) {
    uVar33 = *(undefined4 *)((longlong)param_9 + 0x3c);
  }
  fVar44 = *(float *)(lVar39 + 0x40);
  fVar47 = *(float *)(lVar39 + 0x44);
  fVar11 = *(float *)(lVar39 + 0x48);
  fVar12 = *(float *)(lVar39 + 0x4c);
  fVar13 = *(float *)(lVar39 + 0x30);
  fVar14 = *(float *)(lVar39 + 0x34);
  fVar15 = *(float *)(lVar39 + 0x38);
  fVar16 = *(float *)(lVar39 + 0x3c);
  fVar17 = *(float *)(lVar39 + 0x50);
  fVar18 = *(float *)(lVar39 + 0x54);
  fVar19 = *(float *)(lVar39 + 0x58);
  fVar20 = *(float *)(lVar39 + 0x5c);
  fVar21 = *(float *)(lVar39 + 0x60);
  fVar22 = *(float *)(lVar39 + 100);
  fVar23 = *(float *)(lVar39 + 0x68);
  fVar24 = *(float *)(lVar39 + 0x6c);
  *(undefined4 *)((longlong)param_9 + 0x34) = uVar4;
  *(undefined4 *)((longlong)param_9 + 0x3c) = uVar33;
  *(float *)(param_9 + 8) = fVar48 * fVar44 + fVar43 * fVar13 + fVar10 * fVar17 + fVar21;
  *(float *)((longlong)param_9 + 0x44) =
       fVar48 * fVar47 + fVar43 * fVar14 + fVar10 * fVar18 + fVar22;
  *(float *)(param_9 + 9) = fVar48 * fVar11 + fVar43 * fVar15 + fVar10 * fVar19 + fVar23;
  *(float *)((longlong)param_9 + 0x4c) =
       fVar48 * fVar12 + fVar43 * fVar16 + fVar10 * fVar20 + fVar24;
  lVar39 = *(longlong *)(lVar39 + 0x18);
  lVar7 = *(longlong *)(lVar39 + 0x90);
  iVar42 = *(int *)(lVar39 + 0x60);
  if (*(longlong *)(lVar39 + 0x28) != 0) {
    FUN_1438b7bb0(param_9 + 0x12,*(longlong *)(lVar39 + 0x28),(int)param_9[6],uVar4,
                  *(undefined4 *)(lVar39 + 0x30));
  }
  if ((lVar7 != 0) && (0 < *(int *)((longlong)plVar25 + 0x3c))) {
    FUN_1438b7bb0(plVar25 + (longlong)*(int *)((longlong)plVar25 + 0x34) + 0x12,lVar7,
                  (int)plVar25[7] - *(int *)(*(longlong *)(plVar25[1] + 0x18) + 0x30),
                  *(int *)((longlong)plVar25 + 0x3c),
                  *(undefined4 *)(*(longlong *)(plVar25[1] + 0x18) + 0x98));
  }
  plVar25[0xc] = (longlong)(plVar25 + 0x11);
  iVar40 = *(int *)((longlong)plVar25 + 0x3c) + *(int *)((longlong)plVar25 + 0x34);
  lVar39 = (longlong)iVar40;
  if (0 < iVar40) {
    puVar37 = (uint *)((longlong)plVar25 + 0x94);
    do {
      if ((*(byte *)((longlong)puVar37 + -2) & 0x40) == 0) {
        *puVar37 = iVar42 << 0x16 | *puVar37 & 0x3fffff;
      }
      puVar37 = puVar37 + 2;
      lVar39 = lVar39 + -1;
    } while (lVar39 != 0);
  }
  piVar8 = (int *)plVar25[0xb];
  uVar31 = FUN_143843a50(piVar8,uVar30);
  lVar39 = CONCAT44(param_8._4_4_,(uint)param_8);
  *(undefined8 *)(piVar8 + 0x12) = uVar31;
  *(undefined8 *)(piVar8 + 0x14) = uVar31;
  piVar8[0x10] = (int)(short)((longlong)(ulonglong)(uint)((int)uVar31 - *piVar8) >> 4);
  uVar28 = *(int *)(param_2 + 0x34) + *(int *)(param_2 + 0x3c);
  uVar4 = **(undefined4 **)(lVar39 + 0x48);
  param_8._0_4_ = uVar28;
  if (uVar28 == 0) {
    local_d8 = (uint *)0x0;
  }
  else {
    pvVar32 = TlsGetValue(DAT_146b7bf70);
    if (pvVar32 == (LPVOID)0x0) {
      pvVar32 = DAT_146b7bf68;
    }
    uVar35 = uVar28 * 4 + 0x7f & 0xffffff80;
    local_d8 = *(uint **)((longlong)pvVar32 + 0x18);
    uVar34 = (longlong)(int)uVar35 + (longlong)local_d8;
    if ((*(int *)((longlong)pvVar32 + 0x10) < (int)uVar35) ||
       (*(ulonglong *)((longlong)pvVar32 + 0x20) < uVar34)) {
      local_d8 = (uint *)FUN_1437138c0(pvVar32);
    }
    else {
      *(ulonglong *)((longlong)pvVar32 + 0x18) = uVar34;
    }
  }
  lVar7 = param_5;
  iVar42 = *(int *)(param_2 + 0x34);
  iVar40 = *(int *)(param_2 + 0x3c);
  iVar6 = *(int *)(param_2 + 0x30);
  iVar27 = 0;
  puVar37 = local_d8;
  puVar36 = local_d8;
  if (0 < iVar42) {
    do {
      uVar35 = iVar27 + iVar6;
      puVar37 = puVar36 + 1;
      iVar27 = iVar27 + 1;
      *puVar36 = uVar35;
      puVar36 = puVar37;
    } while (iVar27 < iVar42);
  }
  iVar6 = *(int *)(param_2 + 0x38);
  iVar27 = 0;
  if (0 < iVar40) {
    do {
      uVar35 = iVar27 + iVar6;
      iVar27 = iVar27 + 1;
      *puVar37 = uVar35;
      puVar37 = puVar37 + 1;
    } while (iVar27 < iVar40);
  }
  puVar37 = local_d8;
  while ((puVar37 < local_d8 + (iVar40 + iVar42) &&
         (uVar35 = *puVar37, *(int *)(lVar7 + 0x1c) < *(int *)(lVar7 + 0x18)))) {
    lVar38 = plVar25[0xc];
    lVar41 = plVar25[0xb];
    plVar25[0xc] = lVar38 + 8;
    if (*(int *)(lVar38 + 0xc) == -1) {
      *(undefined8 *)(lVar41 + 0x48) = 0;
    }
    else {
      uVar31 = FUN_143843a50(lVar41);
      *(undefined8 *)(lVar41 + 0x48) = uVar31;
    }
    uVar29 = *(uint *)(plVar25[0xc] + 4) >> 0x16;
    if (*plVar25 == 0) {
      plVar25[2] = plVar25[1];
    }
    else if (*(uint *)((longlong)plVar25 + 0x6c) != uVar29) {
      plVar25[2] = *(longlong *)((ulonglong)uVar29 * 0x100 + 0x10 + *(longlong *)(*plVar25 + 0x38));
      *(uint *)((longlong)plVar25 + 0x6c) = uVar29;
    }
    *(uint *)((longlong)plVar25 + 0x6c) = uVar29;
    plVar9 = (longlong *)param_3[5];
    uVar29 = *(uint *)(*(longlong *)(param_2 + 0x60) + 4);
    if (plVar9 == (longlong *)0x0) {
LAB_1438b785d:
      param_9._0_4_ = uVar35;
      fVar43 = (float)FUN_14389f170(param_2,uVar30,uVar29,&param_9,uVar4);
      if ((fVar43 < *(float *)(lVar39 + 0x38) || fVar43 == *(float *)(lVar39 + 0x38)) &&
         (((*(byte *)(*(longlong *)(lVar7 + 0x48) + 0xe) & 3) == 0 ||
          (fVar43 < **(float **)(lVar39 + 0x48))))) {
        pfVar2 = *(float **)(lVar39 + 0x48);
        *pfVar2 = fVar43;
        if ((*(byte *)((longlong)pfVar2 + 0xe) & 3) == 0) {
          lVar38 = *(longlong *)(*param_7 + 0x10);
          pfVar3 = (float *)(*(longlong *)(*(longlong *)(lVar38 + 0x18) + 0x38) +
                            (longlong)(int)(uVar29 & 0x3fffff) * 0x10);
          fVar43 = *pfVar3;
          fVar48 = pfVar3[1];
          fVar10 = pfVar3[2];
          fVar44 = (fVar48 * *(float *)(lVar38 + 0x40) + fVar43 * *(float *)(lVar38 + 0x30) +
                    fVar10 * *(float *)(lVar38 + 0x50) + *(float *)(lVar38 + 0x60)) -
                   *(float *)(param_7 + 2);
          fVar47 = (fVar48 * *(float *)(lVar38 + 0x44) + fVar43 * *(float *)(lVar38 + 0x34) +
                    fVar10 * *(float *)(lVar38 + 0x54) + *(float *)(lVar38 + 100)) -
                   *(float *)((longlong)param_7 + 0x14);
          fVar43 = (fVar48 * *(float *)(lVar38 + 0x48) + fVar43 * *(float *)(lVar38 + 0x38) +
                    fVar10 * *(float *)(lVar38 + 0x58) + *(float *)(lVar38 + 0x68)) -
                   *(float *)(param_7 + 3);
          fVar44 = fVar44 * fVar44;
          fVar47 = fVar47 * fVar47;
          auVar45._8_4_ = fVar43 * fVar43;
          auVar45._4_4_ = auVar45._8_4_;
          auVar45._0_4_ = auVar45._8_4_;
          auVar45._12_4_ = auVar45._8_4_;
          fVar48 = fVar47 + fVar44 + auVar45._8_4_;
          auVar46._4_4_ = fVar47 + fVar44 + auVar45._8_4_;
          auVar46._0_4_ = fVar48;
          auVar46._8_4_ = fVar47 + fVar44 + auVar45._8_4_;
          auVar46._12_4_ = fVar47 + fVar44 + auVar45._8_4_;
          auVar46 = rsqrtps(auVar45,auVar46);
          fVar43 = auVar46._0_4_;
          fVar43 = (float)(~-(uint)(fVar48 <= 0.0) &
                          (uint)((3.0 - fVar43 * fVar48 * fVar43) * fVar43 * 0.5 * fVar48));
          pfVar2[1] = fVar43;
          if (fVar43 < *(float *)(lVar39 + 0x34)) {
            *(float *)(lVar39 + 0x34) = fVar43;
            *(uint *)(lVar39 + 0x30) = uVar29;
          }
        }
        *(undefined2 *)(*(longlong *)(param_6 + 0x48) + 0xc) = *(undefined2 *)(param_6 + 0x40);
        lVar38 = *(longlong *)(lVar7 + 0x48);
        uVar5 = *(ushort *)(lVar38 + 0xe);
        fVar43 = (*(float **)(lVar39 + 0x48))[1] * *(float *)(lVar39 + 0x3c) +
                 **(float **)(lVar39 + 0x48);
        if (fVar43 < *(float *)(lVar39 + 0x38) || fVar43 == *(float *)(lVar39 + 0x38)) {
          *(ushort *)(lVar38 + 0xe) = *(ushort *)(lVar38 + 0xe) & 0xfffd;
          *(ushort *)(lVar38 + 0xe) = *(ushort *)(lVar38 + 0xe) | 1;
          if ((uVar5 & 1) == 0) {
            uVar35 = *(uint *)(param_4 + 1);
            uVar34 = (ulonglong)(int)uVar35;
            if (*(int *)((longlong)param_4 + 0xc) <= (int)uVar35) break;
            lVar38 = *param_4;
            *(uint *)(param_4 + 1) = uVar35 + 1;
            *(float *)(lVar38 + 4 + uVar34 * 8) = fVar43;
            *(uint *)(lVar38 + uVar34 * 8) = uVar29;
            uVar33 = *(undefined4 *)(*param_4 + uVar34 * 8);
            iVar6 = *(int *)(*param_4 + 4 + uVar34 * 8);
            while (0 < (int)uVar35) {
              uVar29 = (int)(uVar35 - 1) / 2;
              uVar35 = (uint)uVar34;
              lVar38 = *param_4;
              if (*(int *)(lVar38 + 4 + (longlong)(int)uVar29 * 8) <= iVar6) break;
              uVar34 = (ulonglong)uVar29;
              *(undefined8 *)(lVar38 + (longlong)(int)uVar35 * 8) =
                   *(undefined8 *)(lVar38 + (longlong)(int)uVar29 * 8);
              uVar35 = uVar29;
            }
            *(undefined4 *)(*param_4 + (longlong)(int)uVar35 * 8) = uVar33;
            *(int *)(*param_4 + 4 + (longlong)(int)uVar35 * 8) = iVar6;
          }
          else {
            FUN_14389cf60(param_4,uVar29);
          }
        }
      }
    }
    else {
      lVar38 = param_3[2];
      local_a8[0] = *(undefined4 *)((longlong)param_3 + 0x74);
      local_98 = param_3[8];
      uStack_90 = param_3[9];
      local_a0 = param_3 + 6;
      param_5 = *(longlong *)
                 (*(longlong *)(*(longlong *)(lVar38 + 0x18) + 0x18) +
                 (longlong)(int)(uVar29 & 0x3fffff) * 8);
      pfVar2 = (float *)(*(longlong *)(*(longlong *)(lVar38 + 0x18) + 0x38) +
                        (longlong)(int)(uVar29 & 0x3fffff) * 0x10);
      fVar43 = *pfVar2;
      fVar48 = pfVar2[1];
      fVar10 = pfVar2[2];
      local_80 = &param_5;
      local_78 = fVar48 * *(float *)(lVar38 + 0x40) + fVar43 * *(float *)(lVar38 + 0x30) +
                 fVar10 * *(float *)(lVar38 + 0x50) + *(float *)(lVar38 + 0x60);
      fStack_74 = fVar48 * *(float *)(lVar38 + 0x44) + fVar43 * *(float *)(lVar38 + 0x34) +
                  fVar10 * *(float *)(lVar38 + 0x54) + *(float *)(lVar38 + 100);
      fStack_70 = fVar48 * *(float *)(lVar38 + 0x48) + fVar43 * *(float *)(lVar38 + 0x38) +
                  fVar10 * *(float *)(lVar38 + 0x58) + *(float *)(lVar38 + 0x68);
      fStack_6c = fVar48 * *(float *)(lVar38 + 0x4c) + fVar43 * *(float *)(lVar38 + 0x3c) +
                  fVar10 * *(float *)(lVar38 + 0x5c) + *(float *)(lVar38 + 0x6c);
      local_60 = param_3[0xc];
      local_68 = *(int *)(param_3 + 0xd) << 0x16 | uVar35;
      local_c8 = *param_3;
      local_c0 = param_3 + 10;
      local_b8 = local_a8;
      local_88 = uVar29;
      cVar26 = (**(code **)(*plVar9 + 0x20))(plVar9,&local_c8);
      if (cVar26 != '\0') goto LAB_1438b785d;
    }
    puVar37 = puVar37 + 1;
  }
  lVar39 = *(longlong *)(lVar7 + 0x50);
  puVar1 = (ushort *)(lVar39 + 0xe);
  *puVar1 = *puVar1 & 0xfffe;
  puVar1 = (ushort *)(lVar39 + 0xe);
  *puVar1 = *puVar1 | 2;
  dwTlsIndex = DAT_146b7bf70;
  *param_1 = uVar30;
  pvVar32 = TlsGetValue(dwTlsIndex);
  if (pvVar32 == (LPVOID)0x0) {
    pvVar32 = DAT_146b7bf68;
  }
  uVar30 = (uint)param_8 * 4 + 0x7f & 0xffffff80;
  if (((*(int *)((longlong)pvVar32 + 0x10) < (int)uVar30) ||
      ((longlong)(int)uVar30 + (longlong)local_d8 != *(longlong *)((longlong)pvVar32 + 0x18))) ||
     (*(uint **)((longlong)pvVar32 + 0x28) == local_d8)) {
    FUN_143713ff0(pvVar32,local_d8);
  }
  else {
    *(uint **)((longlong)pvVar32 + 0x18) = local_d8;
  }
  uVar31 = FUN_143703a50();
  if (-1 < (int)(uVar28 | 0x80000000)) {
    FUN_143702e10(uVar31,local_d8,4,uVar28 & 0x3fffffff);
  }
  return param_1;
}



// FUNCTION 1438b7b20 FUN_1438b7b20 body=143 status=ok
// SIG undefined FUN_1438b7b20(void)

longlong FUN_1438b7b20(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0x7f7fffee;
  *(undefined4 *)(param_1 + 0x48) = 0x7f7fffee;
  *(undefined2 *)(param_1 + 0x3c) = 0xffff;
  *(undefined4 *)(param_1 + 0x30) = 0x7f7fffee;
  *(undefined4 *)(param_1 + 0x34) = 0x7f7fffee;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x3e) = 0;
  iVar1 = *(int *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x70) = *param_2;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(int *)(param_1 + 0x7c) = (int)((ulonglong)(longlong)iVar1 >> 3);
  FUN_14389d420(param_1 + 0x10,param_2[1],*(undefined4 *)((longlong)param_2 + 0x14));
  return param_1;
}



// FUNCTION 1438b7bb0 FUN_1438b7bb0 body=50 status=ok
// SIG undefined FUN_1438b7bb0(void)

void FUN_1438b7bb0(longlong param_1,longlong param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_2 + (longlong)param_3 * 8);
  iVar2 = 0;
  if (0 < param_4 << 1) {
    param_1 = param_1 - (longlong)puVar1;
    do {
      iVar2 = iVar2 + 1;
      *(undefined4 *)(param_1 + (longlong)puVar1) = *puVar1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < param_4 << 1);
  }
  return;
}



// FUNCTION 1438b7bf0 FUN_1438b7bf0 body=347 status=ok
// SIG undefined FUN_1438b7bf0(void)

void FUN_1438b7bf0(longlong *param_1,longlong *param_2,uint *param_3,uint param_4,uint param_5)

{
  float *pfVar1;
  longlong lVar2;
  longlong *plVar3;
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
  float fVar18;
  uint uVar19;
  ulonglong uVar20;
  uint *puVar21;
  
  uVar20 = (ulonglong)param_4;
  if (*(int *)((longlong)param_1 + 0x2c) < (int)param_1[5]) {
    *param_1 = (longlong)param_2;
    uVar19 = param_5 >> 0x16;
    if (*param_2 == 0) {
      param_2[2] = param_2[1];
    }
    else if (*(uint *)((longlong)param_2 + 0x6c) != uVar19) {
      param_2[2] = *(longlong *)((ulonglong)uVar19 * 0x100 + 0x10 + *(longlong *)(*param_2 + 0x38));
      *(uint *)((longlong)param_2 + 0x6c) = uVar19;
    }
    *(uint *)((longlong)param_2 + 0x6c) = uVar19;
    param_1[0x10] = *param_1;
    *(uint *)(param_1 + 0x11) = param_5;
    lVar2 = *(longlong *)(*param_1 + 0x10);
    pfVar1 = (float *)(*(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x38) +
                      (ulonglong)(param_5 & 0x3fffff) * 0x10);
    fVar4 = *pfVar1;
    fVar5 = pfVar1[1];
    fVar6 = pfVar1[2];
    fVar7 = *(float *)(lVar2 + 0x44);
    fVar8 = *(float *)(lVar2 + 0x48);
    fVar9 = *(float *)(lVar2 + 0x4c);
    fVar10 = *(float *)(lVar2 + 0x34);
    fVar11 = *(float *)(lVar2 + 0x38);
    fVar12 = *(float *)(lVar2 + 0x3c);
    fVar13 = *(float *)(lVar2 + 0x54);
    fVar14 = *(float *)(lVar2 + 0x58);
    fVar15 = *(float *)(lVar2 + 0x5c);
    fVar16 = *(float *)(lVar2 + 100);
    fVar17 = *(float *)(lVar2 + 0x68);
    fVar18 = *(float *)(lVar2 + 0x6c);
    *(float *)(param_1 + 0x12) =
         fVar5 * *(float *)(lVar2 + 0x40) + fVar4 * *(float *)(lVar2 + 0x30) +
         fVar6 * *(float *)(lVar2 + 0x50) + *(float *)(lVar2 + 0x60);
    *(float *)((longlong)param_1 + 0x94) = fVar5 * fVar7 + fVar4 * fVar10 + fVar6 * fVar13 + fVar16;
    *(float *)(param_1 + 0x13) = fVar5 * fVar8 + fVar4 * fVar11 + fVar6 * fVar14 + fVar17;
    *(float *)((longlong)param_1 + 0x9c) = fVar5 * fVar9 + fVar4 * fVar12 + fVar6 * fVar15 + fVar18;
    *(longlong **)(*param_1 + 0x58) = param_1 + 2;
    FUN_1438b7e10(param_1,param_5);
    puVar21 = param_3;
    if (0 < (int)param_4) {
      do {
        if (*param_3 != 0xffffffff) {
          plVar3 = (longlong *)*param_1;
          uVar19 = *param_3 >> 0x16;
          if (*plVar3 == 0) {
            plVar3[2] = plVar3[1];
          }
          else if (*(uint *)((longlong)plVar3 + 0x6c) != uVar19) {
            plVar3[2] = *(longlong *)
                         ((ulonglong)uVar19 * 0x100 + 0x10 + *(longlong *)(*plVar3 + 0x38));
            *(uint *)((longlong)plVar3 + 0x6c) = uVar19;
          }
          *(uint *)((longlong)plVar3 + 0x6c) = uVar19;
          FUN_1438b7ea0(param_1,*puVar21);
        }
        param_3 = param_3 + 1;
        uVar20 = uVar20 - 1;
        puVar21 = puVar21 + 1;
      } while (uVar20 != 0);
    }
  }
  return;
}



// FUNCTION 1438b7d50 FUN_1438b7d50 body=191 status=ok
// SIG undefined FUN_1438b7d50(void)

undefined8 FUN_1438b7d50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int local_res8 [2];
  
  if (*(int *)(param_1 + 0xf) == 0) {
    return 2;
  }
  uVar2 = *param_1;
  puVar1 = param_1 + 2;
  FUN_1438b7300(local_res8,uVar2,uVar2,param_1 + 0xe,puVar1,puVar1,param_1 + 0x10,puVar1,uVar2);
  if (*(int *)(param_1 + 0x11) == local_res8[0]) {
    return 1;
  }
  if ((*(int *)(param_1 + 0xf) < *(int *)((longlong)param_1 + 0x7c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < *(int *)(param_1 + 5))) {
    uVar2 = 2;
    if (*(int *)(param_1 + 0xf) != 0) {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 3;
}



// FUNCTION 1438b7e10 FUN_1438b7e10 body=134 status=ok
// SIG undefined FUN_1438b7e10(void)

void FUN_1438b7e10(longlong param_1,uint param_2)

{
  float *pfVar1;
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
  longlong lVar17;
  
  lVar17 = FUN_143843a50(param_1 + 0x10);
  *(undefined4 *)(lVar17 + 4) = 0;
  *(ushort *)(lVar17 + 0xe) = *(ushort *)(lVar17 + 0xe) | 8;
  *(uint *)(param_1 + 0x88) = param_2;
  lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10);
  pfVar1 = (float *)(*(longlong *)(*(longlong *)(lVar17 + 0x18) + 0x38) +
                    (ulonglong)(param_2 & 0x3fffff) * 0x10);
  fVar2 = *pfVar1;
  fVar3 = pfVar1[1];
  fVar4 = pfVar1[2];
  fVar5 = *(float *)(lVar17 + 0x44);
  fVar6 = *(float *)(lVar17 + 0x48);
  fVar7 = *(float *)(lVar17 + 0x4c);
  fVar8 = *(float *)(lVar17 + 0x34);
  fVar9 = *(float *)(lVar17 + 0x38);
  fVar10 = *(float *)(lVar17 + 0x3c);
  fVar11 = *(float *)(lVar17 + 0x54);
  fVar12 = *(float *)(lVar17 + 0x58);
  fVar13 = *(float *)(lVar17 + 0x5c);
  fVar14 = *(float *)(lVar17 + 100);
  fVar15 = *(float *)(lVar17 + 0x68);
  fVar16 = *(float *)(lVar17 + 0x6c);
  *(float *)(param_1 + 0x90) =
       fVar3 * *(float *)(lVar17 + 0x40) + fVar2 * *(float *)(lVar17 + 0x30) +
       fVar4 * *(float *)(lVar17 + 0x50) + *(float *)(lVar17 + 0x60);
  *(float *)(param_1 + 0x94) = fVar3 * fVar5 + fVar2 * fVar8 + fVar4 * fVar11 + fVar14;
  *(float *)(param_1 + 0x98) = fVar3 * fVar6 + fVar2 * fVar9 + fVar4 * fVar12 + fVar15;
  *(float *)(param_1 + 0x9c) = fVar3 * fVar7 + fVar2 * fVar10 + fVar4 * fVar13 + fVar16;
  return;
}



// FUNCTION 1438b7ea0 FUN_1438b7ea0 body=427 status=ok
// SIG undefined FUN_1438b7ea0(void)

void FUN_1438b7ea0(longlong param_1,uint param_2)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar13;
  float fVar14;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar15;
  
  if ((*(int *)(param_1 + 0x2c) < *(int *)(param_1 + 0x28)) &&
     (*(int *)(param_1 + 0x78) < *(int *)(param_1 + 0x7c))) {
    puVar5 = (undefined4 *)FUN_143843a50(param_1 + 0x10);
    *puVar5 = 0;
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10);
    pfVar6 = (float *)(*(longlong *)(*(longlong *)(lVar4 + 0x18) + 0x38) +
                      (ulonglong)(param_2 & 0x3fffff) * 0x10);
    fVar14 = *pfVar6;
    fVar15 = pfVar6[1];
    fVar1 = pfVar6[2];
    fVar10 = (fVar15 * *(float *)(lVar4 + 0x40) + fVar14 * *(float *)(lVar4 + 0x30) +
              fVar1 * *(float *)(lVar4 + 0x50) + *(float *)(lVar4 + 0x60)) -
             *(float *)(param_1 + 0x90);
    fVar13 = (fVar15 * *(float *)(lVar4 + 0x44) + fVar14 * *(float *)(lVar4 + 0x34) +
              fVar1 * *(float *)(lVar4 + 0x54) + *(float *)(lVar4 + 100)) -
             *(float *)(param_1 + 0x94);
    fVar14 = (fVar15 * *(float *)(lVar4 + 0x48) + fVar14 * *(float *)(lVar4 + 0x38) +
              fVar1 * *(float *)(lVar4 + 0x58) + *(float *)(lVar4 + 0x68)) -
             *(float *)(param_1 + 0x98);
    fVar10 = fVar10 * fVar10;
    fVar13 = fVar13 * fVar13;
    auVar11._8_4_ = fVar14 * fVar14;
    auVar11._4_4_ = auVar11._8_4_;
    auVar11._0_4_ = auVar11._8_4_;
    auVar11._12_4_ = auVar11._8_4_;
    fVar15 = fVar13 + fVar10 + auVar11._8_4_;
    auVar12._4_4_ = fVar13 + fVar10 + auVar11._8_4_;
    auVar12._0_4_ = fVar15;
    auVar12._8_4_ = fVar13 + fVar10 + auVar11._8_4_;
    auVar12._12_4_ = fVar13 + fVar10 + auVar11._8_4_;
    auVar12 = rsqrtps(auVar11,auVar12);
    fVar14 = auVar12._0_4_;
    fVar14 = (float)(~-(uint)(fVar15 <= 0.0) &
                    (uint)((3.0 - fVar15 * fVar14 * fVar14) * fVar14 * 0.5 * fVar15));
    puVar5[1] = fVar14;
    *(ushort *)((longlong)puVar5 + 0xe) = *(ushort *)((longlong)puVar5 + 0xe) | 5;
    if (fVar14 < *(float *)(param_1 + 0x44)) {
      *(float *)(param_1 + 0x44) = fVar14;
      *(uint *)(param_1 + 0x40) = param_2;
    }
    pfVar6 = (float *)FUN_143843b40(param_1 + 0x10,param_2);
    uVar8 = *(uint *)(param_1 + 0x78);
    uVar9 = (ulonglong)(int)uVar8;
    lVar4 = *(longlong *)(param_1 + 0x70);
    fVar14 = pfVar6[1];
    fVar15 = *(float *)(param_1 + 0x4c);
    fVar1 = *pfVar6;
    *(uint *)(param_1 + 0x78) = uVar8 + 1;
    *(uint *)(lVar4 + uVar9 * 8) = param_2;
    *(float *)(lVar4 + 4 + uVar9 * 8) = fVar14 * fVar15 + fVar1;
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + uVar9 * 8);
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x70) + 4 + uVar9 * 8);
    while (0 < (int)uVar8) {
      uVar7 = (int)(uVar8 - 1) / 2;
      uVar8 = (uint)uVar9;
      lVar4 = *(longlong *)(param_1 + 0x70);
      if (*(int *)(lVar4 + 4 + (longlong)(int)uVar7 * 8) <= iVar3) break;
      uVar9 = (ulonglong)uVar7;
      *(undefined8 *)(lVar4 + (longlong)(int)uVar8 * 8) =
           *(undefined8 *)(lVar4 + (longlong)(int)uVar7 * 8);
      uVar8 = uVar7;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x70) + (longlong)(int)uVar8 * 8) = uVar2;
    *(int *)(*(longlong *)(param_1 + 0x70) + 4 + (longlong)(int)uVar8 * 8) = iVar3;
  }
  return;
}



// FUNCTION 1438b8050 FUN_1438b8050 body=365 status=ok
// SIG undefined FUN_1438b8050(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1438b8050(undefined8 param_1,float *param_2,float *param_3,undefined8 param_4,
                     float *param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 in_XMM2 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar14;
  float fVar15;
  undefined1 unaff_XMM7 [16];
  undefined1 auVar13 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar22;
  float fVar23;
  undefined1 unaff_XMM10 [16];
  undefined1 auVar21 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  fVar1 = *param_3 - *param_5;
  fVar2 = param_3[1] - param_5[1];
  fVar3 = param_3[2] - param_5[2];
  fVar9 = *param_3 - *param_6;
  fVar10 = param_3[1] - param_6[1];
  fVar11 = param_3[2] - param_6[2];
  fVar1 = fVar1 * fVar1;
  fVar2 = fVar2 * fVar2;
  fVar3 = fVar3 * fVar3;
  fVar9 = fVar9 * fVar9;
  fVar10 = fVar10 * fVar10;
  fVar11 = fVar11 * fVar11;
  fVar25 = fVar2 + fVar1 + fVar3;
  fVar26 = fVar2 + fVar1 + fVar3;
  fVar27 = fVar2 + fVar1 + fVar3;
  fVar3 = fVar2 + fVar1 + fVar3;
  fVar1 = *param_6 - *param_5;
  fVar2 = param_6[1] - param_5[1];
  fVar4 = param_6[2] - param_5[2];
  auVar21._4_4_ = fVar26;
  auVar21._0_4_ = fVar25;
  auVar21._8_4_ = fVar27;
  auVar21._12_4_ = fVar3;
  auVar21 = rsqrtps(unaff_XMM10,auVar21);
  fVar1 = fVar1 * fVar1;
  fVar2 = fVar2 * fVar2;
  fVar4 = fVar4 * fVar4;
  fVar17 = fVar2 + fVar1 + fVar4;
  fVar18 = fVar2 + fVar1 + fVar4;
  fVar19 = fVar2 + fVar1 + fVar4;
  fVar4 = fVar2 + fVar1 + fVar4;
  fVar6 = fVar10 + fVar9 + fVar11;
  fVar7 = fVar10 + fVar9 + fVar11;
  fVar8 = fVar10 + fVar9 + fVar11;
  fVar11 = fVar10 + fVar9 + fVar11;
  auVar13._4_4_ = fVar18;
  auVar13._0_4_ = fVar17;
  auVar13._8_4_ = fVar19;
  auVar13._12_4_ = fVar4;
  auVar13 = rsqrtps(unaff_XMM7,auVar13);
  auVar5._4_4_ = fVar7;
  auVar5._0_4_ = fVar6;
  auVar5._8_4_ = fVar8;
  auVar5._12_4_ = fVar11;
  auVar5 = rsqrtps(in_XMM2,auVar5);
  fVar1 = auVar5._0_4_;
  fVar2 = auVar5._4_4_;
  fVar9 = auVar5._8_4_;
  fVar10 = auVar5._12_4_;
  fVar12 = auVar13._0_4_;
  fVar14 = auVar13._4_4_;
  fVar15 = auVar13._8_4_;
  fVar16 = auVar13._12_4_;
  fVar20 = auVar21._0_4_;
  fVar22 = auVar21._4_4_;
  fVar23 = auVar21._8_4_;
  fVar24 = auVar21._12_4_;
  fVar2 = ((float)(~-(uint)(fVar7 <= 0.0) &
                  (uint)((3.0 - fVar7 * fVar2 * fVar2) * fVar2 * 0.5 * fVar7)) +
           (float)(~-(uint)(fVar18 <= 0.0) &
                  (uint)((3.0 - fVar18 * fVar14 * fVar14) * fVar14 * 0.5 * fVar18)) +
          (float)(~-(uint)(fVar26 <= 0.0) &
                 (uint)((3.0 - fVar26 * fVar22 * fVar22) * fVar22 * 0.5 * fVar26))) *
          fRam00000001467f07e4;
  fVar9 = ((float)(~-(uint)(fVar8 <= 0.0) &
                  (uint)((3.0 - fVar8 * fVar9 * fVar9) * fVar9 * 0.5 * fVar8)) +
           (float)(~-(uint)(fVar19 <= 0.0) &
                  (uint)((3.0 - fVar19 * fVar15 * fVar15) * fVar15 * 0.5 * fVar19)) +
          (float)(~-(uint)(fVar27 <= 0.0) &
                 (uint)((3.0 - fVar27 * fVar23 * fVar23) * fVar23 * 0.5 * fVar27))) *
          fRam00000001467f07e8;
  fVar3 = ((float)(~-(uint)(fVar11 <= 0.0) &
                  (uint)((3.0 - fVar11 * fVar10 * fVar10) * fVar10 * 0.5 * fVar11)) +
           (float)(~-(uint)(fVar4 <= 0.0) &
                  (uint)((3.0 - fVar4 * fVar16 * fVar16) * fVar16 * 0.5 * fVar4)) +
          (float)(~-(uint)(fVar3 <= 0.0) &
                 (uint)((3.0 - fVar3 * fVar24 * fVar24) * fVar24 * 0.5 * fVar3))) *
          fRam00000001467f07ec;
  *param_2 = ((float)(~-(uint)(fVar6 <= 0.0) &
                     (uint)((3.0 - fVar6 * fVar1 * fVar1) * fVar1 * 0.5 * fVar6)) +
              (float)(~-(uint)(fVar17 <= 0.0) &
                     (uint)((3.0 - fVar17 * fVar12 * fVar12) * fVar12 * 0.5 * fVar17)) +
             (float)(~-(uint)(fVar25 <= 0.0) &
                    (uint)((3.0 - fVar25 * fVar20 * fVar20) * fVar20 * 0.5 * fVar25))) *
             _DAT_1467f07e0;
  param_2[1] = fVar2;
  param_2[2] = fVar9;
  param_2[3] = fVar3;
  return param_2;
}



// FUNCTION 1438b81c0 FUN_1438b81c0 body=136 status=ok
// SIG undefined FUN_1438b81c0(void)

void FUN_1438b81c0(longlong param_1,uint param_2,float *param_3)

{
  float *pfVar1;
  longlong *plVar2;
  longlong lVar3;
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
  float fVar18;
  uint uVar19;
  
  plVar2 = *(longlong **)(param_1 + 8);
  uVar19 = param_2 >> 0x16;
  if (*(uint *)(plVar2 + 0xe) != uVar19) {
    plVar2[3] = *(longlong *)((ulonglong)uVar19 * 0x100 + 0x10 + *(longlong *)(*plVar2 + 0x38));
    *(uint *)(plVar2 + 0xe) = uVar19;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  pfVar1 = (float *)(*(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x38) +
                    (longlong)(int)(param_2 & 0x3fffff) * 0x10);
  fVar4 = *pfVar1;
  fVar5 = pfVar1[1];
  fVar6 = pfVar1[2];
  fVar7 = *(float *)(lVar3 + 0x44);
  fVar8 = *(float *)(lVar3 + 0x48);
  fVar9 = *(float *)(lVar3 + 0x4c);
  fVar10 = *(float *)(lVar3 + 0x34);
  fVar11 = *(float *)(lVar3 + 0x38);
  fVar12 = *(float *)(lVar3 + 0x3c);
  fVar13 = *(float *)(lVar3 + 0x54);
  fVar14 = *(float *)(lVar3 + 0x58);
  fVar15 = *(float *)(lVar3 + 0x5c);
  fVar16 = *(float *)(lVar3 + 100);
  fVar17 = *(float *)(lVar3 + 0x68);
  fVar18 = *(float *)(lVar3 + 0x6c);
  *param_3 = fVar5 * *(float *)(lVar3 + 0x40) + fVar4 * *(float *)(lVar3 + 0x30) +
             fVar6 * *(float *)(lVar3 + 0x50) + *(float *)(lVar3 + 0x60);
  param_3[1] = fVar5 * fVar7 + fVar4 * fVar10 + fVar6 * fVar13 + fVar16;
  param_3[2] = fVar5 * fVar8 + fVar4 * fVar11 + fVar6 * fVar14 + fVar17;
  param_3[3] = fVar5 * fVar9 + fVar4 * fVar12 + fVar6 * fVar15 + fVar18;
  return;
}



// FUNCTION 1438b8250 getCost body=60 status=ok
// SIG undefined getCost(void)

undefined4 hkaiClusterGraphEuclideanSearch::getCost(longlong param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_143843a50(param_1 + 0x10);
  *(int *)(param_1 + 0x50) =
       (int)(short)((longlong)(ulonglong)(uint)((int)puVar1 - *(int *)(param_1 + 0x10)) >> 4);
  *(undefined4 **)(param_1 + 0x58) = puVar1;
  *(undefined4 **)(param_1 + 0x60) = puVar1;
  return *puVar1;
}



// FUNCTION 1438b8290 FUN_1438b8290 body=2253 status=ok
// SIG undefined FUN_1438b8290(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1438b8290(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float *pfVar9;
  float *pfVar10;
  char cVar11;
  int *piVar12;
  LPVOID pvVar13;
  float *pfVar14;
  uint *puVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  undefined4 uVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  bool bVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 in_XMM2 [16];
  undefined1 auVar36 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined8 uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  float local_res8 [2];
  undefined4 local_res18 [4];
  undefined8 in_stack_ffffffffffffff20;
  undefined4 uVar45;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  
  uVar45 = (undefined4)((ulonglong)in_stack_ffffffffffffff20 >> 0x20);
  if ((param_2 & 0xffc00000) == 0xff800000) {
    fVar28 = *(float *)(param_1 + 0x2c);
    fVar32 = *(float *)((longlong)param_1 + 0x164);
    fVar35 = *(float *)(param_1 + 0x2d);
    fStack_bc = *(float *)((longlong)param_1 + 0x16c);
    uVar21 = *(uint *)(param_1 + 0x2e);
  }
  else {
    plVar4 = (longlong *)*param_1;
    if ((*(byte *)(plVar4 + 0x12) & 0x10) == 0) {
      fVar28 = *(float *)(plVar4 + 0x18);
      fVar32 = *(float *)((longlong)plVar4 + 0xc4);
      fVar35 = *(float *)(plVar4 + 0x19);
      fStack_bc = *(float *)((longlong)plVar4 + 0xcc);
    }
    else {
      uVar19 = CONCAT44(uVar45,*(uint *)(plVar4 + 0x11)) & 0xffffffff003fffff;
      lVar24 = *(longlong *)
                ((ulonglong)(*(uint *)(plVar4 + 0x11) >> 0x16) * 0x100 +
                *(longlong *)(*plVar4 + 0x38));
      lVar25 = *(longlong *)(lVar24 + 0x18);
      piVar12 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar25 + 0x28),*(undefined4 *)(lVar25 + 0x30),
                                     lVar25 + 0xc0,lVar25 + 0xe0,lVar25 + 0x70,uVar19);
      uVar45 = (undefined4)(uVar19 >> 0x20);
      iVar27 = *(int *)(lVar25 + 0x40);
      iVar3 = *piVar12;
      if (iVar3 < iVar27) {
        pfVar14 = (float *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar25 + 0x38));
      }
      else {
        pfVar14 = (float *)((longlong)(iVar3 - iVar27) * 0x10 + *(longlong *)(lVar25 + 0xf0));
      }
      iVar3 = piVar12[1];
      fVar28 = *pfVar14;
      fVar32 = pfVar14[1];
      fVar35 = pfVar14[2];
      if (iVar3 < iVar27) {
        pfVar14 = (float *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar25 + 0x38));
      }
      else {
        pfVar14 = (float *)((longlong)(iVar3 - iVar27) * 0x10 + *(longlong *)(lVar25 + 0xf0));
      }
      fVar29 = *pfVar14;
      fVar30 = pfVar14[1];
      fVar33 = pfVar14[2];
      in_XMM2._0_4_ =
           fVar32 * *(float *)(lVar24 + 0x50) + fVar28 * *(float *)(lVar24 + 0x40) +
           fVar35 * *(float *)(lVar24 + 0x60) + *(float *)(lVar24 + 0x70);
      in_XMM2._4_4_ =
           fVar32 * *(float *)(lVar24 + 0x54) + fVar28 * *(float *)(lVar24 + 0x44) +
           fVar35 * *(float *)(lVar24 + 100) + *(float *)(lVar24 + 0x74);
      in_XMM2._8_4_ =
           fVar32 * *(float *)(lVar24 + 0x58) + fVar28 * *(float *)(lVar24 + 0x48) +
           fVar35 * *(float *)(lVar24 + 0x68) + *(float *)(lVar24 + 0x78);
      in_XMM2._12_4_ =
           fVar32 * *(float *)(lVar24 + 0x5c) + fVar28 * *(float *)(lVar24 + 0x4c) +
           fVar35 * *(float *)(lVar24 + 0x6c) + *(float *)(lVar24 + 0x7c);
      fVar28 = ((fVar30 * *(float *)(lVar24 + 0x50) + fVar29 * *(float *)(lVar24 + 0x40) +
                 fVar33 * *(float *)(lVar24 + 0x60) + *(float *)(lVar24 + 0x70)) - in_XMM2._0_4_) *
               _DAT_1467f07e0 + in_XMM2._0_4_;
      fVar32 = ((fVar30 * *(float *)(lVar24 + 0x54) + fVar29 * *(float *)(lVar24 + 0x44) +
                 fVar33 * *(float *)(lVar24 + 100) + *(float *)(lVar24 + 0x74)) - in_XMM2._4_4_) *
               fRam00000001467f07e4 + in_XMM2._4_4_;
      fVar35 = ((fVar30 * *(float *)(lVar24 + 0x58) + fVar29 * *(float *)(lVar24 + 0x48) +
                 fVar33 * *(float *)(lVar24 + 0x68) + *(float *)(lVar24 + 0x78)) - in_XMM2._8_4_) *
               fRam00000001467f07e8 + in_XMM2._8_4_;
      fStack_bc = ((fVar30 * *(float *)(lVar24 + 0x5c) + fVar29 * *(float *)(lVar24 + 0x4c) +
                    fVar33 * *(float *)(lVar24 + 0x6c) + *(float *)(lVar24 + 0x7c)) - in_XMM2._12_4_
                  ) * fRam00000001467f07ec + in_XMM2._12_4_;
    }
    uVar21 = *(uint *)((longlong)plVar4 + 0x8c);
  }
  if (((param_1[1] == 0) || ((int)param_1[3] == -1)) ||
     (*(char *)((longlong)param_1 + 0x14) == '\0')) {
    lVar24 = (longlong)(int)param_1[2];
    uVar40 = (undefined8)DAT_1467f08d0;
    if (0 < lVar24) {
      pfVar14 = (float *)param_1[0x46];
      auVar41 = _DAT_1467f08d0;
      do {
        fVar29 = *pfVar14;
        pfVar9 = pfVar14 + 1;
        pfVar10 = pfVar14 + 2;
        pfVar14 = pfVar14 + 4;
        fVar29 = (fVar28 - fVar29) * (fVar28 - fVar29);
        fVar30 = (fVar32 - *pfVar9) * (fVar32 - *pfVar9);
        fVar33 = (fVar35 - *pfVar10) * (fVar35 - *pfVar10);
        auVar39._0_4_ = fVar30 + fVar29 + fVar33;
        auVar39._4_4_ = fVar30 + fVar29 + fVar33;
        auVar39._8_4_ = fVar30 + fVar29 + fVar33;
        auVar39._12_4_ = fVar30 + fVar29 + fVar33;
        auVar36 = rsqrtps(in_XMM2,auVar39);
        fVar29 = auVar36._0_4_;
        fVar30 = auVar36._4_4_;
        fVar33 = auVar36._8_4_;
        fVar31 = auVar36._12_4_;
        in_XMM2._0_4_ = fVar29 * 0.5;
        in_XMM2._4_4_ = fVar30 * 0.5;
        in_XMM2._8_4_ = fVar33 * 0.5;
        in_XMM2._12_4_ = fVar31 * 0.5;
        auVar36._4_4_ =
             ~-(uint)(auVar39._4_4_ <= 0.0) &
             (uint)((3.0 - auVar39._4_4_ * fVar30 * fVar30) * in_XMM2._4_4_ * auVar39._4_4_);
        auVar36._0_4_ =
             ~-(uint)(auVar39._0_4_ <= 0.0) &
             (uint)((3.0 - auVar39._0_4_ * fVar29 * fVar29) * in_XMM2._0_4_ * auVar39._0_4_);
        auVar36._8_4_ =
             ~-(uint)(auVar39._8_4_ <= 0.0) &
             (uint)((3.0 - auVar39._8_4_ * fVar33 * fVar33) * in_XMM2._8_4_ * auVar39._8_4_);
        auVar36._12_4_ =
             ~-(uint)(auVar39._12_4_ <= 0.0) &
             (uint)((3.0 - auVar39._12_4_ * fVar31 * fVar31) * in_XMM2._12_4_ * auVar39._12_4_);
        auVar41 = minps(auVar41,auVar36);
        uVar40 = auVar41._0_8_;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
    }
    local_98 = (float)uVar40;
    fVar28 = (float)((ulonglong)uVar40 >> 0x20);
    goto LAB_1438b8746;
  }
  uVar17 = (uint)*(short *)(*param_1 + 0x24);
  if (uVar17 == 0xffffffff) {
    uVar17 = 0xffffffff;
  }
  else {
    uVar17 = *(int *)(*param_1 + 0x278) << 0x16 | uVar17;
  }
  local_c8 = fVar28;
  fStack_c4 = fVar32;
  fStack_c0 = fVar35;
  if (uVar21 == 0xffffffff) {
    uVar21 = 0xffffffff;
  }
  else {
    lVar24 = *(longlong *)
              (*(longlong *)
                ((ulonglong)(uVar21 >> 0x16) * 0x100 + *(longlong *)(param_1[0x44] + 0x38)) + 0x18);
    lVar24 = FUN_1437fb610(*(undefined8 *)(lVar24 + 0x18),*(undefined4 *)(lVar24 + 0x20),
                           lVar24 + 0xb0,lVar24 + 0xd0,lVar24 + 0x90,
                           CONCAT44(uVar45,uVar21) & 0xffffffff003fffff);
    if ((int)*(short *)(lVar24 + 0xc) == 0xffffffff) {
      uVar21 = 0xffffffff;
    }
    else {
      uVar21 = (uVar21 >> 0x16) << 0x16 | (int)*(short *)(lVar24 + 0xc);
    }
  }
  lVar24 = (longlong)(int)param_1[2];
  bVar26 = false;
  uVar40 = (undefined8)DAT_1467f08d0;
  uVar19 = 0;
  iVar27 = 0;
  if (0 < lVar24) {
    puVar15 = (uint *)((longlong)param_1 + 0x1c);
    uVar18 = uVar19;
    lVar25 = lVar24;
    auVar41 = _DAT_1467f08d0;
    do {
      if ((*puVar15 == uVar21) || (*puVar15 == uVar17)) {
        bVar26 = true;
        pfVar14 = (float *)(param_1[0x46] + uVar18);
        fVar29 = (fVar28 - *pfVar14) * (fVar28 - *pfVar14);
        fVar30 = (fVar32 - pfVar14[1]) * (fVar32 - pfVar14[1]);
        fVar33 = (fVar35 - pfVar14[2]) * (fVar35 - pfVar14[2]);
        in_XMM4._0_4_ = fVar30 + fVar29 + fVar33;
        in_XMM4._4_4_ = fVar30 + fVar29 + fVar33;
        in_XMM4._8_4_ = fVar30 + fVar29 + fVar33;
        in_XMM4._12_4_ = fVar30 + fVar29 + fVar33;
        auVar36 = rsqrtps(in_XMM2,in_XMM4);
        fVar29 = auVar36._0_4_;
        fVar30 = auVar36._4_4_;
        fVar33 = auVar36._8_4_;
        fVar31 = auVar36._12_4_;
        in_XMM2._0_4_ = fVar29 * 0.5;
        in_XMM2._4_4_ = fVar30 * 0.5;
        in_XMM2._8_4_ = fVar33 * 0.5;
        in_XMM2._12_4_ = fVar31 * 0.5;
        auVar5._4_4_ = ~-(uint)(in_XMM4._4_4_ <= 0.0) &
                       (uint)((3.0 - fVar30 * in_XMM4._4_4_ * fVar30) * in_XMM2._4_4_ *
                             in_XMM4._4_4_);
        auVar5._0_4_ = ~-(uint)(in_XMM4._0_4_ <= 0.0) &
                       (uint)((3.0 - fVar29 * in_XMM4._0_4_ * fVar29) * in_XMM2._0_4_ *
                             in_XMM4._0_4_);
        auVar5._8_4_ = ~-(uint)(in_XMM4._8_4_ <= 0.0) &
                       (uint)((3.0 - fVar33 * in_XMM4._8_4_ * fVar33) * in_XMM2._8_4_ *
                             in_XMM4._8_4_);
        auVar5._12_4_ =
             ~-(uint)(in_XMM4._12_4_ <= 0.0) &
             (uint)((3.0 - fVar31 * in_XMM4._12_4_ * fVar31) * in_XMM2._12_4_ * in_XMM4._12_4_);
        auVar41 = minps(auVar41,auVar5);
      }
      puVar15 = puVar15 + 1;
      uVar18 = uVar18 + 0x10;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    if (bVar26) {
      local_98 = auVar41._0_4_;
      fVar28 = auVar41._4_4_;
      goto LAB_1438b8746;
    }
  }
  if ((uVar21 == 0xffffffff) || (uVar17 == 0xffffffff)) {
    if (0 < lVar24) {
      pfVar14 = (float *)param_1[0x46];
      auVar41 = _DAT_1467f08d0;
      do {
        fVar29 = *pfVar14;
        pfVar9 = pfVar14 + 1;
        pfVar10 = pfVar14 + 2;
        pfVar14 = pfVar14 + 4;
        fVar29 = (fVar28 - fVar29) * (fVar28 - fVar29);
        fVar30 = (fVar32 - *pfVar9) * (fVar32 - *pfVar9);
        fVar33 = (fVar35 - *pfVar10) * (fVar35 - *pfVar10);
        auVar38._0_4_ = fVar30 + fVar29 + fVar33;
        auVar38._4_4_ = fVar30 + fVar29 + fVar33;
        auVar38._8_4_ = fVar30 + fVar29 + fVar33;
        auVar38._12_4_ = fVar30 + fVar29 + fVar33;
        auVar36 = rsqrtps(in_XMM2,auVar38);
        fVar29 = auVar36._0_4_;
        fVar30 = auVar36._4_4_;
        fVar33 = auVar36._8_4_;
        fVar31 = auVar36._12_4_;
        in_XMM2._0_4_ = fVar29 * 0.5;
        in_XMM2._4_4_ = fVar30 * 0.5;
        in_XMM2._8_4_ = fVar33 * 0.5;
        in_XMM2._12_4_ = fVar31 * 0.5;
        auVar7._4_4_ = ~-(uint)(auVar38._4_4_ <= 0.0) &
                       (uint)((3.0 - fVar30 * auVar38._4_4_ * fVar30) * in_XMM2._4_4_ *
                             auVar38._4_4_);
        auVar7._0_4_ = ~-(uint)(auVar38._0_4_ <= 0.0) &
                       (uint)((3.0 - fVar29 * auVar38._0_4_ * fVar29) * in_XMM2._0_4_ *
                             auVar38._0_4_);
        auVar7._8_4_ = ~-(uint)(auVar38._8_4_ <= 0.0) &
                       (uint)((3.0 - fVar33 * auVar38._8_4_ * fVar33) * in_XMM2._8_4_ *
                             auVar38._8_4_);
        auVar7._12_4_ =
             ~-(uint)(auVar38._12_4_ <= 0.0) &
             (uint)((3.0 - fVar31 * auVar38._12_4_ * fVar31) * in_XMM2._12_4_ * auVar38._12_4_);
        auVar41 = minps(auVar41,auVar7);
        uVar40 = auVar41._0_8_;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
    }
    local_98 = (float)uVar40;
    fVar28 = (float)((ulonglong)uVar40 >> 0x20);
    goto LAB_1438b8746;
  }
  local_res8[0] = -NAN;
  auVar41 = _DAT_1467f08d0;
  cVar11 = FUN_1438b8d80(param_1,uVar21,local_res8,local_res18);
  uVar20 = uVar21;
  if (((cVar11 != '\0') ||
      ((uVar21 != uVar17 &&
       (cVar11 = FUN_1438b8d80(param_1,uVar17,local_res8,local_res18), uVar20 = uVar17,
       cVar11 != '\0')))) && (uVar20 != 0xffffffff)) {
    FUN_1438b81c0(param_1,uVar20,&local_98);
    puVar1 = (undefined8 *)(param_1[0x46] + (longlong)(int)local_res8[0] * 0x10);
    local_a8 = *puVar1;
    uStack_a0 = puVar1[1];
    plVar4 = param_1 + ((longlong)(int)local_res8[0] + 6) * 2;
    local_b8 = (undefined4)*plVar4;
    uStack_b4 = *(undefined4 *)((longlong)plVar4 + 4);
    uStack_b0 = (undefined4)plVar4[1];
    uStack_ac = *(undefined4 *)((longlong)plVar4 + 0xc);
    FUN_1438b8050(param_1,&local_98,&local_c8,&local_98,&local_a8,&local_b8,local_res18[0]);
    fVar28 = 0.0;
    goto LAB_1438b8746;
  }
  plVar4 = param_1 + 0x32;
  uVar18 = uVar19;
  if (*(int *)((longlong)param_1 + 0x1ac) < (int)param_1[0x35]) {
    uVar18 = FUN_143843a50(plVar4,uVar21);
  }
  if (uVar18 == 0) {
LAB_1438b89ca:
    lVar24 = (longlong)(int)param_1[2];
    uVar40 = (undefined8)DAT_1467f08d0;
    if (0 < lVar24) {
      pfVar14 = (float *)param_1[0x46];
      auVar41 = _DAT_1467f08d0;
      do {
        fVar29 = *pfVar14;
        pfVar9 = pfVar14 + 1;
        pfVar10 = pfVar14 + 2;
        pfVar14 = pfVar14 + 4;
        fVar29 = (fVar28 - fVar29) * (fVar28 - fVar29);
        fVar30 = (fVar32 - *pfVar9) * (fVar32 - *pfVar9);
        fVar33 = (fVar35 - *pfVar10) * (fVar35 - *pfVar10);
        auVar37._0_4_ = fVar30 + fVar29 + fVar33;
        auVar37._4_4_ = fVar30 + fVar29 + fVar33;
        auVar37._8_4_ = fVar30 + fVar29 + fVar33;
        auVar37._12_4_ = fVar30 + fVar29 + fVar33;
        auVar36 = rsqrtps(in_XMM2,auVar37);
        fVar29 = auVar36._0_4_;
        fVar30 = auVar36._4_4_;
        fVar33 = auVar36._8_4_;
        fVar31 = auVar36._12_4_;
        in_XMM2._0_4_ = fVar29 * 0.5;
        in_XMM2._4_4_ = fVar30 * 0.5;
        in_XMM2._8_4_ = fVar33 * 0.5;
        in_XMM2._12_4_ = fVar31 * 0.5;
        auVar6._4_4_ = ~-(uint)(auVar37._4_4_ <= 0.0) &
                       (uint)((3.0 - fVar30 * auVar37._4_4_ * fVar30) * in_XMM2._4_4_ *
                             auVar37._4_4_);
        auVar6._0_4_ = ~-(uint)(auVar37._0_4_ <= 0.0) &
                       (uint)((3.0 - fVar29 * auVar37._0_4_ * fVar29) * in_XMM2._0_4_ *
                             auVar37._0_4_);
        auVar6._8_4_ = ~-(uint)(auVar37._8_4_ <= 0.0) &
                       (uint)((3.0 - fVar33 * auVar37._8_4_ * fVar33) * in_XMM2._8_4_ *
                             auVar37._8_4_);
        auVar6._12_4_ =
             ~-(uint)(auVar37._12_4_ <= 0.0) &
             (uint)((3.0 - fVar31 * auVar37._12_4_ * fVar31) * in_XMM2._12_4_ * auVar37._12_4_);
        auVar41 = minps(auVar41,auVar6);
        uVar40 = auVar41._0_8_;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
    }
    local_98 = (float)uVar40;
    fVar28 = (float)((ulonglong)uVar40 >> 0x20);
  }
  else {
    if ((*(byte *)(uVar18 + 0xe) & 2) == 0) {
      pvVar13 = TlsGetValue(DAT_146b8198c);
      if (pvVar13 != (LPVOID)0x0) {
        FUN_14370d5c0(pvVar13,"TtAbstractSearch");
      }
      bVar2 = *(byte *)(uVar18 + 0xe);
      while (bVar26 = false, (bVar2 & 2) == 0) {
        if ((int)param_1[0x3f] == 0) {
          if (pvVar13 != (LPVOID)0x0) {
            FUN_14370d750(pvVar13,&DAT_145b8eda0);
          }
          local_98 = 3.40282e+38;
          fVar28 = 0.0;
          goto LAB_1438b8746;
        }
        if ((*(int *)((longlong)param_1 + 0x1fc) <= (int)param_1[0x3f]) ||
           ((int)param_1[0x35] <= *(int *)((longlong)param_1 + 0x1ac))) {
          bVar26 = true;
          break;
        }
        FUN_1438b7d50(param_1 + 0x30);
        bVar2 = *(byte *)(uVar18 + 0xe);
      }
      if (pvVar13 != (LPVOID)0x0) {
        FUN_14370d750(pvVar13,&DAT_145b8eda0);
      }
      if (bVar26) goto LAB_1438b89ca;
    }
    uVar16 = uVar19;
    if (*(short *)(uVar18 + 0xc) != -1) {
      uVar16 = (longlong)*(short *)(uVar18 + 0xc) * 0x10 + *plVar4;
    }
    uVar45 = *(undefined4 *)(uVar16 + 8);
    fVar29 = 0.0;
    fVar30 = 0.0;
    if ((int)param_1[2] == 1) {
      fVar30 = (float)hkaiClusterGraphEuclideanSearch::getCost(param_1 + 0x30,uVar45);
      uVar22 = *(undefined4 *)((longlong)param_1 + 0x1c);
      fVar29 = fVar30;
      local_res8[0] = fVar30;
    }
    else {
      uVar18 = uVar16;
      fVar33 = 0.0;
      fVar31 = 0.0;
      if ((*(short *)(uVar16 + 0xc) != -1) &&
         (uVar23 = (longlong)*(short *)(uVar16 + 0xc) * 0x10 + *plVar4, uVar22 = uVar45, uVar23 != 0
         )) {
        while (uVar18 = uVar23, fVar33 = fVar29, fVar31 = fVar30, (*(byte *)(uVar18 + 0xe) & 4) == 0
              ) {
          FUN_1438b81c0(param_1,uVar22,&local_98);
          FUN_1438b81c0(param_1,*(undefined4 *)(uVar18 + 8),&local_a8);
          fVar33 = (local_98 - (float)local_a8) * (local_98 - (float)local_a8);
          fVar31 = (fStack_94 - local_a8._4_4_) * (fStack_94 - local_a8._4_4_);
          fVar34 = (fStack_90 - (float)uStack_a0) * (fStack_90 - (float)uStack_a0);
          in_XMM4._0_4_ = fVar31 + fVar33 + fVar34;
          in_XMM4._4_4_ = fVar31 + fVar33 + fVar34;
          in_XMM4._8_4_ = fVar31 + fVar33 + fVar34;
          in_XMM4._12_4_ = fVar31 + fVar33 + fVar34;
          auVar36 = rsqrtps(in_XMM2,in_XMM4);
          fVar33 = auVar36._0_4_;
          fVar31 = auVar36._4_4_;
          in_XMM2._0_4_ = fVar33 * 0.5;
          in_XMM2._4_4_ = fVar31 * 0.5;
          in_XMM2._8_4_ = auVar36._8_4_ * 0.5;
          in_XMM2._12_4_ = auVar36._12_4_ * 0.5;
          fVar29 = fVar29 + (float)(~-(uint)(in_XMM4._0_4_ <= 0.0) &
                                   (uint)((3.0 - fVar33 * in_XMM4._0_4_ * fVar33) * in_XMM2._0_4_ *
                                         in_XMM4._0_4_));
          fVar30 = fVar30 + (float)(~-(uint)(in_XMM4._4_4_ <= 0.0) &
                                   (uint)((3.0 - fVar31 * in_XMM4._4_4_ * fVar31) * in_XMM2._4_4_ *
                                         in_XMM4._4_4_));
          uVar16 = uVar18;
          fVar33 = fVar29;
          fVar31 = fVar30;
          if ((*(short *)(uVar18 + 0xc) == -1) ||
             (uVar23 = (longlong)*(short *)(uVar18 + 0xc) * 0x10 + *plVar4,
             uVar22 = *(undefined4 *)(uVar18 + 8), uVar23 == 0)) break;
        }
      }
      uVar22 = *(undefined4 *)(uVar16 + 8);
      iVar27 = -1;
      if (0 < (longlong)(int)param_1[2]) {
        piVar12 = (int *)((longlong)param_1 + 0x1c);
        uVar16 = uVar19;
        do {
          iVar27 = (int)uVar16;
          if (*piVar12 == *(int *)(uVar18 + 8)) break;
          uVar16 = (ulonglong)((int)uVar16 + 1);
          uVar19 = uVar19 + 1;
          piVar12 = piVar12 + 1;
          iVar27 = -1;
        } while ((longlong)uVar19 < (longlong)(int)param_1[2]);
      }
      local_res8[0] = (float)hkaiClusterGraphEuclideanSearch::getCost(param_1 + 0x30,uVar45);
      fVar30 = (local_res8[0] * _DAT_1467f0710 + fVar33) * _DAT_1467f0800;
      fVar29 = (local_res8[0] * fRam00000001467f0714 + fVar31) * fRam00000001467f0804;
    }
    FUN_1438b81c0(param_1,uVar45,&local_98);
    FUN_1438b81c0(param_1,uVar22,&local_a8);
    fVar33 = (fVar28 - local_98) * (fVar28 - local_98);
    fVar31 = (fVar32 - fStack_94) * (fVar32 - fStack_94);
    fVar34 = (fVar35 - fStack_90) * (fVar35 - fStack_90);
    pfVar14 = (float *)(param_1[0x46] + (longlong)iVar27 * 0x10);
    fVar28 = ((float)local_a8 - *pfVar14) * ((float)local_a8 - *pfVar14);
    fVar32 = (local_a8._4_4_ - pfVar14[1]) * (local_a8._4_4_ - pfVar14[1]);
    fVar35 = ((float)uStack_a0 - pfVar14[2]) * ((float)uStack_a0 - pfVar14[2]);
    fVar43 = fVar31 + fVar33 + fVar34;
    fVar44 = fVar31 + fVar33 + fVar34;
    auVar8._4_4_ = fVar44;
    auVar8._0_4_ = fVar43;
    auVar8._8_4_ = fVar31 + fVar33 + fVar34;
    auVar8._12_4_ = fVar31 + fVar33 + fVar34;
    auVar41 = rsqrtps(auVar41,auVar8);
    auVar42._0_4_ = fVar32 + fVar28 + fVar35;
    auVar42._4_4_ = fVar32 + fVar28 + fVar35;
    auVar42._8_4_ = fVar32 + fVar28 + fVar35;
    auVar42._12_4_ = fVar32 + fVar28 + fVar35;
    fVar35 = auVar41._0_4_;
    fVar33 = auVar41._4_4_;
    auVar41 = rsqrtps(in_XMM4,auVar42);
    fVar28 = auVar41._0_4_;
    fVar32 = auVar41._4_4_;
    local_98 = (float)(~-(uint)(fVar43 <= 0.0) &
                      (uint)((3.0 - fVar35 * fVar43 * fVar35) * fVar35 * 0.5 * fVar43)) + fVar30 +
               (float)(~-(uint)(auVar42._0_4_ <= 0.0) &
                      (uint)((3.0 - fVar28 * auVar42._0_4_ * fVar28) * fVar28 * 0.5 * auVar42._0_4_)
                      );
    fVar28 = (float)(~-(uint)(fVar44 <= 0.0) &
                    (uint)((3.0 - fVar33 * fVar44 * fVar33) * fVar33 * 0.5 * fVar44)) + fVar29 +
             (float)(~-(uint)(auVar42._4_4_ <= 0.0) &
                    (uint)((3.0 - fVar32 * auVar42._4_4_ * fVar32) * fVar32 * 0.5 * auVar42._4_4_));
  }
LAB_1438b8746:
  return CONCAT44(fVar28,local_98);
}



// FUNCTION 1438b8b60 FUN_1438b8b60 body=538 status=ok
// SIG undefined FUN_1438b8b60(void)

void FUN_1438b8b60(undefined8 *param_1,undefined8 *param_2,longlong param_3,uint param_4,
                  undefined4 *param_5,uint *param_6,undefined8 param_7,int param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  longlong lVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  
  param_1[0x44] = *param_2;
  iVar7 = 0x10;
  if (param_8 < 0x10) {
    iVar7 = param_8;
  }
  *(int *)(param_1 + 2) = iVar7;
  *param_1 = param_2;
  param_1[1] = param_3;
  *(uint *)(param_1 + 0x2e) = param_4;
  uVar1 = *param_5;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  param_1[0x46] = param_7;
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x164) = uVar2;
  *(undefined4 *)(param_1 + 0x2d) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x16c) = uVar4;
  param_1[0x45] = param_6;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  if (param_3 != 0) {
    iVar10 = 0;
    iVar9 = 0;
    if (0 < iVar7) {
      puVar13 = param_6;
      do {
        uVar12 = *puVar13;
        if (uVar12 == 0xffffffff) {
          uVar12 = 0xffffffff;
        }
        else {
          uVar11 = uVar12 >> 0x16;
          lVar6 = *(longlong *)
                   (*(longlong *)((ulonglong)uVar11 * 0x100 + *(longlong *)(param_1[0x44] + 0x38)) +
                   0x18);
          lVar6 = FUN_1437fb610(*(undefined8 *)(lVar6 + 0x18),*(undefined4 *)(lVar6 + 0x20),
                                lVar6 + 0xb0,lVar6 + 0xd0,lVar6 + 0x90,uVar12 & 0x3fffff);
          if ((int)*(short *)(lVar6 + 0xc) == 0xffffffff) {
            uVar12 = 0xffffffff;
          }
          else {
            uVar12 = uVar11 << 0x16 | (int)*(short *)(lVar6 + 0xc);
          }
        }
        *(uint *)((longlong)param_1 + (0x1c - (longlong)param_6) + (longlong)puVar13) = uVar12;
        if ((*(char *)((longlong)param_1 + 0x14) != '\0') || (uVar5 = 0, uVar12 != 0xffffffff)) {
          uVar5 = 1;
        }
        iVar9 = iVar9 + 1;
        *(undefined1 *)((longlong)param_1 + 0x14) = uVar5;
        puVar13 = puVar13 + 1;
      } while (iVar9 < *(int *)(param_1 + 2));
    }
    if (param_4 == 0xffffffff) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = param_4 >> 0x16;
      lVar6 = *(longlong *)
               (*(longlong *)((ulonglong)uVar12 * 0x100 + *(longlong *)(param_1[0x44] + 0x38)) +
               0x18);
      lVar6 = FUN_1437fb610(*(undefined8 *)(lVar6 + 0x18),*(undefined4 *)(lVar6 + 0x20),lVar6 + 0xb0
                            ,lVar6 + 0xd0,lVar6 + 0x90,param_4 & 0x3fffff);
      if ((int)*(short *)(lVar6 + 0xc) == 0xffffffff) {
        uVar12 = 0xffffffff;
      }
      else {
        uVar12 = uVar12 << 0x16 | (int)*(short *)(lVar6 + 0xc);
      }
    }
    *(uint *)(param_1 + 3) = uVar12;
    if ((uVar12 != 0xffffffff) && (*(char *)((longlong)param_1 + 0x14) != '\0')) {
      FUN_1438b7bf0(param_1 + 0x30,param_1[1],(longlong)param_1 + 0x1c,*(undefined4 *)(param_1 + 2),
                    uVar12);
    }
    if (0 < *(int *)(param_1 + 2)) {
      piVar8 = (int *)((longlong)param_1 + 0x1c);
      do {
        if (*piVar8 != -1) {
          FUN_1438b81c0(param_1,*piVar8,param_1 + ((longlong)iVar10 + 6) * 2);
        }
        iVar10 = iVar10 + 1;
        piVar8 = piVar8 + 1;
      } while (iVar10 < *(int *)(param_1 + 2));
    }
  }
  return;
}



// FUNCTION 1438b8d80 FUN_1438b8d80 body=1011 status=ok
// SIG undefined FUN_1438b8d80(void)

undefined8 FUN_1438b8d80(longlong param_1,uint param_2,int *param_3,undefined4 *param_4)

{
  float *pfVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
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
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint uVar24;
  int iVar25;
  LPVOID pvVar26;
  int *piVar27;
  int *piVar28;
  undefined8 uVar29;
  undefined4 uVar30;
  ulonglong uVar31;
  uint uVar32;
  uint *puVar33;
  int *piVar34;
  undefined8 uVar35;
  int iVar36;
  longlong lVar37;
  int iVar38;
  int iVar39;
  undefined4 uVar40;
  int local_res8 [2];
  uint local_res10;
  
  plVar3 = *(longlong **)(param_1 + 8);
  uVar24 = param_2 >> 0x16;
  *(uint *)((longlong)plVar3 + 0x74) = param_2;
  if ((*plVar3 != 0) && (*(uint *)(plVar3 + 0xd) != uVar24)) {
    plVar3[1] = *(longlong *)((ulonglong)uVar24 * 0x100 + 0x10 + *(longlong *)(*plVar3 + 0x38));
    *(uint *)(plVar3 + 0xd) = uVar24;
  }
  lVar37 = plVar3[1];
  *(uint *)(plVar3 + 0xd) = uVar24;
  uVar31 = (ulonglong)(param_2 & 0x3fffff);
  plVar3[6] = *(longlong *)(*(longlong *)(*(longlong *)(lVar37 + 0x18) + 0x18) + uVar31 * 8);
  lVar4 = *(longlong *)(lVar37 + 0x18);
  if ((*(int *)(lVar4 + 0x78) == 0) ||
     (iVar39 = *(int *)(*(longlong *)(lVar4 + 0x70) + uVar31 * 4), iVar39 == -1)) {
    *(undefined4 *)(plVar3 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)plVar3 + 0x3c) = 0;
  }
  else {
    plVar3[7] = *(longlong *)(*(longlong *)(lVar4 + 0x80) + (longlong)iVar39 * 8);
  }
  pfVar1 = (float *)(*(longlong *)(*(longlong *)(lVar37 + 0x18) + 0x38) + uVar31 * 0x10);
  fVar5 = *pfVar1;
  fVar6 = pfVar1[1];
  fVar7 = pfVar1[2];
  uVar40 = 0x18;
  if (*(int *)((longlong)plVar3 + 0x34) < 0x18) {
    uVar40 = *(undefined4 *)((longlong)plVar3 + 0x34);
  }
  fVar8 = *(float *)(lVar37 + 0x40);
  fVar9 = *(float *)(lVar37 + 0x44);
  fVar10 = *(float *)(lVar37 + 0x48);
  fVar11 = *(float *)(lVar37 + 0x4c);
  uVar30 = 0x18;
  if (*(int *)((longlong)plVar3 + 0x3c) < 0x18) {
    uVar30 = *(undefined4 *)((longlong)plVar3 + 0x3c);
  }
  fVar12 = *(float *)(lVar37 + 0x30);
  fVar13 = *(float *)(lVar37 + 0x34);
  fVar14 = *(float *)(lVar37 + 0x38);
  fVar15 = *(float *)(lVar37 + 0x3c);
  fVar16 = *(float *)(lVar37 + 0x50);
  fVar17 = *(float *)(lVar37 + 0x54);
  fVar18 = *(float *)(lVar37 + 0x58);
  fVar19 = *(float *)(lVar37 + 0x5c);
  fVar20 = *(float *)(lVar37 + 0x60);
  fVar21 = *(float *)(lVar37 + 100);
  fVar22 = *(float *)(lVar37 + 0x68);
  fVar23 = *(float *)(lVar37 + 0x6c);
  *(undefined4 *)((longlong)plVar3 + 0x34) = uVar40;
  *(undefined4 *)((longlong)plVar3 + 0x3c) = uVar30;
  *(float *)(plVar3 + 8) = fVar6 * fVar8 + fVar5 * fVar12 + fVar7 * fVar16 + fVar20;
  *(float *)((longlong)plVar3 + 0x44) = fVar6 * fVar9 + fVar5 * fVar13 + fVar7 * fVar17 + fVar21;
  *(float *)(plVar3 + 9) = fVar6 * fVar10 + fVar5 * fVar14 + fVar7 * fVar18 + fVar22;
  *(float *)((longlong)plVar3 + 0x4c) = fVar6 * fVar11 + fVar5 * fVar15 + fVar7 * fVar19 + fVar23;
  lVar37 = *(longlong *)(lVar37 + 0x18);
  lVar4 = *(longlong *)(lVar37 + 0x90);
  iVar39 = *(int *)(lVar37 + 0x60);
  local_res10 = param_2;
  if (*(longlong *)(lVar37 + 0x28) != 0) {
    FUN_1438b7bb0(plVar3 + 0x12,*(longlong *)(lVar37 + 0x28),(int)plVar3[6],uVar40,
                  *(undefined4 *)(lVar37 + 0x30));
  }
  if ((lVar4 != 0) && (0 < *(int *)((longlong)plVar3 + 0x3c))) {
    FUN_1438b7bb0(plVar3 + (longlong)*(int *)((longlong)plVar3 + 0x34) + 0x12,lVar4,
                  (int)plVar3[7] - *(int *)(*(longlong *)(plVar3[1] + 0x18) + 0x30),
                  *(int *)((longlong)plVar3 + 0x3c),
                  *(undefined4 *)(*(longlong *)(plVar3[1] + 0x18) + 0x98));
  }
  plVar3[0xc] = (longlong)(plVar3 + 0x11);
  iVar25 = *(int *)((longlong)plVar3 + 0x3c) + *(int *)((longlong)plVar3 + 0x34);
  lVar37 = (longlong)iVar25;
  if (0 < iVar25) {
    puVar33 = (uint *)((longlong)plVar3 + 0x94);
    do {
      if ((*(byte *)((longlong)puVar33 + -2) & 0x40) == 0) {
        *puVar33 = iVar39 << 0x16 | *puVar33 & 0x3fffff;
      }
      puVar33 = puVar33 + 2;
      lVar37 = lVar37 + -1;
    } while (lVar37 != 0);
  }
  uVar24 = *(int *)(*(longlong *)(param_1 + 8) + 0x3c) + *(int *)(*(longlong *)(param_1 + 8) + 0x34)
  ;
  if (uVar24 == 0) {
    piVar27 = (int *)0x0;
  }
  else {
    pvVar26 = TlsGetValue(DAT_146b7bf70);
    if (pvVar26 == (LPVOID)0x0) {
      pvVar26 = DAT_146b7bf68;
    }
    uVar32 = uVar24 * 4 + 0x7f & 0xffffff80;
    piVar27 = *(int **)((longlong)pvVar26 + 0x18);
    uVar31 = (longlong)(int)uVar32 + (longlong)piVar27;
    if ((*(int *)((longlong)pvVar26 + 0x10) < (int)uVar32) ||
       (*(ulonglong *)((longlong)pvVar26 + 0x20) < uVar31)) {
      piVar27 = (int *)FUN_1437138c0(pvVar26);
    }
    else {
      *(ulonglong *)((longlong)pvVar26 + 0x18) = uVar31;
    }
  }
  lVar37 = *(longlong *)(param_1 + 8);
  iVar36 = 0;
  iVar39 = *(int *)(lVar37 + 0x34);
  iVar25 = *(int *)(lVar37 + 0x3c);
  iVar2 = *(int *)(lVar37 + 0x30);
  piVar34 = piVar27;
  piVar28 = piVar27;
  if (0 < iVar39) {
    do {
      iVar38 = iVar36 + iVar2;
      piVar34 = piVar28 + 1;
      iVar36 = iVar36 + 1;
      *piVar28 = iVar38;
      piVar28 = piVar34;
    } while (iVar36 < iVar39);
  }
  iVar2 = *(int *)(lVar37 + 0x38);
  iVar36 = 0;
  if (0 < iVar25) {
    do {
      iVar38 = iVar36 + iVar2;
      iVar36 = iVar36 + 1;
      *piVar34 = iVar38;
      piVar34 = piVar34 + 1;
    } while (iVar36 < iVar25);
  }
  piVar34 = piVar27;
  do {
    if (piVar27 + (iVar25 + iVar39) <= piVar34) {
      uVar35 = 0;
LAB_1438b90b4:
      pvVar26 = TlsGetValue(DAT_146b7bf70);
      if (pvVar26 == (LPVOID)0x0) {
        pvVar26 = DAT_146b7bf68;
      }
      uVar32 = uVar24 * 4 + 0x7f & 0xffffff80;
      if (((*(int *)((longlong)pvVar26 + 0x10) < (int)uVar32) ||
          ((longlong)(int)uVar32 + (longlong)piVar27 != *(longlong *)((longlong)pvVar26 + 0x18))) ||
         (*(int **)((longlong)pvVar26 + 0x28) == piVar27)) {
        FUN_143713ff0(pvVar26,piVar27);
      }
      else {
        *(int **)((longlong)pvVar26 + 0x18) = piVar27;
      }
      uVar29 = FUN_143703a50();
      if (-1 < (int)(uVar24 | 0x80000000)) {
        FUN_143702e10(uVar29,piVar27,4,uVar24 & 0x3fffffff);
      }
      return uVar35;
    }
    plVar3 = *(longlong **)(param_1 + 8);
    iVar2 = *piVar34;
    lVar37 = plVar3[0xc];
    plVar3[0xc] = lVar37 + 8;
    uVar32 = *(uint *)(lVar37 + 0xc) >> 0x16;
    if (*plVar3 == 0) {
      plVar3[2] = plVar3[1];
    }
    else if (*(uint *)((longlong)plVar3 + 0x6c) != uVar32) {
      plVar3[2] = *(longlong *)((ulonglong)uVar32 * 0x100 + 0x10 + *(longlong *)(*plVar3 + 0x38));
      *(uint *)((longlong)plVar3 + 0x6c) = uVar32;
    }
    *(uint *)((longlong)plVar3 + 0x6c) = uVar32;
    iVar38 = 0;
    iVar36 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x60) + 4);
    lVar37 = 0;
    if (0 < (longlong)*(int *)(param_1 + 0x10)) {
      piVar28 = (int *)(param_1 + 0x1c);
      do {
        if (iVar36 == *piVar28) {
          *param_3 = iVar38;
          local_res8[0] = iVar2;
          uVar40 = FUN_14389f170(*(undefined8 *)(param_1 + 8),local_res10,iVar36,local_res8,0);
          *param_4 = uVar40;
          uVar35 = 1;
          goto LAB_1438b90b4;
        }
        iVar38 = iVar38 + 1;
        lVar37 = lVar37 + 1;
        piVar28 = piVar28 + 1;
      } while (lVar37 < *(int *)(param_1 + 0x10));
    }
    piVar34 = piVar34 + 1;
  } while( true );
}



// FUNCTION 1438b9180 FUN_1438b9180 body=11 status=ok
// SIG undefined FUN_1438b9180(void)

longlong FUN_1438b9180(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  return param_1;
}



// FUNCTION 1438b9190 FUN_1438b9190 body=203 status=ok
// SIG undefined FUN_1438b9190(void)

void FUN_1438b9190(longlong param_1,float *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar6;
  undefined1 in_XMM2 [16];
  undefined1 auVar5 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  
  local_14 = *param_4;
  local_38 = *param_2;
  fStack_34 = param_2[1];
  fStack_30 = param_2[2];
  fStack_2c = param_2[3];
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = param_5;
  local_10 = param_6;
  FUN_1438b9260(local_38,&local_38);
  FUN_1438b92e0(param_1,&local_38);
  if (0 < *(int *)(param_1 + 0x18)) {
    fVar2 = *(float *)(param_1 + 0x20) - *param_2;
    fVar3 = *(float *)(param_1 + 0x24) - param_2[1];
    fVar4 = *(float *)(param_1 + 0x28) - param_2[2];
    fVar2 = fVar2 * fVar2;
    fVar3 = fVar3 * fVar3;
    fVar4 = fVar4 * fVar4;
    fVar8 = fVar3 + fVar2 + fVar4;
    fVar9 = fVar3 + fVar2 + fVar4;
    fVar10 = fVar3 + fVar2 + fVar4;
    fVar4 = fVar3 + fVar2 + fVar4;
    auVar5._4_4_ = fVar9;
    auVar5._0_4_ = fVar8;
    auVar5._8_4_ = fVar10;
    auVar5._12_4_ = fVar4;
    auVar5 = rsqrtps(in_XMM2,auVar5);
    fVar2 = auVar5._0_4_;
    fVar3 = auVar5._4_4_;
    fVar6 = auVar5._8_4_;
    fVar7 = auVar5._12_4_;
    *(float *)(param_1 + 0x30) =
         (float)(~-(uint)(fVar8 <= 0.0) &
                (uint)((3.0 - fVar8 * fVar2 * fVar2) * fVar2 * 0.5 * fVar8)) +
         *(float *)(param_1 + 0x30);
    *(float *)(param_1 + 0x34) =
         (float)(~-(uint)(fVar9 <= 0.0) &
                (uint)((3.0 - fVar9 * fVar3 * fVar3) * fVar3 * 0.5 * fVar9)) +
         *(float *)(param_1 + 0x34);
    *(float *)(param_1 + 0x38) =
         (float)(~-(uint)(fVar10 <= 0.0) &
                (uint)((3.0 - fVar10 * fVar6 * fVar6) * fVar6 * 0.5 * fVar10)) +
         *(float *)(param_1 + 0x38);
    *(float *)(param_1 + 0x3c) =
         (float)(~-(uint)(fVar4 <= 0.0) &
                (uint)((3.0 - fVar4 * fVar7 * fVar7) * fVar7 * 0.5 * fVar4)) +
         *(float *)(param_1 + 0x3c);
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



// FUNCTION 1438b9260 FUN_1438b9260 body=121 status=ok
// SIG undefined FUN_1438b9260(void)

void FUN_1438b9260(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_143703a50();
    if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
      FUN_14370c460(uVar1,param_1,0x30);
    }
    puVar2 = (undefined8 *)((longlong)(int)param_1[1] * 0x30 + *param_1);
    if (puVar2 != (undefined8 *)0x0) {
      uVar1 = param_2[1];
      *puVar2 = *param_2;
      puVar2[1] = uVar1;
      uVar1 = param_2[3];
      puVar2[2] = param_2[2];
      puVar2[3] = uVar1;
      *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)((longlong)puVar2 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
      *(undefined1 *)(puVar2 + 5) = *(undefined1 *)(param_2 + 5);
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  }
  return;
}



// FUNCTION 1438b92e0 FUN_1438b92e0 body=64 status=ok
// SIG undefined FUN_1438b92e0(void)

void FUN_1438b92e0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if ((puVar1 != (undefined8 *)0x0) && (*(int *)(param_1 + 0x14) < *(int *)(param_1 + 0x10))) {
    uVar2 = param_2[1];
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
    uVar2 = param_2[3];
    puVar1[2] = param_2[2];
    puVar1[3] = uVar2;
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((longlong)puVar1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
    *(undefined1 *)(puVar1 + 5) = *(undefined1 *)(param_2 + 5);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x30;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  return;
}



// FUNCTION 1438b9320 FUN_1438b9320 body=46 status=ok
// SIG undefined FUN_1438b9320(void)

void FUN_1438b9320(void)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined1 local_10;
  
  local_18 = 0xffffffff80000000;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_10 = 0;
  FUN_1438b92e0(0,&local_38);
  return;
}



// FUNCTION 1438b9350 FUN_1438b9350 body=30 status=ok
// SIG undefined FUN_1438b9350(void)

void FUN_1438b9350(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[1] = param_3;
  *(undefined4 *)(param_1 + 2) = param_4;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}



// FUNCTION 1438b9370 FUN_1438b9370 body=23 status=ok
// SIG undefined FUN_1438b9370(void)

undefined8 * FUN_1438b9370(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
  return param_1;
}



// FUNCTION 1438b9390 FUN_1438b9390 body=44 status=ok
// SIG undefined FUN_1438b9390(void)

int * FUN_1438b9390(int *param_1,int *param_2,int param_3,int param_4)

{
  *param_1 = param_3;
  param_1[1] = param_4;
  *(int **)(param_1 + 2) = param_2;
  if (param_4 == -1) {
    if (param_3 == 1) {
      param_1[1] = *param_2;
      return param_1;
    }
    param_1[1] = param_2[4] + -1;
  }
  return param_1;
}



// FUNCTION 1438b93c0 FUN_1438b93c0 body=156 status=ok
// SIG undefined FUN_1438b93c0(void)

longlong FUN_1438b93c0(longlong param_1,longlong param_2)

{
  uint uVar1;
  LPVOID pvVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_2 + 8);
  lVar3 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x80000000;
  *(uint *)(param_1 + 0x28) = uVar1;
  if (uVar1 != 0) {
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    lVar3 = *(longlong *)((longlong)pvVar2 + 0x18);
    uVar4 = (int)(uVar1 * 0x80) + lVar3;
    if ((*(int *)((longlong)pvVar2 + 0x10) < (int)(uVar1 * 0x80)) ||
       (*(ulonglong *)((longlong)pvVar2 + 0x20) < uVar4)) {
      lVar3 = FUN_1437138c0();
    }
    else {
      *(ulonglong *)((longlong)pvVar2 + 0x18) = uVar4;
    }
  }
  *(longlong *)(param_1 + 0x10) = lVar3;
  *(longlong *)(param_1 + 0x20) = lVar3;
  *(uint *)(param_1 + 0x1c) = uVar1 | 0x80000000;
  *(longlong *)(param_1 + 0x30) = param_2;
  return param_1;
}



// FUNCTION 1438b9460 FUN_1438b9460 body=429 status=ok
// SIG undefined FUN_1438b9460(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1438b9460(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined4 param_5,undefined8 *param_6,undefined8 *param_7,undefined4 param_8,
             undefined4 param_9,undefined8 *param_10,float param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiStringPulling::vftable;
  *(uint *)(param_1 + 6) = (uint)(param_11 == 0.0);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_4 + 8);
  param_1[7] = param_2;
  FUN_1438b93c0(param_1 + 8,param_4);
  FUN_1438b9370(param_1 + 0x10);
  uVar1 = param_10[1];
  param_1[0x14] = *param_10;
  param_1[0x15] = uVar1;
  uVar1 = param_6[1];
  param_1[0x16] = *param_6;
  param_1[0x17] = uVar1;
  uVar1 = *param_7;
  uVar2 = param_7[1];
  param_1[0x1a] = param_12;
  param_1[0x18] = uVar1;
  param_1[0x19] = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0xff;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)(param_1 + 0x22) = param_8;
  *(undefined4 *)((longlong)param_1 + 0x114) = param_5;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(float *)(param_1 + 4) = param_11;
  *(float *)((longlong)param_1 + 0x24) = param_11;
  *(float *)(param_1 + 5) = param_11;
  *(float *)((longlong)param_1 + 0x2c) = param_11;
  fVar5 = DAT_1467f06ec;
  uVar4 = uRam00000001467f06e8;
  uVar3 = uRam00000001467f06e4;
  *(undefined4 *)(param_1 + 0x20) = _DAT_1467f06e0;
  *(undefined4 *)((longlong)param_1 + 0x104) = uVar3;
  *(undefined4 *)(param_1 + 0x21) = uVar4;
  *(float *)((longlong)param_1 + 0x10c) = fVar5;
  *(bool *)((longlong)param_1 + 0xe6) = DAT_1467f06ec < 0.0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xe4) = 0xff;
  thunk_FUN_143719c70(0xa36ada13);
  FUN_1438b9eb0(param_1 + 8,param_2,param_3,param_5,param_11,param_1 + 0x14,param_9);
  return param_1;
}



// FUNCTION 1438b9610 FUN_1438b9610 body=106 status=ok
// SIG undefined FUN_1438b9610(void)

void FUN_1438b9610(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x94)) {
    FUN_143702e10(&PTR_vftable_1467f0638,*(undefined8 *)(param_1 + 0x88),0x30,
                  *(uint *)(param_1 + 0x94) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0x80000000;
  FUN_14389d560(param_1 + 0x40);
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1438b9680 GetBox body=16 status=ok
// SIG undefined GetBox(void)

longlong TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
         ::GetBox(longlong param_1,int param_2)

{
  return (longlong)param_2 * 0x30 + *(longlong *)(param_1 + 8);
}



// FUNCTION 1438b9690 FUN_1438b9690 body=13 status=ok
// SIG undefined FUN_1438b9690(void)

void FUN_1438b9690(int *param_1)

{
  if (*param_1 == 1) {
    param_1[1] = param_1[1] + 1;
    return;
  }
  param_1[1] = param_1[1] + -1;
  return;
}



// FUNCTION 1438b96a0 FUN_1438b96a0 body=139 status=ok
// SIG undefined FUN_1438b96a0(void)

longlong FUN_1438b96a0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438b9610();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x120;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x120);
    }
  }
  return param_1;
}



// FUNCTION 1438b9730 FUN_1438b9730 body=369 status=ok
// SIG undefined FUN_1438b9730(void)

void FUN_1438b9730(int *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 1) {
    if (param_1[4] == (param_1[5] & 0x3fffffffU)) {
      FUN_14370c460(&PTR_vftable_1467f0638,param_1 + 2,0x30);
    }
    puVar5 = (undefined8 *)((longlong)param_1[4] * 0x30 + *(longlong *)(param_1 + 2));
    if (puVar5 != (undefined8 *)0x0) {
      uVar2 = param_2[1];
      *puVar5 = *param_2;
      puVar5[1] = uVar2;
      uVar2 = param_2[3];
      puVar5[2] = param_2[2];
      puVar5[3] = uVar2;
      uVar2 = param_2[5];
      puVar5[4] = param_2[4];
      puVar5[5] = uVar2;
    }
    param_1[4] = param_1[4] + 1;
    return;
  }
  if (0 < *param_1) {
    iVar3 = *param_1 + -1;
    *param_1 = iVar3;
    puVar7 = (undefined4 *)((longlong)iVar3 * 0x30 + *(longlong *)(param_1 + 2));
    *puVar7 = *(undefined4 *)param_2;
    *(undefined1 *)(puVar7 + 1) = *(undefined1 *)((longlong)param_2 + 4);
    *(undefined1 *)((longlong)puVar7 + 5) = *(undefined1 *)((longlong)param_2 + 5);
    *(undefined1 *)((longlong)puVar7 + 6) = *(undefined1 *)((longlong)param_2 + 6);
    *(undefined1 *)((longlong)puVar7 + 7) = *(undefined1 *)((longlong)param_2 + 7);
    *(undefined1 *)(puVar7 + 2) = *(undefined1 *)(param_2 + 1);
    uVar2 = param_2[3];
    *(undefined8 *)(puVar7 + 4) = param_2[2];
    *(undefined8 *)(puVar7 + 6) = uVar2;
    uVar2 = param_2[5];
    *(undefined8 *)(puVar7 + 8) = param_2[4];
    *(undefined8 *)(puVar7 + 10) = uVar2;
    return;
  }
  uVar4 = param_1[5] & 0x3fffffff;
  iVar3 = param_1[4];
  iVar6 = iVar3 + 1;
  if (((int)uVar4 < iVar6) && ((int)uVar4 < iVar6)) {
    iVar1 = iVar6;
    if (iVar6 < (int)(uVar4 * 2)) {
      iVar1 = uVar4 * 2;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,param_1 + 2,iVar1,0x30);
  }
  FUN_143732890(*(longlong *)(param_1 + 2) + 0x30,*(longlong *)(param_1 + 2),(longlong)iVar3 * 0x30)
  ;
  puVar5 = *(undefined8 **)(param_1 + 2);
  if (puVar5 != (undefined8 *)0x0) {
    uVar2 = param_2[1];
    *puVar5 = *param_2;
    puVar5[1] = uVar2;
    uVar2 = param_2[3];
    puVar5[2] = param_2[2];
    puVar5[3] = uVar2;
    uVar2 = param_2[5];
    puVar5[4] = param_2[4];
    puVar5[5] = uVar2;
  }
  param_1[4] = iVar6;
  param_1[1] = param_1[1] + 1;
  return;
}



// FUNCTION 1438b98b0 FUN_1438b98b0 body=1151 status=ok
// SIG undefined FUN_1438b98b0(void)

void FUN_1438b98b0(longlong param_1,int *param_2,int *param_3)

{
  float *pfVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar18;
  float fVar20;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar19;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar21;
  float fVar22;
  float fVar23;
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
  int local_128;
  undefined1 local_124;
  undefined4 local_123;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 local_f0;
  int local_c8 [2];
  undefined1 local_c0;
  
  uVar7 = 4;
  if (*(char *)((longlong)param_2 + 7) != '\0') {
    uVar7 = 6;
  }
  cVar2 = *(char *)((longlong)param_3 + 7);
  if (*(int *)(param_1 + 0x110) == 0) {
    FUN_1438b9d30(param_1,param_2,uVar7);
  }
  else {
    local_f8 = 0xfffffffe;
    local_f4 = 0xff;
    local_f0 = 0;
    FUN_1438bbf10(param_1,param_2,&local_f8);
    FUN_1438b9d30(param_1,&local_f8,uVar7);
    iVar8 = *param_2 + 1;
    if (iVar8 <= *param_3) {
      lVar9 = (longlong)iVar8 << 7;
      do {
        if (*(int *)(param_1 + 0x34) <= iVar8) break;
        pfVar1 = (float *)(lVar9 + 0x30 + *(longlong *)(param_1 + 0x50));
        fVar21 = *pfVar1;
        fVar5 = pfVar1[1];
        fVar6 = pfVar1[2];
        pfVar1 = (float *)(lVar9 + 0x40 + *(longlong *)(param_1 + 0x50));
        fVar31 = *pfVar1 - fVar21;
        fVar32 = pfVar1[1] - fVar5;
        fVar33 = pfVar1[2] - fVar6;
        fVar27 = *(float *)(param_1 + 0xa0) * fVar32 - *(float *)(param_1 + 0xa4) * fVar31;
        fVar28 = *(float *)(param_1 + 0xa4) * fVar33 - *(float *)(param_1 + 0xa8) * fVar32;
        fVar29 = *(float *)(param_1 + 0xa8) * fVar31 - *(float *)(param_1 + 0xa0) * fVar33;
        fVar11 = fVar28 * fVar28;
        fVar18 = fVar29 * fVar29;
        auVar12._8_4_ = fVar27 * fVar27;
        auVar12._4_4_ = auVar12._8_4_;
        auVar12._0_4_ = auVar12._8_4_;
        auVar12._12_4_ = auVar12._8_4_;
        fVar22 = fVar18 + fVar11 + auVar12._8_4_;
        fVar24 = fVar18 + fVar11 + auVar12._8_4_;
        fVar25 = fVar18 + fVar11 + auVar12._8_4_;
        auVar13._4_4_ = fVar24;
        auVar13._0_4_ = fVar22;
        auVar13._8_4_ = fVar25;
        auVar13._12_4_ = fVar18 + fVar11 + auVar12._8_4_;
        auVar13 = rsqrtps(auVar12,auVar13);
        fVar11 = auVar13._0_4_;
        fVar18 = auVar13._4_4_;
        fVar10 = auVar13._8_4_;
        fVar28 = fVar28 * (float)(~-(uint)(fVar22 <= 0.0) &
                                 (uint)((3.0 - fVar22 * fVar11 * fVar11) * fVar11 * 0.5));
        fVar29 = fVar29 * (float)(~-(uint)(fVar24 <= 0.0) &
                                 (uint)((3.0 - fVar24 * fVar18 * fVar18) * fVar18 * 0.5));
        fVar27 = fVar27 * (float)(~-(uint)(fVar25 <= 0.0) &
                                 (uint)((3.0 - fVar25 * fVar10 * fVar10) * fVar10 * 0.5));
        fVar22 = 0.0 - (fVar29 * fVar5 + fVar28 * fVar21 + fVar27 * fVar6);
        fVar11 = fVar27 * (float)param_2[6] + fVar28 * (float)param_2[4];
        fVar18 = fVar22 + fVar29 * (float)param_2[5];
        fVar10 = fVar28 * (float)param_2[4] + fVar27 * (float)param_2[6];
        fVar24 = fVar29 * (float)param_2[5] + fVar22;
        fVar25 = fVar28 * (float)param_3[4];
        fVar19 = fVar29 * (float)param_3[5];
        fVar20 = fVar27 * (float)param_3[6];
        fVar23 = fVar18 + fVar11;
        fVar11 = fVar11 + fVar18;
        fVar26 = fVar24 + fVar10;
        fVar10 = fVar10 + fVar24;
        auVar16._0_4_ = fVar20 + fVar25;
        auVar16._4_4_ = fVar22 + fVar19;
        auVar16._8_4_ = fVar25 + fVar20;
        auVar16._12_4_ = fVar19 + fVar22;
        fVar18 = auVar16._4_4_ + auVar16._0_4_;
        if (((0.0 < fVar23) && (fVar18 < 0.0)) || ((fVar23 < 0.0 && (0.0 < fVar18)))) {
          local_123 = 0;
          auVar14._0_4_ = fVar23 - fVar18;
          auVar14._4_4_ = fVar11 - (auVar16._0_4_ + auVar16._4_4_);
          auVar14._8_4_ = fVar26 - (auVar16._12_4_ + auVar16._8_4_);
          auVar14._12_4_ = fVar10 - (auVar16._8_4_ + auVar16._12_4_);
          local_124 = 0xff;
          auVar13 = rcpps(auVar16,auVar14);
          fVar30 = fVar29 * fVar31 - fVar28 * fVar32;
          fVar29 = fVar27 * fVar32 - fVar29 * fVar33;
          fVar27 = fVar28 * fVar33 - fVar27 * fVar31;
          fVar18 = fVar29 * fVar29;
          fVar22 = fVar27 * fVar27;
          auVar15._8_4_ = fVar30 * fVar30;
          auVar15._4_4_ = auVar15._8_4_;
          auVar15._0_4_ = auVar15._8_4_;
          auVar15._12_4_ = auVar15._8_4_;
          fVar24 = fVar22 + fVar18 + auVar15._8_4_;
          fVar25 = fVar22 + fVar18 + auVar15._8_4_;
          fVar19 = fVar22 + fVar18 + auVar15._8_4_;
          local_118 = ((float)param_3[4] - (float)param_2[4]) *
                      (2.0 - auVar14._0_4_ * auVar13._0_4_) * auVar13._0_4_ * fVar23 +
                      (float)param_2[4];
          fStack_114 = ((float)param_3[5] - (float)param_2[5]) *
                       (2.0 - auVar14._4_4_ * auVar13._4_4_) * auVar13._4_4_ * fVar11 +
                       (float)param_2[5];
          fStack_110 = ((float)param_3[6] - (float)param_2[6]) *
                       (2.0 - auVar14._8_4_ * auVar13._8_4_) * auVar13._8_4_ * fVar26 +
                       (float)param_2[6];
          auVar3._4_4_ = fVar25;
          auVar3._0_4_ = fVar24;
          auVar3._8_4_ = fVar19;
          auVar3._12_4_ = fVar22 + fVar18 + auVar15._8_4_;
          auVar16 = rsqrtps(auVar15,auVar3);
          fVar11 = auVar16._0_4_;
          fVar18 = auVar16._4_4_;
          fVar22 = auVar16._8_4_;
          fVar29 = fVar29 * (float)(~-(uint)(fVar24 <= 0.0) &
                                   (uint)((3.0 - fVar24 * fVar11 * fVar11) * fVar11 * 0.5));
          fVar27 = fVar27 * (float)(~-(uint)(fVar25 <= 0.0) &
                                   (uint)((3.0 - fVar25 * fVar18 * fVar18) * fVar18 * 0.5));
          fVar30 = fVar30 * (float)(~-(uint)(fVar19 <= 0.0) &
                                   (uint)((3.0 - fVar19 * fVar22 * fVar22) * fVar22 * 0.5));
          fVar11 = fVar29 * *(float *)(param_1 + 0xa0);
          fVar18 = fVar27 * *(float *)(param_1 + 0xa4);
          fVar22 = fVar30 * *(float *)(param_1 + 0xa8);
          fVar24 = fVar29 * local_118;
          fVar25 = fVar27 * fStack_114;
          fVar19 = fVar30 * fStack_110;
          fVar29 = fVar29 * fVar21;
          fVar27 = fVar27 * fVar5;
          fVar30 = fVar30 * fVar6;
          fVar20 = fVar18 + fVar11 + fVar22;
          fVar23 = fVar18 + fVar11 + fVar22;
          fVar26 = fVar18 + fVar11 + fVar22;
          fVar22 = fVar18 + fVar11 + fVar22;
          auVar17._0_4_ = fVar25 + fVar24 + fVar19;
          auVar17._4_4_ = fVar25 + fVar24 + fVar19;
          auVar17._8_4_ = fVar25 + fVar24 + fVar19;
          auVar17._12_4_ = fVar25 + fVar24 + fVar19;
          auVar4._4_4_ = fVar23;
          auVar4._0_4_ = fVar20;
          auVar4._8_4_ = fVar26;
          auVar4._12_4_ = fVar22;
          auVar16 = rcpps(auVar17,auVar4);
          local_118 = local_118 +
                      (2.0 - auVar16._0_4_ * fVar20) * auVar16._0_4_ *
                      ((fVar27 + fVar29 + fVar30) - auVar17._0_4_) * *(float *)(param_1 + 0xa0);
          fStack_114 = fStack_114 +
                       (2.0 - auVar16._4_4_ * fVar23) * auVar16._4_4_ *
                       ((fVar27 + fVar29 + fVar30) - auVar17._4_4_) * *(float *)(param_1 + 0xa4);
          fStack_110 = fStack_110 +
                       (2.0 - auVar16._8_4_ * fVar26) * auVar16._8_4_ *
                       ((fVar27 + fVar29 + fVar30) - auVar17._8_4_) * *(float *)(param_1 + 0xa8);
          fStack_10c = ((float)param_3[7] - (float)param_2[7]) *
                       (2.0 - auVar14._12_4_ * auVar13._12_4_) * auVar13._12_4_ * fVar10 +
                       (float)param_2[7] +
                       (2.0 - auVar16._12_4_ * fVar22) * auVar16._12_4_ *
                       ((fVar27 + fVar29 + fVar30) - auVar17._12_4_) * *(float *)(param_1 + 0xac);
          fVar21 = (fStack_114 - fVar5) * fVar32 + (local_118 - fVar21) * fVar31 +
                   (fStack_110 - fVar6) * fVar33;
          local_128 = iVar8;
          local_108 = local_118;
          fStack_104 = fStack_114;
          fStack_100 = fStack_110;
          if ((0.0 <= fVar21) && (fVar21 <= fVar32 * fVar32 + fVar31 * fVar31 + fVar33 * fVar33)) {
            FUN_1438b9d30(param_1,&local_128,0);
          }
        }
        iVar8 = iVar8 + 1;
        lVar9 = lVar9 + 0x80;
      } while (iVar8 <= *param_3);
    }
    local_c8[0] = -2;
    local_c8[1] = 0xff;
    local_c0 = 0;
    FUN_1438bbf10(param_1,param_3,local_c8);
    param_3 = local_c8;
  }
  FUN_1438b9d30(param_1,param_3,(cVar2 != '\0') + '\b');
  return;
}



// FUNCTION 1438b9d30 FUN_1438b9d30 body=337 status=ok
// SIG undefined FUN_1438b9d30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438b9d30(longlong param_1,int *param_2,byte param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint local_res8 [2];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar2 = *param_2;
  lVar5 = (longlong)iVar2;
  uVar7 = 0;
  if ((iVar2 < 0) || (iVar3 = *(int *)(param_1 + 0x34), iVar3 == 0)) {
    local_res8[0] = *(uint *)(param_1 + 0x114);
    uVar8 = *(undefined4 *)(param_1 + 0x40);
    uVar9 = *(undefined4 *)(param_1 + 0x44);
    uVar10 = *(undefined4 *)(param_1 + 0x48);
    uVar11 = *(undefined4 *)(param_1 + 0x4c);
  }
  else {
    if (iVar2 < iVar3) {
      if ((param_3 & 2) == 0) {
        local_res8[0] = *(uint *)(**(longlong **)(param_1 + 0x70) + lVar5 * 4) >> 0x16;
        if (*(char *)((longlong)param_2 + 7) != '\0') {
          uVar7 = *(undefined4 *)(lVar5 * 0x80 + 0x28 + *(longlong *)(param_1 + 0x50));
        }
        puVar1 = (undefined4 *)(lVar5 * 0x80 + 0x70 + *(longlong *)(param_1 + 0x50));
        uVar8 = *puVar1;
        uVar9 = puVar1[1];
        uVar10 = puVar1[2];
        uVar11 = puVar1[3];
      }
      else {
        lVar6 = lVar5 * 0x80 + *(longlong *)(param_1 + 0x50);
        uVar7 = *(undefined4 *)(lVar6 + 0x2c);
        local_res8[0] = *(uint *)(lVar6 + 8) >> 0x16;
        puVar1 = (undefined4 *)(lVar5 * 0x80 + 0x70 + *(longlong *)(param_1 + 0x50));
        uVar8 = *puVar1;
        uVar9 = puVar1[1];
        uVar10 = puVar1[2];
        uVar11 = puVar1[3];
      }
      goto LAB_1438b9df4;
    }
    lVar5 = (longlong)(iVar3 + -1) * 0x80 + *(longlong *)(param_1 + 0x50);
    local_res8[0] = *(uint *)(lVar5 + 0xc);
    uVar8 = *(undefined4 *)(lVar5 + 0x70);
    uVar9 = *(undefined4 *)(lVar5 + 0x74);
    uVar10 = *(undefined4 *)(lVar5 + 0x78);
    uVar11 = *(undefined4 *)(lVar5 + 0x7c);
  }
  local_res8[0] = local_res8[0] >> 0x16;
LAB_1438b9df4:
  _local_18 = CONCAT44(uVar9,uVar8);
  _uStack_10 = CONCAT44(uVar11,uVar10);
  FUN_1438b9190(*(undefined8 *)(param_1 + 0xd0),param_2 + 4,&local_18,local_res8,uVar7,param_3);
  *(int *)(param_1 + 0xe0) = *param_2;
  *(char *)(param_1 + 0xe4) = (char)param_2[1];
  *(undefined1 *)(param_1 + 0xe5) = *(undefined1 *)((longlong)param_2 + 5);
  *(undefined1 *)(param_1 + 0xe6) = *(undefined1 *)((longlong)param_2 + 6);
  *(undefined1 *)(param_1 + 0xe7) = *(undefined1 *)((longlong)param_2 + 7);
  *(char *)(param_1 + 0xe8) = (char)param_2[2];
  uVar4 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0xf8) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x108) = uVar4;
  return;
}



// FUNCTION 1438b9e90 FUN_1438b9e90 body=21 status=ok
// SIG undefined FUN_1438b9e90(void)

undefined8 FUN_1438b9e90(int *param_1)

{
  if ((*param_1 <= param_1[1]) && (param_1[1] < param_1[4])) {
    return 0;
  }
  return 1;
}



// FUNCTION 1438b9eb0 FUN_1438b9eb0 body=1847 status=ok
// SIG undefined FUN_1438b9eb0(void)

void FUN_1438b9eb0(undefined4 *param_1,longlong param_2,undefined8 param_3,uint param_4,
                  undefined4 param_5,undefined4 *param_6,int param_7)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  float fVar5;
  undefined4 uVar6;
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
  float fVar23;
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
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  int iVar71;
  LPVOID pvVar72;
  undefined8 uVar73;
  int *piVar74;
  undefined8 *puVar75;
  longlong lVar76;
  float *pfVar77;
  uint uVar78;
  uint uVar79;
  byte bVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  undefined8 uVar84;
  longlong lVar86;
  ulonglong in_stack_fffffffffffffef8;
  ulonglong uVar88;
  float *pfVar89;
  undefined8 in_stack_ffffffffffffff00;
  float local_e8;
  float local_e4;
  undefined8 local_e0;
  int *local_d8;
  undefined4 *local_d0;
  longlong local_c8;
  undefined8 local_c0;
  LPVOID local_b8;
  longlong local_a8 [2];
  undefined1 local_98 [88];
  undefined4 uVar85;
  undefined4 uVar87;
  
  pvVar72 = TlsGetValue(DAT_146b8198c);
  local_b8 = pvVar72;
  if (pvVar72 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar72,"TtcacheMeshData");
  }
  iVar2 = *(int *)(*(longlong *)(param_1 + 0xc) + 8);
  iVar71 = iVar2 - param_1[6];
  lVar76 = (longlong)iVar71;
  if (0 < iVar71) {
    puVar75 = (undefined8 *)((longlong)(int)param_1[6] * 0x80 + *(longlong *)(param_1 + 4) + 0x1c);
    do {
      if (puVar75 != (undefined8 *)0x1c) {
        *(undefined8 *)((longlong)puVar75 + -0x14) = 0xffffffffffffffff;
        *(undefined4 *)((longlong)puVar75 + -0xc) = 4;
        *puVar75 = 0xffffffffffffffff;
        *(undefined4 *)(puVar75 + 1) = 4;
      }
      puVar75 = puVar75 + 0x10;
      lVar76 = lVar76 + -1;
    } while (lVar76 != 0);
  }
  param_1[6] = iVar2;
  if (param_7 == 0) {
    uVar85 = param_6[1];
    uVar87 = param_6[2];
    uVar6 = param_6[3];
    *param_1 = *param_6;
    param_1[1] = uVar85;
    param_1[2] = uVar87;
    param_1[3] = uVar6;
  }
  else {
    local_e8 = (float)(param_4 & 0x3fffff);
    FUN_143852420(local_a8,*(undefined8 *)
                            ((ulonglong)(param_4 >> 0x16) * 0x100 + *(longlong *)(param_2 + 0x38)),
                  &local_e8);
  }
  lVar76 = 0;
  local_c8 = 0;
  local_a8[0] = (longlong)iVar2;
  if (0 < iVar2) {
    do {
      local_e0 = (undefined4 *)0x0;
      uVar3 = *(uint *)(**(longlong **)(param_1 + 0xc) + local_c8 * 4);
      lVar86 = *(longlong *)((ulonglong)(uVar3 >> 0x16) * 0x100 + *(longlong *)(param_2 + 0x38));
      lVar4 = *(longlong *)(lVar86 + 0x18);
      uVar84 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffff00 >> 0x20),
                        *(undefined4 *)(lVar4 + 0x60));
      uVar88 = CONCAT44((int)(in_stack_fffffffffffffef8 >> 0x20),uVar3) & 0xffffffff003fffff;
      local_d8 = (int *)FUN_14384fa30(*(undefined8 *)(lVar4 + 0x28),*(undefined4 *)(lVar4 + 0x30),
                                      lVar4 + 0xc0,lVar4 + 0xe0,*(undefined8 *)(lVar4 + 0x58),
                                      lVar4 + 0x130,lVar4 + 0x150,lVar4 + 0x70,uVar88,uVar84,
                                      &local_e0);
      uVar85 = (undefined4)(uVar88 >> 0x20);
      uVar87 = (undefined4)((ulonglong)uVar84 >> 0x20);
      iVar2 = *(int *)(lVar4 + 0x40);
      iVar71 = *local_d8;
      if (iVar71 < iVar2) {
        pfVar77 = (float *)((longlong)iVar71 * 0x10 + *(longlong *)(lVar4 + 0x38));
      }
      else {
        pfVar77 = (float *)((longlong)(iVar71 - iVar2) * 0x10 + *(longlong *)(lVar4 + 0xf0));
      }
      iVar71 = local_d8[1];
      fVar7 = *pfVar77;
      fVar8 = pfVar77[1];
      fVar9 = pfVar77[2];
      if (iVar71 < iVar2) {
        pfVar77 = (float *)((longlong)iVar71 * 0x10 + *(longlong *)(lVar4 + 0x38));
      }
      else {
        pfVar77 = (float *)((longlong)(iVar71 - iVar2) * 0x10 + *(longlong *)(lVar4 + 0xf0));
      }
      fVar10 = *pfVar77;
      fVar11 = pfVar77[1];
      fVar12 = pfVar77[2];
      uVar78 = local_d8[3];
      fVar13 = *(float *)(lVar86 + 0x50);
      fVar14 = *(float *)(lVar86 + 0x54);
      fVar15 = *(float *)(lVar86 + 0x58);
      iVar2 = *(int *)(*(longlong *)(lVar86 + 0x18) + 0x17c);
      fVar16 = *(float *)(lVar86 + 0x40);
      fVar17 = *(float *)(lVar86 + 0x44);
      fVar18 = *(float *)(lVar86 + 0x48);
      fVar19 = *(float *)(lVar86 + 0x54);
      fVar20 = *(float *)(lVar86 + 0x58);
      fVar21 = *(float *)(lVar86 + 0x60);
      fVar22 = *(float *)(lVar86 + 100);
      fVar23 = *(float *)(lVar86 + 0x68);
      fVar24 = *(float *)(lVar86 + 0x44);
      fVar25 = *(float *)(lVar86 + 0x48);
      fVar26 = *(float *)(lVar86 + 100);
      fVar27 = *(float *)(lVar86 + 0x68);
      fVar82 = fVar12 * *(float *)(lVar86 + 0x60);
      fVar28 = *(float *)(lVar86 + 0x70);
      fVar29 = *(float *)(lVar86 + 0x74);
      fVar30 = *(float *)(lVar86 + 0x78);
      fVar83 = fVar11 * *(float *)(lVar86 + 0x50) + fVar10 * *(float *)(lVar86 + 0x40) + fVar82;
      fVar31 = *(float *)(lVar86 + 0x70);
      fVar32 = *(float *)(lVar86 + 0x74);
      fVar33 = *(float *)(lVar86 + 0x78);
      bVar80 = *(byte *)(local_d8 + 4) & 0x40;
      if ((bVar80 == 0) && (uVar78 != 0xffffffff)) {
        uVar78 = iVar2 << 0x16 | uVar78 & 0x3fffff;
      }
      uVar79 = local_d8[2];
      if ((bVar80 == 0) && (uVar79 != 0xffffffff)) {
        uVar79 = iVar2 << 0x16 | uVar79 & 0x3fffff;
      }
      fVar81 = DAT_1467f06ec;
      fVar5 = DAT_1467f06ec;
      if ((*(byte *)(local_d8 + 4) & 0x10) == 0) {
        lVar4 = *(longlong *)(lVar86 + 0x18);
        lVar86 = lVar4 + 0x90;
        uVar84 = *(undefined8 *)(lVar4 + 0x48);
        uVar73 = FUN_14384fb00(*(undefined8 *)(lVar4 + 0x18),*(undefined4 *)(lVar4 + 0x20),
                               lVar4 + 0xb0,lVar4 + 0xd0,uVar84,lVar4 + 0x120,lVar4 + 0x140,lVar86,
                               CONCAT44(uVar85,param_4) & 0xffffffff003fffff,
                               CONCAT44(uVar87,*(undefined4 *)(lVar4 + 0x50)),&local_c0);
        uVar85 = (undefined4)((ulonglong)uVar84 >> 0x20);
        uVar87 = (undefined4)((ulonglong)lVar86 >> 0x20);
        thunk_FUN_143719c70(0x44c76fcc);
        pfVar77 = &local_e8;
        pfVar89 = &local_e4;
        FUN_14389a790(param_3,param_4,uVar73,local_c0,CONCAT44(uVar85,uVar3),local_d8,local_e0,
                      CONCAT44(uVar87,param_5),pfVar89,pfVar77);
        uVar85 = (undefined4)((ulonglong)pfVar89 >> 0x20);
        uVar87 = (undefined4)((ulonglong)pfVar77 >> 0x20);
        if (local_e4 == 0.0) {
          local_e4 = -1.0;
        }
        fVar81 = local_e8;
        fVar82 = local_e8;
        fVar5 = local_e4;
        if (local_e8 == 0.0) {
          local_e8 = -1.0;
          fVar81 = local_e8;
          fVar82 = local_e8;
        }
      }
      local_d0 = (undefined4 *)0x0;
      lVar86 = *(longlong *)((ulonglong)(uVar79 >> 0x16) * 0x100 + *(longlong *)(param_2 + 0x38));
      lVar4 = *(longlong *)(lVar86 + 0x18);
      in_stack_ffffffffffffff00 = CONCAT44(uVar87,*(undefined4 *)(lVar4 + 0x60));
      in_stack_fffffffffffffef8 = CONCAT44(uVar85,uVar79) & 0xffffffff003fffff;
      piVar74 = (int *)FUN_14384fa30(*(undefined8 *)(lVar4 + 0x28),fVar82,lVar4 + 0xc0,lVar4 + 0xe0,
                                     *(undefined8 *)(lVar4 + 0x58),lVar4 + 0x130,lVar4 + 0x150,
                                     lVar4 + 0x70,in_stack_fffffffffffffef8,
                                     in_stack_ffffffffffffff00,&local_d0);
      iVar2 = *(int *)(lVar4 + 0x40);
      iVar71 = *piVar74;
      if (iVar71 < iVar2) {
        pfVar77 = (float *)((longlong)iVar71 * 0x10 + *(longlong *)(lVar4 + 0x38));
      }
      else {
        pfVar77 = (float *)((longlong)(iVar71 - iVar2) * 0x10 + *(longlong *)(lVar4 + 0xf0));
      }
      iVar71 = piVar74[1];
      fVar82 = *pfVar77;
      fVar34 = pfVar77[1];
      fVar35 = pfVar77[2];
      if (iVar71 < iVar2) {
        pfVar77 = (float *)((longlong)iVar71 * 0x10 + *(longlong *)(lVar4 + 0x38));
      }
      else {
        pfVar77 = (float *)((longlong)(iVar71 - iVar2) * 0x10 + *(longlong *)(lVar4 + 0xf0));
      }
      fVar36 = *pfVar77;
      fVar37 = pfVar77[1];
      fVar38 = pfVar77[2];
      fVar39 = *(float *)(lVar86 + 0x50);
      fVar40 = *(float *)(lVar86 + 0x54);
      fVar41 = *(float *)(lVar86 + 0x58);
      fVar42 = *(float *)(lVar86 + 0x5c);
      lVar4 = *(longlong *)(param_1 + 4);
      fVar43 = *(float *)(lVar86 + 0x40);
      fVar44 = *(float *)(lVar86 + 0x44);
      fVar45 = *(float *)(lVar86 + 0x48);
      fVar46 = *(float *)(lVar86 + 0x4c);
      fVar47 = *(float *)(lVar86 + 0x60);
      fVar48 = *(float *)(lVar86 + 100);
      fVar49 = *(float *)(lVar86 + 0x68);
      fVar50 = *(float *)(lVar86 + 0x6c);
      fVar51 = *(float *)(lVar86 + 0x40);
      fVar52 = *(float *)(lVar86 + 0x44);
      fVar53 = *(float *)(lVar86 + 0x48);
      fVar54 = *(float *)(lVar86 + 0x4c);
      fVar55 = *(float *)(lVar86 + 0x50);
      fVar56 = *(float *)(lVar86 + 0x54);
      fVar57 = *(float *)(lVar86 + 0x58);
      fVar58 = *(float *)(lVar86 + 0x5c);
      fVar59 = *(float *)(lVar86 + 0x60);
      fVar60 = *(float *)(lVar86 + 100);
      fVar61 = *(float *)(lVar86 + 0x68);
      fVar62 = *(float *)(lVar86 + 0x6c);
      fVar63 = *(float *)(lVar86 + 0x70);
      fVar64 = *(float *)(lVar86 + 0x74);
      fVar65 = *(float *)(lVar86 + 0x78);
      fVar66 = *(float *)(lVar86 + 0x7c);
      fVar67 = *(float *)(lVar86 + 0x70);
      fVar68 = *(float *)(lVar86 + 0x74);
      fVar69 = *(float *)(lVar86 + 0x78);
      fVar70 = *(float *)(lVar86 + 0x7c);
      *(int *)(lVar4 + lVar76) = *local_d8;
      *(int *)(lVar4 + 4 + lVar76) = local_d8[1];
      *(int *)(lVar4 + 8 + lVar76) = local_d8[2];
      *(int *)(lVar4 + 0xc + lVar76) = local_d8[3];
      *(char *)(lVar4 + 0x10 + lVar76) = (char)local_d8[4];
      *(undefined1 *)(lVar4 + 0x11 + lVar76) = *(undefined1 *)((longlong)local_d8 + 0x11);
      *(undefined2 *)(lVar4 + 0x12 + lVar76) = *(undefined2 *)((longlong)local_d8 + 0x12);
      pfVar77 = (float *)(lVar4 + 0x30 + lVar76);
      *pfVar77 = fVar8 * fVar13 + fVar7 * fVar16 + fVar9 * fVar21 + fVar28;
      pfVar77[1] = fVar8 * fVar14 + fVar7 * fVar17 + fVar9 * fVar22 + fVar29;
      pfVar77[2] = fVar8 * fVar15 + fVar7 * fVar18 + fVar9 * fVar23 + fVar30;
      pfVar77[3] = fVar5;
      pfVar77 = (float *)(lVar4 + 0x40 + lVar76);
      *pfVar77 = fVar83 + fVar31;
      pfVar77[1] = fVar11 * fVar19 + fVar10 * fVar24 + fVar12 * fVar26 + fVar32;
      pfVar77[2] = fVar11 * fVar20 + fVar10 * fVar25 + fVar12 * fVar27 + fVar33;
      pfVar77[3] = fVar81;
      *(int *)(lVar4 + 0x14 + lVar76) = *piVar74;
      *(int *)(lVar4 + 0x18 + lVar76) = piVar74[1];
      *(int *)(lVar4 + 0x1c + lVar76) = piVar74[2];
      *(int *)(lVar4 + 0x20 + lVar76) = piVar74[3];
      *(char *)(lVar4 + 0x24 + lVar76) = (char)piVar74[4];
      *(undefined1 *)(lVar4 + 0x25 + lVar76) = *(undefined1 *)((longlong)piVar74 + 0x11);
      *(undefined2 *)(lVar4 + 0x26 + lVar76) = *(undefined2 *)((longlong)piVar74 + 0x12);
      pfVar77 = (float *)(lVar4 + 0x50 + lVar76);
      *pfVar77 = fVar34 * fVar39 + fVar82 * fVar43 + fVar35 * fVar47 + fVar63;
      pfVar77[1] = fVar34 * fVar40 + fVar82 * fVar44 + fVar35 * fVar48 + fVar64;
      pfVar77[2] = fVar34 * fVar41 + fVar82 * fVar45 + fVar35 * fVar49 + fVar65;
      pfVar77[3] = fVar34 * fVar42 + fVar82 * fVar46 + fVar35 * fVar50 + fVar66;
      pfVar77 = (float *)(lVar4 + 0x60 + lVar76);
      *pfVar77 = fVar37 * fVar55 + fVar36 * fVar51 + fVar38 * fVar59 + fVar67;
      pfVar77[1] = fVar37 * fVar56 + fVar36 * fVar52 + fVar38 * fVar60 + fVar68;
      pfVar77[2] = fVar37 * fVar57 + fVar36 * fVar53 + fVar38 * fVar61 + fVar69;
      pfVar77[3] = fVar37 * fVar58 + fVar36 * fVar54 + fVar38 * fVar62 + fVar70;
      *(uint *)(lVar4 + 0xc + lVar76) = uVar78;
      *(uint *)(lVar4 + 8 + lVar76) = uVar79;
      *(uint *)(lVar4 + 0x20 + lVar76) = param_4;
      *(uint *)(lVar4 + 0x1c + lVar76) = uVar3;
      if (((*(byte *)(local_d8 + 4) & 0x10) == 0) || (local_e0 == (undefined4 *)0x0)) {
        *(undefined8 *)(lVar4 + 0x28 + lVar76) = 0;
      }
      else {
        *(undefined4 *)(lVar4 + 0x28 + lVar76) = *local_e0;
        *(undefined4 *)(lVar4 + 0x2c + lVar76) = *local_d0;
      }
      if (param_7 == 0) {
        uVar85 = param_6[1];
        uVar87 = param_6[2];
        uVar6 = param_6[3];
        puVar1 = (undefined4 *)(lVar4 + 0x70 + lVar76);
        *puVar1 = *param_6;
        puVar1[1] = uVar85;
        puVar1[2] = uVar87;
        puVar1[3] = uVar6;
      }
      else {
        local_e0 = (undefined4 *)(CONCAT44(local_e0._4_4_,uVar78) & 0xffffffff003fffff);
        FUN_143852420(local_98,*(undefined8 *)
                                ((ulonglong)(uVar78 >> 0x16) * 0x100 + *(longlong *)(param_2 + 0x38)
                                ),&local_e0,lVar4 + 0x70 + lVar76);
      }
      lVar76 = lVar76 + 0x80;
      local_c8 = local_c8 + 1;
      pvVar72 = local_b8;
      param_4 = uVar78;
    } while (local_c8 < local_a8[0]);
  }
  if (pvVar72 != (LPVOID)0x0) {
    FUN_14370d750(pvVar72,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438ba5f0 FUN_1438ba5f0 body=490 status=ok
// SIG undefined FUN_1438ba5f0(void)

undefined8 FUN_1438ba5f0(longlong param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  iVar1 = FUN_1438bb480(param_1,param_2,param_4);
  if ((iVar1 == 0) && (*param_2 == *(int *)(param_1 + 0x34))) {
    if (param_3 == 0) {
      uVar4 = 1;
    }
    else if (param_3 == 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0xffffffff;
    }
    FUN_1438b9390(&local_a8,param_1 + 0x80,uVar4,*(undefined4 *)(param_1 + 0x84));
    local_b8 = local_a8;
    uStack_b4 = uStack_a4;
    uStack_b0 = uStack_a0;
    uStack_ac = uStack_9c;
    FUN_1438b9690(&local_b8,0);
    iVar1 = FUN_1438bbdf0(&local_b8);
    if (iVar1 != 0) {
      do {
        puVar2 = (undefined8 *)
                 TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
                 ::GetBox(CONCAT44(uStack_9c,uStack_a0),uStack_a4);
        local_98 = *puVar2;
        uStack_90 = puVar2[1];
        local_88 = *(undefined4 *)(puVar2 + 2);
        uStack_84 = *(undefined4 *)((longlong)puVar2 + 0x14);
        uStack_80 = *(undefined4 *)(puVar2 + 3);
        uStack_7c = *(undefined4 *)((longlong)puVar2 + 0x1c);
        local_78 = *(undefined4 *)(puVar2 + 4);
        uStack_74 = *(undefined4 *)((longlong)puVar2 + 0x24);
        uStack_70 = *(undefined4 *)(puVar2 + 5);
        uStack_6c = *(undefined4 *)((longlong)puVar2 + 0x2c);
        puVar2 = (undefined8 *)
                 TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
                 ::GetBox(CONCAT44(uStack_ac,uStack_b0),uStack_b4);
        local_68 = *puVar2;
        uStack_60 = puVar2[1];
        local_58 = *(undefined4 *)(puVar2 + 2);
        uStack_54 = *(undefined4 *)((longlong)puVar2 + 0x14);
        uStack_50 = *(undefined4 *)(puVar2 + 3);
        uStack_4c = *(undefined4 *)((longlong)puVar2 + 0x1c);
        local_48 = *(undefined4 *)(puVar2 + 4);
        uStack_44 = *(undefined4 *)((longlong)puVar2 + 0x24);
        uStack_40 = *(undefined4 *)(puVar2 + 5);
        uStack_3c = *(undefined4 *)((longlong)puVar2 + 0x2c);
        FUN_1438bb030(param_1,&local_98,&local_68);
        iVar1 = FUN_1438bcb00(param_1,&local_98,param_2);
        if (iVar1 != 0) {
          local_38 = *(undefined8 *)param_2;
          uStack_30 = *(undefined8 *)(param_2 + 2);
          local_28 = *(undefined8 *)(param_2 + 4);
          uStack_20 = *(undefined8 *)(param_2 + 6);
          local_98 = *(undefined8 *)(param_1 + 0xe0);
          local_18 = *(undefined8 *)(param_2 + 8);
          uStack_10 = *(undefined8 *)(param_2 + 10);
          local_78 = *(undefined4 *)(param_1 + 0x100);
          uStack_74 = *(undefined4 *)(param_1 + 0x104);
          uStack_70 = *(undefined4 *)(param_1 + 0x108);
          uStack_6c = *(undefined4 *)(param_1 + 0x10c);
          local_88 = *(undefined4 *)(param_1 + 0xf0);
          uStack_84 = *(undefined4 *)(param_1 + 0xf4);
          uStack_80 = *(undefined4 *)(param_1 + 0xf8);
          uStack_7c = *(undefined4 *)(param_1 + 0xfc);
          uStack_90 = CONCAT71(uStack_90._1_7_,*(undefined1 *)(param_1 + 0xe8));
          FUN_1438b98b0(param_1,&local_98,&local_38);
          break;
        }
        FUN_1438b9690(&local_a8,0);
        FUN_1438b9690(&local_b8,0);
        iVar1 = FUN_1438bbdf0(&local_b8);
        uVar3 = local_68._5_1_;
        if (iVar1 == 0) {
          uVar3 = 2;
        }
        local_68._0_6_ = CONCAT15(uVar3,(undefined5)local_68);
        FUN_1438b98b0(param_1,&local_98,&local_68);
        iVar1 = FUN_1438bbdf0(&local_b8);
      } while (iVar1 != 0);
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 1438ba7e0 FUN_1438ba7e0 body=9 status=ok
// SIG undefined FUN_1438ba7e0(void)

void FUN_1438ba7e0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  return;
}


