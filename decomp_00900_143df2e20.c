// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143df2e20 OnKillFocus body=57 status=ok
// SIG undefined OnKillFocus(void)

void Scaleform::GFx::Text::EditorKit::OnKillFocus(longlong param_1)

{
  FUN_1433ffe20(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x9c));
  FUN_1433ffef0(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x98));
  *(ushort *)(param_1 + 0xa0) = *(ushort *)(param_1 + 0xa0) & 0xfb9f;
  return;
}



// FUNCTION 143df2e60 FUN_143df2e60 body=744 status=ok
// SIG undefined FUN_143df2e60(void)

undefined8
FUN_143df2e60(longlong param_1,ulonglong param_2,float *param_3,uint *param_4,uint *param_5,
             char param_6,uint *param_7)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float fVar13;
  ulonglong local_d8;
  ulonglong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  RefCountImpl *local_58;
  RefCountNTSImpl *pRStack_50;
  undefined8 local_48;
  
  Scaleform::Render::Text::DocView::ForceReformat(*(undefined8 *)(param_1 + 0x10));
  uVar3 = FUN_1433fee70(*(undefined8 *)(param_1 + 0x10),param_2);
  if (uVar3 == 0xffffffff) {
    return 0;
  }
  puVar2 = *(uint **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x50) + (ulonglong)uVar3 * 8);
  if (param_7 != (uint *)0x0) {
    *param_7 = *puVar2 >> 0x1b & 3;
  }
  uVar7 = *puVar2;
  if ((int)uVar7 < 0) {
    uVar5 = (ulonglong)(puVar2[2] & 0xffffff);
    if ((puVar2[2] & 0xffffff) == 0xffffff) {
      uVar5 = 0xffffffff;
    }
  }
  else {
    uVar5 = (ulonglong)puVar2[2];
  }
  uVar12 = 0;
  if ((int)uVar7 < 0) {
    uVar10 = (uint)(byte)puVar2[7];
  }
  else {
    uVar10 = puVar2[1];
  }
  lVar8 = 0x2a;
  if ((int)uVar7 < 0) {
    lVar8 = 0x1e;
  }
  local_c8 = FUN_1433f23a0(puVar2);
  local_c0 = 0;
  local_d8 = lVar8 + (longlong)puVar2;
  local_b8 = 0;
  local_b0 = 0;
  local_d0 = local_d8 + (ulonglong)uVar10 * 8;
  local_a8 = 0xffffffffffffffff;
  local_a0 = 0;
  local_98 = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = (RefCountImpl *)0x0;
  pRStack_50 = (RefCountNTSImpl *)0x0;
  local_48 = 0;
  FUN_1433f2020(&local_d8);
  uVar9 = uVar12;
  uVar11 = uVar12;
  while( true ) {
    uVar7 = (uint)uVar9;
    uVar10 = (uint)uVar11;
    if ((((local_d8 == 0) || (local_d0 <= local_d8)) || (0xfff < *(ushort *)(local_d8 + 4))) ||
       ((*(ushort *)(local_d8 + 6) >> 8 & 1) != 0)) break;
    uVar4 = (uint)*(ushort *)(local_d8 + 2);
    if (((byte)*(ushort *)(local_d8 + 6) >> 6 & 1) != 0) {
      uVar4 = -(uint)*(ushort *)(local_d8 + 2);
    }
    uVar11 = (ulonglong)(uVar10 + uVar4);
    uVar9 = (ulonglong)(uVar7 + 1);
    Scaleform::Render::Text::LineBuffer::GlyphIterator::operator++(&local_d8);
  }
  if (param_2 != uVar5) {
    do {
      uVar7 = (uint)uVar9;
      uVar10 = (uint)uVar11;
      if ((local_d8 == 0) || (local_d0 <= local_d8)) break;
      bVar6 = (byte)*(undefined2 *)(local_d8 + 6);
      uVar4 = (uint)*(ushort *)(local_d8 + 2);
      if ((bVar6 >> 6 & 1) != 0) {
        uVar4 = -(uint)*(ushort *)(local_d8 + 2);
      }
      uVar10 = uVar10 + uVar4;
      uVar11 = (ulonglong)uVar10;
      if ((param_6 == '\0') || ((bVar6 >> 2 & 1) == 0)) {
        uVar12 = (ulonglong)((int)uVar12 + (uint)(*(ushort *)(local_d8 + 4) >> 0xc));
      }
      uVar7 = uVar7 + 1;
      uVar9 = (ulonglong)uVar7;
      Scaleform::Render::Text::LineBuffer::GlyphIterator::operator++(&local_d8);
    } while (uVar12 < param_2 - uVar5);
  }
  fVar13 = 0.0;
  if ((local_d8 != 0) && (local_d8 < local_d0)) {
    uVar4 = (uint)*(ushort *)(local_d8 + 2);
    if ((*(byte *)(local_d8 + 6) >> 6 & 1) != 0) {
      uVar4 = -(uint)*(ushort *)(local_d8 + 2);
    }
    fVar13 = (float)(int)uVar4;
  }
  uVar4 = puVar2[3];
  *param_3 = (float)(int)uVar4 + (float)(int)uVar10;
  uVar1 = puVar2[4];
  param_3[2] = fVar13 + (float)(int)uVar4 + (float)(int)uVar10;
  param_3[1] = (float)(int)uVar1;
  if ((int)*puVar2 < 0) {
    uVar10 = (uint)*(ushort *)((longlong)puVar2 + 0x16);
  }
  else {
    uVar10 = puVar2[6];
  }
  param_3[3] = (float)(int)uVar10 + (float)(int)uVar1;
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar3;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar7;
  }
  if (pRStack_50 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(pRStack_50);
  }
  if (local_58 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(local_58);
  }
  return 1;
}



// FUNCTION 143df3150 FUN_143df3150 body=344 status=ok
// SIG undefined FUN_143df3150(void)

char FUN_143df3150(longlong param_1,undefined8 param_2,float *param_3,undefined4 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  float fVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  cVar3 = FUN_143df2e60(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  if (cVar3 != '\0') {
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x90);
    uVar4 = FUN_1433f3880(*(longlong *)(param_1 + 0x10) + 0x50);
    fVar6 = -(float)uVar2;
    *param_3 = fVar6 + *param_3;
    param_3[2] = fVar6 + param_3[2];
    param_3[1] = -(float)uVar4 + param_3[1];
    param_3[3] = -(float)uVar4 + param_3[3];
    pfVar5 = (float *)Scaleform::Render::Text::DocView::GetViewRect(*(undefined8 *)(param_1 + 0x10))
    ;
    fVar9 = (*(float *)(*(longlong *)(param_1 + 0x10) + 0x80) - *pfVar5) + *param_3;
    fVar10 = (*(float *)(*(longlong *)(param_1 + 0x10) + 0x84) - pfVar5[1]) + param_3[1];
    *param_3 = fVar9;
    param_3[1] = fVar10;
    fVar7 = (*(float *)(*(longlong *)(param_1 + 0x10) + 0x80) - *pfVar5) + param_3[2];
    fVar8 = (*(float *)(*(longlong *)(param_1 + 0x10) + 0x84) - pfVar5[1]) + param_3[3];
    param_3[2] = fVar7;
    param_3[3] = fVar8;
    fVar6 = pfVar5[1];
    fVar1 = *pfVar5;
    param_3[1] = fVar10 + fVar6;
    *param_3 = fVar9 + fVar1;
    param_3[2] = fVar7 + fVar1;
    param_3[3] = fVar8 + fVar6;
  }
  return cVar3;
}



// FUNCTION 143df32b0 FUN_143df32b0 body=118 status=ok
// SIG undefined FUN_143df32b0(void)

void FUN_143df32b0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x10))();
  if ((cVar1 == '\0') || ((*(byte *)(param_1 + 0x14) >> 1 & 1) != 0)) {
    FUN_143df1be0(param_1,param_3,*(byte *)(param_1 + 0x14) >> 1 & 1);
  }
  FUN_1433ffcf0(param_1[2],param_2,param_3,*(byte *)(param_1 + 0x14) >> 1 & 1);
  return;
}



// FUNCTION 143df3330 FUN_143df3330 body=256 status=ok
// SIG undefined FUN_143df3330(void)

void FUN_143df3330(longlong param_1,ulonglong param_2,ulonglong param_3,char param_4)

{
  RefCountNTSImpl *this;
  undefined2 *puVar1;
  ulonglong uVar2;
  undefined2 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x158) & 0x10) == 0)) {
    uVar2 = param_3;
    if (param_3 < param_2) {
      uVar2 = param_2;
      param_2 = param_3;
    }
    local_28 = (undefined2 *)0x0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    FUN_1433e4150(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10),&local_28,param_2,uVar2);
    if (param_4 == '\0') {
      puVar1 = &DAT_145af7bc0;
      if (local_28 != (undefined2 *)0x0) {
        puVar1 = local_28;
      }
      FUN_143393120(*(undefined8 *)(param_1 + 0x18),puVar1,local_20);
    }
    else {
      this = (RefCountNTSImpl *)
             FUN_1433e4560(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10),param_2,uVar2);
      puVar1 = &DAT_145af7bc0;
      if (local_28 != (undefined2 *)0x0) {
        puVar1 = local_28;
      }
      FUN_1433931b0(*(undefined8 *)(param_1 + 0x18),puVar1,local_20,this);
      if (this != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(this);
      }
    }
    Scaleform::WStringBuffer::~WStringBuffer(&local_28);
  }
  return;
}



// FUNCTION 143df3440 FUN_143df3440 body=148 status=ok
// SIG undefined FUN_143df3440(void)

void FUN_143df3440(longlong *param_1,ulonglong param_2,ulonglong param_3)

{
  longlong *plVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (param_1[3] != 0) {
    uVar3 = param_2;
    if (param_3 < param_2) {
      uVar3 = param_3;
      param_3 = param_2;
    }
    FUN_143df3330(param_1,uVar3,param_3);
    cVar2 = (**(code **)(*param_1 + 0x10))(param_1);
    if (cVar2 == '\0') {
      plVar1 = *(longlong **)(param_1[2] + 0x20);
      if ((plVar1 != (longlong *)0x0) &&
         (cVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1,uVar3,param_3 - uVar3), cVar2 == '\0'
         )) {
        return;
      }
      lVar4 = param_3 - uVar3;
      if (param_3 < uVar3) {
        lVar4 = 0;
      }
      FUN_1433e7f80(*(undefined8 *)(param_1[2] + 0x10),uVar3,lVar4);
    }
  }
  return;
}



// FUNCTION 143df34e0 FUN_143df34e0 body=1191 status=ok
// SIG undefined FUN_143df34e0(void)

RefCountNTSImpl *
FUN_143df34e0(longlong *param_1,RefCountNTSImpl *param_2,RefCountNTSImpl *param_3,char param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  RefCountNTSImpl *pRVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined2 *puVar13;
  RefCountNTSImpl *pRVar14;
  RefCountNTSImpl **ppRVar15;
  RefCountNTSImpl *pRVar16;
  RefCountNTSImpl *pRVar17;
  ulonglong local_68;
  RefCountNTSImpl *local_60;
  RefCountNTSImpl *local_58;
  RefCountNTSImpl *local_50;
  RefCountNTSImpl *local_48;
  RefCountNTSImpl *local_40;
  RefCountNTSImpl *local_38;
  undefined8 local_30;
  
  pRVar17 = (RefCountNTSImpl *)&DAT_ffffffffffffffff;
  cVar3 = (**(code **)(*param_1 + 0x10))();
  if (cVar3 != '\0') {
    return (RefCountNTSImpl *)&DAT_ffffffffffffffff;
  }
  if ((longlong *)param_1[3] == (longlong *)0x0) {
    return (RefCountNTSImpl *)&DAT_ffffffffffffffff;
  }
  pRVar16 = param_2;
  if (param_3 < param_2) {
    pRVar16 = param_3;
    param_3 = param_2;
  }
  pRVar14 = (RefCountNTSImpl *)0x0;
  if ((param_4 == '\0') || (cVar3 = (**(code **)(*(longlong *)param_1[3] + 0x30))(), cVar3 == '\0'))
  {
    puVar10 = (undefined8 *)(**(code **)(*(longlong *)param_1[3] + 0x20))();
    if (puVar10[1] == 0) goto LAB_143df37ee;
    *(ushort *)(param_1 + 0x14) = *(ushort *)(param_1 + 0x14) & 0xffbf;
    if (pRVar16 == param_3) {
      plVar1 = *(longlong **)(param_1[2] + 0x20);
      if (plVar1 != (longlong *)0x0) {
        puVar13 = &DAT_145af7bc0;
        if ((undefined2 *)*puVar10 != (undefined2 *)0x0) {
          puVar13 = (undefined2 *)*puVar10;
        }
        cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,pRVar16,puVar10[1],puVar13);
        if (cVar3 == '\0') goto LAB_143df36ca;
      }
      ppRVar15 = &local_60;
      local_50 = (RefCountNTSImpl *)puVar10[1];
      uVar12 = 1;
      local_60 = pRVar16;
      local_58 = (RefCountNTSImpl *)&DAT_145af7bc0;
      if ((RefCountNTSImpl *)*puVar10 != (RefCountNTSImpl *)0x0) {
        local_58 = (RefCountNTSImpl *)*puVar10;
      }
    }
    else {
      plVar1 = *(longlong **)(param_1[2] + 0x20);
      if (plVar1 != (longlong *)0x0) {
        cVar3 = (**(code **)(*plVar1 + 0x68))
                          (plVar1,param_1,pRVar16,(longlong)param_3 - (longlong)pRVar16);
        if (cVar3 == '\0') goto LAB_143df36ca;
        puVar13 = &DAT_145af7bc0;
        if ((undefined2 *)*puVar10 != (undefined2 *)0x0) {
          puVar13 = (undefined2 *)*puVar10;
        }
        cVar3 = (**(code **)(**(longlong **)(param_1[2] + 0x20) + 0x60))
                          (*(longlong **)(param_1[2] + 0x20),param_1,pRVar16,puVar10[1],puVar13);
        if (cVar3 == '\0') goto LAB_143df36ca;
      }
      ppRVar15 = &local_48;
      local_30 = puVar10[1];
      uVar12 = 6;
      local_48 = pRVar16;
      local_40 = param_3;
      local_38 = (RefCountNTSImpl *)&DAT_145af7bc0;
      if ((RefCountNTSImpl *)*puVar10 != (RefCountNTSImpl *)0x0) {
        local_38 = (RefCountNTSImpl *)*puVar10;
      }
    }
    lVar9 = FUN_1433fc4b0(param_1[2],uVar12,ppRVar15);
    pRVar17 = pRVar16 + lVar9;
    goto LAB_143df37ee;
  }
  pRVar8 = (RefCountNTSImpl *)(**(code **)(*(longlong *)param_1[3] + 0x28))();
  if (pRVar8 == (RefCountNTSImpl *)0x0) goto LAB_143df37ee;
  *(int *)(pRVar8 + 8) = *(int *)(pRVar8 + 8) + 1;
  lVar9 = Scaleform::Render::Text::StyledText::GetLength(pRVar8);
  if (lVar9 != 0) {
    *(ushort *)(param_1 + 0x14) = *(ushort *)(param_1 + 0x14) & 0xffbf;
    if (pRVar16 == param_3) {
      if (*(longlong *)(param_1[2] + 0x20) != 0) {
        local_48 = (RefCountNTSImpl *)0x0;
        local_40 = (RefCountNTSImpl *)0x0;
        local_38 = (RefCountNTSImpl *)0x0;
        local_30 = 0;
        FUN_1433e4080(pRVar8,&local_48);
        pRVar17 = (RefCountNTSImpl *)&DAT_145af7bc0;
        if (local_48 != (RefCountNTSImpl *)0x0) {
          pRVar17 = local_48;
        }
        cVar3 = (**(code **)(**(longlong **)(param_1[2] + 0x20) + 0x60))
                          (*(longlong **)(param_1[2] + 0x20),param_1,pRVar16,local_40,pRVar17);
        if (cVar3 == '\0') goto LAB_143df36bd;
        Scaleform::WStringBuffer::~WStringBuffer(&local_48);
      }
      uVar12 = 2;
      local_58 = pRVar8;
    }
    else {
      if (*(longlong *)(param_1[2] + 0x20) != 0) {
        local_48 = (RefCountNTSImpl *)0x0;
        local_40 = (RefCountNTSImpl *)0x0;
        local_38 = (RefCountNTSImpl *)0x0;
        local_30 = 0;
        FUN_1433e4080(pRVar8,&local_48);
        cVar3 = (**(code **)(**(longlong **)(param_1[2] + 0x20) + 0x68))
                          (*(longlong **)(param_1[2] + 0x20),param_1,pRVar16,
                           (longlong)param_3 - (longlong)pRVar16);
        if (cVar3 != '\0') {
          pRVar17 = (RefCountNTSImpl *)&DAT_145af7bc0;
          if (local_48 != (RefCountNTSImpl *)0x0) {
            pRVar17 = local_48;
          }
          cVar3 = (**(code **)(**(longlong **)(param_1[2] + 0x20) + 0x60))
                            (*(longlong **)(param_1[2] + 0x20),param_1,pRVar16,local_40,pRVar17);
          if (cVar3 != '\0') {
            Scaleform::WStringBuffer::~WStringBuffer(&local_48);
            goto LAB_143df3686;
          }
        }
LAB_143df36bd:
        Scaleform::WStringBuffer::~WStringBuffer(&local_48);
        Scaleform::RefCountNTSImpl::Release(pRVar8);
LAB_143df36ca:
        return (RefCountNTSImpl *)&DAT_ffffffffffffffff;
      }
LAB_143df3686:
      uVar12 = 7;
      local_58 = param_3;
      local_50 = pRVar8;
    }
    local_60 = pRVar16;
    lVar9 = FUN_1433fc4b0(param_1[2],uVar12,&local_60);
    pRVar17 = pRVar16 + lVar9;
  }
  Scaleform::RefCountNTSImpl::Release(pRVar8);
LAB_143df37ee:
  if (param_1[5] != 0) {
    pRVar8 = (RefCountNTSImpl *)
             Scaleform::Render::Text::StyledText::GetLength(*(undefined8 *)(param_1[2] + 0x10));
    FBaseCompactPose<TMemStackAllocator<0>_>::GetParentBoneIndex(param_1[2],&local_68);
    pRVar16 = pRVar14;
    if (pRVar8 != (RefCountNTSImpl *)0x0) {
      do {
        uVar4 = FUN_1432c35f0(&local_68,pRVar16);
        lVar9 = param_1[5];
        if (lVar9 != 0) {
          uVar11 = FUN_143df3fc0(lVar9,uVar4 & 0xffff);
          if (uVar11 == 0xffffffffffffffff) {
LAB_143df3877:
            bVar2 = true;
          }
          else {
            if ((longlong)uVar11 < 0) {
              uVar11 = 0;
            }
            else {
              if (*(ulonglong *)(lVar9 + 8) <= uVar11) {
                uVar11 = *(ulonglong *)(lVar9 + 8) - 1;
              }
              if ((longlong)uVar11 < 0) goto LAB_143df3877;
            }
            if (*(ulonglong *)(lVar9 + 8) <= uVar11) goto LAB_143df3877;
            bVar2 = false;
          }
          if (bVar2) {
            uVar5 = FUN_14331b3e0(uVar4 & 0xffff);
            uVar6 = FUN_14331b480(uVar4 & 0xffff);
            if (uVar4 != uVar5) {
              uVar6 = uVar5;
            }
            lVar9 = param_1[5];
            if (lVar9 != 0) {
              uVar11 = FUN_143df3fc0(lVar9,uVar6 & 0xffff);
              if (uVar11 == 0xffffffffffffffff) {
LAB_143df38e2:
                bVar2 = true;
              }
              else {
                if ((longlong)uVar11 < 0) {
                  uVar11 = 0;
                }
                else {
                  if (*(ulonglong *)(lVar9 + 8) <= uVar11) {
                    uVar11 = *(ulonglong *)(lVar9 + 8) - 1;
                  }
                  if ((longlong)uVar11 < 0) goto LAB_143df38e2;
                }
                if (*(ulonglong *)(lVar9 + 8) <= uVar11) goto LAB_143df38e2;
                bVar2 = false;
              }
              if (bVar2) {
                local_60 = pRVar14;
                FUN_1433fc4b0(param_1[2],3,&local_60);
                pRVar14 = pRVar14 + -1;
                goto LAB_143df3929;
              }
            }
            local_58 = pRVar14 + 1;
            local_50 = (RefCountNTSImpl *)CONCAT62(local_50._2_6_,(short)uVar6);
            local_60 = pRVar14;
            FUN_1433fc4b0(param_1[2],5,&local_60);
          }
        }
LAB_143df3929:
        pRVar16 = pRVar16 + 1;
        pRVar14 = pRVar14 + 1;
      } while (pRVar16 < pRVar8);
    }
    iVar7 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_68 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar7 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_68 & 0xfffffffffffffffc);
    }
  }
  return pRVar17;
}



// FUNCTION 143df3990 FUN_143df3990 body=91 status=ok
// SIG undefined FUN_143df3990(void)

undefined1 FUN_143df3990(longlong param_1,ulonglong *param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_143df1250(param_1,(longlong)(*param_2 & 0xfffffffffffffffc) + 0xc,
                        *(ulonglong *)(*param_2 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
  FUN_1432c4d80(*(longlong *)(param_1 + 0x28) + 0x18,param_2);
  return uVar1;
}



// FUNCTION 143df3a20 FUN_143df3a20 body=153 status=ok
// SIG undefined FUN_143df3a20(void)

void FUN_143df3a20(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  int iVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    if (*(char *)(param_1 + 0x30) != '\0') {
      *(undefined1 *)(param_1 + 0x30) = 0;
      uVar2 = puVar1[3];
      iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        ((uVar2 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar3 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar2 & 0xfffffffffffffffc);
      }
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*puVar1);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar1);
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x30) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 143df3ac0 FUN_143df3ac0 body=93 status=ok
// SIG undefined FUN_143df3ac0(void)

bool FUN_143df3ac0(longlong param_1,undefined2 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    return true;
  }
  uVar2 = FUN_143df3fc0(lVar1,param_2);
  uVar4 = 0;
  if (uVar2 != 0xffffffffffffffff) {
    uVar3 = uVar4;
    if (-1 < (longlong)uVar2) {
      if (*(ulonglong *)(lVar1 + 8) <= uVar2) {
        uVar2 = *(ulonglong *)(lVar1 + 8) - 1;
      }
      uVar3 = uVar2;
      if ((longlong)uVar2 < 0) goto LAB_143df3b05;
    }
    if (uVar3 < *(ulonglong *)(lVar1 + 8)) goto LAB_143df3b0a;
  }
LAB_143df3b05:
  uVar4 = 1;
LAB_143df3b0a:
  return (char)uVar4 == '\0';
}



// FUNCTION 143df3b20 FUN_143df3b20 body=151 status=ok
// SIG undefined FUN_143df3b20(void)

void FUN_143df3b20(longlong *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  int iVar3;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    if ((char)param_1[1] != '\0') {
      *(undefined1 *)(param_1 + 1) = 0;
      uVar2 = puVar1[3];
      iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        ((uVar2 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar3 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar2 & 0xfffffffffffffffc);
      }
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*puVar1);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar1);
    }
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 143df3bc0 FUN_143df3bc0 body=163 status=ok
// SIG undefined FUN_143df3bc0(void)

RefCountImplCore * FUN_143df3bc0(RefCountImplCore *param_1,ulonglong param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145dc8ba0;
  FUN_143df3b20(param_1 + 0x28);
  if (*(RefCountImpl **)(param_1 + 0x20) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x20));
  }
  if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
  }
  if (*(RefCountImpl **)(param_1 + 0x10) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x10));
  }
  *(undefined ***)param_1 = &PTR_FUN_145af9958;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 143df3c70 FUN_143df3c70 body=838 status=ok
// SIG undefined FUN_143df3c70(void)

void FUN_143df3c70(longlong *param_1,longlong param_2,ulonglong param_3)

{
  void *_Src;
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  longlong *local_28;
  ulonglong local_20;
  
  uVar4 = param_1[1];
  if (uVar4 == 0) {
    return;
  }
  local_20 = FUN_1433e97b0();
  if ((longlong)local_20 < 0) {
    local_20 = 0;
  }
  else if (uVar4 <= local_20) {
    local_20 = uVar4 - 1;
  }
  uVar6 = local_20;
  if (param_3 == 0xffffffffffffffff) {
    param_3 = 0x7fffffffffffffff - param_2;
  }
  lVar7 = local_20 * 0x18;
  plVar5 = (longlong *)(*param_1 + lVar7);
  local_28 = param_1;
  if ((param_2 < *plVar5) || (*plVar5 + plVar5[1] + -1 < (longlong)(param_2 + param_3 + -1))) {
    if ((param_2 < *plVar5) || (*plVar5 + -1 + plVar5[1] < param_2)) {
      bVar10 = SBORROW8(local_20,uVar4);
      bVar9 = (longlong)(local_20 - uVar4) < 0;
    }
    else {
      uVar4 = (plVar5[1] - param_2) + *plVar5;
      if ((ulonglong)plVar5[1] < uVar4) {
        plVar5[1] = 0;
      }
      else {
        plVar5[1] = plVar5[1] - uVar4;
      }
LAB_143df3e3e:
      lVar7 = param_1[1];
      if (lVar7 <= (longlong)local_20) goto LAB_143df3ec2;
      local_20 = local_20 + 1;
      bVar10 = SBORROW8(local_20,lVar7);
      bVar9 = (longlong)(local_20 - lVar7) < 0;
      uVar6 = local_20;
    }
  }
  else if (*plVar5 == param_2) {
    uVar4 = plVar5[1];
    uVar3 = param_3;
    if ((longlong)uVar4 < (longlong)param_3) {
      uVar3 = uVar4;
    }
    *plVar5 = *plVar5 + uVar3;
    plVar5[1] = uVar4 - uVar3;
    if (*(longlong *)(lVar7 + 8 + *param_1) == 0) {
      FUN_143df4190(&local_28);
      goto LAB_143df3ec2;
    }
    bVar10 = SBORROW8(local_20,param_1[1]);
    bVar9 = (longlong)(local_20 - param_1[1]) < 0;
  }
  else {
    if (plVar5[1] + *plVar5 <= (longlong)(param_2 + param_3)) {
      if ((ulonglong)plVar5[1] < param_3) {
        plVar5[1] = 0;
      }
      else {
        plVar5[1] = plVar5[1] - param_3;
      }
      goto LAB_143df3e3e;
    }
    uVar4 = plVar5[1];
    lVar8 = *plVar5;
    lVar1 = plVar5[2];
    uVar6 = (uVar4 - param_2) + lVar8;
    if (uVar4 < uVar6) {
      plVar5[1] = 0;
    }
    else {
      plVar5[1] = uVar4 - uVar6;
    }
    uVar3 = *(longlong *)(lVar7 + 8 + *param_1) + param_3;
    if ((longlong)uVar4 < (longlong)uVar3) {
      uVar3 = uVar4;
    }
    if ((longlong)local_20 < param_1[1]) {
      local_20 = local_20 + 1;
    }
    uVar6 = local_20;
    FUN_143df42c0(param_1,param_1[1] + 1);
    if (uVar6 < param_1[1] - 1U) {
      _Src = (void *)(*param_1 + uVar6 * 0x18);
      memmove((void *)((longlong)_Src + 0x18),_Src,(param_1[1] - uVar6) * 0x18 - 0x18);
    }
    plVar5 = (longlong *)(*param_1 + uVar6 * 0x18);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = lVar8 + uVar3;
      plVar5[1] = uVar4 - uVar3;
      plVar5[2] = lVar1;
    }
    bVar10 = SBORROW8(uVar6,param_1[1]);
    bVar9 = (longlong)(uVar6 - param_1[1]) < 0;
  }
  if (bVar10 != bVar9) {
    uVar6 = uVar6 + 1;
    local_20 = uVar6;
  }
LAB_143df3ec2:
  cVar2 = Scaleform::
          RangeDataArray<void_*___ptr64,Scaleform::ArrayLH<Scaleform::RangeData<void_*___ptr64>,2,Scaleform::ArrayDefaultPolicy>_>
          ::Iterator::IsFinished(&local_28);
  if (cVar2 == '\0') {
    do {
      plVar5 = (longlong *)(*param_1 + uVar6 * 0x18);
      if ((*plVar5 < param_2) || ((longlong)(param_2 + -1 + param_3) < *plVar5 + plVar5[1] + -1))
      break;
      if ((-1 < (longlong)uVar6) && (uVar4 = param_1[1], uVar6 < uVar4)) {
        if (uVar4 == 1) {
          FUN_143df42c0(param_1,0);
        }
        else {
          memmove(plVar5,plVar5 + 3,(uVar4 - uVar6) * 0x18 - 0x18);
          param_1[1] = param_1[1] + -1;
        }
      }
      cVar2 = Scaleform::
              RangeDataArray<void_*___ptr64,Scaleform::ArrayLH<Scaleform::RangeData<void_*___ptr64>,2,Scaleform::ArrayDefaultPolicy>_>
              ::Iterator::IsFinished(&local_28);
    } while (cVar2 == '\0');
  }
  if ((-1 < (longlong)uVar6) && (uVar6 < (ulonglong)param_1[1])) {
    lVar8 = param_2 + -1 + param_3;
    plVar5 = (longlong *)(*param_1 + uVar6 * 0x18);
    lVar7 = *(longlong *)(*param_1 + uVar6 * 0x18);
    if ((lVar7 <= lVar8) && (lVar1 = plVar5[1], lVar8 <= lVar7 + -1 + lVar1)) {
      lVar7 = (param_2 - *plVar5) + param_3;
      if (lVar1 < lVar7) {
        lVar7 = lVar1;
      }
      *plVar5 = *plVar5 + lVar7;
      plVar5[1] = lVar1 - lVar7;
    }
  }
  return;
}



// FUNCTION 143df3fc0 FUN_143df3fc0 body=234 status=ok
// SIG undefined FUN_143df3fc0(void)

ulonglong FUN_143df3fc0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar8 = 0;
  uVar6 = param_1[1] - 1;
  iVar5 = (int)param_2;
  if (uVar6 != 0) {
    do {
      if (uVar6 == 0xffffffffffffffff) break;
      uVar7 = uVar6 + uVar8 >> 1;
      lVar3 = *(longlong *)(*param_1 + uVar7 * 0x18);
      lVar1 = *param_1 + uVar7 * 0x18;
      if (param_2 < lVar3) {
LAB_143df4013:
        iVar4 = (int)lVar3 - iVar5;
      }
      else {
        if (param_2 <= lVar3 + -1 + *(longlong *)(lVar1 + 8)) {
          return uVar7;
        }
        if (param_2 < lVar3) goto LAB_143df4013;
        iVar4 = (int)lVar3 + -1 + (*(int *)(lVar1 + 8) - iVar5);
      }
      if (iVar4 == 0) {
        return uVar7;
      }
      if (iVar4 < 0) {
        uVar8 = uVar7 + 1;
      }
      else {
        uVar6 = uVar7 - 1;
      }
    } while (uVar8 < uVar6);
  }
  if (uVar8 != uVar6) {
    return 0xffffffffffffffff;
  }
  lVar1 = *(longlong *)(*param_1 + uVar8 * 0x18);
  piVar2 = (int *)(*param_1 + uVar8 * 0x18);
  if (lVar1 <= param_2) {
    if (param_2 <= lVar1 + -1 + *(longlong *)(piVar2 + 2)) {
      return uVar8;
    }
    if (lVar1 <= param_2) {
      iVar5 = *piVar2 + -1 + (piVar2[2] - iVar5);
      goto LAB_143df4089;
    }
  }
  iVar5 = (int)lVar1 - iVar5;
LAB_143df4089:
  if (iVar5 != 0) {
    return 0xffffffffffffffff;
  }
  return uVar8;
}



// FUNCTION 143df40b0 FUN_143df40b0 body=139 status=ok
// SIG undefined FUN_143df40b0(void)

void FUN_143df40b0(longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  void *_Src;
  undefined8 *puVar1;
  undefined8 uVar2;
  
  FUN_143df42c0(param_1,param_1[1] + 1);
  if (param_2 < param_1[1] - 1U) {
    _Src = (void *)(*param_1 + param_2 * 0x18);
    memmove((void *)((longlong)_Src + 0x18),_Src,(param_1[1] - param_2) * 0x18 - 0x18);
  }
  puVar1 = (undefined8 *)(*param_1 + param_2 * 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3[1];
    *puVar1 = *param_3;
    puVar1[1] = uVar2;
    puVar1[2] = param_3[2];
  }
  return;
}



// FUNCTION 143df4140 IsLineVisible body=57 status=ok
// SIG undefined IsLineVisible(void)

void Scaleform::Render::Text::LineBuffer::IsLineVisible(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_1433f3880();
  FUN_1433f38d0(param_1,param_2,-(float)uVar1);
  return;
}



// FUNCTION 143df4190 FUN_143df4190 body=106 status=ok
// SIG undefined FUN_143df4190(void)

void FUN_143df4190(longlong *param_1)

{
  void *_Dst;
  ulonglong uVar1;
  
  uVar1 = param_1[1];
  if ((-1 < (longlong)uVar1) && (param_1 = (longlong *)*param_1, uVar1 < (ulonglong)param_1[1])) {
    if (param_1[1] == 1) {
      FUN_143df42c0(param_1,0);
      return;
    }
    _Dst = (void *)(*param_1 + uVar1 * 0x18);
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(param_1[1] - uVar1) * 0x18 - 0x18);
    param_1[1] = param_1[1] + -1;
  }
  return;
}



// FUNCTION 143df4200 FUN_143df4200 body=192 status=ok
// SIG undefined FUN_143df4200(void)

void FUN_143df4200(longlong *param_1,undefined8 *param_2,char param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  int iVar3;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != param_2) {
    if ((puVar1 != (undefined8 *)0x0) && ((char)param_1[1] != '\0')) {
      *(undefined1 *)(param_1 + 1) = 0;
      uVar2 = puVar1[3];
      iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        ((uVar2 & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar3 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar2 & 0xfffffffffffffffc);
      }
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*puVar1);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar1);
    }
    *param_1 = (longlong)param_2;
  }
  if ((param_2 != (undefined8 *)0x0) && (param_3 != '\0')) {
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 143df42c0 FUN_143df42c0 body=136 status=ok
// SIG undefined FUN_143df42c0(void)

void FUN_143df42c0(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = param_1[1];
  if (param_2 < uVar1) {
    uVar4 = param_2;
    if ((ulonglong)param_1[2] >> 1 <= param_2) goto LAB_143df4307;
  }
  else {
    if (param_2 <= (ulonglong)param_1[2]) goto LAB_143df4307;
    uVar4 = (param_2 >> 2) + param_2;
  }
  FUN_1433ea0d0(param_1,param_1,uVar4);
LAB_143df4307:
  param_1[1] = param_2;
  if (uVar1 < param_2) {
    puVar2 = (undefined8 *)(*param_1 + uVar1 * 0x18);
    for (lVar3 = param_2 - uVar1; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar2 + 3;
    }
  }
  return;
}



// FUNCTION 143df4350 FUN_143df4350 body=68 status=ok
// SIG undefined FUN_143df4350(void)

bool FUN_143df4350(ushort param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(&DAT_145afd5e0 + (ulonglong)(param_1 >> 8) * 2);
  if (uVar1 == 0) {
    return false;
  }
  if (uVar1 == 1) {
    return true;
  }
  return (*(ushort *)(&DAT_145afd5e0 + (ulonglong)((param_1 >> 4 & 0xf) + (uint)uVar1) * 2) >>
          (param_1 & 0xf) & 1) != 0;
}



// FUNCTION 143df43a0 FUN_143df43a0 body=1314 status=ok
// SIG undefined FUN_143df43a0(void)

void FUN_143df43a0(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  void *_Src;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *local_48;
  ulonglong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  uVar11 = param_1[1];
  if (uVar11 == 0) {
    FUN_143df40b0(param_1,0,param_2);
    return;
  }
  lVar15 = *param_2;
  local_40 = FUN_1433e97b0(param_1,lVar15);
  if ((longlong)local_40 < 0) {
    local_40 = 0;
  }
  else if (uVar11 <= local_40) {
    local_40 = uVar11 - 1;
  }
  uVar11 = local_40;
  lVar3 = local_40 * 0x18;
  plVar13 = (longlong *)(*param_1 + lVar3);
  local_30 = uVar11;
  local_48 = param_1;
  local_38 = param_1;
  if (lVar15 < *plVar13) {
LAB_143df45d2:
    if ((lVar15 < *plVar13) || (*plVar13 + -1 + plVar13[1] < lVar15)) {
      lVar3 = *plVar13;
      if (lVar15 < lVar3) {
LAB_143df4621:
        iVar9 = (int)lVar3 - (int)lVar15;
LAB_143df4633:
        if (0 < iVar9) goto LAB_143df4637;
      }
      else if (lVar3 + -1 + plVar13[1] < lVar15) {
        if (lVar15 < lVar3) goto LAB_143df4621;
        iVar9 = (int)lVar3 + -1 + ((int)plVar13[1] - (int)lVar15);
        goto LAB_143df4633;
      }
      uVar14 = local_40 + 1;
      FUN_143df40b0(param_1,uVar14,param_2);
      local_40 = uVar11;
      if ((longlong)uVar11 < param_1[1]) {
        uVar11 = uVar14;
        local_40 = uVar14;
        local_30 = uVar14;
      }
    }
    else {
      uVar11 = (plVar13[1] - lVar15) + *plVar13;
      if ((ulonglong)plVar13[1] < uVar11) {
        plVar13[1] = 0;
      }
      else {
        plVar13[1] = plVar13[1] - uVar11;
      }
LAB_143df45a7:
      if ((longlong)local_40 < param_1[1]) {
        local_40 = local_40 + 1;
      }
      uVar11 = local_40;
      local_30 = local_40;
      FUN_143df40b0(param_1,local_40,param_2);
    }
  }
  else {
    uVar14 = param_2[1];
    if (*plVar13 + plVar13[1] + -1 < (longlong)(uVar14 + lVar15 + -1)) goto LAB_143df45d2;
    uVar10 = plVar13[1];
    if (*plVar13 != lVar15) {
      if ((longlong)(uVar14 + lVar15) < (longlong)(uVar10 + *plVar13)) {
        lVar4 = plVar13[2];
        uVar14 = plVar13[1];
        lVar5 = *plVar13;
        uVar10 = (uVar14 - lVar15) + lVar5;
        if (uVar14 < uVar10) {
          plVar13[1] = 0;
        }
        else {
          plVar13[1] = uVar14 - uVar10;
        }
        uVar10 = local_40 + 1;
        uVar12 = *(longlong *)(lVar3 + 8 + *param_1) + param_2[1];
        if ((longlong)uVar14 < (longlong)uVar12) {
          uVar12 = uVar14;
        }
        FUN_143df40b0(param_1,uVar10,param_2);
        if ((longlong)uVar11 < param_1[1]) {
          uVar11 = uVar10;
        }
        uVar10 = uVar11 + 1;
        local_40 = uVar11;
        local_30 = uVar11;
        FUN_143df42c0(param_1,param_1[1] + 1);
        if (uVar10 < param_1[1] - 1U) {
          _Src = (void *)(*param_1 + uVar10 * 0x18);
          memmove((void *)((longlong)_Src + 0x18),_Src,(param_1[1] - uVar10) * 0x18 - 0x18);
        }
        plVar13 = (longlong *)(*param_1 + uVar10 * 0x18);
        if (plVar13 != (longlong *)0x0) {
          plVar13[2] = lVar4;
          *plVar13 = lVar5 + uVar12;
          plVar13[1] = uVar14 - uVar12;
        }
        uVar14 = uVar11;
        if ((longlong)uVar11 < param_1[1]) {
          uVar14 = uVar10;
          local_40 = uVar10;
        }
        goto LAB_143df467d;
      }
      if ((ulonglong)plVar13[1] < uVar14) {
        plVar13[1] = 0;
      }
      else {
        plVar13[1] = plVar13[1] - uVar14;
      }
      goto LAB_143df45a7;
    }
    if ((longlong)uVar10 < (longlong)uVar14) {
      uVar14 = uVar10;
    }
    *plVar13 = *plVar13 + uVar14;
    plVar13[1] = uVar10 - uVar14;
    lVar15 = *param_1;
    if (*(longlong *)(lVar3 + 8 + lVar15) == 0) {
      uVar6 = *(undefined4 *)((longlong)param_2 + 4);
      lVar4 = param_2[1];
      uVar7 = *(undefined4 *)((longlong)param_2 + 0xc);
      puVar1 = (undefined4 *)(lVar3 + lVar15);
      *puVar1 = (int)*param_2;
      puVar1[1] = uVar6;
      puVar1[2] = (int)lVar4;
      puVar1[3] = uVar7;
      *(longlong *)(lVar3 + 0x10 + lVar15) = param_2[2];
      local_40 = uVar11;
      goto LAB_143df4670;
    }
LAB_143df4637:
    FUN_143df40b0(param_1,local_40,param_2);
  }
LAB_143df4670:
  uVar14 = uVar11;
  if ((longlong)uVar11 < param_1[1]) {
    uVar14 = uVar11 + 1;
    local_40 = uVar11 + 1;
  }
LAB_143df467d:
  cVar8 = Scaleform::
          RangeDataArray<void_*___ptr64,Scaleform::ArrayLH<Scaleform::RangeData<void_*___ptr64>,2,Scaleform::ArrayDefaultPolicy>_>
          ::Iterator::IsFinished(&local_48);
  if (cVar8 == '\0') {
    do {
      plVar13 = (longlong *)(*param_1 + uVar14 * 0x18);
      if ((*plVar13 < *param_2) || (*param_2 + -1 + param_2[1] < *plVar13 + -1 + plVar13[1])) break;
      if ((-1 < (longlong)uVar14) && (uVar10 = param_1[1], uVar14 < uVar10)) {
        if (uVar10 == 1) {
          FUN_143df42c0(param_1,0);
        }
        else {
          memmove(plVar13,plVar13 + 3,(uVar10 - uVar14) * 0x18 - 0x18);
          param_1[1] = param_1[1] + -1;
        }
      }
      cVar8 = Scaleform::
              RangeDataArray<void_*___ptr64,Scaleform::ArrayLH<Scaleform::RangeData<void_*___ptr64>,2,Scaleform::ArrayDefaultPolicy>_>
              ::Iterator::IsFinished(&local_48);
    } while (cVar8 == '\0');
  }
  if ((-1 < (longlong)uVar14) && (uVar14 < (ulonglong)param_1[1])) {
    plVar13 = (longlong *)(*param_1 + uVar14 * 0x18);
    lVar15 = *param_2 + -1 + param_2[1];
    if ((*plVar13 <= lVar15) && (lVar3 = plVar13[1], lVar15 <= *plVar13 + -1 + lVar3)) {
      lVar15 = (param_2[1] - *plVar13) + *param_2;
      if (lVar3 < lVar15) {
        lVar15 = lVar3;
      }
      *plVar13 = *plVar13 + lVar15;
      plVar13[1] = lVar3 - lVar15;
    }
  }
  if (((-1 < (longlong)uVar11) && (uVar14 = uVar11 - 1, -1 < (longlong)uVar14)) &&
     (uVar10 = param_1[1], uVar14 < uVar10)) {
    lVar15 = *param_1;
    plVar13 = (longlong *)(lVar15 + uVar14 * 0x18);
    if (*(longlong *)(lVar15 + 8 + uVar14 * 0x18) == 0) {
      if (uVar10 == 1) {
        FUN_143df42c0(param_1,0);
        uVar11 = uVar14;
      }
      else {
        memmove(plVar13,plVar13 + 3,(uVar10 - uVar14) * 0x18 - 0x18);
        param_1[1] = param_1[1] + -1;
        uVar11 = uVar14;
      }
    }
    else if ((plVar13[1] + *plVar13 == *param_2) &&
            (plVar13[2] == *(longlong *)(lVar15 + 0x10 + uVar11 * 0x18))) {
      plVar13[1] = plVar13[1] + param_2[1];
      FUN_143df4190(&local_38);
      uVar11 = uVar14;
    }
  }
  uVar14 = param_1[1];
  local_30 = uVar11;
  if ((longlong)uVar11 < (longlong)uVar14) {
    local_30 = uVar11 + 1;
  }
  if ((-1 < (longlong)local_30) && (local_30 < uVar14)) {
    lVar15 = *param_1;
    lVar3 = *(longlong *)(lVar15 + 8 + local_30 * 0x18);
    plVar13 = (longlong *)(lVar15 + local_30 * 0x18);
    if (lVar3 == 0) {
      if (uVar14 == 1) {
        local_38 = param_1;
        FUN_143df42c0(param_1,0);
      }
      else {
        local_38 = param_1;
        memmove(plVar13,plVar13 + 3,(uVar14 - local_30) * 0x18 - 0x18);
        param_1[1] = param_1[1] + -1;
      }
    }
    else {
      plVar2 = (longlong *)(lVar15 + uVar11 * 0x18);
      if ((*(longlong *)(lVar15 + 8 + uVar11 * 0x18) + *plVar2 == *plVar13) &&
         (plVar2[2] == plVar13[2])) {
        plVar2[1] = plVar2[1] + lVar3;
        local_38 = param_1;
        FUN_143df4190(&local_38);
      }
    }
  }
  return;
}



// FUNCTION 143df48d0 ReleaseNode body=106 status=ok
// SIG undefined ReleaseNode(void)

void Scaleform::GFx::XML::DOMStringNode::ReleaseNode(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *local_res8;
  
  local_res8 = param_1;
  FUN_143df54c0(param_1[1],&local_res8);
  puVar1 = (undefined8 *)*param_1;
  lVar2 = param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    if (*(uint *)((longlong)param_1 + 0x14) < 0x10) {
      *puVar1 = *(undefined8 *)(lVar2 + 0x18);
      *(undefined8 **)(lVar2 + 0x18) = puVar1;
    }
    else {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    *param_1 = 0;
  }
  param_1[1] = *(longlong *)(lVar2 + 8);
  *(longlong **)(lVar2 + 8) = param_1;
  return;
}



// FUNCTION 143df4940 FUN_143df4940 body=10 status=ok
// SIG undefined FUN_143df4940(void)

longlong * FUN_143df4940(longlong *param_1,longlong param_2)

{
  *param_1 = param_2;
  *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  return param_1;
}



// FUNCTION 143df4950 DOMString body=13 status=ok
// SIG undefined DOMString(void)

longlong * Scaleform::GFx::XML::DOMString::DOMString(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  return param_1;
}



// FUNCTION 143df4970 FUN_143df4970 body=14 status=ok
// SIG undefined FUN_143df4970(void)

void FUN_143df4970(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plStackX_8;
  
  plVar4 = (longlong *)*param_1;
  plVar1 = plVar4 + 3;
  *(int *)plVar1 = (int)*plVar1 + -1;
  if ((int)*plVar1 != 0) {
    return;
  }
  plStackX_8 = plVar4;
  FUN_143df54c0(plVar4[1],&plStackX_8);
  puVar2 = (undefined8 *)*plVar4;
  lVar3 = plVar4[1];
  if (puVar2 != (undefined8 *)0x0) {
    if (*(uint *)((longlong)plVar4 + 0x14) < 0x10) {
      *puVar2 = *(undefined8 *)(lVar3 + 0x18);
      *(undefined8 **)(lVar3 + 0x18) = puVar2;
    }
    else {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    *plVar4 = 0;
  }
  plVar4[1] = *(longlong *)(lVar3 + 8);
  *(longlong **)(lVar3 + 8) = plVar4;
  return;
}



// FUNCTION 143df4990 FUN_143df4990 body=25 status=ok
// SIG undefined FUN_143df4990(void)

uint FUN_143df4990(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = Scaleform::String::BernsteinHashFunction(param_1,param_2,0x1505);
  return uVar1 & 0xffffff;
}



// FUNCTION 143df49b0 FUN_143df49b0 body=47 status=ok
// SIG undefined FUN_143df49b0(void)

void FUN_143df49b0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  
  *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  piVar1 = (int *)(*param_1 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    Scaleform::GFx::XML::DOMStringNode::ReleaseNode();
  }
  *param_1 = param_2;
  return;
}



// FUNCTION 143df49f0 FUN_143df49f0 body=95 status=ok
// SIG undefined FUN_143df49f0(void)

void FUN_143df49f0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x28) + 0x50))
                     (*(longlong **)(param_1 + 0x28),0xfe8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0x1fc] = *(undefined8 *)(param_1 + 0x10);
    lVar2 = 0x7f;
    *(undefined8 **)(param_1 + 0x10) = puVar1;
    do {
      *puVar1 = 0;
      puVar1[1] = *(undefined8 *)(param_1 + 8);
      *(undefined8 **)(param_1 + 8) = puVar1;
      puVar1 = puVar1 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 143df4a60 FUN_143df4a60 body=142 status=ok
// SIG undefined FUN_143df4a60(void)

void FUN_143df4a60(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x50))
                    (*(longlong **)(param_1 + 0x28),0x7f8,0);
  uVar5 = lVar3 + 7U & 0xfffffffffffffff8;
  if (uVar5 != 0) {
    *(longlong *)(uVar5 + 0x7e8) = lVar3;
    lVar3 = 0x15;
    *(undefined8 *)(uVar5 + 0x7e0) = *(undefined8 *)(param_1 + 0x20);
    puVar4 = (undefined8 *)(uVar5 + 0x20);
    *(ulonglong *)(param_1 + 0x20) = uVar5;
    do {
      puVar4[-4] = *(undefined8 *)(param_1 + 0x18);
      puVar4[-2] = puVar4 + -4;
      puVar1 = puVar4 + 4;
      *puVar4 = puVar4 + -2;
      puVar4[2] = puVar4;
      *puVar1 = puVar4 + 2;
      puVar2 = puVar4 + 6;
      puVar4 = puVar4 + 0xc;
      *puVar2 = puVar1;
      *(undefined8 **)(param_1 + 0x18) = puVar2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 143df4b00 FUN_143df4b00 body=82 status=ok
// SIG undefined FUN_143df4b00(void)

undefined8 * FUN_143df4b00(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  if (0xf < param_2) {
                    /* WARNING: Could not recover jumptable at 0x000143df4b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined8 *)
             (**(code **)(**(longlong **)(param_1 + 0x28) + 0x50))
                       (*(longlong **)(param_1 + 0x28),param_2 + 1,0);
    return puVar1;
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    FUN_143df4a60();
  }
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = *puVar1;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143df4b60 FUN_143df4b60 body=137 status=ok
// SIG undefined FUN_143df4b60(void)

undefined8 * FUN_143df4b60(longlong param_1,void *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  
  if (param_3 < 0x10) {
    if (*(longlong *)(param_1 + 0x18) == 0) {
      FUN_143df4a60();
    }
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    _Dst = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = *puVar1;
      _Dst = puVar1;
    }
  }
  else {
    _Dst = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x28) + 0x50))
                     (*(longlong **)(param_1 + 0x28),param_3 + 1,0);
  }
  if (_Dst != (undefined8 *)0x0) {
    _guard_xfg_dispatch_icall_nop(_Dst,param_2,param_3);
    *(undefined1 *)((longlong)_Dst + param_3) = 0;
  }
  return _Dst;
}



// FUNCTION 143df4c20 FUN_143df4c20 body=280 status=ok
// SIG undefined FUN_143df4c20(void)

longlong * FUN_143df4c20(longlong *param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *local_res8;
  undefined8 local_38;
  ulonglong local_30;
  longlong local_28;
  
  local_38 = param_2;
  uVar1 = Scaleform::String::BernsteinHashFunction(param_2,param_3,0x1505);
  uVar1 = uVar1 & 0xffffff;
  local_30 = (ulonglong)uVar1;
  local_28 = param_3;
  if (*param_1 != 0) {
    lVar2 = FUN_143df5700(param_1,&local_38,*(ulonglong *)(*param_1 + 8) & local_30);
    if (-1 < lVar2) {
      return *(longlong **)(*param_1 + 0x18 + lVar2 * 0x10);
    }
  }
  if (param_3 == 0) {
    return param_1 + 6;
  }
  if (param_1[1] == 0) {
    FUN_143df49f0(param_1);
  }
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    param_1[1] = plVar3[1];
  }
  plVar3[1] = (longlong)param_1;
  local_res8 = plVar3;
  lVar2 = FUN_143df4b60(param_1,param_2,param_3);
  *plVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_143df5a00(param_1,plVar3);
    plVar3 = param_1 + 6;
  }
  else {
    *(undefined4 *)(plVar3 + 3) = 0;
    *(int *)((longlong)plVar3 + 0x14) = (int)param_3;
    *(uint *)(plVar3 + 2) = uVar1;
    FUN_143df55c0(param_1,param_1,&local_res8,uVar1);
  }
  return plVar3;
}



// FUNCTION 143df4d40 FUN_143df4d40 body=420 status=ok
// SIG undefined FUN_143df4d40(void)

longlong *
FUN_143df4d40(longlong *param_1,void *param_2,size_t param_3,void *param_4,longlong *param_5)

{
  ulonglong uVar1;
  size_t _Size;
  uint uVar2;
  longlong *_Dst;
  longlong lVar3;
  longlong *plVar4;
  longlong *local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  _Size = (size_t)param_5;
  uVar1 = param_3 + (longlong)param_5;
  if (uVar1 < 0x10) {
    if (param_1[3] == 0) {
      FUN_143df4a60();
    }
    plVar4 = (longlong *)param_1[3];
    _Dst = (longlong *)0x0;
    if (plVar4 != (longlong *)0x0) {
      param_1[3] = *plVar4;
      _Dst = plVar4;
    }
  }
  else {
    _Dst = (longlong *)
           (**(code **)(*(longlong *)param_1[5] + 0x50))((longlong *)param_1[5],uVar1 + 1,0);
  }
  if (_Dst == (longlong *)0x0) {
    plVar4 = param_1 + 6;
  }
  else {
    if (param_3 != 0) {
      _guard_xfg_dispatch_icall_nop(_Dst,param_2,param_3);
    }
    if (_Size != 0) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)_Dst + param_3),param_4,_Size);
    }
    *(undefined1 *)((longlong)_Dst + uVar1) = 0;
    local_38 = _Dst;
    uVar2 = Scaleform::String::BernsteinHashFunction(_Dst,uVar1,0x1505);
    uVar2 = uVar2 & 0xffffff;
    local_30 = (ulonglong)uVar2;
    local_28 = uVar1;
    if ((*param_1 != 0) &&
       (lVar3 = FUN_143df5700(param_1,&local_38,*(ulonglong *)(*param_1 + 8) & local_30), -1 < lVar3
       )) {
      plVar4 = *(longlong **)(*param_1 + 0x18 + lVar3 * 0x10);
      if (uVar1 < 0x10) {
        *_Dst = param_1[3];
        param_1[3] = (longlong)_Dst;
        return plVar4;
      }
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,_Dst);
      return plVar4;
    }
    if (param_1[1] == 0) {
      FUN_143df49f0(param_1);
    }
    plVar4 = (longlong *)param_1[1];
    if (plVar4 != (longlong *)0x0) {
      param_1[1] = plVar4[1];
    }
    plVar4[1] = (longlong)param_1;
    *(undefined4 *)(plVar4 + 3) = 0;
    *(int *)((longlong)plVar4 + 0x14) = (int)uVar1;
    *plVar4 = (longlong)_Dst;
    *(uint *)(plVar4 + 2) = uVar2;
    param_5 = plVar4;
    FUN_143df55c0(param_1,param_1,&param_5,uVar2);
  }
  return plVar4;
}



// FUNCTION 143df4ef0 FUN_143df4ef0 body=146 status=ok
// SIG undefined FUN_143df4ef0(void)

undefined8 * FUN_143df4ef0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *local_res8;
  
  *param_1 = 0;
  uVar2 = (**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[5] = uVar2;
  *(undefined4 *)(param_1 + 9) = 1;
  uVar1 = Scaleform::String::BernsteinHashFunction(&DAT_145af3922,0,0x1505);
  param_1[6] = &DAT_145af3922;
  *(uint *)(param_1 + 8) = uVar1 & 0xffffff;
  local_res8 = param_1 + 6;
  param_1[7] = param_1;
  FUN_143df55c0(param_1,param_1,&local_res8,*(undefined4 *)(param_1 + 8));
  return param_1;
}



// FUNCTION 143df4f90 FUN_143df4f90 body=267 status=ok
// SIG undefined FUN_143df4f90(void)

void FUN_143df4f90(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar6 = param_1[2];
  while (lVar6 != 0) {
    plVar1 = (longlong *)param_1[2];
    lVar6 = 0x7f;
    param_1[2] = plVar1[0x1fc];
    plVar5 = plVar1;
    do {
      plVar2 = (longlong *)*plVar5;
      if (plVar2 != (longlong *)0x0) {
        if (*(uint *)((longlong)plVar5 + 0x14) < 0x10) {
          *plVar2 = param_1[3];
          param_1[3] = (longlong)plVar2;
        }
        else {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
      }
      plVar5 = plVar5 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,plVar1);
    lVar6 = param_1[2];
  }
  lVar6 = param_1[4];
  while (lVar6 != 0) {
    uVar3 = *(undefined8 *)(param_1[4] + 0x7e8);
    param_1[4] = *(longlong *)(param_1[4] + 0x7e0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar3);
    lVar6 = param_1[4];
  }
  if (*param_1 != 0) {
    lVar6 = 0;
    lVar4 = *(longlong *)(*param_1 + 8) + 1;
    do {
      if (*(longlong *)(lVar6 + 0x10 + *param_1) != -2) {
        *(undefined8 *)(lVar6 + 0x10 + *param_1) = 0xfffffffffffffffe;
      }
      lVar6 = lVar6 + 0x10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143df50b0 FUN_143df50b0 body=81 status=ok
// SIG undefined FUN_143df50b0(void)

undefined8 * FUN_143df50b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[3] = param_3;
  *param_1 = &PTR_FUN_145dc8bf0;
  param_1[2] = &PTR_LAB_145dc8bf8;
  FUN_143df4ef0(param_1 + 4);
  param_1[0xe] = param_2;
  return param_1;
}



// FUNCTION 143df5110 FUN_143df5110 body=85 status=ok
// SIG undefined FUN_143df5110(void)

undefined8 * FUN_143df5110(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[3] = param_2;
  *param_1 = &PTR_FUN_145dc8bf0;
  param_1[2] = &PTR_LAB_145dc8bf8;
  FUN_143df4ef0(param_1 + 4);
  uVar1 = (**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
  param_1[0xe] = uVar1;
  return param_1;
}



// FUNCTION 143df5170 FUN_143df5170 body=83 status=ok
// SIG undefined FUN_143df5170(void)

void FUN_143df5170(RefCountNTSImplCore *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_145dc8bf0;
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_145dc8bf8;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x260) = 0;
  }
  FUN_143df4f90(param_1 + 0x20);
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_145dc8be8;
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  return;
}



// FUNCTION 143df51d0 FUN_143df51d0 body=54 status=ok
// SIG undefined FUN_143df51d0(void)

void FUN_143df51d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x50))
                    (*(longlong **)(param_1 + 0x70),0x90,0);
  if (lVar1 != 0) {
    FUN_143df6620(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 143df5210 FUN_143df5210 body=101 status=ok
// SIG undefined FUN_143df5210(void)

undefined8 FUN_143df5210(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_res8;
  
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x50))(*(longlong **)(param_1 + 0x70),0x78)
  ;
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    local_res8 = *param_2;
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    uVar3 = FUN_143df5d90(lVar2,param_1,&local_res8);
  }
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    Scaleform::GFx::XML::DOMStringNode::ReleaseNode();
  }
  return uVar3;
}



// FUNCTION 143df5280 FUN_143df5280 body=101 status=ok
// SIG undefined FUN_143df5280(void)

undefined8 FUN_143df5280(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_res8;
  
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x50))(*(longlong **)(param_1 + 0x70),0x48)
  ;
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    local_res8 = *param_2;
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    uVar3 = FUN_143df64c0(lVar2,param_1,&local_res8);
  }
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    Scaleform::GFx::XML::DOMStringNode::ReleaseNode();
  }
  return uVar3;
}



// FUNCTION 143df52f0 FUN_143df52f0 body=166 status=ok
// SIG undefined FUN_143df52f0(void)

longlong * FUN_143df52f0(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x70) + 0x50))
                     (*(longlong **)(param_1 + 0x70),0x18);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    lVar2 = *param_3;
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
    lVar3 = *param_2;
    *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
    *plVar4 = lVar3;
    *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
    plVar4[1] = lVar2;
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
    plVar4[2] = 0;
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      Scaleform::GFx::XML::DOMStringNode::ReleaseNode();
    }
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      Scaleform::GFx::XML::DOMStringNode::ReleaseNode(lVar2);
    }
  }
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    Scaleform::GFx::XML::DOMStringNode::ReleaseNode();
  }
  piVar1 = (int *)(*param_3 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    Scaleform::GFx::XML::DOMStringNode::ReleaseNode();
  }
  return plVar4;
}



// FUNCTION 143df53a0 FUN_143df53a0 body=138 status=ok
// SIG undefined FUN_143df53a0(void)

undefined8 FUN_143df53a0(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_res8;
  longlong local_res10;
  
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x50))(*(longlong **)(param_1 + 0x70),0x20)
  ;
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    local_res8 = *param_3;
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    local_res10 = *param_2;
    *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
    uVar3 = FUN_143df57c0(lVar2,&local_res10,&local_res8);
  }
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    Scaleform::GFx::XML::DOMStringNode::ReleaseNode();
  }
  piVar1 = (int *)(*param_3 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    Scaleform::GFx::XML::DOMStringNode::ReleaseNode();
  }
  return uVar3;
}



// FUNCTION 143df5430 FUN_143df5430 body=78 status=ok
// SIG undefined FUN_143df5430(void)

void FUN_143df5430(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x70) + 0x50))
                     (*(longlong **)(param_1 + 0x70),0x18);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &PTR_FUN_145dc8c08;
    *(undefined4 *)(puVar1 + 1) = 1;
    if (param_2 != 0) {
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    }
    puVar1[2] = param_2;
    return;
  }
  return;
}



// FUNCTION 143df5490 FUN_143df5490 body=45 status=ok
// SIG undefined FUN_143df5490(void)

longlong FUN_143df5490(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  
  if ((ulonglong)*(uint *)((longlong)param_1 + 0x14) != param_2[2]) {
    return (ulonglong)(uint3)(*(uint *)((longlong)param_1 + 0x14) >> 8) << 8;
  }
  iVar1 = strncmp((char *)*param_1,(char *)*param_2,param_2[2]);
  return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
}



// FUNCTION 143df54c0 FUN_143df54c0 body=255 status=ok
// SIG undefined FUN_143df54c0(void)

ulonglong FUN_143df54c0(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong in_RAX;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar2 = *(ulonglong *)(lVar1 + 8);
  uVar6 = *(uint *)(*param_2 + 0x10) & uVar2;
  puVar4 = (ulonglong *)((uVar6 + 1) * 0x10 + lVar1);
  if ((*puVar4 != 0xfffffffffffffffe) && ((*(uint *)(puVar4[1] + 0x10) & uVar2) == uVar6)) {
    uVar3 = uVar6;
    uVar8 = 0xffffffffffffffff;
    while ((uVar7 = uVar3, (*(uint *)(puVar4[1] + 0x10) & uVar2) != uVar6 || (puVar4[1] != *param_2)
           )) {
      uVar3 = *puVar4;
      if (uVar3 == 0xffffffffffffffff) {
        return (ulonglong)puVar4 & 0xffffffffffffff00;
      }
      puVar4 = (ulonglong *)((uVar3 + 1) * 0x10 + lVar1);
      uVar8 = uVar7;
    }
    if (uVar6 == uVar7) {
      uVar2 = *puVar4;
      if (uVar2 != 0xffffffffffffffff) {
        *puVar4 = 0xfffffffffffffffe;
        puVar5 = (ulonglong *)((uVar2 + 1) * 0x10 + lVar1);
        *puVar4 = *puVar5;
        puVar4[1] = puVar5[1];
        puVar4 = puVar5;
      }
    }
    else {
      *(ulonglong *)(lVar1 + (uVar8 + 1) * 0x10) = *puVar4;
    }
    *puVar4 = 0xfffffffffffffffe;
    param_1 = (longlong *)*param_1;
    *param_1 = *param_1 + -1;
    return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  return (ulonglong)puVar4 & 0xffffffffffffff00;
}



// FUNCTION 143df55c0 FUN_143df55c0 body=311 status=ok
// SIG undefined FUN_143df55c0(void)

ulonglong * FUN_143df55c0(longlong *param_1,undefined8 param_2,ulonglong *param_3,ulonglong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    lVar6 = 8;
  }
  else {
    if ((ulonglong)(*plVar1 * 5) <= plVar1[1] * 4 + 4U) goto LAB_143df5619;
    lVar6 = plVar1[1] * 2 + 2;
  }
  FUN_143df5a60(param_1,param_2,lVar6);
LAB_143df5619:
  plVar1 = (longlong *)*param_1;
  uVar3 = plVar1[1];
  *plVar1 = *plVar1 + 1;
  lVar6 = *param_1;
  param_4 = uVar3 & param_4;
  puVar8 = (ulonglong *)((param_4 + 1) * 0x10 + lVar6);
  uVar2 = *puVar8;
  uVar7 = param_4;
  if (uVar2 == 0xfffffffffffffffe) {
    *puVar8 = 0xffffffffffffffff;
    puVar8[1] = *param_3;
  }
  else {
    do {
      uVar7 = uVar7 + 1 & uVar3;
      puVar5 = (ulonglong *)((uVar7 + 1) * 0x10 + lVar6);
    } while (*puVar5 != 0xfffffffffffffffe);
    uVar3 = *(uint *)(puVar8[1] + 0x10) & uVar3;
    if (uVar3 == param_4) {
      *puVar5 = uVar2;
      puVar5[1] = puVar8[1];
      puVar8[1] = *param_3;
      *puVar8 = uVar7;
    }
    else {
      puVar4 = (ulonglong *)((uVar3 + 1) * 0x10 + lVar6);
      uVar3 = *puVar4;
      while (uVar3 != param_4) {
        puVar4 = (ulonglong *)((*puVar4 + 1) * 0x10 + lVar6);
        uVar3 = *puVar4;
      }
      *puVar5 = uVar2;
      puVar5[1] = puVar8[1];
      *puVar4 = uVar7;
      puVar8[1] = *param_3;
      *puVar8 = 0xffffffffffffffff;
    }
  }
  return puVar8 + 1;
}



// FUNCTION 143df5700 FUN_143df5700 body=179 status=ok
// SIG undefined FUN_143df5700(void)

ulonglong FUN_143df5700(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  int iVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  
  puVar4 = (ulonglong *)((param_3 + 1) * 0x10 + *param_1);
  uVar1 = *(ulonglong *)(*param_1 + 8);
  if ((*puVar4 != 0xfffffffffffffffe) &&
     (uVar5 = param_3, (*(uint *)(puVar4[1] + 0x10) & uVar1) == param_3)) {
    while( true ) {
      puVar2 = (undefined8 *)puVar4[1];
      if (((*(uint *)(puVar2 + 2) & uVar1) == param_3) &&
         (((ulonglong)*(uint *)((longlong)puVar2 + 0x14) == param_2[2] &&
          (iVar3 = strncmp((char *)*puVar2,(char *)*param_2,param_2[2]), iVar3 == 0)))) {
        return uVar5;
      }
      uVar5 = *puVar4;
      if (uVar5 == 0xffffffffffffffff) break;
      puVar4 = (ulonglong *)((uVar5 + 1) * 0x10 + *param_1);
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 143df57c0 FUN_143df57c0 body=101 status=ok
// SIG undefined FUN_143df57c0(void)

undefined8 * FUN_143df57c0(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145dc8c00;
  lVar2 = *param_2;
  param_1[2] = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  lVar2 = *param_3;
  param_1[3] = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    Scaleform::GFx::XML::DOMStringNode::ReleaseNode();
  }
  piVar1 = (int *)(*param_3 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    Scaleform::GFx::XML::DOMStringNode::ReleaseNode();
  }
  return param_1;
}



// FUNCTION 143df5840 FUN_143df5840 body=43 status=ok
// SIG undefined FUN_143df5840(void)

undefined8 * FUN_143df5840(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145dc8be8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 143df5870 FUN_143df5870 body=153 status=ok
// SIG undefined FUN_143df5870(void)

RefCountNTSImplCore * FUN_143df5870(RefCountNTSImplCore *param_1,ulonglong param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_145dc8bf0;
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_145dc8bf8;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x260) = 0;
  }
  FUN_143df4f90(param_1 + 0x20);
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_145dc8be8;
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



// FUNCTION 143df5910 FUN_143df5910 body=122 status=ok
// SIG undefined FUN_143df5910(void)

RefCountNTSImplCore * FUN_143df5910(RefCountNTSImplCore *param_1,ulonglong param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    Scaleform::GFx::XML::DOMStringNode::ReleaseNode();
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    Scaleform::GFx::XML::DOMStringNode::ReleaseNode();
  }
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 143df5990 FUN_143df5990 body=106 status=ok
// SIG undefined FUN_143df5990(void)

RefCountNTSImplCore * FUN_143df5990(RefCountNTSImplCore *param_1,uint param_2)

{
  if (*(RefCountNTSImpl **)(param_1 + 0x10) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x10));
  }
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 143df5a00 FUN_143df5a00 body=86 status=ok
// SIG undefined FUN_143df5a00(void)

void FUN_143df5a00(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  if (puVar1 != (undefined8 *)0x0) {
    if (*(uint *)((longlong)param_2 + 0x14) < 0x10) {
      *puVar1 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 **)(param_1 + 0x18) = puVar1;
    }
    else {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    *param_2 = 0;
  }
  param_2[1] = *(longlong *)(param_1 + 8);
  *(longlong **)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 143df5a60 FUN_143df5a60 body=296 status=ok
// SIG undefined FUN_143df5a60(void)

void FUN_143df5a60(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_1433616b0();
    return;
  }
  if (param_3 < 8) {
    lVar4 = 8;
  }
  else {
    cVar2 = FUN_14207c6a0(param_3 - 1);
    lVar4 = 1L << (cVar2 + 1U & 0x3f);
  }
  local_res18[0] = 0x146;
  lVar3 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x70))
                          (DAT_146b62f28,param_2,(lVar4 + 1) * 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar4 + -1;
  lVar1 = lVar3;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    lVar1 = lVar1 + 0x10;
    *(undefined8 *)(lVar1 + (longlong)local_res20) = 0xfffffffffffffffe;
  }
  if (*param_1 != 0) {
    lVar4 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar1 = *param_1;
      if (*(longlong *)(lVar1 + 0x10 + lVar3) != -2) {
        plVar5 = (longlong *)(lVar1 + 0x18 + lVar3);
        FUN_143df55c0(&local_res20,param_2,plVar5,*(undefined4 *)(*plVar5 + 0x10));
        *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0xfffffffffffffffe;
      }
      lVar3 = lVar3 + 0x10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 143df5b90 FUN_143df5b90 body=101 status=ok
// SIG undefined FUN_143df5b90(void)

undefined8 * FUN_143df5b90(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_145dc8c10;
  *(undefined4 *)(param_1 + 1) = 1;
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  param_1[2] = param_2;
  FUN_143df4940(param_1 + 3,param_2 + 0x50);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = param_3;
  return param_1;
}



// FUNCTION 143df5c00 FUN_143df5c00 body=121 status=ok
// SIG undefined FUN_143df5c00(void)

undefined8 *
FUN_143df5c00(undefined8 *param_1,longlong param_2,undefined1 param_3,undefined8 param_4)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_145dc8c10;
  *(undefined4 *)(param_1 + 1) = 1;
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  param_1[2] = param_2;
  Scaleform::GFx::XML::DOMString::DOMString(param_1 + 3,param_4);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = param_3;
  FUN_143df4970(param_4);
  return param_1;
}



// FUNCTION 143df5c80 FUN_143df5c80 body=88 status=ok
// SIG undefined FUN_143df5c80(void)

void FUN_143df5c80(RefCountNTSImplCore *param_1)

{
  undefined8 *puVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_145dc8c10;
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x30) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x30));
  }
  FUN_143df4970(param_1 + 0x18);
  if (*(RefCountNTSImpl **)(param_1 + 0x10) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x10));
  }
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  return;
}



// FUNCTION 143df5ce0 FUN_143df5ce0 body=162 status=ok
// SIG undefined FUN_143df5ce0(void)

undefined8 * FUN_143df5ce0(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_145dc8c10;
  *(undefined4 *)(param_1 + 1) = 1;
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  param_1[2] = param_2;
  FUN_143df4940(param_1 + 3,param_2 + 0x50);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  *param_1 = &PTR_FUN_145dc8c20;
  FUN_143df4940(param_1 + 9,param_2 + 0x50);
  FUN_143df4940(param_1 + 10,param_2 + 0x50);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 143df5d90 FUN_143df5d90 body=203 status=ok
// SIG undefined FUN_143df5d90(void)

undefined8 * FUN_143df5d90(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  uVar1 = Scaleform::GFx::XML::DOMString::DOMString(local_res8,param_3);
  param_1[1] = 0;
  *param_1 = &PTR_FUN_145dc8c10;
  *(undefined4 *)(param_1 + 1) = 1;
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  param_1[2] = param_2;
  Scaleform::GFx::XML::DOMString::DOMString(param_1 + 3,uVar1);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  FUN_143df4970(uVar1);
  *param_1 = &PTR_FUN_145dc8c20;
  FUN_143df4940(param_1 + 9,param_2 + 0x50);
  FUN_143df4940(param_1 + 10,param_2 + 0x50);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_143df4970(param_3);
  return param_1;
}



// FUNCTION 143df5e70 FUN_143df5e70 body=294 status=ok
// SIG undefined FUN_143df5e70(void)

void FUN_143df5e70(RefCountNTSImplCore *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  *(undefined ***)param_1 = &PTR_FUN_145dc8c20;
  while (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = 0;
    lVar1 = *(longlong *)(lVar1 + 0x28);
    if (lVar1 == 0) break;
    if (*(RefCountNTSImpl **)(lVar1 + 0x30) != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar1 + 0x30));
    }
    *(undefined8 *)(lVar1 + 0x30) = 0;
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    if (*(RefCountNTSImpl **)(param_1 + 0x68) != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x68));
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x58);
  while (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    FUN_143df4970(lVar1 + 8);
    FUN_143df4970(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
    lVar1 = lVar2;
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x68) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x68));
  }
  FUN_143df4970(param_1 + 0x50);
  FUN_143df4970(param_1 + 0x48);
  puVar3 = *(undefined8 **)(param_1 + 0x38);
  *(undefined ***)param_1 = &PTR_FUN_145dc8c10;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x30) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x30));
  }
  FUN_143df4970(param_1 + 0x18);
  if (*(RefCountNTSImpl **)(param_1 + 0x10) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x10));
  }
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  return;
}



// FUNCTION 143df5fa0 FUN_143df5fa0 body=94 status=ok
// SIG undefined FUN_143df5fa0(void)

longlong FUN_143df5fa0(longlong param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = Scaleform::GFx::XML::DOMString::DOMString(local_res8,param_1 + 0x18);
  lVar3 = FUN_143df5210(uVar1,uVar2);
  FUN_143df63a0(param_1,lVar3,param_2);
  *(undefined1 *)(lVar3 + 0x40) = *(undefined1 *)(param_1 + 0x40);
  return lVar3;
}



// FUNCTION 143df6010 AppendChild body=128 status=ok
// SIG undefined AppendChild(void)

void Scaleform::GFx::XML::ElementNode::AppendChild(longlong param_1,longlong param_2)

{
  longlong lVar1;
  RefCountNTSImpl *this;
  
  if (*(longlong *)(param_1 + 0x70) == 0) {
    if (param_2 != 0) {
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    }
    if (*(RefCountNTSImpl **)(param_1 + 0x68) != (RefCountNTSImpl *)0x0) {
      RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x68));
    }
    *(longlong *)(param_1 + 0x68) = param_2;
    *(longlong *)(param_1 + 0x70) = param_2;
    *(longlong *)(param_2 + 0x20) = param_1;
    return;
  }
  *(longlong *)(param_2 + 0x28) = *(longlong *)(param_1 + 0x70);
  lVar1 = *(longlong *)(param_1 + 0x70);
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  this = *(RefCountNTSImpl **)(lVar1 + 0x30);
  if (this != (RefCountNTSImpl *)0x0) {
    RefCountNTSImpl::Release(this);
  }
  *(longlong *)(lVar1 + 0x30) = param_2;
  *(longlong *)(param_1 + 0x70) = param_2;
  *(longlong *)(param_2 + 0x20) = param_1;
  return;
}



// FUNCTION 143df60a0 FUN_143df60a0 body=141 status=ok
// SIG undefined FUN_143df60a0(void)

void FUN_143df60a0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_3 + 0x28);
  *(longlong *)(param_3 + 0x28) = param_2;
  *(longlong *)(param_2 + 0x28) = lVar1;
  *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
  if (*(RefCountNTSImpl **)(param_2 + 0x30) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_2 + 0x30));
  }
  *(longlong *)(param_2 + 0x30) = param_3;
  if (lVar1 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    if (*(RefCountNTSImpl **)(lVar1 + 0x30) != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar1 + 0x30));
    }
    *(longlong *)(lVar1 + 0x30) = param_2;
  }
  if (param_3 == *(longlong *)(param_1 + 0x68)) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    if (*(RefCountNTSImpl **)(param_1 + 0x68) != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x68));
    }
    *(longlong *)(param_1 + 0x68) = param_2;
  }
  *(longlong *)(param_2 + 0x20) = param_1;
  return;
}



// FUNCTION 143df6140 FUN_143df6140 body=184 status=ok
// SIG undefined FUN_143df6140(void)

void FUN_143df6140(longlong param_1,RefCountNTSImpl *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  if (param_2 != (RefCountNTSImpl *)0x0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  if (param_2 == *(RefCountNTSImpl **)(param_1 + 0x68)) {
    if (*(longlong *)(param_2 + 0x30) != 0) {
      piVar1 = (int *)(*(longlong *)(param_2 + 0x30) + 8);
      *piVar1 = *piVar1 + 1;
    }
    if (*(RefCountNTSImpl **)(param_1 + 0x68) != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x68));
    }
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x30);
  }
  if (param_2 == *(RefCountNTSImpl **)(param_1 + 0x70)) {
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x28);
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x28) = *(undefined8 *)(param_2 + 0x28);
  }
  lVar2 = *(longlong *)(param_2 + 0x28);
  if (lVar2 != 0) {
    if (*(longlong *)(param_2 + 0x30) != 0) {
      piVar1 = (int *)(*(longlong *)(param_2 + 0x30) + 8);
      *piVar1 = *piVar1 + 1;
    }
    if (*(RefCountNTSImpl **)(lVar2 + 0x30) != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar2 + 0x30));
    }
    *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  if (*(RefCountNTSImpl **)(param_2 + 0x30) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_2 + 0x30));
  }
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  Scaleform::RefCountNTSImpl::Release(param_2);
  return;
}



// FUNCTION 143df6200 FUN_143df6200 body=9 status=ok
// SIG undefined FUN_143df6200(void)

bool FUN_143df6200(longlong param_1)

{
  return *(longlong *)(param_1 + 0x68) != 0;
}



// FUNCTION 143df6210 AddAttribute body=29 status=ok
// SIG undefined AddAttribute(void)

void Scaleform::GFx::XML::ElementNode::AddAttribute(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x58) == 0) {
    *(undefined8 *)(param_1 + 0x58) = param_2;
    *(undefined8 *)(param_1 + 0x60) = param_2;
    return;
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x60) = param_2;
  return;
}



// FUNCTION 143df6240 FUN_143df6240 body=185 status=ok
// SIG undefined FUN_143df6240(void)

undefined8 FUN_143df6240(longlong param_1,char *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(undefined8 **)(param_1 + 0x58) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x58);
    puVar4 = (undefined8 *)0x0;
    do {
      puVar3 = puVar1;
      iVar2 = strncmp(param_2,*(char **)*puVar3,param_3 & 0xffffffff);
      if (iVar2 == 0) {
        if (*(undefined8 **)(param_1 + 0x58) == puVar3) {
          *(undefined8 *)(param_1 + 0x58) = puVar3[2];
        }
        if (*(undefined8 **)(param_1 + 0x60) == puVar3) {
          *(undefined8 **)(param_1 + 0x60) = puVar4;
        }
        if (puVar4 != (undefined8 *)0x0) {
          puVar4[2] = puVar3[2];
        }
        FUN_143df4970(puVar3 + 1);
        FUN_143df4970(puVar3);
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar3);
        return 1;
      }
      puVar1 = (undefined8 *)puVar3[2];
      puVar4 = puVar3;
    } while ((undefined8 *)puVar3[2] != (undefined8 *)0x0);
  }
  return 0;
}



// FUNCTION 143df6300 ClearAttributes body=124 status=ok
// SIG undefined ClearAttributes(void)

void Scaleform::GFx::XML::ElementNode::ClearAttributes(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x58);
  if (lVar2 == 0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    return;
  }
  do {
    lVar1 = *(longlong *)(lVar2 + 0x10);
    FUN_143df4970(lVar2 + 8);
    FUN_143df4970(lVar2);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar2);
    lVar2 = lVar1;
  } while (lVar1 != 0);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}



// FUNCTION 143df6390 FUN_143df6390 body=9 status=ok
// SIG undefined FUN_143df6390(void)

bool FUN_143df6390(longlong param_1)

{
  return *(longlong *)(param_1 + 0x58) != 0;
}



// FUNCTION 143df63a0 FUN_143df63a0 body=279 status=ok
// SIG undefined FUN_143df63a0(void)

void FUN_143df63a0(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  RefCountNTSImpl *this;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  RefCountNTSImpl *this_00;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  FUN_143df49b0(param_2 + 0x48,*(undefined8 *)(param_1 + 0x48));
  for (lVar1 = *(longlong *)(param_1 + 0x58); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x10)) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = Scaleform::GFx::XML::DOMString::DOMString(local_res8,lVar1 + 8);
    uVar4 = Scaleform::GFx::XML::DOMString::DOMString(local_res10,lVar1);
    uVar5 = FUN_143df52f0(uVar5,uVar4,uVar3);
    if (*(longlong *)(param_2 + 0x58) == 0) {
      *(undefined8 *)(param_2 + 0x58) = uVar5;
    }
    else {
      *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 0x10) = uVar5;
    }
    *(undefined8 *)(param_2 + 0x60) = uVar5;
  }
  if (param_3 != '\0') {
    for (plVar2 = *(longlong **)(param_1 + 0x68); plVar2 != (longlong *)0x0;
        plVar2 = (longlong *)plVar2[6]) {
      this_00 = (RefCountNTSImpl *)(**(code **)(*plVar2 + 8))(plVar2,param_3);
      if (*(longlong *)(param_2 + 0x70) == 0) {
        if (this_00 != (RefCountNTSImpl *)0x0) {
          *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
        }
        if (*(RefCountNTSImpl **)(param_2 + 0x68) != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_2 + 0x68));
        }
        *(RefCountNTSImpl **)(param_2 + 0x68) = this_00;
      }
      else {
        *(longlong *)(this_00 + 0x28) = *(longlong *)(param_2 + 0x70);
        lVar1 = *(longlong *)(param_2 + 0x70);
        *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
        this = *(RefCountNTSImpl **)(lVar1 + 0x30);
        if (this != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(this);
        }
        *(RefCountNTSImpl **)(lVar1 + 0x30) = this_00;
      }
      *(RefCountNTSImpl **)(param_2 + 0x70) = this_00;
      *(longlong *)(this_00 + 0x20) = param_2;
      Scaleform::RefCountNTSImpl::Release(this_00);
    }
  }
  return;
}



// FUNCTION 143df64c0 FUN_143df64c0 body=164 status=ok
// SIG undefined FUN_143df64c0(void)

undefined8 * FUN_143df64c0(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  uVar1 = Scaleform::GFx::XML::DOMString::DOMString(local_res8,param_3);
  param_1[1] = 0;
  *param_1 = &PTR_FUN_145dc8c10;
  *(undefined4 *)(param_1 + 1) = 1;
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  param_1[2] = param_2;
  Scaleform::GFx::XML::DOMString::DOMString(param_1 + 3,uVar1);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 3;
  FUN_143df4970(uVar1);
  *param_1 = &PTR_FUN_145dc8c30;
  FUN_143df4970(param_3);
  return param_1;
}



// FUNCTION 143df6570 FUN_143df6570 body=88 status=ok
// SIG undefined FUN_143df6570(void)

void FUN_143df6570(RefCountNTSImplCore *param_1)

{
  undefined8 *puVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_145dc8c10;
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x30) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x30));
  }
  FUN_143df4970(param_1 + 0x18);
  if (*(RefCountNTSImpl **)(param_1 + 0x10) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x10));
  }
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  return;
}



// FUNCTION 143df65d0 FUN_143df65d0 body=60 status=ok
// SIG undefined FUN_143df65d0(void)

void FUN_143df65d0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = Scaleform::GFx::XML::DOMString::DOMString(local_res8,param_1 + 0x18);
  lVar3 = FUN_143df5280(uVar1,uVar2);
  *(undefined1 *)(lVar3 + 0x40) = *(undefined1 *)(param_1 + 0x40);
  return;
}



// FUNCTION 143df6620 FUN_143df6620 body=77 status=ok
// SIG undefined FUN_143df6620(void)

undefined8 * FUN_143df6620(undefined8 *param_1)

{
  FUN_143df5ce0();
  *param_1 = &PTR_FUN_145dc8c40;
  FUN_143df4940(param_1 + 0xf,param_1[2] + 0x50);
  FUN_143df4940(param_1 + 0x10,param_1[2] + 0x50);
  *(undefined1 *)(param_1 + 0x11) = 0xff;
  return param_1;
}



// FUNCTION 143df6680 FUN_143df6680 body=50 status=ok
// SIG undefined FUN_143df6680(void)

void FUN_143df6680(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145dc8c40;
  FUN_143df4970(param_1 + 0x10);
  FUN_143df4970(param_1 + 0xf);
  FUN_143df5e70(param_1);
  return;
}



// FUNCTION 143df66c0 FUN_143df66c0 body=119 status=ok
// SIG undefined FUN_143df66c0(void)

longlong FUN_143df66c0(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_143df51d0(*(undefined8 *)(param_1 + 0x10));
  FUN_143df63a0(param_1,lVar1,param_2);
  FUN_143df49b0(lVar1 + 0x80,*(undefined8 *)(param_1 + 0x80));
  *(undefined1 *)(lVar1 + 0x88) = *(undefined1 *)(param_1 + 0x88);
  FUN_143df49b0(lVar1 + 0x78,*(undefined8 *)(param_1 + 0x78));
  *(undefined1 *)(lVar1 + 0x40) = *(undefined1 *)(param_1 + 0x40);
  return lVar1;
}



// FUNCTION 143df6740 FUN_143df6740 body=120 status=ok
// SIG undefined FUN_143df6740(void)

undefined8 * FUN_143df6740(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145dc8c40;
  FUN_143df4970(param_1 + 0x10);
  FUN_143df4970(param_1 + 0xf);
  FUN_143df5e70(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 143df67c0 FUN_143df67c0 body=89 status=ok
// SIG undefined FUN_143df67c0(void)

undefined8 FUN_143df67c0(undefined8 param_1,ulonglong param_2)

{
  FUN_143df5e70();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 143df6820 FUN_143df6820 body=158 status=ok
// SIG undefined FUN_143df6820(void)

RefCountNTSImplCore * FUN_143df6820(RefCountNTSImplCore *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_145dc8c10;
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(RefCountNTSImpl **)(param_1 + 0x30) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x30));
  }
  FUN_143df4970(param_1 + 0x18);
  if (*(RefCountNTSImpl **)(param_1 + 0x10) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x10));
  }
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 143df68c0 FUN_143df68c0 body=215 status=ok
// SIG undefined FUN_143df68c0(void)

undefined8 * FUN_143df68c0(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145dc8c50;
  *(undefined4 *)(param_1 + 1) = 1;
  if ((RefCountImpl *)*param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef((RefCountImpl *)*param_2);
  }
  param_1[2] = *param_2;
  param_1[3] = 0;
  FUN_1432c5960(param_1 + 4,DAT_146b62f28);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = param_3;
  *(undefined1 *)((longlong)param_1 + 0xa9) = 0;
  if ((RefCountImpl *)*param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)*param_2);
  }
  return param_1;
}



// FUNCTION 143df69a0 FUN_143df69a0 body=320 status=ok
// SIG undefined FUN_143df69a0(void)

longlong *
FUN_143df69a0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  *(undefined1 *)(param_1 + 0xa9) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (*param_5 == 0) {
    lVar4 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x78);
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_143df5110(lVar4,0);
    }
    if ((RefCountNTSImpl *)*param_5 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*param_5);
    }
    *param_5 = lVar4;
  }
  uVar5 = FUN_143df51d0(*param_5);
  if (*(RefCountNTSImpl **)(param_1 + 0xa0) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0xa0));
  }
  *(undefined8 *)(param_1 + 0xa0) = uVar5;
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar2 + 8))(plVar2,param_3,param_4,param_1);
    *(bool *)(param_1 + 0xa9) = cVar3 == '\0';
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0xa0) + 8);
    *piVar1 = *piVar1 + 1;
  }
  *param_2 = *(longlong *)(param_1 + 0xa0);
  if (*(RefCountNTSImpl **)(param_1 + 0xa0) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0xa0));
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if ((*param_2 != 0) && (*(char *)(param_1 + 0xa8) != '\0')) {
    FUN_143df6c40();
  }
  if ((RefCountNTSImpl *)*param_5 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*param_5);
  }
  return param_2;
}



// FUNCTION 143df6af0 FUN_143df6af0 body=320 status=ok
// SIG undefined FUN_143df6af0(void)

longlong *
FUN_143df6af0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  *(undefined1 *)(param_1 + 0xa9) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (*param_5 == 0) {
    lVar4 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x78);
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_143df5110(lVar4,0);
    }
    if ((RefCountNTSImpl *)*param_5 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*param_5);
    }
    *param_5 = lVar4;
  }
  uVar5 = FUN_143df51d0(*param_5);
  if (*(RefCountNTSImpl **)(param_1 + 0xa0) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0xa0));
  }
  *(undefined8 *)(param_1 + 0xa0) = uVar5;
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,param_3,param_4,param_1);
    *(bool *)(param_1 + 0xa9) = cVar3 == '\0';
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0xa0) + 8);
    *piVar1 = *piVar1 + 1;
  }
  *param_2 = *(longlong *)(param_1 + 0xa0);
  if (*(RefCountNTSImpl **)(param_1 + 0xa0) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0xa0));
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if ((*param_2 != 0) && (*(char *)(param_1 + 0xa8) != '\0')) {
    FUN_143df6c40();
  }
  if ((RefCountNTSImpl *)*param_5 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*param_5);
  }
  return param_2;
}



// FUNCTION 143df6c40 FUN_143df6c40 body=253 status=ok
// SIG undefined FUN_143df6c40(void)

void FUN_143df6c40(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong local_res8;
  
  lVar2 = *(longlong *)(param_1 + 0x68);
  do {
    if (lVar2 == 0) {
      return;
    }
    if (*(char *)(lVar2 + 0x40) == '\x01') {
      lVar3 = *(longlong *)(lVar2 + 0x68);
joined_r0x000143df6c81:
      lVar4 = lVar3;
      if (lVar4 != 0) {
        lVar3 = *(longlong *)(lVar4 + 0x30);
        if (*(char *)(lVar4 + 0x40) == '\x01') {
          FUN_143df7a20(lVar4);
        }
        else if (*(char *)(lVar4 + 0x40) == '\x03') {
          local_res8 = **(longlong **)(lVar4 + 0x18);
          while (uVar5 = FUN_143307250(&local_res8), uVar5 != 0) {
            uVar1 = *(ushort *)(&DAT_145afe6e0 + (ulonglong)((uVar5 & 0xffff) >> 8) * 2);
            if ((uVar1 == 0) ||
               ((uVar1 != 1 &&
                ((*(ushort *)
                   (&DAT_145afe6e0 + (ulonglong)(((uVar5 & 0xffff) >> 4 & 0xf) + (uint)uVar1) * 2)
                  >> (uVar5 & 0xf) & 1) == 0)))) goto joined_r0x000143df6c81;
          }
          local_res8 = local_res8 + -1;
          FUN_143df6140(lVar2,lVar4);
        }
        goto joined_r0x000143df6c81;
      }
    }
    lVar2 = *(longlong *)(lVar2 + 0x30);
  } while( true );
}



// FUNCTION 143df6d50 FUN_143df6d50 body=135 status=ok
// SIG undefined FUN_143df6d50(void)

void FUN_143df6d50(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  RefCountNTSImpl *this;
  
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0xa0) + 8);
    *piVar1 = *piVar1 + 1;
  }
  this = *(RefCountNTSImpl **)(param_1 + 0xa0);
  FUN_143df7c20(param_1 + 0x58,param_1 + 0x58,*(longlong *)(param_1 + 0x60) + 1);
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x58) + (*(longlong *)(param_1 + 0x60) + -1) * 8);
  if (puVar2 != (undefined8 *)0x0) {
    if (this != (RefCountNTSImpl *)0x0) {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
    }
    *puVar2 = this;
  }
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x30);
  return;
}



// FUNCTION 143df6de0 FUN_143df6de0 body=251 status=ok
// SIG undefined FUN_143df6de0(void)

void FUN_143df6de0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  RefCountNTSImpl *this;
  undefined8 uVar4;
  undefined8 local_res8;
  
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x38);
  FUN_143df7c20(param_1 + 0x58,param_1 + 0x58,0);
  lVar2 = *(longlong *)(param_1 + 0xa0);
  lVar3 = *(longlong *)(lVar2 + 0x10);
  if (lVar3 != 0) {
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
  }
  this = *(RefCountNTSImpl **)(lVar2 + 0x10);
  uVar4 = FUN_143df4c20(this + 0x20,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x18),
                        *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x20));
  FUN_143df4940(&local_res8,uVar4);
  FUN_143df49b0(*(longlong *)(param_1 + 0xa0) + 0x78,local_res8);
  FUN_143df4970(&local_res8);
  uVar4 = FUN_143df4c20(this + 0x20,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8),
                        *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x10));
  FUN_143df4940(&local_res8,uVar4);
  FUN_143df49b0(*(longlong *)(param_1 + 0xa0) + 0x80,local_res8);
  FUN_143df4970(&local_res8);
  *(undefined1 *)(*(longlong *)(param_1 + 0xa0) + 0x88) =
       *(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x28);
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  return;
}



// FUNCTION 143df6ef0 FUN_143df6ef0 body=1152 status=ok
// SIG undefined FUN_143df6ef0(void)

void FUN_143df6ef0(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  int *piVar1;
  RefCountNTSImpl *this;
  longlong lVar2;
  longlong lVar3;
  RefCountNTSImpl *pRVar4;
  int iVar5;
  undefined8 uVar6;
  RefCountNTSImpl *pRVar7;
  RefCountNTSImpl *pRVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 local_res8;
  undefined8 *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  lVar12 = *(longlong *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x38);
  lVar14 = *(longlong *)(lVar12 + 0x10);
  if (lVar14 != 0) {
    piVar1 = (int *)(lVar14 + 8);
    *piVar1 = *piVar1 + 1;
  }
  this = *(RefCountNTSImpl **)(lVar12 + 0x10);
  uVar11 = 0;
  local_res10 = param_2;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    lVar12 = *(longlong *)(param_1 + 0x58);
    lVar14 = *(longlong *)(param_1 + 0x60);
    lVar2 = *(longlong *)(lVar12 + -8 + lVar14 * 8);
    if (lVar2 != 0) {
      piVar1 = (int *)(lVar2 + 8);
      *piVar1 = *piVar1 + 1;
    }
    pRVar7 = *(RefCountNTSImpl **)(lVar12 + lVar14 * 8 + -8);
    Scaleform::GFx::XML::ElementNode::AppendChild(pRVar7,*(undefined8 *)(param_1 + 0x18));
    puVar9 = &DAT_145af3922;
    if (*(undefined1 **)(param_1 + 0x20) != (undefined1 *)0x0) {
      puVar9 = *(undefined1 **)(param_1 + 0x20);
    }
    uVar6 = FUN_143df4c20(this + 0x20,puVar9,*(undefined8 *)(param_1 + 0x28));
    FUN_143df4940(&local_res8,uVar6);
    FUN_143df49b0(*(longlong *)(param_1 + 0x18) + 0x18,local_res8);
    FUN_143df4970(&local_res8);
    if (*(RefCountNTSImpl **)(param_1 + 0x18) != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x18));
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    FUN_1432c5cb0(param_1 + 0x20);
    if (pRVar7 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(pRVar7);
    }
  }
  uVar6 = FUN_143df4c20(this + 0x20,*param_3,param_3[1]);
  FUN_143df4940(&local_res8,uVar6);
  pRVar7 = (RefCountNTSImpl *)FUN_143df5210(this,&local_res8);
  uVar13 = uVar11;
  if (param_4[1] != 0) {
    do {
      puVar10 = (undefined8 *)(*param_4 + uVar13);
      uVar6 = FUN_143df4c20(this + 0x20,puVar10[2],puVar10[3]);
      FUN_143df4940(local_res18,uVar6);
      uVar6 = FUN_143df4c20(this + 0x20,*puVar10,puVar10[1]);
      FUN_143df4940(local_res20,uVar6);
      uVar6 = FUN_143df52f0(this,local_res20,local_res18);
      Scaleform::GFx::XML::ElementNode::AddAttribute(pRVar7,uVar6);
      uVar11 = uVar11 + 1;
      param_2 = local_res10;
      uVar13 = uVar13 + 0x20;
    } while (uVar11 < (ulonglong)param_4[1]);
  }
  if ((*(longlong *)(param_1 + 0x78) != 0) && (iVar5 = *(int *)(param_1 + 0x78) + -1, -1 < iVar5)) {
    lVar14 = (longlong)iVar5;
    lVar12 = lVar14 << 4;
    do {
      lVar2 = *(longlong *)(param_1 + 0x70);
      if (*(longlong *)(lVar2 + 8 + lVar12) != 0) break;
      if (pRVar7 != (RefCountNTSImpl *)0x0) {
        *(int *)(pRVar7 + 8) = *(int *)(pRVar7 + 8) + 1;
      }
      pRVar8 = *(RefCountNTSImpl **)(lVar2 + 8 + lVar12);
      if (pRVar8 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(pRVar8);
      }
      *(RefCountNTSImpl **)(lVar2 + 8 + lVar12) = pRVar7;
      lVar12 = lVar12 + -0x10;
      lVar14 = lVar14 + -1;
    } while (-1 < lVar14);
  }
  if ((*(longlong *)(param_1 + 0x90) != 0) &&
     (lVar12 = *(longlong *)(param_1 + 0x90) * 0x10 + *(longlong *)(param_1 + 0x88),
     *(longlong *)(lVar12 + -8) == 0)) {
    if (pRVar7 != (RefCountNTSImpl *)0x0) {
      *(int *)(pRVar7 + 8) = *(int *)(pRVar7 + 8) + 1;
    }
    if (*(RefCountNTSImpl **)(lVar12 + -8) != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar12 + -8));
    }
    *(RefCountNTSImpl **)(lVar12 + -8) = pRVar7;
  }
  if (param_2[1] == 0) {
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar12 = *(longlong *)(param_1 + 0x90);
      lVar14 = *(longlong *)(param_1 + 0x88);
      lVar2 = *(longlong *)(lVar14 + -0x10 + lVar12 * 0x10);
      if (lVar2 != 0) {
        piVar1 = (int *)(lVar2 + 8);
        *piVar1 = *piVar1 + 1;
      }
      lVar2 = *(longlong *)(lVar14 + -8 + lVar12 * 0x10);
      pRVar8 = *(RefCountNTSImpl **)(lVar14 + -0x10 + lVar12 * 0x10);
      if (lVar2 != 0) {
        piVar1 = (int *)(lVar2 + 8);
        *piVar1 = *piVar1 + 1;
      }
      pRVar4 = *(RefCountNTSImpl **)(lVar14 + -8 + lVar12 * 0x10);
      FUN_143df49b0(pRVar7 + 0x48,*(undefined8 *)(pRVar8 + 0x10));
      FUN_143df49b0(pRVar7 + 0x50,*(undefined8 *)(pRVar8 + 0x18));
      if (pRVar4 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(pRVar4);
      }
LAB_143df72bb:
      Scaleform::RefCountNTSImpl::Release(pRVar8);
    }
  }
  else {
    if ((*(longlong *)(param_1 + 0x78) != 0) &&
       (iVar5 = *(int *)(param_1 + 0x78) + -1, lVar12 = (longlong)iVar5, -1 < iVar5)) {
      lVar14 = lVar12 << 4;
      do {
        lVar2 = *(longlong *)(param_1 + 0x70);
        if (*(longlong *)(lVar14 + lVar2) != 0) {
          piVar1 = (int *)(*(longlong *)(lVar14 + lVar2) + 8);
          *piVar1 = *piVar1 + 1;
        }
        lVar3 = *(longlong *)(lVar14 + 8 + lVar2);
        pRVar8 = *(RefCountNTSImpl **)(lVar14 + lVar2);
        if (lVar3 != 0) {
          piVar1 = (int *)(lVar3 + 8);
          *piVar1 = *piVar1 + 1;
        }
        pRVar4 = *(RefCountNTSImpl **)(lVar14 + 8 + lVar2);
        iVar5 = strncmp((char *)**(undefined8 **)(pRVar8 + 0x10),(char *)*param_2,param_2[1]);
        if (iVar5 == 0) {
          FUN_143df49b0(pRVar7 + 0x48,*(undefined8 *)(pRVar8 + 0x10));
          FUN_143df49b0(pRVar7 + 0x50,*(undefined8 *)(pRVar8 + 0x18));
          if (pRVar4 != (RefCountNTSImpl *)0x0) {
            Scaleform::RefCountNTSImpl::Release(pRVar4);
          }
          goto LAB_143df72bb;
        }
        if (pRVar4 != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(pRVar4);
        }
        Scaleform::RefCountNTSImpl::Release(pRVar8);
        lVar14 = lVar14 + -0x10;
        lVar12 = lVar12 + -1;
      } while (-1 < lVar12);
    }
    uVar6 = FUN_143df4c20(this + 0x20,*param_2,param_2[1]);
    FUN_143df4940(&local_res10,uVar6);
    FUN_143df49b0(pRVar7 + 0x48,local_res10);
    FUN_143df4970(&local_res10);
    FUN_143df4940(&local_res10,this + 0x50);
    FUN_143df49b0(pRVar7 + 0x50,local_res10);
    FUN_143df4970(&local_res10);
  }
  lVar12 = *(longlong *)(param_1 + 0x58);
  lVar14 = *(longlong *)(param_1 + 0x60);
  lVar2 = *(longlong *)(lVar12 + -8 + lVar14 * 8);
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
  }
  pRVar8 = *(RefCountNTSImpl **)(lVar12 + lVar14 * 8 + -8);
  Scaleform::GFx::XML::ElementNode::AppendChild(pRVar8,pRVar7);
  FUN_143df7c20(param_1 + 0x58,param_1 + 0x58,*(longlong *)(param_1 + 0x60) + 1);
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x58) + (*(longlong *)(param_1 + 0x60) + -1) * 8)
  ;
  if (puVar10 != (undefined8 *)0x0) {
    if (pRVar7 != (RefCountNTSImpl *)0x0) {
      *(int *)(pRVar7 + 8) = *(int *)(pRVar7 + 8) + 1;
    }
    *puVar10 = pRVar7;
  }
  if (pRVar8 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(pRVar8);
  }
  if (pRVar7 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(pRVar7);
  }
  if (this == (RefCountNTSImpl *)0x0) {
    return;
  }
  Scaleform::RefCountNTSImpl::Release(this);
  return;
}



// FUNCTION 143df7380 FUN_143df7380 body=782 status=ok
// SIG undefined FUN_143df7380(void)

void FUN_143df7380(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  RefCountNTSImpl *this;
  RefCountNTSImpl *pRVar4;
  longlong lVar5;
  RefCountNTSImpl *pRVar6;
  ulonglong uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 local_48 [2];
  
  plVar1 = (longlong *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x38);
  lVar15 = *plVar1;
  lVar14 = *(longlong *)(param_1 + 0x60);
  lVar12 = *(longlong *)(lVar15 + -8 + lVar14 * 8);
  if (lVar12 != 0) {
    piVar2 = (int *)(lVar12 + 8);
    *piVar2 = *piVar2 + 1;
  }
  this = *(RefCountNTSImpl **)(lVar15 + lVar14 * 8 + -8);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    lVar15 = *(longlong *)(param_1 + 0xa0);
    lVar14 = *(longlong *)(lVar15 + 0x10);
    if (lVar14 != 0) {
      piVar2 = (int *)(lVar14 + 8);
      *piVar2 = *piVar2 + 1;
    }
    pRVar4 = *(RefCountNTSImpl **)(lVar15 + 0x10);
    Scaleform::GFx::XML::ElementNode::AppendChild(this,*(undefined8 *)(param_1 + 0x18));
    puVar11 = &DAT_145af3922;
    if (*(undefined1 **)(param_1 + 0x20) != (undefined1 *)0x0) {
      puVar11 = *(undefined1 **)(param_1 + 0x20);
    }
    uVar9 = FUN_143df4c20(pRVar4 + 0x20,puVar11,*(undefined8 *)(param_1 + 0x28));
    FUN_143df4940(local_48,uVar9);
    FUN_143df49b0(*(longlong *)(param_1 + 0x18) + 0x18,local_48[0]);
    FUN_143df4970(local_48);
    if (*(RefCountNTSImpl **)(param_1 + 0x18) != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x18));
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    FUN_1432c5cb0(param_1 + 0x20);
    if (pRVar4 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(pRVar4);
    }
  }
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (iVar8 = *(int *)(param_1 + 0x78) + -1, lVar15 = (longlong)iVar8, -1 < iVar8)) {
    plVar13 = (longlong *)(param_1 + 0x70);
    lVar14 = lVar15 << 4;
    do {
      lVar12 = *plVar13;
      if (*(longlong *)(lVar14 + lVar12) != 0) {
        piVar2 = (int *)(*(longlong *)(lVar14 + lVar12) + 8);
        *piVar2 = *piVar2 + 1;
      }
      lVar5 = *(longlong *)(lVar14 + 8 + lVar12);
      pRVar4 = *(RefCountNTSImpl **)(lVar14 + lVar12);
      if (lVar5 != 0) {
        piVar2 = (int *)(lVar5 + 8);
        *piVar2 = *piVar2 + 1;
      }
      pRVar6 = *(RefCountNTSImpl **)(lVar14 + 8 + lVar12);
      if (pRVar6 != this) {
        if (pRVar6 != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(pRVar6);
        }
        if (pRVar4 != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(pRVar4);
        }
        break;
      }
      uVar7 = *(ulonglong *)(param_1 + 0x78);
      uVar3 = uVar7 - 1;
      FUN_143df7b50(plVar13,plVar13,uVar3);
      if (uVar7 < uVar3) {
        puVar10 = (undefined8 *)(uVar7 * 0x10 + *plVar13);
        for (lVar12 = uVar3 - uVar7; lVar12 != 0; lVar12 = lVar12 + -1) {
          if (puVar10 != (undefined8 *)0x0) {
            *puVar10 = 0;
            puVar10[1] = 0;
          }
          puVar10 = puVar10 + 2;
        }
      }
      if (pRVar6 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(pRVar6);
      }
      if (pRVar4 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(pRVar4);
      }
      lVar14 = lVar14 + -0x10;
      lVar15 = lVar15 + -1;
    } while (-1 < lVar15);
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    plVar13 = (longlong *)(param_1 + 0x88);
    lVar15 = *(longlong *)(param_1 + 0x90);
    lVar14 = *plVar13;
    lVar12 = *(longlong *)(lVar14 + -0x10 + lVar15 * 0x10);
    if (lVar12 != 0) {
      piVar2 = (int *)(lVar12 + 8);
      *piVar2 = *piVar2 + 1;
    }
    lVar12 = *(longlong *)(lVar14 + -8 + lVar15 * 0x10);
    pRVar4 = *(RefCountNTSImpl **)(lVar14 + -0x10 + lVar15 * 0x10);
    if (lVar12 != 0) {
      piVar2 = (int *)(lVar12 + 8);
      *piVar2 = *piVar2 + 1;
    }
    pRVar6 = *(RefCountNTSImpl **)(lVar14 + -8 + lVar15 * 0x10);
    if (pRVar6 == this) {
      uVar7 = *(ulonglong *)(param_1 + 0x90);
      uVar3 = uVar7 - 1;
      FUN_143df7b50(plVar13,plVar13,uVar3);
      if (uVar7 < uVar3) {
        puVar10 = (undefined8 *)(uVar7 * 0x10 + *plVar13);
        for (lVar15 = uVar3 - uVar7; lVar15 != 0; lVar15 = lVar15 + -1) {
          if (puVar10 != (undefined8 *)0x0) {
            *puVar10 = 0;
            puVar10[1] = 0;
          }
          puVar10 = puVar10 + 2;
        }
      }
    }
    if (pRVar6 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(pRVar6);
    }
    if (pRVar4 != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(pRVar4);
    }
  }
  uVar7 = *(ulonglong *)(param_1 + 0x60);
  uVar3 = uVar7 - 1;
  FUN_143df7c20(plVar1,plVar1,uVar3);
  if (uVar7 < uVar3) {
    puVar10 = (undefined8 *)(*plVar1 + uVar7 * 8);
    for (lVar15 = uVar3 - uVar7; lVar15 != 0; lVar15 = lVar15 + -1) {
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = 0;
      }
      puVar10 = puVar10 + 1;
    }
  }
  if (this == (RefCountNTSImpl *)0x0) {
    return;
  }
  Scaleform::RefCountNTSImpl::Release(this);
  return;
}



// FUNCTION 143df76a0 FUN_143df76a0 body=337 status=ok
// SIG undefined FUN_143df76a0(void)

void FUN_143df76a0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  RefCountNTSImpl *this;
  undefined8 uVar2;
  RefCountNTSImpl *this_00;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  lVar3 = *(longlong *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x38);
  lVar4 = *(longlong *)(lVar3 + 0x10);
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
  }
  this = *(RefCountNTSImpl **)(lVar3 + 0x10);
  uVar2 = FUN_143df4c20(this + 0x20,*param_3,param_3[1]);
  FUN_143df4940(local_res8,uVar2);
  uVar2 = FUN_143df4c20(this + 0x20,*param_2,param_2[1]);
  FUN_143df4940(local_res10,uVar2);
  this_00 = (RefCountNTSImpl *)FUN_143df53a0(this,local_res10,local_res8);
  if (param_2[1] == 0) {
    if (this_00 != (RefCountNTSImpl *)0x0) {
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
      Scaleform::RefCountNTSImpl::Release(this_00);
    }
    FUN_143df7b50(param_1 + 0x88,param_1 + 0x88,*(longlong *)(param_1 + 0x90) + 1);
    lVar3 = *(longlong *)(param_1 + 0x90);
    lVar4 = *(longlong *)(param_1 + 0x88);
  }
  else {
    if (this_00 != (RefCountNTSImpl *)0x0) {
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
      Scaleform::RefCountNTSImpl::Release(this_00);
    }
    FUN_143df7b50(param_1 + 0x70,param_1 + 0x70,*(longlong *)(param_1 + 0x78) + 1);
    lVar3 = *(longlong *)(param_1 + 0x78);
    lVar4 = *(longlong *)(param_1 + 0x70);
  }
  puVar5 = (undefined8 *)(lVar4 + -0x10 + lVar3 * 0x10);
  if (puVar5 != (undefined8 *)0x0) {
    if (this_00 != (RefCountNTSImpl *)0x0) {
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
    }
    *puVar5 = this_00;
    puVar5[1] = 0;
  }
  if (this_00 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this_00);
    Scaleform::RefCountNTSImpl::Release(this_00);
  }
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  return;
}



// FUNCTION 143df7800 FUN_143df7800 body=193 status=ok
// SIG undefined FUN_143df7800(void)

void FUN_143df7800(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  RefCountNTSImpl *this;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  
  lVar2 = *(longlong *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x38);
  lVar3 = *(longlong *)(lVar2 + 0x10);
  if (lVar3 != 0) {
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
  }
  this = *(RefCountNTSImpl **)(lVar2 + 0x10);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    FUN_143df4940(local_res8,this + 0x50);
    uVar4 = FUN_143df5280(this,local_res8);
    if (*(RefCountNTSImpl **)(param_1 + 0x18) != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(param_1 + 0x18));
    }
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    Scaleform::StringBuffer::AppendString(param_1 + 0x20,*param_2,param_2[1]);
  }
  else {
    Scaleform::StringBuffer::AppendString(param_1 + 0x20,*param_2,param_2[1]);
  }
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
    return;
  }
  return;
}



// FUNCTION 143df79a0 FUN_143df79a0 body=119 status=ok
// SIG undefined FUN_143df79a0(void)

undefined8 FUN_143df79a0(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 local_res8 [4];
  
  local_res8[0] = **(undefined8 **)(param_1 + 0x18);
  do {
    uVar3 = FUN_143307250(local_res8);
    uVar2 = (uint)uVar3;
    if (uVar2 == 0) {
      return 1;
    }
    uVar1 = *(ushort *)(&DAT_145afe6e0 + ((uVar3 & 0xffff) >> 8) * 2);
  } while ((uVar1 != 0) &&
          ((uVar1 == 1 ||
           ((*(ushort *)
              (&DAT_145afe6e0 + (ulonglong)(((uVar2 & 0xffff) >> 4 & 0xf) + (uint)uVar1) * 2) >>
             (uVar2 & 0xf) & 1) != 0))));
  return 0;
}



// FUNCTION 143df7a20 FUN_143df7a20 body=208 status=ok
// SIG undefined FUN_143df7a20(void)

void FUN_143df7a20(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong local_res8;
  
  lVar2 = *(longlong *)(param_1 + 0x68);
joined_r0x000143df7a34:
  do {
    do {
      while( true ) {
        lVar3 = lVar2;
        if (lVar3 == 0) {
          return;
        }
        lVar2 = *(longlong *)(lVar3 + 0x30);
        if (*(char *)(lVar3 + 0x40) != '\x01') break;
        FUN_143df7a20(lVar3);
      }
    } while (*(char *)(lVar3 + 0x40) != '\x03');
    local_res8 = **(longlong **)(lVar3 + 0x18);
    while (uVar4 = FUN_143307250(&local_res8), uVar4 != 0) {
      uVar1 = *(ushort *)(&DAT_145afe6e0 + (ulonglong)((uVar4 & 0xffff) >> 8) * 2);
      if ((uVar1 == 0) ||
         ((uVar1 != 1 &&
          ((*(ushort *)
             (&DAT_145afe6e0 + (ulonglong)(((uVar4 & 0xffff) >> 4 & 0xf) + (uint)uVar1) * 2) >>
            (uVar4 & 0xf) & 1) == 0)))) goto joined_r0x000143df7a34;
    }
    local_res8 = local_res8 + -1;
    FUN_143df6140(param_1,lVar3);
  } while( true );
}



// FUNCTION 143df7af0 FUN_143df7af0 body=89 status=ok
// SIG undefined FUN_143df7af0(void)

undefined8 FUN_143df7af0(undefined8 param_1,ulonglong param_2)

{
  FUN_1434add40();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 143df7b50 FUN_143df7b50 body=194 status=ok
// SIG undefined FUN_143df7b50(void)

void FUN_143df7b50(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    puVar1 = (undefined8 *)(*param_1 + -0x10 + (lVar2 + param_3) * 0x10);
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      if ((RefCountNTSImpl *)puVar1[1] != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)puVar1[1]);
      }
      if ((RefCountNTSImpl *)*puVar1 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*puVar1);
      }
      puVar1 = puVar1 + -2;
    }
    if (param_3 < (ulonglong)param_1[2] >> 1) {
      FUN_1433954d0(param_1,param_2,param_3);
    }
    param_1[1] = param_3;
  }
  else if ((ulonglong)param_1[2] < param_3) {
    FUN_1433954d0(param_1,param_2,(param_3 >> 2) + param_3);
    param_1[1] = param_3;
  }
  else {
    param_1[1] = param_3;
  }
  return;
}



// FUNCTION 143df7c20 FUN_143df7c20 body=174 status=ok
// SIG undefined FUN_143df7c20(void)

void FUN_143df7c20(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 < (ulonglong)param_1[1]) {
    lVar2 = param_1[1] - param_3;
    puVar1 = (undefined8 *)(*param_1 + ((param_3 - 1) + lVar2) * 8);
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      if ((RefCountNTSImpl *)*puVar1 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)*puVar1);
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



// FUNCTION 143df7cd0 FUN_143df7cd0 body=68 status=ok
// SIG undefined FUN_143df7cd0(void)

undefined8 * FUN_143df7cd0(undefined8 *param_1,undefined1 param_2,longlong *param_3)

{
  longlong *plVar1;
  
  *param_1 = param_3;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined1 *)((longlong)param_1 + 0x11) = param_2;
  plVar1 = (longlong *)(**(code **)(*param_3 + 8))(param_3);
  param_1[1] = plVar1;
  if (*(char *)((longlong)param_1 + 0x11) != '\0') {
    (**(code **)(*plVar1 + 0x98))(plVar1);
  }
  return param_1;
}



// FUNCTION 143df7d20 ~Socket body=92 status=ok
// SIG undefined ~Socket(void)

void Scaleform::GFx::Socket::~Socket(undefined8 *param_1)

{
  longlong lVar1;
  
  Destroy();
  if (*(char *)((longlong)param_1 + 0x11) != '\0') {
    lVar1 = param_1[3];
    if (lVar1 != 0) {
      Lock::DoLock(lVar1);
    }
    (**(code **)(*(longlong *)param_1[1] + 0xa0))();
    if (lVar1 != 0) {
      Lock::DoLock(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143df7d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,param_1[1]);
  return;
}



// FUNCTION 143df7d90 FUN_143df7d90 body=351 status=ok
// SIG undefined FUN_143df7d90(void)

undefined8 FUN_143df7d90(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 local_28 [2];
  longlong local_20;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    Scaleform::Lock::DoLock(lVar1);
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),0);
  if (cVar3 == '\0') {
    if (param_4 != 0) {
      local_28[0] = 0;
      local_20 = param_4;
      uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))();
      FUN_143357fa0(local_28,"Could not create socket. Error %d",uVar4);
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (lVar2 != 0) {
      Scaleform::Lock::DoLock(lVar2);
    }
    (**(code **)(**(longlong **)(param_1 + 8) + 0xa0))();
    if (lVar2 != 0) {
      Scaleform::Lock::DoLock(lVar2);
      uVar5 = 0;
      goto LAB_143df7ec4;
    }
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),param_3,param_2);
    cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
    if (cVar3 != '\0') {
      if (param_4 != 0) {
        local_28[0] = 0;
        local_20 = param_4;
        FUN_143357fa0(local_28,"Socket connection established on port %d\n",param_3);
      }
      uVar5 = 1;
      goto LAB_143df7ec4;
    }
    if (param_4 != 0) {
      local_28[0] = 0;
      local_20 = param_4;
      uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))();
      FUN_143357fa0(local_28,"Could not connect to server. Error %d\n",uVar4);
    }
    Scaleform::GFx::Socket::Destroy(param_1);
  }
  uVar5 = 0;
LAB_143df7ec4:
  if (lVar1 != 0) {
    Scaleform::Lock::DoLock(lVar1);
  }
  return uVar5;
}



// FUNCTION 143df7f00 FUN_143df7f00 body=438 status=ok
// SIG undefined FUN_143df7f00(void)

undefined8 FUN_143df7f00(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 local_28 [2];
  longlong local_20;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    Scaleform::Lock::DoLock(lVar1);
  }
  cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))();
  if (cVar3 == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 1;
    cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),1);
    if (cVar3 == '\0') {
      if (param_3 != 0) {
        local_28[0] = 0;
        local_20 = param_3;
        uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))();
        FUN_143357fa0(local_28,"Could not create listener socket. Error %d",uVar4);
      }
      lVar2 = *(longlong *)(param_1 + 0x18);
      if (lVar2 != 0) {
        Scaleform::Lock::DoLock(lVar2);
      }
      (**(code **)(**(longlong **)(param_1 + 8) + 0xa0))();
      if (lVar2 != 0) {
        Scaleform::Lock::DoLock(lVar2);
      }
      uVar5 = 0;
      goto LAB_143df8091;
    }
    (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8),param_2);
    cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    if (cVar3 == '\0') {
      if (param_3 != 0) {
        local_28[0] = 0;
        local_20 = param_3;
        uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))();
        FUN_143357fa0(local_28,
                      "Could not associate local address (port %d) with listener socket. Error %d\n"
                      ,param_2,uVar4);
      }
      Scaleform::GFx::Socket::Destroy(param_1);
      uVar5 = 0;
      goto LAB_143df8091;
    }
    cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),1);
    if (cVar3 == '\0') {
      if (param_3 != 0) {
        local_28[0] = 0;
        local_20 = param_3;
        uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))();
        FUN_143357fa0(local_28,"Could not place socket in listening state. Error %d\n",uVar4);
      }
      Scaleform::GFx::Socket::Destroy(param_1);
      uVar5 = 0;
      goto LAB_143df8091;
    }
    if (param_3 != 0) {
      local_28[0] = 0;
      local_20 = param_3;
      FUN_143357fa0(local_28,"Socket connection established on port %d\n",param_2);
    }
  }
  uVar5 = 1;
LAB_143df8091:
  if (lVar1 != 0) {
    Scaleform::Lock::DoLock(lVar1);
  }
  return uVar5;
}



// FUNCTION 143df80c0 Destroy body=121 status=ok
// SIG undefined Destroy(void)

void Scaleform::GFx::Socket::Destroy(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))();
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x18);
    if (lVar1 != 0) {
      Lock::DoLock(lVar1);
    }
    (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
    if (lVar1 != 0) {
      Lock::DoLock(lVar1);
    }
  }
  cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))();
  if (cVar2 == '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143df812c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0xc0))();
  return;
}



// FUNCTION 143df8140 FUN_143df8140 body=100 status=ok
// SIG undefined FUN_143df8140(void)

undefined8 FUN_143df8140(longlong param_1,undefined4 param_2)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),1);
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),param_2);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))();
      if (cVar1 != '\0') {
        FUN_143df82c0(param_1);
      }
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143df81d0 Send body=27 status=ok
// SIG undefined Send(void)

int Scaleform::GFx::Socket::Send(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))();
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



// FUNCTION 143df8200 Receive body=26 status=ok
// SIG undefined Receive(void)

int Scaleform::GFx::Socket::Receive(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))();
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 143df8220 FUN_143df8220 body=40 status=ok
// SIG undefined FUN_143df8220(void)

uint FUN_143df8220(longlong param_1)

{
  uint uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))
                    (*(longlong **)(param_1 + 8),local_res8,0);
  if ((int)uVar1 < 0) {
    uVar1 = 0xffffffff;
  }
  return ~uVar1 >> 0x1f;
}



// FUNCTION 143df8250 FUN_143df8250 body=11 status=ok
// SIG undefined FUN_143df8250(void)

void FUN_143df8250(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143df8257. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x78))();
  return;
}



// FUNCTION 143df8270 SetFXSystem body=5 status=ok
// SIG undefined SetFXSystem(void)

void FNULLSceneInterface::SetFXSystem(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}



// FUNCTION 143df82a0 FUN_143df82a0 body=14 status=ok
// SIG undefined FUN_143df82a0(void)

void FUN_143df82a0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143df82a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 200))();
  return;
}



// FUNCTION 143df82c0 FUN_143df82c0 body=74 status=ok
// SIG undefined FUN_143df82c0(void)

undefined1 FUN_143df82c0(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    Scaleform::Lock::DoLock(lVar1);
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
  if (lVar1 != 0) {
    Scaleform::Lock::DoLock(lVar1);
  }
  return uVar2;
}



// FUNCTION 143df8310 FUN_143df8310 body=77 status=ok
// SIG undefined FUN_143df8310(void)

bool FUN_143df8310(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    Scaleform::Lock::DoLock(lVar1);
  }
  cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x98))();
  if (lVar1 != 0) {
    Scaleform::Lock::DoLock(lVar1);
  }
  return cVar2 != '\0';
}



// FUNCTION 143df8370 FUN_143df8370 body=67 status=ok
// SIG undefined FUN_143df8370(void)

void FUN_143df8370(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    Scaleform::Lock::DoLock(lVar1);
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0xa0))();
  if (lVar1 != 0) {
    Scaleform::Lock::DoLock(lVar1);
  }
  return;
}



// FUNCTION 143df83c0 FUN_143df83c0 body=55 status=ok
// SIG undefined FUN_143df83c0(void)

undefined8 * FUN_143df83c0(undefined8 *param_1,undefined1 param_2,longlong *param_3)

{
  longlong *plVar1;
  
  *param_1 = param_3;
  *(undefined1 *)(param_1 + 2) = param_2;
  plVar1 = (longlong *)(**(code **)(*param_3 + 8))(param_3);
  param_1[1] = plVar1;
  if (*(char *)(param_1 + 2) != '\0') {
    (**(code **)(*plVar1 + 0x98))(plVar1);
  }
  return param_1;
}



// FUNCTION 143df8400 FUN_143df8400 body=77 status=ok
// SIG undefined FUN_143df8400(void)

void FUN_143df8400(undefined8 *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)param_1[1] + 0xb0))();
  if (cVar1 != '\0') {
    (**(code **)(*(longlong *)param_1[1] + 0x90))();
  }
  if (*(char *)(param_1 + 2) != '\0') {
    (**(code **)(*(longlong *)param_1[1] + 0xa0))();
  }
                    /* WARNING: Could not recover jumptable at 0x000143df8449. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,param_1[1]);
  return;
}



// FUNCTION 143df8460 FUN_143df8460 body=180 status=ok
// SIG undefined FUN_143df8460(void)

undefined8 FUN_143df8460(longlong param_1,undefined4 param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),param_3);
  if (cVar2 != '\0') {
    lVar1 = **(longlong **)(param_1 + 8);
    if (param_3 != '\0') {
      (**(code **)(lVar1 + 0x68))();
      (**(code **)(**(longlong **)(param_1 + 8) + 0x80))(*(longlong **)(param_1 + 8),1);
      return 1;
    }
    (**(code **)(lVar1 + 0x60))(*(longlong **)(param_1 + 8),param_2);
    cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    lVar1 = **(longlong **)(param_1 + 8);
    if (cVar2 != '\0') {
      (**(code **)(lVar1 + 0x78))(*(longlong **)(param_1 + 8),0);
      return 1;
    }
    cVar2 = (**(code **)(lVar1 + 0xb0))();
    if (cVar2 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
    }
  }
  return 0;
}



// FUNCTION 143df8520 FUN_143df8520 body=51 status=ok
// SIG undefined FUN_143df8520(void)

void FUN_143df8520(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000143df8546. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
    return;
  }
  return;
}



// FUNCTION 143df8580 FUN_143df8580 body=26 status=ok
// SIG undefined FUN_143df8580(void)

int FUN_143df8580(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x58))();
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 143df85b0 FUN_143df85b0 body=43 status=ok
// SIG undefined FUN_143df85b0(void)

undefined8 * FUN_143df85b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145dc8df8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 143df85e0 FUN_143df85e0 body=113 status=ok
// SIG undefined FUN_143df85e0(void)

undefined8 * FUN_143df85e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145dc8ec8;
  FUN_143df91a0(param_1 + 5);
  *param_1 = &PTR_FUN_145dc8df8;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 143df8660 FUN_143df8660 body=80 status=ok
// SIG undefined FUN_143df8660(void)

void FUN_143df8660(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x38);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = 0xffffffffffffffff;
    *puVar1 = &PTR_FUN_145dc8ec8;
    puVar1[4] = 0xffffffffffffffff;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    return;
  }
  return;
}



// FUNCTION 143df86b0 FUN_143df86b0 body=73 status=ok
// SIG undefined FUN_143df86b0(void)

undefined8 * FUN_143df86b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af7d48;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,8);
  }
  return param_1;
}



// FUNCTION 143df8700 FUN_143df8700 body=85 status=ok
// SIG undefined FUN_143df8700(void)

bool FUN_143df8700(longlong param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = Ordinal_23(2,1,6);
  if (param_2 != '\0') {
    *(longlong *)(param_1 + 0x20) = lVar1;
    return lVar1 != -1;
  }
  *(longlong *)(param_1 + 0x18) = lVar1;
  return lVar1 != -1;
}



// FUNCTION 143df8760 FUN_143df8760 body=63 status=ok
// SIG undefined FUN_143df8760(void)

bool FUN_143df8760(longlong param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = Ordinal_23(2,2,0x11);
  *(longlong *)(param_1 + 0x18) = lVar1;
  if (param_2 == '\0') {
    *(longlong *)(param_1 + 0x20) = lVar1;
  }
  return lVar1 != -1;
}



// FUNCTION 143df87a0 FUN_143df87a0 body=35 status=ok
// SIG undefined FUN_143df87a0(void)

bool FUN_143df87a0(longlong param_1)

{
  int iVar1;
  
  iVar1 = Ordinal_2(*(undefined8 *)(param_1 + 0x20),param_1 + 8,0x10);
  return iVar1 != -1;
}



// FUNCTION 143df87d0 Listen body=25 status=ok
// SIG undefined Listen(void)

bool Scaleform::GFx::GFxSocketImpl::Listen(longlong param_1)

{
  int iVar1;
  
  iVar1 = Ordinal_13(*(undefined8 *)(param_1 + 0x20));
  return iVar1 != -1;
}



// FUNCTION 143df87f0 FUN_143df87f0 body=35 status=ok
// SIG undefined FUN_143df87f0(void)

bool FUN_143df87f0(longlong param_1)

{
  int iVar1;
  
  iVar1 = Ordinal_4(*(undefined8 *)(param_1 + 0x18),param_1 + 8,0x10);
  return iVar1 != -1;
}



// FUNCTION 143df8820 FUN_143df8820 body=163 status=ok
// SIG undefined FUN_143df8820(void)

undefined8 FUN_143df8820(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_res10 [2];
  int local_res18 [4];
  undefined4 local_218 [2];
  undefined8 local_210;
  
  if (-1 < param_2) {
    local_210 = *(undefined8 *)(param_1 + 0x20);
    local_res18[1] = 0;
    local_218[0] = 1;
    local_res18[0] = param_2;
    iVar1 = Ordinal_18((int)local_210 + 1,local_218,0,0,local_res18);
    if (iVar1 < 1) {
      return 0;
    }
    iVar1 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(param_1 + 0x20),local_218);
    if (iVar1 == 0) {
      return 0;
    }
  }
  local_res10[0] = 0x10;
  lVar2 = Ordinal_1(*(undefined8 *)(param_1 + 0x20),param_1 + 8,local_res10);
  if (lVar2 == -1) {
    return 0;
  }
  *(longlong *)(param_1 + 0x18) = lVar2;
  return 1;
}



// FUNCTION 143df88d0 Send body=68 status=ok
// SIG undefined Send(void)

ulonglong Scaleform::GFx::GFxSocketImpl::Send(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  if (param_1[3] == -1) {
    return 0xffffffff;
  }
  uVar2 = Ordinal_19();
  if ((int)uVar2 == -1) {
    iVar1 = (**(code **)(*param_1 + 0xa8))(param_1);
    uVar2 = (ulonglong)-(uint)(iVar1 != 0x2733);
  }
  return uVar2;
}



// FUNCTION 143df8940 FUN_143df8940 body=56 status=ok
// SIG undefined FUN_143df8940(void)

undefined8 FUN_143df8940(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x18) == -1) {
    return 0xffffffff;
  }
  uVar1 = Ordinal_20(*(longlong *)(param_1 + 0x18),param_2,param_3,0,param_1 + 8,0x10);
  return uVar1;
}



// FUNCTION 143df8980 FUN_143df8980 body=66 status=ok
// SIG undefined FUN_143df8980(void)

undefined8 FUN_143df8980(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 local_res8 [8];
  
  if (*(longlong *)(param_1 + 0x18) == -1) {
    return 0xffffffff;
  }
  local_res8[0] = 0x10;
  uVar1 = Ordinal_17(*(longlong *)(param_1 + 0x18),param_2,param_3,0,param_1 + 8,local_res8);
  return uVar1;
}



// FUNCTION 143df89d0 FUN_143df89d0 body=69 status=ok
// SIG undefined FUN_143df89d0(void)

void FUN_143df89d0(longlong param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 8) = 2;
  uVar2 = Ordinal_8(0);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  uVar1 = Ordinal_9(param_2);
  *(undefined2 *)(param_1 + 10) = uVar1;
  return;
}



// FUNCTION 143df8a20 FUN_143df8a20 body=70 status=ok
// SIG undefined FUN_143df8a20(void)

void FUN_143df8a20(longlong param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 8) = 2;
  uVar2 = Ordinal_8(0xffffffff);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  uVar1 = Ordinal_9(param_2);
  *(undefined2 *)(param_1 + 10) = uVar1;
  return;
}



// FUNCTION 143df8a70 FUN_143df8a70 body=84 status=ok
// SIG undefined FUN_143df8a70(void)

void FUN_143df8a70(longlong param_1,undefined2 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 8) = 2;
  uVar1 = Ordinal_9(param_2);
  *(undefined2 *)(param_1 + 10) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000143df8abd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  inet_pton(2,param_3,param_1 + 0xc);
  return;
}



// FUNCTION 143df8ad0 FUN_143df8ad0 body=46 status=ok
// SIG undefined FUN_143df8ad0(void)

void FUN_143df8ad0(longlong param_1,char param_2)

{
  uint local_res8 [8];
  
  if (*(longlong *)(param_1 + 0x18) != -1) {
    local_res8[0] = (uint)(param_2 == '\0');
    Ordinal_10(*(longlong *)(param_1 + 0x18),0x8004667e,local_res8);
  }
  return;
}



// FUNCTION 143df8b00 FUN_143df8b00 body=54 status=ok
// SIG undefined FUN_143df8b00(void)

void FUN_143df8b00(longlong param_1,char param_2)

{
  uint local_res10 [6];
  
  local_res10[0] = (uint)(param_2 != '\0');
  Ordinal_21(*(undefined8 *)(param_1 + 0x18),0xffff,0x20,local_res10,4);
  return;
}



// FUNCTION 143df8b40 FUN_143df8b40 body=504 status=ok
// SIG undefined FUN_143df8b40(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_143df8b40(longlong param_1,uint *param_2,int *param_3,char *param_4,uint param_5)

{
  longlong *plVar1;
  longlong lVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong local_res8 [2];
  int *local_458;
  ulonglong *local_450;
  undefined1 local_448 [32];
  undefined1 local_428 [1040];
  
  uVar3 = Ordinal_15(*(undefined2 *)(param_1 + 10));
  *param_2 = (uint)uVar3;
  iVar4 = Ordinal_14(*(undefined4 *)(param_1 + 0xc));
  *param_3 = iVar4;
  if (param_4 != (char *)0x0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    lVar5 = FUN_143315540(plVar1,param_3);
    if ((((lVar5 < 0) || (plVar1 == (longlong *)0x0)) || (lVar6 = *plVar1, lVar6 == 0)) ||
       (*(longlong *)(lVar6 + 8) < lVar5)) {
      iVar4 = getnameinfo(param_1 + 8,0x10,param_4,param_5,local_448,0x20,1);
      if (iVar4 != 0) {
        *param_4 = '\0';
      }
      FUN_1432c2fb0(local_res8,param_4);
      local_450 = local_res8;
      lVar5 = 4;
      lVar6 = 0x1505;
      do {
        lVar2 = lVar5 + -1;
        lVar5 = lVar5 + -1;
        lVar6 = lVar6 * 0x1003f + (ulonglong)*(byte *)(lVar2 + (longlong)param_3);
      } while (lVar5 != 0);
      local_458 = param_3;
      FUN_143df9000(plVar1,plVar1,&local_458,lVar6);
      iVar4 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                        ((local_res8[0] & 0xfffffffffffffffc) + 8,0xffffffff);
      if (iVar4 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8[0] & 0xfffffffffffffffc);
      }
    }
    else {
      strcpy_s(param_4,(ulonglong)param_5,
               (char *)((*(ulonglong *)(lVar5 * 0x20 + 0x28 + lVar6) & 0xfffffffffffffffc) + 0xc));
    }
  }
  if ((*(int *)(param_1 + 0x30) == 0) && (iVar4 = Ordinal_57(local_428,0x401), iVar4 == 0)) {
    local_res8[1] = 0;
    _itoa_s(*param_2,(char *)local_res8,6,10);
    getaddrinfo(local_428,local_res8,0,local_res8 + 1);
  }
  if (*(int *)(param_1 + 0x30) == *param_3) {
    *param_3 = 0x7f000001;
  }
  return;
}



// FUNCTION 143df8d40 Shutdown body=41 status=ok
// SIG undefined Shutdown(void)

undefined1 Scaleform::GFx::GFxSocketImpl::Shutdown(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != -1) {
    Ordinal_3();
    *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
  }
  return 1;
}



// FUNCTION 143df8d70 FUN_143df8d70 body=93 status=ok
// SIG undefined FUN_143df8d70(void)

undefined8 FUN_143df8d70(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_1a8 [416];
  
  Scaleform::Lock::DoLock(&DAT_146bcc438);
  if ((DAT_146bcc430 == 0) && (iVar1 = Ordinal_115(2,local_1a8), iVar1 != 0)) {
    uVar2 = 0;
  }
  else {
    DAT_146bcc430 = DAT_146bcc430 + 1;
    uVar2 = 1;
  }
  Scaleform::Lock::DoLock(&DAT_146bcc438);
  return uVar2;
}



// FUNCTION 143df8dd0 FUN_143df8dd0 body=59 status=ok
// SIG undefined FUN_143df8dd0(void)

void FUN_143df8dd0(void)

{
  Scaleform::Lock::DoLock(&DAT_146bcc438);
  if ((DAT_146bcc430 != 0) && (DAT_146bcc430 = DAT_146bcc430 + -1, DAT_146bcc430 == 0)) {
    Ordinal_116();
  }
  Scaleform::Lock::DoLock(&DAT_146bcc438);
  return;
}



// FUNCTION 143df8e40 ShutdownListener body=48 status=ok
// SIG undefined ShutdownListener(void)

undefined8 Scaleform::GFx::GFxSocketImpl::ShutdownListener(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0xb8))();
  if (cVar1 != '\0') {
    Ordinal_3(param_1[4]);
    param_1[4] = -1;
  }
  return 1;
}



// FUNCTION 143df8e70 FUN_143df8e70 body=8 status=ok
// SIG undefined FUN_143df8e70(void)

undefined ** FUN_143df8e70(void)

{
  return &PTR_PTR_1468387f0;
}



// FUNCTION 143df8e90 FUN_143df8e90 body=356 status=ok
// SIG undefined FUN_143df8e90(void)

longlong FUN_143df8e90(longlong *param_1,undefined8 param_2,undefined4 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong lVar8;
  
  FUN_143df9260();
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar2 = *param_1;
  lVar8 = param_4 * 0x20 + lVar2;
  lVar3 = *(longlong *)(lVar8 + 0x10);
  uVar5 = param_4;
  if (lVar3 == -2) {
    *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined4 *)(lVar8 + 0x20) = *param_3;
    FUN_1432c31e0(lVar8 + 0x28,param_3 + 2);
  }
  else {
    do {
      uVar5 = uVar5 + 1 & plVar1[1];
      lVar7 = uVar5 * 0x20 + lVar2;
    } while (*(longlong *)(lVar7 + 0x10) != -2);
    if (*(ulonglong *)(lVar8 + 0x18) == param_4) {
      *(longlong *)(lVar7 + 0x10) = lVar3;
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(lVar8 + 0x20);
      FUN_1432c31e0(lVar7 + 0x28,lVar8 + 0x28);
      *(undefined4 *)(lVar8 + 0x20) = *param_3;
      FUN_1432c4d80(lVar8 + 0x28,param_3 + 2);
      *(ulonglong *)(lVar8 + 0x10) = uVar5;
    }
    else {
      puVar6 = (ulonglong *)(lVar2 + 0x10 + *(ulonglong *)(lVar8 + 0x18) * 0x20);
      uVar4 = *puVar6;
      while (uVar4 != param_4) {
        puVar6 = (ulonglong *)(lVar2 + 0x10 + *puVar6 * 0x20);
        uVar4 = *puVar6;
      }
      *(longlong *)(lVar7 + 0x10) = lVar3;
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(lVar8 + 0x20);
      FUN_1432c31e0(lVar7 + 0x28,lVar8 + 0x28);
      *puVar6 = uVar5;
      *(undefined4 *)(lVar8 + 0x20) = *param_3;
      FUN_1432c4d80(lVar8 + 0x28,param_3 + 2);
      *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar8 + 0x18) = param_4;
  return lVar8 + 0x20;
}



// FUNCTION 143df9000 FUN_143df9000 body=408 status=ok
// SIG undefined FUN_143df9000(void)

longlong FUN_143df9000(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    lVar6 = 8;
  }
  else {
    if ((ulonglong)(*plVar1 * 5) <= plVar1[1] * 4 + 4U) goto LAB_143df9053;
    lVar6 = plVar1[1] * 2 + 2;
  }
  FUN_143df92b0(param_1,param_2,lVar6);
LAB_143df9053:
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar6 = *param_1;
  lVar8 = param_4 * 0x20 + lVar6;
  lVar2 = *(longlong *)(lVar8 + 0x10);
  uVar5 = param_4;
  if (lVar2 == -2) {
    *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    *(undefined4 *)(lVar8 + 0x20) = *(undefined4 *)*param_3;
    FUN_1432c31e0(lVar8 + 0x28,param_3[1]);
  }
  else {
    do {
      uVar5 = uVar5 + 1 & plVar1[1];
      lVar7 = uVar5 * 0x20 + lVar6;
    } while (*(longlong *)(lVar7 + 0x10) != -2);
    if (*(ulonglong *)(lVar8 + 0x18) == param_4) {
      *(longlong *)(lVar7 + 0x10) = lVar2;
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(lVar8 + 0x20);
      FUN_1432c31e0(lVar7 + 0x28,lVar8 + 0x28);
      *(undefined4 *)(lVar8 + 0x20) = *(undefined4 *)*param_3;
      FUN_1432c4d80(lVar8 + 0x28,param_3[1]);
      *(ulonglong *)(lVar8 + 0x10) = uVar5;
    }
    else {
      puVar4 = (ulonglong *)(lVar6 + 0x10 + *(ulonglong *)(lVar8 + 0x18) * 0x20);
      uVar3 = *puVar4;
      while (uVar3 != param_4) {
        puVar4 = (ulonglong *)(lVar6 + 0x10 + *puVar4 * 0x20);
        uVar3 = *puVar4;
      }
      *(longlong *)(lVar7 + 0x10) = lVar2;
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(lVar8 + 0x20);
      FUN_1432c31e0(lVar7 + 0x28,lVar8 + 0x28);
      *puVar4 = uVar5;
      *(undefined4 *)(lVar8 + 0x20) = *(undefined4 *)*param_3;
      FUN_1432c4d80(lVar8 + 0x28,param_3[1]);
      *(undefined8 *)(lVar8 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar8 + 0x18) = param_4;
  return lVar8 + 0x20;
}



// FUNCTION 143df91a0 FUN_143df91a0 body=177 status=ok
// SIG undefined FUN_143df91a0(void)

void FUN_143df91a0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 != 0) {
    lVar4 = 0;
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar1 = *param_1;
      if (*(longlong *)(lVar1 + 0x10 + lVar4) != -2) {
        iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                          ((*(ulonglong *)(lVar1 + 0x28 + lVar4) & 0xfffffffffffffffc) + 8,
                           0xffffffff);
        if (iVar2 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        *(undefined8 *)(lVar1 + 0x10 + lVar4) = 0xfffffffffffffffe;
      }
      lVar4 = lVar4 + 0x20;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    if (*param_1 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143df9260 FUN_143df9260 body=67 status=ok
// SIG undefined FUN_143df9260(void)

void FUN_143df9260(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_143df92b0(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_143df92b0(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 143df92b0 FUN_143df92b0 body=401 status=ok
// SIG undefined FUN_143df92b0(void)

void FUN_143df92b0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_143df91a0();
    return;
  }
  if (param_3 < 8) {
    lVar5 = 8;
  }
  else {
    cVar2 = FUN_14207c6a0(param_3 - 1);
    lVar5 = 1L << (cVar2 + 1U & 0x3f);
  }
  local_res18[0] = 2;
  lVar7 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,lVar5 * 0x20 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar5 + -1;
  lVar8 = lVar7;
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)(lVar8 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar8 = lVar8 + 0x20;
  }
  if (*param_1 != 0) {
    lVar5 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar8 = *param_1 + lVar7;
      if (*(longlong *)(lVar8 + 0x10) != -2) {
        lVar4 = 4;
        lVar9 = 0x1505;
        do {
          lVar1 = lVar4 + 0x1f;
          lVar4 = lVar4 + -1;
          lVar9 = lVar9 * 0x1003f + (ulonglong)*(byte *)(lVar1 + lVar8);
        } while (lVar4 != 0);
        FUN_143df8e90(&local_res20,param_2,lVar8 + 0x20,lVar9);
        uVar6 = *(ulonglong *)(lVar8 + 0x28) & 0xfffffffffffffffc;
        iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar6 + 8,0xffffffff);
        if (iVar3 == 1) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar6);
        }
        *(undefined8 *)(lVar8 + 0x10) = 0xfffffffffffffffe;
      }
      lVar7 = lVar7 + 0x20;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    if (*param_1 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 143df9450 FUN_143df9450 body=33 status=ok
// SIG undefined FUN_143df9450(void)

void FUN_143df9450(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  FUN_143df94b0(param_1,local_res10,4);
  return;
}



// FUNCTION 143df9480 FUN_143df9480 body=34 status=ok
// SIG undefined FUN_143df9480(void)

void FUN_143df9480(longlong param_1,undefined1 param_2)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = param_2;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
            (*(longlong **)(param_1 + 0x18),local_res10,1);
  return;
}



// FUNCTION 143df94b0 FUN_143df94b0 body=490 status=ok
// SIG undefined FUN_143df94b0(void)

void FUN_143df94b0(longlong param_1,longlong param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 local_228 [512];
  
  if (*(char *)(param_1 + 0x20) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000143df94e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
              (*(longlong **)(param_1 + 0x18),param_2,param_3 * param_4);
    return;
  }
  lVar6 = 0x200;
  uVar7 = param_3 * param_4;
  uVar5 = 0x200 / (longlong)param_3 & 0xffffffff;
  uVar9 = uVar7 & 0x800001ff;
  if ((int)uVar9 < 0) {
    uVar9 = (uVar9 - 1 | 0xfffffe00) + 1;
  }
  for (; 0 < (int)uVar7; uVar7 = uVar7 - uVar4) {
    uVar3 = (int)uVar9 / param_3;
    if (0x1ff < (int)uVar7) {
      uVar3 = (uint)uVar5;
    }
    uVar5 = (ulonglong)uVar3;
    uVar4 = uVar9;
    if (0x1ff < (int)uVar7) {
      uVar4 = (uint)lVar6;
    }
    lVar6 = (longlong)(int)uVar4;
    FUN_14370c700(local_228,param_2,uVar4);
    if (param_3 == 2) {
      puVar2 = local_228;
      uVar8 = uVar5;
      if (0 < (int)uVar3) {
        do {
          uVar1 = *puVar2;
          *puVar2 = puVar2[1];
          puVar2[1] = uVar1;
          puVar2 = puVar2 + 2;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
    else if (param_3 == 4) {
      if (0 < (int)uVar3) {
        puVar2 = local_228 + 2;
        uVar8 = uVar5;
        do {
          uVar1 = puVar2[-2];
          puVar2[-2] = puVar2[1];
          puVar2[1] = uVar1;
          uVar1 = puVar2[-1];
          puVar2[-1] = *puVar2;
          *puVar2 = uVar1;
          puVar2 = puVar2 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
    else if ((param_3 == 8) && (0 < (int)uVar3)) {
      puVar2 = local_228 + 6;
      uVar8 = (ulonglong)uVar3;
      do {
        uVar1 = puVar2[-6];
        puVar2[-6] = puVar2[1];
        puVar2[1] = uVar1;
        uVar1 = puVar2[-5];
        puVar2[-5] = *puVar2;
        *puVar2 = uVar1;
        uVar1 = puVar2[-4];
        puVar2[-4] = puVar2[-1];
        puVar2[-1] = uVar1;
        uVar1 = puVar2[-3];
        puVar2[-3] = puVar2[-2];
        puVar2[-2] = uVar1;
        puVar2 = puVar2 + 8;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
              (*(longlong **)(param_1 + 0x18),local_228,uVar4);
    param_2 = param_2 + lVar6;
  }
  return;
}



// FUNCTION 143df96a0 FUN_143df96a0 body=35 status=ok
// SIG undefined FUN_143df96a0(void)

void FUN_143df96a0(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  FUN_143df94b0(param_1,local_res10,4);
  return;
}



// FUNCTION 143df96d0 FUN_143df96d0 body=158 status=ok
// SIG undefined FUN_143df96d0(void)

void FUN_143df96d0(undefined8 param_1,longlong param_2)

{
  FUN_143df9770(param_1,0x51,param_2);
  FUN_143df9770(param_1,0x41,param_2 + 0x10);
  FUN_143df9770(param_1,0x42,param_2 + 0x20);
  FUN_143df9770(param_1,0x52,param_2 + 0x30);
  FUN_143df9770(param_1,0x351,param_2 + 0x40);
  FUN_143df9770(param_1,0x341,param_2 + 0x50);
  FUN_143df9770(param_1,0x342,param_2 + 0x60);
  FUN_143df9770(param_1,0x352,param_2 + 0x70);
  return;
}



// FUNCTION 143df9770 FUN_143df9770 body=56 status=ok
// SIG undefined FUN_143df9770(void)

void FUN_143df9770(longlong param_1,uint param_2,undefined8 param_3)

{
  FUN_143dfd120(param_1 + (ulonglong)((int)(int3)(param_2 >> 8) & 0xf) * 0x10,
                (ulonglong)((int)param_2 >> 4 & 0xf) * 0x10 + param_1,
                (ulonglong)(param_2 & 0xf) * 0x10 + param_1,param_3);
  return;
}



// FUNCTION 143df97b0 FUN_143df97b0 body=321 status=ok
// SIG undefined FUN_143df97b0(void)

uint * FUN_143df97b0(uint *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar4 = *param_4;
  uVar1 = *param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (uint)(uVar4 < uVar1);
  param_1[4] = 0;
  param_1[5] = 0;
  *(uint **)(param_1 + 6) = param_2;
  *(uint **)(param_1 + 8) = param_4;
  param_1[10] = param_3;
  param_1[0xb] = param_5;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  uVar4 = *param_1;
  if (uVar4 == 0) {
    param_4 = param_2;
  }
  *(uint **)(param_1 + 2) = param_4;
  if (uVar4 == 0) {
    param_2 = *(uint **)(param_1 + 8);
  }
  *(uint **)(param_1 + 4) = param_2;
  do {
    if (*param_2 < param_4[4]) {
      do {
        if (-1 < (int)(param_4[5] - param_2[1] | param_4[6] - param_2[2] | param_2[5] - param_4[1] |
                      param_2[6] - param_4[2])) {
          *(uint **)(param_1 + 4) = param_2;
          *(uint **)(param_1 + 2) = param_4;
          *param_1 = uVar4;
          return param_1;
        }
        param_2 = param_2 + 8;
      } while (*param_2 < param_4[4]);
    }
    lVar3 = 0x18;
    if (uVar4 != 0) {
      lVar3 = 0x20;
    }
    *(longlong *)(lVar3 + (longlong)param_1) = *(longlong *)(lVar3 + (longlong)param_1) + 0x20;
    lVar3 = 0x28;
    if (uVar4 != 0) {
      lVar3 = 0x2c;
    }
    *(int *)(lVar3 + (longlong)param_1) = *(int *)(lVar3 + (longlong)param_1) + -1;
    puVar2 = *(uint **)(param_1 + 8);
    param_4 = *(uint **)(param_1 + 6);
    uVar4 = (uint)(*puVar2 < *param_4);
    param_2 = puVar2;
    if (*puVar2 < *param_4) {
      param_2 = param_4;
      param_4 = puVar2;
    }
  } while ((0 < (int)param_1[10]) && (0 < (int)param_1[0xb]));
  return param_1;
}



// FUNCTION 143df9900 FUN_143df9900 body=88 status=ok
// SIG undefined FUN_143df9900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143df9900(undefined8 *param_1,uint *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  auVar1._0_8_ = CONCAT44((((int)param_2[1] >> 0x1f | uRam0000000146838804) ^ param_2[1]) >> 1,
                          (((int)*param_2 >> 0x1f | _DAT_146838800) ^ *param_2) >> 1);
  auVar1._8_4_ = (((int)param_2[2] >> 0x1f | uRam0000000146838808) ^ param_2[2]) >> 1;
  auVar1._12_4_ = (((int)param_2[3] >> 0x1f | uRam000000014683880c) ^ param_2[3]) >> 1;
  iVar2 = ((((int)param_2[4] >> 0x1f | _DAT_146838800) ^ param_2[4]) >> 1) + _DAT_146838810;
  iVar3 = ((((int)param_2[5] >> 0x1f | uRam0000000146838804) ^ param_2[5]) >> 1) +
          iRam0000000146838814;
  iVar4 = ((((int)param_2[6] >> 0x1f | uRam0000000146838808) ^ param_2[6]) >> 1) +
          iRam0000000146838818;
  iVar5 = ((((int)param_2[7] >> 0x1f | uRam000000014683880c) ^ param_2[7]) >> 1) +
          iRam000000014683881c;
  *param_1 = auVar1._0_8_;
  param_1[1] = auVar1._8_8_ & 0xffffffff | (param_3 & 0xffff) << 0x20 | (param_3 >> 0x10) << 0x30;
  *(int *)(param_1 + 2) = iVar2;
  *(int *)((longlong)param_1 + 0x14) = iVar3;
  *(int *)(param_1 + 3) = iVar4;
  *(int *)((longlong)param_1 + 0x1c) = iVar5;
  return;
}



// FUNCTION 143df9960 FUN_143df9960 body=493 status=ok
// SIG undefined FUN_143df9960(void)

void FUN_143df9960(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  ulonglong uVar14;
  uint uVar15;
  uint local_res8 [2];
  uint local_res10 [2];
  
  puVar7 = (undefined4 *)0x0;
  uVar11 = param_2 + 3 & 0xfffffffc;
  puVar6 = puVar7;
  local_res10[0] = uVar11;
  if (uVar11 != 0) {
    puVar6 = (undefined4 *)FUN_143702d60(&PTR_vftable_1467f0638,8,local_res10);
  }
  uVar15 = 0x80000000;
  if (local_res10[0] != 0) {
    uVar15 = local_res10[0];
  }
  puVar9 = puVar7;
  puVar10 = param_1;
  puVar12 = puVar7;
  if (0 < (int)uVar11) {
    do {
      uVar1 = *puVar10;
      puVar6[(longlong)puVar9 * 2 + 1] = (int)puVar12;
      puVar6[(longlong)puVar9 * 2] = uVar1;
      puVar9 = (undefined4 *)((longlong)puVar9 + 1);
      puVar10 = puVar10 + 8;
      puVar12 = (undefined4 *)(ulonglong)((int)puVar12 + 1);
    } while ((longlong)puVar9 < (longlong)(int)uVar11);
  }
  puVar9 = puVar7;
  local_res8[0] = uVar11;
  if (uVar11 != 0) {
    puVar9 = (undefined4 *)FUN_143702d60(&PTR_vftable_1467f0638,8,local_res8);
  }
  uVar8 = 0x80000000;
  if (local_res8[0] != 0) {
    uVar8 = local_res8[0];
  }
  FUN_1437fa490(puVar6,uVar11,puVar9);
  if (-1 < (int)uVar8) {
    FUN_143702e10(&PTR_vftable_1467f0638,puVar9,8,uVar8 & 0x3fffffff);
  }
  local_res8[0] = param_2;
  if (param_2 != 0) {
    puVar7 = (undefined4 *)FUN_143702d60(&PTR_vftable_1467f0638,0x20,local_res8);
  }
  uVar11 = 0x80000000;
  if (local_res8[0] != 0) {
    uVar11 = local_res8[0];
  }
  if (0 < (int)param_2) {
    puVar13 = puVar6 + 1;
    puVar9 = puVar7;
    uVar14 = (longlong)(int)param_2;
    do {
      uVar8 = *puVar13;
      puVar13 = puVar13 + 2;
      uVar4 = *(undefined8 *)(param_1 + (ulonglong)uVar8 * 8 + 4);
      uVar5 = *(undefined8 *)((longlong)(param_1 + (ulonglong)uVar8 * 8 + 4) + 8);
      puVar10 = param_1 + (ulonglong)uVar8 * 8;
      uVar1 = puVar10[1];
      uVar2 = puVar10[2];
      uVar3 = puVar10[3];
      *puVar9 = *puVar10;
      puVar9[1] = uVar1;
      puVar9[2] = uVar2;
      puVar9[3] = uVar3;
      *(undefined8 *)(puVar9 + 4) = uVar4;
      *(undefined8 *)(puVar9 + 6) = uVar5;
      uVar14 = uVar14 - 1;
      puVar9 = puVar9 + 8;
    } while (uVar14 != 0);
  }
  uVar14 = ((longlong)(int)param_2 & 0x7ffffffffffffffU) << 1;
  if ((int)uVar14 != 0) {
    puVar9 = puVar7;
    do {
      uVar1 = puVar9[1];
      uVar2 = puVar9[2];
      uVar3 = puVar9[3];
      puVar10 = (undefined4 *)(((longlong)param_1 - (longlong)puVar7) + (longlong)puVar9);
      *puVar10 = *puVar9;
      puVar10[1] = uVar1;
      puVar10[2] = uVar2;
      puVar10[3] = uVar3;
      puVar9 = puVar9 + 4;
      uVar8 = (int)uVar14 - 1;
      uVar14 = (ulonglong)uVar8;
    } while (uVar8 != 0);
  }
  if (-1 < (int)uVar11) {
    FUN_143702e10(&PTR_vftable_1467f0638,puVar7,0x20,uVar11 & 0x3fffffff);
  }
  if (-1 < (int)uVar15) {
    FUN_143702e10(&PTR_vftable_1467f0638,puVar6,8,uVar15 & 0x3fffffff);
  }
  return;
}



// FUNCTION 143df9b50 FUN_143df9b50 body=238 status=ok
// SIG undefined FUN_143df9b50(void)

void FUN_143df9b50(undefined8 *param_1,int param_2,longlong *param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  
  uVar9 = 0;
  uVar7 = param_2 + 3U & 0xfffffffc;
  puVar10 = param_1;
  uVar11 = uVar9;
  uVar8 = uVar9;
  if (0 < (int)uVar7) {
    do {
      puVar1 = (undefined4 *)(*param_3 + uVar11 * 8);
      uVar2 = *(undefined4 *)puVar10;
      puVar1[1] = (int)uVar8;
      uVar11 = uVar11 + 1;
      *puVar1 = uVar2;
      puVar10 = puVar10 + 4;
      uVar8 = (ulonglong)((int)uVar8 + 1);
    } while ((longlong)uVar11 < (longlong)(int)uVar7);
  }
  FUN_1437fa490(*param_3,uVar7,*param_4);
  uVar11 = uVar9;
  if (0 < param_2) {
    do {
      uVar8 = (ulonglong)*(uint *)(*param_3 + 4 + uVar9 * 8);
      uVar9 = uVar9 + 1;
      lVar3 = *param_4;
      uVar4 = param_1[uVar8 * 4 + 2];
      uVar5 = (param_1 + uVar8 * 4 + 2)[1];
      uVar6 = (param_1 + uVar8 * 4)[1];
      puVar10 = (undefined8 *)(uVar11 + lVar3);
      *puVar10 = param_1[uVar8 * 4];
      puVar10[1] = uVar6;
      puVar10 = (undefined8 *)(uVar11 + 0x10 + lVar3);
      *puVar10 = uVar4;
      puVar10[1] = uVar5;
      uVar11 = uVar11 + 0x20;
    } while ((longlong)uVar9 < (longlong)param_2);
  }
  puVar10 = (undefined8 *)*param_4;
  uVar11 = ((longlong)param_2 & 0x7ffffffffffffffU) << 1;
  uVar7 = (uint)uVar11;
  while (uVar7 != 0) {
    uVar4 = *puVar10;
    uVar5 = puVar10[1];
    puVar10 = puVar10 + 2;
    *param_1 = uVar4;
    param_1[1] = uVar5;
    param_1 = param_1 + 2;
    uVar7 = (int)uVar11 - 1;
    uVar11 = (ulonglong)uVar7;
  }
  return;
}



// FUNCTION 143df9c40 FUN_143df9c40 body=206 status=ok
// SIG undefined FUN_143df9c40(void)

undefined4 *
FUN_143df9c40(longlong param_1,undefined4 *param_2,int param_3,uint *param_4,uint *param_5,
             int *param_6)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  undefined4 local_res18 [4];
  
  plVar6 = (longlong *)
           ((longlong)*(int *)((longlong)(param_3 + 1) * 0x40 + *(longlong *)(param_1 + 0x48)) *
            0x40 + *(longlong *)(param_1 + 0x198));
  LOCK();
  lVar1 = *plVar6;
  *plVar6 = *plVar6 + (ulonglong)*param_4;
  UNLOCK();
  uVar5 = (uint)lVar1;
  *param_5 = uVar5;
  uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
  if (uVar5 < uVar4) {
    uVar2 = *param_4;
    uVar4 = uVar4 - uVar5;
    *param_6 = uVar5 + uVar2;
    if ((uVar4 >> 3) + 1 < uVar2) {
      uVar3 = uVar2;
      if (uVar4 < uVar2) {
        uVar3 = uVar4;
      }
      *param_6 = uVar3 + uVar5;
      *param_4 = uVar2 >> 1;
    }
    else {
      while (uVar2 < uVar4 >> 4) {
        uVar2 = uVar2 * 2;
        *param_4 = uVar2;
      }
    }
    *param_2 = 0;
    return param_2;
  }
  *param_4 = 1;
  FUN_143df9e40(param_1,local_res18,param_3 + 1,param_5);
  *param_6 = *param_5 + 1;
  *param_2 = local_res18[0];
  return param_2;
}



// FUNCTION 143df9d10 FUN_143df9d10 body=302 status=ok
// SIG undefined FUN_143df9d10(void)

void FUN_143df9d10(undefined4 *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  iVar5 = param_2 + 1;
  uVar3 = FUN_143703a50();
  if ((int)(param_1[0x15] & 0x3fffffff) < iVar5) {
    iVar2 = (param_1[0x15] & 0x3fffffff) * 2;
    iVar1 = iVar5;
    if (iVar5 < iVar2) {
      iVar1 = iVar2;
    }
    FUN_14370c310(uVar3,param_1 + 0x12,iVar1,0x40);
  }
  param_1[0x14] = iVar5;
  uVar3 = FUN_143703a50();
  if ((int)(param_1[0x69] & 0x3fffffff) < iVar5) {
    iVar2 = (param_1[0x69] & 0x3fffffff) * 2;
    iVar1 = iVar5;
    if (iVar5 < iVar2) {
      iVar1 = iVar2;
    }
    FUN_14370c310(uVar3,param_1 + 0x66,iVar1,0x40);
  }
  param_1[0x68] = iVar5;
  uVar7 = 0;
  *param_1 = 1;
  iVar5 = param_1[0x14] + -1;
  if (0 < iVar5) {
    lVar6 = (longlong)iVar5 << 6;
    uVar8 = uVar7;
    do {
      uVar4 = (int)param_3 / param_2 + (int)uVar8;
      uVar7 = (ulonglong)uVar4;
      *(ulonglong *)(lVar6 + *(longlong *)(param_1 + 0x66)) = (ulonglong)uVar4 << 0x20 | uVar8;
      *(int *)(lVar6 + *(longlong *)(param_1 + 0x12)) = iVar5;
      iVar5 = iVar5 + -1;
      lVar6 = lVar6 + -0x40;
      uVar8 = uVar7;
    } while (0 < iVar5);
  }
  **(ulonglong **)(param_1 + 0x66) = (ulonglong)param_3 << 0x20 | uVar7;
  **(undefined4 **)(param_1 + 0x12) = 0;
  return;
}



// FUNCTION 143df9e40 FUN_143df9e40 body=365 status=ok
// SIG undefined FUN_143df9e40(void)

undefined4 * FUN_143df9e40(int *param_1,undefined4 *param_2,int param_3,uint *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  
  if (*param_1 != 0) {
    iVar8 = 0;
    iVar3 = 0;
    iVar10 = 0;
    if (0 < param_1[0x14]) {
      puVar7 = *(undefined8 **)(param_1 + 0x66);
      do {
        iVar2 = (int)((ulonglong)*puVar7 >> 0x20) - (int)*puVar7;
        if (iVar3 < iVar2) {
          iVar3 = iVar2;
          iVar8 = iVar10;
        }
        iVar10 = iVar10 + 1;
        puVar7 = puVar7 + 8;
      } while (iVar10 < param_1[0x14]);
      if (0xf < iVar3) {
        iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
        LOCK();
        plVar5 = *(undefined8 **)(param_1 + 0x66) + (longlong)iVar8 * 8;
        lVar9 = *plVar5;
        *plVar5 = *plVar5 + (longlong)iVar3;
        UNLOCK();
        uVar11 = (uint)lVar9;
        uVar4 = iVar3 + uVar11;
        uVar6 = (uint)((ulonglong)lVar9 >> 0x20);
        if (uVar4 <= uVar6) {
          uVar6 = uVar4;
        }
        lVar9 = (longlong)param_3 * 0x40;
        *(ulonglong *)(lVar9 + *(longlong *)(param_1 + 0x66)) = CONCAT44(uVar6,uVar11 + 1);
        *(int *)(lVar9 + *(longlong *)(param_1 + 0x12)) = param_3;
        if (uVar11 < uVar6) {
          *param_4 = uVar11;
          *param_2 = 0;
          return param_2;
        }
        goto LAB_143df9f21;
      }
    }
    *param_1 = 0;
  }
LAB_143df9f21:
  lVar9 = (longlong)param_3 * 0x40;
  iVar8 = 0;
  iVar3 = *(int *)(lVar9 + *(longlong *)(param_1 + 0x12));
  if (0 < param_1[0x14]) {
    do {
      iVar10 = iVar3 + 1;
      iVar3 = 0;
      if (iVar10 != param_1[0x14]) {
        iVar3 = iVar10;
      }
      plVar5 = (longlong *)((longlong)iVar3 * 0x40 + *(longlong *)(param_1 + 0x66));
      LOCK();
      lVar1 = *plVar5;
      *plVar5 = *plVar5 + 1;
      UNLOCK();
      uVar6 = (uint)lVar1;
      if (uVar6 < (uint)((ulonglong)lVar1 >> 0x20)) {
        lVar1 = *(longlong *)(param_1 + 0x12);
        *param_2 = 0;
        *(int *)(lVar9 + lVar1) = iVar3;
        *param_4 = uVar6;
        return param_2;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_1[0x14]);
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 143df9fc0 FUN_143df9fc0 body=120 status=ok
// SIG undefined FUN_143df9fc0(void)

undefined8 FUN_143df9fc0(longlong *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  
  if (*param_1 == 0) {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar1 + 0x58),0x28);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_143dfa040(lVar2);
    }
    if (lVar2 != *param_1) {
      if (*param_1 != 0) {
        FUN_14370c150();
      }
      *param_1 = lVar2;
    }
    return 0;
  }
  return 0;
}



// FUNCTION 143dfa040 FUN_143dfa040 body=34 status=ok
// SIG undefined FUN_143dfa040(void)

undefined8 * FUN_143dfa040(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkConcurrency::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return param_1;
}



// FUNCTION 143dfa070 FUN_143dfa070 body=77 status=ok
// SIG undefined FUN_143dfa070(void)

void FUN_143dfa070(ulonglong *param_1)

{
  undefined **local_28 [4];
  
  if (param_1 != (ulonglong *)0x0) {
    FUN_14371d720(local_28,DAT_146b82398);
    do {
      (*(code *)param_1[1])(local_28);
      param_1 = (ulonglong *)(*param_1 & 0xfffffffffffffffc);
    } while (param_1 != (ulonglong *)0x0);
    local_28[0] = hkReflect::Version::PatchAdder::vftable;
    FUN_14371daa0(local_28);
  }
  return;
}



// FUNCTION 143dfa0c0 FUN_143dfa0c0 body=77 status=ok
// SIG undefined FUN_143dfa0c0(void)

void FUN_143dfa0c0(ulonglong *param_1)

{
  undefined **local_28 [4];
  
  if (param_1 != (ulonglong *)0x0) {
    FUN_14371d930(local_28,DAT_146b82398);
    do {
      (*(code *)param_1[1])(local_28);
      param_1 = (ulonglong *)(*param_1 & 0xfffffffffffffffc);
    } while (param_1 != (ulonglong *)0x0);
    local_28[0] = hkReflect::Version::PatchRemover::vftable;
    FUN_14371daa0(local_28);
  }
  return;
}



// FUNCTION 143dfa110 FUN_143dfa110 body=315 status=ok
// SIG undefined FUN_143dfa110(void)

int FUN_143dfa110(undefined4 *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  int local_68 [4];
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48 [8];
  undefined4 local_28 [8];
  
  if (*(longlong *)(param_1 + 6) < 0) {
    hkInt256::setNeg(&local_88);
  }
  else {
    local_88._0_4_ = *param_1;
    local_88._4_4_ = param_1[1];
    uStack_80 = param_1[2];
    uStack_7c = param_1[3];
    local_78 = *(undefined8 *)(param_1 + 4);
    uStack_70 = *(undefined8 *)(param_1 + 6);
  }
  if (*(longlong *)(param_2 + 6) < 0) {
    hkInt256::setNeg(local_68);
  }
  else {
    local_68[0] = *param_2;
    local_68[1] = param_2[1];
    local_68[2] = param_2[2];
    local_68[3] = param_2[3];
    local_58 = *(undefined8 *)(param_2 + 4);
    uStack_50 = *(undefined8 *)(param_2 + 6);
  }
  uVar6 = 0;
  lVar3 = 0;
  do {
    uVar2 = uVar6 >> 1;
    uVar5 = (int)uVar6 + 2;
    uVar6 = (ulonglong)uVar5;
    *(undefined4 *)((longlong)local_28 + lVar3) = *(undefined4 *)(&local_88 + uVar2);
    *(int *)((longlong)local_28 + lVar3 + 4) = (int)((ulonglong)(&local_88)[uVar2] >> 0x20);
    *(int *)((longlong)local_48 + lVar3) = local_68[uVar2 * 2];
    *(int *)((longlong)local_48 + lVar3 + 4) =
         (int)((ulonglong)*(undefined8 *)(local_68 + uVar2 * 2) >> 0x20);
    lVar3 = lVar3 + 8;
  } while ((int)uVar5 < 8);
  FUN_143dfa4a0(local_28,local_48,local_68,0,8);
  uVar5 = 0xffffffff;
  if (*(longlong *)(param_1 + 6) < 0) {
    uVar4 = 0xffffffff;
  }
  else {
    cVar1 = FUN_143dfa480(param_1,4);
    uVar4 = (uint)(cVar1 == '\0');
  }
  if (-1 < *(longlong *)(param_2 + 6)) {
    cVar1 = FUN_143dfa480(param_2,4);
    uVar5 = (uint)(cVar1 == '\0');
  }
  return uVar5 * uVar4 * local_68[0];
}



// FUNCTION 143dfa250 FUN_143dfa250 body=41 status=ok
// SIG undefined FUN_143dfa250(void)

void FUN_143dfa250(undefined8 param_1)

{
  undefined1 local_28 [32];
  
  FUN_143dfae70(local_28);
  hkInt256::setAdd(param_1,param_1,local_28);
  return;
}



// FUNCTION 143dfa280 thunk_FUN_143dfa110 body=5 status=ok
// SIG undefined thunk_FUN_143dfa110(void)

int thunk_FUN_143dfa110(undefined4 *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  int aiStack_68 [4];
  undefined8 uStack_58;
  undefined8 uStack_50;
  int aiStack_48 [8];
  undefined4 auStack_28 [8];
  
  if (*(longlong *)(param_1 + 6) < 0) {
    hkInt256::setNeg(&uStack_88);
  }
  else {
    uStack_88._0_4_ = *param_1;
    uStack_88._4_4_ = param_1[1];
    uStack_80 = param_1[2];
    uStack_7c = param_1[3];
    uStack_78 = *(undefined8 *)(param_1 + 4);
    uStack_70 = *(undefined8 *)(param_1 + 6);
  }
  if (*(longlong *)(param_2 + 6) < 0) {
    hkInt256::setNeg(aiStack_68);
  }
  else {
    aiStack_68[0] = *param_2;
    aiStack_68[1] = param_2[1];
    aiStack_68[2] = param_2[2];
    aiStack_68[3] = param_2[3];
    uStack_58 = *(undefined8 *)(param_2 + 4);
    uStack_50 = *(undefined8 *)(param_2 + 6);
  }
  uVar6 = 0;
  lVar3 = 0;
  do {
    uVar2 = uVar6 >> 1;
    uVar5 = (int)uVar6 + 2;
    uVar6 = (ulonglong)uVar5;
    *(undefined4 *)((longlong)auStack_28 + lVar3) = *(undefined4 *)(&uStack_88 + uVar2);
    *(int *)((longlong)auStack_28 + lVar3 + 4) = (int)((ulonglong)(&uStack_88)[uVar2] >> 0x20);
    *(int *)((longlong)aiStack_48 + lVar3) = aiStack_68[uVar2 * 2];
    *(int *)((longlong)aiStack_48 + lVar3 + 4) =
         (int)((ulonglong)*(undefined8 *)(aiStack_68 + uVar2 * 2) >> 0x20);
    lVar3 = lVar3 + 8;
  } while ((int)uVar5 < 8);
  FUN_143dfa4a0(auStack_28,aiStack_48,aiStack_68,0,8);
  uVar5 = 0xffffffff;
  if (*(longlong *)(param_1 + 6) < 0) {
    uVar4 = 0xffffffff;
  }
  else {
    cVar1 = FUN_143dfa480(param_1,4);
    uVar4 = (uint)(cVar1 == '\0');
  }
  if (-1 < *(longlong *)(param_2 + 6)) {
    cVar1 = FUN_143dfa480(param_2,4);
    uVar5 = (uint)(cVar1 == '\0');
  }
  return uVar5 * uVar4 * aiStack_68[0];
}



// FUNCTION 143dfa290 FUN_143dfa290 body=275 status=ok
// SIG undefined FUN_143dfa290(void)

int FUN_143dfa290(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  
  iVar5 = 0;
  lVar6 = (longlong)(param_2 + -1);
  if (-1 < param_2 + -1) {
    do {
      uVar1 = *(ulonglong *)(param_1 + lVar6 * 8);
      uVar3 = (uint)(uVar1 >> 1) & 0x7fffffff | (uint)uVar1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 >> 0x10 | uVar3;
      uVar3 = uVar3 - (uVar3 >> 1 & 0x55555555);
      uVar4 = (uint)(uVar1 >> 0x20);
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar7 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 >> 0x10 | uVar4;
      uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
      uVar3 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
      iVar2 = 0x20 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f) * 0x1010101 >> 0x18);
      if (0x1f < iVar2) {
        iVar2 = 0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f) * 0x1010101 >> 0x18);
      }
      iVar5 = iVar5 + iVar2;
    } while ((iVar2 == 0x40) && (lVar6 = lVar6 + -1, -1 < lVar6));
  }
  return iVar5;
}



// FUNCTION 143dfa3b0 FUN_143dfa3b0 body=203 status=ok
// SIG undefined FUN_143dfa3b0(void)

int FUN_143dfa3b0(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  uVar4 = 0;
  if (param_2 != 0) {
    do {
      uVar1 = (uint)*param_1;
      uVar1 = (-uVar1 & uVar1) - 1;
      uVar1 = uVar1 - (uVar1 >> 1 & 0x55555555);
      uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
      uVar2 = (uint)((ulonglong)*param_1 >> 0x20);
      uVar2 = (-uVar2 & uVar2) - 1;
      uVar2 = uVar2 - (uVar2 >> 1 & 0x55555555);
      uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
      uVar1 = ((uVar1 >> 4) + uVar1 & 0xf0f0f0f) * 0x1010101 >> 0x18;
      if (0x1f < uVar1) {
        uVar1 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f) * 0x1010101 >> 0x18) + 0x20;
      }
      iVar3 = iVar3 + uVar1;
      if (uVar1 != 0x40) {
        return iVar3;
      }
      uVar4 = uVar4 + 1;
      param_1 = param_1 + 1;
    } while (uVar4 < param_2);
  }
  return iVar3;
}



// FUNCTION 143dfa480 FUN_143dfa480 body=28 status=ok
// SIG undefined FUN_143dfa480(void)

ulonglong FUN_143dfa480(longlong *param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      if (*param_1 != 0) {
        return uVar2 & 0xffffffffffffff00;
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
      param_1 = param_1 + 1;
    } while (uVar1 < param_2);
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}



// FUNCTION 143dfa4a0 FUN_143dfa4a0 body=1570 status=ok
// SIG undefined FUN_143dfa4a0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_143dfa4a0(int *param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4,uint param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  int *piVar20;
  uint *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined4 *puVar24;
  int iVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined4 uVar28;
  longlong lVar29;
  longlong lVar30;
  uint *puVar31;
  longlong lVar32;
  uint uVar33;
  ulonglong uVar34;
  uint uVar35;
  uint uVar36;
  longlong lVar37;
  uint local_f8 [20];
  uint *local_a8;
  longlong local_a0;
  uint local_98 [22];
  
  uVar23 = (ulonglong)param_5;
  iVar25 = param_5 - 1;
  uVar35 = param_5;
  if (param_1[iVar25] == 0) {
    lVar17 = (longlong)(int)param_5;
    piVar20 = param_1 + lVar17 + -1;
    do {
      if (lVar17 < 1) break;
      piVar20 = piVar20 + -1;
      uVar35 = uVar35 - 1;
      lVar17 = lVar17 + -1;
    } while (*piVar20 == 0);
  }
  uVar36 = param_5;
  if (param_2[iVar25] == 0) {
    lVar17 = (longlong)(int)param_5;
    puVar21 = param_2 + lVar17 + -1;
    do {
      if (lVar17 < 1) break;
      puVar21 = puVar21 + -1;
      uVar36 = uVar36 - 1;
      lVar17 = lVar17 + -1;
    } while (*puVar21 == 0);
  }
  if (uVar36 != 0) {
    if ((int)uVar35 < (int)uVar36) {
      if (-1 < iVar25) {
        for (uVar22 = (ulonglong)param_5; uVar22 != 0; uVar22 = uVar22 - 1) {
          *param_3 = 0;
          param_3 = param_3 + 1;
        }
      }
      if ((param_4 != (undefined4 *)0x0) && (0 < (int)param_5)) {
        lVar17 = (longlong)param_4 - (longlong)param_1;
        do {
          *(int *)(lVar17 + (longlong)param_1) = *param_1;
          param_1 = param_1 + 1;
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
        return;
      }
    }
    else if (uVar36 == 1) {
      uVar23 = 0;
      uVar28 = 0;
      lVar17 = (longlong)(int)(uVar35 - 1);
      if (-1 < (int)(uVar35 - 1)) {
        uVar36 = *param_2;
        puVar24 = param_3 + lVar17;
        do {
          uVar22 = (ulonglong)*(uint *)(((longlong)param_1 - (longlong)param_3) + (longlong)puVar24)
                   + (uVar23 << 0x20);
          uVar23 = uVar22 % (ulonglong)uVar36;
          uVar28 = (undefined4)uVar23;
          lVar17 = lVar17 + -1;
          *puVar24 = (int)(uVar22 / uVar36);
          puVar24 = puVar24 + -1;
        } while (-1 < lVar17);
      }
      if (-1 < (int)((param_5 - uVar35) - 1)) {
        puVar24 = param_3 + (int)uVar35;
        for (uVar23 = (ulonglong)(param_5 - uVar35); uVar23 != 0; uVar23 = uVar23 - 1) {
          *puVar24 = 0;
          puVar24 = puVar24 + 1;
        }
      }
      if (param_4 != (undefined4 *)0x0) {
        if (-1 < (int)(param_5 - 2)) {
          puVar24 = param_4;
          for (uVar23 = (ulonglong)(param_5 - 1); puVar24 = puVar24 + 1, uVar23 != 0;
              uVar23 = uVar23 - 1) {
            *puVar24 = 0;
          }
        }
        *param_4 = uVar28;
      }
    }
    else {
      lVar17 = (longlong)(int)(uVar36 - 1);
      puVar21 = param_2 + lVar17;
      uVar19 = param_2[lVar17] | param_2[lVar17] >> 1;
      uVar19 = uVar19 | uVar19 >> 2;
      uVar19 = uVar19 | uVar19 >> 4;
      uVar19 = uVar19 | uVar19 >> 8;
      uVar19 = uVar19 >> 0x10 | uVar19;
      uVar19 = uVar19 - (uVar19 >> 1 & 0x55555555);
      uVar19 = (uVar19 >> 2 & 0x33333333) + (uVar19 & 0x33333333);
      uVar19 = ((uVar19 >> 4) + uVar19 & 0xf0f0f0f) * 0x1010101;
      uVar33 = 0x20 - (uVar19 >> 0x18);
      bVar1 = (byte)uVar33;
      if (uVar33 == 0) {
        FUN_14370c700(local_f8,param_1,uVar35 * 4);
        local_f8[(int)uVar35] = 0;
        FUN_14370c700(local_98,param_2,uVar36 * 4);
      }
      else {
        lVar37 = (longlong)(int)(uVar35 - 1);
        local_f8[(int)uVar35] = (uint)param_1[lVar37] >> ((byte)(uVar19 >> 0x18) & 0x1f);
        piVar20 = param_1 + lVar37;
        if (0 < lVar37) {
          do {
            puVar31 = (uint *)(piVar20 + -1);
            iVar25 = *piVar20;
            piVar20 = piVar20 + -1;
            lVar37 = lVar37 + -1;
            *(uint *)((longlong)local_f8 + (4U - (longlong)param_1) + (longlong)piVar20) =
                 *puVar31 >> (-bVar1 & 0x1f) | iVar25 << (bVar1 & 0x1f);
          } while (0 < lVar37);
        }
        local_f8[0] = *param_1 << (bVar1 & 0x1f);
        if (0 < lVar17) {
          lVar37 = lVar17;
          do {
            puVar31 = puVar21 + -1;
            uVar19 = *puVar21;
            puVar21 = puVar21 + -1;
            lVar37 = lVar37 + -1;
            *(uint *)((longlong)local_98 + (4 - (longlong)param_2) + (longlong)puVar21) =
                 *puVar31 >> (0x20 - bVar1 & 0x1f) | uVar19 << (bVar1 & 0x1f);
          } while (0 < lVar37);
        }
        local_98[0] = *param_2 << (bVar1 & 0x1f);
      }
      uVar23 = 0;
      lVar37 = (longlong)(int)uVar36;
      if (-1 < (int)(uVar35 - uVar36)) {
        uVar34 = (ulonglong)(int)(uVar35 - uVar36);
        local_a8 = local_98 + (int)(uVar36 - 2);
        uVar22 = (ulonglong)local_98[lVar17];
        puVar21 = local_f8 + lVar37 + uVar34;
        lVar17 = uVar34 * -4 + 0x60;
        local_a0 = (longlong)param_3 + (lVar37 * -4 - (longlong)local_f8);
        do {
          uVar18 = CONCAT44(*puVar21,puVar21[-1]) / uVar22;
          uVar26 = CONCAT44(*puVar21,puVar21[-1]) % uVar22;
          lVar29 = uVar26 << 0x20;
          do {
            if ((uVar18 < 0x100000000) &&
               (*local_a8 * uVar18 < (ulonglong)puVar21[-2] + lVar29 ||
                *local_a8 * uVar18 - ((ulonglong)puVar21[-2] + lVar29) == 0)) break;
            uVar18 = uVar18 - 1;
            uVar26 = uVar26 + uVar22;
            lVar29 = lVar29 + (uVar22 << 0x20);
          } while (uVar26 < 0x100000000);
          lVar29 = (longlong)(int)uVar36;
          uVar26 = uVar23;
          if (0 < (int)uVar36) {
            puVar31 = puVar21 + -lVar37;
            lVar32 = lVar29;
            do {
              uVar27 = *(uint *)((longlong)puVar31 + lVar17) * uVar18;
              lVar30 = ((ulonglong)*puVar31 - (uVar27 & 0xffffffff)) - uVar26;
              *puVar31 = (uint)lVar30;
              uVar26 = (uVar27 >> 0x20) - (lVar30 >> 0x20);
              lVar32 = lVar32 + -1;
              puVar31 = puVar31 + 1;
            } while (lVar32 != 0);
          }
          lVar32 = local_a0;
          uVar19 = *puVar21;
          *puVar21 = (uint)(uVar19 - uVar26);
          *(int *)(lVar32 + (longlong)puVar21) = (int)uVar18;
          if ((longlong)(uVar19 - uVar26) < 0) {
            *(int *)(lVar32 + (longlong)puVar21) = (int)uVar18 + -1;
            uVar18 = uVar23;
            if (0 < (int)uVar36) {
              puVar31 = puVar21 + -lVar37;
              do {
                lVar32 = uVar18 + *(uint *)(lVar17 + (longlong)puVar31) + (ulonglong)*puVar31;
                *puVar31 = (uint)lVar32;
                uVar18 = lVar32 >> 0x20;
                lVar29 = lVar29 + -1;
                puVar31 = puVar31 + 1;
              } while (lVar29 != 0);
            }
            *puVar21 = *puVar21 + (int)uVar18;
          }
          lVar17 = lVar17 + 4;
          puVar21 = puVar21 + -1;
          uVar19 = (int)uVar34 - 1;
          uVar34 = (ulonglong)uVar19;
        } while (-1 < (int)uVar19);
      }
      lVar17 = (longlong)(int)uVar36;
      iVar25 = (uVar36 - uVar35) + -2 + param_5;
      if (-1 < iVar25) {
        puVar24 = param_3 + ((int)uVar35 - lVar17) + 1;
        for (uVar22 = (ulonglong)(iVar25 + 1); uVar22 != 0; uVar22 = uVar22 - 1) {
          *puVar24 = 0;
          puVar24 = puVar24 + 1;
        }
      }
      if (param_4 != (undefined4 *)0x0) {
        if (uVar33 == 0) {
          if (0 < (int)uVar36) {
            _guard_xfg_dispatch_icall_nop(param_4,local_f8,(ulonglong)uVar36 << 2);
          }
        }
        else {
          uVar35 = 0;
          if ((0 < (int)uVar36) && (7 < uVar36)) {
            iVar25 = 0x20 - uVar33;
            uVar19 = uVar36 & 0x80000007;
            if ((int)uVar19 < 0) {
              uVar19 = (uVar19 - 1 | 0xfffffff8) + 1;
            }
            uVar22 = uVar23;
            do {
              iVar2 = local_f8[uVar22 + 2];
              iVar3 = local_f8[uVar22 + 3];
              iVar4 = local_f8[uVar22 + 4];
              lVar37 = uVar22 * 4 - (longlong)(local_f8 + 1);
              uVar35 = (int)uVar23 + 8;
              uVar23 = (ulonglong)uVar35;
              uVar5 = local_f8[uVar22 + 1];
              uVar6 = local_f8[uVar22 + 2];
              uVar7 = local_f8[uVar22 + 3];
              uVar8 = local_f8[uVar22 + 4];
              uVar9 = local_f8[uVar22 + 5];
              uVar10 = local_f8[uVar22 + 6];
              uVar11 = local_f8[uVar22 + 7];
              uVar34 = (ulonglong)uVar33;
              iVar12 = local_f8[uVar22 + 5];
              iVar13 = local_f8[uVar22 + 6];
              iVar14 = local_f8[uVar22 + 7];
              iVar15 = local_f8[uVar22 + 8];
              *(uint *)((longlong)param_4 + (longlong)local_f8 + lVar37 + 4U) =
                   local_f8[uVar22 + 1] << iVar25 | local_f8[uVar22] >> uVar34;
              *(uint *)((longlong)param_4 + (longlong)local_f8 + lVar37 + 8U) =
                   iVar2 << iVar25 | uVar5 >> uVar34;
              *(uint *)((longlong)param_4 + (longlong)local_f8 + lVar37 + 0xcU) =
                   iVar3 << iVar25 | uVar6 >> uVar34;
              *(uint *)((longlong)param_4 + (longlong)local_f8 + lVar37 + 0x10U) =
                   iVar4 << iVar25 | uVar7 >> uVar34;
              lVar37 = uVar22 * 4 - (longlong)(local_f8 + 1);
              uVar22 = uVar22 + 8;
              *(uint *)((longlong)param_4 + (longlong)local_f8 + lVar37 + 0x14U) =
                   uVar8 >> uVar34 | iVar12 << iVar25;
              *(uint *)((longlong)param_4 + (longlong)local_f8 + lVar37 + 0x18U) =
                   uVar9 >> uVar34 | iVar13 << iVar25;
              *(uint *)((longlong)param_4 + (longlong)local_f8 + lVar37 + 0x1cU) =
                   uVar10 >> uVar34 | iVar14 << iVar25;
              *(uint *)((longlong)param_4 + (longlong)local_f8 + lVar37 + 0x20U) =
                   uVar11 >> uVar34 | iVar15 << iVar25;
            } while ((longlong)uVar22 < (longlong)(int)(uVar36 - uVar19));
          }
          lVar37 = (longlong)(int)uVar35;
          if (lVar37 < lVar17) {
            do {
              uVar16 = lVar37 + 1;
              puVar31 = local_f8 + lVar37;
              puVar21 = param_4 + lVar37;
              lVar37 = lVar37 + 1;
              *puVar21 = *puVar31 >> (bVar1 & 0x1f) | local_f8[uVar16] << (0x20 - bVar1 & 0x1f);
            } while (lVar37 < lVar17);
          }
        }
        if (-1 < (int)((param_5 - uVar36) - 1)) {
          puVar24 = param_4 + lVar17;
          for (uVar23 = (ulonglong)(param_5 - uVar36); uVar23 != 0; uVar23 = uVar23 - 1) {
            *puVar24 = 0;
            puVar24 = puVar24 + 1;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 143dfaad0 FUN_143dfaad0 body=425 status=ok
// SIG undefined FUN_143dfaad0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dfaad0(ulonglong *param_1,ulonglong *param_2,undefined4 *param_3,uint param_4,
                  uint param_5,uint param_6)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  bool bVar18;
  bool bVar19;
  ulonglong local_b8 [4];
  ulonglong local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  undefined8 uStack_30;
  
  if (-1 < (int)(param_6 * 2 - 1)) {
    puVar14 = param_3;
    for (uVar9 = (ulonglong)(param_6 * 2); uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
  }
  uVar9 = 0;
  if (param_4 != 0) {
    do {
      bVar18 = false;
      uVar16 = *param_1;
      uVar10 = 0;
      local_b8[0] = _DAT_1467f06e0;
      local_b8[1] = uRam00000001467f06e8;
      uVar17 = (uint)uVar9;
      uVar13 = param_6 - uVar17;
      local_b8[2] = _DAT_1467f06e0;
      local_b8[3] = uRam00000001467f06e8;
      local_98 = _DAT_1467f06e0;
      uStack_90 = uRam00000001467f06e8;
      local_88 = _DAT_1467f06e0;
      uStack_80 = uRam00000001467f06e8;
      uVar6 = uVar13;
      if (param_5 < uVar13) {
        uVar6 = param_5;
      }
      local_78 = _DAT_1467f06e0;
      uStack_70 = uRam00000001467f06e8;
      uVar15 = 0;
      local_68 = _DAT_1467f06e0;
      uStack_60 = uRam00000001467f06e8;
      local_58 = _DAT_1467f06e0;
      uStack_50 = uRam00000001467f06e8;
      local_48 = _DAT_1467f06e0;
      uStack_40 = uRam00000001467f06e8;
      local_38 = _DAT_1467f06e0;
      uStack_30 = uRam00000001467f06e8;
      uVar12 = uVar10;
      puVar8 = param_2;
      if (uVar6 != 0) {
        do {
          auVar4._8_8_ = 0;
          auVar4._0_8_ = *puVar8;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar16;
          uVar10 = SUB168(auVar4 * auVar5,8);
          uVar7 = SUB168(auVar4 * auVar5,0);
          uVar2 = (ulonglong)bVar18;
          uVar3 = uVar7 + uVar12;
          bVar18 = CARRY8(uVar7,uVar12) || CARRY8(uVar3,uVar2);
          local_b8[uVar15 + uVar17] = uVar3 + uVar2;
          uVar15 = uVar15 + 1;
          uVar12 = uVar10;
          puVar8 = puVar8 + 1;
        } while (uVar15 < uVar6);
      }
      local_b8[uVar6 + uVar17] = uVar10 + bVar18;
      bVar19 = false;
      local_b8[uVar6 + uVar17 + 1] = (ulonglong)CARRY8(uVar10,(ulonglong)bVar18);
      if (uVar17 < param_6) {
        uVar16 = (ulonglong)uVar13;
        puVar8 = local_b8 + uVar9;
        plVar11 = (longlong *)(param_3 + uVar9 * 2);
        do {
          puVar1 = (ulonglong *)(((longlong)param_3 - (longlong)local_b8) + (longlong)puVar8);
          uVar9 = (ulonglong)bVar19;
          uVar10 = *puVar8 + *puVar1;
          bVar19 = CARRY8(*puVar8,*puVar1) || CARRY8(uVar10,uVar9);
          puVar8 = puVar8 + 1;
          *plVar11 = uVar10 + uVar9;
          uVar16 = uVar16 - 1;
          plVar11 = plVar11 + 1;
        } while (uVar16 != 0);
      }
      uVar9 = (ulonglong)(uVar17 + 1);
      param_1 = param_1 + 1;
    } while (uVar17 + 1 < param_4);
  }
  return;
}



// FUNCTION 143dfac80 setAdd body=46 status=ok
// SIG undefined setAdd(void)

void hkInt256::setAdd(longlong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  *param_1 = uVar1 + *param_3;
  uVar3 = param_2[1];
  uVar4 = (ulonglong)CARRY8(uVar1,uVar2);
  uVar1 = param_3[1];
  uVar5 = uVar3 + param_3[1];
  param_1[1] = uVar5 + uVar4;
  uVar2 = param_2[2];
  uVar3 = (ulonglong)(CARRY8(uVar3,uVar1) || CARRY8(uVar5,uVar4));
  uVar1 = param_3[2];
  uVar4 = uVar2 + param_3[2];
  param_1[2] = uVar4 + uVar3;
  param_1[3] = param_2[3] + param_3[3] + (ulonglong)(CARRY8(uVar2,uVar1) || CARRY8(uVar4,uVar3));
  return;
}



// FUNCTION 143dfacb0 FUN_143dfacb0 body=439 status=ok
// SIG undefined FUN_143dfacb0(void)

void FUN_143dfacb0(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  ulonglong uVar8;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  ulonglong uStack_30;
  
  uVar5 = *param_2;
  uVar8 = param_2[1];
  if (uVar5 != 0 || uVar8 != 0) {
    uVar4 = *param_3;
    uVar6 = param_3[1];
    if (uVar4 == 0 && uVar6 == 0) {
      uVar5 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar5;
    }
    else {
      uVar2 = FUN_143dfa3b0(param_2,2);
      uVar3 = FUN_143dfa3b0(param_3,2);
      if ((int)uVar2 < (int)uVar3) {
        uVar3 = uVar2;
      }
      bVar7 = (byte)uVar2 & 0x3f;
      uVar5 = uVar5 >> bVar7 | uVar8 << 0x40 - bVar7;
      uVar8 = uVar8 >> ((byte)uVar2 & 0x3f);
      bVar7 = (byte)uVar3;
      local_68 = uVar4 >> (bVar7 & 0x3f) | uVar6 << 0x40 - (bVar7 & 0x3f);
      uStack_60 = uVar6 >> (bVar7 & 0x3f);
      do {
        uVar6 = uStack_60;
        uVar4 = local_68;
        bVar1 = FUN_143dfa3b0(&local_68,2);
        uVar4 = uVar4 >> (bVar1 & 0x3f) | uVar6 << 0x40 - (bVar1 & 0x3f);
        uVar6 = uVar6 >> (bVar1 & 0x3f);
        local_38 = uVar4 - uVar5;
        uStack_30 = (uVar6 - uVar8) - (ulonglong)(uVar4 < uVar5);
        local_58 = ~local_38 + 1;
        uStack_50 = ~uStack_30 + (ulonglong)(0xfffffffffffffffe < ~local_38);
        local_68 = local_38;
        uStack_60 = uStack_30;
        if ((longlong)uStack_30 < 0) {
          local_68._0_4_ = (undefined4)uVar4;
          local_68._4_4_ = (undefined4)(uVar4 >> 0x20);
          uStack_60._0_4_ = (undefined4)uVar6;
          uStack_60._4_4_ = (undefined4)(uVar6 >> 0x20);
          local_48 = (undefined4)local_68;
          uStack_44 = local_68._4_4_;
          uStack_40 = (undefined4)uStack_60;
          uStack_3c = uStack_60._4_4_;
          uVar5 = uVar4;
          uVar8 = uVar6;
          local_68 = local_58;
          uStack_60 = uStack_50;
        }
      } while (local_68 != 0 || uStack_60 != 0);
      if (uVar3 < 0x40) {
        param_1[1] = uVar8 << (bVar7 & 0x3f) | uVar5 >> 0x40 - (bVar7 & 0x3f);
        *param_1 = uVar5 << (bVar7 & 0x3f);
      }
      else {
        *param_1 = 0;
        param_1[1] = uVar5 << (bVar7 - 0x40 & 0x3f);
      }
    }
    return;
  }
  uVar5 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = uVar5;
  return;
}



// FUNCTION 143dfae70 FUN_143dfae70 body=250 status=ok
// SIG undefined FUN_143dfae70(void)

void FUN_143dfae70(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 local_28;
  longlong lStack_20;
  longlong local_18;
  longlong lStack_10;
  
  uVar1 = param_2[1];
  uVar2 = param_3[1];
  uVar16 = (longlong)uVar1 >> 0x3f;
  uVar19 = (*param_2 ^ uVar16) - uVar16;
  uVar14 = ((uVar1 ^ uVar16) - uVar16) - (ulonglong)((*param_2 ^ uVar16) < uVar16);
  uVar16 = (longlong)uVar2 >> 0x3f;
  uVar13 = (*param_3 ^ uVar16) - uVar16;
  uVar15 = ((uVar2 ^ uVar16) - uVar16) - (ulonglong)((*param_3 ^ uVar16) < uVar16);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar13;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar19;
  uVar11 = SUB168(auVar3 * auVar7,8);
  local_28 = SUB168(auVar3 * auVar7,0);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar15;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar19;
  uVar12 = SUB168(auVar4 * auVar8,8);
  uVar16 = SUB168(auVar4 * auVar8,0);
  uVar18 = uVar11 + uVar16;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar15;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar14;
  uVar19 = SUB168(auVar5 * auVar9,0);
  uVar16 = (ulonglong)CARRY8(uVar11,uVar16);
  uVar15 = uVar12 + uVar19;
  uVar17 = uVar15 + uVar16;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar13;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar14;
  uVar14 = SUB168(auVar6 * auVar10,8);
  uVar11 = SUB168(auVar6 * auVar10,0);
  lStack_20 = uVar11 + uVar18;
  uVar11 = (ulonglong)CARRY8(uVar11,uVar18);
  uVar13 = uVar14 + uVar17;
  local_18 = uVar13 + uVar11;
  lStack_10 = SUB168(auVar5 * auVar9,8) +
              (ulonglong)(CARRY8(uVar12,uVar19) || CARRY8(uVar15,uVar16)) +
              (ulonglong)(CARRY8(uVar14,uVar17) || CARRY8(uVar13,uVar11));
  if ((char)((byte)(uVar1 >> 0x38) ^ (byte)(uVar2 >> 0x38)) < '\0') {
    hkInt256::setNeg(param_1,&local_28);
  }
  else {
    *param_1 = local_28;
    param_1[1] = lStack_20;
    param_1[2] = local_18;
    param_1[3] = lStack_10;
  }
  return;
}



// FUNCTION 143dfaf70 FUN_143dfaf70 body=211 status=ok
// SIG undefined FUN_143dfaf70(void)

void FUN_143dfaf70(undefined8 *param_1,ulonglong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong local_res10;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uVar1 = (longlong)param_2[1] >> 0x3f;
  local_38 = (*param_2 ^ uVar1) - uVar1;
  local_30 = ((param_2[1] ^ uVar1) - uVar1) - (ulonglong)((*param_2 ^ uVar1) < uVar1);
  local_res10 = (param_3 ^ (longlong)param_3 >> 0x3f) - ((longlong)param_3 >> 0x3f);
  FUN_143dfaad0(&local_38,&local_res10,&local_28,2,1,4);
  if ((char)((byte)(param_2[1] >> 0x38) ^ (byte)(param_3 >> 0x38)) < '\0') {
    hkInt256::setNeg(param_1,&local_28);
    return;
  }
  *param_1 = local_28;
  param_1[1] = uStack_20;
  param_1[2] = local_18;
  param_1[3] = uStack_10;
  return;
}



// FUNCTION 143dfb050 setNeg body=59 status=ok
// SIG undefined setNeg(void)

void hkInt256::setNeg(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *param_2;
  *param_1 = ~uVar1 + 1;
  uVar2 = param_2[1];
  uVar3 = (ulonglong)(0xfffffffffffffffe < ~uVar1);
  param_1[1] = ~uVar2 + uVar3;
  uVar1 = param_2[2];
  uVar2 = (ulonglong)CARRY8(~uVar2,uVar3);
  param_1[2] = ~uVar1 + uVar2;
  param_1[3] = ~param_2[3] + (ulonglong)CARRY8(~uVar1,uVar2);
  return;
}



// FUNCTION 143dfb090 setUnsignedDiv body=188 status=ok
// SIG undefined setUnsignedDiv(void)

void hkInt128::setUnsignedDiv(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 local_38 [8];
  undefined8 local_18 [2];
  
  uVar5 = 0;
  uVar7 = 0;
  lVar6 = 0;
  do {
    uVar2 = uVar7 >> 1;
    uVar7 = uVar7 + 2;
    lVar1 = (ulonglong)uVar2 * 8;
    *(undefined4 *)((longlong)local_38 + lVar6 + 0x10) = *(undefined4 *)(lVar1 + param_2);
    *(int *)((longlong)local_38 + lVar6 + 0x14) =
         (int)((ulonglong)*(undefined8 *)(lVar1 + param_2) >> 0x20);
    *(undefined4 *)((longlong)local_38 + lVar6) = *(undefined4 *)(lVar1 + param_3);
    *(int *)((longlong)local_38 + lVar6 + 4) =
         (int)((ulonglong)*(undefined8 *)(lVar1 + param_3) >> 0x20);
    lVar6 = lVar6 + 8;
  } while ((int)uVar7 < 4);
  FUN_143dfa4a0(local_38 + 4,local_38,local_18,0,4);
  puVar4 = local_18;
  do {
    uVar3 = *puVar4;
    puVar4 = puVar4 + 1;
    uVar7 = uVar5 >> 1;
    uVar5 = uVar5 + 2;
    *(undefined8 *)(param_1 + (ulonglong)uVar7 * 8) = uVar3;
  } while ((int)uVar5 < 4);
  return;
}



// FUNCTION 143dfb150 FUN_143dfb150 body=50 status=ok
// SIG undefined FUN_143dfb150(void)

longlong * FUN_143dfb150(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)param_1 = *param_2;
  *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 1) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(int *)(param_1 + 2) = (int)(param_1[1] - *param_1 >> 2);
  FUN_143dfb380();
  return param_1;
}



// FUNCTION 143dfb190 FUN_143dfb190 body=271 status=ok
// SIG undefined FUN_143dfb190(void)

void FUN_143dfb190(longlong *param_1,int param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  iVar5 = (int)param_3;
  lVar7 = (longlong)param_2;
  lVar3 = *param_1;
  lVar4 = lVar7 * 4;
  iVar6 = *(int *)(lVar4 + lVar3);
  if (-1 < iVar6) {
    do {
      iVar2 = *(int *)(lVar3 + lVar4);
      lVar4 = (longlong)iVar2 * 4;
    } while (-1 < *(int *)(lVar3 + (longlong)iVar2 * 4));
    while (-1 < iVar6) {
      iVar6 = (int)lVar7;
      param_2 = *(int *)(*param_1 + (longlong)iVar6 * 4);
      lVar7 = (longlong)param_2;
      *(int *)(*param_1 + (longlong)iVar6 * 4) = iVar2;
      iVar6 = *(int *)(*param_1 + lVar7 * 4);
    }
  }
  lVar3 = *param_1;
  lVar4 = (longlong)iVar5 * 4;
  iVar6 = *(int *)(lVar4 + lVar3);
  if (-1 < iVar6) {
    do {
      iVar2 = *(int *)(lVar4 + lVar3);
      lVar4 = (longlong)iVar2 * 4;
    } while (-1 < *(int *)(lVar4 + lVar3));
    while (-1 < iVar6) {
      iVar6 = (int)param_3;
      iVar5 = *(int *)(*param_1 + (longlong)iVar6 * 4);
      param_3 = (longlong)iVar5;
      *(int *)(*param_1 + (longlong)iVar6 * 4) = iVar2;
      iVar6 = *(int *)(*param_1 + param_3 * 4);
    }
  }
  if (param_2 != iVar5) {
    lVar3 = *param_1;
    lVar4 = (longlong)param_2 * 4;
    if (param_2 < iVar5) {
      lVar7 = (longlong)iVar5 * 4;
      *(int *)(lVar4 + lVar3) = *(int *)(lVar7 + lVar3) + *(int *)(lVar4 + lVar3);
      *(int *)(lVar7 + *param_1) = param_2;
      return;
    }
    piVar1 = (int *)(lVar3 + (longlong)iVar5 * 4);
    *piVar1 = *piVar1 + *(int *)(lVar4 + lVar3);
    *(int *)(lVar4 + *param_1) = iVar5;
  }
  return;
}



// FUNCTION 143dfb2a0 FUN_143dfb2a0 body=223 status=ok
// SIG undefined FUN_143dfb2a0(void)

undefined4 * FUN_143dfb2a0(longlong *param_1,undefined4 *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  
  iVar3 = FUN_143dfb3c0();
  uVar4 = FUN_143703a50();
  uVar6 = *(uint *)((longlong)param_3 + 0xc) & 0x3fffffff;
  if ((int)uVar6 < iVar3) {
    iVar7 = uVar6 * 2;
    if (iVar3 < iVar7) {
      iVar3 = iVar7;
    }
    iVar3 = FUN_14370c310(uVar4,param_3,iVar3);
    if (iVar3 < 0) {
      *param_2 = 0x80040200;
      return param_2;
    }
  }
  iVar7 = 0;
  iVar3 = 0;
  if (0 < (int)param_1[2]) {
    lVar5 = 0;
    do {
      lVar2 = *param_1;
      iVar1 = *(int *)(lVar5 + lVar2);
      if (iVar1 < 0) {
        *(int *)(*param_3 + (longlong)(int)param_3[1] * 4) = -iVar1;
        *(int *)(param_3 + 1) = (int)param_3[1] + 1;
        *(int *)(lVar5 + *param_1) = iVar7;
        iVar7 = iVar7 + 1;
      }
      else {
        *(undefined4 *)(lVar5 + lVar2) = *(undefined4 *)(lVar2 + (longlong)iVar1 * 4);
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 4;
    } while (iVar3 < (int)param_1[2]);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143dfb380 FUN_143dfb380 body=54 status=ok
// SIG undefined FUN_143dfb380(void)

void FUN_143dfb380(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (0 < (int)param_1[2]) {
    lVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      *(undefined4 *)(lVar2 + *param_1) = 0xffffffff;
      lVar2 = lVar2 + 4;
    } while (iVar1 < (int)param_1[2]);
  }
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 1;
  return;
}



// FUNCTION 143dfb3c0 FUN_143dfb3c0 body=154 status=ok
// SIG undefined FUN_143dfb3c0(void)

ulonglong FUN_143dfb3c0(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (*(int *)((longlong)param_1 + 0x14) != 0) {
    return (ulonglong)*(uint *)(param_1 + 3);
  }
  uVar6 = (ulonglong)(int)param_1[2];
  uVar5 = 0;
  puVar4 = (uint *)*param_1;
  uVar3 = uVar6 * 4 + 3 >> 2;
  if (puVar4 + uVar6 < puVar4) {
    uVar3 = uVar5;
  }
  if (uVar3 != 0) {
    do {
      if ((-1 < (int)*puVar4) &&
         (uVar6 = (ulonglong)((int)uVar6 - 1), -1 < *(int *)(*param_1 + (longlong)(int)*puVar4 * 4))
         ) {
        uVar2 = (ulonglong)*puVar4;
        do {
          uVar1 = *(uint *)(*param_1 + (longlong)(int)uVar2 * 4);
          uVar2 = (ulonglong)(int)uVar1;
          *puVar4 = uVar1;
        } while (-1 < *(int *)(*param_1 + uVar2 * 4));
      }
      puVar4 = puVar4 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar3);
  }
  *(undefined4 *)((longlong)param_1 + 0x14) = 1;
  *(int *)(param_1 + 3) = (int)uVar6;
  return uVar6 & 0xffffffff;
}



// FUNCTION 143dfb460 FUN_143dfb460 body=363 status=ok
// SIG undefined FUN_143dfb460(void)

undefined4 *
FUN_143dfb460(undefined8 *param_1,undefined4 *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  int *piVar8;
  longlong local_28;
  undefined4 local_20;
  uint local_1c;
  
  iVar2 = *(int *)(param_1 + 2);
  uVar5 = FUN_143703a50();
  uVar7 = *(uint *)((longlong)param_4 + 0xc) & 0x3fffffff;
  if ((int)uVar7 < iVar2) {
    iVar4 = uVar7 * 2;
    iVar3 = iVar2;
    if (iVar2 < iVar4) {
      iVar3 = iVar4;
    }
    iVar3 = FUN_14370c310(uVar5,param_4,iVar3,4);
    if (iVar3 < 0) {
      *param_2 = 0x80040200;
      return param_2;
    }
  }
  *(int *)(param_4 + 1) = iVar2;
  iVar3 = 0;
  lVar6 = 0;
  iVar2 = (int)param_3[1];
  if (iVar2 < 1) {
    *param_2 = 0;
  }
  else {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0x80000000;
    if ((iVar2 < 1) || (iVar4 = FUN_14370c310(&PTR_vftable_1467f0638,&local_28,iVar2,4), -1 < iVar4)
       ) {
      iVar4 = iVar3;
      if (0 < iVar2) {
        do {
          *(int *)(local_28 + lVar6 * 4) = iVar4;
          lVar1 = lVar6 * 4;
          lVar6 = lVar6 + 1;
          iVar4 = iVar4 + *(int *)(*param_3 + lVar1);
        } while (lVar6 < iVar2);
      }
      lVar6 = *param_4;
      piVar8 = (int *)*param_1;
      if (0 < *(int *)(param_1 + 2)) {
        do {
          iVar2 = *piVar8;
          piVar8 = piVar8 + 1;
          iVar4 = *(int *)(local_28 + (longlong)iVar2 * 4);
          *(int *)(local_28 + (longlong)iVar2 * 4) = iVar4 + 1;
          *(int *)(lVar6 + (longlong)iVar4 * 4) = iVar3;
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_1 + 2));
      }
      *param_2 = 0;
    }
    else {
      *param_2 = 0x80040200;
    }
    local_20 = 0;
    if (-1 < (int)local_1c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_28,4,local_1c & 0x3fffffff);
    }
  }
  return param_2;
}



// FUNCTION 143dfb5d0 FUN_143dfb5d0 body=281 status=ok
// SIG undefined FUN_143dfb5d0(void)

void FUN_143dfb5d0(longlong param_1,uint param_2,int param_3,longlong *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  undefined4 local_res10;
  
  uVar8 = (ulonglong)(int)param_2;
  uVar9 = uVar8;
  local_res10 = param_2;
  do {
    uVar6 = (ulonglong)param_3;
    uVar11 = uVar9 & 0xffffffff;
    lVar13 = (longlong)*(int *)(param_1 + ((longlong)(param_3 + (int)uVar9) >> 1) * 4);
    iVar12 = param_3;
    do {
      lVar5 = *param_4;
      fVar2 = *(float *)(lVar5 + lVar13 * 8);
      while( true ) {
        lVar7 = (longlong)*(int *)(param_1 + uVar8 * 4);
        fVar3 = *(float *)(lVar5 + lVar7 * 8);
        uVar10 = (uint)uVar11;
        if ((fVar2 <= fVar3) &&
           ((fVar3 != fVar2 ||
            (fVar3 = *(float *)(lVar5 + 4 + lVar13 * 8), pfVar1 = (float *)(lVar5 + 4 + lVar7 * 8),
            fVar3 < *pfVar1 || fVar3 == *pfVar1)))) break;
        uVar11 = (ulonglong)(uVar10 + 1);
        uVar8 = uVar8 + 1;
      }
      lVar5 = *param_4;
      fVar2 = *(float *)(lVar5 + lVar13 * 8);
      while( true ) {
        lVar7 = (longlong)*(int *)(param_1 + uVar6 * 4);
        fVar3 = *(float *)(lVar5 + lVar7 * 8);
        if ((fVar3 <= fVar2) &&
           ((fVar2 != fVar3 ||
            (fVar3 = *(float *)(lVar5 + 4 + lVar7 * 8), pfVar1 = (float *)(lVar5 + 4 + lVar13 * 8),
            fVar3 < *pfVar1 || fVar3 == *pfVar1)))) break;
        iVar12 = iVar12 + -1;
        uVar6 = uVar6 - 1;
      }
      if ((longlong)uVar6 < (longlong)uVar8) break;
      if (uVar6 != uVar8) {
        uVar4 = *(undefined4 *)(param_1 + uVar6 * 4);
        *(undefined4 *)(param_1 + uVar6 * 4) = *(undefined4 *)(param_1 + uVar8 * 4);
        *(undefined4 *)(param_1 + uVar8 * 4) = uVar4;
      }
      iVar12 = iVar12 + -1;
      uVar6 = uVar6 - 1;
      uVar10 = uVar10 + 1;
      uVar11 = (ulonglong)uVar10;
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 <= (longlong)uVar6);
    if ((int)local_res10 < iVar12) {
      FUN_143dfb5d0(param_1,local_res10,iVar12,param_4);
    }
    if (param_3 <= (int)uVar10) {
      return;
    }
    uVar9 = (ulonglong)uVar10;
    local_res10 = uVar10;
  } while( true );
}



// FUNCTION 143dfb6f0 FUN_143dfb6f0 body=2908 status=ok
// SIG undefined FUN_143dfb6f0(void)

undefined8 FUN_143dfb6f0(longlong *param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  LPVOID pvVar7;
  float *pfVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float *pfVar13;
  undefined8 uVar14;
  float *pfVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  int *piVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  float local_res18;
  float fStackX_1c;
  float local_a8;
  float fStack_a4;
  
  uVar6 = *(uint *)(param_1 + 1);
  lVar25 = (longlong)(int)uVar6;
  pvVar7 = TlsGetValue(DAT_146b7bf70);
  if (pvVar7 == (LPVOID)0x0) {
    pvVar7 = DAT_146b7bf68;
  }
  uVar26 = uVar6 * 8 + 0x7f & 0xffffff80;
  pfVar8 = *(float **)((longlong)pvVar7 + 0x18);
  if ((*(int *)((longlong)pvVar7 + 0x10) < (int)uVar26) ||
     (*(ulonglong *)((longlong)pvVar7 + 0x20) <
      (ulonglong)((longlong)(int)uVar26 + (longlong)pfVar8))) {
    pfVar8 = (float *)FUN_1437138c0(pvVar7);
  }
  else {
    *(longlong *)((longlong)pvVar7 + 0x18) = (longlong)(int)uVar26 + (longlong)pfVar8;
  }
  pvVar7 = TlsGetValue(DAT_146b7bf70);
  if (pvVar7 == (LPVOID)0x0) {
    pvVar7 = DAT_146b7bf68;
  }
  uVar27 = uVar6 * 4 + 0x7f & 0xffffff80;
  piVar9 = *(int **)((longlong)pvVar7 + 0x18);
  if ((*(int *)((longlong)pvVar7 + 0x10) < (int)uVar27) ||
     (*(ulonglong *)((longlong)pvVar7 + 0x20) <
      (ulonglong)((longlong)(int)uVar27 + (longlong)piVar9))) {
    piVar9 = (int *)FUN_1437138c0();
  }
  else {
    *(longlong *)((longlong)pvVar7 + 0x18) = (longlong)(int)uVar27 + (longlong)piVar9;
  }
  if ((pfVar8 == (float *)0x0) || (piVar9 == (int *)0x0)) {
    pvVar7 = TlsGetValue(DAT_146b7bf70);
    if (pvVar7 == (LPVOID)0x0) {
      pvVar7 = DAT_146b7bf68;
    }
    if (((*(int *)((longlong)pvVar7 + 0x10) < (int)uVar27) ||
        ((longlong)(int)uVar27 + (longlong)piVar9 != *(longlong *)((longlong)pvVar7 + 0x18))) ||
       (*(int **)((longlong)pvVar7 + 0x28) == piVar9)) {
      FUN_143713ff0(pvVar7,piVar9);
    }
    else {
      *(int **)((longlong)pvVar7 + 0x18) = piVar9;
    }
    pvVar7 = TlsGetValue(DAT_146b7bf70);
    if (pvVar7 == (LPVOID)0x0) {
      pvVar7 = DAT_146b7bf68;
    }
    if (((*(int *)((longlong)pvVar7 + 0x10) < (int)uVar26) ||
        ((longlong)(int)uVar26 + (longlong)pfVar8 != *(longlong *)((longlong)pvVar7 + 0x18))) ||
       (*(float **)((longlong)pvVar7 + 0x28) == pfVar8)) {
      FUN_143713ff0(pvVar7,pfVar8);
      uVar14 = 0x80040200;
    }
    else {
      *(float **)((longlong)pvVar7 + 0x18) = pfVar8;
      uVar14 = 0x80040200;
    }
  }
  else {
    iVar16 = 0;
    if ((0 < (int)uVar6) && (iVar16 = 0, 7 < uVar6)) {
      uVar26 = uVar6 & 0x80000007;
      if ((int)uVar26 < 0) {
        uVar26 = (uVar26 - 1 | 0xfffffff8) + 1;
      }
      piVar20 = piVar9;
      iVar17 = 0;
      do {
        iVar16 = iVar17 + 8;
        *piVar20 = iVar17;
        piVar20[1] = iVar17 + 1;
        piVar20[2] = iVar17 + 2;
        piVar20[3] = iVar17 + 3;
        piVar20[4] = iVar17 + 4;
        piVar20[5] = iVar17 + 5;
        piVar20[6] = iVar17 + 6;
        piVar20[7] = iVar17 + 7;
        piVar20 = piVar20 + 8;
        iVar17 = iVar16;
      } while (iVar16 < (int)(uVar6 - uVar26));
    }
    for (lVar10 = (longlong)iVar16; lVar10 < lVar25; lVar10 = lVar10 + 1) {
      piVar9[lVar10] = iVar16;
      iVar16 = iVar16 + 1;
    }
    if (1 < (int)uVar6) {
      FUN_143dfb5d0(piVar9,0,uVar6 - 1,param_1);
    }
    iVar16 = 0;
    iVar17 = 1;
    *(undefined8 *)pfVar8 = *(undefined8 *)(*param_1 + (longlong)*piVar9 * 8);
    if (1 < lVar25) {
      lVar10 = 1;
      if (4 < lVar25) {
        lVar21 = 0;
        piVar20 = piVar9 + 3;
        lVar24 = (lVar25 - 5U >> 2) + 1;
        lVar10 = lVar24 * 4 + 1;
        pfVar13 = pfVar8;
        do {
          lVar11 = (longlong)piVar20[-2];
          lVar12 = *param_1;
          if ((*(float *)(lVar12 + lVar11 * 8) != *pfVar13) ||
             (*(float *)(lVar12 + 4 + lVar11 * 8) != pfVar13[1])) {
            iVar16 = iVar16 + 1;
            lVar21 = lVar21 + 1;
            *(undefined8 *)(pfVar8 + lVar21 * 2) = *(undefined8 *)(lVar12 + lVar11 * 8);
            pfVar13 = pfVar8 + lVar21 * 2;
            piVar9[lVar21] = piVar20[-2];
          }
          lVar11 = (longlong)piVar20[-1];
          lVar12 = *param_1;
          if ((*(float *)(lVar12 + lVar11 * 8) != *pfVar13) ||
             (*(float *)(lVar12 + 4 + lVar11 * 8) != pfVar13[1])) {
            iVar16 = iVar16 + 1;
            lVar21 = lVar21 + 1;
            *(undefined8 *)(pfVar8 + lVar21 * 2) = *(undefined8 *)(lVar12 + lVar11 * 8);
            pfVar13 = pfVar8 + lVar21 * 2;
            piVar9[lVar21] = piVar20[-1];
          }
          lVar11 = (longlong)*piVar20;
          lVar12 = *param_1;
          if ((*(float *)(lVar12 + lVar11 * 8) != *pfVar13) ||
             (*(float *)(lVar12 + 4 + lVar11 * 8) != pfVar13[1])) {
            iVar16 = iVar16 + 1;
            lVar21 = lVar21 + 1;
            *(undefined8 *)(pfVar8 + lVar21 * 2) = *(undefined8 *)(lVar12 + lVar11 * 8);
            pfVar13 = pfVar8 + lVar21 * 2;
            piVar9[lVar21] = *piVar20;
          }
          lVar11 = (longlong)piVar20[1];
          lVar12 = *param_1;
          if ((*(float *)(lVar12 + lVar11 * 8) != *pfVar13) ||
             (*(float *)(lVar12 + 4 + lVar11 * 8) != pfVar13[1])) {
            iVar16 = iVar16 + 1;
            lVar21 = lVar21 + 1;
            *(undefined8 *)(pfVar8 + lVar21 * 2) = *(undefined8 *)(lVar12 + lVar11 * 8);
            pfVar13 = pfVar8 + lVar21 * 2;
            piVar9[lVar21] = piVar20[1];
          }
          piVar20 = piVar20 + 4;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
      }
      if (lVar10 < lVar25) {
        lVar21 = (longlong)iVar16;
        do {
          lVar12 = (longlong)piVar9[lVar10];
          lVar24 = *param_1;
          if ((*(float *)(lVar24 + lVar12 * 8) != pfVar8[lVar21 * 2]) ||
             (*(float *)(lVar24 + 4 + lVar12 * 8) != pfVar8[lVar21 * 2 + 1])) {
            iVar16 = iVar16 + 1;
            lVar21 = lVar21 + 1;
            *(undefined8 *)(pfVar8 + lVar21 * 2) = *(undefined8 *)(lVar24 + lVar12 * 8);
            piVar9[lVar21] = piVar9[lVar10];
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < lVar25);
      }
    }
    uVar26 = iVar16 + 1;
    if (uVar26 == 0) {
      pfVar13 = (float *)0x0;
    }
    else {
      pvVar7 = TlsGetValue(DAT_146b7bf70);
      if (pvVar7 == (LPVOID)0x0) {
        pvVar7 = DAT_146b7bf68;
      }
      uVar27 = uVar26 * 8 + 0x7f & 0xffffff80;
      pfVar13 = *(float **)((longlong)pvVar7 + 0x18);
      uVar18 = (longlong)(int)uVar27 + (longlong)pfVar13;
      if ((*(int *)((longlong)pvVar7 + 0x10) < (int)uVar27) ||
         (*(ulonglong *)((longlong)pvVar7 + 0x20) < uVar18)) {
        pfVar13 = (float *)FUN_1437138c0(pvVar7);
      }
      else {
        *(ulonglong *)((longlong)pvVar7 + 0x18) = uVar18;
      }
    }
    uVar27 = uVar26 | 0x80000000;
    if (pfVar13 == (float *)0x0) {
      pvVar7 = TlsGetValue(DAT_146b7bf70);
      if (pvVar7 == (LPVOID)0x0) {
        pvVar7 = DAT_146b7bf68;
      }
      uVar5 = uVar26 * 8 + 0x7f & 0xffffff80;
      if (((*(int *)((longlong)pvVar7 + 0x10) < (int)uVar5) ||
          ((longlong)(int)uVar5 != *(longlong *)((longlong)pvVar7 + 0x18))) ||
         (*(longlong *)((longlong)pvVar7 + 0x28) == 0)) {
        FUN_143713ff0(pvVar7,0);
      }
      else {
        *(undefined8 *)((longlong)pvVar7 + 0x18) = 0;
      }
      uVar14 = FUN_143703a50();
      if (-1 < (int)uVar27) {
        FUN_143702e10(uVar14,0,8,uVar26 & 0x3fffffff);
      }
      pvVar7 = TlsGetValue(DAT_146b7bf70);
      if (pvVar7 == (LPVOID)0x0) {
        pvVar7 = DAT_146b7bf68;
      }
      uVar26 = uVar6 * 4 + 0x7f & 0xffffff80;
      if (((*(int *)((longlong)pvVar7 + 0x10) < (int)uVar26) ||
          ((longlong)(int)uVar26 + (longlong)piVar9 != *(longlong *)((longlong)pvVar7 + 0x18))) ||
         (*(int **)((longlong)pvVar7 + 0x28) == piVar9)) {
        FUN_143713ff0(pvVar7,piVar9);
      }
      else {
        *(int **)((longlong)pvVar7 + 0x18) = piVar9;
      }
      pvVar7 = TlsGetValue(DAT_146b7bf70);
      if (pvVar7 == (LPVOID)0x0) {
        pvVar7 = DAT_146b7bf68;
      }
      uVar6 = uVar6 * 8 + 0x7f & 0xffffff80;
      if (((*(int *)((longlong)pvVar7 + 0x10) < (int)uVar6) ||
          ((longlong)(int)uVar6 + (longlong)pfVar8 != *(longlong *)((longlong)pvVar7 + 0x18))) ||
         (*(float **)((longlong)pvVar7 + 0x28) == pfVar8)) {
        FUN_143713ff0(pvVar7,pfVar8);
      }
      else {
        *(float **)((longlong)pvVar7 + 0x18) = pfVar8;
      }
      uVar14 = 0x80040200;
    }
    else {
      fVar1 = *pfVar8;
      uVar5 = 1;
      lVar25 = (longlong)(int)uVar26;
      if (1 < lVar25) {
        lVar10 = 1;
        if (4 < lVar25) {
          pfVar15 = pfVar8 + 6;
          do {
            if (fVar1 != pfVar15[-4]) goto LAB_143dfbc11;
            if (fVar1 != pfVar15[-2]) {
              uVar5 = uVar5 + 1;
              goto LAB_143dfbc11;
            }
            if (fVar1 != *pfVar15) {
              uVar5 = uVar5 + 2;
              goto LAB_143dfbc11;
            }
            if (fVar1 != pfVar15[2]) {
              uVar5 = uVar5 + 3;
              goto LAB_143dfbc11;
            }
            uVar5 = uVar5 + 4;
            lVar10 = lVar10 + 4;
            pfVar15 = pfVar15 + 8;
          } while (lVar10 < lVar25 + -3);
        }
        for (; (lVar10 < lVar25 && (fVar1 == pfVar8[lVar10 * 2])); lVar10 = lVar10 + 1) {
          uVar5 = uVar5 + 1;
        }
      }
LAB_143dfbc11:
      if (uVar5 == uVar26) {
        *(undefined4 *)(*param_2 + (longlong)(int)param_2[1] * 4) = 0;
        iVar17 = (int)param_2[1] + 1;
        *(int *)(param_2 + 1) = iVar17;
        if (pfVar8[1] != pfVar8[(longlong)iVar16 * 2 + 1]) {
          *(int *)(*param_2 + (longlong)iVar17 * 4) = iVar16;
          iVar16 = (int)param_2[1] + 1;
          *(int *)(param_2 + 1) = iVar16;
          *(undefined4 *)(*param_2 + (longlong)iVar16 * 4) = 0;
          *(int *)(param_2 + 1) = (int)param_2[1] + 1;
        }
        pvVar7 = TlsGetValue(DAT_146b7bf70);
        if (pvVar7 == (LPVOID)0x0) {
          pvVar7 = DAT_146b7bf68;
        }
        uVar5 = uVar26 * 8 + 0x7f & 0xffffff80;
        if (((*(int *)((longlong)pvVar7 + 0x10) < (int)uVar5) ||
            ((longlong)(int)uVar5 + (longlong)pfVar13 != *(longlong *)((longlong)pvVar7 + 0x18))) ||
           (*(float **)((longlong)pvVar7 + 0x28) == pfVar13)) {
          FUN_143713ff0(pvVar7,pfVar13);
        }
        else {
          *(float **)((longlong)pvVar7 + 0x18) = pfVar13;
        }
        uVar14 = FUN_143703a50();
      }
      else {
        lVar10 = (longlong)iVar16;
        iVar23 = iVar16 + -1;
        fVar1 = pfVar8[lVar10 * 2];
        lVar25 = (longlong)iVar23;
        if (-1 < iVar23) {
          if (3 < lVar25 + 1) {
            pfVar15 = pfVar8 + (lVar25 + -2) * 2;
            do {
              if (fVar1 != pfVar15[4]) goto LAB_143dfbd78;
              if (fVar1 != pfVar15[2]) {
                iVar23 = iVar23 + -1;
                goto LAB_143dfbd78;
              }
              if (fVar1 != *pfVar15) {
                iVar23 = iVar23 + -2;
                goto LAB_143dfbd78;
              }
              if (fVar1 != pfVar15[-2]) {
                iVar23 = iVar23 + -3;
                goto LAB_143dfbd78;
              }
              iVar23 = iVar23 + -4;
              lVar25 = lVar25 + -4;
              pfVar15 = pfVar15 + -8;
            } while (2 < lVar25);
          }
          for (; (-1 < lVar25 && (fVar1 == pfVar8[lVar25 * 2])); lVar25 = lVar25 + -1) {
            iVar23 = iVar23 + -1;
          }
        }
LAB_143dfbd78:
        fVar1 = *pfVar8;
        iVar22 = 1;
        fVar2 = pfVar8[1];
        lVar25 = (longlong)(iVar23 + 1);
        lVar21 = (longlong)(int)(uVar5 - 1);
        uVar14 = *(undefined8 *)(pfVar8 + lVar25 * 2);
        *(int *)(*param_2 + (longlong)(int)param_2[1] * 4) = *piVar9;
        *(int *)(param_2 + 1) = (int)param_2[1] + 1;
        *pfVar13 = fVar1;
        pfVar13[1] = fVar2;
        if (lVar21 <= lVar25) {
          local_a8 = (float)uVar14;
          pfVar15 = pfVar8 + lVar21 * 2;
          fStack_a4 = (float)((ulonglong)uVar14 >> 0x20);
          lVar24 = lVar21;
          do {
            fVar3 = *pfVar15;
            fVar4 = pfVar15[1];
            if (((fVar4 - fVar2) * (local_a8 - fVar1) - (fVar3 - fVar1) * (fStack_a4 - fVar2) < 0.0)
               || (lVar25 <= lVar24)) {
              if (1 < iVar22) {
                iVar19 = iVar22 + -2;
                do {
                  lVar12 = (longlong)iVar19;
                  if (0.0 < (pfVar13[(longlong)(iVar19 + 1) * 2] - pfVar13[lVar12 * 2]) *
                            (fVar4 - pfVar13[lVar12 * 2 + 1]) -
                            (pfVar13[(longlong)(iVar19 + 1) * 2 + 1] - pfVar13[lVar12 * 2 + 1]) *
                            (fVar3 - pfVar13[lVar12 * 2])) break;
                  *(int *)(param_2 + 1) = (int)param_2[1] + -1;
                  iVar22 = iVar22 + -1;
                  iVar19 = iVar19 + -1;
                } while (1 < iVar22);
              }
              *(int *)(*param_2 + (longlong)(int)param_2[1] * 4) = piVar9[lVar24];
              *(int *)(param_2 + 1) = (int)param_2[1] + 1;
              lVar12 = (longlong)iVar22;
              iVar22 = iVar22 + 1;
              pfVar13[lVar12 * 2] = fVar3;
              pfVar13[lVar12 * 2 + 1] = fVar4;
            }
            lVar24 = lVar24 + 1;
            pfVar15 = pfVar15 + 2;
          } while (lVar24 <= lVar25);
        }
        if (iVar16 != iVar23 + 1) {
          *(int *)(*param_2 + (longlong)(int)param_2[1] * 4) = piVar9[lVar10];
          *(int *)(param_2 + 1) = (int)param_2[1] + 1;
        }
        *(undefined8 *)pfVar13 = *(undefined8 *)(pfVar8 + lVar10 * 2);
        lVar25 = (longlong)iVar23;
        if (lVar21 <= lVar25) {
          local_res18 = (float)*(undefined8 *)(pfVar8 + lVar21 * 2);
          pfVar15 = pfVar8 + lVar25 * 2;
          local_a8 = (float)*(undefined8 *)(pfVar8 + lVar10 * 2);
          fStackX_1c = (float)((ulonglong)*(undefined8 *)(pfVar8 + lVar21 * 2) >> 0x20);
          fStack_a4 = (float)((ulonglong)*(undefined8 *)(pfVar8 + lVar10 * 2) >> 0x20);
          do {
            fVar1 = *pfVar15;
            fVar2 = pfVar15[1];
            if (((fVar2 - fStack_a4) * (local_res18 - local_a8) -
                 (fVar1 - local_a8) * (fStackX_1c - fStack_a4) < 0.0) || (lVar25 <= lVar21)) {
              if (1 < iVar17) {
                iVar16 = iVar17 + -2;
                do {
                  lVar10 = (longlong)iVar16;
                  if (0.0 < (pfVar13[(longlong)(iVar16 + 1) * 2] - pfVar13[lVar10 * 2]) *
                            (fVar2 - pfVar13[lVar10 * 2 + 1]) -
                            (pfVar13[(longlong)(iVar16 + 1) * 2 + 1] - pfVar13[lVar10 * 2 + 1]) *
                            (fVar1 - pfVar13[lVar10 * 2])) break;
                  *(int *)(param_2 + 1) = (int)param_2[1] + -1;
                  iVar17 = iVar17 + -1;
                  iVar16 = iVar16 + -1;
                } while (1 < iVar17);
              }
              *(int *)(*param_2 + (longlong)(int)param_2[1] * 4) = piVar9[lVar25];
              *(int *)(param_2 + 1) = (int)param_2[1] + 1;
              lVar10 = (longlong)iVar17;
              iVar17 = iVar17 + 1;
              pfVar13[lVar10 * 2] = fVar1;
              pfVar13[lVar10 * 2 + 1] = fVar2;
            }
            lVar25 = lVar25 + -1;
            pfVar15 = pfVar15 + -2;
          } while (lVar21 <= lVar25);
        }
        if (uVar5 - 1 != 0) {
          *(int *)(*param_2 + (longlong)(int)param_2[1] * 4) = *piVar9;
          *(int *)(param_2 + 1) = (int)param_2[1] + 1;
        }
        pvVar7 = TlsGetValue(DAT_146b7bf70);
        if (pvVar7 == (LPVOID)0x0) {
          pvVar7 = DAT_146b7bf68;
        }
        uVar26 = uVar26 * 8 + 0x7f & 0xffffff80;
        if (((*(int *)((longlong)pvVar7 + 0x10) < (int)uVar26) ||
            ((longlong)(int)uVar26 + (longlong)pfVar13 != *(longlong *)((longlong)pvVar7 + 0x18)))
           || (*(float **)((longlong)pvVar7 + 0x28) == pfVar13)) {
          FUN_143713ff0(pvVar7,pfVar13);
        }
        else {
          *(float **)((longlong)pvVar7 + 0x18) = pfVar13;
        }
        uVar14 = FUN_143703a50();
        uVar26 = uVar27;
      }
      if (-1 < (int)uVar27) {
        FUN_143702e10(uVar14,pfVar13,8,uVar26 & 0x3fffffff);
      }
      pvVar7 = TlsGetValue(DAT_146b7bf70);
      if (pvVar7 == (LPVOID)0x0) {
        pvVar7 = DAT_146b7bf68;
      }
      uVar26 = uVar6 * 4 + 0x7f & 0xffffff80;
      if (((*(int *)((longlong)pvVar7 + 0x10) < (int)uVar26) ||
          ((longlong)(int)uVar26 + (longlong)piVar9 != *(longlong *)((longlong)pvVar7 + 0x18))) ||
         (*(int **)((longlong)pvVar7 + 0x28) == piVar9)) {
        FUN_143713ff0(pvVar7,piVar9);
      }
      else {
        *(int **)((longlong)pvVar7 + 0x18) = piVar9;
      }
      pvVar7 = TlsGetValue(DAT_146b7bf70);
      if (pvVar7 == (LPVOID)0x0) {
        pvVar7 = DAT_146b7bf68;
      }
      uVar6 = uVar6 * 8 + 0x7f & 0xffffff80;
      if (((*(int *)((longlong)pvVar7 + 0x10) < (int)uVar6) ||
          ((longlong)(int)uVar6 + (longlong)pfVar8 != *(longlong *)((longlong)pvVar7 + 0x18))) ||
         (*(float **)((longlong)pvVar7 + 0x28) == pfVar8)) {
        FUN_143713ff0(pvVar7,pfVar8);
        uVar14 = 0;
      }
      else {
        *(float **)((longlong)pvVar7 + 0x18) = pfVar8;
        uVar14 = 0;
      }
    }
  }
  return uVar14;
}



// FUNCTION 143dfc250 FUN_143dfc250 body=40 status=ok
// SIG undefined FUN_143dfc250(void)

void FUN_143dfc250(undefined1 (*param_1) [16],undefined1 (*param_2) [16],int param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2 = *param_1;
  auVar3 = param_1[1];
  lVar1 = (longlong)param_3;
  if (0 < param_3) {
    do {
      auVar2 = minps(auVar2,*param_2);
      auVar3 = maxps(auVar3,*param_2);
      param_2 = param_2 + 1;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  param_1[1] = auVar3;
  *param_1 = auVar2;
  return;
}



// FUNCTION 143dfc280 FUN_143dfc280 body=83 status=ok
// SIG undefined FUN_143dfc280(void)

uint FUN_143dfc280(float *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar6._0_4_ = -(uint)(((uint)*param_1 & 0x7f800000) == 0x7f800000);
  auVar6._4_4_ = -(uint)(((uint)param_1[1] & 0x7f800000) == 0x7f800000);
  auVar6._8_4_ = -(uint)(((uint)param_1[2] & 0x7f800000) == 0x7f800000);
  auVar6._12_4_ = -(uint)(((uint)param_1[3] & 0x7f800000) == 0x7f800000);
  bVar4 = SUB161(auVar6 >> 0x47,0) & 1;
  uVar5 = (uint)(ushort)((ushort)bVar4 << 8 | (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                         (ushort)((byte)(auVar6._12_4_ >> 7) & 1) << 0xc |
                         (ushort)((byte)(auVar6._12_4_ >> 0xf) & 1) << 0xd |
                         (ushort)((byte)(auVar6._12_4_ >> 0x17) & 1) << 0xe |
                        (ushort)(byte)(auVar6._12_4_ >> 0x1f) << 0xf);
  if (((SUB161(auVar6 >> 7,0) & 1) == 0 && (SUB161(auVar6 >> 0x27,0) & 1) == 0) && bVar4 == 0) {
    auVar7._0_4_ = -(uint)(((uint)param_1[4] & 0x7f800000) == 0x7f800000);
    auVar7._4_4_ = -(uint)(((uint)param_1[5] & 0x7f800000) == 0x7f800000);
    auVar7._8_4_ = -(uint)(((uint)param_1[6] & 0x7f800000) == 0x7f800000);
    auVar7._12_4_ = -(uint)(((uint)param_1[7] & 0x7f800000) == 0x7f800000);
    uVar2 = (ushort)(SUB161(auVar7 >> 7,0) & 1);
    uVar3 = (ushort)(SUB161(auVar7 >> 0x27,0) & 1);
    bVar4 = SUB161(auVar7 >> 0x47,0) & 1;
    uVar1 = uVar2 | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 | uVar3 << 4 |
            (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 | (ushort)bVar4 << 8 |
            (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
            (ushort)((byte)(auVar7._12_4_ >> 7) & 1) << 0xc |
            (ushort)((byte)(auVar7._12_4_ >> 0xf) & 1) << 0xd |
            (ushort)((byte)(auVar7._12_4_ >> 0x17) & 1) << 0xe |
            (ushort)(byte)(auVar7._12_4_ >> 0x1f) << 0xf;
    uVar5 = (uint)uVar1;
    if ((uVar2 == 0 && uVar3 == 0) && bVar4 == 0) {
      auVar8._4_4_ = -(uint)(param_1[1] <= param_1[5]);
      auVar8._0_4_ = -(uint)(*param_1 <= param_1[4]);
      auVar8._8_4_ = -(uint)(param_1[2] <= param_1[6]);
      auVar8._12_4_ = -(uint)(param_1[3] <= param_1[7]);
      uVar5 = movmskps((uint)uVar1,auVar8);
      uVar5 = uVar5 & 7;
      if ((char)uVar5 == '\a') {
        return 1;
      }
    }
  }
  return uVar5 & 0xffffff00;
}



// FUNCTION 143dfc2e0 FUN_143dfc2e0 body=110 status=ok
// SIG undefined FUN_143dfc2e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_143dfc2e0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  puVar5 = (undefined4 *)FUN_143dfc4a0(param_2);
  uVar4 = DAT_1467f06ec;
  uVar3 = uRam00000001467f06e8;
  uVar2 = uRam00000001467f06e4;
  uVar1 = _DAT_1467f06e0;
  *puVar5 = _DAT_1467f06e0;
  puVar5[1] = uVar2;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  puVar5[4] = uVar1;
  puVar5[5] = uVar2;
  puVar5[6] = uVar3;
  puVar5[7] = uVar4;
  puVar5[1] = *(undefined4 *)(param_1 + 0x18);
  uVar6 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x18) == (*(uint *)(param_1 + 0x1c) & 0x3fffffff)) {
    FUN_14370c460(uVar6,param_1 + 0x10,8);
  }
  *(undefined4 **)(*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_1 + 0x18) * 8) = puVar5;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return puVar5;
}



// FUNCTION 143dfc350 FUN_143dfc350 body=107 status=ok
// SIG undefined FUN_143dfc350(void)

void FUN_143dfc350(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  if (*(char *)(param_1 + 0xc) != '\0') {
    plVar1 = *(longlong **)(param_1 + 0x10);
    plVar4 = plVar1;
    if (0 < (int)uVar2) {
      uVar3 = (ulonglong)uVar2;
      do {
        if (*plVar1 != 0) {
          *plVar4 = *plVar1;
          plVar4 = plVar4 + 1;
        }
        plVar1 = plVar1 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    *(undefined1 *)(param_1 + 0xc) = 0;
    uVar2 = (uint)((longlong)plVar4 - *(longlong *)(param_1 + 0x10) >> 3);
  }
  if (uVar2 != 0) {
    FUN_143dfc540(param_2,*(undefined8 *)(param_1 + 0x10),uVar2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 143dfc3c0 init body=56 status=ok
// SIG undefined init(void)

void hkBlockStream::init(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  FUN_143dfc2e0();
  param_1[0x1e] = param_3;
  return;
}



// FUNCTION 143dfc400 FUN_143dfc400 body=79 status=ok
// SIG undefined FUN_143dfc400(void)

longlong FUN_143dfc400(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)
           (*(longlong *)(param_1 + 0x10) + (longlong)(*(int *)(param_1 + 0x18) + -2) * 8);
  FUN_143dfc4f0(param_2,*(undefined8 *)
                         (*(longlong *)(param_1 + 0x10) +
                         (longlong)(*(int *)(param_1 + 0x18) + -1) * 8));
  *(undefined8 *)(lVar1 + 8) = 0;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  return lVar1;
}



// FUNCTION 143dfc450 FUN_143dfc450 body=50 status=ok
// SIG undefined FUN_143dfc450(void)

undefined8 * FUN_143dfc450(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 9) = 0;
  iVar1 = (**(code **)(*param_2 + 0x48))(param_2);
  iVar2 = 8;
  if (iVar1 < 8) {
    iVar2 = iVar1;
  }
  *(int *)((longlong)param_1 + 0x4c) = iVar2;
  return param_1;
}



// FUNCTION 143dfc490 thunk_FUN_143dfc630 body=5 status=ok
// SIG undefined thunk_FUN_143dfc630(void)

void thunk_FUN_143dfc630(undefined8 *param_1)

{
  if (*(int *)(param_1 + 9) != 0) {
    (**(code **)(*(longlong *)*param_1 + 0x20))((longlong *)*param_1,param_1 + 1);
    *(undefined4 *)(param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 143dfc4a0 FUN_143dfc4a0 body=70 status=ok
// SIG undefined FUN_143dfc4a0(void)

undefined8 FUN_143dfc4a0(undefined8 *param_1)

{
  int iVar1;
  
  if (0 < *(int *)(param_1 + 9)) {
    iVar1 = *(int *)(param_1 + 9) + -1;
    *(int *)(param_1 + 9) = iVar1;
    return param_1[(longlong)iVar1 + 1];
  }
  (**(code **)(*(longlong *)*param_1 + 0x18))((longlong *)*param_1,param_1 + 1,6);
  *(undefined4 *)(param_1 + 9) = 5;
  return param_1[6];
}



// FUNCTION 143dfc4f0 FUN_143dfc4f0 body=76 status=ok
// SIG undefined FUN_143dfc4f0(void)

void FUN_143dfc4f0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  
  param_1[(longlong)*(int *)(param_1 + 9) + 1] = param_2;
  *(int *)(param_1 + 9) = *(int *)(param_1 + 9) + 1;
  if (7 < *(int *)(param_1 + 9)) {
    iVar1 = *(int *)(param_1 + 9) + -6;
    (**(code **)(*(longlong *)*param_1 + 0x20))
              ((longlong *)*param_1,param_1 + (longlong)iVar1 + 1,6);
    *(int *)(param_1 + 9) = iVar1;
  }
  return;
}



// FUNCTION 143dfc540 FUN_143dfc540 body=231 status=ok
// SIG undefined FUN_143dfc540(void)

void FUN_143dfc540(undefined8 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_3 < 6) {
    iVar2 = *(int *)(param_1 + 9);
    if (7 < iVar2 + param_3) {
      iVar3 = iVar2;
      if (6 < iVar2) {
        iVar3 = 6;
      }
      (**(code **)(*(longlong *)*param_1 + 0x20))
                ((longlong *)*param_1,param_1 + (longlong)(iVar2 - iVar3) + 1);
      *(int *)(param_1 + 9) = iVar2 - iVar3;
    }
    uVar4 = 0;
    uVar5 = uVar4;
    if (0 < param_3) {
      do {
        lVar1 = uVar4 * 8;
        uVar4 = uVar4 + 1;
        param_1[(longlong)(*(int *)(param_1 + 9) + (int)uVar5) + 1] =
             *(undefined8 *)(param_2 + lVar1);
        uVar5 = (ulonglong)((int)uVar5 + 1);
      } while ((longlong)uVar4 < (longlong)param_3);
    }
    *(int *)(param_1 + 9) = *(int *)(param_1 + 9) + param_3;
    iVar2 = *(int *)((longlong)param_1 + 0x4c);
    if (iVar2 < *(int *)(param_1 + 9)) {
      (**(code **)(*(longlong *)*param_1 + 0x20))
                ((longlong *)*param_1,param_1 + (longlong)iVar2 + 1,*(int *)(param_1 + 9) - iVar2);
      *(undefined4 *)(param_1 + 9) = *(undefined4 *)((longlong)param_1 + 0x4c);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143dfc575. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x20))((longlong *)*param_1,param_2,param_3);
  return;
}



// FUNCTION 143dfc630 FUN_143dfc630 body=44 status=ok
// SIG undefined FUN_143dfc630(void)

void FUN_143dfc630(undefined8 *param_1)

{
  if (*(int *)(param_1 + 9) != 0) {
    (**(code **)(*(longlong *)*param_1 + 0x20))((longlong *)*param_1,param_1 + 1);
    *(undefined4 *)(param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 143dfc660 FUN_143dfc660 body=93 status=ok
// SIG undefined FUN_143dfc660(void)

void FUN_143dfc660(longlong *param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 2);
  if (uVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  puVar2 = *(ushort **)(*param_1 + 8);
  *param_1 = (longlong)puVar2;
  if (puVar2 != (ushort *)0x0) {
    uVar3 = uVar1;
    if ((int)(uint)*puVar2 < (int)uVar1) {
      uVar3 = (uint)*puVar2;
    }
    if (0 < (int)uVar3) {
      *(uint *)((longlong)param_1 + 0x14) = uVar3;
      *(uint *)(param_1 + 2) = uVar1 - uVar3;
      param_1[1] = (longlong)(puVar2 + 0x10);
      return;
    }
  }
  param_1[1] = 0;
  return;
}



// FUNCTION 143dfc6c0 FUN_143dfc6c0 body=79 status=ok
// SIG undefined FUN_143dfc6c0(void)

longlong FUN_143dfc6c0(longlong *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  
  lVar4 = FUN_143dfc2e0(*param_1,param_1[1]);
  puVar3 = (uint *)param_1[2];
  uVar1 = *(ushort *)(param_1 + 3);
  uVar2 = *(uint *)((longlong)param_1 + 0x1c);
  *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + uVar2;
  *(longlong *)(puVar3 + 2) = lVar4;
  param_1[2] = lVar4;
  param_1[3] = 0;
  *puVar3 = (uint)uVar1 << 0x10 | uVar2 & 0xffff;
  return lVar4 + 0x20;
}



// FUNCTION 143dfc710 FUN_143dfc710 body=92 status=ok
// SIG undefined FUN_143dfc710(void)

void FUN_143dfc710(longlong *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  
  uVar2 = *(uint *)((longlong)param_1 + 0x1c);
  if ((uVar2 == 0) && (1 < *(int *)(*param_1 + 0x18))) {
    FUN_143dfc400(*param_1,param_1[1]);
    param_1[2] = 0;
    return;
  }
  puVar3 = (uint *)param_1[2];
  uVar1 = *(ushort *)(param_1 + 3);
  puVar3[2] = 0;
  puVar3[3] = 0;
  lVar4 = *param_1;
  *puVar3 = (uint)uVar1 << 0x10 | uVar2 & 0xffff;
  *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + uVar2;
  param_1[2] = 0;
  return;
}



// FUNCTION 143dfc770 FUN_143dfc770 body=10 status=ok
// SIG undefined FUN_143dfc770(void)

int FUN_143dfc770(longlong *param_1)

{
  return *(int *)(*param_1 + 8) + *(int *)((longlong)param_1 + 0x1c);
}



// FUNCTION 143dfc780 FUN_143dfc780 body=48 status=ok
// SIG undefined FUN_143dfc780(void)

void FUN_143dfc780(longlong *param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)
            (*(longlong *)(param_3 + 0x10) + (longlong)(*(int *)(param_3 + 0x18) + -1) * 8);
  param_1[1] = param_2;
  *param_1 = param_3;
  *(uint *)(param_1 + 3) = (uint)puVar2[1];
  uVar1 = *puVar2;
  *(uint *)((longlong)param_1 + 0x1c) = (uint)uVar1;
  *(int *)(param_3 + 8) = *(int *)(param_3 + 8) - (uint)uVar1;
  param_1[2] = (longlong)puVar2;
  return;
}



// FUNCTION 143dfc7b0 FUN_143dfc7b0 body=44 status=ok
// SIG undefined FUN_143dfc7b0(void)

void FUN_143dfc7b0(undefined8 *param_1,longlong param_2)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)**(undefined8 **)(param_2 + 0x10);
  *param_1 = puVar2;
  param_1[1] = puVar2 + 0x10;
  uVar1 = *puVar2;
  *(uint *)((longlong)param_1 + 0x14) = (uint)uVar1;
  *(undefined4 *)(param_1 + 2) = 0x7fffffff;
  puVar2 = puVar2 + 0x10;
  if (uVar1 == 0) {
    puVar2 = (ushort *)0x0;
  }
  param_1[1] = puVar2;
  return;
}



// FUNCTION 143dfc7e0 FUN_143dfc7e0 body=198 status=ok
// SIG undefined FUN_143dfc7e0(void)

void FUN_143dfc7e0(longlong param_1,int param_2,int param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
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
    uVar1 = *(ulonglong *)(param_1 + ((longlong)(param_3 + (int)uVar6) >> 1) * 8);
    iVar9 = param_3;
    do {
      uVar7 = (uint)uVar8;
      uVar2 = *(ulonglong *)(param_1 + uVar5 * 8);
      while (uVar2 < uVar1) {
        uVar5 = uVar5 + 1;
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        uVar2 = *(ulonglong *)(param_1 + uVar5 * 8);
      }
      uVar8 = *(ulonglong *)(param_1 + uVar4 * 8);
      while (uVar1 < uVar8) {
        uVar4 = uVar4 - 1;
        iVar9 = iVar9 + -1;
        uVar8 = *(ulonglong *)(param_1 + uVar4 * 8);
      }
      if ((longlong)uVar4 < (longlong)uVar5) break;
      if (uVar4 != uVar5) {
        uVar3 = *(undefined8 *)(param_1 + uVar4 * 8);
        *(undefined8 *)(param_1 + uVar4 * 8) = *(undefined8 *)(param_1 + uVar5 * 8);
        *(undefined8 *)(param_1 + uVar5 * 8) = uVar3;
      }
      iVar9 = iVar9 + -1;
      uVar4 = uVar4 - 1;
      uVar7 = uVar7 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 <= (longlong)uVar4);
    if ((int)uVar6 < iVar9) {
      FUN_143dfc7e0(param_1,uVar6 & 0xffffffff,iVar9,uVar10);
      uVar10 = param_4 & 0xff;
    }
    if (param_3 <= (int)uVar7) {
      return;
    }
    uVar6 = (ulonglong)uVar7;
  } while( true );
}



// FUNCTION 143dfc8b0 FUN_143dfc8b0 body=134 status=ok
// SIG undefined FUN_143dfc8b0(void)

undefined8 * FUN_143dfc8b0(undefined8 *param_1,int param_2,undefined4 param_3)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkDynamicBlockStreamAllocator::vftable;
  FUN_14370d870(param_1 + 3,0);
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  if (0 < param_2) {
    FUN_143dfcc60(param_1,param_2);
  }
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return param_1;
}



// FUNCTION 143dfc940 FUN_143dfc940 body=269 status=ok
// SIG undefined FUN_143dfc940(void)

void FUN_143dfc940(undefined8 *param_1)

{
  LPVOID pvVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar4;
  
  uVar4 = 0;
  *param_1 = hkDynamicBlockStreamAllocator::vftable;
  uVar5 = uVar4;
  if (0 < *(int *)(param_1 + 9)) {
    do {
      uVar2 = *(undefined8 *)(uVar5 + param_1[8]);
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      FUN_1437038e0(*(undefined8 *)((longlong)pvVar1 + 0x58),uVar2);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar5 = uVar5 + 8;
    } while ((int)uVar3 < *(int *)(param_1 + 9));
  }
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x5c)) {
    FUN_143702e10(uVar2,param_1[10],8,*(uint *)((longlong)param_1 + 0x5c) & 0x3fffffff);
  }
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 9) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x4c)) {
    FUN_143702e10(uVar2,param_1[8],8,*(uint *)((longlong)param_1 + 0x4c) & 0x3fffffff);
  }
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  FWindowsCriticalSection::~FWindowsCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143dfca50 FUN_143dfca50 body=136 status=ok
// SIG undefined FUN_143dfca50(void)

longlong FUN_143dfca50(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143dfc940();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x68;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 143dfcae0 FUN_143dfcae0 body=194 status=ok
// SIG undefined FUN_143dfcae0(void)

void FUN_143dfcae0(longlong *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    if ((int)param_1[0xb] < param_3) {
      FUN_143dfcd90(param_1);
      FUN_143dfcc60(param_1);
    }
    lVar2 = 0;
    if (0 < param_3) {
      do {
        *(undefined8 *)(param_2 + lVar2 * 8) =
             *(undefined8 *)(param_1[10] + (longlong)((int)param_1[0xb] + -1) * 8);
        lVar2 = lVar2 + 1;
        *(int *)(param_1 + 0xb) = (int)param_1[0xb] + -1;
      } while (lVar2 < param_3);
    }
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
    if (iVar1 < *(int *)((longlong)param_1 + 100)) {
      iVar1 = *(int *)((longlong)param_1 + 100);
    }
    *(int *)((longlong)param_1 + 100) = iVar1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  return;
}



// FUNCTION 143dfcbb0 FUN_143dfcbb0 body=172 status=ok
// SIG undefined FUN_143dfcbb0(void)

void FUN_143dfcbb0(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    lVar2 = 0;
    if (0 < (longlong)param_3) {
      do {
        if (*(longlong *)(param_2 + lVar2 * 8) != 0) {
          uVar1 = FUN_143703a50();
          if (*(uint *)(param_1 + 0x58) == (*(uint *)(param_1 + 0x5c) & 0x3fffffff)) {
            FUN_14370c460(uVar1,param_1 + 0x50,8);
          }
          *(undefined8 *)(*(longlong *)(param_1 + 0x50) + (longlong)*(int *)(param_1 + 0x58) * 8) =
               *(undefined8 *)(param_2 + lVar2 * 8);
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < param_3);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 143dfcc60 FUN_143dfcc60 body=261 status=ok
// SIG undefined FUN_143dfcc60(void)

longlong FUN_143dfcc60(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  LPVOID pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  uVar6 = (longlong)param_2 + 0xeffU & 0xfffffffffffff100;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar6;
  lVar2 = SUB168(ZEXT816(0x8888888888888889) * auVar1,0);
  uVar6 = uVar6 / 0xf00;
  if (0 < (int)uVar6) {
    uVar6 = uVar6 & 0xffffffff;
    do {
      pvVar3 = TlsGetValue(DAT_146b7bf70);
      if (pvVar3 == (LPVOID)0x0) {
        pvVar3 = DAT_146b7bf68;
      }
      uVar4 = FUN_143703880(*(undefined8 *)((longlong)pvVar3 + 0x58),0xf00,0x80);
      uVar5 = FUN_143703a50();
      if (*(uint *)(param_1 + 0x48) == (*(uint *)(param_1 + 0x4c) & 0x3fffffff)) {
        FUN_14370c460(uVar5,(longlong *)(param_1 + 0x40),8);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x40) + (longlong)*(int *)(param_1 + 0x48) * 8) =
           uVar4;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
      uVar5 = FUN_143703a50();
      if (*(uint *)(param_1 + 0x58) == (*(uint *)(param_1 + 0x5c) & 0x3fffffff)) {
        FUN_14370c460(uVar5,(longlong *)(param_1 + 0x50),8);
      }
      lVar2 = *(longlong *)(param_1 + 0x50);
      *(undefined8 *)(lVar2 + (longlong)*(int *)(param_1 + 0x58) * 8) = uVar4;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return lVar2;
}



// FUNCTION 143dfcd70 FUN_143dfcd70 body=11 status=ok
// SIG undefined FUN_143dfcd70(void)

void FUN_143dfcd70(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  LPVOID pvVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 uStackX_8;
  longlong lStack_38;
  uint uStack_30;
  uint uStack_2c;
  
  if (*(int *)(param_1 + 0x60) == 1) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    iVar6 = *(int *)(param_1 + 0x48);
    if (iVar6 == *(int *)(param_1 + 0x58)) {
      iVar5 = 0;
      if (0 < iVar6) {
        lVar7 = 0;
        do {
          uVar4 = *(undefined8 *)(lVar7 + *(longlong *)(param_1 + 0x40));
          pvVar3 = TlsGetValue(DAT_146b7bf70);
          if (pvVar3 == (LPVOID)0x0) {
            pvVar3 = DAT_146b7bf68;
          }
          FUN_1437038e0(*(undefined8 *)((longlong)pvVar3 + 0x58),uVar4);
          iVar5 = iVar5 + 1;
          lVar7 = lVar7 + 8;
        } while (iVar5 < *(int *)(param_1 + 0x48));
      }
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    else {
      if (1 < iVar6) {
        FUN_143dfc7e0(*(undefined8 *)(param_1 + 0x40),0,iVar6 + -1,uStackX_8);
      }
      if (1 < *(int *)(param_1 + 0x58)) {
        FUN_143dfc7e0(*(undefined8 *)(param_1 + 0x50),0,*(int *)(param_1 + 0x58) + -1,uStackX_8);
      }
      iVar6 = 0;
      uStack_2c = 0x80000000;
      uStack_30 = 0;
      iVar5 = 0;
      lStack_38 = 0;
      if (0 < *(int *)(param_1 + 0x48)) {
        lVar7 = 0;
        lVar8 = 0;
        do {
          if ((iVar5 < *(int *)(param_1 + 0x58)) &&
             (lVar1 = *(longlong *)(lVar7 + *(longlong *)(param_1 + 0x40)),
             lVar1 == *(longlong *)(lVar8 + *(longlong *)(param_1 + 0x50)))) {
            pvVar3 = TlsGetValue(DAT_146b7bf70);
            if (pvVar3 == (LPVOID)0x0) {
              pvVar3 = DAT_146b7bf68;
            }
            FUN_1437038e0(*(undefined8 *)((longlong)pvVar3 + 0x58),lVar1);
            iVar5 = iVar5 + 1;
            lVar8 = lVar8 + 8;
          }
          else {
            lVar1 = *(longlong *)(param_1 + 0x40);
            uVar4 = FUN_143703a50();
            if (uStack_30 == (uStack_2c & 0x3fffffff)) {
              FUN_14370c460(uVar4,&lStack_38,8);
            }
            *(undefined8 *)(lStack_38 + (longlong)(int)uStack_30 * 8) =
                 *(undefined8 *)(lVar1 + lVar7);
            uStack_30 = uStack_30 + 1;
          }
          iVar6 = iVar6 + 1;
          lVar7 = lVar7 + 8;
        } while (iVar6 < *(int *)(param_1 + 0x48));
      }
      uVar2 = uStack_30;
      lVar7 = lStack_38;
      uVar4 = FUN_143703a50();
      if ((int)(*(uint *)(param_1 + 0x4c) & 0x3fffffff) < (int)uVar2) {
        FUN_14370c310(uVar4,param_1 + 0x40,uVar2,8);
      }
      FUN_143738e40(*(undefined8 *)(param_1 + 0x40),lVar7,uVar2);
      *(uint *)(param_1 + 0x48) = uVar2;
      uVar4 = FUN_143703a50();
      uStack_30 = 0;
      if (-1 < (int)uStack_2c) {
        FUN_143702e10(uVar4,lStack_38,8,uStack_2c & 0x3fffffff);
      }
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x000143dfd01f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    return;
  }
  return;
}



// FUNCTION 143dfcd80 FUN_143dfcd80 body=13 status=ok
// SIG undefined FUN_143dfcd80(void)

int FUN_143dfcd80(longlong param_1)

{
  return (*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x58)) * 0xf00;
}



// FUNCTION 143dfcd90 FUN_143dfcd90 body=8 status=ok
// SIG undefined FUN_143dfcd90(void)

int FUN_143dfcd90(longlong param_1)

{
  return *(int *)(param_1 + 0x48) * 0xf00;
}



// FUNCTION 143dfcda0 FUN_143dfcda0 body=104 status=ok
// SIG undefined FUN_143dfcda0(void)

void FUN_143dfcda0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = FUN_143dfcd90();
  *param_2 = (longlong)iVar1;
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  param_2[1] = (longlong)iVar1;
  iVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  param_2[2] = (longlong)iVar1;
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  param_2[5] = 0xf00;
  param_2[3] = *param_2 - (longlong)iVar1;
  param_2[4] = *param_2 - (longlong)iVar1;
  return;
}



// FUNCTION 143dfce10 FUN_143dfce10 body=534 status=ok
// SIG undefined FUN_143dfce10(void)

void FUN_143dfce10(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  LPVOID pvVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res8;
  longlong local_38;
  uint local_30;
  uint local_2c;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  iVar6 = *(int *)(param_1 + 0x48);
  if (iVar6 == *(int *)(param_1 + 0x58)) {
    iVar5 = 0;
    if (0 < iVar6) {
      lVar7 = 0;
      do {
        uVar4 = *(undefined8 *)(lVar7 + *(longlong *)(param_1 + 0x40));
        pvVar3 = TlsGetValue(DAT_146b7bf70);
        if (pvVar3 == (LPVOID)0x0) {
          pvVar3 = DAT_146b7bf68;
        }
        FUN_1437038e0(*(undefined8 *)((longlong)pvVar3 + 0x58),uVar4);
        iVar5 = iVar5 + 1;
        lVar7 = lVar7 + 8;
      } while (iVar5 < *(int *)(param_1 + 0x48));
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  else {
    if (1 < iVar6) {
      FUN_143dfc7e0(*(undefined8 *)(param_1 + 0x40),0,iVar6 + -1,local_res8);
    }
    if (1 < *(int *)(param_1 + 0x58)) {
      FUN_143dfc7e0(*(undefined8 *)(param_1 + 0x50),0,*(int *)(param_1 + 0x58) + -1,local_res8);
    }
    iVar6 = 0;
    local_2c = 0x80000000;
    local_30 = 0;
    iVar5 = 0;
    local_38 = 0;
    if (0 < *(int *)(param_1 + 0x48)) {
      lVar7 = 0;
      lVar8 = 0;
      do {
        if ((iVar5 < *(int *)(param_1 + 0x58)) &&
           (lVar1 = *(longlong *)(lVar7 + *(longlong *)(param_1 + 0x40)),
           lVar1 == *(longlong *)(lVar8 + *(longlong *)(param_1 + 0x50)))) {
          pvVar3 = TlsGetValue(DAT_146b7bf70);
          if (pvVar3 == (LPVOID)0x0) {
            pvVar3 = DAT_146b7bf68;
          }
          FUN_1437038e0(*(undefined8 *)((longlong)pvVar3 + 0x58),lVar1);
          iVar5 = iVar5 + 1;
          lVar8 = lVar8 + 8;
        }
        else {
          lVar1 = *(longlong *)(param_1 + 0x40);
          uVar4 = FUN_143703a50();
          if (local_30 == (local_2c & 0x3fffffff)) {
            FUN_14370c460(uVar4,&local_38,8);
          }
          *(undefined8 *)(local_38 + (longlong)(int)local_30 * 8) = *(undefined8 *)(lVar1 + lVar7);
          local_30 = local_30 + 1;
        }
        iVar6 = iVar6 + 1;
        lVar7 = lVar7 + 8;
      } while (iVar6 < *(int *)(param_1 + 0x48));
    }
    uVar2 = local_30;
    lVar7 = local_38;
    uVar4 = FUN_143703a50();
    if ((int)(*(uint *)(param_1 + 0x4c) & 0x3fffffff) < (int)uVar2) {
      FUN_14370c310(uVar4,param_1 + 0x40,uVar2,8);
    }
    FUN_143738e40(*(undefined8 *)(param_1 + 0x40),lVar7,uVar2);
    *(uint *)(param_1 + 0x48) = uVar2;
    uVar4 = FUN_143703a50();
    local_30 = 0;
    if (-1 < (int)local_2c) {
      FUN_143702e10(uVar4,local_38,8,local_2c & 0x3fffffff);
    }
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x000143dfd01f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 143dfd030 FUN_143dfd030 body=201 status=ok
// SIG undefined FUN_143dfd030(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_143dfd030(float *param_1,undefined1 (*param_2) [16],float *param_3,float *param_4)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
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
  
  auVar1 = *param_2;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  fVar17 = *param_3 - auVar1._0_4_;
  fVar18 = fVar2 - auVar1._4_4_;
  fVar19 = fVar3 - auVar1._8_4_;
  fVar6 = (*param_1 - auVar1._0_4_) * fVar17;
  fVar8 = (param_1[1] - auVar1._4_4_) * fVar18;
  fVar10 = (param_1[2] - auVar1._8_4_) * fVar19;
  fVar13 = fVar8 + fVar6 + fVar10;
  fVar7 = fVar17 * fVar17;
  fVar9 = fVar18 * fVar18;
  fVar11 = fVar19 * fVar19;
  fVar14 = fVar9 + fVar7 + fVar11;
  fVar15 = fVar9 + fVar7 + fVar11;
  fVar16 = fVar9 + fVar7 + fVar11;
  fVar11 = fVar9 + fVar7 + fVar11;
  if (fVar13 <= 0.0) {
    *(undefined1 (*) [16])(param_4 + 4) = auVar1;
    param_4[0] = 0.0;
    param_4[1] = 0.0;
    param_4[2] = 0.0;
    param_4[3] = 0.0;
    return 8;
  }
  if (fVar14 <= fVar13) {
    param_4[4] = *param_3;
    param_4[5] = fVar2;
    param_4[6] = fVar3;
    param_4[7] = fVar4;
    uVar5 = uRam00000001467f06f8;
    *(undefined8 *)param_4 = _DAT_1467f06f0;
    *(undefined8 *)(param_4 + 2) = uVar5;
    return 4;
  }
  auVar12._4_4_ = fVar15;
  auVar12._0_4_ = fVar14;
  auVar12._8_4_ = fVar16;
  auVar12._12_4_ = fVar11;
  auVar12 = rcpps(auVar1,auVar12);
  fVar13 = fVar13 * (2.0 - auVar12._0_4_ * fVar14) * auVar12._0_4_;
  fVar7 = (fVar8 + fVar6 + fVar10) * (2.0 - auVar12._4_4_ * fVar15) * auVar12._4_4_;
  fVar9 = (fVar8 + fVar6 + fVar10) * (2.0 - auVar12._8_4_ * fVar16) * auVar12._8_4_;
  fVar8 = (fVar8 + fVar6 + fVar10) * (2.0 - auVar12._12_4_ * fVar11) * auVar12._12_4_;
  *param_4 = fVar13;
  param_4[1] = fVar7;
  param_4[2] = fVar9;
  param_4[3] = fVar8;
  fVar2 = *(float *)(*param_2 + 4);
  fVar3 = *(float *)(*param_2 + 8);
  fVar6 = *(float *)(*param_2 + 0xc);
  param_4[4] = fVar13 * fVar17 + *(float *)*param_2;
  param_4[5] = fVar7 * fVar18 + fVar2;
  param_4[6] = fVar9 * fVar19 + fVar3;
  param_4[7] = fVar8 * (fVar4 - auVar1._12_4_) + fVar6;
  return 0;
}



// FUNCTION 143dfd100 FUN_143dfd100 body=29 status=ok
// SIG undefined FUN_143dfd100(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_143dfd100(void)

{
  _DAT_146bcce08 = 0xffffffff;
  _DAT_146bcce0c = 0xffff;
  return &DAT_146bcce08;
}



// FUNCTION 143dfd120 FUN_143dfd120 body=407 status=ok
// SIG undefined FUN_143dfd120(void)

undefined8 FUN_143dfd120(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar10;
  float fVar11;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  float fStack_8c;
  
  fVar12 = *param_1;
  fVar13 = param_1[1];
  fVar14 = param_1[2];
  fVar21 = param_1[3];
  fVar20 = *param_2;
  fVar1 = param_2[1];
  fVar18 = param_2[2];
  fVar16 = param_2[3];
  fVar2 = *param_3;
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  fVar5 = param_3[3];
  fVar15 = fVar3 * fVar20 - fVar1 * fVar2;
  fVar17 = fVar4 * fVar1 - fVar18 * fVar3;
  fVar19 = fVar2 * fVar18 - fVar20 * fVar4;
  fVar7 = fVar17 * fVar12;
  fVar10 = fVar19 * fVar13;
  fVar11 = fVar15 * fVar14;
  fVar22 = fVar10 + fVar7 + fVar11;
  fVar23 = fVar10 + fVar7 + fVar11;
  fVar24 = fVar10 + fVar7 + fVar11;
  fVar11 = fVar10 + fVar7 + fVar11;
  if (fVar22 == 0.0) {
    uVar6 = 0x80040200;
  }
  else {
    uVar6 = 0;
    auVar8._0_4_ = 0.0 - fVar16;
    auVar8._4_4_ = 0.0 - fVar16;
    auVar8._8_4_ = 0.0 - fVar16;
    auVar8._12_4_ = 0.0 - fVar16;
    auVar9._4_4_ = fVar23;
    auVar9._0_4_ = fVar22;
    auVar9._8_4_ = fVar24;
    auVar9._12_4_ = fVar11;
    auVar9 = rcpps(auVar8,auVar9);
    fVar16 = fVar17 * (0.0 - fVar21) + (fVar14 * fVar3 - fVar4 * fVar13) * auVar8._0_4_ +
             (fVar18 * fVar13 - fVar14 * fVar1) * (0.0 - fVar5);
    fVar18 = fVar19 * (0.0 - fVar21) + (fVar12 * fVar4 - fVar2 * fVar14) * auVar8._4_4_ +
             (fVar20 * fVar14 - fVar12 * fVar18) * (0.0 - fVar5);
    fVar20 = fVar15 * (0.0 - fVar21) + (fVar13 * fVar2 - fVar3 * fVar12) * auVar8._8_4_ +
             (fVar1 * fVar12 - fVar13 * fVar20) * (0.0 - fVar5);
    fVar21 = (fStack_8c * fStack_8c - fStack_8c * fStack_8c) * (0.0 - fVar21) +
             (fStack_8c * fStack_8c - fStack_8c * fStack_8c) * auVar8._12_4_ +
             (fStack_8c * fStack_8c - fStack_8c * fStack_8c) * (0.0 - fVar5);
    *param_4 = fVar16;
    param_4[1] = fVar18;
    param_4[2] = fVar20;
    param_4[3] = fVar21;
    fVar12 = (2.0 - auVar9._4_4_ * fVar23) * auVar9._4_4_ * fRam00000001467f06f4;
    fVar13 = (2.0 - auVar9._8_4_ * fVar24) * auVar9._8_4_ * fRam00000001467f06f8;
    fVar14 = (2.0 - auVar9._12_4_ * fVar11) * auVar9._12_4_ * fRam00000001467f06fc;
    *param_4 = fVar16 * (2.0 - auVar9._0_4_ * fVar22) * auVar9._0_4_ * DAT_1467f06f0;
    param_4[1] = fVar18 * fVar12;
    param_4[2] = fVar20 * fVar13;
    param_4[3] = fVar21 * fVar14;
  }
  return uVar6;
}



// FUNCTION 143dfd2c0 FUN_143dfd2c0 body=3618 status=ok
// SIG undefined FUN_143dfd2c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dfd2c0(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  int *piVar9;
  undefined8 *puVar10;
  ulonglong *puVar11;
  byte bVar12;
  undefined1 (*pauVar13) [16];
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  float *pfVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar33;
  float fVar34;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar42;
  float fVar43;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar44;
  float fVar47;
  float fVar48;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  ulonglong local_res8;
  longlong *local_res10;
  longlong local_res18;
  undefined8 local_res20;
  longlong local_148;
  uint local_140;
  uint local_13c;
  longlong local_138;
  int local_130;
  uint local_12c;
  longlong local_128;
  int local_120;
  uint local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  longlong local_100;
  ulonglong local_f8;
  uint uStack_f0;
  undefined4 uStack_ec;
  ulonglong local_e8;
  uint uStack_e0;
  undefined4 uStack_dc;
  ulonglong local_d8;
  uint uStack_d0;
  undefined4 uStack_cc;
  ulonglong local_c8;
  uint uStack_c0;
  undefined4 uStack_bc;
  ulonglong local_b8;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [16];
  
  if (*(char *)(param_1 + 0x1ee) == '\0') {
    iVar17 = *(int *)(param_1 + 0x58);
    uVar15 = 0;
    local_138 = 0;
    local_130 = 0;
    local_12c = 0x80000000;
    local_118 = 0;
    local_110 = 0;
    local_10c = 0xffffffff;
    local_128 = 0;
    local_120 = 0;
    local_11c = 0x80000000;
    if (iVar17 != 0) {
      uVar7 = FUN_143703a50();
      if ((int)(local_12c & 0x3fffffff) < iVar17) {
        FUN_14370c310(uVar7,&local_138,iVar17,0x10);
      }
      for (puVar10 = *(undefined8 **)(param_1 + 0x50); puVar10 != (undefined8 *)0x0;
          puVar10 = (undefined8 *)*puVar10) {
        lVar8 = (longlong)local_130;
        local_130 = local_130 + 1;
        puVar14 = (undefined8 *)(lVar8 * 0x10 + local_138);
        *puVar14 = puVar10;
        lVar8 = puVar10[4];
        fVar28 = *(float *)(param_1 + 0x110);
        fVar33 = *(float *)(param_1 + 0x114);
        fVar34 = *(float *)(param_1 + 0x118);
        lVar16 = puVar10[3];
        lVar2 = puVar10[2];
        auVar35 = *(undefined1 (*) [16])(param_1 + 0x130);
        fVar25 = auVar35._0_4_;
        fVar26 = auVar35._4_4_;
        fVar27 = auVar35._8_4_;
        fVar38 = (float)*(int *)(lVar2 + 0x20) * fVar25 + fVar28;
        fVar42 = (float)*(int *)(lVar2 + 0x24) * fVar26 + fVar33;
        fVar43 = (float)*(int *)(lVar2 + 0x28) * fVar27 + fVar34;
        fVar44 = ((float)*(int *)(lVar16 + 0x20) * fVar25 + fVar28) - fVar38;
        fVar47 = ((float)*(int *)(lVar16 + 0x24) * fVar26 + fVar33) - fVar42;
        fVar48 = ((float)*(int *)(lVar16 + 0x28) * fVar27 + fVar34) - fVar43;
        fVar38 = ((float)*(int *)(lVar8 + 0x20) * fVar25 + fVar28) - fVar38;
        fVar42 = ((float)*(int *)(lVar8 + 0x24) * fVar26 + fVar33) - fVar42;
        fVar43 = ((float)*(int *)(lVar8 + 0x28) * fVar27 + fVar34) - fVar43;
        fVar28 = fVar42 * fVar44 - fVar47 * fVar38;
        fVar33 = fVar43 * fVar47 - fVar48 * fVar42;
        fVar34 = fVar38 * fVar48 - fVar44 * fVar43;
        fVar33 = fVar33 * fVar33;
        fVar34 = fVar34 * fVar34;
        fVar28 = fVar28 * fVar28;
        auVar29._0_4_ = fVar34 + fVar33 + fVar28;
        auVar29._4_4_ = fVar34 + fVar33 + fVar28;
        auVar29._8_4_ = fVar34 + fVar33 + fVar28;
        auVar29._12_4_ = fVar34 + fVar33 + fVar28;
        auVar35 = rsqrtps(auVar35,auVar29);
        fVar28 = auVar35._0_4_;
        *(uint *)(puVar14 + 1) =
             ~-(uint)(auVar29._0_4_ <= 0.0) &
             (uint)((3.0 - auVar29._0_4_ * fVar28 * fVar28) * fVar28 * 0.5 * auVar29._0_4_);
      }
      if (1 < local_130) {
        FUN_143dff0f0(local_138,0,local_130 + -1,local_res8 & 0xff);
      }
      uVar1 = *(undefined4 *)(param_1 + 0x58);
      uVar7 = FUN_143703a50();
      FUN_14372fea0(&local_118,uVar7,uVar1);
      iVar17 = *(int *)(param_1 + 0x58);
      uVar7 = FUN_143703a50();
      if ((int)(local_11c & 0x3fffffff) < iVar17) {
        iVar5 = (local_11c & 0x3fffffff) * 2;
        iVar4 = iVar17;
        if (iVar17 < iVar5) {
          iVar4 = iVar5;
        }
        FUN_14370c310(uVar7,&local_128,iVar4,0x10);
      }
      local_120 = iVar17;
      uVar19 = uVar15;
      uVar18 = uVar15;
      for (plVar3 = *(longlong **)(param_1 + 0x50); plVar3 != (longlong *)0x0;
          plVar3 = (longlong *)*plVar3) {
        iVar17 = (int)uVar18;
        local_res8 = (ulonglong)iVar17;
        local_res10 = plVar3;
        uVar7 = FUN_143703a50();
        FUN_14372d6e0(&local_118,uVar7,&local_res10,&local_res8);
        lVar8 = plVar3[4];
        fVar33 = *(float *)(param_1 + 0x110);
        fVar34 = *(float *)(param_1 + 0x114);
        fVar38 = *(float *)(param_1 + 0x118);
        fVar42 = *(float *)(param_1 + 0x11c);
        lVar16 = plVar3[3];
        lVar2 = plVar3[2];
        auVar35 = *(undefined1 (*) [16])(param_1 + 0x130);
        fVar28 = auVar35._12_4_;
        fVar44 = auVar35._0_4_;
        fVar47 = auVar35._4_4_;
        fVar48 = auVar35._8_4_;
        fVar51 = (float)*(int *)(lVar2 + 0x20) * fVar44 + fVar33;
        fVar52 = (float)*(int *)(lVar2 + 0x24) * fVar47 + fVar34;
        fVar53 = (float)*(int *)(lVar2 + 0x28) * fVar48 + fVar38;
        fVar54 = fVar28 * 0.0 + fVar42;
        fVar43 = ((float)*(int *)(lVar8 + 0x20) * fVar44 + fVar33) - fVar51;
        fVar25 = ((float)*(int *)(lVar8 + 0x24) * fVar47 + fVar34) - fVar52;
        fVar26 = ((float)*(int *)(lVar8 + 0x28) * fVar48 + fVar38) - fVar53;
        fVar27 = (fVar28 * 0.0 + fVar42) - fVar54;
        fVar33 = ((float)*(int *)(lVar16 + 0x20) * fVar44 + fVar33) - fVar51;
        fVar34 = ((float)*(int *)(lVar16 + 0x24) * fVar47 + fVar34) - fVar52;
        fVar38 = ((float)*(int *)(lVar16 + 0x28) * fVar48 + fVar38) - fVar53;
        fVar54 = (fVar28 * 0.0 + fVar42) - fVar54;
        fVar42 = fVar25 * fVar33 - fVar34 * fVar43;
        fVar25 = fVar26 * fVar34 - fVar38 * fVar25;
        fVar43 = fVar43 * fVar38 - fVar33 * fVar26;
        fVar26 = fVar27 * fVar54 - fVar54 * fVar27;
        fVar28 = fVar25 * fVar25;
        fVar33 = fVar43 * fVar43;
        fVar34 = fVar42 * fVar42;
        auVar39._0_4_ = fVar33 + fVar28 + fVar34;
        auVar39._4_4_ = fVar33 + fVar28 + fVar34;
        auVar39._8_4_ = fVar33 + fVar28 + fVar34;
        auVar39._12_4_ = fVar33 + fVar28 + fVar34;
        auVar35 = rsqrtps(auVar35,auVar39);
        fVar28 = auVar35._0_4_;
        fVar33 = auVar35._4_4_;
        fVar34 = auVar35._8_4_;
        fVar38 = auVar35._12_4_;
        uVar21 = -(uint)(0.0 - auVar39._0_4_ < 0.0);
        uVar22 = -(uint)(0.0 - auVar39._4_4_ < 0.0);
        uVar23 = -(uint)(0.0 - auVar39._8_4_ < 0.0);
        uVar24 = -(uint)(0.0 - auVar39._12_4_ < 0.0);
        auVar49._0_4_ =
             (uint)((float)(~-(uint)(auVar39._0_4_ <= 0.0) &
                           (uint)((3.0 - fVar28 * auVar39._0_4_ * fVar28) * fVar28 * 0.5)) * fVar25)
             & uVar21;
        auVar49._4_4_ =
             (uint)((float)(~-(uint)(auVar39._4_4_ <= 0.0) &
                           (uint)((3.0 - fVar33 * auVar39._4_4_ * fVar33) * fVar33 * 0.5)) * fVar43)
             & uVar22;
        auVar49._8_4_ =
             (uint)((float)(~-(uint)(auVar39._8_4_ <= 0.0) &
                           (uint)((3.0 - fVar34 * auVar39._8_4_ * fVar34) * fVar34 * 0.5)) * fVar42)
             & uVar23;
        auVar49._12_4_ =
             (uint)((float)(~-(uint)(auVar39._12_4_ <= 0.0) &
                           (uint)((3.0 - fVar38 * auVar39._12_4_ * fVar38) * fVar38 * 0.5)) * fVar26
                   ) & uVar24;
        auVar35._0_4_ = ~uVar21 & (uint)fVar25;
        auVar35._4_4_ = ~uVar22 & (uint)fVar43;
        auVar35._8_4_ = ~uVar23 & (uint)fVar42;
        auVar35._12_4_ = ~uVar24 & (uint)fVar26;
        auVar49 = auVar49 | auVar35;
        auVar50._0_12_ = auVar49._0_12_;
        auVar50._12_4_ =
             0.0 - (auVar49._4_4_ * fVar52 + auVar49._0_4_ * fVar51 + auVar49._8_4_ * fVar53);
        *(undefined1 (*) [16])(uVar19 + local_128) = auVar50;
        uVar19 = uVar19 + 0x10;
        *(int *)((longlong)plVar3 + 100) = iVar17;
        uVar18 = (ulonglong)(iVar17 + 1);
        *(undefined4 *)(plVar3 + 0xb) = 0xffffffff;
      }
    }
    uVar19 = uVar15;
    for (puVar10 = *(undefined8 **)(param_1 + 0x38); puVar10 != (undefined8 *)0x0;
        puVar10 = (undefined8 *)*puVar10) {
      *(int *)((longlong)puVar10 + 0x34) = (int)uVar19;
      uVar19 = (ulonglong)((int)uVar19 + 1);
    }
    iVar17 = *(int *)(param_1 + 0x1e0);
    *(undefined4 *)(param_1 + 0x78) = 0;
    if (iVar17 == 3) {
      local_148 = 0;
      local_140 = 0;
      local_13c = 0x80000000;
      uVar19 = uVar15;
      if (0 < local_130) {
        do {
          lVar8 = *(longlong *)(local_138 + uVar19);
          if (*(int *)(lVar8 + 0x58) == -1) {
            local_res10 = (longlong *)&DAT_ffffffffffffffff;
            local_res18 = lVar8;
            piVar9 = (int *)FUN_14372d420(&local_118,&local_res18,&local_res10);
            pfVar20 = (float *)((longlong)*piVar9 * 0x10 + local_128);
            *(undefined4 *)(lVar8 + 0x58) = *(undefined4 *)(param_1 + 0x78);
            uVar7 = FUN_143703a50();
            if (*(uint *)(param_1 + 0x78) == (*(uint *)(param_1 + 0x7c) & 0x3fffffff)) {
              FUN_14370c460(uVar7,param_1 + 0x70,0x10);
            }
            uVar7 = *(undefined8 *)(pfVar20 + 2);
            puVar10 = (undefined8 *)
                      ((longlong)*(int *)(param_1 + 0x78) * 0x10 + *(longlong *)(param_1 + 0x70));
            *puVar10 = *(undefined8 *)pfVar20;
            puVar10[1] = uVar7;
            *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
            local_140 = 0;
            local_f8 = *(ulonglong *)(lVar8 + 0x28) & 0xfffffffffffffffc;
            uStack_f0 = (uint)*(ulonglong *)(lVar8 + 0x28) & 3;
            uVar7 = FUN_143703a50();
            if (local_140 == (local_13c & 0x3fffffff)) {
              FUN_14370c460(uVar7,&local_148,0x10);
            }
            puVar11 = (ulonglong *)((longlong)(int)local_140 * 0x10 + local_148);
            if (puVar11 != (ulonglong *)0x0) {
              *puVar11 = local_f8;
              puVar11[1] = CONCAT44(uStack_ec,uStack_f0);
            }
            local_140 = local_140 + 1;
            local_e8 = *(ulonglong *)(lVar8 + 0x30) & 0xfffffffffffffffc;
            uStack_e0 = (uint)*(ulonglong *)(lVar8 + 0x30) & 3;
            uVar7 = FUN_143703a50();
            if (local_140 == (local_13c & 0x3fffffff)) {
              FUN_14370c460(uVar7,&local_148,0x10);
            }
            puVar11 = (ulonglong *)((longlong)(int)local_140 * 0x10 + local_148);
            if (puVar11 != (ulonglong *)0x0) {
              *puVar11 = local_e8;
              puVar11[1] = CONCAT44(uStack_dc,uStack_e0);
            }
            local_140 = local_140 + 1;
            local_d8 = *(ulonglong *)(lVar8 + 0x38) & 0xfffffffffffffffc;
            uStack_d0 = (uint)*(ulonglong *)(lVar8 + 0x38) & 3;
            uVar7 = FUN_143703a50();
            if (local_140 == (local_13c & 0x3fffffff)) {
              FUN_14370c460(uVar7,&local_148,0x10);
            }
            puVar11 = (ulonglong *)((longlong)(int)local_140 * 0x10 + local_148);
            if (puVar11 != (ulonglong *)0x0) {
              *puVar11 = local_d8;
              puVar11[1] = CONCAT44(uStack_cc,uStack_d0);
            }
            local_140 = local_140 + 1;
joined_r0x000143dfd918:
            do {
              if (local_140 == 0) break;
                    /* WARNING: Read-only address (ram,0x000145b8e9f0) is written */
              local_140 = local_140 - 1;
              local_a8 = *(undefined1 (*) [16])(local_148 + (longlong)(int)local_140 * 0x10);
              lVar16 = local_a8._0_8_;
              if (*(int *)(lVar16 + 0x58) == -1) {
                local_res20 = 0xffffffffffffffff;
                local_100 = lVar16;
                piVar9 = (int *)FUN_14372d420(&local_118,&local_100,&local_res20);
                local_res8 = CONCAT44(local_res8._4_4_,0x38d1b717);
                auVar35 = *(undefined1 (*) [16])((longlong)*piVar9 * 0x10 + local_128);
                auVar29 = auVar35 & _DAT_145b8e9f0;
                auVar30._0_4_ = -(uint)(auVar29._0_4_ == (int)DAT_145b8e9f0);
                auVar30._4_4_ = -(uint)(auVar29._4_4_ == DAT_145b8e9f0._4_4_);
                auVar30._8_4_ = -(uint)(auVar29._8_4_ == DAT_145b8e9f0._8_4_);
                auVar30._12_4_ = -(uint)(auVar29._12_4_ == DAT_145b8e9f0._12_4_);
                if (((SUB161(auVar30 >> 7,0) & 1) == 0 && (SUB161(auVar30 >> 0x27,0) & 1) == 0) &&
                    (SUB161(auVar30 >> 0x47,0) & 1) == 0) {
                  fVar28 = auVar35._0_4_;
                  fVar33 = auVar35._4_4_;
                  fVar34 = auVar35._8_4_;
                  if ((ABS((fVar33 * fVar33 + fVar28 * fVar28 + fVar34 * fVar34) - DAT_1467f06f0) <
                       0.0001) &&
                     (fVar33 * pfVar20[1] + fVar28 * *pfVar20 + fVar34 * pfVar20[2] <
                      *(float *)(param_1 + 4))) goto joined_r0x000143dfd918;
                }
                *(undefined4 *)(lVar16 + 0x58) = *(undefined4 *)(lVar8 + 0x58);
                bVar12 = local_a8[8] * '\x02';
                uVar18 = *(ulonglong *)
                          (lVar16 + 0x28 + (longlong)(int)(9 >> (bVar12 & 0x1f) & 3) * 8);
                local_c8 = uVar18 & 0xfffffffffffffffc;
                uStack_c0 = (uint)uVar18 & 3;
                uVar7 = FUN_143703a50();
                if (local_140 == (local_13c & 0x3fffffff)) {
                  FUN_14370c460(uVar7,&local_148,0x10);
                }
                puVar11 = (ulonglong *)((longlong)(int)local_140 * 0x10 + local_148);
                if (puVar11 != (ulonglong *)0x0) {
                  *puVar11 = local_c8;
                  puVar11[1] = CONCAT44(uStack_bc,uStack_c0);
                }
                local_140 = local_140 + 1;
                uVar18 = *(ulonglong *)
                          (lVar16 + 0x28 + (longlong)(int)(0x12 >> (bVar12 & 0x1f) & 3) * 8);
                local_b8 = uVar18 & 0xfffffffffffffffc;
                uStack_b0 = (uint)uVar18 & 3;
                uVar7 = FUN_143703a50();
                if (local_140 == (local_13c & 0x3fffffff)) {
                  FUN_14370c460(uVar7,&local_148,0x10);
                }
                puVar11 = (ulonglong *)((longlong)(int)local_140 * 0x10 + local_148);
                if (puVar11 != (ulonglong *)0x0) {
                  *puVar11 = local_b8;
                  puVar11[1] = CONCAT44(uStack_ac,uStack_b0);
                }
                local_140 = local_140 + 1;
              }
            } while( true );
          }
          uVar21 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar21;
          uVar19 = uVar19 + 0x10;
        } while ((int)uVar21 < local_130);
      }
      uVar7 = FUN_143703a50();
      local_140 = 0;
      if (-1 < (int)local_13c) {
        FUN_143702e10(uVar7,local_148,0x10,local_13c & 0x3fffffff);
      }
    }
    else if (iVar17 == 2) {
      pfVar20 = (float *)FUN_143dff030(param_1);
      puVar10 = *(undefined8 **)(param_1 + 0x38);
      fVar28 = *pfVar20;
      fVar33 = pfVar20[1];
      fVar34 = pfVar20[2];
      if (puVar10 != (undefined8 *)0x0) {
        puVar14 = puVar10;
        for (puVar6 = (undefined8 *)*puVar10; puVar6 != (undefined8 *)0x0;
            puVar6 = (undefined8 *)*puVar6) {
          puVar14 = puVar6;
        }
        while (puVar6 = puVar10, puVar6 != (undefined8 *)0x0) {
          fVar26 = (float)*(int *)(puVar14 + 4) * *(float *)(param_1 + 0x130) +
                   *(float *)(param_1 + 0x110);
          fVar27 = (float)*(int *)((longlong)puVar14 + 0x24) * *(float *)(param_1 + 0x134) +
                   *(float *)(param_1 + 0x114);
          fVar44 = (float)*(int *)(puVar14 + 5) * *(float *)(param_1 + 0x138) +
                   *(float *)(param_1 + 0x118);
          fVar38 = ((float)*(int *)(puVar6 + 4) * *(float *)(param_1 + 0x130) +
                   *(float *)(param_1 + 0x110)) - fVar26;
          fVar42 = ((float)*(int *)((longlong)puVar6 + 0x24) * *(float *)(param_1 + 0x134) +
                   *(float *)(param_1 + 0x114)) - fVar27;
          fVar43 = ((float)*(int *)(puVar6 + 5) * *(float *)(param_1 + 0x138) +
                   *(float *)(param_1 + 0x118)) - fVar44;
          fVar25 = (*(float *)(param_1 + 0x13c) * 0.0 + *(float *)(param_1 + 0x11c)) -
                   (*(float *)(param_1 + 0x13c) * 0.0 + *(float *)(param_1 + 0x11c));
          uVar7 = FUN_143703a50();
          if (*(uint *)(param_1 + 0x78) == (*(uint *)(param_1 + 0x7c) & 0x3fffffff)) {
            FUN_14370c460(uVar7,param_1 + 0x70,0x10);
          }
          pauVar13 = (undefined1 (*) [16])
                     ((longlong)*(int *)(param_1 + 0x78) * 0x10 + *(longlong *)(param_1 + 0x70));
          *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
          fVar47 = fVar42 * *(float *)(param_1 + 0x100) - *(float *)(param_1 + 0x104) * fVar38;
          fVar48 = fVar43 * *(float *)(param_1 + 0x104) - *(float *)(param_1 + 0x108) * fVar42;
          fVar54 = fVar38 * *(float *)(param_1 + 0x108) - *(float *)(param_1 + 0x100) * fVar43;
          fVar51 = fVar25 * *(float *)(param_1 + 0x10c) - *(float *)(param_1 + 0x10c) * fVar25;
          *(float *)*pauVar13 = fVar48;
          *(float *)(*pauVar13 + 4) = fVar54;
          *(float *)(*pauVar13 + 8) = fVar47;
          *(float *)(*pauVar13 + 0xc) = fVar51;
          fVar38 = fVar48 * fVar48;
          fVar42 = fVar54 * fVar54;
          auVar31._8_4_ = fVar47 * fVar47;
          auVar31._4_4_ = auVar31._8_4_;
          auVar31._0_4_ = auVar31._8_4_;
          auVar31._12_4_ = auVar31._8_4_;
          auVar36._0_4_ = fVar42 + fVar38 + auVar31._8_4_;
          auVar36._4_4_ = fVar42 + fVar38 + auVar31._8_4_;
          auVar36._8_4_ = fVar42 + fVar38 + auVar31._8_4_;
          auVar36._12_4_ = fVar42 + fVar38 + auVar31._8_4_;
          auVar35 = rsqrtps(auVar31,auVar36);
          fVar38 = auVar35._0_4_;
          fVar42 = auVar35._4_4_;
          fVar43 = auVar35._8_4_;
          fVar25 = auVar35._12_4_;
          uVar21 = -(uint)(0.0 - auVar36._0_4_ < 0.0);
          uVar22 = -(uint)(0.0 - auVar36._4_4_ < 0.0);
          uVar23 = -(uint)(0.0 - auVar36._8_4_ < 0.0);
          uVar24 = -(uint)(0.0 - auVar36._12_4_ < 0.0);
          auVar45._0_4_ =
               (uint)((float)(~-(uint)(auVar36._0_4_ <= 0.0) &
                             (uint)((3.0 - auVar36._0_4_ * fVar38 * fVar38) * fVar38 * 0.5)) *
                     fVar48) & uVar21;
          auVar45._4_4_ =
               (uint)((float)(~-(uint)(auVar36._4_4_ <= 0.0) &
                             (uint)((3.0 - auVar36._4_4_ * fVar42 * fVar42) * fVar42 * 0.5)) *
                     fVar54) & uVar22;
          auVar45._8_4_ =
               (uint)((float)(~-(uint)(auVar36._8_4_ <= 0.0) &
                             (uint)((3.0 - auVar36._8_4_ * fVar43 * fVar43) * fVar43 * 0.5)) *
                     fVar47) & uVar23;
          auVar45._12_4_ =
               (uint)((float)(~-(uint)(auVar36._12_4_ <= 0.0) &
                             (uint)((3.0 - auVar36._12_4_ * fVar25 * fVar25) * fVar25 * 0.5)) *
                     fVar51) & uVar24;
          auVar40._0_4_ = ~uVar21 & (uint)fVar48;
          auVar40._4_4_ = ~uVar22 & (uint)fVar54;
          auVar40._8_4_ = ~uVar23 & (uint)fVar47;
          auVar40._12_4_ = ~uVar24 & (uint)fVar51;
          auVar45 = auVar45 | auVar40;
          fVar47 = auVar45._0_4_;
          fVar48 = auVar45._4_4_;
          fVar54 = auVar45._8_4_;
          fVar38 = 0.0 - (fVar48 * fVar27 + fVar47 * fVar26 + fVar54 * fVar44);
          fVar42 = fVar54 * fVar34 + fVar47 * fVar28;
          fVar43 = fVar38 + fVar48 * fVar33;
          fVar25 = fVar47 * fVar28 + fVar54 * fVar34;
          fVar26 = fVar48 * fVar33 + fVar38;
          auVar46._0_4_ = (uint)fVar47 ^ -(uint)(0.0 <= fVar43 + fVar42) & 0x80000000;
          auVar46._4_4_ = (uint)fVar48 ^ -(uint)(0.0 <= fVar42 + fVar43) & 0x80000000;
          auVar46._8_4_ = (uint)fVar54 ^ -(uint)(0.0 <= fVar26 + fVar25) & 0x80000000;
          auVar46._12_4_ = (uint)fVar38 ^ -(uint)(0.0 <= fVar25 + fVar26) & 0x80000000;
          *pauVar13 = auVar46;
          puVar14 = puVar6;
          puVar10 = (undefined8 *)*puVar6;
        }
      }
    }
    else if (iVar17 == 1) {
      puVar10 = *(undefined8 **)(param_1 + 0x38);
      fVar28 = (float)*(int *)(puVar10 + 4) * *(float *)(param_1 + 0x130) +
               *(float *)(param_1 + 0x110);
      fVar33 = (float)*(int *)((longlong)puVar10 + 0x24) * *(float *)(param_1 + 0x134) +
               *(float *)(param_1 + 0x114);
      fVar34 = (float)*(int *)(puVar10 + 5) * *(float *)(param_1 + 0x138) +
               *(float *)(param_1 + 0x118);
      if (puVar10 != (undefined8 *)0x0) {
        for (puVar14 = (undefined8 *)*puVar10; puVar14 != (undefined8 *)0x0;
            puVar14 = (undefined8 *)*puVar14) {
          puVar10 = puVar14;
        }
      }
      fVar25 = (float)*(int *)(puVar10 + 4) * *(float *)(param_1 + 0x130) +
               *(float *)(param_1 + 0x110);
      fVar26 = (float)*(int *)((longlong)puVar10 + 0x24) * *(float *)(param_1 + 0x134) +
               *(float *)(param_1 + 0x114);
      fVar27 = (float)*(int *)(puVar10 + 5) * *(float *)(param_1 + 0x138) +
               *(float *)(param_1 + 0x118);
      fVar44 = fVar25 - fVar28;
      fVar47 = fVar26 - fVar33;
      fVar48 = fVar27 - fVar34;
      fVar38 = fVar44 * fVar44;
      fVar42 = fVar47 * fVar47;
      auVar32._8_4_ = fVar48 * fVar48;
      auVar32._4_4_ = auVar32._8_4_;
      auVar32._0_4_ = auVar32._8_4_;
      auVar32._12_4_ = auVar32._8_4_;
      auVar41._0_4_ = fVar42 + fVar38 + auVar32._8_4_;
      auVar41._4_4_ = fVar42 + fVar38 + auVar32._8_4_;
      auVar41._8_4_ = fVar42 + fVar38 + auVar32._8_4_;
      auVar41._12_4_ = fVar42 + fVar38 + auVar32._8_4_;
      auVar35 = rsqrtps(auVar32,auVar41);
      fVar38 = auVar35._0_4_;
      fVar42 = auVar35._4_4_;
      fVar43 = auVar35._8_4_;
      fVar44 = fVar44 * (float)(~-(uint)(auVar41._0_4_ <= 0.0) &
                               (uint)((3.0 - auVar41._0_4_ * fVar38 * fVar38) * fVar38 * 0.5));
      fVar47 = fVar47 * (float)(~-(uint)(auVar41._4_4_ <= 0.0) &
                               (uint)((3.0 - auVar41._4_4_ * fVar42 * fVar42) * fVar42 * 0.5));
      fVar48 = fVar48 * (float)(~-(uint)(auVar41._8_4_ <= 0.0) &
                               (uint)((3.0 - auVar41._8_4_ * fVar43 * fVar43) * fVar43 * 0.5));
      uVar7 = FUN_143703a50();
      if (*(uint *)(param_1 + 0x78) == (*(uint *)(param_1 + 0x7c) & 0x3fffffff)) {
        FUN_14370c460(uVar7,param_1 + 0x70,0x10);
      }
      pfVar20 = (float *)((longlong)*(int *)(param_1 + 0x78) * 0x10 + *(longlong *)(param_1 + 0x70))
      ;
      *pfVar20 = fVar44;
      pfVar20[1] = fVar47;
      pfVar20[2] = fVar48;
      pfVar20[3] = 0.0 - (fVar47 * fVar26 + fVar44 * fVar25 + fVar48 * fVar27);
      *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
      uVar7 = FUN_143703a50();
      if (*(uint *)(param_1 + 0x78) == (*(uint *)(param_1 + 0x7c) & 0x3fffffff)) {
        FUN_14370c460(uVar7,param_1 + 0x70,0x10);
      }
      pfVar20 = (float *)((longlong)*(int *)(param_1 + 0x78) * 0x10 + *(longlong *)(param_1 + 0x70))
      ;
      *pfVar20 = -fVar44;
      pfVar20[1] = -fVar47;
      pfVar20[2] = -fVar48;
      pfVar20[3] = 0.0 - (-fVar47 * fVar33 + -fVar44 * fVar28 + -fVar48 * fVar34);
      *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
    }
    if (*(char *)(param_1 + 0xe) != '\0') {
      for (puVar10 = *(undefined8 **)(param_1 + 0x38); puVar10 != (undefined8 *)0x0;
          puVar10 = (undefined8 *)*puVar10) {
                    /* WARNING: Read-only address (ram,0x000145b8e9f0) is written */
        uVar15 = 0;
        uVar19 = 0;
        if (0 < *(int *)(param_1 + 0x78)) {
          do {
            lVar8 = *(longlong *)(param_1 + 0x70);
            pfVar20 = (float *)(uVar15 + lVar8);
            fVar33 = *(float *)((longlong)puVar10 + 0x14) * pfVar20[1];
            fVar28 = *(float *)(uVar15 + lVar8 + 0xc);
            if (0.0 < fVar33 + *(float *)(puVar10 + 2) * *pfVar20 +
                      *(float *)(puVar10 + 3) * pfVar20[2] + fVar28) {
              auVar37._0_12_ = SUB1612(*(undefined1 (*) [16])(uVar15 + lVar8),0);
              auVar37._12_4_ =
                   SUB164(*(undefined1 (*) [16])(uVar15 + lVar8),0xc) -
                   (fVar33 + *(float *)(puVar10 + 2) * *pfVar20 +
                    *(float *)(puVar10 + 3) * pfVar20[2] + fVar28);
              *(undefined1 (*) [16])(uVar15 + lVar8) = auVar37;
            }
            uVar21 = (int)uVar19 + 1;
            uVar15 = uVar15 + 0x10;
            uVar19 = (ulonglong)uVar21;
          } while ((int)uVar21 < *(int *)(param_1 + 0x78));
        }
      }
    }
    if (*(int *)(param_1 + 0x78) != 0) {
      uVar7 = FUN_143703a50();
      if (*(int *)(param_1 + 0x78) < (int)(*(uint *)(param_1 + 0x7c) & 0x3fffffff)) {
        FUN_14370c210(uVar7,param_1 + 0x70,0x10,0,*(int *)(param_1 + 0x78));
      }
    }
    *(undefined1 *)(param_1 + 0x1ee) = 1;
    uVar7 = FUN_143703a50();
    local_120 = 0;
    if (-1 < (int)local_11c) {
      FUN_143702e10(uVar7,local_128,0x10,local_11c & 0x3fffffff);
    }
    local_128 = 0;
    local_11c = 0x80000000;
    uVar7 = FUN_143703a50();
    FUN_143700a90(&local_118,uVar7);
    AK::MemoryMgr::StartProfileThreadUsage((long)&local_118);
    uVar7 = FUN_143703a50();
    local_130 = 0;
    if (-1 < (int)local_12c) {
      FUN_143702e10(uVar7,local_138,0x10,local_12c & 0x3fffffff);
    }
  }
  return;
}



// FUNCTION 143dfe0f0 FUN_143dfe0f0 body=3895 status=ok
// SIG undefined FUN_143dfe0f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_143dfe0f0(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  float *pfVar9;
  float *pfVar10;
  undefined1 auVar11 [16];
  int iVar12;
  undefined4 uVar13;
  float *pfVar14;
  longlong lVar15;
  int *piVar16;
  undefined8 uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  longlong *plVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar34;
  float fVar35;
  undefined1 in_XMM1 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar36;
  float fVar42;
  float fVar43;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar59;
  float fVar60;
  undefined1 auVar58 [16];
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 auVar65 [12];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  undefined4 local_res8 [2];
  undefined8 in_stack_fffffffffffffb98;
  undefined1 local_458 [8];
  float fStack_450;
  float fStack_44c;
  float local_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  undefined1 local_438 [8];
  undefined8 uStack_430;
  float local_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  undefined1 local_418 [8];
  undefined8 uStack_410;
  float local_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined1 local_3e8 [8];
  float fStack_3e0;
  float local_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  undefined1 local_3c8 [8];
  float fStack_3c0;
  float fStack_3bc;
  float local_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined1 local_368 [8];
  float fStack_360;
  undefined1 local_358 [64];
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  undefined1 local_2e8 [48];
  undefined1 local_2b8 [672];
  
  uVar13 = (undefined4)((ulonglong)in_stack_fffffffffffffb98 >> 0x20);
  if (*(char *)(param_1 + 0x1ec) == '\0') {
    *(undefined1 *)(param_1 + 0x1ed) = 0;
    if (*(int *)(param_1 + 0x1e0) == 3) {
      pfVar14 = (float *)FUN_143dff030();
      plVar18 = *(longlong **)(param_1 + 0x50);
      _local_438 = ZEXT816(0);
      local_3d8 = 0.0;
      fStack_3d4 = 0.0;
      fStack_3d0 = 0.0;
      fStack_3cc = 0.0;
      fVar69 = *pfVar14;
      fVar70 = pfVar14[1];
      fVar71 = pfVar14[2];
      fVar28 = pfVar14[3];
      fVar49 = 0.0;
      fVar50 = 0.0;
      fVar51 = 0.0;
      fVar52 = 0.0;
      _local_368 = ZEXT816(0);
      fVar75 = 0.0;
      fVar76 = 0.0;
      fVar77 = 0.0;
      local_448 = 0.0;
      fStack_444 = 0.0;
      fStack_440 = 0.0;
      fStack_43c = 0.0;
      fVar72 = 0.0;
      fVar73 = 0.0;
      fVar74 = 0.0;
      fVar53 = 0.0;
      fVar54 = 0.0;
      fVar55 = 0.0;
      fVar56 = 0.0;
      local_3f8 = 0;
      uStack_3f0 = 0;
      auVar65._0_8_ = (ulonglong)DAT_1467f08d0 ^ 0x8000000080000000;
      auVar65._8_4_ = DAT_1467f08d0._8_4_ ^ 0x80000000;
      auVar67._12_4_ = DAT_1467f08d0._12_4_ ^ 0x80000000;
      auVar67._0_12_ = auVar65;
      _local_3e8 = _DAT_1467f08d0;
      if (plVar18 != (longlong *)0x0) {
        local_438._0_4_ = *(undefined4 *)*(undefined1 (*) [12])(param_1 + 0x130);
        local_438._4_4_ = *(float *)(param_1 + 0x134);
        uStack_430._0_4_ = *(float *)(param_1 + 0x138);
        auVar8 = *(undefined1 (*) [12])(param_1 + 0x130);
        plVar20 = plVar18;
        do {
          lVar15 = plVar20[2];
          lVar2 = plVar20[3];
          lVar3 = plVar20[4];
          fVar61 = ((float)*(int *)(lVar15 + 0x20) * (float)local_438._0_4_ +
                   *(float *)(param_1 + 0x110)) - fVar69;
          fVar62 = ((float)*(int *)(lVar15 + 0x24) * (float)local_438._4_4_ +
                   *(float *)(param_1 + 0x114)) - fVar70;
          fVar63 = ((float)*(int *)(lVar15 + 0x28) * (float)uStack_430 + *(float *)(param_1 + 0x118)
                   ) - fVar71;
          fVar64 = (*(float *)(param_1 + 0x13c) * 0.0 + *(float *)(param_1 + 0x11c)) - fVar28;
          auVar6._4_4_ = fVar62;
          auVar6._0_4_ = fVar61;
          auVar6._8_4_ = fVar63;
          auVar6._12_4_ = fVar64;
          auVar58 = minps(_local_3e8,auVar6);
          auVar48._0_4_ =
               ((float)*(int *)(lVar2 + 0x20) * (float)local_438._0_4_ + *(float *)(param_1 + 0x110)
               ) - fVar69;
          auVar48._4_4_ =
               ((float)*(int *)(lVar2 + 0x24) * (float)local_438._4_4_ + *(float *)(param_1 + 0x114)
               ) - fVar70;
          auVar48._8_4_ =
               ((float)*(int *)(lVar2 + 0x28) * (float)uStack_430 + *(float *)(param_1 + 0x118)) -
               fVar71;
          auVar48._12_4_ =
               (*(float *)(param_1 + 0x13c) * 0.0 + *(float *)(param_1 + 0x11c)) - fVar28;
          auVar7._4_4_ = fVar62;
          auVar7._0_4_ = fVar61;
          auVar7._8_4_ = fVar63;
          auVar7._12_4_ = fVar64;
          auVar66 = maxps(auVar67,auVar7);
          auVar58 = minps(auVar58,auVar48);
          auVar47._0_4_ =
               ((float)*(int *)(lVar3 + 0x20) * *(float *)(param_1 + 0x130) +
               *(float *)(param_1 + 0x110)) - fVar69;
          auVar47._4_4_ =
               ((float)*(int *)(lVar3 + 0x24) * *(float *)(param_1 + 0x134) +
               *(float *)(param_1 + 0x114)) - fVar70;
          auVar47._8_4_ =
               ((float)*(int *)(lVar3 + 0x28) * *(float *)(param_1 + 0x138) +
               *(float *)(param_1 + 0x118)) - fVar71;
          auVar47._12_4_ =
               (*(float *)(param_1 + 0x13c) * 0.0 + *(float *)(param_1 + 0x11c)) - fVar28;
          auVar66 = maxps(auVar66,auVar48);
          _local_3e8 = minps(auVar58,auVar47);
          auVar67 = maxps(auVar66,auVar47);
          auVar65 = auVar67._0_12_;
          fVar36 = auVar47._4_4_ * auVar48._0_4_ - auVar48._4_4_ * auVar47._0_4_;
          fVar42 = auVar47._8_4_ * auVar48._4_4_ - auVar48._8_4_ * auVar47._4_4_;
          fVar43 = auVar47._0_4_ * auVar48._8_4_ - auVar48._0_4_ * auVar47._8_4_;
          auVar37._12_4_ = auVar47._12_4_ * auVar48._12_4_ - auVar48._12_4_ * auVar47._12_4_;
          auVar37._4_4_ = fVar43;
          auVar37._0_4_ = fVar42;
          auVar37._8_4_ = fVar36;
          fVar27 = fVar61 * fVar42;
          fVar34 = fVar62 * fVar43;
          fVar35 = fVar63 * fVar36;
          fVar57 = fVar34 + fVar27 + fVar35;
          fVar59 = fVar34 + fVar27 + fVar35;
          fVar60 = fVar34 + fVar27 + fVar35;
          fVar35 = fVar34 + fVar27 + fVar35;
          fVar49 = fVar49 + fVar57;
          fVar50 = fVar50 + fVar59;
          fVar51 = fVar51 + fVar60;
          fVar52 = fVar52 + fVar35;
          local_3d8 = local_3d8 + (auVar48._0_4_ + fVar61 + auVar47._0_4_) * fVar57;
          fStack_3d4 = fStack_3d4 + (auVar48._4_4_ + fVar62 + auVar47._4_4_) * fVar59;
          fStack_3d0 = fStack_3d0 + (auVar48._8_4_ + fVar63 + auVar47._8_4_) * fVar60;
          fStack_3cc = fStack_3cc + (auVar48._12_4_ + fVar64 + auVar47._12_4_) * fVar35;
          local_458._4_4_ = fStack_3d4;
          local_458._0_4_ = local_3d8;
          fStack_450 = fStack_3d0;
          fStack_44c = fStack_3cc;
          fVar42 = ((auVar48._8_4_ - auVar47._8_4_) * fVar62 -
                   fVar63 * (auVar48._4_4_ - auVar47._4_4_)) + fVar42;
          fVar43 = ((auVar48._0_4_ - auVar47._0_4_) * fVar63 -
                   fVar61 * (auVar48._8_4_ - auVar47._8_4_)) + fVar43;
          fVar36 = ((auVar48._4_4_ - auVar47._4_4_) * fVar61 -
                   fVar62 * (auVar48._0_4_ - auVar47._0_4_)) + fVar36;
          fVar42 = fVar42 * fVar42;
          fVar43 = fVar43 * fVar43;
          fVar36 = fVar36 * fVar36;
          auVar46._0_4_ = fVar43 + fVar42 + fVar36;
          auVar46._4_4_ = fVar43 + fVar42 + fVar36;
          auVar46._8_4_ = fVar43 + fVar42 + fVar36;
          auVar46._12_4_ = fVar43 + fVar42 + fVar36;
          auVar58 = rsqrtps(auVar37,auVar46);
          fVar27 = auVar58._0_4_;
          fVar42 = auVar58._4_4_;
          fVar34 = auVar58._8_4_;
          fVar43 = auVar58._12_4_;
          fVar53 = fVar53 + (float)(~-(uint)(auVar46._0_4_ <= 0.0) &
                                   (uint)((3.0 - fVar27 * auVar46._0_4_ * fVar27) * fVar27 * 0.5 *
                                         auVar46._0_4_));
          fVar54 = fVar54 + (float)(~-(uint)(auVar46._4_4_ <= 0.0) &
                                   (uint)((3.0 - fVar42 * auVar46._4_4_ * fVar42) * fVar42 * 0.5 *
                                         auVar46._4_4_));
          fVar55 = fVar55 + (float)(~-(uint)(auVar46._8_4_ <= 0.0) &
                                   (uint)((3.0 - fVar34 * auVar46._8_4_ * fVar34) * fVar34 * 0.5 *
                                         auVar46._8_4_));
          fVar56 = fVar56 + (float)(~-(uint)(auVar46._12_4_ <= 0.0) &
                                   (uint)((3.0 - fVar43 * auVar46._12_4_ * fVar43) * fVar43 * 0.5 *
                                         auVar46._12_4_));
          local_3f8 = CONCAT44(fVar54,fVar53);
          uStack_3f0 = CONCAT44(fVar56,fVar55);
          fVar75 = ((auVar47._0_4_ + auVar48._0_4_) * auVar48._0_4_ +
                    (auVar48._0_4_ + fVar61) * fVar61 + (fVar61 + auVar47._0_4_) * auVar47._0_4_) *
                   fVar57 + fVar75;
          fVar27 = auVar48._8_4_ + fVar63 + auVar47._8_4_;
          fVar72 = (auVar48._8_4_ * auVar48._4_4_ + fVar63 * fVar62 + auVar47._8_4_ * auVar47._4_4_
                   + (auVar48._4_4_ + fVar62 + auVar47._4_4_) * fVar27) * fVar57 + fVar72;
          fVar76 = ((auVar47._4_4_ + auVar48._4_4_) * auVar48._4_4_ +
                    (auVar48._4_4_ + fVar62) * fVar62 + (fVar62 + auVar47._4_4_) * auVar47._4_4_) *
                   fVar57 + fVar76;
          fVar73 = (auVar48._8_4_ * auVar48._0_4_ + fVar63 * fVar61 + auVar47._8_4_ * auVar47._0_4_
                   + (auVar48._0_4_ + fVar61 + auVar47._0_4_) * fVar27) * fVar57 + fVar73;
          fVar77 = ((auVar47._8_4_ + auVar48._8_4_) * auVar48._8_4_ +
                    (auVar48._8_4_ + fVar63) * fVar63 + (fVar63 + auVar47._8_4_) * auVar47._8_4_) *
                   fVar35 + fVar77;
          fVar74 = (auVar48._4_4_ * auVar48._0_4_ + fVar62 * fVar61 + auVar47._4_4_ * auVar47._0_4_
                   + (auVar48._0_4_ + fVar61 + auVar47._0_4_) *
                     (auVar48._4_4_ + fVar62 + auVar47._4_4_)) * fVar35 + fVar74;
          plVar20 = (longlong *)*plVar20;
          local_438._0_4_ = auVar8._0_4_;
          local_438._4_4_ = auVar8._4_4_;
          uStack_430._0_4_ = auVar8._8_4_;
        } while (plVar20 != (longlong *)0x0);
        local_438._4_4_ = fVar76;
        local_438._0_4_ = fVar75;
        uStack_430._0_4_ = fVar77;
        uStack_430._4_4_ = 0;
        local_368._4_4_ = fVar73;
        local_368._0_4_ = fVar72;
        fStack_360 = fVar74;
        unique0x1000045f = 0;
        local_448 = fVar49;
        fStack_444 = fVar50;
        fStack_440 = fVar51;
        fStack_43c = fVar52;
      }
      fVar49 = fStack_43c;
      fVar77 = fStack_440;
      fVar76 = fStack_444;
      fVar75 = local_448;
      auVar11._4_4_ = fRam00000001467f06f4;
      auVar11._0_4_ = DAT_1467f06f0;
      auVar11._8_4_ = fRam00000001467f06f8;
      auVar11._12_4_ = fRam00000001467f06fc;
      auVar5._4_4_ = fStack_444;
      auVar5._0_4_ = local_448;
      auVar5._8_4_ = fStack_440;
      auVar5._12_4_ = fStack_43c;
      _local_3c8 = divps(auVar11,auVar5);
      local_3d8 = local_3d8 * local_3c8._0_4_ * _DAT_1467f0800;
      fStack_3d4 = fStack_3d4 * local_3c8._4_4_ * fRam00000001467f0804;
      fStack_3d0 = fStack_3d0 * local_3c8._8_4_ * fRam00000001467f0808;
      fStack_3cc = fStack_3cc * local_3c8._12_4_ * fRam00000001467f080c;
      fVar69 = fVar69 + local_3d8;
      fVar70 = fVar70 + fStack_3d4;
      fVar71 = fVar71 + fStack_3d0;
      *(float *)(param_1 + 0x170) = fVar69;
      *(float *)(param_1 + 0x174) = fVar70;
      *(float *)(param_1 + 0x178) = fVar71;
      *(float *)(param_1 + 0x17c) = fVar28 + fStack_3cc;
      if (*(char *)(param_1 + 0xd) != '\0') {
        _local_458 = ZEXT816(0);
        auVar58 = ZEXT816(0);
        if (plVar18 != (longlong *)0x0) {
          fVar28 = *(float *)(param_1 + 0x130);
          fVar72 = *(float *)(param_1 + 0x134);
          fVar73 = *(float *)(param_1 + 0x138);
          fVar74 = *(float *)(param_1 + 0x110);
          fVar50 = *(float *)(param_1 + 0x114);
          fVar51 = *(float *)(param_1 + 0x118);
          do {
            lVar15 = plVar18[4];
            lVar2 = plVar18[3];
            lVar3 = plVar18[2];
            fVar34 = (float)*(int *)(lVar3 + 0x20) * fVar28 + fVar74;
            fVar43 = (float)(int)*(uint *)(lVar3 + 0x24) * fVar72 + fVar50;
            fVar35 = (float)*(int *)(lVar3 + 0x28) * fVar73 + fVar51;
            fVar52 = ((float)*(int *)(lVar15 + 0x20) * fVar28 + fVar74) - fVar34;
            fVar53 = ((float)*(int *)(lVar15 + 0x24) * fVar72 + fVar50) - fVar43;
            fVar54 = ((float)*(int *)(lVar15 + 0x28) * fVar73 + fVar51) - fVar35;
            fVar55 = ((float)*(int *)(lVar2 + 0x20) * fVar28 + fVar74) - fVar34;
            fVar56 = ((float)*(int *)(lVar2 + 0x24) * fVar72 + fVar50) - fVar43;
            fVar27 = ((float)*(int *)(lVar2 + 0x28) * fVar73 + fVar51) - fVar35;
            fVar42 = fVar53 * fVar55 - fVar56 * fVar52;
            fVar56 = fVar54 * fVar56 - fVar27 * fVar53;
            fVar27 = fVar52 * fVar27 - fVar55 * fVar54;
            fVar52 = fVar56 * fVar56;
            fVar53 = fVar27 * fVar27;
            fVar54 = fVar42 * fVar42;
            auVar44._0_4_ = fVar53 + fVar52 + fVar54;
            auVar44._4_4_ = fVar53 + fVar52 + fVar54;
            auVar44._8_4_ = fVar53 + fVar52 + fVar54;
            auVar44._12_4_ = fVar53 + fVar52 + fVar54;
            auVar66 = rsqrtps(ZEXT416(*(uint *)(lVar3 + 0x24)),auVar44);
            uVar22 = -(uint)(0.0 - auVar44._0_4_ < 0.0);
            uVar23 = -(uint)(0.0 - auVar44._4_4_ < 0.0);
            uVar24 = -(uint)(0.0 - auVar44._8_4_ < 0.0);
            fVar52 = auVar66._0_4_;
            fVar54 = auVar66._4_4_;
            fVar55 = auVar66._8_4_;
            fVar53 = (float)((uint)((float)(~-(uint)(auVar44._0_4_ <= 0.0) &
                                           (uint)((3.0 - fVar52 * auVar44._0_4_ * fVar52) *
                                                 fVar52 * 0.5)) * fVar56) & uVar22 |
                            ~uVar22 & (uint)fVar56);
            fVar54 = (float)((uint)((float)(~-(uint)(auVar44._4_4_ <= 0.0) &
                                           (uint)((3.0 - fVar54 * auVar44._4_4_ * fVar54) *
                                                 fVar54 * 0.5)) * fVar27) & uVar23 |
                            ~uVar23 & (uint)fVar27);
            fVar55 = (float)((uint)((float)(~-(uint)(auVar44._8_4_ <= 0.0) &
                                           (uint)((3.0 - fVar55 * auVar44._8_4_ * fVar55) *
                                                 fVar55 * 0.5)) * fVar42) & uVar24 |
                            ~uVar24 & (uint)fVar42);
            fVar52 = 0.0 - (fVar54 * fVar43 + fVar53 * fVar34 + fVar55 * fVar35);
            fVar53 = fVar53 * fVar69;
            fVar54 = fVar54 * fVar70;
            fVar55 = fVar55 * fVar71;
            auVar38._0_4_ = fVar54 + fVar53 + fVar55 + fVar52;
            auVar38._4_4_ = fVar54 + fVar53 + fVar55 + fVar52;
            auVar38._8_4_ = fVar54 + fVar53 + fVar55 + fVar52;
            auVar38._12_4_ = fVar54 + fVar53 + fVar55 + fVar52;
            auVar58 = maxps(auVar58,auVar38);
            plVar18 = (longlong *)*plVar18;
          } while (plVar18 != (longlong *)0x0);
          fVar72 = (float)local_368._0_4_;
          fVar73 = (float)local_368._4_4_;
          fVar74 = fStack_360;
          _local_458 = auVar58;
        }
        if (0.0 < local_458._0_4_) {
          if (4 < DAT_146bcced8) {
            FUN_14373a730(local_358,&DAT_146bcced0,5);
            uVar13 = 0;
            lVar15 = FUN_14373bbd0(local_358,"Invalid COM wrt. triangles ({})",&DAT_145dc9c48,
                                   local_458,0);
            *(char **)(lVar15 + 0x20) =
                 "X:\\CI\\Stable_Package_Build_x64\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
            ;
            *(undefined8 *)(lVar15 + 0x28) = 0x78a;
            FUN_14373a950(local_358);
          }
          *(undefined1 *)(param_1 + 0x1ed) = 1;
        }
        if (*(char *)(param_1 + 0x1ee) != '\0') {
          uVar19 = (ulonglong)*(uint *)(param_1 + 0x78);
          auVar58 = ZEXT816(0);
          _local_458 = ZEXT816(0);
          if (0 < (int)*(uint *)(param_1 + 0x78)) {
            pfVar14 = *(float **)(param_1 + 0x70);
            do {
              fVar28 = *pfVar14;
              pfVar9 = pfVar14 + 1;
              pfVar10 = pfVar14 + 2;
              fVar50 = pfVar14[3];
              pfVar14 = pfVar14 + 4;
              fVar28 = fVar28 * fVar69;
              fVar51 = *pfVar9 * fVar70;
              fVar52 = *pfVar10 * fVar71;
              auVar39._0_4_ = fVar51 + fVar28 + fVar52 + fVar50;
              auVar39._4_4_ = fVar51 + fVar28 + fVar52 + fVar50;
              auVar39._8_4_ = fVar51 + fVar28 + fVar52 + fVar50;
              auVar39._12_4_ = fVar51 + fVar28 + fVar52 + fVar50;
              auVar58 = maxps(auVar58,auVar39);
              uVar19 = uVar19 - 1;
              _local_458 = auVar58;
            } while (uVar19 != 0);
          }
        }
        if (0.0 < local_458._0_4_) {
          if (4 < DAT_146bcced8) {
            FUN_14373a730(local_358,&DAT_146bcced0,5);
            uVar13 = 0;
            lVar15 = FUN_14373bbd0(local_358,"Invalid COM wrt. planes ({})",&DAT_145dc9c48,local_458
                                   ,0);
            *(char **)(lVar15 + 0x20) =
                 "X:\\CI\\Stable_Package_Build_x64\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
            ;
            *(undefined8 *)(lVar15 + 0x28) = 0x798;
            FUN_14373a950(local_358);
          }
          *(undefined1 *)(param_1 + 0x1ed) = 1;
        }
      }
      fVar28 = auVar65._0_4_ - (float)local_3e8._0_4_;
      fVar50 = auVar65._4_4_ - (float)local_3e8._4_4_;
      auVar68._8_4_ = auVar65._8_4_ - fStack_3e0;
      fVar69 = local_3f8._4_4_ * fRam00000001467f07e4;
      fVar70 = (float)uStack_3f0 * fRam00000001467f07e8;
      fVar71 = uStack_3f0._4_4_ * fRam00000001467f07ec;
      auVar29._4_4_ = fVar50;
      auVar29._0_4_ = fVar50;
      auVar29._8_4_ = fVar50;
      auVar29._12_4_ = fVar50;
      *(float *)(param_1 + 0x1d0) = (float)local_3f8 * _DAT_1467f07e0;
      *(float *)(param_1 + 0x1d4) = fVar69;
      *(float *)(param_1 + 0x1d8) = fVar70;
      *(float *)(param_1 + 0x1dc) = fVar71;
      fVar75 = fVar75 * _DAT_1467f0820;
      fVar76 = fVar76 * fRam00000001467f0824;
      fVar77 = fVar77 * fRam00000001467f0828;
      fVar49 = fVar49 * fRam00000001467f082c;
      auVar25._4_4_ = fVar28;
      auVar25._0_4_ = fVar28;
      auVar25._8_4_ = fVar28;
      auVar25._12_4_ = fVar28;
      auVar58 = maxps(auVar29,auVar25);
      auVar68._4_4_ = auVar68._8_4_;
      auVar68._0_4_ = auVar68._8_4_;
      auVar68._12_4_ = auVar68._8_4_;
      auVar58 = maxps(auVar68,auVar58);
      *(float *)(param_1 + 0x1c0) = fVar75;
      *(float *)(param_1 + 0x1c4) = fVar76;
      *(float *)(param_1 + 0x1c8) = fVar77;
      *(float *)(param_1 + 0x1cc) = fVar49;
      uVar17 = uRam00000001467f0898;
      fVar28 = fRam00000001467f06fc;
      fVar71 = fRam00000001467f06f8;
      fVar70 = fRam00000001467f06f4;
      fVar69 = DAT_1467f06f0;
      fVar50 = auVar58._0_4_;
      _local_448 = CONCAT44(fVar76,fVar75);
      _fStack_440 = CONCAT44(fVar49,fVar77);
      fVar76 = fVar50 * fVar50 * fVar50;
      if (fVar75 <= fVar76 * _DAT_1467f08f0) {
        *(undefined8 *)(param_1 + 0x140) = _DAT_1467f0890;
        *(undefined8 *)(param_1 + 0x148) = uVar17;
        uVar17 = uRam00000001467f08a8;
        *(undefined8 *)(param_1 + 0x150) = _DAT_1467f08a0;
        *(undefined8 *)(param_1 + 0x158) = uVar17;
        uVar17 = uRam00000001467f08b8;
        *(undefined8 *)(param_1 + 0x160) = _DAT_1467f08b0;
        *(undefined8 *)(param_1 + 0x168) = uVar17;
        *(undefined1 *)(param_1 + 0x1ed) = 1;
        *(undefined8 *)(param_1 + 0x1c0) = 0;
        *(undefined8 *)(param_1 + 0x1c8) = 0;
        *(undefined8 *)(param_1 + 400) = 0;
        *(undefined8 *)(param_1 + 0x198) = 0;
        *(undefined8 *)(param_1 + 0x1a0) = 0;
        *(undefined8 *)(param_1 + 0x1a8) = 0;
        *(undefined8 *)(param_1 + 0x1b0) = 0;
        *(undefined8 *)(param_1 + 0x1b8) = 0;
        *(undefined8 *)(param_1 + 0x180) = 0;
        *(undefined8 *)(param_1 + 0x188) = 0;
      }
      else {
        local_res8[0] = 0xbd4ccccd;
        fVar75 = (float)local_438._0_4_ * local_3c8._0_4_ * 0.1;
        fVar77 = (float)local_438._4_4_ * local_3c8._4_4_ * 0.1;
        fVar49 = (float)uStack_430 * local_3c8._8_4_ * 0.1;
        fStack_404 = fVar72 * local_3c8._0_4_ * -0.05;
        fStack_420 = fVar73 * local_3c8._4_4_ * -0.05;
        fStack_424 = fVar74 * local_3c8._8_4_ * -0.05;
        fVar72 = fVar49 + fVar77;
        fVar49 = fVar49 + fVar75;
        fVar77 = fVar77 + fVar75;
        fStack_41c = 0.0;
        auVar30._4_4_ = 0;
        auVar30._0_4_ = fStack_424;
        auVar30._8_4_ = fStack_404;
        auVar30._12_4_ = 0;
        _local_418 = auVar30 | ZEXT416((uint)fVar49) << 0x20;
        fStack_3fc = 0.0;
        local_428 = fVar72;
        local_408 = fStack_420;
        fStack_400 = fVar77;
        FUN_14376f500(local_2e8,&local_3d8);
        FUN_14376f500(local_358,&DAT_1467f06e0);
        FUN_14376f710(&local_318,local_2e8,local_2e8);
        FUN_14376f710(local_3c8,local_358,local_358);
        FUN_14376f870(local_3c8);
        local_428 = local_428 + (local_318 - (float)local_3c8._0_4_) * fVar69;
        fStack_424 = fStack_424 + (fStack_314 - (float)local_3c8._4_4_) * fVar70;
        fStack_420 = fStack_420 + (fStack_310 - fStack_3c0) * fVar71;
        fStack_41c = fStack_41c + (fStack_30c - fStack_3bc) * fVar28;
        local_418._4_4_ = (float)local_418._4_4_ + (fStack_304 - fStack_3b4) * fVar70;
        local_418._0_4_ = (float)local_418._0_4_ + (local_308 - local_3b8) * fVar69;
        uStack_410._0_4_ = (float)uStack_410 + (fStack_300 - fStack_3b0) * fVar71;
        uStack_410._4_4_ = uStack_410._4_4_ + (fStack_2fc - fStack_3ac) * fVar28;
        local_408 = local_408 + (local_2f8 - local_3a8) * fVar69;
        fStack_404 = fStack_404 + (fStack_2f4 - fStack_3a4) * fVar70;
        fStack_400 = fStack_400 + (fStack_2f0 - fStack_3a0) * fVar71;
        fStack_3fc = fStack_3fc + (fStack_2ec - fStack_39c) * fVar28;
        piVar16 = (int *)FUN_14376f0d0(&local_428,local_res8,&local_398,local_438,
                                       CONCAT44(uVar13,0x80),0x34000000);
        if (*piVar16 < 0) {
          *(undefined1 *)(param_1 + 0x1ed) = 1;
          local_398 = _DAT_1467f0890;
          uStack_390 = uRam00000001467f0898;
          local_388 = _DAT_1467f08a0;
          uStack_380 = uRam00000001467f08a8;
          local_438._4_4_ = fRam00000001467f06f4;
          local_438._0_4_ = DAT_1467f06f0;
          uStack_430._4_4_ = fRam00000001467f06fc;
          uStack_430._0_4_ = fRam00000001467f06f8;
          local_378 = _DAT_1467f08b0;
          uStack_370 = uRam00000001467f08b8;
          FUN_1437134a0(local_3c8,local_2b8,0x200);
          uVar17 = Electra::FHTTPResourceRequest::URL
                             (local_3c8,"Failed to diagonalize inertia matrix (");
          uVar17 = FUN_143715b60(uVar17,*(undefined4 *)(param_1 + 0x1e8));
          Electra::FHTTPResourceRequest::URL(uVar17,&DAT_145b12c80);
          FUN_143732520(0x45465,local_2b8,
                        "X:\\CI\\Stable_Package_Build_x64\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                        ,0x7cb);
          FUN_143713520(local_3c8);
        }
        FUN_14376f870(&local_398);
        FUN_143716400(&local_398);
        *(ulonglong *)(param_1 + 400) = CONCAT44(fStack_424,local_428);
        *(ulonglong *)(param_1 + 0x198) = CONCAT44(fStack_41c,fStack_420);
        *(ulonglong *)(param_1 + 0x1b0) = CONCAT44(fStack_404,local_408);
        *(ulonglong *)(param_1 + 0x1b8) = CONCAT44(fStack_3fc,fStack_400);
        *(undefined1 (*) [8])(param_1 + 0x1a0) = local_418;
        *(undefined8 *)(param_1 + 0x1a8) = uStack_410;
        FUN_14376f090(&local_428,&local_398);
        *(float *)(param_1 + 0x180) = local_428;
        *(float *)(param_1 + 0x184) = fStack_424;
        *(float *)(param_1 + 0x188) = fStack_420;
        *(float *)(param_1 + 0x18c) = fStack_41c;
        auVar45._4_4_ = 0;
        auVar45._0_4_ = local_428;
        auVar45._8_4_ = fStack_420;
        auVar45._12_4_ = fStack_41c;
        auVar45 = auVar45 | ZEXT416((uint)local_418._4_4_) << 0x20;
        *(undefined1 (*) [16])(param_1 + 0x180) = auVar45;
        auVar40._0_8_ = auVar45._0_8_;
        auVar40._8_4_ = 0;
        auVar40._12_4_ = auVar45._12_4_;
        *(undefined1 (*) [16])(param_1 + 0x180) = auVar40 | ZEXT416((uint)fStack_400) << 0x40;
        FUN_14376f870(&local_398);
        *(undefined8 *)(param_1 + 0x140) = local_398;
        *(undefined8 *)(param_1 + 0x148) = uStack_390;
        *(undefined8 *)(param_1 + 0x150) = local_388;
        *(undefined8 *)(param_1 + 0x158) = uStack_380;
        *(undefined8 *)(param_1 + 0x160) = local_378;
        *(undefined8 *)(param_1 + 0x168) = uStack_370;
        auVar41._8_4_ = ABS(fVar77);
        auVar31._0_8_ = CONCAT44(fVar49,fVar49) & 0x7fffffff7fffffff;
        auVar31._8_4_ = ABS(fVar49);
        auVar31._12_4_ = ABS(fVar49);
        auVar26._0_8_ = CONCAT44(fVar72,fVar72) & 0x7fffffff7fffffff;
        auVar26._8_4_ = ABS(fVar72);
        auVar26._12_4_ = ABS(fVar72);
        auVar41._0_8_ = CONCAT44(fVar77,fVar77) & 0x7fffffff7fffffff;
        auVar41._12_4_ = auVar41._8_4_;
        auVar58 = minps(auVar31,auVar26);
        auVar58 = minps(auVar41,auVar58);
        if (auVar58._0_4_ * local_448 <= fVar50 * fVar50 * _DAT_1467f08f0 * fVar76 * _DAT_1467f0820)
        {
          *(undefined1 *)(param_1 + 0x1ed) = 1;
        }
      }
      *(undefined1 *)(param_1 + 0x1ec) = 1;
    }
    else if (*(int *)(param_1 + 0x1e0) == 2) {
      iVar12 = *(int *)(param_1 + 0x40);
      fVar70 = 0.0;
      fVar28 = 0.0;
      fVar73 = 0.0;
      fVar75 = 0.0;
      fVar69 = 0.0;
      fVar71 = 0.0;
      fVar72 = 0.0;
      fVar74 = 0.0;
      _local_458 = ZEXT812(0);
      fStack_44c = -0.0;
      uVar17 = FUN_143703a50();
      lVar15 = (longlong)(int)fStack_450;
      iVar21 = iVar12 + (int)fStack_450;
      if ((int)((uint)fStack_44c & 0x3fffffff) < iVar21) {
        iVar1 = ((uint)fStack_44c & 0x3fffffff) * 2;
        if (iVar21 < iVar1) {
          iVar21 = iVar1;
        }
        FUN_14370c310(uVar17,local_458,iVar21,0x10);
      }
      puVar4 = *(undefined8 **)(param_1 + 0x38);
      iVar12 = (int)fStack_450 + iVar12;
      fStack_450 = (float)iVar12;
      pfVar14 = (float *)((longlong)local_458 + lVar15 * 4 * 4);
      for (; puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4) {
        iVar21 = *(int *)(puVar4 + 5);
        iVar1 = *(int *)((longlong)puVar4 + 0x24);
        in_XMM1 = ZEXT416(0);
        fVar76 = *(float *)(param_1 + 0x134);
        fVar77 = *(float *)(param_1 + 0x138);
        fVar49 = *(float *)(param_1 + 0x13c);
        fVar50 = *(float *)(param_1 + 0x114);
        fVar51 = *(float *)(param_1 + 0x118);
        fVar52 = *(float *)(param_1 + 0x11c);
        *pfVar14 = (float)*(int *)(puVar4 + 4) * *(float *)(param_1 + 0x130) +
                   *(float *)(param_1 + 0x110);
        pfVar14[1] = (float)iVar1 * fVar76 + fVar50;
        pfVar14[2] = (float)iVar21 * fVar77 + fVar51;
        pfVar14[3] = fVar49 * 0.0 + fVar52;
        pfVar14 = pfVar14 + 4;
      }
      lVar15 = (longlong)(iVar12 + -1);
      if (1 < lVar15) {
        lVar15 = lVar15 + -1;
        pfVar14 = (float *)((longlong)local_458 + 0x10);
        do {
          fVar50 = *pfVar14 - *(float *)local_458;
          fVar51 = pfVar14[1] - *(float *)((longlong)local_458 + 4);
          fVar52 = pfVar14[2] - *(float *)((longlong)local_458 + 8);
          fVar53 = pfVar14[4] - *(float *)local_458;
          fVar54 = pfVar14[5] - *(float *)((longlong)local_458 + 4);
          fVar55 = pfVar14[6] - *(float *)((longlong)local_458 + 8);
          fVar76 = (fVar55 * fVar51 - fVar52 * fVar54) * *(float *)(param_1 + 0x100);
          fVar77 = (fVar53 * fVar52 - fVar50 * fVar55) * *(float *)(param_1 + 0x104);
          fVar49 = (fVar54 * fVar50 - fVar51 * fVar53) * *(float *)(param_1 + 0x108);
          in_XMM1._0_4_ = fVar77 + fVar76 + fVar49;
          in_XMM1._4_4_ = fVar77 + fVar76 + fVar49;
          in_XMM1._8_4_ = fVar77 + fVar76 + fVar49;
          in_XMM1._12_4_ = fVar77 + fVar76 + fVar49;
          fVar69 = fVar69 + ABS(in_XMM1._0_4_);
          fVar71 = fVar71 + ABS(in_XMM1._4_4_);
          fVar72 = fVar72 + ABS(in_XMM1._8_4_);
          fVar74 = fVar74 + ABS(in_XMM1._12_4_);
          fVar70 = fVar70 + (fVar53 + fVar50) * ABS(in_XMM1._0_4_) * _DAT_1467f07f0;
          fVar28 = fVar28 + (fVar54 + fVar51) * ABS(in_XMM1._4_4_) * fRam00000001467f07f4;
          fVar73 = fVar73 + (fVar55 + fVar52) * ABS(in_XMM1._8_4_) * fRam00000001467f07f8;
          fVar75 = fVar75 + ((pfVar14[7] - *(float *)((longlong)local_458 + 0xc)) +
                            (pfVar14[3] - *(float *)((longlong)local_458 + 0xc))) *
                            ABS(in_XMM1._12_4_) * fRam00000001467f07fc;
          lVar15 = lVar15 + -1;
          pfVar14 = pfVar14 + 4;
        } while (lVar15 != 0);
      }
      *(undefined1 *)(param_1 + 0x1ec) = 1;
      fVar76 = fVar71 * fRam00000001467f07e4;
      fVar77 = fVar72 * fRam00000001467f07e8;
      fVar49 = fVar74 * fRam00000001467f07ec;
      *(float *)(param_1 + 0x1d0) = fVar69 * _DAT_1467f07e0;
      *(float *)(param_1 + 0x1d4) = fVar76;
      *(float *)(param_1 + 0x1d8) = fVar77;
      *(float *)(param_1 + 0x1dc) = fVar49;
      auVar8._4_8_ = in_XMM1._8_8_;
      auVar8._0_4_ = *(undefined4 *)(param_1 + 0x194);
      auVar32._0_8_ = auVar8._0_8_ << 0x20;
      auVar32._8_4_ = *(undefined4 *)(param_1 + 0x198);
      auVar32._12_4_ = *(undefined4 *)(param_1 + 0x19c);
      auVar33._4_12_ = auVar32._4_12_;
      auVar33._0_4_ = DAT_1467f06f0;
      *(undefined1 (*) [16])(param_1 + 400) = auVar33;
      uVar17 = uRam00000001467f0898;
      *(undefined8 *)(param_1 + 0x180) = _DAT_1467f0890;
      *(undefined8 *)(param_1 + 0x188) = uVar17;
      auVar66._4_4_ = fRam00000001467f06f4;
      auVar66._0_4_ = DAT_1467f06f0;
      auVar66._8_4_ = fRam00000001467f06f8;
      auVar66._12_4_ = fRam00000001467f06fc;
      auVar58._4_4_ = fVar71;
      auVar58._0_4_ = fVar69;
      auVar58._8_4_ = fVar72;
      auVar58._12_4_ = fVar74;
      auVar58 = divps(auVar66,auVar58);
      fVar69 = *(float *)((longlong)local_458 + 4);
      fVar71 = *(float *)((longlong)local_458 + 8);
      fVar72 = *(float *)((longlong)local_458 + 0xc);
      *(float *)(param_1 + 0x170) = auVar58._0_4_ * fVar70 + *(float *)local_458;
      *(float *)(param_1 + 0x174) = auVar58._4_4_ * fVar28 + fVar69;
      *(float *)(param_1 + 0x178) = auVar58._8_4_ * fVar73 + fVar71;
      *(float *)(param_1 + 0x17c) = auVar58._12_4_ * fVar75 + fVar72;
      uVar17 = FUN_143703a50();
      fStack_450 = 0.0;
      if (-1 < (int)fStack_44c) {
        FUN_143702e10(uVar17,local_458,0x10,(uint)fStack_44c & 0x3fffffff);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x1ec) = 1;
      *(undefined8 *)(param_1 + 0x1d0) = 0;
      *(undefined8 *)(param_1 + 0x1d8) = 0;
      *(undefined8 *)(param_1 + 0x1c0) = 0;
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      uVar17 = uRam00000001467f0898;
      *(undefined8 *)(param_1 + 400) = _DAT_1467f0890;
      *(undefined8 *)(param_1 + 0x198) = uVar17;
      uVar17 = uRam00000001467f08a8;
      *(undefined8 *)(param_1 + 0x1a0) = _DAT_1467f08a0;
      *(undefined8 *)(param_1 + 0x1a8) = uVar17;
      uVar17 = uRam00000001467f08b8;
      *(undefined8 *)(param_1 + 0x1b0) = _DAT_1467f08b0;
      *(undefined8 *)(param_1 + 0x1b8) = uVar17;
      *(undefined8 *)(param_1 + 0x180) = 0;
      *(undefined8 *)(param_1 + 0x188) = 0;
      uVar17 = uRam00000001467f0898;
      *(undefined8 *)(param_1 + 0x140) = _DAT_1467f0890;
      *(undefined8 *)(param_1 + 0x148) = uVar17;
      uVar17 = uRam00000001467f08a8;
      *(undefined8 *)(param_1 + 0x150) = _DAT_1467f08a0;
      *(undefined8 *)(param_1 + 0x158) = uVar17;
      uVar17 = uRam00000001467f08b8;
      *(undefined8 *)(param_1 + 0x160) = _DAT_1467f08b0;
      *(undefined8 *)(param_1 + 0x168) = uVar17;
      *(undefined8 *)(param_1 + 0x170) = 0;
      *(undefined8 *)(param_1 + 0x178) = 0;
    }
  }
  uVar13 = 0x80040200;
  if (*(char *)(param_1 + 0x1ec) != '\0') {
    uVar13 = 0;
  }
  *param_2 = uVar13;
  return param_2;
}



// FUNCTION 143dff030 FUN_143dff030 body=184 status=ok
// SIG undefined FUN_143dff030(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dff030(longlong param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  float fVar6;
  
  pfVar1 = (float *)(param_1 + 0xa0);
  if (*(float *)(param_1 + 0xac) == DAT_1467f08d0) {
    pfVar1[0] = 0.0;
    pfVar1[1] = 0.0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    for (puVar4 = *(undefined8 **)(param_1 + 0x38); puVar4 != (undefined8 *)0x0;
        puVar4 = (undefined8 *)*puVar4) {
      iVar2 = *(int *)(puVar4 + 5);
      iVar3 = *(int *)((longlong)puVar4 + 0x24);
      *pfVar1 = (float)*(int *)(puVar4 + 4) * *(float *)(param_1 + 0x130) +
                *(float *)(param_1 + 0x110) + *pfVar1;
      *(float *)(param_1 + 0xa4) =
           (float)iVar3 * *(float *)(param_1 + 0x134) + *(float *)(param_1 + 0x114) +
           *(float *)(param_1 + 0xa4);
      *(float *)(param_1 + 0xa8) =
           (float)iVar2 * *(float *)(param_1 + 0x138) + *(float *)(param_1 + 0x118) +
           *(float *)(param_1 + 0xa8);
      *(float *)(param_1 + 0xac) =
           *(float *)(param_1 + 0x13c) * 0.0 + *(float *)(param_1 + 0x11c) +
           *(float *)(param_1 + 0xac);
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      fVar6 = (float)*(int *)(param_1 + 0x40);
      auVar5._4_4_ = fVar6;
      auVar5._0_4_ = fVar6;
      auVar5._8_4_ = fVar6;
      auVar5._12_4_ = fVar6;
      auVar5 = divps(_DAT_1467f06f0,auVar5);
      *pfVar1 = *pfVar1 * auVar5._0_4_;
      *(float *)(param_1 + 0xa4) = *(float *)(param_1 + 0xa4) * auVar5._4_4_;
      *(float *)(param_1 + 0xa8) = *(float *)(param_1 + 0xa8) * auVar5._8_4_;
      *(float *)(param_1 + 0xac) = *(float *)(param_1 + 0xac) * auVar5._12_4_;
    }
    *pfVar1 = *pfVar1;
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
    *(undefined4 *)(param_1 + 0xac) = 0;
  }
  return;
}



// FUNCTION 143dff0f0 FUN_143dff0f0 body=313 status=ok
// SIG undefined FUN_143dff0f0(void)

void FUN_143dff0f0(longlong param_1,ulonglong param_2,int param_3,ulonglong param_4)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float *pfVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  float fStack_20;
  
  lVar13 = (longlong)(int)param_2;
  uVar16 = param_4;
  do {
    uVar15 = param_2 & 0xffffffff;
    puVar2 = (undefined8 *)(param_1 + ((longlong)((int)param_2 + param_3) >> 1) * 0x10);
    uVar9 = *puVar2;
    fStack_20 = (float)puVar2[1];
    lVar17 = (longlong)param_3;
    iVar18 = param_3;
    do {
      uVar14 = (uint)uVar15;
      pfVar12 = (float *)(param_1 + 8 + lVar13 * 0x10);
      fVar5 = *pfVar12;
      while (0.0 < fVar5 - fStack_20) {
        pfVar1 = pfVar12 + 4;
        pfVar12 = pfVar12 + 4;
        uVar14 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar14;
        lVar13 = lVar13 + 1;
        fVar5 = *pfVar1;
      }
      pfVar12 = (float *)(param_1 + 8 + lVar17 * 0x10);
      fVar5 = *pfVar12;
      while (0.0 < fStack_20 - fVar5) {
        pfVar12 = pfVar12 + -4;
        iVar18 = iVar18 + -1;
        lVar17 = lVar17 + -1;
        fVar5 = *pfVar12;
      }
      if (lVar17 < lVar13) break;
      if (lVar17 != lVar13) {
        puVar2 = (undefined8 *)(param_1 + lVar17 * 0x10);
        uVar10 = *puVar2;
        uVar11 = puVar2[1];
        puVar3 = (undefined4 *)(param_1 + lVar13 * 0x10);
        uVar6 = puVar3[1];
        uVar7 = puVar3[2];
        uVar8 = puVar3[3];
        puVar4 = (undefined4 *)(param_1 + lVar17 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar6;
        puVar4[2] = uVar7;
        puVar4[3] = uVar8;
        puVar2 = (undefined8 *)(param_1 + lVar13 * 0x10);
        *puVar2 = uVar10;
        puVar2[1] = uVar11;
      }
      iVar18 = iVar18 + -1;
      lVar17 = lVar17 + -1;
      uVar14 = uVar14 + 1;
      uVar15 = (ulonglong)uVar14;
      lVar13 = lVar13 + 1;
    } while (lVar13 <= lVar17);
    if ((int)param_2 < iVar18) {
      FUN_143dff0f0(param_1,param_2,iVar18,uVar16,uVar9);
      uVar16 = param_4 & 0xff;
    }
    if (param_3 <= (int)uVar14) {
      return;
    }
    param_2 = (ulonglong)uVar14;
  } while( true );
}



// FUNCTION 143dff230 FUN_143dff230 body=33 status=ok
// SIG undefined FUN_143dff230(void)

undefined2 * FUN_143dff230(undefined2 *param_1)

{
  *param_1 = 1;
  *(undefined4 *)(param_1 + 2) = 0x3f7fff58;
  *(undefined4 *)(param_1 + 4) = 0x1000100;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  return param_1;
}



// FUNCTION 143dff260 FUN_143dff260 body=118 status=ok
// SIG undefined FUN_143dff260(void)

undefined8 * FUN_143dff260(undefined8 *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  longlong lVar3;
  
  param_1[1] = 0;
  *param_1 = hkgpConvexHull::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x1f0);
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_143dff2e0(lVar2);
  }
  param_1[3] = lVar3;
  *(undefined8 **)(lVar3 + 0x10) = param_1;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 143dff2e0 FUN_143dff2e0 body=145 status=ok
// SIG undefined FUN_143dff2e0(void)

longlong FUN_143dff2e0(longlong param_1)

{
  int iVar1;
  
  FUN_143dff230();
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x1ffff;
  *(undefined ***)(param_1 + 0x18) =
       hkgpAbstractMesh<hkgpConvexHullImpl::Edge,hkgpConvexHullImpl::Vertex,hkgpConvexHullImpl::Triangle,hkContainerHeapAllocator>
       ::vftable;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0x80000000;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0x80000000;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0x80000000;
  LOCK();
  UNLOCK();
  iVar1 = DAT_146bccec0 + 1;
  *(int *)(param_1 + 0x1e8) = DAT_146bccec0;
  DAT_146bccec0 = iVar1;
  FUN_143e009e0(param_1);
  return param_1;
}



// FUNCTION 143dff380 FUN_143dff380 body=130 status=ok
// SIG undefined FUN_143dff380(void)

void FUN_143dff380(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_1;
  while (lVar1 != 0) {
    lVar1 = *param_1;
    plVar2 = (longlong *)FUN_143703a50();
    if (*(longlong *)(lVar1 + 0x1008) == 0) {
      *param_1 = *(longlong *)(lVar1 + 0x1010);
    }
    else {
      *(undefined8 *)(*(longlong *)(lVar1 + 0x1008) + 0x1010) = *(undefined8 *)(lVar1 + 0x1010);
    }
    if (*(longlong *)(lVar1 + 0x1010) != 0) {
      *(undefined8 *)(*(longlong *)(lVar1 + 0x1010) + 0x1008) = *(undefined8 *)(lVar1 + 0x1008);
    }
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1,0x1020);
    lVar1 = *param_1;
  }
  return;
}



// FUNCTION 143dff410 FUN_143dff410 body=130 status=ok
// SIG undefined FUN_143dff410(void)

void FUN_143dff410(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_1;
  while (lVar1 != 0) {
    lVar1 = *param_1;
    plVar2 = (longlong *)FUN_143703a50();
    if (*(longlong *)(lVar1 + 0xa08) == 0) {
      *param_1 = *(longlong *)(lVar1 + 0xa10);
    }
    else {
      *(undefined8 *)(*(longlong *)(lVar1 + 0xa08) + 0xa10) = *(undefined8 *)(lVar1 + 0xa10);
    }
    if (*(longlong *)(lVar1 + 0xa10) != 0) {
      *(undefined8 *)(*(longlong *)(lVar1 + 0xa10) + 0xa08) = *(undefined8 *)(lVar1 + 0xa08);
    }
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1,0xa20);
    lVar1 = *param_1;
  }
  return;
}



// FUNCTION 143dff4a0 FUN_143dff4a0 body=108 status=ok
// SIG undefined FUN_143dff4a0(void)

void FUN_143dff4a0(undefined8 *param_1)

{
  longlong lVar1;
  LPVOID pvVar2;
  
  lVar1 = param_1[3];
  *param_1 = hkgpConvexHull::vftable;
  if (lVar1 != 0) {
    FUN_143dff510(lVar1);
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar2 + 0x58),lVar1,0x1f0);
  }
  FFieldClass::~FFieldClass(param_1);
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143dff510 FUN_143dff510 body=260 status=ok
// SIG undefined FUN_143dff510(void)

void FUN_143dff510(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_143e009e0(param_1,0);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x8c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x80),0x30,*(uint *)(param_1 + 0x8c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x7c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x70),0x10,*(uint *)(param_1 + 0x7c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x6c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x60),0x40,*(uint *)(param_1 + 0x6c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0x80000000;
  *(undefined ***)(param_1 + 0x18) =
       hkgpAbstractMesh<hkgpConvexHullImpl::Edge,hkgpConvexHullImpl::Vertex,hkgpConvexHullImpl::Triangle,hkContainerHeapAllocator>
       ::vftable;
  FUN_143e00820(param_1 + 0x48);
  FUN_143dff380(param_1 + 0x48);
  FUN_143e008f0(param_1 + 0x30);
  FUN_143dff410(param_1 + 0x30);
  FUN_14370c000(param_1 + 0x18);
  return;
}



// FUNCTION 143dff620 FUN_143dff620 body=198 status=ok
// SIG undefined FUN_143dff620(void)

undefined8 * FUN_143dff620(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  *param_1 = hkgpAbstractMesh<hkgpConvexHullImpl::Edge,hkgpConvexHullImpl::Vertex,hkgpConvexHullImpl::Triangle,hkContainerHeapAllocator>
             ::vftable;
  FUN_143e00820(param_1 + 6);
  FUN_143dff380(param_1 + 6);
  FUN_143e008f0(param_1 + 3);
  FUN_143dff410(param_1 + 3);
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      sVar2 = 0x48;
      if (*(short *)(param_1 + 2) != -1) {
        sVar2 = *(short *)(param_1 + 2);
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 143dff6f0 FUN_143dff6f0 body=139 status=ok
// SIG undefined FUN_143dff6f0(void)

longlong FUN_143dff6f0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x70;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
    }
  }
  return param_1;
}



// FUNCTION 143dff780 FUN_143dff780 body=136 status=ok
// SIG undefined FUN_143dff780(void)

longlong FUN_143dff780(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143dff4a0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x30;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 143dff810 FUN_143dff810 body=157 status=ok
// SIG undefined FUN_143dff810(void)

longlong FUN_143dff810(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar1 = (longlong *)FUN_143703a50();
  lVar2 = (**(code **)(*plVar1 + 8))(plVar1,0x1020);
  if (lVar2 != 0) {
    lVar3 = 0x1f;
    plVar1 = (longlong *)(lVar2 + 0xf80);
    plVar5 = (longlong *)0;
    do {
      plVar4 = plVar1;
      *plVar4 = (longlong)plVar5;
      lVar3 = lVar3 + -1;
      plVar1 = plVar4 + -0x10;
      plVar5 = plVar4;
    } while (-1 < lVar3);
    *(undefined4 *)(lVar2 + 0x1018) = 0;
    *(longlong **)(lVar2 + 0x1000) = plVar4;
    *(undefined8 *)(lVar2 + 0x1008) = 0;
    *(longlong *)(lVar2 + 0x1010) = *param_1;
    *param_1 = lVar2;
    if (*(longlong *)(lVar2 + 0x1010) != 0) {
      *(longlong *)(*(longlong *)(lVar2 + 0x1010) + 0x1008) = lVar2;
    }
  }
  return lVar2;
}



// FUNCTION 143dff8b0 FUN_143dff8b0 body=157 status=ok
// SIG undefined FUN_143dff8b0(void)

longlong FUN_143dff8b0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar1 = (longlong *)FUN_143703a50();
  lVar2 = (**(code **)(*plVar1 + 8))(plVar1,0xa20);
  if (lVar2 != 0) {
    lVar3 = 0x1f;
    plVar1 = (longlong *)(lVar2 + 0x9b0);
    plVar5 = (longlong *)0;
    do {
      plVar4 = plVar1;
      *plVar4 = (longlong)plVar5;
      lVar3 = lVar3 + -1;
      plVar1 = plVar4 + -10;
      plVar5 = plVar4;
    } while (-1 < lVar3);
    *(undefined4 *)(lVar2 + 0xa18) = 0;
    *(longlong **)(lVar2 + 0xa00) = plVar4;
    *(undefined8 *)(lVar2 + 0xa08) = 0;
    *(longlong *)(lVar2 + 0xa10) = *param_1;
    *param_1 = lVar2;
    if (*(longlong *)(lVar2 + 0xa10) != 0) {
      *(longlong *)(*(longlong *)(lVar2 + 0xa10) + 0xa08) = lVar2;
    }
  }
  return lVar2;
}



// FUNCTION 143dff950 FUN_143dff950 body=41 status=ok
// SIG undefined FUN_143dff950(void)

void FUN_143dff950(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *puVar1 = *param_4;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  FUN_143e03810(*(undefined8 *)(param_1 + 0x18),param_2,param_3,0,0);
  return;
}



// FUNCTION 143dff980 FUN_143dff980 body=1218 status=ok
// SIG undefined FUN_143dff980(void)

undefined4 FUN_143dff980(undefined8 param_1,float *param_2,int param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int *piVar7;
  float *pfVar8;
  float *pfVar9;
  char cVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  float *pfVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 local_res18 [2];
  undefined8 local_res20;
  longlong local_f0;
  uint local_e8;
  uint local_e4;
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
  
  lVar20 = 0;
  local_res18[0] = 0x3727c5ac;
  lVar13 = (longlong)param_3;
  local_f0 = 0;
  param_3 = param_3 * 3;
  local_e8 = 0;
  local_e4 = 0x80000000;
  local_res20 = param_4;
  uVar6 = FUN_143703a50();
  if ((int)(local_e4 & 0x3fffffff) < param_3) {
    iVar17 = (local_e4 & 0x3fffffff) * 2;
    if (param_3 < iVar17) {
      param_3 = iVar17;
    }
    FUN_14370c310(uVar6,&local_f0,param_3,0x10);
  }
  pfVar9 = param_2;
  if (0 < lVar13) {
    do {
      lVar1 = lVar20 + 1;
      fVar29 = 0.0 - pfVar9[3];
      lVar15 = lVar1;
      pfVar21 = pfVar9;
      param_4 = local_res20;
      while (pfVar3 = pfVar21, lVar2 = lVar15, local_res20 = param_4, lVar2 < lVar13) {
        pfVar21 = pfVar3 + 4;
        fVar23 = 0.0 - pfVar3[7];
        pfVar4 = pfVar21;
        for (lVar12 = lVar2 + 1; lVar15 = lVar2 + 1, param_4 = local_res20, lVar12 < lVar13;
            lVar12 = lVar12 + 1) {
          local_b8 = pfVar4[4];
          fStack_b4 = pfVar4[5];
          fStack_b0 = pfVar4[6];
          fStack_ac = pfVar4[7];
          fVar24 = 0.0 - fStack_ac;
          local_d8 = *pfVar9;
          fStack_d4 = pfVar9[1];
          fStack_d0 = pfVar9[2];
          fStack_cc = pfVar9[3];
          local_c8 = *pfVar21;
          fStack_c4 = pfVar3[5];
          fStack_c0 = pfVar3[6];
          fStack_bc = pfVar3[7];
          FUN_14376f870(&local_d8);
          piVar7 = (int *)FUN_14376f570(&local_d8,local_res18,&local_d8);
          if (-1 < *piVar7) {
            uVar19 = 0;
            fVar28 = fVar23 * fStack_bc;
            uVar11 = 1;
            uVar16 = 0;
            fVar22 = fVar29 * fStack_cc;
            fVar25 = fVar24 * fStack_ac;
            fVar26 = fVar23 * local_c8 + fVar29 * local_d8 + fVar24 * local_b8;
            fVar27 = fVar23 * fStack_c4 + fVar29 * fStack_d4 + fVar24 * fStack_b4;
            fVar24 = fVar23 * fStack_c0 + fVar29 * fStack_d0 + fVar24 * fStack_b0;
            uVar14 = uVar19;
            uVar18 = uVar19;
            pfVar8 = param_2;
            if (0 < lVar20) {
              do {
                uVar16 = (uint)uVar18;
                if ((char)uVar11 == '\0') break;
                if (1e-05 < pfVar8[3] + fVar27 * pfVar8[1] + fVar24 * pfVar8[2] + fVar26 * *pfVar8)
                {
                  uVar11 = uVar19;
                }
                uVar16 = uVar16 + 1;
                uVar14 = uVar14 + 1;
                uVar18 = (ulonglong)uVar16;
                pfVar8 = pfVar8 + 4;
              } while ((longlong)uVar14 < lVar20);
            }
            iVar17 = uVar16 + 1;
            lVar15 = uVar14 + 1;
            if (lVar15 < lVar2) {
              pfVar8 = param_2 + lVar15 * 4;
              do {
                if ((char)uVar11 == '\0') break;
                if (1e-05 < pfVar8[3] + fVar27 * pfVar8[1] + fVar24 * pfVar8[2] + fVar26 * *pfVar8)
                {
                  uVar11 = uVar19;
                }
                iVar17 = iVar17 + 1;
                lVar15 = lVar15 + 1;
                pfVar8 = pfVar8 + 4;
              } while (lVar15 < lVar2);
            }
            iVar17 = iVar17 + 1;
            lVar15 = lVar15 + 1;
            if (lVar15 < lVar12) {
              pfVar8 = param_2 + lVar15 * 4;
              do {
                if ((char)uVar11 == '\0') break;
                if (1e-05 < pfVar8[3] + fVar27 * pfVar8[1] + fVar24 * pfVar8[2] + fVar26 * *pfVar8)
                {
                  uVar11 = uVar19;
                }
                iVar17 = iVar17 + 1;
                lVar15 = lVar15 + 1;
                pfVar8 = pfVar8 + 4;
              } while (lVar15 < lVar12);
            }
            cVar10 = (char)uVar11;
            lVar15 = (longlong)(iVar17 + 1);
            if (lVar15 < lVar13) {
              pfVar8 = param_2 + lVar15 * 4;
              do {
                if ((char)uVar11 == '\0') goto LAB_143dffd2a;
                if (1e-05 < pfVar8[3] + fVar27 * pfVar8[1] + fVar24 * pfVar8[2] + fVar26 * *pfVar8)
                {
                  uVar11 = uVar19;
                }
                cVar10 = (char)uVar11;
                lVar15 = lVar15 + 1;
                pfVar8 = pfVar8 + 4;
              } while (lVar15 < lVar13);
            }
            if (cVar10 != '\0') {
              uVar6 = FUN_143703a50();
              if (local_e8 == (local_e4 & 0x3fffffff)) {
                FUN_14370c460(uVar6,&local_f0,0x10);
              }
              pfVar8 = (float *)((longlong)(int)local_e8 * 0x10 + local_f0);
              *pfVar8 = fVar26;
              pfVar8[1] = fVar27;
              pfVar8[2] = fVar24;
              pfVar8[3] = fVar28 + fVar22 + fVar25;
              local_e8 = local_e8 + 1;
            }
          }
LAB_143dffd2a:
          pfVar4 = pfVar4 + 4;
        }
      }
      pfVar9 = pfVar9 + 4;
      lVar20 = lVar1;
    } while (lVar1 < lVar13);
  }
  if ((int)local_e8 < 4) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = FUN_143dff950(param_1,local_f0,local_e8,param_4);
  }
  uVar6 = FUN_143703a50();
  local_e8 = 0;
  if (-1 < (int)local_e4) {
    FUN_143702e10(uVar6,local_f0,0x10,local_e4 & 0x3fffffff);
  }
  return uVar5;
}



// FUNCTION 143dffe50 FUN_143dffe50 body=43 status=ok
// SIG undefined FUN_143dffe50(void)

undefined1 FUN_143dffe50(longlong param_1)

{
  undefined1 uVar1;
  
  uVar1 = FUN_143dffe80(*(undefined8 *)(param_1 + 0x18));
  return uVar1;
}



// FUNCTION 143dffe80 FUN_143dffe80 body=994 status=ok
// SIG undefined FUN_143dffe80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_143dffe80(longlong param_1,float *param_2,float *param_3,float *param_4,float *param_5,
             float param_6)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  undefined1 uVar14;
  int iVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  float *pfVar20;
  uint uVar21;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  uint uVar27;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 local_2f8 [80];
  undefined1 local_2a8 [672];
  
  if (*(int *)(param_1 + 0x1e0) != 3) {
    FUN_1437134a0(local_2f8,local_2a8,0x200);
    uVar16 = Electra::FHTTPResourceRequest::URL(local_2f8,"Invalid dimension for this operation, (")
    ;
    uVar16 = FUN_143715b10(uVar16,3);
    Electra::FHTTPResourceRequest::URL(uVar16," required)");
    iVar15 = FUN_143732300(0x79f9d888,local_2a8,
                           "X:\\CI\\Stable_Package_Build_x64\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                           ,0x179);
    if (iVar15 != 0) {
      pcVar5 = (code *)swi(3);
      uVar14 = (*pcVar5)();
      return uVar14;
    }
    FUN_143713520(local_2f8);
  }
  if (*(char *)(param_1 + 0x1ee) == '\0') {
    FUN_1437134a0(local_2f8,local_2a8,0x200);
    uVar16 = Electra::FHTTPResourceRequest::URL(local_2f8,"No index available (");
    uVar16 = FUN_143715b60(uVar16,*(undefined4 *)(param_1 + 0x1e8));
    Electra::FHTTPResourceRequest::URL
              (uVar16,") hkgpConvexHull::buildIndices need to be called before this operation.");
    iVar15 = FUN_143732300(0x79f9d886,local_2a8,
                           "X:\\CI\\Stable_Package_Build_x64\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                           ,0x169);
    if (iVar15 != 0) {
      pcVar5 = (code *)swi(3);
      uVar14 = (*pcVar5)();
      return uVar14;
    }
    FUN_143713520(local_2f8);
  }
  iVar15 = *(int *)(param_1 + 0x78);
  fVar8 = *param_2;
  fVar9 = param_2[1];
  fVar10 = param_2[2];
  auVar46 = ZEXT816(0);
  fVar43 = *param_3 - fVar8;
  fVar44 = param_3[1] - fVar9;
  fVar45 = param_3[2] - fVar10;
  auVar47 = _DAT_1467f06f0;
  if (0 < iVar15) {
    pfVar4 = *(float **)(param_1 + 0x70);
    iVar19 = 2;
    lVar18 = ((longlong)iVar15 - 1U >> 2) + 1;
    pfVar20 = pfVar4;
    do {
      fVar35 = *pfVar20;
      pfVar11 = pfVar20 + 1;
      pfVar12 = pfVar20 + 2;
      pfVar13 = pfVar20 + 3;
      pfVar20 = pfVar20 + 0x10;
      pfVar2 = pfVar4 + (longlong)((iVar19 + -1) % iVar15) * 4;
      pfVar3 = pfVar4 + (longlong)(iVar19 % iVar15) * 4;
      iVar1 = iVar19 + 1;
      iVar19 = iVar19 + 4;
      lVar17 = (longlong)(iVar1 % iVar15);
      fVar33 = pfVar4[lVar17 * 4];
      fVar34 = (pfVar4 + lVar17 * 4)[1];
      auVar41._0_8_ =
           CONCAT44(pfVar2[3] + fVar8 * *pfVar2 + fVar9 * pfVar2[1] + fVar10 * pfVar2[2],
                    *pfVar13 + fVar8 * fVar35 + fVar9 * *pfVar11 + fVar10 * *pfVar12) ^
           0x8000000080000000;
      auVar41._8_4_ = -(pfVar3[3] + fVar8 * *pfVar3 + fVar9 * pfVar3[1] + fVar10 * pfVar3[2]);
      auVar41._12_4_ =
           -(pfVar4[lVar17 * 4 + 3] + fVar8 * fVar33 + fVar9 * fVar34 +
            fVar10 * pfVar4[lVar17 * 4 + 2]);
      fVar37 = fVar43 * fVar35 + fVar44 * *pfVar11 + fVar45 * *pfVar12;
      fVar38 = fVar43 * *pfVar2 + fVar44 * pfVar2[1] + fVar45 * pfVar2[2];
      fVar39 = fVar43 * *pfVar3 + fVar44 * pfVar3[1] + fVar45 * pfVar3[2];
      fVar40 = fVar43 * fVar33 + fVar44 * fVar34 + fVar45 * pfVar4[lVar17 * 4 + 2];
      auVar42._4_4_ = fVar38;
      auVar42._0_4_ = fVar37;
      auVar42._8_4_ = fVar39;
      auVar42._12_4_ = fVar40;
      auVar42 = divps(auVar41,auVar42);
      fVar33 = (float)(~-(uint)(fVar37 == 0.0) & auVar42._0_4_ | -(uint)(fVar37 == 0.0) & 0x7f7fffee
                      );
      fVar34 = (float)(~-(uint)(fVar38 == 0.0) & auVar42._4_4_ | -(uint)(fVar38 == 0.0) & 0x7f7fffee
                      );
      fVar35 = (float)(~-(uint)(fVar39 == 0.0) & auVar42._8_4_ | -(uint)(fVar39 == 0.0) & 0x7f7fffee
                      );
      fVar36 = (float)(~-(uint)(fVar40 == 0.0) & auVar42._12_4_ |
                      -(uint)(fVar40 == 0.0) & 0x7f7fffee);
      uVar21 = -(uint)(fVar37 < 0.0 - param_6 && auVar46._0_4_ < fVar33);
      uVar24 = -(uint)(fVar38 < 0.0 - param_6 && auVar46._4_4_ < fVar34);
      uVar25 = -(uint)(fVar39 < 0.0 - param_6 && auVar46._8_4_ < fVar35);
      uVar26 = -(uint)(fVar40 < 0.0 - param_6 && auVar46._12_4_ < fVar36);
      uVar27 = -(uint)(fVar33 < auVar47._0_4_ && param_6 < fVar37);
      uVar30 = -(uint)(fVar34 < auVar47._4_4_ && param_6 < fVar38);
      uVar31 = -(uint)(param_6 < fVar39 && fVar35 < auVar47._8_4_);
      uVar32 = -(uint)(fVar36 < auVar47._12_4_ && param_6 < fVar40);
      auVar22._0_4_ = ~uVar21 & (uint)auVar46._0_4_;
      auVar22._4_4_ = ~uVar24 & (uint)auVar46._4_4_;
      auVar22._8_4_ = ~uVar25 & (uint)auVar46._8_4_;
      auVar22._12_4_ = ~uVar26 & (uint)auVar46._12_4_;
      auVar46._4_4_ = uVar24 & (uint)fVar34;
      auVar46._0_4_ = uVar21 & (uint)fVar33;
      auVar46._8_4_ = uVar25 & (uint)fVar35;
      auVar46._12_4_ = uVar26 & (uint)fVar36;
      auVar28._0_4_ = ~uVar27 & (uint)auVar47._0_4_;
      auVar28._4_4_ = ~uVar30 & (uint)auVar47._4_4_;
      auVar28._8_4_ = ~uVar31 & (uint)auVar47._8_4_;
      auVar28._12_4_ = ~uVar32 & (uint)auVar47._12_4_;
      auVar47._4_4_ = uVar30 & (uint)fVar34;
      auVar47._0_4_ = uVar27 & (uint)fVar33;
      auVar47._8_4_ = uVar31 & (uint)fVar35;
      auVar47._12_4_ = uVar32 & (uint)fVar36;
      auVar46 = auVar46 | auVar22;
      auVar47 = auVar47 | auVar28;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  auVar29._0_8_ = auVar46._8_8_;
  auVar29._8_4_ = auVar46._0_4_;
  auVar29._12_4_ = auVar46._4_4_;
  auVar46 = maxps(auVar29,auVar46);
  auVar23._0_8_ = auVar47._8_8_;
  auVar23._8_4_ = auVar47._0_4_;
  auVar23._12_4_ = auVar47._4_4_;
  auVar47 = minps(auVar23,auVar47);
  auVar6._4_4_ = auVar46._0_4_;
  auVar6._0_4_ = auVar46._4_4_;
  auVar6._8_4_ = auVar46._12_4_;
  auVar6._12_4_ = auVar46._8_4_;
  auVar46 = maxps(auVar46,auVar6);
  auVar7._4_4_ = auVar47._0_4_;
  auVar7._0_4_ = auVar47._4_4_;
  auVar7._8_4_ = auVar47._12_4_;
  auVar7._12_4_ = auVar47._8_4_;
  auVar47 = minps(auVar47,auVar7);
  *param_4 = auVar46._0_4_;
  *param_5 = auVar47._0_4_;
  return auVar46._0_4_ < auVar47._0_4_;
}



// FUNCTION 143e00270 ~FFieldClass body=42 status=ok
// SIG undefined ~FFieldClass(void)

void FFieldClass::~FFieldClass(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 143e002a0 FUN_143e002a0 body=703 status=ok
// SIG undefined FUN_143e002a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_143e002a0(longlong param_1,float *param_2,int param_3,float param_4,float param_5)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 (*pauVar11) [16];
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 in_XMM2 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar25;
  float fVar26;
  undefined1 auVar24 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 local_58 [64];
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  lVar13 = (longlong)param_3 * 0x20;
  pfVar1 = (float *)(lVar13 + 0xc0 + lVar3);
  pfVar2 = (float *)(lVar13 + 0xb0 + lVar3);
  auVar24._4_4_ = -(uint)(pfVar1[1] < pfVar2[1]);
  auVar24._0_4_ = -(uint)(*pfVar1 < *pfVar2);
  auVar24._8_4_ = -(uint)(pfVar1[2] < pfVar2[2]);
  auVar24._12_4_ = -(uint)(pfVar1[3] < pfVar2[3]);
  uVar6 = movmskps((int)&stack0x00000000,auVar24);
  if (((uVar6 & 7) != 0) && (iVar7 = FUN_143e00570(), 0 < iVar7)) {
    uVar8 = FUN_143e00560(param_1);
    if (param_3 == 0) {
      puVar9 = (undefined8 *)FUN_143e005d0(param_1,uVar8);
      uVar4 = puVar9[1];
      *(undefined8 *)(lVar3 + 0xb0) = *puVar9;
      *(undefined8 *)(lVar3 + 0xb8) = uVar4;
      uVar4 = puVar9[1];
      *(undefined8 *)(lVar3 + 0xc0) = *puVar9;
      *(undefined8 *)(lVar3 + 200) = uVar4;
      lVar10 = FUN_141774f00(param_1,uVar8);
      if (lVar10 != 0) {
        auVar24 = *(undefined1 (*) [16])(lVar3 + 0xc0);
        do {
          pauVar11 = (undefined1 (*) [16])FUN_143e005d0(param_1,lVar10);
          auVar14 = minps(*(undefined1 (*) [16])(lVar3 + 0xb0),*pauVar11);
          *(undefined1 (*) [16])(lVar3 + 0xb0) = auVar14;
          auVar24 = maxps(auVar24,*pauVar11);
          *(undefined1 (*) [16])(lVar3 + 0xc0) = auVar24;
          lVar10 = FUN_141774f00(param_1,lVar10);
        } while (lVar10 != 0);
      }
    }
    else {
      puVar12 = (undefined8 *)FUN_143e00580(param_1,local_58,uVar8);
      uVar4 = puVar12[1];
      puVar9 = (undefined8 *)(lVar13 + 0xb0 + lVar3);
      *puVar9 = *puVar12;
      puVar9[1] = uVar4;
      puVar12 = (undefined8 *)FUN_143e00580(param_1,local_58,uVar8);
      uVar4 = puVar12[1];
      puVar9 = (undefined8 *)(lVar13 + 0xc0 + lVar3);
      *puVar9 = *puVar12;
      puVar9[1] = uVar4;
      for (lVar10 = FUN_141774f00(param_1,uVar8); lVar10 != 0;
          lVar10 = FUN_141774f00(param_1,lVar10)) {
        pauVar11 = (undefined1 (*) [16])FUN_143e00580(param_1,local_58,lVar10);
        auVar24 = minps(*(undefined1 (*) [16])(lVar13 + 0xb0 + lVar3),*pauVar11);
        *(undefined1 (*) [16])(lVar13 + 0xb0 + lVar3) = auVar24;
        auVar24 = maxps(*(undefined1 (*) [16])(lVar13 + 0xc0 + lVar3),*pauVar11);
        *(undefined1 (*) [16])(lVar13 + 0xc0 + lVar3) = auVar24;
      }
    }
  }
  if ((param_4 != 1.0) || (0.0 < param_5)) {
    pfVar1 = (float *)(lVar13 + 0xc0 + lVar3);
    fVar23 = *pfVar1;
    fVar25 = pfVar1[1];
    fVar26 = pfVar1[2];
    fVar27 = pfVar1[3];
    pfVar1 = (float *)(lVar13 + 0xb0 + lVar3);
    fVar28 = *pfVar1;
    fVar29 = pfVar1[1];
    fVar30 = pfVar1[2];
    fVar31 = pfVar1[3];
    if (0.0 < param_5) {
      fVar15 = (fVar23 - fVar28) * (fVar23 - fVar28);
      fVar16 = (fVar25 - fVar29) * (fVar25 - fVar29);
      fVar17 = (fVar26 - fVar30) * (fVar26 - fVar30);
      fVar20 = fVar16 + fVar15 + fVar17;
      fVar21 = fVar16 + fVar15 + fVar17;
      fVar22 = fVar16 + fVar15 + fVar17;
      fVar17 = fVar16 + fVar15 + fVar17;
      auVar14._4_4_ = fVar21;
      auVar14._0_4_ = fVar20;
      auVar14._8_4_ = fVar22;
      auVar14._12_4_ = fVar17;
      auVar24 = rsqrtps(in_XMM2,auVar14);
      fVar15 = auVar24._0_4_;
      fVar16 = auVar24._4_4_;
      fVar19 = auVar24._8_4_;
      fVar18 = auVar24._12_4_;
      fVar15 = (float)(~-(uint)(fVar20 <= 0.0) &
                      (uint)((3.0 - fVar20 * fVar15 * fVar15) * fVar15 * 0.5 * fVar20)) *
               param_5 * _DAT_1467f07e0;
      fVar16 = (float)(~-(uint)(fVar21 <= 0.0) &
                      (uint)((3.0 - fVar21 * fVar16 * fVar16) * fVar16 * 0.5 * fVar21)) *
               param_5 * fRam00000001467f07e4;
      fVar19 = (float)(~-(uint)(fVar22 <= 0.0) &
                      (uint)((3.0 - fVar22 * fVar19 * fVar19) * fVar19 * 0.5 * fVar22)) *
               param_5 * fRam00000001467f07e8;
      fVar17 = (float)(~-(uint)(fVar17 <= 0.0) &
                      (uint)((3.0 - fVar17 * fVar18 * fVar18) * fVar18 * 0.5 * fVar17)) *
               param_5 * fRam00000001467f07ec;
      fVar28 = fVar28 - fVar15;
      fVar29 = fVar29 - fVar16;
      fVar30 = fVar30 - fVar19;
      fVar31 = fVar31 - fVar17;
      fVar23 = fVar23 + fVar15;
      fVar25 = fVar25 + fVar16;
      fVar26 = fVar26 + fVar19;
      fVar27 = fVar27 + fVar17;
    }
    if (param_4 != 1.0) {
      fVar15 = (fVar23 + fVar28) * _DAT_1467f07e0;
      fVar16 = (fVar25 + fVar29) * fRam00000001467f07e4;
      fVar17 = (fVar26 + fVar30) * fRam00000001467f07e8;
      fVar19 = (fVar27 + fVar31) * fRam00000001467f07ec;
      fVar23 = param_4 * _DAT_1467f07e0 * (fVar23 - fVar28);
      fVar25 = param_4 * fRam00000001467f07e4 * (fVar25 - fVar29);
      fVar26 = param_4 * fRam00000001467f07e8 * (fVar26 - fVar30);
      fVar27 = param_4 * fRam00000001467f07ec * (fVar27 - fVar31);
      fVar28 = fVar15 - fVar23;
      fVar29 = fVar16 - fVar25;
      fVar30 = fVar17 - fVar26;
      fVar31 = fVar19 - fVar27;
      fVar23 = fVar15 + fVar23;
      fVar25 = fVar16 + fVar25;
      fVar26 = fVar17 + fVar26;
      fVar27 = fVar19 + fVar27;
    }
    *param_2 = fVar28;
    param_2[1] = fVar29;
    param_2[2] = fVar30;
    param_2[3] = fVar31;
    param_2[4] = fVar23;
    param_2[5] = fVar25;
    param_2[6] = fVar26;
    param_2[7] = fVar27;
  }
  else {
    puVar9 = (undefined8 *)(lVar13 + 0xb0 + lVar3);
    uVar8 = puVar9[1];
    puVar12 = (undefined8 *)(lVar13 + 0xc0 + lVar3);
    uVar4 = *puVar12;
    uVar5 = puVar12[1];
    *(undefined8 *)param_2 = *puVar9;
    *(undefined8 *)(param_2 + 2) = uVar8;
    *(undefined8 *)(param_2 + 4) = uVar4;
    *(undefined8 *)(param_2 + 6) = uVar5;
  }
  return param_2;
}



// FUNCTION 143e00560 FUN_143e00560 body=9 status=ok
// SIG undefined FUN_143e00560(void)

undefined8 FUN_143e00560(longlong param_1)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x38);
}



// FUNCTION 143e00570 FUN_143e00570 body=8 status=ok
// SIG undefined FUN_143e00570(void)

undefined4 FUN_143e00570(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x40);
}



// FUNCTION 143e00580 FUN_143e00580 body=71 status=ok
// SIG undefined FUN_143e00580(void)

float * FUN_143e00580(longlong param_1,float *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(param_3 + 0x28);
  iVar2 = *(int *)(param_3 + 0x24);
  fVar4 = *(float *)(lVar3 + 0x134);
  fVar5 = *(float *)(lVar3 + 0x138);
  fVar6 = *(float *)(lVar3 + 0x13c);
  fVar7 = *(float *)(lVar3 + 0x114);
  fVar8 = *(float *)(lVar3 + 0x118);
  fVar9 = *(float *)(lVar3 + 0x11c);
  *param_2 = (float)*(int *)(param_3 + 0x20) * *(float *)(lVar3 + 0x130) + *(float *)(lVar3 + 0x110)
  ;
  param_2[1] = (float)iVar2 * fVar4 + fVar7;
  param_2[2] = (float)iVar1 * fVar5 + fVar8;
  param_2[3] = fVar6 * 0.0 + fVar9;
  return param_2;
}



// FUNCTION 143e005d0 FUN_143e005d0 body=5 status=ok
// SIG undefined FUN_143e005d0(void)

longlong FUN_143e005d0(undefined8 param_1,longlong param_2)

{
  return param_2 + 0x10;
}



// FUNCTION 143e005e0 FUN_143e005e0 body=446 status=ok
// SIG undefined FUN_143e005e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e005e0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],int param_3)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  ulonglong uVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  undefined1 auVar11 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 local_248 [32];
  undefined1 local_228 [544];
  
  if (param_3 != 0) {
    auVar14 = *param_2;
    pauVar8 = param_1;
    auVar17 = auVar14;
    if (1 < param_3) {
      pauVar8 = param_2 + 1;
      uVar9 = (ulonglong)(param_3 - 1);
      do {
        auVar17 = minps(auVar17,*pauVar8);
        auVar14 = maxps(auVar14,*pauVar8);
        pauVar8 = pauVar8 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    fVar10 = auVar17._0_4_;
    fVar12 = auVar17._4_4_;
    fVar13 = auVar17._8_4_;
    fVar18 = auVar17._12_4_;
    auVar11._8_4_ = 0x80000000;
    auVar11._0_8_ = 0x8000000080000000;
    auVar11._12_4_ = 0x80000000;
    auVar2._4_4_ = -(uint)(fRam00000001467f08d4 < auVar14._4_4_);
    auVar2._0_4_ = -(uint)(DAT_1467f08d0 < auVar14._0_4_);
    auVar2._8_4_ = -(uint)(fRam00000001467f08d8 < auVar14._8_4_);
    auVar2._12_4_ = -(uint)(fRam00000001467f08dc < auVar14._12_4_);
    uVar5 = movmskps(0x8000,auVar2);
    auVar17._4_4_ = -(uint)(fVar12 < -fRam00000001467f08d4);
    auVar17._0_4_ = -(uint)(fVar10 < -DAT_1467f08d0);
    auVar17._8_4_ = -(uint)(fVar13 < -fRam00000001467f08d8);
    auVar17._12_4_ = -(uint)(fVar18 < -fRam00000001467f08dc);
    uVar7 = movmskps((int)pauVar8,auVar17);
    if (((uVar7 | uVar5) & 7) != 0) {
      FUN_1437134a0(local_248,local_228,0x200);
      Electra::FHTTPResourceRequest::URL(local_248,"Input domain out of range");
      iVar6 = FUN_143732300(0x405a2174,local_228,
                            "X:\\CI\\Stable_Package_Build_x64\\Source\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                            ,0x23f);
      if (iVar6 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      auVar11._0_8_ = FUN_143713520(local_248);
      auVar11._8_8_ = extraout_XMM0_Qb;
    }
    uVar3 = uRam00000001467f06fc;
    auVar15._0_4_ = auVar14._0_4_ - fVar10;
    auVar15._4_4_ = auVar14._4_4_ - fVar12;
    auVar15._8_4_ = auVar14._8_4_ - fVar13;
    auVar15._12_4_ = auVar14._12_4_ - fVar18;
    auVar14 = maxps(auVar15,_DAT_145dc9cd0);
    auVar16._0_4_ = auVar14._0_4_ * _DAT_1467f07e0;
    auVar16._4_4_ = auVar14._4_4_ * fRam00000001467f07e4;
    auVar16._8_4_ = auVar14._8_4_ * fRam00000001467f07e8;
    auVar16._12_4_ = auVar14._12_4_ * fRam00000001467f07ec;
    auVar14 = rcpps(auVar11,auVar16);
    *(float *)param_1[0x12] = (2.0 - auVar16._0_4_ * auVar14._0_4_) * auVar14._0_4_;
    *(float *)(param_1[0x12] + 4) = (2.0 - auVar16._4_4_ * auVar14._4_4_) * auVar14._4_4_;
    *(float *)(param_1[0x12] + 8) = (2.0 - auVar16._8_4_ * auVar14._8_4_) * auVar14._8_4_;
    *(undefined4 *)(param_1[0x12] + 0xc) = uVar3;
    *(float *)param_1[0x11] = auVar16._0_4_ + fVar10;
    *(float *)(param_1[0x11] + 4) = auVar16._4_4_ + fVar12;
    *(float *)(param_1[0x11] + 8) = auVar16._8_4_ + fVar13;
    *(float *)(param_1[0x11] + 0xc) = auVar16._12_4_ + fVar18;
    *(float *)param_1[0x11] = auVar16._0_4_ + fVar10;
    *(float *)(param_1[0x11] + 4) = auVar16._4_4_ + fVar12;
    *(float *)(param_1[0x11] + 8) = auVar16._8_4_ + fVar13;
    *(undefined4 *)(param_1[0x11] + 0xc) = 0;
    uVar3 = *(undefined4 *)(param_1[0x12] + 4);
    uVar4 = *(undefined4 *)(param_1[0x12] + 8);
    *(undefined4 *)param_1[0x12] = *(undefined4 *)param_1[0x12];
    *(undefined4 *)(param_1[0x12] + 4) = uVar3;
    *(undefined4 *)(param_1[0x12] + 8) = uVar4;
    *(undefined4 *)(param_1[0x12] + 0xc) = 0;
    auVar14._0_4_ = *(float *)param_1[0x12] * 8191.0;
    auVar14._4_4_ = *(float *)(param_1[0x12] + 4) * 8191.0;
    auVar14._8_4_ = *(float *)(param_1[0x12] + 8) * 8191.0;
    auVar14._12_4_ = *(float *)(param_1[0x12] + 0xc) * 8191.0;
    param_1[0x12] = auVar14;
    auVar17 = rcpps(auVar14,auVar14);
    fVar10 = (2.0 - auVar14._0_4_ * auVar17._0_4_) * auVar17._0_4_;
    fVar12 = (2.0 - auVar14._4_4_ * auVar17._4_4_) * auVar17._4_4_;
    fVar13 = (2.0 - auVar14._8_4_ * auVar17._8_4_) * auVar17._8_4_;
    *(float *)param_1[0x13] = fVar10;
    *(float *)(param_1[0x13] + 4) = fVar12;
    *(float *)(param_1[0x13] + 8) = fVar13;
    *(float *)(param_1[0x13] + 0xc) = (2.0 - auVar14._12_4_ * auVar17._12_4_) * auVar17._12_4_;
    uVar3 = uRam00000001467f06fc;
    *(float *)param_1[0x13] = fVar10;
    *(float *)(param_1[0x13] + 4) = fVar12;
    *(float *)(param_1[0x13] + 8) = fVar13;
    *(undefined4 *)(param_1[0x13] + 0xc) = uVar3;
  }
  return;
}



// FUNCTION 143e007a0 FUN_143e007a0 body=117 status=ok
// SIG undefined FUN_143e007a0(void)

void FUN_143e007a0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_143703a50();
  if (*(longlong *)(param_2 + 0xa08) == 0) {
    *param_1 = *(undefined8 *)(param_2 + 0xa10);
  }
  else {
    *(undefined8 *)(*(longlong *)(param_2 + 0xa08) + 0xa10) = *(undefined8 *)(param_2 + 0xa10);
  }
  if (*(longlong *)(param_2 + 0xa10) != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0xa10) + 0xa08) = *(undefined8 *)(param_2 + 0xa08);
  }
                    /* WARNING: Could not recover jumptable at 0x000143e00811. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,param_2,0xa20);
  return;
}



// FUNCTION 143e00820 FUN_143e00820 body=194 status=ok
// SIG undefined FUN_143e00820(void)

void FUN_143e00820(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = param_1[1];
  while (lVar2 != 0) {
    plVar4 = (longlong *)param_1[1];
    lVar2 = *plVar4;
    plVar3 = (longlong *)plVar4[1];
    if (lVar2 != 0) {
      *(longlong **)(lVar2 + 8) = plVar3;
    }
    if (plVar3 == (longlong *)0x0) {
      param_1[1] = lVar2;
    }
    else {
      *plVar3 = lVar2;
    }
    *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + -1;
    lVar2 = plVar4[0xe];
    piVar1 = (int *)(lVar2 + 0x1018);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      plVar4 = (longlong *)FUN_143703a50();
      if (*(longlong *)(lVar2 + 0x1008) == 0) {
        *param_1 = *(undefined8 *)(lVar2 + 0x1010);
      }
      else {
        *(undefined8 *)(*(longlong *)(lVar2 + 0x1008) + 0x1010) = *(undefined8 *)(lVar2 + 0x1010);
      }
      if (*(longlong *)(lVar2 + 0x1010) != 0) {
        *(undefined8 *)(*(longlong *)(lVar2 + 0x1010) + 0x1008) = *(undefined8 *)(lVar2 + 0x1008);
      }
      (**(code **)(*plVar4 + 0x10))(plVar4,lVar2,0x1020);
    }
    lVar2 = param_1[1];
  }
  return;
}



// FUNCTION 143e008f0 FUN_143e008f0 body=194 status=ok
// SIG undefined FUN_143e008f0(void)

void FUN_143e008f0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = param_1[1];
  while (lVar2 != 0) {
    plVar4 = (longlong *)param_1[1];
    lVar2 = *plVar4;
    plVar3 = (longlong *)plVar4[1];
    if (lVar2 != 0) {
      *(longlong **)(lVar2 + 8) = plVar3;
    }
    if (plVar3 == (longlong *)0x0) {
      param_1[1] = lVar2;
    }
    else {
      *plVar3 = lVar2;
    }
    *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + -1;
    lVar2 = plVar4[8];
    piVar1 = (int *)(lVar2 + 0xa18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      plVar4 = (longlong *)FUN_143703a50();
      if (*(longlong *)(lVar2 + 0xa08) == 0) {
        *param_1 = *(undefined8 *)(lVar2 + 0xa10);
      }
      else {
        *(undefined8 *)(*(longlong *)(lVar2 + 0xa08) + 0xa10) = *(undefined8 *)(lVar2 + 0xa10);
      }
      if (*(longlong *)(lVar2 + 0xa10) != 0) {
        *(undefined8 *)(*(longlong *)(lVar2 + 0xa10) + 0xa08) = *(undefined8 *)(lVar2 + 0xa08);
      }
      (**(code **)(*plVar4 + 0x10))(plVar4,lVar2,0xa20);
    }
    lVar2 = param_1[1];
  }
  return;
}



// FUNCTION 143e009c0 ReleaseRHI body=32 status=ok
// SIG undefined ReleaseRHI(void)

void FLandscapeTextureResource::ReleaseRHI(longlong param_1)

{
  FUN_143e008f0(param_1 + 0x18);
  FUN_143e00820(param_1 + 0x30);
  return;
}



// FUNCTION 143e009e0 FUN_143e009e0 body=366 status=ok
// SIG undefined FUN_143e009e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e009e0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))();
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  uVar2 = uRam00000001467f08dc;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(uint *)(param_1 + 0x9c) = uVar2;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  uVar2 = uRam00000001467f08dc;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(uint *)(param_1 + 0xac) = uVar2;
  uVar5 = uRam00000001467f08dc;
  uVar4 = uRam00000001467f08d8;
  uVar3 = uRam00000001467f08d4;
  uVar2 = DAT_1467f08d0;
  *(uint *)(param_1 + 0xb0) = DAT_1467f08d0;
  *(uint *)(param_1 + 0xb4) = uVar3;
  *(uint *)(param_1 + 0xb8) = uVar4;
  *(uint *)(param_1 + 0xbc) = uVar5;
  *(uint *)(param_1 + 0xc0) = uVar2 ^ 0x80000000;
  *(uint *)(param_1 + 0xc4) = uVar3 ^ 0x80000000;
  *(uint *)(param_1 + 200) = uVar4 ^ 0x80000000;
  *(uint *)(param_1 + 0xcc) = uVar5 ^ 0x80000000;
  uVar5 = uRam00000001467f08dc;
  uVar4 = uRam00000001467f08d8;
  uVar3 = uRam00000001467f08d4;
  uVar2 = DAT_1467f08d0;
  *(uint *)(param_1 + 0xd0) = DAT_1467f08d0;
  *(uint *)(param_1 + 0xd4) = uVar3;
  *(uint *)(param_1 + 0xd8) = uVar4;
  *(uint *)(param_1 + 0xdc) = uVar5;
  *(uint *)(param_1 + 0xe0) = uVar2 ^ 0x80000000;
  *(uint *)(param_1 + 0xe4) = uVar3 ^ 0x80000000;
  *(uint *)(param_1 + 0xe8) = uVar4 ^ 0x80000000;
  *(uint *)(param_1 + 0xec) = uVar5 ^ 0x80000000;
  *(undefined2 *)(param_1 + 0x1ec) = 0;
  *(undefined1 *)(param_1 + 0x1ee) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  uVar1 = uRam00000001467f0898;
  *(undefined8 *)(param_1 + 0x140) = _DAT_1467f0890;
  *(undefined8 *)(param_1 + 0x148) = uVar1;
  uVar1 = uRam00000001467f08a8;
  *(undefined8 *)(param_1 + 0x150) = _DAT_1467f08a0;
  *(undefined8 *)(param_1 + 0x158) = uVar1;
  uVar1 = uRam00000001467f08b8;
  *(undefined8 *)(param_1 + 0x160) = _DAT_1467f08b0;
  *(undefined8 *)(param_1 + 0x168) = uVar1;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  uVar1 = uRam00000001467f0898;
  *(undefined8 *)(param_1 + 400) = _DAT_1467f0890;
  *(undefined8 *)(param_1 + 0x198) = uVar1;
  uVar1 = uRam00000001467f08a8;
  *(undefined8 *)(param_1 + 0x1a0) = _DAT_1467f08a0;
  *(undefined8 *)(param_1 + 0x1a8) = uVar1;
  uVar1 = uRam00000001467f08b8;
  *(undefined8 *)(param_1 + 0x1b0) = _DAT_1467f08b0;
  *(undefined8 *)(param_1 + 0x1b8) = uVar1;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  if (param_2 == '\0') {
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  return;
}



// FUNCTION 143e00b50 FUN_143e00b50 body=43 status=ok
// SIG undefined FUN_143e00b50(void)

undefined8 * FUN_143e00b50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkgpMesh::IConvexOverlap::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 143e00b80 FUN_143e00b80 body=135 status=ok
// SIG undefined FUN_143e00b80(void)

void FUN_143e00b80(undefined8 param_1,longlong *param_2,float *param_3,longlong *param_4,
                  float *param_5,longlong param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  fVar1 = -*param_3;
  fVar2 = -param_3[1];
  fVar3 = -param_3[2];
  local_18 = fVar2 * param_5[4] + fVar1 * *param_5 + fVar3 * param_5[8];
  fStack_14 = fVar2 * param_5[5] + fVar1 * param_5[1] + fVar3 * param_5[9];
  fStack_10 = fVar2 * param_5[6] + fVar1 * param_5[2] + fVar3 * param_5[10];
  fStack_c = fVar2 * param_5[7] + fVar1 * param_5[3] + fVar3 * param_5[0xb];
  (**(code **)(*param_2 + 0x10))(param_2,param_3,param_6);
  (**(code **)(*param_4 + 0x10))(param_4,&local_18,param_6 + 0x10);
  return;
}


