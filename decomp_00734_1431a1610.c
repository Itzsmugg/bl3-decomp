// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1431a1610 FUN_1431a1610 body=172 status=ok
// SIG undefined FUN_1431a1610(void)

undefined8 FUN_1431a1610(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  puVar1 = (undefined8 *)param_1[0x17];
  if (puVar1 == (undefined8 *)0x0) {
    return 2;
  }
  uVar3 = *(uint *)(puVar1 + 1);
  plVar4 = (longlong *)*puVar1;
  plVar5 = plVar4 + uVar3;
  if (plVar4 != plVar5) {
    do {
      if (*plVar4 == param_2) break;
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar5);
    if (plVar4 != plVar5) {
      if (plVar4 < plVar5 + -1) {
        lVar2 = ((ulonglong)((longlong)(plVar5 + -1) + (-1 - (longlong)plVar4)) >> 3) + 1;
        plVar5 = plVar4;
        for (; plVar4 = plVar4 + 1, lVar2 != 0; lVar2 = lVar2 + -1) {
          *plVar5 = *plVar4;
          plVar5 = plVar5 + 1;
        }
        uVar3 = *(uint *)(puVar1 + 1);
      }
      *(uint *)(puVar1 + 1) = uVar3 - 1;
      (**(code **)(*param_1 + 400))(param_1,0);
      return 1;
    }
  }
  return 2;
}



// FUNCTION 1431a16c0 ExecuteActionExceptParentCheck body=92 status=ok
// SIG undefined ExecuteActionExceptParentCheck(void)

void CAkParameterNode::ExecuteActionExceptParentCheck(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = param_1[0x10];
  while( true ) {
    if (lVar1 == 0) {
      (**(code **)(*param_1 + 0xa0))(param_1,param_2);
      return;
    }
    cVar2 = CAkParameterNodeBase::IsException(lVar1,*(undefined8 *)(param_2 + 0x30));
    if (cVar2 != '\0') break;
    lVar1 = *(longlong *)(lVar1 + 0x80);
  }
  return;
}



// FUNCTION 1431a1720 FilterAndTransformMidiEvent body=1314 status=ok
// SIG undefined FilterAndTransformMidiEvent(void)

undefined8
CAkParameterNode::FilterAndTransformMidiEvent
          (longlong param_1,char *param_2,undefined4 param_3,char *param_4,undefined8 param_5,
          undefined4 param_6)

{
  byte *pbVar1;
  char cVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  uint local_res8 [2];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  byte local_70;
  char local_68;
  undefined8 local_60;
  
  pbVar1 = *(byte **)(param_1 + 0x98);
  puVar8 = (uint *)0x0;
  local_res8[0] = DAT_1467be1f4;
  puVar7 = puVar8;
  if (pbVar1 != (byte *)0x0) {
    puVar5 = puVar8;
    do {
      uVar6 = (int)puVar5 + 1;
      if (pbVar1[uVar6] == 0x35) {
        puVar7 = (uint *)(pbVar1 + (longlong)puVar5 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
        break;
      }
      puVar5 = (uint *)(ulonglong)uVar6;
    } while (uVar6 < *pbVar1);
  }
  local_70 = param_2[1];
  puVar5 = local_res8;
  if (puVar7 != (uint *)0x0) {
    puVar5 = puVar7;
  }
  if ((*puVar5 >> (local_70 & 0x1f) & 1) != 0) {
    if (*param_4 != '\0') {
      if ((*(longlong *)(param_1 + 0x80) != 0) &&
         (uVar3 = FilterAndTransformMidiEvent
                            (*(longlong *)(param_1 + 0x80),param_2,param_3,param_4,param_5,param_6),
         (int)uVar3 != 1)) {
        return uVar3;
      }
      *param_4 = '\0';
      local_70 = param_2[1];
    }
    if (((*param_2 + 0x80U & 0xcf) == 0) && (*param_2 != -0x50)) {
      local_68 = param_2[2];
    }
    else {
      local_68 = -1;
    }
    pbVar1 = *(byte **)(param_1 + 0x98);
    local_60 = 0;
    local_88 = param_5;
    local_80 = param_6;
    local_res8[0] = DAT_1467be1dc;
    puVar7 = puVar8;
    if (pbVar1 != (byte *)0x0) {
      puVar5 = puVar8;
      do {
        uVar6 = (int)puVar5 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar6 + (longlong)pbVar1) == 0x2f) {
          puVar7 = (uint *)(pbVar1 + (longlong)puVar5 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc))
          ;
          break;
        }
        puVar5 = (uint *)(ulonglong)uVar6;
      } while (uVar6 < *pbVar1);
    }
    fVar12 = 0.0;
    puVar5 = local_res8;
    if (puVar7 != (uint *)0x0) {
      puVar5 = puVar7;
    }
    uVar6 = *puVar5;
    local_78 = param_3;
    cVar2 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0xb);
    if (cVar2 != '\0') {
      fVar12 = (float)FUN_1431437a0(param_1 + 0x18,0xb);
    }
    if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
       ((**(ulonglong **)(param_1 + 0x38) >> 0xb & 1) != 0)) {
      fVar11 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0xb,&local_88);
      fVar12 = fVar12 + fVar11;
    }
    if (fVar12 <= 0.0) {
      fVar12 = fVar12 - 0.5;
    }
    else {
      fVar12 = fVar12 + 0.5;
    }
    iVar9 = (uint)(byte)param_2[2] + (int)fVar12 + uVar6;
    if (iVar9 < 0) {
      iVar9 = 0;
    }
    else if (0x7f < iVar9) {
      iVar9 = 0x7f;
    }
    pbVar1 = *(byte **)(param_1 + 0x98);
    local_res8[0] = DAT_1467be1e4;
    puVar7 = puVar8;
    if (pbVar1 != (byte *)0x0) {
      puVar5 = puVar8;
      do {
        uVar6 = (int)puVar5 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar6 + (longlong)pbVar1) == 0x31) {
          puVar7 = (uint *)(pbVar1 + (longlong)puVar5 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc))
          ;
          break;
        }
        puVar5 = (uint *)(ulonglong)uVar6;
      } while (uVar6 < *pbVar1);
    }
    puVar5 = local_res8;
    if (puVar7 != (uint *)0x0) {
      puVar5 = puVar7;
    }
    local_res8[0] = DAT_1467be1e8;
    puVar7 = puVar8;
    if (pbVar1 != (byte *)0x0) {
      puVar4 = puVar8;
      do {
        uVar6 = (int)puVar4 + 1;
        if (pbVar1[uVar6] == 0x32) {
          puVar7 = (uint *)(pbVar1 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) + (longlong)puVar4 * 4)
          ;
          break;
        }
        puVar4 = (uint *)(ulonglong)uVar6;
      } while (uVar6 < *pbVar1);
    }
    puVar4 = local_res8;
    if (puVar7 != (uint *)0x0) {
      puVar4 = puVar7;
    }
    if ((iVar9 <= (int)*puVar4) && ((int)*puVar5 <= iVar9)) {
      local_res8[0] = DAT_1467be1e0;
      puVar7 = puVar8;
      if (pbVar1 != (byte *)0x0) {
        puVar5 = puVar8;
        do {
          uVar6 = (int)puVar5 + 1;
          if (pbVar1[uVar6] == 0x30) {
            puVar7 = (uint *)(((ulonglong)(*pbVar1 + 4) & 0xfffffffc) + (longlong)puVar5 * 4 +
                             *(longlong *)(param_1 + 0x98));
            break;
          }
          puVar5 = (uint *)(ulonglong)uVar6;
        } while (uVar6 < *pbVar1);
      }
      fVar12 = 0.0;
      puVar5 = local_res8;
      if (puVar7 != (uint *)0x0) {
        puVar5 = puVar7;
      }
      uVar6 = *puVar5;
      cVar2 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0xc);
      if (cVar2 != '\0') {
        fVar12 = (float)FUN_1431437a0(param_1 + 0x18,0xc);
      }
      if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
         ((**(ulonglong **)(param_1 + 0x38) >> 0xc & 1) != 0)) {
        fVar11 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0xc,&local_88);
        fVar12 = fVar12 + fVar11;
      }
      if (fVar12 <= 0.0) {
        fVar12 = fVar12 - 0.5;
      }
      else {
        fVar12 = fVar12 + 0.5;
      }
      iVar10 = (uint)(byte)param_2[3] + (int)fVar12 + uVar6;
      if (iVar10 < 1) {
        iVar10 = 1;
      }
      else if (0x7f < iVar10) {
        iVar10 = 0x7f;
      }
      pbVar1 = *(byte **)(param_1 + 0x98);
      local_res8[0] = DAT_1467be1ec;
      puVar7 = puVar8;
      if (pbVar1 != (byte *)0x0) {
        puVar5 = puVar8;
        do {
          uVar6 = (int)puVar5 + 1;
          if (*(byte *)((longlong)(ulonglong)uVar6 + (longlong)pbVar1) == 0x33) {
            puVar7 = (uint *)(pbVar1 + (longlong)puVar5 * 4 +
                                       ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
            break;
          }
          puVar5 = (uint *)(ulonglong)uVar6;
        } while (uVar6 < *pbVar1);
      }
      puVar5 = local_res8;
      if (puVar7 != (uint *)0x0) {
        puVar5 = puVar7;
      }
      local_res8[0] = DAT_1467be1f0;
      if (pbVar1 != (byte *)0x0) {
        puVar7 = puVar8;
        do {
          uVar6 = (int)puVar7 + 1;
          if (pbVar1[uVar6] == 0x34) {
            puVar8 = (uint *)(pbVar1 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) +
                                       (longlong)puVar7 * 4);
            break;
          }
          puVar7 = (uint *)(ulonglong)uVar6;
        } while (uVar6 < *pbVar1);
      }
      puVar7 = local_res8;
      if (puVar8 != (uint *)0x0) {
        puVar7 = puVar8;
      }
      if ((iVar10 <= (int)*puVar7) && ((int)*puVar5 <= iVar10)) {
        param_2[2] = (char)iVar9;
        param_2[3] = (char)iVar10;
        return 1;
      }
    }
  }
  return 0x52;
}



// FUNCTION 1431a1c50 FUN_1431a1c50 body=5745 status=ok
// SIG undefined FUN_1431a1c50(void)

undefined8
FUN_1431a1c50(longlong param_1,float *param_2,uint param_3,undefined8 param_4,undefined8 *param_5,
             undefined8 param_6,longlong param_7,char param_8,longlong *param_9)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  longlong lVar5;
  char cVar6;
  undefined2 uVar7;
  float *pfVar8;
  float *pfVar9;
  longlong *plVar10;
  uint uVar11;
  float *pfVar12;
  undefined8 *puVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_res8 [2];
  uint local_res18;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  
  local_res18 = param_3;
  if (((param_3 & 0x40) != 0) &&
     (((*(uint *)(param_1 + 0xa0) & 0x1f000) != 0 || (*(longlong *)(param_1 + 0x80) == 0)))) {
    uVar7 = CAkParameterNodeBase::_GetBypassAllFX(param_1,*param_5);
    *(undefined2 *)(param_2 + 0x21) = uVar7;
    local_res18 = param_3 & 0xffffffbf;
  }
  pfVar14 = (float *)0x0;
  fVar17 = 0.0;
  if ((param_3 & 1) != 0) {
    pbVar1 = *(byte **)(param_1 + 0x98);
    local_res8[0] = DAT_1467be120;
    pfVar12 = pfVar14;
    if (pbVar1 != (byte *)0x0) {
      pfVar8 = pfVar14;
      do {
        uVar11 = (int)pfVar8 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar11 + (longlong)pbVar1) == 0) {
          pfVar12 = (float *)(pbVar1 + (longlong)pfVar8 * 4 +
                                       ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
          break;
        }
        pfVar8 = (float *)(ulonglong)uVar11;
      } while (uVar11 < *pbVar1);
    }
    fVar16 = 0.0;
    pfVar8 = local_res8;
    if (pfVar12 != (float *)0x0) {
      pfVar8 = pfVar12;
    }
    local_res8[0] = *pfVar8;
    *param_2 = local_res8[0] + *param_2;
    cVar6 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0);
    if (cVar6 != '\0') {
      fVar16 = (float)FUN_1431437a0(param_1 + 0x18,0);
    }
    if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
       ((**(ulonglong **)(param_1 + 0x38) & 1) != 0)) {
      fVar15 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0,param_5);
      fVar16 = fVar16 + fVar15;
    }
    *param_2 = fVar16 + *param_2;
    if (((*(byte *)(param_2 + 7) & 2) == 0) &&
       (((*(byte *)(param_1 + 0xc1) & 0x10) != 0 || (*(longlong *)(param_1 + 0x80) == 0)))) {
      *(byte *)(param_2 + 7) =
           (*(byte *)(param_1 + 0xc1) & 0x20 | 0x40) >> 5 | *(byte *)(param_2 + 7) & 0xfe;
    }
    pbVar1 = *(byte **)(param_1 + 0x98);
    local_res8[0] = DAT_1467be138;
    pfVar12 = pfVar14;
    if (pbVar1 != (byte *)0x0) {
      pfVar8 = pfVar14;
      do {
        uVar11 = (int)pfVar8 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar11 + (longlong)pbVar1) == 6) {
          pfVar12 = (float *)(pbVar1 + (longlong)pfVar8 * 4 +
                                       ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
          break;
        }
        pfVar8 = (float *)(ulonglong)uVar11;
      } while (uVar11 < *pbVar1);
    }
    fVar16 = 0.0;
    pfVar8 = local_res8;
    if (pfVar12 != (float *)0x0) {
      pfVar8 = pfVar12;
    }
    local_res8[0] = *pfVar8;
    param_2[6] = local_res8[0] + param_2[6];
    cVar6 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,7);
    if (cVar6 != '\0') {
      fVar16 = (float)FUN_1431437a0(param_1 + 0x18,7);
    }
    if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
       ((**(ulonglong **)(param_1 + 0x38) >> 7 & 1) != 0)) {
      fVar15 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,7,param_5);
      fVar16 = fVar16 + fVar15;
    }
    param_2[6] = fVar16 + param_2[6];
  }
  if ((param_3 & 2) != 0) {
    pbVar1 = *(byte **)(param_1 + 0x98);
    local_res8[0] = DAT_1467be128;
    pfVar12 = pfVar14;
    if (pbVar1 != (byte *)0x0) {
      pfVar8 = pfVar14;
      do {
        uVar11 = (int)pfVar8 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar11 + (longlong)pbVar1) == 2) {
          pfVar12 = (float *)(pbVar1 + (longlong)pfVar8 * 4 +
                                       ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
          break;
        }
        pfVar8 = (float *)(ulonglong)uVar11;
      } while (uVar11 < *pbVar1);
    }
    fVar16 = 0.0;
    pfVar8 = local_res8;
    if (pfVar12 != (float *)0x0) {
      pfVar8 = pfVar12;
    }
    local_res8[0] = *pfVar8;
    param_2[2] = local_res8[0] + param_2[2];
    cVar6 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,2);
    if (cVar6 != '\0') {
      fVar16 = (float)FUN_1431437a0(param_1 + 0x18,2);
    }
    if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
       ((**(ulonglong **)(param_1 + 0x38) >> 2 & 1) != 0)) {
      fVar15 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,2,param_5);
      fVar16 = fVar16 + fVar15;
    }
    param_2[2] = fVar16 + param_2[2];
  }
  if ((param_3 & 4) != 0) {
    pbVar1 = *(byte **)(param_1 + 0x98);
    local_res8[0] = DAT_1467be12c;
    pfVar12 = pfVar14;
    if (pbVar1 != (byte *)0x0) {
      pfVar8 = pfVar14;
      do {
        uVar11 = (int)pfVar8 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar11 + (longlong)pbVar1) == 3) {
          pfVar12 = (float *)(pbVar1 + (longlong)pfVar8 * 4 +
                                       ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
          break;
        }
        pfVar8 = (float *)(ulonglong)uVar11;
      } while (uVar11 < *pbVar1);
    }
    fVar16 = 0.0;
    pfVar8 = local_res8;
    if (pfVar12 != (float *)0x0) {
      pfVar8 = pfVar12;
    }
    local_res8[0] = *pfVar8;
    param_2[3] = local_res8[0] + param_2[3];
    cVar6 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,3);
    if (cVar6 != '\0') {
      fVar16 = (float)FUN_1431437a0(param_1 + 0x18,3);
    }
    if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
       ((**(ulonglong **)(param_1 + 0x38) >> 3 & 1) != 0)) {
      fVar15 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,3,param_5);
      fVar16 = fVar16 + fVar15;
    }
    param_2[3] = fVar16 + param_2[3];
  }
  if ((param_3 & 8) != 0) {
    pbVar1 = *(byte **)(param_1 + 0x98);
    local_res8[0] = DAT_1467be130;
    pfVar12 = pfVar14;
    if (pbVar1 != (byte *)0x0) {
      pfVar8 = pfVar14;
      do {
        uVar11 = (int)pfVar8 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar11 + (longlong)pbVar1) == 4) {
          pfVar12 = (float *)(pbVar1 + (longlong)pfVar8 * 4 +
                                       ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
          break;
        }
        pfVar8 = (float *)(ulonglong)uVar11;
      } while (uVar11 < *pbVar1);
    }
    fVar16 = 0.0;
    pfVar8 = local_res8;
    if (pfVar12 != (float *)0x0) {
      pfVar8 = pfVar12;
    }
    local_res8[0] = *pfVar8;
    param_2[4] = local_res8[0] + param_2[4];
    cVar6 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,4);
    if (cVar6 != '\0') {
      fVar16 = (float)FUN_1431437a0(param_1 + 0x18,4);
    }
    if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
       ((**(ulonglong **)(param_1 + 0x38) >> 4 & 1) != 0)) {
      fVar15 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,4,param_5);
      fVar16 = fVar16 + fVar15;
    }
    param_2[4] = fVar16 + param_2[4];
  }
  if ((((param_3 & 0x20) != 0) && (((uint)param_2[9] & 1) == 0)) &&
     (((*(uint *)(param_1 + 0xa0) & 0x100000) != 0 || (*(longlong *)(param_1 + 0x80) == 0)))) {
    if ((*(ulonglong **)(param_1 + 0x38) == (ulonglong *)0x0) ||
       ((**(ulonglong **)(param_1 + 0x38) >> 0x25 & 1) == 0)) {
      pbVar1 = *(byte **)(param_1 + 0x98);
      local_res8[0] = DAT_1467be1a4;
      pfVar12 = pfVar14;
      if (pbVar1 != (byte *)0x0) {
        pfVar8 = pfVar14;
        do {
          uVar11 = (int)pfVar8 + 1;
          if (*(byte *)((longlong)(ulonglong)uVar11 + (longlong)pbVar1) == 0x21) {
            pfVar12 = (float *)(pbVar1 + (longlong)pfVar8 * 4 +
                                         ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
            break;
          }
          pfVar8 = (float *)(ulonglong)uVar11;
        } while (uVar11 < *pbVar1);
      }
      pfVar8 = local_res8;
      if (pfVar12 != (float *)0x0) {
        pfVar8 = pfVar12;
      }
      param_2[8] = *pfVar8;
    }
    else {
      fVar16 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x25,param_5);
      param_2[8] = fVar16;
    }
    *(byte *)(param_2 + 9) =
         (*(byte *)(param_1 + 0xc1) >> 5 ^ *(byte *)(param_2 + 9)) & 2 ^ *(byte *)(param_2 + 9) | 1;
  }
  CAkParameterNodeBase::GetVoiceProperties(param_1,param_2,param_4,param_5);
  pfVar12 = (float *)CONCAT44(param_6._4_4_,(float)param_6);
  if ((pfVar12 != (float *)0x0) && (pbVar1 = *(byte **)(param_1 + 0xb0), pbVar1 != (byte *)0x0)) {
    pfVar8 = pfVar14;
    do {
      uVar11 = (int)pfVar8 + 1;
      if (pbVar1[uVar11] == 0) {
        if (((ulonglong)(*pbVar1 + 4) & 0xfffffffc) + (longlong)pfVar8 * 8 +
            *(longlong *)(param_1 + 0xb0) != 0) {
          fVar16 = (float)RandomizerModifier::GetMod();
          *pfVar12 = fVar16 + *pfVar12;
        }
        break;
      }
      pfVar8 = (float *)(ulonglong)uVar11;
    } while (uVar11 < *pbVar1);
    pbVar1 = *(byte **)(param_1 + 0xb0);
    if (pbVar1 != (byte *)0x0) {
      pfVar8 = pfVar14;
      do {
        uVar11 = (int)pfVar8 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar11 + (longlong)pbVar1) == 2) {
          if (pbVar1 + (longlong)pfVar8 * 8 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) != (byte *)0x0
             ) {
            fVar16 = (float)RandomizerModifier::GetMod();
            pfVar12[2] = fVar16 + pfVar12[2];
          }
          break;
        }
        pfVar8 = (float *)(ulonglong)uVar11;
      } while (uVar11 < *pbVar1);
    }
    pbVar1 = *(byte **)(param_1 + 0xb0);
    if (pbVar1 != (byte *)0x0) {
      pfVar8 = pfVar14;
      do {
        uVar11 = (int)pfVar8 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar11 + (longlong)pbVar1) == 3) {
          if (pbVar1 + (longlong)pfVar8 * 8 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) != (byte *)0x0
             ) {
            fVar16 = (float)RandomizerModifier::GetMod();
            pfVar12[3] = fVar16 + pfVar12[3];
          }
          break;
        }
        pfVar8 = (float *)(ulonglong)uVar11;
      } while (uVar11 < *pbVar1);
    }
    pbVar1 = *(byte **)(param_1 + 0xb0);
    if (pbVar1 != (byte *)0x0) {
      pfVar8 = pfVar14;
      do {
        uVar11 = (int)pfVar8 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar11 + (longlong)pbVar1) == 4) {
          if (pbVar1 + (longlong)pfVar8 * 8 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) != (byte *)0x0
             ) {
            fVar16 = (float)RandomizerModifier::GetMod();
            pfVar12[4] = fVar16 + pfVar12[4];
          }
          break;
        }
        pfVar8 = (float *)(ulonglong)uVar11;
      } while (uVar11 < *pbVar1);
    }
    pbVar1 = *(byte **)(param_1 + 0xb0);
    if (pbVar1 != (byte *)0x0) {
      pfVar8 = pfVar14;
      do {
        uVar11 = (int)pfVar8 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar11 + (longlong)pbVar1) == 6) {
          if (pbVar1 + (longlong)pfVar8 * 8 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) != (byte *)0x0
             ) {
            fVar16 = (float)RandomizerModifier::GetMod();
            pfVar12[1] = fVar16 + pfVar12[1];
          }
          break;
        }
        pfVar8 = (float *)(ulonglong)uVar11;
      } while (uVar11 < *pbVar1);
    }
  }
  if ((*(char *)((longlong)param_2 + 0x82) == '\0') &&
     (((*(uint *)(param_1 + 0xa0) & 0xc3c00000) != 0 || (*(longlong *)(param_1 + 0x80) == 0)))) {
    *(undefined1 *)((longlong)param_2 + 0x82) = 1;
    if (*(longlong *)(param_1 + 0x90) == 0) {
      if ((*(uint *)(param_1 + 0xa0) & 0xc3c00000) != 0) {
        param_2[0xd] = 0.0;
        param_2[0xe] = 0.0;
        param_2[0x11] = 0.0;
        param_2[0x12] = 0.0;
        param_2[0x15] = 0.0;
        param_2[0x16] = 0.0;
        param_2[0x19] = 0.0;
        param_2[0x1a] = 0.0;
        param_2[0xf] = 0.0;
        param_2[0x10] = 0.0;
        param_2[0x13] = 0.0;
        param_2[0x14] = 0.0;
        param_2[0x17] = 0.0;
        param_2[0x18] = 0.0;
        param_2[0x1b] = 0.0;
        param_2[0x1c] = 0.0;
      }
    }
    else {
      pbVar1 = *(byte **)(param_1 + 0x98);
      param_6._0_4_ = DAT_1467be16c;
      pfVar8 = pfVar14;
      if (pbVar1 != (byte *)0x0) {
        pfVar9 = pfVar14;
        do {
          uVar11 = (int)pfVar9 + 1;
          if (*(byte *)((longlong)(ulonglong)uVar11 + (longlong)pbVar1) == 0x13) {
            pfVar8 = (float *)(pbVar1 + (longlong)pfVar9 * 4 +
                                        ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
            break;
          }
          pfVar9 = (float *)(ulonglong)uVar11;
        } while (uVar11 < *pbVar1);
      }
      fVar16 = 0.0;
      pfVar9 = (float *)&param_6;
      if (pfVar8 != (float *)0x0) {
        pfVar9 = pfVar8;
      }
      param_6._0_4_ = *pfVar9;
      param_2[0xd] = (float)param_6 + param_2[0xd];
      cVar6 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x27);
      if (cVar6 != '\0') {
        fVar16 = (float)FUN_1431437a0(param_1 + 0x18,0x27);
      }
      if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
         ((**(ulonglong **)(param_1 + 0x38) >> 0x27 & 1) != 0)) {
        fVar15 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x27,param_5);
        fVar16 = fVar16 + fVar15;
      }
      param_2[0xd] = fVar16 + param_2[0xd];
      pbVar1 = *(byte **)(param_1 + 0x98);
      param_6._0_4_ = DAT_1467be170;
      pfVar8 = pfVar14;
      if (pbVar1 != (byte *)0x0) {
        pfVar9 = pfVar14;
        do {
          uVar11 = (int)pfVar9 + 1;
          if (*(byte *)((longlong)(ulonglong)uVar11 + (longlong)pbVar1) == 0x14) {
            pfVar8 = (float *)(pbVar1 + (longlong)pfVar9 * 4 +
                                        ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
            break;
          }
          pfVar9 = (float *)(ulonglong)uVar11;
        } while (uVar11 < *pbVar1);
      }
      fVar16 = 0.0;
      pfVar9 = (float *)&param_6;
      if (pfVar8 != (float *)0x0) {
        pfVar9 = pfVar8;
      }
      param_6._0_4_ = *pfVar9;
      param_2[0xe] = (float)param_6 + param_2[0xe];
      cVar6 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x28);
      if (cVar6 != '\0') {
        fVar16 = (float)FUN_1431437a0(param_1 + 0x18,0x28);
      }
      if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
         ((**(ulonglong **)(param_1 + 0x38) >> 0x28 & 1) != 0)) {
        fVar15 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x28,param_5);
        fVar16 = fVar16 + fVar15;
      }
      param_2[0xe] = fVar16 + param_2[0xe];
      pbVar1 = *(byte **)(param_1 + 0x98);
      param_6._0_4_ = DAT_1467be174;
      pfVar8 = pfVar14;
      if (pbVar1 != (byte *)0x0) {
        pfVar9 = pfVar14;
        do {
          uVar11 = (int)pfVar9 + 1;
          if (*(byte *)((longlong)(ulonglong)uVar11 + (longlong)pbVar1) == 0x15) {
            pfVar8 = (float *)(pbVar1 + (longlong)pfVar9 * 4 +
                                        ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
            break;
          }
          pfVar9 = (float *)(ulonglong)uVar11;
        } while (uVar11 < *pbVar1);
      }
      fVar16 = 0.0;
      pfVar9 = (float *)&param_6;
      if (pfVar8 != (float *)0x0) {
        pfVar9 = pfVar8;
      }
      param_6._0_4_ = *pfVar9;
      param_2[0xf] = (float)param_6 + param_2[0xf];
      cVar6 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x29);
      if (cVar6 != '\0') {
        fVar16 = (float)FUN_1431437a0(param_1 + 0x18,0x29);
      }
      if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
         ((**(ulonglong **)(param_1 + 0x38) >> 0x29 & 1) != 0)) {
        fVar15 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x29,param_5);
        fVar16 = fVar16 + fVar15;
      }
      param_2[0xf] = fVar16 + param_2[0xf];
      pbVar1 = *(byte **)(param_1 + 0x98);
      param_6._0_4_ = DAT_1467be178;
      pfVar8 = pfVar14;
      if (pbVar1 != (byte *)0x0) {
        pfVar9 = pfVar14;
        do {
          uVar11 = (int)pfVar9 + 1;
          if (*(byte *)((longlong)(ulonglong)uVar11 + (longlong)pbVar1) == 0x16) {
            pfVar8 = (float *)(pbVar1 + (longlong)pfVar9 * 4 +
                                        ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
            break;
          }
          pfVar9 = (float *)(ulonglong)uVar11;
        } while (uVar11 < *pbVar1);
      }
      fVar16 = 0.0;
      pfVar9 = (float *)&param_6;
      if (pfVar8 != (float *)0x0) {
        pfVar9 = pfVar8;
      }
      param_6._0_4_ = *pfVar9;
      param_2[0x10] = (float)param_6 + param_2[0x10];
      cVar6 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x2a);
      if (cVar6 != '\0') {
        fVar16 = (float)FUN_1431437a0(param_1 + 0x18,0x2a);
      }
      if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
         ((**(ulonglong **)(param_1 + 0x38) >> 0x2a & 1) != 0)) {
        fVar15 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x2a,param_5);
        fVar16 = fVar16 + fVar15;
      }
      param_2[0x10] = fVar16 + param_2[0x10];
      pbVar1 = *(byte **)(param_1 + 0x98);
      param_6._0_4_ = DAT_1467be210;
      pfVar8 = pfVar14;
      if (pbVar1 != (byte *)0x0) {
        pfVar9 = pfVar14;
        do {
          uVar11 = (int)pfVar9 + 1;
          if (*(byte *)((longlong)(ulonglong)uVar11 + (longlong)pbVar1) == 0x3c) {
            pfVar8 = (float *)(pbVar1 + (longlong)pfVar9 * 4 +
                                        ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
            break;
          }
          pfVar9 = (float *)(ulonglong)uVar11;
        } while (uVar11 < *pbVar1);
      }
      fVar16 = 0.0;
      pfVar9 = (float *)&param_6;
      if (pfVar8 != (float *)0x0) {
        pfVar9 = pfVar8;
      }
      param_6._0_4_ = *pfVar9;
      param_2[0x11] = (float)param_6 + param_2[0x11];
      cVar6 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x2f);
      if (cVar6 != '\0') {
        fVar16 = (float)FUN_1431437a0(param_1 + 0x18,0x2f);
      }
      if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
         ((**(ulonglong **)(param_1 + 0x38) >> 0x2f & 1) != 0)) {
        fVar15 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x2f,param_5);
        fVar16 = fVar16 + fVar15;
      }
      param_2[0x11] = fVar16 + param_2[0x11];
      pbVar1 = *(byte **)(param_1 + 0x98);
      param_6._0_4_ = DAT_1467be214;
      pfVar8 = pfVar14;
      if (pbVar1 != (byte *)0x0) {
        pfVar9 = pfVar14;
        do {
          uVar11 = (int)pfVar9 + 1;
          if (*(byte *)((longlong)(ulonglong)uVar11 + (longlong)pbVar1) == 0x3d) {
            pfVar8 = (float *)(pbVar1 + (longlong)pfVar9 * 4 +
                                        ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
            break;
          }
          pfVar9 = (float *)(ulonglong)uVar11;
        } while (uVar11 < *pbVar1);
      }
      fVar16 = 0.0;
      pfVar9 = (float *)&param_6;
      if (pfVar8 != (float *)0x0) {
        pfVar9 = pfVar8;
      }
      param_6._0_4_ = *pfVar9;
      param_2[0x12] = (float)param_6 + param_2[0x12];
      cVar6 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x30);
      if (cVar6 != '\0') {
        fVar16 = (float)FUN_1431437a0(param_1 + 0x18,0x30);
      }
      if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
         ((**(ulonglong **)(param_1 + 0x38) >> 0x30 & 1) != 0)) {
        fVar15 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x30,param_5);
        fVar16 = fVar16 + fVar15;
      }
      param_2[0x12] = fVar16 + param_2[0x12];
      pbVar1 = *(byte **)(param_1 + 0x98);
      param_6._0_4_ = DAT_1467be218;
      pfVar8 = pfVar14;
      if (pbVar1 != (byte *)0x0) {
        pfVar9 = pfVar14;
        do {
          uVar11 = (int)pfVar9 + 1;
          if (*(byte *)((longlong)(ulonglong)uVar11 + (longlong)pbVar1) == 0x3e) {
            pfVar8 = (float *)(pbVar1 + (longlong)pfVar9 * 4 +
                                        ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
            break;
          }
          pfVar9 = (float *)(ulonglong)uVar11;
        } while (uVar11 < *pbVar1);
      }
      fVar16 = 0.0;
      pfVar9 = (float *)&param_6;
      if (pfVar8 != (float *)0x0) {
        pfVar9 = pfVar8;
      }
      param_6._0_4_ = *pfVar9;
      param_2[0x13] = (float)param_6 + param_2[0x13];
      cVar6 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x31);
      if (cVar6 != '\0') {
        fVar16 = (float)FUN_1431437a0(param_1 + 0x18,0x31);
      }
      if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
         ((**(ulonglong **)(param_1 + 0x38) >> 0x31 & 1) != 0)) {
        fVar15 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x31,param_5);
        fVar16 = fVar16 + fVar15;
      }
      param_2[0x13] = fVar16 + param_2[0x13];
      pbVar1 = *(byte **)(param_1 + 0x98);
      param_6._0_4_ = DAT_1467be21c;
      pfVar8 = pfVar14;
      if (pbVar1 != (byte *)0x0) {
        pfVar9 = pfVar14;
        do {
          uVar11 = (int)pfVar9 + 1;
          if (*(byte *)((longlong)(ulonglong)uVar11 + (longlong)pbVar1) == 0x3f) {
            pfVar8 = (float *)(pbVar1 + (longlong)pfVar9 * 4 +
                                        ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
            break;
          }
          pfVar9 = (float *)(ulonglong)uVar11;
        } while (uVar11 < *pbVar1);
      }
      fVar16 = 0.0;
      pfVar9 = (float *)&param_6;
      if (pfVar8 != (float *)0x0) {
        pfVar9 = pfVar8;
      }
      param_6._0_4_ = *pfVar9;
      param_2[0x14] = (float)param_6 + param_2[0x14];
      cVar6 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x32);
      if (cVar6 != '\0') {
        fVar16 = (float)FUN_1431437a0(param_1 + 0x18,0x32);
      }
      if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
         ((**(ulonglong **)(param_1 + 0x38) >> 0x32 & 1) != 0)) {
        fVar15 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x32,param_5);
        fVar16 = fVar16 + fVar15;
      }
      param_2[0x14] = fVar16 + param_2[0x14];
      pbVar1 = *(byte **)(param_1 + 0x98);
      param_6._0_4_ = DAT_1467be220;
      pfVar8 = pfVar14;
      if (pbVar1 != (byte *)0x0) {
        pfVar9 = pfVar14;
        do {
          uVar11 = (int)pfVar9 + 1;
          if (*(byte *)((longlong)(ulonglong)uVar11 + (longlong)pbVar1) == 0x40) {
            pfVar8 = (float *)(pbVar1 + (longlong)pfVar9 * 4 +
                                        ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
            break;
          }
          pfVar9 = (float *)(ulonglong)uVar11;
        } while (uVar11 < *pbVar1);
      }
      fVar16 = 0.0;
      pfVar9 = (float *)&param_6;
      if (pfVar8 != (float *)0x0) {
        pfVar9 = pfVar8;
      }
      param_6._0_4_ = *pfVar9;
      param_2[0x15] = (float)param_6 + param_2[0x15];
      cVar6 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x33);
      if (cVar6 != '\0') {
        fVar16 = (float)FUN_1431437a0(param_1 + 0x18,0x33);
      }
      if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
         ((**(ulonglong **)(param_1 + 0x38) >> 0x33 & 1) != 0)) {
        fVar15 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x33,param_5);
        fVar16 = fVar16 + fVar15;
      }
      param_2[0x15] = fVar16 + param_2[0x15];
      pbVar1 = *(byte **)(param_1 + 0x98);
      param_6._0_4_ = DAT_1467be224;
      pfVar8 = pfVar14;
      if (pbVar1 != (byte *)0x0) {
        pfVar9 = pfVar14;
        do {
          uVar11 = (int)pfVar9 + 1;
          if (*(byte *)((longlong)(ulonglong)uVar11 + (longlong)pbVar1) == 0x41) {
            pfVar8 = (float *)(pbVar1 + (longlong)pfVar9 * 4 +
                                        ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
            break;
          }
          pfVar9 = (float *)(ulonglong)uVar11;
        } while (uVar11 < *pbVar1);
      }
      fVar16 = 0.0;
      pfVar9 = (float *)&param_6;
      if (pfVar8 != (float *)0x0) {
        pfVar9 = pfVar8;
      }
      param_6._0_4_ = *pfVar9;
      param_2[0x16] = (float)param_6 + param_2[0x16];
      cVar6 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x34);
      if (cVar6 != '\0') {
        fVar16 = (float)FUN_1431437a0(param_1 + 0x18,0x34);
      }
      if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
         ((**(ulonglong **)(param_1 + 0x38) >> 0x34 & 1) != 0)) {
        fVar15 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x34,param_5);
        fVar16 = fVar16 + fVar15;
      }
      param_2[0x16] = fVar16 + param_2[0x16];
      pbVar1 = *(byte **)(param_1 + 0x98);
      param_6._0_4_ = DAT_1467be228;
      pfVar8 = pfVar14;
      if (pbVar1 != (byte *)0x0) {
        pfVar9 = pfVar14;
        do {
          uVar11 = (int)pfVar9 + 1;
          if (*(byte *)((longlong)(ulonglong)uVar11 + (longlong)pbVar1) == 0x42) {
            pfVar8 = (float *)(pbVar1 + (longlong)pfVar9 * 4 +
                                        ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
            break;
          }
          pfVar9 = (float *)(ulonglong)uVar11;
        } while (uVar11 < *pbVar1);
      }
      fVar16 = 0.0;
      pfVar9 = (float *)&param_6;
      if (pfVar8 != (float *)0x0) {
        pfVar9 = pfVar8;
      }
      param_6._0_4_ = *pfVar9;
      param_2[0x17] = (float)param_6 + param_2[0x17];
      cVar6 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x35);
      if (cVar6 != '\0') {
        fVar16 = (float)FUN_1431437a0(param_1 + 0x18,0x35);
      }
      if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
         ((**(ulonglong **)(param_1 + 0x38) >> 0x35 & 1) != 0)) {
        fVar15 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x35,param_5);
        fVar16 = fVar16 + fVar15;
      }
      param_2[0x17] = fVar16 + param_2[0x17];
      pbVar1 = *(byte **)(param_1 + 0x98);
      param_6._0_4_ = DAT_1467be22c;
      pfVar8 = pfVar14;
      if (pbVar1 != (byte *)0x0) {
        pfVar9 = pfVar14;
        do {
          uVar11 = (int)pfVar9 + 1;
          if (*(byte *)((longlong)(ulonglong)uVar11 + (longlong)pbVar1) == 0x43) {
            pfVar8 = (float *)(pbVar1 + (longlong)pfVar9 * 4 +
                                        ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
            break;
          }
          pfVar9 = (float *)(ulonglong)uVar11;
        } while (uVar11 < *pbVar1);
      }
      fVar16 = 0.0;
      pfVar9 = (float *)&param_6;
      if (pfVar8 != (float *)0x0) {
        pfVar9 = pfVar8;
      }
      param_6._0_4_ = *pfVar9;
      param_2[0x18] = (float)param_6 + param_2[0x18];
      cVar6 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x36);
      if (cVar6 != '\0') {
        fVar16 = (float)FUN_1431437a0(param_1 + 0x18,0x36);
      }
      if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
         ((**(ulonglong **)(param_1 + 0x38) >> 0x36 & 1) != 0)) {
        fVar15 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x36,param_5);
        fVar16 = fVar16 + fVar15;
      }
      param_2[0x18] = fVar16 + param_2[0x18];
      param_2[0x19] = **(float **)(param_1 + 0x90);
      param_2[0x1a] = *(float *)(*(longlong *)(param_1 + 0x90) + 4);
      param_2[0x1b] = *(float *)(*(longlong *)(param_1 + 0x90) + 8);
      param_2[0x1c] = *(float *)(*(longlong *)(param_1 + 0x90) + 0xc);
    }
  }
  if ((*(char *)((longlong)param_2 + 0x81) == '\0') &&
     (((*(uint *)(param_1 + 0xa0) & 0x200000) != 0 || (*(longlong *)(param_1 + 0x80) == 0)))) {
    *(undefined1 *)((longlong)param_2 + 0x81) = 1;
    pbVar1 = *(byte **)(param_1 + 0x98);
    param_6._0_4_ = DAT_1467be17c;
    pfVar8 = pfVar14;
    if (pbVar1 != (byte *)0x0) {
      pfVar9 = pfVar14;
      do {
        uVar11 = (int)pfVar9 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar11 + (longlong)pbVar1) == 0x17) {
          pfVar8 = (float *)(pbVar1 + (longlong)pfVar9 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                            );
          break;
        }
        pfVar9 = (float *)(ulonglong)uVar11;
      } while (uVar11 < *pbVar1);
    }
    fVar16 = 0.0;
    pfVar9 = (float *)&param_6;
    if (pfVar8 != (float *)0x0) {
      pfVar9 = pfVar8;
    }
    param_6._0_4_ = *pfVar9;
    param_2[0x1d] = (float)param_6 + param_2[0x1d];
    cVar6 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x26);
    if (cVar6 != '\0') {
      fVar16 = (float)FUN_1431437a0(param_1 + 0x18,0x26);
    }
    if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
       ((**(ulonglong **)(param_1 + 0x38) >> 0x26 & 1) != 0)) {
      fVar15 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x26,param_5);
      fVar16 = fVar16 + fVar15;
    }
    param_2[0x1d] = fVar16 + param_2[0x1d];
    pbVar1 = *(byte **)(param_1 + 0x98);
    param_6._0_4_ = DAT_1467be230;
    pfVar8 = pfVar14;
    if (pbVar1 != (byte *)0x0) {
      pfVar9 = pfVar14;
      do {
        uVar11 = (int)pfVar9 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar11 + (longlong)pbVar1) == 0x44) {
          pfVar8 = (float *)(pbVar1 + (longlong)pfVar9 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                            );
          break;
        }
        pfVar9 = (float *)(ulonglong)uVar11;
      } while (uVar11 < *pbVar1);
    }
    fVar16 = 0.0;
    pfVar9 = (float *)&param_6;
    if (pfVar8 != (float *)0x0) {
      pfVar9 = pfVar8;
    }
    param_6._0_4_ = *pfVar9;
    param_2[0x1e] = (float)param_6 + param_2[0x1e];
    cVar6 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x37);
    if (cVar6 != '\0') {
      fVar16 = (float)FUN_1431437a0(param_1 + 0x18,0x37);
    }
    if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
       ((**(ulonglong **)(param_1 + 0x38) >> 0x37 & 1) != 0)) {
      fVar15 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x37,param_5);
      fVar16 = fVar16 + fVar15;
    }
    param_2[0x1e] = fVar16 + param_2[0x1e];
    pbVar1 = *(byte **)(param_1 + 0x98);
    param_6._0_4_ = DAT_1467be234;
    pfVar8 = pfVar14;
    if (pbVar1 != (byte *)0x0) {
      pfVar9 = pfVar14;
      do {
        uVar11 = (int)pfVar9 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar11 + (longlong)pbVar1) == 0x45) {
          pfVar8 = (float *)(pbVar1 + (longlong)pfVar9 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                            );
          break;
        }
        pfVar9 = (float *)(ulonglong)uVar11;
      } while (uVar11 < *pbVar1);
    }
    pfVar9 = (float *)&param_6;
    if (pfVar8 != (float *)0x0) {
      pfVar9 = pfVar8;
    }
    param_6._0_4_ = *pfVar9;
    param_2[0x1f] = (float)param_6 + param_2[0x1f];
    cVar6 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,0x38);
    if (cVar6 != '\0') {
      fVar17 = (float)FUN_1431437a0(param_1 + 0x18,0x38);
    }
    if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
       ((**(ulonglong **)(param_1 + 0x38) >> 0x38 & 1) != 0)) {
      fVar16 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x38,param_5);
      fVar17 = fVar17 + fVar16;
    }
    param_2[0x1f] = fVar17 + param_2[0x1f];
    *(byte *)(param_2 + 0x20) = *(byte *)(param_1 + 0xa9) & 1;
  }
  lVar5 = param_7;
  if (param_7 != 0) {
    if ((*(longlong *)(param_1 + 0x38) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x38) + 0x20) != '\0')) {
      local_68 = 2;
      local_78 = param_1 + 0x30;
      local_70 = param_1;
      FUN_14313a450(DAT_146b50ae0,&local_78,param_7);
    }
  }
  if ((*(char *)((longlong)param_2 + 0x83) == '\0') && (*(longlong *)(param_1 + 0x88) != 0)) {
    param_2[10] = 0.0;
    param_2[0xb] = 0.0;
    param_2[0xc] = 0.0;
    FUN_143175020(param_1,param_2,param_5);
    *(undefined1 *)((longlong)param_2 + 0x83) = 1;
  }
  plVar3 = param_9;
  if ((param_8 == '\0') || (plVar10 = *(longlong **)(param_1 + 0x88), plVar10 == (longlong *)0x0)) {
    plVar3 = *(longlong **)(param_1 + 0x80);
    if ((plVar3 != (longlong *)0x0) && (param_9 != plVar3)) {
      (**(code **)(*plVar3 + 0x150))
                (plVar3,param_2,local_res18,param_4,param_5,pfVar12,lVar5,param_8,param_9);
    }
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0x80);
    if ((plVar2 != (longlong *)0x0) && (param_9 != plVar2)) {
      (**(code **)(*plVar2 + 0x150))
                (plVar2,param_2,local_res18,param_4,param_5,pfVar12,lVar5,0,param_9);
      plVar10 = *(longlong **)(param_1 + 0x88);
    }
    (**(code **)(*plVar10 + 0x150))
              (plVar10,param_2,local_res18,param_4,param_5,pfVar12,lVar5,0,plVar3);
  }
  puVar4 = *(ulonglong **)(param_1 + 0xb8);
  if (puVar4 != (ulonglong *)0x0) {
    puVar13 = (undefined8 *)*puVar4;
    pfVar12 = (float *)(ulonglong)(uint)puVar4[1];
    if (puVar13 + (longlong)(ulonglong)(uint)puVar4[1] < puVar13) {
      pfVar12 = pfVar14;
    }
    if (pfVar12 != (float *)0x0) {
      do {
        FUN_143192c30(*puVar13,param_1,param_2,local_res18,param_4,param_5,lVar5);
        pfVar14 = (float *)((longlong)pfVar14 + 1);
        puVar13 = puVar13 + 1;
      } while (pfVar14 != pfVar12);
    }
  }
  return 1;
}



// FUNCTION 1431a32d0 GetFX body=236 status=ok
// SIG undefined GetFX(void)

void CAkParameterNode::GetFX
               (longlong param_1,ulonglong param_2,longlong *param_3,undefined8 param_4)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  param_2 = param_2 & 0xffffffff;
  if (((*(uint *)(param_1 + 0xa0) & 0x1f000) == 0) &&
     (plVar3 = *(longlong **)(param_1 + 0x80), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x1c8))(plVar3,param_2);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x68);
    if (lVar2 == 0) {
      plVar3 = (longlong *)*param_3;
      *param_3 = 0;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
      }
      *(undefined2 *)(param_3 + 1) = 0;
    }
    else {
      if (*(int *)(lVar2 + 4 + param_2 * 8) == 0) {
        plVar3 = (longlong *)*param_3;
        *param_3 = 0;
      }
      else if (*(char *)(lVar2 + 9 + param_2 * 8) == '\0') {
        lVar2 = CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(DAT_146b50af8 + 0x2c0);
        plVar3 = (longlong *)*param_3;
        *param_3 = lVar2;
      }
      else {
        lVar2 = CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(DAT_146b50af8 + 0x280);
        plVar3 = (longlong *)*param_3;
        *param_3 = lVar2;
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
      }
      uVar1 = CAkParameterNodeBase::GetBypassFX(param_1,param_2,param_4);
      *(undefined2 *)(param_3 + 1) = uVar1;
    }
  }
  return;
}



// FUNCTION 1431a33c0 FUN_1431a33c0 body=209 status=ok
// SIG undefined FUN_1431a33c0(void)

void FUN_1431a33c0(longlong param_1,ulonglong param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  uint *puVar6;
  uint *puVar7;
  
  if (((*(uint *)(param_1 + 0xa0) & 0x1f000) == 0) &&
     (plVar4 = *(longlong **)(param_1 + 0x80), plVar4 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001431a33f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x1d0))(plVar4);
    return;
  }
  *param_4 = 0xffffffff;
  lVar3 = *(longlong *)(param_1 + 0x68);
  if (lVar3 != 0) {
    uVar2 = *(undefined4 *)(lVar3 + 4 + (param_2 & 0xffffffff) * 8);
    if (*(char *)(lVar3 + 9 + (param_2 & 0xffffffff) * 8) == '\0') {
      plVar4 = (longlong *)
               CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(DAT_146b50af8 + 0x2c0,uVar2);
    }
    else {
      plVar4 = (longlong *)
               CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(DAT_146b50af8 + 0x280,uVar2);
    }
    if (plVar4 != (longlong *)0x0) {
      piVar5 = (int *)plVar4[8];
      piVar1 = piVar5 + (ulonglong)*(uint *)(plVar4 + 9) * 2;
      for (; (piVar5 != piVar1 && (*piVar5 != param_3)); piVar5 = piVar5 + 2) {
      }
      puVar6 = (uint *)0x0;
      puVar7 = (uint *)(piVar5 + 1);
      if (piVar5 == piVar1) {
        puVar7 = puVar6;
      }
      if (puVar7 != (uint *)0x0) {
        puVar6 = (uint *)(ulonglong)*puVar7;
      }
      *param_4 = (int)puVar6;
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  return;
}



// FUNCTION 1431a34a0 GetMidiNoteOffAction body=70 status=ok
// SIG undefined GetMidiNoteOffAction(void)

undefined4 CAkParameterNode::GetMidiNoteOffAction(undefined8 param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = GetMidiPlayOnNoteType();
  if (iVar3 == 2) {
    return 1;
  }
  cVar2 = CAkParameterNodeBase::IsMidiBreakLoopOnNoteOff(param_1);
  uVar1 = 0;
  if (cVar2 != '\0') {
    uVar1 = 2;
  }
  return uVar1;
}



// FUNCTION 1431a34f0 GetMidiNoteOnAction body=24 status=ok
// SIG undefined GetMidiNoteOnAction(void)

bool CAkParameterNode::GetMidiNoteOnAction(void)

{
  int iVar1;
  
  iVar1 = GetMidiPlayOnNoteType();
  return iVar1 == 1;
}



// FUNCTION 1431a3510 GetMidiPlayOnNoteType body=133 status=ok
// SIG undefined GetMidiPlayOnNoteType(void)

undefined4 CAkParameterNode::GetMidiPlayOnNoteType(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 local_res8 [8];
  
  lVar2 = *(longlong *)(param_1 + 0x80);
  while ((lVar1 = lVar2, lVar1 != 0 && ((*(byte *)(param_1 + 0xa9) & 0x20) == 0))) {
    lVar2 = *(longlong *)(lVar1 + 0x80);
    param_1 = lVar1;
  }
  pbVar3 = *(byte **)(param_1 + 0x98);
  pbVar6 = (byte *)0x0;
  local_res8[0] = DAT_1467be1d8;
  if (pbVar3 != (byte *)0x0) {
    pbVar4 = pbVar6;
    do {
      uVar5 = (int)pbVar4 + 1;
      if (((byte *)(ulonglong)uVar5)[(longlong)pbVar3] == 0x2e) {
        pbVar6 = pbVar3 + (longlong)pbVar4 * 4 + ((ulonglong)(*pbVar3 + 4) & 0xfffffffc);
        break;
      }
      pbVar4 = (byte *)(ulonglong)uVar5;
    } while (uVar5 < *pbVar3);
  }
  pbVar3 = (byte *)local_res8;
  if (pbVar6 != (byte *)0x0) {
    pbVar3 = pbVar6;
  }
  return *(undefined4 *)pbVar3;
}



// FUNCTION 1431a35a0 GetVirtualBehavior body=66 status=ok
// SIG undefined GetVirtualBehavior(void)

byte CAkParameterNode::GetVirtualBehavior(longlong param_1,uint *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  bVar1 = *(byte *)(param_1 + 0xa8);
  while (((bVar1 & 4) == 0 && (lVar2 = *(longlong *)(param_1 + 0x80), lVar2 != 0))) {
    bVar1 = *(byte *)(lVar2 + 0xa8);
    param_1 = lVar2;
  }
  *param_2 = *(byte *)(param_1 + 0xc0) >> 3 & 7;
  return *(byte *)(param_1 + 0xc1) & 0xf;
}



// FUNCTION 1431a35f0 FUN_1431a35f0 body=553 status=ok
// SIG undefined FUN_1431a35f0(void)

int FUN_1431a35f0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_res10 [2];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined8 local_60;
  
  if ((*(byte *)(param_2 + 0x188) & 4) != 0) {
    return 1;
  }
  iVar4 = 1;
  if ((*(byte *)(param_2 + 0x184) & 1) == 0) {
    local_88 = *(undefined8 *)(param_2 + 0x10);
    pbVar1 = *(byte **)(param_1 + 0x98);
    pfVar8 = (float *)0x0;
    local_80 = *(undefined4 *)(param_2 + 0x34);
    local_res10[0] = DAT_1467be20c;
    local_78 = 0;
    local_70 = 0xff;
    local_68 = 0xff;
    local_60 = 0;
    pfVar7 = pfVar8;
    if (pbVar1 != (byte *)0x0) {
      pfVar5 = pfVar8;
      do {
        uVar6 = (int)pfVar5 + 1;
        if (*(byte *)((longlong)(ulonglong)uVar6 + (longlong)pbVar1) == 0x3b) {
          pfVar7 = (float *)(pbVar1 + (longlong)pfVar5 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                            );
          break;
        }
        pfVar5 = (float *)(ulonglong)uVar6;
      } while (uVar6 < *pbVar1);
    }
    fVar11 = 0.0;
    pfVar5 = local_res10;
    if (pfVar7 != (float *)0x0) {
      pfVar5 = pfVar7;
    }
    fVar10 = *pfVar5;
    local_res10[0] = fVar10;
    cVar2 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(param_1 + 0x18,6);
    if (cVar2 != '\0') {
      fVar11 = (float)FUN_1431437a0(param_1 + 0x18,6);
    }
    if ((*(ulonglong **)(param_1 + 0x38) != (ulonglong *)0x0) &&
       ((**(ulonglong **)(param_1 + 0x38) >> 6 & 1) != 0)) {
      fVar9 = (float)FUN_143134160(g_pRTPCMgr,param_1 + 0x30,6,&local_88);
      fVar11 = fVar11 + fVar9;
    }
    pbVar1 = *(byte **)(param_1 + 0xb0);
    fVar10 = fVar10 + fVar11;
    if (pbVar1 != (byte *)0x0) {
      do {
        uVar6 = (int)pfVar8 + 1;
        if (pbVar1[uVar6] == 0x3b) {
          if (pbVar1 + (longlong)pfVar8 * 8 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) != (byte *)0x0
             ) {
            fVar11 = (float)RandomizerModifier::GetMod();
            fVar10 = fVar10 + fVar11;
          }
          break;
        }
        pfVar8 = (float *)(ulonglong)uVar6;
      } while (uVar6 < *pbVar1);
    }
    if (0.0 < fVar10) {
      if (*(int *)(param_2 + 0x90) == 0) {
        iVar4 = FUN_1431a1440(param_1,fVar10,param_2);
        if (iVar4 == 1) {
          return 3;
        }
      }
      else {
        iVar3 = AkTimeConv::SecondsToSamples((double)fVar10);
        *(int *)(param_2 + 0x84) = *(int *)(param_2 + 0x84) + iVar3;
      }
    }
  }
  else {
    *(byte *)(param_2 + 0x184) = *(byte *)(param_2 + 0x184) & 0xfe;
  }
  return iVar4;
}



// FUNCTION 1431a3820 FUN_1431a3820 body=7 status=ok
// SIG undefined FUN_1431a3820(void)

void FUN_1431a3820(void)

{
  DAT_146b51f48 = DAT_146b51f48 + 1;
  return;
}



// FUNCTION 1431a3830 FUN_1431a3830 body=325 status=ok
// SIG undefined FUN_1431a3830(void)

int FUN_1431a3830(longlong param_1,longlong param_2,char param_3,char param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 1;
  if (((param_3 == '\0') ||
      (iVar2 = FUN_1431768c0(param_1,*(byte *)(param_2 + 0x18) & 1), iVar2 == 1)) &&
     (*(char *)(param_2 + 0x1c) == '\0')) {
    if ((*(longlong *)(param_1 + 0x78) == 0) ||
       ((*(byte *)(*(longlong *)(param_1 + 0x78) + 0x58) & 1) != 0)) {
      if (param_4 == '\0') {
        iVar2 = FUN_143177250(param_1,param_2,param_3);
      }
    }
    else {
      iVar2 = FUN_143177000(param_1,param_2,param_3);
    }
    *(byte *)(param_2 + 0x1c) = *(byte *)(param_1 + 0xaa) >> 2 & 1;
  }
  uVar1 = *(undefined1 *)(param_2 + 0x1c);
  iVar4 = iVar2;
  if (((*(ushort *)(param_2 + 0x18) & 1) != 0) && (*(longlong *)(param_1 + 0x88) != 0)) {
    *(undefined1 *)(param_2 + 0x1c) = 0;
    *(ushort *)(param_2 + 0x18) = *(ushort *)(param_2 + 0x18) & 0xfffe;
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x118))
                      (*(longlong **)(param_1 + 0x88),param_2,param_3,param_4);
    if ((iVar3 != 1) && ((iVar4 = iVar3, iVar3 == 0x50 && (iVar4 = iVar2, iVar2 == 1)))) {
      iVar4 = 0x50;
    }
  }
  iVar2 = iVar4;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    *(undefined1 *)(param_2 + 0x1c) = uVar1;
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x118))
                      (*(longlong **)(param_1 + 0x80),param_2,param_3,param_4);
    if (((iVar3 != 1) && (iVar2 = iVar3, iVar3 == 0x50)) && (iVar2 = iVar4, iVar4 == 1)) {
      iVar2 = 0x50;
    }
  }
  return iVar2;
}



// FUNCTION 1431a3980 IsOrIsChildOf body=81 status=ok
// SIG undefined IsOrIsChildOf(void)

char CAkParameterNode::IsOrIsChildOf(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = false;
  do {
    if (param_1 == 0) {
      return '\0';
    }
    cVar2 = param_2 == param_1;
    if (((!(bool)cVar2) && (!bVar1)) && (*(longlong *)(param_1 + 0x88) != 0)) {
      cVar2 = CAkBus::IsOrIsChildOf(*(longlong *)(param_1 + 0x88),param_2);
      bVar1 = true;
    }
    param_1 = *(longlong *)(param_1 + 0x80);
  } while (cVar2 == '\0');
  return cVar2;
}



// FUNCTION 1431a39e0 Mute body=75 status=ok
// SIG undefined Mute(void)

void CAkParameterNode::Mute
               (longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x220))();
  if (lVar1 != 0) {
    CAkParameterNodeBase::StartSisMuteTransitions(param_1,lVar1,0,param_3,param_4);
  }
  return;
}



// FUNCTION 1431a3a30 PlayAndContinueAlternate body=872 status=ok
// SIG undefined PlayAndContinueAlternate(void)

int CAkParameterNode::PlayAndContinueAlternate(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  float fVar12;
  undefined2 local_res10 [4];
  undefined1 local_res18 [16];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined8 local_50;
  
  if ((*(longlong *)(param_2 + 0x88) == 0) ||
     (*(longlong *)(*(longlong *)(param_2 + 0x88) + 0x18) == 0)) {
    return 2;
  }
  uVar11 = *(uint *)(param_2 + 0x38);
  while ((uVar11 != 0 &&
         ((uVar11 = uVar11 - 1, 0x1f < uVar11 ||
          ((*(uint *)(param_2 + 0x7c) >> ((ulonglong)uVar11 & 0x3f) & 1) == 0))))) {
    *(uint *)(param_2 + 0x38) = uVar11;
  }
  lVar10 = *(longlong *)(param_2 + 0x88);
  local_res10[0] = 0;
  iVar4 = *(int *)(*(longlong *)(lVar10 + 0x18) + 8);
  do {
    iVar7 = 2;
    if (iVar4 == 0) {
LAB_1431a3d31:
      lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x88) + 0x18);
      if ((lVar10 != 0) && (iVar7 != 1)) {
        if (iVar7 == 3) {
          return 1;
        }
        *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18) = 0;
        if (lVar10 != 0) {
          CAkContinuationList::Release();
        }
      }
      if (iVar7 == 3) {
        return 1;
      }
      return iVar7;
    }
    uVar8 = (ulonglong)*(uint *)(*(longlong **)(lVar10 + 0x18) + 1);
    lVar1 = **(longlong **)(lVar10 + 0x18);
    lVar2 = *(longlong *)(lVar1 + -0x10 + uVar8 * 0x28);
    if (lVar2 == 0) {
      plVar9 = (longlong *)
               CAkRanSeqCntr::GetNextToPlayContinuous
                         (*(undefined8 *)(lVar1 + -0x28 + uVar8 * 0x28),
                          *(undefined8 *)(param_2 + 0x10),local_res10,local_res18,
                          lVar1 + (uVar8 * 5 + -4) * 8,lVar1 + (uVar8 * 5 + -3) * 8);
      if (plVar9 != (longlong *)0x0) {
        *(undefined2 *)(param_2 + 0x3c + (ulonglong)(*(int *)(param_2 + 0x38) - 1) * 2) =
             local_res10[0];
        lVar10 = plVar9[2];
        (**(code **)(*plVar9 + 0x10))(plVar9);
        iVar4 = CAkRanSeqCntr::TransitionMode(*(undefined8 *)(lVar1 + -0x28 + uVar8 * 0x28));
        local_68 = 0;
        local_78 = *(undefined8 *)(param_2 + 0x10);
        local_70 = *(undefined4 *)(param_2 + 0x34);
        local_60 = 0xff;
        local_58 = 0xff;
        local_50 = 0;
        fVar12 = (float)CAkRanSeqCntr::TransitionTime
                                  (*(undefined8 *)(lVar1 + -0x28 + uVar8 * 0x28),&local_78);
        iVar7 = 2;
        if (((int)lVar10 != 0) &&
           (plVar9 = (longlong *)
                     CreateDelayedAction(*(undefined8 *)(param_2 + 0x88),param_2,(int)lVar10),
           plVar9 != (longlong *)0x0)) {
          uVar5 = GetMidiNoteOffAction(param_1);
          FUN_1431a53e0(plVar9,uVar5,*(undefined8 *)(param_2 + 0xa0),param_2 + 0x98);
          CAkActionPlayAndContinue::AssignModulator(plVar9,*(longlong *)(param_2 + 0x88) + 0x28);
          iVar7 = (uint)DAT_1467bdcb8 * 10;
          iVar6 = iVar7;
          if ((iVar4 - 3U & 0xfffffffd) == 0) {
            fVar12 = (float)DAT_1467bdcac * fVar12 * 0.001;
            if (fVar12 <= 0.0) {
              fVar3 = -0.5;
            }
            else {
              fVar3 = 0.5;
            }
            iVar6 = (int)(fVar3 + fVar12);
            if (iVar6 < iVar7) {
              iVar6 = iVar7;
            }
          }
          iVar7 = FUN_1431a1210(*(undefined8 *)(param_2 + 0x88),param_2,iVar6,plVar9);
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
        goto LAB_1431a3d31;
      }
      uVar11 = *(int *)(param_2 + 0x38) - 1;
      *(uint *)(param_2 + 0x38) = uVar11;
      while ((uVar11 != 0 &&
             ((uVar11 = uVar11 - 1, 0x1f < uVar11 ||
              ((*(uint *)(param_2 + 0x7c) >> ((ulonglong)uVar11 & 0x3f) & 1) == 0))))) {
        *(uint *)(param_2 + 0x38) = uVar11;
      }
      plVar9 = *(longlong **)(*(longlong *)(param_2 + 0x88) + 0x18);
      CAkContinueListItem::~CAkContinueListItem
                (*plVar9 + ((ulonglong)*(uint *)(plVar9 + 1) * 5 + -5) * 8);
      *(int *)(plVar9 + 1) = (int)plVar9[1] + -1;
      lVar10 = *(longlong *)(param_2 + 0x88);
    }
    else {
      FUN_1431c43d0(lVar2,*(undefined8 *)(lVar1 + -8 + uVar8 * 0x28),lVar10 + 0x18);
      plVar9 = *(longlong **)(*(longlong *)(param_2 + 0x88) + 0x18);
      CAkContinueListItem::~CAkContinueListItem
                (*plVar9 + ((ulonglong)*(uint *)(plVar9 + 1) * 5 + -5) * 8);
      *(int *)(plVar9 + 1) = (int)plVar9[1] + -1;
      lVar10 = *(longlong *)(param_2 + 0x88);
      if (*(longlong *)(lVar10 + 0x18) == 0) {
        iVar7 = 3;
        goto LAB_1431a3d31;
      }
    }
    iVar4 = *(int *)(*(longlong *)(lVar10 + 0x18) + 8);
  } while( true );
}



// FUNCTION 1431a3da0 SecondsToSamples body=61 status=ok
// SIG undefined SecondsToSamples(void)

int AkTimeConv::SecondsToSamples(double param_1)

{
  param_1 = (double)DAT_1467bdcac * param_1;
  if (0.0 < param_1) {
    return (int)(param_1 + 0.5);
  }
  return (int)(param_1 + -0.5);
}



// FUNCTION 1431a3de0 FUN_1431a3de0 body=399 status=ok
// SIG undefined FUN_1431a3de0(void)

undefined8 FUN_1431a3de0(longlong *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  ushort uVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  uint uVar7;
  byte bVar8;
  
  pbVar5 = (byte *)*param_2;
  bVar1 = *pbVar5;
  *param_2 = pbVar5 + 1;
  bVar8 = pbVar5[1];
  *param_2 = pbVar5 + 2;
  *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) & 0xef;
  *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) | (bVar1 & 4) << 2;
  uVar4 = *(ushort *)*param_2;
  *param_2 = (ushort *)*param_2 + 1;
  *(ushort *)((longlong)param_1 + 0xa6) = *(ushort *)((longlong)param_1 + 0xa6) & 0xfc00;
  *(ushort *)((longlong)param_1 + 0xa6) = *(ushort *)((longlong)param_1 + 0xa6) | uVar4 & 0x3ff;
  puVar6 = (undefined1 *)*param_2;
  uVar2 = *puVar6;
  *param_2 = puVar6 + 1;
  bVar3 = puVar6[1];
  *param_2 = puVar6 + 2;
  *(byte *)((longlong)param_1 + 0xc1) = *(byte *)((longlong)param_1 + 0xc1) & 0x8f;
  bVar8 = (bVar8 << 3 ^ *(byte *)(param_1 + 0x18)) & 0x38 ^ *(byte *)(param_1 + 0x18);
  *(byte *)((longlong)param_1 + 0xc1) = *(byte *)((longlong)param_1 + 0xc1) | (bVar3 & 0xe) << 3;
  *(byte *)(param_1 + 0x18) = (bVar8 >> 3 ^ bVar8) & 7 ^ bVar8;
  FUN_143178a40(param_1,bVar1 & 1);
  FUN_143178e70(param_1,bVar1 >> 1 & 1);
  (**(code **)(*param_1 + 0x248))(param_1,uVar2);
  CAkParameterNodeBase::ClearLimitersAndMakeDirty(param_1);
  *(byte *)((longlong)param_1 + 0xaa) = *(byte *)((longlong)param_1 + 0xaa) & 0xfb;
  *(byte *)((longlong)param_1 + 0xaa) = *(byte *)((longlong)param_1 + 0xaa) | (bVar1 >> 3 & 1) << 2;
  CAkParameterNodeBase::SetVVoicesOptOverrideParent(param_1,bVar1 >> 4 & 1);
  if ((bVar3 & 1) == 0) {
    uVar7 = *(uint *)(param_1 + 0x14) & 0xffefffff;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x14) | 0x100000;
  }
  *(uint *)(param_1 + 0x14) = uVar7;
  (**(code **)(*param_1 + 400))(param_1,0);
  return 1;
}



// FUNCTION 1431a3f70 SetAkProp body=158 status=ok
// SIG undefined SetAkProp(void)

void CAkParameterNode::SetAkProp
               (longlong param_1,byte param_2,undefined8 param_3,int param_4,int param_5)

{
  byte *pbVar1;
  ulonglong uVar2;
  uint uVar3;
  
  FUN_143178460();
  if ((param_4 == 0) && (param_5 == 0)) {
    pbVar1 = *(byte **)(param_1 + 0xb0);
    if (pbVar1 != (byte *)0x0) {
      uVar2 = 0;
      do {
        uVar3 = (int)uVar2 + 1;
        if (pbVar1[uVar3] == param_2) {
          if (pbVar1 + uVar2 * 8 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) == (byte *)0x0) {
            return;
          }
          goto LAB_1431a3fdd;
        }
        uVar2 = (ulonglong)uVar3;
      } while (uVar3 < *pbVar1);
    }
  }
  else {
LAB_1431a3fdd:
    AkPropBundle<RANGED_MODIFIERS<AkPropValue>,unsigned_char>::SetAkProp
              (param_1 + 0xb0,param_2,CONCAT44(param_5,param_4));
  }
  return;
}



// FUNCTION 1431a4010 SetAkProp body=175 status=ok
// SIG undefined SetAkProp(void)

void CAkParameterNode::SetAkProp
               (longlong param_1,ulonglong param_2,undefined8 param_3,float param_4,float param_5)

{
  byte *pbVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 in_R9;
  
  FUN_143178510(param_1,param_2,param_3,in_R9,param_5);
  if ((param_4 == 0.0) && (param_5 == 0.0)) {
    pbVar1 = *(byte **)(param_1 + 0xb0);
    if (pbVar1 != (byte *)0x0) {
      uVar2 = 0;
      do {
        uVar3 = (int)uVar2 + 1;
        if (pbVar1[uVar3] == (byte)param_2) {
          if (pbVar1 + uVar2 * 8 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) == (byte *)0x0) {
            return;
          }
          goto LAB_1431a408a;
        }
        uVar2 = (ulonglong)uVar3;
      } while (uVar3 < *pbVar1);
    }
  }
  else {
LAB_1431a408a:
    AkPropBundle<RANGED_MODIFIERS<AkPropValue>,unsigned_char>::SetAkProp
              (param_1 + 0xb0,param_2 & 0xff,CONCAT44(param_5,param_4));
  }
  return;
}



// FUNCTION 1431a40c0 SetAkProp body=103 status=ok
// SIG undefined SetAkProp(void)

void CAkParameterNode::SetAkProp
               (longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x220))(param_1,param_3);
  if (lVar1 != 0) {
    FUN_1431791e0(param_1,lVar1,param_2,param_5,param_4,param_6,param_7);
  }
  return;
}



// FUNCTION 1431a4130 SetInitialFxParams body=355 status=ok
// SIG undefined SetInitialFxParams(void)

int CAkParameterNode::SetInitialFxParams
              (longlong param_1,undefined8 *param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  
  iVar10 = 1;
  cVar1 = *(char *)*param_2;
  *param_2 = (char *)*param_2 + 1;
  if (param_4 == '\0') {
    if (cVar1 == '\0') {
      uVar9 = *(uint *)(param_1 + 0xa0) & 0xfffe0fff;
    }
    else {
      uVar9 = *(uint *)(param_1 + 0xa0) | 0x1f000;
    }
    *(uint *)(param_1 + 0xa0) = uVar9;
  }
  pbVar7 = (byte *)*param_2;
  bVar2 = *pbVar7;
  *param_2 = pbVar7 + 1;
  if (bVar2 == 0) {
    return 1;
  }
  bVar3 = pbVar7[1];
  uVar9 = 0;
  *param_2 = pbVar7 + 2;
  if (bVar2 != 0) {
    do {
      puVar8 = (undefined1 *)*param_2;
      uVar4 = *puVar8;
      *param_2 = puVar8 + 1;
      iVar6 = *(int *)(puVar8 + 1);
      *param_2 = puVar8 + 5;
      cVar1 = puVar8[5];
      *param_2 = puVar8 + 6;
      cVar5 = puVar8[6];
      *param_2 = puVar8 + 7;
      FUN_143177b70(param_1,uVar4,cVar5 != '\0');
      if (((cVar5 == '\0') && (iVar6 != 0)) && (param_4 == '\0')) {
        iVar10 = FUN_143178960(param_1,uVar4,iVar6,cVar1 != '\0',0);
        if (iVar10 != 1) goto LAB_1431a4251;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < bVar2);
  }
  if (param_4 == '\0') {
LAB_1431a4251:
    FUN_143176d10(param_1,bVar3,0xffffffff);
  }
  return iVar10;
}



// FUNCTION 1431a42a0 SetInitialParams body=287 status=ok
// SIG undefined SetInitialParams(void)

undefined8 CAkParameterNode::SetInitialParams(longlong param_1,longlong *param_2)

{
  size_t sVar1;
  byte bVar2;
  byte *pbVar3;
  undefined8 uVar4;
  uint uVar5;
  
  bVar2 = *(byte *)*param_2;
  pbVar3 = (byte *)*param_2 + 1;
  *param_2 = (longlong)pbVar3;
  if (bVar2 == 0) {
LAB_1431a432f:
    bVar2 = *pbVar3;
    *param_2 = (longlong)(pbVar3 + 1);
    if (bVar2 != 0) {
      uVar5 = bVar2 + 4 & 0xfffffffc;
      pbVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)(uVar5 + (uint)bVar2 * 8));
      if (pbVar3 == (byte *)0x0) goto LAB_1431a43b8;
      *pbVar3 = bVar2;
      ::_guard_xfg_dispatch_icall_nop(pbVar3 + 1,(void *)*param_2,(ulonglong)bVar2);
      *param_2 = *param_2 + (ulonglong)bVar2;
      sVar1 = (ulonglong)bVar2 * 8;
      ::_guard_xfg_dispatch_icall_nop(pbVar3 + uVar5,(void *)*param_2,sVar1);
      *param_2 = *param_2 + sVar1;
      *(byte **)(param_1 + 0xb0) = pbVar3;
    }
    uVar4 = 1;
  }
  else {
    uVar5 = bVar2 + 4 & 0xfffffffc;
    pbVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)(uVar5 + (uint)bVar2 * 4));
    if (pbVar3 != (byte *)0x0) {
      *pbVar3 = bVar2;
      ::_guard_xfg_dispatch_icall_nop(pbVar3 + 1,(void *)*param_2,(ulonglong)bVar2);
      *param_2 = *param_2 + (ulonglong)bVar2;
      sVar1 = (ulonglong)bVar2 * 4;
      ::_guard_xfg_dispatch_icall_nop(pbVar3 + uVar5,(void *)*param_2,sVar1);
      *param_2 = *param_2 + sVar1;
      *(byte **)(param_1 + 0x98) = pbVar3;
      pbVar3 = (byte *)*param_2;
      goto LAB_1431a432f;
    }
LAB_1431a43b8:
    uVar4 = 2;
  }
  return uVar4;
}



// FUNCTION 1431a43c0 TriggerModulators body=133 status=ok
// SIG undefined TriggerModulators(void)

void CAkParameterNode::TriggerModulators(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  CAkParameterNodeBase::TriggerModulators();
  puVar1 = *(ulonglong **)(param_1 + 0xb8);
  if (puVar1 != (ulonglong *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    uVar4 = 0;
    uVar3 = (ulonglong)(uint)puVar1[1];
    if (puVar2 + (uint)puVar1[1] < puVar2) {
      uVar3 = uVar4;
    }
    if (uVar3 != 0) {
      do {
        CAkLayer::TriggerModulators(*puVar2,param_2,param_3);
        uVar4 = uVar4 + 1;
        puVar2 = puVar2 + 1;
      } while (uVar4 != uVar3);
    }
  }
  return;
}



// FUNCTION 1431a4450 UnmuteAll body=73 status=ok
// SIG undefined UnmuteAll(void)

void CAkParameterNode::UnmuteAll(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x180))(param_1,0,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001431a4492. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x240))(param_1,param_2,param_3);
  return;
}



// FUNCTION 1431a44a0 UnmuteAllObj body=238 status=ok
// SIG undefined UnmuteAllObj(void)

void CAkParameterNode::UnmuteAllObj(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)param_1[0xc];
  if ((plVar1 != (longlong *)0x0) &&
     (lVar5 = *plVar1, lVar5 != (ulonglong)*(uint *)(plVar1 + 1) * 0x10 + lVar5)) {
    do {
      pbVar2 = *(byte **)(*(longlong *)(lVar5 + 8) + 0x18);
      if (pbVar2 != (byte *)0x0) {
        uVar3 = 0;
        do {
          uVar4 = uVar3 + 1;
          if (pbVar2[uVar4] == 0xb) {
            if (((float *)(pbVar2 + (ulonglong)uVar3 * 0x10 +
                                    ((ulonglong)(*pbVar2 + 4) & 0xfffffffc)) != (float *)0x0) &&
               (*(float *)(pbVar2 + (ulonglong)uVar3 * 0x10 +
                                    ((ulonglong)(*pbVar2 + 4) & 0xfffffffc)) != 1.0)) {
              (**(code **)(*param_1 + 0x180))
                        (param_1,*(undefined8 *)(*(longlong *)(lVar5 + 8) + 0x10),param_2,param_3);
            }
            break;
          }
          uVar3 = uVar4;
        } while (uVar4 < *pbVar2);
      }
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != (ulonglong)*(uint *)((longlong *)param_1[0xc] + 1) * 0x10 +
                      *(longlong *)param_1[0xc]);
  }
  return;
}



// FUNCTION 1431a45a0 FUN_1431a45a0 body=99 status=ok
// SIG undefined FUN_1431a45a0(void)

undefined8 * FUN_1431a45a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145acc300;
  param_1[3] = &PTR_LAB_145acc550;
  param_1[6] = &PTR_PushParamUpdate_145ac7228;
  CAkSource::~CAkSource(param_1 + 0x19);
  CAkSoundBase::~CAkSoundBase(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 1431a4610 FUN_1431a4610 body=197 status=ok
// SIG undefined FUN_1431a4610(void)

undefined8 * FUN_1431a4610(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 < *(uint *)((longlong)param_1 + 0xc)) {
LAB_1431a46a0:
    uVar2 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar2 + 1;
    puVar5 = (undefined8 *)(*param_1 + (ulonglong)uVar2 * 8);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = param_2;
    }
  }
  else {
    uVar1 = *(uint *)((longlong)param_1 + 0xc) + 1;
    pvVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 3);
    if (pvVar4 != (void *)0x0) {
      pvVar6 = (void *)*param_1;
      if ((pvVar6 != (void *)0x0) && (pvVar6 != pvVar4)) {
        uVar3 = *(uint *)(param_1 + 1);
        uVar7 = 0;
        if ((ulonglong)uVar3 != 0) {
          do {
            *(undefined8 *)((longlong)pvVar4 + uVar7 * 8) = *(undefined8 *)(*param_1 + uVar7 * 8);
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar3);
          pvVar6 = (void *)*param_1;
        }
        AK::MemoryMgr::Free(g_DefaultPoolId,pvVar6);
      }
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = uVar1;
      if (uVar2 < uVar1) goto LAB_1431a46a0;
    }
    puVar5 = (undefined8 *)0x0;
  }
  return puVar5;
}



// FUNCTION 1431a46e0 FUN_1431a46e0 body=173 status=ok
// SIG undefined FUN_1431a46e0(void)

longlong * FUN_1431a46e0(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0xf0);
  if (plVar3 != (longlong *)0x0) {
    CAkSoundBase::CAkSoundBase(plVar3,param_1);
    *plVar3 = (longlong)&PTR_FUN_145acc300;
    plVar3[3] = (longlong)&PTR_LAB_145acc550;
    plVar3[6] = (longlong)&PTR_PushParamUpdate_145ac7228;
    CAkSource::CAkSource(plVar3 + 0x19);
    *(undefined4 *)(plVar3 + 0x1d) = 0;
    iVar2 = (**(code **)(*plVar3 + 0x80))(plVar3);
    if ((iVar2 == 0) || (iVar2 == 10)) {
      bVar1 = 0x80;
    }
    else {
      bVar1 = 0;
    }
    *(byte *)(plVar3 + 0x15) = *(byte *)(plVar3 + 0x15) & 0x7f;
    *(byte *)(plVar3 + 0x15) = *(byte *)(plVar3 + 0x15) | bVar1;
    CAkParameterNodeBase::AddToIndex(plVar3);
    return plVar3;
  }
  return (longlong *)0x0;
}



// FUNCTION 1431a47a0 FUN_1431a47a0 body=84 status=ok
// SIG undefined FUN_1431a47a0(void)

void FUN_1431a47a0(longlong param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(char *)((longlong)param_2 + 0x23) == '\0') || (*(char *)((longlong)param_2 + 0x21) == '\0')
     ) goto LAB_1431a47db;
  iVar1 = *param_2;
  if (iVar1 == 0) {
LAB_1431a47d4:
    uVar2 = 0;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) goto LAB_1431a47db;
      goto LAB_1431a47d4;
    }
    uVar2 = 1;
  }
  CAkStateAware::PauseTransitions(param_1 + 0x18,uVar2);
LAB_1431a47db:
  FUN_1431a4800(param_1,param_2);
  return;
}



// FUNCTION 1431a4800 FUN_1431a4800 body=336 status=ok
// SIG undefined FUN_1431a4800(void)

void FUN_1431a4800(longlong param_1,int *param_2)

{
  float fVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  float fVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x78);
  if ((lVar4 != 0) && (0 < *(short *)(lVar4 + 0x50))) {
    if (*param_2 != 4) {
      FUN_1431b8aa0();
      return;
    }
    if ((*(byte *)(param_2 + 0xf) & 1) == 0) {
      lVar4 = *(longlong *)(lVar4 + 0x18);
      plVar2 = (longlong *)0x0;
      if (-1 < param_2[0xe]) {
        plVar2 = (longlong *)(ulonglong)(uint)param_2[0xe];
      }
      for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x50)) {
        plVar3 = (longlong *)(lVar4 + -0x18);
        if (lVar4 == 0) {
          plVar3 = (longlong *)0x0;
        }
        if (((*(longlong *)(param_2 + 2) == 0) || (*(longlong *)(param_2 + 2) == plVar3[6])) &&
           ((param_2[4] == 0 || (param_2[4] == (int)plVar3[0x40])))) {
          (**(code **)(*plVar3 + 0x30))(plVar3,plVar2,*(byte *)(param_2 + 0xf) >> 1 & 1);
        }
      }
    }
    else {
      fVar1 = (float)param_2[0xe];
      fVar5 = 0.0;
      if ((0.0 <= fVar1) && (fVar5 = fVar1, 1.0 <= fVar1)) {
        fVar5 = 1.0;
      }
      lVar4 = *(longlong *)(lVar4 + 0x18);
      if (lVar4 != 0) {
        do {
          plVar2 = (longlong *)(lVar4 + -0x18);
          if (lVar4 == 0) {
            plVar2 = (longlong *)0x0;
          }
          if (((*(longlong *)(param_2 + 2) == 0) || (*(longlong *)(param_2 + 2) == plVar2[6])) &&
             ((param_2[4] == 0 || (param_2[4] == (int)plVar2[0x40])))) {
            (**(code **)(*plVar2 + 0x38))(plVar2,fVar5,*(byte *)(param_2 + 0xf) >> 1 & 1);
          }
          lVar4 = *(longlong *)(lVar4 + 0x50);
        } while (lVar4 != 0);
      }
    }
  }
  return;
}



// FUNCTION 1431a4950 ExecuteActionNoPropagate body=65 status=ok
// SIG undefined ExecuteActionNoPropagate(void)

void CAkSound::ExecuteActionNoPropagate(longlong param_1,int *param_2)

{
  if (((*param_2 == 0) && (*(char *)((longlong)param_2 + 0x23) != '\0')) &&
     (*(char *)((longlong)param_2 + 0x21) != '\0')) {
    CAkStateAware::PauseTransitions(param_1 + 0x18,0);
  }
  FUN_1431a4800(param_1,param_2);
  return;
}



// FUNCTION 1431a49d0 GetAudioParameters body=198 status=ok
// SIG undefined GetAudioParameters(void)

ulonglong CAkSound::GetAudioParameters
                    (undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                    longlong param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                    undefined8 param_9)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar1 = param_5;
  uVar3 = FUN_1431a1c50(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  uVar4 = uVar3;
  if (*(char *)(lVar1 + 0x18) != -1) {
    param_5._0_4_ = 0;
    cVar2 = CAkParameterNodeBase::IsMidiNoteTracking(param_1,&param_5);
    uVar4 = uVar3 & 0xffffffff;
    if (cVar2 != '\0') {
      *(float *)(param_2 + 8) =
           ((float)*(byte *)(lVar1 + 0x20) - (float)(int)param_5) * 100.0 + *(float *)(param_2 + 8);
    }
  }
  return uVar4;
}



// FUNCTION 1431a4ab0 PlayInternal body=566 status=ok
// SIG undefined PlayInternal(void)

undefined8 CAkSound::PlayInternal(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined2 local_res10;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  if (((*(char *)(param_2 + 0x98) == '\0') || (*(char *)(param_2 + 0x98) != -0x70)) ||
     (*(char *)(param_2 + 0x9b) == '\0')) goto LAB_1431a4cce;
  iVar2 = CAkParameterNode::GetMidiNoteOnAction();
  AkPBIParams::GetMidiTargetID(param_2);
  CAkRTPCMgr::SetMidiParameterValue(g_pRTPCMgr,0x85);
  ::_guard_xfg_dispatch_icall_nop(2.0,((float)*(byte *)(param_2 + 0x9a) - 69.0) * 0.083333336);
  CAkRTPCMgr::SetMidiParameterValue(g_pRTPCMgr,0x84);
  uVar3 = CAkParameterNode::GetMidiNoteOffAction(param_1);
  if (((*(char *)(param_2 + 0x98) + 0x80U & 0xcf) == 0) && (*(char *)(param_2 + 0x98) != -0x50)) {
    local_res10 = CONCAT11(*(undefined1 *)(param_2 + 0x99),*(undefined1 *)(param_2 + 0x9a));
  }
  else {
    local_res10 = CONCAT11(*(undefined1 *)(param_2 + 0x99),0xff);
  }
  lVar1 = *(longlong *)(param_2 + 0xa0);
  uStack_50 = CONCAT22(uStack_50._2_2_,local_res10);
  puVar4 = *(undefined8 **)(lVar1 + 0x28);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x20);
    if (puVar4 != (undefined8 *)0x0) {
      if (puVar4 != (undefined8 *)0xfffffffffffffff8) {
        puVar4[2] = 0;
        *(undefined2 *)(puVar4 + 3) = 0xffff;
      }
      *puVar4 = *(undefined8 *)(lVar1 + 0x28);
      *(undefined8 **)(lVar1 + 0x28) = puVar4;
      goto LAB_1431a4c5a;
    }
  }
  else {
LAB_1431a4c5a:
    if (*(undefined8 **)(lVar1 + 0x20) == (undefined8 *)0x0) {
      *(undefined8 **)(lVar1 + 0x18) = puVar4;
    }
    else {
      **(undefined8 **)(lVar1 + 0x20) = puVar4;
      puVar4 = *(undefined8 **)(lVar1 + 0x28);
    }
    *(undefined8 **)(lVar1 + 0x20) = puVar4;
    *(undefined8 *)(lVar1 + 0x28) = *puVar4;
    *puVar4 = 0;
    *(int *)(lVar1 + 0x3c) = *(int *)(lVar1 + 0x3c) + 1;
    lVar1 = *(longlong *)(lVar1 + 0x20);
    if ((undefined4 *)(lVar1 + 8) != (undefined4 *)0x0) {
      local_58 = SUB84(param_1,0);
      uStack_54 = (undefined4)((ulonglong)param_1 >> 0x20);
      *(undefined4 *)(lVar1 + 8) = uVar3;
      *(undefined4 *)(lVar1 + 0x10) = local_58;
      *(undefined4 *)(lVar1 + 0x14) = uStack_54;
      *(undefined4 *)(lVar1 + 0x18) = uStack_50;
      *(undefined4 *)(lVar1 + 0x1c) = uStack_4c;
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  if (iVar2 != 1) {
    return 0x52;
  }
LAB_1431a4cce:
  uVar5 = FUN_143160e40(param_1,param_1 + 0x19,param_2);
  return uVar5;
}



// FUNCTION 1431a4d20 SetInitialValues body=199 status=ok
// SIG undefined SetInitialValues(void)

undefined8
CAkSound::SetInitialValues
          (longlong *param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
          undefined1 param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong local_res10;
  undefined4 local_res18 [4];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  longlong local_20;
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  iVar1 = (**(code **)(*param_1 + 0x80))();
  if (iVar1 != 3) {
    (**(code **)(*param_1 + 0x80))(param_1);
    AK::MemoryMgr::StartProfileThreadUsage((long)DAT_146b50b18);
    return 0x5b;
  }
  local_res10 = local_res10 + 4;
  uVar2 = CAkBankMgr::LoadSource(&local_res10,local_res18,local_38);
  if ((int)uVar2 == 1) {
    if (local_20 == 0) {
      local_48 = local_30;
      uStack_44 = uStack_2c;
      uStack_40 = uStack_28;
      uStack_3c = uStack_24;
      CAkSource::SetSource(param_1 + 0x19,local_34,&local_48);
    }
    else {
      CAkSource::SetSource(param_1 + 0x19,local_30);
    }
    uVar2 = FUN_143178ad0(param_1,&local_res10,local_res18,param_5);
  }
  return uVar2;
}



// FUNCTION 1431a4e20 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FMaterialResource::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acc5d0;
  CAkActionActive::~CAkActionActive();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1431a4e60 Create body=109 status=ok
// SIG undefined Create(void)

undefined8 * CAkActionStop::Create(undefined4 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x50);
  if (puVar1 != (undefined8 *)0x0) {
    CAkActionActive::CAkActionActive(puVar1,param_1,param_2);
    *puVar1 = &PTR__scalar_deleting_destructor__145acc5d0;
    CAkAction::AddToIndex(puVar1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431a4ed0 Execute body=386 status=ok
// SIG undefined Execute(void)

undefined4 CAkActionStop::Execute(longlong *param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined4 local_68;
  undefined4 uStack_64;
  longlong lStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_4c;
  int local_48;
  uint uStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong lStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  uint uStack_20;
  uint uStack_1c;
  int local_18;
  uint uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar1 = *(ushort *)((longlong)param_1 + 0x34);
  lVar2 = *(longlong *)(param_2 + 0x40);
  if (0x101 < uVar1) {
    if (uVar1 < 0x104) {
      plVar4 = (longlong *)CAkAction::GetAndRefTarget(param_1);
      if (plVar4 != (longlong *)0x0) {
        uVar3 = CAkActionActive::Exec(param_1,0,lVar2,*(undefined4 *)(param_2 + 0x38));
        FUN_143140ce0(DAT_146b50b78,plVar4,lVar2,*(undefined4 *)(param_2 + 0x38));
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return uVar3;
      }
      return 1;
    }
    if (uVar1 < 0x106) {
      if ((int)param_1[8] == 0) {
        uStack_54 = 0;
        uStack_4c = uStack_4c & 0xffffff00;
        uStack_50 = *(byte *)((longlong)param_1 + 0x36) & 0x1f;
        uStack_44 = uStack_44 & 0xffffff00;
        local_58 = *(undefined4 *)(param_2 + 0x38);
        uStack_40 = 0;
        local_48 = (uint)(lVar2 == 0) << 8;
        local_68 = 0;
        lStack_60 = lVar2;
        uStack_54 = CAkAction::GetTransitionTime(param_1);
        (**(code **)(*param_1 + 0x68))(param_1,&local_68);
        local_38 = CONCAT44(uStack_64,local_68);
        lStack_30 = lStack_60;
        local_28 = local_58;
        uStack_24 = uStack_54;
        uStack_20 = uStack_50;
        uStack_1c = uStack_4c;
        local_18 = local_48;
        uStack_14 = uStack_44;
        uStack_10 = (undefined4)uStack_40;
        uStack_c = uStack_40._4_4_;
        CAkActionActive::ExecOnDynamicSequences(param_1,&local_38);
        CAkURenderer::StopAll(&local_68);
      }
      else {
        CAkActionActive::AllExecExcept(param_1,0,lVar2,*(undefined4 *)(param_2 + 0x38));
      }
      FUN_143141040(DAT_146b50b78,lVar2,param_1 + 7,*(undefined4 *)(param_2 + 0x38));
    }
  }
  return 1;
}



// FUNCTION 1431a50b0 FUN_1431a50b0 body=398 status=ok
// SIG undefined FUN_1431a50b0(void)

longlong FUN_1431a50b0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x38) = *param_2;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar1 = param_2[3];
  *(undefined8 *)(param_1 + 0x48) = param_2[2];
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  uVar1 = param_2[5];
  *(undefined8 *)(param_1 + 0x58) = param_2[4];
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  uVar1 = param_2[7];
  *(undefined8 *)(param_1 + 0x68) = param_2[6];
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(undefined8 *)(param_1 + 0x78) = param_2[8];
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined2 *)(param_1 + 0x98) = 0xff00;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) & 0xfc;
  *(byte *)(param_1 + 0xcc) = *(byte *)(param_1 + 0xcc) & 0xfc;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0;
  *(undefined8 *)(param_1 + 0x10c) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0x104) = 0;
  *(undefined8 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) & 0xfd;
  *(byte *)(param_1 + 0xcc) = *(byte *)(param_1 + 0xcc) & 0xfe;
  *(undefined8 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x12a) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(byte *)(param_1 + 0x184) = *(byte *)(param_1 + 0x184) & 0xfe;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(byte *)(param_1 + 0x188) = *(byte *)(param_1 + 0x188) & 0xf3 | 3;
  return param_1;
}



// FUNCTION 1431a5240 ~CAkActionPlayAndContinue body=349 status=ok
// SIG undefined ~CAkActionPlayAndContinue(void)

void CAkActionPlayAndContinue::~CAkActionPlayAndContinue(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR__scalar_deleting_destructor__145acc640;
  if ((param_1[8] != 0) && (param_1[0x1b] != 0)) {
    FUN_1431501b0(DAT_146b50af0);
  }
  param_1[8] = 0;
  if ((param_1[9] != 0) && (param_1[0x1b] != 0)) {
    FUN_1431501b0(DAT_146b50af0);
  }
  param_1[9] = 0;
  if (param_1[10] != 0) {
    CAkPathManager::RemovePotentialUser(DAT_146b50b10);
  }
  if ((longlong *)param_1[0x1e] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1e] + 0x10))();
    param_1[0x1e] = 0;
  }
  if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1c] + 0x10))();
  }
  lVar1 = param_1[0x21];
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)(lVar1 + 0x68);
    puVar4 = (undefined8 *)0x0;
    do {
      puVar3 = puVar4;
      puVar4 = puVar2;
      if (puVar4 == (undefined8 *)0x0) goto LAB_1431a533f;
      puVar2 = (undefined8 *)*puVar4;
    } while ((undefined8 *)puVar4[2] != param_1);
    if (puVar4 == *(undefined8 **)(lVar1 + 0x68)) {
      *(undefined8 **)(lVar1 + 0x68) = puVar2;
    }
    else {
      *puVar3 = puVar2;
    }
    if (puVar4 == *(undefined8 **)(lVar1 + 0x70)) {
      *(undefined8 **)(lVar1 + 0x70) = puVar3;
    }
    *puVar4 = *(undefined8 *)(lVar1 + 0x78);
    *(int *)(lVar1 + 0x8c) = *(int *)(lVar1 + 0x8c) + -1;
    *(undefined8 **)(lVar1 + 0x78) = puVar4;
LAB_1431a533f:
    if (((*(undefined8 **)(lVar1 + 0x10) != (undefined8 *)0x0) && (*(int *)(lVar1 + 100) == 0)) &&
       (*(int *)(lVar1 + 0x8c) == 0)) {
      (**(code **)**(undefined8 **)(lVar1 + 0x10))();
    }
    CAkMidiNoteState::Release(param_1[0x21]);
    param_1[0x21] = 0;
  }
  CAkModCtxRefContainer::~CAkModCtxRefContainer(param_1 + 0x22);
  if (param_1[0xc] != 0) {
    CAkContinuationList::Release();
    param_1[0xc] = 0;
  }
  FUN_1431c1d10(param_1);
  return;
}



// FUNCTION 1431a53a0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
CAkActionPlayAndContinue::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~CAkActionPlayAndContinue();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 1431a53e0 FUN_1431a53e0 body=182 status=ok
// SIG undefined FUN_1431a53e0(void)

void FUN_1431a53e0(longlong param_1,undefined4 param_2,longlong param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(param_1 + 0x104) = *param_4;
  *(longlong *)(param_1 + 0x108) = param_3;
  if (param_3 != 0) {
    CAkMidiNoteState::AddRef(param_3);
    lVar1 = *(longlong *)(param_1 + 0x108);
    puVar2 = *(undefined8 **)(lVar1 + 0x78);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x18);
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
      *puVar2 = *(undefined8 *)(lVar1 + 0x78);
      *(undefined8 **)(lVar1 + 0x78) = puVar2;
    }
    if (*(undefined8 **)(lVar1 + 0x70) == (undefined8 *)0x0) {
      *(undefined8 **)(lVar1 + 0x68) = puVar2;
    }
    else {
      **(undefined8 **)(lVar1 + 0x70) = puVar2;
      puVar2 = *(undefined8 **)(lVar1 + 0x78);
    }
    *(undefined8 **)(lVar1 + 0x70) = puVar2;
    *(undefined8 *)(lVar1 + 0x78) = *puVar2;
    *puVar2 = 0;
    *(int *)(lVar1 + 0x8c) = *(int *)(lVar1 + 0x8c) + 1;
    lVar1 = *(longlong *)(lVar1 + 0x70);
    puVar3 = (undefined4 *)(lVar1 + 8);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = param_2;
      *(longlong *)(lVar1 + 0x10) = param_1;
    }
  }
  return;
}



// FUNCTION 1431a54a0 AssignModulator body=12 status=ok
// SIG undefined AssignModulator(void)

void CAkActionPlayAndContinue::AssignModulator(longlong param_1)

{
  CAkModCtxRefContainer::operator=(param_1 + 0x110);
  return;
}



// FUNCTION 1431a54b0 AssignModulator body=29 status=ok
// SIG undefined AssignModulator(void)

void CAkActionPlayAndContinue::AssignModulator(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_1431ad660(*param_2,1,param_1 + 0x110);
    return;
  }
  return;
}



// FUNCTION 1431a54d0 BreakToNode body=467 status=ok
// SIG undefined BreakToNode(void)

undefined8
CAkActionPlayAndContinue::BreakToNode(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *local_res8;
  undefined1 local_28 [16];
  
  plVar6 = *(longlong **)(param_1 + 0x60);
  if (plVar6 != (longlong *)0x0) {
    if ((int)plVar6[1] != 0) {
      do {
        lVar1 = *plVar6 + (ulonglong)*(uint *)(plVar6 + 1) * 0x28;
        lVar2 = *(longlong *)(*plVar6 + -0x10 + (ulonglong)*(uint *)(plVar6 + 1) * 0x28);
        if (lVar2 == 0) {
          cVar4 = CAkParameterNode::IsOrIsChildOf(*(undefined8 *)(lVar1 + -0x28),param_2,0);
          if (cVar4 == '\0') {
            plVar6 = (longlong *)
                     CAkRanSeqCntr::GetNextToPlayContinuous
                               (*(undefined8 *)(lVar1 + -0x28),param_3,&local_res8,local_28,
                                lVar1 + -0x20,lVar1 + -0x18);
            if (plVar6 != (longlong *)0x0) {
              *(undefined2 *)(param_1 + 0x6c + (ulonglong)(*(int *)(param_1 + 0x68) - 1) * 2) =
                   local_res8._0_2_;
              *(int *)(param_1 + 0x30) = (int)plVar6[2];
              (**(code **)(*plVar6 + 0x10))(plVar6);
              return 0;
            }
            plVar6 = *(longlong **)(param_1 + 0x60);
            break;
          }
          uVar5 = *(int *)(param_1 + 0x68) - 1;
          *(uint *)(param_1 + 0x68) = uVar5;
          while ((uVar5 != 0 &&
                 ((uVar5 = uVar5 - 1, 0x1f < uVar5 ||
                  ((*(uint *)(param_1 + 0xac) >> ((ulonglong)uVar5 & 0x3f) & 1) == 0))))) {
            *(uint *)(param_1 + 0x68) = uVar5;
          }
          plVar6 = *(longlong **)(param_1 + 0x60);
          CAkContinueListItem::~CAkContinueListItem
                    (*plVar6 + ((ulonglong)*(uint *)(plVar6 + 1) * 5 + -5) * 8);
          *(int *)(plVar6 + 1) = (int)plVar6[1] + -1;
        }
        else {
          local_res8 = (longlong *)0x0;
          FUN_1431c43d0(lVar2,*(undefined8 *)(lVar1 + -8),&local_res8);
          plVar6 = *(longlong **)(param_1 + 0x60);
          CAkContinueListItem::~CAkContinueListItem
                    (*plVar6 + ((ulonglong)*(uint *)(plVar6 + 1) * 5 + -5) * 8);
          plVar3 = local_res8;
          *(int *)(plVar6 + 1) = (int)plVar6[1] + -1;
          if (local_res8 == (longlong *)0x0) {
            lVar1 = *(longlong *)(param_1 + 0x60);
            *(undefined8 *)(param_1 + 0x60) = 0;
            if (lVar1 == 0) {
              return 1;
            }
            CAkContinuationList::Release();
            plVar6 = local_res8;
            if (local_res8 == (longlong *)0x0) {
              return 1;
            }
            goto LAB_1431a560f;
          }
          CAkContinuationList::AddRef(local_res8);
          lVar1 = *(longlong *)(param_1 + 0x60);
          *(longlong **)(param_1 + 0x60) = plVar3;
          if (lVar1 != 0) {
            CAkContinuationList::Release();
          }
          if (local_res8 != (longlong *)0x0) {
            CAkContinuationList::Release();
          }
        }
        plVar6 = *(longlong **)(param_1 + 0x60);
      } while ((int)plVar6[1] != 0);
      if ((int)plVar6[1] != 0) {
        return 1;
      }
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
LAB_1431a560f:
    CAkContinuationList::Release(plVar6);
  }
  return 1;
}



// FUNCTION 1431a56b0 FUN_1431a56b0 body=291 status=ok
// SIG undefined FUN_1431a56b0(void)

undefined8 * FUN_1431a56b0(undefined4 param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x120);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    CAkActionPlay::CAkActionPlay(puVar2,param_1,param_2);
    *puVar2 = &PTR__scalar_deleting_destructor__145acc640;
    puVar2[8] = 0;
    puVar2[9] = 0;
    lVar1 = *param_3;
    puVar2[0xc] = lVar1;
    if (lVar1 != 0) {
      CAkContinuationList::AddRef();
    }
    *(undefined4 *)((longlong)puVar2 + 0xac) = 0;
    puVar2[0x16] = 0;
    puVar2[0x17] = 0;
    *(undefined4 *)(puVar2 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar2 + 0xc4) = 1;
    *(byte *)((longlong)puVar2 + 0xcc) = *(byte *)((longlong)puVar2 + 0xcc) & 0xfe;
    *(undefined4 *)(puVar2 + 0x19) = 0;
    *(undefined4 *)(puVar2 + 0x1a) = 1;
    puVar2[0x1b] = 0;
    puVar2[0x1c] = 0;
    *(undefined4 *)(puVar2 + 0x1d) = 0;
    puVar2[0x1e] = 0;
    *(undefined4 *)(puVar2 + 0x1f) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xfc) = 4;
    *(undefined1 *)(puVar2 + 0x20) = 0;
    *(undefined2 *)((longlong)puVar2 + 0x104) = 0xff00;
    puVar2[0x21] = 0;
    puVar2[0x22] = 0;
    puVar2[0x23] = 0;
    *(undefined4 *)(puVar2 + 0xd) = 0;
    puVar2[10] = 0;
    *(undefined4 *)(puVar2 + 0xb) = 0;
    CAkAction::AddToIndex(puVar2);
  }
  return puVar2;
}



// FUNCTION 1431a57e0 FUN_1431a57e0 body=843 status=ok
// SIG undefined FUN_1431a57e0(void)

int FUN_1431a57e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  byte bVar8;
  longlong lVar9;
  undefined4 uVar10;
  byte local_res8 [8];
  undefined8 local_208;
  uint local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  longlong *local_1e8;
  longlong local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1b8 [2];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 *local_1a0;
  int *local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 *local_130;
  undefined4 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined1 local_110 [216];
  undefined8 local_38;
  byte local_30;
  
  lVar2 = *(longlong *)(param_1 + 0xb0);
  local_200 = local_200 & 0xffffff00;
  if (lVar2 == 0) {
    local_208 = *(undefined8 *)(param_1 + 0xf8);
    local_200 = *(uint *)(param_1 + 0x100);
  }
  else {
    uVar10 = 4;
    if ((*(byte *)(lVar2 + 0x350) & 0xf) == 2) {
      uVar10 = 1;
    }
    local_208 = CONCAT44(uVar10,*(undefined4 *)(param_1 + 0xb8));
    FUN_143180140(lVar2,&local_208,1);
  }
  plVar7 = (longlong *)CAkAction::GetAndRefTarget(param_1);
  if (plVar7 == (longlong *)0x0) {
    return 0xf;
  }
  local_1f8 = *(undefined8 *)(param_1 + 0x40);
  lVar2 = *(longlong *)(param_1 + 0x60);
  local_1f0 = *(undefined8 *)(param_1 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x50);
  local_1d8 = *(undefined4 *)(param_1 + 0xe8);
  local_1e0 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  lVar9 = 0;
  local_1e8 = plVar1;
  if (lVar2 != 0) {
    CAkContinuationList::AddRef(lVar2);
    lVar9 = local_1e0;
  }
  local_1e0 = lVar2;
  if (lVar9 != 0) {
    CAkContinuationList::Release();
  }
  FUN_1431a50b0(local_1b8,param_1 + 0x68);
  local_38 = *(undefined8 *)(param_1 + 200);
  piVar3 = *(int **)(param_2 + 0x1c);
  local_1b8[0] = *(undefined4 *)(param_1 + 0xd0);
  local_1b0 = *(undefined8 *)(param_1 + 0xe0);
  local_1a8 = *(undefined8 *)(param_2 + 0x40);
  local_184 = *(undefined4 *)(param_2 + 0x30);
  local_190 = *(undefined8 *)(param_2 + 0x24);
  local_188 = *(undefined4 *)(param_2 + 0x2c);
  if (local_198 != (int *)0x0) {
    AkExternalSourceArray::Release();
  }
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  local_138 = *(undefined4 *)(param_1 + 0xbc);
  local_134 = *(undefined4 *)(param_2 + 0x14);
  local_30 = local_30 ^ (*(char *)(param_1 + 0xc5) * '\x02' ^ local_30) & 2;
  local_128 = *(undefined4 *)(param_1 + 0xc0);
  local_120 = *(undefined4 *)(param_1 + 0x104);
  local_118 = *(undefined8 *)(param_1 + 0x108);
  local_130 = &local_1f8;
  local_1a0 = &local_208;
  local_198 = piVar3;
  cVar4 = CAkAction::PlayDirectly(*(undefined8 *)(param_2 + 8));
  uVar10 = local_184;
  bVar8 = cVar4 << 2 | local_30 & 0xfb;
  if (((char)local_120 == -0x70) && (local_120._3_1_ != '\0')) {
    local_res8[0] = local_30 & 1;
    local_30 = bVar8;
    uVar5 = AkPBIParams::GetMidiTargetID(local_1b8);
    iVar6 = CAkParameterNode::FilterAndTransformMidiEvent
                      (plVar7,&local_120,uVar5,local_res8,local_1a8,uVar10);
    if (iVar6 != 1) goto LAB_1431a5a69;
    bVar8 = local_30 ^ (local_res8[0] ^ local_30) & 1;
  }
  local_30 = bVar8;
  iVar6 = FUN_1431a35f0(plVar7,local_1b8);
  if (iVar6 == 3) {
    iVar6 = 1;
  }
  else if (iVar6 == 1) {
    iVar6 = (**(code **)(*plVar7 + 0x238))(plVar7,local_1b8);
  }
LAB_1431a5a69:
  DAT_146b51f48 = DAT_146b51f48 + 1;
  lVar2 = *(longlong *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (lVar2 != 0) {
    CAkContinuationList::Release();
  }
  if (*plVar1 != 0) {
    CAkPathManager::RemovePotentialUser(DAT_146b50b10);
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(longlong **)(param_1 + 0xf0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x10))();
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  (**(code **)(*plVar7 + 0x10))(plVar7);
  AkInitialSoundParams::DoTerm(local_110);
  if (local_198 != (int *)0x0) {
    AkExternalSourceArray::Release();
  }
  CAkModCtxRefContainer::~CAkModCtxRefContainer(&local_1d0);
  if (local_1e0 != 0) {
    CAkContinuationList::Release();
  }
  return iVar6;
}



// FUNCTION 1431a5b60 HasModulator body=12 status=ok
// SIG undefined HasModulator(void)

void CAkActionPlayAndContinue::HasModulator(longlong param_1)

{
  CAkModCtxRefContainer::HasModulatorCtx(param_1 + 0x110);
  return;
}



// FUNCTION 1431a5b70 FUN_1431a5b70 body=8 status=ok
// SIG undefined FUN_1431a5b70(void)

undefined1 FUN_1431a5b70(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0xc4);
}



// FUNCTION 1431a5b80 Resume body=74 status=ok
// SIG undefined Resume(void)

void CAkActionPlayAndContinue::Resume(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    cVar1 = CAkTransition::IsFadingOut();
    if (cVar1 != '\0') {
      if ((*(longlong *)(param_1 + 0x48) != 0) && (*(longlong *)(param_1 + 0xd8) != 0)) {
        FUN_1431501b0(DAT_146b50af0);
      }
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
  }
  return;
}



// FUNCTION 1431a5bd0 SetFadeBack body=22 status=ok
// SIG undefined SetFadeBack(void)

void CAkActionPlayAndContinue::SetFadeBack(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_2;
  *(undefined4 *)(param_1 + 0xb8) = param_3;
  *(undefined1 *)(param_1 + 0xc4) = 0;
  return;
}



// FUNCTION 1431a5bf0 SetHistory body=56 status=ok
// SIG undefined SetHistory(void)

void CAkActionPlayAndContinue::SetHistory(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x68) = *param_2;
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  uVar1 = param_2[3];
  *(undefined8 *)(param_1 + 0x78) = param_2[2];
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  uVar1 = param_2[5];
  *(undefined8 *)(param_1 + 0x88) = param_2[4];
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  uVar1 = param_2[7];
  *(undefined8 *)(param_1 + 0x98) = param_2[6];
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0x44);
  return;
}



// FUNCTION 1431a5c30 SetInitialPlaybackState body=7 status=ok
// SIG undefined SetInitialPlaybackState(void)

void CAkActionPlayAndContinue::SetInitialPlaybackState(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xbc) = param_2;
  return;
}



// FUNCTION 1431a5c40 SetInstigator body=17 status=ok
// SIG undefined SetInstigator(void)

void CAkActionPlayAndContinue::SetInstigator(longlong param_1,longlong *param_2)

{
  *(longlong **)(param_1 + 0xe0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001431a5c4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 8))(param_2);
  return;
}



// FUNCTION 1431a5c60 SetIsFirstPlay body=7 status=ok
// SIG undefined SetIsFirstPlay(void)

void CAkActionPlayAndContinue::SetIsFirstPlay(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xc5) = param_2;
  return;
}



// FUNCTION 1431a5c70 SetPathInfo body=139 status=ok
// SIG undefined SetPathInfo(void)

void CAkActionPlayAndContinue::SetPathInfo(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
    CAkPathManager::AddPotentialUser(DAT_146b50b10);
    *(longlong *)(param_1 + 0x50) = *param_2;
    *(int *)(param_1 + 0x58) = (int)param_2[1];
  }
  if (*(longlong **)(param_1 + 0xf0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x10))();
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  if (param_2 != (longlong *)0x0) {
    uVar1 = CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,(int)param_2[1],0);
    *(undefined8 *)(param_1 + 0xf0) = uVar1;
  }
  return;
}



// FUNCTION 1431a5d00 SetPauseResumeTransition body=109 status=ok
// SIG undefined SetPauseResumeTransition(void)

undefined8
CAkActionPlayAndContinue::SetPauseResumeTransition
          (longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  *(longlong *)(param_1 + 0xd8) = param_3;
  if ((*(longlong *)(param_1 + 0x48) != 0) && (param_3 != 0)) {
    FUN_1431501b0(DAT_146b50af0);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  if ((param_2 != 0) &&
     (uVar1 = FUN_14314fb80(DAT_146b50af0,param_2,*(undefined8 *)(param_1 + 0xd8)), (int)uVar1 != 1)
     ) {
    return uVar1;
  }
  *(longlong *)(param_1 + 0x48) = param_2;
  return 1;
}



// FUNCTION 1431a5d70 SetPlayStopTransition body=109 status=ok
// SIG undefined SetPlayStopTransition(void)

undefined8
CAkActionPlayAndContinue::SetPlayStopTransition(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  *(longlong *)(param_1 + 0xd8) = param_3;
  if ((*(longlong *)(param_1 + 0x40) != 0) && (param_3 != 0)) {
    FUN_1431501b0(DAT_146b50af0);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  if ((param_2 != 0) &&
     (uVar1 = FUN_14314fb80(DAT_146b50af0,param_2,*(undefined8 *)(param_1 + 0xd8)), (int)uVar1 != 1)
     ) {
    return uVar1;
  }
  *(longlong *)(param_1 + 0x40) = param_2;
  return 1;
}



// FUNCTION 1431a5de0 SetSAInfo body=7 status=ok
// SIG undefined SetSAInfo(void)

void CAkActionPlayAndContinue::SetSAInfo(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  return;
}



// FUNCTION 1431a5df0 StartAsPaused body=11 status=ok
// SIG undefined StartAsPaused(void)

void CAkActionPlayAndContinue::StartAsPaused(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xbc) = 1;
  return;
}



// FUNCTION 1431a5e00 UnsetFadeBack body=21 status=ok
// SIG undefined UnsetFadeBack(void)

void CAkActionPlayAndContinue::UnsetFadeBack(longlong param_1,longlong param_2)

{
  if (param_2 == *(longlong *)(param_1 + 0xb0)) {
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 1431a5e20 CAkMarkers body=12 status=ok
// SIG undefined CAkMarkers(void)

undefined4 * CAkMarkers::CAkMarkers(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 2) = 0;
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1431a5e30 Allocate body=61 status=ok
// SIG undefined Allocate(void)

undefined8 CAkMarkers::Allocate(uint *param_1,uint param_2)

{
  void *pvVar1;
  
  *param_1 = param_2;
  pvVar1 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,(ulonglong)param_2 << 4);
  *(void **)(param_1 + 2) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    *param_1 = 0;
    return 0x34;
  }
  return 1;
}



// FUNCTION 1431a5e70 CopyRelevantMarkers body=274 status=ok
// SIG undefined CopyRelevantMarkers(void)

void CAkMarkers::CopyRelevantMarkers(uint *param_1,longlong param_2,longlong param_3,uint param_4)

{
  longlong *plVar1;
  ushort uVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar6;
  
  if ((*(longlong *)(param_1 + 2) != 0) && ((*(byte *)(param_2 + 8) & 4) != 0)) {
    uVar7 = 0;
    *(undefined8 *)(param_3 + 0x20) = 0;
    *(undefined2 *)(param_3 + 0x18) = 0;
    uVar2 = *(ushort *)(param_3 + 0x12);
    uVar6 = uVar7;
    if (*param_1 != 0) {
      do {
        uVar5 = *(uint *)(*(longlong *)(param_1 + 2) + 4 + uVar6 * 0x10);
        if ((param_4 <= uVar5) && (uVar5 < uVar2 + param_4)) {
          *(short *)(param_3 + 0x18) = *(short *)(param_3 + 0x18) + 1;
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *param_1);
      if (*(ushort *)(param_3 + 0x18) != 0) {
        plVar4 = AK::MemoryMgr::Malloc
                           (g_LEngineDefaultPoolId,(ulonglong)*(ushort *)(param_3 + 0x18) << 5);
        *(longlong **)(param_3 + 0x20) = plVar4;
        if (plVar4 == (longlong *)0x0) {
          *(undefined2 *)(param_3 + 0x18) = 0;
        }
        else if (*param_1 != 0) {
          plVar8 = plVar4 + 2;
          do {
            uVar5 = *(uint *)(*(longlong *)(param_1 + 2) + 4 + uVar7 * 0x10);
            if ((param_4 <= uVar5) && (uVar5 < uVar2 + param_4)) {
              *plVar4 = param_2;
              plVar4 = plVar4 + 4;
              *(uint *)(plVar8 + -1) =
                   *(int *)(*(longlong *)(param_1 + 2) + 4 + uVar7 * 0x10) - param_4;
              plVar1 = (longlong *)(*(longlong *)(param_1 + 2) + uVar7 * 0x10);
              lVar3 = plVar1[1];
              *plVar8 = *plVar1;
              plVar8[1] = lVar3;
              plVar8 = plVar8 + 4;
            }
            uVar5 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar5;
          } while (uVar5 < *param_1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1431a5f90 Free body=151 status=ok
// SIG undefined Free(void)

void CAkMarkers::Free(uint *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulonglong uVar3;
  uint uVar4;
  
  pvVar2 = *(void **)(param_1 + 2);
  uVar3 = 0;
  if (pvVar2 == (void *)0x0) {
    *param_1 = 0;
    return;
  }
  if (*param_1 != 0) {
    do {
      pvVar2 = *(void **)(param_1 + 2);
      pvVar1 = *(void **)((longlong)pvVar2 + uVar3 * 0x10 + 8);
      if (pvVar1 != (void *)0x0) {
        AK::MemoryMgr::Free(g_LEngineDefaultPoolId,pvVar1);
        *(undefined8 *)(*(longlong *)(param_1 + 2) + 8 + uVar3 * 0x10) = 0;
        pvVar2 = *(void **)(param_1 + 2);
      }
      uVar4 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar4;
    } while (uVar4 < *param_1);
  }
  AK::MemoryMgr::Free(g_LEngineDefaultPoolId,pvVar2);
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  return;
}



// FUNCTION 1431a6030 GetClosestMarker body=88 status=ok
// SIG undefined GetClosestMarker(void)

ulonglong CAkMarkers::GetClosestMarker(uint *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  if (*param_1 != 0) {
    piVar1 = (int *)(*(longlong *)(param_1 + 2) + 4);
    uVar4 = uVar3;
    uVar5 = uVar3;
    do {
      uVar2 = *piVar1 - param_2 >> 0x1f;
      uVar2 = (*piVar1 - param_2 ^ uVar2) - uVar2;
      if ((uVar3 == 0) || (uVar2 < (uint)uVar5)) {
        uVar5 = (ulonglong)uVar2;
        uVar3 = uVar4 * 0x10 + *(longlong *)(param_1 + 2);
      }
      uVar2 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar2;
      piVar1 = piVar1 + 4;
    } while (uVar2 < *param_1);
  }
  return uVar3;
}



// FUNCTION 1431a6090 NotifyRelevantMarkers body=136 status=ok
// SIG undefined NotifyRelevantMarkers(void)

void CAkMarkers::NotifyRelevantMarkers(uint *param_1,longlong param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (((*(longlong *)(param_1 + 2) != 0) && ((*(byte *)(param_2 + 8) & 4) != 0)) &&
     (uVar2 = 0, *param_1 != 0)) {
    do {
      uVar1 = *(uint *)((ulonglong)uVar2 * 0x10 + *(longlong *)(param_1 + 2) + 4);
      if ((param_3 <= uVar1) && (uVar1 < param_4)) {
        FUN_1431519c0(DAT_146b50b00,param_2);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *param_1);
  }
  return;
}



// FUNCTION 1431a6120 SetLabel body=130 status=ok
// SIG undefined SetLabel(void)

undefined8 CAkMarkers::SetLabel(longlong param_1,uint param_2,void *param_3,uint param_4)

{
  void *_Dst;
  undefined8 uVar1;
  
  _Dst = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,(ulonglong)(param_4 + 1));
  if (_Dst == (void *)0x0) {
    uVar1 = 0x34;
  }
  else {
    ::_guard_xfg_dispatch_icall_nop(_Dst,param_3,(ulonglong)param_4);
    *(undefined1 *)((ulonglong)param_4 + (longlong)_Dst) = 0;
    uVar1 = 1;
    *(void **)(*(longlong *)(param_1 + 8) + 8 + (ulonglong)param_2 * 0x10) = _Dst;
  }
  return uVar1;
}



// FUNCTION 1431a61b0 FUN_1431a61b0 body=5209 status=ok
// SIG undefined FUN_1431a61b0(void)

void FUN_1431a61b0(longlong *param_1,float *param_2,longlong *param_3)

{
  float *pfVar1;
  byte bVar2;
  longlong lVar3;
  float fVar4;
  char cVar5;
  ushort uVar6;
  ushort uVar7;
  float *pfVar8;
  ushort uVar9;
  uint uVar10;
  float *pfVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  float *pfVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  float *pfVar24;
  ushort uVar25;
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
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
  float fVar71;
  uint local_148;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  uint local_128;
  float local_118;
  float local_108;
  float local_e8;
  float fStack_dc;
  
  uVar6 = *(ushort *)((longlong)param_1 + 0x12);
  uVar28 = (ulonglong)uVar6;
  bVar2 = *(byte *)(param_1 + 1);
  local_148 = (uint)uVar6;
  cVar5 = _ManageBQFChange<AkHpfParamEval>(param_2,param_3);
  uVar27 = (uint)uVar6;
  if (cVar5 == '\0') {
    uVar7 = *(ushort *)(param_2 + 2);
    if (uVar7 < DAT_1467bdcbc) {
      fVar43 = *param_2;
      fVar46 = param_2[1];
      local_128 = 0;
      if (uVar27 != 0) {
        do {
          uVar27 = (int)uVar28 - local_128;
          if (DAT_1467bdcb4 < uVar27) {
            uVar27 = DAT_1467bdcb4;
          }
          if (*(ushort *)(param_2 + 2) < DAT_1467bdcbc) {
            uVar6 = *(ushort *)(param_2 + 2) + 1;
            *(ushort *)(param_2 + 2) = uVar6;
            fVar30 = (float)AkHpfParamEval::EvalCutoff
                                      (((float)uVar6 * (fVar46 - fVar43)) / (float)DAT_1467bdcbc +
                                       fVar43,DAT_1467bdcb8);
            fVar30 = _guard_xfg_dispatch_icall_nop((3.1415927 / (float)DAT_1467bdcac) * fVar30);
            uVar22 = *(uint *)((longlong)param_3 + 0x1c);
            pfVar8 = (float *)param_3[2];
            fVar59 = fVar30 * fVar30 - 1.0;
            fVar37 = fVar30 * fVar30 + 1.0;
            fVar48 = 1.0 / (fVar37 + fVar30 * 1.4142135);
            fVar30 = (fVar30 * 1.4142135 - fVar37) * fVar48;
            fVar63 = fVar48 * -2.0;
            fVar37 = fVar59 * fVar63;
            if (((uVar22 & 1) != 0) || ((char)param_3[4] != '\0')) {
              *pfVar8 = fVar48;
              pfVar8[1] = fVar48;
              pfVar8[2] = fVar48;
              pfVar8[3] = fVar48;
              pfVar8[4] = 0.0;
              pfVar8[5] = 0.0;
              pfVar8[6] = 0.0;
              fVar62 = fVar48 * fVar37;
              fVar38 = fVar30 * fVar63;
              fVar47 = fVar30 * fVar48;
              fVar31 = fVar62 + fVar63;
              pfVar8[7] = fVar31;
              pfVar8[10] = fVar31;
              pfVar8[8] = 0.0;
              pfVar8[9] = 0.0;
              fVar34 = fVar59 * fVar48 * fVar48 * 4.0;
              fVar32 = fVar31 * fVar37 + fVar48 + fVar47;
              pfVar8[0xb] = fVar32;
              pfVar8[0xd] = fVar31;
              pfVar8[0xe] = fVar32;
              pfVar8[0xc] = 0.0;
              pfVar8[0xf] = fVar30 * fVar37 * fVar48 + fVar32 * fVar37 + fVar38;
              fVar31 = fVar34 + fVar48;
              pfVar8[0x10] = fVar63;
              pfVar8[0x11] = fVar31;
              fVar31 = fVar31 * fVar37 + fVar38;
              pfVar8[0x12] = fVar31;
              pfVar8[0x13] = (fVar31 + fVar38) * fVar37 + fVar47;
              pfVar8[0x14] = fVar48;
              pfVar8[0x17] = ((fVar48 + fVar48) * fVar30 + fVar62 * fVar37) * fVar37;
              pfVar8[0x15] = fVar62;
              fVar34 = fVar59 * fVar34;
              pfVar8[0x16] = fVar62 * fVar37 + fVar47;
              pfVar8[0x18] = fVar37;
              pfVar8[0x19] = fVar34 + fVar30;
              pfVar8[0x1a] = (fVar30 + fVar30 + fVar34) * fVar37;
              pfVar8[0x1b] = (fVar30 * 3.0 + fVar34) * fVar34 + fVar30 * fVar30;
              pfVar8[0x1c] = fVar30;
              pfVar8[0x1d] = fVar30 * fVar37;
              fVar31 = fVar59 * fVar48 * fVar48 * fVar59 * 4.0 * fVar30;
              pfVar8[0x1e] = fVar31 + fVar30 * fVar30;
              pfVar8[0x1f] = ((fVar30 + fVar30) * fVar30 + fVar31) * fVar37;
              pfVar8 = pfVar8 + 0x20;
              if ((char)param_3[4] != '\0') goto LAB_1431a6638;
              uVar22 = *(uint *)((longlong)param_3 + 0x1c);
            }
            fVar31 = fVar48 * fVar37;
            if ((uVar22 & 2) != 0) {
              pfVar8[1] = fVar48;
              pfVar8[3] = fVar48;
              *pfVar8 = 0.0;
              pfVar8[2] = 0.0;
              pfVar8[4] = fVar48;
              pfVar8[6] = fVar48;
              pfVar8[5] = fVar63 + fVar31;
              pfVar8[7] = fVar63 + fVar31;
              pfVar8[8] = fVar63;
              pfVar8[10] = fVar63;
              fVar34 = fVar59 * fVar48 * fVar48 * 4.0;
              fVar32 = fVar34 + fVar48;
              fVar59 = fVar59 * fVar34 + fVar30;
              pfVar8[9] = fVar32;
              pfVar8[0xb] = fVar32;
              pfVar8[0xc] = fVar48;
              pfVar8[0xd] = fVar31;
              pfVar8[0xe] = fVar48;
              pfVar8[0xf] = fVar31;
              pfVar8[0x11] = fVar59;
              pfVar8[0x13] = fVar59;
              pfVar8[0x10] = fVar37;
              pfVar8[0x12] = fVar37;
              pfVar8[0x14] = fVar30;
              pfVar8[0x15] = fVar37 * fVar30;
              pfVar8[0x16] = fVar30;
              pfVar8[0x17] = fVar37 * fVar30;
              pfVar8 = pfVar8 + 0x18;
              uVar22 = *(uint *)((longlong)param_3 + 0x1c);
            }
            if (3 < uVar22) {
              *pfVar8 = fVar48;
              pfVar8[1] = fVar63;
              pfVar8[2] = fVar48;
              pfVar8[3] = fVar37;
              pfVar8[4] = fVar30;
            }
          }
LAB_1431a6638:
          uVar6 = *(ushort *)(param_1 + 2);
          uVar21 = (ulonglong)uVar6;
          pfVar8 = (float *)(*param_1 + (ulonglong)local_128 * 4);
          uVar22 = uVar27;
          if ((uVar27 & 3) != 0) {
            iVar13 = 4 - (uVar27 & 3);
            pfVar11 = pfVar8 + uVar27;
            uVar22 = iVar13 + uVar27;
            do {
              *pfVar11 = 0.0;
              pfVar11 = pfVar11 + 1;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
          pfVar11 = (float *)*param_3;
          uVar17 = *(uint *)((longlong)param_3 + 0x1c);
          if ((char)param_3[4] == '\0') {
            if (3 < uVar17) {
              pfVar24 = pfVar11 + 8;
              uVar28 = (ulonglong)(uVar17 >> 2);
              do {
                fVar31 = pfVar24[-4];
                fVar32 = pfVar24[-3];
                fVar34 = pfVar24[-2];
                fVar38 = pfVar24[-1];
                fVar47 = *pfVar11;
                fVar62 = pfVar11[1];
                fVar60 = pfVar11[2];
                fVar61 = pfVar11[3];
                fVar64 = *pfVar24;
                fVar65 = pfVar24[1];
                fVar66 = pfVar24[2];
                fVar67 = pfVar24[3];
                fVar68 = pfVar24[4];
                fVar69 = pfVar24[5];
                fVar70 = pfVar24[6];
                fVar71 = pfVar24[7];
                lVar14 = (ulonglong)((*(uint *)((longlong)param_3 + 0x1c) >> 1 & 1) * 0x18) +
                         (ulonglong)((*(uint *)((longlong)param_3 + 0x1c) & 1) << 5);
                lVar20 = param_3[2];
                fVar30 = *(float *)(lVar20 + lVar14 * 4);
                fVar37 = *(float *)(lVar20 + 4 + lVar14 * 4);
                fVar48 = *(float *)(lVar20 + 8 + lVar14 * 4);
                fVar59 = *(float *)(lVar20 + 0xc + lVar14 * 4);
                fVar63 = *(float *)(lVar20 + 0x10 + lVar14 * 4);
                if (pfVar8 < pfVar8 + uVar22) {
                  uVar29 = (ulonglong)((uint)uVar6 + (uint)uVar6);
                  pfVar15 = pfVar8 + ((uint)uVar6 + (uint)uVar6);
                  lVar20 = ((uint)uVar6 + (uint)uVar6 * 2) - uVar29;
                  fVar49 = fVar47;
                  fVar50 = fVar62;
                  fVar52 = fVar60;
                  fVar53 = fVar61;
                  local_138 = fVar31;
                  fStack_134 = fVar32;
                  fStack_130 = fVar34;
                  fStack_12c = fVar38;
                  do {
                    pfVar1 = pfVar15 + lVar20;
                    fVar4 = *pfVar1;
                    fVar51 = pfVar1[1];
                    fVar38 = pfVar1[2];
                    fVar61 = pfVar1[3];
                    pfVar1 = pfVar15 + (uVar21 - uVar29);
                    fVar54 = *pfVar1;
                    fVar56 = pfVar1[1];
                    fVar32 = pfVar1[2];
                    fVar62 = pfVar1[3];
                    pfVar1 = pfVar15 + -uVar29;
                    fVar58 = *pfVar1;
                    fVar57 = pfVar1[1];
                    fVar31 = pfVar1[2];
                    fVar47 = pfVar1[3];
                    fVar40 = *pfVar15;
                    fVar42 = pfVar15[1];
                    fVar34 = pfVar15[2];
                    fVar60 = pfVar15[3];
                    fVar39 = fVar37 * fVar49 + fVar58 * fVar30 + fVar48 * local_138 +
                             fVar59 * fVar64 + fVar63 * fVar68;
                    fVar41 = fVar37 * fVar50 + fVar54 * fVar30 + fVar48 * fStack_134 +
                             fVar59 * fVar65 + fVar63 * fVar69;
                    fVar44 = fVar37 * fVar52 + fVar40 * fVar30 + fVar48 * fStack_130 +
                             fVar59 * fVar66 + fVar63 * fVar70;
                    fVar45 = fVar37 * fVar53 + fVar4 * fVar30 + fVar48 * fStack_12c +
                             fVar59 * fVar67 + fVar63 * fVar71;
                    fVar49 = fVar58 * fVar37 + fVar57 * fVar30 + fVar48 * fVar49 + fVar39 * fVar59 +
                             fVar63 * fVar64;
                    fVar50 = fVar54 * fVar37 + fVar56 * fVar30 + fVar48 * fVar50 + fVar41 * fVar59 +
                             fVar63 * fVar65;
                    fVar52 = fVar40 * fVar37 + fVar42 * fVar30 + fVar48 * fVar52 + fVar44 * fVar59 +
                             fVar63 * fVar66;
                    fVar53 = fVar4 * fVar37 + fVar51 * fVar30 + fVar48 * fVar53 + fVar45 * fVar59 +
                             fVar63 * fVar67;
                    fVar68 = fVar57 * fVar37 + fVar31 * fVar30 + fVar58 * fVar48 + fVar49 * fVar59 +
                             fVar39 * fVar63;
                    fVar69 = fVar56 * fVar37 + fVar32 * fVar30 + fVar54 * fVar48 + fVar50 * fVar59 +
                             fVar41 * fVar63;
                    fVar70 = fVar42 * fVar37 + fVar34 * fVar30 + fVar40 * fVar48 + fVar52 * fVar59 +
                             fVar44 * fVar63;
                    fVar71 = fVar51 * fVar37 + fVar38 * fVar30 + fVar4 * fVar48 + fVar53 * fVar59 +
                             fVar45 * fVar63;
                    fVar64 = fVar47 * fVar30 + fVar31 * fVar37 + fVar57 * fVar48 + fVar68 * fVar59 +
                             fVar49 * fVar63;
                    fVar65 = fVar62 * fVar30 + fVar32 * fVar37 + fVar56 * fVar48 + fVar69 * fVar59 +
                             fVar50 * fVar63;
                    fVar66 = fVar60 * fVar30 + fVar34 * fVar37 + fVar42 * fVar48 + fVar70 * fVar59 +
                             fVar52 * fVar63;
                    fVar67 = fVar61 * fVar30 + fVar38 * fVar37 + fVar51 * fVar48 + fVar71 * fVar59 +
                             fVar53 * fVar63;
                    pfVar1 = pfVar15 + -uVar29;
                    *pfVar1 = fVar39;
                    pfVar1[1] = fVar49;
                    pfVar1[2] = fVar68;
                    pfVar1[3] = fVar64;
                    pfVar1 = pfVar15 + (uVar21 - uVar29);
                    *pfVar1 = fVar41;
                    pfVar1[1] = fVar50;
                    pfVar1[2] = fVar69;
                    pfVar1[3] = fVar65;
                    *pfVar15 = fVar44;
                    pfVar15[1] = fVar52;
                    pfVar15[2] = fVar70;
                    pfVar15[3] = fVar66;
                    pfVar1 = pfVar15 + lVar20;
                    *pfVar1 = fVar45;
                    pfVar1[1] = fVar53;
                    pfVar1[2] = fVar71;
                    pfVar1[3] = fVar67;
                    pfVar15 = pfVar15 + 4;
                    fVar49 = fVar47;
                    fVar50 = fVar62;
                    fVar52 = fVar60;
                    fVar53 = fVar61;
                    local_138 = fVar31;
                    fStack_134 = fVar32;
                    fStack_130 = fVar34;
                    fStack_12c = fVar38;
                  } while (pfVar15 + -uVar29 < pfVar8 + uVar22);
                }
                pfVar8 = pfVar8 + (uint)uVar6 * 4;
                *pfVar11 = fVar47;
                pfVar11[1] = fVar62;
                pfVar11[2] = fVar60;
                pfVar11[3] = fVar61;
                uVar17 = uVar17 - 4;
                pfVar24[-4] = fVar31;
                pfVar24[-3] = fVar32;
                pfVar24[-2] = fVar34;
                pfVar24[-1] = fVar38;
                pfVar11 = pfVar11 + 0x10;
                *pfVar24 = fVar64;
                pfVar24[1] = fVar65;
                pfVar24[2] = fVar66;
                pfVar24[3] = fVar67;
                pfVar24[4] = fVar68;
                pfVar24[5] = fVar69;
                pfVar24[6] = fVar70;
                pfVar24[7] = fVar71;
                pfVar24 = pfVar24 + 0x10;
                uVar28 = uVar28 - 1;
              } while (uVar28 != 0);
              uVar28 = (ulonglong)local_148;
            }
            if (1 < uVar17) {
              lVar20 = param_3[2];
              fVar30 = pfVar11[8];
              fVar37 = pfVar11[9];
              fVar48 = pfVar11[0xc];
              fVar59 = pfVar11[0xd];
              uVar29 = (ulonglong)((*(uint *)((longlong)param_3 + 0x1c) & 1) << 5);
              pfVar24 = (float *)(lVar20 + 0x50 + uVar29 * 4);
              fVar63 = *pfVar24;
              fVar31 = pfVar24[1];
              fVar32 = pfVar24[2];
              fVar34 = pfVar24[3];
              pfVar24 = (float *)(lVar20 + uVar29 * 4);
              fVar38 = *pfVar24;
              fVar47 = pfVar24[1];
              fVar62 = pfVar24[2];
              fVar60 = pfVar24[3];
              pfVar24 = (float *)(lVar20 + 0x10 + uVar29 * 4);
              fVar61 = *pfVar24;
              fVar64 = pfVar24[1];
              fVar65 = pfVar24[2];
              fVar66 = pfVar24[3];
              pfVar24 = (float *)(lVar20 + 0x20 + uVar29 * 4);
              fVar67 = *pfVar24;
              fVar68 = pfVar24[1];
              fVar69 = pfVar24[2];
              fVar70 = pfVar24[3];
              pfVar24 = (float *)(lVar20 + 0x30 + uVar29 * 4);
              fVar71 = *pfVar24;
              fVar49 = pfVar24[1];
              fVar50 = pfVar24[2];
              fVar52 = pfVar24[3];
              pfVar24 = (float *)(lVar20 + 0x40 + uVar29 * 4);
              fVar53 = *pfVar24;
              fVar4 = pfVar24[1];
              fVar51 = pfVar24[2];
              fVar54 = pfVar24[3];
              fVar56 = *pfVar11;
              fVar58 = pfVar11[1];
              fVar57 = pfVar11[4];
              fVar40 = pfVar11[5];
              for (pfVar24 = pfVar8; pfVar24 < pfVar8 + uVar22; pfVar24 = pfVar24 + 4) {
                pfVar15 = pfVar24 + uVar21;
                fVar42 = *pfVar15;
                fVar39 = pfVar15[1];
                fVar41 = pfVar15[2];
                fVar44 = pfVar15[3];
                fVar45 = *pfVar24;
                fVar33 = pfVar24[1];
                fVar35 = pfVar24[2];
                fVar36 = pfVar24[3];
                fVar55 = fVar45 * fVar61 + fVar45 * fVar38 + fVar67 * fVar56 + fVar71 * fVar57 +
                         fVar53 * fVar30 + fVar63 * fVar48;
                fVar56 = fVar45 * fVar64 + fVar33 * fVar47 + fVar68 * fVar56 + fVar49 * fVar57 +
                         fVar4 * fVar30 + fVar31 * fVar48;
                fVar57 = fVar42 * fVar65 + fVar42 * fVar62 + fVar69 * fVar58 + fVar50 * fVar40 +
                         fVar51 * fVar37 + fVar32 * fVar59;
                fVar58 = fVar42 * fVar66 + fVar39 * fVar60 + fVar70 * fVar58 + fVar52 * fVar40 +
                         fVar54 * fVar37 + fVar34 * fVar59;
                fVar48 = fVar35 * fVar61 + fVar35 * fVar38 + fVar33 * fVar67 + fVar45 * fVar71 +
                         fVar56 * fVar53 + fVar55 * fVar63;
                fVar30 = fVar35 * fVar64 + fVar36 * fVar47 + fVar33 * fVar68 + fVar45 * fVar49 +
                         fVar56 * fVar4 + fVar55 * fVar31;
                fVar59 = fVar41 * fVar65 + fVar41 * fVar62 + fVar39 * fVar69 + fVar42 * fVar50 +
                         fVar58 * fVar51 + fVar57 * fVar32;
                fVar37 = fVar41 * fVar66 + fVar44 * fVar60 + fVar39 * fVar70 + fVar42 * fVar52 +
                         fVar58 * fVar54 + fVar57 * fVar34;
                *pfVar24 = fVar55;
                pfVar24[1] = fVar56;
                pfVar24[2] = fVar48;
                pfVar24[3] = fVar30;
                pfVar15 = pfVar24 + uVar21;
                *pfVar15 = fVar57;
                pfVar15[1] = fVar58;
                pfVar15[2] = fVar59;
                pfVar15[3] = fVar37;
                fVar56 = fVar36;
                fVar58 = fVar44;
                fVar57 = fVar35;
                fVar40 = fVar41;
              }
              *pfVar11 = fVar56;
              pfVar11[4] = fVar57;
              pfVar8 = pfVar8 + ((uint)uVar6 + (uint)uVar6);
              pfVar11[8] = fVar30;
              uVar17 = uVar17 - 2;
              pfVar11[0xc] = fVar48;
              pfVar11[1] = fVar58;
              pfVar11[5] = fVar40;
              pfVar11[9] = fVar37;
              pfVar11[0xd] = fVar59;
            }
          }
          if (uVar17 != 0) {
            do {
              uVar18 = *(uint *)((longlong)param_3 + 0x1c);
              uVar26 = uVar18 - uVar17;
              uVar23 = uVar26 >> 2;
              uVar19 = uVar26 & 3;
              if ((uVar18 - 1 == uVar26) && ((uVar18 & 1) != 0)) {
                uVar10 = uVar23;
                if ((uVar18 != 1) && (1 < uVar19)) {
                  uVar10 = uVar23 + 1;
                }
                lVar20 = *param_3;
                uVar28 = (ulonglong)(uVar10 << 4);
                local_108 = *(float *)(lVar20 + uVar28 * 4);
                local_118 = *(float *)(lVar20 + 4 + uVar28 * 4);
                fStack_dc = *(float *)(lVar20 + 8 + uVar28 * 4);
                fStack_12c = *(float *)(lVar20 + 0xc + uVar28 * 4);
              }
              else {
                lVar14 = (ulonglong)(uVar23 << 4) + (ulonglong)uVar19;
                lVar20 = *param_3;
                local_108 = *(float *)(lVar20 + lVar14 * 4);
                local_118 = *(float *)(lVar20 + 0x10 + lVar14 * 4);
                fStack_dc = *(float *)(lVar20 + 0x20 + lVar14 * 4);
                fStack_12c = *(float *)(lVar20 + 0x30 + lVar14 * 4);
              }
              pfVar11 = (float *)param_3[2];
              fVar30 = *pfVar11;
              fVar37 = pfVar11[1];
              fVar48 = pfVar11[2];
              fVar59 = pfVar11[3];
              fVar63 = pfVar11[4];
              fVar31 = pfVar11[5];
              fVar32 = pfVar11[6];
              fVar34 = pfVar11[7];
              fVar38 = pfVar11[8];
              fVar47 = pfVar11[9];
              fVar62 = pfVar11[10];
              fVar60 = pfVar11[0xb];
              fVar61 = pfVar11[0xc];
              fVar64 = pfVar11[0xd];
              fVar65 = pfVar11[0xe];
              fVar66 = pfVar11[0xf];
              fVar67 = pfVar11[0x10];
              fVar68 = pfVar11[0x11];
              fVar69 = pfVar11[0x12];
              fVar70 = pfVar11[0x13];
              fVar71 = pfVar11[0x14];
              fVar49 = pfVar11[0x15];
              fVar50 = pfVar11[0x16];
              fVar52 = pfVar11[0x17];
              fVar53 = pfVar11[0x18];
              fVar4 = pfVar11[0x19];
              fVar51 = pfVar11[0x1a];
              fVar54 = pfVar11[0x1b];
              fVar56 = pfVar11[0x1c];
              fVar58 = pfVar11[0x1d];
              fVar57 = pfVar11[0x1e];
              fVar40 = pfVar11[0x1f];
              pfVar11 = pfVar8;
              fVar42 = local_118;
              fVar39 = local_108;
              if (pfVar8 < pfVar8 + uVar22) {
                do {
                  fVar41 = *pfVar11;
                  fVar44 = pfVar11[1];
                  local_118 = pfVar11[2];
                  local_108 = pfVar11[3];
                  fVar45 = fVar53 * fStack_dc;
                  fVar33 = fVar4 * fStack_dc;
                  fVar35 = fVar56 * fStack_12c;
                  fVar36 = fVar58 * fStack_12c;
                  fVar55 = fVar40 * fStack_12c;
                  fStack_12c = fVar44 * fVar62 +
                               fVar32 * local_118 +
                               fVar69 * fVar39 + local_118 * fVar48 + fVar50 * fVar42 +
                               fVar51 * fStack_dc + fVar57 * fStack_12c + fVar41 * fVar65;
                  fStack_dc = fVar44 * fVar60 +
                              fVar34 * local_118 +
                              fVar70 * fVar39 + local_108 * fVar59 + fVar52 * fVar42 +
                              fVar54 * fStack_dc + fVar55 + fVar41 * fVar66;
                  *pfVar11 = fVar44 * fVar38 +
                             fVar63 * local_118 +
                             fVar67 * fVar39 + fVar41 * fVar30 + fVar71 * fVar42 + fVar45 + fVar35 +
                             fVar41 * fVar61;
                  pfVar11[1] = fVar44 * fVar47 +
                               fVar31 * local_118 +
                               fVar68 * fVar39 + fVar44 * fVar37 + fVar49 * fVar42 + fVar33 + fVar36
                               + fVar41 * fVar64;
                  pfVar11[2] = fStack_12c;
                  pfVar11[3] = fStack_dc;
                  pfVar11 = pfVar11 + 4;
                  fVar42 = local_118;
                  fVar39 = local_108;
                } while (pfVar11 < pfVar8 + uVar22);
                uVar18 = *(uint *)((longlong)param_3 + 0x1c);
              }
              if ((uVar18 - 1 == uVar26) && ((uVar18 & 1) != 0)) {
                if ((uVar18 != 1) && (1 < uVar19)) {
                  uVar23 = uVar23 + 1;
                }
                uVar28 = (ulonglong)(uVar23 << 4);
                *(float *)(*param_3 + uVar28 * 4) = local_108;
                *(float *)(*param_3 + 4 + uVar28 * 4) = local_118;
                *(float *)(*param_3 + 8 + uVar28 * 4) = fStack_dc;
                *(float *)(*param_3 + 0xc + uVar28 * 4) = fStack_12c;
              }
              else {
                lVar20 = (ulonglong)(uVar23 << 4) + (ulonglong)uVar19;
                *(float *)(*param_3 + lVar20 * 4) = local_108;
                *(float *)(*param_3 + 0x10 + lVar20 * 4) = local_118;
                *(float *)(*param_3 + 0x20 + lVar20 * 4) = fStack_dc;
                *(float *)(*param_3 + 0x30 + lVar20 * 4) = fStack_12c;
              }
              pfVar8 = pfVar8 + uVar21;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
            uVar28 = (ulonglong)local_148;
          }
          local_128 = local_128 + uVar27;
        } while (local_128 < (uint)uVar28);
        uVar7 = *(ushort *)(param_2 + 2);
      }
      if ((DAT_1467bdcbc <= uVar7) && (*param_2 = param_2[1], param_2[1] <= 0.1)) {
        *(undefined1 *)((longlong)param_2 + 10) = 4;
      }
    }
    else {
      uVar7 = *(ushort *)(param_1 + 2);
      uVar21 = (ulonglong)uVar7;
      pfVar8 = (float *)*param_1;
      if ((uVar6 & 3) != 0) {
        pfVar11 = pfVar8 + uVar28;
        iVar13 = 4 - (uVar27 & 3);
        local_148 = uVar27 + iVar13;
        uVar28 = (ulonglong)local_148;
        do {
          *pfVar11 = 0.0;
          pfVar11 = pfVar11 + 1;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
      uVar22 = (uint)uVar28;
      pfVar11 = (float *)*param_3;
      uVar27 = *(uint *)((longlong)param_3 + 0x1c);
      if ((char)param_3[4] == '\0') {
        if (3 < uVar27) {
          pfVar24 = pfVar11 + 8;
          uVar29 = (ulonglong)(uVar27 >> 2);
          do {
            fVar59 = pfVar24[-4];
            fVar63 = pfVar24[-3];
            fVar31 = pfVar24[-2];
            fVar32 = pfVar24[-1];
            fVar34 = *pfVar11;
            fVar38 = pfVar11[1];
            fVar47 = pfVar11[2];
            fVar62 = pfVar11[3];
            fVar60 = *pfVar24;
            fVar61 = pfVar24[1];
            fVar64 = pfVar24[2];
            fVar65 = pfVar24[3];
            fVar66 = pfVar24[4];
            fVar67 = pfVar24[5];
            fVar68 = pfVar24[6];
            fVar69 = pfVar24[7];
            lVar14 = (ulonglong)((*(uint *)((longlong)param_3 + 0x1c) >> 1 & 1) * 0x18) +
                     (ulonglong)((*(uint *)((longlong)param_3 + 0x1c) & 1) << 5);
            lVar20 = param_3[2];
            fVar43 = *(float *)(lVar20 + lVar14 * 4);
            fVar46 = *(float *)(lVar20 + 4 + lVar14 * 4);
            fVar30 = *(float *)(lVar20 + 8 + lVar14 * 4);
            fVar37 = *(float *)(lVar20 + 0xc + lVar14 * 4);
            fVar48 = *(float *)(lVar20 + 0x10 + lVar14 * 4);
            if (pfVar8 < pfVar8 + uVar28) {
              uVar12 = (ulonglong)((uint)uVar7 + (uint)uVar7);
              pfVar15 = pfVar8 + ((uint)uVar7 + (uint)uVar7);
              lVar20 = ((uint)uVar7 + (uint)uVar7 * 2) - uVar12;
              fVar70 = fVar34;
              fVar71 = fVar38;
              fVar49 = fVar47;
              fVar50 = fVar62;
              local_138 = fVar59;
              fStack_134 = fVar63;
              fStack_130 = fVar31;
              fStack_12c = fVar32;
              do {
                pfVar1 = pfVar15 + lVar20;
                fVar52 = *pfVar1;
                fVar53 = pfVar1[1];
                fVar32 = pfVar1[2];
                fVar62 = pfVar1[3];
                pfVar1 = pfVar15 + (uVar21 - uVar12);
                fVar4 = *pfVar1;
                fVar51 = pfVar1[1];
                fVar63 = pfVar1[2];
                fVar38 = pfVar1[3];
                pfVar1 = pfVar15 + -uVar12;
                fVar54 = *pfVar1;
                fVar56 = pfVar1[1];
                fVar59 = pfVar1[2];
                fVar34 = pfVar1[3];
                fVar58 = *pfVar15;
                fVar57 = pfVar15[1];
                fVar31 = pfVar15[2];
                fVar47 = pfVar15[3];
                fVar40 = fVar54 * fVar43 + fVar46 * fVar70 + fVar30 * local_138 + fVar37 * fVar60 +
                         fVar48 * fVar66;
                fVar42 = fVar4 * fVar43 + fVar46 * fVar71 + fVar30 * fStack_134 + fVar37 * fVar61 +
                         fVar48 * fVar67;
                fVar39 = fVar58 * fVar43 + fVar46 * fVar49 + fVar30 * fStack_130 + fVar37 * fVar64 +
                         fVar48 * fVar68;
                fVar41 = fVar52 * fVar43 + fVar46 * fVar50 + fVar30 * fStack_12c + fVar37 * fVar65 +
                         fVar48 * fVar69;
                fVar70 = fVar54 * fVar46 + fVar56 * fVar43 + fVar30 * fVar70 + fVar40 * fVar37 +
                         fVar48 * fVar60;
                fVar71 = fVar4 * fVar46 + fVar51 * fVar43 + fVar30 * fVar71 + fVar42 * fVar37 +
                         fVar48 * fVar61;
                fVar49 = fVar58 * fVar46 + fVar57 * fVar43 + fVar30 * fVar49 + fVar39 * fVar37 +
                         fVar48 * fVar64;
                fVar50 = fVar52 * fVar46 + fVar53 * fVar43 + fVar30 * fVar50 + fVar41 * fVar37 +
                         fVar48 * fVar65;
                fVar66 = fVar56 * fVar46 + fVar59 * fVar43 + fVar54 * fVar30 + fVar70 * fVar37 +
                         fVar40 * fVar48;
                fVar67 = fVar51 * fVar46 + fVar63 * fVar43 + fVar4 * fVar30 + fVar71 * fVar37 +
                         fVar42 * fVar48;
                fVar68 = fVar57 * fVar46 + fVar31 * fVar43 + fVar58 * fVar30 + fVar49 * fVar37 +
                         fVar39 * fVar48;
                fVar69 = fVar53 * fVar46 + fVar32 * fVar43 + fVar52 * fVar30 + fVar50 * fVar37 +
                         fVar41 * fVar48;
                fVar60 = fVar59 * fVar46 + fVar34 * fVar43 + fVar56 * fVar30 + fVar66 * fVar37 +
                         fVar70 * fVar48;
                fVar61 = fVar63 * fVar46 + fVar38 * fVar43 + fVar51 * fVar30 + fVar67 * fVar37 +
                         fVar71 * fVar48;
                fVar64 = fVar31 * fVar46 + fVar47 * fVar43 + fVar57 * fVar30 + fVar68 * fVar37 +
                         fVar49 * fVar48;
                fVar65 = fVar32 * fVar46 + fVar62 * fVar43 + fVar53 * fVar30 + fVar69 * fVar37 +
                         fVar50 * fVar48;
                pfVar1 = pfVar15 + -uVar12;
                *pfVar1 = fVar40;
                pfVar1[1] = fVar70;
                pfVar1[2] = fVar66;
                pfVar1[3] = fVar60;
                pfVar1 = pfVar15 + (uVar21 - uVar12);
                *pfVar1 = fVar42;
                pfVar1[1] = fVar71;
                pfVar1[2] = fVar67;
                pfVar1[3] = fVar61;
                *pfVar15 = fVar39;
                pfVar15[1] = fVar49;
                pfVar15[2] = fVar68;
                pfVar15[3] = fVar64;
                pfVar1 = pfVar15 + lVar20;
                *pfVar1 = fVar41;
                pfVar1[1] = fVar50;
                pfVar1[2] = fVar69;
                pfVar1[3] = fVar65;
                pfVar15 = pfVar15 + 4;
                fVar70 = fVar34;
                fVar71 = fVar38;
                fVar49 = fVar47;
                fVar50 = fVar62;
                local_138 = fVar59;
                fStack_134 = fVar63;
                fStack_130 = fVar31;
                fStack_12c = fVar32;
              } while (pfVar15 + -uVar12 < pfVar8 + uVar28);
            }
            pfVar8 = pfVar8 + (uint)uVar7 * 4;
            *pfVar11 = fVar34;
            pfVar11[1] = fVar38;
            pfVar11[2] = fVar47;
            pfVar11[3] = fVar62;
            uVar27 = uVar27 - 4;
            pfVar24[-4] = fVar59;
            pfVar24[-3] = fVar63;
            pfVar24[-2] = fVar31;
            pfVar24[-1] = fVar32;
            pfVar11 = pfVar11 + 0x10;
            *pfVar24 = fVar60;
            pfVar24[1] = fVar61;
            pfVar24[2] = fVar64;
            pfVar24[3] = fVar65;
            pfVar24[4] = fVar66;
            pfVar24[5] = fVar67;
            pfVar24[6] = fVar68;
            pfVar24[7] = fVar69;
            pfVar24 = pfVar24 + 0x10;
            uVar29 = uVar29 - 1;
          } while (uVar29 != 0);
          uVar28 = (ulonglong)local_148;
        }
        uVar22 = (uint)uVar28;
        if (1 < uVar27) {
          fVar43 = pfVar11[8];
          fVar46 = pfVar11[9];
          fVar30 = pfVar11[0xc];
          fVar37 = pfVar11[0xd];
          uVar29 = (ulonglong)((*(uint *)((longlong)param_3 + 0x1c) & 1) << 5);
          lVar20 = param_3[2];
          pfVar24 = (float *)(lVar20 + uVar29 * 4);
          fVar48 = *pfVar24;
          fVar59 = pfVar24[1];
          fVar63 = pfVar24[2];
          fVar31 = pfVar24[3];
          pfVar24 = (float *)(lVar20 + 0x10 + uVar29 * 4);
          fVar32 = *pfVar24;
          fVar34 = pfVar24[1];
          fVar38 = pfVar24[2];
          fVar47 = pfVar24[3];
          pfVar24 = (float *)(lVar20 + 0x20 + uVar29 * 4);
          fVar62 = *pfVar24;
          fVar60 = pfVar24[1];
          fVar61 = pfVar24[2];
          fVar64 = pfVar24[3];
          pfVar24 = (float *)(lVar20 + 0x30 + uVar29 * 4);
          fVar65 = *pfVar24;
          fVar66 = pfVar24[1];
          fVar67 = pfVar24[2];
          fVar68 = pfVar24[3];
          pfVar24 = (float *)(lVar20 + 0x40 + uVar29 * 4);
          fVar69 = *pfVar24;
          fVar70 = pfVar24[1];
          fVar71 = pfVar24[2];
          fVar49 = pfVar24[3];
          pfVar24 = (float *)(lVar20 + 0x50 + uVar29 * 4);
          fVar50 = *pfVar24;
          fVar52 = pfVar24[1];
          fVar53 = pfVar24[2];
          fVar4 = pfVar24[3];
          fVar51 = *pfVar11;
          fVar54 = pfVar11[1];
          fVar56 = pfVar11[4];
          fVar58 = pfVar11[5];
          for (pfVar24 = pfVar8; pfVar24 < pfVar8 + uVar28; pfVar24 = pfVar24 + 4) {
            pfVar15 = pfVar24 + uVar21;
            fVar57 = *pfVar15;
            fVar40 = pfVar15[1];
            fVar42 = pfVar15[2];
            fVar39 = pfVar15[3];
            fVar41 = *pfVar24;
            fVar44 = pfVar24[1];
            fVar45 = pfVar24[2];
            fVar33 = pfVar24[3];
            fVar35 = fVar41 * fVar32 + fVar41 * fVar48 + fVar51 * fVar62 + fVar56 * fVar65 +
                     fVar43 * fVar69 + fVar30 * fVar50;
            fVar51 = fVar41 * fVar34 + fVar44 * fVar59 + fVar51 * fVar60 + fVar56 * fVar66 +
                     fVar43 * fVar70 + fVar30 * fVar52;
            fVar56 = fVar57 * fVar38 + fVar57 * fVar63 + fVar54 * fVar61 + fVar58 * fVar67 +
                     fVar46 * fVar71 + fVar37 * fVar53;
            fVar54 = fVar57 * fVar47 + fVar40 * fVar31 + fVar54 * fVar64 + fVar58 * fVar68 +
                     fVar46 * fVar49 + fVar37 * fVar4;
            fVar30 = fVar45 * fVar32 + fVar45 * fVar48 + fVar44 * fVar62 + fVar41 * fVar65 +
                     fVar51 * fVar69 + fVar35 * fVar50;
            fVar43 = fVar45 * fVar34 + fVar33 * fVar59 + fVar44 * fVar60 + fVar41 * fVar66 +
                     fVar51 * fVar70 + fVar35 * fVar52;
            fVar37 = fVar42 * fVar38 + fVar42 * fVar63 + fVar40 * fVar61 + fVar57 * fVar67 +
                     fVar54 * fVar71 + fVar56 * fVar53;
            fVar46 = fVar42 * fVar47 + fVar39 * fVar31 + fVar40 * fVar64 + fVar57 * fVar68 +
                     fVar54 * fVar49 + fVar56 * fVar4;
            *pfVar24 = fVar35;
            pfVar24[1] = fVar51;
            pfVar24[2] = fVar30;
            pfVar24[3] = fVar43;
            pfVar15 = pfVar24 + uVar21;
            *pfVar15 = fVar56;
            pfVar15[1] = fVar54;
            pfVar15[2] = fVar37;
            pfVar15[3] = fVar46;
            fVar51 = fVar33;
            fVar54 = fVar39;
            fVar56 = fVar45;
            fVar58 = fVar42;
          }
          *pfVar11 = fVar51;
          pfVar11[4] = fVar56;
          pfVar8 = pfVar8 + ((uint)uVar7 + (uint)uVar7);
          pfVar11[8] = fVar43;
          uVar27 = uVar27 - 2;
          pfVar11[0xc] = fVar30;
          pfVar11[1] = fVar54;
          pfVar11[5] = fVar58;
          pfVar11[9] = fVar46;
          pfVar11[0xd] = fVar37;
        }
      }
      if (uVar27 != 0) {
        do {
          uVar17 = *(uint *)((longlong)param_3 + 0x1c);
          uVar19 = uVar17 - uVar27;
          uVar23 = uVar19 >> 2;
          uVar18 = uVar19 & 3;
          if ((uVar17 - 1 == uVar19) && ((uVar17 & 1) != 0)) {
            uVar26 = uVar23;
            if ((uVar17 != 1) && (1 < uVar18)) {
              uVar26 = uVar23 + 1;
            }
            lVar20 = *param_3;
            uVar28 = (ulonglong)(uVar26 << 4);
            local_138 = *(float *)(lVar20 + uVar28 * 4);
            local_e8 = *(float *)(lVar20 + 4 + uVar28 * 4);
            fVar43 = *(float *)(lVar20 + 8 + uVar28 * 4);
            fVar46 = *(float *)(lVar20 + 0xc + uVar28 * 4);
          }
          else {
            lVar14 = (ulonglong)(uVar23 << 4) + (ulonglong)uVar18;
            lVar20 = *param_3;
            local_138 = *(float *)(lVar20 + lVar14 * 4);
            local_e8 = *(float *)(lVar20 + 0x10 + lVar14 * 4);
            fVar43 = *(float *)(lVar20 + 0x20 + lVar14 * 4);
            fVar46 = *(float *)(lVar20 + 0x30 + lVar14 * 4);
          }
          pfVar11 = (float *)param_3[2];
          fVar30 = *pfVar11;
          fVar37 = pfVar11[1];
          fVar48 = pfVar11[2];
          fVar59 = pfVar11[3];
          fVar63 = pfVar11[4];
          fVar31 = pfVar11[5];
          fVar32 = pfVar11[6];
          fVar34 = pfVar11[7];
          fVar38 = pfVar11[8];
          fVar47 = pfVar11[9];
          fVar62 = pfVar11[10];
          fVar60 = pfVar11[0xb];
          fVar61 = pfVar11[0xc];
          fVar64 = pfVar11[0xd];
          fVar65 = pfVar11[0xe];
          fVar66 = pfVar11[0xf];
          fVar67 = pfVar11[0x10];
          fVar68 = pfVar11[0x11];
          fVar69 = pfVar11[0x12];
          fVar70 = pfVar11[0x13];
          fVar71 = pfVar11[0x14];
          fVar49 = pfVar11[0x15];
          fVar50 = pfVar11[0x16];
          fVar52 = pfVar11[0x17];
          fVar53 = pfVar11[0x18];
          fVar4 = pfVar11[0x19];
          fVar51 = pfVar11[0x1a];
          fVar54 = pfVar11[0x1b];
          fVar56 = pfVar11[0x1c];
          fVar58 = pfVar11[0x1d];
          fVar57 = pfVar11[0x1e];
          fVar40 = pfVar11[0x1f];
          pfVar11 = pfVar8;
          fVar42 = local_e8;
          fVar39 = local_138;
          if (pfVar8 < pfVar8 + uVar22) {
            do {
              fVar41 = *pfVar11;
              fVar44 = pfVar11[1];
              local_e8 = pfVar11[2];
              local_138 = pfVar11[3];
              fVar45 = fVar43 * fVar53;
              fVar33 = fVar43 * fVar4;
              fVar35 = fVar46 * fVar56;
              fVar36 = fVar46 * fVar58;
              fVar55 = fVar46 * fVar40;
              fVar46 = fVar44 * fVar62 +
                       local_e8 * fVar32 +
                       local_e8 * fVar48 + fVar39 * fVar69 + fVar42 * fVar50 + fVar43 * fVar51 +
                       fVar46 * fVar57 + fVar41 * fVar65;
              fVar43 = fVar44 * fVar60 +
                       local_e8 * fVar34 +
                       local_138 * fVar59 + fVar39 * fVar70 + fVar42 * fVar52 + fVar43 * fVar54 +
                       fVar55 + fVar41 * fVar66;
              *pfVar11 = fVar44 * fVar38 +
                         local_e8 * fVar63 +
                         fVar41 * fVar30 + fVar39 * fVar67 + fVar42 * fVar71 + fVar45 + fVar35 +
                         fVar41 * fVar61;
              pfVar11[1] = fVar44 * fVar47 +
                           local_e8 * fVar31 +
                           fVar44 * fVar37 + fVar39 * fVar68 + fVar42 * fVar49 + fVar33 + fVar36 +
                           fVar41 * fVar64;
              pfVar11[2] = fVar46;
              pfVar11[3] = fVar43;
              pfVar11 = pfVar11 + 4;
              fVar42 = local_e8;
              fVar39 = local_138;
            } while (pfVar11 < pfVar8 + uVar22);
            uVar17 = *(uint *)((longlong)param_3 + 0x1c);
          }
          if ((uVar17 - 1 == uVar19) && ((uVar17 & 1) != 0)) {
            if ((uVar17 != 1) && (1 < uVar18)) {
              uVar23 = uVar23 + 1;
            }
            uVar28 = (ulonglong)(uVar23 << 4);
            *(float *)(*param_3 + uVar28 * 4) = local_138;
            *(float *)(*param_3 + 4 + uVar28 * 4) = local_e8;
            *(float *)(*param_3 + 8 + uVar28 * 4) = fVar43;
            *(float *)(*param_3 + 0xc + uVar28 * 4) = fVar46;
          }
          else {
            lVar20 = (ulonglong)(uVar23 << 4) + (ulonglong)uVar18;
            *(float *)(*param_3 + lVar20 * 4) = local_138;
            *(float *)(*param_3 + 0x10 + lVar20 * 4) = local_e8;
            *(float *)(*param_3 + 0x20 + lVar20 * 4) = fVar43;
            *(float *)(*param_3 + 0x30 + lVar20 * 4) = fVar46;
          }
          pfVar8 = pfVar8 + uVar21;
          uVar27 = uVar27 - 1;
        } while (uVar27 != 0);
      }
      if (('\0' < *(char *)((longlong)param_2 + 10)) &&
         (cVar5 = *(char *)((longlong)param_2 + 10) + -1, *(char *)((longlong)param_2 + 10) = cVar5,
         cVar5 == '\0')) {
        if (*(char *)((longlong)param_2 + 0xd) != '\x01') {
          *(undefined1 *)((longlong)param_2 + 0xe) = 0;
        }
        *(undefined1 *)((longlong)param_2 + 0xd) = 1;
      }
    }
  }
  else if (1 < local_148) {
    uVar21 = 0;
    uVar7 = (ushort)bVar2;
    if (*(char *)((longlong)param_2 + 0xe) == '\0') {
      *(undefined1 *)((longlong)param_2 + 0xe) = 1;
      if (bVar2 == 0) {
        return;
      }
      uVar29 = uVar21;
      uVar25 = 0;
      do {
        uVar22 = *(uint *)((longlong)param_3 + 0x1c);
        uVar17 = (uint)uVar29 & 3;
        lVar20 = *param_1 + (ulonglong)*(ushort *)(param_1 + 2) * (ulonglong)uVar25 * 4;
        iVar13 = (int)(uVar29 >> 2);
        if ((uVar22 - 1 == (uint)uVar29) && ((uVar22 & 1) != 0)) {
          if ((uVar22 != 1) && (1 < uVar17)) {
            iVar13 = iVar13 + 1;
          }
          fVar43 = *(float *)(*param_3 + (ulonglong)(uint)(iVar13 << 4) * 4);
          fVar46 = *(float *)(*param_3 + 8 + (ulonglong)(uint)(iVar13 << 4) * 4);
        }
        else {
          lVar14 = (ulonglong)uVar17 + (ulonglong)(uint)(iVar13 << 4);
          fVar43 = *(float *)(*param_3 + lVar14 * 4);
          fVar46 = *(float *)(*param_3 + 0x20 + lVar14 * 4);
        }
        fVar46 = fVar46 - fVar43;
        fVar43 = (1.0 / (float)uVar28) * fVar46;
        uVar9 = 0;
        if (uVar6 != 0) {
          do {
            uVar29 = (ulonglong)uVar9;
            fVar46 = fVar46 - fVar43;
            uVar9 = uVar9 + 1;
            *(float *)(lVar20 + uVar29 * 4) = fVar46 + *(float *)(lVar20 + uVar29 * 4);
          } while (uVar9 < uVar27);
        }
        uVar25 = uVar25 + 1;
        uVar29 = (ulonglong)uVar25;
      } while (uVar25 < uVar7);
    }
    if (uVar7 != 0) {
      do {
        lVar3 = *param_1;
        uVar22 = (uint)uVar21 & 3;
        uVar27 = *(uint *)((longlong)param_3 + 0x1c);
        lVar20 = (ulonglong)(uVar6 - 2) + *(ushort *)(param_1 + 2) * uVar21;
        lVar14 = (ulonglong)(uVar6 - 1) + *(ushort *)(param_1 + 2) * uVar21;
        iVar13 = (int)(uVar21 >> 2);
        if ((uVar27 - 1 == (uint)uVar21) && ((uVar27 & 1) != 0)) {
          if ((uVar27 != 1) && (1 < uVar22)) {
            iVar13 = iVar13 + 1;
          }
          uVar28 = (ulonglong)(uint)(iVar13 << 4);
          *(undefined4 *)(*param_3 + uVar28 * 4) = *(undefined4 *)(lVar3 + lVar14 * 4);
          *(undefined4 *)(*param_3 + 4 + uVar28 * 4) = *(undefined4 *)(lVar3 + lVar20 * 4);
          *(undefined4 *)(*param_3 + 8 + uVar28 * 4) = *(undefined4 *)(lVar3 + lVar14 * 4);
          *(undefined4 *)(*param_3 + 0xc + uVar28 * 4) = *(undefined4 *)(lVar3 + lVar20 * 4);
        }
        else {
          lVar16 = (ulonglong)(uint)(iVar13 << 4) + (ulonglong)uVar22;
          *(undefined4 *)(*param_3 + lVar16 * 4) = *(undefined4 *)(lVar3 + lVar14 * 4);
          *(undefined4 *)(*param_3 + 0x10 + lVar16 * 4) = *(undefined4 *)(lVar3 + lVar20 * 4);
          *(undefined4 *)(*param_3 + 0x20 + lVar16 * 4) = *(undefined4 *)(lVar3 + lVar14 * 4);
          *(undefined4 *)(*param_3 + 0x30 + lVar16 * 4) = *(undefined4 *)(lVar3 + lVar20 * 4);
        }
        uVar25 = (short)uVar21 + 1;
        uVar21 = (ulonglong)uVar25;
      } while (uVar25 < uVar7);
    }
  }
  return;
}



// FUNCTION 1431a7610 FUN_1431a7610 body=5145 status=ok
// SIG undefined FUN_1431a7610(void)

void FUN_1431a7610(longlong *param_1,float *param_2,longlong *param_3)

{
  float *pfVar1;
  byte bVar2;
  longlong lVar3;
  float fVar4;
  char cVar5;
  ushort uVar6;
  ushort uVar7;
  float *pfVar8;
  ushort uVar9;
  uint uVar10;
  float *pfVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  float *pfVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  float *pfVar24;
  ushort uVar25;
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
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
  float fVar71;
  uint local_148;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  uint local_128;
  float local_118;
  float local_108;
  float local_e8;
  float fStack_dc;
  
  uVar6 = *(ushort *)((longlong)param_1 + 0x12);
  uVar28 = (ulonglong)uVar6;
  bVar2 = *(byte *)(param_1 + 1);
  local_148 = (uint)uVar6;
  cVar5 = _ManageBQFChange<AkLpfParamEval>(param_2,param_3);
  uVar27 = (uint)uVar6;
  if (cVar5 == '\0') {
    uVar7 = *(ushort *)(param_2 + 2);
    if (uVar7 < DAT_1467bdcbc) {
      fVar40 = *param_2;
      fVar43 = param_2[1];
      local_128 = 0;
      if (uVar27 != 0) {
        do {
          uVar27 = (int)uVar28 - local_128;
          if (DAT_1467bdcb4 < uVar27) {
            uVar27 = DAT_1467bdcb4;
          }
          if (*(ushort *)(param_2 + 2) < DAT_1467bdcbc) {
            uVar6 = *(ushort *)(param_2 + 2) + 1;
            *(ushort *)(param_2 + 2) = uVar6;
            fVar30 = (float)AkLpfParamEval::EvalCutoff
                                      (((float)uVar6 * (fVar43 - fVar40)) / (float)DAT_1467bdcbc +
                                       fVar40,DAT_1467bdcb8);
            fVar30 = _guard_xfg_dispatch_icall_nop((3.1415927 / (float)DAT_1467bdcac) * fVar30);
            uVar22 = *(uint *)((longlong)param_3 + 0x1c);
            pfVar8 = (float *)param_3[2];
            fVar30 = 1.0 / fVar30;
            fVar35 = fVar30 * fVar30;
            fVar47 = 1.0 / (fVar30 * 1.4142135 + 1.0 + fVar35);
            fVar46 = ((fVar35 + fVar35) - 2.0) * fVar47;
            fVar59 = fVar47 + fVar47;
            fVar30 = -(((1.0 - fVar30 * 1.4142135) + fVar35) * fVar47);
            if (((uVar22 & 1) != 0) || ((char)param_3[4] != '\0')) {
              *pfVar8 = fVar47;
              pfVar8[1] = fVar47;
              pfVar8[2] = fVar47;
              pfVar8[3] = fVar47;
              pfVar8[4] = 0.0;
              pfVar8[5] = 0.0;
              pfVar8[6] = 0.0;
              fVar58 = fVar46 * fVar47;
              fVar62 = fVar46 * fVar30;
              fVar45 = fVar59 * fVar30;
              fVar44 = fVar30 * fVar47;
              fVar35 = fVar58 + fVar59;
              pfVar8[7] = fVar35;
              pfVar8[10] = fVar35;
              pfVar8[8] = 0.0;
              pfVar8[9] = 0.0;
              fVar31 = fVar35 * fVar46 + fVar47 + fVar44;
              pfVar8[0xb] = fVar31;
              pfVar8[0xd] = fVar35;
              pfVar8[0xe] = fVar31;
              pfVar8[0xc] = 0.0;
              fVar35 = fVar59 * fVar46 + fVar47;
              pfVar8[0xf] = fVar62 * fVar47 + fVar31 * fVar46 + fVar45;
              pfVar8[0x11] = fVar35;
              pfVar8[0x10] = fVar59;
              fVar35 = fVar35 * fVar46 + fVar45;
              pfVar8[0x12] = fVar35;
              pfVar8[0x13] = (fVar45 + fVar35) * fVar46 + fVar44;
              pfVar8[0x14] = fVar47;
              pfVar8[0x15] = fVar58;
              pfVar8[0x16] = fVar44 + fVar58 * fVar46;
              fVar35 = fVar46 * fVar46;
              pfVar8[0x17] = (fVar45 + fVar58 * fVar46) * fVar46;
              pfVar8[0x18] = fVar46;
              pfVar8[0x19] = fVar35 + fVar30;
              pfVar8[0x1a] = (fVar35 + fVar30 + fVar30) * fVar46;
              pfVar8[0x1b] = (fVar30 * 3.0 + fVar35) * fVar46 * fVar46 + fVar30 * fVar30;
              pfVar8[0x1c] = fVar30;
              pfVar8[0x1d] = fVar62;
              pfVar8[0x1e] = fVar30 * fVar30 + fVar62 * fVar46;
              pfVar8[0x1f] = ((fVar30 + fVar30) * fVar30 + fVar62 * fVar46) * fVar46;
              pfVar8 = pfVar8 + 0x20;
              if ((char)param_3[4] != '\0') goto LAB_1431a7a51;
              uVar22 = *(uint *)((longlong)param_3 + 0x1c);
            }
            fVar35 = fVar46 * fVar47;
            if ((uVar22 & 2) != 0) {
              pfVar8[1] = fVar47;
              fVar45 = fVar46 * fVar46 + fVar30;
              pfVar8[3] = fVar47;
              *pfVar8 = 0.0;
              pfVar8[2] = 0.0;
              pfVar8[4] = fVar47;
              pfVar8[6] = fVar47;
              pfVar8[5] = fVar59 + fVar35;
              pfVar8[7] = fVar59 + fVar35;
              pfVar8[8] = fVar59;
              fVar31 = fVar47 + fVar46 * fVar59;
              pfVar8[10] = fVar59;
              pfVar8[9] = fVar31;
              pfVar8[0xb] = fVar31;
              pfVar8[0xc] = fVar47;
              pfVar8[0xd] = fVar35;
              pfVar8[0xe] = fVar47;
              pfVar8[0xf] = fVar35;
              pfVar8[0x10] = fVar46;
              pfVar8[0x11] = fVar45;
              pfVar8[0x12] = fVar46;
              pfVar8[0x13] = fVar45;
              pfVar8[0x14] = fVar30;
              pfVar8[0x15] = fVar46 * fVar30;
              pfVar8[0x16] = fVar30;
              pfVar8[0x17] = fVar46 * fVar30;
              pfVar8 = pfVar8 + 0x18;
              uVar22 = *(uint *)((longlong)param_3 + 0x1c);
            }
            if (3 < uVar22) {
              *pfVar8 = fVar47;
              pfVar8[1] = fVar59;
              pfVar8[2] = fVar47;
              pfVar8[3] = fVar46;
              pfVar8[4] = fVar30;
            }
          }
LAB_1431a7a51:
          uVar6 = *(ushort *)(param_1 + 2);
          uVar21 = (ulonglong)uVar6;
          pfVar8 = (float *)(*param_1 + (ulonglong)local_128 * 4);
          uVar22 = uVar27;
          if ((uVar27 & 3) != 0) {
            iVar13 = 4 - (uVar27 & 3);
            pfVar11 = pfVar8 + uVar27;
            uVar22 = iVar13 + uVar27;
            do {
              *pfVar11 = 0.0;
              pfVar11 = pfVar11 + 1;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
          pfVar11 = (float *)*param_3;
          uVar17 = *(uint *)((longlong)param_3 + 0x1c);
          if ((char)param_3[4] == '\0') {
            if (3 < uVar17) {
              pfVar24 = pfVar11 + 8;
              uVar28 = (ulonglong)(uVar17 >> 2);
              do {
                fVar31 = pfVar24[-4];
                fVar45 = pfVar24[-3];
                fVar44 = pfVar24[-2];
                fVar58 = pfVar24[-1];
                fVar62 = *pfVar11;
                fVar71 = pfVar11[1];
                fVar60 = pfVar11[2];
                fVar61 = pfVar11[3];
                fVar63 = *pfVar24;
                fVar64 = pfVar24[1];
                fVar65 = pfVar24[2];
                fVar66 = pfVar24[3];
                fVar67 = pfVar24[4];
                fVar68 = pfVar24[5];
                fVar69 = pfVar24[6];
                fVar70 = pfVar24[7];
                lVar14 = (ulonglong)((*(uint *)((longlong)param_3 + 0x1c) >> 1 & 1) * 0x18) +
                         (ulonglong)((*(uint *)((longlong)param_3 + 0x1c) & 1) << 5);
                lVar20 = param_3[2];
                fVar30 = *(float *)(lVar20 + lVar14 * 4);
                fVar35 = *(float *)(lVar20 + 4 + lVar14 * 4);
                fVar46 = *(float *)(lVar20 + 8 + lVar14 * 4);
                fVar47 = *(float *)(lVar20 + 0xc + lVar14 * 4);
                fVar59 = *(float *)(lVar20 + 0x10 + lVar14 * 4);
                if (pfVar8 < pfVar8 + uVar22) {
                  uVar29 = (ulonglong)((uint)uVar6 + (uint)uVar6);
                  pfVar15 = pfVar8 + ((uint)uVar6 + (uint)uVar6);
                  lVar20 = ((uint)uVar6 + (uint)uVar6 * 2) - uVar29;
                  fVar48 = fVar62;
                  fVar49 = fVar71;
                  fVar51 = fVar60;
                  fVar52 = fVar61;
                  local_138 = fVar31;
                  fStack_134 = fVar45;
                  fStack_130 = fVar44;
                  fStack_12c = fVar58;
                  do {
                    pfVar1 = pfVar15 + lVar20;
                    fVar4 = *pfVar1;
                    fVar50 = pfVar1[1];
                    fVar58 = pfVar1[2];
                    fVar61 = pfVar1[3];
                    pfVar1 = pfVar15 + (uVar21 - uVar29);
                    fVar53 = *pfVar1;
                    fVar55 = pfVar1[1];
                    fVar45 = pfVar1[2];
                    fVar71 = pfVar1[3];
                    pfVar1 = pfVar15 + -uVar29;
                    fVar57 = *pfVar1;
                    fVar56 = pfVar1[1];
                    fVar31 = pfVar1[2];
                    fVar62 = pfVar1[3];
                    fVar37 = *pfVar15;
                    fVar39 = pfVar15[1];
                    fVar44 = pfVar15[2];
                    fVar60 = pfVar15[3];
                    fVar36 = fVar35 * fVar48 + fVar57 * fVar30 + fVar46 * local_138 +
                             fVar47 * fVar63 + fVar59 * fVar67;
                    fVar38 = fVar35 * fVar49 + fVar53 * fVar30 + fVar46 * fStack_134 +
                             fVar47 * fVar64 + fVar59 * fVar68;
                    fVar41 = fVar35 * fVar51 + fVar37 * fVar30 + fVar46 * fStack_130 +
                             fVar47 * fVar65 + fVar59 * fVar69;
                    fVar42 = fVar35 * fVar52 + fVar4 * fVar30 + fVar46 * fStack_12c +
                             fVar47 * fVar66 + fVar59 * fVar70;
                    fVar48 = fVar57 * fVar35 + fVar56 * fVar30 + fVar46 * fVar48 + fVar36 * fVar47 +
                             fVar59 * fVar63;
                    fVar49 = fVar53 * fVar35 + fVar55 * fVar30 + fVar46 * fVar49 + fVar38 * fVar47 +
                             fVar59 * fVar64;
                    fVar51 = fVar37 * fVar35 + fVar39 * fVar30 + fVar46 * fVar51 + fVar41 * fVar47 +
                             fVar59 * fVar65;
                    fVar52 = fVar4 * fVar35 + fVar50 * fVar30 + fVar46 * fVar52 + fVar42 * fVar47 +
                             fVar59 * fVar66;
                    fVar67 = fVar56 * fVar35 + fVar31 * fVar30 + fVar57 * fVar46 + fVar48 * fVar47 +
                             fVar36 * fVar59;
                    fVar68 = fVar55 * fVar35 + fVar45 * fVar30 + fVar53 * fVar46 + fVar49 * fVar47 +
                             fVar38 * fVar59;
                    fVar69 = fVar39 * fVar35 + fVar44 * fVar30 + fVar37 * fVar46 + fVar51 * fVar47 +
                             fVar41 * fVar59;
                    fVar70 = fVar50 * fVar35 + fVar58 * fVar30 + fVar4 * fVar46 + fVar52 * fVar47 +
                             fVar42 * fVar59;
                    fVar63 = fVar31 * fVar35 + fVar62 * fVar30 + fVar56 * fVar46 + fVar67 * fVar47 +
                             fVar48 * fVar59;
                    fVar64 = fVar45 * fVar35 + fVar71 * fVar30 + fVar55 * fVar46 + fVar68 * fVar47 +
                             fVar49 * fVar59;
                    fVar65 = fVar44 * fVar35 + fVar60 * fVar30 + fVar39 * fVar46 + fVar69 * fVar47 +
                             fVar51 * fVar59;
                    fVar66 = fVar58 * fVar35 + fVar61 * fVar30 + fVar50 * fVar46 + fVar70 * fVar47 +
                             fVar52 * fVar59;
                    pfVar1 = pfVar15 + -uVar29;
                    *pfVar1 = fVar36;
                    pfVar1[1] = fVar48;
                    pfVar1[2] = fVar67;
                    pfVar1[3] = fVar63;
                    pfVar1 = pfVar15 + (uVar21 - uVar29);
                    *pfVar1 = fVar38;
                    pfVar1[1] = fVar49;
                    pfVar1[2] = fVar68;
                    pfVar1[3] = fVar64;
                    *pfVar15 = fVar41;
                    pfVar15[1] = fVar51;
                    pfVar15[2] = fVar69;
                    pfVar15[3] = fVar65;
                    pfVar1 = pfVar15 + lVar20;
                    *pfVar1 = fVar42;
                    pfVar1[1] = fVar52;
                    pfVar1[2] = fVar70;
                    pfVar1[3] = fVar66;
                    pfVar15 = pfVar15 + 4;
                    fVar48 = fVar62;
                    fVar49 = fVar71;
                    fVar51 = fVar60;
                    fVar52 = fVar61;
                    local_138 = fVar31;
                    fStack_134 = fVar45;
                    fStack_130 = fVar44;
                    fStack_12c = fVar58;
                  } while (pfVar15 + -uVar29 < pfVar8 + uVar22);
                }
                pfVar8 = pfVar8 + (uint)uVar6 * 4;
                *pfVar11 = fVar62;
                pfVar11[1] = fVar71;
                pfVar11[2] = fVar60;
                pfVar11[3] = fVar61;
                uVar17 = uVar17 - 4;
                pfVar24[-4] = fVar31;
                pfVar24[-3] = fVar45;
                pfVar24[-2] = fVar44;
                pfVar24[-1] = fVar58;
                pfVar11 = pfVar11 + 0x10;
                *pfVar24 = fVar63;
                pfVar24[1] = fVar64;
                pfVar24[2] = fVar65;
                pfVar24[3] = fVar66;
                pfVar24[4] = fVar67;
                pfVar24[5] = fVar68;
                pfVar24[6] = fVar69;
                pfVar24[7] = fVar70;
                pfVar24 = pfVar24 + 0x10;
                uVar28 = uVar28 - 1;
              } while (uVar28 != 0);
              uVar28 = (ulonglong)local_148;
            }
            if (1 < uVar17) {
              lVar20 = param_3[2];
              fVar30 = pfVar11[8];
              fVar35 = pfVar11[9];
              fVar46 = pfVar11[0xc];
              fVar47 = pfVar11[0xd];
              uVar29 = (ulonglong)((*(uint *)((longlong)param_3 + 0x1c) & 1) << 5);
              pfVar24 = (float *)(lVar20 + 0x50 + uVar29 * 4);
              fVar59 = *pfVar24;
              fVar31 = pfVar24[1];
              fVar45 = pfVar24[2];
              fVar44 = pfVar24[3];
              pfVar24 = (float *)(lVar20 + uVar29 * 4);
              fVar58 = *pfVar24;
              fVar62 = pfVar24[1];
              fVar71 = pfVar24[2];
              fVar60 = pfVar24[3];
              pfVar24 = (float *)(lVar20 + 0x10 + uVar29 * 4);
              fVar61 = *pfVar24;
              fVar63 = pfVar24[1];
              fVar64 = pfVar24[2];
              fVar65 = pfVar24[3];
              pfVar24 = (float *)(lVar20 + 0x20 + uVar29 * 4);
              fVar66 = *pfVar24;
              fVar67 = pfVar24[1];
              fVar68 = pfVar24[2];
              fVar69 = pfVar24[3];
              pfVar24 = (float *)(lVar20 + 0x30 + uVar29 * 4);
              fVar70 = *pfVar24;
              fVar48 = pfVar24[1];
              fVar49 = pfVar24[2];
              fVar51 = pfVar24[3];
              pfVar24 = (float *)(lVar20 + 0x40 + uVar29 * 4);
              fVar52 = *pfVar24;
              fVar4 = pfVar24[1];
              fVar50 = pfVar24[2];
              fVar53 = pfVar24[3];
              fVar55 = *pfVar11;
              fVar57 = pfVar11[1];
              fVar56 = pfVar11[4];
              fVar37 = pfVar11[5];
              for (pfVar24 = pfVar8; pfVar24 < pfVar8 + uVar22; pfVar24 = pfVar24 + 4) {
                pfVar15 = pfVar24 + uVar21;
                fVar39 = *pfVar15;
                fVar36 = pfVar15[1];
                fVar38 = pfVar15[2];
                fVar41 = pfVar15[3];
                fVar42 = *pfVar24;
                fVar32 = pfVar24[1];
                fVar33 = pfVar24[2];
                fVar34 = pfVar24[3];
                fVar54 = fVar42 * fVar61 + fVar42 * fVar58 + fVar66 * fVar55 + fVar70 * fVar56 +
                         fVar52 * fVar30 + fVar59 * fVar46;
                fVar55 = fVar42 * fVar63 + fVar32 * fVar62 + fVar67 * fVar55 + fVar48 * fVar56 +
                         fVar4 * fVar30 + fVar31 * fVar46;
                fVar56 = fVar39 * fVar64 + fVar39 * fVar71 + fVar68 * fVar57 + fVar49 * fVar37 +
                         fVar50 * fVar35 + fVar45 * fVar47;
                fVar57 = fVar39 * fVar65 + fVar36 * fVar60 + fVar69 * fVar57 + fVar51 * fVar37 +
                         fVar53 * fVar35 + fVar44 * fVar47;
                fVar46 = fVar33 * fVar61 + fVar33 * fVar58 + fVar32 * fVar66 + fVar42 * fVar70 +
                         fVar55 * fVar52 + fVar54 * fVar59;
                fVar30 = fVar33 * fVar63 + fVar34 * fVar62 + fVar32 * fVar67 + fVar42 * fVar48 +
                         fVar55 * fVar4 + fVar54 * fVar31;
                fVar47 = fVar38 * fVar64 + fVar38 * fVar71 + fVar36 * fVar68 + fVar39 * fVar49 +
                         fVar57 * fVar50 + fVar56 * fVar45;
                fVar35 = fVar38 * fVar65 + fVar41 * fVar60 + fVar36 * fVar69 + fVar39 * fVar51 +
                         fVar57 * fVar53 + fVar56 * fVar44;
                *pfVar24 = fVar54;
                pfVar24[1] = fVar55;
                pfVar24[2] = fVar46;
                pfVar24[3] = fVar30;
                pfVar15 = pfVar24 + uVar21;
                *pfVar15 = fVar56;
                pfVar15[1] = fVar57;
                pfVar15[2] = fVar47;
                pfVar15[3] = fVar35;
                fVar55 = fVar34;
                fVar57 = fVar41;
                fVar56 = fVar33;
                fVar37 = fVar38;
              }
              *pfVar11 = fVar55;
              pfVar11[4] = fVar56;
              pfVar8 = pfVar8 + ((uint)uVar6 + (uint)uVar6);
              pfVar11[8] = fVar30;
              uVar17 = uVar17 - 2;
              pfVar11[0xc] = fVar46;
              pfVar11[1] = fVar57;
              pfVar11[5] = fVar37;
              pfVar11[9] = fVar35;
              pfVar11[0xd] = fVar47;
            }
          }
          if (uVar17 != 0) {
            do {
              uVar18 = *(uint *)((longlong)param_3 + 0x1c);
              uVar26 = uVar18 - uVar17;
              uVar23 = uVar26 >> 2;
              uVar19 = uVar26 & 3;
              if ((uVar18 - 1 == uVar26) && ((uVar18 & 1) != 0)) {
                uVar10 = uVar23;
                if ((uVar18 != 1) && (1 < uVar19)) {
                  uVar10 = uVar23 + 1;
                }
                lVar20 = *param_3;
                uVar28 = (ulonglong)(uVar10 << 4);
                local_108 = *(float *)(lVar20 + uVar28 * 4);
                local_118 = *(float *)(lVar20 + 4 + uVar28 * 4);
                fStack_dc = *(float *)(lVar20 + 8 + uVar28 * 4);
                fStack_12c = *(float *)(lVar20 + 0xc + uVar28 * 4);
              }
              else {
                lVar14 = (ulonglong)(uVar23 << 4) + (ulonglong)uVar19;
                lVar20 = *param_3;
                local_108 = *(float *)(lVar20 + lVar14 * 4);
                local_118 = *(float *)(lVar20 + 0x10 + lVar14 * 4);
                fStack_dc = *(float *)(lVar20 + 0x20 + lVar14 * 4);
                fStack_12c = *(float *)(lVar20 + 0x30 + lVar14 * 4);
              }
              pfVar11 = (float *)param_3[2];
              fVar30 = *pfVar11;
              fVar35 = pfVar11[1];
              fVar46 = pfVar11[2];
              fVar47 = pfVar11[3];
              fVar59 = pfVar11[4];
              fVar31 = pfVar11[5];
              fVar45 = pfVar11[6];
              fVar44 = pfVar11[7];
              fVar58 = pfVar11[8];
              fVar62 = pfVar11[9];
              fVar71 = pfVar11[10];
              fVar60 = pfVar11[0xb];
              fVar61 = pfVar11[0xc];
              fVar63 = pfVar11[0xd];
              fVar64 = pfVar11[0xe];
              fVar65 = pfVar11[0xf];
              fVar66 = pfVar11[0x10];
              fVar67 = pfVar11[0x11];
              fVar68 = pfVar11[0x12];
              fVar69 = pfVar11[0x13];
              fVar70 = pfVar11[0x14];
              fVar48 = pfVar11[0x15];
              fVar49 = pfVar11[0x16];
              fVar51 = pfVar11[0x17];
              fVar52 = pfVar11[0x18];
              fVar4 = pfVar11[0x19];
              fVar50 = pfVar11[0x1a];
              fVar53 = pfVar11[0x1b];
              fVar55 = pfVar11[0x1c];
              fVar57 = pfVar11[0x1d];
              fVar56 = pfVar11[0x1e];
              fVar37 = pfVar11[0x1f];
              pfVar11 = pfVar8;
              fVar39 = local_118;
              fVar36 = local_108;
              if (pfVar8 < pfVar8 + uVar22) {
                do {
                  fVar38 = *pfVar11;
                  fVar41 = pfVar11[1];
                  local_118 = pfVar11[2];
                  local_108 = pfVar11[3];
                  fVar42 = fVar52 * fStack_dc;
                  fVar32 = fVar4 * fStack_dc;
                  fVar33 = fVar55 * fStack_12c;
                  fVar34 = fVar57 * fStack_12c;
                  fVar54 = fVar37 * fStack_12c;
                  fStack_12c = fVar41 * fVar71 +
                               fVar45 * local_118 +
                               local_118 * fVar46 + fVar68 * fVar36 + fVar49 * fVar39 +
                               fVar50 * fStack_dc + fVar56 * fStack_12c + fVar38 * fVar64;
                  fStack_dc = fVar41 * fVar60 +
                              fVar44 * local_118 +
                              local_108 * fVar47 + fVar69 * fVar36 + fVar51 * fVar39 +
                              fVar53 * fStack_dc + fVar54 + fVar38 * fVar65;
                  *pfVar11 = fVar41 * fVar58 +
                             fVar59 * local_118 +
                             fVar38 * fVar30 + fVar66 * fVar36 + fVar70 * fVar39 + fVar42 + fVar33 +
                             fVar38 * fVar61;
                  pfVar11[1] = fVar41 * fVar62 +
                               fVar31 * local_118 +
                               fVar41 * fVar35 + fVar67 * fVar36 + fVar48 * fVar39 + fVar32 + fVar34
                               + fVar38 * fVar63;
                  pfVar11[2] = fStack_12c;
                  pfVar11[3] = fStack_dc;
                  pfVar11 = pfVar11 + 4;
                  fVar39 = local_118;
                  fVar36 = local_108;
                } while (pfVar11 < pfVar8 + uVar22);
                uVar18 = *(uint *)((longlong)param_3 + 0x1c);
              }
              if ((uVar18 - 1 == uVar26) && ((uVar18 & 1) != 0)) {
                if ((uVar18 != 1) && (1 < uVar19)) {
                  uVar23 = uVar23 + 1;
                }
                uVar28 = (ulonglong)(uVar23 << 4);
                *(float *)(*param_3 + uVar28 * 4) = local_108;
                *(float *)(*param_3 + 4 + uVar28 * 4) = local_118;
                *(float *)(*param_3 + 8 + uVar28 * 4) = fStack_dc;
                *(float *)(*param_3 + 0xc + uVar28 * 4) = fStack_12c;
              }
              else {
                lVar20 = (ulonglong)(uVar23 << 4) + (ulonglong)uVar19;
                *(float *)(*param_3 + lVar20 * 4) = local_108;
                *(float *)(*param_3 + 0x10 + lVar20 * 4) = local_118;
                *(float *)(*param_3 + 0x20 + lVar20 * 4) = fStack_dc;
                *(float *)(*param_3 + 0x30 + lVar20 * 4) = fStack_12c;
              }
              pfVar8 = pfVar8 + uVar21;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
            uVar28 = (ulonglong)local_148;
          }
          local_128 = local_128 + uVar27;
        } while (local_128 < (uint)uVar28);
        uVar7 = *(ushort *)(param_2 + 2);
      }
      if ((DAT_1467bdcbc <= uVar7) && (*param_2 = param_2[1], param_2[1] <= 0.1)) {
        *(undefined1 *)((longlong)param_2 + 10) = 4;
      }
    }
    else {
      uVar7 = *(ushort *)(param_1 + 2);
      uVar21 = (ulonglong)uVar7;
      pfVar8 = (float *)*param_1;
      if ((uVar6 & 3) != 0) {
        pfVar11 = pfVar8 + uVar28;
        iVar13 = 4 - (uVar27 & 3);
        local_148 = uVar27 + iVar13;
        uVar28 = (ulonglong)local_148;
        do {
          *pfVar11 = 0.0;
          pfVar11 = pfVar11 + 1;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
      uVar22 = (uint)uVar28;
      pfVar11 = (float *)*param_3;
      uVar27 = *(uint *)((longlong)param_3 + 0x1c);
      if ((char)param_3[4] == '\0') {
        if (3 < uVar27) {
          pfVar24 = pfVar11 + 8;
          uVar29 = (ulonglong)(uVar27 >> 2);
          do {
            fVar47 = pfVar24[-4];
            fVar59 = pfVar24[-3];
            fVar31 = pfVar24[-2];
            fVar45 = pfVar24[-1];
            fVar44 = *pfVar11;
            fVar58 = pfVar11[1];
            fVar62 = pfVar11[2];
            fVar71 = pfVar11[3];
            fVar60 = *pfVar24;
            fVar61 = pfVar24[1];
            fVar63 = pfVar24[2];
            fVar64 = pfVar24[3];
            fVar65 = pfVar24[4];
            fVar66 = pfVar24[5];
            fVar67 = pfVar24[6];
            fVar68 = pfVar24[7];
            lVar14 = (ulonglong)((*(uint *)((longlong)param_3 + 0x1c) >> 1 & 1) * 0x18) +
                     (ulonglong)((*(uint *)((longlong)param_3 + 0x1c) & 1) << 5);
            lVar20 = param_3[2];
            fVar40 = *(float *)(lVar20 + lVar14 * 4);
            fVar43 = *(float *)(lVar20 + 4 + lVar14 * 4);
            fVar30 = *(float *)(lVar20 + 8 + lVar14 * 4);
            fVar35 = *(float *)(lVar20 + 0xc + lVar14 * 4);
            fVar46 = *(float *)(lVar20 + 0x10 + lVar14 * 4);
            if (pfVar8 < pfVar8 + uVar28) {
              uVar12 = (ulonglong)((uint)uVar7 + (uint)uVar7);
              pfVar15 = pfVar8 + ((uint)uVar7 + (uint)uVar7);
              lVar20 = ((uint)uVar7 + (uint)uVar7 * 2) - uVar12;
              fVar69 = fVar44;
              fVar70 = fVar58;
              fVar48 = fVar62;
              fVar49 = fVar71;
              local_138 = fVar47;
              fStack_134 = fVar59;
              fStack_130 = fVar31;
              fStack_12c = fVar45;
              do {
                pfVar1 = pfVar15 + lVar20;
                fVar51 = *pfVar1;
                fVar52 = pfVar1[1];
                fVar45 = pfVar1[2];
                fVar71 = pfVar1[3];
                pfVar1 = pfVar15 + (uVar21 - uVar12);
                fVar4 = *pfVar1;
                fVar50 = pfVar1[1];
                fVar59 = pfVar1[2];
                fVar58 = pfVar1[3];
                pfVar1 = pfVar15 + -uVar12;
                fVar53 = *pfVar1;
                fVar55 = pfVar1[1];
                fVar47 = pfVar1[2];
                fVar44 = pfVar1[3];
                fVar57 = *pfVar15;
                fVar56 = pfVar15[1];
                fVar31 = pfVar15[2];
                fVar62 = pfVar15[3];
                fVar37 = fVar53 * fVar40 + fVar43 * fVar69 + fVar30 * local_138 + fVar35 * fVar60 +
                         fVar46 * fVar65;
                fVar39 = fVar4 * fVar40 + fVar43 * fVar70 + fVar30 * fStack_134 + fVar35 * fVar61 +
                         fVar46 * fVar66;
                fVar36 = fVar57 * fVar40 + fVar43 * fVar48 + fVar30 * fStack_130 + fVar35 * fVar63 +
                         fVar46 * fVar67;
                fVar38 = fVar51 * fVar40 + fVar43 * fVar49 + fVar30 * fStack_12c + fVar35 * fVar64 +
                         fVar46 * fVar68;
                fVar69 = fVar53 * fVar43 + fVar55 * fVar40 + fVar30 * fVar69 + fVar37 * fVar35 +
                         fVar46 * fVar60;
                fVar70 = fVar4 * fVar43 + fVar50 * fVar40 + fVar30 * fVar70 + fVar39 * fVar35 +
                         fVar46 * fVar61;
                fVar48 = fVar57 * fVar43 + fVar56 * fVar40 + fVar30 * fVar48 + fVar36 * fVar35 +
                         fVar46 * fVar63;
                fVar49 = fVar51 * fVar43 + fVar52 * fVar40 + fVar30 * fVar49 + fVar38 * fVar35 +
                         fVar46 * fVar64;
                fVar65 = fVar55 * fVar43 + fVar47 * fVar40 + fVar53 * fVar30 + fVar69 * fVar35 +
                         fVar37 * fVar46;
                fVar66 = fVar50 * fVar43 + fVar59 * fVar40 + fVar4 * fVar30 + fVar70 * fVar35 +
                         fVar39 * fVar46;
                fVar67 = fVar56 * fVar43 + fVar31 * fVar40 + fVar57 * fVar30 + fVar48 * fVar35 +
                         fVar36 * fVar46;
                fVar68 = fVar52 * fVar43 + fVar45 * fVar40 + fVar51 * fVar30 + fVar49 * fVar35 +
                         fVar38 * fVar46;
                fVar60 = fVar47 * fVar43 + fVar44 * fVar40 + fVar55 * fVar30 + fVar65 * fVar35 +
                         fVar69 * fVar46;
                fVar61 = fVar59 * fVar43 + fVar58 * fVar40 + fVar50 * fVar30 + fVar66 * fVar35 +
                         fVar70 * fVar46;
                fVar63 = fVar31 * fVar43 + fVar62 * fVar40 + fVar56 * fVar30 + fVar67 * fVar35 +
                         fVar48 * fVar46;
                fVar64 = fVar45 * fVar43 + fVar71 * fVar40 + fVar52 * fVar30 + fVar68 * fVar35 +
                         fVar49 * fVar46;
                pfVar1 = pfVar15 + -uVar12;
                *pfVar1 = fVar37;
                pfVar1[1] = fVar69;
                pfVar1[2] = fVar65;
                pfVar1[3] = fVar60;
                pfVar1 = pfVar15 + (uVar21 - uVar12);
                *pfVar1 = fVar39;
                pfVar1[1] = fVar70;
                pfVar1[2] = fVar66;
                pfVar1[3] = fVar61;
                *pfVar15 = fVar36;
                pfVar15[1] = fVar48;
                pfVar15[2] = fVar67;
                pfVar15[3] = fVar63;
                pfVar1 = pfVar15 + lVar20;
                *pfVar1 = fVar38;
                pfVar1[1] = fVar49;
                pfVar1[2] = fVar68;
                pfVar1[3] = fVar64;
                pfVar15 = pfVar15 + 4;
                fVar69 = fVar44;
                fVar70 = fVar58;
                fVar48 = fVar62;
                fVar49 = fVar71;
                local_138 = fVar47;
                fStack_134 = fVar59;
                fStack_130 = fVar31;
                fStack_12c = fVar45;
              } while (pfVar15 + -uVar12 < pfVar8 + uVar28);
            }
            pfVar8 = pfVar8 + (uint)uVar7 * 4;
            *pfVar11 = fVar44;
            pfVar11[1] = fVar58;
            pfVar11[2] = fVar62;
            pfVar11[3] = fVar71;
            uVar27 = uVar27 - 4;
            pfVar24[-4] = fVar47;
            pfVar24[-3] = fVar59;
            pfVar24[-2] = fVar31;
            pfVar24[-1] = fVar45;
            pfVar11 = pfVar11 + 0x10;
            *pfVar24 = fVar60;
            pfVar24[1] = fVar61;
            pfVar24[2] = fVar63;
            pfVar24[3] = fVar64;
            pfVar24[4] = fVar65;
            pfVar24[5] = fVar66;
            pfVar24[6] = fVar67;
            pfVar24[7] = fVar68;
            pfVar24 = pfVar24 + 0x10;
            uVar29 = uVar29 - 1;
          } while (uVar29 != 0);
          uVar28 = (ulonglong)local_148;
        }
        uVar22 = (uint)uVar28;
        if (1 < uVar27) {
          fVar40 = pfVar11[8];
          fVar43 = pfVar11[9];
          fVar30 = pfVar11[0xc];
          fVar35 = pfVar11[0xd];
          uVar29 = (ulonglong)((*(uint *)((longlong)param_3 + 0x1c) & 1) << 5);
          lVar20 = param_3[2];
          pfVar24 = (float *)(lVar20 + uVar29 * 4);
          fVar46 = *pfVar24;
          fVar47 = pfVar24[1];
          fVar59 = pfVar24[2];
          fVar31 = pfVar24[3];
          pfVar24 = (float *)(lVar20 + 0x10 + uVar29 * 4);
          fVar45 = *pfVar24;
          fVar44 = pfVar24[1];
          fVar58 = pfVar24[2];
          fVar62 = pfVar24[3];
          pfVar24 = (float *)(lVar20 + 0x20 + uVar29 * 4);
          fVar71 = *pfVar24;
          fVar60 = pfVar24[1];
          fVar61 = pfVar24[2];
          fVar63 = pfVar24[3];
          pfVar24 = (float *)(lVar20 + 0x30 + uVar29 * 4);
          fVar64 = *pfVar24;
          fVar65 = pfVar24[1];
          fVar66 = pfVar24[2];
          fVar67 = pfVar24[3];
          pfVar24 = (float *)(lVar20 + 0x40 + uVar29 * 4);
          fVar68 = *pfVar24;
          fVar69 = pfVar24[1];
          fVar70 = pfVar24[2];
          fVar48 = pfVar24[3];
          pfVar24 = (float *)(lVar20 + 0x50 + uVar29 * 4);
          fVar49 = *pfVar24;
          fVar51 = pfVar24[1];
          fVar52 = pfVar24[2];
          fVar4 = pfVar24[3];
          fVar50 = *pfVar11;
          fVar53 = pfVar11[1];
          fVar55 = pfVar11[4];
          fVar57 = pfVar11[5];
          for (pfVar24 = pfVar8; pfVar24 < pfVar8 + uVar28; pfVar24 = pfVar24 + 4) {
            pfVar15 = pfVar24 + uVar21;
            fVar56 = *pfVar15;
            fVar37 = pfVar15[1];
            fVar39 = pfVar15[2];
            fVar36 = pfVar15[3];
            fVar38 = *pfVar24;
            fVar41 = pfVar24[1];
            fVar42 = pfVar24[2];
            fVar32 = pfVar24[3];
            fVar33 = fVar38 * fVar45 + fVar38 * fVar46 + fVar50 * fVar71 + fVar55 * fVar64 +
                     fVar40 * fVar68 + fVar30 * fVar49;
            fVar50 = fVar38 * fVar44 + fVar41 * fVar47 + fVar50 * fVar60 + fVar55 * fVar65 +
                     fVar40 * fVar69 + fVar30 * fVar51;
            fVar55 = fVar56 * fVar58 + fVar56 * fVar59 + fVar53 * fVar61 + fVar57 * fVar66 +
                     fVar43 * fVar70 + fVar35 * fVar52;
            fVar53 = fVar56 * fVar62 + fVar37 * fVar31 + fVar53 * fVar63 + fVar57 * fVar67 +
                     fVar43 * fVar48 + fVar35 * fVar4;
            fVar30 = fVar42 * fVar45 + fVar42 * fVar46 + fVar41 * fVar71 + fVar38 * fVar64 +
                     fVar50 * fVar68 + fVar33 * fVar49;
            fVar40 = fVar42 * fVar44 + fVar32 * fVar47 + fVar41 * fVar60 + fVar38 * fVar65 +
                     fVar50 * fVar69 + fVar33 * fVar51;
            fVar35 = fVar39 * fVar58 + fVar39 * fVar59 + fVar37 * fVar61 + fVar56 * fVar66 +
                     fVar53 * fVar70 + fVar55 * fVar52;
            fVar43 = fVar39 * fVar62 + fVar36 * fVar31 + fVar37 * fVar63 + fVar56 * fVar67 +
                     fVar53 * fVar48 + fVar55 * fVar4;
            *pfVar24 = fVar33;
            pfVar24[1] = fVar50;
            pfVar24[2] = fVar30;
            pfVar24[3] = fVar40;
            pfVar15 = pfVar24 + uVar21;
            *pfVar15 = fVar55;
            pfVar15[1] = fVar53;
            pfVar15[2] = fVar35;
            pfVar15[3] = fVar43;
            fVar50 = fVar32;
            fVar53 = fVar36;
            fVar55 = fVar42;
            fVar57 = fVar39;
          }
          *pfVar11 = fVar50;
          pfVar11[4] = fVar55;
          pfVar8 = pfVar8 + ((uint)uVar7 + (uint)uVar7);
          pfVar11[8] = fVar40;
          uVar27 = uVar27 - 2;
          pfVar11[0xc] = fVar30;
          pfVar11[1] = fVar53;
          pfVar11[5] = fVar57;
          pfVar11[9] = fVar43;
          pfVar11[0xd] = fVar35;
        }
      }
      if (uVar27 != 0) {
        do {
          uVar17 = *(uint *)((longlong)param_3 + 0x1c);
          uVar19 = uVar17 - uVar27;
          uVar23 = uVar19 >> 2;
          uVar18 = uVar19 & 3;
          if ((uVar17 - 1 == uVar19) && ((uVar17 & 1) != 0)) {
            uVar26 = uVar23;
            if ((uVar17 != 1) && (1 < uVar18)) {
              uVar26 = uVar23 + 1;
            }
            lVar20 = *param_3;
            uVar28 = (ulonglong)(uVar26 << 4);
            local_138 = *(float *)(lVar20 + uVar28 * 4);
            local_e8 = *(float *)(lVar20 + 4 + uVar28 * 4);
            fVar40 = *(float *)(lVar20 + 8 + uVar28 * 4);
            fVar43 = *(float *)(lVar20 + 0xc + uVar28 * 4);
          }
          else {
            lVar14 = (ulonglong)(uVar23 << 4) + (ulonglong)uVar18;
            lVar20 = *param_3;
            local_138 = *(float *)(lVar20 + lVar14 * 4);
            local_e8 = *(float *)(lVar20 + 0x10 + lVar14 * 4);
            fVar40 = *(float *)(lVar20 + 0x20 + lVar14 * 4);
            fVar43 = *(float *)(lVar20 + 0x30 + lVar14 * 4);
          }
          pfVar11 = (float *)param_3[2];
          fVar30 = *pfVar11;
          fVar35 = pfVar11[1];
          fVar46 = pfVar11[2];
          fVar47 = pfVar11[3];
          fVar59 = pfVar11[4];
          fVar31 = pfVar11[5];
          fVar45 = pfVar11[6];
          fVar44 = pfVar11[7];
          fVar58 = pfVar11[8];
          fVar62 = pfVar11[9];
          fVar71 = pfVar11[10];
          fVar60 = pfVar11[0xb];
          fVar61 = pfVar11[0xc];
          fVar63 = pfVar11[0xd];
          fVar64 = pfVar11[0xe];
          fVar65 = pfVar11[0xf];
          fVar66 = pfVar11[0x10];
          fVar67 = pfVar11[0x11];
          fVar68 = pfVar11[0x12];
          fVar69 = pfVar11[0x13];
          fVar70 = pfVar11[0x14];
          fVar48 = pfVar11[0x15];
          fVar49 = pfVar11[0x16];
          fVar51 = pfVar11[0x17];
          fVar52 = pfVar11[0x18];
          fVar4 = pfVar11[0x19];
          fVar50 = pfVar11[0x1a];
          fVar53 = pfVar11[0x1b];
          fVar55 = pfVar11[0x1c];
          fVar57 = pfVar11[0x1d];
          fVar56 = pfVar11[0x1e];
          fVar37 = pfVar11[0x1f];
          pfVar11 = pfVar8;
          fVar39 = local_e8;
          fVar36 = local_138;
          if (pfVar8 < pfVar8 + uVar22) {
            do {
              fVar38 = *pfVar11;
              fVar41 = pfVar11[1];
              local_e8 = pfVar11[2];
              local_138 = pfVar11[3];
              fVar42 = fVar40 * fVar52;
              fVar32 = fVar40 * fVar4;
              fVar33 = fVar43 * fVar55;
              fVar34 = fVar43 * fVar57;
              fVar54 = fVar43 * fVar37;
              fVar43 = fVar41 * fVar71 +
                       local_e8 * fVar45 +
                       local_e8 * fVar46 + fVar36 * fVar68 + fVar39 * fVar49 + fVar40 * fVar50 +
                       fVar43 * fVar56 + fVar38 * fVar64;
              fVar40 = fVar41 * fVar60 +
                       local_e8 * fVar44 +
                       local_138 * fVar47 + fVar36 * fVar69 + fVar39 * fVar51 + fVar40 * fVar53 +
                       fVar54 + fVar38 * fVar65;
              *pfVar11 = fVar41 * fVar58 +
                         local_e8 * fVar59 +
                         fVar38 * fVar30 + fVar36 * fVar66 + fVar39 * fVar70 + fVar42 + fVar33 +
                         fVar38 * fVar61;
              pfVar11[1] = fVar41 * fVar62 +
                           local_e8 * fVar31 +
                           fVar41 * fVar35 + fVar36 * fVar67 + fVar39 * fVar48 + fVar32 + fVar34 +
                           fVar38 * fVar63;
              pfVar11[2] = fVar43;
              pfVar11[3] = fVar40;
              pfVar11 = pfVar11 + 4;
              fVar39 = local_e8;
              fVar36 = local_138;
            } while (pfVar11 < pfVar8 + uVar22);
            uVar17 = *(uint *)((longlong)param_3 + 0x1c);
          }
          if ((uVar17 - 1 == uVar19) && ((uVar17 & 1) != 0)) {
            if ((uVar17 != 1) && (1 < uVar18)) {
              uVar23 = uVar23 + 1;
            }
            uVar28 = (ulonglong)(uVar23 << 4);
            *(float *)(*param_3 + uVar28 * 4) = local_138;
            *(float *)(*param_3 + 4 + uVar28 * 4) = local_e8;
            *(float *)(*param_3 + 8 + uVar28 * 4) = fVar40;
            *(float *)(*param_3 + 0xc + uVar28 * 4) = fVar43;
          }
          else {
            lVar20 = (ulonglong)(uVar23 << 4) + (ulonglong)uVar18;
            *(float *)(*param_3 + lVar20 * 4) = local_138;
            *(float *)(*param_3 + 0x10 + lVar20 * 4) = local_e8;
            *(float *)(*param_3 + 0x20 + lVar20 * 4) = fVar40;
            *(float *)(*param_3 + 0x30 + lVar20 * 4) = fVar43;
          }
          pfVar8 = pfVar8 + uVar21;
          uVar27 = uVar27 - 1;
        } while (uVar27 != 0);
      }
      if (('\0' < *(char *)((longlong)param_2 + 10)) &&
         (cVar5 = *(char *)((longlong)param_2 + 10) + -1, *(char *)((longlong)param_2 + 10) = cVar5,
         cVar5 == '\0')) {
        if (*(char *)((longlong)param_2 + 0xd) != '\x01') {
          *(undefined1 *)((longlong)param_2 + 0xe) = 0;
        }
        *(undefined1 *)((longlong)param_2 + 0xd) = 1;
      }
    }
  }
  else if (1 < local_148) {
    uVar21 = 0;
    uVar7 = (ushort)bVar2;
    if (*(char *)((longlong)param_2 + 0xe) == '\0') {
      *(undefined1 *)((longlong)param_2 + 0xe) = 1;
      if (bVar2 == 0) {
        return;
      }
      uVar29 = uVar21;
      uVar25 = 0;
      do {
        uVar22 = *(uint *)((longlong)param_3 + 0x1c);
        uVar17 = (uint)uVar29 & 3;
        lVar20 = *param_1 + (ulonglong)*(ushort *)(param_1 + 2) * (ulonglong)uVar25 * 4;
        iVar13 = (int)(uVar29 >> 2);
        if ((uVar22 - 1 == (uint)uVar29) && ((uVar22 & 1) != 0)) {
          if ((uVar22 != 1) && (1 < uVar17)) {
            iVar13 = iVar13 + 1;
          }
          fVar40 = *(float *)(*param_3 + (ulonglong)(uint)(iVar13 << 4) * 4);
          fVar43 = *(float *)(*param_3 + 8 + (ulonglong)(uint)(iVar13 << 4) * 4);
        }
        else {
          lVar14 = (ulonglong)uVar17 + (ulonglong)(uint)(iVar13 << 4);
          fVar40 = *(float *)(*param_3 + lVar14 * 4);
          fVar43 = *(float *)(*param_3 + 0x20 + lVar14 * 4);
        }
        fVar43 = fVar43 - fVar40;
        fVar40 = (1.0 / (float)uVar28) * fVar43;
        uVar9 = 0;
        if (uVar6 != 0) {
          do {
            uVar29 = (ulonglong)uVar9;
            fVar43 = fVar43 - fVar40;
            uVar9 = uVar9 + 1;
            *(float *)(lVar20 + uVar29 * 4) = fVar43 + *(float *)(lVar20 + uVar29 * 4);
          } while (uVar9 < uVar27);
        }
        uVar25 = uVar25 + 1;
        uVar29 = (ulonglong)uVar25;
      } while (uVar25 < uVar7);
    }
    if (uVar7 != 0) {
      do {
        lVar3 = *param_1;
        uVar22 = (uint)uVar21 & 3;
        uVar27 = *(uint *)((longlong)param_3 + 0x1c);
        lVar20 = (ulonglong)(uVar6 - 2) + *(ushort *)(param_1 + 2) * uVar21;
        lVar14 = (ulonglong)(uVar6 - 1) + *(ushort *)(param_1 + 2) * uVar21;
        iVar13 = (int)(uVar21 >> 2);
        if ((uVar27 - 1 == (uint)uVar21) && ((uVar27 & 1) != 0)) {
          if ((uVar27 != 1) && (1 < uVar22)) {
            iVar13 = iVar13 + 1;
          }
          uVar28 = (ulonglong)(uint)(iVar13 << 4);
          *(undefined4 *)(*param_3 + uVar28 * 4) = *(undefined4 *)(lVar3 + lVar14 * 4);
          *(undefined4 *)(*param_3 + 4 + uVar28 * 4) = *(undefined4 *)(lVar3 + lVar20 * 4);
          *(undefined4 *)(*param_3 + 8 + uVar28 * 4) = *(undefined4 *)(lVar3 + lVar14 * 4);
          *(undefined4 *)(*param_3 + 0xc + uVar28 * 4) = *(undefined4 *)(lVar3 + lVar20 * 4);
        }
        else {
          lVar16 = (ulonglong)(uint)(iVar13 << 4) + (ulonglong)uVar22;
          *(undefined4 *)(*param_3 + lVar16 * 4) = *(undefined4 *)(lVar3 + lVar14 * 4);
          *(undefined4 *)(*param_3 + 0x10 + lVar16 * 4) = *(undefined4 *)(lVar3 + lVar20 * 4);
          *(undefined4 *)(*param_3 + 0x20 + lVar16 * 4) = *(undefined4 *)(lVar3 + lVar14 * 4);
          *(undefined4 *)(*param_3 + 0x30 + lVar16 * 4) = *(undefined4 *)(lVar3 + lVar20 * 4);
        }
        uVar25 = (short)uVar21 + 1;
        uVar21 = (ulonglong)uVar25;
      } while (uVar25 < uVar7);
    }
  }
  return;
}



// FUNCTION 1431a8a30 _ExecuteMonoInPlace<AkHpfParamEval> body=2449 status=ok
// SIG undefined _ExecuteMonoInPlace<AkHpfParamEval>(void)

ushort _ExecuteMonoInPlace<AkHpfParamEval>
                 (ulonglong *param_1,float *param_2,longlong *param_3,ulonglong param_4)

{
  ushort uVar1;
  float *pfVar2;
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
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  float *pfVar27;
  uint uVar28;
  float *pfVar29;
  ulonglong uVar30;
  int iVar31;
  longlong lVar32;
  longlong lVar33;
  ulonglong uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ushort uVar40;
  uint uVar41;
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
  float local_118;
  float local_108;
  float local_f8;
  float local_e8;
  
  uVar37 = (uint)param_4;
  uVar40 = *(ushort *)(param_2 + 2);
  uVar1 = *(ushort *)((longlong)param_1 + 0x12);
  uVar34 = (ulonglong)uVar1;
  if (uVar40 < DAT_1467bdcbc) {
    fVar46 = *param_2;
    uVar34 = 0;
    fVar52 = param_2[1];
    if (uVar1 != 0) {
      uVar39 = (uint)(param_4 >> 2);
      uVar26 = uVar39 & 0x3fffffff;
      uVar41 = uVar37 & 3;
      do {
        uVar35 = (uint)uVar1 - (int)uVar34;
        if (DAT_1467bdcb4 < uVar35) {
          uVar35 = DAT_1467bdcb4;
        }
        if (uVar40 < DAT_1467bdcbc) {
          uVar40 = uVar40 + 1;
          fVar42 = (float)AkHpfParamEval::EvalCutoff
                                    (((float)uVar40 * (fVar52 - fVar46)) / (float)DAT_1467bdcbc +
                                     fVar46,DAT_1467bdcb8);
          fVar42 = _guard_xfg_dispatch_icall_nop((3.1415927 / (float)DAT_1467bdcac) * fVar42);
          uVar38 = *(uint *)((longlong)param_3 + 0x1c);
          pfVar27 = (float *)param_3[2];
          fVar59 = fVar42 * fVar42 - 1.0;
          fVar55 = fVar42 * fVar42 + 1.0;
          fVar58 = 1.0 / (fVar55 + fVar42 * 1.4142135);
          fVar42 = (fVar42 * 1.4142135 - fVar55) * fVar58;
          fVar61 = fVar58 * -2.0;
          fVar55 = fVar59 * fVar61;
          if (((uVar38 & 1) != 0) || ((char)param_3[4] != '\0')) {
            *pfVar27 = fVar58;
            pfVar27[1] = fVar58;
            pfVar27[2] = fVar58;
            pfVar27[3] = fVar58;
            pfVar27[4] = 0.0;
            pfVar27[5] = 0.0;
            pfVar27[6] = 0.0;
            fVar60 = fVar58 * fVar55;
            fVar56 = fVar42 * fVar61;
            fVar57 = fVar42 * fVar58;
            fVar43 = fVar60 + fVar61;
            pfVar27[7] = fVar43;
            pfVar27[10] = fVar43;
            pfVar27[8] = 0.0;
            pfVar27[9] = 0.0;
            fVar50 = fVar59 * fVar58 * fVar58 * 4.0;
            fVar44 = fVar43 * fVar55 + fVar58 + fVar57;
            pfVar27[0xb] = fVar44;
            pfVar27[0xd] = fVar43;
            pfVar27[0xe] = fVar44;
            pfVar27[0xc] = 0.0;
            pfVar27[0xf] = fVar42 * fVar55 * fVar58 + fVar44 * fVar55 + fVar56;
            fVar43 = fVar50 + fVar58;
            pfVar27[0x10] = fVar61;
            pfVar27[0x11] = fVar43;
            fVar43 = fVar43 * fVar55 + fVar56;
            pfVar27[0x12] = fVar43;
            pfVar27[0x13] = (fVar43 + fVar56) * fVar55 + fVar57;
            pfVar27[0x14] = fVar58;
            pfVar27[0x17] = ((fVar58 + fVar58) * fVar42 + fVar60 * fVar55) * fVar55;
            pfVar27[0x15] = fVar60;
            fVar50 = fVar59 * fVar50;
            pfVar27[0x16] = fVar60 * fVar55 + fVar57;
            pfVar27[0x18] = fVar55;
            pfVar27[0x19] = fVar50 + fVar42;
            pfVar27[0x1a] = (fVar42 + fVar42 + fVar50) * fVar55;
            pfVar27[0x1b] = (fVar42 * 3.0 + fVar50) * fVar50 + fVar42 * fVar42;
            pfVar27[0x1c] = fVar42;
            pfVar27[0x1d] = fVar42 * fVar55;
            fVar43 = fVar59 * fVar58 * fVar58 * fVar59 * 4.0 * fVar42;
            pfVar27[0x1e] = fVar43 + fVar42 * fVar42;
            pfVar27[0x1f] = ((fVar42 + fVar42) * fVar42 + fVar43) * fVar55;
            pfVar27 = pfVar27 + 0x20;
            if ((char)param_3[4] != '\0') goto LAB_1431a8e8f;
            uVar38 = *(uint *)((longlong)param_3 + 0x1c);
          }
          fVar43 = fVar58 * fVar55;
          if ((uVar38 & 2) != 0) {
            pfVar27[1] = fVar58;
            pfVar27[3] = fVar58;
            *pfVar27 = 0.0;
            pfVar27[2] = 0.0;
            pfVar27[4] = fVar58;
            pfVar27[6] = fVar58;
            pfVar27[5] = fVar43 + fVar61;
            pfVar27[7] = fVar43 + fVar61;
            pfVar27[8] = fVar61;
            pfVar27[10] = fVar61;
            fVar50 = fVar59 * fVar58 * fVar58 * 4.0;
            fVar44 = fVar50 + fVar58;
            fVar59 = fVar59 * fVar50 + fVar42;
            pfVar27[9] = fVar44;
            pfVar27[0xb] = fVar44;
            pfVar27[0xc] = fVar58;
            pfVar27[0xd] = fVar43;
            pfVar27[0xe] = fVar58;
            pfVar27[0xf] = fVar43;
            pfVar27[0x11] = fVar59;
            pfVar27[0x13] = fVar59;
            pfVar27[0x10] = fVar55;
            pfVar27[0x12] = fVar55;
            pfVar27[0x14] = fVar42;
            pfVar27[0x15] = fVar55 * fVar42;
            pfVar27[0x16] = fVar42;
            pfVar27[0x17] = fVar55 * fVar42;
            pfVar27 = pfVar27 + 0x18;
            uVar38 = *(uint *)((longlong)param_3 + 0x1c);
          }
          if (3 < uVar38) {
            *pfVar27 = fVar58;
            pfVar27[1] = fVar61;
            pfVar27[2] = fVar58;
            pfVar27[3] = fVar55;
            pfVar27[4] = fVar42;
          }
        }
LAB_1431a8e8f:
        pfVar27 = (float *)(*param_1 + uVar34 * 4);
        uVar38 = uVar35;
        if ((uVar35 & 3) != 0) {
          pfVar29 = pfVar27 + uVar35;
          iVar31 = 4 - (uVar35 & 3);
          uVar38 = iVar31 + uVar35;
          do {
            *pfVar29 = 0.0;
            pfVar29 = pfVar29 + 1;
            iVar31 = iVar31 + -1;
          } while (iVar31 != 0);
        }
        uVar36 = *(uint *)((longlong)param_3 + 0x1c);
        if ((uVar36 - 1 == uVar37) && ((uVar36 & 1) != 0)) {
          uVar28 = uVar26;
          if ((uVar36 != 1) && (1 < uVar41)) {
            uVar28 = uVar26 + 1;
          }
          lVar33 = *param_3;
          uVar30 = (ulonglong)(uVar28 << 4);
          fVar42 = *(float *)(lVar33 + uVar30 * 4);
          fVar55 = *(float *)(lVar33 + 4 + uVar30 * 4);
          local_f8 = *(float *)(lVar33 + 8 + uVar30 * 4);
          local_e8 = *(float *)(lVar33 + 0xc + uVar30 * 4);
        }
        else {
          lVar32 = (ulonglong)(uVar39 << 4) + (ulonglong)uVar41;
          lVar33 = *param_3;
          fVar42 = *(float *)(lVar33 + lVar32 * 4);
          fVar55 = *(float *)(lVar33 + 0x10 + lVar32 * 4);
          local_f8 = *(float *)(lVar33 + 0x20 + lVar32 * 4);
          local_e8 = *(float *)(lVar33 + 0x30 + lVar32 * 4);
        }
        pfVar29 = pfVar27 + uVar38;
        pfVar2 = (float *)param_3[2];
        fVar58 = *pfVar2;
        fVar59 = pfVar2[1];
        fVar61 = pfVar2[2];
        fVar43 = pfVar2[3];
        fVar44 = pfVar2[4];
        fVar50 = pfVar2[5];
        fVar56 = pfVar2[6];
        fVar57 = pfVar2[7];
        fVar60 = pfVar2[8];
        fVar3 = pfVar2[9];
        fVar4 = pfVar2[10];
        fVar5 = pfVar2[0xb];
        fVar6 = pfVar2[0xc];
        fVar7 = pfVar2[0xd];
        fVar8 = pfVar2[0xe];
        fVar9 = pfVar2[0xf];
        fVar10 = pfVar2[0x10];
        fVar11 = pfVar2[0x11];
        fVar12 = pfVar2[0x12];
        fVar13 = pfVar2[0x13];
        fVar14 = pfVar2[0x14];
        fVar15 = pfVar2[0x15];
        fVar16 = pfVar2[0x16];
        fVar17 = pfVar2[0x17];
        fVar18 = pfVar2[0x18];
        fVar19 = pfVar2[0x19];
        fVar20 = pfVar2[0x1a];
        fVar21 = pfVar2[0x1b];
        fVar22 = pfVar2[0x1c];
        fVar23 = pfVar2[0x1d];
        fVar24 = pfVar2[0x1e];
        fVar25 = pfVar2[0x1f];
        local_118 = fVar42;
        local_108 = fVar55;
        if (pfVar27 < pfVar29) {
          do {
            fVar47 = *pfVar27;
            fVar49 = pfVar27[1];
            local_108 = pfVar27[2];
            local_118 = pfVar27[3];
            fVar45 = fVar18 * local_f8;
            fVar48 = fVar19 * local_f8;
            fVar51 = fVar22 * local_e8;
            fVar53 = fVar23 * local_e8;
            fVar54 = fVar25 * local_e8;
            local_e8 = fVar49 * fVar4 +
                       fVar56 * local_108 +
                       local_108 * fVar61 + fVar12 * fVar42 + fVar16 * fVar55 + fVar20 * local_f8 +
                       fVar24 * local_e8 + fVar47 * fVar8;
            local_f8 = fVar49 * fVar5 +
                       fVar57 * local_108 +
                       local_118 * fVar43 + fVar13 * fVar42 + fVar17 * fVar55 + fVar21 * local_f8 +
                       fVar54 + fVar47 * fVar9;
            *pfVar27 = fVar49 * fVar60 +
                       fVar44 * local_108 +
                       fVar47 * fVar58 + fVar10 * fVar42 + fVar14 * fVar55 + fVar45 + fVar51 +
                       fVar47 * fVar6;
            pfVar27[1] = fVar49 * fVar3 +
                         fVar50 * local_108 +
                         fVar49 * fVar59 + fVar11 * fVar42 + fVar15 * fVar55 + fVar48 + fVar53 +
                         fVar47 * fVar7;
            pfVar27[2] = local_e8;
            pfVar27[3] = local_f8;
            pfVar27 = pfVar27 + 4;
            fVar55 = local_108;
            fVar42 = local_118;
          } while (pfVar27 < pfVar29);
          uVar36 = *(uint *)((longlong)param_3 + 0x1c);
        }
        if ((uVar36 - 1 == uVar37) && ((uVar36 & 1) != 0)) {
          uVar38 = uVar26;
          if ((uVar36 != 1) && (1 < uVar41)) {
            uVar38 = uVar26 + 1;
          }
          uVar30 = (ulonglong)(uVar38 << 4);
          *(float *)(*param_3 + uVar30 * 4) = local_118;
          *(float *)(*param_3 + 4 + uVar30 * 4) = local_108;
          *(float *)(*param_3 + 8 + uVar30 * 4) = local_f8;
          *(float *)(*param_3 + 0xc + uVar30 * 4) = local_e8;
        }
        else {
          lVar33 = (ulonglong)(uVar39 << 4) + (ulonglong)uVar41;
          *(float *)(*param_3 + lVar33 * 4) = local_118;
          *(float *)(*param_3 + 0x10 + lVar33 * 4) = local_108;
          *(float *)(*param_3 + 0x20 + lVar33 * 4) = local_f8;
          *(float *)(*param_3 + 0x30 + lVar33 * 4) = local_e8;
        }
        uVar35 = (int)uVar34 + uVar35;
        uVar34 = (ulonglong)uVar35;
      } while (uVar35 < uVar1);
    }
  }
  else {
    pfVar27 = (float *)*param_1;
    if ((uVar1 & 3) != 0) {
      pfVar29 = pfVar27 + uVar34;
      iVar31 = 4 - (uVar1 & 3);
      uVar34 = (ulonglong)((uint)uVar1 + iVar31);
      do {
        *pfVar29 = 0.0;
        pfVar29 = pfVar29 + 1;
        iVar31 = iVar31 + -1;
      } while (iVar31 != 0);
    }
    uVar39 = *(uint *)((longlong)param_3 + 0x1c);
    uVar26 = (uint)(param_4 >> 2);
    uVar41 = uVar26 & 0x3fffffff;
    uVar35 = uVar37 & 3;
    if ((uVar39 - 1 == uVar37) && ((uVar39 & 1) != 0)) {
      uVar38 = uVar41;
      if ((uVar39 != 1) && (1 < uVar35)) {
        uVar38 = uVar41 + 1;
      }
      lVar33 = *param_3;
      uVar30 = (ulonglong)(uVar38 << 4);
      fVar46 = *(float *)(lVar33 + uVar30 * 4);
      fVar52 = *(float *)(lVar33 + 4 + uVar30 * 4);
      local_108 = *(float *)(lVar33 + 8 + uVar30 * 4);
      local_118 = *(float *)(lVar33 + 0xc + uVar30 * 4);
    }
    else {
      lVar32 = (ulonglong)(uVar26 << 4) + (ulonglong)uVar35;
      lVar33 = *param_3;
      fVar46 = *(float *)(lVar33 + lVar32 * 4);
      fVar52 = *(float *)(lVar33 + 0x10 + lVar32 * 4);
      local_108 = *(float *)(lVar33 + 0x20 + lVar32 * 4);
      local_118 = *(float *)(lVar33 + 0x30 + lVar32 * 4);
    }
    pfVar2 = (float *)param_3[2];
    pfVar29 = pfVar27 + uVar34;
    fVar42 = *pfVar2;
    fVar55 = pfVar2[1];
    fVar58 = pfVar2[2];
    fVar59 = pfVar2[3];
    fVar61 = pfVar2[4];
    fVar43 = pfVar2[5];
    fVar44 = pfVar2[6];
    fVar50 = pfVar2[7];
    fVar56 = pfVar2[8];
    fVar57 = pfVar2[9];
    fVar60 = pfVar2[10];
    fVar3 = pfVar2[0xb];
    fVar4 = pfVar2[0xc];
    fVar5 = pfVar2[0xd];
    fVar6 = pfVar2[0xe];
    fVar7 = pfVar2[0xf];
    fVar8 = pfVar2[0x10];
    fVar9 = pfVar2[0x11];
    fVar10 = pfVar2[0x12];
    fVar11 = pfVar2[0x13];
    fVar12 = pfVar2[0x14];
    fVar13 = pfVar2[0x15];
    fVar14 = pfVar2[0x16];
    fVar15 = pfVar2[0x17];
    fVar16 = pfVar2[0x18];
    fVar17 = pfVar2[0x19];
    fVar18 = pfVar2[0x1a];
    fVar19 = pfVar2[0x1b];
    fVar20 = pfVar2[0x1c];
    fVar21 = pfVar2[0x1d];
    fVar22 = pfVar2[0x1e];
    fVar23 = pfVar2[0x1f];
    local_f8 = fVar52;
    local_e8 = fVar46;
    if (pfVar27 < pfVar29) {
      do {
        fVar24 = *pfVar27;
        fVar25 = pfVar27[1];
        local_f8 = pfVar27[2];
        local_e8 = pfVar27[3];
        fVar47 = fVar16 * local_108;
        fVar49 = fVar17 * local_108;
        fVar45 = fVar20 * local_118;
        fVar48 = fVar21 * local_118;
        fVar51 = fVar23 * local_118;
        local_118 = fVar25 * fVar60 +
                    fVar44 * local_f8 +
                    local_f8 * fVar58 + fVar10 * fVar46 + fVar14 * fVar52 + fVar18 * local_108 +
                    fVar22 * local_118 + fVar24 * fVar6;
        local_108 = fVar25 * fVar3 +
                    fVar50 * local_f8 +
                    local_e8 * fVar59 + fVar11 * fVar46 + fVar15 * fVar52 + fVar19 * local_108 +
                    fVar51 + fVar24 * fVar7;
        *pfVar27 = fVar25 * fVar56 +
                   fVar61 * local_f8 +
                   fVar24 * fVar42 + fVar8 * fVar46 + fVar12 * fVar52 + fVar47 + fVar45 +
                   fVar24 * fVar4;
        pfVar27[1] = fVar25 * fVar57 +
                     fVar43 * local_f8 +
                     fVar25 * fVar55 + fVar9 * fVar46 + fVar13 * fVar52 + fVar49 + fVar48 +
                     fVar24 * fVar5;
        pfVar27[2] = local_118;
        pfVar27[3] = local_108;
        pfVar27 = pfVar27 + 4;
        fVar52 = local_f8;
        fVar46 = local_e8;
      } while (pfVar27 < pfVar29);
      uVar39 = *(uint *)((longlong)param_3 + 0x1c);
    }
    if ((uVar39 - 1 == uVar37) && ((uVar39 & 1) != 0)) {
      if ((uVar39 != 1) && (1 < uVar35)) {
        uVar41 = uVar41 + 1;
      }
      uVar34 = (ulonglong)(uVar41 << 4);
      *(float *)(*param_3 + uVar34 * 4) = local_e8;
      *(float *)(*param_3 + 4 + uVar34 * 4) = local_f8;
      *(float *)(*param_3 + 8 + uVar34 * 4) = local_108;
      *(float *)(*param_3 + 0xc + uVar34 * 4) = local_118;
    }
    else {
      lVar33 = (ulonglong)(uVar26 << 4) + (ulonglong)uVar35;
      *(float *)(*param_3 + lVar33 * 4) = local_e8;
      *(float *)(*param_3 + 0x10 + lVar33 * 4) = local_f8;
      *(float *)(*param_3 + 0x20 + lVar33 * 4) = local_108;
      *(float *)(*param_3 + 0x30 + lVar33 * 4) = local_118;
    }
  }
  return uVar40;
}



// FUNCTION 1431a93d0 _ExecuteMonoOutOfPlace<AkLpfParamEval> body=2431 status=ok
// SIG undefined _ExecuteMonoOutOfPlace<AkLpfParamEval>(void)

ushort _ExecuteMonoOutOfPlace<AkLpfParamEval>
                 (longlong *param_1,longlong *param_2,float *param_3,longlong *param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  longlong lVar4;
  float *pfVar5;
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
  float *pfVar26;
  longlong lVar27;
  ulonglong uVar28;
  uint uVar29;
  float *pfVar30;
  ulonglong uVar31;
  uint uVar32;
  int iVar33;
  longlong lVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
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
  ushort local_res18;
  float local_118;
  float local_108;
  float local_f8;
  float local_e8;
  
  uVar3 = *(ushort *)((longlong)param_1 + 0x12);
  uVar31 = (ulonglong)uVar3;
  local_res18 = *(ushort *)(param_3 + 2);
  if (local_res18 < DAT_1467bdcbc) {
    fVar1 = *param_3;
    uVar31 = 0;
    fVar2 = param_3[1];
    if (uVar3 != 0) {
      uVar37 = param_5 >> 2;
      uVar38 = param_5 & 3;
      do {
        uVar32 = (uint)uVar3 - (int)uVar31;
        if (DAT_1467bdcb4 < uVar32) {
          uVar32 = DAT_1467bdcb4;
        }
        if (local_res18 < DAT_1467bdcbc) {
          local_res18 = local_res18 + 1;
          fVar39 = (float)AkLpfParamEval::EvalCutoff
                                    (((float)local_res18 * (fVar2 - fVar1)) / (float)DAT_1467bdcbc +
                                     fVar1,DAT_1467bdcb8);
          fVar39 = _guard_xfg_dispatch_icall_nop((3.1415927 / (float)DAT_1467bdcac) * fVar39);
          uVar36 = *(uint *)((longlong)param_4 + 0x1c);
          pfVar26 = (float *)param_4[2];
          fVar39 = 1.0 / fVar39;
          fVar47 = fVar39 * fVar39;
          fVar50 = 1.0 / (fVar39 * 1.4142135 + 1.0 + fVar47);
          fVar53 = ((fVar47 + fVar47) - 2.0) * fVar50;
          fVar58 = fVar50 + fVar50;
          fVar39 = -(((1.0 - fVar39 * 1.4142135) + fVar47) * fVar50);
          if (((uVar36 & 1) != 0) || ((char)param_4[4] != '\0')) {
            *pfVar26 = fVar50;
            pfVar26[1] = fVar50;
            pfVar26[2] = fVar50;
            pfVar26[3] = fVar50;
            pfVar26[4] = 0.0;
            pfVar26[5] = 0.0;
            pfVar26[6] = 0.0;
            fVar57 = fVar53 * fVar50;
            fVar59 = fVar53 * fVar39;
            fVar56 = fVar58 * fVar39;
            fVar48 = fVar39 * fVar50;
            fVar47 = fVar57 + fVar58;
            pfVar26[7] = fVar47;
            pfVar26[10] = fVar47;
            pfVar26[8] = 0.0;
            pfVar26[9] = 0.0;
            fVar49 = fVar47 * fVar53 + fVar50 + fVar48;
            pfVar26[0xb] = fVar49;
            pfVar26[0xd] = fVar47;
            pfVar26[0xe] = fVar49;
            pfVar26[0xc] = 0.0;
            fVar47 = fVar58 * fVar53 + fVar50;
            pfVar26[0xf] = fVar59 * fVar50 + fVar49 * fVar53 + fVar56;
            pfVar26[0x11] = fVar47;
            pfVar26[0x10] = fVar58;
            fVar47 = fVar47 * fVar53 + fVar56;
            pfVar26[0x12] = fVar47;
            pfVar26[0x13] = (fVar56 + fVar47) * fVar53 + fVar48;
            pfVar26[0x14] = fVar50;
            pfVar26[0x15] = fVar57;
            pfVar26[0x16] = fVar48 + fVar57 * fVar53;
            fVar47 = fVar53 * fVar53;
            pfVar26[0x17] = (fVar56 + fVar57 * fVar53) * fVar53;
            pfVar26[0x18] = fVar53;
            pfVar26[0x19] = fVar47 + fVar39;
            pfVar26[0x1a] = (fVar47 + fVar39 + fVar39) * fVar53;
            pfVar26[0x1b] = (fVar39 * 3.0 + fVar47) * fVar53 * fVar53 + fVar39 * fVar39;
            pfVar26[0x1c] = fVar39;
            pfVar26[0x1d] = fVar59;
            pfVar26[0x1e] = fVar39 * fVar39 + fVar59 * fVar53;
            pfVar26[0x1f] = ((fVar39 + fVar39) * fVar39 + fVar59 * fVar53) * fVar53;
            pfVar26 = pfVar26 + 0x20;
            if ((char)param_4[4] != '\0') goto LAB_1431a97e6;
            uVar36 = *(uint *)((longlong)param_4 + 0x1c);
          }
          fVar47 = fVar53 * fVar50;
          if ((uVar36 & 2) != 0) {
            pfVar26[1] = fVar50;
            fVar56 = fVar58 * fVar53 + fVar50;
            pfVar26[3] = fVar50;
            fVar49 = fVar53 * fVar53 + fVar39;
            *pfVar26 = 0.0;
            pfVar26[2] = 0.0;
            pfVar26[4] = fVar50;
            pfVar26[6] = fVar50;
            pfVar26[5] = fVar47 + fVar58;
            pfVar26[7] = fVar47 + fVar58;
            pfVar26[8] = fVar58;
            pfVar26[9] = fVar56;
            pfVar26[10] = fVar58;
            pfVar26[0xb] = fVar56;
            pfVar26[0xc] = fVar50;
            pfVar26[0xd] = fVar47;
            pfVar26[0xe] = fVar50;
            pfVar26[0xf] = fVar47;
            pfVar26[0x10] = fVar53;
            pfVar26[0x11] = fVar49;
            pfVar26[0x12] = fVar53;
            pfVar26[0x13] = fVar49;
            pfVar26[0x14] = fVar39;
            pfVar26[0x15] = fVar39 * fVar53;
            pfVar26[0x16] = fVar39;
            pfVar26[0x17] = fVar39 * fVar53;
            pfVar26 = pfVar26 + 0x18;
            uVar36 = *(uint *)((longlong)param_4 + 0x1c);
          }
          if (3 < uVar36) {
            *pfVar26 = fVar50;
            pfVar26[1] = fVar58;
            pfVar26[2] = fVar50;
            pfVar26[3] = fVar53;
            pfVar26[4] = fVar39;
          }
        }
LAB_1431a97e6:
        pfVar26 = (float *)(*param_1 +
                           ((ulonglong)*(ushort *)(param_1 + 2) * (ulonglong)param_5 + uVar31) * 4);
        lVar27 = *param_2;
        uVar36 = uVar32;
        if ((uVar32 & 3) != 0) {
          pfVar30 = pfVar26 + uVar32;
          iVar33 = 4 - (uVar32 & 3);
          uVar36 = iVar33 + uVar32;
          do {
            *pfVar30 = 0.0;
            pfVar30 = pfVar30 + 1;
            iVar33 = iVar33 + -1;
          } while (iVar33 != 0);
        }
        uVar35 = *(uint *)((longlong)param_4 + 0x1c);
        if ((uVar35 - 1 == param_5) && ((uVar35 & 1) != 0)) {
          uVar29 = uVar37;
          if ((uVar35 != 1) && (1 < uVar38)) {
            uVar29 = uVar37 + 1;
          }
          lVar4 = *param_4;
          uVar28 = (ulonglong)(uVar29 << 4);
          local_118 = *(float *)(lVar4 + uVar28 * 4);
          local_108 = *(float *)(lVar4 + 4 + uVar28 * 4);
          local_f8 = *(float *)(lVar4 + 8 + uVar28 * 4);
          local_e8 = *(float *)(lVar4 + 0xc + uVar28 * 4);
        }
        else {
          lVar34 = (ulonglong)(uVar37 << 4) + (ulonglong)uVar38;
          lVar4 = *param_4;
          local_118 = *(float *)(lVar4 + lVar34 * 4);
          local_108 = *(float *)(lVar4 + 0x10 + lVar34 * 4);
          local_f8 = *(float *)(lVar4 + 0x20 + lVar34 * 4);
          local_e8 = *(float *)(lVar4 + 0x30 + lVar34 * 4);
        }
        pfVar30 = pfVar26 + uVar36;
        pfVar5 = (float *)param_4[2];
        fVar39 = *pfVar5;
        fVar47 = pfVar5[1];
        fVar50 = pfVar5[2];
        fVar53 = pfVar5[3];
        fVar58 = pfVar5[4];
        fVar49 = pfVar5[5];
        fVar56 = pfVar5[6];
        fVar48 = pfVar5[7];
        fVar57 = pfVar5[8];
        fVar59 = pfVar5[9];
        fVar6 = pfVar5[10];
        fVar7 = pfVar5[0xb];
        fVar8 = pfVar5[0xc];
        fVar9 = pfVar5[0xd];
        fVar10 = pfVar5[0xe];
        fVar11 = pfVar5[0xf];
        fVar12 = pfVar5[0x10];
        fVar13 = pfVar5[0x11];
        fVar14 = pfVar5[0x12];
        fVar15 = pfVar5[0x13];
        fVar16 = pfVar5[0x14];
        fVar17 = pfVar5[0x15];
        fVar18 = pfVar5[0x16];
        fVar19 = pfVar5[0x17];
        fVar20 = pfVar5[0x18];
        fVar21 = pfVar5[0x19];
        fVar22 = pfVar5[0x1a];
        fVar23 = pfVar5[0x1b];
        fVar24 = pfVar5[0x1c];
        fVar25 = pfVar5[0x1d];
        fVar52 = pfVar5[0x1e];
        fVar55 = pfVar5[0x1f];
        if (pfVar26 < pfVar30) {
          lVar27 = (lVar27 + uVar31 * 4) - (longlong)pfVar26;
          fVar51 = local_108;
          fVar54 = local_118;
          do {
            fVar41 = *pfVar26;
            fVar43 = pfVar26[1];
            local_108 = pfVar26[2];
            local_118 = pfVar26[3];
            fVar40 = fVar20 * local_f8;
            fVar42 = fVar21 * local_f8;
            fVar44 = fVar24 * local_e8;
            fVar45 = fVar25 * local_e8;
            fVar46 = fVar55 * local_e8;
            local_e8 = fVar43 * fVar6 +
                       fVar56 * local_108 +
                       local_108 * fVar50 + fVar14 * fVar54 + fVar18 * fVar51 + fVar22 * local_f8 +
                       fVar52 * local_e8 + fVar41 * fVar10;
            local_f8 = fVar43 * fVar7 +
                       fVar48 * local_108 +
                       local_118 * fVar53 + fVar15 * fVar54 + fVar19 * fVar51 + fVar23 * local_f8 +
                       fVar46 + fVar41 * fVar11;
            pfVar5 = (float *)((longlong)pfVar26 + lVar27);
            *pfVar5 = fVar43 * fVar57 +
                      fVar58 * local_108 +
                      fVar41 * fVar39 + fVar12 * fVar54 + fVar16 * fVar51 + fVar40 + fVar44 +
                      fVar41 * fVar8;
            pfVar5[1] = fVar43 * fVar59 +
                        fVar49 * local_108 +
                        fVar43 * fVar47 + fVar13 * fVar54 + fVar17 * fVar51 + fVar42 + fVar45 +
                        fVar41 * fVar9;
            pfVar5[2] = local_e8;
            pfVar5[3] = local_f8;
            pfVar26 = pfVar26 + 4;
            fVar51 = local_108;
            fVar54 = local_118;
          } while (pfVar26 < pfVar30);
          uVar35 = *(uint *)((longlong)param_4 + 0x1c);
        }
        if ((uVar35 - 1 == param_5) && ((uVar35 & 1) != 0)) {
          uVar36 = uVar37;
          if ((uVar35 != 1) && (1 < uVar38)) {
            uVar36 = uVar37 + 1;
          }
          uVar28 = (ulonglong)(uVar36 << 4);
          *(float *)(*param_4 + uVar28 * 4) = local_118;
          *(float *)(*param_4 + 4 + uVar28 * 4) = local_108;
          *(float *)(*param_4 + 8 + uVar28 * 4) = local_f8;
          *(float *)(*param_4 + 0xc + uVar28 * 4) = local_e8;
        }
        else {
          lVar27 = (ulonglong)uVar38 + (ulonglong)(uVar37 << 4);
          *(float *)(*param_4 + lVar27 * 4) = local_118;
          *(float *)(*param_4 + 0x10 + lVar27 * 4) = local_108;
          *(float *)(*param_4 + 0x20 + lVar27 * 4) = local_f8;
          *(float *)(*param_4 + 0x30 + lVar27 * 4) = local_e8;
        }
        uVar32 = (int)uVar31 + uVar32;
        uVar31 = (ulonglong)uVar32;
      } while (uVar32 < uVar3);
    }
  }
  else {
    pfVar26 = (float *)(*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * (ulonglong)param_5 * 4);
    lVar27 = *param_2;
    if ((uVar3 & 3) != 0) {
      pfVar30 = pfVar26 + uVar31;
      iVar33 = 4 - (uVar3 & 3);
      uVar31 = (ulonglong)((uint)uVar3 + iVar33);
      do {
        *pfVar30 = 0.0;
        pfVar30 = pfVar30 + 1;
        iVar33 = iVar33 + -1;
      } while (iVar33 != 0);
    }
    uVar37 = *(uint *)((longlong)param_4 + 0x1c);
    uVar38 = param_5 >> 2;
    uVar32 = param_5 & 3;
    if ((uVar37 - 1 == param_5) && ((uVar37 & 1) != 0)) {
      uVar36 = uVar38;
      if ((uVar37 != 1) && (1 < uVar32)) {
        uVar36 = uVar38 + 1;
      }
      lVar4 = *param_4;
      uVar28 = (ulonglong)(uVar36 << 4);
      local_e8 = *(float *)(lVar4 + uVar28 * 4);
      local_f8 = *(float *)(lVar4 + 4 + uVar28 * 4);
      local_108 = *(float *)(lVar4 + 8 + uVar28 * 4);
      local_118 = *(float *)(lVar4 + 0xc + uVar28 * 4);
    }
    else {
      lVar34 = (ulonglong)(uVar38 << 4) + (ulonglong)uVar32;
      lVar4 = *param_4;
      local_e8 = *(float *)(lVar4 + lVar34 * 4);
      local_f8 = *(float *)(lVar4 + 0x10 + lVar34 * 4);
      local_108 = *(float *)(lVar4 + 0x20 + lVar34 * 4);
      local_118 = *(float *)(lVar4 + 0x30 + lVar34 * 4);
    }
    pfVar5 = (float *)param_4[2];
    pfVar30 = pfVar26 + uVar31;
    fVar1 = *pfVar5;
    fVar2 = pfVar5[1];
    fVar39 = pfVar5[2];
    fVar47 = pfVar5[3];
    fVar50 = pfVar5[4];
    fVar53 = pfVar5[5];
    fVar58 = pfVar5[6];
    fVar49 = pfVar5[7];
    fVar56 = pfVar5[8];
    fVar48 = pfVar5[9];
    fVar57 = pfVar5[10];
    fVar59 = pfVar5[0xb];
    fVar6 = pfVar5[0xc];
    fVar7 = pfVar5[0xd];
    fVar8 = pfVar5[0xe];
    fVar9 = pfVar5[0xf];
    fVar10 = pfVar5[0x10];
    fVar11 = pfVar5[0x11];
    fVar12 = pfVar5[0x12];
    fVar13 = pfVar5[0x13];
    fVar14 = pfVar5[0x14];
    fVar15 = pfVar5[0x15];
    fVar16 = pfVar5[0x16];
    fVar17 = pfVar5[0x17];
    fVar18 = pfVar5[0x18];
    fVar19 = pfVar5[0x19];
    fVar20 = pfVar5[0x1a];
    fVar21 = pfVar5[0x1b];
    fVar22 = pfVar5[0x1c];
    fVar23 = pfVar5[0x1d];
    fVar24 = pfVar5[0x1e];
    fVar25 = pfVar5[0x1f];
    if (pfVar26 < pfVar30) {
      lVar27 = lVar27 - (longlong)pfVar26;
      fVar52 = local_f8;
      fVar55 = local_e8;
      do {
        fVar51 = *pfVar26;
        fVar54 = pfVar26[1];
        local_f8 = pfVar26[2];
        local_e8 = pfVar26[3];
        fVar41 = fVar18 * local_108;
        fVar43 = fVar19 * local_108;
        fVar40 = fVar22 * local_118;
        fVar42 = fVar23 * local_118;
        fVar44 = fVar25 * local_118;
        local_118 = fVar54 * fVar57 +
                    fVar58 * local_f8 +
                    local_f8 * fVar39 + fVar12 * fVar55 + fVar16 * fVar52 + fVar20 * local_108 +
                    fVar24 * local_118 + fVar51 * fVar8;
        local_108 = fVar54 * fVar59 +
                    fVar49 * local_f8 +
                    local_e8 * fVar47 + fVar13 * fVar55 + fVar17 * fVar52 + fVar21 * local_108 +
                    fVar44 + fVar51 * fVar9;
        pfVar5 = (float *)((longlong)pfVar26 + lVar27);
        *pfVar5 = fVar54 * fVar56 +
                  fVar50 * local_f8 +
                  fVar51 * fVar1 + fVar10 * fVar55 + fVar14 * fVar52 + fVar41 + fVar40 +
                  fVar51 * fVar6;
        pfVar5[1] = fVar54 * fVar48 +
                    fVar53 * local_f8 +
                    fVar54 * fVar2 + fVar11 * fVar55 + fVar15 * fVar52 + fVar43 + fVar42 +
                    fVar51 * fVar7;
        pfVar5[2] = local_118;
        pfVar5[3] = local_108;
        pfVar26 = pfVar26 + 4;
        fVar52 = local_f8;
        fVar55 = local_e8;
      } while (pfVar26 < pfVar30);
      uVar37 = *(uint *)((longlong)param_4 + 0x1c);
    }
    if ((uVar37 - 1 == param_5) && ((uVar37 & 1) != 0)) {
      if ((uVar37 != 1) && (1 < uVar32)) {
        uVar38 = uVar38 + 1;
      }
      uVar31 = (ulonglong)(uVar38 << 4);
      *(float *)(*param_4 + uVar31 * 4) = local_e8;
      *(float *)(*param_4 + 4 + uVar31 * 4) = local_f8;
      *(float *)(*param_4 + 8 + uVar31 * 4) = local_108;
      *(float *)(*param_4 + 0xc + uVar31 * 4) = local_118;
    }
    else {
      lVar27 = (ulonglong)(uVar38 << 4) + (ulonglong)uVar32;
      *(float *)(*param_4 + lVar27 * 4) = local_e8;
      *(float *)(*param_4 + 0x10 + lVar27 * 4) = local_f8;
      *(float *)(*param_4 + 0x20 + lVar27 * 4) = local_108;
      *(float *)(*param_4 + 0x30 + lVar27 * 4) = local_118;
    }
  }
  return local_res18;
}



// FUNCTION 1431a9d60 _ManageBQFChange<AkHpfParamEval> body=1146 status=ok
// SIG undefined _ManageBQFChange<AkHpfParamEval>(void)

char _ManageBQFChange<AkHpfParamEval>(float *param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  float *pfVar3;
  uint uVar4;
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
  
  if (*(char *)((longlong)param_1 + 0xb) == '\0') {
    return *(char *)((longlong)param_1 + 0xd);
  }
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  if (*(char *)(param_1 + 3) == '\0') {
    if ((0.1 < *param_1) || (0.1 < param_1[1])) {
      cVar2 = '\0';
      *(undefined1 *)((longlong)param_1 + 10) = 0;
    }
    else {
      cVar2 = '\x01';
    }
    if (cVar2 != *(char *)((longlong)param_1 + 0xd)) {
      *(undefined1 *)((longlong)param_1 + 0xe) = 0;
    }
    *(char *)((longlong)param_1 + 0xd) = cVar2;
    if (cVar2 != '\0') {
      *(undefined2 *)(param_1 + 2) = DAT_1467bdcbc;
      return cVar2;
    }
    *(undefined2 *)(param_1 + 2) = 0;
    return '\0';
  }
  fVar5 = param_1[1];
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = fVar5;
  *(undefined2 *)(param_1 + 2) = DAT_1467bdcbc;
  bVar1 = fVar5 <= 0.1;
  if (!bVar1) {
    *(undefined1 *)((longlong)param_1 + 10) = 0;
  }
  if (bVar1 != (bool)*(char *)((longlong)param_1 + 0xd)) {
    *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  }
  *(bool *)((longlong)param_1 + 0xd) = bVar1;
  if (bVar1) {
    return '\x01';
  }
  fVar5 = (float)AkHpfParamEval::EvalCutoff(fVar5,DAT_1467bdcb8);
  fVar5 = _guard_xfg_dispatch_icall_nop((3.1415927 / (float)DAT_1467bdcac) * fVar5);
  uVar4 = *(uint *)(param_2 + 0x1c);
  pfVar3 = *(float **)(param_2 + 0x10);
  fVar13 = fVar5 * fVar5 - 1.0;
  fVar10 = fVar5 * fVar5 + 1.0;
  fVar12 = 1.0 / (fVar10 + fVar5 * 1.4142135);
  fVar5 = (fVar5 * 1.4142135 - fVar10) * fVar12;
  fVar14 = fVar12 * -2.0;
  fVar10 = fVar13 * fVar14;
  if (((uVar4 & 1) != 0) || (*(char *)(param_2 + 0x20) != '\0')) {
    *pfVar3 = fVar12;
    pfVar3[1] = fVar12;
    pfVar3[2] = fVar12;
    pfVar3[3] = fVar12;
    pfVar3[4] = 0.0;
    pfVar3[5] = 0.0;
    pfVar3[6] = 0.0;
    fVar15 = fVar12 * fVar10;
    fVar9 = fVar5 * fVar14;
    fVar11 = fVar5 * fVar12;
    fVar6 = fVar15 + fVar14;
    pfVar3[7] = fVar6;
    pfVar3[10] = fVar6;
    pfVar3[8] = 0.0;
    pfVar3[9] = 0.0;
    fVar8 = fVar13 * fVar12 * fVar12 * 4.0;
    fVar7 = fVar6 * fVar10 + fVar12 + fVar11;
    pfVar3[0xb] = fVar7;
    pfVar3[0xd] = fVar6;
    pfVar3[0xe] = fVar7;
    pfVar3[0xc] = 0.0;
    pfVar3[0xf] = fVar5 * fVar10 * fVar12 + fVar7 * fVar10 + fVar9;
    fVar6 = fVar8 + fVar12;
    pfVar3[0x10] = fVar14;
    pfVar3[0x11] = fVar6;
    fVar6 = fVar6 * fVar10 + fVar9;
    pfVar3[0x12] = fVar6;
    pfVar3[0x13] = (fVar6 + fVar9) * fVar10 + fVar11;
    pfVar3[0x14] = fVar12;
    pfVar3[0x17] = ((fVar12 + fVar12) * fVar5 + fVar15 * fVar10) * fVar10;
    pfVar3[0x15] = fVar15;
    fVar8 = fVar13 * fVar8;
    pfVar3[0x16] = fVar15 * fVar10 + fVar11;
    pfVar3[0x18] = fVar10;
    pfVar3[0x19] = fVar8 + fVar5;
    pfVar3[0x1a] = (fVar5 + fVar5 + fVar8) * fVar10;
    pfVar3[0x1b] = (fVar5 * 3.0 + fVar8) * fVar8 + fVar5 * fVar5;
    pfVar3[0x1c] = fVar5;
    pfVar3[0x1d] = fVar5 * fVar10;
    fVar6 = fVar12 * fVar12 * fVar13 * fVar13 * 4.0 * fVar5;
    pfVar3[0x1e] = fVar6 + fVar5 * fVar5;
    pfVar3[0x1f] = ((fVar5 + fVar5) * fVar5 + fVar6) * fVar10;
    pfVar3 = pfVar3 + 0x20;
    if (*(char *)(param_2 + 0x20) != '\0') goto LAB_1431aa129;
    uVar4 = *(uint *)(param_2 + 0x1c);
  }
  fVar6 = fVar12 * fVar10;
  if ((uVar4 & 2) != 0) {
    pfVar3[1] = fVar12;
    pfVar3[3] = fVar12;
    *pfVar3 = 0.0;
    pfVar3[2] = 0.0;
    pfVar3[4] = fVar12;
    pfVar3[6] = fVar12;
    pfVar3[5] = fVar6 + fVar14;
    pfVar3[7] = fVar6 + fVar14;
    fVar8 = fVar13 * fVar12 * fVar12 * 4.0;
    pfVar3[8] = fVar14;
    pfVar3[10] = fVar14;
    fVar7 = fVar8 + fVar12;
    fVar13 = fVar13 * fVar8 + fVar5;
    pfVar3[9] = fVar7;
    pfVar3[0xb] = fVar7;
    pfVar3[0xc] = fVar12;
    pfVar3[0xd] = fVar6;
    pfVar3[0xe] = fVar12;
    pfVar3[0xf] = fVar6;
    pfVar3[0x11] = fVar13;
    pfVar3[0x13] = fVar13;
    pfVar3[0x10] = fVar10;
    pfVar3[0x12] = fVar10;
    pfVar3[0x14] = fVar5;
    pfVar3[0x15] = fVar5 * fVar10;
    pfVar3[0x16] = fVar5;
    pfVar3[0x17] = fVar5 * fVar10;
    pfVar3 = pfVar3 + 0x18;
    uVar4 = *(uint *)(param_2 + 0x1c);
  }
  if (3 < uVar4) {
    *pfVar3 = fVar12;
    pfVar3[1] = fVar14;
    pfVar3[2] = fVar12;
    pfVar3[3] = fVar10;
    pfVar3[4] = fVar5;
  }
LAB_1431aa129:
  return *(char *)((longlong)param_1 + 0xd);
}



// FUNCTION 1431aa1e0 _ManageBQFChange<AkLpfParamEval> body=1043 status=ok
// SIG undefined _ManageBQFChange<AkLpfParamEval>(void)

char _ManageBQFChange<AkLpfParamEval>(float *param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  float *pfVar3;
  uint uVar4;
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
  
  if (*(char *)((longlong)param_1 + 0xb) == '\0') {
    return *(char *)((longlong)param_1 + 0xd);
  }
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  if (*(char *)(param_1 + 3) == '\0') {
    if ((0.1 < *param_1) || (0.1 < param_1[1])) {
      cVar2 = '\0';
      *(undefined1 *)((longlong)param_1 + 10) = 0;
    }
    else {
      cVar2 = '\x01';
    }
    if (cVar2 != *(char *)((longlong)param_1 + 0xd)) {
      *(undefined1 *)((longlong)param_1 + 0xe) = 0;
    }
    *(char *)((longlong)param_1 + 0xd) = cVar2;
    if (cVar2 != '\0') {
      *(undefined2 *)(param_1 + 2) = DAT_1467bdcbc;
      return cVar2;
    }
    *(undefined2 *)(param_1 + 2) = 0;
    return '\0';
  }
  fVar5 = param_1[1];
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = fVar5;
  *(undefined2 *)(param_1 + 2) = DAT_1467bdcbc;
  bVar1 = fVar5 <= 0.1;
  if (!bVar1) {
    *(undefined1 *)((longlong)param_1 + 10) = 0;
  }
  if (bVar1 != (bool)*(char *)((longlong)param_1 + 0xd)) {
    *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  }
  *(bool *)((longlong)param_1 + 0xd) = bVar1;
  if (bVar1) {
    return '\x01';
  }
  fVar5 = (float)AkLpfParamEval::EvalCutoff(fVar5,DAT_1467bdcb8);
  fVar5 = _guard_xfg_dispatch_icall_nop((3.1415927 / (float)DAT_1467bdcac) * fVar5);
  uVar4 = *(uint *)(param_2 + 0x1c);
  pfVar3 = *(float **)(param_2 + 0x10);
  fVar5 = 1.0 / fVar5;
  fVar6 = fVar5 * fVar5;
  fVar9 = 1.0 / (fVar5 * 1.4142135 + 1.0 + fVar6);
  fVar10 = ((fVar6 + fVar6) - 2.0) * fVar9;
  fVar12 = fVar9 + fVar9;
  fVar5 = -(((1.0 - fVar5 * 1.4142135) + fVar6) * fVar9);
  if (((uVar4 & 1) != 0) || (*(char *)(param_2 + 0x20) != '\0')) {
    *pfVar3 = fVar9;
    pfVar3[1] = fVar9;
    pfVar3[2] = fVar9;
    pfVar3[3] = fVar9;
    pfVar3[4] = 0.0;
    pfVar3[5] = 0.0;
    pfVar3[6] = 0.0;
    fVar13 = fVar10 * fVar9;
    fVar14 = fVar10 * fVar5;
    fVar11 = fVar12 * fVar5;
    fVar7 = fVar5 * fVar9;
    fVar6 = fVar13 + fVar12;
    pfVar3[7] = fVar6;
    pfVar3[10] = fVar6;
    pfVar3[8] = 0.0;
    pfVar3[9] = 0.0;
    fVar8 = fVar6 * fVar10 + fVar9 + fVar7;
    pfVar3[0xb] = fVar8;
    pfVar3[0xd] = fVar6;
    pfVar3[0xe] = fVar8;
    pfVar3[0xc] = 0.0;
    fVar6 = fVar12 * fVar10 + fVar9;
    pfVar3[0xf] = fVar14 * fVar9 + fVar8 * fVar10 + fVar11;
    pfVar3[0x11] = fVar6;
    pfVar3[0x10] = fVar12;
    fVar6 = fVar6 * fVar10 + fVar11;
    pfVar3[0x12] = fVar6;
    pfVar3[0x13] = (fVar11 + fVar6) * fVar10 + fVar7;
    pfVar3[0x14] = fVar9;
    pfVar3[0x15] = fVar13;
    pfVar3[0x16] = fVar7 + fVar13 * fVar10;
    fVar6 = fVar10 * fVar10;
    pfVar3[0x17] = (fVar11 + fVar13 * fVar10) * fVar10;
    pfVar3[0x18] = fVar10;
    pfVar3[0x19] = fVar6 + fVar5;
    pfVar3[0x1a] = (fVar6 + fVar5 + fVar5) * fVar10;
    pfVar3[0x1b] = (fVar5 * 3.0 + fVar6) * fVar10 * fVar10 + fVar5 * fVar5;
    pfVar3[0x1c] = fVar5;
    pfVar3[0x1d] = fVar14;
    pfVar3[0x1e] = fVar5 * fVar5 + fVar14 * fVar10;
    pfVar3[0x1f] = ((fVar5 + fVar5) * fVar5 + fVar14 * fVar10) * fVar10;
    pfVar3 = pfVar3 + 0x20;
    if (*(char *)(param_2 + 0x20) != '\0') goto LAB_1431aa55b;
    uVar4 = *(uint *)(param_2 + 0x1c);
  }
  fVar6 = fVar10 * fVar9;
  if ((uVar4 & 2) != 0) {
    pfVar3[1] = fVar9;
    fVar11 = fVar12 * fVar10 + fVar9;
    pfVar3[3] = fVar9;
    fVar8 = fVar10 * fVar10 + fVar5;
    *pfVar3 = 0.0;
    pfVar3[2] = 0.0;
    pfVar3[4] = fVar9;
    pfVar3[6] = fVar9;
    pfVar3[5] = fVar6 + fVar12;
    pfVar3[7] = fVar6 + fVar12;
    pfVar3[8] = fVar12;
    pfVar3[9] = fVar11;
    pfVar3[10] = fVar12;
    pfVar3[0xb] = fVar11;
    pfVar3[0xc] = fVar9;
    pfVar3[0xd] = fVar6;
    pfVar3[0xe] = fVar9;
    pfVar3[0xf] = fVar6;
    pfVar3[0x10] = fVar10;
    pfVar3[0x11] = fVar8;
    pfVar3[0x12] = fVar10;
    pfVar3[0x13] = fVar8;
    pfVar3[0x14] = fVar5;
    pfVar3[0x15] = fVar10 * fVar5;
    pfVar3[0x16] = fVar5;
    pfVar3[0x17] = fVar10 * fVar5;
    pfVar3 = pfVar3 + 0x18;
    uVar4 = *(uint *)(param_2 + 0x1c);
  }
  if (3 < uVar4) {
    *pfVar3 = fVar9;
    pfVar3[1] = fVar12;
    pfVar3[2] = fVar9;
    pfVar3[3] = fVar10;
    pfVar3[4] = fVar5;
  }
LAB_1431aa55b:
  return *(char *)((longlong)param_1 + 0xd);
}



// FUNCTION 1431aa600 CAkSrcLpHpFilter body=53 status=ok
// SIG undefined CAkSrcLpHpFilter(void)

undefined8 * CAkSrcLpHpFilter::CAkSrcLpHpFilter(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(uint *)(param_1 + 0xe) = *(uint *)(param_1 + 0xe) & 0xff;
  return param_1;
}



// FUNCTION 1431aa640 BypassMono body=354 status=ok
// SIG undefined BypassMono(void)

void CAkSrcLpHpFilter::BypassMono(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  
  lVar8 = *param_1;
  if (((lVar8 != 0) && (param_1[5] != 0)) &&
     (uVar3 = *(ushort *)((longlong)param_2 + 0x12), 1 < uVar3)) {
    lVar11 = (ulonglong)*(ushort *)(param_2 + 2) * (param_3 & 0xffffffff);
    uVar1 = *(undefined4 *)(*param_2 + ((ulonglong)(uVar3 - 1) + lVar11) * 4);
    uVar9 = (uint)param_3;
    uVar12 = uVar9 & 3;
    uVar5 = (uint)(param_3 >> 2);
    uVar10 = uVar5 & 0x3fffffff;
    uVar2 = *(undefined4 *)(*param_2 + ((ulonglong)(uVar3 - 2) + lVar11) * 4);
    uVar4 = *(uint *)((longlong)param_1 + 0x1c);
    if ((uVar4 - 1 == uVar9) && ((uVar4 & 1) != 0)) {
      uVar6 = uVar10;
      if ((uVar4 != 1) && (1 < uVar12)) {
        uVar6 = uVar10 + 1;
      }
      uVar7 = (ulonglong)(uVar6 << 4);
      *(undefined4 *)(lVar8 + uVar7 * 4) = uVar1;
      *(undefined4 *)(*param_1 + 4 + uVar7 * 4) = uVar2;
      *(undefined4 *)(*param_1 + 8 + uVar7 * 4) = uVar1;
      *(undefined4 *)(*param_1 + 0xc + uVar7 * 4) = uVar2;
    }
    else {
      lVar11 = (ulonglong)(uVar5 << 4) + (ulonglong)uVar12;
      *(undefined4 *)(lVar8 + lVar11 * 4) = uVar1;
      *(undefined4 *)(*param_1 + 0x10 + lVar11 * 4) = uVar2;
      *(undefined4 *)(*param_1 + 0x20 + lVar11 * 4) = uVar1;
      *(undefined4 *)(*param_1 + 0x30 + lVar11 * 4) = uVar2;
    }
    uVar4 = *(uint *)((longlong)param_1 + 0x44);
    if ((uVar4 - 1 == uVar9) && ((uVar4 & 1) != 0)) {
      if ((uVar4 != 1) && (1 < uVar12)) {
        uVar10 = uVar10 + 1;
      }
      uVar7 = (ulonglong)(uVar10 << 4);
      *(undefined4 *)(param_1[5] + uVar7 * 4) = uVar1;
      *(undefined4 *)(param_1[5] + 4 + uVar7 * 4) = uVar2;
      *(undefined4 *)(param_1[5] + 8 + uVar7 * 4) = uVar1;
      *(undefined4 *)(param_1[5] + 0xc + uVar7 * 4) = uVar2;
      return;
    }
    lVar8 = (ulonglong)(uVar5 << 4) + (ulonglong)uVar12;
    *(undefined4 *)(param_1[5] + lVar8 * 4) = uVar1;
    *(undefined4 *)(param_1[5] + 0x10 + lVar8 * 4) = uVar2;
    *(undefined4 *)(param_1[5] + 0x20 + lVar8 * 4) = uVar1;
    *(undefined4 *)(param_1[5] + 0x30 + lVar8 * 4) = uVar2;
  }
  return;
}



// FUNCTION 1431aa7b0 Execute body=71 status=ok
// SIG undefined Execute(void)

void CAkSrcLpHpFilter::Execute(longlong *param_1,undefined8 param_2)

{
  if (*param_1 != 0) {
    FUN_1431a7610(param_2,param_1 + 10,param_1);
  }
  if (param_1[5] != 0) {
    FUN_1431a61b0(param_2,param_1 + 0xc,param_1 + 5);
  }
  return;
}



// FUNCTION 1431aa800 ExecuteMono body=188 status=ok
// SIG undefined ExecuteMono(void)

ulonglong CAkSrcLpHpFilter::ExecuteMono
                    (longlong *param_1,longlong *param_2,undefined8 *param_3,uint param_4)

{
  ushort uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if ((*param_1 == 0) || (param_1[5] == 0)) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)*param_3,
               (void *)(*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * (ulonglong)param_4 * 4),
               (ulonglong)*(ushort *)((longlong)param_2 + 0x12) << 2);
  }
  else {
    if (*(char *)((longlong)param_1 + 0x5d) == '\0') {
      uVar1 = _ExecuteMonoOutOfPlace<AkLpfParamEval>();
      uVar2 = (ulonglong)uVar1;
    }
    else {
      _BypassMonoOutOfPlace(param_2,param_3,param_1 + 10,param_1,param_4);
    }
    if (*(char *)((longlong)param_1 + 0x6d) == '\0') {
      uVar2 = _ExecuteMonoInPlace<AkHpfParamEval>();
    }
    else {
      FUN_1431aabf0(param_3,param_1 + 0xc,param_1 + 5,param_4);
    }
  }
  return uVar2;
}



// FUNCTION 1431aa8c0 Init body=225 status=ok
// SIG undefined Init(void)

undefined8
DSP::BiquadFilter<DSP::MultiChannelPolicySIMD>::Init
          (ulonglong *param_1,longlong *param_2,ulonglong param_3,char param_4)

{
  uint uVar1;
  void *_Dst;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = (uint)param_3;
  *(char *)(param_1 + 4) = param_4;
  *(uint *)((longlong)param_1 + 0x1c) = uVar5;
  uVar1 = (uVar5 & 1) + (((uint)(param_3 >> 1) & 1) + ((uint)(param_3 >> 2) & 0x3fffffff)) * 4;
  iVar4 = uVar1 * 0x10;
  if (param_4 == '\0') {
    iVar2 = 0;
    if (3 < uVar5) {
      iVar2 = 0x14;
    }
    iVar2 = (-(uint)((param_3 & 2) != 0) & 0x60) + iVar2 + (uVar5 & 1) * 0x80;
  }
  else {
    iVar2 = 0x80;
  }
  *(int *)(param_1 + 3) = iVar2 + 0xf + iVar4;
  _Dst = (void *)(**(code **)(*param_2 + 8))(param_2);
  param_1[1] = (ulonglong)_Dst;
  if (_Dst != (void *)0x0) {
    ::_guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)(uint)param_1[3]);
    uVar3 = param_1[1] + 0xf & 0xfffffffffffffff0;
    *(int *)(param_1 + 3) = iVar4;
    *param_1 = uVar3;
    param_1[2] = uVar3 + (ulonglong)((uVar1 & 0xfffffff) << 2) * 4;
    return 1;
  }
  return 0x34;
}



// FUNCTION 1431aa9b0 Init body=244 status=ok
// SIG undefined Init(void)

undefined8 CAkSrcLpHpFilter::Init(undefined8 *param_1,uint param_2,undefined1 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  *(uint *)(param_1 + 0xe) = param_2;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xb) = DAT_1467bdcbc;
  *(undefined2 *)((longlong)param_1 + 0x5d) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0x5a) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 1;
  param_1[0xc] = 0;
  *(undefined2 *)(param_1 + 0xd) = DAT_1467bdcbc;
  *(undefined2 *)((longlong)param_1 + 0x6d) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0x6a) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x6c) = 1;
  iVar1 = DSP::BiquadFilter<DSP::MultiChannelPolicySIMD>::Init
                    (param_1,&PTR_PTR_1467be108,param_2 & 0xff,param_3);
  if ((iVar1 != 1) ||
     (uVar2 = DSP::BiquadFilter<DSP::MultiChannelPolicySIMD>::Init
                        (param_1 + 5,&PTR_PTR_1467be108,param_2 & 0xff,param_3), (int)uVar2 != 1)) {
    if (param_1[1] != 0) {
      (**(code **)(PTR_PTR_1467be108 + 0x10))(&PTR_PTR_1467be108);
      *param_1 = 0;
      param_1[1] = 0;
    }
    if (param_1[6] != 0) {
      (**(code **)(PTR_PTR_1467be108 + 0x10))(&PTR_PTR_1467be108);
      param_1[5] = 0;
      param_1[6] = 0;
    }
    uVar2 = 2;
  }
  return uVar2;
}



// FUNCTION 1431aaab0 ManageBQFChange body=129 status=ok
// SIG undefined ManageBQFChange(void)

undefined1 CAkSrcLpHpFilter::ManageBQFChange(longlong *param_1)

{
  char cVar1;
  char cVar2;
  
  if (*param_1 == 0) {
    return 1;
  }
  if (param_1[5] != 0) {
    cVar1 = _ManageBQFChange<AkLpfParamEval>(param_1 + 10,param_1);
    cVar2 = _ManageBQFChange<AkHpfParamEval>(param_1 + 0xc,param_1 + 5);
    if ((cVar2 != '\0') && (cVar1 != '\0')) {
      return 1;
    }
    return 0;
  }
  return 1;
}



// FUNCTION 1431aab40 ResetRamp body=67 status=ok
// SIG undefined ResetRamp(void)

void CAkSrcLpHpFilter::ResetRamp(undefined8 *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x5c) = 1;
  if ((void *)*param_1 != (void *)0x0) {
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,0,(ulonglong)*(uint *)(param_1 + 3));
  }
  *(undefined1 *)((longlong)param_1 + 0x6c) = 1;
  if ((void *)param_1[5] != (void *)0x0) {
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[5],0,(ulonglong)*(uint *)(param_1 + 8));
    return;
  }
  return;
}



// FUNCTION 1431aab90 Term body=93 status=ok
// SIG undefined Term(void)

void CAkSrcLpHpFilter::Term(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    (**(code **)(PTR_PTR_1467be108 + 0x10))(&PTR_PTR_1467be108);
    *param_1 = 0;
    param_1[1] = 0;
  }
  if (param_1[6] != 0) {
    (**(code **)(PTR_PTR_1467be108 + 0x10))(&PTR_PTR_1467be108);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  return;
}



// FUNCTION 1431aabf0 FUN_1431aabf0 body=368 status=ok
// SIG undefined FUN_1431aabf0(void)

void FUN_1431aabf0(longlong *param_1,longlong param_2,longlong *param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  ushort uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  
  uVar1 = *(ushort *)((longlong)param_1 + 0x12);
  if (1 < uVar1) {
    if (*(char *)(param_2 + 0xe) == '\0') {
      *(undefined1 *)(param_2 + 0xe) = 1;
      lVar3 = *param_1;
      uVar2 = *(uint *)((longlong)param_3 + 0x1c);
      uVar5 = param_4 >> 2;
      if ((uVar2 - 1 == param_4) && ((uVar2 & 1) != 0)) {
        if ((uVar2 != 1) && (1 < (param_4 & 3))) {
          uVar5 = uVar5 + 1;
        }
        lVar8 = *param_3;
        uVar6 = (ulonglong)(uVar5 << 4);
        fVar10 = *(float *)(lVar8 + 8 + uVar6 * 4);
      }
      else {
        uVar6 = (ulonglong)(uVar5 << 4) + (ulonglong)(param_4 & 3);
        lVar8 = *param_3;
        fVar10 = *(float *)(lVar8 + 0x20 + uVar6 * 4);
      }
      uVar4 = 0;
      fVar10 = fVar10 - *(float *)(lVar8 + uVar6 * 4);
      fVar11 = fVar10 / (float)uVar1;
      if (uVar1 != 0) {
        do {
          uVar6 = (ulonglong)uVar4;
          uVar4 = uVar4 + 1;
          *(float *)(lVar3 + uVar6 * 4) = fVar10 + *(float *)(lVar3 + uVar6 * 4);
          fVar10 = fVar10 - fVar11;
        } while ((uint)uVar4 < (uint)uVar1);
      }
    }
    uVar2 = *(uint *)((longlong)param_3 + 0x1c);
    lVar3 = *param_1;
    uVar6 = (ulonglong)(uVar1 - 2);
    uVar5 = param_4 >> 2;
    uVar9 = (ulonglong)(uVar1 - 1);
    if ((uVar2 - 1 == param_4) && ((uVar2 & 1) != 0)) {
      if ((uVar2 != 1) && (1 < (param_4 & 3))) {
        uVar5 = uVar5 + 1;
      }
      uVar7 = (ulonglong)(uVar5 << 4);
      *(undefined4 *)(*param_3 + uVar7 * 4) = *(undefined4 *)(lVar3 + uVar9 * 4);
      *(undefined4 *)(*param_3 + 4 + uVar7 * 4) = *(undefined4 *)(lVar3 + uVar6 * 4);
      *(undefined4 *)(*param_3 + 8 + uVar7 * 4) = *(undefined4 *)(lVar3 + uVar9 * 4);
      *(undefined4 *)(*param_3 + 0xc + uVar7 * 4) = *(undefined4 *)(lVar3 + uVar6 * 4);
      return;
    }
    lVar8 = (ulonglong)(uVar5 << 4) + (ulonglong)(param_4 & 3);
    *(undefined4 *)(*param_3 + lVar8 * 4) = *(undefined4 *)(lVar3 + uVar9 * 4);
    *(undefined4 *)(*param_3 + 0x10 + lVar8 * 4) = *(undefined4 *)(lVar3 + uVar6 * 4);
    *(undefined4 *)(*param_3 + 0x20 + lVar8 * 4) = *(undefined4 *)(lVar3 + uVar9 * 4);
    *(undefined4 *)(*param_3 + 0x30 + lVar8 * 4) = *(undefined4 *)(lVar3 + uVar6 * 4);
  }
  return;
}



// FUNCTION 1431aad60 _BypassMonoOutOfPlace body=483 status=ok
// SIG undefined _BypassMonoOutOfPlace(void)

void _BypassMonoOutOfPlace
               (longlong *param_1,longlong *param_2,longlong param_3,longlong *param_4,uint param_5)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ushort uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar1 = *(ushort *)((longlong)param_1 + 0x12);
  if (1 < uVar1) {
    uVar8 = (ulonglong)param_5;
    if (*(char *)(param_3 + 0xe) == '\0') {
      *(undefined1 *)(param_3 + 0xe) = 1;
      lVar4 = *param_1;
      uVar2 = *(ushort *)(param_1 + 2);
      uVar3 = *(uint *)((longlong)param_4 + 0x1c);
      lVar10 = *param_2;
      uVar7 = param_5 >> 2;
      if ((uVar3 - 1 == param_5) && ((uVar3 & 1) != 0)) {
        if ((uVar3 != 1) && (1 < (param_5 & 3))) {
          uVar7 = uVar7 + 1;
        }
        fVar14 = *(float *)(*param_4 + (ulonglong)(uVar7 << 4) * 4);
        fVar13 = *(float *)(*param_4 + 8 + (ulonglong)(uVar7 << 4) * 4);
      }
      else {
        lVar11 = (ulonglong)(param_5 & 3) + (ulonglong)(uVar7 << 4);
        fVar14 = *(float *)(*param_4 + lVar11 * 4);
        fVar13 = *(float *)(*param_4 + 0x20 + lVar11 * 4);
      }
      fVar13 = fVar13 - fVar14;
      uVar6 = 0;
      fVar14 = fVar13 / (float)uVar1;
      if (uVar1 != 0) {
        do {
          uVar5 = (ulonglong)uVar6;
          uVar6 = uVar6 + 1;
          fVar12 = *(float *)(lVar4 + uVar2 * uVar8 * 4 + uVar5 * 4) - fVar13;
          fVar13 = fVar13 + fVar14;
          *(float *)(lVar10 + uVar5 * 4) = fVar12;
        } while (uVar6 < uVar1);
      }
    }
    else {
      _guard_xfg_dispatch_icall_nop
                ((void *)*param_2,(void *)(*param_1 + *(ushort *)(param_1 + 2) * uVar8 * 4),
                 (ulonglong)((uint)uVar1 * 4));
    }
    uVar3 = *(uint *)((longlong)param_4 + 0x1c);
    lVar4 = *param_1;
    lVar10 = (ulonglong)(uVar1 - 2) + *(ushort *)(param_1 + 2) * uVar8;
    lVar11 = (ulonglong)(uVar1 - 1) + *(ushort *)(param_1 + 2) * uVar8;
    uVar7 = param_5 >> 2;
    if ((uVar3 - 1 == param_5) && ((uVar3 & 1) != 0)) {
      if ((uVar3 != 1) && (1 < (param_5 & 3))) {
        uVar7 = uVar7 + 1;
      }
      uVar8 = (ulonglong)(uVar7 << 4);
      *(undefined4 *)(*param_4 + uVar8 * 4) = *(undefined4 *)(lVar4 + lVar11 * 4);
      *(undefined4 *)(*param_4 + 4 + uVar8 * 4) = *(undefined4 *)(lVar4 + lVar10 * 4);
      *(undefined4 *)(*param_4 + 8 + uVar8 * 4) = *(undefined4 *)(lVar4 + lVar11 * 4);
      *(undefined4 *)(*param_4 + 0xc + uVar8 * 4) = *(undefined4 *)(lVar4 + lVar10 * 4);
      return;
    }
    lVar9 = (ulonglong)(uVar7 << 4) + (ulonglong)(param_5 & 3);
    *(undefined4 *)(*param_4 + lVar9 * 4) = *(undefined4 *)(lVar4 + lVar11 * 4);
    *(undefined4 *)(*param_4 + 0x10 + lVar9 * 4) = *(undefined4 *)(lVar4 + lVar10 * 4);
    *(undefined4 *)(*param_4 + 0x20 + lVar9 * 4) = *(undefined4 *)(lVar4 + lVar11 * 4);
    *(undefined4 *)(*param_4 + 0x30 + lVar9 * 4) = *(undefined4 *)(lVar4 + lVar10 * 4);
  }
  return;
}



// FUNCTION 1431aaf50 FUN_1431aaf50 body=98 status=ok
// SIG undefined FUN_1431aaf50(void)

undefined8 * FUN_1431aaf50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_145acc698;
  uVar1 = param_2[1];
  param_1[3] = *param_2;
  param_1[4] = uVar1;
  uVar1 = param_2[3];
  param_1[5] = param_2[2];
  param_1[6] = uVar1;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  lVar3 = 0;
  param_1[9] = 0;
  param_1[7] = uVar1;
  param_1[8] = uVar2;
  if (DAT_146b51fd8 == (undefined8 *)0x0) {
    DAT_146b51fd8 = param_1;
    param_1[1] = 0;
  }
  else {
    param_1[1] = DAT_146b51fd8;
    lVar3 = param_1[1];
    DAT_146b51fd8 = param_1;
  }
  param_1[2] = 0;
  if (lVar3 != 0) {
    *(undefined8 **)(lVar3 + 0x10) = param_1;
  }
  return param_1;
}



// FUNCTION 1431aafc0 CAkRTPCSubscriberNode body=22 status=ok
// SIG undefined CAkRTPCSubscriberNode(void)

undefined8 * CAkRTPCSubscriberNode::CAkRTPCSubscriberNode(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &PTR_PushParamUpdate_145ac7228;
  return param_1;
}



// FUNCTION 1431aafe0 FUN_1431aafe0 body=38 status=ok
// SIG undefined FUN_1431aafe0(void)

undefined8 * FUN_1431aafe0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  *param_1 = *(undefined8 *)(param_3 + 0x18);
  param_1[1] = uVar1;
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  param_1[2] = *(undefined8 *)(param_3 + 0x28);
  param_1[3] = uVar1;
  uVar1 = *(undefined8 *)(param_3 + 0x38);
  uVar2 = *(undefined8 *)(param_3 + 0x40);
  param_1[6] = param_2;
  param_1[7] = param_3;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  return param_1;
}



// FUNCTION 1431ab010 FUN_1431ab010 body=130 status=ok
// SIG undefined FUN_1431ab010(void)

void FUN_1431ab010(undefined8 *param_1)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = 0xffffffffffffffff;
  *param_1 = &PTR_FUN_145acc698;
  if (param_1[9] != 0) {
    CAkParameterNodeBase::UnregisterParameterTarget(param_1[9],param_1,local_res8,1);
    param_1[9] = 0;
  }
  if (param_1[1] != 0) {
    *(undefined8 *)(param_1[1] + 0x10) = param_1[2];
  }
  if (param_1[2] != 0) {
    *(undefined8 *)(param_1[2] + 8) = param_1[1];
    return;
  }
  if (DAT_146b51fd8 != 0) {
    DAT_146b51fd8 = *(longlong *)(DAT_146b51fd8 + 8);
  }
  return;
}



// FUNCTION 1431ab0a0 ~CAkRTPCSubscriberNode body=202 status=ok
// SIG undefined ~CAkRTPCSubscriberNode(void)

void CAkRTPCSubscriberNode::~CAkRTPCSubscriberNode(undefined8 *param_1)

{
  ulonglong uVar1;
  long lVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  
  puVar3 = (ulonglong *)param_1[1];
  *param_1 = &PTR_PushParamUpdate_145ac7228;
  if (puVar3 != (ulonglong *)0x0) {
    uVar4 = 0;
    uVar1 = *puVar3;
    lVar2 = g_DefaultPoolId;
    while (g_DefaultPoolId = lVar2, uVar1 != 0) {
      if ((uVar1 >> (uVar4 & 0x3f) & 1) != 0) {
        CAkRTPCMgr::UnSubscribeRTPC(g_pRTPCMgr,param_1,uVar4);
        *(ulonglong *)param_1[1] = *(ulonglong *)param_1[1] & ~(1L << (uVar4 & 0x3f));
        puVar3 = (ulonglong *)param_1[1];
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      lVar2 = g_DefaultPoolId;
      uVar1 = *puVar3;
    }
    if (puVar3 != (ulonglong *)0x0) {
      if ((void *)puVar3[2] != (void *)0x0) {
        *(undefined4 *)(puVar3 + 3) = 0;
        AK::MemoryMgr::Free(g_DefaultPoolId,(void *)puVar3[2]);
        puVar3[2] = 0;
        *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
      }
      AK::MemoryMgr::Free(lVar2,puVar3);
    }
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 1431ab170 FUN_1431ab170 body=159 status=ok
// SIG undefined FUN_1431ab170(void)

undefined8 * FUN_1431ab170(undefined8 *param_1,uint param_2)

{
  undefined8 local_res8;
  
  local_res8 = 0xffffffffffffffff;
  *param_1 = &PTR_FUN_145acc698;
  if (param_1[9] != 0) {
    CAkParameterNodeBase::UnregisterParameterTarget(param_1[9],param_1,&local_res8,1);
    param_1[9] = 0;
  }
  if (param_1[1] != 0) {
    *(undefined8 *)(param_1[1] + 0x10) = param_1[2];
  }
  if (param_1[2] == 0) {
    if (DAT_146b51fd8 != 0) {
      DAT_146b51fd8 = *(longlong *)(DAT_146b51fd8 + 8);
    }
  }
  else {
    *(undefined8 *)(param_1[2] + 8) = param_1[1];
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1431ab210 CreateData body=148 status=ok
// SIG undefined CreateData(void)

bool CAkRTPCSubscriberNode::CreateData(longlong param_1)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    return true;
  }
  puVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x28);
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = 0;
    *puVar2 = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 4) = 0;
    puVar2[1] = 0xffffffffffffffff;
    if ((ulonglong)*(uint *)(puVar2 + 3) != 0) {
      do {
        puVar1 = (ulonglong *)(lVar3 + 0x30);
        lVar3 = lVar3 + 0x40;
        puVar2[1] = puVar2[1] & *puVar1;
      } while (lVar3 != (ulonglong)*(uint *)(puVar2 + 3) * 0x40);
      *(undefined8 **)(param_1 + 8) = puVar2;
      return puVar2 != (undefined8 *)0x0;
    }
  }
  *(undefined8 **)(param_1 + 8) = puVar2;
  return puVar2 != (undefined8 *)0x0;
}



// FUNCTION 1431ab2b0 DestroyData body=111 status=ok
// SIG undefined DestroyData(void)

void CAkRTPCSubscriberNode::DestroyData(longlong param_1)

{
  void *pvVar1;
  long lVar2;
  
  lVar2 = g_DefaultPoolId;
  pvVar1 = *(void **)(param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    if (*(void **)((longlong)pvVar1 + 0x10) != (void *)0x0) {
      *(undefined4 *)((longlong)pvVar1 + 0x18) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)((longlong)pvVar1 + 0x10));
      *(undefined8 *)((longlong)pvVar1 + 0x10) = 0;
      *(undefined4 *)((longlong)pvVar1 + 0x1c) = 0;
    }
    AK::MemoryMgr::Free(lVar2,pvVar1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 1431ab320 EnableParam body=145 status=ok
// SIG undefined EnableParam(void)

undefined8 CAkRTPCSubscriberNode::EnableParam(longlong param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  cVar3 = CreateData();
  if (cVar3 != '\0') {
    uVar1 = **(ulonglong **)(param_1 + 8);
    if ((uVar1 >> ((longlong)param_2 & 0x3fU) & 1) == 0) {
      **(ulonglong **)(param_1 + 8) = uVar1 | 1L << ((longlong)param_2 & 0x3fU);
      FUN_1431ac180();
      lVar2 = *(longlong *)(param_1 + 8);
      *(undefined8 *)(lVar2 + 8) = 0xffffffffffffffff;
      lVar4 = *(longlong *)(lVar2 + 0x10);
      lVar5 = (ulonglong)*(uint *)(lVar2 + 0x18) * 0x40 + lVar4;
      for (; lVar4 != lVar5; lVar4 = lVar4 + 0x40) {
        *(ulonglong *)(lVar2 + 8) = *(ulonglong *)(lVar2 + 8) & *(ulonglong *)(lVar4 + 0x30);
      }
    }
    return 1;
  }
  return 2;
}



// FUNCTION 1431ab3c0 FindArrayPos body=271 status=ok
// SIG undefined FindArrayPos(void)

longlong *
AkSortedParamTrtArray::FindArrayPos(longlong *param_1,longlong *param_2,ulonglong *param_3)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  ulonglong *puVar5;
  int iVar6;
  int iVar7;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    *param_2 = 0;
    return param_2;
  }
  iVar7 = (int)param_1[1];
  if (0 < iVar7) {
    iVar6 = 0;
    do {
      iVar4 = (iVar7 + iVar6) / 2;
      puVar5 = (ulonglong *)((longlong)iVar4 * 0x40 + lVar1);
      if (*puVar5 < *param_3) {
LAB_1431ab47c:
        bVar3 = true;
      }
      else {
        if (*puVar5 == *param_3) {
          if ((uint)puVar5[1] < (uint)param_3[1]) goto LAB_1431ab47c;
          if ((uint)puVar5[1] == (uint)param_3[1]) {
            if ((uint)puVar5[2] < (uint)param_3[2]) goto LAB_1431ab47c;
            if ((uint)puVar5[2] == (uint)param_3[2]) {
              if (((char)puVar5[3] + 1U & 0x1f) < ((char)param_3[3] + 1U & 0x1f))
              goto LAB_1431ab47c;
              if ((char)puVar5[3] == (char)param_3[3]) {
                if (((byte)((char)puVar5[4] + 1U) < (byte)((char)param_3[4] + 1U)) ||
                   (((char)puVar5[4] == (char)param_3[4] && (puVar5[5] < param_3[5]))))
                goto LAB_1431ab47c;
              }
            }
          }
        }
        bVar3 = false;
      }
      iVar2 = iVar4 + 1;
      if (!bVar3) {
        iVar7 = iVar4;
        iVar2 = iVar6;
      }
      iVar6 = iVar2;
    } while (iVar2 < iVar7);
  }
  *param_2 = (longlong)iVar7 * 0x40 + lVar1;
  return param_2;
}



// FUNCTION 1431ab4d0 FUN_1431ab4d0 body=27 status=ok
// SIG undefined FUN_1431ab4d0(void)

undefined8 FUN_1431ab4d0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  AkSortedParamTrtArray::FindArrayPos(param_1,param_2,param_3 + 0x18);
  return param_2;
}



// FUNCTION 1431ab4f0 FUN_1431ab4f0 body=192 status=ok
// SIG undefined FUN_1431ab4f0(void)

void FUN_1431ab4f0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  
  local_18 = 0;
  uStack_14 = 0x3f800000;
  local_10 = 0x39;
  cVar3 = FUN_14313a5d0(DAT_146b50ae0,param_1,param_3,param_4,param_5,&local_18);
  if ((cVar3 != '\0') &&
     ((uVar2 = *(uint *)(param_2 + 1), uVar2 < *(uint *)((longlong)param_2 + 0xc) ||
      ((cVar3 = FUN_143193070(param_2,1), cVar3 != '\0' &&
       (uVar2 < *(uint *)((longlong)param_2 + 0xc))))))) {
    puVar1 = (undefined8 *)(*param_2 + (ulonglong)*(uint *)(param_2 + 1) * 0xc);
    *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) + 1;
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined4 *)puVar1 = 0;
      *(undefined4 *)((longlong)puVar1 + 4) = 0x3f800000;
      *(undefined4 *)(puVar1 + 1) = 0x39;
      *puVar1 = CONCAT44(uStack_14,local_18);
      *(undefined4 *)(puVar1 + 1) = local_10;
    }
  }
  return;
}



// FUNCTION 1431ab5b0 NotifyParamChanged body=126 status=ok
// SIG undefined NotifyParamChanged(void)

void CAkRTPCSubscriberNode::NotifyParamChanged
               (longlong param_1,undefined1 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
  if (lVar1 != (ulonglong)*(uint *)(*(longlong *)(param_1 + 8) + 0x18) * 0x40 + lVar1) {
    do {
      (**(code **)(**(longlong **)(lVar1 + 0x38) + 0x10))
                (*(longlong **)(lVar1 + 0x38),param_2,param_3);
      lVar1 = lVar1 + 0x40;
    } while (lVar1 != (ulonglong)*(uint *)(*(longlong *)(param_1 + 8) + 0x18) * 0x40 +
                      *(longlong *)(*(longlong *)(param_1 + 8) + 0x10));
  }
  return;
}



// FUNCTION 1431ab630 NotifyParamsChanged body=126 status=ok
// SIG undefined NotifyParamsChanged(void)

void CAkRTPCSubscriberNode::NotifyParamsChanged
               (longlong param_1,undefined1 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
  if (lVar1 != (ulonglong)*(uint *)(*(longlong *)(param_1 + 8) + 0x18) * 0x40 + lVar1) {
    do {
      (**(code **)(**(longlong **)(lVar1 + 0x38) + 0x18))
                (*(longlong **)(lVar1 + 0x38),param_2,param_3);
      lVar1 = lVar1 + 0x40;
    } while (lVar1 != (ulonglong)*(uint *)(*(longlong *)(param_1 + 8) + 0x18) * 0x40 +
                      *(longlong *)(*(longlong *)(param_1 + 8) + 0x10));
  }
  return;
}



// FUNCTION 1431ab6b0 PushParamUpdate body=473 status=ok
// SIG undefined PushParamUpdate(void)

void CAkRTPCSubscriberNode::PushParamUpdate
               (longlong param_1,undefined4 param_2,longlong *param_3,undefined4 param_4,
               undefined4 param_5,undefined8 *param_6)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (((((*param_3 == 0) && ((int)param_3[1] == 0)) && ((int)param_3[2] == 0)) &&
      (((char)param_3[3] == -1 && ((char)param_3[4] == -1)))) && (param_3[5] == 0)) {
    lVar5 = *(longlong *)(param_1 + 8);
    lVar3 = *(longlong *)(lVar5 + 0x10);
    uVar4 = 1L << ((byte)param_2 & 0x3f);
    uVar2 = *(ulonglong *)(lVar5 + 8) & uVar4;
    lVar5 = (ulonglong)*(uint *)(lVar5 + 0x18) * 0x40 + lVar3;
    if (param_6 == (undefined8 *)0x0) {
      if (lVar3 != lVar5) {
        if (uVar2 == 0) {
          do {
            if ((*(ulonglong *)(lVar3 + 0x30) & uVar4) != 0) {
              (**(code **)(**(longlong **)(lVar3 + 0x38) + 8))
                        (*(longlong **)(lVar3 + 0x38),param_2,param_4,param_5);
            }
            lVar3 = lVar3 + 0x40;
          } while (lVar3 != lVar5);
        }
        else {
          do {
            (**(code **)(**(longlong **)(lVar3 + 0x38) + 8))
                      (*(longlong **)(lVar3 + 0x38),param_2,param_4,param_5);
            lVar3 = lVar3 + 0x40;
          } while (lVar3 != lVar5);
        }
      }
    }
    else if (lVar3 != lVar5) {
      if (uVar2 == 0) {
        do {
          if (((*(ulonglong *)(lVar3 + 0x30) & uVar4) != 0) &&
             (cVar1 = (**(code **)*param_6)(param_6,lVar3), cVar1 == '\0')) {
            (**(code **)(**(longlong **)(lVar3 + 0x38) + 8))
                      (*(longlong **)(lVar3 + 0x38),param_2,param_4,param_5);
          }
          lVar3 = lVar3 + 0x40;
        } while (lVar3 != lVar5);
      }
      else {
        do {
          cVar1 = (**(code **)*param_6)(param_6,lVar3);
          if (cVar1 == '\0') {
            (**(code **)(**(longlong **)(lVar3 + 0x38) + 8))
                      (*(longlong **)(lVar3 + 0x38),param_2,param_4,param_5);
          }
          lVar3 = lVar3 + 0x40;
        } while (lVar3 != lVar5);
      }
    }
    return;
  }
  if (param_6 != (undefined8 *)0x0) {
    PushParamUpdate_ScopedExcept();
    return;
  }
  PushParamUpdate_Scoped();
  return;
}



// FUNCTION 1431ab890 PushParamUpdate_All body=189 status=ok
// SIG undefined PushParamUpdate_All(void)

void CAkRTPCSubscriberNode::PushParamUpdate_All
               (longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = 1L << ((byte)param_2 & 0x3f);
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)(lVar1 + 0x10);
  lVar4 = (ulonglong)*(uint *)(lVar1 + 0x18) * 0x40 + lVar2;
  if (lVar2 != lVar4) {
    if ((*(ulonglong *)(lVar1 + 8) & uVar3) == 0) {
      do {
        if ((*(ulonglong *)(lVar2 + 0x30) & uVar3) != 0) {
          (**(code **)(**(longlong **)(lVar2 + 0x38) + 8))
                    (*(longlong **)(lVar2 + 0x38),param_2,param_3,param_4);
        }
        lVar2 = lVar2 + 0x40;
      } while (lVar2 != lVar4);
    }
    else {
      do {
        (**(code **)(**(longlong **)(lVar2 + 0x38) + 8))
                  (*(longlong **)(lVar2 + 0x38),param_2,param_3,param_4);
        lVar2 = lVar2 + 0x40;
      } while (lVar2 != lVar4);
    }
  }
  return;
}



// FUNCTION 1431ab950 PushParamUpdate_Scoped body=452 status=ok
// SIG undefined PushParamUpdate_Scoped(void)

void CAkRTPCSubscriberNode::PushParamUpdate_Scoped
               (longlong param_1,undefined4 param_2,longlong *param_3,undefined4 param_4,
               undefined4 param_5)

{
  longlong *plVar1;
  char *pcVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  ulonglong uVar6;
  char *local_res8;
  
  lVar3 = *(longlong *)(param_1 + 8);
  uVar6 = 1L << ((byte)param_2 & 0x3f);
  plVar1 = (longlong *)(lVar3 + 0x10);
  if ((*(ulonglong *)(lVar3 + 8) & uVar6) == 0) {
    AkSortedParamTrtArray::FindArrayPos(plVar1,&local_res8);
    pcVar4 = (char *)((ulonglong)*(uint *)(lVar3 + 0x18) * 0x40 + *plVar1);
    if (local_res8 != pcVar4) {
      pcVar5 = local_res8 + 0x20;
      do {
        if ((*param_3 != 0) && (*(longlong *)(pcVar5 + -0x20) != *param_3)) {
          return;
        }
        if (((int)param_3[1] != 0) && (*(int *)(pcVar5 + -0x18) != (int)param_3[1])) {
          return;
        }
        if (((int)param_3[2] != 0) && (*(int *)(pcVar5 + -0x10) != (int)param_3[2])) {
          return;
        }
        if (((char)param_3[3] != -1) && (pcVar5[-8] != (char)param_3[3])) {
          return;
        }
        if (((char)param_3[4] != -1) && (*pcVar5 != (char)param_3[4])) {
          return;
        }
        if ((param_3[5] != 0) && (*(longlong *)(pcVar5 + 8) != param_3[5])) {
          return;
        }
        if ((*(ulonglong *)(pcVar5 + 0x10) & uVar6) != 0) {
          (**(code **)(**(longlong **)(pcVar5 + 0x18) + 8))
                    (*(longlong **)(pcVar5 + 0x18),param_2,param_4,param_5);
        }
        pcVar2 = pcVar5 + 0x20;
        pcVar5 = pcVar5 + 0x40;
      } while (pcVar2 != pcVar4);
    }
  }
  else {
    AkSortedParamTrtArray::FindArrayPos(plVar1,&local_res8);
    pcVar4 = (char *)((ulonglong)*(uint *)(lVar3 + 0x18) * 0x40 + *plVar1);
    if (local_res8 != pcVar4) {
      pcVar5 = local_res8 + 0x20;
      do {
        if ((*param_3 != 0) && (*(longlong *)(pcVar5 + -0x20) != *param_3)) {
          return;
        }
        if (((int)param_3[1] != 0) && (*(int *)(pcVar5 + -0x18) != (int)param_3[1])) {
          return;
        }
        if (((int)param_3[2] != 0) && (*(int *)(pcVar5 + -0x10) != (int)param_3[2])) {
          return;
        }
        if (((char)param_3[3] != -1) && (pcVar5[-8] != (char)param_3[3])) {
          return;
        }
        if (((char)param_3[4] != -1) && (*pcVar5 != (char)param_3[4])) {
          return;
        }
        if ((param_3[5] != 0) && (*(longlong *)(pcVar5 + 8) != param_3[5])) {
          return;
        }
        (**(code **)(**(longlong **)(pcVar5 + 0x18) + 8))
                  (*(longlong **)(pcVar5 + 0x18),param_2,param_4,param_5);
        pcVar2 = pcVar5 + 0x20;
        pcVar5 = pcVar5 + 0x40;
      } while (pcVar2 != pcVar4);
    }
  }
  return;
}



// FUNCTION 1431abb20 PushParamUpdate_ScopedExcept body=520 status=ok
// SIG undefined PushParamUpdate_ScopedExcept(void)

void CAkRTPCSubscriberNode::PushParamUpdate_ScopedExcept
               (longlong param_1,undefined4 param_2,longlong *param_3,undefined8 *param_4,
               undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  char *pcVar2;
  longlong lVar3;
  char cVar4;
  char *pcVar5;
  char *pcVar6;
  ulonglong uVar7;
  char *local_res8;
  
  lVar3 = *(longlong *)(param_1 + 8);
  uVar7 = 1L << ((byte)param_2 & 0x3f);
  plVar1 = (longlong *)(lVar3 + 0x10);
  if ((*(ulonglong *)(lVar3 + 8) & uVar7) == 0) {
    AkSortedParamTrtArray::FindArrayPos(plVar1,&local_res8);
    pcVar5 = (char *)((ulonglong)*(uint *)(lVar3 + 0x18) * 0x40 + *plVar1);
    if (local_res8 != pcVar5) {
      pcVar6 = local_res8 + 0x20;
      do {
        if ((*param_3 != 0) && (*(longlong *)(pcVar6 + -0x20) != *param_3)) {
          return;
        }
        if (((int)param_3[1] != 0) && (*(int *)(pcVar6 + -0x18) != (int)param_3[1])) {
          return;
        }
        if (((int)param_3[2] != 0) && (*(int *)(pcVar6 + -0x10) != (int)param_3[2])) {
          return;
        }
        if (((char)param_3[3] != -1) && (pcVar6[-8] != (char)param_3[3])) {
          return;
        }
        if (((char)param_3[4] != -1) && (*pcVar6 != (char)param_3[4])) {
          return;
        }
        if ((param_3[5] != 0) && (*(longlong *)(pcVar6 + 8) != param_3[5])) {
          return;
        }
        if (((*(ulonglong *)(pcVar6 + 0x10) & uVar7) != 0) &&
           (cVar4 = (**(code **)*param_4)(param_4,pcVar6 + -0x20), cVar4 == '\0')) {
          (**(code **)(**(longlong **)(pcVar6 + 0x18) + 8))
                    (*(longlong **)(pcVar6 + 0x18),param_2,param_5,param_6);
        }
        pcVar2 = pcVar6 + 0x20;
        pcVar6 = pcVar6 + 0x40;
      } while (pcVar2 != pcVar5);
    }
  }
  else {
    AkSortedParamTrtArray::FindArrayPos(plVar1,&local_res8);
    pcVar5 = (char *)((ulonglong)*(uint *)(lVar3 + 0x18) * 0x40 + *plVar1);
    if (local_res8 != pcVar5) {
      pcVar6 = local_res8 + 0x20;
      do {
        if ((*param_3 != 0) && (*(longlong *)(pcVar6 + -0x20) != *param_3)) {
          return;
        }
        if (((int)param_3[1] != 0) && (*(int *)(pcVar6 + -0x18) != (int)param_3[1])) {
          return;
        }
        if (((int)param_3[2] != 0) && (*(int *)(pcVar6 + -0x10) != (int)param_3[2])) {
          return;
        }
        if (((char)param_3[3] != -1) && (pcVar6[-8] != (char)param_3[3])) {
          return;
        }
        if (((char)param_3[4] != -1) && (*pcVar6 != (char)param_3[4])) {
          return;
        }
        if ((param_3[5] != 0) && (*(longlong *)(pcVar6 + 8) != param_3[5])) {
          return;
        }
        cVar4 = (**(code **)*param_4)(param_4,pcVar6 + -0x20);
        if (cVar4 == '\0') {
          (**(code **)(**(longlong **)(pcVar6 + 0x18) + 8))
                    (*(longlong **)(pcVar6 + 0x18),param_2,param_5,param_6);
        }
        pcVar2 = pcVar6 + 0x20;
        pcVar6 = pcVar6 + 0x40;
      } while (pcVar2 != pcVar5);
    }
  }
  return;
}



// FUNCTION 1431abd30 FUN_1431abd30 body=54 status=ok
// SIG undefined FUN_1431abd30(void)

void FUN_1431abd30(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (FUN_143177360(param_2,param_1), *(longlong *)(param_1 + 0x48) == 0)) {
    *(longlong *)(param_1 + 0x48) = param_2;
  }
  return;
}



// FUNCTION 1431abd70 FUN_1431abd70 body=270 status=ok
// SIG undefined FUN_1431abd70(void)

ulonglong FUN_1431abd70(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *local_res8;
  
  AkSortedParamTrtArray::FindArrayPos(param_1,&local_res8,param_2 + 0x18);
  uVar4 = *(uint *)(param_1 + 1);
  plVar3 = (longlong *)((ulonglong)uVar4 * 0x40 + *param_1);
  if (local_res8 != plVar3) {
    plVar2 = local_res8 + 4;
    do {
      if ((((*local_res8 != *(longlong *)(param_2 + 0x18)) ||
           ((int)plVar2[-3] != *(int *)(param_2 + 0x20))) ||
          ((int)plVar2[-2] != *(int *)(param_2 + 0x28))) ||
         ((((char)plVar2[-1] != *(char *)(param_2 + 0x30) ||
           ((char)*plVar2 != *(char *)(param_2 + 0x38))) ||
          (plVar2[1] != *(longlong *)(param_2 + 0x40))))) break;
      if (plVar2[3] == param_2) {
        if (local_res8 < plVar3 + -8) {
          plVar2 = local_res8 + 0xf;
          do {
            plVar2[-0xf] = plVar2[-7];
            plVar2[-0xe] = plVar2[-6];
            plVar2[-0xd] = plVar2[-5];
            plVar2[-0xc] = plVar2[-4];
            plVar2[-0xb] = plVar2[-3];
            plVar2[-10] = plVar2[-2];
            plVar2[-9] = plVar2[-1];
            plVar2[-8] = *plVar2;
            plVar1 = plVar2 + -7;
            plVar2 = plVar2 + 8;
          } while (plVar1 < plVar3 + -8);
          uVar4 = *(uint *)(param_1 + 1);
        }
        *(uint *)(param_1 + 1) = uVar4 - 1;
        return CONCAT71((uint7)(uint3)(uVar4 - 1 >> 8),1);
      }
      local_res8 = local_res8 + 8;
      plVar2 = plVar2 + 8;
    } while (local_res8 != plVar3);
  }
  return (ulonglong)local_res8 & 0xffffffffffffff00;
}



// FUNCTION 1431abe80 SetRTPC body=398 status=ok
// SIG undefined SetRTPC(void)

undefined8
CAkRTPCSubscriberNode::SetRTPC
          (longlong param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
          undefined4 param_6,undefined4 param_7,undefined8 param_8,undefined4 param_9)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined1 local_28;
  undefined8 local_20;
  
  cVar3 = CreateData();
  if ((cVar3 == '\0') || (g_pRTPCMgr == (CAkRTPCMgr *)0x0)) {
    uVar5 = 2;
  }
  else {
    if ((*(longlong *)(param_1 + 8) == 0) || (*(int *)(*(longlong *)(param_1 + 8) + 0x18) == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_20 = 0;
    local_30 = 0xff;
    local_28 = 0xff;
    uVar5 = FUN_143137d00(g_pRTPCMgr,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                          ,param_9,&local_48,2,uVar4);
    if ((int)uVar5 == 1) {
      cVar3 = CreateData(param_1);
      uVar5 = 2;
      if (cVar3 != '\0') {
        uVar1 = **(ulonglong **)(param_1 + 8);
        if ((uVar1 >> ((longlong)param_5 & 0x3fU) & 1) == 0) {
          **(ulonglong **)(param_1 + 8) = uVar1 | 1L << ((longlong)param_5 & 0x3fU);
          FUN_1431ac180();
          lVar2 = *(longlong *)(param_1 + 8);
          *(undefined8 *)(lVar2 + 8) = 0xffffffffffffffff;
          lVar6 = *(longlong *)(lVar2 + 0x10);
          lVar7 = (ulonglong)*(uint *)(lVar2 + 0x18) * 0x40 + lVar6;
          for (; lVar6 != lVar7; lVar6 = lVar6 + 0x40) {
            *(ulonglong *)(lVar2 + 8) = *(ulonglong *)(lVar2 + 8) & *(ulonglong *)(lVar6 + 0x30);
          }
        }
        uVar5 = 1;
      }
      if (((int)uVar5 == 1) && (param_3 == 2)) {
        *(char *)(*(longlong *)(param_1 + 8) + 0x20) = (char)uVar5;
      }
    }
  }
  return uVar5;
}



// FUNCTION 1431ac010 FUN_1431ac010 body=111 status=ok
// SIG undefined FUN_1431ac010(void)

void FUN_1431ac010(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res10;
  
  if (DAT_146b51fd8 != 0) {
    lVar3 = DAT_146b51fd8;
    do {
      lVar1 = *(longlong *)(lVar3 + 0x48);
      lVar2 = lVar1 + 0x30;
      if (lVar1 == 0) {
        lVar2 = 0;
      }
      if ((lVar2 == param_1) && (local_res10 = 0xffffffffffffffff, lVar1 != 0)) {
        CAkParameterNodeBase::UnregisterParameterTarget(lVar1,lVar3,&local_res10,1);
        *(undefined8 *)(lVar3 + 0x48) = 0;
      }
      lVar3 = *(longlong *)(lVar3 + 8);
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1431ac080 FUN_1431ac080 body=47 status=ok
// SIG undefined FUN_1431ac080(void)

void FUN_1431ac080(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    CAkParameterNodeBase::UnregisterParameterTarget
              (*(longlong *)(param_1 + 0x48),param_1,param_2,param_3);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1431ac0b0 UnsetRTPC body=204 status=ok
// SIG undefined UnsetRTPC(void)

void CAkRTPCSubscriberNode::UnsetRTPC(longlong param_1,int param_2,undefined4 param_3)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char local_res8 [8];
  
  if ((*(longlong *)(param_1 + 8) != 0) &&
     (((local_res8[0] = '\0', g_pRTPCMgr == (CAkRTPCMgr *)0x0 ||
       (FUN_143138f10(g_pRTPCMgr,param_1,param_2,param_3,local_res8), local_res8[0] == '\0')) &&
      (puVar1 = *(ulonglong **)(param_1 + 8), puVar1 != (ulonglong *)0x0)))) {
    *puVar1 = *puVar1 & ~(1L << ((longlong)param_2 & 0x3fU));
    FUN_1431ac180();
    plVar2 = *(longlong **)(param_1 + 8);
    if ((*plVar2 == 0) && ((int)plVar2[3] == 0)) {
      DestroyData(param_1);
      return;
    }
    plVar2[1] = -1;
    lVar3 = plVar2[2];
    lVar4 = (ulonglong)*(uint *)(plVar2 + 3) * 0x40 + lVar3;
    for (; lVar3 != lVar4; lVar3 = lVar3 + 0x40) {
      plVar2[1] = plVar2[1] & *(ulonglong *)(lVar3 + 0x30);
    }
  }
  return;
}



// FUNCTION 1431ac180 FUN_1431ac180 body=122 status=ok
// SIG undefined FUN_1431ac180(void)

void FUN_1431ac180(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  
  for (plVar2 = DAT_146b51fd8; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[1]) {
    uVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
    uVar4 = (**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
    lVar1 = plVar2[9];
    if ((lVar1 != 0) && (FUN_143177360(lVar1,plVar2,uVar4,uVar3), plVar2[9] == 0)) {
      plVar2[9] = lVar1;
    }
  }
  return;
}



// FUNCTION 1431ac200 CAkIndexable body=24 status=ok
// SIG undefined CAkIndexable(void)

undefined8 * CAkIndexable::CAkIndexable(undefined8 *param_1,undefined4 param_2)

{
  *(undefined4 *)((longlong)param_1 + 0x14) = 1;
  *param_1 = &PTR_FUN_145acc6c8;
  *(undefined4 *)(param_1 + 2) = param_2;
  return param_1;
}



// FUNCTION 1431ac220 ~CAkIndexable body=11 status=ok
// SIG undefined ~CAkIndexable(void)

void CAkIndexable::~CAkIndexable(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145acc6c8;
  return;
}



// FUNCTION 1431ac230 FUN_1431ac230 body=43 status=ok
// SIG undefined FUN_1431ac230(void)

undefined8 * FUN_1431ac230(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145acc6c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1431ac260 ~CAkPBIAware body=15 status=ok
// SIG undefined ~CAkPBIAware(void)

void CAkPBIAware::~CAkPBIAware(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ac7980;
  CAkIndexable::~CAkIndexable();
  return;
}



// FUNCTION 1431ac270 FUN_1431ac270 body=112 status=ok
// SIG undefined FUN_1431ac270(void)

void FUN_1431ac270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  void *pvVar1;
  
  pvVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x2f0);
  if (pvVar1 != (void *)0x0) {
    FUN_14317cf50(pvVar1,param_4,param_2,param_3,param_5,0);
    return;
  }
  return;
}



// FUNCTION 1431ac2e0 ~CAkSIS body=149 status=ok
// SIG undefined ~CAkSIS(void)

void CAkSIS::~CAkSIS(undefined8 *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_145ac6f58;
  pbVar1 = (byte *)param_1[3];
  if (pbVar1 != (byte *)0x0) {
    if (pbVar1 != pbVar1 + *pbVar1) {
      pbVar2 = pbVar1 + ((ulonglong)*pbVar1 + 4 & 0xfffffffc) + 8;
      lVar3 = (longlong)(pbVar1 + *pbVar1) - (longlong)pbVar1;
      do {
        if (*(longlong *)pbVar2 != 0) {
          FUN_1431501b0(DAT_146b50af0,*(longlong *)pbVar2,param_1);
        }
        pbVar2 = pbVar2 + 0x10;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  if ((void *)param_1[3] != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[3]);
  }
  param_1[3] = 0;
  return;
}



// FUNCTION 1431ac380 GetSISValue body=362 status=ok
// SIG undefined GetSISValue(void)

byte * CAkSIS::GetSISValue(longlong param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  
  pbVar5 = *(byte **)(param_1 + 0x18);
  if (pbVar5 != (byte *)0x0) {
    uVar6 = 0;
    do {
      uVar4 = (int)uVar6 + 1;
      if (pbVar5[uVar4] == (byte)param_2) {
        if (pbVar5 + uVar6 * 0x10 + ((ulonglong)(*pbVar5 + 4) & 0xfffffffc) != (byte *)0x0) {
          return pbVar5 + uVar6 * 0x10 + ((ulonglong)(*pbVar5 + 4) & 0xfffffffc);
        }
        break;
      }
      uVar6 = (ulonglong)uVar4;
    } while (uVar4 < *pbVar5);
  }
  iVar2 = CAkRTPCSubscriberNode::EnableParam
                    (*(longlong *)(param_1 + 8) + 0x48,(&DAT_145aca880)[param_2]);
  if (iVar2 == 1) {
    if (*(byte **)(param_1 + 0x18) == (byte *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (uint)**(byte **)(param_1 + 0x18);
    }
    uVar1 = uVar4 + 5;
    pcVar3 = AK::MemoryMgr::Malloc
                       (g_DefaultPoolId,(ulonglong)((uVar4 + 1) * 0x10 + (uVar1 & 0xfffffffc)));
    if (pcVar3 != (char *)0x0) {
      if (*(longlong *)(param_1 + 0x18) != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  (pcVar3 + 1,(void *)(*(longlong *)(param_1 + 0x18) + 1),(ulonglong)uVar4);
        ::_guard_xfg_dispatch_icall_nop
                  (pcVar3 + ((ulonglong)uVar1 & 0xfffffffc),
                   (void *)(((ulonglong)(uVar4 + 4) & 0xfffffffc) + *(longlong *)(param_1 + 0x18)),
                   (ulonglong)uVar4 << 4);
        AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x18));
      }
      pcVar3[uVar4 + 1] = (byte)param_2;
      *pcVar3 = (char)uVar4 + '\x01';
      *(char **)(param_1 + 0x18) = pcVar3;
      pbVar5 = (byte *)(pcVar3 + ((ulonglong)uVar1 & 0xfffffffc) + (ulonglong)uVar4 * 0x10);
      if (pbVar5 != (byte *)0x0) {
        *(undefined4 *)pbVar5 = param_3;
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
        return pbVar5;
      }
    }
  }
  return (byte *)0x0;
}



// FUNCTION 1431ac4f0 FUN_1431ac4f0 body=313 status=ok
// SIG undefined FUN_1431ac4f0(void)

void FUN_1431ac4f0(longlong param_1,int param_2,float param_3,char param_4)

{
  byte *pbVar1;
  longlong lVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  uint in_stack_ffffffffffffff98;
  longlong *local_58;
  uint local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined1 local_28;
  undefined8 local_20;
  
  pbVar1 = *(byte **)(param_1 + 0x18);
  pfVar4 = (float *)0x0;
  if (pbVar1 != (byte *)0x0) {
    pfVar5 = pfVar4;
    do {
      uVar3 = (int)pfVar5 + 1;
      if (pbVar1[uVar3] == (byte)param_2) {
        pfVar4 = (float *)(pbVar1 + (longlong)pfVar5 * 0x10 +
                                    ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
        break;
      }
      pfVar5 = (float *)(ulonglong)uVar3;
    } while (uVar3 < *pbVar1);
  }
  if (param_2 == 0xb) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_50 = (uint)(lVar2 == 0) | local_50 & 0xfffffffc;
    local_58 = *(longlong **)(param_1 + 8);
    if (lVar2 == 0) {
      (**(code **)(*local_58 + 0xd0))(local_58,param_3,&local_58,0);
    }
    else {
      (**(code **)(*local_58 + 200))
                (local_58,param_3,lVar2,&local_58,in_stack_ffffffffffffff98 & 0xffffff00);
    }
  }
  else {
    local_48 = *(undefined8 *)(param_1 + 0x10);
    local_40 = 0;
    local_38 = 0;
    local_30 = 0xff;
    local_28 = 0xff;
    local_20 = 0;
    CAkRTPCSubscriberNode::PushParamUpdate_Scoped
              (*(longlong *)(param_1 + 8) + 0x48,(&DAT_145aca880)[param_2],&local_48,param_3,
               param_3 - *pfVar4);
  }
  *pfVar4 = param_3;
  if (param_4 != '\0') {
    pfVar4[2] = 0.0;
    pfVar4[3] = 0.0;
  }
  return;
}



// FUNCTION 1431ac630 CAkParamNodeStateAware body=41 status=ok
// SIG undefined CAkParamNodeStateAware(void)

undefined8 * CAkParamNodeStateAware::CAkParamNodeStateAware(undefined8 *param_1)

{
  CAkStateAware::CAkStateAware();
  param_1[2] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145acc6e8;
  return param_1;
}



// FUNCTION 1431ac660 ~CAkParamNodeStateAware body=191 status=ok
// SIG undefined ~CAkParamNodeStateAware(void)

void CAkParamNodeStateAware::~CAkParamNodeStateAware(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  
  pvVar2 = (void *)param_1[2];
  *param_1 = &PTR__scalar_deleting_destructor__145acc6e8;
  if (pvVar2 != (void *)0x0) {
    if (*(longlong *)((longlong)pvVar2 + 8) != 0) {
      CAkStateAware::FlushStateTransitions();
      CAkStateAware::RemoveStateGroups(param_1,0);
      pvVar2 = (void *)param_1[2];
    }
    lVar1 = g_DefaultPoolId;
    if (pvVar2 != (void *)0x0) {
      *(undefined8 *)((longlong)pvVar2 + 8) = 0;
      if (*(void **)((longlong)pvVar2 + 0x28) != (void *)0x0) {
        *(undefined4 *)((longlong)pvVar2 + 0x30) = 0;
        AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)((longlong)pvVar2 + 0x28));
        *(undefined8 *)((longlong)pvVar2 + 0x28) = 0;
        *(undefined4 *)((longlong)pvVar2 + 0x34) = 0;
      }
      if (*(void **)((longlong)pvVar2 + 0x18) != (void *)0x0) {
        *(undefined4 *)((longlong)pvVar2 + 0x20) = 0;
        AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)((longlong)pvVar2 + 0x18));
        *(undefined8 *)((longlong)pvVar2 + 0x18) = 0;
        *(undefined4 *)((longlong)pvVar2 + 0x24) = 0;
      }
      AK::MemoryMgr::Free(lVar1,pvVar2);
    }
    param_1[2] = 0;
  }
  CAkStateAware::~CAkStateAware(param_1);
  return;
}



// FUNCTION 1431ac720 `scalar_deleting_destructor' body=232 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
CAkParamNodeStateAware::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  long lVar1;
  void *pvVar2;
  
  pvVar2 = (void *)param_1[2];
  *param_1 = &PTR__scalar_deleting_destructor__145acc6e8;
  if (pvVar2 != (void *)0x0) {
    if (*(longlong *)((longlong)pvVar2 + 8) != 0) {
      CAkStateAware::FlushStateTransitions();
      CAkStateAware::RemoveStateGroups(param_1,0);
      pvVar2 = (void *)param_1[2];
    }
    lVar1 = g_DefaultPoolId;
    if (pvVar2 != (void *)0x0) {
      *(undefined8 *)((longlong)pvVar2 + 8) = 0;
      if (*(void **)((longlong)pvVar2 + 0x28) != (void *)0x0) {
        *(undefined4 *)((longlong)pvVar2 + 0x30) = 0;
        AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)((longlong)pvVar2 + 0x28));
        *(undefined8 *)((longlong)pvVar2 + 0x28) = 0;
        *(undefined4 *)((longlong)pvVar2 + 0x34) = 0;
      }
      if (*(void **)((longlong)pvVar2 + 0x18) != (void *)0x0) {
        *(undefined4 *)((longlong)pvVar2 + 0x20) = 0;
        AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)((longlong)pvVar2 + 0x18));
        *(undefined8 *)((longlong)pvVar2 + 0x18) = 0;
        *(undefined4 *)((longlong)pvVar2 + 0x24) = 0;
      }
      AK::MemoryMgr::Free(lVar1,pvVar2);
    }
    param_1[2] = 0;
  }
  CAkStateAware::~CAkStateAware(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1431ac810 EnsureStateData body=98 status=ok
// SIG undefined EnsureStateData(void)

bool CAkParamNodeStateAware::EnsureStateData(longlong param_1)

{
  void *pvVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    pvVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x38);
    if (pvVar1 != (void *)0x0) {
      *(undefined8 *)((longlong)pvVar1 + 8) = 0;
      *(undefined8 *)((longlong)pvVar1 + 0x10) = 0;
      *(undefined8 *)((longlong)pvVar1 + 0x18) = 0;
      *(undefined8 *)((longlong)pvVar1 + 0x20) = 0;
      *(undefined8 *)((longlong)pvVar1 + 0x28) = 0;
      *(undefined8 *)((longlong)pvVar1 + 0x30) = 0;
      *(void **)(param_1 + 0x10) = pvVar1;
      return pvVar1 != (void *)0x0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    bVar2 = true;
  }
  return !bVar2;
}



// FUNCTION 1431ac8a0 NotifyStateParamTargets body=95 status=ok
// SIG undefined NotifyStateParamTargets(void)

void CAkParamNodeStateAware::NotifyStateParamTargets(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 != 0) &&
     (lVar2 = *(longlong *)(lVar1 + 0x18),
     lVar2 != (ulonglong)*(uint *)(lVar1 + 0x20) * 0x10 + lVar2)) {
    do {
      (**(code **)(**(longlong **)(lVar2 + 8) + 0x18))(*(longlong **)(lVar2 + 8),0,lVar1 + 0x10);
      lVar2 = lVar2 + 0x10;
    } while (lVar2 != (ulonglong)*(uint *)(lVar1 + 0x20) * 0x10 + *(longlong *)(lVar1 + 0x18));
  }
  return;
}



// FUNCTION 1431ac900 FUN_1431ac900 body=196 status=ok
// SIG undefined FUN_1431ac900(void)

void FUN_1431ac900(longlong *param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4,
                  float param_5,float param_6,char param_7)

{
  longlong lVar1;
  ulonglong *puVar2;
  
  lVar1 = param_1[2];
  puVar2 = *(ulonglong **)(lVar1 + 0x18);
  if (puVar2 != puVar2 + (ulonglong)*(uint *)(lVar1 + 0x20) * 2) {
    do {
      if ((*puVar2 >> ((ulonglong)(byte)param_2 & 0x3f) & 1) != 0) {
        (**(code **)(*(longlong *)puVar2[1] + 8))
                  ((longlong *)puVar2[1],param_2,param_6,param_6 - param_5);
      }
      puVar2 = puVar2 + 2;
    } while (puVar2 != (ulonglong *)
                       ((ulonglong)*(uint *)(lVar1 + 0x20) * 0x10 + *(longlong *)(lVar1 + 0x18)));
  }
  if (param_7 == '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ac9b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}



// FUNCTION 1431ac9d0 ReadStateChunk body=89 status=ok
// SIG undefined ReadStateChunk(void)

ulonglong CAkParamNodeStateAware::ReadStateChunk(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar3 = CAkStateAware::ReadStateChunk();
  uVar4 = uVar3;
  if (((int)uVar3 == 1) && (lVar1 = *(longlong *)(param_1 + 0x10), lVar1 != 0)) {
    *(undefined8 *)(lVar1 + 0x10) = 0;
    lVar2 = *(longlong *)(param_1 + 0x10);
    uVar6 = 0;
    if (*(int *)(lVar2 + 0x30) != 0) {
      do {
        uVar5 = (int)uVar6 + 1;
        *(ulonglong *)(lVar1 + 0x10) =
             *(ulonglong *)(lVar1 + 0x10) |
             1L << ((ulonglong)*(ushort *)(*(longlong *)(lVar2 + 0x28) + uVar6 * 4) & 0x3f);
        uVar4 = uVar3 & 0xffffffff;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(lVar2 + 0x30));
    }
  }
  return uVar4;
}



// FUNCTION 1431aca30 SetStateProperties body=122 status=ok
// SIG undefined SetStateProperties(void)

void CAkParamNodeStateAware::SetStateProperties
               (longlong param_1,uint param_2,uint *param_3,char param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_2;
  CAkStateAware::SetStateProperties();
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x10) = 0;
    if (param_2 != 0) {
      do {
        uVar1 = *param_3;
        param_3 = param_3 + 3;
        *(ulonglong *)(lVar2 + 0x10) =
             *(ulonglong *)(lVar2 + 0x10) | 1L << ((ulonglong)uVar1 & 0x3f);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    if (param_4 != '\0') {
      FUN_143190d20(param_1);
    }
  }
  return;
}



// FUNCTION 1431acab0 StateTransitionAdded body=109 status=ok
// SIG undefined StateTransitionAdded(void)

undefined1 CAkParamNodeStateAware::StateTransitionAdded(longlong param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(param_1 + -0x18);
  if (param_1 == 0) {
    plVar2 = (longlong *)&DAT_ffffffffffffffe8;
  }
  if (param_1 == 0) {
    plVar2 = (longlong *)0x0;
  }
  uVar1 = (**(code **)(*plVar2 + 0x128))(plVar2,1);
  plVar2 = (longlong *)(param_1 + -0x18);
  if (param_1 == 0) {
    plVar2 = (longlong *)0x0;
  }
  FUN_143173d90(plVar2);
  return uVar1;
}



// FUNCTION 1431acb20 StateTransitionRemoved body=92 status=ok
// SIG undefined StateTransitionRemoved(void)

void CAkParamNodeStateAware::StateTransitionRemoved(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + -0x18);
  if (param_1 == 0) {
    plVar1 = (longlong *)&DAT_ffffffffffffffe8;
  }
  if (param_1 == 0) {
    plVar1 = (longlong *)0x0;
  }
  (**(code **)(*plVar1 + 0x130))(plVar1,1);
  plVar1 = (longlong *)(param_1 + -0x18);
  if (param_1 == 0) {
    plVar1 = (longlong *)0x0;
  }
  FUN_143177a90(plVar1);
  return;
}



// FUNCTION 1431acb80 UpdateStateParamTargets body=29 status=ok
// SIG undefined UpdateStateParamTargets(void)

void CAkParamNodeStateAware::UpdateStateParamTargets(longlong *param_1)

{
  FUN_1431ac180();
                    /* WARNING: Could not recover jumptable at 0x0001431acb99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}



// FUNCTION 1431acba0 FUN_1431acba0 body=33 status=ok
// SIG undefined FUN_1431acba0(void)

undefined8 * FUN_1431acba0(undefined8 *param_1)

{
  CAkAction::CAkAction();
  *param_1 = &PTR_FUN_145acc768;
  return param_1;
}



// FUNCTION 1431acbd0 FUN_1431acbd0 body=62 status=ok
// SIG undefined FUN_1431acbd0(void)

undefined8 * FUN_1431acbd0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145acc768;
  CAkAction::~CAkAction();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1431acc10 Execute body=47 status=ok
// SIG undefined Execute(void)

undefined8 CAkActionDuck::Execute(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)CAkAction::GetAndRefTarget();
  if (plVar1 != (longlong *)0x0) {
    CAkBus::DuckNotif(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return 1;
}



// FUNCTION 1431acc40 Init body=22 status=ok
// SIG undefined Init(void)

undefined8 CAkDuckItem::Init(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return 1;
}



// FUNCTION 1431acc60 Term body=52 status=ok
// SIG undefined Term(void)

undefined8 CAkDuckItem::Term(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1431501b0(DAT_146b50af0,*(longlong *)(param_1 + 0x10),param_1);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return 1;
}



// FUNCTION 1431acca0 TransUpdateValue body=186 status=ok
// SIG undefined TransUpdateValue(void)

void CAkDuckItem::TransUpdateValue
               (longlong param_1,ulonglong param_2,undefined4 param_3,char param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)CAkBus::GetDuckedVolume(*(undefined8 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 0x18) = param_3;
  fVar2 = (float)CAkBus::GetDuckedVolume(*(undefined8 *)(param_1 + 8),param_2 & 0xffffffff);
  if (param_4 != '\0') {
    if (*(char *)(param_1 + 0x1c) != '\0') {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    CAkBus::CheckDuck(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0x1c) = 0;
  }
  if (fVar2 - fVar1 != 0.0) {
    CAkRTPCSubscriberNode::PushParamUpdate_All
              (*(longlong *)(param_1 + 8) + 0x160,(&DAT_145aca880)[param_2],fVar2,fVar2 - fVar1);
  }
  return;
}



// FUNCTION 1431acd60 ~CAkGameObject body=260 status=ok
// SIG void ~CAkGameObject(CAkGameObject * this)

/* public: virtual __cdecl CAkGameObject::~CAkGameObject(void) __ptr64 */

void __thiscall CAkGameObject::~CAkGameObject(CAkGameObject *this)

{
  undefined8 *puVar1;
  long lVar2;
  ulonglong uVar3;
  CAkGameObject *pCVar4;
  CAkGameObject *pCVar5;
  CAkGameObject *local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined1 local_28;
  undefined8 local_20;
  
                    /* 0x31acd60  26  ??1CAkGameObject@@UEAA@XZ */
  local_40 = 0;
  *(undefined ***)this = &PTR__vector_deleting_destructor__145ac78e0;
  local_38 = 0;
  local_30 = 0xff;
  local_28 = 0xff;
  local_20 = 0;
  local_48 = this;
  CAkScopedRtpcObj::Term(this + 8,&local_48);
  pCVar5 = *(CAkGameObject **)(this + 0x38);
  uVar3 = (ulonglong)*(uint *)(this + 0x40);
  pCVar4 = pCVar5;
  if (pCVar5 != pCVar5 + uVar3 * 8) {
    do {
      lVar2 = g_DefaultPoolId;
      puVar1 = *(undefined8 **)pCVar4;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
        AK::MemoryMgr::Free(lVar2,puVar1);
      }
      *(undefined8 *)pCVar4 = 0;
      pCVar4 = pCVar4 + 8;
      uVar3 = (ulonglong)*(uint *)(this + 0x40);
      pCVar5 = *(CAkGameObject **)(this + 0x38);
    } while (pCVar4 != pCVar5 + uVar3 * 8);
  }
  if (pCVar5 != (CAkGameObject *)0x0) {
    if (pCVar5 != pCVar5 + uVar3 * 8) {
      pCVar5 = *(CAkGameObject **)(this + 0x38);
    }
    *(undefined4 *)(this + 0x40) = 0;
    if (this + 0x28 != pCVar5) {
      AK::MemoryMgr::Falign(g_DefaultPoolId,pCVar5);
    }
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x44) = 0;
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)(this + 8));
  return;
}



// FUNCTION 1431ace70 ~CAkModCtxRefContainer body=60 status=ok
// SIG undefined ~CAkModCtxRefContainer(void)

void CAkModCtxRefContainer::~CAkModCtxRefContainer(undefined8 *param_1)

{
  Release();
  if ((void *)*param_1 != (void *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*param_1);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1431aceb0 FUN_1431aceb0 body=153 status=ok
// SIG undefined FUN_1431aceb0(void)

void FUN_1431aceb0(longlong *param_1)

{
  longlong lVar1;
  long lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)*param_1;
  if (plVar4 != (longlong *)0x0) {
    plVar3 = (longlong *)*plVar4;
    if (plVar3 != (longlong *)0x0) {
      do {
        lVar1 = plVar3[1];
        *(undefined8 *)(lVar1 + 0x18) = 0;
        if (*(void **)(lVar1 + 0x20) != (void *)0x0) {
          *(undefined4 *)(lVar1 + 0x28) = 0;
          AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(lVar1 + 0x20));
          *(undefined8 *)(lVar1 + 0x20) = 0;
          *(undefined4 *)(lVar1 + 0x2c) = 0;
        }
        plVar3 = (longlong *)*plVar3;
      } while (plVar3 != (longlong *)0x0);
      plVar4 = (longlong *)*param_1;
    }
    plVar3 = plVar4 + 5;
    *(int *)plVar3 = (int)*plVar3 + -1;
    lVar2 = g_DefaultPoolId;
    if ((int)*plVar3 == 0) {
      FUN_1431acfe0(plVar4,0);
      AK::MemoryMgr::Free(lVar2,plVar4);
    }
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1431acf50 operator= body=137 status=ok
// SIG undefined operator=(void)

undefined8 * CAkModCtxRefContainer::operator=(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  Release();
  uVar1 = *(uint *)(param_2 + 1);
  uVar4 = 0;
  if (uVar1 != 0) {
    pvVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 3);
    *param_1 = pvVar2;
    if (pvVar2 == (void *)0x0) {
      return param_1;
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    uVar4 = *(uint *)(param_2 + 1);
  }
  puVar3 = (undefined8 *)*param_2;
  if (puVar3 != puVar3 + uVar4) {
    do {
      FUN_1431ad280(param_1,*puVar3);
      puVar3 = puVar3 + 1;
    } while (puVar3 != (undefined8 *)(*param_2 + (ulonglong)*(uint *)(param_2 + 1) * 8));
  }
  return param_1;
}



// FUNCTION 1431acfe0 FUN_1431acfe0 body=336 status=ok
// SIG undefined FUN_1431acfe0(void)

longlong * FUN_1431acfe0(longlong *param_1,ulonglong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  long lVar5;
  longlong *plVar6;
  
  for (puVar2 = (undefined8 *)*param_1; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2)
  {
    *(int *)(puVar2[1] + 0x84) = *(int *)(puVar2[1] + 0x84) + -1;
    puVar3 = (undefined8 *)puVar2[1];
    piVar1 = (int *)((longlong)puVar3 + 0x74);
    *piVar1 = *piVar1 + -1;
    lVar5 = g_DefaultPoolId;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,0);
      AK::MemoryMgr::Free(lVar5,puVar3);
    }
    if ((void *)puVar2[2] != (void *)0x0) {
      *(undefined4 *)(puVar2 + 3) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,(void *)puVar2[2]);
      puVar2[2] = 0;
      *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
    }
  }
  plVar6 = (undefined8 *)param_1[2];
  while (plVar4 = (longlong *)*param_1, plVar4 != (longlong *)0x0) {
    *param_1 = *plVar4;
    if (plVar4 == (longlong *)param_1[1]) {
      param_1[1] = 0;
    }
    *plVar4 = param_1[2];
    *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + -1;
    param_1[2] = (longlong)plVar4;
    plVar6 = plVar4;
  }
  while (puVar2 = plVar6, puVar2 != (undefined8 *)0x0) {
    plVar6 = (longlong *)*puVar2;
    if ((puVar2 < (undefined8 *)param_1[3]) ||
       ((undefined8 *)param_1[3] + (ulonglong)*(uint *)(param_1 + 4) * 4 <= puVar2)) {
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar2);
    }
  }
  if ((void *)param_1[3] != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[3]);
    param_1[3] = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1431ad130 FUN_1431ad130 body=334 status=ok
// SIG undefined FUN_1431ad130(void)

undefined8 FUN_1431ad130(longlong *param_1,longlong param_2,undefined8 *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  plVar4 = (longlong *)*param_1;
  plVar6 = (longlong *)0x0;
  if (plVar4 == (longlong *)0x0) {
LAB_1431ad18c:
    plVar4 = (longlong *)param_1[2];
    if (plVar4 == (longlong *)0x0) {
      plVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x20);
      if (plVar4 != (longlong *)0x0) {
        if (plVar4 != (longlong *)0xfffffffffffffff8) {
          plVar4[2] = 0;
          plVar4[3] = 0;
        }
        *plVar4 = param_1[2];
        param_1[2] = (longlong)plVar4;
        goto LAB_1431ad1c8;
      }
    }
    else {
LAB_1431ad1c8:
      if ((undefined8 *)param_1[1] == (undefined8 *)0x0) {
        *param_1 = (longlong)plVar4;
      }
      else {
        *(undefined8 *)param_1[1] = plVar4;
        plVar4 = (longlong *)param_1[2];
      }
      param_1[1] = (longlong)plVar4;
      param_1[2] = *plVar4;
      *plVar4 = 0;
      *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
      plVar6 = (longlong *)(param_1[1] + 8);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = param_2;
        *(int *)(param_2 + 0x74) = *(int *)(param_2 + 0x74) + 1;
        *(int *)(*plVar6 + 0x84) = *(int *)(*plVar6 + 0x84) + 1;
        goto LAB_1431ad207;
      }
    }
    uVar5 = 2;
  }
  else {
    do {
      plVar1 = plVar4 + 1;
      plVar3 = plVar4 + 1;
      plVar4 = (longlong *)*plVar4;
      if (param_2 != *plVar1) {
        plVar3 = plVar6;
      }
      plVar6 = plVar3;
    } while (plVar4 != (longlong *)0x0);
    if (plVar6 == (longlong *)0x0) goto LAB_1431ad18c;
LAB_1431ad207:
    lVar2 = *param_4;
    if (lVar2 != 0) {
      if ((int)param_4[2] == 2) {
        CAkParameterNodeBase::GetModulatorParamXfrms
                  (lVar2 + -0x30,plVar6 + 1,*(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x10),
                   *param_3,1);
        return 1;
      }
      if ((int)param_4[2] - 4U < 2) {
        FUN_143192f90(lVar2,plVar6 + 1,*(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x10),
                      *param_3);
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 1431ad280 FUN_1431ad280 body=221 status=ok
// SIG undefined FUN_1431ad280(void)

void FUN_1431ad280(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  void *pvVar6;
  ulonglong uVar7;
  
  uVar3 = *(uint *)(param_1 + 1);
  if (*(uint *)((longlong)param_1 + 0xc) <= uVar3) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc) + 1;
    pvVar5 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 3);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    pvVar6 = (void *)*param_1;
    if ((pvVar6 != (void *)0x0) && (pvVar6 != pvVar5)) {
      uVar4 = *(uint *)(param_1 + 1);
      uVar7 = 0;
      if ((ulonglong)uVar4 != 0) {
        do {
          *(undefined8 *)((longlong)pvVar5 + uVar7 * 8) = *(undefined8 *)(*param_1 + uVar7 * 8);
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar4);
        pvVar6 = (void *)*param_1;
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar6);
    }
    *param_1 = (longlong)pvVar5;
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    if (uVar1 <= uVar3) {
      return;
    }
  }
  uVar3 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar3 + 1;
  plVar2 = (longlong *)(*param_1 + (ulonglong)uVar3 * 8);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = param_2;
    *(int *)(param_2 + 0x74) = *(int *)(param_2 + 0x74) + 1;
    *(int *)(*plVar2 + 0x84) = *(int *)(*plVar2 + 0x84) + 1;
  }
  return;
}



// FUNCTION 1431ad360 FUN_1431ad360 body=215 status=ok
// SIG undefined FUN_1431ad360(void)

undefined8 FUN_1431ad360(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  
  puVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x30);
  puVar5 = (undefined8 *)0x0;
  puVar6 = puVar5;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *(undefined4 *)(puVar1 + 5) = 1;
    puVar6 = puVar1;
  }
  *param_1 = puVar6;
  if (puVar6 == (undefined8 *)0x0) {
    return 2;
  }
  plVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x80);
  puVar6[3] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    puVar6[2] = plVar2;
    lVar3 = (longlong)plVar2 + 0x1c;
    *(undefined4 *)(puVar6 + 4) = 4;
    do {
      plVar4 = plVar2;
      if (lVar3 != 0x14) {
        *(undefined8 *)(lVar3 + -0xc) = 0;
        *(undefined8 *)(lVar3 + -4) = 0;
      }
      uVar7 = (int)puVar5 + 1;
      puVar5 = (undefined8 *)(ulonglong)uVar7;
      *plVar4 = lVar3 + 4;
      lVar3 = lVar3 + 0x20;
      plVar2 = plVar4 + 4;
    } while (uVar7 < *(uint *)(puVar6 + 4));
    *plVar4 = 0;
  }
  return 1;
}



// FUNCTION 1431ad440 ClearModulationSources body=28 status=ok
// SIG undefined ClearModulationSources(void)

void CAkModulatorPBIData::ClearModulationSources(undefined8 *param_1)

{
  for (param_1 = (undefined8 *)*param_1; param_1 != (undefined8 *)0x0;
      param_1 = (undefined8 *)*param_1) {
    *(undefined4 *)(param_1 + 3) = 0;
  }
  return;
}



// FUNCTION 1431ad460 GetBufferList body=377 status=ok
// SIG undefined GetBufferList(void)

void CAkModulatorPBIData::GetBufferList
               (longlong *param_1,ulonglong *param_2,longlong param_3,longlong param_4,
               longlong param_5,uint *param_6,uint *param_7)

{
  longlong *plVar1;
  float *pfVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float fVar6;
  
  param_1 = (longlong *)*param_1;
  uVar4 = 0;
  uVar5 = 0;
  if (param_1 == (longlong *)0x0) {
    *param_6 = 0;
    *param_7 = 0;
    return;
  }
  do {
    if ((param_1[1] != 0) &&
       (pfVar2 = (float *)param_1[2], pfVar2 != pfVar2 + (ulonglong)*(uint *)(param_1 + 3) * 3)) {
      do {
        if ((*param_2 >> ((ulonglong)*(byte *)(pfVar2 + 2) & 0x3f) & 1) != 0) {
          lVar3 = param_1[1];
          plVar1 = *(longlong **)(lVar3 + 0x60);
          if (plVar1 == (longlong *)0x0) {
LAB_1431ad52f:
            if ((uint)uVar5 < *param_7) {
              *(float *)(param_4 + uVar5 * 8) = *(float *)(lVar3 + 0x80) * pfVar2[1] + *pfVar2;
              lVar3 = *(longlong *)(param_1[1] + 0x60);
              if (lVar3 == 0) {
                fVar6 = *(float *)(param_1[1] + 0x80);
              }
              else {
                fVar6 = *(float *)(lVar3 + 0xc);
              }
              *(float *)(param_4 + 4 + uVar5 * 8) = fVar6 * pfVar2[1] + *pfVar2;
              uVar5 = (ulonglong)((uint)uVar5 + 1);
            }
          }
          else if (((*(int *)(lVar3 + 0x88) == 0) || (*plVar1 == 0)) || (*param_6 <= (uint)uVar4)) {
            if (((plVar1 == (longlong *)0x0) || (*(int *)(lVar3 + 0x88) == 0)) || (*plVar1 == 0))
            goto LAB_1431ad52f;
          }
          else {
            if (*(int *)(lVar3 + 0x88) == 0) {
              lVar3 = 0;
            }
            else {
              lVar3 = *plVar1;
            }
            *(longlong *)(param_5 + uVar4 * 8) = lVar3;
            *(undefined8 *)(param_3 + uVar4 * 8) = *(undefined8 *)pfVar2;
            uVar4 = (ulonglong)((uint)uVar4 + 1);
          }
        }
        pfVar2 = pfVar2 + 3;
      } while (pfVar2 != (float *)(param_1[2] + (ulonglong)*(uint *)(param_1 + 3) * 0xc));
    }
    param_1 = (longlong *)*param_1;
    if (param_1 == (longlong *)0x0) {
      *param_6 = (uint)uVar4;
      *param_7 = (uint)uVar5;
      return;
    }
  } while( true );
}



// FUNCTION 1431ad5e0 GetCtrlRateOutput body=117 status=ok
// SIG undefined GetCtrlRateOutput(void)

float CAkModulatorPBIData::GetCtrlRateOutput(undefined8 *param_1,ulonglong *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  
  fVar3 = 1.0;
  for (param_1 = (undefined8 *)*param_1; param_1 != (undefined8 *)0x0;
      param_1 = (undefined8 *)*param_1) {
    pfVar2 = (float *)param_1[2];
    pfVar1 = pfVar2 + (ulonglong)*(uint *)(param_1 + 3) * 3;
    if (pfVar2 != pfVar1) {
      do {
        if ((*param_2 >> ((ulonglong)*(byte *)(pfVar2 + 2) & 0x3f) & 1) != 0) {
          fVar3 = fVar3 * (*(float *)(param_1[1] + 0x80) * pfVar2[1] + *pfVar2);
        }
        pfVar2 = pfVar2 + 3;
      } while (pfVar2 != pfVar1);
    }
  }
  return fVar3;
}



// FUNCTION 1431ad660 FUN_1431ad660 body=290 status=ok
// SIG undefined FUN_1431ad660(void)

void FUN_1431ad660(undefined8 *param_1,int param_2,longlong *param_3)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  void *pvVar6;
  void *pvVar7;
  ulonglong uVar8;
  
  param_1 = (undefined8 *)*param_1;
  do {
    if (param_1 == (undefined8 *)0x0) {
      return;
    }
    lVar5 = param_1[1];
    if (*(int *)(lVar5 + 0x7c) == param_2) {
      uVar3 = *(uint *)(param_3 + 1);
      if (uVar3 < *(uint *)((longlong)param_3 + 0xc)) {
LAB_1431ad730:
        uVar3 = *(uint *)(param_3 + 1);
        *(uint *)(param_3 + 1) = uVar3 + 1;
        plVar2 = (longlong *)(*param_3 + (ulonglong)uVar3 * 8);
        if (plVar2 != (longlong *)0x0) {
          *plVar2 = lVar5;
          *(int *)(lVar5 + 0x74) = *(int *)(lVar5 + 0x74) + 1;
          *(int *)(*plVar2 + 0x84) = *(int *)(*plVar2 + 0x84) + 1;
        }
      }
      else {
        uVar1 = *(uint *)((longlong)param_3 + 0xc) + 1;
        pvVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 3);
        if (pvVar6 != (void *)0x0) {
          pvVar7 = (void *)*param_3;
          if ((pvVar7 != (void *)0x0) && (pvVar7 != pvVar6)) {
            uVar4 = *(uint *)(param_3 + 1);
            uVar8 = 0;
            if ((ulonglong)uVar4 != 0) {
              do {
                *(undefined8 *)((longlong)pvVar6 + uVar8 * 8) =
                     *(undefined8 *)(*param_3 + uVar8 * 8);
                uVar8 = uVar8 + 1;
              } while (uVar8 < uVar4);
              pvVar7 = (void *)*param_3;
            }
            AK::MemoryMgr::Free(g_DefaultPoolId,pvVar7);
          }
          *param_3 = (longlong)pvVar6;
          *(uint *)((longlong)param_3 + 0xc) = uVar1;
          if (uVar3 < uVar1) goto LAB_1431ad730;
        }
      }
    }
    param_1 = (undefined8 *)*param_1;
  } while( true );
}



// FUNCTION 1431ad790 GetNumAutomatedModulators body=132 status=ok
// SIG undefined GetNumAutomatedModulators(void)

void CAkModulatorPBIData::GetNumAutomatedModulators
               (undefined8 *param_1,ulonglong *param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_4 = 0;
  *param_3 = 0;
  for (param_1 = (undefined8 *)*param_1; param_1 != (undefined8 *)0x0;
      param_1 = (undefined8 *)*param_1) {
    if ((param_1[1] != 0) &&
       (lVar2 = param_1[2], lVar2 != lVar2 + (ulonglong)*(uint *)(param_1 + 3) * 0xc)) {
      do {
        if ((*param_2 >> ((ulonglong)*(byte *)(lVar2 + 8) & 0x3f) & 1) != 0) {
          plVar1 = *(longlong **)(param_1[1] + 0x60);
          if (((plVar1 == (longlong *)0x0) || (*(int *)(param_1[1] + 0x88) == 0)) || (*plVar1 == 0))
          {
            *param_4 = *param_4 + 1;
          }
          else {
            *param_3 = *param_3 + 1;
          }
        }
        lVar2 = lVar2 + 0xc;
      } while (lVar2 != param_1[2] + (ulonglong)*(uint *)(param_1 + 3) * 0xc);
    }
  }
  return;
}



// FUNCTION 1431ad820 GetPeakOutput body=137 status=ok
// SIG undefined GetPeakOutput(void)

float CAkModulatorPBIData::GetPeakOutput(undefined8 *param_1,ulonglong *param_2)

{
  float *pfVar1;
  longlong lVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = 1.0;
  for (param_1 = (undefined8 *)*param_1; param_1 != (undefined8 *)0x0;
      param_1 = (undefined8 *)*param_1) {
    pfVar3 = (float *)param_1[2];
    pfVar1 = pfVar3 + (ulonglong)*(uint *)(param_1 + 3) * 3;
    if (pfVar3 != pfVar1) {
      do {
        if ((*param_2 >> ((ulonglong)*(byte *)(pfVar3 + 2) & 0x3f) & 1) != 0) {
          lVar2 = *(longlong *)(param_1[1] + 0x60);
          if (lVar2 == 0) {
            fVar4 = *(float *)(param_1[1] + 0x80);
          }
          else {
            fVar4 = *(float *)(lVar2 + 0x10);
          }
          fVar5 = fVar5 * (fVar4 * pfVar3[1] + *pfVar3);
        }
        pfVar3 = pfVar3 + 3;
      } while (pfVar3 != pfVar1);
    }
  }
  return fVar5;
}



// FUNCTION 1431ad8b0 HasModulationSource body=28 status=ok
// SIG undefined HasModulationSource(void)

undefined8 CAkModulatorPBIData::HasModulationSource(undefined8 *param_1,longlong param_2)

{
  param_1 = (undefined8 *)*param_1;
  while( true ) {
    if (param_1 == (undefined8 *)0x0) {
      return 0;
    }
    if (param_2 == param_1[1]) break;
    param_1 = (undefined8 *)*param_1;
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
}



// FUNCTION 1431ad8d0 HasModulatorCtx body=36 status=ok
// SIG undefined HasModulatorCtx(void)

ulonglong CAkModCtxRefContainer::HasModulatorCtx(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)*param_1;
  plVar1 = plVar2 + *(uint *)(param_1 + 1);
  while( true ) {
    if (plVar2 == plVar1) {
      return (ulonglong)plVar2 & 0xffffffffffffff00;
    }
    if (*plVar2 == param_2) break;
    plVar2 = plVar2 + 1;
  }
  return CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
}



// FUNCTION 1431ad900 Pause body=79 status=ok
// SIG undefined Pause(void)

void CAkModulatorPBIData::Pause(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  
  for (param_1 = (undefined8 *)*param_1; param_1 != (undefined8 *)0x0;
      param_1 = (undefined8 *)*param_1) {
    lVar1 = param_1[1];
    iVar2 = *(int *)(lVar1 + 0x8c) + 1;
    *(int *)(lVar1 + 0x8c) = iVar2;
    if (((*(int *)(lVar1 + 0x7c) != 3) && (*(int *)(lVar1 + 0x84) <= iVar2)) &&
       (*(longlong *)(lVar1 + 0x60) != 0)) {
      *(undefined4 *)(lVar1 + 0x80) = *(undefined4 *)(*(longlong *)(lVar1 + 0x60) + 0xc);
      *(undefined8 *)(lVar1 + 0x60) = 0;
    }
  }
  return;
}



// FUNCTION 1431ad950 Release body=161 status=ok
// SIG undefined Release(void)

void CAkModCtxRefContainer::Release(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)*param_1;
  if (plVar4 == plVar4 + *(uint *)(param_1 + 1)) {
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  do {
    *(int *)(*plVar4 + 0x84) = *(int *)(*plVar4 + 0x84) + -1;
    puVar2 = (undefined8 *)*plVar4;
    piVar1 = (int *)((longlong)puVar2 + 0x74);
    *piVar1 = *piVar1 + -1;
    lVar3 = g_DefaultPoolId;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,0);
      AK::MemoryMgr::Free(lVar3,puVar2);
    }
    plVar4 = plVar4 + 1;
  } while (plVar4 != (longlong *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 8));
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 1431ada00 Resume body=35 status=ok
// SIG undefined Resume(void)

void CAkModulatorPBIData::Resume(undefined8 *param_1)

{
  for (param_1 = (undefined8 *)*param_1; param_1 != (undefined8 *)0x0;
      param_1 = (undefined8 *)*param_1) {
    *(int *)(param_1[1] + 0x8c) = *(int *)(param_1[1] + 0x8c) + -1;
  }
  return;
}



// FUNCTION 1431ada30 TriggerRelease body=50 status=ok
// SIG undefined TriggerRelease(void)

void CAkModulatorPBIData::TriggerRelease(undefined8 *param_1,undefined4 param_2)

{
  for (param_1 = (undefined8 *)*param_1; param_1 != (undefined8 *)0x0;
      param_1 = (undefined8 *)*param_1) {
    CAkModulatorCtx::TriggerRelease(param_1[1],param_2);
  }
  return;
}



// FUNCTION 1431ada70 CAkContinueListItem body=29 status=ok
// SIG undefined CAkContinueListItem(void)

undefined8 * CAkContinueListItem::CAkContinueListItem(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(byte *)((longlong)param_1 + 0x12) = *(byte *)((longlong)param_1 + 0x12) & 0xfc;
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 1431ada90 ~CAkContinueListItem body=82 status=ok
// SIG undefined ~CAkContinueListItem(void)

void CAkContinueListItem::~CAkContinueListItem(longlong *param_1)

{
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 8))();
    param_1[1] = 0;
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
    param_1[3] = 0;
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1431adaf0 operator= body=171 status=ok
// SIG undefined operator=(void)

longlong * CAkContinueListItem::operator=(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  if (param_2 != param_1) {
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    plVar2 = (longlong *)*param_1;
    *param_1 = (longlong)plVar1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    if ((longlong *)param_2[1] == (longlong *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(longlong *)param_2[1];
      uVar3 = CAkRanSeqCntr::GetPlaylistLength(*param_1);
      lVar4 = (**(code **)(lVar4 + 0x18))(param_2[1],uVar3);
    }
    param_1[1] = lVar4;
    *(int *)(param_1 + 2) = (int)param_2[2];
    plVar1 = (longlong *)param_2[3];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    plVar2 = (longlong *)param_1[3];
    param_1[3] = (longlong)plVar1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    param_1[4] = param_2[4];
  }
  return param_1;
}



// FUNCTION 1431adba0 AddRef body=4 status=ok
// SIG undefined AddRef(void)

void CAkContinuationList::AddRef(longlong param_1)

{
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}



// FUNCTION 1431adbb0 Create body=54 status=ok
// SIG undefined Create(void)

undefined8 * CAkContinuationList::Create(void)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 1;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431adbf0 Release body=273 status=ok
// SIG undefined Release(void)

void CAkContinuationList::Release(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  piVar1 = (int *)(param_1 + 2);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    plVar5 = (longlong *)*param_1;
    uVar3 = (ulonglong)*(uint *)(param_1 + 1);
    plVar4 = plVar5;
    if (plVar5 != plVar5 + uVar3 * 5) {
      do {
        if ((plVar4[3] != 0) && (plVar4[4] != 0)) {
          CAkMultiPlayNode::ContUnrefList();
        }
        uVar3 = (ulonglong)*(uint *)(param_1 + 1);
        plVar4 = plVar4 + 5;
        plVar5 = (longlong *)*param_1;
      } while (plVar4 != plVar5 + uVar3 * 5);
    }
    if (plVar5 != (longlong *)0x0) {
      if (plVar5 != plVar5 + uVar3 * 5) {
        plVar4 = plVar5 + 3;
        do {
          if ((longlong *)plVar4[-2] != (longlong *)0x0) {
            (**(code **)(*(longlong *)plVar4[-2] + 8))();
            plVar4[-2] = 0;
          }
          if ((longlong *)*plVar4 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar4 + 0x10))();
            *plVar4 = 0;
          }
          if ((longlong *)plVar4[-3] != (longlong *)0x0) {
            (**(code **)(*(longlong *)plVar4[-3] + 0x10))();
            plVar4[-3] = 0;
          }
          plVar2 = plVar4 + 2;
          plVar4 = plVar4 + 5;
        } while (plVar2 != plVar5 + uVar3 * 5);
        plVar5 = (longlong *)*param_1;
      }
      *(undefined4 *)(param_1 + 1) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,plVar5);
      *param_1 = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    AK::MemoryMgr::Free(g_DefaultPoolId,param_1);
  }
  return;
}



// FUNCTION 1431add10 FUN_1431add10 body=115 status=ok
// SIG undefined FUN_1431add10(void)

undefined8 * FUN_1431add10(undefined8 *param_1)

{
  undefined4 in_stack_00000030;
  
  FUN_1431b70e0();
  *param_1 = &PTR_FUN_145acc7b8;
  param_1[2] = &PTR_FUN_145acae80;
  param_1[3] = &PTR_LAB_145acc828;
  *(undefined4 *)((longlong)param_1 + 0x35c) = in_stack_00000030;
  *(undefined1 *)(param_1 + 0x6b) = 1;
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1[0x68] + 0x98);
  param_1[0x6d] = *(undefined8 *)(param_1[0x68] + 0xa0);
  return param_1;
}



// FUNCTION 1431add90 `scalar_deleting_destructor' body=84 status=ok
// SIG void * `scalar_deleting_destructor'(UMSFreeThreadProxy * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl Concurrency::details::UMSFreeThreadProxy::`scalar
   deleting destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::UMSFreeThreadProxy::_scalar_deleting_destructor_
          (UMSFreeThreadProxy *this,uint param_1)

{
  *(undefined ***)this = &PTR_FUN_145acc7b8;
  *(undefined ***)(this + 0x10) = &PTR_FUN_145acae80;
  *(undefined ***)(this + 0x18) = &PTR_LAB_145acc828;
  FUN_1431b7270();
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x370);
  }
  return this;
}



// FUNCTION 1431addf0 FUN_1431addf0 body=657 status=ok
// SIG undefined FUN_1431addf0(void)

int FUN_1431addf0(longlong param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  byte bVar7;
  bool bVar8;
  byte local_res20 [8];
  undefined4 local_208;
  undefined4 local_204;
  undefined1 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1b8 [2];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 *local_1a0;
  int *local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 *local_130;
  undefined4 local_128;
  undefined4 local_124;
  char local_120 [3];
  char local_11d;
  undefined8 local_118;
  undefined1 local_110 [224];
  byte local_30;
  
  plVar5 = (longlong *)CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,param_2,0);
  if (plVar5 == (longlong *)0x0) {
    return 2;
  }
  local_1f8 = *(undefined8 *)(param_1 + 0x208);
  local_1f0 = *(undefined8 *)(param_1 + 0x210);
  local_1e8 = param_1 + 0x120;
  local_1d8 = *(undefined4 *)(param_1 + 0x2b4);
  local_1e0 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  lVar6 = CAkContinuationList::Create();
  bVar8 = local_1e0 != 0;
  local_1e0 = lVar6;
  if (bVar8) {
    CAkContinuationList::Release();
  }
  local_200 = 0;
  local_208 = 0;
  local_204 = 9;
  FUN_14313bbf0(local_1b8);
  local_1b0 = *(undefined8 *)(param_1 + 0x340);
  piVar1 = *(int **)(param_1 + 0x1ec);
  local_184 = *(undefined4 *)(param_1 + 0x200);
  local_190 = *(undefined8 *)(param_1 + 500);
  local_188 = *(undefined4 *)(param_1 + 0x1fc);
  local_1b8[0] = 2;
  if (local_198 != (int *)0x0) {
    AkExternalSourceArray::Release();
  }
  uVar2 = local_184;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  local_138 = 0;
  bVar7 = local_30 & 0xfd;
  local_1a8 = *(undefined8 *)(param_1 + 0x30);
  local_1a0 = &local_208;
  local_130 = &local_1f8;
  local_118 = *(undefined8 *)(param_1 + 0x2d0);
  local_128 = *(undefined4 *)(param_1 + 0x2a8);
  local_134 = (undefined4)((longlong)((ulonglong)DAT_1467bdcac * (longlong)param_3) / 1000);
  local_124 = (undefined4)param_2;
  local_198 = piVar1;
  if ((local_120[0] == -0x70) && (local_11d != '\0')) {
    local_res20[0] = local_30 & 1;
    local_30 = bVar7;
    uVar3 = AkPBIParams::GetMidiTargetID(local_1b8);
    iVar4 = CAkParameterNode::FilterAndTransformMidiEvent
                      (plVar5,local_120,uVar3,local_res20,local_1a8,uVar2);
    if (iVar4 != 1) goto LAB_1431ae016;
    bVar7 = local_30 ^ (local_res20[0] ^ local_30) & 1;
  }
  local_30 = bVar7;
  iVar4 = FUN_1431a35f0(plVar5,local_1b8);
  if (iVar4 == 3) {
    iVar4 = 1;
  }
  else if (iVar4 == 1) {
    iVar4 = (**(code **)(*plVar5 + 0x238))(plVar5,local_1b8);
  }
LAB_1431ae016:
  if ((*(byte *)(param_1 + 0x294) & 1) != 0) {
    *(byte *)(param_1 + 0x294) = *(byte *)(param_1 + 0x294) | 2;
  }
  (**(code **)(*plVar5 + 0x10))(plVar5);
  DAT_146b51f48 = DAT_146b51f48 + 1;
  AkInitialSoundParams::DoTerm(local_110);
  if (local_198 != (int *)0x0) {
    AkExternalSourceArray::Release();
  }
  CAkModCtxRefContainer::~CAkModCtxRefContainer(&local_1d0);
  if (local_1e0 != 0) {
    CAkContinuationList::Release();
  }
  return iVar4;
}



// FUNCTION 1431ae090 FUN_1431ae090 body=285 status=ok
// SIG undefined FUN_1431ae090(void)

void FUN_1431ae090(longlong param_1,char param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_res8 [2];
  undefined8 local_res18;
  
  FUN_1431b7810();
  if (((*(byte *)(param_1 + 0x354) & 4) != 0) && ((*(byte *)(param_1 + 0x294) & 0x10) == 0)) {
    if (*(int *)(param_1 + 0x34c) != 0) {
      *(undefined1 *)(param_1 + 0x358) = 0;
      return;
    }
    if ((*(char *)(param_1 + 0x358) != '\0') &&
       ((param_2 == '\0' || (*(int *)(param_1 + 0x35c) == 0)))) {
      uVar1 = *(undefined8 *)(param_1 + 0x340);
      *(undefined1 *)(param_1 + 0x358) = 0;
      local_res18 = 0;
      local_res8[0] = 0;
      iVar2 = CAkDynamicSequence::GetNextToPlay(uVar1,local_res8,&local_res18,param_1 + 0x1ec);
      while ((iVar2 != 0 && (iVar3 = FUN_1431addf0(param_1,iVar2,local_res8[0]), iVar3 != 1))) {
        CAkPlayingMgr::NotifyEndOfDynamicSequenceItem
                  (DAT_146b50b00,*(undefined4 *)(param_1 + 0x200),iVar2,local_res18);
        local_res18 = 0;
        local_res8[0] = 0;
        iVar2 = CAkDynamicSequence::GetNextToPlay(uVar1,local_res8,&local_res18,param_1 + 0x1ec);
      }
    }
  }
  return;
}



// FUNCTION 1431ae1b0 FUN_1431ae1b0 body=74 status=ok
// SIG undefined FUN_1431ae1b0(void)

void FUN_1431ae1b0(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    CAkPlayingMgr::NotifyEndOfDynamicSequenceItem
              (DAT_146b50b00,*(undefined4 *)(param_1 + 0x1e8),*(undefined4 *)(param_1 + 0x348),
               *(undefined8 *)(param_1 + 0x350));
  }
  FUN_1431b8050(param_1,param_2);
  return;
}



// FUNCTION 1431ae200 CAkTransition body=34 status=ok
// SIG undefined CAkTransition(void)

undefined8 * CAkTransition::CAkTransition(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[6] = 0;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfc;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *param_1 = 0x20000000;
  return param_1;
}



// FUNCTION 1431ae230 ComputeTransition body=384 status=ok
// SIG undefined ComputeTransition(void)

undefined8 CAkTransition::ComputeTransition(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  
  uVar1 = *(uint *)(param_1 + 3);
  uVar5 = 0;
  if (param_2 < uVar1 + *(uint *)((longlong)param_1 + 0x1c)) {
    bVar2 = *(byte *)(param_1 + 8);
    fVar7 = 0.0;
    if (((bVar2 & 2) == 0) || (*(float *)((longlong)param_1 + 0x44) == 0.0)) {
      if (uVar1 < param_2) {
        fVar7 = (float)(param_2 - uVar1) / (float)*(uint *)((longlong)param_1 + 0x1c);
      }
      *(float *)(param_1 + 4) = fVar7;
      fVar7 = (float)FUN_143131e70(fVar7,*(undefined4 *)(param_1 + 1),
                                   *(undefined4 *)((longlong)param_1 + 0xc),
                                   *(undefined4 *)(param_1 + 7));
      bVar2 = *(byte *)(param_1 + 8);
    }
    else {
      fVar7 = (*(float *)(param_1 + 2) - *(float *)((longlong)param_1 + 0x14)) *
              *(float *)((longlong)param_1 + 0x44) + *(float *)((longlong)param_1 + 0x14);
    }
    if ((bVar2 & 1) != 0) {
      fVar3 = (float)(((uint)fVar7 & 0x7fffff) + 0x3f800000);
      fVar6 = fVar3 + 1.0;
      fVar7 = (((fVar3 * fVar3 * fVar3 - 1.0) * 1.1581186) / (fVar6 * fVar6 * fVar6)) * 20.0 +
              ((float)((uint)fVar7 >> 0x17 & 0xff) - 127.0) * 6.0206;
    }
  }
  else {
    fVar7 = *(float *)((longlong)param_1 + 0x14);
    uVar5 = 1;
  }
  puVar4 = (undefined8 *)param_1[5];
  *(float *)(param_1 + 2) = fVar7;
  if (puVar4 != puVar4 + *(uint *)(param_1 + 6)) {
    do {
      (*(code *)**(undefined8 **)*puVar4)((undefined8 *)*puVar4,*param_1,fVar7,uVar5);
      puVar4 = puVar4 + 1;
    } while (puVar4 != (undefined8 *)(param_1[5] + (ulonglong)*(uint *)(param_1 + 6) * 8));
  }
  return uVar5;
}



// FUNCTION 1431ae3b0 FUN_1431ae3b0 body=702 status=ok
// SIG undefined FUN_1431ae3b0(void)

undefined8 FUN_1431ae3b0(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  void *pvVar7;
  void *pvVar8;
  undefined8 uVar9;
  uint uVar10;
  float fVar11;
  longlong *plVar12;
  longlong *plVar13;
  byte bVar14;
  float fVar15;
  
  *param_1 = param_2[1];
  *(byte *)(param_1 + 8) =
       *(byte *)(param_1 + 8) ^ (*(byte *)(param_1 + 8) ^ *(byte *)(param_2 + 4)) & 1;
  bVar14 = (*(char *)((longlong)param_2 + 0x22) * '\x02' ^ *(byte *)(param_1 + 8)) & 2 ^
           *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar14;
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(int *)(param_1 + 2) = (int)param_2[2];
  fVar15 = *(float *)(param_2 + 2);
  fVar11 = *(float *)((longlong)param_2 + 0x14);
  if ((char)param_2[4] != '\0') {
    if (-37.0 <= fVar15 * 0.05) {
      uVar10 = (uint)(longlong)(fVar15 * 0.05 * 27866352.0 + 1.0653532e+09);
      fVar15 = (float)((uVar10 & 0x7fffff) + 0x3f800000);
      fVar15 = ((fVar15 * 0.32518977 + 0.020805772) * fVar15 + 0.65304345) *
               (float)(uVar10 & 0xff800000);
    }
    else {
      fVar15 = 0.0;
    }
    if (-37.0 <= fVar11 * 0.05) {
      uVar10 = (uint)(longlong)(fVar11 * 0.05 * 27866352.0 + 1.0653532e+09);
      fVar11 = (float)((uVar10 & 0x7fffff) + 0x3f800000);
      fVar11 = ((fVar11 * 0.32518977 + 0.020805772) * fVar11 + 0.65304345) *
               (float)(uVar10 & 0xff800000);
    }
    else {
      fVar11 = 0.0;
    }
  }
  *(float *)(param_1 + 1) = fVar15;
  *(float *)((longlong)param_1 + 0xc) = fVar11;
  if (((*(char *)((longlong)param_2 + 0x21) == '\0') || (fVar15 < fVar11)) ||
     ((*(int *)((longlong)param_2 + 0x1c) - 3U & 0xfffffffd) == 0)) {
    iVar5 = *(int *)((longlong)param_2 + 0x1c);
  }
  else {
    iVar5 = 8 - *(int *)((longlong)param_2 + 0x1c);
  }
  *(int *)(param_1 + 7) = iVar5;
  plVar13 = (longlong *)0x0;
  *(undefined4 *)(param_1 + 3) = param_3;
  iVar5 = ((int)param_2[3] + -1 + DAT_1467bdca8) / DAT_1467bdca8;
  *(undefined4 *)(param_1 + 4) = 0;
  *(int *)((longlong)param_1 + 0x1c) = iVar5;
  if (((bVar14 & 2) != 0) && ((int)param_2[3] != 0)) {
    fVar15 = _guard_xfg_dispatch_icall_nop
                       ((0.104166664 / (float)(int)param_2[3]) * (float)(int)-(uint)DAT_1467bdcb8);
    *(float *)((longlong)param_1 + 0x44) = fVar15;
  }
  plVar6 = (longlong *)param_1[5];
  uVar10 = *(uint *)(param_1 + 6);
  lVar4 = *param_2;
  plVar2 = plVar6 + uVar10;
  for (; (plVar6 != plVar2 && (*plVar6 != lVar4)); plVar6 = plVar6 + 1) {
  }
  plVar12 = plVar13;
  if (plVar6 != plVar2) {
    plVar12 = plVar6;
  }
  if (plVar12 == (longlong *)0x0) {
    if (uVar10 < *(uint *)((longlong)param_1 + 0x34)) {
LAB_1431ae634:
      uVar10 = *(uint *)(param_1 + 6);
      *(uint *)(param_1 + 6) = uVar10 + 1;
      plVar13 = (longlong *)(param_1[5] + (ulonglong)uVar10 * 8);
      if (plVar13 != (longlong *)0x0) {
        *plVar13 = lVar4;
        goto LAB_1431ae64d;
      }
    }
    else {
      uVar1 = *(uint *)((longlong)param_1 + 0x34) + 4;
      pvVar7 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 3);
      if (pvVar7 != (void *)0x0) {
        pvVar8 = (void *)param_1[5];
        if ((pvVar8 != (void *)0x0) && (pvVar8 != pvVar7)) {
          uVar3 = *(uint *)(param_1 + 6);
          if ((longlong *)(ulonglong)uVar3 != (longlong *)0x0) {
            do {
              *(undefined8 *)((longlong)pvVar7 + (longlong)plVar13 * 8) =
                   *(undefined8 *)(param_1[5] + (longlong)plVar13 * 8);
              plVar13 = (longlong *)((longlong)plVar13 + 1);
            } while (plVar13 < (longlong *)(ulonglong)uVar3);
            pvVar8 = (void *)param_1[5];
          }
          AK::MemoryMgr::Free(g_DefaultPoolId,pvVar8);
        }
        param_1[5] = (longlong)pvVar7;
        *(uint *)((longlong)param_1 + 0x34) = uVar1;
        if (uVar10 < uVar1) goto LAB_1431ae634;
      }
    }
    uVar9 = 2;
  }
  else {
LAB_1431ae64d:
    uVar9 = 1;
  }
  return uVar9;
}



// FUNCTION 1431ae670 IsFadingOut body=19 status=ok
// SIG undefined IsFadingOut(void)

undefined8 CAkTransition::IsFadingOut(longlong *param_1)

{
  return CONCAT71((int7)(*param_1 - 0x2000000U >> 8),
                  (*param_1 - 0x2000000U & 0xfffffffffdffffff) == 0);
}



// FUNCTION 1431ae690 UpdateFilteringCoeff body=74 status=ok
// SIG undefined UpdateFilteringCoeff(void)

void CAkTransition::UpdateFilteringCoeff(longlong param_1,int param_2)

{
  float fVar1;
  
  if (((*(byte *)(param_1 + 0x40) & 2) != 0) && (param_2 != 0)) {
    fVar1 = ::_guard_xfg_dispatch_icall_nop
                      ((0.104166664 / (float)param_2) * (float)(int)-(uint)DAT_1467bdcb8);
    *(float *)(param_1 + 0x44) = fVar1;
  }
  return;
}



// FUNCTION 1431ae6e0 FreeMarkers body=45 status=ok
// SIG undefined FreeMarkers(void)

void AkPipelineBuffer::FreeMarkers(longlong param_1)

{
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,*(void **)(param_1 + 0x20));
  }
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 1431ae710 GetCachedBuffer body=114 status=ok
// SIG undefined GetCachedBuffer(void)

undefined8 AkPipelineBufferBase::GetCachedBuffer(undefined8 *param_1,ushort param_2,uint param_3)

{
  void *pvVar1;
  
  pvVar1 = AK::MemoryMgr::Malign
                     (g_LEngineDefaultPoolId,(ulonglong)((param_3 & 0xff) * (uint)param_2 * 4),0x10)
  ;
  if (pvVar1 != (void *)0x0) {
    *param_1 = pvVar1;
    *(undefined2 *)((longlong)param_1 + 0x12) = 0;
    *(ushort *)(param_1 + 2) = param_2;
    *(uint *)(param_1 + 1) = param_3;
    return 1;
  }
  return 0x34;
}



// FUNCTION 1431ae790 ReleaseCachedBuffer body=38 status=ok
// SIG undefined ReleaseCachedBuffer(void)

void AkPipelineBufferBase::ReleaseCachedBuffer(undefined8 *param_1)

{
  AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,(void *)*param_1);
  *param_1 = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 1431ae7c0 CAkPath body=81 status=ok
// SIG undefined CAkPath(void)

undefined4 * CAkPath::CAkPath(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined2 *)((longlong)param_1 + 0x22) = 0;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x11) = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x1d) = 0;
  param_1[0x1f] = 0;
  return param_1;
}



// FUNCTION 1431ae820 FUN_1431ae820 body=14 status=ok
// SIG undefined FUN_1431ae820(void)

void FUN_1431ae820(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  if (*(short *)(puVar1 + 2) == 1) {
    if ((void *)*puVar1 != (void *)0x0) {
      *(undefined4 *)(puVar1 + 1) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*puVar1);
      *puVar1 = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    }
    AK::MemoryMgr::Free(g_DefaultPoolId,puVar1);
    return;
  }
  *(short *)(puVar1 + 2) = *(short *)(puVar1 + 2) + -1;
  return;
}



// FUNCTION 1431ae830 GetNextPathList body=172 status=ok
// SIG undefined GetNextPathList(void)

undefined8 CAkPath::GetNextPathList(longlong param_1)

{
  char cVar1;
  uint uVar2;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return 0x11;
  }
  uVar2 = *(uint *)(param_1 + 0x28);
  if ((uVar2 & 1) == 0) {
    *(short *)(param_1 + 0x20) = *(short *)(param_1 + 0x20) + 1;
    cVar1 = '\0';
    if (*(ushort *)(param_1 + 0x20) < *(ushort *)(param_1 + 0x22)) {
      if ((uVar2 & 2) != 0) {
        *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 0x18;
      }
    }
    else {
      if ((uVar2 & 2) != 0) {
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 8);
      }
      *(undefined2 *)(param_1 + 0x20) = 0;
      cVar1 = '\x01';
    }
  }
  else {
    cVar1 = PickRandomList(param_1);
    uVar2 = *(uint *)(param_1 + 0x28);
  }
  if (((uVar2 & 2) != 0) && ((cVar1 == '\0' || (*(char *)(param_1 + 0x2d) != '\0')))) {
    *(undefined2 *)(param_1 + 0x24) = 0;
    return 1;
  }
  return 0x11;
}



// FUNCTION 1431ae8e0 FUN_1431ae8e0 body=633 status=ok
// SIG undefined FUN_1431ae8e0(void)

void FUN_1431ae8e0(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  void *pvVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  void *pvVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *plVar15;
  
  plVar12 = *(longlong **)(param_2 + 8);
  if (plVar12 != plVar12 + *(uint *)(param_2 + 0x10)) {
    do {
      plVar7 = *(longlong **)(param_1 + 0x88);
      uVar10 = *(uint *)(param_1 + 0x90);
      lVar9 = *plVar12;
      plVar13 = plVar7 + (ulonglong)uVar10 * 6;
      for (; (plVar7 != plVar13 && (*plVar7 != lVar9)); plVar7 = plVar7 + 6) {
      }
      plVar15 = plVar7 + 1;
      if (plVar7 == plVar13) {
        plVar15 = (longlong *)0x0;
      }
      if (plVar15 == (longlong *)0x0) {
        if (uVar10 < *(uint *)(param_1 + 0x94)) {
LAB_1431aea2f:
          plVar15 = (longlong *)
                    ((ulonglong)*(uint *)(param_1 + 0x90) * 0x30 + *(longlong *)(param_1 + 0x88));
          *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) + 1;
LAB_1431aea52:
          if (plVar15 != (longlong *)0x0) {
            *plVar15 = lVar9;
            plVar15 = plVar15 + 1;
            goto LAB_1431aea62;
          }
        }
        else {
          uVar1 = *(uint *)(param_1 + 0x94) + 1;
          pvVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 * 0x30);
          if (pvVar6 != (void *)0x0) {
            pvVar11 = *(void **)(param_1 + 0x88);
            if ((pvVar11 != (void *)0x0) && (pvVar11 != pvVar6)) {
              uVar14 = (ulonglong)*(uint *)(param_1 + 0x90);
              if (uVar14 != 0) {
                lVar8 = 0;
                do {
                  lVar4 = *(longlong *)(param_1 + 0x88);
                  uVar5 = ((undefined8 *)(lVar8 + lVar4))[1];
                  *(undefined8 *)(lVar8 + (longlong)pvVar6) = *(undefined8 *)(lVar8 + lVar4);
                  ((undefined8 *)(lVar8 + (longlong)pvVar6))[1] = uVar5;
                  puVar2 = (undefined8 *)(lVar8 + 0x10 + lVar4);
                  uVar5 = puVar2[1];
                  puVar3 = (undefined8 *)(lVar8 + 0x10 + (longlong)pvVar6);
                  *puVar3 = *puVar2;
                  puVar3[1] = uVar5;
                  puVar2 = (undefined8 *)(lVar8 + 0x20 + lVar4);
                  uVar5 = puVar2[1];
                  puVar3 = (undefined8 *)(lVar8 + 0x20 + (longlong)pvVar6);
                  *puVar3 = *puVar2;
                  puVar3[1] = uVar5;
                  uVar14 = uVar14 - 1;
                  lVar8 = lVar8 + 0x30;
                } while (uVar14 != 0);
                pvVar11 = *(void **)(param_1 + 0x88);
              }
              AK::MemoryMgr::Free(g_DefaultPoolId,pvVar11);
            }
            plVar15 = (longlong *)0x0;
            *(void **)(param_1 + 0x88) = pvVar6;
            *(uint *)(param_1 + 0x94) = uVar1;
            if (uVar10 < uVar1) goto LAB_1431aea2f;
            goto LAB_1431aea52;
          }
LAB_1431aea62:
          if (plVar15 != (longlong *)0x0) goto LAB_1431aea75;
        }
      }
      else {
LAB_1431aea75:
        plVar7 = (longlong *)CAkListener::GetListenerMatrix(lVar9);
        if (plVar7 == (longlong *)0x0) {
          plVar7 = *(longlong **)(param_1 + 0x88);
          uVar10 = *(uint *)(param_1 + 0x90);
          plVar13 = plVar7 + (ulonglong)uVar10 * 6;
          if (plVar7 != plVar13) {
            do {
              if (*plVar7 == lVar9) break;
              plVar7 = plVar7 + 6;
            } while (plVar7 != plVar13);
            if (plVar7 != plVar13) {
              if (plVar7 < plVar13 + -6) {
                lVar9 = (((ulonglong)((longlong)(plVar13 + -6) + (-1 - (longlong)plVar7)) / 0x30 + 1
                         ) * 3 & 0xfffffffffffffff) << 1;
                plVar13 = plVar7 + 6;
                for (; lVar9 != 0; lVar9 = lVar9 + -1) {
                  *plVar7 = *plVar13;
                  plVar13 = plVar13 + 1;
                  plVar7 = plVar7 + 1;
                }
                uVar10 = *(uint *)(param_1 + 0x90);
              }
              *(uint *)(param_1 + 0x90) = uVar10 - 1;
            }
          }
        }
        else {
          lVar9 = plVar7[1];
          *plVar15 = *plVar7;
          plVar15[1] = lVar9;
          lVar9 = plVar7[3];
          plVar15[2] = plVar7[2];
          plVar15[3] = lVar9;
          *(int *)(plVar15 + 4) = (int)plVar7[4];
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 !=
             (longlong *)(*(longlong *)(param_2 + 8) + (ulonglong)*(uint *)(param_2 + 0x10) * 8));
  }
  return;
}



// FUNCTION 1431aeb60 FUN_1431aeb60 body=526 status=ok
// SIG undefined FUN_1431aeb60(void)

longlong * FUN_1431aeb60(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  void *pvVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  void *pvVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  
  plVar5 = *(longlong **)(param_1 + 0x88);
  uVar7 = *(uint *)(param_1 + 0x90);
  plVar10 = plVar5 + (ulonglong)uVar7 * 6;
  for (; (plVar5 != plVar10 && (*plVar5 != param_2)); plVar5 = plVar5 + 6) {
  }
  plVar12 = (longlong *)0x0;
  plVar9 = plVar5 + 1;
  if (plVar5 == plVar10) {
    plVar9 = plVar12;
  }
  if (plVar9 != (longlong *)0x0) goto LAB_1431aecae;
  if (uVar7 < *(uint *)(param_1 + 0x94)) {
LAB_1431aec77:
    plVar12 = (longlong *)
              ((ulonglong)*(uint *)(param_1 + 0x90) * 0x30 + *(longlong *)(param_1 + 0x88));
    *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) + 1;
LAB_1431aec95:
    if (plVar12 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
    *plVar12 = param_2;
    plVar9 = plVar12 + 1;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x94) + 1;
    pvVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 * 0x30);
    if (pvVar4 != (void *)0x0) {
      pvVar8 = *(void **)(param_1 + 0x88);
      if ((pvVar8 != (void *)0x0) && (pvVar8 != pvVar4)) {
        uVar11 = (ulonglong)*(uint *)(param_1 + 0x90);
        plVar5 = plVar12;
        if (uVar11 != 0) {
          do {
            lVar6 = *(longlong *)(param_1 + 0x88);
            uVar3 = ((undefined8 *)((longlong)plVar5 + lVar6))[1];
            *(undefined8 *)((longlong)plVar5 + (longlong)pvVar4) =
                 *(undefined8 *)((longlong)plVar5 + lVar6);
            ((undefined8 *)((longlong)plVar5 + (longlong)pvVar4))[1] = uVar3;
            puVar2 = (undefined8 *)((longlong)plVar5 + lVar6 + 0x10);
            uVar3 = puVar2[1];
            *(undefined8 *)((longlong)(plVar5 + 2) + (longlong)pvVar4) = *puVar2;
            ((undefined8 *)((longlong)(plVar5 + 2) + (longlong)pvVar4))[1] = uVar3;
            puVar2 = (undefined8 *)((longlong)plVar5 + lVar6 + 0x20);
            uVar3 = puVar2[1];
            *(undefined8 *)((longlong)(plVar5 + 4) + (longlong)pvVar4) = *puVar2;
            ((undefined8 *)((longlong)(plVar5 + 4) + (longlong)pvVar4))[1] = uVar3;
            uVar11 = uVar11 - 1;
            plVar5 = plVar5 + 6;
          } while (uVar11 != 0);
          pvVar8 = *(void **)(param_1 + 0x88);
        }
        AK::MemoryMgr::Free(g_DefaultPoolId,pvVar8);
      }
      *(void **)(param_1 + 0x88) = pvVar4;
      *(uint *)(param_1 + 0x94) = uVar1;
      if (uVar7 < uVar1) goto LAB_1431aec77;
      goto LAB_1431aec95;
    }
  }
  if (plVar9 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
LAB_1431aecae:
  plVar5 = (longlong *)CAkListener::GetListenerMatrix(param_2);
  if (plVar5 != (longlong *)0x0) {
    lVar6 = plVar5[1];
    *plVar9 = *plVar5;
    plVar9[1] = lVar6;
    lVar6 = plVar5[3];
    plVar9[2] = plVar5[2];
    plVar9[3] = lVar6;
    *(int *)(plVar9 + 4) = (int)plVar5[4];
    return plVar9;
  }
  plVar5 = *(longlong **)(param_1 + 0x88);
  uVar7 = *(uint *)(param_1 + 0x90);
  plVar10 = plVar5 + (ulonglong)uVar7 * 6;
  if (plVar5 != plVar10) {
    do {
      if (*plVar5 == param_2) break;
      plVar5 = plVar5 + 6;
    } while (plVar5 != plVar10);
    if (plVar5 != plVar10) {
      if (plVar5 < plVar10 + -6) {
        lVar6 = (((ulonglong)((longlong)(plVar10 + -6) + (-1 - (longlong)plVar5)) / 0x30 + 1) * 3 &
                0xfffffffffffffff) << 1;
        plVar10 = plVar5 + 6;
        for (; lVar6 != 0; lVar6 = lVar6 + -1) {
          *plVar5 = *plVar10;
          plVar10 = plVar10 + 1;
          plVar5 = plVar5 + 1;
        }
        uVar7 = *(uint *)(param_1 + 0x90);
      }
      *(uint *)(param_1 + 0x90) = uVar7 - 1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1431aed70 NextVertex body=591 status=ok
// SIG undefined NextVertex(void)

void CAkPath::NextVertex(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  ushort uVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint uVar12;
  longlong *plVar13;
  longlong lVar14;
  float fVar15;
  
  plVar13 = *(longlong **)(param_1 + 6);
  uVar4 = *(ushort *)(param_1 + 9);
  if ((int)(uint)uVar4 < (int)plVar13[1]) {
    puVar11 = (undefined4 *)((ulonglong)(uint)uVar4 * 0x10 + *plVar13);
    *(ushort *)(param_1 + 9) = uVar4 + 1;
    param_1[0x17] = *puVar11;
    param_1[0x18] = puVar11[1];
    param_1[0x19] = puVar11[2];
    RandomizePosition(param_1);
    iVar7 = (puVar11[3] + -1 + DAT_1467bdca8) / DAT_1467bdca8;
    uVar4 = *(ushort *)(param_1 + 9);
    if (iVar7 == 0) {
      iVar7 = 1;
    }
    plVar13 = *(longlong **)(param_1 + 6);
    param_1[0x13] = iVar7;
  }
  uVar9 = (ulonglong)uVar4;
  if ((int)plVar13[1] <= (int)(uint)uVar4) {
    uVar12 = param_1[10];
    if ((uVar12 & 1) == 0) {
      *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + 1;
      cVar6 = '\0';
      if (*(ushort *)(param_1 + 8) < *(ushort *)((longlong)param_1 + 0x22)) {
        if ((uVar12 & 2) != 0) {
          *(longlong **)(param_1 + 6) = plVar13 + 3;
        }
      }
      else {
        if ((uVar12 & 2) != 0) {
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 2);
        }
        *(undefined2 *)(param_1 + 8) = 0;
        cVar6 = '\x01';
      }
    }
    else {
      cVar6 = PickRandomList(param_1);
      uVar12 = param_1[10];
    }
    if (((uVar12 & 2) == 0) || ((cVar6 != '\0' && (*(char *)((longlong)param_1 + 0x2d) == '\0')))) {
      *param_1 = 0;
      return;
    }
    plVar13 = *(longlong **)(param_1 + 6);
    uVar9 = 0;
    *(undefined2 *)(param_1 + 9) = 0;
  }
  uVar3 = *(undefined8 *)(*plVar13 + uVar9 * 0x10);
  fVar5 = *(float *)(*plVar13 + 8 + uVar9 * 0x10);
  lVar10 = DAT_146b50b60 * 0x5851f42d4c957f2d + 1;
  fVar15 = *(float *)(*(longlong *)(param_1 + 6) + 0xc);
  lVar14 = lVar10 * 0x5851f42d4c957f2d + 1;
  fVar1 = *(float *)(*(longlong *)(param_1 + 6) + 0x10);
  lVar8 = lVar14 * 0x5851f42d4c957f2d + 1;
  uVar12 = param_1[0x12];
  fVar2 = *(float *)(*(longlong *)(param_1 + 6) + 0x14);
  DAT_146b50b60 = lVar8;
  param_1[0x11] = uVar12;
  param_1[0x12] = param_1[0x13] + uVar12;
  param_1[0x1a] =
       (((float)(uint)((ulonglong)lVar10 >> 0x21) * 9.313226e-10 - 1.0) * fVar15 + (float)uVar3) -
       (float)param_1[0x17];
  param_1[0x1b] =
       (((float)(uint)((ulonglong)lVar8 >> 0x21) * 9.313226e-10 - 1.0) * fVar2 +
       (float)((ulonglong)uVar3 >> 0x20)) - (float)param_1[0x18];
  param_1[0x1c] =
       (((float)(uint)((ulonglong)lVar14 >> 0x21) * 9.313226e-10 - 1.0) * fVar1 + fVar5) -
       (float)param_1[0x19];
  fVar15 = 1.0 / (float)(uint)param_1[0x13];
  param_1[0x14] = fVar15;
  param_1[0x15] = -((float)uVar12 * fVar15);
  return;
}



// FUNCTION 1431aefc0 Pause body=10 status=ok
// SIG undefined Pause(void)

void CAkPath::Pause(undefined4 *param_1,undefined4 param_2)

{
  param_1[0x16] = param_2;
  *param_1 = 2;
  return;
}



// FUNCTION 1431aefd0 PickRandomList body=197 status=ok
// SIG undefined PickRandomList(void)

ulonglong CAkPath::PickRandomList(longlong param_1)

{
  uint7 uVar2;
  ulonglong uVar1;
  ulonglong *puVar3;
  uint uVar4;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar5;
  
  DAT_146b50b60 = DAT_146b50b60 * 0x5851f42d4c957f2d + 1;
  uVar1 = (DAT_146b50b60 >> 0x21) / (ulonglong)*(ushort *)(param_1 + 0x22);
  uVar5 = (DAT_146b50b60 >> 0x21) % (ulonglong)*(ushort *)(param_1 + 0x22);
  *(short *)(param_1 + 0x20) = (short)uVar5;
  if ((*(byte *)(param_1 + 0x28) & 2) != 0) {
    uVar1 = *(ulonglong *)(param_1 + 8);
    *(ulonglong *)(param_1 + 0x18) = uVar1 + uVar5 * 0x18;
  }
  puVar3 = *(ulonglong **)(param_1 + 0x10);
  uVar2 = (uint7)(uVar1 >> 8);
  if (puVar3 == (ulonglong *)0x0) {
    return (ulonglong)uVar2 << 8;
  }
  uVar6 = (uint)puVar3[1];
  uVar7 = 0;
  uVar1 = CONCAT71(uVar2,1);
  uVar5 = uVar7;
  if (uVar6 != 0) {
    do {
      if (((char)uVar1 == '\0') || (uVar1 = *puVar3, *(char *)(uVar5 + uVar1) == '\0')) {
        uVar1 = uVar1 & 0xffffffffffffff00;
      }
      else {
        uVar1 = CONCAT71((int7)(uVar1 >> 8),1);
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < uVar6);
  }
  if (((char)uVar1 != '\0') && (uVar6 != 0)) {
    do {
      *(undefined1 *)(uVar7 + *puVar3) = 0;
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < (uint)puVar3[1]);
    puVar3 = *(ulonglong **)(param_1 + 0x10);
  }
  *(undefined1 *)((ulonglong)*(ushort *)(param_1 + 0x20) + *puVar3) = 1;
  return uVar1;
}



// FUNCTION 1431af0a0 RandomizePosition body=202 status=ok
// SIG undefined RandomizePosition(void)

void CAkPath::RandomizePosition(longlong param_1,float *param_2)

{
  DAT_146b50b60 = DAT_146b50b60 * 0x5851f42d4c957f2d + 1;
  *param_2 = ((float)(uint)((ulonglong)DAT_146b50b60 >> 0x21) * 9.313226e-10 - 1.0) *
             *(float *)(*(longlong *)(param_1 + 0x18) + 0xc) + *param_2;
  DAT_146b50b60 = DAT_146b50b60 * 0x5851f42d4c957f2d + 1;
  param_2[2] = ((float)(uint)((ulonglong)DAT_146b50b60 >> 0x21) * 9.313226e-10 - 1.0) *
               *(float *)(*(longlong *)(param_1 + 0x18) + 0x10) + param_2[2];
  DAT_146b50b60 = DAT_146b50b60 * 0x5851f42d4c957f2d + 1;
  param_2[1] = ((float)(uint)((ulonglong)DAT_146b50b60 >> 0x21) * 9.313226e-10 - 1.0) *
               *(float *)(*(longlong *)(param_1 + 0x18) + 0x14) + param_2[1];
  return;
}



// FUNCTION 1431af170 Resume body=44 status=ok
// SIG undefined Resume(void)

void CAkPath::Resume(undefined4 *param_1,int param_2)

{
  param_1[0x11] = param_1[0x11] + (param_2 - param_1[0x16]);
  param_1[0x12] = param_1[0x12] + (param_2 - param_1[0x16]);
  *param_1 = 1;
  param_1[0x15] = -((float)(uint)param_1[0x11] * (float)param_1[0x14]);
  return;
}



// FUNCTION 1431af1a0 SetIsLooping body=4 status=ok
// SIG undefined SetIsLooping(void)

void CAkPath::SetIsLooping(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x2d) = param_2;
  return;
}



// FUNCTION 1431af1b0 FUN_1431af1b0 body=462 status=ok
// SIG undefined FUN_1431af1b0(void)

undefined8
FUN_1431af1b0(int *param_1,undefined8 param_2,uint param_3,uint param_4,undefined1 param_5,
             ushort *param_6)

{
  ushort uVar1;
  longlong lVar2;
  longlong *plVar3;
  void *pvVar4;
  void *pvVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  
  uVar9 = 2;
  if (*param_1 == 0) {
    *(undefined8 *)(param_1 + 2) = param_2;
    *(short *)((longlong)param_1 + 0x22) = (short)param_3;
    param_1[10] = param_4;
    *(undefined1 *)((longlong)param_1 + 0x2d) = param_5;
    lVar2 = *(longlong *)(param_6 + 4);
    if (lVar2 == 0) {
      *(undefined8 *)(param_1 + 6) = param_2;
      plVar8 = (longlong *)0x0;
      *(undefined2 *)(param_1 + 8) = 0;
      plVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x18);
      if (plVar3 == (longlong *)0x0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        *plVar3 = 0;
        plVar3[1] = 0;
        *(undefined2 *)(plVar3 + 2) = 0;
        if (param_3 != 0) {
          pvVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)param_3);
          if (pvVar4 == (void *)0x0) {
            if ((void *)*plVar3 != (void *)0x0) {
              *(undefined4 *)(plVar3 + 1) = 0;
              AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*plVar3);
              *plVar3 = 0;
              *(undefined4 *)((longlong)plVar3 + 0xc) = 0;
            }
            AK::MemoryMgr::Free(g_DefaultPoolId,plVar3);
            plVar3 = plVar8;
          }
          else {
            pvVar5 = (void *)*plVar3;
            if ((pvVar5 != (void *)0x0) && (pvVar5 != pvVar4)) {
              uVar7 = *(uint *)(plVar3 + 1);
              plVar6 = plVar8;
              if ((longlong *)(ulonglong)uVar7 != (longlong *)0x0) {
                do {
                  *(undefined1 *)((longlong)plVar6 + (longlong)pvVar4) =
                       *(undefined1 *)((longlong)plVar6 + *plVar3);
                  plVar6 = (longlong *)((longlong)plVar6 + 1);
                } while (plVar6 < (longlong *)(ulonglong)uVar7);
                pvVar5 = (void *)*plVar3;
              }
              AK::MemoryMgr::Free(g_DefaultPoolId,pvVar5);
            }
            *plVar3 = (longlong)pvVar4;
            *(uint *)((longlong)plVar3 + 0xc) = param_3;
            *(uint *)(plVar3 + 1) = param_3;
            if (param_3 != 0) {
              do {
                uVar7 = (int)plVar8 + 1;
                *(undefined1 *)((longlong)plVar8 + *plVar3) = 0;
                plVar8 = (longlong *)(ulonglong)uVar7;
              } while (uVar7 < *(uint *)(plVar3 + 1));
            }
          }
        }
      }
      if (*(longlong *)(param_1 + 4) != 0) {
        AkSharedPathState::Release();
      }
      *(longlong **)(param_1 + 4) = plVar3;
      if (plVar3 == (longlong *)0x0) {
        return 2;
      }
      *(short *)(plVar3 + 2) = (short)plVar3[2] + 1;
      if (*(longlong *)(param_1 + 4) == 0) {
        return 2;
      }
      if ((param_4 & 1) != 0) {
        CAkPath::PickRandomList(param_1);
      }
    }
    else {
      if (*(longlong *)(param_1 + 4) != 0) {
        AkSharedPathState::Release();
      }
      *(longlong *)(param_1 + 4) = lVar2;
      if (lVar2 != 0) {
        *(short *)(lVar2 + 0x10) = *(short *)(lVar2 + 0x10) + 1;
      }
      uVar1 = *param_6;
      *(ushort *)(param_1 + 8) = uVar1;
      *(ulonglong *)(param_1 + 6) = *(longlong *)(param_1 + 2) + (ulonglong)uVar1 * 0x18;
    }
    uVar9 = 1;
  }
  return uVar9;
}



// FUNCTION 1431af380 FUN_1431af380 body=7 status=ok
// SIG undefined FUN_1431af380(void)

void FUN_1431af380(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x84) = param_2;
  return;
}



// FUNCTION 1431af390 FUN_1431af390 body=7 status=ok
// SIG undefined FUN_1431af390(void)

void FUN_1431af390(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x80) = param_2;
  return;
}



// FUNCTION 1431af3a0 FUN_1431af3a0 body=553 status=ok
// SIG undefined FUN_1431af3a0(void)

undefined8 FUN_1431af3a0(undefined4 *param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  float fVar7;
  undefined8 local_18;
  float local_10;
  
  plVar6 = *(longlong **)(param_1 + 6);
  if (plVar6 == (longlong *)0x0) {
    return 2;
  }
  *(undefined1 *)(param_1 + 0xb) = 1;
  if (0 < (int)plVar6[1]) {
    *(undefined2 *)(param_1 + 9) = 0;
    pfVar3 = (float *)*plVar6;
    *(undefined2 *)(param_1 + 9) = 1;
    fVar7 = *pfVar3;
    param_1[0x17] = fVar7;
    fVar1 = pfVar3[1];
    param_1[0x18] = fVar1;
    fVar2 = pfVar3[2];
    param_1[0x19] = fVar2;
    iVar5 = ((int)pfVar3[3] + -1 + DAT_1467bdca8) / DAT_1467bdca8;
    if (iVar5 == 0) {
      iVar5 = 1;
    }
    param_1[0x13] = iVar5;
    if ((int)plVar6[1] < 2) {
      local_10 = 0.0;
      local_18._4_4_ = 0.0;
      local_18._0_4_ = 0.0;
    }
    else {
      local_18 = *(undefined8 *)(*plVar6 + 0x10);
      local_10 = *(float *)(*plVar6 + 0x18);
      if ((((fVar7 == (float)local_18) &&
           (local_18._4_4_ = (float)((ulonglong)local_18 >> 0x20), fVar1 == local_18._4_4_)) &&
          (fVar2 == local_10)) && ((int)plVar6[1] < 3)) {
        CAkPath::RandomizePosition(param_1,param_1 + 0x17);
        local_18._4_4_ = (float)param_1[0x18] - (float)param_1[0x18];
        local_18._0_4_ = (float)param_1[0x17] - (float)param_1[0x17];
        local_10 = (float)param_1[0x19] - (float)param_1[0x19];
      }
      else {
        CAkPath::RandomizePosition(param_1,param_1 + 0x17);
        CAkPath::RandomizePosition(param_1,&local_18);
        local_10 = local_10 - (float)param_1[0x19];
        local_18._4_4_ = local_18._4_4_ - (float)param_1[0x18];
        local_18._0_4_ = (float)local_18 - (float)param_1[0x17];
      }
    }
    param_1[0x1a] = (float)local_18;
    param_1[0x1b] = local_18._4_4_;
    param_1[0x1c] = local_10;
    plVar6 = *(longlong **)(param_1 + 0xc);
    if (plVar6 != plVar6 + (uint)param_1[0xe]) {
      do {
        lVar4 = *plVar6;
        plVar6 = plVar6 + 1;
        lVar4 = *(longlong *)(lVar4 + 0x168);
        fVar7 = (float)param_1[0x19];
        *(ulonglong *)(lVar4 + 0xc) =
             CONCAT44(*(float *)(lVar4 + 0x10) + (float)param_1[0x18],
                      *(float *)(lVar4 + 0xc) + (float)param_1[0x17]);
        *(float *)(lVar4 + 0x14) = *(float *)(lVar4 + 0x14) + fVar7;
      } while (plVar6 != (longlong *)
                         (*(longlong *)(param_1 + 0xc) + (ulonglong)(uint)param_1[0xe] * 8));
    }
    *(undefined8 *)(param_1 + 0x1d) = *(undefined8 *)(param_1 + 0x17);
    param_1[0x1f] = param_1[0x19];
    param_1[0x12] = param_1[0x13] + param_2;
    *param_1 = 1;
    param_1[0x11] = param_2;
    fVar7 = 1.0 / (float)(uint)param_1[0x13];
    param_1[0x14] = fVar7;
    param_1[0x15] = -((float)param_2 * fVar7);
    return 1;
  }
  return 0x25;
}



// FUNCTION 1431af5d0 Term body=124 status=ok
// SIG undefined Term(void)

void CAkPath::Term(undefined4 *param_1)

{
  *param_1 = 0;
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
    param_1[0xe] = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0xc));
    *(undefined8 *)(param_1 + 0xc) = 0;
    param_1[0xf] = 0;
  }
  if ((*(byte *)(param_1 + 10) & 2) != 0) {
    if (*(longlong *)(param_1 + 4) != 0) {
      AkSharedPathState::Release();
    }
    *(undefined8 *)(param_1 + 4) = 0;
  }
  if (*(void **)(param_1 + 0x22) != (void *)0x0) {
    param_1[0x24] = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x22));
    *(undefined8 *)(param_1 + 0x22) = 0;
    param_1[0x25] = 0;
  }
  return;
}



// FUNCTION 1431af650 FUN_1431af650 body=263 status=ok
// SIG undefined FUN_1431af650(void)

void FUN_1431af650(longlong param_1,uint param_2)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = 1.0;
  fVar4 = (float)param_2 * *(float *)(param_1 + 0x50) + *(float *)(param_1 + 0x54);
  if ((fVar4 < 1.0) && (fVar5 = fVar4, fVar4 <= 0.0)) {
    fVar5 = 0.0;
  }
  plVar3 = *(longlong **)(param_1 + 0x30);
  fVar7 = fVar5 * *(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x5c);
  fVar8 = fVar5 * *(float *)(param_1 + 0x6c) + *(float *)(param_1 + 0x60);
  fVar6 = fVar5 * *(float *)(param_1 + 0x70) + *(float *)(param_1 + 100);
  fVar5 = *(float *)(param_1 + 0x74);
  fVar4 = *(float *)(param_1 + 0x78);
  fVar1 = *(float *)(param_1 + 0x7c);
  if (plVar3 != plVar3 + *(uint *)(param_1 + 0x38)) {
    do {
      lVar2 = *plVar3;
      plVar3 = plVar3 + 1;
      lVar2 = *(longlong *)(lVar2 + 0x168);
      *(ulonglong *)(lVar2 + 0xc) =
           CONCAT44((fVar8 - fVar4) + *(float *)(lVar2 + 0x10),
                    (fVar7 - fVar5) + *(float *)(lVar2 + 0xc));
      *(float *)(lVar2 + 0x14) = (fVar6 - fVar1) + *(float *)(lVar2 + 0x14);
    } while (plVar3 != (longlong *)
                       (*(longlong *)(param_1 + 0x30) + (ulonglong)*(uint *)(param_1 + 0x38) * 8));
  }
  *(ulonglong *)(param_1 + 0x74) = CONCAT44(fVar8,fVar7);
  *(float *)(param_1 + 0x7c) = fVar6;
  if (param_2 < *(uint *)(param_1 + 0x48)) {
    return;
  }
  CAkPath::NextVertex(param_1);
  return;
}



// FUNCTION 1431af760 FUN_1431af760 body=142 status=ok
// SIG undefined FUN_1431af760(void)

void FUN_1431af760(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 != plVar3 + *(uint *)(param_1 + 0x38)) {
    do {
      lVar2 = *plVar3;
      plVar3 = plVar3 + 1;
      lVar2 = *(longlong *)(lVar2 + 0x168);
      fVar1 = *(float *)(param_1 + 100);
      *(ulonglong *)(lVar2 + 0xc) =
           CONCAT44(*(float *)(lVar2 + 0x10) + *(float *)(param_1 + 0x60),
                    *(float *)(lVar2 + 0xc) + *(float *)(param_1 + 0x5c));
      *(float *)(lVar2 + 0x14) = *(float *)(lVar2 + 0x14) + fVar1;
    } while (plVar3 != (longlong *)
                       (*(longlong *)(param_1 + 0x30) + (ulonglong)*(uint *)(param_1 + 0x38) * 8));
  }
  *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 100);
  return;
}



// FUNCTION 1431af7f0 CreateWriter body=48 status=ok
// SIG undefined CreateWriter(void)

void FileCaptureWriterFactory::CreateWriter(void)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x10);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &PTR_StartCapture_145acc8a0;
  }
  return;
}



// FUNCTION 1431af820 Destroy body=78 status=ok
// SIG undefined Destroy(void)

void FileCaptureWriter::Destroy(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = g_DefaultPoolId;
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = &PTR_StartCapture_145acc8a0;
    if ((longlong *)param_1[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[1] + 8))();
      param_1[1] = 0;
    }
    AK::MemoryMgr::Free(lVar1,param_1);
  }
  return;
}



// FUNCTION 1431af870 Instance body=8 status=ok
// SIG undefined Instance(void)

undefined ** FileCaptureWriterFactory::Instance(void)

{
  return &PTR_PTR_1467be3a0;
}



// FUNCTION 1431af880 WriteGenericData body=46 status=ok
// SIG undefined WriteGenericData(void)

void FileCaptureWriter::WriteGenericData(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_res8 [32];
  
  (**(code **)(**(longlong **)(param_1 + 8) + 0x38))
            (*(longlong **)(param_1 + 8),param_2,param_3,
             CONCAT71((int7)((ulonglong)local_res8 >> 8),1),0,0,local_res8);
  return;
}



// FUNCTION 1431af8b0 StartCapture body=225 status=ok
// SIG undefined StartCapture(void)

ulonglong FileCaptureWriter::StartCapture
                    (longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 local_res8 [8];
  undefined4 local_38;
  undefined8 local_34;
  undefined8 local_28;
  undefined1 local_20;
  undefined4 local_1c;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    local_1c = 0xffffffff;
    local_34 = 1;
    local_38 = 0;
    local_20 = 0;
    local_28 = 0;
    uVar3 = (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x20))
                      (AK::IAkStreamMgr::m_pStreamMgr,param_2,&local_38,2,puVar1,1);
    if ((int)uVar3 == 1) {
      uVar2 = (**(code **)(*(longlong *)*puVar1 + 0x38))
                        ((longlong *)*puVar1,param_3,param_4,1,100,0,local_res8);
      uVar3 = (ulonglong)uVar2;
      if (uVar2 != 1) {
        (**(code **)(*(longlong *)*puVar1 + 8))();
        *puVar1 = 0;
      }
    }
    return uVar3;
  }
  return 1;
}



// FUNCTION 1431af9a0 StopCapture body=165 status=ok
// SIG undefined StopCapture(void)

int FileCaptureWriter::StopCapture(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 local_res8 [8];
  
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 == (longlong *)0x0) {
    return 2;
  }
  iVar2 = (**(code **)(*plVar1 + 0x48))(plVar1,0,0,0);
  if (iVar2 == 1) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))
                      (*(longlong **)(param_1 + 8),param_2,param_3,1,0,0,local_res8);
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 8))();
  *(undefined8 *)(param_1 + 8) = 0;
  return iVar2;
}



// FUNCTION 1431afa50 FUN_1431afa50 body=195 status=ok
// SIG undefined FUN_1431afa50(void)

undefined8 * FUN_1431afa50(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_145acc8c8;
  FUN_1431afb70();
  if ((void *)param_1[0x15] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x16) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[0x15]);
    param_1[0x15] = 0;
    *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  }
  puVar1 = param_1 + 6;
  lVar2 = 7;
  do {
    if ((void *)*puVar1 != (void *)0x0) {
      AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*puVar1);
      *puVar1 = 0;
    }
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  CAkIndexable::~CAkIndexable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 1431afb20 AddRef body=77 status=ok
// SIG undefined AddRef(void)

int CAkAttenuation::AddRef(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = DAT_146b50af8;
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_146b50af8 + 0x180));
  iVar2 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x180));
  return iVar2;
}



// FUNCTION 1431afb70 FUN_1431afb70 body=150 status=ok
// SIG undefined FUN_1431afb70(void)

void FUN_1431afb70(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != lVar1 + (ulonglong)*(uint *)(param_1 + 0xb0) * 0x28) {
    do {
      if (*(void **)(lVar1 + 0x18) != (void *)0x0) {
        AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(lVar1 + 0x18));
        *(undefined8 *)(lVar1 + 0x18) = 0;
      }
      *(undefined8 *)(lVar1 + 0x20) = 0;
      lVar1 = lVar1 + 0x28;
    } while (lVar1 != *(longlong *)(param_1 + 0xa8) + (ulonglong)*(uint *)(param_1 + 0xb0) * 0x28);
    *(undefined4 *)(param_1 + 0xb0) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  return;
}



// FUNCTION 1431afc10 FUN_1431afc10 body=284 status=ok
// SIG undefined FUN_1431afc10(void)

undefined8 * FUN_1431afc10(void)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  
  puVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0xb8);
  if (puVar4 != (undefined8 *)0x0) {
    CAkIndexable::CAkIndexable(puVar4);
    *puVar4 = &PTR_FUN_145acc8c8;
    puVar4[7] = 0;
    puVar4[9] = 0;
    puVar4[0xb] = 0;
    puVar4[0xd] = 0;
    puVar4[0xf] = 0;
    puVar4[0x11] = 0;
    puVar4[0x13] = 0;
    puVar4[0x15] = 0;
    puVar4[0x16] = 0;
    *(undefined4 *)(puVar4 + 0x14) = 0xffffffff;
    puVar4[6] = 0;
    puVar4[8] = 0;
    puVar4[10] = 0;
    puVar4[0xc] = 0;
    *(undefined2 *)((longlong)puVar4 + 0xa4) = 0xffff;
    puVar4[0xe] = 0;
    puVar4[0x10] = 0;
    *(undefined1 *)((longlong)puVar4 + 0xa6) = 0xff;
    puVar4[0x12] = 0;
    lVar2 = DAT_146b50af8;
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0x180);
    EnterCriticalSection(lpCriticalSection);
    cVar3 = FUN_14313b140(lVar2 + 0x1a8);
    if (cVar3 != '\0') {
      uVar1 = (ulonglong)*(uint *)(puVar4 + 2) % (ulonglong)*(uint *)(lVar2 + 0x1b0);
      puVar4[1] = *(undefined8 *)(*(longlong *)(lVar2 + 0x1a8) + uVar1 * 8);
      *(undefined8 **)(*(longlong *)(lVar2 + 0x1a8) + uVar1 * 8) = puVar4;
      *(int *)(lVar2 + 0x1b8) = *(int *)(lVar2 + 0x1b8) + 1;
    }
    LeaveCriticalSection(lpCriticalSection);
    return puVar4;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431afd30 Release body=239 status=ok
// SIG undefined Release(void)

undefined4 CAkAttenuation::Release(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  long lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lVar8 = DAT_146b50af8;
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_146b50af8 + 0x180));
  piVar1 = (int *)((longlong)param_1 + 0x14);
  *piVar1 = *piVar1 + -1;
  lVar9 = DAT_146b50af8;
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x14);
  if (*piVar1 == 0) {
    uVar4 = *(uint *)(param_1 + 2);
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0x180);
    EnterCriticalSection(lpCriticalSection);
    if (*(uint *)(lVar9 + 0x1b0) != 0) {
      plVar2 = (longlong *)
               (*(longlong *)(lVar9 + 0x1a8) +
               ((ulonglong)uVar4 % (ulonglong)*(uint *)(lVar9 + 0x1b0)) * 8);
      lVar10 = *plVar2;
      lVar6 = 0;
      while (lVar5 = lVar10, lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x10) == uVar4) {
          if (lVar6 == 0) {
            *plVar2 = *(longlong *)(lVar5 + 8);
          }
          else {
            *(longlong *)(lVar6 + 8) = *(longlong *)(lVar5 + 8);
          }
          *(int *)(lVar9 + 0x1b8) = *(int *)(lVar9 + 0x1b8) + -1;
          break;
        }
        lVar6 = lVar5;
        lVar10 = *(longlong *)(lVar5 + 8);
      }
    }
    LeaveCriticalSection(lpCriticalSection);
    lVar7 = g_DefaultPoolId;
    (**(code **)*param_1)(param_1,0);
    AK::MemoryMgr::Free(lVar7,param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x180));
  return uVar3;
}



// FUNCTION 1431afe20 Set body=178 status=ok
// SIG undefined Set(void)

undefined8
CAkConversionTable::Set(undefined8 *param_1,void *param_2,uint param_3,undefined4 param_4)

{
  void *_Dst;
  undefined8 uVar1;
  
  if ((void *)*param_1 != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*param_1);
    *param_1 = 0;
  }
  param_1[1] = 0;
  if ((param_2 == (void *)0x0) || (param_3 == 0)) {
    uVar1 = 0x1f;
  }
  else {
    _Dst = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)param_3 * 0xc);
    *param_1 = _Dst;
    if (_Dst == (void *)0x0) {
      *(undefined4 *)(param_1 + 1) = 0;
      uVar1 = 0x34;
    }
    else {
      ::_guard_xfg_dispatch_icall_nop(_Dst,param_2,(ulonglong)(param_3 * 0xc));
      uVar1 = 1;
      *(uint *)(param_1 + 1) = param_3;
      *(undefined4 *)((longlong)param_1 + 0xc) = param_4;
    }
  }
  return uVar1;
}



// FUNCTION 1431afee0 FUN_1431afee0 body=810 status=ok
// SIG undefined FUN_1431afee0(void)

int FUN_1431afee0(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  void *_Dst;
  uint uVar6;
  ulonglong uVar7;
  float *pfVar8;
  void *_Src;
  byte *pbVar9;
  byte *pbVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  bool bVar14;
  
  bVar14 = *(char *)(param_2 + 4) != '\0';
  pfVar8 = (float *)(param_2 + 5);
  *(byte *)(param_1 + 0xa7) = bVar14 | *(byte *)(param_1 + 0xa7) & 0xfe;
  if (bVar14) {
    *(float *)(param_1 + 0x18) = (*pfVar8 - (float)(int)(*pfVar8 * 0.0027777778)) * 0.008726646;
    *(float *)(param_1 + 0x1c) =
         (*(float *)(param_2 + 9) - (float)(int)(*(float *)(param_2 + 9) * 0.0027777778)) *
         0.008726646;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0xd);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x11);
    pfVar8 = (float *)(param_2 + 0x19);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x15);
  }
  uVar11 = 0;
  *(undefined1 *)(param_1 + 0xa0) = *(undefined1 *)pfVar8;
  *(undefined1 *)(param_1 + 0xa1) = *(undefined1 *)((longlong)pfVar8 + 1);
  *(undefined1 *)(param_1 + 0xa2) = *(undefined1 *)((longlong)pfVar8 + 2);
  *(undefined1 *)(param_1 + 0xa3) = *(undefined1 *)((longlong)pfVar8 + 3);
  *(undefined1 *)(param_1 + 0xa4) = *(undefined1 *)(pfVar8 + 1);
  *(undefined1 *)(param_1 + 0xa5) = *(undefined1 *)((longlong)pfVar8 + 5);
  *(undefined1 *)(param_1 + 0xa6) = *(undefined1 *)((longlong)pfVar8 + 6);
  bVar1 = *(byte *)((longlong)pfVar8 + 7);
  pfVar8 = pfVar8 + 2;
  if (bVar1 == 0) {
    return 2;
  }
  puVar12 = (uint *)(param_1 + 0x38);
  uVar7 = uVar11;
  do {
    bVar2 = *(byte *)pfVar8;
    uVar3 = *(ushort *)((longlong)pfVar8 + 1);
    _Src = (void *)((longlong)pfVar8 + 3);
    if (*(void **)(puVar12 + -2) != (void *)0x0) {
      AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(puVar12 + -2));
      puVar12[-2] = 0;
      puVar12[-1] = 0;
    }
    puVar12[0] = 0;
    puVar12[1] = 0;
    if ((_Src == (void *)0x0) || (uVar3 == 0)) {
      return 0x1f;
    }
    _Dst = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar3 * 0xc);
    *(void **)(puVar12 + -2) = _Dst;
    if (_Dst == (void *)0x0) {
      *puVar12 = 0;
      return 0x34;
    }
    _guard_xfg_dispatch_icall_nop(_Dst,_Src,(ulonglong)(((uint)uVar3 + (uint)uVar3 * 2) * 4));
    *puVar12 = (uint)uVar3;
    puVar12[1] = (uint)bVar2;
    uVar13 = (uint)uVar7;
    if (((*(byte *)(param_1 + 0xa0) == uVar13) || (*(byte *)(param_1 + 0xa1) == uVar13)) ||
       (*(byte *)(param_1 + 0xa2) == uVar13)) {
      if (bVar2 == 0) {
        puVar12[1] = 4;
      }
      else if (bVar2 == 2) {
        uVar7 = uVar11;
        if (uVar3 != 0) {
          do {
            uVar6 = (int)uVar7 + 1;
            *(float *)(*(longlong *)(puVar12 + -2) + 4 + uVar7 * 0xc) =
                 *(float *)(*(longlong *)(puVar12 + -2) + 4 + uVar7 * 0xc) + 1.0;
            uVar7 = (ulonglong)uVar6;
          } while (uVar6 < *puVar12);
        }
        puVar12[1] = 0;
      }
    }
    uVar7 = (ulonglong)(uVar13 + 1);
    puVar12 = puVar12 + 4;
    pfVar8 = (float *)((longlong)_Src + (ulonglong)uVar3 * 0xc);
  } while (uVar13 + 1 < (uint)bVar1);
  uVar3 = *(ushort *)pfVar8;
  pbVar9 = (byte *)((longlong)pfVar8 + 2);
  if (uVar3 != 0) {
    do {
      bVar1 = pbVar9[6];
      uVar13 = bVar1 & 0x7f;
      pbVar10 = pbVar9 + 7;
      while ((char)bVar1 < '\0') {
        bVar1 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        uVar13 = bVar1 & 0x7f | uVar13 << 7;
      }
      uVar4 = *(ushort *)(pbVar10 + 5);
      iVar5 = FUN_1431b0210(param_1,*(undefined4 *)pbVar9,pbVar9[4],pbVar9[5],uVar13,
                            *(undefined4 *)pbVar10,pbVar10[4],pbVar10 + 7,uVar4,1);
      if (iVar5 != 1) {
        return iVar5;
      }
      uVar13 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar13;
      pbVar9 = pbVar10 + 7 + (ulonglong)uVar4 * 0xc;
    } while (uVar13 < uVar3);
  }
  return 1;
}



// FUNCTION 1431b0210 FUN_1431b0210 body=643 status=ok
// SIG undefined FUN_1431b0210(void)

undefined8
FUN_1431b0210(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
             int param_6,undefined4 param_7,longlong param_8,int param_9)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 *puVar10;
  
  puVar4 = *(undefined8 **)(param_1 + 0xa8);
  uVar9 = *(uint *)(param_1 + 0xb0);
  uVar6 = (ulonglong)uVar9;
  if (puVar4 != puVar4 + uVar6 * 5) {
    lVar8 = (longlong)puVar4 + 0x24;
    puVar7 = puVar4;
    do {
      if ((*(int *)(lVar8 + -0x18) == param_5) && (*(int *)(lVar8 + -0x14) == param_6)) {
        if (*(void **)(lVar8 + -0xc) != (void *)0x0) {
          AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(lVar8 + -0xc));
          *(undefined8 *)(lVar8 + -0xc) = 0;
        }
        *(undefined8 *)(lVar8 + -4) = 0;
        uVar9 = *(uint *)(param_1 + 0xb0);
        puVar4 = *(undefined8 **)(param_1 + 0xa8);
        if (puVar7 < puVar4 + ((ulonglong)uVar9 - 1) * 5) {
          uVar6 = ((ulonglong)
                   ((longlong)(puVar4 + ((ulonglong)uVar9 - 1) * 5) + (-1 - (longlong)puVar7)) /
                   0x28 + 1) * 5 & 0x1fffffffffffffff;
          puVar4 = (undefined8 *)(lVar8 + 4);
          puVar10 = puVar7;
          for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar10 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar10 = puVar10 + 1;
          }
          uVar9 = *(uint *)(param_1 + 0xb0);
          puVar4 = *(undefined8 **)(param_1 + 0xa8);
        }
        uVar9 = uVar9 - 1;
        *(uint *)(param_1 + 0xb0) = uVar9;
      }
      else {
        puVar7 = puVar7 + 5;
        uVar9 = (uint)uVar6;
        lVar8 = lVar8 + 0x28;
      }
      uVar6 = (ulonglong)uVar9;
    } while (puVar7 != puVar4 + (ulonglong)uVar9 * 5);
  }
  if (*(uint *)(param_1 + 0xb4) <= uVar9) {
    uVar1 = *(uint *)(param_1 + 0xb4) + 2;
    puVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 * 0x28);
    if (puVar4 == (undefined8 *)0x0) {
      return 2;
    }
    puVar7 = *(undefined8 **)(param_1 + 0xa8);
    if ((puVar7 != (undefined8 *)0x0) && (puVar7 != puVar4)) {
      uVar6 = (ulonglong)*(uint *)(param_1 + 0xb0);
      if (uVar6 != 0) {
        lVar8 = (longlong)puVar4 + 0x24;
        do {
          if ((undefined8 *)(lVar8 + -0x24) != (undefined8 *)0x0) {
            *(undefined8 *)(lVar8 + -0xc) = 0;
            *(undefined8 *)(lVar8 + -4) = 0;
          }
          lVar3 = *(longlong *)(param_1 + 0xa8);
          lVar2 = (-0x24 - (longlong)puVar4) + lVar8;
          uVar5 = ((undefined8 *)(lVar2 + lVar3))[1];
          *(undefined8 *)(lVar8 + -0x24) = *(undefined8 *)(lVar2 + lVar3);
          *(undefined8 *)(lVar8 + -0x1c) = uVar5;
          puVar7 = (undefined8 *)(lVar2 + 0x10 + lVar3);
          uVar5 = puVar7[1];
          *(undefined8 *)(lVar8 + -0x14) = *puVar7;
          *(undefined8 *)(lVar8 + -0xc) = uVar5;
          *(undefined8 *)(lVar8 + -4) = *(undefined8 *)(lVar2 + 0x20 + lVar3);
          uVar6 = uVar6 - 1;
          lVar8 = lVar8 + 0x28;
        } while (uVar6 != 0);
        puVar7 = *(undefined8 **)(param_1 + 0xa8);
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar7);
    }
    *(uint *)(param_1 + 0xb4) = uVar1;
    *(undefined8 **)(param_1 + 0xa8) = puVar4;
    if (uVar1 <= uVar9) {
      return 2;
    }
  }
  puVar4 = puVar4 + (ulonglong)*(uint *)(param_1 + 0xb0) * 5;
  *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) + 1;
  if (puVar4 == (undefined8 *)0x0) {
    return 2;
  }
  puVar4[3] = 0;
  puVar4[4] = 0;
  *(undefined4 *)((longlong)puVar4 + 4) = param_3;
  *(undefined4 *)puVar4 = param_2;
  *(int *)((longlong)puVar4 + 0xc) = param_5;
  *(undefined4 *)(puVar4 + 1) = param_4;
  *(int *)(puVar4 + 2) = param_6;
  if ((param_8 != 0) && (param_9 != 0)) {
    uVar5 = CAkConversionTable::Set(puVar4 + 3,param_8,param_9,param_7);
    return uVar5;
  }
  return 1;
}



// FUNCTION 1431b04a0 CAkBankCallbackMgr body=71 status=ok
// SIG undefined CAkBankCallbackMgr(void)

undefined8 * CAkBankCallbackMgr::CAkBankCallbackMgr(undefined8 *param_1)

{
  HANDLE pvVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  param_1[7] = 0;
  pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  param_1[7] = pvVar1;
  return param_1;
}



// FUNCTION 1431b04f0 ~CAkBankCallbackMgr body=80 status=ok
// SIG undefined ~CAkBankCallbackMgr(void)

void CAkBankCallbackMgr::~CAkBankCallbackMgr(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*param_1);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  if ((HANDLE)param_1[7] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[7]);
  }
                    /* WARNING: Could not recover jumptable at 0x0001431b0539. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  return;
}



// FUNCTION 1431b0540 FUN_1431b0540 body=140 status=ok
// SIG undefined FUN_1431b0540(void)

undefined8 FUN_1431b0540(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  plVar1 = (longlong *)*param_1;
  plVar5 = plVar1 + (ulonglong)*(uint *)(param_1 + 1) * 2;
  for (; (plVar1 != plVar5 && (*plVar1 != param_2)); plVar1 = plVar1 + 2) {
  }
  plVar3 = plVar1 + 1;
  if (plVar1 == plVar5) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    lVar2 = FUN_1431b08e0(param_1,param_2);
    uVar4 = 0x34;
    if (lVar2 == 0) goto LAB_1431b05b0;
  }
  else {
    *(int *)plVar3 = (int)*plVar3 + 1;
  }
  uVar4 = 1;
LAB_1431b05b0:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  return uVar4;
}



// FUNCTION 1431b05d0 CancelCookie body=144 status=ok
// SIG undefined CancelCookie(void)

void CAkBankCallbackMgr::CancelCookie(longlong *param_1,longlong param_2)

{
  DWORD DVar1;
  DWORD DVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  plVar3 = (longlong *)*param_1;
  plVar5 = plVar3 + (ulonglong)*(uint *)(param_1 + 1) * 2;
  for (; (plVar3 != plVar5 && (*plVar3 != param_2)); plVar3 = plVar3 + 2) {
  }
  plVar4 = plVar3 + 1;
  if (plVar3 == plVar5) {
    plVar4 = (longlong *)0x0;
  }
  if (plVar4 != (longlong *)0x0) {
    *(int *)((longlong)plVar4 + 4) = (int)*plVar4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  DVar1 = DAT_146b50f30;
  DVar2 = GetCurrentThreadId();
  if (DVar1 != DVar2) {
    WaitForSingleObject((HANDLE)param_1[7],0xffffffff);
  }
  return;
}



// FUNCTION 1431b0660 DoCallback body=359 status=ok
// SIG undefined DoCallback(void)

void CAkBankCallbackMgr::DoCallback
               (undefined8 *param_1,code *param_2,undefined4 param_3,undefined8 param_4,
               undefined4 param_5,undefined4 param_6,longlong param_7)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  
  if (param_2 != (code *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
    plVar6 = (longlong *)*param_1;
    uVar7 = *(uint *)(param_1 + 1);
    plVar4 = plVar6 + (ulonglong)uVar7 * 2;
    for (plVar5 = plVar6; (plVar5 != plVar4 && (*plVar5 != param_7)); plVar5 = plVar5 + 2) {
    }
    puVar2 = (uint *)(plVar5 + 1);
    if (plVar5 == plVar4) {
      puVar2 = (uint *)0x0;
    }
    if (puVar2 == (uint *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
    }
    else {
      uVar1 = puVar2[1];
      if (*puVar2 < 2) {
        if (plVar6 != plVar4) {
          do {
            if (*plVar6 == param_7) break;
            plVar6 = plVar6 + 2;
          } while (plVar6 != plVar4);
          if (plVar6 != plVar4) {
            if (plVar6 < plVar4 + -2) {
              uVar3 = ((ulonglong)((longlong)(plVar4 + -2) + (-1 - (longlong)plVar6)) >> 3 &
                      0xfffffffffffffffe) + 2 & 0x1ffffffffffffffe;
              plVar5 = plVar6 + 2;
              for (; uVar3 != 0; uVar3 = uVar3 - 1) {
                *plVar6 = *plVar5;
                plVar5 = plVar5 + 1;
                plVar6 = plVar6 + 1;
              }
              uVar7 = *(uint *)(param_1 + 1);
            }
            *(uint *)(param_1 + 1) = uVar7 - 1;
          }
        }
      }
      else {
        *puVar2 = *puVar2 - 1;
        if (uVar1 != 0) {
          puVar2[1] = uVar1 - 1;
        }
      }
      ResetEvent((HANDLE)param_1[7]);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
      if (uVar1 == 0) {
        (*param_2)(param_3,param_4,param_5,param_6,param_7);
      }
      SetEvent((HANDLE)param_1[7]);
    }
  }
  return;
}



// FUNCTION 1431b07d0 RemoveOneCookie body=263 status=ok
// SIG undefined RemoveOneCookie(void)

void CAkBankCallbackMgr::RemoveOneCookie(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  DWORD DVar2;
  DWORD DVar3;
  uint *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  plVar8 = (longlong *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  plVar6 = plVar8 + (ulonglong)uVar1 * 2;
  for (plVar7 = plVar8; (plVar7 != plVar6 && (*plVar7 != param_2)); plVar7 = plVar7 + 2) {
  }
  puVar4 = (uint *)(plVar7 + 1);
  if (plVar7 == plVar6) {
    puVar4 = (uint *)0x0;
  }
  if (puVar4 != (uint *)0x0) {
    if (*puVar4 < 2) {
      if (plVar8 != plVar6) {
        do {
          if (*plVar8 == param_2) break;
          plVar8 = plVar8 + 2;
        } while (plVar8 != plVar6);
        if (plVar8 != plVar6) {
          if (plVar8 < plVar6 + -2) {
            uVar5 = ((ulonglong)((longlong)(plVar6 + -2) + (-1 - (longlong)plVar8)) >> 3 &
                    0xfffffffffffffffe) + 2 & 0x1ffffffffffffffe;
            plVar7 = plVar8 + 2;
            for (; uVar5 != 0; uVar5 = uVar5 - 1) {
              *plVar8 = *plVar7;
              plVar7 = plVar7 + 1;
              plVar8 = plVar8 + 1;
            }
            uVar1 = *(uint *)(param_1 + 1);
          }
          *(uint *)(param_1 + 1) = uVar1 - 1;
        }
      }
    }
    else {
      *puVar4 = *puVar4 - 1;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  DVar2 = DAT_146b50f30;
  DVar3 = GetCurrentThreadId();
  if (DVar2 != DVar3) {
    WaitForSingleObject((HANDLE)param_1[7],0xffffffff);
  }
  return;
}



// FUNCTION 1431b08e0 FUN_1431b08e0 body=325 status=ok
// SIG undefined FUN_1431b08e0(void)

longlong * FUN_1431b08e0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  
  plVar6 = (longlong *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  plVar10 = plVar6 + (ulonglong)uVar2 * 2;
  for (; (plVar6 != plVar10 && (*plVar6 != param_2)); plVar6 = plVar6 + 2) {
  }
  plVar5 = (longlong *)0x0;
  plVar9 = plVar6 + 1;
  if (plVar6 == plVar10) {
    plVar9 = plVar5;
  }
  if (plVar9 != (longlong *)0x0) {
    return plVar9;
  }
  if (*(uint *)((longlong)param_1 + 0xc) <= uVar2) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc) + 1;
    puVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 4);
    if (puVar4 == (undefined8 *)0x0) {
      return (longlong *)0x0;
    }
    puVar8 = (undefined8 *)*param_1;
    if ((puVar8 != (undefined8 *)0x0) && (puVar8 != puVar4)) {
      uVar11 = (ulonglong)*(uint *)(param_1 + 1);
      puVar7 = puVar4;
      if (uVar11 != 0) {
        do {
          if (puVar7 != (undefined8 *)0x0) {
            puVar7[1] = 1;
          }
          puVar8 = (undefined8 *)((longlong)puVar7 + (*param_1 - (longlong)puVar4));
          uVar3 = puVar8[1];
          *puVar7 = *puVar8;
          puVar7[1] = uVar3;
          uVar11 = uVar11 - 1;
          puVar7 = puVar7 + 2;
        } while (uVar11 != 0);
        puVar8 = (undefined8 *)*param_1;
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar8);
    }
    *param_1 = (longlong)puVar4;
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    plVar6 = plVar5;
    if (uVar1 <= uVar2) goto LAB_1431b0a03;
  }
  uVar2 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar2 + 1;
  plVar6 = (longlong *)((ulonglong)uVar2 * 0x10 + *param_1);
  if (plVar6 != (longlong *)0x0) {
    plVar6[1] = 1;
  }
LAB_1431b0a03:
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = param_2;
    plVar5 = plVar6 + 1;
  }
  return plVar5;
}



// FUNCTION 1431b0a30 FUN_1431b0a30 body=380 status=ok
// SIG undefined FUN_1431b0a30(void)

bool FUN_1431b0a30(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  uint uVar9;
  uint *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar11 = (ulonglong)uVar2;
  if ((uVar2 == 0) || (0.9 < (float)*(uint *)(param_1 + 2) / (float)uVar11)) {
    puVar10 = &DAT_145acc960;
    uVar9 = 0;
    do {
      uVar3 = *puVar10;
      uVar12 = (ulonglong)uVar3;
      if (uVar2 < uVar3) {
        if (uVar3 != 0) {
          uVar4 = *(undefined4 *)((longlong)param_1 + 0xc);
          plVar5 = (longlong *)*param_1;
          *param_1 = 0;
          param_1[1] = 0;
          cVar8 = FUN_143134440(param_1);
          if (cVar8 == '\0') {
            if ((void *)*param_1 != (void *)0x0) {
              *(undefined4 *)(param_1 + 1) = 0;
              AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*param_1);
            }
            *param_1 = (longlong)plVar5;
            *(uint *)(param_1 + 1) = uVar2;
            *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
          }
          else {
            if (uVar3 != 0) {
              do {
                uVar9 = *(uint *)(param_1 + 1);
                if (uVar9 < *(uint *)((longlong)param_1 + 0xc)) {
                  *(uint *)(param_1 + 1) = uVar9 + 1;
                  puVar1 = (undefined8 *)(*param_1 + (ulonglong)uVar9 * 8);
                  if (puVar1 != (undefined8 *)0x0) {
                    *puVar1 = 0;
                  }
                }
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            plVar13 = plVar5;
            if (uVar2 != 0) {
              do {
                lVar7 = *plVar13;
                while (lVar7 != 0) {
                  lVar6 = *(longlong *)(lVar7 + 0x20);
                  uVar12 = (ulonglong)(uint)(*(int *)(lVar7 + 0x10) + *(int *)(lVar7 + 0x18)) %
                           (ulonglong)uVar3;
                  *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(*param_1 + uVar12 * 8);
                  *(longlong *)(*param_1 + uVar12 * 8) = lVar7;
                  lVar7 = lVar6;
                }
                uVar11 = uVar11 - 1;
                plVar13 = plVar13 + 1;
              } while (uVar11 != 0);
            }
            if (plVar5 != (longlong *)0x0) {
              AK::MemoryMgr::Free(g_DefaultPoolId,plVar5);
            }
          }
        }
        break;
      }
      uVar9 = uVar9 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar9 < 0x1b);
  }
  return (int)param_1[1] != 0;
}



// FUNCTION 1431b0bb0 Get body=145 status=ok
// SIG undefined Get(void)

longlong CAkBankList::Get(longlong *param_1,int *param_2)

{
  longlong lVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar1 = *(longlong *)
                  (*param_1 +
                  ((ulonglong)(uint)(*param_2 + (int)*(longlong *)(param_2 + 2)) %
                  (ulonglong)*(uint *)(param_1 + 1)) * 8); lVar1 != 0;
        lVar1 = *(longlong *)(lVar1 + 0x20)) {
      if ((*(int *)(lVar1 + 0x10) == *param_2) &&
         (*(longlong *)(lVar1 + 0x18) == *(longlong *)(param_2 + 2))) goto LAB_1431b0c26;
    }
  }
  lVar1 = 0;
LAB_1431b0c26:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
  return lVar1;
}



// FUNCTION 1431b0c50 FUN_1431b0c50 body=109 status=ok
// SIG undefined FUN_1431b0c50(void)

undefined8 FUN_1431b0c50(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  *(undefined4 *)(param_1 + 2) = 0;
  if ((*(uint *)(param_1 + 1) < 0xc) && (*(uint *)((longlong)param_1 + 0xc) < 0xb)) {
    uVar2 = FUN_143134440(param_1,0xb - *(uint *)(param_1 + 1));
    if ((char)uVar2 == '\0') {
      return uVar2;
    }
  }
  *(undefined4 *)(param_1 + 1) = 0xb;
  uVar3 = 0;
  do {
    uVar1 = (int)uVar3 + 1;
    *(undefined8 *)(*param_1 + uVar3 * 8) = 0;
    uVar3 = (ulonglong)uVar1;
  } while (uVar1 < *(uint *)(param_1 + 1));
  return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
}



// FUNCTION 1431b0cc0 FUN_1431b0cc0 body=163 status=ok
// SIG undefined FUN_1431b0cc0(void)

void FUN_1431b0cc0(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
  if (*(uint *)(param_1 + 1) != 0) {
    plVar1 = (longlong *)
             (*param_1 +
             ((ulonglong)(uint)((int)*(undefined8 *)param_2 + (int)*(undefined8 *)(param_2 + 2)) %
             (ulonglong)*(uint *)(param_1 + 1)) * 8);
    lVar2 = *plVar1;
    if (lVar2 != 0) {
      lVar4 = 0;
      do {
        lVar3 = lVar2;
        if ((*(int *)(lVar3 + 0x10) == *param_2) &&
           (*(longlong *)(lVar3 + 0x18) == *(longlong *)(param_2 + 2))) {
          if (lVar3 != 0) {
            if (lVar4 == 0) {
              *plVar1 = *(longlong *)(lVar3 + 0x20);
            }
            else {
              *(longlong *)(lVar4 + 0x20) = *(longlong *)(lVar3 + 0x20);
            }
            *(int *)(param_1 + 2) = (int)param_1[2] + -1;
          }
          break;
        }
        lVar2 = *(longlong *)(lVar3 + 0x20);
        lVar4 = lVar3;
      } while (*(longlong *)(lVar3 + 0x20) != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001431b0d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
  return;
}



// FUNCTION 1431b0d70 FUN_1431b0d70 body=228 status=ok
// SIG undefined FUN_1431b0d70(void)

void FUN_1431b0d70(longlong *param_1,int *param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  char cVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
  if (*(uint *)(param_1 + 1) != 0) {
    for (lVar1 = *(longlong *)
                  (*param_1 +
                  ((ulonglong)(uint)(*param_2 + (int)*(longlong *)(param_2 + 2)) %
                  (ulonglong)*(uint *)(param_1 + 1)) * 8); lVar1 != 0;
        lVar1 = *(longlong *)(lVar1 + 0x20)) {
      if ((*(int *)(lVar1 + 0x10) == *param_2) &&
         (*(longlong *)(lVar1 + 0x18) == *(longlong *)(param_2 + 2))) {
        if (lVar1 != 0) goto LAB_1431b0e37;
        break;
      }
    }
  }
  uVar3 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)param_2;
  *(undefined8 *)(param_3 + 0x18) = uVar3;
  cVar4 = FUN_1431b0a30(param_1);
  if (cVar4 != '\0') {
    uVar2 = (ulonglong)
            (uint)((int)*(undefined8 *)(param_3 + 0x10) + (int)*(undefined8 *)(param_3 + 0x18)) %
            (ulonglong)*(uint *)(param_1 + 1);
    *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(*param_1 + uVar2 * 8);
    *(longlong *)(*param_1 + uVar2 * 8) = param_3;
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
LAB_1431b0e37:
                    /* WARNING: Could not recover jumptable at 0x0001431b0e4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b51fe0);
  return;
}



// FUNCTION 1431b0e60 `scalar_deleting_destructor' body=94 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkState::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acc9d0;
  if ((void *)param_1[3] != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[3]);
  }
  param_1[3] = 0;
  CAkIndexable::~CAkIndexable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1431b0ec0 AddRef body=77 status=ok
// SIG undefined AddRef(void)

int CAkState::AddRef(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = DAT_146b50af8;
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_146b50af8 + 0x80));
  iVar2 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x80));
  return iVar2;
}



// FUNCTION 1431b0f10 Create body=187 status=ok
// SIG undefined Create(void)

undefined8 * CAkState::Create(void)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  
  puVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x28);
  if (puVar4 != (undefined8 *)0x0) {
    CAkIndexable::CAkIndexable(puVar4);
    *puVar4 = &PTR__scalar_deleting_destructor__145acc9d0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    lVar2 = DAT_146b50af8;
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0x80);
    EnterCriticalSection(lpCriticalSection);
    cVar3 = FUN_14313b140(lVar2 + 0xa8);
    if (cVar3 != '\0') {
      uVar1 = (ulonglong)*(uint *)(puVar4 + 2) % (ulonglong)*(uint *)(lVar2 + 0xb0);
      puVar4[1] = *(undefined8 *)(*(longlong *)(lVar2 + 0xa8) + uVar1 * 8);
      *(undefined8 **)(*(longlong *)(lVar2 + 0xa8) + uVar1 * 8) = puVar4;
      *(int *)(lVar2 + 0xb8) = *(int *)(lVar2 + 0xb8) + 1;
    }
    LeaveCriticalSection(lpCriticalSection);
    return puVar4;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431b0fd0 Release body=236 status=ok
// SIG undefined Release(void)

undefined4 CAkState::Release(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  long lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lVar8 = DAT_146b50af8;
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_146b50af8 + 0x80));
  piVar1 = (int *)((longlong)param_1 + 0x14);
  *piVar1 = *piVar1 + -1;
  lVar9 = DAT_146b50af8;
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x14);
  if (*piVar1 == 0) {
    uVar4 = *(uint *)(param_1 + 2);
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0x80);
    EnterCriticalSection(lpCriticalSection);
    if (*(uint *)(lVar9 + 0xb0) != 0) {
      plVar2 = (longlong *)
               (*(longlong *)(lVar9 + 0xa8) +
               ((ulonglong)uVar4 % (ulonglong)*(uint *)(lVar9 + 0xb0)) * 8);
      lVar10 = *plVar2;
      lVar6 = 0;
      while (lVar5 = lVar10, lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x10) == uVar4) {
          if (lVar6 == 0) {
            *plVar2 = *(longlong *)(lVar5 + 8);
          }
          else {
            *(longlong *)(lVar6 + 8) = *(longlong *)(lVar5 + 8);
          }
          *(int *)(lVar9 + 0xb8) = *(int *)(lVar9 + 0xb8) + -1;
          break;
        }
        lVar6 = lVar5;
        lVar10 = *(longlong *)(lVar5 + 8);
      }
    }
    LeaveCriticalSection(lpCriticalSection);
    lVar7 = g_DefaultPoolId;
    (**(code **)*param_1)(param_1,0);
    AK::MemoryMgr::Free(lVar7,param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x80));
  return uVar3;
}



// FUNCTION 1431b10c0 SetInitialValues body=166 status=ok
// SIG undefined SetInitialValues(void)

undefined4 CAkState::SetInitialValues(longlong param_1,longlong param_2)

{
  ushort uVar1;
  size_t _Size;
  ushort *puVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)(param_2 + 4);
  if (uVar1 != 0) {
    uVar3 = (uint)uVar1 * 2 + 5 & 0xfffffffc;
    puVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)(uVar3 + (uint)uVar1 * 4));
    if (puVar2 == (ushort *)0x0) {
      return 0x34;
    }
    *puVar2 = uVar1;
    _Size = (ulonglong)uVar1 * 2;
    ::_guard_xfg_dispatch_icall_nop(puVar2 + 1,(void *)(param_2 + 6),_Size);
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((ulonglong)uVar3 + (longlong)puVar2),(void *)(_Size + param_2 + 6),
               (ulonglong)uVar1 * 4);
    *(ushort **)(param_1 + 0x18) = puVar2;
  }
  return 1;
}



// FUNCTION 1431b1170 ~CAkParentNode<CAkParameterNode> body=108 status=ok
// SIG undefined ~CAkParentNode<CAkParameterNode>(void)

void CAkParentNode<CAkParameterNode>::~CAkParentNode<CAkParameterNode>(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acca60;
  param_1[3] = &PTR_LAB_145acccc0;
  param_1[6] = &PTR_PushParamUpdate_145ac7228;
  if ((void *)param_1[0x19] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x1a) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[0x19]);
    param_1[0x19] = 0;
    *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  }
  CAkParameterNode::~CAkParameterNode(param_1);
  return;
}



// FUNCTION 1431b1200 `scalar_deleting_destructor' body=84 status=ok
// SIG void * `scalar_deleting_destructor'(UMSFreeThreadProxy * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl Concurrency::details::UMSFreeThreadProxy::`scalar
   deleting destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::UMSFreeThreadProxy::_scalar_deleting_destructor_
          (UMSFreeThreadProxy *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__145accd40;
  *(undefined ***)(this + 0x18) = &PTR_LAB_145accfa0;
  *(undefined ***)(this + 0x30) = &PTR_PushParamUpdate_145ac7228;
  CAkParentNode<CAkParameterNode>::~CAkParentNode<CAkParameterNode>();
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0xd8);
  }
  return this;
}



// FUNCTION 1431b1260 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
CAkParentNode<CAkParameterNode>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~CAkParentNode<CAkParameterNode>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 1431b12a0 CanAddChild body=119 status=ok
// SIG undefined CanAddChild(void)

undefined4 CAkActorMixer::CanAddChild(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  if (*(longlong *)(param_2 + 0x80) != 0) {
    return 0x15;
  }
  iVar1 = *(int *)(param_2 + 0x10);
  lVar2 = FUN_143145200(param_1 + 200,iVar1);
  if (lVar2 != 0) {
    return 5;
  }
  uVar3 = 1;
  if (*(int *)(param_1 + 0x10) == iVar1) {
    uVar3 = 0x17;
  }
  return uVar3;
}



// FUNCTION 1431b1320 Create body=163 status=ok
// SIG undefined Create(void)

undefined8 * CAkActorMixer::Create(undefined1 param_1)

{
  byte bVar1;
  AKRESULT AVar2;
  undefined8 *puVar3;
  
  puVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0xd8);
  if (puVar3 != (undefined8 *)0x0) {
    CAkParameterNode::CAkParameterNode(puVar3);
    puVar3[0x19] = 0;
    puVar3[0x1a] = 0;
    *puVar3 = &PTR__scalar_deleting_destructor__145acd020;
    puVar3[3] = &PTR_LAB_145accfa0;
    puVar3[6] = &PTR_PushParamUpdate_145ac7228;
    AVar2 = AK::MemoryMgr::SetMonitoring((long)puVar3,(bool)param_1);
    if ((AVar2 == 0) || (AVar2 == 10)) {
      bVar1 = 0x80;
    }
    else {
      bVar1 = 0;
    }
    *(byte *)(puVar3 + 0x15) = *(byte *)(puVar3 + 0x15) & 0x7f;
    *(byte *)(puVar3 + 0x15) = *(byte *)(puVar3 + 0x15) | bVar1;
    CAkParameterNodeBase::AddToIndex(puVar3);
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431b13d0 SetInitialValues body=275 status=ok
// SIG undefined SetInitialValues(void)

int CAkActorMixer::SetInitialValues(longlong *param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  uint uStackX_c;
  uint *local_res10;
  undefined4 local_res18 [2];
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  iVar4 = (**(code **)(*param_1 + 0x80))();
  if (iVar4 != 1) {
    (**(code **)(*param_1 + 0x80))();
    AK::MemoryMgr::StartProfileThreadUsage((long)DAT_146b50b18);
    return 0x5b;
  }
  local_res10 = local_res10 + 1;
  iVar4 = FUN_143178ad0(param_1,&local_res10,local_res18,0);
  if (iVar4 == 1) {
    uVar1 = *local_res10;
    local_res10 = local_res10 + 1;
    if (uVar1 != 0) {
      pvVar5 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 3);
      param_1[0x19] = (longlong)pvVar5;
      if (pvVar5 == (void *)0x0) {
        iVar4 = 0x34;
      }
      else {
        uVar6 = 0;
        *(uint *)((longlong)param_1 + 0xd4) = uVar1;
        if (uVar1 != 0) {
          do {
            uVar3 = uStackX_c;
            uStackX_c = uStackX_c & 0xffffff00;
            uVar2 = *local_res10;
            local_res10 = local_res10 + 1;
            iVar4 = (**(code **)(*param_1 + 0x50))
                              (param_1,CONCAT44(uVar3,uVar2) & 0xffffff00ffffffff);
            if ((iVar4 != 1) && (iVar4 != 0xf)) {
              return iVar4;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar1);
        }
      }
    }
  }
  return iVar4;
}



// FUNCTION 1431b14f0 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkAuxBus::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acd280;
  param_1[3] = &PTR_LAB_145acd4d0;
  param_1[6] = &PTR_LAB_145ac77d8;
  CAkBus::~CAkBus();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x178);
  }
  return param_1;
}



// FUNCTION 1431b1550 Create body=147 status=ok
// SIG undefined Create(void)

undefined8 * CAkAuxBus::Create(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x178);
  if (puVar3 != (undefined8 *)0x0) {
    CAkBus::CAkBus(puVar3,param_1);
    *puVar3 = &PTR__scalar_deleting_destructor__145acd280;
    puVar3[3] = &PTR_LAB_145acd4d0;
    puVar3[6] = &PTR_LAB_145ac77d8;
    iVar2 = FUN_14160c2d0(puVar3);
    if ((iVar2 == 0) || (iVar2 == 10)) {
      bVar1 = 0x80;
    }
    else {
      bVar1 = 0;
    }
    *(byte *)(puVar3 + 0x15) = *(byte *)(puVar3 + 0x15) & 0x7f;
    *(byte *)(puVar3 + 0x15) = *(byte *)(puVar3 + 0x15) | bVar1;
    CAkParameterNodeBase::AddToIndex(puVar3);
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1431b15f0 PoolChunk body=870 status=ok
// SIG undefined PoolChunk(void)

longlong AkDynaBlkPool<CAkSwitchCntr::SwitchContPlaybackItem,128,AkArrayAllocatorNoAlign<0>_>::
         PoolChunk::PoolChunk(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong *plVar4;
  
  *(undefined8 *)(param_1 + 0x3c00) = 0;
  *(undefined4 *)(param_1 + 0x3c08) = 0;
  *(undefined8 *)(param_1 + 0x3c10) = 0;
  uVar3 = 2;
  do {
    plVar4 = (longlong *)((ulonglong)(uVar3 - 2) * 0x78 + param_1);
    if (*(longlong *)(param_1 + 0x3c10) == 0) {
      *(longlong **)(param_1 + 0x3c10) = plVar4;
      *plVar4 = 0;
      plVar4 = *(longlong **)(param_1 + 0x3c10);
    }
    else {
      *plVar4 = *(longlong *)(param_1 + 0x3c10);
      *(longlong **)(param_1 + 0x3c10) = plVar4;
    }
    *(int *)(param_1 + 0x3c08) = *(int *)(param_1 + 0x3c08) + 1;
    puVar2 = (undefined8 *)((ulonglong)(uVar3 - 1) * 0x78 + param_1);
    if (plVar4 == (longlong *)0x0) {
      *(undefined8 **)(param_1 + 0x3c10) = puVar2;
      *puVar2 = 0;
    }
    else {
      *puVar2 = plVar4;
      *(undefined8 **)(param_1 + 0x3c10) = puVar2;
    }
    *(int *)(param_1 + 0x3c08) = *(int *)(param_1 + 0x3c08) + 1;
    plVar4 = (longlong *)((ulonglong)uVar3 * 0x78 + param_1);
    if (*(longlong *)(param_1 + 0x3c10) == 0) {
      *(longlong **)(param_1 + 0x3c10) = plVar4;
      *plVar4 = 0;
    }
    else {
      *plVar4 = *(longlong *)(param_1 + 0x3c10);
      *(longlong **)(param_1 + 0x3c10) = plVar4;
    }
    *(int *)(param_1 + 0x3c08) = *(int *)(param_1 + 0x3c08) + 1;
    plVar4 = (longlong *)((ulonglong)(uVar3 + 1) * 0x78 + param_1);
    if (*(longlong *)(param_1 + 0x3c10) == 0) {
      *(longlong **)(param_1 + 0x3c10) = plVar4;
      *plVar4 = 0;
    }
    else {
      *plVar4 = *(longlong *)(param_1 + 0x3c10);
      *(longlong **)(param_1 + 0x3c10) = plVar4;
    }
    *(int *)(param_1 + 0x3c08) = *(int *)(param_1 + 0x3c08) + 1;
    plVar4 = (longlong *)((ulonglong)(uVar3 + 2) * 0x78 + param_1);
    if (*(longlong *)(param_1 + 0x3c10) == 0) {
      *(longlong **)(param_1 + 0x3c10) = plVar4;
      *plVar4 = 0;
    }
    else {
      *plVar4 = *(longlong *)(param_1 + 0x3c10);
      *(longlong **)(param_1 + 0x3c10) = plVar4;
    }
    *(int *)(param_1 + 0x3c08) = *(int *)(param_1 + 0x3c08) + 1;
    plVar4 = (longlong *)((ulonglong)(uVar3 + 3) * 0x78 + param_1);
    if (*(longlong *)(param_1 + 0x3c10) == 0) {
      *(longlong **)(param_1 + 0x3c10) = plVar4;
      *plVar4 = 0;
    }
    else {
      *plVar4 = *(longlong *)(param_1 + 0x3c10);
      *(longlong **)(param_1 + 0x3c10) = plVar4;
    }
    *(int *)(param_1 + 0x3c08) = *(int *)(param_1 + 0x3c08) + 1;
    plVar4 = (longlong *)((ulonglong)(uVar3 + 4) * 0x78 + param_1);
    if (*(longlong *)(param_1 + 0x3c10) == 0) {
      *(longlong **)(param_1 + 0x3c10) = plVar4;
      *plVar4 = 0;
    }
    else {
      *plVar4 = *(longlong *)(param_1 + 0x3c10);
      *(longlong **)(param_1 + 0x3c10) = plVar4;
    }
    *(int *)(param_1 + 0x3c08) = *(int *)(param_1 + 0x3c08) + 1;
    plVar4 = (longlong *)((ulonglong)(uVar3 + 5) * 0x78 + param_1);
    if (*(longlong *)(param_1 + 0x3c10) == 0) {
      *(longlong **)(param_1 + 0x3c10) = plVar4;
      *plVar4 = 0;
    }
    else {
      *plVar4 = *(longlong *)(param_1 + 0x3c10);
      *(longlong **)(param_1 + 0x3c10) = plVar4;
    }
    *(int *)(param_1 + 0x3c08) = *(int *)(param_1 + 0x3c08) + 1;
    plVar4 = (longlong *)((ulonglong)(uVar3 + 6) * 0x78 + param_1);
    if (*(longlong *)(param_1 + 0x3c10) == 0) {
      *(longlong **)(param_1 + 0x3c10) = plVar4;
      *plVar4 = 0;
    }
    else {
      *plVar4 = *(longlong *)(param_1 + 0x3c10);
      *(longlong **)(param_1 + 0x3c10) = plVar4;
    }
    *(int *)(param_1 + 0x3c08) = *(int *)(param_1 + 0x3c08) + 1;
    plVar4 = (longlong *)((ulonglong)(uVar3 + 7) * 0x78 + param_1);
    if (*(longlong *)(param_1 + 0x3c10) == 0) {
      *(longlong **)(param_1 + 0x3c10) = plVar4;
      *plVar4 = 0;
    }
    else {
      *plVar4 = *(longlong *)(param_1 + 0x3c10);
      *(longlong **)(param_1 + 0x3c10) = plVar4;
    }
    *(int *)(param_1 + 0x3c08) = *(int *)(param_1 + 0x3c08) + 1;
    plVar4 = (longlong *)((ulonglong)(uVar3 + 8) * 0x78 + param_1);
    if (*(longlong *)(param_1 + 0x3c10) == 0) {
      *(longlong **)(param_1 + 0x3c10) = plVar4;
      *plVar4 = 0;
    }
    else {
      *plVar4 = *(longlong *)(param_1 + 0x3c10);
      *(longlong **)(param_1 + 0x3c10) = plVar4;
    }
    *(int *)(param_1 + 0x3c08) = *(int *)(param_1 + 0x3c08) + 1;
    plVar4 = (longlong *)((ulonglong)(uVar3 + 9) * 0x78 + param_1);
    if (*(longlong *)(param_1 + 0x3c10) == 0) {
      *(longlong **)(param_1 + 0x3c10) = plVar4;
      *plVar4 = 0;
    }
    else {
      *plVar4 = *(longlong *)(param_1 + 0x3c10);
      *(longlong **)(param_1 + 0x3c10) = plVar4;
    }
    *(int *)(param_1 + 0x3c08) = *(int *)(param_1 + 0x3c08) + 1;
    plVar4 = (longlong *)((ulonglong)(uVar3 + 10) * 0x78 + param_1);
    if (*(longlong *)(param_1 + 0x3c10) == 0) {
      *(longlong **)(param_1 + 0x3c10) = plVar4;
      *plVar4 = 0;
    }
    else {
      *plVar4 = *(longlong *)(param_1 + 0x3c10);
      *(longlong **)(param_1 + 0x3c10) = plVar4;
    }
    *(int *)(param_1 + 0x3c08) = *(int *)(param_1 + 0x3c08) + 1;
    plVar4 = (longlong *)((ulonglong)(uVar3 + 0xb) * 0x78 + param_1);
    if (*(longlong *)(param_1 + 0x3c10) == 0) {
      *(longlong **)(param_1 + 0x3c10) = plVar4;
      *plVar4 = 0;
    }
    else {
      *plVar4 = *(longlong *)(param_1 + 0x3c10);
      *(longlong **)(param_1 + 0x3c10) = plVar4;
    }
    *(int *)(param_1 + 0x3c08) = *(int *)(param_1 + 0x3c08) + 1;
    plVar4 = (longlong *)((ulonglong)(uVar3 + 0xc) * 0x78 + param_1);
    if (*(longlong *)(param_1 + 0x3c10) == 0) {
      *(longlong **)(param_1 + 0x3c10) = plVar4;
      *plVar4 = 0;
    }
    else {
      *plVar4 = *(longlong *)(param_1 + 0x3c10);
      *(longlong **)(param_1 + 0x3c10) = plVar4;
    }
    *(int *)(param_1 + 0x3c08) = *(int *)(param_1 + 0x3c08) + 1;
    plVar4 = (longlong *)((ulonglong)(uVar3 + 0xd) * 0x78 + param_1);
    if (*(longlong *)(param_1 + 0x3c10) == 0) {
      *(longlong **)(param_1 + 0x3c10) = plVar4;
      *plVar4 = 0;
    }
    else {
      *plVar4 = *(longlong *)(param_1 + 0x3c10);
      *(longlong **)(param_1 + 0x3c10) = plVar4;
    }
    *(int *)(param_1 + 0x3c08) = *(int *)(param_1 + 0x3c08) + 1;
    uVar1 = uVar3 + 0xe;
    uVar3 = uVar3 + 0x10;
  } while (uVar1 < 0x80);
  return param_1;
}



// FUNCTION 1431b1960 operator= body=73 status=ok
// SIG undefined operator=(void)

longlong * UserParams::operator=(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  piVar1 = (int *)*param_2;
  if (*param_1 != 0) {
    AkExternalSourceArray::Release();
  }
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  *param_1 = (longlong)piVar1;
  return param_1;
}



// FUNCTION 1431b19d0 FUN_1431b19d0 body=143 status=ok
// SIG undefined FUN_1431b19d0(void)

undefined8 * FUN_1431b19d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145acd550;
  param_1[3] = &PTR_LAB_145acd7b8;
  param_1[6] = &PTR_PushParamUpdate_145ac7228;
  param_1[0x1d] = &PTR_LAB_145acd838;
  param_1[0x1e] = &PTR_FUN_145acd848;
  FUN_1431b4360();
  FUN_141868ed0(param_1 + 0x1d);
  CAkMultiPlayNode::~CAkMultiPlayNode(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 1431b1a60 FUN_1431b1a60 body=286 status=ok
// SIG undefined FUN_1431b1a60(void)

undefined8 FUN_1431b1a60(undefined8 param_1,longlong *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  void *pvVar6;
  int *piVar7;
  void *pvVar8;
  int *piVar9;
  
  piVar5 = (int *)*param_2;
  uVar3 = *(uint *)(param_2 + 1);
  piVar2 = piVar5 + uVar3;
  for (; (piVar5 != piVar2 && (*piVar5 != param_3)); piVar5 = piVar5 + 1) {
  }
  piVar9 = (int *)0x0;
  piVar7 = piVar9;
  if (piVar5 != piVar2) {
    piVar7 = piVar5;
  }
  if (piVar7 != (int *)0x0) {
    return 0x39;
  }
  if (*(uint *)((longlong)param_2 + 0xc) <= uVar3) {
    uVar1 = *(uint *)((longlong)param_2 + 0xc) + 1;
    pvVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 2);
    if (pvVar6 == (void *)0x0) {
      return 2;
    }
    pvVar8 = (void *)*param_2;
    if ((pvVar8 != (void *)0x0) && (pvVar8 != pvVar6)) {
      uVar4 = *(uint *)(param_2 + 1);
      if ((int *)(ulonglong)uVar4 != (int *)0x0) {
        do {
          *(undefined4 *)((longlong)pvVar6 + (longlong)piVar9 * 4) =
               *(undefined4 *)(*param_2 + (longlong)piVar9 * 4);
          piVar9 = (int *)((longlong)piVar9 + 1);
        } while (piVar9 < (int *)(ulonglong)uVar4);
        pvVar8 = (void *)*param_2;
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar8);
    }
    *param_2 = (longlong)pvVar6;
    *(uint *)((longlong)param_2 + 0xc) = uVar1;
    if (uVar1 <= uVar3) {
      return 2;
    }
  }
  uVar3 = *(uint *)(param_2 + 1);
  *(uint *)(param_2 + 1) = uVar3 + 1;
  piVar2 = (int *)(*param_2 + (ulonglong)uVar3 * 4);
  if (piVar2 == (int *)0x0) {
    return 2;
  }
  *piVar2 = param_3;
  return 1;
}



// FUNCTION 1431b1b80 FUN_1431b1b80 body=352 status=ok
// SIG undefined FUN_1431b1b80(void)

longlong * FUN_1431b1b80(undefined4 param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x1a0);
  if (plVar2 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  CAkMultiPlayNode::CAkMultiPlayNode(plVar2,param_1);
  CAkSwitchAware::CAkSwitchAware(plVar2 + 0x1d);
  plVar2[0x1f] = 0;
  *(undefined4 *)(plVar2 + 0x20) = 0;
  *plVar2 = (longlong)&PTR_FUN_145acd550;
  plVar2[3] = (longlong)&PTR_LAB_145acd7b8;
  plVar2[6] = (longlong)&PTR_PushParamUpdate_145ac7228;
  plVar2[0x1d] = (longlong)&PTR_LAB_145acd838;
  plVar2[0x1e] = (longlong)&PTR_FUN_145acd848;
  plVar2[0x21] = 0;
  *(undefined4 *)(plVar2 + 0x22) = 0;
  plVar2[0x23] = 0;
  plVar2[0x24] = 0;
  plVar2[0x25] = 0;
  plVar2[0x26] = 0;
  plVar2[0x27] = 0;
  plVar2[0x28] = 0;
  plVar2[0x29] = 0;
  plVar2[0x2a] = 0;
  plVar2[0x2b] = 0;
  plVar2[0x2c] = 0;
  *(undefined4 *)(plVar2 + 0x2d) = 0;
  plVar2[0x2e] = 0;
  plVar2[0x2f] = 0;
  plVar2[0x30] = 0;
  plVar2[0x31] = 0;
  plVar2[0x32] = 0;
  plVar2[0x33] = 0;
  iVar1 = CAkMultiPlayNode::Init(plVar2);
  if (iVar1 != 1) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    return (longlong *)0x0;
  }
  return plVar2;
}



// FUNCTION 1431b1ce0 FUN_1431b1ce0 body=681 status=ok
// SIG undefined FUN_1431b1ce0(void)

void FUN_1431b1ce0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  char cVar9;
  void *pvVar10;
  longlong lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  
  lVar14 = 0;
  param_1[0x18] = param_2[0x18];
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
  param_1[0x1a] = param_2[0x1a];
  uVar8 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar8;
  uVar8 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar8;
  uVar8 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar8;
  uVar8 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar8;
  uVar8 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar8;
  uVar8 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar8;
  uVar8 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar8;
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x74);
  uVar6 = *(undefined4 *)(param_2 + 0xf);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar5;
  *(undefined4 *)(param_1 + 0xf) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar7;
  param_1[0x10] = param_2[0x10];
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x9c);
  uVar6 = *(undefined4 *)(param_2 + 0x14);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar5;
  *(undefined4 *)(param_1 + 0x14) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar7;
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  uVar3 = *(uint *)(param_2 + 0x12);
  uVar15 = (ulonglong)uVar3;
  if (((uVar3 != 0) &&
      (((uVar3 < *(uint *)(param_1 + 0x12) || (uVar3 <= *(uint *)((longlong)param_1 + 0x94))) ||
       (cVar9 = FUN_143147540(param_1 + 0x11,uVar3 - *(uint *)(param_1 + 0x12)), cVar9 != '\0'))))
     && (*(uint *)(param_1 + 0x12) = uVar3, lVar11 = lVar14, uVar3 != 0)) {
    do {
      lVar16 = param_2[0x11];
      lVar4 = param_1[0x11];
      puVar12 = (undefined8 *)(lVar11 + lVar16);
      uVar8 = puVar12[1];
      puVar2 = (undefined8 *)(lVar11 + lVar4);
      *puVar2 = *puVar12;
      puVar2[1] = uVar8;
      *(undefined8 *)(lVar11 + 0x10 + lVar4) = *(undefined8 *)(lVar11 + 0x10 + lVar16);
      uVar15 = uVar15 - 1;
      lVar11 = lVar11 + 0x18;
    } while (uVar15 != 0);
  }
  uVar3 = *(uint *)(param_2 + 0x17);
  uVar15 = (ulonglong)uVar3;
  if (uVar3 != 0) {
    uVar19 = *(uint *)(param_1 + 0x17);
    uVar18 = (ulonglong)uVar19;
    if (uVar19 <= uVar3) {
      if (*(uint *)((longlong)param_1 + 0xbc) < uVar3) {
        uVar19 = (*(uint *)((longlong)param_1 + 0xbc) - uVar19) + uVar3;
        pvVar10 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar19 << 5);
        if (pvVar10 == (void *)0x0) {
          return;
        }
        pvVar13 = (void *)param_1[0x16];
        if ((pvVar13 != (void *)0x0) && (pvVar13 != pvVar10)) {
          uVar17 = (ulonglong)*(uint *)(param_1 + 0x17);
          if (uVar17 != 0) {
            puVar12 = (undefined8 *)((longlong)pvVar10 + 0x10);
            do {
              puVar2 = puVar12 + -2;
              if (puVar2 != (undefined8 *)0x0) {
                *puVar2 = 0;
                puVar12[-1] = 0;
                *puVar12 = 1;
                puVar12[1] = 0;
              }
              lVar11 = param_1[0x16] + (-0x10 - (longlong)pvVar10);
              puVar1 = (undefined8 *)(lVar11 + (longlong)puVar12);
              uVar8 = puVar1[1];
              *puVar2 = *puVar1;
              puVar12[-1] = uVar8;
              puVar2 = (undefined8 *)(lVar11 + 0x10 + (longlong)puVar12);
              uVar8 = puVar2[1];
              *puVar12 = *puVar2;
              puVar12[1] = uVar8;
              uVar17 = uVar17 - 1;
              puVar12 = puVar12 + 4;
            } while (uVar17 != 0);
            pvVar13 = (void *)param_1[0x16];
          }
          AK::MemoryMgr::Free(g_DefaultPoolId,pvVar13);
        }
        param_1[0x16] = pvVar10;
        *(uint *)((longlong)param_1 + 0xbc) = uVar19;
      }
      if (uVar18 < uVar15) {
        lVar11 = uVar18 << 5;
        lVar16 = uVar15 - uVar18;
        do {
          puVar12 = (undefined8 *)(param_1[0x16] + lVar11);
          if (puVar12 != (undefined8 *)0x0) {
            *puVar12 = 0;
            puVar12[1] = 0;
            puVar12[2] = 1;
            puVar12[3] = 0;
          }
          lVar11 = lVar11 + 0x20;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
      }
    }
    *(uint *)(param_1 + 0x17) = uVar3;
    if (uVar3 != 0) {
      do {
        lVar11 = param_2[0x16];
        lVar16 = param_1[0x16];
        puVar12 = (undefined8 *)(lVar14 + lVar11);
        uVar8 = puVar12[1];
        puVar2 = (undefined8 *)(lVar14 + lVar16);
        *puVar2 = *puVar12;
        puVar2[1] = uVar8;
        puVar12 = (undefined8 *)(lVar14 + 0x10 + lVar11);
        uVar8 = puVar12[1];
        puVar2 = (undefined8 *)(lVar14 + 0x10 + lVar16);
        *puVar2 = *puVar12;
        puVar2[1] = uVar8;
        uVar15 = uVar15 - 1;
        lVar14 = lVar14 + 0x20;
      } while (uVar15 != 0);
    }
  }
  return;
}



// FUNCTION 1431b1f90 FUN_1431b1f90 body=150 status=ok
// SIG undefined FUN_1431b1f90(void)

void FUN_1431b1f90(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  
  CAkSwitchCntr::ExecuteActionNoPropagate();
  lVar3 = *(longlong *)(param_1 + 0x78);
  if ((lVar3 != 0) &&
     (((0 < *(short *)(lVar3 + 0x50) || (0 < *(short *)(lVar3 + 0x54))) &&
      (uVar2 = *(uint *)(param_1 + 0xd0), uVar2 != 0)))) {
    lVar3 = (ulonglong)uVar2 << 3;
    do {
      lVar3 = lVar3 + -8;
      uVar2 = uVar2 - 1;
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 200));
      if ((*(char *)(param_2 + 0x20) == '\0') || (plVar1[0x11] == 0)) {
        (**(code **)(*plVar1 + 0x90))(plVar1,param_2);
      }
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 1431b2030 FUN_1431b2030 body=325 status=ok
// SIG undefined FUN_1431b2030(void)

void FUN_1431b2030(longlong param_1,int *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
    FUN_1431b3f60(param_1,*(undefined8 *)(param_2 + 2),0);
  }
  else if (iVar1 == 1) {
    lVar7 = *(longlong *)(param_2 + 2);
    for (puVar2 = *(undefined8 **)(param_1 + 0x170); puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)*puVar2) {
      if (((lVar7 == 0) || (lVar7 == puVar2[4])) && (*(int *)(puVar2 + 0xe) != 1)) {
        *(undefined4 *)(puVar2 + 0xe) = 1;
      }
    }
  }
  else if (iVar1 == 2) {
    lVar7 = *(longlong *)(param_2 + 2);
    for (puVar2 = *(undefined8 **)(param_1 + 0x170); puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)*puVar2) {
      if (((lVar7 == 0) || (lVar7 == puVar2[4])) && (*(int *)(puVar2 + 0xe) != 0)) {
        *(undefined4 *)(puVar2 + 0xe) = 0;
      }
    }
  }
  if ((*(char *)((longlong)param_2 + 0x23) == '\0') || (*(char *)((longlong)param_2 + 0x21) == '\0')
     ) goto LAB_1431b20ed;
  iVar1 = *param_2;
  if (iVar1 == 0) {
LAB_1431b20e2:
    uVar5 = 0;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) goto LAB_1431b20ed;
      goto LAB_1431b20e2;
    }
    uVar5 = 1;
  }
  CAkStateAware::PauseTransitions(param_1 + 0x18,uVar5);
LAB_1431b20ed:
  uVar6 = *(uint *)(param_1 + 0xd0);
  if (uVar6 != 0) {
    lVar7 = (ulonglong)uVar6 << 3;
    do {
      lVar7 = lVar7 + -8;
      uVar6 = uVar6 - 1;
      plVar3 = *(longlong **)(lVar7 + *(longlong *)(param_1 + 200));
      if ((((char)param_2[8] == '\0') || (plVar3[0x11] == 0)) &&
         (cVar4 = CAkParameterNodeBase::IsException(plVar3,*(undefined8 *)(param_2 + 0xc)),
         cVar4 == '\0')) {
        (**(code **)(*plVar3 + 0xa0))(plVar3,param_2);
      }
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 1431b2180 ExecuteActionNoPropagate body=162 status=ok
// SIG undefined ExecuteActionNoPropagate(void)

void CAkSwitchCntr::ExecuteActionNoPropagate(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
LAB_1431b219d:
    FUN_1431b3f60(param_1,*(undefined8 *)(param_2 + 2),param_2[4]);
    return;
  }
  if (iVar1 == 1) {
    plVar3 = *(longlong **)(param_1 + 0x170);
    iVar1 = param_2[4];
    lVar2 = *(longlong *)(param_2 + 2);
    if (plVar3 != (longlong *)0x0) {
      do {
        if ((((lVar2 == 0) || (lVar2 == plVar3[4])) &&
            ((iVar1 == 0 || (*(int *)((longlong)plVar3 + 0x1c) == iVar1)))) &&
           ((int)plVar3[0xe] != 1)) {
          *(undefined4 *)(plVar3 + 0xe) = 1;
        }
        plVar3 = (longlong *)*plVar3;
      } while (plVar3 != (longlong *)0x0);
      return;
    }
  }
  else if (iVar1 == 2) {
    plVar3 = *(longlong **)(param_1 + 0x170);
    iVar1 = param_2[4];
    lVar2 = *(longlong *)(param_2 + 2);
    if (plVar3 != (longlong *)0x0) {
      do {
        if (((lVar2 == 0) || (lVar2 == plVar3[4])) &&
           (((iVar1 == 0 || (*(int *)((longlong)plVar3 + 0x1c) == iVar1)) && ((int)plVar3[0xe] != 0)
            ))) {
          *(undefined4 *)(plVar3 + 0xe) = 0;
        }
        plVar3 = (longlong *)*plVar3;
      } while (plVar3 != (longlong *)0x0);
      return;
    }
  }
  else if (iVar1 == 3) goto LAB_1431b219d;
  return;
}



// FUNCTION 1431b2230 ExecuteActionNoPropagate body=75 status=ok
// SIG undefined ExecuteActionNoPropagate(void)

void CAkLayerCntr::ExecuteActionNoPropagate(longlong param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  CAkSwitchCntr::ExecuteActionNoPropagate();
  if (*(char *)((longlong)param_2 + 0x23) == '\0') {
    return;
  }
  if (*(char *)((longlong)param_2 + 0x21) == '\0') {
    return;
  }
  iVar1 = *param_2;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      uVar2 = 1;
      goto LAB_1431b2263;
    }
    if (iVar1 != 2) {
      return;
    }
  }
  uVar2 = 0;
LAB_1431b2263:
  CAkStateAware::PauseTransitions(param_1 + 0x18,uVar2);
  return;
}



// FUNCTION 1431b2280 FUN_1431b2280 body=952 status=ok
// SIG undefined FUN_1431b2280(void)

void FUN_1431b2280(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  char param_5,undefined8 param_6,int param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  char cVar10;
  ulonglong uVar11;
  undefined8 local_res8;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  
  if (*(int *)(param_1 + 0x13c) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x108) != 1) {
    for (puVar4 = *(undefined8 **)(param_1 + 0x118); puVar4 != (undefined8 *)0x0;
        puVar4 = (undefined8 *)*puVar4) {
      puVar9 = (undefined4 *)puVar4[2];
      if (puVar9 != puVar9 + *(uint *)(puVar4 + 3)) {
        do {
          plVar6 = (longlong *)CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,*puVar9,0);
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x78))
                      (plVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
          puVar9 = puVar9 + 1;
        } while (puVar9 != (undefined4 *)(puVar4[2] + (ulonglong)*(uint *)(puVar4 + 3) * 4));
      }
    }
    return;
  }
  if (param_5 == '\0') goto LAB_1431b23b4;
  uVar2 = *(uint *)(param_4 + 1);
  local_res8 = CONCAT44(*(undefined4 *)(param_1 + 0x10c),1);
  if (*(uint *)((longlong)param_4 + 0xc) <= uVar2) {
    uVar1 = *(uint *)((longlong)param_4 + 0xc) + 1;
    puVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 3);
    if (puVar4 == (undefined8 *)0x0) goto LAB_1431b23b4;
    puVar8 = (undefined8 *)*param_4;
    if ((puVar8 != (undefined8 *)0x0) && (puVar8 != puVar4)) {
      uVar11 = (ulonglong)*(uint *)(param_4 + 1);
      puVar7 = puVar4;
      if (uVar11 != 0) {
        do {
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = 1;
          }
          *puVar7 = *(undefined8 *)((*param_4 - (longlong)puVar4) + (longlong)puVar7);
          uVar11 = uVar11 - 1;
          puVar7 = puVar7 + 1;
        } while (uVar11 != 0);
        puVar8 = (undefined8 *)*param_4;
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar8);
    }
    *param_4 = (longlong)puVar4;
    *(uint *)((longlong)param_4 + 0xc) = uVar1;
    if (uVar1 <= uVar2) goto LAB_1431b23b4;
  }
  puVar4 = (undefined8 *)(*param_4 + (ulonglong)*(uint *)(param_4 + 1) * 8);
  *(uint *)(param_4 + 1) = *(uint *)(param_4 + 1) + 1;
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = local_res8;
  }
LAB_1431b23b4:
  iVar3 = param_8;
  if (*(int *)(param_1 + 0x10c) != param_7) {
    local_70 = param_6;
    local_60 = 0;
    local_58 = 0xff;
    local_50 = 0xff;
    local_48 = 0;
    local_68 = 0;
    iVar3 = CAkSwitchAware::GetSwitchToUse
                      (param_1 + 0xe8,&local_70,*(int *)(param_1 + 0x10c),
                       *(undefined4 *)(param_1 + 0x108));
  }
  puVar8 = *(undefined8 **)(param_1 + 0x118);
  for (puVar4 = puVar8; puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4) {
    if (*(int *)(puVar4 + 1) == iVar3) {
      plVar6 = puVar4 + 2;
      if (puVar4 + 2 != (longlong *)0x0) goto joined_r0x0001431b2470;
      break;
    }
  }
  puVar4 = puVar8;
  do {
    plVar6 = (longlong *)0x0;
    if (puVar4 == (undefined8 *)0x0) {
joined_r0x0001431b2470:
      for (; puVar8 != (undefined8 *)0x0; puVar8 = (undefined8 *)*puVar8) {
        puVar9 = (undefined4 *)puVar8[2];
        cVar10 = param_5;
        if (puVar8 + 2 != plVar6) {
          cVar10 = '\0';
        }
        if (puVar9 != puVar9 + *(uint *)(puVar8 + 3)) {
          do {
            plVar5 = (longlong *)CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,*puVar9,0);
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x78))
                        (plVar5,param_2,param_3,param_4,cVar10,param_6,param_7,param_8);
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
            puVar9 = puVar9 + 1;
          } while (puVar9 != (undefined4 *)(puVar8[2] + (ulonglong)*(uint *)(puVar8 + 3) * 4));
        }
      }
      return;
    }
    if (*(int *)(puVar4 + 1) == *(int *)(param_1 + 0x110)) {
      plVar6 = puVar4 + 2;
      goto joined_r0x0001431b2470;
    }
    puVar4 = (undefined8 *)*puVar4;
  } while( true );
}



// FUNCTION 1431b2640 FUN_1431b2640 body=285 status=ok
// SIG undefined FUN_1431b2640(void)

longlong FUN_1431b2640(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int *piVar3;
  
  for (puVar2 = *(undefined8 **)(param_1 + 0x178); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    if (*(int *)(puVar2 + 1) == param_2) {
      if ((longlong)puVar2 + 0xc != 0) {
        return (longlong)puVar2 + 0xc;
      }
      break;
    }
  }
  for (puVar2 = *(undefined8 **)(param_1 + 0x178); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    if (*(int *)(puVar2 + 1) == param_2) {
      if ((undefined4 *)((longlong)puVar2 + 0xc) != (undefined4 *)0x0) {
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
        goto LAB_1431b2728;
      }
      break;
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x188);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x10);
    if (puVar2 == (undefined8 *)0x0) goto LAB_1431b2728;
    *puVar2 = *(undefined8 *)(param_1 + 0x188);
    *(undefined8 **)(param_1 + 0x188) = puVar2;
  }
  if (*(undefined8 **)(param_1 + 0x180) == (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 0x178) = puVar2;
  }
  else {
    **(undefined8 **)(param_1 + 0x180) = puVar2;
    puVar2 = *(undefined8 **)(param_1 + 0x188);
  }
  *(undefined8 **)(param_1 + 0x180) = puVar2;
  *(undefined8 *)(param_1 + 0x188) = *puVar2;
  *puVar2 = 0;
  *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + 1;
  lVar1 = *(longlong *)(param_1 + 0x180);
  piVar3 = (int *)(lVar1 + 8);
  if (piVar3 != (int *)0x0) {
    *piVar3 = param_2;
    *(undefined4 *)(lVar1 + 0xc) = 0;
  }
LAB_1431b2728:
  puVar2 = *(undefined8 **)(param_1 + 0x178);
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(int *)(puVar2 + 1) == param_2) break;
    puVar2 = (undefined8 *)*puVar2;
  }
  return (longlong)puVar2 + 0xc;
}



// FUNCTION 1431b2790 FUN_1431b2790 body=150 status=ok
// SIG undefined FUN_1431b2790(void)

undefined8 FUN_1431b2790(longlong param_1,int param_2,char param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  
  piVar2 = (int *)FUN_1431b2640(param_1 + -0xf0,param_4);
  if (*piVar2 != 0) {
    for (puVar1 = *(undefined8 **)(param_1 + 0x28); puVar1 != (undefined8 *)0x0;
        puVar1 = (undefined8 *)*puVar1) {
      if (*(int *)(puVar1 + 1) == param_2) {
        if (puVar1 == (undefined8 *)0x0) {
          return 1;
        }
        if (param_3 == '\0') {
          FUN_1431b47e0(param_1 + -0xf0,puVar1 + 2,param_4);
          return 1;
        }
        uVar3 = FUN_1431b36a0();
        return uVar3;
      }
    }
  }
  return 1;
}



// FUNCTION 1431b2830 FUN_1431b2830 body=370 status=ok
// SIG undefined FUN_1431b2830(void)

void FUN_1431b2830(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  long lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)param_1[0x2e];
  if (plVar7 != (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    do {
      if ((undefined8 *)param_1[0x2e] != (undefined8 *)0x0) {
        plVar5 = *(longlong **)param_1[0x2e];
        if (plVar5 == (longlong *)0x0) {
          plVar5 = plVar6;
        }
        param_1[0x2e] = (longlong)plVar5;
        *(int *)(param_1 + 0x2d) = (int)param_1[0x2d] + -1;
      }
      CAkPlayingMgr::RemoveItemActiveCount(DAT_146b50b00,*(undefined4 *)((longlong)plVar7 + 0x1c));
      (**(code **)(*param_1 + 0x130))(param_1,1);
      FUN_143177a90(param_1);
      puVar2 = (undefined8 *)plVar7[4];
      piVar1 = (int *)(puVar2 + 10);
      *piVar1 = *piVar1 + -1;
      lVar4 = g_DefaultPoolId;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,0);
        AK::MemoryMgr::Free(lVar4,puVar2);
      }
      plVar5 = plVar6;
      plVar3 = DAT_146b52010;
      if (plVar7[1] != 0) {
        AkExternalSourceArray::Release();
        plVar3 = DAT_146b52010;
      }
      for (; (plVar3 != (longlong *)0x0 && ((plVar7 < plVar3 || (plVar3 + 0x780 <= plVar7))));
          plVar3 = (longlong *)plVar3[0x780]) {
        plVar5 = plVar3;
      }
      if (plVar3[0x782] == 0) {
        plVar3[0x782] = (longlong)plVar7;
        *plVar7 = 0;
      }
      else {
        *plVar7 = plVar3[0x782];
        plVar3[0x782] = (longlong)plVar7;
      }
      *(int *)(plVar3 + 0x781) = (int)plVar3[0x781] + 1;
      if ((int)plVar3[0x781] == 0x80) {
        plVar7 = (longlong *)plVar3[0x780];
        if (plVar3 != DAT_146b52010) {
          plVar5[0x780] = plVar3[0x780];
          plVar7 = DAT_146b52010;
        }
        DAT_146b52010 = plVar7;
        AK::MemoryMgr::Free(g_DefaultPoolId,plVar3);
      }
      plVar7 = (longlong *)param_1[0x2e];
    } while (plVar7 != (longlong *)0x0);
  }
  CAkStateAware::FlushStateTransitions(param_1 + 3);
  return;
}



// FUNCTION 1431b29b0 FUN_1431b29b0 body=967 status=ok
// SIG undefined FUN_1431b29b0(void)

undefined4 FUN_1431b29b0(longlong param_1,uint param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  longlong *plVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  longlong *plVar10;
  uint local_res10;
  undefined8 local_res20;
  undefined4 local_208;
  undefined4 local_204;
  undefined1 local_200;
  undefined8 *local_1f8;
  uint *local_1f0;
  uint local_1e0;
  undefined4 local_1d8 [2];
  longlong *local_1d0;
  undefined8 local_1c8;
  undefined4 *local_1c0;
  int *local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_158;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_148;
  undefined1 local_130 [224];
  byte local_50;
  
  CAkRegistryMgr::GetSwitchHistItem
            (g_pRegistryMgr,&local_res20,param_3,*(undefined4 *)(param_1 + 0x10));
  if (param_2 == (uint)local_res20) {
    return 1;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x118);
  for (local_1f8 = puVar1; puVar2 = puVar1, local_1f8 != (undefined8 *)0x0;
      local_1f8 = (undefined8 *)*local_1f8) {
    if (*(uint *)(local_1f8 + 1) == (uint)local_res20) {
      local_1f0 = (uint *)(local_1f8 + 3);
      local_1f8 = local_1f8 + 2;
      goto joined_r0x0001431b2a4c;
    }
  }
  local_1f8 = (undefined8 *)0x0;
  local_1f0 = (uint *)&DAT_00000008;
joined_r0x0001431b2a4c:
  do {
    if (puVar2 == (undefined8 *)0x0) break;
    if (*(uint *)(puVar2 + 1) == param_2) {
      plVar10 = puVar2 + 2;
      local_res10 = param_2;
      if (plVar10 != (longlong *)0x0) goto LAB_1431b2aa0;
      break;
    }
    puVar2 = (undefined8 *)*puVar2;
  } while( true );
  local_res10 = *(uint *)(param_1 + 0x110);
  do {
    if (puVar1 == (undefined8 *)0x0) {
      plVar10 = (longlong *)0x0;
LAB_1431b2aa0:
      uVar4 = CAkSwitchCntr::StopPrevious(param_1,local_1f8,plVar10,param_3);
      CAkRegistryMgr::ClearSwitchHist(g_pRegistryMgr);
      puVar1 = *(undefined8 **)(param_1 + 0x170);
      iVar7 = 0;
      uVar9 = 0;
      local_res20 = 0;
      do {
        if (puVar1 == (undefined8 *)0x0) {
          FUN_14314ce40(g_pRegistryMgr,param_3,*(undefined4 *)(param_1 + 0x10),&local_res20);
          return uVar4;
        }
        if (puVar1[4] == param_3) {
          if (uVar9 == local_res10) {
            iVar7 = iVar7 + 1;
          }
          else {
            local_res20 = (ulonglong)local_res10;
            iVar7 = 1;
            uVar9 = local_res10;
          }
          local_res20 = CONCAT44(iVar7,(uint)local_res20);
          if ((plVar10 != (longlong *)0x0) &&
             (piVar8 = (int *)*plVar10, piVar8 != piVar8 + *(uint *)(plVar10 + 1))) {
            do {
              iVar7 = *piVar8;
              for (puVar2 = *(undefined8 **)(param_1 + 0x140); puVar2 != (undefined8 *)0x0;
                  puVar2 = (undefined8 *)*puVar2) {
                if (*(int *)(puVar2 + 1) == iVar7) {
                  if (puVar2 != (undefined8 *)0xfffffffffffffff4) {
                    local_1e0 = *(uint *)((longlong)puVar2 + 0x14);
                    uVar9 = local_1e0 & 0xff;
                    goto LAB_1431b2b65;
                  }
                  break;
                }
              }
              uVar9 = 0;
LAB_1431b2b65:
              if (((uVar9 & 0x10) != 0) && (local_1f8 != (undefined8 *)0x0)) {
                piVar5 = (int *)*local_1f8;
                piVar3 = piVar5 + *local_1f0;
                for (; piVar5 != piVar3; piVar5 = piVar5 + 1) {
                  if (*piVar5 == iVar7) goto LAB_1431b2cdc;
                }
              }
              plVar6 = (longlong *)CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,iVar7,0);
              if (plVar6 == (longlong *)0x0) {
                uVar4 = 2;
              }
              else {
                local_208 = 0;
                local_200 = 0;
                local_204 = 4;
                for (puVar2 = *(undefined8 **)(param_1 + 0x140); puVar2 != (undefined8 *)0x0;
                    puVar2 = (undefined8 *)*puVar2) {
                  if (*(int *)(puVar2 + 1) == iVar7) {
                    if (puVar2 != (undefined8 *)0xfffffffffffffff4) {
                      local_208 = *(undefined4 *)(puVar2 + 2);
                    }
                    break;
                  }
                }
                FUN_1431a50b0(local_1d8,puVar1 + 5);
                local_1c8 = puVar1[4];
                local_50 = local_50 | 2;
                piVar3 = (int *)puVar1[1];
                local_1c0 = &local_208;
                local_1a4 = *(undefined4 *)((longlong)puVar1 + 0x1c);
                local_1b0 = puVar1[2];
                local_1a8 = *(undefined4 *)(puVar1 + 3);
                local_1d8[0] = 0;
                local_1d0 = plVar6;
                if (local_1b8 != (int *)0x0) {
                  AkExternalSourceArray::Release();
                }
                if (piVar3 != (int *)0x0) {
                  *piVar3 = *piVar3 + 1;
                }
                local_158 = *(undefined4 *)(puVar1 + 0xe);
                local_154 = 0;
                local_150 = 0;
                local_148 = 0;
                local_1b8 = piVar3;
                uVar4 = FUN_14315d810(plVar6,local_1d8);
                (**(code **)(*plVar6 + 0x10))(plVar6);
                AkInitialSoundParams::DoTerm(local_130);
                if (local_1b8 != (int *)0x0) {
                  AkExternalSourceArray::Release();
                }
              }
LAB_1431b2cdc:
              piVar8 = piVar8 + 1;
            } while (piVar8 != (int *)(*plVar10 + (ulonglong)*(uint *)(plVar10 + 1) * 4));
            iVar7 = local_res20._4_4_;
            uVar9 = (uint)local_res20;
          }
        }
        puVar1 = (undefined8 *)*puVar1;
      } while( true );
    }
    if (*(uint *)(puVar1 + 1) == local_res10) {
      plVar10 = puVar1 + 2;
      goto LAB_1431b2aa0;
    }
    puVar1 = (undefined8 *)*puVar1;
  } while( true );
}



// FUNCTION 1431b2d80 FUN_1431b2d80 body=1741 status=ok
// SIG undefined FUN_1431b2d80(void)

int FUN_1431b2d80(longlong *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  void *pvVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  int *piVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  undefined1 uVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  uint local_res10;
  int local_res20;
  int local_res24;
  longlong local_258 [2];
  uint local_248;
  undefined8 local_240;
  int local_238;
  undefined4 local_230;
  undefined1 local_228;
  undefined1 local_220;
  undefined8 local_218;
  undefined1 local_210 [24];
  longlong local_1f8;
  int local_1d8 [2];
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  int *local_1b8;
  undefined8 local_1b0;
  int local_1a8;
  int local_1a4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  int local_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  undefined8 local_160;
  int local_158;
  int local_154;
  undefined1 *local_150;
  int local_148;
  int local_144;
  int local_140;
  undefined8 local_138;
  undefined1 local_130 [136];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  int local_68;
  undefined8 local_60;
  undefined8 local_58;
  byte local_50;
  
  iVar2 = *param_2;
  uVar1 = *(undefined1 *)((longlong)param_2 + 0x99);
  iVar20 = 2;
  if ((((char)param_2[0x26] + 0x80U & 0xcf) == 0) && ((char)param_2[0x26] != -0x50)) {
    uVar18 = *(undefined1 *)((longlong)param_2 + 0x9a);
  }
  else {
    uVar18 = 0xff;
  }
  iVar9 = param_2[0xd];
  local_230 = AkPBIParams::GetMidiTargetID(param_2);
  local_240 = *(undefined8 *)(param_2 + 4);
  uVar16 = 0;
  local_218 = 0;
  local_238 = iVar9;
  local_228 = uVar1;
  local_220 = uVar18;
  iVar9 = CAkSwitchAware::GetSwitchToUse
                    (param_1 + 0x1d,&local_240,*(undefined4 *)((longlong)param_1 + 0x10c),
                     (int)param_1[0x21]);
  if (((*(byte *)((longlong)param_1 + 0xaa) & 2) != 0) && ((char)param_2[0x26] == '\0')) {
    cVar8 = (**(code **)(*param_1 + 0x128))(param_1,1);
    if (cVar8 == '\0') {
      (**(code **)(*param_1 + 0x130))(param_1,1);
      return 2;
    }
    FUN_143173d90(param_1);
    for (pvVar10 = DAT_146b52010; pvVar10 != (void *)0x0;
        pvVar10 = *(void **)((longlong)pvVar10 + 0x3c00)) {
      if (*(longlong *)((longlong)pvVar10 + 0x3c10) != 0) goto LAB_1431b2ee4;
    }
    pvVar10 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x3c18);
    if (pvVar10 == (void *)0x0) {
LAB_1431b2ff0:
      (**(code **)(*param_1 + 0x130))(param_1,1);
      FUN_143177a90(param_1);
      return 2;
    }
    AkDynaBlkPool<CAkSwitchCntr::SwitchContPlaybackItem,128,AkArrayAllocatorNoAlign<0>_>::PoolChunk
    ::PoolChunk(pvVar10);
    if (DAT_146b52010 == (void *)0x0) {
      DAT_146b52010 = pvVar10;
      *(undefined8 *)((longlong)pvVar10 + 0x3c00) = 0;
    }
    else {
      *(void **)((longlong)pvVar10 + 0x3c00) = DAT_146b52010;
      DAT_146b52010 = pvVar10;
    }
LAB_1431b2ee4:
    puVar3 = *(ulonglong **)((longlong)pvVar10 + 0x3c10);
    if (puVar3 == (ulonglong *)0x0) goto LAB_1431b2ff0;
    uVar11 = *puVar3;
    if (*puVar3 == 0) {
      uVar11 = uVar16;
    }
    *(ulonglong *)((longlong)pvVar10 + 0x3c10) = uVar11;
    *(int *)((longlong)pvVar10 + 0x3c08) = *(int *)((longlong)pvVar10 + 0x3c08) + -1;
    if (puVar3 == (ulonglong *)0x0) goto LAB_1431b2ff0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[1] = 0;
    *(undefined4 *)((longlong)puVar3 + 0x6c) = 0;
    if (param_1[0x2e] == 0) {
      param_1[0x2e] = (longlong)puVar3;
      *puVar3 = 0;
    }
    else {
      *puVar3 = param_1[0x2e];
      param_1[0x2e] = (longlong)puVar3;
    }
    *(int *)(param_1 + 0x2d) = (int)param_1[0x2d] + 1;
    *(int *)(puVar3 + 0xe) = param_2[0x20];
    puVar3[4] = *(ulonglong *)(param_2 + 4);
    UserParams::operator=(puVar3 + 1,param_2 + 8);
    uVar11 = *(ulonglong *)(param_2 + 0x10);
    puVar3[5] = *(ulonglong *)(param_2 + 0xe);
    puVar3[6] = uVar11;
    uVar11 = *(ulonglong *)(param_2 + 0x14);
    puVar3[7] = *(ulonglong *)(param_2 + 0x12);
    puVar3[8] = uVar11;
    iVar19 = param_2[0x17];
    iVar6 = param_2[0x18];
    iVar7 = param_2[0x19];
    *(int *)(puVar3 + 9) = param_2[0x16];
    *(int *)((longlong)puVar3 + 0x4c) = iVar19;
    *(int *)(puVar3 + 10) = iVar6;
    *(int *)((longlong)puVar3 + 0x54) = iVar7;
    iVar19 = param_2[0x1b];
    iVar6 = param_2[0x1c];
    iVar7 = param_2[0x1d];
    *(int *)(puVar3 + 0xb) = param_2[0x1a];
    *(int *)((longlong)puVar3 + 0x5c) = iVar19;
    *(int *)(puVar3 + 0xc) = iVar6;
    *(int *)((longlong)puVar3 + 100) = iVar7;
    *(int *)(puVar3 + 0xd) = param_2[0x1e];
    *(int *)((longlong)puVar3 + 0x6c) = param_2[0x1f];
    *(int *)(puVar3[4] + 0x50) = *(int *)(puVar3[4] + 0x50) + 1;
    CAkPlayingMgr::AddItemActiveCount(DAT_146b50b00,param_2[0xd]);
  }
  SafeContinuationList::SafeContinuationList(local_258,param_2,param_1);
  puVar4 = (undefined8 *)param_1[0x23];
  iVar19 = 0;
  local_res10 = 0;
  for (puVar5 = puVar4; puVar5 != (undefined8 *)0x0; puVar5 = (undefined8 *)*puVar5) {
    if (*(int *)(puVar5 + 1) == iVar9) {
      plVar17 = puVar5 + 2;
      if (plVar17 != (longlong *)0x0) goto LAB_1431b307d;
      break;
    }
  }
  iVar9 = (int)param_1[0x22];
  for (; puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4) {
    if (*(int *)(puVar4 + 1) == iVar9) {
      plVar17 = puVar4 + 2;
      if (plVar17 != (longlong *)0x0) goto LAB_1431b307d;
      break;
    }
  }
  iVar20 = (iVar2 != 0) + 1;
  iVar19 = 0;
  goto LAB_1431b3045;
LAB_1431b307d:
  CAkRegistryMgr::GetSwitchHistItem
            (g_pRegistryMgr,&local_res20,*(undefined8 *)(param_2 + 4),(int)param_1[2]);
  if (local_res20 == iVar9) {
    local_res24 = local_res24 + 1;
  }
  else {
    local_res24 = 1;
    local_res20 = iVar9;
  }
  iVar9 = local_res24;
  FUN_14314ce40(g_pRegistryMgr,*(undefined8 *)(param_2 + 4),(int)param_1[2],&local_res20);
  if ((iVar2 == 0) && ((int)plVar17[1] == 0)) {
    iVar20 = 1;
  }
  else {
    uVar15 = *(uint *)(plVar17 + 1);
    if (1 < uVar15) {
      FUN_14317e410(param_2);
      uVar15 = *(uint *)(plVar17 + 1);
    }
    piVar14 = (int *)*plVar17;
    if (piVar14 != piVar14 + uVar15) {
      do {
        local_1d8[0] = *param_2;
        local_1d0 = *(undefined8 *)(param_2 + 2);
        local_1c8 = *(undefined8 *)(param_2 + 4);
        local_1c0 = *(undefined8 *)(param_2 + 6);
        local_1a4 = param_2[0xd];
        local_1b0 = *(undefined8 *)(param_2 + 10);
        local_1a8 = param_2[0xc];
        local_1b8 = *(int **)(param_2 + 8);
        if (local_1b8 != (int *)0x0) {
          *local_1b8 = *local_1b8 + 1;
        }
        local_1a0 = *(undefined8 *)(param_2 + 0xe);
        uStack_198 = *(undefined8 *)(param_2 + 0x10);
        local_158 = param_2[0x20];
        local_190 = *(undefined8 *)(param_2 + 0x12);
        uStack_188 = *(undefined8 *)(param_2 + 0x14);
        local_154 = param_2[0x21];
        local_150 = *(undefined1 **)(param_2 + 0x22);
        local_148 = param_2[0x24];
        local_144 = param_2[0x25];
        local_180 = *(undefined8 *)(param_2 + 0x16);
        uStack_178 = *(undefined8 *)(param_2 + 0x18);
        local_140 = param_2[0x26];
        local_138 = *(undefined8 *)(param_2 + 0x28);
        local_70 = *(undefined8 *)(param_2 + 0x5a);
        local_160 = *(undefined8 *)(param_2 + 0x1e);
        local_60 = *(undefined8 *)(param_2 + 0x5e);
        local_170 = param_2[0x1a];
        iStack_16c = param_2[0x1b];
        iStack_168 = param_2[0x1c];
        iStack_164 = param_2[0x1d];
        local_a8 = 0;
        local_a0 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_68 = param_2[0x5c];
        local_88 = 0;
        local_80 = 0;
        local_78 = 0;
        FUN_1431b1ce0(local_130,param_2 + 0x2a);
        local_58 = *(undefined8 *)(param_2 + 0x60);
        local_50 = local_50 ^ (*(byte *)(param_2 + 0x62) ^ local_50) & 0xf;
        for (puVar4 = (undefined8 *)param_1[0x28]; puVar4 != (undefined8 *)0x0;
            puVar4 = (undefined8 *)*puVar4) {
          if (*(int *)(puVar4 + 1) == *piVar14) {
            if (puVar4 != (undefined8 *)0xfffffffffffffff4) {
              local_248 = *(uint *)((longlong)puVar4 + 0x14);
              uVar15 = local_248 & 0xff;
              goto LAB_1431b32a1;
            }
            break;
          }
        }
        uVar15 = 0;
LAB_1431b32a1:
        if (((iVar9 == 1) || ((uVar15 & 8) == 0)) && ((local_148 == 0 || ((int)uVar16 == 0)))) {
          plVar12 = (longlong *)CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,*piVar14,0);
          if (plVar12 == (longlong *)0x0) {
            uVar16 = (ulonglong)local_res10;
          }
          else {
            if (iVar2 == 0) {
              iVar20 = FUN_14315d810(plVar12);
            }
            else {
              AkContParamsAndPath::AkContParamsAndPath(local_210);
              if ((int)plVar17[1] == 1) {
                FUN_1431c43d0(param_1,*(undefined8 *)(local_150 + 0x18));
LAB_1431b3377:
                local_150 = local_210;
                iVar20 = FUN_14315d810(plVar12);
              }
              else {
                lVar13 = CAkContinuationList::Create();
                bVar21 = local_1f8 != 0;
                local_1f8 = lVar13;
                if (bVar21) {
                  CAkContinuationList::Release();
                }
                if (local_1f8 == 0) {
                  iVar20 = 0x34;
                }
                else {
                  iVar20 = FUN_1431c4140(param_1,local_210,local_1d8,local_258);
                  if (iVar20 == 1) goto LAB_1431b3377;
                }
              }
              AkContParamsAndPath::~AkContParamsAndPath(local_210);
            }
            (**(code **)(*plVar12 + 0x10))(plVar12);
            uVar15 = local_res10 + 1;
            if (iVar20 != 1) {
              uVar15 = local_res10;
            }
            uVar16 = (ulonglong)uVar15;
            local_res10 = uVar15;
          }
        }
        iVar19 = (int)uVar16;
        AkInitialSoundParams::DoTerm(local_130);
        if (local_1b8 != (int *)0x0) {
          AkExternalSourceArray::Release();
        }
        piVar14 = piVar14 + 1;
      } while (piVar14 != (int *)(*plVar17 + (ulonglong)*(uint *)(plVar17 + 1) * 4));
    }
  }
LAB_1431b3045:
  if (iVar2 != 0) {
    if ((iVar19 == 0) && ((*(byte *)((longlong)param_1 + 0xaa) & 2) == 0)) {
      iVar20 = FUN_1431c46c0(param_1,param_2);
    }
    else {
      if (local_258[0] == 0) {
        return iVar20;
      }
      iVar20 = CAkMultiPlayNode::ContUnrefList(param_1);
    }
  }
  if (local_258[0] != 0) {
    CAkContinuationList::Release();
  }
  return iVar20;
}



// FUNCTION 1431b3450 FUN_1431b3450 body=584 status=ok
// SIG undefined FUN_1431b3450(void)

int FUN_1431b3450(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int *piVar3;
  undefined8 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  
  iVar2 = 1;
  if (param_2 == 0) {
    puVar4 = (undefined8 *)param_1[0x19];
    if (puVar4 != puVar4 + *(uint *)(param_1 + 0x1a)) {
      do {
        iVar2 = (**(code **)(*(longlong *)*puVar4 + 0x138))((longlong *)*puVar4,0);
        if (iVar2 != 1) {
          puVar10 = (undefined8 *)param_1[0x19];
          uVar9 = 0;
          uVar8 = (ulonglong)((longlong)puVar4 + (7 - (longlong)puVar10)) >> 3;
          if (puVar4 < puVar10) {
            uVar8 = uVar9;
          }
          if (uVar8 == 0) {
            return iVar2;
          }
          do {
            (**(code **)(*(longlong *)*puVar10 + 0x140))((longlong *)*puVar10,0);
            uVar9 = uVar9 + 1;
            puVar10 = puVar10 + 1;
          } while (uVar9 != uVar8);
          return iVar2;
        }
        puVar4 = puVar4 + 1;
        iVar2 = 1;
      } while (puVar4 != (undefined8 *)(param_1[0x19] + (ulonglong)*(uint *)(param_1 + 0x1a) * 8));
    }
  }
  else {
    piVar3 = (int *)FUN_1431b2640();
    if (*piVar3 == 0) {
      puVar4 = (undefined8 *)
               FUN_1431c52c0(param_1 + 0x1e,*(undefined4 *)((longlong)param_1 + 0x10c),
                             (int)param_1[0x21],param_2);
      if (puVar4 == (undefined8 *)0x0) {
        iVar2 = 0x34;
      }
      else {
        for (puVar10 = (undefined8 *)param_1[0x23]; puVar10 != (undefined8 *)0x0;
            puVar10 = (undefined8 *)*puVar10) {
          piVar5 = (int *)*puVar4;
          piVar6 = piVar5 + *(uint *)(puVar4 + 1);
          if (piVar5 != piVar6) {
            do {
              if (*piVar5 == *(int *)(puVar10 + 1)) break;
              piVar5 = piVar5 + 1;
            } while (piVar5 != piVar6);
            if (piVar5 != piVar6) {
              iVar2 = FUN_1431b36a0(param_1,puVar10 + 2,param_2);
            }
          }
          if (*(int *)(puVar10 + 1) == (int)param_1[0x22]) {
            iVar2 = FUN_1431b36a0(param_1,puVar10 + 2,param_2);
          }
          if (iVar2 != 1) {
            puVar1 = (undefined8 *)param_1[0x23];
            do {
              if (puVar1 == puVar10) {
                return iVar2;
              }
              piVar6 = (int *)*puVar4;
              piVar3 = piVar6 + *(uint *)(puVar4 + 1);
              if (piVar6 != piVar3) {
                do {
                  if (*piVar6 == *(int *)(puVar1 + 1)) break;
                  piVar6 = piVar6 + 1;
                } while (piVar6 != piVar3);
                if ((piVar6 != piVar3) &&
                   (puVar7 = (undefined4 *)puVar1[2], puVar7 != puVar7 + *(uint *)(puVar1 + 3))) {
                  do {
                    FUN_143179790(*puVar7,param_2);
                    puVar7 = puVar7 + 1;
                  } while (puVar7 != (undefined4 *)
                                     (puVar1[2] + (ulonglong)*(uint *)(puVar1 + 3) * 4));
                }
              }
              puVar1 = (undefined8 *)*puVar1;
            } while( true );
          }
        }
        *piVar3 = *piVar3 + 1;
        iVar2 = FUN_1431c5300(param_1 + 0x1e,*(undefined4 *)((longlong)param_1 + 0x10c),
                              (int)param_1[0x21],param_2);
        if (iVar2 != 1) {
          (**(code **)(*param_1 + 0x140))(param_1,param_2);
        }
      }
    }
    else {
      *piVar3 = *piVar3 + 1;
    }
  }
  return iVar2;
}



// FUNCTION 1431b36a0 FUN_1431b36a0 body=206 status=ok
// SIG undefined FUN_1431b36a0(void)

ulonglong FUN_1431b36a0(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  
  puVar3 = (undefined4 *)*param_2;
  if (puVar3 == puVar3 + *(uint *)(param_2 + 1)) {
    return 1;
  }
  do {
    uVar1 = FUN_143176fa0(*puVar3,param_3);
    if ((int)uVar1 != 1) {
      puVar5 = (undefined4 *)*param_2;
      uVar4 = 0;
      uVar6 = (ulonglong)((longlong)puVar3 + (3 - (longlong)puVar5)) >> 2;
      if (puVar3 < puVar5) {
        uVar6 = uVar4;
      }
      uVar2 = uVar1;
      if (uVar6 != 0) {
        do {
          FUN_143179790(*puVar5,param_3);
          uVar4 = uVar4 + 1;
          puVar5 = puVar5 + 1;
          uVar2 = uVar1 & 0xffffffff;
        } while (uVar4 != uVar6);
      }
      return uVar2;
    }
    puVar3 = puVar3 + 1;
  } while (puVar3 != (undefined4 *)(*param_2 + (ulonglong)*(uint *)(param_2 + 1) * 4));
  return uVar1 & 0xffffffff;
}



// FUNCTION 1431b3770 RemoveChild body=182 status=ok
// SIG undefined RemoveChild(void)

void CAkSwitchCntr::RemoveChild(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar4 = param_2[2];
  plVar1 = (longlong *)param_2[0x10];
  if (plVar1 == param_1) {
    (**(code **)(*param_2 + 0x30))(param_2,0);
    FUN_143149aa0(param_1 + 0x19);
  }
  plVar2 = (longlong *)param_1[0x28];
  plVar5 = (longlong *)0x0;
  do {
    plVar3 = plVar5;
    plVar5 = plVar2;
    if (plVar5 == (longlong *)0x0) goto LAB_1431b380d;
    plVar2 = (longlong *)*plVar5;
  } while ((int)plVar5[1] != (int)lVar4);
  if (plVar5 == (longlong *)param_1[0x28]) {
    param_1[0x28] = (longlong)plVar2;
  }
  else {
    *plVar3 = (longlong)plVar2;
  }
  if (plVar5 == (longlong *)param_1[0x29]) {
    param_1[0x29] = (longlong)plVar3;
  }
  *plVar5 = param_1[0x2a];
  *(int *)((longlong)param_1 + 0x164) = *(int *)((longlong)param_1 + 0x164) + -1;
  param_1[0x2a] = (longlong)plVar5;
LAB_1431b380d:
  if (plVar1 == param_1) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  return;
}


