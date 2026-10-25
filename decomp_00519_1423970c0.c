// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1423970c0 FUN_1423970c0 body=44 status=ok
// SIG undefined FUN_1423970c0(void)

void FUN_1423970c0(longlong param_1,byte param_2)

{
  if (param_2 != (*(byte *)(param_1 + 0x2f1) >> 4 & 1)) {
    *(byte *)(param_1 + 0x2f1) = *(byte *)(param_1 + 0x2f1) & 0xef | param_2 << 4;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 1423970f0 FUN_1423970f0 body=204 status=ok
// SIG undefined FUN_1423970f0(void)

void FUN_1423970f0(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_1 + 200) = *(undefined1 *)(param_2 + 0x328);
  *(undefined1 *)(param_1 + 0xc9) = *(undefined1 *)(param_2 + 0x329);
  *(undefined1 *)(param_1 + 0xca) = *(undefined1 *)(param_2 + 0x32a);
  *(undefined1 *)(param_1 + 0xcb) = *(undefined1 *)(param_2 + 0x32b);
  *(undefined1 *)(param_1 + 0xcd) = *(undefined1 *)(param_2 + 0x32c);
  *(undefined1 *)(param_1 + 0xce) = *(undefined1 *)(param_2 + 0x32d);
  *(undefined1 *)(param_1 + 0xcf) = *(undefined1 *)(param_2 + 0x32e);
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0x32f);
  *(undefined1 *)(param_1 + 0xd1) = *(undefined1 *)(param_2 + 0x330);
  *(undefined1 *)(param_1 + 0xd2) = *(undefined1 *)(param_2 + 0x331);
  *(undefined1 *)(param_1 + 0xd3) = *(undefined1 *)(param_2 + 0x332);
  *(undefined1 *)(param_1 + 0xd4) = *(undefined1 *)(param_2 + 0x333);
  *(undefined1 *)(param_1 + 0xd5) = *(undefined1 *)(param_2 + 0x35c);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0x34c);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x350);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x358);
  return;
}



// FUNCTION 1423971c0 FUN_1423971c0 body=237 status=ok
// SIG undefined FUN_1423971c0(void)

void FUN_1423971c0(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  
  if ((0.0 <= param_2) && (fVar1 = *(float *)(param_1 + 0x2dc), param_2 != fVar1)) {
    fVar2 = *(float *)(param_1 + 0x2e0);
    *(float *)(param_1 + 0x2dc) = param_2;
    if ((fVar2 == 0.0) || (param_2 < fVar2)) {
      if (((*(byte *)(param_1 + 0x2ee) & 1) != 0) || (*(longlong *)(param_1 + 0x650) != 0)) {
        param_2 = 0.0;
      }
      if (1e-08 < ABS(fVar2 - param_2)) {
        *(float *)(param_1 + 0x2e0) = param_2;
        FUN_1423424e0();
        return;
      }
    }
    else if (fVar1 == fVar2) {
      if (((*(byte *)(param_1 + 0x2ee) & 1) != 0) || (*(longlong *)(param_1 + 0x650) != 0)) {
        param_2 = 0.0;
      }
      if (1e-08 < ABS(fVar2 - param_2)) {
        *(float *)(param_1 + 0x2e0) = param_2;
        FUN_1423424e0();
      }
      lVar3 = *(longlong *)(param_1 + 0x120);
      if ((lVar3 == 0) && (lVar3 = FUN_1423407b0(param_1), lVar3 == 0)) {
        return;
      }
      FUN_1428daf80(lVar3,0,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1423972b0 FUN_1423972b0 body=156 status=ok
// SIG undefined FUN_1423972b0(void)

void FUN_1423972b0(longlong param_1,int param_2,float *param_3)

{
  longlong lVar1;
  float *pfVar2;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  if (param_2 == 0) {
    lVar1 = 0x30c;
  }
  else if (param_2 == 1) {
    lVar1 = 0x31c;
  }
  else if (param_2 == 2) {
    lVar1 = 0x32c;
  }
  else {
    if (param_2 != 3) {
      return;
    }
    lVar1 = 0x33c;
  }
  pfVar2 = (float *)(lVar1 + param_1);
  if ((pfVar2 != (float *)0x0) &&
     ((((*param_3 != *pfVar2 || (param_3[1] != pfVar2[1])) || (param_3[2] != pfVar2[2])) ||
      (param_3[3] != pfVar2[3])))) {
    local_18 = *param_3;
    fStack_14 = param_3[1];
    fStack_10 = param_3[2];
    fStack_c = param_3[3];
    *pfVar2 = local_18;
    pfVar2[1] = fStack_14;
    pfVar2[2] = fStack_10;
    pfVar2[3] = fStack_c;
    if (*(longlong *)(param_1 + 0x640) == 0) {
      FUN_1423424e0();
      return;
    }
    FUN_14273c110(*(longlong *)(param_1 + 0x640),param_2,&local_18);
    return;
  }
  return;
}



// FUNCTION 142397350 FUN_142397350 body=199 status=ok
// SIG undefined FUN_142397350(void)

void FUN_142397350(longlong param_1,int param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    uVar2 = (uint)param_3;
    if ((*(uint *)(param_1 + 0x2fc) & 1) == (uint)param_3) {
      return;
    }
    uVar1 = *(uint *)(param_1 + 0x2fc) & 0xfffffffe;
  }
  else if (param_2 == 1) {
    if ((*(uint *)(param_1 + 0x2fc) >> 1 & 1) == (uint)param_3) {
      return;
    }
    uVar1 = (uint)param_3 + (uint)param_3;
    uVar2 = *(uint *)(param_1 + 0x2fc) & 0xfffffffd;
  }
  else if (param_2 == 2) {
    if ((*(uint *)(param_1 + 0x2fc) >> 2 & 1) == (uint)param_3) {
      return;
    }
    uVar1 = (uint)param_3 * 4;
    uVar2 = *(uint *)(param_1 + 0x2fc) & 0xfffffffb;
  }
  else {
    if (param_2 != 3) {
      return;
    }
    if ((*(uint *)(param_1 + 0x2fc) >> 3 & 1) == (uint)param_3) {
      return;
    }
    uVar1 = (uint)param_3 * 8;
    uVar2 = *(uint *)(param_1 + 0x2fc) & 0xfffffff7;
  }
  *(uint *)(param_1 + 0x2fc) = uVar1 | uVar2;
  if (*(longlong *)(param_1 + 0x640) == 0) {
    FUN_1423424e0();
    return;
  }
  FUN_14273c390(*(longlong *)(param_1 + 0x640));
  return;
}



// FUNCTION 142397420 FUN_142397420 body=60 status=ok
// SIG undefined FUN_142397420(void)

void FUN_142397420(longlong param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0xff;
    if (param_2 < 0xff) {
      iVar1 = param_2;
    }
  }
  if (*(int *)(param_1 + 0x308) != iVar1) {
    *(int *)(param_1 + 0x308) = iVar1;
    if (*(longlong *)(param_1 + 0x640) != 0) {
      FUN_14273c530(*(longlong *)(param_1 + 0x640));
      return;
    }
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 142397460 FUN_142397460 body=20 status=ok
// SIG undefined FUN_142397460(void)

void FUN_142397460(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x305) != param_2) {
    *(char *)(param_1 + 0x305) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 142397480 FUN_142397480 body=7 status=ok
// SIG undefined FUN_142397480(void)

void FUN_142397480(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x301) = param_2;
  return;
}



// FUNCTION 142397490 SetDepthPriorityGroup body=23 status=ok
// SIG undefined SetDepthPriorityGroup(void)

void UPrimitiveComponent::SetDepthPriorityGroup(longlong param_1,uint param_2)

{
  if (*(byte *)(param_1 + 0x2e4) != param_2) {
    *(char *)(param_1 + 0x2e4) = (char)param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 1423974b0 SetPlayRate body=9 status=ok
// SIG undefined SetPlayRate(void)

void UTimelineComponent::SetPlayRate(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1dc) = param_2;
  return;
}



// FUNCTION 1423974c0 FUN_1423974c0 body=42 status=ok
// SIG undefined FUN_1423974c0(void)

void FUN_1423974c0(longlong param_1,byte param_2)

{
  if ((*(uint *)(param_1 + 0x398) & 1) != (uint)param_2) {
    *(uint *)(param_1 + 0x398) = *(uint *)(param_1 + 0x398) & 0xfffffffe | (uint)param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 1423974f0 FUN_1423974f0 body=77 status=ok
// SIG undefined FUN_1423974f0(void)

void FUN_1423974f0(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  if ((((*(byte *)(param_1 + 0x2ef) & 1) != param_2) &&
      (*(byte *)(param_1 + 0x2ef) = *(byte *)(param_1 + 0x2ef) & 0xfe | param_2, DAT_146531d70 == 1)
      ) && ((*(byte *)(param_1 + 0x24c) & 2) != 0)) {
    *(byte *)(param_1 + 0x24c) = *(byte *)(param_1 + 0x24c) & 0xfd;
    lVar1 = *(longlong *)(param_1 + 400);
    if (lVar1 != 0) {
      while( true ) {
        if (DAT_146531d70 != 1) {
          return;
        }
        if ((*(byte *)(lVar1 + 0x24c) & 2) == 0) break;
        *(byte *)(lVar1 + 0x24c) = *(byte *)(lVar1 + 0x24c) & 0xfd;
        lVar1 = *(longlong *)(lVar1 + 400);
        if (lVar1 == 0) {
          return;
        }
      }
      return;
    }
  }
  return;
}



// FUNCTION 142397540 FUN_142397540 body=496 status=ok
// SIG undefined FUN_142397540(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142397540(longlong *param_1,byte param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_128 [32];
  undefined1 local_108 [192];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  bVar6 = param_3 == '\x02';
  if (param_2 != (*(byte *)((longlong)param_1 + 0x24c) >> 6 & 1)) {
    bVar6 = (byte)(param_3 - 1U) < 2;
    *(byte *)((longlong)param_1 + 0x24c) =
         *(byte *)((longlong)param_1 + 0x24c) & 0xbf | param_2 << 6;
    (**(code **)(*param_1 + 0x470))(param_1);
  }
  if (bVar6) {
    iVar5 = (int)param_1[0x35];
    if (0 < iVar5) {
      local_48 = (undefined1 *)0x0;
      local_40 = 0;
      FUN_140615c30(local_108,iVar5);
      puVar3 = local_108;
      if (local_48 != (undefined1 *)0x0) {
        puVar3 = local_48;
      }
      _guard_xfg_dispatch_icall_nop
                (puVar3 + (longlong)(int)local_40 * 8,(void *)param_1[0x34],(longlong)iVar5 << 3);
      iVar5 = (int)local_40 + iVar5;
      local_40._0_4_ = iVar5;
      puVar3 = local_48;
      while (0 < (int)local_40) {
        iVar5 = (int)local_40 + -1;
        puVar4 = local_108;
        if (puVar3 != (undefined1 *)0x0) {
          puVar4 = puVar3;
        }
        lVar1 = *(longlong *)(puVar4 + (longlong)iVar5 * 8);
        iVar2 = ((int)local_40 - iVar5) + -1;
        if (iVar2 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (puVar4 + (longlong)iVar5 * 8,puVar4 + (longlong)(int)local_40 * 8,
                     (longlong)iVar2 << 3);
          puVar3 = local_48;
        }
        local_40._0_4_ = (int)local_40 + -1;
        if (lVar1 != 0) {
          iVar5 = *(int *)(lVar1 + 0x1a8);
          if (iVar5 != 0) {
            iVar2 = iVar5 + (int)local_40;
            if (local_40._4_4_ < iVar2) {
              FUN_140615c30(local_108,iVar2);
              puVar3 = local_48;
            }
            puVar4 = local_108;
            if (puVar3 != (undefined1 *)0x0) {
              puVar4 = puVar3;
            }
            _guard_xfg_dispatch_icall_nop
                      (puVar4 + (longlong)(int)local_40 * 8,*(void **)(lVar1 + 0x1a0),
                       (longlong)iVar5 << 3);
            local_40._0_4_ = (int)local_40 + iVar5;
          }
          if (param_3 == '\x02') {
            FUN_142397540(lVar1,param_2,0);
          }
          FUN_1423424e0(lVar1);
          puVar3 = local_48;
        }
      }
      if (puVar3 != (undefined1 *)0x0) {
        FMemory::Free(puVar3);
      }
    }
  }
  return;
}



// FUNCTION 142397730 FUN_142397730 body=12 status=ok
// SIG undefined FUN_142397730(void)

void FUN_142397730(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x650) = param_2;
  FUN_1423424e0();
  return;
}



// FUNCTION 142397740 FUN_142397740 body=531 status=ok
// SIG undefined FUN_142397740(void)

void FUN_142397740(ulonglong param_1,uint param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [8];
  ulonglong local_18;
  undefined1 local_10;
  byte local_f;
  
  if (param_2 != *(byte *)(param_1 + 0x24e)) {
    uVar10 = 0;
    local_28 = 0xffffffff;
    local_24 = 0;
    FWeakObjectPtr::operator=(local_20,0);
    uVar6 = uVar10;
    if (((*(byte *)(param_1 + 0xb8) & 1) != 0) &&
       ((*(longlong *)(param_1 + 0x120) != 0 ||
        (lVar5 = FUN_1423407b0(param_1), uVar6 = 0, lVar5 != 0)))) {
      uVar6 = *(ulonglong *)(param_1 + 0x120);
      if (uVar6 == 0) {
        uVar6 = FUN_1423407b0(param_1);
      }
      local_f = local_f & 0xfd | 1;
      local_10 = 1;
      local_18 = uVar6;
      AK::MemoryMgr::StartProfileThreadUsage((long)&local_18);
      FUN_14233aad0(param_1);
      *(undefined8 *)(param_1 + 0x120) = 0;
      AK::MemoryMgr::StartProfileThreadUsage((long)&local_18);
    }
    FWeakObjectPtr::operator=(local_20,uVar6);
    cVar3 = FWeakObjectPtr::IsValid(local_20);
    uVar6 = uVar10;
    if (cVar3 != '\0') {
      uVar6 = param_1;
    }
    FWeakObjectPtr::operator=(&local_28,uVar6);
    *(char *)(param_1 + 0x24e) = (char)param_2;
    if ((char)param_2 == '\x02') {
      plVar8 = *(longlong **)(param_1 + 0x1a0);
      uVar6 = (longlong)*(int *)(param_1 + 0x1a8) & 0x1fffffffffffffff;
      if (plVar8 + *(int *)(param_1 + 0x1a8) < plVar8) {
        uVar6 = uVar10;
      }
      uVar9 = uVar10;
      if (uVar6 != 0) {
        do {
          plVar2 = (longlong *)*plVar8;
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x500))(plVar2,param_2);
          }
          plVar8 = plVar8 + 1;
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar6);
      }
    }
    cVar3 = FWeakObjectPtr::IsValid(&local_28);
    if (cVar3 != '\0') {
      uVar6 = FWeakObjectPtr::Get(local_20);
      lVar5 = FWeakObjectPtr::Get(&local_28);
      iVar1 = *(int *)(lVar5 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar7 = iVar1 >> 0x1f & 0xffff;
        uVar4 = iVar1 + uVar7;
        uVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                 (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
      }
      if ((*(uint *)(uVar10 + 8) >> 0x1d & 1) == 0) {
        if ((*(byte *)(lVar5 + 0xb8) & 1) != 0) {
          FUN_14233aad0(lVar5);
        }
        *(ulonglong *)(lVar5 + 0x120) = uVar6;
        local_f = local_f & 0xfd | 1;
        local_10 = 1;
        local_18 = uVar6;
        AK::MemoryMgr::StartProfileThreadUsage((long)&local_18);
        FUN_14233a6f0(lVar5);
        AK::MemoryMgr::StartProfileThreadUsage((long)&local_18);
      }
    }
  }
  return;
}



// FUNCTION 142397960 FUN_142397960 body=12 status=ok
// SIG undefined FUN_142397960(void)

void FUN_142397960(longlong param_1,byte param_2)

{
  if (param_2 < 0x10) {
    *(byte *)(param_1 + 0x302) = param_2;
  }
  return;
}



// FUNCTION 142397970 FUN_142397970 body=44 status=ok
// SIG undefined FUN_142397970(void)

void FUN_142397970(longlong param_1,byte param_2)

{
  if ((*(byte *)(param_1 + 0x2f0) >> 6 & 1) != param_2) {
    *(byte *)(param_1 + 0x2f0) = *(byte *)(param_1 + 0x2f0) & 0xbf | param_2 << 6;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 1423979a0 FUN_1423979a0 body=44 status=ok
// SIG undefined FUN_1423979a0(void)

void FUN_1423979a0(longlong param_1,byte param_2)

{
  if ((*(byte *)(param_1 + 0x2f0) >> 5 & 1) != param_2) {
    *(byte *)(param_1 + 0x2f0) = *(byte *)(param_1 + 0x2f0) & 0xdf | param_2 << 5;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 1423979d0 FUN_1423979d0 body=373 status=ok
// SIG undefined FUN_1423979d0(void)

void FUN_1423979d0(longlong *param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined4 local_res8;
  undefined4 local_resc;
  
  lVar3 = param_1[0x23];
  if (param_2 != lVar3) {
    if (lVar3 != 0) {
      lVar7 = FUN_1429dcb20();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        return;
      }
    }
    if (param_2 == 0) {
      if (0 < (int)param_1[0x31]) {
        iVar8 = (int)param_1[0x31];
        iVar6 = (iVar8 - (iVar8 + -1)) + -1;
        if (iVar6 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(param_1[0x30] + (longlong)(iVar8 + -1) * 8),
                     (void *)(param_1[0x30] + (longlong)iVar8 * 8),(longlong)iVar6 << 3);
          iVar8 = (int)param_1[0x31];
        }
        *(int *)(param_1 + 0x31) = iVar8 + -1;
        return;
      }
    }
    else {
      plVar1 = param_1 + 0x30;
      lVar7 = *plVar1;
      lVar3 = lVar7 + (longlong)(int)param_1[0x31] * 8;
      for (; lVar7 != lVar3; lVar7 = lVar7 + 8) {
        cVar5 = FUN_14058c1e0(lVar7,param_2);
        if (cVar5 != '\0') {
          bVar4 = false;
          goto LAB_142397a7a;
        }
      }
      bVar4 = true;
LAB_142397a7a:
      if (bVar4) {
        FWeakObjectPtr::operator=(&local_res8,param_2);
        iVar8 = (int)param_1[0x31];
        *(int *)(param_1 + 0x31) = iVar8 + 1;
        if (*(int *)((longlong)param_1 + 0x18c) < iVar8 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
        }
        puVar2 = (undefined4 *)(*plVar1 + (longlong)iVar8 * 8);
        *puVar2 = local_res8;
        puVar2[1] = local_resc;
        (**(code **)(*param_1 + 0x4c8))(param_1,param_3);
      }
    }
  }
  return;
}



// FUNCTION 142397b50 FUN_142397b50 body=39 status=ok
// SIG undefined FUN_142397b50(void)

void FUN_142397b50(longlong param_1,uint param_2,char param_3)

{
  if (param_3 != '\0') {
    *(uint *)(param_1 + 0x2e8) = *(uint *)(param_1 + 0x2e8) | param_2;
    FUN_1423424e0();
    return;
  }
  *(uint *)(param_1 + 0x2e8) = *(uint *)(param_1 + 0x2e8) & ~param_2;
  FUN_1423424e0();
  return;
}



// FUNCTION 142397b80 FUN_142397b80 body=44 status=ok
// SIG undefined FUN_142397b80(void)

void FUN_142397b80(longlong param_1,byte param_2)

{
  if (param_2 != (*(byte *)(param_1 + 0x2f0) >> 3 & 1)) {
    *(byte *)(param_1 + 0x2f0) = *(byte *)(param_1 + 0x2f0) & 0xf7 | param_2 << 3;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 142397bb0 FUN_142397bb0 body=44 status=ok
// SIG undefined FUN_142397bb0(void)

void FUN_142397bb0(longlong param_1,byte param_2)

{
  if ((*(byte *)(param_1 + 0x2f0) >> 4 & 1) != param_2) {
    *(byte *)(param_1 + 0x2f0) = *(byte *)(param_1 + 0x2f0) & 0xef | param_2 << 4;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 142397be0 FUN_142397be0 body=1732 status=ok
// SIG undefined FUN_142397be0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142397be0(longlong *param_1,undefined1 (*param_2) [12],float *param_3,undefined1 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  float *pfVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
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
  undefined1 auStack_1b8 [32];
  longlong local_198;
  undefined4 local_190;
  undefined1 local_188;
  undefined4 local_178;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined1 local_158 [8];
  undefined8 uStack_150;
  undefined1 local_148 [8];
  undefined8 uStack_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float local_124;
  float local_120;
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
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  if ((*(byte *)((longlong)param_1 + 0x24c) & 1) == 0) {
    FUN_140942fb0(param_1,0,0);
  }
  fVar30 = DAT_1464aa790;
  fVar28 = DAT_1464aa788._4_4_;
  fVar26 = (float)DAT_1464aa788;
  local_120 = *(float *)(*param_2 + 8);
  local_124 = *(float *)(*param_2 + 4);
  local_128 = *(float *)*param_2;
  fVar9 = *param_3;
  fVar17 = param_3[1];
  fVar14 = param_3[2];
  fVar19 = param_3[3];
  plVar5 = (longlong *)param_1[0x32];
  local_198 = param_1[0x33];
  local_148._4_4_ = DAT_1464aa788._4_4_;
  local_148._0_4_ = (float)DAT_1464aa788;
  uStack_140._0_4_ = DAT_1464aa790;
  uStack_140._4_4_ = 0;
  uStack_150._4_4_ = 0;
  _local_158 = *param_2;
  local_168 = fVar9;
  fStack_164 = fVar17;
  fStack_160 = fVar14;
  fStack_15c = fVar19;
  if (plVar5 != (longlong *)0x0) {
    if ((*(byte *)((longlong)param_1 + 0x24c) & 0x1c) == 0) {
      pfVar3 = (float *)(**(code **)(*plVar5 + 0x420))(plVar5,&local_108,local_198,0);
      fVar36 = fRam0000000146af0838;
      fVar23 = fRam0000000146af0834;
      fVar21 = _DAT_146af0830;
      auVar6._4_4_ = fVar28;
      auVar6._0_4_ = fVar26;
      auVar6._8_4_ = fVar30;
      auVar6._12_4_ = 0;
      auVar11 = *(undefined1 (*) [16])(pfVar3 + 8);
      fVar31 = auVar11._0_4_;
      fVar43 = auVar11._4_4_;
      fVar44 = auVar11._8_4_;
      fVar8 = *pfVar3;
      fVar16 = pfVar3[1];
      fVar13 = pfVar3[2];
      fVar18 = pfVar3[3];
      auVar6 = minps(auVar6,auVar11);
      auVar7._4_4_ = -(uint)(auVar6._4_4_ < fRam0000000146af09c4);
      auVar7._0_4_ = -(uint)(auVar6._0_4_ < _DAT_146af09c0);
      auVar7._8_4_ = -(uint)(auVar6._8_4_ < fRam0000000146af09c8);
      auVar7._12_4_ = -(uint)(auVar6._12_4_ < fRam0000000146af09cc);
      iVar4 = movmskps((int)plVar5,auVar7);
      if (iVar4 == 0) {
        fVar31 = fVar31 * local_128;
        fVar43 = fVar43 * local_124;
        fVar44 = fVar44 * local_120;
        fVar36 = fVar17 * fVar8;
        fVar37 = fVar9 * fVar8;
        fVar26 = fVar9 * fVar16;
        fVar28 = fVar17 * fVar16;
        fVar41 = fVar9 * fVar13;
        fVar42 = fVar14 * fVar13;
        fVar30 = fVar44 * fVar16 - fVar43 * fVar13;
        fVar21 = fVar31 * fVar13 - fVar44 * fVar8;
        fVar23 = fVar43 * fVar8 - fVar31 * fVar16;
        fVar30 = fVar30 + fVar30;
        fVar21 = fVar21 + fVar21;
        fVar23 = fVar23 + fVar23;
        local_128 = (fVar23 * fVar16 - fVar21 * fVar13) + fVar30 * fVar18 + fVar31 + pfVar3[4];
        local_124 = (fVar30 * fVar13 - fVar23 * fVar8) + fVar21 * fVar18 + fVar43 + pfVar3[5];
        local_120 = (fVar21 * fVar8 - fVar30 * fVar16) + fVar23 * fVar18 + fVar44 + pfVar3[6];
        fVar9 = fVar19 * fVar8 * _DAT_146af08d0 + fVar9 * fVar18 + fVar14 * fVar16 * _DAT_146af08c0
                + fVar17 * fVar13 * _DAT_146af08b0;
        fVar17 = fVar14 * fVar8 * fRam0000000146af08d4 + fVar17 * fVar18 +
                 fVar19 * fVar16 * fRam0000000146af08c4 + fVar41 * fRam0000000146af08b4;
        fVar14 = fVar36 * fRam0000000146af08d8 + fVar14 * fVar18 + fVar26 * fRam0000000146af08c8 +
                 fVar19 * fVar13 * fRam0000000146af08b8;
        fVar19 = fVar37 * fRam0000000146af08dc + fVar19 * fVar18 + fVar28 * fRam0000000146af08cc +
                 fVar42 * fRam0000000146af08bc;
      }
      else {
        fVar12 = fVar16 + fVar16;
        fVar15 = fVar13 + fVar13;
        fVar37 = pfVar3[4];
        fVar41 = pfVar3[5];
        fVar42 = pfVar3[6];
        fVar24 = fVar8 * (fVar8 + fVar8);
        fVar32 = fVar18 * (fVar8 + fVar8);
        fVar25 = fVar43 * (fVar8 * fVar12 - fVar18 * fVar15);
        fVar27 = fVar44 * (fVar16 * fVar15 - fVar32);
        fVar29 = fVar31 * (fVar8 * fVar15 - fVar18 * fVar12);
        fVar20 = fVar17 + fVar17;
        fVar22 = fVar14 + fVar14;
        fVar38 = (fVar18 * fVar15 + fVar8 * fVar12) * fVar31;
        fVar39 = (fVar32 + fVar16 * fVar15) * fVar43;
        fVar40 = (fVar18 * fVar12 + fVar8 * fVar15) * fVar44;
        fVar8 = (float)((uint)((_DAT_146af0830 - (fVar13 * fVar15 + fVar16 * fVar12)) * fVar31) &
                       _DAT_146af0840);
        fVar13 = (float)((uint)((fRam0000000146af0834 - (fVar13 * fVar15 + fVar24)) * fVar43) &
                        uRam0000000146af0844);
        fVar16 = (float)((uint)((fRam0000000146af0838 - (fVar16 * fVar12 + fVar24)) * fVar44) &
                        uRam0000000146af0848);
        fVar18 = (float)((uint)((fRam0000000146af083c - (fVar24 + fVar24)) * auVar11._12_4_) &
                        uRam0000000146af084c);
        fVar15 = fVar9 * (fVar9 + fVar9);
        fVar12 = (fVar9 + fVar9) * fVar19;
        fVar33 = (fVar22 * fVar19 + fVar20 * fVar9) * fVar26;
        fVar34 = (fVar12 + fVar22 * fVar17) * fVar28;
        fVar35 = (fVar20 * fVar19 + fVar22 * fVar9) * fVar30;
        fVar24 = fVar28 * (fVar20 * fVar9 - fVar22 * fVar19);
        fVar12 = fVar30 * (fVar22 * fVar17 - fVar12);
        fVar32 = fVar26 * (fVar22 * fVar9 - fVar20 * fVar19);
        fVar9 = (float)((uint)((_DAT_146af0830 - (fVar14 * fVar22 + fVar17 * fVar20)) * fVar26) &
                       _DAT_146af0840);
        fVar14 = (float)((uint)((fRam0000000146af0834 - (fVar14 * fVar22 + fVar15)) * fVar28) &
                        uRam0000000146af0844);
        fVar17 = (float)((uint)((fRam0000000146af0838 - (fVar17 * fVar20 + fVar15)) * fVar30) &
                        uRam0000000146af0848);
        fVar19 = (float)((uint)((fRam0000000146af083c - (fVar15 + fVar15)) * 0.0) &
                        uRam0000000146af084c);
        local_168 = fVar33 * fVar25 + fVar9 * fVar8 + fVar32 * fVar40 + fVar19 * fVar37;
        fStack_164 = fVar33 * fVar13 + fVar9 * fVar38 + fVar32 * fVar27 + fVar19 * fVar41;
        fStack_160 = fVar33 * fVar39 + fVar9 * fVar29 + fVar32 * fVar16 + fVar19 * fVar42;
        fStack_15c = fVar33 * fVar18 + fVar9 * fVar18 + fVar32 * fVar18 +
                     fVar19 * fRam0000000146af083c;
        local_158._4_4_ = fVar14 * fVar13 + fVar24 * fVar38 + fVar34 * fVar27 + fVar19 * fVar41;
        local_158._0_4_ = fVar14 * fVar25 + fVar24 * fVar8 + fVar34 * fVar40 + fVar19 * fVar37;
        uStack_150._0_4_ = fVar14 * fVar39 + fVar24 * fVar29 + fVar34 * fVar16 + fVar19 * fVar42;
        uStack_150._4_4_ =
             fVar14 * fVar18 + fVar24 * fVar18 + fVar34 * fVar18 + fVar19 * fRam0000000146af083c;
        local_148._4_4_ = fVar12 * fVar13 + fVar35 * fVar38 + fVar17 * fVar27 + fVar19 * fVar41;
        local_148._0_4_ = fVar12 * fVar25 + fVar35 * fVar8 + fVar17 * fVar40 + fVar19 * fVar37;
        uStack_140._0_4_ = fVar12 * fVar39 + fVar35 * fVar29 + fVar17 * fVar16 + fVar19 * fVar42;
        uStack_140._4_4_ =
             fVar12 * fVar18 + fVar35 * fVar18 + fVar17 * fVar18 + fVar19 * fRam0000000146af083c;
        local_138 = local_124 * fVar25 + local_128 * fVar8 + local_120 * fVar40 +
                    fRam0000000146af083c * fVar37;
        fStack_134 = local_124 * fVar13 + local_128 * fVar38 + local_120 * fVar27 +
                     fRam0000000146af083c * fVar41;
        fStack_130 = local_124 * fVar39 + local_128 * fVar29 + local_120 * fVar16 +
                     fRam0000000146af083c * fVar42;
        fStack_12c = local_124 * fVar18 + local_128 * fVar18 + local_120 * fVar18 +
                     fRam0000000146af083c * fRam0000000146af083c;
        FMatrix::RemoveScaling(&local_168);
        auVar6 = _local_148;
        auVar11 = _local_158;
        fVar9 = (float)(-(uint)(_DAT_146af09c0 <= fVar31 * fVar26) & (_DAT_146af09b0 ^ (uint)fVar21)
                       ^ _DAT_146af09b0);
        fVar17 = (float)(-(uint)(fRam0000000146af09c4 <= fVar43 * fVar28) &
                         (uRam0000000146af09b4 ^ (uint)fVar23) ^ uRam0000000146af09b4);
        fVar19 = (float)(-(uint)(fRam0000000146af09c8 <= fVar44 * fVar30) &
                         (uRam0000000146af09b8 ^ (uint)fVar36) ^ uRam0000000146af09b8);
        local_168 = local_168 * fVar9;
        fStack_164 = fStack_164 * fVar9;
        fStack_160 = fStack_160 * fVar9;
        fVar9 = (float)uStack_150 * fVar17;
        fVar14 = (float)local_158._0_4_ * fVar17;
        auVar1._4_8_ = uStack_150;
        auVar1._0_4_ = (float)local_158._4_4_ * fVar17;
        local_158 = (undefined1  [8])(auVar1._0_8_ << 0x20);
        uStack_150._4_4_ = auVar11._12_4_;
        uStack_150._0_4_ = fVar9;
        fVar9 = (float)uStack_140 * fVar19;
        fVar17 = (float)local_148._0_4_ * fVar19;
        auVar2._4_8_ = uStack_140;
        auVar2._0_4_ = (float)local_148._4_4_ * fVar19;
        local_148 = (undefined1  [8])(auVar2._0_8_ << 0x20);
        uStack_140._4_4_ = auVar6._12_4_;
        uStack_140._0_4_ = fVar9;
        local_158._0_4_ = fVar14;
        local_148._0_4_ = fVar17;
        FQuat::FQuat(&local_118,&local_168);
        local_178 = 0x322bcc77;
        auVar10._0_4_ = local_118 * local_118 + fStack_110 * fStack_110;
        auVar10._4_4_ = fStack_114 * fStack_114 + fStack_10c * fStack_10c;
        auVar10._8_4_ = fStack_110 * fStack_110 + local_118 * local_118;
        auVar10._12_4_ = fStack_10c * fStack_10c + fStack_114 * fStack_114;
        fVar26 = auVar10._4_4_ + auVar10._0_4_;
        fVar28 = auVar10._8_4_ + auVar10._4_4_;
        fVar30 = auVar10._12_4_ + auVar10._8_4_;
        fVar31 = auVar10._0_4_ + auVar10._12_4_;
        auVar11._4_4_ = fVar28;
        auVar11._0_4_ = fVar26;
        auVar11._8_4_ = fVar30;
        auVar11._12_4_ = fVar31;
        auVar11 = rsqrtps(auVar10,auVar11);
        fVar9 = auVar11._0_4_;
        fVar17 = auVar11._4_4_;
        fVar14 = auVar11._8_4_;
        fVar19 = auVar11._12_4_;
        fVar9 = (_DAT_146af09a0 - fVar9 * fVar9 * fVar26 * _DAT_146af09a0) * fVar9 + fVar9;
        fVar17 = (fRam0000000146af09a4 - fVar17 * fVar17 * fVar28 * fRam0000000146af09a4) * fVar17 +
                 fVar17;
        fVar14 = (fRam0000000146af09a8 - fVar14 * fVar14 * fVar30 * fRam0000000146af09a8) * fVar14 +
                 fVar14;
        fVar19 = (fRam0000000146af09ac - fVar19 * fVar19 * fVar31 * fRam0000000146af09ac) * fVar19 +
                 fVar19;
        fVar9 = (float)(((uint)(((_DAT_146af09a0 - fVar9 * fVar9 * fVar26 * _DAT_146af09a0) * fVar9
                                + fVar9) * local_118) ^ _DAT_146af0990) & -(uint)(1e-08 <= fVar26) ^
                       _DAT_146af0990);
        fVar17 = (float)(((uint)(((fRam0000000146af09a4 -
                                  fVar17 * fVar17 * fVar28 * fRam0000000146af09a4) * fVar17 + fVar17
                                 ) * fStack_114) ^ uRam0000000146af0994) & -(uint)(1e-08 <= fVar28)
                        ^ uRam0000000146af0994);
        fVar14 = (float)(((uint)(((fRam0000000146af09a8 -
                                  fVar14 * fVar14 * fVar30 * fRam0000000146af09a8) * fVar14 + fVar14
                                 ) * fStack_110) ^ uRam0000000146af0998) & -(uint)(1e-08 <= fVar30)
                        ^ uRam0000000146af0998);
        fVar19 = (float)(((uint)(((fRam0000000146af09ac -
                                  fVar19 * fVar19 * fVar31 * fRam0000000146af09ac) * fVar19 + fVar19
                                 ) * fStack_10c) ^ uRam0000000146af099c) & -(uint)(1e-08 <= fVar31)
                        ^ uRam0000000146af099c);
        local_128 = local_138;
        local_124 = fStack_134;
        local_120 = fStack_130;
      }
    }
    else {
      FUN_142385450(param_1,&local_108,&local_168,plVar5);
      fVar9 = local_108;
      fVar17 = fStack_104;
      fVar14 = fStack_100;
      fVar19 = fStack_fc;
      local_128 = local_f8;
      local_124 = fStack_f4;
      local_120 = fStack_f0;
    }
  }
  local_128 = local_128 - *(float *)(param_1 + 0x44);
  local_124 = local_124 - *(float *)((longlong)param_1 + 0x224);
  local_120 = local_120 - *(float *)(param_1 + 0x45);
  local_188 = param_6;
  local_190 = 0;
  local_198 = param_5;
  local_118 = fVar9;
  fStack_114 = fVar17;
  fStack_110 = fVar14;
  fStack_10c = fVar19;
  (**(code **)(*param_1 + 0x490))(param_1,&local_128,&local_118,param_4);
  return;
}



// FUNCTION 1423982b0 FUN_1423982b0 body=442 status=ok
// SIG undefined FUN_1423982b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423982b0(longlong param_1,float *param_2,float *param_3,undefined1 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined8 in_RAX;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_28;
  float local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (((*(float *)(param_1 + 0x1ec) == *param_2) && (*(float *)(param_1 + 0x1f0) == param_2[1])) &&
     (*(float *)(param_1 + 500) == param_2[2])) {
    iVar5 = (int)((ulonglong)in_RAX >> 8) << 8;
  }
  else {
    iVar5 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
  if ((char)iVar5 == '\0') {
    fVar9 = *param_3 - *(float *)(param_1 + 0x1f8);
    fVar10 = param_3[1] - *(float *)(param_1 + 0x1fc);
    fVar11 = param_3[2] - *(float *)(param_1 + 0x200);
    fVar1 = (float)DAT_146af0860;
    fVar2 = DAT_146af0860._4_4_;
    fVar3 = DAT_146af0860._8_4_;
    fVar4 = DAT_146af0860._12_4_;
    auVar7._4_4_ = fVar10;
    auVar7._0_4_ = fVar9;
    auVar7._8_4_ = fVar11;
    auVar7._12_4_ = 0;
    auVar7 = divps(auVar7,_DAT_146af0860);
    fVar9 = fVar9 - (float)(int)auVar7._0_4_ * fVar1;
    fVar10 = fVar10 - (float)(int)auVar7._4_4_ * fVar2;
    fVar11 = fVar11 - (float)(int)auVar7._8_4_ * fVar3;
    fVar12 = 0.0 - (float)(int)auVar7._12_4_ * fVar4;
    fVar9 = (float)(((uint)(fVar9 + fVar1) ^ (uint)fVar9) & -(uint)(0.0 <= fVar9) ^
                   (uint)(fVar9 + fVar1));
    fVar10 = (float)(((uint)(fVar10 + fVar2) ^ (uint)fVar10) & -(uint)(0.0 <= fVar10) ^
                    (uint)(fVar10 + fVar2));
    fVar11 = (float)(((uint)(fVar11 + fVar3) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                    (uint)(fVar11 + fVar3));
    fVar12 = (float)(((uint)(fVar12 + fVar4) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                    (uint)(fVar12 + fVar4));
    auVar8._4_4_ = -(uint)(0.0001 < (float)((((uint)(fVar10 - fVar2) ^ (uint)fVar10) &
                                             -(uint)(fRam0000000146af0854 < fVar10) ^ (uint)fVar10)
                                           & uRam0000000146af07d4));
    auVar8._0_4_ = -(uint)(0.0001 < (float)((((uint)(fVar9 - fVar1) ^ (uint)fVar9) &
                                             -(uint)(_DAT_146af0850 < fVar9) ^ (uint)fVar9) &
                                           _DAT_146af07d0));
    auVar8._8_4_ = -(uint)(0.0001 < (float)((((uint)(fVar11 - fVar3) ^ (uint)fVar11) &
                                             -(uint)(fRam0000000146af0858 < fVar11) ^ (uint)fVar11)
                                           & uRam0000000146af07d8));
    auVar8._12_4_ =
         -(uint)(0.0001 < (float)((((uint)(fVar12 - fVar4) ^ (uint)fVar12) &
                                   -(uint)(fRam0000000146af085c < fVar12) ^ (uint)fVar12) &
                                 uRam0000000146af07dc));
    iVar5 = movmskps(iVar5,auVar8);
    if (iVar5 == 0) {
      return;
    }
    local_28 = *(undefined8 *)param_2;
    local_20 = param_2[2];
    puVar6 = (undefined8 *)FRotator::Quaternion(param_3,&local_18);
  }
  else {
    local_20 = param_2[2];
    local_28 = *(undefined8 *)param_2;
    if (((*param_3 == *(float *)(param_1 + 0x280)) && (param_3[1] == *(float *)(param_1 + 0x284)))
       && (param_3[2] == *(float *)(param_1 + 0x288))) {
      local_18 = *(undefined8 *)(param_1 + 0x270);
      uStack_10 = *(undefined8 *)(param_1 + 0x278);
      puVar6 = &local_18;
    }
    else {
      FRotator::Quaternion(param_3,&local_18);
      puVar6 = &local_18;
    }
  }
  FUN_142397be0(param_1,&local_28,puVar6,param_4,param_5,param_6);
  return;
}



// FUNCTION 142398470 FUN_142398470 body=299 status=ok
// SIG undefined FUN_142398470(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142398470(longlong param_1,float *param_2,undefined1 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 in_EAX;
  int iVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  fVar9 = *param_2 - *(float *)(param_1 + 0x1f8);
  fVar10 = param_2[1] - *(float *)(param_1 + 0x1fc);
  fVar11 = param_2[2] - *(float *)(param_1 + 0x200);
  fVar1 = (float)DAT_146af0860;
  fVar2 = DAT_146af0860._4_4_;
  fVar3 = DAT_146af0860._8_4_;
  fVar4 = DAT_146af0860._12_4_;
  auVar7._4_4_ = fVar10;
  auVar7._0_4_ = fVar9;
  auVar7._8_4_ = fVar11;
  auVar7._12_4_ = 0;
  auVar7 = divps(auVar7,_DAT_146af0860);
  fVar9 = fVar9 - (float)(int)auVar7._0_4_ * fVar1;
  fVar10 = fVar10 - (float)(int)auVar7._4_4_ * fVar2;
  fVar11 = fVar11 - (float)(int)auVar7._8_4_ * fVar3;
  fVar12 = 0.0 - (float)(int)auVar7._12_4_ * fVar4;
  fVar9 = (float)(((uint)(fVar1 + fVar9) ^ (uint)fVar9) & -(uint)(0.0 <= fVar9) ^
                 (uint)(fVar1 + fVar9));
  fVar10 = (float)(((uint)(fVar2 + fVar10) ^ (uint)fVar10) & -(uint)(0.0 <= fVar10) ^
                  (uint)(fVar2 + fVar10));
  fVar11 = (float)(((uint)(fVar3 + fVar11) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                  (uint)(fVar3 + fVar11));
  fVar12 = (float)(((uint)(fVar4 + fVar12) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                  (uint)(fVar4 + fVar12));
  auVar8._4_4_ = -(uint)(0.0001 < (float)((((uint)(fVar10 - fVar2) ^ (uint)fVar10) &
                                           -(uint)(fRam0000000146af0854 < fVar10) ^ (uint)fVar10) &
                                         uRam0000000146af07d4));
  auVar8._0_4_ = -(uint)(0.0001 < (float)((((uint)(fVar9 - fVar1) ^ (uint)fVar9) &
                                           -(uint)(_DAT_146af0850 < fVar9) ^ (uint)fVar9) &
                                         _DAT_146af07d0));
  auVar8._8_4_ = -(uint)(0.0001 < (float)((((uint)(fVar11 - fVar3) ^ (uint)fVar11) &
                                           -(uint)(fRam0000000146af0858 < fVar11) ^ (uint)fVar11) &
                                         uRam0000000146af07d8));
  auVar8._12_4_ =
       -(uint)(0.0001 < (float)((((uint)(fVar12 - fVar4) ^ (uint)fVar12) &
                                 -(uint)(fRam0000000146af085c < fVar12) ^ (uint)fVar12) &
                               uRam0000000146af07dc));
  iVar5 = movmskps(in_EAX,auVar8);
  if (iVar5 != 0) {
    local_28 = *(undefined8 *)(param_1 + 0x1ec);
    local_20 = *(undefined4 *)(param_1 + 500);
    uVar6 = FRotator::Quaternion(param_2,local_18);
    FUN_142397be0(param_1,&local_28,uVar6,param_3,param_4,param_5);
  }
  return;
}



// FUNCTION 1423985a0 FUN_1423985a0 body=140 status=ok
// SIG undefined FUN_1423985a0(void)

void FUN_1423985a0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  float fStack_24;
  float fStack_18;
  
  fStack_24 = (float)*(undefined8 *)(param_1 + 0x280);
  if (((fStack_24 != (float)param_2[2]) ||
      (fStack_24 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x280) >> 0x20),
      fStack_18 = (float)((ulonglong)param_2[2] >> 0x20), fStack_24 != fStack_18)) ||
     (fStack_24 = *(float *)(param_1 + 0x288),
     *(float *)(param_1 + 0x288) != *(float *)(param_2 + 3))) {
    if ((*(byte *)(param_1 + 0x24c) & 1) == 0) {
      FUN_140942fb0(fStack_24,0,0);
    }
    uVar1 = param_2[1];
    *(undefined8 *)(param_1 + 0x270) = *param_2;
    *(undefined8 *)(param_1 + 0x278) = uVar1;
    uVar1 = param_2[3];
    *(undefined8 *)(param_1 + 0x280) = param_2[2];
    *(undefined8 *)(param_1 + 0x288) = uVar1;
  }
  return;
}



// FUNCTION 142398630 FUN_142398630 body=307 status=ok
// SIG undefined FUN_142398630(void)

void FUN_142398630(longlong *param_1,float *param_2)

{
  float fVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (((*param_2 == *(float *)((longlong)param_1 + 0x204)) &&
      (*(float *)(param_1 + 0x41) == param_2[1])) &&
     (*(float *)((longlong)param_1 + 0x20c) == param_2[2])) {
    return;
  }
  iVar4 = _finite((double)*param_2);
  if (((iVar4 == 0) || (iVar4 = _finite((double)param_2[1]), iVar4 == 0)) ||
     (iVar4 = _finite((double)param_2[2]), iVar4 == 0)) {
    param_2[0] = 1.0;
    param_2[1] = 1.0;
    param_2[2] = 1.0;
  }
  fVar1 = param_2[2];
  *(undefined8 *)((longlong)param_1 + 0x204) = *(undefined8 *)param_2;
  *(float *)((longlong)param_1 + 0x20c) = fVar1;
  FUN_142387230(param_1);
  FUN_140942fb0(param_1,0,0);
  if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
    if ((int)param_1[0x55] < 1) {
                    /* WARNING: Could not recover jumptable at 0x000142398713. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x488))(param_1,0,1,0);
      return;
    }
    lVar2 = *(longlong *)(param_1[0x54] + -8 + (longlong)(int)param_1[0x55] * 8);
    iVar4 = *(int *)(lVar2 + 0x10);
    *(byte *)(lVar2 + 0x1b8) = *(byte *)(lVar2 + 0x1b8) | 2;
    *(undefined4 *)(lVar2 + 0x10) = 1;
    uVar3 = *(undefined4 *)(lVar2 + 0x10);
    if (iVar4 == 3) {
      uVar3 = 3;
    }
    *(undefined4 *)(lVar2 + 0x74) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x10) = uVar3;
  }
  return;
}



// FUNCTION 142398770 FUN_142398770 body=176 status=ok
// SIG undefined FUN_142398770(void)

void FUN_142398770(longlong *param_1,undefined4 *param_2,undefined1 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = param_2[4];
  uStack_24 = param_2[5];
  local_20 = param_2[6];
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_142397be0(local_18,&local_28,&local_18,param_3,param_4,param_5);
  local_28 = param_2[8];
  uStack_24 = param_2[9];
  local_20 = param_2[10];
  uStack_10 = local_20;
  (**(code **)(*param_1 + 0x3f8))(param_1,&local_28);
  return;
}



// FUNCTION 142398820 FUN_142398820 body=67 status=ok
// SIG undefined FUN_142398820(void)

void FUN_142398820(longlong param_1,byte param_2)

{
  if (*(byte *)(param_1 + 0x2f8) >> 7 == param_2) {
    return;
  }
  *(byte *)(param_1 + 0x2f8) = *(byte *)(param_1 + 0x2f8) & 0x7f | param_2 << 7;
  if (*(longlong *)(param_1 + 0x640) != 0) {
    FUN_14273c2a0(*(longlong *)(param_1 + 0x640),param_2 & 1);
    return;
  }
  FUN_1423424e0();
  return;
}



// FUNCTION 142398870 SetRenderInMainPass body=42 status=ok
// SIG undefined SetRenderInMainPass(void)

void USkyAtmosphereComponent::SetRenderInMainPass(longlong param_1,byte param_2)

{
  if ((*(byte *)(param_1 + 0x2f0) >> 1 & 1) != param_2) {
    *(byte *)(param_1 + 0x2f0) = *(byte *)(param_1 + 0x2f0) & 0xfd | param_2 * '\x02';
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 1423988a0 SetExcludeFromLightAttachmentGroup body=44 status=ok
// SIG undefined SetExcludeFromLightAttachmentGroup(void)

void UPrimitiveComponent::SetExcludeFromLightAttachmentGroup(longlong param_1,byte param_2)

{
  if ((*(byte *)(param_1 + 0x2f0) >> 2 & 1) != param_2) {
    *(byte *)(param_1 + 0x2f0) = *(byte *)(param_1 + 0x2f0) & 0xfb | param_2 << 2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 1423988d0 FUN_1423988d0 body=40 status=ok
// SIG undefined FUN_1423988d0(void)

void FUN_1423988d0(longlong param_1,int param_2)

{
  if (param_2 == *(int *)(param_1 + 0x39c)) {
    return;
  }
  *(int *)(param_1 + 0x39c) = param_2;
  if (*(longlong *)(param_1 + 0x640) != 0) {
    FUN_14273cd90(*(longlong *)(param_1 + 0x640));
    return;
  }
  FUN_1423424e0();
  return;
}



// FUNCTION 142398900 FUN_142398900 body=94 status=ok
// SIG undefined FUN_142398900(void)

void FUN_142398900(longlong param_1,char param_2)

{
  if (((param_2 != '\0') && (DAT_146531d70 == 1)) && ((*(byte *)(param_1 + 0x24c) & 2) != 0)) {
    *(byte *)(param_1 + 0x24c) = *(byte *)(param_1 + 0x24c) & 0xfd;
    if (*(longlong *)(param_1 + 400) != 0) {
      FUN_142386620();
    }
  }
  *(byte *)(param_1 + 0x24c) = *(byte *)(param_1 + 0x24c) & 0x7f;
  *(byte *)(param_1 + 0x24c) = *(byte *)(param_1 + 0x24c) | param_2 << 7;
  return;
}



// FUNCTION 142398960 FUN_142398960 body=44 status=ok
// SIG undefined FUN_142398960(void)

void FUN_142398960(longlong param_1,byte param_2)

{
  if (param_2 != (*(byte *)(param_1 + 0x2f3) >> 3 & 1)) {
    *(byte *)(param_1 + 0x2f3) = *(byte *)(param_1 + 0x2f3) & 0xf7 | param_2 << 3;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 142398990 FUN_142398990 body=79 status=ok
// SIG undefined FUN_142398990(void)

void FUN_142398990(longlong param_1,float param_2)

{
  char cVar1;
  
  cVar1 = FUN_142341170();
  if ((((cVar1 != '\0') || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) ||
      (*(char *)(param_1 + 0x24e) != '\0')) && (param_2 != *(float *)(param_1 + 0x450))) {
    *(float *)(param_1 + 0x450) = param_2;
    FUN_1423424e0(param_1);
  }
  return;
}



// FUNCTION 1423989e0 SetTransform body=921 status=ok
// SIG undefined SetTransform(void)

void FReflectionCaptureProxy::SetTransform(longlong param_1,float *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_c8;
  float fStack_c4;
  float local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  float fStack_ac;
  undefined1 local_a8 [160];
  
  fVar8 = param_2[0xd];
  fVar10 = param_2[0xe];
  fVar5 = param_2[0xc];
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0xc);
  *(float *)(param_1 + 0x28) = fVar10;
  local_c0 = fVar10;
  puVar2 = (undefined8 *)FMatrix::Inverse(param_2,local_a8);
  uVar1 = puVar2[1];
  *(undefined8 *)(param_1 + 0x50) = *puVar2;
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  uVar1 = puVar2[3];
  *(undefined8 *)(param_1 + 0x60) = puVar2[2];
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  uVar1 = puVar2[5];
  *(undefined8 *)(param_1 + 0x70) = puVar2[4];
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  uVar1 = puVar2[7];
  *(undefined8 *)(param_1 + 0x80) = puVar2[6];
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  fVar9 = param_2[0xc] * 0.0 + param_2[8] * 0.0 + param_2[4] * 0.0 + *param_2 * 1.0;
  fVar11 = param_2[0xd] * 0.0 + param_2[9] * 0.0 + param_2[5] * 0.0 + param_2[1] * 1.0;
  fVar12 = param_2[0xe] * 0.0 + param_2[10] * 0.0 + param_2[6] * 0.0 + param_2[2] * 1.0;
  fVar3 = fVar11 * fVar11 + fVar9 * fVar9 + fVar12 * fVar12;
  local_c0 = fVar12;
  fVar4 = fVar9;
  fVar7 = fVar11;
  if ((fVar3 != 1.0) &&
     (local_c0 = DAT_1468b5d98, fVar4 = DAT_1468b5d90, fVar7 = DAT_1468b5d94, 1e-08 <= fVar3)) {
    auVar6 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
    fVar7 = auVar6._0_4_;
    fVar7 = fVar7 + fVar7 * (0.5 - fVar3 * 0.5 * fVar7 * fVar7);
    fVar7 = fVar7 + fVar7 * (0.5 - fVar3 * 0.5 * fVar7 * fVar7);
    local_c0 = fVar12 * fVar7;
    fVar4 = fVar9 * fVar7;
    fVar7 = fVar11 * fVar7;
  }
  fStack_ac = fVar4 * fVar5 + fVar8 * fVar7 + fVar10 * local_c0;
  *(float *)(param_1 + 0xa0) = fVar4;
  *(float *)(param_1 + 0xa4) = fVar7;
  *(float *)(param_1 + 0xa8) = local_c0;
  *(float *)(param_1 + 0xac) = fStack_ac;
  local_b8 = 0;
  uStack_b0 = 0;
  fVar7 = param_2[0xc] * 0.0 + param_2[8] * 0.0 + param_2[4] * -1.0 + *param_2 * 0.0;
  fVar3 = param_2[0xd] * 0.0 + param_2[9] * 0.0 + param_2[5] * -1.0 + param_2[1] * 0.0;
  fVar9 = param_2[0xe] * 0.0 + param_2[10] * 0.0 + param_2[6] * -1.0 + param_2[2] * 0.0;
  FMatrix::GetScaleVector(param_2,&local_c8,0x322bcc77);
  *(ulonglong *)(param_1 + 0x90) = CONCAT44(fStack_c4,local_c8);
  *(float *)(param_1 + 0x98) = local_c0;
  fVar4 = fVar3 * fVar3 + fVar7 * fVar7 + fVar9 * fVar9;
  fVar8 = fVar7;
  fVar10 = fVar3;
  fVar5 = fVar9;
  if ((fVar4 != 1.0) &&
     (fVar8 = DAT_1468b5d90, fVar10 = DAT_1468b5d94, fVar5 = DAT_1468b5d98, 1e-08 <= fVar4)) {
    auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar5 = auVar6._0_4_;
    fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
    fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
    fVar8 = fVar7 * fVar5;
    fVar10 = fVar3 * fVar5;
    fVar5 = fVar9 * fVar5;
  }
  *(float *)(param_1 + 0xb0) = fVar8 * fStack_c4;
  *(float *)(param_1 + 0xb4) = fVar10 * fStack_c4;
  *(float *)(param_1 + 0xb8) = fVar5 * fStack_c4;
  *(undefined4 *)(param_1 + 0xbc) = 0x3f800000;
  *(float *)(param_1 + 0xbc) = fStack_c4 / local_c0;
  return;
}



// FUNCTION 142398d80 FUN_142398d80 body=20 status=ok
// SIG undefined FUN_142398d80(void)

void FUN_142398d80(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x34c)) {
    *(int *)(param_1 + 0x34c) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 142398da0 FUN_142398da0 body=188 status=ok
// SIG undefined FUN_142398da0(void)

void FUN_142398da0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar4 = *(longlong *)(param_1 + 0x178);
  if (lVar4 != 0) {
    fVar5 = *(float *)(lVar4 + 0x210);
    fVar6 = *(float *)(lVar4 + 0x214);
    fVar7 = *(float *)(lVar4 + 0x218);
    fVar8 = *(float *)(lVar4 + 0x21c);
    fVar1 = param_2[2];
    fVar2 = param_2[1];
    fVar3 = *param_2;
    fVar9 = fVar1 * fVar6 - fVar2 * fVar7;
    fVar10 = fVar3 * fVar7 - fVar1 * fVar5;
    fVar11 = fVar2 * fVar5 - fVar3 * fVar6;
    fVar9 = fVar9 + fVar9;
    fVar10 = fVar10 + fVar10;
    fVar11 = fVar11 + fVar11;
    *(ulonglong *)(param_1 + 0x18c) =
         CONCAT44((fVar9 * fVar7 - fVar11 * fVar5) + fVar8 * fVar10 + fVar2,
                  (fVar11 * fVar6 - fVar10 * fVar7) + fVar8 * fVar9 + fVar3);
    *(float *)(param_1 + 0x194) = (fVar10 * fVar5 - fVar9 * fVar6) + fVar8 * fVar11 + fVar1;
  }
  return;
}



// FUNCTION 142398e60 FUN_142398e60 body=52 status=ok
// SIG undefined FUN_142398e60(void)

void FUN_142398e60(longlong param_1,uint param_2,char param_3)

{
  if (param_3 == '\x01') {
    param_2 = param_2 | *(uint *)(param_1 + 0x6b8);
  }
  else if (param_3 == '\x02') {
    param_2 = *(uint *)(param_1 + 0x6b8) & ~param_2;
  }
  if (param_2 != *(uint *)(param_1 + 0x6b8)) {
    *(uint *)(param_1 + 0x6b8) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 142398ea0 FUN_142398ea0 body=22 status=ok
// SIG undefined FUN_142398ea0(void)

void FUN_142398ea0(longlong param_1,longlong param_2)

{
  if (param_2 != *(longlong *)(param_1 + 0x6b0)) {
    *(longlong *)(param_1 + 0x6b0) = param_2;
    FUN_1423424e0();
    return;
  }
  return;
}



// FUNCTION 142398ec0 FUN_142398ec0 body=496 status=ok
// SIG undefined FUN_142398ec0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142398ec0(longlong *param_1,byte param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_128 [32];
  undefined1 local_108 [192];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  bVar6 = param_3 == '\x02';
  if (param_2 != (*(byte *)((longlong)param_1 + 0x24c) >> 5 & 1)) {
    bVar6 = (byte)(param_3 - 1U) < 2;
    *(byte *)((longlong)param_1 + 0x24c) =
         *(byte *)((longlong)param_1 + 0x24c) & 0xdf | param_2 << 5;
    (**(code **)(*param_1 + 0x468))(param_1);
  }
  if (bVar6) {
    iVar5 = (int)param_1[0x35];
    if (0 < iVar5) {
      local_48 = (undefined1 *)0x0;
      local_40 = 0;
      FUN_140615c30(local_108,iVar5);
      puVar3 = local_108;
      if (local_48 != (undefined1 *)0x0) {
        puVar3 = local_48;
      }
      _guard_xfg_dispatch_icall_nop
                (puVar3 + (longlong)(int)local_40 * 8,(void *)param_1[0x34],(longlong)iVar5 << 3);
      iVar5 = (int)local_40 + iVar5;
      local_40._0_4_ = iVar5;
      puVar3 = local_48;
      while (0 < (int)local_40) {
        iVar5 = (int)local_40 + -1;
        puVar4 = local_108;
        if (puVar3 != (undefined1 *)0x0) {
          puVar4 = puVar3;
        }
        lVar1 = *(longlong *)(puVar4 + (longlong)iVar5 * 8);
        iVar2 = ((int)local_40 - iVar5) + -1;
        if (iVar2 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (puVar4 + (longlong)iVar5 * 8,puVar4 + (longlong)(int)local_40 * 8,
                     (longlong)iVar2 << 3);
          puVar3 = local_48;
        }
        local_40._0_4_ = (int)local_40 + -1;
        if (lVar1 != 0) {
          iVar5 = *(int *)(lVar1 + 0x1a8);
          if (iVar5 != 0) {
            iVar2 = iVar5 + (int)local_40;
            if (local_40._4_4_ < iVar2) {
              FUN_140615c30(local_108,iVar2);
              puVar3 = local_48;
            }
            puVar4 = local_108;
            if (puVar3 != (undefined1 *)0x0) {
              puVar4 = puVar3;
            }
            _guard_xfg_dispatch_icall_nop
                      (puVar4 + (longlong)(int)local_40 * 8,*(void **)(lVar1 + 0x1a0),
                       (longlong)iVar5 << 3);
            local_40._0_4_ = (int)local_40 + iVar5;
          }
          if (param_3 == '\x02') {
            FUN_142398ec0(lVar1,param_2,0);
          }
          FUN_1423424e0(lVar1);
          puVar3 = local_48;
        }
      }
      if (puVar3 != (undefined1 *)0x0) {
        FMemory::Free(puVar3);
      }
    }
  }
  return;
}



// FUNCTION 1423990b0 FUN_1423990b0 body=725 status=ok
// SIG undefined FUN_1423990b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423990b0(longlong param_1,float *param_2,undefined1 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  float *pfVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  float fVar12;
  float fVar14;
  float fVar15;
  undefined1 in_XMM5 [16];
  undefined1 auVar13 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  float local_b0;
  undefined1 local_a8 [16];
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  undefined1 local_78 [16];
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_b8 = *(undefined8 *)param_2;
  plVar2 = *(longlong **)(param_1 + 400);
  local_b0 = param_2[2];
  if ((plVar2 != (longlong *)0x0) && ((*(byte *)(param_1 + 0x24c) & 4) == 0)) {
    (**(code **)(*plVar2 + 0x420))(plVar2,&local_98,*(undefined8 *)(param_1 + 0x198),0);
    fVar3 = local_78._0_4_;
    fVar4 = local_78._4_4_;
    fVar5 = local_78._8_4_;
    local_98 = local_98 * _DAT_146af09e0;
    fStack_94 = fStack_94 * fRam0000000146af09e4;
    fStack_90 = fStack_90 * fRam0000000146af09e8;
    fStack_8c = fStack_8c * fRam0000000146af09ec;
    auVar13 = rcpps(in_XMM5,local_78);
    fVar16 = (float)((uint)(*param_2 - local_88) & _DAT_146af0840);
    fVar17 = (float)((uint)(param_2[1] - fStack_84) & uRam0000000146af0844);
    fVar18 = (float)((uint)(param_2[2] - fStack_80) & uRam0000000146af0848);
    fVar8 = fVar18 * fStack_94 - fVar17 * fStack_90;
    fVar9 = fVar16 * fStack_90 - fVar18 * local_98;
    fVar10 = fVar17 * local_98 - fVar16 * fStack_94;
    fVar12 = auVar13._0_4_;
    fVar14 = auVar13._4_4_;
    fVar15 = auVar13._8_4_;
    fVar8 = fVar8 + fVar8;
    fVar9 = fVar9 + fVar9;
    fVar10 = fVar10 + fVar10;
    fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar3;
    fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar4;
    fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar5;
    fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar3;
    fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar4;
    fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar5;
    local_b0 = ((fVar9 * local_98 - fVar8 * fStack_94) + fStack_8c * fVar10 + fVar18) *
               (float)(-(uint)((float)((uint)fVar5 & uRam0000000146af07d8) <= fRam0000000146af09d8)
                       & (uint)fVar15 ^ (uint)fVar15);
    local_b8 = CONCAT44(((fVar8 * fStack_90 - fVar10 * local_98) + fStack_8c * fVar9 + fVar17) *
                        (float)(-(uint)((float)((uint)fVar4 & uRam0000000146af07d4) <=
                                       fRam0000000146af09d4) & (uint)fVar14 ^ (uint)fVar14),
                        ((fVar10 * fStack_94 - fVar9 * fStack_90) + fStack_8c * fVar8 + fVar16) *
                        (float)(-(uint)((float)((uint)fVar3 & _DAT_146af07d0) <= _DAT_146af09d0) &
                                (uint)fVar12 ^ (uint)fVar12));
  }
  pfVar1 = (float *)(param_1 + 0x280);
  if (((*(float *)(param_1 + 0x1f8) != *pfVar1) ||
      (*(float *)(param_1 + 0x1fc) != *(float *)(param_1 + 0x284))) ||
     (*(float *)(param_1 + 0x200) != *(float *)(param_1 + 0x288))) {
    local_c8 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 0x1f8);
    auVar13._12_4_ = 0;
    auVar13._0_12_ = *(undefined1 (*) [12])(param_1 + 0x1f8);
    fVar3 = (float)DAT_146af0860;
    fVar4 = DAT_146af0860._4_4_;
    fVar5 = DAT_146af0860._8_4_;
    auVar13 = divps(auVar13,_DAT_146af0860);
    fVar8 = (float)local_c8 - (float)(int)auVar13._0_4_ * fVar3;
    fVar9 = (float)((ulonglong)local_c8 >> 0x20) - (float)(int)auVar13._4_4_ * fVar4;
    fVar10 = *(float *)(param_1 + 0x200) - (float)(int)auVar13._8_4_ * fVar5;
    fVar8 = (float)(((uint)(fVar8 + fVar3) ^ (uint)fVar8) & -(uint)(0.0 <= fVar8) ^
                   (uint)(fVar8 + fVar3));
    fVar9 = (float)(((uint)(fVar9 + fVar4) ^ (uint)fVar9) & -(uint)(0.0 <= fVar9) ^
                   (uint)(fVar9 + fVar4));
    fVar10 = (float)(((uint)(fVar10 + fVar5) ^ (uint)fVar10) & -(uint)(0.0 <= fVar10) ^
                    (uint)(fVar10 + fVar5));
    uVar11 = ((uint)(fVar10 - fVar5) ^ (uint)fVar10) & -(uint)(fRam0000000146af0858 < fVar10) ^
             (uint)fVar10;
    uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar11);
    *(ulonglong *)pfVar1 =
         CONCAT44(((uint)(fVar9 - fVar4) ^ (uint)fVar9) & -(uint)(fRam0000000146af0854 < fVar9) ^
                  (uint)fVar9,
                  ((uint)(fVar8 - fVar3) ^ (uint)fVar8) & -(uint)(_DAT_146af0850 < fVar8) ^
                  (uint)fVar8);
    *(uint *)(param_1 + 0x288) = uVar11;
    puVar7 = (undefined8 *)FRotator::Quaternion(pfVar1,local_a8);
    uVar6 = puVar7[1];
    *(undefined8 *)(param_1 + 0x270) = *puVar7;
    *(undefined8 *)(param_1 + 0x278) = uVar6;
  }
  local_c8 = *(undefined8 *)(param_1 + 0x270);
  uStack_c0 = *(undefined8 *)(param_1 + 0x278);
  local_d0 = param_5;
  local_d8 = param_4;
  FUN_142397be0(param_1,&local_b8,&local_c8,param_3);
  return;
}



// FUNCTION 142399390 FUN_142399390 body=738 status=ok
// SIG undefined FUN_142399390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142399390(longlong param_1,float *param_2,float *param_3,undefined1 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  byte bVar1;
  longlong *plVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 in_XMM5 [16];
  undefined1 auVar10 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
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
  float local_98;
  float fStack_94;
  float fStack_90;
  undefined1 local_88 [16];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_b8 = *param_3;
  fStack_b4 = param_3[1];
  fStack_b0 = param_3[2];
  fStack_ac = param_3[3];
  plVar2 = *(longlong **)(param_1 + 400);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x420))(plVar2,&local_a8,*(undefined8 *)(param_1 + 0x198),0);
    bVar1 = *(byte *)(param_1 + 0x24c);
    if ((bVar1 & 4) == 0) {
      fVar4 = local_88._0_4_;
      fVar5 = local_88._4_4_;
      fVar13 = local_88._8_4_;
      fVar14 = local_a8 * _DAT_146af09e0;
      fVar15 = fStack_a4 * fRam0000000146af09e4;
      fVar16 = fStack_a0 * fRam0000000146af09e8;
      fVar17 = fStack_9c * fRam0000000146af09ec;
      auVar10 = rcpps(in_XMM5,local_88);
      fVar18 = (float)((uint)(*param_2 - local_98) & _DAT_146af0840);
      fVar19 = (float)((uint)(param_2[1] - fStack_94) & uRam0000000146af0844);
      fVar20 = (float)((uint)(param_2[2] - fStack_90) & uRam0000000146af0848);
      fVar6 = fVar20 * fVar15 - fVar19 * fVar16;
      fVar7 = fVar18 * fVar16 - fVar20 * fVar14;
      fVar8 = fVar19 * fVar14 - fVar18 * fVar15;
      fVar9 = auVar10._0_4_;
      fVar11 = auVar10._4_4_;
      fVar12 = auVar10._8_4_;
      fVar6 = fVar6 + fVar6;
      fVar7 = fVar7 + fVar7;
      fVar8 = fVar8 + fVar8;
      fVar9 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar4;
      fVar11 = (fVar11 + fVar11) - fVar11 * fVar11 * fVar5;
      fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar13;
      bVar3 = (float)((uint)fVar13 & uRam0000000146af07d8) <= fRam0000000146af09d8;
      fVar9 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar4;
      fVar11 = (fVar11 + fVar11) - fVar11 * fVar11 * fVar5;
      fVar13 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar13;
      *(ulonglong *)param_2 =
           CONCAT44(((fVar6 * fVar16 - fVar8 * fVar14) + fVar17 * fVar7 + fVar19) *
                    (float)(-(uint)((float)((uint)fVar5 & uRam0000000146af07d4) <=
                                   fRam0000000146af09d4) & (uint)fVar11 ^ (uint)fVar11),
                    ((fVar8 * fVar15 - fVar7 * fVar16) + fVar17 * fVar6 + fVar18) *
                    (float)(-(uint)((float)((uint)fVar4 & _DAT_146af07d0) <= _DAT_146af09d0) &
                            (uint)fVar9 ^ (uint)fVar9));
      param_2[2] = ((fVar7 * fVar14 - fVar6 * fVar15) + fVar17 * fVar8 + fVar20) *
                   (float)(-(uint)bVar3 & (uint)fVar13 ^ (uint)fVar13);
    }
    if ((bVar1 & 8) == 0) {
      fVar4 = *param_3;
      fVar5 = param_3[1];
      fVar13 = param_3[2];
      fVar6 = param_3[3];
      local_a8 = -local_a8;
      fStack_a4 = -fStack_a4;
      fStack_a0 = -fStack_a0;
      fStack_bc = fStack_9c;
      local_b8 = fVar6 * local_a8 * _DAT_146af08d0 + fStack_9c * fVar4 +
                 fVar13 * fStack_a4 * _DAT_146af08c0 + fVar5 * fStack_a0 * _DAT_146af08b0;
      fStack_b4 = fVar13 * local_a8 * fRam0000000146af08d4 + fStack_9c * fVar5 +
                  fVar6 * fStack_a4 * fRam0000000146af08c4 +
                  fVar4 * fStack_a0 * fRam0000000146af08b4;
      fStack_b0 = fVar5 * local_a8 * fRam0000000146af08d8 + fStack_9c * fVar13 +
                  fVar4 * fStack_a4 * fRam0000000146af08c8 +
                  fVar6 * fStack_a0 * fRam0000000146af08b8;
      fStack_ac = fVar4 * local_a8 * fRam0000000146af08dc + fStack_9c * fVar6 +
                  fVar5 * fStack_a4 * fRam0000000146af08cc +
                  fVar13 * fStack_a0 * fRam0000000146af08bc;
    }
  }
  fStack_c0 = param_2[2];
  local_c8 = *(undefined8 *)param_2;
  local_d0 = param_6;
  local_d8 = param_5;
  FUN_142397be0(param_1,&local_c8,&local_b8,param_4);
  return;
}



// FUNCTION 142399680 FUN_142399680 body=200 status=ok
// SIG undefined FUN_142399680(void)

void FUN_142399680(longlong param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_1 + 400) == 0) {
    local_20 = *(undefined4 *)(param_3 + 1);
    local_28 = *param_3;
    local_10 = *(undefined4 *)(param_2 + 1);
    local_18 = *param_2;
    FUN_1423982b0(local_18,&local_18,&local_28,param_4,param_5,param_6);
    return;
  }
  local_18 = *param_2;
  local_10 = *(undefined4 *)(param_2 + 1);
  uVar1 = FRotator::Quaternion(param_3,&local_28);
  FUN_142399390(param_1,&local_18,uVar1,param_4 & 0xff,param_5,param_6);
  return;
}



// FUNCTION 142399750 FUN_142399750 body=949 status=ok
// SIG undefined FUN_142399750(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142399750(longlong param_1,float *param_2,undefined8 *param_3)

{
  float *pfVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  float fVar16;
  uint uVar17;
  undefined1 in_XMM5 [16];
  uint uVar18;
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
  undefined1 auStack_d8 [32];
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined4 local_a8;
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
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  plVar2 = *(longlong **)(param_1 + 400);
  if (plVar2 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1ec) = *(undefined8 *)param_2;
    *(float *)(param_1 + 500) = param_2[2];
    *(undefined8 *)(param_1 + 0x1f8) = *param_3;
    uVar5 = *(undefined4 *)(param_3 + 1);
  }
  else {
    (**(code **)(*plVar2 + 0x420))(plVar2,&local_88,*(undefined8 *)(param_1 + 0x198),0);
    if ((*(byte *)(param_1 + 0x24c) & 4) == 0) {
      fVar11 = local_68._0_4_;
      fVar12 = local_68._4_4_;
      fVar10 = local_68._8_4_;
      fVar20 = local_88 * _DAT_146af09e0;
      fVar22 = fStack_84 * fRam0000000146af09e4;
      fVar23 = fStack_80 * fRam0000000146af09e8;
      fVar24 = fStack_7c * fRam0000000146af09ec;
      auVar9 = rcpps(in_XMM5,local_68);
      fVar25 = (float)((uint)(*param_2 - local_78) & _DAT_146af0840);
      fVar27 = (float)((uint)(param_2[1] - fStack_74) & uRam0000000146af0844);
      fVar28 = (float)((uint)(param_2[2] - fStack_70) & uRam0000000146af0848);
      fVar13 = fVar28 * fVar22 - fVar27 * fVar23;
      fVar21 = fVar25 * fVar23 - fVar28 * fVar20;
      fVar19 = fVar27 * fVar20 - fVar25 * fVar22;
      fVar26 = auVar9._0_4_;
      fVar14 = auVar9._4_4_;
      fVar16 = auVar9._8_4_;
      fVar13 = fVar13 + fVar13;
      fVar21 = fVar21 + fVar21;
      fVar19 = fVar19 + fVar19;
      fVar26 = (fVar26 + fVar26) - fVar26 * fVar26 * fVar11;
      fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar12;
      fVar16 = (fVar16 + fVar16) - fVar16 * fVar16 * fVar10;
      fVar26 = (fVar26 + fVar26) - fVar26 * fVar26 * fVar11;
      fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar12;
      fVar16 = (fVar16 + fVar16) - fVar16 * fVar16 * fVar10;
      fVar10 = ((fVar21 * fVar20 - fVar13 * fVar22) + fVar24 * fVar19 + fVar28) *
               (float)(-(uint)((float)((uint)fVar10 & uRam0000000146af07d8) <= fRam0000000146af09d8)
                       & (uint)fVar16 ^ (uint)fVar16);
      *(ulonglong *)(param_1 + 0x1ec) =
           CONCAT44(((fVar13 * fVar23 - fVar19 * fVar20) + fVar24 * fVar21 + fVar27) *
                    (float)(-(uint)((float)((uint)fVar12 & uRam0000000146af07d4) <=
                                   fRam0000000146af09d4) & (uint)fVar14 ^ (uint)fVar14),
                    ((fVar19 * fVar22 - fVar21 * fVar23) + fVar24 * fVar13 + fVar25) *
                    (float)(-(uint)((float)((uint)fVar11 & _DAT_146af07d0) <= _DAT_146af09d0) &
                            (uint)fVar26 ^ (uint)fVar26));
      fStack_90 = fVar10;
    }
    else {
      *(undefined8 *)(param_1 + 0x1ec) = *(undefined8 *)param_2;
      fVar10 = param_2[2];
    }
    *(float *)(param_1 + 500) = fVar10;
    if ((*(byte *)(param_1 + 0x24c) & 8) == 0) {
      fVar19 = -fStack_84;
      fVar21 = -fStack_80;
      fVar26 = -local_88;
      pfVar6 = (float *)FRotator::Quaternion(param_3,&local_b8);
      pfVar1 = (float *)(param_1 + 0x270);
      fVar10 = *pfVar6;
      fVar11 = pfVar6[1];
      fVar12 = pfVar6[2];
      fVar13 = pfVar6[3];
      fStack_ac = fStack_7c;
      local_b8 = fVar26 * fVar13 * _DAT_146af08d0 + fStack_7c * fVar10 +
                 fVar19 * fVar12 * _DAT_146af08c0 + fVar21 * fVar11 * _DAT_146af08b0;
      fStack_b4 = fVar26 * fVar12 * fRam0000000146af08d4 + fStack_7c * fVar11 +
                  fVar19 * fVar13 * fRam0000000146af08c4 + fVar21 * fVar10 * fRam0000000146af08b4;
      fStack_b0 = fVar26 * fVar11 * fRam0000000146af08d8 + fStack_7c * fVar12 +
                  fVar19 * fVar10 * fRam0000000146af08c8 + fVar21 * fVar13 * fRam0000000146af08b8;
      fStack_8c = fVar26 * fVar10 * fRam0000000146af08dc + fStack_7c * fVar13 +
                  fVar19 * fVar11 * fRam0000000146af08cc + fVar21 * fVar12 * fRam0000000146af08bc;
      auVar9._4_4_ = -(uint)(*(float *)(param_1 + 0x274) != fStack_b4);
      auVar9._0_4_ = -(uint)(*pfVar1 != local_b8);
      auVar9._8_4_ = -(uint)(*(float *)(param_1 + 0x278) != fStack_b0);
      auVar9._12_4_ = -(uint)(*(float *)(param_1 + 0x27c) != fStack_8c);
      iVar4 = movmskps((int)pfVar6,auVar9);
      fVar10 = -local_88;
      fVar11 = -fStack_84;
      local_98 = local_b8;
      fStack_94 = fStack_b4;
      fStack_90 = fStack_b0;
      if (iVar4 != 0) {
        local_a8 = 0x322bcc77;
        auVar8._0_4_ = local_b8 * local_b8 + fStack_b0 * fStack_b0;
        auVar8._4_4_ = fStack_b4 * fStack_b4 + fStack_8c * fStack_8c;
        auVar8._8_4_ = fStack_b0 * fStack_b0 + local_b8 * local_b8;
        auVar8._12_4_ = fStack_8c * fStack_8c + fStack_b4 * fStack_b4;
        fVar21 = auVar8._4_4_ + auVar8._0_4_;
        fVar19 = auVar8._8_4_ + auVar8._4_4_;
        fVar26 = auVar8._12_4_ + auVar8._8_4_;
        fVar14 = auVar8._0_4_ + auVar8._12_4_;
        auVar3._4_4_ = fVar19;
        auVar3._0_4_ = fVar21;
        auVar3._8_4_ = fVar26;
        auVar3._12_4_ = fVar14;
        auVar9 = rsqrtps(auVar8,auVar3);
        fVar10 = auVar9._0_4_;
        fVar11 = auVar9._4_4_;
        fVar12 = auVar9._8_4_;
        fVar13 = auVar9._12_4_;
        fVar10 = (_DAT_146af09a0 - fVar10 * fVar10 * fVar21 * _DAT_146af09a0) * fVar10 + fVar10;
        fVar11 = (fRam0000000146af09a4 - fVar11 * fVar11 * fVar19 * fRam0000000146af09a4) * fVar11 +
                 fVar11;
        fVar12 = (fRam0000000146af09a8 - fVar12 * fVar12 * fVar26 * fRam0000000146af09a8) * fVar12 +
                 fVar12;
        fVar13 = (fRam0000000146af09ac - fVar13 * fVar13 * fVar14 * fRam0000000146af09ac) * fVar13 +
                 fVar13;
        uVar15 = ((uint)(((fRam0000000146af09a4 - fVar11 * fVar11 * fVar19 * fRam0000000146af09a4) *
                          fVar11 + fVar11) * fStack_b4) ^ uRam0000000146af0994) &
                 -(uint)(1e-08 <= fVar19) ^ uRam0000000146af0994;
        uVar17 = ((uint)(((fRam0000000146af09a8 - fVar12 * fVar12 * fVar26 * fRam0000000146af09a8) *
                          fVar12 + fVar12) * fStack_b0) ^ uRam0000000146af0998) &
                 -(uint)(1e-08 <= fVar26) ^ uRam0000000146af0998;
        uVar18 = ((uint)(((fRam0000000146af09ac - fVar13 * fVar13 * fVar14 * fRam0000000146af09ac) *
                          fVar13 + fVar13) * fStack_8c) ^ uRam0000000146af099c) &
                 -(uint)(1e-08 <= fVar14) ^ uRam0000000146af099c;
        *pfVar1 = (float)(((uint)(((_DAT_146af09a0 - fVar10 * fVar10 * fVar21 * _DAT_146af09a0) *
                                   fVar10 + fVar10) * local_b8) ^ _DAT_146af0990) &
                          -(uint)(1e-08 <= fVar21) ^ _DAT_146af0990);
        *(uint *)(param_1 + 0x274) = uVar15;
        *(uint *)(param_1 + 0x278) = uVar17;
        *(uint *)(param_1 + 0x27c) = uVar18;
        fStack_ac = fStack_8c;
        puVar7 = (undefined8 *)FQuat::Rotator(pfVar1,&local_98);
        *(undefined8 *)(param_1 + 0x280) = *puVar7;
        *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(puVar7 + 1);
        fVar10 = local_b8;
        fVar11 = fStack_b4;
        fVar21 = fStack_b0;
      }
      fStack_b0 = fVar21;
      fStack_b4 = fVar11;
      local_b8 = fVar10;
      *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_1 + 0x280);
      uVar5 = *(undefined4 *)(param_1 + 0x288);
    }
    else {
      *(undefined8 *)(param_1 + 0x1f8) = *param_3;
      uVar5 = *(undefined4 *)(param_3 + 1);
    }
  }
  *(undefined4 *)(param_1 + 0x200) = uVar5;
  FUN_140942fb0(param_1,1);
  return;
}



// FUNCTION 142399b10 FUN_142399b10 body=117 status=ok
// SIG undefined FUN_142399b10(void)

void FUN_142399b10(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  FUN_14238ced0(param_1,local_18,param_2);
  local_20 = *(undefined4 *)(param_1 + 500);
  local_28 = *(undefined8 *)(param_1 + 0x1ec);
  FUN_142397be0(param_1,&local_28,local_18,param_3,param_4,param_5);
  return;
}



// FUNCTION 142399b90 FUN_142399b90 body=146 status=ok
// SIG undefined FUN_142399b90(void)

void FUN_142399b90(longlong param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_1 + 400) == 0) {
    local_10 = *(undefined4 *)(param_2 + 1);
    local_18 = *param_2;
    FUN_142398470(local_18,&local_18,param_3,param_4,param_5);
    return;
  }
  uVar1 = FRotator::Quaternion(param_2,&local_18);
  FUN_142399b10(param_1,uVar1,param_3 & 0xff,param_4,param_5);
  return;
}



// FUNCTION 142399c30 FUN_142399c30 body=296 status=ok
// SIG undefined FUN_142399c30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142399c30(longlong *param_1,float *param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  float fStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [32];
  float local_28;
  float fStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_58 = *(undefined8 *)param_2;
  plVar1 = (longlong *)param_1[0x32];
  fStack_50 = param_2[2];
  if ((plVar1 != (longlong *)0x0) && ((*(byte *)((longlong)param_1 + 0x24c) & 0x10) == 0)) {
    (**(code **)(*plVar1 + 0x420))(plVar1,local_48,param_1[0x33],0);
    fStack_50 = 0.0;
    uStack_4c = uStack_1c;
    if (1e-08 < ABS(local_28)) {
      local_28 = 1.0 / local_28;
    }
    else {
      local_28 = 0.0;
    }
    if (1e-08 < ABS(fStack_24)) {
      fStack_24 = 1.0 / fStack_24;
    }
    else {
      fStack_24 = 0.0;
    }
    if (1e-08 < ABS(fStack_20)) {
      fStack_50 = 1.0 / fStack_20;
    }
    fStack_50 = fStack_50 * param_2[2];
    local_58 = CONCAT44(fStack_24 * param_2[1],local_28 * *param_2);
  }
  (**(code **)(*param_1 + 0x3f8))(param_1,&local_58);
  return;
}



// FUNCTION 142399d60 FUN_142399d60 body=202 status=ok
// SIG undefined FUN_142399d60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142399d60(longlong param_1,undefined4 *param_2,undefined1 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  byte bVar1;
  longlong *plVar2;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  plVar2 = *(longlong **)(param_1 + 400);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x420))(plVar2,local_68,*(undefined8 *)(param_1 + 0x198),0);
    FUN_14162bcf0(param_2,&local_98,local_68);
    bVar1 = *(byte *)(param_1 + 0x24c);
    if ((bVar1 & 4) != 0) {
      local_88 = param_2[4];
      uStack_84 = param_2[5];
      uStack_80 = param_2[6];
      uStack_7c = param_2[7];
    }
    if ((bVar1 & 8) != 0) {
      local_98 = *param_2;
      uStack_94 = param_2[1];
      uStack_90 = param_2[2];
      uStack_8c = param_2[3];
    }
    if ((bVar1 & 0x10) != 0) {
      local_78 = param_2[8];
      uStack_74 = param_2[9];
      uStack_70 = param_2[10];
      uStack_6c = param_2[0xb];
    }
    param_2 = &local_98;
  }
  local_a8 = param_5;
  FUN_142398770(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 142399e30 FUN_142399e30 body=125 status=ok
// SIG undefined FUN_142399e30(void)

void FUN_142399e30(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (((*(byte *)(param_1 + 0xb8) & 1) == 0) && (param_2 != param_1)) {
    if (param_2 != 0) {
      for (lVar2 = *(longlong *)(param_2 + 400); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 400)) {
        if (param_1 == lVar2) {
          return;
        }
      }
    }
    lVar2 = *(longlong *)(param_1 + 400);
    if (lVar2 != 0) {
      plVar3 = *(longlong **)(lVar2 + 0x1a0);
      plVar1 = plVar3 + *(int *)(lVar2 + 0x1a8);
      for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
        if (*plVar3 == param_1) {
          return;
        }
      }
    }
    *(longlong *)(param_1 + 400) = param_2;
    *(undefined8 *)(param_1 + 0x198) = param_3;
  }
  return;
}



// FUNCTION 142399eb0 FUN_142399eb0 body=49 status=ok
// SIG undefined FUN_142399eb0(void)

byte FUN_142399eb0(longlong param_1)

{
  longlong lVar1;
  
  if (0 < *(int *)(param_1 + 0x2a8)) {
    lVar1 = *(longlong *)
             (*(longlong *)(param_1 + 0x2a0) + -8 + (longlong)*(int *)(param_1 + 0x2a8) * 8);
    if (lVar1 != 0) {
      return *(byte *)(lVar1 + 0x1b8) >> 2 & 1;
    }
  }
  return 1;
}



// FUNCTION 142399ef0 FUN_142399ef0 body=77 status=ok
// SIG undefined FUN_142399ef0(void)

undefined1 FUN_142399ef0(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  
  bVar1 = *(byte *)(param_1 + 0x24f);
  lVar2 = FUN_1428742e0();
  if ((int)(uint)bVar1 <= *(int *)(lVar2 + 4)) {
    cVar3 = FUN_14239a1f0(param_1);
    if ((cVar3 != '\0') || ((*(byte *)(param_1 + 0x2f2) & 0x40) != 0)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142399f40 FUN_142399f40 body=30 status=ok
// SIG undefined FUN_142399f40(void)

bool FUN_142399f40(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  
  bVar1 = *(byte *)(param_1 + 0x24f);
  lVar2 = FUN_1428742e0();
  return (int)(uint)bVar1 <= *(int *)(lVar2 + 4);
}



// FUNCTION 142399f60 FUN_142399f60 body=61 status=ok
// SIG undefined FUN_142399f60(void)

undefined4 FUN_142399f60(longlong param_1)

{
  int iVar1;
  
  if (((*(byte *)(param_1 + 200) & 0x40) != 0) || ((*(byte *)(param_1 + 0xb8) & 1) == 0)) {
    return 0;
  }
  if ((-1 < *(char *)(param_1 + 0x2ee)) && (iVar1 = FUN_142696340(param_1 + 0x3b0), iVar1 == 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 142399fa0 FUN_142399fa0 body=469 status=ok
// SIG undefined FUN_142399fa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_142399fa0(undefined8 param_1,byte *param_2,float *param_3,longlong *param_4,byte param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float local_48;
  
  if ((*param_2 & 1) != 0) {
    if (((((param_5 & 1) != 0) && (param_4 != (longlong *)0x0)) &&
        (plVar5 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x6c), plVar5 != (longlong *)0x0)) &&
       ((cVar4 = (**(code **)(*param_4 + 0x520))(param_4,plVar5), cVar4 != '\0' ||
        (cVar4 = (**(code **)(*plVar5 + 0x520))(plVar5,param_4), cVar4 != '\0')))) {
      return 1;
    }
    if (((*param_2 & 2) != 0) && ((param_5 & 4) == 0)) {
      fVar1 = param_3[2];
      fVar2 = *param_3;
      fVar3 = param_3[1];
      fVar7 = fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1;
      if (fVar7 == 1.0) {
        local_48 = (float)*(undefined8 *)param_3;
        fVar6 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
        fVar8 = param_3[2];
      }
      else {
        fVar6 = DAT_1468b5d94;
        fVar8 = DAT_1468b5d98;
        local_48 = DAT_1468b5d90;
        if (1e-08 <= fVar7) {
          auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
          fVar8 = auVar9._0_4_;
          fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
          fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
          local_48 = fVar2 * fVar8;
          fVar6 = fVar3 * fVar8;
          fVar8 = fVar1 * fVar8;
        }
      }
      if (_DAT_146af07c4 <
          fVar6 * *(float *)(param_2 + 0x3c) + local_48 * *(float *)(param_2 + 0x38) +
          fVar8 * *(float *)(param_2 + 0x40)) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14239a180 FUN_14239a180 body=100 status=ok
// SIG undefined FUN_14239a180(void)

undefined8
FUN_14239a180(longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
             char param_6)

{
  longlong lVar1;
  
  if (((param_3 != param_5) &&
      (((param_6 == '\0' ||
        (((*(byte *)(param_3 + 0x2ef) & 1) != 0 && ((*(byte *)(param_5 + 0x2ef) & 1) != 0)))) &&
       (param_2 != 0)))) && ((param_4 != 0 && (param_1 != 0)))) {
    lVar1 = UWorld::GetWorldSettings(param_1,0,1);
    if ((param_4 != lVar1) && ((*(byte *)(param_4 + 0x93) & 8) != 0)) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14239a1f0 FUN_14239a1f0 body=190 status=ok
// SIG undefined FUN_14239a1f0(void)

undefined8 FUN_14239a1f0(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char extraout_AL;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = param_1[0x24];
  lVar1 = param_1[0x23];
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0();
  }
  if (((lVar1 != 0) && (lVar6 = AActor::GetParentComponent(lVar1), lVar6 != 0)) &&
     (FUN_14239a1f0(lVar6), extraout_AL == '\0')) {
    return 0;
  }
  if ((lVar5 == 0) || (cVar4 = UWorld::IsGameWorld(lVar5), cVar4 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  cVar4 = (**(code **)(*param_1 + 0x460))(param_1);
  if ((cVar4 == '\0') || ((lVar1 != 0 && ((*(byte *)(lVar1 + 0x80) & 1) != 0)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (((bVar2) && (bVar3)) && ((*(byte *)((longlong)param_1 + 0x24c) & 0x20) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 14239a2b0 FUN_14239a2b0 body=126 status=ok
// SIG undefined FUN_14239a2b0(void)

undefined1 FUN_14239a2b0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  if (((*(byte *)(param_1 + 0x2f1) & 2) != 0) &&
     (lVar1 = *(longlong *)(param_1 + 0x118), lVar1 != 0)) {
    cVar2 = FOutputDevice::CanBeUsedOnAnyThread(lVar1);
    if (cVar2 != '\0') {
      return 1;
    }
    cVar2 = AActor::IsChildActor(lVar1);
    if (cVar2 != '\0') {
      uVar4 = FUN_1422336c0(lVar1);
      cVar2 = AActor::IsChildActor(uVar4);
      while (cVar2 != '\0') {
        uVar4 = FUN_1422336c0(uVar4);
        cVar2 = AActor::IsChildActor(uVar4);
      }
      uVar3 = FOutputDevice::CanBeUsedOnAnyThread(uVar4);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 14239a330 FUN_14239a330 body=76 status=ok
// SIG undefined FUN_14239a330(void)

undefined8 FUN_14239a330(longlong *param_1)

{
  char cVar1;
  float fVar2;
  
  if (((*(byte *)(param_1 + 0x39) & 8) != 0) ||
     (fVar2 = (float)(**(code **)(*param_1 + 0x3f8))(), fVar2 != 0.0)) {
    return 1;
  }
  if (((*(byte *)(param_1 + 0x39) & 0x10) != 0) &&
     (cVar1 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x214), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 14239a380 FUN_14239a380 body=310 status=ok
// SIG undefined FUN_14239a380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14239a380(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 local_f0 [192];
  undefined1 *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  if (param_2 != 0) {
    local_20 = DAT_1468387a8 ^ (ulonglong)auStack_118;
    lVar5 = 0;
    *(undefined1 *)(param_1 + 0x2d0) = 2;
    local_30 = (undefined1 *)0x0;
    local_28 = 0;
    FUN_140725150(param_2,local_f0,0);
    lVar4 = (longlong)(int)local_28;
    if (0 < lVar4) {
      do {
        puVar3 = local_f0;
        if (local_30 != (undefined1 *)0x0) {
          puVar3 = local_30;
        }
        FWeakObjectPtr::operator=(&local_f8,*(undefined8 *)(puVar3 + lVar5 * 8));
        iVar2 = *(int *)(param_1 + 0x300);
        *(int *)(param_1 + 0x300) = iVar2 + 1;
        if (*(int *)(param_1 + 0x304) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x2f8,iVar2);
        }
        lVar5 = lVar5 + 1;
        puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x2f8) + (longlong)iVar2 * 8);
        *puVar1 = local_f8;
        puVar1[1] = local_f4;
      } while (lVar5 < lVar4);
    }
    if (local_30 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14239a4c0 FUN_14239a4c0 body=108 status=ok
// SIG undefined FUN_14239a4c0(void)

void FUN_14239a4c0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_res10;
  undefined4 local_res14;
  
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0x2d0) = 2;
    FWeakObjectPtr::operator=(&local_res10);
    iVar2 = *(int *)(param_1 + 0x300);
    *(int *)(param_1 + 0x300) = iVar2 + 1;
    if (*(int *)(param_1 + 0x304) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x2f8,iVar2);
    }
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x2f8) + (longlong)iVar2 * 8);
    *puVar1 = local_res10;
    puVar1[1] = local_res14;
  }
  return;
}



// FUNCTION 14239a530 SnapTo body=15 status=ok
// SIG undefined SnapTo(void)

void USceneComponent::SnapTo(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142382f60(param_1,param_2,&DAT_146532184,param_3);
  return;
}



// FUNCTION 14239a540 FUN_14239a540 body=91 status=ok
// SIG undefined FUN_14239a540(void)

void FUN_14239a540(longlong param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 1.0 / param_3;
  *(undefined1 *)(param_1 + 0x1c0) = 1;
  *(float *)(param_1 + 0x1dc) = param_3;
  *(float *)(param_1 + 0x1e0) = param_3;
  fVar1 = param_2[2];
  *(ulonglong *)(param_1 + 0x1c4) = CONCAT44(fVar2 * param_2[1],fVar2 * *param_2);
  *(float *)(param_1 + 0x1cc) = fVar2 * fVar1;
  return;
}



// FUNCTION 14239a5a0 FUN_14239a5a0 body=336 status=ok
// SIG undefined FUN_14239a5a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14239a5a0(longlong *param_1,byte *param_2)

{
  byte local_98 [4];
  undefined4 local_94;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  (**(code **)(*param_1 + 0x450))(param_1,0);
  *(undefined8 *)((longlong)param_1 + 0x18c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x194) = DAT_1468b5d98;
  local_8c = *(undefined4 *)(param_2 + 0xc);
  local_88 = *(undefined4 *)(param_2 + 0x10);
  local_98[1] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_1c = 0;
  local_98[0] = *param_2 & 3;
  local_84 = *(undefined8 *)(param_2 + 0x14);
  local_94 = *(undefined4 *)(param_2 + 4);
  local_78 = *(undefined8 *)(param_2 + 0x20);
  local_90 = *(uint *)(param_2 + 8) & 1;
  local_7c = *(undefined4 *)(param_2 + 0x1c);
  local_6c = *(undefined8 *)(param_2 + 0x2c);
  local_70 = *(undefined4 *)(param_2 + 0x28);
  local_64 = *(undefined4 *)(param_2 + 0x34);
  local_58 = *(undefined4 *)(param_2 + 0x40);
  local_4c = *(undefined4 *)(param_2 + 0x4c);
  local_40 = *(undefined4 *)(param_2 + 0x58);
  local_38 = *(undefined4 *)(param_2 + 0x60);
  local_34 = *(undefined4 *)(param_2 + 100);
  local_30 = *(undefined4 *)(param_2 + 0x68);
  local_2c = *(undefined4 *)(param_2 + 0x6c);
  local_28 = *(undefined4 *)(param_2 + 0x70);
  local_60 = *(undefined8 *)(param_2 + 0x38);
  local_24 = *(undefined4 *)(param_2 + 0x74);
  local_54 = *(undefined8 *)(param_2 + 0x44);
  local_20 = *(undefined4 *)(param_2 + 0x78);
  local_18 = *(undefined8 *)(param_2 + 0x80);
  local_48 = *(undefined8 *)(param_2 + 0x50);
  local_10 = *(undefined8 *)(param_2 + 0x88);
  local_3c = *(undefined4 *)(param_2 + 0x5c);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x40,local_98);
  return;
}



// FUNCTION 14239a6f0 FUN_14239a6f0 body=53 status=ok
// SIG undefined FUN_14239a6f0(void)

void FUN_14239a6f0(longlong param_1)

{
  FUN_1426adcc0(param_1 + 0x3b0);
  return;
}



// FUNCTION 14239a730 FUN_14239a730 body=366 status=ok
// SIG undefined FUN_14239a730(void)

void FUN_14239a730(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  
  if ((((param_1[0x47] != DAT_1468c21b0) && (param_1[0x47] = DAT_1468c21b0, param_1[0x2f] != 0)) &&
      ((*(byte *)((longlong)param_1 + 0xba) & 4) != 0)) &&
     (cVar3 = (**(code **)(*param_1 + 0x438))(), cVar3 == '\0')) {
    FUN_14237ac80(param_1,param_2,param_3,param_4);
    lVar2 = param_1[0x2f];
    if (lVar2 != 0) {
      iVar1 = *(int *)(lVar2 + 0xc);
      lVar5 = 0;
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar7 = iVar1 >> 0x1f & 0xffff;
        uVar4 = iVar1 + uVar7;
        lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
      }
      if ((((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) && (*(longlong *)(lVar2 + 0x118) != 0)) &&
         ((cVar3 = (**(code **)(*param_1 + 0x520))(param_1), cVar3 != '\0' &&
          ((cVar3 = (**(code **)(*(longlong *)param_1[0x2f] + 0x400))((longlong *)param_1[0x2f],0),
           cVar3 == '\0' &&
           (cVar3 = (**(code **)(*param_1 + 0x588))(param_1,param_2,param_3), cVar3 != '\0')))))) {
        if (DAT_146af07c8 != 0) {
          uVar6 = FUN_14247f500();
          cVar3 = FUN_14248a980(uVar6,param_1,param_2);
          if (cVar3 != '\0') {
            return;
          }
        }
        (**(code **)(*param_1 + 0x590))(param_1,param_2);
        (**(code **)(*param_1 + 0x598))(param_1,param_2);
      }
    }
  }
  return;
}



// FUNCTION 14239a8a0 FUN_14239a8a0 body=1369 status=ok
// SIG undefined FUN_14239a8a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14239a8a0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
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
  undefined8 local_138;
  float local_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float local_114;
  undefined8 local_108;
  float local_100;
  undefined8 local_f8;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined8 local_d8;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  fVar11 = (float)param_2;
  cVar4 = (**(code **)(*param_1 + 0x438))();
  if (cVar4 == '\0') {
    FUN_14237ac80(param_1,param_2,param_3,param_4);
    lVar2 = param_1[0x2f];
    if (lVar2 != 0) {
      iVar1 = *(int *)(lVar2 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar8 = iVar1 >> 0x1f & 0xffff;
        uVar5 = iVar1 + uVar8;
        lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                (longlong)(int)((uVar5 & 0xffff) - uVar8) * 0x18;
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) {
        if ((char)param_1[0x38] != '\0') {
          fVar14 = *(float *)(param_1 + 0x3c);
          if (fVar14 < 0.0) {
            return;
          }
          *(float *)(param_1 + 0x3c) = fVar14 - fVar11;
          if (fVar14 - fVar11 < 0.0) {
            *(undefined4 *)(param_1 + 0x3c) = 0xbf800000;
            fVar11 = fVar14;
          }
        }
        fVar14 = *(float *)(lVar2 + 0x210);
        fVar15 = *(float *)(lVar2 + 0x214);
        fVar20 = *(float *)(lVar2 + 0x218);
        fVar21 = *(float *)(lVar2 + 0x21c);
        local_130 = fVar11 * *(float *)((longlong)param_1 + 0x1cc);
        local_138 = CONCAT44(fVar11 * *(float *)(param_1 + 0x39),
                             fVar11 * *(float *)((longlong)param_1 + 0x1c4));
        local_128 = fVar14;
        fStack_124 = fVar15;
        fStack_120 = fVar20;
        fStack_11c = fVar21;
        FRotator::Quaternion(&local_138,&local_b8);
        if ((*(byte *)(param_1 + 0x3e) & 1) == 0) {
          fVar16 = fVar21 * local_b8 * _DAT_146af08d0 + fStack_ac * fVar14;
          fVar17 = fVar20 * local_b8 * fRam0000000146af08d4 + fStack_ac * fVar15;
          fVar18 = fVar15 * local_b8 * fRam0000000146af08d8 + fStack_ac * fVar20;
          fVar19 = fVar14 * local_b8 * fRam0000000146af08dc + fStack_ac * fVar21;
          fStack_ac = fStack_b0;
          fVar9 = fVar20;
          fVar10 = fVar21;
          fVar12 = fStack_b4;
          fVar13 = fStack_b4;
          local_b8 = fStack_b4;
          fVar3 = fStack_b0;
          fVar22 = fStack_b0;
          fVar23 = fVar15;
          fVar11 = fVar14;
        }
        else {
          fVar16 = fStack_ac * fVar14 * _DAT_146af08d0 + fVar21 * local_b8;
          fVar17 = fStack_b0 * fVar14 * fRam0000000146af08d4 + fVar21 * fStack_b4;
          fVar18 = fStack_b4 * fVar14 * fRam0000000146af08d8 + fVar21 * fStack_b0;
          fVar19 = local_b8 * fVar14 * fRam0000000146af08dc + fVar21 * fStack_ac;
          fVar21 = fVar20;
          fVar9 = fVar15;
          fVar10 = fVar15;
          fVar14 = fVar15;
          fVar12 = fStack_b0;
          fVar13 = fStack_ac;
          fVar3 = fStack_b4;
          fVar22 = local_b8;
          fVar23 = fVar20;
          fVar11 = fVar20;
        }
        local_f0 = DAT_1468b5d98;
        local_e8 = fVar16 + fVar12 * fVar9 * _DAT_146af08c0 + fVar3 * fVar23 * _DAT_146af08b0;
        local_e4 = fVar17 + fVar13 * fVar10 * fRam0000000146af08c4 +
                   fVar22 * fVar11 * fRam0000000146af08b4;
        local_e0 = fVar18 + local_b8 * fVar14 * fRam0000000146af08c8 +
                   fStack_ac * fVar21 * fRam0000000146af08b8;
        local_dc = fVar19 + fStack_b4 * fVar15 * fRam0000000146af08cc +
                   fStack_b0 * fVar20 * fRam0000000146af08bc;
        local_f8 = _DAT_1468b5d90;
        if (((*(float *)((longlong)param_1 + 0x1e4) != 0.0) || (*(float *)(param_1 + 0x3d) != 0.0))
           || (*(float *)((longlong)param_1 + 0x1ec) != 0.0)) {
          local_138 = *(undefined8 *)((longlong)param_1 + 0x1e4);
          fVar11 = (float)((ulonglong)local_138 >> 0x20);
          local_130 = *(float *)((longlong)param_1 + 0x1ec);
          local_d8 = CONCAT44(fVar11,fVar11);
          local_118 = local_130 * fStack_124 - fVar11 * fStack_120;
          local_108 = *(undefined8 *)((longlong)param_1 + 0x1e4);
          fVar14 = (float)((ulonglong)local_108 >> 0x20);
          local_118 = local_118 + local_118;
          fVar15 = (float)local_138 * fStack_120 - local_130 * local_128;
          fVar15 = fVar15 + fVar15;
          fVar22 = fVar11 * local_128 - (float)local_138 * fStack_124;
          fVar22 = fVar22 + fVar22;
          fVar23 = local_e4 * local_130 - local_e0 * fVar14;
          fVar23 = fVar23 + fVar23;
          fVar21 = local_e0 * (float)local_108 - local_e8 * local_130;
          fVar21 = fVar21 + fVar21;
          fVar20 = local_e8 * fVar14 - local_e4 * (float)local_108;
          fVar20 = fVar20 + fVar20;
          local_114 = local_dc * fVar20;
          local_100 = ((local_128 * fVar15 - fStack_124 * local_118) +
                      fStack_11c * fVar22 + local_130) -
                      ((local_e8 * fVar21 - local_e4 * fVar23) + local_130 + local_114);
          local_f8 = CONCAT44(((fStack_120 * local_118 - local_128 * fVar22) +
                              fStack_11c * fVar15 + fVar11) -
                              ((local_e0 * fVar23 - local_e8 * fVar20) + fVar14 + local_dc * fVar21)
                              ,((fStack_124 * fVar22 - fStack_120 * fVar15) +
                               (float)local_138 + fStack_11c * local_118) -
                               ((local_e4 * fVar20 - local_e0 * fVar21) +
                               (float)local_108 + local_dc * fVar23));
          local_f0 = local_100;
        }
        local_c8 = local_e8;
        fStack_c4 = local_e4;
        fStack_c0 = local_e0;
        fStack_bc = local_dc;
        uVar7 = FUN_14247f500();
        FUN_14247ea90(uVar7);
        (**(code **)(*param_1 + 0x488))(param_1,&local_f8,&local_e8,0,0,0);
      }
    }
  }
  return;
}



// FUNCTION 14239ae00 FUN_14239ae00 body=42 status=ok
// SIG undefined FUN_14239ae00(void)

void FUN_14239ae00(longlong param_1)

{
  FUN_142357eb0();
  if (*(char *)(param_1 + 0x318) != '\0') {
    FUN_142385e20(param_1);
    return;
  }
  return;
}



// FUNCTION 14239ae30 FUN_14239ae30 body=42 status=ok
// SIG undefined FUN_14239ae30(void)

void FUN_14239ae30(longlong param_1)

{
  FUN_142357eb0();
  if (*(char *)(param_1 + 0x318) != '\0') {
    FUN_142385f90(param_1);
    return;
  }
  return;
}



// FUNCTION 14239ae60 FUN_14239ae60 body=1296 status=ok
// SIG undefined FUN_14239ae60(void)

void FUN_14239ae60(longlong *param_1,float param_2)

{
  float fVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float local_res10 [2];
  undefined8 local_1b8;
  float local_1b0;
  undefined1 local_1a8 [16];
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  float local_180;
  undefined8 local_178;
  float local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined1 local_158 [16];
  byte local_148 [12];
  float local_13c;
  undefined8 local_11c;
  undefined4 local_114;
  undefined1 local_b8 [12];
  undefined1 local_ac [12];
  undefined1 local_a0 [120];
  
  iVar14 = 0;
  iVar13 = 0;
  iVar11 = 0;
  _guard_xfg_dispatch_icall_nop(local_148,0,0x90);
  local_13c = 1.0;
  lVar2 = *(longlong *)(param_1[0x2f] + 0x118);
  if (1e-06 <= param_2) {
    while (iVar11 < (int)param_1[0x44]) {
      uVar4 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar4 < (int)DAT_1469e91c4) {
        uVar10 = uVar4 & 0xffff;
        if ((int)uVar4 < 0) {
          uVar4 = uVar4 + 0xffff;
          uVar10 = uVar10 - 0x10000;
        }
        lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)uVar10 * 0x18;
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) != 0) {
        return;
      }
      cVar3 = FUN_14238f010(param_1);
      if (cVar3 != '\0') {
        return;
      }
      iVar12 = iVar11 + 1;
      cVar3 = (**(code **)(*param_1 + 0x538))(param_1);
      fVar15 = param_2;
      if (cVar3 != '\0') {
        fVar1 = *(float *)((longlong)param_1 + 0x21c);
        if (((fVar1 < param_2) && (iVar12 < (int)param_1[0x44])) &&
           (fVar15 = param_2 * 0.5, fVar1 <= param_2 * 0.5)) {
          fVar15 = fVar1;
        }
        if (fVar15 <= 1e-06) {
          fVar15 = 1e-06;
        }
      }
      local_1b0 = *(float *)((longlong)param_1 + 0x194);
      local_1b8 = *(undefined8 *)((longlong)param_1 + 0x18c);
      param_2 = param_2 - fVar15;
      local_13c = 1.0;
      (**(code **)(*param_1 + 0x560))(param_1,local_1a8,&local_1b8,fVar15);
      (**(code **)(*param_1 + 0x580))(param_1,local_158,&local_1b8,fVar15);
      if ((*(byte *)(param_1 + 0x39) & 2) == 0) {
        uVar4 = *(uint *)(param_1 + 0x31);
        *(uint *)(param_1 + 0x31) = uVar4 | 4;
        uVar7 = FUN_14247f500();
        FUN_14247ea90(uVar7);
        (**(code **)(*param_1 + 0x488))(param_1,local_1a8,local_158,1,local_148,0);
        *(uint *)(param_1 + 0x31) = uVar4;
      }
      else {
        FUN_1423755e0(param_1,local_1a8,local_158,1,local_148,0);
      }
      uVar4 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar4 < (int)DAT_1469e91c4) {
        uVar10 = uVar4 & 0xffff;
        if ((int)uVar4 < 0) {
          uVar4 = uVar4 + 0xffff;
          uVar10 = uVar10 - 0x10000;
        }
        lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)uVar10 * 0x18;
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) != 0) {
        return;
      }
      cVar3 = FUN_14238f010(param_1);
      if (cVar3 != '\0') {
        return;
      }
      if ((local_148[0] & 1) == 0) {
        *(uint *)(param_1 + 0x39) = *(uint *)(param_1 + 0x39) & 0xffffffbf;
        *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x3f800000;
        if ((((float)local_1b8 == *(float *)((longlong)param_1 + 0x18c)) &&
            (local_1b8._4_4_ == *(float *)(param_1 + 0x32))) &&
           (local_1b0 == *(float *)((longlong)param_1 + 0x194))) {
          local_190 = *(undefined4 *)((longlong)param_1 + 0x194);
          local_198 = *(undefined8 *)((longlong)param_1 + 0x18c);
          puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x528))(param_1,local_b8,&local_198,fVar15)
          ;
          *(undefined8 *)((longlong)param_1 + 0x18c) = *puVar8;
          *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)(puVar8 + 1);
        }
      }
      else {
        if ((((float)local_1b8 == *(float *)((longlong)param_1 + 0x18c)) &&
            (local_1b8._4_4_ == *(float *)(param_1 + 0x32))) &&
           (local_1b0 == *(float *)((longlong)param_1 + 0x194))) {
          if (local_13c <= 0.0001) {
            local_170 = local_1b0;
            puVar8 = &local_178;
            local_178 = local_1b8;
          }
          else {
            local_180 = local_1b0;
            local_188 = local_1b8;
            puVar8 = (undefined8 *)
                     (**(code **)(*param_1 + 0x528))(param_1,local_ac,&local_188,local_13c * fVar15)
            ;
          }
          *(undefined8 *)((longlong)param_1 + 0x18c) = *puVar8;
          *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)(puVar8 + 1);
        }
        iVar14 = iVar14 + 1;
        local_res10[0] = (1.0 - local_13c) * fVar15;
        iVar5 = (**(code **)(*param_1 + 0x540))(param_1,local_148,fVar15,local_1a8,local_res10);
        if (iVar5 == 2) {
          return;
        }
        cVar3 = FUN_14238f010(param_1);
        if (cVar3 != '\0') {
          return;
        }
        if (iVar5 == 0) {
          iVar13 = iVar13 + 1;
          (**(code **)(*param_1 + 0x548))(param_1,local_148,&local_1b8,iVar13,local_res10);
          local_160 = local_114;
          *(float *)((longlong)param_1 + 0x1cc) = local_13c;
          local_168 = local_11c;
          plVar9 = (longlong *)(**(code **)(*param_1 + 0x500))(param_1,local_a0,&local_168);
          param_1[0x3a] = *plVar9;
          *(int *)(param_1 + 0x3b) = (int)plVar9[1];
        }
        else if (iVar5 == 1) {
          *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x3f800000;
        }
        if ((1e-06 <= local_res10[0]) &&
           (param_2 = param_2 + local_res10[0], iVar14 <= *(int *)((longlong)param_1 + 0x224))) {
          iVar12 = iVar11;
        }
      }
      iVar11 = iVar12;
      if (param_2 < 1e-06) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 14239b370 FUN_14239b370 body=31 status=ok
// SIG undefined FUN_14239b370(void)

void FUN_14239b370(longlong *param_1)

{
  (**(code **)(*param_1 + 0x470))();
  FUN_142394800(param_1);
  return;
}



// FUNCTION 14239b390 FUN_14239b390 body=137 status=ok
// SIG undefined FUN_14239b390(void)

void FUN_14239b390(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_28 [32];
  
  if (((*(byte *)((longlong)param_1 + 0x24d) & 2) != 0) && (lVar1 = param_1[0x32], lVar1 != 0)) {
    lVar2 = *(longlong *)(lVar1 + 0x1d8);
    param_1[0x3a] = *(longlong *)(lVar1 + 0x1d0);
    param_1[0x3b] = lVar2;
    param_1[0x3c] = *(longlong *)(lVar1 + 0x1e0);
    *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)(lVar1 + 0x1e8);
    return;
  }
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x4a8))(param_1,local_28,param_1 + 0x42);
  lVar1 = plVar3[1];
  param_1[0x3a] = *plVar3;
  param_1[0x3b] = lVar1;
  param_1[0x3c] = plVar3[2];
  *(int *)(param_1 + 0x3d) = (int)plVar3[3];
  return;
}



// FUNCTION 14239b420 FUN_14239b420 body=252 status=ok
// SIG undefined FUN_14239b420(void)

void FUN_14239b420(longlong param_1,ulonglong param_2,undefined1 param_3,char param_4)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_4 != '\0') {
    uVar3 = FUN_1424a1490();
    cVar2 = FUN_14249aa90(uVar3,param_1,param_2 & 0xffffffff,param_3);
    if (cVar2 != '\0') {
      return;
    }
  }
  if (0 < *(int *)(param_1 + 0x1a8)) {
    plVar4 = *(longlong **)(param_1 + 0x1a0);
    uVar5 = 0;
    uVar6 = (longlong)*(int *)(param_1 + 0x1a8) & 0x1fffffffffffffff;
    if (plVar4 + *(int *)(param_1 + 0x1a8) < plVar4) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      do {
        lVar1 = *plVar4;
        if ((lVar1 != 0) &&
           (((*(byte *)(lVar1 + 0x24c) & 1) == 0 ||
            (((((param_2 & 0xffffffff) >> 2 & 1) == 0 || (*(longlong *)(lVar1 + 0x198) != 0)) &&
             ((*(byte *)(lVar1 + 0x24c) & 0x1c) != 0x1c)))))) {
          FUN_140942fb0(lVar1,(uint)param_2 & 0xfffffffb | 2,param_3);
        }
        plVar4 = plVar4 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar6);
    }
  }
  return;
}



// FUNCTION 14239b520 FUN_14239b520 body=1805 status=ok
// SIG undefined FUN_14239b520(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14239b520(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                  float *param_5,char param_6)

{
  undefined1 (*pauVar1) [12];
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [12];
  char cVar7;
  float *pfVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar17 [16];
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
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
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
  undefined4 local_158;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [48];
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  if (((param_2 != (longlong *)0x0) && ((*(byte *)((longlong)param_2 + 0x24c) & 1) == 0)) &&
     (FUN_140942fb0(param_2,0,0), (*(byte *)(param_1 + 0x24c) & 1) != 0)) {
    return;
  }
  bVar2 = *(byte *)(param_1 + 0x24c);
  *(byte *)(param_1 + 0x24c) = bVar2 | 1;
  fVar36 = *(float *)(param_1 + 500);
  fVar38 = *(float *)(param_1 + 0x1f0);
  fVar40 = *(float *)*(undefined1 (*) [12])(param_1 + 0x1ec);
  fVar14 = 0.0;
  fVar15 = *param_5;
  fVar22 = param_5[1];
  fVar19 = param_5[2];
  fVar26 = param_5[3];
  pauVar1 = (undefined1 (*) [12])(param_1 + 0x204);
  fVar47 = *(float *)*pauVar1;
  fVar49 = *(float *)(param_1 + 0x20c);
  fVar48 = *(float *)(param_1 + 0x208);
  auVar6 = *pauVar1;
  local_118._12_4_ = 0;
  local_118._0_12_ = *pauVar1;
  local_128._12_4_ = 0;
  local_128._0_12_ = *(undefined1 (*) [12])(param_1 + 0x1ec);
  local_138 = fVar15;
  fStack_134 = fVar22;
  fStack_130 = fVar19;
  fStack_12c = fVar26;
  if (param_2 == (longlong *)0x0) {
    param_2 = *(longlong **)(param_1 + 400);
    param_3 = *(undefined8 *)(param_1 + 0x198);
    fVar50 = fVar14;
    if (param_2 == (longlong *)0x0) goto LAB_14239bb7b;
  }
  if ((bVar2 & 0x1c) == 0) {
    pfVar8 = (float *)(**(code **)(*param_2 + 0x420))(param_2,local_108,param_3,0);
    fVar23 = fRam0000000146af0838;
    fVar20 = fRam0000000146af0834;
    fVar16 = _DAT_146af0830;
    auVar11._12_4_ = 0;
    auVar11._0_12_ = auVar6;
    fVar14 = *pfVar8;
    fVar21 = pfVar8[1];
    fVar18 = pfVar8[2];
    fVar25 = pfVar8[3];
    auVar12 = *(undefined1 (*) [16])(pfVar8 + 8);
    fVar50 = auVar12._0_4_;
    fVar3 = auVar12._4_4_;
    fVar4 = auVar12._8_4_;
    fVar5 = auVar12._12_4_;
    auVar12 = minps(auVar11,auVar12);
    auVar13._4_4_ = -(uint)(auVar12._4_4_ < fRam0000000146af09c4);
    auVar13._0_4_ = -(uint)(auVar12._0_4_ < _DAT_146af09c0);
    auVar13._8_4_ = -(uint)(auVar12._8_4_ < fRam0000000146af09c8);
    auVar13._12_4_ = -(uint)(auVar12._12_4_ < fRam0000000146af09cc);
    iVar9 = movmskps((int)param_2,auVar13);
    if (iVar9 == 0) {
      fVar29 = fVar22 * fVar14;
      fVar30 = fVar15 * fVar14;
      fVar40 = fVar40 * fVar50;
      fVar38 = fVar38 * fVar3;
      fVar36 = fVar36 * fVar4;
      fVar31 = fVar5 * 0.0;
      fVar23 = fVar15 * fVar21;
      fVar27 = fVar22 * fVar21;
      fVar32 = fVar15 * fVar18;
      fVar33 = fVar19 * fVar18;
      fVar16 = fVar36 * fVar21 - fVar38 * fVar18;
      fVar20 = fVar40 * fVar18 - fVar36 * fVar14;
      fVar24 = fVar38 * fVar14 - fVar40 * fVar21;
      fVar28 = fVar31 * fVar25 - fVar31 * fVar25;
      fVar16 = fVar16 + fVar16;
      fVar20 = fVar20 + fVar20;
      fVar24 = fVar24 + fVar24;
      fVar28 = fVar28 + fVar28;
      fVar40 = (fVar24 * fVar21 - fVar20 * fVar18) + fVar16 * fVar25 + fVar40 + pfVar8[4];
      fVar38 = (fVar16 * fVar18 - fVar24 * fVar14) + fVar20 * fVar25 + fVar38 + pfVar8[5];
      fVar36 = (fVar20 * fVar14 - fVar16 * fVar21) + fVar24 * fVar25 + fVar36 + pfVar8[6];
      fVar15 = fVar26 * fVar14 * _DAT_146af08d0 + fVar15 * fVar25 + fVar19 * fVar21 * _DAT_146af08c0
               + fVar22 * fVar18 * _DAT_146af08b0;
      fVar22 = fVar19 * fVar14 * fRam0000000146af08d4 + fVar22 * fVar25 +
               fVar26 * fVar21 * fRam0000000146af08c4 + fVar32 * fRam0000000146af08b4;
      fVar19 = fVar29 * fRam0000000146af08d8 + fVar19 * fVar25 + fVar23 * fRam0000000146af08c8 +
               fVar26 * fVar18 * fRam0000000146af08b8;
      fVar26 = fVar30 * fRam0000000146af08dc + fVar26 * fVar25 + fVar27 * fRam0000000146af08cc +
               fVar33 * fRam0000000146af08bc;
      fVar14 = (fVar28 * fVar25 - fVar28 * fVar25) + fVar28 * fVar25 + fVar31 + pfVar8[7];
      fVar47 = fVar47 * fVar50;
      fVar48 = fVar48 * fVar3;
      fVar49 = fVar49 * fVar4;
      fVar50 = fVar5 * 0.0;
    }
    else {
      fVar29 = fVar21 + fVar21;
      fVar32 = fVar18 + fVar18;
      fVar24 = pfVar8[4];
      fVar27 = pfVar8[5];
      fVar28 = pfVar8[6];
      fVar34 = fVar14 * (fVar14 + fVar14);
      fVar30 = (fVar14 + fVar14) * fVar25;
      fVar31 = fVar22 + fVar22;
      fVar33 = fVar19 + fVar19;
      fVar44 = (fVar32 * fVar25 + fVar29 * fVar14) * fVar50;
      fVar45 = (fVar30 + fVar32 * fVar21) * fVar3;
      fVar46 = (fVar29 * fVar25 + fVar32 * fVar14) * fVar4;
      fVar35 = fVar3 * (fVar29 * fVar14 - fVar32 * fVar25);
      fVar37 = fVar4 * (fVar32 * fVar21 - fVar30);
      fVar39 = fVar50 * (fVar32 * fVar14 - fVar29 * fVar25);
      fVar30 = (fVar15 + fVar15) * fVar15;
      fVar14 = (float)((uint)((_DAT_146af0830 - (fVar18 * fVar32 + fVar21 * fVar29)) * fVar50) &
                      _DAT_146af0840);
      fVar18 = (float)((uint)((fRam0000000146af0834 - (fVar18 * fVar32 + fVar34)) * fVar3) &
                      uRam0000000146af0844);
      fVar21 = (float)((uint)((fRam0000000146af0838 - (fVar21 * fVar29 + fVar34)) * fVar4) &
                      uRam0000000146af0848);
      fVar25 = (float)((uint)((fRam0000000146af083c - (fVar34 + fVar34)) * fVar5) &
                      uRam0000000146af084c);
      fVar29 = (fVar15 + fVar15) * fVar26;
      fVar41 = (fVar33 * fVar26 + fVar31 * fVar15) * fVar47;
      fVar42 = (fVar29 + fVar33 * fVar22) * fVar48;
      fVar43 = (fVar31 * fVar26 + fVar33 * fVar15) * fVar49;
      fVar32 = fVar48 * (fVar31 * fVar15 - fVar33 * fVar26);
      fVar29 = fVar49 * (fVar33 * fVar22 - fVar29);
      fVar34 = fVar47 * (fVar33 * fVar15 - fVar31 * fVar26);
      fVar15 = (float)((uint)((_DAT_146af0830 - (fVar33 * fVar19 + fVar31 * fVar22)) * fVar47) &
                      _DAT_146af0840);
      fVar19 = (float)((uint)((fRam0000000146af0834 - (fVar33 * fVar19 + fVar30)) * fVar48) &
                      uRam0000000146af0844);
      fVar22 = (float)((uint)((fRam0000000146af0838 - (fVar31 * fVar22 + fVar30)) * fVar49) &
                      uRam0000000146af0848);
      fVar26 = (float)((uint)((fRam0000000146af083c - (fVar30 + fVar30)) * 0.0) &
                      uRam0000000146af084c);
      local_198 = fVar41 * fVar35 + fVar15 * fVar14 + fVar34 * fVar46 + fVar26 * fVar24;
      fStack_194 = fVar41 * fVar18 + fVar15 * fVar44 + fVar34 * fVar37 + fVar26 * fVar27;
      fStack_190 = fVar41 * fVar45 + fVar15 * fVar39 + fVar34 * fVar21 + fVar26 * fVar28;
      fStack_18c = fVar41 * fVar25 + fVar15 * fVar25 + fVar34 * fVar25 +
                   fVar26 * fRam0000000146af083c;
      local_188 = fVar19 * fVar35 + fVar32 * fVar14 + fVar42 * fVar46 + fVar26 * fVar24;
      fStack_184 = fVar19 * fVar18 + fVar32 * fVar44 + fVar42 * fVar37 + fVar26 * fVar27;
      fStack_180 = fVar19 * fVar45 + fVar32 * fVar39 + fVar42 * fVar21 + fVar26 * fVar28;
      fStack_17c = fVar19 * fVar25 + fVar32 * fVar25 + fVar42 * fVar25 +
                   fVar26 * fRam0000000146af083c;
      local_178 = fVar29 * fVar35 + fVar43 * fVar14 + fVar22 * fVar46 + fVar26 * fVar24;
      fStack_174 = fVar29 * fVar18 + fVar43 * fVar44 + fVar22 * fVar37 + fVar26 * fVar27;
      fStack_170 = fVar29 * fVar45 + fVar43 * fVar39 + fVar22 * fVar21 + fVar26 * fVar28;
      fStack_16c = fVar29 * fVar25 + fVar43 * fVar25 + fVar22 * fVar25 +
                   fVar26 * fRam0000000146af083c;
      local_168 = fVar38 * fVar35 + fVar40 * fVar14 + fVar36 * fVar46 +
                  fRam0000000146af083c * fVar24;
      fStack_164 = fVar38 * fVar18 + fVar40 * fVar44 + fVar36 * fVar37 +
                   fRam0000000146af083c * fVar27;
      fStack_160 = fVar38 * fVar45 + fVar40 * fVar39 + fVar36 * fVar21 +
                   fRam0000000146af083c * fVar28;
      fStack_15c = fVar38 * fVar25 + fVar40 * fVar25 + fVar36 * fVar25 +
                   fRam0000000146af083c * fRam0000000146af083c;
      FMatrix::RemoveScaling(&local_198);
      fVar36 = (float)(-(uint)(_DAT_146af09c0 <= fVar50 * fVar47) & (_DAT_146af09b0 ^ (uint)fVar16)
                      ^ _DAT_146af09b0);
      fVar38 = (float)(-(uint)(fRam0000000146af09c4 <= fVar3 * fVar48) &
                       (uRam0000000146af09b4 ^ (uint)fVar20) ^ uRam0000000146af09b4);
      fVar40 = (float)(-(uint)(fRam0000000146af09c8 <= fVar4 * fVar49) &
                       (uRam0000000146af09b8 ^ (uint)fVar23) ^ uRam0000000146af09b8);
      local_198 = local_198 * fVar36;
      fStack_194 = fStack_194 * fVar36;
      fStack_190 = fStack_190 * fVar36;
      fStack_184 = fStack_184 * fVar38;
      fStack_180 = fStack_180 * fVar38;
      local_188 = local_188 * fVar38;
      fStack_174 = fStack_174 * fVar40;
      fStack_170 = fStack_170 * fVar40;
      local_178 = local_178 * fVar40;
      FQuat::FQuat(&local_148,&local_198);
      local_158 = 0x322bcc77;
      auVar17._0_4_ = local_148 * local_148 + fStack_140 * fStack_140;
      auVar17._4_4_ = fStack_144 * fStack_144 + fStack_13c * fStack_13c;
      auVar17._8_4_ = fStack_140 * fStack_140 + local_148 * local_148;
      auVar17._12_4_ = fStack_13c * fStack_13c + fStack_144 * fStack_144;
      fVar15 = auVar17._4_4_ + auVar17._0_4_;
      fVar22 = auVar17._8_4_ + auVar17._4_4_;
      fVar19 = auVar17._12_4_ + auVar17._8_4_;
      fVar14 = auVar17._0_4_ + auVar17._12_4_;
      auVar12._4_4_ = fVar22;
      auVar12._0_4_ = fVar15;
      auVar12._8_4_ = fVar19;
      auVar12._12_4_ = fVar14;
      auVar12 = rsqrtps(auVar17,auVar12);
      fVar36 = auVar12._0_4_;
      fVar38 = auVar12._4_4_;
      fVar40 = auVar12._8_4_;
      fVar26 = auVar12._12_4_;
      fVar36 = (_DAT_146af09a0 - fVar36 * fVar36 * fVar15 * _DAT_146af09a0) * fVar36 + fVar36;
      fVar38 = (fRam0000000146af09a4 - fVar38 * fVar38 * fVar22 * fRam0000000146af09a4) * fVar38 +
               fVar38;
      fVar40 = (fRam0000000146af09a8 - fVar40 * fVar40 * fVar19 * fRam0000000146af09a8) * fVar40 +
               fVar40;
      fVar26 = (fRam0000000146af09ac - fVar26 * fVar26 * fVar14 * fRam0000000146af09ac) * fVar26 +
               fVar26;
      fVar15 = (float)(((uint)(((_DAT_146af09a0 - fVar36 * fVar36 * fVar15 * _DAT_146af09a0) *
                                fVar36 + fVar36) * local_148) ^ _DAT_146af0990) &
                       -(uint)(1e-08 <= fVar15) ^ _DAT_146af0990);
      fVar22 = (float)(((uint)(((fRam0000000146af09a4 -
                                fVar38 * fVar38 * fVar22 * fRam0000000146af09a4) * fVar38 + fVar38)
                              * fStack_144) ^ uRam0000000146af0994) & -(uint)(1e-08 <= fVar22) ^
                      uRam0000000146af0994);
      fVar19 = (float)(((uint)(((fRam0000000146af09a8 -
                                fVar40 * fVar40 * fVar19 * fRam0000000146af09a8) * fVar40 + fVar40)
                              * fStack_140) ^ uRam0000000146af0998) & -(uint)(1e-08 <= fVar19) ^
                      uRam0000000146af0998);
      fVar26 = (float)(((uint)(((fRam0000000146af09ac -
                                fVar26 * fVar26 * fVar14 * fRam0000000146af09ac) * fVar26 + fVar26)
                              * fStack_13c) ^ uRam0000000146af099c) & -(uint)(1e-08 <= fVar14) ^
                      uRam0000000146af099c);
      fVar40 = local_168;
      fVar38 = fStack_164;
      fVar36 = fStack_160;
      fVar14 = 0.0;
      fVar47 = fVar50 * fVar47;
      fVar48 = fVar3 * fVar48;
      fVar49 = fVar4 * fVar49;
      fVar50 = fVar5 * 0.0;
    }
  }
  else {
    local_1a8 = param_3;
    FUN_142385450(param_1,&local_198,&local_138,param_2);
    fVar15 = local_198;
    fVar22 = fStack_194;
    fVar19 = fStack_190;
    fVar26 = fStack_18c;
    fVar40 = local_188;
    fVar38 = fStack_184;
    fVar36 = fStack_180;
    fVar14 = fStack_17c;
    fVar47 = local_178;
    fVar48 = fStack_174;
    fVar49 = fStack_170;
    fVar50 = fStack_16c;
  }
LAB_14239bb7b:
  local_198 = fVar15;
  fStack_194 = fVar22;
  fStack_190 = fVar19;
  fStack_18c = fVar26;
  local_188 = fVar40;
  fStack_184 = fVar38;
  fStack_180 = fVar36;
  fStack_17c = fVar14;
  local_178 = fVar47;
  fStack_174 = fVar48;
  fStack_170 = fVar49;
  fStack_16c = fVar50;
  cVar7 = FUN_141296720(param_1 + 0x210,&local_198,0x322bcc77);
  if ((cVar7 == '\0') || (param_6 != '\0')) {
    *(float *)(param_1 + 0x210) = fVar15;
    *(float *)(param_1 + 0x214) = fVar22;
    *(float *)(param_1 + 0x218) = fVar19;
    *(float *)(param_1 + 0x21c) = fVar26;
    *(float *)(param_1 + 0x220) = fVar40;
    *(float *)(param_1 + 0x224) = fVar38;
    *(float *)(param_1 + 0x228) = fVar36;
    *(float *)(param_1 + 0x22c) = fVar14;
    uVar10 = 1;
    *(float *)(param_1 + 0x230) = fVar47;
    *(float *)(param_1 + 0x234) = fVar48;
    *(float *)(param_1 + 0x238) = fVar49;
    *(float *)(param_1 + 0x23c) = fVar50;
  }
  else {
    param_6 = '\0';
    param_4 = 0;
    uVar10 = 0;
  }
  FUN_142394af0(param_1,uVar10,param_4,param_6);
  return;
}



// FUNCTION 14239bc30 FUN_14239bc30 body=615 status=ok
// SIG undefined FUN_14239bc30(void)

void FUN_14239bc30(longlong *param_1)

{
  uint *puVar1;
  uint *puVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint local_res8;
  uint uStackX_c;
  undefined8 local_res10;
  uint *local_48;
  undefined8 local_40;
  
  lVar5 = (**(code **)(*param_1 + 0x208))();
  if (lVar5 == 0) {
    return;
  }
  if (DAT_146531da8 == DAT_146531dd4) {
    return;
  }
  lVar10 = 0;
  local_48 = (uint *)0x0;
  local_40 = 0;
  FWeakObjectPtr::operator=(&local_res8,lVar5);
  TMultiMap<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,1>_>
  ::MultiFind<FDefaultAllocator>(&DAT_146531da0,&local_res8,&local_48,0);
  puVar2 = local_48;
  lVar12 = (longlong)(int)local_40;
  local_res8 = local_res8 & 0xffffff00;
  AlgoImpl::
  IntroSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>
            (local_48,lVar12,0,&local_res8);
  lVar11 = 0;
  if (DAT_146af0940 < 2) {
    DAT_146531d64 = -1;
  }
  else {
    DAT_146531d64 = DAT_146531d64 + 1;
    if ((DAT_146531d64 < 0) || (DAT_146af0940 <= DAT_146531d64)) {
      DAT_146531d64 = 0;
    }
    local_res8 = *(uint *)(DAT_146af0938 + (longlong)DAT_146531d64 * 8);
    uStackX_c = *(uint *)(DAT_146af0938 + (longlong)DAT_146531d64 * 8 + 4);
    cVar3 = FWeakObjectPtr::IsValid(&local_res8);
    lVar11 = lVar10;
    if (cVar3 != '\0') {
      lVar11 = FWeakObjectPtr::Get(&local_res8);
    }
  }
  lVar8 = DAT_146af0958;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    lVar6 = 4;
    if (DVar4 != DAT_1468c21c0) goto LAB_14239bd74;
  }
  lVar6 = lVar10;
LAB_14239bd74:
  puVar1 = puVar2;
  if (*(int *)(lVar6 + lVar8) != 0) {
    lVar10 = lVar11;
  }
  for (; puVar1 != puVar2 + lVar12 * 2; puVar1 = puVar1 + 2) {
    local_res8 = *puVar1;
    uStackX_c = puVar1[1];
    cVar3 = FWeakObjectPtr::IsValid(&local_res8);
    if ((cVar3 != '\0') &&
       (((lVar11 = FWeakObjectPtr::Get(&local_res8), *(char *)(lVar11 + 0x332) == '\0' ||
         (lVar10 == 0)) || (lVar11 = FWeakObjectPtr::Get(&local_res8), lVar10 == lVar11)))) {
      lVar11 = FWeakObjectPtr::Get(&local_res8);
      if ((*(char *)(lVar11 + 0x328) == '\0') ||
         (lVar11 = FWeakObjectPtr::Get(&local_res8), *(longlong *)(lVar11 + 0x380) == 0)) {
        plVar7 = (longlong *)FWeakObjectPtr::Get(&local_res8);
        lVar11 = *plVar7;
        plVar9 = param_1;
      }
      else {
        plVar7 = (longlong *)FWeakObjectPtr::Get(&local_res8);
        lVar8 = FWeakObjectPtr::Get(&local_res8);
        lVar11 = *plVar7;
        plVar9 = *(longlong **)(lVar8 + 0x380);
      }
      (**(code **)(lVar11 + 0x550))(plVar7,plVar9);
    }
  }
  FWeakObjectPtr::operator=(&local_res8,lVar5);
  local_res10 = CONCAT44(uStackX_c,local_res8);
  TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
  ::Remove(&DAT_146531da0,&local_res10);
  if (puVar2 != (uint *)0x0) {
    FMemory::Free(puVar2);
  }
  return;
}



// FUNCTION 14239bea0 FUN_14239bea0 body=1301 status=ok
// SIG undefined FUN_14239bea0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14239bea0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  DWORD DVar7;
  DWORD *pDVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  undefined1 auStack_148 [32];
  longlong *local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  longlong local_108;
  longlong lStack_100;
  LARGE_INTEGER local_f8;
  longlong local_f0;
  longlong local_e8;
  LARGE_INTEGER local_e0;
  LARGE_INTEGER local_d8;
  LARGE_INTEGER local_d0;
  undefined8 local_c8;
  longlong local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  longlong local_90;
  undefined4 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if (*(longlong *)(param_1 + 0x3a8) != 0) {
    lVar13 = *(longlong *)(param_1 + 0x458);
    if (lVar13 == 0) {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar7 = GetCurrentThreadId(), DVar7 == DAT_1468c21c0)))) {
        uVar3 = *(undefined8 *)(param_1 + 0x3a8);
        FBaseGraphTask::GetSmallTaskAllocator();
        QueryPerformanceCounter(&local_d0);
        FUN_142362de0(uVar3);
        QueryPerformanceCounter(&local_d8);
        DAT_146ac3af4 = DAT_146ac3af4 + (local_d8.s.LowPart - local_d0._0_4_);
      }
      else {
        pDVar8 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar9 = TlsGetValue(*pDVar8);
        plVar10 = (longlong *)0x0;
        if (plVar9 == (longlong *)0x0) {
          plVar9 = (longlong *)operator_new(0x18);
          if (plVar9 != (longlong *)0x0) {
            *plVar9 = 0;
            plVar9[1] = 0;
            *(undefined4 *)(plVar9 + 2) = 0;
            plVar10 = plVar9;
          }
          TlsSetValue(*pDVar8,plVar10);
          plVar9 = plVar10;
        }
        plVar10 = (longlong *)plVar9[1];
        if (plVar10 == (longlong *)0x0) {
          plVar10 = (longlong *)*plVar9;
          if (plVar10 == (longlong *)0x0) {
            plVar10 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar8 + 2);
            plVar9[1] = (longlong)plVar10;
            if (plVar10 == (longlong *)0x0) {
              puVar11 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar9[1] = (longlong)puVar11;
              lVar13 = 0x1f;
              do {
                puVar2 = puVar11 + 0x20;
                *puVar11 = puVar2;
                lVar13 = lVar13 + -1;
                puVar11 = puVar2;
              } while (lVar13 != 0);
              *puVar2 = 0;
              plVar10 = (longlong *)plVar9[1];
            }
            iVar14 = 0x20;
            *(undefined4 *)(plVar9 + 2) = 0x20;
          }
          else {
            iVar14 = 0x20;
            plVar9[1] = (longlong)plVar10;
            *(undefined4 *)(plVar9 + 2) = 0x20;
            *plVar9 = 0;
          }
        }
        else {
          iVar14 = (int)plVar9[2];
        }
        plVar9[1] = *plVar10;
        *(int *)(plVar9 + 2) = iVar14 + -1;
        *plVar10 = (longlong)&PTR_FUN_143f3edd8;
        *(undefined4 *)(plVar10 + 1) = 0xff;
        local_68 = 0;
        local_60 = 0;
        *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
        *(undefined1 *)(plVar10 + 3) = 0;
        *plVar10 = (longlong)&PTR_FUN_145060958;
        plVar10[4] = 0;
        plVar10[2] = *(longlong *)(param_1 + 0x3a8);
        lVar13 = plVar10[4];
        piVar1 = (int *)(lVar13 + 0x48);
        if (lVar13 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        local_e8 = lVar13;
        FUN_140445100(plVar10,0,0xff,1);
        if (lVar13 != 0) {
          LOCK();
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            FGraphEvent::Recycle(local_e8);
          }
        }
      }
    }
    else {
      local_118 = *(undefined4 *)(lVar13 + 0x220);
      uStack_114 = *(undefined4 *)(lVar13 + 0x224);
      local_110 = *(undefined4 *)(lVar13 + 0x228);
      uStack_4c = *(undefined4 *)(lVar13 + 0x22c);
      local_108 = *(longlong *)(lVar13 + 0x210);
      lStack_100 = *(longlong *)(lVar13 + 0x218);
      uVar4 = *(undefined4 *)(lVar13 + 0x2e4);
      uVar5 = *(undefined4 *)(lVar13 + 0x2d8);
      uVar3 = *(undefined8 *)(lVar13 + 0x2d0);
      lVar13 = *(longlong *)(lVar13 + 0x2dc);
      local_58 = local_118;
      uStack_54 = uStack_114;
      uStack_50 = local_110;
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar7 = GetCurrentThreadId(), DVar7 == DAT_1468c21c0)))) {
        local_c8 = *(undefined8 *)(param_1 + 0x3a8);
        local_b8 = local_108;
        lStack_b0 = lStack_100;
        local_a8 = CONCAT44(uStack_114,local_118);
        local_a0 = local_110;
        local_9c = uVar3;
        local_94 = uVar5;
        local_90 = lVar13;
        local_88 = uVar4;
        FBaseGraphTask::GetSmallTaskAllocator();
        QueryPerformanceCounter(&local_e0);
        local_128 = &local_90;
        FUN_142377bd0(local_c8,&local_b8,&local_a8,&local_9c);
        QueryPerformanceCounter(&local_f8);
        DAT_146ac3af4 = DAT_146ac3af4 + (local_f8.s.LowPart - local_e0._0_4_);
      }
      else {
        pDVar8 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar9 = TlsGetValue(*pDVar8);
        plVar10 = (longlong *)0x0;
        if (plVar9 == (longlong *)0x0) {
          plVar9 = (longlong *)operator_new(0x18);
          if (plVar9 != (longlong *)0x0) {
            *plVar9 = 0;
            plVar9[1] = 0;
            *(undefined4 *)(plVar9 + 2) = 0;
            plVar10 = plVar9;
          }
          TlsSetValue(*pDVar8,plVar10);
          plVar9 = plVar10;
        }
        plVar10 = (longlong *)plVar9[1];
        if (plVar10 == (longlong *)0x0) {
          plVar10 = (longlong *)*plVar9;
          if (plVar10 == (longlong *)0x0) {
            plVar10 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar8 + 2);
            plVar9[1] = (longlong)plVar10;
            if (plVar10 == (longlong *)0x0) {
              puVar11 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar9[1] = (longlong)puVar11;
              lVar12 = 0x1f;
              do {
                puVar2 = puVar11 + 0x20;
                *puVar11 = puVar2;
                lVar12 = lVar12 + -1;
                puVar11 = puVar2;
              } while (lVar12 != 0);
              *puVar2 = 0;
              plVar10 = (longlong *)plVar9[1];
            }
            iVar14 = 0x20;
            *(undefined4 *)(plVar9 + 2) = 0x20;
          }
          else {
            iVar14 = 0x20;
            plVar9[1] = (longlong)plVar10;
            *(undefined4 *)(plVar9 + 2) = 0x20;
            *plVar9 = 0;
          }
        }
        else {
          iVar14 = (int)plVar9[2];
        }
        plVar9[1] = *plVar10;
        *(int *)(plVar9 + 2) = iVar14 + -1;
        *plVar10 = (longlong)&PTR_FUN_143f3edd8;
        *(undefined4 *)(plVar10 + 1) = 0xff;
        local_78 = 0;
        local_70 = 0;
        *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
        *plVar10 = (longlong)&PTR_FUN_145059d80;
        *(undefined1 *)(plVar10 + 0xc) = 0;
        plVar10[0xd] = 0;
        plVar10[2] = *(longlong *)(param_1 + 0x3a8);
        plVar10[4] = local_108;
        plVar10[5] = lStack_100;
        plVar10[6] = CONCAT44(uStack_114,local_118);
        *(undefined8 *)((longlong)plVar10 + 0x3c) = uVar3;
        plVar10[9] = lVar13;
        *(undefined4 *)(plVar10 + 7) = local_110;
        *(undefined4 *)((longlong)plVar10 + 0x44) = uVar5;
        *(undefined4 *)(plVar10 + 10) = uVar4;
        lVar13 = plVar10[0xd];
        piVar1 = (int *)(lVar13 + 0x48);
        if (lVar13 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        local_f0 = lVar13;
        FUN_141c2c150(local_118,0,0xff,1);
        if (lVar13 != 0) {
          LOCK();
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            FGraphEvent::Recycle(local_f0);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14239c3c0 FUN_14239c3c0 body=2838 status=ok
// SIG undefined FUN_14239c3c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte FUN_14239c3c0(longlong *param_1,longlong *param_2,undefined1 param_3,longlong param_4)

{
  ulonglong uVar1;
  undefined1 uVar2;
  char cVar3;
  byte bVar4;
  DWORD DVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint uVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  undefined1 *puVar21;
  longlong *plVar22;
  undefined1 *puVar23;
  byte bVar24;
  longlong *plVar25;
  bool bVar26;
  undefined1 auStack_648 [32];
  longlong *local_628;
  undefined4 local_620;
  undefined1 *local_618;
  undefined8 *local_610;
  undefined1 local_608;
  undefined1 local_606 [6];
  undefined8 local_600;
  longlong *local_5f8;
  longlong local_5f0;
  undefined8 local_5e8;
  undefined4 local_5e0;
  undefined4 local_5dc;
  undefined4 local_5d8;
  longlong local_5d0;
  longlong local_5c8;
  longlong lStack_5c0;
  longlong local_5b8;
  longlong lStack_5b0;
  undefined4 local_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  longlong local_598;
  longlong lStack_590;
  longlong local_588 [24];
  ulonglong local_4c8;
  ulonglong local_4c0;
  undefined1 local_4b8 [480];
  undefined1 *local_2d8;
  undefined8 local_2d0;
  undefined1 local_2c8 [21];
  undefined1 local_2b3;
  longlong local_280;
  longlong local_260;
  undefined1 local_248 [480];
  undefined1 *local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  lVar10 = DAT_146af0880;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_648;
  local_608 = param_3;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  plVar22 = (longlong *)0x0;
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    plVar20 = (longlong *)&DAT_00000004;
    if (DVar5 != DAT_1468c21c0) goto LAB_14239c438;
  }
  plVar20 = plVar22;
LAB_14239c438:
  if (*(int *)((longlong)plVar20 + lVar10) == 1) {
    bVar24 = 0;
  }
  else {
    bVar24 = 1;
    iVar9 = 0;
    if (((*(byte *)((longlong)param_1 + 0x2ef) & 1) == 0) ||
       (iVar6 = (**(code **)(*param_1 + 0x4e8))(param_1), uVar2 = local_608,
       (iVar6 - 1U & 0xfffffffd) != 0)) {
      if (0 < (int)param_1[0x75]) {
        FUN_1423863d0(param_1,param_3,0);
      }
    }
    else {
      local_5f8 = (longlong *)param_1[0x23];
      bVar24 = 0;
      if (local_5f8 != (longlong *)0x0) {
        if ((*(byte *)((longlong)local_5f8 + 0x93) & 8) != 0) {
          local_600 = (longlong *)local_5f8[0x2d];
          plVar20 = param_1 + 0x42;
          local_5c8 = *plVar20;
          lStack_5c0 = param_1[0x43];
          local_5b8 = param_1[0x44];
          lStack_5b0 = param_1[0x45];
          local_5a8 = (undefined4)param_1[0x46];
          uStack_5a4 = *(undefined4 *)((longlong)param_1 + 0x234);
          uStack_5a0 = (undefined4)param_1[0x47];
          uStack_59c = *(undefined4 *)((longlong)param_1 + 0x23c);
          if ((param_2 != (longlong *)0x0) && (plVar15 = plVar22, 0 < (int)param_2[1])) {
            do {
              FUN_1423847c0(param_1,(longlong)(int)plVar15 * 0xa0 + *param_2,uVar2);
              uVar18 = (int)plVar15 + 1;
              plVar15 = (longlong *)(ulonglong)uVar18;
            } while ((int)uVar18 < (int)param_2[1]);
          }
          plVar15 = local_5f8;
          iVar6 = *(int *)((longlong)param_1 + 0xc);
          local_2d8 = (undefined1 *)0x0;
          local_2d0 = 0;
          plVar11 = plVar22;
          if (iVar6 < (int)DAT_1469e91c4) {
            uVar16 = iVar6 >> 0x1f & 0xffff;
            uVar18 = iVar6 + uVar16;
            plVar11 = (longlong *)
                      (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar18 >> 0x10) * 8) +
                      (longlong)(int)((uVar18 & 0xffff) - uVar16) * 0x18);
          }
          if ((*(uint *)(plVar11 + 1) >> 0x1d & 1) == 0) {
            if (((param_4 == 0) || (DAT_146531d68 == 0)) ||
               (cVar3 = FUN_141296720(&local_5c8,plVar20,0x38d1b717), cVar3 == '\0')) {
              lVar10 = (**(code **)(*plVar15 + 0x148))(plVar15);
              local_5f0 = 0;
              local_5e8 = 0;
              local_5d0 = lVar10;
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x38) < DAT_146af0a20) &&
                 (_Init_thread_header(&DAT_146af0a20), DAT_146af0a20 == -1)) {
                FName::FName(&DAT_146af0a18,"UpdateOverlaps",1);
                _Init_thread_footer(&DAT_146af0a20);
              }
              local_628 = plVar22;
              if (local_600 == param_1) {
                local_628 = plVar15;
              }
              FUN_1422ffb20(local_2c8,DAT_146af0a18,local_606,0);
              local_2b3 = 1;
              FUN_1426d3dd0(&local_5c8);
              FUN_1426ea8d0(&local_5c8,2);
              (**(code **)(*param_1 + 0x740))(param_1,local_2c8,&local_5c8);
              local_5e0 = (undefined4)param_1[0x44];
              local_5dc = *(undefined4 *)((longlong)param_1 + 0x224);
              local_5d8 = (undefined4)param_1[0x45];
              local_598 = *plVar20;
              lStack_590 = param_1[0x43];
              local_620 = (**(code **)(*param_1 + 0x4f8))(param_1);
              local_610 = &DAT_146aefe88;
              local_618 = local_2c8;
              local_628 = &local_598;
              (**(code **)(*param_1 + 0x558))(param_1,&local_5f0,lVar10,&local_5e0);
              plVar20 = plVar22;
              plVar15 = plVar22;
              if (0 < (int)local_5e8) {
                do {
                  puVar21 = (undefined1 *)(local_5f0 + (longlong)plVar20);
                  plVar11 = (longlong *)FWeakObjectPtr::Get(puVar21 + 8);
                  if (((plVar11 != (longlong *)0x0) && (plVar11 != param_1)) &&
                     ((*(byte *)((longlong)plVar11 + 0x2ef) & 1) != 0)) {
                    lVar10 = FUN_1423111a0(puVar21);
                    if ((((((*(byte *)((longlong)param_1 + 0x2ef) & 1) == 0) ||
                          ((*(byte *)((longlong)plVar11 + 0x2ef) & 1) == 0)) || (lVar10 == 0)) ||
                        ((local_5d0 == 0 ||
                         (lVar12 = UWorld::GetWorldSettings(local_5d0,0,1), lVar10 == lVar12)))) ||
                       ((*(byte *)(lVar10 + 0x93) & 8) == 0)) {
                      bVar26 = true;
                    }
                    else {
                      bVar26 = false;
                    }
                    if (!bVar26) {
                      puVar21 = (undefined1 *)
                                FUN_14237ded0(local_248,plVar11,*(undefined4 *)(puVar21 + 0x10));
                      uVar1 = local_2d0;
                      lVar10 = (longlong)(int)local_2d0;
                      iVar6 = (int)local_2d0 + 1;
                      local_2d0 = CONCAT44(local_2d0._4_4_,iVar6);
                      if (local_2d0._4_4_ < iVar6) {
                        FUN_1423960e0(local_4b8,uVar1 & 0xffffffff);
                      }
                      puVar23 = local_4b8;
                      if (local_2d8 != (undefined1 *)0x0) {
                        puVar23 = local_2d8;
                      }
                      puVar23 = puVar23 + lVar10 * 0xa0;
                      *puVar23 = *puVar21;
                      FUN_140729f20(puVar23 + 8);
                      *(undefined4 *)(puVar23 + 0x98) = *(undefined4 *)(puVar21 + 0x98);
                      *(undefined4 *)(puVar23 + 0x9c) = *(undefined4 *)(puVar21 + 0x9c);
                    }
                  }
                  uVar18 = (int)plVar15 + 1;
                  plVar20 = plVar20 + 3;
                  plVar15 = (longlong *)(ulonglong)uVar18;
                } while ((int)uVar18 < (int)local_5e8);
              }
              if (local_260 != 0) {
                FMemory::Free();
              }
              if (local_280 != 0) {
                FMemory::Free();
              }
              plVar15 = local_5f8;
              if (local_5f0 != 0) {
                FMemory::Free();
                plVar15 = local_5f8;
              }
            }
            else {
              FUN_14237c3d0(local_4b8,param_4);
              if (((param_2 != (longlong *)0x0) && (0 < (int)param_2[1])) &&
                 (plVar20 = plVar22, 0 < (int)local_2d0)) {
                do {
                  iVar6 = (int)plVar20;
                  puVar21 = local_4b8;
                  if (local_2d8 != (undefined1 *)0x0) {
                    puVar21 = local_2d8;
                  }
                  lVar10 = FWeakObjectPtr::Get(puVar21 + (longlong)iVar6 * 0xa0 + 0x7c);
                  if ((((lVar10 == 0) || ((*(byte *)(lVar10 + 0x2ef) & 1) == 0)) ||
                      ((*(byte *)((longlong)param_1 + 0x2ef) & 1) == 0)) ||
                     (iVar7 = USceneComponent::GetCollisionResponseToComponent(param_1,lVar10),
                     iVar7 < 1)) {
                    iVar7 = ((int)local_2d0 - iVar6) + -1;
                    if (0 < iVar7) {
                      iVar7 = 1;
                    }
                    if (iVar7 != 0) {
                      puVar21 = local_4b8;
                      if (local_2d8 != (undefined1 *)0x0) {
                        puVar21 = local_2d8;
                      }
                      _guard_xfg_dispatch_icall_nop
                                (puVar21 + (longlong)iVar6 * 0xa0,
                                 puVar21 + (longlong)((int)local_2d0 - iVar7) * 0xa0,
                                 (longlong)iVar7 * 0xa0);
                    }
                    local_2d0 = CONCAT44(local_2d0._4_4_,(int)local_2d0 + -1);
                  }
                  else {
                    plVar20 = (longlong *)(ulonglong)(iVar6 + 1);
                  }
                } while ((int)plVar20 < (int)local_2d0);
              }
            }
          }
          plVar20 = plVar22;
          param_3 = local_608;
          if (0 < (int)param_1[0x75]) {
            local_68 = (undefined1 *)0x0;
            local_60 = 0;
            if (local_600 == param_1) {
              FWeakObjectPtr::operator=(&local_600,plVar15);
              puVar21 = (undefined1 *)param_1[0x74];
              puVar23 = puVar21 + (longlong)(int)param_1[0x75] * 0xa0;
              uVar1 = local_60;
              for (; local_60 = uVar1, puVar21 != puVar23; puVar21 = puVar21 + 0xa0) {
                if (((int)local_600 != *(int *)(puVar21 + 0x74)) ||
                   (local_600._4_4_ = (int)((ulonglong)local_600 >> 0x20),
                   bVar26 = local_600._4_4_ != *(int *)(puVar21 + 0x78), bVar26)) {
                  local_60._0_4_ = (int)uVar1;
                  lVar10 = (longlong)(int)local_60;
                  local_60._0_4_ = (int)local_60 + 1;
                  local_60._4_4_ = (int)(uVar1 >> 0x20);
                  if (local_60._4_4_ < (int)local_60) {
                    FUN_1423960e0(local_248,uVar1 & 0xffffffff);
                  }
                  puVar19 = local_248;
                  if (local_68 != (undefined1 *)0x0) {
                    puVar19 = local_68;
                  }
                  puVar19 = puVar19 + lVar10 * 0xa0;
                  *puVar19 = *puVar21;
                  FUN_140729f20(puVar19 + 8,puVar21 + 8);
                  *(undefined4 *)(puVar19 + 0x98) = *(undefined4 *)(puVar21 + 0x98);
                  *(undefined4 *)(puVar19 + 0x9c) = *(undefined4 *)(puVar21 + 0x9c);
                }
                uVar1 = local_60;
              }
            }
            else {
              FUN_14237c3d0(local_248,param_1 + 0x74);
            }
            puVar21 = local_68;
            plVar15 = plVar22;
            iVar6 = (int)local_60;
            if (0 < (int)local_60) {
              plVar11 = plVar22;
              plVar25 = plVar22;
              iVar7 = (int)local_2d0;
              do {
                iVar8 = (int)plVar25;
                if (iVar7 < 1) break;
                puVar23 = local_248;
                if (puVar21 != (undefined1 *)0x0) {
                  puVar23 = puVar21;
                }
                puVar19 = local_4b8;
                if (local_2d8 != (undefined1 *)0x0) {
                  puVar19 = local_2d8;
                }
                if (puVar19 != puVar19 + (longlong)iVar7 * 0xa0) {
                  puVar17 = puVar19;
                  do {
                    if (((*(int *)(puVar23 + 0x7c + (longlong)plVar11) == *(int *)(puVar17 + 0x7c))
                        && (*(int *)(puVar23 + 0x80 + (longlong)plVar11) == *(int *)(puVar17 + 0x80)
                           )) && (*(int *)(puVar23 + 0x68 + (longlong)plVar11) ==
                                  *(int *)(puVar17 + 0x68))) {
                      iVar13 = (int)(((longlong)puVar17 - (longlong)puVar19) / 0xa0);
                      if (iVar13 != -1) {
                        iVar14 = (iVar7 - iVar13) + -1;
                        if (0 < iVar14) {
                          iVar14 = 1;
                        }
                        if (iVar14 != 0) {
                          _guard_xfg_dispatch_icall_nop
                                    (puVar19 + (longlong)iVar13 * 0xa0,
                                     puVar19 + (longlong)(iVar7 - iVar14) * 0xa0,
                                     (longlong)iVar14 * 0xa0);
                          puVar21 = local_68;
                          iVar6 = (int)local_60;
                          iVar7 = (int)local_2d0;
                        }
                        local_2d0 = CONCAT44(local_2d0._4_4_,iVar7 + -1);
                        iVar13 = (iVar6 - iVar8) + -1;
                        if (0 < iVar13) {
                          iVar13 = 1;
                        }
                        iVar7 = iVar7 + -1;
                        if (iVar13 != 0) {
                          puVar23 = local_248;
                          if (puVar21 != (undefined1 *)0x0) {
                            puVar23 = puVar21;
                          }
                          _guard_xfg_dispatch_icall_nop
                                    (puVar23 + (longlong)iVar8 * 0xa0,
                                     puVar23 + (longlong)(iVar6 - iVar13) * 0xa0,
                                     (longlong)iVar13 * 0xa0);
                          puVar21 = local_68;
                          iVar6 = (int)local_60;
                          iVar7 = (int)local_2d0;
                        }
                        iVar6 = iVar6 + -1;
                        iVar8 = iVar8 + -1;
                        local_60 = CONCAT44(local_60._4_4_,iVar6);
                        plVar11 = plVar11 + -0x14;
                      }
                      break;
                    }
                    puVar17 = puVar17 + 0xa0;
                  } while (puVar17 != puVar19 + (longlong)iVar7 * 0xa0);
                }
                plVar25 = (longlong *)(ulonglong)(iVar8 + 1U);
                plVar11 = plVar11 + 0x14;
              } while ((int)(iVar8 + 1U) < iVar6);
            }
            while ((iVar7 = (int)plVar15, -1 < iVar7 && (iVar7 < iVar6))) {
              puVar23 = local_248;
              if (puVar21 != (undefined1 *)0x0) {
                puVar23 = puVar21;
              }
              puVar23 = puVar23 + (longlong)iVar7 * 0xa0;
              cVar3 = FWeakObjectPtr::IsValid(puVar23 + 0x7c);
              if (cVar3 == '\0') {
                iVar6 = *(int *)((longlong)param_1 + 0x3ac);
                iVar8 = FUN_14237ca10(param_1 + 0x74,puVar23);
                if (iVar8 != -1) {
                  plVar15 = param_1 + 0x74;
                  iVar13 = (int)param_1[0x75];
                  iVar14 = (iVar13 - iVar8) + -1;
                  if (0 < iVar14) {
                    iVar14 = 1;
                  }
                  if (iVar14 != 0) {
                    _guard_xfg_dispatch_icall_nop
                              ((void *)((longlong)iVar8 * 0xa0 + *plVar15),
                               (void *)((longlong)(iVar13 - iVar14) * 0xa0 + *plVar15),
                               (longlong)iVar14 * 0xa0);
                    iVar13 = (int)param_1[0x75];
                  }
                  *(int *)(param_1 + 0x75) = iVar13 + -1;
                  if (0x17 < iVar6) {
                    TArray<FRemnantQuestEntityInfo,FDefaultAllocator>::ResizeShrink(plVar15);
                  }
                }
              }
              else {
                FUN_142389e30(param_1,puVar23,local_608,0);
              }
              puVar21 = local_68;
              iVar6 = (int)local_60;
              plVar15 = (longlong *)(ulonglong)(iVar7 + 1);
            }
            param_3 = local_608;
            if (puVar21 != (undefined1 *)0x0) {
              FMemory::Free(puVar21);
              param_3 = local_608;
            }
          }
          while ((iVar6 = (int)plVar20, -1 < iVar6 && (iVar6 < (int)local_2d0))) {
            puVar21 = local_4b8;
            if (local_2d8 != (undefined1 *)0x0) {
              puVar21 = local_2d8;
            }
            FUN_1423847c0(param_1,puVar21 + (longlong)iVar6 * 0xa0,param_3);
            plVar20 = (longlong *)(ulonglong)(iVar6 + 1);
          }
          if (local_2d8 != (undefined1 *)0x0) {
            FMemory::Free();
          }
        }
        bVar24 = 0;
      }
    }
    iVar6 = (int)param_1[0x35];
    local_4c8 = 0;
    local_4c0 = 0;
    if (iVar6 != 0) {
      plVar20 = plVar22;
      if (0 < iVar6) {
        FUN_140615c30(local_588,iVar6);
        plVar20 = (longlong *)(local_4c0 & 0xffffffff);
      }
      plVar15 = local_588;
      if (local_4c8 != 0) {
        plVar15 = plVar22;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(((ulonglong)plVar15 | local_4c8) + (longlong)(int)plVar20 * 8),
                 (void *)param_1[0x34],(longlong)iVar6 << 3);
      iVar9 = (int)local_4c0 + iVar6;
      local_4c0 = CONCAT44(local_4c0._4_4_,iVar9);
    }
    plVar20 = local_588;
    if (local_4c8 != 0) {
      plVar20 = plVar22;
    }
    plVar20 = (longlong *)((ulonglong)plVar20 | local_4c8);
    plVar15 = (longlong *)((longlong)iVar9 & 0x1fffffffffffffff);
    if (plVar20 + iVar9 < plVar20) {
      plVar15 = plVar22;
    }
    if (plVar15 != (longlong *)0x0) {
      do {
        plVar11 = (longlong *)*plVar20;
        if (plVar11 != (longlong *)0x0) {
          bVar4 = (**(code **)(*plVar11 + 0x488))(plVar11,0,param_3,0);
          bVar24 = bVar24 & bVar4;
        }
        plVar20 = plVar20 + 1;
        plVar22 = (longlong *)((longlong)plVar22 + 1);
      } while (plVar22 != plVar15);
    }
    if (*(char *)((longlong)param_1 + 0x24c) < '\0') {
      (**(code **)(*param_1 + 0x4c8))(param_1,param_3);
      bVar24 = 0;
    }
    if (local_4c8 != 0) {
      FMemory::Free(local_4c8);
    }
  }
  return bVar24;
}



// FUNCTION 14239cee0 FUN_14239cee0 body=357 status=ok
// SIG undefined FUN_14239cee0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte FUN_14239cee0(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  byte bVar7;
  longlong *plVar8;
  undefined1 auStack_128 [32];
  undefined1 local_108 [192];
  ulonglong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  iVar1 = (int)param_1[0x35];
  puVar6 = (undefined1 *)0x0;
  local_48 = 0;
  local_40 = 0;
  bVar7 = 1;
  local_40._0_4_ = 0;
  iVar4 = (int)local_40;
  if (iVar1 != 0) {
    if (0 < iVar1) {
      FUN_140615c30(local_108,iVar1);
    }
    puVar5 = local_108;
    if (local_48 != 0) {
      puVar5 = puVar6;
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(((ulonglong)puVar5 | local_48) + (longlong)(int)local_40 * 8),
               (void *)param_1[0x34],(longlong)iVar1 << 3);
    iVar4 = (int)local_40 + iVar1;
    local_40 = CONCAT44(local_40._4_4_,iVar4);
  }
  puVar5 = local_108;
  if (local_48 != 0) {
    puVar5 = puVar6;
  }
  plVar8 = (longlong *)((ulonglong)puVar5 | local_48);
  puVar5 = (undefined1 *)((longlong)iVar4 & 0x1fffffffffffffff);
  if (plVar8 + iVar4 < plVar8) {
    puVar5 = puVar6;
  }
  if (puVar5 != (undefined1 *)0x0) {
    do {
      plVar2 = (longlong *)*plVar8;
      if (plVar2 != (longlong *)0x0) {
        bVar3 = (**(code **)(*plVar2 + 0x488))(plVar2,0,param_3,0);
        bVar7 = bVar7 & bVar3;
      }
      plVar8 = plVar8 + 1;
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar5);
  }
  if (*(char *)((longlong)param_1 + 0x24c) < '\0') {
    (**(code **)(*param_1 + 0x4c8))(param_1,param_3);
    bVar7 = 0;
  }
  if (local_48 != 0) {
    FMemory::Free(local_48);
  }
  return bVar7;
}



// FUNCTION 14239d060 FUN_14239d060 body=469 status=ok
// SIG undefined FUN_14239d060(void)

void FUN_14239d060(longlong param_1,char param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 local_res8 [8];
  
  if (*(longlong *)(param_1 + 0x118) != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    lVar5 = 0;
    lVar8 = lVar5;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar7;
      lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18;
    }
    if (((*(uint *)(lVar8 + 8) >> 0x1d & 1) == 0) && (0 < *(int *)(param_1 + 0x188))) {
      plVar6 = (longlong *)(param_1 + 0x180);
      cVar2 = FWeakObjectPtr::IsValid(*plVar6 + (longlong)(*(int *)(param_1 + 0x188) + -1) * 8);
      if ((cVar2 != '\0') && (1 < *(int *)(param_1 + 0x188))) {
        lVar5 = FWeakObjectPtr::Get(*plVar6 + (longlong)(*(int *)(param_1 + 0x188) + -1) * 8);
      }
      uVar9 = (ulonglong)*(int *)(param_1 + 0x188);
      if (0 < *(int *)(param_1 + 0x188)) {
        lVar8 = uVar9 << 3;
        do {
          lVar8 = lVar8 + -8;
          uVar3 = (int)uVar9 - 1;
          uVar9 = (ulonglong)uVar3;
          cVar2 = FWeakObjectPtr::IsValid(*plVar6 + lVar8);
          if (cVar2 == '\0') {
            iVar1 = *(int *)(param_1 + 0x188);
            iVar4 = (iVar1 - uVar3) + -1;
            if (0 < iVar4) {
              iVar4 = 1;
            }
            if (iVar4 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*plVar6 + lVar8),(void *)(*plVar6 + (longlong)(iVar1 - iVar4) * 8)
                         ,(longlong)iVar4 << 3);
              iVar1 = *(int *)(param_1 + 0x188);
            }
            *(int *)(param_1 + 0x188) = iVar1 + -1;
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar6);
          }
        } while (0 < (int)uVar3);
        if (0 < *(int *)(param_1 + 0x188)) {
          local_res8[0] = 0;
          FUN_14237ca80(*plVar6,(longlong)*(int *)(param_1 + 0x188),0,local_res8);
          if ((param_2 != '\0') &&
             (lVar8 = FWeakObjectPtr::Get(*plVar6 + (longlong)(*(int *)(param_1 + 0x188) + -1) * 8),
             lVar5 != lVar8)) {
            plVar6 = (longlong *)
                     FWeakObjectPtr::Get(*plVar6 + -8 + (longlong)*(int *)(param_1 + 0x188) * 8);
            (**(code **)(*plVar6 + 0x728))(plVar6,*(undefined8 *)(param_1 + 0x118));
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14239d240 FUN_14239d240 body=146 status=ok
// SIG undefined FUN_14239d240(void)

void FUN_14239d240(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x350);
  if (lVar1 != 0) {
    fVar2 = *(float *)(param_1 + 0x340);
    fVar4 = (*(float *)(param_1 + 0x230) - fVar2) / *(float *)(param_1 + 0x230);
    fVar3 = (*(float *)(param_1 + 0x234) - fVar2) / *(float *)(param_1 + 0x234);
    if (fVar4 <= DAT_1468b5d90) {
      fVar4 = DAT_1468b5d90;
    }
    if (fVar3 <= DAT_1468b5d94) {
      fVar3 = DAT_1468b5d94;
    }
    fVar2 = (*(float *)(param_1 + 0x238) - fVar2) / *(float *)(param_1 + 0x238);
    if (fVar2 <= DAT_1468b5d98) {
      fVar2 = DAT_1468b5d98;
    }
    *(ulonglong *)(lVar1 + 0x710) = CONCAT44(fVar3,fVar4);
    *(float *)(lVar1 + 0x718) = fVar2;
  }
  FUN_14239d320();
  return;
}



// FUNCTION 14239d2e0 FUN_14239d2e0 body=56 status=ok
// SIG undefined FUN_14239d2e0(void)

void FUN_14239d2e0(longlong *param_1)

{
  undefined4 uVar1;
  
  if (param_1[0x69] != 0) {
    uVar1 = (**(code **)(*param_1 + 0x550))();
    *(undefined4 *)(param_1[0x69] + 0x710) = uVar1;
  }
  FUN_14239d320(param_1);
  return;
}



// FUNCTION 14239d320 FUN_14239d320 body=105 status=ok
// SIG undefined FUN_14239d320(void)

void FUN_14239d320(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x2d0);
  if (lVar2 != 0) {
    fVar3 = *(float *)(param_1 + 0x238);
    fVar1 = *(float *)(param_1 + 0x2f8);
    *(ulonglong *)(lVar2 + 0x1ec) =
         CONCAT44(*(float *)(param_1 + 0x2f4) / *(float *)(param_1 + 0x234),
                  *(float *)(param_1 + 0x2f0) / *(float *)(param_1 + 0x230));
    *(float *)(lVar2 + 500) = fVar1 / fVar3;
  }
  return;
}



// FUNCTION 14239d3b0 FUN_14239d3b0 body=692 status=ok
// SIG undefined FUN_14239d3b0(void)

void FUN_14239d3b0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  BOOL BVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_38;
  undefined8 local_30;
  
  if ((*(longlong *)(param_1 + 0x1b8) != 0) &&
     ((DAT_146b09470 == 0 ||
      ((((*(int *)(DAT_146b09470 + 0x68) < 1 &&
         (*(int *)(DAT_146b09470 + 0xa0) - *(int *)(DAT_146b09470 + 0xcc) < 1)) &&
        (*(int *)(DAT_146b09470 + 0x10) < 1)) && (*(int *)(DAT_146b09470 + 0x6c) < 1)))))) {
    iVar6 = DAT_146af08e8 + -1;
    local_38 = 0;
    local_30 = 0;
    if (-1 < iVar6) {
      lVar7 = (longlong)iVar6 * 8;
      lVar9 = (longlong)DAT_146af08e8 << 3;
      lVar8 = lVar7;
      do {
        lVar1 = *(longlong *)(lVar8 + DAT_146af08e0);
        lVar5 = *(longlong *)(lVar1 + 0x120);
        if (lVar5 == 0) {
          lVar5 = FUN_1423407b0(lVar1);
        }
        uVar2 = local_30;
        if (lVar5 == param_1) {
          lVar5 = (longlong)(int)local_30;
          iVar3 = (int)local_30 + 1;
          local_30 = CONCAT44(local_30._4_4_,iVar3);
          if (local_30._4_4_ < iVar3) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (&local_38,uVar2 & 0xffffffff);
          }
          *(longlong *)(local_38 + lVar5 * 8) = lVar1;
          iVar3 = (DAT_146af08e8 - iVar6) + -1;
          if (iVar3 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar7 + DAT_146af08e0),(void *)(lVar9 + DAT_146af08e0),
                       (longlong)iVar3 << 3);
          }
          DAT_146af08e8 = DAT_146af08e8 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&DAT_146af08e0);
        }
        lVar9 = lVar9 + -8;
        lVar7 = lVar7 + -8;
        lVar8 = lVar8 + -8;
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
    }
    if (0 < DAT_146af08f8) {
      BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af0900);
      if (BVar4 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af0900);
      }
      iVar6 = DAT_146af08f8 + -1;
      if (-1 < iVar6) {
        lVar7 = (longlong)iVar6 * 8;
        lVar9 = (longlong)DAT_146af08f8 << 3;
        lVar8 = lVar7;
        do {
          lVar1 = *(longlong *)(lVar8 + DAT_146af08f0);
          lVar5 = *(longlong *)(lVar1 + 0x120);
          if (lVar5 == 0) {
            lVar5 = FUN_1423407b0(lVar1);
          }
          uVar2 = local_30;
          if (lVar5 == param_1) {
            lVar5 = (longlong)(int)local_30;
            iVar3 = (int)local_30 + 1;
            local_30 = CONCAT44(local_30._4_4_,iVar3);
            if (local_30._4_4_ < iVar3) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (&local_38,uVar2 & 0xffffffff);
            }
            *(longlong *)(local_38 + lVar5 * 8) = lVar1;
            iVar3 = (DAT_146af08f8 - iVar6) + -1;
            if (iVar3 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(lVar7 + DAT_146af08f0),(void *)(lVar9 + DAT_146af08f0),
                         (longlong)iVar3 << 3);
            }
            DAT_146af08f8 = DAT_146af08f8 + -1;
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&DAT_146af08f0);
          }
          lVar9 = lVar9 + -8;
          lVar7 = lVar7 + -8;
          lVar8 = lVar8 + -8;
          iVar6 = iVar6 + -1;
        } while (-1 < iVar6);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146af0900);
    }
    (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x98))
              (*(longlong **)(param_1 + 0x1b8),&local_38,param_2,param_3);
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14239d6b0 FUN_14239d6b0 body=283 status=ok
// SIG undefined FUN_14239d6b0(void)

void FUN_14239d6b0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 local_res10 [8];
  
  if ((param_2 != 0) &&
     (((lVar2 = *(longlong *)(param_2 + 0x18),
       plVar4 = (longlong *)FName::FName(local_res10,L"RelativeLocation",1), lVar2 == *plVar4 ||
       (lVar2 = *(longlong *)(param_2 + 0x18),
       plVar4 = (longlong *)FName::FName(local_res10,L"RelativeRotation",1), lVar2 == *plVar4)) ||
      (lVar2 = *(longlong *)(param_2 + 0x18),
      plVar4 = (longlong *)FName::FName(local_res10,L"RelativeScale3D",1), lVar2 == *plVar4)))) {
    FUN_142387230(param_1);
    FUN_140942fb0(param_1,0,0);
    if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
      if ((int)param_1[0x55] < 1) {
                    /* WARNING: Could not recover jumptable at 0x00014239d776. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x488))(param_1,0,1,0);
        return;
      }
      lVar2 = *(longlong *)(param_1[0x54] + -8 + (longlong)(int)param_1[0x55] * 8);
      iVar1 = *(int *)(lVar2 + 0x10);
      *(byte *)(lVar2 + 0x1b8) = *(byte *)(lVar2 + 0x1b8) | 2;
      *(undefined4 *)(lVar2 + 0x10) = 1;
      uVar3 = *(undefined4 *)(lVar2 + 0x10);
      if (iVar1 == 3) {
        uVar3 = 3;
      }
      *(undefined4 *)(lVar2 + 0x74) = 0xffffffff;
      *(undefined4 *)(lVar2 + 0x10) = uVar3;
    }
  }
  return;
}



// FUNCTION 14239d7d0 FUN_14239d7d0 body=157 status=ok
// SIG undefined FUN_14239d7d0(void)

float * FUN_14239d7d0(longlong param_1,float *param_2,float *param_3,byte param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
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
  longlong lVar20;
  
  fVar5 = param_3[1];
  fVar6 = param_3[2];
  fVar7 = *param_3;
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 1.0;
  lVar20 = (ulonglong)param_4 * 0x40;
  pfVar1 = (float *)(lVar20 + 0xc80 + param_1);
  fVar8 = pfVar1[1];
  fVar9 = pfVar1[2];
  fVar10 = pfVar1[3];
  pfVar2 = (float *)(lVar20 + 0xc70 + param_1);
  fVar11 = pfVar2[1];
  fVar12 = pfVar2[2];
  fVar13 = pfVar2[3];
  pfVar3 = (float *)(lVar20 + 0xc60 + param_1);
  fVar14 = pfVar3[1];
  fVar15 = pfVar3[2];
  fVar16 = pfVar3[3];
  pfVar4 = (float *)(lVar20 + 0xc50 + param_1);
  fVar17 = pfVar4[1];
  fVar18 = pfVar4[2];
  fVar19 = pfVar4[3];
  *param_2 = *pfVar1 * 1.0 + fVar6 * *pfVar2 + fVar5 * *pfVar3 + fVar7 * *pfVar4;
  param_2[1] = fVar8 * 1.0 + fVar6 * fVar11 + fVar5 * fVar14 + fVar7 * fVar17;
  param_2[2] = fVar9 * 1.0 + fVar6 * fVar12 + fVar5 * fVar15 + fVar7 * fVar18;
  param_2[3] = fVar10 * 1.0 + fVar6 * fVar13 + fVar5 * fVar16 + fVar7 * fVar19;
  return param_2;
}



// FUNCTION 14239d870 Append<FTransform,TSizedDefaultAllocator<32>_> body=100 status=ok
// SIG undefined Append<FTransform,TSizedDefaultAllocator<32>_>(void)

void TArray<FTransform,TSizedDefaultAllocator<32>_>::Append<FTransform,TSizedDefaultAllocator<32>_>
               (longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 != 0) {
    iVar2 = (int)param_1[1];
    if (*(int *)((longlong)param_1 + 0xc) < iVar2 + iVar1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_1);
      iVar2 = (int)param_1[1];
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar2 * 0x30 + *param_1),(void *)*param_2,(longlong)iVar1 * 0x30);
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar1;
  }
  return;
}



// FUNCTION 14239d8e0 CreateSectionSkinWeightsArray<1> body=600 status=ok
// SIG undefined CreateSectionSkinWeightsArray<1>(void)

void CreateSectionSkinWeightsArray<1>
               (longlong *param_1,uint param_2,int param_3,longlong *param_4,longlong *param_5,
               longlong *param_6)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int *piVar15;
  uint local_res10;
  
  uVar11 = (ulonglong)(int)param_2;
  iVar3 = (int)param_5[1] + param_3;
  *(int *)(param_5 + 1) = iVar3;
  if (*(int *)((longlong)param_5 + 0xc) < iVar3) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_5);
  }
  if ((longlong)uVar11 < (longlong)(int)(param_2 + param_3)) {
    lVar13 = (longlong)(int)(param_2 + param_3) - uVar11;
    lVar12 = uVar11 * 0x28;
    lVar7 = uVar11 << 4;
    local_res10 = param_2;
    do {
      puVar9 = (undefined8 *)(*param_5 + lVar7);
      if ((int)(uint)uVar11 < (int)param_1[1]) {
        lVar2 = *param_1;
        lVar14 = 8;
        puVar10 = puVar9;
        piVar15 = (int *)(lVar2 + lVar12);
        do {
          *(undefined1 *)puVar10 = 0;
          *(undefined1 *)(puVar10 + 1) = 0;
          cVar1 = *(char *)((longlong)puVar10 + lVar2 + lVar12 + (0x20 - (longlong)puVar9));
          if (cVar1 != '\0') {
            iVar3 = *piVar15;
            if ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34)) {
              plVar5 = (longlong *)param_4[8];
              if ((longlong *)param_4[8] == (longlong *)0x0) {
                plVar5 = param_4 + 7;
              }
              iVar4 = *(int *)((longlong)plVar5 +
                              ((longlong)(int)param_4[9] - 1U & (longlong)iVar3) * 4);
              if (iVar4 != -1) {
                do {
                  piVar8 = (int *)((longlong)iVar4 * 0x10 + *param_4);
                  if (*piVar8 == iVar3) {
                    if (iVar4 != -1) goto LAB_14239da30;
                    break;
                  }
                  iVar4 = piVar8[2];
                } while (iVar4 != -1);
              }
            }
            piVar8 = (int *)0x0;
LAB_14239da30:
            piVar6 = piVar8 + 1;
            if (piVar8 == (int *)0x0) {
              piVar6 = (int *)0x0;
            }
            if (piVar6 == (int *)0x0) {
              piVar8 = (int *)*param_6;
              iVar4 = (int)param_6[1];
              for (piVar6 = piVar8; piVar6 != piVar8 + iVar4; piVar6 = piVar6 + 1) {
                if (*piVar6 == iVar3) {
                  if ((int)((longlong)piVar6 - (longlong)piVar8 >> 2) != -1) goto LAB_14239daa2;
                  break;
                }
              }
              *(int *)(param_6 + 1) = iVar4 + 1;
              if (*(int *)((longlong)param_6 + 0xc) < iVar4 + 1) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_6,iVar4);
              }
              *(int *)((longlong)iVar4 * 4 + *param_6) = iVar3;
            }
            else {
              *(char *)puVar10 = (char)*piVar6;
              *(char *)(puVar10 + 1) = cVar1;
            }
          }
LAB_14239daa2:
          piVar15 = piVar15 + 1;
          puVar10 = (undefined8 *)((longlong)puVar10 + 1);
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      else {
        *puVar9 = 0;
        puVar9[1] = 0xff;
        local_res10 = (uint)uVar11;
      }
      local_res10 = local_res10 + 1;
      uVar11 = (ulonglong)local_res10;
      lVar7 = lVar7 + 0x10;
      lVar12 = lVar12 + 0x28;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}



// FUNCTION 14239db40 CreateSectionSkinWeightsArray<0> body=565 status=ok
// SIG undefined CreateSectionSkinWeightsArray<0>(void)

void CreateSectionSkinWeightsArray<0>
               (longlong *param_1,uint param_2,int param_3,longlong *param_4,longlong *param_5,
               longlong *param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  int *piVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int *piVar13;
  uint local_res10;
  
  uVar10 = (ulonglong)(int)param_2;
  iVar2 = (int)param_5[1] + param_3;
  *(int *)(param_5 + 1) = iVar2;
  if (*(int *)((longlong)param_5 + 0xc) < iVar2) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_5);
  }
  if ((longlong)uVar10 < (longlong)(int)(param_2 + param_3)) {
    lVar7 = uVar10 * 0x28;
    uVar12 = uVar10;
    local_res10 = param_2;
    do {
      puVar9 = (undefined4 *)(*param_5 + uVar12 * 8);
      if ((int)(uint)uVar10 < (int)param_1[1]) {
        lVar11 = 4;
        piVar13 = (int *)(*param_1 + lVar7);
        lVar4 = (longlong)piVar13 + (0x20 - (longlong)puVar9);
        do {
          *(undefined1 *)puVar9 = 0;
          *(undefined1 *)(puVar9 + 1) = 0;
          cVar1 = *(char *)(lVar4 + (longlong)puVar9);
          if (cVar1 != '\0') {
            iVar2 = *piVar13;
            if ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34)) {
              plVar5 = (longlong *)param_4[8];
              if ((longlong *)param_4[8] == (longlong *)0x0) {
                plVar5 = param_4 + 7;
              }
              iVar3 = *(int *)((longlong)plVar5 +
                              ((longlong)(int)param_4[9] - 1U & (longlong)iVar2) * 4);
              if (iVar3 != -1) {
                do {
                  piVar8 = (int *)((longlong)iVar3 * 0x10 + *param_4);
                  if (*piVar8 == iVar2) {
                    if (iVar3 != -1) goto LAB_14239dc80;
                    break;
                  }
                  iVar3 = piVar8[2];
                } while (iVar3 != -1);
              }
            }
            piVar8 = (int *)0x0;
LAB_14239dc80:
            piVar6 = piVar8 + 1;
            if (piVar8 == (int *)0x0) {
              piVar6 = (int *)0x0;
            }
            if (piVar6 == (int *)0x0) {
              piVar8 = (int *)*param_6;
              iVar3 = (int)param_6[1];
              for (piVar6 = piVar8; piVar6 != piVar8 + iVar3; piVar6 = piVar6 + 1) {
                if (*piVar6 == iVar2) {
                  if ((int)((longlong)piVar6 - (longlong)piVar8 >> 2) != -1) goto LAB_14239dcf8;
                  break;
                }
              }
              *(int *)(param_6 + 1) = iVar3 + 1;
              if (*(int *)((longlong)param_6 + 0xc) < iVar3 + 1) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_6,iVar3);
              }
              *(int *)((longlong)iVar3 * 4 + *param_6) = iVar2;
            }
            else {
              *(char *)puVar9 = (char)*piVar6;
              *(char *)(puVar9 + 1) = cVar1;
            }
          }
LAB_14239dcf8:
          piVar13 = piVar13 + 1;
          puVar9 = (undefined4 *)((longlong)puVar9 + 1);
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      else {
        *puVar9 = 0;
        puVar9[1] = 0xff;
        local_res10 = (uint)uVar10;
      }
      local_res10 = local_res10 + 1;
      uVar10 = (ulonglong)local_res10;
      lVar7 = lVar7 + 0x28;
      uVar12 = uVar12 + 1;
    } while ((longlong)uVar12 < (longlong)(int)(param_2 + param_3));
  }
  return;
}



// FUNCTION 14239dd80 FUN_14239dd80 body=667 status=ok
// SIG undefined FUN_14239dd80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14239dd80(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  longlong local_res8 [2];
  undefined1 *local_108;
  longlong *plStack_100;
  undefined **local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  byte local_dc;
  undefined4 local_d8;
  undefined ***local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  lVar8 = 0;
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x6f8) + 0xc);
    lVar5 = lVar8;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar9 = iVar2 >> 0x1f & 0xffff;
      uVar4 = iVar2 + uVar9;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) {
      return;
    }
  }
  local_res8[0] = 0;
  local_res8[1] = 0;
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar6 = FUN_142909590();
  plVar7 = (longlong *)FUN_1417985e0(uVar6,param_1,0,0x40,0,0,0,0,0);
  *(longlong **)(param_1 + 0x6f8) = plVar7;
  if (*(int *)(param_1 + 0xc) <= DAT_1469e91a4) {
    iVar2 = *(int *)((longlong)plVar7 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar9 = iVar2 >> 0x1f & 0xffff;
      uVar4 = iVar2 + uVar9;
      lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
    }
    *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | 0x40000000;
    plVar7 = *(longlong **)(param_1 + 0x6f8);
  }
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1,0);
  local_dc = local_dc | 1;
  local_f0 = 0;
  local_e8 = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x6f8) + 0x9c) = 2;
  local_d0 = &local_f8;
  lVar8 = *(longlong *)(param_1 + 0x6f8);
  local_f8 = &PTR_FUN_1440fbd78;
  local_58 = _DAT_1464aa810;
  uStack_50 = _DAT_1464aa818;
  local_40 = DAT_1468b5d98;
  local_48 = _DAT_1468b5d90;
  local_34 = DAT_1468b5da8;
  local_e0 = 1;
  local_d8 = 6;
  local_c8 = 3;
  local_c0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_3c = DAT_1468b5da0;
  local_30 = 0x3f800000;
  local_2c = 0x3f800000;
  local_28 = 0x3f800000;
  iVar2 = *(int *)(lVar8 + 0x40);
  *(int *)(lVar8 + 0x40) = iVar2 + 1;
  if (*(int *)(lVar8 + 0x44) < iVar2 + 1) {
    FUN_140822570(lVar8 + 0x38,iVar2);
  }
  FUN_1420ce830((longlong)iVar2 * 0xe0 + *(longlong *)(lVar8 + 0x38),&local_f8);
  local_f8 = &PTR__scalar_deleting_destructor__1440fbd58;
  if (local_a8 != 0) {
    FMemory::Free();
  }
  pbVar1 = (byte *)(*(longlong *)(param_1 + 0x6f8) + 0x9a);
  *pbVar1 = *pbVar1 | 4;
  *(byte *)(param_1 + 0x700) = *(byte *)(param_1 + 0x700) & 0xf7;
  FWeakObjectPtr::operator=(param_1 + 0x4f0,*(undefined8 *)(param_1 + 0x6f8));
  cVar3 = FBodyInstance::IsValidBodyInstance(param_1 + 0x3b0);
  if (cVar3 != '\0') {
    plStack_100 = local_res8;
    local_108 = &LAB_1423a6620;
    local_res8[0] = param_1;
    FUN_142693730(param_1 + 0x3b0,&local_108);
  }
  return;
}



// FUNCTION 14239e020 FUN_14239e020 body=732 status=ok
// SIG undefined FUN_14239e020(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14239e020(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined8 local_120;
  undefined1 local_118;
  longlong local_108 [2];
  undefined1 *local_f8;
  longlong *plStack_f0;
  undefined **local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  byte local_cc;
  undefined4 local_c8;
  undefined ***local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 local_60;
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
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  lVar8 = 0;
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x6f8) + 0xc);
    lVar5 = lVar8;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar9 = iVar2 >> 0x1f & 0xffff;
      uVar4 = iVar2 + uVar9;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) {
      return;
    }
  }
  local_f8 = (undefined1 *)0x0;
  local_108[0] = 0;
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar6 = FUN_142909590();
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  plVar7 = (longlong *)FUN_1417985e0(uVar6,param_1,0,0x40);
  *(longlong **)(param_1 + 0x6f8) = plVar7;
  if (*(int *)(param_1 + 0xc) <= DAT_1469e91a4) {
    iVar2 = *(int *)((longlong)plVar7 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar9 = iVar2 >> 0x1f & 0xffff;
      uVar4 = iVar2 + uVar9;
      lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
    }
    *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | 0x40000000;
    plVar7 = *(longlong **)(param_1 + 0x6f8);
  }
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1,0);
  local_cc = local_cc | 1;
  local_e0 = 0;
  local_d8 = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x6f8) + 0x9c) = 2;
  local_c0 = &local_e8;
  lVar8 = *(longlong *)(param_1 + 0x6f8);
  local_6c = _DAT_1468b5d90;
  local_78 = _DAT_1468b5d90;
  local_e8 = &PTR_FUN_1440fbd68;
  local_58 = _DAT_1468b5b70;
  uStack_50 = uRam00000001468b5b78;
  local_48 = _DAT_1468b5b80;
  uStack_40 = uRam00000001468b5b88;
  local_64 = DAT_1468b5d98;
  local_70 = DAT_1468b5d98;
  local_38 = _DAT_1468b5b90;
  uStack_34 = uRam00000001468b5b94;
  uStack_30 = uRam00000001468b5b98;
  uStack_2c = uRam00000001468b5b9c;
  local_d0 = 3;
  local_c8 = 6;
  local_b8 = 3;
  local_b0 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_60 = 0;
  local_28 = 0;
  uStack_20 = 0;
  iVar2 = *(int *)(lVar8 + 0x60);
  *(int *)(lVar8 + 0x60) = iVar2 + 1;
  if (*(int *)(lVar8 + 100) < iVar2 + 1) {
    TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeGrow(lVar8 + 0x58,iVar2);
  }
  FUN_14080b9e0((longlong)iVar2 * 0xd0 + *(longlong *)(lVar8 + 0x58),&local_e8);
  if (local_88 != 0) {
    FMemory::Free();
  }
  local_e8 = &PTR__scalar_deleting_destructor__1440fbd58;
  if (local_98 != 0) {
    FMemory::Free();
  }
  pbVar1 = (byte *)(*(longlong *)(param_1 + 0x6f8) + 0x9a);
  *pbVar1 = *pbVar1 | 4;
  *(byte *)(param_1 + 0x700) = *(byte *)(param_1 + 0x700) & 0xf7;
  FWeakObjectPtr::operator=(param_1 + 0x4f0,*(undefined8 *)(param_1 + 0x6f8));
  cVar3 = FBodyInstance::IsValidBodyInstance(param_1 + 0x3b0);
  if (cVar3 != '\0') {
    plStack_f0 = local_108;
    local_f8 = &LAB_1423a6640;
    local_108[0] = param_1;
    FUN_142693730(param_1 + 0x3b0,&local_f8);
  }
  return;
}



// FUNCTION 14239e300 FUN_14239e300 body=717 status=ok
// SIG undefined FUN_14239e300(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14239e300(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong local_res8 [2];
  undefined1 *local_d8;
  longlong *plStack_d0;
  undefined **local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  byte local_ac;
  undefined4 local_a8;
  undefined ***local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  lVar8 = 0;
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x6f8) + 0xc);
    lVar5 = lVar8;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar9 = iVar2 >> 0x1f & 0xffff;
      uVar4 = iVar2 + uVar9;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) {
      return;
    }
  }
  local_res8[0] = 0;
  local_res8[1] = 0;
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar6 = FUN_142909590();
  plVar7 = (longlong *)FUN_1417985e0(uVar6,param_1,0,0x40,0,0,0,0,0);
  *(longlong **)(param_1 + 0x6f8) = plVar7;
  if (*(int *)(param_1 + 0xc) <= DAT_1469e91a4) {
    iVar2 = *(int *)((longlong)plVar7 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar9 = iVar2 >> 0x1f & 0xffff;
      uVar4 = iVar2 + uVar9;
      lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
    }
    *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | 0x40000000;
    plVar7 = *(longlong **)(param_1 + 0x6f8);
  }
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1,0);
  local_ac = local_ac | 1;
  local_c0 = 0;
  local_b8 = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x6f8) + 0x9c) = 2;
  local_a0 = &local_c8;
  local_b0 = 0;
  local_90 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  lVar8 = *(longlong *)(param_1 + 0x6f8);
  local_28 = _DAT_1468b5d90;
  local_20 = DAT_1468b5d98;
  local_1c = 0x3f800000;
  local_a8 = 6;
  local_98 = 3;
  local_c8 = &PTR_FUN_1440fbd88;
  iVar2 = *(int *)(lVar8 + 0x30);
  *(int *)(lVar8 + 0x30) = iVar2 + 1;
  if (*(int *)(lVar8 + 0x34) < iVar2 + 1) {
    TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(lVar8 + 0x28,iVar2);
  }
  puVar10 = (undefined8 *)((longlong)iVar2 * 0xb0 + *(longlong *)(lVar8 + 0x28));
  FUN_140c630e0(puVar10,&local_c8);
  *puVar10 = &PTR_FUN_1440fbd88;
  puVar10[0xc] = local_68;
  puVar10[0xd] = uStack_60;
  puVar10[0xe] = local_58;
  puVar10[0xf] = uStack_50;
  puVar10[0x10] = local_48;
  puVar10[0x11] = uStack_40;
  *(undefined4 *)(puVar10 + 0x12) = local_38;
  *(undefined4 *)((longlong)puVar10 + 0x94) = uStack_34;
  *(undefined4 *)(puVar10 + 0x13) = uStack_30;
  *(undefined4 *)((longlong)puVar10 + 0x9c) = uStack_2c;
  puVar10[0x14] = local_28;
  *(undefined4 *)(puVar10 + 0x15) = local_20;
  *(undefined4 *)((longlong)puVar10 + 0xac) = local_1c;
  local_c8 = &PTR__scalar_deleting_destructor__1440fbd58;
  if (local_78 != 0) {
    FMemory::Free();
  }
  pbVar1 = (byte *)(*(longlong *)(param_1 + 0x6f8) + 0x9a);
  *pbVar1 = *pbVar1 | 4;
  *(byte *)(param_1 + 0x700) = *(byte *)(param_1 + 0x700) & 0xf7;
  FWeakObjectPtr::operator=(param_1 + 0x4f0,*(undefined8 *)(param_1 + 0x6f8));
  cVar3 = FBodyInstance::IsValidBodyInstance(param_1 + 0x3b0);
  if (cVar3 != '\0') {
    plStack_d0 = local_res8;
    local_d8 = &LAB_1423a6630;
    local_res8[0] = param_1;
    FUN_142693730(param_1 + 0x3b0,&local_d8);
  }
  return;
}



// FUNCTION 14239e5d0 FUN_14239e5d0 body=660 status=ok
// SIG undefined FUN_14239e5d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14239e5d0(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  longlong local_res8 [2];
  undefined1 *local_f8;
  longlong *plStack_f0;
  undefined **local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  byte local_cc;
  undefined4 local_c8;
  undefined ***local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  lVar8 = 0;
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x6f8) + 0xc);
    lVar5 = lVar8;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar9 = iVar2 >> 0x1f & 0xffff;
      uVar4 = iVar2 + uVar9;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) {
      return;
    }
  }
  local_res8[0] = 0;
  local_res8[1] = 0;
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar6 = FUN_142909590();
  plVar7 = (longlong *)FUN_1417985e0(uVar6,param_1,0,0x40,0,0,0,0,0);
  *(longlong **)(param_1 + 0x6f8) = plVar7;
  if (*(int *)(param_1 + 0xc) <= DAT_1469e91a4) {
    iVar2 = *(int *)((longlong)plVar7 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar9 = iVar2 >> 0x1f & 0xffff;
      uVar4 = iVar2 + uVar9;
      lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
    }
    *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | 0x40000000;
    plVar7 = *(longlong **)(param_1 + 0x6f8);
  }
  (**(code **)(*plVar7 + 0x38))(plVar7,param_1,0);
  local_cc = local_cc | 1;
  local_e0 = 0;
  local_d8 = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x6f8) + 0x9c) = 2;
  local_c0 = &local_e8;
  lVar8 = *(longlong *)(param_1 + 0x6f8);
  local_e8 = &PTR_FUN_1444d5498;
  local_48 = _DAT_1464aa810;
  uStack_40 = _DAT_1464aa818;
  local_30 = DAT_1468b5d98;
  local_38 = _DAT_1468b5d90;
  local_24 = DAT_1468b5da8;
  local_d0 = 2;
  local_c8 = 6;
  local_b8 = 3;
  local_b0 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_2c = DAT_1468b5da0;
  local_20 = 0x3f800000;
  local_1c = 0x3f800000;
  iVar2 = *(int *)(lVar8 + 0x50);
  *(int *)(lVar8 + 0x50) = iVar2 + 1;
  if (*(int *)(lVar8 + 0x54) < iVar2 + 1) {
    TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeGrow(lVar8 + 0x48,iVar2);
  }
  FUN_14239fa80((longlong)iVar2 * 0xd0 + *(longlong *)(lVar8 + 0x48),&local_e8);
  local_e8 = &PTR__scalar_deleting_destructor__1440fbd58;
  if (local_98 != 0) {
    FMemory::Free();
  }
  pbVar1 = (byte *)(*(longlong *)(param_1 + 0x6f8) + 0x9a);
  *pbVar1 = *pbVar1 | 4;
  *(byte *)(param_1 + 0x700) = *(byte *)(param_1 + 0x700) & 0xf7;
  FWeakObjectPtr::operator=(param_1 + 0x4f0,*(undefined8 *)(param_1 + 0x6f8));
  cVar3 = FBodyInstance::IsValidBodyInstance(param_1 + 0x3b0);
  if (cVar3 != '\0') {
    plStack_f0 = local_res8;
    local_f8 = &LAB_1423a6650;
    local_res8[0] = param_1;
    FUN_142693730(param_1 + 0x3b0,&local_f8);
  }
  return;
}



// FUNCTION 14239e870 FUN_14239e870 body=674 status=ok
// SIG undefined FUN_14239e870(void)

uint * FUN_14239e870(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong *_Src;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  uint local_res8 [2];
  
  iVar9 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar8 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar8 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar8 = *(uint *)(param_1 + 6);
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar6 = *(int *)(*param_1 + 4 + (longlong)(int)uVar8 * 0x18);
    *(int *)(param_1 + 6) = iVar6;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = uVar8;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar5 +
                   (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar8 & 0x1f);
  _Src = (ulonglong *)(*param_1 + (longlong)(int)uVar8 * 0x18);
  uVar2 = *(ulonglong *)*param_3;
  *_Src = uVar2;
  _Src[1] = 0;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar2);
    uVar4 = local_res8[0];
    lVar7 = (longlong)(int)local_res8[0];
    bVar13 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar13);
    if (bVar13) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar7 * 0x18),_Src,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,uVar8,1);
      *param_2 = uVar4;
      goto LAB_14239eae4;
    }
  }
  if (3 < uVar12) {
    uVar4 = (uVar12 >> 1) + 8;
    iVar9 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar6 = 0x20;
    cVar10 = '\0';
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar9;
    }
    uVar4 = (uVar12 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar10 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    iVar9 = (int)(*_Src >> 4);
    uVar4 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
    uVar11 = -(uVar4 + iVar9) ^ uVar4 >> 0xd;
    uVar12 = (iVar9 - uVar4) - uVar11 ^ uVar11 >> 0xc;
    uVar4 = (uVar4 - uVar12) - uVar11 ^ uVar12 << 0x10;
    uVar11 = (uVar11 - uVar4) - uVar12 ^ uVar4 >> 5;
    uVar12 = (uVar12 - uVar4) - uVar11 ^ uVar11 >> 3;
    uVar4 = (uVar4 - uVar12) - uVar11 ^ uVar12 << 10;
    uVar12 = ((uVar11 - uVar4) - uVar12 ^ uVar4 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar12;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(uint *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         uVar8;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<TTuple<FFlareSpacecraftDescription_const_*,int>,TDefaultMapHashableKeyFuncs<FFlareSpacecraftDescription_const_*,int,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14239eae4:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 14239eb20 FUN_14239eb20 body=608 status=ok
// SIG undefined FUN_14239eb20(void)

float * FUN_14239eb20(float *param_1,longlong param_2,longlong param_3,longlong param_4,
                     longlong param_5,int param_6,longlong *param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong uVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  byte *pbVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  FWeakObjectPtr::Get(param_2 + 0x720);
  param_6 = param_6 + *(int *)(param_3 + 0x10);
  fVar15 = *param_1;
  fVar13 = param_1[1];
  fVar14 = param_1[2];
  pbVar10 = (byte *)((ulonglong)(uint)(*(int *)(param_5 + 0x58) * param_6) +
                    *(longlong *)(param_5 + 0x50));
  lVar9 = *(longlong *)(param_4 + 0x48);
  uVar6 = (ulonglong)(uint)(*(int *)(param_4 + 0x50) * param_6);
  fVar3 = *(float *)(uVar6 + lVar9);
  fVar4 = *(float *)(uVar6 + 4 + lVar9);
  fVar5 = *(float *)(uVar6 + 8 + lVar9);
  lVar9 = 4;
  do {
    pbVar1 = pbVar10 + 9;
    pfVar7 = (float *)((ulonglong)
                       *(ushort *)(*(longlong *)(param_3 + 0x28) + (ulonglong)*pbVar10 * 2) * 0x40 +
                      *param_7);
    fVar11 = (float)pbVar10[8] * 0.003921569;
    pbVar2 = pbVar10 + 1;
    pbVar10 = pbVar10 + 2;
    pfVar8 = (float *)((ulonglong)
                       *(ushort *)(*(longlong *)(param_3 + 0x28) + (ulonglong)*pbVar2 * 2) * 0x40 +
                      *param_7);
    fVar12 = (float)*pbVar1 * 0.003921569;
    fVar15 = (pfVar8[8] * fVar5 + pfVar8[0xc] * 1.0 + pfVar8[4] * fVar4 + fVar3 * *pfVar8) * fVar12
             + fVar15 + (pfVar7[8] * fVar5 + pfVar7[0xc] * 1.0 + pfVar7[4] * fVar4 + fVar3 * *pfVar7
                        ) * fVar11;
    fVar14 = fVar14 + (pfVar7[10] * fVar5 + pfVar7[0xe] * 1.0 +
                      pfVar7[6] * fVar4 + fVar3 * pfVar7[2]) * fVar11 +
             (pfVar8[10] * fVar5 + pfVar8[0xe] * 1.0 + pfVar8[6] * fVar4 + fVar3 * pfVar8[2]) *
             fVar12;
    fVar13 = fVar13 + (pfVar7[9] * fVar5 + pfVar7[0xd] * 1.0 + pfVar7[5] * fVar4 + fVar3 * pfVar7[1]
                      ) * fVar11 +
             (pfVar8[9] * fVar5 + pfVar8[0xd] * 1.0 + pfVar8[5] * fVar4 + fVar3 * pfVar8[1]) *
             fVar12;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  *param_1 = fVar15;
  param_1[1] = fVar13;
  param_1[2] = fVar14;
  return param_1;
}



// FUNCTION 14239ed80 FUN_14239ed80 body=1224 status=ok
// SIG undefined FUN_14239ed80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_14239ed80(float *param_1,longlong param_2,longlong param_3,longlong param_4,
                     longlong param_5,float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
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
  float fVar26;
  float fVar27;
  float fVar28;
  longlong lVar29;
  float *pfVar30;
  uint uVar31;
  float *pfVar32;
  longlong lVar33;
  int iVar34;
  byte *pbVar35;
  longlong lVar36;
  longlong lVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float local_res8;
  float local_138;
  float fStack_134;
  float fStack_130;
  uint uStack_12c;
  float local_128;
  uint uStack_124;
  float fStack_120;
  uint uStack_11c;
  float local_118;
  float fStack_114;
  uint uStack_110;
  uint uStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  lVar29 = FWeakObjectPtr::Get(param_2 + 0x720);
  lVar37 = param_2;
  if (lVar29 != 0) {
    lVar37 = lVar29;
  }
  iVar34 = (int)param_6 + *(int *)(param_3 + 0x10);
  pfVar30 = (float *)((ulonglong)(uint)(*(int *)(param_4 + 0x50) * iVar34) +
                     *(longlong *)(param_4 + 0x48));
  lVar33 = 8;
  lVar36 = (ulonglong)(uint)(*(int *)(param_5 + 0x58) * iVar34) + *(longlong *)(param_5 + 0x50);
  fVar1 = pfVar30[1];
  fVar2 = pfVar30[2];
  pbVar35 = (byte *)(lVar36 + 8);
  fVar3 = *pfVar30;
  lVar36 = lVar36 - (longlong)pbVar35;
  param_5._0_4_ = param_1[1];
  local_res8 = param_1[2];
  param_6 = *param_1;
  do {
    uVar4 = *(ushort *)(*(longlong *)(param_3 + 0x28) + (ulonglong)pbVar35[lVar36] * 2);
    uVar31 = (uint)uVar4;
    if (lVar29 != 0) {
      uVar31 = *(uint *)(*(longlong *)(param_2 + 0x788) + (ulonglong)uVar4 * 4);
    }
    fVar42 = (float)*pbVar35 * 0.003921569;
    if (uVar31 == 0xffffffff) {
      pfVar30 = (float *)&local_f8;
      local_f8 = _DAT_1464aa7d0;
      uStack_f0 = _DAT_1464aa7d8;
      local_e8 = _DAT_1464aa7e0;
      uStack_e0 = _DAT_1464aa7e8;
      local_d8 = _DAT_1464aa7f0;
      uStack_d0 = _DAT_1464aa7f8;
      local_c8 = _DAT_1464aa800;
      uStack_c0 = uRam00000001464aa808;
    }
    else {
      pfVar30 = &local_138;
      pfVar32 = (float *)((longlong)(int)uVar31 * 0x30 +
                         *(longlong *)(lVar37 + 0x728 + (longlong)*(int *)(lVar37 + 0x770) * 0x10));
      fVar5 = *pfVar32;
      fVar6 = pfVar32[1];
      fVar7 = pfVar32[2];
      fVar8 = pfVar32[3];
      fVar38 = fVar6 + fVar6;
      fVar40 = fVar7 + fVar7;
      fVar41 = (fVar5 + fVar5) * fVar5;
      fVar39 = (fVar5 + fVar5) * fVar8;
      fVar9 = pfVar32[8];
      fVar10 = pfVar32[9];
      fVar11 = pfVar32[10];
      uStack_12c = (uint)((fRam0000000146af0bfc - (fVar41 + fVar41)) * pfVar32[0xb]) &
                   uRam0000000146af0c0c;
      local_138 = (float)((uint)((_DAT_146af0bf0 - (fVar40 * fVar7 + fVar38 * fVar6)) * fVar9) &
                         _DAT_146af0c00);
      fStack_134 = (fVar40 * fVar8 + fVar38 * fVar5) * fVar9;
      fStack_130 = fVar9 * (fVar40 * fVar5 - fVar38 * fVar8);
      local_108 = pfVar32[4];
      fStack_104 = pfVar32[5];
      fStack_100 = pfVar32[6];
      fStack_fc = fRam0000000146af0bfc;
      local_128 = fVar10 * (fVar38 * fVar5 - fVar40 * fVar8);
      uStack_124 = (uint)((fRam0000000146af0bf4 - (fVar40 * fVar7 + fVar41)) * fVar10) &
                   uRam0000000146af0c04;
      fStack_120 = (fVar39 + fVar40 * fVar6) * fVar10;
      uStack_11c = uStack_12c;
      local_118 = (fVar38 * fVar8 + fVar40 * fVar5) * fVar11;
      fStack_114 = fVar11 * (fVar40 * fVar6 - fVar39);
      uStack_110 = (uint)((fRam0000000146af0bf8 - (fVar38 * fVar6 + fVar41)) * fVar11) &
                   uRam0000000146af0c08;
      uStack_10c = uStack_12c;
    }
    fVar5 = *pfVar30;
    fVar6 = pfVar30[1];
    fVar7 = pfVar30[2];
    fVar8 = pfVar30[4];
    fVar9 = pfVar30[5];
    fVar10 = pfVar30[6];
    fVar11 = pfVar30[8];
    fVar38 = pfVar30[9];
    fVar39 = pfVar30[10];
    fVar40 = pfVar30[0xc];
    fVar41 = pfVar30[0xd];
    fVar12 = pfVar30[0xe];
    pfVar30 = (float *)((ulonglong)uVar4 * 0x40 +
                       *(longlong *)(*(longlong *)(param_2 + 0x718) + 0x290));
    fVar13 = *pfVar30;
    fVar14 = pfVar30[1];
    fVar15 = pfVar30[2];
    fVar16 = pfVar30[3];
    fVar17 = pfVar30[4];
    fVar18 = pfVar30[5];
    fVar19 = pfVar30[6];
    fVar20 = pfVar30[7];
    fVar21 = pfVar30[8];
    fVar22 = pfVar30[9];
    fVar23 = pfVar30[10];
    fVar24 = pfVar30[0xb];
    fVar25 = pfVar30[0xc];
    fVar26 = pfVar30[0xd];
    fVar27 = pfVar30[0xe];
    fVar28 = pfVar30[0xf];
    pbVar35 = pbVar35 + 1;
    param_6 = param_6 + ((fVar14 * fVar8 + fVar13 * fVar5 + fVar15 * fVar11 + fVar16 * fVar40) *
                         fVar3 + (fVar18 * fVar8 + fVar17 * fVar5 + fVar19 * fVar11 +
                                 fVar20 * fVar40) * fVar1 +
                        (fVar22 * fVar8 + fVar21 * fVar5 + fVar23 * fVar11 + fVar24 * fVar40) *
                        fVar2 + (fVar26 * fVar8 + fVar25 * fVar5 + fVar27 * fVar11 + fVar28 * fVar40
                                ) * 1.0) * fVar42;
    param_5._0_4_ =
         (float)param_5 +
         ((fVar14 * fVar9 + fVar13 * fVar6 + fVar15 * fVar38 + fVar16 * fVar41) * fVar3 +
          (fVar18 * fVar9 + fVar17 * fVar6 + fVar19 * fVar38 + fVar20 * fVar41) * fVar1 +
         (fVar22 * fVar9 + fVar21 * fVar6 + fVar23 * fVar38 + fVar24 * fVar41) * fVar2 +
         (fVar26 * fVar9 + fVar25 * fVar6 + fVar27 * fVar38 + fVar28 * fVar41) * 1.0) * fVar42;
    local_res8 = local_res8 +
                 ((fVar14 * fVar10 + fVar13 * fVar7 + fVar15 * fVar39 + fVar16 * fVar12) * fVar3 +
                  (fVar18 * fVar10 + fVar17 * fVar7 + fVar19 * fVar39 + fVar20 * fVar12) * fVar1 +
                 (fVar22 * fVar10 + fVar21 * fVar7 + fVar23 * fVar39 + fVar24 * fVar12) * fVar2 +
                 (fVar26 * fVar10 + fVar25 * fVar7 + fVar27 * fVar39 + fVar28 * fVar12) * 1.0) *
                 fVar42;
    lVar33 = lVar33 + -1;
  } while (lVar33 != 0);
  *param_1 = param_6;
  param_1[1] = (float)param_5;
  param_1[2] = local_res8;
  return param_1;
}



// FUNCTION 14239f250 FUN_14239f250 body=608 status=ok
// SIG undefined FUN_14239f250(void)

float * FUN_14239f250(float *param_1,longlong param_2,longlong param_3,longlong param_4,
                     longlong param_5,int param_6,longlong *param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong uVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  byte *pbVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  FWeakObjectPtr::Get(param_2 + 0x720);
  param_6 = param_6 + *(int *)(param_3 + 0x10);
  fVar15 = *param_1;
  fVar13 = param_1[1];
  fVar14 = param_1[2];
  pbVar10 = (byte *)((ulonglong)(uint)(*(int *)(param_5 + 0x58) * param_6) +
                    *(longlong *)(param_5 + 0x50));
  lVar9 = *(longlong *)(param_4 + 0x48);
  uVar6 = (ulonglong)(uint)(*(int *)(param_4 + 0x50) * param_6);
  fVar3 = *(float *)(uVar6 + lVar9);
  fVar4 = *(float *)(uVar6 + 4 + lVar9);
  fVar5 = *(float *)(uVar6 + 8 + lVar9);
  lVar9 = 2;
  do {
    pbVar1 = pbVar10 + 5;
    pfVar7 = (float *)((ulonglong)
                       *(ushort *)(*(longlong *)(param_3 + 0x28) + (ulonglong)*pbVar10 * 2) * 0x40 +
                      *param_7);
    fVar11 = (float)pbVar10[4] * 0.003921569;
    pbVar2 = pbVar10 + 1;
    pbVar10 = pbVar10 + 2;
    pfVar8 = (float *)((ulonglong)
                       *(ushort *)(*(longlong *)(param_3 + 0x28) + (ulonglong)*pbVar2 * 2) * 0x40 +
                      *param_7);
    fVar12 = (float)*pbVar1 * 0.003921569;
    fVar15 = (pfVar8[8] * fVar5 + pfVar8[0xc] * 1.0 + pfVar8[4] * fVar4 + fVar3 * *pfVar8) * fVar12
             + fVar15 + (pfVar7[8] * fVar5 + pfVar7[0xc] * 1.0 + pfVar7[4] * fVar4 + fVar3 * *pfVar7
                        ) * fVar11;
    fVar14 = fVar14 + (pfVar7[10] * fVar5 + pfVar7[0xe] * 1.0 +
                      pfVar7[6] * fVar4 + fVar3 * pfVar7[2]) * fVar11 +
             (pfVar8[10] * fVar5 + pfVar8[0xe] * 1.0 + pfVar8[6] * fVar4 + fVar3 * pfVar8[2]) *
             fVar12;
    fVar13 = fVar13 + (pfVar7[9] * fVar5 + pfVar7[0xd] * 1.0 + pfVar7[5] * fVar4 + fVar3 * pfVar7[1]
                      ) * fVar11 +
             (pfVar8[9] * fVar5 + pfVar8[0xd] * 1.0 + pfVar8[5] * fVar4 + fVar3 * pfVar8[1]) *
             fVar12;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  *param_1 = fVar15;
  param_1[1] = fVar13;
  param_1[2] = fVar14;
  return param_1;
}



// FUNCTION 14239f4b0 FUN_14239f4b0 body=1224 status=ok
// SIG undefined FUN_14239f4b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_14239f4b0(float *param_1,longlong param_2,longlong param_3,longlong param_4,
                     longlong param_5,float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
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
  float fVar26;
  float fVar27;
  float fVar28;
  longlong lVar29;
  float *pfVar30;
  uint uVar31;
  float *pfVar32;
  longlong lVar33;
  int iVar34;
  byte *pbVar35;
  longlong lVar36;
  longlong lVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float local_res8;
  float local_138;
  float fStack_134;
  float fStack_130;
  uint uStack_12c;
  float local_128;
  uint uStack_124;
  float fStack_120;
  uint uStack_11c;
  float local_118;
  float fStack_114;
  uint uStack_110;
  uint uStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  lVar29 = FWeakObjectPtr::Get(param_2 + 0x720);
  lVar37 = param_2;
  if (lVar29 != 0) {
    lVar37 = lVar29;
  }
  iVar34 = (int)param_6 + *(int *)(param_3 + 0x10);
  pfVar30 = (float *)((ulonglong)(uint)(*(int *)(param_4 + 0x50) * iVar34) +
                     *(longlong *)(param_4 + 0x48));
  lVar33 = 4;
  lVar36 = (ulonglong)(uint)(*(int *)(param_5 + 0x58) * iVar34) + *(longlong *)(param_5 + 0x50);
  fVar1 = pfVar30[1];
  fVar2 = pfVar30[2];
  pbVar35 = (byte *)(lVar36 + 4);
  fVar3 = *pfVar30;
  lVar36 = lVar36 - (longlong)pbVar35;
  param_5._0_4_ = param_1[1];
  local_res8 = param_1[2];
  param_6 = *param_1;
  do {
    uVar4 = *(ushort *)(*(longlong *)(param_3 + 0x28) + (ulonglong)pbVar35[lVar36] * 2);
    uVar31 = (uint)uVar4;
    if (lVar29 != 0) {
      uVar31 = *(uint *)(*(longlong *)(param_2 + 0x788) + (ulonglong)uVar4 * 4);
    }
    fVar42 = (float)*pbVar35 * 0.003921569;
    if (uVar31 == 0xffffffff) {
      pfVar30 = (float *)&local_f8;
      local_f8 = _DAT_1464aa7d0;
      uStack_f0 = _DAT_1464aa7d8;
      local_e8 = _DAT_1464aa7e0;
      uStack_e0 = _DAT_1464aa7e8;
      local_d8 = _DAT_1464aa7f0;
      uStack_d0 = _DAT_1464aa7f8;
      local_c8 = _DAT_1464aa800;
      uStack_c0 = uRam00000001464aa808;
    }
    else {
      pfVar30 = &local_138;
      pfVar32 = (float *)((longlong)(int)uVar31 * 0x30 +
                         *(longlong *)(lVar37 + 0x728 + (longlong)*(int *)(lVar37 + 0x770) * 0x10));
      fVar5 = *pfVar32;
      fVar6 = pfVar32[1];
      fVar7 = pfVar32[2];
      fVar8 = pfVar32[3];
      fVar38 = fVar6 + fVar6;
      fVar40 = fVar7 + fVar7;
      fVar41 = (fVar5 + fVar5) * fVar5;
      fVar39 = (fVar5 + fVar5) * fVar8;
      fVar9 = pfVar32[8];
      fVar10 = pfVar32[9];
      fVar11 = pfVar32[10];
      uStack_12c = (uint)((fRam0000000146af0bfc - (fVar41 + fVar41)) * pfVar32[0xb]) &
                   uRam0000000146af0c0c;
      local_138 = (float)((uint)((_DAT_146af0bf0 - (fVar40 * fVar7 + fVar38 * fVar6)) * fVar9) &
                         _DAT_146af0c00);
      fStack_134 = (fVar40 * fVar8 + fVar38 * fVar5) * fVar9;
      fStack_130 = fVar9 * (fVar40 * fVar5 - fVar38 * fVar8);
      local_108 = pfVar32[4];
      fStack_104 = pfVar32[5];
      fStack_100 = pfVar32[6];
      fStack_fc = fRam0000000146af0bfc;
      local_128 = fVar10 * (fVar38 * fVar5 - fVar40 * fVar8);
      uStack_124 = (uint)((fRam0000000146af0bf4 - (fVar40 * fVar7 + fVar41)) * fVar10) &
                   uRam0000000146af0c04;
      fStack_120 = (fVar39 + fVar40 * fVar6) * fVar10;
      uStack_11c = uStack_12c;
      local_118 = (fVar38 * fVar8 + fVar40 * fVar5) * fVar11;
      fStack_114 = fVar11 * (fVar40 * fVar6 - fVar39);
      uStack_110 = (uint)((fRam0000000146af0bf8 - (fVar38 * fVar6 + fVar41)) * fVar11) &
                   uRam0000000146af0c08;
      uStack_10c = uStack_12c;
    }
    fVar5 = *pfVar30;
    fVar6 = pfVar30[1];
    fVar7 = pfVar30[2];
    fVar8 = pfVar30[4];
    fVar9 = pfVar30[5];
    fVar10 = pfVar30[6];
    fVar11 = pfVar30[8];
    fVar38 = pfVar30[9];
    fVar39 = pfVar30[10];
    fVar40 = pfVar30[0xc];
    fVar41 = pfVar30[0xd];
    fVar12 = pfVar30[0xe];
    pfVar30 = (float *)((ulonglong)uVar4 * 0x40 +
                       *(longlong *)(*(longlong *)(param_2 + 0x718) + 0x290));
    fVar13 = *pfVar30;
    fVar14 = pfVar30[1];
    fVar15 = pfVar30[2];
    fVar16 = pfVar30[3];
    fVar17 = pfVar30[4];
    fVar18 = pfVar30[5];
    fVar19 = pfVar30[6];
    fVar20 = pfVar30[7];
    fVar21 = pfVar30[8];
    fVar22 = pfVar30[9];
    fVar23 = pfVar30[10];
    fVar24 = pfVar30[0xb];
    fVar25 = pfVar30[0xc];
    fVar26 = pfVar30[0xd];
    fVar27 = pfVar30[0xe];
    fVar28 = pfVar30[0xf];
    pbVar35 = pbVar35 + 1;
    param_6 = param_6 + ((fVar14 * fVar8 + fVar13 * fVar5 + fVar15 * fVar11 + fVar16 * fVar40) *
                         fVar3 + (fVar18 * fVar8 + fVar17 * fVar5 + fVar19 * fVar11 +
                                 fVar20 * fVar40) * fVar1 +
                        (fVar22 * fVar8 + fVar21 * fVar5 + fVar23 * fVar11 + fVar24 * fVar40) *
                        fVar2 + (fVar26 * fVar8 + fVar25 * fVar5 + fVar27 * fVar11 + fVar28 * fVar40
                                ) * 1.0) * fVar42;
    param_5._0_4_ =
         (float)param_5 +
         ((fVar14 * fVar9 + fVar13 * fVar6 + fVar15 * fVar38 + fVar16 * fVar41) * fVar3 +
          (fVar18 * fVar9 + fVar17 * fVar6 + fVar19 * fVar38 + fVar20 * fVar41) * fVar1 +
         (fVar22 * fVar9 + fVar21 * fVar6 + fVar23 * fVar38 + fVar24 * fVar41) * fVar2 +
         (fVar26 * fVar9 + fVar25 * fVar6 + fVar27 * fVar38 + fVar28 * fVar41) * 1.0) * fVar42;
    local_res8 = local_res8 +
                 ((fVar14 * fVar10 + fVar13 * fVar7 + fVar15 * fVar39 + fVar16 * fVar12) * fVar3 +
                  (fVar18 * fVar10 + fVar17 * fVar7 + fVar19 * fVar39 + fVar20 * fVar12) * fVar1 +
                 (fVar22 * fVar10 + fVar21 * fVar7 + fVar23 * fVar39 + fVar24 * fVar12) * fVar2 +
                 (fVar26 * fVar10 + fVar25 * fVar7 + fVar27 * fVar39 + fVar28 * fVar12) * 1.0) *
                 fVar42;
    lVar33 = lVar33 + -1;
  } while (lVar33 != 0);
  *param_1 = param_6;
  param_1[1] = (float)param_5;
  param_1[2] = local_res8;
  return param_1;
}



// FUNCTION 14239f980 FUN_14239f980 body=119 status=ok
// SIG undefined FUN_14239f980(void)

undefined8 * FUN_14239f980(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_1424de090();
  *param_1 = &PTR_FUN_14506ce30;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SkyLightComponent0",1);
  uVar3 = *puVar1;
  uVar2 = UAtmosphericFogComponent::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8b] = uVar3;
  param_1[0x2d] = uVar3;
  return param_1;
}



// FUNCTION 14239fa00 EURCMacro_FUpdateHiddenSectionCommand body=126 status=ok
// SIG undefined EURCMacro_FUpdateHiddenSectionCommand(void)

undefined8 *
`USkinnedMeshComponent::ShowMaterialSection'::`23'::EURCMacro_FUpdateHiddenSectionCommand::
EURCMacro_FUpdateHiddenSectionCommand
          (undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  int iVar1;
  void *_Src;
  
  *param_1 = param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 3) = param_4;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1 + 1,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[1],_Src,(longlong)iVar1);
    *(undefined4 *)(param_1 + 3) = param_4;
  }
  return param_1;
}



// FUNCTION 14239fa80 FUN_14239fa80 body=217 status=ok
// SIG undefined FUN_14239fa80(void)

undefined8 * FUN_14239fa80(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_140c630e0();
  *param_1 = &PTR_FUN_1444d5498;
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  param_1[0xd] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  param_1[0xf] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  param_1[0x11] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  param_1[0x12] = *(undefined8 *)(param_2 + 0x90);
  param_1[0x13] = uVar1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  param_1[0x16] = *(undefined8 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined8 *)((longlong)param_1 + 0xbc) = *(undefined8 *)(param_2 + 0xbc);
  *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  return param_1;
}



// FUNCTION 14239fb80 FUN_14239fb80 body=1238 status=ok
// SIG undefined FUN_14239fb80(void)

longlong * FUN_14239fb80(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined1 uVar8;
  char cVar9;
  DWORD DVar10;
  float *pfVar11;
  DWORD *pDVar12;
  longlong *lpTlsValue;
  longlong *plVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 local_68 [40];
  
  *param_1 = param_2;
  param_1[1] = *(longlong *)(param_2 + 0x348);
  param_1[3] = *(longlong *)(param_2 + 0x3f0);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x310);
  *(undefined1 *)((longlong)param_1 + 0x24) = *(undefined1 *)(param_2 + 0x315);
  *(undefined1 *)((longlong)param_1 + 0x25) = *(undefined1 *)(param_2 + 0x31c);
  *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)(param_2 + 0x316);
  *(byte *)((longlong)param_1 + 0x27) = (byte)(*(uint *)(param_2 + 0x2ec) >> 1) & 1;
  *(bool *)(param_1 + 5) = *(char *)(param_2 + 0x24e) == '\x01';
  uVar8 = FUN_142371b40(param_2);
  *(undefined1 *)((longlong)param_1 + 0x29) = uVar8;
  *(byte *)((longlong)param_1 + 0x2a) = (byte)(*(uint *)(param_2 + 0x2ec) >> 6) & 1;
  uVar5 = *(undefined4 *)(param_2 + 0x224);
  uVar6 = *(undefined4 *)(param_2 + 0x228);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x220);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar6;
  *(undefined4 *)(param_1 + 6) = uVar5;
  fVar17 = *(float *)(param_2 + 0x2e4);
  pfVar11 = (float *)FLinearColor::FLinearColor(local_68,param_2 + 0x2e8);
  fVar18 = pfVar11[2];
  fVar3 = pfVar11[3];
  fVar4 = *pfVar11;
  *(float *)((longlong)param_1 + 0x3c) = fVar17 * pfVar11[1];
  *(float *)(param_1 + 8) = fVar17 * fVar18;
  *(float *)(param_1 + 7) = fVar17 * fVar4;
  *(float *)((longlong)param_1 + 0x44) = fVar17 * fVar3;
  fVar3 = *(float *)(param_2 + 0x324);
  fVar4 = *(float *)(param_2 + 0x328);
  fVar7 = *(float *)(param_2 + 0x32c);
  fVar17 = *(float *)(param_2 + 0x32c);
  fVar18 = *(float *)(param_2 + 0x2e4);
  *(float *)(param_1 + 9) = *(float *)(param_2 + 800) * fVar17 * fVar18;
  *(float *)((longlong)param_1 + 0x4c) = fVar3 * fVar17 * fVar18;
  *(float *)(param_1 + 10) = fVar4 * fVar17 * fVar18;
  *(float *)((longlong)param_1 + 0x54) = fVar7 * fVar17 * fVar18;
  FLinearColor::FLinearColor(param_1 + 0xb);
  _guard_xfg_dispatch_icall_nop(param_1 + 0xe,0,0x90);
  *(undefined4 *)((longlong)param_1 + 0x104) = *(undefined4 *)(param_2 + 0x2f0);
  fVar17 = *(float *)(param_2 + 0x2f4);
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  *(float *)(param_1 + 0x21) = fVar17;
  *(undefined4 *)((longlong)param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x330);
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x334);
  fVar17 = *(float *)(param_2 + 0x338);
  fVar18 = 0.1;
  if ((0.1 <= fVar17) && (fVar18 = fVar17, 10.0 <= fVar17)) {
    fVar18 = 10.0;
  }
  *(float *)((longlong)param_1 + 0x114) = fVar18;
  fVar17 = *(float *)(param_2 + 0x33c);
  fVar18 = 0.0;
  if ((0.0 <= fVar17) && (fVar18 = fVar17, 1.0 <= fVar17)) {
    fVar18 = 1.0;
  }
  *(float *)(param_1 + 0x23) = fVar18;
  FLinearColor::FLinearColor((longlong)param_1 + 0x11c,param_2 + 0x340);
  *(uint *)((longlong)param_1 + 300) = (uint)*(byte *)(param_2 + 0x344);
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar9 = FUN_1415ad720(&DAT_1468e2448), cVar9 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar10 = GetCurrentThreadId(), DVar10 == DAT_1468c21c0)))) {
    uVar5 = *(undefined4 *)(param_2 + 0x3e4);
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_res10);
    FUN_1423b3890(param_1,uVar5,param_2 + 0x350,param_2 + 0x400,param_2 + 0x3e0,param_2 + 0x490);
    QueryPerformanceCounter(&local_res8);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res10._0_4_);
  }
  else {
    pDVar12 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    lpTlsValue = TlsGetValue(*pDVar12);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)operator_new(0x18);
      if (lpTlsValue != (longlong *)0x0) {
        *lpTlsValue = 0;
        lpTlsValue[1] = 0;
        *(undefined4 *)(lpTlsValue + 2) = 0;
      }
      TlsSetValue(*pDVar12,lpTlsValue);
    }
    plVar13 = (longlong *)lpTlsValue[1];
    if (plVar13 == (longlong *)0x0) {
      plVar13 = (longlong *)*lpTlsValue;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar12 + 2);
        lpTlsValue[1] = (longlong)plVar13;
        if (plVar13 == (longlong *)0x0) {
          puVar14 = (undefined8 *)FMemory::Malloc(0x2000,0);
          lpTlsValue[1] = (longlong)puVar14;
          lVar16 = 0x1f;
          do {
            puVar2 = puVar14 + 0x20;
            *puVar14 = puVar2;
            lVar16 = lVar16 + -1;
            puVar14 = puVar2;
          } while (lVar16 != 0);
          iVar15 = 0x20;
          *puVar2 = 0;
          plVar13 = (longlong *)lpTlsValue[1];
          *(undefined4 *)(lpTlsValue + 2) = 0x20;
        }
        else {
          iVar15 = 0x20;
          *(undefined4 *)(lpTlsValue + 2) = 0x20;
        }
      }
      else {
        iVar15 = 0x20;
        lpTlsValue[1] = (longlong)plVar13;
        *(undefined4 *)(lpTlsValue + 2) = 0x20;
        *lpTlsValue = 0;
      }
    }
    else {
      iVar15 = (int)lpTlsValue[2];
    }
    lpTlsValue[1] = *plVar13;
    *(int *)(lpTlsValue + 2) = iVar15 + -1;
    *plVar13 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar13 + 1) = 0xff;
    local_res18 = 0;
    local_res20 = 0;
    *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
    *plVar13 = (longlong)&PTR_FUN_14506d520;
    *(undefined1 *)(plVar13 + 8) = 0;
    plVar13[9] = 0;
    uVar5 = *(undefined4 *)(param_2 + 0x3e4);
    plVar13[2] = param_2 + 0x350;
    plVar13[3] = param_2 + 0x400;
    *(undefined4 *)(plVar13 + 6) = uVar5;
    plVar13[4] = param_2 + 0x3e0;
    plVar13[5] = param_2 + 0x490;
    plVar13[7] = (longlong)param_1;
    lVar16 = plVar13[9];
    if (lVar16 != 0) {
      LOCK();
      *(int *)(lVar16 + 0x48) = *(int *)(lVar16 + 0x48) + 1;
      UNLOCK();
    }
    FUN_140489ef0(uVar5,0,0xff,1);
    if (lVar16 != 0) {
      LOCK();
      piVar1 = (int *)(lVar16 + 0x48);
      iVar15 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        FGraphEvent::Recycle(lVar16);
      }
    }
  }
  return param_1;
}



// FUNCTION 1423a0060 FUN_1423a0060 body=337 status=ok
// SIG undefined FUN_1423a0060(void)

undefined8 * FUN_1423a0060(undefined8 *param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  char cVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  byte bVar6;
  undefined4 local_res8 [2];
  
  FUN_14237eb90();
  uVar5 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_14506bd88;
  bVar6 = 0;
  param_1[5] = &PTR_LAB_145047c50;
  param_1[0x5a] = &PTR_LAB_14506c678;
  pvVar2 = ThreadLocalStoragePointer;
  param_1[0xe1] = 0;
  if (*(int *)(*(longlong *)((longlong)pvVar2 + uVar5 * 8) + 0x38) < DAT_146af0fa8) {
    _Init_thread_header(&DAT_146af0fa8);
    if (DAT_146af0fa8 == -1) {
      FName::FName(&DAT_146af0fa0,L"OverlapAllDynamic",1);
      _Init_thread_footer(&DAT_146af0fa8);
    }
  }
  FUN_142717130(param_1,DAT_146af0fa0);
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) | 0x40;
  *(byte *)((longlong)param_1 + 0x24c) = *(byte *)((longlong)param_1 + 0x24c) | 0x40;
  *(byte *)((longlong)param_1 + 0x2f1) = *(byte *)((longlong)param_1 + 0x2f1) & 0x7f;
  *(byte *)(param_1 + 0xe0) = *(byte *)(param_1 + 0xe0) & 0xfd;
  local_res8[0] = 0xffdf959d;
  *(undefined4 *)(param_1 + 0xde) = 0xffdf959d;
  cVar3 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  *(byte *)(param_1 + 0xe0) = *(byte *)(param_1 + 0xe0) & 0xf7;
  if (cVar3 == '\0') {
    bVar6 = 8;
  }
  *(byte *)(param_1 + 0xe0) = *(byte *)(param_1 + 0xe0) | bVar6;
  *(undefined1 *)((longlong)param_1 + 0x301) = 1;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
  *(byte *)(param_1 + 0xe0) = *(byte *)(param_1 + 0xe0) & 0xfb;
  puVar4 = (undefined8 *)FUN_14224f490(local_res8);
  uVar1 = *puVar4;
  *(byte *)((longlong)param_1 + 0x2ee) = *(byte *)((longlong)param_1 + 0x2ee) | 0x20;
  param_1[0xe1] = uVar1;
  return param_1;
}



// FUNCTION 1423a01c0 FUN_1423a01c0 body=1576 status=ok
// SIG undefined FUN_1423a01c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1423a01c0(undefined8 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong local_58;
  int local_50;
  undefined1 local_48 [64];
  
  FUN_1423a07f0();
  uVar9 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14506b218;
  param_1[5] = &PTR_LAB_14506bcd0;
  param_1[0x5a] = &PTR_LAB_14506bd00;
  param_1[0x146] = &PTR_LAB_14506bd58;
  param_1[0x148] = 0;
  param_1[0x14a] = 0;
  param_1[0x14b] = 0;
  *(uint *)(param_1 + 0x14f) = *(uint *)(param_1 + 0x14f) | 3;
  param_1[0x14e] = 0;
  *(undefined4 *)(param_1 + 0x150) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xa7c) = 0;
  param_1[0x151] = 0;
  param_1[0x152] = 0;
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  *(undefined2 *)(param_1 + 0x159) = 0;
  *(undefined1 *)((longlong)param_1 + 0xaca) = 0;
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  param_1[0x15c] = 0;
  param_1[0x15d] = 0;
  param_1[0x15e] = 0;
  param_1[0x15f] = 0;
  param_1[0x160] = 0;
  *(undefined2 *)(param_1 + 0x161) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb0a) = 0;
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  param_1[0x170] = 0;
  param_1[0x171] = 0;
  uVar11 = uRam0000000146af0bfc;
  param_1[0x176] = 0;
  param_1[0x177] = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)((longlong)param_1 + 0xba4) = 0;
  *(undefined4 *)(param_1 + 0x175) = 0;
  *(uint *)((longlong)param_1 + 0xbac) = uVar11;
  uVar11 = uRam0000000146af0bf4 & uRam0000000146af0c04;
  uVar12 = uRam0000000146af0bf8 & uRam0000000146af0c08;
  uVar13 = uRam0000000146af0bfc & uRam0000000146af0c0c;
  *(uint *)(param_1 + 0x178) = _DAT_146af0bf0 & _DAT_146af0c00;
  *(uint *)((longlong)param_1 + 0xbc4) = uVar11;
  *(uint *)(param_1 + 0x179) = uVar12;
  *(uint *)((longlong)param_1 + 0xbcc) = uVar13;
  param_1[0x17a] = 0;
  param_1[0x17b] = 0;
  param_1[0x17c] = 0;
  param_1[0x17d] = 0;
  param_1[0x17e] = 0;
  param_1[0x17f] = 0;
  param_1[0x180] = 0;
  param_1[0x181] = 0;
  FTickFunction::FTickFunction(param_1 + 0x183);
  param_1[0x183] = &PTR__scalar_deleting_destructor__14506b200;
  param_1[0x19d] = 0;
  param_1[0x19e] = 0;
  param_1[0x19f] = 0;
  param_1[0x1a0] = 0;
  param_1[0x1a1] = 0;
  param_1[0x1a4] = 0;
  param_1[0x1a5] = 0;
  *(undefined4 *)(param_1 + 0x1a6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd34) = 0;
  param_1[0x1a8] = 0;
  *(undefined4 *)(param_1 + 0x1a9) = 0;
  param_1[0x1aa] = 0;
  param_1[0x1ab] = 0;
  param_1[0x1ae] = 0;
  param_1[0x1af] = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd84) = 0;
  param_1[0x1b2] = 0;
  *(undefined4 *)(param_1 + 0x1b3) = 0;
  param_1[0x1b4] = 0;
  param_1[0x1b5] = 0;
  FTickFunction::FTickFunction(param_1 + 0x1b6);
  param_1[0x1b6] = &PTR__scalar_deleting_destructor__14506b1e8;
  param_1[0x1c1] = 0;
  param_1[0x1c2] = 0;
  param_1[0x1c5] = 0;
  param_1[0x1c6] = 0;
  param_1[0x1c7] = 0;
  param_1[0x1c8] = 0;
  param_1[0x1cb] = 0;
  param_1[0x1cc] = 0;
  param_1[0x1cd] = 0;
  *(undefined2 *)(param_1 + 0x1ce) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe72) = 0;
  param_1[0x1c3] = 0;
  param_1[0x1c4] = 0;
  param_1[0x1cf] = 0;
  param_1[0x1d0] = 0;
  param_1[0x1d1] = 2;
  param_1[0x1d2] = 0;
  param_1[0x1d3] = 0;
  param_1[0x1d4] = 2;
  *(undefined1 *)((longlong)param_1 + 0xeae) = 1;
  *(undefined1 *)(param_1 + 0x1d6) = 0;
  param_1[0x1d7] = 0;
  param_1[0x1d8] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d9));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1d9),4000);
  param_1[0x1de] = 0;
  param_1[0x1e0] = 0;
  param_1[0x1e1] = 0;
  param_1[0x1e2] = 2;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  *(undefined2 *)((longlong)param_1 + 0xf1c) = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfe | 2;
  *(undefined1 *)(param_1 + 7) = 0;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  *(byte *)((longlong)param_1 + 0xb1c) = *(byte *)((longlong)param_1 + 0xb1c) & 0xfb;
  *(undefined4 *)(param_1 + 0x162) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x10f) = 4;
  *(undefined2 *)((longlong)param_1 + 0xb15) = 0;
  FUN_1423974f0(param_1,0);
  local_50 = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xaa4) = 0x3f8000003f800000;
  *(undefined4 *)((longlong)param_1 + 0xaac) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1b7) = 3;
  *(byte *)((longlong)param_1 + 0xdbc) = *(byte *)((longlong)param_1 + 0xdbc) | 6;
  *(undefined2 *)(param_1 + 0x184) = 0x400;
  *(byte *)((longlong)param_1 + 0xc24) = *(byte *)((longlong)param_1 + 0xc24) | 2;
  *(byte *)((longlong)param_1 + 0xb1b) = *(byte *)((longlong)param_1 + 0xb1b) | 0x80;
  *(undefined4 *)((longlong)param_1 + 0xb64) = 0x3f800000;
  param_1[0x18e] = 0x43960000;
  *(undefined4 *)((longlong)param_1 + 0xb34) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xb17) = 0;
  puVar5 = (undefined8 *)FUN_1423acc10(param_1,local_48,0);
  uVar8 = puVar5[1];
  param_1[0x192] = *puVar5;
  param_1[0x193] = uVar8;
  uVar8 = puVar5[3];
  param_1[0x194] = puVar5[2];
  param_1[0x195] = uVar8;
  uVar8 = puVar5[5];
  param_1[0x196] = puVar5[4];
  param_1[0x197] = uVar8;
  uVar8 = puVar5[7];
  param_1[0x198] = puVar5[6];
  param_1[0x199] = uVar8;
  fVar10 = _guard_xfg_dispatch_icall_nop(*(float *)((longlong)param_1 + 0xc74) * 0.017453292);
  *(byte *)((longlong)param_1 + 0xb1b) = *(byte *)((longlong)param_1 + 0xb1b) & 0xfd;
  *(byte *)((longlong)param_1 + 0xb1d) = *(byte *)((longlong)param_1 + 0xb1d) & 0x7f;
  *(undefined4 *)(param_1 + 0x167) = 0x3f800000;
  *(float *)(param_1 + 399) = fVar10;
  *(undefined4 *)((longlong)param_1 + 0xb3c) = 0x3f800000;
  *(float *)((longlong)param_1 + 0xc7c) = *(float *)(param_1 + 0x18e) * *(float *)(param_1 + 0x18e);
  param_1[0x168] = 0x3f800000;
  param_1[0x169] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x16a) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb54) = 0;
  plVar6 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  if (plVar6[0x1f] == 0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
  }
  cVar1 = *(char *)(plVar6[0x1f] + 0xa8);
  *(byte *)(param_1 + 0x110) = *(byte *)(param_1 + 0x110) | 0x20;
  *(byte *)((longlong)param_1 + 0xb1a) =
       *(byte *)((longlong)param_1 + 0xb1a) ^
       (cVar1 << 4 ^ *(byte *)((longlong)param_1 + 0xb1a)) & 0x10;
  plVar6 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar7 = plVar6[0x1f];
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
    lVar7 = plVar6[0x1f];
  }
  *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(lVar7 + 0x48);
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined1 *)((longlong)param_1 + 0x301) = 1;
  *(byte *)((longlong)param_1 + 0xb9) = *(byte *)((longlong)param_1 + 0xb9) | 0x20;
  *(undefined2 *)(param_1 + 0x166) = 0;
  *(undefined1 *)((longlong)param_1 + 0xeac) = 0;
  *(undefined4 *)(param_1 + 0x172) = 0xffffffff;
  uVar8 = uRam00000001468b5b78;
  param_1[0x174] = _DAT_1468b5b70;
  param_1[0x175] = uVar8;
  uVar4 = uRam00000001468b5b8c;
  uVar3 = uRam00000001468b5b88;
  uVar2 = uRam00000001468b5b84;
  *(undefined4 *)(param_1 + 0x176) = _DAT_1468b5b80;
  *(undefined4 *)((longlong)param_1 + 0xbb4) = uVar2;
  *(undefined4 *)(param_1 + 0x177) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xbbc) = uVar4;
  uVar4 = uRam00000001468b5b9c;
  uVar3 = uRam00000001468b5b98;
  uVar2 = uRam00000001468b5b94;
  *(undefined4 *)(param_1 + 0x178) = _DAT_1468b5b90;
  *(undefined4 *)((longlong)param_1 + 0xbc4) = uVar2;
  *(undefined4 *)(param_1 + 0x179) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xbcc) = uVar4;
  uVar8 = FUN_141593110();
  IModularFeatures::GetModularFeatureImplementations<IInputDeviceModule>
            (uVar8,&local_58,DAT_146aedc70);
  if (0 < local_50) {
    uVar9 = (**(code **)**(undefined8 **)(local_58 + (longlong)(local_50 + -1) * 8))();
  }
  param_1[0x16f] = uVar9;
  *(byte *)((longlong)param_1 + 0xb1e) = *(byte *)((longlong)param_1 + 0xb1e) & 0xfd;
  *(byte *)((longlong)param_1 + 0xb1a) = *(byte *)((longlong)param_1 + 0xb1a) | 0x80;
  *(byte *)((longlong)param_1 + 0x881) = *(byte *)((longlong)param_1 + 0x881) | 8;
  param_1[0x19a] = 0;
  param_1[0x19b] = 0;
  param_1[0x19c] = 0;
  *(undefined1 *)(param_1 + 0x14d) = 0;
  *(undefined1 *)((longlong)param_1 + 0xeb1) = 1;
  *(undefined1 *)(param_1 + 0x133) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf1c) = 0;
  *(undefined1 *)(param_1 + 0x1df) = 1;
  if (local_58 != 0) {
    FMemory::Free(local_58);
  }
  return param_1;
}



// FUNCTION 1423a07f0 FUN_1423a07f0 body=650 status=ok
// SIG undefined FUN_1423a07f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1423a07f0(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_14235ed30();
  *param_1 = &PTR__scalar_deleting_destructor__14506a680;
  param_1[5] = &PTR_LAB_14506b0a8;
  param_1[0x5a] = &PTR_LAB_14506b0d8;
  *(undefined4 *)(param_1 + 0xe4) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x724) = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  *(undefined4 *)(param_1 + 0xfa) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7d4) = 0;
  param_1[0xfc] = 0;
  *(undefined4 *)(param_1 + 0xfd) = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  uVar1 = uRam0000000146af0bfc;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  *(undefined4 *)(param_1 + 0x116) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8b4) = 0;
  *(undefined4 *)(param_1 + 0x117) = 0;
  *(uint *)((longlong)param_1 + 0x8bc) = uVar1;
  uVar1 = uRam0000000146af0bf4 & uRam0000000146af0c04;
  uVar2 = uRam0000000146af0bf8 & uRam0000000146af0c08;
  uVar3 = uRam0000000146af0bfc & uRam0000000146af0c0c;
  *(uint *)(param_1 + 0x11a) = _DAT_146af0bf0 & _DAT_146af0c00;
  *(uint *)((longlong)param_1 + 0x8d4) = uVar1;
  *(uint *)(param_1 + 0x11b) = uVar2;
  *(uint *)((longlong)param_1 + 0x8dc) = uVar3;
  param_1[0x11c] = 0;
  *(undefined4 *)(param_1 + 0x11d) = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  *(undefined1 *)((longlong)param_1 + 0x95c) = 1;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x12f] = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  param_1[0x131] = 0;
  *(undefined4 *)(param_1 + 0x132) = 0;
  param_1[0x135] = 0;
  param_1[0x13e] = 0;
  param_1[0x13f] = 0;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 0x10f) = 0;
  FUN_142717130(param_1,DAT_146aefc58);
  *(byte *)(param_1 + 0x110) = *(byte *)(param_1 + 0x110) & 0xfe;
  *(undefined4 *)(param_1 + 0x10a) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x303) = 2;
  *(byte *)((longlong)param_1 + 0x879) = *(byte *)((longlong)param_1 + 0x879) | 0x20;
  *(byte *)(param_1 + 0x110) = *(byte *)(param_1 + 0x110) & 0xf3;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe;
  *(uint *)((longlong)param_1 + 0x87c) = *(uint *)((longlong)param_1 + 0x87c) | 1;
  *(byte *)((longlong)param_1 + 0x881) = *(byte *)((longlong)param_1 + 0x881) & 0xfd | 1;
  *(undefined4 *)(param_1 + 0x112) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x76c) = 0;
  param_1[0xee] = 1;
  *(undefined4 *)(param_1 + 0xf3) = 0;
  param_1[0x140] = 0;
  *(undefined4 *)((longlong)param_1 + 0x844) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x109) = 0;
  return param_1;
}



// FUNCTION 1423a0a80 FUN_1423a0a80 body=267 status=ok
// SIG undefined FUN_1423a0a80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1423a0a80(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_14235eb10();
  *param_1 = &PTR_FUN_14506c8b0;
  param_1[5] = &PTR_LAB_14506ce00;
  param_1[0x69] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x6a,0,0x90);
  param_1[0x7e] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x80,0,0x90);
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5e) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x62) = 0x48127c00;
  *(undefined1 *)((longlong)param_1 + 0x24e) = 1;
  *(undefined1 *)((longlong)param_1 + 0x31c) = 1;
  *(undefined2 *)((longlong)param_1 + 0x345) = 1;
  *(undefined4 *)(param_1 + 0x66) = 0x447a0000;
  param_1[0x67] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x68) = DAT_1464aa734;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0x80;
  uVar2 = _DAT_1464aa6e8;
  uVar1 = _DAT_1464aa6e0;
  *(uint *)((longlong)param_1 + 0x2ec) = *(uint *)((longlong)param_1 + 0x2ec) | 0x40;
  *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
  param_1[100] = uVar1;
  param_1[0x65] = uVar2;
  *(undefined4 *)(param_1 + 0x92) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x31d) = 0;
  return param_1;
}



// FUNCTION 1423a0b90 FUN_1423a0b90 body=416 status=ok
// SIG undefined FUN_1423a0b90(void)

undefined8 * FUN_1423a0b90(undefined8 *param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  char cVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  byte bVar6;
  undefined4 local_res8 [2];
  
  FUN_14237eb90();
  uVar5 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_14506bd88;
  bVar6 = 0;
  param_1[5] = &PTR_LAB_145047c50;
  param_1[0x5a] = &PTR_LAB_14506c678;
  pvVar2 = ThreadLocalStoragePointer;
  param_1[0xe1] = 0;
  if (*(int *)(*(longlong *)((longlong)pvVar2 + uVar5 * 8) + 0x38) < DAT_146af0fa8) {
    _Init_thread_header(&DAT_146af0fa8);
    if (DAT_146af0fa8 == -1) {
      FName::FName(&DAT_146af0fa0,L"OverlapAllDynamic",1);
      _Init_thread_footer(&DAT_146af0fa8);
    }
  }
  FUN_142717130(param_1,DAT_146af0fa0);
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) | 0x40;
  *(byte *)((longlong)param_1 + 0x24c) = *(byte *)((longlong)param_1 + 0x24c) | 0x40;
  *(byte *)((longlong)param_1 + 0x2f1) = *(byte *)((longlong)param_1 + 0x2f1) & 0x7f;
  *(byte *)(param_1 + 0xe0) = *(byte *)(param_1 + 0xe0) & 0xfd;
  local_res8[0] = 0xffdf959d;
  *(undefined4 *)(param_1 + 0xde) = 0xffdf959d;
  cVar3 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  *(byte *)(param_1 + 0xe0) = *(byte *)(param_1 + 0xe0) & 0xf7;
  if (cVar3 == '\0') {
    bVar6 = 8;
  }
  *(byte *)(param_1 + 0xe0) = *(byte *)(param_1 + 0xe0) | bVar6;
  *(undefined1 *)((longlong)param_1 + 0x301) = 1;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
  *(byte *)(param_1 + 0xe0) = *(byte *)(param_1 + 0xe0) & 0xfb;
  puVar4 = (undefined8 *)FUN_14224f490(local_res8);
  uVar1 = *puVar4;
  *(byte *)((longlong)param_1 + 0x2ee) = *(byte *)((longlong)param_1 + 0x2ee) | 0x20;
  *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) | 0x40;
  *param_1 = &PTR__scalar_deleting_destructor__145053250;
  param_1[5] = &PTR_LAB_1450491d8;
  param_1[0x5a] = &PTR_LAB_145049208;
  *(undefined4 *)(param_1 + 0xde) = 0xffff0000;
  param_1[0xe1] = uVar1;
  *(undefined4 *)(param_1 + 0xe2) = 0x42000000;
  return param_1;
}



// FUNCTION 1423a0d30 FUN_1423a0d30 body=1378 status=ok
// SIG undefined FUN_1423a0d30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1423a0d30(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 *puVar5;
  
  FUN_14237eb90();
  plVar1 = param_1 + 0xde;
  *param_1 = &PTR_FUN_14506d6f8;
  param_1[5] = &PTR_LAB_14506dfe0;
  param_1[0x5a] = &PTR_LAB_14506e010;
  *plVar1 = 0;
  param_1[0xdf] = 0;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  *(undefined1 *)(param_1 + 0xe3) = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  *(undefined1 *)(param_1 + 0xe6) = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  *(undefined1 *)(param_1 + 0xe9) = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  *(undefined1 *)(param_1 + 0xec) = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  *(undefined1 *)(param_1 + 0xef) = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  *(undefined1 *)(param_1 + 0xf2) = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  *(undefined1 *)(param_1 + 0xf5) = 0;
  *(undefined1 *)(param_1 + 0xf6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x7b4) = 10;
  param_1[0xf7] = 0x3f800000;
  *(undefined2 *)(param_1 + 0xf8) = 1;
  param_1[0xf9] = DAT_1464aa798;
  *(undefined4 *)(param_1 + 0xfa) = DAT_1464aa7a0;
  *(undefined4 *)(param_1 + 0xdf) = 0;
  if (*(int *)((longlong)param_1 + 0x6fc) < 10) {
    TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::ResizeTo(plVar1,10);
  }
  plVar2 = param_1 + 0xe1;
  *(undefined4 *)(param_1 + 0xe2) = 0;
  if (*(int *)((longlong)param_1 + 0x714) < 10) {
    TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(plVar2,10);
  }
  plVar3 = param_1 + 0xe4;
  *(undefined4 *)(param_1 + 0xe5) = 0;
  if (*(int *)((longlong)param_1 + 0x72c) < 10) {
    TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::ResizeTo(plVar3,10);
  }
  iVar4 = *(int *)(param_1 + 0xdf);
  *(int *)(param_1 + 0xdf) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0x6fc) < iVar4 + 1) {
    TArray<UTTLCameraModifier::FTTLCameraPostFx,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
  }
  puVar5 = (undefined4 *)((longlong)iVar4 * 0x2c + *plVar1);
  *(undefined8 *)(puVar5 + 1) = 0;
  puVar5[3] = 0;
  *puVar5 = 0;
  *(undefined8 *)(puVar5 + 4) = _DAT_1468b5d90;
  puVar5[6] = DAT_1468b5d98;
  *(undefined8 *)(puVar5 + 7) = _DAT_1468b5d90;
  puVar5[9] = DAT_1468b5d98;
  *(undefined1 *)(puVar5 + 10) = 1;
  iVar4 = *(int *)(param_1 + 0xe2);
  *(int *)(param_1 + 0xe2) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0x714) < iVar4 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar2,iVar4);
  }
  puVar5 = (undefined4 *)((longlong)iVar4 * 0x50 + *plVar2);
  *puVar5 = 0;
  puVar5[4] = DAT_1464aa810;
  puVar5[5] = DAT_1464aa814;
  puVar5[6] = DAT_1464aa818;
  puVar5[7] = DAT_1464aa81c;
  puVar5[8] = DAT_1464aa810;
  puVar5[9] = DAT_1464aa814;
  puVar5[10] = DAT_1464aa818;
  puVar5[0xb] = DAT_1464aa81c;
  puVar5[0xc] = DAT_1464aa810;
  puVar5[0xd] = DAT_1464aa814;
  puVar5[0xe] = DAT_1464aa818;
  puVar5[0xf] = DAT_1464aa81c;
  *(undefined1 *)(puVar5 + 0x10) = 1;
  iVar4 = *(int *)(param_1 + 0xe5);
  *(int *)(param_1 + 0xe5) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0x72c) < iVar4 + 1) {
    TArray<UTTLCameraModifier::FTTLCameraPostFx,FDefaultAllocator>::ResizeGrow(plVar3,iVar4);
  }
  puVar5 = (undefined4 *)((longlong)iVar4 * 0x2c + *plVar3);
  *(undefined8 *)(puVar5 + 1) = 0x3f8000003f800000;
  puVar5[3] = 0x3f800000;
  *puVar5 = 0;
  *(undefined8 *)(puVar5 + 4) = _DAT_1468b5d90;
  puVar5[6] = DAT_1468b5d98;
  *(undefined8 *)(puVar5 + 7) = _DAT_1468b5d90;
  puVar5[9] = DAT_1468b5d98;
  *(undefined1 *)(puVar5 + 10) = 1;
  iVar4 = *(int *)(param_1 + 0xdf);
  *(int *)(param_1 + 0xdf) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0x6fc) < iVar4 + 1) {
    TArray<UTTLCameraModifier::FTTLCameraPostFx,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
  }
  puVar5 = (undefined4 *)((longlong)iVar4 * 0x2c + *plVar1);
  *(undefined8 *)(puVar5 + 1) = 0x42c80000;
  puVar5[3] = 0;
  *puVar5 = 0x3f800000;
  *(undefined8 *)(puVar5 + 4) = _DAT_1468b5d90;
  puVar5[6] = DAT_1468b5d98;
  *(undefined8 *)(puVar5 + 7) = _DAT_1468b5d90;
  puVar5[9] = DAT_1468b5d98;
  *(undefined1 *)(puVar5 + 10) = 1;
  iVar4 = *(int *)(param_1 + 0xe2);
  *(int *)(param_1 + 0xe2) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0x714) < iVar4 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar2,iVar4);
  }
  puVar5 = (undefined4 *)((longlong)iVar4 * 0x50 + *plVar2);
  *puVar5 = 0x3f800000;
  puVar5[4] = DAT_1464aa810;
  puVar5[5] = DAT_1464aa814;
  puVar5[6] = DAT_1464aa818;
  puVar5[7] = DAT_1464aa81c;
  puVar5[8] = DAT_1464aa810;
  puVar5[9] = DAT_1464aa814;
  puVar5[10] = DAT_1464aa818;
  puVar5[0xb] = DAT_1464aa81c;
  puVar5[0xc] = DAT_1464aa810;
  puVar5[0xd] = DAT_1464aa814;
  puVar5[0xe] = DAT_1464aa818;
  puVar5[0xf] = DAT_1464aa81c;
  *(undefined1 *)(puVar5 + 0x10) = 1;
  iVar4 = *(int *)(param_1 + 0xe5);
  *(int *)(param_1 + 0xe5) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0x72c) < iVar4 + 1) {
    TArray<UTTLCameraModifier::FTTLCameraPostFx,FDefaultAllocator>::ResizeGrow(plVar3,iVar4);
  }
  puVar5 = (undefined4 *)((longlong)iVar4 * 0x2c + *plVar3);
  *(undefined8 *)(puVar5 + 1) = 0x3f8000003f800000;
  puVar5[3] = 0x3f800000;
  *puVar5 = 0x3f800000;
  *(undefined8 *)(puVar5 + 4) = _DAT_1468b5d90;
  puVar5[6] = DAT_1468b5d98;
  *(undefined8 *)(puVar5 + 7) = _DAT_1468b5d90;
  puVar5[9] = DAT_1468b5d98;
  *(undefined1 *)(puVar5 + 10) = 1;
  FUN_1423c1a10(param_1);
  FInterpCurveVector::operator=(param_1 + 0xea,plVar1);
  FInterpCurveQuat::operator=(param_1 + 0xed,plVar2);
  FInterpCurveVector::operator=(param_1 + 0xf0,plVar3);
  FInterpCurveFloat::operator=(param_1 + 0xf3,param_1 + 0xe7);
  return param_1;
}



// FUNCTION 1423a12a0 ~FFindPolygonsAlgorithm body=126 status=ok
// SIG undefined ~FFindPolygonsAlgorithm(void)

void FFindPolygonsAlgorithm::~FFindPolygonsAlgorithm(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x10);
  plVar1 = *(longlong **)(param_1 + 8);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 8);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 1423a1320 FUN_1423a1320 body=79 status=ok
// SIG undefined FUN_1423a1320(void)

void FUN_1423a1320(longlong *param_1)

{
  undefined8 *puVar1;
  
  FUN_1423a66a0();
  puVar1 = (undefined8 *)param_1[6];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[6] = 0;
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1423a1370 operator= body=160 status=ok
// SIG undefined operator=(void)

longlong * FInterpCurveFloat::operator=(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (param_1 != param_2) {
    lVar1 = *param_2;
    iVar4 = (int)param_2[1];
    *(int *)(param_1 + 1) = iVar4;
    if ((iVar4 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1405d62d0(param_1,iVar4);
      if (iVar4 != 0) {
        puVar2 = (undefined4 *)(lVar1 + 8);
        puVar3 = (undefined4 *)*param_1;
        do {
          *puVar3 = puVar2[-2];
          puVar3[1] = puVar2[-1];
          puVar3[2] = *puVar2;
          puVar3[3] = puVar2[1];
          *(undefined1 *)(puVar3 + 4) = *(undefined1 *)(puVar2 + 2);
          iVar4 = iVar4 + -1;
          puVar2 = puVar2 + 5;
          puVar3 = puVar3 + 5;
        } while (iVar4 != 0);
      }
    }
  }
  *(char *)(param_1 + 2) = (char)param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  return param_1;
}



// FUNCTION 1423a1410 operator= body=235 status=ok
// SIG undefined operator=(void)

longlong * FInterpCurveQuat::operator=(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (param_1 != param_2) {
    lVar1 = *param_2;
    iVar4 = (int)param_2[1];
    *(int *)(param_1 + 1) = iVar4;
    if ((iVar4 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FDungeonMarkerInfo,FDefaultAllocator>::ResizeForCopy(param_1,iVar4);
      puVar5 = (undefined4 *)*param_1;
      if (iVar4 != 0) {
        puVar2 = (undefined4 *)(lVar1 + 0x18);
        puVar3 = puVar5 + 6;
        do {
          *puVar5 = puVar2[-6];
          puVar5 = puVar5 + 0x14;
          puVar3[-2] = puVar2[-2];
          puVar3[-1] = puVar2[-1];
          *puVar3 = *puVar2;
          puVar3[1] = puVar2[1];
          puVar3[2] = puVar2[2];
          puVar3[3] = puVar2[3];
          puVar3[4] = puVar2[4];
          puVar3[5] = puVar2[5];
          puVar3[6] = puVar2[6];
          puVar3[7] = puVar2[7];
          puVar3[8] = puVar2[8];
          puVar3[9] = puVar2[9];
          *(undefined1 *)(puVar3 + 10) = *(undefined1 *)(puVar2 + 10);
          iVar4 = iVar4 + -1;
          puVar2 = puVar2 + 0x14;
          puVar3 = puVar3 + 0x14;
        } while (iVar4 != 0);
      }
    }
  }
  *(char *)(param_1 + 2) = (char)param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  return param_1;
}



// FUNCTION 1423a1500 FUN_1423a1500 body=133 status=ok
// SIG undefined FUN_1423a1500(void)

longlong * FUN_1423a1500(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  lVar2 = 9;
  do {
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,param_2,4);
      }
    }
    else {
      *param_2 = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    param_2 = param_2 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return param_1;
}



// FUNCTION 1423a1590 operator== body=254 status=ok
// SIG undefined operator==(void)

ulonglong operator==(longlong *param_1,undefined8 *param_2)

{
  ulonglong in_RAX;
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  
  iVar4 = (int)param_1[1];
  if (iVar4 == *(int *)(param_2 + 1)) {
    pfVar3 = (float *)*param_2;
    if (iVar4 != 0) {
      pfVar2 = pfVar3 + 3;
      pfVar1 = (float *)(*param_1 + 0xc);
      do {
        if (((((((*pfVar3 != pfVar1[-3]) || (pfVar2[-2] != pfVar1[-2])) ||
               (pfVar2[-1] != pfVar1[-1])) || ((*pfVar2 != *pfVar1 || (pfVar2[1] != pfVar1[1])))) ||
             ((pfVar2[2] != pfVar1[2] || ((pfVar2[3] != pfVar1[3] || (pfVar2[4] != pfVar1[4]))))))
            || (pfVar2[5] != pfVar1[5])) ||
           ((pfVar2[6] != pfVar1[6] || (in_RAX = 0, *(char *)(pfVar1 + 7) != *(char *)(pfVar2 + 7)))
           )) goto LAB_1423a168b;
        pfVar3 = pfVar3 + 0xb;
        pfVar2 = pfVar2 + 0xb;
        pfVar1 = pfVar1 + 0xb;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    in_RAX = 0;
    if (((char)param_1[2] == *(char *)(param_2 + 2)) &&
       (((char)param_1[2] == '\0' ||
        (*(float *)((longlong)param_2 + 0x14) == *(float *)((longlong)param_1 + 0x14))))) {
      return 1;
    }
  }
LAB_1423a168b:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1423a1690 FUN_1423a1690 body=455 status=ok
// SIG undefined FUN_1423a1690(void)

void FUN_1423a1690(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  wchar_t *_Src;
  short *psVar9;
  short *psVar10;
  short *psVar11;
  undefined8 local_res18;
  short *local_58;
  undefined8 local_50;
  wchar_t *local_48;
  int local_40;
  
  local_50 = 0x20;
  psVar10 = (short *)0x0;
  bVar1 = false;
  local_58 = (short *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  psVar9 = local_58;
  FGenericPlatformString::Memcpy(local_58,L"DisableTickingFromSleepEvent - ",0x40);
  if (*(longlong *)(*param_1 + 0x718) == 0) {
    _Src = L"NoMesh";
  }
  else {
    local_res18 = *(undefined8 *)(*(longlong *)(*param_1 + 0x718) + 0x18);
    FName::ToString(&local_res18,&local_48);
    _Src = L"";
    if (local_40 != 0) {
      _Src = local_48;
    }
    bVar1 = true;
  }
  uVar3 = local_50;
  lVar8 = -1;
  lVar6 = -1;
  do {
    lVar6 = lVar6 + 1;
  } while (_Src[lVar6] != L'\0');
  iVar5 = (int)lVar6;
  if (iVar5 != 0) {
    iVar2 = (int)local_50;
    lVar6 = (longlong)(int)local_50;
    iVar4 = (uint)((int)local_50 == 0) + (int)local_50 + iVar5;
    local_50 = CONCAT44(local_50._4_4_,iVar4);
    if (local_50._4_4_ < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,uVar3 & 0xffffffff);
      psVar9 = local_58;
    }
    _guard_xfg_dispatch_icall_nop
              (psVar9 + (lVar6 - (ulonglong)(iVar2 != 0)),_Src,(longlong)iVar5 * 2);
    (psVar9 + (lVar6 - (ulonglong)(iVar2 != 0)))[iVar5] = 0;
  }
  if ((bVar1) && (local_48 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  local_58 = (short *)0x0;
  psVar11 = &DAT_143f3eda8;
  if ((int)local_50 != 0) {
    psVar11 = psVar9;
  }
  local_50 = 0;
  if ((psVar11 != (short *)0x0) && (*psVar11 != 0)) {
    do {
      lVar8 = lVar8 + 1;
    } while (psVar11[lVar8] != 0);
    uVar7 = (int)lVar8 + 1;
    local_50 = (ulonglong)uVar7;
    if (0 < (int)uVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    }
    psVar10 = local_58;
    FGenericPlatformString::Memcpy(local_58,psVar11,(longlong)(int)uVar7 * 2);
  }
  if (*(longlong *)(*param_1 + 0x120) == 0) {
    FUN_1423407b0();
  }
  if (psVar10 != (short *)0x0) {
    FMemory::Free(psVar10);
  }
  if (psVar9 != (short *)0x0) {
    FMemory::Free(psVar9);
  }
  return;
}



// FUNCTION 1423a1860 FUN_1423a1860 body=455 status=ok
// SIG undefined FUN_1423a1860(void)

void FUN_1423a1860(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  wchar_t *_Src;
  short *psVar9;
  short *psVar10;
  short *psVar11;
  undefined8 local_res18;
  short *local_58;
  undefined8 local_50;
  wchar_t *local_48;
  int local_40;
  
  local_50 = 0x1e;
  psVar10 = (short *)0x0;
  bVar1 = false;
  local_58 = (short *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  psVar9 = local_58;
  FGenericPlatformString::Memcpy(local_58,L"EnableTickingFromWakeEvent - ",0x3c);
  if (*(longlong *)(*param_1 + 0x718) == 0) {
    _Src = L"NoMesh";
  }
  else {
    local_res18 = *(undefined8 *)(*(longlong *)(*param_1 + 0x718) + 0x18);
    FName::ToString(&local_res18,&local_48);
    _Src = L"";
    if (local_40 != 0) {
      _Src = local_48;
    }
    bVar1 = true;
  }
  uVar3 = local_50;
  lVar8 = -1;
  lVar6 = -1;
  do {
    lVar6 = lVar6 + 1;
  } while (_Src[lVar6] != L'\0');
  iVar5 = (int)lVar6;
  if (iVar5 != 0) {
    iVar2 = (int)local_50;
    lVar6 = (longlong)(int)local_50;
    iVar4 = (uint)((int)local_50 == 0) + (int)local_50 + iVar5;
    local_50 = CONCAT44(local_50._4_4_,iVar4);
    if (local_50._4_4_ < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,uVar3 & 0xffffffff);
      psVar9 = local_58;
    }
    _guard_xfg_dispatch_icall_nop
              (psVar9 + (lVar6 - (ulonglong)(iVar2 != 0)),_Src,(longlong)iVar5 * 2);
    (psVar9 + (lVar6 - (ulonglong)(iVar2 != 0)))[iVar5] = 0;
  }
  if ((bVar1) && (local_48 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  local_58 = (short *)0x0;
  psVar11 = &DAT_143f3eda8;
  if ((int)local_50 != 0) {
    psVar11 = psVar9;
  }
  local_50 = 0;
  if ((psVar11 != (short *)0x0) && (*psVar11 != 0)) {
    do {
      lVar8 = lVar8 + 1;
    } while (psVar11[lVar8] != 0);
    uVar7 = (int)lVar8 + 1;
    local_50 = (ulonglong)uVar7;
    if (0 < (int)uVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    }
    psVar10 = local_58;
    FGenericPlatformString::Memcpy(local_58,psVar11,(longlong)(int)uVar7 * 2);
  }
  if (*(longlong *)(*param_1 + 0x120) == 0) {
    FUN_1423407b0();
  }
  if (psVar10 != (short *)0x0) {
    FMemory::Free(psVar10);
  }
  if (psVar9 != (short *)0x0) {
    FMemory::Free(psVar9);
  }
  return;
}



// FUNCTION 1423a1a30 FUN_1423a1a30 body=226 status=ok
// SIG undefined FUN_1423a1a30(void)

void FUN_1423a1a30(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *local_18;
  undefined8 local_10;
  
  uVar6 = 0;
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_142695960(*param_1 + 0x3b0,&local_18);
  uVar5 = (ulonglong)((longlong)(local_18 + (int)local_10) + (7 - (longlong)local_18)) >> 3;
  if (local_18 + (int)local_10 < local_18) {
    uVar5 = uVar6;
  }
  plVar4 = local_18;
  if (uVar5 != 0) {
    do {
      lVar1 = *plVar4;
      cVar3 = FBodyInstance::IsShapeBoundToBody(*param_1 + 0x3b0,lVar1);
      if (cVar3 != '\0') {
        lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x6f8) + 0x38);
        *(undefined4 *)(lVar2 + 0x20) = 6;
        *(longlong *)(lVar2 + 0x28) = lVar2;
        *(longlong *)(lVar1 + 0x10) = lVar2 + 0x20;
      }
      uVar6 = uVar6 + 1;
      plVar4 = plVar4 + 1;
    } while (uVar6 != uVar5);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 1423a1b20 FUN_1423a1b20 body=226 status=ok
// SIG undefined FUN_1423a1b20(void)

void FUN_1423a1b20(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *local_18;
  undefined8 local_10;
  
  uVar6 = 0;
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_142695960(*param_1 + 0x3b0,&local_18);
  uVar5 = (ulonglong)((longlong)(local_18 + (int)local_10) + (7 - (longlong)local_18)) >> 3;
  if (local_18 + (int)local_10 < local_18) {
    uVar5 = uVar6;
  }
  plVar4 = local_18;
  if (uVar5 != 0) {
    do {
      lVar1 = *plVar4;
      cVar3 = FBodyInstance::IsShapeBoundToBody(*param_1 + 0x3b0,lVar1);
      if (cVar3 != '\0') {
        lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x6f8) + 0x28);
        *(undefined4 *)(lVar2 + 0x20) = 6;
        *(longlong *)(lVar2 + 0x28) = lVar2;
        *(longlong *)(lVar1 + 0x10) = lVar2 + 0x20;
      }
      uVar6 = uVar6 + 1;
      plVar4 = plVar4 + 1;
    } while (uVar6 != uVar5);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 1423a1c10 FUN_1423a1c10 body=226 status=ok
// SIG undefined FUN_1423a1c10(void)

void FUN_1423a1c10(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *local_18;
  undefined8 local_10;
  
  uVar6 = 0;
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_142695960(*param_1 + 0x3b0,&local_18);
  uVar5 = (ulonglong)((longlong)(local_18 + (int)local_10) + (7 - (longlong)local_18)) >> 3;
  if (local_18 + (int)local_10 < local_18) {
    uVar5 = uVar6;
  }
  plVar4 = local_18;
  if (uVar5 != 0) {
    do {
      lVar1 = *plVar4;
      cVar3 = FBodyInstance::IsShapeBoundToBody(*param_1 + 0x3b0,lVar1);
      if (cVar3 != '\0') {
        lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x6f8) + 0x58);
        *(undefined4 *)(lVar2 + 0x20) = 6;
        *(longlong *)(lVar2 + 0x28) = lVar2;
        *(longlong *)(lVar1 + 0x10) = lVar2 + 0x20;
      }
      uVar6 = uVar6 + 1;
      plVar4 = plVar4 + 1;
    } while (uVar6 != uVar5);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 1423a1d00 FUN_1423a1d00 body=226 status=ok
// SIG undefined FUN_1423a1d00(void)

void FUN_1423a1d00(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *local_18;
  undefined8 local_10;
  
  uVar6 = 0;
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_142695960(*param_1 + 0x3b0,&local_18);
  uVar5 = (ulonglong)((longlong)(local_18 + (int)local_10) + (7 - (longlong)local_18)) >> 3;
  if (local_18 + (int)local_10 < local_18) {
    uVar5 = uVar6;
  }
  plVar4 = local_18;
  if (uVar5 != 0) {
    do {
      lVar1 = *plVar4;
      cVar3 = FBodyInstance::IsShapeBoundToBody(*param_1 + 0x3b0,lVar1);
      if (cVar3 != '\0') {
        lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x6f8) + 0x48);
        *(undefined4 *)(lVar2 + 0x20) = 6;
        *(longlong *)(lVar2 + 0x28) = lVar2;
        *(longlong *)(lVar1 + 0x10) = lVar2 + 0x20;
      }
      uVar6 = uVar6 + 1;
      plVar4 = plVar4 + 1;
    } while (uVar6 != uVar5);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 1423a1e50 FUN_1423a1e50 body=97 status=ok
// SIG undefined FUN_1423a1e50(void)

undefined8 * FUN_1423a1e50(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14506d550;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1423a1ec0 FUN_1423a1ec0 body=97 status=ok
// SIG undefined FUN_1423a1ec0(void)

undefined8 * FUN_1423a1ec0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14506d530;
  if (param_1[7] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[7] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1423a1f30 FUN_1423a1f30 body=97 status=ok
// SIG undefined FUN_1423a1f30(void)

undefined8 * FUN_1423a1f30(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14506d540;
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



// FUNCTION 1423a1fa0 FUN_1423a1fa0 body=97 status=ok
// SIG undefined FUN_1423a1fa0(void)

undefined8 * FUN_1423a1fa0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14506d520;
  if (param_1[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[9] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1423a2010 FUN_1423a2010 body=97 status=ok
// SIG undefined FUN_1423a2010(void)

undefined8 * FUN_1423a2010(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14506c7f0;
  if (param_1[7] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[7] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1423a2080 FUN_1423a2080 body=97 status=ok
// SIG undefined FUN_1423a2080(void)

undefined8 * FUN_1423a2080(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14506c6e0;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1423a20f0 FUN_1423a20f0 body=97 status=ok
// SIG undefined FUN_1423a20f0(void)

undefined8 * FUN_1423a20f0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14506c6d0;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1423a2160 FUN_1423a2160 body=101 status=ok
// SIG undefined FUN_1423a2160(void)

longlong FUN_1423a2160(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x70);
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 0x88);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_141edf360(lVar2);
      BeginCleanup(lVar2 + 0x68);
    }
  }
  FUN_1420d82a0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 1423a21d0 `scalar_deleting_destructor' body=133 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FSkyTextureCubeResource::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__14506c840;
  param_1[0xd] = &PTR_LAB_14506c8a0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x10);
  param_1[0xd] = &PTR_FUN_1440780a8;
  *param_1 = &PTR__scalar_deleting_destructor__144e13920;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 1423a2260 FUN_1423a2260 body=186 status=ok
// SIG undefined FUN_1423a2260(void)

longlong FUN_1423a2260(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  FUN_1420d82a0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x128);
  }
  return param_1;
}



// FUNCTION 1423a2320 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
ATTLBaseENBossSnakCannonPawn::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1409f65b0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf20);
  }
  return param_1;
}



// FUNCTION 1423a2360 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
Chaos::FPBDRigidsSolver::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14061f9e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa30);
  }
  return param_1;
}



// FUNCTION 1423a23a0 FUN_1423a23a0 body=203 status=ok
// SIG undefined FUN_1423a23a0(void)

longlong FUN_1423a23a0(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x4a0) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x4a0) + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if (*(longlong *)(param_1 + 0x498) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x498) + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x3f0);
  if (lVar3 != 0) {
    piVar1 = (int *)(lVar3 + 0x88);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_141edf360(lVar3);
      BeginCleanup(lVar3 + 0x68);
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x348);
  if (lVar3 != 0) {
    piVar1 = (int *)(lVar3 + 0x88);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_141edf360(lVar3);
      BeginCleanup(lVar3 + 0x68);
    }
  }
  FUN_1405911f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4b0);
  }
  return param_1;
}



// FUNCTION 1423a2470 FUN_1423a2470 body=192 status=ok
// SIG undefined FUN_1423a2470(void)

longlong FUN_1423a2470(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x798) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x780) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x768) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x750) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x738) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x720) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x708) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    FMemory::Free();
  }
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x7e0);
  }
  return param_1;
}



// FUNCTION 1423a2530 FUN_1423a2530 body=549 status=ok
// SIG undefined FUN_1423a2530(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423a2530(longlong param_1,float *param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined1 local_78 [16];
  float local_68;
  undefined8 local_64;
  float local_5c;
  undefined8 local_58;
  float fStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x6f8)) {
    iVar6 = *(int *)(param_1 + 0x6f8);
    do {
      iVar2 = iVar6 / 2;
      if (*(float *)((longlong)(iVar2 + iVar5) * 0x2c + *(longlong *)(param_1 + 0x6f0)) <= *param_2)
      {
        iVar5 = iVar2 + iVar5 + 1;
        iVar2 = iVar6 + (-1 - iVar2);
      }
      iVar6 = iVar2;
    } while (0 < iVar2);
  }
  cVar1 = *(char *)(param_2 + 0x10);
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else if (cVar1 == '\x01') {
    uVar4 = 1;
  }
  else if (cVar1 == '\x02') {
    uVar4 = 2;
  }
  else if (cVar1 == '\x03') {
    uVar4 = 5;
  }
  else if (cVar1 == '\x04') {
    uVar4 = 3;
  }
  else {
    uVar4 = 6;
  }
  local_68 = *param_2;
  local_5c = param_2[3];
  local_64 = *(undefined8 *)(param_2 + 1);
  local_58 = *(undefined8 *)(param_2 + 4);
  fStack_50 = param_2[6];
  local_44 = param_2[9];
  local_40 = CONCAT31(local_40._1_3_,uVar4);
  uStack_4c = (undefined4)*(undefined8 *)(param_2 + 7);
  uStack_48 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 7) >> 0x20);
  TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::Insert(param_1 + 0x6f0,&local_68,iVar5);
  puVar3 = (undefined8 *)FRotator::Quaternion(param_2 + 10,local_78);
  local_68 = *param_2;
  local_58 = *puVar3;
  local_28 = 1;
  fStack_50 = (float)puVar3[1];
  uStack_4c = (undefined4)((ulonglong)puVar3[1] >> 0x20);
  local_40 = DAT_1464aa818;
  local_30 = DAT_1464aa818;
  uStack_48 = DAT_1464aa810;
  local_44 = (float)DAT_1464aa814;
  local_3c = DAT_1464aa81c;
  local_38 = DAT_1464aa810;
  local_34 = DAT_1464aa814;
  local_2c = DAT_1464aa81c;
  TArray<FInterpCurvePoint<FQuat>,FDefaultAllocator>::Insert(param_1 + 0x708,&local_68,iVar5);
  local_68 = *param_2;
  local_5c = param_2[0xf];
  local_64 = *(undefined8 *)(param_2 + 0xd);
  local_58 = _DAT_1468b5d90;
  uStack_4c = (undefined4)_DAT_1468b5d90;
  uStack_48 = (undefined4)((ulonglong)_DAT_1468b5d90 >> 0x20);
  fStack_50 = (float)DAT_1468b5d98;
  local_44 = (float)DAT_1468b5d98;
  local_40 = CONCAT31(local_40._1_3_,1);
  TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::Insert(param_1 + 0x720,&local_68,iVar5);
  if ((*(char *)(param_1 + 0x7c2) != '\0') &&
     (*(float *)(param_1 + 0x7c4) <=
      *(float *)((longlong)*(int *)(param_1 + 0x6f8) * 0x2c + -0x2c + *(longlong *)(param_1 + 0x6f0)
                ))) {
    *(undefined1 *)(param_1 + 0x7c2) = 0;
  }
  if (param_3 != '\0') {
    FUN_1423c1a10(param_1);
  }
  return;
}



// FUNCTION 1423a2760 FUN_1423a2760 body=752 status=ok
// SIG undefined FUN_1423a2760(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423a2760(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  float local_78;
  undefined8 local_74;
  float local_6c;
  undefined8 local_68;
  float fStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  
  iVar6 = *(int *)(param_2 + 1);
  plVar1 = (longlong *)(param_1 + 0x6f0);
  if (*(int *)(param_1 + 0x6fc) < *(int *)(param_1 + 0x6f8) + iVar6) {
    TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::ResizeTo(plVar1);
    iVar6 = *(int *)(param_2 + 1);
  }
  pfVar7 = (float *)*param_2;
  pfVar9 = pfVar7 + (longlong)iVar6 * 0x11;
  if (pfVar7 != pfVar9) {
    pfVar10 = pfVar7 + 1;
    do {
      iVar8 = *(int *)(param_1 + 0x6f8);
      iVar6 = 0;
      if (0 < iVar8) {
        do {
          iVar3 = iVar8 / 2;
          if (*(float *)((longlong)(iVar3 + iVar6) * 0x2c + *plVar1) <= *pfVar7) {
            iVar6 = iVar3 + iVar6 + 1;
            iVar3 = iVar8 + (-1 - iVar3);
          }
          iVar8 = iVar3;
        } while (0 < iVar8);
      }
      cVar2 = *(char *)(pfVar10 + 0xf);
      if (cVar2 == '\0') {
        uVar5 = 0;
      }
      else if (cVar2 == '\x01') {
        uVar5 = 1;
      }
      else if (cVar2 == '\x02') {
        uVar5 = 2;
      }
      else if (cVar2 == '\x03') {
        uVar5 = 5;
      }
      else if (cVar2 == '\x04') {
        uVar5 = 3;
      }
      else {
        uVar5 = 6;
      }
      local_78 = *pfVar7;
      local_6c = pfVar10[2];
      local_74 = *(undefined8 *)pfVar10;
      local_68 = *(undefined8 *)(pfVar10 + 3);
      fStack_60 = pfVar10[5];
      local_54 = pfVar10[8];
      local_50 = CONCAT31(local_50._1_3_,uVar5);
      uStack_5c = (undefined4)*(undefined8 *)(pfVar10 + 6);
      uStack_58 = (undefined4)((ulonglong)*(undefined8 *)(pfVar10 + 6) >> 0x20);
      TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::Insert(plVar1,&local_78,iVar6);
      puVar4 = (undefined8 *)FRotator::Quaternion(pfVar10 + 9,&local_88);
      local_78 = *pfVar7;
      local_68 = *puVar4;
      local_38 = 1;
      fStack_60 = (float)puVar4[1];
      uStack_5c = (undefined4)((ulonglong)puVar4[1] >> 0x20);
      local_50 = DAT_1464aa818;
      local_40 = DAT_1464aa818;
      uStack_58 = DAT_1464aa810;
      local_54 = (float)DAT_1464aa814;
      local_4c = DAT_1464aa81c;
      local_48 = DAT_1464aa810;
      local_44 = DAT_1464aa814;
      local_3c = DAT_1464aa81c;
      TArray<FInterpCurvePoint<FQuat>,FDefaultAllocator>::Insert(param_1 + 0x708,&local_78,iVar6);
      local_78 = *pfVar7;
      local_6c = pfVar10[0xe];
      local_74 = *(undefined8 *)(pfVar10 + 0xc);
      local_68 = _DAT_1468b5d90;
      uStack_5c = (undefined4)_DAT_1468b5d90;
      uStack_58 = (undefined4)((ulonglong)_DAT_1468b5d90 >> 0x20);
      fStack_60 = (float)DAT_1468b5d98;
      local_54 = (float)DAT_1468b5d98;
      local_50 = CONCAT31(local_50._1_3_,1);
      TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::Insert(param_1 + 0x720,&local_78,iVar6);
      if ((*(char *)(param_1 + 0x7c2) != '\0') &&
         (*(float *)(param_1 + 0x7c4) <=
          *(float *)((longlong)*(int *)(param_1 + 0x6f8) * 0x2c + -0x2c + *plVar1))) {
        *(undefined1 *)(param_1 + 0x7c2) = 0;
      }
      pfVar7 = pfVar7 + 0x11;
      pfVar10 = pfVar10 + 0x11;
    } while (pfVar7 != pfVar9);
  }
  if (param_3 != '\0') {
    local_88 = *(undefined4 *)(param_1 + 0x230);
    local_84 = *(undefined4 *)(param_1 + 0x234);
    local_80 = *(undefined4 *)(param_1 + 0x238);
    FSplineCurves::UpdateSpline
              (plVar1,*(undefined1 *)(param_1 + 0x7c1),*(undefined1 *)(param_1 + 0x7bc),
               *(undefined4 *)(param_1 + 0x7b4),*(undefined1 *)(param_1 + 0x7c2),
               *(undefined4 *)(param_1 + 0x7c4),&local_88);
  }
  return;
}



// FUNCTION 1423a2a50 FUN_1423a2a50 body=175 status=ok
// SIG undefined FUN_1423a2a50(void)

void FUN_1423a2a50(longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined4 local_res8;
  undefined4 local_resc;
  
  FWeakObjectPtr::operator=(&local_res8);
  plVar1 = (longlong *)(param_1 + 0x778);
  lVar4 = *plVar1;
  iVar3 = *(int *)(param_1 + 0x780);
  lVar6 = lVar4;
  do {
    if (lVar6 == lVar4 + (longlong)iVar3 * 8) {
LAB_1423a2ab8:
      iVar3 = *(int *)(param_1 + 0x780);
      *(int *)(param_1 + 0x780) = iVar3 + 1;
      if (*(int *)(param_1 + 0x784) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
      }
      puVar2 = (undefined4 *)(*plVar1 + (longlong)iVar3 * 8);
      *puVar2 = local_res8;
      puVar2[1] = local_resc;
LAB_1423a2ae5:
      *(byte *)(param_1 + 0xb1d) = *(byte *)(param_1 + 0xb1d) & 0xf7;
      return;
    }
    cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar6,&local_res8);
    if (cVar5 != '\0') {
      if ((int)(lVar6 - lVar4 >> 3) != -1) goto LAB_1423a2ae5;
      goto LAB_1423a2ab8;
    }
    lVar6 = lVar6 + 8;
  } while( true );
}



// FUNCTION 1423a2b00 FUN_1423a2b00 body=171 status=ok
// SIG undefined FUN_1423a2b00(void)

void FUN_1423a2b00(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 local_res8;
  undefined4 local_resc;
  
  FWeakObjectPtr::operator=(&local_res8);
  plVar6 = (longlong *)(param_1 + 0x778);
  lVar3 = *plVar6;
  iVar2 = *(int *)(param_1 + 0x780);
  lVar5 = lVar3;
  do {
    if (lVar5 == lVar3 + (longlong)iVar2 * 8) {
LAB_1423a2b68:
      iVar2 = *(int *)(param_1 + 0x780);
      *(int *)(param_1 + 0x780) = iVar2 + 1;
      if (*(int *)(param_1 + 0x784) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar2);
      }
      puVar1 = (undefined4 *)(*plVar6 + (longlong)iVar2 * 8);
      *puVar1 = local_res8;
      puVar1[1] = local_resc;
      return;
    }
    cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar5,&local_res8);
    if (cVar4 != '\0') {
      if ((int)(lVar5 - lVar3 >> 3) != -1) {
        return;
      }
      goto LAB_1423a2b68;
    }
    lVar5 = lVar5 + 8;
  } while( true );
}



// FUNCTION 1423a2bb0 FUN_1423a2bb0 body=958 status=ok
// SIG undefined FUN_1423a2bb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423a2bb0(longlong param_1,float *param_2,int param_3,char param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  undefined1 in_XMM5 [16];
  undefined1 auVar10 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_58;
  float local_50;
  
  fVar20 = 0.0;
  if (param_3 == 1) {
    auVar10 = *(undefined1 (*) [16])(param_1 + 0x230);
    fVar2 = auVar10._0_4_;
    fVar3 = auVar10._4_4_;
    fVar4 = auVar10._8_4_;
    fVar13 = *(float *)(param_1 + 0x210) * _DAT_146af0eb0;
    fVar14 = *(float *)(param_1 + 0x214) * fRam0000000146af0eb4;
    fVar15 = *(float *)(param_1 + 0x218) * fRam0000000146af0eb8;
    fVar16 = *(float *)(param_1 + 0x21c) * fRam0000000146af0ebc;
    auVar10 = rcpps(in_XMM5,auVar10);
    fVar17 = (float)((uint)(*param_2 - *(float *)(param_1 + 0x220)) & _DAT_146af0c00);
    fVar18 = (float)((uint)(param_2[1] - *(float *)(param_1 + 0x224)) & uRam0000000146af0c04);
    fVar19 = (float)((uint)(param_2[2] - *(float *)(param_1 + 0x228)) & uRam0000000146af0c08);
    fVar6 = fVar19 * fVar14 - fVar18 * fVar15;
    fVar7 = fVar17 * fVar15 - fVar19 * fVar13;
    fVar8 = fVar18 * fVar13 - fVar17 * fVar14;
    fVar9 = auVar10._0_4_;
    fVar11 = auVar10._4_4_;
    fVar12 = auVar10._8_4_;
    fVar6 = fVar6 + fVar6;
    fVar7 = fVar7 + fVar7;
    fVar8 = fVar8 + fVar8;
    fVar9 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar2;
    fVar11 = (fVar11 + fVar11) - fVar11 * fVar11 * fVar3;
    fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar4;
    fVar9 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar2;
    fVar11 = (fVar11 + fVar11) - fVar11 * fVar11 * fVar3;
    fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar4;
    local_50 = ((fVar7 * fVar13 - fVar6 * fVar14) + fVar16 * fVar8 + fVar19) *
               (float)(-(uint)((float)((uint)fVar4 & uRam0000000146af0d18) <= fRam0000000146af0ea8)
                       & (uint)fVar12 ^ (uint)fVar12);
    local_58 = CONCAT44(((fVar6 * fVar15 - fVar8 * fVar13) + fVar16 * fVar7 + fVar18) *
                        (float)(-(uint)((float)((uint)fVar3 & uRam0000000146af0d14) <=
                                       fRam0000000146af0ea4) & (uint)fVar11 ^ (uint)fVar11),
                        ((fVar8 * fVar14 - fVar7 * fVar15) + fVar16 * fVar6 + fVar17) *
                        (float)(-(uint)((float)((uint)fVar2 & _DAT_146af0d10) <= _DAT_146af0ea0) &
                                (uint)fVar9 ^ (uint)fVar9));
  }
  else {
    local_58 = *(undefined8 *)param_2;
    local_50 = param_2[2];
  }
  if (*(int *)(param_1 + 0x6f8) != 0) {
    fVar20 = *(float *)((longlong)*(int *)(param_1 + 0x6f8) * 0x2c + -0x2c +
                       *(longlong *)(param_1 + 0x6f0)) + 1.0;
  }
  iVar1 = *(int *)(param_1 + 0x6f8);
  *(int *)(param_1 + 0x6f8) = iVar1 + 1;
  if (*(int *)(param_1 + 0x6fc) < iVar1 + 1) {
    TArray<UTTLCameraModifier::FTTLCameraPostFx,FDefaultAllocator>::ResizeGrow
              (param_1 + 0x6f0,iVar1);
  }
  pfVar5 = (float *)((longlong)iVar1 * 0x2c + *(longlong *)(param_1 + 0x6f0));
  *(undefined8 *)(pfVar5 + 1) = local_58;
  pfVar5[3] = local_50;
  *pfVar5 = fVar20;
  *(undefined8 *)(pfVar5 + 4) = _DAT_1468b5d90;
  pfVar5[6] = DAT_1468b5d98;
  *(undefined8 *)(pfVar5 + 7) = _DAT_1468b5d90;
  pfVar5[9] = DAT_1468b5d98;
  *(undefined1 *)(pfVar5 + 10) = 1;
  iVar1 = *(int *)(param_1 + 0x710);
  *(int *)(param_1 + 0x710) = iVar1 + 1;
  if (*(int *)(param_1 + 0x714) < iVar1 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 0x708,iVar1);
  }
  pfVar5 = (float *)((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 0x708));
  *pfVar5 = fVar20;
  pfVar5[4] = DAT_1464aa810;
  pfVar5[5] = DAT_1464aa814;
  pfVar5[6] = DAT_1464aa818;
  pfVar5[7] = DAT_1464aa81c;
  pfVar5[8] = DAT_1464aa810;
  pfVar5[9] = DAT_1464aa814;
  pfVar5[10] = DAT_1464aa818;
  pfVar5[0xb] = DAT_1464aa81c;
  pfVar5[0xc] = DAT_1464aa810;
  pfVar5[0xd] = DAT_1464aa814;
  pfVar5[0xe] = DAT_1464aa818;
  pfVar5[0xf] = DAT_1464aa81c;
  *(undefined1 *)(pfVar5 + 0x10) = 1;
  iVar1 = *(int *)(param_1 + 0x728);
  *(int *)(param_1 + 0x728) = iVar1 + 1;
  if (*(int *)(param_1 + 0x72c) < iVar1 + 1) {
    TArray<UTTLCameraModifier::FTTLCameraPostFx,FDefaultAllocator>::ResizeGrow
              (param_1 + 0x720,iVar1);
  }
  pfVar5 = (float *)((longlong)iVar1 * 0x2c + *(longlong *)(param_1 + 0x720));
  pfVar5[1] = 1.0;
  pfVar5[2] = 1.0;
  *pfVar5 = fVar20;
  pfVar5[3] = 1.0;
  *(undefined8 *)(pfVar5 + 4) = _DAT_1468b5d90;
  pfVar5[6] = DAT_1468b5d98;
  *(undefined8 *)(pfVar5 + 7) = _DAT_1468b5d90;
  pfVar5[9] = DAT_1468b5d98;
  *(undefined1 *)(pfVar5 + 10) = 1;
  if (*(char *)(param_1 + 0x7c2) != '\0') {
    *(float *)(param_1 + 0x7c4) = *(float *)(param_1 + 0x7c4) + 1.0;
  }
  if (param_4 != '\0') {
    FUN_1423c1a10(param_1);
    return;
  }
  return;
}



// FUNCTION 1423a2f70 FUN_1423a2f70 body=1253 status=ok
// SIG undefined FUN_1423a2f70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423a2f70(longlong param_1,float *param_2,int param_3,float param_4,char param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int in_R9D;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar17;
  float fVar18;
  undefined1 in_XMM5 [16];
  undefined1 auVar16 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float local_a8;
  undefined8 local_a4;
  float local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  
  fVar26 = 0.0;
  if (in_R9D == 1) {
    auVar16 = *(undefined1 (*) [16])(param_1 + 0x230);
    fVar5 = auVar16._0_4_;
    fVar6 = auVar16._4_4_;
    fVar12 = auVar16._8_4_;
    fVar19 = *(float *)(param_1 + 0x210) * _DAT_146af0eb0;
    fVar20 = *(float *)(param_1 + 0x214) * fRam0000000146af0eb4;
    fVar21 = *(float *)(param_1 + 0x218) * fRam0000000146af0eb8;
    fVar22 = *(float *)(param_1 + 0x21c) * fRam0000000146af0ebc;
    auVar16 = rcpps(in_XMM5,auVar16);
    fVar23 = (float)((uint)(*param_2 - *(float *)(param_1 + 0x220)) & _DAT_146af0c00);
    fVar24 = (float)((uint)(param_2[1] - *(float *)(param_1 + 0x224)) & uRam0000000146af0c04);
    fVar25 = (float)((uint)(param_2[2] - *(float *)(param_1 + 0x228)) & uRam0000000146af0c08);
    param_4 = fVar25 * fVar20 - fVar24 * fVar21;
    fVar13 = fVar23 * fVar21 - fVar25 * fVar19;
    fVar14 = fVar24 * fVar19 - fVar23 * fVar20;
    fVar15 = auVar16._0_4_;
    fVar17 = auVar16._4_4_;
    fVar18 = auVar16._8_4_;
    param_4 = param_4 + param_4;
    fVar13 = fVar13 + fVar13;
    fVar14 = fVar14 + fVar14;
    fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar5;
    fVar17 = (fVar17 + fVar17) - fVar17 * fVar17 * fVar6;
    fVar18 = (fVar18 + fVar18) - fVar18 * fVar18 * fVar12;
    fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar5;
    fVar17 = (fVar17 + fVar17) - fVar17 * fVar17 * fVar6;
    fVar18 = (fVar18 + fVar18) - fVar18 * fVar18 * fVar12;
    fVar12 = ((fVar13 * fVar19 - param_4 * fVar20) + fVar22 * fVar14 + fVar25) *
             (float)(-(uint)((float)((uint)fVar12 & uRam0000000146af0d18) <= fRam0000000146af0ea8) &
                     (uint)fVar18 ^ (uint)fVar18);
    uVar27 = CONCAT44(((param_4 * fVar21 - fVar14 * fVar19) + fVar22 * fVar13 + fVar24) *
                      (float)(-(uint)((float)((uint)fVar6 & uRam0000000146af0d14) <=
                                     fRam0000000146af0ea4) & (uint)fVar17 ^ (uint)fVar17),
                      ((fVar14 * fVar20 - fVar13 * fVar21) + fVar22 * param_4 + fVar23) *
                      (float)(-(uint)((float)((uint)fVar5 & _DAT_146af0d10) <= _DAT_146af0ea0) &
                              (uint)fVar15 ^ (uint)fVar15));
  }
  else {
    uVar27 = *(undefined8 *)param_2;
    fVar12 = param_2[2];
  }
  if ((-1 < param_3) && (iVar4 = *(int *)(param_1 + 0x6f8), param_3 <= iVar4)) {
    plVar1 = (longlong *)(param_1 + 0x6f0);
    if (param_3 != 0) {
      fVar26 = *(float *)((longlong)param_3 * 0x2c + -0x2c + *plVar1) + 1.0;
    }
    local_98 = _DAT_1468b5d90;
    local_8c = _DAT_1468b5d90;
    local_90 = DAT_1468b5d98;
    local_84 = DAT_1468b5d98;
    local_80 = CONCAT31(local_80._1_3_,1);
    local_a8 = fVar26;
    local_a4 = uVar27;
    local_9c = fVar12;
    TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::Insert
              (plVar1,&local_a8,param_3,param_4,uVar27,fVar12);
    plVar2 = (longlong *)(param_1 + 0x708);
    local_98 = CONCAT44(DAT_1464aa814,DAT_1464aa810);
    local_90 = DAT_1464aa818;
    local_8c = CONCAT44(DAT_1464aa810,DAT_1464aa81c);
    local_84 = DAT_1464aa814;
    local_80 = DAT_1464aa818;
    local_7c = DAT_1464aa81c;
    local_78 = DAT_1464aa810;
    local_74 = DAT_1464aa814;
    local_70 = DAT_1464aa818;
    local_6c = DAT_1464aa81c;
    local_68 = 1;
    local_a8 = fVar26;
    TArray<FInterpCurvePoint<FQuat>,FDefaultAllocator>::Insert(plVar2,&local_a8,param_3);
    plVar3 = (longlong *)(param_1 + 0x720);
    local_a4 = 0x3f8000003f800000;
    local_9c = 1.0;
    local_98 = _DAT_1468b5d90;
    local_8c = _DAT_1468b5d90;
    local_90 = DAT_1468b5d98;
    local_84 = DAT_1468b5d98;
    local_80 = CONCAT31(local_80._1_3_,1);
    local_a8 = fVar26;
    TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::Insert(plVar3,&local_a8,param_3);
    lVar11 = (longlong)(param_3 + 1);
    lVar10 = (longlong)(iVar4 + 1);
    if (lVar11 < lVar10) {
      if (3 < lVar10 - lVar11) {
        lVar8 = lVar11 * 0x50;
        lVar7 = lVar11 * 0x2c;
        lVar9 = ((lVar10 - lVar11) - 4U >> 2) + 1;
        lVar11 = lVar11 + lVar9 * 4;
        do {
          *(float *)(*plVar1 + lVar7) = *(float *)(*plVar1 + lVar7) + 1.0;
          *(float *)(*plVar2 + lVar8) = *(float *)(*plVar2 + lVar8) + 1.0;
          *(float *)(lVar7 + *plVar3) = *(float *)(lVar7 + *plVar3) + 1.0;
          *(float *)(*plVar1 + 0x2c + lVar7) = *(float *)(*plVar1 + 0x2c + lVar7) + 1.0;
          *(float *)(*plVar2 + 0x50 + lVar8) = *(float *)(*plVar2 + 0x50 + lVar8) + 1.0;
          *(float *)(lVar7 + 0x2c + *plVar3) = *(float *)(lVar7 + 0x2c + *plVar3) + 1.0;
          *(float *)(*plVar1 + 0x58 + lVar7) = *(float *)(*plVar1 + 0x58 + lVar7) + 1.0;
          *(float *)(*plVar2 + 0xa0 + lVar8) = *(float *)(*plVar2 + 0xa0 + lVar8) + 1.0;
          *(float *)(lVar7 + 0x58 + *plVar3) = *(float *)(lVar7 + 0x58 + *plVar3) + 1.0;
          *(float *)(*plVar1 + 0x84 + lVar7) = *(float *)(*plVar1 + 0x84 + lVar7) + 1.0;
          *(float *)(*plVar2 + 0xf0 + lVar8) = *(float *)(*plVar2 + 0xf0 + lVar8) + 1.0;
          lVar8 = lVar8 + 0x140;
          *(float *)(lVar7 + 0x84 + *plVar3) = *(float *)(lVar7 + 0x84 + *plVar3) + 1.0;
          lVar7 = lVar7 + 0xb0;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      if (lVar11 < lVar10) {
        lVar8 = lVar11 * 0x50;
        lVar7 = lVar11 * 0x2c;
        lVar10 = lVar10 - lVar11;
        do {
          *(float *)(*plVar1 + lVar7) = *(float *)(*plVar1 + lVar7) + 1.0;
          *(float *)(*plVar2 + lVar8) = *(float *)(*plVar2 + lVar8) + 1.0;
          lVar8 = lVar8 + 0x50;
          *(float *)(lVar7 + *plVar3) = *(float *)(lVar7 + *plVar3) + 1.0;
          lVar7 = lVar7 + 0x2c;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
    }
    if (*(char *)(param_1 + 0x7c2) != '\0') {
      *(float *)(param_1 + 0x7c4) = *(float *)(param_1 + 0x7c4) + 1.0;
    }
  }
  if (param_5 != '\0') {
    FUN_1423c1a10(param_1);
  }
  return;
}



// FUNCTION 1423a3460 FUN_1423a3460 body=1253 status=ok
// SIG undefined FUN_1423a3460(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423a3460(longlong param_1,float *param_2,undefined8 param_3,int param_4,int param_5,
                  char param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar19;
  float fVar20;
  undefined1 in_XMM5 [16];
  undefined1 auVar18 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 local_b8;
  float local_b0;
  float local_a8;
  undefined8 local_a4;
  float local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  
  fVar28 = 0.0;
  if (param_5 == 1) {
    auVar18 = *(undefined1 (*) [16])(param_1 + 0x230);
    fVar5 = auVar18._0_4_;
    fVar6 = auVar18._4_4_;
    fVar7 = auVar18._8_4_;
    fVar21 = *(float *)(param_1 + 0x210) * _DAT_146af0eb0;
    fVar22 = *(float *)(param_1 + 0x214) * fRam0000000146af0eb4;
    fVar23 = *(float *)(param_1 + 0x218) * fRam0000000146af0eb8;
    fVar24 = *(float *)(param_1 + 0x21c) * fRam0000000146af0ebc;
    auVar18 = rcpps(in_XMM5,auVar18);
    fVar25 = (float)((uint)(*param_2 - *(float *)(param_1 + 0x220)) & _DAT_146af0c00);
    fVar26 = (float)((uint)(param_2[1] - *(float *)(param_1 + 0x224)) & uRam0000000146af0c04);
    fVar27 = (float)((uint)(param_2[2] - *(float *)(param_1 + 0x228)) & uRam0000000146af0c08);
    fVar14 = fVar27 * fVar22 - fVar26 * fVar23;
    fVar15 = fVar25 * fVar23 - fVar27 * fVar21;
    fVar16 = fVar26 * fVar21 - fVar25 * fVar22;
    fVar17 = auVar18._0_4_;
    fVar19 = auVar18._4_4_;
    fVar20 = auVar18._8_4_;
    fVar14 = fVar14 + fVar14;
    fVar15 = fVar15 + fVar15;
    fVar16 = fVar16 + fVar16;
    fVar17 = (fVar17 + fVar17) - fVar17 * fVar17 * fVar5;
    fVar19 = (fVar19 + fVar19) - fVar19 * fVar19 * fVar6;
    fVar20 = (fVar20 + fVar20) - fVar20 * fVar20 * fVar7;
    fVar17 = (fVar17 + fVar17) - fVar17 * fVar17 * fVar5;
    fVar19 = (fVar19 + fVar19) - fVar19 * fVar19 * fVar6;
    fVar20 = (fVar20 + fVar20) - fVar20 * fVar20 * fVar7;
    local_b0 = ((fVar15 * fVar21 - fVar14 * fVar22) + fVar24 * fVar16 + fVar27) *
               (float)(-(uint)((float)((uint)fVar7 & uRam0000000146af0d18) <= fRam0000000146af0ea8)
                       & (uint)fVar20 ^ (uint)fVar20);
    local_b8 = CONCAT44(((fVar14 * fVar23 - fVar16 * fVar21) + fVar24 * fVar15 + fVar26) *
                        (float)(-(uint)((float)((uint)fVar6 & uRam0000000146af0d14) <=
                                       fRam0000000146af0ea4) & (uint)fVar19 ^ (uint)fVar19),
                        ((fVar16 * fVar22 - fVar15 * fVar23) + fVar24 * fVar14 + fVar25) *
                        (float)(-(uint)((float)((uint)fVar5 & _DAT_146af0d10) <= _DAT_146af0ea0) &
                                (uint)fVar17 ^ (uint)fVar17));
  }
  else {
    local_b8 = *(undefined8 *)param_2;
    local_b0 = param_2[2];
  }
  if ((-1 < param_4) && (iVar4 = *(int *)(param_1 + 0x6f8), param_4 <= iVar4)) {
    plVar1 = (longlong *)(param_1 + 0x6f0);
    if (param_4 != 0) {
      fVar28 = *(float *)((longlong)param_4 * 0x2c + -0x2c + *plVar1) + 1.0;
    }
    local_a4 = local_b8;
    local_9c = local_b0;
    local_98 = _DAT_1468b5d90;
    uStack_8c = (undefined4)_DAT_1468b5d90;
    uStack_88 = (undefined4)((ulonglong)_DAT_1468b5d90 >> 0x20);
    uStack_90 = DAT_1468b5d98;
    local_84 = DAT_1468b5d98;
    local_80 = CONCAT31(local_80._1_3_,1);
    local_a8 = fVar28;
    TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::Insert(plVar1,&local_a8,param_4);
    puVar8 = (undefined8 *)FRotator::Quaternion(param_3,&local_b8);
    plVar2 = (longlong *)(param_1 + 0x708);
    local_98 = *puVar8;
    local_68 = 1;
    uStack_90 = (undefined4)puVar8[1];
    uStack_8c = (undefined4)((ulonglong)puVar8[1] >> 0x20);
    local_7c = DAT_1464aa81c;
    local_6c = DAT_1464aa81c;
    uStack_88 = DAT_1464aa810;
    local_84 = DAT_1464aa814;
    local_80 = DAT_1464aa818;
    local_78 = DAT_1464aa810;
    local_74 = DAT_1464aa814;
    local_70 = DAT_1464aa818;
    local_a8 = fVar28;
    TArray<FInterpCurvePoint<FQuat>,FDefaultAllocator>::Insert(plVar2,&local_a8,param_4);
    local_b0 = 1.0;
    plVar3 = (longlong *)(param_1 + 0x720);
    local_a4 = 0x3f8000003f800000;
    local_9c = 1.0;
    local_98 = _DAT_1468b5d90;
    uStack_8c = (undefined4)_DAT_1468b5d90;
    uStack_88 = (undefined4)((ulonglong)_DAT_1468b5d90 >> 0x20);
    uStack_90 = DAT_1468b5d98;
    local_84 = DAT_1468b5d98;
    local_80 = CONCAT31(local_80._1_3_,1);
    local_a8 = fVar28;
    TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::Insert(plVar3,&local_a8,param_4);
    lVar13 = (longlong)(param_4 + 1);
    lVar12 = (longlong)(iVar4 + 1);
    if (lVar13 < lVar12) {
      if (3 < lVar12 - lVar13) {
        lVar10 = lVar13 * 0x50;
        lVar9 = lVar13 * 0x2c;
        lVar11 = ((lVar12 - lVar13) - 4U >> 2) + 1;
        lVar13 = lVar13 + lVar11 * 4;
        do {
          *(float *)(*plVar1 + lVar9) = *(float *)(*plVar1 + lVar9) + 1.0;
          *(float *)(*plVar2 + lVar10) = *(float *)(*plVar2 + lVar10) + 1.0;
          *(float *)(*plVar3 + lVar9) = *(float *)(*plVar3 + lVar9) + 1.0;
          *(float *)(*plVar1 + 0x2c + lVar9) = *(float *)(*plVar1 + 0x2c + lVar9) + 1.0;
          *(float *)(*plVar2 + 0x50 + lVar10) = *(float *)(*plVar2 + 0x50 + lVar10) + 1.0;
          *(float *)(*plVar3 + 0x2c + lVar9) = *(float *)(*plVar3 + 0x2c + lVar9) + 1.0;
          *(float *)(lVar9 + 0x58 + *plVar1) = *(float *)(lVar9 + 0x58 + *plVar1) + 1.0;
          *(float *)(*plVar2 + 0xa0 + lVar10) = *(float *)(*plVar2 + 0xa0 + lVar10) + 1.0;
          *(float *)(*plVar3 + 0x58 + lVar9) = *(float *)(*plVar3 + 0x58 + lVar9) + 1.0;
          *(float *)(lVar9 + 0x84 + *plVar1) = *(float *)(lVar9 + 0x84 + *plVar1) + 1.0;
          *(float *)(*plVar2 + 0xf0 + lVar10) = *(float *)(*plVar2 + 0xf0 + lVar10) + 1.0;
          lVar10 = lVar10 + 0x140;
          *(float *)(*plVar3 + 0x84 + lVar9) = *(float *)(*plVar3 + 0x84 + lVar9) + 1.0;
          lVar9 = lVar9 + 0xb0;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      if (lVar13 < lVar12) {
        lVar10 = lVar13 * 0x50;
        lVar9 = lVar13 * 0x2c;
        lVar12 = lVar12 - lVar13;
        do {
          *(float *)(lVar9 + *plVar1) = *(float *)(lVar9 + *plVar1) + 1.0;
          *(float *)(*plVar2 + lVar10) = *(float *)(*plVar2 + lVar10) + 1.0;
          lVar10 = lVar10 + 0x50;
          *(float *)(*plVar3 + lVar9) = *(float *)(*plVar3 + lVar9) + 1.0;
          lVar9 = lVar9 + 0x2c;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
    }
    if (*(char *)(param_1 + 0x7c2) != '\0') {
      *(float *)(param_1 + 0x7c4) = *(float *)(param_1 + 0x7c4) + 1.0;
    }
  }
  if (param_6 != '\0') {
    FUN_1423c1a10(param_1);
  }
  return;
}



// FUNCTION 1423a3950 FUN_1423a3950 body=101 status=ok
// SIG undefined FUN_1423a3950(void)

undefined8 FUN_1423a3950(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1423a39c0();
  if (cVar1 != '\0') {
    if (*(int *)(param_1 + 0xa90) != *(int *)(*(longlong *)(param_1 + 0x718) + 0x160)) {
      TArray<FTransform,FDefaultAllocator>::operator=
                (param_1 + 0xa88,*(longlong *)(param_1 + 0x718) + 0x168);
    }
    return 1;
  }
  *(undefined4 *)(param_1 + 0xa90) = 0;
  if (*(int *)(param_1 + 0xa94) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0xa88,0);
  }
  return 0;
}



// FUNCTION 1423a39c0 FUN_1423a39c0 body=623 status=ok
// SIG undefined FUN_1423a39c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1423a39c0(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  
  if ((*(longlong *)(param_1 + 0x718) != 0) &&
     (cVar4 = FUN_14044aea0(param_1 + 0x720,0), cVar4 != '\0')) {
    lVar10 = *(longlong *)(param_1 + 0x718);
    if (*(int *)(param_1 + ((longlong)*(int *)(param_1 + 0x770) + 0x73) * 0x10) !=
        *(int *)(lVar10 + 0x160)) {
      plVar13 = (longlong *)0x0;
      lVar12 = 2;
      puVar14 = (uint *)(param_1 + 0x730);
      do {
        uVar5 = *(uint *)(lVar10 + 0x160);
        *puVar14 = 0;
        plVar8 = plVar13;
        if (puVar14[1] != uVar5) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeTo(puVar14 + -2,uVar5);
          plVar8 = (longlong *)(ulonglong)*puVar14;
        }
        uVar5 = *(int *)(*(longlong *)(param_1 + 0x718) + 0x160) + (int)plVar8;
        *puVar14 = uVar5;
        if ((int)puVar14[1] < (int)uVar5) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(puVar14 + -2);
        }
        lVar10 = *(longlong *)(param_1 + 0x718);
        plVar8 = plVar13;
        plVar9 = plVar13;
        if (0 < *(int *)(lVar10 + 0x160)) {
          do {
            uVar5 = uRam0000000146af0bfc;
            lVar10 = *(longlong *)(puVar14 + -2);
            uVar7 = (int)plVar8 + 1;
            puVar1 = (undefined4 *)((longlong)plVar9 + lVar10);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1[2] = 0;
            puVar1[3] = uVar5;
            puVar2 = (undefined8 *)((longlong)plVar9 + lVar10 + 0x10);
            *puVar2 = 0;
            puVar2[1] = 0;
            uVar5 = uRam0000000146af0bf4 & uRam0000000146af0c04;
            uVar15 = uRam0000000146af0bf8 & uRam0000000146af0c08;
            uVar16 = uRam0000000146af0bfc & uRam0000000146af0c0c;
            puVar3 = (uint *)((longlong)plVar9 + lVar10 + 0x20);
            *puVar3 = _DAT_146af0bf0 & _DAT_146af0c00;
            puVar3[1] = uVar5;
            puVar3[2] = uVar15;
            puVar3[3] = uVar16;
            lVar10 = *(longlong *)(param_1 + 0x718);
            plVar8 = (longlong *)(ulonglong)uVar7;
            plVar9 = plVar9 + 6;
          } while ((int)uVar7 < *(int *)(lVar10 + 0x160));
        }
        puVar14 = puVar14 + 4;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      iVar6 = *(int *)(lVar10 + 0x160);
      plVar8 = (longlong *)(param_1 + 0x868);
      *(undefined4 *)(param_1 + 0x870) = 0;
      if (*(int *)(param_1 + 0x874) != iVar6) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar8);
      }
      iVar6 = *(int *)(*(longlong *)(param_1 + 0x718) + 0x160);
      if (iVar6 != 0) {
        iVar6 = *(int *)(param_1 + 0x870) + iVar6;
        *(int *)(param_1 + 0x870) = iVar6;
        if (*(int *)(param_1 + 0x874) < iVar6) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar8);
        }
        plVar9 = plVar13;
        plVar11 = plVar13;
        if (0 < *(int *)(*(longlong *)(param_1 + 0x718) + 0x160)) {
          do {
            uVar5 = (int)plVar11 + 1;
            *(undefined1 *)((longlong)plVar9 + *plVar8) = 1;
            plVar9 = (longlong *)((longlong)plVar9 + 1);
            plVar11 = (longlong *)(ulonglong)uVar5;
          } while ((int)uVar5 < *(int *)(*(longlong *)(param_1 + 0x718) + 0x160));
        }
      }
      if (((*(int *)(param_1 + 0x990) != 0) && (*(longlong **)(param_1 + 0x988) != (longlong *)0x0))
         && (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x988) + 0x18))(), cVar4 != '\0')) {
        if (*(int *)(param_1 + 0x990) != 0) {
          plVar13 = *(longlong **)(param_1 + 0x988);
        }
        (**(code **)(*plVar13 + 0x40))(plVar13);
      }
      *(undefined1 *)(param_1 + 0x768) = 0;
      TArray<FTransform,FDefaultAllocator>::operator=(param_1 + 0x758,param_1 + 0x728);
      TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(param_1 + 0x748,plVar8);
    }
    return 1;
  }
  *(undefined4 *)(param_1 + 0x730) = 0;
  if (*(int *)(param_1 + 0x734) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x728,0);
  }
  *(undefined4 *)(param_1 + 0x740) = 0;
  if (*(int *)(param_1 + 0x744) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x738,0);
  }
  *(undefined4 *)(param_1 + 0x760) = 0;
  if (*(int *)(param_1 + 0x764) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x758,0);
  }
  return 0;
}



// FUNCTION 1423a3c30 FUN_1423a3c30 body=373 status=ok
// SIG undefined FUN_1423a3c30(void)

void FUN_1423a3c30(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  
  plVar1 = (longlong *)(param_1 + 0xb20);
  plVar4 = (longlong *)*plVar1;
  iVar5 = *(int *)(param_1 + 0xb28);
  lVar8 = (longlong)iVar5;
  plVar3 = plVar4;
  do {
    if (plVar3 == plVar4 + lVar8) {
      cVar2 = '\0';
LAB_1423a3c85:
      if (param_3 == cVar2) {
        if (param_3 == '\0') {
          *(int *)(param_1 + 0xb28) = iVar5 + 1;
          if (*(int *)(param_1 + 0xb2c) < iVar5 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar5);
          }
          *(longlong *)(lVar8 * 8 + *plVar1) = param_2;
        }
        else if (iVar5 != 0) {
          bVar10 = *plVar4 != param_2;
          lVar7 = 0;
          iVar9 = 0;
          iVar5 = 0;
          do {
            lVar7 = lVar7 + 1;
            iVar6 = iVar5 + 1;
            if (lVar7 < lVar8) {
              plVar4 = (longlong *)(*plVar1 + lVar7 * 8);
              do {
                if (bVar10 != (*plVar4 != param_2)) break;
                iVar6 = iVar6 + 1;
                lVar7 = lVar7 + 1;
                plVar4 = plVar4 + 1;
              } while (lVar7 < lVar8);
            }
            if (bVar10 != false) {
              if (iVar9 != iVar5) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*plVar1 + (longlong)iVar9 * 8),
                           (void *)(*plVar1 + (longlong)iVar5 * 8),(longlong)(iVar6 - iVar5) << 3);
              }
              iVar9 = iVar9 + (iVar6 - iVar5);
            }
            bVar10 = (bool)(bVar10 ^ 1);
            iVar5 = iVar6;
          } while (lVar7 < lVar8);
          *(int *)(param_1 + 0xb28) = iVar9;
        }
        *(undefined2 *)(param_1 + 0xb30) = 0;
      }
      return;
    }
    if (*plVar3 == param_2) {
      cVar2 = '\x01';
      goto LAB_1423a3c85;
    }
    plVar3 = plVar3 + 1;
  } while( true );
}



// FUNCTION 1423a3db0 FUN_1423a3db0 body=1052 status=ok
// SIG undefined FUN_1423a3db0(void)

void FUN_1423a3db0(longlong param_1,undefined4 param_2,char param_3,float param_4,uint param_5,
                  undefined8 param_6,undefined8 param_7,char param_8,char param_9,uint param_10)

{
  bool bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  float *pfVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  int *piVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint *puVar17;
  undefined1 local_res18 [16];
  undefined1 uVar18;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  uint uStack_70;
  int iStack_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  plVar8 = *(longlong **)(**(longlong **)(param_1 + 0x90) + 0x118);
  plVar8 = (longlong *)(**(code **)(*plVar8 + 0x688))(plVar8);
  uVar11 = 0;
  if (plVar8 != (longlong *)0x0) {
    cVar4 = (**(code **)(*plVar8 + 0x780))();
    goto LAB_1423a3e61;
  }
  uVar16 = FUN_142231800();
  if (uVar16 == 0) {
LAB_1423a3e57:
    uVar16 = uVar11;
  }
  else {
    lVar13 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(uVar16 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar16 + 0x10) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8
         ) != lVar13 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1423a3e57;
  }
  cVar4 = uVar16 != 0;
LAB_1423a3e61:
  if (((char)param_10 == '\0') && ((param_8 == '\0' || (param_9 != '\0')))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (param_3 == '\0') {
    uVar6 = *DAT_146af0de0;
    if ((int)*DAT_146af0de0 < 1) {
      uVar6 = *(uint *)(param_1 + 0x18);
    }
    if ((cVar4 != '\0') || (uVar10 = uVar6, bVar1)) {
      uVar10 = 1;
    }
    cVar4 = *(char *)(param_1 + 0x8c);
    if (cVar4 == '\0') {
      cVar4 = (&DAT_146af0b44)[*(byte *)(param_1 + 1)] + '\x01';
      (&DAT_146af0b44)[*(byte *)(param_1 + 1)] = cVar4;
      *(char *)(param_1 + 0x8c) = cVar4;
    }
    uVar18 = 0;
  }
  else if (bVar1) {
    cVar4 = *(char *)(param_1 + 0x8c);
    if (cVar4 == '\0') {
      cVar4 = (&DAT_146af0b44)[*(byte *)(param_1 + 1)] + '\x01';
      (&DAT_146af0b44)[*(byte *)(param_1 + 1)] = cVar4;
      *(char *)(param_1 + 0x8c) = cVar4;
    }
    uVar18 = 0;
    uVar6 = 1;
    uVar10 = 1;
  }
  else {
    param_10 = 1;
    if ((*(byte *)(param_1 + 2) & 2) == 0) {
      iVar5 = *(int *)(param_1 + 0x28);
      uVar6 = iVar5 + 1U;
      if (0 < iVar5) {
        pfVar9 = *(float **)(param_1 + 0x20);
        do {
          uVar10 = (int)uVar11 + 1;
          uVar6 = uVar10;
          if (*pfVar9 <= param_4 && param_4 != *pfVar9) break;
          pfVar9 = pfVar9 + 1;
          uVar11 = (ulonglong)uVar10;
          uVar6 = iVar5 + 1U;
        } while ((int)uVar10 < iVar5);
      }
    }
    else {
      plVar8 = (longlong *)(param_1 + 0x30);
      uVar16 = (ulonglong)(int)param_5;
      if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
        lVar13 = *(longlong *)(param_1 + 0x70);
        if (*(longlong *)(param_1 + 0x70) == 0) {
          lVar13 = param_1 + 0x68;
        }
        iVar5 = *(int *)(lVar13 + ((longlong)*(int *)(param_1 + 0x78) - 1U & uVar16) * 4);
        if (iVar5 != -1) {
          lVar13 = *plVar8;
          do {
            lVar12 = (longlong)iVar5;
            if (*(uint *)(lVar13 + lVar12 * 0x10) == param_5) {
              if (((iVar5 != -1) && (lVar13 = lVar12 * 0x10 + lVar13, lVar13 != 0)) &&
                 (piVar14 = (int *)(lVar13 + 4), piVar14 != (int *)0x0)) {
                param_10 = *piVar14;
                goto LAB_1423a4150;
              }
              break;
            }
            iVar5 = *(int *)(lVar13 + 8 + lVar12 * 0x10);
          } while (iVar5 != -1);
        }
      }
      uVar6 = 1;
      if (0 < *(int *)(param_1 + 0x38) - *(int *)(param_1 + 100)) {
        iVar5 = *(int *)(param_1 + 0x58);
        puStack_50 = (uint *)(param_1 + 0x40);
        local_88 = (longlong *)0x100000000;
        local_78._4_4_ = 0;
        uStack_70 = 0;
        if (iVar5 != 0) {
          puVar17 = *(uint **)(param_1 + 0x50);
          if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
            puVar17 = puStack_50;
          }
          uVar6 = *puVar17;
          uVar15 = uVar11;
          while (uVar6 == 0) {
            iVar7 = (int)uVar15;
            uStack_70 = (int)uVar11 + 0x20;
            uVar11 = (ulonglong)uStack_70;
            uVar15 = (ulonglong)(iVar7 + 1U);
            uVar2 = (ulonglong)local_88 >> 0x20;
            local_88 = (longlong *)CONCAT44((int)uVar2,iVar7 + 1U);
            local_78._4_4_ = iVar5;
            if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1423a409f;
            uVar6 = puVar17[(longlong)iVar7 + 1];
          }
          uVar6 = -uVar6 & uVar6;
          iVar7 = 0x1f;
          if (uVar6 != 0) {
            for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
            }
          }
          local_88 = (longlong *)CONCAT44(uVar6,SUB84(local_88,0));
          if (uVar6 == 0) {
            iVar7 = 0x20;
          }
          else {
            iVar7 = 0x1f - iVar7;
          }
          local_78._4_4_ = (uStack_70 - iVar7) + 0x1f;
          if (iVar5 < local_78._4_4_) {
            local_78._4_4_ = iVar5;
          }
        }
LAB_1423a409f:
        uStack_48 = CONCAT44(local_78._4_4_,0xffffffff);
        local_68 = CONCAT44(iStack_6c,uStack_70);
        uStack_58 = local_88;
        uVar3 = uStack_58;
        uStack_58._4_4_ = (uint)((ulonglong)local_88 >> 0x20);
        uStack_80._0_4_ = SUB84(local_88,0);
        uStack_80._4_4_ = uStack_58._4_4_;
        uStack_70 = 0xffffffff;
        iStack_6c = local_78._4_4_;
        bVar1 = local_78._4_4_ < iVar5;
        local_88 = plVar8;
        local_60 = plVar8;
        uStack_58 = uVar3;
        uStack_40 = local_68;
        local_78 = puStack_50;
        if (bVar1) {
          while( true ) {
            lVar12 = (longlong)iStack_6c;
            lVar13 = *local_88;
            if ((*(int *)(lVar13 + lVar12 * 0x10) < (int)uVar16) &&
               ((int)param_10 <= *(int *)(lVar13 + 4 + lVar12 * 0x10))) {
              param_10 = *(int *)(lVar13 + 4 + lVar12 * 0x10);
            }
            uStack_70 = uStack_70 & ~uStack_80._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
            if ((int)local_78[6] <= iStack_6c) break;
            uVar16 = (ulonglong)param_5;
          }
        }
        local_88 = (longlong *)&param_5;
        uStack_80 = &param_10;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,int_&&>_>(plVar8,local_res18,&local_88,0);
LAB_1423a4150:
        uVar6 = param_10 + 1;
      }
    }
    cVar4 = *(char *)(param_1 + 0x8c);
    param_10 = uVar6;
    if (*DAT_146af0de0 != 0) {
      param_10 = *DAT_146af0de0;
    }
    if (cVar4 == '\0') {
      cVar4 = (&DAT_146af0b44)[*(byte *)(param_1 + 1)] + '\x01';
      (&DAT_146af0b44)[*(byte *)(param_1 + 1)] = cVar4;
      *(char *)(param_1 + 0x8c) = cVar4;
    }
    uVar18 = 1;
    uVar6 = param_10;
    uVar10 = param_10;
  }
  FUN_1423bca60(param_1,param_2,cVar4,uVar10,uVar6,uVar18);
  return;
}



// FUNCTION 1423a41d0 FUN_1423a41d0 body=448 status=ok
// SIG undefined FUN_1423a41d0(void)

void FUN_1423a41d0(longlong param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  longlong *local_30;
  undefined8 uStack_28;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if ((param_2 != (longlong *)0x0) && (0 < (int)param_2[1] - *(int *)((longlong)param_2 + 0x34))) {
    iVar6 = (int)param_2[5];
    puStack_20 = (uint *)(param_2 + 2);
    local_58 = 0x100000000;
    iVar5 = 0;
    local_48 = (uint *)0xffffffff;
    uStack_40 = uStack_40 & 0xffffffff00000000;
    if (iVar6 != 0) {
      puVar7 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar7 = puStack_20;
      }
      uVar3 = *puVar7;
      iVar4 = 0;
      while (uVar3 == 0) {
        local_48 = (uint *)0xffffffff;
        iVar5 = iVar5 + 0x20;
        uStack_40._4_4_ = (int)(uStack_40 >> 0x20);
        uStack_40 = CONCAT44(uStack_40._4_4_,iVar5);
        uVar2 = (ulonglong)local_58 >> 0x20;
        local_58 = CONCAT44((int)uVar2,iVar4 + 1);
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1423a42bd;
        uVar3 = puVar7[(longlong)iVar4 + 1];
        iVar4 = iVar4 + 1;
      }
      uVar3 = -uVar3 & uVar3;
      iVar4 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      local_58 = CONCAT44(uVar3,(undefined4)local_58);
      if (uVar3 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      iVar5 = (iVar5 - iVar4) + 0x1f;
      local_48 = (uint *)CONCAT44(iVar5,0xffffffff);
      if (iVar6 < iVar5) {
LAB_1423a42bd:
        local_48 = (uint *)CONCAT44(iVar6,(undefined4)local_48);
      }
    }
    uStack_18 = (undefined4)local_48;
    iStack_14 = local_48._4_4_;
    uStack_10 = (uint)uStack_40;
    uStack_c = uStack_40._4_4_;
    uStack_28 = local_58;
    uVar2 = (ulonglong)local_48;
    uStack_50 = local_58;
    local_38 = (uint)uStack_40;
    uStack_34 = uStack_40._4_4_;
    bVar1 = local_48._4_4_ < iVar6;
    iVar6 = local_48._4_4_;
    local_48 = puStack_20;
    uStack_40 = uVar2;
    local_30 = param_2;
    if (bVar1) {
      do {
        FUN_142378260(param_1,*(undefined8 *)(*param_2 + (longlong)iVar6 * 0x18),
                      *(undefined4 *)(*param_2 + 8 + (longlong)iVar6 * 0x18));
        uStack_40 = CONCAT44(uStack_40._4_4_,(uint)uStack_40 & ~uStack_50._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
        bVar1 = uStack_40._4_4_ < (int)local_48[6];
        iVar6 = uStack_40._4_4_;
      } while (bVar1);
    }
  }
  if (((*(longlong *)(param_1 + 0x718) != 0) && (param_3 != 0)) &&
     (0 < *(int *)(param_3 + 8) - *(int *)(param_3 + 0x34))) {
    FUN_142246e20(*(longlong *)(param_1 + 0x718),param_3,param_1 + 0x808,param_1 + 0x818);
  }
  return;
}



// FUNCTION 1423a4390 FUN_1423a4390 body=691 status=ok
// SIG undefined FUN_1423a4390(void)

void FUN_1423a4390(longlong param_1,longlong param_2,char param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulonglong uVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  float *pfVar11;
  float *pfVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  undefined1 local_res20 [8];
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  if (param_3 == '\0') {
    FInterpCurveVector::operator=(param_2 + 0xc0,param_1 + 0x6f0);
    FInterpCurveQuat::operator=(param_2 + 0xd8,param_1 + 0x708);
    FInterpCurveVector::operator=(param_2 + 0xf0,param_1 + 0x720);
    FInterpCurveFloat::operator=(param_2 + 0x108,param_1 + 0x738);
    goto LAB_1423a45cd;
  }
  if (*(char *)(param_1 + 0x7bf) != '\0') {
    return;
  }
  uVar7 = operator==(param_2 + 0xc0,param_1 + 0x6f0);
  if (((char)uVar7 == '\0') ||
     (iVar15 = *(int *)(param_2 + 0xe0), iVar15 != *(int *)(param_1 + 0x710))) {
LAB_1423a4484:
    uVar6 = 1;
  }
  else {
    pfVar12 = *(float **)(param_1 + 0x708);
    if (iVar15 != 0) {
      pfVar11 = (float *)(*(longlong *)(param_2 + 0xd8) + 0x20);
      do {
        if ((((*pfVar12 != pfVar11[-8]) ||
             (auVar1._4_4_ = -(uint)(pfVar11[-3] == pfVar12[5]),
             auVar1._0_4_ = -(uint)(pfVar11[-4] == pfVar12[4]),
             auVar1._8_4_ = -(uint)(pfVar11[-2] == pfVar12[6]),
             auVar1._12_4_ = -(uint)(pfVar11[-1] == pfVar12[7]), iVar8 = movmskps(uVar7,auVar1),
             iVar8 != 0xf)) ||
            (auVar2._4_4_ = -(uint)(pfVar12[9] == pfVar11[1]),
            auVar2._0_4_ = -(uint)(pfVar12[8] == *pfVar11),
            auVar2._8_4_ = -(uint)(pfVar12[10] == pfVar11[2]),
            auVar2._12_4_ = -(uint)(pfVar12[0xb] == pfVar11[3]), iVar8 = movmskps(0xf,auVar2),
            iVar8 != 0xf)) ||
           ((auVar3._4_4_ = -(uint)(pfVar11[5] == pfVar12[0xd]),
            auVar3._0_4_ = -(uint)(pfVar11[4] == pfVar12[0xc]),
            auVar3._8_4_ = -(uint)(pfVar11[6] == pfVar12[0xe]),
            auVar3._12_4_ = -(uint)(pfVar11[7] == pfVar12[0xf]), iVar8 = movmskps(0xf,auVar3),
            iVar8 != 0xf ||
            (uVar7 = (uint)*(byte *)(pfVar12 + 0x10),
            *(byte *)(pfVar11 + 8) != *(byte *)(pfVar12 + 0x10))))) goto LAB_1423a4484;
        pfVar12 = pfVar12 + 0x14;
        pfVar11 = pfVar11 + 0x14;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    if (((*(char *)(param_2 + 0xe8) != *(char *)(param_1 + 0x718)) ||
        ((*(char *)(param_2 + 0xe8) != '\0' &&
         (*(float *)(param_1 + 0x71c) != *(float *)(param_2 + 0xec))))) ||
       (cVar5 = operator==(param_2 + 0xf0,param_1 + 0x720), cVar5 == '\0')) goto LAB_1423a4484;
    uVar6 = 0;
  }
  *(undefined1 *)(param_1 + 0x7be) = uVar6;
  local_48 = 0;
  local_40 = 0;
  lVar9 = UGNewsMenuItem::GetPrivateStaticClass();
  plVar10 = (longlong *)FName::FName(local_res20,L"SplineCurves",1);
  lVar13 = *plVar10;
  if (((int)lVar13 != 0) || (lVar14 = 0, (int)((ulonglong)lVar13 >> 0x20) != 0)) {
    if (lVar9 == 0) {
      local_30 = 0;
    }
    else {
      local_30 = *(longlong *)(lVar9 + 0x38);
    }
    local_28 = 0xffffffff;
    local_24 = 0x101;
    local_22 = 0;
    local_38 = lVar9;
    FUN_140472e10(&local_38);
    while ((lVar14 = 0, local_30 != 0 &&
           (lVar14 = local_30, *(longlong *)(local_30 + 0x18) != lVar13))) {
      local_30 = *(longlong *)(local_30 + 0x28);
      FUN_140472e10(&local_38);
    }
  }
  uVar4 = local_40;
  lVar13 = (longlong)(int)local_40;
  iVar15 = (int)local_40 + 1;
  local_40 = CONCAT44(local_40._4_4_,iVar15);
  if (local_40._4_4_ < iVar15) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,uVar4 & 0xffffffff);
  }
  *(longlong *)(local_48 + lVar13 * 8) = lVar14;
  FUN_14234b880(param_1,&local_48);
  if (local_48 != 0) {
    FMemory::Free();
  }
LAB_1423a45cd:
  uVar6 = 0;
  if (*(char *)(param_2 + 0x120) != '\0') {
    FInterpCurveVector::operator=(param_1 + 0x6f0,param_2 + 0x60);
    FInterpCurveQuat::operator=(param_1 + 0x708,param_2 + 0x78);
    FInterpCurveVector::operator=(param_1 + 0x720,param_2 + 0x90);
    FInterpCurveFloat::operator=(param_1 + 0x738,param_2 + 0xa8);
    *(undefined1 *)(param_1 + 0x7be) = 0;
    uVar6 = *(undefined1 *)(param_2 + 0x120);
  }
  *(undefined1 *)(param_1 + 0x7bd) = uVar6;
  FUN_1423c1a10(param_1);
  return;
}



// FUNCTION 1423a4650 FUN_1423a4650 body=342 status=ok
// SIG undefined FUN_1423a4650(void)

void FUN_1423a4650(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  BOOL BVar8;
  longlong local_res8;
  
  FUN_142381ae0();
  uVar4 = *(undefined4 *)(param_1 + 100);
  uVar5 = *(undefined4 *)(param_1 + 0x68);
  uVar6 = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(param_2 + 0x2d0) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_2 + 0x2d4) = uVar4;
  *(undefined4 *)(param_2 + 0x2d8) = uVar5;
  *(undefined4 *)(param_2 + 0x2dc) = uVar6;
  lVar2 = *(longlong *)(param_1 + 0x70);
  lVar3 = *(longlong *)(param_2 + 0x348);
  *(longlong *)(param_2 + 0x348) = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x88) = *(int *)(lVar2 + 0x88) + 1;
  }
  if (lVar3 != 0) {
    piVar1 = (int *)(lVar3 + 0x88);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_141edf360(lVar3);
      BeginCleanup(lVar3 + 0x68);
    }
  }
  uVar7 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_2 + 0x350) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_2 + 0x358) = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_2 + 0x360) = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_2 + 0x368) = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_2 + 0x370) = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_2 + 0x378) = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_2 + 0x380) = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_2 + 0x388) = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_2 + 0x390) = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_2 + 0x398) = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_2 + 0x3a0) = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_2 + 0x3a8) = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_2 + 0x3b0) = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_2 + 0x3b8) = uVar7;
  uVar4 = *(undefined4 *)(param_1 + 0xf4);
  uVar5 = *(undefined4 *)(param_1 + 0xf8);
  uVar6 = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(param_2 + 0x3c0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(param_2 + 0x3c4) = uVar4;
  *(undefined4 *)(param_2 + 0x3c8) = uVar5;
  *(undefined4 *)(param_2 + 0x3cc) = uVar6;
  uVar4 = *(undefined4 *)(param_1 + 0x104);
  uVar5 = *(undefined4 *)(param_1 + 0x108);
  uVar6 = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)(param_2 + 0x3d0) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(param_2 + 0x3d4) = uVar4;
  *(undefined4 *)(param_2 + 0x3d8) = uVar5;
  *(undefined4 *)(param_2 + 0x3dc) = uVar6;
  *(undefined4 *)(param_2 + 0x3e0) = *(undefined4 *)(param_1 + 0x110);
  if ((*(longlong *)(param_2 + 0x348) != 0) && (*(char *)(param_2 + 0x345) != '\0')) {
    BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af0e18);
    if (BVar8 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af0e18);
    }
    local_res8 = param_2;
    TArray<FName,FDefaultAllocator>::Remove(&DAT_146af0ef0,&local_res8);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146af0e18);
  }
  FUN_1423424e0(param_2);
  return;
}



// FUNCTION 1423a47b0 ApplyToComponent body=62 status=ok
// SIG undefined ApplyToComponent(void)

void FSplineInstanceData::ApplyToComponent(undefined8 param_1,undefined8 param_2,int param_3)

{
  FUN_142381ae0();
  FUN_1423a4390(param_2,param_1,param_3 == 1);
  return;
}



// FUNCTION 1423a47f0 FUN_1423a47f0 body=43 status=ok
// SIG undefined FUN_1423a47f0(void)

longlong FUN_1423a47f0(longlong param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  
  uVar2 = *(ulonglong *)(param_1 + 0x718);
  if ((uVar2 != 0) && (*(longlong *)(uVar2 + 0x48) != 0)) {
    uVar1 = *(ushort *)(*(longlong *)(uVar2 + 0x48) + 0x250);
    uVar2 = (ulonglong)uVar1;
    if (*(ushort *)(param_1 + 0xb30) != uVar1) {
      return (ulonglong)(byte)(uVar1 >> 8) << 8;
    }
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}



// FUNCTION 1423a48c0 AutoSetTangents body=679 status=ok
// SIG undefined AutoSetTangents(void)

void FInterpCurve<FQuat>::AutoSetTangents(longlong *param_1,float param_2,char param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  longlong lVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  
  iVar2 = (int)param_1[1];
  iVar13 = iVar2 + -1;
  if (0 < iVar2) {
    lVar9 = 0;
    iVar8 = 1;
    lVar12 = (longlong)iVar13;
    fVar14 = param_2;
    do {
      if (lVar9 == 0) {
        iVar5 = 0;
        if ((char)param_1[2] != '\0') {
          iVar5 = iVar13;
        }
      }
      else {
        iVar5 = iVar8 + -2;
      }
      iVar6 = iVar8;
      if ((lVar9 == lVar12) && (iVar6 = iVar13, (char)param_1[2] != '\0')) {
        iVar6 = 0;
      }
      lVar3 = *param_1;
      pfVar7 = (float *)(lVar9 * 0x50 + lVar3);
      pfVar11 = (float *)((longlong)iVar5 * 0x50 + lVar3);
      pfVar10 = (float *)((longlong)iVar6 * 0x50 + lVar3);
      cVar1 = *(char *)(pfVar7 + 0x10);
      if ((cVar1 - 1U & 0xfb) == 0) {
        if ((param_3 == '\0') || ((lVar9 != 0 && ((lVar9 != lVar12 || ((char)param_1[2] != '\0')))))
           ) {
          if ((*(char *)(pfVar11 + 0x10) == '\x01') || ((byte)(*(char *)(pfVar11 + 0x10) - 3U) < 3))
          {
            if (((char)param_1[2] == '\0') || (lVar9 != 0)) {
              fVar17 = *pfVar11;
            }
            else {
              fVar17 = *pfVar7 - *(float *)((longlong)param_1 + 0x14);
            }
            if (((char)param_1[2] == '\0') || (lVar9 != lVar12)) {
              fVar16 = *pfVar10;
            }
            else {
              fVar16 = *(float *)((longlong)param_1 + 0x14) + *pfVar7;
            }
            FQuat::CalcTangents(pfVar11 + 4,fVar14,pfVar10 + 4,param_2,&local_98);
            fVar15 = fVar16 - fVar17;
            if (fVar16 - fVar17 <= 0.0001) {
              fVar15 = 0.0001;
            }
            fVar15 = 1.0 / fVar15;
            local_98 = local_98 * fVar15;
            fStack_94 = fStack_94 * fVar15;
            fVar14 = fStack_90 * fVar15;
            fStack_8c = fStack_8c * fVar15;
            pfVar7[8] = local_98;
            pfVar7[9] = fStack_94;
            pfVar7[10] = fVar14;
            pfVar7[0xb] = fStack_8c;
            pfVar7[0xc] = local_98;
            pfVar7[0xd] = fStack_94;
            pfVar7[0xe] = fVar14;
            pfVar7[0xf] = fStack_8c;
            fStack_90 = fVar14;
          }
          else {
            uVar4 = *(undefined8 *)(pfVar11 + 10);
            *(undefined8 *)(pfVar7 + 8) = *(undefined8 *)(pfVar11 + 8);
            *(undefined8 *)(pfVar7 + 10) = uVar4;
            fVar17 = pfVar11[0xd];
            fVar16 = pfVar11[0xe];
            fVar15 = pfVar11[0xf];
            pfVar7[0xc] = pfVar11[0xc];
            pfVar7[0xd] = fVar17;
            pfVar7[0xe] = fVar16;
            pfVar7[0xf] = fVar15;
          }
        }
        else {
LAB_1423a4a08:
          fVar14 = 0.0;
          pfVar7[8] = 0.0;
          pfVar7[9] = 0.0;
          pfVar7[10] = 0.0;
          pfVar7[0xb] = 1.0;
          pfVar7[0xc] = 0.0;
          pfVar7[0xd] = 0.0;
          pfVar7[0xe] = 0.0;
          pfVar7[0xf] = 1.0;
        }
      }
      else if (cVar1 == '\0') {
        fVar17 = pfVar10[4];
        fVar16 = pfVar10[5];
        fVar14 = pfVar10[6] - pfVar7[6];
        fVar15 = pfVar10[7];
        pfVar7[8] = fVar17 - pfVar7[4];
        pfVar7[9] = fVar16 - pfVar7[5];
        pfVar7[10] = fVar14;
        pfVar7[0xb] = fVar15 - pfVar7[7];
        pfVar7[0xc] = fVar17 - pfVar7[4];
        pfVar7[0xd] = fVar16 - pfVar7[5];
        pfVar7[0xe] = fVar14;
        pfVar7[0xf] = fVar15 - pfVar7[7];
      }
      else if (cVar1 == '\x02') goto LAB_1423a4a08;
      iVar8 = iVar8 + 1;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar2);
  }
  return;
}



// FUNCTION 1423a4b70 AutoSetTangents body=1115 status=ok
// SIG undefined AutoSetTangents(void)

void FInterpCurve<FVector>::AutoSetTangents(longlong *param_1,float param_2,char param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  longlong lVar8;
  float *pfVar9;
  uint uVar10;
  float *pfVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint local_res8;
  float local_108 [6];
  float local_f0;
  undefined4 local_e0;
  undefined4 local_d4;
  undefined4 local_c8;
  undefined4 local_bc;
  
  iVar2 = (int)param_1[1];
  uVar4 = iVar2 - 1;
  if (0 < iVar2) {
    lVar8 = 0;
    lVar12 = (longlong)(int)uVar4;
    local_res8 = 1;
    do {
      uVar7 = 0;
      if (lVar8 == 0) {
        uVar3 = uVar7;
        if ((char)param_1[2] != '\0') {
          uVar3 = uVar4;
        }
      }
      else {
        uVar3 = local_res8 - 2;
      }
      uVar10 = local_res8;
      if ((lVar8 == lVar12) && (uVar10 = uVar4, (char)param_1[2] != '\0')) {
        uVar10 = uVar7;
      }
      lVar13 = *param_1;
      pfVar5 = (float *)((longlong)(int)uVar3 * 0x2c + lVar13);
      pfVar6 = (float *)(lVar8 * 0x2c + lVar13);
      pfVar11 = (float *)((longlong)(int)uVar10 * 0x2c + lVar13);
      cVar1 = *(char *)(pfVar6 + 10);
      if ((cVar1 - 1U & 0xfb) == 0) {
        if ((param_3 == '\0') || ((lVar8 != 0 && ((lVar8 != lVar12 || ((char)param_1[2] != '\0')))))
           ) {
          if ((*(char *)(pfVar5 + 10) == '\x01') || ((byte)(*(char *)(pfVar5 + 10) - 3U) < 3)) {
            if (((char)param_1[2] == '\0') || (lVar8 != 0)) {
              fVar19 = *pfVar5;
              fVar20 = *pfVar6;
            }
            else {
              fVar20 = *pfVar6;
              fVar19 = fVar20 - *(float *)((longlong)param_1 + 0x14);
            }
            if (((char)param_1[2] == '\0') || (lVar8 != lVar12)) {
              fVar18 = *pfVar11;
            }
            else {
              fVar18 = fVar20 + *(float *)((longlong)param_1 + 0x14);
            }
            fVar21 = 1.0 - param_2;
            pfVar9 = pfVar5 + 1;
            if (cVar1 == '\x05') {
              lVar13 = (longlong)(pfVar6 + 1) - (longlong)pfVar9;
              lVar14 = (longlong)local_108 - (longlong)pfVar9;
              lVar15 = (longlong)(pfVar11 + 1) - (longlong)pfVar9;
              do {
                fVar16 = (float)ClampFloatTangent(*pfVar9,fVar19,
                                                  *(undefined4 *)(lVar13 + (longlong)pfVar9),fVar20,
                                                  *(undefined4 *)(lVar15 + (longlong)pfVar9),fVar18)
                ;
                uVar7 = uVar7 + 4;
                *(float *)((longlong)pfVar9 + lVar14) = fVar16 * fVar21;
                pfVar9 = pfVar9 + 1;
              } while (uVar7 < 0xc);
            }
            else {
              fVar20 = pfVar6[1];
              fVar18 = fVar18 - fVar19;
              if (fVar18 <= 0.0001) {
                fVar18 = 0.0001;
              }
              fVar18 = 1.0 / fVar18;
              local_108[0] = ((pfVar11[1] - fVar20) + (fVar20 - *pfVar9)) * fVar21 * fVar18;
              local_108[1] = ((pfVar6[2] - pfVar5[2]) + (pfVar11[2] - pfVar6[2])) * fVar21 * fVar18;
              local_108[2] = ((pfVar6[3] - pfVar5[3]) + (pfVar11[3] - pfVar6[3])) * fVar21 * fVar18;
            }
            uVar17 = CONCAT44(local_108[1],local_108[0]);
            fVar20 = local_108[2];
            goto LAB_1423a4f1c;
          }
          *(undefined8 *)(pfVar6 + 4) = *(undefined8 *)(pfVar5 + 4);
          pfVar6[6] = pfVar5[6];
          *(undefined8 *)(pfVar6 + 7) = *(undefined8 *)(pfVar5 + 7);
          fVar20 = pfVar5[9];
        }
        else {
          local_c8 = 0;
          pfVar6[4] = 0.0;
          pfVar6[5] = 0.0;
          pfVar6[6] = 0.0;
          local_bc = 0;
          fVar20 = 0.0;
          pfVar6[7] = 0.0;
          pfVar6[8] = 0.0;
        }
LAB_1423a4f29:
        pfVar6[9] = fVar20;
      }
      else {
        if (cVar1 == '\0') {
          local_f0 = pfVar11[3] - pfVar6[3];
          uVar17 = CONCAT44(pfVar11[2] - pfVar6[2],pfVar11[1] - pfVar6[1]);
          fVar20 = local_f0;
LAB_1423a4f1c:
          *(undefined8 *)(pfVar6 + 4) = uVar17;
          pfVar6[6] = fVar20;
          *(undefined8 *)(pfVar6 + 7) = uVar17;
          goto LAB_1423a4f29;
        }
        if (cVar1 == '\x02') {
          local_e0 = 0;
          pfVar6[4] = 0.0;
          pfVar6[5] = 0.0;
          pfVar6[6] = 0.0;
          local_d4 = 0;
          fVar20 = 0.0;
          pfVar6[7] = 0.0;
          pfVar6[8] = 0.0;
          goto LAB_1423a4f29;
        }
      }
      local_res8 = local_res8 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar2);
  }
  return;
}



// FUNCTION 1423a4fd0 FUN_1423a4fd0 body=299 status=ok
// SIG undefined FUN_1423a4fd0(void)

void FUN_1423a4fd0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  FUN_142384dc0();
  uVar6 = 0;
  uVar7 = uVar6;
  uVar9 = uVar6;
  if (0 < *(int *)(param_1 + 0x860)) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x858);
      plVar1 = (longlong *)(lVar2 + 0x10 + uVar7);
      plVar3 = (longlong *)plVar1[2];
      if ((longlong *)plVar1[2] == (longlong *)0x0) {
        plVar3 = plVar1;
      }
      uVar4 = (longlong)(int)plVar1[3] & 0x1fffffffffffffff;
      if (plVar3 + (int)plVar1[3] < plVar3) {
        uVar4 = uVar6;
      }
      uVar5 = uVar6;
      if (uVar4 != 0) {
        do {
          if (*plVar3 != 0) {
            FUN_141edf360();
          }
          plVar3 = plVar3 + 1;
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar4);
        lVar2 = *(longlong *)(param_1 + 0x858);
      }
      if (*(longlong *)(uVar7 + 0x30 + lVar2) != 0) {
        FUN_141edf360();
      }
      uVar8 = (int)uVar9 + 1;
      uVar7 = uVar7 + 0x38;
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 < *(int *)(param_1 + 0x860));
  }
  FUN_141edede0(param_1 + 0x648,0);
  plVar3 = *(longlong **)(param_1 + 0x7f0);
  if (plVar3 != (longlong *)0x0) {
    if (plVar3[2] != 0) {
      FMemory::Free();
    }
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar3,0x20);
    *(undefined8 *)(param_1 + 0x7f0) = 0;
  }
  return;
}



// FUNCTION 1423a5100 FUN_1423a5100 body=181 status=ok
// SIG undefined FUN_1423a5100(void)

void FUN_1423a5100(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  BOOL BVar3;
  longlong local_res8;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af0e18);
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146af0e18);
  }
  local_res8 = param_1;
  TArray<FName,FDefaultAllocator>::Remove(&DAT_146af0ef0,&local_res8);
  local_res8 = param_1;
  TArray<FName,FDefaultAllocator>::Remove(&DAT_146af0f00,&local_res8);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146af0e18);
  lVar2 = *(longlong *)(param_1 + 0x348);
  *(undefined8 *)(param_1 + 0x348) = 0;
  if (lVar2 != 0) {
    piVar1 = (int *)(lVar2 + 0x88);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_141edf360(lVar2);
      BeginCleanup(lVar2 + 0x68);
    }
  }
  FUN_141edede0(param_1 + 0x4a0,0);
  FUN_1423850d0(param_1);
  return;
}



// FUNCTION 1423a51c0 FUN_1423a51c0 body=261 status=ok
// SIG undefined FUN_1423a51c0(void)

void FUN_1423a51c0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_142385110();
  if ((longlong *)param_1[0x149] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x149] + 0x2e8))();
    FUN_1428ebfd0(param_1[0x149]);
  }
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xe4);
  if ((cVar1 == '\0') ||
     (lVar2 = FWeakObjectPtr::Get(param_1 + 0xe4), (*(byte *)(lVar2 + 200) & 0x20) == 0)) {
    cVar1 = (**(code **)(*param_1 + 0xa08))(param_1);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x358))(param_1,0);
    }
  }
  else {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0xe4);
    (**(code **)(*param_1 + 0x358))(param_1,*(char *)(lVar2 + 0x3f) != '\0');
  }
  if (0 < (int)param_1[0xf0]) {
    cVar1 = *(char *)((longlong)param_1 + 0x3f);
    lVar4 = param_1[0xef];
    lVar2 = lVar4 + (longlong)(int)param_1[0xf0] * 8;
    for (; lVar4 != lVar2; lVar4 = lVar4 + 8) {
      plVar3 = (longlong *)FWeakObjectPtr::Get(lVar4);
      if ((plVar3 != (longlong *)0x0) && ((*(byte *)(plVar3 + 0x19) & 0x20) != 0)) {
        (**(code **)(*plVar3 + 0x358))(plVar3,cVar1 != '\0');
      }
    }
  }
  return;
}



// FUNCTION 1423a52d0 FUN_1423a52d0 body=144 status=ok
// SIG undefined FUN_1423a52d0(void)

void FUN_1423a52d0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x720);
  if (lVar2 != 0) {
    lVar3 = FUN_142a07000();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((bVar1) && (*(longlong *)(param_1 + 0x718) == *(longlong *)(lVar2 + 0x718))) &&
        (*(longlong *)(param_1 + 0xcd0) != 0)) && (*(longlong *)(lVar2 + 0xcd0) != 0)) {
      *(byte *)(param_1 + 0xb1a) = *(byte *)(param_1 + 0xb1a) | 0x40;
      *(byte *)(param_1 + 0xb1b) = *(byte *)(param_1 + 0xb1b) | 2;
    }
  }
  return;
}



// FUNCTION 1423a5360 FUN_1423a5360 body=169 status=ok
// SIG undefined FUN_1423a5360(void)

ulonglong FUN_1423a5360(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong in_RAX;
  undefined8 local_res10;
  undefined8 local_res18;
  
  lVar1 = *(longlong *)(param_1 + 0x718);
  if (lVar1 != 0) {
    local_res10 = param_2;
    local_res18 = param_3;
    in_RAX = FReferenceSkeleton::FindBoneIndex(lVar1 + 0x138,&local_res10);
    iVar2 = (int)in_RAX;
    if (iVar2 != -1) {
      in_RAX = FReferenceSkeleton::FindBoneIndex(lVar1 + 0x138,&local_res18);
      iVar3 = (int)in_RAX;
      if ((iVar3 != -1) && (iVar3 < iVar2)) {
        in_RAX = (longlong)iVar2 * 0x10;
        iVar2 = *(int *)(in_RAX + 8 + *(longlong *)(lVar1 + 0x158));
        do {
          if (iVar2 == iVar3) {
            return CONCAT71((int7)(in_RAX >> 8),1);
          }
          in_RAX = (longlong)iVar2 * 0x10;
          iVar2 = *(int *)(in_RAX + 8 + *(longlong *)(lVar1 + 0x158));
        } while (iVar2 != -1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1423a5410 Build body=416 status=ok
// SIG undefined Build(void)

void FSplinePositionLinearApproximation::Build(longlong *param_1,longlong *param_2,float param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 local_res18 [4];
  undefined1 local_68 [64];
  
  iVar9 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_2 + 0xc)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,0);
  }
  fVar12 = 0.0;
  if (0 < (int)param_1[10]) {
    fVar12 = *(float *)(param_1[9] + -0x14 + (longlong)(int)param_1[10] * 0x14);
  }
  iVar10 = 2;
  if (1 < (int)(fVar12 * param_3)) {
    iVar10 = (int)(fVar12 * param_3);
  }
  if (0 < iVar10) {
    local_res18[0] = 0;
    do {
      uVar11 = FInterpCurve<float>::Eval
                         (param_1 + 9,(float)iVar9 * (1.0 / (float)iVar10) * fVar12,local_res18);
      puVar6 = (undefined8 *)FInterpCurve<FVector>::Eval(param_1,local_68,uVar11,&DAT_1468b5d90);
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
      }
      iVar9 = iVar9 + 1;
      puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_2);
      *puVar7 = *puVar6;
      uVar2 = *(undefined4 *)(puVar6 + 1);
      *(undefined4 *)((longlong)puVar7 + 0xc) = uVar11;
      *(undefined4 *)(puVar7 + 1) = uVar2;
    } while (iVar9 < iVar10);
  }
  lVar5 = param_1[10];
  iVar9 = (int)param_2[1];
  lVar3 = param_1[9];
  lVar4 = *param_1;
  lVar8 = (longlong)(int)param_1[1] * 0x2c;
  *(int *)(param_2 + 1) = iVar9 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar9);
  }
  uVar11 = *(undefined4 *)(lVar3 + -0x10 + (longlong)(int)lVar5 * 0x14);
  puVar6 = (undefined8 *)((longlong)iVar9 * 0x10 + *param_2);
  *puVar6 = *(undefined8 *)(lVar4 + -0x28 + lVar8);
  uVar2 = *(undefined4 *)(lVar4 + -0x20 + lVar8);
  *(undefined4 *)((longlong)puVar6 + 0xc) = uVar11;
  *(undefined4 *)(puVar6 + 1) = uVar2;
  return;
}



// FUNCTION 1423a55b0 FUN_1423a55b0 body=845 status=ok
// SIG undefined FUN_1423a55b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423a55b0(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
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
  undefined8 uVar23;
  float fVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  char cVar28;
  uint uVar29;
  uint uVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
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
  
  cVar28 = FWeakObjectPtr::IsValid(param_1 + 0x720);
  lVar31 = param_1;
  if (cVar28 != '\0') {
    lVar31 = FWeakObjectPtr::Get(param_1 + 0x720);
  }
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x718) + 0x298);
  iVar5 = (int)param_2[1];
  if (iVar5 < iVar4) {
    *(int *)(param_2 + 1) = iVar4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar5);
    }
  }
  else if ((iVar4 < iVar5) && (iVar4 != iVar5)) {
    *(int *)(param_2 + 1) = iVar4;
    TArray<FPartyReservation,FDefaultAllocator>::ResizeShrink(param_2);
  }
  uVar27 = uRam0000000146af0c0c;
  uVar26 = uRam0000000146af0c08;
  uVar25 = uRam0000000146af0c04;
  uVar30 = _DAT_146af0c00;
  uVar32 = 0;
  lVar31 = (longlong)*(int *)(lVar31 + 0x770) * 0x10 + lVar31;
  if (*(int *)(lVar31 + 0x730) == 0) {
    uVar33 = uVar32;
    if (0 < (int)param_2[1]) {
      do {
        uVar34 = uVar33 + 0x40;
        uVar30 = (int)uVar32 + 1;
        uVar32 = (ulonglong)uVar30;
        lVar31 = *(longlong *)(*(longlong *)(param_1 + 0x718) + 0x290);
        lVar6 = *param_2;
        puVar2 = (undefined8 *)(lVar31 + -0x40 + uVar34);
        uVar23 = puVar2[1];
        *(undefined8 *)(uVar33 + lVar6) = *puVar2;
        ((undefined8 *)(uVar33 + lVar6))[1] = uVar23;
        puVar2 = (undefined8 *)(lVar31 + -0x30 + uVar34);
        uVar23 = puVar2[1];
        puVar3 = (undefined8 *)(uVar33 + 0x10 + lVar6);
        *puVar3 = *puVar2;
        puVar3[1] = uVar23;
        puVar2 = (undefined8 *)(lVar31 + -0x20 + uVar34);
        uVar23 = puVar2[1];
        puVar3 = (undefined8 *)(uVar33 + 0x20 + lVar6);
        *puVar3 = *puVar2;
        puVar3[1] = uVar23;
        puVar2 = (undefined8 *)(lVar31 + -0x10 + uVar34);
        uVar23 = puVar2[1];
        puVar3 = (undefined8 *)(uVar33 + 0x30 + lVar6);
        *puVar3 = *puVar2;
        puVar3[1] = uVar23;
        uVar33 = uVar34;
      } while ((int)uVar30 < (int)param_2[1]);
    }
  }
  else {
    uVar33 = uVar32;
    uVar34 = uVar32;
    if (0 < (int)param_2[1]) {
      do {
        fVar24 = fRam0000000146af0bfc;
        lVar6 = *(longlong *)(lVar31 + 0x728);
        pfVar1 = (float *)(uVar34 + lVar6);
        fVar8 = *pfVar1;
        fVar9 = pfVar1[1];
        fVar10 = pfVar1[2];
        fVar11 = pfVar1[3];
        pfVar1 = (float *)(uVar34 + 0x10 + lVar6);
        fVar12 = *pfVar1;
        fVar13 = pfVar1[1];
        fVar14 = pfVar1[2];
        fVar35 = fVar9 + fVar9;
        fVar36 = fVar10 + fVar10;
        fVar45 = fVar8 * (fVar8 + fVar8);
        fVar44 = fVar11 * (fVar8 + fVar8);
        pfVar1 = (float *)(uVar34 + 0x20 + lVar6);
        fVar15 = *pfVar1;
        fVar16 = pfVar1[1];
        fVar17 = pfVar1[2];
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x718) + 0x290);
        fVar49 = (fVar11 * fVar36 + fVar8 * fVar35) * fVar15;
        fVar50 = (fVar44 + fVar9 * fVar36) * fVar16;
        fVar51 = (fVar11 * fVar35 + fVar8 * fVar36) * fVar17;
        fVar46 = fVar16 * (fVar8 * fVar35 - fVar11 * fVar36);
        fVar47 = fVar17 * (fVar9 * fVar36 - fVar44);
        fVar48 = fVar15 * (fVar8 * fVar36 - fVar11 * fVar35);
        fVar37 = (float)((uint)((_DAT_146af0bf0 - (fVar10 * fVar36 + fVar9 * fVar35)) * fVar15) &
                        uVar30);
        fVar38 = (float)((uint)((fRam0000000146af0bf4 - (fVar10 * fVar36 + fVar45)) * fVar16) &
                        uVar25);
        fVar39 = (float)((uint)((fRam0000000146af0bf8 - (fVar9 * fVar35 + fVar45)) * fVar17) &
                        uVar26);
        fVar40 = (float)((uint)((fRam0000000146af0bfc - (fVar45 + fVar45)) * pfVar1[3]) & uVar27);
        pfVar1 = (float *)(uVar33 + lVar6);
        fVar8 = *pfVar1;
        fVar9 = pfVar1[1];
        fVar10 = pfVar1[2];
        fVar11 = pfVar1[3];
        fVar41 = fVar11 * fRam0000000146af0bfc;
        pfVar1 = (float *)(uVar33 + 0x10 + lVar6);
        fVar15 = *pfVar1;
        fVar16 = pfVar1[1];
        fVar17 = pfVar1[2];
        fVar35 = pfVar1[3];
        fVar42 = fVar35 * fRam0000000146af0bfc;
        pfVar1 = (float *)(uVar33 + 0x20 + lVar6);
        fVar36 = *pfVar1;
        fVar44 = pfVar1[1];
        fVar45 = pfVar1[2];
        fVar18 = pfVar1[3];
        lVar7 = *param_2;
        uVar29 = (int)uVar32 + 1;
        uVar32 = (ulonglong)uVar29;
        fVar43 = fVar18 * fRam0000000146af0bfc;
        pfVar1 = (float *)(uVar33 + 0x30 + lVar6);
        fVar19 = *pfVar1;
        fVar20 = pfVar1[1];
        fVar21 = pfVar1[2];
        fVar22 = pfVar1[3];
        pfVar1 = (float *)(lVar7 + uVar33);
        *pfVar1 = fVar9 * fVar46 + fVar8 * fVar37 + fVar10 * fVar51 + fVar11 * fVar12;
        pfVar1[1] = fVar9 * fVar38 + fVar8 * fVar49 + fVar10 * fVar47 + fVar11 * fVar13;
        pfVar1[2] = fVar9 * fVar50 + fVar8 * fVar48 + fVar10 * fVar39 + fVar11 * fVar14;
        pfVar1[3] = fVar9 * fVar40 + fVar8 * fVar40 + fVar10 * fVar40 + fVar41;
        pfVar1 = (float *)(lVar7 + 0x10 + uVar33);
        *pfVar1 = fVar16 * fVar46 + fVar15 * fVar37 + fVar17 * fVar51 + fVar35 * fVar12;
        pfVar1[1] = fVar16 * fVar38 + fVar15 * fVar49 + fVar17 * fVar47 + fVar35 * fVar13;
        pfVar1[2] = fVar16 * fVar50 + fVar15 * fVar48 + fVar17 * fVar39 + fVar35 * fVar14;
        pfVar1[3] = fVar16 * fVar40 + fVar15 * fVar40 + fVar17 * fVar40 + fVar42;
        pfVar1 = (float *)(lVar7 + 0x20 + uVar33);
        *pfVar1 = fVar44 * fVar46 + fVar36 * fVar37 + fVar45 * fVar51 + fVar18 * fVar12;
        pfVar1[1] = fVar44 * fVar38 + fVar36 * fVar49 + fVar45 * fVar47 + fVar18 * fVar13;
        pfVar1[2] = fVar44 * fVar50 + fVar36 * fVar48 + fVar45 * fVar39 + fVar18 * fVar14;
        pfVar1[3] = fVar44 * fVar40 + fVar36 * fVar40 + fVar45 * fVar40 + fVar43;
        pfVar1 = (float *)(lVar7 + 0x30 + uVar33);
        *pfVar1 = fVar20 * fVar46 + fVar19 * fVar37 + fVar21 * fVar51 + fVar22 * fVar12;
        pfVar1[1] = fVar20 * fVar38 + fVar19 * fVar49 + fVar21 * fVar47 + fVar22 * fVar13;
        pfVar1[2] = fVar20 * fVar50 + fVar19 * fVar48 + fVar21 * fVar39 + fVar22 * fVar14;
        pfVar1[3] = fVar20 * fVar40 + fVar19 * fVar40 + fVar21 * fVar40 + fVar22 * fVar24;
        uVar33 = uVar33 + 0x40;
        uVar34 = uVar34 + 0x30;
      } while ((int)uVar29 < (int)param_2[1]);
      return;
    }
  }
  return;
}



// FUNCTION 1423a5900 FUN_1423a5900 body=207 status=ok
// SIG undefined FUN_1423a5900(void)

void FUN_1423a5900(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 local_28 [32];
  
  if (DAT_146af0b50 != 0) {
    cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x720);
    if (((cVar3 == '\0') && (lVar1 = *(longlong *)(param_1 + 0x718), lVar1 != 0)) &&
       ((lVar5 = *(longlong *)(param_1 + 0x828), lVar5 != 0 ||
        (lVar5 = *(longlong *)(lVar1 + 0x100), lVar5 != 0)))) {
      puVar4 = (undefined8 *)
               FUN_1426b9400(lVar5,local_28,&DAT_1468b5b70,param_2,lVar1 + 0x138,param_1 + 0x920,
                             *(byte *)(param_1 + 0x879) >> 7);
      uVar2 = puVar4[1];
      *(undefined8 *)(param_1 + 0xa10) = *puVar4;
      *(undefined8 *)(param_1 + 0xa18) = uVar2;
      *(undefined8 *)(param_1 + 0xa20) = puVar4[2];
      *(undefined4 *)(param_1 + 0xa28) = *(undefined4 *)(puVar4 + 3);
      *(undefined8 *)(param_1 + 0xa08) = DAT_1468c21b0;
    }
  }
  return;
}



// FUNCTION 1423a5a10 FUN_1423a5a10 body=1701 status=ok
// SIG undefined FUN_1423a5a10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_1423a5a10(longlong param_1,float *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
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
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 local_138;
  float local_130;
  undefined1 local_128 [12];
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float local_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 local_f8;
  float local_f0;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  if ((*(byte *)(param_1 + 0x881) & 4) == 0) {
    local_138 = *(undefined8 *)(param_1 + 0xa98);
    local_130 = *(float *)(param_1 + 0xaa0);
    cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x720);
    if (cVar3 != '\0') {
      lVar5 = FWeakObjectPtr::Get(param_1 + 0x720);
      if ((*(longlong *)(lVar5 + 0x718) != 0) && ((*(byte *)(lVar5 + 0x879) & 0x40) != 0)) {
        lVar6 = FUN_142a07000();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          local_138 = *(undefined8 *)(lVar5 + 0xa98);
          local_130 = *(float *)(lVar5 + 0xaa0);
        }
      }
    }
    local_148 = param_3;
    FUN_1423a6150(param_1,&local_108,&local_138,*(byte *)(param_1 + 0xb1a) >> 1 & 1);
    if ((*(byte *)(param_1 + 0xb1d) & 0x20) != 0) {
      fVar10 = *(float *)(param_1 + 0x224);
      fVar8 = *(float *)(param_1 + 0x228);
      fVar15 = fStack_104 - (float)local_f8;
      local_f8._0_4_ = (float)local_f8 + fStack_104;
      fVar21 = local_108 - fStack_fc;
      fStack_fc = fStack_fc + local_108;
      fVar20 = fVar15;
      if (fVar15 <= (float)local_f8) {
        fVar20 = (float)local_f8;
      }
      fVar16 = fStack_100 - local_f8._4_4_;
      local_f8._4_4_ = local_f8._4_4_ + fStack_100;
      fVar18 = fVar21;
      if (fVar21 <= fStack_fc) {
        fVar18 = fStack_fc;
      }
      if (fStack_fc <= fVar21) {
        fVar21 = fStack_fc;
      }
      if ((float)local_f8 <= fVar15) {
        fVar15 = (float)local_f8;
      }
      fVar12 = *(float *)(param_1 + 0x220) - 1.0;
      fVar7 = fVar16;
      if (fVar16 <= local_f8._4_4_) {
        fVar7 = local_f8._4_4_;
      }
      if (local_f8._4_4_ <= fVar16) {
        fVar16 = local_f8._4_4_;
      }
      fVar13 = fVar8 - 1.0;
      fVar14 = fVar10 - 1.0;
      if (fVar18 <= fVar12) {
        fVar18 = fVar12;
      }
      if (fVar12 <= fVar21) {
        fVar21 = fVar12;
      }
      fVar12 = fVar8 + 1.0;
      if (fVar7 <= fVar13) {
        fVar7 = fVar13;
      }
      if (fVar13 <= fVar16) {
        fVar16 = fVar13;
      }
      if (fVar20 <= fVar14) {
        fVar20 = fVar14;
      }
      fVar13 = fVar10 + 1.0;
      if (fVar14 <= fVar15) {
        fVar15 = fVar14;
      }
      if (fVar7 <= fVar12) {
        fVar7 = fVar12;
      }
      if (fVar12 <= fVar16) {
        fVar16 = fVar12;
      }
      fVar12 = *(float *)(param_1 + 0x220) + 1.0;
      if (fVar20 <= fVar13) {
        fVar20 = fVar13;
      }
      if (fVar13 <= fVar15) {
        fVar15 = fVar13;
      }
      fVar7 = fVar7 - fVar16;
      if (fVar18 <= fVar12) {
        fVar18 = fVar12;
      }
      if (fVar12 <= fVar21) {
        fVar21 = fVar12;
      }
      fVar20 = fVar20 - fVar15;
      fVar18 = fVar18 - fVar21;
      local_130 = fVar7 * 0.5;
      fStack_118 = fVar20 * 0.5;
      fVar16 = local_130 + fVar16;
      fStack_11c = fVar18 * 0.5;
      fVar21 = fStack_11c + fVar21;
      fVar15 = fStack_118 + fVar15;
      fVar20 = SQRT((fVar18 * fVar18 + fVar20 * fVar20 + fVar7 * fVar7) * 0.25);
      fVar18 = *(float *)(param_1 + 0x220) - fVar21;
      local_110 = SQRT((local_108 - fVar21) * (local_108 - fVar21) +
                       (fStack_104 - fVar15) * (fStack_104 - fVar15) +
                       (fStack_100 - fVar16) * (fStack_100 - fVar16)) + local_f0;
      fVar10 = SQRT(fVar18 * fVar18 + (fVar10 - fVar15) * (fVar10 - fVar15) +
                    (fVar8 - fVar16) * (fVar8 - fVar16)) + 1.0;
      if (local_110 <= fVar10) {
        local_110 = fVar10;
      }
      if (fVar20 <= local_110) {
        local_110 = fVar20;
      }
      local_f8 = CONCAT44(local_130,fStack_118);
      fStack_114 = local_130;
      local_108 = fVar21;
      fStack_104 = fVar15;
      fStack_100 = fVar16;
      fStack_fc = fStack_11c;
      local_f0 = local_110;
    }
    FUN_1427d3040(param_1,&local_108,param_3);
    *(byte *)(param_1 + 0x881) = *(byte *)(param_1 + 0x881) | 4;
    *(ulonglong *)(param_1 + 0x894) = CONCAT44(fStack_104,local_108);
    *(ulonglong *)(param_1 + 0x89c) = CONCAT44(fStack_fc,fStack_100);
    *(undefined8 *)(param_1 + 0x8a4) = local_f8;
    *(float *)(param_1 + 0x8ac) = local_f0;
    uVar1 = param_3[1];
    *(undefined8 *)(param_1 + 0x8b0) = *param_3;
    *(undefined8 *)(param_1 + 0x8b8) = uVar1;
    uVar1 = param_3[3];
    *(undefined8 *)(param_1 + 0x8c0) = param_3[2];
    *(undefined8 *)(param_1 + 0x8c8) = uVar1;
    uVar1 = param_3[5];
    *(undefined8 *)(param_1 + 0x8d0) = param_3[4];
    *(undefined8 *)(param_1 + 0x8d8) = uVar1;
    *(ulonglong *)param_2 = CONCAT44(fStack_104,local_108);
    *(ulonglong *)(param_2 + 2) = CONCAT44(fStack_fc,fStack_100);
    *(undefined8 *)(param_2 + 4) = local_f8;
    param_2[6] = local_f0;
  }
  else {
    FUN_14162bfb0(param_1 + 0x8b0,&local_108);
    if ((*(byte *)(param_1 + 0xb1d) & 0x20) == 0) {
      FBoxSphereBounds::TransformBy(param_1 + 0x894,param_2,&local_108);
    }
    else {
      fVar10 = *(float *)(param_1 + 0x220);
      fVar8 = *(float *)(param_1 + 0x224);
      fVar21 = *(float *)(param_1 + 0x228);
      pfVar4 = (float *)FBoxSphereBounds::TransformBy(param_1 + 0x894,local_128,&local_108);
      fVar16 = pfVar4[1] - pfVar4[4];
      fVar15 = pfVar4[2] - pfVar4[5];
      fVar12 = pfVar4[5] + pfVar4[2];
      fVar7 = fVar21 - 1.0;
      fVar18 = *pfVar4 - pfVar4[3];
      fVar14 = pfVar4[3] + *pfVar4;
      fVar13 = pfVar4[4] + pfVar4[1];
      fVar20 = fVar15;
      if (fVar15 <= fVar12) {
        fVar20 = fVar12;
      }
      fVar9 = fVar8 - 1.0;
      fVar11 = fVar10 - 1.0;
      fVar19 = fVar18;
      if (fVar18 <= fVar14) {
        fVar19 = fVar14;
      }
      fVar17 = fVar16;
      if (fVar16 <= fVar13) {
        fVar17 = fVar13;
      }
      if (fVar20 <= fVar7) {
        fVar20 = fVar7;
      }
      if (fVar14 <= fVar18) {
        fVar18 = fVar14;
      }
      if (fVar13 <= fVar16) {
        fVar16 = fVar13;
      }
      if (fVar19 <= fVar11) {
        fVar19 = fVar11;
      }
      if (fVar17 <= fVar9) {
        fVar17 = fVar9;
      }
      if (fVar12 <= fVar15) {
        fVar15 = fVar12;
      }
      if (fVar11 <= fVar18) {
        fVar18 = fVar11;
      }
      if (fVar9 <= fVar16) {
        fVar16 = fVar9;
      }
      fVar13 = fVar21 + 1.0;
      fVar12 = fVar10 + 1.0;
      if (fVar7 <= fVar15) {
        fVar15 = fVar7;
      }
      fVar7 = fVar8 + 1.0;
      if (fVar20 <= fVar13) {
        fVar20 = fVar13;
      }
      if (fVar12 <= fVar18) {
        fVar18 = fVar12;
      }
      if (fVar19 <= fVar12) {
        fVar19 = fVar12;
      }
      if (fVar7 <= fVar16) {
        fVar16 = fVar7;
      }
      if (fVar17 <= fVar7) {
        fVar17 = fVar7;
      }
      if (fVar13 <= fVar15) {
        fVar15 = fVar13;
      }
      *(ulonglong *)(param_2 + 3) = CONCAT44((fVar17 - fVar16) * 0.5,(fVar19 - fVar18) * 0.5);
      param_2[5] = (fVar20 - fVar15) * 0.5;
      *(ulonglong *)param_2 = CONCAT44(fVar16 + param_2[4],fVar18 + param_2[3]);
      param_2[2] = fVar15 + param_2[5];
      fVar15 = SQRT(param_2[3] * param_2[3] + param_2[4] * param_2[4] + param_2[5] * param_2[5]);
      param_2[6] = fVar15;
      fVar8 = SQRT((fVar10 - *param_2) * (fVar10 - *param_2) +
                   (fVar8 - param_2[1]) * (fVar8 - param_2[1]) +
                   (fVar21 - param_2[2]) * (fVar21 - param_2[2])) + 1.0;
      fVar10 = SQRT((*pfVar4 - *param_2) * (*pfVar4 - *param_2) +
                    (pfVar4[1] - param_2[1]) * (pfVar4[1] - param_2[1]) +
                    (pfVar4[2] - param_2[2]) * (pfVar4[2] - param_2[2])) + pfVar4[6];
      if (fVar10 <= fVar8) {
        fVar10 = fVar8;
      }
      if (fVar15 <= fVar10) {
        fVar10 = fVar15;
      }
      param_2[6] = fVar10;
    }
  }
  return param_2;
}



// FUNCTION 1423a60c0 CalcBounds body=38 status=ok
// SIG undefined CalcBounds(void)

undefined8
USkinnedMeshComponent::CalcBounds(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1423a6150(param_1,param_2,&DAT_1468b5d90,0,param_3);
  return param_2;
}



// FUNCTION 1423a60f0 FUN_1423a60f0 body=92 status=ok
// SIG undefined FUN_1423a60f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1423a60f0(longlong param_1,undefined8 param_2)

{
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = *(undefined4 *)(param_1 + 0x710);
  local_2c = _DAT_1468b5d90;
  local_20 = CONCAT44(local_18,local_18);
  local_24 = DAT_1468b5d98;
  local_14 = local_18;
  FBoxSphereBounds::TransformBy(&local_2c);
  return param_2;
}



// FUNCTION 1423a6150 FUN_1423a6150 body=842 status=ok
// SIG undefined FUN_1423a6150(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1423a6150(longlong param_1,undefined8 *param_2,float *param_3,char param_4,longlong param_5)

{
  float fVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  float local_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 local_58 [32];
  
  local_78 = *(float *)(param_5 + 0x20);
  fStack_74 = *(float *)(param_5 + 0x24);
  fStack_70 = *(float *)(param_5 + 0x28);
  uStack_6c = *(undefined4 *)(param_5 + 0x2c);
  lVar11 = FWeakObjectPtr::Get();
  lVar15 = *(longlong *)(param_1 + 0x828);
  if ((lVar15 == 0) &&
     ((*(longlong *)(param_1 + 0x718) == 0 ||
      (lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x718) + 0x100), lVar15 == 0)))) {
    lVar15 = 0;
  }
  if ((lVar11 == 0) ||
     ((lVar16 = *(longlong *)(lVar11 + 0x828), lVar16 == 0 &&
      ((*(longlong *)(lVar11 + 0x718) == 0 ||
       (lVar16 = *(longlong *)(*(longlong *)(lVar11 + 0x718) + 0x100), lVar16 == 0)))))) {
    lVar16 = 0;
  }
  if ((((0.0001 < ABS(local_78 - fStack_74)) || (0.0001 < ABS(local_78 - fStack_70))) ||
      (0.0001 < ABS(fStack_74 - fStack_70))) ||
     ((*(longlong *)(param_1 + 0x718) == 0 ||
      ((*(int *)(((longlong)*(int *)(param_1 + 0x770) + 0x73) * 0x10 + param_1) !=
        *(int *)(*(longlong *)(param_1 + 0x718) + 0x160) && (lVar16 == 0)))))) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  bVar2 = *(byte *)(param_1 + 0x24f);
  lVar12 = FUN_1428742e0();
  if ((*(int *)(lVar12 + 4) < (int)(uint)bVar2) ||
     ((cVar9 = FUN_14239a1f0(), cVar9 == '\0' && ((*(byte *)(param_1 + 0x2f2) & 0x40) == 0)))) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((lVar15 == 0) || (*(int *)(lVar15 + 0x48) == 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if ((lVar16 == 0) || (*(int *)(lVar16 + 0x48) == 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (((bVar5) &&
      (((*(byte *)(param_1 + 0x879) & 0x40) == 0 || ((*(byte *)(param_1 + 0x3c0) & 8) != 0)))) ||
     (lVar12 = *(longlong *)(param_1 + 0x718), lVar12 == 0)) {
    if (lVar11 != 0) {
      lVar12 = *(longlong *)(lVar11 + 0x718);
      if ((lVar12 != 0) && ((*(byte *)(lVar11 + 0x879) & 0x40) != 0)) goto LAB_1423a62e3;
      if ((bVar6) && ((*(byte *)(param_1 + 0x879) & 1) != 0)) {
        uVar14 = *(undefined8 *)(lVar11 + 0x1d8);
        *param_2 = *(undefined8 *)(lVar11 + 0x1d0);
        param_2[1] = uVar14;
        param_2[2] = *(undefined8 *)(lVar11 + 0x1e0);
        uVar10 = *(undefined4 *)(lVar11 + 0x1e8);
        goto LAB_1423a6443;
      }
    }
    if ((((!bVar7) || (!bVar6)) || (param_4 == '\0')) &&
       (((lVar11 == 0 || (!bVar6)) || (lVar15 = lVar16, !bVar8)))) {
      lVar12 = *(longlong *)(param_1 + 0x718);
      if (lVar12 == 0) {
        uVar3 = *(undefined4 *)(param_5 + 0x14);
        uVar4 = *(undefined4 *)(param_5 + 0x18);
        uStack_6c = (undefined4)_DAT_1468b5d90;
        uStack_68 = (undefined4)((ulonglong)_DAT_1468b5d90 >> 0x20);
        uVar14 = CONCAT44(DAT_1468b5d98,uStack_68);
        uVar10 = 0;
        *(undefined4 *)param_2 = *(undefined4 *)(param_5 + 0x10);
        *(undefined4 *)((longlong)param_2 + 4) = uVar3;
        *(undefined4 *)(param_2 + 1) = uVar4;
        *(undefined4 *)((longlong)param_2 + 0xc) = uStack_6c;
        param_2[2] = uVar14;
        goto LAB_1423a6443;
      }
      goto LAB_1423a62e3;
    }
    uVar14 = FUN_1426b9f00(lVar15,local_58,param_1,param_5);
    puVar13 = (undefined8 *)FBoxSphereBounds::FBoxSphereBounds(&local_78,uVar14);
  }
  else {
LAB_1423a62e3:
    USkeletalMesh::GetBounds(lVar12,&local_78);
    local_78 = local_78 + *param_3;
    fStack_74 = fStack_74 + param_3[1];
    fStack_70 = fStack_70 + param_3[2];
    puVar13 = (undefined8 *)FBoxSphereBounds::TransformBy(&local_78,local_58,param_5);
  }
  uVar14 = puVar13[1];
  *param_2 = *puVar13;
  param_2[1] = uVar14;
  param_2[2] = puVar13[2];
  uVar10 = *(undefined4 *)(puVar13 + 3);
LAB_1423a6443:
  *(undefined4 *)(param_2 + 3) = uVar10;
  fVar1 = *(float *)(param_1 + 0x364);
  *(float *)((longlong)param_2 + 0xc) = fVar1 * *(float *)((longlong)param_2 + 0xc);
  *(float *)(param_2 + 2) = fVar1 * *(float *)(param_2 + 2);
  *(float *)((longlong)param_2 + 0x14) = fVar1 * *(float *)((longlong)param_2 + 0x14);
  *(float *)(param_2 + 3) = *(float *)(param_1 + 0x364) * *(float *)(param_2 + 3);
  return param_2;
}



// FUNCTION 1423a64a0 FUN_1423a64a0 body=384 status=ok
// SIG undefined FUN_1423a64a0(void)

float FUN_1423a64a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  longlong *plVar6;
  
  plVar6 = (longlong *)0x0;
  fVar9 = 0.0;
  if (*(int *)(param_1 + 0xbf8) == 0) {
    lVar3 = *(longlong *)(param_1 + 0x828);
    if ((lVar3 == 0) &&
       ((*(longlong *)(param_1 + 0x718) == 0 ||
        (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x718) + 0x100), lVar3 == 0)))) {
      lVar3 = 0;
    }
    plVar7 = (longlong *)(lVar3 + 0x40);
    if (lVar3 == 0) {
      plVar7 = plVar6;
    }
    if ((plVar7 == (longlong *)0x0) || (plVar4 = plVar6, (int)plVar7[1] < 1)) {
      fVar9 = 0.0;
    }
    else {
      do {
        plVar1 = *(longlong **)((longlong)plVar4 + *plVar7);
        if ((plVar1 != (longlong *)0x0) && ((param_2 == 0 || (param_2 == plVar1[0x12])))) {
          fVar8 = (float)(**(code **)(*plVar1 + 0x288))(plVar1,param_1);
          fVar9 = fVar9 + fVar8;
        }
        uVar5 = (int)plVar6 + 1;
        plVar6 = (longlong *)(ulonglong)uVar5;
        plVar4 = plVar4 + 1;
      } while ((int)uVar5 < (int)plVar7[1]);
    }
  }
  else {
    plVar7 = plVar6;
    if (*(int *)(param_1 + 0xbf8) < 1) {
      fVar9 = 0.0;
    }
    else {
      do {
        cVar2 = FWeakObjectPtr::IsValid
                          (*(longlong *)((longlong)plVar7 + *(longlong *)(param_1 + 0xbf0)) + 0x140)
        ;
        if ((cVar2 != '\0') &&
           ((param_2 == 0 ||
            (lVar3 = FWeakObjectPtr::Get(*(longlong *)
                                          ((longlong)plVar7 + *(longlong *)(param_1 + 0xbf0)) +
                                         0x140), param_2 == *(longlong *)(lVar3 + 0x90))))) {
          plVar4 = (longlong *)
                   FWeakObjectPtr::Get(*(longlong *)
                                        ((longlong)plVar7 + *(longlong *)(param_1 + 0xbf0)) + 0x140)
          ;
          fVar8 = (float)(**(code **)(*plVar4 + 0x288))(plVar4,param_1);
          fVar9 = fVar9 + fVar8;
        }
        uVar5 = (int)plVar6 + 1;
        plVar6 = (longlong *)(ulonglong)uVar5;
        plVar7 = plVar7 + 1;
      } while ((int)uVar5 < *(int *)(param_1 + 0xbf8));
    }
  }
  return fVar9;
}



// FUNCTION 1423a6660 FUN_1423a6660 body=31 status=ok
// SIG undefined FUN_1423a6660(void)

void FUN_1423a6660(void)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get();
  if (lVar1 != 0) {
    FUN_1423a9ae0(lVar1);
    return;
  }
  return;
}



// FUNCTION 1423a6680 FUN_1423a6680 body=31 status=ok
// SIG undefined FUN_1423a6680(void)

void FUN_1423a6680(void)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get();
  if (lVar1 != 0) {
    FUN_1423a6b20(lVar1);
    return;
  }
  return;
}



// FUNCTION 1423a66a0 FUN_1423a66a0 body=162 status=ok
// SIG undefined FUN_1423a66a0(void)

void FUN_1423a66a0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (*(longlong **)(param_1 + 0x20) == (longlong *)0x0) {
    plVar2 = (longlong *)(param_1 + 0x10);
  }
  uVar3 = (longlong)*(int *)(param_1 + 0x28) & 0x1fffffffffffffff;
  if (plVar2 + *(int *)(param_1 + 0x28) < plVar2) {
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
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    TArray<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*,TInlineAllocator<2,FDefaultAllocator>_>
    ::ResizeTo((longlong *)(param_1 + 0x10),0);
  }
  return;
}



// FUNCTION 1423a6750 FUN_1423a6750 body=228 status=ok
// SIG undefined FUN_1423a6750(void)

void FUN_1423a6750(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_res8;
  int local_res10 [2];
  
  if ((*(longlong *)(param_1 + 0x118) == 0) ||
     (lVar2 = *(longlong *)(param_1 + 0x118), (*(byte *)(param_1 + 0x881) & 0x20) != 0)) {
    lVar2 = param_1;
  }
  local_res8 = param_1;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(&DAT_146531e10,local_res10,lVar2);
  if (local_res10[0] == -1) {
    lVar1 = 0;
  }
  else {
    lVar1 = DAT_146531e10 + (longlong)local_res10[0] * 0x18;
  }
  lVar1 = *(longlong *)(lVar1 + 8);
  TArray<FName,FDefaultAllocator>::Remove(lVar1 + 0x90,&local_res8);
  if (*(int *)(lVar1 + 0x98) == 0) {
    TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
    ::Remove(&DAT_146531e10,lVar2);
    if (*(longlong *)(lVar1 + 0x90) != 0) {
      FMemory::Free();
    }
    *(undefined4 *)(lVar1 + 0x78) = 0;
    if (*(longlong *)(lVar1 + 0x70) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar1 + 0x30);
    if (*(longlong *)(lVar1 + 0x20) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(lVar1,0xa0);
  }
  return;
}



// FUNCTION 1423a6840 ClientOnPawnUnPossessed_Implementation body=14 status=ok
// SIG undefined ClientOnPawnUnPossessed_Implementation(void)

void ACorePlayerController::ClientOnPawnUnPossessed_Implementation(longlong param_1)

{
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::Empty
            (param_1 + 0xd50,0);
  return;
}



// FUNCTION 1423a6850 FUN_1423a6850 body=144 status=ok
// SIG undefined FUN_1423a6850(void)

void FUN_1423a6850(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x83c);
  plVar2 = *(longlong **)(param_1 + 0x888);
  if (plVar2 != (longlong *)0x0) {
    *(int *)(param_1 + 0x774) = *(int *)(param_1 + 0x774) + 1;
    (**(code **)(*plVar2 + 0x20))(plVar2,uVar1,param_1,param_1 + 0x808,param_1 + 0x818,0);
    *(int *)(param_1 + 0x774) = *(int *)(param_1 + 0x774) + 1;
    (**(code **)(**(longlong **)(param_1 + 0x888) + 0x20))
              (*(longlong **)(param_1 + 0x888),uVar1,param_1,param_1 + 0x808,param_1 + 0x818,0);
  }
  return;
}



// FUNCTION 1423a68e0 FUN_1423a68e0 body=112 status=ok
// SIG undefined FUN_1423a68e0(void)

void FUN_1423a68e0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x7f0);
  if (plVar1 != (longlong *)0x0) {
    if (plVar1[2] != 0) {
      FMemory::Free();
    }
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar1,0x20);
    *(byte *)(param_1 + 0xb1d) = *(byte *)(param_1 + 0xb1d) & 0xf7;
    *(undefined8 *)(param_1 + 0x7f0) = 0;
    return;
  }
  *(byte *)(param_1 + 0xb1d) = *(byte *)(param_1 + 0xb1d) & 0xf7;
  return;
}



// FUNCTION 1423a6950 FUN_1423a6950 body=87 status=ok
// SIG undefined FUN_1423a6950(void)

void FUN_1423a6950(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x7f0);
  if (plVar1 != (longlong *)0x0) {
    if (plVar1[2] != 0) {
      FMemory::Free();
    }
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar1,0x20);
    *(undefined8 *)(param_1 + 0x7f0) = 0;
  }
  return;
}



// FUNCTION 1423a69b0 FUN_1423a69b0 body=106 status=ok
// SIG undefined FUN_1423a69b0(void)

void FUN_1423a69b0(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x860))) &&
     (lVar2 = (longlong)param_2 * 0x38 + *(longlong *)(param_1 + 0x858),
     *(longlong *)(lVar2 + 0x30) != 0)) {
    FUN_141edf360();
    FUN_141ee24f0(0);
    puVar1 = *(undefined8 **)(lVar2 + 0x30);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      *(undefined8 *)(lVar2 + 0x30) = 0;
    }
    FUN_1423424e0(param_1);
  }
  return;
}



// FUNCTION 1423a6a20 FUN_1423a6a20 body=133 status=ok
// SIG undefined FUN_1423a6a20(void)

void FUN_1423a6a20(longlong param_1,char param_2)

{
  *(undefined4 *)(param_1 + 0x6f8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x6fc)) {
    TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::ResizeTo(param_1 + 0x6f0,0);
  }
  *(undefined4 *)(param_1 + 0x710) = 0;
  if ((*(int *)(param_1 + 0x714) < 0) && (*(int *)(param_1 + 0x714) != 0)) {
    TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_1 + 0x708,0);
  }
  *(undefined4 *)(param_1 + 0x728) = 0;
  if ((*(int *)(param_1 + 0x72c) < 0) && (*(int *)(param_1 + 0x72c) != 0)) {
    TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::ResizeTo(param_1 + 0x720,0);
  }
  if (param_2 != '\0') {
    FUN_1423c1a10(param_1);
  }
  return;
}



// FUNCTION 1423a6ab0 FUN_1423a6ab0 body=99 status=ok
// SIG undefined FUN_1423a6ab0(void)

void FUN_1423a6ab0(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((((-1 < param_3) && (param_3 < *(int *)(param_1 + 0x860))) &&
      (lVar1 = (longlong)param_3 * 0x38 + *(longlong *)(param_1 + 0x858), -1 < param_2)) &&
     (param_2 < *(int *)(lVar1 + 0x28))) {
    lVar2 = *(longlong *)(lVar1 + 0x20);
    if (*(longlong *)(lVar1 + 0x20) == 0) {
      lVar2 = lVar1 + 0x10;
    }
    if (*(longlong *)(lVar2 + (longlong)param_2 * 8) != 0) {
      FUN_1423b8560(lVar1,param_2);
      FUN_1423424e0(param_1);
    }
  }
  return;
}



// FUNCTION 1423a6b20 FUN_1423a6b20 body=347 status=ok
// SIG undefined FUN_1423a6b20(void)

void FUN_1423a6b20(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  
  lVar6 = *(longlong *)(param_1 + 0xe08);
  *(undefined8 *)(param_1 + 0xe08) = 0;
  if (lVar6 != 0) {
    LOCK();
    piVar1 = (int *)(lVar6 + 0x48);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if (((*(longlong *)(param_1 + 0xe18) == *(longlong *)(param_1 + 0xa48)) &&
      (*(longlong *)(param_1 + 0xe20) == *(longlong *)(param_1 + 0x718))) &&
     (*(int *)(param_1 + 0xe30) ==
      *(int *)(param_1 + ((longlong)*(int *)(param_1 + 0x770) + 0x73) * 0x10))) {
    puVar12 = (undefined8 *)(param_1 + 0x728 + (longlong)*(int *)(param_1 + 0x76c) * 0x10);
    puVar2 = (undefined8 *)(param_1 + 0xe28);
    if (puVar2 != puVar12) {
      uVar5 = *(undefined4 *)((longlong)puVar12 + 4);
      uVar7 = *(undefined4 *)(puVar12 + 1);
      uVar8 = *(undefined4 *)((longlong)puVar12 + 0xc);
      uVar4 = *puVar2;
      uVar9 = *(undefined8 *)(param_1 + 0xe30);
      *(undefined4 *)puVar2 = *(undefined4 *)puVar12;
      *(undefined4 *)(param_1 + 0xe2c) = uVar5;
      *(undefined4 *)(param_1 + 0xe30) = uVar7;
      *(undefined4 *)(param_1 + 0xe34) = uVar8;
      *puVar12 = uVar4;
      puVar12[1] = uVar9;
    }
    puVar2 = (undefined8 *)(param_1 + 0xa88);
    puVar12 = (undefined8 *)(param_1 + 0xe38);
    if (puVar12 != puVar2) {
      uVar4 = *puVar12;
      uVar9 = *(undefined8 *)(param_1 + 0xe40);
      *(undefined4 *)puVar12 = *(undefined4 *)puVar2;
      *(undefined4 *)(param_1 + 0xe3c) = *(undefined4 *)(param_1 + 0xa8c);
      *(undefined4 *)(param_1 + 0xe40) = *(undefined4 *)(param_1 + 0xa90);
      *(undefined4 *)(param_1 + 0xe44) = *(undefined4 *)(param_1 + 0xa94);
      *puVar2 = uVar4;
      *(undefined8 *)(param_1 + 0xa90) = uVar9;
    }
    puVar2 = (undefined8 *)(param_1 + 0xab0);
    puVar12 = (undefined8 *)(param_1 + 0xe58);
    if (puVar12 != puVar2) {
      uVar4 = *puVar12;
      uVar9 = *(undefined8 *)(param_1 + 0xe60);
      uVar10 = *(undefined8 *)(param_1 + 0xe68);
      uVar11 = *(undefined8 *)(param_1 + 0xe70);
      *(undefined4 *)puVar12 = *(undefined4 *)puVar2;
      *(undefined4 *)(param_1 + 0xe5c) = *(undefined4 *)(param_1 + 0xab4);
      *(undefined4 *)(param_1 + 0xe60) = *(undefined4 *)(param_1 + 0xab8);
      *(undefined4 *)(param_1 + 0xe64) = *(undefined4 *)(param_1 + 0xabc);
      *(undefined8 *)(param_1 + 0xe68) = *(undefined8 *)(param_1 + 0xac0);
      *(undefined8 *)(param_1 + 0xe70) = *(undefined8 *)(param_1 + 0xac8);
      *puVar2 = uVar4;
      *(undefined8 *)(param_1 + 0xab8) = uVar9;
      *(undefined8 *)(param_1 + 0xac0) = uVar10;
      *(undefined8 *)(param_1 + 0xac8) = uVar11;
    }
    puVar2 = (undefined8 *)(param_1 + 0xa98);
    puVar12 = (undefined8 *)(param_1 + 0xe48);
    if (puVar12 != puVar2) {
      uVar4 = *puVar12;
      uVar5 = *(undefined4 *)(param_1 + 0xe50);
      *puVar12 = *puVar2;
      *(undefined4 *)(param_1 + 0xe50) = *(undefined4 *)(param_1 + 0xaa0);
      *puVar2 = uVar4;
      *(undefined4 *)(param_1 + 0xaa0) = uVar5;
    }
    FUN_1423b6200(param_1,param_1 + 0xe18);
  }
  *(undefined8 *)(param_1 + 0xe18) = 0;
  *(undefined8 *)(param_1 + 0xe20) = 0;
  return;
}



// FUNCTION 1423a6c80 FUN_1423a6c80 body=420 status=ok
// SIG undefined FUN_1423a6c80(void)

void FUN_1423a6c80(longlong param_1,char param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  char cVar14;
  
  lVar13 = *(longlong *)(param_1 + 0xe08);
  *(undefined8 *)(param_1 + 0xe08) = 0;
  if (lVar13 != 0) {
    LOCK();
    piVar1 = (int *)(lVar13 + 0x48);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if ((((param_2 != '\0') && (*(longlong *)(param_1 + 0xe18) == *(longlong *)(param_1 + 0xa48))) &&
      (*(longlong *)(param_1 + 0xe20) == *(longlong *)(param_1 + 0x718))) &&
     (*(int *)(param_1 + 0xe30) ==
      *(int *)(param_1 + ((longlong)*(int *)(param_1 + 0x770) + 0x73) * 0x10))) {
    cVar14 = *(char *)(param_1 + 0xe54);
    if (cVar14 == '\0') {
      puVar12 = (undefined8 *)((longlong)*(int *)(param_1 + 0x76c) * 0x10 + 0x728 + param_1);
    }
    else {
      puVar12 = (undefined8 *)(param_1 + 0xae0);
    }
    puVar2 = (undefined8 *)(param_1 + 0xe28);
    if (puVar2 != puVar12) {
      uVar5 = *(undefined4 *)((longlong)puVar12 + 4);
      uVar6 = *(undefined4 *)(puVar12 + 1);
      uVar7 = *(undefined4 *)((longlong)puVar12 + 0xc);
      uVar4 = *puVar2;
      uVar8 = *(undefined8 *)(param_1 + 0xe30);
      *(undefined4 *)puVar2 = *(undefined4 *)puVar12;
      *(undefined4 *)(param_1 + 0xe2c) = uVar5;
      *(undefined4 *)(param_1 + 0xe30) = uVar6;
      *(undefined4 *)(param_1 + 0xe34) = uVar7;
      *puVar12 = uVar4;
      puVar12[1] = uVar8;
      cVar14 = *(char *)(param_1 + 0xe54);
    }
    lVar13 = 0xad0;
    if (cVar14 == '\0') {
      lVar13 = 0xa88;
    }
    puVar2 = (undefined8 *)(lVar13 + param_1);
    puVar12 = (undefined8 *)(param_1 + 0xe38);
    if (puVar12 != puVar2) {
      uVar5 = *(undefined4 *)((longlong)puVar2 + 4);
      uVar6 = *(undefined4 *)(puVar2 + 1);
      uVar7 = *(undefined4 *)((longlong)puVar2 + 0xc);
      uVar4 = *puVar12;
      uVar8 = *(undefined8 *)(param_1 + 0xe40);
      *(undefined4 *)puVar12 = *(undefined4 *)puVar2;
      *(undefined4 *)(param_1 + 0xe3c) = uVar5;
      *(undefined4 *)(param_1 + 0xe40) = uVar6;
      *(undefined4 *)(param_1 + 0xe44) = uVar7;
      *puVar2 = uVar4;
      puVar2[1] = uVar8;
      cVar14 = *(char *)(param_1 + 0xe54);
    }
    lVar13 = 0xaf0;
    if (cVar14 == '\0') {
      lVar13 = 0xab0;
    }
    puVar2 = (undefined8 *)(lVar13 + param_1);
    puVar12 = (undefined8 *)(param_1 + 0xe58);
    if (puVar12 != puVar2) {
      uVar5 = *(undefined4 *)((longlong)puVar2 + 4);
      uVar6 = *(undefined4 *)(puVar2 + 1);
      uVar7 = *(undefined4 *)((longlong)puVar2 + 0xc);
      uVar4 = *puVar12;
      uVar8 = *(undefined8 *)(param_1 + 0xe60);
      uVar9 = *(undefined8 *)(param_1 + 0xe68);
      uVar10 = *(undefined8 *)(param_1 + 0xe70);
      *(undefined4 *)puVar12 = *(undefined4 *)puVar2;
      *(undefined4 *)(param_1 + 0xe5c) = uVar5;
      *(undefined4 *)(param_1 + 0xe60) = uVar6;
      *(undefined4 *)(param_1 + 0xe64) = uVar7;
      uVar11 = puVar2[3];
      *(undefined8 *)(param_1 + 0xe68) = puVar2[2];
      *(undefined8 *)(param_1 + 0xe70) = uVar11;
      *puVar2 = uVar4;
      puVar2[1] = uVar8;
      puVar2[2] = uVar9;
      puVar2[3] = uVar10;
    }
    puVar12 = (undefined8 *)(param_1 + 0xa98);
    puVar2 = (undefined8 *)(param_1 + 0xe48);
    if (puVar2 != puVar12) {
      uVar4 = *puVar2;
      uVar5 = *(undefined4 *)(param_1 + 0xe50);
      *puVar2 = *puVar12;
      *(undefined4 *)(param_1 + 0xe50) = *(undefined4 *)(param_1 + 0xaa0);
      *puVar12 = uVar4;
      *(undefined4 *)(param_1 + 0xaa0) = uVar5;
    }
    FUN_1423b6200(param_1,param_1 + 0xe18);
  }
  *(undefined8 *)(param_1 + 0xe18) = 0;
  *(undefined8 *)(param_1 + 0xe20) = 0;
  return;
}



// FUNCTION 1423a6e30 FUN_1423a6e30 body=260 status=ok
// SIG undefined FUN_1423a6e30(void)

void FUN_1423a6e30(longlong param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar5 = *(longlong *)(param_1 + 0xcf8);
  if (lVar5 == 0) {
    return;
  }
  lVar7 = 0;
  *(undefined8 *)(param_1 + 0xcf8) = 0;
  if (lVar5 != 0) {
    LOCK();
    piVar1 = (int *)(lVar5 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if (*(longlong *)(param_1 + 0xcd0) != 0) {
    cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x720);
    if (cVar4 != '\0') {
      lVar5 = FWeakObjectPtr::Get(param_1 + 0x720);
      if (lVar5 != 0) {
        lVar6 = FUN_142a0cc80();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          lVar7 = lVar5;
        }
      }
      if (*(int *)(param_1 + 0x790) == 0) {
        TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
        ::Reset(param_1 + 0xd00);
        goto LAB_1423a6f11;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0xcd0) + 0x50))
              (*(longlong **)(param_1 + 0xcd0),param_1 + 0xd00,param_1,lVar7);
  }
LAB_1423a6f11:
  if (*(char *)(param_1 + 0xead) == '\0') {
    return;
  }
  FUN_1426c0650(param_1,0);
  return;
}



// FUNCTION 1423a6f40 FUN_1423a6f40 body=1619 status=ok
// SIG undefined FUN_1423a6f40(void)

void FUN_1423a6f40(short *param_1,longlong *param_2,longlong *param_3,int param_4,char param_5)

{
  ushort uVar1;
  void *_Src;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  short *psVar7;
  longlong *plVar8;
  int *piVar9;
  uint uVar10;
  short *psVar12;
  short sVar13;
  longlong lVar14;
  uint uVar15;
  short *psVar16;
  longlong lVar17;
  int iVar18;
  short *psVar19;
  short *local_res8;
  longlong *local_res10;
  longlong *local_res18;
  short *local_78;
  short *local_70;
  undefined8 local_68;
  short *local_60;
  undefined8 local_58;
  longlong *local_50;
  int local_48;
  short *psVar11;
  
  psVar11 = (short *)0x0;
  iVar4 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  if (0x7fffffff < *(uint *)((longlong)param_2 + 0xc)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  *(undefined4 *)(param_3 + 1) = 0;
  if ((*(int *)((longlong)param_3 + 0xc) < 0) && (*(int *)((longlong)param_3 + 0xc) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_3,0);
  }
  if (*(longlong *)(param_1 + 0x38c) != 0) {
    if (*(longlong *)(param_1 + 0x444) == 0) {
      plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x38c) + 0x40);
    }
    else {
      plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x444) + 0x40);
    }
    if ((int)plVar8[1] != 0) {
      iVar3 = (int)plVar8[1] + -1;
      if ((-1 < param_4) && (iVar4 = iVar3, param_4 < iVar3)) {
        iVar4 = param_4;
      }
      FString::operator=(param_2,*(longlong *)(*plVar8 + (longlong)iVar4 * 8) + 0x418);
      MergeInBoneIndexArrays(param_2,*(longlong *)(param_1 + 0x38c) + 0x218);
      lVar14 = *(longlong *)(param_1 + 0x414);
      if ((lVar14 == 0) &&
         ((*(longlong *)(param_1 + 0x38c) == 0 ||
          (lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x38c) + 0x100), lVar14 == 0)))) {
        lVar14 = 0;
      }
      if ((param_5 == '\0') && (lVar14 != 0)) {
        iVar4 = 0;
        local_70 = (short *)0x0;
        local_68 = 0;
        psVar7 = psVar11;
        psVar12 = psVar11;
        psVar16 = psVar11;
        if (0 < *(int *)(lVar14 + 0x48)) {
          do {
            iVar4 = FReferenceSkeleton::FindBoneIndex
                              (*(longlong *)(param_1 + 0x38c) + 0x138,
                               *(longlong *)((longlong)psVar7 + *(longlong *)(lVar14 + 0x40)) + 0x90
                              );
            if (iVar4 != -1) {
              iVar3 = (int)psVar11;
              uVar10 = iVar3 + 1;
              local_68 = CONCAT44(local_68._4_4_,uVar10);
              if (local_68._4_4_ < (int)uVar10) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,psVar11);
                psVar16 = local_70;
                uVar10 = (uint)local_68;
              }
              psVar11 = (short *)(ulonglong)uVar10;
              psVar16[iVar3] = (short)iVar4;
            }
            iVar4 = (int)psVar11;
            uVar10 = (int)psVar12 + 1;
            psVar12 = (short *)(ulonglong)uVar10;
            psVar7 = psVar7 + 4;
            param_2 = local_res10;
            param_1 = local_res8;
          } while ((int)uVar10 < *(int *)(lVar14 + 0x48));
        }
        AlgoImpl::
        IntroSortInternal<unsigned_short,FIdentityFunctor,TDereferenceWrapper<unsigned_short,TLess<unsigned_short>_>_>
                  (psVar16,(longlong)iVar4,(ulonglong)local_res8 & 0xff,&local_res8);
        MergeInBoneIndexArrays(param_2,&local_70);
        if (psVar16 != (short *)0x0) {
          FMemory::Free(psVar16);
        }
      }
      cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x390);
      if ((cVar2 == '\0') && (iVar4 = (int)param_2[1], iVar4 <= *(int *)(param_1 + 0x438))) {
        iVar18 = 1;
        iVar3 = 1;
        if (1 < iVar4) {
          lVar14 = 2;
          lVar17 = 2;
          do {
            uVar1 = *(ushort *)(*param_2 + lVar17);
            if ((*(char *)((ulonglong)uVar1 + *(longlong *)(param_1 + 0x434)) - 1U & 0xfd) == 0) {
              iVar18 = iVar18 + 1;
              *(ushort *)(*param_2 + lVar14) = uVar1;
              lVar14 = lVar14 + 2;
            }
            iVar4 = (int)param_2[1];
            iVar3 = iVar3 + 1;
            lVar17 = lVar17 + 2;
          } while (iVar3 < iVar4);
        }
        if (0 < iVar4 - iVar18) {
          *(int *)(param_2 + 1) = iVar18;
          TArray<wchar_t,FDefaultAllocator>::ResizeShrink(param_2);
        }
      }
      psVar11 = (short *)0x0;
      iVar4 = 0;
      if ((0 < *(int *)(*(longlong *)(param_1 + 0x38c) + 0xb8)) &&
         (*(int *)(*(longlong *)(param_1 + 0x38c) + 0xb8) == *(int *)(param_1 + 0x548))) {
        uVar10 = *(uint *)(param_1 + 0x5ec);
        local_60 = (short *)0x0;
        local_58 = (ulonglong)uVar10;
        if (0 < (int)uVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
          uVar10 = (uint)local_58;
        }
        psVar12 = local_60;
        psVar7 = psVar11;
        psVar16 = psVar11;
        if (0 < (int)param_2[1]) {
          do {
            psVar7 = psVar7 + 1;
            uVar15 = (int)psVar16 + 1;
            *(undefined2 *)((longlong)(local_60 + -1) + (longlong)psVar7) =
                 *(undefined2 *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x38c) + 0xb0) +
                  (ulonglong)*(ushort *)(*param_2 + -2 + (longlong)psVar7) * 8);
            psVar16 = (short *)(ulonglong)uVar15;
          } while ((int)uVar15 < (int)param_2[1]);
        }
        AlgoImpl::
        IntroSortInternal<unsigned_short,FIdentityFunctor,TDereferenceWrapper<unsigned_short,TLess<unsigned_short>_>_>
                  (local_60,(longlong)(int)uVar10,(ulonglong)local_res8 & 0xff,&local_res8);
        MergeInBoneIndexArrays(param_2,&local_60);
        if (psVar12 != (short *)0x0) {
          FMemory::Free(psVar12);
        }
      }
      local_60 = (short *)0x0;
      local_70 = (short *)0x0;
      local_58 = 0;
      iVar3 = 0;
      local_68 = 0;
      FUN_142777cb0(*(undefined8 *)(param_1 + 0x38c),&local_50);
      local_78 = (short *)0x0;
      psVar7 = (short *)((ulonglong)((longlong)(local_50 + local_48) + (7 - (longlong)local_50)) >>
                        3);
      if (local_50 + local_48 < local_50) {
        psVar7 = psVar11;
      }
      psVar12 = psVar11;
      plVar8 = local_50;
      psVar16 = psVar11;
      psVar19 = psVar11;
      local_res8 = psVar7;
      if (psVar7 != (short *)0x0) {
        do {
          lVar14 = *(longlong *)(*plVar8 + 0x30);
          if (lVar14 != 0) {
            lVar17 = *(longlong *)(param_1 + 0x38c);
            if (*(int *)(lVar17 + 0x1d0) != *(int *)(lVar17 + 0x1fc)) {
              lVar5 = *(longlong *)(lVar17 + 0x208);
              if (*(longlong *)(lVar17 + 0x208) == 0) {
                lVar5 = lVar17 + 0x200;
              }
              iVar4 = *(int *)(lVar5 + ((longlong)((int)((ulonglong)lVar14 >> 0x20) + (int)lVar14) &
                                       (longlong)*(int *)(lVar17 + 0x210) - 1U) * 4);
              if (iVar4 != -1) {
                do {
                  piVar9 = (int *)(*(longlong *)(lVar17 + 0x1c8) + (longlong)iVar4 * 0x18);
                  if (*(longlong *)(*(longlong *)(lVar17 + 0x1c8) + (longlong)iVar4 * 0x18) ==
                      lVar14) {
                    if (iVar4 != -1) goto LAB_1423a7363;
                    break;
                  }
                  iVar4 = piVar9[4];
                } while (iVar4 != -1);
              }
            }
            piVar9 = (int *)0x0;
LAB_1423a7363:
            piVar6 = piVar9 + 2;
            if (piVar9 == (int *)0x0) {
              piVar6 = (int *)0x0;
            }
            psVar7 = local_res8;
            if ((piVar6 != (int *)0x0) && (*piVar6 != -1)) {
              sVar13 = (short)*piVar6;
              if (*(char *)(*plVar8 + 0x5c) == '\0') {
                iVar4 = (int)psVar16;
                for (psVar12 = psVar11; psVar12 != psVar11 + iVar4; psVar12 = psVar12 + 1) {
                  if (*psVar12 == sVar13) {
                    if ((int)((longlong)psVar12 - (longlong)psVar11 >> 1) != -1) goto LAB_1423a743f;
                    break;
                  }
                }
                uVar10 = iVar4 + 1;
                local_58 = CONCAT44(local_58._4_4_,uVar10);
                if (local_58._4_4_ < (int)uVar10) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,psVar16);
                  psVar11 = local_60;
                  uVar10 = (uint)local_58;
                }
                psVar16 = (short *)(ulonglong)uVar10;
                psVar11[iVar4] = sVar13;
                psVar7 = local_res8;
              }
              else {
                iVar4 = (int)psVar19;
                for (psVar12 = local_70; psVar12 != local_70 + iVar4; psVar12 = psVar12 + 1) {
                  if (*psVar12 == sVar13) {
                    if ((int)((longlong)psVar12 - (longlong)local_70 >> 1) != -1)
                    goto LAB_1423a743f;
                    break;
                  }
                }
                uVar10 = iVar4 + 1;
                local_68 = CONCAT44(local_68._4_4_,uVar10);
                if (local_68._4_4_ < (int)uVar10) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,psVar19);
                  uVar10 = (uint)local_68;
                }
                psVar19 = (short *)(ulonglong)uVar10;
                local_70[iVar4] = sVar13;
                psVar7 = local_res8;
              }
            }
          }
LAB_1423a743f:
          iVar4 = (int)psVar16;
          iVar3 = (int)psVar19;
          local_78 = (short *)((longlong)local_78 + 1);
          psVar12 = local_70;
          param_2 = local_res10;
          plVar8 = plVar8 + 1;
        } while (local_78 != psVar7);
      }
      if (local_50 != (longlong *)0x0) {
        FMemory::Free(local_50);
      }
      AlgoImpl::
      IntroSortInternal<unsigned_short,FIdentityFunctor,TDereferenceWrapper<unsigned_short,TLess<unsigned_short>_>_>
                (psVar12,(longlong)iVar3,(ulonglong)local_res8 & 0xff,&local_res8);
      MergeInBoneIndexArrays(param_2,&local_70);
      if (psVar12 != (short *)0x0) {
        FMemory::Free(psVar12);
      }
      if ((*(longlong *)(param_1 + 800) != 0) &&
         (*(int *)(*(longlong *)(param_1 + 800) + 0x408) != 0)) {
        MergeInBoneIndexArrays(param_2);
      }
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer
                (param_2,*(longlong *)(param_1 + 0x38c) + 0x138);
      plVar8 = local_res18;
      lVar14 = param_2[1];
      *(undefined4 *)(local_res18 + 1) = 0;
      if (*(int *)((longlong)local_res18 + 0xc) < (int)lVar14 + iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(local_res18);
      }
      if (plVar8 != param_2) {
        iVar3 = (int)param_2[1];
        _Src = (void *)*param_2;
        *(int *)(plVar8 + 1) = iVar3;
        if ((iVar3 == 0) && (*(int *)((longlong)plVar8 + 0xc) == 0)) {
          *(undefined4 *)((longlong)plVar8 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar8,iVar3);
          _guard_xfg_dispatch_icall_nop((void *)*plVar8,_Src,(longlong)iVar3 * 2);
        }
      }
      AlgoImpl::
      IntroSortInternal<unsigned_short,FIdentityFunctor,TDereferenceWrapper<unsigned_short,TLess<unsigned_short>_>_>
                (psVar11,(longlong)iVar4,(ulonglong)local_res8 & 0xff,&local_res8);
      MergeInBoneIndexArrays(plVar8,&local_60);
      UBlueprintGameplayTagLibrary::BreakGameplayTagContainer
                (plVar8,*(longlong *)(param_1 + 0x38c) + 0x138);
      if (psVar11 != (short *)0x0) {
        FMemory::Free(psVar11);
      }
    }
  }
  return;
}



// FUNCTION 1423a75a0 FUN_1423a75a0 body=21 status=ok
// SIG undefined FUN_1423a75a0(void)

void FUN_1423a75a0(longlong param_1)

{
  *(float *)(param_1 + 0xc7c) = *(float *)(param_1 + 0xc70) * *(float *)(param_1 + 0xc70);
  return;
}



// FUNCTION 1423a75c0 FUN_1423a75c0 body=44 status=ok
// SIG undefined FUN_1423a75c0(void)

void FUN_1423a75c0(longlong param_1)

{
  float fVar1;
  
  fVar1 = _guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 0xc74) * 0.017453292);
  *(float *)(param_1 + 0xc78) = fVar1;
  return;
}



// FUNCTION 1423a75f0 FUN_1423a75f0 body=176 status=ok
// SIG undefined FUN_1423a75f0(void)

void FUN_1423a75f0(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((*(byte *)(param_1 + 0xb1e) & 1) != 0) {
    *(byte *)(param_1 + 0xb1e) = *(byte *)(param_1 + 0xb1e) & 0xfe;
    puVar1 = *(undefined8 **)(param_1 + 0xa50);
    uVar3 = 0;
    uVar2 = (longlong)*(int *)(param_1 + 0xa58) & 0x1fffffffffffffff;
    if (puVar1 + *(int *)(param_1 + 0xa58) < puVar1) {
      uVar2 = uVar3;
    }
    if (uVar2 != 0) {
      do {
        FUN_14225c960(*puVar1);
        uVar3 = uVar3 + 1;
        puVar1 = puVar1 + 1;
      } while (uVar3 != uVar2);
    }
    if (*(longlong *)(param_1 + 0xa48) != 0) {
      FUN_14225c960();
    }
    if (*(longlong *)(param_1 + 0xa60) != 0) {
      FUN_14225c960();
      return;
    }
  }
  return;
}



// FUNCTION 1423a76a0 FUN_1423a76a0 body=108 status=ok
// SIG undefined FUN_1423a76a0(void)

undefined8 FUN_1423a76a0(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  
  cVar2 = FUN_1423bdc20();
  if ((cVar2 == '\0') || (pcVar1 = *(char **)(param_1 + 0x8f0), *pcVar1 != '\x01')) {
    fVar4 = 1.0;
  }
  else {
    fVar3 = *(float *)(pcVar1 + 0x14) / (*(float *)(pcVar1 + 0x14) + *(float *)(pcVar1 + 0xc));
    fVar4 = 0.0;
    if ((0.0 <= fVar3) && (fVar4 = fVar3, 1.0 <= fVar3)) {
      fVar4 = 1.0;
    }
  }
  FUN_1423a7710(param_1,param_2,fVar4);
  return param_2;
}



// FUNCTION 1423a7710 FUN_1423a7710 body=454 status=ok
// SIG undefined FUN_1423a7710(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_1423a7710(longlong param_1,char *param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  *param_2 = '\0';
  uVar5 = 0;
  param_2[4] = '\0';
  uVar7 = uRam0000000146af0bfc;
  param_2[5] = '\0';
  param_2[6] = '\0';
  param_2[7] = '\0';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  param_2[0x18] = '\0';
  param_2[0x19] = '\0';
  param_2[0x1a] = '\0';
  param_2[0x1b] = '\0';
  *(uint *)(param_2 + 0x1c) = uVar7;
  param_2[0x20] = '\0';
  param_2[0x21] = '\0';
  param_2[0x22] = '\0';
  param_2[0x23] = '\0';
  param_2[0x24] = '\0';
  param_2[0x25] = '\0';
  param_2[0x26] = '\0';
  param_2[0x27] = '\0';
  param_2[0x28] = '\0';
  param_2[0x29] = '\0';
  param_2[0x2a] = '\0';
  param_2[0x2b] = '\0';
  param_2[0x2c] = '\0';
  param_2[0x2d] = '\0';
  param_2[0x2e] = '\0';
  param_2[0x2f] = '\0';
  uVar7 = uRam0000000146af0bf4 & uRam0000000146af0c04;
  uVar8 = uRam0000000146af0bf8 & uRam0000000146af0c08;
  uVar9 = uRam0000000146af0bfc & uRam0000000146af0c0c;
  *(uint *)(param_2 + 0x30) = _DAT_146af0bf0 & _DAT_146af0c00;
  *(uint *)(param_2 + 0x34) = uVar7;
  *(uint *)(param_2 + 0x38) = uVar8;
  *(uint *)(param_2 + 0x3c) = uVar9;
  if (*(longlong *)(param_1 + 0xa48) != 0) {
    pcVar3 = (char *)FUN_14225bb50(*(longlong *)(param_1 + 0xa48),local_88);
    if (*pcVar3 != '\0') {
      FUN_142245a70(param_2,pcVar3 + 0x10);
    }
    puVar4 = *(undefined8 **)(param_1 + 0xa50);
    uVar6 = (longlong)*(int *)(param_1 + 0xa58) & 0x1fffffffffffffff;
    if (puVar4 + *(int *)(param_1 + 0xa58) < puVar4) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      do {
        pcVar3 = (char *)FUN_14225bb50(*puVar4,local_88);
        if (*pcVar3 != '\0') {
          FUN_142245a70(param_2,pcVar3 + 0x10);
        }
        puVar4 = puVar4 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar6);
    }
  }
  if ((*(longlong *)(param_1 + 0xa60) != 0) &&
     (pcVar3 = (char *)FUN_14225bb50(*(longlong *)(param_1 + 0xa60),local_88), *pcVar3 != '\0')) {
    FUN_142245a70(param_2,pcVar3 + 0x10);
  }
  if (((*(byte *)(param_1 + 0xb1c) & 8) != 0) && (*param_2 != '\0')) {
    *param_2 = '\x01';
    uVar2 = uRam00000001468b5b78;
    *(undefined8 *)(param_2 + 0x10) = _DAT_1468b5b70;
    *(undefined8 *)(param_2 + 0x18) = uVar2;
    uVar2 = uRam00000001468b5b88;
    *(undefined8 *)(param_2 + 0x20) = _DAT_1468b5b80;
    *(undefined8 *)(param_2 + 0x28) = uVar2;
    uVar2 = uRam00000001468b5b98;
    *(undefined8 *)(param_2 + 0x30) = _DAT_1468b5b90;
    *(undefined8 *)(param_2 + 0x38) = uVar2;
    auVar1._4_4_ = DAT_146531a94;
    auVar1._0_4_ = DAT_146531a90;
    auVar1._8_4_ = DAT_146531a98;
    auVar1._12_4_ = 0;
    *(undefined1 (*) [16])(param_2 + 0x30) = auVar1;
    param_2[4] = '\0';
    param_2[5] = '\0';
    param_2[6] = -0x80;
    param_2[7] = '?';
  }
  return param_2;
}



// FUNCTION 1423a78e0 FUN_1423a78e0 body=2949 status=ok
// SIG undefined FUN_1423a78e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1423a78e0(longlong param_1,float *param_2,float *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  float *pfVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar14;
  undefined1 auVar13 [16];
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
  undefined1 auStack_2f8 [32];
  undefined4 local_2d8;
  undefined1 local_2c8 [8];
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
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
  undefined8 local_228;
  undefined8 uStack_220;
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
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  if ((*(byte *)(param_1 + 0x24c) & 1) == 0) {
    FUN_140942fb0(param_1,0,0);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
  if (lVar1 == 0) {
    puVar8 = (undefined8 *)&DAT_1468b5b70;
  }
  else {
    puVar8 = (undefined8 *)(lVar1 + 0x210);
  }
  local_d8 = *puVar8;
  uStack_d0 = puVar8[1];
  local_c8 = puVar8[2];
  uStack_c0 = puVar8[3];
  pfVar9 = (float *)(param_1 + 0x210);
  local_b8 = puVar8[4];
  uStack_b0 = puVar8[5];
  uVar6 = FUN_14162bcf0(&local_d8,&local_108,pfVar9);
  fVar27 = fRam0000000146af0cf8;
  fVar19 = fRam0000000146af0cf4;
  fVar17 = _DAT_146af0cf0;
  fVar37 = fRam0000000146af0bf8;
  fVar35 = fRam0000000146af0bf4;
  fVar34 = _DAT_146af0bf0;
  local_238 = 0.0;
  fStack_234 = 0.0;
  fStack_230 = 0.0;
  fStack_22c = fRam0000000146af0bfc;
  local_218 = (float)((uint)_DAT_146af0bf0 & _DAT_146af0c00);
  fStack_214 = (float)((uint)fRam0000000146af0bf4 & uRam0000000146af0c04);
  fStack_210 = (float)((uint)fRam0000000146af0bf8 & uRam0000000146af0c08);
  fStack_20c = (float)((uint)fRam0000000146af0bfc & uRam0000000146af0c0c);
  local_228 = 0;
  uStack_220 = 0;
  _local_2c8 = *(undefined1 (*) [16])(param_3 + 8);
  fVar15 = local_2c8._0_4_;
  fVar16 = local_2c8._12_4_;
  auVar10 = *(undefined1 (*) [16])(param_1 + 0x230);
  fVar36 = auVar10._0_4_;
  fVar38 = auVar10._4_4_;
  fVar33 = auVar10._8_4_;
  fVar18 = auVar10._12_4_;
  fVar31 = local_2c8._4_4_;
  fVar32 = local_2c8._8_4_;
  auVar10 = minps(_local_2c8,auVar10);
  auVar11._4_4_ = -(uint)(auVar10._4_4_ < fRam0000000146af0cf4);
  auVar11._0_4_ = -(uint)(auVar10._0_4_ < _DAT_146af0cf0);
  auVar11._8_4_ = -(uint)(auVar10._8_4_ < fRam0000000146af0cf8);
  auVar11._12_4_ = -(uint)(auVar10._12_4_ < fRam0000000146af0cfc);
  iVar7 = movmskps(uVar6,auVar11);
  if (iVar7 == 0) {
    fVar34 = *pfVar9;
    fVar35 = *(float *)(param_1 + 0x214);
    fVar37 = *(float *)(param_1 + 0x218);
    fVar17 = *(float *)(param_1 + 0x21c);
    fVar19 = *param_3;
    fVar27 = param_3[1];
    fVar28 = param_3[2];
    fVar29 = param_3[3];
    fVar30 = fVar36 * param_3[4];
    fVar23 = fVar38 * param_3[5];
    fVar20 = fVar33 * param_3[6];
    fVar21 = fVar18 * param_3[7];
    local_238 = fVar29 * fVar34 * _DAT_146af0cb0 + fVar17 * fVar19 +
                fVar35 * fVar28 * _DAT_146af0ca0 + fVar37 * fVar27 * _DAT_146af0c90;
    fStack_234 = fVar28 * fVar34 * fRam0000000146af0cb4 + fVar17 * fVar27 +
                 fVar35 * fVar29 * fRam0000000146af0ca4 + fVar37 * fVar19 * fRam0000000146af0c94;
    fStack_230 = fVar27 * fVar34 * fRam0000000146af0cb8 + fVar17 * fVar28 +
                 fVar35 * fVar19 * fRam0000000146af0ca8 + fVar37 * fVar29 * fRam0000000146af0c98;
    fStack_22c = fVar19 * fVar34 * fRam0000000146af0cbc + fVar17 * fVar29 +
                 fVar35 * fVar27 * fRam0000000146af0cac + fVar37 * fVar28 * fRam0000000146af0c9c;
    fVar19 = fVar20 * fVar35 - fVar23 * fVar37;
    fVar27 = fVar30 * fVar37 - fVar20 * fVar34;
    fVar28 = fVar23 * fVar34 - fVar30 * fVar35;
    fVar29 = fVar21 * fVar17 - fVar21 * fVar17;
    fVar19 = fVar19 + fVar19;
    fVar27 = fVar27 + fVar27;
    fVar28 = fVar28 + fVar28;
    fVar29 = fVar29 + fVar29;
    local_158 = (fVar28 * fVar35 - fVar27 * fVar37) + fVar19 * fVar17 + fVar30 +
                *(float *)(param_1 + 0x220);
    fStack_154 = (fVar19 * fVar37 - fVar28 * fVar34) + fVar27 * fVar17 + fVar23 +
                 *(float *)(param_1 + 0x224);
    fStack_150 = (fVar27 * fVar34 - fVar19 * fVar35) + fVar28 * fVar17 + fVar20 +
                 *(float *)(param_1 + 0x228);
    fVar34 = (fVar29 * fVar17 - fVar29 * fVar17) + fVar29 * fVar17 + fVar21 +
             *(float *)(param_1 + 0x22c);
    uVar6 = 0;
  }
  else {
    fVar28 = *pfVar9;
    fVar29 = *(float *)(param_1 + 0x214);
    fVar30 = *(float *)(param_1 + 0x218);
    fVar23 = *(float *)(param_1 + 0x21c);
    fVar20 = fVar29 + fVar29;
    fVar24 = fVar30 + fVar30;
    fVar25 = (fVar28 + fVar28) * fVar28;
    fVar21 = (fVar28 + fVar28) * fVar23;
    fStack_204 = (fVar24 * fVar23 + fVar20 * fVar28) * fVar36;
    fStack_1f0 = (fVar21 + fVar24 * fVar29) * fVar38;
    local_1e8 = (fVar20 * fVar23 + fVar24 * fVar28) * fVar33;
    local_1f8 = fVar38 * (fVar20 * fVar28 - fVar24 * fVar23);
    fStack_1e4 = fVar33 * (fVar24 * fVar29 - fVar21);
    fStack_200 = fVar36 * (fVar24 * fVar28 - fVar20 * fVar23);
    local_208 = (float)((uint)((_DAT_146af0bf0 - (fVar24 * fVar30 + fVar20 * fVar29)) * fVar36) &
                       _DAT_146af0c00);
    fStack_1f4 = (float)((uint)((fRam0000000146af0bf4 - (fVar24 * fVar30 + fVar25)) * fVar38) &
                        uRam0000000146af0c04);
    fStack_1e0 = (float)((uint)((fRam0000000146af0bf8 - (fVar20 * fVar29 + fVar25)) * fVar33) &
                        uRam0000000146af0c08);
    fStack_1fc = (float)((uint)((fRam0000000146af0bfc - (fVar25 + fVar25)) * fVar18) &
                        uRam0000000146af0c0c);
    local_1d8 = *(float *)(param_1 + 0x220);
    fStack_1d4 = *(float *)(param_1 + 0x224);
    fStack_1d0 = *(float *)(param_1 + 0x228);
    fStack_1cc = fRam0000000146af0bfc;
    fVar28 = *param_3;
    fVar29 = param_3[1];
    fVar30 = param_3[2];
    fVar23 = param_3[3];
    fVar25 = fVar29 + fVar29;
    fVar14 = fVar30 + fVar30;
    fVar26 = (fVar28 + fVar28) * fVar28;
    fVar22 = fVar23 * (fVar28 + fVar28);
    fVar20 = param_3[8];
    fVar21 = param_3[9];
    fVar24 = param_3[10];
    fStack_1c4 = (fVar23 * fVar14 + fVar28 * fVar25) * fVar20;
    fStack_1b0 = (fVar22 + fVar29 * fVar14) * fVar21;
    local_1a8 = (fVar23 * fVar25 + fVar28 * fVar14) * fVar24;
    local_1b8 = fVar21 * (fVar28 * fVar25 - fVar23 * fVar14);
    fStack_1a4 = fVar24 * (fVar29 * fVar14 - fVar22);
    fStack_1c0 = fVar20 * (fVar28 * fVar14 - fVar23 * fVar25);
    local_1c8 = (float)((uint)((_DAT_146af0bf0 - (fVar14 * fVar30 + fVar25 * fVar29)) * fVar20) &
                       _DAT_146af0c00);
    fStack_1b4 = (float)((uint)((fRam0000000146af0bf4 - (fVar14 * fVar30 + fVar26)) * fVar21) &
                        uRam0000000146af0c04);
    fStack_1a0 = (float)((uint)((fRam0000000146af0bf8 - (fVar25 * fVar29 + fVar26)) * fVar24) &
                        uRam0000000146af0c08);
    fStack_1bc = (float)((uint)((fRam0000000146af0bfc - (fVar26 + fVar26)) * param_3[0xb]) &
                        uRam0000000146af0c0c);
    local_198 = param_3[4];
    fStack_194 = param_3[5];
    fStack_190 = param_3[6];
    fStack_18c = fRam0000000146af0bfc;
    local_2b8 = fStack_1c4 * local_1f8 + local_1c8 * local_208 + fStack_1c0 * local_1e8 +
                fStack_1bc * local_1d8;
    fStack_2b4 = fStack_1c4 * fStack_1f4 + local_1c8 * fStack_204 + fStack_1c0 * fStack_1e4 +
                 fStack_1bc * fStack_1d4;
    fStack_2b0 = fStack_1c4 * fStack_1f0 + local_1c8 * fStack_200 + fStack_1c0 * fStack_1e0 +
                 fStack_1bc * fStack_1d0;
    fStack_2ac = fStack_1c4 * fStack_1fc + local_1c8 * fStack_1fc + fStack_1c0 * fStack_1fc +
                 fStack_1bc * fRam0000000146af0bfc;
    local_2a8 = fStack_1b4 * local_1f8 + local_1b8 * local_208 + fStack_1b0 * local_1e8 +
                fStack_1bc * local_1d8;
    fStack_2a4 = fStack_1b4 * fStack_1f4 + local_1b8 * fStack_204 + fStack_1b0 * fStack_1e4 +
                 fStack_1bc * fStack_1d4;
    fStack_2a0 = fStack_1b4 * fStack_1f0 + local_1b8 * fStack_200 + fStack_1b0 * fStack_1e0 +
                 fStack_1bc * fStack_1d0;
    fStack_29c = fStack_1b4 * fStack_1fc + local_1b8 * fStack_1fc + fStack_1b0 * fStack_1fc +
                 fStack_1bc * fRam0000000146af0bfc;
    local_298 = fStack_1a4 * local_1f8 + local_1a8 * local_208 + fStack_1a0 * local_1e8 +
                fStack_1bc * local_1d8;
    fStack_294 = fStack_1a4 * fStack_1f4 + local_1a8 * fStack_204 + fStack_1a0 * fStack_1e4 +
                 fStack_1bc * fStack_1d4;
    fStack_290 = fStack_1a4 * fStack_1f0 + local_1a8 * fStack_200 + fStack_1a0 * fStack_1e0 +
                 fStack_1bc * fStack_1d0;
    fStack_28c = fStack_1a4 * fStack_1fc + local_1a8 * fStack_1fc + fStack_1a0 * fStack_1fc +
                 fStack_1bc * fRam0000000146af0bfc;
    local_288 = fStack_194 * local_1f8 + local_198 * local_208 + fStack_190 * local_1e8 +
                fRam0000000146af0bfc * local_1d8;
    fStack_284 = fStack_194 * fStack_1f4 + local_198 * fStack_204 + fStack_190 * fStack_1e4 +
                 fRam0000000146af0bfc * fStack_1d4;
    fStack_280 = fStack_194 * fStack_1f0 + local_198 * fStack_200 + fStack_190 * fStack_1e0 +
                 fRam0000000146af0bfc * fStack_1d0;
    fStack_27c = fStack_194 * fStack_1fc + local_198 * fStack_1fc + fStack_190 * fStack_1fc +
                 fRam0000000146af0bfc * fRam0000000146af0bfc;
    fStack_1ec = fStack_1fc;
    fStack_1dc = fStack_1fc;
    fStack_1ac = fStack_1bc;
    fStack_19c = fStack_1bc;
    FMatrix::RemoveScaling(&local_2b8);
    fVar34 = (float)(-(uint)(fVar17 <= fVar36 * fVar15) & (_DAT_146af0ce0 ^ (uint)fVar34) ^
                    _DAT_146af0ce0);
    fVar35 = (float)(-(uint)(fVar19 <= fVar38 * fVar31) & (uRam0000000146af0ce4 ^ (uint)fVar35) ^
                    uRam0000000146af0ce4);
    fVar37 = (float)(-(uint)(fVar27 <= fVar33 * fVar32) & (uRam0000000146af0ce8 ^ (uint)fVar37) ^
                    uRam0000000146af0ce8);
    local_2b8 = local_2b8 * fVar34;
    fStack_2b4 = fStack_2b4 * fVar34;
    fStack_2b0 = fStack_2b0 * fVar34;
    fStack_2a4 = fStack_2a4 * fVar35;
    fStack_2a0 = fStack_2a0 * fVar35;
    local_2a8 = local_2a8 * fVar35;
    fStack_294 = fStack_294 * fVar37;
    fStack_290 = fStack_290 * fVar37;
    local_298 = local_298 * fVar37;
    uVar6 = FQuat::FQuat(local_2c8,&local_2b8);
    local_2d8 = 0x322bcc77;
    auVar13._0_4_ = (float)local_2c8._0_4_ * (float)local_2c8._0_4_ + fStack_2c0 * fStack_2c0;
    auVar13._4_4_ = (float)local_2c8._4_4_ * (float)local_2c8._4_4_ + fStack_2bc * fStack_2bc;
    auVar13._8_4_ = fStack_2c0 * fStack_2c0 + (float)local_2c8._0_4_ * (float)local_2c8._0_4_;
    auVar13._12_4_ = fStack_2bc * fStack_2bc + (float)local_2c8._4_4_ * (float)local_2c8._4_4_;
    fVar27 = auVar13._4_4_ + auVar13._0_4_;
    fVar28 = auVar13._8_4_ + auVar13._4_4_;
    fVar29 = auVar13._12_4_ + auVar13._8_4_;
    fVar30 = auVar13._0_4_ + auVar13._12_4_;
    auVar10._4_4_ = fVar28;
    auVar10._0_4_ = fVar27;
    auVar10._8_4_ = fVar29;
    auVar10._12_4_ = fVar30;
    auVar10 = rsqrtps(auVar13,auVar10);
    fVar35 = auVar10._0_4_;
    fVar37 = auVar10._4_4_;
    fVar17 = auVar10._8_4_;
    fVar19 = auVar10._12_4_;
    fVar35 = (_DAT_146af0cd0 - fVar35 * fVar35 * fVar27 * _DAT_146af0cd0) * fVar35 + fVar35;
    fVar37 = (fRam0000000146af0cd4 - fVar37 * fVar37 * fVar28 * fRam0000000146af0cd4) * fVar37 +
             fVar37;
    fVar17 = (fRam0000000146af0cd8 - fVar17 * fVar17 * fVar29 * fRam0000000146af0cd8) * fVar17 +
             fVar17;
    fVar19 = (fRam0000000146af0cdc - fVar19 * fVar19 * fVar30 * fRam0000000146af0cdc) * fVar19 +
             fVar19;
    fVar34 = 0.0;
    local_238 = (float)(((uint)(((_DAT_146af0cd0 - fVar35 * fVar35 * fVar27 * _DAT_146af0cd0) *
                                 fVar35 + fVar35) * (float)local_2c8._0_4_) ^ _DAT_146af0cc0) &
                        -(uint)(1e-08 <= fVar27) ^ _DAT_146af0cc0);
    fStack_234 = (float)(((uint)(((fRam0000000146af0cd4 -
                                  fVar37 * fVar37 * fVar28 * fRam0000000146af0cd4) * fVar37 + fVar37
                                 ) * (float)local_2c8._4_4_) ^ uRam0000000146af0cc4) &
                         -(uint)(1e-08 <= fVar28) ^ uRam0000000146af0cc4);
    fStack_230 = (float)(((uint)(((fRam0000000146af0cd8 -
                                  fVar17 * fVar17 * fVar29 * fRam0000000146af0cd8) * fVar17 + fVar17
                                 ) * fStack_2c0) ^ uRam0000000146af0cc8) & -(uint)(1e-08 <= fVar29)
                        ^ uRam0000000146af0cc8);
    fStack_22c = (float)(((uint)(((fRam0000000146af0cdc -
                                  fVar19 * fVar19 * fVar30 * fRam0000000146af0cdc) * fVar19 + fVar19
                                 ) * fStack_2bc) ^ uRam0000000146af0ccc) & -(uint)(1e-08 <= fVar30)
                        ^ uRam0000000146af0ccc);
    local_158 = local_288;
    fStack_154 = fStack_284;
    fStack_150 = fStack_280;
  }
  fVar28 = fRam0000000146af0cf8;
  fVar27 = fRam0000000146af0cf4;
  fVar19 = _DAT_146af0cf0;
  fVar17 = fRam0000000146af0bf8;
  fVar37 = fRam0000000146af0bf4;
  fVar35 = _DAT_146af0bf0;
  fVar33 = fVar33 * fVar32;
  fVar38 = fVar38 * fVar31;
  fVar36 = fVar36 * fVar15;
  fStack_20c = fVar18 * fVar16;
  auVar5._4_4_ = fStack_e4;
  auVar5._0_4_ = local_e8;
  auVar5._8_4_ = fStack_e0;
  auVar5._12_4_ = fStack_dc;
  auVar4._4_4_ = fVar38;
  auVar4._0_4_ = fVar36;
  auVar4._8_4_ = fVar33;
  auVar4._12_4_ = fStack_20c;
  auVar10 = minps(auVar5,auVar4);
  local_228 = CONCAT44(fStack_154,local_158);
  uStack_220 = CONCAT44(fVar34,fStack_150);
  auVar12._4_4_ = -(uint)(auVar10._4_4_ < fRam0000000146af0cf4);
  auVar12._0_4_ = -(uint)(auVar10._0_4_ < _DAT_146af0cf0);
  auVar12._8_4_ = -(uint)(auVar10._8_4_ < fRam0000000146af0cf8);
  auVar12._12_4_ = -(uint)(auVar10._12_4_ < fRam0000000146af0cfc);
  iVar7 = movmskps(uVar6,auVar12);
  if (iVar7 == 0) {
    local_f8 = local_f8 * fVar36;
    fStack_f4 = fStack_f4 * fVar38;
    fStack_f0 = fStack_f0 * fVar33;
    fVar15 = fStack_f0 * fStack_234 - fStack_f4 * fStack_230;
    fVar36 = local_f8 * fStack_230 - fStack_f0 * local_238;
    fVar38 = fStack_f4 * local_238 - local_f8 * fStack_234;
    fVar15 = fVar15 + fVar15;
    fVar36 = fVar36 + fVar36;
    fVar38 = fVar38 + fVar38;
    local_248 = (fVar38 * fStack_234 - fVar36 * fStack_230) + fStack_22c * fVar15 + local_f8 +
                local_158;
    fStack_244 = (fVar15 * fStack_230 - fVar38 * local_238) + fStack_22c * fVar36 + fStack_f4 +
                 fStack_154;
    fStack_240 = (fVar36 * local_238 - fVar15 * fStack_234) + fStack_22c * fVar38 + fStack_f0 +
                 fStack_150;
  }
  else {
    fVar15 = fStack_234 + fStack_234;
    fVar18 = fStack_230 + fStack_230;
    fVar34 = (local_238 + local_238) * local_238;
    fVar16 = (local_238 + local_238) * fStack_22c;
    fStack_184 = (fVar18 * fStack_22c + fVar15 * local_238) * fVar36;
    fStack_170 = (fVar16 + fVar18 * fStack_234) * fVar38;
    local_168 = (fVar15 * fStack_22c + fVar18 * local_238) * fVar33;
    local_178 = fVar38 * (fVar15 * local_238 - fVar18 * fStack_22c);
    fStack_164 = fVar33 * (fVar18 * fStack_234 - fVar16);
    fStack_180 = fVar36 * (fVar18 * local_238 - fVar15 * fStack_22c);
    local_188 = (float)((uint)((_DAT_146af0bf0 - (fVar18 * fStack_230 + fVar15 * fStack_234)) *
                              fVar36) & _DAT_146af0c00);
    fStack_174 = (float)((uint)((fRam0000000146af0bf4 - (fVar18 * fStack_230 + fVar34)) * fVar38) &
                        uRam0000000146af0c04);
    fStack_160 = (float)((uint)((fRam0000000146af0bf8 - (fVar15 * fStack_234 + fVar34)) * fVar33) &
                        uRam0000000146af0c08);
    fStack_17c = (float)((uint)((fRam0000000146af0bfc - (fVar34 + fVar34)) * fStack_20c) &
                        uRam0000000146af0c0c);
    fVar15 = fStack_104 + fStack_104;
    fVar16 = fStack_100 + fStack_100;
    fVar34 = local_108 * (local_108 + local_108);
    fVar18 = fStack_fc * (local_108 + local_108);
    fStack_14c = fRam0000000146af0bfc;
    fStack_144 = (fStack_fc * fVar16 + local_108 * fVar15) * local_e8;
    fStack_130 = (fVar18 + fStack_104 * fVar16) * fStack_e4;
    local_128 = (fStack_fc * fVar15 + local_108 * fVar16) * fStack_e0;
    local_138 = fStack_e4 * (local_108 * fVar15 - fStack_fc * fVar16);
    fStack_124 = fStack_e0 * (fStack_104 * fVar16 - fVar18);
    fStack_140 = local_e8 * (local_108 * fVar16 - fStack_fc * fVar15);
    local_148 = (float)((uint)((_DAT_146af0bf0 - (fStack_100 * fVar16 + fStack_104 * fVar15)) *
                              local_e8) & _DAT_146af0c00);
    fStack_134 = (float)((uint)((fRam0000000146af0bf4 - (fStack_100 * fVar16 + fVar34)) * fStack_e4)
                        & uRam0000000146af0c04);
    fStack_120 = (float)((uint)((fRam0000000146af0bf8 - (fStack_104 * fVar15 + fVar34)) * fStack_e0)
                        & uRam0000000146af0c08);
    fStack_13c = (float)((uint)((fRam0000000146af0bfc - (fVar34 + fVar34)) * fStack_dc) &
                        uRam0000000146af0c0c);
    local_118 = local_f8;
    fStack_114 = fStack_f4;
    fStack_110 = fStack_f0;
    fStack_10c = fRam0000000146af0bfc;
    local_278 = fStack_144 * local_178 + local_148 * local_188 + fStack_140 * local_168 +
                fStack_13c * local_158;
    fStack_274 = fStack_144 * fStack_174 + local_148 * fStack_184 + fStack_140 * fStack_164 +
                 fStack_13c * fStack_154;
    fStack_270 = fStack_144 * fStack_170 + local_148 * fStack_180 + fStack_140 * fStack_160 +
                 fStack_13c * fStack_150;
    fStack_26c = fStack_144 * fStack_17c + local_148 * fStack_17c + fStack_140 * fStack_17c +
                 fStack_13c * fRam0000000146af0bfc;
    local_268 = fStack_134 * local_178 + local_138 * local_188 + fStack_130 * local_168 +
                fStack_13c * local_158;
    fStack_264 = fStack_134 * fStack_174 + local_138 * fStack_184 + fStack_130 * fStack_164 +
                 fStack_13c * fStack_154;
    fStack_260 = fStack_134 * fStack_170 + local_138 * fStack_180 + fStack_130 * fStack_160 +
                 fStack_13c * fStack_150;
    fStack_25c = fStack_134 * fStack_17c + local_138 * fStack_17c + fStack_130 * fStack_17c +
                 fStack_13c * fRam0000000146af0bfc;
    local_258 = fStack_124 * local_178 + local_128 * local_188 + fStack_120 * local_168 +
                fStack_13c * local_158;
    fStack_254 = fStack_124 * fStack_174 + local_128 * fStack_184 + fStack_120 * fStack_164 +
                 fStack_13c * fStack_154;
    fStack_250 = fStack_124 * fStack_170 + local_128 * fStack_180 + fStack_120 * fStack_160 +
                 fStack_13c * fStack_150;
    fStack_24c = fStack_124 * fStack_17c + local_128 * fStack_17c + fStack_120 * fStack_17c +
                 fStack_13c * fRam0000000146af0bfc;
    local_248 = fStack_f4 * local_178 + local_f8 * local_188 + fStack_f0 * local_168 +
                fRam0000000146af0bfc * local_158;
    fStack_244 = fStack_f4 * fStack_174 + local_f8 * fStack_184 + fStack_f0 * fStack_164 +
                 fRam0000000146af0bfc * fStack_154;
    fStack_240 = fStack_f4 * fStack_170 + local_f8 * fStack_180 + fStack_f0 * fStack_160 +
                 fRam0000000146af0bfc * fStack_150;
    fStack_23c = fStack_f4 * fStack_17c + local_f8 * fStack_17c + fStack_f0 * fStack_17c +
                 fRam0000000146af0bfc * fRam0000000146af0bfc;
    local_218 = fVar36;
    fStack_214 = fVar38;
    fStack_210 = fVar33;
    fStack_16c = fStack_17c;
    fStack_15c = fStack_17c;
    fStack_12c = fStack_13c;
    fStack_11c = fStack_13c;
    FMatrix::RemoveScaling(&local_278);
    fVar15 = (float)(-(uint)(fVar19 <= local_e8 * fVar36) & (_DAT_146af0ce0 ^ (uint)fVar35) ^
                    _DAT_146af0ce0);
    fVar36 = (float)(-(uint)(fVar27 <= fStack_e4 * fVar38) & (uRam0000000146af0ce4 ^ (uint)fVar37) ^
                    uRam0000000146af0ce4);
    fVar38 = (float)(-(uint)(fVar28 <= fStack_e0 * fVar33) & (uRam0000000146af0ce8 ^ (uint)fVar17) ^
                    uRam0000000146af0ce8);
    local_278 = local_278 * fVar15;
    fStack_274 = fStack_274 * fVar15;
    fStack_270 = fStack_270 * fVar15;
    fStack_264 = fStack_264 * fVar36;
    fStack_260 = fStack_260 * fVar36;
    local_268 = local_268 * fVar36;
    fStack_254 = fStack_254 * fVar38;
    fStack_250 = fStack_250 * fVar38;
    local_258 = local_258 * fVar38;
    FQuat::FQuat(local_2c8,&local_278);
  }
  fVar15 = *pfVar9;
  fVar36 = *(float *)(param_1 + 0x214);
  fVar38 = *(float *)(param_1 + 0x218);
  fVar33 = *(float *)(param_1 + 0x21c);
  fVar16 = *param_3;
  fVar18 = param_3[1];
  fVar34 = param_3[2];
  fVar35 = param_3[3];
  fVar17 = -fVar15;
  fVar37 = -fVar36;
  fVar19 = fVar35 * fVar15 * _DAT_146af0cb0 + fVar33 * fVar16 + fVar34 * fVar36 * _DAT_146af0ca0 +
           fVar18 * fVar38 * _DAT_146af0c90;
  fVar27 = fVar34 * fVar15 * fRam0000000146af0cb4 + fVar33 * fVar18 +
           fVar35 * fVar36 * fRam0000000146af0ca4 + fVar16 * fVar38 * fRam0000000146af0c94;
  fVar32 = fVar18 * fVar15 * fRam0000000146af0cb8 + fVar33 * fVar34 +
           fVar16 * fVar36 * fRam0000000146af0ca8 + fVar35 * fVar38 * fRam0000000146af0c98;
  fVar29 = fVar16 * fVar15 * fRam0000000146af0cbc + fVar33 * fVar35 +
           fVar18 * fVar36 * fRam0000000146af0cac + fVar34 * fVar38 * fRam0000000146af0c9c;
  fVar38 = -fVar38;
  fVar18 = fVar19 * fVar38 * fRam0000000146af0cb4;
  fVar34 = fVar19 * fVar37 * fRam0000000146af0cb8;
  fVar35 = fVar19 * fVar17 * fRam0000000146af0cbc;
  fVar15 = fVar27 * fVar33 * fRam0000000146af0ca4;
  fVar36 = fVar27 * fVar17 * fRam0000000146af0ca8;
  fVar16 = fVar27 * fVar37 * fRam0000000146af0cac;
  fVar31 = fVar32 * fVar17 * fRam0000000146af0c94;
  fVar28 = fVar32 * fVar33 * fRam0000000146af0c98;
  fVar30 = fVar32 * fVar38 * fRam0000000146af0c9c;
  *param_2 = fVar19 * fVar33 * _DAT_146af0cb0 + fVar29 * fVar17 + fVar27 * fVar38 * _DAT_146af0ca0 +
             fVar32 * fVar37 * _DAT_146af0c90;
  param_2[1] = fVar18 + fVar29 * fVar37 + fVar15 + fVar31;
  param_2[2] = fVar34 + fVar29 * fVar38 + fVar36 + fVar28;
  param_2[3] = fVar35 + fVar29 * fVar33 + fVar16 + fVar30;
  auVar2._4_4_ = fStack_244 - local_c8._4_4_;
  auVar2._0_4_ = local_248 - (float)local_c8;
  auVar2._8_4_ = fStack_240 - (float)uStack_c0;
  auVar2._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 4) = auVar2;
  auVar3._4_4_ = DAT_1464aa788._4_4_;
  auVar3._0_4_ = (undefined4)DAT_1464aa788;
  auVar3._8_4_ = DAT_1464aa790;
  auVar3._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 8) = auVar3;
  return param_2;
}



// FUNCTION 1423a8470 CopyFrom body=206 status=ok
// SIG undefined CopyFrom(void)

void FBaseBlendedCurve<FDefaultAllocator>::CopyFrom(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  short *psVar4;
  longlong lVar5;
  short sVar6;
  short sVar7;
  
  if (param_2 != param_1) {
    param_1[2] = param_2[2];
    *(undefined4 *)(param_1 + 1) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_1 + 0xc)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
    }
    iVar1 = (int)param_2[1];
    if (iVar1 != 0) {
      iVar3 = (int)param_1[1];
      if (*(int *)((longlong)param_1 + 0xc) < iVar3 + iVar1) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1);
        iVar3 = (int)param_1[1];
      }
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)iVar3 * 8),(void *)*param_2,(longlong)iVar1 << 3);
      *(int *)(param_1 + 1) = (int)param_1[1] + iVar1;
    }
    puVar2 = (undefined8 *)param_1[2];
    sVar7 = 0;
    if ((puVar2 != (undefined8 *)0x0) &&
       (lVar5 = (longlong)*(int *)(puVar2 + 1), sVar7 = 0, 0 < lVar5)) {
      psVar4 = (short *)*puVar2;
      sVar6 = 0;
      do {
        sVar7 = sVar6 + 1;
        if (*psVar4 == -1) {
          sVar7 = sVar6;
        }
        lVar5 = lVar5 + -1;
        psVar4 = psVar4 + 1;
        sVar6 = sVar7;
      } while (lVar5 != 0);
    }
    *(short *)(param_1 + 3) = sVar7;
    *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  }
  return;
}



// FUNCTION 1423a8540 FUN_1423a8540 body=679 status=ok
// SIG undefined FUN_1423a8540(void)

void FUN_1423a8540(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  longlong local_res20;
  longlong local_138;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  longlong local_120;
  longlong local_118 [2];
  code *local_108 [2];
  longlong local_f8 [4];
  longlong *local_d8;
  int local_c8;
  code *local_b8 [2];
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined4 local_78;
  undefined1 local_68 [40];
  
  FWeakObjectPtr::operator=(&local_130,param_1);
  local_res10 = local_12c;
  iVar2 = DAT_1464a820c;
  if (((DAT_146af0bd8 != 0x800) && (iVar2 = DAT_1464a8208, DAT_146af0bd8 != 0x1000)) ||
     (uVar9 = DAT_146af0be0, iVar2 != 0)) {
    uVar9 = DAT_146af0bdc | DAT_146af0bd8;
  }
  local_d8 = (longlong *)0x0;
  local_c8 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_f8);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_CopyToEmptyStorage_143fcfe50;
    *(undefined4 *)(puVar6 + 1) = local_130;
    *(undefined4 *)((longlong)puVar6 + 0xc) = local_12c;
  }
  local_108[0] = FUN_1423a6660;
  plVar7 = (longlong *)FUN_140596960(local_68,0,0xff);
  lVar8 = *plVar7;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(lVar8 + 0x10,local_108);
  *(uint *)(lVar8 + 0x60) = uVar9 | 0xff;
  lVar8 = *plVar7;
  lVar5 = plVar7[2];
  lVar3 = plVar7[1];
  lVar4 = *(longlong *)(lVar8 + 0x78);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
    UNLOCK();
  }
  local_138 = lVar4;
  FUN_1405ab110(lVar8,lVar3,(int)lVar5,1);
  if (local_c8 != 0) {
    plVar7 = local_f8;
    if (local_d8 != (longlong *)0x0) {
      plVar7 = local_d8;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar7 = (longlong *)(param_1 + 0xe08);
  if (plVar7 == &local_138) {
    if (lVar4 == 0) goto LAB_1423a86cd;
    LOCK();
    piVar1 = (int *)(lVar4 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    lVar8 = local_138;
  }
  else {
    lVar8 = *plVar7;
    *plVar7 = lVar4;
    if (lVar8 == 0) goto LAB_1423a86cd;
    LOCK();
    piVar1 = (int *)(lVar8 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  if (iVar2 == 1) {
    FGraphEvent::Recycle(lVar8);
  }
LAB_1423a86cd:
  local_88 = 0;
  local_78 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_CopyToEmptyStorage_143fcfe50;
    *(undefined4 *)((longlong)puVar6 + 0xc) = local_res10;
    *(undefined4 *)(puVar6 + 1) = local_130;
  }
  local_b8[0] = FUN_1423a6680;
  FUN_1406a5f30(&local_res20,local_b8,local_res8,plVar7,2);
  lVar8 = local_res20;
  if (param_2 != 0) {
    plVar7 = (longlong *)FTickFunction::GetCompletionHandle(param_2,&local_128);
    *(undefined4 *)(*plVar7 + 0x4c) = 2;
    if (local_128 != 0) {
      LOCK();
      piVar1 = (int *)(local_128 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
      }
    }
    lVar8 = local_res20;
    local_120 = local_res20;
    if (local_res20 != 0) {
      LOCK();
      *(int *)(local_res20 + 0x48) = *(int *)(local_res20 + 0x48) + 1;
      UNLOCK();
    }
    puVar6 = (undefined8 *)FTickFunction::GetCompletionHandle(param_2,local_118);
    FGraphEvent::DontCompleteUntil(*puVar6,&local_120);
    if (local_118[0] != 0) {
      LOCK();
      piVar1 = (int *)(local_118[0] + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      lVar8 = local_res20;
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
        lVar8 = local_res20;
      }
    }
  }
  if (lVar8 != 0) {
    LOCK();
    piVar1 = (int *)(lVar8 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle(local_res20);
    }
  }
  return;
}



// FUNCTION 1423a87f0 FUN_1423a87f0 body=999 status=ok
// SIG undefined FUN_1423a87f0(void)

void FUN_1423a87f0(longlong *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  uVar12 = (ulonglong)_tls_index;
  lVar11 = 0;
  if (param_1[0xe3] == 0) goto LAB_1423a8958;
  FUN_1423b3480();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0x38) <
       DAT_1468509e4) && (_Init_thread_header(&DAT_1468509e4), DAT_1468509e4 == -1)) {
    uVar7 = FCommandLine::Get();
    DAT_1468509e0 = FParse::Param(uVar7,L"nullrhi");
    _Init_thread_footer(&DAT_1468509e4);
  }
  if ((((DAT_1468b616c != '\0') && (DAT_1468b616d == '\0')) || (DAT_1468509e0 != '\0')) ||
     (cVar3 = FUN_142399ef0(param_1), cVar3 == '\0')) goto LAB_1423a8958;
  lVar5 = param_1[0x24];
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0(param_1);
  }
  uVar1 = *(undefined4 *)(lVar5 + 0x1c0);
  uVar7 = *(undefined8 *)(param_1[0xe3] + 0x40);
  cVar3 = FUN_1427e4340(uVar7,uVar1);
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*param_1 + 0x938))(param_1);
    bVar2 = false;
    if (cVar3 != '\0') goto LAB_1423a88bf;
  }
  else {
LAB_1423a88bf:
    bVar2 = true;
  }
  lVar5 = lVar11;
  if ((char)param_1[0x110] < '\0') {
    lVar6 = operator_new(0xf0);
    if (lVar6 != 0) {
      lVar5 = FUN_1427ee580(lVar6,param_1,uVar7,uVar1);
    }
  }
  else if (bVar2) {
    lVar6 = operator_new(0x138);
    if (lVar6 != 0) {
      lVar5 = FUN_1427cf200(lVar6,param_1,uVar7,uVar1);
    }
  }
  else {
    lVar6 = operator_new(0x108);
    if (lVar6 != 0) {
      lVar5 = FUN_1427cf420(lVar6,param_1,uVar7,uVar1);
    }
  }
  param_1[0x111] = lVar5;
  (**(code **)(*param_1 + 0x940))(param_1);
LAB_1423a8958:
  FUN_142387f70(param_1);
  if (param_1[0xe3] != 0) {
    if (param_1[0x111] != 0) {
      if (((int)param_1[0x109] == DAT_1464aaa8c) && (-1 < *(int *)((longlong)param_1 + 0x844))) {
        *(int *)(param_1[0x111] + 0x28) = *(int *)((longlong)param_1 + 0x844);
        iVar9 = *(int *)((longlong)param_1 + 0x844);
        *(int *)(param_1 + 0x108) = iVar9;
        *(int *)((longlong)param_1 + 0x83c) = iVar9;
      }
      else {
        (**(code **)(*param_1 + 0x980))(param_1,1);
        iVar9 = *(int *)((longlong)param_1 + 0x83c);
      }
      if ((iVar9 < 0) || (*(int *)(param_1[0xe3] + 0xd0) <= iVar9)) {
        (**(code **)(*param_1 + 0x980))(param_1,1);
        iVar9 = *(int *)((longlong)param_1 + 0x83c);
      }
      if ((-1 < iVar9) && (iVar9 < *(int *)(param_1[0xe3] + 0xd0))) {
        if (((*(byte *)((longlong)param_1 + 0x879) & 8) != 0) || (*DAT_146af0d80 == 0)) {
          *(undefined4 *)(param_1 + 0x102) = 0;
          if (*(int *)((longlong)param_1 + 0x814) != 0) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x101,0);
          }
        }
        piVar10 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8) + 0x38);
        if ((*piVar10 < DAT_146af0fb8) && (_Init_thread_header(&DAT_146af0fb8), DAT_146af0fb8 == -1)
           ) {
          if (DAT_1468b1f88 == (longlong *)0x0) {
            IConsoleManager::SetupSingleton();
          }
          plVar8 = (longlong *)
                   (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.BasePassOutputsVelocity");
          lVar5 = lVar11;
          if (plVar8 != (longlong *)0x0) {
            lVar5 = (**(code **)(*plVar8 + 0x38))(plVar8);
          }
          DAT_146af0fb0 = lVar5;
          _Init_thread_footer(&DAT_146af0fb8);
        }
        if ((*piVar10 < DAT_146af0fc0) &&
           (_Init_thread_header(&DAT_146af0fc0), lVar5 = DAT_146af0fb0, DAT_146af0fc0 == -1)) {
          cVar3 = FUN_1415ad720(&DAT_1468e2448);
          if ((cVar3 == '\0') &&
             ((DAT_1468c21ae != '\0' && (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)))) {
            lVar11 = 4;
          }
          DAT_146af0fbc = *(int *)(lVar11 + lVar5) != 0;
          _Init_thread_footer(&DAT_146af0fc0);
        }
        (**(code **)(*(longlong *)param_1[0x111] + 0x20))
                  ((longlong *)param_1[0x111],*(undefined4 *)((longlong)param_1 + 0x83c),param_1,
                   param_1 + 0x101,param_1 + 0x103,DAT_146af0fbc);
      }
    }
    FUN_1423c0940(param_1);
  }
  return;
}



// FUNCTION 1423a8be0 FUN_1423a8be0 body=208 status=ok
// SIG undefined FUN_1423a8be0(void)

void FUN_1423a8be0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_142338230();
  cVar2 = FUN_142399f40(param_1);
  bVar1 = true;
  if ((*(char *)(param_1 + 0x2f8) == '\x01') && (*(longlong *)(param_1 + 0x300) == 0)) {
    bVar1 = false;
  }
  if (((((*(byte *)(param_1 + 0x2ec) & 1) != 0) && ((*(byte *)(param_1 + 0x24c) & 0x20) != 0)) &&
      (cVar2 != '\0')) && (bVar1)) {
    if (((*(longlong *)(param_1 + 0x348) == 0) && (*(char *)(param_1 + 0x315) == '\0')) ||
       (lVar3 = operator_new(0x130), lVar3 == 0)) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_14239fb80(lVar3,param_1);
    }
    *(longlong *)(param_1 + 0x4a8) = lVar3;
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x120);
      if (lVar4 == 0) {
        lVar4 = FUN_1423407b0(param_1);
        lVar3 = *(longlong *)(param_1 + 0x4a8);
      }
      (**(code **)(**(longlong **)(lVar4 + 0x1b8) + 0x50))(*(longlong **)(lVar4 + 0x1b8),lVar3);
    }
  }
  return;
}



// FUNCTION 1423a8cb0 FUN_1423a8cb0 body=213 status=ok
// SIG undefined FUN_1423a8cb0(void)

undefined8 FUN_1423a8cb0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0();
  }
  iVar4 = *(int *)(lVar2 + 0x1c0);
  uVar5 = 0;
  uVar7 = 0;
  lVar2 = *(longlong *)(param_1 + 0x888);
  if (lVar2 == 0) {
    if (*(longlong *)(param_1 + 0x718) == 0) {
      return 0;
    }
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x718) + 0x40);
  }
  else {
    lVar6 = *(longlong *)(lVar2 + 0x40);
  }
  uVar3 = uVar5;
  if ((((lVar6 != 0) && (-1 < *(int *)(param_1 + 0x83c))) &&
      (*(int *)(param_1 + 0x83c) < *(int *)(lVar6 + 8))) &&
     ((uVar3 = uVar7, (*(byte *)(param_1 + 0x879) & 0x10) == 0 && (lVar2 != 0)))) {
    iVar1 = FUN_1427dc320(lVar6);
    if (iVar4 == 0) {
      iVar4 = 0x4b;
    }
    else {
      if (iVar4 - 1U < 3) {
        uVar5 = 0x100;
      }
      iVar4 = (int)uVar5;
    }
    if ((iVar1 <= iVar4) && (lVar2 = operator_new(0x470), lVar2 != 0)) {
      uVar3 = FUN_14276be60(lVar2,param_1,lVar6);
    }
  }
  return uVar3;
}



// FUNCTION 1423a8d90 FUN_1423a8d90 body=141 status=ok
// SIG undefined FUN_1423a8d90(void)

undefined8 * FUN_1423a8d90(longlong param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x3b0);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_14271d7c0(puVar2,param_1,0);
    *puVar2 = &PTR_FUN_14506d580;
    *(uint *)(puVar2 + 0x74) =
         *(uint *)(puVar2 + 0x74) ^
         ((uint)*(byte *)(param_1 + 0x700) ^ *(uint *)(puVar2 + 0x74)) & 1;
    *(undefined4 *)((longlong)puVar2 + 0x3a4) = *(undefined4 *)(param_1 + 0x6f0);
    uVar1 = *(undefined4 *)(param_1 + 0x710);
    *(uint *)((longlong)puVar2 + 0x1c) = *(uint *)((longlong)puVar2 + 0x1c) & 0xfffffffd;
    *(undefined4 *)(puVar2 + 0x75) = uVar1;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1423a8e20 FUN_1423a8e20 body=372 status=ok
// SIG undefined FUN_1423a8e20(void)

undefined8 * FUN_1423a8e20(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  DWORD *pDVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong local_res8;
  longlong local_res10;
  
  plVar8 = (longlong *)0x0;
  iVar9 = 0;
  if (param_2 != 0) {
    iVar9 = *(int *)(param_2 + 0x28);
  }
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar4 = TlsGetValue(*pDVar3);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      plVar8 = plVar4;
    }
    TlsSetValue(*pDVar3,plVar8);
    plVar4 = plVar8;
  }
  plVar8 = (longlong *)plVar4[1];
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)*plVar4;
    if (plVar8 == (longlong *)0x0) {
      lVar5 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar3 + 2);
      plVar4[1] = lVar5;
      if (lVar5 == 0) {
        puVar6 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar4[1] = (longlong)puVar6;
        lVar5 = 0x1f;
        do {
          puVar2 = puVar6 + 0x20;
          *puVar6 = puVar2;
          lVar5 = lVar5 + -1;
          puVar6 = puVar2;
        } while (lVar5 != 0);
        *puVar2 = 0;
      }
      plVar8 = (longlong *)plVar4[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar4 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar4[1] = (longlong)plVar8;
      *(undefined4 *)(plVar4 + 2) = 0x20;
      *plVar4 = 0;
    }
  }
  else {
    iVar7 = (int)plVar4[2];
  }
  plVar4[1] = *plVar8;
  *(int *)(plVar4 + 2) = iVar7 + -1;
  plVar4 = (longlong *)FUN_1415914c0(&local_res8);
  *param_1 = plVar8;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  local_res10 = *plVar4;
  *plVar4 = 0;
  *plVar8 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar8 + 1) = 0xff;
  *(int *)((longlong)plVar8 + 0xc) = iVar9 + 1;
  *plVar8 = (longlong)&PTR_FUN_14506c6e0;
  *(undefined1 *)(plVar8 + 3) = 0;
  plVar8[4] = local_res10;
  if (local_res8 != 0) {
    LOCK();
    piVar1 = (int *)(local_res8 + 0x48);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      FGraphEvent::Recycle();
    }
  }
  return param_1;
}



// FUNCTION 1423a8fa0 FUN_1423a8fa0 body=372 status=ok
// SIG undefined FUN_1423a8fa0(void)

undefined8 * FUN_1423a8fa0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  DWORD *pDVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong local_res8;
  longlong local_res10;
  
  plVar8 = (longlong *)0x0;
  iVar9 = 0;
  if (param_2 != 0) {
    iVar9 = *(int *)(param_2 + 0x28);
  }
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar4 = TlsGetValue(*pDVar3);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      plVar8 = plVar4;
    }
    TlsSetValue(*pDVar3,plVar8);
    plVar4 = plVar8;
  }
  plVar8 = (longlong *)plVar4[1];
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)*plVar4;
    if (plVar8 == (longlong *)0x0) {
      lVar5 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar3 + 2);
      plVar4[1] = lVar5;
      if (lVar5 == 0) {
        puVar6 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar4[1] = (longlong)puVar6;
        lVar5 = 0x1f;
        do {
          puVar2 = puVar6 + 0x20;
          *puVar6 = puVar2;
          lVar5 = lVar5 + -1;
          puVar6 = puVar2;
        } while (lVar5 != 0);
        *puVar2 = 0;
      }
      plVar8 = (longlong *)plVar4[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar4 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar4[1] = (longlong)plVar8;
      *(undefined4 *)(plVar4 + 2) = 0x20;
      *plVar4 = 0;
    }
  }
  else {
    iVar7 = (int)plVar4[2];
  }
  plVar4[1] = *plVar8;
  *(int *)(plVar4 + 2) = iVar7 + -1;
  plVar4 = (longlong *)FUN_1415914c0(&local_res8);
  *param_1 = plVar8;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  local_res10 = *plVar4;
  *plVar4 = 0;
  *plVar8 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar8 + 1) = 0xff;
  *(int *)((longlong)plVar8 + 0xc) = iVar9 + 1;
  *plVar8 = (longlong)&PTR_FUN_14506c6d0;
  *(undefined1 *)(plVar8 + 3) = 0;
  plVar8[4] = local_res10;
  if (local_res8 != 0) {
    LOCK();
    piVar1 = (int *)(local_res8 + 0x48);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      FGraphEvent::Recycle();
    }
  }
  return param_1;
}



// FUNCTION 1423a9120 FUN_1423a9120 body=214 status=ok
// SIG undefined FUN_1423a9120(void)

void FUN_1423a9120(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)0x0;
  if (((*(int *)(param_1 + 0x980) != 0) && (*(longlong **)(param_1 + 0x978) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x978) + 0x18))(), cVar1 != '\0')) {
    if (*(int *)(param_1 + 0x980) != 0) {
      plVar2 = *(longlong **)(param_1 + 0x978);
    }
    (**(code **)(*plVar2 + 0x40))();
  }
  *(undefined4 *)(param_1 + 0x730) = 0;
  if (*(int *)(param_1 + 0x734) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x728,0);
  }
  *(undefined4 *)(param_1 + 0x740) = 0;
  if (*(int *)(param_1 + 0x744) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x738,0);
  }
  *(undefined4 *)(param_1 + 0x760) = 0;
  if (*(int *)(param_1 + 0x764) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x758,0);
  }
  *(undefined4 *)(param_1 + 0x870) = 0;
  if (*(int *)(param_1 + 0x874) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x868,0);
  }
  *(undefined4 *)(param_1 + 0x750) = 0;
  if (*(int *)(param_1 + 0x754) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x748,0);
  }
  *(undefined4 *)(param_1 + 0xa90) = 0;
  if (*(int *)(param_1 + 0xa94) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0xa88,0);
  }
  return;
}



// FUNCTION 1423a9200 FUN_1423a9200 body=192 status=ok
// SIG undefined FUN_1423a9200(void)

void FUN_1423a9200(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)0x0;
  if (((*(int *)(param_1 + 0x980) != 0) && (*(longlong **)(param_1 + 0x978) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x978) + 0x18))(), cVar1 != '\0')) {
    if (*(int *)(param_1 + 0x980) != 0) {
      plVar2 = *(longlong **)(param_1 + 0x978);
    }
    (**(code **)(*plVar2 + 0x40))();
  }
  *(undefined4 *)(param_1 + 0x730) = 0;
  if (*(int *)(param_1 + 0x734) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x728,0);
  }
  *(undefined4 *)(param_1 + 0x740) = 0;
  if (*(int *)(param_1 + 0x744) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x738,0);
  }
  *(undefined4 *)(param_1 + 0x760) = 0;
  if (*(int *)(param_1 + 0x764) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x758,0);
  }
  *(undefined4 *)(param_1 + 0x870) = 0;
  if (*(int *)(param_1 + 0x874) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x868,0);
  }
  *(undefined4 *)(param_1 + 0x750) = 0;
  if (*(int *)(param_1 + 0x754) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x748,0);
  }
  return;
}



// FUNCTION 1423a92c0 FUN_1423a92c0 body=139 status=ok
// SIG undefined FUN_1423a92c0(void)

void FUN_1423a92c0(longlong param_1)

{
  FUN_142388990();
  *(undefined4 *)(param_1 + 0x810) = 0;
  if (*(int *)(param_1 + 0x814) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x808,0);
  }
  *(undefined4 *)(param_1 + 0x820) = 0;
  if (*(int *)(param_1 + 0x824) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x818,0);
  }
  *(undefined4 *)(param_1 + 0x844) = *(undefined4 *)(param_1 + 0x83c);
  *(undefined4 *)(param_1 + 0x848) = DAT_1464aaa8c;
  if (*(longlong **)(param_1 + 0x888) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x888) + 0x18))();
    BeginCleanup(*(undefined8 *)(param_1 + 0x888));
    *(undefined8 *)(param_1 + 0x888) = 0;
  }
  return;
}



// FUNCTION 1423a9350 FUN_1423a9350 body=566 status=ok
// SIG undefined FUN_1423a9350(void)

void FUN_1423a9350(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  DWORD DVar5;
  longlong lVar6;
  DWORD *pDVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  LARGE_INTEGER local_res8;
  longlong local_res10;
  LARGE_INTEGER local_res18;
  undefined8 local_res20;
  
  UActorComponent::DestroyRenderState_Concurrent();
  lVar9 = *(longlong *)(param_1 + 0x4a8);
  if (lVar9 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x120);
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0(param_1);
      lVar9 = *(longlong *)(param_1 + 0x4a8);
    }
    (**(code **)(**(longlong **)(lVar6 + 0x1b8) + 0x58))(*(longlong **)(lVar6 + 0x1b8),lVar9);
    plVar11 = (longlong *)0x0;
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)))) {
      uVar3 = *(undefined8 *)(param_1 + 0x4a8);
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_res18);
      FMemory::operator_delete(uVar3,0x130);
      QueryPerformanceCounter(&local_res8);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res18._0_4_);
    }
    else {
      pDVar7 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar8 = TlsGetValue(*pDVar7);
      if (plVar8 == (longlong *)0x0) {
        plVar8 = (longlong *)operator_new(0x18);
        if (plVar8 != (longlong *)0x0) {
          *plVar8 = 0;
          plVar8[1] = 0;
          *(undefined4 *)(plVar8 + 2) = 0;
          plVar11 = plVar8;
        }
        TlsSetValue(*pDVar7,plVar11);
        plVar8 = plVar11;
      }
      plVar11 = (longlong *)plVar8[1];
      if (plVar11 == (longlong *)0x0) {
        plVar11 = (longlong *)*plVar8;
        if (plVar11 == (longlong *)0x0) {
          lVar9 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar7 + 2);
          plVar8[1] = lVar9;
          if (lVar9 == 0) {
            puVar10 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar8[1] = (longlong)puVar10;
            lVar9 = 0x1f;
            do {
              puVar2 = puVar10 + 0x20;
              *puVar10 = puVar2;
              lVar9 = lVar9 + -1;
              puVar10 = puVar2;
            } while (lVar9 != 0);
            *puVar2 = 0;
          }
          plVar11 = (longlong *)plVar8[1];
          iVar12 = 0x20;
          *(undefined4 *)(plVar8 + 2) = 0x20;
        }
        else {
          iVar12 = 0x20;
          plVar8[1] = (longlong)plVar11;
          *(undefined4 *)(plVar8 + 2) = 0x20;
          *plVar8 = 0;
        }
      }
      else {
        iVar12 = (int)plVar8[2];
      }
      plVar8[1] = *plVar11;
      *(int *)(plVar8 + 2) = iVar12 + -1;
      *plVar11 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar11 + 1) = 0xff;
      local_res20 = 0;
      *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
      *plVar11 = (longlong)&PTR_FUN_14506d550;
      *(undefined1 *)(plVar11 + 3) = 0;
      plVar11[4] = 0;
      plVar11[2] = *(longlong *)(param_1 + 0x4a8);
      lVar9 = plVar11[4];
      piVar1 = (int *)(lVar9 + 0x48);
      if (lVar9 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_res10 = lVar9;
      FUN_140445100(plVar11,0,0xff,1,0);
      if (lVar9 != 0) {
        LOCK();
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          FGraphEvent::Recycle(local_res10);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x4a8) = 0;
  }
  return;
}



// FUNCTION 1423a9590 FUN_1423a9590 body=67 status=ok
// SIG undefined FUN_1423a9590(void)

void FUN_1423a9590(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined1 *puVar5;
  
  puVar3 = *(undefined1 **)(param_1 + 0xeb8);
  puVar5 = puVar3 + (longlong)*(int *)(param_1 + 0xec0) * 0x10;
  for (; puVar3 != puVar5; puVar3 = puVar3 + 0x10) {
    if (*(longlong *)(puVar3 + 8) == param_2) {
      *puVar3 = 0;
    }
  }
  lVar1 = *(longlong *)(param_1 + 0xa48);
  if (lVar1 == 0) {
    return;
  }
  pcVar2 = *(char **)(lVar1 + 0x408);
  pcVar4 = pcVar2 + (longlong)*(int *)(lVar1 + 0x410) * 0x10;
  for (; pcVar2 != pcVar4; pcVar2 = pcVar2 + 0x10) {
    if ((*(longlong *)(pcVar2 + 8) == param_2) && (*pcVar2 != '\0')) {
      *pcVar2 = '\0';
      *(undefined1 *)(lVar1 + 0x428) = 1;
    }
  }
  return;
}



// FUNCTION 1423a95e0 FUN_1423a95e0 body=185 status=ok
// SIG undefined FUN_1423a95e0(void)

void FUN_1423a95e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  puVar5 = *(undefined1 **)(param_1 + 0xeb8);
  puVar4 = puVar5 + (longlong)*(int *)(param_1 + 0xec0) * 0x10;
  do {
    if (puVar5 == puVar4) {
      if (*(longlong *)(param_1 + 0xa48) != 0) {
        FUN_14225c890();
      }
      return;
    }
    lVar1 = *(longlong *)(puVar5 + 8);
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x40) != *(int *)(lVar1 + 0x6c))) {
      lVar3 = *(longlong *)(lVar1 + 0x78);
      if (*(longlong *)(lVar1 + 0x78) == 0) {
        lVar3 = lVar1 + 0x70;
      }
      iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                               (longlong)*(int *)(lVar1 + 0x80) - 1U) * 4);
      if (iVar2 != -1) {
        do {
          if (*(longlong *)(*(longlong *)(lVar1 + 0x38) + (longlong)iVar2 * 0x10) == param_2) {
            if (iVar2 != -1) {
              *puVar5 = 0;
            }
            break;
          }
          iVar2 = *(int *)(*(longlong *)(lVar1 + 0x38) + 8 + (longlong)iVar2 * 0x10);
        } while (iVar2 != -1);
      }
    }
    puVar5 = puVar5 + 0x10;
  } while( true );
}



// FUNCTION 1423a96a0 FUN_1423a96a0 body=774 status=ok
// SIG undefined FUN_1423a96a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1423a96a0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  longlong local_68 [4];
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if ((*(longlong *)(param_1 + 0x718) != 0) &&
     (*(int *)(*(longlong *)(param_1 + 0x718) + 0x160) != *(int *)(param_1 + 0xe40))) {
    *(undefined4 *)(param_1 + 0xe40) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0xe44)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_1 + 0xe38,0);
    }
    TArray<FTransform,TSizedDefaultAllocator<32>_>::Append<FTransform,TSizedDefaultAllocator<32>_>
              (param_1 + 0xe38,param_1 + 0xa88);
    *(undefined4 *)(param_1 + 0xe30) = 0;
    if ((*(int *)(param_1 + 0xe34) < 0) && (*(int *)(param_1 + 0xe34) != 0)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_1 + 0xe28,0);
    }
    TArray<FTransform,TSizedDefaultAllocator<32>_>::Append<FTransform,TSizedDefaultAllocator<32>_>
              (param_1 + 0xe28,param_1 + 0x728 + (longlong)*(int *)(param_1 + 0x770) * 0x10);
  }
  plVar8 = (longlong *)FUN_1423a8fa0(local_98,0,0xff);
  lVar5 = *plVar8;
  FWeakObjectPtr::operator=(&local_c8,param_1);
  *(undefined4 *)(lVar5 + 0x10) = local_c8;
  *(undefined4 *)(lVar5 + 0x14) = local_c4;
  lVar5 = *plVar8;
  lVar7 = plVar8[2];
  lVar6 = plVar8[1];
  lVar11 = *(longlong *)(lVar5 + 0x20);
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 0x48) = *(int *)(lVar11 + 0x48) + 1;
    UNLOCK();
  }
  local_c0 = lVar11;
  FUN_1423bd2e0(lVar5,lVar6,(int)lVar7,1);
  plVar8 = (longlong *)(param_1 + 0xe08);
  if (plVar8 == &local_c0) {
    if (lVar11 == 0) goto LAB_1423a97fc;
    LOCK();
    piVar1 = (int *)(lVar11 + 0x48);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    lVar5 = local_c0;
  }
  else {
    lVar5 = *plVar8;
    *plVar8 = lVar11;
    if (lVar5 == 0) goto LAB_1423a97fc;
    LOCK();
    piVar1 = (int *)(lVar5 + 0x48);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  if (iVar3 == 1) {
    FGraphEvent::Recycle(lVar5);
  }
LAB_1423a97fc:
  local_48 = (longlong *)0x0;
  local_40 = 1;
  TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_68,0);
  plVar10 = local_68;
  if (local_48 != (longlong *)0x0) {
    plVar10 = local_48;
  }
  lVar5 = *plVar8;
  *plVar10 = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
    UNLOCK();
  }
  plVar8 = (longlong *)FUN_1423a8e20(local_80,local_68,0xff);
  lVar5 = *plVar8;
  FWeakObjectPtr::operator=(&local_b8,param_1);
  *(undefined4 *)(lVar5 + 0x10) = local_b8;
  *(undefined4 *)(lVar5 + 0x14) = local_b4;
  lVar5 = *plVar8;
  lVar7 = plVar8[2];
  lVar6 = plVar8[1];
  lVar11 = *(longlong *)(lVar5 + 0x20);
  piVar1 = (int *)(lVar11 + 0x48);
  if (lVar11 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_d0 = lVar11;
  FUN_14048b000(lVar5,lVar6,(int)lVar7,1);
  if (param_2 != 0) {
    plVar8 = (longlong *)FTickFunction::GetCompletionHandle(param_2,&local_b0);
    *(undefined4 *)(*plVar8 + 0x4c) = 2;
    local_a8 = lVar11;
    if (local_b0 != 0) {
      LOCK();
      piVar2 = (int *)(local_b0 + 0x48);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      local_a8 = local_d0;
      if (iVar3 == 1) {
        FGraphEvent::Recycle();
        local_a8 = local_d0;
      }
    }
    lVar11 = 0;
    if (local_a8 != 0) {
      LOCK();
      *(int *)(local_a8 + 0x48) = *(int *)(local_a8 + 0x48) + 1;
      UNLOCK();
      lVar11 = local_d0;
    }
    puVar9 = (undefined8 *)FTickFunction::GetCompletionHandle(param_2,&local_a0);
    FGraphEvent::DontCompleteUntil(*puVar9,&local_a8);
    if (local_a0 != 0) {
      LOCK();
      piVar2 = (int *)(local_a0 + 0x48);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      lVar11 = local_d0;
      if (iVar3 == 1) {
        FGraphEvent::Recycle();
        lVar11 = local_d0;
      }
    }
  }
  if (lVar11 != 0) {
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FGraphEvent::Recycle(local_d0);
    }
  }
  plVar8 = local_68;
  iVar3 = (int)local_40;
  if (local_48 != (longlong *)0x0) {
    plVar8 = local_48;
  }
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar8 != 0) {
      LOCK();
      piVar1 = (int *)(*plVar8 + 0x48);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        FGraphEvent::Recycle();
      }
    }
    plVar8 = plVar8 + 1;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1423a99b0 FUN_1423a99b0 body=299 status=ok
// SIG undefined FUN_1423a99b0(void)

void FUN_1423a99b0(longlong param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  
  if (((*(longlong *)(param_1 + 0x718) != 0) &&
      (((*(longlong *)(param_1 + 0xa48) != 0 &&
        (cVar1 = UAnimInstance::NeedsUpdate(), cVar1 != '\0')) ||
       ((*(longlong *)(param_1 + 0xa60) != 0 &&
        (cVar1 = UAnimInstance::NeedsUpdate(), cVar1 != '\0')))))) &&
     (cVar1 = FUN_1423bd7b0(param_1), cVar1 != '\0')) {
    if (((*DAT_146af0b68 == 0) || (cVar1 = FUN_141636a40(), cVar1 == '\0')) ||
       (((*(byte *)(param_2 + 10) != *(byte *)(param_2 + 8) &&
         (*(byte *)(param_2 + 0xb) <= *(byte *)(param_2 + 8))) ||
        (*(longlong *)(param_2 + 0x18) == 0)))) {
      bVar2 = 0;
    }
    else {
      bVar2 = 1;
    }
    cVar1 = FUN_1423b2d70(param_1,bVar2 ^ 1,1);
    if (cVar1 == '\0') {
      *(undefined8 *)(param_1 + 0xe20) = *(undefined8 *)(param_1 + 0x718);
      *(undefined8 *)(param_1 + 0xe18) = *(undefined8 *)(param_1 + 0xa48);
      FBaseBlendedCurve<FDefaultAllocator>::Empty(param_1 + 0xe58);
      FBaseBlendedCurve<FDefaultAllocator>::Empty(param_1 + 0xab0);
      *(undefined4 *)(param_1 + 0xe54) = 0;
      if (bVar2 == 0) {
        FUN_1423b5d00(param_1);
        FUN_1423b6200(param_1,param_1 + 0xe18);
      }
      else {
        FUN_1423a96a0(param_1,param_2);
      }
    }
  }
  return;
}



// FUNCTION 1423a9ae0 FUN_1423a9ae0 body=526 status=ok
// SIG undefined FUN_1423a9ae0(void)

void FUN_1423a9ae0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_28 [32];
  
  if (*(char *)(param_1 + 0xe55) != '\0') {
    if (*(char *)(param_1 + 0xe54) == '\0') {
      lVar6 = param_1 + 0xe58;
      lVar4 = param_1 + 0xe38;
      lVar5 = param_1 + 0xe28;
    }
    else {
      lVar6 = param_1 + 0xaf0;
      lVar4 = param_1 + 0xad0;
      lVar5 = param_1 + 0xae0;
    }
    FUN_1423b5d60(param_1,*(undefined8 *)(param_1 + 0xe20),*(undefined8 *)(param_1 + 0xe18),
                  *(char *)(param_1 + 0xe55),lVar5,lVar4,param_1 + 0xe48,lVar6);
  }
  cVar2 = *(char *)(param_1 + 0xe54);
  if (cVar2 != '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0xe20);
    if ((*(int *)(param_1 + 0xe40) == *(int *)(param_1 + 0xad8)) &&
       (*(int *)(param_1 + 0xe40) == *(int *)(param_1 + 0xe30))) {
      FUN_1422514f0(param_1 + 0xe38,param_1 + 0xad0,*(undefined4 *)(param_1 + 0xf18),param_1 + 0xbd0
                   );
      FUN_1423aaee0(param_1,uVar1,param_1 + 0xe38,param_1 + 0xe28);
      FUN_1423b4c60(param_1 + 0xe58,param_1 + 0xaf0,*(undefined4 *)(param_1 + 0xf18));
      cVar2 = *(char *)(param_1 + 0xe54);
    }
  }
  lVar6 = 0xae0;
  if (cVar2 == '\0') {
    lVar6 = 0xe28;
  }
  if ((((DAT_146af0b50 != 0) && (cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x720), cVar2 == '\0'))
      && (lVar4 = *(longlong *)(param_1 + 0x718), lVar4 != 0)) &&
     ((lVar5 = *(longlong *)(param_1 + 0x828), lVar5 != 0 ||
      (lVar5 = *(longlong *)(lVar4 + 0x100), lVar5 != 0)))) {
    puVar3 = (undefined8 *)
             FUN_1426b9400(lVar5,local_28,&DAT_1468b5b70,lVar6 + param_1,lVar4 + 0x138,
                           param_1 + 0x920,*(byte *)(param_1 + 0x879) >> 7);
    uVar1 = puVar3[1];
    *(undefined8 *)(param_1 + 0xa10) = *puVar3;
    *(undefined8 *)(param_1 + 0xa18) = uVar1;
    *(undefined8 *)(param_1 + 0xa20) = puVar3[2];
    *(undefined4 *)(param_1 + 0xa28) = *(undefined4 *)(puVar3 + 3);
    *(undefined8 *)(param_1 + 0xa08) = DAT_1468c21b0;
  }
  return;
}



// FUNCTION 1423a9d00 FUN_1423a9d00 body=441 status=ok
// SIG undefined FUN_1423a9d00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1423a9d00(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  uint7 uVar5;
  ulonglong uVar4;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  float fStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [32];
  float local_68;
  float fStack_64;
  float fStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  lVar7 = *(longlong *)(param_1 + 0x828);
  uVar5 = (uint7)(local_58 >> 8);
  if ((lVar7 == 0) &&
     ((*(longlong *)(param_1 + 0x718) == 0 ||
      (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x718) + 0x100), lVar7 == 0)))) {
    uVar4 = (ulonglong)uVar5;
  }
  else {
    fVar3 = *(float *)(param_1 + 0x230);
    local_98 = *(undefined8 *)(param_1 + 0x230);
    fStack_90 = *(float *)(param_1 + 0x238);
    uStack_8c = *(undefined4 *)(param_1 + 0x23c);
    if ((0.0001 < ABS(fVar3 - *(float *)(param_1 + 0x234))) ||
       ((0.0001 < ABS(fVar3 - fStack_90) || (0.0001 < ABS(*(float *)(param_1 + 0x234) - fStack_90)))
       )) {
      uVar4 = (ulonglong)uVar5;
    }
    else {
      iVar1 = *(int *)(lVar7 + 0x48);
      if ((longlong)iVar1 < 1) {
        uVar4 = (ulonglong)uVar5;
      }
      else {
        lVar6 = 0;
        do {
          lVar2 = *(longlong *)(*(longlong *)(lVar7 + 0x40) + lVar6 * 8);
          if (lVar2 == 0) {
            uVar4 = 0xffffffff;
          }
          else {
            uVar4 = FUN_1423ac950(param_1,*(undefined8 *)(lVar2 + 0x90));
          }
          if ((int)uVar4 != -1) {
            uVar4 = FUN_1423ad020(param_1,local_88,uVar4 & 0xffffffff,param_1 + 0x210);
            local_98 = 0;
            fStack_90 = 0.0;
            if (0.0001 < ABS(fStack_64 * local_68 * fStack_60)) {
              uVar4 = (**(code **)(*param_2 + 0x30))(param_2,lVar2,local_88);
            }
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < iVar1);
        uVar4 = uVar4 >> 8;
      }
    }
  }
  return uVar4 << 8;
}



// FUNCTION 1423a9ec0 FUN_1423a9ec0 body=121 status=ok
// SIG undefined FUN_1423a9ec0(void)

void FUN_1423a9ec0(longlong *param_1)

{
  longlong lVar1;
  LARGE_INTEGER local_res8 [3];
  LARGE_INTEGER local_res20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  *(int *)(*param_1 + 0x110) = (int)param_1[1];
  *(undefined4 *)(*param_1 + 0x114) = *(undefined4 *)((longlong)param_1 + 0xc);
  *(int *)(*param_1 + 0x118) = (int)param_1[2];
  FLinearColor::FLinearColor(&local_18,(longlong)param_1 + 0x14);
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x11c) = local_18;
  *(undefined4 *)(lVar1 + 0x120) = uStack_14;
  *(undefined4 *)(lVar1 + 0x124) = uStack_10;
  *(undefined4 *)(lVar1 + 0x128) = uStack_c;
  QueryPerformanceCounter(local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8[0].s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 1423a9f40 FUN_1423a9f40 body=217 status=ok
// SIG undefined FUN_1423a9f40(void)

bool FUN_1423a9f40(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong local_res8;
  
  if (*(longlong *)(param_1 + 0x718) != 0) {
    lVar3 = param_2;
    if (param_2 != 0) {
      plVar2 = *(longlong **)(param_1 + 0x960);
      plVar4 = plVar2 + (longlong)*(int *)(param_1 + 0x968) * 2;
      for (; plVar2 != plVar4; plVar2 = plVar2 + 2) {
        if (*plVar2 == param_2) goto LAB_1423a9fd0;
      }
      plVar2 = *(longlong **)(param_1 + 0x910);
      plVar4 = plVar2 + (longlong)*(int *)(param_1 + 0x918) * 2;
      for (; plVar2 != plVar4; plVar2 = plVar2 + 2) {
        if (*plVar2 == param_2) goto LAB_1423a9fd0;
      }
    }
    goto LAB_1423a9fd4;
  }
  goto LAB_1423a9ffc;
LAB_1423a9fd0:
  lVar3 = plVar2[1];
LAB_1423a9fd4:
  lVar3 = FUN_142777810(*(longlong *)(param_1 + 0x718),lVar3);
  if (lVar3 != 0) {
    param_2 = *(longlong *)(lVar3 + 0x30);
    goto LAB_1423aa001;
  }
  iVar1 = FUN_1423ac950(param_1,param_2);
  if (iVar1 != -1) goto LAB_1423aa001;
LAB_1423a9ffc:
  local_res8 = 0;
  param_2 = local_res8;
LAB_1423aa001:
  return param_2 != 0;
}



// FUNCTION 1423aa020 DontCompleteUntil body=131 status=ok
// SIG undefined DontCompleteUntil(void)

void FGraphEvent::DontCompleteUntil(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x40) = iVar3 + 1;
  if (*(int *)(param_1 + 0x44) < iVar3 + 1) {
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
              (param_1 + 0x18,iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    lVar4 = param_1 + 0x18;
  }
  plVar2 = (longlong *)(lVar4 + (longlong)iVar3 * 8);
  if (plVar2 != (longlong *)0x0) {
    lVar4 = *param_2;
    *plVar2 = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
      UNLOCK();
    }
  }
  if (*param_2 != 0) {
    LOCK();
    piVar1 = (int *)(*param_2 + 0x48);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      Recycle();
    }
  }
  return;
}



// FUNCTION 1423aa0b0 FUN_1423aa0b0 body=93 status=ok
// SIG undefined FUN_1423aa0b0(void)

void FUN_1423aa0b0(undefined8 param_1)

{
  undefined **local_48;
  undefined8 local_40;
  undefined ***local_10;
  
  local_48 = &PTR_LAB_14506e0b0;
  local_10 = &local_48;
  local_40 = param_1;
  FUN_1422a73c0(7,&local_48);
  local_48 = &PTR_LAB_14506e0e0;
  local_10 = &local_48;
  local_40 = param_1;
  FUN_1422a73c0(6,&local_48);
  return;
}



// FUNCTION 1423aa110 FUN_1423aa110 body=93 status=ok
// SIG undefined FUN_1423aa110(void)

void FUN_1423aa110(undefined8 param_1)

{
  undefined **local_48;
  undefined8 local_40;
  undefined ***local_10;
  
  local_48 = &PTR_LAB_14506e1a0;
  local_10 = &local_48;
  local_40 = param_1;
  FUN_1422a73c0(7,&local_48);
  local_48 = &PTR_LAB_14506e1d0;
  local_10 = &local_48;
  local_40 = param_1;
  FUN_1422a73c0(6,&local_48);
  return;
}



// FUNCTION 1423aa170 FUN_1423aa170 body=48 status=ok
// SIG undefined FUN_1423aa170(void)

void FUN_1423aa170(undefined8 param_1)

{
  undefined **local_48;
  undefined8 local_40;
  undefined ***local_10;
  
  local_48 = &PTR_LAB_14506e140;
  local_10 = &local_48;
  local_40 = param_1;
  FUN_1422a73c0(8,&local_48);
  return;
}



// FUNCTION 1423aa1a0 FUN_1423aa1a0 body=48 status=ok
// SIG undefined FUN_1423aa1a0(void)

void FUN_1423aa1a0(undefined8 param_1)

{
  undefined **local_48;
  undefined8 local_40;
  undefined ***local_10;
  
  local_48 = &PTR_LAB_14506e110;
  local_10 = &local_48;
  local_40 = param_1;
  FUN_1422a73c0(8,&local_48);
  return;
}



// FUNCTION 1423aa1d0 FUN_1423aa1d0 body=48 status=ok
// SIG undefined FUN_1423aa1d0(void)

void FUN_1423aa1d0(undefined8 param_1)

{
  undefined **local_48;
  undefined8 local_40;
  undefined ***local_10;
  
  local_48 = &PTR_LAB_14506e170;
  local_10 = &local_48;
  local_40 = param_1;
  FUN_1422a73c0(8,&local_48);
  return;
}



// FUNCTION 1423aa200 Empty body=54 status=ok
// SIG undefined Empty(void)

void FBaseBlendedCurve<FDefaultAllocator>::Empty(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  return;
}



// FUNCTION 1423aa240 Empty body=181 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
     Empty(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = ConditionalRehash(param_1,param_2,1);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar5 = 0;
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar5;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar4 + uVar3 * 4) = 0xffffffff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 1423aa300 FUN_1423aa300 body=67 status=ok
// SIG undefined FUN_1423aa300(void)

void FUN_1423aa300(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined1 *puVar5;
  
  puVar3 = *(undefined1 **)(param_1 + 0xeb8);
  puVar5 = puVar3 + (longlong)*(int *)(param_1 + 0xec0) * 0x10;
  for (; puVar3 != puVar5; puVar3 = puVar3 + 0x10) {
    if (*(longlong *)(puVar3 + 8) == param_2) {
      *puVar3 = 1;
    }
  }
  lVar1 = *(longlong *)(param_1 + 0xa48);
  if (lVar1 == 0) {
    return;
  }
  pcVar2 = *(char **)(lVar1 + 0x408);
  pcVar4 = pcVar2 + (longlong)*(int *)(lVar1 + 0x410) * 0x10;
  for (; pcVar2 != pcVar4; pcVar2 = pcVar2 + 0x10) {
    if ((*(longlong *)(pcVar2 + 8) == param_2) && (*pcVar2 == '\0')) {
      *pcVar2 = '\x01';
      *(undefined1 *)(lVar1 + 0x428) = 1;
    }
  }
  return;
}



// FUNCTION 1423aa350 FUN_1423aa350 body=185 status=ok
// SIG undefined FUN_1423aa350(void)

void FUN_1423aa350(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  puVar5 = *(undefined1 **)(param_1 + 0xeb8);
  puVar4 = puVar5 + (longlong)*(int *)(param_1 + 0xec0) * 0x10;
  do {
    if (puVar5 == puVar4) {
      if (*(longlong *)(param_1 + 0xa48) != 0) {
        FUN_14225cde0();
      }
      return;
    }
    lVar1 = *(longlong *)(puVar5 + 8);
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x40) != *(int *)(lVar1 + 0x6c))) {
      lVar3 = *(longlong *)(lVar1 + 0x78);
      if (*(longlong *)(lVar1 + 0x78) == 0) {
        lVar3 = lVar1 + 0x70;
      }
      iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                               (longlong)*(int *)(lVar1 + 0x80) - 1U) * 4);
      if (iVar2 != -1) {
        do {
          if (*(longlong *)(*(longlong *)(lVar1 + 0x38) + (longlong)iVar2 * 0x10) == param_2) {
            if (iVar2 != -1) {
              *puVar5 = 1;
            }
            break;
          }
          iVar2 = *(int *)(*(longlong *)(lVar1 + 0x38) + 8 + (longlong)iVar2 * 0x10);
        } while (iVar2 != -1);
      }
    }
    puVar5 = puVar5 + 0x10;
  } while( true );
}



// FUNCTION 1423aa410 FUN_1423aa410 body=161 status=ok
// SIG undefined FUN_1423aa410(void)

void FUN_1423aa410(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  
  if (param_2 != 0) {
    if (((*(longlong *)(param_2 + 0x48) == 0) || (param_3 == 0)) ||
       (cVar1 = FUN_142279890(param_3), cVar1 == '\0')) {
      if (*(longlong *)(param_2 + 0x48) != 0) {
        FBaseBlendedCurve<FDefaultAllocator>::InitFrom
                  (param_6,*(longlong *)(param_2 + 0x48) + 0x240);
      }
    }
    else {
      FUN_1422799a0(param_3,*(byte *)(param_1 + 0xb1c) >> 6 & 1,param_2,param_4,param_6,param_7);
    }
  }
  return;
}



// FUNCTION 1423aa4c0 FUN_1423aa4c0 body=588 status=ok
// SIG undefined FUN_1423aa4c0(void)

void FUN_1423aa4c0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  if ((*(longlong *)(param_1 + 0xa60) != 0) && (*(char *)(param_1 + 0xa68) == '\0')) {
    lVar5 = FUN_142274fe0();
    if (lVar5 != 0) {
      lVar12 = param_3[2];
      if ((((lVar12 == 0) || (cVar4 = FWeakObjectPtr::IsValid(lVar12 + 0x30), cVar4 == '\0')) ||
          (*(longlong *)(lVar12 + 0x48) == 0)) || (*(int *)(lVar12 + 8) < 1)) {
        lVar6 = FUN_142274440(*(undefined8 *)(param_1 + 0xa60));
        lVar12 = 0;
        iVar2 = *(int *)(lVar6 + 0xa8);
        *(undefined4 *)(lVar5 + 0x38) = 0;
        if (*(int *)(lVar5 + 0x3c) < iVar2) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeTo(lVar5 + 0x30);
        }
        iVar2 = *(int *)(lVar6 + 0xa8);
        if (iVar2 != 0) {
          iVar10 = *(int *)(lVar5 + 0x38);
          if (*(int *)(lVar5 + 0x3c) < iVar10 + iVar2) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
            ::ResizeTo(lVar5 + 0x30);
            iVar10 = *(int *)(lVar5 + 0x38);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar10 * 0x30 + *(longlong *)(lVar5 + 0x30)),
                     *(void **)(lVar6 + 0xa0),(longlong)iVar2 * 0x30);
          *(int *)(lVar5 + 0x38) = *(int *)(lVar5 + 0x38) + iVar2;
        }
        if ((*(char *)(lVar6 + 0xd0) != '\0') &&
           (lVar7 = FWeakObjectPtr::Get(lVar6 + 0x38), lVar7 != 0)) {
          uVar8 = FWeakObjectPtr::Get(lVar6 + 0x40);
          plVar9 = (longlong *)USkeleton::GetRefLocalPoses(uVar8,0);
          if (*(uint *)(lVar5 + 0x38) != 0) {
            uVar13 = (ulonglong)*(uint *)(lVar5 + 0x38);
            lVar7 = lVar12;
            do {
              lVar3 = *(longlong *)(lVar5 + 0x30);
              lVar12 = lVar12 + 4;
              puVar11 = (undefined8 *)
                        ((longlong)
                         *(int *)(*(longlong *)(*(longlong *)(lVar5 + 0x40) + 0x70) + -4 + lVar12) *
                         0x30 + *plVar9);
              uVar8 = puVar11[1];
              *(undefined8 *)(lVar7 + lVar3) = *puVar11;
              ((undefined8 *)(lVar7 + lVar3))[1] = uVar8;
              uVar8 = puVar11[3];
              puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar3);
              *puVar1 = puVar11[2];
              puVar1[1] = uVar8;
              uVar8 = puVar11[5];
              puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar3);
              *puVar1 = puVar11[4];
              puVar1[1] = uVar8;
              uVar13 = uVar13 - 1;
              lVar7 = lVar7 + 0x30;
            } while (uVar13 != 0);
          }
        }
        FBaseBlendedCurve<FDefaultAllocator>::InitFrom(lVar5 + 0x48,lVar6 + 0xc0);
      }
      else {
        iVar2 = *(int *)(param_3 + 1);
        _Src = (void *)*param_3;
        *(int *)(lVar5 + 0x38) = iVar2;
        if ((iVar2 == 0) && (*(int *)(lVar5 + 0x3c) == 0)) {
          *(undefined4 *)(lVar5 + 0x3c) = 0;
        }
        else {
          TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(lVar5 + 0x30,iVar2);
          _guard_xfg_dispatch_icall_nop(*(void **)(lVar5 + 0x30),_Src,(longlong)iVar2 * 0x30);
        }
        *(undefined8 *)(lVar5 + 0x40) = param_3[2];
        FBaseBlendedCurve<FDefaultAllocator>::CopyFrom(lVar5 + 0x48,param_4);
      }
    }
    FUN_1423aa410(param_1,param_5,*(undefined8 *)(param_1 + 0xa60),param_2,param_6,param_4,param_3);
  }
  return;
}



// FUNCTION 1423aa710 FUN_1423aa710 body=260 status=ok
// SIG undefined FUN_1423aa710(void)

void FUN_1423aa710(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FMemory::operator_delete(param_1[2],0x130);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_14506d550;
  *(undefined1 *)(param_1 + 3) = 0;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 1423aa820 FUN_1423aa820 body=284 status=ok
// SIG undefined FUN_1423aa820(void)

void FUN_1423aa820(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  DWORD *pDVar7;
  longlong *lpTlsValue;
  longlong *plVar8;
  longlong *plVar9;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar3 = param_1[2];
  uVar4 = *(undefined4 *)((longlong)param_1 + 0x1c);
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar6 = *(undefined4 *)((longlong)param_1 + 0x24);
  *(undefined4 *)(lVar3 + 0x38) = *(undefined4 *)(param_1 + 3);
  *(undefined4 *)(lVar3 + 0x3c) = uVar4;
  *(undefined4 *)(lVar3 + 0x40) = uVar5;
  *(undefined4 *)(lVar3 + 0x44) = uVar6;
  *(undefined4 *)(param_1[2] + 0x104) = *(undefined4 *)(param_1 + 5);
  *(undefined4 *)(param_1[2] + 0x108) = *(undefined4 *)((longlong)param_1 + 0x2c);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_14506d530;
  *(undefined1 *)(param_1 + 6) = 0;
  if (param_1[7] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[7] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar7 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar7);
  plVar9 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar8 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar9;
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = 0;
      plVar8[1] = 0;
      *(undefined4 *)(plVar8 + 2) = 0;
      lpTlsValue = plVar8;
    }
    TlsSetValue(*pDVar7,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar9 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar7 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar9;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 1423aa940 FUN_1423aa940 body=237 status=ok
// SIG undefined FUN_1423aa940(void)

void FUN_1423aa940(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_1423a9ec0(param_1 + 2,param_3,param_1 + 6);
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_14506d540;
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
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 1423aaa30 FUN_1423aaa30 body=286 status=ok
// SIG undefined FUN_1423aaa30(void)

void FUN_1423aaa30(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FUN_1423b3890(param_1[7],*(undefined4 *)(param_1 + 6),param_1[2],param_1[3],param_1[4],param_1[5])
  ;
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_14506d520;
  *(undefined1 *)(param_1 + 8) = 0;
  if (param_1[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[9] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 1423aab50 FUN_1423aab50 body=276 status=ok
// SIG undefined FUN_1423aab50(void)

void FUN_1423aab50(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FSkeletalMeshObject::SetHiddenMaterials(param_1[2],*(undefined4 *)(param_1 + 5),param_1 + 3);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &PTR_FUN_14506c7f0;
  if (param_1[7] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[7] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 1423aac70 ExecuteTask body=269 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FParallelAnimationCompletionTask>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 2);
  if (lVar3 != 0) {
    FUN_1423a6c80(lVar3,1);
  }
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_141591a60(param_1[4],param_2,param_3);
  *param_1 = &PTR_FUN_14506c6e0;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 1423aad80 FUN_1423aad80 body=344 status=ok
// SIG undefined FUN_1423aad80(void)

void FUN_1423aad80(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  long lVar6;
  longlong *plVar7;
  
  lVar6 = (int)param_1 + 0x10;
  lVar3 = FWeakObjectPtr::Get();
  if (lVar3 != 0) {
    if (param_3 != 2) {
      AK::MemoryMgr::StartProfileThreadUsage(lVar6);
    }
    FUN_1423b5d60(lVar3,*(undefined8 *)(lVar3 + 0xe20),*(undefined8 *)(lVar3 + 0xe18),
                  *(undefined1 *)(lVar3 + 0xe55),lVar3 + 0xe28,lVar3 + 0xe38,lVar3 + 0xe48,
                  lVar3 + 0xe58);
  }
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_141591a60(param_1[4],param_2,param_3);
  *param_1 = &PTR_FUN_14506c6d0;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar7 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar7;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar7 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar7;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 1423aaee0 FUN_1423aaee0 body=1733 status=ok
// SIG undefined FUN_1423aaee0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423aaee0(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  float *pfVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  ulonglong uVar15;
  float *pfVar16;
  longlong lVar17;
  int iVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
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
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  
  if (param_2 != 0) {
    puVar3 = (undefined8 *)*param_3;
    puVar4 = (undefined8 *)*param_4;
    iVar18 = 1;
    uVar9 = puVar3[1];
    *puVar4 = *puVar3;
    puVar4[1] = uVar9;
    uVar9 = puVar3[3];
    puVar4[2] = puVar3[2];
    puVar4[3] = uVar9;
    uVar9 = puVar3[5];
    puVar4[4] = puVar3[4];
    puVar4[5] = uVar9;
    fVar13 = fRam0000000146af0cdc;
    fVar12 = fRam0000000146af0cd8;
    fVar11 = fRam0000000146af0cd4;
    fVar10 = _DAT_146af0cd0;
    if (1 < *(int *)(param_1 + 0xbe8)) {
      lVar17 = 2;
      do {
        fVar46 = fRam0000000146af0cf8;
        fVar44 = fRam0000000146af0cf4;
        fVar36 = _DAT_146af0cf0;
        fVar64 = fRam0000000146af0bf8;
        fVar63 = fRam0000000146af0bf4;
        fVar62 = _DAT_146af0bf0;
        uVar15 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0xbe0) + lVar17);
        pfVar16 = (float *)(puVar4 + (longlong)
                                     *(int *)(*(longlong *)(param_2 + 0x158) + 8 + uVar15 * 0x10) *
                                     6);
        auVar19 = *(undefined1 (*) [16])(puVar3 + uVar15 * 6 + 4);
        fVar33 = auVar19._0_4_;
        fVar35 = auVar19._4_4_;
        fVar45 = auVar19._8_4_;
        fVar48 = auVar19._12_4_;
        auVar20 = *(undefined1 (*) [16])(pfVar16 + 8);
        fVar34 = auVar20._0_4_;
        fVar37 = auVar20._4_4_;
        fVar47 = auVar20._8_4_;
        fVar49 = auVar20._12_4_;
        auVar19 = minps(auVar19,auVar20);
        auVar20._4_4_ = -(uint)(auVar19._4_4_ < fRam0000000146af0cf4);
        auVar20._0_4_ = -(uint)(auVar19._0_4_ < _DAT_146af0cf0);
        auVar20._8_4_ = -(uint)(auVar19._8_4_ < fRam0000000146af0cf8);
        auVar20._12_4_ = -(uint)(auVar19._12_4_ < fRam0000000146af0cfc);
        iVar14 = movmskps((int)*(longlong *)(param_2 + 0x158),auVar20);
        if (iVar14 == 0) {
          fVar62 = *pfVar16;
          fVar63 = pfVar16[1];
          fVar64 = pfVar16[2];
          fVar36 = pfVar16[3];
          pfVar1 = (float *)(puVar3 + uVar15 * 6);
          fVar44 = *pfVar1;
          fVar46 = pfVar1[1];
          fVar27 = pfVar1[2];
          fVar30 = pfVar1[3];
          pfVar1 = (float *)(puVar3 + uVar15 * 6 + 2);
          fVar39 = pfVar16[4];
          fVar21 = pfVar16[5];
          fVar7 = pfVar16[6];
          fVar8 = pfVar16[7];
          fVar43 = fVar34 * *pfVar1;
          fVar50 = fVar37 * pfVar1[1];
          fVar51 = fVar47 * pfVar1[2];
          fVar52 = fVar49 * pfVar1[3];
          fVar53 = fVar30 * fVar62 * _DAT_146af0cb0;
          fVar54 = fVar27 * fVar62 * fRam0000000146af0cb4;
          fVar55 = fVar46 * fVar62 * fRam0000000146af0cb8;
          fVar56 = fVar44 * fVar62 * fRam0000000146af0cbc;
          fVar23 = fVar27 * fVar63 * _DAT_146af0ca0;
          fVar22 = fVar30 * fVar63 * fRam0000000146af0ca4;
          fVar31 = fVar44 * fVar63 * fRam0000000146af0ca8;
          fVar28 = fVar46 * fVar63 * fRam0000000146af0cac;
          fVar32 = fVar46 * fVar64 * _DAT_146af0c90;
          fVar26 = fVar44 * fVar64 * fRam0000000146af0c94;
          fVar29 = fVar30 * fVar64 * fRam0000000146af0c98;
          fVar38 = fVar27 * fVar64 * fRam0000000146af0c9c;
          pfVar16 = (float *)(puVar4 + uVar15 * 6 + 4);
          *pfVar16 = fVar33 * fVar34;
          pfVar16[1] = fVar35 * fVar37;
          pfVar16[2] = fVar45 * fVar47;
          pfVar16[3] = fVar48 * fVar49;
          fVar32 = fVar53 + fVar36 * fVar44 + fVar23 + fVar32;
          fVar26 = fVar54 + fVar36 * fVar46 + fVar22 + fVar26;
          fVar29 = fVar55 + fVar36 * fVar27 + fVar31 + fVar29;
          fVar38 = fVar56 + fVar36 * fVar30 + fVar28 + fVar38;
          fVar33 = fVar51 * fVar63 - fVar50 * fVar64;
          fVar34 = fVar43 * fVar64 - fVar51 * fVar62;
          fVar35 = fVar50 * fVar62 - fVar43 * fVar63;
          fVar37 = fVar52 * fVar36 - fVar52 * fVar36;
          fVar33 = fVar33 + fVar33;
          fVar34 = fVar34 + fVar34;
          fVar35 = fVar35 + fVar35;
          fVar37 = fVar37 + fVar37;
          pfVar16 = (float *)(puVar4 + uVar15 * 6 + 2);
          *pfVar16 = (fVar35 * fVar63 - fVar34 * fVar64) + fVar33 * fVar36 + fVar43 + fVar39;
          pfVar16[1] = (fVar33 * fVar64 - fVar35 * fVar62) + fVar34 * fVar36 + fVar50 + fVar21;
          pfVar16[2] = (fVar34 * fVar62 - fVar33 * fVar63) + fVar35 * fVar36 + fVar51 + fVar7;
          pfVar16[3] = (fVar37 * fVar36 - fVar37 * fVar36) + fVar37 * fVar36 + fVar52 + fVar8;
        }
        else {
          fVar27 = *pfVar16;
          fVar30 = pfVar16[1];
          fVar39 = pfVar16[2];
          fVar21 = pfVar16[3];
          fVar7 = pfVar16[4];
          fVar8 = pfVar16[5];
          fVar23 = pfVar16[6];
          fVar26 = fVar30 + fVar30;
          fVar29 = fVar39 + fVar39;
          fVar43 = fVar27 * (fVar27 + fVar27);
          fVar38 = fVar21 * (fVar27 + fVar27);
          pfVar16 = (float *)(puVar3 + uVar15 * 6);
          fVar22 = *pfVar16;
          fVar31 = pfVar16[1];
          fVar28 = pfVar16[2];
          fVar32 = pfVar16[3];
          fVar59 = (fVar21 * fVar29 + fVar27 * fVar26) * fVar34;
          fVar60 = (fVar38 + fVar30 * fVar29) * fVar37;
          fVar61 = (fVar21 * fVar26 + fVar27 * fVar29) * fVar47;
          fVar50 = fVar37 * (fVar27 * fVar26 - fVar21 * fVar29);
          fVar52 = fVar47 * (fVar30 * fVar29 - fVar38);
          fVar54 = fVar34 * (fVar27 * fVar29 - fVar21 * fVar26);
          fVar21 = (float)((uint)((_DAT_146af0bf0 - (fVar39 * fVar29 + fVar30 * fVar26)) * fVar34) &
                          _DAT_146af0c00);
          fVar29 = (float)((uint)((fRam0000000146af0bf4 - (fVar39 * fVar29 + fVar43)) * fVar37) &
                          uRam0000000146af0c04);
          fVar26 = (float)((uint)((fRam0000000146af0bf8 - (fVar30 * fVar26 + fVar43)) * fVar47) &
                          uRam0000000146af0c08);
          fVar38 = (float)((uint)((fRam0000000146af0bfc - (fVar43 + fVar43)) * fVar49) &
                          uRam0000000146af0c0c);
          fVar27 = fVar31 + fVar31;
          fVar30 = fVar28 + fVar28;
          fVar43 = fVar22 * (fVar22 + fVar22);
          fVar39 = fVar32 * (fVar22 + fVar22);
          fVar56 = (fVar32 * fVar30 + fVar22 * fVar27) * fVar33;
          fVar57 = (fVar39 + fVar31 * fVar30) * fVar35;
          fVar58 = (fVar32 * fVar27 + fVar22 * fVar30) * fVar45;
          fVar51 = fVar35 * (fVar22 * fVar27 - fVar32 * fVar30);
          fVar53 = fVar45 * (fVar31 * fVar30 - fVar39);
          fVar55 = fVar33 * (fVar22 * fVar30 - fVar32 * fVar27);
          fVar22 = (float)((uint)((_DAT_146af0bf0 - (fVar28 * fVar30 + fVar31 * fVar27)) * fVar33) &
                          _DAT_146af0c00);
          fVar28 = (float)((uint)((fRam0000000146af0bf4 - (fVar28 * fVar30 + fVar43)) * fVar35) &
                          uRam0000000146af0c04);
          fVar31 = (float)((uint)((fRam0000000146af0bf8 - (fVar31 * fVar27 + fVar43)) * fVar45) &
                          uRam0000000146af0c08);
          fVar32 = (float)((uint)((fRam0000000146af0bfc - (fVar43 + fVar43)) * fVar48) &
                          uRam0000000146af0c0c);
          pfVar16 = (float *)(puVar3 + uVar15 * 6 + 2);
          fVar27 = *pfVar16;
          fVar30 = pfVar16[1];
          fVar39 = pfVar16[2];
          local_108 = fVar56 * fVar50 + fVar22 * fVar21 + fVar55 * fVar61 + fVar32 * fVar7;
          fStack_104 = fVar56 * fVar29 + fVar22 * fVar59 + fVar55 * fVar52 + fVar32 * fVar8;
          fStack_100 = fVar56 * fVar60 + fVar22 * fVar54 + fVar55 * fVar26 + fVar32 * fVar23;
          fStack_fc = fVar56 * fVar38 + fVar22 * fVar38 + fVar55 * fVar38 +
                      fVar32 * fRam0000000146af0bfc;
          local_f8 = fVar28 * fVar50 + fVar51 * fVar21 + fVar57 * fVar61 + fVar32 * fVar7;
          fStack_f4 = fVar28 * fVar29 + fVar51 * fVar59 + fVar57 * fVar52 + fVar32 * fVar8;
          fStack_f0 = fVar28 * fVar60 + fVar51 * fVar54 + fVar57 * fVar26 + fVar32 * fVar23;
          fStack_ec = fVar28 * fVar38 + fVar51 * fVar38 + fVar57 * fVar38 +
                      fVar32 * fRam0000000146af0bfc;
          local_e8 = fVar53 * fVar50 + fVar58 * fVar21 + fVar31 * fVar61 + fVar32 * fVar7;
          fStack_e4 = fVar53 * fVar29 + fVar58 * fVar59 + fVar31 * fVar52 + fVar32 * fVar8;
          fStack_e0 = fVar53 * fVar60 + fVar58 * fVar54 + fVar31 * fVar26 + fVar32 * fVar23;
          fStack_dc = fVar53 * fVar38 + fVar58 * fVar38 + fVar31 * fVar38 +
                      fVar32 * fRam0000000146af0bfc;
          local_d8 = fVar30 * fVar50 + fVar27 * fVar21 + fVar39 * fVar61 +
                     fRam0000000146af0bfc * fVar7;
          fStack_d4 = fVar30 * fVar29 + fVar27 * fVar59 + fVar39 * fVar52 +
                      fRam0000000146af0bfc * fVar8;
          fStack_d0 = fVar30 * fVar60 + fVar27 * fVar54 + fVar39 * fVar26 +
                      fRam0000000146af0bfc * fVar23;
          fStack_cc = fVar30 * fVar38 + fVar27 * fVar38 + fVar39 * fVar38 +
                      fRam0000000146af0bfc * fRam0000000146af0bfc;
          FMatrix::RemoveScaling(&local_108);
          fVar62 = (float)(-(uint)(fVar36 <= fVar34 * fVar33) & (_DAT_146af0ce0 ^ (uint)fVar62) ^
                          _DAT_146af0ce0);
          fVar63 = (float)(-(uint)(fVar44 <= fVar37 * fVar35) &
                           (uRam0000000146af0ce4 ^ (uint)fVar63) ^ uRam0000000146af0ce4);
          fVar64 = (float)(-(uint)(fVar46 <= fVar47 * fVar45) &
                           (uRam0000000146af0ce8 ^ (uint)fVar64) ^ uRam0000000146af0ce8);
          local_108 = local_108 * fVar62;
          fStack_100 = fStack_100 * fVar62;
          fStack_104 = fStack_104 * fVar62;
          fStack_f0 = fStack_f0 * fVar63;
          fStack_f4 = fStack_f4 * fVar63;
          local_f8 = local_f8 * fVar63;
          fStack_e0 = fStack_e0 * fVar64;
          local_e8 = local_e8 * fVar64;
          fStack_e4 = fStack_e4 * fVar64;
          FQuat::FQuat(&local_118,&local_108);
          auVar24._0_4_ = local_118 * local_118 + fStack_110 * fStack_110;
          auVar24._4_4_ = fStack_114 * fStack_114 + fStack_10c * fStack_10c;
          auVar24._8_4_ = fStack_110 * fStack_110 + local_118 * local_118;
          auVar24._12_4_ = fStack_10c * fStack_10c + fStack_114 * fStack_114;
          fVar44 = auVar24._4_4_ + auVar24._0_4_;
          fVar46 = auVar24._8_4_ + auVar24._4_4_;
          fVar27 = auVar24._12_4_ + auVar24._8_4_;
          fVar30 = auVar24._0_4_ + auVar24._12_4_;
          auVar5._4_4_ = fVar46;
          auVar5._0_4_ = fVar44;
          auVar5._8_4_ = fVar27;
          auVar5._12_4_ = fVar30;
          auVar19 = rsqrtps(auVar24,auVar5);
          fVar62 = auVar19._0_4_;
          fVar63 = auVar19._4_4_;
          fVar64 = auVar19._8_4_;
          fVar36 = auVar19._12_4_;
          fVar62 = (fVar10 - fVar62 * fVar62 * fVar44 * fVar10) * fVar62 + fVar62;
          fVar63 = (fVar11 - fVar63 * fVar63 * fVar46 * fVar11) * fVar63 + fVar63;
          fVar64 = (fVar12 - fVar64 * fVar64 * fVar27 * fVar12) * fVar64 + fVar64;
          fVar36 = (fVar13 - fVar36 * fVar36 * fVar30 * fVar13) * fVar36 + fVar36;
          auVar19._4_4_ = fStack_d4;
          auVar19._0_4_ = local_d8;
          auVar19._8_4_ = fStack_d0;
          fVar32 = (float)(((uint)(((fVar10 - fVar62 * fVar62 * fVar44 * fVar10) * fVar62 + fVar62)
                                  * local_118) ^ _DAT_146af0cc0) & -(uint)(1e-08 <= fVar44) ^
                          _DAT_146af0cc0);
          fVar26 = (float)(((uint)(((fVar11 - fVar63 * fVar63 * fVar46 * fVar11) * fVar63 + fVar63)
                                  * fStack_114) ^ uRam0000000146af0cc4) & -(uint)(1e-08 <= fVar46) ^
                          uRam0000000146af0cc4);
          fVar29 = (float)(((uint)(((fVar12 - fVar64 * fVar64 * fVar27 * fVar12) * fVar64 + fVar64)
                                  * fStack_110) ^ uRam0000000146af0cc8) & -(uint)(1e-08 <= fVar27) ^
                          uRam0000000146af0cc8);
          fVar38 = (float)(((uint)(((fVar13 - fVar36 * fVar36 * fVar30 * fVar13) * fVar36 + fVar36)
                                  * fStack_10c) ^ uRam0000000146af0ccc) & -(uint)(1e-08 <= fVar30) ^
                          uRam0000000146af0ccc);
          auVar19._12_4_ = 0;
          *(undefined1 (*) [16])(puVar4 + uVar15 * 6 + 2) = auVar19;
          pfVar16 = (float *)(puVar4 + uVar15 * 6 + 4);
          *pfVar16 = fVar34 * fVar33;
          pfVar16[1] = fVar37 * fVar35;
          pfVar16[2] = fVar47 * fVar45;
          pfVar16[3] = fVar49 * fVar48;
          local_118 = fVar32;
          fStack_114 = fVar26;
          fStack_110 = fVar29;
          fStack_10c = fVar38;
        }
        pfVar16 = (float *)(puVar4 + uVar15 * 6);
        *pfVar16 = fVar32;
        pfVar16[1] = fVar26;
        pfVar16[2] = fVar29;
        pfVar16[3] = fVar38;
        iVar18 = iVar18 + 1;
        lVar17 = lVar17 + 2;
        auVar25._0_4_ = fVar32 * fVar32 + fVar29 * fVar29;
        auVar25._4_4_ = fVar26 * fVar26 + fVar38 * fVar38;
        auVar25._8_4_ = fVar29 * fVar29 + fVar32 * fVar32;
        auVar25._12_4_ = fVar38 * fVar38 + fVar26 * fVar26;
        fVar45 = auVar25._4_4_ + auVar25._0_4_;
        fVar47 = auVar25._8_4_ + auVar25._4_4_;
        fVar48 = auVar25._12_4_ + auVar25._8_4_;
        fVar49 = auVar25._0_4_ + auVar25._12_4_;
        auVar6._4_4_ = fVar47;
        auVar6._0_4_ = fVar45;
        auVar6._8_4_ = fVar48;
        auVar6._12_4_ = fVar49;
        auVar19 = rsqrtps(auVar25,auVar6);
        fVar33 = auVar19._0_4_;
        fVar34 = auVar19._4_4_;
        fVar35 = auVar19._8_4_;
        fVar37 = auVar19._12_4_;
        fVar33 = (fVar10 - fVar33 * fVar33 * fVar45 * fVar10) * fVar33 + fVar33;
        fVar34 = (fVar11 - fVar34 * fVar34 * fVar47 * fVar11) * fVar34 + fVar34;
        fVar35 = (fVar12 - fVar35 * fVar35 * fVar48 * fVar12) * fVar35 + fVar35;
        fVar37 = (fVar13 - fVar37 * fVar37 * fVar49 * fVar13) * fVar37 + fVar37;
        uVar40 = ((uint)(((fVar11 - fVar34 * fVar34 * fVar47 * fVar11) * fVar34 + fVar34) * fVar26)
                 ^ uRam0000000146af0cc4) & -(uint)(fRam0000000146af0d04 <= fVar47) ^
                 uRam0000000146af0cc4;
        uVar41 = ((uint)(((fVar12 - fVar35 * fVar35 * fVar48 * fVar12) * fVar35 + fVar35) * fVar29)
                 ^ uRam0000000146af0cc8) & -(uint)(fRam0000000146af0d08 <= fVar48) ^
                 uRam0000000146af0cc8;
        uVar42 = ((uint)(((fVar13 - fVar37 * fVar37 * fVar49 * fVar13) * fVar37 + fVar37) * fVar38)
                 ^ uRam0000000146af0ccc) & -(uint)(fRam0000000146af0d0c <= fVar49) ^
                 uRam0000000146af0ccc;
        puVar2 = (uint *)(puVar4 + uVar15 * 6);
        *puVar2 = ((uint)(((fVar10 - fVar33 * fVar33 * fVar45 * fVar10) * fVar33 + fVar33) * fVar32)
                  ^ _DAT_146af0cc0) & -(uint)(_DAT_146af0d00 <= fVar45) ^ _DAT_146af0cc0;
        puVar2[1] = uVar40;
        puVar2[2] = uVar41;
        puVar2[3] = uVar42;
      } while (iVar18 < *(int *)(param_1 + 0xbe8));
    }
  }
  return;
}



// FUNCTION 1423ab5b0 FUN_1423ab5b0 body=34 status=ok
// SIG undefined FUN_1423ab5b0(void)

void FUN_1423ab5b0(longlong param_1)

{
  FUN_1423ac670();
  *(undefined1 *)(param_1 + 0x768) = 1;
  FUN_1423a75f0(param_1);
  return;
}



// FUNCTION 1423ab5e0 FUN_1423ab5e0 body=27 status=ok
// SIG undefined FUN_1423ab5e0(void)

void FUN_1423ab5e0(longlong param_1)

{
  FUN_1423ac670();
  *(undefined1 *)(param_1 + 0x768) = 1;
  return;
}



// FUNCTION 1423ab600 FUN_1423ab600 body=521 status=ok
// SIG undefined FUN_1423ab600(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423ab600(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  char cVar14;
  uint uVar15;
  undefined8 *puVar16;
  float *pfVar17;
  float *pfVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
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
  
  plVar1 = (longlong *)(param_2 + 0x168);
  TArray<FTransform,FDefaultAllocator>::operator=(param_3,plVar1);
  lVar20 = param_5[2];
  if ((((lVar20 != 0) &&
       (cVar14 = FWeakObjectPtr::IsValid(lVar20 + 0x30), fVar13 = fRam0000000146af0d0c,
       fVar12 = fRam0000000146af0d08, fVar11 = fRam0000000146af0d04, fVar10 = _DAT_146af0d00,
       fVar9 = fRam0000000146af0cdc, fVar8 = fRam0000000146af0cd8, fVar6 = fRam0000000146af0cd4,
       fVar5 = _DAT_146af0cd0, cVar14 != '\0')) && (*(longlong *)(lVar20 + 0x48) != 0)) &&
     (0 < *(int *)(lVar20 + 8))) {
    uVar15 = *(uint *)(param_5 + 1);
    if (0 < (int)uVar15) {
      pfVar18 = (float *)*param_5;
      pfVar17 = pfVar18 + (longlong)(int)uVar15 * 0xc;
      if (pfVar18 != pfVar17) {
        do {
          fVar4 = *pfVar18;
          fVar28 = pfVar18[1];
          fVar29 = pfVar18[2];
          fVar30 = pfVar18[3];
          auVar22._0_4_ = fVar4 * fVar4 + fVar29 * fVar29;
          auVar22._4_4_ = fVar28 * fVar28 + fVar30 * fVar30;
          auVar22._8_4_ = fVar29 * fVar29 + fVar4 * fVar4;
          auVar22._12_4_ = fVar30 * fVar30 + fVar28 * fVar28;
          fVar31 = auVar22._4_4_ + auVar22._0_4_;
          fVar32 = auVar22._8_4_ + auVar22._4_4_;
          fVar33 = auVar22._12_4_ + auVar22._8_4_;
          fVar34 = auVar22._0_4_ + auVar22._12_4_;
          auVar23._4_4_ = fVar32;
          auVar23._0_4_ = fVar31;
          auVar23._8_4_ = fVar33;
          auVar23._12_4_ = fVar34;
          auVar23 = rsqrtps(auVar22,auVar23);
          fVar24 = auVar23._0_4_;
          fVar25 = auVar23._4_4_;
          fVar26 = auVar23._8_4_;
          fVar27 = auVar23._12_4_;
          fVar24 = (fVar5 - fVar24 * fVar24 * fVar31 * fVar5) * fVar24 + fVar24;
          fVar25 = (fVar6 - fVar25 * fVar25 * fVar32 * fVar6) * fVar25 + fVar25;
          fVar26 = (fVar8 - fVar26 * fVar26 * fVar33 * fVar8) * fVar26 + fVar26;
          fVar27 = (fVar9 - fVar27 * fVar27 * fVar34 * fVar9) * fVar27 + fVar27;
          fVar28 = (float)(((uint)(((fVar6 - fVar25 * fVar25 * fVar32 * fVar6) * fVar25 + fVar25) *
                                  fVar28) ^ uRam0000000146af0cc4) & -(uint)(fVar11 <= fVar32) ^
                          uRam0000000146af0cc4);
          fVar29 = (float)(((uint)(((fVar8 - fVar26 * fVar26 * fVar33 * fVar8) * fVar26 + fVar26) *
                                  fVar29) ^ uRam0000000146af0cc8) & -(uint)(fVar12 <= fVar33) ^
                          uRam0000000146af0cc8);
          fVar30 = (float)(((uint)(((fVar9 - fVar27 * fVar27 * fVar34 * fVar9) * fVar27 + fVar27) *
                                  fVar30) ^ uRam0000000146af0ccc) & -(uint)(fVar13 <= fVar34) ^
                          uRam0000000146af0ccc);
          *pfVar18 = (float)(((uint)(((fVar5 - fVar24 * fVar24 * fVar31 * fVar5) * fVar24 + fVar24)
                                    * fVar4) ^ _DAT_146af0cc0) & -(uint)(fVar10 <= fVar31) ^
                            _DAT_146af0cc0);
          pfVar18[1] = fVar28;
          pfVar18[2] = fVar29;
          pfVar18[3] = fVar30;
          pfVar18 = pfVar18 + 0xc;
        } while (pfVar18 != pfVar17);
        uVar15 = *(uint *)(param_5 + 1);
      }
      if (uVar15 != 0) {
        lVar20 = 0;
        uVar21 = (ulonglong)uVar15;
        lVar19 = lVar20;
        do {
          lVar3 = *param_5;
          lVar20 = lVar20 + 2;
          uVar7 = ((undefined8 *)(lVar19 + lVar3))[1];
          puVar16 = (undefined8 *)
                    ((ulonglong)*(ushort *)(*(longlong *)param_5[2] + -2 + lVar20) * 0x30 + *param_3
                    );
          *puVar16 = *(undefined8 *)(lVar19 + lVar3);
          puVar16[1] = uVar7;
          puVar2 = (undefined8 *)(lVar19 + 0x10 + lVar3);
          uVar7 = puVar2[1];
          puVar16[2] = *puVar2;
          puVar16[3] = uVar7;
          puVar2 = (undefined8 *)(lVar19 + 0x20 + lVar3);
          uVar7 = puVar2[1];
          puVar16[4] = *puVar2;
          puVar16[5] = uVar7;
          uVar21 = uVar21 - 1;
          lVar19 = lVar19 + 0x30;
        } while (uVar21 != 0);
      }
      goto LAB_1423ab7a3;
    }
  }
  TArray<FTransform,FDefaultAllocator>::operator=(param_3,plVar1);
LAB_1423ab7a3:
  lVar20 = *plVar1;
  fVar5 = *(float *)(lVar20 + 0x18);
  lVar19 = *param_3;
  fVar6 = *(float *)(lVar19 + 0x18);
  *param_4 = CONCAT44(*(float *)(lVar19 + 0x14) - *(float *)(lVar20 + 0x14),
                      *(float *)(lVar19 + 0x10) - *(float *)(lVar20 + 0x10));
  *(float *)(param_4 + 1) = fVar6 - fVar5;
  return;
}



// FUNCTION 1423ab810 FUN_1423ab810 body=2345 status=ok
// SIG undefined FUN_1423ab810(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1423ab810(longlong param_1,undefined8 *param_2,float *param_3,undefined8 *param_4,float param_5,
             byte param_6)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  float *pfVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar20 [16];
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
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar36;
  float fVar41;
  float fVar42;
  undefined1 in_XMM5 [16];
  undefined1 auVar37 [16];
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
  int local_138;
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
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  
  uVar11 = 0;
  if (*(longlong *)(param_1 + 0x718) != 0) {
    lVar12 = *(longlong *)(param_1 + 0x828);
    if (lVar12 == 0) {
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x718) + 0x100);
    }
    if ((param_6 == 0) || (lVar12 != 0)) {
      auVar37 = *(undefined1 (*) [16])(param_1 + 0x230);
      fVar57 = auVar37._0_4_;
      fVar39 = auVar37._4_4_;
      fVar58 = auVar37._8_4_;
      fVar47 = *(float *)(param_1 + 0x210) * _DAT_146af0eb0;
      fVar48 = *(float *)(param_1 + 0x214) * fRam0000000146af0eb4;
      fVar49 = *(float *)(param_1 + 0x218) * fRam0000000146af0eb8;
      fVar50 = *(float *)(param_1 + 0x21c) * fRam0000000146af0ebc;
      lVar14 = (longlong)*(int *)(param_1 + 0x770);
      auVar37 = rcpps(in_XMM5,auVar37);
      iVar5 = -1;
      local_138 = -1;
      fVar51 = (float)((uint)(*param_3 - *(float *)(param_1 + 0x220)) & _DAT_146af0c00);
      fVar52 = (float)((uint)(param_3[1] - *(float *)(param_1 + 0x224)) & uRam0000000146af0c04);
      fVar53 = (float)((uint)(param_3[2] - *(float *)(param_1 + 0x228)) & uRam0000000146af0c08);
      fVar27 = fVar53 * fVar48 - fVar52 * fVar49;
      fVar29 = fVar51 * fVar49 - fVar53 * fVar47;
      fVar30 = fVar52 * fVar47 - fVar51 * fVar48;
      fVar34 = auVar37._0_4_;
      fVar38 = auVar37._4_4_;
      fVar41 = auVar37._8_4_;
      fVar27 = fVar27 + fVar27;
      fVar29 = fVar29 + fVar29;
      fVar30 = fVar30 + fVar30;
      fVar34 = (fVar34 + fVar34) - fVar34 * fVar34 * fVar57;
      fVar38 = (fVar38 + fVar38) - fVar38 * fVar38 * fVar39;
      fVar41 = (fVar41 + fVar41) - fVar41 * fVar41 * fVar58;
      bVar1 = (float)((uint)fVar39 & uRam0000000146af0d14) <= fRam0000000146af0ea4;
      fVar34 = (fVar34 + fVar34) - fVar34 * fVar34 * fVar57;
      fVar39 = (fVar38 + fVar38) - fVar38 * fVar38 * fVar39;
      fVar38 = (fVar41 + fVar41) - fVar41 * fVar41 * fVar58;
      fStack_120 = ((fVar29 * fVar47 - fVar27 * fVar48) + fVar50 * fVar30 + fVar53) *
                   (float)(-(uint)((float)((uint)fVar58 & uRam0000000146af0d18) <=
                                  fRam0000000146af0ea8) & (uint)fVar38 ^ (uint)fVar38);
      *param_3 = ((fVar30 * fVar48 - fVar29 * fVar49) + fVar50 * fVar27 + fVar51) *
                 (float)(-(uint)((float)((uint)fVar57 & _DAT_146af0d10) <= _DAT_146af0ea0) &
                         (uint)fVar34 ^ (uint)fVar34);
      param_3[1] = ((fVar27 * fVar49 - fVar30 * fVar47) + fVar50 * fVar29 + fVar52) *
                   (float)(-(uint)bVar1 & (uint)fVar39 ^ (uint)fVar39);
      param_3[2] = fStack_120;
      fVar30 = fRam0000000146af0cf8;
      fVar29 = fRam0000000146af0cf4;
      fVar27 = _DAT_146af0cf0;
      fVar58 = fRam0000000146af0bf8;
      fVar39 = fRam0000000146af0bf4;
      fVar57 = _DAT_146af0bf0;
      iVar6 = *(int *)((lVar14 + 0x73) * 0x10 + param_1);
      if (0 < iVar6) {
        uVar13 = uVar11;
        uVar15 = uVar11;
        fVar34 = 3.4e+38;
        do {
          bVar16 = param_6 ^ 1;
          if (param_6 != 0) {
            lVar8 = *(longlong *)(uVar15 + *(longlong *)(*(longlong *)(param_1 + 0x718) + 0x158));
            if (*(int *)(lVar12 + 0x70) != *(int *)(lVar12 + 0x9c)) {
              lVar7 = *(longlong *)(lVar12 + 0xa8);
              if (*(longlong *)(lVar12 + 0xa8) == 0) {
                lVar7 = lVar12 + 0xa0;
              }
              iVar5 = *(int *)(lVar7 + ((longlong)((int)((ulonglong)lVar8 >> 0x20) + (int)lVar8) &
                                       (longlong)*(int *)(lVar12 + 0xb0) - 1U) * 4);
              if (iVar5 != -1) {
                do {
                  lVar7 = *(longlong *)(lVar12 + 0x68) + (longlong)iVar5 * 0x18;
                  if (*(longlong *)(*(longlong *)(lVar12 + 0x68) + (longlong)iVar5 * 0x18) == lVar8)
                  {
                    if (iVar5 != -1) goto LAB_1423aba94;
                    break;
                  }
                  iVar5 = *(int *)(lVar7 + 0x10);
                } while (iVar5 != -1);
              }
            }
            lVar7 = 0;
LAB_1423aba94:
            lVar8 = lVar7 + 8;
            if (lVar7 == 0) {
              lVar8 = 0;
            }
            bVar16 = lVar8 != 0;
            iVar5 = local_138;
          }
          iVar10 = (int)uVar11;
          fVar38 = fVar34;
          iVar4 = local_138;
          if (bVar16 != 0) {
            if (param_5 < 0.0) {
LAB_1423abb5a:
              pfVar9 = (float *)(*(longlong *)(param_1 + 0x728 + lVar14 * 0x10) + 0x10 + uVar13);
              fVar38 = (param_3[1] - pfVar9[1]) * (param_3[1] - pfVar9[1]) +
                       (*param_3 - *pfVar9) * (*param_3 - *pfVar9) +
                       (param_3[2] - pfVar9[2]) * (param_3[2] - pfVar9[2]);
              iVar5 = iVar10;
              iVar4 = iVar10;
              if (fVar38 < fVar34) goto LAB_1423abbbb;
            }
            else {
              lVar8 = *(longlong *)(lVar14 * 0x10 + 0x728 + param_1);
              pfVar9 = (float *)(uVar13 + 0x20 + lVar8);
              fVar52 = *pfVar9 * 1.0;
              fVar53 = pfVar9[1] * 0.0;
              fVar45 = pfVar9[2] * 0.0;
              pfVar9 = (float *)(uVar13 + lVar8);
              fVar38 = *pfVar9;
              fVar41 = pfVar9[1];
              fVar47 = pfVar9[2];
              fVar48 = pfVar9[3];
              fVar49 = fVar45 * fVar41 - fVar53 * fVar47;
              fVar50 = fVar52 * fVar47 - fVar45 * fVar38;
              fVar51 = fVar53 * fVar38 - fVar52 * fVar41;
              fVar49 = fVar49 + fVar49;
              fVar50 = fVar50 + fVar50;
              fVar51 = fVar51 + fVar51;
              fVar52 = (fVar51 * fVar41 - fVar50 * fVar47) + fVar48 * fVar49 + fVar52;
              fVar47 = (fVar49 * fVar47 - fVar51 * fVar38) + fVar48 * fVar50 + fVar53;
              fVar38 = (fVar50 * fVar38 - fVar49 * fVar41) + fVar48 * fVar51 + fVar45;
              if (param_5 * param_5 < fVar47 * fVar47 + fVar52 * fVar52 + fVar38 * fVar38)
              goto LAB_1423abb5a;
            }
            fVar38 = fVar34;
            iVar5 = local_138;
            iVar4 = local_138;
          }
LAB_1423abbbb:
          local_138 = iVar4;
          uVar11 = (ulonglong)(iVar10 + 1U);
          uVar15 = uVar15 + 0x10;
          uVar13 = uVar13 + 0x30;
          fVar34 = fVar38;
        } while ((int)(iVar10 + 1U) < iVar6);
        if (iVar5 != -1) {
          if (param_4 != (undefined8 *)0x0) {
            fVar50 = *(float *)(param_1 + 0x210);
            fVar51 = *(float *)(param_1 + 0x214);
            fVar52 = *(float *)(param_1 + 0x218);
            fVar53 = *(float *)(param_1 + 0x21c);
            auVar37 = *(undefined1 (*) [16])(param_1 + 0x230);
            fVar34 = auVar37._0_4_;
            fVar41 = auVar37._4_4_;
            fVar48 = auVar37._8_4_;
            pfVar9 = (float *)((longlong)iVar5 * 0x30 +
                              *(longlong *)(param_1 + 0x728 + lVar14 * 0x10));
            auVar20 = *(undefined1 (*) [16])(pfVar9 + 8);
            fVar38 = auVar20._0_4_;
            fVar47 = auVar20._4_4_;
            fVar49 = auVar20._8_4_;
            auVar17 = minps(auVar20,auVar37);
            auVar18._4_4_ = -(uint)(auVar17._4_4_ < fRam0000000146af0cf4);
            auVar18._0_4_ = -(uint)(auVar17._0_4_ < _DAT_146af0cf0);
            auVar18._8_4_ = -(uint)(auVar17._8_4_ < fRam0000000146af0cf8);
            auVar18._12_4_ = -(uint)(auVar17._12_4_ < fRam0000000146af0cfc);
            iVar6 = movmskps((uint)(param_6 ^ 1),auVar18);
            if (iVar6 == 0) {
              fVar34 = pfVar9[4] * fVar34;
              fVar41 = pfVar9[5] * fVar41;
              fVar48 = pfVar9[6] * fVar48;
              fVar57 = fVar48 * fVar51 - fVar41 * fVar52;
              fVar39 = fVar34 * fVar52 - fVar48 * fVar50;
              fVar58 = fVar41 * fVar50 - fVar34 * fVar51;
              fVar57 = fVar57 + fVar57;
              fVar39 = fVar39 + fVar39;
              fVar58 = fVar58 + fVar58;
              uVar36 = CONCAT44((fVar57 * fVar52 - fVar58 * fVar50) + fVar53 * fVar39 + fVar41 +
                                *(float *)(param_1 + 0x224),
                                (fVar58 * fVar51 - fVar39 * fVar52) + fVar53 * fVar57 + fVar34 +
                                *(float *)(param_1 + 0x220));
              fStack_e0 = (fVar39 * fVar50 - fVar57 * fVar51) + fVar53 * fVar58 + fVar48 +
                          *(float *)(param_1 + 0x228);
            }
            else {
              fVar45 = *(float *)(param_1 + 0x220);
              fVar2 = *(float *)(param_1 + 0x224);
              fVar3 = *(float *)(param_1 + 0x228);
              fVar24 = fVar51 + fVar51;
              fVar26 = fVar52 + fVar52;
              fVar28 = fVar50 * (fVar50 + fVar50);
              fVar19 = *pfVar9;
              fVar22 = pfVar9[1];
              fVar21 = pfVar9[2];
              fVar23 = pfVar9[3];
              fVar25 = (fVar50 + fVar50) * fVar53;
              fVar54 = (fVar26 * fVar53 + fVar24 * fVar50) * fVar34;
              fVar55 = (fVar25 + fVar26 * fVar51) * fVar41;
              fVar56 = (fVar24 * fVar53 + fVar26 * fVar50) * fVar48;
              fVar31 = fVar41 * (fVar24 * fVar50 - fVar26 * fVar53);
              fVar32 = fVar48 * (fVar26 * fVar51 - fVar25);
              fVar33 = fVar34 * (fVar26 * fVar50 - fVar24 * fVar53);
              fVar53 = (float)((uint)((_DAT_146af0bf0 - (fVar52 * fVar26 + fVar51 * fVar24)) *
                                     fVar34) & _DAT_146af0c00);
              fVar25 = (float)((uint)((fRam0000000146af0bf4 - (fVar52 * fVar26 + fVar28)) * fVar41)
                              & uRam0000000146af0c04);
              fVar24 = (float)((uint)((fRam0000000146af0bf8 - (fVar51 * fVar24 + fVar28)) * fVar48)
                              & uRam0000000146af0c08);
              fVar26 = (float)((uint)((fRam0000000146af0bfc - (fVar28 + fVar28)) * auVar37._12_4_) &
                              uRam0000000146af0c0c);
              fVar50 = fVar22 + fVar22;
              fVar51 = fVar21 + fVar21;
              fVar28 = (fVar19 + fVar19) * fVar19;
              fVar52 = fVar23 * (fVar19 + fVar19);
              fVar43 = (fVar23 * fVar51 + fVar19 * fVar50) * fVar38;
              fVar44 = (fVar52 + fVar22 * fVar51) * fVar47;
              fVar46 = (fVar23 * fVar50 + fVar19 * fVar51) * fVar49;
              fVar35 = fVar47 * (fVar19 * fVar50 - fVar23 * fVar51);
              fVar40 = fVar49 * (fVar22 * fVar51 - fVar52);
              fVar42 = fVar38 * (fVar19 * fVar51 - fVar23 * fVar50);
              fVar19 = (float)((uint)((_DAT_146af0bf0 - (fVar51 * fVar21 + fVar50 * fVar22)) *
                                     fVar38) & _DAT_146af0c00);
              fVar21 = (float)((uint)((fRam0000000146af0bf4 - (fVar51 * fVar21 + fVar28)) * fVar47)
                              & uRam0000000146af0c04);
              fVar22 = (float)((uint)((fRam0000000146af0bf8 - (fVar50 * fVar22 + fVar28)) * fVar49)
                              & uRam0000000146af0c08);
              fVar23 = (float)((uint)((fRam0000000146af0bfc - (fVar28 + fVar28)) * auVar20._12_4_) &
                              uRam0000000146af0c0c);
              fVar50 = pfVar9[4];
              fVar51 = pfVar9[5];
              fVar52 = pfVar9[6];
              local_118 = fVar43 * fVar31 + fVar19 * fVar53 + fVar42 * fVar56 + fVar23 * fVar45;
              fStack_114 = fVar43 * fVar25 + fVar19 * fVar54 + fVar42 * fVar32 + fVar23 * fVar2;
              fStack_110 = fVar43 * fVar55 + fVar19 * fVar33 + fVar42 * fVar24 + fVar23 * fVar3;
              fStack_10c = fVar43 * fVar26 + fVar19 * fVar26 + fVar42 * fVar26 +
                           fVar23 * fRam0000000146af0bfc;
              local_108 = fVar21 * fVar31 + fVar35 * fVar53 + fVar44 * fVar56 + fVar23 * fVar45;
              fStack_104 = fVar21 * fVar25 + fVar35 * fVar54 + fVar44 * fVar32 + fVar23 * fVar2;
              fStack_100 = fVar21 * fVar55 + fVar35 * fVar33 + fVar44 * fVar24 + fVar23 * fVar3;
              fStack_fc = fVar21 * fVar26 + fVar35 * fVar26 + fVar44 * fVar26 +
                          fVar23 * fRam0000000146af0bfc;
              local_f8 = fVar40 * fVar31 + fVar46 * fVar53 + fVar22 * fVar56 + fVar23 * fVar45;
              fStack_f4 = fVar40 * fVar25 + fVar46 * fVar54 + fVar22 * fVar32 + fVar23 * fVar2;
              fStack_f0 = fVar40 * fVar55 + fVar46 * fVar33 + fVar22 * fVar24 + fVar23 * fVar3;
              fStack_ec = fVar40 * fVar26 + fVar46 * fVar26 + fVar22 * fVar26 +
                          fVar23 * fRam0000000146af0bfc;
              local_e8 = fVar51 * fVar31 + fVar50 * fVar53 + fVar52 * fVar56 +
                         fRam0000000146af0bfc * fVar45;
              fStack_e4 = fVar51 * fVar25 + fVar50 * fVar54 + fVar52 * fVar32 +
                          fRam0000000146af0bfc * fVar2;
              fStack_e0 = fVar51 * fVar55 + fVar50 * fVar33 + fVar52 * fVar24 +
                          fRam0000000146af0bfc * fVar3;
              fStack_dc = fVar51 * fVar26 + fVar50 * fVar26 + fVar52 * fVar26 +
                          fRam0000000146af0bfc * fRam0000000146af0bfc;
              FMatrix::RemoveScaling(&local_118);
              fVar57 = (float)(-(uint)(fVar27 <= fVar38 * fVar34) & (_DAT_146af0ce0 ^ (uint)fVar57)
                              ^ _DAT_146af0ce0);
              fVar39 = (float)(-(uint)(fVar29 <= fVar47 * fVar41) &
                               (uRam0000000146af0ce4 ^ (uint)fVar39) ^ uRam0000000146af0ce4);
              fVar58 = (float)(-(uint)(fVar30 <= fVar49 * fVar48) &
                               (uRam0000000146af0ce8 ^ (uint)fVar58) ^ uRam0000000146af0ce8);
              local_118 = local_118 * fVar57;
              fStack_114 = fStack_114 * fVar57;
              fStack_110 = fStack_110 * fVar57;
              fStack_100 = fStack_100 * fVar39;
              fStack_104 = fStack_104 * fVar39;
              local_108 = local_108 * fVar39;
              fStack_f0 = fStack_f0 * fVar58;
              local_f8 = local_f8 * fVar58;
              fStack_f4 = fStack_f4 * fVar58;
              FQuat::FQuat(&local_128,&local_118);
              auVar20._0_4_ = local_128 * local_128 + fStack_120 * fStack_120;
              auVar20._4_4_ = fStack_124 * fStack_124 + fStack_11c * fStack_11c;
              auVar20._8_4_ = fStack_120 * fStack_120 + local_128 * local_128;
              auVar20._12_4_ = fStack_11c * fStack_11c + fStack_124 * fStack_124;
              auVar37._4_4_ = auVar20._8_4_ + auVar20._4_4_;
              auVar37._0_4_ = auVar20._4_4_ + auVar20._0_4_;
              auVar37._8_4_ = auVar20._12_4_ + auVar20._8_4_;
              auVar37._12_4_ = auVar20._0_4_ + auVar20._12_4_;
              rsqrtps(auVar20,auVar37);
              uVar36 = CONCAT44(fStack_e4,local_e8);
            }
            *param_4 = uVar36;
            *(float *)(param_4 + 1) = fStack_e0;
          }
          *param_2 = *(undefined8 *)
                      (*(longlong *)(*(longlong *)(param_1 + 0x718) + 0x158) +
                      (longlong)iVar5 * 0x10);
          return param_2;
        }
      }
      if (param_4 != (undefined8 *)0x0) {
        *param_4 = _DAT_1468b5d90;
        *(undefined4 *)(param_4 + 1) = DAT_1468b5d98;
      }
      goto LAB_1423ac0fb;
    }
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = _DAT_1468b5d90;
    *(undefined4 *)(param_4 + 1) = DAT_1468b5d98;
  }
LAB_1423ac0fb:
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1423ac140 FindClosestBone_K2 body=91 status=ok
// SIG undefined FindClosestBone_K2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
USkinnedMeshComponent::FindClosestBone_K2
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
          undefined4 param_5,undefined1 param_6)

{
  undefined8 local_18;
  undefined4 local_10;
  
  *param_4 = _DAT_1468b5d90;
  local_18 = *param_3;
  *(undefined4 *)(param_4 + 1) = DAT_1468b5d98;
  local_10 = *(undefined4 *)(param_3 + 1);
  FUN_1423ab810(param_5,param_2,&local_18,param_4,param_5,param_6);
  return param_2;
}



// FUNCTION 1423ac1a0 FUN_1423ac1a0 body=68 status=ok
// SIG undefined FUN_1423ac1a0(void)

undefined8
FUN_1423ac1a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1423ac1f0(param_1,param_3);
  FUN_1423adfd0(param_1,param_2,uVar1,param_4);
  return param_2;
}



// FUNCTION 1423ac1f0 FUN_1423ac1f0 body=444 status=ok
// SIG undefined FUN_1423ac1f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1423ac1f0(longlong param_1,float *param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  undefined1 in_XMM5 [16];
  undefined1 auVar12 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_res8 [2];
  float local_48;
  float local_44;
  float local_40;
  
  puVar1 = (undefined8 *)(param_1 + 0x6f0);
  auVar12 = *(undefined1 (*) [16])(param_1 + 0x230);
  fVar15 = auVar12._0_4_;
  fVar2 = auVar12._4_4_;
  fVar3 = auVar12._8_4_;
  fVar16 = *(float *)(param_1 + 0x210) * _DAT_146af0eb0;
  fVar17 = *(float *)(param_1 + 0x214) * fRam0000000146af0eb4;
  fVar18 = *(float *)(param_1 + 0x218) * fRam0000000146af0eb8;
  fVar19 = *(float *)(param_1 + 0x21c) * fRam0000000146af0ebc;
  iVar5 = *(int *)(param_1 + 0x6f8);
  auVar12 = rcpps(in_XMM5,auVar12);
  fVar20 = (float)((uint)(*param_2 - *(float *)(param_1 + 0x220)) & _DAT_146af0c00);
  fVar21 = (float)((uint)(param_2[1] - *(float *)(param_1 + 0x224)) & uRam0000000146af0c04);
  fVar22 = (float)((uint)(param_2[2] - *(float *)(param_1 + 0x228)) & uRam0000000146af0c08);
  fVar8 = fVar22 * fVar17 - fVar21 * fVar18;
  fVar9 = fVar20 * fVar18 - fVar22 * fVar16;
  fVar10 = fVar21 * fVar16 - fVar20 * fVar17;
  fVar11 = auVar12._0_4_;
  fVar13 = auVar12._4_4_;
  fVar14 = auVar12._8_4_;
  fVar8 = fVar8 + fVar8;
  fVar9 = fVar9 + fVar9;
  fVar10 = fVar10 + fVar10;
  fVar11 = (fVar11 + fVar11) - fVar11 * fVar11 * fVar15;
  fVar13 = (fVar13 + fVar13) - fVar13 * fVar13 * fVar2;
  fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar3;
  fVar11 = (fVar11 + fVar11) - fVar11 * fVar11 * fVar15;
  fVar13 = (fVar13 + fVar13) - fVar13 * fVar13 * fVar2;
  fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar3;
  local_48 = ((fVar10 * fVar17 - fVar9 * fVar18) + fVar19 * fVar8 + fVar20) *
             (float)(-(uint)((float)((uint)fVar15 & _DAT_146af0d10) <= _DAT_146af0ea0) &
                     (uint)fVar11 ^ (uint)fVar11);
  local_44 = ((fVar8 * fVar18 - fVar10 * fVar16) + fVar19 * fVar9 + fVar21) *
             (float)(-(uint)((float)((uint)fVar2 & uRam0000000146af0d14) <= fRam0000000146af0ea4) &
                     (uint)fVar13 ^ (uint)fVar13);
  local_40 = ((fVar9 * fVar16 - fVar8 * fVar17) + fVar19 * fVar10 + fVar22) *
             (float)(-(uint)((float)((uint)fVar3 & uRam0000000146af0d18) <= fRam0000000146af0ea8) &
                     (uint)fVar14 ^ (uint)fVar14);
  iVar4 = iVar5;
  if (*(char *)(param_1 + 0x700) == '\0') {
    iVar4 = iVar5 + -1;
  }
  if (iVar5 < 2) {
    if (iVar5 == 1) {
      uVar6 = (ulonglong)*(uint *)*puVar1;
    }
    else {
      uVar6 = 0;
    }
  }
  else {
    uVar6 = FInterpCurve<FVector>::InaccurateFindNearestOnSegment(puVar1,&local_48,0,local_res8);
    iVar5 = 1;
    fVar15 = local_res8[0];
    if (1 < iVar4) {
      do {
        uVar7 = FInterpCurve<FVector>::InaccurateFindNearestOnSegment
                          (puVar1,&local_48,iVar5,local_res8);
        if (local_res8[0] < fVar15) {
          fVar15 = local_res8[0];
          uVar6 = uVar7;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
    }
  }
  return uVar6;
}



// FUNCTION 1423ac3b0 FUN_1423ac3b0 body=68 status=ok
// SIG undefined FUN_1423ac3b0(void)

undefined8
FUN_1423ac3b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1423ac1f0(param_1,param_3);
  FUN_1423aeef0(param_1,param_2,uVar1,param_4);
  return param_2;
}



// FUNCTION 1423ac420 FUN_1423ac420 body=68 status=ok
// SIG undefined FUN_1423ac420(void)

undefined8
FUN_1423ac420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1423ac1f0(param_1,param_3);
  FUN_1423afc70(param_1,param_2,uVar1,param_4);
  return param_2;
}



// FUNCTION 1423ac470 FindRollClosestToWorldLocation body=70 status=ok
// SIG undefined FindRollClosestToWorldLocation(void)

undefined4
USplineComponent::FindRollClosestToWorldLocation
          (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 local_28 [8];
  undefined4 local_20;
  undefined1 local_18 [16];
  
  uVar2 = FUN_1423ac1f0();
  uVar1 = FUN_1423af700(param_1,local_18,uVar2,param_3);
  FQuat::Rotator(uVar1,local_28);
  return local_20;
}



// FUNCTION 1423ac4c0 FindRotationClosestToWorldLocation body=81 status=ok
// SIG undefined FindRotationClosestToWorldLocation(void)

undefined8
USplineComponent::FindRotationClosestToWorldLocation
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 local_18 [16];
  
  uVar2 = FUN_1423ac1f0(param_1,param_3);
  uVar1 = FUN_1423af700(param_1,local_18,uVar2,param_4);
  FQuat::Rotator(uVar1,param_2);
  return param_2;
}



// FUNCTION 1423ac520 FUN_1423ac520 body=85 status=ok
// SIG undefined FUN_1423ac520(void)

undefined8 FUN_1423ac520(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar1 = FUN_1423ac1f0(param_1,param_3);
  local_18 = 0x3f800000;
  local_14 = 0x3f800000;
  local_10 = 0x3f800000;
  FInterpCurve<FVector>::Eval(param_1 + 0x720,param_2,uVar1,&local_18);
  return param_2;
}



// FUNCTION 1423ac580 FUN_1423ac580 body=68 status=ok
// SIG undefined FUN_1423ac580(void)

undefined8
FUN_1423ac580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1423ac1f0(param_1,param_3);
  FUN_1423b14a0(param_1,param_2,uVar1,param_4);
  return param_2;
}



// FUNCTION 1423ac5d0 FindTransformClosestToWorldLocation body=77 status=ok
// SIG undefined FindTransformClosestToWorldLocation(void)

undefined8
USplineComponent::FindTransformClosestToWorldLocation
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          undefined1 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1423ac1f0(param_1,param_3);
  FUN_1423b1700(param_1,param_2,uVar1,param_4,param_5);
  return param_2;
}



// FUNCTION 1423ac620 FUN_1423ac620 body=68 status=ok
// SIG undefined FUN_1423ac620(void)

undefined8
FUN_1423ac620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1423ac1f0(param_1,param_3);
  FUN_1423b1f40(param_1,param_2,uVar1,param_4);
  return param_2;
}



// FUNCTION 1423ac670 FUN_1423ac670 body=238 status=ok
// SIG undefined FUN_1423ac670(void)

void FUN_1423ac670(longlong param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 0x881);
  if ((bVar1 & 2) != 0) {
    if (*(char *)(param_1 + 0x768) != '\0') {
      TArray<FTransform,FDefaultAllocator>::operator=
                (param_1 + 0x758,param_1 + 0x728 + (longlong)*(int *)(param_1 + 0x770) * 0x10);
      TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
                (param_1 + 0x748,param_1 + 0x868);
      bVar1 = *(byte *)(param_1 + 0x881);
    }
    *(byte *)(param_1 + 0x881) = bVar1 & 0xfd;
    if ((bVar1 & 1) == 0) {
      iVar2 = 0;
      *(undefined4 *)(param_1 + 0x76c) = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x76c);
      *(int *)(param_1 + 0x76c) = 1 - iVar2;
    }
    *(int *)(param_1 + 0x770) = iVar2;
    if (*(char *)(param_1 + 0x768) == '\0') {
      TArray<FTransform,FDefaultAllocator>::operator=
                (param_1 + 0x758,param_1 + 0x728 + (longlong)iVar2 * 0x10);
      TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
                (param_1 + 0x748,param_1 + 0x868);
    }
    *(int *)(param_1 + 0x774) = *(int *)(param_1 + 0x774) + 1;
  }
  return;
}



// FUNCTION 1423ac760 FUN_1423ac760 body=123 status=ok
// SIG undefined FUN_1423ac760(void)

longlong * FUN_1423ac760(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x960);
    plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x968) * 2;
    for (; plVar1 != plVar2; plVar1 = plVar1 + 2) {
      if (*plVar1 == param_3) {
        *param_2 = plVar1[1];
        return param_2;
      }
    }
    plVar1 = *(longlong **)(param_1 + 0x910);
    plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x918) * 2;
    for (; plVar1 != plVar2; plVar1 = plVar1 + 2) {
      if (*plVar1 == param_3) {
        *param_2 = plVar1[1];
        return param_2;
      }
    }
  }
  *param_2 = param_3;
  return param_2;
}



// FUNCTION 1423ac7e0 FUN_1423ac7e0 body=8 status=ok
// SIG undefined FUN_1423ac7e0(void)

undefined8 FUN_1423ac7e0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xa48);
}



// FUNCTION 1423ac7f0 FUN_1423ac7f0 body=313 status=ok
// SIG undefined FUN_1423ac7f0(void)

undefined8 * FUN_1423ac7f0(longlong param_1,undefined8 *param_2,int param_3,int param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_28;
  float local_20;
  
  iVar1 = *(int *)(param_1 + 0x6f8);
  if (iVar1 < 1) {
    puVar7 = &DAT_146531e60;
  }
  else if ((*(char *)(param_1 + 0x7c1) == '\0') || (param_3 < iVar1)) {
    if (param_3 < 0) {
      puVar7 = *(undefined **)(param_1 + 0x6f0);
    }
    else {
      iVar6 = iVar1 + -1;
      if (param_3 < iVar1 + -1) {
        iVar6 = param_3;
      }
      puVar7 = (undefined *)((longlong)iVar6 * 0x2c + *(longlong *)(param_1 + 0x6f0));
    }
  }
  else {
    puVar7 = *(undefined **)(param_1 + 0x6f0);
  }
  if (param_4 == 1) {
    fVar2 = *(float *)(param_1 + 0x210);
    fVar3 = *(float *)(param_1 + 0x214);
    fVar4 = *(float *)(param_1 + 0x218);
    fVar5 = *(float *)(param_1 + 0x21c);
    fVar11 = *(float *)(puVar7 + 0x10) * *(float *)(param_1 + 0x230);
    fVar12 = *(float *)(puVar7 + 0x14) * *(float *)(param_1 + 0x234);
    fVar13 = *(float *)(puVar7 + 0x18) * *(float *)(param_1 + 0x238);
    fVar8 = fVar13 * fVar3 - fVar12 * fVar4;
    fVar9 = fVar11 * fVar4 - fVar13 * fVar2;
    fVar10 = fVar12 * fVar2 - fVar11 * fVar3;
    fVar8 = fVar8 + fVar8;
    fVar9 = fVar9 + fVar9;
    fVar10 = fVar10 + fVar10;
    local_20 = (fVar9 * fVar2 - fVar8 * fVar3) + fVar5 * fVar10 + fVar13;
    local_28 = CONCAT44((fVar8 * fVar4 - fVar10 * fVar2) + fVar5 * fVar9 + fVar12,
                        (fVar10 * fVar3 - fVar9 * fVar4) + fVar5 * fVar8 + fVar11);
  }
  else {
    local_28 = *(undefined8 *)(puVar7 + 0x10);
    local_20 = *(float *)(puVar7 + 0x18);
  }
  *param_2 = local_28;
  *(float *)(param_2 + 1) = local_20;
  return param_2;
}



// FUNCTION 1423ac930 FUN_1423ac930 body=31 status=ok
// SIG undefined FUN_1423ac930(void)

longlong FUN_1423ac930(longlong *param_1)

{
  (**(code **)(*param_1 + 0x8e8))();
  return param_1[0xdf];
}



// FUNCTION 1423ac950 FUN_1423ac950 body=177 status=ok
// SIG undefined FUN_1423ac950(void)

undefined8 FUN_1423ac950(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong local_res10 [3];
  
  if ((param_2 == 0) || (*(longlong *)(param_1 + 0x718) == 0)) {
    return 0xffffffff;
  }
  if (param_2 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x960);
    plVar3 = plVar1 + (longlong)*(int *)(param_1 + 0x968) * 2;
    for (; plVar1 != plVar3; plVar1 = plVar1 + 2) {
      if (*plVar1 == param_2) goto LAB_1423ac9d8;
    }
    plVar1 = *(longlong **)(param_1 + 0x910);
    plVar3 = plVar1 + (longlong)*(int *)(param_1 + 0x918) * 2;
    for (; plVar1 != plVar3; plVar1 = plVar1 + 2) {
      if (*plVar1 == param_2) goto LAB_1423ac9d8;
    }
  }
LAB_1423ac9dc:
  local_res10[0] = param_2;
  uVar2 = FReferenceSkeleton::FindBoneIndex(*(longlong *)(param_1 + 0x718) + 0x138,local_res10);
  return uVar2;
LAB_1423ac9d8:
  param_2 = plVar1[1];
  goto LAB_1423ac9dc;
}



// FUNCTION 1423aca10 FUN_1423aca10 body=194 status=ok
// SIG undefined FUN_1423aca10(void)

undefined8 FUN_1423aca10(longlong param_1,undefined8 param_2,int *param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x718);
  if (lVar4 != 0) {
    iVar3 = FUN_1423ac950();
    if (iVar3 != -1) {
      lVar4 = (longlong)*(int *)(lVar4 + 0x160);
      iVar7 = iVar3 + 1;
      lVar5 = (longlong)iVar7;
      *param_4 = iVar3;
      *param_3 = iVar3;
      if (lVar5 < lVar4) {
        lVar6 = lVar5 << 4;
        while (iVar3 < lVar5) {
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x718) + 0x158);
          iVar1 = *(int *)(lVar6 + 8 + lVar2);
          while (iVar1 != iVar3) {
            iVar1 = *(int *)(lVar2 + 8 + (longlong)iVar1 * 0x10);
            if (iVar1 == -1) {
              return 1;
            }
          }
          *param_4 = iVar7;
          lVar5 = lVar5 + 1;
          iVar7 = iVar7 + 1;
          lVar6 = lVar6 + 0x10;
          if (lVar4 <= lVar5) {
            return 1;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1423acae0 FUN_1423acae0 body=299 status=ok
// SIG undefined FUN_1423acae0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1423acae0(longlong param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_48 [64];
  
  iVar4 = FUN_1423ac950(param_1,param_3);
  lVar6 = (longlong)iVar4;
  if (iVar4 != -1) {
    if (param_4 == 1) {
      lVar5 = FWeakObjectPtr::Get(param_1 + 0x720);
      if (lVar5 == 0) {
        lVar5 = *(longlong *)(param_1 + 0x728 + (longlong)*(int *)(param_1 + 0x770) * 0x10);
LAB_1423acb71:
        puVar1 = (undefined4 *)(lVar5 + 0x10 + lVar6 * 0x30);
        uVar2 = puVar1[1];
        uVar3 = puVar1[2];
        *(undefined4 *)param_2 = *puVar1;
        *(undefined4 *)((longlong)param_2 + 4) = uVar2;
        *(undefined4 *)(param_2 + 1) = uVar3;
        return param_2;
      }
      if (iVar4 < *(int *)(param_1 + 0x790)) {
        iVar4 = *(int *)(*(longlong *)(param_1 + 0x788) + lVar6 * 4);
        lVar6 = (longlong)iVar4;
        if ((iVar4 != -1) &&
           (iVar4 < *(int *)(lVar5 + ((longlong)*(int *)(lVar5 + 0x770) + 0x73) * 0x10))) {
          lVar5 = *(longlong *)(lVar5 + 0x728 + (longlong)*(int *)(lVar5 + 0x770) * 0x10);
          goto LAB_1423acb71;
        }
      }
    }
    else if (param_4 == 0) {
      lVar6 = FUN_1423acc10(param_1,local_48,iVar4);
      uVar2 = *(undefined4 *)(lVar6 + 0x38);
      uVar3 = *(undefined4 *)(lVar6 + 0x30);
      *(undefined4 *)((longlong)param_2 + 4) = *(undefined4 *)(lVar6 + 0x34);
      *(undefined4 *)(param_2 + 1) = uVar2;
      *(undefined4 *)param_2 = uVar3;
      return param_2;
    }
  }
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
  return param_2;
}



// FUNCTION 1423acc10 FUN_1423acc10 body=890 status=ok
// SIG undefined FUN_1423acc10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1423acc10(longlong param_1,float *param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  longlong lVar10;
  float *pfVar11;
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
  
  if ((*(byte *)(param_1 + 0xb8) & 1) != 0) {
    lVar10 = FWeakObjectPtr::Get(param_1 + 0x720);
    fVar9 = fRam0000000146af0bfc;
    if (lVar10 == 0) {
      iVar1 = *(int *)(param_1 + ((longlong)*(int *)(param_1 + 0x770) + 0x73) * 0x10);
      if ((iVar1 != 0) && (param_3 < iVar1)) {
        pfVar11 = (float *)((longlong)param_3 * 0x30 +
                           *(longlong *)
                            (param_1 + 0x728 + (longlong)*(int *)(param_1 + 0x770) * 0x10));
LAB_1423accb9:
        fVar2 = *(float *)(param_1 + 0x210);
        fVar3 = *(float *)(param_1 + 0x214);
        fVar4 = *(float *)(param_1 + 0x218);
        fVar14 = *(float *)(param_1 + 0x21c);
        fVar5 = *(float *)(param_1 + 0x220);
        fVar6 = *(float *)(param_1 + 0x224);
        fVar7 = *(float *)(param_1 + 0x228);
        fVar16 = fVar3 + fVar3;
        fVar20 = fVar4 + fVar4;
        fVar22 = (fVar2 + fVar2) * fVar2;
        fVar17 = (fVar2 + fVar2) * fVar14;
        fVar15 = *(float *)(param_1 + 0x230);
        fVar19 = *(float *)(param_1 + 0x234);
        fVar13 = *(float *)(param_1 + 0x238);
        fVar33 = (fVar20 * fVar14 + fVar16 * fVar2) * fVar15;
        fVar34 = (fVar17 + fVar20 * fVar3) * fVar19;
        fVar35 = (fVar16 * fVar14 + fVar20 * fVar2) * fVar13;
        fVar24 = fVar19 * (fVar16 * fVar2 - fVar20 * fVar14);
        fVar26 = fVar13 * (fVar20 * fVar3 - fVar17);
        fVar28 = fVar15 * (fVar20 * fVar2 - fVar16 * fVar14);
        fVar2 = *pfVar11;
        fVar14 = pfVar11[1];
        fVar17 = pfVar11[2];
        fVar29 = pfVar11[3];
        fVar18 = fVar14 + fVar14;
        fVar21 = fVar17 + fVar17;
        fVar12 = (float)((uint)((_DAT_146af0bf0 - (fVar20 * fVar4 + fVar16 * fVar3)) * fVar15) &
                        _DAT_146af0c00);
        fVar20 = (float)((uint)((fRam0000000146af0bf4 - (fVar20 * fVar4 + fVar22)) * fVar19) &
                        uRam0000000146af0c04);
        fVar16 = (float)((uint)((fRam0000000146af0bf8 - (fVar16 * fVar3 + fVar22)) * fVar13) &
                        uRam0000000146af0c08);
        fVar22 = (float)((uint)((fRam0000000146af0bfc - (fVar22 + fVar22)) *
                               *(float *)(param_1 + 0x23c)) & uRam0000000146af0c0c);
        fVar23 = (fVar2 + fVar2) * fVar2;
        fVar19 = (fVar2 + fVar2) * fVar29;
        fVar3 = pfVar11[8];
        fVar4 = pfVar11[9];
        fVar15 = pfVar11[10];
        fVar30 = (fVar21 * fVar29 + fVar18 * fVar2) * fVar3;
        fVar31 = (fVar19 + fVar21 * fVar14) * fVar4;
        fVar32 = (fVar18 * fVar29 + fVar21 * fVar2) * fVar15;
        fVar25 = fVar4 * (fVar18 * fVar2 - fVar21 * fVar29);
        fVar27 = fVar15 * (fVar21 * fVar14 - fVar19);
        fVar29 = fVar3 * (fVar21 * fVar2 - fVar18 * fVar29);
        fVar19 = (float)((uint)((_DAT_146af0bf0 - (fVar21 * fVar17 + fVar18 * fVar14)) * fVar3) &
                        _DAT_146af0c00);
        fVar13 = (float)((uint)((fRam0000000146af0bf4 - (fVar21 * fVar17 + fVar23)) * fVar4) &
                        uRam0000000146af0c04);
        fVar14 = (float)((uint)((fRam0000000146af0bf8 - (fVar18 * fVar14 + fVar23)) * fVar15) &
                        uRam0000000146af0c08);
        fVar15 = (float)((uint)((fRam0000000146af0bfc - (fVar23 + fVar23)) * pfVar11[0xb]) &
                        uRam0000000146af0c0c);
        fVar2 = pfVar11[4];
        fVar3 = pfVar11[5];
        fVar4 = pfVar11[6];
        fVar17 = fVar15 * fRam0000000146af0bfc;
        *param_2 = fVar30 * fVar24 + fVar19 * fVar12 + fVar29 * fVar35 + fVar15 * fVar5;
        param_2[1] = fVar30 * fVar20 + fVar19 * fVar33 + fVar29 * fVar26 + fVar15 * fVar6;
        param_2[2] = fVar30 * fVar34 + fVar19 * fVar28 + fVar29 * fVar16 + fVar15 * fVar7;
        param_2[3] = fVar30 * fVar22 + fVar19 * fVar22 + fVar29 * fVar22 + fVar17;
        param_2[4] = fVar13 * fVar24 + fVar25 * fVar12 + fVar31 * fVar35 + fVar15 * fVar5;
        param_2[5] = fVar13 * fVar20 + fVar25 * fVar33 + fVar31 * fVar26 + fVar15 * fVar6;
        param_2[6] = fVar13 * fVar34 + fVar25 * fVar28 + fVar31 * fVar16 + fVar15 * fVar7;
        param_2[7] = fVar13 * fVar22 + fVar25 * fVar22 + fVar31 * fVar22 + fVar15 * fVar9;
        param_2[8] = fVar27 * fVar24 + fVar32 * fVar12 + fVar14 * fVar35 + fVar15 * fVar5;
        param_2[9] = fVar27 * fVar20 + fVar32 * fVar33 + fVar14 * fVar26 + fVar15 * fVar6;
        param_2[10] = fVar27 * fVar34 + fVar32 * fVar28 + fVar14 * fVar16 + fVar15 * fVar7;
        param_2[0xb] = fVar27 * fVar22 + fVar32 * fVar22 + fVar14 * fVar22 + fVar15 * fVar9;
        param_2[0xc] = fVar3 * fVar24 + fVar2 * fVar12 + fVar4 * fVar35 + fVar9 * fVar5;
        param_2[0xd] = fVar3 * fVar20 + fVar2 * fVar33 + fVar4 * fVar26 + fVar9 * fVar6;
        param_2[0xe] = fVar3 * fVar34 + fVar2 * fVar28 + fVar4 * fVar16 + fVar9 * fVar7;
        param_2[0xf] = fVar3 * fVar22 + fVar2 * fVar22 + fVar4 * fVar22 + fVar9 * fVar9;
        return param_2;
      }
    }
    else if (param_3 < *(int *)(param_1 + 0x790)) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x788) + (longlong)param_3 * 4);
      if ((iVar1 != -1) &&
         (iVar1 < *(int *)(lVar10 + ((longlong)*(int *)(lVar10 + 0x770) + 0x73) * 0x10))) {
        pfVar11 = (float *)((longlong)iVar1 * 0x30 +
                           *(longlong *)(lVar10 + 0x728 + (longlong)*(int *)(lVar10 + 0x770) * 0x10)
                           );
        goto LAB_1423accb9;
      }
    }
  }
  uVar8 = _DAT_1464aa7d8;
  *(undefined8 *)param_2 = _DAT_1464aa7d0;
  *(undefined8 *)(param_2 + 2) = uVar8;
  uVar8 = _DAT_1464aa7e8;
  *(undefined8 *)(param_2 + 4) = _DAT_1464aa7e0;
  *(undefined8 *)(param_2 + 6) = uVar8;
  uVar8 = _DAT_1464aa7f8;
  *(undefined8 *)(param_2 + 8) = _DAT_1464aa7f0;
  *(undefined8 *)(param_2 + 10) = uVar8;
  uVar8 = uRam00000001464aa808;
  *(undefined8 *)(param_2 + 0xc) = _DAT_1464aa800;
  *(undefined8 *)(param_2 + 0xe) = uVar8;
  return param_2;
}



// FUNCTION 1423acf90 FUN_1423acf90 body=64 status=ok
// SIG undefined FUN_1423acf90(void)

undefined8 * FUN_1423acf90(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x718);
  if (((lVar1 != 0) && (-1 < param_3)) && (param_3 < *(int *)(lVar1 + 0x160))) {
    *param_2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x158) + (longlong)param_3 * 0x10);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}


