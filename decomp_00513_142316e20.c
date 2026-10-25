// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142316e20 FUN_142316e20 body=1318 status=ok
// SIG undefined FUN_142316e20(void)

void FUN_142316e20(longlong param_1,undefined8 param_2,float param_3,int param_4,undefined8 *param_5
                  )

{
  ushort uVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint in_stack_ffffffffffffff28;
  uint in_stack_ffffffffffffff38;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [128];
  
  uVar9 = 0;
  *(undefined8 *)(param_1 + 0xe0) = param_2;
  *(float *)(param_1 + 0x168) = param_3;
  if (*(float *)(param_1 + 0x2c) == 0.0) goto LAB_1423170d4;
  if (*(float *)(param_1 + 0x16c) <= 0.0) {
    if (*(char *)(param_1 + 0x40) == '\x02') {
      fVar8 = *(float *)(param_1 + 0x44) * 6.2831855;
    }
    else if (*(char *)(param_1 + 0x40) == '\0') {
      iVar3 = rand();
      fVar8 = (float)iVar3 * 0.00019175345;
    }
    else {
      fVar8 = 0.0;
    }
    *(float *)(param_1 + 0xf4) = fVar8;
    if (*(char *)(param_1 + 0x50) == '\x02') {
      fVar8 = *(float *)(param_1 + 0x54) * 6.2831855;
    }
    else if (*(char *)(param_1 + 0x50) == '\0') {
      iVar3 = rand();
      fVar8 = (float)iVar3 * 0.00019175345;
    }
    else {
      fVar8 = 0.0;
    }
    *(float *)(param_1 + 0xf8) = fVar8;
    if (*(char *)(param_1 + 0x60) == '\x02') {
      fVar8 = *(float *)(param_1 + 100) * 6.2831855;
    }
    else if (*(char *)(param_1 + 0x60) == '\0') {
      iVar3 = rand();
      fVar8 = (float)iVar3 * 0.00019175345;
    }
    else {
      fVar8 = 0.0;
    }
    *(float *)(param_1 + 0xfc) = fVar8;
    if (*(char *)(param_1 + 0x70) == '\x02') {
      fVar8 = *(float *)(param_1 + 0x74) * 6.2831855;
    }
    else if (*(char *)(param_1 + 0x70) == '\0') {
      iVar3 = rand();
      fVar8 = (float)iVar3 * 0.00019175345;
    }
    else {
      fVar8 = 0.0;
    }
    *(float *)(param_1 + 0xe8) = fVar8;
    if (*(char *)(param_1 + 0x80) == '\x02') {
      fVar8 = *(float *)(param_1 + 0x84) * 6.2831855;
    }
    else if (*(char *)(param_1 + 0x80) == '\0') {
      iVar3 = rand();
      fVar8 = (float)iVar3 * 0.00019175345;
    }
    else {
      fVar8 = 0.0;
    }
    *(float *)(param_1 + 0xec) = fVar8;
    if (*(char *)(param_1 + 0x90) == '\x02') {
      fVar8 = *(float *)(param_1 + 0x94) * 6.2831855;
    }
    else if (*(char *)(param_1 + 0x90) == '\0') {
      iVar3 = rand();
      fVar8 = (float)iVar3 * 0.00019175345;
    }
    else {
      fVar8 = 0.0;
    }
    *(float *)(param_1 + 0xf0) = fVar8;
    if (*(char *)(param_1 + 0xa0) == '\x02') {
      fVar8 = *(float *)(param_1 + 0xa4) * 6.2831855;
    }
    else if (*(char *)(param_1 + 0xa0) == '\0') {
      iVar3 = rand();
      fVar8 = (float)iVar3 * 0.00019175345;
    }
    else {
      fVar8 = 0.0;
    }
    *(undefined8 *)(param_1 + 0x104) = *(undefined8 *)(param_1 + 0xe8);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0xf4);
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0xfc);
    *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x100) = fVar8;
    *(float *)(param_1 + 0x11c) = fVar8;
    if (*(float *)(param_1 + 0x30) <= 0.0) goto LAB_1423170d4;
    *(ushort *)(param_1 + 0xcc) = *(ushort *)(param_1 + 0xcc) | 1;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0xcc);
    *(float *)(param_1 + 0x16c) = *(float *)(param_1 + 0x2c);
    if ((uVar1 & 2) == 0) goto LAB_1423170d4;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    if (0.0 < *(float *)(param_1 + 0x30)) {
      *(float *)(param_1 + 0xd4) = *(float *)(param_1 + 0x30);
      *(ushort *)(param_1 + 0xcc) = uVar1 & 0xfffd | 1;
      goto LAB_1423170d4;
    }
    *(ushort *)(param_1 + 0xcc) = uVar1 & 0xfffc;
  }
  *(undefined4 *)(param_1 + 0xd4) = 0;
LAB_1423170d4:
  lVar5 = *(longlong *)(param_1 + 0xc0);
  if (lVar5 != 0) {
    uVar7 = *(uint *)(param_1 + 200) & 1;
    if (*(longlong *)(param_1 + 0x170) == 0) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = *(undefined4 *)(param_1 + 0xb8);
      }
      param_3 = param_3 * *(float *)(param_1 + 0xac);
      if (0.0 < param_3) {
        plVar2 = *(longlong **)(param_1 + 0xe0);
        if (plVar2 == (longlong *)0x0) {
          FUN_1417846f0(param_1,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
          uVar4 = UCameraAnimInst::GetPrivateStaticClass();
          uVar10 = 0;
          lVar5 = FUN_1417985e0(uVar4,param_1,0,0,0,0,in_stack_ffffffffffffff28 & 0xffffff00,0,
                                in_stack_ffffffffffffff38 & 0xffffff00);
          *(longlong *)(param_1 + 0x170) = lVar5;
          if (lVar5 != 0) {
            FUN_1422f5010(lVar5,*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0x160),
                          *(undefined4 *)(param_1 + 0xa8),param_3,
                          CONCAT44(uVar10,*(undefined4 *)(param_1 + 0xb0)),
                          *(undefined4 *)(param_1 + 0xb4),(char)uVar7,uVar7,uVar9);
            local_a8 = *param_5;
            local_a0 = *(undefined4 *)(param_5 + 1);
            UCameraAnimInst::SetPlaySpace(*(undefined8 *)(param_1 + 0x170),param_4,&local_a8);
          }
        }
        else {
          local_a8 = *param_5;
          local_a0 = *(undefined4 *)(param_5 + 1);
          uVar4 = (**(code **)(*plVar2 + 0x868))
                            (plVar2,lVar5,*(undefined4 *)(param_1 + 0xa8),param_3,
                             *(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb4),uVar7,
                             (char)uVar7,uVar9,param_4,&local_a8);
          *(undefined8 *)(param_1 + 0x170) = uVar4;
        }
      }
    }
    else {
      if (uVar7 != 0) {
        uVar9 = *(undefined4 *)(param_1 + 0xb8);
      }
      UCameraAnimInst::Update
                (*(longlong *)(param_1 + 0x170),lVar5,param_3 * *(float *)(param_1 + 0xac),
                 *(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb4),uVar9);
    }
  }
  *(int *)(param_1 + 0xd0) = param_4;
  if (param_4 == 2) {
    puVar6 = (undefined8 *)FRotationMatrix::FRotationMatrix(local_98,param_5);
    uVar4 = puVar6[1];
    *(undefined8 *)(param_1 + 0x120) = *puVar6;
    *(undefined8 *)(param_1 + 0x128) = uVar4;
    uVar4 = puVar6[3];
    *(undefined8 *)(param_1 + 0x130) = puVar6[2];
    *(undefined8 *)(param_1 + 0x138) = uVar4;
    uVar4 = puVar6[5];
    *(undefined8 *)(param_1 + 0x140) = puVar6[4];
    *(undefined8 *)(param_1 + 0x148) = uVar4;
    uVar4 = puVar6[7];
    *(undefined8 *)(param_1 + 0x150) = puVar6[6];
    *(undefined8 *)(param_1 + 0x158) = uVar4;
  }
  FUN_14290f6b0(param_1);
  return;
}



// FUNCTION 142317350 FUN_142317350 body=170 status=ok
// SIG undefined FUN_142317350(void)

void FUN_142317350(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if ((*(byte *)(lVar1 + 0x830) & 0x80) == 0) {
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if ((*(uint *)(lVar1 + 0x830) & 0x100) == 0) {
      lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
      *(uint *)(lVar2 + 0x830) =
           *(uint *)(lVar2 + 0x830) ^ (~*(uint *)(lVar1 + 0x830) ^ *(uint *)(lVar2 + 0x830)) & 0x100
      ;
      return;
    }
  }
  lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  *(uint *)(lVar1 + 0x830) = *(uint *)(lVar1 + 0x830) & 0xffffff7f;
  lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  *(uint *)(lVar1 + 0x830) = *(uint *)(lVar1 + 0x830) & 0xfffffeff;
  return;
}



// FUNCTION 142317400 thunk_FUN_1426a43a0 body=5 status=ok
// SIG undefined thunk_FUN_1426a43a0(void)

void thunk_FUN_1426a43a0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = param_1[0x92];
  param_1[0x92] = param_2;
  (**(code **)(*param_1 + 0x600))();
  lVar6 = param_1[0x92];
  if (*(longlong *)(lVar6 + 0x460) != 0) {
    param_1[0x8f] = *(longlong *)(lVar6 + 0x460);
  }
  if (lVar6 != 0) {
    lVar4 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      iVar3 = FUN_142235230(param_1);
      if (iVar3 != 0) {
        FUN_14223ef90(param_1,1);
        FUN_14223d640(param_1,1);
      }
      goto LAB_1426a447c;
    }
  }
  plVar5 = (longlong *)FUN_1429d7ab0();
  lVar6 = plVar5[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 0x368))(plVar5);
    lVar6 = plVar5[0x1f];
  }
  FUN_142225f80(param_1,lVar6);
LAB_1426a447c:
  if (lVar1 != param_2) {
    FUN_1429d7d90(param_1,param_1[0x92]);
  }
  return;
}



// FUNCTION 142317410 FUN_142317410 body=299 status=ok
// SIG undefined FUN_142317410(void)

void FUN_142317410(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  FUN_1426a45e0();
  iVar3 = *(int *)((longlong)param_1 + 0xc);
  if (iVar3 < (int)DAT_1469e91c4) {
    uVar5 = iVar3 >> 0x1f & 0xffff;
    uVar2 = iVar3 + uVar5;
    lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar4 = 0;
  }
  if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
    lVar4 = param_1[0x98];
    if (lVar4 != 0) {
      local_20 = *(undefined4 *)(lVar4 + 0x200);
      local_28 = *(undefined8 *)(lVar4 + 0x1f8);
      local_10 = *(undefined4 *)(lVar4 + 500);
      local_18 = *(undefined8 *)(lVar4 + 0x1ec);
      (**(code **)(*param_1 + 0x840))(param_1,&local_18,&local_28);
      if (((*(byte *)(param_1[0x98] + 0x3c) & 2) != 0) && (lVar4 = param_1[0x99], lVar4 != 0)) {
        FTickFunction::AddPrerequisite(param_1[0x98] + 0x30,lVar4,lVar4 + 0x30);
      }
    }
    if ((param_1[0x99] != 0) && (param_1[0x9a] != 0)) {
      FUN_14237baf0();
    }
    if (param_1[0x92] == 0) {
      iVar3 = FUN_142235230(param_1);
      if (((iVar3 != 3) && (plVar1 = (longlong *)param_1[0x99], plVar1 != (longlong *)0x0)) &&
         ((*(byte *)(plVar1 + 0x60) & 0x80) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014231752e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x7a8))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 142317540 FUN_142317540 body=88 status=ok
// SIG undefined FUN_142317540(void)

void FUN_142317540(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  if ((*(char *)(param_1 + 0x128) == '\x01') && (*(longlong *)(param_1 + 0x4c8) != 0)) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x4c8) + 0x4b4);
    *puVar1 = *puVar1 | 0x40;
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x4c8) + 0x4b4);
    if (((char)uVar2 < '\0') || (DAT_146aefca0 != *(char *)(param_1 + 0x564))) {
      uVar3 = 0x80;
    }
    else {
      uVar3 = 0;
    }
    *(uint *)(*(longlong *)(param_1 + 0x4c8) + 0x4b4) = uVar2 & 0xffffff7f | uVar3;
  }
  FUN_142238870();
  return;
}



// FUNCTION 1423175a0 FUN_1423175a0 body=389 status=ok
// SIG undefined FUN_1423175a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423175a0(longlong *param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [16];
  
  if (((char)param_1[0x25] == '\x01') &&
     (((param_1[0xa1] == 0 || (*(char *)(param_1[0xa1] + 0x24e) != '\x02')) && (param_1[0x99] != 0))
     )) {
    lVar2 = param_1[0x2d];
    if (lVar2 == 0) {
      local_48 = _DAT_1468b5d90;
      local_40 = DAT_1468b5d98;
    }
    else {
      local_48 = *(undefined8 *)(lVar2 + 0x220);
      local_40 = *(undefined4 *)(lVar2 + 0x228);
    }
    local_38 = local_48;
    local_30 = local_40;
    FUN_142436ac0(&local_48,param_1 + 0x16,param_1);
    if (param_1[0x2d] == 0) {
      local_1c = 0x3f800000;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
    }
    else {
      auVar1 = *(undefined1 (*) [16])(param_1[0x2d] + 0x210);
      local_24 = auVar1._4_4_;
      local_28 = auVar1._0_4_;
      local_20 = auVar1._8_4_;
      local_1c = auVar1._12_4_;
    }
    *(uint *)(param_1[0x99] + 0x300) = *(uint *)(param_1[0x99] + 0x300) & 0xffffefff;
    lVar2 = *(longlong *)(param_1[0x99] + 0x218);
    uVar3 = FRotator::Quaternion((longlong)param_1 + 0xbc,local_18);
    (**(code **)(lVar2 + 0x20))(param_1[0x99] + 0x218,&local_38,&local_28,&local_48,uVar3);
    (**(code **)(*param_1 + 0x948))(param_1,&local_38,&local_28);
  }
  return;
}



// FUNCTION 142317770 FUN_142317770 body=1841 status=ok
// SIG undefined FUN_142317770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142317770(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  void *pvVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint7 uVar15;
  undefined8 *puVar13;
  undefined8 uVar14;
  char cVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 local_res8;
  longlong local_68;
  float fStack_60;
  float fStack_5c;
  longlong local_48;
  undefined4 local_40;
  longlong *plVar19;
  
  FUN_1426a4bf0();
  if ((param_1[0x99] == 0) ||
     ((cVar6 = FRootMotionSourceGroup::HasActiveRootMotionSources(param_1[0x99] + 0x628),
      cVar6 == '\0' &&
      (((longlong *)param_1[0x98] == (longlong *)0x0 ||
       (cVar6 = (**(code **)(*(longlong *)param_1[0x98] + 0x9f0))(), cVar6 == '\0')))))) {
    iVar8 = 0;
    *(undefined1 *)(param_1 + 0xe4) = 0;
    param_1[0xe5] = 0;
    FRootMotionSourceGroup::Clear(param_1 + 0xed);
    local_res8 = 0;
    param_1[0x110] = 0;
    *(undefined4 *)(param_1 + 0x112) = 0;
    if (*(int *)((longlong)param_1 + 0x894) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x111,0);
    }
    pvVar5 = ThreadLocalStoragePointer;
    uVar17 = (ulonglong)_tls_index;
    *(undefined1 *)(param_1 + 0x113) = 0;
    if ((*(int *)(*(longlong *)((longlong)pvVar5 + uVar17 * 8) + 0x38) < DAT_146aefd40) &&
       (_Init_thread_header(&DAT_146aefd40), DAT_146aefd40 == -1)) {
      uVar14 = APostProcessVolume::GetPrivateStaticClass();
      APostProcessVolume::GetPrivateStaticClass();
      puVar13 = (undefined8 *)FName::FName(&local_res8,L"RepRootMotion",1);
      DAT_146aefd38 = FUN_1405dfb00(uVar14,*puVar13);
      _Init_thread_footer(&DAT_146aefd40);
    }
    if (0 < *(int *)(DAT_146aefd38 + 0x30)) {
      do {
        (**(code **)*param_2)(param_2,*(short *)(DAT_146aefd38 + 0x40) + (short)iVar8,0);
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(DAT_146aefd38 + 0x30));
    }
  }
  else {
    plVar19 = (longlong *)0x0;
    plVar10 = plVar19;
    if ((param_1[0x98] != 0) && (lVar9 = FUN_1423ac7e0(), lVar9 != 0)) {
      FUN_1423ac7e0(param_1[0x98]);
      plVar10 = (longlong *)FUN_142274500();
    }
    *(undefined1 *)(param_1 + 0xe4) = 1;
    if ((param_1[0x9b] == 0) || (*(char *)(param_1[0x9b] + 0x24e) != '\x02')) {
      cVar6 = '\0';
    }
    else {
      cVar6 = '\x01';
    }
    *(char *)(param_1 + 0xec) = cVar6;
    if (((*(char *)((longlong)param_1 + 0x501) == '\0') || (param_1[0x9b] == 0)) ||
       (*(char *)(param_1[0x9b] + 0x24e) != '\x02')) {
      cVar16 = '\0';
    }
    else {
      cVar16 = '\x01';
    }
    *(char *)((longlong)param_1 + 0x761) = cVar16;
    if (cVar6 == '\0') {
      lVar9 = param_1[0x2d];
      if (lVar9 == 0) {
        local_68 = _DAT_1468b5d90;
        fStack_60 = (float)DAT_1468b5d98;
      }
      else {
        local_68 = *(longlong *)(lVar9 + 0x220);
        fStack_60 = *(float *)(lVar9 + 0x228);
      }
      local_40 = fStack_60;
      local_48 = local_68;
      lVar9 = (**(code **)(*param_1 + 0x148))(param_1);
      plVar11 = (longlong *)FRepMovement::RebaseOntoZeroOrigin(&local_68,&local_48,lVar9 + 0x7bc);
      cVar16 = *(char *)((longlong)param_1 + 0x761);
    }
    else {
      plVar11 = &local_68;
      local_68 = param_1[0x9d];
      fStack_60 = (float)(int)param_1[0x9e];
    }
    lVar9 = plVar11[1];
    *(longlong *)((longlong)param_1 + 0x734) = *plVar11;
    *(int *)((longlong)param_1 + 0x73c) = (int)lVar9;
    if (cVar16 == '\0') {
      lVar1 = param_1[0x2d];
      if (lVar1 == 0) {
        uVar20 = (undefined4)DAT_1468b5da0;
        uVar21 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
        local_40 = DAT_1468b5da8;
      }
      else {
        fVar4 = *(float *)(lVar1 + 0x210);
        local_68 = *(longlong *)(lVar1 + 0x210);
        fStack_60 = *(float *)(lVar1 + 0x218);
        fStack_5c = *(float *)(lVar1 + 0x21c);
        auVar3._4_4_ = -(uint)(*(float *)(lVar1 + 0x214) != *(float *)(lVar1 + 0x254));
        auVar3._0_4_ = -(uint)(fVar4 != *(float *)(lVar1 + 0x250));
        auVar3._8_4_ = -(uint)(fStack_60 != *(float *)(lVar1 + 600));
        auVar3._12_4_ = -(uint)(fStack_5c != *(float *)(lVar1 + 0x25c));
        iVar8 = movmskps((int)lVar9,auVar3);
        if (iVar8 != 0) {
          *(float *)(lVar1 + 0x250) = fVar4;
          *(float *)(lVar1 + 0x254) = *(float *)(lVar1 + 0x214);
          *(float *)(lVar1 + 600) = fStack_60;
          *(float *)(lVar1 + 0x25c) = fStack_5c;
          puVar13 = (undefined8 *)FQuat::Rotator(&local_68,&local_48);
          *(undefined8 *)(lVar1 + 0x260) = *puVar13;
          *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar13 + 1);
        }
        uVar20 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
        uVar21 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
        local_40 = *(undefined4 *)(lVar1 + 0x268);
      }
      local_48 = CONCAT44(uVar21,uVar20);
      fStack_60 = (float)local_40;
      plVar11 = &local_68;
      local_68 = CONCAT44(uVar21,uVar20);
    }
    else {
      local_40 = *(undefined4 *)((longlong)param_1 + 0x4fc);
      plVar11 = &local_48;
      local_48 = *(longlong *)((longlong)param_1 + 0x4f4);
    }
    lVar9 = plVar11[1];
    param_1[0xe8] = *plVar11;
    *(int *)(param_1 + 0xe9) = (int)lVar9;
    param_1[0xea] = param_1[0x9b];
    param_1[0xeb] = param_1[0x9c];
    if (plVar10 == (longlong *)0x0) {
      param_1[0xe5] = 0;
    }
    else {
      param_1[0xe5] = *plVar10;
      if (*(char *)((longlong)plVar10 + 0x184) == '\0') {
        uVar20 = (undefined4)plVar10[0x25];
      }
      else {
        uVar20 = (undefined4)plVar10[0x30];
      }
      *(undefined4 *)(param_1 + 0xe6) = uVar20;
      plVar12 = (longlong *)FUN_14225e020(*plVar10,&local_68);
      plVar11 = param_1 + 0x111;
      plVar10 = plVar12 + 1;
      param_1[0x110] = *plVar12;
      if (plVar11 != plVar10) {
        if (*plVar11 != 0) {
          FMemory::Free();
        }
        *plVar11 = *plVar10;
        *plVar10 = 0;
        *(int *)(param_1 + 0x112) = (int)plVar12[2];
        *(undefined4 *)((longlong)param_1 + 0x894) = *(undefined4 *)((longlong)plVar12 + 0x14);
        plVar12[2] = 0;
      }
      *(char *)(param_1 + 0x113) = (char)plVar12[3];
      if (CONCAT44(fStack_5c,fStack_60) != 0) {
        FMemory::Free();
      }
    }
    FUN_14243f720(param_1 + 0xed,param_1[0x99] + 0x628);
    plVar10 = (longlong *)AMAU_BehaviorPlayer::GetVelocityAnimation(param_1[0x99],&local_48);
    uVar17 = (ulonglong)_tls_index;
    lVar9 = plVar10[1];
    param_1[0x10d] = *plVar10;
    *(int *)(param_1 + 0x10e) = (int)lVar9;
    pvVar5 = ThreadLocalStoragePointer;
    uVar20 = *(undefined4 *)(param_1[0x99] + 0x194);
    *(undefined8 *)((longlong)param_1 + 0x874) = *(undefined8 *)(param_1[0x99] + 0x18c);
    *(undefined4 *)((longlong)param_1 + 0x87c) = uVar20;
    if ((*(int *)(*(longlong *)((longlong)pvVar5 + uVar17 * 8) + 0x38) < DAT_146aefd30) &&
       (_Init_thread_header(&DAT_146aefd30), DAT_146aefd30 == -1)) {
      uVar14 = APostProcessVolume::GetPrivateStaticClass();
      APostProcessVolume::GetPrivateStaticClass();
      puVar13 = (undefined8 *)FName::FName(&local_res8,L"RepRootMotion",1);
      DAT_146aefd28 = FUN_1405dfb00(uVar14,*puVar13);
      _Init_thread_footer(&DAT_146aefd30);
    }
    if (0 < *(int *)(DAT_146aefd28 + 0x30)) {
      do {
        (**(code **)*param_2)(param_2,*(short *)(DAT_146aefd28 + 0x40) + (short)plVar19,1);
        uVar18 = (int)plVar19 + 1;
        plVar19 = (longlong *)(ulonglong)uVar18;
      } while ((int)uVar18 < *(int *)(DAT_146aefd28 + 0x30));
    }
  }
  *(uint *)((longlong)param_1 + 0x56c) = *(uint *)((longlong)param_1 + 0x56c) & 0xfffffffd;
  uVar18 = 0;
  if (0.0 < *(float *)((longlong)param_1 + 0x574)) {
    uVar18 = 2;
  }
  *(uint *)((longlong)param_1 + 0x56c) = *(uint *)((longlong)param_1 + 0x56c) | uVar18;
  lVar9 = 0;
  if (param_1[0x99] != 0) {
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1[0x99] + 0x38c);
    uVar7 = FUN_142344c40();
    lVar9 = param_1[0x99];
    *(undefined1 *)((longlong)param_1 + 0x564) = uVar7;
  }
  lVar1 = param_1[0x9b];
  param_1[0xa1] = param_1[0x9b];
  param_1[0xa2] = param_1[0x9c];
  param_1[0xa3] = param_1[0x9d];
  param_1[0xa4] = param_1[0x9e];
  param_1[0xa5] = param_1[0x9f];
  param_1[0xa6] = param_1[0xa0];
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x24e) == '\x02')) {
    uVar15 = (uint7)((ulonglong)lVar1 >> 8);
    if ((lVar9 == 0) ||
       (((*(float *)(lVar9 + 0x18c) == 0.0 && (*(float *)(lVar9 + 400) == 0.0)) &&
        (*(float *)(lVar9 + 0x194) == 0.0)))) {
      lVar9 = (ulonglong)uVar15 << 8;
    }
    else {
      lVar9 = CONCAT71(uVar15,1);
    }
    *(char *)((longlong)param_1 + 0x532) = (char)lVar9;
    if (((*(char *)((longlong)param_1 + 0x501) == '\0') || (lVar9 = param_1[0x9b], lVar9 == 0)) ||
       (*(char *)(lVar9 + 0x24e) != '\x02')) {
      lVar1 = param_1[0x2d];
      if (lVar1 == 0) {
        uVar21 = (undefined4)DAT_1468b5da0;
        uVar22 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
        uVar20 = DAT_1468b5da8;
      }
      else {
        fVar4 = *(float *)(lVar1 + 0x210);
        local_68 = *(longlong *)(lVar1 + 0x210);
        fStack_60 = *(float *)(lVar1 + 0x218);
        fStack_5c = *(float *)(lVar1 + 0x21c);
        auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != *(float *)(lVar1 + 0x214));
        auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != fVar4);
        auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_60);
        auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_5c);
        iVar8 = movmskps((int)lVar9,auVar2);
        if (iVar8 != 0) {
          *(float *)(lVar1 + 0x250) = fVar4;
          *(float *)(lVar1 + 0x254) = *(float *)(lVar1 + 0x214);
          *(float *)(lVar1 + 600) = fStack_60;
          *(float *)(lVar1 + 0x25c) = fStack_5c;
          puVar13 = (undefined8 *)FQuat::Rotator(&local_68,&local_48);
          *(undefined8 *)(lVar1 + 0x260) = *puVar13;
          *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar13 + 1);
        }
        uVar21 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
        uVar22 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
        uVar20 = *(undefined4 *)(lVar1 + 0x268);
      }
      *(ulonglong *)((longlong)param_1 + 0x524) = CONCAT44(uVar22,uVar21);
      *(undefined4 *)((longlong)param_1 + 0x52c) = uVar20;
    }
  }
  if ((*(char *)(param_1[0x99] + 0x3f4) != '\x01') &&
     ((*(uint *)(param_1[0x99] + 0x300) & 0x8000) == 0)) {
    *(undefined4 *)(param_1 + 0xac) = 0;
  }
  return;
}



// FUNCTION 142317eb0 FUN_142317eb0 body=3116 status=ok
// SIG undefined FUN_142317eb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142317eb0(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  float *pfVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar22;
  float fVar24;
  undefined1 auVar20 [16];
  float fVar23;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar21 [16];
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
  undefined8 local_238;
  float local_230;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  undefined1 local_218 [16];
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
  undefined8 local_1c8;
  float local_1c0;
  undefined8 local_1bc;
  float local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a4;
  undefined4 local_19c;
  undefined1 local_198;
  undefined4 local_194;
  undefined1 local_190 [24];
  undefined1 local_178 [144];
  longlong local_e8;
  undefined4 local_d8;
  
  FUN_1422399c0();
  local_194 = 0;
  lVar10 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar2 = param_1[0x98];
  if (((lVar2 == 0) || (lVar10 == 0)) || (cVar8 = FUN_1428cfb20(lVar10), cVar8 == '\0')) {
    lVar2 = param_1[0x2d];
    if (lVar2 == 0) {
      local_238 = _DAT_1468b5d90;
      local_230 = DAT_1468b5d98;
    }
    else {
      local_238 = *(undefined8 *)(lVar2 + 0x220);
      local_230 = *(float *)(lVar2 + 0x228);
    }
    local_1c8 = local_238;
    local_1c0 = local_230;
    uVar1 = DAT_1468b5da0;
    fVar35 = DAT_1468b5da8;
    local_1bc = DAT_1468b5da0;
    local_1b4 = DAT_1468b5da8;
    if (lVar2 != 0) {
      local_228 = *(float *)(lVar2 + 0x210);
      fStack_224 = *(float *)(lVar2 + 0x214);
      fStack_220 = *(float *)(lVar2 + 0x218);
      fStack_21c = *(float *)(lVar2 + 0x21c);
      auVar18._4_4_ = -(uint)(*(float *)(lVar2 + 0x254) != fStack_224);
      auVar18._0_4_ = -(uint)(*(float *)(lVar2 + 0x250) != local_228);
      auVar18._8_4_ = -(uint)(*(float *)(lVar2 + 600) != fStack_220);
      auVar18._12_4_ = -(uint)(*(float *)(lVar2 + 0x25c) != fStack_21c);
      iVar9 = movmskps(local_230,auVar18);
      if (iVar9 != 0) {
        *(float *)(lVar2 + 0x250) = local_228;
        *(float *)(lVar2 + 0x254) = fStack_224;
        *(float *)(lVar2 + 600) = fStack_220;
        *(float *)(lVar2 + 0x25c) = fStack_21c;
        puVar12 = (undefined8 *)FQuat::Rotator(&local_228,local_218);
        *(undefined8 *)(lVar2 + 0x260) = *puVar12;
        *(undefined4 *)(lVar2 + 0x268) = *(undefined4 *)(puVar12 + 1);
      }
      local_1bc = *(undefined8 *)(lVar2 + 0x260);
      local_1b4 = *(float *)(lVar2 + 0x268);
      uVar1 = local_1bc;
      fVar35 = local_1b4;
    }
  }
  else {
    lVar11 = FUN_14233f840(param_1[0x99]);
    if (((char)param_1[0x25] == '\x01') && (lVar11 != 0)) {
      fVar38 = *(float *)(lVar11 + 0xb8);
      fVar42 = (float)((ulonglong)*(undefined8 *)(lVar11 + 0xb0) >> 0x20);
      lVar2 = param_1[0x2d];
      local_238._0_4_ = (float)*(undefined8 *)(lVar11 + 0xb0);
      fVar43 = -*(float *)(lVar11 + 0xd4);
      fVar51 = -*(float *)(lVar11 + 0xd8);
      fVar52 = -*(float *)(lVar11 + 0xd0);
      fVar32 = fVar43 * fVar38 - fVar51 * fVar42;
      fVar32 = fVar32 + fVar32;
      fVar30 = fVar51 * (float)local_238 - fVar52 * fVar38;
      fVar28 = fVar52 * fVar42 - fVar43 * (float)local_238;
      fVar30 = fVar30 + fVar30;
      fVar28 = fVar28 + fVar28;
      fVar35 = *(float *)(lVar11 + 0xdc);
      fVar53 = (float)local_238 + fVar35 * fVar32;
      if (lVar2 == 0) {
        local_238 = _DAT_1468b5d90;
        local_230 = DAT_1468b5d98;
      }
      else {
        local_238 = *(undefined8 *)(lVar2 + 0x220);
        local_230 = *(float *)(lVar2 + 0x228);
      }
      local_230 = fVar35 * fVar28 + fVar38 + (fVar52 * fVar30 - fVar43 * fVar32) + local_230;
      local_1c8 = CONCAT44(fVar42 + fVar35 * fVar30 + (fVar51 * fVar32 - fVar52 * fVar28) +
                           (float)((ulonglong)local_238 >> 0x20),
                           fVar53 + (fVar43 * fVar28 - fVar51 * fVar30) + (float)local_238);
      fVar35 = DAT_1468b5da8;
      uVar1 = DAT_1468b5da0;
      local_1c0 = local_230;
      if (lVar2 != 0) {
        local_228 = *(float *)(lVar2 + 0x210);
        fStack_224 = *(float *)(lVar2 + 0x214);
        fStack_220 = *(float *)(lVar2 + 0x218);
        fStack_21c = *(float *)(lVar2 + 0x21c);
        auVar14._4_4_ = -(uint)(*(float *)(lVar2 + 0x254) != fStack_224);
        auVar14._0_4_ = -(uint)(*(float *)(lVar2 + 0x250) != local_228);
        auVar14._8_4_ = -(uint)(*(float *)(lVar2 + 600) != fStack_220);
        auVar14._12_4_ = -(uint)(*(float *)(lVar2 + 0x25c) != fStack_21c);
        iVar9 = movmskps(local_230,auVar14);
        if (iVar9 != 0) {
          *(float *)(lVar2 + 0x250) = local_228;
          *(float *)(lVar2 + 0x254) = fStack_224;
          *(float *)(lVar2 + 600) = fStack_220;
          *(float *)(lVar2 + 0x25c) = fStack_21c;
          puVar12 = (undefined8 *)FQuat::Rotator(&local_228,local_190);
          *(undefined8 *)(lVar2 + 0x260) = *puVar12;
          *(undefined4 *)(lVar2 + 0x268) = *(undefined4 *)(puVar12 + 1);
        }
        fVar35 = *(float *)(lVar2 + 0x268);
        uVar1 = *(undefined8 *)(lVar2 + 0x260);
      }
      local_238 = uVar1;
      local_230 = fVar35;
      pfVar13 = (float *)FQuat::Rotator((float *)(lVar11 + 0xd0),local_218);
      local_1b4 = local_230 + pfVar13[2];
      local_1bc = CONCAT44((float)((ulonglong)uVar1 >> 0x20) + pfVar13[1],(float)uVar1 + *pfVar13);
      local_238 = uVar1;
      local_230 = local_1b4;
    }
    else {
      local_230 = *(float *)((longlong)param_1 + 0x544);
      uVar1 = *(undefined8 *)((longlong)param_1 + 0x53c);
      pfVar13 = (float *)(**(code **)(*param_1 + 0x858))(param_1,&local_228);
      fVar42 = fRam0000000146aefa58;
      fVar38 = fRam0000000146aefa54;
      fVar35 = _DAT_146aefa50;
      auVar16._0_4_ = (float)((uint)(float)DAT_1464aa788 & _DAT_146aefa70);
      auVar16._4_4_ = (float)((uint)DAT_1464aa788._4_4_ & uRam0000000146aefa74);
      auVar16._8_4_ = (float)((uint)DAT_1464aa790 & uRam0000000146aefa78);
      auVar16._12_4_ = 0;
      auVar20._4_4_ = -(uint)(fRam0000000146aefba4 < auVar16._4_4_);
      auVar20._0_4_ = -(uint)(_DAT_146aefba0 < auVar16._0_4_);
      auVar20._8_4_ = -(uint)(fRam0000000146aefba8 < auVar16._8_4_);
      auVar20._12_4_ = -(uint)(fRam0000000146aefbac < 0.0);
      iVar9 = movmskps((int)pfVar13,auVar20);
      fVar28 = _DAT_1468b5b70;
      fVar30 = fRam00000001468b5b74;
      fVar32 = fRam00000001468b5b78;
      fVar43 = fRam00000001468b5b7c;
      fVar51 = _DAT_1468b5b90;
      fVar52 = fRam00000001468b5b94;
      fVar53 = fRam00000001468b5b98;
      fVar26 = fRam00000001468b5b9c;
      fVar44 = _DAT_1468b5b80;
      fVar45 = fRam00000001468b5b84;
      fVar33 = fRam00000001468b5b88;
      if (iVar9 != 0) {
        fVar28 = *pfVar13 * _DAT_146aefb90;
        fVar30 = pfVar13[1] * fRam0000000146aefb94;
        fVar32 = pfVar13[2] * fRam0000000146aefb98;
        fVar43 = pfVar13[3] * fRam0000000146aefb9c;
        auVar4._4_4_ = DAT_1464aa788._4_4_;
        auVar4._0_4_ = (float)DAT_1464aa788;
        auVar4._8_4_ = DAT_1464aa790;
        auVar4._12_4_ = 0;
        auVar20 = rcpps(auVar16,auVar4);
        fVar51 = auVar20._0_4_;
        fVar52 = auVar20._4_4_;
        fVar53 = auVar20._8_4_;
        fVar26 = auVar20._12_4_;
        fVar51 = (fVar51 + fVar51) - fVar51 * fVar51 * (float)DAT_1464aa788;
        fVar52 = (fVar52 + fVar52) - fVar52 * fVar52 * DAT_1464aa788._4_4_;
        fVar53 = (fVar53 + fVar53) - fVar53 * fVar53 * DAT_1464aa790;
        fVar26 = (fVar26 + fVar26) - fVar26 * fVar26 * 0.0;
        fVar51 = (fVar51 + fVar51) - fVar51 * fVar51 * (float)DAT_1464aa788;
        fVar52 = (fVar52 + fVar52) - fVar52 * fVar52 * DAT_1464aa788._4_4_;
        fVar53 = (fVar53 + fVar53) - fVar53 * fVar53 * DAT_1464aa790;
        fVar26 = (fVar26 + fVar26) - fVar26 * fVar26 * 0.0;
        fVar51 = (float)((-(uint)((float)((uint)(float)DAT_1464aa788 & _DAT_146aefa70) <=
                                 _DAT_146aefba0) & (uint)fVar51 ^ (uint)fVar51) & _DAT_146aefb20);
        fVar52 = (float)((-(uint)((float)((uint)DAT_1464aa788._4_4_ & uRam0000000146aefa74) <=
                                 fRam0000000146aefba4) & (uint)fVar52 ^ (uint)fVar52) &
                        uRam0000000146aefb24);
        fVar53 = (float)((-(uint)((float)((uint)DAT_1464aa790 & uRam0000000146aefa78) <=
                                 fRam0000000146aefba8) & (uint)fVar53 ^ (uint)fVar53) &
                        uRam0000000146aefb28);
        fVar44 = fVar51 * (float)uVar1;
        fVar45 = fVar52 * (float)((ulonglong)uVar1 >> 0x20);
        fVar47 = fVar53 * local_230;
        fVar33 = fVar47 * fVar30 - fVar45 * fVar32;
        fVar36 = fVar44 * fVar32 - fVar47 * fVar28;
        fVar39 = fVar45 * fVar28 - fVar44 * fVar30;
        fVar33 = fVar33 + fVar33;
        fVar36 = fVar36 + fVar36;
        fVar39 = fVar39 + fVar39;
        fVar26 = (float)((-(uint)(0.0 <= fRam0000000146aefbac) & (uint)fVar26 ^ (uint)fVar26) &
                        uRam0000000146aefb2c);
        fVar44 = (float)((uint)(0.0 - ((fVar39 * fVar30 - fVar36 * fVar32) +
                                      fVar43 * fVar33 + fVar44)) & _DAT_146aefb20);
        fVar45 = (float)((uint)(0.0 - ((fVar33 * fVar32 - fVar39 * fVar28) +
                                      fVar43 * fVar36 + fVar45)) & uRam0000000146aefb24);
        fVar33 = (float)((uint)(0.0 - ((fVar36 * fVar28 - fVar33 * fVar30) +
                                      fVar43 * fVar39 + fVar47)) & uRam0000000146aefb28);
      }
      auVar20 = *(undefined1 (*) [16])(lVar2 + 0x230);
      fVar36 = auVar20._0_4_;
      fVar39 = auVar20._4_4_;
      fVar47 = auVar20._8_4_;
      auVar15._4_4_ = fVar52;
      auVar15._0_4_ = fVar51;
      auVar15._8_4_ = fVar53;
      auVar15._12_4_ = fVar26;
      fVar19 = *(float *)(lVar2 + 0x210);
      fVar25 = *(float *)(lVar2 + 0x214);
      fVar23 = *(float *)(lVar2 + 0x218);
      fVar27 = *(float *)(lVar2 + 0x21c);
      auVar16 = minps(auVar15,auVar20);
      auVar17._4_4_ = -(uint)(auVar16._4_4_ < fRam0000000146aefb84);
      auVar17._0_4_ = -(uint)(auVar16._0_4_ < _DAT_146aefb80);
      auVar17._8_4_ = -(uint)(auVar16._8_4_ < fRam0000000146aefb88);
      auVar17._12_4_ = -(uint)(auVar16._12_4_ < fRam0000000146aefb8c);
      iVar9 = movmskps(iVar9,auVar17);
      local_238 = uVar1;
      if (iVar9 == 0) {
        fVar36 = fVar36 * fVar44;
        fVar39 = fVar39 * fVar45;
        fVar47 = fVar47 * fVar33;
        local_228 = fVar43 * fVar19 * _DAT_146aefb50 + fVar28 * fVar27 +
                    fVar32 * fVar25 * _DAT_146aefb40 + fVar30 * fVar23 * _DAT_146aefb30;
        fStack_224 = fVar32 * fVar19 * fRam0000000146aefb54 + fVar30 * fVar27 +
                     fVar43 * fVar25 * fRam0000000146aefb44 + fVar28 * fVar23 * fRam0000000146aefb34
        ;
        fStack_220 = fVar30 * fVar19 * fRam0000000146aefb58 + fVar32 * fVar27 +
                     fVar28 * fVar25 * fRam0000000146aefb48 + fVar43 * fVar23 * fRam0000000146aefb38
        ;
        fStack_21c = fVar28 * fVar19 * fRam0000000146aefb5c + fVar43 * fVar27 +
                     fVar30 * fVar25 * fRam0000000146aefb4c + fVar32 * fVar23 * fRam0000000146aefb3c
        ;
        fVar42 = fVar47 * fVar25 - fVar39 * fVar23;
        fVar28 = fVar36 * fVar23 - fVar47 * fVar19;
        fVar30 = fVar39 * fVar19 - fVar36 * fVar25;
        fVar42 = fVar42 + fVar42;
        fVar28 = fVar28 + fVar28;
        fVar30 = fVar30 + fVar30;
        fVar35 = (fVar30 * fVar25 - fVar28 * fVar23) + fVar42 * fVar27 + fVar36 +
                 *(float *)(lVar2 + 0x220);
        fVar38 = (fVar42 * fVar23 - fVar30 * fVar19) + fVar28 * fVar27 + fVar39 +
                 *(float *)(lVar2 + 0x224);
        local_230 = (fVar28 * fVar19 - fVar42 * fVar25) + fVar30 * fVar27 + fVar47 +
                    *(float *)(lVar2 + 0x228);
      }
      else {
        fVar5 = *(float *)(lVar2 + 0x220);
        fVar6 = *(float *)(lVar2 + 0x224);
        fVar7 = *(float *)(lVar2 + 0x228);
        fVar22 = fVar25 + fVar25;
        fVar24 = fVar23 + fVar23;
        fVar31 = fVar19 * (fVar19 + fVar19);
        fVar46 = fVar27 * (fVar19 + fVar19);
        fVar54 = (fVar27 * fVar24 + fVar19 * fVar22) * fVar36;
        fVar55 = (fVar46 + fVar25 * fVar24) * fVar39;
        fVar56 = (fVar27 * fVar22 + fVar19 * fVar24) * fVar47;
        fVar34 = fVar39 * (fVar19 * fVar22 - fVar27 * fVar24);
        fVar37 = fVar47 * (fVar25 * fVar24 - fVar46);
        fVar40 = fVar36 * (fVar19 * fVar24 - fVar27 * fVar22);
        fVar46 = fVar30 + fVar30;
        fVar29 = fVar32 + fVar32;
        fVar19 = (float)((uint)((_DAT_146aefa50 - (fVar23 * fVar24 + fVar25 * fVar22)) * fVar36) &
                        _DAT_146aefb20);
        fVar23 = (float)((uint)((fRam0000000146aefa54 - (fVar23 * fVar24 + fVar31)) * fVar39) &
                        uRam0000000146aefb24);
        fVar25 = (float)((uint)((fRam0000000146aefa58 - (fVar25 * fVar22 + fVar31)) * fVar47) &
                        uRam0000000146aefb28);
        fVar27 = (float)((uint)((fRam0000000146aefa5c - (fVar31 + fVar31)) * auVar20._12_4_) &
                        uRam0000000146aefb2c);
        fVar24 = (fVar28 + fVar28) * fVar28;
        fVar22 = (fVar28 + fVar28) * fVar43;
        fVar48 = (fVar29 * fVar43 + fVar46 * fVar28) * fVar51;
        fVar49 = (fVar22 + fVar29 * fVar30) * fVar52;
        fVar50 = (fVar46 * fVar43 + fVar29 * fVar28) * fVar53;
        fVar31 = fVar52 * (fVar46 * fVar28 - fVar29 * fVar43);
        fVar22 = fVar53 * (fVar29 * fVar30 - fVar22);
        fVar41 = fVar51 * (fVar29 * fVar28 - fVar46 * fVar43);
        fVar28 = (float)((uint)((_DAT_146aefa50 - (fVar29 * fVar32 + fVar46 * fVar30)) * fVar51) &
                        _DAT_146aefb20);
        fVar32 = (float)((uint)((fRam0000000146aefa54 - (fVar29 * fVar32 + fVar24)) * fVar52) &
                        uRam0000000146aefb24);
        fVar30 = (float)((uint)((fRam0000000146aefa58 - (fVar46 * fVar30 + fVar24)) * fVar53) &
                        uRam0000000146aefb28);
        fVar43 = (float)((uint)((fRam0000000146aefa5c - (fVar24 + fVar24)) * fVar26) &
                        uRam0000000146aefb2c);
        local_208 = fVar48 * fVar34 + fVar28 * fVar19 + fVar41 * fVar56 + fVar43 * fVar5;
        fStack_204 = fVar48 * fVar23 + fVar28 * fVar54 + fVar41 * fVar37 + fVar43 * fVar6;
        fStack_200 = fVar48 * fVar55 + fVar28 * fVar40 + fVar41 * fVar25 + fVar43 * fVar7;
        fStack_1fc = fVar48 * fVar27 + fVar28 * fVar27 + fVar41 * fVar27 +
                     fVar43 * fRam0000000146aefa5c;
        local_1f8 = fVar32 * fVar34 + fVar31 * fVar19 + fVar49 * fVar56 + fVar43 * fVar5;
        fStack_1f4 = fVar32 * fVar23 + fVar31 * fVar54 + fVar49 * fVar37 + fVar43 * fVar6;
        fStack_1f0 = fVar32 * fVar55 + fVar31 * fVar40 + fVar49 * fVar25 + fVar43 * fVar7;
        fStack_1ec = fVar32 * fVar27 + fVar31 * fVar27 + fVar49 * fVar27 +
                     fVar43 * fRam0000000146aefa5c;
        local_1e8 = fVar22 * fVar34 + fVar50 * fVar19 + fVar30 * fVar56 + fVar43 * fVar5;
        fStack_1e4 = fVar22 * fVar23 + fVar50 * fVar54 + fVar30 * fVar37 + fVar43 * fVar6;
        fStack_1e0 = fVar22 * fVar55 + fVar50 * fVar40 + fVar30 * fVar25 + fVar43 * fVar7;
        fStack_1dc = fVar22 * fVar27 + fVar50 * fVar27 + fVar30 * fVar27 +
                     fVar43 * fRam0000000146aefa5c;
        local_1d8 = fVar45 * fVar34 + fVar44 * fVar19 + fVar33 * fVar56 +
                    fRam0000000146aefa5c * fVar5;
        fStack_1d4 = fVar45 * fVar23 + fVar44 * fVar54 + fVar33 * fVar37 +
                     fRam0000000146aefa5c * fVar6;
        fStack_1d0 = fVar45 * fVar55 + fVar44 * fVar40 + fVar33 * fVar25 +
                     fRam0000000146aefa5c * fVar7;
        fStack_1cc = fVar45 * fVar27 + fVar44 * fVar27 + fVar33 * fVar27 +
                     fRam0000000146aefa5c * fRam0000000146aefa5c;
        FMatrix::RemoveScaling(&local_208);
        fVar35 = (float)(-(uint)(_DAT_146aefb80 <= fVar36 * fVar51) &
                         (_DAT_146aefa40 ^ (uint)fVar35) ^ _DAT_146aefa40);
        fVar38 = (float)(-(uint)(fRam0000000146aefb84 <= fVar39 * fVar52) &
                         (uRam0000000146aefa44 ^ (uint)fVar38) ^ uRam0000000146aefa44);
        fVar42 = (float)(-(uint)(fRam0000000146aefb88 <= fVar47 * fVar53) &
                         (uRam0000000146aefa48 ^ (uint)fVar42) ^ uRam0000000146aefa48);
        local_208 = local_208 * fVar35;
        fStack_204 = fStack_204 * fVar35;
        fStack_200 = fStack_200 * fVar35;
        fStack_1f4 = fStack_1f4 * fVar38;
        fStack_1f0 = fStack_1f0 * fVar38;
        local_1f8 = local_1f8 * fVar38;
        fStack_1e4 = fStack_1e4 * fVar42;
        fStack_1e0 = fStack_1e0 * fVar42;
        local_1e8 = local_1e8 * fVar42;
        FQuat::FQuat(&local_228,&local_208);
        auVar21._0_4_ = local_228 * local_228 + fStack_220 * fStack_220;
        auVar21._4_4_ = fStack_224 * fStack_224 + fStack_21c * fStack_21c;
        auVar21._8_4_ = fStack_220 * fStack_220 + local_228 * local_228;
        auVar21._12_4_ = fStack_21c * fStack_21c + fStack_224 * fStack_224;
        fVar30 = auVar21._4_4_ + auVar21._0_4_;
        fVar32 = auVar21._8_4_ + auVar21._4_4_;
        fVar43 = auVar21._12_4_ + auVar21._8_4_;
        fVar51 = auVar21._0_4_ + auVar21._12_4_;
        auVar3._4_4_ = fVar32;
        auVar3._0_4_ = fVar30;
        auVar3._8_4_ = fVar43;
        auVar3._12_4_ = fVar51;
        auVar20 = rsqrtps(auVar21,auVar3);
        fVar35 = auVar20._0_4_;
        fVar38 = auVar20._4_4_;
        fVar42 = auVar20._8_4_;
        fVar28 = auVar20._12_4_;
        fVar35 = (_DAT_146aefb70 - fVar35 * fVar35 * fVar30 * _DAT_146aefb70) * fVar35 + fVar35;
        fVar38 = (fRam0000000146aefb74 - fVar38 * fVar38 * fVar32 * fRam0000000146aefb74) * fVar38 +
                 fVar38;
        fVar42 = (fRam0000000146aefb78 - fVar42 * fVar42 * fVar43 * fRam0000000146aefb78) * fVar42 +
                 fVar42;
        fVar28 = (fRam0000000146aefb7c - fVar28 * fVar28 * fVar51 * fRam0000000146aefb7c) * fVar28 +
                 fVar28;
        local_228 = (float)(((uint)(((_DAT_146aefb70 - fVar35 * fVar35 * fVar30 * _DAT_146aefb70) *
                                     fVar35 + fVar35) * local_228) ^ _DAT_146aefb60) &
                            -(uint)(1e-08 <= fVar30) ^ _DAT_146aefb60);
        fStack_224 = (float)(((uint)(((fRam0000000146aefb74 -
                                      fVar38 * fVar38 * fVar32 * fRam0000000146aefb74) * fVar38 +
                                     fVar38) * fStack_224) ^ uRam0000000146aefb64) &
                             -(uint)(1e-08 <= fVar32) ^ uRam0000000146aefb64);
        fStack_220 = (float)(((uint)(((fRam0000000146aefb78 -
                                      fVar42 * fVar42 * fVar43 * fRam0000000146aefb78) * fVar42 +
                                     fVar42) * fStack_220) ^ uRam0000000146aefb68) &
                             -(uint)(1e-08 <= fVar43) ^ uRam0000000146aefb68);
        fStack_21c = (float)(((uint)(((fRam0000000146aefb7c -
                                      fVar28 * fVar28 * fVar51 * fRam0000000146aefb7c) * fVar28 +
                                     fVar28) * fStack_21c) ^ uRam0000000146aefb6c) &
                             -(uint)(1e-08 <= fVar51) ^ uRam0000000146aefb6c);
        fVar35 = local_1d8;
        fVar38 = fStack_1d4;
        local_230 = fStack_1d0;
      }
      local_1c8 = CONCAT44(fVar38,fVar35);
      local_1c0 = local_230;
      puVar12 = (undefined8 *)FQuat::Rotator(&local_228,local_218);
      local_1bc = *puVar12;
      local_1b4 = *(float *)(puVar12 + 1);
    }
    uVar1 = local_238;
    fVar35 = local_230;
    if (((param_1[0x92] != 0) && ((char)param_1[0x25] == '\x02')) &&
       (iVar9 = FUN_142235230(param_1), uVar1 = local_238, fVar35 = local_230, iVar9 == 3)) {
      (**(code **)(*(longlong *)param_1[0x92] + 0x720))((longlong *)param_1[0x92],local_218);
      FUN_1426a9be0(param_1);
      uVar1 = local_238;
      fVar35 = local_230;
    }
  }
  local_230 = fVar35;
  local_238 = uVar1;
  puVar12 = (undefined8 *)(**(code **)(*param_1 + 0x308))(param_1,local_218);
  local_1b0 = *puVar12;
  local_1a8 = *(undefined4 *)(puVar12 + 1);
  if (param_1[0x99] == 0) {
    local_230 = DAT_1468b5d98;
    puVar12 = &local_238;
    local_238 = _DAT_1468b5d90;
  }
  else {
    puVar12 = (undefined8 *)AMAU_BehaviorPlayer::GetVelocityAnimation(param_1[0x99],local_218);
  }
  local_1a4 = *puVar12;
  local_19c = *(undefined4 *)(puVar12 + 1);
  local_198 = (undefined1)param_1[0x90];
  if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x108) != 0)) {
    local_194 = *(undefined4 *)(*(longlong *)(lVar10 + 0x108) + 0x548);
  }
  FUN_1416884c0(local_178,0,1);
  FUN_142328a30(local_178,&local_1c8);
  (**(code **)(*param_2 + 8))(param_2,local_e8,local_d8);
  if (local_e8 != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(local_178);
  return;
}



// FUNCTION 142318ae0 ProcessFrame body=683 status=ok
// SIG undefined ProcessFrame(void)

void FPerformanceTrackingChart::ProcessFrame(longlong param_1,double *param_2)

{
  char cVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  
  *(double *)(param_1 + 0x148) = param_2[1] + *(double *)(param_1 + 0x148);
  if (*(char *)(param_2 + 0xd) != '\0') {
    fVar5 = (float)(1.0 / *param_2);
    if (*DAT_146aefb18 != 0) {
      fVar5 = (float)((int)ROUND(fVar5 + fVar5 + 0.5) >> 1);
    }
    FHistogram::AddMeasurement(param_1 + 0x18,(double)fVar5);
    if (*(char *)((longlong)param_2 + 0x69) != '\0') {
      *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
      *(double *)(param_1 + 0xb8) = *(double *)(param_1 + 0xb8) + *param_2;
    }
    if (*(char *)((longlong)param_2 + 0x6a) != '\0') {
      *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
      *(double *)(param_1 + 0xc0) = *(double *)(param_1 + 0xc0) + *param_2;
    }
    if (*(char *)((longlong)param_2 + 0x6b) != '\0') {
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
      *(double *)(param_1 + 200) = *(double *)(param_1 + 200) + *param_2;
    }
    if (*(char *)((longlong)param_2 + 0x6c) != '\0') {
      dVar4 = *param_2;
      *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
      *(double *)(param_1 + 0xd0) = *(double *)(param_1 + 0xd0) + dVar4;
    }
    fVar3 = (float)FGenericPlatformMisc::GetDeviceTemperatureLevel();
    fVar5 = *(float *)(param_1 + 0x158);
    if (fVar3 <= *(float *)(param_1 + 0x158)) {
      fVar5 = fVar3;
    }
    if (fVar3 <= *(float *)(param_1 + 0x15c)) {
      fVar3 = *(float *)(param_1 + 0x15c);
    }
    *(float *)(param_1 + 0x158) = fVar5;
    *(float *)(param_1 + 0x15c) = fVar3;
    FHistogram::AddMeasurement(param_1 + 0x168,0xbff0000000000000,0xbff0000000000000);
  }
  *(double *)(param_1 + 0xd8) = param_2[4] + *(double *)(param_1 + 0xd8);
  *(double *)(param_1 + 0xe0) = param_2[5] + *(double *)(param_1 + 0xe0);
  *(double *)(param_1 + 0xe8) = param_2[6] + *(double *)(param_1 + 0xe8);
  *(double *)(param_1 + 0xf0) = param_2[7] + *(double *)(param_1 + 0xf0);
  *(double *)(param_1 + 0xf8) = *(double *)(param_1 + 0xf8) + param_2[0xb];
  *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + *(int *)(param_2 + 0xc);
  dVar4 = *(double *)(param_1 + 0x108);
  if (*(double *)(param_1 + 0x108) <= param_2[0xb]) {
    dVar4 = param_2[0xb];
  }
  *(double *)(param_1 + 0x108) = dVar4;
  *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + *(int *)((longlong)param_2 + 100);
  iVar2 = DAT_146ab6314;
  if (DAT_146ab6314 <= *(int *)(param_1 + 0x124)) {
    iVar2 = *(int *)(param_1 + 0x124);
  }
  *(int *)(param_1 + 0x124) = iVar2;
  iVar2 = DAT_146ab6314;
  if (*(int *)(param_1 + 0x128) <= DAT_146ab6314) {
    iVar2 = *(int *)(param_1 + 0x128);
  }
  *(int *)(param_1 + 0x128) = iVar2;
  *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + DAT_146ab6314;
  iVar2 = DAT_146ab6318;
  if (DAT_146ab6318 <= *(int *)(param_1 + 0x130)) {
    iVar2 = *(int *)(param_1 + 0x130);
  }
  *(int *)(param_1 + 0x130) = iVar2;
  iVar2 = DAT_146ab6318;
  if (*(int *)(param_1 + 0x134) <= DAT_146ab6318) {
    iVar2 = *(int *)(param_1 + 0x134);
  }
  *(int *)(param_1 + 0x134) = iVar2;
  *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + DAT_146ab6318;
  if (*(char *)((longlong)param_2 + 0x6d) != '\0') {
    FHistogram::AddMeasurement(param_1 + 0x48,*param_2,*param_2);
    cVar1 = *(char *)((longlong)param_2 + 0x6d);
    if (cVar1 == '\x02') {
      *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 1;
    }
    else if (cVar1 == '\x03') {
      *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + 1;
    }
    else if (cVar1 == '\x04') {
      *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 1;
    }
    else if (cVar1 == '\x05') {
      *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
    }
  }
  FHistogram::AddMeasurement(param_1 + 0x78,param_2[10],param_2[10]);
  return;
}



// FUNCTION 142318d90 FUN_142318d90 body=1409 status=ok
// SIG undefined FUN_142318d90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142318d90(longlong param_1,undefined4 *param_2,float *param_3,undefined ***param_4,
                       uint param_5,undefined4 *param_6,float *param_7,undefined ***param_8)

{
  undefined ***pppuVar1;
  char cVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong **pplVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint unaff_R12D;
  int iVar9;
  byte bVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_10218 [32];
  undefined ***pppuStack_101f8;
  undefined ***pppuStack_101f0;
  undefined4 *puStack_101e8;
  float *pfStack_101e0;
  undefined ***pppuStack_101d8;
  undefined1 uStack_101d0;
  undefined1 uStack_101c8;
  byte abStack_101b8 [2];
  undefined2 uStack_101b6;
  uint uStack_101b4;
  float fStack_101b0;
  float fStack_101ac;
  float fStack_101a8;
  uint uStack_101a4;
  undefined ***pppuStack_101a0;
  float fStack_10198;
  float fStack_10194;
  float fStack_10190;
  undefined ***pppuStack_10188;
  float *pfStack_10180;
  char *pcStack_10178;
  longlong lStack_10170;
  longlong lStack_10168;
  undefined4 uStack_10160;
  undefined4 uStack_1015c;
  undefined4 uStack_10158;
  undefined4 uStack_10154;
  undefined2 uStack_10150;
  undefined1 uStack_1014e;
  longlong *aplStack_10148 [3];
  undefined4 uStack_10130;
  undefined4 uStack_1012c;
  undefined4 uStack_10128;
  undefined4 uStack_10124;
  float afStack_10120 [7];
  char cStack_10101;
  undefined **ppuStack_10100;
  undefined8 uStack_100f8;
  undefined8 uStack_100f0;
  undefined4 uStack_100e8;
  undefined2 uStack_100e0;
  undefined8 uStack_100dc;
  undefined8 uStack_100d4;
  undefined4 uStack_100cc;
  undefined4 uStack_100c8;
  undefined4 uStack_100c4;
  undefined4 uStack_100c0;
  undefined4 uStack_100bc;
  undefined1 uStack_100b8;
  undefined1 *puStack_100b0;
  undefined8 uStack_100a8;
  undefined1 auStack_100a0 [32768];
  undefined1 local_80a0 [32768];
  undefined1 *local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_1468387a8 ^ (ulonglong)auStack_10218;
  pfStack_10180 = param_7;
  pppuStack_10188 = param_8;
  uVar4 = (ulonglong)(uint)param_2[3];
  uStack_101a4 = param_5;
  param_2[2] = 0;
  pppuStack_101a0 = param_4;
  lStack_10170 = param_1;
  if (0x7fffffff < (uint)param_2[3]) {
    uVar4 = TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::
            ResizeTo(param_2,0);
  }
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x218) == 0)) {
    return uVar4 & 0xffffffffffffff00;
  }
  bVar10 = 0;
  fVar12 = *(float *)pppuStack_101a0 - *param_3;
  fVar13 = *(float *)((longlong)pppuStack_101a0 + 4) - param_3[1];
  fVar14 = *(float *)(pppuStack_101a0 + 1) - param_3[2];
  fVar15 = SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar14 * fVar14);
  if (fVar15 <= 0.0001) goto LAB_1423192c0;
  lStack_10168 = *(longlong *)(param_1 + 0x970);
  uStack_101b4 = unaff_R12D & 0xffffff00;
  if (lStack_10168 != 0) {
    cVar2 = FUN_142498210(lStack_10168,param_6[8],1);
    uStack_101b4 = (uint)(cVar2 != '\0');
  }
  cVar2 = (char)uStack_101b4;
  puStack_101e8 = (undefined4 *)CONCAT71(puStack_101e8._1_7_,1);
  pppuStack_101f0 = pppuStack_10188;
  pppuStack_101f8 = (undefined ***)param_6;
  FUN_142309ff0(&uStack_10130,param_5 & 0xff,*(undefined1 *)((longlong)param_6 + 0x11),pfStack_10180
               );
  iVar11 = param_6[6];
  if (iVar11 == 0) {
LAB_142318f3a:
    uStack_10150 = 7;
  }
  else if (iVar11 == 1) {
    uStack_10150 = 5;
  }
  else {
    if (iVar11 != 2) goto LAB_142318f3a;
    uStack_10150 = 6;
  }
  uStack_1014e = 0;
  uStack_10160 = uStack_10130;
  uStack_1015c = uStack_1012c;
  uStack_10158 = uStack_10128;
  uStack_10154 = uStack_10124;
  FUN_142300030(afStack_10120,param_6);
  puStack_100b0 = auStack_100a0;
  uVar7 = 0;
  uStack_100bc = 0;
  uStack_100f8 = 0;
  uStack_100f0 = 0;
  uStack_100dc = 0;
  uStack_100d4 = 0;
  ppuStack_10100 = &PTR_processTouches_14503e5b0;
  pcStack_10178 = *(char **)(param_1 + 0x218);
  fStack_10190 = 1.0 / fVar15;
  uStack_100e8 = 0xffffffff;
  uStack_100e0 = 0;
  uStack_100b8 = 0;
  uStack_100a8 = 0x200;
  local_a0 = (undefined1 *)0x0;
  local_98 = 0;
  abStack_101b8[0] = 0;
  uStack_100cc = 0;
  uStack_100c8 = 0;
  uStack_100c4 = 0x7f7fffff;
  uStack_100c0 = 0;
  fStack_10198 = fVar12 * fStack_10190;
  fStack_10194 = fVar13 * fStack_10190;
  fStack_10190 = fVar14 * fStack_10190;
  cStack_10101 = cVar2;
  plVar5 = (longlong *)FUN_1426e2530(pcStack_10178,0);
  pplVar6 = aplStack_10148 + 1;
  do {
    uVar7 = uVar7 + 3;
    pplVar6[-1] = (longlong *)0x0;
    *pplVar6 = (longlong *)0x0;
    pplVar6[1] = (longlong *)0x0;
    pplVar6 = pplVar6 + 3;
  } while (uVar7 < 3);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x348))
              (plVar5,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\PhysXCollision.cpp"
               ,0x33);
  }
  fStack_101b0 = *param_3;
  pfStack_101e0 = afStack_10120;
  fStack_101ac = param_3[1];
  pppuStack_101d8 = (undefined ***)0x0;
  puStack_101e8 = &uStack_10160;
  uStack_101b6 = 0x607;
  pppuStack_101f0 = (undefined ***)&uStack_101b6;
  pppuStack_101f8 = &ppuStack_10100;
  fStack_101a8 = param_3[2];
  aplStack_10148[0] = plVar5;
  (**(code **)(*plVar5 + 0x2f0))(plVar5,&fStack_101b0,&fStack_10198,fVar15);
  iVar11 = (int)local_98;
  if ((int)local_98 == 0) {
    (**(code **)(*plVar5 + 0x350))(plVar5);
    aplStack_10148[0] = (longlong *)0x0;
  }
  if ((*(char *)(param_6 + 4) != '\0') && (*pcStack_10178 != '\0')) {
    plVar5 = (longlong *)FUN_1426e2530();
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x348))
                (plVar5,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\PhysXCollision.cpp"
                 ,0x33);
    }
    iVar9 = 0;
    aplStack_10148[2] = plVar5;
    if (fVar15 <= 1e-08) {
LAB_1423191a7:
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x350))(plVar5);
      }
      aplStack_10148[2] = (longlong *)0x0;
    }
    else {
      fStack_101b0 = *param_3;
      fStack_101ac = param_3[1];
      pppuStack_101d8 = (undefined ***)0x0;
      pfStack_101e0 = afStack_10120;
      uStack_101b6 = 0x607;
      puStack_101e8 = &uStack_10160;
      pppuStack_101f0 = (undefined ***)&uStack_101b6;
      pppuStack_101f8 = &ppuStack_10100;
      fStack_101a8 = param_3[2];
      (**(code **)(*plVar5 + 0x2f0))(plVar5,&fStack_101b0,&fStack_10198,fVar15);
      iVar9 = (int)local_98 - iVar11;
      if (iVar9 == 0) goto LAB_1423191a7;
    }
    iVar11 = iVar11 + iVar9;
    cVar2 = (char)uStack_101b4;
  }
  pppuVar1 = pppuStack_101a0;
  bVar10 = 0;
  if (0 < iVar11) {
    puVar8 = local_80a0;
    if (local_a0 != (undefined1 *)0x0) {
      puVar8 = local_a0;
    }
    uStack_101c8 = *(undefined1 *)(param_6 + 5);
    uStack_101d0 = *(undefined1 *)((longlong)param_6 + 0x13);
    pppuStack_101f0 = (undefined ***)&uStack_10130;
    pppuStack_101d8 = pppuStack_101a0;
    pppuStack_101f8 = (undefined ***)CONCAT44(pppuStack_101f8._4_4_,fVar15);
    puStack_101e8 = param_2;
    pfStack_101e0 = param_3;
    FUN_142309aa0(abStack_101b8,lStack_10170,iVar11,puVar8);
    bVar10 = abStack_101b8[0];
  }
  if (cVar2 != '\0') {
    pppuStack_101d8 = pppuStack_10188;
    pfStack_101e0 = pfStack_10180;
    puStack_101e8 = param_6;
    pppuStack_101f0 = (undefined ***)CONCAT44(pppuStack_101f0._4_4_,uStack_101a4);
    pppuStack_101f8 = pppuVar1;
    bVar3 = FUN_1424a8970(lStack_10168,param_6[8],param_2,param_3);
    bVar10 = bVar3 | bVar10;
  }
  uVar7 = 0;
  pplVar6 = aplStack_10148;
  do {
    if (*pplVar6 != (longlong *)0x0) {
      (**(code **)(**pplVar6 + 0x350))();
    }
    *pplVar6 = (longlong *)0x0;
    uVar7 = uVar7 + 1;
    pplVar6 = pplVar6 + 1;
  } while (uVar7 < 3);
  if (local_a0 != (undefined1 *)0x0) {
    FMemory::Free();
  }
LAB_1423192c0:
  return (ulonglong)bVar10;
}



// FUNCTION 142319320 FUN_142319320 body=1847 status=ok
// SIG undefined FUN_142319320(void)

ulonglong FUN_142319320(longlong param_1,byte *param_2,float *param_3,float *param_4,
                       undefined4 param_5,longlong param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  longlong **pplVar6;
  longlong *plVar7;
  uint uVar8;
  byte bVar9;
  char cVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined2 local_res10 [4];
  longlong local_res18;
  float *local_res20;
  ulonglong in_stack_fffffffffffffdb8;
  float local_218;
  float local_214;
  float local_210;
  float local_208;
  float local_204;
  float local_200;
  undefined **local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined2 local_1d8;
  undefined8 local_1d4;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  byte local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined2 local_178;
  undefined2 uStack_176;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined8 local_158;
  byte local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined2 local_f8;
  undefined1 local_f6;
  longlong *local_f0 [3];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined **local_c8 [3];
  undefined1 local_ab;
  char local_a9;
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  float local_94;
  float local_90;
  
  local_res20 = param_4;
  _guard_xfg_dispatch_icall_nop(&local_198,0,0x90);
  *param_2 = *param_2 & 0xfc;
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffffe;
  *(undefined4 *)(param_2 + 4) = local_198._4_4_;
  *(undefined4 *)(param_2 + 0x10) = uStack_188;
  *(ulonglong *)(param_2 + 0x20) = CONCAT44(uStack_174,CONCAT22(uStack_176,local_178));
  *(ulonglong *)(param_2 + 0x2c) = CONCAT44(uStack_168,uStack_16c);
  *(undefined8 *)(param_2 + 0x38) = uStack_160;
  *(undefined4 *)(param_2 + 0x5c) = local_140._4_4_;
  uVar1 = *(undefined8 *)param_3;
  *(ulonglong *)(param_2 + 0x14) = CONCAT44(uStack_180,uStack_184);
  *(undefined4 *)(param_2 + 0x1c) = uStack_17c;
  *(undefined4 *)(param_2 + 0x28) = uStack_170;
  *(undefined4 *)(param_2 + 0x34) = uStack_164;
  *(undefined4 *)(param_2 + 0x40) = (undefined4)local_158;
  *(undefined4 *)(param_2 + 0x60) = local_138;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0x80;
  param_2[0xf] = 0x3f;
  *(undefined4 *)(param_2 + 100) = local_134;
  *(undefined4 *)(param_2 + 0x68) = local_130;
  *(undefined4 *)(param_2 + 0x6c) = local_12c;
  *(undefined4 *)(param_2 + 0x70) = local_128;
  *(undefined4 *)(param_2 + 0x74) = local_124;
  *(undefined4 *)(param_2 + 0x78) = local_120;
  *(undefined8 *)(param_2 + 0x80) = local_118;
  *(undefined8 *)(param_2 + 0x88) = local_110;
  fVar11 = param_3[2];
  *(undefined8 *)(param_2 + 0x44) = uVar1;
  uVar1 = *(undefined8 *)param_4;
  *(float *)(param_2 + 0x4c) = fVar11;
  fVar11 = param_4[2];
  *(undefined8 *)(param_2 + 0x50) = uVar1;
  *(float *)(param_2 + 0x58) = fVar11;
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x218) == 0)) {
    return (ulonglong)(uint3)((uint)fVar11 >> 8) << 8;
  }
  bVar9 = 0;
  fVar11 = *param_4 - *param_3;
  fVar12 = param_4[1] - param_3[1];
  fVar13 = param_4[2] - param_3[2];
  fVar14 = SQRT(fVar12 * fVar12 + fVar11 * fVar11 + fVar13 * fVar13);
  if (fVar14 <= 0.0001) goto LAB_142319a09;
  local_res18 = *(longlong *)(param_1 + 0x970);
  cVar10 = '\0';
  if (local_res18 != 0) {
    cVar3 = FUN_142498210(local_res18,*(undefined4 *)(param_6 + 0x20),1);
    cVar10 = '\0';
    if (cVar3 != '\0') {
      cVar10 = '\x01';
    }
  }
  uVar8 = 0;
  pplVar6 = local_f0 + 1;
  do {
    uVar8 = uVar8 + 3;
    pplVar6[-1] = (longlong *)0x0;
    *pplVar6 = (longlong *)0x0;
    pplVar6[1] = (longlong *)0x0;
    pplVar6 = pplVar6 + 3;
  } while (uVar8 < 3);
  FUN_142309ff0(&local_d8,(undefined1)param_5,*(undefined1 *)(param_6 + 0x11),param_7,param_6,
                param_8,in_stack_fffffffffffffdb8 & 0xffffffffffffff00);
  iVar5 = *(int *)(param_6 + 0x18);
  if (iVar5 == 0) {
LAB_14231959b:
    local_f8 = 7;
  }
  else if (iVar5 == 1) {
    local_f8 = 5;
  }
  else {
    if (iVar5 != 2) goto LAB_14231959b;
    local_f8 = 6;
  }
  local_f6 = 0;
  local_108 = local_d8;
  uStack_104 = uStack_d4;
  uStack_100 = uStack_d0;
  uStack_fc = uStack_cc;
  FUN_142300030(local_c8,param_6);
  pcVar2 = *(char **)(param_1 + 0x218);
  local_200 = 1.0 / fVar14;
  local_ab = 1;
  local_208 = local_200 * fVar11;
  local_204 = local_200 * fVar12;
  local_200 = local_200 * fVar13;
  local_a9 = cVar10;
  plVar7 = (longlong *)FUN_1426e2530(pcVar2,0);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x348))
              (plVar7,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\PhysXCollision.cpp"
               ,0x33);
  }
  local_214 = param_3[1];
  uStack_1c8 = 0;
  uStack_1c4 = 0;
  uStack_1c0 = 0x7f7fffff00000000;
  local_218 = *param_3;
  local_1f8 = &PTR_CanBeUsedOnAnyThread_14503d308;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1e0 = CONCAT44(local_1e0._4_4_,0xffffffff);
  local_1d8 = 0;
  local_1d4 = 0;
  uStack_1cc = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_res10[0] = 0x607;
  local_210 = param_3[2];
  local_f0[0] = plVar7;
  (**(code **)(*plVar7 + 0x2f0))
            (plVar7,&local_218,&local_208,fVar14,&local_1f8,local_res10,&local_108,local_c8,0);
  bVar9 = local_1b0;
  if (local_1b0 == 0) {
    (**(code **)(*plVar7 + 0x350))(plVar7);
    local_f0[0] = (longlong *)0x0;
  }
  if ((*(char *)(param_6 + 0x10) == '\0') || (*pcVar2 == '\0')) {
LAB_1423198bc:
    if (bVar9 != 0) goto LAB_1423198c5;
  }
  else {
    plVar7 = (longlong *)FUN_1426e2530(pcVar2,2);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x348))
                (plVar7,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\PhysXCollision.cpp"
                 ,0x33);
    }
    local_214 = param_3[1];
    uStack_168 = 0;
    uStack_164 = 0;
    uStack_160 = 0x7f7fffff00000000;
    local_218 = *param_3;
    local_198 = &PTR_CanBeUsedOnAnyThread_14503d308;
    local_190 = 0;
    uStack_188 = 0;
    uStack_184 = 0;
    uStack_180 = 0xffffffff;
    local_178 = 0;
    uStack_174 = 0;
    uStack_170 = 0;
    uStack_16c = 0;
    local_158 = 0;
    local_150 = 0;
    local_148 = 0;
    local_140 = 0;
    local_res10[0] = 0x607;
    local_210 = param_3[2];
    local_f0[2] = plVar7;
    (**(code **)(*plVar7 + 0x2f0))
              (plVar7,&local_218,&local_208,fVar14,&local_198,local_res10,&local_108,local_c8,0);
    if ((local_150 == 0) || ((bVar9 != 0 && (uStack_1c0._4_4_ <= uStack_160._4_4_)))) {
      (**(code **)(*plVar7 + 0x350))(plVar7);
      local_f0[2] = (longlong *)0x0;
      goto LAB_1423198bc;
    }
    uStack_1e8 = CONCAT44(uStack_184,uStack_188);
    bVar9 = 1;
    local_1e0 = CONCAT44(uStack_17c,uStack_180);
    local_1f0 = local_190;
    local_1d8 = local_178;
    local_1d4 = CONCAT44(uStack_170,uStack_174);
    uStack_1cc = uStack_16c;
    uStack_1c8 = uStack_168;
    local_1a8 = local_148;
    uStack_1c4 = uStack_164;
    uStack_1c0 = uStack_160;
    local_1b8 = local_158;
    local_1b0 = local_150;
    local_1a0 = local_140;
LAB_1423198c5:
    local_94 = param_3[1];
    local_a8 = 0;
    uStack_a0 = 0x3f80000000000000;
    local_98 = *param_3;
    local_90 = param_3[2];
    iVar5 = FUN_142309120(param_1,&local_1f0,param_2,fVar14,&local_d8,param_3,local_res20,0,
                          &local_a8,*(undefined1 *)(param_6 + 0x13),*(undefined1 *)(param_6 + 0x14))
    ;
    if (iVar5 == 1) {
      bVar9 = 0;
    }
  }
  uVar8 = 0;
  local_1f8 = &PTR__purecall_14503d2f0;
  pplVar6 = local_f0;
  local_c8[0] = &PTR__purecall_143f9a338;
  do {
    if (*pplVar6 != (longlong *)0x0) {
      (**(code **)(**pplVar6 + 0x350))();
    }
    *pplVar6 = (longlong *)0x0;
    uVar8 = uVar8 + 1;
    pplVar6 = pplVar6 + 1;
  } while (uVar8 < 3);
  if (cVar10 != '\0') {
    bVar4 = FUN_1424a8bd0(local_res18,*(undefined4 *)(param_6 + 0x20),param_2,param_3,local_res20,
                          param_5,param_6,param_7,param_8,0);
    bVar9 = bVar9 | bVar4;
  }
LAB_142319a09:
  return (ulonglong)bVar9;
}



// FUNCTION 142319a60 FUN_142319a60 body=1068 status=ok
// SIG undefined FUN_142319a60(void)

undefined1 *
FUN_142319a60(longlong param_1,float *param_2,float *param_3,uint param_4,longlong param_5,
             undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  longlong *plVar5;
  char cVar6;
  undefined1 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined2 local_res8 [4];
  ulonglong in_stack_fffffffffffffe78;
  float local_168;
  float fStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  float local_158;
  float local_154;
  float local_150;
  longlong local_148;
  float local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined2 local_130;
  undefined1 local_12e;
  undefined1 local_128 [29];
  undefined1 local_10b;
  char local_109;
  undefined **local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined2 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  byte local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x218) == 0)) {
    return &stack0x00000000;
  }
  fVar8 = *param_3 - *param_2;
  fVar9 = param_3[1] - param_2[1];
  fVar10 = param_3[2] - param_2[2];
  fVar11 = SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10);
  if (fVar11 <= 0.0001) {
    return (undefined1 *)0x0;
  }
  local_148 = *(longlong *)(param_1 + 0x970);
  cVar6 = '\0';
  if (local_148 != 0) {
    cVar3 = FUN_142498210(local_148,*(undefined4 *)(param_5 + 0x20),1);
    cVar6 = '\0';
    if (cVar3 != '\0') {
      cVar6 = '\x01';
    }
  }
  local_150 = 1.0 / fVar11;
  local_108 = &PTR_CanBeUsedOnAnyThread_14503d308;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0xffffffff;
  local_e8 = 0;
  local_e4 = 0;
  local_dc = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_154 = local_150 * fVar9;
  local_158 = local_150 * fVar8;
  local_150 = local_150 * fVar10;
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0x7f7fffff;
  FUN_142309ff0(&local_168,param_4 & 0xff,*(undefined1 *)(param_5 + 0x11),param_6,param_5,param_7,
                in_stack_fffffffffffffe78 & 0xffffffffffffff00);
  iVar1 = *(int *)(param_5 + 0x18);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      local_130 = 0x15;
      goto LAB_142319c19;
    }
    if (iVar1 == 2) {
      local_130 = 0x16;
      goto LAB_142319c19;
    }
  }
  local_130 = 0x17;
LAB_142319c19:
  local_12e = 0;
  local_140 = local_168;
  uStack_13c = fStack_164;
  uStack_138 = fStack_160;
  uStack_134 = uStack_15c;
  FUN_142300030(local_128,param_5);
  pcVar2 = *(char **)(param_1 + 0x218);
  local_10b = 1;
  local_109 = cVar6;
  plVar5 = (longlong *)FUN_1426e2530(pcVar2,0);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x348))
              (plVar5,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\PhysXCollision.cpp"
               ,0x2d3);
  }
  local_168 = *param_2;
  fStack_164 = param_2[1];
  fStack_160 = param_2[2];
  local_res8[0] = 0;
  (**(code **)(*plVar5 + 0x2f0))
            (plVar5,&local_168,&local_158,fVar11,&local_108,local_res8,&local_140,local_128,0);
  bVar4 = local_c0;
  puVar7 = (undefined1 *)(ulonglong)local_c0;
  (**(code **)(*plVar5 + 0x350))(plVar5);
  if (bVar4 == 0) {
    if ((*(char *)(param_5 + 0x10) != '\0') && (*pcVar2 != '\0')) {
      plVar5 = (longlong *)FUN_1426e2530(pcVar2,2);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x348))
                  (plVar5,
                   "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\PhysXCollision.cpp"
                   ,0x2e0);
      }
      local_168 = *param_2;
      fStack_164 = param_2[1];
      local_res8[0] = 0;
      fStack_160 = param_2[2];
      (**(code **)(*plVar5 + 0x2f0))
                (plVar5,&local_168,&local_158,fVar11,&local_108,local_res8,&local_140,local_128,0);
      bVar4 = local_c0;
      puVar7 = (undefined1 *)(ulonglong)local_c0;
      (**(code **)(*plVar5 + 0x350))(plVar5);
      if (bVar4 != 0) {
        return puVar7;
      }
    }
    if (cVar6 != '\0') {
      _guard_xfg_dispatch_icall_nop(&local_108,0,0x90);
      local_100 = CONCAT44(0x3f800000,(undefined4)local_100);
      bVar4 = FUN_1424a8bd0(local_148,*(undefined4 *)(param_5 + 0x20),&local_108,param_2,param_3,
                            param_4,param_5,param_6,param_7,1);
      puVar7 = (undefined1 *)(ulonglong)bVar4;
    }
  }
  return puVar7;
}



// FUNCTION 142319e90 FUN_142319e90 body=410 status=ok
// SIG undefined FUN_142319e90(void)

undefined8 FUN_142319e90(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 local_68;
  undefined2 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40 [2];
  undefined1 local_30;
  undefined1 local_2f [39];
  
  local_40[1] = 0x12;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
  FGenericPlatformString::Memcpy(local_40[0],L"Needs description",0x24);
  local_30 = 1;
  FUN_1426d3dd0(local_2f);
  cVar1 = FBodyInstance::IsValidCollisionProfileName(param_2);
  if (cVar1 == '\0') {
LAB_142319f9c:
    if ((param_2 == 0) ||
       (cVar1 = UCollisionProfile::FindProfileData(param_1,param_1 + 0x38,param_2,&local_68),
       cVar1 == '\0')) {
      uVar6 = 0;
      goto LAB_142319ff0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
      lVar3 = *(longlong *)(param_1 + 200);
      if (*(longlong *)(param_1 + 200) == 0) {
        lVar3 = param_1 + 0xc0;
      }
      iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                               (longlong)*(int *)(param_1 + 0xd0) - 1U) * 4);
      if (iVar2 != -1) {
        do {
          puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar2 * 0x18);
          if (*(longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar2 * 0x18) == param_2) {
            if (iVar2 != -1) goto LAB_142319f83;
            break;
          }
          iVar2 = *(int *)(puVar5 + 2);
        } while (iVar2 != -1);
      }
    }
    puVar5 = (undefined8 *)0x0;
LAB_142319f83:
    puVar4 = puVar5 + 1;
    if (puVar5 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    if (puVar4 == (undefined8 *)0x0) goto LAB_142319f9c;
    *(undefined8 *)(param_3 + 0x20) = *puVar4;
  }
  *(undefined1 *)(param_3 + 0xc) = (undefined1)local_60;
  *(undefined1 *)(param_3 + 10) = local_60._1_1_;
  FUN_1426a8d80(param_3 + 0x28,local_2f,0);
  FUN_1426b0480(param_3);
  uVar6 = 1;
LAB_142319ff0:
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  return uVar6;
}



// FUNCTION 14231a050 FUN_14231a050 body=693 status=ok
// SIG undefined FUN_14231a050(void)

void FUN_14231a050(longlong param_1)

{
  longlong lVar1;
  uint *puVar2;
  bool bVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  ulonglong *puVar15;
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
  
  lVar1 = param_1 + 0x830;
  if (*(longlong *)(param_1 + 0x8b0) != 0) {
    uVar4 = FMemory::Realloc(*(longlong *)(param_1 + 0x8b0),0,0);
    *(undefined8 *)(param_1 + 0x8b0) = uVar4;
  }
  puVar2 = (uint *)(param_1 + 0x8b8);
  uVar8 = *puVar2;
  if (uVar8 != 0) {
    FUN_140767b70();
    if (0 < (int)uVar8) {
      uVar5 = 0;
      uVar13 = (ulonglong)uVar8;
      do {
        lVar11 = *(longlong *)(param_1 + 0x8b0);
        if (*(longlong *)(param_1 + 0x8b0) == 0) {
          lVar11 = lVar1;
        }
        uVar9 = (longlong)(int)*puVar2 - 1U & uVar5;
        uVar5 = uVar5 + 1;
        *(undefined4 *)(lVar11 + uVar9 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    uStack_54 = 1;
    puStack_28 = (uint *)(param_1 + 0x810);
    local_58 = 0;
    iVar7 = *(int *)(param_1 + 0x820);
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar7 != 0) {
      puVar14 = *(uint **)(param_1 + 0x818);
      if (*(uint **)(param_1 + 0x818) == (uint *)0x0) {
        puVar14 = puStack_28;
      }
      uVar8 = *puVar14;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar11 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar6 = local_58 + 1;
        bVar3 = (int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar6;
        if (bVar3) goto LAB_14231a1af;
        uVar8 = puVar14[lVar11 + 1];
      }
      uStack_54 = -uVar8 & uVar8;
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
      if (iVar7 < iStack_44) {
LAB_14231a1af:
        iStack_44 = iVar7;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar7) {
      do {
        lVar11 = *(longlong *)(param_1 + 0x800);
        if (*(longlong *)(param_1 + 0x800) == 0) {
          lVar11 = param_1;
        }
        puVar15 = (ulonglong *)(lVar11 + (longlong)iStack_1c * 0x20);
        iVar7 = (int)(*puVar15 >> 4);
        uVar10 = 0x9e3779b9U - iVar7 ^ iVar7 << 8;
        uVar12 = -(uVar10 + iVar7) ^ uVar10 >> 0xd;
        uVar8 = (iVar7 - uVar10) - uVar12 ^ uVar12 >> 0xc;
        uVar10 = (uVar10 - uVar8) - uVar12 ^ uVar8 << 0x10;
        uVar12 = (uVar12 - uVar10) - uVar8 ^ uVar10 >> 5;
        uVar8 = (uVar8 - uVar10) - uVar12 ^ uVar12 >> 3;
        uVar10 = (uVar10 - uVar8) - uVar12 ^ uVar8 << 10;
        uVar8 = ((uVar12 - uVar10) - uVar8 ^ uVar10 >> 0xf ^ (uint)puVar15[1]) & *puVar2 - 1;
        *(uint *)((longlong)puVar15 + 0x1c) = uVar8;
        lVar11 = *(longlong *)(param_1 + 0x8b0);
        if (*(longlong *)(param_1 + 0x8b0) == 0) {
          lVar11 = lVar1;
        }
        *(undefined4 *)(puVar15 + 3) =
             *(undefined4 *)(lVar11 + ((longlong)(int)*puVar2 - 1U & (longlong)(int)uVar8) * 4);
        lVar11 = *(longlong *)(param_1 + 0x8b0);
        if (*(longlong *)(param_1 + 0x8b0) == 0) {
          lVar11 = lVar1;
        }
        *(int *)(lVar11 + ((longlong)(int)*puVar2 - 1U & (longlong)(int)uVar8) * 4) = iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        FUN_1406e9690(&local_30);
      } while (iStack_1c < (int)puStack_28[4]);
    }
  }
  return;
}



// FUNCTION 14231a310 RemoveAtImpl body=220 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FCollisionResponseTemplate,FDefaultAllocator>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + 0x18 + (longlong)param_2 * 0x60);
    iVar3 = param_3;
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xc;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x60),
                 (void *)((longlong)(param_2 + param_3) * 0x60 + *param_1),(longlong)iVar1 * 0x60);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<FInspectStat,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 14231a3f0 FUN_14231a3f0 body=236 status=ok
// SIG undefined FUN_14231a3f0(void)

void FUN_14231a3f0(longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_3 != 0) {
    lVar2 = *param_1 + 0x58 + (longlong)param_2 * 0x188;
    iVar3 = param_3;
    do {
      if (*(longlong *)(lVar2 + 0x118) != 0) {
        FMemory::Free();
      }
      *(undefined ***)(lVar2 + -8) = &PTR__scalar_deleting_destructor__144080980;
      FUN_14074e760(lVar2 + 0x90);
      FUN_14074e810(lVar2);
      lVar2 = lVar2 + 0x188;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x188),
                 (void *)((longlong)(param_2 + param_3) * 0x188 + *param_1),(longlong)iVar1 * 0x188)
      ;
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      FUN_14231bb20(param_1);
    }
  }
  return;
}



// FUNCTION 14231a4e0 FUN_14231a4e0 body=233 status=ok
// SIG undefined FUN_14231a4e0(void)

void FUN_14231a4e0(longlong param_1,int param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar8 = (ulonglong)param_2;
  if (param_3 != 0) {
    bVar2 = (byte)param_2 & 0x1f;
    uVar9 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    lVar10 = uVar8 << 5;
    do {
      iVar7 = (int)uVar8;
      if (*(int *)(param_1 + 0x82c) != 0) {
        lVar6 = *(longlong *)(param_1 + 0x800);
        if (*(longlong *)(param_1 + 0x800) == 0) {
          lVar6 = param_1;
        }
        *(int *)(lVar6 + (longlong)*(int *)(param_1 + 0x828) * 0x20) = iVar7;
      }
      lVar6 = *(longlong *)(param_1 + 0x800);
      if (*(longlong *)(param_1 + 0x800) == 0) {
        lVar6 = param_1;
      }
      *(undefined4 *)(lVar6 + lVar10) = 0xffffffff;
      if (*(int *)(param_1 + 0x82c) < 1) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0x828);
      }
      *(undefined4 *)(lVar6 + 4 + lVar10) = uVar3;
      *(int *)(param_1 + 0x82c) = *(int *)(param_1 + 0x82c) + 1;
      *(int *)(param_1 + 0x828) = iVar7;
      lVar6 = *(longlong *)(param_1 + 0x818);
      if (*(longlong *)(param_1 + 0x818) == 0) {
        lVar6 = param_1 + 0x810;
      }
      iVar4 = iVar7;
      if (iVar7 < 0) {
        iVar4 = iVar7 + 0x1f;
      }
      uVar8 = (ulonglong)(iVar7 + 1);
      lVar10 = lVar10 + 0x20;
      puVar1 = (uint *)(lVar6 + (longlong)(iVar4 >> 5) * 4);
      uVar5 = ~uVar9;
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      *puVar1 = *puVar1 & uVar5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14231a5d0 FUN_14231a5d0 body=534 status=ok
// SIG undefined FUN_14231a5d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14231a5d0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int local_res18;
  LARGE_INTEGER local_res20;
  
  (**(code **)(*(longlong *)*param_2 + 0x10))();
  lVar9 = (longlong)*(int *)(param_1 + 0xb68);
  if (*(int *)(param_1 + 0xb68) != 0) {
    iVar6 = 0;
    bVar12 = **(longlong **)(param_1 + 0xb60) != *param_2;
    local_res18 = 0;
    lVar8 = 0;
    iVar10 = 0;
    do {
      lVar8 = lVar8 + 1;
      iVar11 = iVar10 + 1;
      if (lVar8 < lVar9) {
        plVar5 = (longlong *)(lVar8 * 0x10 + *(longlong *)(param_1 + 0xb60));
        do {
          if (bVar12 != (*plVar5 != *param_2)) break;
          iVar11 = iVar11 + 1;
          lVar8 = lVar8 + 1;
          plVar5 = plVar5 + 2;
        } while (lVar8 < lVar9);
      }
      iVar7 = iVar11 - iVar10;
      if (bVar12 == false) {
        if (iVar7 != 0) {
          plVar5 = (longlong *)((longlong)iVar10 * 0x10 + 8 + *(longlong *)(param_1 + 0xb60));
          do {
            plVar3 = (longlong *)*plVar5;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar3 + 1;
              lVar4 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar6 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            plVar5 = plVar5 + 2;
            iVar7 = iVar7 + -1;
            iVar6 = local_res18;
          } while (iVar7 != 0);
        }
      }
      else {
        if (iVar6 != iVar10) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar6 * 0x10 + *(longlong *)(param_1 + 0xb60)),
                     (void *)((longlong)iVar10 * 0x10 + *(longlong *)(param_1 + 0xb60)),
                     (longlong)iVar7 << 4);
        }
        local_res18 = iVar6 + iVar7;
        iVar6 = local_res18;
      }
      bVar12 = (bool)(bVar12 ^ 1);
      iVar10 = iVar11;
    } while (lVar8 < lVar9);
    *(int *)(param_1 + 0xb68) = iVar6;
  }
  if (*(int *)(param_1 + 0xb68) == 0) {
    QueryPerformanceCounter(&local_res20);
    _DAT_146aefcb0 = (double)local_res20.QuadPart * DAT_1468b02f8 + 16777216.0;
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 14231a7f0 FUN_14231a7f0 body=640 status=ok
// SIG undefined FUN_14231a7f0(void)

void FUN_14231a7f0(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
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
  
  if ((param_2 != 0) && (*(char *)(param_2 + 0x24e) == '\x02')) {
    FTickFunction::RemovePrerequisite(param_1,param_2,param_2 + 0x30);
    lVar5 = *(longlong *)(param_2 + 0x118);
    if (lVar5 != 0) {
      FTickFunction::RemovePrerequisite(param_1,lVar5,lVar5 + 0x28);
      uStack_84 = 1;
      plVar2 = (longlong *)(lVar5 + 0x2b0);
      uVar3 = *(uint *)(lVar5 + 0x2d8);
      puVar1 = (uint *)(lVar5 + 0x2c0);
      local_88 = 0;
      uStack_74 = 0;
      iStack_70 = 0;
      if (uVar3 != 0) {
        puVar11 = *(uint **)(lVar5 + 0x2d0);
        if (*(uint **)(lVar5 + 0x2d0) == (uint *)0x0) {
          puVar11 = puVar1;
        }
        uVar4 = *puVar11;
        iStack_70 = 0;
        local_88 = 0;
        while (uVar4 == 0) {
          lVar9 = (longlong)local_88;
          iStack_70 = iStack_70 + 0x20;
          iVar7 = local_88 + 1;
          bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
          local_88 = iVar7;
          if (bVar6) goto LAB_14231a91d;
          uVar4 = puVar11[lVar9 + 1];
        }
        uStack_84 = -uVar4 & uVar4;
        iVar7 = 0x1f;
        if (uStack_84 != 0) {
          for (; uStack_84 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        if (uStack_84 == 0) {
          iVar7 = 0x20;
        }
        else {
          iVar7 = 0x1f - iVar7;
        }
        uStack_74 = (iStack_70 - iVar7) + 0x1f;
        if ((int)uVar3 < (int)uStack_74) {
LAB_14231a91d:
          uStack_74 = uVar3;
        }
      }
      uVar4 = *(uint *)(lVar5 + 0x2d8);
      uStack_50 = 0xffffffff;
      uStack_4c = uStack_74;
      local_48 = CONCAT44(uStack_6c,iStack_70);
      uStack_38 = CONCAT44(uStack_84,local_88);
      uVar10 = uVar4 & 0xffffffe0;
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
        puVar11 = *(uint **)(lVar5 + 0x2d0);
        if (*(uint **)(lVar5 + 0x2d0) == (uint *)0x0) {
          puVar11 = puVar1;
        }
        uVar8 = puVar11[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
        iVar7 = (int)uVar4 >> 5;
        while (uVar8 == 0) {
          uVar10 = uVar10 + 0x20;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
          goto LAB_14231a9e3;
          uVar8 = puVar11[(longlong)iVar7 + 1];
          iVar7 = iVar7 + 1;
        }
        uVar8 = -uVar8 & uVar8;
        iVar7 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        if (uVar8 == 0) {
          iVar7 = 0x20;
        }
        else {
          iVar7 = 0x1f - iVar7;
        }
        uStack_74 = (uVar10 - iVar7) + 0x1f;
        if ((int)uVar3 < (int)uStack_74) {
LAB_14231a9e3:
          uStack_74 = uVar3;
        }
      }
      while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
        lVar5 = *(longlong *)(*plVar2 + (longlong)(int)uStack_4c * 0x10);
        if ((lVar5 != 0) &&
           (((*(byte *)(lVar5 + 0x3c) & 2) != 0 && ((*(byte *)(lVar5 + 0xb9) & 0x10) != 0)))) {
          FTickFunction::RemovePrerequisite(param_1,lVar5,lVar5 + 0x30);
        }
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
      }
    }
  }
  return;
}



// FUNCTION 14231aa70 FUN_14231aa70 body=1311 status=ok
// SIG undefined FUN_14231aa70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14231aa70(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  DWORD DVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  DWORD *pDVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_268 [32];
  undefined1 *local_248;
  undefined8 local_240;
  uint local_238;
  undefined8 local_230;
  undefined1 local_228;
  undefined8 local_218;
  longlong local_210;
  longlong local_208;
  int local_200;
  int local_1fc;
  undefined8 local_1f8;
  undefined1 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8 [432];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146aefcd8) && (_Init_thread_header(&DAT_146aefcd8), DAT_146aefcd8 == -1))
  {
    FName::FName(&DAT_146aefcd0,L"CanvasRenderTarget2DCanvas",1);
    _Init_thread_footer(&DAT_146aefcd8);
  }
  uVar6 = UCanvas::GetPrivateStaticClass();
  uVar7 = GetTransientPackage();
  plVar14 = (longlong *)0x0;
  local_238 = 0;
  local_240 = (ulonglong)local_240._4_4_ << 0x20;
  local_248 = (undefined1 *)((ulonglong)local_248 & 0xffffffffffffff00);
  lVar8 = FUN_141799680(uVar6,uVar7,DAT_146aefcd0,0);
  lVar9 = DAT_146aefcd0;
  if (lVar8 == 0) {
    uVar6 = GetTransientPackage();
    local_218 = 0;
    if (lVar9 == 0) {
      FUN_1417846f0(uVar6,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    uVar7 = UCanvas::GetPrivateStaticClass();
    local_228 = 0;
    local_230 = 0;
    local_238 = local_238 & 0xffffff00;
    local_240 = 0;
    local_248 = (undefined1 *)((ulonglong)local_248 & 0xffffffff00000000);
    lVar8 = FUN_1417985e0(uVar7,uVar6,lVar9,0);
    iVar16 = *(int *)(lVar8 + 0xc);
    plVar11 = plVar14;
    if (iVar16 < (int)DAT_1469e91c4) {
      uVar15 = iVar16 >> 0x1f & 0xffff;
      uVar4 = iVar16 + uVar15;
      plVar11 = (longlong *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)((uVar4 & 0xffff) - uVar15) * 0x18);
    }
    *(uint *)(plVar11 + 1) = *(uint *)(plVar11 + 1) | 0x40000000;
  }
  lVar9 = FWeakObjectPtr::Get(param_1 + 0x1f);
  uVar18 = DAT_1464c9c14;
  if (lVar9 != 0) {
    lVar9 = FWeakObjectPtr::Get(param_1 + 0x1f);
    uVar18 = *(undefined4 *)(lVar9 + 0x1c0);
  }
  lVar9 = FHdrImageWrapper::GetHeight(param_1);
  plVar11 = (longlong *)(lVar9 + 0x68);
  if (lVar9 == 0) {
    plVar11 = plVar14;
  }
  local_230 = CONCAT44(local_230._4_4_,0x3f800000);
  local_240 = CONCAT44(local_240._4_4_,(float)(DAT_1468b5a78 - DAT_1468e2430));
  local_248 = (undefined1 *)CONCAT44(local_248._4_4_,(float)DAT_1464a97d0);
  local_238 = uVar18;
  FCanvas::FCanvas(local_1d8,plVar11,0);
  fVar19 = (float)(**(code **)(*param_1 + 0x2b8))(param_1);
  fVar20 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
  local_248 = local_1d8;
  FUN_1428af580(lVar8,(int)fVar20,(int)fVar19,0);
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)))) {
    lVar9 = param_1[0x20];
    local_1f8 = FHdrImageWrapper::GetHeight(param_1);
    local_1f0 = (char)lVar9;
    FUN_14230c3b0(&local_1f8,2,&local_218);
  }
  else {
    lVar9 = FHdrImageWrapper::GetHeight(param_1);
    pDVar10 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar11 = TlsGetValue(*pDVar10);
    if (plVar11 == (longlong *)0x0) {
      plVar12 = (longlong *)operator_new(0x18);
      plVar11 = plVar14;
      if (plVar12 != (longlong *)0x0) {
        *plVar12 = 0;
        plVar12[1] = 0;
        *(undefined4 *)(plVar12 + 2) = 0;
        plVar11 = plVar12;
      }
      TlsSetValue(*pDVar10,plVar11);
    }
    plVar12 = (longlong *)plVar11[1];
    if (plVar12 == (longlong *)0x0) {
      plVar12 = (longlong *)*plVar11;
      if (plVar12 == (longlong *)0x0) {
        plVar12 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar10 + 2);
        plVar11[1] = (longlong)plVar12;
        if (plVar12 == (longlong *)0x0) {
          puVar13 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar11[1] = (longlong)puVar13;
          lVar17 = 0x1f;
          do {
            puVar2 = puVar13 + 0x20;
            *puVar13 = puVar2;
            lVar17 = lVar17 + -1;
            puVar13 = puVar2;
          } while (lVar17 != 0);
          *puVar2 = 0;
          plVar12 = (longlong *)plVar11[1];
        }
        iVar16 = 0x20;
        *(undefined4 *)(plVar11 + 2) = 0x20;
      }
      else {
        iVar16 = 0x20;
        plVar11[1] = (longlong)plVar12;
        *(undefined4 *)(plVar11 + 2) = 0x20;
        *plVar11 = 0;
      }
    }
    else {
      iVar16 = (int)plVar11[2];
    }
    plVar11[1] = *plVar12;
    *(int *)(plVar11 + 2) = iVar16 + -1;
    *plVar12 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar12 + 1) = 0xff;
    local_1e8 = 0;
    local_1e0 = 0;
    *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
    *plVar12 = (longlong)&PTR_FUN_14503d640;
    *(undefined1 *)(plVar12 + 4) = 0;
    plVar12[5] = 0;
    lVar17 = param_1[0x20];
    plVar12[2] = lVar9;
    *(char *)(plVar12 + 3) = (char)lVar17;
    lVar9 = plVar12[5];
    piVar1 = (int *)(lVar9 + 0x48);
    if (lVar9 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_210 = lVar9;
    FUN_1409421c0(plVar12,0,0xff,1);
    if (lVar9 != 0) {
      LOCK();
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        FGraphEvent::Recycle(local_210);
      }
    }
  }
  iVar16 = *(int *)((longlong)param_1 + 0xc);
  if (iVar16 < (int)DAT_1469e91c4) {
    uVar15 = iVar16 >> 0x1f & 0xffff;
    uVar4 = iVar16 + uVar15;
    plVar14 = (longlong *)
              (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar15) * 0x18);
  }
  if (((*(uint *)(plVar14 + 1) >> 0x1d & 1) == 0) && (0 < (int)param_1[0x1e])) {
    fVar19 = (float)(**(code **)(*param_1 + 0x2b8))(param_1);
    local_208 = lVar8;
    fVar20 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
    local_200 = (int)fVar20;
    local_1fc = (int)fVar19;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x1d,&local_208);
  }
  fVar19 = (float)(**(code **)(*param_1 + 0x2b8))(param_1);
  fVar20 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
  FUN_142913510(param_1,lVar8,(int)fVar20,(int)fVar19);
  *(undefined8 *)(lVar8 + 0x260) = 0;
  FUN_1428aa700(local_1d8,0);
  FUN_142894320(param_1,0);
  FUN_14289d030(local_1d8);
  return;
}



// FUNCTION 14231af90 FUN_14231af90 body=506 status=ok
// SIG undefined FUN_14231af90(void)

void FUN_14231af90(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  
  iVar3 = *(int *)(param_1 + 0x808);
  if (iVar3 < param_2) {
    uVar8 = (ulonglong)(uint)(param_2 - iVar3);
    *(int *)(param_1 + 0x808) = param_2;
    if (*(int *)(param_1 + 0x80c) < param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TInlineAllocator<64,FDefaultAllocator>_>
      ::ResizeGrow(param_1,iVar3);
    }
    iVar9 = param_2 + -1;
    lVar11 = (longlong)iVar9;
    if (iVar3 <= lVar11) {
      iVar4 = *(int *)(param_1 + 0x82c);
      lVar7 = lVar11 << 5;
      lVar11 = (lVar11 - iVar3) + 1;
      do {
        if (iVar4 != 0) {
          lVar6 = *(longlong *)(param_1 + 0x800);
          if (*(longlong *)(param_1 + 0x800) == 0) {
            lVar6 = param_1;
          }
          *(int *)(lVar6 + (longlong)*(int *)(param_1 + 0x828) * 0x20) = iVar9;
        }
        lVar6 = *(longlong *)(param_1 + 0x800);
        if (*(longlong *)(param_1 + 0x800) == 0) {
          lVar6 = param_1;
        }
        *(undefined4 *)(lVar6 + lVar7) = 0xffffffff;
        if (*(int *)(param_1 + 0x82c) < 1) {
          uVar10 = 0xffffffff;
        }
        else {
          uVar10 = *(undefined4 *)(param_1 + 0x828);
        }
        lVar6 = *(longlong *)(param_1 + 0x800);
        if (*(longlong *)(param_1 + 0x800) == 0) {
          lVar6 = param_1;
        }
        *(undefined4 *)(lVar6 + 4 + lVar7) = uVar10;
        lVar7 = lVar7 + -0x20;
        *(int *)(param_1 + 0x82c) = *(int *)(param_1 + 0x82c) + 1;
        iVar4 = *(int *)(param_1 + 0x82c);
        *(int *)(param_1 + 0x828) = iVar9;
        iVar9 = iVar9 + -1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (0 < param_2 - iVar3) {
      do {
        iVar9 = *(int *)(param_1 + 0x820);
        iVar3 = iVar9 + 1;
        *(int *)(param_1 + 0x820) = iVar3;
        if (*(int *)(param_1 + 0x824) <= iVar9) {
          uVar2 = (int)(iVar9 + 0x20 + (iVar9 + 0x20 >> 0x1f & 0x1fU)) >> 5;
          if (uVar2 < 3) {
            iVar4 = 2;
          }
          else {
            iVar3 = *(int *)(param_1 + 0x824) + 0x1f;
            lVar11 = 4;
            if (((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5 != 0) || (4 < uVar2)) {
              lVar11 = (longlong)(int)uVar2 + 0x10 + ((ulonglong)((longlong)(int)uVar2 * 3) >> 3);
            }
            uVar5 = FMemory::QuantizeSize(lVar11 * 4,0);
            iVar3 = *(int *)(param_1 + 0x820);
            iVar4 = (int)(uVar5 >> 2);
            if (iVar4 < (int)uVar2) {
              iVar4 = 0x7fffffff;
            }
          }
          *(int *)(param_1 + 0x824) = iVar4 << 5;
          TBitArray<TInlineAllocator<2,FDefaultAllocator>_>::Realloc(param_1 + 0x810,iVar3 + -1);
        }
        lVar11 = *(longlong *)(param_1 + 0x818);
        if (*(longlong *)(param_1 + 0x818) == 0) {
          lVar11 = param_1 + 0x810;
        }
        iVar3 = iVar9;
        if (iVar9 < 0) {
          iVar3 = iVar9 + 0x1f;
        }
        puVar1 = (uint *)(lVar11 + (longlong)(iVar3 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar9 & 0x1f));
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return;
}



// FUNCTION 14231b190 FUN_14231b190 body=84 status=ok
// SIG undefined FUN_14231b190(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14231b190(longlong param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x60,0);
  }
  *(undefined8 *)(param_1 + 0x7c) = _DAT_1468b5d90;
  uVar1 = DAT_1468b5d98;
  *(undefined4 *)(param_1 + 0x84) = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  *(undefined1 *)(param_1 + 0x88) = 0;
  return;
}



// FUNCTION 14231b1f0 FUN_14231b1f0 body=1381 status=ok
// SIG undefined FUN_14231b1f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14231b1f0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  undefined8 *puVar5;
  double *pdVar6;
  undefined8 **ppuVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 *local_e8 [13];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  double local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  lVar10 = 0;
  *(undefined8 *)(param_1 + 0x140) = *param_2;
  uVar11 = 0;
  uVar12 = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0x7fffffff;
  *(undefined8 *)(param_1 + 0x148) = 0;
  local_e8[0] = (undefined8 *)0x4014000000000000;
  local_e8[1] = (undefined8 *)0x4024000000000000;
  local_e8[2] = (undefined8 *)0x402e000000000000;
  local_e8[3] = (undefined8 *)0x4034000000000000;
  local_e8[4] = (undefined8 *)0x4039000000000000;
  local_e8[5] = (undefined8 *)0x403e000000000000;
  local_e8[6] = (undefined8 *)0x4044000000000000;
  local_e8[7] = (undefined8 *)0x4049000000000000;
  *(undefined8 *)(param_1 + 0x38) = 0x7fefffffffffffff;
  local_e8[8] = (undefined8 *)0x404e000000000000;
  local_e8[9] = (undefined8 *)0x4051800000000000;
  local_e8[10] = (undefined8 *)0x4054000000000000;
  local_e8[0xb] = (undefined8 *)0x4056800000000000;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0xffefffffffffffff;
  local_78 = 0x405e000000000000;
  local_e8[0xc] = (undefined8 *)0x4059000000000000;
  uStack_80 = 0;
  uStack_7c = 0x405b8000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x24)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x18,0);
  }
  ppuVar7 = local_e8;
  lVar8 = lVar10;
  lVar9 = 0xf;
  if (&local_70 < local_e8) {
    lVar9 = lVar10;
  }
  do {
    iVar2 = *(int *)(param_1 + 0x20);
    puVar1 = *ppuVar7;
    *(int *)(param_1 + 0x20) = iVar2 + 1;
    if (*(int *)(param_1 + 0x24) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1 + 0x18,iVar2);
    }
    ppuVar7 = ppuVar7 + 1;
    lVar8 = lVar8 + 1;
    puVar5 = (undefined8 *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x18));
    *puVar5 = CONCAT44(uVar12,uVar11);
    puVar5[1] = puVar1;
    puVar5[2] = 0;
    *(undefined4 *)(puVar5 + 3) = 0;
    uVar11 = (int)puVar1;
    uVar12 = (int)((ulonglong)puVar1 >> 0x20);
  } while (lVar8 != lVar9);
  iVar2 = *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x20) = iVar2 + 1;
  if (*(int *)(param_1 + 0x24) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1 + 0x18,iVar2);
  }
  puVar5 = (undefined8 *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x18));
  local_e8[0] = (undefined8 *)0x403e000000000000;
  local_e8[1] = (undefined8 *)0x404e000000000000;
  local_e8[2] = (undefined8 *)0x4059000000000000;
  local_e8[3] = (undefined8 *)0x4062c00000000000;
  *puVar5 = puVar1;
  puVar5[1] = 0x47efffffe0000000;
  puVar5[2] = 0;
  *(undefined4 *)(puVar5 + 3) = 0;
  local_e8[4] = (undefined8 *)0x4069000000000000;
  local_e8[5] = (undefined8 *)0x4072c00000000000;
  *(undefined8 *)(param_1 + 0x68) = 0x7fefffffffffffff;
  local_e8[6] = (undefined8 *)0x407f400000000000;
  local_e8[7] = (undefined8 *)0x4087700000000000;
  local_e8[8] = (undefined8 *)0x408f400000000000;
  local_e8[9] = (undefined8 *)0x4097700000000000;
  *(undefined8 *)(param_1 + 0x70) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  local_e8[0xc] = (undefined8 *)0x40b3880000000000;
  local_e8[10] = (undefined8 *)0x409f400000000000;
  local_e8[0xb] = (undefined8 *)0x40a3880000000000;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((*(int *)(param_1 + 0x54) < 0) && (*(int *)(param_1 + 0x54) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x48,0);
  }
  ppuVar7 = local_e8;
  lVar8 = 0xd;
  lVar9 = lVar10;
  dVar4 = 0.0;
  if (&uStack_80 < local_e8) {
    lVar8 = lVar10;
    dVar4 = 0.0;
  }
  do {
    iVar2 = *(int *)(param_1 + 0x50);
    dVar3 = (double)*ppuVar7 * 0.001;
    *(int *)(param_1 + 0x50) = iVar2 + 1;
    if (*(int *)(param_1 + 0x54) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1 + 0x48,iVar2);
    }
    ppuVar7 = ppuVar7 + 1;
    lVar9 = lVar9 + 1;
    pdVar6 = (double *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x48));
    *pdVar6 = dVar4;
    pdVar6[1] = dVar3;
    pdVar6[2] = 0.0;
    *(undefined4 *)(pdVar6 + 3) = 0;
    dVar4 = dVar3;
  } while (lVar9 != lVar8);
  iVar2 = *(int *)(param_1 + 0x50);
  *(int *)(param_1 + 0x50) = iVar2 + 1;
  if (*(int *)(param_1 + 0x54) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1 + 0x48,iVar2);
  }
  pdVar6 = (double *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x48));
  *pdVar6 = dVar3;
  pdVar6[1] = 3.4028234663852886e+38;
  pdVar6[2] = 0.0;
  *(undefined4 *)(pdVar6 + 3) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0xa0) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  if ((*(int *)(param_1 + 0x84) < 0) && (*(int *)(param_1 + 0x84) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x78,0);
  }
  ppuVar7 = &local_108;
  lVar8 = 4;
  if (local_e8 < &local_108) {
    lVar8 = lVar10;
  }
  local_108 = (undefined8 *)0x4051800000000000;
  uStack_100 = 0;
  uStack_fc = 0x40540000;
  local_f8 = 0x4056800000000000;
  uStack_f0 = 0x4059000000000000;
  uVar11 = 0;
  uVar12 = 0x404e0000;
  do {
    iVar2 = *(int *)(param_1 + 0x80);
    puVar1 = *ppuVar7;
    *(int *)(param_1 + 0x80) = iVar2 + 1;
    if (*(int *)(param_1 + 0x84) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1 + 0x78,iVar2);
    }
    ppuVar7 = ppuVar7 + 1;
    lVar10 = lVar10 + 1;
    puVar5 = (undefined8 *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x78));
    *puVar5 = CONCAT44(uVar12,uVar11);
    puVar5[1] = puVar1;
    puVar5[2] = 0;
    *(undefined4 *)(puVar5 + 3) = 0;
    uVar11 = (int)puVar1;
    uVar12 = (int)((ulonglong)puVar1 >> 0x20);
  } while (lVar10 != lVar8);
  iVar2 = *(int *)(param_1 + 0x80);
  *(int *)(param_1 + 0x80) = iVar2 + 1;
  if (*(int *)(param_1 + 0x84) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1 + 0x78,iVar2);
  }
  local_138 = 0xbff0000000000000;
  uStack_130 = 0;
  puVar5 = (undefined8 *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x78));
  local_118 = 0x4052c00000000000;
  local_128 = 0;
  uStack_124 = 0x40390000;
  uStack_120 = 0;
  uStack_11c = 0x40490000;
  puVar5[1] = 0x47efffffe0000000;
  *puVar5 = puVar1;
  puVar5[2] = 0;
  *(undefined4 *)(puVar5 + 3) = 0;
  local_108 = &local_138;
  uStack_100 = 5;
  *(undefined4 *)(param_1 + 0x150) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x154) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x158) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x15c) = 0xffffffffbf800000;
  *(undefined4 *)(param_1 + 0x164) = 0xffffffff;
  FHistogram::InitFromArray(param_1 + 0x168,&local_108);
  return;
}



// FUNCTION 14231b760 FUN_14231b760 body=71 status=ok
// SIG undefined FUN_14231b760(void)

void FUN_14231b760(longlong param_1)

{
  char cVar1;
  
  *(uint *)(param_1 + 0x56c) = *(uint *)(param_1 + 0x56c) & 0xfffffbfb;
  *(undefined8 *)(param_1 + 0x570) = 0;
  if (*(longlong **)(param_1 + 0x4c8) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x4c8) + 0x558))();
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 0x584) = 0;
    }
  }
  return;
}



// FUNCTION 14231b7b0 ResizeGrow body=262 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TTypeCompatibleBytes<physx::PxOverlapHit>,TInlineAllocator<512,FDefaultAllocator>_>::
     ResizeGrow(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x4008);
  if (uVar1 < 0x201) {
    uVar2 = 0x200;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x400c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 << 5,0);
    uVar2 = (uint)(uVar3 >> 5);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x400c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x4000);
  if (uVar2 < 0x201) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 5);
    pvVar4 = *(void **)((longlong)param_1 + 0x4000);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 5,0);
        *(void **)((longlong)param_1 + 0x4000) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 5);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 5;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x4000) = uVar5;
  return;
}



// FUNCTION 14231b8c0 ResizeGrow body=262 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TTypeCompatibleBytes<physx::PxRaycastHit>,TInlineAllocator<512,FDefaultAllocator>_>::
     ResizeGrow(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x8008);
  if (uVar1 < 0x201) {
    uVar2 = 0x200;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x800c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 << 6,0);
    uVar2 = (uint)(uVar3 >> 6);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x800c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x8000);
  if (uVar2 < 0x201) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 6);
    pvVar4 = *(void **)((longlong)param_1 + 0x8000);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 6,0);
        *(void **)((longlong)param_1 + 0x8000) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 6);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 6;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x8000) = uVar5;
  return;
}



// FUNCTION 14231b9d0 ResizeGrow body=145 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FRelevantActor,FDefaultAllocator>::ResizeGrow(longlong *param_1)

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
  uVar4 = FMemory::QuantizeSize(lVar3 * 0x54,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0x8618618618618619) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 6);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0x54,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 14231ba70 FUN_14231ba70 body=162 status=ok
// SIG undefined FUN_14231ba70(void)

ulonglong FUN_14231ba70(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)((longlong)param_1 + 0xc);
  iVar5 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar6 - iVar5);
  if ((0x3fff < uVar2 * 0x54) || (uVar2 = (ulonglong)(uint)(iVar6 * 2), iVar5 * 3 < iVar6 * 2)) {
    if (0x40 < (uint)(iVar6 - iVar5)) {
      if (0 < iVar5) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar5 * 0x54,0);
        iVar6 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        lVar4 = SUB168(ZEXT816(0x8618618618618619) * auVar1,8);
        uVar2 = SUB168(ZEXT816(0x8618618618618619) * auVar1,0);
        iVar5 = (int)((uVar3 - lVar4 >> 1) + lVar4 >> 6);
      }
      goto LAB_14231bae4;
    }
    if (iVar5 == 0) goto LAB_14231bae4;
  }
  iVar5 = iVar6;
LAB_14231bae4:
  if (iVar5 != iVar6) {
    *(int *)((longlong)param_1 + 0xc) = iVar5;
    if ((*param_1 != 0) || (iVar5 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0x54,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 14231bb20 FUN_14231bb20 body=171 status=ok
// SIG undefined FUN_14231bb20(void)

ulonglong FUN_14231bb20(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)((longlong)param_1 + 0xc);
  iVar5 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar6 - iVar5);
  if ((0x3fff < uVar2 * 0x188) || (uVar2 = (ulonglong)(uint)(iVar6 * 2), iVar5 * 3 < iVar6 * 2)) {
    if (0x40 < (uint)(iVar6 - iVar5)) {
      if (0 < iVar5) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar5 * 0x188,0);
        iVar6 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        lVar4 = SUB168(ZEXT816(0x4e5e0a72f0539783) * auVar1,8);
        uVar2 = SUB168(ZEXT816(0x4e5e0a72f0539783) * auVar1,0);
        iVar5 = (int)((uVar3 - lVar4 >> 1) + lVar4 >> 8);
      }
      goto LAB_14231bb9a;
    }
    if (iVar5 == 0) goto LAB_14231bb9a;
  }
  iVar5 = iVar6;
LAB_14231bb9a:
  if (iVar5 != iVar6) {
    *(int *)((longlong)param_1 + 0xc) = iVar5;
    if ((*param_1 != 0) || (iVar5 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0x188,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 14231bbd0 FUN_14231bbd0 body=124 status=ok
// SIG undefined FUN_14231bbd0(void)

void FUN_14231bbd0(longlong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0x54,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x8618618618618619) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 6);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if (iVar4 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x54,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 14231bc50 FUN_14231bc50 body=127 status=ok
// SIG undefined FUN_14231bc50(void)

void FUN_14231bc50(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x11) {
      iVar2 = 0x10;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0xc,0);
      iVar2 = (int)(uVar1 / 0xc);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 0xcc)) {
    *(int *)(param_1 + 0xcc) = iVar2;
    FUN_140767a20(param_1,*(undefined4 *)(param_1 + 200),iVar2,0xc);
  }
  return;
}



// FUNCTION 14231bcd0 FUN_14231bcd0 body=120 status=ok
// SIG undefined FUN_14231bcd0(void)

void FUN_14231bcd0(longlong *param_1)

{
  char cVar1;
  
  FUN_1426a79a0();
  *(uint *)((longlong)param_1 + 0x56c) = *(uint *)((longlong)param_1 + 0x56c) & 0xfffffbfb;
  *(undefined4 *)((longlong)param_1 + 0x584) = 0;
  param_1[0xae] = 0;
  if ((longlong *)param_1[0x99] != (longlong *)0x0) {
    cVar1 = (**(code **)(*(longlong *)param_1[0x99] + 0x558))();
    if (cVar1 == '\0') {
      *(undefined4 *)((longlong)param_1 + 0x584) = 0;
    }
  }
  (**(code **)(*param_1 + 0x8e0))(param_1,1);
  if ((longlong *)param_1[0x99] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x99] + 0x7a8))();
  }
  return;
}



// FUNCTION 14231bd50 FUN_14231bd50 body=1247 status=ok
// SIG undefined FUN_14231bd50(void)

undefined8 FUN_14231bd50(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float *pfVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
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
  undefined8 local_198;
  float local_190;
  undefined8 local_188;
  float fStack_180;
  float fStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  float local_168;
  float fStack_164;
  float local_160;
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
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [224];
  
  lVar1 = *(longlong *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  if (*(char *)(param_2 + 0x48) == '\0') {
    FUN_142436ac0(&local_188,param_2 + 0x1c,param_1);
    local_178 = *(undefined8 *)(param_2 + 0x28);
    puVar11 = &local_198;
    uStack_170 = CONCAT44(uStack_170._4_4_,*(undefined4 *)(param_2 + 0x30));
    local_198 = local_188;
    local_190 = fStack_180;
  }
  else {
    if ((lVar1 == 0) || (*(char *)(lVar1 + 0x24e) != '\x02')) {
      return 0;
    }
    FUN_142311f90(lVar1,uVar2,&local_198,&local_118);
    fVar9 = DAT_1468b5d98;
    local_168 = (float)local_198 + *(float *)(param_2 + 0x1c);
    fStack_164 = local_198._4_4_ + *(float *)(param_2 + 0x20);
    local_160 = local_190 + *(float *)(param_2 + 0x24);
    if (*(char *)(param_2 + 0x49) == '\0') {
      uVar14 = (undefined4)*(undefined8 *)(param_2 + 0x28);
      uVar15 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x28) >> 0x20);
      uVar12 = *(undefined4 *)(param_2 + 0x30);
    }
    else {
      fVar18 = local_110 * 2.0;
      fStack_14c = 0.0;
      fStack_13c = 0.0;
      fVar22 = local_114 * 2.0;
      fStack_12c = 0.0;
      fVar27 = local_118 * local_118 * 2.0;
      fStack_11c = 1.0;
      fVar29 = local_10c * local_118 * 2.0;
      fVar32 = local_10c * fVar22 + local_118 * fVar18;
      fVar26 = local_118 * fVar22 - local_10c * fVar18;
      fVar30 = 1.0 - (local_110 * fVar18 + local_114 * fVar22);
      fVar24 = 1.0 - (local_110 * fVar18 + fVar27);
      fVar13 = local_118 * fVar18 - local_10c * fVar22;
      fVar25 = local_114 * fVar18 - fVar29;
      fVar31 = local_10c * fVar18 + local_118 * fVar22;
      fVar29 = fVar29 + local_114 * fVar18;
      fVar33 = 1.0 - (local_114 * fVar22 + fVar27);
      pfVar10 = (float *)FRotationMatrix::FRotationMatrix(local_f8,param_2 + 0x28);
      uVar5 = *(undefined8 *)(pfVar10 + 8);
      uVar6 = *(undefined8 *)(pfVar10 + 10);
      fVar18 = *pfVar10;
      fVar22 = pfVar10[1];
      fVar27 = pfVar10[2];
      fVar16 = pfVar10[3];
      uVar7 = *(undefined8 *)(pfVar10 + 0xc);
      uVar8 = *(undefined8 *)(pfVar10 + 0xe);
      fVar17 = pfVar10[4];
      fVar3 = pfVar10[5];
      fVar4 = pfVar10[6];
      fVar21 = pfVar10[7];
      local_188 = CONCAT44(fVar24,fVar26);
      fStack_17c = fStack_13c;
      fVar19 = fVar16 * fStack_11c;
      local_158 = fVar22 * fVar26 + fVar18 * fVar30 + fVar27 * fVar32 + fVar16 * DAT_1468b5d90;
      fStack_154 = fVar22 * fVar24 + fVar18 * fVar31 + fVar27 * fVar25 + fVar16 * DAT_1468b5d94;
      fStack_150 = fVar22 * fVar29 + fVar18 * fVar13 + fVar27 * fVar33 + fVar16 * fVar9;
      fVar20 = fVar17 * fStack_14c;
      fVar28 = fVar21 * fStack_11c;
      local_148 = fVar17 * fVar30 + fVar3 * fVar26 + fVar4 * fVar32 + fVar21 * DAT_1468b5d90;
      fStack_144 = fVar17 * fVar31 + fVar3 * fVar24 + fVar4 * fVar25 + fVar21 * DAT_1468b5d94;
      fStack_140 = fVar17 * fVar13 + fVar3 * fVar29 + fVar4 * fVar33 + fVar21 * fVar9;
      local_178._0_4_ = (float)uVar5;
      local_178._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
      uStack_170._0_4_ = (float)uVar6;
      uStack_170._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
      fVar21 = uStack_170._4_4_ * fStack_11c;
      fVar23 = (float)local_178 * fStack_14c;
      fVar16 = local_178._4_4_ * fStack_13c;
      fVar17 = (float)uStack_170 * fStack_12c;
      local_138 = (float)local_178 * fVar30 + local_178._4_4_ * fVar26 + (float)uStack_170 * fVar32
                  + uStack_170._4_4_ * DAT_1468b5d90;
      fStack_134 = (float)local_178 * fVar31 + local_178._4_4_ * fVar24 + (float)uStack_170 * fVar25
                   + uStack_170._4_4_ * DAT_1468b5d94;
      fStack_130 = (float)local_178 * fVar13 + local_178._4_4_ * fVar29 + (float)uStack_170 * fVar33
                   + uStack_170._4_4_ * fVar9;
      local_108._0_4_ = (float)uVar7;
      local_108._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
      uStack_100._0_4_ = (float)uVar8;
      uStack_100._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
      local_128 = local_108._4_4_ * fVar26 + (float)local_108 * fVar30 + (float)uStack_100 * fVar32
                  + uStack_100._4_4_ * DAT_1468b5d90;
      fStack_124 = local_108._4_4_ * fVar24 + (float)local_108 * fVar31 + (float)uStack_100 * fVar25
                   + uStack_100._4_4_ * DAT_1468b5d94;
      fStack_120 = local_108._4_4_ * fVar29 + (float)local_108 * fVar13 + (float)uStack_100 * fVar33
                   + uStack_100._4_4_ * fVar9;
      fStack_11c = local_108._4_4_ * fStack_13c + (float)local_108 * fStack_14c +
                   (float)uStack_100 * fStack_12c + uStack_100._4_4_ * fStack_11c;
      fStack_180 = fVar29;
      local_178 = uVar5;
      uStack_170 = uVar6;
      fStack_14c = fVar22 * fStack_13c + fVar18 * fStack_14c + fVar27 * fStack_12c + fVar19;
      fStack_13c = fVar20 + fVar3 * fStack_13c + fVar4 * fStack_12c + fVar28;
      fStack_12c = fVar23 + fVar16 + fVar17 + fVar21;
      local_108 = uVar7;
      uStack_100 = uVar8;
      puVar11 = (undefined8 *)FMatrix::Rotator(&local_158,&local_188);
      uVar14 = (undefined4)*puVar11;
      uVar15 = (undefined4)((ulonglong)*puVar11 >> 0x20);
      uVar12 = *(undefined4 *)(puVar11 + 1);
    }
    puVar11 = &local_188;
    local_178 = CONCAT44(uVar15,uVar14);
    local_188 = CONCAT44(fStack_164,local_168);
    uStack_170 = CONCAT44(uStack_170._4_4_,uVar12);
    fStack_180 = local_160;
  }
  FUN_14223ca30(param_1,puVar11,&local_178,0,0,0);
  *(uint *)(param_1[0x99] + 0x4b4) = *(uint *)(param_1[0x99] + 0x4b4) | 0x20;
  (**(code **)(*param_1 + 0x838))(param_1,lVar1,uVar2,1);
  return 1;
}



// FUNCTION 14231c230 ReturnChannelNameFromContainerIndex body=82 status=ok
// SIG undefined ReturnChannelNameFromContainerIndex(void)

undefined8 *
UCollisionProfile::ReturnChannelNameFromContainerIndex
          (longlong param_1,undefined8 *param_2,int param_3)

{
  if ((-1 < param_3) && (param_3 < *(int *)(param_1 + 0x130))) {
    *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 0x128) + (longlong)param_3 * 8);
    return param_2;
  }
  FName::FName(param_2,&DAT_1450386ac,1);
  return param_2;
}



// FUNCTION 14231c290 ReturnContainerIndexFromChannelName body=303 status=ok
// SIG undefined ReturnContainerIndexFromChannelName(void)

ulonglong UCollisionProfile::ReturnContainerIndexFromChannelName(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  plVar5 = *(longlong **)(param_1 + 0x128);
  if (plVar5 != plVar5 + *(int *)(param_1 + 0x130)) {
    plVar6 = plVar5;
    do {
      if (*plVar6 == *param_2) {
        uVar7 = (longlong)plVar6 - (longlong)plVar5 >> 3;
        if ((int)uVar7 == -1) goto LAB_14231c2cd;
        goto LAB_14231c35c;
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar5 + *(int *)(param_1 + 0x130));
  }
  uVar7 = 0xffffffff;
LAB_14231c2cd:
  lVar1 = *param_2;
  if (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c)) {
    lVar3 = *(longlong *)(param_1 + 0x118);
    if (*(longlong *)(param_1 + 0x118) == 0) {
      lVar3 = param_1 + 0x110;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                             (longlong)*(int *)(param_1 + 0x120) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        plVar5 = (longlong *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar2 * 0x18);
        if (*(longlong *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar2 * 0x18) == lVar1) {
          if (iVar2 != -1) goto LAB_14231c369;
          break;
        }
        iVar2 = (int)plVar5[2];
      } while (iVar2 != -1);
    }
  }
  plVar5 = (longlong *)0x0;
LAB_14231c369:
  plVar6 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  if (plVar6 != (longlong *)0x0) {
    *param_2 = *plVar6;
    plVar5 = *(longlong **)(param_1 + 0x128);
    if (plVar5 != plVar5 + *(int *)(param_1 + 0x130)) {
      plVar4 = plVar5;
      do {
        if (*plVar4 == *plVar6) {
          return (longlong)plVar4 - (longlong)plVar5 >> 3;
        }
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar5 + *(int *)(param_1 + 0x130));
    }
    return 0xffffffff;
  }
LAB_14231c35c:
  return uVar7 & 0xffffffff;
}



// FUNCTION 14231c3c0 FUN_14231c3c0 body=52 status=ok
// SIG undefined FUN_14231c3c0(void)

void FUN_14231c3c0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x4e8) = *param_2;
  *(undefined4 *)(param_1 + 0x4f0) = uVar1;
  *(undefined8 *)(param_1 + 0x4f4) = *param_3;
  *(undefined4 *)(param_1 + 0x4fc) = *(undefined4 *)(param_3 + 1);
  *(undefined1 *)(param_1 + 0x501) = param_4;
  return;
}



// FUNCTION 14231c400 FUN_14231c400 body=230 status=ok
// SIG undefined FUN_14231c400(void)

void FUN_14231c400(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined1 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined1 param_14,undefined2 param_15)

{
  longlong lVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_38 = *param_8;
  local_30 = *(undefined4 *)(param_8 + 1);
  lVar1 = **(longlong **)(param_1 + 0x4c8);
  local_28 = *param_7;
  local_20 = *(undefined4 *)(param_7 + 1);
  local_10 = *(undefined4 *)(param_3 + 1);
  local_18 = *param_3;
  (**(code **)(lVar1 + 0x9d8))
            (*(longlong **)(param_1 + 0x4c8),lVar1,&local_18,param_4,param_5,param_6,&local_28,
             &local_38,param_9,param_10,param_11,param_12,param_13,param_14,param_15);
  return;
}



// FUNCTION 14231c4f0 FUN_14231c4f0 body=230 status=ok
// SIG undefined FUN_14231c4f0(void)

void FUN_14231c4f0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined1 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined1 param_14,undefined2 param_15)

{
  longlong lVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_38 = *param_8;
  local_30 = *(undefined4 *)(param_8 + 1);
  lVar1 = **(longlong **)(param_1 + 0x4c8);
  local_28 = *param_7;
  local_20 = *(undefined4 *)(param_7 + 1);
  local_10 = *(undefined4 *)(param_3 + 1);
  local_18 = *param_3;
  (**(code **)(lVar1 + 0x9e0))
            (*(longlong **)(param_1 + 0x4c8),lVar1,&local_18,param_4,param_5,param_6,&local_28,
             &local_38,param_9,param_10,param_11,param_12,param_13,param_14,param_15);
  return;
}



// FUNCTION 14231c5e0 FUN_14231c5e0 body=228 status=ok
// SIG undefined FUN_14231c5e0(void)

void FUN_14231c5e0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined1 param_9,undefined1 param_10,undefined4 param_11,undefined1 param_12,
                  undefined2 param_13)

{
  longlong lVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_38 = *param_8;
  local_30 = *(undefined4 *)(param_8 + 1);
  lVar1 = **(longlong **)(param_1 + 0x4c8);
  local_28 = *param_7;
  local_20 = *(undefined4 *)(param_7 + 1);
  local_10 = *(undefined4 *)(param_3 + 1);
  local_18 = *param_3;
  (**(code **)(lVar1 + 0x9c0))
            (*(longlong **)(param_1 + 0x4c8),lVar1,&local_18,param_4,param_5,param_6,&local_28,
             &local_38,param_9,param_10,param_11,0,0,param_12,param_13);
  return;
}



// FUNCTION 14231c6d0 FUN_14231c6d0 body=228 status=ok
// SIG undefined FUN_14231c6d0(void)

void FUN_14231c6d0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined1 param_9,undefined1 param_10,undefined4 param_11,undefined1 param_12,
                  undefined2 param_13)

{
  longlong lVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_38 = *param_8;
  local_30 = *(undefined4 *)(param_8 + 1);
  lVar1 = **(longlong **)(param_1 + 0x4c8);
  local_28 = *param_7;
  local_20 = *(undefined4 *)(param_7 + 1);
  local_10 = *(undefined4 *)(param_3 + 1);
  local_18 = *param_3;
  (**(code **)(lVar1 + 0x9c8))
            (*(longlong **)(param_1 + 0x4c8),lVar1,&local_18,param_4,param_5,param_6,&local_28,
             &local_38,param_9,param_10,param_11,0,0,param_12,param_13);
  return;
}



// FUNCTION 14231c7c0 FUN_14231c7c0 body=230 status=ok
// SIG undefined FUN_14231c7c0(void)

void FUN_14231c7c0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined1 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined1 param_14,undefined2 param_15)

{
  longlong lVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_38 = *param_8;
  local_30 = *(undefined4 *)(param_8 + 1);
  lVar1 = **(longlong **)(param_1 + 0x4c8);
  local_28 = *param_7;
  local_20 = *(undefined4 *)(param_7 + 1);
  local_10 = *(undefined4 *)(param_3 + 1);
  local_18 = *param_3;
  (**(code **)(lVar1 + 0x9c0))
            (*(longlong **)(param_1 + 0x4c8),lVar1,&local_18,param_4,param_5,param_6,&local_28,
             &local_38,param_9,param_10,param_11,param_12,param_13,param_14,param_15);
  return;
}



// FUNCTION 14231c8b0 FUN_14231c8b0 body=230 status=ok
// SIG undefined FUN_14231c8b0(void)

void FUN_14231c8b0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined1 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined1 param_14,undefined2 param_15)

{
  longlong lVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_38 = *param_8;
  local_30 = *(undefined4 *)(param_8 + 1);
  lVar1 = **(longlong **)(param_1 + 0x4c8);
  local_28 = *param_7;
  local_20 = *(undefined4 *)(param_7 + 1);
  local_10 = *(undefined4 *)(param_3 + 1);
  local_18 = *param_3;
  (**(code **)(lVar1 + 0x9c8))
            (*(longlong **)(param_1 + 0x4c8),lVar1,&local_18,param_4,param_5,param_6,&local_28,
             &local_38,param_9,param_10,param_11,param_12,param_13,param_14,param_15);
  return;
}



// FUNCTION 14231c9a0 FUN_14231c9a0 body=158 status=ok
// SIG undefined FUN_14231c9a0(void)

void FUN_14231c9a0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined1 param_8,
                  undefined2 param_9)

{
  longlong lVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_20 = *(undefined4 *)(param_4 + 1);
  local_28 = *param_4;
  local_10 = *(undefined4 *)(param_3 + 1);
  lVar1 = **(longlong **)(param_1 + 0x4c8);
  local_18 = *param_3;
  (**(code **)(lVar1 + 0x9a8))
            (*(longlong **)(param_1 + 0x4c8),lVar1,&local_18,&local_28,param_5,param_6,param_7,0,0,
             param_8,param_9);
  return;
}



// FUNCTION 14231ca40 FUN_14231ca40 body=158 status=ok
// SIG undefined FUN_14231ca40(void)

void FUN_14231ca40(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined1 param_8,
                  undefined2 param_9)

{
  longlong lVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_20 = *(undefined4 *)(param_4 + 1);
  local_28 = *param_4;
  local_10 = *(undefined4 *)(param_3 + 1);
  lVar1 = **(longlong **)(param_1 + 0x4c8);
  local_18 = *param_3;
  (**(code **)(lVar1 + 0x9b0))
            (*(longlong **)(param_1 + 0x4c8),lVar1,&local_18,&local_28,param_5,param_6,param_7,0,0,
             param_8,param_9);
  return;
}



// FUNCTION 14231cae0 FUN_14231cae0 body=49 status=ok
// SIG undefined FUN_14231cae0(void)

void FUN_14231cae0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_18;
  undefined4 local_10;
  
  local_10 = *(undefined4 *)(param_3 + 1);
  local_18 = *param_3;
  (**(code **)(**(longlong **)(param_1 + 0x4c8) + 0x9f0))
            (*(longlong **)(param_1 + 0x4c8),param_2,&local_18);
  return;
}



// FUNCTION 14231cb20 FUN_14231cb20 body=49 status=ok
// SIG undefined FUN_14231cb20(void)

void FUN_14231cb20(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_18;
  undefined4 local_10;
  
  local_10 = *(undefined4 *)(param_3 + 1);
  local_18 = *param_3;
  (**(code **)(**(longlong **)(param_1 + 0x4c8) + 0x9f8))
            (*(longlong **)(param_1 + 0x4c8),param_2,&local_18);
  return;
}



// FUNCTION 14231cb60 FUN_14231cb60 body=160 status=ok
// SIG undefined FUN_14231cb60(void)

void FUN_14231cb60(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined2 param_11)

{
  longlong lVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_20 = *(undefined4 *)(param_4 + 1);
  local_28 = *param_4;
  local_10 = *(undefined4 *)(param_3 + 1);
  lVar1 = **(longlong **)(param_1 + 0x4c8);
  local_18 = *param_3;
  (**(code **)(lVar1 + 0x9a8))
            (*(longlong **)(param_1 + 0x4c8),lVar1,&local_18,&local_28,param_5,param_6,param_7,
             param_8,param_9,param_10,param_11);
  return;
}



// FUNCTION 14231cc00 FUN_14231cc00 body=160 status=ok
// SIG undefined FUN_14231cc00(void)

void FUN_14231cc00(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined2 param_11)

{
  longlong lVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_20 = *(undefined4 *)(param_4 + 1);
  local_28 = *param_4;
  local_10 = *(undefined4 *)(param_3 + 1);
  lVar1 = **(longlong **)(param_1 + 0x4c8);
  local_18 = *param_3;
  (**(code **)(lVar1 + 0x9b0))
            (*(longlong **)(param_1 + 0x4c8),lVar1,&local_18,&local_28,param_5,param_6,param_7,
             param_8,param_9,param_10,param_11);
  return;
}



// FUNCTION 14231cca0 FUN_14231cca0 body=792 status=ok
// SIG undefined FUN_14231cca0(void)

void FUN_14231cca0(longlong *param_1,float *param_2,int *param_3)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
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
  
  iVar2 = *param_3;
  if (iVar2 != 2) {
    if (iVar2 == 1) {
      if ((0.0001 < (float)param_3[1]) || (0.0001 < (float)param_3[2])) goto LAB_14231cce5;
      fVar14 = (float)param_3[3];
    }
    else {
      if ((iVar2 != 2) && (iVar2 != 3)) goto LAB_14231cec9;
      fVar14 = (float)param_3[1];
    }
    if (fVar14 <= 0.0001) {
LAB_14231cec9:
      *param_1 = 0x38d1b71700000000;
      *(undefined1 *)(param_1 + 2) = 0;
      param_1[3] = (longlong)param_1;
      return;
    }
  }
LAB_14231cce5:
  if (iVar2 == 1) {
    fVar14 = (float)param_3[1];
    fVar12 = (float)param_3[2];
    fVar10 = (float)param_3[3];
    if (fVar14 < 0.0001) {
      fVar14 = 0.0001;
    }
    if (fVar12 < 0.0001) {
      fVar12 = 0.0001;
    }
    if (fVar10 < 0.0001) {
      fVar10 = 0.0001;
    }
    *(undefined4 *)param_1 = 3;
    *(float *)((longlong)param_1 + 4) = fVar14;
    *(float *)(param_1 + 1) = fVar12;
    *(float *)((longlong)param_1 + 0xc) = fVar10;
    *(undefined1 *)(param_1 + 2) = 1;
    lVar3 = *(longlong *)param_2;
    lVar4 = *(longlong *)(param_2 + 2);
    param_1[3] = (longlong)param_1;
    param_1[4] = lVar3;
    param_1[5] = lVar4;
  }
  else {
    if (iVar2 == 2) {
      fVar14 = (float)param_3[1];
      if (fVar14 <= 0.0001) {
        fVar14 = 0.0001;
      }
      *param_1 = (ulonglong)(uint)fVar14 << 0x20;
      *(undefined1 *)(param_1 + 2) = 0;
      param_1[3] = (longlong)param_1;
      return;
    }
    if (iVar2 == 3) {
      fVar14 = (float)param_3[1];
      fVar12 = fVar14;
      if (fVar14 <= 0.0001) {
        fVar12 = 0.0001;
      }
      if ((float)param_3[2] <= fVar14) {
        *param_1 = (ulonglong)(uint)fVar12 << 0x20;
        *(undefined1 *)(param_1 + 2) = 0;
        param_1[3] = (longlong)param_1;
        return;
      }
      fVar14 = (float)param_3[2] - fVar14;
      if (fVar14 <= 0.0001) {
        fVar14 = 0.0001;
      }
      *param_1 = CONCAT44(fVar12,2);
      *(float *)(param_1 + 1) = fVar14;
      *(undefined1 *)(param_1 + 2) = 2;
      fVar14 = *param_2;
      fVar12 = param_2[3];
      fVar10 = param_2[1];
      fVar1 = param_2[2];
      param_1[3] = (longlong)param_1;
      fVar8 = DAT_146531c04;
      fVar7 = DAT_146531c00;
      fVar6 = DAT_146531bfc;
      fVar5 = DAT_146531bf8;
      fVar15 = fVar12 * DAT_146531bfc;
      fVar13 = fVar1 * DAT_146531c04;
      fVar11 = fVar1 * DAT_146531bf8;
      fVar16 = fVar1 * DAT_146531c00;
      fVar9 = fVar10 * DAT_146531c04;
      *(float *)(param_1 + 4) =
           (fVar12 * DAT_146531bf8 + fVar14 * DAT_146531c04 + fVar10 * DAT_146531c00) -
           fVar1 * DAT_146531bfc;
      *(float *)((longlong)param_1 + 0x24) = (fVar15 + fVar9 + fVar11) - fVar14 * fVar7;
      *(float *)(param_1 + 5) = (fVar13 + fVar12 * fVar7 + fVar14 * fVar6) - fVar10 * fVar5;
      *(float *)((longlong)param_1 + 0x2c) =
           ((fVar12 * fVar8 - fVar14 * fVar5) - fVar10 * fVar6) - fVar16;
      return;
    }
  }
  return;
}



// FUNCTION 14231cfc0 FUN_14231cfc0 body=22 status=ok
// SIG undefined FUN_14231cfc0(void)

void FUN_14231cfc0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x8a0) = *param_2;
  *(undefined4 *)(param_1 + 0x8a8) = uVar1;
  return;
}



// FUNCTION 14231cfe0 FUN_14231cfe0 body=225 status=ok
// SIG undefined FUN_14231cfe0(void)

void FUN_14231cfe0(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 local_res8;
  longlong local_res10;
  undefined1 local_res20 [8];
  longlong local_88;
  longlong *local_80;
  longlong lStack_78;
  longlong *local_70;
  undefined8 *puStack_68;
  undefined1 *local_60;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_88 = param_3;
  if (param_2 == 0) {
    local_res8 = 0;
    local_88 = 0;
  }
  bVar3 = param_2 != *(longlong *)(param_1 + 0x4d8);
  local_res8 = CONCAT71(local_res8._1_7_,bVar3);
  if ((bVar3) || (local_88 != *(longlong *)(param_1 + 0x4e0))) {
    local_80 = &local_res10;
    local_28 = 0;
    local_70 = &local_88;
    local_18 = 0;
    puStack_68 = &local_res8;
    local_60 = local_res20;
    local_res10 = param_2;
    local_res20[0] = param_4;
    lStack_78 = param_1;
    puVar1 = (undefined8 *)FUN_140438ef0(0x30,local_48);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &PTR_FUN_143f4d098;
      puVar1[1] = local_80;
      puVar1[2] = lStack_78;
      puVar1[3] = local_70;
      puVar1[4] = puStack_68;
      puVar1[5] = local_60;
    }
    local_58[0] = &LAB_1423072e0;
    uVar2 = FUN_14247f500();
    FUN_14247d5a0(uVar2,*(undefined8 *)(param_1 + 0x4c8),local_58);
  }
  return;
}



// FUNCTION 14231d0d0 FUN_14231d0d0 body=250 status=ok
// SIG undefined FUN_14231d0d0(void)

void FUN_14231d0d0(longlong *param_1,float param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  ulonglong uVar3;
  
  param_1[0x1d] = *(longlong *)((longlong)param_1 + 0x104);
  uVar3 = param_1[0x22];
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)((longlong)param_1 + 0x10c);
  fVar1 = *(float *)((longlong)param_1 + 0x2c);
  *(ulonglong *)((longlong)param_1 + 0xf4) = uVar3;
  *(int *)((longlong)param_1 + 0xfc) = (int)param_1[0x23];
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((longlong)param_1 + 0x11c);
  *(float *)((longlong)param_1 + 0x16c) = fVar1;
  if (0.0 < *(float *)(param_1 + 6)) {
    *(ushort *)((longlong)param_1 + 0xcc) = *(ushort *)((longlong)param_1 + 0xcc) | 1;
    *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  }
  if (0.0 < fVar1) {
    fVar2 = *(float *)((longlong)param_1 + 0x34);
    uVar3 = (ulonglong)(uint)fVar2;
    if ((0.0 < fVar2) && (fVar2 < param_2)) {
      *(ushort *)((longlong)param_1 + 0xcc) = *(ushort *)((longlong)param_1 + 0xcc) | 2;
      fVar2 = fVar2 - (fVar1 - param_2);
      uVar3 = (ulonglong)(uint)fVar2;
      *(float *)(param_1 + 0x1b) = fVar2;
    }
  }
  (**(code **)(*param_1 + 0x280))(uVar3,param_2,0x3f800000,param_3);
  if (param_1[0x2e] != 0) {
    UCameraAnimInst::SetCurrentTime(param_1[0x2e],param_2);
    FUN_1422e4370(param_1[0x2e],param_3);
  }
  return;
}



// FUNCTION 14231d1d0 FUN_14231d1d0 body=410 status=ok
// SIG undefined FUN_14231d1d0(void)

void FUN_14231d1d0(longlong *param_1,longlong param_2,undefined4 param_3,longlong param_4,
                  char param_5)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 local_res10;
  undefined1 local_res20 [8];
  undefined1 local_38 [16];
  
  piVar1 = *(int **)(param_2 + 0x10);
  uVar8 = 0;
  lVar9 = 0;
  if (((piVar1 == (int *)0x0) || (*piVar1 != 1)) || (*(longlong *)(piVar1 + 2) == 0)) {
    piVar2 = (int *)param_1[2];
    if (((piVar2 == (int *)0x0) || (*piVar2 != 7)) ||
       (plVar10 = *(longlong **)(piVar2 + 2), plVar10 == (longlong *)0x0)) {
      if (((piVar1 == (int *)0x0) || (*piVar1 != 7)) ||
         (plVar10 = *(longlong **)(piVar1 + 2), plVar10 == (longlong *)0x0)) goto LAB_14231d2dc;
      puVar7 = local_38;
    }
    else {
      puVar7 = local_res20;
    }
    uVar5 = (**(code **)(*plVar10 + 8))(plVar10,puVar7);
    lVar9 = FWeakObjectPtr::Get(uVar5);
    if ((lVar9 == 0) || ((*(byte *)(lVar9 + 0x2ef) & 2) == 0)) {
      local_res10 = 0;
      *(undefined8 *)(param_4 + 0x80) = 0;
      *(undefined4 *)(param_4 + 0x60) = 0xffffffff;
    }
    else {
      uVar3 = (**(code **)(*plVar10 + 0x10))(plVar10);
      *(undefined4 *)(param_4 + 0x60) = uVar3;
      puVar6 = (undefined8 *)(**(code **)(*plVar10 + 0x18))(plVar10,&local_res10);
      *(undefined8 *)(param_4 + 0x80) = *puVar6;
    }
  }
  else {
    puVar4 = (undefined4 *)FUN_142697ca0(*(longlong *)(piVar1 + 2),param_1);
    *(undefined4 *)(param_4 + 0x60) = *puVar4;
    lVar9 = FWeakObjectPtr::Get(puVar4 + 0x50);
    if (lVar9 != 0) {
      *(undefined8 *)(param_4 + 0x80) = *(undefined8 *)(lVar9 + 0x90);
    }
    lVar9 = FWeakObjectPtr::Get(puVar4 + 0x4e);
  }
LAB_14231d2dc:
  FWeakObjectPtr::operator=(&local_res10,0);
  *(undefined4 *)(param_4 + 100) = (undefined4)local_res10;
  *(undefined4 *)(param_4 + 0x68) = local_res10._4_4_;
  if (lVar9 != 0) {
    FWeakObjectPtr::operator=(param_4 + 0x6c,*(undefined8 *)(lVar9 + 0x118));
    FWeakObjectPtr::operator=(param_4 + 0x74,lVar9);
    if (param_5 != '\0') {
      lVar9 = (**(code **)(*param_1 + 0xd0))(param_1,param_3);
      if (lVar9 != 0) {
        piVar1 = *(int **)(lVar9 + 0x10);
        if ((piVar1 != (int *)0x0) && (*piVar1 == 2)) {
          uVar8 = *(undefined8 *)(piVar1 + 2);
        }
        FWeakObjectPtr::operator=(param_4 + 100,uVar8);
      }
    }
  }
  *(undefined4 *)(param_4 + 4) = 0xffffffff;
  return;
}



// FUNCTION 14231d370 FUN_14231d370 body=637 status=ok
// SIG undefined FUN_14231d370(void)

void FUN_14231d370(longlong *param_1,longlong param_2,byte param_3,byte param_4)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  byte bVar13;
  ulonglong uVar14;
  undefined8 local_res8;
  longlong local_res10;
  byte local_res18;
  byte local_res20;
  undefined1 local_78 [8];
  longlong *local_70;
  uint local_68;
  uint local_64;
  longlong *local_60;
  int local_58;
  
  local_res18 = param_3;
  local_res20 = param_4;
  lVar4 = (**(code **)(*param_1 + 0x148))();
  local_res8 = 0xe6;
  local_res10 = lVar4;
  if (param_2 == 0xe6) {
    UWorld::GetPlayerControllerIterator(lVar4,&local_60);
    for (; (-1 < local_58 && (local_58 < (int)local_60[1])); local_58 = local_58 + 1) {
      lVar6 = FWeakObjectPtr::Get(*local_60 + (longlong)local_58 * 8);
      if (lVar6 != 0) {
        puVar5 = *(undefined8 **)(lVar4 + 0x88);
        uVar9 = 0;
        local_70 = (longlong *)0x0;
        local_68 = 0;
        local_64 = 0;
        uVar12 = (longlong)*(int *)(lVar4 + 0x90) & 0x1fffffffffffffff;
        if (puVar5 + *(int *)(lVar4 + 0x90) < puVar5) {
          uVar12 = uVar9;
        }
        bVar13 = param_3;
        if (uVar12 != 0) {
          uVar2 = (uint)param_4;
          uVar3 = (uint)param_4;
          uVar11 = uVar9;
          uVar14 = uVar9;
          while( true ) {
            uVar1 = *puVar5;
            local_68 = (int)uVar11 + 1;
            if ((int)uVar9 < (int)local_68) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_70,uVar11);
            }
            plVar10 = (longlong *)0x0;
            plVar8 = local_70 + (longlong)(int)uVar11 * 2;
            if (plVar8 != (longlong *)0x0) {
              plVar8[1] = 0;
              *plVar8 = 0;
              plVar10 = plVar8;
            }
            puVar7 = (undefined8 *)ULevelStreaming::GetWorldAssetPackageFName(uVar1,&local_res8);
            plVar8 = (longlong *)APlayerController::NetworkRemapPath(lVar6,local_78,*puVar7,0);
            puVar5 = puVar5 + 1;
            uVar14 = uVar14 + 1;
            *plVar10 = *plVar8;
            *(undefined4 *)(plVar10 + 1) = 0xffffffff;
            *(uint *)((longlong)plVar10 + 0xc) =
                 ((*(uint *)((longlong)plVar10 + 0xc) & 0xfffffffe | (uint)param_3) & 0xfffffffd |
                 uVar2 + uVar3) & 0xfffffffb;
            param_4 = local_res20;
            bVar13 = local_res18;
            if (uVar14 == uVar12) break;
            uVar9 = (ulonglong)local_64;
            uVar11 = (ulonglong)local_68;
          }
        }
        FUN_1429e14f0(lVar6,&local_70);
        lVar4 = local_res10;
        param_3 = bVar13;
        if (local_70 != (longlong *)0x0) {
          FMemory::Free();
          lVar4 = local_res10;
        }
      }
    }
  }
  else {
    UWorld::GetPlayerControllerIterator(lVar4,&local_70);
    for (; (-1 < (int)local_68 && ((int)local_68 < (int)local_70[1])); local_68 = local_68 + 1) {
      lVar4 = FWeakObjectPtr::Get(*local_70 + (longlong)(int)local_68 * 8);
      if (lVar4 != 0) {
        puVar5 = (undefined8 *)APlayerController::NetworkRemapPath(lVar4,&local_res8,param_2,0);
        FUN_1429e1490(lVar4,*puVar5,param_3,param_4,0,0xffffffff);
      }
    }
  }
  return;
}



// FUNCTION 14231d5f0 FUN_14231d5f0 body=157 status=ok
// SIG undefined FUN_14231d5f0(void)

void FUN_14231d5f0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar1 = 0;
  }
  lVar1 = *(longlong *)(lVar1 + 0x5b8);
  if (lVar1 != 0) {
    plVar2 = (longlong *)UInputSettings::GetPrivateStaticClass();
    lVar3 = plVar2[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
      lVar3 = plVar2[0x1f];
    }
    plVar4 = *(longlong **)(lVar3 + 0x28);
    plVar2 = plVar4 + (longlong)*(int *)(lVar3 + 0x30) * 3;
    if (plVar4 != plVar2) {
      do {
        if (*plVar4 == DAT_1469e97f0) {
          FUN_1428bc340(lVar1,*(undefined4 *)((longlong)plVar4 + 0xc));
          return;
        }
        plVar4 = plVar4 + 3;
      } while (plVar4 != plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14231d690 FUN_14231d690 body=117 status=ok
// SIG undefined FUN_14231d690(void)

void FUN_14231d690(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  SWidget::EnableToolTipForceField();
  if ((((param_1[0x99] != 0) && ((char)param_1[0x25] == '\x03')) &&
      (cVar1 = (**(code **)(*(longlong *)(param_1[0x99] + 0x218) + 0x40))(), cVar1 != '\0')) &&
     (lVar2 = (**(code **)(*(longlong *)(param_1[0x99] + 0x218) + 0x30))(), lVar2 != 0)) {
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    *(undefined4 *)(lVar2 + 8) = *(undefined4 *)(lVar3 + 0x790);
  }
  return;
}



// FUNCTION 14231d710 FUN_14231d710 body=310 status=ok
// SIG undefined FUN_14231d710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14231d710(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  uint local_38;
  float local_34;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  plVar3 = (longlong *)0x0;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    plVar3 = (longlong *)param_1[4];
  }
  (**(code **)(*plVar3 + 0x7a8))(plVar3,&local_38,local_18);
  if (plVar3[0x91] == 0) {
    local_28 = (ulonglong)local_38;
  }
  else {
    lVar1 = *(longlong *)(plVar3[0x91] + 0x168);
    if (lVar1 == 0) {
      local_28 = _DAT_1468b5d90;
    }
    else {
      local_28 = *(ulonglong *)(lVar1 + 0x220);
    }
    local_38 = (uint)local_28;
    local_34 = (float)(local_28 >> 0x20);
  }
  local_30 = 0;
  local_20 = *(undefined4 *)(lVar2 + 0x7c4);
  local_28 = CONCAT44((int)local_34 + *(int *)(lVar2 + 0x7c0),
                      (int)(float)local_28 + *(int *)(lVar2 + 0x7bc));
  FUN_1428d58f0(lVar2,&local_28);
  return;
}



// FUNCTION 14231d850 FUN_14231d850 body=29 status=ok
// SIG undefined FUN_14231d850(void)

longlong FUN_14231d850(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x56c);
  if (((uVar1 & 8) != 0) && ((uVar1 & 0x10) == 0)) {
    return (ulonglong)(uint3)(uVar1 >> 8) << 8;
  }
  *(uint *)(param_1 + 0x56c) = uVar1 & 0xffffffef;
  return CONCAT71((uint7)(uint3)((uVar1 & 0xffffffef) >> 8),1);
}



// FUNCTION 14231d870 FUN_14231d870 body=1270 status=ok
// SIG undefined FUN_14231d870(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14231d870(longlong *param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_148 [32];
  undefined4 *local_128;
  char local_118;
  longlong local_110;
  undefined4 local_108;
  int local_100 [2];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [48];
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if ((param_1[0x98] != 0) && (lVar7 = FUN_1423ac7e0(), lVar7 != 0)) {
    uVar8 = FUN_1423ac7e0(param_1[0x98]);
    plVar9 = (longlong *)FUN_142274500(uVar8);
    if ((plVar9 != (longlong *)0x0) && ((param_1[0x99] != 0 && (param_1[0x98] != 0)))) {
      iVar12 = (int)param_1[0xe3] + -1;
      lVar7 = (longlong)iVar12;
      if (-1 < iVar12) {
        lVar11 = lVar7 * 0x188;
        do {
          lVar2 = param_1[0xe2];
          fVar13 = *(float *)(lVar11 + lVar2);
          local_110 = lVar7;
          lVar10 = (**(code **)(*param_1 + 0x148))(param_1);
          if ((*(float *)(lVar10 + 0x790) - fVar13 <= 0.5) &&
             (((lVar10 = *(longlong *)(lVar11 + 0x10 + lVar2), lVar10 != 0 && (lVar10 == *plVar9))
              || (cVar4 = FUN_142275af0(*plVar9,lVar2 + 0x168 + lVar11,
                                        *(undefined4 *)(lVar11 + 0x18 + lVar2)), cVar4 != '\0')))) {
            lVar10 = *plVar9;
            fVar13 = *(float *)(lVar11 + 0x18 + lVar2);
            if (*(char *)((longlong)plVar9 + 0x184) == '\0') {
              fVar14 = *(float *)(plVar9 + 0x25);
            }
            else {
              fVar14 = *(float *)(plVar9 + 0x30);
            }
            fVar14 = fVar14 - fVar13;
            local_100[0] = FUN_1422746f0(lVar10);
            if (local_100[0] != -1) {
              iVar5 = FAnimMontageInstance::GetNextSectionID(plVar9,local_100);
              iVar6 = FUN_1422746f0(lVar10,fVar13);
              local_118 = iVar6 == local_100[0];
              if ((iVar5 != local_100[0]) ||
                 (fVar13 = (float)FUN_142274830(lVar10), ABS(fVar14) <= fVar13 * 0.5)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (((local_118 != '\0') && (!bVar3)) &&
                 (0.0 <= fVar14 * *(float *)((longlong)plVar9 + 300))) {
                if (iVar12 == -1) {
                  return;
                }
                lVar7 = param_1[0x2d];
                if (lVar7 == 0) {
                  local_110 = _DAT_1468b5d90;
                  local_108 = DAT_1468b5d98;
                }
                else {
                  local_110 = *(undefined8 *)(lVar7 + 0x220);
                  local_108 = *(undefined4 *)(lVar7 + 0x228);
                }
                local_c8 = local_110;
                local_c0 = local_108;
                if (lVar7 == 0) {
                  local_e8 = 0;
                  local_e4 = 0;
                  local_e0 = 0;
                  local_dc = 0x3f800000;
                }
                else {
                  auVar1 = *(undefined1 (*) [16])(lVar7 + 0x210);
                  local_e4 = auVar1._4_4_;
                  local_e8 = auVar1._0_4_;
                  local_e0 = auVar1._8_4_;
                  local_dc = auVar1._12_4_;
                }
                lVar7 = (longlong)iVar12 * 0x188 + param_1[0xe2];
                cVar4 = FUN_14231bd50(param_1,lVar7);
                if (cVar4 != '\0') {
                  if (*(char *)((longlong)plVar9 + 0x184) == '\0') {
                    fVar13 = *(float *)(plVar9 + 0x25);
                  }
                  else {
                    fVar13 = *(float *)(plVar9 + 0x30);
                  }
                  fVar13 = fVar13 - *(float *)(lVar7 + 0x18);
                  if (0.0001 < ABS(fVar13)) {
                    FUN_14225d950(*plVar9,local_b8);
                    if ((param_1[0x99] != 0) && (1e-08 < ABS(*(float *)((longlong)plVar9 + 300)))) {
                      FUN_1423532e0(param_1[0x99],fVar13 / *(float *)((longlong)plVar9 + 300),
                                    local_b8);
                      *(uint *)(param_1[0x99] + 0x300) =
                           *(uint *)(param_1[0x99] + 0x300) & 0xffffefff;
                      lVar7 = param_1[0x2d];
                      if (lVar7 == 0) {
                        local_f8 = 0;
                        local_f0 = 0;
                        local_ec = 0x3f800000;
                      }
                      else {
                        local_f8 = *(undefined4 *)(lVar7 + 0x210);
                        local_f0 = *(undefined4 *)(lVar7 + 0x218);
                        local_ec = *(undefined4 *)(lVar7 + 0x21c);
                      }
                      local_f4 = 0;
                      if (lVar7 == 0) {
                        local_110 = _DAT_1468b5d90;
                        local_108 = DAT_1468b5d98;
                      }
                      else {
                        local_110 = *(undefined8 *)(lVar7 + 0x220);
                        local_108 = *(undefined4 *)(lVar7 + 0x228);
                      }
                      local_128 = &local_f8;
                      local_d8 = local_110;
                      local_d0 = local_108;
                      (**(code **)(*(longlong *)(param_1[0x99] + 0x218) + 0x20))
                                ((longlong *)(param_1[0x99] + 0x218),&local_c8,&local_e8,&local_d8);
                    }
                  }
                }
                FUN_14231a3f0(param_1 + 0xe2,0,iVar12 + 1,1);
                return;
              }
            }
          }
          iVar12 = iVar12 + -1;
          lVar7 = lVar7 + -1;
          lVar11 = lVar11 + -0x188;
        } while (0 < local_110);
      }
    }
  }
  return;
}



// FUNCTION 14231dd70 FUN_14231dd70 body=464 status=ok
// SIG undefined FUN_14231dd70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14231dd70(longlong param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar6 = 0;
  }
  plVar4 = (longlong *)AActor::GetWorldSettings(uVar6);
  (**(code **)(*plVar4 + 0x700))(plVar4,param_2);
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uVar7 = 0;
  if (0.001 < ABS(param_2 - 1.0)) {
    uVar7 = 0x20;
  }
  if (*(int *)(lVar2 + 0x38) < DAT_146aefde0) {
    _Init_thread_header(&DAT_146aefde0);
    if (DAT_146aefde0 == -1) {
      FName::FName(&DAT_146aefdd8,L"GbxPerfAnalytics",1);
      _Init_thread_footer(&DAT_146aefde0);
    }
  }
  uVar6 = DAT_146aefdd8;
  uVar5 = FUN_14168dc80();
  cVar3 = FModuleManager::IsModuleLoaded(uVar5,uVar6);
  iVar1 = *(int *)(lVar2 + 0x38);
  if (cVar3 == '\0') {
    if (iVar1 < DAT_146aefe00) {
      _Init_thread_header(&DAT_146aefe00);
      if (DAT_146aefe00 == -1) {
        DAT_146aefdf0 = 0;
        DAT_146aefde8 = &PTR_FUN_143f3ee80;
        _DAT_146aefdf8 = 0;
        atexit(FUN_143ea8fd0);
        _Init_thread_footer(&DAT_146aefe00);
      }
    }
    plVar4 = (longlong *)&DAT_146aefde8;
  }
  else {
    if (iVar1 < DAT_146aefde0) {
      _Init_thread_header(&DAT_146aefde0);
      if (DAT_146aefde0 == -1) {
        FName::FName(&DAT_146aefdd8,L"GbxPerfAnalytics",1);
        _Init_thread_footer(&DAT_146aefde0);
      }
    }
    uVar6 = DAT_146aefdd8;
    uVar5 = FUN_14168dc80();
    plVar4 = (longlong *)FModuleManager::GetModule(uVar5,uVar6);
  }
  (**(code **)(*plVar4 + 0x68))(plVar4,uVar7,0x20,0);
  return;
}



// FUNCTION 14231df40 FUN_14231df40 body=132 status=ok
// SIG undefined FUN_14231df40(void)

void FUN_14231df40(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  lVar1 = *(longlong *)(lVar1 + 0x140);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x4c0) != 0)) {
    FUN_142227350(*(longlong *)(lVar1 + 0x4c0),1);
    lVar2 = 0;
    *(undefined8 *)(lVar1 + 0x4c0) = 0;
    if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
      lVar2 = param_1[4];
    }
    if ((*(longlong *)(lVar2 + 0x688) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x688) + 0x58), lVar1 != 0)) {
      *(undefined1 *)(lVar1 + 0x1ec) = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014231dfbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x148))(param_1);
  return;
}



// FUNCTION 14231dfd0 StartCharting body=54 status=ok
// SIG undefined StartCharting(void)

void FPerformanceTrackingChart::StartCharting(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FGenericPlatformMisc::GetDeviceTemperatureLevel();
  *(undefined4 *)(param_1 + 0x150) = uVar1;
  *(undefined4 *)(param_1 + 0x15c) = uVar1;
  *(undefined4 *)(param_1 + 0x158) = uVar1;
  *(undefined4 *)(param_1 + 0x160) = 0xffffffff;
  return;
}



// FUNCTION 14231e010 StartCharting body=506 status=ok
// SIG undefined StartCharting(void)

void FPerformanceTrackingSystem::StartCharting(double *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  wchar_t *_Str;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  double dVar9;
  LARGE_INTEGER local_res8;
  wchar_t *local_38;
  int local_30;
  undefined4 local_2c;
  longlong *local_28;
  ulonglong local_20;
  
  QueryPerformanceCounter(&local_res8);
  dVar9 = (double)local_res8.QuadPart * DAT_1468b02f8;
  param_1[2] = 0.0;
  *param_1 = dVar9 + 16777216.0;
  DAT_146aefc28 = 0;
  if ((DAT_146aefc2c < 0) && (DAT_146aefc2c != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_146aefc20,0);
  }
  local_28 = (longlong *)0x0;
  local_20 = 0;
  local_38 = (wchar_t *)0x0;
  local_30 = *(int *)(DAT_146aefc18 + 1);
  lVar4 = (longlong)local_30;
  pvVar1 = (void *)*DAT_146aefc18;
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
    ::_guard_xfg_dispatch_icall_nop(local_38,pvVar1,lVar4 * 2);
  }
  FUN_141594550(&local_38,&local_28,&DAT_14503870c,1);
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  uVar8 = (ulonglong)(int)local_20;
  plVar6 = local_28 + uVar8 * 2;
  plVar5 = local_28;
  if (local_28 != plVar6) {
    do {
      local_30 = (int)plVar5[1];
      lVar4 = (longlong)local_30;
      pvVar1 = (void *)*plVar5;
      local_38 = (wchar_t *)0x0;
      if (local_30 == 0) {
        local_2c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
        ::_guard_xfg_dispatch_icall_nop(local_38,pvVar1,lVar4 * 2);
      }
      FString::TrimStartAndEndInline(&local_38);
      _Str = L"";
      if (local_30 != 0) {
        _Str = local_38;
      }
      iVar3 = _wtoi(_Str);
      iVar2 = DAT_146aefc28;
      lVar4 = (longlong)DAT_146aefc28;
      DAT_146aefc28 = DAT_146aefc28 + 1;
      if (DAT_146aefc2c < DAT_146aefc28) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146aefc20,iVar2);
      }
      *(int *)(DAT_146aefc20 + lVar4 * 4) = iVar3;
      if (local_38 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    } while (plVar5 != plVar6);
    uVar8 = local_20 & 0xffffffff;
  }
  DAT_146b17160 = 0;
  uVar7 = (uint)uVar8;
  plVar5 = local_28;
  while (uVar7 != 0) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
    uVar7 = (int)uVar8 - 1;
    uVar8 = (ulonglong)uVar7;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 14231e210 FUN_14231e210 body=1506 status=ok
// SIG undefined FUN_14231e210(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14231e210(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong **pplVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  int iVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  void *pvVar17;
  undefined1 local_res8 [8];
  ushort uVar18;
  wchar_t *local_f8;
  int local_f0;
  int local_ec;
  wchar_t *local_e8;
  int local_e0;
  int local_dc;
  wchar_t *local_d8;
  int local_d0;
  int local_cc;
  void *local_c8;
  ulonglong local_c0;
  longlong *local_b8;
  longlong *local_b0;
  wchar_t *local_a8;
  int local_a0;
  int local_9c;
  wchar_t *local_98;
  int local_90;
  int local_8c;
  wchar_t *local_88;
  int local_80;
  int local_7c;
  longlong local_78 [2];
  longlong local_68 [5];
  undefined4 uStack_3c;
  wchar_t *pwVar16;
  
  FDateTime::Now(local_res8);
  plVar12 = (longlong *)0x0;
  pplVar2 = (longlong **)(param_1 + 0xb50);
  if (*pplVar2 == (longlong *)0x0) {
    plVar7 = (longlong *)operator_new(0x198);
    plVar15 = plVar12;
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_StartCharting_14503e038;
      FString::FString(plVar7 + 1,param_2);
      plVar7[3] = 0;
      plVar7[4] = 0;
      plVar7[9] = 0;
      plVar7[10] = 0;
      plVar7[0xf] = 0;
      plVar7[0x10] = 0;
      plVar7[0x2d] = 0;
      plVar7[0x2e] = 0;
      FUN_14231b1f0(plVar7,local_res8);
      plVar15 = plVar7;
    }
    plVar7 = (longlong *)operator_new(0x18);
    if (plVar7 != (longlong *)0x0) {
      *(undefined4 *)(plVar7 + 1) = 1;
      *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
      *plVar7 = (longlong)&PTR_FUN_143fd0100;
      plVar7[2] = (longlong)plVar15;
      plVar12 = plVar7;
    }
    local_b8 = plVar15;
    local_b0 = plVar12;
    SharedPointerInternals::EnableSharedFromThis(&local_b8,plVar15,plVar15);
    if (pplVar2 != &local_b8) {
      *pplVar2 = plVar15;
      local_b8 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xb58,&local_b0);
      plVar12 = local_b0;
    }
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar15 = plVar12 + 1;
      lVar10 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    plVar12 = *(longlong **)(param_1 + 0xb58);
    plVar15 = *pplVar2;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    iVar11 = *(int *)(param_1 + 0xb68);
    *(int *)(param_1 + 0xb68) = iVar11 + 1;
    if (*(int *)(param_1 + 0xb6c) < iVar11 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xb60,iVar11);
    }
    plVar7 = (longlong *)((longlong)iVar11 * 0x10 + *(longlong *)(param_1 + 0xb60));
    *plVar7 = (longlong)plVar15;
    plVar7[1] = (longlong)plVar12;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    if (*(int *)(param_1 + 0xb68) == 1) {
      _DAT_146aefcc8 = 0;
      _DAT_146aefcb8 = 0;
      uRam0000000146aefcbc = 0;
      uRam0000000146aefcc0 = 0;
      uRam0000000146aefcc4 = uStack_3c;
      _DAT_146aefca8 = 0;
      _DAT_146aefcb0 = 0;
      FPerformanceTrackingSystem::StartCharting(&DAT_146aefca8);
    }
    (**(code **)*plVar15)(plVar15);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar15 = plVar12 + 1;
      lVar10 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
  }
  else {
    FString::operator=(*pplVar2 + 1,param_2);
  }
  if (*DAT_146aefbf0 != 0) {
    uVar8 = FUN_14168db40();
    cVar6 = FUN_140583fc0(uVar8);
    if (cVar6 == '\0') {
      DAT_146aefca1 = 1;
      FPerformanceTrackingSystem::CreateOutputDirectory(local_78,local_res8);
      local_c8 = (void *)0x0;
      local_c0 = 0x10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
      uVar18 = 0;
      FGenericPlatformString::Convert<char,wchar_t>(local_c8,0x10,"WindowsNoEditor",0x10,0x3f);
      puVar9 = (undefined8 *)FDateTime::ToString(local_res8,local_68);
      local_a8 = (wchar_t *)0x0;
      local_9c = 0;
      iVar11 = *(int *)(puVar9 + 1) + -1;
      if (*(int *)(puVar9 + 1) == 0) {
        iVar11 = 0;
      }
      local_a0 = iVar11 + 0xc;
      if (0 < local_a0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
      }
      iVar14 = local_9c;
      iVar13 = local_a0;
      pwVar16 = local_a8;
      builtin_wcsncpy(local_a8,L"CsvProfile-",0xb);
      _guard_xfg_dispatch_icall_nop(local_a8 + 0xb,(void *)*puVar9,(longlong)iVar11 * 2);
      pwVar16[(longlong)iVar11 + 0xb] = L'\0';
      local_f8 = pwVar16;
      local_ec = iVar14;
      if (iVar14 < (int)(iVar13 + 1 + (uint)(iVar13 == 0))) {
        local_f0 = iVar13;
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_f8);
        iVar13 = local_f0;
      }
      local_f0 = (2 - (uint)(iVar13 != 0)) + iVar13;
      if (local_ec < local_f0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,iVar13);
      }
      iVar14 = 0;
      pwVar16 = (wchar_t *)0x0;
      iVar11 = 0;
      lVar10 = (longlong)iVar13 - (ulonglong)(iVar13 != 0);
      local_f8[lVar10] = L'-';
      local_f8[lVar10 + 1] = L'\0';
      if (local_f0 < 2) {
        lVar10 = (longlong)(int)local_c0;
        local_98 = (wchar_t *)0x0;
        local_90 = (int)local_c0;
        pwVar16 = local_f8;
        if ((int)local_c0 == 0) {
          local_d0 = 0;
          pvVar17 = local_c8;
          local_d8 = (wchar_t *)0x0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,local_c0 & 0xffffffff,0);
          pwVar3 = local_98;
          pvVar17 = local_c8;
          _guard_xfg_dispatch_icall_nop(local_98,local_c8,lVar10 * 2);
          local_d8 = pwVar3;
          iVar11 = local_8c;
          local_d0 = local_90;
        }
      }
      else {
        if ((int)local_c0 != 0) {
          iVar14 = (int)local_c0 + -1;
        }
        if ((local_f0 != 0) || (iVar11 = 1, iVar14 == 0)) {
          iVar11 = 0;
        }
        local_e8 = local_f8;
        local_e0 = local_f0;
        local_dc = local_ec;
        if (local_ec < local_f0 + iVar11 + iVar14) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo();
        }
        iVar13 = local_e0;
        pvVar17 = local_c8;
        local_d8 = local_e8;
        iVar11 = local_dc;
        local_d0 = local_e0;
        if (iVar14 != 0) {
          lVar10 = (longlong)local_e0;
          local_e0 = local_e0 + (uint)(local_e0 == 0) + iVar14;
          if (local_dc < local_e0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,iVar13);
          }
          pvVar17 = local_c8;
          iVar11 = local_dc;
          iVar5 = local_e0;
          pwVar4 = local_e8;
          pwVar3 = local_e8 + (lVar10 - (ulonglong)(iVar13 != 0));
          _guard_xfg_dispatch_icall_nop(pwVar3,local_c8,(longlong)iVar14 * 2);
          pwVar3[iVar14] = L'\0';
          local_d8 = pwVar4;
          local_d0 = iVar5;
        }
      }
      local_cc = iVar11;
      iVar13 = local_d0;
      if (iVar11 < (int)((local_d0 == 0) + 4 + local_d0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo();
        iVar13 = local_d0;
      }
      local_d0 = (5 - (uint)(iVar13 != 0)) + iVar13;
      if (local_cc < local_d0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,iVar13);
      }
      builtin_wcsncpy(local_d8 + ((longlong)iVar13 - (ulonglong)(iVar13 != 0)),L".csv",5);
      local_88 = local_d8;
      local_80 = local_d0;
      local_7c = local_cc;
      if (pwVar16 != (wchar_t *)0x0) {
        FMemory::Free(pwVar16);
      }
      if (local_68[0] != 0) {
        FMemory::Free();
      }
      uVar8 = FUN_14168db40();
      FCsvProfiler::BeginCapture(uVar8,0xffffffff,local_78,&local_88,uVar18 & 0xff00);
      if (local_88 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      if (pvVar17 != (void *)0x0) {
        FMemory::Free(pvVar17);
      }
      if (local_78[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 14231e800 FUN_14231e800 body=147 status=ok
// SIG undefined FUN_14231e800(void)

void FUN_14231e800(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x4c0) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_1423ac7e0();
  }
  if (param_2 == 0) {
    if (*(longlong *)(param_1 + 0x4c0) != 0) {
      lVar2 = FUN_1423ac7e0();
      if (lVar2 != 0) {
        param_2 = UAnimInstance::GetCurrentActiveMontage(lVar2);
        goto LAB_14231e857;
      }
    }
    param_2 = 0;
  }
LAB_14231e857:
  if ((lVar3 != 0) && (param_2 != 0)) {
    cVar1 = UAnimInstance::Montage_GetIsStopped(lVar3,param_2);
    if (cVar1 == '\0') {
      FUN_142279320(lVar3,*(undefined4 *)(param_2 + 0x108),param_2);
    }
  }
  return;
}



// FUNCTION 14231e8a0 StopCharting body=38 status=ok
// SIG undefined StopCharting(void)

void FPerformanceTrackingChart::StopCharting(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FGenericPlatformMisc::GetDeviceTemperatureLevel();
  *(undefined4 *)(param_1 + 0x154) = uVar1;
  *(undefined4 *)(param_1 + 0x164) = 0xffffffff;
  return;
}



// FUNCTION 14231e8d0 FUN_14231e8d0 body=598 status=ok
// SIG undefined FUN_14231e8d0(void)

void FUN_14231e8d0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  longlong local_198 [3];
  longlong local_180;
  longlong local_178 [2];
  undefined **local_168 [40];
  
  plVar2 = (longlong *)(param_1 + 0xb50);
  lVar4 = *plVar2;
  if (lVar4 != 0) {
    local_180 = *(longlong *)(param_1 + 0xb58);
    if (local_180 != 0) {
      LOCK();
      *(int *)(local_180 + 8) = *(int *)(local_180 + 8) + 1;
      UNLOCK();
    }
    local_198[2] = lVar4;
    FUN_14231a5d0(param_1,local_198 + 2);
    lVar4 = *plVar2;
    uVar7 = 0;
    local_1b0 = 1;
    local_1b8 = (longlong *)0x0;
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
    uVar6 = *(undefined8 *)(lVar4 + 0x148);
    *local_1b8 = lVar4;
    uVar9 = (ulonglong)((longlong)(local_1b8 + (int)local_1b0) + (7 - (longlong)local_1b8)) >> 3;
    if (local_1b8 + (int)local_1b0 < local_1b8) {
      uVar9 = uVar7;
    }
    plVar8 = local_1b8;
    if (uVar9 != 0) {
      do {
        FUN_1422ffc50(local_168,*plVar8);
        local_168[0] = &PTR_FUN_14503e0a8;
        FUN_14230c4f0(local_168,(int)uVar6,param_2);
        FUN_142300730(local_168);
        uVar7 = uVar7 + 1;
        plVar8 = plVar8 + 1;
      } while (uVar7 != uVar9);
    }
    plVar8 = local_1b8;
    FPerformanceTrackingSystem::CreateOutputDirectory(local_178,lVar4 + 0x140);
    local_198[1] = 4;
    local_198[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198,0);
    lVar4 = local_198[0];
    FGenericPlatformString::Memcpy(local_198[0],&DAT_14503b5d0,8);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
    if (local_178[0] != 0) {
      FMemory::Free();
    }
    if (plVar8 != (longlong *)0x0) {
      FMemory::Free(plVar8);
    }
    local_1a0 = (longlong *)0x0;
    if (plVar2 != &local_1a8) {
      *plVar2 = 0;
      local_1a8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xb58,&local_1a0);
      plVar2 = local_1a0;
      if (local_1a0 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_1a0 + 1;
        lVar4 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_1a0)(local_1a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_1a0 + 8))(local_1a0,1);
          }
        }
      }
    }
  }
  if (DAT_146aefca1 != '\0') {
    DAT_146aefca1 = '\0';
    uVar6 = FUN_14168db40();
    cVar5 = FUN_140583fc0(uVar6);
    if (cVar5 != '\0') {
      uVar6 = FUN_14168db40();
      FCsvProfiler::EndCapture(uVar6);
    }
  }
  return;
}



// FUNCTION 14231eb30 FUN_14231eb30 body=207 status=ok
// SIG undefined FUN_14231eb30(void)

void FUN_14231eb30(longlong param_1,char param_2)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  
  if (param_2 != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x150);
    if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x3c) & 1) == 0)) {
      plVar3 = *(longlong **)(param_1 + 0xc0);
      if (plVar3 == (longlong *)0x0) {
        UCameraAnimInst::Stop(lVar2,1);
      }
      else {
        (**(code **)(*plVar3 + 0x878))(plVar3,lVar2,1);
      }
    }
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined4 *)(param_1 + 0x14c) = 0;
    return;
  }
  fVar1 = *(float *)(param_1 + 0x14c);
  fVar4 = *(float *)(param_1 + 0x14);
  if ((0.0 < fVar1) && (fVar1 <= fVar4)) {
    fVar4 = fVar1;
  }
  *(float *)(param_1 + 0x14c) = fVar4;
  if (*(float *)(param_1 + 0xc) <= 0.0 && *(float *)(param_1 + 0xc) != 0.0) {
    *(float *)(param_1 + 0xc) = fVar4;
  }
  lVar2 = *(longlong *)(param_1 + 0x150);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x3c) & 1) == 0)) {
    plVar3 = *(longlong **)(param_1 + 0xc0);
    if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014231ebe6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x878))(plVar3,lVar2,0);
      return;
    }
    UCameraAnimInst::Stop(lVar2,0);
    return;
  }
  return;
}



// FUNCTION 14231ec00 FUN_14231ec00 body=206 status=ok
// SIG undefined FUN_14231ec00(void)

void FUN_14231ec00(longlong param_1,char param_2)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  
  if (param_2 == '\0') {
    fVar1 = *(float *)(param_1 + 0x16c);
    fVar4 = *(float *)(param_1 + 0x34);
    if ((0.0 < fVar1) && (fVar1 <= fVar4)) {
      fVar4 = fVar1;
    }
    *(float *)(param_1 + 0x16c) = fVar4;
    lVar2 = *(longlong *)(param_1 + 0x170);
    if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x3c) & 1) == 0)) {
      plVar3 = *(longlong **)(param_1 + 0xe0);
      if (plVar3 == (longlong *)0x0) {
        UCameraAnimInst::Stop(lVar2,0);
      }
      else {
        (**(code **)(*plVar3 + 0x878))(plVar3,lVar2,0);
      }
    }
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x170);
    if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x3c) & 1) == 0)) {
      plVar3 = *(longlong **)(param_1 + 0xe0);
      if (plVar3 == (longlong *)0x0) {
        UCameraAnimInst::Stop(lVar2,1);
      }
      else {
        (**(code **)(*plVar3 + 0x878))(plVar3,lVar2,1);
      }
    }
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined4 *)(param_1 + 0x16c) = 0;
  }
  FUN_14290f6f0(param_1,param_2);
  return;
}



// FUNCTION 14231ed00 FUN_14231ed00 body=1463 status=ok
// SIG undefined FUN_14231ed00(void)

void FUN_14231ed00(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  undefined2 *puVar15;
  undefined8 in_stack_fffffffffffffef8;
  undefined4 uVar16;
  wchar_t *local_f8;
  undefined8 local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  longlong local_d8 [6];
  undefined1 local_a8 [16];
  undefined1 local_98 [8];
  longlong *local_90;
  wchar_t *local_80 [2];
  undefined1 local_70 [16];
  undefined1 local_60 [24];
  undefined8 local_48;
  
  pwVar13 = (wchar_t *)0x0;
  iVar5 = 0;
  iVar6 = 0;
  local_f8 = (wchar_t *)0x0;
  local_f0 = 0;
  uVar7 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffef8 >> 0x20),0xffffffff);
  iVar4 = FUN_141592950(param_2,&DAT_145037e1c,1,0,uVar7);
  uVar16 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (iVar4 != -1) {
    FString::PrintfImpl(local_80,L"ClassName contains a space.");
    pwVar12 = local_80[0];
    goto LAB_14231f278;
  }
  cVar3 = FPackageName::IsShortPackageName(param_2);
  pwVar12 = pwVar13;
  if (cVar3 == '\0') {
    uVar7 = CONCAT44(uVar16,0xffffffff);
    iVar5 = FUN_141592950(param_2,&DAT_145038044,1,0,uVar7);
    uVar16 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (iVar5 == -1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_f8,0x51);
      iVar6 = (int)local_f0 + 0x51;
      local_f0 = CONCAT44(local_f0._4_4_,iVar6);
      if (local_f0._4_4_ < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8);
      }
      builtin_wcsncpy(local_f8,
                      L"Class names with a path must contain a dot. (i.e /Script/Engine.StaticMeshActor)"
                      ,0x51);
      pwVar12 = local_f8;
      goto LAB_14231f278;
    }
    local_d8[2] = 0;
    local_d8[3] = 0;
    local_d8[4] = 0;
    local_d8[5] = 0;
    local_d8[0] = 0;
    local_d8[1] = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8,0);
    lVar8 = local_d8[0];
    FGenericPlatformString::Memcpy(local_d8[0],&DAT_145038064,4);
    FUN_1404e14f0(param_2,local_d8,local_d8 + 2,local_d8 + 4,CONCAT44(uVar16,1),0);
    if (lVar8 != 0) {
      FMemory::Free(lVar8);
    }
    FText::FText(local_98);
    cVar3 = FPackageName::IsValidLongPackageName(local_d8 + 2,1,local_98);
    iVar5 = 0;
    if (cVar3 == '\0') {
      uVar7 = FText::ToString(local_98);
      FString::operator=(&local_f8,uVar7);
      pwVar12 = local_f8;
      iVar5 = local_f0._4_4_;
    }
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_90 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)local_90 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
      pwVar12 = local_f8;
      iVar5 = local_f0._4_4_;
    }
    if (local_d8[4] != 0) {
      FMemory::Free();
    }
    if (local_d8[2] != 0) {
      FMemory::Free();
    }
    if (cVar3 == '\0') goto LAB_14231f278;
  }
  cVar3 = FPackageName::IsShortPackageName(param_2);
  if (cVar3 == '\0') {
    pwVar14 = pwVar13;
    if (*(int *)(param_2 + 1) == 0) {
      puVar15 = &DAT_143f3eda8;
    }
    else {
      puVar15 = (undefined2 *)*param_2;
    }
  }
  else {
    pwVar14 = (wchar_t *)&DAT_ffffffffffffffff;
    if (*(int *)(param_2 + 1) == 0) {
      puVar15 = &DAT_143f3eda8;
    }
    else {
      puVar15 = (undefined2 *)*param_2;
    }
  }
  uVar7 = FUN_14171bfe0();
  lVar8 = FUN_141799410(uVar7,pwVar14,puVar15,0);
  if (lVar8 == 0) {
    if (pwVar12 != L"Failed to find class.") {
      local_f0 = local_f0 & 0xffffffff00000000;
      if (iVar5 != 0x16) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_f8,0x16);
        pwVar12 = local_f8;
        iVar6 = (int)local_f0;
        iVar5 = local_f0._4_4_;
      }
      local_f0 = CONCAT44(local_f0._4_4_,iVar6 + 0x16);
      if (iVar5 < iVar6 + 0x16) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,iVar6);
        pwVar12 = local_f8;
      }
      builtin_wcsncpy(pwVar12,L"Failed to find class.",0x16);
    }
  }
  else {
    lVar9 = FUN_1428dfc70();
    lVar11 = lVar8;
    do {
      if (lVar11 == lVar9) {
        if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
          pwVar13 = (wchar_t *)param_1[4];
        }
        if (pwVar13 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)pwVar13 + 0x720))(pwVar13,local_a8);
          (**(code **)(*(longlong *)pwVar13 + 0xe40))(pwVar13,&local_e8);
          pfVar10 = (float *)FRotator::Vector(local_a8,local_70);
          local_e8 = local_e8 + *pfVar10 * 72.0;
          local_e4 = local_e4 + pfVar10[1] * 72.0;
          local_e0 = local_e0 + pfVar10[2] * 72.0 + 15.0;
          FActorSpawnParameters::FActorSpawnParameters(local_60);
          local_48 = *(undefined8 *)(pwVar13 + 0xa8);
          uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
          lVar8 = UWorld::SpawnActor(uVar7,lVar8,&local_e8,local_a8,local_60);
          if ((lVar8 == 0) && (pwVar12 != L"SpawnActor failed.")) {
            local_f0 = local_f0 & 0xffffffff00000000;
            if (iVar5 != 0x13) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_f8,0x13);
              pwVar12 = local_f8;
              iVar6 = (int)local_f0;
              iVar5 = local_f0._4_4_;
            }
            local_f0 = CONCAT44(local_f0._4_4_,iVar6 + 0x13);
            if (iVar5 < iVar6 + 0x13) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,iVar6);
              pwVar12 = local_f8;
            }
            builtin_wcsncpy(pwVar12,L"SpawnActor failed.",0x13);
          }
        }
        goto LAB_14231f278;
      }
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
    if (pwVar12 != L"Class is not derived from Actor.") {
      local_f0 = local_f0 & 0xffffffff00000000;
      if (iVar5 != 0x21) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_f8,0x21);
        pwVar12 = local_f8;
        iVar6 = (int)local_f0;
        iVar5 = local_f0._4_4_;
      }
      local_f0 = CONCAT44(local_f0._4_4_,iVar6 + 0x21);
      if (iVar5 < iVar6 + 0x21) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,iVar6);
        pwVar12 = local_f8;
      }
      builtin_wcsncpy(pwVar12,L"Class is not derived from Actor.",0x21);
    }
  }
LAB_14231f278:
  if (pwVar12 != (wchar_t *)0x0) {
    FMemory::Free(pwVar12);
  }
  return;
}



// FUNCTION 14231f2c0 FUN_14231f2c0 body=1172 status=ok
// SIG undefined FUN_14231f2c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14231f2c0(longlong *param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar12;
  undefined4 *puVar13;
  longlong *plVar14;
  undefined4 uVar15;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  undefined8 *local_1b0;
  undefined *local_1a8;
  undefined8 local_198;
  float local_190;
  undefined8 local_18c;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [12];
  undefined4 local_12c;
  float local_124;
  float local_120;
  float local_11c;
  float local_10c;
  float local_108;
  float local_104;
  undefined8 local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined2 local_94;
  undefined1 local_92;
  undefined4 local_90;
  undefined1 local_8c;
  undefined4 local_88;
  undefined2 local_84;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50 [4];
  undefined4 *local_40;
  undefined8 local_38;
  ulonglong local_28;
  longlong lVar11;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  plVar14 = (longlong *)0x0;
  plVar12 = plVar14;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    plVar12 = (longlong *)param_1[4];
  }
  (**(code **)(*plVar12 + 0x7a8))(plVar12,&local_180,local_158);
  _guard_xfg_dispatch_icall_nop(local_138,0,0x90);
  local_12c = 0x3f800000;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    plVar14 = (longlong *)param_1[4];
  }
  plVar14 = (longlong *)plVar14[0x91];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146aefe10) && (_Init_thread_header(&DAT_146aefe10), DAT_146aefe10 == -1))
  {
    FName::FName(&DAT_146aefe08,"TeleportTrace",1);
    _Init_thread_footer(&DAT_146aefe10);
  }
  local_88 = 0;
  local_a8 = DAT_146aefe08;
  local_a0 = 0;
  local_60 = 0;
  local_58 = 0;
  local_40 = (undefined4 *)0x0;
  local_38 = 0;
  local_98 = 0x10100;
  local_90 = 0;
  local_94 = 0;
  local_84 = 0x101;
  local_8c = 0;
  local_92 = 0;
  if (plVar14 != (longlong *)0x0) {
    uVar4 = *(undefined4 *)((longlong)plVar14 + 0xc);
    local_38 = 1;
    TArray<enum_D3D12_RESOURCE_STATES,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
              (local_50,0);
    puVar13 = local_50;
    if (local_40 != (undefined4 *)0x0) {
      puVar13 = local_40;
    }
    *puVar13 = uVar4;
    local_a0 = plVar14[3];
  }
  pfVar7 = (float *)FRotator::Vector(local_158,&local_18c);
  local_190 = local_178 + pfVar7[2] * 1e+06;
  local_198 = CONCAT44(local_17c + pfVar7[1] * 1e+06,local_180 + *pfVar7 * 1e+06);
  uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  local_1a8 = &DAT_146aefe68;
  local_1b0 = &local_a8;
  local_1b8 = 2;
  uVar4 = UWorld::LineTraceSingleByChannel(uVar8,local_138,&local_180,&local_198);
  if ((char)uVar4 != '\0') {
    local_124 = local_124 + local_10c * 4.0;
    local_120 = local_120 + local_108 * 4.0;
    local_11c = local_11c + local_104 * 4.0;
  }
  if (plVar14 == (longlong *)0x0) {
    lVar1 = param_1[4];
    if (lVar1 == 0) goto LAB_14231f6c2;
    lVar10 = FUN_1429238e0();
    iVar5 = *(int *)(lVar10 + 0x90);
    lVar11 = (longlong)iVar5;
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < iVar5) ||
       (lVar11 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88),
       *(longlong *)(lVar11 + (longlong)iVar5 * 8) != lVar10 + 0x88)) {
      uVar6 = (uint)lVar11 & 0xffffff00;
    }
    else {
      uVar6 = (uint)CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
    }
    if ((((char)uVar6 == '\0') || (*(longlong *)(lVar1 + 0x850) == 0)) ||
       (plVar14 = *(longlong **)(*(longlong *)(lVar1 + 0x850) + 0x488), plVar14 == (longlong *)0x0))
    goto LAB_14231f6c2;
    lVar1 = plVar14[0x2d];
    if (lVar1 == 0) {
      uVar4 = (undefined4)DAT_1468b5da0;
      uVar15 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      local_184 = DAT_1468b5da8;
    }
    else {
      local_168 = *(float *)(lVar1 + 0x210);
      fStack_164 = *(float *)(lVar1 + 0x214);
      fStack_160 = *(float *)(lVar1 + 0x218);
      fStack_15c = *(float *)(lVar1 + 0x21c);
      auVar3._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_164);
      auVar3._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_168);
      auVar3._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_160);
      auVar3._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_15c);
      iVar5 = movmskps(uVar6,auVar3);
      if (iVar5 != 0) {
        *(float *)(lVar1 + 0x250) = local_168;
        *(float *)(lVar1 + 0x254) = fStack_164;
        *(float *)(lVar1 + 600) = fStack_160;
        *(float *)(lVar1 + 0x25c) = fStack_15c;
        puVar9 = (undefined8 *)FQuat::Rotator(&local_168,local_148);
        *(undefined8 *)(lVar1 + 0x260) = *puVar9;
        *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar9 + 1);
      }
      uVar4 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
      uVar15 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
      local_184 = *(float *)(lVar1 + 0x268);
    }
    puVar9 = &local_198;
    local_18c = CONCAT44(uVar15,uVar4);
  }
  else {
    lVar1 = plVar14[0x2d];
    if (lVar1 == 0) {
      uVar4 = (undefined4)DAT_1468b5da0;
      uVar15 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      local_184 = DAT_1468b5da8;
    }
    else {
      local_168 = *(float *)(lVar1 + 0x210);
      fStack_164 = *(float *)(lVar1 + 0x214);
      fStack_160 = *(float *)(lVar1 + 0x218);
      fStack_15c = *(float *)(lVar1 + 0x21c);
      auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_164);
      auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_168);
      auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_160);
      auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_15c);
      iVar5 = movmskps(uVar4,auVar2);
      if (iVar5 != 0) {
        *(float *)(lVar1 + 0x250) = local_168;
        *(float *)(lVar1 + 0x254) = fStack_164;
        *(float *)(lVar1 + 600) = fStack_160;
        *(float *)(lVar1 + 0x25c) = fStack_15c;
        puVar9 = (undefined8 *)FQuat::Rotator(&local_168,local_148);
        *(undefined8 *)(lVar1 + 0x260) = *puVar9;
        *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar9 + 1);
      }
      uVar4 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
      uVar15 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
      local_184 = *(float *)(lVar1 + 0x268);
    }
    puVar9 = &local_18c;
    local_18c = CONCAT44(uVar15,uVar4);
  }
  local_1b8 = local_1b8 & 0xffffff00;
  local_198 = local_18c;
  local_190 = local_184;
  (**(code **)(*plVar14 + 0x500))(plVar14,&local_124,puVar9,0);
LAB_14231f6c2:
  if (local_40 != (undefined4 *)0x0) {
    FMemory::Free();
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14231f760 FUN_14231f760 body=232 status=ok
// SIG undefined FUN_14231f760(void)

void FUN_14231f760(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 local_78 [112];
  
  if (0 < *(int *)(param_1 + 0xb68)) {
    FUN_142301e40(&DAT_146aefca8,local_78,param_2);
    puVar7 = *(undefined8 **)(DAT_146b17150 + 0xb60);
    puVar6 = puVar7 + (longlong)*(int *)(DAT_146b17150 + 0xb68) * 2;
    for (; puVar7 != puVar6; puVar7 = puVar7 + 2) {
      plVar3 = (longlong *)puVar7[1];
      plVar4 = (longlong *)*puVar7;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      (**(code **)(*plVar4 + 8))(plVar4,local_78);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar3 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14231f850 FUN_14231f850 body=122 status=ok
// SIG undefined FUN_14231f850(void)

void FUN_14231f850(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    lVar3 = FUN_1429238e0();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x00014231f8ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x420))(param_1);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014231f8c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x418))(param_1);
  return;
}



// FUNCTION 14231f8d0 FUN_14231f8d0 body=57 status=ok
// SIG undefined FUN_14231f8d0(void)

void FUN_14231f8d0(void)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
  lVar2 = FUN_141799410(uVar1,0xffffffffffffffff,L"ServerStatReplicatorInst");
  if (lVar2 != 0) {
    *(bool *)(lVar2 + 0x459) = *(char *)(lVar2 + 0x459) == '\0';
  }
  return;
}



// FUNCTION 14231f910 FUN_14231f910 body=57 status=ok
// SIG undefined FUN_14231f910(void)

void FUN_14231f910(void)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = AGeometryCollectionActor::GetPrivateStaticClass();
  lVar2 = FUN_141799410(uVar1,0xffffffffffffffff,L"ServerStatReplicatorInst");
  if (lVar2 != 0) {
    *(bool *)(lVar2 + 0x458) = *(char *)(lVar2 + 0x458) == '\0';
  }
  return;
}



// FUNCTION 14231f950 FUN_14231f950 body=71 status=ok
// SIG undefined FUN_14231f950(void)

void FUN_14231f950(longlong param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x4c8) + 0x218) + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x00014231f98d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x4c8) + 0x218) + 0x50))();
    return;
  }
  return;
}



// FUNCTION 14231f9a0 TransformNormalToShapeSpace body=1416 status=ok
// SIG undefined TransformNormalToShapeSpace(void)

float * TransformNormalToShapeSpace(float *param_1,float *param_2,float *param_3)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  
  fVar5 = param_2[1];
  fVar3 = *param_2;
  if ((fVar3 == fVar5) && (fVar3 == param_2[2])) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
  }
  else {
    fVar7 = param_2[3];
    if ((fVar7 == 0.0) && (((param_2[4] == 0.0 && (param_2[5] == 0.0)) && (param_2[6] == 1.0)))) {
      fVar7 = param_3[2] / param_2[2];
      fVar3 = *param_3 / fVar3;
      fVar5 = param_3[1] / fVar5;
      fVar13 = 1.0 / SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar7 * fVar7);
      *param_1 = fVar13 * fVar3;
      param_1[1] = fVar13 * fVar5;
      param_1[2] = fVar13 * fVar7;
    }
    else {
      fVar13 = param_2[5];
      fVar10 = param_2[4];
      fVar12 = param_2[6];
      fVar7 = fVar7 + fVar7;
      fVar16 = fVar10 + fVar10;
      fVar4 = (fVar13 + fVar13) * fVar12;
      fVar6 = (fVar13 + fVar13) * fVar13;
      fVar14 = fVar4 + fVar7 * fVar10;
      fVar4 = fVar7 * fVar10 - fVar4;
      fVar2 = fVar7 * fVar13 - fVar16 * fVar12;
      fVar17 = fVar16 * fVar12 + fVar7 * fVar13;
      fVar11 = (1.0 - fVar16 * fVar10) - fVar6;
      fVar1 = 1.0 - param_2[3] * fVar7;
      fVar9 = fVar16 * fVar13 + fVar7 * fVar12;
      fVar8 = fVar14 * fVar5;
      fVar15 = fVar16 * fVar13 - fVar7 * fVar12;
      fVar7 = param_2[2];
      fVar13 = fVar1 - fVar16 * fVar10;
      fVar10 = fVar3 * fVar11;
      fVar1 = fVar1 - fVar6;
      fVar12 = fVar9 * fVar7;
      fVar18 = fVar3 * fVar17;
      fVar6 = fVar15 * param_2[1];
      fVar16 = fVar2 * fVar7;
      fVar5 = fVar5 * fVar1;
      fVar3 = fVar3 * fVar4;
      fVar7 = fVar13 * fVar7;
      local_e8 = fVar10 * fVar17 + fVar15 * fVar8 + fVar16 * fVar13;
      local_e4 = fVar3 * fVar17 + fVar15 * fVar5 + fVar12 * fVar13;
      local_f4 = fVar10 * fVar4 + fVar8 * fVar1 + fVar16 * fVar9;
      local_f0 = fVar3 * fVar4 + fVar5 * fVar1 + fVar9 * fVar12;
      local_fc = fVar3 * fVar11 + fVar5 * fVar14 + fVar2 * fVar12;
      local_ec = fVar4 * fVar18 + fVar6 * fVar1 + fVar7 * fVar9;
      local_100 = fVar10 * fVar11 + fVar8 * fVar14 + fVar16 * fVar2;
      local_f8 = fVar18 * fVar11 + fVar14 * fVar6 + fVar7 * fVar2;
      local_e0 = fVar17 * fVar18 + fVar15 * fVar6 + fVar7 * fVar13;
      physx::PxMat33::getInverse(&local_100,&local_d8);
      fVar5 = param_3[1];
      fVar3 = *param_3;
      fVar7 = param_3[2];
      fVar10 = fVar5 * local_d4 + fVar3 * local_d8 + fVar7 * local_d0;
      fVar13 = fVar5 * local_c8 + fVar3 * local_cc + fVar7 * local_c4;
      fVar3 = fVar5 * local_bc + fVar3 * local_c0 + fVar7 * local_b8;
      fVar5 = 1.0 / SQRT(fVar13 * fVar13 + fVar10 * fVar10 + fVar3 * fVar3);
      param_1[2] = fVar3 * fVar5;
      *param_1 = fVar10 * fVar5;
      param_1[1] = fVar13 * fVar5;
    }
  }
  return param_1;
}



// FUNCTION 14231ff30 FUN_14231ff30 body=151 status=ok
// SIG undefined FUN_14231ff30(void)

void FUN_14231ff30(longlong param_1)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  
  if (*(longlong **)(param_1 + 0x4c8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x4c8) + 0x430))();
    (**(code **)(**(longlong **)(param_1 + 0x4c8) + 0x5b8))();
  }
  iVar3 = FUN_142235230(param_1);
  if ((iVar3 != 1) && (*(longlong *)(param_1 + 0x4c0) != 0)) {
    FUN_1423baf90(*(longlong *)(param_1 + 0x4c0),1);
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x4c0) + 0x400))
                      (*(longlong **)(param_1 + 0x4c0),0);
    if (cVar2 != '\0') {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x4c0) + 0xb1a);
      *pbVar1 = *pbVar1 | 8;
      *(undefined1 *)(*(longlong *)(param_1 + 0x4c0) + 0xb15) = 1;
    }
  }
  FUN_1426aed10(param_1);
  return;
}



// FUNCTION 14231ffd0 FUN_14231ffd0 body=23 status=ok
// SIG undefined FUN_14231ffd0(void)

void FUN_14231ffd0(longlong param_1)

{
  uint *puVar1;
  
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x4c8) + 0x4b4);
    *puVar1 = *puVar1 & 0xfffff7ff;
  }
  return;
}



// FUNCTION 14231fff0 FUN_14231fff0 body=71 status=ok
// SIG undefined FUN_14231fff0(void)

void FUN_14231fff0(longlong param_1)

{
  FUN_1426aed80();
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x4c8) + 0x218) + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x00014232002d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x4c8) + 0x218) + 0x50))();
    return;
  }
  return;
}



// FUNCTION 142320040 FUN_142320040 body=2775 status=ok
// SIG undefined FUN_142320040(void)

void FUN_142320040(longlong param_1,float param_2,float param_3,float *param_4,char param_5)

{
  longlong lVar1;
  bool bVar2;
  float *pfVar3;
  undefined8 *puVar4;
  ushort uVar5;
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
  float local_1c8;
  float local_1c4;
  float local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
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
  undefined1 local_e8 [224];
  
  param_3 = param_3 * *(float *)(param_1 + 0x148);
  if ((param_5 == '\0') && (param_3 <= 0.0)) {
    param_3 = 0.0;
  }
  lVar1 = *(longlong *)(param_1 + 0x150);
  if (lVar1 != 0) {
    *(float *)(lVar1 + 0x58) = param_3 * *(float *)(lVar1 + 0x58);
  }
  fVar9 = *(float *)(param_1 + 0x14c);
  if (0.0 < fVar9) {
    fVar9 = fVar9 - param_2;
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    *(float *)(param_1 + 0x14c) = fVar9;
  }
  uVar5 = *(ushort *)(param_1 + 0xac);
  if ((uVar5 & 1) != 0) {
    *(float *)(param_1 + 0xb4) = param_2 + *(float *)(param_1 + 0xb4);
  }
  if ((uVar5 & 2) != 0) {
    *(float *)(param_1 + 0xb8) = param_2 + *(float *)(param_1 + 0xb8);
  }
  bVar2 = false;
  if (fVar9 == 0.0) {
    bVar2 = true;
  }
  else if ((0.0 <= fVar9) && (fVar9 < *(float *)(param_1 + 0x14))) {
    uVar5 = uVar5 | 2;
    *(ushort *)(param_1 + 0xac) = uVar5;
    *(float *)(param_1 + 0xb8) = *(float *)(param_1 + 0x14) - fVar9;
  }
  if (((uVar5 & 1) != 0) && (*(float *)(param_1 + 0x10) < *(float *)(param_1 + 0xb4))) {
    uVar5 = uVar5 & 0xfffe;
    *(ushort *)(param_1 + 0xac) = uVar5;
  }
  if (((uVar5 & 2) == 0) || (*(float *)(param_1 + 0xb8) <= *(float *)(param_1 + 0x14))) {
    if (!bVar2) {
      if ((uVar5 & 1) == 0) {
        fVar9 = 1.0;
      }
      else {
        fVar9 = *(float *)(param_1 + 0xb4) / *(float *)(param_1 + 0x10);
      }
      fVar30 = 1.0;
      if ((uVar5 & 2) != 0) {
        fVar30 = 1.0 - *(float *)(param_1 + 0xb8) / *(float *)(param_1 + 0x14);
      }
      if (fVar9 <= fVar30) {
        fVar30 = fVar9;
      }
      fVar30 = fVar30 * param_3;
      if ((param_5 != '\0') || (0.0 < fVar30)) {
        if (*(float *)(param_1 + 0x48) == 0.0) {
          fVar9 = 0.0;
        }
        else {
          fVar9 = param_2 * *(float *)(param_1 + 0x4c) + *(float *)(param_1 + 200);
          *(float *)(param_1 + 200) = fVar9;
          fVar9 = _guard_xfg_dispatch_icall_nop(fVar9);
          fVar9 = fVar9 * *(float *)(param_1 + 0x48);
        }
        if (*(float *)(param_1 + 0x58) == 0.0) {
          fVar6 = 0.0;
        }
        else {
          fVar6 = param_2 * *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0xcc);
          *(float *)(param_1 + 0xcc) = fVar6;
          fVar6 = _guard_xfg_dispatch_icall_nop(fVar6);
          fVar6 = fVar6 * *(float *)(param_1 + 0x58);
        }
        if (*(float *)(param_1 + 0x68) == 0.0) {
          fVar7 = 0.0;
        }
        else {
          fVar7 = param_2 * *(float *)(param_1 + 0x6c) + *(float *)(param_1 + 0xd0);
          *(float *)(param_1 + 0xd0) = fVar7;
          fVar7 = _guard_xfg_dispatch_icall_nop(fVar7);
          fVar7 = fVar7 * *(float *)(param_1 + 0x68);
        }
        fVar9 = fVar9 * fVar30;
        fVar6 = fVar6 * fVar30;
        fVar7 = fVar7 * fVar30;
        if (*(float *)(param_1 + 0x18) == 0.0) {
          local_1c8 = 0.0;
        }
        else {
          fVar8 = param_2 * *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0xd4);
          *(float *)(param_1 + 0xd4) = fVar8;
          local_1c8 = _guard_xfg_dispatch_icall_nop(fVar8);
          local_1c8 = local_1c8 * *(float *)(param_1 + 0x18);
        }
        local_1c8 = local_1c8 * fVar30;
        if (*(float *)(param_1 + 0x28) == 0.0) {
          local_1c4 = 0.0;
        }
        else {
          fVar8 = param_2 * *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0xd8);
          *(float *)(param_1 + 0xd8) = fVar8;
          local_1c4 = _guard_xfg_dispatch_icall_nop(fVar8);
          local_1c4 = local_1c4 * *(float *)(param_1 + 0x28);
        }
        local_1c4 = local_1c4 * fVar30;
        if (*(float *)(param_1 + 0x38) == 0.0) {
          local_1c0 = 0.0;
        }
        else {
          fVar8 = param_2 * *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0xdc);
          *(float *)(param_1 + 0xdc) = fVar8;
          local_1c0 = _guard_xfg_dispatch_icall_nop(fVar8);
          local_1c0 = local_1c0 * *(float *)(param_1 + 0x38);
        }
        local_1c0 = local_1c0 * fVar30;
        if (*(int *)(param_1 + 0xb0) == 0) {
          FRotationMatrix::FRotationMatrix(&local_1a8,param_4 + 3);
          local_1b8 = 0;
          local_1b0 = 0;
          *param_4 = local_178 * 0.0 + fVar7 * local_188 + fVar6 * local_198 + fVar9 * local_1a8 +
                     *param_4;
          param_4[1] = fStack_174 * 0.0 + fVar7 * fStack_184 +
                       fVar6 * fStack_194 + fVar9 * fStack_1a4 + param_4[1];
          param_4[2] = fStack_170 * 0.0 + fVar7 * fStack_180 +
                       fVar6 * fStack_190 + fVar9 * fStack_1a0 + param_4[2];
          FRotationMatrix::FRotationMatrix(&local_1a8,&local_1c8);
          pfVar3 = (float *)FRotationMatrix::FRotationMatrix(&local_128,param_4 + 3);
          fVar9 = pfVar3[4];
          fVar6 = pfVar3[5];
          fVar7 = pfVar3[6];
          fVar8 = pfVar3[7];
          fVar10 = *pfVar3;
          fVar11 = pfVar3[1];
          fVar12 = pfVar3[2];
          fVar13 = pfVar3[3];
          fVar14 = pfVar3[8];
          fVar15 = pfVar3[9];
          fVar16 = pfVar3[10];
          fVar17 = pfVar3[0xb];
          fVar18 = pfVar3[0xc];
          fVar19 = pfVar3[0xd];
          fVar20 = pfVar3[0xe];
          fVar21 = pfVar3[0xf];
          local_168 = fStack_1a4 * fVar9 + local_1a8 * fVar10 + fStack_1a0 * fVar14 +
                      fStack_19c * fVar18;
          fStack_164 = fStack_1a4 * fVar6 + local_1a8 * fVar11 + fStack_1a0 * fVar15 +
                       fStack_19c * fVar19;
          fStack_160 = fStack_1a4 * fVar7 + local_1a8 * fVar12 + fStack_1a0 * fVar16 +
                       fStack_19c * fVar20;
          fStack_15c = fStack_1a4 * fVar8 + local_1a8 * fVar13 + fStack_1a0 * fVar17 +
                       fStack_19c * fVar21;
          local_158 = fStack_194 * fVar9 + local_198 * fVar10 + fStack_190 * fVar14 +
                      fStack_18c * fVar18;
          fStack_154 = fStack_194 * fVar6 + local_198 * fVar11 + fStack_190 * fVar15 +
                       fStack_18c * fVar19;
          fStack_150 = fStack_194 * fVar7 + local_198 * fVar12 + fStack_190 * fVar16 +
                       fStack_18c * fVar20;
          fStack_14c = fStack_194 * fVar8 + local_198 * fVar13 + fStack_190 * fVar17 +
                       fStack_18c * fVar21;
          local_148 = fStack_184 * fVar9 + local_188 * fVar10 + fStack_180 * fVar14 +
                      fStack_17c * fVar18;
          fStack_144 = fStack_184 * fVar6 + local_188 * fVar11 + fStack_180 * fVar15 +
                       fStack_17c * fVar19;
          fStack_140 = fStack_184 * fVar7 + local_188 * fVar12 + fStack_180 * fVar16 +
                       fStack_17c * fVar20;
          fStack_13c = fStack_184 * fVar8 + local_188 * fVar13 + fStack_180 * fVar17 +
                       fStack_17c * fVar21;
          local_138 = fStack_174 * fVar9 + local_178 * fVar10 + fStack_170 * fVar14 +
                      fStack_16c * fVar18;
          fStack_134 = fStack_174 * fVar6 + local_178 * fVar11 + fStack_170 * fVar15 +
                       fStack_16c * fVar19;
          fStack_130 = fStack_174 * fVar7 + local_178 * fVar12 + fStack_170 * fVar16 +
                       fStack_16c * fVar20;
          fStack_12c = fStack_174 * fVar8 + local_178 * fVar13 + fStack_170 * fVar17 +
                       fStack_16c * fVar21;
          puVar4 = (undefined8 *)FMatrix::Rotator(&local_168,&local_1c8);
        }
        else {
          pfVar3 = (float *)(param_1 + 0x100);
          if (*(int *)(param_1 + 0xb0) != 2) {
            pfVar3 = (float *)&DAT_1464aa7d0;
          }
          local_138 = pfVar3[0xc];
          fStack_134 = pfVar3[0xd];
          fStack_130 = pfVar3[0xe];
          fStack_12c = pfVar3[0xf];
          local_148 = pfVar3[8];
          fStack_144 = pfVar3[9];
          fStack_140 = pfVar3[10];
          fStack_13c = pfVar3[0xb];
          local_168 = *pfVar3;
          fStack_164 = pfVar3[1];
          fStack_160 = pfVar3[2];
          fStack_15c = pfVar3[3];
          local_158 = pfVar3[4];
          fStack_154 = pfVar3[5];
          fStack_150 = pfVar3[6];
          fStack_14c = pfVar3[7];
          local_1b8 = 0;
          local_1b0 = 0;
          *param_4 = local_138 * 0.0 + fVar7 * local_148 + fVar6 * local_158 + fVar9 * local_168 +
                     *param_4;
          param_4[1] = fStack_134 * 0.0 + fVar7 * fStack_144 +
                       fVar6 * fStack_154 + fVar9 * fStack_164 + param_4[1];
          param_4[2] = fStack_130 * 0.0 + fVar7 * fStack_140 +
                       fVar6 * fStack_150 + fVar9 * fStack_160 + param_4[2];
          FRotationMatrix::FRotationMatrix(&local_1a8,param_4 + 3);
          pfVar3 = (float *)FMatrix::Inverse(&local_168,&local_128);
          fVar9 = pfVar3[4];
          fVar6 = pfVar3[5];
          fVar7 = pfVar3[6];
          fVar8 = pfVar3[7];
          fVar10 = *pfVar3;
          fVar11 = pfVar3[1];
          fVar12 = pfVar3[2];
          fVar13 = pfVar3[3];
          fVar14 = pfVar3[8];
          fVar15 = pfVar3[9];
          fVar16 = pfVar3[10];
          fVar17 = pfVar3[0xb];
          fVar18 = pfVar3[0xc];
          fVar19 = pfVar3[0xd];
          fVar20 = pfVar3[0xe];
          fVar21 = pfVar3[0xf];
          fVar47 = local_1a8 * fVar10 + fStack_1a4 * fVar9 + fStack_1a0 * fVar14 +
                   fStack_19c * fVar18;
          fVar48 = local_1a8 * fVar11 + fStack_1a4 * fVar6 + fStack_1a0 * fVar15 +
                   fStack_19c * fVar19;
          fVar49 = local_1a8 * fVar12 + fStack_1a4 * fVar7 + fStack_1a0 * fVar16 +
                   fStack_19c * fVar20;
          fVar50 = local_1a8 * fVar13 + fStack_1a4 * fVar8 + fStack_1a0 * fVar17 +
                   fStack_19c * fVar21;
          fVar43 = local_198 * fVar10 + fStack_194 * fVar9 + fStack_190 * fVar14 +
                   fStack_18c * fVar18;
          fVar44 = local_198 * fVar11 + fStack_194 * fVar6 + fStack_190 * fVar15 +
                   fStack_18c * fVar19;
          fVar45 = local_198 * fVar12 + fStack_194 * fVar7 + fStack_190 * fVar16 +
                   fStack_18c * fVar20;
          fVar46 = local_198 * fVar13 + fStack_194 * fVar8 + fStack_190 * fVar17 +
                   fStack_18c * fVar21;
          fVar39 = local_188 * fVar10 + fStack_184 * fVar9 + fStack_180 * fVar14 +
                   fStack_17c * fVar18;
          fVar40 = local_188 * fVar11 + fStack_184 * fVar6 + fStack_180 * fVar15 +
                   fStack_17c * fVar19;
          fVar41 = local_188 * fVar12 + fStack_184 * fVar7 + fStack_180 * fVar16 +
                   fStack_17c * fVar20;
          fVar42 = local_188 * fVar13 + fStack_184 * fVar8 + fStack_180 * fVar17 +
                   fStack_17c * fVar21;
          fVar35 = local_178 * fVar10 + fStack_174 * fVar9 + fStack_170 * fVar14 +
                   fStack_16c * fVar18;
          fVar36 = local_178 * fVar11 + fStack_174 * fVar6 + fStack_170 * fVar15 +
                   fStack_16c * fVar19;
          fVar37 = local_178 * fVar12 + fStack_174 * fVar7 + fStack_170 * fVar16 +
                   fStack_16c * fVar20;
          fVar38 = local_178 * fVar13 + fStack_174 * fVar8 + fStack_170 * fVar17 +
                   fStack_16c * fVar21;
          local_168 = fVar47;
          fStack_164 = fVar48;
          fStack_160 = fVar49;
          fStack_15c = fVar50;
          local_158 = fVar43;
          fStack_154 = fVar44;
          fStack_150 = fVar45;
          fStack_14c = fVar46;
          local_148 = fVar39;
          fStack_144 = fVar40;
          fStack_140 = fVar41;
          fStack_13c = fVar42;
          local_138 = fVar35;
          fStack_134 = fVar36;
          fStack_130 = fVar37;
          fStack_12c = fVar38;
          FRotationMatrix::FRotationMatrix(&local_128,&local_1c8);
          pfVar3 = (float *)FMatrix::Inverse(&local_168,local_e8);
          fVar9 = pfVar3[4];
          fVar6 = pfVar3[5];
          fVar7 = pfVar3[6];
          fVar8 = pfVar3[7];
          fVar10 = *pfVar3;
          fVar11 = pfVar3[1];
          fVar12 = pfVar3[2];
          fVar13 = pfVar3[3];
          fVar14 = pfVar3[8];
          fVar15 = pfVar3[9];
          fVar16 = pfVar3[10];
          fVar17 = pfVar3[0xb];
          fVar18 = pfVar3[0xc];
          fVar19 = pfVar3[0xd];
          fVar20 = pfVar3[0xe];
          fVar21 = pfVar3[0xf];
          fVar31 = local_128 * fVar10 + fStack_124 * fVar9 + fStack_120 * fVar14 +
                   fStack_11c * fVar18;
          fVar32 = local_128 * fVar11 + fStack_124 * fVar6 + fStack_120 * fVar15 +
                   fStack_11c * fVar19;
          fVar33 = local_128 * fVar12 + fStack_124 * fVar7 + fStack_120 * fVar16 +
                   fStack_11c * fVar20;
          fVar34 = local_128 * fVar13 + fStack_124 * fVar8 + fStack_120 * fVar17 +
                   fStack_11c * fVar21;
          fVar26 = local_118 * fVar10 + fStack_114 * fVar9 + fStack_110 * fVar14 +
                   fStack_10c * fVar18;
          fVar27 = local_118 * fVar11 + fStack_114 * fVar6 + fStack_110 * fVar15 +
                   fStack_10c * fVar19;
          fVar28 = local_118 * fVar12 + fStack_114 * fVar7 + fStack_110 * fVar16 +
                   fStack_10c * fVar20;
          fVar29 = local_118 * fVar13 + fStack_114 * fVar8 + fStack_110 * fVar17 +
                   fStack_10c * fVar21;
          fVar22 = local_108 * fVar10 + fStack_104 * fVar9 + fStack_100 * fVar14 +
                   fStack_fc * fVar18;
          fVar23 = local_108 * fVar11 + fStack_104 * fVar6 + fStack_100 * fVar15 +
                   fStack_fc * fVar19;
          fVar24 = local_108 * fVar12 + fStack_104 * fVar7 + fStack_100 * fVar16 +
                   fStack_fc * fVar20;
          fVar25 = local_108 * fVar13 + fStack_104 * fVar8 + fStack_100 * fVar17 +
                   fStack_fc * fVar21;
          fVar18 = local_f8 * fVar10 + fStack_f4 * fVar9 + fStack_f0 * fVar14 + fStack_ec * fVar18;
          fVar19 = local_f8 * fVar11 + fStack_f4 * fVar6 + fStack_f0 * fVar15 + fStack_ec * fVar19;
          fVar20 = local_f8 * fVar12 + fStack_f4 * fVar7 + fStack_f0 * fVar16 + fStack_ec * fVar20;
          fVar21 = local_f8 * fVar13 + fStack_f4 * fVar8 + fStack_f0 * fVar17 + fStack_ec * fVar21;
          fVar9 = fVar48 * fVar26 + fVar47 * fVar31 + fVar49 * fVar22 + fVar50 * fVar18;
          fVar6 = fVar48 * fVar27 + fVar47 * fVar32 + fVar49 * fVar23 + fVar50 * fVar19;
          fVar7 = fVar48 * fVar28 + fVar47 * fVar33 + fVar49 * fVar24 + fVar50 * fVar20;
          fVar8 = fVar48 * fVar29 + fVar47 * fVar34 + fVar49 * fVar25 + fVar50 * fVar21;
          fVar10 = fVar44 * fVar26 + fVar43 * fVar31 + fVar45 * fVar22 + fVar46 * fVar18;
          fVar11 = fVar44 * fVar27 + fVar43 * fVar32 + fVar45 * fVar23 + fVar46 * fVar19;
          fVar12 = fVar44 * fVar28 + fVar43 * fVar33 + fVar45 * fVar24 + fVar46 * fVar20;
          fVar13 = fVar44 * fVar29 + fVar43 * fVar34 + fVar45 * fVar25 + fVar46 * fVar21;
          fVar14 = fVar40 * fVar26 + fVar39 * fVar31 + fVar41 * fVar22 + fVar42 * fVar18;
          fVar15 = fVar40 * fVar27 + fVar39 * fVar32 + fVar41 * fVar23 + fVar42 * fVar19;
          fVar16 = fVar40 * fVar28 + fVar39 * fVar33 + fVar41 * fVar24 + fVar42 * fVar20;
          fVar17 = fVar40 * fVar29 + fVar39 * fVar34 + fVar41 * fVar25 + fVar42 * fVar21;
          fVar18 = fVar36 * fVar26 + fVar35 * fVar31 + fVar37 * fVar22 + fVar38 * fVar18;
          fVar19 = fVar36 * fVar27 + fVar35 * fVar32 + fVar37 * fVar23 + fVar38 * fVar19;
          fVar20 = fVar36 * fVar28 + fVar35 * fVar33 + fVar37 * fVar24 + fVar38 * fVar20;
          fVar21 = fVar36 * fVar29 + fVar35 * fVar34 + fVar37 * fVar25 + fVar38 * fVar21;
          local_128 = fVar6 * local_198 + fVar9 * local_1a8 + fVar7 * local_188 + fVar8 * local_178;
          fStack_124 = fVar6 * fStack_194 + fVar9 * fStack_1a4 + fVar7 * fStack_184 +
                       fVar8 * fStack_174;
          fStack_120 = fVar6 * fStack_190 + fVar9 * fStack_1a0 + fVar7 * fStack_180 +
                       fVar8 * fStack_170;
          fStack_11c = fVar6 * fStack_18c + fVar9 * fStack_19c + fVar7 * fStack_17c +
                       fVar8 * fStack_16c;
          local_118 = fVar11 * local_198 + fVar10 * local_1a8 + fVar12 * local_188 +
                      fVar13 * local_178;
          fStack_114 = fVar11 * fStack_194 + fVar10 * fStack_1a4 + fVar12 * fStack_184 +
                       fVar13 * fStack_174;
          fStack_110 = fVar11 * fStack_190 + fVar10 * fStack_1a0 + fVar12 * fStack_180 +
                       fVar13 * fStack_170;
          fStack_10c = fVar11 * fStack_18c + fVar10 * fStack_19c + fVar12 * fStack_17c +
                       fVar13 * fStack_16c;
          local_108 = fVar15 * local_198 + fVar14 * local_1a8 + fVar16 * local_188 +
                      fVar17 * local_178;
          fStack_104 = fVar15 * fStack_194 + fVar14 * fStack_1a4 + fVar16 * fStack_184 +
                       fVar17 * fStack_174;
          fStack_100 = fVar15 * fStack_190 + fVar14 * fStack_1a0 + fVar16 * fStack_180 +
                       fVar17 * fStack_170;
          fStack_fc = fVar15 * fStack_18c + fVar14 * fStack_19c + fVar16 * fStack_17c +
                      fVar17 * fStack_16c;
          local_f8 = fVar19 * local_198 + fVar18 * local_1a8 + fVar20 * local_188 +
                     fVar21 * local_178;
          fStack_f4 = fVar19 * fStack_194 + fVar18 * fStack_1a4 + fVar20 * fStack_184 +
                      fVar21 * fStack_174;
          fStack_f0 = fVar19 * fStack_190 + fVar18 * fStack_1a0 + fVar20 * fStack_180 +
                      fVar21 * fStack_170;
          fStack_ec = fVar19 * fStack_18c + fVar18 * fStack_19c + fVar20 * fStack_17c +
                      fVar21 * fStack_16c;
          puVar4 = (undefined8 *)FMatrix::Rotator(&local_128,&local_1c8);
        }
        fVar9 = 0.0;
        *(undefined8 *)(param_4 + 3) = *puVar4;
        param_4[5] = *(float *)(puVar4 + 1);
        if (*(float *)(param_1 + 0x78) != 0.0) {
          fVar9 = param_2 * *(float *)(param_1 + 0x7c) + *(float *)(param_1 + 0xe0);
          *(float *)(param_1 + 0xe0) = fVar9;
          fVar9 = _guard_xfg_dispatch_icall_nop(fVar9);
          fVar9 = fVar9 * *(float *)(param_1 + 0x78);
        }
        param_4[6] = (fVar9 * fVar30 + 1.0) * param_4[6];
      }
    }
  }
  else {
    *(float *)(param_1 + 0xb8) = *(float *)(param_1 + 0x14);
  }
  return;
}



// FUNCTION 142320b20 FUN_142320b20 body=2796 status=ok
// SIG undefined FUN_142320b20(void)

void FUN_142320b20(longlong param_1,float param_2,float param_3,float *param_4)

{
  longlong lVar1;
  bool bVar2;
  float *pfVar3;
  undefined8 *puVar4;
  ushort uVar5;
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
  float local_1d8;
  float local_1d4;
  float local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
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
  undefined1 local_f8 [224];
  
  fVar9 = param_3 * *(float *)(param_1 + 0x168);
  lVar1 = *(longlong *)(param_1 + 0x170);
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  if (lVar1 != 0) {
    *(float *)(lVar1 + 0x58) = fVar9 * *(float *)(lVar1 + 0x58);
  }
  fVar8 = *(float *)(param_1 + 0x16c);
  if (0.0 < fVar8) {
    fVar8 = fVar8 - param_2;
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    *(float *)(param_1 + 0x16c) = fVar8;
  }
  uVar5 = *(ushort *)(param_1 + 0xcc);
  if ((uVar5 & 1) != 0) {
    *(float *)(param_1 + 0xd4) = param_2 + *(float *)(param_1 + 0xd4);
  }
  if ((uVar5 & 2) != 0) {
    *(float *)(param_1 + 0xd8) = param_2 + *(float *)(param_1 + 0xd8);
  }
  bVar2 = false;
  if (fVar8 == 0.0) {
    bVar2 = true;
  }
  else if ((0.0 <= fVar8) && (fVar8 < *(float *)(param_1 + 0x34))) {
    uVar5 = uVar5 | 2;
    *(ushort *)(param_1 + 0xcc) = uVar5;
    *(float *)(param_1 + 0xd8) = *(float *)(param_1 + 0x34) - fVar8;
  }
  if (((uVar5 & 1) != 0) && (*(float *)(param_1 + 0x30) < *(float *)(param_1 + 0xd4))) {
    uVar5 = uVar5 & 0xfffe;
    *(ushort *)(param_1 + 0xcc) = uVar5;
  }
  if (((uVar5 & 2) == 0) || (*(float *)(param_1 + 0xd8) <= *(float *)(param_1 + 0x34))) {
    if (!bVar2) {
      if ((uVar5 & 1) == 0) {
        fVar8 = 1.0;
      }
      else {
        fVar8 = *(float *)(param_1 + 0xd4) / *(float *)(param_1 + 0x30);
      }
      fVar30 = 1.0;
      if ((uVar5 & 2) != 0) {
        fVar30 = 1.0 - *(float *)(param_1 + 0xd8) / *(float *)(param_1 + 0x34);
      }
      if (fVar8 <= fVar30) {
        fVar30 = fVar8;
      }
      fVar30 = fVar30 * fVar9;
      if (0.0 < fVar30) {
        if (*(float *)(param_1 + 0x68) == 0.0) {
          fVar9 = 0.0;
        }
        else {
          fVar9 = param_2 * *(float *)(param_1 + 0x6c) + *(float *)(param_1 + 0xe8);
          *(float *)(param_1 + 0xe8) = fVar9;
          fVar9 = _guard_xfg_dispatch_icall_nop(fVar9);
          fVar9 = fVar9 * *(float *)(param_1 + 0x68);
        }
        if (*(float *)(param_1 + 0x78) == 0.0) {
          fVar8 = 0.0;
        }
        else {
          fVar8 = param_2 * *(float *)(param_1 + 0x7c) + *(float *)(param_1 + 0xec);
          *(float *)(param_1 + 0xec) = fVar8;
          fVar8 = _guard_xfg_dispatch_icall_nop(fVar8);
          fVar8 = fVar8 * *(float *)(param_1 + 0x78);
        }
        if (*(float *)(param_1 + 0x88) == 0.0) {
          fVar6 = 0.0;
        }
        else {
          fVar6 = param_2 * *(float *)(param_1 + 0x8c) + *(float *)(param_1 + 0xf0);
          *(float *)(param_1 + 0xf0) = fVar6;
          fVar6 = _guard_xfg_dispatch_icall_nop(fVar6);
          fVar6 = fVar6 * *(float *)(param_1 + 0x88);
        }
        fVar9 = fVar9 * fVar30;
        fVar8 = fVar8 * fVar30;
        fVar6 = fVar6 * fVar30;
        if (*(float *)(param_1 + 0x38) == 0.0) {
          local_1d8 = 0.0;
        }
        else {
          fVar7 = param_2 * *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0xf4);
          *(float *)(param_1 + 0xf4) = fVar7;
          local_1d8 = _guard_xfg_dispatch_icall_nop(fVar7);
          local_1d8 = local_1d8 * *(float *)(param_1 + 0x38);
        }
        local_1d8 = local_1d8 * fVar30;
        if (*(float *)(param_1 + 0x48) == 0.0) {
          local_1d4 = 0.0;
        }
        else {
          fVar7 = param_2 * *(float *)(param_1 + 0x4c) + *(float *)(param_1 + 0xf8);
          *(float *)(param_1 + 0xf8) = fVar7;
          local_1d4 = _guard_xfg_dispatch_icall_nop(fVar7);
          local_1d4 = local_1d4 * *(float *)(param_1 + 0x48);
        }
        local_1d4 = local_1d4 * fVar30;
        if (*(float *)(param_1 + 0x58) == 0.0) {
          local_1d0 = 0.0;
        }
        else {
          fVar7 = param_2 * *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0xfc);
          *(float *)(param_1 + 0xfc) = fVar7;
          local_1d0 = _guard_xfg_dispatch_icall_nop(fVar7);
          local_1d0 = local_1d0 * *(float *)(param_1 + 0x58);
        }
        local_1d0 = local_1d0 * fVar30;
        if (*(int *)(param_1 + 0xd0) == 0) {
          FRotationMatrix::FRotationMatrix(&local_1b8,param_4 + 3);
          local_1c8 = 0;
          local_1c0 = 0;
          *param_4 = local_188 * 0.0 + fVar6 * local_198 + fVar8 * local_1a8 + fVar9 * local_1b8 +
                     *param_4;
          param_4[1] = fStack_184 * 0.0 + fVar6 * fStack_194 +
                       fVar8 * fStack_1a4 + fVar9 * fStack_1b4 + param_4[1];
          param_4[2] = fStack_180 * 0.0 + fVar6 * fStack_190 +
                       fVar8 * fStack_1a0 + fVar9 * fStack_1b0 + param_4[2];
          FRotationMatrix::FRotationMatrix(&local_1b8,&local_1d8);
          pfVar3 = (float *)FRotationMatrix::FRotationMatrix(&local_138,param_4 + 3);
          fVar9 = pfVar3[4];
          fVar8 = pfVar3[5];
          fVar6 = pfVar3[6];
          fVar7 = pfVar3[7];
          fVar10 = *pfVar3;
          fVar11 = pfVar3[1];
          fVar12 = pfVar3[2];
          fVar13 = pfVar3[3];
          fVar14 = pfVar3[8];
          fVar15 = pfVar3[9];
          fVar16 = pfVar3[10];
          fVar17 = pfVar3[0xb];
          fVar18 = pfVar3[0xc];
          fVar19 = pfVar3[0xd];
          fVar20 = pfVar3[0xe];
          fVar21 = pfVar3[0xf];
          local_178 = fStack_1b4 * fVar9 + local_1b8 * fVar10 + fStack_1b0 * fVar14 +
                      fStack_1ac * fVar18;
          fStack_174 = fStack_1b4 * fVar8 + local_1b8 * fVar11 + fStack_1b0 * fVar15 +
                       fStack_1ac * fVar19;
          fStack_170 = fStack_1b4 * fVar6 + local_1b8 * fVar12 + fStack_1b0 * fVar16 +
                       fStack_1ac * fVar20;
          fStack_16c = fStack_1b4 * fVar7 + local_1b8 * fVar13 + fStack_1b0 * fVar17 +
                       fStack_1ac * fVar21;
          local_168 = fStack_1a4 * fVar9 + local_1a8 * fVar10 + fStack_1a0 * fVar14 +
                      fStack_19c * fVar18;
          fStack_164 = fStack_1a4 * fVar8 + local_1a8 * fVar11 + fStack_1a0 * fVar15 +
                       fStack_19c * fVar19;
          fStack_160 = fStack_1a4 * fVar6 + local_1a8 * fVar12 + fStack_1a0 * fVar16 +
                       fStack_19c * fVar20;
          fStack_15c = fStack_1a4 * fVar7 + local_1a8 * fVar13 + fStack_1a0 * fVar17 +
                       fStack_19c * fVar21;
          local_158 = fStack_194 * fVar9 + local_198 * fVar10 + fStack_190 * fVar14 +
                      fStack_18c * fVar18;
          fStack_154 = fStack_194 * fVar8 + local_198 * fVar11 + fStack_190 * fVar15 +
                       fStack_18c * fVar19;
          fStack_150 = fStack_194 * fVar6 + local_198 * fVar12 + fStack_190 * fVar16 +
                       fStack_18c * fVar20;
          fStack_14c = fStack_194 * fVar7 + local_198 * fVar13 + fStack_190 * fVar17 +
                       fStack_18c * fVar21;
          local_148 = fStack_184 * fVar9 + local_188 * fVar10 + fStack_180 * fVar14 +
                      fStack_17c * fVar18;
          fStack_144 = fStack_184 * fVar8 + local_188 * fVar11 + fStack_180 * fVar15 +
                       fStack_17c * fVar19;
          fStack_140 = fStack_184 * fVar6 + local_188 * fVar12 + fStack_180 * fVar16 +
                       fStack_17c * fVar20;
          fStack_13c = fStack_184 * fVar7 + local_188 * fVar13 + fStack_180 * fVar17 +
                       fStack_17c * fVar21;
          puVar4 = (undefined8 *)FMatrix::Rotator(&local_178,&local_1d8);
        }
        else {
          pfVar3 = (float *)(param_1 + 0x120);
          if (*(int *)(param_1 + 0xd0) != 2) {
            pfVar3 = (float *)&DAT_1464aa7d0;
          }
          local_148 = pfVar3[0xc];
          fStack_144 = pfVar3[0xd];
          fStack_140 = pfVar3[0xe];
          fStack_13c = pfVar3[0xf];
          local_158 = pfVar3[8];
          fStack_154 = pfVar3[9];
          fStack_150 = pfVar3[10];
          fStack_14c = pfVar3[0xb];
          local_178 = *pfVar3;
          fStack_174 = pfVar3[1];
          fStack_170 = pfVar3[2];
          fStack_16c = pfVar3[3];
          local_168 = pfVar3[4];
          fStack_164 = pfVar3[5];
          fStack_160 = pfVar3[6];
          fStack_15c = pfVar3[7];
          local_1c8 = 0;
          local_1c0 = 0;
          *param_4 = local_148 * 0.0 + fVar6 * local_158 + fVar8 * local_168 + fVar9 * local_178 +
                     *param_4;
          param_4[1] = fStack_144 * 0.0 + fVar6 * fStack_154 +
                       fVar8 * fStack_164 + fVar9 * fStack_174 + param_4[1];
          param_4[2] = fStack_140 * 0.0 + fVar6 * fStack_150 +
                       fVar8 * fStack_160 + fVar9 * fStack_170 + param_4[2];
          FRotationMatrix::FRotationMatrix(&local_1b8,param_4 + 3);
          pfVar3 = (float *)FMatrix::Inverse(&local_178,&local_138);
          fVar9 = pfVar3[4];
          fVar8 = pfVar3[5];
          fVar6 = pfVar3[6];
          fVar7 = pfVar3[7];
          fVar10 = *pfVar3;
          fVar11 = pfVar3[1];
          fVar12 = pfVar3[2];
          fVar13 = pfVar3[3];
          fVar14 = pfVar3[8];
          fVar15 = pfVar3[9];
          fVar16 = pfVar3[10];
          fVar17 = pfVar3[0xb];
          fVar18 = pfVar3[0xc];
          fVar19 = pfVar3[0xd];
          fVar20 = pfVar3[0xe];
          fVar21 = pfVar3[0xf];
          fVar47 = local_1b8 * fVar10 + fStack_1b4 * fVar9 + fStack_1b0 * fVar14 +
                   fStack_1ac * fVar18;
          fVar48 = local_1b8 * fVar11 + fStack_1b4 * fVar8 + fStack_1b0 * fVar15 +
                   fStack_1ac * fVar19;
          fVar49 = local_1b8 * fVar12 + fStack_1b4 * fVar6 + fStack_1b0 * fVar16 +
                   fStack_1ac * fVar20;
          fVar50 = local_1b8 * fVar13 + fStack_1b4 * fVar7 + fStack_1b0 * fVar17 +
                   fStack_1ac * fVar21;
          fVar43 = local_1a8 * fVar10 + fStack_1a4 * fVar9 + fStack_1a0 * fVar14 +
                   fStack_19c * fVar18;
          fVar44 = local_1a8 * fVar11 + fStack_1a4 * fVar8 + fStack_1a0 * fVar15 +
                   fStack_19c * fVar19;
          fVar45 = local_1a8 * fVar12 + fStack_1a4 * fVar6 + fStack_1a0 * fVar16 +
                   fStack_19c * fVar20;
          fVar46 = local_1a8 * fVar13 + fStack_1a4 * fVar7 + fStack_1a0 * fVar17 +
                   fStack_19c * fVar21;
          fVar39 = local_198 * fVar10 + fStack_194 * fVar9 + fStack_190 * fVar14 +
                   fStack_18c * fVar18;
          fVar40 = local_198 * fVar11 + fStack_194 * fVar8 + fStack_190 * fVar15 +
                   fStack_18c * fVar19;
          fVar41 = local_198 * fVar12 + fStack_194 * fVar6 + fStack_190 * fVar16 +
                   fStack_18c * fVar20;
          fVar42 = local_198 * fVar13 + fStack_194 * fVar7 + fStack_190 * fVar17 +
                   fStack_18c * fVar21;
          fVar35 = local_188 * fVar10 + fStack_184 * fVar9 + fStack_180 * fVar14 +
                   fStack_17c * fVar18;
          fVar36 = local_188 * fVar11 + fStack_184 * fVar8 + fStack_180 * fVar15 +
                   fStack_17c * fVar19;
          fVar37 = local_188 * fVar12 + fStack_184 * fVar6 + fStack_180 * fVar16 +
                   fStack_17c * fVar20;
          fVar38 = local_188 * fVar13 + fStack_184 * fVar7 + fStack_180 * fVar17 +
                   fStack_17c * fVar21;
          local_178 = fVar47;
          fStack_174 = fVar48;
          fStack_170 = fVar49;
          fStack_16c = fVar50;
          local_168 = fVar43;
          fStack_164 = fVar44;
          fStack_160 = fVar45;
          fStack_15c = fVar46;
          local_158 = fVar39;
          fStack_154 = fVar40;
          fStack_150 = fVar41;
          fStack_14c = fVar42;
          local_148 = fVar35;
          fStack_144 = fVar36;
          fStack_140 = fVar37;
          fStack_13c = fVar38;
          FRotationMatrix::FRotationMatrix(&local_138,&local_1d8);
          pfVar3 = (float *)FMatrix::Inverse(&local_178,local_f8);
          fVar9 = pfVar3[4];
          fVar8 = pfVar3[5];
          fVar6 = pfVar3[6];
          fVar7 = pfVar3[7];
          fVar10 = *pfVar3;
          fVar11 = pfVar3[1];
          fVar12 = pfVar3[2];
          fVar13 = pfVar3[3];
          fVar14 = pfVar3[8];
          fVar15 = pfVar3[9];
          fVar16 = pfVar3[10];
          fVar17 = pfVar3[0xb];
          fVar18 = pfVar3[0xc];
          fVar19 = pfVar3[0xd];
          fVar20 = pfVar3[0xe];
          fVar21 = pfVar3[0xf];
          fVar31 = local_138 * fVar10 + fStack_134 * fVar9 + fStack_130 * fVar14 +
                   fStack_12c * fVar18;
          fVar32 = local_138 * fVar11 + fStack_134 * fVar8 + fStack_130 * fVar15 +
                   fStack_12c * fVar19;
          fVar33 = local_138 * fVar12 + fStack_134 * fVar6 + fStack_130 * fVar16 +
                   fStack_12c * fVar20;
          fVar34 = local_138 * fVar13 + fStack_134 * fVar7 + fStack_130 * fVar17 +
                   fStack_12c * fVar21;
          fVar26 = local_128 * fVar10 + fStack_124 * fVar9 + fStack_120 * fVar14 +
                   fStack_11c * fVar18;
          fVar27 = local_128 * fVar11 + fStack_124 * fVar8 + fStack_120 * fVar15 +
                   fStack_11c * fVar19;
          fVar28 = local_128 * fVar12 + fStack_124 * fVar6 + fStack_120 * fVar16 +
                   fStack_11c * fVar20;
          fVar29 = local_128 * fVar13 + fStack_124 * fVar7 + fStack_120 * fVar17 +
                   fStack_11c * fVar21;
          fVar22 = local_118 * fVar10 + fStack_114 * fVar9 + fStack_110 * fVar14 +
                   fStack_10c * fVar18;
          fVar23 = local_118 * fVar11 + fStack_114 * fVar8 + fStack_110 * fVar15 +
                   fStack_10c * fVar19;
          fVar24 = local_118 * fVar12 + fStack_114 * fVar6 + fStack_110 * fVar16 +
                   fStack_10c * fVar20;
          fVar25 = local_118 * fVar13 + fStack_114 * fVar7 + fStack_110 * fVar17 +
                   fStack_10c * fVar21;
          fVar18 = local_108 * fVar10 + fStack_104 * fVar9 + fStack_100 * fVar14 +
                   fStack_fc * fVar18;
          fVar19 = local_108 * fVar11 + fStack_104 * fVar8 + fStack_100 * fVar15 +
                   fStack_fc * fVar19;
          fVar20 = local_108 * fVar12 + fStack_104 * fVar6 + fStack_100 * fVar16 +
                   fStack_fc * fVar20;
          fVar21 = local_108 * fVar13 + fStack_104 * fVar7 + fStack_100 * fVar17 +
                   fStack_fc * fVar21;
          fVar9 = fVar48 * fVar26 + fVar47 * fVar31 + fVar49 * fVar22 + fVar50 * fVar18;
          fVar8 = fVar48 * fVar27 + fVar47 * fVar32 + fVar49 * fVar23 + fVar50 * fVar19;
          fVar6 = fVar48 * fVar28 + fVar47 * fVar33 + fVar49 * fVar24 + fVar50 * fVar20;
          fVar7 = fVar48 * fVar29 + fVar47 * fVar34 + fVar49 * fVar25 + fVar50 * fVar21;
          fVar10 = fVar44 * fVar26 + fVar43 * fVar31 + fVar45 * fVar22 + fVar46 * fVar18;
          fVar11 = fVar44 * fVar27 + fVar43 * fVar32 + fVar45 * fVar23 + fVar46 * fVar19;
          fVar12 = fVar44 * fVar28 + fVar43 * fVar33 + fVar45 * fVar24 + fVar46 * fVar20;
          fVar13 = fVar44 * fVar29 + fVar43 * fVar34 + fVar45 * fVar25 + fVar46 * fVar21;
          fVar14 = fVar40 * fVar26 + fVar39 * fVar31 + fVar41 * fVar22 + fVar42 * fVar18;
          fVar15 = fVar40 * fVar27 + fVar39 * fVar32 + fVar41 * fVar23 + fVar42 * fVar19;
          fVar16 = fVar40 * fVar28 + fVar39 * fVar33 + fVar41 * fVar24 + fVar42 * fVar20;
          fVar17 = fVar40 * fVar29 + fVar39 * fVar34 + fVar41 * fVar25 + fVar42 * fVar21;
          fVar18 = fVar36 * fVar26 + fVar35 * fVar31 + fVar37 * fVar22 + fVar38 * fVar18;
          fVar19 = fVar36 * fVar27 + fVar35 * fVar32 + fVar37 * fVar23 + fVar38 * fVar19;
          fVar20 = fVar36 * fVar28 + fVar35 * fVar33 + fVar37 * fVar24 + fVar38 * fVar20;
          fVar21 = fVar36 * fVar29 + fVar35 * fVar34 + fVar37 * fVar25 + fVar38 * fVar21;
          local_138 = fVar8 * local_1a8 + fVar9 * local_1b8 + fVar6 * local_198 + fVar7 * local_188;
          fStack_134 = fVar8 * fStack_1a4 + fVar9 * fStack_1b4 + fVar6 * fStack_194 +
                       fVar7 * fStack_184;
          fStack_130 = fVar8 * fStack_1a0 + fVar9 * fStack_1b0 + fVar6 * fStack_190 +
                       fVar7 * fStack_180;
          fStack_12c = fVar8 * fStack_19c + fVar9 * fStack_1ac + fVar6 * fStack_18c +
                       fVar7 * fStack_17c;
          local_128 = fVar11 * local_1a8 + fVar10 * local_1b8 + fVar12 * local_198 +
                      fVar13 * local_188;
          fStack_124 = fVar11 * fStack_1a4 + fVar10 * fStack_1b4 + fVar12 * fStack_194 +
                       fVar13 * fStack_184;
          fStack_120 = fVar11 * fStack_1a0 + fVar10 * fStack_1b0 + fVar12 * fStack_190 +
                       fVar13 * fStack_180;
          fStack_11c = fVar11 * fStack_19c + fVar10 * fStack_1ac + fVar12 * fStack_18c +
                       fVar13 * fStack_17c;
          local_118 = fVar15 * local_1a8 + fVar14 * local_1b8 + fVar16 * local_198 +
                      fVar17 * local_188;
          fStack_114 = fVar15 * fStack_1a4 + fVar14 * fStack_1b4 + fVar16 * fStack_194 +
                       fVar17 * fStack_184;
          fStack_110 = fVar15 * fStack_1a0 + fVar14 * fStack_1b0 + fVar16 * fStack_190 +
                       fVar17 * fStack_180;
          fStack_10c = fVar15 * fStack_19c + fVar14 * fStack_1ac + fVar16 * fStack_18c +
                       fVar17 * fStack_17c;
          local_108 = fVar19 * local_1a8 + fVar18 * local_1b8 + fVar20 * local_198 +
                      fVar21 * local_188;
          fStack_104 = fVar19 * fStack_1a4 + fVar18 * fStack_1b4 + fVar20 * fStack_194 +
                       fVar21 * fStack_184;
          fStack_100 = fVar19 * fStack_1a0 + fVar18 * fStack_1b0 + fVar20 * fStack_190 +
                       fVar21 * fStack_180;
          fStack_fc = fVar19 * fStack_19c + fVar18 * fStack_1ac + fVar20 * fStack_18c +
                      fVar21 * fStack_17c;
          puVar4 = (undefined8 *)FMatrix::Rotator(&local_138,&local_1d8);
        }
        fVar9 = 0.0;
        *(undefined8 *)(param_4 + 3) = *puVar4;
        param_4[5] = *(float *)(puVar4 + 1);
        if (*(float *)(param_1 + 0x98) != 0.0) {
          fVar9 = param_2 * *(float *)(param_1 + 0x9c) + *(float *)(param_1 + 0x100);
          *(float *)(param_1 + 0x100) = fVar9;
          fVar9 = _guard_xfg_dispatch_icall_nop(fVar9);
          fVar9 = fVar9 * *(float *)(param_1 + 0x98);
        }
        param_4[6] = (fVar9 * fVar30 + 1.0) * param_4[6];
      }
    }
  }
  else {
    *(float *)(param_1 + 0xd8) = *(float *)(param_1 + 0x34);
  }
  FUN_14290e900(param_1,param_2,param_3,param_4,param_4);
  return;
}



// FUNCTION 142321610 FUN_142321610 body=243 status=ok
// SIG undefined FUN_142321610(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142321610(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  iVar4 = 0;
  *(undefined8 *)(param_1 + 0x7c) = _DAT_1468b5d90;
  uVar1 = DAT_1468b5d98;
  *(undefined4 *)(param_1 + 0x84) = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  *(undefined1 *)(param_1 + 0x88) = 0;
  if (0 < *(int *)(param_1 + 0x68)) {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x60);
      if (*(char *)(param_1 + 0x88) == '\0') {
        *(undefined8 *)(param_1 + 0x7c) = *(undefined8 *)(lVar3 + lVar2);
        uVar1 = *(undefined4 *)(lVar3 + 8 + lVar2);
        *(undefined4 *)(param_1 + 0x84) = uVar1;
        *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x7c);
        *(undefined4 *)(param_1 + 0x78) = uVar1;
        *(undefined1 *)(param_1 + 0x88) = 1;
      }
      else {
        fVar6 = *(float *)(param_1 + 0x70);
        if (*(float *)(lVar3 + lVar2) <= *(float *)(param_1 + 0x70)) {
          fVar6 = *(float *)(lVar3 + lVar2);
        }
        *(float *)(param_1 + 0x70) = fVar6;
        fVar6 = *(float *)(lVar3 + 4 + lVar2);
        fVar5 = *(float *)(param_1 + 0x74);
        if (fVar6 <= *(float *)(param_1 + 0x74)) {
          fVar5 = fVar6;
        }
        *(float *)(param_1 + 0x74) = fVar5;
        fVar6 = *(float *)(lVar3 + 8 + lVar2);
        fVar5 = *(float *)(param_1 + 0x78);
        if (fVar6 <= *(float *)(param_1 + 0x78)) {
          fVar5 = fVar6;
        }
        *(float *)(param_1 + 0x78) = fVar5;
        fVar6 = *(float *)(lVar3 + lVar2);
        if (*(float *)(lVar3 + lVar2) <= *(float *)(param_1 + 0x7c)) {
          fVar6 = *(float *)(param_1 + 0x7c);
        }
        *(float *)(param_1 + 0x7c) = fVar6;
        fVar6 = *(float *)(lVar3 + 4 + lVar2);
        if (fVar6 <= *(float *)(param_1 + 0x80)) {
          fVar6 = *(float *)(param_1 + 0x80);
        }
        *(float *)(param_1 + 0x80) = fVar6;
        fVar6 = *(float *)(lVar3 + 8 + lVar2);
        if (fVar6 <= *(float *)(param_1 + 0x84)) {
          fVar6 = *(float *)(param_1 + 0x84);
        }
        *(float *)(param_1 + 0x84) = fVar6;
      }
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 0xc;
    } while (iVar4 < *(int *)(param_1 + 0x68));
  }
  return;
}



// FUNCTION 142321740 FUN_142321740 body=110 status=ok
// SIG undefined FUN_142321740(void)

void FUN_142321740(undefined8 param_1)

{
  longlong lVar1;
  char local_res10 [24];
  code *local_18;
  char *pcStack_10;
  
  FUN_14285c130();
  local_res10[0] = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (local_res10[0] == '\0') {
    pcStack_10 = local_res10;
    local_18 = FUN_1406ddef0;
    lVar1 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
    if (*(char *)(lVar1 + 0x58) == '\0') {
      FUN_14231aa70(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1423217b0 UpdateSafeArea body=296 status=ok
// SIG undefined UpdateSafeArea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UCheatManager::UpdateSafeArea(void)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  bVar1 = false;
  DAT_1464aef94 = DAT_1464aef94 + 1;
  lVar5 = (longlong)(DAT_1464aef88 + -1);
  if (-1 < DAT_1464aef88 + -1) {
    lVar6 = lVar5 << 4;
    bVar1 = false;
    do {
      if (((*(int *)(lVar6 + 8 + DAT_1464aef80) == 0) ||
          (*(longlong **)(lVar6 + DAT_1464aef80) == (longlong *)0x0)) ||
         (cVar3 = (**(code **)(**(longlong **)(lVar6 + DAT_1464aef80) + 0x40))(), cVar3 == '\0')) {
        bVar1 = true;
      }
      lVar6 = lVar6 + -0x10;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  iVar2 = DAT_1464aef88;
  DAT_1464aef94 = DAT_1464aef94 + -1;
  if ((bVar1) && (DAT_1464aef94 < 1)) {
    iVar4 = 0;
    if (0 < DAT_1464aef88) {
      lVar5 = 0;
      do {
        if (((*(int *)(lVar5 + 8 + DAT_1464aef80) == 0) ||
            (*(longlong **)(lVar5 + DAT_1464aef80) == (longlong *)0x0)) ||
           (cVar3 = (**(code **)(**(longlong **)(lVar5 + DAT_1464aef80) + 0x10))(), cVar3 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464aef80,iVar4,1,1);
        }
        else {
          iVar4 = iVar4 + 1;
          lVar5 = lVar5 + 0x10;
        }
      } while (iVar4 < DAT_1464aef88);
    }
    _DAT_1464aef90 = DAT_1464aef88 * 2;
    if (_DAT_1464aef90 < 3) {
      _DAT_1464aef90 = 2;
    }
    if ((_DAT_1464aef90 < iVar2) && (DAT_1464aef8c != DAT_1464aef88)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464aef80);
    }
  }
  return;
}



// FUNCTION 1423218e0 FUN_1423218e0 body=1000 status=ok
// SIG undefined FUN_1423218e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1423218e0(longlong *param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong *plVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  int *piVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  longlong *plVar18;
  int iVar19;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  uint local_a4;
  undefined8 local_a0;
  uint local_98 [2];
  longlong local_90;
  longlong local_88;
  int local_80;
  int local_78;
  char local_74;
  int local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  undefined8 local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_b0 = param_1;
  lVar9 = (**(code **)(*param_1 + 0x148))();
  local_a0 = FUN_1428dfc70();
  local_98[0] = 5;
  local_40 = '\0';
  local_b8 = lVar9;
  FUN_14044bc80(&local_90,&local_b8,&local_a0);
  FUN_14045a130(local_98);
  plVar6 = local_b0;
  iVar19 = local_78;
  lVar9 = local_68;
joined_r0x00014232195b:
  local_68 = lVar9;
  local_78 = iVar19;
  local_b0 = plVar6;
  if (local_74 == '\0') {
    plVar18 = (longlong *)0x0;
    if (local_68 != 0) {
      iVar19 = *(int *)(local_68 + 0xc);
      plVar10 = plVar18;
      if (iVar19 < (int)DAT_1469e91c4) {
        uVar14 = iVar19 >> 0x1f & 0xffff;
        uVar8 = iVar19 + uVar14;
        plVar10 = (longlong *)
                  (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                  (longlong)(int)((uVar8 & 0xffff) - uVar14) * 0x18);
      }
      if (((*(uint *)(plVar10 + 1) >> 0x1d & 1) == 0) && (*(longlong *)(local_68 + 0x18) == param_2)
         ) {
        plVar10 = plVar18;
        if ((*(uint *)(plVar6 + 1) >> 4 & 1) == 0) {
          plVar10 = (longlong *)plVar6[4];
        }
        local_a4 = local_a4 & 0xfffffffe;
        local_a8 = 0x40000000;
        local_b0 = (longlong *)CONCAT35((int3)((ulonglong)plVar6 >> 0x28),0x100000000);
        (**(code **)(*plVar10 + 0xe18))(0,local_68,&local_b0);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_146aefe20) &&
           (_Init_thread_header(&DAT_146aefe20), DAT_146aefe20 == -1)) {
          FName::FName(&DAT_146aefe18,L"ThirdPerson",1);
          _Init_thread_footer(&DAT_146aefe20);
        }
        if ((*(uint *)(plVar6 + 1) >> 4 & 1) == 0) {
          plVar18 = (longlong *)plVar6[4];
        }
        (**(code **)(*plVar18 + 0xe98))(plVar18,DAT_146aefe18);
        goto LAB_142321b8d;
      }
    }
    iVar19 = local_78 + 1;
    local_b8 = local_90;
    if (iVar19 < local_58 + local_80) {
      lVar17 = (longlong)iVar19 * 8;
      iVar16 = local_58;
      iVar15 = local_80;
      do {
        lVar13 = 0;
        if (iVar19 < iVar15) {
          lVar9 = *(longlong *)(local_88 + lVar17);
        }
        else {
          lVar9 = *(longlong *)(local_60 + (longlong)(iVar19 - iVar15) * 8);
        }
        local_70 = local_70 + 1;
        if ((lVar9 != 0) &&
           (lVar11 = AActor::GetLevel(lVar9), iVar16 = local_58, iVar15 = local_80, lVar11 != 0)) {
          if ((local_98[0] & 1) != 0) {
            iVar1 = *(int *)(lVar9 + 0xc);
            if (iVar1 < (int)DAT_1469e91c4) {
              uVar14 = iVar1 >> 0x1f & 0xffff;
              uVar8 = iVar1 + uVar14;
              lVar13 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                       (longlong)(int)((uVar8 & 0xffff) - uVar14) * 0x18;
            }
            if ((*(uint *)(lVar13 + 8) >> 0x1d & 1) != 0) goto LAB_142321b71;
          }
          if (((local_98[0] >> 1 & 1) == 0) ||
             (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(lVar9), iVar16 = local_58,
             iVar15 = local_80, cVar7 != '\0')) {
            if ((local_98[0] >> 2 & 1) != 0) {
              if (((*(byte *)(lVar11 + 0x204) & 0x10) == 0) &&
                 ((*(byte *)(lVar11 + 0x205) & 0x10) == 0)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              piVar2 = *(int **)(lVar11 + 600);
              if (((*(longlong *)(lVar11 + 0xc0) == 0) ||
                  (piVar12 = (int *)UWorld::GetActiveLevelCollection(), piVar12 == (int *)0x0)) ||
                 (piVar2 == piVar12)) {
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
              if ((piVar2 == (int *)0x0) || (*piVar2 == 2)) {
                bVar4 = true;
              }
              else {
                bVar4 = false;
              }
              if ((bVar3) || (bVar3 = false, bVar4)) {
                bVar3 = true;
              }
              iVar16 = local_58;
              iVar15 = local_80;
              if ((!bVar5) || (!bVar3)) goto LAB_142321b71;
            }
            lVar11 = ULevel::GetWorld(lVar11);
            lVar13 = local_b8;
            iVar16 = local_58;
            iVar15 = local_80;
            if (lVar11 == local_b8) {
              lVar11 = AActor::GetLevel(lVar9);
              plVar6 = local_b0;
              if (lVar11 == *(longlong *)(lVar13 + 0x30)) goto joined_r0x00014232195b;
              lVar13 = UVoipListenerSynthComponent::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              iVar16 = local_58;
              iVar15 = local_80;
              plVar6 = local_b0;
              if (!bVar5) goto joined_r0x00014232195b;
            }
          }
        }
LAB_142321b71:
        iVar19 = iVar19 + 1;
        lVar17 = lVar17 + 8;
        if (iVar16 + iVar15 <= iVar19) break;
      } while( true );
    }
    local_68 = 0;
    local_74 = '\x01';
  }
LAB_142321b8d:
  if (local_40 != '\0') {
    local_40 = 0;
    UWorld::RemoveOnActorSpawnedHandler(local_90,local_48);
    if (local_60 != 0) {
      FMemory::Free();
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142321cd0 FUN_142321cd0 body=1633 status=ok
// SIG undefined FUN_142321cd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142321cd0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  int *piVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  uint uVar19;
  int iVar20;
  uint unaff_EDI;
  int iVar21;
  longlong lVar22;
  int iVar23;
  undefined1 auStack_1c8 [32];
  longlong *local_1a8;
  undefined8 uStack_1a0;
  uint local_198;
  longlong *local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  longlong local_170;
  longlong *local_168;
  ulonglong *puStack_160;
  undefined1 local_158 [16];
  longlong local_148 [2];
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [16];
  undefined1 local_e0 [24];
  uint local_c8 [2];
  longlong local_c0;
  longlong local_b8;
  int local_b0;
  int local_a8;
  char local_a4;
  int local_a0;
  longlong *local_98;
  longlong local_90;
  int local_88;
  undefined8 local_78;
  char local_70;
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_1a8 = (longlong *)0x0;
  local_198 = unaff_EDI & 0xffffff00;
  local_190 = param_1;
  local_180 = (**(code **)(*param_1 + 0x148))();
  local_c8[0] = 5;
  local_70 = '\0';
  local_188 = param_2;
  FUN_14044bc80(&local_c0,&local_180,&local_188);
  FUN_14045a130(local_c8);
  plVar12 = (longlong *)0x0;
  iVar23 = local_a8;
  plVar18 = local_98;
  uVar10 = unaff_EDI & 0xffffff00;
joined_r0x000142321d66:
  local_a8 = iVar23;
  local_98 = plVar18;
  if (local_a4 == '\0') {
    lVar11 = 0;
    iVar23 = *(int *)((longlong)plVar18 + 0xc);
    if (iVar23 < (int)DAT_1469e91c4) {
      uVar19 = iVar23 >> 0x1f & 0xffff;
      uVar9 = iVar23 + uVar19;
      lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
               (longlong)(int)((uVar9 & 0xffff) - uVar19) * 0x18;
    }
    if ((*(uint *)(lVar11 + 8) >> 0x1d & 1) == 0) {
      if ((((char)uVar10 != '\0') || (plVar12 == (longlong *)0x0)) &&
         (plVar12 = plVar18, local_1a8 = plVar18, (char)uVar10 != '\0')) goto LAB_142321fc0;
      lVar11 = FUN_1423123a0(param_1);
      plVar12 = (longlong *)FUN_1426e2bc0(*(undefined8 *)(lVar11 + 0x528));
      local_198 = uVar10 & 0xff;
      if (plVar18 == plVar12) {
        local_198 = 1;
      }
    }
    lVar11 = local_c0;
    iVar23 = local_a8 + 1;
    if (iVar23 < local_88 + local_b0) {
      lVar22 = (longlong)iVar23 * 8;
      iVar21 = local_88;
      iVar20 = local_b0;
      do {
        lVar15 = 0;
        if (iVar23 < iVar20) {
          plVar18 = *(longlong **)(lVar22 + local_b8);
        }
        else {
          plVar18 = *(longlong **)(local_90 + (longlong)(iVar23 - iVar20) * 8);
        }
        local_a0 = local_a0 + 1;
        if ((plVar18 != (longlong *)0x0) &&
           (lVar13 = AActor::GetLevel(plVar18), iVar21 = local_88, iVar20 = local_b0, lVar13 != 0))
        {
          if ((local_c8[0] & 1) != 0) {
            iVar2 = *(int *)((longlong)plVar18 + 0xc);
            if (iVar2 < (int)DAT_1469e91c4) {
              uVar9 = iVar2 >> 0x1f & 0xffff;
              uVar10 = iVar2 + uVar9;
              lVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8) +
                       (longlong)(int)((uVar10 & 0xffff) - uVar9) * 0x18;
            }
            if ((*(uint *)(lVar15 + 8) >> 0x1d & 1) != 0) goto LAB_142321f9a;
          }
          if (((local_c8[0] >> 1 & 1) == 0) ||
             (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(plVar18), iVar21 = local_88,
             iVar20 = local_b0, cVar8 != '\0')) {
            if ((local_c8[0] >> 2 & 1) != 0) {
              if (((*(byte *)(lVar13 + 0x204) & 0x10) == 0) &&
                 ((*(byte *)(lVar13 + 0x205) & 0x10) == 0)) {
                bVar7 = false;
              }
              else {
                bVar7 = true;
              }
              piVar3 = *(int **)(lVar13 + 600);
              if (((*(longlong *)(lVar13 + 0xc0) == 0) ||
                  (piVar14 = (int *)UWorld::GetActiveLevelCollection(), piVar14 == (int *)0x0)) ||
                 (piVar3 == piVar14)) {
                bVar5 = true;
              }
              else {
                bVar5 = false;
              }
              if ((piVar3 == (int *)0x0) || (*piVar3 == 2)) {
                bVar6 = true;
              }
              else {
                bVar6 = false;
              }
              if ((bVar5) || (bVar5 = false, bVar6)) {
                bVar5 = true;
              }
              iVar21 = local_88;
              iVar20 = local_b0;
              if ((!bVar7) || (!bVar5)) goto LAB_142321f9a;
            }
            lVar15 = ULevel::GetWorld(lVar13);
            iVar21 = local_88;
            iVar20 = local_b0;
            if (lVar15 == lVar11) {
              lVar15 = AActor::GetLevel(plVar18);
              plVar12 = local_1a8;
              param_1 = local_190;
              uVar10 = local_198;
              if (lVar15 == *(longlong *)(lVar11 + 0x30)) goto joined_r0x000142321d66;
              lVar15 = UVoipListenerSynthComponent::GetPrivateStaticClass();
              if ((*(int *)(plVar18[2] + 0x90) < *(int *)(lVar15 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar18[2] + 0x88) + (longlong)*(int *)(lVar15 + 0x90) * 8) !=
                  lVar15 + 0x88)) {
                bVar7 = false;
              }
              else {
                bVar7 = true;
              }
              iVar21 = local_88;
              iVar20 = local_b0;
              plVar12 = local_1a8;
              param_1 = local_190;
              uVar10 = local_198;
              if (!bVar7) goto joined_r0x000142321d66;
            }
          }
        }
LAB_142321f9a:
        iVar23 = iVar23 + 1;
        lVar22 = lVar22 + 8;
        if (iVar21 + iVar20 <= iVar23) break;
      } while( true );
    }
    local_98 = (longlong *)0x0;
    local_a4 = '\x01';
    plVar12 = local_1a8;
    param_1 = local_190;
  }
LAB_142321fc0:
  plVar18 = (longlong *)0x0;
  if (local_70 != '\0') {
    local_70 = '\0';
    UWorld::RemoveOnActorSpawnedHandler(local_c0,local_78);
    if (local_90 != 0) {
      FMemory::Free();
    }
    if (local_b8 != 0) {
      FMemory::Free();
    }
  }
  if (plVar12 == (longlong *)0x0) {
    (**(code **)(*param_1 + 0x300))(param_1);
  }
  else {
    if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
      plVar18 = (longlong *)param_1[4];
    }
    uVar16 = (**(code **)(*plVar12 + 0x5e0))(plVar12,local_148);
    lVar11 = FText::FromString(local_e0,uVar16);
    uVar16 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_108,L"Viewing from {0}",L"CheatManager",L"ViewPlayer");
    puVar17 = (undefined8 *)FTextFormat::FTextFormat(local_f0,uVar16);
    local_68[0] = 4;
    FText::FText(local_58,lVar11);
    local_178 = *puVar17;
    local_1a8 = (longlong *)local_68;
    uStack_1a0 = local_38;
    local_170 = puVar17[1];
    local_40 = '\x01';
    if (local_170 != 0) {
      LOCK();
      *(int *)(local_170 + 8) = *(int *)(local_170 + 8) + 1;
      UNLOCK();
    }
    local_168 = local_1a8;
    puStack_160 = uStack_1a0;
    uVar16 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_158,&local_168);
    uVar16 = FText::Format(local_120,&local_178,uVar16);
    FText::FText(local_138,uVar16);
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_118 + 1;
      lVar22 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar22 == 1) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar3 = (int *)((longlong)local_118 + 0xc);
        iVar23 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar23 == 1) {
          (**(code **)(*local_118 + 8))(local_118,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_158);
    if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_50 + 1;
      lVar22 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar22 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar3 = (int *)((longlong)local_50 + 0xc);
        iVar23 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar23 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    plVar4 = (longlong *)puVar17[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar22 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar22 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar3 = (int *)((longlong)plVar4 + 0xc);
        iVar23 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar23 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    plVar4 = *(longlong **)(lVar11 + 8);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar3 = (int *)((longlong)plVar4 + 0xc);
        iVar23 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar23 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    lVar11 = *plVar18;
    puVar17 = (undefined8 *)FName::FName(&local_190,L"Event",1);
    uVar16 = FText::ToString(local_138);
    (**(code **)(lVar11 + 0xc60))(plVar18,uVar16,*puVar17,0);
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar18 = local_130 + 1;
      lVar11 = *plVar18;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_130)(local_130);
        LOCK();
        piVar3 = (int *)((longlong)local_130 + 0xc);
        iVar23 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar23 == 1) {
          (**(code **)(*local_130 + 8))(local_130,1);
        }
      }
    }
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar18 = local_100 + 1;
      lVar11 = *plVar18;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar3 = (int *)((longlong)local_100 + 0xc);
        iVar23 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar23 == 1) {
          (**(code **)(*local_100 + 8))(local_100,1);
        }
      }
    }
    if (local_148[0] != 0) {
      FMemory::Free();
    }
    if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
      plVar18 = (longlong *)param_1[4];
    }
    else {
      plVar18 = (longlong *)0x0;
    }
    uStack_1a0 = (ulonglong *)CONCAT44(uStack_1a0._4_4_ & 0xfffffffe,0x40000000);
    local_1a8 = (longlong *)CONCAT35((int3)((ulonglong)local_1a8 >> 0x28),0x100000000);
    (**(code **)(*plVar18 + 0xe18))(0x40000000,plVar12,&local_1a8);
  }
  return;
}



// FUNCTION 142322340 FUN_142322340 body=1053 status=ok
// SIG undefined FUN_142322340(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142322340(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  undefined1 auStack_188 [32];
  undefined4 *local_168;
  undefined8 uStack_160;
  ulonglong local_158;
  longlong *local_150;
  int local_148;
  undefined8 local_140;
  longlong local_138;
  undefined1 local_130 [8];
  longlong local_128 [2];
  undefined4 *local_118;
  ulonglong *puStack_110;
  undefined1 local_108 [16];
  longlong local_f8 [2];
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [16];
  undefined1 local_90 [24];
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_188;
  plVar13 = (longlong *)0x0;
  local_158 = local_158 & 0xffffffff00000000;
  uVar6 = (**(code **)(*param_1 + 0x148))();
  FUN_1428cb820(uVar6,&local_150);
  plVar11 = plVar13;
  plVar7 = plVar13;
  for (; (-1 < local_148 && (local_148 < (int)local_150[1])); local_148 = local_148 + 1) {
    plVar7 = (longlong *)FWeakObjectPtr::Get(*local_150 + (longlong)local_148 * 8);
    if (plVar7[0x8c] == 0) {
LAB_142322416:
      bVar4 = false;
    }
    else {
      plVar11 = (longlong *)0x1;
      if (*(int *)(param_2 + 1) == 0) {
        puVar12 = &DAT_143f3eda8;
      }
      else {
        puVar12 = (undefined2 *)*param_2;
      }
      puVar8 = (undefined8 *)FUN_14270d290(plVar7[0x8c],local_128);
      if (*(int *)(puVar8 + 1) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*puVar8;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar12);
      if (iVar5 != 0) goto LAB_142322416;
      bVar4 = true;
    }
    if (plVar11 != (longlong *)0x0) {
      plVar11 = (longlong *)0x0;
      if (local_128[0] != 0) {
        FMemory::Free();
      }
    }
    if (bVar4) break;
  }
  if ((plVar7 != (longlong *)0x0) && (plVar7[0x91] != 0)) {
    plVar11 = plVar13;
    if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
      plVar11 = (longlong *)param_1[4];
    }
    uVar6 = FUN_14270d290(plVar7[0x8c],local_f8);
    lVar9 = FText::FromString(local_90,uVar6);
    local_158 = lVar9;
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_b8,L"Viewing from {0}",L"CheatManager",L"ViewPlayer");
    puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_a0,uVar6);
    local_78[0] = 4;
    FText::FText(local_68,lVar9);
    local_140 = *puVar8;
    local_168 = local_78;
    uStack_160 = local_48;
    local_138 = puVar8[1];
    local_50 = '\x01';
    if (local_138 != 0) {
      LOCK();
      *(int *)(local_138 + 8) = *(int *)(local_138 + 8) + 1;
      UNLOCK();
    }
    local_118 = local_168;
    puStack_110 = uStack_160;
    uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_108,&local_118);
    uVar6 = FText::Format(local_d0,&local_140,uVar6);
    FText::FText(local_e8,uVar6);
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_c8 + 1;
      lVar9 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_c8)(local_c8);
        LOCK();
        piVar1 = (int *)((longlong)local_c8 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_c8 + 8))(local_c8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_108);
    if (local_50 != '\0') {
      local_50 = '\0';
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_60 + 1;
        lVar9 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)local_60 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
    }
    plVar3 = (longlong *)puVar8[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar3 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    plVar3 = *(longlong **)(local_158 + 8);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar3 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    lVar9 = *plVar11;
    puVar8 = (undefined8 *)FName::FName(local_130,L"Event",1);
    uVar6 = FText::ToString(local_e8);
    (**(code **)(lVar9 + 0xc60))(plVar11,uVar6,*puVar8,0);
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_e0 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar1 = (int *)((longlong)local_e0 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_e0 + 8))(local_e0,1);
        }
      }
    }
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_b0 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)local_b0 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
    if (local_f8[0] != 0) {
      FMemory::Free();
    }
    if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
      plVar13 = (longlong *)param_1[4];
    }
    uStack_160 = (ulonglong *)CONCAT44(uStack_160._4_4_ & 0xfffffffe,0x40000000);
    local_168 = (undefined4 *)CONCAT35((int3)((ulonglong)local_168 >> 0x28),0x100000000);
    (**(code **)(*plVar13 + 0xe18))(plVar13,plVar7[0x91],&local_168);
  }
  return;
}



// FUNCTION 142322760 FUN_142322760 body=385 status=ok
// SIG undefined FUN_142322760(void)

void FUN_142322760(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  undefined1 local_res8 [8];
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  uint local_3c;
  undefined1 local_38 [8];
  longlong *local_30;
  
  plVar9 = (longlong *)0x0;
  plVar7 = plVar9;
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    plVar7 = *(longlong **)(param_1 + 0x20);
  }
  (**(code **)(*plVar7 + 0xea0))();
  uVar4 = *(uint *)(param_1 + 8) >> 4;
  plVar7 = plVar9;
  if ((uVar4 & 1) == 0) {
    plVar7 = *(longlong **)(param_1 + 0x20);
  }
  plVar8 = plVar9;
  if (plVar7[0x91] == 0) {
    if ((uVar4 & 1) == 0) {
      plVar8 = *(longlong **)(param_1 + 0x20);
    }
    local_3c = local_3c & 0xfffffffe;
    local_40 = 0x40000000;
    local_48 = 0;
    local_44 = 1;
    plVar7 = plVar9;
    if ((uVar4 & 1) == 0) {
      plVar7 = *(longlong **)(param_1 + 0x20);
    }
    puVar10 = &local_48;
  }
  else {
    if ((uVar4 & 1) == 0) {
      plVar8 = *(longlong **)(param_1 + 0x20);
    }
    local_4c = local_4c & 0xfffffffe;
    local_50 = 0x40000000;
    local_58 = 0;
    local_54 = 1;
    plVar7 = plVar9;
    if ((uVar4 & 1) == 0) {
      plVar7 = *(longlong **)(param_1 + 0x20);
    }
    plVar7 = (longlong *)plVar7[0x91];
    puVar10 = &local_58;
  }
  (**(code **)(*plVar8 + 0xe18))(plVar8,plVar7,puVar10);
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    plVar9 = *(longlong **)(param_1 + 0x20);
  }
  lVar3 = *plVar9;
  puVar5 = (undefined8 *)FName::FName(local_res8,L"Event",1);
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_38,L"Viewing from own camera",L"CheatManager",L"OwnCamera");
  uVar6 = FText::ToString(uVar6);
  (**(code **)(lVar3 + 0xc60))(plVar9,uVar6,*puVar5,0);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_30 + 1;
    lVar3 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return;
}



// FUNCTION 1423228f0 FUN_1423228f0 body=138 status=ok
// SIG undefined FUN_1423228f0(void)

void FUN_1423228f0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    lVar4 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar4 = 0;
  }
  plVar1 = *(longlong **)(lVar4 + 0x488);
  if (plVar1 != (longlong *)0x0) {
    lVar4 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_142912760(plVar1);
      cVar3 = (**(code **)(*plVar1 + 0x778))(plVar1);
      if (cVar3 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014232296d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x928))(plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1423229c0 getGlobalPose body=471 status=ok
// SIG undefined getGlobalPose(void)

undefined4 *
physx::PxShapeExt::getGlobalPose(undefined4 *param_1,longlong *param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  float *pfVar9;
  undefined4 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 local_c8 [16];
  undefined1 local_b8 [28];
  undefined1 local_9c [148];
  
  lVar8 = (**(code **)(*param_2 + 0x90))(param_2,local_b8);
  pfVar9 = (float *)(**(code **)(*param_3 + 0xa0))(param_3,local_9c);
  fVar15 = *(float *)(lVar8 + 0x10) + *(float *)(lVar8 + 0x10);
  fVar12 = *(float *)(lVar8 + 0x14) + *(float *)(lVar8 + 0x14);
  fVar1 = pfVar9[3];
  fVar14 = *(float *)(lVar8 + 0x18) + *(float *)(lVar8 + 0x18);
  fVar2 = pfVar9[1];
  fVar3 = *pfVar9;
  fVar4 = pfVar9[2];
  fVar13 = fVar1 * fVar1 - 0.5;
  fVar11 = fVar3 * fVar15 + fVar2 * fVar12 + fVar4 * fVar14;
  fVar5 = pfVar9[4];
  fVar6 = pfVar9[6];
  fVar7 = pfVar9[5];
  puVar10 = (undefined4 *)PxQuat::operator*(pfVar9,local_c8,lVar8);
  *param_1 = *puVar10;
  param_1[1] = puVar10[1];
  param_1[2] = puVar10[2];
  param_1[3] = puVar10[3];
  param_1[4] = (fVar2 * fVar14 - fVar4 * fVar12) * fVar1 + fVar13 * fVar15 + fVar3 * fVar11 + fVar5;
  param_1[5] = (fVar4 * fVar15 - fVar3 * fVar14) * fVar1 + fVar13 * fVar12 + fVar2 * fVar11 + fVar7;
  param_1[6] = (fVar3 * fVar12 - fVar2 * fVar15) * fVar1 + fVar13 * fVar14 + fVar4 * fVar11 + fVar6;
  return param_1;
}



// FUNCTION 142322ba0 getInverse body=586 status=ok
// SIG undefined getInverse(void)

float * physx::PxMat33::getInverse(float *param_1,float *param_2)

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
  float fVar10;
  
  fVar1 = param_1[4];
  fVar2 = param_1[8];
  fVar3 = param_1[7];
  fVar4 = param_1[6];
  fVar5 = param_1[3];
  fVar6 = *param_1;
  fVar7 = param_1[2];
  fVar8 = param_1[1];
  fVar10 = (fVar1 * fVar2 - param_1[5] * fVar3) * fVar6 +
           (fVar4 * param_1[5] - fVar5 * fVar2) * fVar8 + (fVar5 * fVar3 - fVar4 * fVar1) * fVar7;
  if (fVar10 == 0.0) {
    param_2[0] = 1.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    param_2[4] = 1.0;
    param_2[5] = 0.0;
    param_2[6] = 0.0;
    param_2[7] = 0.0;
    param_2[8] = 1.0;
  }
  else {
    fVar10 = 1.0 / fVar10;
    fVar9 = param_1[5];
    *param_2 = (fVar1 * fVar2 - fVar9 * fVar3) * fVar10;
    param_2[1] = -((fVar8 * fVar2 - fVar7 * fVar3) * fVar10);
    param_2[2] = (fVar8 * fVar9 - fVar7 * fVar1) * fVar10;
    param_2[3] = -((fVar2 * fVar5 - fVar9 * fVar4) * fVar10);
    param_2[4] = (fVar6 * fVar2 - fVar7 * fVar4) * fVar10;
    param_2[5] = -((fVar6 * fVar9 - fVar7 * fVar5) * fVar10);
    param_2[6] = (fVar3 * fVar5 - fVar1 * fVar4) * fVar10;
    param_2[7] = -((fVar6 * fVar3 - fVar8 * fVar4) * fVar10);
    param_2[8] = (fVar6 * fVar1 - fVar8 * fVar5) * fVar10;
  }
  return param_2;
}



// FUNCTION 142322df0 isFinite body=87 status=ok
// SIG undefined isFinite(void)

undefined4 physx::PxVec3::isFinite(float *param_1)

{
  uint uVar1;
  
  uVar1 = _fpclass((double)*param_1);
  if ((uVar1 & 0x207) == 0) {
    uVar1 = _fpclass((double)param_1[1]);
    if ((uVar1 & 0x207) == 0) {
      uVar1 = _fpclass((double)param_1[2]);
      if ((uVar1 & 0x207) == 0) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142322e80 FUN_142322e80 body=356 status=ok
// SIG undefined FUN_142322e80(void)

int FUN_142322e80(longlong param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  int local_28 [3];
  uint local_1c;
  undefined1 local_18 [16];
  
  if (param_3 == (longlong *)0x0) {
LAB_142322fcb:
    *(undefined4 *)(param_1 + 0x18) = 0;
    return 0;
  }
  (**(code **)(*param_3 + 0xb0))(param_3,local_28);
  if (((*(uint *)(param_2 + 0xc) & local_1c & 0xffffff & 3) == 0) ||
     ((*(char *)(param_1 + 0x1f) != '\0' && ((char)(local_1c & 0xffffff) < '\0'))))
  goto LAB_142322fcb;
  iVar4 = FUN_142306800(param_2);
  if (iVar4 == 1) {
    cVar1 = *(char *)(param_1 + 0x1d);
LAB_142322ef2:
    if (cVar1 != '\0') {
LAB_142322ef4:
      iVar7 = 0;
      goto LAB_142322ef6;
    }
  }
  else {
    if (iVar4 == 2) {
      cVar1 = *(char *)(param_1 + 0x1e);
      goto LAB_142322ef2;
    }
    iVar7 = iVar4;
    if (iVar4 == 0) goto LAB_142322ef6;
  }
  piVar2 = *(int **)(param_1 + 0x10);
  piVar6 = *(int **)(piVar2 + 4);
  if (*(int **)(piVar2 + 4) == (int *)0x0) {
    piVar6 = piVar2;
  }
  piVar2 = piVar6 + piVar2[6];
  for (; piVar6 != piVar2; piVar6 = piVar6 + 1) {
    if (*piVar6 == local_28[0]) {
      bVar3 = true;
      goto LAB_142322f5f;
    }
  }
  bVar3 = false;
LAB_142322f5f:
  iVar7 = 0;
  if (!bVar3) {
    iVar7 = iVar4;
  }
  if (0 < *(int *)(*(longlong *)(param_1 + 8) + 0x28)) {
    lVar5 = (**(code **)(*param_3 + 0xa0))(param_3,local_18);
    piVar2 = *(int **)(param_1 + 8);
    piVar6 = *(int **)(piVar2 + 8);
    if (*(int **)(piVar2 + 8) == (int *)0x0) {
      piVar6 = piVar2;
    }
    piVar2 = piVar6 + piVar2[10];
    if (piVar6 != piVar2) {
      do {
        if (*piVar6 == *(int *)(lVar5 + 8)) goto LAB_142322ef4;
        piVar6 = piVar6 + 1;
      } while (piVar6 != piVar2);
    }
  }
LAB_142322ef6:
  if ((*(char *)(param_1 + 0x1c) != '\0') && (iVar7 == 2)) {
    iVar7 = 1;
  }
  *(int *)(param_1 + 0x18) = iVar7;
  return iVar7;
}



// FUNCTION 142322ff0 processTouches body=134 status=ok
// SIG undefined processTouches(void)

undefined8
FDynamicHitBuffer<physx::PxOverlapHit>::processTouches(longlong param_1,void *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x8048);
  *(int *)(param_1 + 0x8048) = iVar1 + param_3;
  if (*(int *)(param_1 + 0x804c) < iVar1 + param_3) {
    TArray<TTypeCompatibleBytes<physx::PxOverlapHit>,TInlineAllocator<512,FDefaultAllocator>_>::
    ResizeGrow(param_1 + 0x4040,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x8040);
  if (*(longlong *)(param_1 + 0x8040) == 0) {
    lVar2 = param_1 + 0x4040;
  }
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(lVar2 + (longlong)iVar1 * 0x20),param_2,(longlong)param_3 << 5);
  return 1;
}



// FUNCTION 142323080 processTouches body=134 status=ok
// SIG undefined processTouches(void)

undefined8
FDynamicHitBuffer<physx::PxRaycastHit>::processTouches(longlong param_1,void *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x10068);
  *(int *)(param_1 + 0x10068) = iVar1 + param_3;
  if (*(int *)(param_1 + 0x1006c) < iVar1 + param_3) {
    TArray<TTypeCompatibleBytes<physx::PxRaycastHit>,TInlineAllocator<512,FDefaultAllocator>_>::
    ResizeGrow(param_1 + 0x8060,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x10060);
  if (*(longlong *)(param_1 + 0x10060) == 0) {
    lVar2 = param_1 + 0x8060;
  }
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(lVar2 + (longlong)iVar1 * 0x40),param_2,(longlong)param_3 << 6);
  return 1;
}



// FUNCTION 142323110 Emplace<TPairInitializer<USceneComponent_*_const_&,FTransform_&&>_> body=462 status=ok
// SIG undefined Emplace<TPairInitializer<USceneComponent_*_const_&,FTransform_&&>_>(void)

int * TSet<TTuple<USceneComponent_*,FTransform>,TDefaultMapHashableKeyFuncs<USceneComponent_*,FTransform,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<USceneComponent_*_const_&,FTransform_&&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  char cVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  int local_res8 [2];
  int local_38 [2];
  ulonglong *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareResourceDescription_*,ResourceVariation>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  puVar1 = (ulonglong *)param_3[1];
  bVar12 = false;
  puVar2 = (ulonglong *)*param_3;
  *param_2 = local_38[0];
  *local_30 = *puVar2;
  uVar5 = puVar1[1];
  local_30[2] = *puVar1;
  local_30[3] = uVar5;
  uVar3 = *(undefined4 *)((longlong)puVar1 + 0x14);
  uVar5 = puVar1[3];
  uVar4 = *(undefined4 *)((longlong)puVar1 + 0x1c);
  *(int *)(local_30 + 4) = (int)puVar1[2];
  *(undefined4 *)((longlong)local_30 + 0x24) = uVar3;
  *(int *)(local_30 + 5) = (int)uVar5;
  *(undefined4 *)((longlong)local_30 + 0x2c) = uVar4;
  uVar3 = *(undefined4 *)((longlong)puVar1 + 0x24);
  uVar5 = puVar1[5];
  uVar4 = *(undefined4 *)((longlong)puVar1 + 0x2c);
  *(int *)(local_30 + 6) = (int)puVar1[4];
  *(undefined4 *)((longlong)local_30 + 0x34) = uVar3;
  *(int *)(local_30 + 7) = (int)uVar5;
  *(undefined4 *)((longlong)local_30 + 0x3c) = uVar4;
  *(undefined4 *)(local_30 + 8) = 0xffffffff;
  iVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar10 != 1) {
    FindId(param_1,local_res8);
    bVar12 = local_res8[0] != -1;
    if (bVar12) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)local_res8[0] * 0x50 + *param_1),local_30,0x40);
      TSparseArray<TSetElement<FCachedLandscapeFoliage::FGrassComp>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = local_res8[0];
      goto LAB_1423232b6;
    }
  }
  cVar6 = ConditionalRehash(param_1,iVar10);
  if (cVar6 == '\0') {
    iVar10 = (int)(*local_30 >> 4);
    uVar9 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
    uVar11 = -(uVar9 + iVar10) ^ uVar9 >> 0xd;
    uVar8 = (iVar10 - uVar9) - uVar11 ^ uVar11 >> 0xc;
    uVar9 = (uVar9 - uVar8) - uVar11 ^ uVar8 << 0x10;
    uVar11 = (uVar11 - uVar9) - uVar8 ^ uVar9 >> 5;
    uVar8 = (uVar8 - uVar9) - uVar11 ^ uVar11 >> 3;
    uVar9 = (uVar9 - uVar8) - uVar11 ^ uVar8 << 10;
    uVar8 = ((uVar11 - uVar9) - uVar8 ^ uVar9 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x44) = uVar8;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 8) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_1423232b6:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 1423232e0 ExecuteAsyncTraceIfAvailable<FOverlapDatum> body=315 status=ok
// SIG undefined ExecuteAsyncTraceIfAvailable<FOverlapDatum>(void)

void `anonymous_namespace'::ExecuteAsyncTraceIfAvailable<FOverlapDatum>
               (longlong param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 local_28 [32];
  
  uVar6 = *(uint *)(param_1 + 0xc0) & 0x80000001;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
  }
  param_1 = (longlong)(int)uVar6 * 0x60 + param_1;
  uVar10 = *(int *)(param_1 + 0x24) >> 0x1f & 0x3f;
  uVar6 = *(int *)(param_1 + 0x24) + uVar10;
  iVar7 = (uVar6 & 0x3f) - uVar10;
  iVar9 = (int)uVar6 >> 6;
  if ((iVar7 == 0) && (0 < iVar9)) {
    iVar9 = iVar9 + -1;
    iVar7 = 0x40;
  }
  else {
    if (param_2 == '\0') {
      return;
    }
    if (iVar7 == 0) {
      return;
    }
  }
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar9 * 8);
  if ((DAT_146531c10 != 0) && (cVar5 = FUN_141636a40(), cVar5 != '\0')) {
    plVar8 = (longlong *)
             TGraphTask<`anonymous_namespace'::FAsyncTraceTask>::CreateTask(local_28,0,2);
    lVar11 = *plVar8;
    *(undefined8 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = uVar1;
    *(int *)(lVar11 + 0x20) = iVar7;
    lVar11 = *plVar8;
    lVar4 = plVar8[2];
    lVar2 = plVar8[1];
    lVar3 = *(longlong *)(lVar11 + 0x30);
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + 1;
      UNLOCK();
    }
    FUN_142352290(lVar11,lVar2,(int)lVar4,1);
    iVar7 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = iVar7 + 1;
    if (*(int *)(param_1 + 0x5c) < iVar7 + 1) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (param_1 + 0x30,iVar7);
    }
    lVar11 = *(longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      lVar11 = param_1 + 0x30;
    }
    *(longlong *)(lVar11 + (longlong)iVar7 * 8) = lVar3;
    return;
  }
  RunTraceTask(uVar1,iVar7);
  return;
}



// FUNCTION 142323420 ExecuteAsyncTraceIfAvailable<FTraceDatum> body=314 status=ok
// SIG undefined ExecuteAsyncTraceIfAvailable<FTraceDatum>(void)

void `anonymous_namespace'::ExecuteAsyncTraceIfAvailable<FTraceDatum>(longlong param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  undefined1 local_28 [32];
  
  uVar7 = *(uint *)(param_1 + 0xc0) & 0x80000001;
  if ((int)uVar7 < 0) {
    uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
  }
  plVar12 = (longlong *)((longlong)(int)uVar7 * 0x60 + param_1);
  uVar11 = (int)plVar12[4] >> 0x1f & 0x3f;
  uVar7 = (int)plVar12[4] + uVar11;
  iVar8 = (uVar7 & 0x3f) - uVar11;
  iVar10 = (int)uVar7 >> 6;
  if ((iVar8 == 0) && (0 < iVar10)) {
    iVar10 = iVar10 + -1;
    iVar8 = 0x40;
  }
  else {
    if (param_2 == '\0') {
      return;
    }
    if (iVar8 == 0) {
      return;
    }
  }
  uVar1 = *(undefined8 *)(*plVar12 + (longlong)iVar10 * 8);
  if ((DAT_146531c10 != 0) && (cVar6 = FUN_141636a40(), cVar6 != '\0')) {
    plVar9 = (longlong *)
             TGraphTask<`anonymous_namespace'::FAsyncTraceTask>::CreateTask(local_28,0,2);
    lVar2 = *plVar9;
    *(undefined8 *)(lVar2 + 0x10) = uVar1;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    *(int *)(lVar2 + 0x20) = iVar8;
    lVar2 = *plVar9;
    lVar5 = plVar9[2];
    lVar3 = plVar9[1];
    lVar4 = *(longlong *)(lVar2 + 0x30);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
      UNLOCK();
    }
    FUN_142352290(lVar2,lVar3,(int)lVar5,1);
    iVar8 = (int)plVar12[0xb];
    *(int *)(plVar12 + 0xb) = iVar8 + 1;
    if (*(int *)((longlong)plVar12 + 0x5c) < iVar8 + 1) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (plVar12 + 6,iVar8);
    }
    plVar9 = (longlong *)plVar12[10];
    if ((longlong *)plVar12[10] == (longlong *)0x0) {
      plVar9 = plVar12 + 6;
    }
    plVar9[iVar8] = lVar4;
    return;
  }
  FUN_14234d2e0(uVar1,iVar8);
  return;
}



// FUNCTION 142323560 FindObject<UProperty> body=63 status=ok
// SIG undefined FindObject<UProperty>(void)

void FindObject<UProperty>(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = UProperty::GetPrivateStaticClass();
  FUN_141799410(uVar1,param_1,param_2,param_3);
  return;
}



// FUNCTION 1423235a0 FUN_1423235a0 body=51 status=ok
// SIG undefined FUN_1423235a0(void)

longlong FUN_1423235a0(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_14293b120();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  return lVar2;
}



// FUNCTION 1423235e0 FUN_1423235e0 body=1365 status=ok
// SIG undefined FUN_1423235e0(void)

void FUN_1423235e0(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  undefined8 *puVar28;
  int iVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  
  iVar21 = (param_2 + -2) / 2;
  if (-1 < iVar21) {
    iVar27 = iVar21 * 2 + 1;
    iVar26 = iVar27;
    iVar29 = iVar21;
joined_r0x000142323629:
    do {
      if (iVar27 < param_2) {
        iVar24 = iVar21 * 2 + 1;
        iVar27 = iVar21 * 2 + 2;
        iVar25 = iVar24;
        if (iVar27 < param_2) {
          lVar22 = (longlong)iVar27;
          pfVar1 = (float *)*param_4;
          fVar36 = pfVar1[1] - *(float *)((longlong)param_1 + lVar22 * 0x90 + 0x24);
          fVar33 = *pfVar1 - *(float *)(param_1 + lVar22 * 0x12 + 4);
          lVar23 = (longlong)iVar24;
          fVar32 = pfVar1[2] - *(float *)(param_1 + lVar22 * 0x12 + 5);
          fVar37 = pfVar1[1] - *(float *)((longlong)param_1 + lVar23 * 0x90 + 0x24);
          fVar35 = *pfVar1 - *(float *)(param_1 + lVar23 * 0x12 + 4);
          fVar34 = pfVar1[2] - *(float *)(param_1 + lVar23 * 0x12 + 5);
          iVar25 = iVar27;
          if (fVar36 * fVar36 + fVar33 * fVar33 + fVar32 * fVar32 <
              fVar37 * fVar37 + fVar35 * fVar35 + fVar34 * fVar34) {
            iVar25 = iVar24;
          }
        }
        pfVar1 = (float *)*param_4;
        puVar30 = param_1 + (longlong)iVar21 * 0x12;
        fVar35 = pfVar1[1] - *(float *)((longlong)puVar30 + 0x24);
        fVar33 = *pfVar1 - *(float *)(puVar30 + 4);
        fVar32 = pfVar1[2] - *(float *)(puVar30 + 5);
        puVar28 = param_1 + (longlong)iVar25 * 0x12;
        fVar37 = pfVar1[1] - *(float *)((longlong)puVar28 + 0x24);
        fVar36 = *pfVar1 - *(float *)(puVar28 + 4);
        fVar34 = pfVar1[2] - *(float *)(puVar28 + 5);
        if (fVar35 * fVar35 + fVar33 * fVar33 + fVar32 * fVar32 <
            fVar37 * fVar37 + fVar36 * fVar36 + fVar34 * fVar34) {
          if (puVar30 != puVar28) {
            uVar2 = puVar28[1];
            uVar3 = *puVar30;
            uVar4 = puVar30[1];
            uVar5 = puVar30[2];
            uVar6 = puVar30[3];
            uVar7 = puVar30[4];
            uVar8 = puVar30[5];
            uVar9 = puVar30[6];
            uVar10 = puVar30[7];
            uVar11 = puVar30[8];
            uVar12 = puVar30[9];
            uVar13 = puVar30[10];
            uVar14 = puVar30[0xb];
            uVar15 = puVar30[0xc];
            uVar16 = puVar30[0xd];
            uVar17 = puVar30[0xe];
            uVar18 = puVar30[0xf];
            uVar19 = puVar30[0x10];
            uVar20 = puVar30[0x11];
            *puVar30 = *puVar28;
            puVar30[1] = uVar2;
            uVar2 = puVar28[3];
            puVar30[2] = puVar28[2];
            puVar30[3] = uVar2;
            uVar2 = puVar28[5];
            puVar30[4] = puVar28[4];
            puVar30[5] = uVar2;
            uVar2 = puVar28[7];
            puVar30[6] = puVar28[6];
            puVar30[7] = uVar2;
            uVar2 = puVar28[9];
            puVar30[8] = puVar28[8];
            puVar30[9] = uVar2;
            uVar2 = puVar28[0xb];
            puVar30[10] = puVar28[10];
            puVar30[0xb] = uVar2;
            uVar2 = puVar28[0xd];
            puVar30[0xc] = puVar28[0xc];
            puVar30[0xd] = uVar2;
            uVar2 = puVar28[0xf];
            puVar30[0xe] = puVar28[0xe];
            puVar30[0xf] = uVar2;
            uVar2 = puVar28[0x11];
            puVar30[0x10] = puVar28[0x10];
            puVar30[0x11] = uVar2;
            *puVar28 = uVar3;
            puVar28[1] = uVar4;
            puVar28[2] = uVar5;
            puVar28[3] = uVar6;
            puVar28[4] = uVar7;
            puVar28[5] = uVar8;
            puVar28[6] = uVar9;
            puVar28[7] = uVar10;
            puVar28[8] = uVar11;
            puVar28[9] = uVar12;
            puVar28[10] = uVar13;
            puVar28[0xb] = uVar14;
            puVar28[0xc] = uVar15;
            puVar28[0xd] = uVar16;
            puVar28[0xe] = uVar17;
            puVar28[0xf] = uVar18;
            puVar28[0x10] = uVar19;
            puVar28[0x11] = uVar20;
          }
          iVar27 = iVar25 * 2 + 1;
          iVar21 = iVar25;
          goto joined_r0x000142323629;
        }
      }
      iVar27 = iVar26 + -2;
      iVar21 = iVar29 + -1;
      iVar26 = iVar27;
      iVar29 = iVar21;
    } while (-1 < iVar21);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar28 = param_1 + (longlong)param_2 * 0x12;
    do {
      if (param_1 != puVar28) {
        uVar2 = puVar28[1];
        uVar3 = *param_1;
        uVar4 = param_1[1];
        uVar5 = param_1[2];
        uVar6 = param_1[3];
        uVar7 = param_1[4];
        uVar8 = param_1[5];
        uVar9 = param_1[6];
        uVar10 = param_1[7];
        uVar11 = param_1[8];
        uVar12 = param_1[9];
        uVar13 = param_1[10];
        uVar14 = param_1[0xb];
        uVar15 = param_1[0xc];
        uVar16 = param_1[0xd];
        uVar17 = param_1[0xe];
        uVar18 = param_1[0xf];
        uVar19 = param_1[0x10];
        uVar20 = param_1[0x11];
        *param_1 = *puVar28;
        param_1[1] = uVar2;
        uVar2 = puVar28[3];
        param_1[2] = puVar28[2];
        param_1[3] = uVar2;
        uVar2 = puVar28[5];
        param_1[4] = puVar28[4];
        param_1[5] = uVar2;
        uVar2 = puVar28[7];
        param_1[6] = puVar28[6];
        param_1[7] = uVar2;
        uVar2 = puVar28[9];
        param_1[8] = puVar28[8];
        param_1[9] = uVar2;
        uVar2 = puVar28[0xb];
        param_1[10] = puVar28[10];
        param_1[0xb] = uVar2;
        uVar2 = puVar28[0xd];
        param_1[0xc] = puVar28[0xc];
        param_1[0xd] = uVar2;
        uVar2 = puVar28[0xf];
        param_1[0xe] = puVar28[0xe];
        param_1[0xf] = uVar2;
        uVar2 = puVar28[0x11];
        param_1[0x10] = puVar28[0x10];
        param_1[0x11] = uVar2;
        *puVar28 = uVar3;
        puVar28[1] = uVar4;
        puVar28[2] = uVar5;
        puVar28[3] = uVar6;
        puVar28[4] = uVar7;
        puVar28[5] = uVar8;
        puVar28[6] = uVar9;
        puVar28[7] = uVar10;
        puVar28[8] = uVar11;
        puVar28[9] = uVar12;
        puVar28[10] = uVar13;
        puVar28[0xb] = uVar14;
        puVar28[0xc] = uVar15;
        puVar28[0xd] = uVar16;
        puVar28[0xe] = uVar17;
        puVar28[0xf] = uVar18;
        puVar28[0x10] = uVar19;
        puVar28[0x11] = uVar20;
      }
      iVar21 = 0;
      if (1 < param_2) {
        do {
          iVar27 = iVar21 * 2 + 1;
          iVar29 = iVar21 * 2 + 2;
          iVar26 = iVar27;
          if (iVar29 < param_2) {
            lVar22 = (longlong)iVar29;
            pfVar1 = (float *)*param_4;
            fVar36 = pfVar1[1] - *(float *)((longlong)param_1 + lVar22 * 0x90 + 0x24);
            fVar33 = *pfVar1 - *(float *)(param_1 + lVar22 * 0x12 + 4);
            lVar23 = (longlong)iVar27;
            fVar32 = pfVar1[2] - *(float *)(param_1 + lVar22 * 0x12 + 5);
            fVar37 = pfVar1[1] - *(float *)((longlong)param_1 + lVar23 * 0x90 + 0x24);
            fVar35 = *pfVar1 - *(float *)(param_1 + lVar23 * 0x12 + 4);
            fVar34 = pfVar1[2] - *(float *)(param_1 + lVar23 * 0x12 + 5);
            iVar26 = iVar29;
            if (fVar36 * fVar36 + fVar33 * fVar33 + fVar32 * fVar32 <
                fVar37 * fVar37 + fVar35 * fVar35 + fVar34 * fVar34) {
              iVar26 = iVar27;
            }
          }
          pfVar1 = (float *)*param_4;
          puVar31 = param_1 + (longlong)iVar21 * 0x12;
          fVar35 = pfVar1[1] - *(float *)((longlong)puVar31 + 0x24);
          fVar33 = *pfVar1 - *(float *)(puVar31 + 4);
          fVar32 = pfVar1[2] - *(float *)(puVar31 + 5);
          puVar30 = param_1 + (longlong)iVar26 * 0x12;
          fVar37 = pfVar1[1] - *(float *)((longlong)puVar30 + 0x24);
          fVar36 = *pfVar1 - *(float *)(puVar30 + 4);
          fVar34 = pfVar1[2] - *(float *)(puVar30 + 5);
          if (fVar37 * fVar37 + fVar36 * fVar36 + fVar34 * fVar34 <=
              fVar35 * fVar35 + fVar33 * fVar33 + fVar32 * fVar32) break;
          if (puVar31 != puVar30) {
            uVar2 = puVar30[1];
            uVar3 = *puVar31;
            uVar4 = puVar31[1];
            uVar5 = puVar31[2];
            uVar6 = puVar31[3];
            uVar7 = puVar31[4];
            uVar8 = puVar31[5];
            uVar9 = puVar31[6];
            uVar10 = puVar31[7];
            uVar11 = puVar31[8];
            uVar12 = puVar31[9];
            uVar13 = puVar31[10];
            uVar14 = puVar31[0xb];
            uVar15 = puVar31[0xc];
            uVar16 = puVar31[0xd];
            uVar17 = puVar31[0xe];
            uVar18 = puVar31[0xf];
            uVar19 = puVar31[0x10];
            uVar20 = puVar31[0x11];
            *puVar31 = *puVar30;
            puVar31[1] = uVar2;
            uVar2 = puVar30[3];
            puVar31[2] = puVar30[2];
            puVar31[3] = uVar2;
            uVar2 = puVar30[5];
            puVar31[4] = puVar30[4];
            puVar31[5] = uVar2;
            uVar2 = puVar30[7];
            puVar31[6] = puVar30[6];
            puVar31[7] = uVar2;
            uVar2 = puVar30[9];
            puVar31[8] = puVar30[8];
            puVar31[9] = uVar2;
            uVar2 = puVar30[0xb];
            puVar31[10] = puVar30[10];
            puVar31[0xb] = uVar2;
            uVar2 = puVar30[0xd];
            puVar31[0xc] = puVar30[0xc];
            puVar31[0xd] = uVar2;
            uVar2 = puVar30[0xf];
            puVar31[0xe] = puVar30[0xe];
            puVar31[0xf] = uVar2;
            uVar2 = puVar30[0x11];
            puVar31[0x10] = puVar30[0x10];
            puVar31[0x11] = uVar2;
            *puVar30 = uVar3;
            puVar30[1] = uVar4;
            puVar30[2] = uVar5;
            puVar30[3] = uVar6;
            puVar30[4] = uVar7;
            puVar30[5] = uVar8;
            puVar30[6] = uVar9;
            puVar30[7] = uVar10;
            puVar30[8] = uVar11;
            puVar30[9] = uVar12;
            puVar30[10] = uVar13;
            puVar30[0xb] = uVar14;
            puVar30[0xc] = uVar15;
            puVar30[0xd] = uVar16;
            puVar30[0xe] = uVar17;
            puVar30[0xf] = uVar18;
            puVar30[0x10] = uVar19;
            puVar30[0x11] = uVar20;
          }
          iVar21 = iVar26;
        } while (iVar26 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar28 = puVar28 + -0x12;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142323b40 FUN_142323b40 body=1838 status=ok
// SIG undefined FUN_142323b40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142323b40(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float *pfVar28;
  undefined8 *puVar29;
  longlong lVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  undefined1 (*pauVar36) [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auStack_3c8 [48];
  undefined8 local_398;
  longlong local_388;
  longlong lStack_380;
  undefined4 local_378;
  undefined1 local_370 [744];
  ulonglong local_88;
  
  if (1 < param_2) {
    local_88 = DAT_1468387a8 ^ (ulonglong)auStack_3c8;
    lStack_380 = param_2 * 0x90 + -0x90 + param_1;
    fVar37 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar37 = fVar37 + 1.8446744e+19;
    }
    local_388 = param_1;
    fVar37 = _guard_xfg_dispatch_icall_nop(fVar37);
    local_378 = (undefined4)(longlong)(fVar37 + fVar37);
    _guard_xfg_dispatch_icall_nop(local_370,0,0x2e8);
    pauVar36 = (undefined1 (*) [16])&local_388;
    do {
      uVar1 = *(undefined8 *)pauVar36[1];
      local_398._0_4_ = (int)uVar1;
      puVar29 = SUB168(*pauVar36,0);
      puVar32 = SUB168(*pauVar36,8);
      lVar30 = ((longlong)puVar32 - (longlong)puVar29) / 0x90 + 1;
      puVar35 = puVar29;
      if ((int)local_398 != 0) {
LAB_142323c50:
        if (8 < lVar30) {
          if (lVar30 < 0) {
            lVar30 = lVar30 + 1;
          }
          puVar29 = puVar35 + (lVar30 >> 1) * 0x12;
          if (puVar29 != puVar35) {
            uVar10 = puVar35[1];
            uVar3 = *(undefined4 *)puVar29;
            uVar4 = *(undefined4 *)((longlong)puVar29 + 4);
            uVar5 = *(undefined4 *)(puVar29 + 1);
            uVar6 = *(undefined4 *)((longlong)puVar29 + 0xc);
            uVar11 = puVar29[2];
            uVar12 = puVar29[3];
            uVar13 = puVar29[4];
            uVar14 = puVar29[5];
            uVar15 = puVar29[6];
            uVar16 = puVar29[7];
            uVar17 = puVar29[8];
            uVar18 = puVar29[9];
            uVar19 = puVar29[10];
            uVar20 = puVar29[0xb];
            uVar21 = puVar29[0xc];
            uVar22 = puVar29[0xd];
            uVar23 = puVar29[0xe];
            uVar24 = puVar29[0xf];
            uVar25 = puVar29[0x10];
            uVar26 = puVar29[0x11];
            *puVar29 = *puVar35;
            puVar29[1] = uVar10;
            uVar10 = puVar35[3];
            puVar29[2] = puVar35[2];
            puVar29[3] = uVar10;
            uVar10 = puVar35[5];
            puVar29[4] = puVar35[4];
            puVar29[5] = uVar10;
            uVar10 = puVar35[7];
            puVar29[6] = puVar35[6];
            puVar29[7] = uVar10;
            uVar10 = puVar35[9];
            puVar29[8] = puVar35[8];
            puVar29[9] = uVar10;
            uVar10 = puVar35[0xb];
            puVar29[10] = puVar35[10];
            puVar29[0xb] = uVar10;
            uVar10 = puVar35[0xd];
            puVar29[0xc] = puVar35[0xc];
            puVar29[0xd] = uVar10;
            *(undefined1 (*) [16])(puVar29 + 0xe) = *(undefined1 (*) [16])(puVar35 + 0xe);
            uVar7 = *(undefined4 *)((longlong)puVar35 + 0x84);
            uVar8 = *(undefined4 *)(puVar35 + 0x11);
            uVar9 = *(undefined4 *)((longlong)puVar35 + 0x8c);
            *(undefined4 *)(puVar29 + 0x10) = *(undefined4 *)(puVar35 + 0x10);
            *(undefined4 *)((longlong)puVar29 + 0x84) = uVar7;
            *(undefined4 *)(puVar29 + 0x11) = uVar8;
            *(undefined4 *)((longlong)puVar29 + 0x8c) = uVar9;
            *(undefined4 *)puVar35 = uVar3;
            *(undefined4 *)((longlong)puVar35 + 4) = uVar4;
            *(undefined4 *)(puVar35 + 1) = uVar5;
            *(undefined4 *)((longlong)puVar35 + 0xc) = uVar6;
            puVar35[2] = uVar11;
            puVar35[3] = uVar12;
            puVar35[4] = uVar13;
            puVar35[5] = uVar14;
            puVar35[6] = uVar15;
            puVar35[7] = uVar16;
            puVar35[8] = uVar17;
            puVar35[9] = uVar18;
            puVar35[10] = uVar19;
            puVar35[0xb] = uVar20;
            puVar35[0xc] = uVar21;
            puVar35[0xd] = uVar22;
            puVar35[0xe] = uVar23;
            puVar35[0xf] = uVar24;
            puVar35[0x10] = uVar25;
            puVar35[0x11] = uVar26;
          }
          puVar31 = puVar32 + 0x12;
          puVar29 = puVar35;
LAB_142323d30:
          puVar33 = puVar29;
          puVar29 = puVar33 + 0x12;
          if (puVar29 <= puVar32) goto code_r0x000142323d3c;
          goto LAB_142323db0;
        }
        if (puVar35 < puVar32) {
          do {
            puVar29 = puVar35;
            if (puVar35 + 0x12 <= puVar32) {
              pfVar2 = (float *)*param_4;
              pfVar28 = (float *)(puVar35 + 0x17);
              puVar31 = puVar35 + 0x12;
              do {
                fVar42 = pfVar2[1] - *(float *)((longlong)puVar29 + 0x24);
                fVar39 = *pfVar2 - *(float *)(puVar29 + 4);
                fVar41 = pfVar2[1] - pfVar28[-1];
                fVar40 = *pfVar2 - pfVar28[-2];
                fVar37 = pfVar2[2] - *(float *)(puVar29 + 5);
                fVar38 = pfVar2[2] - *pfVar28;
                if (fVar42 * fVar42 + fVar39 * fVar39 + fVar37 * fVar37 <
                    fVar41 * fVar41 + fVar40 * fVar40 + fVar38 * fVar38) {
                  puVar29 = puVar31;
                }
                puVar31 = puVar31 + 0x12;
                pfVar28 = pfVar28 + 0x24;
              } while (puVar31 <= puVar32);
            }
            if (puVar29 != puVar32) {
              uVar1 = puVar32[1];
              uVar10 = *puVar29;
              uVar11 = puVar29[1];
              uVar12 = puVar29[2];
              uVar13 = puVar29[3];
              uVar14 = puVar29[4];
              uVar15 = puVar29[5];
              uVar16 = puVar29[6];
              uVar17 = puVar29[7];
              uVar18 = puVar29[8];
              uVar19 = puVar29[9];
              uVar20 = puVar29[10];
              uVar21 = puVar29[0xb];
              uVar22 = puVar29[0xc];
              uVar23 = puVar29[0xd];
              uVar24 = puVar29[0xe];
              uVar25 = puVar29[0xf];
              uVar26 = puVar29[0x10];
              uVar27 = puVar29[0x11];
              *puVar29 = *puVar32;
              puVar29[1] = uVar1;
              uVar1 = puVar32[3];
              puVar29[2] = puVar32[2];
              puVar29[3] = uVar1;
              uVar1 = puVar32[5];
              puVar29[4] = puVar32[4];
              puVar29[5] = uVar1;
              uVar1 = puVar32[7];
              puVar29[6] = puVar32[6];
              puVar29[7] = uVar1;
              uVar1 = puVar32[9];
              puVar29[8] = puVar32[8];
              puVar29[9] = uVar1;
              uVar1 = puVar32[0xb];
              puVar29[10] = puVar32[10];
              puVar29[0xb] = uVar1;
              uVar1 = puVar32[0xd];
              puVar29[0xc] = puVar32[0xc];
              puVar29[0xd] = uVar1;
              *(undefined1 (*) [16])(puVar29 + 0xe) = *(undefined1 (*) [16])(puVar32 + 0xe);
              uVar1 = puVar32[0x11];
              puVar29[0x10] = puVar32[0x10];
              puVar29[0x11] = uVar1;
              *puVar32 = uVar10;
              puVar32[1] = uVar11;
              puVar32[2] = uVar12;
              puVar32[3] = uVar13;
              puVar32[4] = uVar14;
              puVar32[5] = uVar15;
              puVar32[6] = uVar16;
              puVar32[7] = uVar17;
              puVar32[8] = uVar18;
              puVar32[9] = uVar19;
              puVar32[10] = uVar20;
              puVar32[0xb] = uVar21;
              puVar32[0xc] = uVar22;
              puVar32[0xd] = uVar23;
              puVar32[0xe] = uVar24;
              puVar32[0xf] = uVar25;
              puVar32[0x10] = uVar26;
              puVar32[0x11] = uVar27;
            }
            puVar32 = puVar32 + -0x12;
          } while (puVar35 < puVar32);
        }
        goto LAB_142324088;
      }
LAB_142324079:
      local_398 = uVar1;
      FUN_1423235e0(puVar29,lVar30,param_3,param_4);
LAB_142324088:
      pauVar36 = (undefined1 (*) [16])(pauVar36[-2] + 8);
    } while ((undefined1 (*) [16])&local_388 <= pauVar36);
  }
  return;
code_r0x000142323d3c:
  pfVar28 = (float *)*param_4;
  fVar40 = pfVar28[1] - *(float *)((longlong)puVar35 + 0x24);
  fVar42 = pfVar28[1] - *(float *)((longlong)puVar33 + 0xb4);
  fVar38 = *pfVar28 - *(float *)(puVar35 + 4);
  fVar41 = *pfVar28 - *(float *)(puVar33 + 0x16);
  fVar37 = pfVar28[2] - *(float *)(puVar35 + 5);
  fVar39 = pfVar28[2] - *(float *)(puVar33 + 0x17);
  if (fVar42 * fVar42 + fVar41 * fVar41 + fVar39 * fVar39 <=
      fVar40 * fVar40 + fVar38 * fVar38 + fVar37 * fVar37) goto LAB_142323d30;
LAB_142323db0:
  do {
    puVar34 = puVar31;
    puVar31 = puVar34 + -0x12;
    if (puVar31 <= puVar35) break;
    pfVar28 = (float *)*param_4;
    fVar40 = pfVar28[1] - *(float *)((longlong)puVar34 + -0x6c);
    fVar42 = pfVar28[1] - *(float *)((longlong)puVar35 + 0x24);
    fVar38 = *pfVar28 - *(float *)(puVar34 + -0xe);
    fVar41 = *pfVar28 - *(float *)(puVar35 + 4);
    fVar37 = pfVar28[2] - *(float *)(puVar34 + -0xd);
    fVar39 = pfVar28[2] - *(float *)(puVar35 + 5);
  } while (fVar42 * fVar42 + fVar41 * fVar41 + fVar39 * fVar39 <=
           fVar40 * fVar40 + fVar38 * fVar38 + fVar37 * fVar37);
  if (puVar29 <= puVar31) {
    if (puVar29 != puVar31) {
      uVar10 = puVar34[-0x11];
      uVar3 = *(undefined4 *)puVar29;
      uVar4 = *(undefined4 *)((longlong)puVar33 + 0x94);
      uVar5 = *(undefined4 *)(puVar33 + 0x13);
      uVar6 = *(undefined4 *)((longlong)puVar33 + 0x9c);
      uVar11 = puVar33[0x14];
      uVar12 = puVar33[0x15];
      uVar13 = puVar33[0x16];
      uVar14 = puVar33[0x17];
      uVar15 = puVar33[0x18];
      uVar16 = puVar33[0x19];
      uVar17 = puVar33[0x1a];
      uVar18 = puVar33[0x1b];
      uVar19 = puVar33[0x1c];
      uVar20 = puVar33[0x1d];
      uVar21 = puVar33[0x1e];
      uVar22 = puVar33[0x1f];
      uVar23 = puVar33[0x20];
      uVar24 = puVar33[0x21];
      uVar25 = puVar33[0x22];
      uVar26 = puVar33[0x23];
      *puVar29 = *puVar31;
      puVar33[0x13] = uVar10;
      uVar10 = puVar34[-0xf];
      puVar33[0x14] = puVar34[-0x10];
      puVar33[0x15] = uVar10;
      uVar10 = puVar34[-0xd];
      puVar33[0x16] = puVar34[-0xe];
      puVar33[0x17] = uVar10;
      uVar10 = puVar34[-0xb];
      puVar33[0x18] = puVar34[-0xc];
      puVar33[0x19] = uVar10;
      uVar10 = puVar34[-9];
      puVar33[0x1a] = puVar34[-10];
      puVar33[0x1b] = uVar10;
      uVar10 = puVar34[-7];
      puVar33[0x1c] = puVar34[-8];
      puVar33[0x1d] = uVar10;
      uVar10 = puVar34[-5];
      puVar33[0x1e] = puVar34[-6];
      puVar33[0x1f] = uVar10;
      *(undefined1 (*) [16])(puVar33 + 0x20) = *(undefined1 (*) [16])(puVar34 + -4);
      uVar7 = *(undefined4 *)((longlong)puVar34 + -0xc);
      uVar8 = *(undefined4 *)(puVar34 + -1);
      uVar9 = *(undefined4 *)((longlong)puVar34 + -4);
      *(undefined4 *)(puVar33 + 0x22) = *(undefined4 *)(puVar34 + -2);
      *(undefined4 *)((longlong)puVar33 + 0x114) = uVar7;
      *(undefined4 *)(puVar33 + 0x23) = uVar8;
      *(undefined4 *)((longlong)puVar33 + 0x11c) = uVar9;
      *(undefined4 *)puVar31 = uVar3;
      *(undefined4 *)((longlong)puVar34 + -0x8c) = uVar4;
      *(undefined4 *)(puVar34 + -0x11) = uVar5;
      *(undefined4 *)((longlong)puVar34 + -0x84) = uVar6;
      puVar34[-0x10] = uVar11;
      puVar34[-0xf] = uVar12;
      puVar34[-0xe] = uVar13;
      puVar34[-0xd] = uVar14;
      puVar34[-0xc] = uVar15;
      puVar34[-0xb] = uVar16;
      puVar34[-10] = uVar17;
      puVar34[-9] = uVar18;
      puVar34[-8] = uVar19;
      puVar34[-7] = uVar20;
      puVar34[-6] = uVar21;
      puVar34[-5] = uVar22;
      puVar34[-4] = uVar23;
      puVar34[-3] = uVar24;
      puVar34[-2] = uVar25;
      puVar34[-1] = uVar26;
    }
    goto LAB_142323d30;
  }
  if (puVar35 != puVar31) {
    uVar10 = puVar34[-0x11];
    uVar3 = *(undefined4 *)puVar35;
    uVar4 = *(undefined4 *)((longlong)puVar35 + 4);
    uVar5 = *(undefined4 *)(puVar35 + 1);
    uVar6 = *(undefined4 *)((longlong)puVar35 + 0xc);
    uVar11 = puVar35[2];
    uVar12 = puVar35[3];
    uVar13 = puVar35[4];
    uVar14 = puVar35[5];
    uVar15 = puVar35[6];
    uVar16 = puVar35[7];
    uVar17 = puVar35[8];
    uVar18 = puVar35[9];
    uVar19 = puVar35[10];
    uVar20 = puVar35[0xb];
    uVar21 = puVar35[0xc];
    uVar22 = puVar35[0xd];
    uVar23 = puVar35[0xe];
    uVar24 = puVar35[0xf];
    uVar25 = puVar35[0x10];
    uVar26 = puVar35[0x11];
    *puVar35 = *puVar31;
    puVar35[1] = uVar10;
    uVar10 = puVar34[-0xf];
    puVar35[2] = puVar34[-0x10];
    puVar35[3] = uVar10;
    uVar10 = puVar34[-0xd];
    puVar35[4] = puVar34[-0xe];
    puVar35[5] = uVar10;
    uVar10 = puVar34[-0xb];
    puVar35[6] = puVar34[-0xc];
    puVar35[7] = uVar10;
    uVar10 = puVar34[-9];
    puVar35[8] = puVar34[-10];
    puVar35[9] = uVar10;
    uVar10 = puVar34[-7];
    puVar35[10] = puVar34[-8];
    puVar35[0xb] = uVar10;
    uVar10 = puVar34[-5];
    puVar35[0xc] = puVar34[-6];
    puVar35[0xd] = uVar10;
    *(undefined1 (*) [16])(puVar35 + 0xe) = *(undefined1 (*) [16])(puVar34 + -4);
    uVar7 = *(undefined4 *)((longlong)puVar34 + -0xc);
    uVar8 = *(undefined4 *)(puVar34 + -1);
    uVar9 = *(undefined4 *)((longlong)puVar34 + -4);
    *(undefined4 *)(puVar35 + 0x10) = *(undefined4 *)(puVar34 + -2);
    *(undefined4 *)((longlong)puVar35 + 0x84) = uVar7;
    *(undefined4 *)(puVar35 + 0x11) = uVar8;
    *(undefined4 *)((longlong)puVar35 + 0x8c) = uVar9;
    *(undefined4 *)puVar31 = uVar3;
    *(undefined4 *)((longlong)puVar34 + -0x8c) = uVar4;
    *(undefined4 *)(puVar34 + -0x11) = uVar5;
    *(undefined4 *)((longlong)puVar34 + -0x84) = uVar6;
    puVar34[-0x10] = uVar11;
    puVar34[-0xf] = uVar12;
    puVar34[-0xe] = uVar13;
    puVar34[-0xd] = uVar14;
    puVar34[-0xc] = uVar15;
    puVar34[-0xb] = uVar16;
    puVar34[-10] = uVar17;
    puVar34[-9] = uVar18;
    puVar34[-8] = uVar19;
    puVar34[-7] = uVar20;
    puVar34[-6] = uVar21;
    puVar34[-5] = uVar22;
    puVar34[-4] = uVar23;
    puVar34[-3] = uVar24;
    puVar34[-2] = uVar25;
    puVar34[-1] = uVar26;
  }
  local_398._0_4_ = (int)local_398 + -1;
  lVar30 = (longlong)puVar31 + (-0x90 - (longlong)puVar35);
  lVar30 = lVar30 / 0x12 + (lVar30 >> 0x3f);
  if ((lVar30 >> 3) - (lVar30 >> 0x3f) < ((longlong)puVar32 - (longlong)puVar29) / 0x90) {
    if (puVar29 < puVar32) {
      *(undefined8 **)*pauVar36 = puVar29;
      *(undefined8 **)(*pauVar36 + 8) = puVar32;
      *(int *)pauVar36[1] = (int)local_398;
      pauVar36 = (undefined1 (*) [16])(pauVar36[1] + 8);
    }
    if (puVar31 <= puVar35 + 0x12) goto LAB_142324088;
    puVar32 = puVar34 + -0x24;
    puVar29 = puVar35;
  }
  else {
    if (puVar35 + 0x12 < puVar31) {
      *(undefined8 **)*pauVar36 = puVar35;
      *(undefined8 **)(*pauVar36 + 8) = puVar34 + -0x24;
      *(int *)pauVar36[1] = (int)local_398;
      pauVar36 = (undefined1 (*) [16])(pauVar36[1] + 8);
    }
    if (puVar32 <= puVar29) goto LAB_142324088;
  }
  lVar30 = ((longlong)puVar32 - (longlong)puVar29) / 0x90 + 1;
  puVar35 = puVar29;
  if ((int)local_398 == 0) goto LAB_142324079;
  goto LAB_142323c50;
}



// FUNCTION 142324270 FUN_142324270 body=972 status=ok
// SIG undefined FUN_142324270(void)

ulonglong FUN_142324270(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  int local_res8;
  int iStackX_c;
  undefined2 *local_48;
  int local_40;
  longlong *local_38;
  ulonglong local_30;
  int local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  uVar3 = 0;
  local_res8 = 0;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x2f8))(param_2);
  }
  if (1 < (int)param_1[2]) {
    if ((int)param_1[2] == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)param_1[1];
    }
    FName::FName(&local_res8,puVar9,0);
    lVar7 = CONCAT44(iStackX_c,local_res8);
    if ((local_res8 == 0) && (iStackX_c == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      if (param_2 == (longlong *)0x0) {
        local_30 = 0;
      }
      else {
        local_30 = param_2[7];
      }
      local_28 = -1;
      local_24 = 0x101;
      local_22 = 0;
      local_38 = param_2;
      FUN_142341690(&local_38);
      if (local_30 != 0) {
        do {
          uVar3 = local_30;
          if (*(longlong *)(local_30 + 0x18) == lVar7) goto LAB_142324368;
          local_30 = *(ulonglong *)(local_30 + 0x28);
          FUN_142341690(&local_38);
        } while (local_30 != 0);
        uVar3 = FindField<UProperty>(0,param_1[3]);
        goto LAB_1423245d3;
      }
    }
LAB_142324368:
    uVar3 = FindField<UProperty>(uVar3,param_1[3]);
    goto LAB_1423245d3;
  }
  if ((char)param_1[6] == '\0') {
    param_2 = (longlong *)*param_1;
    if (param_2 != (longlong *)0x0) {
      lVar7 = FUN_14171bfe0();
      if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_1423243c0;
    }
  }
  else {
LAB_1423243c0:
    if (param_2 != (longlong *)0x0) {
      uVar3 = FindField<UProperty>(param_2,param_1[3]);
      goto LAB_1423245d3;
    }
  }
  lVar7 = *param_1;
  if (lVar7 == 0) {
LAB_142324417:
    if (*param_1 != 0) {
      lVar7 = UObjectBaseUtility::GetOutermost();
      goto LAB_142324427;
    }
  }
  else {
    lVar4 = UPackage::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_142324417;
LAB_142324427:
    if (lVar7 != 0) {
      puVar5 = (undefined8 *)FName::ToString(param_1 + 3,&local_48);
      if (*(int *)(puVar5 + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*puVar5;
      }
      uVar6 = UProperty::GetPrivateStaticClass();
      uVar3 = FUN_141799410(uVar6,lVar7,puVar9,0);
      goto LAB_1423245c5;
    }
  }
  lVar7 = UProperty::GetPrivateStaticClass();
  lVar4 = FUN_14171c5d0();
  uVar10 = uVar3;
  if (lVar7 == lVar4) {
    uVar10 = 1;
    uVar6 = FName::ToString(param_1 + 3,&local_48);
    cVar2 = FString::EndsWith(uVar6,L"__DelegateSignature",1);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_1423244ab;
    }
  }
  bVar1 = false;
LAB_1423244ab:
  if ((uVar10 != 0) && (local_48 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  if (!bVar1) {
    return 0;
  }
  FName::ToString(param_1 + 3,&local_48);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  local_28 = -1;
  uVar6 = UPackage::GetPrivateStaticClass();
  FUN_1417a5560(uVar6,&local_38,1,0x10,0);
  uVar10 = local_30 & 0xffffffff;
  do {
    local_28 = local_28 + 1;
    plVar8 = local_38;
    if ((int)local_30 <= local_28) break;
  } while (local_38[local_28] == 0);
  do {
    if ((local_28 < 0) || ((int)uVar10 <= local_28)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((!bVar1) || (uVar3 != 0)) break;
    if ((*(uint *)(plVar8[local_28] + 0x50) >> 4 & 1) != 0) {
      puVar9 = &DAT_143f3eda8;
      if (local_40 != 0) {
        puVar9 = local_48;
      }
      uVar3 = FindObject<UProperty>(plVar8[local_28],puVar9,0);
      uVar10 = local_30 & 0xffffffff;
      plVar8 = local_38;
    }
    do {
      local_28 = local_28 + 1;
      if ((int)uVar10 <= local_28) break;
    } while (plVar8[local_28] == 0);
  } while( true );
  if (plVar8 != (longlong *)0x0) {
    FMemory::Free(plVar8);
  }
  if (uVar3 != 0) {
    lVar7 = UObjectBaseUtility::GetOutermost(uVar3);
    *param_1 = lVar7;
  }
LAB_1423245c5:
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
LAB_1423245d3:
  if (uVar3 != 0) {
    lVar7 = UProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(uVar3 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(byte *)((longlong)param_1 + 0x31) = (byte)((uint)*(undefined4 *)(uVar3 + 0x38) >> 0x1d) & 1;
    }
  }
  return uVar3;
}



// FUNCTION 142324640 FUN_142324640 body=297 status=ok
// SIG undefined FUN_142324640(void)

undefined8 FUN_142324640(float *param_1,longlong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_48 [4];
  undefined8 local_38;
  float local_30;
  
  if ((*(byte *)(param_2 + 5) & 2) != 0) {
    local_38 = *(undefined8 *)param_1;
    local_30 = param_1[2];
    uVar1 = FUN_1423249b0(&local_38);
    return uVar1;
  }
  local_res10[0] = 0;
  (**(code **)(*param_2 + 0x60))(param_2,local_res10,0x18);
  local_res18[0] = 0;
  local_res20[0] = 0;
  local_48[0] = 0;
  iVar3 = 1 << ((char)local_res10[0] + 1U & 0x1f);
  iVar2 = 1 << ((char)local_res10[0] + 2U & 0x1f);
  (**(code **)(*param_2 + 0x60))(param_2,local_res18,iVar2);
  (**(code **)(*param_2 + 0x60))(param_2,local_res20,iVar2);
  (**(code **)(*param_2 + 0x60))(param_2,local_48,iVar2);
  *param_1 = (float)(local_res18[0] - iVar3) * 0.1;
  param_1[1] = (float)(local_res20[0] - iVar3) * 0.1;
  param_1[2] = (float)(local_48[0] - iVar3) * 0.1;
  return CONCAT71((uint7)(uint3)((uint)(local_48[0] - iVar3) >> 8),1);
}



// FUNCTION 142324770 FUN_142324770 body=281 status=ok
// SIG undefined FUN_142324770(void)

uint * FUN_142324770(uint *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  void *_Dst;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = *(uint *)(param_2 + 0xc0);
  uVar2 = uVar4 & 0x80000001;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
  }
  lVar5 = (longlong)(int)uVar2 * 0x60 + param_2;
  uVar2 = *(uint *)(lVar5 + 0x24);
  if (*(int *)(lVar5 + 0x18) << 6 <= (int)uVar2) {
    _Dst = (void *)operator_new(0x4400);
    if (_Dst == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x4400);
      uVar3 = TTraceThreadData<FOverlapDatum>::TTraceThreadData<FOverlapDatum>(_Dst);
    }
    iVar1 = *(int *)(lVar5 + 0x18);
    *(int *)(lVar5 + 0x18) = iVar1 + 1;
    if (*(int *)(lVar5 + 0x1c) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar5 + 0x10,iVar1);
    }
    *(undefined8 *)(*(longlong *)(lVar5 + 0x10) + (longlong)iVar1 * 8) = uVar3;
    uVar4 = *(uint *)(param_2 + 0xc0);
    uVar2 = *(uint *)(lVar5 + 0x24);
  }
  *param_1 = uVar4;
  param_1[1] = uVar2;
  uVar4 = (int)uVar2 >> 0x1f & 0x3f;
  uVar2 = uVar2 + uVar4;
  FUN_142328870((longlong)(int)((uVar2 & 0x3f) - uVar4) * 0x110 +
                *(longlong *)(*(longlong *)(lVar5 + 0x10) + (longlong)((int)uVar2 >> 6) * 8),param_3
               );
  `anonymous_namespace'::ExecuteAsyncTraceIfAvailable<FOverlapDatum>(param_2,0);
  *(int *)(lVar5 + 0x24) = *(int *)(lVar5 + 0x24) + 1;
  return param_1;
}



// FUNCTION 142324890 StartNewTrace<FTraceDatum> body=276 status=ok
// SIG undefined StartNewTrace<FTraceDatum>(void)

uint * `anonymous_namespace'::StartNewTrace<FTraceDatum>
                 (uint *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  void *_Dst;
  undefined8 uVar3;
  uint uVar4;
  longlong *plVar5;
  
  uVar4 = *(uint *)(param_2 + 0xc0);
  uVar2 = uVar4 & 0x80000001;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
  }
  plVar5 = (longlong *)((longlong)(int)uVar2 * 0x60 + param_2);
  uVar2 = *(uint *)(plVar5 + 4);
  if ((int)plVar5[1] << 6 <= (int)uVar2) {
    _Dst = (void *)operator_new(0x4800);
    if (_Dst == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x4800);
      uVar3 = TTraceThreadData<FTraceDatum>::TTraceThreadData<FTraceDatum>(_Dst);
    }
    iVar1 = (int)plVar5[1];
    *(int *)(plVar5 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar5 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5,iVar1);
    }
    *(undefined8 *)(*plVar5 + (longlong)iVar1 * 8) = uVar3;
    uVar4 = *(uint *)(param_2 + 0xc0);
    uVar2 = *(uint *)(plVar5 + 4);
  }
  param_1[1] = uVar2;
  *param_1 = uVar4;
  uVar4 = (int)uVar2 >> 0x1f & 0x3f;
  uVar2 = uVar2 + uVar4;
  FUN_142328930((longlong)(int)((uVar2 & 0x3f) - uVar4) * 0x120 +
                *(longlong *)(*plVar5 + (longlong)((int)uVar2 >> 6) * 8),param_3);
  ExecuteAsyncTraceIfAvailable<FTraceDatum>(param_2,0);
  *(int *)(plVar5 + 4) = (int)plVar5[4] + 1;
  return param_1;
}



// FUNCTION 1423249b0 FUN_1423249b0 body=633 status=ok
// SIG undefined FUN_1423249b0(void)

ulonglong FUN_1423249b0(float *param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int local_res8 [4];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_88 [4];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_60;
  
  fVar13 = *param_1;
  iVar2 = _finite((double)fVar13);
  if (iVar2 != 0) {
    fVar12 = param_1[1];
    iVar2 = _finite((double)fVar12);
    if (iVar2 != 0) {
      fVar14 = param_1[2];
      iVar2 = _finite((double)fVar14);
      if (iVar2 != 0) {
        fVar14 = fVar14 * 10.0;
        fVar12 = fVar12 * 10.0;
        fVar13 = fVar13 * 10.0;
        iVar10 = (int)ROUND(fVar14 + fVar14 + 0.5);
        iVar2 = (int)ROUND(fVar12 + fVar12 + 0.5);
        uVar11 = iVar10 >> 1;
        uVar4 = iVar10 >> 0x1f;
        uVar4 = (uVar11 ^ uVar4) - uVar4;
        iVar10 = (int)ROUND(fVar13 + fVar13 + 0.5);
        uVar8 = iVar2 >> 1;
        uVar5 = iVar2 >> 0x1f;
        uVar5 = (uVar8 ^ uVar5) - uVar5;
        uVar9 = iVar10 >> 1;
        uVar6 = iVar10 >> 0x1f;
        uVar6 = (uVar9 ^ uVar6) - uVar6;
        if ((int)uVar5 <= (int)uVar6) {
          uVar5 = uVar6;
        }
        if ((int)uVar4 <= (int)uVar5) {
          uVar4 = uVar5;
        }
        uVar5 = uVar4 + 1;
        iVar2 = 0x1f;
        if (uVar5 != 0) {
          for (; uVar5 >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        iVar7 = 0x20;
        iVar10 = iVar7;
        if (uVar5 != 0) {
          iVar10 = 0x1f - iVar2;
        }
        iVar2 = 0x1f;
        if (uVar4 != 0) {
          for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        if (uVar4 != 0) {
          iVar7 = 0x1f - iVar2;
        }
        uVar5 = 0x20U - iVar7 & ~((iVar10 << 0x1a) >> 0x1f);
        uVar4 = 1;
        if ((uVar5 != 0) && (uVar4 = 0x18, uVar5 < 0x18)) {
          uVar4 = uVar5;
        }
        local_res8[0] = uVar4 - 1;
        (**(code **)(*param_2 + 0x60))(param_2,local_res8,0x18);
        iVar2 = 1 << ((char)local_res8[0] + 1U & 0x1f);
        uVar5 = 1 << ((char)local_res8[0] + 2U & 0x1f);
        local_res18[0] = iVar2 + uVar9;
        local_res20[0] = iVar2 + uVar8;
        local_88[0] = iVar2 + uVar11;
        uVar4 = 0;
        if (local_res18[0] < uVar5) {
          uVar3 = 1;
        }
        else {
          bVar1 = (int)local_res18[0] < 1;
          local_res18[0] = uVar5 - 1;
          if (bVar1) {
            local_res18[0] = uVar4;
          }
          uVar3 = 0;
        }
        if (uVar5 <= local_res20[0]) {
          bVar1 = (int)local_res20[0] < 1;
          local_res20[0] = uVar5 - 1;
          if (bVar1) {
            local_res20[0] = uVar4;
          }
          uVar3 = 0;
        }
        if (uVar5 <= local_88[0]) {
          bVar1 = (int)local_88[0] < 1;
          local_88[0] = uVar5 - 1;
          if (bVar1) {
            local_88[0] = uVar4;
          }
          uVar3 = 0;
        }
        (**(code **)(*param_2 + 0x60))(param_2,local_res18,uVar5);
        (**(code **)(*param_2 + 0x60))(param_2,local_res20,uVar5);
        (**(code **)(*param_2 + 0x60))(param_2,local_88,uVar5);
        return uVar3;
      }
    }
  }
  local_60 = 0;
  local_70 = 0;
  local_78 = 0;
  uVar3 = FUN_1423249b0(&local_78,param_2);
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 142324c30 TTraceThreadData<FOverlapDatum> body=111 status=ok
// SIG undefined TTraceThreadData<FOverlapDatum>(void)

longlong TTraceThreadData<FOverlapDatum>::TTraceThreadData<FOverlapDatum>(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)(param_1 + 0x108);
  lVar2 = 0x40;
  do {
    FUN_142325210(puVar1 + -0x21);
    puVar1[-3] = 0;
    *(undefined4 *)(puVar1 + -2) = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 0x22;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return param_1;
}



// FUNCTION 142324ca0 TTraceThreadData<FTraceDatum> body=111 status=ok
// SIG undefined TTraceThreadData<FTraceDatum>(void)

longlong TTraceThreadData<FTraceDatum>::TTraceThreadData<FTraceDatum>(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)(param_1 + 0x108);
  lVar2 = 0x40;
  do {
    FUN_142325210(puVar1 + -0x21);
    puVar1[-3] = 0;
    *(undefined4 *)(puVar1 + -2) = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 0x24;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return param_1;
}



// FUNCTION 142324d10 FUN_142324d10 body=471 status=ok
// SIG undefined FUN_142324d10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142324d10(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_228 [32];
  undefined8 *local_208;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [416];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  *param_1 = &PTR_FUN_144f9ee20;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[1] = param_2;
  uVar3 = FUN_14178ca30(param_2);
  param_1[2] = uVar3;
  cVar2 = *(char *)(param_2 + 0xca);
  *(char *)((longlong)param_1 + 0x1c) = cVar2;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  if ((cVar2 == '\x02') && (lVar4 = *(longlong *)(param_2 + 0x118), lVar4 != 0)) {
    plVar5 = *(longlong **)(lVar4 + 800);
    plVar1 = plVar5 + *(int *)(lVar4 + 0x328);
    for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      lVar4 = *plVar5;
      if (lVar4 != 0) {
        if (lVar4 == param_2) {
          *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
          goto LAB_142324e0b;
        }
        if ((*(char *)(lVar4 + 0xca) == *(char *)((longlong)param_1 + 0x1c)) &&
           (lVar4 = FUN_14178ca30(), lVar4 == param_1[2])) {
          *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
        }
      }
    }
    *(undefined4 *)(param_1 + 3) = 0xffffffff;
  }
LAB_142324e0b:
  if (((*(byte *)(param_2 + 0xba) & 8) != 0) && (*(char *)(param_2 + 0xca) != '\x02')) {
    local_208 = param_1 + 8;
    FUN_142325700(local_1e8,param_2,param_1 + 4,param_1 + 6);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146af0238) &&
       (_Init_thread_header(&DAT_146af0238), DAT_146af0238 == -1)) {
      DAT_146af0234 = FUN_14232a420(local_1f8);
      _Init_thread_footer(&DAT_146af0238);
    }
    if ((*(int *)(param_1 + 5) == DAT_146af0234) &&
       (*(undefined4 *)(param_1 + 5) = 0, *(int *)((longlong)param_1 + 0x2c) != 0)) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 4,0);
    }
    FComponentPropertyWriter::~FComponentPropertyWriter(local_1e8);
  }
  return param_1;
}



// FUNCTION 142324ef0 FUN_142324ef0 body=797 status=ok
// SIG undefined FUN_142324ef0(void)

undefined8 * FUN_142324ef0(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  float local_70 [4];
  longlong local_60 [7];
  
  FUN_14271d7c0(param_1,param_2,0);
  *param_1 = &PTR_FUN_145047cd8;
  FStaticMeshVertexBuffer::FStaticMeshVertexBuffer(param_1 + 0x74);
  FUN_1426f5920(param_1 + 0x91);
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  puVar3 = param_1 + 0x1ab;
  *(undefined2 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb6) = 4;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  *(undefined1 *)(param_1 + 0xba) = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xb5] = &PTR_FUN_1441669d0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1[0x26] + 8);
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  *(undefined1 *)(param_1 + 0xc4) = 0;
  param_1[0x125] = 0;
  *(undefined1 *)(param_1 + 0x126) = 1;
  *(undefined1 *)((longlong)param_1 + 0x932) = 0;
  param_1[0x187] = 0;
  param_1[0x188] = 0;
  param_1[0x189] = 0;
  param_1[0xbf] = &PTR_FUN_144165fb0;
  param_1[0x18a] = 0;
  param_1[0x18b] = 0;
  param_1[0x18c] = 0;
  param_1[0x18d] = 0;
  param_1[0x18e] = 0;
  param_1[399] = 0;
  param_1[0x198] = 0;
  param_1[0x199] = 0;
  param_1[0x19a] = 0;
  param_1[0x19f] = 0;
  param_1[0x1a0] = 0;
  param_1[0x1a1] = 0;
  param_1[0x1a2] = 0;
  param_1[0x1a3] = 0;
  param_1[0x1a4] = 0;
  param_1[0x1a5] = 0;
  param_1[0x1a6] = 0;
  param_1[0x1a7] = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x1a8) = 0;
  param_1[0x1aa] = 0;
  lVar2 = 2;
  if (param_1 + 0x1ac < puVar3) {
    lVar2 = 0;
  }
  param_1[0x1a9] = param_1 + 0x18a;
  *(undefined1 *)((longlong)param_1 + 0x931) = 1;
  if (puVar3 <= param_1 + 0x1ac) {
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined4 *)puVar3 = 0xffffffff;
      puVar3 = (undefined8 *)((longlong)puVar3 + 4);
    }
  }
  *(undefined4 *)((longlong)param_1 + 0xd74) = *(undefined4 *)(param_2 + 0x6f0);
  fVar5 = *(float *)(param_2 + 0x6f4);
  *(float *)(param_1 + 0x1af) = fVar5;
  fVar5 = fVar5 * 80.0;
  *(undefined1 *)((longlong)param_1 + 0xd7c) = *(undefined1 *)(param_2 + 0x6f8);
  uVar1 = *(undefined4 *)(param_2 + 0x6fc);
  *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) & 0xfffffffd;
  *(undefined4 *)(param_1 + 0x1b0) = uVar1;
  local_70[1] = 0.0;
  local_70[2] = 0.0;
  local_60[0] = 0;
  local_60[1] = 0;
  fVar4 = (fVar5 - fVar5 * 0.2) * 0.55;
  local_70[0] = fVar4;
  FUN_1426fb840(0x3eb2b8c2,0x3eb2b8c2,-(fVar5 * 0.2),fVar5,0x20,local_60,param_1 + 0xbd);
  local_98 = 0x3f800000;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0x3f800000;
  local_80 = 0;
  local_78 = 0x3f800000;
  FUN_1426fc580(local_70,&local_80,&local_8c,&local_98,fVar5 * 0.03,fVar4,0x10,local_60,
                param_1 + 0xbd);
  FUN_1428208f0(param_1 + 0x74,param_1 + 0xbf,local_60,1,0);
  FUN_141edf270(param_1 + 0xb5);
  if (local_60[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142325210 FUN_142325210 body=120 status=ok
// SIG undefined FUN_142325210(void)

undefined4 * FUN_142325210(undefined4 *param_1)

{
  undefined1 local_res8 [8];
  undefined8 local_res10;
  
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  local_res10 = 0;
  FUN_1422ffb20(param_1 + 2,0,local_res8,0,0);
  FUN_1426d3dd0(param_1 + 0x20);
  FUN_1426ea8d0(param_1 + 0x20,2,0);
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  return param_1;
}



// FUNCTION 142325290 FUN_142325290 body=434 status=ok
// SIG undefined FUN_142325290(void)

undefined8 * FUN_142325290(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_res8 = 0;
  FUN_14271d7c0(param_1,param_2,0);
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xfffffff0;
  *param_1 = &PTR__scalar_deleting_destructor__145049cc0;
  *(int *)((longlong)param_1 + 0x3a4) = (int)DAT_146b17150[0x10a];
  param_1[0x78] = param_2[0xdf];
  puVar7 = (undefined4 *)(**(code **)(*param_2 + 0x4d0))(param_2);
  uVar1 = puVar7[1];
  uVar2 = puVar7[2];
  uVar3 = puVar7[3];
  *(undefined4 *)(param_1 + 0x79) = *puVar7;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = uVar1;
  *(undefined4 *)(param_1 + 0x7a) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = uVar3;
  uVar1 = puVar7[4];
  uVar2 = puVar7[5];
  uVar3 = puVar7[6];
  uVar4 = puVar7[7];
  *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) & 0xfffffffd;
  *(undefined4 *)(param_1 + 0x7b) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = uVar2;
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x3e4) = uVar4;
  if (param_3 != (longlong *)0x0) {
    cVar5 = (**(code **)(*DAT_146b17150 + 0x2f0))(DAT_146b17150,param_3);
    if (cVar5 == '\0') {
      return param_1;
    }
    bVar6 = (**(code **)(*param_3 + 0x6f8))(param_3);
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xfffffffe;
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | bVar6 & 1;
    bVar6 = FOutputDevice::CanBeUsedOnAnyThread(param_3);
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xfffffffd;
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | (uint)bVar6 * 2;
    puVar7 = (undefined4 *)(**(code **)(*param_3 + 0x708))(param_3,local_res10);
    *(undefined4 *)((longlong)param_1 + 0x3a4) = *puVar7;
    uVar10 = (*(int *)((longlong)param_3 + 0x464) * 2 ^ *(uint *)(param_1 + 0x74)) & 4 ^
             *(uint *)(param_1 + 0x74);
    *(uint *)(param_1 + 0x74) = uVar10;
    uVar10 = uVar10 ^ ((int)param_3[0x8f] << 3 ^ uVar10) & 8;
    *(uint *)(param_1 + 0x74) = uVar10;
    if ((uVar10 & 2) == 0) {
      uVar8 = AActor::GetLevel(param_3);
      lVar9 = FLevelUtils::FindStreamingLevel(uVar8);
      if (lVar9 == 0) goto LAB_1423253f5;
      local_28 = *(undefined4 *)(lVar9 + 0xb8);
      uStack_24 = *(undefined4 *)(lVar9 + 0xbc);
      uStack_20 = *(undefined4 *)(lVar9 + 0xc0);
      uStack_1c = *(undefined4 *)(lVar9 + 0xc4);
    }
    else {
      FLinearColor::FLinearColor(&local_28,(longlong)param_1 + 0x3a4);
    }
    *(undefined4 *)(param_1 + 0x75) = local_28;
    *(undefined4 *)((longlong)param_1 + 0x3ac) = uStack_24;
    *(undefined4 *)(param_1 + 0x76) = uStack_20;
    *(undefined4 *)((longlong)param_1 + 0x3b4) = uStack_1c;
  }
LAB_1423253f5:
  *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) & 0xffefffff;
  *(uint *)((longlong)param_1 + 0x1c) =
       *(uint *)((longlong)param_1 + 0x1c) | ~(*(int *)(param_1 + 0x74) << 0x11) & 0x100000U;
  (**(code **)(*DAT_146b17150 + 0x308))(DAT_146b17150,param_2,&local_res8);
  *(undefined4 *)(param_1 + 0x77) = (undefined4)local_res8;
  return param_1;
}



// FUNCTION 142325450 FUN_142325450 body=676 status=ok
// SIG undefined FUN_142325450(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142325450(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_188 [32];
  longlong *local_168;
  undefined1 local_160 [8];
  longlong **local_158;
  undefined8 local_150;
  longlong local_148 [24];
  longlong *local_88;
  ulonglong local_80;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_2 != 0) {
    cVar5 = AActor::IsChildActor(param_2);
    local_88 = (longlong *)0x0;
    local_80 = 0;
    FUN_140a4ca80(param_2,local_148,0);
    if (*(int *)((longlong)param_1 + 0xc) < (int)local_80) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,local_80 & 0xffffffff);
    }
    plVar8 = local_148;
    if (local_88 != (longlong *)0x0) {
      plVar8 = local_88;
    }
    plVar1 = plVar8 + (int)local_80;
    for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
      plVar3 = (longlong *)*plVar8;
      if ((cVar5 == '\0') && (1 < (byte)(*(char *)((longlong)plVar3 + 0xca) - 1U))) {
        if (*(char *)((longlong)plVar3 + 0xca) == '\x03') {
          lVar6 = FUN_1429ff160();
          if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            lVar6 = plVar3[0x32];
            local_168 = plVar3;
            if ((lVar6 != 0) && ((byte)(*(char *)(lVar6 + 0xca) - 1U) < 2)) {
              lVar7 = *(longlong *)(param_2 + 0x168);
              if (lVar7 == 0) {
                lVar7 = lVar6;
                for (lVar6 = *(longlong *)(lVar6 + 400);
                    (lVar6 != 0 && (*(longlong *)(lVar6 + 0x118) == param_2));
                    lVar6 = *(longlong *)(lVar6 + 400)) {
                  lVar7 = lVar6;
                }
              }
              if ((*(byte *)((longlong)plVar3 + 0x24c) & 1) == 0) {
                FUN_140942fb0(plVar3,0,0);
              }
              local_158 = &local_168;
              local_150 = FUN_14162bcf0(local_168 + 0x42,local_78,lVar7 + 0x210);
              TSet<TTuple<USceneComponent_*,FTransform>,TDefaultMapHashableKeyFuncs<USceneComponent_*,FTransform,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<USceneComponent_*_const_&,FTransform_&&>_>
                        (param_1 + 2,local_160,&local_158,0);
            }
          }
          else {
            local_168 = (longlong *)0x0;
          }
        }
      }
      else {
        lVar6 = (**(code **)(*plVar3 + 0x3a8))(plVar3);
        if (lVar6 != 0) {
          iVar2 = (int)param_1[1];
          *(int *)(param_1 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
          }
          *(longlong *)(*param_1 + (longlong)iVar2 * 8) = lVar6;
        }
      }
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return param_1;
}



// FUNCTION 142325700 FUN_142325700 body=617 status=ok
// SIG undefined FUN_142325700(void)

undefined8 *
FUN_142325700(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  
  local_res8 = 0;
  FArchive::FArchive();
  param_1[0x12] = 0;
  *param_1 = &PTR_FUN_143f4a100;
  param_1[0x13] = param_3;
  param_1[0x14] = 0;
  FArchive::SetIsSaving(param_1,1);
  FArchive::SetIsPersistent(param_1,0);
  *(byte *)((longlong)param_1 + 0x2a) = *(byte *)((longlong)param_1 + 0x2a) & 0xfd;
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xdf;
  *param_1 = &PTR__scalar_deleting_destructor__145046928;
  param_1[0x15] = param_2;
  puVar1 = param_1 + 0x16;
  *puVar1 = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x21] = param_5;
  param_1[0x20] = param_4;
  param_1[0x22] = &PTR__scalar_deleting_destructor__144d31120;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2d));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x2d),4000);
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[6] = param_1[6] | 0x20000000;
  lVar6 = param_1[0x15];
  if (lVar6 != 0) {
    plVar2 = *(longlong **)(lVar6 + 0x10);
    FUN_142340040(lVar6,puVar1);
    lVar6 = param_1[0x15];
    if ((*(longlong *)(lVar6 + 0x118) != 0) &&
       (lVar6 == *(longlong *)(*(longlong *)(lVar6 + 0x118) + 0x168))) {
      puVar4 = (undefined8 *)FName::FName(local_res10,L"RelativeLocation",1);
      local_res8 = UStruct::FindPropertyByName(plVar2,*puVar4);
      FUN_14058c900(puVar1,&param_5,&local_res8,0);
      puVar4 = (undefined8 *)FName::FName(local_res10,L"RelativeRotation",1);
      local_res8 = UStruct::FindPropertyByName(plVar2,*puVar4);
      FUN_14058c900(puVar1,&param_5,&local_res8,0);
      puVar4 = (undefined8 *)FName::FName(local_res10,L"RelativeScale3D",1);
      local_res8 = UStruct::FindPropertyByName(plVar2,*puVar4);
      FUN_14058c900(puVar1,&param_5,&local_res8,0);
      lVar6 = param_1[0x15];
    }
    lVar3 = *plVar2;
    uVar5 = FUN_14178ca30(lVar6);
    (**(code **)(lVar3 + 0x2a0))(plVar2,param_1,param_1[0x15],plVar2,uVar5,0);
  }
  return param_1;
}



// FUNCTION 142325970 FUN_142325970 body=217 status=ok
// SIG undefined FUN_142325970(void)

undefined4 * FUN_142325970(undefined4 *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  undefined1 local_10;
  byte local_f;
  
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  FWeakObjectPtr::operator=(param_1 + 2,0);
  lVar3 = 0;
  if ((*(byte *)(param_2 + 0xb8) & 1) != 0) {
    lVar2 = FUN_14046f570(param_2);
    lVar3 = 0;
    if (lVar2 != 0) {
      lVar3 = FUN_14046f570(param_2);
      local_f = local_f & 0xfd | 1;
      local_10 = 1;
      local_18 = lVar3;
      AK::MemoryMgr::StartProfileThreadUsage((long)&local_18);
      FUN_14233aad0(param_2);
      *(undefined8 *)(param_2 + 0x120) = 0;
      AK::MemoryMgr::StartProfileThreadUsage((long)&local_18);
    }
  }
  FWeakObjectPtr::operator=(param_1 + 2,lVar3);
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 2);
  lVar3 = 0;
  if (cVar1 != '\0') {
    lVar3 = param_2;
  }
  FWeakObjectPtr::operator=(param_1,lVar3);
  return param_1;
}



// FUNCTION 142325a50 FUN_142325a50 body=498 status=ok
// SIG undefined FUN_142325a50(void)

longlong * FUN_142325a50(longlong *param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  void *_Src;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  longlong lVar9;
  void *local_58;
  ulonglong local_50;
  int local_48;
  void *local_40;
  int local_38;
  
  pvVar7 = (void *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_141ee24f0(0);
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = -1;
  uVar5 = FUN_1428e7a40();
  FUN_1417a5560(uVar5,&local_58,1,0x10,0);
  _Src = local_58;
  lVar9 = (longlong)(int)local_50;
  do {
    local_48 = local_48 + 1;
    if ((int)local_50 <= local_48) break;
  } while (*(longlong *)((longlong)local_58 + (longlong)local_48 * 8) == 0);
  local_40 = (void *)0x0;
  local_38 = (int)local_50;
  iVar6 = local_48;
  iVar3 = (int)local_50;
  iVar4 = local_38;
  iVar8 = 0;
  if ((int)local_50 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
              (&local_40,local_50 & 0xffffffff,0);
    pvVar7 = local_40;
    _guard_xfg_dispatch_icall_nop(local_40,_Src,lVar9 << 3);
    iVar6 = local_48;
    iVar3 = local_38;
    iVar4 = local_38;
    iVar8 = (int)local_50;
  }
  do {
    local_38 = iVar4;
    iVar4 = local_38;
    local_38 = iVar3;
    if (iVar6 == iVar8) {
      if (pvVar7 != (void *)0x0) {
        FMemory::Free(pvVar7);
      }
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      return param_1;
    }
    plVar1 = *(longlong **)((longlong)pvVar7 + (longlong)iVar6 * 8);
    if (((param_2 == '\0') || (plVar1 == (longlong *)0x0)) || (plVar1[0x1c] == 0)) {
      uVar5 = FMemory::Malloc(8);
      iVar3 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar3 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar3 * 8) = uVar5;
      plVar2 = *(longlong **)(*param_1 + (longlong)iVar3 * 8);
      if (plVar2 != (longlong *)0x0) {
        if ((*(byte *)(plVar1 + 0x17) & 3) == 3) {
          (**(code **)(*plVar1 + 0x300))(plVar1);
          *plVar2 = (longlong)plVar1;
        }
        else {
          *plVar2 = 0;
        }
      }
    }
    do {
      iVar6 = iVar6 + 1;
      iVar3 = local_38;
      if (iVar4 <= iVar6) break;
    } while (*(longlong *)((longlong)pvVar7 + (longlong)iVar6 * 8) == 0);
  } while( true );
}



// FUNCTION 142325c50 FUN_142325c50 body=602 status=ok
// SIG undefined FUN_142325c50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_142325c50(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  uint uVar4;
  void *_Src;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  void *pvVar8;
  ulonglong uVar9;
  uint local_res8;
  void *local_68;
  undefined4 local_60;
  void *local_50;
  ulonglong local_48;
  int local_40;
  
  pvVar8 = (void *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  _DAT_146aefe38 = _DAT_146aefe38 + 1;
  FUN_141ee24f0(0);
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = -1;
  uVar5 = FUN_1428e7a40();
  FUN_1417a5560(uVar5,&local_50,1,0x10,0);
  _Src = local_50;
  uVar9 = (ulonglong)(int)(uint)local_48;
  local_res8 = (uint)local_48;
  do {
    local_40 = local_40 + 1;
    if ((int)(uint)local_48 <= local_40) break;
  } while (*(longlong *)((longlong)local_50 + (longlong)local_40 * 8) == 0);
  local_68 = (void *)0x0;
  local_60 = (uint)local_48;
  if ((uint)local_48 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
              (&local_68,local_48 & 0xffffffff,0);
    pvVar8 = local_68;
    _guard_xfg_dispatch_icall_nop(local_68,_Src,uVar9 << 3);
    uVar9 = local_48 & 0xffffffff;
    local_res8 = (uint)local_48;
  }
  uVar4 = local_60;
  iVar7 = local_40;
  if (local_40 != (int)uVar9) {
    do {
      lVar2 = *(longlong *)((longlong)pvVar8 + (longlong)iVar7 * 8);
      uVar5 = FMemory::Malloc(0x10);
      iVar1 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar5;
      puVar3 = *(undefined4 **)(*param_1 + (longlong)iVar1 * 8);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0xffffffff;
        puVar3[1] = 0;
        FWeakObjectPtr::operator=(puVar3 + 2,0);
        if (((*(byte *)(lVar2 + 0xb8) & 1) != 0) && (lVar6 = FUN_14046f570(lVar2), lVar6 != 0)) {
          local_68 = (void *)FUN_14046f570(lVar2);
          local_60 = CONCAT22(local_60._2_2_,CONCAT11(local_60._1_1_ & 0xfd,1)) | 0x100;
          AK::MemoryMgr::StartProfileThreadUsage((long)&local_68);
          FUN_14233aad0(lVar2);
          *(undefined8 *)(lVar2 + 0x120) = 0;
          AK::MemoryMgr::StartProfileThreadUsage((long)&local_68);
        }
        FWeakObjectPtr::operator=(puVar3 + 2);
        FWeakObjectPtr::IsValid(puVar3 + 2);
        FWeakObjectPtr::operator=(puVar3);
        uVar9 = (ulonglong)local_res8;
      }
      do {
        iVar7 = iVar7 + 1;
        if ((int)uVar4 <= iVar7) break;
      } while (*(longlong *)((longlong)pvVar8 + (longlong)iVar7 * 8) == 0);
    } while (iVar7 != (int)uVar9);
  }
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  return param_1;
}



// FUNCTION 142325eb0 FUN_142325eb0 body=788 status=ok
// SIG undefined FUN_142325eb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142325eb0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14504b4c0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0x60;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x60;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  uVar5 = uRam0000000146af005c;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(uint *)((longlong)param_1 + 0x7c) = uVar5;
  uVar5 = uRam0000000146af0054 & uRam0000000146af0064;
  uVar6 = uRam0000000146af0058 & uRam0000000146af0068;
  uVar7 = uRam0000000146af005c & uRam0000000146af006c;
  *(uint *)(param_1 + 0x12) = _DAT_146af0050 & _DAT_146af0060;
  *(uint *)((longlong)param_1 + 0x94) = uVar5;
  *(uint *)(param_1 + 0x13) = uVar6;
  *(uint *)((longlong)param_1 + 0x9c) = uVar7;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffffffc;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0x18) = DAT_1464aa810;
  *(undefined4 *)((longlong)param_1 + 0xc4) = DAT_1464aa814;
  *(undefined4 *)(param_1 + 0x19) = DAT_1464aa818;
  *(undefined4 *)((longlong)param_1 + 0xcc) = DAT_1464aa81c;
  *(undefined4 *)(param_1 + 0x1a) = DAT_1464aa810;
  *(undefined4 *)((longlong)param_1 + 0xd4) = DAT_1464aa814;
  *(undefined4 *)(param_1 + 0x1b) = DAT_1464aa818;
  *(undefined4 *)((longlong)param_1 + 0xdc) = DAT_1464aa81c;
  *(undefined4 *)(param_1 + 0x1c) = DAT_1464aa810;
  *(undefined4 *)((longlong)param_1 + 0xe4) = DAT_1464aa814;
  *(undefined4 *)(param_1 + 0x1d) = DAT_1464aa818;
  *(undefined4 *)((longlong)param_1 + 0xec) = DAT_1464aa81c;
  param_1[0x22] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x3e000000;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x3e000000;
  param_1[0x25] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x26) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x134) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x13c) = DAT_1468b5d98;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x3ec);
  *(undefined4 *)((longlong)param_1 + 0x114) = *(undefined4 *)(param_2 + 0x3f0);
  if (*(longlong *)(param_2 + 0x118) != 0) {
    iVar1 = FUN_142235230();
  }
  if (iVar1 != 2) {
    uVar4 = *(undefined4 *)(param_2 + 0x3d4);
  }
  else {
    uVar4 = *(undefined4 *)(param_2 + 0x3dc);
  }
  *(undefined4 *)(param_1 + 0x23) = uVar4;
  if (iVar1 != 2) {
    uVar4 = *(undefined4 *)(param_2 + 0x3d8);
  }
  else {
    uVar4 = *(undefined4 *)(param_2 + 0x3e0);
  }
  *(undefined4 *)((longlong)param_1 + 0x11c) = uVar4;
  plVar2 = (longlong *)FUN_14293b120();
  lVar3 = plVar2[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar3 = plVar2[0x1f];
    if (lVar3 == 0) {
      uVar4 = *(undefined4 *)((longlong)param_1 + 0x124);
      goto LAB_142326167;
    }
  }
  uVar4 = *(undefined4 *)(lVar3 + 0x4a0);
  *(undefined4 *)((longlong)param_1 + 0x124) = uVar4;
LAB_142326167:
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  if ((*(longlong *)(param_2 + 0x118) != 0) &&
     (*(char *)(*(longlong *)(param_2 + 0x118) + 0x128) == '\x02')) {
    if (*(int *)((longlong)param_1 + 0x1c) < *(int *)((longlong)param_1 + 0x54)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 2);
    }
    if (*(int *)((longlong)param_1 + 0x2c) < *(int *)(param_1 + 10)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 4);
    }
  }
  return param_1;
}



// FUNCTION 1423261d0 FUN_1423261d0 body=226 status=ok
// SIG undefined FUN_1423261d0(void)

undefined8 * FUN_1423261d0(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_14504b4e0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  *(uint *)((longlong)param_1 + 0x6c) = *(uint *)((longlong)param_1 + 0x6c) & 0xfffffffe;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3e000000;
  *(undefined4 *)(param_1 + 0xd) = 0x3e000000;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  plVar1 = (longlong *)FUN_14293b120();
  if (plVar1[0x1f] == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
  }
  if (plVar1[0x1f] != 0) {
    *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(plVar1[0x1f] + 0x4a0);
  }
  lVar2 = FUN_14046f570(param_2);
  if (lVar2 != 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(lVar2 + 0x790);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar2 + 0x790);
  }
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)(param_1 + 0xd);
  return param_1;
}



// FUNCTION 1423262c0 FUN_1423262c0 body=369 status=ok
// SIG undefined FUN_1423262c0(void)

longlong FUN_1423262c0(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                      undefined4 *param_5,undefined8 *param_6,undefined4 param_7,undefined4 param_8,
                      undefined8 *param_9,undefined4 *param_10,longlong param_11,undefined4 param_12
                      )

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  FUN_142325210();
  plVar1 = (longlong *)(param_1 + 0xf0);
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(undefined4 *)(param_1 + 0xa8) = *param_3;
  *(undefined4 *)(param_1 + 0xac) = uVar4;
  *(undefined4 *)(param_1 + 0xb0) = uVar5;
  *(undefined4 *)(param_1 + 0xb4) = uVar6;
  FUN_1423007f0(param_1 + 8,param_4);
  uVar4 = param_5[1];
  uVar5 = param_5[2];
  uVar6 = param_5[3];
  *(undefined4 *)(param_1 + 0x80) = *param_5;
  *(undefined4 *)(param_1 + 0x84) = uVar4;
  *(undefined4 *)(param_1 + 0x88) = uVar5;
  *(undefined4 *)(param_1 + 0x8c) = uVar6;
  uVar4 = param_5[5];
  uVar5 = param_5[6];
  uVar6 = param_5[7];
  *(undefined4 *)(param_1 + 0x90) = param_5[4];
  *(undefined4 *)(param_1 + 0x94) = uVar4;
  *(undefined4 *)(param_1 + 0x98) = uVar5;
  *(undefined4 *)(param_1 + 0x9c) = uVar6;
  uVar2 = *param_6;
  *(undefined4 *)(param_1 + 0xb8) = param_7;
  *(undefined4 *)(param_1 + 0xc0) = param_8;
  *(undefined8 *)(param_1 + 0xa0) = uVar2;
  *(undefined4 *)(param_1 + 0xbc) = param_12;
  FWeakObjectPtr::operator=(param_1,param_2);
  *(undefined8 *)(param_1 + 200) = *param_9;
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_9 + 1);
  uVar4 = param_10[1];
  uVar5 = param_10[2];
  uVar6 = param_10[3];
  *(undefined4 *)(param_1 + 0xe0) = *param_10;
  *(undefined4 *)(param_1 + 0xe4) = uVar4;
  *(undefined4 *)(param_1 + 0xe8) = uVar5;
  *(undefined4 *)(param_1 + 0xec) = uVar6;
  if (param_11 == 0) {
    if ((*(int *)(param_1 + 0xf8) != 0) && (plVar3 = (longlong *)*plVar1, plVar3 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      if (*plVar1 != 0) {
        lVar7 = FMemory::Realloc(*plVar1,0,0);
        *plVar1 = lVar7;
      }
      *(undefined4 *)(param_1 + 0xf8) = 0;
    }
  }
  else {
    TBaseDelegate<FSlateBrush_const_*>::operator=(plVar1);
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  if ((*(int *)(param_1 + 0x10c) < 0) && (*(int *)(param_1 + 0x10c) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x100,0);
  }
  return param_1;
}



// FUNCTION 142326440 FUN_142326440 body=445 status=ok
// SIG undefined FUN_142326440(void)

undefined8 * FUN_142326440(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  
  *param_1 = &PTR__scalar_deleting_destructor__144080980;
  param_1[0x11] = 0;
  iVar6 = *(int *)(param_2 + 0x90);
  puVar3 = *(undefined8 **)(param_2 + 0x88);
  *(int *)(param_1 + 0x12) = iVar6;
  if (iVar6 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  }
  else {
    TArray<FObjectInitializer::FOverrides::FOverride,TInlineAllocator<8,FDefaultAllocator>_>::
    ResizeForCopy(param_1 + 1,iVar6,0);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)(param_2 + 8);
    }
    puVar2 = (undefined8 *)param_1[0x11];
    if ((undefined8 *)param_1[0x11] == (undefined8 *)0x0) {
      puVar2 = param_1 + 1;
    }
    puVar4 = puVar2;
    puVar5 = puVar3;
    do {
      *puVar4 = *puVar5;
      lVar1 = *(longlong *)((longlong)puVar3 + (8 - (longlong)puVar2) + (longlong)puVar4);
      puVar4[1] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      puVar5 = puVar5 + 2;
      puVar4 = puVar4 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  param_1[0x1b] = 0;
  iVar6 = *(int *)(param_2 + 0xe0);
  puVar3 = *(undefined8 **)(param_2 + 0xd8);
  *(int *)(param_1 + 0x1c) = iVar6;
  if (iVar6 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  }
  else {
    TArray<TScriptDelegate<FWeakObjectPtr>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeForCopy
              (param_1 + 0x13,iVar6,0);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)(param_2 + 0x98);
    }
    puVar2 = (undefined8 *)param_1[0x1b];
    if ((undefined8 *)param_1[0x1b] == (undefined8 *)0x0) {
      puVar2 = param_1 + 0x13;
    }
    puVar4 = puVar3;
    puVar5 = puVar2;
    do {
      *puVar5 = *puVar4;
      lVar1 = *(longlong *)((longlong)puVar3 + (8 - (longlong)puVar2) + (longlong)puVar5);
      puVar5[1] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      puVar4 = puVar4 + 2;
      puVar5 = puVar5 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0xe8);
  *(undefined1 *)((longlong)param_1 + 0xe9) = *(undefined1 *)(param_2 + 0xe9);
  *(undefined8 *)((longlong)param_1 + 0xec) = *(undefined8 *)(param_2 + 0xec);
  *(undefined4 *)((longlong)param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)(param_2 + 0xf8);
  *(undefined1 *)((longlong)param_1 + 0xf9) = *(undefined1 *)(param_2 + 0xf9);
  return param_1;
}



// FUNCTION 142326600 FUN_142326600 body=325 status=ok
// SIG undefined FUN_142326600(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142326600(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *param_1 = &PTR_FUN_14504b468;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffff8;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0xe,0,0x90);
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x27) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x39) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  uVar1 = uRam0000000146af005c;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  *(uint *)((longlong)param_1 + 0x1fc) = uVar1;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  uVar1 = uRam0000000146af0054 & uRam0000000146af0064;
  uVar2 = uRam0000000146af0058 & uRam0000000146af0068;
  uVar3 = uRam0000000146af005c & uRam0000000146af006c;
  *(uint *)(param_1 + 0x42) = _DAT_146af0050 & _DAT_146af0060;
  *(uint *)((longlong)param_1 + 0x214) = uVar1;
  *(uint *)(param_1 + 0x43) = uVar2;
  *(uint *)((longlong)param_1 + 0x21c) = uVar3;
  FRootMotionSourceGroup::FRootMotionSourceGroup(param_1 + 0x44);
  *(undefined4 *)((longlong)param_1 + 0x324) = 0x3f800000;
  *(undefined4 *)(param_1 + 100) = 0x3f666666;
  *(undefined4 *)(param_1 + 0x65) = 0x3f7ef9db;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0x41200000;
  return param_1;
}



// FUNCTION 142326750 FUN_142326750 body=68 status=ok
// SIG undefined FUN_142326750(void)

undefined1 * FUN_142326750(undefined1 *param_1,longlong *param_2)

{
  *(longlong **)(param_1 + 8) = param_2;
  if ((param_2 != (longlong *)0x0) && ((char)param_2[0x49] == '\x02')) {
    *param_1 = 1;
    (**(code **)(*param_2 + 0x748))(param_2,0);
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1423267a0 FUN_1423267a0 body=416 status=ok
// SIG undefined FUN_1423267a0(void)

longlong * FUN_1423267a0(longlong *param_1,longlong param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_28 [8];
  undefined4 local_20;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  *param_1 = param_2;
  if (param_2 == 0) {
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0xfffffff8;
  }
  else {
    uVar6 = ((uint)(*(byte *)(param_2 + 0x24c) >> 2) ^ *(uint *)(param_1 + 1)) & 1 ^
            *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar6;
    uVar6 = uVar6 ^ (*(byte *)(param_2 + 0x24c) >> 2 ^ uVar6) & 2;
    *(uint *)(param_1 + 1) = uVar6;
    uVar5 = 0;
    uVar6 = uVar6 ^ (*(byte *)(param_2 + 0x24c) >> 2 ^ uVar6) & 4;
    if (((byte)uVar6 & 7) != 7) {
      uVar5 = 8;
    }
    *(uint *)(param_1 + 1) = uVar5 | uVar6 & 0xfffffff7;
    bVar1 = *(byte *)(param_2 + 0x24c);
    *(byte *)(param_2 + 0x24c) = bVar1 | 0x1c;
    if (((*(byte *)(param_1 + 1) & 8) != 0) && (*(longlong *)(param_2 + 400) != 0)) {
      if ((bVar1 & 1) == 0) {
        FUN_140942fb0(param_2,0,0);
      }
      local_20 = *(undefined4 *)(param_2 + 0x228);
      local_18 = *(float *)(param_2 + 0x210);
      fStack_14 = *(float *)(param_2 + 0x214);
      fStack_10 = *(float *)(param_2 + 0x218);
      fStack_c = *(float *)(param_2 + 0x21c);
      *(undefined4 *)(param_2 + 0x1ec) = *(undefined4 *)(param_2 + 0x220);
      *(undefined4 *)(param_2 + 0x1f0) = *(undefined4 *)(param_2 + 0x224);
      *(undefined4 *)(param_2 + 500) = local_20;
      auVar2._4_4_ = -(uint)(*(float *)(param_2 + 0x254) != fStack_14);
      auVar2._0_4_ = -(uint)(*(float *)(param_2 + 0x250) != local_18);
      auVar2._8_4_ = -(uint)(*(float *)(param_2 + 600) != fStack_10);
      auVar2._12_4_ = -(uint)(*(float *)(param_2 + 0x25c) != fStack_c);
      iVar3 = movmskps(local_20,auVar2);
      if (iVar3 != 0) {
        *(float *)(param_2 + 0x250) = local_18;
        *(float *)(param_2 + 0x254) = fStack_14;
        *(float *)(param_2 + 600) = fStack_10;
        *(float *)(param_2 + 0x25c) = fStack_c;
        puVar4 = (undefined8 *)FQuat::Rotator(&local_18,local_28);
        *(undefined8 *)(param_2 + 0x260) = *puVar4;
        *(undefined4 *)(param_2 + 0x268) = *(undefined4 *)(puVar4 + 1);
      }
      *(undefined8 *)(param_2 + 0x1f8) = *(undefined8 *)(param_2 + 0x260);
      *(undefined4 *)(param_2 + 0x200) = *(undefined4 *)(param_2 + 0x268);
      *(undefined4 *)(param_2 + 0x204) = *(undefined4 *)(param_2 + 0x230);
      *(undefined4 *)(param_2 + 0x208) = *(undefined4 *)(param_2 + 0x234);
      *(undefined4 *)(param_2 + 0x20c) = *(undefined4 *)(param_2 + 0x238);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142326940 FUN_142326940 body=683 status=ok
// SIG undefined FUN_142326940(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142326940(undefined8 *param_1,longlong param_2,float param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 local_res10 [8];
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  FUN_14271d7c0(param_1,param_2,0);
  *param_1 = &PTR_FUN_145048770;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = *(undefined4 *)(param_2 + 0x6fc);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x700);
  *(undefined4 *)(param_1 + 0x79) = *(undefined4 *)(param_2 + 0x708);
  uVar7 = _DAT_1464aa6c8;
  param_1[0x7a] = _DAT_1464aa6c0;
  param_1[0x7b] = uVar7;
  uVar1 = *(uint *)(param_2 + 0x6f8);
  *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) & 0xfffffffd;
  *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) ^ (uVar1 ^ *(uint *)(param_1 + 0x7c)) & 1;
  auVar10._0_4_ = *(uint *)(param_2 + 0x230) & _DAT_146af0070;
  auVar10._4_4_ = *(uint *)(param_2 + 0x234) & uRam0000000146af0074;
  auVar10._8_4_ = *(uint *)(param_2 + 0x238) & uRam0000000146af0078;
  auVar10._12_4_ = *(uint *)(param_2 + 0x23c) & uRam0000000146af007c;
  auVar11._4_4_ = auVar10._8_4_;
  auVar11._0_4_ = auVar10._4_4_;
  auVar11._8_4_ = auVar10._0_4_;
  auVar11._12_4_ = auVar10._12_4_;
  auVar11 = maxps(auVar10,auVar11);
  auVar3._4_4_ = auVar10._0_4_;
  auVar3._0_4_ = auVar10._8_4_;
  auVar3._8_4_ = auVar10._4_4_;
  auVar3._12_4_ = auVar10._12_4_;
  auVar11 = maxps(auVar11,auVar3);
  if (*(longlong *)(param_2 + 0x6f0) == 0) {
    param_1[0x77] = 0;
    fVar12 = 0.0;
    *(undefined4 *)((longlong)param_1 + 0x3c4) = 0;
    fVar9 = 0.0;
    fVar8 = 0.0;
  }
  else {
    param_1[0x77] = *(longlong *)(param_2 + 0x6f0);
    fVar8 = *(float *)(param_2 + 0x704);
    if (fVar8 == 0.0) {
      fVar8 = (float)(**(code **)(**(longlong **)(param_2 + 0x6f0) + 0x2b0))();
    }
    *(float *)((longlong)param_1 + 0x3c4) = fVar8;
    fVar9 = *(float *)(param_2 + 0x70c);
    if (fVar9 == 0.0) {
      fVar9 = (float)(**(code **)(**(longlong **)(param_2 + 0x6f0) + 0x2b8))();
      fVar8 = *(float *)((longlong)param_1 + 0x3c4);
    }
    fVar8 = fVar8 * auVar11._0_4_ * param_3 * 0.25;
    fVar12 = fVar9 * auVar11._0_4_ * param_3 * 0.25;
  }
  *(float *)((longlong)param_1 + 0x3ac) = fVar8;
  *(float *)((longlong)param_1 + 0x3cc) = fVar9;
  *(float *)(param_1 + 0x76) = fVar12;
  lVar2 = *(longlong *)(param_2 + 0x118);
  if (lVar2 != 0) {
    lVar6 = FUN_1429a6e30();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (lVar6 = *(longlong *)(lVar2 + 0x458), lVar6 != 0)) {
      local_38 = (float)*(byte *)(lVar6 + 0x2ea) * 0.003921569;
      fStack_34 = (float)*(byte *)(lVar6 + 0x2e9) * 0.003921569;
      fStack_30 = (float)*(byte *)(lVar6 + 0x2e8) * 0.003921569;
      fStack_2c = (float)*(byte *)(lVar6 + 0x2eb) * 0.003921569;
      *(float *)(param_1 + 0x7a) = local_38;
      *(float *)((longlong)param_1 + 0x3d4) = fStack_34;
      *(float *)(param_1 + 0x7b) = fStack_30;
      *(float *)((longlong)param_1 + 0x3dc) = fStack_2c;
      *(undefined4 *)((longlong)param_1 + 0x3dc) = 0x437f0000;
    }
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) & 0xfffffffd;
    uVar7 = AActor::GetLevel(lVar2);
    FLevelUtils::FindStreamingLevel(uVar7);
  }
  cVar5 = (**(code **)(*DAT_146b17150 + 0x308))(DAT_146b17150,param_2,local_res10);
  if (cVar5 != '\0') {
    FLinearColor::FLinearColor(&local_38,local_res10);
  }
  return param_1;
}



// FUNCTION 142326bf0 FUN_142326bf0 body=426 status=ok
// SIG undefined FUN_142326bf0(void)

longlong FUN_142326bf0(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                      undefined4 *param_5,undefined8 *param_6,undefined4 param_7,undefined4 param_8,
                      undefined1 param_9,undefined8 *param_10,undefined8 *param_11,longlong param_12
                      ,undefined4 param_13,undefined4 *param_14)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  
  FUN_142325210();
  plVar1 = (longlong *)(param_1 + 0xf0);
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(undefined4 *)(param_1 + 0xa8) = *param_3;
  *(undefined4 *)(param_1 + 0xac) = uVar4;
  *(undefined4 *)(param_1 + 0xb0) = uVar5;
  *(undefined4 *)(param_1 + 0xb4) = uVar6;
  FUN_1423007f0(param_1 + 8,param_4);
  uVar4 = param_5[1];
  uVar5 = param_5[2];
  uVar6 = param_5[3];
  *(undefined4 *)(param_1 + 0x80) = *param_5;
  *(undefined4 *)(param_1 + 0x84) = uVar4;
  *(undefined4 *)(param_1 + 0x88) = uVar5;
  *(undefined4 *)(param_1 + 0x8c) = uVar6;
  uVar4 = param_5[5];
  uVar5 = param_5[6];
  uVar6 = param_5[7];
  *(undefined4 *)(param_1 + 0x90) = param_5[4];
  *(undefined4 *)(param_1 + 0x94) = uVar4;
  *(undefined4 *)(param_1 + 0x98) = uVar5;
  *(undefined4 *)(param_1 + 0x9c) = uVar6;
  uVar2 = *param_6;
  *(undefined4 *)(param_1 + 0xb8) = param_7;
  *(undefined4 *)(param_1 + 0xc0) = param_8;
  *(undefined8 *)(param_1 + 0xa0) = uVar2;
  *(undefined4 *)(param_1 + 0xbc) = param_13;
  FWeakObjectPtr::operator=(param_1,param_2);
  *(undefined8 *)(param_1 + 200) = *param_10;
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_10 + 1);
  *(undefined8 *)(param_1 + 0xd4) = *param_11;
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_11 + 1);
  puVar8 = &DAT_1464aa810;
  if (param_14 != (undefined4 *)0x0) {
    puVar8 = param_14;
  }
  uVar4 = puVar8[1];
  uVar5 = puVar8[2];
  uVar6 = puVar8[3];
  *(undefined4 *)(param_1 + 0xe0) = *puVar8;
  *(undefined4 *)(param_1 + 0xe4) = uVar4;
  *(undefined4 *)(param_1 + 0xe8) = uVar5;
  *(undefined4 *)(param_1 + 0xec) = uVar6;
  if (param_12 == 0) {
    if ((*(int *)(param_1 + 0xf8) != 0) && (plVar3 = (longlong *)*plVar1, plVar3 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      if (*plVar1 != 0) {
        lVar7 = FMemory::Realloc(*plVar1,0,0);
        *plVar1 = lVar7;
      }
      *(undefined4 *)(param_1 + 0xf8) = 0;
    }
  }
  else {
    TBaseDelegate<FSlateBrush_const_*>::operator=(plVar1);
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  if ((*(int *)(param_1 + 0x10c) < 0) && (*(int *)(param_1 + 0x10c) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x100,0);
  }
  *(undefined1 *)(param_1 + 0x110) = param_9;
  return param_1;
}



// FUNCTION 142326da0 FUN_142326da0 body=52 status=ok
// SIG undefined FUN_142326da0(void)

longlong FUN_142326da0(longlong param_1)

{
  FUN_142325210();
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  return param_1;
}



// FUNCTION 142326de0 FWorldAsyncTraceState body=86 status=ok
// SIG undefined FWorldAsyncTraceState(void)

undefined8 * FWorldAsyncTraceState::FWorldAsyncTraceState(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  return param_1;
}



// FUNCTION 142326e40 FUN_142326e40 body=359 status=ok
// SIG undefined FUN_142326e40(void)

undefined8 * FUN_142326e40(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1450457f0;
  param_1[5] = &PTR_LAB_144198018;
  FTickFunction::FTickFunction(param_1 + 6);
  param_1[6] = &PTR__scalar_deleting_destructor__1450457d8;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x461c4000;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  FUN_14246d590(param_1 + 0x28);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 2;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  uVar1 = FUN_1428dfc70();
  uVar1 = UObjectBaseUtility::GetTypedOuter(param_1,uVar1);
  param_1[0x23] = uVar1;
  *(undefined1 *)(param_1 + 7) = 2;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfd | 4;
  FUN_14288e3d0(param_1 + 6,0);
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) & 0xef;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe;
  *(byte *)((longlong)param_1 + 0xb9) = *(byte *)((longlong)param_1 + 0xb9) | 0x1c;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) & 0xef | 8;
  *(undefined1 *)((longlong)param_1 + 0xca) = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  return param_1;
}



// FUNCTION 142326fb0 FUN_142326fb0 body=506 status=ok
// SIG undefined FUN_142326fb0(void)

undefined8 * FUN_142326fb0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1450457f0;
  param_1[5] = &PTR_LAB_144198018;
  FTickFunction::FTickFunction(param_1 + 6);
  param_1[6] = &PTR__scalar_deleting_destructor__1450457d8;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x461c4000;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  FUN_14246d590(param_1 + 0x28);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 2;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  uVar1 = FUN_1428dfc70();
  uVar1 = UObjectBaseUtility::GetTypedOuter(param_1,uVar1);
  param_1[0x23] = uVar1;
  *(undefined1 *)(param_1 + 7) = 2;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfd | 4;
  FUN_14288e3d0(param_1 + 6,0);
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) & 0xef;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe;
  *(byte *)((longlong)param_1 + 0xb9) = *(byte *)((longlong)param_1 + 0xb9) | 0x1c;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) & 0xef | 8;
  *param_1 = &PTR_FUN_145046f68;
  param_1[5] = &PTR_LAB_144e93690;
  *(undefined1 *)((longlong)param_1 + 0xca) = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  return param_1;
}



// FUNCTION 1423271b0 FUN_1423271b0 body=294 status=ok
// SIG undefined FUN_1423271b0(void)

undefined8 * FUN_1423271b0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_14237eb90();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_145047360;
  param_1[5] = &PTR_LAB_145047c50;
  param_1[0x5a] = &PTR_LAB_145047c80;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146af0288) {
    _Init_thread_header(&DAT_146af0288);
    if (DAT_146af0288 == -1) {
      FName::FName(&DAT_146af0268,L"Misc",1);
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146af0270,L"Misc",L"SpriteCategory",L"Misc");
      atexit(FUN_143ea9370);
      _Init_thread_footer(&DAT_146af0288);
    }
  }
  FUN_142717130(param_1,DAT_146aefc58);
  *(byte *)((longlong)param_1 + 0x24c) = *(byte *)((longlong)param_1 + 0x24c) | 0x40;
  *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) | 0x40;
  *(undefined4 *)(param_1 + 0xde) = 0xffff0000;
  *(undefined4 *)((longlong)param_1 + 0x6f4) = 0x3f800000;
  FUN_1423974f0(param_1,0);
  *(undefined1 *)(param_1 + 0xdf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6fc) = 0x3b23d70a;
  return param_1;
}



// FUNCTION 1423272e0 FUN_1423272e0 body=1026 status=ok
// SIG undefined FUN_1423272e0(void)

undefined8 * FUN_1423272e0(undefined8 *param_1)

{
  BOOL BVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  undefined8 *local_res18;
  longlong *local_18;
  undefined8 **local_10;
  
  FUN_14237f6c0();
  *param_1 = &PTR_FUN_145045be8;
  param_1[5] = &PTR_LAB_145046158;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5f] = 0;
  param_1[0x67] = &PTR_FUN_143f48bb8;
  *(undefined2 *)(param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0xc2700000;
  param_1[0x69] = 0x43c80000;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0x45610000;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x6c);
  *(byte *)((longlong)param_1 + 0x3d9) = *(byte *)((longlong)param_1 + 0x3d9) & 0xfc;
  param_1[0x67] = &PTR_FUN_143f48bc8;
  *(undefined1 *)(param_1 + 0x7b) = 0x83;
  *(undefined4 *)((longlong)param_1 + 0x3da) = 0x30000;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3e4) = 0x43480000;
  *(undefined4 *)(param_1 + 0x7d) = 0x453b8000;
  *(undefined4 *)((longlong)param_1 + 0x3ec) = 0x45bb8000;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x7e);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x8d);
  *(float *)((longlong)param_1 + 0x52c) = *(float *)(param_1 + 0x69);
  *(undefined4 *)(param_1 + 0x9c) = 0x469c4000;
  *(undefined8 *)((longlong)param_1 + 0x4e4) = 0x469c4000;
  *(undefined4 *)((longlong)param_1 + 0x4ec) = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0x41f00000;
  *(float *)(param_1 + 0xa6) = *(float *)(param_1 + 0x69) + *(float *)(param_1 + 0x6b);
  *(undefined4 *)((longlong)param_1 + 0x4f4) = 0x42700000;
  *(undefined4 *)(param_1 + 0x9f) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4fc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x504) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa1) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x50c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa2) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x514) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa3) = 0x469c4000;
  *(undefined4 *)((longlong)param_1 + 0x51c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa4) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x524) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0xa5) = 0x3f733333;
  *(undefined4 *)((longlong)param_1 + 0x534) = 0x3e4ccccd;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0xa7);
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 2;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 2;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 2;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 2;
  FWeakObjectPtr::operator=(param_1 + 0xd2,0);
  param_1[0xd3] = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x6a4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6ac) = 0;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 3;
  *(byte *)((longlong)param_1 + 0xb9) = *(byte *)((longlong)param_1 + 0xb9) | 0x40;
  *(byte *)((longlong)param_1 + 0x24d) = *(byte *)((longlong)param_1 + 0x24d) | 10;
  *(byte *)((longlong)param_1 + 0x2f1) = *(byte *)((longlong)param_1 + 0x2f1) & 0xfe;
  *(byte *)((longlong)param_1 + 0x2f2) = *(byte *)((longlong)param_1 + 0x2f2) & 0xf1;
  *(undefined4 *)(param_1 + 0x62) = 0x3f800000;
  *(byte *)(param_1 + 0x5e) = *(byte *)(param_1 + 0x5e) & 0x54 | 10;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0x3f800000;
  *(undefined4 *)(param_1 + 100) = 0x461c4000;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x61) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0x3f800000;
  param_1[0x65] = 0x469c4000;
  *(undefined4 *)(param_1 + 0xbd) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x314) = 10;
  *(undefined4 *)(param_1 + 99) = 100;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0xffffffff;
  LOCK();
  UNLOCK();
  lVar2 = DAT_146aefe30 + 1;
  DAT_146aefe30 = DAT_146aefe30 + 1;
  param_1[0xd6] = lVar2;
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aefff8);
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aefff8);
  }
  local_10 = &local_res18;
  local_res18 = param_1;
  local_18 = param_1 + 0xd6;
  FUN_141a636d0(&DAT_146531c90,local_res8,&local_18,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aefff8);
  return param_1;
}



// FUNCTION 1423276f0 FUN_1423276f0 body=130 status=ok
// SIG undefined FUN_1423276f0(void)

undefined8 * FUN_1423276f0(undefined8 *param_1)

{
  FUN_14237eb90();
  *param_1 = &PTR_FUN_145047e70;
  param_1[5] = &PTR_LAB_145047c50;
  param_1[0x5a] = &PTR_LAB_145047c80;
  FUN_142717130(param_1,DAT_146aefc58);
  *(uint *)(param_1 + 0xdf) = *(uint *)(param_1 + 0xdf) & 0xfffffffe;
  *(byte *)((longlong)param_1 + 0x24c) = *(byte *)((longlong)param_1 + 0x24c) | 0x50;
  *(undefined8 *)((longlong)param_1 + 0x704) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6fc) = 0x3b23d70a;
  FUN_1423974f0(param_1,0);
  *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) | 0x40;
  return param_1;
}



// FUNCTION 142327780 FUN_142327780 body=105 status=ok
// SIG undefined FUN_142327780(void)

undefined8 * FUN_142327780(undefined8 *param_1)

{
  FUN_1423a0060();
  *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) | 0x40;
  *param_1 = &PTR__scalar_deleting_destructor__1450488e8;
  param_1[5] = &PTR_LAB_1450491d8;
  param_1[0x5a] = &PTR_LAB_145049208;
  param_1[0xe2] = 0x4200000042000000;
  *(undefined4 *)(param_1 + 0xe3) = 0x42000000;
  return param_1;
}



// FUNCTION 1423277f0 FUN_1423277f0 body=121 status=ok
// SIG undefined FUN_1423277f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1423277f0(undefined8 *param_1)

{
  FUN_14237eb90();
  *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) & 0xcf;
  *(byte *)((longlong)param_1 + 0x24c) = *(byte *)((longlong)param_1 + 0x24c) | 0x40;
  *(byte *)((longlong)param_1 + 0x2f1) = *(byte *)((longlong)param_1 + 0x2f1) | 1;
  *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) | 0x40;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
  *param_1 = &PTR_FUN_1450493d8;
  param_1[5] = &PTR_LAB_145047c50;
  param_1[0x5a] = &PTR_LAB_145047c80;
  param_1[0xe0] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xe1) = DAT_1468b5d98;
  return param_1;
}



// FUNCTION 142327870 FUN_142327870 body=112 status=ok
// SIG undefined FUN_142327870(void)

undefined8 * FUN_142327870(undefined8 *param_1)

{
  FUN_1423a0060();
  *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) | 0x40;
  *param_1 = &PTR__scalar_deleting_destructor__145049e38;
  param_1[5] = &PTR_LAB_1450491d8;
  param_1[0x5a] = &PTR_LAB_145049208;
  *(undefined4 *)(param_1 + 0xde) = 0xffdf959d;
  *(undefined4 *)((longlong)param_1 + 0x714) = 0x41b00000;
  *(undefined4 *)(param_1 + 0xe2) = 0x42300000;
  return param_1;
}



// FUNCTION 1423278e0 FUN_1423278e0 body=1996 status=ok
// SIG undefined FUN_1423278e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1423278e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_14235eec0();
  *(undefined1 *)((longlong)param_1 + 0x22c) = 1;
  *param_1 = &PTR_FUN_14504a8b8;
  param_1[5] = &PTR_LAB_14504b370;
  param_1[0x42] = &PTR_LAB_14504b3a0;
  param_1[0x43] = &PTR_LAB_14504b410;
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x274);
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x50);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x28c);
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x53);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x2a4);
  *(uint *)(param_1 + 0x82) = *(uint *)(param_1 + 0x82) & 0xfffffff8;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0;
  *(undefined4 *)((longlong)param_1 + 0x484) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x91) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x92) = 0;
  *(undefined4 *)((longlong)param_1 + 0x494) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x93) = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x84,0,0x90);
  *(undefined4 *)((longlong)param_1 + 0x42c) = 0x3f800000;
  param_1[0x9f] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xa0) = DAT_1468b5d98;
  param_1[0xa1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x574) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xaf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x57c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x584) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb1) = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0xa2,0,0x90);
  *(undefined4 *)((longlong)param_1 + 0x51c) = 0x3f800000;
  FTickFunction::FTickFunction(param_1 + 0xb7);
  param_1[0xb7] = &PTR__scalar_deleting_destructor__14504a8a0;
  FRootMotionSourceGroup::FRootMotionSourceGroup(param_1 + 0xc5);
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c4) = 0;
  uVar3 = uRam0000000146af005c;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  *(undefined4 *)(param_1 + 0xfa) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7d4) = 0;
  *(undefined4 *)(param_1 + 0xfb) = 0;
  *(uint *)((longlong)param_1 + 0x7dc) = uVar3;
  uVar3 = uRam0000000146af0054 & uRam0000000146af0064;
  uVar4 = uRam0000000146af0058 & uRam0000000146af0068;
  uVar5 = uRam0000000146af005c & uRam0000000146af006c;
  *(uint *)(param_1 + 0xfe) = _DAT_146af0050 & _DAT_146af0060;
  *(uint *)((longlong)param_1 + 0x7f4) = uVar3;
  *(uint *)(param_1 + 0xff) = uVar4;
  *(uint *)((longlong)param_1 + 0x7fc) = uVar5;
  param_1[0x103] = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  param_1[0x105] = 0;
  *(undefined4 *)(param_1 + 0x106) = 0;
  *(undefined1 *)(param_1 + 0x109) = 0;
  param_1[0x10a] = 0;
  *(undefined1 *)(param_1 + 0x10b) = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  *(undefined1 *)(param_1 + 0x10e) = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  *(byte *)((longlong)param_1 + 0x5c4) = *(byte *)((longlong)param_1 + 0x5c4) & 0xfb | 2;
  *(undefined1 *)(param_1 + 0xb8) = 4;
  *(uint *)(param_1 + 0x45) = *(uint *)(param_1 + 0x45) | 1;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0x43b4000000000000;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined4 *)(param_1 + 0x46) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4e) = 0x41000000;
  *(undefined4 *)(param_1 + 0x47) = 0x43d20000;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0x3f35c28f;
  *(undefined4 *)(param_1 + 0x48) = 0x42330f72;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0x42340000;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0x42200000;
  FUN_14246fd50(param_1 + 0x53,0x44160000);
  FUN_14246fd50((longlong)param_1 + 0x274,0x44160000);
  FUN_14246fd50((longlong)param_1 + 0x28c,0x43960000);
  FUN_14246fd40((longlong)param_1 + 0x2a4,(longlong)param_1 + 0x274);
  *(undefined4 *)((longlong)param_1 + 0x3bc) = 0x3d4ccccd;
  *(undefined4 *)(param_1 + 0x78) = 8;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0x43fa0000;
  *(undefined4 *)(param_1 + 0x79) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x7a) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x3e4) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x7d) = 0x3c23d70a;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x7b) = 0x3d072b02;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = 0x3d23d70a;
  *(undefined4 *)(param_1 + 0x7c) = 0x3d072b02;
  *(undefined4 *)((longlong)param_1 + 0x3ec) = 0x43800000;
  *(undefined4 *)(param_1 + 0x7e) = 0x43c00000;
  *(undefined1 *)((longlong)param_1 + 0x3f4) = 2;
  *(undefined4 *)(param_1 + 0x72) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x394) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x7f) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x3fc) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x80) = 0x3d4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x404) = 0x41700000;
  *(undefined4 *)(param_1 + 0x69) = 0x3f000000;
  FUN_14246fd50(param_1 + 0x50,*(float *)(param_1 + 0x4f) * 0.5);
  *(undefined4 *)(param_1 + 0x62) = 0x42200000;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0x43d20000;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0x3d4ccccd;
  *(undefined4 *)(param_1 + 0x5b) = 0x40000000;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0x41c80000;
  *(undefined4 *)(param_1 + 0x56) = 0x45000000;
  *(undefined4 *)(param_1 + 0x57) = 0x40000000;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0x45000000;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0;
  *(undefined4 *)(param_1 + 0x81) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x40c) = 0x41340000;
  *(undefined4 *)((longlong)param_1 + 0x34c) = 0x3f000000;
  *(undefined4 *)(param_1 + 99) = 0x42c80000;
  *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) | 0x20;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0x42200000;
  *(undefined4 *)(param_1 + 0x5d) = 0x3f800000;
  uVar1 = _DAT_1464aa818;
  param_1[0x6e] = _DAT_1464aa810;
  param_1[0x6f] = uVar1;
  param_1[0x70] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x71) = DAT_1468b5d98;
  param_1[0x73] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x74) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x4ec) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x4f4) = DAT_1468b5d98;
  *(undefined2 *)(param_1 + 0x96) = 0x401;
  *(undefined1 *)((longlong)param_1 + 0x4b2) = 1;
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0xe;
  *(uint *)((longlong)param_1 + 0x344) = *(uint *)((longlong)param_1 + 0x344) & 0xfffffffe;
  *(uint *)(param_1 + 0x102) = *(uint *)(param_1 + 0x102) & 0xfffffffe;
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0x3f800000;
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffff7f6 | 0x1724;
  *(undefined4 *)(param_1 + 0x65) = 0x43fa0000;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0x49371b00;
  *(uint *)((longlong)param_1 + 0x4b4) =
       *(uint *)((longlong)param_1 + 0x4b4) & 0xfdd3feff | 0x10801f;
  *(undefined4 *)(param_1 + 0x66) = 0xbf400000;
  *(undefined1 *)(param_1 + 100) = 1;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x67) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0x437a0000;
  *(undefined4 *)(param_1 + 0x68) = 0x40200000;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0x43700000;
  param_1[0x97] = _DAT_1468b5d90;
  uVar2 = DAT_1468b5d98;
  *(uint *)((longlong)param_1 + 0x4dc) = *(uint *)((longlong)param_1 + 0x4dc) | 1;
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x4c4) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4e4) = 0;
  *(undefined4 *)(param_1 + 0x99) = 0x43fa0000;
  uVar1 = _DAT_1464aa818;
  param_1[0x4c] = _DAT_1464aa810;
  param_1[0x4d] = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x24c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x254) = DAT_1468b5d98;
  *(undefined4 *)(param_1 + 0xb4) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0xb5) = 0x41400000;
  *(undefined4 *)((longlong)param_1 + 0x5ac) = 0x3f2b851f;
  *(undefined4 *)(param_1 + 0xb6) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5b4) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x83c) = 0;
  *(undefined1 *)(param_1 + 0x107) = 1;
  *(undefined4 *)(param_1 + 0x108) = 0x41a00000;
  *(undefined4 *)((longlong)param_1 + 0x844) = 0x3f708fb2;
  return param_1;
}



// FUNCTION 1423280b0 UCommandlet body=79 status=ok
// SIG undefined UCommandlet(void)

undefined8 * UCommandlet::UCommandlet(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__144108b00;
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
  *(uint *)(param_1 + 0xf) = *(uint *)(param_1 + 0xf) | 0x37;
  return param_1;
}



// FUNCTION 142328100 FUN_142328100 body=43 status=ok
// SIG undefined FUN_142328100(void)

undefined8 * FUN_142328100(undefined8 *param_1)

{
  UDynamicBlueprintBinding::UDynamicBlueprintBinding();
  *param_1 = &PTR_FUN_145046698;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 142328130 UPluginCommandlet body=111 status=ok
// SIG undefined UPluginCommandlet(void)

undefined8 * UPluginCommandlet::UPluginCommandlet(undefined8 *param_1)

{
  FUN_141781840();
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
  *(uint *)(param_1 + 0xf) = *(uint *)(param_1 + 0xf) | 0x37;
  *param_1 = &PTR__scalar_deleting_destructor__145046188;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(uint *)(param_1 + 0xf) = *(uint *)(param_1 + 0xf) & 0xfffffff8;
  return param_1;
}



// FUNCTION 1423281a0 USmokeTestCommandlet body=87 status=ok
// SIG undefined USmokeTestCommandlet(void)

undefined8 * USmokeTestCommandlet::USmokeTestCommandlet(undefined8 *param_1)

{
  FUN_141781840();
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
  *param_1 = &PTR__scalar_deleting_destructor__145046410;
  *(uint *)(param_1 + 0xf) = *(uint *)(param_1 + 0xf) & 0xfffffff9 | 0x39;
  return param_1;
}



// FUNCTION 142328200 ~FComponentInstanceDataCache body=165 status=ok
// SIG undefined ~FComponentInstanceDataCache(void)

void FComponentInstanceDataCache::~FComponentInstanceDataCache(ulonglong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  plVar2 = (longlong *)*param_1;
  uVar3 = (longlong)(int)param_1[1] & 0x1fffffffffffffff;
  if (plVar2 + (int)param_1[1] < plVar2) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      puVar1 = (undefined8 *)*plVar2;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      plVar2 = plVar2 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar3);
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FIntVector,FBlockUpdateInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FIntVector,FBlockUpdateInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 2);
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1423282b0 ~FSampleTrackMemoryWriter body=109 status=ok
// SIG undefined ~FSampleTrackMemoryWriter(void)

void FSampleTrackMemoryWriter::~FSampleTrackMemoryWriter(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x100);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xb0);
  FArchive::~FArchive(param_1);
  return;
}



// FUNCTION 142328320 ~FComponentPropertyWriter body=181 status=ok
// SIG undefined ~FComponentPropertyWriter(void)

void FComponentPropertyWriter::~FComponentPropertyWriter(undefined8 *param_1)

{
  BOOL BVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__145046928;
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2d));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2d));
  }
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x23,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2d));
  FUObjectAnnotationSparse<FDuplicatedObject,0>::~FUObjectAnnotationSparse<FDuplicatedObject,0>
            (param_1 + 0x22);
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x16);
  FArchive::~FArchive(param_1);
  return;
}



// FUNCTION 1423283e0 FUN_1423283e0 body=201 status=ok
// SIG undefined FUN_1423283e0(void)

void FUN_1423283e0(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 local_18;
  undefined1 local_10;
  byte local_f;
  
  cVar2 = FWeakObjectPtr::IsValid();
  if (cVar2 != '\0') {
    uVar4 = FWeakObjectPtr::Get(param_1 + 8);
    lVar5 = FWeakObjectPtr::Get(param_1);
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar7;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18;
    }
    else {
      lVar6 = 0;
    }
    if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) {
      if ((*(byte *)(lVar5 + 0xb8) & 1) != 0) {
        FUN_14233aad0(lVar5);
      }
      *(undefined8 *)(lVar5 + 0x120) = uVar4;
      local_f = local_f & 0xfd | 1;
      local_10 = 1;
      local_18 = uVar4;
      AK::MemoryMgr::StartProfileThreadUsage((long)&local_18);
      FUN_14233a6f0(lVar5);
      AK::MemoryMgr::StartProfileThreadUsage((long)&local_18);
    }
  }
  return;
}



// FUNCTION 1423284b0 ~FGlobalComponentRecreateRenderStateContext body=50 status=ok
// SIG undefined ~FGlobalComponentRecreateRenderStateContext(void)

void FGlobalComponentRecreateRenderStateContext::~FGlobalComponentRecreateRenderStateContext
               (longlong *param_1)

{
  FUN_14233a490(param_1,0);
  FUN_14233a490(param_1,0);
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1423284f0 ~FGlobalComponentReregisterContext body=56 status=ok
// SIG undefined ~FGlobalComponentReregisterContext(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FGlobalComponentReregisterContext::~FGlobalComponentReregisterContext(longlong *param_1)

{
  FUN_14233a530(param_1,0);
  _DAT_146aefe38 = _DAT_146aefe38 + -1;
  FUN_14233a530(param_1,0);
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142328530 FUN_142328530 body=447 status=ok
// SIG undefined FUN_142328530(void)

void FUN_142328530(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  *param_1 = &PTR__scalar_deleting_destructor__14504b4c0;
  TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 2,0);
  TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 4,0);
  local_30 = (longlong *)0x0;
  if (param_1 + 6 != &local_38) {
    param_1[6] = 0;
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 7,&local_30);
    plVar4 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  local_20 = (longlong *)0x0;
  if (param_1 + 8 != &local_28) {
    param_1[8] = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 9,&local_20);
    plVar4 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  if (param_1[0x29] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[9];
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
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 2);
  *param_1 = &PTR_FUN_143fcdb88;
  return;
}



// FUNCTION 1423286f0 FUN_1423286f0 body=11 status=ok
// SIG undefined FUN_1423286f0(void)

void FUN_1423286f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1440104c8;
  return;
}



// FUNCTION 142328700 FUN_142328700 body=62 status=ok
// SIG undefined FUN_142328700(void)

void FUN_142328700(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14504b468;
  param_1[0x44] = &PTR__scalar_deleting_destructor__144080980;
  FUN_14074e760(param_1 + 0x57);
  FUN_14074e810(param_1 + 0x45);
  return;
}



// FUNCTION 142328740 FUN_142328740 body=27 status=ok
// SIG undefined FUN_142328740(void)

void FUN_142328740(char *param_1)

{
  longlong *plVar1;
  
  if ((*param_1 != '\0') && (plVar1 = *(longlong **)(param_1 + 8), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000142328753. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x748))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 142328760 operator= body=173 status=ok
// SIG undefined operator=(void)

undefined4 * FBaseTraceDatum::operator=(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  FUN_1423007f0(param_1 + 2,param_2 + 2);
  uVar1 = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x22) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x26) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
  *(undefined8 *)(param_1 + 0x2c) = uVar1;
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2f] = param_2[0x2f];
  param_1[0x30] = param_2[0x30];
  return param_1;
}



// FUNCTION 142328810 operator= body=81 status=ok
// SIG undefined operator=(void)

uint * FFindFloorResult::operator=(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  *param_1 = *param_1 ^ (*param_2 ^ *param_1) & 1;
  uVar1 = (*param_2 ^ *param_1) & 2 ^ *param_1;
  *param_1 = uVar1;
  *param_1 = (*param_2 ^ uVar1) & 4 ^ uVar1;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  FUN_140729f20(param_1 + 4,param_2 + 4);
  return param_1;
}



// FUNCTION 142328870 FUN_142328870 body=192 status=ok
// SIG undefined FUN_142328870(void)

longlong FUN_142328870(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FBaseTraceDatum::operator=();
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  uVar3 = *(undefined4 *)(param_2 + 0xe4);
  uVar4 = *(undefined4 *)(param_2 + 0xe8);
  uVar5 = *(undefined4 *)(param_2 + 0xec);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = uVar3;
  *(undefined4 *)(param_1 + 0xe8) = uVar4;
  *(undefined4 *)(param_1 + 0xec) = uVar5;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0xf0,param_2 + 0xf0);
  puVar1 = (undefined8 *)(param_1 + 0x100);
  if (puVar1 != (undefined8 *)(param_2 + 0x100)) {
    _Src = *(void **)(param_2 + 0x100);
    iVar2 = *(int *)(param_2 + 0x108);
    *(int *)(param_1 + 0x108) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x10c) == 0)) {
      *(undefined4 *)(param_1 + 0x10c) = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 142328930 FUN_142328930 body=243 status=ok
// SIG undefined FUN_142328930(void)

longlong FUN_142328930(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FBaseTraceDatum::operator=();
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xd4) = *(undefined8 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  uVar3 = *(undefined4 *)(param_2 + 0xe4);
  uVar4 = *(undefined4 *)(param_2 + 0xe8);
  uVar5 = *(undefined4 *)(param_2 + 0xec);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = uVar3;
  *(undefined4 *)(param_1 + 0xe8) = uVar4;
  *(undefined4 *)(param_1 + 0xec) = uVar5;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0xf0,param_2 + 0xf0);
  puVar1 = (undefined8 *)(param_1 + 0x100);
  if (puVar1 != (undefined8 *)(param_2 + 0x100)) {
    iVar2 = *(int *)(param_2 + 0x108);
    _Src = *(void **)(param_2 + 0x100);
    *(int *)(param_1 + 0x108) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x10c) == 0)) {
      *(undefined4 *)(param_1 + 0x10c) = 0;
    }
    else {
      TArray<FLiveLinkFrame,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0x90);
    }
  }
  *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(param_2 + 0x110);
  return param_1;
}



// FUNCTION 142328a30 FUN_142328a30 body=242 status=ok
// SIG undefined FUN_142328a30(void)

longlong * FUN_142328a30(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  
  FUN_142324640(param_2,param_1);
  FUN_142324640(param_2 + 0x18,param_1);
  FUN_142324640(param_2 + 0x24,param_1);
  FUN_141636260(param_2 + 0xc,param_1);
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,(undefined1 *)(param_2 + 0x30),1);
  }
  else {
    *(undefined1 *)(param_2 + 0x30) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  if ((*(byte *)(param_1 + 5) & 2) == 0) {
    cVar3 = (**(code **)(*param_1 + 0xa0))(param_1);
    if (cVar3 != '\0') {
      return param_1;
    }
    if ((char)param_1[5] < '\0') {
      return param_1;
    }
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x34,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x34,4);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 0x34) = *puVar2;
  *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  return param_1;
}



// FUNCTION 142328b30 FUN_142328b30 body=591 status=ok
// SIG undefined FUN_142328b30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_142328b30(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  undefined4 local_170;
  undefined4 local_168;
  int local_158 [2];
  longlong local_150;
  longlong *local_148;
  longlong **local_140;
  longlong *local_138;
  longlong *local_130;
  undefined1 local_128 [16];
  longlong local_118;
  undefined1 local_e8 [64];
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_90 [64];
  longlong local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  lVar5 = 0;
  local_150 = 0;
  FUN_141715c00(param_1,&local_150);
  if (((local_150 == 0) || (*(longlong *)(param_1 + 0xa0) == 0)) ||
     (cVar3 = UObjectBaseUtility::IsIn(local_150), lVar6 = local_150, cVar3 == '\0')) {
    *param_2 = local_150;
  }
  else {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0xb0,local_158,local_150);
    if ((local_158[0] != -1) &&
       (lVar1 = *(longlong *)(param_1 + 0xb0) + (longlong)local_158[0] * 0x18, lVar1 != 0)) {
      lVar5 = *(longlong *)(lVar1 + 8);
    }
    *param_2 = lVar5;
    if (lVar5 == 0) {
      FUN_1417812e0(local_128,lVar6,*(undefined8 *)(param_1 + 0xa8));
      lVar5 = *param_2;
      lVar6 = *(longlong *)(local_150 + 0x18);
      local_118 = lVar6;
      if ((lVar5 == 0) || (*(longlong *)(lVar5 + 0x18) != lVar6)) {
        uVar2 = *(undefined8 *)(param_1 + 0xa8);
        uVar4 = UObject::GetPrivateStaticClass();
        local_168 = 0;
        local_170 = 0;
        local_178 = 0;
        lVar5 = FUN_141799680(uVar4,uVar2,lVar6,0);
        *param_2 = lVar5;
      }
      if (lVar5 != 0) {
        local_138 = &local_150;
        local_130 = param_2;
        TSet<TTuple<UFlareCompany_*,__int64>,TDefaultMapHashableKeyFuncs<UFlareCompany_*,__int64,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UFlareCompany_*_const_&,__int64_&&>_>
                  (local_e8,local_158,&local_138,0);
        local_138 = (longlong *)FUN_14178ca30(*param_2);
        if (local_138 != (longlong *)0x0) {
          local_148 = &local_150;
          local_140 = &local_138;
          TSet<TTuple<UFlareCompany_*,__int64>,TDefaultMapHashableKeyFuncs<UFlareCompany_*,__int64,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UFlareCompany_*_const_&,__int64_&&>_>
                    (local_90,local_158,&local_148,0);
        }
      }
      lVar6 = FUN_141798990(local_128);
      *param_2 = lVar6;
      if ((lVar5 != 0) && (lVar6 != 0)) {
        FUN_1417510e0(lVar6);
      }
      local_148 = &local_150;
      local_140 = (longlong **)param_2;
      TSet<TTuple<UFlareCompany_*,__int64>,TDefaultMapHashableKeyFuncs<UFlareCompany_*,__int64,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UFlareCompany_*_const_&,__int64_&&>_>
                (param_1 + 0xb0,local_158,&local_148,0);
      local_48 = 0;
      if (local_50 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (local_90);
      local_a0 = 0;
      if (local_a8 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (local_e8);
    }
  }
  return param_1;
}



// FUNCTION 142328d80 FUN_142328d80 body=129 status=ok
// SIG undefined FUN_142328d80(void)

longlong * FUN_142328d80(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong local_res8;
  
  local_res8 = *param_2;
  if (local_res8 != 0) {
    plVar3 = (longlong *)param_1[0x21];
    uVar1 = *(undefined4 *)(param_1[0x13] + 8);
    iVar2 = (int)plVar3[1];
    *(int *)(plVar3 + 1) = iVar2 + 1;
    if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
    }
    *(undefined4 *)(*plVar3 + (longlong)iVar2 * 4) = uVar1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,&local_res8,8);
  return param_1;
}



// FUNCTION 142328e10 FUN_142328e10 body=724 status=ok
// SIG undefined FUN_142328e10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142328e10(longlong *param_1)

{
  uint *puVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  longlong local_170;
  undefined1 local_168;
  undefined1 local_160;
  undefined1 local_158;
  undefined8 local_148;
  float local_140;
  undefined8 local_138;
  float local_130;
  undefined1 local_128 [16];
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  cVar2 = (**(code **)(*(longlong *)*param_1 + 0x5c0))();
  if ((cVar2 != '\0') && (cVar2 = (**(code **)(*(longlong *)*param_1 + 0x2a0))(), cVar2 != '\0')) {
    local_130 = (float)param_1[3];
    local_148 = *(undefined8 *)((longlong)param_1 + 0xc);
    local_140 = *(float *)((longlong)param_1 + 0x14);
    local_138 = 0;
    local_178 = FWeakObjectPtr::Get((longlong)param_1 + 0x1c);
    local_158 = *(undefined1 *)((longlong)param_1 + 0x32);
    local_160 = *(undefined1 *)((longlong)param_1 + 0x31);
    local_168 = (undefined1)param_1[6];
    local_170 = param_1[5];
    (**(code **)(*(longlong *)*param_1 + 0xa18))
              ((longlong *)*param_1,(int)param_1[1],&local_148,&local_138);
    lVar4 = *param_1;
    lVar3 = *(longlong *)(lVar4 + 0x610);
    if (lVar3 == 0) {
      lVar3 = (**(code **)(*(longlong *)(lVar4 + 0x218) + 0x28))();
      *(longlong *)(lVar4 + 0x610) = lVar3;
    }
    if ((*(longlong *)(lVar3 + 0x40) != 0) &&
       (*(float *)(param_1 + 1) == *(float *)(*(longlong *)(lVar3 + 0x40) + 0x1c))) {
      local_140 = *(float *)((longlong)param_1 + 0x3c) * 180.0;
      local_148 = CONCAT44(*(float *)(param_1 + 7) * 180.0,
                           *(float *)((longlong)param_1 + 0x34) * 180.0);
      local_130 = local_140;
      AActor::SetActorRotation(*(undefined8 *)(*param_1 + 0x220),&local_148,0);
      FUN_142436b30(local_128,(longlong)param_1 + 0xc,*(undefined8 *)(*param_1 + 0x178));
      if ((((char)param_1[0x28] != '\0') &&
          ((((*(byte *)(*(longlong *)(*param_1 + 0x220) + 0x56c) & 0x20) != 0 ||
            (*(float *)(*(longlong *)(lVar3 + 0x40) + 0x1d0) !=
             *(float *)((longlong)param_1 + 0x144))) && (lVar4 = FUN_142312520(), lVar4 != 0)))) &&
         (*(int *)(lVar4 + 0x188) < 1)) {
        *(undefined4 *)(lVar4 + 0x128) = *(undefined4 *)((longlong)param_1 + 0x144);
        *(undefined4 *)(lVar4 + 0x30) = 0xfffffffe;
        *(undefined4 *)(lVar4 + 0x38) = 0xfffffffe;
        puVar1 = (uint *)(*(longlong *)(*param_1 + 0x220) + 0x56c);
        *puVar1 = *puVar1 | 0x20;
      }
      FUN_142326440(local_118,param_1 + 8);
      FUN_142337270(*param_1,*(longlong *)(lVar3 + 0x40) + 0x220,local_118,(int)param_1[1]);
      FRootMotionSourceGroup::CullInvalidSources(local_118);
      if (((*(byte *)(*(longlong *)(*param_1 + 0x220) + 0x56c) & 0x40) != 0) ||
         (cVar2 = FRootMotionSourceGroup::operator!=(local_118,*(longlong *)(lVar3 + 0x40) + 0x220),
         cVar2 != '\0')) {
        FUN_14243f720(*(longlong *)(*param_1 + 0x220) + 0x5d0,local_118);
        puVar1 = (uint *)(*(longlong *)(*param_1 + 0x220) + 0x56c);
        *puVar1 = *puVar1 | 0x40;
      }
      FRootMotionSourceGroup::~FRootMotionSourceGroup(local_118);
    }
  }
  return;
}



// FUNCTION 1423290f0 FUN_1423290f0 body=445 status=ok
// SIG undefined FUN_1423290f0(void)

void FUN_1423290f0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  uVar2 = FWeakObjectPtr::Get();
  cVar1 = FUN_142314560(uVar2);
  local_18 = *(undefined8 *)(param_1 + 0x38);
  local_10 = *(undefined4 *)(param_1 + 0x40);
  if (cVar1 != '\0') {
    local_28 = *(undefined8 *)(param_1 + 0x2c);
    local_20 = *(undefined4 *)(param_1 + 0x34);
    local_38 = local_18;
    local_30 = local_10;
    local_18 = *(undefined8 *)(param_1 + 0x14);
    local_10 = *(undefined4 *)(param_1 + 0x1c);
    uVar2 = FWeakObjectPtr::Get(param_1);
    FUN_142913690(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x220),
                  *(undefined4 *)(param_1 + 0x10),&local_18,*(undefined1 *)(param_1 + 0x20),
                  *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),&local_28,
                  &local_38,*(undefined1 *)(param_1 + 0x44),*(undefined1 *)(param_1 + 0x45),
                  *(undefined4 *)(param_1 + 0x48),uVar2,*(undefined8 *)(param_1 + 0x50),
                  *(undefined1 *)(param_1 + 0x58),*(undefined2 *)(param_1 + 0x5a));
    return;
  }
  local_20 = *(undefined4 *)(param_1 + 0x34);
  local_30 = *(undefined4 *)(param_1 + 0x1c);
  local_28 = *(undefined8 *)(param_1 + 0x2c);
  local_38 = *(undefined8 *)(param_1 + 0x14);
  FUN_142913890(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x220),*(undefined4 *)(param_1 + 0x10),
                &local_38,*(undefined1 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                *(undefined4 *)(param_1 + 0x28),&local_28,&local_18,*(undefined1 *)(param_1 + 0x44),
                *(undefined1 *)(param_1 + 0x45),*(undefined4 *)(param_1 + 0x48),
                *(undefined1 *)(param_1 + 0x58),*(undefined2 *)(param_1 + 0x5a));
  return;
}



// FUNCTION 1423292b0 FUN_1423292b0 body=506 status=ok
// SIG undefined FUN_1423292b0(void)

void FUN_1423292b0(longlong *param_1)

{
  uint *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_38;
  float local_30;
  undefined8 local_28;
  float local_20;
  undefined1 local_18 [16];
  
  cVar2 = (**(code **)(*(longlong *)*param_1 + 0x5c0))();
  if ((cVar2 != '\0') && (cVar2 = (**(code **)(*(longlong *)*param_1 + 0x2a0))(), cVar2 != '\0')) {
    local_30 = (float)param_1[3];
    local_28 = *(undefined8 *)((longlong)param_1 + 0xc);
    local_20 = *(float *)((longlong)param_1 + 0x14);
    local_38 = 0;
    uVar3 = FWeakObjectPtr::Get((longlong)param_1 + 0x1c);
    (**(code **)(*(longlong *)*param_1 + 0xa18))
              ((longlong *)*param_1,(int)param_1[1],&local_28,&local_38,uVar3,param_1[5],
               (char)param_1[6],*(undefined1 *)((longlong)param_1 + 0x31),
               *(undefined1 *)((longlong)param_1 + 0x32));
    lVar5 = *param_1;
    lVar4 = *(longlong *)(lVar5 + 0x610);
    if (lVar4 == 0) {
      lVar4 = (**(code **)(*(longlong *)(lVar5 + 0x218) + 0x28))();
      *(longlong *)(lVar5 + 0x610) = lVar4;
    }
    if ((*(longlong *)(lVar4 + 0x40) != 0) &&
       (*(float *)(param_1 + 1) == *(float *)(*(longlong *)(lVar4 + 0x40) + 0x1c))) {
      local_30 = *(float *)((longlong)param_1 + 0x3c) * 180.0;
      local_28 = CONCAT44(*(float *)(param_1 + 7) * 180.0,
                          *(float *)((longlong)param_1 + 0x34) * 180.0);
      local_20 = local_30;
      AActor::SetActorRotation(*(undefined8 *)(*param_1 + 0x220),&local_28,0);
      FUN_142436b30(local_18,(longlong)param_1 + 0xc,*(undefined8 *)(*param_1 + 0x178));
      if ((((*(byte *)(*(longlong *)(*param_1 + 0x220) + 0x56c) & 0x20) != 0) ||
          (*(float *)(*(longlong *)(lVar4 + 0x40) + 0x1d0) != *(float *)(param_1 + 8))) &&
         ((lVar5 = FUN_142312520(), lVar5 != 0 && (*(int *)(lVar5 + 0x188) < 1)))) {
        *(int *)(lVar5 + 0x128) = (int)param_1[8];
        *(undefined4 *)(lVar5 + 0x30) = 0xfffffffe;
        *(undefined4 *)(lVar5 + 0x38) = 0xfffffffe;
        puVar1 = (uint *)(*(longlong *)(*param_1 + 0x220) + 0x56c);
        *puVar1 = *puVar1 | 0x20;
      }
    }
  }
  return;
}



// FUNCTION 1423294b0 FUN_1423294b0 body=354 status=ok
// SIG undefined FUN_1423294b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423294b0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float local_38;
  float local_34;
  float local_30;
  float local_20;
  
  lVar5 = *param_1;
  plVar4 = *(longlong **)(lVar5 + 0x220);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x8d0))(plVar4,param_1 + 1);
    lVar5 = *param_1;
  }
  lVar5 = *(longlong *)(lVar5 + 0x1f8);
  if (lVar5 != 0) {
    uVar3 = UPathFollowingAgentInterface::GetPrivateStaticClass();
    plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar3);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,param_1 + 1);
    }
  }
  lVar5 = FWeakObjectPtr::Get((longlong)param_1 + 0x74);
  if (lVar5 != 0) {
    lVar6 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*(longlong *)*param_1 + 0x590))((longlong *)*param_1,lVar5);
    }
  }
  if (*(char *)(*param_1 + 0x31c) != '\0') {
    cVar2 = (**(code **)(*(longlong *)*param_1 + 0x558))();
    if (cVar2 == '\0') {
      fVar7 = (float)_DAT_1468b5d90;
      local_34 = (float)((ulonglong)_DAT_1468b5d90 >> 0x20);
      local_20 = DAT_1468b5d98;
      local_30 = DAT_1468b5d98;
    }
    else {
      fVar7 = 0.0;
      local_30 = (float)(**(code **)(*(longlong *)*param_1 + 0x3f8))();
      local_34 = 0.0;
    }
    plVar4 = (longlong *)*param_1;
    local_30 = local_30 + *(float *)(plVar4 + 0x6b);
    local_34 = local_34 + *(float *)((longlong)plVar4 + 0x354);
    local_38 = fVar7 + *(float *)(plVar4 + 0x6a);
    (**(code **)(*plVar4 + 0x850))(plVar4,param_1 + 1,&local_38,(longlong)plVar4 + 0x18c);
  }
  return;
}



// FUNCTION 142329620 FUN_142329620 body=183 status=ok
// SIG undefined FUN_142329620(void)

void FUN_142329620(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 uVar3;
  undefined4 in_EAX;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 local_28;
  undefined4 local_20;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  lVar7 = param_1[1];
  lVar1 = *(longlong *)(lVar7 + 0x178);
  local_18 = *(float *)(lVar1 + 0x210);
  fStack_14 = *(float *)(lVar1 + 0x214);
  fStack_10 = *(float *)(lVar1 + 0x218);
  fStack_c = *(float *)(lVar1 + 0x21c);
  auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_14);
  auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_18);
  auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_10);
  auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_c);
  iVar4 = movmskps(in_EAX,auVar2);
  if (iVar4 != 0) {
    *(float *)(lVar1 + 0x250) = local_18;
    *(float *)(lVar1 + 0x254) = fStack_14;
    *(float *)(lVar1 + 600) = fStack_10;
    *(float *)(lVar1 + 0x25c) = fStack_c;
    puVar5 = (undefined8 *)FQuat::Rotator(&local_18,&local_28);
    *(undefined8 *)(lVar1 + 0x260) = *puVar5;
    *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar5 + 1);
    lVar7 = param_1[1];
  }
  local_28 = *(undefined8 *)(lVar1 + 0x260);
  local_20 = *(undefined4 *)(lVar1 + 0x268);
  uVar6 = FUN_14046f570(lVar7);
  uVar3 = FUN_142546cc0(uVar6,*(undefined8 *)(lVar7 + 0x220),param_1[2],&local_28);
  *(undefined1 *)*param_1 = uVar3;
  return;
}



// FUNCTION 1423296e0 FUN_1423296e0 body=558 status=ok
// SIG undefined FUN_1423296e0(void)

void FUN_1423296e0(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  BOOL BVar4;
  int iVar5;
  undefined *puVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  lVar7 = *param_1;
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aefff8);
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aefff8);
  }
  plVar11 = (longlong *)0x0;
  plVar10 = plVar11;
  if (DAT_146531c98 != DAT_146531cc4) {
    puVar6 = DAT_146531cd0;
    if (DAT_146531cd0 == (undefined *)0x0) {
      puVar6 = &DAT_146531cc8;
    }
    iVar8 = *(int *)(puVar6 + ((longlong)((int)((ulonglong)lVar7 >> 0x20) * 0x17 + (int)lVar7) &
                              (longlong)DAT_146531cd8 - 1U) * 4);
    while (iVar8 != -1) {
      lVar9 = (longlong)iVar8;
      if (*(longlong *)(DAT_146531c90 + lVar9 * 0x18) == lVar7) {
        if ((iVar8 != -1) && (lVar7 = DAT_146531c90 + lVar9 * 0x18, lVar7 != 0)) {
          plVar10 = *(longlong **)(lVar7 + 8);
        }
        break;
      }
      iVar8 = *(int *)(DAT_146531c90 + 0x10 + lVar9 * 0x18);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aefff8);
  if (plVar10 != (longlong *)0x0) {
    lVar7 = param_1[1];
    *(int *)((longlong)plVar10 + 0x32c) = *(int *)((longlong)plVar10 + 0x32c) + -1;
    if (0 < *(int *)((longlong)plVar10 + 0x32c)) {
      plVar11 = (longlong *)&DAT_00000004;
    }
    *(byte *)((longlong)plVar10 + 0xba) = (byte)plVar11 | *(byte *)((longlong)plVar10 + 0xba) & 0xfb
    ;
    if (plVar11 == (longlong *)0x0) {
      if ((((char)lVar7 == '\0') && (lVar7 = FUN_14046f570(plVar10), lVar7 != 0)) &&
         ((0 < (int)plVar10[0xbf] || (cVar3 = FUN_1404d5210(plVar10 + 0xc0), cVar3 != '\0')))) {
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (plVar10 + 0xbe,0);
        bVar2 = false;
        *(int *)((longlong)plVar10 + 0x614) = *(int *)((longlong)plVar10 + 0x614) + 1;
        iVar8 = *(int *)((longlong)plVar10 + 0x614);
        iVar5 = (int)plVar10[0xc1] + -1;
        lVar7 = (longlong)iVar5;
        if (-1 < iVar5) {
          lVar9 = lVar7 << 4;
          bVar2 = false;
          do {
            lVar1 = plVar10[0xc0];
            if (((*(int *)(lVar9 + 8 + lVar1) == 0) ||
                (plVar11 = *(longlong **)(lVar9 + lVar1), plVar11 == (longlong *)0x0)) ||
               (cVar3 = (**(code **)(*plVar11 + 0x40))(plVar11,plVar10), cVar3 == '\0')) {
              bVar2 = true;
            }
            lVar9 = lVar9 + -0x10;
            lVar7 = lVar7 + -1;
          } while (-1 < lVar7);
          iVar8 = *(int *)((longlong)plVar10 + 0x614);
        }
        *(int *)((longlong)plVar10 + 0x614) = iVar8 + -1;
        if (bVar2) {
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10 + 0xc0,0);
        }
      }
      if ((*(byte *)(plVar10 + 0x5e) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001423298c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar10 + 0x3b0))(plVar10,0);
        return;
      }
      if ((*(byte *)((longlong)plVar10 + 0x2f2) & 8) != 0) {
        FUN_1423333a0(plVar10,1);
      }
    }
  }
  return;
}



// FUNCTION 142329910 FUN_142329910 body=779 status=ok
// SIG undefined FUN_142329910(void)

void FUN_142329910(longlong *param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  undefined4 uVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  float fVar12;
  float fVar13;
  float local_58;
  float local_54;
  float local_50;
  longlong local_48;
  undefined4 local_40;
  
  uVar5 = DAT_146af00c0;
  uVar7 = FUN_14168db40();
  FCsvProfiler::BeginStat(uVar7,"CharacterMovementServerMove",uVar5);
  cVar6 = (**(code **)(*(longlong *)*param_1 + 0x5c0))();
  if ((cVar6 == '\0') || (cVar6 = (**(code **)(*(longlong *)*param_1 + 0x2a0))(), cVar6 == '\0'))
  goto LAB_142329bf9;
  plVar11 = (longlong *)*param_1;
  lVar8 = plVar11[0xc3];
  if (lVar8 == 0) {
    lVar8 = (**(code **)(plVar11[0x43] + 0x30))();
    plVar11[0xc3] = lVar8;
    plVar11 = (longlong *)*param_1;
  }
  cVar6 = (**(code **)(*plVar11 + 0x980))(plVar11);
  if (cVar6 == '\0') goto LAB_142329bf9;
  cVar6 = '\x01';
  plVar11 = *(longlong **)(*(longlong *)(*param_1 + 0x220) + 0x490);
  if (plVar11 == (longlong *)0x0) {
LAB_142329a44:
    plVar11 = (longlong *)0x0;
  }
  else {
    lVar9 = FUN_1429e18b0();
    if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_142329a44;
    cVar6 = (**(code **)(*plVar11 + 0xdf8))
                      (plVar11,*(undefined8 *)(*param_1 + 0x220),(int)param_1[1]);
  }
  uVar2 = *(ushort *)((longlong)param_1 + 0xc);
  plVar10 = param_1 + 2;
  uVar3 = *(ushort *)((longlong)param_1 + 0xe);
  if (cVar6 == '\0') {
    plVar10 = (longlong *)&DAT_1468b5d90;
  }
  local_48 = *plVar10;
  local_40 = (undefined4)plVar10[1];
  fVar12 = (float)FUN_14222dcf0(*(undefined8 *)(*param_1 + 0x220));
  if (*(char *)(lVar8 + 0x78) == '\0') {
    fVar13 = *(float *)(param_1 + 1) - *(float *)(lVar8 + 0x58);
    fVar12 = fVar12 * *(float *)(lVar8 + 0x68);
    if (fVar12 <= fVar13) {
      fVar13 = fVar12;
    }
  }
  else {
    fVar13 = *(float *)(lVar8 + 0x7c);
  }
  lVar9 = FUN_14046f570(*param_1);
  *(int *)(lVar8 + 0x58) = (int)param_1[1];
  uVar1 = *(undefined4 *)(lVar9 + 0x790);
  *(undefined4 *)(lVar8 + 8) = uVar1;
  *(undefined4 *)(lVar8 + 0x60) = uVar1;
  local_58 = (float)uVar2 * 0.005493164;
  local_54 = (float)uVar3 * 0.005493164;
  local_50 = (float)*(byte *)((longlong)param_1 + 0x1c) * 1.40625;
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x728))(plVar11,&local_58,1);
  }
  if (cVar6 != '\0') {
    lVar8 = UWorld::GetWorldSettings(lVar9,0,1);
    if ((*(longlong *)(lVar8 + 0x600) == 0) && (0.0 < fVar13)) {
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0xbc0))(plVar11);
      }
      (**(code **)(*(longlong *)*param_1 + 0x950))
                ((longlong *)*param_1,&local_48,fVar13,*(undefined1 *)((longlong)param_1 + 0x1d),
                 &local_48);
    }
    uVar7 = FWeakObjectPtr::Get((longlong)param_1 + 0x2c);
    (**(code **)(*(longlong *)*param_1 + 0x940))
              ((longlong *)*param_1,(char)param_1[8],fVar13,&local_48,param_1 + 4,uVar7,param_1[7],
               (char)param_1[8]);
  }
LAB_142329bf9:
  uVar7 = FUN_14168db40();
  FCsvProfiler::EndStat(uVar7,"CharacterMovementServerMove",uVar5);
  return;
}



// FUNCTION 142329c20 FUN_142329c20 body=128 status=ok
// SIG undefined FUN_142329c20(void)

void FUN_142329c20(longlong *param_1)

{
  undefined8 uVar1;
  longlong local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_28 = param_1[3];
  local_20 = (undefined4)param_1[4];
  local_18 = *(undefined8 *)((longlong)param_1 + 0xc);
  local_10 = *(undefined4 *)((longlong)param_1 + 0x14);
  uVar1 = FWeakObjectPtr::Get((longlong)param_1 + 0x24);
  FUN_142912420(*(undefined8 *)(*param_1 + 0x220),(int)param_1[1],&local_18,&local_28,uVar1,
                param_1[6],(char)param_1[7],*(undefined1 *)((longlong)param_1 + 0x39),
                *(undefined1 *)((longlong)param_1 + 0x3a));
  return;
}



// FUNCTION 142329ca0 FUN_142329ca0 body=363 status=ok
// SIG undefined FUN_142329ca0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142329ca0(longlong *param_1)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined1 auVar9 [16];
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  if (((*(byte *)(param_1[3] + 0x4b4) & 0x20) == 0) &&
     ((*(uint *)(param_1[3] + 0x300) & 0x2000) == 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  local_28 = param_1[1];
  lVar2 = *param_1;
  local_20 = (undefined4)param_1[2];
  pfVar1 = (float *)(lVar2 + 0x280);
  if (((*(float *)(lVar2 + 0x1f8) != *pfVar1) ||
      (*(float *)(lVar2 + 0x1fc) != *(float *)(lVar2 + 0x284))) ||
     (*(float *)(lVar2 + 0x200) != *(float *)(lVar2 + 0x288))) {
    local_38 = *(undefined8 *)*(undefined1 (*) [12])(lVar2 + 0x1f8);
    auVar9._12_4_ = 0;
    auVar9._0_12_ = *(undefined1 (*) [12])(lVar2 + 0x1f8);
    fVar3 = (float)DAT_146af0030;
    fVar4 = DAT_146af0030._4_4_;
    fVar5 = DAT_146af0030._8_4_;
    auVar9 = divps(auVar9,_DAT_146af0030);
    fVar11 = (float)local_38 - (float)(int)auVar9._0_4_ * fVar3;
    fVar12 = (float)((ulonglong)local_38 >> 0x20) - (float)(int)auVar9._4_4_ * fVar4;
    fVar13 = *(float *)(lVar2 + 0x200) - (float)(int)auVar9._8_4_ * fVar5;
    fVar11 = (float)(((uint)(fVar3 + fVar11) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                    (uint)(fVar3 + fVar11));
    fVar12 = (float)(((uint)(fVar4 + fVar12) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                    (uint)(fVar4 + fVar12));
    fVar13 = (float)(((uint)(fVar5 + fVar13) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                    (uint)(fVar5 + fVar13));
    uVar10 = ((uint)(fVar13 - fVar5) ^ (uint)fVar13) & -(uint)(fRam0000000146af0028 < fVar13) ^
             (uint)fVar13;
    uStack_30 = CONCAT44(uStack_30._4_4_,uVar10);
    *(ulonglong *)pfVar1 =
         CONCAT44(((uint)(fVar12 - fVar4) ^ (uint)fVar12) & -(uint)(fRam0000000146af0024 < fVar12) ^
                  (uint)fVar12,
                  ((uint)(fVar11 - fVar3) ^ (uint)fVar11) & -(uint)(_DAT_146af0020 < fVar11) ^
                  (uint)fVar11);
    *(uint *)(lVar2 + 0x288) = uVar10;
    puVar7 = (undefined8 *)FRotator::Quaternion(pfVar1,local_18);
    uVar6 = puVar7[1];
    *(undefined8 *)(lVar2 + 0x270) = *puVar7;
    *(undefined8 *)(lVar2 + 0x278) = uVar6;
  }
  local_38 = *(undefined8 *)(lVar2 + 0x270);
  uStack_30 = *(undefined8 *)(lVar2 + 0x278);
  FUN_142397be0(lVar2,&local_28,&local_38,0,0,uVar8);
  return;
}



// FUNCTION 142329e10 FUN_142329e10 body=983 status=ok
// SIG undefined FUN_142329e10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142329e10(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  float fStack_40;
  undefined4 uStack_3c;
  
  cVar3 = (**(code **)(*(longlong *)*param_1 + 0x5c0))();
  if ((cVar3 != '\0') && (cVar3 = (**(code **)(*(longlong *)*param_1 + 0x2a0))(), cVar3 != '\0')) {
    lVar6 = *param_1;
    lVar5 = *(longlong *)(lVar6 + 0x610);
    if (lVar5 == 0) {
      lVar5 = (**(code **)(*(longlong *)(lVar6 + 0x218) + 0x28))();
      *(longlong *)(lVar6 + 0x610) = lVar5;
    }
    if (((char)param_1[1] == '\0') ||
       (lVar6 = FWeakObjectPtr::Get((longlong)param_1 + 0xc), lVar6 != 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
      if (*(char *)((longlong)param_1 + 0x14) != '\0') {
        return;
      }
    }
    iVar4 = FNetworkPredictionData_Client_Character::GetSavedMoveIndex(lVar5,(int)param_1[3]);
    if (iVar4 != -1) {
      FUN_14232c2d0(lVar5,iVar4);
      if (*(char *)((longlong)param_1 + 0x14) == '\0') {
        puVar8 = (undefined8 *)FUN_142436b30(&local_48,param_1 + 5,*param_1);
        fVar13 = (float)*puVar8;
        fVar14 = (float)((ulonglong)*puVar8 >> 0x20);
        fVar10 = *(float *)(puVar8 + 1);
      }
      else {
        uVar7 = FWeakObjectPtr::Get((longlong)param_1 + 0xc);
        FUN_142311f90(uVar7,param_1[4],&local_58,&local_48);
        fVar13 = (float)local_58 + *(float *)(param_1 + 5);
        fVar10 = local_50 + *(float *)(param_1 + 6);
        fVar14 = local_58._4_4_ + *(float *)((longlong)param_1 + 0x2c);
      }
      local_58 = *(undefined8 *)((longlong)param_1 + 0x34);
      local_50 = *(float *)((longlong)param_1 + 0x3c);
      local_48 = param_1[5];
      fStack_40 = (float)param_1[6];
      uVar7 = FWeakObjectPtr::Get((longlong)param_1 + 0xc);
      (**(code **)(*(longlong *)*param_1 + 0xa50))
                ((longlong *)*param_1,lVar5,(int)param_1[3],&local_48,&local_58,uVar7,param_1[4],
                 (char)param_1[1],*(undefined1 *)((longlong)param_1 + 0x14),(char)param_1[8]);
      local_48 = CONCAT44(fVar14,fVar13);
      fStack_40 = fVar10;
      FUN_1423990b0(*(undefined8 *)(*param_1 + 0x178),&local_48,0,0,1);
      lVar6 = *param_1;
      *(undefined8 *)(lVar6 + 0x18c) = *(undefined8 *)((longlong)param_1 + 0x34);
      *(undefined4 *)(lVar6 + 0x194) = *(undefined4 *)((longlong)param_1 + 0x3c);
      plVar1 = (longlong *)*param_1;
      lVar6 = *(longlong *)(plVar1[0x44] + 0x4d8);
      (**(code **)(*plVar1 + 0x5b0))(plVar1,(char)param_1[8]);
      uVar7 = FWeakObjectPtr::Get((longlong)param_1 + 0xc);
      lVar9 = param_1[4];
      if ((bVar2) && (lVar6 != 0)) {
        plVar1 = (longlong *)*param_1;
        uVar7 = 0;
        local_58 = *(undefined8 *)(plVar1[0x2f] + 0x220);
        local_50 = *(float *)(plVar1[0x2f] + 0x228);
        (**(code **)(*plVar1 + 0x870))(plVar1,&local_58,plVar1 + 0x82,0,0);
        if (((byte)*(undefined4 *)(*param_1 + 0x410) & 3) == 3) {
          uVar7 = FWeakObjectPtr::Get(*param_1 + 0x494);
          lVar9 = *(longlong *)(*param_1 + 0x4a0);
        }
        else {
          lVar9 = 0;
        }
      }
      (**(code **)(*(longlong *)*param_1 + 0x6d8))((longlong *)*param_1,uVar7,lVar9,1);
      (**(code **)(*(longlong *)*param_1 + 0x978))();
      *(uint *)(*param_1 + 0x4b4) = *(uint *)(*param_1 + 0x4b4) | 0x20;
      (**(code **)(*(longlong *)*param_1 + 0x608))();
      lVar6 = *param_1;
      lVar9 = *(longlong *)(lVar6 + 0x178);
      if (lVar9 == 0) {
        fStack_40 = (float)DAT_1468b5d98;
        puVar8 = &local_48;
        local_48 = _DAT_1468b5d90;
      }
      else {
        puVar8 = &local_58;
        local_50 = (float)*(undefined4 *)(lVar9 + 0x228);
        local_58 = *(undefined8 *)(lVar9 + 0x220);
      }
      uVar11 = *(undefined4 *)(puVar8 + 1);
      *(undefined8 *)(lVar6 + 0x35c) = *puVar8;
      *(undefined4 *)(lVar6 + 0x364) = uVar11;
      lVar6 = *param_1;
      lVar9 = *(longlong *)(lVar6 + 0x178);
      uVar11 = DAT_1464aa810;
      uVar12 = DAT_1464aa814;
      fStack_40 = (float)DAT_1464aa818;
      uStack_3c = DAT_1464aa81c;
      if (lVar9 != 0) {
        uVar11 = *(undefined4 *)(lVar9 + 0x210);
        uVar12 = *(undefined4 *)(lVar9 + 0x214);
        fStack_40 = (float)*(undefined4 *)(lVar9 + 0x218);
        uStack_3c = *(undefined4 *)(lVar9 + 0x21c);
      }
      local_48 = CONCAT44(uVar12,uVar11);
      *(longlong *)(lVar6 + 0x370) = local_48;
      *(ulonglong *)(lVar6 + 0x378) = CONCAT44(uStack_3c,fStack_40);
      lVar6 = *param_1;
      *(undefined8 *)(lVar6 + 0x380) = *(undefined8 *)(lVar6 + 0x18c);
      *(undefined4 *)(lVar6 + 0x388) = *(undefined4 *)(lVar6 + 0x194);
      (**(code **)(*(longlong *)*param_1 + 0x470))();
      *(uint *)(lVar5 + 0xa0) = *(uint *)(lVar5 + 0xa0) | 1;
    }
  }
  return;
}



// FUNCTION 14232a1f0 operator() body=352 status=ok
// SIG undefined operator()(void)

void <lambda_656c836d6674f6f8179d5a40ba13f852>::operator()(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar11 = *param_1;
  iVar4 = *(int *)(lVar11 + 200);
  uVar8 = (ulonglong)iVar4;
  *(int *)(lVar11 + 200) = iVar4 + 1;
  if (*(int *)(lVar11 + 0xcc) < iVar4 + 1) {
    TArray<UHierarchicalInstancedStaticMeshComponent_*,TInlineAllocator<24,FDefaultAllocator>_>::
    ResizeGrow(lVar11,iVar4);
  }
  lVar10 = *(longlong *)(lVar11 + 0xc0);
  if (*(longlong *)(lVar11 + 0xc0) == 0) {
    lVar10 = lVar11;
  }
  *(undefined8 *)(lVar10 + uVar8 * 8) = param_2;
  iVar4 = 1;
  lVar11 = *param_1;
  do {
    uVar1 = *(uint *)(lVar11 + 200);
    lVar10 = (longlong)iVar4;
    if (0 < iVar4) {
      lVar11 = (longlong)(int)uVar8 * 8;
      do {
        lVar5 = *(longlong *)(*param_1 + 0xc0);
        if (lVar5 == 0) {
          lVar5 = *param_1;
        }
        iVar9 = 0;
        uVar2 = *(undefined8 *)(lVar5 + lVar11);
        iVar4 = UWorld::GetNumPlayerControllers(uVar2);
        if (0 < iVar4) {
          do {
            lVar5 = UKWMeshArray::GetMeshByIndex(uVar2);
            if (lVar5 != 0) {
              lVar3 = *param_1;
              iVar4 = *(int *)(lVar3 + 200);
              iVar6 = iVar4 + 1;
              *(int *)(lVar3 + 200) = iVar6;
              if (*(int *)(lVar3 + 0xcc) < iVar6) {
                TArray<UHierarchicalInstancedStaticMeshComponent_*,TInlineAllocator<24,FDefaultAllocator>_>
                ::ResizeGrow();
              }
              lVar7 = *(longlong *)(lVar3 + 0xc0);
              if (*(longlong *)(lVar3 + 0xc0) == 0) {
                lVar7 = lVar3;
              }
              *(longlong *)(lVar7 + (longlong)iVar4 * 8) = lVar5;
            }
            iVar9 = iVar9 + 1;
            iVar4 = UWorld::GetNumPlayerControllers(uVar2);
          } while (iVar9 < iVar4);
        }
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      lVar11 = *param_1;
    }
    uVar8 = (ulonglong)uVar1;
    iVar4 = *(int *)(lVar11 + 200) - uVar1;
  } while (iVar4 != 0);
  return;
}



// FUNCTION 14232a350 FUN_14232a350 body=208 status=ok
// SIG undefined FUN_14232a350(void)

void FUN_14232a350(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  param_1 = (longlong *)*param_1;
  lVar3 = FUN_14046f570(param_1);
  cVar2 = (**(code **)(*param_1 + 0x5c0))(param_1);
  if ((((((cVar2 != '\0') && (lVar3 != 0)) && (param_1[0x44] != 0)) &&
       ((*(char *)(param_1[0x44] + 0x128) == '\x03' && (cVar2 = FUN_1425c4330(), cVar2 != '\0'))))
      && ((param_1[0x2f] != 0 &&
          ((plVar1 = *(longlong **)(lVar3 + 0x38), plVar1 != (longlong *)0x0 &&
           (cVar2 = (**(code **)(*plVar1 + 0x368))(plVar1), cVar2 != '\0')))))) &&
     ((lVar3 = FUN_1425bd3e0(plVar1,param_1[0x44]), lVar3 != 0 &&
      ((cVar2 = FUN_1425c4880(plVar1,lVar3), cVar2 != '\0' &&
       (cVar2 = (**(code **)(*param_1 + 0x970))(param_1), cVar2 != '\0')))))) {
    FUN_1425b5470(plVar1,lVar3);
  }
  return;
}



// FUNCTION 14232a420 FUN_14232a420 body=262 status=ok
// SIG undefined FUN_14232a420(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14232a420(void)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_218 [32];
  longlong *local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  ulonglong local_1e0;
  longlong local_1d8 [4];
  undefined1 local_1b8 [416];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  plVar2 = (longlong *)FUN_1428e7a40();
  lVar3 = plVar2[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar3 = plVar2[0x1f];
  }
  local_1f8 = local_1d8;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8[2] = 0;
  local_1d8[3] = 0;
  local_1d8[0] = 0;
  local_1d8[1] = 0;
  FUN_142325700(local_1b8,0,&local_1e8,local_1d8 + 2);
  plVar2 = *(longlong **)(lVar3 + 0x10);
  local_1f0 = 0;
  local_1f8 = (longlong *)lVar3;
  (**(code **)(*plVar2 + 0x2a0))(plVar2,local_1b8,lVar3,plVar2);
  uVar1 = local_1e0;
  FComponentPropertyWriter::~FComponentPropertyWriter(local_1b8);
  if (local_1d8[0] != 0) {
    FMemory::Free();
  }
  if (local_1d8[2] != 0) {
    FMemory::Free();
  }
  if (local_1e8 != 0) {
    FMemory::Free();
  }
  return uVar1 & 0xffffffff;
}



// FUNCTION 14232a530 FUN_14232a530 body=395 status=ok
// SIG undefined FUN_14232a530(void)

void FUN_14232a530(longlong *param_1)

{
  uint *puVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  bVar2 = FUN_1423146c0(*(undefined8 *)(*param_1 + 0x220));
  local_28 = 0x400000003f800000;
  *(uint *)(*(longlong *)(*param_1 + 0x220) + 0x56c) =
       (uint)bVar2 << 9 | *(uint *)(*(longlong *)(*param_1 + 0x220) + 0x56c) & 0xfffffdff;
  local_18 = *(undefined8 *)((longlong)param_1 + 0xc);
  local_20 = 0x40400000;
  local_10 = *(undefined4 *)((longlong)param_1 + 0x14);
  uVar3 = FWeakObjectPtr::Get(param_1 + 4);
  (**(code **)(*(longlong *)*param_1 + 0x9a8))
            ((longlong *)*param_1,(int)param_1[1],&local_18,&local_28,(char)param_1[3],
             *(undefined1 *)((longlong)param_1 + 0x19),*(undefined4 *)((longlong)param_1 + 0x1c),
             uVar3,param_1[5],(char)param_1[6],*(undefined2 *)((longlong)param_1 + 0x32));
  puVar1 = (uint *)(*(longlong *)(*param_1 + 0x220) + 0x56c);
  *puVar1 = *puVar1 & 0xfffffdff;
  local_18 = *(undefined8 *)((longlong)param_1 + 0x44);
  local_10 = *(undefined4 *)((longlong)param_1 + 0x4c);
  local_28 = param_1[7];
  local_20 = (undefined4)param_1[8];
  uVar3 = FWeakObjectPtr::Get(param_1 + 4);
  (**(code **)(*(longlong *)*param_1 + 0x9a8))
            ((longlong *)*param_1,*(undefined4 *)((longlong)param_1 + 0x34),&local_28,&local_18,
             (char)param_1[10],*(undefined1 *)((longlong)param_1 + 0x19),
             *(undefined4 *)((longlong)param_1 + 0x54),uVar3,param_1[5],(char)param_1[6],
             *(undefined2 *)((longlong)param_1 + 0x32));
  return;
}



// FUNCTION 14232a6c0 FUN_14232a6c0 body=251 status=ok
// SIG undefined FUN_14232a6c0(void)

void FUN_14232a6c0(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_128;
  undefined4 local_120;
  longlong local_118;
  undefined4 local_110;
  undefined1 local_108 [256];
  
  local_128 = *(undefined8 *)((longlong)param_1 + 0x124);
  local_120 = *(undefined4 *)((longlong)param_1 + 300);
  local_118 = param_1[0x23];
  local_110 = (undefined4)param_1[0x24];
  uVar1 = FWeakObjectPtr::Get((longlong)param_1 + 0x134);
  uVar2 = FUN_142326440(local_108,param_1 + 2);
  FUN_142912580(*(undefined8 *)(*param_1 + 0x220),(int)param_1[1],uVar2,(char)param_1[0x22],
                *(undefined4 *)((longlong)param_1 + 0x114),&local_118,&local_128,(int)param_1[0x26],
                uVar1,param_1[0x28],(char)param_1[0x29],*(undefined1 *)((longlong)param_1 + 0x149),
                *(undefined1 *)((longlong)param_1 + 0x14a));
  return;
}



// FUNCTION 14232a7c0 FUN_14232a7c0 body=217 status=ok
// SIG undefined FUN_14232a7c0(void)

void FUN_14232a7c0(longlong *param_1)

{
  undefined8 uVar1;
  longlong local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_38 = param_1[6];
  local_30 = (undefined4)param_1[7];
  local_28 = *(undefined8 *)((longlong)param_1 + 0x24);
  local_20 = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_18 = *(undefined8 *)((longlong)param_1 + 0xc);
  local_10 = *(undefined4 *)((longlong)param_1 + 0x14);
  uVar1 = FWeakObjectPtr::Get((longlong)param_1 + 0x44);
  FUN_142913790(*(undefined8 *)(*param_1 + 0x220),(int)param_1[1],&local_18,(char)param_1[3],
                *(undefined4 *)((longlong)param_1 + 0x1c),(int)param_1[4],&local_28,&local_38,
                *(undefined1 *)((longlong)param_1 + 0x3c),*(undefined1 *)((longlong)param_1 + 0x3d),
                (int)param_1[8],uVar1,param_1[10],(char)param_1[0xb],
                *(undefined2 *)((longlong)param_1 + 0x5a));
  return;
}



// FUNCTION 14232a8a0 FUN_14232a8a0 body=322 status=ok
// SIG undefined FUN_14232a8a0(void)

void FUN_14232a8a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = *(undefined8 *)((longlong)param_1 + 0xc);
  local_20 = 0x40400000;
  local_10 = *(undefined4 *)((longlong)param_1 + 0x14);
  local_28 = 0x400000003f800000;
  uVar1 = FWeakObjectPtr::Get(param_1 + 4);
  (**(code **)(*(longlong *)*param_1 + 0x9a8))
            ((longlong *)*param_1,*(undefined4 *)(param_1 + 1),&local_18,&local_28,
             *(undefined1 *)(param_1 + 3),*(undefined1 *)((longlong)param_1 + 0x19),
             *(undefined4 *)((longlong)param_1 + 0x1c),uVar1,param_1[5],*(undefined1 *)(param_1 + 6)
             ,*(undefined2 *)((longlong)param_1 + 0x32));
  local_18 = *(undefined8 *)((longlong)param_1 + 0x44);
  local_10 = *(undefined4 *)((longlong)param_1 + 0x4c);
  local_28 = param_1[7];
  local_20 = *(undefined4 *)(param_1 + 8);
  uVar1 = FWeakObjectPtr::Get(param_1 + 4);
  (**(code **)(*(longlong *)*param_1 + 0x9a8))
            ((longlong *)*param_1,*(undefined4 *)((longlong)param_1 + 0x34),&local_28,&local_18,
             *(undefined1 *)(param_1 + 10),*(undefined1 *)((longlong)param_1 + 0x19),
             *(undefined4 *)((longlong)param_1 + 0x54),uVar1,param_1[5],*(undefined1 *)(param_1 + 6)
             ,*(undefined2 *)((longlong)param_1 + 0x32));
  return;
}



// FUNCTION 14232a9f0 FUN_14232a9f0 body=279 status=ok
// SIG undefined FUN_14232a9f0(void)

void FUN_14232a9f0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  uVar2 = FWeakObjectPtr::Get();
  cVar1 = FUN_142314560(uVar2);
  local_18 = *(undefined8 *)(param_1 + 0x20);
  local_10 = *(undefined4 *)(param_1 + 0x28);
  if (cVar1 != '\0') {
    local_28 = local_18;
    local_20 = local_10;
    local_18 = *(undefined8 *)(param_1 + 0x14);
    local_10 = *(undefined4 *)(param_1 + 0x1c);
    uVar2 = FWeakObjectPtr::Get(param_1);
    FUN_1429135d0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x220),
                  *(undefined4 *)(param_1 + 0x10),&local_18,&local_28,
                  *(undefined1 *)(param_1 + 0x2c),*(undefined1 *)(param_1 + 0x2d),
                  *(undefined4 *)(param_1 + 0x30),uVar2,*(undefined8 *)(param_1 + 0x38),
                  *(undefined1 *)(param_1 + 0x40),*(undefined2 *)(param_1 + 0x42));
    return;
  }
  local_20 = *(undefined4 *)(param_1 + 0x1c);
  local_28 = *(undefined8 *)(param_1 + 0x14);
  FUN_142913970(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x220),*(undefined4 *)(param_1 + 0x10),
                &local_28,&local_18,*(undefined1 *)(param_1 + 0x2c),*(undefined1 *)(param_1 + 0x2d),
                *(undefined4 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x40),
                *(undefined2 *)(param_1 + 0x42));
  return;
}



// FUNCTION 14232ab10 FUN_14232ab10 body=326 status=ok
// SIG undefined FUN_14232ab10(void)

void FUN_14232ab10(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  
  uVar2 = DAT_146af00c0;
  uVar4 = FUN_14168db40();
  FCsvProfiler::BeginStat(uVar4,"CharacterMovementServerMove",uVar2);
  cVar3 = (**(code **)(*(longlong *)*param_1 + 0x5c0))();
  if ((cVar3 != '\0') && (cVar3 = (**(code **)(*(longlong *)*param_1 + 0x2a0))(), cVar3 != '\0')) {
    plVar7 = (longlong *)*param_1;
    lVar5 = plVar7[0xc3];
    if (lVar5 == 0) {
      lVar5 = (**(code **)(plVar7[0x43] + 0x30))();
      plVar7[0xc3] = lVar5;
      plVar7 = (longlong *)*param_1;
    }
    cVar3 = (**(code **)(*plVar7 + 0x980))(plVar7,(int)param_1[1],lVar5);
    if (cVar3 != '\0') {
      fVar8 = (float)FUN_14222dcf0(*(undefined8 *)(*param_1 + 0x220));
      if (*(char *)(lVar5 + 0x78) == '\0') {
        fVar8 = fVar8 * *(float *)(lVar5 + 0x68);
        fVar9 = *(float *)(param_1 + 1) - *(float *)(lVar5 + 0x58);
        if (fVar8 <= fVar9) {
          fVar9 = fVar8;
        }
      }
      else {
        fVar9 = *(float *)(lVar5 + 0x7c);
      }
      *(float *)(lVar5 + 0x58) = *(float *)(param_1 + 1);
      lVar6 = FUN_14046f570(*param_1);
      uVar1 = *(undefined4 *)(lVar6 + 0x790);
      *(undefined4 *)(lVar5 + 8) = uVar1;
      *(undefined4 *)(lVar5 + 0x60) = uVar1;
      (**(code **)(*(longlong *)*param_1 + 0x950))
                ((longlong *)*param_1,(int)param_1[1],fVar9,*(undefined1 *)((longlong)param_1 + 0xc)
                 ,param_1 + 2);
    }
  }
  uVar4 = FUN_14168db40();
  FCsvProfiler::EndStat(uVar4,"CharacterMovementServerMove",uVar2);
  return;
}



// FUNCTION 14232ac60 FUN_14232ac60 body=119 status=ok
// SIG undefined FUN_14232ac60(void)

void FUN_14232ac60(longlong *param_1)

{
  FUN_14234feb0(*(undefined8 *)(*(longlong *)(*param_1 + 0x220) + 0x4d0),
                *(undefined4 *)(*(longlong *)(*(longlong *)param_1[1] + 0x4d0) + 0x714),
                *(undefined4 *)(*(longlong *)(*(longlong *)param_1[1] + 0x4d0) + 0x710),1);
  (**(code **)(*(longlong *)*param_1 + 0x8c0))();
                    /* WARNING: Could not recover jumptable at 0x00014232acd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(*param_1 + 0x220) + 0x8f0))
            (*(longlong **)(*param_1 + 0x220),*(undefined4 *)param_1[2],*(undefined4 *)param_1[3]);
  return;
}



// FUNCTION 14232ace0 FUN_14232ace0 body=351 status=ok
// SIG undefined FUN_14232ace0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14232ace0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 local_38;
  float local_30;
  longlong local_28;
  undefined8 local_20;
  float local_18;
  
  plVar4 = *(longlong **)(*param_1 + 0x220);
  if (plVar4 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar4 + 0x908))(plVar4,param_1[1]);
    if (cVar2 != '\0') {
      (**(code **)(**(longlong **)(*param_1 + 0x220) + 0x8c0))
                (*(longlong **)(*param_1 + 0x220),param_1[1]);
    }
  }
  cVar2 = (**(code **)(*(longlong *)*param_1 + 0x558))();
  if (cVar2 != '\0') {
    plVar4 = (longlong *)*param_1;
    if (*(char *)((longlong)plVar4 + 0x4b2) == '\x02') {
      lVar1 = plVar4[0x2f];
      if (lVar1 == 0) {
        local_38 = DAT_146531c78;
        local_30 = DAT_146531c80;
      }
      else {
        local_38 = *(undefined8 *)(lVar1 + 0x220);
        local_30 = *(float *)(lVar1 + 0x228) - *(float *)(lVar1 + 0x1e4);
      }
      local_20 = local_38;
      local_18 = local_30;
      local_38 = _DAT_1468b5d90;
      local_30 = (float)DAT_1468b5d98;
      local_28 = 0;
      cVar2 = (**(code **)(*plVar4 + 0x8f0))(plVar4,&local_20,&local_38);
      if ((cVar2 == '\0') || (local_28 == 0)) {
        *(undefined1 *)(*param_1 + 0x4b2) = 1;
      }
    }
    (**(code **)(*(longlong *)*param_1 + 0x740))((longlong *)*param_1,param_1[1]);
  }
  lVar1 = *(longlong *)(*param_1 + 0x1f8);
  if (lVar1 != 0) {
    uVar3 = UPathFollowingAgentInterface::GetPrivateStaticClass();
    plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar3);
    if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014232ae35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x20))(plVar4);
      return;
    }
  }
  return;
}



// FUNCTION 14232ae40 FUN_14232ae40 body=2001 status=ok
// SIG undefined FUN_14232ae40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14232ae40(undefined8 *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  byte *pbVar5;
  ulonglong uVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
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
  undefined1 auStack_388 [32];
  float *local_368;
  float *local_360;
  undefined4 *local_358;
  undefined8 local_350;
  undefined8 *local_348;
  uint *local_340;
  undefined8 *local_338;
  float local_328;
  float local_324;
  float local_320;
  void *local_318;
  undefined8 local_310;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  uint local_2e4;
  undefined1 local_2e0;
  float local_2dc;
  float local_2d8;
  float local_2d4;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  float local_290;
  undefined8 local_288;
  float local_280;
  undefined8 local_278;
  float local_270;
  float local_260;
  float local_254;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined4 local_220;
  undefined1 local_21c;
  undefined8 local_210;
  undefined1 local_1f0 [256];
  undefined1 *local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_1468387a8 ^ (ulonglong)auStack_388;
  lVar18 = 0;
  local_f0 = (undefined1 *)0x0;
  local_e8 = 0;
  iVar9 = FillInlinePxShapeArray_AssumesLocked(local_1f0);
  pfVar3 = (float *)*param_1;
  pfVar4 = (float *)param_1[2];
  fVar30 = pfVar3[1];
  fVar21 = pfVar3[2];
  fVar1 = *pfVar3;
  fVar2 = pfVar3[3];
  pfVar3 = (float *)param_1[1];
  local_2f8 = pfVar3[1];
  fVar22 = *pfVar3;
  local_2f4 = pfVar3[2];
  local_2f0 = *pfVar4;
  local_2ec = pfVar4[1];
  local_2e8 = pfVar4[2];
  local_328 = fVar21;
  local_324 = fVar30;
  local_320 = fVar22;
  if (0 < iVar9) {
    do {
      puVar15 = local_1f0;
      if (local_f0 != (undefined1 *)0x0) {
        puVar15 = local_f0;
      }
      plVar14 = *(longlong **)(puVar15 + lVar18 * 8);
      cVar7 = FUN_14269ccf0(plVar14);
      if ((cVar7 == '\0') && (iVar10 = (**(code **)(*plVar14 + 0x30))(plVar14), 1 < iVar10 - 5U)) {
        (**(code **)(*plVar14 + 0x90))(plVar14,&local_2a8);
        fVar25 = local_298 * 2.0;
        fVar24 = local_290 * 2.0;
        fVar23 = local_294 * 2.0;
        fVar20 = fVar2 * fVar2 - 0.5;
        fVar19 = fVar30 * fVar23 + fVar1 * fVar25 + fVar21 * fVar24;
        fVar27 = (fVar30 * fVar24 - fVar21 * fVar23) * fVar2 + fVar20 * fVar25 + fVar1 * fVar19 +
                 fVar22;
        fVar28 = (fVar21 * fVar25 - fVar1 * fVar24) * fVar2 + fVar20 * fVar23 + fVar30 * fVar19 +
                 local_2f8;
        fVar22 = fVar2 * fVar2 - 0.5;
        fVar26 = (fVar1 * fVar23 - fVar30 * fVar25) * fVar2 + fVar20 * fVar24 + fVar21 * fVar19 +
                 local_2f4;
        fVar21 = fVar30 * fVar23 + fVar1 * fVar25 + local_328 * fVar24;
        fVar20 = local_2f0 +
                 (fVar30 * fVar24 - local_328 * fVar23) * fVar2 + fVar22 * fVar25 + fVar1 * fVar21;
        fVar29 = local_2ec +
                 (local_328 * fVar25 - fVar1 * fVar24) * fVar2 + fVar22 * fVar23 + fVar30 * fVar21;
        fVar19 = local_2e8 +
                 (fVar1 * fVar23 - fVar30 * fVar25) * fVar2 + fVar22 * fVar24 + local_328 * fVar21;
        local_308 = (local_2a8 * fVar2 + local_29c * fVar1 + local_2a0 * local_324) -
                    local_2a4 * local_328;
        fStack_304 = (local_2a4 * fVar2 + local_29c * local_324 + local_2a8 * local_328) -
                     local_2a0 * fVar1;
        fStack_300 = (local_2a0 * fVar2 + local_29c * local_328 + local_2a4 * fVar1) -
                     local_2a8 * local_324;
        fStack_2fc = ((local_29c * fVar2 - local_2a8 * fVar1) - local_2a4 * local_324) -
                     local_2a0 * local_328;
        iVar10 = *(int *)(param_1[3] + 8);
        local_288 = CONCAT44(fVar29,fVar20);
        local_2e4 = (uint)*(byte *)param_1[8];
        local_2e0 = 0;
        local_278 = CONCAT44(fVar28,fVar27);
        local_280 = fVar19;
        local_270 = fVar26;
        local_260 = fVar19;
        local_254 = fVar26;
        puVar12 = (undefined8 *)(**(code **)(**(longlong **)param_1[7] + 0x4d0))();
        FUN_1426d3dd0(&local_250);
        local_250 = *puVar12;
        uStack_248 = puVar12[1];
        local_240 = puVar12[2];
        uStack_238 = puVar12[3];
        uVar13 = (**(code **)(*plVar14 + 0x40))(plVar14,&local_220);
        local_340 = &local_2e4;
        local_338 = (undefined8 *)((ulonglong)local_338 & 0xffffffffffffff00);
        local_348 = &local_250;
        local_350 = param_1[6];
        local_358 = (undefined4 *)CONCAT44(local_358._4_4_,*(undefined4 *)param_1[5]);
        local_368 = (float *)&local_278;
        local_360 = (float *)&local_288;
        cVar7 = FUN_14230fe40(param_1[4],uVar13,&local_308,param_1[3]);
        if (cVar7 != '\0') {
          *(undefined1 *)param_1[9] = 1;
        }
        fVar21 = local_328;
        fVar22 = local_320;
        fVar30 = local_324;
        if (*(char *)param_1[8] != '\0') {
          local_210 = (**(code **)(*plVar14 + 0x40))(plVar14,&local_250);
          plVar14 = (longlong *)param_1[3];
          local_220 = 3;
          local_21c = 0;
          local_318 = (void *)0x0;
          local_310 = 0;
          if (0 < (int)plVar14[1] - iVar10) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::
            ResizeTo(&local_318);
            plVar14 = (longlong *)param_1[3];
          }
          if (iVar10 < (int)plVar14[1]) {
            do {
              uVar6 = local_310;
              lVar16 = (longlong)(int)local_310;
              lVar17 = *plVar14;
              iVar11 = (int)local_310 + 1;
              local_310 = CONCAT44(local_310._4_4_,iVar11);
              if (local_310._4_4_ < iVar11) {
                TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow
                          (&local_318,uVar6 & 0xffffffff);
              }
              FUN_140729f20((void *)(lVar16 * 0x90 + (longlong)local_318),
                            (longlong)iVar10 * 0x90 + lVar17);
              plVar14 = (longlong *)param_1[3];
              iVar10 = iVar10 + 1;
            } while (iVar10 < (int)plVar14[1]);
          }
          puVar12 = (undefined8 *)(**(code **)(**(longlong **)param_1[7] + 0x4d0))();
          FUN_1426d3dd0(&local_250);
          local_250 = *puVar12;
          uStack_248 = puVar12[1];
          local_348 = (undefined8 *)param_1[6];
          local_338 = &DAT_146aefe88;
          local_340 = (uint *)&local_250;
          local_240 = puVar12[2];
          uStack_238 = puVar12[3];
          pbVar5 = (byte *)param_1[9];
          local_2b8 = local_308;
          fStack_2b4 = fStack_304;
          fStack_2b0 = fStack_300;
          fStack_2ac = fStack_2fc;
          local_350 = CONCAT44(local_350._4_4_,*(undefined4 *)param_1[5]);
          local_358 = &local_220;
          local_360 = &local_2b8;
          local_368 = &local_2dc;
          local_2dc = fVar20;
          local_2d8 = fVar29;
          local_2d4 = fVar19;
          local_2d0 = fVar27;
          local_2cc = fVar28;
          local_2c8 = fVar26;
          bVar8 = FUN_1424a0df0(*(undefined8 *)(param_1[4] + 0x970),*(undefined4 *)(local_348 + 4),
                                &local_318,&local_2d0);
          *pbVar5 = *pbVar5 | bVar8;
          iVar10 = (int)local_310;
          lVar17 = (longlong)(int)local_310;
          plVar14 = (longlong *)param_1[3];
          if ((int)local_310 != 0) {
            iVar11 = (int)plVar14[1];
            if (*(int *)((longlong)plVar14 + 0xc) < iVar11 + (int)local_310) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::
              ResizeTo(plVar14);
              iVar11 = (int)plVar14[1];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar11 * 0x90 + *plVar14),local_318,lVar17 * 0x90);
            *(int *)(plVar14 + 1) = (int)plVar14[1] + iVar10;
          }
          fVar21 = local_328;
          fVar22 = local_320;
          fVar30 = local_324;
          if (local_318 != (void *)0x0) {
            FMemory::Free();
            fVar21 = local_328;
            fVar22 = local_320;
            fVar30 = local_324;
          }
        }
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 < iVar9);
  }
  if (local_f0 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14232b620 FUN_14232b620 body=388 status=ok
// SIG undefined FUN_14232b620(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14232b620(longlong *param_1)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined1 auVar9 [16];
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  lVar2 = *param_1;
  *(longlong *)(lVar2 + 0x1ec) = param_1[1];
  *(int *)(lVar2 + 500) = (int)param_1[2];
  if (((*(byte *)(param_1[4] + 0x4b4) & 0x20) == 0) &&
     ((*(uint *)(param_1[4] + 0x300) & 0x2000) == 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  local_28 = *(undefined8 *)((longlong)param_1 + 0x14);
  lVar2 = *param_1;
  local_20 = *(undefined4 *)((longlong)param_1 + 0x1c);
  pfVar1 = (float *)(lVar2 + 0x280);
  if (((*(float *)(lVar2 + 0x1f8) != *pfVar1) ||
      (*(float *)(lVar2 + 0x1fc) != *(float *)(lVar2 + 0x284))) ||
     (*(float *)(lVar2 + 0x200) != *(float *)(lVar2 + 0x288))) {
    local_38 = *(undefined8 *)*(undefined1 (*) [12])(lVar2 + 0x1f8);
    auVar9._12_4_ = 0;
    auVar9._0_12_ = *(undefined1 (*) [12])(lVar2 + 0x1f8);
    fVar3 = (float)DAT_146af0030;
    fVar4 = DAT_146af0030._4_4_;
    fVar5 = DAT_146af0030._8_4_;
    auVar9 = divps(auVar9,_DAT_146af0030);
    fVar11 = (float)local_38 - (float)(int)auVar9._0_4_ * fVar3;
    fVar12 = (float)((ulonglong)local_38 >> 0x20) - (float)(int)auVar9._4_4_ * fVar4;
    fVar13 = *(float *)(lVar2 + 0x200) - (float)(int)auVar9._8_4_ * fVar5;
    fVar11 = (float)(((uint)(fVar3 + fVar11) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                    (uint)(fVar3 + fVar11));
    fVar12 = (float)(((uint)(fVar4 + fVar12) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                    (uint)(fVar4 + fVar12));
    fVar13 = (float)(((uint)(fVar5 + fVar13) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                    (uint)(fVar5 + fVar13));
    uVar10 = ((uint)(fVar13 - fVar5) ^ (uint)fVar13) & -(uint)(fRam0000000146af0028 < fVar13) ^
             (uint)fVar13;
    uStack_30 = CONCAT44(uStack_30._4_4_,uVar10);
    *(ulonglong *)pfVar1 =
         CONCAT44(((uint)(fVar12 - fVar4) ^ (uint)fVar12) & -(uint)(fRam0000000146af0024 < fVar12) ^
                  (uint)fVar12,
                  ((uint)(fVar11 - fVar3) ^ (uint)fVar11) & -(uint)(_DAT_146af0020 < fVar11) ^
                  (uint)fVar11);
    *(uint *)(lVar2 + 0x288) = uVar10;
    puVar7 = (undefined8 *)FRotator::Quaternion(pfVar1,local_18);
    uVar6 = puVar7[1];
    *(undefined8 *)(lVar2 + 0x270) = *puVar7;
    *(undefined8 *)(lVar2 + 0x278) = uVar6;
  }
  local_38 = *(undefined8 *)(lVar2 + 0x270);
  uStack_30 = *(undefined8 *)(lVar2 + 0x278);
  FUN_142397be0(lVar2,&local_28,&local_38,0,0,uVar8);
  return;
}



// FUNCTION 14232b7b0 FUN_14232b7b0 body=155 status=ok
// SIG undefined FUN_14232b7b0(void)

void FUN_14232b7b0(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined4 local_20;
  longlong local_18;
  undefined4 local_10;
  
  local_28 = *(undefined8 *)((longlong)param_1 + 0x1c);
  local_20 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_18 = param_1[2];
  local_10 = (undefined4)param_1[3];
  uVar1 = FWeakObjectPtr::Get((longlong)param_1 + 0x2c);
  FUN_1429124c0(*(undefined8 *)(*param_1 + 0x220),(int)param_1[1],
                *(undefined4 *)((longlong)param_1 + 0xc),&local_18,&local_28,(int)param_1[5],uVar1,
                param_1[7],(char)param_1[8],*(undefined1 *)((longlong)param_1 + 0x41),
                *(undefined1 *)((longlong)param_1 + 0x42));
  return;
}



// FUNCTION 14232b850 FUN_14232b850 body=145 status=ok
// SIG undefined FUN_14232b850(void)

void FUN_14232b850(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0x40;
    lVar1 = param_2 + 0x44f0;
    do {
      lVar2 = lVar2 + -1;
      if (*(longlong *)(lVar1 + -0x100) != 0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1 + -0x110);
      if (*(longlong *)(lVar1 + -400) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar1 + -0x1b0) != 0) {
        FMemory::Free();
      }
      lVar1 = lVar1 + -0x110;
    } while (lVar2 != 0);
    FMemory::operator_delete(param_2,0x4400);
  }
  return;
}



// FUNCTION 14232b8f0 FUN_14232b8f0 body=145 status=ok
// SIG undefined FUN_14232b8f0(void)

void FUN_14232b8f0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0x40;
    lVar1 = param_2 + 0x48f0;
    do {
      lVar2 = lVar2 + -1;
      if (*(longlong *)(lVar1 + -0x110) != 0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1 + -0x120);
      if (*(longlong *)(lVar1 + -0x1a0) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar1 + -0x1c0) != 0) {
        FMemory::Free();
      }
      lVar1 = lVar1 + -0x120;
    } while (lVar2 != 0);
    FMemory::operator_delete(param_2,0x4800);
  }
  return;
}



// FUNCTION 14232b9f0 FUN_14232b9f0 body=89 status=ok
// SIG undefined FUN_14232b9f0(void)

undefined8 * FUN_14232b9f0(undefined8 *param_1,ulonglong param_2)

{
  param_1[9] = &PTR__scalar_deleting_destructor__144080980;
  FUN_14074e760(param_1 + 0x1c);
  FUN_14074e810(param_1 + 10);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 14232ba50 FUN_14232ba50 body=43 status=ok
// SIG undefined FUN_14232ba50(void)

undefined8 * FUN_14232ba50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 14232ba80 FUN_14232ba80 body=43 status=ok
// SIG undefined FUN_14232ba80(void)

undefined8 * FUN_14232ba80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 14232bab0 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_CopyableOwnedObject<<lambda_9836d92dec5d34a0125d1a91c128a293>_>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FUN_1404584f0(param_1 + 3);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2c0);
  }
  return param_1;
}



// FUNCTION 14232bb00 FUN_14232bb00 body=89 status=ok
// SIG undefined FUN_14232bb00(void)

undefined8 * FUN_14232bb00(undefined8 *param_1,ulonglong param_2)

{
  param_1[3] = &PTR__scalar_deleting_destructor__144080980;
  FUN_14074e760(param_1 + 0x16);
  FUN_14074e810(param_1 + 4);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x158);
  }
  return param_1;
}



// FUNCTION 14232bb60 FUN_14232bb60 body=43 status=ok
// SIG undefined FUN_14232bb60(void)

undefined8 * FUN_14232bb60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 14232bb90 FUN_14232bb90 body=97 status=ok
// SIG undefined FUN_14232bb90(void)

undefined8 * FUN_14232bb90(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14504b5b0;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14232bc00 FUN_14232bc00 body=378 status=ok
// SIG undefined FUN_14232bc00(void)

undefined8 * FUN_14232bc00(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_145047cd8;
  (**(code **)(param_1[0x91] + 0x30))();
  (**(code **)(param_1[0x74] + 0x30))();
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0xb3)) {
    lVar5 = 0;
    do {
      puVar3 = (undefined8 *)param_1[0xb2];
      if ((undefined8 *)param_1[0xb2] == (undefined8 *)0x0) {
        puVar3 = param_1 + 0x9c;
      }
      (**(code **)(*(longlong *)((longlong)puVar3 + lVar5) + 0x30))();
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x58;
    } while (iVar4 < *(int *)(param_1 + 0xb3));
  }
  plVar1 = param_1 + 0xb5;
  (**(code **)(*plVar1 + 0x30))(plVar1);
  plVar2 = param_1 + 0xbf;
  (**(code **)(*plVar2 + 0x30))(plVar2);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x1aa);
  if (param_1[0x19f] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x189);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x188);
  FUN_141edd2d0(plVar2);
  if (param_1[0xbd] != 0) {
    FMemory::Free();
  }
  *plVar1 = (longlong)&PTR__scalar_deleting_destructor__143f48b30;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xbc);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xbb);
  FUN_141edd2d0(plVar1);
  FUN_140944f50(param_1 + 0x9c);
  FPositionVertexBuffer::~FPositionVertexBuffer(param_1 + 0x91);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(param_1 + 0x74);
  FUN_14271e9f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd90);
  }
  return param_1;
}



// FUNCTION 14232bd80 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
Audio::FEarlyReflections::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14271e9f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3c0);
  }
  return param_1;
}



// FUNCTION 14232bdc0 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FRigNullElement::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145049cc0;
  FUN_14271e9f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3f0);
  }
  return param_1;
}



// FUNCTION 14232be00 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FSampleTrackMemoryWriter::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FSampleTrackMemoryWriter();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 14232be40 FUN_14232be40 body=52 status=ok
// SIG undefined FUN_14232be40(void)

undefined8 FUN_14232be40(undefined8 param_1,ulonglong param_2)

{
  FArchive::~FArchive();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 14232be80 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FComponentPropertyWriter::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FComponentPropertyWriter();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 14232bec0 FUN_14232bec0 body=52 status=ok
// SIG undefined FUN_14232bec0(void)

undefined8 FUN_14232bec0(undefined8 param_1,ulonglong param_2)

{
  FUN_14271e9f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3b0);
  }
  return param_1;
}



// FUNCTION 14232bf00 FUN_14232bf00 body=43 status=ok
// SIG undefined FUN_14232bf00(void)

undefined8 * FUN_14232bf00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 14232bf30 FUN_14232bf30 body=95 status=ok
// SIG undefined FUN_14232bf30(void)

undefined8 * FUN_14232bf30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14504b468;
  param_1[0x44] = &PTR__scalar_deleting_destructor__144080980;
  FUN_14074e760(param_1 + 0x57);
  FUN_14074e810(param_1 + 0x45);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x330);
  }
  return param_1;
}



// FUNCTION 14232bf90 FUN_14232bf90 body=52 status=ok
// SIG undefined FUN_14232bf90(void)

undefined8 FUN_14232bf90(undefined8 param_1,ulonglong param_2)

{
  FUN_14061f760();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x710);
  }
  return param_1;
}



// FUNCTION 14232bfd0 FUN_14232bfd0 body=201 status=ok
// SIG undefined FUN_14232bfd0(void)

longlong FUN_14232bfd0(longlong param_1,ulonglong param_2)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x678);
  if (*(longlong *)(param_1 + 0x668) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x650);
  if (*(longlong *)(param_1 + 0x640) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x628);
  if (*(longlong *)(param_1 + 0x618) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x600);
  if (*(longlong *)(param_1 + 0x5f0) != 0) {
    FMemory::Free();
  }
  FUN_1404584f0(param_1 + 0x338);
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    FMemory::Free();
  }
  FUN_1405911f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6e0);
  }
  return param_1;
}



// FUNCTION 14232c0a0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
UCharacterMovementComponent::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14061f760();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x720);
  }
  return param_1;
}



// FUNCTION 14232c0e0 FUN_14232c0e0 body=276 status=ok
// SIG undefined FUN_14232c0e0(void)

longlong FUN_14232c0e0(longlong param_1,ulonglong param_2)

{
  TArray<TFunction<TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>,FDefaultAllocator>
  ::
  ~TArray<TFunction<TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>,FDefaultAllocator>
            (param_1 + 0x878);
  TArray<TFunction<TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>,FDefaultAllocator>
  ::
  ~TArray<TFunction<TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>,FDefaultAllocator>
            (param_1 + 0x860);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x828);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x818);
  if (*(longlong *)(param_1 + 0x7a8) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x628) = &PTR__scalar_deleting_destructor__144080980;
  FUN_14074e760(param_1 + 0x6c0);
  FUN_14074e810(param_1 + 0x630);
  FTickFunction::~FTickFunction(param_1 + 0x5b8);
  thunk_FUN_142478640(param_1 + 0x2a4);
  thunk_FUN_142478640(param_1 + 0x298);
  thunk_FUN_142478640(param_1 + 0x28c);
  thunk_FUN_142478640(param_1 + 0x280);
  thunk_FUN_142478640(param_1 + 0x274);
  *(undefined ***)(param_1 + 0x218) = &PTR_FUN_1442046d0;
  *(undefined ***)(param_1 + 0x210) = &PTR_FUN_14416af28;
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x890);
  }
  return param_1;
}



// FUNCTION 14232c200 `scalar_deleting_destructor' body=205 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UPluginCommandlet::_scalar_deleting_destructor_(longlong param_1,uint param_2)

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
  iVar2 = *(int *)(param_1 + 0x88);
  plVar1 = *(longlong **)(param_1 + 0x80);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x80);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  UCommandlet::~UCommandlet(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 14232c2d0 FUN_14232c2d0 body=310 status=ok
// SIG undefined FUN_14232c2d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14232c2d0(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  if (param_2 != 0xffffffff) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
    plVar1 = param_1 + 8;
    uVar7 = (ulonglong)param_2;
    plVar5 = (longlong *)((longlong)(int)param_2 * 0x10 + param_1[2]);
    if (*plVar1 != 0) {
      (**(code **)(*param_1 + 0x10))(param_1,plVar1);
    }
    plVar4 = (longlong *)plVar5[1];
    lVar6 = *plVar5;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_48 = lVar6;
    plStack_40 = plVar4;
    if (&local_48 != plVar1) {
      local_48 = *plVar1;
      plStack_40 = (longlong *)param_1[9];
      *plVar1 = lVar6;
      param_1[9] = (longlong)plVar4;
      local_38 = lVar6;
      plStack_30 = plVar4;
    }
    plVar1 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar5 = plStack_40 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_40 + 8))(plStack_40,1);
        }
      }
    }
    if (0 < (int)param_2) {
      lVar6 = 0;
      do {
        (**(code **)(*param_1 + 0x10))(param_1,param_1[2] + lVar6);
        lVar6 = lVar6 + 0x10;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              (param_1 + 2,0,param_2 + 1,0);
  }
  return;
}



// FUNCTION 14232c410 FUN_14232c410 body=104 status=ok
// SIG undefined FUN_14232c410(void)

void FUN_14232c410(longlong *param_1,char param_2)

{
  char cVar1;
  longlong *local_18;
  char local_10;
  
  if ((param_2 == '\0') && (cVar1 = (**(code **)(*param_1 + 0x2c8))(), cVar1 != '\x01')) {
    return;
  }
  (**(code **)(*param_1 + 0x260))(param_1);
  (**(code **)(*param_1 + 0x358))(param_1,1);
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 4;
  local_18 = param_1;
  local_10 = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x1f,&local_18);
  return;
}



// FUNCTION 14232c480 FUN_14232c480 body=95 status=ok
// SIG undefined FUN_14232c480(void)

void FUN_14232c480(longlong *param_1,char param_2)

{
  char cVar1;
  longlong *local_18;
  char local_10;
  
  if ((param_2 == '\0') && (cVar1 = (**(code **)(*param_1 + 0x2c8))(), cVar1 != '\x01')) {
    return;
  }
  (**(code **)(*param_1 + 0x558))(param_1,0);
  if ((*(byte *)((longlong)param_1 + 0xba) & 4) != 0) {
    local_18 = param_1;
    local_10 = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x1f,&local_18);
  }
  return;
}



// FUNCTION 14232c4e0 FUN_14232c4e0 body=344 status=ok
// SIG undefined FUN_14232c4e0(void)

void FUN_14232c4e0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (param_2 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x18))(param_1,*(undefined8 *)(param_2 + 0x10));
    if ((lVar1 != 0) && (lVar2 = (longlong)(int)param_1[0x11], (int)param_1[0x11] != 0)) {
      iVar7 = 0;
      bVar8 = *(longlong *)param_1[0x10] != lVar1;
      lVar4 = 0;
      iVar5 = 0;
      do {
        lVar4 = lVar4 + 1;
        iVar6 = iVar5 + 1;
        if (lVar4 < lVar2) {
          plVar3 = (longlong *)(param_1[0x10] + lVar4 * 8);
          do {
            if (bVar8 != (*plVar3 != lVar1)) break;
            iVar6 = iVar6 + 1;
            lVar4 = lVar4 + 1;
            plVar3 = plVar3 + 1;
          } while (lVar4 < lVar2);
        }
        if (bVar8 != false) {
          if (iVar7 != iVar5) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(param_1[0x10] + (longlong)iVar7 * 8),
                       (void *)(param_1[0x10] + (longlong)iVar5 * 8),(longlong)(iVar6 - iVar5) << 3)
            ;
          }
          iVar7 = iVar7 + (iVar6 - iVar5);
        }
        bVar8 = (bool)(bVar8 ^ 1);
        iVar5 = iVar6;
      } while (lVar4 < lVar2);
      *(int *)(param_1 + 0x11) = iVar7;
    }
    iVar5 = (int)param_1[0x11];
    *(int *)(param_1 + 0x11) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0x8c) < iVar5 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x10,iVar5);
    }
    *(longlong *)(param_1[0x10] + (longlong)iVar5 * 8) = param_2;
  }
  return;
}



// FUNCTION 14232c640 FUN_14232c640 body=197 status=ok
// SIG undefined FUN_14232c640(void)

void FUN_14232c640(longlong *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  float fVar4;
  
  fVar1 = *param_2;
  if ((((fVar1 != 0.0) || (param_2[1] != 0.0)) || (param_2[2] != 0.0)) &&
     ((char)param_1[0x49] != '\0')) {
    cVar3 = (**(code **)(*param_1 + 0x2a0))();
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(*param_1 + 0x5c0))(param_1);
      if ((cVar3 != '\0') && (1e-08 < *(float *)(param_1 + 99))) {
        fVar4 = 1.0 / *(float *)(param_1 + 99);
        fVar2 = param_2[2];
        *(float *)(param_1 + 0x75) = fVar4 * param_2[1] + *(float *)(param_1 + 0x75);
        *(float *)((longlong)param_1 + 0x3a4) =
             fVar1 * fVar4 + *(float *)((longlong)param_1 + 0x3a4);
        *(float *)((longlong)param_1 + 0x3ac) =
             fVar4 * fVar2 + *(float *)((longlong)param_1 + 0x3ac);
      }
    }
  }
  return;
}



// FUNCTION 14232c710 FUN_14232c710 body=264 status=ok
// SIG undefined FUN_14232c710(void)

void FUN_14232c710(longlong *param_1,float *param_2,char param_3)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float local_18;
  float fStack_14;
  
  if (((((*param_2 != 0.0) || (param_2[1] != 0.0)) || (param_2[2] != 0.0)) &&
      (((char)param_1[0x49] != '\0' && (cVar1 = (**(code **)(*param_1 + 0x2a0))(), cVar1 != '\0'))))
     && (cVar1 = (**(code **)(*param_1 + 0x5c0))(param_1), cVar1 != '\0')) {
    fVar3 = param_2[2];
    local_18 = (float)*(undefined8 *)param_2;
    fStack_14 = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
    if ((param_3 == '\0') && (1e-08 < *(float *)(param_1 + 99))) {
      fVar2 = 1.0 / *(float *)(param_1 + 99);
      local_18 = local_18 * fVar2;
      fStack_14 = fStack_14 * fVar2;
      fVar3 = fVar3 * fVar2;
    }
    *(float *)(param_1 + 0x73) = local_18 + *(float *)(param_1 + 0x73);
    *(float *)((longlong)param_1 + 0x39c) = fStack_14 + *(float *)((longlong)param_1 + 0x39c);
    *(float *)(param_1 + 0x74) = fVar3 + *(float *)(param_1 + 0x74);
  }
  return;
}



// FUNCTION 14232c820 FUN_14232c820 body=447 status=ok
// SIG undefined FUN_14232c820(void)

void FUN_14232c820(longlong *param_1,float *param_2,float param_3,float param_4,int param_5)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_98;
  float local_90;
  float local_80;
  
  lVar1 = param_1[0x2f];
  fVar8 = *(float *)(lVar1 + 0x220) - *param_2;
  fVar6 = *(float *)(lVar1 + 0x224) - param_2[1];
  fVar5 = *(float *)(lVar1 + 0x228) - param_2[2];
  fVar2 = fVar6 * fVar6 + fVar8 * fVar8 + fVar5 * fVar5;
  if (SQRT(fVar2) <= param_3) {
    local_90 = fVar5;
    fVar7 = fVar6;
    fVar3 = fVar8;
    if ((fVar2 != 1.0) &&
       (local_90 = DAT_1468b5d98, fVar7 = DAT_1468b5d94, fVar3 = DAT_1468b5d90, 1e-08 <= fVar2)) {
      auVar4 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
      fVar3 = auVar4._0_4_;
      fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
      fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
      local_90 = fVar5 * fVar3;
      fVar7 = fVar6 * fVar3;
      fVar3 = fVar8 * fVar3;
    }
    if ((param_5 == 1) && (0.0 < param_3)) {
      param_4 = (1.0 - SQRT(fVar2) / param_3) * param_4;
    }
    local_90 = local_90 * param_4;
    local_98 = CONCAT44(fVar7 * param_4,fVar3 * param_4);
    local_80 = local_90;
    (**(code **)(*param_1 + 0x7c8))(fVar3 * param_4,&local_98);
  }
  return;
}



// FUNCTION 14232c9e0 FUN_14232c9e0 body=456 status=ok
// SIG undefined FUN_14232c9e0(void)

void FUN_14232c9e0(longlong *param_1,float *param_2,float param_3,float param_4,int param_5,
                  undefined1 param_6)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_98;
  float local_90;
  float local_80;
  
  lVar1 = param_1[0x2f];
  fVar8 = *(float *)(lVar1 + 0x220) - *param_2;
  fVar6 = *(float *)(lVar1 + 0x224) - param_2[1];
  fVar5 = *(float *)(lVar1 + 0x228) - param_2[2];
  fVar2 = fVar6 * fVar6 + fVar8 * fVar8 + fVar5 * fVar5;
  if (SQRT(fVar2) <= param_3) {
    local_90 = fVar5;
    fVar7 = fVar6;
    fVar3 = fVar8;
    if ((fVar2 != 1.0) &&
       (local_90 = DAT_1468b5d98, fVar7 = DAT_1468b5d94, fVar3 = DAT_1468b5d90, 1e-08 <= fVar2)) {
      auVar4 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
      fVar3 = auVar4._0_4_;
      fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
      fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
      local_90 = fVar5 * fVar3;
      fVar7 = fVar6 * fVar3;
      fVar3 = fVar8 * fVar3;
    }
    if ((param_5 == 1) && (0.0 < param_3)) {
      param_4 = (1.0 - SQRT(fVar2) / param_3) * param_4;
    }
    local_90 = local_90 * param_4;
    local_98 = CONCAT44(fVar7 * param_4,fVar3 * param_4);
    local_80 = local_90;
    (**(code **)(*param_1 + 0x7c0))(fVar3 * param_4,&local_98,param_6);
  }
  return;
}



// FUNCTION 14232cbb0 FUN_14232cbb0 body=211 status=ok
// SIG undefined FUN_14232cbb0(void)

void FUN_14232cbb0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int *piVar3;
  ulonglong uVar4;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    (**(code **)(*param_2 + 0x38))(param_2,param_1 + 8,0,0);
  }
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x10,0,0);
  uVar2 = 0;
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38),0,0);
  piVar3 = *(int **)(param_1 + 0x40);
  uVar4 = (longlong)*(int *)(param_1 + 0x48) & 0x3fffffffffffffff;
  if (piVar3 + *(int *)(param_1 + 0x48) < piVar3) {
    uVar4 = uVar2;
  }
  if (uVar4 != 0) {
    do {
      plVar1 = (longlong *)((longlong)*piVar3 + *(longlong *)(param_1 + 0x20));
      if (*plVar1 != 0) {
        (**(code **)(*param_2 + 0x38))(param_2,plVar1,0,0);
      }
      piVar3 = piVar3 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar4);
  }
  return;
}



// FUNCTION 14232cc90 AddReferencedObjects body=131 status=ok
// SIG undefined AddReferencedObjects(void)

void FComponentInstanceDataCache::AddReferencedObjects(ulonglong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  FReferenceCollector::
  AddReferencedObjects<USoundMix,FSoundMixState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundMix_*,FSoundMixState,0>_>
            (param_2,param_1 + 2,0,0);
  plVar4 = (longlong *)*param_1;
  uVar2 = 0;
  uVar3 = (longlong)(int)param_1[1] & 0x1fffffffffffffff;
  if (plVar4 + (int)param_1[1] < plVar4) {
    uVar3 = uVar2;
  }
  if (uVar3 != 0) {
    do {
      plVar1 = (longlong *)*plVar4;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      }
      plVar4 = plVar4 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar3);
  }
  return;
}



// FUNCTION 14232cd60 FUN_14232cd60 body=280 status=ok
// SIG undefined FUN_14232cd60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14232cd60(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_358 [32];
  undefined1 local_338;
  code *local_328 [2];
  undefined1 local_318 [32];
  undefined8 local_2f8;
  undefined4 local_2e8;
  longlong local_2d8;
  undefined8 local_2d0;
  undefined1 local_2c8 [688];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_358;
  *(byte *)(param_1 + 0x2f0) = *(byte *)(param_1 + 0x2f0) | 0x10;
  FSoundAttenuationSettings::operator=(param_1 + 0x338);
  if ((*(byte *)(param_1 + 0xba) & 4) != 0) {
    local_2d8 = FUN_14233c7a0(param_1);
    if (local_2d8 != 0) {
      local_2d0 = *(undefined8 *)(param_1 + 0x6b0);
      FSoundAttenuationSettings::FSoundAttenuationSettings(local_2c8,param_2);
      local_2f8 = 0;
      local_2e8 = 0;
      puVar1 = (undefined8 *)FUN_140438ef0(0x2c0,local_318);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_CopyToEmptyStorage_14504b5c0;
        puVar1[1] = local_2d8;
        puVar1[2] = local_2d0;
        FSoundAttenuationSettings::FSoundAttenuationSettings(puVar1 + 3,local_2c8);
      }
      local_328[0] = FUN_142332530;
      FUN_1422f8a30(local_328,local_338);
      FUN_1404584f0(local_2c8);
    }
  }
  return;
}



// FUNCTION 14232ce80 FUN_14232ce80 body=889 status=ok
// SIG undefined FUN_14232ce80(void)

void FUN_14232ce80(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  undefined8 local_f8;
  float local_f0;
  byte local_e8 [4];
  undefined4 local_e4;
  uint local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined8 local_d4;
  float local_cc;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if (((byte)*(uint *)(param_1 + 0x82) & 3) == 3) {
    fVar6 = *(float *)((longlong)param_1 + 0x414);
    if ((*(uint *)(param_1 + 0x82) & 4) != 0) {
      if ((fVar6 < 1.9) && (1.9 < *(float *)(param_1 + 0x83) || *(float *)(param_1 + 0x83) == 1.9))
      {
        return;
      }
      fVar6 = *(float *)(param_1 + 0x83);
    }
    if ((fVar6 < 1.9) || (2.4 < fVar6)) {
      _guard_xfg_dispatch_icall_nop(local_e8,0,0x90);
      lVar1 = param_1[0x2f];
      local_dc = 0x3f800000;
      fVar5 = 2.15 - fVar6;
      local_48 = *(undefined8 *)(lVar1 + 0x220);
      uStack_40 = *(undefined8 *)(lVar1 + 0x228);
      local_58 = *(undefined4 *)(lVar1 + 0x210);
      uStack_54 = *(undefined4 *)(lVar1 + 0x214);
      uStack_50 = *(undefined4 *)(lVar1 + 0x218);
      uStack_4c = *(undefined4 *)(lVar1 + 0x21c);
      local_f8 = 0;
      local_f0 = fVar5;
      FUN_1423755e0(param_1,&local_f8,&local_58,1,local_e8,0);
      uVar3 = 0;
      if (((local_e8[0] & 1) == 0) || ((local_e8[0] & 2) != 0)) {
        *(float *)((longlong)param_1 + 0x414) = fVar5 + *(float *)((longlong)param_1 + 0x414);
      }
      else if (fVar5 <= 0.0) {
        *(float *)((longlong)param_1 + 0x414) = *(float *)(param_1[0x2f] + 0x228) - local_cc;
        cVar2 = (**(code **)(*param_1 + 0x7f0))(param_1,local_e8);
        if (cVar2 != '\0') {
          if (((local_e8[0] & 1) == 0) || (uVar4 = 3, (local_e8[0] & 2) != 0)) {
            uVar4 = 2;
          }
          *(undefined4 *)((longlong)param_1 + 0x414) = *(undefined4 *)((longlong)param_1 + 0x414);
          *(uint *)(param_1 + 0x82) = *(uint *)(param_1 + 0x82) & 0xfffffffa | uVar4;
          *(undefined4 *)(param_1 + 0x83) = 0;
          *(byte *)(param_1 + 0x84) = *(byte *)(param_1 + 0x84) & 0xfe;
          *(uint *)(param_1 + 0x85) = *(uint *)(param_1 + 0x85) & 0xfffffffe;
          *(undefined4 *)((longlong)param_1 + 0x42c) = local_dc;
          *(byte *)(param_1 + 0x84) =
               (*(byte *)(param_1 + 0x84) ^ local_e8[0]) & 2 ^
               (local_e8[0] & 1 | *(byte *)(param_1 + 0x84));
          *(undefined4 *)((longlong)param_1 + 0x424) = local_e4;
          *(undefined8 *)((longlong)param_1 + 0x434) = local_d4;
          *(uint *)(param_1 + 0x85) = *(uint *)(param_1 + 0x85) | local_e0 & 1;
          *(float *)((longlong)param_1 + 0x43c) = local_cc;
          param_1[0x88] = local_c8;
          *(undefined4 *)(param_1 + 0x89) = local_c0;
          *(undefined8 *)((longlong)param_1 + 0x44c) = local_bc;
          *(undefined4 *)((longlong)param_1 + 0x454) = local_b4;
          param_1[0x8b] = local_b0;
          *(undefined4 *)(param_1 + 0x8c) = local_a8;
          *(undefined8 *)((longlong)param_1 + 0x464) = local_a4;
          *(undefined4 *)((longlong)param_1 + 0x46c) = local_9c;
          param_1[0x8e] = local_98;
          *(undefined4 *)(param_1 + 0x8f) = local_90;
          *(undefined4 *)(param_1 + 0x90) = local_88;
          *(undefined4 *)(param_1 + 0x86) = local_d8;
          *(undefined4 *)((longlong)param_1 + 0x47c) = local_8c;
          *(undefined4 *)((longlong)param_1 + 0x484) = local_84;
          *(undefined4 *)(param_1 + 0x91) = local_80;
          *(undefined4 *)((longlong)param_1 + 0x48c) = local_7c;
          *(undefined4 *)(param_1 + 0x92) = local_78;
          *(undefined4 *)((longlong)param_1 + 0x494) = local_74;
          *(undefined4 *)(param_1 + 0x93) = local_70;
          param_1[0x94] = local_68;
          param_1[0x95] = local_60;
        }
      }
      else {
        *(float *)((longlong)param_1 + 0x414) =
             (*(float *)(param_1[0x2f] + 0x228) - (float)uStack_40) +
             *(float *)((longlong)param_1 + 0x414);
      }
      if (((*(uint *)((longlong)param_1 + 0x4b4) & 1) == 0) || (fVar6 < 0.0)) {
        uVar3 = 0x20;
      }
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x100;
      *(uint *)((longlong)param_1 + 0x4b4) = uVar3 | *(uint *)((longlong)param_1 + 0x4b4);
    }
  }
  return;
}



// FUNCTION 14232d2e0 FUN_14232d2e0 body=197 status=ok
// SIG undefined FUN_14232d2e0(void)

void FUN_14232d2e0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  code *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  if ((*(byte *)(param_1 + 0xba) & 4) != 0) {
    lVar2 = FUN_14233c7a0();
    if (lVar2 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x6b0);
      local_48 = 0;
      local_38 = 0;
      puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_68);
      if (puVar3 != (undefined8 *)0x0) {
        local_98 = (undefined4)lVar2;
        uStack_94 = (undefined4)((ulonglong)lVar2 >> 0x20);
        uStack_90 = (undefined4)uVar1;
        uStack_8c = (undefined4)((ulonglong)uVar1 >> 0x20);
        *(undefined4 *)(puVar3 + 1) = local_98;
        *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_94;
        *(undefined4 *)(puVar3 + 2) = uStack_90;
        *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_8c;
        *puVar3 = &PTR_FUN_143f4d0b0;
        puVar3[3] = CONCAT44(param_3,param_2);
      }
      local_78[0] = FUN_1423327e0;
      FUN_1422f8a30(local_78,local_res8);
    }
  }
  return;
}



// FUNCTION 14232d3b0 FUN_14232d3b0 body=433 status=ok
// SIG undefined FUN_14232d3b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14232d3b0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = (undefined8 *)operator_new(0x330);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14504b468;
    *(uint *)(puVar1 + 0xc) = *(uint *)(puVar1 + 0xc) & 0xfffffff8;
    *(undefined8 *)((longlong)puVar1 + 100) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xdc) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xe4) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x1d) = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    _guard_xfg_dispatch_icall_nop(puVar1 + 0xe,0,0x90);
    *(undefined4 *)((longlong)puVar1 + 0x7c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x27) = 0xffffffff;
    *(undefined8 *)((longlong)puVar1 + 0x13c) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x144) = 0;
    *(undefined4 *)(puVar1 + 0x32) = 0xffffffff;
    *(undefined8 *)((longlong)puVar1 + 0x194) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x19c) = 0;
    *(undefined4 *)(puVar1 + 0x39) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined1 *)(puVar1 + 0x3c) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1e4) = 0;
    uVar4 = uRam0000000146af005c;
    *(undefined4 *)(puVar1 + 0x3e) = 0;
    *(undefined4 *)((longlong)puVar1 + 500) = 0;
    *(undefined4 *)(puVar1 + 0x3f) = 0;
    *(uint *)((longlong)puVar1 + 0x1fc) = uVar4;
    puVar1[0x40] = 0;
    puVar1[0x41] = 0;
    uVar4 = uRam0000000146af0054 & uRam0000000146af0064;
    uVar5 = uRam0000000146af0058 & uRam0000000146af0068;
    uVar6 = uRam0000000146af005c & uRam0000000146af006c;
    *(uint *)(puVar1 + 0x42) = _DAT_146af0050 & _DAT_146af0060;
    *(uint *)((longlong)puVar1 + 0x214) = uVar4;
    *(uint *)(puVar1 + 0x43) = uVar5;
    *(uint *)((longlong)puVar1 + 0x21c) = uVar6;
    FRootMotionSourceGroup::FRootMotionSourceGroup(puVar1 + 0x44);
    *(undefined4 *)((longlong)puVar1 + 0x324) = 0x3f800000;
    *(undefined4 *)(puVar1 + 100) = 0x3f666666;
    *(undefined4 *)(puVar1 + 0x65) = 0x3f7ef9db;
    *(undefined4 *)((longlong)puVar1 + 0x32c) = 0x41200000;
    puVar3 = puVar1;
  }
  *param_2 = puVar3;
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  return param_2;
}



// FUNCTION 14232d570 FUN_14232d570 body=275 status=ok
// SIG undefined FUN_14232d570(void)

void FUN_14232d570(longlong param_1,longlong **param_2)

{
  void *_Src;
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *local_28;
  ulonglong local_20;
  
  local_28 = (longlong *)0x0;
  local_20 = 0;
  if (&local_28 != param_2) {
    plVar4 = *param_2;
    uVar2 = *(uint *)(param_2 + 1);
    local_20 = (ulonglong)uVar2;
    if (uVar2 != 0) {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_28,uVar2,0);
      plVar1 = local_28;
      do {
        *plVar1 = 0;
        iVar3 = (int)plVar4[1];
        _Src = (void *)*plVar4;
        *(int *)(plVar1 + 1) = iVar3;
        if (iVar3 == 0) {
          *(undefined4 *)((longlong)plVar1 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar1,iVar3,0);
          _guard_xfg_dispatch_icall_nop((void *)*plVar1,_Src,(longlong)iVar3 * 2);
        }
        plVar1 = plVar1 + 2;
        plVar4 = plVar4 + 2;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x1d8,&local_28);
  plVar4 = local_28;
  for (iVar3 = (int)local_20; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 14232d690 FUN_14232d690 body=292 status=ok
// SIG undefined FUN_14232d690(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14232d690(longlong *param_1,float param_2)

{
  char cVar1;
  float fVar2;
  
  if ((*(float *)(param_1 + 0x74) != 0.0) || (*(float *)((longlong)param_1 + 0x3ac) != 0.0)) {
    cVar1 = (**(code **)(*param_1 + 0x560))();
    if (cVar1 != '\0') {
      fVar2 = (float)(**(code **)(*param_1 + 0x3f8))(param_1);
      if (1e-08 < param_2 * *(float *)((longlong)param_1 + 0x3ac) + *(float *)(param_1 + 0x74) +
                  fVar2 * param_2) {
        (**(code **)(*param_1 + 0x5a0))(param_1,3);
      }
    }
  }
  *(float *)((longlong)param_1 + 0x18c) =
       param_2 * *(float *)((longlong)param_1 + 0x3a4) + *(float *)(param_1 + 0x73) +
       *(float *)((longlong)param_1 + 0x18c);
  *(float *)(param_1 + 0x32) =
       *(float *)(param_1 + 0x75) * param_2 + *(float *)((longlong)param_1 + 0x39c) +
       *(float *)(param_1 + 0x32);
  *(float *)((longlong)param_1 + 0x194) =
       *(float *)((longlong)param_1 + 0x3ac) * param_2 + *(float *)(param_1 + 0x74) +
       *(float *)((longlong)param_1 + 0x194);
  param_1[0x73] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x74) = DAT_1468b5d98;
  *(longlong *)((longlong)param_1 + 0x3a4) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x3ac) = DAT_1468b5d98;
  return;
}



// FUNCTION 14232d7c0 FUN_14232d7c0 body=241 status=ok
// SIG undefined FUN_14232d7c0(void)

void FUN_14232d7c0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  float fVar3;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  float local_40;
  float local_30;
  
  if (((*(float *)((longlong)param_1 + 0x324) != 0.0) && ((*(byte *)(param_1 + 0x84) & 1) != 0)) &&
     ((*(byte *)(param_1 + 0x84) & 2) == 0)) {
    plVar2 = (longlong *)FWeakObjectPtr::Get((longlong)param_1 + 0x494);
    fVar3 = (float)(**(code **)(*param_1 + 0x3f8))(param_1);
    if (((plVar2 != (longlong *)0x0) &&
        (cVar1 = (**(code **)(*plVar2 + 0x408))(plVar2), cVar1 != '\0')) && (fVar3 != 0.0)) {
      local_50 = (undefined4)param_1[0x89];
      local_58 = param_1[0x88];
      local_40 = fVar3 * *(float *)(param_1 + 99) * *(float *)((longlong)param_1 + 0x324);
      local_48 = 0;
      local_30 = local_40;
      (**(code **)(*plVar2 + 0x608))(plVar2,&local_48,&local_58,param_1[0x94]);
    }
  }
  return;
}



// FUNCTION 14232d8c0 FUN_14232d8c0 body=1395 status=ok
// SIG undefined FUN_14232d8c0(void)

void FUN_14232d8c0(longlong *param_1,byte *param_2,float *param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_128;
  float local_120;
  undefined8 local_118;
  float local_110;
  undefined8 local_108;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  
  if ((((*(char *)((longlong)param_1 + 0x31c) != '\0') && ((*param_2 & 1) != 0)) &&
      (plVar5 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x74), plVar5 != (longlong *)0x0)) &&
     (((lVar6 = (**(code **)(*plVar5 + 0x6d0))(plVar5,*(undefined8 *)(param_2 + 0x80),1), lVar6 != 0
       && (cVar4 = FUN_1426aaac0(lVar6), cVar4 != '\0')) &&
      (cVar4 = FBodyInstance::IsValidBodyInstance(lVar6), cVar4 != '\0')))) {
    local_118 = *(undefined8 *)(param_2 + 0x20);
    fVar9 = *(float *)(param_2 + 0x28);
    fVar7 = (float)FUN_142696270(lVar6);
    fVar14 = 1.0;
    if (fVar7 <= 1.0) {
      fVar7 = 1.0;
    }
    if (*(char *)((longlong)param_1 + 799) != '\0') {
      FUN_142695cf0(lVar6,&local_e8);
      fVar8 = (local_d4 - local_e0) * 0.5;
      if (((0.0001 < ABS((local_dc - local_e8) * 0.5)) ||
          (0.0001 < ABS((local_d8 - local_e4) * 0.5))) || (0.0001 < ABS(fVar8))) {
        fVar9 = fVar8 * *(float *)(param_1 + 0x66) + fVar8 + local_e0;
        local_100 = fVar9;
      }
    }
    fVar8 = *(float *)(param_2 + 0x38);
    fVar1 = *(float *)(param_2 + 0x3c);
    fVar2 = *(float *)(param_2 + 0x40);
    local_128 = 0;
    UPrimitiveComponent::GetPhysicsAngularVelocityInRadians(plVar5,&local_f8,0);
    fVar11 = *param_3;
    if (((fVar11 == 0.0) && (param_3[1] == 0.0)) && (param_3[2] == 0.0)) {
      local_108 = *param_4;
      local_100 = *(float *)(param_4 + 1);
    }
    else {
      fVar3 = param_3[2];
      fVar10 = param_3[1] * param_3[1] + fVar11 * fVar11 + fVar3 * fVar3;
      if (fVar10 == 1.0) {
        local_128 = *(undefined8 *)param_3;
        local_120 = param_3[2];
        fVar15 = (float)local_128;
        fVar16 = (float)((ulonglong)local_128 >> 0x20);
        fVar12 = local_120;
      }
      else {
        fVar15 = DAT_1468b5d90;
        fVar16 = DAT_1468b5d94;
        fVar12 = DAT_1468b5d98;
        if (1e-08 <= fVar10) {
          auVar13 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
          fVar12 = auVar13._0_4_;
          fVar12 = fVar12 + fVar12 * (0.5 - fVar10 * 0.5 * fVar12 * fVar12);
          fVar12 = fVar12 + fVar12 * (0.5 - fVar10 * 0.5 * fVar12 * fVar12);
          local_128 = CONCAT44(local_128._4_4_,fVar12);
          fVar15 = fVar11 * fVar12;
          fVar16 = param_3[1] * fVar12;
          fVar12 = fVar3 * fVar12;
        }
      }
      fVar11 = (float)(**(code **)(*param_1 + 0x400))(param_1);
      local_100 = fVar12 * fVar11;
      local_108 = CONCAT44(fVar16 * fVar11,fVar15 * fVar11);
    }
    if (((char)param_1[100] != '\0') &&
       (((0.0001 < ABS(local_f8) || (0.0001 < ABS(local_f4))) || (0.0001 < ABS(local_f0))))) {
      local_128._4_4_ = (float)((ulonglong)local_108 >> 0x20);
      local_128._0_4_ = (float)local_108;
      fVar11 = local_128._4_4_ * local_f4 + (float)local_128 * local_f8 + local_100 * local_f0;
      if ((0.0 < fVar11) && (fVar11 < 1.0)) {
        fVar14 = fVar11;
      }
    }
    if (*(char *)((longlong)param_1 + 0x31e) != '\0') {
      fVar14 = fVar14 * fVar7;
    }
    local_110 = fVar9;
    if (((0.0001 < ABS(local_f8)) || (0.0001 < ABS(local_f4))) || (0.0001 < ABS(local_f0))) {
      fVar9 = *(float *)((longlong)param_1 + 0x32c);
      local_120 = fVar9 * -fVar2 * fVar14;
      local_128 = CONCAT44(fVar9 * -fVar1 * fVar14,fVar9 * -fVar8 * fVar14);
      local_100 = local_120;
      (**(code **)(*plVar5 + 0x608))(plVar5,&local_128,&local_118,*(undefined8 *)(param_2 + 0x80));
    }
    else {
      fVar9 = *(float *)(param_1 + 0x65);
      local_120 = fVar9 * -fVar2 * fVar14;
      local_128 = CONCAT44(fVar9 * -fVar1 * fVar14,fVar9 * -fVar8 * fVar14);
      local_100 = local_120;
      (**(code **)(*plVar5 + 0x5f0))(plVar5,&local_128,&local_118,*(undefined8 *)(param_2 + 0x80));
    }
  }
  return;
}



// FUNCTION 14232dec0 FUN_14232dec0 body=1441 status=ok
// SIG undefined FUN_14232dec0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14232dec0(longlong param_1,float param_2)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  bool bVar9;
  undefined8 uVar10;
  float fVar11;
  char cVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auStack_2d8 [32];
  undefined1 *local_2b8;
  undefined1 local_2b0;
  undefined1 local_2a8;
  undefined4 local_298 [2];
  undefined4 local_290;
  undefined4 local_28c;
  float local_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined4 uStack_274;
  float fStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_258;
  float local_250;
  float local_248;
  float fStack_244;
  float local_240;
  float local_238;
  float local_234;
  float local_220;
  byte local_218 [12];
  undefined4 local_20c;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1bc;
  undefined1 local_188 [19];
  undefined2 local_175;
  longlong local_140;
  longlong local_120;
  undefined1 local_108 [16];
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_2d8;
  lVar3 = *(longlong *)(param_1 + 0x180);
  if ((((lVar3 != 0) && (0.0 < *(float *)(param_1 + 0x340))) &&
      (*(longlong *)(param_1 + 0x220) != 0)) && (0 < *(int *)(lVar3 + 0x3a8))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146af0378) &&
       (_Init_thread_header(&DAT_146af0378), DAT_146af0378 == -1)) {
      FName::FName(&DAT_146af0370,"CMC_ApplyRepulsionForce",1);
      _Init_thread_footer(&DAT_146af0378);
    }
    uVar15 = 0;
    local_2b8 = (undefined1 *)0x0;
    FUN_1422ffb20(local_188,DAT_146af0370,local_298,0);
    local_175 = 0;
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x220) + 0x4d0);
    lVar4 = *(longlong *)(param_1 + 0x180);
    auVar26._0_4_ = *(uint *)(lVar14 + 0x230) & _DAT_146af0070;
    auVar26._4_4_ = *(uint *)(lVar14 + 0x234) & uRam0000000146af0074;
    auVar26._8_4_ = *(uint *)(lVar14 + 0x238) & uRam0000000146af0078;
    auVar26._12_4_ = *(uint *)(lVar14 + 0x23c) & uRam0000000146af007c;
    auVar27._4_4_ = auVar26._8_4_;
    auVar27._0_4_ = auVar26._4_4_;
    auVar27._8_4_ = auVar26._0_4_;
    auVar27._12_4_ = auVar26._12_4_;
    auVar27 = minps(auVar26,auVar27);
    uVar6 = *(undefined4 *)(lVar4 + 0x220);
    uVar7 = *(undefined4 *)(lVar4 + 0x224);
    uVar10 = *(undefined8 *)(lVar4 + 0x220);
    fVar8 = *(float *)(lVar4 + 0x228);
    uStack_26c = *(undefined4 *)(lVar4 + 0x22c);
    auVar5._4_4_ = auVar26._0_4_;
    auVar5._0_4_ = auVar26._8_4_;
    auVar5._8_4_ = auVar26._4_4_;
    auVar5._12_4_ = auVar26._12_4_;
    auVar27 = minps(auVar27,auVar5);
    fVar24 = auVar27._0_4_;
    local_280 = CONCAT44(local_280._4_4_,fVar24);
    fVar1 = *(float *)(lVar14 + 0x714);
    fVar25 = fVar24 * *(float *)(lVar14 + 0x710);
    uVar17 = uVar15;
    local_278 = uVar6;
    uStack_274 = uVar7;
    fStack_270 = fVar8;
    if (0 < *(int *)(lVar3 + 0x3a8)) {
      do {
        lVar14 = *(longlong *)(lVar3 + 0x3a0);
        plVar13 = (longlong *)FWeakObjectPtr::Get(lVar14 + 0x7c + uVar15);
        if ((plVar13 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar13 + 0x24e))) {
          iVar2 = *(int *)(uVar15 + 0x68 + lVar14);
          if (iVar2 == -1) {
LAB_14232e123:
            local_280 = 0;
            lVar14 = (**(code **)(*plVar13 + 0x6d0))(plVar13,0,1);
          }
          else {
            lVar14 = FUN_142a07000();
            if ((*(int *)(plVar13[2] + 0x90) < *(int *)(lVar14 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar13[2] + 0x88) + (longlong)*(int *)(lVar14 + 0x90) * 8) !=
                lVar14 + 0x88)) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if (!bVar9) goto LAB_14232e123;
            if ((iVar2 < 0) || ((int)plVar13[0x17f] <= iVar2)) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if (!bVar9) goto LAB_14232e349;
            lVar14 = *(longlong *)(plVar13[0x17e] + (longlong)iVar2 * 8);
          }
          if (lVar14 != 0) {
            cVar12 = FUN_1426aaac0(lVar14);
            if ((cVar12 == '\0') ||
               (cVar12 = FBodyInstance::IsValidBodyInstance(lVar14), cVar12 == '\0')) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if (bVar9) {
              FUN_142699110(lVar14,local_108,1,0);
              FUN_142699400(lVar14);
              fVar11 = fStack_f0;
              fVar19 = fStack_f4;
              fVar18 = local_f8;
              fStack_270 = fStack_f0;
              _guard_xfg_dispatch_icall_nop(local_218,0,0x90);
              local_2b8 = local_188;
              local_20c = 0x3f800000;
              local_220 = fVar11;
              local_250 = fVar11;
              local_240 = fStack_270;
              local_248 = fVar18;
              fStack_244 = fVar19;
              local_258 = uVar10;
              cVar12 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x858))
                                 (*(longlong **)(param_1 + 0x180),local_218,&local_248);
              if (((local_218[0] & 2) != 0) || (2.5 < local_1bc)) {
                bVar9 = true;
              }
              else {
                bVar9 = false;
              }
              fVar20 = local_1f4;
              fVar22 = local_1f8;
              fVar23 = local_1f0;
              if (cVar12 == '\0') {
                bVar9 = true;
                fVar20 = fVar19;
                fVar22 = fVar18;
                fVar23 = fVar11;
              }
              fVar21 = fVar20 - (fVar19 + local_234 * param_2);
              fVar19 = (fVar20 - fVar19) * (fVar20 - fVar19) + (fVar22 - fVar18) * (fVar22 - fVar18)
              ;
              fVar22 = fVar22 - (fVar18 + local_238 * param_2);
              if (((cVar12 == '\0') || (2.5 <= fVar19)) || (bVar9)) {
                if ((fVar21 * fVar21 + fVar22 * fVar22 <= fVar19) || (bVar9)) {
                  local_288 = fVar23;
                  if (cVar12 == '\0') {
                    local_288 = fVar8 - fVar25;
                    fVar18 = fVar8 + fVar25;
                    if ((local_288 <= fVar11) && (local_288 = fVar18, fVar11 < fVar18)) {
                      local_288 = fVar11;
                    }
                  }
                  local_2a8 = 1;
                  local_2b0 = 0;
                  local_2b8 = (undefined1 *)((ulonglong)local_2b8 & 0xffffffffffffff00);
                  local_290 = uVar6;
                  local_28c = uVar7;
                  FUN_14268eaa0(lVar14,&local_290,fVar24 * fVar1 * 1.2,
                                *(float *)(param_1 + 0x318) * *(float *)(param_1 + 0x340));
                }
              }
              else {
                local_268 = 0;
                local_260 = 0;
                FUN_1426a9420(lVar14,&local_268,0);
              }
            }
          }
        }
LAB_14232e349:
        uVar16 = (int)uVar17 + 1;
        uVar15 = uVar15 + 0xa0;
        uVar17 = (ulonglong)uVar16;
      } while ((int)uVar16 < *(int *)(lVar3 + 0x3a8));
    }
    if (local_120 != 0) {
      FMemory::Free();
    }
    if (local_140 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14232e470 FUN_14232e470 body=973 status=ok
// SIG undefined FUN_14232e470(void)

undefined8
FUN_14232e470(longlong *param_1,float param_2,float param_3,undefined8 param_4,float param_5,
             undefined8 param_6,undefined8 *param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  char cVar6;
  float fVar7;
  float fVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_c8;
  float fStack_c4;
  float local_c0;
  
  uVar16 = (undefined4)((ulonglong)param_4 >> 0x20);
  fVar13 = (float)param_4;
  uVar5 = *(uint *)((longlong)param_1 + 0x4b4);
  if ((uVar5 >> 0x16 & 1) != 0) {
    fVar11 = *(float *)(param_1 + 0x9a);
    fVar1 = *(float *)((longlong)param_1 + 0x4cc);
    fVar2 = *(float *)((longlong)param_1 + 0x4d4);
    fVar12 = fVar1 * fVar1 + fVar11 * fVar11 + fVar2 * fVar2;
    if (0.0001 <= fVar12) {
      fVar12 = SQRT(fVar12);
      fVar7 = 1.0 / fVar12;
      fVar15 = fVar13;
      if (((uVar5 >> 0x17 & 1) == 0) && (fVar15 = fVar12, uVar16 = 0, fVar13 <= fVar12)) {
        fVar15 = fVar13;
      }
      fVar12 = *(float *)(param_1 + 0x32);
      fVar3 = *(float *)((longlong)param_1 + 0x18c);
      fVar4 = *(float *)((longlong)param_1 + 0x194);
      local_c8 = DAT_1468b5d90;
      local_c0 = DAT_1468b5d98;
      fStack_c4 = DAT_1468b5d94;
      uVar9 = (ulonglong)(uint)(fVar12 * fVar12);
      fVar17 = fVar1 * fVar7 * fVar15;
      fVar18 = fVar11 * fVar7 * fVar15;
      fVar19 = fVar2 * fVar7 * fVar15;
      fVar10 = fVar3 * fVar3 + fVar12 * fVar12 + fVar4 * fVar4;
      if (((uVar5 & 0x100000) == 0) ||
         (fVar8 = fVar15 * fVar15 * 1.0201, uVar9 = CONCAT44(uVar16,fVar8), fVar8 <= fVar10)) {
        if (((uVar5 & 0x100000) == 0) ||
           (cVar6 = (**(code **)(*param_1 + 0x428))(uVar9,fVar13), cVar6 == '\0')) {
          *(ulonglong *)((longlong)param_1 + 0x18c) = CONCAT44(fVar18,fVar17);
          *(float *)((longlong)param_1 + 0x194) = fVar19;
          fVar13 = fVar15;
        }
      }
      else {
        fVar10 = SQRT(fVar10);
        param_5 = param_2 * param_5;
        if (1.0 <= param_5) {
          param_5 = 1.0;
        }
        param_2 = 1.0 / param_2;
        *(ulonglong *)((longlong)param_1 + 0x18c) =
             CONCAT44(fVar12 - (fVar12 - fVar11 * fVar7 * fVar10) * param_5,
                      fVar3 - (fVar3 - fVar1 * fVar7 * fVar10) * param_5);
        *(float *)((longlong)param_1 + 0x194) = fVar4 - (fVar4 - fVar2 * fVar7 * fVar10) * param_5;
        local_c8 = (fVar17 - *(float *)((longlong)param_1 + 0x18c)) * param_2;
        fStack_c4 = (fVar18 - *(float *)(param_1 + 0x32)) * param_2;
        local_c0 = (fVar19 - *(float *)((longlong)param_1 + 0x194)) * param_2;
        if (0.0001 <= param_3) {
          fVar11 = fStack_c4 * fStack_c4 + local_c8 * local_c8 + local_c0 * local_c0;
          fVar13 = fVar15;
          if (param_3 * param_3 < fVar11) {
            auVar14 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
            fVar13 = auVar14._0_4_;
            fVar13 = fVar13 + fVar13 * (0.5 - fVar11 * 0.5 * fVar13 * fVar13);
            param_3 = (fVar13 + fVar13 * (0.5 - fVar11 * 0.5 * fVar13 * fVar13)) * param_3;
            local_c8 = local_c8 * param_3;
            fStack_c4 = fStack_c4 * param_3;
            local_c0 = local_c0 * param_3;
            fVar13 = fVar15;
          }
        }
        else {
          local_c8 = DAT_1468b5d90;
          local_c0 = DAT_1468b5d98;
          fStack_c4 = DAT_1468b5d94;
          fVar13 = fVar15;
        }
      }
      *param_8 = fVar13;
      *param_7 = CONCAT44(fStack_c4,local_c8);
      *(float *)(param_7 + 1) = local_c0;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14232e840 FUN_14232e840 body=434 status=ok
// SIG undefined FUN_14232e840(void)

void FUN_14232e840(longlong *param_1,float param_2)

{
  char cVar1;
  char cVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  undefined1 local_48 [8];
  float local_40;
  
  cVar1 = (**(code **)(*param_1 + 0xa60))();
  if ((cVar1 == '\0') || (param_2 <= 0.0)) {
    puVar3 = (undefined8 *)((longlong)param_1 + 0x18c);
    local_40 = *(float *)((longlong)param_1 + 0x194);
    cVar1 = FRootMotionSourceGroup::HasOverrideVelocity(param_1 + 0xc5);
    if (cVar1 != '\0') {
      FRootMotionSourceGroup::AccumulateOverrideRootMotionVelocity
                (param_1 + 0xc5,param_2,param_1[0x44],param_1,puVar3);
    }
    cVar2 = FUN_142453680(param_1 + 0xc5);
    if (cVar2 != '\0') {
      *(undefined8 *)((longlong)param_1 + 0x714) = *puVar3;
      *(undefined4 *)((longlong)param_1 + 0x71c) = *(undefined4 *)((longlong)param_1 + 0x194);
      FRootMotionSourceGroup::AccumulateAdditiveRootMotionVelocity
                (param_1 + 0xc5,param_2,param_1[0x44],param_1,puVar3);
      *(undefined1 *)(param_1 + 0xe4) = 1;
    }
    fVar5 = *(float *)((longlong)param_1 + 0x194) - local_40;
    if (((cVar2 != '\0' || cVar1 != '\0') && (fVar5 != 0.0)) &&
       (cVar1 = (**(code **)(*param_1 + 0x560))(param_1), cVar1 != '\0')) {
      cVar1 = FUN_142453690((longlong)param_1 + 0x721,1);
      if (cVar1 == '\0') {
        fVar4 = (float)(**(code **)(*param_1 + 0x3f8))(param_1);
        fVar4 = fVar4 * param_2;
        if (fVar4 <= 1e-08) {
          fVar4 = 1e-08;
        }
      }
      else {
        fVar4 = 1e-08;
      }
      if (fVar4 < fVar5) {
        (**(code **)(*param_1 + 0x5a0))(param_1,3);
      }
    }
  }
  else {
    puVar3 = (undefined8 *)
             (**(code **)(*param_1 + 0xa80))
                       (param_1,local_48,param_1 + 0x100,(longlong)param_1 + 0x18c);
    *(undefined8 *)((longlong)param_1 + 0x18c) = *puVar3;
    *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)(puVar3 + 1);
  }
  return;
}



// FUNCTION 14232ea00 FUN_14232ea00 body=2585 status=ok
// SIG undefined FUN_14232ea00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14232ea00(longlong *param_1,longlong param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong **pplVar13;
  char cVar14;
  ulonglong uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  longlong *plVar18;
  uint uVar19;
  longlong **pplVar20;
  char cVar21;
  undefined1 auStack_278 [32];
  undefined1 local_258;
  char local_248;
  undefined8 local_240;
  longlong **pplStack_238;
  uint local_230;
  uint uStack_22c;
  int iStack_228;
  undefined4 uStack_224;
  longlong *local_220;
  int local_218 [2];
  longlong *local_210;
  longlong *local_208;
  longlong *local_200;
  longlong *local_1f8;
  longlong *local_1f0;
  int local_1e8;
  undefined4 local_1e4;
  longlong local_1e0;
  longlong *local_1d8;
  int iStack_1d0;
  uint uStack_1cc;
  longlong **local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  longlong *local_1a8;
  undefined8 uStack_1a0;
  longlong **pplStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong local_168;
  undefined8 local_160;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  longlong local_128;
  undefined4 local_120;
  longlong local_118 [24];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  if (param_2 != 0) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_278;
    local_200 = param_1;
    local_1e4 = param_3;
    local_1b0 = param_2;
    local_248 = AActor::IsChildActor(param_2);
    plVar8 = (longlong *)(param_2 + 0x2b0);
    local_58 = (longlong *)0x0;
    local_50 = 0;
    if (0 < *(int *)(param_2 + 0x2b8) - *(int *)(param_2 + 0x2e4)) {
      FUN_140615c30(local_118);
    }
    local_220 = local_118;
    if (*(longlong *)(param_2 + 0x168) != 0) {
      <lambda_656c836d6674f6f8179d5a40ba13f852>::operator()(&local_220);
    }
    pplVar13 = (longlong **)(param_2 + 0x2c0);
    uVar5 = *(uint *)(param_2 + 0x2d8);
    local_240 = (longlong **)0x100000000;
    uStack_22c = 0;
    iStack_228 = 0;
    if (uVar5 != 0) {
      pplVar20 = *(longlong ***)(param_2 + 0x2d0);
      if (*(longlong ***)(param_2 + 0x2d0) == (longlong **)0x0) {
        pplVar20 = pplVar13;
      }
      uVar2 = *(uint *)pplVar20;
      iStack_228 = 0;
      iVar3 = 0;
      while (uVar2 == 0) {
        iStack_228 = iStack_228 + 0x20;
        local_240._4_4_ = (uint)((ulonglong)local_240 >> 0x20);
        local_240 = (longlong **)CONCAT44(local_240._4_4_,iVar3 + 1);
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar3)
        goto LAB_14232eb72;
        uVar2 = *(uint *)((longlong)pplVar20 + ((longlong)iVar3 + 1) * 4);
        iVar3 = iVar3 + 1;
      }
      uVar2 = uVar2 - 1 & uVar2 ^ uVar2;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      local_240 = (longlong **)CONCAT44(uVar2,(int)local_240);
      if (uVar2 == 0) {
        iVar3 = 0x20;
      }
      else {
        iVar3 = 0x1f - iVar3;
      }
      uStack_22c = (iStack_228 - iVar3) + 0x1f;
      if ((int)uVar5 < (int)uStack_22c) {
LAB_14232eb72:
        uStack_22c = uVar5;
      }
    }
    uVar2 = *(uint *)(param_2 + 0x2d8);
    uStack_1c0._0_4_ = 0xffffffff;
    uStack_1c0._4_4_ = uStack_22c;
    local_1b8 = CONCAT44(uStack_224,iStack_228);
    uStack_1a0 = local_240;
    pplVar20 = uStack_1a0;
    local_230 = -1 << ((byte)uVar2 & 0x1f);
    uStack_1a0._0_4_ = (int)local_240;
    uStack_1a0._4_4_ = (uint)((ulonglong)local_240 >> 0x20);
    uVar19 = uVar2 & 0xffffffe0;
    iStack_1d0 = (int)uStack_1a0;
    uStack_1cc = uStack_1a0._4_4_;
    pplStack_238 = pplVar13;
    uStack_22c = uVar2;
    local_1c8 = pplVar13;
    local_1a8 = plVar8;
    uStack_1a0 = pplVar20;
    pplStack_198 = pplVar13;
    uStack_188 = local_1b8;
    local_1d8 = plVar8;
    uStack_190._0_4_ = (uint)uStack_1c0;
    uStack_190._4_4_ = uStack_1c0._4_4_;
    if (uVar2 != uVar5) {
      pplVar20 = *(longlong ***)(param_2 + 0x2d0);
      if (*(longlong ***)(param_2 + 0x2d0) == (longlong **)0x0) {
        pplVar20 = pplVar13;
      }
      uVar12 = *(uint *)((longlong)pplVar20 + (longlong)((int)uVar2 >> 5) * 4) & local_230;
      iVar3 = (int)uVar2 >> 5;
      while (uVar12 == 0) {
        uVar19 = uVar19 + 0x20;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar3)
        goto LAB_14232ec49;
        uVar12 = *(uint *)((longlong)pplVar20 + ((longlong)iVar3 + 1) * 4);
        local_230 = 0xffffffff;
        iVar3 = iVar3 + 1;
      }
      uVar12 = uVar12 - 1 & uVar12 ^ uVar12;
      iVar3 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      if (uVar12 == 0) {
        iVar3 = 0x20;
      }
      else {
        iVar3 = 0x1f - iVar3;
      }
      uStack_22c = (uVar19 - iVar3) + 0x1f;
      uVar2 = uStack_22c;
      if ((int)uVar5 < (int)uStack_22c) {
LAB_14232ec49:
        uStack_22c = uVar5;
        uVar2 = uVar5;
      }
    }
    while( true ) {
      cVar21 = local_248;
      if ((uStack_1c0._4_4_ == uVar2) && (local_1c8 == pplVar13)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if ((bVar1) && (local_1d8 == plVar8)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      lVar9 = *(longlong *)(*local_1d8 + (longlong)(int)uStack_1c0._4_4_ * 0x10);
      if (lVar9 != 0) {
        lVar6 = FUN_1429ff160();
        uVar17 = local_50;
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          if (*(longlong *)(lVar9 + 400) == 0) {
            if (lVar9 != *(longlong *)(param_2 + 0x168)) {
LAB_14232ecfb:
              <lambda_656c836d6674f6f8179d5a40ba13f852>::operator()(&local_220,lVar9);
            }
          }
          else if (*(longlong *)(*(longlong *)(lVar9 + 400) + 0x118) != param_2) goto LAB_14232ecfb;
        }
        else {
          lVar6 = (longlong)(int)local_50;
          iVar3 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar3);
          if (local_50._4_4_ < iVar3) {
            TArray<UHierarchicalInstancedStaticMeshComponent_*,TInlineAllocator<24,FDefaultAllocator>_>
            ::ResizeGrow(local_118,uVar17 & 0xffffffff);
          }
          plVar7 = local_118;
          if (local_58 != (longlong *)0x0) {
            plVar7 = local_58;
          }
          plVar7[lVar6] = lVar9;
        }
      }
      uStack_1c0._0_4_ = (uint)uStack_1c0 & ~uStack_1cc;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_1d0);
    }
    local_168 = 0;
    local_160 = 0;
    local_148 = 0;
    local_140 = 0;
    local_138 = 0xffffffff;
    local_134 = 0;
    local_128 = 0;
    local_120 = 0;
    if (0 < (int)local_50) {
      TSparseArray<TSetElement<TSharedPtr<FInterfaceContainer,0>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Reserve(&local_168);
    }
    uVar17 = 0;
    plVar8 = local_118;
    if (local_58 != (longlong *)0x0) {
      plVar8 = local_58;
    }
    uVar15 = (longlong)(int)local_50 & 0x1fffffffffffffff;
    if (plVar8 + (int)local_50 < plVar8) {
      uVar15 = uVar17;
    }
    if (uVar15 != 0) {
      do {
        local_1f0 = (longlong *)*plVar8;
        if ((local_1f0 != (longlong *)0x0) &&
           ((cVar21 != '\0' || ((byte)(*(char *)((longlong)local_1f0 + 0xca) - 1U) < 2)))) {
          local_1f8 = (longlong *)FUN_14178ca30();
          local_240 = &local_1f0;
          pplStack_238 = &local_1f8;
          TSet<TTuple<FFlareResourceDescription_*,UFlareSimulatedSpacecraft_*>,TDefaultMapHashableKeyFuncs<FFlareResourceDescription_*,UFlareSimulatedSpacecraft_*,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<FFlareResourceDescription_*_const_&,UFlareSimulatedSpacecraft_*_const_&>_>
                    (&local_168,local_218,&local_240,0);
        }
        plVar8 = plVar8 + 1;
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar15);
    }
    local_220 = (longlong *)0x0;
    local_1f0 = local_118;
    if (local_58 != (longlong *)0x0) {
      local_1f0 = local_58;
    }
    plVar8 = (longlong *)((longlong)(int)local_50 & 0x1fffffffffffffff);
    if (local_1f0 + (int)local_50 < local_1f0) {
      plVar8 = (longlong *)0x0;
    }
    lVar9 = local_168;
    local_208 = plVar8;
    cVar14 = DAT_1468b616a;
    if (plVar8 != (longlong *)0x0) {
      do {
        plVar7 = local_220;
        lVar6 = *local_1f0;
        local_1e0 = lVar6;
        if ((lVar6 != 0) &&
           ((cVar21 != '\0' || (plVar8 = local_208, (byte)(*(char *)(lVar6 + 0xca) - 1U) < 2)))) {
          TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::FindId(&local_168,&local_1e8,lVar6);
          lVar10 = 0;
          if (local_1e8 != -1) {
            lVar10 = lVar9 + (longlong)local_1e8 * 0x18;
          }
          pplVar13 = *(longlong ***)(lVar10 + 8);
          local_1f8 = (longlong *)*local_200;
          plVar16 = local_1f8 + (int)local_200[1];
          plVar8 = local_208;
          local_240 = pplVar13;
          local_210 = plVar16;
          if (local_1f8 != plVar16) {
            do {
              plVar7 = (longlong *)0x0;
              plVar8 = (longlong *)*local_1f8;
              if (plVar8 != (longlong *)0x0) {
                pplVar20 = (longlong **)plVar8[2];
                if (pplVar20 != (longlong **)0x0) {
                  plVar7 = pplVar20[2];
                }
                if (((plVar7 == pplVar13[2]) &&
                    (*(char *)(lVar6 + 0xca) == *(char *)((longlong)plVar8 + 0x1c))) &&
                   ((pplVar13 == pplVar20 || ((cVar14 != '\0' && (pplVar13[3] == pplVar20[3])))))) {
                  if (*(char *)((longlong)plVar8 + 0x1c) != '\x02') {
LAB_14232f071:
                    (**(code **)(*plVar8 + 8))(plVar8,lVar6,local_1e4);
                    plVar8 = local_208;
                    lVar9 = local_168;
                    plVar7 = local_220;
                    cVar14 = DAT_1468b616a;
                    break;
                  }
                  lVar9 = plVar8[3];
                  if (-1 < (int)lVar9) {
                    lVar10 = *(longlong *)(lVar6 + 0x118);
                    iVar3 = -1;
                    plVar16 = local_210;
                    if (lVar10 != 0) {
                      plVar18 = *(longlong **)(lVar10 + 800);
                      plVar7 = plVar18 + *(int *)(lVar10 + 0x328);
                      for (; plVar16 = local_210, lVar6 = local_1e0, plVar18 != plVar7;
                          plVar18 = plVar18 + 1) {
                        lVar10 = *plVar18;
                        if ((lVar10 != 0) && (*(char *)(lVar10 + 0xca) == '\x02')) {
                          TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
                          ::FindId(&local_168,local_218,lVar10);
                          if (local_218[0] == -1) {
                            lVar6 = 0;
                          }
                          else {
                            lVar6 = local_168 + (longlong)local_218[0] * 0x18;
                          }
                          if (((*(longlong ***)(lVar6 + 8) == pplVar20) ||
                              ((DAT_1468b616a != '\0' &&
                               ((*(longlong ***)(lVar6 + 8))[3] == pplVar20[3])))) &&
                             (iVar3 = iVar3 + 1, iVar3 == (int)lVar9)) {
                            pplVar13 = local_240;
                            plVar16 = local_210;
                            lVar6 = local_1e0;
                            cVar14 = DAT_1468b616a;
                            if (lVar10 == local_1e0) goto LAB_14232f071;
                            break;
                          }
                        }
                        pplVar13 = local_240;
                        cVar14 = DAT_1468b616a;
                      }
                    }
                  }
                }
              }
              local_1f8 = local_1f8 + 1;
              plVar8 = local_208;
              lVar9 = local_168;
              plVar7 = local_220;
            } while (local_1f8 != plVar16);
          }
        }
        local_220 = (longlong *)((longlong)plVar7 + 1);
        local_1f0 = local_1f0 + 1;
        param_2 = local_1b0;
        cVar21 = local_248;
      } while (local_220 != plVar8);
    }
    plVar8 = local_200 + 2;
    uVar5 = *(uint *)(local_200 + 7);
    pplVar13 = (longlong **)(local_200 + 4);
    local_240._0_4_ = 0;
    local_240._4_4_ = 1;
    uStack_22c = 0;
    iStack_228 = 0;
    if (uVar5 != 0) {
      pplVar20 = (longlong **)local_200[6];
      if ((longlong **)local_200[6] == (longlong **)0x0) {
        pplVar20 = pplVar13;
      }
      uVar2 = *(uint *)pplVar20;
      iVar3 = (int)local_240;
      while (uVar2 == 0) {
        iStack_228 = iStack_228 + 0x20;
        local_240._0_4_ = iVar3 + 1;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar3)
        goto LAB_14232f268;
        uVar2 = *(uint *)((longlong)pplVar20 + ((longlong)iVar3 + 1) * 4);
        iVar3 = (int)local_240;
      }
      local_240._4_4_ = -uVar2 & uVar2;
      iVar4 = 0x1f;
      if (local_240._4_4_ != 0) {
        for (; local_240._4_4_ >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (local_240._4_4_ == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_22c = (iStack_228 - iVar4) + 0x1f;
      local_240._0_4_ = iVar3;
      if ((int)uVar5 < (int)uStack_22c) {
LAB_14232f268:
        uStack_22c = uVar5;
      }
    }
    uVar2 = *(uint *)(local_200 + 7);
    uStack_1c0 = CONCAT44(uStack_22c,0xffffffff);
    local_1b8 = CONCAT44(uStack_224,iStack_228);
    uStack_1a0._0_4_ = (int)local_240;
    uStack_1a0._4_4_ = local_240._4_4_;
    local_230 = -1 << ((byte)uVar2 & 0x1f);
    uVar19 = uVar2 & 0xffffffe0;
    iStack_1d0 = (int)local_240;
    uStack_1cc = local_240._4_4_;
    pplStack_238 = pplVar13;
    uStack_22c = uVar2;
    local_1c8 = pplVar13;
    local_1a8 = plVar8;
    pplStack_198 = pplVar13;
    uStack_190 = uStack_1c0;
    uStack_188 = local_1b8;
    local_1d8 = plVar8;
    if (uVar2 != uVar5) {
      pplVar20 = (longlong **)local_200[6];
      if ((longlong **)local_200[6] == (longlong **)0x0) {
        pplVar20 = pplVar13;
      }
      uVar12 = *(uint *)((longlong)pplVar20 + (longlong)((int)uVar2 >> 5) * 4) & local_230;
      iVar3 = (int)uVar2 >> 5;
      while (uVar12 == 0) {
        uVar19 = uVar19 + 0x20;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar3)
        goto LAB_14232f293;
        uVar12 = *(uint *)((longlong)pplVar20 + ((longlong)iVar3 + 1) * 4);
        local_230 = 0xffffffff;
        iVar3 = iVar3 + 1;
      }
      uVar12 = -uVar12 & uVar12;
      iVar3 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      if (uVar12 == 0) {
        iVar3 = 0x20;
      }
      else {
        iVar3 = 0x1f - iVar3;
      }
      uStack_22c = (uVar19 - iVar3) + 0x1f;
      uVar2 = uStack_22c;
      if ((int)uVar5 < (int)uStack_22c) {
LAB_14232f293:
        uStack_22c = uVar5;
        uVar2 = uVar5;
      }
    }
    while( true ) {
      if ((uStack_1c0._4_4_ == uVar2) && (local_1c8 == pplVar13)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if ((bVar1) && (local_1d8 == plVar8)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      puVar11 = (undefined8 *)((longlong)(int)uStack_1c0._4_4_ * 0x50 + *local_1d8);
      plVar7 = (longlong *)*puVar11;
      pplStack_198 = (longlong **)puVar11[2];
      uStack_190 = puVar11[3];
      uStack_188 = puVar11[4];
      uStack_180 = *(undefined4 *)(puVar11 + 5);
      uStack_17c = *(undefined4 *)((longlong)puVar11 + 0x2c);
      local_178 = *(undefined4 *)(puVar11 + 6);
      uStack_174 = *(undefined4 *)((longlong)puVar11 + 0x34);
      uStack_170 = *(undefined4 *)(puVar11 + 7);
      uStack_16c = *(undefined4 *)((longlong)puVar11 + 0x3c);
      local_1a8 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        if (plVar7[0x32] != 0) {
          uVar5 = *(uint *)(plVar7[0x32] + 0xc);
          if ((int)uVar5 < (int)DAT_1469e91c4) {
            uVar19 = uVar5 & 0xffff;
            if ((int)uVar5 < 0) {
              uVar5 = uVar5 + 0xffff;
              uVar19 = uVar19 - 0x10000;
            }
            lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                    (longlong)(int)uVar19 * 0x18;
          }
          else {
            lVar9 = 0;
          }
          if ((*(uint *)(lVar9 + 8) >> 0x1d & 1) == 0) goto LAB_14232f39c;
        }
        local_200 = (longlong *)0x0;
        FUN_142382f60(plVar7,*(undefined8 *)(param_2 + 0x168),&DAT_146af29ec,0);
        local_258 = 0;
        FUN_142398770(plVar7,&pplStack_198,0,0);
      }
LAB_14232f39c:
      uStack_1c0 = CONCAT44(uStack_1c0._4_4_,(uint)uStack_1c0 & ~uStack_1cc);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_1d0);
    }
    local_120 = 0;
    if (local_128 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_168);
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14232f420 FUN_14232f420 body=568 status=ok
// SIG undefined FUN_14232f420(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14232f420(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [16];
  undefined **local_188 [5];
  byte local_15f;
  byte local_15e;
  ulonglong local_158;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  if ((param_3 == 1) &&
     (local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1c8, 0 < *(int *)(param_1 + 0x28))) {
    FUN_1423393a0(param_2);
    uVar6 = 0;
    plVar4 = *(longlong **)(param_1 + 0x30);
    uVar5 = (longlong)*(int *)(param_1 + 0x38) & 0x1fffffffffffffff;
    if (plVar4 + *(int *)(param_1 + 0x38) < plVar4) {
      uVar5 = uVar6;
    }
    if (uVar5 != 0) {
      do {
        plVar1 = (longlong *)*plVar4;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x138))(plVar1,0,param_2,0x11);
        }
        plVar4 = plVar4 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar5);
    }
    uVar2 = *(undefined8 *)(param_1 + 8);
    FArchive::FArchive(local_188);
    local_f8 = 0;
    local_188[0] = &PTR_FUN_144f50fa8;
    local_f0 = param_1 + 0x20;
    FArchive::SetIsLoading(local_188,1);
    FArchive::SetIsPersistent(local_188,0);
    local_15e = local_15e & 0xfd;
    local_15f = local_15f & 0xdf;
    local_158 = local_158 | 0x20000000;
    local_188[0] = &PTR__scalar_deleting_destructor__145046b88;
    local_d8 = 0;
    local_d0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0xffffffff;
    local_a4 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    local_e8 = uVar2;
    local_e0 = param_2;
    FUN_142340040(param_2,&local_88);
    plVar4 = *(longlong **)(param_2 + 0x10);
    lVar3 = *plVar4;
    local_1a8 = FUN_14178ca30(param_2);
    local_1a0 = 0;
    (**(code **)(lVar3 + 0x2a0))(plVar4,local_188,param_2,plVar4);
    if ((*(byte *)(param_2 + 0xb8) & 1) != 0) {
      FUN_142325970(local_198,param_2);
      FUN_1423283e0(local_198);
    }
    local_40 = 0;
    if (local_48 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_88);
    local_90 = 0;
    if (local_98 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_d8);
    FArchive::~FArchive(local_188);
  }
  return;
}



// FUNCTION 14232f660 FUN_14232f660 body=1055 status=ok
// SIG undefined FUN_14232f660(void)

void FUN_14232f660(longlong *param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float local_d8;
  float fStack_d4;
  float local_c8;
  float local_b8;
  float fStack_b4;
  float local_b0;
  
  if ((((*(float *)((longlong)param_1 + 0x18c) != 0.0) || (*(float *)(param_1 + 0x32) != 0.0)) ||
      (*(float *)((longlong)param_1 + 0x194) != 0.0)) &&
     (((cVar4 = (**(code **)(*param_1 + 0x5c0))(), cVar4 != '\0' &&
       (cVar4 = (**(code **)(*param_1 + 0xa68))(), cVar4 == '\0')) && (1e-06 <= param_2)))) {
    if (param_4 <= 0.0) {
      param_4 = 0.0;
    }
    fVar9 = *(float *)(param_1 + 0x57);
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    fVar9 = fVar9 * param_3;
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    bVar3 = param_4 != 0.0;
    if ((fVar9 != 0.0) || (bVar3)) {
      fVar2 = *(float *)((longlong)param_1 + 0x194);
      if (bVar3) {
        fVar10 = *(float *)(param_1 + 0x32);
        fVar7 = *(float *)((longlong)param_1 + 0x18c);
        fVar1 = *(float *)((longlong)param_1 + 0x194);
        fVar5 = fVar7 * fVar7 + fVar10 * fVar10 + fVar1 * fVar1;
        if (fVar5 == 1.0) {
          local_c8 = (float)*(undefined8 *)((longlong)param_1 + 0x18c);
          fStack_b4 = (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x18c) >> 0x20);
          local_b0 = fVar2;
        }
        else {
          fStack_b4 = DAT_1468b5d94;
          local_b0 = DAT_1468b5d98;
          local_c8 = DAT_1468b5d90;
          if (1e-08 <= fVar5) {
            auVar8 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
            fVar6 = auVar8._0_4_;
            fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
            fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
            local_c8 = fVar7 * fVar6;
            fStack_b4 = fVar10 * fVar6;
            local_b0 = fVar1 * fVar6;
          }
        }
        param_4 = -param_4;
        local_b8 = local_c8 * param_4;
        fStack_b4 = fStack_b4 * param_4;
        local_b0 = local_b0 * param_4;
      }
      else {
        local_b8 = DAT_1468b5d90;
        fStack_b4 = DAT_1468b5d94;
        local_b0 = DAT_1468b5d98;
      }
      if (1e-06 <= param_2) {
        fVar10 = -fVar9;
        fStack_d4 = (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x18c) >> 0x20);
        local_d8 = (float)*(undefined8 *)((longlong)param_1 + 0x18c);
        do {
          fVar7 = param_2;
          if (((0.030303031 < param_2) && (fVar9 != 0.0)) &&
             (fVar7 = param_2 * 0.5, 0.030303031 <= fVar7)) {
            fVar7 = 0.030303031;
          }
          param_2 = param_2 - fVar7;
          *(ulonglong *)((longlong)param_1 + 0x18c) =
               CONCAT44((*(float *)(param_1 + 0x32) * fVar10 + fStack_b4) * fVar7 +
                        *(float *)(param_1 + 0x32),
                        (*(float *)((longlong)param_1 + 0x18c) * fVar10 + local_b8) * fVar7 +
                        *(float *)((longlong)param_1 + 0x18c));
          *(float *)((longlong)param_1 + 0x194) =
               (*(float *)((longlong)param_1 + 0x194) * fVar10 + local_b0) * fVar7 +
               *(float *)((longlong)param_1 + 0x194);
          if (fStack_d4 * *(float *)(param_1 + 0x32) +
              local_d8 * *(float *)((longlong)param_1 + 0x18c) +
              fVar2 * *(float *)((longlong)param_1 + 0x194) <= 0.0) goto LAB_14232fa12;
        } while (1e-06 <= param_2);
      }
      fVar9 = *(float *)((longlong)param_1 + 0x18c) * *(float *)((longlong)param_1 + 0x18c) +
              *(float *)(param_1 + 0x32) * *(float *)(param_1 + 0x32) +
              *(float *)((longlong)param_1 + 0x194) * *(float *)((longlong)param_1 + 0x194);
      if ((fVar9 <= 0.0001) || ((bVar3 && (fVar9 <= 100.0)))) {
LAB_14232fa12:
        *(ulonglong *)((longlong)param_1 + 0x18c) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        *(float *)((longlong)param_1 + 0x194) = DAT_1468b5d98;
      }
    }
  }
  return;
}



// FUNCTION 14232fa80 FUN_14232fa80 body=1090 status=ok
// SIG undefined FUN_14232fa80(void)

void FUN_14232fa80(longlong param_1,float *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(float *)(param_1 + 0x24c) = *param_2 + *(float *)(param_1 + 0x24c);
  *(float *)(param_1 + 0x250) = *(float *)(param_1 + 0x250) + param_2[1];
  *(float *)(param_1 + 0x254) = *(float *)(param_1 + 0x254) + param_2[2];
  *(float *)(param_1 + 0x35c) = *param_2 + *(float *)(param_1 + 0x35c);
  *(float *)(param_1 + 0x360) = param_2[1] + *(float *)(param_1 + 0x360);
  *(float *)(param_1 + 0x364) = *(float *)(param_1 + 0x364) + param_2[2];
  if ((*(longlong *)(param_1 + 0x220) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x220) + 0x128) == '\x02')) {
    lVar2 = *(longlong *)(param_1 + 0x610);
    if (lVar2 == 0) {
      lVar2 = (**(code **)(*(longlong *)(param_1 + 0x218) + 0x28))();
      *(longlong *)(param_1 + 0x610) = lVar2;
      if (lVar2 == 0) {
        return;
      }
    }
    uVar3 = 0;
    lVar8 = (longlong)(*(int *)(lVar2 + 0x18) + -1);
    uVar6 = uVar3;
    if (3 < lVar8) {
      lVar7 = (lVar8 - 4U >> 2) + 1;
      uVar6 = lVar7 * 4;
      uVar4 = uVar3;
      do {
        lVar1 = *(longlong *)(uVar4 + *(longlong *)(lVar2 + 0x10));
        *(float *)(lVar1 + 0x3c) = *(float *)(lVar1 + 0x3c) + *param_2;
        *(float *)(lVar1 + 0x40) = *(float *)(lVar1 + 0x40) + param_2[1];
        *(float *)(lVar1 + 0x44) = *(float *)(lVar1 + 0x44) + param_2[2];
        *(float *)(lVar1 + 0x154) = *(float *)(lVar1 + 0x154) + *param_2;
        *(float *)(lVar1 + 0x158) = *(float *)(lVar1 + 0x158) + param_2[1];
        *(float *)(lVar1 + 0x15c) = *(float *)(lVar1 + 0x15c) + param_2[2];
        lVar1 = *(longlong *)(uVar4 + 0x10 + *(longlong *)(lVar2 + 0x10));
        *(float *)(lVar1 + 0x3c) = *(float *)(lVar1 + 0x3c) + *param_2;
        *(float *)(lVar1 + 0x40) = *(float *)(lVar1 + 0x40) + param_2[1];
        *(float *)(lVar1 + 0x44) = *(float *)(lVar1 + 0x44) + param_2[2];
        *(float *)(lVar1 + 0x154) = *(float *)(lVar1 + 0x154) + *param_2;
        *(float *)(lVar1 + 0x158) = *(float *)(lVar1 + 0x158) + param_2[1];
        *(float *)(lVar1 + 0x15c) = *(float *)(lVar1 + 0x15c) + param_2[2];
        lVar1 = *(longlong *)(uVar4 + 0x20 + *(longlong *)(lVar2 + 0x10));
        *(float *)(lVar1 + 0x3c) = *(float *)(lVar1 + 0x3c) + *param_2;
        *(float *)(lVar1 + 0x40) = *(float *)(lVar1 + 0x40) + param_2[1];
        *(float *)(lVar1 + 0x44) = *(float *)(lVar1 + 0x44) + param_2[2];
        *(float *)(lVar1 + 0x154) = *(float *)(lVar1 + 0x154) + *param_2;
        *(float *)(lVar1 + 0x158) = *(float *)(lVar1 + 0x158) + param_2[1];
        *(float *)(lVar1 + 0x15c) = *(float *)(lVar1 + 0x15c) + param_2[2];
        lVar1 = *(longlong *)(uVar4 + 0x30 + *(longlong *)(lVar2 + 0x10));
        uVar4 = uVar4 + 0x40;
        *(float *)(lVar1 + 0x3c) = *(float *)(lVar1 + 0x3c) + *param_2;
        *(float *)(lVar1 + 0x40) = *(float *)(lVar1 + 0x40) + param_2[1];
        *(float *)(lVar1 + 0x44) = *(float *)(lVar1 + 0x44) + param_2[2];
        *(float *)(lVar1 + 0x154) = *(float *)(lVar1 + 0x154) + *param_2;
        *(float *)(lVar1 + 0x158) = *(float *)(lVar1 + 0x158) + param_2[1];
        *(float *)(lVar1 + 0x15c) = *(float *)(lVar1 + 0x15c) + param_2[2];
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if ((longlong)uVar6 < lVar8) {
      lVar7 = uVar6 << 4;
      lVar8 = lVar8 - uVar6;
      do {
        lVar1 = *(longlong *)(lVar7 + *(longlong *)(lVar2 + 0x10));
        lVar7 = lVar7 + 0x10;
        *(float *)(lVar1 + 0x3c) = *(float *)(lVar1 + 0x3c) + *param_2;
        *(float *)(lVar1 + 0x40) = *(float *)(lVar1 + 0x40) + param_2[1];
        *(float *)(lVar1 + 0x44) = *(float *)(lVar1 + 0x44) + param_2[2];
        *(float *)(lVar1 + 0x154) = *(float *)(lVar1 + 0x154) + *param_2;
        *(float *)(lVar1 + 0x158) = *(float *)(lVar1 + 0x158) + param_2[1];
        *(float *)(lVar1 + 0x15c) = *(float *)(lVar1 + 0x15c) + param_2[2];
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    lVar8 = *(longlong *)(lVar2 + 0x30);
    if (lVar8 != 0) {
      *(float *)(lVar8 + 0x3c) = *(float *)(lVar8 + 0x3c) + *param_2;
      *(float *)(lVar8 + 0x40) = *(float *)(lVar8 + 0x40) + param_2[1];
      *(float *)(lVar8 + 0x44) = *(float *)(lVar8 + 0x44) + param_2[2];
      *(float *)(lVar8 + 0x154) = *param_2 + *(float *)(lVar8 + 0x154);
      *(float *)(lVar8 + 0x158) = *(float *)(lVar8 + 0x158) + param_2[1];
      *(float *)(lVar8 + 0x15c) = *(float *)(lVar8 + 0x15c) + param_2[2];
    }
    uVar6 = uVar3;
    if (0 < *(int *)(lVar2 + 0x150)) {
      do {
        lVar8 = *(longlong *)(lVar2 + 0x148);
        uVar5 = (int)uVar6 + 1;
        *(float *)(uVar3 + lVar8) = *param_2 + *(float *)(uVar3 + lVar8);
        *(float *)(uVar3 + 4 + lVar8) = *(float *)(uVar3 + 4 + lVar8) + param_2[1];
        *(float *)(uVar3 + 8 + lVar8) = *(float *)(uVar3 + 8 + lVar8) + param_2[2];
        uVar3 = uVar3 + 0x38;
        uVar6 = (ulonglong)uVar5;
      } while ((int)uVar5 < *(int *)(lVar2 + 0x150));
    }
  }
  return;
}



// FUNCTION 14232fed0 AreSymmetricRotations body=308 status=ok
// SIG undefined AreSymmetricRotations(void)

undefined1
UCapsuleComponent::AreSymmetricRotations
          (undefined8 param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (param_4[1] != *param_4) {
    return 0;
  }
  fVar1 = param_2[1];
  fVar3 = -*param_2;
  fVar5 = fVar1 + fVar1;
  fVar3 = fVar3 + fVar3;
  fVar2 = param_3[1];
  fVar6 = fVar2 + fVar2;
  fVar4 = -*param_3;
  fVar4 = fVar4 + fVar4;
  if (((ABS((fVar5 * param_2[3] - fVar3 * param_2[2]) - (fVar6 * param_3[3] - fVar4 * param_3[2]))
        <= 0.0001) &&
      (ABS((fVar3 * param_2[3] + fVar5 * param_2[2]) - (fVar4 * param_3[3] + fVar6 * param_3[2])) <=
       0.0001)) &&
     (ABS((fVar3 * *param_2 - fVar5 * fVar1) - (fVar4 * *param_3 - fVar6 * fVar2)) <= 0.0001)) {
    return 1;
  }
  return 0;
}



// FUNCTION 142330010 FUN_142330010 body=297 status=ok
// SIG undefined FUN_142330010(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_142330010(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10)

{
  undefined8 uVar1;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 *local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  undefined1 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined1 local_158 [80];
  longlong local_108;
  longlong local_e8;
  undefined1 local_68 [16];
  longlong local_58;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_168 = *(undefined4 *)(param_1 + 0x380);
  local_160 = 0;
  local_170 = param_9;
  local_178 = param_5;
  local_190 = param_10;
  local_198 = param_6;
  local_1a0 = &DAT_146aefe88;
  local_1a8 = param_8;
  local_188 = param_3;
  local_180 = param_4;
  uVar1 = FUN_142326bf0(local_158,param_1,&DAT_146aeffa8,param_7);
  `anonymous_namespace'::StartNewTrace<FTraceDatum>(param_2,param_1 + 0x2c0,uVar1);
  if (local_58 != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_68);
  if (local_e8 != 0) {
    FMemory::Free();
  }
  if (local_108 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142330140 FUN_142330140 body=286 status=ok
// SIG undefined FUN_142330140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_142330140(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9)

{
  undefined8 uVar1;
  undefined1 auStack_1c8 [32];
  undefined *local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  undefined1 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined1 local_158 [80];
  longlong local_108;
  longlong local_e8;
  undefined1 local_68 [16];
  longlong local_58;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_168 = *(undefined4 *)(param_1 + 0x380);
  local_160 = 0;
  local_170 = param_8;
  local_178 = param_5;
  local_190 = param_9;
  local_198 = DAT_146aefe3c;
  local_1a0 = param_6;
  local_1a8 = &DAT_146aefe68;
  local_188 = param_3;
  local_180 = param_4;
  uVar1 = FUN_142326bf0(local_158,param_1,&DAT_146aeffa8,param_7);
  `anonymous_namespace'::StartNewTrace<FTraceDatum>(param_2,param_1 + 0x2c0,uVar1);
  if (local_58 != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_68);
  if (local_e8 != 0) {
    FMemory::Free();
  }
  if (local_108 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142330260 FUN_142330260 body=273 status=ok
// SIG undefined FUN_142330260(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_142330260(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10)

{
  undefined8 uVar1;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 *local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined1 local_148 [80];
  longlong local_f8;
  longlong local_d8;
  undefined1 local_58 [16];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  local_150 = *(undefined4 *)(param_1 + 0x380);
  local_158 = param_9;
  local_170 = param_10;
  local_178 = param_5;
  local_180 = &DAT_146aefe88;
  local_188 = param_8;
  local_168 = param_3;
  local_160 = param_4;
  uVar1 = FUN_1423262c0(local_148,param_1,param_6,param_7);
  FUN_142324770(param_2,param_1 + 0x2c0,uVar1);
  if (local_48 != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_58);
  if (local_d8 != 0) {
    FMemory::Free();
  }
  if (local_f8 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142330380 FUN_142330380 body=268 status=ok
// SIG undefined FUN_142330380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_142330380(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9)

{
  undefined8 uVar1;
  undefined1 auStack_1a8 [32];
  undefined *local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined1 local_148 [80];
  longlong local_f8;
  longlong local_d8;
  undefined1 local_58 [16];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  local_150 = *(undefined4 *)(param_1 + 0x380);
  local_158 = param_8;
  local_170 = param_9;
  local_178 = DAT_146aefe3c;
  local_180 = param_5;
  local_188 = &DAT_146aefe68;
  local_168 = param_3;
  local_160 = param_4;
  uVar1 = FUN_1423262c0(local_148,param_1,param_6,param_7);
  FUN_142324770(param_2,param_1 + 0x2c0,uVar1);
  if (local_48 != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_58);
  if (local_d8 != 0) {
    FMemory::Free();
  }
  if (local_f8 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142330490 FUN_142330490 body=298 status=ok
// SIG undefined FUN_142330490(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_142330490(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12)

{
  undefined8 uVar1;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 *local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  undefined1 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined1 local_158 [80];
  longlong local_108;
  longlong local_e8;
  undefined1 local_68 [16];
  longlong local_58;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_160 = param_6;
  local_168 = *(undefined4 *)(param_1 + 0x380);
  local_170 = param_11;
  local_178 = param_5;
  local_190 = param_12;
  local_198 = param_7;
  local_1a0 = &DAT_146aefe88;
  local_1a8 = param_10;
  local_188 = param_3;
  local_180 = param_4;
  uVar1 = FUN_142326bf0(local_158,param_1,param_8,param_9);
  `anonymous_namespace'::StartNewTrace<FTraceDatum>(param_2,param_1 + 0x2c0,uVar1);
  if (local_58 != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_68);
  if (local_e8 != 0) {
    FMemory::Free();
  }
  if (local_108 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1423305c0 FUN_1423305c0 body=300 status=ok
// SIG undefined FUN_1423305c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1423305c0(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11)

{
  undefined8 uVar1;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined8 *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined1 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined1 local_168 [80];
  longlong local_118;
  longlong local_f8;
  undefined1 local_78 [16];
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_178 = *(undefined4 *)(param_1 + 0x380);
  local_170 = 0;
  local_180 = param_10;
  local_188 = param_5;
  local_1a0 = param_11;
  local_1a8 = param_6;
  local_1b0 = &DAT_146aefe88;
  local_1b8 = param_9;
  local_198 = param_3;
  local_190 = param_4;
  uVar1 = FUN_142326bf0(local_168,param_1,param_7,param_8);
  `anonymous_namespace'::StartNewTrace<FTraceDatum>(param_2,param_1 + 0x2c0,uVar1);
  if (local_68 != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_78);
  if (local_f8 != 0) {
    FMemory::Free();
  }
  if (local_118 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1423306f0 FUN_1423306f0 body=295 status=ok
// SIG undefined FUN_1423306f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1423306f0(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10)

{
  undefined8 uVar1;
  undefined1 auStack_1c8 [32];
  undefined *local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  undefined1 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined1 local_158 [80];
  longlong local_108;
  longlong local_e8;
  undefined1 local_68 [16];
  longlong local_58;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_168 = *(undefined4 *)(param_1 + 0x380);
  local_160 = 0;
  local_170 = param_9;
  local_178 = param_5;
  local_190 = param_10;
  local_198 = DAT_146aefe3c;
  local_1a0 = param_6;
  local_1a8 = &DAT_146aefe68;
  local_188 = param_3;
  local_180 = param_4;
  uVar1 = FUN_142326bf0(local_158,param_1,param_7,param_8);
  `anonymous_namespace'::StartNewTrace<FTraceDatum>(param_2,param_1 + 0x2c0,uVar1);
  if (local_58 != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_68);
  if (local_e8 != 0) {
    FMemory::Free();
  }
  if (local_108 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142330820 FUN_142330820 body=98 status=ok
// SIG undefined FUN_142330820(void)

undefined8 FUN_142330820(longlong param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 0x2f0) & 0x10) == 0) {
    if (*(longlong *)(param_1 + 0x330) == 0) {
      if (*(longlong **)(param_1 + 0x2d0) == (longlong *)0x0) {
        return 0;
      }
      param_1 = (**(code **)(**(longlong **)(param_1 + 0x2d0) + 0x290))();
    }
    else {
      param_1 = *(longlong *)(param_1 + 0x330) + 0x28;
    }
  }
  else {
    param_1 = param_1 + 0x338;
  }
  if (param_1 == 0) {
    return 0;
  }
  FSoundAttenuationSettings::operator=(param_2,param_1);
  return 1;
}



// FUNCTION 142330890 FUN_142330890 body=134 status=ok
// SIG undefined FUN_142330890(void)

void FUN_142330890(longlong *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x19);
  if ((bVar1 & 0x20) != 0) {
    (**(code **)(*param_1 + 0x340))(param_1,0);
    bVar1 = *(byte *)(param_1 + 0x19);
  }
  if ((bVar1 & 0x10) != 0) {
    (**(code **)(*param_1 + 0x348))(param_1);
  }
  FUN_14233aad0(param_1);
  if ((*(byte *)(param_1 + 0x19) & 8) != 0) {
    (**(code **)(*param_1 + 0x3c0))(param_1,DAT_1468c2185);
  }
  param_1[0x24] = 0;
  if (param_1[0x23] != 0) {
    FUN_14223af50(param_1[0x23],param_1);
  }
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 142330920 FUN_142330920 body=124 status=ok
// SIG undefined FUN_142330920(void)

void FUN_142330920(longlong *param_1)

{
  char cVar1;
  BOOL BVar2;
  
  FUN_1423850d0();
  if (((*(byte *)((longlong)param_1 + 0xba) & 4) != 0) && (param_1[0x5a] != 0)) {
    cVar1 = USoundBase::IsLooping();
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x560))(param_1);
    }
  }
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aefff8);
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aefff8);
  }
  TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
  ::Remove(&DAT_146531c90,param_1[0xd6]);
                    /* WARNING: Could not recover jumptable at 0x000142330995. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aefff8);
  return;
}



// FUNCTION 1423309a0 FUN_1423309a0 body=203 status=ok
// SIG undefined FUN_1423309a0(void)

void FUN_1423309a0(longlong *param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  
  puVar1 = (undefined8 *)param_1[0xc2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[0xc2] = 0;
  }
  puVar1 = (undefined8 *)param_1[0xc3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[0xc3] = 0;
  }
  bVar2 = *(byte *)(param_1 + 0x19);
  if ((bVar2 & 0x20) != 0) {
    (**(code **)(*param_1 + 0x340))(param_1,0);
    bVar2 = *(byte *)(param_1 + 0x19);
  }
  if ((bVar2 & 0x10) != 0) {
    (**(code **)(*param_1 + 0x348))(param_1);
  }
  FUN_14233aad0(param_1);
  if ((*(byte *)(param_1 + 0x19) & 8) != 0) {
    (**(code **)(*param_1 + 0x3c0))(param_1,DAT_1468c2185);
  }
  param_1[0x24] = 0;
  if (param_1[0x23] != 0) {
    FUN_14223af50(param_1[0x23],param_1);
  }
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 142330a70 FUN_142330a70 body=27 status=ok
// SIG undefined FUN_142330a70(void)

void FUN_142330a70(longlong param_1)

{
  FUN_1428e7d10();
  *(byte *)(param_1 + 200) = *(byte *)(param_1 + 200) | 0x20;
  return;
}



// FUNCTION 142330a90 BindDynamicDelegates body=486 status=ok
// SIG undefined BindDynamicDelegates(void)

void UComponentDelegateBinding::BindDynamicDelegates(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int local_58;
  int local_54;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar9 = 0;
    do {
      lVar8 = *(longlong *)(param_1 + 0x28) + lVar9;
      plVar4 = (longlong *)FUN_14233af10(param_2,lVar8,0);
      lVar2 = *(longlong *)(lVar8 + 0x10);
      lVar5 = *(longlong *)(param_2 + 0x10);
      if (((int)lVar2 != 0) || ((int)((ulonglong)lVar2 >> 0x20) != 0)) {
        if (lVar5 == 0) {
          local_40 = 0;
        }
        else {
          local_40 = *(longlong *)(lVar5 + 0x38);
        }
        local_38 = 0xffffffff;
        local_34 = 0x101;
        local_32 = 0;
        local_48 = lVar5;
        FUN_140cbbd90(&local_48);
        lVar5 = local_40;
        while (local_40 = lVar5, lVar5 != 0) {
          if (*(longlong *)(lVar5 + 0x18) == lVar2) goto LAB_142330b62;
          local_40 = *(longlong *)(lVar5 + 0x28);
          FUN_140cbbd90(&local_48);
          lVar5 = local_40;
        }
      }
      lVar5 = 0;
LAB_142330b62:
      if ((plVar4 != (longlong *)0x0) && (lVar5 != 0)) {
        FWeakObjectPtr::operator=(&local_58,0);
        local_50 = 0;
        FWeakObjectPtr::operator=(&local_58,param_2);
        local_50 = *(longlong *)(lVar8 + 0x10);
        piVar6 = (int *)*plVar4;
        lVar2 = plVar4[1];
        for (piVar7 = piVar6; piVar7 != piVar6 + (longlong)(int)lVar2 * 4; piVar7 = piVar7 + 4) {
          if ((((*piVar7 == local_58) && (piVar7[1] == local_54)) ||
              ((cVar3 = FWeakObjectPtr::IsValid(piVar7), cVar3 == '\0' &&
               (cVar3 = FWeakObjectPtr::IsValid(&local_58), cVar3 == '\0')))) &&
             (*(longlong *)(piVar7 + 2) == local_50)) {
            if ((int)((longlong)piVar7 - (longlong)piVar6 >> 4) != -1) goto LAB_142330c30;
            break;
          }
        }
        iVar1 = (int)plVar4[1];
        *(int *)(plVar4 + 1) = iVar1 + 1;
        if (*(int *)((longlong)plVar4 + 0xc) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar1);
        }
        piVar6 = (int *)((longlong)iVar1 * 0x10 + *plVar4);
        *piVar6 = local_58;
        piVar6[1] = local_54;
        *(longlong *)(piVar6 + 2) = local_50;
LAB_142330c30:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar4);
      }
      iVar10 = iVar10 + 1;
      lVar9 = lVar9 + 0x18;
    } while (iVar10 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 142330ce0 CalcAnimRootMotionVelocity body=102 status=ok
// SIG undefined CalcAnimRootMotionVelocity(void)

undefined8 *
UCharacterMovementComponent::CalcAnimRootMotionVelocity
          (undefined8 param_1,undefined8 *param_2,float *param_3,float param_4,undefined8 *param_5)

{
  float fVar1;
  undefined4 uVar2;
  
  if (0.0 < param_4) {
    param_4 = 1.0 / param_4;
    fVar1 = param_3[2];
    *param_2 = CONCAT44(param_4 * param_3[1],param_4 * *param_3);
    *(float *)(param_2 + 1) = param_4 * fVar1;
    return param_2;
  }
  uVar2 = *(undefined4 *)(param_5 + 1);
  *param_2 = *param_5;
  *(undefined4 *)(param_2 + 1) = uVar2;
  return param_2;
}



// FUNCTION 142330d50 FUN_142330d50 body=422 status=ok
// SIG undefined FUN_142330d50(void)

void FUN_142330d50(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  float local_28;
  float fStack_24;
  float local_20;
  
  lVar3 = FUN_14046f570();
  lVar3 = *(longlong *)(lVar3 + 0x158);
  if ((((*(float *)(param_1 + 0x9d) <= 1.0 && *(float *)(param_1 + 0x9d) != 1.0) && (lVar3 != 0)) &&
      (lVar1 = param_1[0x44], lVar1 != 0)) &&
     ((*(char *)(lVar1 + 0x128) == '\x03' &&
      ((((lVar1 = *(longlong *)(lVar1 + 0x4d0), *(float *)((longlong)param_1 + 0x18c) != 0.0 ||
         (*(float *)(param_1 + 0x32) != 0.0)) || (*(float *)((longlong)param_1 + 0x194) != 0.0)) &&
       ((cVar2 = (**(code **)(*param_1 + 0x560))(param_1), cVar2 != '\0' && (lVar1 != 0)))))))) {
    if (*(float *)((longlong)param_1 + 0x4c4) <= 0.0) {
      UAvoidanceManager::GetAvoidanceVelocityForComponent(lVar3,&local_28,param_1);
      if ((*(uint *)((longlong)param_1 + 0x4b4) & 0x2000000) != 0) {
        (**(code **)(*param_1 + 0xa90))(param_1,&local_28);
      }
      if (((0.0001 < ABS(local_28 - *(float *)((longlong)param_1 + 0x18c))) ||
          (0.0001 < ABS(fStack_24 - *(float *)(param_1 + 0x32)))) ||
         (0.0001 < ABS(local_20 - *(float *)((longlong)param_1 + 0x194)))) {
        *(ulonglong *)((longlong)param_1 + 0x18c) = CONCAT44(fStack_24,local_28);
        *(float *)((longlong)param_1 + 0x194) = local_20;
        uVar4 = *(undefined4 *)(lVar3 + 0x34);
      }
      else {
        uVar4 = *(undefined4 *)(lVar3 + 0x38);
      }
      FUN_14234faa0(param_1,lVar3,uVar4);
    }
    else {
      *(longlong *)((longlong)param_1 + 0x18c) = param_1[0x97];
      *(int *)((longlong)param_1 + 0x194) = (int)param_1[0x98];
    }
    UAvoidanceManager::UpdateRVO(lVar3,param_1);
    *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) | 0x1000000;
  }
  return;
}



// FUNCTION 142330f00 FUN_142330f00 body=255 status=ok
// SIG undefined FUN_142330f00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142330f00(longlong param_1,float *param_2,float *param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  
  fVar2 = *(float *)(param_1 + 0x210);
  fVar3 = *(float *)(param_1 + 0x214);
  fVar14 = *(float *)(param_1 + 0x218);
  fVar4 = *(float *)(param_1 + 0x21c);
  uVar6 = *(uint *)(param_1 + 0x230) & _DAT_146af0070;
  uVar7 = *(uint *)(param_1 + 0x234) & uRam0000000146af0074;
  uVar8 = *(uint *)(param_1 + 0x238) & uRam0000000146af0078;
  uVar9 = *(uint *)(param_1 + 0x23c) & uRam0000000146af007c;
  auVar15._4_4_ = uVar7;
  auVar15._0_4_ = uVar6;
  auVar15._8_4_ = uVar8;
  auVar15._12_4_ = uVar9;
  auVar16._4_4_ = uVar8;
  auVar16._0_4_ = uVar7;
  auVar16._8_4_ = uVar6;
  auVar16._12_4_ = uVar9;
  auVar16 = maxps(auVar15,auVar16);
  auVar1._4_4_ = uVar6;
  auVar1._0_4_ = uVar8;
  auVar1._8_4_ = uVar7;
  auVar1._12_4_ = uVar9;
  auVar16 = maxps(auVar16,auVar1);
  fVar5 = *(float *)(param_1 + 0x710) - *(float *)(param_1 + 0x714);
  fVar17 = *(float *)(param_1 + 0x714) * auVar16._0_4_;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  fVar5 = fVar5 * auVar16._0_4_;
  fVar10 = fVar5 * fVar3 - fVar14 * 0.0;
  fVar11 = fVar14 * 0.0 - fVar5 * fVar2;
  fVar12 = fVar2 * 0.0 - fVar3 * 0.0;
  fVar10 = fVar10 + fVar10;
  fVar11 = fVar11 + fVar11;
  fVar12 = fVar12 + fVar12;
  fVar13 = (fVar12 * fVar3 - fVar11 * fVar14) + fVar4 * fVar10 + 0.0;
  fVar14 = (fVar10 * fVar14 - fVar12 * fVar2) + fVar4 * fVar11 + 0.0;
  *param_2 = SQRT(fVar14 * fVar14 + fVar13 * fVar13) + fVar17;
  *param_3 = (fVar11 * fVar2 - fVar10 * fVar3) + fVar4 * fVar12 + fVar5 + fVar17;
  return;
}



// FUNCTION 142331000 FUN_142331000 body=147 status=ok
// SIG undefined FUN_142331000(void)

undefined8 FUN_142331000(longlong param_1,undefined8 param_2)

{
  float fVar1;
  ulonglong local_2c;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  float local_14;
  
  fVar1 = *(float *)(param_1 + 0x6f4);
  local_18 = 0x42a00000;
  local_24 = 0;
  local_20 = CONCAT44(0x42a00000,fVar1 * 120.0);
  local_2c = (ulonglong)(uint)(fVar1 * 120.0);
  local_14 = SQRT(fVar1 * fVar1 * 14400.0 + 12800.0);
  FBoxSphereBounds::TransformBy(&local_2c);
  return param_2;
}


