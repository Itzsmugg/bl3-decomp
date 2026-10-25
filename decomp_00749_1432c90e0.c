// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1432c90e0 FUN_1432c90e0 body=2274 status=ok
// SIG undefined FUN_1432c90e0(void)

longlong * FUN_1432c90e0(longlong *param_1)

{
  ulonglong uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  byte bVar19;
  uint uVar20;
  byte bVar21;
  uint uVar22;
  longlong *plVar23;
  char local_res8 [8];
  uint local_res10;
  uint local_res18;
  undefined4 local_res20 [2];
  longlong *local_188;
  longlong *local_178;
  uint local_170 [2];
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  uint local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong local_e0;
  undefined8 local_d8;
  uint local_d0;
  undefined8 *local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  uint local_90;
  undefined8 *local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  undefined1 local_50 [16];
  
  uVar3 = (**(code **)(*param_1 + 0x28))();
  plVar8 = (longlong *)0x0;
  if (param_1[5] == 0) {
    local_178 = (longlong *)0x0;
  }
  else {
    local_178 = *(longlong **)(param_1[5] + 0x10);
  }
  local_c8 = &local_b8;
  local_88 = &local_78;
  bVar21 = *(byte *)(param_1 + 9) >> 1 & 1;
  local_res8[0] = '\0';
  bVar19 = *(byte *)(param_1 + 9) & 1;
  local_d8 = 0;
  local_d0 = 0x10000;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0x10000;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_e8 = (longlong *)0x0;
  local_f0 = (longlong *)0x0;
  if ((*(byte *)((longlong)param_1 + 0x46) & 2) == 0) {
    local_res18 = (uint)*(byte *)((longlong)param_1 + 0x44);
  }
  else {
    local_res18 = 1;
  }
  local_res20[0] = (**(code **)(*param_1 + 0x28))(param_1);
  local_170[0] = 0;
  (**(code **)(*param_1 + 0xa8))(param_1,bVar19,bVar21,uVar3,local_170,local_res20,local_res8);
  lVar18 = param_1[5] + 0x18;
  local_e0 = lVar18;
  Scaleform::Lock::DoLock(lVar18);
  plVar9 = plVar8;
  plVar6 = plVar8;
  plVar23 = plVar8;
  if (((longlong *)param_1[6] == (longlong *)0x0) || ((*(byte *)(param_1 + 9) & 4) != 0))
  goto LAB_1432c98e7;
  iVar4 = (**(code **)(*(longlong *)param_1[6] + 0x18))();
  if (iVar4 == 2) {
    if (bVar19 == 0) {
LAB_1432c92c2:
      if ((((local_res8[0] != '\0') ||
           (cVar2 = (**(code **)(*local_178 + 0xc0))(local_178,param_1[0xb]), cVar2 == '\0')) ||
          (lVar5 = (**(code **)(*local_178 + 200))(local_178,param_1), lVar5 == 0)) ||
         (param_1[10] == 0)) goto LAB_1432c9305;
      local_188 = (longlong *)(param_1[10] + 0x18);
      goto LAB_1432c9355;
    }
    lVar5 = (**(code **)(*(longlong *)param_1[6] + 0x48))();
    FUN_1432c7760(&local_d8,lVar5 + 0x28);
    local_188 = &local_d8;
LAB_1432c9266:
    plVar23 = plVar8;
    if (bVar19 != 0) {
      if (((local_res8[0] == '\0') &&
          (cVar2 = (**(code **)(*local_178 + 0xc0))(local_178,param_1[0xb]), cVar2 != '\0')) &&
         (lVar5 = (**(code **)(*local_178 + 200))(local_178,param_1), lVar5 != 0)) {
        plVar23 = (longlong *)(param_1[10] + 0x18);
      }
      else {
        uVar10 = (**(code **)(*param_1 + 0x30))(param_1,local_58,0);
        plVar8 = (longlong *)FUN_1432cb620(local_res20[0],local_res18,uVar10,0,0,0);
        local_f0 = plVar8;
        if (plVar8 == (longlong *)0x0) {
          plVar9 = plVar8;
          plVar23 = (longlong *)0x0;
          goto LAB_1432c98e7;
        }
        FUN_1432c7760(&local_98,plVar8 + 5);
        plVar23 = &local_98;
      }
      if (local_170[0] == 0) {
        local_170[0] = Scaleform::Render::GetImageFormatRescaleType(uVar3);
      }
      FUN_1432f9910(plVar23,local_188,local_170[0]);
      local_188 = plVar23;
    }
    local_res10 = FUN_1432c86a0(uVar3);
    plVar9 = plVar8;
    if (local_res8[0] == '\0') {
      cVar2 = (**(code **)(*local_178 + 0xc0))(local_178);
      if (cVar2 == '\0') goto LAB_1432c9481;
    }
    else {
LAB_1432c9481:
      cVar2 = (**(code **)(*local_178 + 0xc0))();
      uVar11 = local_res10;
      if (cVar2 == '\0') {
        uVar22 = 0;
        if (local_res10 != 0) {
          do {
            local_160 = 0;
            local_158 = 0;
            local_150 = 0;
            local_120 = 0;
            local_118 = 0;
            local_110 = 0;
            local_168 = 0;
            local_128 = 0;
            local_108 = 0;
            local_100 = 0;
            FUN_1432cc770(local_188,0,uVar22,&local_168);
            local_120 = local_160;
            local_118 = local_158;
            local_110 = local_150;
            local_108 = 0;
            local_128 = local_168;
            local_100 = local_168;
            local_f8 = uVar22;
            (**(code **)(*param_1 + 0x98))(param_1,&local_128,1);
            uVar22 = uVar22 + 1;
            lVar18 = local_e0;
          } while (uVar22 < uVar11);
        }
      }
      else {
        lVar5 = (**(code **)(*local_178 + 200))(local_178,param_1);
        if (lVar5 == 0) {
          if (plVar23 == (longlong *)0x0) {
            uVar10 = (**(code **)(*param_1 + 0x30))(param_1,local_50,0);
            plVar9 = (longlong *)FUN_1432cb620(local_res20[0],local_res18,uVar10,0,0,0);
            if (plVar8 != (longlong *)0x0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
            plVar23 = (longlong *)0x0;
            local_f0 = plVar9;
            if (plVar9 == (longlong *)0x0) goto LAB_1432c98e7;
            FUN_1432c7760(&local_98,plVar9 + 5);
            plVar23 = &local_98;
          }
        }
        else {
          plVar23 = (longlong *)(param_1[10] + 0x18);
        }
        uVar10 = (**(code **)(*(longlong *)param_1[0xb] + 0x10))();
        FUN_1432f9ad0(plVar23,local_188,uVar10,0);
        local_188 = plVar23;
      }
    }
    uVar16 = 0;
    plVar8 = plVar9;
    if ((bVar21 != 0) && (local_res10 != 0)) {
      do {
        local_148 = 0;
        local_140 = 0;
        local_138 = 0;
        local_130 = 0;
        local_168 = 0;
        local_160 = 0;
        local_158 = 0;
        local_150 = 0;
        uVar11 = (uint)*(ushort *)((longlong)local_188 + 10);
        uVar22 = (uint)uVar16;
        if (uVar22 < uVar11) {
          puVar14 = (uint *)(uVar16 * 0x20 + local_188[2]);
          local_148 = *(undefined8 *)puVar14;
          local_140 = *(undefined8 *)(puVar14 + 2);
          local_138 = *(undefined8 *)(puVar14 + 4);
          local_130 = *(undefined8 *)(puVar14 + 6);
          uVar11 = *puVar14;
          uVar17 = puVar14[1];
        }
        else {
          uVar1 = uVar16 % (ulonglong)uVar11;
          FUN_1432c73f0(uVar1 * 0x20 + local_188[2],(int)*local_188,uVar16 / uVar11,&local_148,uVar1
                       );
          uVar11 = (uint)local_148;
          uVar17 = local_148._4_4_;
        }
        uVar20 = 1;
        if (1 < *(byte *)((longlong)param_1 + 0x44)) {
          do {
            lVar18 = param_1[10];
            uVar12 = *(uint *)(lVar18 + 0x18) & 0xfff;
            iVar4 = 0;
            if (uVar12 != 0) {
              if (uVar12 == 0x42) {
                iVar4 = 2;
              }
              else if (uVar12 == 200) {
                iVar4 = 3;
              }
              else {
                iVar4 = 1;
                if (uVar12 == 0xc9) {
                  iVar4 = 4;
                }
              }
            }
            uVar12 = iVar4 * uVar20 + uVar22;
            uVar13 = (uint)*(ushort *)(lVar18 + 0x22);
            if (uVar12 < uVar13) {
              puVar15 = (undefined8 *)((ulonglong)uVar12 * 0x20 + *(longlong *)(lVar18 + 0x28));
              local_168 = *puVar15;
              local_160 = puVar15[1];
              local_158 = puVar15[2];
              local_150 = puVar15[3];
            }
            else {
              uVar1 = (ulonglong)uVar12 % (ulonglong)uVar13;
              FUN_1432c73f0(uVar1 * 0x20 + *(longlong *)(lVar18 + 0x28),*(uint *)(lVar18 + 0x18),
                            (ulonglong)uVar12 / (ulonglong)uVar13,&local_168,uVar1);
            }
            if (local_res8[0] == '\0') {
              FUN_1432f9c30(&local_168,&local_148,uVar3,uVar16);
              local_140 = local_160;
              local_138 = local_158;
              local_130 = local_150;
              uVar11 = (uint)local_168;
              uVar17 = local_168._4_4_;
            }
            else {
              local_120 = local_140;
              uVar12 = uVar11 >> 1;
              if (uVar11 >> 1 == 0) {
                uVar12 = 1;
              }
              local_118 = local_138;
              local_110 = local_130;
              uVar11 = uVar17 >> 1;
              if (uVar17 >> 1 == 0) {
                uVar11 = 1;
              }
              local_128 = CONCAT44(uVar11,uVar12);
              FUN_1432f9c30(&local_128,&local_148,uVar3,uVar16);
              lVar18 = local_188[3];
              uVar10 = (**(code **)(*(longlong *)param_1[0xb] + 0x10))();
              FUN_1432f9a10(&local_168,&local_128,uVar3,uVar16,uVar10,lVar18,0);
              uVar11 = (uint)local_128;
              uVar17 = local_128._4_4_;
            }
            uVar20 = uVar20 + 1;
            local_148 = CONCAT44(uVar17,uVar11);
          } while (uVar20 < *(byte *)((longlong)param_1 + 0x44));
        }
        uVar16 = (ulonglong)(uVar22 + 1);
        plVar8 = local_f0;
        lVar18 = local_e0;
        plVar6 = local_e8;
      } while (uVar22 + 1 < local_res10);
    }
    if (local_188 == (longlong *)(param_1[10] + 0x18)) {
      (**(code **)(*local_178 + 0xd8))(local_178,param_1,1);
    }
    else {
      (**(code **)(*param_1 + 0xb0))(param_1,local_188);
    }
  }
  else {
    if (bVar19 == 0) goto LAB_1432c92c2;
LAB_1432c9305:
    plVar6 = (longlong *)FUN_1432cb620(local_res20[0],local_res18,param_1 + 7,0,0,0);
    plVar9 = (longlong *)0x0;
    plVar23 = (longlong *)0x0;
    local_e8 = plVar6;
    if (plVar6 == (longlong *)0x0) goto LAB_1432c98e7;
    FUN_1432c7760(&local_d8,plVar6 + 5);
    local_d8 = CONCAT44(local_d8._4_4_,uVar3) | 0x100000;
    local_188 = &local_d8;
LAB_1432c9355:
    if (local_res8[0] == '\0') {
      puVar7 = (undefined1 *)(**(code **)(*(longlong *)param_1[0xb] + 0x10))();
    }
    else {
      puVar7 = &LAB_1432caa10;
    }
    cVar2 = (**(code **)(*(longlong *)param_1[6] + 0x40))((longlong *)param_1[6],local_188,puVar7,0)
    ;
    if (cVar2 != '\0') goto LAB_1432c9266;
    if (local_188 == (longlong *)(param_1[10] + 0x18)) {
      (**(code **)(*local_178 + 0xd8))(local_178,param_1,0);
    }
  }
  plVar9 = plVar8;
  plVar23 = (longlong *)0x1;
LAB_1432c98e7:
  Scaleform::Lock::DoLock(lVar18);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_90 & 2) != 0) {
    local_90 = local_90 & 0xfffffffd;
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_88);
  }
  lVar18 = local_80;
  local_88 = &local_78;
  if ((local_80 != 0) &&
     (iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(local_80,0xffffffff), iVar4 == 1
     )) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar18);
  }
  if ((local_d0 & 2) != 0) {
    local_d0 = local_d0 & 0xfffffffd;
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_c8);
  }
  lVar18 = local_c0;
  local_c8 = &local_b8;
  if ((local_c0 != 0) &&
     (iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(local_c0,0xffffffff), iVar4 == 1
     )) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar18);
  }
  return plVar23;
}



// FUNCTION 1432c99d0 FUN_1432c99d0 body=55 status=ok
// SIG undefined FUN_1432c99d0(void)

void FUN_1432c99d0(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 1;
  }
  local_res8 = (undefined4)param_1[7];
  local_resc = *(undefined4 *)((longlong)param_1 + 0x3c);
  uVar1 = (**(code **)(*param_1 + 0x20))();
  FUN_1432c8a70(uVar1,&local_res8,0);
  return;
}



// FUNCTION 1432c9a20 FUN_1432c9a20 body=99 status=ok
// SIG undefined FUN_1432c9a20(void)

undefined8 * FUN_1432c9a20(undefined8 *param_1,longlong *param_2)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145af7d60;
  *(undefined4 *)(param_1 + 1) = 1;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
    param_1[2] = param_2;
    return param_1;
  }
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 1432c9a90 FUN_1432c9a90 body=140 status=ok
// SIG undefined FUN_1432c9a90(void)

void FUN_1432c9a90(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  
  uVar1 = param_1[1] + 1;
  if (uVar1 < (ulonglong)param_1[1]) {
    uVar3 = uVar1;
    if ((ulonglong)param_1[2] >> 1 <= uVar1) goto LAB_1432c9ae7;
  }
  else {
    if (uVar1 <= (ulonglong)param_1[2]) goto LAB_1432c9ae7;
    uVar3 = (uVar1 >> 2) + uVar1;
  }
  FUN_1432cc9e0(param_1,param_1,uVar3);
LAB_1432c9ae7:
  param_1[1] = uVar1;
  puVar2 = (ulonglong *)(*param_1 + -8 + uVar1 * 8);
  if (puVar2 != (ulonglong *)0x0) {
    *puVar2 = (ulonglong)param_2 | 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001432c9b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 8))(param_2);
  return;
}



// FUNCTION 1432c9b30 FUN_1432c9b30 body=121 status=ok
// SIG undefined FUN_1432c9b30(void)

void FUN_1432c9b30(longlong *param_1,RefCountImpl *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  uVar1 = param_1[1] + 1;
  if (uVar1 < (ulonglong)param_1[1]) {
    uVar3 = uVar1;
    if ((ulonglong)param_1[2] >> 1 <= uVar1) goto LAB_1432c9b7b;
  }
  else {
    if (uVar1 <= (ulonglong)param_1[2]) goto LAB_1432c9b7b;
    uVar3 = (uVar1 >> 2) + uVar1;
  }
  FUN_1432cc9e0(param_1,param_1,uVar3);
LAB_1432c9b7b:
  param_1[1] = uVar1;
  puVar2 = (undefined8 *)(*param_1 + -8 + uVar1 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = param_2;
  }
  Scaleform::RefCountImpl::AddRef(param_2);
  return;
}



// FUNCTION 1432c9bb0 FUN_1432c9bb0 body=98 status=ok
// SIG undefined FUN_1432c9bb0(void)

void FUN_1432c9bb0(longlong *param_1)

{
  RefCountImpl *this;
  ulonglong uVar1;
  
  uVar1 = 0;
  if (param_1[1] != 0) {
    do {
      this = *(RefCountImpl **)(*param_1 + uVar1 * 8);
      if (((ulonglong)this & 1) == 0) {
        Scaleform::RefCountImpl::Release(this);
      }
      else {
        (**(code **)(*(longlong *)((ulonglong)this & 0xfffffffffffffffe) + 0x10))();
      }
      uVar1 = (ulonglong)((int)uVar1 + 1);
    } while (uVar1 < (ulonglong)param_1[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x0001432c9c0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  return;
}



// FUNCTION 1432c9c20 FUN_1432c9c20 body=246 status=ok
// SIG undefined FUN_1432c9c20(void)

void FUN_1432c9c20(longlong *param_1,undefined8 param_2)

{
  RefCountImpl *this;
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined4 local_res8 [2];
  
  uVar4 = 0;
  if (param_1[1] != 0) {
    do {
      this = *(RefCountImpl **)(*param_1 + uVar4 * 8);
      if (((ulonglong)this & 1) == 0) {
        (**(code **)(*(longlong *)this + 8))(this,param_2);
        Scaleform::RefCountImpl::Release(this);
      }
      else {
        plVar3 = (longlong *)((ulonglong)this & 0xfffffffffffffffe);
        plVar1 = (longlong *)(**(code **)(*plVar3 + 0xa8))(plVar3);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x90))(plVar1);
        }
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
    } while (uVar4 < (ulonglong)param_1[1]);
  }
  if (((param_1[1] != 0) && ((param_1[2] & 0xfffffffffffffffeU) != 0)) && (param_1[2] != 0)) {
    if (*param_1 == 0) {
      local_res8[0] = 0x48;
      lVar2 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x20,local_res8);
    }
    else {
      lVar2 = (**(code **)(*DAT_146b62f28 + 0x58))();
    }
    *param_1 = lVar2;
    param_1[2] = 4;
  }
  param_1[1] = 0;
  return;
}



// FUNCTION 1432c9d20 FUN_1432c9d20 body=422 status=ok
// SIG undefined FUN_1432c9d20(void)

undefined8 *
FUN_1432c9d20(undefined8 *param_1,undefined4 param_2,undefined8 param_3,RefCountImpl *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 local_res10 [2];
  
  param_1[1] = 0;
  puVar2 = (undefined8 *)0x0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_145af7d80;
  param_1[2] = &PTR_LAB_145af7e78;
  param_1[3] = &PTR_LAB_145af7e90;
  param_1[7] = 0;
  param_1[6] = &PTR_FUN_144f70a50;
  param_1[6] = &PTR_FUN_145af7d70;
  *(undefined4 *)(param_1 + 7) = 1;
  param_1[8] = param_1;
  *(undefined4 *)(param_1 + 9) = param_2;
  param_1[10] = param_3;
  if (param_4 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_4);
  }
  param_1[0xb] = param_4;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = param_1 + 0x14;
  param_1[0x17] = param_1 + 0x14;
  param_1[0x18] = param_1 + 0x16;
  param_1[0x19] = param_1 + 0x16;
  param_1[0x1a] = param_1 + 0x18;
  param_1[0x1b] = param_1 + 0x18;
  local_res10[0] = 0x48;
  puVar1 = (undefined8 *)
           (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x78,local_res10);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &PTR_FUN_144f70a50;
    *puVar1 = &PTR_FUN_145af7d40;
    *(undefined4 *)(puVar1 + 1) = 1;
    puVar1[2] = param_1;
    FUN_1432bdc50(puVar1 + 3,0);
    Scaleform::Mutex::Mutex((Mutex *)(puVar1 + 9),true,false);
    Scaleform::WaitCondition::WaitCondition((WaitCondition *)(puVar1 + 0xe));
    puVar2 = puVar1;
  }
  if ((RefCountImpl *)param_1[0xf] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xf]);
  }
  param_1[0xf] = puVar2;
  return param_1;
}



// FUNCTION 1432c9ed0 FUN_1432c9ed0 body=478 status=ok
// SIG undefined FUN_1432c9ed0(void)

void FUN_1432c9ed0(RefCountImplCore *param_1)

{
  undefined8 *puVar1;
  RefCountImpl *this;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  *(undefined ***)param_1 = &PTR_FUN_145af7d80;
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_145af7e78;
  *(undefined ***)(param_1 + 0x18) = &PTR_LAB_145af7e90;
  uVar2 = uVar3;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    do {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x98) + uVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      uVar2 = (ulonglong)((int)uVar2 + 1);
    } while (uVar2 < *(ulonglong *)(param_1 + 0xa0));
  }
  if (((*(longlong *)(param_1 + 0xa0) != 0) &&
      ((*(ulonglong *)(param_1 + 0xa8) & 0xfffffffffffffffe) != 0)) &&
     (*(ulonglong *)(param_1 + 0xa8) != 0)) {
    if (*(longlong *)(param_1 + 0x98) != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
      *(undefined8 *)(param_1 + 0x98) = 0;
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if ((*(longlong *)(param_1 + 0x20) != 0) && (*(longlong *)(param_1 + 0x28) != 0)) {
    *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) = *(longlong *)(param_1 + 0x28);
    *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x98));
  if (*(longlong *)(param_1 + 0x88) != 0) {
    do {
      this = *(RefCountImpl **)(*(longlong *)(param_1 + 0x80) + uVar3 * 8);
      if (((ulonglong)this & 1) == 0) {
        Scaleform::RefCountImpl::Release(this);
      }
      else {
        (**(code **)(*(longlong *)((ulonglong)this & 0xfffffffffffffffe) + 0x10))();
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
    } while (uVar3 < *(ulonglong *)(param_1 + 0x88));
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x80));
  if (*(RefCountImpl **)(param_1 + 0x78) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x78));
  }
  if (*(RefCountImpl **)(param_1 + 0x70) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x70));
  }
  if (*(RefCountImpl **)(param_1 + 0x68) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x68));
  }
  if (*(RefCountImpl **)(param_1 + 0x60) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x60));
  }
  if (*(RefCountImpl **)(param_1 + 0x58) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x58));
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1 + 0x30);
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_144f1b048;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_145af7d48;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1432ca0c0 FUN_1432ca0c0 body=84 status=ok
// SIG undefined FUN_1432ca0c0(void)

void FUN_1432ca0c0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[0xf];
  Scaleform::Mutex::DoLock((Mutex *)(lVar1 + 0x48));
  (**(code **)(*param_1 + 0x90))(param_1);
  (**(code **)(*param_1 + 0x98))(param_1);
  FUN_1432c9c20(param_1 + 0x10,param_1);
  Scaleform::Mutex::Unlock((Mutex *)(lVar1 + 0x48));
  return;
}



// FUNCTION 1432ca170 FUN_1432ca170 body=142 status=ok
// SIG undefined FUN_1432ca170(void)

void FUN_1432ca170(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = param_1[0xf];
  Scaleform::Mutex::DoLock((Mutex *)(lVar1 + 0x48));
  if ((RefCountImpl *)param_1[0xe] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xe]);
  }
  param_1[0xe] = 0;
  plVar2 = param_1 + 0x14;
  if (param_1 == (longlong *)0xffffffffffffff50) {
    plVar2 = (longlong *)0x0;
  }
  while ((longlong *)param_1[0x17] != plVar2) {
    (**(code **)(*(longlong *)param_1[0x17] + 0x48))();
  }
  (**(code **)(*param_1 + 0x90))(param_1);
  Scaleform::Mutex::Unlock((Mutex *)(lVar1 + 0x48));
  return;
}



// FUNCTION 1432ca210 FUN_1432ca210 body=42 status=ok
// SIG undefined FUN_1432ca210(void)

void FUN_1432ca210(longlong *param_1)

{
  (**(code **)(*param_1 + 0x48))();
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001432ca230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[0xb] + 8))();
    return;
  }
  return;
}



// FUNCTION 1432ca260 FUN_1432ca260 body=70 status=ok
// SIG undefined FUN_1432ca260(void)

void FUN_1432ca260(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  Scaleform::Mutex::DoLock((Mutex *)(lVar1 + 0x48));
  FUN_1432c9a90(param_1 + 0x70,param_2);
  Scaleform::Mutex::Unlock((Mutex *)(lVar1 + 0x48));
  return;
}



// FUNCTION 1432ca2b0 FUN_1432ca2b0 body=70 status=ok
// SIG undefined FUN_1432ca2b0(void)

void FUN_1432ca2b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  Scaleform::Mutex::DoLock((Mutex *)(lVar1 + 0x48));
  FUN_1432c9b30(param_1 + 0x70,param_2);
  Scaleform::Mutex::Unlock((Mutex *)(lVar1 + 0x48));
  return;
}



// FUNCTION 1432ca300 FUN_1432ca300 body=98 status=ok
// SIG undefined FUN_1432ca300(void)

undefined ** FUN_1432ca300(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b63070) {
    _Init_thread_header(&DAT_146b63070);
    if (DAT_146b63070 == -1) {
      atexit((_func_5014 *)&LAB_143ec45e0);
      _Init_thread_footer(&DAT_146b63070);
    }
  }
  return &PTR_PTR_1467cd0a0;
}



// FUNCTION 1432ca370 FUN_1432ca370 body=45 status=ok
// SIG undefined FUN_1432ca370(void)

longlong FUN_1432ca370(longlong *param_1)

{
  if (param_1[0xe] == 0) {
    (**(code **)(*param_1 + 0xf0))();
    return param_1[0xe];
  }
  return param_1[0xe];
}



// FUNCTION 1432ca3b0 FUN_1432ca3b0 body=135 status=ok
// SIG undefined FUN_1432ca3b0(void)

undefined8 FUN_1432ca3b0(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x98) + uVar3 * 8);
      if ((plVar1 != (longlong *)0x0) && (iVar2 = (**(code **)(*plVar1 + 8))(), iVar2 == param_2)) {
        return *(undefined8 *)(*(longlong *)(param_1 + 0x98) + uVar3 * 8);
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
    } while (uVar3 < *(ulonglong *)(param_1 + 0xa0));
  }
  return 0;
}



// FUNCTION 1432ca440 FUN_1432ca440 body=183 status=ok
// SIG undefined FUN_1432ca440(void)

longlong FUN_1432ca440(longlong *param_1,uint param_2,uint param_3,longlong *param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_4 == (longlong *)0x0) {
    if ((param_3 & 0x4f0) == 0) {
      return 0;
    }
  }
  else {
    uVar2 = (**(code **)(*param_4 + 0x20))(param_4);
    if (((uVar2 ^ param_2) & 0xfff) != 0) {
      return 0;
    }
    iVar3 = (**(code **)(*param_4 + 0x18))(param_4);
    if ((iVar3 == 0) && ((param_3 >> 8 & 1) == 0)) {
      return 0;
    }
  }
  lVar4 = (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  if ((lVar4 != 0) && ((0x31 < (param_2 & 0xfff) - 0x32 || ((param_3 & 0x4e2) == 0)))) {
    if ((param_3 & 0xc0) == 0) {
      return lVar4;
    }
    cVar1 = (**(code **)(*param_1 + 0xc0))(param_1,lVar4);
    if (cVar1 != '\0') {
      return lVar4;
    }
  }
  return 0;
}



// FUNCTION 1432ca500 FUN_1432ca500 body=348 status=ok
// SIG undefined FUN_1432ca500(void)

RefCountImpl * FUN_1432ca500(longlong *param_1,RefCountImpl *param_2,uint param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  
  if (param_2 != (RefCountImpl *)0x0) {
    cVar2 = (**(code **)(*(longlong *)param_2 + 0x10))(param_2);
    if (cVar2 != '\0') {
      lVar1 = param_1[0xf];
      Scaleform::Mutex::DoLock((Mutex *)(lVar1 + 0x48));
      cVar2 = (**(code **)(*param_1 + 0x40))(param_1);
      if (cVar2 == '\0') {
        FUN_14208c210(param_1 + 0x18,param_2);
        Scaleform::Mutex::Unlock((Mutex *)(param_1[0xf] + 0x48));
        (**(code **)(*(longlong *)param_1[10] + 8))((longlong *)param_1[10],param_1 + 6);
        Scaleform::Mutex::DoLock((Mutex *)(param_1[0xf] + 0x48));
        iVar3 = *(int *)(param_2 + 0x40);
        while (iVar3 == 0) {
          Scaleform::WaitCondition::Wait
                    ((WaitCondition *)(param_1[0xf] + 0x70),(Mutex *)(param_1[0xf] + 0x48),
                     0xffffffff);
          iVar3 = *(int *)(param_2 + 0x40);
        }
      }
      else {
        (**(code **)(*param_1 + 0x90))(param_1);
        (**(code **)(*param_1 + 0x98))(param_1);
        cVar2 = (**(code **)(*(longlong *)param_2 + 8))(param_2);
        if (cVar2 != '\0') {
          FUN_14208c210(param_1 + 0x16,param_2);
        }
      }
      if ((param_3 >> 8 & 1) != 0) {
        if ((*(longlong **)(param_2 + 0x30) != (longlong *)0x0) &&
           (iVar3 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x18))(), iVar3 == 2)) {
          Scaleform::Render::RawImage::freeData(*(undefined8 *)(param_2 + 0x30));
        }
        *(undefined8 *)(param_2 + 0x30) = 0;
      }
      if (*(int *)(param_2 + 0x40) == 1) {
        *(undefined8 *)(param_2 + 0x30) = 0;
        Scaleform::RefCountImpl::Release(param_2);
        param_2 = (RefCountImpl *)0x0;
      }
      Scaleform::Mutex::Unlock((Mutex *)(lVar1 + 0x48));
      return param_2;
    }
    Scaleform::RefCountImpl::Release(param_2);
  }
  return (RefCountImpl *)0x0;
}



// FUNCTION 1432ca670 FUN_1432ca670 body=295 status=ok
// SIG undefined FUN_1432ca670(void)

longlong * FUN_1432ca670(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = param_1[0xf];
    Scaleform::Mutex::DoLock((Mutex *)(lVar2 + 0x48));
    cVar3 = (**(code **)(*param_1 + 0x40))(param_1);
    if (cVar3 == '\0') {
      if ((param_2[2] != 0) && (param_2[3] != 0)) {
        *(longlong *)(param_2[2] + 0x18) = param_2[3];
        *(longlong *)(param_2[3] + 0x10) = param_2[2];
        param_2[2] = 0;
        param_2[3] = 0;
      }
      param_2[2] = param_1[0x1a];
      param_2[3] = (longlong)(param_1 + 0x18);
      *(longlong **)(param_1[0x1a] + 0x18) = param_2;
      param_1[0x1a] = (longlong)param_2;
      if (param_1[10] != 0) {
        Scaleform::Mutex::Unlock((Mutex *)(param_1[0xf] + 0x48));
        (**(code **)(*(longlong *)param_1[10] + 8))((longlong *)param_1[10],param_1 + 6);
        Scaleform::Mutex::DoLock((Mutex *)(param_1[0xf] + 0x48));
      }
      iVar1 = (int)param_2[6];
      while (iVar1 == 0) {
        Scaleform::WaitCondition::Wait
                  ((WaitCondition *)(param_1[0xf] + 0x70),(Mutex *)(param_1[0xf] + 0x48),0xffffffff)
        ;
        iVar1 = (int)param_2[6];
      }
    }
    else {
      (**(code **)(*param_1 + 0x90))(param_1);
      (**(code **)(*param_1 + 0x98))(param_1);
      (**(code **)(*param_2 + 0x18))(param_2);
    }
    Scaleform::Mutex::Unlock((Mutex *)(lVar2 + 0x48));
    return param_2;
  }
  return (longlong *)0x0;
}



// FUNCTION 1432ca7a0 FUN_1432ca7a0 body=168 status=ok
// SIG undefined FUN_1432ca7a0(void)

longlong * FUN_1432ca7a0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0xe0))();
  cVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::CompareAndSet_NoSync
                    ((longlong)plVar2 + 0x14,0,0xffffffff);
  plVar3 = plVar2;
  if ((cVar1 != '\0') ||
     (plVar3 = (longlong *)(**(code **)(*param_1 + 0xe8))(param_1), plVar3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar3 + 8))(plVar3,param_2,param_3,param_4);
    if (cVar1 != '\0') {
      return plVar3;
    }
    if (plVar3 != plVar2) {
      (**(code **)*plVar3)(plVar3,1);
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1432ca850 FUN_1432ca850 body=71 status=ok
// SIG undefined FUN_1432ca850(void)

void FUN_1432ca850(longlong *param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x50);
  (**(code **)(*plVar1 + 0x10))(plVar1,param_3);
  plVar2 = (longlong *)(**(code **)(*param_1 + 0xe0))(param_1);
  if (plVar1 != plVar2) {
    (**(code **)*plVar1)(plVar1,1);
  }
  return;
}



// FUNCTION 1432ca8a0 FUN_1432ca8a0 body=348 status=ok
// SIG undefined FUN_1432ca8a0(void)

void FUN_1432ca8a0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  void *_Dst;
  size_t _Size;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_68;
  undefined8 local_60;
  size_t local_58;
  void *local_50;
  ulonglong local_48;
  undefined4 local_40;
  undefined8 *local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_40 = 0x10000;
  local_38 = &local_28;
  local_48 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = (void *)0x0;
  local_res8 = 0x10;
  local_resc = 0x10;
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,1,1,&local_res8,0xc0,0,0);
  if ((RefCountImpl *)param_1[0xe] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xe]);
  }
  param_1[0xe] = (longlong)plVar3;
  (**(code **)(*plVar3 + 0x70))(plVar3,&local_48,0,0);
  if (local_40._2_2_ == 0) {
    FUN_1432c73f0(local_38,local_48 & 0xffffffff,0,&local_68,0);
    _Dst = local_50;
    _Size = local_58;
  }
  else {
    _Dst = (void *)local_38[3];
    _Size = local_38[2];
  }
  _guard_xfg_dispatch_icall_nop(_Dst,0,_Size);
  (**(code **)(*(longlong *)param_1[0xe] + 0x78))();
  if ((local_40 & 2) != 0) {
    local_40 = local_40 & 0xfffffffd;
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_38);
  }
  lVar1 = local_30;
  local_38 = &local_28;
  if (local_30 != 0) {
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(local_30,0xffffffff);
    if (iVar2 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
    }
  }
  return;
}



// FUNCTION 1432caa20 releaseTexture body=53 status=ok
// SIG undefined releaseTexture(void)

void Scaleform::Render::Image::releaseTexture(longlong param_1)

{
  RefCountImpl *this;
  
  this = (RefCountImpl *)AtomicOpsRaw_8ByteImpl::Exchange_NoSync(param_1 + 0x10,0);
  if (this != (RefCountImpl *)0x0) {
    (**(code **)(*(longlong *)this + 0x40))(this);
    RefCountImpl::Release(this);
    return;
  }
  return;
}



// FUNCTION 1432caa60 SetOwnerAsset body=5 status=ok
// SIG undefined SetOwnerAsset(void)

void FStringTable::SetOwnerAsset(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}



// FUNCTION 1432caa70 FUN_1432caa70 body=99 status=ok
// SIG undefined FUN_1432caa70(void)

void FUN_1432caa70(RefCountImplCore *param_1)

{
  RefCountImpl *this;
  
  *(undefined ***)param_1 = &PTR_FUN_144f70a80;
  this = (RefCountImpl *)Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync(param_1 + 0x10,0);
  if (this != (RefCountImpl *)0x0) {
    (**(code **)(*(longlong *)this + 0x40))(this);
    Scaleform::RefCountImpl::Release(this);
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1432caae0 FUN_1432caae0 body=345 status=ok
// SIG undefined FUN_1432caae0(void)

longlong *
FUN_1432caae0(undefined4 param_1,int param_2,undefined8 param_3,uint param_4,longlong *param_5,
             longlong *param_6,longlong *param_7)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  
  if (param_5 == (longlong *)0x0) {
    param_5 = DAT_146b62f28;
  }
  if ((param_7 == (longlong *)0x0) && (param_7 = param_6 + 2, param_6 == (longlong *)0x0)) {
    param_7 = (longlong *)0x0;
  }
  if (((param_4 & 2) != 0) && (param_2 != 1)) {
    return (longlong *)0x0;
  }
  plVar5 = param_6;
  if ((((param_6 != (longlong *)0x0) &&
       (cVar1 = (**(code **)(*param_6 + 0x40))(param_6), plVar5 = (longlong *)0x0, cVar1 != '\0'))
      && (uVar2 = (**(code **)(*param_6 + 0x20))(param_6,param_1), plVar5 = param_6,
         (uVar2 >> 8 & 1) != 0)) &&
     ((((uVar2 ^ param_4) & 0xc0) == 0 &&
      (lVar4 = (**(code **)(*param_5 + 0x50))(param_5,0x38), lVar4 != 0)))) {
    uVar6 = 0;
    plVar3 = (longlong *)FUN_1432cc230(lVar4,param_1,param_3,param_4,0,param_7);
    if (plVar3 != (longlong *)0x0) goto LAB_1432cabd7;
  }
  plVar3 = (longlong *)FUN_1432cb620(param_1,param_2,param_3,param_4,param_5,param_7);
  uVar6 = (undefined4)((ulonglong)param_5 >> 0x20);
  param_6 = plVar5;
  if (plVar3 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
LAB_1432cabd7:
  if (param_6 == (longlong *)0x0) {
    return plVar3;
  }
  lVar4 = (**(code **)(*param_6 + 0x10))
                    (param_6,param_1,param_2,param_3,CONCAT44(uVar6,param_4),plVar3,0);
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    return (longlong *)0x0;
  }
  plVar3[2] = lVar4;
  return plVar3;
}



// FUNCTION 1432cac40 FUN_1432cac40 body=75 status=ok
// SIG undefined FUN_1432cac40(void)

void FUN_1432cac40(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_3 + 0x50))(param_3,0x40);
  if (lVar1 != 0) {
    FUN_1432cc1a0(lVar1,param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1432caca0 FUN_1432caca0 body=164 status=ok
// SIG undefined FUN_1432caca0(void)

void FUN_1432caca0(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  Matrix2x4<float> *this;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    if (param_3 == (longlong *)0x0) {
      param_3 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
    }
    uVar2 = (**(code **)(*param_3 + 0x48))(param_3,0x20,0x10);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  puVar1[4] = param_2[4];
  puVar1[5] = param_2[5];
  puVar1[6] = param_2[6];
  puVar1[7] = param_2[7];
  this = *(Matrix2x4<float> **)(param_1 + 0x20);
  local_28 = *(undefined8 *)this;
  uStack_20 = *(undefined8 *)(this + 8);
  local_18 = *(undefined8 *)(this + 0x10);
  uStack_10 = *(undefined8 *)(this + 0x18);
  Scaleform::Render::Matrix2x4<float>::SetInverse(this,(Matrix2x4<float> *)&local_28);
  return;
}



// FUNCTION 1432cad50 FUN_1432cad50 body=219 status=ok
// SIG undefined FUN_1432cad50(void)

void FUN_1432cad50(longlong param_1,Matrix2x4<float> *param_2)

{
  undefined4 *puVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)param_2 = *puVar1;
    *(undefined4 *)(param_2 + 4) = puVar1[1];
    *(undefined4 *)(param_2 + 8) = puVar1[2];
    *(undefined4 *)(param_2 + 0xc) = puVar1[3];
    *(undefined4 *)(param_2 + 0x10) = puVar1[4];
    *(undefined4 *)(param_2 + 0x14) = puVar1[5];
    *(undefined4 *)(param_2 + 0x18) = puVar1[6];
    local_c = puVar1[7];
    *(undefined4 *)(param_2 + 0x1c) = local_c;
    local_28 = *(undefined4 *)param_2;
    local_24 = *(undefined4 *)(param_2 + 4);
    local_20 = *(undefined4 *)(param_2 + 8);
    local_18 = *(undefined4 *)(param_2 + 0x10);
    local_1c = *(undefined4 *)(param_2 + 0xc);
    local_10 = *(undefined4 *)(param_2 + 0x18);
    local_14 = *(undefined4 *)(param_2 + 0x14);
    Scaleform::Render::Matrix2x4<float>::SetInverse(param_2,(Matrix2x4<float> *)&local_28);
    return;
  }
  *(undefined8 *)param_2 = 0x3f800000;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0x3f800000;
  return;
}



// FUNCTION 1432cae40 SetMatrixInverse body=133 status=ok
// SIG undefined SetMatrixInverse(void)

void Scaleform::Render::Image::SetMatrixInverse
               (longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    if (param_3 == (longlong *)0x0) {
      param_3 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
    }
    uVar2 = (**(code **)(*param_3 + 0x48))(param_3,0x20,0x10);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  puVar1[4] = param_2[4];
  puVar1[5] = param_2[5];
  puVar1[6] = param_2[6];
  puVar1[7] = param_2[7];
  return;
}



// FUNCTION 1432caf20 FUN_1432caf20 body=265 status=ok
// SIG undefined FUN_1432caf20(void)

void FUN_1432caf20(longlong *param_1,float *param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  uint local_58;
  uint local_54;
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0xa8))(param_1,param_3);
  if (plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_1 + 0x80))(param_1,local_28);
    if (cVar1 == '\0') {
      (**(code **)(*plVar2 + 0x38))(plVar2,param_2);
    }
    else {
      (**(code **)(*plVar2 + 0x38))(plVar2,local_48);
      FUN_1432be670(param_2,local_28,local_48);
    }
    (**(code **)(*param_1 + 0x30))(param_1,&local_58);
    param_2[7] = (float)local_58 * param_2[4] + (float)local_54 * param_2[5] + param_2[7];
    param_2[3] = (float)local_54 * param_2[1] + (float)local_58 * *param_2 + param_2[3];
    return;
  }
  param_2[0] = 1.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  param_2[4] = 0.0;
  param_2[7] = 0.0;
  param_2[5] = 1.0;
  param_2[6] = 0.0;
  return;
}



// FUNCTION 1432cb030 FUN_1432cb030 body=308 status=ok
// SIG undefined FUN_1432cb030(void)

void FUN_1432cb030(longlong *param_1,Matrix2x4<float> *param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  int *piVar3;
  uint local_38;
  uint local_34;
  int local_30;
  int local_2c;
  Matrix2x4<float> local_28 [32];
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0xa8))(param_1,param_3);
  if (plVar2 == (longlong *)0x0) {
    *(undefined8 *)param_2 = 0x3f800000;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x1c) = 0;
    *(undefined8 *)(param_2 + 0x14) = 0x3f800000;
  }
  else {
    (**(code **)(*plVar2 + 0x38))(plVar2,param_2);
    (**(code **)(*param_1 + 0x30))(param_1,&local_38);
    if ((local_30 - local_38 != (int)plVar2[7]) ||
       (local_2c - local_34 != *(int *)((longlong)plVar2 + 0x3c))) {
      cVar1 = (**(code **)(*param_1 + 0x80))(param_1,local_28);
      if (cVar1 != '\0') {
        Scaleform::Render::Matrix2x4<float>::Prepend(param_2,local_28);
      }
    }
    *(float *)(param_2 + 0x1c) =
         (float)local_38 * *(float *)(param_2 + 0x10) + (float)local_34 * *(float *)(param_2 + 0x14)
         + *(float *)(param_2 + 0x1c);
    *(float *)(param_2 + 0xc) =
         (float)local_34 * *(float *)(param_2 + 4) + (float)local_38 * *(float *)param_2 +
         *(float *)(param_2 + 0xc);
  }
  piVar3 = (int *)(**(code **)(*param_1 + 0x30))(param_1,&local_38);
  FUN_1432cc8f0(param_2,(float)(uint)(piVar3[2] - *piVar3),(float)(uint)(piVar3[3] - piVar3[1]));
  return;
}



// FUNCTION 1432cb1d0 FUN_1432cb1d0 body=98 status=ok
// SIG undefined FUN_1432cb1d0(void)

bool FUN_1432cb1d0(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (*(longlong **)(param_2 + 4) != (longlong *)0x0) {
    lVar1 = **(longlong **)(param_2 + 4);
    uVar2 = (**(code **)(*param_1 + 0x20))();
    uVar3 = (**(code **)(lVar1 + 0x20))(*(undefined8 *)(param_2 + 4),uVar2);
    if ((((~uVar3 & *param_2 & 0xc0) == 0) && ((uVar3 >> 8 & 1) != 0)) &&
       (*(longlong *)(*(longlong *)(param_2 + 4) + 0x58) == 0)) {
      return false;
    }
  }
  return (*param_2 & 0xc0) == 0;
}



// FUNCTION 1432cb240 FUN_1432cb240 body=607 status=ok
// SIG undefined FUN_1432cb240(void)

longlong * FUN_1432cb240(longlong *param_1,uint *param_2)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  RefCountImpl *this;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint local_res8 [2];
  longlong *local_res10;
  undefined1 local_res18 [8];
  undefined8 in_stack_ffffffffffffff68;
  undefined8 local_78;
  uint local_70;
  undefined8 *local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  uVar3 = param_2[8];
  if (uVar3 == 0) {
    uVar3 = (**(code **)(*param_1 + 0x20))();
  }
  lVar11 = *(longlong *)(param_2 + 6);
  plVar9 = (longlong *)0x0;
  if ((lVar11 == 0) && (lVar11 = *(longlong *)(param_2 + 4) + 0x10, *(longlong *)(param_2 + 4) == 0)
     ) {
    lVar11 = 0;
  }
  uVar12 = *param_2;
  plVar10 = DAT_146b62f28;
  if (*(longlong **)(param_2 + 2) != (longlong *)0x0) {
    plVar10 = *(longlong **)(param_2 + 2);
  }
  local_res10 = plVar10;
  local_res8[0] = (**(code **)(*param_1 + 0x38))(param_1);
  if (1 < local_res8[0]) {
    uVar12 = uVar12 & 0xfffffffd;
  }
  plVar1 = *(longlong **)(param_2 + 4);
  uVar13 = uVar12;
  if (((plVar1 != (longlong *)0x0) &&
      (uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,uVar3), (~uVar4 & *param_2 & 0xc0) == 0)) &&
     ((uVar4 >> 8 & 1) != 0)) {
    cVar2 = (**(code **)(**(longlong **)(param_2 + 4) + 0x40))();
    uVar13 = uVar12 | 0x100;
    if (cVar2 != '\0') {
      lVar8 = **(longlong **)(param_2 + 4);
      uVar7 = (**(code **)(*param_1 + 0x28))(param_1,local_res18);
      this = (RefCountImpl *)
             (**(code **)(lVar8 + 0x10))
                       (*(undefined8 *)(param_2 + 4),uVar3,local_res8[0],uVar7,
                        CONCAT44(uVar5,uVar12) | 0x100,param_1,0);
      if (this == (RefCountImpl *)0x0) {
        return (longlong *)0x0;
      }
      lVar8 = (**(code **)(*local_res10 + 0x50))(local_res10,0x38);
      if (lVar8 != 0) {
        uVar7 = (**(code **)(*param_1 + 0x28))(param_1,local_res8);
        plVar9 = (longlong *)FUN_1432cc230(lVar8,uVar3,uVar7,uVar13,this,lVar11);
      }
      Scaleform::RefCountImpl::Release(this);
      return plVar9;
    }
  }
  uVar7 = (**(code **)(*param_1 + 0x28))(param_1,&local_res10);
  plVar10 = (longlong *)FUN_1432cb620(uVar3,local_res8[0],uVar7,uVar13,plVar10,lVar11);
  if (plVar10 != (longlong *)0x0) {
    local_68 = &local_58;
    local_78 = 0;
    local_70 = 0x10000;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    FUN_1432c7760(&local_78,plVar10 + 5);
    lVar11 = *param_1;
    uVar5 = (**(code **)(lVar11 + 0x20))(param_1);
    uVar7 = FUN_1432fa1f0(uVar3,uVar5);
    cVar2 = (**(code **)(lVar11 + 0x40))(param_1,&local_78,uVar7,0);
    if (cVar2 == '\0') {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      plVar10 = plVar9;
    }
    if ((local_70 & 2) != 0) {
      local_70 = local_70 & 0xfffffffd;
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_68);
    }
    lVar11 = local_60;
    local_68 = &local_58;
    if ((local_60 != 0) &&
       (iVar6 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(local_60,0xffffffff),
       iVar6 == 1)) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar11);
    }
  }
  return plVar10;
}



// FUNCTION 1432cb4b0 FUN_1432cb4b0 body=193 status=ok
// SIG undefined FUN_1432cb4b0(void)

void FUN_1432cb4b0(RefCountImplCore *param_1)

{
  longlong lVar1;
  int iVar2;
  RefCountImpl *this;
  
  *(undefined ***)param_1 = &PTR_FUN_145af7f70;
  Scaleform::Render::RawImage::freeData();
  if (((byte)param_1[0x30] & 2) != 0) {
    param_1[0x30] = (RefCountImplCore)((byte)param_1[0x30] & 0xfd);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x38));
  }
  *(RefCountImplCore **)(param_1 + 0x38) = param_1 + 0x48;
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 != 0) {
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(lVar1,0xffffffff);
    if (iVar2 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
    }
  }
  *(undefined ***)param_1 = &PTR_FUN_144f70a80;
  this = (RefCountImpl *)Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync(param_1 + 0x10,0);
  if (this != (RefCountImpl *)0x0) {
    (**(code **)(*(longlong *)this + 0x40))(this);
    Scaleform::RefCountImpl::Release(this);
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1432cb580 freeData body=106 status=ok
// SIG undefined freeData(void)

void Scaleform::Render::RawImage::freeData(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (*(short *)(param_1 + 0x32) != 0) {
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x18 + uVar2 * 0x20) != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18 + uVar2 * 0x20) = 0;
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(ushort *)(param_1 + 0x32));
  }
  return;
}



// FUNCTION 1432cb5f0 FUN_1432cb5f0 body=42 status=ok
// SIG undefined FUN_1432cb5f0(void)

ulonglong FUN_1432cb5f0(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (*(ushort *)(param_1 + 0x32) != 0) {
    do {
      if (*(longlong *)(uVar2 * 0x20 + 0x18 + *(longlong *)(param_1 + 0x38)) != 0) {
        return CONCAT71((int7)(uVar2 >> 8),1);
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(ushort *)(param_1 + 0x32));
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1432cb620 FUN_1432cb620 body=530 status=ok
// SIG undefined FUN_1432cb620(void)

longlong *
FUN_1432cb620(uint param_1,int param_2,uint *param_3,uint param_4,longlong *param_5,longlong param_6
             )

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  longlong *plVar10;
  
  plVar10 = param_5;
  if (param_5 == (longlong *)0x0) {
    plVar10 = DAT_146b62f28;
  }
  if (((param_4 & 2) != 0) && (param_2 != 1)) {
    return (longlong *)0x0;
  }
  plVar2 = (longlong *)(**(code **)(*plVar10 + 0x50))(plVar10,0x68);
  if (plVar2 != (longlong *)0x0) {
    uVar6 = 0;
    plVar2[1] = 0;
    *plVar2 = (longlong)&PTR_FUN_144f70a50;
    *plVar2 = (longlong)&PTR_FUN_144f70a80;
    *(undefined4 *)(plVar2 + 1) = 1;
    plVar2[2] = 0;
    *plVar2 = (longlong)&PTR_FUN_145af7f70;
    plVar2[3] = 0;
    plVar2[4] = 0;
    plVar2[7] = (longlong)(plVar2 + 9);
    plVar2[5] = 0;
    *(undefined4 *)(plVar2 + 6) = 0x10000;
    plVar2[8] = 0;
    plVar2[9] = 0;
    plVar2[10] = 0;
    plVar2[0xb] = 0;
    plVar2[0xc] = 0;
    FUN_1432c78c0(plVar2 + 5);
    cVar1 = FUN_1432c7600(plVar2 + 5,param_1,param_2,0);
    if (cVar1 != '\0') {
      *(uint *)((longlong)plVar2 + 0x2c) = param_4 & 0xffff;
      plVar2[3] = param_6;
      if (*(short *)((longlong)plVar2 + 0x32) == 0) {
        return plVar2;
      }
      while( true ) {
        if (((param_1 & 0xfff) - 200 < 2) && ((int)uVar6 - 1U < 2)) {
          uVar8 = *param_3 >> 1;
          uVar7 = param_3[1] >> 1;
        }
        else {
          uVar8 = *param_3;
          uVar7 = param_3[1];
        }
        param_5._0_4_ = uVar8;
        param_5._4_4_ = uVar7;
        uVar3 = FUN_1432c8b40(param_1,&param_5,param_2,uVar6);
        lVar4 = (**(code **)(*plVar10 + 0x50))(plVar10,uVar3,0);
        if (lVar4 == 0) break;
        puVar9 = (uint *)(uVar6 * 0x20 + plVar2[7]);
        *puVar9 = uVar8;
        puVar9[1] = uVar7;
        uVar5 = FUN_1432c8830(param_1,uVar8,uVar6);
        *(undefined8 *)(puVar9 + 2) = uVar5;
        uVar8 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar8;
        *(longlong *)(puVar9 + 6) = lVar4;
        *(undefined8 *)(puVar9 + 4) = uVar3;
        if (*(ushort *)((longlong)plVar2 + 0x32) <= uVar8) {
          return plVar2;
        }
      }
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return (longlong *)0x0;
}



// FUNCTION 1432cb840 GetImageData body=26 status=ok
// SIG undefined GetImageData(void)

undefined8 Scaleform::Render::RawImage::GetImageData(longlong param_1,undefined8 param_2)

{
  FUN_1432c7760(param_2,param_1 + 0x28);
  return 1;
}



// FUNCTION 1432cb860 FUN_1432cb860 body=43 status=ok
// SIG undefined FUN_1432cb860(void)

void FUN_1432cb860(longlong param_1,undefined8 param_2)

{
  Scaleform::Render::RawImage::freeData();
  FUN_1432c7760(param_1 + 0x28,param_2);
  return;
}



// FUNCTION 1432cb8a0 FUN_1432cb8a0 body=48 status=ok
// SIG undefined FUN_1432cb8a0(void)

undefined8 FUN_1432cb8a0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_1432c7970(param_2,param_1 + 0x28);
  if (cVar1 != '\0') {
    *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 0x10;
    return 1;
  }
  return 0;
}



// FUNCTION 1432cb8f0 FUN_1432cb8f0 body=1737 status=ok
// SIG undefined FUN_1432cb8f0(void)

undefined8 FUN_1432cb8f0(longlong param_1,undefined4 *param_2,code *param_3,undefined8 param_4)

{
  ushort uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  ulonglong *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  void *pvVar14;
  byte bVar15;
  void *pvVar16;
  void *pvVar17;
  uint uVar18;
  undefined8 local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  void *local_b0;
  uint local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  void *local_88;
  int local_80;
  uint local_7c;
  uint local_78;
  ulonglong local_70;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  longlong local_58;
  
  uVar12 = 0;
  local_c8 = 0;
  local_60 = *(uint *)(param_1 + 0x28);
  local_64 = local_60 & 0xfff;
  local_c0 = 0;
  local_5c = 1;
  local_b8 = 0;
  local_b0 = (void *)0x0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = (void *)0x0;
  uVar8 = 0;
  if (local_64 != 0) {
    if (local_64 == 0x42) {
      uVar8 = 2;
    }
    else if (local_64 == 200) {
      uVar8 = 3;
    }
    else {
      uVar8 = local_5c;
      if (local_64 == 0xc9) {
        uVar8 = 4;
      }
    }
  }
  uVar18 = local_5c;
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    uVar18 = (uint)*(byte *)(param_1 + 0x31);
  }
  uVar18 = *(ushort *)(param_1 + 0x32) * uVar18;
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    local_5c = (uint)*(byte *)((longlong)param_2 + 9);
  }
  local_5c = *(ushort *)((longlong)param_2 + 10) * local_5c;
  if ((int)(local_60 & 0xffefffff) < 0x1000) {
    local_78 = 0;
    if (uVar18 < local_5c) {
      local_5c = uVar18;
    }
    if (local_5c != 0) {
      local_58 = 0;
      uVar13 = (ulonglong)local_5c % (ulonglong)uVar8;
      local_7c = (uint)uVar13;
      do {
        pvVar14 = (void *)0x0;
        if ((((*(byte *)(param_1 + 0x30) & 1) == 0) && (*(char *)(param_1 + 0x31) != '\x01')) ||
           (((*(byte *)(param_2 + 2) & 1) == 0 && (*(char *)((longlong)param_2 + 9) != '\x01')))) {
          local_68 = 0;
          bVar15 = *(byte *)((longlong)param_2 + 9);
          if (*(byte *)(param_1 + 0x31) < *(byte *)((longlong)param_2 + 9)) {
            bVar15 = *(byte *)(param_1 + 0x31);
          }
          if (bVar15 != 0) {
            local_80 = (int)uVar13 - local_78;
            pvVar17 = pvVar14;
            local_a8 = local_78;
            do {
              uVar1 = *(ushort *)(param_1 + 0x32);
              if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
                uVar18 = (uint)uVar1;
                if (local_a8 < uVar18) {
                  puVar10 = (ulonglong *)
                            ((ulonglong)local_a8 * 0x20 + *(longlong *)(param_1 + 0x38));
                  local_70 = puVar10[1];
                  local_c8 = *puVar10;
                  uVar12 = (ulonglong)*(uint *)((longlong)puVar10 + 4);
                  local_b0 = (void *)puVar10[3];
                  local_b8 = puVar10[2];
                  pvVar7 = local_b0;
                }
                else {
                  uVar12 = (ulonglong)local_a8 % (ulonglong)uVar18;
                  FUN_1432c73f0(uVar12 * 0x20 + *(longlong *)(param_1 + 0x38),
                                *(undefined4 *)(param_1 + 0x28),
                                (ulonglong)local_a8 / (ulonglong)uVar18,&local_c8,uVar12);
                  uVar12 = local_c8 >> 0x20;
                  local_70 = local_c0;
                  pvVar7 = local_b0;
                }
              }
              else {
                uVar18 = local_80 + local_a8;
                uVar9 = (uint)uVar1;
                if (uVar18 < uVar9) {
                  puVar10 = (ulonglong *)((ulonglong)uVar18 * 0x20 + *(longlong *)(param_1 + 0x38));
                  local_70 = puVar10[1];
                  local_c8 = *puVar10;
                  uVar12 = (ulonglong)*(uint *)((longlong)puVar10 + 4);
                  local_b8 = puVar10[2];
                  local_b0 = (void *)puVar10[3];
                  pvVar7 = local_b0;
                  if (pvVar14 != (void *)0x0) {
                    pvVar7 = pvVar14;
                  }
                }
                else {
                  uVar12 = (ulonglong)uVar18 % (ulonglong)uVar9;
                  FUN_1432c73f0(uVar12 * 0x20 + *(longlong *)(param_1 + 0x38),
                                *(undefined4 *)(param_1 + 0x28),(ulonglong)uVar18 / (ulonglong)uVar9
                                ,&local_c8,uVar12);
                  uVar12 = local_c8 >> 0x20;
                  pvVar7 = local_b0;
                  if (pvVar14 != (void *)0x0) {
                    pvVar7 = pvVar14;
                  }
                  local_70 = local_c0;
                }
              }
              uVar1 = *(ushort *)((longlong)param_2 + 10);
              local_c0 = local_70;
              if ((*(byte *)(param_2 + 2) & 1) == 0) {
                uVar18 = (uint)uVar1;
                if (local_a8 < uVar18) {
                  puVar11 = (undefined8 *)((ulonglong)local_a8 * 0x20 + *(longlong *)(param_2 + 4));
                  local_98 = puVar11[1];
                  local_88 = (void *)puVar11[3];
                  local_a0 = *puVar11;
                  local_90 = puVar11[2];
                  pvVar16 = local_88;
                }
                else {
                  uVar13 = (ulonglong)local_a8 % (ulonglong)uVar18;
                  FUN_1432c73f0(uVar13 * 0x20 + *(longlong *)(param_2 + 4),*param_2,
                                (ulonglong)local_a8 / (ulonglong)uVar18,&local_a0,uVar13);
                  pvVar16 = local_88;
                }
              }
              else {
                uVar18 = local_80 + local_a8;
                uVar9 = (uint)uVar1;
                if (uVar18 < uVar9) {
                  puVar11 = (undefined8 *)((ulonglong)uVar18 * 0x20 + *(longlong *)(param_2 + 4));
                  local_98 = puVar11[1];
                  local_a0 = *puVar11;
                  local_90 = puVar11[2];
                  local_88 = (void *)puVar11[3];
                  pvVar16 = local_88;
                  if (pvVar17 != (void *)0x0) {
                    pvVar16 = pvVar17;
                  }
                }
                else {
                  uVar13 = (ulonglong)uVar18 % (ulonglong)uVar9;
                  FUN_1432c73f0(uVar13 * 0x20 + *(longlong *)(param_2 + 4),*param_2,
                                (ulonglong)uVar18 / (ulonglong)uVar9,&local_a0,uVar13);
                  pvVar16 = local_88;
                  if (pvVar17 != (void *)0x0) {
                    pvVar16 = pvVar17;
                  }
                }
              }
              lVar4 = local_98;
              if ((0x31 < local_64) && ((local_64 < 0x36 || (local_64 - 0x3f < 3)))) {
                if ((local_60 & 0xf000) == 0xa000) {
                  uVar12 = (ulonglong)((int)uVar12 + 0x1fU >> 5);
                }
                else {
                  uVar12 = (ulonglong)((int)uVar12 + 3U >> 2);
                }
              }
              iVar5 = FUN_1432c86e0(*(undefined4 *)(param_1 + 0x28),0);
              uVar13 = local_70;
              uVar18 = iVar5 * (int)local_c8;
              pvVar14 = pvVar7;
              pvVar17 = pvVar16;
              for (; uVar12 != 0; uVar12 = uVar12 - 1) {
                (*param_3)(pvVar17,pvVar14,uVar18 >> 3,*(undefined8 *)(param_1 + 0x40),param_4);
                pvVar14 = (void *)((longlong)pvVar14 + uVar13);
                pvVar17 = (void *)((longlong)pvVar17 + lVar4);
              }
              local_68 = local_68 + 1;
              local_a8 = local_a8 + uVar8;
              bVar15 = *(byte *)((longlong)param_2 + 9);
              if (*(byte *)(param_1 + 0x31) < *(byte *)((longlong)param_2 + 9)) {
                bVar15 = *(byte *)(param_1 + 0x31);
              }
            } while (local_68 < bVar15);
            goto LAB_1432cbf6b;
          }
        }
        else {
          uVar18 = (uint)*(ushort *)(param_1 + 0x32);
          if ((uint)uVar12 < uVar18) {
            puVar10 = (ulonglong *)(*(longlong *)(param_1 + 0x38) + local_58);
            local_c0 = puVar10[1];
            local_b8 = puVar10[2];
            local_b0 = (void *)puVar10[3];
            local_c8 = *puVar10;
            iVar5 = (int)*puVar10;
            uVar18 = *(uint *)((longlong)puVar10 + 4);
          }
          else {
            uVar13 = uVar12 % (ulonglong)uVar18;
            FUN_1432c73f0(uVar13 * 0x20 + *(longlong *)(param_1 + 0x38),
                          *(undefined4 *)(param_1 + 0x28),uVar12 / uVar18,&local_c8,uVar13);
            iVar5 = (int)local_c8;
            uVar18 = local_c8._4_4_;
          }
          pvVar14 = local_b0;
          uVar13 = (ulonglong)uVar18;
          uVar9 = (uint)*(ushort *)((longlong)param_2 + 10);
          local_70 = local_c0;
          if ((uint)uVar12 < uVar9) {
            puVar11 = (undefined8 *)(*(longlong *)(param_2 + 4) + local_58);
            local_98 = puVar11[1];
            local_88 = (void *)puVar11[3];
            local_a0 = *puVar11;
            local_90 = puVar11[2];
          }
          else {
            uVar2 = uVar12 % (ulonglong)uVar9;
            FUN_1432c73f0(uVar2 * 0x20 + *(longlong *)(param_2 + 4),*param_2,uVar12 / uVar9,
                          &local_a0,uVar2);
          }
          pvVar17 = local_88;
          lVar4 = local_98;
          if ((0x31 < local_64) && ((local_64 < 0x36 || (local_64 - 0x3f < 3)))) {
            if ((local_60 & 0xf000) == 0xa000) {
              uVar13 = (ulonglong)(uVar18 + 0x1f >> 5);
            }
            else {
              uVar13 = (ulonglong)(uVar18 + 3 >> 2);
            }
          }
          iVar6 = FUN_1432c86e0(*(undefined4 *)(param_1 + 0x28));
          uVar12 = local_70;
          for (; uVar13 != 0; uVar13 = uVar13 - 1) {
            (*param_3)(pvVar17,pvVar14,(uint)(iVar6 * iVar5) >> 3,*(undefined8 *)(param_1 + 0x40),
                       param_4);
            pvVar14 = (void *)((longlong)pvVar14 + uVar12);
            pvVar17 = (void *)((longlong)pvVar17 + lVar4);
          }
LAB_1432cbf6b:
          uVar13 = (ulonglong)local_7c;
        }
        local_78 = local_78 + 1;
        uVar12 = (ulonglong)local_78;
        local_58 = local_58 + 0x20;
      } while (local_78 < local_5c);
    }
  }
  else {
    uVar13 = uVar12;
    if (uVar18 != 0) {
      do {
        uVar8 = (uint)*(ushort *)(param_1 + 0x32);
        uVar9 = (uint)uVar13;
        if (uVar9 < uVar8) {
          puVar10 = (ulonglong *)(*(longlong *)(param_1 + 0x38) + uVar12);
          local_b8 = puVar10[2];
          local_b0 = (void *)puVar10[3];
          local_c8 = *puVar10;
          local_c0 = puVar10[1];
        }
        else {
          uVar2 = uVar13 % (ulonglong)uVar8;
          FUN_1432c73f0(uVar2 * 0x20 + *(longlong *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x28)
                        ,uVar13 / uVar8,&local_c8,uVar2);
        }
        pvVar14 = local_b0;
        uVar2 = local_b8;
        uVar8 = (uint)*(ushort *)((longlong)param_2 + 10);
        if (uVar9 < uVar8) {
          puVar11 = (undefined8 *)(*(longlong *)(param_2 + 4) + uVar12);
          local_a0 = *puVar11;
          local_98 = puVar11[1];
          local_90 = puVar11[2];
          local_88 = (void *)puVar11[3];
        }
        else {
          uVar3 = uVar13 % (ulonglong)uVar8;
          FUN_1432c73f0(uVar3 * 0x20 + *(longlong *)(param_2 + 4),*param_2,uVar13 / uVar8,&local_a0,
                        uVar3);
        }
        _guard_xfg_dispatch_icall_nop(local_88,pvVar14,uVar2);
        uVar12 = uVar12 + 0x20;
        uVar13 = (ulonglong)(uVar9 + 1);
      } while (uVar9 + 1 < uVar18);
    }
  }
  return 1;
}



// FUNCTION 1432cbfc0 FUN_1432cbfc0 body=254 status=ok
// SIG undefined FUN_1432cbfc0(void)

longlong FUN_1432cbfc0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong *plVar5;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) && (*(int *)(*(longlong *)(param_1 + 0x10) + 0x40) == 5))
  {
    if (param_2[0xe] == 0) {
      (**(code **)(*param_2 + 0xf0))(param_2);
    }
    return param_2[0xe];
  }
  plVar5 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28);
    plVar2 = plVar5;
    if (lVar3 != 0) {
      plVar2 = *(longlong **)(lVar3 + 0x10);
    }
    if (plVar2 == param_2) {
      return *(longlong *)(param_1 + 0x10);
    }
  }
  if (param_2 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (*(ushort *)(param_1 + 0x32) != 0) {
      puVar1 = *(undefined4 **)(param_1 + 0x38);
      do {
        if (*(longlong *)(puVar1 + (longlong)plVar5 * 8 + 6) != 0) {
          local_resc = puVar1[1];
          local_res8 = *puVar1;
          lVar3 = (**(code **)(*param_2 + 0x10))
                            (param_2,*(undefined4 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x31)
                             ,&local_res8,*(uint *)(param_1 + 0x2c) & 0xffffff3f,param_1,0);
          *(longlong *)(param_1 + 0x10) = lVar3;
          return lVar3;
        }
        uVar4 = (int)plVar5 + 1;
        plVar5 = (longlong *)(ulonglong)uVar4;
      } while (uVar4 < *(ushort *)(param_1 + 0x32));
    }
  }
  return 0;
}



// FUNCTION 1432cc110 FUN_1432cc110 body=144 status=ok
// SIG undefined FUN_1432cc110(void)

undefined1 FUN_1432cc110(longlong param_1,Matrix2x4<float> *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x80))();
  if (cVar2 == '\0') {
    puVar1 = *(undefined4 **)(param_1 + 0x20);
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    *(undefined4 *)param_2 = *puVar1;
    *(undefined4 *)(param_2 + 4) = puVar1[1];
    *(undefined4 *)(param_2 + 8) = puVar1[2];
    *(undefined4 *)(param_2 + 0xc) = puVar1[3];
    *(undefined4 *)(param_2 + 0x10) = puVar1[4];
    *(undefined4 *)(param_2 + 0x14) = puVar1[5];
    *(undefined4 *)(param_2 + 0x18) = puVar1[6];
    *(undefined4 *)(param_2 + 0x1c) = puVar1[7];
  }
  if ((*(Matrix2x4<float> **)(param_1 + 0x20) != (Matrix2x4<float> *)0x0) && (cVar2 != '\0')) {
    Scaleform::Render::Matrix2x4<float>::Append(param_2,*(Matrix2x4<float> **)(param_1 + 0x20));
  }
  return 1;
}



// FUNCTION 1432cc1a0 FUN_1432cc1a0 body=143 status=ok
// SIG undefined FUN_1432cc1a0(void)

undefined8 * FUN_1432cc1a0(undefined8 *param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_144f70a80;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_145af8040;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  param_1[5] = param_2;
  uVar1 = param_3[3];
  uVar2 = param_3[2];
  uVar3 = param_3[1];
  *(undefined4 *)(param_1 + 6) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 7) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar1;
  return param_1;
}



// FUNCTION 1432cc230 FUN_1432cc230 body=151 status=ok
// SIG undefined FUN_1432cc230(void)

undefined8 *
FUN_1432cc230(undefined8 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
             RefCountImpl *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_144f70a80;
  param_1[2] = param_5;
  param_1[3] = param_6;
  param_1[4] = 0;
  if (param_5 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_5);
  }
  *(undefined4 *)(param_1 + 5) = param_2;
  *param_1 = &PTR_FUN_144f70b50;
  uVar1 = param_3[1];
  *(undefined4 *)((longlong)param_1 + 0x2c) = *param_3;
  *(undefined4 *)(param_1 + 6) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_4;
  return param_1;
}



// FUNCTION 1432cc2d0 FUN_1432cc2d0 body=114 status=ok
// SIG undefined FUN_1432cc2d0(void)

void FUN_1432cc2d0(RefCountImplCore *param_1)

{
  RefCountImpl *this;
  
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
  }
  *(undefined ***)param_1 = &PTR_FUN_144f70a80;
  this = (RefCountImpl *)Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync(param_1 + 0x10,0);
  if (this != (RefCountImpl *)0x0) {
    (**(code **)(*(longlong *)this + 0x40))(this);
    Scaleform::RefCountImpl::Release(this);
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1432cc350 FUN_1432cc350 body=70 status=ok
// SIG undefined FUN_1432cc350(void)

bool FUN_1432cc350(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((*(ushort *)(param_1 + 4) == *(ushort *)(param_2 + 4)) &&
     (*(char *)(param_1 + 6) == *(char *)(param_2 + 6))) {
    iVar2 = _guard_xfg_dispatch_icall_nop
                      ((void *)(param_1 + 8),(void *)(param_2 + 8),
                       (ulonglong)*(ushort *)(param_1 + 4) << 2);
    bVar1 = true;
    if (iVar2 == 0) goto LAB_1432cc38b;
  }
  bVar1 = false;
LAB_1432cc38b:
  return !bVar1;
}



// FUNCTION 1432cc3b0 FUN_1432cc3b0 body=43 status=ok
// SIG undefined FUN_1432cc3b0(void)

undefined8 * FUN_1432cc3b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af7d10;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1432cc3e0 FUN_1432cc3e0 body=107 status=ok
// SIG undefined FUN_1432cc3e0(void)

RefCountImplCore * FUN_1432cc3e0(RefCountImplCore *param_1,ulonglong param_2)

{
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1432cc450 FUN_1432cc450 body=43 status=ok
// SIG undefined FUN_1432cc450(void)

undefined8 * FUN_1432cc450(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af7d48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1432cc480 FUN_1432cc480 body=176 status=ok
// SIG undefined FUN_1432cc480(void)

RefCountImplCore * FUN_1432cc480(RefCountImplCore *param_1,uint param_2)

{
  RefCountImpl *this;
  
  *(undefined ***)param_1 = &PTR_FUN_144f70a80;
  this = (RefCountImpl *)Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync(param_1 + 0x10,0);
  if (this != (RefCountImpl *)0x0) {
    (**(code **)(*(longlong *)this + 0x40))(this);
    Scaleform::RefCountImpl::Release(this);
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1432cc530 FUN_1432cc530 body=89 status=ok
// SIG undefined FUN_1432cc530(void)

undefined8 FUN_1432cc530(undefined8 param_1,ulonglong param_2)

{
  FUN_1432cb4b0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1432cc590 FUN_1432cc590 body=89 status=ok
// SIG undefined FUN_1432cc590(void)

RefCountImplCore * FUN_1432cc590(RefCountImplCore *param_1,uint param_2)

{
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1432cc5f0 FUN_1432cc5f0 body=89 status=ok
// SIG undefined FUN_1432cc5f0(void)

undefined8 FUN_1432cc5f0(undefined8 param_1,ulonglong param_2)

{
  FUN_1432cc2d0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1432cc650 FUN_1432cc650 body=89 status=ok
// SIG undefined FUN_1432cc650(void)

undefined8 FUN_1432cc650(undefined8 param_1,ulonglong param_2)

{
  FUN_1432c9ed0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 1432cc6b0 FUN_1432cc6b0 body=129 status=ok
// SIG undefined FUN_1432cc6b0(void)

RefCountImplCore * FUN_1432cc6b0(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145af7d40;
  Scaleform::WaitCondition::~WaitCondition((WaitCondition *)(param_1 + 0x70));
  Scaleform::Mutex::~Mutex((Mutex *)(param_1 + 0x48));
  Scaleform::Lock::~Lock(param_1 + 0x18);
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1432cc740 FUN_1432cc740 body=41 status=ok
// SIG undefined FUN_1432cc740(void)

undefined4 FUN_1432cc740(longlong param_1)

{
  DWORD DVar1;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    DVar1 = GetCurrentThreadId();
    if (DVar1 != *(DWORD *)(param_1 + 0x48)) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1432cc770 FUN_1432cc770 body=169 status=ok
// SIG undefined FUN_1432cc770(void)

void FUN_1432cc770(uint *param_1,int param_2,int param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  uVar5 = *param_1 & 0xfff;
  if (uVar5 == 0) {
    iVar2 = 0;
  }
  else if (uVar5 == 0x42) {
    iVar2 = 2;
  }
  else if (uVar5 == 200) {
    iVar2 = 3;
  }
  else if (uVar5 == 0xc9) {
    iVar2 = 4;
  }
  else {
    iVar2 = 1;
  }
  uVar5 = iVar2 * param_2 + param_3;
  uVar3 = (uint)*(ushort *)((longlong)param_1 + 10);
  if (uVar5 < uVar3) {
    puVar4 = (undefined4 *)((ulonglong)uVar5 * 0x20 + *(longlong *)(param_1 + 4));
    *param_4 = *puVar4;
    param_4[1] = puVar4[1];
    *(undefined8 *)(param_4 + 2) = *(undefined8 *)(puVar4 + 2);
    *(undefined8 *)(param_4 + 4) = *(undefined8 *)(puVar4 + 4);
    *(undefined8 *)(param_4 + 6) = *(undefined8 *)(puVar4 + 6);
    return;
  }
  uVar1 = (ulonglong)uVar5 % (ulonglong)uVar3;
  FUN_1432c73f0(uVar1 * 0x20 + *(longlong *)(param_1 + 4),*param_1,
                (ulonglong)uVar5 / (ulonglong)uVar3,param_4,(int)uVar1);
  return;
}



// FUNCTION 1432cc860 FUN_1432cc860 body=135 status=ok
// SIG undefined FUN_1432cc860(void)

void FUN_1432cc860(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined4 *param_4,
                  int param_5,char param_6)

{
  FUN_1432c78c0();
  *(short *)((longlong)param_1 + 10) = (short)param_5;
  *param_1 = param_2;
  *(undefined1 *)((longlong)param_1 + 9) = param_3;
  *(undefined4 **)(param_1 + 4) = param_4;
  if (param_6 != '\0') {
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 1;
  }
  if ((param_4 != (undefined4 *)0x0) && (param_5 == 1)) {
    param_1[8] = *param_4;
    param_1[9] = param_4[1];
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_4 + 2);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_4 + 4);
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_4 + 6);
  }
  return;
}



// FUNCTION 1432cc8f0 FUN_1432cc8f0 body=232 status=ok
// SIG undefined FUN_1432cc8f0(void)

float * FUN_1432cc8f0(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *param_1 * 0.0;
  fVar2 = param_1[1] * 0.0;
  fVar1 = param_1[5] * 0.0;
  *param_1 = *param_1 * param_2 + fVar2;
  fVar3 = param_1[4] * 0.0;
  param_1[6] = 0.0;
  param_1[2] = 0.0;
  param_1[1] = param_1[1] * param_3 + fVar4;
  param_1[5] = param_1[5] * param_3 + fVar3;
  param_1[4] = param_1[4] * param_2 + fVar1;
  param_1[3] = fVar4 + fVar2 + param_1[3];
  param_1[7] = fVar3 + fVar1 + param_1[7];
  return param_1;
}



// FUNCTION 1432cc9e0 FUN_1432cc9e0 body=175 status=ok
// SIG undefined FUN_1432cc9e0(void)

void FUN_1432cc9e0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    uVar2 = 4;
    if (3 < param_3) {
      uVar2 = param_3;
    }
    if (uVar2 == 0) {
      uVar2 = 0;
      if (*param_1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = uVar2 + 3 & 0xfffffffffffffffc;
      if (*param_1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))();
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 0x48;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 8,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1432cca90 SetInverse body=252 status=ok
// SIG void SetInverse(Matrix2x4<float> * this, Matrix2x4<float> * param_1)

/* public: void __cdecl Scaleform::Render::Matrix2x4<float>::SetInverse(class
   Scaleform::Render::Matrix2x4<float> const & __ptr64) __ptr64 */

void __thiscall
Scaleform::Render::Matrix2x4<float>::SetInverse(Matrix2x4<float> *this,Matrix2x4<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
                    /* 0x32cca90  416  ?SetInverse@?$Matrix2x4@M@Render@Scaleform@@QEAAXAEBV123@@Z
                        */
  fVar4 = *(float *)(param_1 + 0x14) * *(float *)param_1 -
          *(float *)(param_1 + 4) * *(float *)(param_1 + 0x10);
  if (fVar4 != 0.0) {
    fVar4 = 1.0 / fVar4;
    fVar5 = *(float *)(param_1 + 0x14) * fVar4;
    *(float *)this = fVar5;
    fVar1 = *(float *)param_1;
    *(float *)(this + 0x14) = fVar4 * fVar1;
    fVar2 = *(float *)(param_1 + 4);
    *(float *)(this + 4) = -(fVar4 * fVar2);
    fVar3 = *(float *)(param_1 + 0x10);
    *(float *)(this + 0x10) = -(fVar4 * fVar3);
    *(float *)(this + 0xc) =
         -(*(float *)(param_1 + 0xc) * fVar5 + *(float *)(param_1 + 0x1c) * -(fVar4 * fVar2));
    *(float *)(this + 0x1c) =
         -(*(float *)(param_1 + 0x1c) * fVar4 * fVar1 + *(float *)(param_1 + 0xc) * -(fVar4 * fVar3)
          );
    return;
  }
  *(undefined8 *)this = 0x3f800000;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x14) = 0x3f800000;
  *(uint *)(this + 0xc) = *(uint *)(param_1 + 0xc) ^ 0x80000000;
  *(uint *)(this + 0x1c) = *(uint *)(param_1 + 0x1c) ^ 0x80000000;
  return;
}



// FUNCTION 1432ccb90 FUN_1432ccb90 body=125 status=ok
// SIG undefined FUN_1432ccb90(void)

undefined8 * FUN_1432ccb90(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0xffffffffffffffff;
  param_1[3] = 0xffffffffffffffff;
  *param_1 = &PTR_FUN_145af8118;
  if (*(RefCountImpl **)(param_3 + 0x48) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_3 + 0x48));
  }
  param_1[4] = *(undefined8 *)(param_3 + 0x48);
  param_1[6] = param_2;
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



// FUNCTION 1432ccc20 FUN_1432ccc20 body=141 status=ok
// SIG undefined FUN_1432ccc20(void)

void FUN_1432ccc20(RefCountImplCore *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  *(undefined ***)param_1 = &PTR_FUN_145af8118;
  Scaleform::Lock::DoLock(lVar1 + 0x10);
  if ((*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x40) != 0) &&
     (*(longlong *)(param_1 + 0x30) != 0)) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0x20) = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
  }
  Scaleform::Lock::DoLock(lVar1 + 0x10);
  if (*(RefCountImpl **)(param_1 + 0x20) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x20));
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1432cccc0 FUN_1432cccc0 body=206 status=ok
// SIG undefined FUN_1432cccc0(void)

longlong * FUN_1432cccc0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 0;
  *param_1 = 0;
  if (param_2 != 0) {
    lVar1 = **(longlong **)((param_2 & 0xfffffffffffff000) + 0x18);
    lVar2 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x38,0);
    if (lVar2 != 0) {
      lVar3 = FUN_1432ccb90(lVar2,param_2,lVar1);
    }
    if ((RefCountImpl *)*param_1 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)*param_1);
    }
    *param_1 = lVar3;
    lVar3 = *(longlong *)(lVar1 + 0x48);
    Scaleform::Lock::DoLock(lVar3 + 0x10);
    *(undefined1 *)(param_2 + 0x20) = 1;
    lVar2 = *param_1;
    *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar1 + 0x98);
    *(longlong *)(lVar2 + 0x18) = lVar1 + 0x88;
    *(longlong *)(*(longlong *)(lVar1 + 0x98) + 0x18) = lVar2;
    *(longlong *)(lVar1 + 0x98) = lVar2;
    Scaleform::Lock::DoLock(lVar3 + 0x10);
  }
  return param_1;
}



// FUNCTION 1432ccda0 FUN_1432ccda0 body=13 status=ok
// SIG undefined FUN_1432ccda0(void)

void FUN_1432ccda0(undefined8 *param_1)

{
  int iVar1;
  
  param_1 = (undefined8 *)*param_1;
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  iVar1 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(param_1 + 1,0xffffffff);
  if ((iVar1 == 1) && (param_1 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001432be08f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1432ccdc0 FUN_1432ccdc0 body=267 status=ok
// SIG undefined FUN_1432ccdc0(void)

ulonglong FUN_1432ccdc0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  longlong lVar6;
  longlong local_res8;
  
  if (*param_1 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  lVar6 = *(longlong *)(*param_1 + 0x20) + 0x10;
  Scaleform::Lock::DoLock(lVar6);
  lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x20) + 0x40);
  if ((lVar2 == 0) || (*(int *)(*param_1 + 0x28) == 2)) {
    uVar5 = Scaleform::Lock::DoLock(lVar6);
  }
  else {
    local_res8 = 0;
    while( true ) {
      cVar4 = FUN_1432cecc0(lVar2,&local_res8,param_2,param_3);
      lVar3 = *param_1;
      if (cVar4 == '\0') break;
      if (*(int *)(lVar3 + 0x28) == 0) {
        *(undefined4 *)(lVar3 + 0x28) = 1;
      }
      iVar1 = *(int *)(*param_1 + 0x28);
      Scaleform::Lock::DoLock(lVar6);
      if (local_res8 == 0) {
        return (ulonglong)(iVar1 == 1);
      }
      FUN_1432cef60(lVar2,local_res8,param_2);
      Scaleform::Lock::DoLock(lVar6);
    }
    *(undefined8 *)(*(longlong *)(lVar3 + 0x20) + 0x40) = 0;
    uVar5 = Scaleform::Lock::DoLock(lVar6);
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 1432ccee0 GetRenderEntry body=22 status=ok
// SIG undefined GetRenderEntry(void)

undefined8 Scaleform::Render::ContextImpl::RTHandle::GetRenderEntry(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x28) == 1)) {
    return *(undefined8 *)(lVar1 + 0x30);
  }
  return 0;
}



// FUNCTION 1432ccf00 FUN_1432ccf00 body=222 status=ok
// SIG undefined FUN_1432ccf00(void)

void FUN_1432ccf00(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1 & 0xfffffffffffff000;
  lVar2 = *(longlong *)(uVar3 + 0x18);
  (**(code **)(**(longlong **)
                 (*(longlong *)(uVar3 + 0x20) + 0x28 +
                 ((longlong)((longlong)param_1 + (-0x30 - uVar3)) / 0x48 & 0xffffffffU) * 8) + 0x10)
  )();
  if (param_1[7] != 0) {
    *(longlong *)(param_1[7] + 8) = param_1[8];
    *(longlong *)param_1[8] = param_1[7];
    param_1[7] = -1;
    param_1[8] = -1;
    param_1[8] = 0;
    param_1[7] = 0;
  }
  if ((undefined8 *)param_1[2] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[2] = 0;
  }
  plVar1 = (longlong *)(lVar2 + 0x38);
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    *(longlong *)(*param_1 + 8) = param_1[1];
    *(longlong *)param_1[1] = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
  }
  *param_1 = *plVar1;
  param_1[1] = (longlong)plVar1;
  *(longlong **)(*plVar1 + 8) = param_1;
  *plVar1 = (longlong)param_1;
  return;
}



// FUNCTION 1432ccff0 FUN_1432ccff0 body=40 status=ok
// SIG undefined FUN_1432ccff0(void)

void FUN_1432ccff0(ulonglong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)(param_1 + 0x38);
  plVar2 = (longlong *)(*(longlong *)((param_1 & 0xfffffffffffff000) + 0x18) + 0x28);
  *plVar1 = *plVar2;
  *(longlong **)(param_1 + 0x40) = plVar2;
  *(longlong **)(*plVar2 + 8) = plVar1;
  *plVar2 = (longlong)plVar1;
  return;
}



// FUNCTION 1432cd080 FUN_1432cd080 body=296 status=ok
// SIG undefined FUN_1432cd080(void)

longlong * FUN_1432cd080(ulonglong param_1,uint param_2)

{
  uint *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar9 = param_1 & 0xfffffffffffff000;
  uVar8 = (longlong)((param_1 - uVar9) + -0x30) / 0x48 & 0xffffffff;
  plVar2 = *(longlong **)(*(longlong *)(uVar9 + 0x20) + 0x28 + uVar8 * 8);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    puVar3 = *(undefined8 **)(uVar9 + 0x18);
    plVar5 = (longlong *)(**(code **)(*plVar2 + 8))(plVar2,*(undefined8 *)*puVar3);
    *(longlong **)(*(longlong *)(uVar9 + 0x20) + 0x28 + uVar8 * 8) = plVar5;
    FUN_1432d0010(puVar3 + 3,1);
    lVar4 = puVar3[4];
    plVar7 = (longlong *)(lVar4 + 0x10 + (ulonglong)*(uint *)(lVar4 + 8) * 0x20);
    *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) + 1;
    plVar7[1] = (longlong)puVar3;
    *plVar7 = uVar9 + uVar8 * 0x48 + 0x30;
    lVar4 = *(longlong *)(*(longlong *)(uVar9 + 0x20) + 0x18);
    lVar6 = 0;
    if (lVar4 != 0) {
      lVar6 = *(longlong *)(lVar4 + 0x28 + uVar8 * 8);
    }
    plVar7[2] = lVar6;
    *(uint *)(plVar7 + 3) = param_2;
    *(longlong **)(param_1 + 0x10) = plVar7;
    if (plVar7[2] == 0) {
      plVar7[2] = (longlong)plVar2;
    }
    return plVar5;
  }
  puVar1 = (uint *)(*(longlong *)(param_1 + 0x10) + 0x18);
  *puVar1 = *puVar1 | param_2;
  return plVar2;
}



// FUNCTION 1432cd1e0 FUN_1432cd1e0 body=56 status=ok
// SIG undefined FUN_1432cd1e0(void)

undefined8 FUN_1432cd1e0(ulonglong param_1)

{
  return *(undefined8 *)
          (*(longlong *)((param_1 & 0xfffffffffffff000) + 0x20) + 0x28 +
          ((longlong)((param_1 - (param_1 & 0xfffffffffffff000)) + -0x30) / 0x48 & 0xffffffffU) * 8)
  ;
}



// FUNCTION 1432cd220 FUN_1432cd220 body=56 status=ok
// SIG undefined FUN_1432cd220(void)

undefined8 FUN_1432cd220(ulonglong param_1)

{
  return *(undefined8 *)
          (*(longlong *)((param_1 & 0xfffffffffffff000) + 0x28) + 0x28 +
          ((longlong)((param_1 - (param_1 & 0xfffffffffffff000)) + -0x30) / 0x48 & 0xffffffffU) * 8)
  ;
}



// FUNCTION 1432cd260 FUN_1432cd260 body=15 status=ok
// SIG undefined FUN_1432cd260(void)

undefined8 FUN_1432cd260(ulonglong param_1)

{
  return **(undefined8 **)((param_1 & 0xfffffffffffff000) + 0x18);
}



// FUNCTION 1432cd280 FUN_1432cd280 body=11 status=ok
// SIG undefined FUN_1432cd280(void)

void FUN_1432cd280(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145af8120;
  return;
}



// FUNCTION 1432cd2a0 FUN_1432cd2a0 body=38 status=ok
// SIG undefined FUN_1432cd2a0(void)

void FUN_1432cd2a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145af8148;
  FUN_1432cd3e0();
  Scaleform::RefCountImplCore::~RefCountImplCore((RefCountImplCore *)(param_1 + 1));
  return;
}



// FUNCTION 1432cd350 FUN_1432cd350 body=127 status=ok
// SIG undefined FUN_1432cd350(void)

void FUN_1432cd350(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  DWORD DVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  while (lVar2 = lVar1, lVar2 != param_1 + 0x20) {
    lVar1 = *(longlong *)(lVar2 + 8);
    if (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x78) != 0) {
      lVar2 = *(longlong *)(lVar2 + 0x10);
      lVar3 = *(longlong *)(lVar2 + 0x48);
      Scaleform::Lock::DoLock(lVar3 + 0x10);
      DVar4 = GetCurrentThreadId();
      if (*(DWORD *)(lVar2 + 8) != DVar4) {
        *(undefined1 *)(lVar2 + 0x70) = 1;
      }
      FUN_1432cf140(lVar2);
      Scaleform::Lock::DoLock(lVar3 + 0x10);
    }
  }
  return;
}



// FUNCTION 1432cd3e0 FUN_1432cd3e0 body=127 status=ok
// SIG undefined FUN_1432cd3e0(void)

void FUN_1432cd3e0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  DWORD DVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  while (lVar1 != param_1 + 0x20) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10);
    lVar2 = *(longlong *)(lVar1 + 0x48);
    Scaleform::Lock::DoLock(lVar2 + 0x10);
    DVar3 = GetCurrentThreadId();
    if (*(DWORD *)(lVar1 + 8) != DVar3) {
      *(undefined1 *)(lVar1 + 0x70) = 1;
    }
    FUN_1432cf140(lVar1);
    Scaleform::Lock::DoLock(lVar2 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 1432cd470 FUN_1432cd470 body=3 status=ok
// SIG undefined FUN_1432cd470(void)

void FUN_1432cd470(void)

{
  return;
}



// FUNCTION 1432cd480 FUN_1432cd480 body=15 status=ok
// SIG undefined FUN_1432cd480(void)

void FUN_1432cd480(RefCountImplCore *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_145af8188;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1432cd4a0 FUN_1432cd4a0 body=101 status=ok
// SIG undefined FUN_1432cd4a0(void)

undefined8 * FUN_1432cd4a0(longlong *param_1,undefined8 param_2)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)(**(code **)(*param_1 + 0x48))(param_1,0x1e8,0x10);
  if (_Dst == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  _guard_xfg_dispatch_icall_nop(_Dst,0,0x1e8);
  _Dst[2] = param_2;
  *_Dst = 0;
  _Dst[1] = 0;
  _Dst[3] = 0;
  _Dst[4] = 0;
  return _Dst;
}



// FUNCTION 1432cd510 FUN_1432cd510 body=206 status=ok
// SIG undefined FUN_1432cd510(void)

undefined8 * FUN_1432cd510(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x48))(param_1,0x1e8,0x10);
  if (puVar4 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  lVar7 = 3;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = *(undefined8 *)(param_2 + 0x10);
  puVar4[4] = 0;
  puVar4[3] = param_2;
  puVar2 = (undefined8 *)(param_2 + 0x28);
  puVar3 = puVar4 + 5;
  do {
    puVar6 = puVar3;
    puVar5 = puVar2;
    uVar1 = puVar5[1];
    *puVar6 = *puVar5;
    puVar6[1] = uVar1;
    uVar1 = puVar5[3];
    puVar6[2] = puVar5[2];
    puVar6[3] = uVar1;
    uVar1 = puVar5[5];
    puVar6[4] = puVar5[4];
    puVar6[5] = uVar1;
    uVar1 = puVar5[7];
    puVar6[6] = puVar5[6];
    puVar6[7] = uVar1;
    uVar1 = puVar5[9];
    puVar6[8] = puVar5[8];
    puVar6[9] = uVar1;
    uVar1 = puVar5[0xb];
    puVar6[10] = puVar5[10];
    puVar6[0xb] = uVar1;
    uVar1 = puVar5[0xd];
    puVar6[0xc] = puVar5[0xc];
    puVar6[0xd] = uVar1;
    uVar1 = puVar5[0xf];
    puVar6[0xe] = puVar5[0xe];
    puVar6[0xf] = uVar1;
    lVar7 = lVar7 + -1;
    puVar2 = puVar5 + 0x10;
    puVar3 = puVar6 + 0x10;
  } while (lVar7 != 0);
  uVar1 = puVar5[0x11];
  puVar6[0x10] = puVar5[0x10];
  puVar6[0x11] = uVar1;
  uVar1 = puVar5[0x13];
  puVar6[0x12] = puVar5[0x12];
  puVar6[0x13] = uVar1;
  uVar1 = puVar5[0x15];
  puVar6[0x14] = puVar5[0x14];
  puVar6[0x15] = uVar1;
  uVar1 = puVar5[0x17];
  puVar6[0x16] = puVar5[0x16];
  puVar6[0x17] = uVar1;
  *(undefined8 **)(param_2 + 0x20) = puVar4;
  return puVar4;
}



// FUNCTION 1432cd670 FUN_1432cd670 body=173 status=ok
// SIG undefined FUN_1432cd670(void)

longlong * FUN_1432cd670(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  ulonglong uVar3;
  
  if (*(longlong *)(param_1 + 0x28) == param_1 + 0x20) {
    cVar2 = FUN_1432cd9c0();
    if (cVar2 == '\0') {
      return (longlong *)0x0;
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) && (plVar1[1] != 0)) {
    *(longlong *)(*plVar1 + 8) = plVar1[1];
    *(longlong *)plVar1[1] = *plVar1;
    *plVar1 = 0;
    plVar1[1] = 0;
  }
  uVar3 = (ulonglong)plVar1 & 0xfffffffffffff000;
  *(int *)(uVar3 + 0x10) = *(int *)(uVar3 + 0x10) + 1;
  *(undefined8 *)
   (*(longlong *)(uVar3 + 0x20) + 0x28 +
   ((longlong)((longlong)plVar1 + (-0x30 - uVar3)) / 0x48 & 0xffffffffU) * 8) = param_2;
  return plVar1;
}



// FUNCTION 1432cd730 FUN_1432cd730 body=244 status=ok
// SIG undefined FUN_1432cd730(void)

void FUN_1432cd730(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if (param_2 != (longlong *)0x0) {
    if ((*param_2 != 0) && (param_2[1] != 0)) {
      *(longlong *)(*param_2 + 8) = param_2[1];
      *(longlong *)param_2[1] = *param_2;
      *param_2 = 0;
      param_2[1] = 0;
    }
    param_2[1] = *(longlong *)(param_1 + 0x28);
    *param_2 = param_1 + 0x20;
    **(undefined8 **)(param_1 + 0x28) = param_2;
    *(longlong **)(param_1 + 0x28) = param_2;
  }
  uVar4 = (ulonglong)param_2 & 0xfffffffffffff000;
  lVar2 = ((longlong)((longlong)param_2 + (-0x30 - uVar4)) / 0x48 & 0xffffffffU) * 8 + 0x28;
  plVar3 = *(longlong **)(lVar2 + *(longlong *)(uVar4 + 0x20));
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,plVar3);
    *(undefined8 *)(lVar2 + *(longlong *)(uVar4 + 0x20)) = 0;
  }
  piVar1 = (int *)(uVar4 + 0x10);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_1432cda80(param_1,uVar4);
  }
  return;
}



// FUNCTION 1432cd870 FUN_1432cd870 body=328 status=ok
// SIG undefined FUN_1432cd870(void)

void FUN_1432cd870(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  
  lVar11 = *(longlong *)(param_1 + 0x18);
  if (lVar11 == param_1 + 0x10) {
    *(undefined8 *)(param_1 + 0x30) = param_2;
    return;
  }
  do {
    lVar1 = *(longlong *)(lVar11 + 0x20);
    puVar7 = (undefined8 *)
             (**(code **)(**(longlong **)(param_1 + 8) + 0x48))
                       (*(longlong **)(param_1 + 8),0x1e8,0x10);
    puVar10 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0;
      lVar12 = 3;
      puVar7[2] = *(undefined8 *)(lVar1 + 0x10);
      puVar7[3] = lVar1;
      puVar7[4] = 0;
      puVar10 = (undefined8 *)(lVar1 + 0x28);
      puVar6 = puVar7 + 5;
      do {
        puVar9 = puVar6;
        puVar8 = puVar10;
        uVar5 = puVar8[1];
        *puVar9 = *puVar8;
        puVar9[1] = uVar5;
        uVar5 = puVar8[3];
        puVar9[2] = puVar8[2];
        puVar9[3] = uVar5;
        uVar5 = puVar8[5];
        puVar9[4] = puVar8[4];
        puVar9[5] = uVar5;
        uVar5 = puVar8[7];
        puVar9[6] = puVar8[6];
        puVar9[7] = uVar5;
        uVar5 = puVar8[9];
        puVar9[8] = puVar8[8];
        puVar9[9] = uVar5;
        uVar5 = puVar8[0xb];
        puVar9[10] = puVar8[10];
        puVar9[0xb] = uVar5;
        uVar5 = puVar8[0xd];
        puVar9[0xc] = puVar8[0xc];
        puVar9[0xd] = uVar5;
        uVar5 = puVar8[0xf];
        puVar9[0xe] = puVar8[0xe];
        puVar9[0xf] = uVar5;
        lVar12 = lVar12 + -1;
        puVar10 = puVar8 + 0x10;
        puVar6 = puVar9 + 0x10;
      } while (lVar12 != 0);
      uVar5 = puVar8[0x11];
      puVar9[0x10] = puVar8[0x10];
      puVar9[0x11] = uVar5;
      uVar5 = puVar8[0x13];
      puVar9[0x12] = puVar8[0x12];
      puVar9[0x13] = uVar5;
      uVar2 = *(undefined4 *)((longlong)puVar8 + 0xa4);
      uVar3 = *(undefined4 *)(puVar8 + 0x15);
      uVar4 = *(undefined4 *)((longlong)puVar8 + 0xac);
      *(undefined4 *)(puVar9 + 0x14) = *(undefined4 *)(puVar8 + 0x14);
      *(undefined4 *)((longlong)puVar9 + 0xa4) = uVar2;
      *(undefined4 *)(puVar9 + 0x15) = uVar3;
      *(undefined4 *)((longlong)puVar9 + 0xac) = uVar4;
      uVar5 = puVar8[0x17];
      puVar9[0x16] = puVar8[0x16];
      puVar9[0x17] = uVar5;
      *(undefined8 **)(lVar1 + 0x20) = puVar7;
      puVar10 = puVar7;
    }
    *(undefined8 **)(lVar11 + 0x20) = puVar10;
    *(undefined8 *)(lVar11 + 0x18) = param_2;
    lVar11 = *(longlong *)(lVar11 + 8);
  } while (lVar11 != param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}



// FUNCTION 1432cd9c0 FUN_1432cd9c0 body=176 status=ok
// SIG undefined FUN_1432cd9c0(void)

ulonglong FUN_1432cd9c0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *_Dst;
  longlong lVar3;
  ulonglong uVar4;
  
  _Dst = (undefined8 *)
         (**(code **)(**(longlong **)(param_1 + 8) + 0x48))
                   (*(longlong **)(param_1 + 8),0xff8,0x1000,0);
  uVar4 = 0;
  if (_Dst != (undefined8 *)0x0) {
    _guard_xfg_dispatch_icall_nop(_Dst,0,0xff8);
    lVar3 = FUN_1432cd4a0(*(undefined8 *)(param_1 + 8),_Dst);
    _Dst[4] = lVar3;
    if (lVar3 != 0) {
      _Dst[5] = 0;
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      *(undefined4 *)(_Dst + 2) = 0;
      _Dst[3] = uVar2;
      FUN_1432cfb40(_Dst,param_1 + 0x20);
      plVar1 = (longlong *)(param_1 + 0x10);
      *_Dst = *(undefined8 *)(param_1 + 0x10);
      _Dst[1] = plVar1;
      lVar3 = *plVar1;
      *(undefined8 **)(lVar3 + 8) = _Dst;
      *plVar1 = (longlong)_Dst;
      return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
    }
    uVar4 = (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,_Dst);
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 1432cda80 FUN_1432cda80 body=305 status=ok
// SIG undefined FUN_1432cda80(void)

void FUN_1432cda80(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(*param_1 + 0x48);
  Scaleform::Lock::DoLock(lVar1 + 0x10);
  lVar4 = 0x38;
  *(longlong *)(*param_2 + 8) = param_2[1];
  *(longlong *)param_2[1] = *param_2;
  plVar3 = param_2 + 6;
  *param_2 = -1;
  param_2[1] = -1;
  do {
    if (((plVar3 != (longlong *)0x0) && (*plVar3 != 0)) && (plVar3[1] != 0)) {
      *(longlong *)(*plVar3 + 8) = plVar3[1];
      *(longlong *)plVar3[1] = *plVar3;
      *plVar3 = 0;
      plVar3[1] = 0;
    }
    plVar3 = plVar3 + 9;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  lVar4 = param_2[4];
  for (lVar2 = *(longlong *)(param_2[4] + 0x20); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x20)) {
    lVar4 = lVar2;
  }
  do {
    *(undefined8 *)(lVar4 + 0x10) = 0;
    lVar4 = *(longlong *)(lVar4 + 0x18);
  } while (lVar4 != 0);
  plVar3 = (longlong *)param_2[4];
  if (plVar3[1] != 0) {
    *(longlong *)(*plVar3 + 8) = plVar3[1];
    *(longlong *)plVar3[1] = *plVar3;
    *plVar3 = -1;
    plVar3[1] = -1;
  }
  lVar4 = param_2[4];
  if (*(longlong *)(lVar4 + 0x20) != 0) {
    *(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0x18) = *(undefined8 *)(lVar4 + 0x18);
  }
  if (*(longlong *)(lVar4 + 0x18) != 0) {
    *(undefined8 *)(*(longlong *)(lVar4 + 0x18) + 0x20) = *(undefined8 *)(lVar4 + 0x20);
  }
  (**(code **)(*DAT_146b62f28 + 0x60))();
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_2);
  Scaleform::Lock::DoLock(lVar1 + 0x10);
  return;
}



// FUNCTION 1432cdbc0 FUN_1432cdbc0 body=607 status=ok
// SIG undefined FUN_1432cdbc0(void)

undefined8 * FUN_1432cdbc0(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined **local_28;
  undefined8 *local_20;
  DWORD local_18;
  
  *param_1 = param_2;
  puVar5 = param_1 + 4;
  param_1[2] = param_1;
  param_1[3] = param_2;
  puVar7 = (undefined8 *)0x0;
  *puVar5 = puVar5;
  param_1[5] = puVar5;
  puVar5 = param_1 + 6;
  *puVar5 = puVar5;
  param_1[7] = puVar5;
  param_1[8] = 0;
  plVar1 = param_1 + 0x15;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)((longlong)param_1 + 0x71) = 0;
  *(undefined1 *)((longlong)param_1 + 0x72) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0xffffffffffffffff;
  param_1[0x11] = 0xffffffffffffffff;
  param_1[0x12] = param_1;
  param_1[0x13] = param_1 + 0x11;
  param_1[0x14] = param_1 + 0x11;
  lVar6 = 4;
  plVar3 = plVar1;
  do {
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar3 = plVar3 + 3;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  param_1[0x21] = 1;
  param_1[0x22] = 0;
  puVar4 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x48);
  puVar5 = puVar7;
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = 0;
    *puVar4 = &PTR_FUN_144f70a50;
    *puVar4 = &PTR_FUN_145af8110;
    *(undefined4 *)(puVar4 + 1) = 1;
    FUN_1432bdc50(puVar4 + 2,0);
    puVar4[8] = param_1;
    puVar5 = puVar4;
  }
  if ((RefCountImpl *)param_1[9] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[9]);
  }
  param_1[9] = puVar5;
  local_18 = GetCurrentThreadId();
  *(DWORD *)(param_1 + 1) = local_18;
  local_28 = &PTR_FUN_145af8210;
  *(DWORD *)((longlong)param_1 + 0xc) = local_18;
  local_20 = param_1 + 10;
  FUN_1432cff10(&local_28);
  *(undefined1 *)(param_1 + 0xe) = 0;
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)*param_1 + 0x50))((longlong *)*param_1,0x80,0);
  if (puVar5 != (undefined8 *)0x0) {
    lVar6 = param_1[0x21];
    uVar2 = *param_1;
    param_1[0x21] = lVar6 + 1;
    puVar7 = puVar5 + 1;
    *puVar5 = param_1;
    *puVar7 = puVar7;
    puVar5[2] = puVar7;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar7 = puVar5 + 5;
    *puVar7 = puVar7;
    puVar5[6] = puVar7;
    puVar7 = puVar5 + 7;
    *puVar7 = puVar7;
    puVar5[8] = puVar7;
    puVar5[9] = lVar6;
    *(undefined1 *)(puVar5 + 10) = 0;
    puVar5[0xb] = uVar2;
    puVar5[0xc] = 0x2000;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    puVar7 = puVar5;
  }
  uVar8 = param_1[0x16] + 1;
  if (uVar8 < (ulonglong)param_1[0x16]) {
    uVar9 = uVar8;
    if ((ulonglong)param_1[0x17] >> 1 <= uVar8) goto LAB_1432cdde0;
  }
  else {
    if (uVar8 <= (ulonglong)param_1[0x17]) goto LAB_1432cdde0;
    uVar9 = (uVar8 >> 2) + uVar8;
  }
  FUN_1432cfc80(plVar1,plVar1,uVar9);
LAB_1432cdde0:
  param_1[0x16] = uVar8;
  puVar5 = (undefined8 *)(*plVar1 + -8 + uVar8 * 8);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = puVar7;
  }
  param_1[8] = *(undefined8 *)*plVar1;
  return param_1;
}



// FUNCTION 1432cde30 FUN_1432cde30 body=349 status=ok
// SIG undefined FUN_1432cde30(void)

void FUN_1432cde30(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  FUN_1432ce2c0(param_1,1);
  FUN_1432cf400(param_1,param_1 + 0xf0);
  FUN_1432cf400(param_1,param_1 + 0xd8);
  FUN_1432cf400(param_1,param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    plVar2 = (longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0xa8) + -8 + *(longlong *)(param_1 + 0xb0) * 8)
             + 8);
    for (lVar3 = *(longlong *)(param_1 + 0x28); lVar3 != param_1 + 0x20;
        lVar3 = *(longlong *)(lVar3 + 8)) {
      plVar1 = *(longlong **)(lVar3 + 0x20);
      *plVar1 = *plVar2;
      plVar1[1] = (longlong)plVar2;
      *(longlong **)(*plVar2 + 8) = plVar1;
      *plVar2 = (longlong)plVar1;
    }
  }
  FUN_1432cf400(param_1,param_1 + 0xa8);
  lVar3 = *(longlong *)(param_1 + 0x48);
  Scaleform::Lock::DoLock(lVar3 + 0x10);
  FUN_1432cfe60(param_1 + 0x50,param_1 + 0x50,0);
  Scaleform::Lock::DoLock(lVar3 + 0x10);
  lVar3 = 4;
  puVar4 = (undefined8 *)(param_1 + 0x108);
  do {
    puVar4 = puVar4 + -3;
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*puVar4);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  lVar3 = *(longlong *)(param_1 + 0x58);
  puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x50) + (lVar3 + -1) * 8);
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    if ((RefCountImpl *)*puVar4 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar4);
    }
    puVar4 = puVar4 + -1;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x50));
  if (*(RefCountImpl **)(param_1 + 0x48) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x48));
  }
  return;
}



// FUNCTION 1432cdfa0 FUN_1432cdfa0 body=49 status=ok
// SIG undefined FUN_1432cdfa0(void)

ulonglong FUN_1432cdfa0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0x71) == '\0') {
    lVar1 = **(longlong **)(param_1 + 0xa8);
    uVar2 = *(ulonglong *)(lVar1 + 0x18);
    if (((uVar2 == 0) || (*(int *)(uVar2 + 8) == 0)) &&
       (uVar2 = lVar1 + 0x38, *(ulonglong *)(lVar1 + 0x40) == uVar2)) {
      return uVar2 & 0xffffffffffffff00;
    }
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}



// FUNCTION 1432cdfe0 FUN_1432cdfe0 body=715 status=ok
// SIG undefined FUN_1432cdfe0(void)

undefined8 FUN_1432cdfe0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined **local_28;
  undefined8 *local_20;
  
  if (*(char *)((longlong)param_1 + 0x72) != '\0') {
    return 0xffffffffffffffff;
  }
  lVar3 = param_1[9];
  Scaleform::Lock::DoLock(lVar3 + 0x10);
  FUN_1432ce4b0(param_1);
  FUN_1432cf090(param_1);
  plVar2 = param_1 + 0x15;
  lVar4 = *(longlong *)(*plVar2 + -8 + param_1[0x16] * 8);
  FUN_1432cfde0(plVar2,param_1[0x16] + -1);
  plVar1 = (longlong *)(lVar4 + 8);
  for (puVar9 = (undefined8 *)param_1[5]; puVar9 != param_1 + 4; puVar9 = (undefined8 *)puVar9[1]) {
    plVar5 = (longlong *)puVar9[4];
    *plVar5 = *plVar1;
    plVar5[1] = (longlong)plVar1;
    *(longlong **)(*plVar1 + 8) = plVar5;
    *plVar1 = (longlong)plVar5;
  }
  plVar1 = param_1 + 0x18;
  uVar11 = param_1[0x19] + 1;
  if (uVar11 < (ulonglong)param_1[0x19]) {
    uVar12 = uVar11;
    if (uVar11 < (ulonglong)param_1[0x1a] >> 1) {
LAB_1432ce0c6:
      FUN_1432cfc80(plVar1,plVar1,uVar12);
    }
  }
  else if ((ulonglong)param_1[0x1a] < uVar11) {
    uVar12 = (uVar11 >> 2) + uVar11;
    goto LAB_1432ce0c6;
  }
  param_1[0x19] = uVar11;
  plVar5 = (longlong *)(*plVar1 + -8 + uVar11 * 8);
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = lVar4;
  }
  if ((ulonglong)param_1[0x1d] < (ulonglong)param_1[0x19]) {
    FUN_1432cfc80(param_1 + 0x1b,param_1 + 0x1b);
  }
  if ((ulonglong)param_1[0x20] < (ulonglong)param_1[0x19]) {
    FUN_1432cfc80(param_1 + 0x1e,param_1 + 0x1e);
  }
  puVar10 = (undefined8 *)0x0;
  for (puVar9 = *(undefined8 **)(lVar4 + 0x18); puVar9 != (undefined8 *)0x0;
      puVar9 = (undefined8 *)*puVar9) {
    puVar8 = puVar10;
    if (*(int *)(puVar9 + 1) != 0) {
      do {
        if (puVar9[(longlong)puVar8 * 4 + 2] != 0) {
          *(undefined8 *)(puVar9[(longlong)puVar8 * 4 + 2] + 0x10) = 0;
        }
        uVar7 = (int)puVar8 + 1;
        puVar8 = (undefined8 *)(ulonglong)uVar7;
      } while (uVar7 < *(uint *)(puVar9 + 1));
    }
  }
  puVar9 = (undefined8 *)(**(code **)(*(longlong *)*param_1 + 0x50))((longlong *)*param_1,0x80,0);
  if (puVar9 != (undefined8 *)0x0) {
    lVar4 = param_1[0x21];
    uVar6 = *param_1;
    param_1[0x21] = lVar4 + 1;
    puVar10 = puVar9 + 1;
    *puVar9 = param_1;
    *puVar10 = puVar10;
    puVar9[2] = puVar10;
    puVar9[3] = 0;
    puVar9[4] = 0;
    puVar10 = puVar9 + 5;
    *puVar10 = puVar10;
    puVar9[6] = puVar10;
    puVar10 = puVar9 + 7;
    *puVar10 = puVar10;
    puVar9[8] = puVar10;
    puVar9[9] = lVar4;
    *(undefined1 *)(puVar9 + 10) = 0;
    puVar9[0xb] = uVar6;
    puVar9[0xc] = 0x2000;
    puVar9[0xd] = 0;
    puVar9[0xe] = 0;
    puVar9[0xf] = 0;
    puVar10 = puVar9;
  }
  FUN_1432cd870(param_1 + 2,puVar10);
  uVar11 = param_1[0x16] + 1;
  if (uVar11 < (ulonglong)param_1[0x16]) {
    uVar12 = uVar11;
    if ((ulonglong)param_1[0x17] >> 1 <= uVar11) goto LAB_1432ce22c;
  }
  else {
    if (uVar11 <= (ulonglong)param_1[0x17]) goto LAB_1432ce22c;
    uVar12 = (uVar11 >> 2) + uVar11;
  }
  FUN_1432cfc80(plVar2,plVar2,uVar12);
LAB_1432ce22c:
  param_1[0x16] = uVar11;
  puVar9 = (undefined8 *)(*plVar2 + -8 + uVar11 * 8);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = puVar10;
  }
  local_20 = param_1 + 10;
  local_28 = &PTR_FUN_145af81f8;
  FUN_1432cff10(&local_28);
  uVar6 = *(undefined8 *)(*(longlong *)(*plVar1 + -8 + param_1[0x19] * 8) + 0x48);
  local_28 = &PTR_FUN_145af81b0;
  Scaleform::Lock::DoLock(lVar3 + 0x10);
  return uVar6;
}



// FUNCTION 1432ce2c0 FUN_1432ce2c0 body=404 status=ok
// SIG undefined FUN_1432ce2c0(void)

void FUN_1432ce2c0(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  undefined **local_88;
  longlong local_80;
  char local_78;
  Event local_68 [96];
  
  local_80 = param_1 + 0x50;
  local_88 = &PTR_FUN_145af81c8;
  local_78 = param_2;
  FUN_1432cff10(&local_88);
  *(undefined1 *)(param_1 + 0x71) = 0;
  do {
    lVar1 = *(longlong *)(param_1 + 0x48);
    bVar4 = false;
    Scaleform::Lock::DoLock(lVar1 + 0x10);
    FUN_1432cf090(param_1);
    *(undefined1 *)(param_1 + 0x72) = 1;
    if (param_2 != '\0') {
      if (*(longlong *)(param_1 + 0x68) != 0) {
        if (*(char *)(param_1 + 0x70) != '\0') {
          bVar4 = true;
          goto LAB_1432ce3b7;
        }
        FUN_1432cf140(param_1);
      }
      lVar5 = param_1 + 0x88;
      if (param_1 == -0x98) {
        lVar5 = 0;
      }
      while (*(longlong *)(param_1 + 0xa0) != lVar5) {
        lVar2 = *(longlong *)(param_1 + 0xa0);
        *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x18) = *(undefined8 *)(lVar2 + 0x18);
        *(undefined8 *)(*(longlong *)(lVar2 + 0x18) + 0x10) = *(undefined8 *)(lVar2 + 0x10);
        *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(lVar2 + 0x18) = 0xffffffffffffffff;
        *(undefined4 *)(lVar2 + 0x28) = 2;
        if (*(longlong *)(lVar2 + 0x30) != 0) {
          *(undefined1 *)(*(longlong *)(lVar2 + 0x30) + 0x20) = 0;
        }
        *(undefined8 *)(lVar2 + 0x30) = 0;
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x40) = 0;
    }
LAB_1432ce3b7:
    Scaleform::Lock::DoLock(lVar1 + 0x10);
    if (!bVar4) {
      return;
    }
    Scaleform::Event::Event(local_68,false,false);
    lVar1 = *(longlong *)(param_1 + 0x48);
    Scaleform::Lock::DoLock(lVar1 + 0x10);
    if (*(longlong *)(param_1 + 0x68) == 0) {
      bVar4 = false;
    }
    else {
      *(Event **)(param_1 + 0x78) = local_68;
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x68) + 0x30);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    Scaleform::Lock::DoLock(lVar1 + 0x10);
    if (bVar4) {
      Scaleform::Event::Wait(local_68,0xffffffff);
    }
    Scaleform::Event::~Event(local_68);
  } while( true );
}



// FUNCTION 1432ce460 FUN_1432ce460 body=73 status=ok
// SIG undefined FUN_1432ce460(void)

undefined8 FUN_1432ce460(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  Scaleform::Lock::DoLock(lVar1 + 0x10);
  if ((*(char *)(param_1 + 0x72) == '\0') || (*(longlong *)(param_1 + 0x68) != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  Scaleform::Lock::DoLock(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 1432ce4b0 FUN_1432ce4b0 body=1048 status=ok
// SIG undefined FUN_1432ce4b0(void)

void FUN_1432ce4b0(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong local_res18;
  undefined8 *local_158;
  uint local_150;
  uint local_14c;
  undefined8 local_138 [32];
  
  local_res18 = 0;
  if (param_1[0x16] != 0) {
    do {
      lVar1 = *(longlong *)(param_1[0x15] + local_res18 * 8);
      plVar2 = (longlong *)*param_1;
      lVar13 = 0x20;
      puVar8 = local_138;
      local_150 = 0;
      local_14c = 0x20;
      do {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      puVar8 = (undefined8 *)(lVar1 + 0x28);
      puVar6 = local_138;
      puVar5 = *(undefined8 **)(lVar1 + 0x30);
      uVar11 = local_14c;
      while (local_14c = uVar11, puVar5 != puVar8) {
        uVar15 = 0;
        puVar3 = (undefined8 *)puVar5[1];
        for (lVar13 = puVar5[-1]; uVar14 = (uint)uVar15, lVar13 != 0;
            lVar13 = *(longlong *)(lVar13 + 0x30)) {
          uVar15 = (ulonglong)(uVar14 + 1);
        }
        local_158 = puVar6;
        if (uVar14 < uVar11) {
LAB_1432ce644:
          puVar5[1] = local_158[uVar15];
          local_158[uVar15] = puVar5;
          puVar6 = local_158;
          uVar11 = local_14c;
          if (local_150 < uVar14 + 1) {
            local_150 = uVar14 + 1;
          }
        }
        else {
          local_14c = uVar14 + 1;
          uVar16 = uVar14 + 0x20 & 0xffffffe0;
          local_158 = (undefined8 *)(**(code **)(*plVar2 + 0x50))(plVar2,(ulonglong)uVar16 << 3,0);
          if (local_158 != (undefined8 *)0x0) {
            _guard_xfg_dispatch_icall_nop(local_158,puVar6,(ulonglong)local_150 << 3);
            uVar11 = 0;
            if (uVar16 != local_150) {
              do {
                uVar9 = local_150 + uVar11;
                uVar11 = uVar11 + 1;
                local_158[uVar9] = 0;
              } while (uVar11 < uVar16 - local_150);
            }
            if (puVar6 != local_138) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
            goto LAB_1432ce644;
          }
        }
        local_14c = uVar11;
        local_158 = puVar6;
        *puVar5 = 1;
        puVar6 = local_158;
        puVar5 = puVar3;
        uVar11 = local_14c;
      }
      *puVar8 = puVar8;
      *(undefined8 **)(lVar1 + 0x30) = puVar8;
      puVar8 = puVar6;
      uVar11 = local_150;
      while (uVar14 = uVar11, uVar14 != 0) {
        uVar11 = uVar14 - 1;
        puVar5 = (undefined8 *)puVar6[uVar11];
        while (puVar5 != (undefined8 *)0x0) {
          puVar6 = puVar5 + -7;
          plVar4 = *(longlong **)
                    (*(longlong *)(((ulonglong)puVar6 & 0xfffffffffffff000) + 0x20) + 0x28 +
                    ((longlong)
                     ((longlong)puVar6 + (-0x30 - ((ulonglong)puVar6 & 0xfffffffffffff000))) / 0x48
                    & 0xffffffffU) * 8);
          cVar7 = (**(code **)(*plVar4 + 0x20))(plVar4,puVar6);
          if (((cVar7 != '\0') && (lVar1 = puVar5[-1], lVar1 != 0)) &&
             (*(longlong *)(lVar1 + 0x40) == 0)) {
            uVar16 = uVar14 - 2;
            local_158 = puVar8;
            if (local_14c <= uVar16) {
              uVar9 = uVar14 + 0x1e & 0xffffffe0;
              local_158 = (undefined8 *)
                          (**(code **)(*plVar2 + 0x50))(plVar2,(ulonglong)uVar9 << 3,0);
              if (local_158 == (undefined8 *)0x0) goto LAB_1432ce803;
              _guard_xfg_dispatch_icall_nop(local_158,puVar8,(ulonglong)local_150 << 3);
              uVar10 = 0;
              if (uVar9 != local_150) {
                do {
                  uVar12 = local_150 + uVar10;
                  uVar10 = uVar10 + 1;
                  local_158[uVar12] = 0;
                } while (uVar10 < uVar9 - local_150);
              }
              local_14c = uVar11;
              if (puVar8 != local_138) {
                (**(code **)(*DAT_146b62f28 + 0x60))();
              }
            }
            *(undefined8 *)(lVar1 + 0x40) = local_158[uVar16];
            local_158[uVar16] = lVar1 + 0x38;
            puVar8 = local_158;
            if (local_150 < uVar11) {
              local_150 = uVar11;
            }
          }
LAB_1432ce803:
          local_158 = puVar8;
          puVar8 = (undefined8 *)puVar5[1];
          puVar5[1] = 0;
          *puVar5 = 0;
          puVar5 = puVar8;
          puVar6 = local_158;
          puVar8 = local_158;
        }
      }
      if (puVar6 != local_138) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_res18 = local_res18 + 1;
    } while (local_res18 < (ulonglong)param_1[0x16]);
  }
  return;
}



// FUNCTION 1432ce8e0 FUN_1432ce8e0 body=15 status=ok
// SIG undefined FUN_1432ce8e0(void)

undefined8 FUN_1432ce8e0(longlong param_1)

{
  return *(undefined8 *)(**(longlong **)(param_1 + 0xa8) + 0x48);
}



// FUNCTION 1432ce900 FUN_1432ce900 body=39 status=ok
// SIG undefined FUN_1432ce900(void)

void FUN_1432ce900(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0xb0) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + -8 + *(longlong *)(param_1 + 0xb0) * 8),
     lVar1 != 0)) {
    *(undefined1 *)(lVar1 + 0x50) = 1;
  }
  return;
}



// FUNCTION 1432ce930 FUN_1432ce930 body=47 status=ok
// SIG undefined FUN_1432ce930(void)

void FUN_1432ce930(longlong param_1,undefined4 param_2)

{
  undefined **local_28;
  longlong local_20;
  undefined4 local_18;
  
  local_20 = param_1 + 0x50;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  local_28 = &PTR_FUN_145af8210;
  local_18 = param_2;
  FUN_1432cff10(&local_28);
  return;
}



// FUNCTION 1432ce970 FUN_1432ce970 body=141 status=ok
// SIG undefined FUN_1432ce970(void)

void FUN_1432ce970(longlong param_1,RefCountImpl *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  Scaleform::Lock::DoLock(lVar2 + 0x10);
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  FUN_1432cfe60(param_1 + 0x50,param_1 + 0x50,*(longlong *)(param_1 + 0x58) + 1);
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x50) + (*(longlong *)(param_1 + 0x58) + -1) * 8);
  if (puVar1 != (undefined8 *)0x0) {
    if (param_2 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(param_2);
    }
    *puVar1 = param_2;
  }
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(param_2);
  }
  Scaleform::Lock::DoLock(lVar2 + 0x10);
  return;
}



// FUNCTION 1432cea10 FUN_1432cea10 body=169 status=ok
// SIG undefined FUN_1432cea10(void)

void FUN_1432cea10(longlong param_1,longlong param_2)

{
  void *_Dst;
  longlong lVar1;
  ulonglong uVar2;
  RefCountImpl *this;
  uint uVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  Scaleform::Lock::DoLock(lVar1 + 0x10);
  uVar2 = *(ulonglong *)(param_1 + 0x58);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x50) + uVar4 * 8) == param_2) {
        uVar4 = (ulonglong)uVar3;
        if (uVar2 == 1) {
          FUN_1432cfe60(param_1 + 0x50,param_1 + 0x50,0);
        }
        else {
          this = *(RefCountImpl **)(*(longlong *)(param_1 + 0x50) + uVar4 * 8);
          if (this != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::Release(this);
          }
          _Dst = (void *)(*(longlong *)(param_1 + 0x50) + uVar4 * 8);
          memmove(_Dst,(void *)((longlong)_Dst + 8),(*(longlong *)(param_1 + 0x58) - uVar4) * 8 - 8)
          ;
          *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + -1;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar4 < uVar2);
  }
  Scaleform::Lock::DoLock(lVar1 + 0x10);
  return;
}



// FUNCTION 1432ceac0 FUN_1432ceac0 body=133 status=ok
// SIG undefined FUN_1432ceac0(void)

void FUN_1432ceac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong local_res20;
  
  local_res20 = 0;
  FUN_1432cecc0(param_1,&local_res20,param_2,param_3);
  while (local_res20 != 0) {
    FUN_1432cef60(param_1,local_res20,param_2);
    local_res20 = 0;
    FUN_1432cecc0(param_1,&local_res20,param_2,param_3);
  }
  return;
}



// FUNCTION 1432ceb50 FUN_1432ceb50 body=67 status=ok
// SIG undefined FUN_1432ceb50(void)

void FUN_1432ceb50(longlong param_1)

{
  longlong lVar1;
  DWORD DVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  Scaleform::Lock::DoLock(lVar1 + 0x10);
  DVar2 = GetCurrentThreadId();
  if (*(DWORD *)(param_1 + 8) != DVar2) {
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  FUN_1432cf140(param_1);
  Scaleform::Lock::DoLock(lVar1 + 0x10);
  return;
}



// FUNCTION 1432ceba0 FUN_1432ceba0 body=277 status=ok
// SIG undefined FUN_1432ceba0(void)

ulonglong FUN_1432ceba0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong local_18;
  undefined4 local_10;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  uVar2 = FUN_1432cd670(param_1 + 0x10);
  if ((uVar2 != 0) && (*(longlong *)(param_1 + 0xb0) == 1)) {
    uVar5 = uVar2 & 0xfffffffffffff000;
    local_10 = (undefined4)((longlong)((uVar2 - uVar5) + -0x30) / 0x48);
    local_18 = uVar5;
    uVar3 = FUN_1432cf800(**(undefined8 **)(param_1 + 0xa8),&local_18,0x80000000);
    *(undefined8 *)(uVar2 + 0x10) = uVar3;
    plVar1 = (longlong *)(uVar2 + 0x38);
    *(undefined8 *)(uVar2 + 0x18) = 1;
    *(undefined8 *)(uVar2 + 0x28) = 0;
    *(undefined8 *)(uVar2 + 0x30) = 0;
    *(undefined1 *)(uVar2 + 0x20) = 0;
    *(undefined8 *)(uVar2 + 0x40) = 0;
    *plVar1 = 0;
    plVar4 = (longlong *)(*(longlong *)(uVar5 + 0x18) + 0x28);
    *plVar1 = *plVar4;
    *(longlong **)(uVar2 + 0x40) = plVar4;
    *(longlong **)(*plVar4 + 8) = plVar1;
    *plVar4 = (longlong)plVar1;
    return uVar2;
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_2);
  return 0;
}



// FUNCTION 1432cecc0 FUN_1432cecc0 body=654 status=ok
// SIG undefined FUN_1432cecc0(void)

undefined8 FUN_1432cecc0(longlong param_1,longlong *param_2,longlong *param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  DWORD DVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined **local_58;
  longlong local_50;
  longlong *local_48;
  undefined **local_40;
  longlong local_38;
  longlong *local_30;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  Scaleform::Lock::DoLock(lVar2 + 0x10);
  *param_2 = 0;
  if (*(char *)(param_1 + 0x72) != '\0') {
    FUN_1432cf5a0(param_1);
    FUN_1432cf140(param_1);
    local_38 = param_1 + 0x50;
    local_40 = &PTR_FUN_145af81e0;
    local_30 = param_3;
    FUN_1432cff10(&local_40);
    *(undefined1 *)(param_1 + 0x71) = 0;
    uVar8 = 0;
    goto LAB_1432cef2d;
  }
  DVar6 = GetCurrentThreadId();
  if (*(DWORD *)(param_1 + 8) != DVar6) {
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  if (param_4 == 0) {
    param_4 = 0xffffffffffffffff;
  }
  if (*(longlong *)(param_1 + 200) == 0) {
LAB_1432cef0e:
    if (param_3 != (longlong *)0x0) {
      (**(code **)(*param_3 + 8))(param_3,param_1,0);
    }
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0xc0);
    lVar4 = *plVar3;
    if ((lVar4 == 0) || (param_4 < *(ulonglong *)(lVar4 + 0x48))) goto LAB_1432cef0e;
    if (*(longlong *)(param_1 + 200) == 1) {
      *(undefined8 *)(param_1 + 200) = 0;
    }
    else {
      memmove(plVar3,plVar3 + 1,*(longlong *)(param_1 + 200) * 8 - 8);
      *(longlong *)(param_1 + 200) = *(longlong *)(param_1 + 200) + -1;
    }
    for (lVar5 = *(longlong *)(lVar4 + 0x10); lVar5 != lVar4 + 8; lVar5 = *(longlong *)(lVar5 + 8))
    {
      if (*(longlong *)(lVar5 + 0x10) != 0) {
        *(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x28) = lVar5;
      }
    }
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      uVar8 = *(undefined8 *)
               (*(longlong *)(param_1 + 0xd8) + -8 + *(longlong *)(param_1 + 0xe0) * 8);
      FUN_1432cfde0((longlong *)(param_1 + 0xd8),*(longlong *)(param_1 + 0xe0) + -1);
      plVar3 = (longlong *)(param_1 + 0xf0);
      uVar7 = *(longlong *)(param_1 + 0xf8) + 1;
      if (uVar7 < *(ulonglong *)(param_1 + 0xf8)) {
        uVar9 = uVar7;
        if (uVar7 < *(ulonglong *)(param_1 + 0x100) >> 1) {
LAB_1432cee3f:
          FUN_1432cfc80(plVar3,plVar3,uVar9);
        }
      }
      else if (*(ulonglong *)(param_1 + 0x100) < uVar7) {
        uVar9 = (uVar7 >> 2) + uVar7;
        goto LAB_1432cee3f;
      }
      *(ulonglong *)(param_1 + 0xf8) = uVar7;
      puVar1 = (undefined8 *)(*plVar3 + -8 + uVar7 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = uVar8;
      }
    }
    plVar3 = (longlong *)(param_1 + 0xd8);
    uVar7 = *(longlong *)(param_1 + 0xe0) + 1;
    if (uVar7 < *(ulonglong *)(param_1 + 0xe0)) {
      uVar9 = uVar7;
      if (uVar7 < *(ulonglong *)(param_1 + 0xe8) >> 1) {
LAB_1432cee96:
        FUN_1432cfc80(plVar3,plVar3,uVar9);
      }
    }
    else if (*(ulonglong *)(param_1 + 0xe8) < uVar7) {
      uVar9 = (uVar7 >> 2) + uVar7;
      goto LAB_1432cee96;
    }
    *(ulonglong *)(param_1 + 0xe0) = uVar7;
    plVar3 = (longlong *)(*plVar3 + -8 + uVar7 * 8);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = lVar4;
    }
    if (param_3 != (longlong *)0x0) {
      *param_2 = lVar4;
      (**(code **)(*param_3 + 8))(param_3,param_1,1);
    }
    local_50 = param_1 + 0x50;
    local_58 = &PTR_FUN_145af81e0;
    local_48 = param_3;
    FUN_1432cff10(&local_58);
    *(undefined1 *)(param_1 + 0x71) = 0;
    local_58 = &PTR_FUN_145af81b0;
  }
  uVar8 = 1;
LAB_1432cef2d:
  Scaleform::Lock::DoLock(lVar2 + 0x10);
  return uVar8;
}



// FUNCTION 1432cef60 FUN_1432cef60 body=293 status=ok
// SIG undefined FUN_1432cef60(void)

void FUN_1432cef60(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 != 0) {
    (**(code **)(*param_3 + 0x28))(param_3,param_1,param_2 + 0x18,*(undefined1 *)(param_2 + 0x50));
    lVar4 = *(longlong *)(param_2 + 0x40);
    lVar1 = param_2 + 0x38;
    *(undefined1 *)(param_2 + 0x50) = 0;
    if (lVar4 != lVar1) {
      do {
        (**(code **)(*param_3 + 0x30))(param_3,lVar4);
        *(undefined8 *)(lVar4 + 0x28) = 0xbad;
        lVar4 = *(longlong *)(lVar4 + 8);
      } while (lVar4 != lVar1);
      lVar4 = *(longlong *)(param_1 + 0x48);
      lVar5 = *(longlong *)(param_2 + 0x40);
      Scaleform::Lock::DoLock(lVar4 + 0x10);
      do {
        if (*(char *)(lVar5 + 0x20) != '\0') {
          lVar2 = *(longlong *)(param_1 + 0xa0);
          lVar3 = param_1 + 0x88;
          if (param_1 == -0x98) {
            lVar3 = 0;
          }
          for (; lVar2 != lVar3; lVar2 = *(longlong *)(lVar2 + 0x18)) {
            if (*(longlong *)(lVar2 + 0x30) == lVar5) {
              *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x18) = *(undefined8 *)(lVar2 + 0x18);
              *(undefined8 *)(*(longlong *)(lVar2 + 0x18) + 0x10) = *(undefined8 *)(lVar2 + 0x10);
              *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(lVar2 + 0x18) = 0xffffffffffffffff;
              *(undefined4 *)(lVar2 + 0x28) = 2;
              *(undefined8 *)(lVar2 + 0x30) = 0;
              *(undefined1 *)(lVar5 + 0x20) = 0;
              break;
            }
          }
        }
        lVar5 = *(longlong *)(lVar5 + 8);
      } while (lVar5 != lVar1);
      Scaleform::Lock::DoLock(lVar4 + 0x10);
    }
  }
  return;
}



// FUNCTION 1432cf090 FUN_1432cf090 body=160 status=ok
// SIG undefined FUN_1432cf090(void)

void FUN_1432cf090(longlong param_1)

{
  longlong lVar1;
  longlong *_Dst;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xf8);
  while (lVar1 != 0) {
    _Dst = *(longlong **)(param_1 + 0xf0);
    lVar1 = *_Dst;
    if (*(longlong *)(param_1 + 0xf8) == 1) {
      *(undefined8 *)(param_1 + 0xf8) = 0;
    }
    else {
      memmove(_Dst,_Dst + 1,*(longlong *)(param_1 + 0xf8) * 8 - 8);
      *(longlong *)(param_1 + 0xf8) = *(longlong *)(param_1 + 0xf8) + -1;
    }
    uVar2 = *(undefined8 *)(lVar1 + 0x48);
    FUN_1432cf2e0(param_1,lVar1);
    *(undefined8 *)(param_1 + 0x110) = uVar2;
    lVar1 = *(longlong *)(param_1 + 0xf8);
  }
  return;
}



// FUNCTION 1432cf140 FUN_1432cf140 body=396 status=ok
// SIG undefined FUN_1432cf140(void)

void FUN_1432cf140(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      plVar1 = (longlong *)(param_1 + 0xf0);
      do {
        plVar4 = *(longlong **)(param_1 + 0xd8);
        lVar2 = *plVar4;
        if (*(longlong *)(param_1 + 0xe0) == 1) {
          *(undefined8 *)(param_1 + 0xe0) = 0;
        }
        else {
          memmove(plVar4,plVar4 + 1,*(longlong *)(param_1 + 0xe0) * 8 - 8);
          *(longlong *)(param_1 + 0xe0) = *(longlong *)(param_1 + 0xe0) + -1;
        }
        for (lVar3 = *(longlong *)(lVar2 + 0x10); lVar3 != lVar2 + 8;
            lVar3 = *(longlong *)(lVar3 + 8)) {
          if (*(longlong *)(lVar3 + 0x10) != 0) {
            plVar4 = (longlong *)(*(longlong *)(lVar3 + 0x10) + 0x58);
            lVar6 = 0x38;
            do {
              if ((*plVar4 != 0xbad) && (*plVar4 != 0)) {
                (**(code **)(**(longlong **)(param_1 + 0x68) + 0x38))
                          (*(longlong **)(param_1 + 0x68),plVar4 + -5);
              }
              plVar4 = plVar4 + 9;
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
          }
        }
        uVar5 = *(longlong *)(param_1 + 0xf8) + 1;
        if (uVar5 < *(ulonglong *)(param_1 + 0xf8)) {
          uVar7 = uVar5;
          if (uVar5 < *(ulonglong *)(param_1 + 0x100) >> 1) {
LAB_1432cf251:
            FUN_1432cfc80(plVar1,plVar1,uVar7);
          }
        }
        else if (*(ulonglong *)(param_1 + 0x100) < uVar5) {
          uVar7 = (uVar5 >> 2) + uVar5;
          goto LAB_1432cf251;
        }
        *(ulonglong *)(param_1 + 0xf8) = uVar5;
        plVar4 = (longlong *)(*plVar1 + -8 + uVar5 * 8);
        if (plVar4 != (longlong *)0x0) {
          *plVar4 = lVar2;
        }
      } while (*(longlong *)(param_1 + 0xe0) != 0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x10))(*(longlong **)(param_1 + 0x68),param_1);
    if (*(longlong *)(param_1 + 0x78) != 0) {
      Scaleform::Event::SetEvent(*(Event **)(param_1 + 0x78));
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
  }
  return;
}



// FUNCTION 1432cf2e0 FUN_1432cf2e0 body=273 status=ok
// SIG undefined FUN_1432cf2e0(void)

void FUN_1432cf2e0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (param_2 != 0) {
    for (puVar1 = *(undefined8 **)(param_2 + 0x18); puVar1 != (undefined8 *)0x0;
        puVar1 = (undefined8 *)*puVar1) {
      uVar4 = 0;
      if (*(int *)(puVar1 + 1) != 0) {
        do {
          plVar2 = (longlong *)puVar1[uVar4 * 4 + 4];
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x18))(plVar2);
            (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,plVar2);
            puVar1[uVar4 * 4 + 4] = 0;
          }
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(puVar1 + 1));
      }
    }
    plVar2 = *(longlong **)(param_2 + 0x40);
    while (plVar2 != (longlong *)(param_2 + 0x38)) {
      if (((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) && (plVar2[1] != 0)) {
        *(longlong *)(*plVar2 + 8) = plVar2[1];
        *(longlong *)plVar2[1] = *plVar2;
        *plVar2 = 0;
        plVar2[1] = 0;
      }
      FUN_1432cd730(param_1 + 0x10);
      plVar2 = *(longlong **)(param_2 + 0x40);
    }
    FUN_1432cf760(param_2);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_2);
  }
  return;
}



// FUNCTION 1432cf400 FUN_1432cf400 body=156 status=ok
// SIG undefined FUN_1432cf400(void)

void FUN_1432cf400(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  lVar2 = param_2[1];
  do {
    if (lVar2 == 0) {
      return;
    }
    uVar4 = param_2[1];
    uVar1 = uVar4 - 1;
    uVar3 = *(undefined8 *)(*param_2 + -8 + uVar4 * 8);
    if (uVar1 < uVar4) {
      uVar4 = uVar1;
      if (uVar1 < (ulonglong)param_2[2] >> 1) {
LAB_1432cf466:
        FUN_1432cfc80(param_2,param_2,uVar4);
      }
    }
    else if ((ulonglong)param_2[2] < uVar1) {
      uVar4 = (uVar1 >> 2) + uVar1;
      goto LAB_1432cf466;
    }
    param_2[1] = uVar1;
    FUN_1432cf2e0(param_1,uVar3);
    lVar2 = param_2[1];
  } while( true );
}



// FUNCTION 1432cf4b0 FUN_1432cf4b0 body=113 status=ok
// SIG undefined FUN_1432cf4b0(void)

void FUN_1432cf4b0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_2[1];
  if (plVar1 != param_2) {
    do {
      if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) && (plVar1[1] != 0)) {
        *(longlong *)(*plVar1 + 8) = plVar1[1];
        *(longlong *)plVar1[1] = *plVar1;
        *plVar1 = 0;
        plVar1[1] = 0;
      }
      FUN_1432cd730(param_1 + 0x10,plVar1);
      plVar1 = (longlong *)param_2[1];
    } while (plVar1 != param_2);
  }
  return;
}



// FUNCTION 1432cf5a0 FUN_1432cf5a0 body=104 status=ok
// SIG undefined FUN_1432cf5a0(void)

void FUN_1432cf5a0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_1 + 0x88;
  if (param_1 == -0x98) {
    lVar2 = 0;
  }
  while (*(longlong *)(param_1 + 0xa0) != lVar2) {
    lVar1 = *(longlong *)(param_1 + 0xa0);
    *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x18) = *(undefined8 *)(lVar1 + 0x18);
    *(undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x10) = *(undefined8 *)(lVar1 + 0x10);
    *(undefined8 *)(lVar1 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x18) = 0xffffffffffffffff;
    *(undefined4 *)(lVar1 + 0x28) = 2;
    if (*(longlong *)(lVar1 + 0x30) != 0) {
      *(undefined1 *)(*(longlong *)(lVar1 + 0x30) + 0x20) = 0;
    }
    *(undefined8 *)(lVar1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1432cf760 FUN_1432cf760 body=153 status=ok
// SIG undefined FUN_1432cf760(void)

void FUN_1432cf760(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  while (lVar1 != param_1 + 8) {
    plVar2 = *(longlong **)(param_1 + 0x10);
    *(longlong *)(*plVar2 + 8) = plVar2[1];
    *(longlong *)plVar2[1] = *plVar2;
    *plVar2 = -1;
    plVar2[1] = -1;
    if (plVar2[4] != 0) {
      *(longlong *)(plVar2[4] + 0x18) = plVar2[3];
    }
    if (plVar2[3] != 0) {
      *(longlong *)(plVar2[3] + 0x20) = plVar2[4];
    }
    (**(code **)(*DAT_146b62f28 + 0x60))();
    lVar1 = *(longlong *)(param_1 + 0x10);
  }
  Scaleform::Render::LinearHeap::ClearAndRelease(param_1 + 0x58);
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32>::
  ~PagedItemBuffer<Scaleform::Render::VertexElement,32>(param_1 + 0x18);
  return;
}



// FUNCTION 1432cf800 FUN_1432cf800 body=152 status=ok
// SIG undefined FUN_1432cf800(void)

longlong FUN_1432cf800(longlong param_1,longlong *param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  FUN_1432d0010(param_1 + 0x18,1);
  lVar2 = *(longlong *)(param_1 + 0x20);
  lVar4 = (ulonglong)*(uint *)(lVar2 + 8) * 0x20 + lVar2;
  *(uint *)(lVar2 + 8) = *(uint *)(lVar2 + 8) + 1;
  uVar1 = *(uint *)(param_2 + 1);
  lVar2 = *param_2;
  *(longlong *)(lVar4 + 0x18) = param_1;
  *(ulonglong *)(lVar4 + 0x10) = lVar2 + ((ulonglong)uVar1 * 9 + 6) * 8;
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x20) + 0x18);
  uVar3 = 0;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x28 + (ulonglong)*(uint *)(param_2 + 1) * 8);
  }
  *(undefined4 *)(lVar4 + 0x28) = param_3;
  *(undefined8 *)(lVar4 + 0x20) = uVar3;
  return lVar4 + 0x10;
}



// FUNCTION 1432cf920 FUN_1432cf920 body=99 status=ok
// SIG undefined FUN_1432cf920(void)

RefCountImplCore * FUN_1432cf920(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145af8188;
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



// FUNCTION 1432cf990 FUN_1432cf990 body=43 status=ok
// SIG undefined FUN_1432cf990(void)

undefined8 * FUN_1432cf990(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af81b0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1432cf9c0 FUN_1432cf9c0 body=43 status=ok
// SIG undefined FUN_1432cf9c0(void)

undefined8 * FUN_1432cf9c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af81b0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1432cf9f0 FUN_1432cf9f0 body=101 status=ok
// SIG undefined FUN_1432cf9f0(void)

RefCountImplCore * FUN_1432cf9f0(RefCountImplCore *param_1,ulonglong param_2)

{
  Scaleform::Lock::~Lock(param_1 + 0x10);
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1432cfa60 FUN_1432cfa60 body=43 status=ok
// SIG undefined FUN_1432cfa60(void)

undefined8 * FUN_1432cfa60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af8120;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1432cfa90 FUN_1432cfa90 body=89 status=ok
// SIG undefined FUN_1432cfa90(void)

undefined8 FUN_1432cfa90(undefined8 param_1,ulonglong param_2)

{
  FUN_1432ccc20();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1432cfaf0 FUN_1432cfaf0 body=71 status=ok
// SIG undefined FUN_1432cfaf0(void)

undefined8 * FUN_1432cfaf0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af8148;
  FUN_1432cd3e0();
  Scaleform::RefCountImplCore::~RefCountImplCore((RefCountImplCore *)(param_1 + 1));
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1432cfb40 FUN_1432cfb40 body=90 status=ok
// SIG undefined FUN_1432cfb40(void)

void FUN_1432cfb40(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(param_1 + 0x30);
  lVar2 = 0x38;
  do {
    if (plVar1 != (longlong *)0x0) {
      if ((*plVar1 != 0) && (plVar1[1] != 0)) {
        *(longlong *)(*plVar1 + 8) = plVar1[1];
        *(longlong *)plVar1[1] = *plVar1;
        *plVar1 = 0;
        plVar1[1] = 0;
      }
      *plVar1 = *param_2;
      plVar1[1] = (longlong)param_2;
      *(longlong **)(*param_2 + 8) = plVar1;
      *param_2 = (longlong)plVar1;
    }
    plVar1 = plVar1 + 9;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 1432cfba0 ClearAndRelease body=122 status=ok
// SIG undefined ClearAndRelease(void)

void Scaleform::Render::LinearHeap::ClearAndRelease(undefined8 *param_1)

{
  longlong *plVar1;
  
  if (param_1[4] != 0) {
    plVar1 = (longlong *)(param_1[2] + (param_1[4] * 3 + -3) * 8);
    do {
      param_1[4] = param_1[4] + -1;
      if (*plVar1 != 0) {
        (**(code **)(*(longlong *)*param_1 + 0x60))();
      }
      plVar1 = plVar1 + -3;
    } while (param_1[4] != 0);
    param_1[4] = param_1[4] + -1;
    (**(code **)(*(longlong *)*param_1 + 0x60))((longlong *)*param_1,param_1[2]);
  }
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  return;
}



// FUNCTION 1432cfc80 FUN_1432cfc80 body=174 status=ok
// SIG undefined FUN_1432cfc80(void)

void FUN_1432cfc80(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if ((param_3 != param_1[2]) && ((ulonglong)param_1[2] <= param_3)) {
    if (param_3 == 0) {
      uVar2 = 0;
      if (*param_1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 7 & 0xfffffffffffffff8;
      if (*param_1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))();
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 2;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 8,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1432cfd30 FUN_1432cfd30 body=165 status=ok
// SIG undefined FUN_1432cfd30(void)

void FUN_1432cfd30(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    if (param_3 == 0) {
      uVar2 = 0;
      if (*param_1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 3U & 0xfffffffffffffffc;
      if (*param_1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))();
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 2;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 8,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 1432cfde0 FUN_1432cfde0 body=114 status=ok
// SIG undefined FUN_1432cfde0(void)

void FUN_1432cfde0(longlong param_1,ulonglong param_2)

{
  if (param_2 < *(ulonglong *)(param_1 + 8)) {
    if (param_2 < *(ulonglong *)(param_1 + 0x10) >> 1) {
      FUN_1432cfc80(param_1,param_1,param_2);
      *(ulonglong *)(param_1 + 8) = param_2;
      return;
    }
  }
  else if (*(ulonglong *)(param_1 + 0x10) < param_2) {
    FUN_1432cfc80(param_1,param_1,(param_2 >> 2) + param_2);
    *(ulonglong *)(param_1 + 8) = param_2;
    return;
  }
  *(ulonglong *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 1432cfe60 FUN_1432cfe60 body=174 status=ok
// SIG undefined FUN_1432cfe60(void)

void FUN_1432cfe60(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    puVar1 = (undefined8 *)(*param_1 + ((param_3 - 1) + lVar2) * 8);
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
      }
      puVar1 = puVar1 + -1;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1432cfd30(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1432cfd30(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1432cff10 FUN_1432cff10 body=243 status=ok
// SIG undefined FUN_1432cff10(void)

void FUN_1432cff10(longlong *param_1)

{
  void *_Dst;
  ulonglong uVar1;
  longlong lVar2;
  RefCountImpl *pRVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  if (*(longlong *)(param_1[1] + 8) != 0) {
    do {
      uVar1 = ((longlong *)param_1[1])[1];
      lVar2 = *(longlong *)param_1[1];
      pRVar3 = *(RefCountImpl **)(lVar2 + uVar5 * 8);
      if (pRVar3 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(pRVar3);
      }
      pRVar3 = *(RefCountImpl **)(lVar2 + uVar5 * 8);
      if (pRVar3 == (RefCountImpl *)0x0) {
        plVar4 = (longlong *)param_1[1];
        if (plVar4[1] == 1) {
          FUN_1432cfe60(plVar4,plVar4,0);
        }
        else {
          pRVar3 = *(RefCountImpl **)(*plVar4 + uVar5 * 8);
          if (pRVar3 != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::Release(pRVar3);
          }
          _Dst = (void *)(*plVar4 + uVar5 * 8);
          memmove(_Dst,(void *)((longlong)_Dst + 8),(plVar4[1] - uVar5) * 8 - 8);
          plVar4[1] = plVar4[1] + -1;
        }
      }
      else {
        (**(code **)(*param_1 + 8))(param_1,pRVar3);
        if (uVar1 <= *(ulonglong *)(param_1[1] + 8)) {
          uVar5 = (ulonglong)((int)uVar5 + 1);
        }
        Scaleform::RefCountImpl::Release(pRVar3);
      }
    } while (uVar5 < *(ulonglong *)(param_1[1] + 8));
  }
  return;
}



// FUNCTION 1432d0010 FUN_1432d0010 body=125 status=ok
// SIG undefined FUN_1432d0010(void)

void FUN_1432d0010(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x3f0,0);
    *param_1 = puVar1;
    param_1[1] = puVar1;
  }
  else {
    if ((uint)(*(int *)(puVar1 + 1) + param_2) < 0x20) {
      return;
    }
    uVar2 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x3f0,0);
    param_1[1] = uVar2;
    *puVar1 = uVar2;
    puVar1 = (undefined8 *)param_1[1];
  }
  *puVar1 = 0;
  *(undefined4 *)(param_1[1] + 8) = 0;
  return;
}



// FUNCTION 1432d0100 FUN_1432d0100 body=56 status=ok
// SIG undefined FUN_1432d0100(void)

ulonglong FUN_1432d0100(int param_1,uint param_2)

{
  ulonglong in_RAX;
  uint uVar1;
  
  uVar1 = param_1 - 2;
  if (uVar1 < 0xd) {
    in_RAX = (ulonglong)(int)uVar1;
    switch(uVar1) {
    case 0:
    case 5:
    case 0xb:
    case 0xc:
      return (ulonglong)(~(param_2 >> 0x16) & 1);
    case 3:
    case 4:
      return CONCAT71((int7)(int3)(uVar1 >> 8),(param_2 & 0x600000) == 0);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1432d0200 FUN_1432d0200 body=65 status=ok
// SIG undefined FUN_1432d0200(void)

undefined8 * FUN_1432d0200(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &DAT_146b630d8;
  param_1[1] = param_2;
  (**(code **)(DAT_146b630d8 + 8))(&DAT_146b630d8,param_2,0);
  FUN_1432d0d90(param_2);
  return param_1;
}



// FUNCTION 1432d0250 GetRawUserObject body=5 status=ok
// SIG undefined GetRawUserObject(void)

undefined8
TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FInputDeviceModule>,IModuleInterface_*___ptr64___cdecl(void)>
::GetRawUserObject(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 1432d0260 GetFilterCount body=20 status=ok
// SIG undefined GetFilterCount(void)

undefined4 Scaleform::Render::FilterState::GetFilterCount(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FVorbisAudioInfo::GetSourceBufferSize(*(undefined8 *)(param_1 + 8));
  return uVar1;
}



// FUNCTION 1432d0280 GetFilter body=9 status=ok
// SIG undefined GetFilter(void)

void Scaleform::Render::FilterState::GetFilter(longlong param_1)

{
  FilterSet::GetFilter(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 1432d0290 FUN_1432d0290 body=43 status=ok
// SIG undefined FUN_1432d0290(void)

undefined8 * FUN_1432d0290(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af8240;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1432d02c0 FUN_1432d02c0 body=8 status=ok
// SIG undefined FUN_1432d02c0(void)

void FUN_1432d02c0(undefined8 param_1,RefCountImpl *param_2)

{
  Scaleform::RefCountImpl::AddRef(param_2);
  return;
}



// FUNCTION 1432d02f0 FUN_1432d02f0 body=164 status=ok
// SIG undefined FUN_1432d02f0(void)

undefined8 * FUN_1432d02f0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (longlong *)0x0) {
    param_2 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
  }
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x50))(param_2,0x50);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = &PTR_FUN_144f70a50;
    *puVar1 = &PTR_FUN_145af82a0;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined1 *)((longlong)puVar1 + 0x14) = 0;
    FUN_1432d1630(puVar1 + 3,param_1 + 0x18);
    puVar1[9] = 0;
    *puVar1 = &PTR_FUN_145af82c0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1432d03d0 FUN_1432d03d0 body=98 status=ok
// SIG undefined FUN_1432d03d0(void)

void FUN_1432d03d0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 == (longlong *)0x0) {
    param_2 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
  }
  lVar1 = (**(code **)(*param_2 + 0x50))(param_2,0x50);
  if (lVar1 != 0) {
    FUN_1432d16c0(lVar1,param_1 + 0x18,*(undefined4 *)(param_1 + 0x4c),
                  *(float *)(param_1 + 0x48) * 0.05);
    return;
  }
  return;
}



// FUNCTION 1432d0470 FUN_1432d0470 body=164 status=ok
// SIG undefined FUN_1432d0470(void)

undefined8 * FUN_1432d0470(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (longlong *)0x0) {
    param_2 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
  }
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x50))(param_2,0x50);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 2;
    *puVar1 = &PTR_FUN_144f70a50;
    *puVar1 = &PTR_FUN_145af82a0;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined1 *)((longlong)puVar1 + 0x14) = 0;
    FUN_1432d1630(puVar1 + 3,param_1 + 0x18);
    puVar1[9] = 0;
    *puVar1 = &PTR_FUN_145af8300;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1432d0530 FUN_1432d0530 body=98 status=ok
// SIG undefined FUN_1432d0530(void)

void FUN_1432d0530(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 == (longlong *)0x0) {
    param_2 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
  }
  lVar1 = (**(code **)(*param_2 + 0x50))(param_2,0x50);
  if (lVar1 != 0) {
    FUN_1432d1570(lVar1,param_1 + 0x18,*(undefined4 *)(param_1 + 0x4c),
                  *(float *)(param_1 + 0x48) * 0.05);
    return;
  }
  return;
}



// FUNCTION 1432d05e0 FUN_1432d05e0 body=331 status=ok
// SIG undefined FUN_1432d05e0(void)

undefined8 *
FUN_1432d05e0(undefined8 *param_1,uint param_2,RefCountImpl *param_3,float param_4,float param_5,
             float param_6,float param_7,undefined4 param_8)

{
  float fVar1;
  float fVar2;
  
  param_1[1] = 0;
  *(uint *)(param_1 + 2) = param_2;
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
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) & 0xfffffff8;
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) | param_2;
  *param_1 = &PTR_FUN_145af8340;
  param_1[10] = 0;
  *(float *)(param_1 + 4) = param_6 * 20.0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_8;
  param_4 = param_4 * 20.0;
  *(float *)((longlong)param_1 + 0x24) = param_7 * 20.0;
  *(float *)((longlong)param_1 + 0x4c) = param_5;
  *(float *)(param_1 + 9) = param_4;
  fVar1 = _guard_xfg_dispatch_icall_nop(param_5);
  fVar2 = _guard_xfg_dispatch_icall_nop(param_5);
  *(float *)(param_1 + 5) = fVar1 * param_4;
  *(float *)((longlong)param_1 + 0x2c) = fVar2 * param_4;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  if (param_3 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_3);
  }
  if ((RefCountImpl *)param_1[8] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[8]);
  }
  param_1[8] = param_3;
  return param_1;
}



// FUNCTION 1432d0740 FUN_1432d0740 body=191 status=ok
// SIG undefined FUN_1432d0740(void)

undefined8 *
FUN_1432d0740(undefined8 *param_1,undefined4 param_2,undefined8 param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = param_2;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145af82a0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  FUN_1432d1630(param_1 + 3,param_3);
  param_5 = param_5 * 20.0;
  *param_1 = &PTR_FUN_145af8340;
  param_1[10] = 0;
  *(float *)((longlong)param_1 + 0x4c) = param_4;
  *(float *)(param_1 + 9) = param_5;
  fVar1 = _guard_xfg_dispatch_icall_nop(param_4);
  fVar2 = _guard_xfg_dispatch_icall_nop(param_4);
  *(float *)(param_1 + 5) = fVar1 * param_5;
  *(float *)((longlong)param_1 + 0x2c) = fVar2 * param_5;
  return param_1;
}



// FUNCTION 1432d0810 FUN_1432d0810 body=108 status=ok
// SIG undefined FUN_1432d0810(void)

void FUN_1432d0810(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 == (longlong *)0x0) {
    param_2 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
  }
  lVar1 = (**(code **)(*param_2 + 0x50))(param_2,0x58);
  if (lVar1 != 0) {
    FUN_1432d0740(lVar1,*(undefined4 *)(param_1 + 0x10),param_1 + 0x18,
                  *(undefined4 *)(param_1 + 0x4c),*(float *)(param_1 + 0x48) * 0.05);
    return;
  }
  return;
}



// FUNCTION 1432d08c0 FUN_1432d08c0 body=64 status=ok
// SIG undefined FUN_1432d08c0(void)

void FUN_1432d08c0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1432d2a10(param_2,*(undefined8 *)(param_1 + 0x40),0);
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  }
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  return;
}



// FUNCTION 1432d0910 FUN_1432d0910 body=103 status=ok
// SIG undefined FUN_1432d0910(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1432d0910(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145af8360;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)(param_1 + 2) = 8;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  uVar1 = uRam00000001467cd0b8;
  param_1[3] = _DAT_1467cd0b0;
  param_1[4] = uVar1;
  uVar1 = uRam00000001467cd0c8;
  param_1[5] = _DAT_1467cd0c0;
  param_1[6] = uVar1;
  uVar1 = uRam00000001467cd0d8;
  param_1[7] = _DAT_1467cd0d0;
  param_1[8] = uVar1;
  uVar1 = uRam00000001467cd0e8;
  param_1[9] = _DAT_1467cd0e0;
  param_1[10] = uVar1;
  uVar1 = uRam00000001467cd0f8;
  param_1[0xb] = _DAT_1467cd0f0;
  param_1[0xc] = uVar1;
  return param_1;
}



// FUNCTION 1432d09a0 FUN_1432d09a0 body=212 status=ok
// SIG undefined FUN_1432d09a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432d09a0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_2 == (longlong *)0x0) {
    param_2 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
  }
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x50))(param_2,0x68);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = &PTR_FUN_144f70a50;
    *puVar2 = &PTR_FUN_145af8360;
    *(undefined4 *)(puVar2 + 1) = 1;
    *(undefined4 *)(puVar2 + 2) = 8;
    *(undefined1 *)((longlong)puVar2 + 0x14) = 0;
    uVar1 = uRam00000001467cd0b8;
    puVar2[3] = _DAT_1467cd0b0;
    puVar2[4] = uVar1;
    uVar1 = uRam00000001467cd0c8;
    puVar2[5] = _DAT_1467cd0c0;
    puVar2[6] = uVar1;
    uVar1 = uRam00000001467cd0d8;
    puVar2[7] = _DAT_1467cd0d0;
    puVar2[8] = uVar1;
    uVar1 = uRam00000001467cd0e8;
    puVar2[9] = _DAT_1467cd0e0;
    puVar2[10] = uVar1;
    uVar1 = uRam00000001467cd0f8;
    puVar2[0xb] = _DAT_1467cd0f0;
    puVar2[0xc] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    puVar2[8] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    puVar2[9] = *(undefined8 *)(param_1 + 0x48);
    puVar2[10] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    puVar2[0xb] = *(undefined8 *)(param_1 + 0x58);
    puVar2[0xc] = uVar1;
    return;
  }
  return;
}



// FUNCTION 1432d0a80 FUN_1432d0a80 body=36 status=ok
// SIG undefined FUN_1432d0a80(void)

bool FUN_1432d0a80(longlong param_1)

{
  int iVar1;
  
  iVar1 = _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x18),&DAT_1467cd0b0,0x50);
  return iVar1 != 0;
}



// FUNCTION 1432d0ab0 FUN_1432d0ab0 body=106 status=ok
// SIG undefined FUN_1432d0ab0(void)

void FUN_1432d0ab0(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (longlong *)0x0) {
    param_2 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
  }
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x50))(param_2,0x18);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &PTR_FUN_144f70a50;
    *puVar1 = &PTR_FUN_145af8380;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)(puVar1 + 2) = 0xb;
    *(undefined1 *)((longlong)puVar1 + 0x14) = 0;
    return;
  }
  return;
}



// FUNCTION 1432d0b20 FUN_1432d0b20 body=182 status=ok
// SIG undefined FUN_1432d0b20(void)

undefined8 *
FUN_1432d0b20(undefined8 *param_1,longlong *param_2,undefined4 *param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 *param_9)

{
  undefined4 uVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145af83a0;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)(param_1 + 2) = 10;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  uVar1 = param_3[1];
  *(undefined4 *)(param_1 + 4) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  param_1[3] = param_2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = param_5;
  *(undefined4 *)(param_1 + 6) = param_6;
  *(undefined4 *)(param_1 + 5) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_7;
  *(undefined4 *)(param_1 + 7) = param_8;
  *(undefined4 *)((longlong)param_1 + 0x3c) = *param_9;
  return param_1;
}



// FUNCTION 1432d0bf0 FUN_1432d0bf0 body=168 status=ok
// SIG undefined FUN_1432d0bf0(void)

void FUN_1432d0bf0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 local_res10 [6];
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_2 == (longlong *)0x0) {
    param_2 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
  }
  lVar1 = (**(code **)(*param_2 + 0x50))(param_2,0x40);
  if (lVar1 != 0) {
    local_18 = *(undefined4 *)(param_1 + 0x20);
    local_14 = *(undefined4 *)(param_1 + 0x24);
    local_res10[0] = *(undefined4 *)(param_1 + 0x3c);
    FUN_1432d0b20(lVar1,*(undefined8 *)(param_1 + 0x18),&local_18,*(undefined4 *)(param_1 + 0x28),
                  *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),
                  *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),local_res10);
    return;
  }
  return;
}



// FUNCTION 1432d0ca0 FUN_1432d0ca0 body=83 status=ok
// SIG undefined FUN_1432d0ca0(void)

undefined8 * FUN_1432d0ca0(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145af83c0;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  if (param_2 != 0) {
    FUN_1432d0e40();
  }
  return param_1;
}



// FUNCTION 1432d0d00 FUN_1432d0d00 body=132 status=ok
// SIG undefined FUN_1432d0d00(void)

void FUN_1432d0d00(RefCountImplCore *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_145af83c0;
  if (*(RefCountImpl **)(param_1 + 0x30) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x30));
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + (lVar2 + -1) * 8);
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
    }
    puVar1 = puVar1 + -1;
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1432d0d90 FUN_1432d0d90 body=44 status=ok
// SIG undefined FUN_1432d0d90(void)

void FUN_1432d0d90(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar2 = 0;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      do {
        lVar1 = uVar2 * 8;
        uVar2 = uVar2 + 1;
        *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + lVar1) + 0x14) = 1;
      } while (uVar2 < *(ulonglong *)(param_1 + 0x18));
    }
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  return;
}



// FUNCTION 1432d0dd0 GetSourceBufferSize body=4 status=ok
// SIG undefined GetSourceBufferSize(void)

undefined4 FVorbisAudioInfo::GetSourceBufferSize(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// FUNCTION 1432d0de0 GetFilter body=9 status=ok
// SIG undefined GetFilter(void)

undefined8 Scaleform::Render::FilterSet::GetFilter(longlong param_1,longlong param_2)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x10) + param_2 * 8);
}



// FUNCTION 1432d0df0 FUN_1432d0df0 body=61 status=ok
// SIG undefined FUN_1432d0df0(void)

void FUN_1432d0df0(longlong param_1,longlong param_2,RefCountImpl *param_3)

{
  undefined8 *puVar1;
  RefCountImpl *this;
  
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + param_2 * 8);
  if (param_3 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_3);
  }
  this = (RefCountImpl *)*puVar1;
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  *puVar1 = param_3;
  return;
}



// FUNCTION 1432d0e40 FUN_1432d0e40 body=184 status=ok
// SIG undefined FUN_1432d0e40(void)

void FUN_1432d0e40(longlong param_1,RefCountImpl *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if ((*(longlong *)(param_1 + 0x18) == 1) &&
     (plVar2 = *(longlong **)(param_1 + 0x10), *(int *)(*plVar2 + 0x10) == 0xb)) {
    if (param_2 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(param_2);
    }
    if ((RefCountImpl *)*plVar2 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)*plVar2);
    }
    *plVar2 = (longlong)param_2;
    return;
  }
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  FUN_1432d1b00(param_1 + 0x10,param_1 + 0x10,*(longlong *)(param_1 + 0x18) + 1);
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + (*(longlong *)(param_1 + 0x18) + -1) * 8);
  if (puVar1 != (undefined8 *)0x0) {
    if (param_2 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(param_2);
    }
    *puVar1 = param_2;
  }
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(param_2);
  }
  return;
}



// FUNCTION 1432d0f00 FUN_1432d0f00 body=149 status=ok
// SIG undefined FUN_1432d0f00(void)

void FUN_1432d0f00(longlong param_1,undefined8 param_2,RefCountImpl *param_3)

{
  longlong *plVar1;
  RefCountImpl *local_res8;
  
  if ((*(longlong *)(param_1 + 0x18) == 1) &&
     (plVar1 = *(longlong **)(param_1 + 0x10), *(int *)(*plVar1 + 0x10) == 0xb)) {
    if (param_3 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(param_3);
    }
    if ((RefCountImpl *)*plVar1 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)*plVar1);
    }
    *plVar1 = (longlong)param_3;
  }
  else {
    if (param_3 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(param_3);
    }
    local_res8 = param_3;
    FUN_1432d19c0(param_1 + 0x10,param_2,&local_res8);
    if (param_3 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(param_3);
    }
  }
  return;
}



// FUNCTION 1432d0fa0 FUN_1432d0fa0 body=323 status=ok
// SIG undefined FUN_1432d0fa0(void)

void FUN_1432d0fa0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  void *_Dst;
  RefCountImpl *pRVar2;
  undefined8 *puVar3;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x18) == 1) {
    FUN_1432d1b00(plVar1,plVar1,0);
  }
  else {
    pRVar2 = *(RefCountImpl **)(*plVar1 + param_2 * 8);
    if (pRVar2 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(pRVar2);
    }
    _Dst = (void *)(*plVar1 + param_2 * 8);
    memmove(_Dst,(void *)((longlong)_Dst + 8),(*(longlong *)(param_1 + 0x18) - param_2) * 8 - 8);
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + -1;
  }
  if ((*(longlong *)(param_1 + 0x18) == 0) && (*(char *)(param_1 + 0x29) != '\0')) {
    if (*(longlong *)(param_1 + 0x30) == 0) {
      puVar3 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x18);
      if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        puVar3[1] = 0;
        *puVar3 = &PTR_FUN_144f70a50;
        *puVar3 = &PTR_FUN_145af8380;
        *(undefined4 *)(puVar3 + 1) = 1;
        *(undefined4 *)(puVar3 + 2) = 0xb;
        *(undefined1 *)((longlong)puVar3 + 0x14) = 0;
      }
      if (*(RefCountImpl **)(param_1 + 0x30) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x30));
      }
      *(undefined8 **)(param_1 + 0x30) = puVar3;
    }
    if (*(RefCountImpl **)(param_1 + 0x30) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_1 + 0x30));
    }
    pRVar2 = *(RefCountImpl **)(param_1 + 0x30);
    FUN_1432d1b00(plVar1,plVar1,*(longlong *)(param_1 + 0x18) + 1);
    puVar3 = (undefined8 *)(*plVar1 + (*(longlong *)(param_1 + 0x18) + -1) * 8);
    if (puVar3 != (undefined8 *)0x0) {
      if (pRVar2 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(pRVar2);
      }
      *puVar3 = pRVar2;
    }
    if (pRVar2 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(pRVar2);
    }
  }
  return;
}



// FUNCTION 1432d10f0 FUN_1432d10f0 body=362 status=ok
// SIG undefined FUN_1432d10f0(void)

void FUN_1432d10f0(longlong param_1,longlong param_2)

{
  void *_Dst;
  RefCountImpl *pRVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar3 * 8) == param_2) {
        if (*(longlong *)(param_1 + 0x18) == 1) {
          FUN_1432d1b00(param_1 + 0x10,param_1 + 0x10,0);
        }
        else {
          pRVar1 = *(RefCountImpl **)(*(longlong *)(param_1 + 0x10) + uVar3 * 8);
          if (pRVar1 != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::Release(pRVar1);
          }
          _Dst = (void *)(*(longlong *)(param_1 + 0x10) + uVar3 * 8);
          memmove(_Dst,(void *)((longlong)_Dst + 8),(*(longlong *)(param_1 + 0x18) - uVar3) * 8 - 8)
          ;
          *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + -1;
        }
        uVar3 = uVar3 - 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ulonglong *)(param_1 + 0x18));
  }
  if ((*(longlong *)(param_1 + 0x18) == 0) && (*(char *)(param_1 + 0x29) != '\0')) {
    if (*(longlong *)(param_1 + 0x30) == 0) {
      puVar2 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        puVar2[1] = 0;
        *puVar2 = &PTR_FUN_144f70a50;
        *puVar2 = &PTR_FUN_145af8380;
        *(undefined4 *)(puVar2 + 1) = 1;
        *(undefined4 *)(puVar2 + 2) = 0xb;
        *(undefined1 *)((longlong)puVar2 + 0x14) = 0;
      }
      if (*(RefCountImpl **)(param_1 + 0x30) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x30));
      }
      *(undefined8 **)(param_1 + 0x30) = puVar2;
    }
    if (*(RefCountImpl **)(param_1 + 0x30) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_1 + 0x30));
    }
    pRVar1 = *(RefCountImpl **)(param_1 + 0x30);
    FUN_1432d1b00(param_1 + 0x10,param_1 + 0x10,*(longlong *)(param_1 + 0x18) + 1);
    puVar2 = (undefined8 *)
             (*(longlong *)(param_1 + 0x10) + (*(longlong *)(param_1 + 0x18) + -1) * 8);
    if (puVar2 != (undefined8 *)0x0) {
      if (pRVar1 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(pRVar1);
      }
      *puVar2 = pRVar1;
    }
    if (pRVar1 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(pRVar1);
    }
  }
  return;
}



// FUNCTION 1432d1260 IsDynamicResolutionEnabled body=5 status=ok
// SIG undefined IsDynamicResolutionEnabled(void)

undefined1 UGameUserSettings::IsDynamicResolutionEnabled(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x29);
}



// FUNCTION 1432d1270 FUN_1432d1270 body=199 status=ok
// SIG undefined FUN_1432d1270(void)

void FUN_1432d1270(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  
  *(char *)(param_1 + 0x29) = param_2;
  if (param_2 == '\0') {
    if ((*(int *)(param_1 + 0x18) == 1) && (*(int *)(**(longlong **)(param_1 + 0x10) + 0x10) == 0xb)
       ) {
      FUN_1432d1a90(param_1 + 0x10,0);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x18) == 0) {
    if (*(longlong *)(param_1 + 0x30) == 0) {
      puVar1 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x18);
      if (puVar1 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)0x0;
      }
      else {
        puVar1[1] = 0;
        *puVar1 = &PTR_FUN_144f70a50;
        *puVar1 = &PTR_FUN_145af8380;
        *(undefined4 *)(puVar1 + 1) = 1;
        *(undefined4 *)(puVar1 + 2) = 0xb;
        *(undefined1 *)((longlong)puVar1 + 0x14) = 0;
      }
      if (*(RefCountImpl **)(param_1 + 0x30) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x30));
      }
      *(undefined8 **)(param_1 + 0x30) = puVar1;
    }
    FUN_1432d0e40(param_1,*(undefined8 *)(param_1 + 0x30));
    return;
  }
  return;
}



// FUNCTION 1432d1340 FUN_1432d1340 body=279 status=ok
// SIG undefined FUN_1432d1340(void)

undefined8 * FUN_1432d1340(longlong param_1,char param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  RefCountImpl *this;
  ulonglong uVar3;
  
  if (param_3 == (longlong *)0x0) {
    param_3 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
  }
  puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x50))(param_3,0x38);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar2[1] = 0;
  uVar3 = 0;
  *puVar2 = &PTR_FUN_144f70a50;
  *puVar2 = &PTR_FUN_145af83c0;
  *(undefined4 *)(puVar2 + 1) = 1;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined2 *)(puVar2 + 5) = 0;
  puVar2[6] = 0;
  *(undefined1 *)((longlong)puVar2 + 0x29) = *(undefined1 *)(param_1 + 0x29);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    do {
      if (param_2 == '\0') {
        FUN_1432d0e40(puVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + uVar3 * 8));
      }
      else {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + uVar3 * 8);
        this = (RefCountImpl *)(**(code **)(*plVar1 + 8))(plVar1,param_3);
        FUN_1432d0e40(puVar2,this);
        if (this != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(this);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ulonglong *)(param_1 + 0x18));
  }
  return puVar2;
}



// FUNCTION 1432d1460 IsContributing body=107 status=ok
// SIG undefined IsContributing(void)

undefined8 Scaleform::Render::FilterSet::IsContributing(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  ulonglong uVar3;
  
  if (*(char *)(param_1 + 0x29) != '\0') {
    return 1;
  }
  uVar3 = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + uVar3 * 8);
      if ((plVar1 != (longlong *)0x0) && (cVar2 = (**(code **)(*plVar1 + 0x10))(), cVar2 != '\0')) {
        return 1;
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
    } while (uVar3 < *(ulonglong *)(param_1 + 0x18));
  }
  return 0;
}



// FUNCTION 1432d14e0 CanCacheAcrossTransform body=143 status=ok
// SIG undefined CanCacheAcrossTransform(void)

undefined8
Scaleform::Render::FilterSet::CanCacheAcrossTransform
          (longlong param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  longlong *plVar1;
  char cVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + uVar3 * 8);
      if ((plVar1 != (longlong *)0x0) &&
         (cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,param_3,param_4), cVar2 == '\0')) {
        return 0;
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
    } while (uVar3 < *(ulonglong *)(param_1 + 0x18));
  }
  return 1;
}



// FUNCTION 1432d1570 FUN_1432d1570 body=179 status=ok
// SIG undefined FUN_1432d1570(void)

undefined8 * FUN_1432d1570(undefined8 *param_1,undefined8 param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145af82a0;
  *(undefined4 *)(param_1 + 2) = 3;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  FUN_1432d1630(param_1 + 3);
  param_4 = param_4 * 20.0;
  *param_1 = &PTR_FUN_145af8320;
  *(float *)((longlong)param_1 + 0x4c) = param_3;
  *(float *)(param_1 + 9) = param_4;
  fVar1 = _guard_xfg_dispatch_icall_nop(param_3);
  fVar2 = _guard_xfg_dispatch_icall_nop(param_3);
  *(float *)(param_1 + 5) = fVar1 * param_4;
  *(float *)((longlong)param_1 + 0x2c) = fVar2 * param_4;
  return param_1;
}



// FUNCTION 1432d1630 FUN_1432d1630 body=132 status=ok
// SIG undefined FUN_1432d1630(void)

undefined4 * FUN_1432d1630(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  lVar4 = 2;
  param_1[6] = param_2[6];
  puVar3 = param_2 + 7;
  lVar2 = 0x1c - (longlong)puVar3;
  do {
    *(undefined4 *)((longlong)param_1 + lVar2 + (longlong)puVar3) = *puVar3;
    puVar3 = puVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  if (*(RefCountImpl **)(param_2 + 10) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_2 + 10));
  }
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  return param_1;
}



// FUNCTION 1432d16c0 FUN_1432d16c0 body=179 status=ok
// SIG undefined FUN_1432d16c0(void)

undefined8 * FUN_1432d16c0(undefined8 *param_1,undefined8 param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145af82a0;
  *(undefined4 *)(param_1 + 2) = 1;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  FUN_1432d1630(param_1 + 3);
  param_4 = param_4 * 20.0;
  *param_1 = &PTR_FUN_145af82e0;
  *(float *)((longlong)param_1 + 0x4c) = param_3;
  *(float *)(param_1 + 9) = param_4;
  fVar1 = _guard_xfg_dispatch_icall_nop(param_3);
  fVar2 = _guard_xfg_dispatch_icall_nop(param_3);
  *(float *)(param_1 + 5) = fVar1 * param_4;
  *(float *)((longlong)param_1 + 0x2c) = fVar2 * param_4;
  return param_1;
}



// FUNCTION 1432d1780 FUN_1432d1780 body=106 status=ok
// SIG undefined FUN_1432d1780(void)

RefCountImplCore * FUN_1432d1780(RefCountImplCore *param_1,uint param_2)

{
  if (*(RefCountImpl **)(param_1 + 0x40) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x40));
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1432d17f0 FUN_1432d17f0 body=99 status=ok
// SIG undefined FUN_1432d17f0(void)

RefCountImplCore * FUN_1432d17f0(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145af8360;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1432d1860 FUN_1432d1860 body=107 status=ok
// SIG undefined FUN_1432d1860(void)

RefCountImplCore * FUN_1432d1860(RefCountImplCore *param_1,ulonglong param_2)

{
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1432d18d0 FUN_1432d18d0 body=89 status=ok
// SIG undefined FUN_1432d18d0(void)

undefined8 FUN_1432d18d0(undefined8 param_1,ulonglong param_2)

{
  FUN_1432d0d00();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1432d1930 FUN_1432d1930 body=121 status=ok
// SIG undefined FUN_1432d1930(void)

RefCountImplCore * FUN_1432d1930(RefCountImplCore *param_1,ulonglong param_2)

{
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  }
  if (*(RefCountImpl **)(param_1 + 0x40) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x40));
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1432d19c0 FUN_1432d19c0 body=197 status=ok
// SIG undefined FUN_1432d19c0(void)

void FUN_1432d19c0(longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  uVar2 = param_1[1];
  uVar1 = uVar2 + 1;
  FUN_1432d1b00(param_1,param_1,uVar1);
  if (uVar2 < uVar1) {
    puVar3 = (undefined8 *)(*param_1 + uVar2 * 8);
    for (lVar4 = uVar1 - uVar2; lVar4 != 0; lVar4 = lVar4 + -1) {
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = 0;
      }
      puVar3 = puVar3 + 1;
    }
  }
  if (param_2 < param_1[1] - 1U) {
    _Src = (void *)(*param_1 + param_2 * 8);
    memmove((void *)((longlong)_Src + 8),_Src,(param_1[1] - param_2) * 8 - 8);
  }
  puVar3 = (undefined8 *)(*param_1 + param_2 * 8);
  if (puVar3 != (undefined8 *)0x0) {
    if ((RefCountImpl *)*param_3 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef((RefCountImpl *)*param_3);
    }
    *puVar3 = *param_3;
  }
  return;
}



// FUNCTION 1432d1a90 FUN_1432d1a90 body=108 status=ok
// SIG undefined FUN_1432d1a90(void)

void FUN_1432d1a90(longlong *param_1,longlong param_2)

{
  void *_Dst;
  RefCountImpl *this;
  
  if (param_1[1] == 1) {
    FUN_1432d1b00(param_1,param_1,0);
    return;
  }
  this = *(RefCountImpl **)(*param_1 + param_2 * 8);
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  _Dst = (void *)(*param_1 + param_2 * 8);
  memmove(_Dst,(void *)((longlong)_Dst + 8),(param_1[1] - param_2) * 8 - 8);
  param_1[1] = param_1[1] + -1;
  return;
}



// FUNCTION 1432d1b00 FUN_1432d1b00 body=174 status=ok
// SIG undefined FUN_1432d1b00(void)

void FUN_1432d1b00(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    puVar1 = (undefined8 *)(*param_1 + ((param_3 - 1) + lVar2) * 8);
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
      }
      puVar1 = puVar1 + -1;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1432bc070(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1432bc070(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 1432d1bb0 ~MeshBase body=95 status=ok
// SIG void ~MeshBase(MeshBase * this)

/* public: virtual __cdecl Scaleform::Render::MeshBase::~MeshBase(void) __ptr64 */

void __thiscall Scaleform::Render::MeshBase::~MeshBase(MeshBase *this)

{
                    /* 0x32d1bb0  32  ??1MeshBase@Render@Scaleform@@UEAA@XZ */
  *(undefined ***)this = &PTR_FUN_145af8400;
  *(undefined ***)(this + 0x10) = &PTR_LAB_145af8420;
  if (*(longlong **)(this + 0x50) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(this + 0x50) + 0x10))();
  }
  *(undefined8 *)(this + 0x50) = 0;
  if (*(RefCountImpl **)(this + 0x58) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(this + 0x58));
  }
  if (*(longlong **)(this + 0x50) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(this + 0x50) + 0x10))();
  }
  RefCountImplCore::~RefCountImplCore((RefCountImplCore *)this);
  return;
}



// FUNCTION 1432d1c40 Mesh body=116 status=ok
// SIG undefined Mesh(void)

undefined8 * Scaleform::Render::Mesh::Mesh(undefined8 *param_1)

{
  FUN_1432d4c60();
  *param_1 = &PTR_FUN_145af8430;
  param_1[2] = &PTR_LAB_145af8450;
  param_1[0x12] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x16] = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  return param_1;
}



// FUNCTION 1432d1cc0 ~Mesh body=281 status=ok
// SIG void ~Mesh(Mesh * this)

/* public: virtual __cdecl Scaleform::Render::Mesh::~Mesh(void) __ptr64 */

void __thiscall Scaleform::Render::Mesh::~Mesh(Mesh *this)

{
  ulonglong uVar1;
  Mesh *pMVar2;
  
                    /* 0x32d1cc0  31  ??1Mesh@Render@Scaleform@@UEAA@XZ */
  uVar1 = *(ulonglong *)(this + 0x90);
  *(undefined ***)this = &PTR_FUN_145af8430;
  *(undefined ***)(this + 0x10) = &PTR_LAB_145af8450;
  if (uVar1 < 3) {
    pMVar2 = this + 0x98;
  }
  else {
    pMVar2 = *(Mesh **)(this + 0x98);
  }
  while (uVar1 != 0) {
    uVar1 = uVar1 - 1;
    if (*(longlong *)pMVar2 != 0) {
      FUN_1432f5b50(*(longlong *)pMVar2,this);
    }
    pMVar2 = pMVar2 + 8;
  }
  if (*(longlong *)(this + 0x28) != 0) {
    *(undefined8 *)(*(longlong *)(this + 0x18) + 0x10) = *(undefined8 *)(this + 0x20);
    *(undefined8 *)(*(longlong *)(this + 0x20) + 8) = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(this + 0x20) = 0xffffffffffffffff;
  }
  if (2 < *(ulonglong *)(this + 0x90)) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(this + 0x98));
  }
  *(undefined ***)this = &PTR_FUN_145af8400;
  *(undefined ***)(this + 0x10) = &PTR_LAB_145af8420;
  if (*(longlong **)(this + 0x50) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(this + 0x50) + 0x10))();
  }
  *(undefined8 *)(this + 0x50) = 0;
  if (*(RefCountImpl **)(this + 0x58) != (RefCountImpl *)0x0) {
    RefCountImpl::Release(*(RefCountImpl **)(this + 0x58));
  }
  if (*(longlong **)(this + 0x50) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(this + 0x50) + 0x10))();
  }
  RefCountImplCore::~RefCountImplCore((RefCountImplCore *)this);
  return;
}



// FUNCTION 1432d1de0 FUN_1432d1de0 body=109 status=ok
// SIG undefined FUN_1432d1de0(void)

ulonglong FUN_1432d1de0(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(ulonglong *)(param_1 + 0x90);
  uVar3 = 0;
  if (uVar1 < 3) {
    param_1 = param_1 + 0x98;
  }
  else {
    param_1 = *(longlong *)(param_1 + 0x98);
  }
  uVar4 = uVar3;
  if (uVar1 != 0) {
    do {
      uVar2 = Scaleform::Render::MeshCacheItem::GetUseStatus(*(undefined8 *)(param_1 + uVar4 * 8));
      if ((int)uVar3 < (int)uVar2) {
        uVar3 = (ulonglong)uVar2;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return uVar3;
}



// FUNCTION 1432d1e60 FUN_1432d1e60 body=258 status=ok
// SIG undefined FUN_1432d1e60(void)

ulonglong FUN_1432d1e60(int param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  ulonglong uVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  uint *puVar7;
  
  puVar7 = (uint *)(*(longlong *)(param_2 + 8) + 4);
  uVar1 = *puVar7;
  while( true ) {
    if (uVar1 == 0) {
      return 0;
    }
    if ((uVar1 & 0xf00) == 0x100) break;
    uVar1 = puVar7[2];
    puVar7 = puVar7 + 2;
  }
  pcVar6 = (&PTR_DAT_1467cd100)[param_1];
  cVar2 = *pcVar6;
  if (cVar2 != '\0') {
    do {
      if (cVar2 == 'C') {
        uVar5 = 0x200;
LAB_1432d1f35:
        uVar3 = FUN_1432d5520(param_2,uVar5);
        if ((char)uVar3 == '\0') {
LAB_1432d1f1e:
          return uVar3 & 0xffffffffffffff00;
        }
      }
      else if (cVar2 == 'E') {
        uVar3 = FUN_1432d5490(param_2,0x1211,0xffff);
        pcVar4 = "FactorAlpha8";
LAB_1432d1f12:
        if (uVar3 != 0) {
          pcVar4 = (char *)0x0;
        }
        if (pcVar4 != (char *)0x0) goto LAB_1432d1f1e;
      }
      else {
        if (cVar2 == 'U') {
          uVar5 = 0x300;
          goto LAB_1432d1f35;
        }
        if (cVar2 == 'W') {
          uVar3 = FUN_1432d5490(param_2,0x2211,0xffff);
          pcVar4 = "T0Weight8";
          goto LAB_1432d1f12;
        }
      }
      cVar2 = pcVar6[1];
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
  }
  return 1;
}



// FUNCTION 1432d1f70 FUN_1432d1f70 body=56 status=ok
// SIG undefined FUN_1432d1f70(void)

int * FUN_1432d1f70(int *param_1,int param_2)

{
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[4] = 4;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined **)(param_1 + 6) = &DAT_1467cdbb8;
  if (param_2 == 1) {
    param_1[4] = 1;
    *(undefined **)(param_1 + 6) = &DAT_1467cdb40;
  }
  return param_1;
}



// FUNCTION 1432d1fe0 FUN_1432d1fe0 body=37 status=ok
// SIG undefined FUN_1432d1fe0(void)

undefined4 * FUN_1432d1fe0(undefined4 *param_1,undefined8 param_2,undefined2 param_3)

{
  *param_1 = 4;
  *(undefined **)(param_1 + 6) = &DAT_1467cdbb8;
  *(undefined8 *)(param_1 + 2) = param_2;
  param_1[4] = 6;
  *(undefined2 *)(param_1 + 5) = param_3;
  return param_1;
}



// FUNCTION 1432d2010 FUN_1432d2010 body=61 status=ok
// SIG undefined FUN_1432d2010(void)

undefined4 * FUN_1432d2010(undefined4 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  *param_1 = 5;
  *(undefined8 *)(param_1 + 2) = param_2;
  param_1[4] = 6;
  uVar1 = FUN_143321a80(param_2);
  *(undefined1 *)(param_1 + 5) = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x15) = 1;
  *(undefined **)(param_1 + 6) = &DAT_1467cdbb8;
  return param_1;
}



// FUNCTION 1432d2060 FUN_1432d2060 body=129 status=ok
// SIG undefined FUN_1432d2060(void)

void FUN_1432d2060(RefCountNTSImplCore *param_1)

{
  RefCountNTSImplCore *pRVar1;
  longlong lVar2;
  RefCountNTSImplCore *pRVar3;
  RefCountNTSImplCore *local_res8;
  
  *(undefined ***)param_1 = &PTR_FUN_145af8460;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    local_res8 = param_1;
    FUN_1432d4650(*(longlong *)(param_1 + 0x38) + 0x18,&local_res8);
  }
  lVar2 = 2;
  pRVar3 = param_1 + 0x30;
  do {
    pRVar1 = pRVar3 + -8;
    pRVar3 = pRVar3 + -8;
    lVar2 = lVar2 + -1;
    if (*(RefCountImpl **)pRVar1 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)pRVar1);
    }
  } while (lVar2 != 0);
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  return;
}



// FUNCTION 1432d20f0 FUN_1432d20f0 body=7 status=ok
// SIG undefined FUN_1432d20f0(void)

bool FUN_1432d20f0(uint param_1)

{
  return param_1 < 3;
}



// FUNCTION 1432d2110 FUN_1432d2110 body=295 status=ok
// SIG undefined FUN_1432d2110(void)

undefined8 * FUN_1432d2110(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *local_res8;
  
  lVar2 = FUN_1432d4a30(param_1 + 0x18);
  if (-1 < lVar2) {
    puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0x20 + lVar2 * 0x18);
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + 1;
    return puVar3;
  }
  puVar3 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))
                     (*(longlong **)(param_1 + 0x10),0x40);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_FUN_145af8460;
    FUN_1432d4d40(puVar3 + 2,param_2);
    puVar3[7] = 0;
    local_res8 = puVar3;
    FUN_1432d48e0(param_1 + 0x18,param_1 + 0x18,&local_res8,
                  (ulonglong)
                  ((uint)(byte)(*(char *)((longlong)puVar3 + 0x1b) * '\x03' +
                               *(char *)((longlong)puVar3 + 0x1a)) << 2 ^
                  (uint)(byte)(*(char *)((longlong)puVar3 + 0x19) * '\x03' + *(char *)(puVar3 + 3)))
                  << 2 ^ (ulonglong)*(uint *)puVar3[6] ^ (ulonglong)puVar3[4] >> 2 ^
                  (ulonglong)*(uint *)((longlong)puVar3 + 0x14) ^ puVar3[5] ^
                  (ulonglong)*(uint *)(puVar3 + 2));
    puVar3[7] = param_1;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1432d2240 FUN_1432d2240 body=1013 status=ok
// SIG undefined FUN_1432d2240(void)

/* WARNING: Removing unreachable block (ram,0x0001432d25bf) */
/* WARNING: Removing unreachable block (ram,0x0001432d245a) */
/* WARNING: Removing unreachable block (ram,0x0001432d246b) */
/* WARNING: Removing unreachable block (ram,0x0001432d25d8) */
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_1432d2240(undefined8 param_1,int *param_2,longlong *param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  RefCountImpl *pRVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 local_58;
  undefined2 local_50 [4];
  RefCountImpl *local_48;
  undefined8 local_40 [3];
  
  iVar2 = *param_2;
  switch(iVar2) {
  case 1:
    uVar4 = *(undefined8 *)(param_2 + 6);
    puVar5 = local_50;
    lVar10 = 2;
    local_58 = 1;
    lVar8 = 2;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    local_48 = (RefCountImpl *)0x0;
    local_40[0] = 0;
    local_40[1] = uVar4;
    uVar4 = FUN_1432d2110(param_1,&local_58);
    puVar9 = local_40 + 1;
    do {
      puVar1 = puVar9 + 0xffffffffffffffff;
      puVar9 = puVar9 + 0xffffffffffffffff;
      lVar10 = lVar10 + -1;
      if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
      }
    } while (lVar10 != 0);
    break;
  case 2:
    lVar10 = 2;
    uVar4 = *(undefined8 *)(param_2 + 6);
    lVar8 = 2;
    puVar5 = local_50;
    local_58 = CONCAT44(param_2[2],2);
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    local_48 = (RefCountImpl *)0x0;
    local_40[0] = 0;
    local_40[1] = uVar4;
    uVar4 = FUN_1432d2110(param_1,&local_58);
    puVar9 = local_40 + 1;
    do {
      puVar1 = puVar9 + 0xffffffffffffffff;
      puVar9 = puVar9 + 0xffffffffffffffff;
      lVar10 = lVar10 + -1;
      if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
      }
    } while (lVar10 != 0);
    break;
  case 3:
  case 6:
    uVar3 = param_2[4];
    uVar4 = *(undefined8 *)(param_2 + 6);
    lVar10 = 2;
    lVar8 = 2;
    local_58 = (ulonglong)uVar3;
    puVar5 = local_50;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    local_48 = (RefCountImpl *)0x0;
    local_40[0] = 0;
    if (iVar2 == 6) {
      local_58 = CONCAT44(param_2[2],uVar3);
    }
    local_40[1] = uVar4;
    uVar4 = FUN_1432d2110(param_1,&local_58);
    puVar9 = local_40 + 1;
    do {
      puVar1 = puVar9 + 0xffffffffffffffff;
      puVar9 = puVar9 + 0xffffffffffffffff;
      lVar10 = lVar10 + -1;
      if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
      }
    } while (lVar10 != 0);
    break;
  case 4:
    plVar6 = *(longlong **)(param_2 + 2);
    if ((plVar6 == (longlong *)0x0) ||
       (pRVar7 = (RefCountImpl *)(**(code **)(*plVar6 + 0xa8))(plVar6,param_4),
       pRVar7 == (RefCountImpl *)0x0)) {
      uVar4 = *(undefined8 *)(param_2 + 6);
      puVar5 = local_50;
      lVar10 = 2;
      local_58 = 2;
      lVar8 = 2;
      do {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      local_48 = (RefCountImpl *)0x0;
      local_40[0] = 0;
      local_40[1] = uVar4;
      uVar4 = FUN_1432d2110(param_1,&local_58);
      puVar9 = local_40 + 1;
      do {
        puVar1 = puVar9 + 0xffffffffffffffff;
        puVar9 = puVar9 + 0xffffffffffffffff;
        lVar10 = lVar10 + -1;
        if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
        }
      } while (lVar10 != 0);
    }
    else {
      iVar2 = param_2[5];
      lVar8 = 2;
      uVar4 = *(undefined8 *)(param_2 + 6);
      lVar10 = 2;
      puVar5 = local_50;
      local_58 = (ulonglong)(uint)param_2[4];
      do {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      local_50[1] = 0;
      local_50[0] = (short)iVar2;
      local_40[1] = uVar4;
      Scaleform::RefCountImpl::AddRef(pRVar7);
      local_40[0] = 0;
      local_48 = pRVar7;
      uVar4 = FUN_1432d2110(param_1,&local_58);
      puVar9 = local_40 + 1;
      do {
        puVar1 = puVar9 + 0xffffffffffffffff;
        puVar9 = puVar9 + 0xffffffffffffffff;
        lVar8 = lVar8 + -1;
        if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
        }
      } while (lVar8 != 0);
    }
    break;
  case 5:
    plVar6 = (longlong *)FUN_1432d2a10(param_1,*(undefined8 *)(param_2 + 2),param_5);
    if ((longlong *)*param_3 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_3 + 0x10))();
    }
    *param_3 = (longlong)plVar6;
    if (plVar6 != (longlong *)0x0) {
      iVar2 = param_2[5];
      pRVar7 = (RefCountImpl *)(**(code **)(*plVar6 + 0xa8))(plVar6,param_4);
      lVar10 = 2;
      local_58 = (ulonglong)(uint)param_2[4];
      local_40[1] = *(undefined8 *)(param_2 + 6);
      puVar5 = local_50;
      lVar8 = 2;
      do {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      local_50[1] = 0;
      local_50[0] = (short)iVar2;
      if (pRVar7 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(pRVar7);
      }
      local_40[0] = 0;
      local_48 = pRVar7;
      uVar4 = FUN_1432d2110(param_1,&local_58);
      puVar9 = local_40 + 1;
      do {
        puVar1 = puVar9 + 0xffffffffffffffff;
        puVar9 = puVar9 + 0xffffffffffffffff;
        lVar10 = lVar10 + -1;
        if ((RefCountImpl *)*puVar1 != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar1);
        }
      } while (lVar10 != 0);
      return uVar4;
    }
  default:
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 1432d2660 FUN_1432d2660 body=789 status=ok
// SIG undefined FUN_1432d2660(void)

/* WARNING: Removing unreachable block (ram,0x0001432d28ce) */
/* WARNING: Removing unreachable block (ram,0x0001432d28ec) */
/* WARNING: Type propagation algorithm not settling */

RefCountImpl *
FUN_1432d2660(undefined8 param_1,uint param_2,undefined8 param_3,uint *param_4,uint *param_5,
             longlong *param_6,longlong *param_7,undefined8 param_8,undefined4 param_9)

{
  byte *pbVar1;
  undefined8 *puVar2;
  RefCountImpl **ppRVar3;
  byte bVar4;
  RefCountImpl *this;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  RefCountImpl *this_00;
  undefined2 *puVar8;
  RefCountImpl *this_01;
  undefined1 *puVar9;
  longlong lVar10;
  RefCountImpl **ppRVar11;
  uint uVar12;
  undefined8 *puVar13;
  uint uVar14;
  longlong lVar15;
  uint local_88;
  uint local_84;
  undefined2 local_80 [4];
  RefCountImpl *local_78 [3];
  undefined4 local_60;
  undefined4 local_5c;
  undefined2 local_58 [4];
  undefined8 local_50;
  undefined8 local_48 [2];
  
  uVar12 = *param_4;
  plVar5 = *(longlong **)(param_4 + 2);
  plVar6 = *(longlong **)(param_5 + 2);
  uVar14 = *param_5;
  if (uVar12 == 5) {
    plVar5 = (longlong *)FUN_1432d2a10(param_1,plVar5,param_9);
    if ((longlong *)*param_6 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_6 + 0x10))();
    }
    *param_6 = (longlong)plVar5;
    uVar12 = 4;
  }
  if (uVar14 == 5) {
    plVar6 = (longlong *)FUN_1432d2a10(param_1,*(undefined8 *)(param_5 + 2),param_9);
    if ((longlong *)*param_7 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_7 + 0x10))();
    }
    *param_7 = (longlong)plVar6;
    uVar14 = 4;
  }
  puVar9 = &DAT_1467cd170;
  if (uVar12 == 6) {
    uVar12 = 3;
  }
  bVar4 = DAT_1467cd170;
  if (uVar14 == 6) {
    uVar14 = 3;
  }
  do {
    if (((bVar4 == uVar12) && (param_2 == (byte)puVar9[2])) &&
       (((byte)puVar9[1] == uVar14 || ((param_2 & 2) == 0)))) break;
    pbVar1 = puVar9 + 4;
    puVar9 = puVar9 + 4;
    bVar4 = *pbVar1;
  } while (*pbVar1 != 0);
  bVar4 = puVar9[3];
  puVar8 = local_80;
  uVar12 = 0;
  this_01 = (RefCountImpl *)0x0;
  local_88 = (uint)bVar4;
  lVar15 = 2;
  local_84 = 0;
  lVar10 = 2;
  do {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  local_78[1] = (RefCountImpl *)0x0;
  local_78[2] = (RefCountImpl *)param_3;
  local_78[0] = (RefCountImpl *)0x0;
  switch(bVar4) {
  case 1:
    break;
  case 2:
    local_84 = param_4[2];
    this_01 = (RefCountImpl *)0x0;
    break;
  case 3:
  case 4:
    if (*param_4 == 6) {
      local_84 = param_4[2];
    }
    break;
  case 9:
  case 10:
    uVar7 = (**(code **)(*plVar6 + 0xa8))(plVar6,param_8);
    FUN_142062c70(local_78 + 1,uVar7);
    local_80[1] = (undefined2)param_5[5];
  case 5:
  case 6:
  case 7:
  case 8:
    this_01 = local_78[1];
    this = local_78[0];
    this_00 = (RefCountImpl *)(**(code **)(*plVar5 + 0xa8))(plVar5,param_8);
    if (this_00 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(this_00);
    }
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(this);
    }
    local_80[0] = (undefined2)param_4[5];
    local_78[0] = this_00;
    break;
  default:
switchD_1432d27c2_default:
    ppRVar11 = local_78 + 2;
    do {
      ppRVar3 = ppRVar11 + 0xffffffffffffffff;
      ppRVar11 = ppRVar11 + 0xffffffffffffffff;
      lVar15 = lVar15 + -1;
      if (*ppRVar3 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*ppRVar3);
      }
    } while (lVar15 != 0);
    return this_01;
  }
  while( true ) {
    if (((int)local_88 < 5) || ((local_88 - 9 < 2) + 1 <= uVar12)) goto LAB_1432d292a;
    if (local_78[uVar12] == (RefCountImpl *)0x0) break;
    uVar12 = uVar12 + 1;
  }
  local_60 = 2;
  puVar8 = local_58;
  local_5c = 0xffff0000;
  lVar10 = 2;
  do {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  local_88 = 2;
  local_84 = 0xffff0000;
  local_80[0] = local_58[0];
  local_80[1] = local_58[1];
  local_50 = 0;
  local_48[0] = 0;
  local_48[1] = param_3;
  if (local_78[0] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_78[0]);
  }
  local_78[0] = (RefCountImpl *)0x0;
  if (this_01 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this_01);
  }
  local_78[1] = (RefCountImpl *)0x0;
  lVar10 = 2;
  puVar13 = local_48 + 1;
  local_78[2] = (RefCountImpl *)param_3;
  do {
    puVar2 = puVar13 + 0xffffffffffffffff;
    puVar13 = puVar13 + 0xffffffffffffffff;
    lVar10 = lVar10 + -1;
    if ((RefCountImpl *)*puVar2 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar2);
    }
  } while (lVar10 != 0);
LAB_1432d292a:
  this_01 = (RefCountImpl *)FUN_1432d2110(param_1,&local_88);
  goto switchD_1432d27c2_default;
}



// FUNCTION 1432d29b0 FUN_1432d29b0 body=28 status=ok
// SIG undefined FUN_1432d29b0(void)

void FUN_1432d29b0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_1432d4650(param_1 + 0x18,local_res10);
  return;
}



// FUNCTION 1432d29e0 AcceptNewCitizen body=28 status=ok
// SIG undefined AcceptNewCitizen(void)

void CPopulation::AcceptNewCitizen(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_1432d4530(param_1 + 0x20,local_res10);
  return;
}



// FUNCTION 1432d2a10 FUN_1432d2a10 body=292 status=ok
// SIG undefined FUN_1432d2a10(void)

longlong * FUN_1432d2a10(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *local_res10;
  longlong local_28;
  undefined4 local_20;
  
  if (param_2 == 0) {
    return (longlong *)0x0;
  }
  local_28 = param_2;
  local_20 = param_3;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar2 = FUN_143322050(param_2,param_3);
    lVar3 = FUN_1432d4ab0(param_1 + 0x20,&local_28,
                          *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 8) & uVar2);
    if (-1 < lVar3) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x20 + lVar3 * 0x18);
      (**(code **)(*plVar1 + 8))(plVar1);
      return plVar1;
    }
  }
  local_res10 = (longlong *)CONCAT44(local_res10._4_4_,3);
  lVar3 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x48,&local_res10);
  uVar4 = 0;
  if (lVar3 == 0) {
    local_res10 = (longlong *)0x0;
  }
  else {
    local_res10 = (longlong *)FUN_143322140(lVar3,param_1,param_2,param_3);
  }
  plVar1 = local_res10;
  if (local_res10[6] != 0) {
    uVar4 = FUN_143322050(local_res10[6],(int)local_res10[8]);
  }
  FUN_1432d4790(param_1 + 0x20,param_1 + 0x20,&local_res10,uVar4);
  return plVar1;
}



// FUNCTION 1432d2b40 FUN_1432d2b40 body=134 status=ok
// SIG undefined FUN_1432d2b40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1432d2b40(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145af8488;
  param_1[2] = &PTR_LAB_145af8490;
  *(undefined4 *)(param_1 + 1) = 1;
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  puVar1 = param_1 + 4;
  param_1[3] = param_2;
  *puVar1 = puVar1;
  param_1[5] = puVar1;
  if (*(int *)(param_2 + 0x10) - 5U < 6) {
    cVar2 = (*(int *)(param_2 + 0x10) - 9U < 2) + '\x01';
  }
  else {
    cVar2 = '\0';
  }
  _DAT_146b63138 = _DAT_146b63138 + 1;
  _DAT_146b6313c = _DAT_146b6313c + 1;
  *(char *)(param_1 + 6) = cVar2 + '\x01';
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  return param_1;
}



// FUNCTION 1432d2bd0 FUN_1432d2bd0 body=229 status=ok
// SIG undefined FUN_1432d2bd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1432d2bd0(RefCountImplCore *param_1)

{
  RefCountImplCore *pRVar1;
  longlong *plVar2;
  
  _DAT_146b6313c = _DAT_146b6313c + -1;
  *(undefined ***)param_1 = &PTR_FUN_145af8488;
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_145af8490;
  pRVar1 = *(RefCountImplCore **)(param_1 + 0x28);
  while (pRVar1 != param_1 + 0x20) {
    plVar2 = *(longlong **)(param_1 + 0x28);
    *(longlong *)(*plVar2 + 8) = plVar2[1];
    *(longlong *)plVar2[1] = *plVar2;
    *plVar2 = -1;
    plVar2[1] = -1;
    if (plVar2[4] != 0) {
      *(longlong *)(plVar2[2] + 8) = plVar2[3];
      *(longlong *)plVar2[3] = plVar2[2];
      plVar2[2] = -1;
      plVar2[3] = -1;
      plVar2[4] = 0;
    }
    (**(code **)(*DAT_146b62f28 + 0x60))();
    pRVar1 = *(RefCountImplCore **)(param_1 + 0x28);
  }
  FUN_1432d4e70(param_1 + 0x38);
  if (*(RefCountNTSImpl **)(param_1 + 0x18) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x18));
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_145af8468;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1432d2cc0 FUN_1432d2cc0 body=472 status=ok
// SIG undefined FUN_1432d2cc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1432d2cc0(longlong param_1,longlong *param_2,uint param_3,RefCountImpl *param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  undefined **local_28;
  RefCountImpl *local_20;
  
  plVar2 = *(longlong **)(param_1 + 0x28);
  uVar5 = 0;
  lVar1 = (**(code **)(*param_2 + 0x130))(param_2);
  lVar1 = (**(code **)(*(longlong *)(lVar1 + 8) + 0x10))(lVar1 + 8);
  plVar4 = (longlong *)0x0;
  while( true ) {
    plVar3 = plVar2;
    if (uVar5 == param_3) {
      if ((plVar4 != (longlong *)0x0) && ((int)plVar4[5] == 3)) {
        *(int *)(plVar4 + 9) = (int)plVar4[9] + 1;
        goto LAB_1432d2e0a;
      }
      if ((plVar3 == (longlong *)(param_1 + 0x20)) || ((int)plVar3[5] != 3)) {
        plVar2 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x50);
        plVar2[4] = 0;
        *(undefined4 *)(plVar2 + 5) = 3;
        plVar2[6] = 0;
        *(undefined1 *)(plVar2 + 7) = 0;
        plVar2[8] = param_1;
        *(undefined4 *)(plVar2 + 9) = 1;
        *(uint *)((longlong)plVar2 + 0x4c) = uVar5;
        plVar2[1] = *(longlong *)plVar3[1];
        *plVar2 = *plVar3;
        *(longlong **)(*plVar3 + 8) = plVar2;
        *plVar3 = (longlong)plVar2;
        goto LAB_1432d2e0a;
      }
    }
    if (plVar3 == (longlong *)(param_1 + 0x20)) goto LAB_1432d2e0a;
    if (param_3 - uVar5 < *(uint *)(plVar3 + 9)) break;
    uVar5 = uVar5 + *(uint *)(plVar3 + 9);
    plVar2 = (longlong *)plVar3[1];
    plVar4 = plVar3;
  }
  *(int *)(plVar3 + 9) = (int)plVar3[9] + 1;
  if (((((int)plVar3[5] != 2) ||
       (*(RefCountImpl **)(*(longlong *)(param_1 + 0x38) + 8 + (ulonglong)uVar5 * 0x10) != param_4))
      || (*(uint *)(lVar1 + 0x30) < *(uint *)(plVar3 + 9))) &&
     (*(undefined4 *)(plVar3 + 5) = 3, plVar3[4] != 0)) {
    *(longlong *)(plVar3[2] + 8) = plVar3[3];
    *(longlong *)plVar3[3] = plVar3[2];
    plVar3[2] = -1;
    plVar3[3] = -1;
    plVar3[4] = 0;
  }
LAB_1432d2e0a:
  local_28 = (undefined **)*param_5;
  if (local_28 != &PTR_LOOP_1467cd040) {
    *(int *)(*local_28 + 8) = *(int *)(*local_28 + 8) + 1;
  }
  if (param_4 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_4);
  }
  local_20 = param_4;
  FUN_1432d5550(param_1 + 0x38,param_3,&local_28);
  if (param_3 < *(uint *)(param_1 + 0x50)) {
    *(uint *)(param_1 + 0x50) = param_3;
  }
  _DAT_146b63140 = _DAT_146b63140 + 1;
  if (local_20 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_20);
  }
  if (local_28 != &PTR_LOOP_1467cd040) {
    FUN_1432c03a0(*local_28);
  }
  return 1;
}



// FUNCTION 1432d2ea0 FUN_1432d2ea0 body=424 status=ok
// SIG undefined FUN_1432d2ea0(void)

void FUN_1432d2ea0(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = 0;
  plVar4 = *(longlong **)(param_1 + 0x28);
  uVar7 = param_3;
  do {
    uVar1 = *(uint *)(plVar4 + 9);
    if (param_2 - uVar6 < uVar1) {
      if (param_2 != uVar6) {
        uVar2 = (uVar1 - param_2) + uVar6;
        uVar3 = uVar7;
        if (uVar2 < uVar7) {
          uVar3 = uVar2;
        }
        *(uint *)(plVar4 + 9) = uVar1 - uVar3;
        if (((int)plVar4[5] != 2) && (*(undefined4 *)(plVar4 + 5) = 3, plVar4[4] != 0)) {
          *(longlong *)(plVar4[2] + 8) = plVar4[3];
          *(longlong *)plVar4[3] = plVar4[2];
          plVar4[2] = -1;
          plVar4[3] = -1;
          plVar4[4] = 0;
        }
        uVar7 = uVar7 - uVar3;
        goto LAB_1432d2fb5;
      }
      if (uVar7 < uVar1) {
        *(uint *)(plVar4 + 9) = (int)plVar4[9] - uVar7;
        if (((int)plVar4[5] != 2) && (*(undefined4 *)(plVar4 + 5) = 3, plVar4[4] != 0)) {
          *(longlong *)(plVar4[2] + 8) = plVar4[3];
          *(longlong *)plVar4[3] = plVar4[2];
          plVar4[2] = -1;
          plVar4[3] = -1;
          plVar4[4] = 0;
        }
LAB_1432d3010:
        FUN_1432d58c0(param_1 + 0x38,param_2,param_3);
        if (param_2 < *(uint *)(param_1 + 0x50)) {
          *(uint *)(param_1 + 0x50) = param_2;
        }
        return;
      }
      plVar5 = (longlong *)plVar4[1];
      uVar7 = uVar7 - uVar1;
      *(longlong **)(*plVar4 + 8) = plVar5;
      *(longlong *)plVar4[1] = *plVar4;
      *plVar4 = -1;
      plVar4[1] = -1;
      if (plVar4[4] != 0) {
        *(longlong *)(plVar4[2] + 8) = plVar4[3];
        *(longlong *)plVar4[3] = plVar4[2];
        plVar4[2] = -1;
        plVar4[3] = -1;
        plVar4[4] = 0;
      }
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,plVar4);
    }
    else {
LAB_1432d2fb5:
      uVar6 = uVar6 + (int)plVar4[9];
      plVar5 = (longlong *)plVar4[1];
    }
    if ((uVar7 == 0) || (plVar4 = plVar5, plVar5 == (longlong *)(param_1 + 0x20)))
    goto LAB_1432d3010;
  } while( true );
}



// FUNCTION 1432d3050 FUN_1432d3050 body=196 status=ok
// SIG undefined FUN_1432d3050(void)

void FUN_1432d3050(longlong param_1,uint param_2,RefCountImpl *param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = (ulonglong)param_2 * 0x10 + *(longlong *)(param_1 + 0x38);
  if (*(RefCountImpl **)(lVar2 + 8) != param_3) {
    if (param_3 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(param_3);
    }
    if (*(RefCountImpl **)(lVar2 + 8) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar2 + 8));
    }
    *(RefCountImpl **)(lVar2 + 8) = param_3;
    iVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x28);
    uVar1 = *(uint *)(lVar2 + 0x48);
    while (uVar1 <= param_2) {
      iVar3 = iVar3 + *(int *)(lVar2 + 0x48);
      lVar2 = *(longlong *)(lVar2 + 8);
      uVar1 = *(int *)(lVar2 + 0x48) + iVar3;
    }
    *(undefined4 *)(lVar2 + 0x28) = 3;
    if (*(longlong *)(lVar2 + 0x20) != 0) {
      *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 8) = *(undefined8 *)(lVar2 + 0x18);
      **(undefined8 **)(lVar2 + 0x18) = *(undefined8 *)(lVar2 + 0x10);
      *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(lVar2 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(lVar2 + 0x20) = 0;
    }
  }
  return;
}



// FUNCTION 1432d3120 updateMeshIndicies_Impl body=47 status=ok
// SIG undefined updateMeshIndicies_Impl(void)

void Scaleform::Render::Primitive::updateMeshIndicies_Impl(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x40);
  if (*(uint *)(param_1 + 0x50) < uVar2) {
    for (puVar1 = *(undefined8 **)(param_1 + 0x20); puVar1 != (undefined8 *)(param_1 + 0x20);
        puVar1 = (undefined8 *)*puVar1) {
      uVar2 = uVar2 - *(int *)(puVar1 + 9);
      *(uint *)((longlong)puVar1 + 0x4c) = uVar2;
      if (uVar2 < *(uint *)(param_1 + 0x50)) break;
    }
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x40);
  }
  return;
}



// FUNCTION 1432d3160 FUN_1432d3160 body=101 status=ok
// SIG undefined FUN_1432d3160(void)

void FUN_1432d3160(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x50);
  *(undefined4 *)(lVar1 + 0x28) = param_2;
  *(undefined4 *)(lVar1 + 0x48) = param_4;
  *(undefined4 *)(lVar1 + 0x4c) = param_3;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined1 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x40) = param_1;
  return;
}



// FUNCTION 1432d31d0 FUN_1432d31d0 body=110 status=ok
// SIG undefined FUN_1432d31d0(void)

void FUN_1432d31d0(longlong *param_1)

{
  *(longlong *)(*param_1 + 8) = param_1[1];
  *(longlong *)param_1[1] = *param_1;
  *param_1 = -1;
  param_1[1] = -1;
  if (param_1[4] != 0) {
    *(longlong *)(param_1[2] + 8) = param_1[3];
    *(longlong *)param_1[3] = param_1[2];
    param_1[2] = -1;
    param_1[3] = -1;
    param_1[4] = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001432d323a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
  return;
}



// FUNCTION 1432d3250 FUN_1432d3250 body=306 status=ok
// SIG undefined FUN_1432d3250(void)

void FUN_1432d3250(longlong param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  uVar10 = *(uint *)(lVar1 + 0x40);
  if (*(uint *)(lVar1 + 0x50) < uVar10) {
    for (puVar2 = *(undefined8 **)(lVar1 + 0x20); puVar2 != (undefined8 *)(lVar1 + 0x20);
        puVar2 = (undefined8 *)*puVar2) {
      uVar10 = uVar10 - *(int *)(puVar2 + 9);
      *(uint *)((longlong)puVar2 + 0x4c) = uVar10;
      if (uVar10 < *(uint *)(lVar1 + 0x50)) break;
    }
    *(undefined4 *)(lVar1 + 0x50) = *(undefined4 *)(lVar1 + 0x40);
  }
  uVar10 = 1;
  if (*(int *)(param_1 + 0x28) != 2) {
    uVar10 = *(uint *)(param_1 + 0x48);
  }
  iVar9 = 0;
  iVar11 = 0;
  iVar12 = 0;
  iVar8 = 0;
  iVar14 = 0;
  iVar13 = 0;
  uVar4 = 0;
  if (1 < uVar10) {
    uVar6 = *(int *)(param_1 + 0x4c) + 1;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x38);
    uVar4 = (uVar10 - 2 >> 1) + 1;
    uVar7 = (ulonglong)uVar4;
    uVar4 = uVar4 * 2;
    iVar12 = 0;
    do {
      lVar3 = *(longlong *)(lVar1 + 8 + (ulonglong)(uVar6 - 1) * 0x10);
      iVar9 = iVar9 + *(int *)(lVar3 + 0x44);
      iVar12 = iVar12 + *(int *)(lVar3 + 0x48);
      uVar5 = (ulonglong)uVar6;
      uVar6 = uVar6 + 2;
      lVar3 = *(longlong *)(lVar1 + 8 + uVar5 * 0x10);
      iVar11 = iVar11 + *(int *)(lVar3 + 0x44);
      iVar8 = iVar8 + *(int *)(lVar3 + 0x48);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (uVar4 < uVar10) {
    lVar1 = *(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x38) + 8 +
             (ulonglong)(*(int *)(param_1 + 0x4c) + uVar4) * 0x10);
    iVar14 = *(int *)(lVar1 + 0x44);
    iVar13 = *(int *)(lVar1 + 0x48);
  }
  *param_2 = iVar9 + iVar11 + iVar14;
  *param_3 = iVar12 + iVar8 + iVar13;
  return;
}



// FUNCTION 1432d3390 FUN_1432d3390 body=221 status=ok
// SIG undefined FUN_1432d3390(void)

undefined8 *
FUN_1432d3390(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_1432d4c60(param_1,param_2,param_4,param_5,param_6,param_7);
  *param_1 = &PTR_FUN_145af84b0;
  param_1[2] = &PTR_LAB_145af84d0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = param_3;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x18] = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0x3f800000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  return param_1;
}



// FUNCTION 1432d3480 FUN_1432d3480 body=332 status=ok
// SIG undefined FUN_1432d3480(void)

void FUN_1432d3480(RefCountImplCore *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_145af84b0;
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_145af84d0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8) = *(undefined8 *)(param_1 + 0x98);
    **(undefined8 **)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x98) = 0xffffffffffffffff;
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1432f5b50(*(longlong *)(param_1 + 0xa8),param_1);
  }
  lVar1 = *(longlong *)(param_1 + 0x118);
  plVar2 = (longlong *)(*(longlong *)(param_1 + 0x110) + (lVar1 + -1) * 8);
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    if ((longlong *)*plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar2 + 0x10))();
    }
    plVar2 = plVar2 + -1;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x110));
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0xf8));
  FUN_1432d4e00(param_1 + 0xe0);
  *(undefined ***)param_1 = &PTR_FUN_145af8400;
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_145af8420;
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (*(RefCountImpl **)(param_1 + 0x58) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x58));
  }
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1432d35e0 FUN_1432d35e0 body=1231 status=ok
// SIG undefined FUN_1432d35e0(void)

undefined8
FUN_1432d35e0(longlong param_1,longlong *param_2,int *param_3,uint param_4,undefined4 *param_5,
             longlong *param_6,int *param_7,int *param_8)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint local_res8;
  undefined1 local_90 [8];
  longlong *local_88;
  longlong *local_80;
  int local_78 [5];
  undefined2 local_64 [2];
  undefined8 local_60;
  int local_58 [8];
  
  plVar2 = (longlong *)(param_1 + 0xe0);
  uVar3 = *(ulonglong *)(param_1 + 0xe8);
  FUN_1432d5cd0(plVar2,plVar2,param_4);
  if (uVar3 < param_4) {
    puVar5 = (undefined8 *)(uVar3 * 0x38 + *plVar2);
    for (lVar8 = param_4 - uVar3; lVar8 != 0; lVar8 = lVar8 + -1) {
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = 0;
      }
      puVar5 = puVar5 + 7;
    }
  }
  if (*(ulonglong *)(param_1 + 0xe8) == (ulonglong)param_4) {
    uVar6 = (**(code **)(*param_2 + 0x128))(param_2);
    plVar2 = (longlong *)(param_1 + 0x90);
    if (*plVar2 != 0) {
      *(undefined8 *)(*plVar2 + 8) = *(undefined8 *)(param_1 + 0x98);
      **(longlong **)(param_1 + 0x98) = *plVar2;
      *plVar2 = -1;
      *(undefined8 *)(param_1 + 0x98) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x98) = 0;
      *plVar2 = 0;
    }
    lVar8 = 0;
    local_res8 = 0;
    *param_6 = 0;
    *param_8 = 0;
    *param_7 = 0;
    if (param_4 != 0) {
      lVar10 = 2;
      do {
        lVar4 = *(longlong *)(param_1 + 0xe0);
        piVar7 = local_78 + 2;
        lVar9 = 2;
        do {
          piVar7[-2] = 3;
          *piVar7 = 0;
          piVar7[2] = 4;
          *(undefined2 *)(piVar7 + 3) = 0;
          *(undefined **)(piVar7 + 4) = &DAT_1467cdbb8;
          piVar7 = piVar7 + 8;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        local_88 = (longlong *)0x0;
        local_80 = (longlong *)0x0;
        (**(code **)(**(longlong **)(param_1 + 0x50) + 0x58))
                  (*(longlong **)(param_1 + 0x50),local_78,*(undefined4 *)(param_1 + 0x84),
                   param_3[4],*(undefined4 *)(param_1 + 0x88));
        if ((*(byte *)(param_3 + 6) & 2) != 0) {
          (**(code **)(**(longlong **)(param_1 + 0x50) + 0x58))
                    (*(longlong **)(param_1 + 0x50),local_58,*(undefined4 *)(param_1 + 0x84),
                     param_3[5],*(undefined4 *)(param_1 + 0x88));
        }
        lVar9 = FUN_1432d2660(*(undefined8 *)(param_1 + 0xa0),param_3[6],
                              *(undefined8 *)(param_3 + 2),local_78,local_58,&local_88,&local_80,
                              uVar6,*(undefined4 *)(param_1 + 0x80));
        if (*(RefCountNTSImpl **)(lVar8 + lVar4) != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar8 + lVar4));
        }
        *(longlong *)(lVar8 + lVar4) = lVar9;
        if (lVar9 == 0) {
          piVar7 = local_78;
          do {
            plVar2 = (longlong *)(piVar7 + -2);
            piVar7 = piVar7 + -2;
            lVar10 = lVar10 + -1;
            if ((longlong *)*plVar2 != (longlong *)0x0) {
              (**(code **)(*(longlong *)*plVar2 + 0x10))();
            }
          } while (lVar10 != 0);
          return 0;
        }
        if ((*plVar2 == 0) && ((local_78[0] == 4 || (local_58[0] == 4)))) {
          FUN_1432dca00(param_2,plVar2);
        }
        plVar1 = local_88;
        *(int *)(lVar8 + 0x18 + lVar4) = *param_8;
        *(int *)(lVar8 + 0x1c + lVar4) = param_3[1];
        *(longlong *)(lVar8 + 0x20 + lVar4) = *param_6;
        *(int *)(lVar8 + 0x28 + lVar4) = *param_3;
        *(int *)(lVar8 + 0x2c + lVar4) = param_3[4];
        *(int *)(lVar8 + 0x30 + lVar4) = param_3[5];
        *(int *)(lVar8 + 0x34 + lVar4) = param_3[6];
        if (local_88 != (longlong *)0x0) {
          FUN_1432d5e30(param_1 + 0x110,param_1 + 0x110,*(longlong *)(param_1 + 0x118) + 1);
          puVar5 = (undefined8 *)
                   (*(longlong *)(param_1 + 0x110) + (*(longlong *)(param_1 + 0x118) + -1) * 8);
          if (puVar5 != (undefined8 *)0x0) {
            (**(code **)(*plVar1 + 8))(plVar1);
            *puVar5 = plVar1;
          }
        }
        plVar1 = local_80;
        if (local_80 != (longlong *)0x0) {
          FUN_1432d5e30(param_1 + 0x110,param_1 + 0x110,*(longlong *)(param_1 + 0x118) + 1);
          puVar5 = (undefined8 *)
                   (*(longlong *)(param_1 + 0x110) + (*(longlong *)(param_1 + 0x118) + -1) * 8);
          if (puVar5 != (undefined8 *)0x0) {
            (**(code **)(*plVar1 + 8))(plVar1);
            *puVar5 = plVar1;
          }
        }
        (**(code **)(*param_2 + 0x230))
                  (param_2,*(undefined4 *)(*(longlong *)(lVar8 + lVar4) + 0x10),
                   *(undefined8 *)(*(longlong *)(lVar8 + lVar4) + 0x30),lVar8 + lVar4 + 8,local_90,
                   lVar4 + 0x10 + lVar8,1);
        piVar7 = local_78;
        lVar9 = 2;
        *param_6 = *param_6 + (ulonglong)(uint)(**(int **)(lVar8 + lVar4 + 8) * *param_3);
        *param_7 = *param_7 + *param_3;
        *param_8 = *param_8 + param_3[1];
        do {
          plVar1 = (longlong *)(piVar7 + -2);
          piVar7 = piVar7 + -2;
          lVar9 = lVar9 + -1;
          if ((longlong *)*plVar1 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar1 + 0x10))();
          }
        } while (lVar9 != 0);
        local_res8 = local_res8 + 1;
        param_3 = param_3 + 8;
        lVar8 = lVar8 + 0x38;
      } while (local_res8 < param_4);
    }
    *(undefined4 *)(param_1 + 0xc0) = *param_5;
    *(undefined4 *)(param_1 + 0xc4) = param_5[1];
    *(undefined4 *)(param_1 + 200) = param_5[2];
    *(undefined4 *)(param_1 + 0xcc) = param_5[3];
    *(undefined4 *)(param_1 + 0xd0) = param_5[4];
    *(undefined4 *)(param_1 + 0xd4) = param_5[5];
    *(undefined4 *)(param_1 + 0xd8) = param_5[6];
    *(undefined4 *)(param_1 + 0xdc) = param_5[7];
    FUN_1432d3ac0(param_1,param_2);
    return 1;
  }
  return 0;
}



// FUNCTION 1432d3ac0 FUN_1432d3ac0 body=206 status=ok
// SIG undefined FUN_1432d3ac0(void)

void FUN_1432d3ac0(longlong param_1,undefined8 param_2,Matrix2x4<float> *param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x50))
                    (*(longlong **)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x84),
                     *(undefined4 *)(param_1 + 0x88));
  FUN_1432d5c30(param_1 + 0xf8,uVar1);
  if ((*(ulonglong *)(param_1 + 0x100) == (ulonglong)uVar1) && (uVar2 = 0, uVar1 != 0)) {
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(param_1 + 0x50) + 0x60))
                (*(longlong **)(param_1 + 0x50),param_2,param_1,
                 *(longlong *)(param_1 + 0xf8) + lVar3,*(undefined4 *)(param_1 + 0x84),uVar2,
                 *(undefined4 *)(param_1 + 0x88));
      Scaleform::Render::Matrix2x4<float>::Prepend
                ((Matrix2x4<float> *)(*(longlong *)(param_1 + 0xf8) + lVar3),param_3);
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x20;
    } while (uVar2 < uVar1);
  }
  return;
}



// FUNCTION 1432d3ba0 FUN_1432d3ba0 body=603 status=ok
// SIG undefined FUN_1432d3ba0(void)

undefined1 FUN_1432d3ba0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  RefCountNTSImpl *this;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 local_78;
  longlong local_70;
  undefined4 local_68 [5];
  undefined2 local_54 [2];
  undefined8 local_50;
  undefined1 local_48 [32];
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x68))();
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(*param_2 + 0x128))(param_2);
    uVar5 = 0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      do {
        plVar6 = (longlong *)(uVar5 * 0x38 + *(longlong *)(param_1 + 0xe0));
        if (*plVar6 != 0) {
          lVar4 = 2;
          puVar3 = local_68 + 2;
          do {
            puVar3[-2] = 3;
            *puVar3 = 0;
            puVar3[2] = 4;
            *(undefined2 *)(puVar3 + 3) = 0;
            *(undefined **)(puVar3 + 4) = &DAT_1467cdbb8;
            puVar3 = puVar3 + 8;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
          local_78 = 0;
          local_70 = 0;
          (**(code **)(**(longlong **)(param_1 + 0x50) + 0x58))
                    (*(longlong **)(param_1 + 0x50),local_68,*(undefined4 *)(param_1 + 0x84),
                     *(undefined4 *)((longlong)plVar6 + 0x2c),*(undefined4 *)(param_1 + 0x88));
          (**(code **)(**(longlong **)(param_1 + 0x50) + 0x58))
                    (*(longlong **)(param_1 + 0x50),local_48,*(undefined4 *)(param_1 + 0x84),
                     (int)plVar6[6],*(undefined4 *)(param_1 + 0x88));
          this = (RefCountNTSImpl *)
                 FUN_1432d2660(*(undefined8 *)(param_1 + 0xa0),
                               *(undefined4 *)((longlong)plVar6 + 0x34),
                               *(undefined8 *)(*plVar6 + 0x30),local_68,local_48,&local_78,&local_70
                               ,uVar2,*(undefined4 *)(param_1 + 0x80));
          if (this == (RefCountNTSImpl *)0x0) {
            lVar4 = 2;
            puVar3 = local_68;
            do {
              plVar6 = (longlong *)(puVar3 + -2);
              puVar3 = puVar3 + -2;
              lVar4 = lVar4 + -1;
              if ((longlong *)*plVar6 != (longlong *)0x0) {
                (**(code **)(*(longlong *)*plVar6 + 0x10))();
              }
            } while (lVar4 != 0);
          }
          else {
            *(int *)(this + 8) = *(int *)(this + 8) + 1;
            if ((RefCountNTSImpl *)*plVar6 != (RefCountNTSImpl *)0x0) {
              Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*plVar6);
            }
            *plVar6 = (longlong)this;
            Scaleform::RefCountNTSImpl::Release(this);
            lVar4 = 2;
            puVar3 = local_68;
            do {
              plVar6 = (longlong *)(puVar3 + -2);
              puVar3 = puVar3 + -2;
              lVar4 = lVar4 + -1;
              if ((longlong *)*plVar6 != (longlong *)0x0) {
                (**(code **)(*(longlong *)*plVar6 + 0x10))();
              }
            } while (lVar4 != 0);
          }
        }
        uVar5 = (ulonglong)((int)uVar5 + 1);
      } while (uVar5 < *(ulonglong *)(param_1 + 0xe8));
    }
    FUN_1432d3ac0(param_1,param_2,param_1 + 0xc0);
    return 1;
  }
  return 0;
}



// FUNCTION 1432d3e10 FUN_1432d3e10 body=9 status=ok
// SIG undefined FUN_1432d3e10(void)

void FUN_1432d3e10(longlong param_1)

{
  FUN_1432d5630(param_1 + 0x18);
  return;
}



// FUNCTION 1432d3e20 Remove body=9 status=ok
// SIG undefined Remove(void)

void Scaleform::Render::MaskPrimitive::Remove(longlong param_1)

{
  FUN_1432d5960(param_1 + 0x18);
  return;
}



// FUNCTION 1432d3e60 FUN_1432d3e60 body=160 status=ok
// SIG undefined FUN_1432d3e60(void)

longlong * FUN_1432d3e60(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = param_1 + 4;
  param_1[1] = 0;
  *param_1 = (longlong)&PTR_FUN_144f70a50;
  *param_1 = (longlong)&PTR_FUN_145af84e0;
  param_1[2] = (longlong)&PTR_LAB_145af84f8;
  lVar2 = 2;
  *(undefined4 *)(param_1 + 1) = 1;
  *plVar1 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  do {
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x10))();
    }
    *plVar1 = 0;
    plVar1 = plVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  (**(code **)(*param_1 + 8))(param_1,0);
  return param_1;
}



// FUNCTION 1432d3f10 FUN_1432d3f10 body=230 status=ok
// SIG undefined FUN_1432d3f10(void)

void FUN_1432d3f10(RefCountImplCore *param_1)

{
  RefCountImplCore *pRVar1;
  RefCountImplCore *pRVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *(undefined ***)param_1 = &PTR_FUN_145af84e0;
  pRVar2 = param_1 + 0x20;
  lVar5 = 2;
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_145af84f8;
  lVar3 = 2;
  do {
    if (*(longlong **)pRVar2 != (longlong *)0x0) {
      (**(code **)(**(longlong **)pRVar2 + 0x10))();
    }
    *(longlong *)pRVar2 = 0;
    pRVar2 = pRVar2 + 8;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  lVar3 = *(longlong *)(param_1 + 0x38);
  pRVar2 = param_1 + 0x30;
  plVar4 = (longlong *)(*(longlong *)pRVar2 + (lVar3 + -1) * 8);
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    if ((undefined **)*plVar4 != &PTR_LOOP_1467cd040) {
      FUN_1432c03a0(*(undefined **)*plVar4);
    }
    plVar4 = plVar4 + -1;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(longlong *)pRVar2);
  do {
    pRVar1 = pRVar2 + -8;
    pRVar2 = pRVar2 + -8;
    lVar5 = lVar5 + -1;
    if (*(longlong **)pRVar1 != (longlong *)0x0) {
      (**(code **)(**(longlong **)pRVar1 + 0x10))();
    }
  } while (lVar5 != 0);
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_145af8468;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  return;
}



// FUNCTION 1432d4000 GetCacheResults body=45 status=ok
// SIG undefined GetCacheResults(void)

void Scaleform::Render::CacheablePrimitive::GetCacheResults
               (longlong param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    param_1 = param_1 - (longlong)param_2;
    uVar1 = 0;
    if (param_3 == 0) {
      *param_2 = 0;
      goto LAB_1432d4020;
    }
    do {
      uVar2 = uVar1;
      *param_2 = *(undefined8 *)(param_1 + 0x20 + (longlong)param_2);
LAB_1432d4020:
      param_2 = param_2 + 1;
      uVar1 = uVar2 + 1;
    } while (uVar2 + 1 < param_3);
  }
  return;
}



// FUNCTION 1432d4040 FUN_1432d4040 body=209 status=ok
// SIG undefined FUN_1432d4040(void)

void FUN_1432d4040(longlong *param_1,int param_2,longlong param_3,uint param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  
  plVar2 = param_1 + 4;
  uVar3 = 0;
  *(int *)(param_1 + 3) = param_2;
  do {
    if ((uVar3 < param_4) && (param_3 != 0)) {
      plVar1 = *(longlong **)((param_3 - (longlong)param_1) + -0x20 + (longlong)plVar2);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
      }
      if ((longlong *)*plVar2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar2 + 0x10))();
      }
      *plVar2 = (longlong)plVar1;
    }
    else {
      if ((longlong *)*plVar2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar2 + 0x10))();
      }
      *plVar2 = 0;
    }
    uVar3 = uVar3 + 1;
    plVar2 = plVar2 + 1;
  } while (uVar3 < 2);
  if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001432d4106. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1432d4120 SetRTPC body=9 status=ok
// SIG undefined SetRTPC(void)

void CAkParameterNodeBase::SetRTPC(longlong param_1)

{
  FUN_1432d5630(param_1 + 0x30);
  return;
}



// FUNCTION 1432d4130 FUN_1432d4130 body=219 status=ok
// SIG undefined FUN_1432d4130(void)

void FUN_1432d4130(longlong *param_1,ulonglong param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  for (uVar3 = param_2; uVar3 < param_3; uVar3 = uVar3 + 1) {
    (**(code **)(*param_1 + 8))(param_1,uVar3);
  }
  plVar1 = param_1 + 6;
  if (param_1[7] == param_3) {
    FUN_1432d5ee0(plVar1,plVar1,0);
  }
  else {
    lVar2 = (param_2 + param_3) * 8;
    plVar4 = (longlong *)(lVar2 + -8 + *plVar1);
    for (uVar3 = param_3; uVar3 != 0; uVar3 = uVar3 - 1) {
      if ((undefined **)*plVar4 != &PTR_LOOP_1467cd040) {
        FUN_1432c03a0(*(undefined **)*plVar4);
      }
      plVar4 = plVar4 + -1;
    }
    memmove((void *)(*plVar1 + param_2 * 8),(void *)(*plVar1 + lVar2),
            ((param_1[7] - param_2) - param_3) * 8);
    param_1[7] = param_1[7] - param_3;
  }
  return;
}



// FUNCTION 1432d4220 FUN_1432d4220 body=129 status=ok
// SIG undefined FUN_1432d4220(void)

void FUN_1432d4220(longlong param_1,ulonglong param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_2 < *(ulonglong *)(param_1 + 0x38)) {
    ppuVar1 = *(undefined ***)(*(longlong *)(param_1 + 0x30) + param_2 * 8);
    if (ppuVar1 != &PTR_LOOP_1467cd040) {
      if (((*ppuVar1)[0xf] & 2) != 0) {
        uVar2 = FUN_1432c08f0(*(longlong *)(param_1 + 0x30) + param_2 * 8,0);
        FUN_1432c0490(*(longlong *)(param_1 + 0x30) + param_2 * 8,uVar2);
      }
      local_28 = 0;
      uStack_20 = 0;
      local_18 = 0;
      uStack_10 = 0;
      FUN_1432c0630(*(longlong *)(param_1 + 0x30) + param_2 * 8,&local_28,1);
    }
  }
  return;
}



// FUNCTION 1432d4300 FUN_1432d4300 body=84 status=ok
// SIG undefined FUN_1432d4300(void)

undefined8 FUN_1432d4300(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)*param_3 + 0x240))((longlong *)*param_3,param_1 + -0x10);
  if (cVar1 != '\0') {
    (**(code **)(*(longlong *)*param_3 + 0x1c8))
              ((longlong *)*param_3,param_1 + -0x10,*(longlong *)(param_1 + 0x38) == 0);
  }
  return 0;
}



// FUNCTION 1432d43b0 FUN_1432d43b0 body=79 status=ok
// SIG undefined FUN_1432d43b0(void)

undefined8 FUN_1432d43b0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x38) == 0x15) {
    param_3 = (longlong *)*param_3;
    uVar2 = 1;
  }
  else {
    cVar1 = FUN_1432d0100(*(int *)(param_1 + 0x38),*(undefined4 *)(*param_3 + 0x54));
    if (cVar1 == '\0') {
      return 0;
    }
    param_3 = (longlong *)*param_3;
    uVar2 = 0;
  }
  (**(code **)(*param_3 + 0x1c8))(param_3,param_1 + -0x10,uVar2);
  return 0;
}



// FUNCTION 1432d44d0 FUN_1432d44d0 body=82 status=ok
// SIG undefined FUN_1432d44d0(void)

void FUN_1432d44d0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(*param_3 + 0x30);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_143322050(lVar1,*(undefined4 *)(*param_3 + 0x40));
  }
  FUN_1432d4790(param_1,param_2,param_3,uVar2);
  return;
}



// FUNCTION 1432d4530 FUN_1432d4530 body=278 status=ok
// SIG undefined FUN_1432d4530(void)

ulonglong FUN_1432d4530(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  
  if (*param_1 != 0) {
    lVar2 = *(longlong *)(*param_2 + 0x30);
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_143322050(lVar2,*(undefined4 *)(*param_2 + 0x40));
    }
    lVar2 = *param_1;
    uVar4 = *(ulonglong *)(lVar2 + 8) & uVar4;
    in_RAX = uVar4 * 3;
    puVar6 = (ulonglong *)(lVar2 + 0x10 + uVar4 * 0x18);
    if ((*(longlong *)(lVar2 + 0x10 + uVar4 * 0x18) != -2) && (puVar6[1] == uVar4)) {
      uVar3 = uVar4;
      uVar7 = 0xffffffffffffffff;
      while( true ) {
        uVar5 = uVar3;
        if ((puVar6[1] == uVar4) && (in_RAX = *param_2, puVar6[2] == in_RAX)) {
          uVar3 = *puVar6;
          if (uVar4 == uVar5) {
            if (uVar3 != 0xffffffffffffffff) {
              *puVar6 = 0xfffffffffffffffe;
              lVar1 = lVar2 + uVar3 * 0x18;
              *puVar6 = *(ulonglong *)(lVar2 + 0x10 + uVar3 * 0x18);
              puVar6[1] = *(ulonglong *)(lVar1 + 0x18);
              puVar6[2] = *(ulonglong *)(lVar1 + 0x20);
              *(undefined8 *)(lVar1 + 0x10) = 0xfffffffffffffffe;
              param_1 = (longlong *)*param_1;
              *param_1 = *param_1 + -1;
              return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
            }
          }
          else {
            *(ulonglong *)(lVar2 + 0x10 + uVar7 * 0x18) = uVar3;
          }
          *puVar6 = 0xfffffffffffffffe;
          param_1 = (longlong *)*param_1;
          *param_1 = *param_1 + -1;
          return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
        }
        uVar3 = *puVar6;
        if (uVar3 == 0xffffffffffffffff) break;
        in_RAX = uVar3 * 3;
        puVar6 = (ulonglong *)(lVar2 + 0x10 + uVar3 * 0x18);
        uVar7 = uVar5;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1432d4650 FUN_1432d4650 body=314 status=ok
// SIG undefined FUN_1432d4650(void)

ulonglong FUN_1432d4650(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    uVar3 = *param_2;
    uVar4 = ((ulonglong)
             ((uint)(byte)(*(char *)(uVar3 + 0x1b) * '\x03' + *(char *)(uVar3 + 0x1a)) << 2 ^
             (uint)(byte)(*(char *)(uVar3 + 0x19) * '\x03' + *(char *)(uVar3 + 0x18))) << 2 ^
             (ulonglong)**(uint **)(uVar3 + 0x30) ^ *(ulonglong *)(uVar3 + 0x20) >> 2 ^
             (ulonglong)*(uint *)(uVar3 + 0x14) ^ (ulonglong)*(uint *)(uVar3 + 0x10) ^
            *(ulonglong *)(uVar3 + 0x28)) & *(ulonglong *)(lVar2 + 8);
    lVar1 = uVar4 * 3 + 2;
    puVar6 = (ulonglong *)(lVar2 + lVar1 * 8);
    in_RAX = uVar4;
    if ((*(longlong *)(lVar2 + lVar1 * 8) != -2) && (puVar6[1] == uVar4)) {
      uVar7 = 0xffffffffffffffff;
      while( true ) {
        uVar5 = in_RAX;
        if ((puVar6[1] == uVar4) && (puVar6[2] == uVar3)) {
          uVar3 = *puVar6;
          if (uVar4 == uVar5) {
            if (uVar3 != 0xffffffffffffffff) {
              *puVar6 = 0xfffffffffffffffe;
              lVar1 = lVar2 + uVar3 * 0x18;
              *puVar6 = *(ulonglong *)(lVar2 + 0x10 + uVar3 * 0x18);
              puVar6[1] = *(ulonglong *)(lVar1 + 0x18);
              puVar6[2] = *(ulonglong *)(lVar1 + 0x20);
              *(undefined8 *)(lVar1 + 0x10) = 0xfffffffffffffffe;
              param_1 = (longlong *)*param_1;
              *param_1 = *param_1 + -1;
              return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
            }
          }
          else {
            *(ulonglong *)(lVar2 + 0x10 + uVar7 * 0x18) = uVar3;
          }
          *puVar6 = 0xfffffffffffffffe;
          param_1 = (longlong *)*param_1;
          *param_1 = *param_1 + -1;
          return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
        }
        in_RAX = *puVar6;
        if (in_RAX == 0xffffffffffffffff) break;
        puVar6 = (ulonglong *)(lVar2 + in_RAX * 0x18 + 0x10);
        uVar7 = uVar5;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1432d4790 FUN_1432d4790 body=322 status=ok
// SIG undefined FUN_1432d4790(void)

void FUN_1432d4790(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 == (longlong *)0x0) {
    lVar10 = 8;
  }
  else {
    if ((ulonglong)(*plVar3 * 5) <= plVar3[1] * 4 + 4U) goto LAB_1432d47e4;
    lVar10 = plVar3[1] * 2 + 2;
  }
  FUN_1432d5fb0(param_1,param_2,lVar10);
LAB_1432d47e4:
  plVar3 = (longlong *)*param_1;
  *plVar3 = *plVar3 + 1;
  param_4 = param_4 & plVar3[1];
  lVar4 = *param_1;
  lVar5 = *(longlong *)(lVar4 + 0x10 + param_4 * 0x18);
  lVar10 = lVar4 + param_4 * 0x18;
  uVar9 = param_4;
  if (lVar5 == -2) {
    *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    uVar8 = *param_3;
  }
  else {
    do {
      uVar9 = uVar9 + 1 & plVar3[1];
      lVar2 = lVar4 + uVar9 * 0x18;
    } while (*(longlong *)(lVar4 + 0x10 + uVar9 * 0x18) != -2);
    if (*(ulonglong *)(lVar10 + 0x18) == param_4) {
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar10 + 0x20);
      uVar8 = *param_3;
      *(ulonglong *)(lVar10 + 0x10) = uVar9;
    }
    else {
      lVar1 = *(ulonglong *)(lVar10 + 0x18) * 3 + 2;
      uVar6 = *(ulonglong *)(lVar4 + lVar1 * 8);
      while (puVar7 = (ulonglong *)(lVar4 + lVar1 * 8), uVar6 != param_4) {
        lVar1 = *puVar7 * 3 + 2;
        uVar6 = *(ulonglong *)(lVar4 + lVar1 * 8);
      }
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar10 + 0x20);
      *puVar7 = uVar9;
      uVar8 = *param_3;
      *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar10 + 0x18) = param_4;
  *(undefined8 *)(lVar10 + 0x20) = uVar8;
  return;
}



// FUNCTION 1432d48e0 FUN_1432d48e0 body=322 status=ok
// SIG undefined FUN_1432d48e0(void)

void FUN_1432d48e0(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 == (longlong *)0x0) {
    lVar10 = 8;
  }
  else {
    if ((ulonglong)(*plVar3 * 5) <= plVar3[1] * 4 + 4U) goto LAB_1432d4934;
    lVar10 = plVar3[1] * 2 + 2;
  }
  FUN_1432d60e0(param_1,param_2,lVar10);
LAB_1432d4934:
  plVar3 = (longlong *)*param_1;
  *plVar3 = *plVar3 + 1;
  param_4 = param_4 & plVar3[1];
  lVar4 = *param_1;
  lVar5 = *(longlong *)(lVar4 + 0x10 + param_4 * 0x18);
  lVar10 = lVar4 + param_4 * 0x18;
  uVar9 = param_4;
  if (lVar5 == -2) {
    *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    uVar8 = *param_3;
  }
  else {
    do {
      uVar9 = uVar9 + 1 & plVar3[1];
      lVar2 = lVar4 + uVar9 * 0x18;
    } while (*(longlong *)(lVar4 + 0x10 + uVar9 * 0x18) != -2);
    if (*(ulonglong *)(lVar10 + 0x18) == param_4) {
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar10 + 0x20);
      uVar8 = *param_3;
      *(ulonglong *)(lVar10 + 0x10) = uVar9;
    }
    else {
      lVar1 = *(ulonglong *)(lVar10 + 0x18) * 3 + 2;
      uVar6 = *(ulonglong *)(lVar4 + lVar1 * 8);
      while (puVar7 = (ulonglong *)(lVar4 + lVar1 * 8), uVar6 != param_4) {
        lVar1 = *puVar7 * 3 + 2;
        uVar6 = *(ulonglong *)(lVar4 + lVar1 * 8);
      }
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar10 + 0x20);
      *puVar7 = uVar9;
      uVar8 = *param_3;
      *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar10 + 0x18) = param_4;
  *(undefined8 *)(lVar10 + 0x20) = uVar8;
  return;
}



// FUNCTION 1432d4a30 FUN_1432d4a30 body=116 status=ok
// SIG undefined FUN_1432d4a30(void)

undefined8 FUN_1432d4a30(longlong *param_1,uint *param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    return 0xffffffffffffffff;
  }
  uVar1 = FUN_1432d4b70(param_1,param_2,
                        ((ulonglong)
                         ((uint)(byte)(*(char *)((longlong)param_2 + 0xb) * '\x03' +
                                      *(char *)((longlong)param_2 + 10)) << 2 ^
                         (uint)(byte)(*(char *)((longlong)param_2 + 9) * '\x03' + (char)param_2[2]))
                         << 2 ^ (ulonglong)**(uint **)(param_2 + 8) ^
                         *(ulonglong *)(param_2 + 4) >> 2 ^ (ulonglong)param_2[1] ^
                         *(ulonglong *)(param_2 + 6) ^ (ulonglong)*param_2) &
                        *(ulonglong *)(*param_1 + 8));
  return uVar1;
}



// FUNCTION 1432d4ab0 FUN_1432d4ab0 body=179 status=ok
// SIG undefined FUN_1432d4ab0(void)

longlong FUN_1432d4ab0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = param_3 * 3 + 2;
  plVar4 = (longlong *)(*param_1 + lVar3 * 8);
  if ((*(longlong *)(*param_1 + lVar3 * 8) != -2) && (lVar3 = param_3, plVar4[1] == param_3)) {
    while( true ) {
      if (plVar4[1] == param_3) {
        lVar1 = plVar4[2];
        cVar2 = FUN_1433220c0(*(undefined8 *)(lVar1 + 0x30),*param_2);
        if (cVar2 != '\0') {
          if (*(longlong *)(*param_2 + 0x30) == 0) {
            return lVar3;
          }
          if (*(float *)(lVar1 + 0x40) == *(float *)(param_2 + 1)) {
            return lVar3;
          }
        }
      }
      lVar3 = *plVar4;
      if (lVar3 == -1) break;
      plVar4 = (longlong *)(*param_1 + lVar3 * 0x18 + 0x10);
    }
  }
  return -1;
}



// FUNCTION 1432d4b70 FUN_1432d4b70 body=233 status=ok
// SIG undefined FUN_1432d4b70(void)

longlong FUN_1432d4b70(longlong *param_1,int *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar1 = *param_1;
  lVar4 = lVar1 + 0x10;
  plVar5 = (longlong *)(lVar4 + param_3 * 0x18);
  if ((*(longlong *)(lVar4 + param_3 * 0x18) != -2) && (lVar4 = param_3, plVar5[1] == param_3)) {
    while( true ) {
      if ((((plVar5[1] == param_3) &&
           ((((lVar2 = plVar5[2], *(int *)(lVar2 + 0x10) == *param_2 &&
              (*(int *)(lVar2 + 0x14) == param_2[1])) &&
             (*(char *)(lVar2 + 0x18) == (char)param_2[2])) &&
            ((*(char *)(lVar2 + 0x19) == *(char *)((longlong)param_2 + 9) &&
             (*(char *)(lVar2 + 0x1a) == *(char *)((longlong)param_2 + 10))))))) &&
          (*(char *)(lVar2 + 0x1b) == *(char *)((longlong)param_2 + 0xb))) &&
         ((*(longlong *)(lVar2 + 0x20) == *(longlong *)(param_2 + 4) &&
          (*(longlong *)(lVar2 + 0x28) == *(longlong *)(param_2 + 6))))) {
        if (*(longlong *)(lVar2 + 0x30) == *(longlong *)(param_2 + 8)) {
          return lVar4;
        }
        cVar3 = Scaleform::Render::VertexFormat::operator==();
        if (cVar3 != '\0') {
          return lVar4;
        }
      }
      lVar4 = *plVar5;
      if (lVar4 == -1) break;
      plVar5 = (longlong *)(lVar1 + 0x10 + lVar4 * 0x18);
    }
  }
  return -1;
}



// FUNCTION 1432d4c60 FUN_1432d4c60 body=216 status=ok
// SIG undefined FUN_1432d4c60(void)

undefined8 *
FUN_1432d4c60(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[3] = 0xffffffffffffffff;
  param_1[4] = 0xffffffffffffffff;
  param_1[2] = &PTR_FUN_145af83f0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *param_1 = &PTR_FUN_145af8400;
  param_1[2] = &PTR_LAB_145af8420;
  *(undefined4 *)(param_1 + 0xc) = *param_3;
  *(undefined4 *)((longlong)param_1 + 100) = param_3[1];
  *(undefined4 *)(param_1 + 0xd) = param_3[2];
  *(undefined4 *)((longlong)param_1 + 0x6c) = param_3[3];
  *(undefined4 *)(param_1 + 0xe) = param_3[4];
  *(undefined4 *)((longlong)param_1 + 0x74) = param_3[5];
  *(undefined4 *)(param_1 + 0xf) = param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x7c) = param_3[7];
  param_1[10] = param_2;
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = param_5;
  *(undefined4 *)(param_1 + 0x11) = param_6;
  *(undefined4 *)(param_1 + 0x10) = param_4;
  if ((longlong *)param_1[10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[10] + 8))();
  }
  return param_1;
}



// FUNCTION 1432d4d40 FUN_1432d4d40 body=183 status=ok
// SIG undefined FUN_1432d4d40(void)

undefined4 * FUN_1432d4d40(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  lVar2 = 2;
  param_1[1] = param_2[1];
  puVar1 = param_1 + 2;
  do {
    *(undefined2 *)puVar1 = 0;
    puVar1 = (undefined4 *)((longlong)puVar1 + 2);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined2 *)((longlong)param_1 + 10) = *(undefined2 *)((longlong)param_2 + 10);
  if (*(RefCountImpl **)(param_2 + 4) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_2 + 4));
  }
  if (*(RefCountImpl **)(param_1 + 4) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 4));
  }
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  if (*(RefCountImpl **)(param_2 + 6) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_2 + 6));
  }
  if (*(RefCountImpl **)(param_1 + 6) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 6));
  }
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  return param_1;
}



// FUNCTION 1432d4e00 FUN_1432d4e00 body=103 status=ok
// SIG undefined FUN_1432d4e00(void)

void FUN_1432d4e00(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  puVar1 = (undefined8 *)(*param_1 + -0x38 + lVar2 * 0x38);
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    if ((RefCountNTSImpl *)*puVar1 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*puVar1);
    }
    puVar1 = puVar1 + -7;
  }
                    /* WARNING: Could not recover jumptable at 0x0001432d4e63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  return;
}



// FUNCTION 1432d4e70 FUN_1432d4e70 body=141 status=ok
// SIG undefined FUN_1432d4e70(void)

void FUN_1432d4e70(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  plVar1 = (longlong *)(*param_1 + -0x10 + lVar2 * 0x10);
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    if ((RefCountImpl *)plVar1[1] != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)plVar1[1]);
    }
    if ((undefined **)*plVar1 != &PTR_LOOP_1467cd040) {
      FUN_1432c03a0(*(undefined **)*plVar1);
    }
    plVar1 = plVar1 + -2;
  }
                    /* WARNING: Could not recover jumptable at 0x0001432d4ef9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  return;
}



// FUNCTION 1432d4f00 operator== body=128 status=ok
// SIG undefined operator==(void)

ulonglong Scaleform::Render::VertexFormat::operator==(longlong param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = *(int **)(param_1 + 8);
  piVar3 = *(int **)(param_2 + 8);
  while( true ) {
    if (((piVar2[1] & 0xf0U) - 0x70 & 0xffffffef) == 0) {
      piVar2 = piVar2 + 2;
    }
    if (((piVar3[1] & 0xf0U) - 0x70 & 0xffffffef) == 0) {
      piVar3 = piVar3 + 2;
    }
    iVar1 = piVar2[1];
    if ((iVar1 == 0) || (piVar3[1] == 0)) break;
    if ((*piVar2 != *piVar3) || (iVar1 != piVar3[1])) {
      return (ulonglong)piVar2 & 0xffffffffffffff00;
    }
    piVar2 = piVar2 + 2;
    piVar3 = piVar3 + 2;
  }
  if ((*piVar2 == *piVar3) && (iVar1 == piVar3[1])) {
    return 1;
  }
  return 0;
}



// FUNCTION 1432d4fa0 FUN_1432d4fa0 body=216 status=ok
// SIG undefined FUN_1432d4fa0(void)

Mesh * FUN_1432d4fa0(Mesh *param_1,uint param_2)

{
  longlong lVar1;
  Mesh *this;
  
  if ((param_2 & 2) != 0) {
    lVar1 = *(longlong *)(param_1 + -0x10);
    this = param_1 + lVar1 * 0xe0;
    for (; lVar1 != 0; lVar1 = lVar1 + -1) {
      this = this + -0xe0;
      Scaleform::Render::Mesh::~Mesh(this);
    }
    if ((param_2 & 1) != 0) {
      FMemory::operator_delete(param_1 + -0x10,*(longlong *)(param_1 + -0x10) * 0xe0 + 0x10);
    }
    return param_1 + -0x10;
  }
  Scaleform::Render::Mesh::~Mesh(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 1432d5090 FUN_1432d5090 body=304 status=ok
// SIG undefined FUN_1432d5090(void)

MeshBase * FUN_1432d5090(MeshBase *param_1,uint param_2)

{
  MeshBase *pMVar1;
  MeshBase *pMVar2;
  RefCountImplCore *this;
  longlong lVar3;
  
  if ((param_2 & 2) != 0) {
    lVar3 = *(longlong *)(param_1 + -0x10);
    pMVar1 = param_1 + -0x10;
    pMVar2 = param_1 + lVar3 * 0x90;
    while (lVar3 != 0) {
      this = (RefCountImplCore *)(pMVar2 + -0x90);
      lVar3 = lVar3 + -1;
      *(undefined ***)this = &PTR_FUN_145af8400;
      *(undefined ***)(pMVar2 + -0x80) = &PTR_LAB_145af8420;
      if (*(longlong **)(pMVar2 + -0x40) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(pMVar2 + -0x40) + 0x10))();
      }
      *(undefined8 *)(pMVar2 + -0x40) = 0;
      if (*(RefCountImpl **)(pMVar2 + -0x38) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(pMVar2 + -0x38));
      }
      if (*(longlong **)(pMVar2 + -0x40) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(pMVar2 + -0x40) + 0x10))();
      }
      Scaleform::RefCountImplCore::~RefCountImplCore(this);
      pMVar2 = (MeshBase *)this;
    }
    if ((param_2 & 1) != 0) {
      FMemory::operator_delete(pMVar1,*(longlong *)pMVar1 * 0x90 + 0x10);
    }
    return pMVar1;
  }
  Scaleform::Render::MeshBase::~MeshBase(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 1432d51e0 FUN_1432d51e0 body=89 status=ok
// SIG undefined FUN_1432d51e0(void)

undefined8 FUN_1432d51e0(undefined8 param_1,ulonglong param_2)

{
  FUN_1432d3f10();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1432d5240 FUN_1432d5240 body=89 status=ok
// SIG undefined FUN_1432d5240(void)

undefined8 FUN_1432d5240(undefined8 param_1,ulonglong param_2)

{
  FUN_1432d3480();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x130);
  }
  return param_1;
}



// FUNCTION 1432d52a0 FUN_1432d52a0 body=43 status=ok
// SIG undefined FUN_1432d52a0(void)

undefined8 * FUN_1432d52a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af8468;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1432d52d0 FUN_1432d52d0 body=33 status=ok
// SIG undefined FUN_1432d52d0(void)

undefined8 FUN_1432d52d0(undefined8 param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1432d5300 FUN_1432d5300 body=89 status=ok
// SIG undefined FUN_1432d5300(void)

undefined8 FUN_1432d5300(undefined8 param_1,ulonglong param_2)

{
  FUN_1432d2bd0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1432d5360 FUN_1432d5360 body=89 status=ok
// SIG undefined FUN_1432d5360(void)

undefined8 FUN_1432d5360(undefined8 param_1,ulonglong param_2)

{
  FUN_1432d2060();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1432d53c0 FUN_1432d53c0 body=91 status=ok
// SIG undefined FUN_1432d53c0(void)

void FUN_1432d53c0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_1 != 0) {
    lVar1 = 0;
    lVar2 = *(longlong *)(*param_1 + 8) + 1;
    do {
      if (*(longlong *)(lVar1 + 0x10 + *param_1) != -2) {
        *(undefined8 *)(lVar1 + 0x10 + *param_1) = 0xfffffffffffffffe;
      }
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1432d5420 FUN_1432d5420 body=104 status=ok
// SIG undefined FUN_1432d5420(void)

void FUN_1432d5420(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_2 * 0x10 + -0x10 + param_1);
    do {
      if ((RefCountImpl *)plVar1[1] != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)plVar1[1]);
      }
      if ((undefined **)*plVar1 != &PTR_LOOP_1467cd040) {
        FUN_1432c03a0(*(undefined **)*plVar1);
      }
      plVar1 = plVar1 + -2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1432d5490 FUN_1432d5490 body=42 status=ok
// SIG undefined FUN_1432d5490(void)

longlong FUN_1432d5490(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  uVar1 = *(uint *)(lVar2 + 4);
  while( true ) {
    if (uVar1 == 0) {
      return 0;
    }
    if ((uVar1 & param_3) == param_2) break;
    uVar1 = *(uint *)(lVar2 + 0xc);
    lVar2 = lVar2 + 8;
  }
  return lVar2;
}



// FUNCTION 1432d54c0 FUN_1432d54c0 body=94 status=ok
// SIG undefined FUN_1432d54c0(void)

ulonglong FUN_1432d54c0(uint *param_1)

{
  return (ulonglong)**(uint **)(param_1 + 8) ^
         (ulonglong)
         ((uint)(byte)(*(char *)((longlong)param_1 + 0xb) * '\x03' +
                      *(char *)((longlong)param_1 + 10)) << 2 ^
         (uint)(byte)(*(char *)((longlong)param_1 + 9) * '\x03' + (char)param_1[2])) << 2 ^
         *(ulonglong *)(param_1 + 4) >> 2 ^ (ulonglong)param_1[1] ^ *(ulonglong *)(param_1 + 6) ^
         (ulonglong)*param_1;
}



// FUNCTION 1432d5520 FUN_1432d5520 body=47 status=ok
// SIG undefined FUN_1432d5520(void)

undefined4 FUN_1432d5520(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 8);
  uVar2 = *(uint *)(lVar3 + 4);
  while (uVar2 != 0) {
    uVar2 = uVar2 & 0xf00;
    if (uVar2 == param_2) goto LAB_1432d5548;
    puVar1 = (uint *)(lVar3 + 0xc);
    lVar3 = lVar3 + 8;
    uVar2 = *puVar1;
  }
  lVar3 = 0;
  uVar2 = 0;
LAB_1432d5548:
  return CONCAT31((int3)(uVar2 >> 8),lVar3 != 0);
}



// FUNCTION 1432d5550 FUN_1432d5550 body=220 status=ok
// SIG undefined FUN_1432d5550(void)

void FUN_1432d5550(longlong *param_1,ulonglong param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  void *_Src;
  longlong lVar5;
  longlong *plVar6;
  
  uVar2 = param_1[1];
  uVar1 = uVar2 + 1;
  FUN_1432d5d90(param_1,param_1,uVar1);
  if (uVar2 < uVar1) {
    puVar4 = (undefined8 *)(uVar2 * 0x10 + *param_1);
    for (lVar5 = uVar1 - uVar2; lVar5 != 0; lVar5 = lVar5 + -1) {
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &PTR_LOOP_1467cd040;
        puVar4[1] = 0;
      }
      puVar4 = puVar4 + 2;
    }
  }
  if (param_2 < param_1[1] - 1U) {
    _Src = (void *)(param_2 * 0x10 + *param_1);
    memmove((void *)((longlong)_Src + 0x10),_Src,(param_1[1] - param_2) * 0x10 - 0x10);
  }
  plVar6 = (longlong *)(param_2 * 0x10 + *param_1);
  if (plVar6 != (longlong *)0x0) {
    ppuVar3 = (undefined **)*param_3;
    *plVar6 = (longlong)ppuVar3;
    if (ppuVar3 != &PTR_LOOP_1467cd040) {
      *(int *)(*ppuVar3 + 8) = *(int *)(*ppuVar3 + 8) + 1;
    }
    if ((RefCountImpl *)param_3[1] != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef((RefCountImpl *)param_3[1]);
    }
    plVar6[1] = param_3[1];
  }
  return;
}



// FUNCTION 1432d5630 FUN_1432d5630 body=193 status=ok
// SIG undefined FUN_1432d5630(void)

void FUN_1432d5630(longlong *param_1,ulonglong param_2,longlong *param_3)

{
  ulonglong uVar1;
  void *_Src;
  longlong *plVar2;
  ulonglong uVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  uVar3 = param_1[1];
  uVar1 = uVar3 + 1;
  FUN_1432d5ee0(param_1,param_1,uVar1);
  if (uVar3 < uVar1) {
    puVar5 = (undefined8 *)(*param_1 + uVar3 * 8);
    for (lVar6 = uVar1 - uVar3; lVar6 != 0; lVar6 = lVar6 + -1) {
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &PTR_LOOP_1467cd040;
      }
      puVar5 = puVar5 + 1;
    }
  }
  if (param_2 < param_1[1] - 1U) {
    _Src = (void *)(*param_1 + param_2 * 8);
    memmove((void *)((longlong)_Src + 8),_Src,(param_1[1] - param_2) * 8 - 8);
  }
  plVar2 = (longlong *)(*param_1 + param_2 * 8);
  if (plVar2 != (longlong *)0x0) {
    ppuVar4 = (undefined **)*param_3;
    *plVar2 = (longlong)ppuVar4;
    if (ppuVar4 != &PTR_LOOP_1467cd040) {
      *(int *)(*ppuVar4 + 8) = *(int *)(*ppuVar4 + 8) + 1;
    }
  }
  return;
}



// FUNCTION 1432d5790 FUN_1432d5790 body=154 status=ok
// SIG undefined FUN_1432d5790(void)

void FUN_1432d5790(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  
  uVar2 = *param_1;
  puVar1 = param_1 + 1;
  puVar8 = puVar1;
  if (2 < uVar2) {
    puVar8 = (ulonglong *)*puVar1;
  }
  uVar7 = 0;
  if (uVar2 != 0) {
    while (puVar8[uVar7] != *param_2) {
      uVar7 = uVar7 + 1;
      if (uVar2 <= uVar7) {
        return;
      }
    }
    puVar8 = puVar1;
    if (2 < uVar2) {
      puVar8 = (ulonglong *)*puVar1;
    }
    memmove(puVar8 + uVar7,puVar8 + uVar7 + 1,(uVar2 - uVar7) * 8 - 8);
    *param_1 = *param_1 - 1;
    if (*param_1 == 2) {
      puVar3 = (undefined4 *)*puVar1;
      uVar4 = puVar3[1];
      uVar5 = puVar3[2];
      uVar6 = puVar3[3];
      *(undefined4 *)puVar1 = *puVar3;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
      *(undefined4 *)(param_1 + 2) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar6;
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
  }
  return;
}



// FUNCTION 1432d5860 FUN_1432d5860 body=81 status=ok
// SIG undefined FUN_1432d5860(void)

void FUN_1432d5860(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_1432d5790(param_1 + 0x90,local_res10);
  plVar1 = *(longlong **)(param_1 + 0x50);
  if (((plVar1 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x90) == 0)) &&
     (*(longlong *)(param_1 + 0x28) == 0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1,param_1);
  }
  return;
}



// FUNCTION 1432d58c0 FUN_1432d58c0 body=148 status=ok
// SIG undefined FUN_1432d58c0(void)

void FUN_1432d58c0(longlong *param_1,longlong param_2,longlong param_3)

{
  if (param_1[1] == param_3) {
    FUN_1432d5d90(param_1,param_1,0);
    return;
  }
  FUN_1432d5420(*param_1 + param_2 * 0x10,param_3);
  memmove((void *)(*param_1 + param_2 * 0x10),(void *)((param_2 + param_3) * 0x10 + *param_1),
          ((param_1[1] - param_2) - param_3) * 0x10);
  param_1[1] = param_1[1] - param_3;
  return;
}



// FUNCTION 1432d5960 FUN_1432d5960 body=190 status=ok
// SIG undefined FUN_1432d5960(void)

void FUN_1432d5960(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_1[1] == param_3) {
    FUN_1432d5ee0(param_1,param_1,0);
    return;
  }
  lVar1 = (param_2 + param_3) * 8;
  plVar2 = (longlong *)(*param_1 + -8 + lVar1);
  for (lVar3 = param_3; lVar3 != 0; lVar3 = lVar3 + -1) {
    if ((undefined **)*plVar2 != &PTR_LOOP_1467cd040) {
      FUN_1432c03a0(*(undefined **)*plVar2);
    }
    plVar2 = plVar2 + -1;
  }
  memmove((void *)(*param_1 + param_2 * 8),(void *)(*param_1 + lVar1),
          ((param_1[1] - param_2) - param_3) * 8);
  param_1[1] = param_1[1] - param_3;
  return;
}



// FUNCTION 1432d5a20 FUN_1432d5a20 body=161 status=ok
// SIG undefined FUN_1432d5a20(void)

void FUN_1432d5a20(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    if (param_3 == 0) {
      uVar2 = 0;
      if (*param_1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 3U & 0xfffffffffffffffc;
      if (*param_1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))();
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 2;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 0x38,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}


