// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142d0c000 FUN_142d0c000 body=164 status=ok
// SIG undefined FUN_142d0c000(void)

undefined8 * FUN_142d0c000(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_145871a48;
  FText::FText(param_1 + 6);
  FText::FText(param_1 + 9);
  *(undefined1 *)(param_1 + 0xc) = 1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x9c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x12,0);
  }
  if ((undefined2 *)param_1[0x12] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x12] = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return param_1;
}



// FUNCTION 142d0c0b0 FUN_142d0c0b0 body=105 status=ok
// SIG undefined FUN_142d0c0b0(void)

void FUN_142d0c0b0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0x20;
    do {
      FUN_142d0c2a0(lVar1 + 0x2a8);
      FUN_1409c53c0(lVar1);
      lVar1 = lVar1 + 0x2e0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142d0c120 FUN_142d0c120 body=216 status=ok
// SIG undefined FUN_142d0c120(void)

void FUN_142d0c120(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar4 = (longlong *)(lVar1 + 0x28);
    do {
      iVar5 = (int)plVar4[1];
      lVar1 = *plVar4;
      if (iVar5 != 0) {
        plVar2 = (longlong *)(lVar1 + 8);
        do {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 3;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        lVar1 = *plVar4;
      }
      if (lVar1 != 0) {
        FMemory::Free();
      }
      iVar5 = (int)plVar4[-1];
      lVar1 = plVar4[-2];
      if (iVar5 != 0) {
        plVar2 = (longlong *)(lVar1 + 0x10);
        do {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        lVar1 = plVar4[-2];
      }
      if (lVar1 != 0) {
        FMemory::Free();
      }
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (plVar4 + -4);
      plVar4 = plVar4 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142d0c200 FUN_142d0c200 body=159 status=ok
// SIG undefined FUN_142d0c200(void)

void FUN_142d0c200(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)*param_1;
  iVar6 = *(int *)(param_1 + 1);
  if (iVar6 != 0) {
    do {
      plVar4 = (longlong *)plVar7[5];
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
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 7;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar7 = (longlong *)*param_1;
  }
  if (plVar7 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar7);
  return;
}



// FUNCTION 142d0c2a0 FUN_142d0c2a0 body=101 status=ok
// SIG undefined FUN_142d0c2a0(void)

void FUN_142d0c2a0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0xe8);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x32;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142d0c310 FUN_142d0c310 body=79 status=ok
// SIG undefined FUN_142d0c310(void)

void FUN_142d0c310(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1458747c0;
  if (param_1[0x62] != 0) {
    FMemory::Free();
  }
  if (param_1[0x5c] != 0) {
    FMemory::Free();
  }
  FUN_142d0c360(param_1 + 0x38);
  FUN_140a7c7a0(param_1 + 2);
  return;
}



// FUNCTION 142d0c360 FUN_142d0c360 body=96 status=ok
// SIG undefined FUN_142d0c360(void)

void FUN_142d0c360(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142d0c3c0 FUN_142d0c3c0 body=675 status=ok
// SIG undefined FUN_142d0c3c0(void)

undefined8 * FUN_142d0c3c0(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  
  *param_1 = *param_2;
  *(byte *)(param_1 + 1) =
       *(byte *)(param_1 + 1) ^ (*(byte *)(param_1 + 1) ^ *(byte *)(param_2 + 1)) & 1;
  bVar1 = (*(byte *)(param_2 + 1) ^ *(byte *)(param_1 + 1)) & 2 ^ *(byte *)(param_1 + 1);
  *(byte *)(param_1 + 1) = bVar1;
  bVar1 = (*(byte *)(param_2 + 1) ^ bVar1) & 4 ^ bVar1;
  *(byte *)(param_1 + 1) = bVar1;
  bVar1 = (*(byte *)(param_2 + 1) ^ bVar1) & 8 ^ bVar1;
  *(byte *)(param_1 + 1) = bVar1;
  *(byte *)(param_1 + 1) = (*(byte *)(param_2 + 1) ^ bVar1) & 0x10 ^ bVar1;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  if (param_1 + 5 != param_2 + 5) {
    if (param_2[0x1d] == 0) {
      _guard_xfg_dispatch_icall_nop(param_1 + 5,param_2 + 5,0xc0);
    }
    if (param_1[0x1d] != 0) {
      FMemory::Free();
    }
    param_1[0x1d] = param_2[0x1d];
    param_2[0x1d] = 0;
    *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_2 + 0x1e);
    *(undefined4 *)((longlong)param_1 + 0xf4) = *(undefined4 *)((longlong)param_2 + 0xf4);
    param_2[0x1e] = 0;
  }
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
  *(byte *)(param_1 + 0x20) =
       *(byte *)(param_1 + 0x20) ^ (*(byte *)(param_1 + 0x20) ^ *(byte *)(param_2 + 0x20)) & 1;
  *(byte *)(param_1 + 0x20) =
       (*(byte *)(param_1 + 0x20) ^ *(byte *)(param_2 + 0x20)) & 2 ^ *(byte *)(param_1 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x104) = *(undefined4 *)((longlong)param_2 + 0x104);
  *(uint *)(param_1 + 0x21) =
       *(uint *)(param_1 + 0x21) ^ (*(uint *)(param_2 + 0x21) ^ *(uint *)(param_1 + 0x21)) & 1;
  *(undefined4 *)((longlong)param_1 + 0x10c) = *(undefined4 *)((longlong)param_2 + 0x10c);
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x22);
  *(undefined8 *)((longlong)param_1 + 0x114) = *(undefined8 *)((longlong)param_2 + 0x114);
  *(undefined4 *)((longlong)param_1 + 0x11c) = *(undefined4 *)((longlong)param_2 + 0x11c);
  param_1[0x24] = param_2[0x24];
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
  *(undefined8 *)((longlong)param_1 + 300) = *(undefined8 *)((longlong)param_2 + 300);
  *(undefined4 *)((longlong)param_1 + 0x134) = *(undefined4 *)((longlong)param_2 + 0x134);
  param_1[0x27] = param_2[0x27];
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)((longlong)param_1 + 0x144) = *(undefined8 *)((longlong)param_2 + 0x144);
  *(undefined4 *)((longlong)param_1 + 0x14c) = *(undefined4 *)((longlong)param_2 + 0x14c);
  param_1[0x2a] = param_2[0x2a];
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_2 + 0x2b);
  *(undefined4 *)((longlong)param_1 + 0x15c) = *(undefined4 *)((longlong)param_2 + 0x15c);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)((longlong)param_1 + 0x164) = *(undefined4 *)((longlong)param_2 + 0x164);
  *(undefined4 *)(param_1 + 0x2d) = *(undefined4 *)(param_2 + 0x2d);
  *(undefined4 *)((longlong)param_1 + 0x16c) = *(undefined4 *)((longlong)param_2 + 0x16c);
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x2e);
  *(undefined4 *)((longlong)param_1 + 0x174) = *(undefined4 *)((longlong)param_2 + 0x174);
  *(undefined4 *)(param_1 + 0x2f) = *(undefined4 *)(param_2 + 0x2f);
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = param_2[0x31];
  return param_1;
}



// FUNCTION 142d0c670 FUN_142d0c670 body=151 status=ok
// SIG undefined FUN_142d0c670(void)

undefined8 * FUN_142d0c670(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  puVar1 = param_1 + 3;
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((longlong)param_1 + 0x11) = *(undefined1 *)((longlong)param_2 + 0x11);
  if (puVar1 != param_2 + 3) {
    _Src = (void *)param_2[3];
    iVar2 = *(int *)(param_2 + 4);
    *(int *)(param_1 + 4) = iVar2;
    if ((iVar2 == 0) && (*(int *)((longlong)param_1 + 0x24) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    }
    else {
      TArray<FLiveLinkFrame,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0x90);
    }
  }
  return param_1;
}



// FUNCTION 142d0c710 FUN_142d0c710 body=242 status=ok
// SIG undefined FUN_142d0c710(void)

void FUN_142d0c710(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  float *pfVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  char cVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  float fVar10;
  
  uVar8 = 0;
  plVar9 = (longlong *)*param_2;
  uVar7 = (longlong)(int)param_2[1] & 0x1fffffffffffffff;
  if (plVar9 + (int)param_2[1] < plVar9) {
    uVar7 = uVar8;
  }
  if (uVar7 != 0) {
    do {
      lVar2 = *plVar9;
      if (lVar2 != 0) {
        pfVar3 = (float *)param_1[4];
        puVar4 = (undefined1 *)param_1[3];
        cVar1 = *(char *)param_1[1];
        puVar5 = (undefined1 *)param_1[2];
        cVar6 = FUN_142d15330(*param_1,lVar2,param_3);
        if ((cVar6 != '\0') && ((*(char *)(lVar2 + 0x138) == '\0' || (cVar1 != '\0')))) {
          if (*(char *)(lVar2 + 0x139) == '\0') {
            fVar10 = (float)FUN_142c98860(lVar2 + 0x140,param_3);
            *pfVar3 = fVar10 + *pfVar3;
          }
          else {
            *puVar5 = 1;
          }
          *puVar4 = 1;
        }
      }
      plVar9 = plVar9 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar7);
  }
  return;
}



// FUNCTION 142d0c810 FUN_142d0c810 body=1129 status=ok
// SIG undefined FUN_142d0c810(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d0c810(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_1c8 [32];
  uint local_1a8;
  longlong *local_1a0;
  undefined4 local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  longlong *local_180;
  longlong *local_178;
  undefined8 *local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong *local_128;
  longlong *local_120;
  longlong local_118 [2];
  longlong local_108 [2];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [128];
  undefined1 *local_68;
  int local_60;
  undefined4 local_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_170 = (undefined8 *)param_2[4];
  uVar11 = 0;
  puVar6 = local_170 + *(int *)(param_2 + 5);
  local_1a8 = 0;
  local_1a0 = param_3;
  local_190 = param_2;
  local_188 = puVar6;
  local_178 = param_1;
  if (local_170 != puVar6) {
    do {
      plVar3 = (longlong *)0x0;
      uVar1 = *local_170;
      if (((param_3 != (longlong *)0x0) &&
          (cVar2 = (**(code **)(*param_3 + 0x8e0))(param_3,param_2[2]), param_3 = local_1a0,
          cVar2 != '\0')) &&
         ((plVar9 = (longlong *)*param_4, plVar9 == (longlong *)0x0 ||
          (cVar2 = (**(code **)(*plVar9 + 0x8e0))(plVar9,uVar1), param_3 = local_1a0, cVar2 == '\0')
          ))) {
        *param_4 = 0;
        plVar9 = (longlong *)param_1[1];
        plVar5 = (longlong *)plVar9[8];
        if ((longlong *)plVar9[8] == (longlong *)0x0) {
          plVar5 = plVar9;
        }
        plVar9 = plVar5 + (int)plVar9[9];
        if (plVar5 != plVar9) {
          do {
            plVar3 = (longlong *)*plVar5;
            if ((plVar3 != (longlong *)0x0) &&
               (cVar2 = (**(code **)(*plVar3 + 0x8e0))(plVar3,uVar1), cVar2 != '\0')) {
              *param_4 = (longlong)plVar3;
              goto LAB_142d0c913;
            }
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar9);
          plVar3 = (longlong *)*param_4;
        }
LAB_142d0c913:
        param_2 = local_190;
        puVar6 = local_188;
        param_3 = local_1a0;
        if (plVar3 != (longlong *)0x0) {
          iVar8 = *(int *)(local_190 + 1);
          local_5c = 0;
          local_68 = (undefined1 *)0x0;
          local_60 = 0;
          if (iVar8 != 0) {
            if (0 < iVar8) {
              FUN_14245d780(local_e8,iVar8);
            }
            puVar4 = local_e8;
            if (local_68 != (undefined1 *)0x0) {
              puVar4 = (undefined1 *)0x0;
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(((ulonglong)puVar4 | (ulonglong)local_68) +
                               (longlong)local_60 * 0x10),(void *)*param_2,(longlong)iVar8 << 4);
            local_60 = local_60 + iVar8;
          }
          if (*(char *)(*param_1 + 0x398) == '\0') {
            uVar11 = uVar11 | 2;
            local_1a8 = uVar11;
            plVar3 = (longlong *)(**(code **)(*local_1a0 + 0x8e8))(local_1a0,local_118);
          }
          else {
            uVar11 = uVar11 | 1;
            local_1a8 = uVar11;
            plVar3 = (longlong *)FUN_142d19aa0(*param_1,local_108);
          }
          plVar9 = (longlong *)*plVar3;
          *plVar3 = 0;
          lVar12 = plVar3[1];
          plVar3[1] = 0;
          local_120 = plVar9;
          if (((uVar11 & 2) != 0) &&
             (uVar11 = uVar11 & 0xfffffffd, local_1a8 = uVar11, local_118[0] != 0)) {
            FMemory::Free();
          }
          if (((uVar11 & 1) != 0) &&
             (uVar11 = uVar11 & 0xfffffffe, local_1a8 = uVar11, local_108[0] != 0)) {
            FMemory::Free();
          }
          plVar3 = plVar9 + (int)lVar12;
          plVar5 = plVar9;
          iVar8 = local_60;
          local_128 = plVar3;
          if (plVar9 != plVar3) {
            do {
              plVar5 = (longlong *)*plVar9;
              local_180 = plVar9;
              if ((plVar5 != (longlong *)0x0) && (iVar7 = iVar8 + -1, -1 < iVar7)) {
                lVar10 = (longlong)iVar7 << 4;
                lVar12 = lVar10;
                do {
                  puVar4 = local_e8;
                  if (local_68 != (undefined1 *)0x0) {
                    puVar4 = local_68;
                  }
                  puVar6 = (undefined8 *)(puVar4 + lVar10);
                  cVar2 = *(char *)(puVar6 + 1);
                  if (cVar2 == '\0') {
                    local_168 = *puVar6;
                    local_160 = 0x202ffff;
                    local_15c = 0xffffffff;
                    cVar2 = (**(code **)(*plVar5 + 1000))(plVar5,&local_168);
                    iVar8 = local_60;
                    if (cVar2 != '\0') {
                      FUN_142378260(*param_4,*puVar6,local_198);
LAB_142d0cac9:
                      iVar8 = (local_60 - iVar7) + -1;
                      if (0 < iVar8) {
                        iVar8 = 1;
                      }
                      if (iVar8 != 0) {
                        puVar4 = local_e8;
                        if (local_68 != (undefined1 *)0x0) {
                          puVar4 = local_68;
                        }
                        _guard_xfg_dispatch_icall_nop
                                  (puVar4 + lVar12,puVar4 + (longlong)(local_60 - iVar8) * 0x10,
                                   (longlong)iVar8 << 4);
                      }
                      local_60 = local_60 + -1;
                      iVar8 = local_60;
                    }
                  }
                  else if (cVar2 == '\x01') {
                    local_158 = *puVar6;
                    local_150 = 0x202ffff;
                    local_14c = 0xffffffff;
                    cVar2 = (**(code **)(*plVar5 + 0x400))(plVar5,&local_158);
                    iVar8 = local_60;
                    if (cVar2 != '\0') {
                      local_138 = CONCAT44(uStack_f4,local_f8);
                      uStack_130 = uStack_f0;
                      uStack_12c = uStack_ec;
                      FUN_142377850(*param_4,*puVar6);
                      goto LAB_142d0cac9;
                    }
                  }
                  else if (cVar2 == '\x02') {
                    local_148 = *puVar6;
                    local_138 = 0;
                    local_140 = 0x202ffff;
                    local_13c = 0xffffffff;
                    cVar2 = (**(code **)(*plVar5 + 0x428))(plVar5,&local_148,&local_138,0);
                    iVar8 = local_60;
                    if (cVar2 != '\0') {
                      FUN_142378810(*param_4,*puVar6);
                      goto LAB_142d0cac9;
                    }
                  }
                  lVar12 = lVar12 + -0x10;
                  lVar10 = lVar10 + -0x10;
                  iVar7 = iVar7 + -1;
                  plVar3 = local_128;
                } while (-1 < iVar7);
              }
              param_2 = local_190;
              plVar5 = local_120;
              param_1 = local_178;
              uVar11 = local_1a8;
            } while ((*(int *)(*local_178 + 0x1a8) != 0) &&
                    (plVar9 = local_180 + 1, local_180 = plVar9, plVar9 != plVar3));
          }
          if (plVar5 != (longlong *)0x0) {
            FMemory::Free(plVar5);
          }
          puVar6 = local_188;
          param_3 = local_1a0;
          if (local_68 != (undefined1 *)0x0) {
            FMemory::Free();
            puVar6 = local_188;
            param_3 = local_1a0;
          }
        }
      }
      local_170 = local_170 + 1;
    } while (local_170 != puVar6);
  }
  return;
}



// FUNCTION 142d0cc80 FUN_142d0cc80 body=270 status=ok
// SIG undefined FUN_142d0cc80(void)

void FUN_142d0cc80(undefined8 *param_1,longlong *param_2,longlong param_3,char param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 *puVar3;
  float *pfVar4;
  undefined1 *puVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  float fVar10;
  
  plVar7 = (longlong *)*param_2;
  plVar9 = plVar7 + (longlong)(int)param_2[1] * 2;
  for (; plVar7 != plVar9; plVar7 = plVar7 + 2) {
    lVar2 = *plVar7;
    lVar8 = param_3;
    if (plVar7[1] != 0) {
      lVar8 = plVar7[1];
    }
    if (lVar2 != 0) {
      puVar3 = (undefined1 *)param_1[3];
      pfVar4 = (float *)param_1[4];
      puVar5 = (undefined1 *)param_1[2];
      cVar1 = *(char *)param_1[1];
      if ((((param_4 == '\0') || (*(char *)(lVar2 + 0x131) != '\0')) &&
          (cVar6 = FUN_142d15330(*param_1,lVar2,lVar8), cVar6 != '\0')) &&
         ((*(char *)(lVar2 + 0x138) == '\0' || (cVar1 != '\0')))) {
        if (*(char *)(lVar2 + 0x139) == '\0') {
          fVar10 = (float)FUN_142c98860(lVar2 + 0x140,lVar8);
          *pfVar4 = fVar10 + *pfVar4;
        }
        else {
          *puVar5 = 1;
        }
        *puVar3 = 1;
      }
    }
  }
  return;
}



// FUNCTION 142d0cd90 FUN_142d0cd90 body=1076 status=ok
// SIG undefined FUN_142d0cd90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d0cd90(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,
                  char param_5)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  float *pfVar10;
  longlong lVar11;
  longlong *plVar12;
  float fVar13;
  float fVar14;
  float local_118;
  float fStack_114;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  float *local_f0;
  float *local_e8;
  float *local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  float local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  undefined4 uStack_94;
  
  plVar12 = (longlong *)*param_2;
  local_d8 = plVar12 + (longlong)(int)param_2[1] * 2;
  if (plVar12 != local_d8) {
    do {
      lVar3 = *plVar12;
      lVar11 = param_3;
      if (plVar12[1] != 0) {
        lVar11 = plVar12[1];
      }
      if (lVar3 != 0) {
        pfVar10 = (float *)param_1[4];
        local_e0 = (float *)param_1[2];
        lVar4 = *param_1;
        local_f0 = (float *)param_1[3];
        local_e8 = (float *)param_1[1];
        if (((param_5 == '\0') || (*(char *)(lVar3 + 0x131) != '\0')) &&
           (cVar6 = FUN_142d15330(lVar4,lVar3,lVar11), cVar6 != '\0')) {
          puVar7 = *(undefined8 **)(lVar3 + 0x178);
          puVar8 = puVar7 + (longlong)*(int *)(lVar3 + 0x180) * 8;
          for (; puVar7 != puVar8; puVar7 = puVar7 + 8) {
            if (*(longlong *)(lVar4 + 0x2b0) == 0) {
              uVar9 = 0;
            }
            else {
              uVar9 = *(undefined8 *)(*(longlong *)(lVar4 + 0x2b0) + 0x118);
            }
            cVar6 = FUN_142c48f90(*puVar7,uVar9,*(undefined8 *)(lVar4 + 0x28));
            if (cVar6 != '\0') break;
          }
          fVar13 = (float)FUN_142c98860(lVar3 + 0x140,lVar11);
          if (*(char *)(lVar3 + 0x188) != '\0') {
            lVar11 = 0;
            if (*(longlong *)(lVar4 + 0x2b0) != 0) {
              lVar11 = *(longlong *)(*(longlong *)(lVar4 + 0x2b0) + 0x118);
            }
            if ((lVar11 != 0) && (*(longlong *)(lVar4 + 0x28) != 0)) {
              lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x28) + 0x168);
              if (lVar5 == 0) {
                local_d0 = _DAT_1468b5d90;
                puVar7 = &local_d0;
                local_c8 = DAT_1468b5d98;
              }
              else {
                puVar7 = (undefined8 *)&local_10c;
                local_10c = *(undefined4 *)(lVar5 + 0x220);
                local_104 = *(undefined4 *)(lVar5 + 0x228);
                uStack_108 = *(undefined4 *)(lVar5 + 0x224);
              }
              lVar11 = *(longlong *)(lVar11 + 0x168);
              if (lVar11 == 0) {
                local_c4 = _DAT_1468b5d90;
                puVar8 = &local_c4;
                local_bc = DAT_1468b5d98;
              }
              else {
                puVar8 = (undefined8 *)&local_100;
                local_100 = *(undefined4 *)(lVar11 + 0x220);
                local_f8 = *(undefined4 *)(lVar11 + 0x228);
                uStack_fc = *(undefined4 *)(lVar11 + 0x224);
              }
              local_118 = (float)*puVar7;
              fStack_114 = (float)((ulonglong)*puVar7 >> 0x20);
              local_118 = local_118 - (float)*puVar8;
              local_b0 = *(float *)(puVar8 + 1);
              fStack_114 = fStack_114 - (float)((ulonglong)*puVar8 >> 0x20);
              fVar14 = SQRT(fStack_114 * fStack_114 + local_118 * local_118 +
                            (*(float *)(puVar7 + 1) - local_b0) *
                            (*(float *)(puVar7 + 1) - local_b0));
              if (0.0 < fVar14) {
                uVar9 = FRuntimeFloatCurve::GetRichCurve(lVar3 + 400);
                fVar14 = (float)FRichCurve::Eval(uVar9,fVar14,0x3f800000);
                fVar13 = fVar14 * fVar13;
              }
            }
          }
          if (param_4 != 0) {
            cVar6 = *(char *)(lVar3 + 0x138);
            fVar14 = *(float *)(lVar4 + 0x1d8);
            if (cVar6 == '\0') {
              if (0.0 <= fVar13) {
                local_98 = fVar14 * fVar13;
              }
              else {
                local_98 = fVar14 / (1.0 - fVar13) - fVar14;
              }
            }
            else {
              local_98 = fVar13;
              if (cVar6 != '\x01') {
                if (cVar6 == '\x02') {
                  local_98 = (fVar13 - 1.0) * fVar14;
                }
                else {
                  local_98 = 0.0;
                }
              }
            }
            iVar2 = *(int *)(lVar4 + 0x250);
            *(int *)(lVar4 + 0x250) = iVar2 + 1;
            local_a8 = lVar3;
            uStack_a0 = param_4;
            if (*(int *)(lVar4 + 0x254) < iVar2 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(lVar4 + 0x248,iVar2);
            }
            lVar11 = *(longlong *)(lVar4 + 0x248);
            puVar1 = (undefined4 *)(lVar11 + (longlong)iVar2 * 0x18);
            *puVar1 = (undefined4)local_a8;
            puVar1[1] = local_a8._4_4_;
            puVar1[2] = (undefined4)uStack_a0;
            puVar1[3] = uStack_a0._4_4_;
            *(ulonglong *)(lVar11 + 0x10 + (longlong)iVar2 * 0x18) = CONCAT44(uStack_94,local_98);
          }
          cVar6 = *(char *)(lVar3 + 0x138);
          if (cVar6 == '\0') {
            if (fVar13 <= 0.0) {
              local_e8 = local_e0;
            }
LAB_142d0d131:
            pfVar10 = local_e8;
            fVar13 = fVar13 + *pfVar10;
LAB_142d0d135:
            *pfVar10 = fVar13;
          }
          else {
            local_e8 = local_f0;
            if (cVar6 == '\x01') goto LAB_142d0d131;
            if (cVar6 == '\x02') {
              fVar13 = fVar13 * *pfVar10;
              goto LAB_142d0d135;
            }
          }
          if (*(char *)(lVar3 + 0x208) != '\0') {
            *(undefined1 *)(lVar4 + 0x344) = 1;
          }
          *(undefined1 *)param_1[5] = 1;
        }
      }
      plVar12 = plVar12 + 2;
    } while (plVar12 != local_d8);
  }
  return;
}



// FUNCTION 142d0d1d0 FUN_142d0d1d0 body=430 status=ok
// SIG undefined FUN_142d0d1d0(void)

void FUN_142d0d1d0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  char *pcVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  
  cVar3 = FWeakObjectPtr::IsValid();
  if ((cVar3 != '\0') && (cVar3 = FWeakObjectPtr::IsValid(param_1 + 8), cVar3 != '\0')) {
    uVar5 = FWeakObjectPtr::Get(param_1 + 8);
    uVar6 = FWeakObjectPtr::Get(param_1);
    FUN_142d271f0(uVar6,uVar5,0);
    uVar10 = 0;
    uVar11 = uVar10;
    uVar13 = uVar10;
    do {
      lVar7 = FWeakObjectPtr::Get(param_1);
      iVar12 = (int)uVar13;
      if ((-1 < (longlong)uVar11) && (iVar12 < *(int *)(lVar7 + 0x2d0))) {
        lVar7 = FWeakObjectPtr::Get(param_1);
        pcVar9 = (char *)(*(longlong *)(lVar7 + 0x2c8) + uVar10);
        lVar7 = 0x28;
        if (pcVar9[1] == '\0') {
          lVar7 = 0x10;
        }
        uVar5 = *(undefined8 *)(pcVar9 + lVar7);
        uVar1 = *(undefined4 *)(pcVar9 + lVar7 + 8);
        lVar7 = 0x1c;
        if (*pcVar9 == '\0') {
          lVar7 = 4;
        }
        uVar6 = *(undefined8 *)(pcVar9 + lVar7);
        uVar2 = *(undefined4 *)(pcVar9 + lVar7 + 8);
        plVar8 = (longlong *)FWeakObjectPtr::Get(param_1);
        if ((((*(byte *)(plVar8 + 0x17) & 8) == 0) || (iVar4 = FUN_14233f450(plVar8), iVar4 == 3))
           && (iVar12 < (int)plVar8[0x5a])) {
          (**(code **)(*plVar8 + 0x260))(plVar8);
          *(undefined1 *)(uVar10 + plVar8[0x59]) = 1;
          lVar7 = plVar8[0x59];
          *(undefined8 *)(lVar7 + 4 + uVar10) = uVar6;
          *(undefined4 *)(lVar7 + 0xc + uVar10) = uVar2;
          *(undefined1 *)(plVar8[0x59] + 1 + uVar10) = 1;
          lVar7 = plVar8[0x59];
          *(undefined8 *)(lVar7 + 0x10 + uVar10) = uVar5;
          *(undefined4 *)(lVar7 + 0x18 + uVar10) = uVar1;
          FUN_142d2baa0(plVar8);
        }
      }
      uVar13 = (ulonglong)(iVar12 + 1);
      uVar11 = uVar11 + 1;
      uVar10 = uVar10 + 0x34;
    } while ((longlong)uVar10 < 0x69);
  }
  return;
}



// FUNCTION 142d0d380 FUN_142d0d380 body=830 status=ok
// SIG undefined FUN_142d0d380(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d0d380(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  float *pfVar3;
  longlong lVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  char cVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  float fVar15;
  float fVar16;
  float local_c0;
  float fStack_bc;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  float local_7c;
  
  plVar14 = (longlong *)*param_2;
  plVar1 = plVar14 + (int)param_2[1];
  do {
    if (plVar14 == plVar1) {
      return;
    }
    lVar2 = *plVar14;
    if (lVar2 != 0) {
      pfVar3 = (float *)param_1[4];
      lVar4 = *param_1;
      pfVar5 = (float *)param_1[3];
      pfVar6 = (float *)param_1[2];
      pfVar7 = (float *)param_1[1];
      cVar9 = FUN_142d15330(lVar4,lVar2,param_3);
      if (cVar9 != '\0') {
        puVar10 = *(undefined8 **)(lVar2 + 0x178);
        puVar11 = puVar10 + (longlong)*(int *)(lVar2 + 0x180) * 8;
        for (; puVar10 != puVar11; puVar10 = puVar10 + 8) {
          if (*(longlong *)(lVar4 + 0x2b0) == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = *(undefined8 *)(*(longlong *)(lVar4 + 0x2b0) + 0x118);
          }
          cVar9 = FUN_142c48f90(*puVar10,uVar12,*(undefined8 *)(lVar4 + 0x28));
          if (cVar9 != '\0') break;
        }
        fVar15 = (float)FUN_142c98860(lVar2 + 0x140,param_3);
        if (*(char *)(lVar2 + 0x188) != '\0') {
          lVar13 = 0;
          if (*(longlong *)(lVar4 + 0x2b0) != 0) {
            lVar13 = *(longlong *)(*(longlong *)(lVar4 + 0x2b0) + 0x118);
          }
          if ((lVar13 != 0) && (*(longlong *)(lVar4 + 0x28) != 0)) {
            lVar8 = *(longlong *)(*(longlong *)(lVar4 + 0x28) + 0x168);
            if (lVar8 == 0) {
              local_9c = _DAT_1468b5d90;
              puVar10 = &local_9c;
              local_94 = DAT_1468b5d98;
            }
            else {
              puVar10 = (undefined8 *)&local_b4;
              local_b4 = *(undefined4 *)(lVar8 + 0x220);
              local_ac = *(undefined4 *)(lVar8 + 0x228);
              uStack_b0 = *(undefined4 *)(lVar8 + 0x224);
            }
            lVar13 = *(longlong *)(lVar13 + 0x168);
            if (lVar13 == 0) {
              local_90 = _DAT_1468b5d90;
              puVar11 = &local_90;
              local_88 = DAT_1468b5d98;
            }
            else {
              puVar11 = (undefined8 *)&local_a8;
              local_a8 = *(undefined4 *)(lVar13 + 0x220);
              local_a0 = *(undefined4 *)(lVar13 + 0x228);
              uStack_a4 = *(undefined4 *)(lVar13 + 0x224);
            }
            local_c0 = (float)*puVar10;
            fStack_bc = (float)((ulonglong)*puVar10 >> 0x20);
            local_c0 = local_c0 - (float)*puVar11;
            local_7c = *(float *)(puVar11 + 1);
            fStack_bc = fStack_bc - (float)((ulonglong)*puVar11 >> 0x20);
            fVar16 = SQRT(fStack_bc * fStack_bc + local_c0 * local_c0 +
                          (*(float *)(puVar10 + 1) - local_7c) *
                          (*(float *)(puVar10 + 1) - local_7c));
            if (0.0 < fVar16) {
              uVar12 = FRuntimeFloatCurve::GetRichCurve(lVar2 + 400);
              fVar16 = (float)FRichCurve::Eval(uVar12,fVar16,0x3f800000);
              fVar15 = fVar16 * fVar15;
            }
          }
        }
        cVar9 = *(char *)(lVar2 + 0x138);
        if (cVar9 == '\0') {
          if (fVar15 <= 0.0) {
            *pfVar6 = fVar15 + *pfVar6;
          }
          else {
            *pfVar7 = fVar15 + *pfVar7;
          }
        }
        else if (cVar9 == '\x01') {
          *pfVar5 = fVar15 + *pfVar5;
        }
        else if (cVar9 == '\x02') {
          *pfVar3 = fVar15 * *pfVar3;
        }
        if (*(char *)(lVar2 + 0x208) != '\0') {
          *(undefined1 *)(lVar4 + 0x344) = 1;
        }
        *(undefined1 *)param_1[5] = 1;
      }
    }
    plVar14 = plVar14 + 1;
  } while( true );
}



// FUNCTION 142d0d6c0 FUN_142d0d6c0 body=551 status=ok
// SIG undefined FUN_142d0d6c0(void)

void FUN_142d0d6c0(undefined8 *param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int *piVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined8 local_res10;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  lVar7 = *(longlong *)*param_1;
  if (lVar7 == 0) {
    return;
  }
  piVar3 = *(int **)(lVar7 + 0x1d0);
  lVar8 = *(longlong *)(lVar7 + 0x1c8);
  if (piVar3 != piVar3 + (longlong)*(int *)(lVar7 + 0x1d8) * 6) {
    piVar10 = piVar3 + 2;
    do {
      if ((*(longlong *)(piVar10 + -2) == *(longlong *)param_1[1]) &&
         (((iVar2 = *piVar10, iVar2 == -1 || (iVar2 == param_3)) &&
          (lVar8 = *(longlong *)(piVar10 + 2), iVar2 != -1)))) break;
      piVar1 = piVar10 + 4;
      piVar10 = piVar10 + 6;
    } while (piVar1 != piVar3 + (longlong)*(int *)(lVar7 + 0x1d8) * 6);
  }
  if (lVar8 == 0) {
    lVar7 = (**(code **)(**(longlong **)param_1[2] + 0x560))();
    if (lVar7 != 0) {
      lVar8 = FUN_1429ba110();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) goto LAB_142d0d7bd;
    }
    lVar7 = (**(code **)(**(longlong **)param_1[2] + 0x598))();
  }
  else {
    lVar7 = (**(code **)(**(longlong **)param_1[2] + 0x5a0))();
  }
  if (lVar7 == 0) {
    return;
  }
LAB_142d0d7bd:
  plVar11 = (longlong *)*param_1;
  uVar13 = 0;
  puVar15 = *(undefined8 **)(*plVar11 + 0x1b8);
  uVar9 = (ulonglong)*(int *)(*plVar11 + 0x1c0);
  uVar16 = uVar9 & 0x1fffffffffffffff;
  if (puVar15 + uVar9 < puVar15) {
    uVar16 = uVar13;
  }
  if (uVar16 != 0) {
    do {
      uVar4 = *puVar15;
      local_res10 = 0;
      local_30 = 0x202ffff;
      local_2c = 0xffffffff;
      local_38 = uVar4;
      cVar6 = (**(code **)(*param_2 + 0x428))(param_2,&local_38,&local_res10,0);
      if (cVar6 != '\0') {
        FUN_1425a28b0(lVar7,uVar4,local_res10);
        *(undefined1 *)param_1[3] = 1;
      }
      puVar15 = puVar15 + 1;
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar16);
    plVar11 = (longlong *)*param_1;
  }
  plVar12 = *(longlong **)(*plVar11 + 0x1e0);
  plVar11 = plVar12 + (longlong)*(int *)(*plVar11 + 0x1e8) * 3;
  if (plVar12 != plVar11) {
    plVar14 = plVar12 + 1;
    do {
      if (*plVar12 == *(longlong *)param_1[1]) {
        FUN_1425a28b0(lVar7,*plVar14,plVar14[1]);
        *(undefined1 *)param_1[3] = 1;
      }
      plVar12 = plVar12 + 3;
      plVar14 = plVar14 + 3;
    } while (plVar12 != plVar11);
  }
  return;
}



// FUNCTION 142d0d8f0 FUN_142d0d8f0 body=429 status=ok
// SIG undefined FUN_142d0d8f0(void)

void FUN_142d0d8f0(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  char cVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_res20;
  undefined1 local_38 [8];
  longlong local_30;
  
  if (param_2 != 0) {
    FWeakObjectPtr::operator=(param_3);
    pwVar4 = _guard_xfg_dispatch_icall_nop
                       (L"&UDamageOverTimeManager::OnParticleSystemStopped",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res20,pwVar2 + 2,1);
    uVar6 = *param_1;
    FWeakObjectPtr::operator=(local_38,0);
    local_30 = 0;
    FWeakObjectPtr::operator=(local_38,uVar6);
    local_30 = local_res20;
    if ((local_res20 != 0) && (lVar5 = FWeakObjectPtr::Get(local_38), lVar5 != 0)) {
      UObject::FindFunction(lVar5,local_30);
    }
    FUN_1406a5aa0(param_2 + 0x8a8,local_38);
    lVar5 = FWeakObjectPtr::Get(param_1[1] + 0x10);
    if (((lVar5 != 0) && (lVar5 = param_1[1], *(char *)(lVar5 + 0x13c) == '\0')) &&
       (lVar7 = *(longlong *)(lVar5 + 0x220), lVar7 != 0)) {
      lVar8 = lVar5 + 0x4c;
      cVar3 = FWeakObjectPtr::IsValid(lVar8);
      if (cVar3 == '\0') {
        lVar8 = lVar5 + 0x10;
      }
      uVar6 = FWeakObjectPtr::Get(lVar8);
      lVar5 = *(longlong *)(lVar5 + 0x120);
      if (lVar5 == 0) {
        lVar5 = *(longlong *)(lVar7 + 0x108);
      }
      lVar7 = FUN_142d182a0(lVar7,uVar6,lVar5);
      if (lVar7 != 0) {
        uVar6 = FWeakObjectPtr::Get(param_3);
        FUN_142382f60(uVar6,lVar7,&DAT_146532184,lVar5);
        uVar6 = FWeakObjectPtr::Get(param_3);
        FUN_142397000(uVar6,0,1);
      }
    }
  }
  return;
}



// FUNCTION 142d0daa0 FUN_142d0daa0 body=144 status=ok
// SIG undefined FUN_142d0daa0(void)

void FUN_142d0daa0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar3 = FWeakObjectPtr::Get();
  if ((((lVar3 != 0) && (plVar1 = *(longlong **)(lVar3 + 0x118), plVar1 != (longlong *)0x0)) &&
      (plVar2 = (longlong *)plVar1[0x2a], plVar2 != (longlong *)0x0)) && (plVar2 != plVar1)) {
    uVar4 = FUN_142e43690();
    lVar5 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar4);
    if (lVar5 != 0) {
      if (*(char *)(lVar3 + 0x1b0) == '\x01') {
        FUN_142d14820(lVar3,lVar5);
      }
      else if (*(char *)(lVar3 + 0x1b0) == '\x02') {
        FUN_142d1fad0(lVar3,lVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142d0dba0 FUN_142d0dba0 body=113 status=ok
// SIG undefined FUN_142d0dba0(void)

undefined8 * FUN_142d0dba0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1458747c0;
  if (param_1[0x62] != 0) {
    FMemory::Free();
  }
  if (param_1[0x5c] != 0) {
    FMemory::Free();
  }
  FUN_142d0c360(param_1 + 0x38);
  FUN_140a7c7a0(param_1 + 2);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x350);
  }
  return param_1;
}



// FUNCTION 142d0dc20 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UDatasmithCineCameraActorTemplate::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 142d0dc70 FUN_142d0dc70 body=70 status=ok
// SIG undefined FUN_142d0dc70(void)

longlong FUN_142d0dc70(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 142d0dcc0 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UHoudiniInputCameraComponent::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 142d0dd10 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UHoudiniInputHoudiniSplineComponent::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 142d0dd60 FUN_142d0dd60 body=70 status=ok
// SIG undefined FUN_142d0dd60(void)

longlong FUN_142d0dd60(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x148);
  }
  return param_1;
}



// FUNCTION 142d0ddb0 FUN_142d0ddb0 body=70 status=ok
// SIG undefined FUN_142d0ddb0(void)

longlong FUN_142d0ddb0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 142d0de00 FUN_142d0de00 body=82 status=ok
// SIG undefined FUN_142d0de00(void)

longlong FUN_142d0de00(longlong param_1,ulonglong param_2)

{
  FUN_142d0c0b0(param_1 + 0x48);
  FUN_142d0c0b0(param_1 + 0x38);
  FUN_1404bf750(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 142d0de60 FUN_142d0de60 body=124 status=ok
// SIG undefined FUN_142d0de60(void)

longlong FUN_142d0de60(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1c8);
  }
  return param_1;
}



// FUNCTION 142d0dee0 FUN_142d0dee0 body=355 status=ok
// SIG undefined FUN_142d0dee0(void)

longlong FUN_142d0dee0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    FMemory::Free();
  }
  thunk_FUN_142478640(param_1 + 0x2b4);
  thunk_FUN_142478640(param_1 + 0x2a4);
  thunk_FUN_142478640(param_1 + 0x298);
  thunk_FUN_142478640(param_1 + 0x28c);
  thunk_FUN_142478640(param_1 + 0x280);
  FUN_140a7c330(param_1 + 0x270);
  thunk_FUN_142478640(param_1 + 0x264);
  thunk_FUN_142478640(param_1 + 600);
  thunk_FUN_142478640(param_1 + 0x24c);
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x208);
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1d0);
  *(undefined ***)(param_1 + 0x1c8) = &PTR_FUN_1440732c8;
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2f0);
  }
  return param_1;
}



// FUNCTION 142d0e050 FUN_142d0e050 body=52 status=ok
// SIG undefined FUN_142d0e050(void)

undefined8 FUN_142d0e050(undefined8 param_1,ulonglong param_2)

{
  FUN_140a7c970();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x878);
  }
  return param_1;
}



// FUNCTION 142d0e090 FUN_142d0e090 body=90 status=ok
// SIG undefined FUN_142d0e090(void)

longlong FUN_142d0e090(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1f8);
  }
  return param_1;
}



// FUNCTION 142d0e0f0 FUN_142d0e0f0 body=180 status=ok
// SIG undefined FUN_142d0e0f0(void)

longlong FUN_142d0e0f0(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x240) = 0;
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1f8);
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FMemory::Free();
  }
  FRichCurve::~FRichCurve(param_1 + 0x158);
  FRichCurve::~FRichCurve(param_1 + 0xe0);
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x248);
  }
  return param_1;
}



// FUNCTION 142d0e1b0 FUN_142d0e1b0 body=73 status=ok
// SIG undefined FUN_142d0e1b0(void)

longlong FUN_142d0e1b0(longlong param_1,ulonglong param_2)

{
  FUN_141415610(param_1 + 0x30);
  FUN_1404bf750(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 142d0e200 FUN_142d0e200 body=341 status=ok
// SIG undefined FUN_142d0e200(void)

longlong FUN_142d0e200(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x390) = 0;
  if (*(longlong *)(param_1 + 0x388) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x348,0);
  if (*(longlong *)(param_1 + 0x368) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x348) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x330) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 800) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x308);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2f0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2d8);
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    FMemory::Free();
  }
  FUN_140fe64f0(param_1 + 0x1f0);
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  FUN_141411b90(param_1 + 0x1a0);
  FUN_141411b90(param_1 + 400);
  FUN_142d0c200(param_1 + 0x180);
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_1440732c8;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3a0);
  }
  return param_1;
}



// FUNCTION 142d0e360 FUN_142d0e360 body=275 status=ok
// SIG undefined FUN_142d0e360(void)

longlong FUN_142d0e360(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FMemory::Free();
  }
  FUN_142d0c120(param_1 + 0xf8);
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x50);
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
  plVar4 = *(longlong **)(param_1 + 0x38);
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
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x130);
  }
  return param_1;
}



// FUNCTION 142d0e480 `scalar_deleting_destructor' body=132 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UStringTable::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x38);
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
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 142d0e510 FUN_142d0e510 body=201 status=ok
// SIG undefined FUN_142d0e510(void)

longlong FUN_142d0e510(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x50);
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
  plVar4 = *(longlong **)(param_1 + 0x38);
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
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 142d0e5e0 FUN_142d0e5e0 body=230 status=ok
// SIG undefined FUN_142d0e5e0(void)

undefined8
FUN_142d0e5e0(longlong *param_1,float *param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  fVar3 = (float)param_4;
  uVar1 = 0x3f800000;
  fVar4 = 0.0;
  uVar5 = 0;
  fVar6 = 0.0;
  if (*(char *)((longlong)param_1 + 0x134) != '\x02') {
    uVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_1[0xb]);
  }
  fVar2 = (float)uVar1;
  if (fVar3 <= 0.0) {
    if (param_5 != 0) goto LAB_142d0e66c;
    if (0.0001 <= fVar2) {
      fVar4 = fVar2 * *param_2;
      uVar5 = (int)((ulonglong)uVar1 >> 0x20);
    }
  }
  else {
    if (0.0001 <= fVar2) {
      fVar4 = *param_2 * fVar2;
      uVar5 = 0;
      if ((fVar3 < fVar4) && (param_5 != 0)) {
        fVar6 = *param_2 - fVar3 / fVar2;
        fVar4 = fVar3;
        uVar5 = (int)((ulonglong)param_4 >> 0x20);
      }
    }
    *param_2 = fVar6;
LAB_142d0e66c:
    if (param_5 < 0) goto LAB_142d0e6ab;
  }
  if (param_5 < (int)param_1[0x3d]) {
    fVar6 = fVar4;
    if (fVar3 <= fVar4) {
      fVar6 = fVar3;
    }
    *(float *)(param_1[0x3c] + (longlong)param_5 * 4) = fVar6;
  }
LAB_142d0e6ab:
  return CONCAT44(uVar5,fVar4);
}



// FUNCTION 142d0e6d0 thunk_FUN_142d54de0 body=5 status=ok
// SIG undefined thunk_FUN_142d54de0(void)

undefined8 thunk_FUN_142d54de0(void)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (DAT_146b32128 != 0) goto LAB_142d54e8f;
  if ((DAT_146b32138 == 0) || (DAT_146b32130 == (longlong *)0x0)) {
LAB_142d54e35:
    lVar6 = operator_new(0x350);
    if (lVar6 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_142d0a5f0(lVar6);
    }
  }
  else {
    cVar2 = (**(code **)(*DAT_146b32130 + 0x18))();
    if (cVar2 == '\0') goto LAB_142d54e35;
    plVar5 = (longlong *)0x0;
    if (DAT_146b32138 != 0) {
      plVar5 = DAT_146b32130;
    }
    uVar3 = (**(code **)(*plVar5 + 0x38))(plVar5);
  }
  iVar1 = DAT_146b32128;
  lVar6 = (longlong)DAT_146b32128;
  DAT_146b32128 = DAT_146b32128 + 1;
  if (DAT_146b3212c < DAT_146b32128) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146b32120,iVar1);
  }
  *(undefined8 *)(DAT_146b32120 + lVar6 * 8) = uVar3;
LAB_142d54e8f:
  iVar1 = DAT_146b32128 + -1;
  uVar3 = *(undefined8 *)(DAT_146b32120 + (longlong)iVar1 * 8);
  iVar4 = (DAT_146b32128 - iVar1) + -1;
  if (iVar4 != 0) {
    _guard_xfg_dispatch_icall_nop
              ((void *)(DAT_146b32120 + (longlong)iVar1 * 8),
               (void *)(DAT_146b32120 + (longlong)DAT_146b32128 * 8),(longlong)iVar4 << 3);
    DAT_146b32128 = DAT_146b32128 + -1;
    return uVar3;
  }
  DAT_146b32128 = DAT_146b32128 + -1;
  return uVar3;
}



// FUNCTION 142d0e6e0 FUN_142d0e6e0 body=1127 status=ok
// SIG undefined FUN_142d0e6e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d0e6e0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined1 auStack_178 [32];
  longlong *local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  longlong **local_140;
  undefined4 local_138;
  undefined8 local_128;
  longlong *local_120;
  int local_118;
  undefined8 local_110;
  float fStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 local_fc;
  float local_f8;
  longlong local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined4 local_a8;
  undefined2 local_a4;
  longlong local_80;
  undefined8 local_78;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  lVar4 = (**(code **)(*param_1 + 0x148))();
  lVar1 = *param_2;
  if ((((lVar1 != 0) && (param_2[1] != 0)) && (lVar4 != 0)) &&
     ((*(char *)(lVar1 + 0x100) != '\0' || (iVar3 = FUN_1428cf800(lVar4), iVar3 != 3)))) {
    lVar7 = 0x48;
    if (*(char *)((longlong)param_1 + 0x34) == '\0') {
      lVar7 = 0x38;
    }
    plVar8 = (longlong *)(lVar7 + (longlong)param_1);
    iVar3 = (int)plVar8[1];
    *(int *)(plVar8 + 1) = iVar3 + 1;
    if (*(int *)((longlong)plVar8 + 0xc) < iVar3 + 1) {
      FUN_142d27950(plVar8,iVar3);
    }
    FUN_142d0a120(*plVar8 + (longlong)iVar3 * 0x2e0,param_2);
    plVar9 = (longlong *)(*plVar8 + (longlong)iVar3 * 0x2e0);
    *(int *)(plVar9 + 0x45) = (int)param_1[6];
    plVar8 = plVar9 + 1;
    *(undefined4 *)((longlong)plVar9 + 0x22c) = *(undefined4 *)(lVar4 + 0x790);
    iVar3 = 0;
    if ((int)param_1[6] < 0x7fffffff) {
      iVar3 = (int)param_1[6] + 1;
    }
    *(int *)(param_1 + 6) = iVar3;
    lVar7 = *plVar8;
    if (plVar9[2] == 0) {
      lVar5 = FUN_142d46fe0(lVar7);
      plVar9[2] = lVar5;
    }
    plVar6 = plVar9 + 4;
    uVar10 = FUN_142d27d00(lVar1,plVar6,lVar7);
    if (&local_128 != plVar9 + 0x25) {
      *(undefined4 *)(plVar9 + 0x25) = uVar10;
      *(undefined1 *)((longlong)plVar9 + 300) = 1;
    }
    if (*(char *)((longlong)plVar9 + 0x19c) == '\0') {
      uVar10 = FUN_142d9cad0(lVar1 + 200,lVar7);
      if (&local_128 != plVar9 + 0x33) {
        *(undefined4 *)(plVar9 + 0x33) = uVar10;
        *(undefined1 *)((longlong)plVar9 + 0x19c) = 1;
      }
    }
    if (*(longlong *)(lVar1 + 0x98) != 0) {
      local_158 = plVar6;
      FUN_142d1c090(lVar1,local_d8,local_e8,plVar8);
      local_150 = (undefined8 *)FUN_142d146a0(param_1,(int)plVar9[0x44],lVar4);
      local_158 = plVar8;
      local_148 = (undefined8 *)lVar4;
      local_140 = (longlong **)plVar6;
      (**(code **)(**(longlong **)(lVar1 + 0x98) + 0x2a0))
                (*(longlong **)(lVar1 + 0x98),plVar9 + 0x46,local_d8,local_e8);
      if (((*(byte *)(*(longlong *)(lVar1 + 0x98) + 0x2c) & 8) != 0) &&
         (*(char *)((longlong)plVar9 + 0x231) == '\0')) {
        *(undefined1 *)((longlong)plVar9 + 0x2c1) = 1;
      }
      local_158 = plVar9 + 0x59;
      *(undefined1 *)((longlong)plVar9 + 0x2c2) = 1;
      FUN_142d14270(*(undefined8 *)(*plVar9 + 0x98),plVar6,plVar9[3],plVar8);
      if (*(char *)(*(longlong *)(lVar1 + 0x98) + 0x31) == '\0') {
        FUN_142d15de0(param_1,plVar9,lVar4);
      }
      else {
        lVar7 = plVar9[0x45];
        local_110 = FUN_142d1dc60;
        fStack_108 = 0.0;
        local_120 = (longlong *)0x0;
        plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
        local_118 = 3;
        local_120 = plVar6;
        if (plVar6 != (longlong *)0x0) {
          *plVar6 = (longlong)&PTR_FUN_14471e7f0;
          FWeakObjectPtr::operator=(plVar6 + 1,param_1);
          *(undefined4 *)(plVar6 + 2) = (undefined4)local_110;
          *(undefined4 *)((longlong)plVar6 + 0x14) = local_110._4_4_;
          *(float *)(plVar6 + 3) = fStack_108;
          *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_104;
          *(int *)(plVar6 + 4) = (int)lVar7;
          lVar7 = FDelegateHandle::GenerateNewID();
          plVar6[5] = lVar7;
          *plVar6 = (longlong)&PTR_FUN_14471e838;
        }
        lVar1 = *(longlong *)(lVar1 + 0x98);
        local_b8 = 0x10000;
        local_c0 = 0;
        local_c8 = 0;
        local_a8 = 0;
        local_80 = 0;
        local_78 = 0;
        local_60 = 0;
        local_58 = 0;
        local_b0 = 0;
        local_128 = 0;
        local_b4 = 0;
        local_a4 = 0x101;
        local_ac = 0;
        local_b2 = 0;
        local_158 = plVar8;
        FUN_142d17210(lVar1,&local_c8,0,0);
        local_140 = &local_120;
        local_100 = *(undefined4 *)((longlong)plVar9 + 0x244);
        local_fc = (undefined4)plVar9[0x49];
        local_110 = *(code **)((longlong)plVar9 + 0x244);
        local_138 = 0;
        fStack_108 = *(float *)((longlong)plVar9 + 0x24c) + *(float *)(lVar1 + 0x38);
        local_f8 = *(float *)((longlong)plVar9 + 0x24c) - *(float *)(lVar1 + 0x34);
        local_148 = &local_c8;
        local_150 = &local_128;
        local_158 = (longlong *)&local_100;
        local_b2 = 1;
        uVar2 = (ulonglong)local_128 >> 0x20;
        local_128 = CONCAT44((uint)uVar2 & 0xffffff00,3);
        FUN_142330140(lVar4,&local_f0,1,&local_110);
        if (local_60 != 0) {
          FMemory::Free();
        }
        if (local_80 != 0) {
          FMemory::Free();
        }
        *(char *)(plVar9 + 0x58) = (local_f0 == 0) + '\x02';
        if (local_118 != 0) {
          if (local_120 == (longlong *)0x0) {
            return;
          }
          (**(code **)(*local_120 + 0x28))(local_120,0);
          if (local_120 != (longlong *)0x0) {
            local_120 = (longlong *)FMemory::Realloc(local_120,0,0);
          }
          local_118 = 0;
        }
        if (local_120 != (longlong *)0x0) {
          FMemory::Free(local_120);
        }
      }
    }
  }
  return;
}



// FUNCTION 142d0eb50 FUN_142d0eb50 body=614 status=ok
// SIG undefined FUN_142d0eb50(void)

void FUN_142d0eb50(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if (param_2 != 0) {
    lVar4 = FUN_142e05930();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      plVar6 = (longlong *)(param_1 + 0x198);
      plVar1 = (longlong *)*plVar6;
      lVar4 = (longlong)*(int *)(param_1 + 0x1a0);
      for (plVar5 = plVar1; plVar5 != plVar1 + lVar4; plVar5 = plVar5 + 1) {
        if (*plVar5 == param_2) {
          if ((int)((longlong)plVar5 - (longlong)plVar1 >> 3) != -1) {
            return;
          }
          break;
        }
      }
      iVar3 = *(int *)(param_1 + 0x1a0) + 1;
      *(int *)(param_1 + 0x1a0) = iVar3;
      if (*(int *)(param_1 + 0x1a4) < iVar3) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6);
      }
    }
    else {
      lVar4 = FUN_142e02630();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        plVar6 = (longlong *)(param_1 + 0x1a8);
        plVar1 = (longlong *)*plVar6;
        lVar4 = (longlong)*(int *)(param_1 + 0x1b0);
        for (plVar5 = plVar1; plVar5 != plVar1 + lVar4; plVar5 = plVar5 + 1) {
          if (*plVar5 == param_2) {
            if ((int)((longlong)plVar5 - (longlong)plVar1 >> 3) != -1) {
              return;
            }
            break;
          }
        }
        iVar3 = *(int *)(param_1 + 0x1b0) + 1;
        *(int *)(param_1 + 0x1b0) = iVar3;
        if (*(int *)(param_1 + 0x1b4) < iVar3) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6);
        }
      }
      else {
        lVar4 = FUN_142e06650();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          plVar6 = (longlong *)(param_1 + 0x178);
          plVar1 = (longlong *)*plVar6;
          lVar4 = (longlong)*(int *)(param_1 + 0x180);
          for (plVar5 = plVar1; plVar5 != plVar1 + lVar4; plVar5 = plVar5 + 1) {
            if (*plVar5 == param_2) {
              if ((int)((longlong)plVar5 - (longlong)plVar1 >> 3) != -1) {
                return;
              }
              break;
            }
          }
          iVar3 = *(int *)(param_1 + 0x180) + 1;
          *(int *)(param_1 + 0x180) = iVar3;
          if (*(int *)(param_1 + 0x184) < iVar3) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6);
          }
        }
        else {
          lVar4 = FUN_142e02530();
          if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) {
            return;
          }
          plVar6 = (longlong *)(param_1 + 0x188);
          plVar1 = (longlong *)*plVar6;
          lVar4 = (longlong)*(int *)(param_1 + 400);
          for (plVar5 = plVar1; plVar5 != plVar1 + lVar4; plVar5 = plVar5 + 1) {
            if (*plVar5 == param_2) {
              if ((int)((longlong)plVar5 - (longlong)plVar1 >> 3) != -1) {
                return;
              }
              break;
            }
          }
          iVar3 = *(int *)(param_1 + 400) + 1;
          *(int *)(param_1 + 400) = iVar3;
          if (*(int *)(param_1 + 0x194) < iVar3) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6);
          }
        }
      }
    }
    *(longlong *)(*plVar6 + lVar4 * 8) = param_2;
  }
  return;
}



// FUNCTION 142d0edc0 FUN_142d0edc0 body=971 status=ok
// SIG undefined FUN_142d0edc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d0edc0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  float param_5,undefined8 *param_6,undefined8 param_7,undefined8 *param_8)

{
  float *pfVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Dst;
  undefined8 *_Src;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong local_200;
  undefined8 *local_1f8;
  longlong local_1e8;
  byte local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  longlong local_100;
  undefined8 local_f8;
  float local_f0;
  undefined1 local_e8 [12];
  undefined4 local_dc;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  iVar10 = -1;
  local_1f8 = param_8;
  if (((*(byte *)(param_1 + 0x2c) & 1) == 0) || (*(int *)(param_1 + 0x28) != 1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  uVar8 = 0;
  iVar11 = iVar10;
  local_208 = param_3;
  local_200 = param_4;
  if ((bVar2) && (param_3 != 0)) {
    if ((*(byte *)(param_3 + 0x7e8) & 2) != 0) {
      param_3 = FUN_142d19dd0(param_3);
    }
    if ((param_3 != 0) && (uVar6 = uVar8, uVar12 = uVar8, 0 < (int)param_2[1])) {
      do {
        lVar4 = *param_2;
        lVar3 = *(longlong *)(uVar12 + lVar4);
        iVar11 = (int)uVar6;
        if (lVar3 != 0) {
          if ((*(byte *)(lVar3 + 0x7e8) & 2) != 0) {
            lVar3 = FUN_142d19dd0(lVar3);
          }
          if ((lVar3 != 0) && (lVar3 == param_3)) {
            pfVar1 = (float *)(uVar12 + 0xf8 + lVar4);
            if (param_5 < *pfVar1 || param_5 == *pfVar1) {
              return;
            }
            if (iVar11 == -1) {
              return;
            }
            if ((-1 < iVar11) && (iVar11 < (int)param_2[1])) {
              bVar2 = true;
              goto LAB_142d0eebb;
            }
            break;
          }
        }
        uVar5 = iVar11 + 1;
        uVar6 = (ulonglong)uVar5;
        uVar12 = uVar12 + 400;
        iVar11 = iVar10;
      } while ((int)uVar5 < (int)param_2[1]);
    }
  }
  bVar2 = false;
LAB_142d0eebb:
  if (!bVar2) {
    iVar11 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<400,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2);
    }
    _Dst = (void *)((longlong)iVar11 * 400 + *param_2);
    *(undefined8 *)((longlong)_Dst + 0x20) = 0;
    *(undefined8 *)((longlong)_Dst + 0xe8) = 0;
    *(undefined8 *)((longlong)_Dst + 0xf0) = 0;
    *(undefined4 *)((longlong)_Dst + 0x164) = 0xffffffff;
    *(undefined4 *)((longlong)_Dst + 0x168) = 0;
    *(undefined4 *)((longlong)_Dst + 0x16c) = 0xffffffff;
    *(undefined4 *)((longlong)_Dst + 0x170) = 0;
    *(undefined4 *)((longlong)_Dst + 0x174) = 0xffffffff;
    *(undefined4 *)((longlong)_Dst + 0x178) = 0;
    *(undefined8 *)((longlong)_Dst + 0x180) = 0;
    *(undefined8 *)((longlong)_Dst + 0x188) = 0;
    *(undefined4 *)((longlong)_Dst + 0x10c) = 0x3f800000;
    _guard_xfg_dispatch_icall_nop(_Dst,0,400);
  }
  local_1d8 = 0;
  lVar3 = (longlong)iVar11 * 400 + *param_2;
  local_1d0 = 0;
  local_1c8 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_84 = 0xffffffff;
  local_80 = 0;
  local_7c = 0xffffffff;
  local_78 = 0;
  local_74 = 0xffffffff;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  _guard_xfg_dispatch_icall_nop(local_e8,0,0x90);
  lVar4 = local_200;
  local_1e0 = local_1e0 & 0xe0;
  local_dc = 0x3f800000;
  local_1e8 = local_208;
  local_f0 = param_5;
  FWeakObjectPtr::operator=(&local_7c,local_200);
  uVar6 = *(ulonglong *)(lVar4 + 0x168);
  if (uVar6 != 0) {
    lVar4 = FUN_1429f11d0();
    if ((*(int *)(*(longlong *)(uVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_142d0f06e;
  }
  uVar6 = uVar8;
LAB_142d0f06e:
  FWeakObjectPtr::operator=(&local_74,uVar6);
  local_d4 = *param_6;
  local_cc = *(undefined4 *)(param_6 + 1);
  local_c8 = local_d4;
  local_c0 = local_cc;
  FUN_142d0c3c0(lVar3,&local_1e8);
  if (local_100 != 0) {
    FMemory::Free();
  }
  if (local_1f8 != (undefined8 *)0x0) {
    puVar9 = local_1f8 + 2;
    *(undefined8 *)(lVar3 + 0x18) = *local_1f8;
    *(undefined8 *)(lVar3 + 0x20) = local_1f8[1];
    puVar7 = (undefined8 *)(lVar3 + 0x28);
    if (puVar7 != puVar9) {
      iVar10 = *(int *)(local_1f8 + 0x1b);
      _Src = (undefined8 *)local_1f8[0x1a];
      *(int *)(lVar3 + 0xf0) = iVar10;
      if ((iVar10 == 0) && (*(int *)(lVar3 + 0xf4) == 0)) {
        *(undefined4 *)(lVar3 + 0xf4) = 0;
      }
      else {
        TArray<FObjectInitializer::FOverrides::FOverride,TInlineAllocator<8,FDefaultAllocator>_>::
        ResizeForCopy(puVar7,iVar10);
        if (_Src == (undefined8 *)0x0) {
          _Src = puVar9;
        }
        puVar9 = *(undefined8 **)(lVar3 + 0xe8);
        if (*(undefined8 **)(lVar3 + 0xe8) == (undefined8 *)0x0) {
          puVar9 = puVar7;
        }
        _guard_xfg_dispatch_icall_nop(puVar9,_Src,(longlong)iVar10 * 0x18);
      }
    }
  }
  return;
}



// FUNCTION 142d0f190 FUN_142d0f190 body=519 status=ok
// SIG undefined FUN_142d0f190(void)

void FUN_142d0f190(longlong param_1)

{
  undefined8 *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  longlong *plVar8;
  longlong *plVar9;
  float fVar10;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  
  fVar2 = *(float *)(param_1 + 0x1d8);
  fVar10 = fVar2;
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    if ((*(char *)(param_1 + 0x2f0) == '\x01') && (iVar3 = *(int *)(param_1 + 0x2e8), 0 < iVar3)) {
      plVar8 = *(longlong **)(param_1 + 0x2e0);
      plVar9 = plVar8 + (longlong)iVar3 * 2;
      fVar10 = 0.0;
      for (; plVar8 != plVar9; plVar8 = plVar8 + 2) {
        if (*plVar8 != 0) {
          lVar5 = *plVar8;
          lVar6 = plVar8[1];
          *(float *)(param_1 + 0x1d8) = fVar2 / (float)iVar3;
          *(longlong *)(param_1 + 0x2d0) = lVar5;
          *(longlong *)(param_1 + 0x2d8) = lVar6;
          local_68 = 0;
          uStack_60 = 0xffffffff;
          local_58 = 0;
          FUN_142d340a0(*(undefined8 *)(param_1 + 0x2b8),param_1,&local_68);
          iVar4 = *(int *)(param_1 + 0x240);
          fVar10 = fVar10 + local_58._4_4_;
          *(int *)(param_1 + 0x240) = iVar4 + 1;
          if (*(int *)(param_1 + 0x244) < iVar4 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(param_1 + 0x238,iVar4);
          }
          lVar5 = *(longlong *)(param_1 + 0x238);
          auVar7._8_4_ = uStack_60;
          auVar7._0_8_ = local_68;
          auVar7._12_4_ = uStack_5c;
          *(undefined1 (*) [16])(lVar5 + (longlong)iVar4 * 0x18) = auVar7;
          *(undefined8 *)(lVar5 + 0x10 + (longlong)iVar4 * 0x18) = local_58;
        }
        *(undefined8 *)(param_1 + 0x2d0) = 0;
        *(undefined4 *)(param_1 + 0x2d8) = 0xffffffff;
      }
    }
    else if (*(longlong *)(param_1 + 0x2d0) != 0) {
      uStack_60 = 0xffffffff;
      local_68 = 0;
      local_58 = 0;
      FUN_142d340a0(*(longlong *)(param_1 + 0x2b8),param_1,&local_68);
      iVar3 = *(int *)(param_1 + 0x240);
      fVar10 = local_58._4_4_;
      *(int *)(param_1 + 0x240) = iVar3 + 1;
      if (*(int *)(param_1 + 0x244) < iVar3 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1 + 0x238,iVar3);
      }
      lVar5 = *(longlong *)(param_1 + 0x238);
      puVar1 = (undefined8 *)(lVar5 + (longlong)iVar3 * 0x18);
      *puVar1 = local_68;
      puVar1[1] = CONCAT44(uStack_5c,uStack_60);
      *(undefined8 *)(lVar5 + 0x10 + (longlong)iVar3 * 0x18) = local_58;
    }
  }
  *(float *)(param_1 + 0x1d8) = fVar10;
  *(float *)(param_1 + 0x20c) = fVar2 - fVar10;
  return;
}



// FUNCTION 142d0f3a0 FUN_142d0f3a0 body=778 status=ok
// SIG undefined FUN_142d0f3a0(void)

void FUN_142d0f3a0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_res8 [2];
  
  lVar1 = param_1[0x56];
  if (lVar1 != 0) {
    fVar10 = 0.0;
    fVar11 = *(float *)(param_1 + 0x3b);
    fVar12 = 0.0;
    local_res8[0] = fVar11;
    if (*(int *)(lVar1 + 0x670) == 0) {
      if (*(int *)(lVar1 + 0x680) != 0) {
        *(byte *)((longlong)param_1 + 0x214) = *(byte *)((longlong)param_1 + 0x214) | 8;
        fVar11 = 1.0;
        iVar4 = *(int *)(lVar1 + 0x680) + -1;
        if (0 < iVar4) {
          lVar5 = (longlong)iVar4 * 0x78;
          lVar6 = lVar5;
          do {
            cVar2 = FUN_142d52a00(*(longlong *)(lVar1 + 0x678) + 0x60 + lVar5);
            if (cVar2 != '\0') {
              uVar3 = FUN_142d52a20(*(longlong *)(lVar1 + 0x678) + 0x60 + lVar5);
              uVar3 = FArchive::operator<<(uVar3);
              fVar8 = (float)FUN_142d5fea0(uVar3);
              if (fVar8 < 1.0) {
                *(byte *)((longlong)param_1 + 0x214) = *(byte *)((longlong)param_1 + 0x214) & 0xf7;
              }
              uVar3 = FUN_142d52a20(*(longlong *)(lVar1 + 0x678) + 0x60 + lVar5);
              uVar3 = FArchive::operator<<(uVar3);
              uVar9 = FUN_142d5fed0(uVar3);
              fVar8 = (float)FUN_142d0e5e0(param_1,local_res8,
                                           *(undefined8 *)(lVar6 + *(longlong *)(lVar1 + 0x678)),
                                           uVar9,iVar4);
              fVar12 = fVar12 + fVar8;
            }
            iVar4 = iVar4 + -1;
            lVar5 = lVar5 + -0x78;
            lVar6 = lVar6 + -0x78;
          } while (0 < iVar4);
        }
        fVar8 = local_res8[0];
        cVar2 = FUN_142d52a00(*(longlong *)(lVar1 + 0x678) + 0x60);
        if (cVar2 == '\0') {
          *(float *)(param_1 + 0x3b) = fVar8;
        }
        else {
          uVar3 = FUN_142d52a20(*(longlong *)(lVar1 + 0x678) + 0x60);
          uVar3 = FArchive::operator<<(uVar3);
          fVar7 = (float)FUN_142d5fea0(uVar3);
          if (fVar7 < 1.0) {
            *(byte *)((longlong)param_1 + 0x214) = *(byte *)((longlong)param_1 + 0x214) & 0xf7;
          }
          uVar3 = FUN_142d52a20(*(longlong *)(lVar1 + 0x678) + 0x60);
          uVar3 = FArchive::operator<<(uVar3);
          fVar7 = (float)FUN_142d5fed0(uVar3);
          if (*(char *)((longlong)param_1 + 0x134) != '\x02') {
            fVar11 = (float)(**(code **)(*param_1 + 0x20))
                                      (param_1,param_1[0xb],**(undefined8 **)(lVar1 + 0x678));
          }
          if (0.0001 <= fVar11) {
            fVar10 = fVar11 * fVar8;
          }
          if (0 < (int)param_1[0x3d]) {
            fVar11 = fVar10;
            if (fVar7 <= fVar10) {
              fVar11 = fVar7;
            }
            *(float *)param_1[0x3c] = fVar11;
          }
          *(float *)(param_1 + 0x3b) = fVar10;
        }
      }
    }
    else if (*(int *)(lVar1 + 0x670) == 1) {
      cVar2 = FUN_14247c3b0(lVar1 + 0x6c8,*(undefined4 *)(lVar1 + 0x6d4));
      if (cVar2 != '\0') {
        *(byte *)((longlong)param_1 + 0x214) = *(byte *)((longlong)param_1 + 0x214) | 8;
      }
      fVar8 = *(float *)(lVar1 + 0x6d4);
      fVar7 = 1.0;
      if (*(char *)((longlong)param_1 + 0x134) != '\x02') {
        fVar7 = (float)(**(code **)(*param_1 + 0x20))
                                 (param_1,param_1[0xb],*(undefined8 *)(lVar1 + 0x6c0));
      }
      if (0.0001 <= fVar7) {
        fVar10 = fVar7 * fVar11;
      }
      if (0 < (int)param_1[0x3d]) {
        fVar11 = fVar10;
        if (fVar8 <= fVar10) {
          fVar11 = fVar8;
        }
        *(float *)param_1[0x3c] = fVar11;
      }
      *(float *)(param_1 + 0x3b) = fVar10;
    }
    *(float *)((longlong)param_1 + 0x1dc) = fVar12;
  }
  return;
}



// FUNCTION 142d0f6b0 FUN_142d0f6b0 body=556 status=ok
// SIG undefined FUN_142d0f6b0(void)

void FUN_142d0f6b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_98;
  uint local_90;
  uint uStack_8c;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  lVar1 = *(longlong *)(param_1 + 0x2a0);
  local_68 = param_5;
  local_60 = param_6;
  local_38 = param_5;
  local_30 = param_6;
  local_88 = param_1;
  local_80 = param_2;
  local_78 = param_3;
  local_70 = param_4;
  local_58 = param_1;
  local_50 = param_2;
  local_48 = param_3;
  local_40 = param_4;
  if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 400))) {
    uVar3 = FUN_142d19790();
    FUN_142d0cd90(&local_88,lVar1 + 0x188,uVar3,lVar1,0);
  }
  lVar1 = *(longlong *)(param_1 + 0x290);
  if (((lVar1 != 0) && (*(longlong *)(param_1 + 0x2a0) != lVar1)) && (0 < *(int *)(lVar1 + 400))) {
    FUN_142d0cd90(&local_88,lVar1 + 0x188,*(undefined8 *)(param_1 + 0x268),lVar1,1);
  }
  lVar1 = *(longlong *)(param_1 + 0x2b0);
  if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 400))) {
    FUN_142d0cd90(&local_88,lVar1 + 0x188,*(undefined8 *)(lVar1 + 0x118),lVar1,0);
  }
  lVar1 = *(longlong *)(param_1 + 0x40);
  if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x180))) {
    FUN_142d0d380(&local_58,lVar1 + 0x178,*(undefined8 *)(lVar1 + 0x118));
  }
  lVar6 = *(longlong *)(param_1 + 0x1b0);
  uVar8 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_8c = 0;
  lVar1 = lVar6 + (longlong)*(int *)(param_1 + 0x1b8) * 8;
  uVar9 = uVar8;
  uVar10 = uVar8;
  if (lVar6 != lVar1) {
    do {
      lVar4 = FWeakObjectPtr::Get(lVar6);
      if (lVar4 != 0) {
        lVar5 = FUN_142e06650();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          iVar7 = (int)uVar8;
          local_90 = iVar7 + 1;
          if ((int)uVar9 < (int)local_90) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_98,uVar8);
            uVar9 = (ulonglong)uStack_8c;
            uVar10 = local_98;
          }
          uVar8 = (ulonglong)local_90;
          *(longlong *)(uVar10 + (longlong)iVar7 * 8) = lVar4;
        }
      }
      lVar6 = lVar6 + 8;
    } while (lVar6 != lVar1);
    if (0 < (int)uVar8) {
      uVar3 = FUN_142d19790(param_1);
      FUN_142d0d380(&local_58,&local_98,uVar3);
      uVar10 = local_98;
    }
    if (uVar10 != 0) {
      FMemory::Free(uVar10);
    }
  }
  return;
}



// FUNCTION 142d0f8e0 FUN_142d0f8e0 body=630 status=ok
// SIG undefined FUN_142d0f8e0(void)

void FUN_142d0f8e0(longlong *param_1)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  lVar6 = param_1[0x56];
  if (lVar6 != 0) {
    lVar3 = param_1[0xb];
    plVar4 = (longlong *)param_1[10];
    uVar9 = 0;
    fVar1 = *(float *)(param_1 + 0x3b);
    if (plVar4 == (longlong *)0x0) {
      lVar11 = 0;
    }
    else {
      lVar11 = plVar4[0x1f];
      if (lVar11 == 0) {
        (**(code **)(*plVar4 + 0x368))(plVar4);
        lVar6 = param_1[0x56];
        lVar11 = plVar4[0x1f];
      }
    }
    cVar2 = *(char *)((longlong)param_1 + 0x333);
    if (((*(int *)(lVar6 + 0x670) == 0) && (0.0 < fVar1)) &&
       (uVar13 = uVar9, uVar14 = uVar9, fVar18 = fVar1, 0 < *(int *)(lVar6 + 0x680))) {
      do {
        lVar6 = *(longlong *)(lVar6 + 0x678);
        if (*(longlong *)(uVar9 + lVar6) != 0) {
          lVar10 = lVar6 + 0x60 + uVar9;
          cVar5 = FUN_142d52a00(lVar10);
          if (cVar5 != '\0') {
            uVar7 = FUN_142d52a20(lVar10);
            lVar8 = FArchive::operator<<(uVar7);
            fVar17 = *(float *)(lVar8 + 0x20);
            uVar7 = FUN_142d52a20(lVar10);
            uVar7 = FArchive::operator<<(uVar7);
            fVar15 = (float)FUN_142d5fed0(uVar7);
            fVar17 = fVar17 - fVar15;
            if ((0.0 < fVar17) &&
               (fVar15 = (float)(**(code **)(*param_1 + 0x20))
                                          (param_1,lVar3,*(undefined8 *)(uVar9 + lVar6)),
               0.0 < fVar15)) {
              if (cVar2 == '\x03') {
                if (lVar11 == 0) {
                  fVar16 = 0.0;
                }
                else {
                  uVar7 = FUN_142d19800(param_1);
                  fVar16 = (float)FUN_142d3bbf0(lVar11,uVar7,*(undefined8 *)(uVar9 + lVar6));
                }
                fVar15 = fVar15 * fVar1 * fVar16;
              }
              else {
                fVar15 = fVar15 * fVar18;
                if (fVar15 <= fVar17) {
                  fVar18 = 0.0;
                }
                else {
                  fVar18 = fVar18 - fVar17;
                }
              }
              if (0.0 <= fVar15) {
                if (fVar17 <= fVar15) {
                  fVar15 = fVar17;
                }
              }
              else {
                fVar15 = 0.0;
              }
              if ((-1 < (longlong)uVar14) && ((int)uVar13 < (int)param_1[0x3d])) {
                *(float *)(param_1[0x3c] + uVar14 * 4) = fVar15;
              }
              if (fVar18 < 0.0001) {
                return;
              }
            }
          }
        }
        lVar6 = param_1[0x56];
        uVar12 = (int)uVar13 + 1;
        uVar9 = uVar9 + 0x78;
        uVar13 = (ulonglong)uVar12;
        uVar14 = uVar14 + 1;
      } while ((int)uVar12 < *(int *)(lVar6 + 0x680));
    }
  }
  return;
}



// FUNCTION 142d0fb60 FUN_142d0fb60 body=569 status=ok
// SIG undefined FUN_142d0fb60(void)

void FUN_142d0fb60(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  float fVar7;
  float fVar8;
  
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x1d0);
  if ((((*(byte *)(param_1 + 0x840) & 1) == 0) &&
      (cVar1 = FUN_1407c3030(param_1 + 0x290), cVar1 == '\0')) &&
     ((*(uint *)(param_1 + 0x840) >> 3 & 1) == 0)) {
    if (*(int *)(param_1 + 0x670) == 0) {
      iVar4 = *(int *)(param_1 + 0x680) + -1;
      lVar3 = (longlong)iVar4;
      if (-1 < iVar4) {
        do {
          lVar5 = lVar3 * 0x78 + *(longlong *)(param_1 + 0x678);
          cVar1 = FUN_142d52a00(lVar5 + 0x60);
          if (((cVar1 != '\0') && (-1 < lVar3)) && (iVar4 < *(int *)(param_2 + 0x1e8))) {
            uVar2 = FUN_142d52a20(lVar5 + 0x60);
            uVar2 = FArchive::operator<<(uVar2);
            fVar7 = (float)FUN_142d5fed0(uVar2);
            bVar6 = 1;
            fVar8 = *(float *)(*(longlong *)(param_2 + 0x1e0) + lVar3 * 4);
            if (fVar8 <= 0.0) {
              bVar6 = *(byte *)(lVar5 + 0x20) & 1;
            }
            else {
              if (fVar7 - 1.0 < fVar8) {
                fVar7 = 0.0;
              }
              else {
                fVar7 = fVar7 - fVar8;
              }
              if (((lVar3 == 0) && (cVar1 = FUN_142d1f590(param_1), cVar1 != '\0')) &&
                 (fVar7 <= 1.0)) {
                fVar7 = 1.0;
              }
            }
            uVar2 = FUN_142d52a20(lVar5 + 0x60);
            uVar2 = FArchive::operator<<(uVar2);
            FUN_142d6f560(uVar2,fVar7,bVar6);
          }
          iVar4 = iVar4 + -1;
          lVar3 = lVar3 + -1;
        } while (-1 < lVar3);
      }
    }
    else if ((*(int *)(param_1 + 0x670) == 1) && (0 < *(int *)(param_2 + 0x1e8))) {
      if (*(float *)(param_1 + 0x6d4) - 1.0 < **(float **)(param_2 + 0x1e0)) {
        fVar8 = 0.0;
      }
      else {
        fVar8 = *(float *)(param_1 + 0x6d4) - **(float **)(param_2 + 0x1e0);
      }
      cVar1 = FUN_142d1f590(param_1);
      if ((cVar1 != '\0') && (fVar8 <= 1.0)) {
        fVar8 = 1.0;
      }
      fVar7 = 0.0;
      if ((0.0 <= fVar8) &&
         (fVar7 = *(float *)(param_1 + 0x6cc), fVar8 <= *(float *)(param_1 + 0x6cc))) {
        fVar7 = fVar8;
      }
      *(float *)(param_1 + 0x6d4) = fVar7;
      if (*(longlong **)(param_1 + 0x6d8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x260))();
      }
    }
  }
  return;
}



// FUNCTION 142d0fda0 FUN_142d0fda0 body=1025 status=ok
// SIG undefined FUN_142d0fda0(void)

void FUN_142d0fda0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong *local_res10;
  undefined8 local_48;
  uint uStack_40;
  uint uStack_3c;
  
  if (*(char *)(param_1 + 0x2f0) != '\x01') {
    plVar8 = (longlong *)0x0;
    local_res10 = (longlong *)0x0;
    lVar1 = *(longlong *)(param_1 + 0x2a0);
    plVar7 = plVar8;
    if ((lVar1 != 0) && (iVar9 = *(int *)(lVar1 + 0x1c0), plVar7 = (longlong *)0x0, 0 < iVar9)) {
      plVar10 = *(longlong **)(lVar1 + 0x1b8);
      plVar11 = (longlong *)((longlong)iVar9 & 0x1fffffffffffffff);
      if (plVar10 + iVar9 < plVar10) {
        plVar11 = plVar8;
      }
      plVar6 = plVar8;
      plVar14 = plVar8;
      plVar15 = plVar8;
      if (plVar11 != (longlong *)0x0) {
        do {
          lVar1 = *plVar10;
          if ((((lVar1 != 0) && (*(longlong *)(lVar1 + 0x140) != 0)) &&
              (cVar3 = FUN_142d15330(param_1,lVar1,0), cVar3 != '\0')) &&
             ((uint)plVar6 <= *(uint *)(lVar1 + 0x138))) {
            plVar15 = *(longlong **)(lVar1 + 0x140);
            plVar6 = (longlong *)(ulonglong)*(uint *)(lVar1 + 0x138);
          }
          plVar10 = plVar10 + 1;
          plVar14 = (longlong *)((longlong)plVar14 + 1);
          plVar7 = plVar6;
          local_res10 = plVar15;
        } while (plVar14 != plVar11);
      }
    }
    lVar1 = *(longlong *)(param_1 + 0x290);
    if (((lVar1 != 0) && (lVar1 != *(longlong *)(param_1 + 0x2a0))) &&
       (iVar9 = *(int *)(lVar1 + 0x1c0), 0 < iVar9)) {
      plVar10 = *(longlong **)(lVar1 + 0x1b8);
      plVar11 = (longlong *)((longlong)iVar9 & 0x1fffffffffffffff);
      if (plVar10 + iVar9 < plVar10) {
        plVar11 = plVar8;
      }
      plVar15 = plVar8;
      if (plVar11 != (longlong *)0x0) {
        do {
          lVar1 = *plVar10;
          if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x140) != 0)) &&
             ((*(char *)(lVar1 + 0x131) != '\0' &&
              ((cVar3 = FUN_142d15330(param_1,lVar1,0), cVar3 != '\0' &&
               ((uint)plVar7 <= *(uint *)(lVar1 + 0x138))))))) {
            local_res10 = *(longlong **)(lVar1 + 0x140);
            plVar7 = (longlong *)(ulonglong)*(uint *)(lVar1 + 0x138);
          }
          plVar10 = plVar10 + 1;
          plVar15 = (longlong *)((longlong)plVar15 + 1);
        } while (plVar15 != plVar11);
      }
    }
    lVar1 = *(longlong *)(param_1 + 0x2b0);
    if ((lVar1 != 0) && (iVar9 = *(int *)(lVar1 + 0x1c0), 0 < iVar9)) {
      plVar10 = *(longlong **)(lVar1 + 0x1b8);
      plVar11 = (longlong *)((longlong)iVar9 & 0x1fffffffffffffff);
      if (plVar10 + iVar9 < plVar10) {
        plVar11 = plVar8;
      }
      plVar15 = plVar8;
      if (plVar11 != (longlong *)0x0) {
        do {
          lVar1 = *plVar10;
          if ((((lVar1 != 0) && (*(longlong *)(lVar1 + 0x140) != 0)) &&
              (cVar3 = FUN_142d15330(param_1,lVar1,0), cVar3 != '\0')) &&
             ((uint)plVar7 <= *(uint *)(lVar1 + 0x138))) {
            local_res10 = *(longlong **)(lVar1 + 0x140);
            plVar7 = (longlong *)(ulonglong)*(uint *)(lVar1 + 0x138);
          }
          plVar10 = plVar10 + 1;
          plVar15 = (longlong *)((longlong)plVar15 + 1);
        } while (plVar15 != plVar11);
      }
    }
    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((lVar1 != 0) && (iVar9 = *(int *)(lVar1 + 0x1b0), 0 < iVar9)) {
      plVar10 = *(longlong **)(lVar1 + 0x1a8);
      plVar11 = (longlong *)((longlong)iVar9 & 0x1fffffffffffffff);
      if (plVar10 + iVar9 < plVar10) {
        plVar11 = plVar8;
      }
      plVar15 = plVar8;
      if (plVar11 != (longlong *)0x0) {
        do {
          lVar1 = *plVar10;
          if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x140) != 0)) &&
             ((cVar3 = FUN_142d15330(param_1,lVar1,0), cVar3 != '\0' &&
              ((uint)plVar7 <= *(uint *)(lVar1 + 0x138))))) {
            local_res10 = *(longlong **)(lVar1 + 0x140);
            plVar7 = (longlong *)(ulonglong)*(uint *)(lVar1 + 0x138);
          }
          plVar10 = plVar10 + 1;
          plVar15 = (longlong *)((longlong)plVar15 + 1);
        } while (plVar15 != plVar11);
      }
    }
    lVar12 = *(longlong *)(param_1 + 0x1b0);
    local_48 = (longlong *)0x0;
    uStack_3c = 0;
    lVar1 = lVar12 + (longlong)*(int *)(param_1 + 0x1b8) * 8;
    plVar11 = plVar8;
    plVar15 = plVar8;
    plVar10 = plVar8;
    if (lVar12 != lVar1) {
      do {
        lVar4 = FWeakObjectPtr::Get(lVar12);
        if (lVar4 != 0) {
          lVar5 = FUN_142e02630();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            iVar9 = (int)plVar11;
            uStack_40 = iVar9 + 1;
            if ((int)plVar15 < (int)uStack_40) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,plVar11);
              plVar15 = (longlong *)(ulonglong)uStack_3c;
              plVar8 = local_48;
            }
            plVar11 = (longlong *)(ulonglong)uStack_40;
            plVar8[iVar9] = lVar4;
          }
        }
        plVar10 = local_48;
        lVar12 = lVar12 + 8;
      } while (lVar12 != lVar1);
      uVar13 = 0;
      if (0 < (int)plVar11) {
        uVar16 = (ulonglong)((longlong)(local_48 + (int)plVar11) + (7 - (longlong)local_48)) >> 3;
        if (local_48 + (int)plVar11 < local_48) {
          uVar16 = 0;
        }
        plVar8 = local_48;
        if (uVar16 != 0) {
          do {
            lVar1 = *plVar8;
            if ((((lVar1 != 0) && (*(longlong *)(lVar1 + 0x140) != 0)) &&
                (cVar3 = FUN_142d15330(param_1,lVar1,0), cVar3 != '\0')) &&
               ((uint)plVar7 <= *(uint *)(lVar1 + 0x138))) {
              local_res10 = *(longlong **)(lVar1 + 0x140);
              plVar7 = (longlong *)(ulonglong)*(uint *)(lVar1 + 0x138);
            }
            plVar8 = plVar8 + 1;
            uVar13 = uVar13 + 1;
          } while (uVar13 != uVar16);
        }
      }
    }
    if (local_res10 != (longlong *)0x0) {
      uStack_40 = 0xffffffff;
      local_48._0_4_ = SUB84(local_res10,0);
      local_48._4_4_ = (undefined4)((ulonglong)local_res10 >> 0x20);
      *(undefined4 *)(param_1 + 0x2d0) = (undefined4)local_48;
      *(undefined4 *)(param_1 + 0x2d4) = local_48._4_4_;
      *(undefined4 *)(param_1 + 0x2d8) = 0xffffffff;
      *(uint *)(param_1 + 0x2dc) = uStack_3c;
      local_48 = local_res10;
    }
    if (plVar10 != (longlong *)0x0) {
      FMemory::Free(plVar10);
    }
  }
  return;
}



// FUNCTION 142d101b0 FUN_142d101b0 body=261 status=ok
// SIG undefined FUN_142d101b0(void)

float FUN_142d101b0(undefined8 param_1,float param_2,longlong param_3,float *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float local_38;
  float local_34;
  float local_30;
  
  if (((param_3 != 0) && (*(char *)(param_4 + 4) == '\0')) && (0.0 < param_4[3])) {
    FUN_142d1bb70(param_1,&local_38,param_4);
    fVar3 = SQRT((param_4[1] - local_34) * (param_4[1] - local_34) +
                 (*param_4 - local_38) * (*param_4 - local_38) +
                 (param_4[2] - local_30) * (param_4[2] - local_30)) * (1.0 / param_4[3]);
    fVar4 = 0.0;
    if ((0.0 <= fVar3) && (fVar4 = fVar3, 1.0 <= fVar3)) {
      fVar4 = 1.0;
    }
    plVar1 = *(longlong **)(param_3 + 0x58);
    if (plVar1 == (longlong *)0x0) {
      lVar2 = 0;
    }
    else {
      lVar2 = plVar1[0x1f];
      if (lVar2 == 0) {
        (**(code **)(*plVar1 + 0x368))(plVar1);
        fVar4 = (float)FUN_142d34770(fVar4,plVar1[0x1f]);
        return fVar4 * param_2;
      }
    }
    fVar4 = (float)FUN_142d34770(fVar4,lVar2);
    param_2 = fVar4 * param_2;
  }
  return param_2;
}



// FUNCTION 142d102c0 FUN_142d102c0 body=355 status=ok
// SIG undefined FUN_142d102c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d102c0(undefined8 param_1,undefined4 param_2,undefined1 param_3,longlong param_4,
                  undefined8 *param_5,longlong *param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [64];
  longlong local_1b8;
  undefined8 local_1b0;
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  longlong local_58;
  ulonglong local_48;
  
  if (param_4 != 0) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_218;
    FUN_140a7ab30(local_1f8,param_4 + 0x10);
    local_1b0 = *param_5;
    if (*param_6 != 0) {
      lVar3 = FUN_142e0d0b0();
      lVar1 = *param_6;
      for (lVar2 = lVar1; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
        if (lVar2 == lVar3) {
          if (lVar1 != 0) {
            local_1b8 = lVar1;
          }
          break;
        }
      }
    }
    plVar4 = (longlong *)FUN_142d54de0();
    if (plVar4 != (longlong *)0x0) {
      *(undefined4 *)(plVar4 + 0x67) = *(undefined4 *)(param_4 + 0x338);
      *(undefined1 *)((longlong)plVar4 + 0x335) = param_3;
      (**(code **)(*plVar4 + 0x10))(plVar4,local_1f8);
      FUN_142d29b80(param_1,param_2,plVar4);
      FUN_142d6cc00(plVar4);
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
    if (local_78 != 0) {
      plVar4 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar4 = local_88;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142d10430 FUN_142d10430 body=713 status=ok
// SIG undefined FUN_142d10430(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d10430(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  char *pcVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_118 [32];
  uint local_f8;
  undefined8 *local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88 [8];
  undefined8 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if (0 < *(int *)(param_1 + 0x2d0)) {
    uVar7 = 0;
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_140a4d360(*(undefined8 *)(param_1 + 0x118),local_88,0);
    local_f8 = 0;
    puVar5 = local_48;
    if (0 < *(int *)(param_1 + 0x2d0)) {
      local_e8 = 0;
      uVar11 = uVar7;
      do {
        uVar6 = (uint)uVar7;
        if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(param_1 + 0x188))) {
          local_f0 = *(undefined8 **)(local_e8 + *(longlong *)(param_1 + 0x180));
          local_d8 = local_f0 + *(int *)(local_e8 + 8 + *(longlong *)(param_1 + 0x180));
          if (local_f0 != local_d8) {
            do {
              uVar7 = 0;
              local_e0 = *local_f0;
              puVar8 = local_88;
              if (puVar5 != (undefined8 *)0x0) {
                puVar8 = puVar5;
              }
              uVar9 = (longlong)(int)local_40 & 0x1fffffffffffffff;
              if (puVar8 + (int)local_40 < puVar8) {
                uVar9 = uVar7;
              }
              if (uVar9 != 0) {
                lVar10 = (longlong)(int)local_f8;
                do {
                  plVar2 = (longlong *)*puVar8;
                  cVar3 = (**(code **)(*plVar2 + 0x8e0))(plVar2,local_e0);
                  if (cVar3 != '\0') {
                    pcVar4 = (char *)(*(longlong *)(param_1 + 0x2c8) + uVar11);
                    if (*pcVar4 == '\0') {
                      local_b8 = *(undefined8 *)(pcVar4 + 4);
                      puVar5 = &local_b8;
                      local_b0 = *(undefined4 *)(pcVar4 + 0xc);
                    }
                    else {
                      local_c8 = *(undefined8 *)(pcVar4 + 0x1c);
                      puVar5 = &local_c8;
                      local_c0 = *(undefined4 *)(pcVar4 + 0x24);
                    }
                    FUN_142379010(plVar2,*(undefined8 *)
                                          (lVar10 * 0x38 + 0x10 + *(longlong *)(param_1 + 0x180)),
                                  puVar5);
                    lVar1 = *(longlong *)(param_1 + 0x2c8) + uVar11;
                    if (*(char *)(uVar11 + 1 + *(longlong *)(param_1 + 0x2c8)) == '\0') {
                      local_98 = *(undefined8 *)(lVar1 + 0x10);
                      puVar5 = &local_98;
                      local_90 = *(undefined4 *)(lVar1 + 0x18);
                    }
                    else {
                      local_a8 = *(undefined8 *)(lVar1 + 0x28);
                      puVar5 = &local_a8;
                      local_a0 = *(undefined4 *)(lVar1 + 0x30);
                    }
                    FUN_142379010(plVar2,*(undefined8 *)
                                          (lVar10 * 0x38 + 0x18 + *(longlong *)(param_1 + 0x180)),
                                  puVar5);
                  }
                  puVar8 = puVar8 + 1;
                  uVar7 = uVar7 + 1;
                  puVar5 = local_48;
                } while (uVar7 != uVar9);
              }
              local_f0 = local_f0 + 1;
              uVar6 = local_f8;
            } while (local_f0 != local_d8);
          }
        }
        local_f8 = uVar6 + 1;
        uVar7 = (ulonglong)local_f8;
        local_e8 = local_e8 + 0x38;
        uVar11 = uVar11 + 0x34;
      } while ((int)local_f8 < *(int *)(param_1 + 0x2d0));
    }
    if (puVar5 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142d10700 FUN_142d10700 body=818 status=ok
// SIG undefined FUN_142d10700(void)

void FUN_142d10700(longlong param_1,longlong param_2,longlong *param_3,int param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong **pplVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *local_48 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  
  if (param_3 != (longlong *)0x0) {
    cVar4 = (**(code **)(*param_3 + 0x290))(param_3,param_4);
    if (cVar4 != '\0') {
      FUN_142d10a40(param_2,param_3);
      return;
    }
    plVar2 = (longlong *)(param_1 + 0x458);
    puVar8 = (undefined8 *)*plVar2;
    iVar3 = *(int *)(param_1 + 0x460);
    lVar9 = (longlong)iVar3;
    lVar13 = lVar9 * 0x40;
    for (puVar12 = puVar8; puVar12 != puVar8 + lVar9 * 8; puVar12 = puVar12 + 8) {
      if ((param_3 == (longlong *)*puVar12) && (param_4 == *(int *)(puVar12 + 1))) {
        iVar5 = (int)((longlong)puVar12 - (longlong)puVar8 >> 6);
        if (-1 < iVar5) {
          lVar9 = (longlong)iVar5;
          if (*(char *)(puVar8[lVar9 * 8 + 4] + 0x10) != '\0') {
            FUN_142d20620(param_1);
            return;
          }
          plVar7 = (longlong *)puVar8[lVar9 * 8 + 2];
          iVar3 = *(int *)(puVar8 + lVar9 * 8 + 3);
          plVar6 = plVar7 + iVar3;
          while( true ) {
            if (plVar7 == plVar6) {
              lVar9 = *plVar2 + lVar9 * 0x40;
              *(int *)(lVar9 + 0x18) = iVar3 + 1;
              if (*(int *)(lVar9 + 0x1c) < iVar3 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (lVar9 + 0x10,iVar3);
              }
              *(longlong *)((longlong)iVar3 * 8 + *(longlong *)(lVar9 + 0x10)) = param_2;
              return;
            }
            if (*plVar7 == param_2) break;
            plVar7 = plVar7 + 1;
          }
          return;
        }
        break;
      }
    }
    *(int *)(param_1 + 0x460) = iVar3 + 1;
    if (*(int *)(param_1 + 0x464) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar2,iVar3);
    }
    lVar10 = *plVar2;
    *(undefined8 *)(lVar13 + 8 + lVar10) = 0;
    *(undefined8 *)(lVar13 + 0x38 + lVar10) = 0;
    *(undefined8 *)(lVar13 + lVar10) = 0;
    *(undefined8 *)(lVar13 + 0x10 + lVar10) = 0;
    *(undefined8 *)(lVar13 + 0x18 + lVar10) = 0;
    *(undefined8 *)(lVar13 + 0x20 + lVar10) = 0;
    *(undefined8 *)(lVar13 + 0x28 + lVar10) = 0;
    *(undefined8 *)(lVar13 + 0x30 + lVar10) = 0;
    *(undefined4 *)(lVar13 + 0x38 + lVar10) = 0;
    if (-1 < iVar3) {
      *(longlong **)(lVar13 + *plVar2) = param_3;
      *(int *)(lVar13 + 8 + *plVar2) = param_4;
      lVar10 = *plVar2 + lVar13;
      iVar3 = *(int *)(lVar10 + 0x18);
      *(int *)(lVar10 + 0x18) = iVar3 + 1;
      if (*(int *)(lVar10 + 0x1c) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar10 + 0x10,iVar3);
      }
      *(longlong *)(*(longlong *)(lVar10 + 0x10) + (longlong)iVar3 * 8) = param_2;
      pplVar11 = (longlong **)(*plVar2 + 0x30 + lVar13);
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      local_48[0] = plVar6;
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_143f4d170;
        FWeakObjectPtr::operator=(plVar6 + 1,param_1);
        plVar6[2] = (longlong)FUN_142d20620;
        lVar13 = FDelegateHandle::GenerateNewID();
        plVar6[4] = lVar13;
        *plVar6 = (longlong)&PTR_FUN_143f4d1b8;
      }
      if (local_48 != pplVar11) {
        if (plVar6 == (longlong *)0x0) {
          if ((*(int *)(pplVar11 + 1) != 0) && (plVar7 = *pplVar11, plVar7 != (longlong *)0x0)) {
            (**(code **)(*plVar7 + 0x28))(plVar7,0);
            if (*pplVar11 != (longlong *)0x0) {
              plVar7 = (longlong *)FMemory::Realloc(*pplVar11,0,0);
              *pplVar11 = plVar7;
            }
            *(undefined4 *)(pplVar11 + 1) = 0;
          }
        }
        else {
          (**(code **)(*plVar6 + 0x30))(plVar6,pplVar11);
        }
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        local_48[0] = (longlong *)FMemory::Realloc(plVar6,0,0);
        if (local_48[0] != (longlong *)0x0) {
          FMemory::Free(local_48[0]);
        }
      }
      lVar13 = *plVar2;
      puVar8 = (undefined8 *)FUN_142d12740(param_3,local_38,lVar9 * 0x40 + 0x30 + lVar13,param_4);
      puVar12 = (undefined8 *)(lVar9 * 0x40 + 0x20 + lVar13);
      if (puVar12 != puVar8) {
        *puVar12 = *puVar8;
        *puVar8 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(puVar12 + 1,puVar8 + 1);
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_30 + 1;
        lVar9 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)local_30 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142d10a40 FUN_142d10a40 body=299 status=ok
// SIG undefined FUN_142d10a40(void)

undefined1 FUN_142d10a40(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong *local_res8;
  
  uVar2 = 0;
  if ((*(longlong *)(param_1 + 0x118) != 0) && (param_2 != (longlong *)0x0)) {
    lVar3 = *(longlong *)(param_1 + 0x2a0);
    lVar1 = lVar3 + (longlong)*(int *)(param_1 + 0x2a8) * 0x28;
    for (; lVar3 != lVar1; lVar3 = lVar3 + 0x28) {
      if (*(longlong **)(lVar3 + 0x10) == param_2) {
        TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x2d8);
        uVar2 = (**(code **)(*param_2 + 0x280))
                          (param_2,*(undefined8 *)(param_1 + 0x118),*(undefined4 *)(lVar3 + 0x18));
        TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x2f0,param_2);
        FUN_142d261e0(param_1,param_2);
        lVar3 = *(longlong *)(param_1 + 0x2b0);
        lVar1 = lVar3 + (longlong)*(int *)(param_1 + 0x2b8) * 0x18;
        goto joined_r0x000142d10b00;
      }
    }
  }
LAB_142d10b38:
  if (0 < *(int *)(param_1 + 0x328)) {
    local_res8 = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 800,&local_res8);
  }
  return uVar2;
joined_r0x000142d10b00:
  if (lVar3 == lVar1) goto LAB_142d10b1b;
  if (*(longlong **)(lVar3 + 0x10) == param_2) {
    FUN_142d2b900(lVar3);
    goto LAB_142d10b1b;
  }
  lVar3 = lVar3 + 0x18;
  goto joined_r0x000142d10b00;
LAB_142d10b1b:
  FUN_142d25e10(param_1);
  FUN_142d10430(param_1);
  FUN_142d12220(param_1);
  goto LAB_142d10b38;
}



// FUNCTION 142d10b70 FUN_142d10b70 body=399 status=ok
// SIG undefined FUN_142d10b70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte FUN_142d10b70(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  byte bVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_90 [8];
  undefined8 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  bVar7 = 0;
  if ((param_2 != (longlong *)0x0) && (0 < (int)param_1[0x20])) {
    local_50 = (undefined8 *)0x0;
    local_48 = 0;
    FUN_140a4d360(param_2,local_90,0);
    uVar4 = FUN_142e43690();
    uVar4 = (**(code **)(*param_2 + 0x628))(param_2,uVar4);
    puVar9 = (undefined8 *)param_1[0x1f];
    local_98 = puVar9 + (longlong)(int)param_1[0x20] * 8;
    puVar5 = local_50;
    if (puVar9 != local_98) {
      do {
        uVar8 = 0;
        puVar6 = local_90;
        if (puVar5 != (undefined8 *)0x0) {
          puVar6 = puVar5;
        }
        uVar10 = (longlong)(int)local_48 & 0x1fffffffffffffff;
        if (puVar6 + (int)local_48 < puVar6) {
          uVar10 = uVar8;
        }
        if (uVar10 != 0) {
          do {
            plVar1 = (longlong *)*puVar6;
            cVar2 = (**(code **)(*plVar1 + 0x8e0))(plVar1,*puVar9);
            if (cVar2 != '\0') {
              bVar3 = (**(code **)(*param_1 + 0x298))(param_1,puVar9,plVar1,uVar4);
              bVar7 = bVar7 | bVar3;
            }
            puVar6 = puVar6 + 1;
            uVar8 = uVar8 + 1;
            puVar5 = local_50;
          } while (uVar8 != uVar10);
        }
        puVar9 = puVar9 + 8;
      } while (puVar9 != local_98);
    }
    if (puVar5 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  return bVar7;
}



// FUNCTION 142d10d00 FUN_142d10d00 body=1043 status=ok
// SIG undefined FUN_142d10d00(void)

ulonglong FUN_142d10d00(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  ulonglong in_RAX;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  longlong *local_res18;
  longlong *local_res20;
  byte local_68;
  char local_67;
  undefined8 local_60;
  longlong **local_58;
  longlong local_50;
  longlong **local_48;
  byte *local_40;
  
  if (param_3 == (longlong *)0x0) {
    return in_RAX & 0xffffffffffffff00;
  }
  local_res18 = param_3;
  local_res20 = param_4;
  lVar4 = FUN_142e5c1e0();
  if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
  plVar8 = (longlong *)0x0;
  local_68 = 0;
  if (!bVar14) {
    param_3 = plVar8;
  }
  if ((local_res20 == (longlong *)0x0) || (local_67 = '\x01', (int)local_res20[0x38] < 1)) {
    local_67 = '\0';
  }
  local_58 = &local_res20;
  local_48 = &local_res18;
  local_40 = &local_68;
  plVar9 = plVar8;
  local_50 = param_2;
  if (0 < *(int *)(param_2 + 0x20)) {
    do {
      iVar12 = (int)plVar9;
      lVar11 = (longlong)iVar12 * 0x20;
      lVar4 = FUN_141796df0(*(longlong *)(param_2 + 0x18) + 8 + lVar11);
      if (lVar4 != 0) {
        lVar5 = USkeleton::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar14 = false;
        }
        else {
          bVar14 = true;
        }
        if (bVar14) {
          if ((param_3 != (longlong *)0x0) && (lVar4 != param_3[0xe3])) {
            lVar11 = 0;
            if (param_3[0x148] != 0) {
              lVar6 = FUN_1428eccf0();
              for (lVar5 = param_3[0x148];
                  (lVar11 = 0, lVar5 != 0 && (lVar11 = param_3[0x148], lVar5 != lVar6));
                  lVar5 = *(longlong *)(lVar5 + 0x30)) {
              }
            }
            lVar5 = param_3[0xe3];
            (**(code **)(*param_3 + 0x930))(param_3,lVar4,0);
            FUN_142367d60(param_3);
            if (lVar11 != 0) {
              FUN_1423b4b50(param_3,lVar11);
            }
            if (lVar5 == 0) {
              (**(code **)(*param_3 + 0x358))(param_3,1);
            }
            (**(code **)(*param_3 + 0xa40))(param_3,1);
            if (local_67 != '\0') {
              iVar3 = (**(code **)(*param_3 + 0x6c8))(param_3);
              iVar10 = 0;
              if (0 < iVar3) {
                do {
                  uVar7 = (**(code **)(*param_3 + 0x560))(param_3,iVar10);
                  FUN_142d0d6c0(&local_58,uVar7,iVar10);
                  iVar10 = iVar10 + 1;
                } while (iVar10 < iVar3);
              }
            }
LAB_142d110d3:
            local_68 = 1;
          }
        }
        else {
          lVar6 = UAfrTextBlock::GetPrivateStaticClass();
          lVar5 = *(longlong *)(lVar4 + 0x10);
          if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
              lVar6 + 0x88)) {
            bVar14 = false;
          }
          else {
            bVar14 = true;
          }
          if (bVar14) {
            if (param_3 != (longlong *)0x0) {
              param_3[0x255] = lVar4;
              FUN_1423b3e90(param_3,CONCAT71((int7)((ulonglong)lVar5 >> 8),1));
              local_68 = 1;
            }
          }
          else {
            lVar5 = UMaterialInterface::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar14 = false;
            }
            else {
              bVar14 = true;
            }
            if (bVar14) {
              local_60 = 0;
              if (*(longlong *)(*(longlong *)(param_2 + 0x18) + (longlong)plVar8) != 0) {
                cVar2 = (**(code **)(*local_res18 + 0x900))
                                  (local_res18,
                                   *(undefined8 *)(lVar11 + *(longlong *)(param_2 + 0x18)));
                if (cVar2 == '\0') goto LAB_142d110d9;
                uVar13 = (**(code **)(*local_res18 + 0x8f0))
                                   (local_res18,
                                    *(undefined8 *)(lVar11 + *(longlong *)(param_2 + 0x18)));
                plVar9 = (longlong *)(ulonglong)uVar13;
              }
              iVar3 = (**(code **)(*local_res18 + 0x6c8))();
              if ((int)plVar9 < iVar3) {
                if (local_67 == '\0') {
                  (**(code **)(*local_res18 + 0x568))(local_res18,plVar9,lVar4);
                  plVar1 = local_res20;
                  if (local_res20 != (longlong *)0x0) {
                    *(undefined1 *)(local_res20 + 0x73) = 0;
                    lVar11 = (**(code **)(*local_res20 + 0x428))(local_res20);
                    if (((((param_1 != 0) && (*(longlong *)(param_1 + 0xf0) != 0)) && (lVar11 != 0))
                        && ((*(longlong *)(lVar11 + 0xf0) != 0 &&
                            (*(longlong *)(*(longlong *)(lVar11 + 0xf0) + 0x68) ==
                             *(longlong *)(param_1 + 0xf0))))) &&
                       (bVar14 = *(longlong *)(param_1 + 0x118) != lVar11,
                       *(bool *)(plVar1 + 0x73) = bVar14, !bVar14)) {
                      TSet<TTuple<__int64_*,FString>,TDefaultMapHashableKeyFuncs<__int64_*,FString,0>,FDefaultSetAllocator>
                      ::Empty(plVar1 + 0x69,0);
                    }
                    if ((char)local_res20[0x73] != '\0') {
                      FUN_142d28ae0(local_res20,local_res18,plVar9,lVar4);
                      (**(code **)(*local_res18 + 0x568))(local_res18,plVar9,0);
                    }
                  }
                  goto LAB_142d110d3;
                }
                FUN_142d0d6c0(&local_58,lVar4,plVar9);
              }
            }
          }
        }
      }
LAB_142d110d9:
      uVar13 = iVar12 + 1;
      plVar8 = plVar8 + 4;
      plVar9 = (longlong *)(ulonglong)uVar13;
    } while ((int)uVar13 < *(int *)(param_2 + 0x20));
  }
  return (ulonglong)local_68;
}



// FUNCTION 142d11120 FUN_142d11120 body=1372 status=ok
// SIG undefined FUN_142d11120(void)

void FUN_142d11120(longlong param_1,longlong *param_2,longlong param_3)

{
  float fVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  longlong local_168;
  longlong local_160;
  undefined4 local_158;
  undefined2 local_154;
  undefined1 local_152;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [192];
  
  if ((0 < (int)param_2[5]) && ((int)param_2[5] <= *(int *)((longlong)param_2 + 0x2c))) {
    return;
  }
  if ((*(byte *)(param_3 + 0x214) & 2) != 0) {
    return;
  }
  if (param_2[1] == 0) {
LAB_142d111a9:
    iVar10 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x670) == 0) {
      iVar10 = 0;
      if (0 < *(int *)(param_1 + 0x680)) {
        plVar5 = (longlong *)(*(longlong *)(param_1 + 0x678) + 8);
        do {
          if (*plVar5 == param_2[1]) goto LAB_142d111ab;
          iVar10 = iVar10 + 1;
          plVar5 = plVar5 + 0xf;
        } while (iVar10 < *(int *)(param_1 + 0x680));
        iVar10 = -1;
        goto LAB_142d111ab;
      }
    }
    else if (*(int *)(param_1 + 0x670) == 1) goto LAB_142d111a9;
    iVar10 = -1;
  }
LAB_142d111ab:
  if (iVar10 == -1) {
    return;
  }
  if ((iVar10 < 0) || (*(int *)(param_3 + 0x1d0) <= iVar10)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    fVar11 = *(float *)(*(longlong *)(param_3 + 0x1c8) + (longlong)iVar10 * 4);
  }
  else {
    fVar11 = 0.0;
  }
  if (*(int *)(param_1 + 0x670) == 0) {
    if ((iVar10 < 0) || (*(int *)(param_1 + 0x680) <= iVar10)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      cVar4 = FUN_142d52a00(*(longlong *)(param_1 + 0x678) + 0x60 + (longlong)iVar10 * 0x78);
      if (cVar4 != '\0') {
        uVar6 = FUN_142d52a20(*(longlong *)(param_1 + 0x678) + 0x60 + (longlong)iVar10 * 0x78);
        uVar6 = FArchive::operator<<(uVar6);
        fVar12 = (float)FUN_142d5fed0(uVar6);
        goto LAB_142d1128e;
      }
    }
LAB_142d1128b:
    fVar12 = 0.0;
  }
  else {
    if (*(int *)(param_1 + 0x670) != 1) goto LAB_142d1128b;
    fVar12 = *(float *)(param_1 + 0x6d4);
  }
LAB_142d1128e:
  if (*(int *)(param_1 + 0x670) == 0) {
    if ((iVar10 < 0) || (*(int *)(param_1 + 0x680) <= iVar10)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar7 = (longlong)iVar10 * 0x78;
      cVar4 = FUN_142d52a00(*(longlong *)(param_1 + 0x678) + 0x60 + lVar7);
      if (cVar4 != '\0') {
        uVar6 = FUN_142d52a20(*(longlong *)(param_1 + 0x678) + 0x60 + lVar7);
        lVar7 = FArchive::operator<<(uVar6);
        fVar13 = *(float *)(lVar7 + 0x20);
        goto LAB_142d11311;
      }
    }
LAB_142d1130d:
    fVar13 = 0.0;
  }
  else {
    if (*(int *)(param_1 + 0x670) != 1) goto LAB_142d1130d;
    fVar13 = *(float *)(param_1 + 0x6cc);
  }
LAB_142d11311:
  fVar14 = fVar11 - fVar12;
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  if (fVar11 <= 0.0) {
    return;
  }
  if (fVar13 <= 0.0) {
    return;
  }
  lVar7 = *(longlong *)(param_1 + 0x120);
  if (lVar7 == 0) {
    lVar7 = FUN_1423407b0(param_1);
  }
  cVar4 = *(char *)((longlong)param_2 + 0x14);
  fVar1 = *(float *)(lVar7 + 0x790);
  if (cVar4 == '\0') {
    if ((1.0 / fVar13) * fVar11 <= *(float *)(param_2 + 2)) {
      return;
    }
    if (*(float *)(param_2 + 2) < (1.0 / fVar13) * fVar12) {
      return;
    }
  }
  else {
    if (cVar4 == '\x01') {
      bVar2 = fVar12 / fVar13 < *(float *)(param_2 + 2) ||
              fVar12 / fVar13 == *(float *)(param_2 + 2);
    }
    else {
      if (cVar4 != '\x02') {
        if (cVar4 != '\x03') {
          return;
        }
        if ((*(float *)(param_2 + 7) == 0.0) ||
           (fVar11 = fVar1 - *(float *)(param_2 + 7),
           *(float *)(param_2 + 4) <= fVar11 && fVar11 != *(float *)(param_2 + 4))) {
          *(float *)(param_2 + 7) = fVar1;
          *(undefined4 *)((longlong)param_2 + 0x34) = 0;
        }
      }
      plVar5 = (longlong *)param_2[3];
      if ((plVar5 != (longlong *)0x0) &&
         (cVar4 = (**(code **)(*plVar5 + 0x278))(plVar5,param_3,0), cVar4 == '\0')) {
        return;
      }
      fVar11 = *(float *)((longlong)param_2 + 0x34);
      fVar14 = fVar11 + fVar14;
      *(float *)((longlong)param_2 + 0x34) = fVar14;
      fVar12 = *(float *)(param_2 + 2);
      if ((fVar12 <= 0.0) ||
         ((fVar11 * (1.0 / fVar13) < fVar12 && (fVar12 <= fVar14 * (1.0 / fVar13))))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      fVar12 = fVar12 * fVar13;
      if ((0.0001 < fVar12) && (fVar12 <= fVar14)) {
        if (1e-08 < ABS(fVar12)) {
          fVar12 = (float)(int)(fVar14 / fVar12) * fVar12;
          if (ABS(fVar14) < ABS(fVar12)) {
            fVar12 = fVar14;
          }
          *(float *)((longlong)param_2 + 0x34) = fVar14 - fVar12;
        }
        else {
          AK::MemoryMgr::StartProfileThreadUsage((long)plVar5);
          *(undefined4 *)((longlong)param_2 + 0x34) = 0;
        }
      }
    }
    if (!bVar2) {
      return;
    }
  }
  if ((0.0 < *(float *)(param_2 + 6)) &&
     (fVar1 - *(float *)(param_2 + 6) < *(float *)((longlong)param_2 + 0x24))) {
    return;
  }
  puVar8 = (undefined8 *)FUN_142d2e3b0(local_e8,param_3 + 0x2d0,0,param_3);
  *(int *)((longlong)param_2 + 0x2c) = *(int *)((longlong)param_2 + 0x2c) + 1;
  *(float *)(param_2 + 6) = fVar1;
  if ((((*param_2 != 0) && (*(longlong *)(param_1 + 0x118) != 0)) &&
      (lVar7 = UObject::FindFunction(), lVar7 != 0)) && (*(char *)(lVar7 + 0x8c) == '\x01')) {
    local_160 = *(longlong *)(lVar7 + 0x38);
    local_158 = 0xffffffff;
    local_154 = 0x101;
    local_152 = 0;
    local_168 = lVar7;
    FUN_140472e10(&local_168);
    lVar3 = local_160;
    if (local_160 != 0) {
      lVar9 = UStructProperty::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) && (*(longlong *)(lVar3 + 0x70) != 0)) &&
         (lVar9 = FBoneSocketTarget::StaticStruct(), *(longlong *)(lVar3 + 0x70) == lVar9))
      goto LAB_142d115ce;
    }
  }
  lVar7 = 0;
LAB_142d115ce:
  plVar5 = *(longlong **)(param_1 + 0x118);
  if ((lVar7 != 0) && (plVar5 != (longlong *)0x0)) {
    local_148 = *puVar8;
    uStack_140 = puVar8[1];
    local_138 = puVar8[2];
    uStack_130 = puVar8[3];
    local_128 = puVar8[4];
    uStack_120 = puVar8[5];
    local_118 = puVar8[6];
    uStack_110 = puVar8[7];
    local_108 = *(undefined4 *)(puVar8 + 8);
    uStack_104 = *(undefined4 *)((longlong)puVar8 + 0x44);
    uStack_100 = *(undefined4 *)(puVar8 + 9);
    uStack_fc = *(undefined4 *)((longlong)puVar8 + 0x4c);
    local_f8 = *(undefined4 *)(puVar8 + 10);
    uStack_f4 = *(undefined4 *)((longlong)puVar8 + 0x54);
    uStack_f0 = *(undefined4 *)(puVar8 + 0xb);
    uStack_ec = *(undefined4 *)((longlong)puVar8 + 0x5c);
    (**(code **)(*plVar5 + 0x208))(plVar5,lVar7,&local_148);
  }
  return;
}



// FUNCTION 142d11680 FUN_142d11680 body=2462 status=ok
// SIG undefined FUN_142d11680(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d11680(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,byte param_6,longlong param_7)

{
  void *_Src;
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_338 [32];
  longlong local_318;
  longlong local_310;
  longlong local_308;
  float local_2f8;
  float fStack_2f4;
  float local_2f0;
  longlong local_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined8 local_2d0;
  undefined8 *local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined1 local_2a8 [80];
  undefined8 local_258;
  longlong *local_250;
  longlong local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  longlong local_218;
  longlong local_210;
  byte local_208;
  undefined4 local_204;
  uint local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined8 local_1f4;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c4;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 local_180;
  longlong local_178;
  longlong local_170;
  uint local_168;
  undefined8 local_164;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  undefined1 local_133;
  undefined4 local_130;
  undefined1 local_12c;
  undefined1 local_128;
  undefined1 local_127;
  undefined1 local_118 [16];
  longlong local_108 [4];
  longlong *local_e8;
  int local_d8;
  undefined8 local_c8;
  float local_c0;
  float local_bc;
  void *local_b8;
  int local_b0;
  int local_ac;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  puVar7 = (undefined8 *)(param_5 + 0x150);
  if (*(char *)(param_5 + 0x15c) == '\0') {
    puVar7 = (undefined8 *)((longlong)param_1 + 0xf4);
  }
  uVar5 = *param_2;
  local_308 = param_7;
  local_2c0 = *puVar7;
  local_2b8 = *(undefined4 *)(puVar7 + 1);
  local_318 = param_3;
  local_310 = param_4;
  local_2e8 = param_4;
  local_2d0 = uVar5;
  local_2c8 = param_2;
  uVar4 = FUN_142d27d60(param_1,&local_2e0,param_5,param_2);
  FRotator::RotateVector(&local_2c0,&local_2f8,uVar4);
  if (*(char *)(param_5 + 0x17c) == '\0') {
    fVar16 = (float)FUN_142d9cad0(param_1 + 0x19,uVar5);
  }
  else {
    fVar16 = *(float *)(param_5 + 0x178);
  }
  FUN_142d0ab00(&local_258);
  local_240 = param_2[1];
  local_230 = *param_2;
  local_250 = (longlong *)FWeakObjectPtr::Get(param_4 + 0x16c);
  uVar11 = 0;
  if (local_250 == (longlong *)0x0) {
    local_258 = 0;
LAB_142d117e1:
    local_250 = (longlong *)0x0;
    local_248 = 0;
  }
  else {
    uVar5 = UScrollBox::GetPrivateStaticClass();
    local_258 = (**(code **)(*local_250 + 0x628))(local_250,uVar5);
    uVar5 = UDamageableInterface::GetPrivateStaticClass();
    local_248 = UObjectBaseUtility::GetInterfaceAddress(local_250,uVar5);
    if (local_248 == 0) goto LAB_142d117e1;
  }
  local_238 = FWeakObjectPtr::Get(param_5 + 0x24);
  cVar2 = FWeakObjectPtr::IsValid(param_5 + 0x14);
  if (cVar2 == '\0') {
    local_218 = param_1[0x14];
  }
  else {
    lVar6 = FWeakObjectPtr::Get(param_5 + 0x14);
    local_218 = *(longlong *)(lVar6 + 0x10);
  }
  cVar2 = FWeakObjectPtr::IsValid(param_5 + 0x1c);
  if (cVar2 == '\0') {
    local_210 = param_1[0x15];
  }
  else {
    lVar6 = FWeakObjectPtr::Get(param_5 + 0x1c);
    local_210 = *(longlong *)(lVar6 + 0x10);
  }
  cVar2 = FWeakObjectPtr::IsValid(param_5 + 0x3c);
  if (cVar2 == '\0') {
    local_178 = param_1[0x2f];
  }
  else {
    local_178 = FWeakObjectPtr::Get(param_5 + 0x3c);
  }
  local_1fc = *(undefined4 *)(param_4 + 0x10c);
  local_1f8 = *(undefined4 *)(param_4 + 0x110);
  local_1f4 = *(undefined8 *)(param_4 + 0x114);
  local_208 = local_208 ^ (local_208 ^ *(byte *)(param_4 + 0x100)) & 3;
  local_204 = *(undefined4 *)(param_4 + 0x104);
  local_1e8 = *(undefined8 *)(param_4 + 0x120);
  local_200 = local_200 ^ (*(uint *)(param_4 + 0x108) ^ local_200) & 1;
  local_1dc = *(undefined8 *)(param_4 + 300);
  local_1ec = *(undefined4 *)(param_4 + 0x11c);
  local_1e0 = *(undefined4 *)(param_4 + 0x128);
  local_1d4 = *(undefined4 *)(param_4 + 0x134);
  local_1c8 = *(undefined4 *)(param_4 + 0x140);
  local_1bc = *(undefined4 *)(param_4 + 0x14c);
  local_1b0 = *(undefined4 *)(param_4 + 0x158);
  local_1a8 = *(undefined4 *)(param_4 + 0x160);
  local_1a4 = *(undefined4 *)(param_4 + 0x164);
  local_1a0 = *(undefined4 *)(param_4 + 0x168);
  local_19c = *(undefined4 *)(param_4 + 0x16c);
  local_198 = *(undefined4 *)(param_4 + 0x170);
  local_194 = *(undefined4 *)(param_4 + 0x174);
  local_190 = *(undefined4 *)(param_4 + 0x178);
  local_188 = *(undefined8 *)(param_4 + 0x180);
  local_1d0 = *(undefined8 *)(param_4 + 0x138);
  local_180 = *(undefined8 *)(param_4 + 0x188);
  local_1c4 = *(undefined8 *)(param_4 + 0x144);
  puVar7 = (undefined8 *)(param_5 + 0x130);
  if (*(char *)(param_5 + 0x13c) == '\0') {
    puVar7 = (undefined8 *)(param_4 + 0x114);
  }
  local_1b8 = *(undefined8 *)(param_4 + 0x150);
  local_1ac = *(undefined4 *)(param_4 + 0x15c);
  local_150 = *(undefined4 *)(puVar7 + 1);
  local_158 = *puVar7;
  local_144 = local_2f0;
  lVar6 = param_1[0x13];
  uVar10 = 0;
  if ((lVar6 != 0) && (((*(byte *)(lVar6 + 0x2c) & 1) == 0 || (*(int *)(lVar6 + 0x28) != 1)))) {
    uVar10 = 4;
  }
  local_168 = (local_168 & 0xfffffffe | (uint)param_6) & 0xfffffffb | uVar10;
  puVar7 = (undefined8 *)(param_7 + 0x14);
  if (param_7 == 0) {
    puVar7 = (undefined8 *)&DAT_1468b5d90;
  }
  local_164 = *puVar7;
  local_15c = *(undefined4 *)(puVar7 + 1);
  local_c8 = *(undefined8 *)(param_5 + 0x180);
  if ((char)local_c8 == '\0') {
    uVar3 = 0;
    if (*(char *)((longlong)param_1 + 0x101) != '\0') {
      uVar3 = 2;
    }
    uVar9 = (ulonglong)local_c8 >> 8;
    local_c8 = CONCAT71((int7)uVar9,uVar3);
  }
  local_c0 = *(float *)(param_5 + 0x188) * *(float *)(param_1 + 0x1d);
  local_bc = *(float *)(param_5 + 0x18c) * *(float *)((longlong)param_1 + 0xec);
  if (&local_b8 != (void **)(param_5 + 0x198)) {
    local_b0 = *(int *)(param_5 + 0x1a0);
    lVar6 = (longlong)local_b0;
    _Src = *(void **)(param_5 + 0x198);
    if ((local_b0 == 0) && (local_ac == 0)) {
      local_ac = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_b8,local_b0);
      _guard_xfg_dispatch_icall_nop(local_b8,_Src,lVar6 << 3);
    }
  }
  puVar7 = (undefined8 *)param_1[0x16];
  uVar9 = (longlong)(int)param_1[0x17] & 0x1fffffffffffffff;
  if (puVar7 + (int)param_1[0x17] < puVar7) {
    uVar9 = uVar11;
  }
  if (uVar9 != 0) {
    do {
      FWeakObjectPtr::operator=(&local_2e0,*puVar7);
      iVar1 = local_b0;
      lVar6 = (longlong)local_b0;
      local_b0 = local_b0 + 1;
      if (local_ac < local_b0) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b8,iVar1);
      }
      puVar7 = puVar7 + 1;
      uVar11 = uVar11 + 1;
      *(undefined4 *)((longlong)local_b8 + lVar6 * 8) = local_2e0;
      *(undefined4 *)((longlong)local_b8 + lVar6 * 8 + 4) = local_2dc;
    } while (uVar11 != uVar9);
  }
  local_228 = FWeakObjectPtr::Get(param_5 + 400);
  if ((char)param_1[0x18] == '\0') {
    local_140 = local_2f8 * fVar16;
    local_13c = fStack_2f4 * fVar16;
    goto LAB_142d11d6a;
  }
  if (fVar16 <= 0.0) {
    if (0.0 <= fVar16) {
      fVar17 = 0.0;
    }
    else {
      fVar17 = -1.0;
    }
  }
  else {
    fVar17 = 1.0;
  }
  fVar12 = fStack_2f4 * fStack_2f4 + local_2f8 * local_2f8;
  if (fVar12 == 1.0) {
    fVar13 = local_2f8;
    fVar15 = fStack_2f4;
    if (local_2f0 != 0.0) {
LAB_142d11cee:
      local_2f0 = 0.0;
      fVar13 = local_2f8;
      fVar15 = fStack_2f4;
    }
  }
  else {
    fVar13 = DAT_1468b5d90;
    fVar15 = DAT_1468b5d94;
    local_2f0 = DAT_1468b5d98;
    if (1e-08 <= fVar12) {
      auVar14 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
      fVar13 = auVar14._0_4_;
      fVar13 = fVar13 + fVar13 * (0.5 - fVar12 * 0.5 * fVar13 * fVar13);
      fVar13 = fVar13 + fVar13 * (0.5 - fVar12 * 0.5 * fVar13 * fVar13);
      local_2f8 = local_2f8 * fVar13;
      fStack_2f4 = fStack_2f4 * fVar13;
      goto LAB_142d11cee;
    }
  }
  fVar16 = ABS(fVar16);
  local_140 = fVar13 * fVar17 * fVar16;
  local_2f0 = local_2f0 * fVar17 + *(float *)((longlong)param_1 + 0xc4);
  local_13c = fVar15 * fVar17 * fVar16;
LAB_142d11d6a:
  local_170 = param_1[0x2c];
  local_138 = local_2f0 * fVar16;
  if ((undefined4 *)((longlong)param_1 + 300) != &local_130) {
    local_130 = *(undefined4 *)((longlong)param_1 + 300);
    local_12c = 1;
  }
  if ((*(char *)((longlong)param_1 + 0x132) == '\0') &&
     (*(char *)((longlong)param_1 + 0x131) == '\0')) {
    local_128 = 0;
  }
  else {
    local_128 = 1;
  }
  local_127 = 1;
  local_168 = (*(byte *)(param_5 + 0x10) >> 4 & 4 | *(byte *)(param_5 + 0x10) & 0x20) >> 1 |
              local_168 & 0xffffffed;
  local_133 = (undefined1)param_1[0x26];
  lVar6 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_2a8,param_5 + 0x1b0);
  FGenericPlatformMemory::MemswapGreaterThan8(lVar6,local_118,0x50);
  if (*(int *)(lVar6 + 0x40) != 0) {
    plVar8 = *(longlong **)(lVar6 + 0x30);
    if (*(longlong **)(lVar6 + 0x30) == (longlong *)0x0) {
      plVar8 = (longlong *)(lVar6 + 0x10);
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (*(longlong *)(lVar6 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(char *)(param_5 + 0x10c) == '\0') {
    fVar17 = (float)FUN_142c98860(param_1 + 5,local_2d0);
    fVar16 = (float)FUN_142c98860(param_1 + 0xc,local_2d0);
    fVar16 = fVar16 * fVar17;
  }
  else {
    fVar16 = *(float *)(param_5 + 0x108);
  }
  lVar6 = local_2e8;
  plVar8 = (longlong *)param_1[0x13];
  if ((plVar8 != (longlong *)0x0) && (param_7 != 0)) {
    fVar17 = (float)(**(code **)(*plVar8 + 0x290))(plVar8,local_2e8,&local_258,param_7);
    fVar16 = fVar16 * fVar17;
    if ((char)param_1[0x1e] != '\0') {
      local_140 = local_140 * fVar17;
      local_13c = local_13c * fVar17;
      local_138 = local_138 * fVar17;
    }
  }
  local_308 = CONCAT44(local_308._4_4_,fVar16);
  local_168 = *(byte *)(param_5 + 0x10) >> 2 & 0x3fffffe0 | local_168 & 0xffffffdf;
  local_310 = param_7;
  local_318 = param_5;
  lVar6 = (**(code **)(*param_1 + 0x280))(param_1,&local_258,local_2c8,lVar6);
  if (lVar6 != 0) {
    (**(code **)(*param_1 + 0x278))(param_1,lVar6,param_5);
    FUN_142d6cc00(lVar6);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_d8 != 0) {
    plVar8 = local_108;
    if (local_e8 != (longlong *)0x0) {
      plVar8 = local_e8;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142d12020 FUN_142d12020 body=270 status=ok
// SIG undefined FUN_142d12020(void)

void FUN_142d12020(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined8 local_18;
  undefined8 local_10;
  
  if (((int)param_4[1] != 0) &&
     ((*(char *)(param_1 + 0x100) != '\0' || (iVar1 = FUN_1428cf800(param_3), iVar1 != 3)))) {
    local_10 = 0;
    local_18 = param_2;
    local_10 = FUN_142d46fe0(param_2);
    FUN_142d1c090(param_1,local_28,local_48,&local_18,param_5);
    FRotator::Vector(local_48,local_38);
    lVar2 = *param_4;
    lVar3 = (longlong)(int)param_4[1] * 400 + lVar2;
    for (; lVar2 != lVar3; lVar2 = lVar2 + 400) {
      FUN_142d11680(param_1,&local_18,local_38,lVar2,param_5,*(undefined1 *)(param_1 + 0x100),0);
    }
  }
  return;
}



// FUNCTION 142d12130 FUN_142d12130 body=232 status=ok
// SIG undefined FUN_142d12130(void)

longlong FUN_142d12130(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                      undefined8 param_5,longlong param_6,undefined4 param_7)

{
  longlong lVar1;
  undefined8 local_38;
  undefined4 local_30;
  float local_2c;
  undefined2 local_28;
  longlong local_20;
  undefined8 local_18;
  
  lVar1 = FUN_142d54de0();
  if (lVar1 != 0) {
    if (((param_6 == 0) || (*(int *)(param_6 + 4) != 2)) ||
       (local_2c = *(float *)(param_6 + 8), local_2c <= 0.0)) {
      FUN_142d32ae0(param_2,param_7,lVar1);
    }
    else {
      local_38 = *(undefined8 *)(param_6 + 0x14);
      local_30 = *(undefined4 *)(param_6 + 0x1c);
      local_20 = 0;
      local_18 = 0;
      local_28 = 0x201;
      FUN_142d33bd0(param_2,param_7,&local_38,((*(byte *)(param_4 + 8) & 5) != 0) + '\x01',lVar1);
      if (local_20 != 0) {
        FMemory::Free();
        return lVar1;
      }
    }
  }
  return lVar1;
}



// FUNCTION 142d12220 FUN_142d12220 body=402 status=ok
// SIG undefined FUN_142d12220(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d12220(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_80;
  undefined8 *local_78;
  undefined8 local_70 [8];
  undefined8 *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_140a4d360(*(undefined8 *)(param_1 + 0x118),local_70,0);
  local_78 = local_70;
  puVar5 = local_70;
  if (local_30 != (undefined8 *)0x0) {
    puVar5 = local_30;
  }
  local_88 = 0;
  puVar1 = puVar5 + (int)local_28;
  local_80 = param_1;
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    lVar3 = *(longlong *)(param_1 + 400);
    uVar2 = *puVar5;
    lVar4 = (longlong)*(int *)(param_1 + 0x198) * 0x30 + lVar3;
    for (; lVar3 != lVar4; lVar3 = lVar3 + 0x30) {
      FUN_142d0c810(&local_80,lVar3,uVar2,&local_88);
    }
    lVar3 = *(longlong *)(param_1 + 0x1a0);
    lVar4 = (longlong)*(int *)(param_1 + 0x1a8) * 0x30 + lVar3;
    for (; lVar3 != lVar4; lVar3 = lVar3 + 0x30) {
      FUN_142d0c810(&local_80,lVar3,uVar2,&local_88);
    }
  }
  if (local_30 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142d123c0 FUN_142d123c0 body=340 status=ok
// SIG undefined FUN_142d123c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d123c0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  float fVar4;
  undefined8 local_48;
  float local_40;
  undefined8 local_38;
  float local_30;
  undefined1 local_28 [8];
  float local_20;
  
  FUN_142d2add0(param_1,param_2,param_3 + 1,*param_3);
  if (((param_2 != 0) && (*(longlong *)(param_1 + 0x1e8) != 0)) &&
     (lVar1 = *(longlong *)(param_2 + 0x488), lVar1 != 0)) {
    lVar2 = *(longlong *)(lVar1 + 0x168);
    if (lVar2 == 0) {
      local_48 = _DAT_1468b5d90;
      local_40 = DAT_1468b5d98;
    }
    else {
      local_48 = *(undefined8 *)(lVar2 + 0x220);
      local_40 = *(float *)(lVar2 + 0x228);
    }
    fVar4 = (float)local_48;
    uVar3 = (ulonglong)local_48 >> 0x20;
    local_30 = *(float *)(param_3 + 2) * 100.0 + local_40;
    local_40 = (float)DAT_1468b5da8;
    local_48 = DAT_1468b5da0;
    local_38 = CONCAT44(*(float *)((longlong)param_3 + 0xc) * 100.0 + (float)uVar3,
                        *(float *)(param_3 + 1) * 100.0 + fVar4);
    local_20 = local_30;
    FUN_1405a1e30(local_28,lVar1,*(longlong *)(param_1 + 0x1e8),&local_38,0,&local_48);
    FUN_140591060(local_28);
  }
  return;
}



// FUNCTION 142d12520 FUN_142d12520 body=530 status=ok
// SIG undefined FUN_142d12520(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d12520(longlong param_1,undefined4 param_2,longlong param_3,undefined8 *param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_228 [32];
  undefined8 local_208;
  longlong *local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  longlong *local_1e0;
  undefined8 local_1d8;
  longlong local_1c8;
  undefined8 local_1c0;
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  longlong local_68;
  ulonglong local_58;
  
  if (param_3 == 0) {
    return;
  }
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  plVar5 = (longlong *)0x0;
  if (*(longlong *)(param_3 + 0x2b0) != 0) {
    plVar5 = *(longlong **)(*(longlong *)(param_3 + 0x2b0) + 0x118);
  }
  plVar1 = *(longlong **)(param_1 + 0x118);
  FUN_142d0ab00(&local_208);
  if (plVar1 == (longlong *)0x0) {
    local_208 = 0;
  }
  else {
    uVar3 = UScrollBox::GetPrivateStaticClass();
    local_208 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
    uVar3 = UDamageableInterface::GetPrivateStaticClass();
    local_1f8 = UObjectBaseUtility::GetInterfaceAddress(plVar1,uVar3);
    local_200 = plVar1;
    if (local_1f8 != 0) goto LAB_142d125eb;
  }
  local_200 = (longlong *)0x0;
  local_1f8 = 0;
LAB_142d125eb:
  local_1e0 = plVar5;
  local_1f0 = FUN_142d46fe0(plVar5);
  plVar5 = local_1e0;
  local_1d8 = 0;
  if (local_1e0 != (longlong *)0x0) {
    uVar3 = UCircularThrobber::GetPrivateStaticClass();
    local_1d8 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar3);
  }
  local_1c0 = *param_4;
  if (*param_5 != 0) {
    lVar4 = FUN_142e0d0b0();
    local_1c8 = *param_5;
    for (lVar2 = local_1c8; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar4) {
        if (local_1c8 != 0) goto LAB_142d12669;
        break;
      }
    }
  }
  local_1c8 = *(longlong *)(param_3 + 0x50);
LAB_142d12669:
  plVar5 = (longlong *)FUN_142d54de0();
  if (plVar5 != (longlong *)0x0) {
    *(undefined1 *)((longlong)plVar5 + 0x335) = 2;
    (**(code **)(*plVar5 + 0x10))(plVar5,&local_208);
    FUN_142d29b80(param_1,param_2,plVar5);
    FUN_142d6cc00(plVar5);
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    plVar5 = local_b8;
    if (local_98 != (longlong *)0x0) {
      plVar5 = local_98;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142d12740 FUN_142d12740 body=437 status=ok
// SIG undefined FUN_142d12740(void)

undefined8 *
FUN_142d12740(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 local_res8;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined4 local_40;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  *param_2 = 0;
  param_2[1] = 0;
  cVar2 = (**(code **)(*param_1 + 0x290))(param_1,param_4);
  if (cVar2 == '\0') {
    local_58 = 0;
    local_50 = 0;
    (**(code **)(*param_1 + 0x2b0))(param_1,&local_58,0,param_4);
    if (0 < (int)local_50) {
      lVar3 = FUN_1422ca050();
      local_res8 = *(undefined8 *)(param_1[2] + 0x18);
      FName::ToString(&local_res8,local_38);
      local_48 = 0;
      local_40 = 0;
      if (((param_3 != &local_48) && ((int)param_3[1] != 0)) &&
         (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
        (**(code **)(*param_3 + 0x30))(param_3,&local_48);
      }
      puVar4 = (undefined8 *)
               FUN_142840b00(lVar3 + 0x178,local_28,&local_58,&local_48,0,0,0,local_38);
      if (param_2 != puVar4) {
        *param_2 = *puVar4;
        *puVar4 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,puVar4 + 1);
      }
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_20 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar1 = (int *)((longlong)local_20 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
    }
    if ((int)local_50 != 0) {
      plVar5 = (longlong *)(local_58 + 8);
      iVar6 = (int)local_50;
      do {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 3;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 142d12900 FUN_142d12900 body=573 status=ok
// SIG undefined FUN_142d12900(void)

void FUN_142d12900(longlong *param_1,undefined4 *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  longlong local_48;
  undefined8 local_40;
  longlong local_38 [3];
  undefined4 local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  cVar2 = (**(code **)(*param_1 + 0x290))(param_1,0);
  if (cVar2 == '\0') {
    local_48 = 0;
    local_40 = 0;
    (**(code **)(*param_1 + 0x2b0))(param_1,&local_48,0,0);
    if (0 < (int)local_40) {
      plVar8 = param_1 + 0x24;
      iVar3 = TArray<TScriptDelegate<FWeakObjectPtr>,FDefaultAllocator>::Find(plVar8,param_2);
      if (iVar3 == -1) {
        iVar3 = (int)param_1[0x25];
        *(int *)(param_1 + 0x25) = iVar3 + 1;
        if (*(int *)((longlong)param_1 + 300) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar3);
        }
        puVar7 = (undefined4 *)((longlong)iVar3 * 0x10 + *plVar8);
        *puVar7 = *param_2;
        puVar7[1] = param_2[1];
        *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(param_2 + 2);
      }
      lVar4 = FUN_1422ca050();
      local_38[0] = 0;
      local_38[1] = 0x1f;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
      FGenericPlatformString::Memcpy(local_38[0],L"RequestAsyncLoad ArrayDelegate",0x3e);
      local_38[2] = 0;
      local_20 = 0;
      puVar5 = (undefined8 *)operator_new(0x28,local_38 + 2);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &PTR_FUN_143f4d170;
        FWeakObjectPtr::operator=(puVar5 + 1,param_1);
        puVar5[2] = FUN_142d20750;
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar5[4] = uVar6;
        *puVar5 = &PTR_FUN_143f4d1b8;
      }
      FUN_142840b00(lVar4 + 0x178,local_18,&local_48,local_38 + 2,0,0,0,local_38);
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_10 + 1;
        lVar4 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar1 = (int *)((longlong)local_10 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
    }
    if ((int)local_40 != 0) {
      plVar8 = (longlong *)(local_48 + 8);
      iVar3 = (int)local_40;
      do {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 3;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (local_48 != 0) {
      FMemory::Free();
      return;
    }
  }
  else {
    FUN_140757f80(param_2,param_1);
  }
  return;
}



// FUNCTION 142d12b40 FUN_142d12b40 body=129 status=ok
// SIG undefined FUN_142d12b40(void)

void FUN_142d12b40(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  FUN_142330a70();
  if (0 < *(int *)(param_1 + 0x2c8)) {
    puVar1 = *(undefined8 **)(param_1 + 0x2c0);
    uVar2 = 0;
    uVar3 = (longlong)*(int *)(param_1 + 0x2c8) & 0x1fffffffffffffff;
    if (puVar1 + *(int *)(param_1 + 0x2c8) < puVar1) {
      uVar3 = uVar2;
    }
    if (uVar3 != 0) {
      do {
        FUN_142d26450(param_1,*puVar1,0);
        uVar2 = uVar2 + 1;
        puVar1 = puVar1 + 1;
      } while (uVar2 != uVar3);
    }
  }
  return;
}



// FUNCTION 142d12bd0 FUN_142d12bd0 body=807 status=ok
// SIG undefined FUN_142d12bd0(void)

void FUN_142d12bd0(longlong param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  int iVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  wchar_t *pwVar10;
  undefined4 uVar11;
  undefined8 local_res8;
  code *local_28;
  ulonglong uStack_20;
  
  FUN_142330a70();
  iVar3 = FUN_14233f450(param_1);
  if (iVar3 == 3) {
    FUN_142d1e580(param_1);
  }
  plVar8 = *(longlong **)(param_1 + 0x118);
  pwVar10 = (wchar_t *)0x0;
  pwVar5 = pwVar10;
  if (plVar8 != (longlong *)0x0) {
    uVar4 = FUN_142e64ca0();
    pwVar5 = (wchar_t *)(**(code **)(*plVar8 + 0x628))(plVar8,uVar4);
  }
  *(wchar_t **)(param_1 + 0x810) = pwVar5;
  if (pwVar5 != (wchar_t *)0x0) {
    iVar3 = FUN_14233f450(param_1);
    if (iVar3 == 3) {
      (**(code **)(**(longlong **)(param_1 + 0x810) + 0x400))();
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x810) + 0x408))();
    }
  }
  lVar6 = FUN_142da89b0(param_1);
  if ((lVar6 != 0) && (*(char *)(lVar6 + 0x68) != '\0')) {
    uVar11 = FUN_142c98860(lVar6 + 0xe0,*(undefined8 *)(param_1 + 0x118));
    *(undefined4 *)(param_1 + 0x848) = uVar11;
  }
  FUN_142d57f70(param_1 + 0x3d0,*(undefined8 *)(param_1 + 0x118));
  plVar8 = *(longlong **)(param_1 + 0x118);
  if (plVar8 != (longlong *)0x0) {
    uVar4 = FUN_142e1a5a0();
    lVar6 = (**(code **)(*plVar8 + 0x628))(plVar8,uVar4);
    if ((((lVar6 != 0) && (iVar3 = FUN_14233f450(param_1), iVar3 == 3)) &&
        (0 < *(int *)(param_1 + 0x680))) &&
       ((lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x678) + 8), lVar1 != 0 &&
        (*(longlong *)(lVar1 + 0x30) != 0)))) {
      lVar6 = FUN_142d62010(lVar6);
      uStack_20 = uStack_20 & 0xffffffff00000000;
      local_28 = thunk_FUN_142d28e10;
      pwVar7 = _guard_xfg_dispatch_icall_nop
                         (L"&UDamageComponent::OnHealthResourceNowDepleted",L"::");
      pwVar5 = pwVar10;
      while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar5 = pwVar2;
      }
      FName::FName(&local_res8,pwVar5 + 2,1);
      FUN_140ddbc10(lVar6 + 8,param_1,&local_28,local_res8);
      uStack_20 = uStack_20 & 0xffffffff00000000;
      local_28 = thunk_FUN_142d28e10;
      pwVar7 = _guard_xfg_dispatch_icall_nop
                         (L"&UDamageComponent::OnHealthResourceNowNotDepleted",L"::");
      pwVar5 = pwVar10;
      while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar5 = pwVar2;
      }
      FName::FName(&local_res8,pwVar5 + 2,1);
      FUN_140ddbc10(lVar6 + 0x18,param_1,&local_28,local_res8);
    }
  }
  if ((((*(byte *)(param_1 + 0x7e8) & 1) != 0) && (*(longlong *)(param_1 + 0x818) == 0)) &&
     ((*(longlong *)(param_1 + 0x118) != 0 &&
      ((plVar8 = (longlong *)FUN_1422336c0(), plVar8 != (longlong *)0x0 ||
       (plVar8 = (longlong *)FUN_14222e2a0(*(undefined8 *)(param_1 + 0x118)),
       plVar8 != (longlong *)0x0)))))) {
    uVar4 = UScrollBox::GetPrivateStaticClass();
    lVar6 = (**(code **)(*plVar8 + 0x628))(plVar8,uVar4);
    if ((lVar6 != 0) && ((iVar3 = FUN_14233f450(param_1), iVar3 == 3 && (lVar6 != param_1)))) {
      *(longlong *)(param_1 + 0x818) = lVar6;
    }
  }
  if (0 < *(int *)(param_1 + 0x7f8)) {
    puVar9 = *(undefined8 **)(param_1 + 0x7f0);
    pwVar5 = (wchar_t *)((longlong)*(int *)(param_1 + 0x7f8) & 0x1fffffffffffffff);
    if (puVar9 + *(int *)(param_1 + 0x7f8) < puVar9) {
      pwVar5 = pwVar10;
    }
    if (pwVar5 != (wchar_t *)0x0) {
      do {
        FUN_142d26450(param_1,*puVar9,0);
        pwVar10 = (wchar_t *)((longlong)pwVar10 + 1);
        puVar9 = puVar9 + 1;
      } while (pwVar10 != pwVar5);
    }
  }
  return;
}



// FUNCTION 142d12f00 FUN_142d12f00 body=957 status=ok
// SIG undefined FUN_142d12f00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d12f00(longlong *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  code *local_e8;
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  FUN_142330a70();
  param_1[0x58] = (longlong)param_1;
  lVar8 = param_1[0x54];
  lVar4 = lVar8 + (longlong)(int)param_1[0x55] * 0x28;
  for (; lVar8 != lVar4; lVar8 = lVar8 + 0x28) {
    FUN_142d14a30(param_1[0x58],*(undefined8 *)(lVar8 + 0x10));
  }
  if (0 < (int)param_1[0x31]) {
    (**(code **)(*param_1 + 0x260))(param_1);
    iVar2 = (int)param_1[0x31];
    plVar5 = param_1 + 0x59;
    iVar1 = (int)param_1[0x5a];
    if (iVar1 < iVar2) {
      *(int *)(param_1 + 0x5a) = iVar2;
      iVar7 = iVar2 - iVar1;
      if (*(int *)((longlong)param_1 + 0x2d4) < iVar2) {
        TArray<FBatchedLine,FDefaultAllocator>::ResizeGrow(plVar5,iVar1);
      }
      puVar6 = (undefined1 *)((longlong)iVar1 * 0x34 + *plVar5);
      if (iVar7 != 0) {
        puVar3 = (undefined8 *)(puVar6 + 0xc);
        do {
          *puVar6 = 1;
          puVar6 = puVar6 + 0x34;
          *(undefined2 *)((longlong)puVar3 + -0xb) = 1;
          puVar3[-1] = 0;
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = 0;
          puVar3[3] = 0;
          puVar3[4] = 0;
          puVar3 = (undefined8 *)((longlong)puVar3 + 0x34);
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    else if ((iVar2 < iVar1) && (iVar2 != iVar1)) {
      *(int *)(param_1 + 0x5a) = iVar2;
      TArray<FBatchedLine,FDefaultAllocator>::ResizeShrink(plVar5);
    }
    FUN_142d25e10(param_1);
  }
  if (((char)param_1[0x36] == '\0') ||
     (((*(byte *)(param_1 + 0x17) & 8) != 0 && (iVar2 = FUN_14233f450(param_1), iVar2 != 3))))
  goto LAB_142d131d7;
  FWeakObjectPtr::operator=(&local_f8,param_1);
  local_b8 = (longlong *)0x0;
  local_a8 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_d8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_CopyToEmptyStorage_143fcfe50;
    *(undefined4 *)(puVar3 + 1) = (undefined4)local_f8;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_f8._4_4_;
  }
  local_e8 = (code *)&LAB_142d13b70;
  lVar4 = param_1[0x24];
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0(param_1);
  }
  if (*(longlong *)(lVar4 + 400) == 0) {
    uVar9 = *(undefined8 *)(lVar4 + 0x3f8);
  }
  else {
    uVar9 = *(undefined8 *)(*(longlong *)(lVar4 + 400) + 0x90);
  }
  local_98 = 0;
  local_90 = 0;
  FWeakObjectPtr::operator=(local_88,0);
  plVar5 = local_b8;
  local_80 = 0;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  if ((local_b8 == (longlong *)0x0) &&
     (_guard_xfg_dispatch_icall_nop(local_68,local_d8,0x20), local_48 != (longlong *)0x0)) {
    FMemory::Free();
    plVar5 = local_b8;
  }
  iVar2 = local_a8;
  local_48 = plVar5;
  local_b8 = (longlong *)0x0;
  local_38 = local_a8;
  local_a8 = 0;
  if (iVar2 == 0) {
LAB_142d13153:
    local_78 = AK::MemoryMgr::StartProfileThreadUsage;
  }
  else {
    plVar10 = local_68;
    if (plVar5 != (longlong *)0x0) {
      plVar10 = plVar5;
    }
    if (plVar10 == (longlong *)0x0) goto LAB_142d13153;
    (**(code **)(*plVar10 + 8))();
    local_78 = local_e8;
  }
  local_e8 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880af0(uVar9,&local_98);
  if (local_38 != 0) {
    plVar5 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar5 = local_48;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
  if (local_a8 != 0) {
    plVar5 = local_d8;
    if (local_b8 != (longlong *)0x0) {
      plVar5 = local_b8;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free();
  }
LAB_142d131d7:
  lVar4 = param_1[0x23];
  if (lVar4 != 0) {
    uStack_f0 = 0;
    local_f8 = FUN_142d1e160;
    plVar10 = (longlong *)(lVar4 + 0x3b0);
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar5 + 1,param_1);
      *(undefined4 *)(plVar5 + 2) = (undefined4)local_f8;
      *(undefined4 *)((longlong)plVar5 + 0x14) = local_f8._4_4_;
      *(undefined4 *)(plVar5 + 3) = uStack_f0;
      *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_ec;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar5[5] = lVar8;
      *plVar5 = (longlong)&PTR_FUN_143fcff08;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10,1);
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_f8);
      iVar2 = *(int *)(lVar4 + 0x3b8);
      *(int *)(lVar4 + 0x3b8) = iVar2 + 1;
      if (*(int *)(lVar4 + 0x3bc) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar2);
      }
      puVar3 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar10);
      *puVar3 = plVar5;
      *(undefined4 *)(puVar3 + 1) = 3;
    }
  }
  return;
}



// FUNCTION 142d132c0 FUN_142d132c0 body=474 status=ok
// SIG undefined FUN_142d132c0(void)

void FUN_142d132c0(longlong param_1,longlong param_2,float *param_3,float *param_4,
                  undefined4 param_5)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float local_38;
  float local_34;
  float local_30;
  
  if (param_2 == 0) {
    return;
  }
  cVar2 = FUN_142d5a800(param_1 + 0x3d0);
  if (cVar2 != '\0') {
    return;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar4 = DAT_146b33f38;
  lVar5 = DAT_146b33f38 + 0x30;
  lVar3 = FWeakObjectPtr::Get(lVar5);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar4 + 0x38)) {
      return;
    }
    if (*(longlong *)(lVar4 + 0x40) == 0) {
      return;
    }
    lVar3 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar5,lVar3);
    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar4 + 0x38) = DAT_1464b56f4;
    }
    lVar3 = FWeakObjectPtr::Get(lVar5);
    if (lVar3 == 0) {
      return;
    }
  }
  lVar4 = FUN_142e0ceb0();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar4 = FRuntimeFloatCurve::GetRichCurve(lVar3 + 0x158);
    fVar6 = 350.0;
    if (lVar4 != 0) {
      fVar6 = (float)FRichCurve::Eval(lVar4,param_5);
    }
    local_38 = fVar6 * *param_4 + *param_3;
    local_34 = fVar6 * param_4[1] + param_3[1];
    local_30 = fVar6 * param_4[2] + param_3[2];
    FUN_142d6b430(param_2,*(undefined8 *)(param_1 + 0x118),param_3,&local_38,0,0,3,&DAT_1466ad4f0);
  }
  return;
}



// FUNCTION 142d134a0 FUN_142d134a0 body=166 status=ok
// SIG undefined FUN_142d134a0(void)

void FUN_142d134a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0xb0);
  lVar2 = lVar4 + (longlong)*(int *)(param_1 + 0xb8) * 0x28;
  if (lVar4 != lVar2) {
    while (*(longlong *)(lVar4 + 0x10) != param_2) {
      lVar4 = lVar4 + 0x28;
      if (lVar4 == lVar2) {
        return;
      }
    }
    plVar1 = (longlong *)(param_1 + 0xc0);
    lVar5 = *plVar1;
    lVar4 = (longlong)*(int *)(param_1 + 200) * 0x18;
    lVar2 = lVar4 + lVar5;
    for (; lVar5 != lVar2; lVar5 = lVar5 + 0x18) {
      if (*(longlong *)(lVar5 + 0x10) == param_2) {
        return;
      }
    }
    iVar3 = *(int *)(param_1 + 200) + 1;
    *(int *)(param_1 + 200) = iVar3;
    if (*(int *)(param_1 + 0xcc) < iVar3) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar1);
    }
    FUN_142d0a8b0(*plVar1 + lVar4,param_2);
  }
  return;
}



// FUNCTION 142d13550 FUN_142d13550 body=276 status=ok
// SIG undefined FUN_142d13550(void)

undefined8 FUN_142d13550(undefined8 param_1,byte *param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  float local_40;
  
  if ((*param_3 != 0) && ((*param_2 & 1) != 0)) {
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x6c);
    plVar1 = (longlong *)*param_3;
    if (plVar3 == plVar1) {
      uVar4 = FWeakObjectPtr::Get(param_2 + 0x74);
      cVar2 = FUN_142d2bbb0(uVar4,*(undefined8 *)(param_2 + 0x80),param_3);
      if (cVar2 != '\0') {
        return 2;
      }
    }
    else {
      (**(code **)(*plVar1 + 0x6c8))(plVar1,&local_58,&local_48);
      if ((((*(float *)(param_2 + 0x14) <= local_58 - local_48) ||
           (local_58 + local_48 <= *(float *)(param_2 + 0x14))) ||
          (*(float *)(param_2 + 0x18) <= local_54 - local_44)) ||
         (((local_54 + local_44 <= *(float *)(param_2 + 0x18) ||
           (*(float *)(param_2 + 0x1c) <= local_50 - local_40)) ||
          (local_50 + local_40 <= *(float *)(param_2 + 0x1c))))) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142d13670 FUN_142d13670 body=749 status=ok
// SIG undefined FUN_142d13670(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142d13670(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float local_80;
  
  if ((*(char *)(param_1 + 0x109) == '\0') ||
     (lVar3 = FWeakObjectPtr::Get(param_2 + 0x16c), lVar3 == 0)) {
    uVar7 = 0x3f800000;
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x168);
    if (lVar3 == 0) {
      local_80 = DAT_1468b5d98;
      puVar4 = &local_88;
      local_88 = _DAT_1468b5d90;
    }
    else {
      puVar4 = &local_a8;
      local_a0 = (float)*(undefined4 *)(lVar3 + 0x228);
      local_a8 = *(undefined8 *)(lVar3 + 0x220);
    }
    local_98 = *puVar4;
    local_90 = *(float *)(puVar4 + 1);
    FRotator::Vector(param_4 + 0x20,&local_88);
    if (*(int *)(param_4 + 4) == 1) {
      fVar6 = *(float *)(param_4 + 8);
    }
    else {
      fVar6 = 0.0;
    }
    uVar7 = *(undefined8 *)(param_4 + 0x14);
    local_a0 = *(float *)(param_4 + 0x1c);
    local_a8._0_4_ = (float)uVar7;
    local_a8._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
    fVar11 = local_a0;
    if (*(char *)(param_1 + 0x108) == '\x01') {
      local_a8._0_4_ = (float)local_a8 - (float)local_88 * fVar6;
      local_a8._4_4_ = local_a8._4_4_ - local_88._4_4_ * fVar6;
      fVar11 = local_a0 - local_80 * fVar6;
      fVar6 = fVar6 + fVar6;
    }
    if ((local_88._4_4_ == 0.0) && (local_80 == 0.0)) {
      fVar10 = 0.0;
      fVar8 = 1.0;
    }
    else {
      fVar8 = 0.0;
      fVar10 = 1.0;
    }
    fVar12 = (float)local_88 * fVar8 - fVar10 * local_88._4_4_;
    fVar9 = ((float)local_a8 - (float)local_98) * -(fVar8 * local_80) +
            (local_a8._4_4_ - local_98._4_4_) * fVar10 * local_80 + (fVar11 - local_90) * fVar12;
    fVar10 = (local_a8._4_4_ - local_98._4_4_) - fVar9 * fVar10 * local_80;
    fVar8 = ((float)local_a8 - (float)local_98) - fVar9 * -(fVar8 * local_80);
    fVar11 = (fVar11 - local_90) - fVar9 * fVar12;
    fVar11 = SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar11 * fVar11) * (1.0 / fVar6);
    fVar6 = 0.0;
    if ((0.0 <= fVar11) && (fVar6 = fVar11, 1.0 <= fVar11)) {
      fVar6 = 1.0;
    }
    local_a8 = uVar7;
    if (*(longlong *)(param_3 + 0x48) != 0) {
      plVar5 = (longlong *)FUN_142e49950();
      plVar1 = *(longlong **)(param_3 + 0x48);
      for (plVar2 = plVar1; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[6]) {
        if (plVar2 == plVar5) {
          if (plVar1 != (longlong *)0x0) {
            lVar3 = plVar1[0x1f];
            if (lVar3 == 0) {
              (**(code **)(*plVar1 + 0x368))(plVar1);
              lVar3 = plVar1[0x1f];
            }
            goto LAB_142d13901;
          }
          break;
        }
      }
    }
    lVar3 = 0;
LAB_142d13901:
    uVar7 = FUN_142d34770(fVar6,lVar3);
  }
  return uVar7;
}



// FUNCTION 142d13960 FUN_142d13960 body=384 status=ok
// SIG undefined FUN_142d13960(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142d13960(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined8 local_28;
  float local_20;
  
  if ((*(char *)(param_1 + 0xa1) != '\0') &&
     (lVar3 = FWeakObjectPtr::Get(param_2 + 0x16c), lVar3 != 0)) {
    if (0.0 < *(float *)(param_4 + 8)) {
      lVar3 = *(longlong *)(lVar3 + 0x168);
      if (lVar3 == 0) {
        local_28 = _DAT_1468b5d90;
        local_20 = DAT_1468b5d98;
      }
      else {
        local_28 = *(undefined8 *)(lVar3 + 0x220);
        local_20 = *(float *)(lVar3 + 0x228);
      }
      fVar6 = *(float *)(param_4 + 0x14) - (float)local_28;
      fVar7 = *(float *)(param_4 + 0x18) - (float)((ulonglong)local_28 >> 0x20);
      local_20 = *(float *)(param_4 + 0x1c) - local_20;
      fVar7 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + local_20 * local_20) *
              (1.0 / *(float *)(param_4 + 8));
      fVar6 = 0.0;
      if ((0.0 <= fVar7) && (fVar6 = fVar7, 1.0 <= fVar7)) {
        fVar6 = 1.0;
      }
      if (*(longlong *)(param_3 + 0x48) != 0) {
        plVar4 = (longlong *)FUN_142e49950();
        plVar1 = *(longlong **)(param_3 + 0x48);
        for (plVar2 = plVar1; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[6]) {
          if (plVar2 == plVar4) {
            if (plVar1 != (longlong *)0x0) {
              lVar3 = plVar1[0x1f];
              if (lVar3 == 0) {
                (**(code **)(*plVar1 + 0x368))(plVar1);
                lVar3 = plVar1[0x1f];
              }
              goto LAB_142d13a88;
            }
            break;
          }
        }
      }
      lVar3 = 0;
LAB_142d13a88:
      uVar5 = FUN_142d34770(fVar6,lVar3);
      return uVar5;
    }
  }
  return 0x3f800000;
}



// FUNCTION 142d13ae0 FUN_142d13ae0 body=122 status=ok
// SIG undefined FUN_142d13ae0(void)

undefined8 FUN_142d13ae0(longlong *param_1)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if ((longlong *)param_1[0x56] == (longlong *)0x0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = (float)(**(code **)(*(longlong *)param_1[0x56] + 0x408))();
  }
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1,0);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
    uVar3 = 0;
  }
  else {
    fVar1 = (float)uVar2 / fVar1;
    if (fVar1 < 0.0) {
      return 0;
    }
  }
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  return CONCAT44(uVar3,fVar1);
}



// FUNCTION 142d13b80 FUN_142d13b80 body=13 status=ok
// SIG undefined FUN_142d13b80(void)

byte FUN_142d13b80(longlong param_1)

{
  return *(byte *)(param_1 + 0x7e8) >> 2 & 1;
}



// FUNCTION 142d13b90 FUN_142d13b90 body=89 status=ok
// SIG undefined FUN_142d13b90(void)

ulonglong FUN_142d13b90(ulonglong *param_1,float param_2)

{
  ulonglong uVar1;
  
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    uVar1 = (**(code **)(*(longlong *)param_1[2] + 0x780))();
    if ((char)uVar1 != '\0') goto LAB_142d13bcf;
  }
  uVar1 = *param_1;
  if (param_2 <= *(float *)(uVar1 + 0x104) + *(float *)((longlong)param_1 + 0x22c)) {
    return CONCAT71((int7)(uVar1 >> 8),1);
  }
LAB_142d13bcf:
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 142d13bf0 FUN_142d13bf0 body=82 status=ok
// SIG undefined FUN_142d13bf0(void)

void FUN_142d13bf0(longlong param_1)

{
  char cVar1;
  
  *(undefined8 *)(param_1 + 0x838) = 0;
  cVar1 = FUN_142d1f310();
  if (cVar1 == '\0') {
    *(uint *)(param_1 + 0x840) = *(uint *)(param_1 + 0x840) & 0xfffffffb;
  }
  else if ((*(uint *)(param_1 + 0x840) & 4) == 0) {
    FUN_142d23f40(param_1,0);
    FUN_142d5c340(param_1 + 0x3d0);
    return;
  }
  return;
}



// FUNCTION 142d13c50 FUN_142d13c50 body=1063 status=ok
// SIG undefined FUN_142d13c50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d13c50(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  float fVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  uint *local_1f0;
  undefined8 *local_1e8;
  longlong **local_1e0;
  undefined4 local_1d8;
  char local_1c8;
  longlong *local_1c0;
  int local_1b8;
  uint local_1b0;
  undefined1 local_1ac;
  undefined8 *local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190 [2];
  undefined8 local_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined1 local_168 [12];
  undefined4 local_15c;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined1 local_c2;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined4 local_b8;
  undefined2 local_b4;
  longlong local_90;
  undefined8 local_88;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  lVar2 = *(longlong *)(*param_2 + 0x98);
  fVar1 = *(float *)(param_3 + 0xf2);
  local_1a8 = param_3;
  local_1a0 = param_1;
  if (((longlong *)param_2[2] == (longlong *)0x0) ||
     (cVar3 = (**(code **)(*(longlong *)param_2[2] + 0x780))(), cVar3 == '\0')) {
    cVar3 = fVar1 <= *(float *)(*param_2 + 0x104) + *(float *)((longlong)param_2 + 0x22c);
  }
  else {
    cVar3 = false;
  }
  uVar4 = 0;
  local_1c8 = cVar3;
  if ((0 < (int)param_2[0x5a]) && (param_2[2] != 0)) {
    uVar4 = FUN_142dd0740();
  }
  plVar9 = (longlong *)param_2[0x59];
  plVar12 = plVar9 + (longlong)(int)param_2[0x5a] * 0x32;
  do {
    if (plVar9 == plVar12) {
      return;
    }
    if (((((*(byte *)(plVar9 + 1) & 1) == 0) && ((*(byte *)(lVar2 + 0x2c) & 4) == 0)) &&
        ((*plVar9 == 0 || ((*(byte *)(*plVar9 + 0x660) & 8) == 0)))) &&
       (lVar5 = FWeakObjectPtr::Get((longlong)plVar9 + 0x16c), lVar5 != 0)) {
      FUN_142d1c440(lVar2,local_190,plVar9 + 3);
      if (cVar3 == '\0') {
        _guard_xfg_dispatch_icall_nop(local_168,0,0x90);
        local_1e0 = (longlong **)CONCAT71(local_1e0._1_7_,uVar4);
        local_1e8 = local_190;
        local_1f0 = (uint *)((longlong)param_2 + 0x244);
        local_1f8 = local_1a8;
        local_15c = 0x3f800000;
        cVar3 = FUN_142d24000(lVar2,local_168,param_2 + 1,plVar9 + 3);
        if (cVar3 == '\0') {
          cVar3 = FUN_142d1f850(plVar9 + 3);
          if (cVar3 != '\0') {
            FUN_142d17470(plVar9,plVar9 + 3);
          }
        }
        else if (cVar3 == '\x01') {
          *(byte *)(plVar9 + 1) = *(byte *)(plVar9 + 1) | 0x10;
        }
        else if (cVar3 == '\x02') {
          FUN_140729f20(plVar9 + 0x20,local_168);
          *(byte *)(plVar9 + 1) = *(byte *)(plVar9 + 1) | 5;
          *(undefined4 *)(plVar9 + 0x1f) = 0x7f7fffff;
        }
      }
      else {
        lVar5 = param_2[0x45];
        local_180 = FUN_142d1e2d0;
        uStack_178 = 0;
        local_1c0 = (longlong *)0x0;
        local_1b8 = 0;
        plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
        local_1b8 = 3;
        local_1c0 = plVar6;
        if (plVar6 != (longlong *)0x0) {
          *plVar6 = (longlong)&PTR_FUN_14471e7f0;
          FWeakObjectPtr::operator=(plVar6 + 1,local_1a0);
          *(undefined4 *)(plVar6 + 2) = (undefined4)local_180;
          *(undefined4 *)((longlong)plVar6 + 0x14) = local_180._4_4_;
          *(undefined4 *)(plVar6 + 3) = uStack_178;
          *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_174;
          *(int *)(plVar6 + 4) = (int)lVar5;
          lVar5 = FDelegateHandle::GenerateNewID();
          plVar6[5] = lVar5;
          *plVar6 = (longlong)&PTR_FUN_14471e838;
        }
        uVar10 = 0;
        local_d0 = 0;
        local_90 = 0;
        local_88 = 0;
        local_70 = 0;
        local_68 = 0;
        local_c8 = 0x10000;
        local_c0 = 0;
        local_c4 = 0;
        local_b4 = 0x101;
        local_bc = 0;
        local_c2 = 0;
        local_b8 = 0;
        local_d8 = DAT_146b31a48;
        if (param_2[1] != 0) {
          FCollisionQueryParams::AddIgnoredActor(&local_d8);
          FCollisionQueryParams::AddIgnoredActor(&local_d8,param_2[2]);
        }
        uVar7 = 1;
        local_1b0 = 1;
        uVar11 = (longlong)DAT_146b31a78 & 0x3fffffffffffffff;
        if (DAT_146b31a70 + DAT_146b31a78 < DAT_146b31a70) {
          uVar11 = uVar10;
        }
        puVar8 = DAT_146b31a70;
        if (uVar11 != 0) {
          do {
            uVar7 = uVar7 | 1 << (*puVar8 & 0x1f);
            uVar10 = uVar10 + 1;
            puVar8 = puVar8 + 1;
            local_1b0 = uVar7;
          } while (uVar10 != uVar11);
        }
        local_1e0 = &local_1c0;
        local_1d8 = 0;
        local_1e8 = &local_d8;
        local_1f0 = &local_1b0;
        local_1f8 = local_190;
        local_1ac = uVar4;
        FUN_142330140(local_1a8,&local_198,CONCAT71((int7)(uVar10 >> 8),1),(longlong)param_2 + 0x244
                     );
        if (local_70 != 0) {
          FMemory::Free();
        }
        if (local_90 != 0) {
          FMemory::Free();
        }
        if (local_198 != 0) {
          *(byte *)(plVar9 + 1) = *(byte *)(plVar9 + 1) | 8;
          plVar9[2] = local_198;
        }
        if (local_1b8 != 0) {
          if (local_1c0 == (longlong *)0x0) goto LAB_142d14038;
          (**(code **)(*local_1c0 + 0x28))(local_1c0,0);
          if (local_1c0 != (longlong *)0x0) {
            local_1c0 = (longlong *)FMemory::Realloc(local_1c0,0,0);
          }
          local_1b8 = 0;
        }
        if (local_1c0 != (longlong *)0x0) {
          FMemory::Free(local_1c0);
        }
      }
    }
LAB_142d14038:
    plVar9 = plVar9 + 0x32;
    cVar3 = local_1c8;
  } while( true );
}



// FUNCTION 142d14080 ReleaseDynamicRHI body=11 status=ok
// SIG undefined ReleaseDynamicRHI(void)

void TUniformBuffer<FLpvWriteUniformBufferParameters>::ReleaseDynamicRHI(longlong param_1)

{
  FUN_142d15ac0(param_1 + 0x38,0);
  return;
}



// FUNCTION 142d14090 FUN_142d14090 body=468 status=ok
// SIG undefined FUN_142d14090(void)

void FUN_142d14090(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  uint uStack_2c;
  
  plVar1 = (longlong *)(param_1 + 600);
  uVar8 = 0;
  *(undefined4 *)(param_1 + 0x260) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x264)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar1,0);
  }
  lVar6 = *(longlong *)(param_1 + 0x2b0);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x670) == 0) {
      uVar10 = uVar8;
      uVar12 = uVar8;
      if (0 < *(int *)(lVar6 + 0x680)) {
        do {
          if (((-1 < (longlong)uVar8) && ((int)uVar10 < *(int *)(param_1 + 0x1e8))) &&
             (0.0 < *(float *)(*(longlong *)(param_1 + 0x1e0) + uVar8 * 4))) {
            plVar11 = (longlong *)*plVar1;
            iVar4 = *(int *)(param_1 + 0x260);
            lVar6 = *(longlong *)(uVar12 + *(longlong *)(lVar6 + 0x678));
            for (plVar7 = plVar11; (plVar7 != plVar11 + (longlong)iVar4 * 2 && (*plVar7 != lVar6));
                plVar7 = plVar7 + 2) {
            }
            if (plVar7 == plVar11 + (longlong)iVar4 * 2) {
              *(int *)(param_1 + 0x260) = iVar4 + 1;
              if (*(int *)(param_1 + 0x264) < iVar4 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1);
                plVar11 = (longlong *)*plVar1;
              }
              plVar11[(longlong)iVar4 * 2] = lVar6;
              (plVar11 + (longlong)iVar4 * 2)[1] = (ulonglong)uStack_2c << 0x20;
              plVar7 = (longlong *)((longlong)*(int *)(param_1 + 0x260) * 0x10 + -0x10 + *plVar1);
            }
            *(float *)(plVar7 + 1) =
                 *(float *)(*(longlong *)(param_1 + 0x1e0) + uVar8 * 4) + *(float *)(plVar7 + 1);
            lVar6 = *(longlong *)(param_1 + 0x2b0);
          }
          uVar9 = (int)uVar10 + 1;
          uVar8 = uVar8 + 1;
          uVar10 = (ulonglong)uVar9;
          uVar12 = uVar12 + 0x78;
        } while ((int)uVar9 < *(int *)(lVar6 + 0x680));
      }
    }
    else if ((*(int *)(lVar6 + 0x670) == 1) && (0 < *(int *)(param_1 + 0x1e8))) {
      uVar5 = *(undefined8 *)(lVar6 + 0x6c0);
      iVar4 = *(int *)(param_1 + 0x260);
      uVar3 = **(undefined4 **)(param_1 + 0x1e0);
      *(int *)(param_1 + 0x260) = iVar4 + 1;
      if (*(int *)(param_1 + 0x264) < iVar4 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar4);
      }
      puVar2 = (undefined8 *)(*plVar1 + (longlong)iVar4 * 0x10);
      *puVar2 = uVar5;
      puVar2[1] = CONCAT44(uStack_2c,uVar3);
      return;
    }
  }
  return;
}



// FUNCTION 142d14270 FUN_142d14270 body=1059 status=ok
// SIG undefined FUN_142d14270(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d14270(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong *param_5)

{
  byte *pbVar1;
  undefined4 uVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined1 local_a8 [12];
  undefined4 local_9c;
  undefined1 local_3c [8];
  undefined1 local_34 [12];
  undefined8 local_28;
  
  if ((*(byte *)(param_1 + 0x2c) & 2) == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  lVar8 = *param_4;
  if (lVar8 != 0) {
    UDamageableInterface::GetPrivateStaticClass();
    plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar8);
    if (plVar7 != (longlong *)0x0) {
      _guard_xfg_dispatch_icall_nop(local_a8,0,0x90);
      local_9c = 0x3f800000;
      cVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,local_a8);
      if (cVar5 == '\0') {
        return;
      }
      lVar8 = FWeakObjectPtr::Get(local_3c);
      if (lVar8 == 0) {
        return;
      }
      if ((*(byte *)(lVar8 + 0x91) & 0x40) == 0) {
        return;
      }
      uVar9 = FUN_142d29780(lVar8);
      uVar10 = FWeakObjectPtr::Get(local_34);
      lVar8 = FUN_142d46e70(uVar9,uVar10,local_28);
      if ((lVar8 != 0) && ((*(byte *)(lVar8 + 0x48) & 0x10) == 0)) {
        return;
      }
      lVar8 = param_5[1];
      iVar6 = (int)lVar8 + 1;
      *(int *)(param_5 + 1) = iVar6;
      if (*(int *)((longlong)param_5 + 0xc) < iVar6) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<400,8>_>,FDefaultAllocator>::
        ResizeGrow(param_5);
      }
      lVar3 = *param_5;
      lVar13 = (longlong)(int)lVar8 * 400;
      lVar8 = lVar3 + 0x100 + lVar13;
      *(undefined8 *)(lVar13 + 0x20 + lVar3) = 0;
      *(undefined8 *)(lVar13 + 0xe8 + lVar3) = 0;
      *(undefined8 *)(lVar13 + 0xf0 + lVar3) = 0;
      *(undefined4 *)(lVar8 + 100) = 0xffffffff;
      *(undefined4 *)(lVar8 + 0x68) = 0;
      *(undefined4 *)(lVar8 + 0x6c) = 0xffffffff;
      *(undefined4 *)(lVar8 + 0x70) = 0;
      *(undefined4 *)(lVar8 + 0x74) = 0xffffffff;
      *(undefined4 *)(lVar8 + 0x78) = 0;
      *(undefined8 *)(lVar8 + 0x80) = 0;
      *(undefined8 *)(lVar8 + 0x88) = 0;
      *(undefined4 *)(lVar8 + 0xc) = 0x3f800000;
      _guard_xfg_dispatch_icall_nop((void *)(lVar3 + 8 + lVar13),0,0xf0);
      _guard_xfg_dispatch_icall_nop((void *)(lVar3 + 0xfc + lVar13),0,0x94);
      *(undefined8 *)(lVar13 + lVar3) = uVar9;
      *(undefined4 *)(lVar13 + 0xf8 + lVar3) = 0x7f7fffff;
      FUN_140729f20(lVar8,local_a8);
      pbVar1 = (byte *)(lVar13 + 8 + lVar3);
      *pbVar1 = *pbVar1 | 1;
      return;
    }
  }
  if (param_3 == 0) {
    return;
  }
  uVar9 = FUN_142d29780(param_3);
  uVar10 = FWeakObjectPtr::Get(param_2 + 0xd4);
  lVar8 = FUN_142d46e70(uVar9,uVar10,*(undefined8 *)(param_2 + 0xe0));
  if ((lVar8 != 0) && ((*(byte *)(lVar8 + 0x48) & 0x10) == 0)) {
    return;
  }
  lVar8 = param_5[1];
  iVar6 = (int)lVar8 + 1;
  *(int *)(param_5 + 1) = iVar6;
  if (*(int *)((longlong)param_5 + 0xc) < iVar6) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<400,8>_>,FDefaultAllocator>::ResizeGrow
              (param_5);
  }
  lVar3 = *param_5;
  lVar13 = (longlong)(int)lVar8 * 400;
  lVar8 = lVar3 + 0x100 + lVar13;
  *(undefined8 *)(lVar13 + 0x20 + lVar3) = 0;
  *(undefined8 *)(lVar13 + 0xe8 + lVar3) = 0;
  *(undefined8 *)(lVar13 + 0xf0 + lVar3) = 0;
  *(undefined4 *)(lVar8 + 100) = 0xffffffff;
  *(undefined4 *)(lVar8 + 0x68) = 0;
  *(undefined4 *)(lVar8 + 0x6c) = 0xffffffff;
  *(undefined4 *)(lVar8 + 0x70) = 0;
  *(undefined4 *)(lVar8 + 0x74) = 0xffffffff;
  *(undefined4 *)(lVar8 + 0x78) = 0;
  *(undefined8 *)(lVar8 + 0x80) = 0;
  *(undefined8 *)(lVar8 + 0x88) = 0;
  *(undefined4 *)(lVar8 + 0xc) = 0x3f800000;
  _guard_xfg_dispatch_icall_nop((void *)(lVar3 + 8 + lVar13),0,0x188);
  *(undefined8 *)(lVar13 + lVar3) = uVar9;
  FUN_140729f20(lVar8,param_2 + 0x60);
  lVar8 = FWeakObjectPtr::Get(lVar13 + lVar3 + 0x16c);
  if (lVar8 != 0) {
    return;
  }
  FWeakObjectPtr::operator=(lVar13 + lVar3 + 0x16c,param_3);
  if (*(char *)(param_2 + 0x13c) == '\0') {
    lVar8 = *(longlong *)(param_3 + 0x168);
    if (lVar8 == 0) {
      local_c8 = _DAT_1468b5d90;
      local_c0 = DAT_1468b5d98;
    }
    else {
      local_c0 = *(undefined4 *)(lVar8 + 0x228);
      local_c8 = *(undefined8 *)(lVar8 + 0x220);
    }
    puVar12 = &local_bc;
    local_bc = local_c8;
    local_b4 = local_c0;
  }
  else {
    puVar12 = &local_c8;
    local_c8 = *(undefined8 *)(param_2 + 0x130);
    local_c0 = *(undefined4 *)(param_2 + 0x138);
  }
  uVar9 = *puVar12;
  uVar2 = *(undefined4 *)(puVar12 + 1);
  *(undefined8 *)(lVar13 + 0x114 + lVar3) = uVar9;
  *(undefined8 *)(lVar13 + 0x120 + lVar3) = uVar9;
  *(undefined4 *)(lVar13 + 0x11c + lVar3) = uVar2;
  *(undefined4 *)(lVar13 + 0x128 + lVar3) = uVar2;
  lVar8 = *(longlong *)(param_3 + 0x168);
  if (lVar8 != 0) {
    lVar11 = FUN_1429f11d0();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
        != lVar11 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_142d1464f;
  }
  lVar8 = 0;
LAB_142d1464f:
  FWeakObjectPtr::operator=(lVar3 + 0x174 + lVar13,lVar8);
  return;
}



// FUNCTION 142d146a0 FUN_142d146a0 body=93 status=ok
// SIG undefined FUN_142d146a0(void)

int * FUN_142d146a0(undefined8 param_1,int param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  
  if (((param_2 != -1) && (plVar1 = (longlong *)FUN_142d5ecc0(param_3), plVar1 != (longlong *)0x0))
     && (lVar2 = (**(code **)(*plVar1 + 0x2b0))(plVar1), lVar2 != 0)) {
    piVar3 = *(int **)(lVar2 + 0x30);
    piVar4 = piVar3 + (longlong)*(int *)(lVar2 + 0x38) * 0x9c;
    for (; piVar3 != piVar4; piVar3 = piVar3 + 0x9c) {
      if (*piVar3 == param_2) {
        return piVar3;
      }
    }
  }
  return (int *)0x0;
}



// FUNCTION 142d14700 FUN_142d14700 body=143 status=ok
// SIG undefined FUN_142d14700(void)

void FUN_142d14700(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (((((*(byte *)(param_1 + 0x7e8) & 1) != 0) && (*(longlong *)(param_1 + 0x818) == 0)) &&
      (*(longlong *)(param_1 + 0x118) != 0)) &&
     ((plVar3 = (longlong *)FUN_1422336c0(), plVar3 != (longlong *)0x0 ||
      (plVar3 = (longlong *)FUN_14222e2a0(*(undefined8 *)(param_1 + 0x118)),
      plVar3 != (longlong *)0x0)))) {
    uVar1 = UScrollBox::GetPrivateStaticClass();
    lVar4 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar1);
    if ((lVar4 != 0) && ((iVar2 = FUN_14233f450(param_1), iVar2 == 3 && (lVar4 != param_1)))) {
      *(longlong *)(param_1 + 0x818) = lVar4;
    }
  }
  return;
}



// FUNCTION 142d14790 FUN_142d14790 body=129 status=ok
// SIG undefined FUN_142d14790(void)

void FUN_142d14790(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x2c8);
    if (puVar1 != (undefined8 *)(param_2 + 0x2c8)) {
      _Src = *(void **)(param_2 + 0x2c8);
      iVar2 = *(int *)(param_2 + 0x2d0);
      *(int *)(param_1 + 0x2d0) = iVar2;
      if ((iVar2 == 0) && (*(int *)(param_1 + 0x2d4) == 0)) {
        *(undefined4 *)(param_1 + 0x2d4) = 0;
      }
      else {
        TArray<FBatchedLine,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
        _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0x34);
      }
    }
    FUN_142d2baa0(param_1);
  }
  return;
}



// FUNCTION 142d14820 FUN_142d14820 body=516 status=ok
// SIG undefined FUN_142d14820(void)

void FUN_142d14820(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Src;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong local_38;
  int local_30;
  int local_2c;
  
  if (param_2 != param_1) {
    iVar7 = 0;
    lVar9 = 0;
    iVar10 = 0;
    local_38 = 0;
    local_2c = 0;
    if ((param_2 != 0) &&
       (((*(byte *)(param_1 + 0xb8) & 8) == 0 || (iVar4 = FUN_14233f450(), iVar4 == 3)))) {
      lVar6 = *(longlong *)(param_1 + 0x2a0);
      lVar2 = lVar6 + (longlong)*(int *)(param_1 + 0x2a8) * 0x28;
      for (; lVar6 != lVar2; lVar6 = lVar6 + 0x28) {
        if (*(longlong *)(lVar6 + 0x10) != 0) {
          lVar8 = *(longlong *)(param_2 + 0x2a0);
          lVar3 = lVar8 + (longlong)*(int *)(param_2 + 0x2a8) * 0x28;
          for (; lVar8 != lVar3; lVar8 = lVar8 + 0x28) {
            if (*(longlong *)(lVar8 + 0x10) == *(longlong *)(lVar6 + 0x10)) goto LAB_142d14928;
          }
          FUN_142d26ae0(param_1);
          lVar3 = *(longlong *)(lVar6 + 0x10);
          local_30 = iVar7 + 1;
          if (iVar10 < local_30) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_38,iVar7);
            lVar9 = local_38;
            iVar10 = local_2c;
          }
          *(undefined8 *)(lVar9 + (longlong)iVar7 * 8) = *(undefined8 *)(lVar3 + 0xf0);
          iVar7 = local_30;
        }
LAB_142d14928:
      }
      lVar6 = *(longlong *)(param_2 + 0x2a0);
      lVar2 = lVar6 + (longlong)*(int *)(param_2 + 0x2a8) * 0x28;
      for (; lVar6 != lVar2; lVar6 = lVar6 + 0x28) {
        lVar3 = *(longlong *)(lVar6 + 0x10);
        if (lVar3 != 0) {
          lVar5 = *(longlong *)(param_1 + 0x2a0);
          lVar8 = lVar5 + (longlong)*(int *)(param_1 + 0x2a8) * 0x28;
          for (; lVar5 != lVar8; lVar5 = lVar5 + 0x28) {
            if (*(longlong *)(lVar5 + 0x10) == lVar3) goto LAB_142d1499d;
          }
          FUN_142d271f0(param_1,lVar3,0);
        }
LAB_142d1499d:
      }
      puVar1 = (undefined8 *)(param_1 + 0x2c8);
      if (puVar1 != (undefined8 *)(param_2 + 0x2c8)) {
        iVar10 = *(int *)(param_2 + 0x2d0);
        _Src = *(void **)(param_2 + 0x2c8);
        *(int *)(param_1 + 0x2d0) = iVar10;
        if ((iVar10 == 0) && (*(int *)(param_1 + 0x2d4) == 0)) {
          *(undefined4 *)(param_1 + 0x2d4) = 0;
        }
        else {
          TArray<FBatchedLine,FDefaultAllocator>::ResizeForCopy(puVar1,iVar10);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar10 * 0x34);
        }
      }
      FUN_142d2baa0(param_1);
      if (lVar9 != 0) {
        FMemory::Free(lVar9);
      }
    }
  }
  return;
}



// FUNCTION 142d14a30 FUN_142d14a30 body=153 status=ok
// SIG undefined FUN_142d14a30(void)

void FUN_142d14a30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((*(longlong *)(param_1 + 0x120) != 0) || (lVar1 = FUN_1423407b0(), lVar1 != 0)) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_1);
    }
    lVar1 = UWorld::GetGameState<APVPGameState>(lVar1);
    if (((lVar1 != 0) && (lVar2 = FUN_142d818e0(lVar1), lVar2 != 0)) && (param_2 != 0)) {
      uVar3 = FUN_142d818e0(lVar1);
      FUN_142d10700(uVar3,param_1,param_2,0);
      FUN_142d134a0(param_1 + 0x1f0,param_2);
    }
  }
  return;
}



// FUNCTION 142d14ad0 FUN_142d14ad0 body=203 status=ok
// SIG undefined FUN_142d14ad0(void)

void FUN_142d14ad0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  
  if (*(int *)(param_1 + 0x670) == 0) {
    lVar3 = *(longlong *)(param_1 + 0x678);
    lVar4 = (longlong)*(int *)(param_1 + 0x680) * 0x78 + lVar3;
    if (lVar3 != lVar4) {
      lVar5 = lVar3 + 0x60;
      do {
        cVar1 = FUN_142d52a00(lVar5);
        if (cVar1 != '\0') {
          uVar2 = FUN_142d52a20(lVar5);
          uVar2 = FArchive::operator<<(uVar2);
          FUN_142d6f560(uVar2,0,1);
        }
        lVar3 = lVar3 + 0x78;
        lVar5 = lVar5 + 0x78;
      } while (lVar3 != lVar4);
    }
  }
  else if (*(int *)(param_1 + 0x670) == 1) {
    fVar6 = *(float *)(param_1 + 0x6cc);
    if (0.0 <= fVar6) {
      fVar6 = 0.0;
    }
    *(float *)(param_1 + 0x6d4) = fVar6;
    if (*(longlong **)(param_1 + 0x6d8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142d14b15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x260))();
      return;
    }
  }
  return;
}



// FUNCTION 142d14ba0 FUN_142d14ba0 body=857 status=ok
// SIG undefined FUN_142d14ba0(void)

void FUN_142d14ba0(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  char local_res10 [8];
  char local_res18 [8];
  char local_res20 [8];
  float local_b8 [2];
  ulonglong local_b0;
  uint local_a8;
  uint uStack_a4;
  longlong *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  float *local_78;
  longlong *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  float *local_50;
  
  *(undefined1 *)((longlong)param_1 + 0x33c) = 0;
  if ((char)param_1[0x34] == '\x02') {
    return;
  }
  local_res20[0] = '\0';
  if ((param_1[0x5a] == 0) || ((*(byte *)(param_1[0x5a] + 0x48) & 2) == 0)) goto LAB_142d14c2b;
  plVar1 = (longlong *)param_1[10];
  if (plVar1 != (longlong *)0x0) {
    lVar3 = plVar1[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar3 = plVar1[0x1f];
      if (lVar3 == 0) goto LAB_142d14c27;
    }
    if (*(char *)(lVar3 + 0x80) == '\0') goto LAB_142d14c2b;
  }
LAB_142d14c27:
  local_res20[0] = '\x01';
LAB_142d14c2b:
  lVar3 = param_1[0x54];
  local_90 = local_res20;
  local_88 = local_res10;
  local_80 = local_res18;
  local_78 = local_b8;
  local_68 = local_res20;
  local_60 = local_res10;
  local_58 = local_res18;
  local_50 = local_b8;
  local_b8[0] = 0.0;
  local_res18[0] = '\0';
  local_res10[0] = '\0';
  local_98 = param_1;
  local_70 = param_1;
  if ((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x1a0))) {
    uVar4 = FUN_142d19790(param_1);
    FUN_142d0cc80(&local_98,lVar3 + 0x198,uVar4,0);
  }
  lVar3 = param_1[0x52];
  if (((lVar3 != 0) && (lVar3 != param_1[0x54])) && (0 < *(int *)(lVar3 + 0x1a0))) {
    FUN_142d0cc80(&local_98,lVar3 + 0x198,param_1[0x4d],1);
  }
  lVar3 = param_1[0x56];
  if ((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x1a0))) {
    FUN_142d0cc80(&local_98,lVar3 + 0x198,*(undefined8 *)(lVar3 + 0x118),0);
  }
  lVar3 = param_1[8];
  if ((lVar3 != 0) && (0 < *(int *)(lVar3 + 400))) {
    FUN_142d0c710(&local_70,lVar3 + 0x188,*(undefined8 *)(lVar3 + 0x118));
  }
  lVar7 = param_1[0x36];
  uVar9 = 0;
  local_b0 = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  lVar3 = lVar7 + (longlong)(int)param_1[0x37] * 8;
  uVar10 = uVar9;
  uVar11 = uVar9;
  if (lVar7 != lVar3) {
    do {
      lVar5 = FWeakObjectPtr::Get(lVar7);
      if (lVar5 != 0) {
        lVar6 = FUN_142e02530();
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
          iVar8 = (int)uVar9;
          local_a8 = iVar8 + 1;
          if ((int)uVar11 < (int)local_a8) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b0,uVar9);
            uVar11 = (ulonglong)uStack_a4;
            uVar10 = local_b0;
          }
          uVar9 = (ulonglong)local_a8;
          *(longlong *)(uVar10 + (longlong)iVar8 * 8) = lVar5;
        }
      }
      lVar7 = lVar7 + 8;
    } while (lVar7 != lVar3);
    if (0 < (int)uVar9) {
      uVar4 = FUN_142d19790(param_1);
      FUN_142d0c710(&local_70,&local_b0,uVar4);
      uVar10 = local_b0;
    }
  }
  (**(code **)(*param_1 + 0x68))(param_1,local_res20[0],local_res10,local_res18,local_b8);
  if (*(char *)((longlong)param_1 + 0x1a1) != '\0') {
    local_res10[0] = '\x01';
  }
  local_b8[0] = local_b8[0] + *(float *)((longlong)param_1 + 0x1a4);
  if ((char)param_1[0x34] == '\x01') {
    local_res18[0] = '\x01';
  }
  if ((local_res20[0] != '\0') || (local_res18[0] != '\0')) {
    fVar12 = 1.0;
    if (((local_res20[0] != '\0') || (local_res10[0] != '\0')) && (param_1[0x54] != 0)) {
      fVar12 = *(float *)(param_1[0x54] + 0x2b8);
    }
    *(undefined1 *)((longlong)param_1 + 0x33c) = 1;
    *(float *)(param_1 + 0x68) = local_b8[0] + fVar12;
  }
  if (uVar10 != 0) {
    FMemory::Free(uVar10);
  }
  return;
}



// FUNCTION 142d14f00 FUN_142d14f00 body=758 status=ok
// SIG undefined FUN_142d14f00(void)

void FUN_142d14f00(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  float fVar7;
  undefined8 local_28;
  undefined8 local_20;
  
  plVar6 = *(longlong **)(param_1 + 0x58);
  if (plVar6 == (longlong *)0x0) {
LAB_142d14f4b:
    if (*(char *)(param_1 + 0x134) == '\x01') {
      cVar2 = '\x02';
    }
    else {
      if ((((*(int *)(param_1 + 0x328) == 0) && (*(longlong *)(param_1 + 0x2b0) != 0)) &&
          (*(int *)(*(longlong *)(param_1 + 0x2b0) + 0x670) == 0)) &&
         (plVar6 = *(longlong **)(param_1 + 0x50), plVar6 != (longlong *)0x0)) {
        lVar4 = plVar6[0x1f];
        if (lVar4 == 0) {
          (**(code **)(*plVar6 + 0x368))(plVar6);
          lVar4 = plVar6[0x1f];
          if (lVar4 == 0) goto LAB_142d15006;
        }
        plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x2b0) + 0x678);
        plVar5 = plVar6 + (longlong)*(int *)(*(longlong *)(param_1 + 0x2b0) + 0x680) * 0xf;
        for (; plVar6 != plVar5; plVar6 = plVar6 + 0xf) {
          if ((*plVar6 != 0) &&
             (fVar7 = (float)FUN_142d3bbf0(lVar4,*(undefined8 *)(param_1 + 0x2a8)), 0.0 < fVar7)) {
            cVar2 = '\x03';
            goto LAB_142d15017;
          }
        }
      }
LAB_142d15006:
      cVar2 = '\0';
    }
  }
  else {
    lVar4 = plVar6[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar6 + 0x368))(plVar6);
      lVar4 = plVar6[0x1f];
      if (lVar4 == 0) goto LAB_142d14f4b;
    }
    if (*(char *)(lVar4 + 0xb0) == '\0') goto LAB_142d14f4b;
    cVar2 = '\x01';
  }
LAB_142d15017:
  *(char *)(param_1 + 0x333) = cVar2;
  if (cVar2 != '\0') {
    *(undefined1 *)(param_1 + 0x332) = 2;
    if (*(char *)(param_1 + 0x135) == '\0') {
      return;
    }
    if (*(char *)(param_1 + 0x13c) == '\0') {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x328);
    if (iVar1 == 0) {
      uVar3 = *(uint *)(param_1 + 0x138) >> 2;
    }
    else if (iVar1 == 1) {
      uVar3 = *(uint *)(param_1 + 0x138) >> 1;
    }
    else {
      if (iVar1 != 2) {
        return;
      }
      uVar3 = (uint)*(byte *)(param_1 + 0x138);
    }
    if ((uVar3 & 1) != 0) {
      return;
    }
    goto LAB_142d15087;
  }
  lVar4 = *(longlong *)(param_1 + 0x2b0);
  if (lVar4 != 0) {
    if ((*(uint *)(lVar4 + 0x840) >> 3 & 1) == 0) {
      cVar2 = FUN_142d1f310();
      if (cVar2 != '\0') goto LAB_142d15087;
    }
    else if ((*(byte *)(lVar4 + 0x7e8) & 4) == 0) {
      *(undefined1 *)(param_1 + 0x332) = 1;
      return;
    }
  }
  local_20 = *(undefined8 *)(param_1 + 0x28);
  local_28 = *(undefined8 *)(param_1 + 0x38);
  cVar2 = FUN_142d3e1a0(&local_28,*(undefined8 *)(param_1 + 0x2b0));
  lVar4 = *(longlong *)(param_1 + 0x290);
  if ((lVar4 == 0) || (*(longlong *)(param_1 + 0x2b0) == 0)) {
LAB_142d15135:
    if (cVar2 == '\0') goto LAB_142d1513d;
  }
  else {
    if (cVar2 != '\0') {
      if (*(char *)(param_1 + 0x141) == '\0') {
        if (*(char *)(lVar4 + 0x248) == '\0') goto LAB_142d15087;
      }
      else if (*(char *)(param_1 + 0x140) == '\0') {
        *(undefined1 *)(param_1 + 0x332) = 1;
        return;
      }
      goto LAB_142d15135;
    }
LAB_142d1513d:
    if (*(char *)(param_1 + 0x13c) == '\0') {
      if (lVar4 != 0) {
        iVar1 = *(int *)(param_1 + 0x328);
        if (iVar1 == 0) {
          uVar3 = *(uint *)(lVar4 + 0x244) >> 2;
        }
        else if (iVar1 == 1) {
          uVar3 = *(uint *)(lVar4 + 0x244) >> 1;
        }
        else {
          if (iVar1 != 2) goto LAB_142d151c4;
          uVar3 = (uint)*(byte *)(lVar4 + 0x244);
        }
        if ((uVar3 & 1) == 0) goto LAB_142d15087;
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0x328);
      if (iVar1 == 0) {
        uVar3 = *(uint *)(param_1 + 0x138) >> 2;
      }
      else if (iVar1 == 1) {
        uVar3 = *(uint *)(param_1 + 0x138) >> 1;
      }
      else {
        if (iVar1 != 2) goto LAB_142d151c4;
        uVar3 = (uint)*(byte *)(param_1 + 0x138);
      }
      if ((uVar3 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x332) = 1;
        return;
      }
    }
  }
LAB_142d151c4:
  if (((*(longlong *)(param_1 + 0x2b0) == 0) ||
      (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x118), lVar4 == 0)) ||
     ((*(byte *)(lVar4 + 0x91) & 0x40) != 0)) {
    *(undefined1 *)(param_1 + 0x332) = 0;
    return;
  }
LAB_142d15087:
  *(undefined1 *)(param_1 + 0x332) = 1;
  return;
}



// FUNCTION 142d15200 FUN_142d15200 body=304 status=ok
// SIG undefined FUN_142d15200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d15200(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar5;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [192];
  ulonglong local_28;
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  undefined1 *puVar4;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  *(byte *)(param_1 + 0x7e8) = *(byte *)(param_1 + 0x7e8) & 0xfb;
  puVar5 = (undefined1 *)0x0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_140725150(*(longlong *)(param_1 + 0x118),local_e8,0);
  }
  puVar4 = local_e8;
  if (local_28 != 0) {
    puVar4 = puVar5;
  }
  puVar3 = (undefined8 *)((ulonglong)puVar4 | local_28);
  puVar4 = (undefined1 *)((longlong)local_20 & 0x1fffffffffffffff);
  if (puVar3 + local_20 < puVar3) {
    puVar4 = puVar5;
  }
  if (puVar4 != (undefined1 *)0x0) {
    do {
      plVar1 = (longlong *)*puVar3;
      iVar2 = (**(code **)(*plVar1 + 0x4e8))(plVar1);
      if (iVar2 != 0) {
        (**(code **)(*plVar1 + 0x830))(plVar1,0xf);
        (**(code **)(*plVar1 + 0x830))(plVar1,0x10);
      }
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar4);
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142d15330 FUN_142d15330 body=1916 status=ok
// SIG undefined FUN_142d15330(void)

bool FUN_142d15330(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar11;
  undefined8 uVar12;
  float *pfVar13;
  byte bVar14;
  undefined1 *puVar15;
  longlong *plVar16;
  undefined8 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  undefined8 local_108;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined1 local_d0 [12];
  undefined1 local_c4 [12];
  undefined1 local_b8 [16];
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  longlong lVar10;
  
  if ((*(char *)(param_2 + 0x130) == '\0') && ((byte)(*(char *)(param_1 + 0x335) - 1U) < 2)) {
LAB_142d15a77:
    bVar3 = false;
  }
  else {
    if (0 < *(int *)(param_2 + 0x70)) {
      plVar16 = *(longlong **)(param_2 + 0x68);
      bVar3 = false;
      lVar10 = *(longlong *)(param_1 + 0x50);
      plVar1 = plVar16 + *(int *)(param_2 + 0x70);
      for (; plVar16 != plVar1; plVar16 = plVar16 + 1) {
        if (*(char *)(param_2 + 100) == '\0') {
          if (lVar10 != 0) {
            lVar6 = FUN_142e0d0b0();
            lVar9 = lVar10;
            do {
              lVar8 = lVar10;
              if (lVar9 == lVar6) goto LAB_142d15490;
              lVar9 = *(longlong *)(lVar9 + 0x30);
            } while (lVar9 != 0);
          }
          lVar8 = 0;
LAB_142d15490:
          if (*plVar16 != 0) {
            lVar7 = FUN_142e0d0b0();
            lVar9 = *plVar16;
            for (lVar6 = lVar9; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
              if (lVar6 == lVar7) goto LAB_142d154b6;
            }
          }
          lVar9 = 0;
LAB_142d154b6:
          if (lVar8 == lVar9) {
LAB_142d154cf:
            bVar3 = true;
            break;
          }
        }
        else if (lVar10 != 0) {
          lVar6 = FUN_142e0d0b0();
          lVar9 = lVar10;
          do {
            if (lVar9 == lVar6) {
              if (*plVar16 != 0) {
                lVar6 = FUN_142e0d0b0();
                lVar9 = *plVar16;
                goto joined_r0x000142d153fb;
              }
              break;
            }
            lVar9 = *(longlong *)(lVar9 + 0x30);
          } while (lVar9 != 0);
        }
LAB_142d154bb:
      }
      if (((*(int *)(param_2 + 0x60) == 0) && (!bVar3)) ||
         ((*(int *)(param_2 + 0x60) == 1 && (bVar3)))) goto LAB_142d15a77;
    }
    if ((*(int *)(param_2 + 0x4c) == 0) && (0 < *(int *)(param_2 + 0x58))) {
      cVar2 = FUN_142d09040(param_2 + 0x50);
      if (cVar2 == '\0') {
        return false;
      }
    }
    else {
      plVar16 = *(longlong **)(param_2 + 0x50);
      lVar10 = *(longlong *)(param_1 + 0x58);
      plVar1 = plVar16 + *(int *)(param_2 + 0x58);
      for (; plVar16 != plVar1; plVar16 = plVar16 + 1) {
        if (*plVar16 != 0) {
          lVar8 = FUN_142e49950();
          lVar9 = *plVar16;
          for (lVar6 = lVar9; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
            if (lVar6 == lVar8) goto LAB_142d15560;
          }
        }
        lVar9 = 0;
LAB_142d15560:
        if (lVar10 != 0) {
          lVar8 = FUN_142e49950();
          lVar6 = lVar10;
          do {
            lVar7 = lVar10;
            if (lVar6 == lVar8) goto LAB_142d15580;
            lVar6 = *(longlong *)(lVar6 + 0x30);
          } while (lVar6 != 0);
        }
        lVar7 = 0;
LAB_142d15580:
        if (lVar9 == lVar7) goto LAB_142d15a77;
      }
    }
    if (*(char *)(param_2 + 0x78) != '\0') {
      local_108 = *(undefined8 *)(param_1 + 0x11c);
      fVar22 = (float)((ulonglong)local_108 >> 0x20);
      fVar23 = *(float *)(param_1 + 0x124);
      fVar21 = (float)local_108;
      if ((((float)local_108 == 0.0) && (fVar22 == 0.0)) && (fVar23 == 0.0)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      local_100 = fVar23;
      if ((!bVar3) && (*(longlong *)(param_1 + 0x2b0) != 0)) {
        fVar18 = (float)FUN_142c98860(param_2 + 0x80,
                                      *(undefined8 *)(*(longlong *)(param_1 + 0x2b0) + 0x118));
        if (0.0 <= fVar18) {
          if (360.0 <= fVar18) {
            fVar18 = 360.0;
          }
        }
        else {
          fVar18 = 0.0;
        }
        if (*(longlong *)(param_1 + 0x2b0) == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = *(undefined8 *)(*(longlong *)(param_1 + 0x2b0) + 0x118);
        }
        uVar19 = FUN_142c98860(param_2 + 0xb8,uVar12);
        local_108 = 0x3f800000;
        local_100 = 0.0;
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x2b0) + 0x118);
        if (plVar1 != (longlong *)0x0) {
          lVar9 = FUN_1429d7ab0();
          iVar5 = *(int *)(lVar9 + 0x90);
          lVar10 = (longlong)iVar5;
          if ((*(int *)(plVar1[2] + 0x90) < iVar5) ||
             (lVar10 = *(longlong *)(plVar1[2] + 0x88),
             *(longlong *)(lVar10 + (longlong)iVar5 * 8) != lVar9 + 0x88)) {
            uVar4 = (uint)lVar10 & 0xffffff00;
          }
          else {
            uVar4 = (uint)CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
          }
          if ((char)uVar4 == '\0') {
            lVar10 = plVar1[0x2d];
            if (lVar10 == 0) {
              uVar20 = (undefined4)DAT_1468b5da0;
              uVar24 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
              local_e0 = DAT_1468b5da8;
            }
            else {
              local_a8 = *(float *)(lVar10 + 0x210);
              fStack_a4 = *(float *)(lVar10 + 0x214);
              fStack_a0 = *(float *)(lVar10 + 0x218);
              fStack_9c = *(float *)(lVar10 + 0x21c);
              auVar26._4_4_ = -(uint)(*(float *)(lVar10 + 0x254) != fStack_a4);
              auVar26._0_4_ = -(uint)(*(float *)(lVar10 + 0x250) != local_a8);
              auVar26._8_4_ = -(uint)(*(float *)(lVar10 + 600) != fStack_a0);
              auVar26._12_4_ = -(uint)(*(float *)(lVar10 + 0x25c) != fStack_9c);
              iVar5 = movmskps(uVar4,auVar26);
              if (iVar5 != 0) {
                *(float *)(lVar10 + 0x250) = local_a8;
                *(float *)(lVar10 + 0x254) = fStack_a4;
                *(float *)(lVar10 + 600) = fStack_a0;
                *(float *)(lVar10 + 0x25c) = fStack_9c;
                puVar11 = (undefined8 *)FQuat::Rotator(&local_a8,local_c4);
                *(undefined8 *)(lVar10 + 0x260) = *puVar11;
                *(undefined4 *)(lVar10 + 0x268) = *(undefined4 *)(puVar11 + 1);
              }
              uVar20 = (undefined4)*(undefined8 *)(lVar10 + 0x260);
              uVar24 = (undefined4)((ulonglong)*(undefined8 *)(lVar10 + 0x260) >> 0x20);
              local_e0 = *(undefined4 *)(lVar10 + 0x268);
            }
            puVar15 = local_b8;
            local_e8 = CONCAT44(uVar24,uVar20);
            pfVar13 = (float *)&local_dc;
            local_dc = local_e8;
            local_d4 = local_e0;
          }
          else {
            (**(code **)(*plVar1 + 0x788))(plVar1,&local_f8);
            puVar15 = local_d0;
            local_f8 = 0.0;
            pfVar13 = &local_f8;
          }
          puVar11 = (undefined8 *)FRotator::Vector(pfVar13,puVar15);
          local_108 = *puVar11;
          local_100 = *(float *)(puVar11 + 1);
        }
        FVector::RotateAngleAxis(&local_108,&local_f8,uVar19,&DAT_1464aa798);
        fVar25 = fVar22 * fVar22 + fVar21 * fVar21;
        if (fVar25 == 1.0) {
          fVar27 = fVar22;
          fVar28 = fVar21;
          if (fVar23 != 0.0) {
LAB_142d1586d:
            fVar27 = fVar22;
            fVar28 = fVar21;
            fVar23 = 0.0;
          }
        }
        else {
          fVar27 = DAT_1468b5d94;
          fVar28 = DAT_1468b5d90;
          fVar23 = DAT_1468b5d98;
          if (1e-08 <= fVar25) {
            auVar26 = rsqrtss(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25));
            fVar23 = auVar26._0_4_;
            fVar23 = fVar23 + fVar23 * (0.5 - fVar25 * 0.5 * fVar23 * fVar23);
            fVar23 = fVar23 + fVar23 * (0.5 - fVar25 * 0.5 * fVar23 * fVar23);
            fVar21 = fVar21 * fVar23;
            fVar22 = fVar22 * fVar23;
            goto LAB_142d1586d;
          }
        }
        fVar21 = local_f8 * -fVar28;
        fVar22 = _guard_xfg_dispatch_icall_nop(fVar18 * 0.008726646);
        if (local_f4 * -fVar27 + fVar21 + local_f0 * -fVar23 < fVar22) goto LAB_142d15a77;
      }
    }
    if (*(char *)(param_2 + 0xf0) != '\0') {
      if (*(longlong *)(param_1 + 0x2d0) == 0) {
        bVar14 = 0;
      }
      else {
        bVar14 = (byte)(*(uint *)(*(longlong *)(param_1 + 0x2d0) + 0x48) >> 1) & 1;
      }
      cVar2 = *(char *)(param_2 + 0xf1);
      if (cVar2 == '\0') {
        if (bVar14 == 0) goto LAB_142d15a77;
      }
      else if (cVar2 == '\x01') {
        if (bVar14 != 0) {
          return false;
        }
      }
      else if (cVar2 == '\x02') {
        if (*(char *)(param_1 + 0x33c) == '\0') {
          return false;
        }
      }
      else if ((cVar2 == '\x03') && (*(char *)(param_1 + 0x33c) != '\0')) {
        return false;
      }
    }
    if (*(char *)(param_2 + 0xf2) != '\0') {
      if (*(char *)(param_2 + 0xf3) == '\0') {
        if ((byte)(*(char *)(param_1 + 0x2f0) - 1U) < 2) goto LAB_142d15a77;
      }
      else if ((*(char *)(param_2 + 0xf3) == '\x01') &&
              (bVar3 = (byte)(*(char *)(param_1 + 0x2f0) - 1U) < 2, !bVar3)) {
        return bVar3;
      }
    }
    if (*(char *)(param_2 + 0xf4) != '\0') {
      uVar12 = FUN_142d19790(param_1);
      fVar23 = (float)FUN_142c98860(param_2 + 0xf8,uVar12);
      iVar5 = rand();
      if (fVar23 <= (float)iVar5 * 3.051851e-05) goto LAB_142d15a77;
    }
    lVar10 = *(longlong *)(param_2 + 0x30);
    if (lVar10 != 0) {
      uVar12 = param_3;
      if (*(char *)(param_2 + 0x38) == '\0') {
        uVar12 = FUN_142d19790(param_1);
        lVar10 = *(longlong *)(param_2 + 0x30);
      }
      if (*(char *)(param_2 + 0x39) == '\0') {
        uVar17 = 0;
        if (*(longlong *)(param_1 + 0x2b0) != 0) {
          uVar17 = *(undefined8 *)(*(longlong *)(param_1 + 0x2b0) + 0x118);
        }
      }
      else {
        uVar17 = *(undefined8 *)(param_1 + 0x38);
      }
      cVar2 = FUN_142c48f60(lVar10,uVar12,uVar17);
      if (cVar2 == '\0') goto LAB_142d15a77;
    }
    lVar10 = *(longlong *)(param_2 + 0x40);
    if (lVar10 != 0) {
      if (*(char *)(param_2 + 0x48) == '\0') {
        if (*(longlong *)(param_1 + 0x2b0) == 0) {
          param_3 = 0;
        }
        else {
          param_3 = *(undefined8 *)(*(longlong *)(param_1 + 0x2b0) + 0x118);
        }
      }
      if (*(char *)(param_2 + 0x49) == '\0') {
        uVar12 = FUN_142d19790(param_1);
        lVar10 = *(longlong *)(param_2 + 0x40);
      }
      else {
        uVar12 = *(undefined8 *)(param_1 + 0x38);
      }
      cVar2 = FUN_142c48f60(lVar10,param_3,uVar12);
      if (cVar2 == '\0') goto LAB_142d15a77;
    }
    bVar3 = true;
  }
  return bVar3;
joined_r0x000142d153fb:
  if (lVar9 == 0) goto LAB_142d154bb;
  if (lVar9 == lVar6) {
    if (*plVar16 != 0) {
      lVar8 = FUN_142e0d0b0();
      lVar9 = *plVar16;
      lVar6 = lVar9;
      goto joined_r0x000142d1543c;
    }
    goto LAB_142d154bb;
  }
  lVar9 = *(longlong *)(lVar9 + 0x30);
  goto joined_r0x000142d153fb;
joined_r0x000142d1543c:
  if (lVar6 == 0) goto LAB_142d1543e;
  if (lVar6 == lVar8) goto LAB_142d15440;
  lVar6 = *(longlong *)(lVar6 + 0x30);
  goto joined_r0x000142d1543c;
LAB_142d1543e:
  lVar9 = 0;
LAB_142d15440:
  lVar8 = FUN_142e0d0b0();
  lVar6 = lVar10;
  do {
    lVar7 = lVar10;
    if (lVar6 == lVar8) goto joined_r0x000142d15460;
    lVar6 = *(longlong *)(lVar6 + 0x30);
  } while (lVar6 != 0);
  lVar7 = 0;
joined_r0x000142d15460:
  do {
    if (lVar7 == 0) goto LAB_142d154bb;
    if (lVar7 == lVar9) goto LAB_142d154cf;
    lVar7 = *(longlong *)(lVar7 + 0x30);
  } while( true );
}



// FUNCTION 142d15ac0 FUN_142d15ac0 body=123 status=ok
// SIG undefined FUN_142d15ac0(void)

void FUN_142d15ac0(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = *param_1 + 0x20;
    do {
      FUN_142d0c2a0(lVar1 + 0x2a8);
      FUN_1409c53c0(lVar1);
      lVar1 = lVar1 + 0x2e0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<Chaos::FJointSolverGaussSeidel,TSizedDefaultAllocator<32>_>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 142d15b40 FUN_142d15b40 body=638 status=ok
// SIG undefined FUN_142d15b40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d15b40(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if ((*(char *)(param_1 + 0x748) != '\0') && (*(char *)(param_1 + 0x834) == '\0')) {
    *(undefined1 *)(param_1 + 0x834) = 1;
    puVar3 = (undefined4 *)FUN_142d1bdc0();
    uStack_b0 = 0;
    uVar1 = *puVar3;
    local_b8 = &LAB_142d23ff0;
    lVar4 = *(longlong *)(param_1 + 0x120);
    if (lVar4 == 0) {
      lVar4 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar4 + 400) == 0) {
      uVar6 = *(undefined8 *)(lVar4 + 0x3f8);
    }
    else {
      uVar6 = *(undefined8 *)(*(longlong *)(lVar4 + 400) + 0x90);
    }
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar5 + 1,param_1);
      *(undefined4 *)(plVar5 + 2) = (undefined4)local_b8;
      *(undefined4 *)((longlong)plVar5 + 0x14) = local_b8._4_4_;
      *(undefined4 *)(plVar5 + 3) = uStack_b0;
      *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_ac;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar5[5] = lVar4;
      *plVar5 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_a8 = 0;
    local_a0 = 0;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x30))(plVar5,&local_a8);
    }
    FWeakObjectPtr::operator=(local_98,0);
    local_c0 = 0xbf800000;
    local_c8 = 0;
    local_90 = 0;
    local_58 = (longlong *)0x0;
    local_48 = 0;
    local_88 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar6,param_1 + 0x828,&local_a8,uVar1);
    if (local_48 != 0) {
      plVar7 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar7 = local_58;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      lVar4 = FMemory::Realloc(plVar5,0,0);
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
    }
    lVar4 = FUN_142d1bdc0(param_1);
    fVar9 = *(float *)(lVar4 + 8);
    fVar8 = (float)FUN_142d1b990(param_1);
    fVar8 = fVar8 * fVar9;
    if (fVar8 <= 1.0) {
      fVar8 = 1.0;
    }
    iVar2 = rand();
    *(float *)(param_1 + 0x830) = (float)iVar2 * 3.051851e-05 * (fVar8 - 1.0) + 1.0;
    fVar9 = (float)FUN_142d19870(param_1);
    if (fVar9 < *(float *)(param_1 + 0x830)) {
      if (fVar9 <= 1.0) {
        fVar9 = 1.0;
      }
      *(float *)(param_1 + 0x830) = fVar9;
    }
  }
  return;
}



// FUNCTION 142d15dc0 FUN_142d15dc0 body=31 status=ok
// SIG undefined FUN_142d15dc0(void)

void FUN_142d15dc0(longlong param_1)

{
  FUN_14233a670();
  FUN_142d5aad0(param_1 + 0x3d0);
  return;
}



// FUNCTION 142d15de0 FUN_142d15de0 body=897 status=ok
// SIG undefined FUN_142d15de0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d15de0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_148 [32];
  longlong *local_128;
  longlong local_120;
  undefined8 *local_118;
  longlong *local_110;
  longlong **local_108;
  undefined4 local_100;
  longlong *local_f8;
  int local_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined2 local_b3;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined4 local_a8;
  undefined2 local_a4;
  longlong local_80;
  undefined8 local_78;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if (*param_2 == 0) {
    return;
  }
  if (*(longlong *)(*param_2 + 0x98) == 0) {
    return;
  }
  lVar1 = FUN_142d146a0(param_1,(int)param_2[0x44]);
  if (*(char *)((longlong)param_2 + 0x2c1) == '\x01') {
    lVar3 = param_2[0x45];
    local_e8 = FUN_142d1d9a0;
    uStack_e0 = 0;
    local_f8 = (longlong *)0x0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_f0 = 3;
    local_f8 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_14471e7f0;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = (undefined4)local_e8;
      *(undefined4 *)((longlong)plVar2 + 0x14) = local_e8._4_4_;
      *(undefined4 *)(plVar2 + 3) = uStack_e0;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_dc;
      *(int *)(plVar2 + 4) = (int)lVar3;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar3;
      *plVar2 = (longlong)&PTR_FUN_14471e838;
    }
    lVar3 = *(longlong *)(*param_2 + 0x98);
    lVar4 = lVar1 + 0x238;
    if (lVar1 == 0) {
      lVar4 = 0;
    }
    local_c0 = 0;
    local_c8 = 0;
    local_128 = param_2 + 1;
    local_80 = 0;
    local_a8 = 0;
    local_78 = 0;
    local_60 = 0;
    local_58 = 0;
    local_b8 = 0x10000;
    local_b0 = 0;
    local_e8 = (code *)0x0;
    local_a4 = 0x101;
    local_ac = 0;
    local_b3 = 0;
    local_b4 = 1;
    FUN_142d17210(lVar3,&local_c8,lVar4,param_2 + 0xd);
    local_108 = &local_f8;
    local_100 = 0;
    local_128 = (longlong *)((longlong)param_2 + 0x25c);
    local_110 = (longlong *)&DAT_146aefe68;
    local_118 = &local_c8;
    local_120 = CONCAT44(local_120._4_4_,(uint)*(byte *)(lVar3 + 0x30));
    FUN_142330010(param_3,local_d8,2,(longlong)param_2 + 0x244);
    if (local_60 != 0) {
      FMemory::Free();
    }
    if (local_80 != 0) {
      FMemory::Free();
    }
    *(char *)((longlong)param_2 + 0x2c1) = (local_d8[0] == 0) + '\x02';
    if (local_f0 != 0) {
      if (local_f8 == (longlong *)0x0) goto LAB_142d1600a;
      (**(code **)(*local_f8 + 0x28))(local_f8,0);
      if (local_f8 != (longlong *)0x0) {
        local_f8 = (longlong *)FMemory::Realloc(local_f8,0,0);
      }
      local_f0 = 0;
    }
    if (local_f8 != (longlong *)0x0) {
      FMemory::Free(local_f8);
    }
  }
LAB_142d1600a:
  if (*(char *)((longlong)param_2 + 0x2c2) == '\x01') {
    lVar3 = param_2[0x45];
    local_e8 = FUN_142d1dd30;
    uStack_e0 = 0;
    local_f8 = (longlong *)0x0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    local_f0 = 3;
    local_f8 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_14471e7f0;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = (undefined4)local_e8;
      *(undefined4 *)((longlong)plVar2 + 0x14) = local_e8._4_4_;
      *(undefined4 *)(plVar2 + 3) = uStack_e0;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_dc;
      *(int *)(plVar2 + 4) = (int)lVar3;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar3;
      *plVar2 = (longlong)&PTR_FUN_14471e838;
    }
    local_110 = param_2 + 0xd;
    local_128 = param_2 + 1;
    local_120 = lVar1;
    local_118 = (undefined8 *)param_3;
    FUN_142d21f80(*(undefined8 *)(*param_2 + 0x98),local_d8,&local_f8,param_2 + 0x46);
    *(char *)((longlong)param_2 + 0x2c2) = (local_d8[0] == 0) + '\x02';
    if (local_f0 != 0) {
      if (local_f8 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_f8 + 0x28))(local_f8,0);
      if (local_f8 != (longlong *)0x0) {
        local_f8 = (longlong *)FMemory::Realloc(local_f8,0,0);
      }
      local_f0 = 0;
    }
    if (local_f8 != (longlong *)0x0) {
      FMemory::Free(local_f8);
    }
  }
  return;
}



// FUNCTION 142d16170 FUN_142d16170 body=643 status=ok
// SIG undefined FUN_142d16170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d16170(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte *pbVar1;
  float fVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined4 local_1e0;
  longlong local_1d8;
  byte local_1d0 [224];
  longlong local_f0;
  undefined4 local_e0;
  undefined1 local_dc [24];
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_6c [8];
  undefined1 local_64 [28];
  ulonglong local_48;
  
  if (param_2 == 0) {
    return;
  }
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  if (*(longlong *)(param_2 + 0x118) == 0) {
    return;
  }
  iVar6 = 0;
  fVar9 = -1.0;
  iVar8 = -1;
  if (0 < (int)param_3[1]) {
    lVar7 = 0;
    do {
      lVar5 = *param_3;
      lVar4 = *(longlong *)(lVar7 + lVar5);
      if ((lVar4 != 0) &&
         (((lVar4 == param_2 ||
           (((*(byte *)(lVar4 + 0x7e8) & 2) != 0 && (lVar4 = FUN_142d19dd0(), lVar4 == param_2))))
          && (fVar2 = *(float *)(lVar7 + 0xf8 + lVar5), fVar9 < fVar2)))) {
        fVar9 = fVar2;
        iVar8 = iVar6;
      }
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 400;
    } while (iVar6 < (int)param_3[1]);
  }
  if (iVar8 != -1) {
    pbVar1 = (byte *)((longlong)iVar8 * 400 + 8 + *param_3);
    *pbVar1 = *pbVar1 | 2;
    return;
  }
  _guard_xfg_dispatch_icall_nop(local_1d0,0,0xf0);
  _guard_xfg_dispatch_icall_nop(local_dc,0,0x94);
  local_1d0[0] = local_1d0[0] | 2;
  local_e0 = 0x7f7fffff;
  local_1d8 = param_2;
  FWeakObjectPtr::operator=(local_6c,*(undefined8 *)(param_2 + 0x118));
  lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x118) + 0x168);
  if (lVar7 != 0) {
    lVar5 = FUN_1429f11d0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_142d162fd;
  }
  lVar7 = 0;
LAB_142d162fd:
  FWeakObjectPtr::operator=(local_64,lVar7);
  lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x118) + 0x168);
  if (lVar7 == 0) {
    local_1e8 = _DAT_1468b5d90;
    local_1e0 = DAT_1468b5d98;
  }
  else {
    local_1e8 = *(undefined8 *)(lVar7 + 0x220);
    local_1e0 = *(undefined4 *)(lVar7 + 0x228);
  }
  iVar8 = (int)param_3[1];
  local_bc = local_1e0;
  local_b0 = local_1e0;
  local_c4 = local_1e8;
  local_b8 = local_1e8;
  *(int *)(param_3 + 1) = iVar8 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar8 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<400,8>_>,FDefaultAllocator>::ResizeGrow
              (param_3,iVar8);
  }
  FUN_142d0a770((longlong)iVar8 * 400 + *param_3,&local_1d8);
  if (local_f0 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142d16400 FUN_142d16400 body=82 status=ok
// SIG undefined FUN_142d16400(void)

void FUN_142d16400(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxGameSystemCore\\Public\\Damage/DamageAreaTypes.h"
             ,0x149,L"Pure virtual not implemented (%s)",L"UDamageAreaType::FillAreaTestParams");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxGameSystemCore\\Public\\Damage/DamageAreaTypes.h"
             ,0x149,L"Pure virtual not implemented (%s)");
  return;
}



// FUNCTION 142d16460 FUN_142d16460 body=444 status=ok
// SIG undefined FUN_142d16460(void)

void FUN_142d16460(longlong param_1,undefined2 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float local_48;
  float local_38;
  float local_34;
  float local_30;
  
  uVar1 = *param_5;
  FRotator::Vector(param_4,&local_38);
  if ((param_8 == 0) || (*(char *)(param_8 + 0x174) == '\0')) {
    uVar2 = FUN_142c98860(param_1 + 0x60,uVar1);
    uVar3 = FUN_142c98860(param_1 + 0x98,uVar1);
    local_48 = (float)FUN_142c98860(param_1 + 0xd0,uVar1);
  }
  else {
    uVar2 = *(undefined4 *)(param_8 + 0x170);
    uVar3 = (undefined4)((ulonglong)*(undefined8 *)(param_8 + 0x168) >> 0x20);
    local_48 = (float)*(undefined8 *)(param_8 + 0x168);
  }
  *param_2 = 5;
  *(undefined4 *)(param_2 + 2) = 1;
  *(float *)(param_2 + 4) = local_48;
  *(undefined4 *)(param_2 + 6) = uVar3;
  *(undefined4 *)(param_2 + 8) = uVar2;
  *(undefined8 *)(param_2 + 10) = *param_3;
  *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(param_3 + 1);
  if (*(char *)(param_1 + 0x108) == '\x01') {
    *(float *)(param_2 + 10) = local_38 * local_48 + *(float *)(param_2 + 10);
    *(float *)(param_2 + 0xc) = local_34 * local_48 + *(float *)(param_2 + 0xc);
    *(float *)(param_2 + 0xe) = local_30 * local_48 + *(float *)(param_2 + 0xe);
  }
  *(undefined8 *)(param_2 + 0x10) = *param_4;
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_4 + 1);
  *(ulonglong *)(param_2 + 0x16) =
       CONCAT44(local_34 * local_48 + *(float *)(param_2 + 0xc),
                local_38 * local_48 + *(float *)(param_2 + 10));
  *(float *)(param_2 + 0x1a) = local_30 * local_48 + *(float *)(param_2 + 0xe);
  return;
}



// FUNCTION 142d16620 FUN_142d16620 body=593 status=ok
// SIG undefined FUN_142d16620(void)

void FUN_142d16620(longlong param_1,undefined2 *param_2,float *param_3,float *param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
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
  float *pfVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uStack_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined1 local_b8 [160];
  
  uVar6 = *param_5;
  if ((param_8 == 0) || (*(char *)(param_8 + 0x164) == '\0')) {
    uVar20 = FUN_142c98860(param_1 + 0x98,uVar6);
  }
  else {
    uVar20 = *(undefined4 *)(param_8 + 0x160);
  }
  fVar21 = (float)FUN_142c98860(param_1 + 0x60,uVar6);
  fVar23 = fVar21 * 2.0;
  FRotator::Vector(param_4,&local_c8);
  local_d0 = param_4[2];
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar22 = -fVar21;
  local_d8 = fVar1 + 90.0;
  local_d4 = fVar2;
  pfVar19 = (float *)FRotationMatrix::FRotationMatrix(local_b8,&local_d8);
  fVar7 = pfVar19[8];
  fVar8 = pfVar19[9];
  fVar9 = pfVar19[10];
  fVar10 = pfVar19[0xc];
  fVar11 = pfVar19[0xd];
  fVar12 = pfVar19[0xe];
  fVar13 = pfVar19[4];
  fVar14 = pfVar19[5];
  fVar15 = pfVar19[6];
  fVar16 = *pfVar19;
  fVar17 = pfVar19[1];
  fVar18 = pfVar19[2];
  fVar3 = *param_3;
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  *(undefined4 *)(param_2 + 2) = 3;
  *(undefined4 *)(param_2 + 4) = uVar20;
  *(float *)(param_2 + 6) = fVar21;
  *(undefined4 *)(param_2 + 8) = uStack_dc;
  *param_2 = 4;
  *(ulonglong *)(param_2 + 10) =
       CONCAT44(fVar11 * 0.0 + fVar22 * fVar8 + fVar14 * 0.0 + fVar17 * 0.0 + fVar4,
                fVar10 * 0.0 + fVar22 * fVar7 + fVar13 * 0.0 + fVar16 * 0.0 + fVar3);
  *(ulonglong *)(param_2 + 0x10) = CONCAT44(fVar2,fVar1 + 90.0);
  *(float *)(param_2 + 0xe) = fVar12 * 0.0 + fVar22 * fVar9 + fVar15 * 0.0 + fVar18 * 0.0 + fVar5;
  *(float *)(param_2 + 0x14) = local_d0;
  fVar1 = param_3[2];
  *(ulonglong *)(param_2 + 0x16) =
       CONCAT44(local_c4 * fVar23 + param_3[1],local_c8 * fVar23 + *param_3);
  *(float *)(param_2 + 0x1a) = local_c0 * fVar23 + fVar1;
  return;
}



// FUNCTION 142d16880 FUN_142d16880 body=343 status=ok
// SIG undefined FUN_142d16880(void)

void FUN_142d16880(longlong param_1,undefined2 *param_2,float *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float local_48;
  float local_44;
  float local_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar4 = *param_5;
  fVar5 = (float)FUN_142c98860(param_1 + 0x98,uVar4);
  fVar5 = _guard_xfg_dispatch_icall_nop(fVar5 * 0.008726646);
  if ((param_8 == 0) || (*(char *)(param_8 + 0x164) == '\0')) {
    fVar6 = (float)FUN_142c98860(param_1 + 0x60,uVar4);
  }
  else {
    fVar6 = *(float *)(param_8 + 0x160);
  }
  FRotator::Vector(param_4,&local_48);
  *param_2 = 3;
  *(undefined4 *)(param_2 + 2) = 2;
  *(float *)(param_2 + 4) = fVar6;
  *(undefined4 *)(param_2 + 6) = uStack_30;
  *(undefined4 *)(param_2 + 8) = uStack_2c;
  *(undefined8 *)(param_2 + 10) = *(undefined8 *)param_3;
  *(float *)(param_2 + 0xe) = param_3[2];
  *(undefined8 *)(param_2 + 0x10) = *param_4;
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_4 + 1);
  fVar1 = *param_3;
  fVar2 = param_3[2];
  fVar3 = param_3[1];
  *(float *)(param_2 + 0x40) = fVar5;
  *(float *)(param_2 + 0x42) = fVar6 * fVar6;
  *(ulonglong *)(param_2 + 0x16) = CONCAT44(local_44 * fVar6 + fVar3,local_48 * fVar6 + fVar1);
  *(float *)(param_2 + 0x1a) = local_40 * fVar6 + fVar2;
  return;
}



// FUNCTION 142d169e0 FUN_142d169e0 body=1638 status=ok
// SIG undefined FUN_142d169e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d169e0(longlong param_1,undefined1 *param_2,float *param_3,float *param_4,
                  undefined8 *param_5,longlong param_6,longlong param_7,longlong param_8)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  undefined4 uVar12;
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
  undefined1 local_158 [12];
  undefined4 uStack_14c;
  float local_148;
  float local_144;
  float local_140;
  undefined4 local_13c;
  float local_138;
  float local_134;
  float local_130;
  undefined4 local_12c;
  float local_128;
  float local_124;
  float local_120;
  undefined4 local_11c;
  float local_118;
  float local_114;
  float local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  
  uVar1 = *param_5;
  pfVar6 = (float *)FRotator::Quaternion(param_4,local_158);
  fVar2 = *pfVar6;
  fVar3 = pfVar6[1];
  fVar4 = pfVar6[2];
  fVar5 = pfVar6[3];
  fVar20 = -fVar2 + -fVar2;
  fVar15 = fVar4 + fVar4;
  fVar23 = -fVar3 + -fVar3;
  fVar16 = fVar3 + fVar3;
  fVar11 = (float)FUN_142c98860(param_1 + 0xd8,uVar1);
  if ((param_8 == 0) || (*(char *)(param_8 + 0x164) == '\0')) {
    fVar22 = (float)FUN_142c98860(param_1 + 0x60,uVar1);
  }
  else {
    fVar22 = *(float *)(param_8 + 0x160);
  }
  uVar12 = FUN_142c98860(param_1 + 0xa0,uVar1);
  fVar13 = (float)FUN_142c98860(param_1 + 0x110,uVar1);
  fVar14 = _guard_xfg_dispatch_icall_nop(fVar13 * 0.008726646);
  fVar21 = ((fVar20 * fVar2 - fVar16 * fVar3) + 1.0) * fVar11 + param_3[2];
  fVar25 = (fVar16 * fVar5 - fVar20 * fVar4) * fVar11 + *param_3;
  fVar11 = (fVar20 * fVar5 + fVar16 * fVar4) * fVar11 + param_3[1];
  if (param_6 == 0) {
    fVar16 = 0.0;
    fVar20 = 0.0;
    fVar17 = 0.0;
  }
  else {
    fVar16 = *(float *)(param_7 + 0x790);
    fVar20 = *(float *)(param_6 + 4);
    fVar17 = fVar16 - *(float *)(param_6 + 8);
  }
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    lVar7 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar7 = 0;
  }
  fVar24 = 0.0;
  if ((((*(char *)(param_1 + 0x99) != '\0') && (lVar7 != 0)) &&
      ((*(byte *)(lVar7 + 0x134) & 1) != 0)) && (0.0 < *(float *)(lVar7 + 0x138))) {
    fVar19 = 1.0 / *(float *)(lVar7 + 0x138);
    if (*(char *)(param_1 + 0x9a) != '\0') {
      fVar24 = (fVar17 - fVar20) * fVar19 * fVar22;
    }
    fVar22 = (fVar16 - fVar20) * fVar19 * fVar22;
  }
  local_140 = *param_4 * _DAT_146b31ae0 -
              (float)(int)(*param_4 * _DAT_146b31ae0 * _DAT_146b31ad0) * _DAT_146b31ac0;
  fVar16 = param_4[1] * fRam0000000146b31ae4 -
           (float)(int)(param_4[1] * fRam0000000146b31ae4 * fRam0000000146b31ad4) *
           fRam0000000146b31ac4;
  fVar20 = param_4[2] * fRam0000000146b31ae8 -
           (float)(int)(param_4[2] * fRam0000000146b31ae8 * fRam0000000146b31ad8) *
           fRam0000000146b31ac8;
  uVar8 = -(uint)(_DAT_146b31a90 < (float)((uint)local_140 & _DAT_146b31a20));
  uVar9 = -(uint)(fRam0000000146b31a94 < (float)((uint)fVar16 & uRam0000000146b31a24));
  uVar10 = -(uint)(fRam0000000146b31a98 < (float)((uint)fVar20 & uRam0000000146b31a28));
  local_140 = (float)(((uint)((float)((uint)local_140 & _DAT_146b31ab0 | _DAT_146b31aa0) - local_140
                             ) ^ (uint)local_140) & uVar8 ^ (uint)local_140);
  fVar16 = (float)(((uint)((float)((uint)fVar16 & uRam0000000146b31ab4 | uRam0000000146b31aa4) -
                          fVar16) ^ (uint)fVar16) & uVar9 ^ (uint)fVar16);
  fVar20 = (float)(((uint)((float)((uint)fVar20 & uRam0000000146b31ab8 | uRam0000000146b31aa8) -
                          fVar20) ^ (uint)fVar20) & uVar10 ^ (uint)fVar20);
  fVar17 = local_140 * local_140;
  fVar19 = fVar16 * fVar16;
  fVar18 = fVar20 * fVar20;
  local_140 = (((((fVar17 * -2.3889859e-08 + 2.7525562e-06) * fVar17 + -0.00019840874) * fVar17 +
                0.008333331) * fVar17 + -0.16666667) * fVar17 + 1.0) * local_140;
  fVar16 = (((((fVar19 * -2.3889859e-08 + 2.7525562e-06) * fVar19 + -0.00019840874) * fVar19 +
             0.008333331) * fVar19 + -0.16666667) * fVar19 + 1.0) * fVar16;
  fVar20 = (((((fVar18 * -2.3889859e-08 + 2.7525562e-06) * fVar18 + -0.00019840874) * fVar18 +
             0.008333331) * fVar18 + -0.16666667) * fVar18 + 1.0) * fVar20;
  local_120 = (((((fVar17 * -2.6051615e-07 + 2.4760495e-05) * fVar17 + -0.0013888378) * fVar17 +
                0.041666638) * fVar17 + -0.5) * fVar17 + 1.0) *
              (float)((_DAT_146b319d0 ^ _DAT_146b31980) & uVar8 ^ _DAT_146b31980);
  fVar17 = (((((fVar19 * -2.6051615e-07 + 2.4760495e-05) * fVar19 + -0.0013888378) * fVar19 +
             0.041666638) * fVar19 + -0.5) * fVar19 + 1.0) *
           (float)((uRam0000000146b319d4 ^ uRam0000000146b31984) & uVar9 ^ uRam0000000146b31984);
  fVar19 = (((((fVar18 * -2.6051615e-07 + 2.4760495e-05) * fVar18 + -0.0013888378) * fVar18 +
             0.041666638) * fVar18 + -0.5) * fVar18 + 1.0) *
           (float)((uRam0000000146b319d8 ^ uRam0000000146b31988) & uVar10 ^ uRam0000000146b31988);
  local_148 = fVar17 * local_120;
  local_13c = 0;
  local_144 = local_120 * fVar16;
  local_12c = 0;
  local_11c = 0;
  local_10c = 0x3f800000;
  local_138 = fVar20 * local_140 * fVar17 - fVar19 * fVar16;
  local_134 = fVar20 * local_140 * fVar16 + fVar19 * fVar17;
  local_130 = -(local_120 * fVar20);
  local_120 = fVar19 * local_120;
  local_124 = fVar17 * fVar20 - fVar19 * local_140 * fVar16;
  local_128 = -(fVar19 * local_140 * fVar17 + fVar20 * fVar16);
  local_118 = fVar25;
  local_114 = fVar11;
  local_110 = fVar21;
  FMatrix::InverseFast(&local_148,&local_108);
  *param_2 = 2;
  *(undefined4 *)(param_2 + 4) = 3;
  *(float *)(param_2 + 8) = fVar22;
  *(undefined4 *)(param_2 + 0xc) = uVar12;
  *(undefined4 *)(param_2 + 0x10) = uStack_14c;
  *(ulonglong *)(param_2 + 0x14) = CONCAT44(fVar11,fVar25);
  param_2[1] = ABS(fVar13 - 360.0) <= 1e-08;
  *(float *)(param_2 + 0x1c) = fVar21;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)param_4;
  *(float *)(param_2 + 0x28) = param_4[2];
  *(ulonglong *)(param_2 + 0x2c) =
       CONCAT44(fVar11 + (fVar15 * fVar5 - fVar23 * fVar2) * fVar22,
                fVar25 + ((fVar23 * fVar3 - fVar15 * fVar4) + 1.0) * fVar22);
  *(undefined8 *)(param_2 + 0x40) = local_108;
  *(undefined8 *)(param_2 + 0x48) = uStack_100;
  *(undefined8 *)(param_2 + 0x50) = local_f8;
  *(undefined8 *)(param_2 + 0x58) = uStack_f0;
  *(undefined8 *)(param_2 + 0x60) = local_e8;
  *(undefined8 *)(param_2 + 0x68) = uStack_e0;
  *(float *)(param_2 + 0x84) = fVar24 * fVar24;
  *(float *)(param_2 + 0x88) = fVar22 * fVar22;
  *(float *)(param_2 + 0x8c) = fVar14;
  *(undefined4 *)(param_2 + 0x80) = uVar12;
  *(float *)(param_2 + 0x34) = fVar21 + (fVar23 * fVar5 + fVar15 * fVar2) * fVar22;
  *(undefined8 *)(param_2 + 0x70) = local_d8;
  *(undefined8 *)(param_2 + 0x78) = uStack_d0;
  return;
}



// FUNCTION 142d17050 FUN_142d17050 body=437 status=ok
// SIG undefined FUN_142d17050(void)

void FUN_142d17050(longlong param_1,undefined2 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,longlong param_6,longlong param_7,longlong param_8)

{
  undefined4 uVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if ((param_8 == 0) || (*(char *)(param_8 + 0x164) == '\0')) {
    fVar8 = (float)FUN_142c98860(param_1 + 0x60,*param_5);
  }
  else {
    fVar8 = *(float *)(param_8 + 0x160);
  }
  if ((param_8 != 0) && ((*(byte *)(param_8 + 0x10) & 8) != 0)) {
    fVar3 = (float)FUN_142d3bb80(param_5[1]);
    fVar8 = fVar8 * fVar3;
  }
  fVar3 = 0.0;
  if (param_6 == 0) {
    fVar5 = 0.0;
    fVar7 = 0.0;
    fVar6 = 0.0;
  }
  else {
    fVar5 = *(float *)(param_7 + 0x790);
    fVar7 = *(float *)(param_6 + 4);
    fVar6 = fVar5 - *(float *)(param_6 + 8);
  }
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar2 = 0;
  }
  if ((((*(char *)(param_1 + 0x99) != '\0') && (lVar2 != 0)) &&
      ((*(byte *)(lVar2 + 0x134) & 1) != 0)) && (0.0 < *(float *)(lVar2 + 0x138))) {
    fVar4 = 1.0 / *(float *)(lVar2 + 0x138);
    if (*(char *)(param_1 + 0x9a) != '\0') {
      fVar3 = (fVar6 - fVar7) * fVar4 * fVar8;
    }
    fVar8 = (fVar5 - fVar7) * fVar4 * fVar8;
  }
  *param_2 = 0x101;
  *(undefined4 *)(param_2 + 2) = 2;
  *(float *)(param_2 + 4) = fVar8;
  *(undefined4 *)(param_2 + 6) = uStack_30;
  *(undefined4 *)(param_2 + 8) = uStack_2c;
  *(undefined8 *)(param_2 + 10) = *param_3;
  *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(param_2 + 0x10) = *param_4;
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_4 + 1);
  *(undefined8 *)(param_2 + 0x16) = *param_3;
  uVar1 = *(undefined4 *)(param_3 + 1);
  *(float *)(param_2 + 0x40) = fVar3 * fVar3;
  *(float *)(param_2 + 0x42) = fVar8 * fVar8;
  *(undefined4 *)(param_2 + 0x1a) = uVar1;
  return;
}



// FUNCTION 142d17210 FUN_142d17210 body=403 status=ok
// SIG undefined FUN_142d17210(void)

void FUN_142d17210(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                  undefined8 *param_5)

{
  undefined1 uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *local_28;
  undefined8 local_20;
  
  uVar6 = 0;
  *param_2 = DAT_146b31a48;
  if (param_3 != (undefined8 *)0x0) {
    puVar3 = (undefined4 *)*param_3;
    uVar2 = (longlong)*(int *)(param_3 + 1) & 0x3fffffffffffffff;
    if (puVar3 + *(int *)(param_3 + 1) < puVar3) {
      uVar2 = uVar6;
    }
    uVar5 = uVar6;
    if (uVar2 != 0) {
      do {
        FCollisionQueryParams::AddIgnoredActor(param_2,*puVar3);
        uVar5 = uVar5 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar5 != uVar2);
    }
  }
  if (param_4 != 0) {
    FUN_142301490(param_2,param_4);
  }
  if (((*(uint *)(param_1 + 8) >> 4 & 1) == 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    if (*(char *)(*(longlong *)(param_1 + 0x20) + 0x131) == '\0') {
      FCollisionQueryParams::AddIgnoredActor(param_2,*param_5);
    }
    if (param_5[1] != 0) {
      uVar2 = uVar6;
      if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
        uVar2 = *(ulonglong *)(param_1 + 0x20);
      }
      if (*(char *)(uVar2 + 0x132) == '\0') {
        FCollisionQueryParams::AddIgnoredActor(param_2);
        local_28 = (longlong *)0x0;
        local_20 = 0;
        (**(code **)(*(longlong *)param_5[1] + 0x4b8))((longlong *)param_5[1],&local_28,1);
        uVar2 = (ulonglong)((longlong)(local_28 + (int)local_20) + (7 - (longlong)local_28)) >> 3;
        if (local_28 + (int)local_20 < local_28) {
          uVar2 = uVar6;
        }
        plVar4 = local_28;
        if (uVar2 != 0) {
          do {
            if (*plVar4 != 0) {
              FCollisionQueryParams::AddIgnoredActor(param_2);
            }
            uVar6 = uVar6 + 1;
            plVar4 = plVar4 + 1;
          } while (uVar6 != uVar2);
        }
        if (local_28 != (longlong *)0x0) {
          FMemory::Free(local_28);
        }
      }
      uVar1 = FUN_142dd0740(param_5[1]);
      *(undefined1 *)((longlong)param_2 + 0x1c) = uVar1;
    }
  }
  return;
}



// FUNCTION 142d173b0 FUN_142d173b0 body=191 status=ok
// SIG undefined FUN_142d173b0(void)

void FUN_142d173b0(byte *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *param_1 = *(byte *)(param_2 + 0x214) & 1;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 0x110);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x11c);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x124);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x38);
  uVar1 = FWeakObjectPtr::Get(param_2 + 0xd4);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x2d0);
  FUN_1408e22e0(param_1 + 0x38,param_2 + 600);
  param_1[0x58] = (byte)(*(uint *)(param_2 + 0x100) >> 5) & 1;
  if ((byte)(*(char *)(param_2 + 0x2f0) - 1U) < 2) {
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x2f8);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x300);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x304);
  }
  return;
}



// FUNCTION 142d17470 FUN_142d17470 body=202 status=ok
// SIG undefined FUN_142d17470(void)

void FUN_142d17470(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  if (*(int *)(param_2 + 0x1b) == 1) {
    puVar6 = (undefined8 *)param_2[0x1a];
    if ((undefined8 *)param_2[0x1a] == (undefined8 *)0x0) {
      puVar6 = param_2 + 2;
    }
    lVar5 = FUN_14046ef90(puVar6);
    if (lVar5 != 0) {
      uVar1 = param_2[1];
      *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 5;
      *param_1 = uVar1;
      *(undefined4 *)(param_1 + 0x1f) = 0x7f7fffff;
      FWeakObjectPtr::operator=((longlong)param_1 + 0x16c,*param_2);
      uVar2 = *(undefined4 *)(lVar5 + 0x220);
      uVar3 = *(undefined4 *)(lVar5 + 0x224);
      uVar4 = *(undefined4 *)(lVar5 + 0x228);
      *(undefined4 *)((longlong)param_1 + 0x114) = uVar2;
      *(undefined4 *)(param_1 + 0x23) = uVar3;
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x124) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0x11c) = uVar4;
      *(undefined4 *)(param_1 + 0x25) = uVar4;
      FWeakObjectPtr::operator=((longlong)param_1 + 0x174,lVar5);
    }
  }
  return;
}



// FUNCTION 142d17540 FUN_142d17540 body=405 status=ok
// SIG undefined FUN_142d17540(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d17540(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
                  longlong param_5)

{
  undefined4 uVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  
  if (param_4 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = UScrollBox::GetPrivateStaticClass();
    uVar3 = (**(code **)(*param_4 + 0x628))(param_4,uVar3);
  }
  *param_2 = uVar3;
  FUN_140729f20(param_2 + 0x20,param_5 + 0x60);
  lVar4 = FWeakObjectPtr::Get((longlong)param_2 + 0x16c);
  if (lVar4 != 0) {
    return;
  }
  if (param_4 == (longlong *)0x0) {
    return;
  }
  FWeakObjectPtr::operator=((longlong)param_2 + 0x16c,param_4);
  if (*(char *)(param_5 + 0x13c) == '\0') {
    lVar4 = param_4[0x2d];
    if (lVar4 == 0) {
      local_28 = _DAT_1468b5d90;
      local_20 = DAT_1468b5d98;
    }
    else {
      local_20 = *(undefined4 *)(lVar4 + 0x228);
      local_28 = *(undefined8 *)(lVar4 + 0x220);
    }
    puVar6 = &local_1c;
    local_1c = local_28;
    local_14 = local_20;
  }
  else {
    puVar6 = &local_28;
    local_28 = *(undefined8 *)(param_5 + 0x130);
    local_20 = *(undefined4 *)(param_5 + 0x138);
  }
  uVar3 = *puVar6;
  uVar1 = *(undefined4 *)(puVar6 + 1);
  *(undefined8 *)((longlong)param_2 + 0x114) = uVar3;
  param_2[0x24] = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x11c) = uVar1;
  *(undefined4 *)(param_2 + 0x25) = uVar1;
  lVar4 = param_4[0x2d];
  if (lVar4 != 0) {
    lVar5 = FUN_1429f11d0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_142d176b1;
  }
  lVar4 = 0;
LAB_142d176b1:
  FWeakObjectPtr::operator=((longlong)param_2 + 0x174,lVar4);
  return;
}



// FUNCTION 142d176e0 FUN_142d176e0 body=2847 status=ok
// SIG undefined FUN_142d176e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_142d176e0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined8 *param_5,undefined8 ******param_6,undefined8 ******param_7,
                  undefined8 ******param_8)

{
  longlong lVar1;
  undefined8 *****pppppuVar2;
  undefined8 *****pppppuVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  void *pvVar15;
  longlong *plVar16;
  ulonglong *puVar17;
  longlong *plVar18;
  undefined4 uVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  longlong *plVar22;
  undefined1 auStack_b88 [32];
  undefined8 *****local_b68;
  undefined8 *****local_b60;
  undefined8 *****local_b58;
  undefined8 *****local_b50;
  undefined4 *local_b48;
  byte local_b38;
  longlong local_b30;
  undefined8 local_b28;
  undefined8 local_b20;
  undefined4 local_b18;
  undefined4 local_b14;
  undefined8 *****local_b10;
  undefined4 local_b08;
  undefined8 *****local_b00;
  undefined8 *****local_af8;
  undefined8 *local_af0;
  undefined8 *****local_ae8;
  undefined4 local_ae0;
  longlong *local_ad8;
  longlong local_ad0;
  longlong local_ac8;
  undefined8 local_ab8;
  undefined4 uStack_ab0;
  undefined4 uStack_aac;
  undefined1 local_aa8 [16];
  undefined8 local_a98;
  undefined8 local_a90;
  undefined4 local_a88;
  undefined1 local_a84;
  undefined2 uStack_a83;
  undefined1 uStack_a81;
  undefined4 uStack_a80;
  uint local_a7c;
  undefined4 local_a78;
  undefined2 uStack_a74;
  undefined2 uStack_a72;
  undefined4 local_a70;
  undefined8 local_a6c;
  undefined4 local_a64;
  undefined8 local_a60;
  undefined4 local_a58;
  undefined4 local_a54;
  undefined4 uStack_a50;
  undefined4 local_a4c;
  undefined8 local_a48;
  undefined4 local_a40;
  undefined4 local_a3c;
  undefined4 local_a38;
  undefined4 local_a34;
  undefined8 local_a30;
  undefined8 local_a28;
  undefined4 local_a20;
  undefined8 local_a18;
  undefined8 local_a10;
  undefined8 local_a08;
  undefined8 local_a00;
  undefined4 local_9f8;
  undefined8 local_9f4;
  undefined4 local_9ec;
  longlong local_9e8;
  undefined4 local_9e0;
  undefined8 local_9dc;
  undefined4 local_9d4;
  longlong local_9d0;
  undefined4 local_9c8;
  undefined8 local_9c4;
  undefined4 local_9bc;
  longlong local_9b8;
  undefined4 local_9b0;
  undefined4 local_9ac;
  undefined4 local_9a8;
  undefined4 local_9a4;
  undefined4 local_9a0;
  undefined4 local_99c;
  undefined4 local_998;
  undefined4 local_994;
  undefined4 local_990;
  longlong local_988;
  longlong local_980;
  longlong local_938;
  undefined8 local_930;
  ulonglong local_928 [280];
  ulonglong *local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_b88;
  local_af8 = param_6;
  plVar18 = (longlong *)*param_2;
  local_b00 = param_7;
  local_b28._0_4_ = 0;
  local_b30 = 0;
  local_b28._4_4_ = 0;
  local_b28 = 0;
  plVar10 = plVar18 + (longlong)(int)param_2[1] * 0x32;
  local_af0 = param_5;
  local_b10 = param_8;
  local_ad8 = param_2;
  local_ad0 = param_4;
  local_ac8 = param_3;
  if (plVar18 != plVar10) {
    lVar11 = 0;
    do {
      lVar6 = FWeakObjectPtr::Get((longlong)plVar18 + 0x16c);
      if (lVar6 != 0) {
        FWeakObjectPtr::operator=(&local_b20,lVar6);
        uVar14 = local_b28;
        lVar6 = (longlong)(int)local_b28;
        iVar5 = (int)local_b28 + 1;
        local_b28 = CONCAT44(local_b28._4_4_,iVar5);
        if (local_b28._4_4_ < iVar5) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                    (&local_b30,uVar14 & 0xffffffff);
        }
        *(undefined4 *)(local_b30 + lVar6 * 8) = (undefined4)local_b20;
        *(undefined4 *)(local_b30 + 4 + lVar6 * 8) = local_b20._4_4_;
        lVar6 = *plVar18;
        if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0x7e8) & 2) != 0)) {
          lVar13 = lVar11;
          if (((*(byte *)(lVar6 + 0x7e8) & 1) != 0) &&
             ((((*(longlong *)(lVar6 + 0x818) != 0 &&
                (*(longlong **)(lVar6 + 0x118) != (longlong *)0x0)) &&
               (*(longlong *)(*(longlong *)(lVar6 + 0x818) + 0x118) != 0)) &&
              ((cVar4 = (**(code **)(**(longlong **)(lVar6 + 0x118) + 0x528))(), cVar4 != '\0' &&
               (*(longlong *)(lVar6 + 0x818) != 0)))))) {
            lVar13 = *(longlong *)(*(longlong *)(lVar6 + 0x818) + 0x118);
          }
          if (lVar13 != 0) {
            FWeakObjectPtr::operator=(&local_b18);
            lVar1 = local_b30;
            lVar6 = local_b30 + (longlong)(int)local_b28 * 8;
            for (lVar13 = local_b30; lVar13 != lVar6; lVar13 = lVar13 + 8) {
              cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar13,&local_b18);
              if (cVar4 != '\0') {
                if ((int)(lVar13 - lVar1 >> 3) != -1) goto LAB_142d178bb;
                break;
              }
            }
            uVar14 = local_b28;
            lVar6 = (longlong)(int)local_b28;
            iVar5 = (int)local_b28 + 1;
            local_b28 = CONCAT44(local_b28._4_4_,iVar5);
            if (local_b28._4_4_ < iVar5) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (&local_b30,uVar14 & 0xffffffff);
            }
            *(undefined4 *)(local_b30 + lVar6 * 8) = local_b18;
            *(undefined4 *)(local_b30 + 4 + lVar6 * 8) = local_b14;
          }
        }
      }
LAB_142d178bb:
      plVar18 = plVar18 + 0x32;
    } while (plVar18 != plVar10);
  }
  plVar18 = local_ad8;
  puVar8 = local_af0;
  pppppuVar2 = local_b10;
  if (local_af0 != (undefined8 *)0x0) {
    iVar5 = *(int *)(local_af0 + 1);
    if (iVar5 != 0) {
      iVar12 = (int)local_b28;
      if (local_b28._4_4_ < (int)local_b28 + iVar5) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(&local_b30,(int)local_b28 + iVar5);
        iVar12 = (int)local_b28;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(local_b30 + (longlong)iVar12 * 8),(void *)*puVar8,(longlong)iVar5 << 3);
      local_b28 = CONCAT44(local_b28._4_4_,(int)local_b28 + iVar5);
    }
  }
  uVar14 = 0;
  local_68 = (ulonglong *)0x0;
  local_60 = 0;
  puVar7 = (undefined4 *)FRotator::Quaternion(pppppuVar2 + 4,&local_ae8);
  pppppuVar3 = local_b00;
  local_ab8._0_4_ = *puVar7;
  local_ab8._4_4_ = puVar7[1];
  uStack_ab0 = puVar7[2];
  uStack_aac = puVar7[3];
  local_b48 = (undefined4 *)((longlong)pppppuVar2 + 4);
  uVar20 = local_ad0 + 0x238;
  if (local_ad0 == 0) {
    uVar20 = uVar14;
  }
  local_b50 = local_af8;
  local_b60 = (undefined8 *****)&local_ab8;
  local_b58 = local_b00;
  local_b68 = (undefined8 ******)((longlong)pppppuVar2 + 0x14);
  FUN_142d18ef0(param_1,local_928,&local_b30,uVar20);
  local_b38 = 0;
  if ((0 < (int)local_60) && ((undefined8 *****)pppppuVar3[1] != (undefined8 *****)0x0)) {
    local_b38 = FUN_142dd0740();
    uVar14 = (ulonglong)local_b38;
  }
  puVar17 = local_928;
  if (local_68 != (ulonglong *)0x0) {
    puVar17 = local_68;
  }
  puVar21 = puVar17 + (longlong)(int)local_60 * 0x1c;
  do {
    if (puVar17 == puVar21) {
      if (local_ac8 != 0) {
        FUN_142d16170(param_1,local_ac8,plVar18,pppppuVar2);
      }
      cVar4 = (**(code **)(*param_1 + 0x278))(param_1);
      pppppuVar3 = local_b00;
      if (((cVar4 == '\0') && (*(char *)((longlong)pppppuVar2 + 1) == '\0')) &&
         ((*(byte *)((longlong)param_1 + 0x2c) & 0x10) == 0)) {
        plVar10 = (longlong *)*plVar18;
        plVar22 = plVar10 + (longlong)(int)plVar18[1] * 0x32;
        if (plVar10 != plVar22) {
          plVar16 = plVar10 + 0x2e;
          do {
            if ((*plVar10 != 0) && ((*(byte *)(plVar16 + -0x2d) & 1) == 0)) {
              local_a88 = 0x10000;
              local_a90 = 0;
              uStack_a50 = 0;
              local_a4c = 0;
              local_a48 = 0;
              local_a30 = 0;
              local_a28 = 0;
              uStack_a80 = 0;
              local_b20 = 0;
              local_a98 = (undefined8 *****)0x0;
              local_a7c = local_a7c & 0xffffff00;
              uStack_a83 = 0;
              local_a78 = 0;
              uStack_a74 = 0x101;
              local_a84 = 1;
              local_b68 = pppppuVar3;
              FUN_142d17210(param_1,&local_a98,0,0);
              FUN_142d1b750(*plVar10);
              _guard_xfg_dispatch_icall_nop(&local_a08,0,0x90);
              local_b60 = (undefined8 *****)&local_a98;
              local_b58 = (undefined8 *****)&DAT_146aefe68;
              local_a00 = CONCAT44(0x3f800000,(uint)local_a00);
              local_b68 = (undefined8 *****)CONCAT44(local_b68._4_4_,(uint)*(byte *)(param_1 + 6));
              UWorld::LineTraceSingleByChannel(local_af8,&local_a08);
              lVar11 = FWeakObjectPtr::Get(&local_99c);
              if (lVar11 == *(longlong *)(*plVar10 + 0x118)) {
                if (((local_a08 & 1) != 0) && ((local_a08 & 2) == 0)) {
                  *(byte *)(plVar16 + -0xe) = *(byte *)(plVar16 + -0xe) & 0xfe;
                  *(uint *)(plVar16 + -0xd) = *(uint *)(plVar16 + -0xd) & 0xfffffffe;
                  *(undefined4 *)((longlong)plVar16 + -100) = local_a00._4_4_;
                  *(undefined4 *)((longlong)plVar16 + -0x6c) = local_a08._4_4_;
                  *(undefined8 *)((longlong)plVar16 + -0x5c) = local_9f4;
                  *(uint *)(plVar16 + -0xd) = *(uint *)(plVar16 + -0xd) | (uint)local_a00 & 1;
                  *(undefined4 *)((longlong)plVar16 + -0x54) = local_9ec;
                  plVar16[-10] = local_9e8;
                  *(undefined4 *)(plVar16 + -9) = local_9e0;
                  *(undefined8 *)((longlong)plVar16 + -0x44) = local_9dc;
                  *(undefined4 *)((longlong)plVar16 + -0x3c) = local_9d4;
                  plVar16[-7] = local_9d0;
                  *(undefined4 *)(plVar16 + -6) = local_9c8;
                  *(undefined8 *)((longlong)plVar16 + -0x2c) = local_9c4;
                  *(undefined4 *)((longlong)plVar16 + -0x24) = local_9bc;
                  plVar16[-4] = local_9b8;
                  *(undefined4 *)(plVar16 + -3) = local_9b0;
                  *(undefined4 *)(plVar16 + -2) = local_9a8;
                  *(undefined4 *)(plVar16 + -0xc) = local_9f8;
                  *(undefined4 *)((longlong)plVar16 + -0x14) = local_9ac;
                  *(byte *)(plVar16 + -0xe) =
                       (*(byte *)(plVar16 + -0xe) ^ (byte)local_a08) & 2 ^
                       (*(byte *)(plVar16 + -0xe) | (byte)local_a08 & 1);
                  *(undefined4 *)((longlong)plVar16 + -0xc) = local_9a4;
                  *(undefined4 *)(plVar16 + -1) = local_9a0;
                  *(undefined4 *)((longlong)plVar16 + -4) = local_99c;
                  *(undefined4 *)plVar16 = local_998;
                  *(undefined4 *)((longlong)plVar16 + 4) = local_994;
                  *(undefined4 *)(plVar16 + 1) = local_990;
                  plVar16[2] = local_988;
                  plVar16[3] = local_980;
                }
              }
              if (local_a30 != 0) {
                FMemory::Free();
              }
              if (CONCAT44(local_a4c,uStack_a50) != 0) {
                FMemory::Free();
              }
            }
            plVar10 = plVar10 + 0x32;
            plVar16 = plVar16 + 0x32;
            plVar18 = local_ad8;
          } while (plVar10 != plVar22);
        }
      }
      if (local_ad0 == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = *(undefined4 *)(local_ad0 + 0xc);
      }
      FUN_142d1f940(param_1,plVar18,uVar19);
      lVar11 = plVar18[1];
      puVar17 = local_928;
      if (local_68 != (ulonglong *)0x0) {
        puVar17 = local_68;
      }
      if ((int)local_60 != 0) {
        puVar17 = puVar17 + 0x1a;
        iVar5 = (int)local_60;
        do {
          if (*puVar17 != 0) {
            FMemory::Free();
          }
          puVar17 = puVar17 + 0x1c;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      if (local_68 != (ulonglong *)0x0) {
        FMemory::Free();
      }
      if (local_b30 != 0) {
        FMemory::Free();
      }
      return 0 < (int)lVar11;
    }
    local_a08 = *puVar17;
    local_a00 = puVar17[1];
    local_938 = 0;
    local_b18 = 0;
    local_930 = 0;
    FUN_142d1c440(param_1,&local_ae8,&local_a08);
    if (local_938 != 0) {
      FMemory::Free();
    }
    local_b08 = local_ae0;
    local_b68 = (undefined8 *****)puVar17[1];
    local_b10 = local_ae8;
    local_b60 = pppppuVar2;
    cVar4 = FUN_142d286b0(param_1,&local_b18,&local_ae8,*puVar17);
    if (cVar4 != '\0') {
      puVar8 = (undefined8 *)FUN_142d1c440(param_1,&local_ab8,puVar17);
      local_b10 = (undefined8 *****)*puVar8;
      local_b08 = *(undefined4 *)(puVar8 + 1);
      _guard_xfg_dispatch_icall_nop(&local_a98,0,0x90);
      local_b58 = &local_b10;
      local_b50 = (undefined8 *****)CONCAT71(local_b50._1_7_,(char)uVar14);
      local_b68 = local_af8;
      local_a90 = CONCAT44(0x3f800000,(uint)local_a90);
      local_b60 = (undefined8 ******)((longlong)pppppuVar2 + 0x14);
      cVar4 = FUN_142d24000(param_1,&local_a98,local_b00,puVar17);
      if (cVar4 == '\0') {
        if ((int)puVar17[0x1b] == 1) {
          uVar9 = FUN_14046ef90();
          local_b20 = 0;
          local_af0 = (undefined8 *)0x0;
          uVar14 = puVar17[1];
          if (uVar14 != 0) {
            if ((*(longlong *)(uVar14 + 0x818) == 0) || ((*(byte *)(uVar14 + 0x7e8) & 2) == 0)) {
              lVar11 = *(longlong *)(uVar14 + 0x810);
            }
            else {
              lVar11 = FUN_142d1ab50(*(longlong *)(uVar14 + 0x818));
            }
            if (lVar11 != 0) {
              plVar10 = (longlong *)FUN_142d3b4a0(lVar11,local_aa8,uVar9,&local_af0);
              if ((*plVar10 != 0) && ((*(byte *)(*plVar10 + 0x48) & 8) != 0)) {
                lVar11 = plVar18[1];
                iVar5 = (int)lVar11 + 1;
                *(int *)(plVar18 + 1) = iVar5;
                if (*(int *)((longlong)plVar18 + 0xc) < iVar5) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<400,8>_>,FDefaultAllocator>
                  ::ResizeGrow(plVar18);
                }
                pvVar15 = (void *)((longlong)(int)lVar11 * 400 + *plVar18);
                *(undefined8 *)((longlong)pvVar15 + 0x20) = 0;
                *(undefined8 *)((longlong)pvVar15 + 0xe8) = 0;
                *(undefined8 *)((longlong)pvVar15 + 0xf0) = 0;
                *(undefined4 *)((longlong)pvVar15 + 0x164) = 0xffffffff;
                *(undefined4 *)((longlong)pvVar15 + 0x168) = 0;
                *(undefined4 *)((longlong)pvVar15 + 0x16c) = 0xffffffff;
                *(undefined4 *)((longlong)pvVar15 + 0x170) = 0;
                *(undefined4 *)((longlong)pvVar15 + 0x174) = 0xffffffff;
                *(undefined4 *)((longlong)pvVar15 + 0x178) = 0;
                *(undefined8 *)((longlong)pvVar15 + 0x180) = 0;
                *(undefined8 *)((longlong)pvVar15 + 0x188) = 0;
                *(undefined4 *)((longlong)pvVar15 + 0x10c) = 0x3f800000;
                _guard_xfg_dispatch_icall_nop(pvVar15,0,400);
                FUN_142d17470(pvVar15);
                goto LAB_142d17e65;
              }
            }
          }
        }
        local_b50 = (undefined8 ******)0x0;
        local_b60 = &local_ae8;
        local_b68 = (undefined8 *****)CONCAT44(local_b68._4_4_,local_b18);
        local_b58 = pppppuVar2;
        FUN_142d0edc0(param_1,plVar18,puVar17[1],*puVar17);
      }
      else if ((cVar4 != '\x01') && (cVar4 == '\x02')) {
        lVar11 = plVar18[1];
        iVar5 = (int)lVar11 + 1;
        *(int *)(plVar18 + 1) = iVar5;
        if (*(int *)((longlong)plVar18 + 0xc) < iVar5) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<400,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar18);
        }
        pvVar15 = (void *)((longlong)(int)lVar11 * 400 + *plVar18);
        *(undefined8 *)((longlong)pvVar15 + 0x20) = 0;
        *(undefined8 *)((longlong)pvVar15 + 0xe8) = 0;
        *(undefined8 *)((longlong)pvVar15 + 0xf0) = 0;
        *(undefined4 *)((longlong)pvVar15 + 0x164) = 0xffffffff;
        *(undefined4 *)((longlong)pvVar15 + 0x168) = 0;
        *(undefined4 *)((longlong)pvVar15 + 0x16c) = 0xffffffff;
        *(undefined4 *)((longlong)pvVar15 + 0x170) = 0;
        *(undefined4 *)((longlong)pvVar15 + 0x174) = 0xffffffff;
        *(undefined4 *)((longlong)pvVar15 + 0x178) = 0;
        *(undefined8 *)((longlong)pvVar15 + 0x180) = 0;
        *(undefined8 *)((longlong)pvVar15 + 0x188) = 0;
        *(undefined4 *)((longlong)pvVar15 + 0x10c) = 0x3f800000;
        _guard_xfg_dispatch_icall_nop(pvVar15,0,400);
        *(byte *)((longlong)pvVar15 + 0x100) =
             *(byte *)((longlong)pvVar15 + 0x100) ^
             ((byte)local_a98 ^ *(byte *)((longlong)pvVar15 + 0x100)) & 1;
        *(byte *)((longlong)pvVar15 + 0x100) =
             ((byte)local_a98 ^ *(byte *)((longlong)pvVar15 + 0x100)) & 2 ^
             *(byte *)((longlong)pvVar15 + 0x100);
        *(undefined4 *)((longlong)pvVar15 + 0x104) = local_a98._4_4_;
        *(uint *)((longlong)pvVar15 + 0x108) =
             *(uint *)((longlong)pvVar15 + 0x108) ^
             ((uint)local_a90 ^ *(uint *)((longlong)pvVar15 + 0x108)) & 1;
        *(undefined4 *)((longlong)pvVar15 + 0x10c) = local_a90._4_4_;
        *(undefined4 *)((longlong)pvVar15 + 0x110) = local_a88;
        *(ulonglong *)((longlong)pvVar15 + 0x114) =
             CONCAT44(uStack_a80,CONCAT13(uStack_a81,CONCAT21(uStack_a83,local_a84)));
        *(uint *)((longlong)pvVar15 + 0x11c) = local_a7c;
        *(ulonglong *)((longlong)pvVar15 + 0x120) =
             CONCAT26(uStack_a72,CONCAT24(uStack_a74,local_a78));
        *(undefined4 *)((longlong)pvVar15 + 0x128) = local_a70;
        *(undefined8 *)((longlong)pvVar15 + 300) = local_a6c;
        *(undefined4 *)((longlong)pvVar15 + 0x134) = local_a64;
        *(undefined8 *)((longlong)pvVar15 + 0x138) = local_a60;
        *(undefined4 *)((longlong)pvVar15 + 0x140) = local_a58;
        *(ulonglong *)((longlong)pvVar15 + 0x144) = CONCAT44(uStack_a50,local_a54);
        *(undefined4 *)((longlong)pvVar15 + 0x14c) = local_a4c;
        *(undefined8 *)((longlong)pvVar15 + 0x150) = local_a48;
        *(undefined4 *)((longlong)pvVar15 + 0x158) = local_a40;
        *(undefined4 *)((longlong)pvVar15 + 0x15c) = local_a3c;
        *(undefined4 *)((longlong)pvVar15 + 0x160) = local_a38;
        *(undefined4 *)((longlong)pvVar15 + 0x164) = local_a34;
        *(undefined4 *)((longlong)pvVar15 + 0x168) = (undefined4)local_a30;
        *(undefined4 *)((longlong)pvVar15 + 0x16c) = local_a30._4_4_;
        *(undefined4 *)((longlong)pvVar15 + 0x170) = (undefined4)local_a28;
        *(undefined4 *)((longlong)pvVar15 + 0x174) = local_a28._4_4_;
        *(undefined4 *)((longlong)pvVar15 + 0x178) = local_a20;
        *(undefined8 *)((longlong)pvVar15 + 0x180) = local_a18;
        *(undefined8 *)((longlong)pvVar15 + 0x188) = local_a10;
        *(byte *)((longlong)pvVar15 + 8) = *(byte *)((longlong)pvVar15 + 8) | 5;
        *(undefined4 *)((longlong)pvVar15 + 0xf8) = 0x7f7fffff;
      }
    }
LAB_142d17e65:
    uVar14 = (ulonglong)local_b38;
    puVar17 = puVar17 + 0x1c;
  } while( true );
}



// FUNCTION 142d18210 FUN_142d18210 body=142 status=ok
// SIG undefined FUN_142d18210(void)

int FUN_142d18210(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  if ((param_3 != 0) && (iVar2 = 0, 0 < *(int *)(param_1 + 0x38))) {
    lVar3 = 0;
    do {
      if ((*(longlong *)(lVar3 + 0x220 + *(longlong *)(param_1 + 0x30)) == param_2) &&
         (cVar1 = FUN_14058c1e0((longlong)iVar2 * 0x270 + *(longlong *)(param_1 + 0x30) + 0x10,
                                param_3), cVar1 != '\0')) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 0x270;
    } while (iVar2 < *(int *)(param_1 + 0x38));
  }
  return -1;
}



// FUNCTION 142d182a0 FUN_142d182a0 body=182 status=ok
// SIG undefined FUN_142d182a0(void)

longlong * FUN_142d182a0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_2 == 0) {
    return (longlong *)0x0;
  }
  lVar3 = APostProcessVolume::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
      != lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) && (plVar4 = *(longlong **)(param_2 + 0x4c0), plVar4 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar4 + 0x440))(plVar4,param_3);
    if (cVar2 != '\0') {
      return plVar4;
    }
  }
  plVar4 = (longlong *)FUN_14222b250(param_2,param_3,0);
  return plVar4;
}



// FUNCTION 142d18360 FUN_142d18360 body=1083 status=ok
// SIG undefined FUN_142d18360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d18360(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  int *piVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_2a8 [32];
  longlong *local_288;
  undefined8 local_280;
  longlong *local_278;
  longlong local_268;
  undefined8 local_260;
  undefined8 local_258;
  longlong *local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined1 local_234;
  undefined1 local_230 [16];
  undefined4 local_220;
  undefined1 local_218 [16];
  undefined4 local_208;
  longlong local_200 [2];
  undefined4 local_1f0;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [232];
  longlong local_f0;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  lVar5 = *param_1;
  lVar9 = *(longlong *)(lVar5 + 0x98);
  local_248 = param_2;
  if (lVar9 == 0) {
    _guard_xfg_dispatch_icall_nop(local_1d8,0,400);
    local_288 = param_1 + 4;
    FUN_142d17540(lVar5,local_1d8,param_1 + 1,param_1[3]);
    local_278 = (longlong *)0x0;
    local_280 = CONCAT71(local_280._1_7_,*(undefined1 *)(*param_1 + 0x100));
    local_288 = param_1 + 4;
    FUN_142d11680(*param_1,param_1 + 1,&DAT_1468b5d90,local_1d8);
    if (local_f0 != 0) {
      FMemory::Free();
    }
  }
  else {
    plVar6 = (longlong *)param_1[3];
    if (plVar6 != (longlong *)0x0) {
      uVar4 = UScrollBox::GetPrivateStaticClass();
      lVar5 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar4);
      if (lVar5 != 0) {
        FUN_142d16170(lVar9,lVar5,param_1 + 0x59,param_1 + 0x46);
      }
    }
    uVar8 = 0;
    local_250 = (longlong *)0x0;
    if (((*(byte *)(param_1 + 6) & 2) == 0) &&
       (((*(float *)((longlong)param_1 + 0x244) != 0.0 || (*(float *)(param_1 + 0x49) != 0.0)) ||
        (*(float *)((longlong)param_1 + 0x24c) != 0.0)))) {
      local_240 = *(undefined8 *)((longlong)param_1 + 0x244);
      local_238 = *(undefined4 *)((longlong)param_1 + 0x24c);
      local_234 = 1;
      local_250 = (longlong *)
                  FUN_142d41290(param_1 + 1,*(undefined8 *)(*param_1 + 0x10),param_1 + 4,&local_240)
      ;
    }
    local_258 = 0;
    FUN_140590080(local_230);
    if (((*(byte *)(param_1 + 6) & 4) == 0) && ((*(byte *)(*param_1 + 0x134) & 1) != 0)) {
      local_258 = FUN_142d225f0(*param_1,param_1 + 1,(longlong)param_1 + 0x244,param_1 + 4);
      local_288 = param_1 + 4;
      lVar5 = FUN_142d22510(*param_1,local_200,param_1 + 1,(longlong)param_1 + 0x244);
      FUN_1405913a0(local_230,lVar5);
      local_220 = *(undefined4 *)(lVar5 + 0x10);
      FUN_140591060(local_200);
    }
    local_268 = 0;
    local_260 = 0;
    FUN_142d1f940(lVar9,param_1 + 0x59,0);
    FRotator::Vector(param_1 + 0x4a,local_1e8);
    plVar6 = (longlong *)param_1[0x59];
    plVar10 = plVar6 + (longlong)(int)param_1[0x5a] * 0x32;
    uVar11 = uVar8;
    for (; plVar6 != plVar10; plVar6 = plVar6 + 0x32) {
      if ((*(byte *)(plVar6 + 1) & 0x10) == 0) {
        local_278 = param_1 + 0x46;
        local_288 = param_1 + 4;
        local_280._1_7_ = (undefined7)((ulonglong)local_280 >> 8);
        local_280 = CONCAT71(local_280._1_7_,*(undefined1 *)(*param_1 + 0x100));
        FUN_142d11680(*param_1,param_1 + 1,local_1e8,plVar6);
        if ((int)param_1[0x44] != -1) {
          lVar5 = *plVar6;
          uVar2 = (uint)uVar11 + 1;
          if (lVar5 == 0) {
            uVar2 = (uint)uVar11;
          }
          uVar11 = (ulonglong)uVar2;
          uVar12 = uVar8;
          if (((lVar5 != 0) && ((*(byte *)(lVar5 + 0x7e8) & 2) != 0)) &&
             (lVar5 = FUN_142d19dd0(), lVar5 != 0)) {
            uVar12 = *(ulonglong *)(lVar5 + 0x118);
          }
          uVar1 = local_260;
          if (uVar12 != 0) {
            lVar5 = (longlong)(int)local_260;
            iVar3 = (int)local_260 + 1;
            local_260 = CONCAT44(local_260._4_4_,iVar3);
            if (local_260._4_4_ < iVar3) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (&local_268,uVar1 & 0xffffffff);
            }
            *(ulonglong *)(local_268 + lVar5 * 8) = uVar12;
          }
          lVar5 = FWeakObjectPtr::Get((longlong)plVar6 + 0x16c);
          uVar12 = local_260;
          if (lVar5 != 0) {
            lVar9 = (longlong)(int)local_260;
            iVar3 = (int)local_260 + 1;
            local_260 = CONCAT44(local_260._4_4_,iVar3);
            if (local_260._4_4_ < iVar3) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (&local_268,uVar12 & 0xffffffff);
            }
            *(longlong *)(local_268 + lVar9 * 8) = lVar5;
          }
        }
      }
    }
    if ((((int)param_1[0x44] != -1) &&
        (plVar6 = (longlong *)FUN_142d5ecc0(local_248), plVar6 != (longlong *)0x0)) &&
       (lVar5 = (**(code **)(*plVar6 + 0x2b0))(plVar6), lVar5 != 0)) {
      FUN_14058f8f0(local_218,local_230);
      local_208 = local_220;
      if (((int)param_1[0x44] != -1) && (0 < *(int *)(lVar5 + 0x38))) {
        piVar7 = *(int **)(lVar5 + 0x30);
        uVar12 = uVar8;
        do {
          if (*piVar7 == (int)param_1[0x44]) goto LAB_142d1870d;
          uVar12 = (ulonglong)((int)uVar12 + 1);
          uVar8 = uVar8 + 1;
          piVar7 = piVar7 + 0x9c;
        } while ((longlong)uVar8 < (longlong)*(int *)(lVar5 + 0x38));
      }
      uVar12 = 0xffffffff;
LAB_142d1870d:
      FUN_14058f8f0(local_200,local_218);
      local_1f0 = local_208;
      local_278 = local_200;
      local_280 = local_258;
      local_288 = local_250;
      FUN_142d1d770(lVar5,uVar12,&local_268,uVar11);
      FUN_140591060(local_218);
    }
    if (local_268 != 0) {
      FMemory::Free();
    }
    FUN_140591060(local_230);
  }
  return;
}



// FUNCTION 142d187a0 FUN_142d187a0 body=231 status=ok
// SIG undefined FUN_142d187a0(void)

void FUN_142d187a0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  
  if (*(int *)(param_1 + 0x670) == 0) {
    lVar3 = *(longlong *)(param_1 + 0x678);
    lVar4 = (longlong)*(int *)(param_1 + 0x680) * 0x78 + lVar3;
    if (lVar3 != lVar4) {
      lVar5 = lVar3 + 0x60;
      do {
        cVar1 = FUN_142d52a00(lVar5);
        if (cVar1 != '\0') {
          uVar2 = FUN_142d52a20(lVar5);
          uVar2 = FArchive::operator<<(uVar2);
          FUN_142d6f560(uVar2,0,1);
        }
        lVar3 = lVar3 + 0x78;
        lVar5 = lVar5 + 0x78;
      } while (lVar3 != lVar4);
    }
  }
  else if (*(int *)(param_1 + 0x670) == 1) {
    fVar6 = *(float *)(param_1 + 0x6cc);
    if (0.0 <= fVar6) {
      fVar6 = 0.0;
    }
    *(float *)(param_1 + 0x6d4) = fVar6;
    if (*(longlong **)(param_1 + 0x6d8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x260))();
    }
  }
  if ((*(byte *)(param_1 + 0x840) & 4) != 0) {
    return;
  }
  FUN_142d23f40(param_1,0);
  FUN_142d5c340(param_1 + 0x3d0);
  return;
}



// FUNCTION 142d18890 FUN_142d18890 body=405 status=ok
// SIG undefined FUN_142d18890(void)

void FUN_142d18890(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  longlong local_28;
  int local_20;
  longlong local_18;
  
  plVar9 = (longlong *)0x0;
  plVar6 = plVar9;
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x2b0) + 0x118);
  }
  if (plVar6 != (longlong *)0x0) {
    uVar3 = UThrobber::GetPrivateStaticClass();
    lVar4 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar3);
    if ((lVar4 != 0) && (lVar4 = (**(code **)(*(longlong *)(lVar4 + 0x178) + 0x30))(), lVar4 != 0))
    {
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      if (*(longlong **)(DAT_146b33f38 + 0x58) != (longlong *)0x0) {
        plVar5 = (longlong *)(**(code **)(**(longlong **)(DAT_146b33f38 + 0x58) + 0x288))();
        FGameplayTagContainer::GetGameplayTagParents(lVar4,&local_28);
        plVar6 = plVar9;
        lVar4 = local_28;
        while ((iVar8 = (int)plVar6, -1 < iVar8 && (iVar8 < local_20))) {
          if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
            lVar1 = *(longlong *)(lVar4 + (longlong)iVar8 * 8);
            plVar6 = (longlong *)plVar5[8];
            if ((longlong *)plVar5[8] == (longlong *)0x0) {
              plVar6 = plVar5 + 7;
            }
            iVar2 = *(int *)((longlong)plVar6 +
                            ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                            (longlong)(int)plVar5[9] - 1U) * 4);
            if (iVar2 != -1) {
              do {
                plVar6 = (longlong *)(*plVar5 + (longlong)iVar2 * 0x18);
                if (*(longlong *)(*plVar5 + (longlong)iVar2 * 0x18) == lVar1) {
                  if (iVar2 != -1) goto LAB_142d189c3;
                  break;
                }
                iVar2 = (int)plVar6[2];
              } while (iVar2 != -1);
            }
          }
          plVar6 = plVar9;
LAB_142d189c3:
          plVar7 = plVar6 + 1;
          if (plVar6 == (longlong *)0x0) {
            plVar7 = plVar9;
          }
          if ((plVar7 != (longlong *)0x0) && (*plVar7 != 0)) {
            TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
            AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2,plVar7);
            lVar4 = local_28;
          }
          plVar6 = (longlong *)(ulonglong)(iVar8 + 1);
        }
        if (local_18 != 0) {
          FMemory::Free();
          lVar4 = local_28;
        }
        if (lVar4 != 0) {
          FMemory::Free(lVar4);
        }
      }
    }
  }
  return;
}



// FUNCTION 142d18a30 FUN_142d18a30 body=703 status=ok
// SIG undefined FUN_142d18a30(void)

void FUN_142d18a30(longlong param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  
  if (*(longlong *)(param_1 + 0x2b0) == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x100) & 2) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x218) != '\0') {
    return;
  }
  fVar1 = *(float *)(param_1 + 0x1d8);
  fVar7 = *(float *)(*(longlong *)(param_1 + 0x2b0) + 0x7b4);
  if (*(longlong *)(param_1 + 0x2a0) == 0) {
    fVar8 = 0.0;
  }
  else {
    fVar8 = *(float *)(*(longlong *)(param_1 + 0x2a0) + 0x2d0);
  }
  if ((fVar7 <= 0.0) || (iVar4 = rand(), fVar7 < (float)iVar4 * 3.051851e-05)) {
    lVar6 = *(longlong *)(param_1 + 0x2d0);
    fVar7 = fVar1;
    if (lVar6 == 0) goto LAB_142d18c14;
    if (*(char *)(lVar6 + 0xa9) == '\0') {
      if (*(char *)(lVar6 + 0xb0) != '\0') {
        iVar4 = rand();
        lVar6 = *(longlong *)(param_1 + 0x2d0);
        if ((float)iVar4 * 3.051851e-05 < *(float *)(lVar6 + 0xb4) ||
            (float)iVar4 * 3.051851e-05 == *(float *)(lVar6 + 0xb4)) goto LAB_142d18bb2;
      }
    }
    else {
      iVar4 = rand();
      lVar6 = *(longlong *)(param_1 + 0x2d0);
      if (*(float *)(lVar6 + 0xac) <= (float)iVar4 * 3.051851e-05 &&
          (float)iVar4 * 3.051851e-05 != *(float *)(lVar6 + 0xac)) {
        if (*(char *)(lVar6 + 0xb8) != '\0') {
LAB_142d18bb2:
          *(undefined1 *)(param_1 + 0x218) = 3;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x218) = 2;
        *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(lVar6 + 0xbc);
      }
    }
    if (*(char *)(param_1 + 0x218) == '\0') goto LAB_142d18c14;
    fVar7 = fVar1 * *(float *)(lVar6 + 0xc0);
    *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(lVar6 + 0xbc);
    *(undefined1 *)(param_1 + 0x224) = *(undefined1 *)(lVar6 + 0xb9);
    *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(lVar6 + 0xc4);
    *(float *)(param_1 + 0x220) = fVar7;
    uVar5 = 0;
    if (*(longlong *)(param_1 + 0x2b0) != 0) {
      uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x2b0) + 0x7e0);
    }
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x2b0);
    fVar7 = fVar1 * *(float *)(lVar6 + 0x7c0);
    uVar5 = *(undefined8 *)(lVar6 + 0x7e0);
    uVar2 = *(undefined4 *)(lVar6 + 0x7cc);
    *(bool *)(param_1 + 0x224) = *(int *)(lVar6 + 0x7d8) != 0;
    *(float *)(param_1 + 0x220) = fVar7;
    *(undefined4 *)(param_1 + 0x21c) = uVar2;
    *(undefined1 *)(param_1 + 0x218) = 2;
  }
  *(undefined8 *)(param_1 + 0x230) = uVar5;
LAB_142d18c14:
  if ((((*(char *)(param_1 + 0x218) == '\0') && (*(longlong *)(param_1 + 0x2a0) != 0)) &&
      (0.0 < fVar8)) &&
     ((iVar4 = rand(), (float)iVar4 <= fVar8 && (*(int *)(param_1 + 0x328) == 2)))) {
    lVar6 = *(longlong *)(param_1 + 0x2a0);
    uVar2 = *(undefined4 *)(lVar6 + 0x2d8);
    uVar3 = *(undefined4 *)(lVar6 + 0x2e0);
    uVar5 = *(undefined8 *)(lVar6 + 0x2e8);
    fVar7 = *(float *)(lVar6 + 0x2dc) * fVar1;
    *(undefined1 *)(param_1 + 0x218) = 1;
    *(char *)(param_1 + 0x224) = (char)uVar3;
    *(undefined8 *)(param_1 + 0x230) = uVar5;
    *(undefined4 *)(param_1 + 0x21c) = uVar2;
    *(float *)(param_1 + 0x220) = fVar7;
  }
  if (*(char *)(param_1 + 0x218) != '\0') {
    *(float *)(param_1 + 0x1d8) = fVar7;
    *(float *)(param_1 + 0x200) = fVar1 - fVar7;
  }
  return;
}



// FUNCTION 142d18cf0 FUN_142d18cf0 body=36 status=ok
// SIG undefined FUN_142d18cf0(void)

void FUN_142d18cf0(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_142d5ecc0();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142d18d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2a8))(plVar1);
    return;
  }
  return;
}



// FUNCTION 142d18d20 FUN_142d18d20 body=36 status=ok
// SIG undefined FUN_142d18d20(void)

void FUN_142d18d20(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_142d5ecc0();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142d18d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2b0))(plVar1);
    return;
  }
  return;
}



// FUNCTION 142d18d50 FUN_142d18d50 body=406 status=ok
// SIG undefined FUN_142d18d50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d18d50(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  longlong lVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined *local_e8;
  byte *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined2 local_b3;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined4 local_a8;
  undefined2 local_a4;
  longlong local_80;
  undefined8 local_78;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_c8 = 0;
  local_a8 = 0;
  local_c0 = 0;
  local_80 = 0;
  local_78 = 0;
  local_60 = 0;
  local_58 = 0;
  local_b8 = 0x10000;
  local_b0 = 0;
  local_d8 = (byte *)0x0;
  local_a4 = 0x101;
  local_ac = 0;
  local_b3 = 0;
  local_b4 = 1;
  local_f8 = param_7;
  FUN_142d17210(0,&local_c8);
  local_e8 = &DAT_146aefe68;
  local_f0 = &local_c8;
  local_d8 = (byte *)0x0;
  local_d0 = 0;
  local_f8 = CONCAT44(local_f8._4_4_,(uint)*(byte *)(param_1 + 0x30));
  UWorld::LineTraceMultiByChannel(param_8,&local_d8,param_5,param_6);
  pbVar3 = local_d8;
  do {
    if (pbVar3 == local_d8 + (longlong)(int)local_d0 * 0x90) {
LAB_142d18e9f:
      if (local_d8 != (byte *)0x0) {
        FMemory::Free(local_d8);
      }
      if (local_60 != 0) {
        FMemory::Free();
      }
      if (local_80 != 0) {
        FMemory::Free();
      }
      return;
    }
    if (((*pbVar3 & 1) != 0) && ((*pbVar3 & 2) == 0)) {
      lVar1 = FWeakObjectPtr::Get(pbVar3 + 0x6c);
      if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x91) & 0x40) != 0)) {
        uVar2 = FUN_142d29780(lVar1);
        *param_2 = uVar2;
        *(undefined4 *)(param_2 + 0x1f) = 0x7f7fffff;
        FUN_140729f20(param_2 + 0x20,pbVar3);
        *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) | 1;
      }
      goto LAB_142d18e9f;
    }
    pbVar3 = pbVar3 + 0x90;
  } while( true );
}



// FUNCTION 142d18ef0 FUN_142d18ef0 body=1102 status=ok
// SIG undefined FUN_142d18ef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d18ef0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  uint *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  undefined1 auStack_148 [32];
  ulonglong *local_128;
  undefined8 local_120;
  undefined8 *local_118;
  ulonglong local_108;
  undefined4 *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined1 local_c2;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined4 local_b8;
  undefined2 local_b4;
  longlong local_90;
  undefined8 local_88;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  uVar15 = 0;
  local_d8 = 0;
  local_b8 = 0;
  local_e8 = param_8;
  local_f0 = param_9;
  local_d0 = 0;
  local_90 = 0;
  local_88 = 0;
  local_70 = 0;
  local_68 = 0;
  local_c8 = 0x10000;
  local_c0 = 0;
  local_108 = 0;
  local_c4 = 0;
  local_b4 = 0x101;
  local_bc = 0;
  local_c2 = 0;
  local_128 = (ulonglong *)param_7;
  FUN_142d17210(0,&local_d8,param_4,param_3);
  local_100 = (undefined4 *)0x0;
  local_f8 = 0;
  if (*(char *)(param_1 + 0x40) == '\0') {
    puVar8 = (uint *)FUN_140a05dc0();
    uVar5 = ~puVar8[1] & *puVar8;
    local_108._0_5_ = (uint5)uVar5;
    uVar16 = (ulonglong)((longlong)(DAT_146b31a80 + DAT_146b31a88) + (3 - (longlong)DAT_146b31a80))
             >> 2;
    if (DAT_146b31a80 + DAT_146b31a88 < DAT_146b31a80) {
      uVar16 = uVar15;
    }
    puVar8 = DAT_146b31a80;
    if (uVar16 != 0) {
      do {
        uVar3 = *puVar8;
        puVar8 = puVar8 + 1;
        uVar5 = uVar5 & ~(1 << (uVar3 & 0x1f));
        uVar15 = uVar15 + 1;
        local_108 = CONCAT44(local_108._4_4_,uVar5);
      } while (uVar15 != uVar16);
    }
    local_118 = &local_d8;
    local_128 = &local_108;
    local_120 = param_9;
    UWorld::OverlapMultiByObjectType(param_8,&local_100,param_5,param_6);
  }
  else if (*(char *)(param_1 + 0x40) == '\x01') {
    local_118 = &local_d8;
    local_128 = *(ulonglong **)(param_1 + 0x48);
    local_120 = param_9;
    FUN_142344b60(param_8,&local_100,param_5,param_6);
  }
  else {
    uVar7 = UCollisionProfile::Get();
    puVar13 = *(undefined1 **)(param_1 + 0x50);
    puVar14 = puVar13 + *(int *)(param_1 + 0x58);
    local_108 = local_108 & 0xffffff0000000000;
    local_120 = local_f0;
    for (; local_f0 = local_120, puVar13 != puVar14; puVar13 = puVar13 + 1) {
      uVar5 = UCollisionProfile::ConvertToCollisionChannel(uVar7,0,*puVar13);
      local_108 = CONCAT44(local_108._4_4_,(uint)local_108 | 1 << (uVar5 & 0x1f));
      local_120 = local_f0;
    }
    local_118 = &local_d8;
    local_128 = &local_108;
    UWorld::OverlapMultiByObjectType(local_e8,&local_100,param_5,param_6);
  }
  local_108 = 0;
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    local_108 = *(ulonglong *)(param_1 + 0x20);
  }
  puVar2 = local_100 + (longlong)(int)local_f8 * 6;
  if (local_100 != puVar2) {
    puVar17 = local_100 + 1;
    do {
      uVar15 = local_108;
      plVar9 = (longlong *)FUN_1423111a0(puVar17 + -1);
      if ((plVar9 != (longlong *)0x0) && ((*(byte *)((longlong)plVar9 + 0x91) & 0x40) != 0)) {
        plVar12 = (longlong *)param_2[0x118];
        if ((longlong *)param_2[0x118] == (longlong *)0x0) {
          plVar12 = param_2;
        }
        plVar11 = plVar12 + (longlong)(int)param_2[0x119] * 0x1c;
        for (; plVar12 != plVar11; plVar12 = plVar12 + 0x1c) {
          if ((longlong *)*plVar12 == plVar9) goto LAB_142d19268;
        }
        lVar10 = AHeoCon::GetPrivateStaticClass();
        if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
            != lVar10 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          lVar10 = plVar9[0x122];
        }
        else {
          uVar7 = UScrollBox::GetPrivateStaticClass();
          lVar10 = (**(code **)(*plVar9 + 0x628))(plVar9,uVar7);
        }
        if ((uVar15 != 0) && ((lVar10 == 0 || ((*(uint *)(lVar10 + 0x840) >> 3 & 1) == 0)))) {
          iVar6 = (int)param_2[0x119];
          *(int *)(param_2 + 0x119) = iVar6 + 1;
          if (*(int *)((longlong)param_2 + 0x8cc) < iVar6 + 1) {
            FUN_142d279f0(param_2,iVar6);
          }
          plVar12 = (longlong *)param_2[0x118];
          if ((longlong *)param_2[0x118] == (longlong *)0x0) {
            plVar12 = param_2;
          }
          plVar12 = plVar12 + (longlong)iVar6 * 0x1c;
          *plVar12 = (longlong)plVar9;
          plVar12[1] = lVar10;
          plVar12[0x1a] = 0;
          plVar12[0x1b] = 0;
LAB_142d19268:
          lVar10 = (longlong)(int)plVar12[0x1b];
          iVar6 = (int)plVar12[0x1b] + 1;
          *(int *)(plVar12 + 0x1b) = iVar6;
          if (*(int *)((longlong)plVar12 + 0xdc) < iVar6) {
            TArray<FCompactPose,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(plVar12 + 2);
          }
          plVar9 = (longlong *)plVar12[0x1a];
          if ((longlong *)plVar12[0x1a] == (longlong *)0x0) {
            plVar9 = plVar12 + 2;
          }
          *(undefined4 *)(plVar9 + lVar10 * 3) = puVar17[-1];
          *(undefined4 *)((longlong)plVar9 + lVar10 * 0x18 + 4) = *puVar17;
          *(undefined4 *)(plVar9 + lVar10 * 3 + 1) = puVar17[1];
          *(undefined4 *)((longlong)plVar9 + lVar10 * 0x18 + 0xc) = puVar17[2];
          *(undefined4 *)(plVar9 + lVar10 * 3 + 2) = puVar17[3];
          puVar8 = (uint *)((longlong)plVar9 + lVar10 * 0x18 + 0x14);
          *puVar8 = *puVar8 ^ (puVar17[4] ^ *(uint *)((longlong)plVar9 + lVar10 * 0x18 + 0x14)) & 1;
        }
      }
      puVar1 = puVar17 + 5;
      puVar17 = puVar17 + 6;
    } while (puVar1 != puVar2);
  }
  if (local_100 != (undefined4 *)0x0) {
    FMemory::Free(local_100);
  }
  if (local_70 != 0) {
    FMemory::Free();
  }
  if (local_90 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142d19340 FUN_142d19340 body=763 status=ok
// SIG undefined FUN_142d19340(void)

void FUN_142d19340(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int *piVar10;
  longlong *plVar11;
  longlong local_58;
  longlong local_50;
  longlong local_48 [2];
  
  lVar6 = *(longlong *)(param_1 + 0xf8);
  lVar8 = (longlong)*(int *)(param_1 + 0x100) * 0x40 + lVar6;
  if (lVar6 != lVar8) {
    piVar10 = (int *)(lVar6 + 0x30);
    do {
      if ((param_3 == '\0') || ((char)piVar10[2] != '\0')) {
        plVar11 = *(longlong **)(piVar10 + -6);
        plVar9 = plVar11 + (longlong)piVar10[-4] * 4;
        for (; plVar11 != plVar9; plVar11 = plVar11 + 4) {
          local_58 = *plVar11;
          local_50 = plVar11[1];
          FString::FString(local_48,plVar11 + 2);
          if (local_50 != 0) {
            lVar3 = *param_2;
            lVar4 = param_2[1];
            for (lVar7 = lVar3; lVar7 != lVar3 + (longlong)(int)lVar4 * 0x18; lVar7 = lVar7 + 0x18)
            {
              cVar5 = FSoftObjectPath::operator==(lVar7,&local_50);
              if (cVar5 != '\0') {
                if ((int)((lVar7 - lVar3) / 0x18) != -1) goto LAB_142d194a3;
                break;
              }
            }
            iVar2 = (int)param_2[1];
            *(int *)(param_2 + 1) = iVar2 + 1;
            if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(param_2,iVar2);
            }
            plVar1 = (longlong *)(*param_2 + (longlong)iVar2 * 0x18);
            *plVar1 = local_50;
            FString::FString(plVar1 + 1,local_48);
          }
LAB_142d194a3:
          if (local_48[0] != 0) {
            FMemory::Free();
          }
        }
        plVar9 = *(longlong **)(piVar10 + -2);
        plVar11 = plVar9 + (longlong)*piVar10 * 3;
        for (; plVar9 != plVar11; plVar9 = plVar9 + 3) {
          local_58 = *plVar9;
          FString::FString(&local_50,plVar9 + 1);
          if (local_58 != 0) {
            lVar3 = *param_2;
            lVar4 = param_2[1];
            for (lVar7 = lVar3; lVar7 != lVar3 + (longlong)(int)lVar4 * 0x18; lVar7 = lVar7 + 0x18)
            {
              cVar5 = FSoftObjectPath::operator==(lVar7,&local_58);
              if (cVar5 != '\0') {
                if ((int)((lVar7 - lVar3) / 0x18) != -1) goto LAB_142d195b2;
                break;
              }
            }
            iVar2 = (int)param_2[1];
            *(int *)(param_2 + 1) = iVar2 + 1;
            if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(param_2,iVar2);
            }
            plVar1 = (longlong *)(*param_2 + (longlong)iVar2 * 0x18);
            *plVar1 = local_58;
            FString::FString(plVar1 + 1,&local_50);
          }
LAB_142d195b2:
          if (local_50 != 0) {
            FMemory::Free();
          }
        }
      }
      lVar6 = lVar6 + 0x40;
      piVar10 = piVar10 + 0x10;
    } while (lVar6 != lVar8);
  }
  return;
}



// FUNCTION 142d19640 FUN_142d19640 body=330 status=ok
// SIG undefined FUN_142d19640(void)

longlong FUN_142d19640(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (lVar3 != 0) {
    lVar2 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return lVar3;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x270);
  if (lVar3 != 0) {
    lVar2 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return lVar3;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x278);
  if (lVar3 != 0) {
    lVar2 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return lVar3;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 != 0) {
    lVar2 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return lVar3;
    }
  }
  if ((*(longlong *)(param_1 + 0x10) == 0) ||
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x7a0), lVar3 == 0)) {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 142d19790 FUN_142d19790 body=111 status=ok
// SIG undefined FUN_142d19790(void)

longlong FUN_142d19790(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x2a0) == 0) {
    return *(longlong *)(param_1 + 0x28);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x118);
  if (lVar1 != 0) {
    lVar3 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 142d19800 FUN_142d19800 body=111 status=ok
// SIG undefined FUN_142d19800(void)

longlong FUN_142d19800(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x2a8) == 0) {
    return *(longlong *)(param_1 + 0x28);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2a8) + 0x118);
  if (lVar1 != 0) {
    lVar3 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 142d19870 FUN_142d19870 body=364 status=ok
// SIG undefined FUN_142d19870(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142d19870(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulonglong uVar6;
  
  if (*(int *)(param_1 + 0x670) == 0) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar1 + 0x38) < DAT_146866c88) &&
       (_Init_thread_header(&DAT_146866c88), DAT_146866c88 == -1)) {
      DAT_146866c70 = 0xff;
      _DAT_146866c78 = 0;
      DAT_146866c80._0_4_ = 0;
      _Init_thread_footer(&DAT_146866c88);
    }
    puVar5 = &DAT_146866c70;
    if (*(int *)(param_1 + 0x680) < 1) {
      puVar4 = &DAT_146866c70;
    }
    else {
      puVar4 = (undefined *)(*(longlong *)(param_1 + 0x678) + 0x60);
    }
    cVar2 = FUN_142d52a00(puVar4);
    if (cVar2 != '\0') {
      if ((*(int *)(lVar1 + 0x38) < DAT_146866c88) &&
         (_Init_thread_header(&DAT_146866c88), DAT_146866c88 == -1)) {
        DAT_146866c70 = 0xff;
        _DAT_146866c78 = 0;
        DAT_146866c80._0_4_ = 0;
        _Init_thread_footer(&DAT_146866c88);
      }
      if (0 < *(int *)(param_1 + 0x680)) {
        puVar5 = (undefined *)(*(longlong *)(param_1 + 0x678) + 0x60);
      }
      uVar3 = FUN_142d52a20(puVar5);
      uVar3 = FArchive::operator<<(uVar3);
      uVar6 = FUN_142d5fed0(uVar3);
      return uVar6;
    }
  }
  else if (*(int *)(param_1 + 0x670) == 1) {
    return (ulonglong)*(uint *)(param_1 + 0x6d4);
  }
  return 0xbf800000;
}



// FUNCTION 142d199e0 FUN_142d199e0 body=90 status=ok
// SIG undefined FUN_142d199e0(void)

float FUN_142d199e0(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_142d19870();
  if (0.0 < fVar1) {
    fVar2 = (float)FUN_142d1b990(param_1);
    if (0.0 < fVar2) {
      return fVar1 / fVar2;
    }
  }
  return 0.0;
}



// FUNCTION 142d19a40 FUN_142d19a40 body=83 status=ok
// SIG undefined FUN_142d19a40(void)

undefined8 FUN_142d19a40(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined4 local_18;
  
  local_28[0] = 0xff;
  local_20 = 0;
  local_18 = 0;
  FUN_142d1bf20(param_1,local_28);
  cVar1 = FUN_142d52a00(local_28);
  if (cVar1 != '\0') {
    uVar2 = FUN_142d52a20(local_28);
    uVar2 = FArchive::operator<<(uVar2);
    uVar2 = FUN_142d5fed0(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 142d19aa0 FUN_142d19aa0 body=312 status=ok
// SIG undefined FUN_142d19aa0(void)

undefined8 * FUN_142d19aa0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  void *_Src;
  int local_res8 [2];
  
  plVar1 = (longlong *)(param_1 + 0x348);
  piVar3 = (int *)TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
                  ::FindId(plVar1,local_res8);
  if (*piVar3 == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146b31b90) && (_Init_thread_header(), DAT_146b31b90 == -1)) {
      atexit((_func_5014 *)&LAB_143ec01c0);
      _Init_thread_footer();
    }
    *param_2 = 0;
    iVar2 = DAT_146b31b88;
    _Src = DAT_146b31b80;
    *(int *)(param_2 + 1) = DAT_146b31b88;
    if (iVar2 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      return param_2;
    }
  }
  else {
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(plVar1,local_res8,param_3);
    lVar4 = 0;
    if (local_res8[0] != -1) {
      lVar4 = (longlong)local_res8[0] * 0x20 + *plVar1;
    }
    *param_2 = 0;
    iVar2 = *(int *)(lVar4 + 0x10);
    _Src = *(void **)(lVar4 + 8);
    *(int *)(param_2 + 1) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      return param_2;
    }
  }
  TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar2,0);
  _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar2 << 3);
  return param_2;
}



// FUNCTION 142d19be0 FUN_142d19be0 body=260 status=ok
// SIG undefined FUN_142d19be0(void)

longlong * FUN_142d19be0(int param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong local_28;
  ulonglong local_20;
  int local_18;
  
  if (param_1 == 0) {
    return (longlong *)0x0;
  }
  local_18 = -1;
  local_28 = 0;
  local_20 = 0;
  uVar3 = FUN_142e498a0();
  FUN_1417a5560(uVar3,&local_28,1,0x10,0);
  uVar4 = local_20 & 0xffffffff;
  do {
    local_18 = local_18 + 1;
    lVar5 = local_28;
    if ((int)local_20 <= local_18) break;
  } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
  do {
    if ((local_18 < 0) || ((int)uVar4 <= local_18)) {
      if (lVar5 == 0) {
        return (longlong *)0x0;
      }
      FMemory::Free(lVar5);
      return (longlong *)0x0;
    }
    plVar1 = *(longlong **)(lVar5 + (longlong)local_18 * 8);
    if (plVar1 != (longlong *)0x0) {
      iVar2 = (**(code **)(*plVar1 + 0x278))(plVar1);
      if (iVar2 == param_1) {
        if (local_28 != 0) {
          FMemory::Free();
        }
        return plVar1;
      }
      uVar4 = local_20 & 0xffffffff;
      lVar5 = local_28;
    }
    do {
      local_18 = local_18 + 1;
      if ((int)uVar4 <= local_18) break;
    } while (*(longlong *)(lVar5 + (longlong)local_18 * 8) == 0);
  } while( true );
}



// FUNCTION 142d19cf0 FUN_142d19cf0 body=114 status=ok
// SIG undefined FUN_142d19cf0(void)

undefined8 FUN_142d19cf0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  fVar4 = 0.0;
  plVar1 = (longlong *)FUN_142d29780(*(undefined8 *)(param_3 + 0x488));
  uVar3 = 0;
  if (((plVar1 == (longlong *)0x0) ||
      (fVar2 = (float)(**(code **)(*plVar1 + 0x408))(plVar1), fVar2 <= 0.0)) ||
     (fVar4 = (float)param_2 / fVar2, uVar3 = (int)((ulonglong)param_2 >> 0x20), 0.0 <= fVar4)) {
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
  }
  else {
    fVar4 = 0.0;
    uVar3 = 0;
  }
  return CONCAT44(uVar3,fVar4);
}



// FUNCTION 142d19d70 FUN_142d19d70 body=56 status=ok
// SIG undefined FUN_142d19d70(void)

undefined4 FUN_142d19d70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 600);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x260) * 2;
  while( true ) {
    if (plVar1 == plVar2) {
      return 0;
    }
    if (*plVar1 == param_2) break;
    plVar1 = plVar1 + 2;
  }
  return (int)plVar1[1];
}



// FUNCTION 142d19db0 FUN_142d19db0 body=27 status=ok
// SIG undefined FUN_142d19db0(void)

longlong FUN_142d19db0(longlong param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x38))) {
    return (longlong)param_2 * 0x270 + *(longlong *)(param_1 + 0x30);
  }
  return 0;
}



// FUNCTION 142d19dd0 FUN_142d19dd0 body=88 status=ok
// SIG undefined FUN_142d19dd0(void)

undefined8 FUN_142d19dd0(longlong param_1)

{
  char cVar1;
  
  if (((((*(byte *)(param_1 + 0x7e8) & 1) != 0) && (*(longlong *)(param_1 + 0x818) != 0)) &&
      (*(longlong **)(param_1 + 0x118) != (longlong *)0x0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x818) + 0x118) != 0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x528))();
    if (cVar1 != '\0') {
      return *(undefined8 *)(param_1 + 0x818);
    }
  }
  return 0;
}



// FUNCTION 142d19e30 FUN_142d19e30 body=42 status=ok
// SIG undefined FUN_142d19e30(void)

undefined8 FUN_142d19e30(longlong param_1)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0x7e8) & 2) != 0) {
    lVar1 = FUN_142d19dd0();
    if (lVar1 != 0) {
      return *(undefined8 *)(lVar1 + 0x118);
    }
  }
  return 0;
}



// FUNCTION 142d19e60 FUN_142d19e60 body=1113 status=ok
// SIG undefined FUN_142d19e60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d19e60(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,float *param_6,undefined8 *param_7,float *param_8,
                  undefined8 param_9,float *param_10,undefined8 *param_11)

{
  float fVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  float *pfVar8;
  undefined8 *puVar9;
  undefined1 auStack_3b8 [32];
  float *local_398;
  float *local_390;
  float *local_388;
  float *local_380;
  float local_378;
  uint uStack_374;
  float *local_370;
  undefined8 local_368;
  undefined8 *local_360;
  float local_358;
  float local_354;
  float local_350;
  float local_348;
  float local_344;
  float local_340;
  undefined8 local_338;
  undefined1 local_328;
  char cStack_327;
  undefined2 uStack_326;
  undefined4 uStack_324;
  undefined8 uStack_320;
  undefined4 local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  undefined8 local_308;
  undefined1 auStack_300 [8];
  undefined4 local_2f8;
  float fStack_2f4;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined8 local_290;
  undefined4 local_288;
  undefined2 local_284;
  undefined1 local_282;
  undefined4 local_280;
  undefined1 local_27c;
  undefined4 local_278;
  undefined2 local_274;
  longlong local_250;
  undefined8 local_248;
  longlong local_230;
  undefined8 local_228;
  byte local_218 [12];
  undefined4 local_20c;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  longlong local_130;
  undefined1 local_ac [36];
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_3b8;
  local_360 = param_7;
  local_370 = param_8;
  local_368 = param_9;
  local_398 = (float *)param_2;
  local_338 = param_3;
  FUN_142d14270(param_1,param_10,param_3,param_6);
  puVar6 = local_360;
  local_380 = param_10;
  local_388 = local_370;
  local_390 = (float *)local_360;
  local_398 = param_6;
  uStack_324 = 0;
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_328,param_4,param_5);
  pfVar8 = local_370;
  if (*(char *)((longlong)param_1 + 0x31) != '\0') {
    _guard_xfg_dispatch_icall_nop(local_218,0,0x90);
    local_20c = 0x3f800000;
    local_290 = 0;
    local_298 = 0;
    local_250 = 0;
    local_248 = 0;
    local_230 = 0;
    local_228 = 0;
    local_288 = 0x10000;
    local_280 = 0;
    _local_378 = 0;
    local_284 = 0;
    local_274 = 0x101;
    local_27c = 0;
    local_282 = 0;
    local_278 = 0;
    local_398 = param_6;
    FUN_142d17210(param_1,&local_298,0,0);
    pfVar8 = local_370;
    local_390 = (float *)&local_298;
    local_340 = fStack_30c + *(float *)(param_1 + 7);
    local_350 = fStack_30c - *(float *)((longlong)param_1 + 0x34);
    local_398 = &local_378;
    local_348 = fStack_314;
    local_344 = fStack_310;
    local_358 = fStack_314;
    local_354 = fStack_310;
    local_282 = 1;
    uVar3 = (ulonglong)_local_378 >> 0x20;
    _local_378 = CONCAT44((uint)uVar3 & 0xffffff00,3);
    UWorld::LineTraceSingleByObjectType(local_370,local_218,&local_348,&local_358);
    if (local_230 != 0) {
      FMemory::Free();
    }
    if (local_250 != 0) {
      FMemory::Free();
    }
    if ((local_218[0] & 1) != 0) {
      fStack_310 = local_1f4;
      fStack_314 = local_1f8;
      if (((local_1e0 != 0.0) || (local_1dc != 0.0)) || (local_1d8 != 0.0)) {
        fVar1 = *(float *)((longlong)param_1 + 0x3c);
        local_1f0 = local_1d8 * fVar1 + local_1f0;
        fStack_314 = local_1e0 * fVar1 + local_1f8;
        fStack_310 = local_1dc * fVar1 + local_1f4;
      }
      fStack_2f4 = fStack_2f4 - (fStack_30c - local_1f0);
      fStack_30c = local_1f0;
    }
  }
  if (param_11 != (undefined8 *)0x0) {
    *param_11 = CONCAT44(uStack_324,CONCAT22(uStack_326,CONCAT11(cStack_327,local_328)));
    param_11[1] = uStack_320;
    param_11[2] = CONCAT44(fStack_314,local_318);
    param_11[3] = CONCAT44(fStack_30c,fStack_310);
    param_11[4] = local_308;
    param_11[5] = auStack_300;
    param_11[6] = CONCAT44(fStack_2f4,local_2f8);
    param_11[7] = uStack_2f0;
    param_11[8] = local_2e8;
    param_11[9] = uStack_2e0;
    param_11[10] = local_2d8;
    param_11[0xb] = uStack_2d0;
    param_11[0xc] = local_2c8;
    param_11[0xd] = uStack_2c0;
    param_11[0xe] = local_2b8;
    param_11[0xf] = uStack_2b0;
    *(undefined4 *)(param_11 + 0x10) = local_2a8;
    *(undefined4 *)((longlong)param_11 + 0x84) = uStack_2a4;
    *(undefined4 *)(param_11 + 0x11) = uStack_2a0;
    *(undefined4 *)((longlong)param_11 + 0x8c) = uStack_29c;
  }
  uVar7 = local_368;
  if ((cStack_327 == '\0') && ((*(byte *)((longlong)param_1 + 0x2c) & 8) != 0)) {
    _guard_xfg_dispatch_icall_nop(local_218,0,400);
    uVar7 = local_368;
    local_390 = (float *)(auStack_300 + 4);
    local_388 = param_6;
    local_398 = &fStack_314;
    puVar9 = puVar6 + 0x47;
    if (puVar6 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    local_380 = pfVar8;
    FUN_142d18d50(param_1,local_218,puVar9,local_368);
    lVar4 = FWeakObjectPtr::Get(local_ac);
    if (lVar4 != 0) {
      iVar2 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<400,8>_>,FDefaultAllocator>::
        ResizeGrow(param_2,iVar2);
      }
      FUN_142d0a770((longlong)iVar2 * 400 + *param_2,local_218);
      puVar6 = local_360;
    }
    if (local_130 != 0) {
      FMemory::Free();
    }
  }
  uVar5 = FUN_142d29780(local_338);
  local_380 = (float *)&local_328;
  local_388 = param_6;
  local_398 = (float *)uVar7;
  local_390 = pfVar8;
  FUN_142d176e0(param_1,param_2,uVar5,puVar6);
  return;
}



// FUNCTION 142d1a2c0 FUN_142d1a2c0 body=76 status=ok
// SIG undefined FUN_142d1a2c0(void)

ulonglong FUN_142d1a2c0(longlong param_1,int param_2,undefined4 *param_3)

{
  longlong lVar1;
  ulonglong in_RAX;
  longlong lVar2;
  
  if (param_2 < *(int *)(param_1 + 0x2d0)) {
    lVar2 = (longlong)param_2 * 0x34;
    *param_3 = *(undefined4 *)(*(longlong *)(param_1 + 0x2c8) + 0x1c + lVar2);
    param_3[1] = *(undefined4 *)(*(longlong *)(param_1 + 0x2c8) + 0x20 + lVar2);
    lVar1 = *(longlong *)(param_1 + 0x2c8);
    param_3[2] = *(undefined4 *)(lVar1 + 0x24 + lVar2);
    param_3[3] = 0x3f800000;
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142d1a310 FUN_142d1a310 body=76 status=ok
// SIG undefined FUN_142d1a310(void)

ulonglong FUN_142d1a310(longlong param_1,int param_2,undefined4 *param_3)

{
  longlong lVar1;
  ulonglong in_RAX;
  longlong lVar2;
  
  if (param_2 < *(int *)(param_1 + 0x2d0)) {
    lVar2 = (longlong)param_2 * 0x34;
    *param_3 = *(undefined4 *)(*(longlong *)(param_1 + 0x2c8) + 0x28 + lVar2);
    param_3[1] = *(undefined4 *)(*(longlong *)(param_1 + 0x2c8) + 0x2c + lVar2);
    lVar1 = *(longlong *)(param_1 + 0x2c8);
    param_3[2] = *(undefined4 *)(lVar1 + 0x30 + lVar2);
    param_3[3] = 0x3f800000;
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142d1a360 FUN_142d1a360 body=329 status=ok
// SIG undefined FUN_142d1a360(void)

undefined8 * FUN_142d1a360(longlong param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48;
  undefined4 local_40;
  undefined1 local_3c [12];
  longlong local_30 [3];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  longlong lVar5;
  
  plVar8 = *(longlong **)(param_1 + 0x118);
  *param_2 = 0x3f800000;
  *(undefined4 *)(param_2 + 1) = 0;
  if (plVar8 != (longlong *)0x0) {
    lVar4 = FUN_1429d7ab0();
    iVar3 = *(int *)(lVar4 + 0x90);
    lVar5 = (longlong)iVar3;
    if ((*(int *)(plVar8[2] + 0x90) < iVar3) ||
       (lVar5 = *(longlong *)(plVar8[2] + 0x88),
       *(longlong *)(lVar5 + (longlong)iVar3 * 8) != lVar4 + 0x88)) {
      uVar2 = (uint)lVar5 & 0xffffff00;
    }
    else {
      uVar2 = (uint)CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
    }
    if ((char)uVar2 == '\0') {
      lVar5 = plVar8[0x2d];
      if (lVar5 == 0) {
        uVar9 = (undefined4)DAT_1468b5da0;
        uVar10 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
        local_50 = DAT_1468b5da8;
      }
      else {
        local_18 = *(float *)(lVar5 + 0x210);
        fStack_14 = *(float *)(lVar5 + 0x214);
        fStack_10 = *(float *)(lVar5 + 0x218);
        fStack_c = *(float *)(lVar5 + 0x21c);
        auVar1._4_4_ = -(uint)(*(float *)(lVar5 + 0x254) != fStack_14);
        auVar1._0_4_ = -(uint)(*(float *)(lVar5 + 0x250) != local_18);
        auVar1._8_4_ = -(uint)(*(float *)(lVar5 + 600) != fStack_10);
        auVar1._12_4_ = -(uint)(*(float *)(lVar5 + 0x25c) != fStack_c);
        iVar3 = movmskps(uVar2,auVar1);
        if (iVar3 != 0) {
          *(float *)(lVar5 + 0x250) = local_18;
          *(float *)(lVar5 + 0x254) = fStack_14;
          *(float *)(lVar5 + 600) = fStack_10;
          *(float *)(lVar5 + 0x25c) = fStack_c;
          puVar6 = (undefined8 *)FQuat::Rotator(&local_18,local_3c);
          *(undefined8 *)(lVar5 + 0x260) = *puVar6;
          *(undefined4 *)(lVar5 + 0x268) = *(undefined4 *)(puVar6 + 1);
        }
        uVar9 = (undefined4)*(undefined8 *)(lVar5 + 0x260);
        uVar10 = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x260) >> 0x20);
        local_50 = *(undefined4 *)(lVar5 + 0x268);
      }
      plVar8 = local_30;
      local_58 = CONCAT44(uVar10,uVar9);
      plVar7 = &local_48;
      local_48 = local_58;
      local_40 = local_50;
    }
    else {
      (**(code **)(*plVar8 + 0x788))(plVar8,&local_58);
      plVar8 = &local_48;
      local_58 = (ulonglong)local_58._4_4_ << 0x20;
      plVar7 = &local_58;
    }
    puVar6 = (undefined8 *)FRotator::Vector(plVar7,plVar8);
    uVar9 = *(undefined4 *)(puVar6 + 1);
    *param_2 = *puVar6;
    *(undefined4 *)(param_2 + 1) = uVar9;
  }
  return param_2;
}



// FUNCTION 142d1a4b0 FUN_142d1a4b0 body=381 status=ok
// SIG undefined FUN_142d1a4b0(void)

longlong * FUN_142d1a4b0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (*(longlong *)(param_1 + 0x290) != 0) {
    *(undefined4 *)(param_2 + 1) = 1;
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,0);
    *(undefined8 *)*param_2 = *(undefined8 *)(param_1 + 0x290);
  }
  if (*(longlong *)(param_1 + 0x298) != 0) {
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x30);
  if (plVar2 != (longlong *)0x0) {
    uVar3 = FUN_142e0a580();
    lVar4 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
    if (lVar4 != 0) {
      plVar2 = (longlong *)*param_2;
      iVar1 = (int)param_2[1];
      for (plVar5 = plVar2; plVar5 != plVar2 + iVar1; plVar5 = plVar5 + 1) {
        if (*plVar5 == lVar4) {
          if ((int)((longlong)plVar5 - (longlong)plVar2 >> 3) != -1) goto LAB_142d1a58f;
          break;
        }
      }
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(longlong *)((longlong)iVar1 * 8 + *param_2) = lVar4;
    }
  }
LAB_142d1a58f:
  plVar2 = *(longlong **)(param_1 + 0x280);
  if ((*(longlong **)(param_1 + 0x30) != plVar2) && (plVar2 != (longlong *)0x0)) {
    uVar3 = FUN_142e0a580();
    lVar4 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
    if (lVar4 != 0) {
      plVar2 = (longlong *)*param_2;
      iVar1 = (int)param_2[1];
      for (plVar5 = plVar2; plVar5 != plVar2 + iVar1; plVar5 = plVar5 + 1) {
        if (*plVar5 == lVar4) {
          if ((int)((longlong)plVar5 - (longlong)plVar2 >> 3) != -1) {
            return param_2;
          }
          break;
        }
      }
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(longlong *)((longlong)iVar1 * 8 + *param_2) = lVar4;
    }
  }
  return param_2;
}



// FUNCTION 142d1a630 FUN_142d1a630 body=135 status=ok
// SIG undefined FUN_142d1a630(void)

undefined8 * FUN_142d1a630(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    *(undefined4 *)(param_2 + 1) = 1;
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,0);
    *(undefined8 *)*param_2 = *(undefined8 *)(param_1 + 0x48);
  }
  if (*(longlong *)(param_1 + 0x270) != 0) {
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2);
  }
  if (*(longlong *)(param_1 + 0x278) != 0) {
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2);
  }
  if (*(longlong *)(param_1 + 0x288) != 0) {
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2);
  }
  return param_2;
}



// FUNCTION 142d1a6c0 FUN_142d1a6c0 body=58 status=ok
// SIG undefined FUN_142d1a6c0(void)

longlong FUN_142d1a6c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x2a0);
  lVar1 = lVar3 + (longlong)*(int *)(param_1 + 0x2a8) * 0x28;
  while( true ) {
    if (lVar3 == lVar1) {
      return 0;
    }
    lVar2 = *(longlong *)(lVar3 + 0x10);
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xf0) == param_2)) break;
    lVar3 = lVar3 + 0x28;
  }
  return lVar2;
}



// FUNCTION 142d1a700 FUN_142d1a700 body=183 status=ok
// SIG undefined FUN_142d1a700(void)

ulonglong FUN_142d1a700(longlong param_1,ulonglong param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  
  puVar3 = *(ulonglong **)(param_1 + 0x678);
  uVar1 = (ulonglong)*(int *)(param_1 + 0x680);
  puVar2 = puVar3 + uVar1 * 0xf;
  while( true ) {
    if (puVar3 == puVar2) {
      return uVar1 & 0xffffffffffffff00;
    }
    uVar1 = *puVar3;
    if (uVar1 == param_2) break;
    puVar3 = puVar3 + 0xf;
  }
  *param_3 = uVar1;
  param_3[1] = puVar3[1];
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_3 + 2,puVar3 + 2);
  *(byte *)(param_3 + 4) = (byte)param_3[4] ^ ((byte)puVar3[4] ^ (byte)param_3[4]) & 1;
  *(byte *)(param_3 + 4) = (byte)param_3[4] ^ ((byte)puVar3[4] ^ (byte)param_3[4]) & 2;
  uVar1 = puVar3[6];
  param_3[5] = puVar3[5];
  param_3[6] = uVar1;
  uVar1 = puVar3[8];
  param_3[7] = puVar3[7];
  param_3[8] = uVar1;
  uVar1 = puVar3[10];
  param_3[9] = puVar3[9];
  param_3[10] = uVar1;
  param_3[0xb] = puVar3[0xb];
  uVar1 = puVar3[0xd];
  param_3[0xc] = puVar3[0xc];
  param_3[0xd] = uVar1;
  param_3[0xe] = puVar3[0xe];
  return 1;
}



// FUNCTION 142d1a7d0 FUN_142d1a7d0 body=124 status=ok
// SIG undefined FUN_142d1a7d0(void)

float FUN_142d1a7d0(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)FUN_142c98860(param_1 + 0xd0);
  fVar2 = (float)FUN_142c98860(param_1 + 0x60,param_2);
  fVar3 = (float)FUN_142c98860(param_1 + 0x98,param_2);
  return fVar3 * 0.33333334 + fVar2 * 0.33333334 + fVar1 * 0.33333334;
}



// FUNCTION 142d1a850 FUN_142d1a850 body=68 status=ok
// SIG undefined FUN_142d1a850(void)

float FUN_142d1a850(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_142c98860(param_1 + 0x98);
  fVar2 = (float)FUN_142c98860(param_1 + 0x60,param_2);
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  return fVar2;
}



// FUNCTION 142d1a8a0 FUN_142d1a8a0 body=320 status=ok
// SIG undefined FUN_142d1a8a0(void)

undefined8 * FUN_142d1a8a0(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  void *_Src;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  void **ppvVar6;
  void *pvVar7;
  void *local_38;
  int local_30;
  undefined4 uStack_2c;
  void *local_28;
  undefined8 local_20;
  
  pvVar7 = (void *)0x0;
  if (*(int *)(param_1 + 0x670) == 0) {
    if ((-1 < param_3) && (param_3 < *(int *)(param_1 + 0x680))) {
      lVar5 = *(longlong *)((longlong)param_3 * 0x78 + *(longlong *)(param_1 + 0x678));
      goto LAB_142d1a907;
    }
  }
  else if (*(int *)(param_1 + 0x670) == 1) {
    lVar5 = *(longlong *)(param_1 + 0x6c0);
LAB_142d1a907:
    if (lVar5 != 0) {
      iVar1 = *(int *)(lVar5 + 0x48);
      _Src = *(void **)(lVar5 + 0x40);
      local_38 = (void *)0x0;
      local_30 = iVar1;
      if (iVar1 == 0) {
        ppvVar6 = &local_38;
        uStack_2c = 0;
        bVar4 = true;
        bVar3 = false;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,iVar1,0);
        pvVar7 = local_38;
        _guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)iVar1 * 2);
        ppvVar6 = &local_38;
        bVar4 = true;
        bVar3 = false;
      }
      goto LAB_142d1a987;
    }
  }
  local_20 = 0;
  ppvVar6 = &local_28;
  bVar4 = false;
  bVar3 = true;
  pvVar7 = (void *)0x0;
LAB_142d1a987:
  *ppvVar6 = (void *)0x0;
  uVar2 = *(undefined4 *)(ppvVar6 + 1);
  *param_2 = pvVar7;
  *(undefined4 *)(param_2 + 1) = uVar2;
  ppvVar6[1] = (void *)0x0;
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)ppvVar6 + 0xc);
  if (bVar3) {
    if (local_28 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar4) && (local_38 != (void *)0x0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142d1a9e0 FUN_142d1a9e0 body=148 status=ok
// SIG undefined FUN_142d1a9e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142d1a9e0(longlong param_1,undefined8 *param_2,int param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (*(int *)(param_1 + 0x670) == 0) {
    if ((-1 < param_3) && (param_3 < *(int *)(param_1 + 0x680))) {
      lVar2 = *(longlong *)((longlong)param_3 * 0x78 + *(longlong *)(param_1 + 0x678));
      goto LAB_142d1aa2e;
    }
  }
  else if (*(int *)(param_1 + 0x670) == 1) {
    lVar2 = *(longlong *)(param_1 + 0x6c0);
LAB_142d1aa2e:
    if (lVar2 != 0) {
      local_28 = *(undefined8 *)(lVar2 + 0x30);
      uStack_20 = *(undefined8 *)(lVar2 + 0x38);
      bVar1 = true;
      goto LAB_142d1aa47;
    }
  }
  bVar1 = false;
LAB_142d1aa47:
  *(undefined1 *)(param_2 + 2) = 0;
  if (bVar1) {
    *param_2 = local_28;
    param_2[1] = uStack_20;
    *(undefined1 *)(param_2 + 2) = 1;
  }
  return param_2;
}



// FUNCTION 142d1aa80 FUN_142d1aa80 body=206 status=ok
// SIG undefined FUN_142d1aa80(void)

ulonglong FUN_142d1aa80(longlong param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if (*(int *)(param_1 + 0x670) == 0) {
    if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x680))) {
      cVar1 = FUN_142d52a00(*(longlong *)(param_1 + 0x678) + 0x60 + (longlong)param_2 * 0x78);
      if (cVar1 != '\0') {
        uVar2 = FUN_142d52a20(*(longlong *)(param_1 + 0x678) + 0x60 + (longlong)param_2 * 0x78);
        uVar2 = FArchive::operator<<(uVar2);
        uVar3 = FUN_142d5fea0(uVar2);
        return uVar3;
      }
      return 0xbf800000;
    }
  }
  else if ((*(int *)(param_1 + 0x670) == 1) && (0.0 < *(float *)(param_1 + 0x6cc))) {
    return (ulonglong)(uint)(*(float *)(param_1 + 0x6d4) / *(float *)(param_1 + 0x6cc));
  }
  return 0xbf800000;
}



// FUNCTION 142d1ab50 FUN_142d1ab50 body=48 status=ok
// SIG undefined FUN_142d1ab50(void)

undefined8 FUN_142d1ab50(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x818);
  while ((lVar1 = lVar2, lVar1 != 0 && ((*(byte *)(param_1 + 0x7e8) & 2) != 0))) {
    lVar2 = *(longlong *)(lVar1 + 0x818);
    param_1 = lVar1;
  }
  return *(undefined8 *)(param_1 + 0x810);
}



// FUNCTION 142d1ab80 FUN_142d1ab80 body=785 status=ok
// SIG undefined FUN_142d1ab80(void)

void FUN_142d1ab80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14233e8d0();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146b31ba0) && (_Init_thread_header(&DAT_146b31ba0), DAT_146b31ba0 == -1)) {
    uVar1 = UScrollBox::GetPrivateStaticClass();
    UScrollBox::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"SimpleHealthInformation",1);
    DAT_146b31b98 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b31ba0);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b31b98 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b31b98 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b31b98 + 0x30));
  }
  if ((*piVar5 < DAT_146b31bb0) && (_Init_thread_header(&DAT_146b31bb0), DAT_146b31bb0 == -1)) {
    uVar1 = UScrollBox::GetPrivateStaticClass();
    UScrollBox::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"HealthInformation",1);
    DAT_146b31ba8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b31bb0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b31ba8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b31ba8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b31ba8 + 0x30));
  }
  if ((*piVar5 < DAT_146b31bc0) && (_Init_thread_header(&DAT_146b31bc0), DAT_146b31bc0 == -1)) {
    uVar1 = UScrollBox::GetPrivateStaticClass();
    UScrollBox::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bCurrentlyDead",1);
    DAT_146b31bb8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b31bc0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b31bb8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b31bb8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b31bb8 + 0x30));
  }
  if ((*piVar5 < DAT_146b31bd0) && (_Init_thread_header(&DAT_146b31bd0), DAT_146b31bd0 == -1)) {
    uVar1 = UScrollBox::GetPrivateStaticClass();
    UScrollBox::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"DeathHitReaction",1);
    DAT_146b31bc8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b31bd0);
  }
  if (0 < *(int *)(DAT_146b31bc8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b31bc8 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b31bc8 + 0x30));
  }
  return;
}



// FUNCTION 142d1aea0 FUN_142d1aea0 body=433 status=ok
// SIG undefined FUN_142d1aea0(void)

void FUN_142d1aea0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14233e8d0();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146b31b68) && (_Init_thread_header(&DAT_146b31b68), DAT_146b31b68 == -1)) {
    uVar1 = FUN_142e43690();
    FUN_142e43690();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"CustomizationList",1);
    DAT_146b31b60 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b31b68);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b31b60 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b31b60 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b31b60 + 0x30));
  }
  if ((*piVar5 < DAT_146b31b78) && (_Init_thread_header(&DAT_146b31b78), DAT_146b31b78 == -1)) {
    uVar1 = FUN_142e43690();
    FUN_142e43690();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"CustomColorSelections",1);
    DAT_146b31b70 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b31b78);
  }
  if (0 < *(int *)(DAT_146b31b70 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b31b70 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b31b70 + 0x30));
  }
  return;
}



// FUNCTION 142d1b060 FUN_142d1b060 body=1774 status=ok
// SIG undefined FUN_142d1b060(void)

longlong FUN_142d1b060(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  wchar_t wVar3;
  longlong *plVar4;
  void *_Src;
  bool bVar5;
  bool bVar6;
  wint_t wVar7;
  wint_t wVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  wchar_t **ppwVar12;
  int iVar13;
  wchar_t *pwVar14;
  wint_t *pwVar15;
  wchar_t *pwVar16;
  longlong lVar17;
  int iVar18;
  wchar_t *_Src_00;
  int local_res18 [2];
  int local_res20 [2];
  wchar_t *local_b0;
  int local_a8;
  int local_a4;
  wchar_t *local_a0;
  int local_98;
  undefined4 local_94;
  wchar_t *local_90;
  int local_88;
  undefined4 local_84;
  wchar_t *local_80;
  int local_78;
  undefined4 uStack_74;
  wchar_t *local_70;
  undefined8 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  undefined4 local_54;
  
  _Src_00 = (wchar_t *)0x0;
  lVar9 = FInternationalization::Get();
  plVar4 = *(longlong **)(lVar9 + 0x30);
  lVar9 = *(longlong *)(lVar9 + 0x28);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar17 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar18 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  if (lVar9 == 0) {
    ppwVar12 = &local_70;
    local_70 = (wchar_t *)0x0;
    local_68 = 0;
    bVar6 = false;
    bVar5 = true;
    pwVar14 = local_90;
  }
  else {
    puVar10 = (undefined8 *)FCulture::GetName(lVar9);
    local_90 = (wchar_t *)0x0;
    iVar18 = *(int *)(puVar10 + 1);
    _Src = (void *)*puVar10;
    local_88 = iVar18;
    if (iVar18 == 0) {
      bVar6 = true;
      bVar5 = false;
      local_84 = 0;
      ppwVar12 = &local_90;
      pwVar14 = _Src_00;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_90,iVar18,0);
      pwVar14 = local_90;
      _guard_xfg_dispatch_icall_nop(local_90,_Src,(longlong)iVar18 * 2);
      ppwVar12 = &local_90;
      bVar6 = true;
      bVar5 = false;
    }
  }
  pwVar16 = local_70;
  local_a8 = *(int *)(ppwVar12 + 1);
  lVar9 = (longlong)local_a8;
  local_b0 = (wchar_t *)0x0;
  if (local_a8 == 0) {
    local_a4 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b0,local_a8,0);
    _Src_00 = local_b0;
    _guard_xfg_dispatch_icall_nop(local_b0,*ppwVar12,lVar9 * 2);
  }
  iVar18 = local_a8;
  if ((bVar5) && (pwVar16 != (wchar_t *)0x0)) {
    FMemory::Free(pwVar16);
  }
  if ((bVar6) && (pwVar14 != (wchar_t *)0x0)) {
    FMemory::Free(pwVar14);
  }
  pwVar15 = &DAT_1458612d0;
  pwVar14 = L"";
  if (iVar18 != 0) {
    pwVar14 = _Src_00;
  }
  do {
    wVar7 = *(wint_t *)((longlong)(pwVar14 + -0xa2c30968) + (longlong)pwVar15);
    if ((wVar7 == 0) && (*pwVar15 == 0)) goto LAB_142d1b4ba;
    if (wVar7 != *pwVar15) {
      wVar7 = towlower(wVar7);
      wVar8 = towlower(*pwVar15);
      if (wVar7 != wVar8) break;
    }
    pwVar15 = pwVar15 + 1;
  } while( true );
  if (wVar7 != wVar8) {
    pwVar15 = &DAT_1458612e0;
    pwVar14 = L"";
    if (iVar18 != 0) {
      pwVar14 = _Src_00;
    }
    do {
      wVar7 = *(wint_t *)((longlong)(pwVar14 + -0xa2c30970) + (longlong)pwVar15);
      if ((wVar7 == 0) && (*pwVar15 == 0)) break;
      if (wVar7 != *pwVar15) {
        wVar7 = towlower(wVar7);
        wVar8 = towlower(*pwVar15);
        if (wVar7 != wVar8) goto LAB_142d1b286;
      }
      pwVar15 = pwVar15 + 1;
    } while( true );
  }
  goto LAB_142d1b4ba;
LAB_142d1b286:
  if (wVar7 != wVar8) {
    pwVar15 = &DAT_1458612f0;
    pwVar14 = L"";
    if (iVar18 != 0) {
      pwVar14 = _Src_00;
    }
    do {
      wVar7 = *(wint_t *)((longlong)(pwVar14 + -0xa2c30978) + (longlong)pwVar15);
      if ((wVar7 == 0) && (*pwVar15 == 0)) break;
      if (wVar7 != *pwVar15) {
        wVar7 = towlower(wVar7);
        wVar8 = towlower(*pwVar15);
        if (wVar7 != wVar8) goto LAB_142d1b2e4;
      }
      pwVar15 = pwVar15 + 1;
    } while( true );
  }
  goto LAB_142d1b4ba;
LAB_142d1b2e4:
  if (wVar7 != wVar8) {
    pwVar16 = L"zh-Hant";
    pwVar14 = L"";
    if (iVar18 != 0) {
      pwVar14 = _Src_00;
    }
    do {
      wVar3 = *(wchar_t *)((longlong)(pwVar14 + -0xa2c30a00) + (longlong)pwVar16);
      if ((wVar3 == L'\0') && (*pwVar16 == L'\0')) goto LAB_142d1b442;
      if (wVar3 != *pwVar16) {
        wVar7 = towlower(wVar3);
        wVar8 = towlower(*pwVar16);
        if (wVar7 != wVar8) goto LAB_142d1b33a;
      }
      pwVar16 = pwVar16 + 1;
    } while( true );
  }
LAB_142d1b4ba:
  if (_Src_00 == L"zh-Hans-CN") goto LAB_142d1b52a;
  local_a8 = 0;
  iVar18 = 0;
  if (local_a4 != 0xb) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_b0,0xb);
    _Src_00 = local_b0;
    iVar18 = local_a8;
  }
  local_a8 = iVar18 + 0xb;
  if (local_a4 < local_a8) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b0);
    _Src_00 = local_b0;
  }
  builtin_wcsncpy(_Src_00,L"zh-Hans-CN",10);
  goto LAB_142d1b525;
LAB_142d1b33a:
  if (wVar7 != wVar8) {
    pwVar15 = &DAT_145861418;
    pwVar14 = L"";
    if (iVar18 != 0) {
      pwVar14 = _Src_00;
    }
    do {
      wVar7 = *(wint_t *)((longlong)(pwVar14 + -0xa2c30a0c) + (longlong)pwVar15);
      if ((wVar7 == 0) && (*pwVar15 == 0)) break;
      if (wVar7 != *pwVar15) {
        wVar7 = towlower(wVar7);
        wVar8 = towlower(*pwVar15);
        if (wVar7 != wVar8) goto LAB_142d1b394;
      }
      pwVar15 = pwVar15 + 1;
    } while( true );
  }
  goto LAB_142d1b442;
LAB_142d1b394:
  if (wVar7 != wVar8) {
    pwVar15 = &DAT_145861428;
    pwVar14 = L"";
    if (iVar18 != 0) {
      pwVar14 = _Src_00;
    }
    do {
      wVar7 = *(wint_t *)((longlong)(pwVar14 + -0xa2c30a14) + (longlong)pwVar15);
      if ((wVar7 == 0) && (*pwVar15 == 0)) break;
      if (wVar7 != *pwVar15) {
        wVar7 = towlower(wVar7);
        wVar8 = towlower(*pwVar15);
        if (wVar7 != wVar8) goto LAB_142d1b3e6;
      }
      pwVar15 = pwVar15 + 1;
    } while( true );
  }
  goto LAB_142d1b442;
LAB_142d1b434:
  if (wVar7 != wVar8) goto LAB_142d1b52a;
  goto LAB_142d1b442;
LAB_142d1b3e6:
  if (wVar7 != wVar8) {
    pwVar16 = L"zh-Hant-TW";
    pwVar14 = L"";
    if (iVar18 != 0) {
      pwVar14 = _Src_00;
    }
    do {
      wVar3 = *(wchar_t *)((longlong)pwVar16 + (longlong)(pwVar14 + -0xa2c30a1c));
      if ((wVar3 == L'\0') && (*pwVar16 == L'\0')) break;
      if (wVar3 != *pwVar16) {
        wVar7 = towlower(wVar3);
        wVar8 = towlower(*pwVar16);
        if (wVar7 != wVar8) goto LAB_142d1b434;
      }
      pwVar16 = pwVar16 + 1;
    } while( true );
  }
LAB_142d1b442:
  if (_Src_00 != L"zh-Hans-TW") {
    local_a8 = 0;
    iVar18 = 0;
    if (local_a4 != 0xb) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_b0,0xb);
      _Src_00 = local_b0;
      iVar18 = local_a8;
    }
    local_a8 = iVar18 + 0xb;
    if (local_a4 < local_a8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b0);
      _Src_00 = local_b0;
    }
    builtin_wcsncpy(_Src_00,L"zh-Hans-TW",10);
LAB_142d1b525:
    _Src_00[10] = L'\0';
    iVar18 = local_a8;
  }
LAB_142d1b52a:
  pwVar14 = L"";
  TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x1f8,local_res18,&local_b0);
  if (local_res18[0] == -1) {
    lVar9 = 0;
  }
  else {
    lVar9 = (longlong)local_res18[0] * 0x30 + *(longlong *)(param_1 + 0x1f8);
  }
  lVar17 = lVar9 + 0x10;
  if (lVar9 == 0) {
    lVar17 = 0;
  }
  if (lVar17 == 0) {
    for (pwVar16 = _Src_00; pwVar16 != _Src_00 + iVar18; pwVar16 = pwVar16 + 1) {
      if (*pwVar16 == L'-') {
        iVar11 = (int)((longlong)pwVar16 - (longlong)_Src_00 >> 1);
        if (-1 < iVar11) {
          iVar13 = 0;
          if (iVar18 != 0) {
            pwVar14 = _Src_00;
            iVar13 = iVar18 + -1;
          }
          local_a0 = (wchar_t *)0x0;
          local_94 = 0;
          if (iVar11 < iVar13) {
            iVar13 = iVar11;
          }
          local_98 = iVar13 + 1;
          if (iVar13 == 0) {
            local_98 = 0;
          }
          if ((local_98 < 1) ||
             (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0), pwVar16 = local_a0,
             local_98 < 1)) {
            ppwVar12 = &local_a0;
            bVar6 = true;
            bVar5 = false;
          }
          else {
            wcsncpy(local_a0,pwVar14,(longlong)iVar13);
            ppwVar12 = &local_a0;
            pwVar16[iVar13] = L'\0';
            bVar6 = true;
            bVar5 = false;
          }
          goto LAB_142d1b659;
        }
        break;
      }
    }
    local_80 = (wchar_t *)0x0;
    local_78 = iVar18;
    if (iVar18 == 0) {
      uStack_74 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,iVar18,0);
      _guard_xfg_dispatch_icall_nop(local_80,_Src_00,(longlong)iVar18 * 2);
    }
    ppwVar12 = &local_80;
    bVar6 = false;
    bVar5 = true;
LAB_142d1b659:
    pwVar14 = *ppwVar12;
    *ppwVar12 = (wchar_t *)0x0;
    local_58 = *(undefined4 *)(ppwVar12 + 1);
    local_54 = *(undefined4 *)((longlong)ppwVar12 + 0xc);
    ppwVar12[1] = (wchar_t *)0x0;
    local_60 = pwVar14;
    if ((bVar5) && (local_80 != (wchar_t *)0x0)) {
      FMemory::Free();
    }
    if ((bVar6) && (local_a0 != (wchar_t *)0x0)) {
      FMemory::Free();
    }
    TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x1f8,local_res20,&local_60);
    if (local_res20[0] == -1) {
      lVar9 = 0;
    }
    else {
      lVar9 = (longlong)local_res20[0] * 0x30 + *(longlong *)(param_1 + 0x1f8);
    }
    lVar17 = lVar9 + 0x10;
    if (lVar9 == 0) {
      lVar17 = 0;
    }
    if (pwVar14 != (wchar_t *)0x0) {
      FMemory::Free(pwVar14);
    }
  }
  if (_Src_00 != (wchar_t *)0x0) {
    FMemory::Free(_Src_00);
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar18 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return lVar17;
}



// FUNCTION 142d1b750 FUN_142d1b750 body=253 status=ok
// SIG undefined FUN_142d1b750(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142d1b750(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x180);
  if (lVar4 == 0) {
    plVar1 = *(longlong **)(param_1 + 0x118);
    if (plVar1 != (longlong *)0x0) {
      uVar3 = FUN_142e79d90();
      lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
      *(longlong *)(param_1 + 0x180) = lVar4;
      if (lVar4 != 0) goto LAB_142d1b79e;
    }
    uVar2 = DAT_1468b5d98;
    if (*(longlong *)(param_1 + 0x118) == 0) {
      *param_2 = 0;
      uVar2 = 0;
    }
    else {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
      if (lVar4 == 0) {
        *param_2 = _DAT_1468b5d90;
      }
      else {
        uVar2 = *(undefined4 *)(lVar4 + 0x228);
        *param_2 = *(undefined8 *)(lVar4 + 0x220);
      }
    }
    *(undefined4 *)(param_2 + 1) = uVar2;
    return param_2;
  }
LAB_142d1b79e:
  FUN_142dd0240(lVar4,param_2);
  return param_2;
}



// FUNCTION 142d1b850 FUN_142d1b850 body=114 status=ok
// SIG undefined FUN_142d1b850(void)

ulonglong FUN_142d1b850(longlong param_1,char param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  float *pfVar4;
  ulonglong uVar5;
  
  uVar1 = 0;
  if (0 < *(int *)(param_1 + 0x1e8)) {
    pfVar4 = *(float **)(param_1 + 0x1e0);
    uVar5 = uVar1;
    do {
      if (0.0 < *pfVar4) {
        return uVar5;
      }
      uVar5 = (ulonglong)((int)uVar5 + 1);
      uVar1 = uVar1 + 1;
      pfVar4 = pfVar4 + 1;
    } while ((longlong)uVar1 < (longlong)*(int *)(param_1 + 0x1e8));
  }
  if ((param_2 != '\0') && (uVar3 = *(int *)(param_1 + 0x1d0) - 1, -1 < (int)uVar3)) {
    lVar2 = (longlong)(int)uVar3;
    pfVar4 = (float *)(*(longlong *)(param_1 + 0x1c8) + lVar2 * 4);
    do {
      if (0.0 < *pfVar4) {
        return (ulonglong)uVar3;
      }
      uVar3 = uVar3 - 1;
      pfVar4 = pfVar4 + -1;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return 0xffffffff;
}



// FUNCTION 142d1b8d0 FUN_142d1b8d0 body=184 status=ok
// SIG undefined FUN_142d1b8d0(void)

ulonglong FUN_142d1b8d0(longlong param_1,char param_2)

{
  longlong lVar1;
  float *pfVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x2b0);
  if (lVar1 == 0) {
    return 0;
  }
  uVar7 = 0;
  if (0 < *(int *)(param_1 + 0x1e8)) {
    pfVar2 = *(float **)(param_1 + 0x1e0);
    uVar4 = uVar7;
    uVar6 = uVar7;
    do {
      iVar5 = (int)uVar6;
      if (0.0 < *pfVar2) goto LAB_142d1b95b;
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar4 = uVar4 + 1;
      pfVar2 = pfVar2 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x1e8));
  }
  if ((param_2 != '\0') && (iVar5 = *(int *)(param_1 + 0x1d0) + -1, -1 < iVar5)) {
    lVar3 = (longlong)iVar5;
    pfVar2 = (float *)(*(longlong *)(param_1 + 0x1c8) + lVar3 * 4);
    do {
      if (0.0 < *pfVar2) goto LAB_142d1b95b;
      iVar5 = iVar5 + -1;
      pfVar2 = pfVar2 + -1;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  iVar5 = -1;
LAB_142d1b95b:
  if ((-1 < iVar5) && (iVar5 < *(int *)(lVar1 + 0x680))) {
    uVar7 = (longlong)iVar5 * 0x78 + *(longlong *)(lVar1 + 0x678);
  }
  return uVar7;
}



// FUNCTION 142d1b990 FUN_142d1b990 body=361 status=ok
// SIG undefined FUN_142d1b990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_142d1b990(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  if (*(int *)(param_1 + 0x670) == 0) {
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar3 + 0x38) < DAT_146866c88) &&
       (_Init_thread_header(&DAT_146866c88), DAT_146866c88 == -1)) {
      DAT_146866c70 = 0xff;
      _DAT_146866c78 = 0;
      DAT_146866c80._0_4_ = 0;
      _Init_thread_footer(&DAT_146866c88);
    }
    puVar5 = &DAT_146866c70;
    if (*(int *)(param_1 + 0x680) < 1) {
      puVar4 = &DAT_146866c70;
    }
    else {
      puVar4 = (undefined *)(*(longlong *)(param_1 + 0x678) + 0x60);
    }
    cVar1 = FUN_142d52a00(puVar4);
    if (cVar1 != '\0') {
      if ((*(int *)(lVar3 + 0x38) < DAT_146866c88) &&
         (_Init_thread_header(&DAT_146866c88), DAT_146866c88 == -1)) {
        DAT_146866c70 = 0xff;
        _DAT_146866c78 = 0;
        DAT_146866c80._0_4_ = 0;
        _Init_thread_footer(&DAT_146866c88);
      }
      if (0 < *(int *)(param_1 + 0x680)) {
        puVar5 = (undefined *)(*(longlong *)(param_1 + 0x678) + 0x60);
      }
      uVar2 = FUN_142d52a20(puVar5);
      lVar3 = FArchive::operator<<(uVar2);
      return *(undefined4 *)(lVar3 + 0x20);
    }
  }
  else if (*(int *)(param_1 + 0x670) == 1) {
    return *(undefined4 *)(param_1 + 0x6cc);
  }
  return 0xbf800000;
}



// FUNCTION 142d1bb00 FUN_142d1bb00 body=80 status=ok
// SIG undefined FUN_142d1bb00(void)

undefined4 FUN_142d1bb00(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined4 local_18;
  
  local_28[0] = 0xff;
  local_20 = 0;
  local_18 = 0;
  FUN_142d1bf20(param_1,local_28);
  cVar1 = FUN_142d52a00(local_28);
  if (cVar1 != '\0') {
    uVar2 = FUN_142d52a20(local_28);
    lVar3 = FArchive::operator<<(uVar2);
    return *(undefined4 *)(lVar3 + 0x20);
  }
  return 0;
}



// FUNCTION 142d1bb50 FUN_142d1bb50 body=31 status=ok
// SIG undefined FUN_142d1bb50(void)

undefined4 FUN_142d1bb50(longlong param_1)

{
  if (*(int *)(param_1 + 0x670) == 0) {
    return *(undefined4 *)(param_1 + 0x680);
  }
  if (*(int *)(param_1 + 0x670) != 1) {
    return 0;
  }
  return 1;
}



// FUNCTION 142d1bb70 FUN_142d1bb70 body=578 status=ok
// SIG undefined FUN_142d1bb70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142d1bb70(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  char cVar2;
  longlong *plVar3;
  float *pfVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c [68];
  
  plVar3 = *(longlong **)(param_1 + 0x118);
  cVar2 = *(char *)((longlong)param_3 + 0x11);
  if (cVar2 == '\x01') {
    if (plVar3 != (longlong *)0x0) {
      pfVar4 = (float *)(**(code **)(*plVar3 + 0x560))(plVar3,local_4c,0);
      fVar10 = pfVar4[5];
      fVar8 = pfVar4[2];
      fVar9 = pfVar4[3];
      fVar1 = *pfVar4;
      param_2[1] = (pfVar4[4] + pfVar4[1]) * 0.5;
      param_2[2] = (fVar10 + fVar8) * 0.5;
      *param_2 = (fVar9 + fVar1) * 0.5;
      return param_2;
    }
  }
  else {
    if (cVar2 == '\x02') {
      lVar6 = FUN_142d1c610();
      if (lVar6 != 0) {
        FUN_142dd0240(lVar6,param_2);
        return param_2;
      }
    }
    else if ((cVar2 == '\x03') && (0 < (int)param_3[8])) {
      lVar6 = *(longlong *)(param_3 + 6);
      fVar10 = 3.4028235e+38;
      uVar11 = 0;
      lVar7 = (longlong)(int)param_3[8] * 0x90 + lVar6;
      if (lVar6 != lVar7) {
        pfVar4 = (float *)(lVar6 + 0x20);
        fVar8 = 0.0;
        do {
          fVar9 = (*pfVar4 - *param_3) * (*pfVar4 - *param_3) +
                  (pfVar4[1] - param_3[1]) * (pfVar4[1] - param_3[1]) +
                  (pfVar4[2] - param_3[2]) * (pfVar4[2] - param_3[2]);
          if (fVar9 < fVar10) {
            uVar11 = *(undefined8 *)pfVar4;
            fVar8 = pfVar4[2];
            fVar10 = fVar9;
          }
          lVar6 = lVar6 + 0x90;
          pfVar4 = pfVar4 + 0x24;
        } while (lVar6 != lVar7);
        *(undefined8 *)param_2 = uVar11;
        param_2[2] = fVar8;
        return param_2;
      }
      param_2[0] = 0.0;
      param_2[1] = 0.0;
      param_2[2] = 0.0;
      return param_2;
    }
    if (plVar3 != (longlong *)0x0) {
      lVar6 = plVar3[0x2d];
      if (lVar6 == 0) {
        local_68 = _DAT_1468b5d90;
        local_60 = DAT_1468b5d98;
      }
      else {
        local_60 = *(undefined4 *)(lVar6 + 0x228);
        local_68 = *(undefined8 *)(lVar6 + 0x220);
      }
      local_50 = local_60;
      puVar5 = &local_58;
      local_58 = local_68;
      goto LAB_142d1bd90;
    }
  }
  local_68 = 0;
  puVar5 = &local_68;
  local_60 = 0;
LAB_142d1bd90:
  fVar10 = *(float *)(puVar5 + 1);
  *(undefined8 *)param_2 = *puVar5;
  param_2[2] = fVar10;
  return param_2;
}



// FUNCTION 142d1bdc0 FUN_142d1bdc0 body=237 status=ok
// SIG undefined FUN_142d1bdc0(void)

undefined * FUN_142d1bdc0(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar3 = DAT_146b33f38;
  lVar4 = DAT_146b33f38 + 0x30;
  lVar2 = FWeakObjectPtr::Get(lVar4);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar3 + 0x38)) || (*(longlong *)(lVar3 + 0x40) == 0))
    goto LAB_142d1be96;
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar4,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar3 + 0x38) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(lVar4);
    if (lVar2 == 0) goto LAB_142d1be96;
  }
  lVar3 = FUN_142e0ceb0();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return (undefined *)(lVar2 + 0x30);
  }
LAB_142d1be96:
  return &DAT_1466ad2e0;
}



// FUNCTION 142d1beb0 FUN_142d1beb0 body=27 status=ok
// SIG undefined FUN_142d1beb0(void)

int FUN_142d1beb0(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_142c98860(param_1 + 0xb8,0);
  return (int)fVar1;
}



// FUNCTION 142d1bed0 FUN_142d1bed0 body=56 status=ok
// SIG undefined FUN_142d1bed0(void)

void FUN_142d1bed0(longlong param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0;
  local_18 = param_2;
  FUN_142ca2f00(*(undefined8 *)(param_1 + 8),&local_18,0x3f800000);
  return;
}



// FUNCTION 142d1bf10 get_HealthHealed body=9 status=ok
// SIG undefined get_HealthHealed(void)

undefined4 uhx::glues::AGPlayerState_Glue_obj::get_HealthHealed(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x844);
}



// FUNCTION 142d1bf20 FUN_142d1bf20 body=365 status=ok
// SIG undefined FUN_142d1bf20(void)

undefined8 FUN_142d1bf20(longlong param_1,longlong *param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong local_78 [2];
  byte local_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  longlong lStack_38;
  longlong local_30;
  longlong local_28;
  longlong lStack_20;
  undefined8 local_18;
  
  local_68 = local_68 & 0xfd | 1;
  local_78[0] = 0;
  local_78[1] = 0;
  FUN_142c8c260(&local_60,0x3f800000,param_3,param_4,0,0);
  local_28 = CONCAT71(local_28._1_7_,0xff);
  lStack_20 = 0;
  local_18 = (ulonglong)local_18._4_4_ << 0x20;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if ((*(longlong *)(DAT_146b33f38 + 0x58) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x30), lVar1 != 0)) {
    plVar4 = *(longlong **)(param_1 + 0x678);
    plVar3 = plVar4 + (longlong)*(int *)(param_1 + 0x680) * 0xf;
    for (; plVar4 != plVar3; plVar4 = plVar4 + 0xf) {
      if (*plVar4 == lVar1) {
        TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(local_78,plVar4 + 2);
        bVar2 = local_68 ^ (*(byte *)(plVar4 + 4) ^ local_68) & 1;
        local_68 = (*(byte *)(plVar4 + 4) ^ bVar2) & 2 ^ bVar2;
        local_60 = plVar4[5];
        lStack_58 = plVar4[6];
        local_50 = plVar4[7];
        lStack_48 = plVar4[8];
        local_40 = plVar4[9];
        lStack_38 = plVar4[10];
        local_30 = plVar4[0xb];
        local_28 = plVar4[0xc];
        lStack_20 = plVar4[0xd];
        local_18 = plVar4[0xe];
        uVar5 = 1;
        *param_2 = local_28;
        param_2[1] = lStack_20;
        param_2[2] = local_18;
        goto LAB_142d1bfda;
      }
    }
  }
  uVar5 = 0;
LAB_142d1bfda:
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  return uVar5;
}



// FUNCTION 142d1c090 FUN_142d1c090 body=942 status=ok
// SIG undefined FUN_142d1c090(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d1c090(longlong param_1,float *param_2,float *param_3,undefined8 *param_4,
                  longlong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 *puVar19;
  float *pfVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 local_98;
  float fStack_90;
  undefined4 uStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [80];
  
  cVar14 = FWeakObjectPtr::IsValid(param_5 + 0x2c);
  if (cVar14 == '\0') {
    plVar16 = (longlong *)*param_4;
  }
  else {
    plVar16 = (longlong *)FWeakObjectPtr::Get(param_5 + 0x2c);
  }
  if (plVar16 == (longlong *)0x0) {
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    uVar21 = 0;
    uVar22 = 0;
    param_2[2] = 0.0;
    fStack_90 = 0.0;
  }
  else {
    lVar18 = *(longlong *)(param_5 + 0x100);
    if (lVar18 == 0) {
      lVar18 = *(longlong *)(param_1 + 0x108);
    }
    if (lVar18 != 0) {
      lVar17 = FUN_142d182a0(param_1,plVar16,lVar18);
      if (lVar17 != 0) {
        FUN_14238d6f0(lVar17,lVar18,param_2,param_3);
        goto LAB_142d1c298;
      }
    }
    if (*(char *)(param_1 + 0x110) == '\0') {
      lVar18 = FUN_1429d7ab0();
      if ((*(int *)(plVar16[2] + 0x90) < *(int *)(lVar18 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar16[2] + 0x88) + (longlong)*(int *)(lVar18 + 0x90) * 8) !=
          lVar18 + 0x88)) {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
      if (bVar13) {
        (**(code **)(*plVar16 + 0x648))(plVar16,param_2,param_3);
        goto LAB_142d1c298;
      }
    }
    lVar18 = plVar16[0x2d];
    if (lVar18 == 0) {
      local_98 = _DAT_1468b5d90;
      fStack_90 = DAT_1468b5d98;
    }
    else {
      local_98 = *(undefined8 *)(lVar18 + 0x220);
      fStack_90 = *(float *)(lVar18 + 0x228);
    }
    *(undefined8 *)param_2 = local_98;
    param_2[2] = fStack_90;
    lVar18 = plVar16[0x2d];
    if (lVar18 == 0) {
      uVar21 = (undefined4)DAT_1468b5da0;
      uVar22 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      fStack_90 = DAT_1468b5da8;
    }
    else {
      local_88 = *(float *)(lVar18 + 0x210);
      fStack_84 = *(float *)(lVar18 + 0x214);
      fStack_80 = *(float *)(lVar18 + 0x218);
      fStack_7c = *(float *)(lVar18 + 0x21c);
      auVar4._4_4_ = -(uint)(*(float *)(lVar18 + 0x254) != fStack_84);
      auVar4._0_4_ = -(uint)(*(float *)(lVar18 + 0x250) != local_88);
      auVar4._8_4_ = -(uint)(*(float *)(lVar18 + 600) != fStack_80);
      auVar4._12_4_ = -(uint)(*(float *)(lVar18 + 0x25c) != fStack_7c);
      iVar15 = movmskps(fStack_90,auVar4);
      if (iVar15 != 0) {
        *(float *)(lVar18 + 0x250) = local_88;
        *(float *)(lVar18 + 0x254) = fStack_84;
        *(float *)(lVar18 + 600) = fStack_80;
        *(float *)(lVar18 + 0x25c) = fStack_7c;
        puVar19 = (undefined8 *)FQuat::Rotator(&local_88,&local_98);
        *(undefined8 *)(lVar18 + 0x260) = *puVar19;
        *(undefined4 *)(lVar18 + 0x268) = *(undefined4 *)(puVar19 + 1);
      }
      uVar21 = (undefined4)*(undefined8 *)(lVar18 + 0x260);
      uVar22 = (undefined4)((ulonglong)*(undefined8 *)(lVar18 + 0x260) >> 0x20);
      fStack_90 = *(float *)(lVar18 + 0x268);
    }
    local_98 = CONCAT44(uVar22,uVar21);
  }
  *(ulonglong *)param_3 = CONCAT44(uVar22,uVar21);
  param_3[2] = fStack_90;
LAB_142d1c298:
  if (*(char *)(param_5 + 0x11c) != '\0') {
    *(undefined8 *)param_2 = *(undefined8 *)(param_5 + 0x110);
    param_2[2] = *(float *)(param_5 + 0x118);
  }
  if (*(char *)(param_5 + 300) != '\0') {
    *(undefined8 *)param_3 = *(undefined8 *)(param_5 + 0x120);
    param_3[2] = *(float *)(param_5 + 0x128);
  }
  if ((*(longlong *)(param_1 + 0x98) != 0) &&
     (((byte)*(undefined4 *)(*(longlong *)(param_1 + 0x98) + 0x2c) & 0x60) == 0x60)) {
    *param_3 = 0.0;
  }
  fVar1 = *(float *)(param_1 + 0x114);
  fVar2 = *(float *)(param_1 + 0x118);
  fVar3 = *(float *)(param_1 + 0x11c);
  uStack_8c = 0;
  pfVar20 = (float *)FRotationMatrix::FRotationMatrix(local_78,param_3);
  fVar5 = pfVar20[0xd];
  fVar6 = pfVar20[0xe];
  fVar7 = pfVar20[5];
  fVar8 = pfVar20[6];
  fVar9 = pfVar20[9];
  fVar10 = pfVar20[10];
  fVar11 = pfVar20[1];
  fVar12 = pfVar20[2];
  *param_2 = pfVar20[0xc] * 0.0 + fVar3 * pfVar20[8] + fVar2 * pfVar20[4] + fVar1 * *pfVar20 +
             *param_2;
  param_2[1] = fVar5 * 0.0 + fVar3 * fVar9 + fVar2 * fVar7 + fVar1 * fVar11 + param_2[1];
  param_2[2] = fVar6 * 0.0 + fVar3 * fVar10 + fVar2 * fVar8 + fVar1 * fVar12 + param_2[2];
  if (*(char *)(param_5 + 300) == '\0') {
    pfVar20 = (float *)(param_5 + 0x140);
    if (*(char *)(param_5 + 0x14c) == '\0') {
      pfVar20 = (float *)(param_1 + 0x120);
    }
    *param_3 = *pfVar20 + *param_3;
    param_3[1] = pfVar20[1] + param_3[1];
    param_3[2] = pfVar20[2] + param_3[2];
  }
  lVar18 = *(longlong *)(param_1 + 0x98);
  if (((lVar18 != 0) && ((*(uint *)(lVar18 + 0x2c) & 0x20) != 0)) &&
     ((*(uint *)(lVar18 + 0x2c) & 0x40) == 0)) {
    *param_3 = 0.0;
    lVar18 = *(longlong *)(param_1 + 0x98);
  }
  if ((lVar18 != 0) && ((*(byte *)(lVar18 + 0x2c) & 0x80) != 0)) {
    param_3[2] = 0.0;
  }
  return;
}



// FUNCTION 142d1c440 FUN_142d1c440 body=462 status=ok
// SIG undefined FUN_142d1c440(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142d1c440(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 local_18;
  undefined4 local_10;
  
  if (param_3[1] != 0) {
    if ((int)param_3[0x1b] == 1) {
      plVar7 = (longlong *)param_3[0x1a];
      if ((longlong *)param_3[0x1a] == (longlong *)0x0) {
        plVar7 = param_3 + 2;
      }
      lVar5 = FUN_14046ef90(plVar7);
      if (lVar5 != 0) {
        cVar4 = FUN_142d2bbb0(lVar5,0,param_3);
        if (cVar4 != '\0') {
          uVar1 = *(undefined4 *)(lVar5 + 0x224);
          uVar2 = *(undefined4 *)(lVar5 + 0x228);
          *(undefined4 *)param_2 = *(undefined4 *)(lVar5 + 0x220);
          *(undefined4 *)(param_2 + 1) = uVar2;
          *(undefined4 *)((longlong)param_2 + 4) = uVar1;
          return param_2;
        }
      }
    }
    FUN_142d1b750(param_3[1],param_2);
    return param_2;
  }
  if (*param_3 == 0) {
    *param_2 = _DAT_1468b5d90;
    *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
    return param_2;
  }
  lVar5 = *(longlong *)(*param_3 + 0x168);
  if (lVar5 != 0) {
    lVar6 = FUN_1429f11d0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      *param_2 = *(undefined8 *)(lVar5 + 0x1d0);
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar5 + 0x1d8);
      return param_2;
    }
  }
  lVar5 = *(longlong *)(*param_3 + 0x168);
  if (lVar5 == 0) {
    local_18 = _DAT_1468b5d90;
    local_10 = DAT_1468b5d98;
  }
  else {
    local_18 = *(undefined8 *)(lVar5 + 0x220);
    local_10 = *(undefined4 *)(lVar5 + 0x228);
  }
  *param_2 = local_18;
  *(undefined4 *)(param_2 + 1) = local_10;
  return param_2;
}



// FUNCTION 142d1c610 FUN_142d1c610 body=90 status=ok
// SIG undefined FUN_142d1c610(void)

longlong FUN_142d1c610(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x180);
  if (lVar3 == 0) {
    plVar1 = *(longlong **)(param_1 + 0x118);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = FUN_142e79d90();
      lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
      *(longlong *)(param_1 + 0x180) = lVar3;
      return lVar3;
    }
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 142d1c670 FUN_142d1c670 body=101 status=ok
// SIG undefined FUN_142d1c670(void)

undefined8 FUN_142d1c670(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x178);
  if (lVar3 == 0) {
    plVar1 = *(longlong **)(param_1 + 0x118);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = UCircularThrobber::GetPrivateStaticClass();
      lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
      *(longlong *)(param_1 + 0x178) = lVar3;
      if (lVar3 != 0) goto LAB_142d1c6b6;
    }
    return 0;
  }
LAB_142d1c6b6:
  return *(undefined8 *)(lVar3 + 0x180);
}



// FUNCTION 142d1c6e0 FUN_142d1c6e0 body=177 status=ok
// SIG undefined FUN_142d1c6e0(void)

float FUN_142d1c6e0(longlong param_1,char param_2)

{
  longlong *plVar1;
  float *pfVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  float fVar6;
  
  if (*(int *)(param_1 + 0x1e8) < 2) {
    fVar6 = *(float *)(param_1 + 0x1d8);
  }
  else {
    uVar3 = 0;
    pfVar2 = *(float **)(param_1 + 0x1e0);
    fVar6 = 0.0;
    uVar5 = (longlong)*(int *)(param_1 + 0x1e8) & 0x3fffffffffffffff;
    if (pfVar2 + *(int *)(param_1 + 0x1e8) < pfVar2) {
      uVar5 = uVar3;
    }
    if (uVar5 != 0) {
      do {
        fVar6 = fVar6 + *pfVar2;
        pfVar2 = pfVar2 + 1;
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar5);
      pfVar2 = *(float **)(param_1 + 0x1e0);
    }
    fVar6 = (fVar6 - *pfVar2) + *(float *)(param_1 + 0x1d8);
  }
  if (param_2 != '\0') {
    plVar4 = *(longlong **)(param_1 + 0x238);
    plVar1 = plVar4 + (longlong)*(int *)(param_1 + 0x240) * 3;
    for (; plVar4 != plVar1; plVar4 = plVar4 + 3) {
      if ((*plVar4 != 0) && (*(char *)(*plVar4 + 0x60) == '\0')) {
        fVar6 = fVar6 + *(float *)(plVar4 + 2);
      }
    }
  }
  return fVar6;
}



// FUNCTION 142d1c7a0 FUN_142d1c7a0 body=200 status=ok
// SIG undefined FUN_142d1c7a0(void)

float FUN_142d1c7a0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  
  fVar7 = 0.0;
  if (*(int *)(param_1 + 0x670) == 0) {
    lVar4 = *(longlong *)(param_1 + 0x678);
    lVar5 = (longlong)*(int *)(param_1 + 0x680) * 0x78 + lVar4;
    if (lVar4 != lVar5) {
      lVar6 = lVar4 + 0x60;
      do {
        cVar1 = FUN_142d52a00(lVar6);
        if (cVar1 != '\0') {
          uVar2 = FUN_142d52a20(lVar6);
          lVar3 = FArchive::operator<<(uVar2);
          fVar7 = fVar7 + *(float *)(lVar3 + 0x20);
        }
        lVar4 = lVar4 + 0x78;
        lVar6 = lVar6 + 0x78;
      } while (lVar4 != lVar5);
      return fVar7;
    }
    return 0.0;
  }
  if (*(int *)(param_1 + 0x670) == 1) {
    return *(float *)(param_1 + 0x6cc);
  }
  return 0.0;
}



// FUNCTION 142d1c870 FUN_142d1c870 body=2064 status=ok
// SIG undefined FUN_142d1c870(void)

void FUN_142d1c870(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong local_68 [12];
  
  if (*(char *)((longlong)param_1 + 0x134) == '\x02') goto LAB_142d1ceba;
  lVar12 = 0;
  if ((param_1[0x56] == 0) || (lVar13 = *(longlong *)(param_1[0x56] + 0x118), lVar13 == 0)) {
LAB_142d1c907:
    lVar13 = lVar12;
  }
  else {
    lVar10 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_142d1c907;
  }
  if (((lVar13 != 0) && (param_1[9] != 0)) && (*(longlong *)(lVar13 + 0x490) == param_1[9])) {
    if (param_1[100] == 0) {
      fVar16 = 1.0;
    }
    else {
      fVar16 = (float)FUN_142c98860(param_1[100] + 0x40,lVar13);
    }
    *(float *)(param_1 + 0x3b) = fVar16 * *(float *)(param_1 + 0x3b);
  }
  if ((byte)((char)param_1[0x5e] - 1U) < 2) {
    if (param_1[0x52] == 0) {
      fVar18 = 1.0;
    }
    else {
      fVar18 = *(float *)(param_1[0x52] + 0x29c);
    }
    if (param_1[0x56] == 0) {
      fVar16 = 1.0;
    }
    else {
      fVar16 = *(float *)(param_1[0x56] + 0x6f0);
    }
    fVar16 = fVar18 * *(float *)(param_1 + 0x3b) * fVar16;
    *(float *)(param_1 + 0x3b) = fVar16;
  }
  else {
    fVar16 = *(float *)(param_1 + 0x3b);
  }
  if (((char)param_1[0x66] == '\0') && (param_1[9] != 0)) {
    fVar18 = 1.0;
    if (param_1[100] != 0) {
      fVar18 = (float)FUN_142c98860(param_1[100] + 0x88);
    }
    plVar14 = (longlong *)param_1[10];
    fVar19 = 1.0;
    if (plVar14 != (longlong *)0x0) {
      lVar13 = plVar14[0x1f];
      if (lVar13 == 0) {
        (**(code **)(*plVar14 + 0x368))(plVar14);
        lVar13 = plVar14[0x1f];
        if (lVar13 == 0) goto LAB_142d1ca29;
      }
      fVar19 = (float)FUN_142c98860(lVar13 + 0x38,param_1[9]);
    }
LAB_142d1ca29:
    fVar16 = fVar18 * fVar16 * fVar19;
    *(float *)(param_1 + 0x3b) = fVar16;
  }
  if (param_1[100] != 0) {
    uVar1 = *(uint *)((longlong)param_1 + 0x32c);
    fVar16 = 1.0;
    iVar8 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f);
    lVar13 = 0xc0;
    if ((char)param_1[0x66] == '\0') {
      lVar13 = 0xd0;
    }
    plVar14 = (longlong *)(lVar13 + param_1[100]);
    iVar2 = (int)plVar14[1];
    iVar4 = iVar2;
    if (iVar8 <= iVar2) {
      iVar4 = iVar8;
    }
    if ((iVar4 + -1 < 0) || (iVar2 <= iVar4 + -1)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      if ((int)uVar1 < 1) {
        if ((int)uVar1 < 0) {
          fVar16 = *(float *)(*plVar14 + -4 + (longlong)iVar4 * 0xc);
        }
      }
      else {
        fVar16 = *(float *)(*plVar14 + -8 + (longlong)iVar4 * 0xc);
      }
    }
    fVar18 = *(float *)(param_1 + 0x3b);
    fVar16 = fVar16 * fVar18;
    *(float *)(param_1 + 0x3b) = fVar16;
    *(float *)(param_1 + 0x3e) = fVar18 - fVar16;
  }
  if (param_1[0x54] == 0) {
    fVar18 = 1.0;
  }
  else {
    fVar18 = *(float *)(param_1[0x54] + 0x284);
  }
  if (param_1[0x56] == 0) {
    fVar19 = 1.0;
  }
  else {
    fVar19 = *(float *)(param_1[0x56] + 0x6e4);
  }
  fVar19 = fVar16 * fVar18 * fVar19;
  *(float *)(param_1 + 0x3b) = fVar19;
  plVar14 = (longlong *)param_1[0xb];
  if (plVar14 != (longlong *)0x0) {
    lVar13 = plVar14[0x1f];
    if (lVar13 == 0) {
      (**(code **)(*plVar14 + 0x368))(plVar14);
      lVar13 = plVar14[0x1f];
      fVar19 = *(float *)(param_1 + 0x3b);
      if (lVar13 == 0) goto LAB_142d1cc17;
    }
    local_68[0] = FUN_142d19800(param_1);
    local_68[1] = 0;
    fVar16 = (float)FUN_142ca2f00(*(undefined8 *)(lVar13 + 0xe0),local_68,0x3f800000);
    local_68[0] = lVar12;
    if (param_1[0x56] != 0) {
      local_68[0] = *(longlong *)(param_1[0x56] + 0x118);
    }
    local_68[1] = 0;
    fVar19 = (float)FUN_142ca2f00(*(undefined8 *)(lVar13 + 0xe8),local_68,0x3f800000);
    if ((*(char *)((longlong)param_1 + 0x345) != '\0') && (fVar19 <= 1.0)) {
      fVar19 = 1.0;
    }
    fVar18 = *(float *)(param_1 + 0x3b);
    fVar19 = fVar18 * fVar16 * fVar19;
    *(float *)(param_1 + 0x3b) = fVar19;
    *(float *)((longlong)param_1 + 500) = fVar18 - fVar19;
  }
LAB_142d1cc17:
  plVar14 = (longlong *)param_1[10];
  if (plVar14 != (longlong *)0x0) {
    lVar13 = plVar14[0x1f];
    if (lVar13 == 0) {
      (**(code **)(*plVar14 + 0x368))(plVar14);
      lVar13 = plVar14[0x1f];
      fVar19 = *(float *)(param_1 + 0x3b);
      if (lVar13 == 0) goto LAB_142d1ccec;
    }
    local_68[0] = FUN_142d19800(param_1);
    local_68[1] = 0;
    fVar16 = (float)FUN_142ca2f00(*(undefined8 *)(lVar13 + 0x28),local_68,0x3f800000);
    if (param_1[0x56] != 0) {
      lVar12 = *(longlong *)(param_1[0x56] + 0x118);
    }
    local_68[1] = 0;
    local_68[0] = lVar12;
    fVar19 = (float)FUN_142ca2f00(*(undefined8 *)(lVar13 + 0x30),local_68,0x3f800000);
    fVar18 = *(float *)(param_1 + 0x3b);
    fVar19 = fVar18 * fVar16 * fVar19;
    *(float *)(param_1 + 0x3b) = fVar19;
    *(float *)(param_1 + 0x3f) = fVar18 - fVar19;
  }
LAB_142d1ccec:
  if (*(char *)((longlong)param_1 + 0x33c) != '\0') {
    fVar19 = fVar19 * *(float *)(param_1 + 0x68);
    *(byte *)((longlong)param_1 + 0x214) = *(byte *)((longlong)param_1 + 0x214) | 1;
    *(float *)(param_1 + 0x3b) = fVar19;
  }
  if (param_1[0x57] != 0) {
    fVar16 = 1.0;
    if (((char)param_1[0x5e] == '\x01') && (iVar8 = (int)param_1[0x5d], 0 < iVar8)) {
      plVar14 = (longlong *)param_1[0x5c];
      fVar16 = 0.0;
      plVar15 = plVar14 + (longlong)iVar8 * 2;
      if (plVar14 != plVar15) {
        do {
          plVar3 = (longlong *)*plVar14;
          if (plVar3 != (longlong *)0x0) {
            fVar18 = (float)(**(code **)(*plVar3 + 0x280))(plVar3,param_1);
            fVar16 = fVar16 + fVar18;
          }
          plVar14 = plVar14 + 2;
        } while (plVar14 != plVar15);
        iVar8 = (int)param_1[0x5d];
      }
      fVar16 = fVar16 / (float)iVar8;
    }
    else {
      plVar14 = (longlong *)param_1[0x5a];
      if (plVar14 != (longlong *)0x0) {
        fVar16 = (float)(**(code **)(*plVar14 + 0x280))(plVar14,param_1);
      }
    }
    *(float *)(param_1 + 0x3b) = fVar16 * fVar19;
    *(float *)((longlong)param_1 + 0x1fc) = fVar19 - fVar16 * fVar19;
  }
  FUN_142d18a30(param_1);
  lVar12 = param_1[0x56];
  fVar16 = *(float *)(param_1 + 0x3b);
  fVar18 = fVar16;
  if (lVar12 != 0) {
    fVar18 = *(float *)(lVar12 + 0x7ac);
    if (fVar18 <= 0.0) {
      fVar18 = 0.0;
    }
    fVar18 = fVar16 / (fVar18 * 0.01 + 1.0);
    *(float *)(param_1 + 0x3b) = fVar18;
    *(float *)((longlong)param_1 + 0x204) = fVar16 - fVar18;
  }
  fVar16 = fVar18;
  if (lVar12 != 0) {
    if (param_1[0x5a] == 0) {
      uVar11 = FWeakObjectPtr::Get((longlong)param_1 + 0xc4);
      uVar9 = FUN_1426bd9f0(uVar11);
      uVar6 = FUN_142db9240(uVar9);
    }
    else {
      uVar6 = FUN_142d39c40();
    }
    plVar14 = (longlong *)param_1[0xb];
    if (plVar14 == (longlong *)0x0) {
LAB_142d1ce8e:
      fVar16 = 1.0;
    }
    else {
      lVar12 = plVar14[0x1f];
      if (lVar12 == 0) {
        (**(code **)(*plVar14 + 0x368))(plVar14);
        lVar12 = plVar14[0x1f];
        if (lVar12 == 0) goto LAB_142d1ce8e;
      }
      uVar11 = FUN_142d19790(param_1);
      fVar16 = (float)FUN_142d3d170(lVar12,uVar6,uVar11);
    }
    fVar16 = fVar16 * fVar18;
  }
  *(float *)(param_1 + 0x3b) = fVar16;
  *(float *)(param_1 + 0x41) = fVar18 - fVar16;
LAB_142d1ceba:
  (**(code **)(*param_1 + 0x90))(param_1);
  (**(code **)(*param_1 + 0x98))(param_1);
  if (*(char *)((longlong)param_1 + 0x134) != '\x02') {
    fVar16 = *(float *)(param_1 + 0x3b);
    if ((((param_1[0x56] != 0) && (0.0 < *(float *)(param_1[0x56] + 0x7a8))) &&
        (fVar18 = (float)FUN_142d19870(), fVar18 - fVar16 <= 0.0001)) &&
       (iVar8 = rand(),
       (float)iVar8 * 3.051851e-05 < *(float *)(param_1[0x56] + 0x7a8) ||
       (float)iVar8 * 3.051851e-05 == *(float *)(param_1[0x56] + 0x7a8))) {
      fVar16 = 0.0;
    }
    *(float *)(param_1 + 0x3b) = fVar16;
    fVar18 = fVar16;
    if ((((*(byte *)(param_1 + 0x20) & 8) == 0) && (param_1[0x56] != 0)) &&
       ((*(char *)(param_1[0x56] + 0x748) != '\0' &&
        ((lVar12 = FUN_142d1bdc0(), (char)param_1[0x66] == '\0' &&
         (cVar7 = (**(code **)(*param_1 + 0xa0))(param_1), cVar7 == '\0')))))) {
      fVar19 = (float)FUN_142d19870(param_1[0x56]);
      if ((*(char *)(param_1[0x56] + 0x834) == '\0') &&
         (*(char *)((longlong)param_1 + 0x334) == '\0')) {
        fVar17 = (float)FUN_142d1b990();
        fVar17 = fVar17 * *(float *)(lVar12 + 4);
        if ((fVar17 <= fVar19) && (fVar19 - fVar16 < fVar17)) {
          FUN_142d15b40(param_1[0x56],param_1);
        }
      }
      if (*(char *)(param_1[0x56] + 0x834) != '\0') {
        fVar18 = fVar19 - *(float *)(param_1[0x56] + 0x830);
        if (fVar16 <= fVar18) {
          fVar18 = fVar16;
        }
        if (fVar18 <= 0.0) {
          fVar18 = 0.0;
        }
      }
    }
    *(float *)(param_1 + 0x3b) = fVar18;
    *(float *)(param_1 + 0x42) = fVar16 - fVar18;
    if ((*(char *)((longlong)param_1 + 0x344) != '\0') && (param_1[0x56] != 0)) {
      fVar19 = (float)FUN_142d19870();
      fVar16 = fVar19 - 1.0;
      if (fVar18 <= fVar19 - 1.0) {
        fVar16 = fVar18;
      }
      fVar18 = fVar16;
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
    }
    *(float *)(param_1 + 0x3b) = fVar18;
  }
  return;
}



// FUNCTION 142d1d080 FUN_142d1d080 body=224 status=ok
// SIG undefined FUN_142d1d080(void)

void FUN_142d1d080(longlong param_1)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  fVar2 = *(float *)(param_1 + 0x1d8);
  local_48 = 0;
  uStack_40 = 0xffffffff;
  local_38 = 0;
  fVar5 = fVar2;
  if ((*(longlong *)(param_1 + 0x2d0) != 0) && (*(longlong *)(param_1 + 0x2b8) != 0)) {
    FUN_142d341a0(*(longlong *)(param_1 + 0x2b8),param_1,&local_48);
    fVar5 = local_38._4_4_;
  }
  iVar3 = *(int *)(param_1 + 0x240);
  *(int *)(param_1 + 0x240) = iVar3 + 1;
  if (*(int *)(param_1 + 0x244) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0x238,iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x238);
  puVar1 = (undefined4 *)(lVar4 + (longlong)iVar3 * 0x18);
  *puVar1 = (undefined4)local_48;
  puVar1[1] = local_48._4_4_;
  puVar1[2] = uStack_40;
  puVar1[3] = uStack_3c;
  *(undefined8 *)(lVar4 + 0x10 + (longlong)iVar3 * 0x18) = local_38;
  *(float *)(param_1 + 0x20c) = fVar2 - fVar5;
  *(float *)(param_1 + 0x1d8) = fVar5;
  FUN_142d0f8e0(param_1);
  return;
}



// FUNCTION 142d1d160 FUN_142d1d160 body=150 status=ok
// SIG undefined FUN_142d1d160(void)

void FUN_142d1d160(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)param_1[6];
  piVar3 = piVar2 + (longlong)(int)param_1[7] * 0x9c;
  for (; piVar2 != piVar3; piVar2 = piVar2 + 0x9c) {
    if ((((*(longlong *)(piVar2 + 0x88) != 0) &&
         (*(char *)(*(longlong *)(piVar2 + 0x88) + 0x140) != '\0')) &&
        ((lVar1 = FWeakObjectPtr::Get(piVar2 + 6), lVar1 == 0 ||
         ((*(uint *)(lVar1 + 0x840) >> 3 & 1) != 0)))) && (*piVar2 != -1)) {
      (**(code **)(*param_1 + 0x278))(param_1,piVar2);
      *piVar2 = -1;
    }
  }
  return;
}



// FUNCTION 142d1d200 FUN_142d1d200 body=421 status=ok
// SIG undefined FUN_142d1d200(void)

void FUN_142d1d200(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *local_68;
  longlong *plStack_60;
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_48;
  longlong *plStack_40;
  longlong local_38;
  undefined8 uStack_30;
  
  if ((param_2 != 0) && (*(int *)(param_2 + 0x328) == 0)) {
    uVar3 = 0;
    plVar1 = *(longlong **)(param_2 + 0x50);
    plVar2 = *(longlong **)(param_2 + 0x28);
    if (plVar1 == (longlong *)0x0) {
      lVar7 = 0;
    }
    else {
      lVar7 = plVar1[0x1f];
      if (lVar7 == 0) {
        (**(code **)(*plVar1 + 0x368))(plVar1);
        lVar7 = plVar1[0x1f];
      }
    }
    plVar1 = *(longlong **)(param_2 + 0x58);
    if (plVar1 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)plVar1[0x1f];
      if (plVar4 == (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x368))(plVar1);
        plVar4 = (longlong *)plVar1[0x1f];
      }
    }
    local_68 = plVar2;
    plStack_60 = plVar4;
    local_58 = lVar7;
    local_48 = plVar2;
    plStack_40 = plVar4;
    local_38 = lVar7;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x280,&local_48);
    FUN_142d1a4b0(param_2,&local_68);
    plVar1 = local_68;
    if (0 < (int)plStack_60) {
      local_48 = *(longlong **)(param_1 + 0x118);
      uVar5 = (ulonglong)((longlong)(local_68 + (int)plStack_60) + (7 - (longlong)local_68)) >> 3;
      if (local_68 + (int)plStack_60 < local_68) {
        uVar5 = uVar3;
      }
      plVar6 = local_68;
      plStack_40 = plVar2;
      local_38 = lVar7;
      uStack_30 = plVar4;
      if (uVar5 != 0) {
        do {
          if (*plVar6 != 0) {
            local_68 = local_48;
            plStack_60 = plStack_40;
            local_58 = local_38;
            uStack_50 = (undefined4)uStack_30;
            uStack_4c = uStack_30._4_4_;
            TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                      (*plVar6 + 0x230,&local_68);
          }
          plVar6 = plVar6 + 1;
          uVar3 = uVar3 + 1;
        } while (uVar3 != uVar5);
      }
    }
    if (plVar1 != (longlong *)0x0) {
      FMemory::Free(plVar1);
    }
  }
  return;
}



// FUNCTION 142d1d3b0 FUN_142d1d3b0 body=953 status=ok
// SIG undefined FUN_142d1d3b0(void)

void FUN_142d1d3b0(longlong param_1,longlong param_2)

{
  float fVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float local_a8;
  float fStack_a4;
  float local_a0;
  undefined8 local_98;
  float local_90;
  
  lVar6 = FUN_142d60010(param_1 + 0x3d0);
  if (lVar6 != 0) {
    return;
  }
  if ((*(longlong *)(param_2 + 0x2d0) != 0) &&
     (*(char *)(*(longlong *)(param_2 + 0x2d0) + 0x248) != '\0')) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 0x118);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  lVar6 = AHeoCon::GetPrivateStaticClass();
  if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  if (plVar2[0x98] == 0) {
    return;
  }
  lVar6 = plVar2[0x120];
  if (lVar6 == 0) {
    return;
  }
  if (((*(byte *)(lVar6 + 0x1128) & 0x10) == 0) &&
     (cVar5 = FUN_1407c3030(lVar6 + 0xd70), cVar5 == '\0')) {
    if ((*(char *)(lVar6 + 0x248) == '\x06') &&
       ((*(char *)(lVar6 + 0x249) == '\0' && (*(longlong *)(lVar6 + 0x178) != 0)))) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    bVar4 = false;
    if (!bVar3) goto LAB_142d1d4a9;
  }
  bVar4 = true;
LAB_142d1d4a9:
  if (!bVar4) {
    fStack_a4 = (float)FUN_142d9ccd0(plVar2 + 0x13d,plVar2[0x98]);
    if (fStack_a4 <= 1.0) {
      fStack_a4 = 1.0;
    }
    local_98 = *(undefined8 *)(param_2 + 0x128);
    local_90 = *(float *)(param_2 + 0x130);
    fStack_a4 = 1.0 / fStack_a4;
    local_a8 = (float)local_98 * fStack_a4;
    local_a0 = local_90 * fStack_a4;
    fStack_a4 = (float)((ulonglong)local_98 >> 0x20) * fStack_a4;
    fVar11 = local_a8 * local_a8 + fStack_a4 * fStack_a4;
    if (*(float *)(param_1 + 0x730) <= SQRT(local_a0 * local_a0 + fVar11)) {
      lVar6 = (**(code **)(*plVar2 + 0x308))(plVar2,&local_98);
      fVar1 = *(float *)(lVar6 + 8);
      if ((0.0 < fVar1) && (0.0 < local_a0)) {
        fVar9 = local_a0;
        if (fVar1 <= local_a0) {
          fVar9 = fVar1;
        }
        if (local_a0 <= fVar1) {
          local_a0 = fVar1;
        }
        local_a0 = (fVar9 * *(float *)(param_1 + 0x738) + local_a0) - fVar1;
      }
      cVar5 = FUN_142d1f7c0(param_2);
      if (cVar5 != '\0') {
        fVar1 = *(float *)(param_1 + 0x73c);
        fVar11 = local_a0 * local_a0 + fVar11;
        if (fVar1 < SQRT(fVar11)) {
          fVar9 = fStack_a4;
          fVar10 = local_a0;
          fVar7 = local_a8;
          if ((fVar11 != 1.0) &&
             (fVar9 = DAT_1468b5d94, fVar10 = DAT_1468b5d98, fVar7 = DAT_1468b5d90, 1e-08 <= fVar11)
             ) {
            auVar8 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
            fVar7 = auVar8._0_4_;
            fVar7 = fVar7 + fVar7 * (0.5 - fVar11 * 0.5 * fVar7 * fVar7);
            fVar7 = fVar7 * (0.5 - fVar11 * 0.5 * fVar7 * fVar7) + fVar7;
            fVar10 = fVar7 * local_a0;
            fVar9 = fStack_a4 * fVar7;
            fVar7 = local_a8 * fVar7;
          }
          local_a8 = fVar7 * fVar1;
          fStack_a4 = fVar9 * fVar1;
          local_a0 = fVar10 * fVar1;
        }
      }
      local_98 = CONCAT44(fStack_a4,local_a8);
      local_90 = local_a0;
      (**(code **)(*plVar2 + 0x8a0))(plVar2,&local_98,0,0);
    }
  }
  return;
}



// FUNCTION 142d1d770 FUN_142d1d770 body=545 status=ok
// SIG undefined FUN_142d1d770(void)

void FUN_142d1d770(longlong *param_1,int param_2,ulonglong *param_3,int param_4,longlong param_5,
                  longlong param_6,longlong param_7)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  char cVar6;
  int *piVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *local_38;
  longlong local_30;
  
  if ((-1 < param_2) && (param_2 < (int)param_1[7])) {
    lVar11 = param_1[6] + (longlong)param_2 * 0x270;
    if ((lVar11 != 0) && (lVar4 = *(longlong *)(lVar11 + 0x220), lVar4 != 0)) {
      *(byte *)(lVar11 + 0x30) = *(byte *)(lVar11 + 0x30) | 6;
      local_38 = param_1;
      local_30 = lVar11;
      FUN_142d0d8f0(&local_38,param_5,lVar11 + 0x248);
      FUN_142d0d8f0(&local_38,param_6,lVar11 + 0x250);
      cVar6 = FUN_14059f160(param_7);
      if (cVar6 != '\0') {
        FUN_1405913a0(lVar11 + 600,param_7);
        *(undefined4 *)(lVar11 + 0x268) = *(undefined4 *)(param_7 + 0x10);
      }
      (**(code **)(*param_1 + 0x288))(param_1,lVar11,param_3);
      if (((param_2 < (int)param_1[7]) &&
          (local_38 = (longlong *)(param_1[6] + (longlong)param_2 * 0x270),
          local_38 != (longlong *)0x0)) &&
         (*(int *)((longlong)local_38 + 0xc) = *(int *)((longlong)local_38 + 0xc) + param_4,
         (*(byte *)(lVar4 + 0x134) & 4) != 0)) {
        uVar10 = 0;
        plVar12 = (longlong *)*param_3;
        uVar13 = (longlong)(int)param_3[1] & 0x1fffffffffffffff;
        if (plVar12 + (int)param_3[1] < plVar12) {
          uVar13 = uVar10;
        }
        plVar8 = local_38;
        if (uVar13 != 0) {
          do {
            plVar9 = plVar8;
            if (*plVar12 != 0) {
              iVar2 = *(int *)(*plVar12 + 0xc);
              plVar1 = plVar8 + 0x47;
              piVar5 = (int *)*plVar1;
              iVar3 = (int)plVar8[0x48];
              for (piVar7 = piVar5; piVar7 != piVar5 + iVar3; piVar7 = piVar7 + 1) {
                if (*piVar7 == iVar2) {
                  plVar9 = local_38;
                  if ((int)((longlong)piVar7 - (longlong)piVar5 >> 2) != -1) goto LAB_142d1d91e;
                  break;
                }
              }
              *(int *)(plVar8 + 0x48) = iVar3 + 1;
              if (*(int *)((longlong)plVar8 + 0x244) < iVar3 + 1) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
              }
              *(int *)((longlong)iVar3 * 4 + *plVar1) = iVar2;
              plVar9 = local_38;
            }
LAB_142d1d91e:
            plVar12 = plVar12 + 1;
            uVar10 = uVar10 + 1;
            plVar8 = plVar9;
          } while (uVar10 != uVar13);
        }
      }
      goto LAB_142d1d968;
    }
  }
  if ((param_5 != 0) &&
     ((*(longlong *)(param_5 + 0x6f0) == 0 ||
      ((*(uint *)(*(longlong *)(param_5 + 0x6f0) + 0x14c) >> 1 & 1) != 0)))) {
    FUN_142600fa0();
  }
  if (param_6 != 0) {
    FUN_142600fa0();
  }
LAB_142d1d968:
  FUN_140591060(param_7);
  return;
}



// FUNCTION 142d1d9a0 FUN_142d1d9a0 body=690 status=ok
// SIG undefined FUN_142d1d9a0(void)

void FUN_142d1d9a0(longlong param_1,undefined8 param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  byte *pbVar7;
  void *_Dst;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  byte *pbVar11;
  undefined4 local_res8;
  undefined4 local_resc;
  
  plVar9 = *(longlong **)(param_1 + 0x38);
  plVar6 = plVar9 + (longlong)*(int *)(param_1 + 0x40) * 0x5c;
  if (plVar9 != plVar6) {
    while ((int)plVar9[0x45] != param_4) {
      plVar9 = plVar9 + 0x5c;
      if (plVar9 == plVar6) {
        return;
      }
    }
    *(undefined1 *)((longlong)plVar9 + 0x2c1) = 3;
    if ((*plVar9 != 0) && (*(longlong *)(*plVar9 + 0x98) != 0)) {
      pbVar11 = *(byte **)(param_3 + 0x100);
      pbVar7 = pbVar11 + (longlong)*(int *)(param_3 + 0x108) * 0x90;
      if (pbVar11 != pbVar7) {
        while (((*pbVar11 & 1) == 0 || ((*pbVar11 & 2) != 0))) {
          pbVar11 = pbVar11 + 0x90;
          if (pbVar11 == pbVar7) {
            return;
          }
        }
        lVar3 = FWeakObjectPtr::Get(pbVar11 + 0x6c);
        if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x91) & 0x40) != 0)) {
          plVar6 = plVar9 + 0x59;
          lVar8 = plVar9[0x5a];
          iVar5 = (int)lVar8 + 1;
          *(int *)(plVar9 + 0x5a) = iVar5;
          if (*(int *)((longlong)plVar9 + 0x2d4) < iVar5) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<400,8>_>,FDefaultAllocator>::
            ResizeGrow(plVar6);
          }
          lVar10 = (longlong)(int)lVar8 * 400;
          _Dst = (void *)(*plVar6 + lVar10);
          *(undefined8 *)((longlong)_Dst + 0x20) = 0;
          *(undefined8 *)((longlong)_Dst + 0xe8) = 0;
          *(undefined8 *)((longlong)_Dst + 0xf0) = 0;
          *(undefined4 *)((longlong)_Dst + 0x164) = 0xffffffff;
          *(undefined4 *)((longlong)_Dst + 0x168) = 0;
          *(undefined4 *)((longlong)_Dst + 0x16c) = 0xffffffff;
          *(undefined4 *)((longlong)_Dst + 0x170) = 0;
          *(undefined4 *)((longlong)_Dst + 0x174) = 0xffffffff;
          *(undefined4 *)((longlong)_Dst + 0x178) = 0;
          *(undefined8 *)((longlong)_Dst + 0x180) = 0;
          *(undefined8 *)((longlong)_Dst + 0x188) = 0;
          *(undefined4 *)((longlong)_Dst + 0x10c) = 0x3f800000;
          _guard_xfg_dispatch_icall_nop(_Dst,0,400);
          lVar8 = *plVar6;
          uVar4 = FUN_142d29780(lVar3);
          *(undefined8 *)(lVar10 + lVar8) = uVar4;
          *(undefined4 *)(lVar10 + 0xf8 + lVar8) = 0x7f7fffff;
          FUN_140729f20(lVar8 + 0x100 + lVar10,pbVar11);
          pbVar11 = (byte *)(lVar10 + 8 + lVar8);
          *pbVar11 = *pbVar11 | 1;
          FWeakObjectPtr::operator=(&local_res8,lVar3);
          lVar8 = plVar9[0xd];
          lVar1 = plVar9[0xe];
          for (lVar10 = lVar8; lVar10 != lVar8 + (longlong)(int)lVar1 * 8; lVar10 = lVar10 + 8) {
            cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar10,&local_res8);
            if (cVar2 != '\0') {
              if ((int)(lVar10 - lVar8 >> 3) != -1) goto LAB_142d1dbb5;
              break;
            }
          }
          iVar5 = (int)plVar9[0xe];
          *(int *)(plVar9 + 0xe) = iVar5 + 1;
          if (*(int *)((longlong)plVar9 + 0x74) < iVar5 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar9 + 0xd,iVar5);
          }
          lVar8 = plVar9[0xd];
          *(undefined4 *)(lVar8 + (longlong)iVar5 * 8) = local_res8;
          *(undefined4 *)(lVar8 + 4 + (longlong)iVar5 * 8) = local_resc;
LAB_142d1dbb5:
          lVar3 = FUN_142d39be0(lVar3);
          if (lVar3 != 0) {
            FWeakObjectPtr::operator=(&local_res8,lVar3);
            lVar3 = plVar9[0xd];
            lVar10 = plVar9[0xe];
            for (lVar8 = lVar3; lVar8 != lVar3 + (longlong)(int)lVar10 * 8; lVar8 = lVar8 + 8) {
              cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar8,&local_res8);
              if (cVar2 != '\0') {
                if ((int)(lVar8 - lVar3 >> 3) != -1) {
                  return;
                }
                break;
              }
            }
            iVar5 = (int)plVar9[0xe];
            *(int *)(plVar9 + 0xe) = iVar5 + 1;
            if (*(int *)((longlong)plVar9 + 0x74) < iVar5 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar9 + 0xd,iVar5);
            }
            lVar3 = plVar9[0xd];
            *(undefined4 *)(lVar3 + (longlong)iVar5 * 8) = local_res8;
            *(undefined4 *)(lVar3 + 4 + (longlong)iVar5 * 8) = local_resc;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142d1dc60 FUN_142d1dc60 body=193 status=ok
// SIG undefined FUN_142d1dc60(void)

void FUN_142d1dc60(longlong *param_1,undefined8 param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  plVar3 = (longlong *)param_1[7];
  plVar4 = plVar3 + (longlong)(int)param_1[8] * 0x5c;
  while( true ) {
    if (plVar3 == plVar4) {
      return;
    }
    if ((int)plVar3[0x45] == param_4) break;
    plVar3 = plVar3 + 0x5c;
  }
  if (lVar2 == 0) {
    return;
  }
  *(undefined1 *)(plVar3 + 0x58) = 3;
  if (*plVar3 == 0) {
    return;
  }
  lVar1 = *(longlong *)(*plVar3 + 0x98);
  if (lVar1 == 0) {
    return;
  }
  if (0 < *(int *)(param_3 + 0x108)) {
    FUN_142d1fdf0(lVar1,*(undefined8 *)(param_3 + 0x100),plVar3 + 0x46);
  }
  FUN_142d15de0(param_1,plVar3,lVar2);
  return;
}



// FUNCTION 142d1dd30 FUN_142d1dd30 body=1072 status=ok
// SIG undefined FUN_142d1dd30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d1dd30(longlong *param_1,undefined8 param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  undefined1 auStack_a68 [32];
  undefined8 local_a48;
  longlong *local_a40;
  longlong *local_a38;
  undefined8 *local_a30;
  undefined4 local_a28 [2];
  longlong local_a20;
  longlong *local_a18;
  longlong local_a10 [3];
  undefined8 local_9f8;
  undefined8 local_9f0;
  longlong local_928;
  undefined8 local_920;
  longlong local_918 [280];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_a68;
  local_a18 = param_1;
  local_a20 = (**(code **)(*param_1 + 0x148))();
  plVar13 = (longlong *)param_1[7];
  plVar9 = plVar13 + (longlong)(int)param_1[8] * 0x5c;
  while( true ) {
    if (plVar13 == plVar9) {
      return;
    }
    if ((int)plVar13[0x45] == param_4) break;
    plVar13 = plVar13 + 0x5c;
  }
  if (local_a20 == 0) {
    return;
  }
  *(undefined1 *)((longlong)plVar13 + 0x2c2) = 3;
  if (*plVar13 == 0) {
    return;
  }
  lVar3 = *(longlong *)(*plVar13 + 0x98);
  if (lVar3 == 0) {
    return;
  }
  local_50._0_4_ = 0;
  puVar16 = *(undefined4 **)(param_3 + 0x100);
  local_58 = (longlong *)0x0;
  local_50 = 0;
  puVar1 = puVar16 + (longlong)*(int *)(param_3 + 0x108) * 6;
  if (puVar16 != puVar1) {
    do {
      lVar6 = FUN_1423111a0(puVar16);
      if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0x91) & 0x40) != 0)) {
        lVar11 = plVar13[0x59];
        lVar14 = (longlong)(int)plVar13[0x5a] * 400 + lVar11;
        for (; lVar11 != lVar14; lVar11 = lVar11 + 400) {
          lVar7 = FWeakObjectPtr::Get(lVar11 + 0x16c);
          if (lVar7 == lVar6) {
            if (lVar11 != 0) goto LAB_142d1dfcd;
            break;
          }
        }
        plVar9 = local_918;
        if (local_58 != (longlong *)0x0) {
          plVar9 = local_58;
        }
        plVar10 = plVar9 + (longlong)(int)local_50 * 0x1c;
        for (; plVar9 != plVar10; plVar9 = plVar9 + 0x1c) {
          if (*plVar9 == lVar6) goto LAB_142d1df56;
        }
        lVar11 = FUN_142d29780(lVar6);
        uVar4 = local_50;
        if ((lVar11 == 0) || ((*(uint *)(lVar11 + 0x840) >> 3 & 1) == 0)) {
          lVar14 = (longlong)(int)local_50;
          iVar8 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar8);
          if (local_50._4_4_ < iVar8) {
            FUN_142d279f0(local_918,uVar4 & 0xffffffff);
          }
          plVar9 = local_918;
          if (local_58 != (longlong *)0x0) {
            plVar9 = local_58;
          }
          plVar9 = plVar9 + lVar14 * 0x1c;
          plVar9[1] = lVar11;
          *plVar9 = lVar6;
          plVar9[0x1a] = 0;
          plVar9[0x1b] = 0;
LAB_142d1df56:
          iVar8 = (int)plVar9[0x1b];
          lVar6 = (longlong)iVar8;
          *(int *)(plVar9 + 0x1b) = iVar8 + 1;
          if (*(int *)((longlong)plVar9 + 0xdc) < iVar8 + 1) {
            TArray<FCompactPose,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
                      (plVar9 + 2,iVar8);
          }
          plVar10 = (longlong *)plVar9[0x1a];
          if ((longlong *)plVar9[0x1a] == (longlong *)0x0) {
            plVar10 = plVar9 + 2;
          }
          *(undefined4 *)(plVar10 + lVar6 * 3) = *puVar16;
          *(undefined4 *)((longlong)plVar10 + lVar6 * 0x18 + 4) = puVar16[1];
          *(undefined4 *)(plVar10 + lVar6 * 3 + 1) = puVar16[2];
          *(undefined4 *)((longlong)plVar10 + lVar6 * 0x18 + 0xc) = puVar16[3];
          *(undefined4 *)(plVar10 + lVar6 * 3 + 2) = puVar16[4];
          puVar2 = (uint *)((longlong)plVar10 + lVar6 * 0x18 + 0x14);
          *puVar2 = *puVar2 ^ (puVar16[5] ^ *(uint *)((longlong)plVar10 + lVar6 * 0x18 + 0x14)) & 1;
        }
      }
LAB_142d1dfcd:
      puVar16 = puVar16 + 6;
    } while (puVar16 != puVar1);
  }
  plVar9 = local_918;
  if (local_58 != (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  puVar12 = (undefined8 *)((ulonglong)plVar9 | (ulonglong)local_58);
  puVar15 = puVar12 + (longlong)(int)local_50 * 0x1c;
  if (puVar12 != puVar15) {
    do {
      local_9f8 = *puVar12;
      local_9f0 = puVar12[1];
      local_928 = 0;
      local_920 = 0;
      local_a28[0] = 0;
      FUN_142d1c440(lVar3,local_a10,&local_9f8);
      if (local_928 != 0) {
        FMemory::Free();
      }
      local_a48 = puVar12[1];
      local_a40 = plVar13 + 0x46;
      cVar5 = FUN_142d286b0(lVar3,local_a28,local_a10,*puVar12);
      if (cVar5 != '\0') {
        local_a40 = local_a10;
        local_a48 = CONCAT44(local_a48._4_4_,local_a28[0]);
        local_a38 = plVar13 + 0x46;
        local_a30 = puVar12;
        FUN_142d0edc0(lVar3,plVar13 + 0x59,puVar12[1],*puVar12);
      }
      puVar12 = puVar12 + 0x1c;
    } while (puVar12 != puVar15);
  }
  FUN_142d13c50(local_a18,plVar13,local_a20);
  plVar13 = local_918;
  if (local_58 != (longlong *)0x0) {
    plVar13 = local_58;
  }
  if ((int)local_50 != 0) {
    plVar13 = plVar13 + 0x1a;
    iVar8 = (int)local_50;
    do {
      if (*plVar13 != 0) {
        FMemory::Free();
      }
      plVar13 = plVar13 + 0x1c;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (local_58 == (longlong *)0x0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 142d1e160 FUN_142d1e160 body=364 status=ok
// SIG undefined FUN_142d1e160(void)

void FUN_142d1e160(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  
  if (param_2 != (longlong *)0x0) {
    lVar5 = FUN_1429bed90();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (param_2[0x23] == *(longlong *)(param_1 + 0x118))) &&
       (cVar3 = (**(code **)(*param_2 + 0x8e0))(param_2,0), cVar3 != '\0')) {
      lVar8 = *(longlong *)(param_1 + 0x2a0);
      bVar9 = 0;
      lVar5 = lVar8 + (longlong)*(int *)(param_1 + 0x2a8) * 0x28;
      if (lVar8 != lVar5) {
        do {
          plVar1 = *(longlong **)(lVar8 + 0x10);
          if ((plVar1 != (longlong *)0x0) &&
             (cVar3 = (**(code **)(*plVar1 + 0x290))(plVar1,0), cVar3 != '\0')) {
            lVar6 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + 0xf8);
            lVar7 = (longlong)*(int *)(*(longlong *)(lVar8 + 0x10) + 0x100) * 0x40 + lVar6;
            for (; lVar6 != lVar7; lVar6 = lVar6 + 0x40) {
              cVar3 = (**(code **)(*param_2 + 0x8e0))(param_2);
              if (cVar3 != '\0') {
                bVar4 = (**(code **)(**(longlong **)(lVar8 + 0x10) + 0x298))
                                  (*(longlong **)(lVar8 + 0x10),lVar6,param_2,param_1);
                bVar9 = bVar9 | bVar4;
              }
            }
          }
          lVar8 = lVar8 + 0x28;
        } while (lVar8 != lVar5);
        if (bVar9 != 0) {
          FUN_142d25e10(param_1);
          FUN_142d10430(param_1);
          FUN_142d12220(param_1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142d1e2d0 FUN_142d1e2d0 body=409 status=ok
// SIG undefined FUN_142d1e2d0(void)

void FUN_142d1e2d0(longlong param_1,longlong *param_2,longlong param_3,int param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  plVar5 = *(longlong **)(param_1 + 0x38);
  plVar2 = plVar5 + (longlong)*(int *)(param_1 + 0x40) * 0x5c;
  if (plVar5 != plVar2) {
    while ((int)plVar5[0x45] != param_4) {
      plVar5 = plVar5 + 0x5c;
      if (plVar5 == plVar2) {
        return;
      }
    }
    if (plVar5 != (longlong *)0x0) {
      lVar4 = plVar5[0x59];
      lVar3 = (longlong)(int)plVar5[0x5a] * 400 + lVar4;
      if (lVar4 != lVar3) {
        do {
          if (*param_2 == *(longlong *)(lVar4 + 0x10)) {
            *(byte *)(lVar4 + 8) = *(byte *)(lVar4 + 8) & 0xf7;
            *(undefined8 *)(lVar4 + 0x10) = 0;
            lVar3 = *plVar5;
            if (lVar3 == 0) {
              return;
            }
            if (*(longlong *)(lVar3 + 0x98) == 0) {
              return;
            }
            _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
            local_8c = 0x3f800000;
            if (0 < *(int *)(param_3 + 0x108)) {
              FUN_140729f20(local_98,*(undefined8 *)(param_3 + 0x100));
              lVar3 = *plVar5;
            }
            cVar1 = FUN_142d13550(*(undefined8 *)(lVar3 + 0x98),local_98,lVar4 + 0x18);
            if (cVar1 == '\0') {
              cVar1 = FUN_142d1f850(lVar4 + 0x18);
              if (cVar1 == '\0') {
                return;
              }
              FUN_142d17470(lVar4,lVar4 + 0x18);
              return;
            }
            if (cVar1 == '\x01') {
              *(byte *)(lVar4 + 8) = *(byte *)(lVar4 + 8) | 0x10;
              return;
            }
            if (cVar1 != '\x02') {
              return;
            }
            FUN_140729f20(lVar4 + 0x100,local_98);
            *(byte *)(lVar4 + 8) = *(byte *)(lVar4 + 8) | 5;
            *(undefined4 *)(lVar4 + 0xf8) = 0x7f7fffff;
            return;
          }
          lVar4 = lVar4 + 400;
        } while (lVar4 != lVar3);
      }
    }
  }
  return;
}



// FUNCTION 142d1e470 FUN_142d1e470 body=37 status=ok
// SIG undefined FUN_142d1e470(void)

undefined4 FUN_142d1e470(longlong param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0xb8) & 8) != 0) {
    iVar1 = FUN_14233f450();
    if (iVar1 != 3) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142d1e4a0 FUN_142d1e4a0 body=211 status=ok
// SIG undefined FUN_142d1e4a0(void)

void FUN_142d1e4a0(undefined8 *param_1)

{
  uint local_28;
  uint uStack_1c;
  undefined4 uStack_14;
  
  *(byte *)((longlong)param_1 + 0x54) = *(byte *)((longlong)param_1 + 0x54) & 0xf0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  local_28 = local_28 & 0xffffff00;
  uStack_1c = uStack_1c & 0xffff0000;
  *(uint *)(param_1 + 0xb) = local_28;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)((longlong)param_1 + 100) = uStack_1c;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uStack_14;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x84)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0xf,0);
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  if ((*(int *)((longlong)param_1 + 0x94) < 0) && (*(int *)((longlong)param_1 + 0x94) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x11,0);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if ((*(int *)((longlong)param_1 + 0x14) < 0) && (*(int *)((longlong)param_1 + 0x14) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 1,0);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < 0) && (*(int *)((longlong)param_1 + 0x2c) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 4,0);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((*(int *)((longlong)param_1 + 0xa4) < 0) && (*(int *)((longlong)param_1 + 0xa4) != 0)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x13,0);
  }
  return;
}



// FUNCTION 142d1e580 FUN_142d1e580 body=716 status=ok
// SIG undefined FUN_142d1e580(void)

void FUN_142d1e580(longlong *param_1)

{
  longlong *plVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  longlong local_res18;
  undefined1 local_48 [8];
  longlong local_40;
  
  iVar4 = FUN_14233f450();
  if (iVar4 == 3) {
    if ((int)param_1[0xce] == 0) {
      iVar4 = (int)param_1[0xd0] + -1;
      if (-1 < iVar4) {
        lVar10 = (longlong)iVar4 * 0x78;
        lVar12 = (longlong)(int)param_1[0xd0] * 0x78;
        lVar8 = lVar10;
        do {
          if ((*(byte *)(param_1[0xcf] + 0x20 + lVar10) & 2) != 0) {
            fVar13 = (float)FUN_142c98860(param_1[0xcf] + 0x28 + lVar8,param_1[0x23]);
            iVar5 = rand();
            if (fVar13 <= (float)iVar5 * 3.051851e-05) {
              lVar11 = param_1[0xcf];
              if (*(longlong *)(lVar8 + 0x10 + lVar11) != 0) {
                FMemory::Free();
                lVar11 = param_1[0xcf];
              }
              iVar5 = (int)param_1[0xd0];
              iVar6 = (iVar5 - iVar4) + -1;
              if (iVar6 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(lVar8 + lVar11),(void *)(lVar12 + lVar11),(longlong)iVar6 * 0x78
                          );
                iVar5 = (int)param_1[0xd0];
              }
              *(int *)(param_1 + 0xd0) = iVar5 + -1;
            }
          }
          lVar12 = lVar12 + -0x78;
          lVar8 = lVar8 + -0x78;
          lVar10 = lVar10 + -0x78;
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
      }
      lVar8 = param_1[0xcf];
      lVar10 = (longlong)(int)param_1[0xd0] * 0x78 + lVar8;
      for (; lVar8 != lVar10; lVar8 = lVar8 + 0x78) {
        FUN_142d3da80(lVar8,param_1[0x23]);
      }
    }
    else if ((int)param_1[0xce] == 1) {
      param_1[0xdb] = (longlong)param_1;
      FUN_142c98860(param_1 + 0xd1,param_1[0x23]);
      FUN_14246fd50(param_1 + 0xd9);
      fVar13 = 0.0;
      if (0.0 <= *(float *)((longlong)param_1 + 0x6cc)) {
        fVar13 = *(float *)((longlong)param_1 + 0x6cc);
      }
      *(float *)((longlong)param_1 + 0x6d4) = fVar13;
      if ((longlong *)param_1[0xdb] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xdb] + 0x260))();
      }
      plVar1 = (longlong *)param_1[0x23];
      if (plVar1 != (longlong *)0x0) {
        uVar7 = FUN_142dfdf30();
        lVar8 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar7);
        if (lVar8 != 0) {
          pwVar9 = _guard_xfg_dispatch_icall_nop
                             (L"&UDamageComponent::OnOwnerExperienceLevelChanged",L"::");
          pwVar3 = (wchar_t *)0x0;
          while (pwVar2 = pwVar9, pwVar2 != (wchar_t *)0x0) {
            pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
            pwVar3 = pwVar2;
          }
          FName::FName(&local_res18,pwVar3 + 2,1);
          FWeakObjectPtr::operator=(local_48,0);
          local_40 = 0;
          FWeakObjectPtr::operator=(local_48,param_1);
          local_40 = local_res18;
          if ((local_res18 != 0) && (lVar10 = FWeakObjectPtr::Get(local_48), lVar10 != 0)) {
            UObject::FindFunction(lVar10,local_40);
          }
          FUN_1406a5aa0(lVar8 + 0x1b0,local_48);
        }
      }
    }
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  return;
}



// FUNCTION 142d1e850 FUN_142d1e850 body=1806 status=ok
// SIG undefined FUN_142d1e850(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d1e850(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined1 local_40 [24];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_140a7db00(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar9 = FUN_142e49950();
    for (lVar11 = *(longlong *)(param_1 + 0x58); lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x30))
    {
      if (lVar11 == lVar9) {
        if (*(longlong *)(param_1 + 0x58) != 0) goto LAB_142d1e8a1;
        break;
      }
    }
  }
  uVar10 = FUN_142e49950();
  *(undefined8 *)(param_1 + 0x58) = uVar10;
LAB_142d1e8a1:
  if (*(longlong *)(param_1 + 0x50) != 0) {
    lVar9 = FUN_142e0d0b0();
    for (lVar11 = *(longlong *)(param_1 + 0x50); lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x30))
    {
      if (lVar11 == lVar9) {
        if (*(longlong *)(param_1 + 0x50) != 0) goto LAB_142d1e8de;
        break;
      }
    }
  }
  uVar10 = FUN_142e0d0b0();
  *(undefined8 *)(param_1 + 0x50) = uVar10;
LAB_142d1e8de:
  if ((*(longlong *)(param_1 + 0x48) == 0) &&
     ((*(longlong *)(param_1 + 0x28) != 0 || (*(longlong *)(param_1 + 0x38) != 0)))) {
    uVar10 = FUN_142d39a30();
    *(undefined8 *)(param_1 + 0x48) = uVar10;
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar11 = FUN_142dccd00(*(undefined8 *)(param_1 + 0x48));
    if (lVar11 == 0) {
      if (*(longlong *)(param_1 + 0x48) == 0) goto LAB_142d1e929;
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x488);
    }
    *(longlong *)(param_1 + 0x28) = lVar11;
  }
LAB_142d1e929:
  if (*(longlong *)(param_1 + 0x38) == 0) {
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x28);
  }
  uVar10 = 0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar11 = FUN_140a63ba0();
    *(longlong *)(param_1 + 0x268) = lVar11;
    if (lVar11 == 0) {
      lVar11 = *(longlong *)(param_1 + 0x28);
      *(longlong *)(param_1 + 0x268) = lVar11;
    }
    uVar14 = uVar10;
    if (lVar11 != 0) {
      uVar12 = UDamageableInterface::GetPrivateStaticClass();
      plVar13 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar11,uVar12);
      if (plVar13 == (longlong *)0x0) {
        plVar13 = *(longlong **)(param_1 + 0x268);
        if (plVar13 != (longlong *)0x0) {
          local_res20 = FUN_142e0a580();
          uVar14 = (**(code **)(*plVar13 + 0x628))(plVar13,local_res20);
        }
      }
      else {
        uVar14 = (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
    *(undefined8 *)(param_1 + 0x290) = uVar14;
  }
  *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x268) != 0) {
    lVar11 = FUN_142d39a30();
    *(longlong *)(param_1 + 0x270) = lVar11;
    if (lVar11 == 0) {
      uVar14 = FUN_142d39a30(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x270) = uVar14;
    }
  }
  *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined4 *)(param_1 + 0x2d8) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    uVar14 = FUN_142d39a30();
    *(undefined8 *)(param_1 + 0x278) = uVar14;
    lVar11 = FUN_140a63ba0(*(undefined8 *)(param_1 + 0x30));
    *(longlong *)(param_1 + 0x280) = lVar11;
    if (lVar11 == 0) {
      lVar11 = *(longlong *)(param_1 + 0x30);
      *(longlong *)(param_1 + 0x280) = lVar11;
    }
    uVar14 = FUN_142d39a30(lVar11);
    *(undefined8 *)(param_1 + 0x288) = uVar14;
  }
  plVar13 = *(longlong **)(param_1 + 0x28);
  lVar11 = 0;
  if (plVar13 != (longlong *)0x0) {
    uVar14 = FUN_142e0a580();
    uVar14 = (**(code **)(*plVar13 + 0x628))(plVar13,uVar14,*plVar13,param_4,uVar14);
    lVar11 = *(longlong *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x298) = uVar14;
  }
  lVar9 = *(longlong *)(param_1 + 0x298);
  if ((lVar9 == 0) || (*(int *)(lVar9 + 0x240) != 0)) {
    lVar9 = *(longlong *)(param_1 + 0x290);
  }
  *(longlong *)(param_1 + 0x2a0) = lVar9;
  *(longlong *)(param_1 + 0x2a8) = lVar9;
  if (lVar11 != 0) {
    uVar14 = UDamageableInterface::GetPrivateStaticClass();
    plVar13 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar11,uVar14);
    if ((plVar13 != (longlong *)0x0) &&
       (lVar11 = (**(code **)(*plVar13 + 0x18))(plVar13), lVar11 != 0)) {
      *(longlong *)(param_1 + 0x2a8) = lVar11;
    }
  }
  *(undefined8 *)(param_1 + 0x328) = 1;
  if ((*(longlong *)(param_1 + 0x48) == 0) ||
     ((*(uint *)(*(longlong *)(param_1 + 0x48) + 0x4cc) >> 1 & 1) == 0)) {
    if ((*(longlong *)(param_1 + 0x270) == 0) ||
       ((*(uint *)(*(longlong *)(param_1 + 0x270) + 0x4cc) >> 1 & 1) == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x330) = uVar4;
  if ((*(longlong *)(param_1 + 0x2b0) == 0) ||
     (lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x118), lVar11 == 0)) {
LAB_142d1ec01:
    uVar4 = 0;
  }
  else {
    lVar9 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_142d1ec01;
    if ((*(longlong *)(lVar11 + 0x490) == 0) ||
       ((*(uint *)(*(longlong *)(lVar11 + 0x490) + 0x4cc) >> 1 & 1) == 0)) {
      lVar9 = AHeoCon::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((!bVar3) || (*(longlong *)(lVar11 + 0x9d0) == 0)) goto LAB_142d1ec01;
      uVar4 = 1;
    }
    else {
      uVar4 = 1;
    }
  }
  lVar11 = *(longlong *)(param_1 + 0x2b0);
  *(undefined1 *)(param_1 + 0x331) = uVar4;
  if (lVar11 != 0) {
    if ((*(longlong *)(lVar11 + 0x818) == 0) || ((*(byte *)(lVar11 + 0x7e8) & 2) == 0)) {
      lVar9 = *(longlong *)(lVar11 + 0x810);
    }
    else {
      lVar9 = FUN_142d1ab50();
    }
    *(longlong *)(param_1 + 0x2b8) = lVar9;
    if (lVar9 != 0) {
      puVar15 = (undefined4 *)FUN_142d3b5d0(lVar9,local_40,param_1);
      lVar11 = *(longlong *)(param_1 + 0x2b0);
      uVar6 = puVar15[1];
      uVar1 = puVar15[2];
      uVar2 = puVar15[3];
      *(undefined4 *)(param_1 + 0x2d0) = *puVar15;
      *(undefined4 *)(param_1 + 0x2d4) = uVar6;
      *(undefined4 *)(param_1 + 0x2d8) = uVar1;
      *(undefined4 *)(param_1 + 0x2dc) = uVar2;
    }
  }
  if (*(longlong *)(param_1 + 0x290) != 0) {
    uVar12 = FUN_142d1c670();
    uVar14 = uVar10;
    if (lVar11 != 0) {
      uVar14 = FUN_142d1c670(lVar11);
    }
    uVar6 = FUN_142df3570(uVar12,uVar14);
    lVar11 = *(longlong *)(param_1 + 0x2b0);
    *(undefined4 *)(param_1 + 0x328) = uVar6;
  }
  if ((lVar11 != 0) && (plVar13 = *(longlong **)(lVar11 + 0x118), plVar13 != (longlong *)0x0)) {
    uVar14 = FUN_142dfdf30();
    uVar14 = (**(code **)(*plVar13 + 0x628))(plVar13,uVar14);
    *(undefined8 *)(param_1 + 0x2c0) = uVar14;
  }
  plVar13 = *(longlong **)(param_1 + 0x28);
  if (plVar13 != (longlong *)0x0) {
    uVar14 = FUN_142dfdf30();
    lVar11 = (**(code **)(*plVar13 + 0x628))(plVar13,uVar14);
    *(longlong *)(param_1 + 0x2c8) = lVar11;
    if ((lVar11 == 0) && (plVar13 = *(longlong **)(param_1 + 0x268), plVar13 != (longlong *)0x0)) {
      uVar14 = FUN_142dfdf30();
      uVar14 = (**(code **)(*plVar13 + 0x628))(plVar13,uVar14);
      *(undefined8 *)(param_1 + 0x2c8) = uVar14;
    }
  }
  plVar13 = *(longlong **)(param_1 + 0x2c8);
  if ((plVar13 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x2c0) != 0)) {
    iVar7 = (**(code **)(**(longlong **)(param_1 + 0x2c0) + 0x408))();
    iVar8 = (**(code **)(*plVar13 + 0x408))(plVar13);
    *(int *)(param_1 + 0x32c) = iVar8 - iVar7;
  }
  if (((*(float *)(param_1 + 0x110) == 0.0) && (*(float *)(param_1 + 0x114) == 0.0)) &&
     (*(float *)(param_1 + 0x118) == 0.0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (((bVar3) && (*(longlong *)(param_1 + 0x2b0) != 0)) &&
     (lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x118), lVar11 != 0)) {
    lVar11 = *(longlong *)(lVar11 + 0x168);
    if (lVar11 == 0) {
      local_44 = DAT_1468b5d98;
      puVar16 = &local_4c;
      local_4c = _DAT_1468b5d90;
    }
    else {
      local_28 = *(undefined4 *)(lVar11 + 0x220);
      uStack_24 = *(undefined4 *)(lVar11 + 0x224);
      uStack_20 = *(undefined4 *)(lVar11 + 0x228);
      uStack_1c = *(undefined4 *)(lVar11 + 0x22c);
      puVar16 = (undefined8 *)&local_58;
      local_58 = local_28;
      local_50 = uStack_20;
      uStack_54 = uStack_24;
    }
    uVar6 = *(undefined4 *)(puVar16 + 1);
    *(undefined8 *)(param_1 + 0x110) = *puVar16;
    *(undefined4 *)(param_1 + 0x118) = uVar6;
  }
  if (((*(longlong *)(param_1 + 0x2a8) != 0) &&
      (*(int *)(*(longlong *)(param_1 + 0x2a8) + 0x2a8) != 0)) && (*(int *)(param_1 + 0x328) != 0))
  {
    local_res18 = *(undefined8 *)(param_1 + 0x58);
    if (*(longlong *)(param_1 + 0x2b0) != 0) {
      uVar10 = *(undefined8 *)(*(longlong *)(param_1 + 0x2b0) + 0x118);
    }
    cVar5 = FUN_142d3e570(uVar10,&local_res18);
    if (cVar5 == '\0') {
      *(undefined1 *)(param_1 + 0x345) = 1;
    }
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar11 = DAT_146b33f38;
  lVar17 = DAT_146b33f38 + 0x30;
  lVar9 = FWeakObjectPtr::Get(lVar17);
  if (lVar9 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar11 + 0x38)) || (*(longlong *)(lVar11 + 0x40) == 0))
    goto LAB_142d1ef44;
    lVar9 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar17,lVar9);
    if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar11 + 0x38) = DAT_1464b56f4;
    }
    lVar9 = FWeakObjectPtr::Get(lVar17);
    if (lVar9 == 0) goto LAB_142d1ef44;
  }
  lVar11 = FUN_142e0ceb0();
  if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
      != lVar11 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    *(longlong *)(param_1 + 800) = lVar9;
    return;
  }
LAB_142d1ef44:
  *(undefined8 *)(param_1 + 800) = 0;
  return;
}



// FUNCTION 142d1ef60 FUN_142d1ef60 body=480 status=ok
// SIG undefined FUN_142d1ef60(void)

void FUN_142d1ef60(longlong param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  
  FUN_142d1e4a0(param_1 + 0x1c0);
  lVar6 = 0;
  *(undefined4 *)(param_1 + 0x1c0) = param_2;
  *(undefined4 *)(param_1 + 0x1d8) = param_2;
  if (*(longlong *)(param_1 + 0x2b0) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_142d19870();
    lVar6 = *(longlong *)(param_1 + 0x2b0);
  }
  *(undefined4 *)(param_1 + 0x1c4) = uVar7;
  if (lVar6 != 0) {
    *(byte *)(param_1 + 0x214) =
         *(byte *)(param_1 + 0x214) ^
         ((char)(*(uint *)(lVar6 + 0x840) >> 3) * '\x02' ^ *(byte *)(param_1 + 0x214)) & 2;
    if (*(int *)(lVar6 + 0x670) == 0) {
      lVar5 = *(longlong *)(lVar6 + 0x678);
      lVar6 = (longlong)*(int *)(lVar6 + 0x680) * 0x78 + lVar5;
      if (lVar5 != lVar6) {
        lVar4 = lVar5 + 0x60;
        do {
          uVar7 = 0;
          cVar2 = FUN_142d52a00(lVar4);
          if (cVar2 != '\0') {
            uVar3 = FUN_142d52a20(lVar4);
            uVar3 = FArchive::operator<<(uVar3);
            uVar7 = FUN_142d5fed0(uVar3);
          }
          iVar1 = *(int *)(param_1 + 0x1d0);
          *(int *)(param_1 + 0x1d0) = iVar1 + 1;
          if (*(int *)(param_1 + 0x1d4) < iVar1 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x1c8),iVar1);
          }
          *(undefined4 *)(*(longlong *)(param_1 + 0x1c8) + (longlong)iVar1 * 4) = uVar7;
          iVar1 = *(int *)(param_1 + 0x1e8);
          *(int *)(param_1 + 0x1e8) = iVar1 + 1;
          if (*(int *)(param_1 + 0x1ec) < iVar1 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x1e0),iVar1);
          }
          lVar5 = lVar5 + 0x78;
          lVar4 = lVar4 + 0x78;
          *(undefined4 *)(*(longlong *)(param_1 + 0x1e0) + (longlong)iVar1 * 4) = 0;
        } while (lVar5 != lVar6);
      }
    }
    else if (*(int *)(lVar6 + 0x670) == 1) {
      iVar1 = *(int *)(param_1 + 0x1d0);
      uVar7 = *(undefined4 *)(lVar6 + 0x6d4);
      *(int *)(param_1 + 0x1d0) = iVar1 + 1;
      if (*(int *)(param_1 + 0x1d4) < iVar1 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x1c8,iVar1);
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x1c8) + (longlong)iVar1 * 4) = uVar7;
      iVar1 = *(int *)(param_1 + 0x1e8);
      *(int *)(param_1 + 0x1e8) = iVar1 + 1;
      if (*(int *)(param_1 + 0x1ec) < iVar1 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x1e0,iVar1);
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x1e0) + (longlong)iVar1 * 4) = 0;
    }
  }
  return;
}



// FUNCTION 142d1f140 FUN_142d1f140 body=191 status=ok
// SIG undefined FUN_142d1f140(void)

void FUN_142d1f140(byte *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    *param_1 = *(byte *)(param_2 + 0x214) & 1;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 0x110);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x118);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x11c);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x124);
    uVar1 = FWeakObjectPtr::Get(param_2 + 0xd4);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x2d0);
    FUN_1408e22e0(param_1 + 0x30,param_2 + 600);
    param_1[0x50] = *(char *)(param_2 + 0x218) != '\0';
    if ((byte)(*(char *)(param_2 + 0x2f0) - 1U) < 2) {
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x2f8);
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x300);
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x304);
    }
  }
  return;
}



// FUNCTION 142d1f200 FUN_142d1f200 body=125 status=ok
// SIG undefined FUN_142d1f200(void)

undefined8 FUN_142d1f200(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    plVar4 = (longlong *)param_1[1];
    if ((plVar4 == (longlong *)0x0) || (param_1[2] == 0)) {
      plVar4 = (longlong *)FWeakObjectPtr::Get((longlong)param_1 + 0xbc);
      if (plVar4 == (longlong *)0x0) {
        return 1;
      }
      lVar3 = (**(code **)(*plVar4 + 0x148))(plVar4);
    }
    else {
      lVar3 = (**(code **)(*plVar4 + 0x148))(plVar4);
    }
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x120);
    if (lVar3 != 0) goto LAB_142d1f262;
    lVar3 = FUN_1423407b0(lVar1);
  }
  if (lVar3 == 0) {
    return 1;
  }
LAB_142d1f262:
  iVar2 = FUN_1428cf800(lVar3);
  if (iVar2 == 3) {
    return 1;
  }
  return 0;
}



// FUNCTION 142d1f280 FUN_142d1f280 body=38 status=ok
// SIG undefined FUN_142d1f280(void)

uint FUN_142d1f280(uint *param_1,int param_2)

{
  if (param_2 == 0) {
    return *param_1 >> 2 & 0xffffff01;
  }
  if (param_2 != 1) {
    if (param_2 != 2) {
      return 1;
    }
    return (uint)((byte)*param_1 & 1);
  }
  return *param_1 >> 1 & 1;
}



// FUNCTION 142d1f2b0 FUN_142d1f2b0 body=90 status=ok
// SIG undefined FUN_142d1f2b0(void)

bool FUN_142d1f2b0(longlong param_1,float param_2,float param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_142d1b990();
  if (0.0 < fVar1) {
    return param_3 <= (param_2 * *(float *)(param_1 + 0x798)) / fVar1;
  }
  return true;
}



// FUNCTION 142d1f310 FUN_142d1f310 body=385 status=ok
// SIG undefined FUN_142d1f310(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_142d1f310(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  float fVar6;
  
  if (*(int *)(param_1 + 0x670) == 0) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar1 + 0x38) < DAT_146866c88) &&
       (_Init_thread_header(&DAT_146866c88), DAT_146866c88 == -1)) {
      DAT_146866c70 = 0xff;
      _DAT_146866c78 = 0;
      DAT_146866c80._0_4_ = 0;
      _Init_thread_footer(&DAT_146866c88);
    }
    puVar5 = &DAT_146866c70;
    if (*(int *)(param_1 + 0x680) < 1) {
      puVar4 = &DAT_146866c70;
    }
    else {
      puVar4 = (undefined *)(*(longlong *)(param_1 + 0x678) + 0x60);
    }
    cVar2 = FUN_142d52a00(puVar4);
    if (cVar2 != '\0') {
      if ((*(int *)(lVar1 + 0x38) < DAT_146866c88) &&
         (_Init_thread_header(&DAT_146866c88), DAT_146866c88 == -1)) {
        DAT_146866c70 = 0xff;
        _DAT_146866c78 = 0;
        DAT_146866c80._0_4_ = 0;
        _Init_thread_footer(&DAT_146866c88);
      }
      if (0 < *(int *)(param_1 + 0x680)) {
        puVar5 = (undefined *)(*(longlong *)(param_1 + 0x678) + 0x60);
      }
      uVar3 = FUN_142d52a20(puVar5);
      uVar3 = FArchive::operator<<(uVar3);
      fVar6 = (float)FUN_142d5fed0(uVar3);
      return fVar6 <= 0.0;
    }
  }
  else if ((*(int *)(param_1 + 0x670) == 1) && (0.0 < *(float *)(param_1 + 0x6cc))) {
    return *(float *)(param_1 + 0x6d4) <= 0.0;
  }
  return false;
}



// FUNCTION 142d1f4a0 FUN_142d1f4a0 body=231 status=ok
// SIG undefined FUN_142d1f4a0(void)

undefined8 FUN_142d1f4a0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  
  if (*(int *)(param_1 + 0x670) == 0) {
    iVar3 = *(int *)(param_1 + 0x680) + -1;
    if (-1 < iVar3) {
      lVar4 = (longlong)iVar3 * 0x78;
      do {
        if (*(longlong *)(lVar4 + *(longlong *)(param_1 + 0x678)) == param_2) {
          cVar1 = FUN_142d52a00(*(longlong *)(param_1 + 0x678) + 0x60 + (longlong)iVar3 * 0x78);
          if (cVar1 != '\0') {
            uVar2 = FUN_142d52a20(*(longlong *)(param_1 + 0x678) + 0x60 + (longlong)iVar3 * 0x78);
            uVar2 = FArchive::operator<<(uVar2);
            fVar5 = (float)FUN_142d5fed0(uVar2);
            if (0.0 < fVar5) {
              return 0;
            }
          }
        }
        lVar4 = lVar4 + -0x78;
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
    }
  }
  else if (((*(int *)(param_1 + 0x670) == 1) && (*(longlong *)(param_1 + 0x6c0) == param_2)) &&
          (0.0 < *(float *)(param_1 + 0x6d4))) {
    return 0;
  }
  return 1;
}



// FUNCTION 142d1f590 FUN_142d1f590 body=132 status=ok
// SIG undefined FUN_142d1f590(void)

undefined8 FUN_142d1f590(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  if (((*(byte *)(param_1 + 0x840) & 2) != 0) ||
     (cVar3 = FUN_1407c3030(param_1 + 0x328), cVar3 != '\0')) {
    return 1;
  }
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    lVar4 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (cVar3 = (**(code **)(*plVar1 + 0xa10))(plVar1), cVar3 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142d1f620 FUN_142d1f620 body=41 status=ok
// SIG undefined FUN_142d1f620(void)

undefined1 FUN_142d1f620(longlong param_1)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 0x840) & 1) == 0) {
    cVar1 = FUN_1407c3030(param_1 + 0x290);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142d1f650 FUN_142d1f650 body=348 status=ok
// SIG undefined FUN_142d1f650(void)

undefined8 FUN_142d1f650(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_48;
  longlong local_40;
  longlong local_38 [2];
  
  lVar6 = *(longlong *)(param_1 + 0xf8);
  lVar7 = (longlong)*(int *)(param_1 + 0x100) * 0x40 + lVar6;
  if (lVar6 != lVar7) {
    piVar3 = (int *)(lVar6 + 0x30);
    do {
      plVar5 = *(longlong **)(piVar3 + -6);
      plVar4 = plVar5 + (longlong)piVar3[-4] * 4;
      for (; plVar5 != plVar4; plVar5 = plVar5 + 4) {
        local_48 = *plVar5;
        local_40 = plVar5[1];
        FString::FString(local_38,plVar5 + 2);
        if ((local_40 != 0) && (lVar1 = FUN_141796df0(&local_40), lVar2 = local_38[0], lVar1 == 0))
        goto LAB_142d1f79e;
        if (local_38[0] != 0) {
          FMemory::Free();
        }
      }
      plVar4 = *(longlong **)(piVar3 + -2);
      plVar5 = plVar4 + (longlong)*piVar3 * 3;
      for (; plVar4 != plVar5; plVar4 = plVar4 + 3) {
        local_48 = *plVar4;
        FString::FString(&local_40,plVar4 + 1);
        if ((local_48 != 0) && (lVar1 = FUN_141796280(&local_48), lVar2 = local_40, lVar1 == 0)) {
LAB_142d1f79e:
          if (lVar2 != 0) {
            FMemory::Free();
          }
          return 0;
        }
        if (local_40 != 0) {
          FMemory::Free();
        }
      }
      lVar6 = lVar6 + 0x40;
      piVar3 = piVar3 + 0x10;
    } while (lVar6 != lVar7);
  }
  return 1;
}



// FUNCTION 142d1f7b0 HasAnyChildren body=11 status=ok
// SIG undefined HasAnyChildren(void)

bool UPanelWidget::HasAnyChildren(longlong param_1)

{
  return 0 < *(int *)(param_1 + 0x128);
}



// FUNCTION 142d1f7c0 FUN_142d1f7c0 body=142 status=ok
// SIG undefined FUN_142d1f7c0(void)

longlong FUN_142d1f7c0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  uint7 uVar3;
  longlong lVar4;
  
  if ((*(longlong *)(param_1 + 0x2b0) != 0) &&
     (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x118), lVar4 != 0)) {
    lVar2 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142d1f81d;
  }
  lVar4 = 0;
LAB_142d1f81d:
  lVar2 = *(longlong *)(param_1 + 0x48);
  uVar3 = (uint7)((ulonglong)lVar2 >> 8);
  if (((lVar4 != 0) && (lVar2 != 0)) && (*(longlong *)(lVar4 + 0x490) == lVar2)) {
    return CONCAT71(uVar3,1);
  }
  return (ulonglong)uVar3 << 8;
}



// FUNCTION 142d1f850 FUN_142d1f850 body=91 status=ok
// SIG undefined FUN_142d1f850(void)

undefined8 FUN_142d1f850(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0xd8) == 1) {
    lVar3 = *(longlong *)(param_1 + 0xd0);
    if (*(longlong *)(param_1 + 0xd0) == 0) {
      lVar3 = param_1 + 0x10;
    }
    uVar2 = FUN_14046ef90(lVar3);
    cVar1 = FUN_142d2bbb0(uVar2,0,param_1);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142d1f8b0 FUN_142d1f8b0 body=140 status=ok
// SIG undefined FUN_142d1f8b0(void)

undefined8 FUN_142d1f8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_18;
  longlong *local_10;
  
  FUN_142d22270(param_1,&local_18,param_2,param_3,1);
  uVar5 = 0;
  if (local_18 != 0) {
    uVar5 = *(undefined8 *)(local_18 + 0x10);
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return uVar5;
  }
  return uVar5;
}



// FUNCTION 142d1f940 FUN_142d1f940 body=394 status=ok
// SIG undefined FUN_142d1f940(void)

void FUN_142d1f940(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  void *_Dst;
  undefined1 local_res8 [8];
  
  if ((*(byte *)(param_1 + 0x2c) & 1) != 0) {
    param_3 = *(int *)(param_1 + 0x28) - param_3;
    iVar6 = 0;
    if (-1 < param_3) {
      iVar6 = param_3;
    }
    if (iVar6 < (int)param_2[1]) {
      local_res8[0] = 0;
      FUN_142d09800(*param_2,(longlong)(int)param_2[1],0,local_res8);
      plVar2 = (longlong *)*param_2;
      iVar1 = (int)param_2[1];
      for (plVar3 = plVar2; plVar3 != plVar2 + (longlong)iVar1 * 0x32; plVar3 = plVar3 + 0x32) {
        if (*plVar3 != 0) {
          lVar5 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((longlong)plVar3 - (longlong)plVar2)
                         ,8) + ((longlong)plVar3 - (longlong)plVar2);
          iVar4 = (int)((ulonglong)lVar5 >> 8) - (int)(lVar5 >> 0x3f);
          if (iVar4 == -1) {
            return;
          }
          iVar4 = iVar4 + iVar6;
          if (iVar1 <= iVar4) {
            return;
          }
          if (iVar4 <= iVar1) {
            if (iVar1 <= iVar4) {
              return;
            }
            FUN_142d26a10(param_2,iVar4,iVar1 - iVar4,1);
            return;
          }
          iVar6 = iVar4 - iVar1;
          *(int *)(param_2 + 1) = iVar4;
          if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<400,8>_>,FDefaultAllocator>::
            ResizeGrow(param_2);
          }
          _Dst = (void *)((longlong)iVar1 * 400 + *param_2);
          if (iVar6 == 0) {
            return;
          }
          lVar5 = (longlong)_Dst + 0x170;
          do {
            *(undefined8 *)(lVar5 + -0x160) = 0;
            *(undefined8 *)(lVar5 + -0x158) = 0;
            *(undefined8 *)(lVar5 + -0x150) = 0;
            *(undefined8 *)(lVar5 + -0x88) = 0;
            *(undefined8 *)(lVar5 + -0x80) = 0;
            _guard_xfg_dispatch_icall_nop((void *)(lVar5 + -0x70),0,0x90);
            *(undefined4 *)(lVar5 + -100) = 0x3f800000;
            _guard_xfg_dispatch_icall_nop(_Dst,0,400);
            _Dst = (void *)((longlong)_Dst + 400);
            lVar5 = lVar5 + 400;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 142d1fad0 FUN_142d1fad0 body=614 status=ok
// SIG undefined FUN_142d1fad0(void)

void FUN_142d1fad0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  int iVar5;
  wchar_t *pwVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 local_res8;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if ((((param_2 != param_1) && (param_2 != 0)) &&
      (((*(byte *)(param_1 + 0xb8) & 8) == 0 || (iVar5 = FUN_14233f450(), iVar5 == 3)))) &&
     (*(longlong *)(param_1 + 0x340) == 0)) {
    *(longlong *)(param_1 + 0x340) = param_2;
    FUN_142d14820(param_1,param_2);
    uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
    local_18 = FUN_142d1fd40;
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::LinkedCustomizationApplied",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res8,pwVar3 + 2,1);
    FUN_140ddbc10(param_2 + 800,param_1,&local_18,local_res8);
    uStack_10 = uStack_10 & 0xffffffff00000000;
    local_18 = FUN_142d1fd90;
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::LinkedCustomizationRemoved",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res8,pwVar3 + 2,1);
    FUN_140ddbc10(param_2 + 0x330,param_1,&local_18,local_res8);
    plVar11 = (longlong *)(param_2 + 0x308);
    plVar7 = (longlong *)*plVar11;
    plVar10 = plVar7 + (longlong)*(int *)(param_2 + 0x310) * 2;
    for (; plVar7 != plVar10; plVar7 = plVar7 + 2) {
      if ((((int)plVar7[1] != 0) && (plVar1 = (longlong *)*plVar7, plVar1 != (longlong *)0x0)) &&
         (cVar4 = (**(code **)(*plVar1 + 8))(plVar1,param_1), cVar4 != '\0')) {
        return;
      }
    }
    uStack_10 = uStack_10 & 0xffffffff00000000;
    local_18 = (code *)&LAB_142d1fd80;
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar7 + 1,param_1);
      *(undefined4 *)(plVar7 + 2) = (undefined4)local_18;
      *(undefined4 *)((longlong)plVar7 + 0x14) = local_18._4_4_;
      *(undefined4 *)(plVar7 + 3) = (undefined4)uStack_10;
      *(uint *)((longlong)plVar7 + 0x1c) = uStack_10._4_4_;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[5] = lVar8;
      *plVar7 = (longlong)&PTR_FUN_143fcff08;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar11,1);
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_res8);
      iVar5 = *(int *)(param_2 + 0x310);
      *(int *)(param_2 + 0x310) = iVar5 + 1;
      if (*(int *)(param_2 + 0x314) < iVar5 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar5);
      }
      puVar9 = (undefined8 *)((longlong)iVar5 * 0x10 + *plVar11);
      *puVar9 = plVar7;
      *(undefined4 *)(puVar9 + 1) = 3;
    }
  }
  return;
}



// FUNCTION 142d1fd40 FUN_142d1fd40 body=60 status=ok
// SIG undefined FUN_142d1fd40(void)

void FUN_142d1fd40(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if (((*(byte *)(param_1 + 0xb8) & 8) != 0) && (iVar1 = FUN_14233f450(), iVar1 != 3)) {
    return;
  }
  FUN_142d271f0(param_1,param_2,0);
  return;
}



// FUNCTION 142d1fd90 FUN_142d1fd90 body=57 status=ok
// SIG undefined FUN_142d1fd90(void)

void FUN_142d1fd90(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if (((*(byte *)(param_1 + 0xb8) & 8) != 0) && (iVar1 = FUN_14233f450(), iVar1 != 3)) {
    return;
  }
  FUN_142d26ae0(param_1,param_2);
  return;
}



// FUNCTION 142d1fdd0 FUN_142d1fdd0 body=20 status=ok
// SIG undefined FUN_142d1fdd0(void)

void FUN_142d1fdd0(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 0x820) = *(undefined8 *)(param_2 + 0x820);
  }
  return;
}



// FUNCTION 142d1fdf0 FUN_142d1fdf0 body=144 status=ok
// SIG undefined FUN_142d1fdf0(void)

void FUN_142d1fdf0(longlong param_1,byte *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((*param_2 & 1) != 0) {
    fVar1 = *(float *)(param_3 + 0x1c);
    *(undefined8 *)(param_3 + 0x14) = *(undefined8 *)(param_2 + 0x20);
    *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_2 + 0x28);
    if (((*(float *)(param_2 + 0x38) != 0.0) || (*(float *)(param_2 + 0x3c) != 0.0)) ||
       (*(float *)(param_2 + 0x40) != 0.0)) {
      fVar2 = *(float *)(param_1 + 0x3c);
      fVar3 = *(float *)(param_2 + 0x3c);
      fVar4 = *(float *)(param_2 + 0x40);
      *(float *)(param_3 + 0x14) = *(float *)(param_2 + 0x38) * fVar2 + *(float *)(param_3 + 0x14);
      *(float *)(param_3 + 0x18) = fVar3 * fVar2 + *(float *)(param_3 + 0x18);
      *(float *)(param_3 + 0x1c) = fVar4 * fVar2 + *(float *)(param_3 + 0x1c);
    }
    *(float *)(param_3 + 0x34) = *(float *)(param_3 + 0x34) - (fVar1 - *(float *)(param_3 + 0x1c));
  }
  return;
}



// FUNCTION 142d1fe80 FUN_142d1fe80 body=825 status=ok
// SIG undefined FUN_142d1fe80(void)

byte FUN_142d1fe80(longlong *param_1,longlong *param_2,longlong *param_3,byte *param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined8 uVar9;
  longlong lVar10;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  longlong local_res20;
  
  local_res20 = *param_1;
  uVar9 = FUN_142e62ff0();
  bVar3 = (**(code **)(*param_3 + 0x280))(param_3,param_2,uVar9,&local_res20,0);
  *param_1 = local_res20;
  if (param_1[1] != 0) {
    lVar10 = FUN_142e20fc0();
    local_res20 = param_1[1];
    for (lVar1 = local_res20; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar10) goto LAB_142d1ff00;
    }
  }
  local_res20 = 0;
LAB_142d1ff00:
  uVar9 = FUN_14171bfe0();
  bVar4 = (**(code **)(*param_3 + 0x280))(param_3,param_2,uVar9,&local_res20,0);
  param_1[1] = local_res20;
  if (param_1[2] != 0) {
    lVar10 = FUN_142e20fc0();
    local_res20 = param_1[2];
    for (lVar1 = local_res20; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar10) goto LAB_142d1ff60;
    }
  }
  local_res20 = 0;
LAB_142d1ff60:
  uVar9 = FUN_14171bfe0();
  bVar5 = (**(code **)(*param_3 + 0x280))(param_3,param_2,uVar9,&local_res20,0);
  param_1[2] = local_res20;
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 3,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 3,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 3) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((*(byte *)(param_2 + 5) & 2) == 0) {
    (**(code **)(*param_2 + 0x60))(param_2,local_res8,0x10000);
    *(float *)((longlong)param_1 + 0x1c) = (float)(local_res8[0] + -0x8000) * 3.051851e-05;
    (**(code **)(*param_2 + 0x60))(param_2,local_res10,0x10000);
    *(float *)(param_1 + 4) = (float)(local_res10[0] + -0x8000) * 3.051851e-05;
    (**(code **)(*param_2 + 0x60))(param_2,local_res18,0x10000);
    bVar8 = 1;
    *(float *)((longlong)param_1 + 0x24) = (float)(local_res18[0] + -0x8000) * 3.051851e-05;
  }
  else {
    bVar6 = FUN_140a79ab0();
    bVar7 = FUN_140a79ab0();
    bVar8 = FUN_140a79ab0();
    bVar8 = bVar8 & bVar6 & 1 & bVar7;
  }
  *param_4 = bVar8;
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 5,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 5,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 5) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,(longlong)param_1 + 0x2c,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,(longlong)param_1 + 0x2c,4);
    }
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x2c) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  bVar8 = FUN_14292e650(param_1 + 6,param_2);
  *param_4 = bVar8;
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,(longlong)param_1 + 0x3c,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,(longlong)param_1 + 0x3c,4);
    }
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x3c) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  *param_4 = 1;
  return bVar3 & 1 & bVar4 & bVar5;
}



// FUNCTION 142d201c0 FUN_142d201c0 body=182 status=ok
// SIG undefined FUN_142d201c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d201c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_238 [32];
  undefined1 local_218 [512];
  ulonglong local_18;
  
  if ((param_2 != 0) &&
     (local_18 = DAT_1468387a8 ^ (ulonglong)auStack_238, *(longlong *)(param_1 + 0x38) != 0)) {
    lVar4 = UCelLightData::GetPrivateStaticClass();
    for (lVar1 = *(longlong *)(param_1 + 0x38); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar4) {
        if (*(longlong *)(param_1 + 0x38) == 0) {
          return;
        }
        iVar3 = FUN_14233f450(param_2);
        if (iVar3 != 3) {
          return;
        }
        uVar2 = *(undefined8 *)(param_2 + 0x118);
        uVar5 = FUN_142d0a300(local_218);
        FUN_142d34f80(uVar2,*(undefined8 *)(param_1 + 0x38),0,uVar5);
        FUN_1409c53c0(local_218);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142d20280 FUN_142d20280 body=916 status=ok
// SIG undefined FUN_142d20280(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d20280(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  void *_Src;
  longlong lVar6;
  undefined8 uVar7;
  void *pvVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  longlong lVar18;
  void *local_110;
  undefined8 local_108;
  longlong local_f8;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined4 local_c0;
  float local_bc;
  byte local_b8;
  byte local_b7;
  byte local_b6;
  longlong local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined4 local_90;
  longlong local_88 [10];
  
  uVar12 = DAT_1468b5d98;
  uVar7 = _DAT_1468b5d90;
  if (0 < *(int *)(param_1 + 0x200)) {
    lVar9 = *param_2;
    bVar2 = *(byte *)((longlong)param_2 + 0x214);
    uVar16 = (undefined4)((ulonglong)_DAT_1468b5d90 >> 0x20);
    local_f8 = param_2[0x56];
    pvVar8 = (void *)0x0;
    local_110 = (void *)0x0;
    local_108 = 0;
    uVar14 = (**(code **)(lVar9 + 0x18))(param_2,0);
    uVar13 = (**(code **)(lVar9 + 0x38))(param_2,uVar14);
    fVar17 = *(float *)(param_2 + 0x3b) - *(float *)((longlong)param_2 + 0x1c4);
    plVar5 = (longlong *)param_2[10];
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    uVar15 = uVar13;
    if (plVar5 == (longlong *)0x0) {
      lVar9 = 0;
    }
    else {
      lVar9 = plVar5[0x1f];
      if (lVar9 == 0) {
        (**(code **)(*plVar5 + 0x368))();
        lVar9 = plVar5[0x1f];
      }
    }
    plVar5 = (longlong *)param_2[0xb];
    lVar18 = lVar9;
    if (plVar5 == (longlong *)0x0) {
      local_d8 = 0;
    }
    else {
      local_d8 = plVar5[0x1f];
      if (local_d8 == 0) {
        (**(code **)(*plVar5 + 0x368))(plVar5);
        local_d8 = plVar5[0x1f];
      }
    }
    lVar1 = param_2[0x22];
    uVar14 = *(undefined8 *)((longlong)param_2 + 0x11c);
    lVar10 = param_2[7];
    lVar11 = param_2[5];
    lVar6 = param_2[0x23];
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x124);
    if (&local_110 != (void **)(param_2 + 0x4b)) {
      iVar4 = (int)param_2[0x4c];
      _Src = (void *)param_2[0x4b];
      local_108 = CONCAT44(local_108._4_4_,iVar4);
      if (iVar4 != 0) {
        TArray<FString,FDefaultAllocator>::ResizeForCopy
                  (&local_110,iVar4,0,uVar3,lVar18,local_d8,lVar11,lVar10,uVar15);
        pvVar8 = local_110;
        lVar9 = lVar18;
        uVar13 = uVar15;
        _guard_xfg_dispatch_icall_nop(local_110,_Src,(longlong)iVar4 << 4);
      }
    }
    uVar15 = (undefined4)uVar7;
    local_90 = 0;
    if ((byte)((char)param_2[0x5e] - 1U) < 2) {
      uVar15 = (undefined4)param_2[0x5f];
      uVar16 = (undefined4)((ulonglong)param_2[0x5f] >> 0x20);
      local_90 = *(undefined4 *)((longlong)param_2 + 0x304);
      uVar12 = (undefined4)param_2[0x60];
    }
    local_88[0] = 0;
    local_88[1] = 0;
    local_e8 = local_f8;
    local_9c = CONCAT44(uVar16,uVar15);
    local_e0 = lVar9;
    local_d0 = lVar11;
    local_c8 = lVar10;
    local_c0 = uVar13;
    local_bc = fVar17;
    local_b8 = bVar2 & 1;
    local_b7 = bVar2 >> 2 & 1;
    local_b6 = bVar2 >> 3 & 1;
    local_b4 = lVar1;
    local_ac = (int)lVar6;
    local_a8 = uVar14;
    local_a0 = uVar3;
    local_94 = uVar12;
    FUN_1408e22e0(local_88,&local_110);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x1f8,&local_e8);
    if (local_88[0] != 0) {
      FMemory::Free();
    }
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
  }
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x208,param_2);
  return;
}



// FUNCTION 142d20620 FUN_142d20620 body=292 status=ok
// SIG undefined FUN_142d20620(void)

void FUN_142d20620(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  
  if (*(char *)(param_1 + 0x468) == '\0') {
    *(undefined1 *)(param_1 + 0x468) = 1;
    iVar7 = *(int *)(param_1 + 0x460) + -1;
    if (-1 < iVar7) {
      lVar8 = (longlong)iVar7 << 6;
      do {
        lVar3 = *(longlong *)(param_1 + 0x458);
        if (*(char *)(*(longlong *)(lVar3 + 0x20 + lVar8) + 0x10) != '\0') {
          plVar6 = *(longlong **)(lVar3 + 0x10 + lVar8);
          plVar1 = plVar6 + *(int *)(lVar3 + 0x18 + lVar8);
          for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
            lVar3 = *plVar6;
            lVar4 = *(longlong *)(lVar8 + *(longlong *)(param_1 + 0x458));
            if ((lVar3 != 0) && (lVar4 != 0)) {
              lVar5 = *(longlong *)(lVar3 + 0x2a0);
              lVar2 = lVar5 + (longlong)*(int *)(lVar3 + 0x2a8) * 0x28;
              for (; lVar5 != lVar2; lVar5 = lVar5 + 0x28) {
                if (*(longlong *)(lVar5 + 0x10) == lVar4) {
                  FUN_142d10a40(lVar3,lVar4);
                  break;
                }
              }
            }
          }
          FUN_142d26810(param_1 + 0x458,iVar7,1,1);
        }
        lVar8 = lVar8 + -0x40;
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
    }
    *(undefined1 *)(param_1 + 0x468) = 0;
  }
  return;
}



// FUNCTION 142d20750 FUN_142d20750 body=277 status=ok
// SIG undefined FUN_142d20750(void)

void FUN_142d20750(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_res8 [2];
  
  lVar5 = *(longlong *)(param_1 + 0x120);
  lVar4 = (longlong)*(int *)(param_1 + 0x128) * 0x10 + lVar5;
  if (lVar5 != lVar4) {
    plVar6 = (longlong *)(lVar5 + 8);
    local_res8[0] = 0;
    local_res8[1] = 0;
    do {
      if (((*plVar6 != 0) && (lVar1 = FWeakObjectPtr::Get(lVar5), lVar1 != 0)) &&
         (lVar1 = UObject::FindFunction(lVar1,*plVar6), lVar1 != 0)) {
        local_res8[0] = param_1;
        plVar2 = (longlong *)FWeakObjectPtr::Get(lVar5);
        uVar3 = FUN_14178ac60(plVar2,*plVar6);
        (**(code **)(*plVar2 + 0x208))(plVar2,uVar3,local_res8);
      }
      FWeakObjectPtr::operator=(lVar5,0);
      *plVar6 = 0;
      lVar5 = lVar5 + 0x10;
      plVar6 = plVar6 + 2;
    } while (lVar5 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (*(int *)(param_1 + 300) == 0) {
    return;
  }
  TArray<FDelegateBase,FHeapAllocator>::ResizeTo((longlong *)(param_1 + 0x120),0);
  return;
}



// FUNCTION 142d20870 thunk_FUN_142d28e10 body=5 status=ok
// SIG undefined thunk_FUN_142d28e10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void thunk_FUN_142d28e10(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined1 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  code *pcStack_78;
  longlong alStack_68 [4];
  longlong *plStack_48;
  int iStack_38;
  ulonglong uStack_28;
  
  uStack_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if ((*(longlong *)(param_1 + 0x838) == 0) &&
     ((lVar1 = *(longlong *)(param_1 + 0x120), lVar1 != 0 || (lVar1 = FUN_1423407b0(), lVar1 != 0)))
     ) {
    uStack_a8 = FUN_142d13bf0;
    uStack_a0 = 0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = (undefined4)uStack_a8;
      *(undefined4 *)((longlong)plVar2 + 0x14) = uStack_a8._4_4_;
      *(undefined4 *)(plVar2 + 3) = uStack_a0;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_9c;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar3;
      *plVar2 = (longlong)&PTR_FUN_143f77bd0;
    }
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar4 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    uStack_98 = 0;
    uStack_90 = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&uStack_98);
    }
    FWeakObjectPtr::operator=(auStack_88,0);
    uStack_b0 = 0xbf800000;
    uStack_b8 = 0;
    uStack_80 = 0;
    plStack_48 = (longlong *)0x0;
    iStack_38 = 0;
    pcStack_78 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar4,param_1 + 0x838,&uStack_98,0x800000);
    if (iStack_38 != 0) {
      plVar5 = alStack_68;
      if (plStack_48 != (longlong *)0x0) {
        plVar5 = plStack_48;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (plStack_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_98);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      lVar1 = FMemory::Realloc(plVar2,0,0);
      if (lVar1 != 0) {
        FMemory::Free(lVar1);
      }
    }
  }
  return;
}



// FUNCTION 142d20880 FUN_142d20880 body=336 status=ok
// SIG undefined FUN_142d20880(void)

void FUN_142d20880(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_res10;
  undefined4 uStackX_14;
  undefined1 local_res18 [8];
  longlong local_48 [2];
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined1 local_20 [24];
  
  local_res10 = *(undefined4 *)(param_2 + 0x248);
  uStackX_14 = *(undefined4 *)(param_2 + 0x24c);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    uVar3 = FWeakObjectPtr::Get(&local_res10);
    FUN_142600fa0(uVar3);
    FWeakObjectPtr::operator=(local_res18,0);
  }
  local_res10 = *(undefined4 *)(param_2 + 0x250);
  uStackX_14 = *(undefined4 *)(param_2 + 0x254);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    uVar3 = FWeakObjectPtr::Get(&local_res10);
    FUN_142600fa0(uVar3);
    FWeakObjectPtr::operator=(local_res18,0);
  }
  if (*(longlong *)(param_2 + 0x220) != 0) {
    FUN_14058f8f0(local_38,param_2 + 600);
    local_28 = *(undefined4 *)(param_2 + 0x268);
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x220) + 0x158);
    if (lVar1 != 0) {
      cVar2 = FUN_14059f160(local_38);
      if (cVar2 != '\0') {
        FUN_14058f8a0(&local_res10,local_38);
        local_48[0] = 0;
        local_48[1] = 0;
        FUN_1405a2d20(CONCAT44(uStackX_14,local_res10),local_20,lVar1,0,0,local_48);
        FUN_140591060(local_20);
        if (local_48[0] != 0) {
          FMemory::Free();
        }
        if (CONCAT44(uStackX_14,local_res10) != 0) {
          FUN_1405a53f0();
        }
      }
    }
    FUN_140591060(local_38);
  }
  return;
}



// FUNCTION 142d209d0 FUN_142d209d0 body=190 status=ok
// SIG undefined FUN_142d209d0(void)

void FUN_142d209d0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  float fVar3;
  
  if (*(int *)(param_1 + 0x670) == 1) {
    fVar3 = *(float *)(param_1 + 0x6cc);
    uVar2 = FUN_142c98860(param_1 + 0x688,*(undefined8 *)(param_1 + 0x118));
    FUN_14246fd50(param_1 + 0x6c8,uVar2);
    if (fVar3 < *(float *)(param_1 + 0x6d4) || fVar3 == *(float *)(param_1 + 0x6d4)) {
      fVar3 = 0.0;
      if (0.0 <= *(float *)(param_1 + 0x6cc)) {
        fVar3 = *(float *)(param_1 + 0x6cc);
      }
      *(float *)(param_1 + 0x6d4) = fVar3;
      if (*(longlong **)(param_1 + 0x6d8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x260))();
      }
    }
    if ((*(longlong *)(param_1 + 0x818) == 0) || ((*(byte *)(param_1 + 0x7e8) & 2) == 0)) {
      lVar1 = *(longlong *)(param_1 + 0x810);
    }
    else {
      lVar1 = FUN_142d1ab50();
    }
    if (lVar1 != 0) {
      FUN_142d4ed00(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 142d20a90 FUN_142d20a90 body=207 status=ok
// SIG undefined FUN_142d20a90(void)

void FUN_142d20a90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined4 local_res18;
  undefined4 local_res1c;
  
  if (param_2 != 0) {
    FUN_1407665e0(param_2 + 0x8a8,param_1);
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar3 = (longlong)*(int *)(param_1 + 0x38) * 0x270 + lVar2;
    for (; lVar2 != lVar3; lVar2 = lVar2 + 0x270) {
      lVar1 = FWeakObjectPtr::Get(lVar2 + 0x248);
      if (lVar1 == param_2) {
        FWeakObjectPtr::operator=(&local_res10,0);
        *(undefined4 *)(lVar2 + 0x248) = local_res10;
        *(undefined4 *)(lVar2 + 0x24c) = local_res14;
      }
      lVar1 = FWeakObjectPtr::Get(lVar2 + 0x250);
      if (lVar1 == param_2) {
        FWeakObjectPtr::operator=(&local_res18,0);
        *(undefined4 *)(lVar2 + 0x250) = local_res18;
        *(undefined4 *)(lVar2 + 0x254) = local_res1c;
      }
    }
  }
  return;
}



// FUNCTION 142d20b60 FUN_142d20b60 body=155 status=ok
// SIG undefined FUN_142d20b60(void)

void FUN_142d20b60(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  FUN_142343b00();
  if (((*(uint *)(param_1 + 8) >> 4 & 1) == 0) && (*(longlong *)(param_1 + 0x118) != 0)) {
    uVar3 = FUN_142232850();
    FUN_14247c340(param_1 + 0x140,uVar3);
  }
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar4 = FUN_1423407b0(param_1), lVar4 == 0)) {
      return;
    }
    lVar4 = *(longlong *)(param_1 + 0x120);
    if (lVar4 == 0) {
      lVar4 = FUN_1423407b0(param_1);
    }
    cVar2 = UWorld::IsGameWorld(lVar4);
    if ((cVar2 != '\0') && (*(char *)(lVar1 + 0x128) == '\x03')) {
      *(byte *)(lVar1 + 0x91) = *(byte *)(lVar1 + 0x91) | 0x40;
    }
  }
  return;
}



// FUNCTION 142d20c10 FUN_142d20c10 body=459 status=ok
// SIG undefined FUN_142d20c10(void)

void FUN_142d20c10(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_68 [2];
  undefined4 local_58;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  
  lVar5 = *(longlong *)(param_1 + 0x750);
  lVar4 = *(longlong *)(param_1 + 0x758);
  if ((lVar5 != 0) && (*(longlong *)(param_1 + 0x760) != 0)) {
    lVar2 = FUN_142e20fc0();
    for (lVar3 = *(longlong *)(param_1 + 0x760); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar2) {
        if ((*(longlong *)(param_1 + 0x760) != 0) &&
           (cVar1 = FUN_142d5a800(param_1 + 0x3d0), cVar1 != '\0')) {
          lVar4 = *(longlong *)(param_1 + 0x760);
          if (*(longlong *)(lVar5 + 0x38) != 0) {
            lVar5 = *(longlong *)(lVar5 + 0x38);
          }
        }
        break;
      }
    }
  }
  if (lVar4 != 0) {
    lVar2 = FUN_142e20fc0();
    lVar3 = lVar4;
    do {
      if (lVar3 == lVar2) {
        FUN_142d511a0(local_68);
        local_58 = *(undefined4 *)(param_1 + 0x768);
        local_38 = *(undefined4 *)(param_1 + 0x774);
        local_34 = *(undefined4 *)(param_1 + 0x778);
        local_40 = *(undefined8 *)(param_1 + 0x76c);
        local_1c = *(undefined4 *)(param_1 + 0x788);
        local_24 = *(undefined8 *)(param_1 + 0x780);
        local_28 = *(undefined4 *)(param_1 + 0x77c);
        local_68[0] = param_1;
        FUN_142d6aac0(param_1 + 0x3d0,lVar4,lVar5,local_68);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_146b31be0) &&
           (_Init_thread_header(&DAT_146b31be0), DAT_146b31be0 == -1)) {
          FName::FName(&DAT_146b31bd8,L"AlreadyDead",1);
          _Init_thread_footer(&DAT_146b31be0);
        }
        FUN_142dafbc0(param_1 + 0x3d0,&DAT_146b31bd8);
        FUN_142dafbc0(param_1 + 0x468,&DAT_146b31bd8);
        return;
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 142d20de0 FUN_142d20de0 body=209 status=ok
// SIG undefined FUN_142d20de0(void)

void FUN_142d20de0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong local_18 [2];
  
  if ((*(byte *)(param_1 + 0x108) & 8) != 0) {
    if ((char)param_1[0x10e] == '\0') {
      local_18[0] = param_1[0x23];
      local_18[1] = 0;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x4b,local_18);
    }
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x4d,0);
    cVar1 = FUN_142d5a800(param_1 + 0x7a);
    if ((cVar1 != '\0') || ((*(byte *)(param_1 + 0xfd) & 4) == 0)) {
      (**(code **)(*param_1 + 0x418))(param_1);
    }
    if ((*(byte *)(param_1 + 0xfd) & 4) != 0) {
      if ((param_1[0x103] == 0) || ((*(byte *)(param_1 + 0xfd) & 2) == 0)) {
        plVar2 = (longlong *)param_1[0x102];
      }
      else {
        plVar2 = (longlong *)FUN_142d1ab50();
      }
      if (plVar2 != (longlong *)0x0) {
        if ((char)plVar2[0x33] != '\0') {
          FUN_142d4ed00();
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000142d20ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x408))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 142d20ec0 FUN_142d20ec0 body=267 status=ok
// SIG undefined FUN_142d20ec0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d20ec0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_1f8 [32];
  longlong local_1d8 [42];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  longlong local_38;
  ulonglong local_28;
  
  if (param_3 != 0) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
    lVar1 = FUN_142d19dd0();
    if (lVar1 != 0) {
      FUN_140a7ab30(local_1d8,param_3 + 0x10);
      local_1d8[0] = lVar1;
      plVar2 = (longlong *)FUN_142d54de0();
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,local_1d8);
        FUN_142d29b80(lVar1,param_2,plVar2);
        FUN_142d6cc00(plVar2);
      }
      if (local_38 != 0) {
        FMemory::Free();
      }
      if (local_58 != 0) {
        plVar2 = local_88;
        if (local_68 != (longlong *)0x0) {
          plVar2 = local_68;
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,0);
        }
      }
      if (local_68 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 142d20fd0 FUN_142d20fd0 body=878 status=ok
// SIG undefined FUN_142d20fd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142d20fd0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float fVar13;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if ((((*(byte *)(param_1 + 0x58) & 2) == 0) || (cVar4 = FUN_142d1f7c0(param_2), cVar4 == '\0')) &&
     (((*(byte *)(param_1 + 0x58) & 1) == 0 ||
      (((*(byte *)(param_2 + 0x100) & 4) != 0 || ((byte)(*(char *)(param_2 + 0x2f0) - 1U) < 2))))))
  {
    uVar12 = 0;
    if (*(longlong *)(param_1 + 0x30) != 0) {
      lVar6 = FUN_142e0d0b0();
      lVar1 = *(longlong *)(param_1 + 0x30);
joined_r0x000142d2104e:
      if (lVar1 == 0) goto LAB_142d2114f;
      if (lVar1 != lVar6) goto code_r0x000142d21059;
      if (*(longlong *)(param_1 + 0x30) == 0) goto LAB_142d2114f;
      uVar7 = *(ulonglong *)(param_2 + 0x50);
      if (uVar7 == 0) {
        return 0;
      }
      uVar8 = FUN_142e0d0b0();
      uVar11 = uVar7;
      while (uVar11 != uVar8) {
        uVar11 = *(ulonglong *)(uVar11 + 0x30);
        if (uVar11 == 0) {
          return 0;
        }
      }
      if (*(char *)(param_1 + 0x28) == '\0') {
        uVar11 = uVar12;
        if (*(longlong *)(param_1 + 0x30) != 0) {
          uVar9 = FUN_142e0d0b0();
          for (uVar8 = *(ulonglong *)(param_1 + 0x30);
              (uVar11 = uVar12, uVar8 != 0 &&
              (uVar11 = *(ulonglong *)(param_1 + 0x30), uVar8 != uVar9));
              uVar8 = *(ulonglong *)(uVar8 + 0x30)) {
          }
        }
        uVar9 = FUN_142e0d0b0();
        uVar8 = uVar7;
        do {
          uVar3 = uVar7;
          if (uVar8 == uVar9) break;
          uVar8 = *(ulonglong *)(uVar8 + 0x30);
          uVar3 = uVar12;
        } while (uVar8 != 0);
        for (; (uVar7 = 1, uVar3 != 0 && (uVar7 = uVar12, uVar3 != uVar11));
            uVar3 = *(ulonglong *)(uVar3 + 0x30)) {
        }
      }
      else {
        uVar8 = FUN_142e0d0b0();
        uVar11 = uVar7;
        do {
          uVar9 = uVar7;
          if (uVar11 == uVar8) break;
          uVar11 = *(ulonglong *)(uVar11 + 0x30);
          uVar9 = uVar12;
        } while (uVar11 != 0);
        uVar7 = uVar12;
        if (*(longlong *)(param_1 + 0x30) != 0) {
          uVar8 = FUN_142e0d0b0();
          for (uVar11 = *(ulonglong *)(param_1 + 0x30);
              (uVar7 = uVar12, uVar11 != 0 &&
              (uVar7 = *(ulonglong *)(param_1 + 0x30), uVar11 != uVar8));
              uVar11 = *(ulonglong *)(uVar11 + 0x30)) {
          }
        }
        uVar7 = (ulonglong)(uVar9 != uVar7);
      }
      if ((int)uVar7 != 0) {
        return 0;
      }
    }
LAB_142d2114f:
    if (*(longlong *)(param_1 + 0x40) != 0) {
      lVar6 = FUN_142e49950();
      lVar1 = *(longlong *)(param_1 + 0x40);
joined_r0x000142d21168:
      if (lVar1 == 0) goto LAB_142d21272;
      if (lVar1 != lVar6) goto code_r0x000142d21175;
      if (*(longlong *)(param_1 + 0x40) == 0) goto LAB_142d21272;
      uVar7 = *(ulonglong *)(param_2 + 0x58);
      if (uVar7 == 0) {
        return 0;
      }
      uVar8 = FUN_142e49950();
      uVar11 = uVar7;
      while (uVar11 != uVar8) {
        uVar11 = *(ulonglong *)(uVar11 + 0x30);
        if (uVar11 == 0) {
          return 0;
        }
      }
      if (*(char *)(param_1 + 0x38) == '\0') {
        uVar11 = uVar12;
        if (*(longlong *)(param_1 + 0x40) != 0) {
          uVar9 = FUN_142e49950();
          for (uVar8 = *(ulonglong *)(param_1 + 0x40);
              (uVar11 = uVar12, uVar8 != 0 &&
              (uVar11 = *(ulonglong *)(param_1 + 0x40), uVar8 != uVar9));
              uVar8 = *(ulonglong *)(uVar8 + 0x30)) {
          }
        }
        uVar9 = FUN_142e49950();
        uVar8 = uVar7;
        do {
          uVar3 = uVar7;
          if (uVar8 == uVar9) break;
          uVar8 = *(ulonglong *)(uVar8 + 0x30);
          uVar3 = uVar12;
        } while (uVar8 != 0);
        for (; (bVar2 = true, uVar3 != 0 && (bVar2 = false, uVar3 != uVar11));
            uVar3 = *(ulonglong *)(uVar3 + 0x30)) {
        }
      }
      else {
        uVar8 = FUN_142e49950();
        uVar11 = uVar7;
        do {
          uVar9 = uVar7;
          if (uVar11 == uVar8) break;
          uVar11 = *(ulonglong *)(uVar11 + 0x30);
          uVar9 = uVar12;
        } while (uVar11 != 0);
        uVar7 = uVar12;
        if (*(longlong *)(param_1 + 0x40) != 0) {
          uVar8 = FUN_142e49950();
          for (uVar11 = *(ulonglong *)(param_1 + 0x40);
              (uVar7 = uVar12, uVar11 != 0 &&
              (uVar7 = *(ulonglong *)(param_1 + 0x40), uVar11 != uVar8));
              uVar11 = *(ulonglong *)(uVar11 + 0x30)) {
          }
        }
        bVar2 = uVar9 != uVar7;
      }
      if (bVar2) {
        return 0;
      }
    }
LAB_142d21272:
    if ((*(byte *)(param_1 + 0x58) & 4) != 0) {
      if (param_3 == 0) {
        if (*(longlong *)(param_2 + 0x2b0) == 0) {
          param_3 = 0;
        }
        else {
          param_3 = *(longlong *)(*(longlong *)(param_2 + 0x2b0) + 0x118);
        }
      }
      uVar10 = FUN_142caac20(param_1 + 0x60,local_68,param_3);
      fVar13 = (float)FUN_142cc4350(uVar10);
      iVar5 = rand();
      if (fVar13 <= (float)iVar5 * 3.051851e-05) {
        return 0;
      }
    }
    if (*(longlong *)(param_1 + 0x48) != 0) {
      if (*(longlong *)(param_2 + 0x2b0) != 0) {
        uVar12 = *(ulonglong *)(*(longlong *)(param_2 + 0x2b0) + 0x118);
      }
      cVar4 = FUN_142c48f90(*(longlong *)(param_1 + 0x48),uVar12,0);
      if (cVar4 == '\0') {
        return 0;
      }
    }
    if ((*(longlong *)(param_1 + 0x50) == 0) ||
       (cVar4 = FUN_142c48f90(*(longlong *)(param_1 + 0x50),*(undefined8 *)(param_2 + 0x28),0),
       cVar4 != '\0')) {
      return 1;
    }
  }
  return 0;
code_r0x000142d21059:
  lVar1 = *(longlong *)(lVar1 + 0x30);
  goto joined_r0x000142d2104e;
code_r0x000142d21175:
  lVar1 = *(longlong *)(lVar1 + 0x30);
  goto joined_r0x000142d21168;
}



// FUNCTION 142d21340 FUN_142d21340 body=219 status=ok
// SIG undefined FUN_142d21340(void)

void FUN_142d21340(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(longlong *)(param_1 + 0x98) != 0) {
    local_10 = 0;
    local_18 = param_2;
    local_10 = FUN_142d46fe0(param_2);
    FUN_142d1c090(param_1,local_28,local_38,&local_18,param_4);
    lVar1 = param_4 + 0x48;
    if (*(int *)(param_4 + 0x50) < 1) {
      lVar1 = 0;
    }
    FUN_142d19e60(*(undefined8 *)(param_1 + 0x98),param_5,0,local_28,local_38,&local_18,0,param_3,
                  lVar1,param_4,0);
  }
  return;
}



// FUNCTION 142d21420 FUN_142d21420 body=1129 status=ok
// SIG undefined FUN_142d21420(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d21420(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5,undefined1 *param_6,longlong *param_7)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_2d8 [32];
  undefined1 *local_2b8;
  longlong **local_2b0;
  undefined1 *local_2a8;
  undefined8 local_2a0;
  undefined1 *local_298;
  undefined1 *local_290;
  undefined1 *local_288;
  longlong *local_278;
  undefined8 local_270;
  longlong *local_268;
  undefined4 local_260;
  longlong *local_258;
  undefined8 local_250;
  undefined1 local_248 [8];
  float local_240;
  undefined1 local_23c;
  undefined1 *local_238;
  undefined1 local_230 [16];
  undefined1 local_220 [16];
  undefined4 local_210;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [4];
  undefined4 local_1e4;
  float local_1d4;
  float fStack_1d0;
  float local_1cc;
  longlong *local_100;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_2d8;
  local_238 = param_5;
  local_278 = param_2;
  if (param_6 == (undefined1 *)0x0) {
    local_270 = FUN_142d46fe0(param_2);
  }
  else {
    local_270 = FWeakObjectPtr::Get(param_6 + 0x228);
  }
  if (*(longlong *)(param_1 + 0x98) == 0) {
    if ((*(char *)(param_1 + 0x100) == '\0') && (iVar3 = FUN_1428cf800(param_3), iVar3 == 3)) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(local_1e8,0,400);
    local_2b8 = param_5;
    FUN_142d17540(param_1,local_1e8,&local_278,param_4);
    local_2a8 = (undefined1 *)0x0;
    local_2b0 = (longlong **)CONCAT71(local_2b0._1_7_,*(undefined1 *)(param_1 + 0x100));
    local_2b8 = param_5;
    FUN_142d11680(param_1,&local_278,&DAT_1468b5d90,local_1e8);
  }
  else {
    if ((*(char *)(param_1 + 0x100) == '\0') && (iVar3 = FUN_1428cf800(param_3), iVar3 == 3)) {
      return;
    }
    local_2b8 = param_5;
    FUN_142d1c090(param_1,local_208,local_230,&local_278);
    puVar8 = (undefined1 *)0x0;
    local_288 = local_1e8;
    local_290 = param_5;
    local_298 = param_5 + 0x48;
    if (*(int *)(param_5 + 0x50) < 1) {
      local_298 = puVar8;
    }
    local_2b0 = &local_278;
    local_2a8 = param_6;
    local_2b8 = local_230;
    local_1e4 = 0;
    local_258 = (longlong *)0x0;
    local_250 = 0;
    local_2a0 = param_3;
    FUN_142d19e60(*(undefined8 *)(param_1 + 0x98),&local_258,param_4,local_208);
    if (((param_5[0x10] & 2) == 0) &&
       (((local_1d4 != 0.0 || (fStack_1d0 != 0.0)) || (local_1cc != 0.0)))) {
      local_240 = local_1cc;
      local_23c = 1;
      lVar4 = FUN_142d41290(&local_278,*(undefined8 *)(param_1 + 0x10),param_5,local_248);
      if ((param_7 != (longlong *)0x0) && (lVar4 != 0)) {
        param_7[3] = lVar4;
      }
    }
    if (((param_5[0x10] & 4) == 0) && ((*(byte *)(param_1 + 0x134) & 1) != 0)) {
      lVar4 = FUN_142d225f0(param_1,&local_278,&local_1d4,param_5);
      if ((param_7 != (longlong *)0x0) && (lVar4 != 0)) {
        param_7[4] = lVar4;
      }
      if (*(longlong *)(param_1 + 0x150) == 0) {
        FUN_140590080(local_220);
      }
      else {
        cVar2 = FWeakObjectPtr::IsValid(param_5 + 0x2c);
        plVar5 = local_278;
        if (cVar2 != '\0') {
          plVar5 = (longlong *)FWeakObjectPtr::Get(param_5 + 0x2c);
        }
        local_268 = DAT_1468b5da0;
        local_260 = DAT_1468b5da8;
        local_240 = local_1cc;
        local_2b0 = &local_268;
        local_2b8 = (undefined1 *)CONCAT44(local_2b8._4_4_,0x42480000);
        FUN_1405a1e30(local_220,plVar5,*(undefined8 *)(param_1 + 0x150),local_248);
      }
      if ((param_7 != (longlong *)0x0) && (cVar2 = FUN_14059f160(local_220), cVar2 != '\0')) {
        FUN_1405913a0(param_7 + 5,local_220);
        *(undefined4 *)(param_7 + 7) = local_210;
      }
      FUN_140591060(local_220);
    }
    FRotator::Vector(local_230,local_1f8);
    iVar3 = (int)local_250;
    uVar10 = (ulonglong)(int)local_250;
    plVar7 = local_258 + uVar10 * 0x32;
    plVar5 = local_258;
    local_268 = plVar7;
    if (local_258 != plVar7) {
      do {
        local_2a8 = local_1e8;
        local_2b0 = (longlong **)CONCAT71(local_2b0._1_7_,*(undefined1 *)(param_1 + 0x100));
        local_2b8 = param_5;
        FUN_142d11680(param_1,&local_278,local_1f8,plVar5);
        if (param_7 != (longlong *)0x0) {
          if ((*(byte *)(param_1 + 0x134) & 1) != 0) {
            puVar6 = puVar8;
            if (((*plVar5 != 0) && ((*(byte *)(*plVar5 + 0x7e8) & 2) != 0)) &&
               (lVar4 = FUN_142d19dd0(), lVar4 != 0)) {
              puVar6 = *(undefined1 **)(lVar4 + 0x118);
            }
            if (puVar6 != (undefined1 *)0x0) {
              iVar1 = (int)param_7[1];
              *(int *)(param_7 + 1) = iVar1 + 1;
              if (*(int *)((longlong)param_7 + 0xc) < iVar1 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_7,iVar1);
              }
              *(undefined1 **)(*param_7 + (longlong)iVar1 * 8) = puVar6;
            }
            lVar4 = FWeakObjectPtr::Get((longlong)plVar5 + 0x16c);
            plVar7 = local_268;
            param_5 = local_238;
            if (lVar4 != 0) {
              iVar1 = (int)param_7[1];
              *(int *)(param_7 + 1) = iVar1 + 1;
              if (*(int *)((longlong)param_7 + 0xc) < iVar1 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_7,iVar1);
              }
              *(longlong *)(*param_7 + (longlong)iVar1 * 8) = lVar4;
              plVar7 = local_268;
              param_5 = local_238;
            }
          }
          if (*plVar5 != 0) {
            *(int *)(param_7 + 2) = (int)param_7[2] + 1;
          }
        }
        plVar5 = plVar5 + 0x32;
      } while (plVar5 != plVar7);
    }
    local_100 = local_258;
    if (iVar3 != 0) {
      plVar5 = local_258 + 0x1d;
      do {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 0x32;
        uVar9 = (int)uVar10 - 1;
        uVar10 = (ulonglong)uVar9;
        local_100 = local_258;
      } while (uVar9 != 0);
    }
  }
  if (local_100 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142d21890 FUN_142d21890 body=824 status=ok
// SIG undefined FUN_142d21890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d21890(longlong *param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined1 auStack_318 [32];
  longlong local_2f8;
  undefined4 *local_2f0;
  longlong *local_2e8;
  longlong local_2d8 [2];
  undefined4 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined1 local_2b0 [16];
  undefined4 local_2a0;
  undefined1 local_298 [16];
  undefined4 local_288;
  longlong local_278;
  longlong *plStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  byte local_248;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  lVar5 = (**(code **)(*param_1 + 0x148))();
  if ((((-1 < param_2) && (param_2 < (int)param_1[7])) &&
      (puVar12 = (undefined4 *)((longlong)param_2 * 0x270 + param_1[6]),
      puVar12 != (undefined4 *)0x0)) &&
     (((lVar2 = *(longlong *)(puVar12 + 0x88), lVar2 != 0 && (lVar5 != 0)) &&
      (plVar6 = (longlong *)FWeakObjectPtr::Get(puVar12 + 4), plVar6 != (longlong *)0x0)))) {
    lVar7 = 0;
    if (((*DAT_146b31b00 != 0) && ((*(byte *)(param_3 + 0x10) & 1) != 0)) &&
       (*(char *)(lVar2 + 0x102) != '\0')) {
      iVar1 = *(int *)((longlong)plVar6 + 0xc);
      lVar11 = lVar7;
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar10 = iVar1 >> 0x1f & 0xffff;
        uVar4 = iVar1 + uVar10;
        lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                 (longlong)(int)((uVar4 & 0xffff) - uVar10) * 0x18;
      }
      if (((*(uint *)(lVar11 + 8) >> 0x1d & 1) == 0) &&
         ((*(byte *)((longlong)plVar6 + 0x94) & 2) == 0)) {
        if (iVar1 < (int)DAT_1469e91c4) {
          uVar10 = iVar1 >> 0x1f & 0xffff;
          uVar4 = iVar1 + uVar10;
          lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                  (longlong)(int)((uVar4 & 0xffff) - uVar10) * 0x18;
        }
        if (((((*(uint *)(lVar7 + 8) >> 0x1d & 1) == 0) &&
             (cVar3 = UMaterialInterface::GetCastShadowAsMasked(plVar6), cVar3 == '\0')) &&
            (lVar7 = (**(code **)(*plVar6 + 0x148))(plVar6), lVar7 != 0)) &&
           (cVar3 = FUN_14254a160(lVar7), cVar3 == '\0')) {
          plVar8 = (longlong *)FUN_142d5ecc0(lVar5);
          if (plVar8 == (longlong *)0x0) {
            return;
          }
          lVar5 = (**(code **)(*plVar8 + 0x2a8))(plVar8);
          if (lVar5 == 0) {
            return;
          }
          local_278 = 0;
          plStack_270 = (longlong *)0x0;
          local_268 = 0;
          uStack_260 = 0;
          FUN_142d0a300(local_258);
          local_58 = 0xffffffff;
          plStack_270 = plVar6;
          local_268 = FWeakObjectPtr::Get(puVar12 + 0x8a);
          local_278 = lVar2;
          FUN_140a7d100(local_258,param_3);
          local_248 = local_248 | 0x80;
          uStack_260 = FWeakObjectPtr::Get(puVar12 + 0x8c);
          local_58 = *puVar12;
          FUN_142d0e6e0(lVar5,&local_278);
          FUN_1409c53c0(local_258);
          return;
        }
      }
    }
    local_2d8[0] = 0;
    local_2d8[1] = 0;
    local_2c8 = 0;
    local_2c0 = 0;
    local_2b8 = 0;
    FUN_140590080(local_2b0);
    uVar9 = FWeakObjectPtr::Get(puVar12 + 0x8c);
    local_2e8 = local_2d8;
    local_2f8 = param_3;
    local_2f0 = puVar12;
    FUN_142d21420(lVar2,plVar6,lVar5,uVar9);
    FUN_14058f8f0(local_298,local_2b0);
    local_288 = local_2a0;
    local_2e8 = (longlong *)local_298;
    local_2f0 = (undefined4 *)local_2b8;
    local_2f8 = local_2c0;
    FUN_142d1d770(param_1,param_2,local_2d8,local_2c8);
    FUN_140591060(local_2b0);
    if (local_2d8[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142d21bd0 FUN_142d21bd0 body=940 status=ok
// SIG undefined FUN_142d21bd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d21bd0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_228 [32];
  longlong *local_208;
  longlong *local_200;
  longlong *local_1f8;
  int local_1f0;
  longlong *local_1e8 [7];
  longlong local_1b0;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  if ((param_1[0x24] == 0) && (lVar5 = FUN_1423407b0(), lVar5 == 0)) {
    return;
  }
  lVar5 = param_1[0x24];
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0(param_1);
  }
  iVar4 = FUN_1428cf800(lVar5);
  if (iVar4 == 3) {
    return;
  }
  if ((*(uint *)(param_1 + 0x108) & 8) != 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x19) & 0x20) == 0) {
    return;
  }
  *(uint *)(param_1 + 0x108) = *(uint *)(param_1 + 0x108) | 8;
  (**(code **)(*param_1 + 0x260))(param_1);
  plVar10 = (longlong *)0x0;
  plVar9 = plVar10;
  if (param_2 == (longlong *)0x0) {
    param_2 = (longlong *)FUN_142d54de0();
    plVar9 = param_2;
    if (param_2 == (longlong *)0x0) goto LAB_142d21cd9;
    FUN_142d0ab00(local_1e8);
    local_1b0 = param_1[0x104];
    local_1e8[0] = param_1;
    (**(code **)(*param_2 + 0x10))(param_2,local_1e8);
    FUN_140a7c7a0(local_1e8);
  }
  *(longlong *)((longlong)param_1 + 0x794) = param_2[0x35];
LAB_142d21cd9:
  (**(code **)(*param_1 + 0x4a0))(param_1,param_2);
  if ((char)param_1[0x10e] == '\0') {
    local_200 = plVar10;
    if (param_2 != (longlong *)0x0) {
      local_200 = (longlong *)param_2[5];
    }
    local_208 = (longlong *)param_1[0x23];
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x4b,&local_208);
  }
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x4d,param_2);
  cVar3 = FUN_142d5a800(param_1 + 0x7a);
  if ((cVar3 != '\0') || ((*(byte *)(param_1 + 0xfd) & 4) == 0)) {
    (**(code **)(*param_1 + 0x418))(param_1);
  }
  lVar5 = param_1[0x23];
  if (lVar5 != 0) {
    uVar6 = UDamageableInterface::GetPrivateStaticClass();
    plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar6);
    if (((plVar7 != (longlong *)0x0) &&
        (cVar3 = (**(code **)(*plVar7 + 0x20))(plVar7), cVar3 != '\0')) &&
       (param_2 != (longlong *)0x0)) {
      if (((*(byte *)(param_1 + 0x108) & 0x10) == 0) && (lVar5 = param_1[0x23], lVar5 != 0)) {
        uVar6 = UDamageableInterface::GetPrivateStaticClass();
        plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar6);
        if ((plVar7 != (longlong *)0x0) &&
           (cVar3 = (**(code **)(*plVar7 + 0x20))(plVar7), cVar3 != '\0')) {
          *(uint *)(param_1 + 0x108) = *(uint *)(param_1 + 0x108) | 0x10;
          FUN_142d1a630(param_2,&local_208);
          plVar7 = local_208 + (int)local_200;
          for (plVar8 = local_208; plVar8 != plVar7; plVar8 = plVar8 + 1) {
            plVar1 = (longlong *)*plVar8;
            if (plVar1 != (longlong *)0x0) {
              lVar5 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
              if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
                  lVar5 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                (**(code **)(*plVar1 + 0x1040))(plVar1,param_2);
              }
            }
          }
          FUN_142d1a4b0(param_2,&local_1f8);
          plVar7 = (longlong *)
                   ((ulonglong)((longlong)(local_1f8 + local_1f0) + (7 - (longlong)local_1f8)) >> 3)
          ;
          if (local_1f8 + local_1f0 < local_1f8) {
            plVar7 = plVar10;
          }
          plVar8 = local_1f8;
          if (plVar7 != (longlong *)0x0) {
            do {
              plVar1 = (longlong *)*plVar8;
              if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0x3f8))(plVar1,param_2);
              }
              plVar8 = plVar8 + 1;
              plVar10 = (longlong *)((longlong)plVar10 + 1);
            } while (plVar10 != plVar7);
          }
          if (local_1f8 != (longlong *)0x0) {
            FMemory::Free(local_1f8);
          }
          if (local_208 != (longlong *)0x0) {
            FMemory::Free(local_208);
          }
        }
      }
      if ((param_1[0x24] != 0) || (lVar5 = FUN_1423407b0(param_1), lVar5 != 0)) {
        lVar5 = param_1[0x24];
        if (lVar5 == 0) {
          lVar5 = FUN_1423407b0(param_1);
        }
        plVar10 = (longlong *)UWorld::GetAuthGameMode<ABaseGameMode>(lVar5);
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0xa00))(plVar10,param_2);
        }
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    FUN_142d6cc00(plVar9);
  }
  return;
}



// FUNCTION 142d21f80 FUN_142d21f80 body=737 status=ok
// SIG undefined FUN_142d21f80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_142d21f80(longlong param_1,undefined8 param_2,undefined4 *param_3,longlong param_4,
             undefined8 param_5,longlong param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_178 [32];
  ulonglong *local_158;
  longlong local_150;
  undefined8 *local_148;
  undefined4 *local_140;
  undefined8 local_138;
  undefined4 local_130;
  ulonglong local_128 [2];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [16];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined1 local_c2;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined4 local_b8;
  undefined2 local_b4;
  longlong local_90;
  undefined8 local_88;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  uVar9 = 0;
  local_d0 = 0;
  local_158 = (ulonglong *)param_5;
  local_90 = 0;
  local_88 = 0;
  uVar8 = param_6 + 0x238;
  if (param_6 == 0) {
    uVar8 = uVar9;
  }
  local_b8 = 0;
  local_70 = 0;
  local_68 = 0;
  local_c8 = 0x10000;
  local_c0 = 0;
  local_128[0] = 0;
  local_d8 = 0;
  local_c4 = 0;
  local_b4 = 0x101;
  local_bc = 0;
  local_c2 = 0;
  FUN_142d17210(param_1,&local_d8,uVar8,param_8);
  local_140 = param_3;
  if (*(char *)(param_1 + 0x40) == '\0') {
    puVar5 = (uint *)FUN_140a05dc0();
    uVar2 = ~puVar5[1] & *puVar5;
    local_128[0]._0_5_ = (uint5)uVar2;
    uVar8 = (longlong)DAT_146b31a88 & 0x3fffffffffffffff;
    if (DAT_146b31a80 + DAT_146b31a88 < DAT_146b31a80) {
      uVar8 = uVar9;
    }
    puVar5 = DAT_146b31a80;
    if (uVar8 != 0) {
      do {
        uVar1 = *puVar5;
        puVar5 = puVar5 + 1;
        uVar2 = uVar2 & ~(1 << (uVar1 & 0x1f));
        uVar9 = uVar9 + 1;
        local_128[0] = CONCAT44(local_128[0]._4_4_,uVar2);
      } while (uVar9 != uVar8);
    }
    puVar4 = (undefined4 *)FRotator::Quaternion(param_4 + 0x20,local_108);
    local_138 = (undefined4 *)((ulonglong)local_138._4_4_ << 0x20);
    local_148 = &local_d8;
    local_118 = *puVar4;
    uStack_114 = puVar4[1];
    uStack_110 = puVar4[2];
    uStack_10c = puVar4[3];
    local_150 = param_4 + 4;
    local_158 = local_128;
    FUN_142330380(param_7,param_2,param_4 + 0x14,&local_118);
  }
  else if (*(char *)(param_1 + 0x40) == '\x01') {
    local_f8 = _DAT_146aefe68;
    uStack_f4 = uRam0000000146aefe6c;
    uStack_f0 = uRam0000000146aefe70;
    uStack_ec = uRam0000000146aefe74;
    local_128[0] = CONCAT44(local_128[0]._4_4_,(uint)*(byte *)(param_1 + 0x30));
    local_e8 = _DAT_146aefe78;
    uStack_e4 = uRam0000000146aefe7c;
    uStack_e0 = uRam0000000146aefe80;
    uStack_dc = uRam0000000146aefe84;
    FUN_142311390(*(undefined8 *)(param_1 + 0x48),local_128,&local_f8);
    puVar4 = (undefined4 *)FRotator::Quaternion(param_4 + 0x20,local_108);
    local_130 = 0;
    local_140 = &local_f8;
    local_118 = *puVar4;
    uStack_114 = puVar4[1];
    uStack_110 = puVar4[2];
    uStack_10c = puVar4[3];
    local_148 = &local_d8;
    local_150 = param_4 + 4;
    local_158 = (ulonglong *)CONCAT44(local_158._4_4_,(uint)local_128[0]);
    local_138 = param_3;
    FUN_142330260(param_7,param_2,param_4 + 0x14,&local_118);
  }
  else {
    uVar3 = UCollisionProfile::Get();
    local_128[0] = local_128[0] & 0xffffff0000000000;
    puVar6 = *(undefined1 **)(param_1 + 0x50);
    puVar7 = puVar6 + *(int *)(param_1 + 0x58);
    for (; puVar6 != puVar7; puVar6 = puVar6 + 1) {
      uVar2 = UCollisionProfile::ConvertToCollisionChannel(uVar3,0,*puVar6);
      local_128[0] = CONCAT44(local_128[0]._4_4_,(uint)local_128[0] | 1 << (uVar2 & 0x1f));
    }
    puVar4 = (undefined4 *)FRotator::Quaternion(param_4 + 0x20,local_108);
    local_138 = (undefined4 *)((ulonglong)local_138._4_4_ << 0x20);
    local_148 = &local_d8;
    local_118 = *puVar4;
    uStack_114 = puVar4[1];
    uStack_110 = puVar4[2];
    uStack_10c = puVar4[3];
    local_150 = param_4 + 4;
    local_158 = local_128;
    FUN_142330380(param_7,param_2,param_4 + 0x14,&local_118);
  }
  if (local_70 != 0) {
    FMemory::Free();
  }
  if (local_90 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142d22270 FUN_142d22270 body=668 status=ok
// SIG undefined FUN_142d22270(void)

undefined8 *
FUN_142d22270(longlong param_1,undefined8 *param_2,longlong *param_3,longlong param_4,
             undefined1 param_5)

{
  void *_Src;
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined **local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined4 local_c4;
  byte local_c0;
  undefined1 local_b8 [24];
  undefined1 local_a0 [24];
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  undefined1 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  
  if (param_3 != (longlong *)0x0) {
    uVar2 = FUN_142e27720();
    lVar3 = (**(code **)(*param_3 + 0x628))(param_3,uVar2);
    if (lVar3 != 0) {
      lVar8 = *(longlong *)(param_1 + 0xf8);
      lVar10 = (longlong)*(int *)(param_1 + 0x100) * 0x40 + lVar8;
      for (; lVar8 != lVar10; lVar8 = lVar8 + 0x40) {
        iVar9 = 0;
        if (0 < *(int *)(lVar8 + 0x30)) {
          do {
            lVar4 = FUN_141796280(*(longlong *)(lVar8 + 0x28) + (longlong)iVar9 * 0x18);
            if (lVar4 == 0) {
LAB_142d22375:
              lVar5 = 0;
            }
            else {
              lVar5 = UBlueprintGeneratedClass::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (!bVar1) goto LAB_142d22375;
              lVar6 = FUN_142e20fc0();
              lVar7 = lVar4;
              do {
                lVar5 = lVar4;
                if (lVar7 == lVar6) goto LAB_142d22379;
                lVar7 = *(longlong *)(lVar7 + 0x30);
              } while (lVar7 != 0);
            }
            lVar4 = 0;
LAB_142d22379:
            if (lVar4 != 0) {
              local_d0 = *(int *)(param_4 + 0x28);
              lVar8 = (longlong)local_d0;
              _Src = *(void **)(param_4 + 0x20);
              local_f8 = &PTR_FUN_143ff6170;
              local_f0 = *(undefined8 *)(param_4 + 8);
              local_e8 = *(undefined8 *)(param_4 + 0x10);
              local_e0 = *(undefined8 *)(param_4 + 0x18);
              local_d8 = (void *)0x0;
              if (local_d0 == 0) {
                local_cc = 0;
              }
              else {
                TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy
                          (&local_d8,local_d0,0);
                _guard_xfg_dispatch_icall_nop(local_d8,_Src,lVar8 * 0x38);
              }
              local_c8 = *(undefined1 *)(param_4 + 0x30);
              local_c4 = *(undefined4 *)(param_4 + 0x34);
              local_c7 = *(undefined1 *)(param_4 + 0x31);
              local_c0 = local_c0 ^ (*(byte *)(param_4 + 0x38) ^ local_c0) & 7;
              FUN_1405e0d90(local_b8,param_4 + 0x40);
              FUN_1405e0d90(local_a0,param_4 + 0x58);
              FUN_1405e0d90(local_88,param_4 + 0x70);
              FUN_1405e0d90(local_70,param_4 + 0x88);
              local_58 = *(undefined1 *)(param_4 + 0xa0);
              local_4c = *(undefined4 *)(param_4 + 0xac);
              local_54 = *(undefined4 *)(param_4 + 0xa4);
              local_50 = *(undefined1 *)(param_4 + 0xa8);
              local_48 = *(undefined8 *)(param_4 + 0xb0);
              local_40 = *(undefined8 *)(param_4 + 0xb8);
              local_38 = *(longlong *)(param_4 + 0xc0);
              if (local_38 != 0) {
                LOCK();
                *(int *)(local_38 + 0xc) = *(int *)(local_38 + 0xc) + 1;
                UNLOCK();
              }
              FUN_142c7bb40(lVar3,param_2,lVar5,&local_f8,param_5);
              return param_2;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < *(int *)(lVar8 + 0x30));
        }
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 142d22510 FUN_142d22510 body=217 status=ok
// SIG undefined FUN_142d22510(void)

undefined8
FUN_142d22510(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             longlong param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_1 + 0x150) == 0) {
    FUN_140590080(param_2);
  }
  else {
    cVar1 = FWeakObjectPtr::IsValid(param_5 + 0x2c);
    if (cVar1 == '\0') {
      uVar2 = *param_3;
    }
    else {
      uVar2 = FWeakObjectPtr::Get(param_5 + 0x2c);
    }
    local_28 = DAT_1468b5da0;
    local_18 = *param_4;
    local_20 = DAT_1468b5da8;
    local_10 = *(undefined4 *)(param_4 + 1);
    FUN_1405a1e30(param_2,uVar2,*(undefined8 *)(param_1 + 0x150),&local_18,0x42480000,&local_28);
  }
  return param_2;
}



// FUNCTION 142d225f0 FUN_142d225f0 body=276 status=ok
// SIG undefined FUN_142d225f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_142d225f0(longlong param_1,undefined8 *param_2,undefined1 (*param_3) [12],longlong param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined1 local_48 [16];
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x148) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    cVar1 = FWeakObjectPtr::IsValid(param_4 + 0x2c);
    if (cVar1 == '\0') {
      plVar2 = (longlong *)*param_2;
    }
    else {
      plVar2 = (longlong *)FWeakObjectPtr::Get(param_4 + 0x2c);
    }
    if (plVar2 == (longlong *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar2 + 0x148))();
    }
    local_38 = _DAT_146b31980 & _DAT_146b31990;
    uStack_34 = uRam0000000146b31984 & uRam0000000146b31994;
    uStack_30 = uRam0000000146b31988 & uRam0000000146b31998;
    uStack_2c = uRam0000000146b3198c & uRam0000000146b3199c;
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = uRam0000000146b3198c;
    local_60 = 0;
    local_48._12_4_ = 0;
    local_48._0_12_ = *param_3;
    local_68 = 1;
    plVar2 = (longlong *)FUN_14245f910(uVar3,*(undefined8 *)(param_1 + 0x148),&local_58,1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x280))(plVar2,1);
      *(byte *)((longlong)plVar2 + 0x71a) = *(byte *)((longlong)plVar2 + 0x71a) | 0x40;
    }
  }
  return plVar2;
}



// FUNCTION 142d22710 FUN_142d22710 body=422 status=ok
// SIG undefined FUN_142d22710(void)

void FUN_142d22710(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  float fVar7;
  ulonglong in_stack_ffffffffffffff48;
  longlong local_a8 [12];
  undefined1 local_44 [44];
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if ((byte)(*(char *)((longlong)param_2 + 0x335) - 1U) < 2) {
    return;
  }
  lVar6 = param_2[5];
  lVar1 = param_2[0x1e];
  if ((lVar6 == 0) && (lVar6 = param_2[7], lVar6 == 0)) {
    lVar6 = *(longlong *)(param_1 + 0x118);
  }
  lVar2 = param_2[0x5a];
  if (lVar2 != 0) {
    if ((*(char *)(lVar2 + 0x230) == '\0') &&
       (fVar7 = (float)(**(code **)(*param_2 + 0x18))(param_2,1), fVar7 < 0.0001)) {
      return;
    }
    if (*(char *)(lVar2 + 0xe0) != '\0') goto LAB_142d227ab;
  }
  if (lVar1 == 0) {
    return;
  }
LAB_142d227ab:
  uVar5 = FWeakObjectPtr::Get((longlong)param_2 + 0xc4);
  uVar4 = FUN_1426bd9f0(uVar5);
  cVar3 = FUN_142db9240(uVar4);
  if (cVar3 == '\x03') {
    if (DAT_1466ad204 < *(int *)(param_1 + 0x858)) {
      return;
    }
    *(int *)(param_1 + 0x858) = *(int *)(param_1 + 0x858) + 1;
  }
  else {
    if (DAT_1466ad200 < *(int *)(param_1 + 0x85c)) {
      return;
    }
    *(int *)(param_1 + 0x85c) = *(int *)(param_1 + 0x85c) + 1;
  }
  if (((*(longlong *)(param_1 + 0x868) == 0) && (lVar2 != 0)) && (*(char *)(lVar2 + 0xe0) != '\0'))
  {
    FUN_142d71870(lVar2,lVar6,param_2 + 0xc,1,in_stack_ffffffffffffff48 & 0xffffffffffffff00);
  }
  else if ((lVar1 != 0) && (lVar6 != 0)) {
    if (*(longlong *)(param_1 + 0x868) == 0) {
      param_2 = param_2 + 0xc;
    }
    else {
      FUN_140729f20(local_a8,param_2 + 0xc);
      FWeakObjectPtr::operator=(local_44,*(undefined8 *)(param_1 + 0x868));
      param_2 = local_a8;
    }
    FUN_142d68ea0(lVar1,lVar6,param_2,1,&DAT_1466ad4f0,0);
  }
  return;
}



// FUNCTION 142d228c0 FUN_142d228c0 body=1345 status=ok
// SIG undefined FUN_142d228c0(void)

void FUN_142d228c0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined4 uVar15;
  float local_118;
  float fStack_114;
  float local_110;
  undefined8 local_108;
  float local_100;
  undefined8 local_f8;
  float local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined8 local_dc;
  float local_d4;
  undefined8 local_c8;
  float local_c0;
  longlong local_b8;
  float local_b0;
  undefined1 local_a8 [128];
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if ((byte)(*(char *)((longlong)param_2 + 0x335) - 1U) < 2) {
    return;
  }
  lVar8 = param_2[0x5a];
  if (lVar8 == 0) {
LAB_142d22922:
    lVar8 = param_1[0xe8];
    if (lVar8 == 0) {
      return;
    }
  }
  else {
    if (*(char *)(lVar8 + 0x231) != '\0') {
      return;
    }
    lVar8 = *(longlong *)(lVar8 + 0x238);
    if (lVar8 == 0) goto LAB_142d22922;
  }
  plVar1 = (longlong *)param_2[0xb];
  if (plVar1 != (longlong *)0x0) {
    lVar5 = plVar1[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar5 = plVar1[0x1f];
      if (lVar5 == 0) goto LAB_142d22981;
    }
    if (*(char *)(lVar5 + 0xb0) != '\0') {
      return;
    }
    if (*(char *)(lVar5 + 0xb1) != '\0') {
      return;
    }
  }
LAB_142d22981:
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar5 = DAT_146b33f38;
  lVar7 = DAT_146b33f38 + 0x30;
  lVar4 = FWeakObjectPtr::Get(lVar7);
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar5 + 0x38)) {
      return;
    }
    if (*(longlong *)(lVar5 + 0x40) == 0) {
      return;
    }
    lVar4 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar7,lVar4);
    if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar5 + 0x38) = DAT_1464b56f4;
    }
    lVar4 = FWeakObjectPtr::Get(lVar7);
    if (lVar4 == 0) {
      return;
    }
  }
  lVar5 = FUN_142e0ceb0();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((bVar2) && (0.0001 < *(float *)(param_2 + 0x3b) || *(float *)(param_2 + 0x3b) == 0.0001)) {
    uVar11 = (**(code **)(*param_2 + 0x18))(param_2,0);
    uVar15 = (undefined4)((ulonglong)uVar11 >> 0x20);
    fVar9 = (float)(**(code **)(*param_1 + 0x408))(param_1);
    if (fVar9 <= 0.0) {
      fVar9 = 1.0;
      uVar15 = 0;
    }
    else {
      fVar9 = (float)uVar11 / fVar9;
    }
    lVar5 = FRuntimeFloatCurve::GetRichCurve();
    if (lVar5 == 0) {
      fVar10 = 1.0;
    }
    else {
      fVar10 = (float)FRichCurve::Eval(lVar5,CONCAT44(uVar15,fVar9),0x3f800000);
    }
    iVar3 = rand();
    if (((float)iVar3 * 3.051851e-05 <= fVar10) && ((int)param_1[0x10c] <= DAT_1466ad208)) {
      *(int *)(param_1 + 0x10c) = (int)param_1[0x10c] + 1;
      uVar11 = *(undefined8 *)((longlong)param_2 + 0x11c);
      fVar10 = *(float *)(param_2 + 0x23);
      local_110 = *(float *)((longlong)param_2 + 0x124);
      lVar5 = param_2[0x22];
      if (((float)uVar11 == 0.0) &&
         ((local_108._4_4_ = (float)((ulonglong)uVar11 >> 0x20), local_108._4_4_ == 0.0 &&
          (local_110 == 0.0)))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        lVar7 = *(longlong *)(param_1[0x23] + 0x168);
        if (lVar7 == 0) {
          local_d4 = DAT_1468b5d98;
          puVar6 = &local_dc;
          local_dc = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        }
        else {
          puVar6 = (undefined8 *)&local_e8;
          local_e8 = *(undefined4 *)(lVar7 + 0x220);
          local_e0 = *(undefined4 *)(lVar7 + 0x228);
          uStack_e4 = *(undefined4 *)(lVar7 + 0x224);
        }
        local_d4 = *(float *)(puVar6 + 1);
        local_f8._4_4_ = (float)((ulonglong)lVar5 >> 0x20);
        fStack_114 = (float)((ulonglong)*puVar6 >> 0x20) - local_f8._4_4_;
        local_f8._0_4_ = (float)lVar5;
        local_118 = (float)*puVar6 - (float)local_f8;
        local_110 = local_d4 - fVar10;
        fVar12 = fStack_114 * fStack_114 + local_118 * local_118 + local_110 * local_110;
        if (fVar12 != 1.0) {
          if (1e-08 <= fVar12) {
            auVar14 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
            fVar13 = auVar14._0_4_;
            fVar13 = fVar13 + fVar13 * (0.5 - fVar12 * 0.5 * fVar13 * fVar13);
            fVar13 = fVar13 + fVar13 * (0.5 - fVar12 * 0.5 * fVar13 * fVar13);
            local_118 = fVar13 * local_118;
            local_110 = fVar13 * local_110;
            fStack_114 = fVar13 * fStack_114;
          }
          else {
            local_118 = DAT_1468b5d90;
            local_110 = DAT_1468b5d98;
            fStack_114 = DAT_1468b5d94;
          }
        }
        uVar11 = CONCAT44(fStack_114,local_118);
      }
      local_108 = uVar11;
      local_100 = local_110;
      local_f8 = lVar5;
      local_f0 = fVar10;
      if (0.0 < *(float *)(lVar4 + 0x1d0)) {
        puVar6 = (undefined8 *)
                 FMath::VRandCone(local_a8,&local_108,*(float *)(lVar4 + 0x1d0) * 0.008726646);
        local_108 = *puVar6;
        local_100 = *(float *)(puVar6 + 1);
      }
      local_c8 = local_108;
      local_c0 = local_100;
      local_b8 = lVar5;
      local_b0 = fVar10;
      FUN_142e09d50(param_1,lVar8,&local_b8,&local_c8,fVar9);
    }
  }
  return;
}



// FUNCTION 142d22e10 FUN_142d22e10 body=668 status=ok
// SIG undefined FUN_142d22e10(void)

void FUN_142d22e10(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  float *pfVar13;
  ulonglong uVar14;
  float fVar15;
  ulonglong uVar9;
  
  if (0 < (int)param_1[0x3d]) {
    if (*(float *)(param_1 + 0x3b) < *(float *)param_1[0x3c]) {
      *(float *)param_1[0x3c] = *(float *)(param_1 + 0x3b);
    }
  }
  lVar11 = param_1[0x56];
  if (lVar11 == 0) goto LAB_142d2309f;
  if (((*(byte *)(lVar11 + 0x840) & 1) == 0) &&
     (cVar4 = FUN_1407c3030(lVar11 + 0x290), cVar4 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  fVar15 = (float)(**(code **)(*param_1 + 0x18))(param_1,1);
  uVar9 = 0;
  if (fVar15 <= 0.0001) {
    if ((0.0001 < *(float *)(param_1 + 0x38)) && (iVar12 = (int)param_1[0x3d] + -1, -1 < iVar12)) {
      lVar11 = (longlong)iVar12 * 0x78;
      do {
        if ((-1 < iVar12) && (iVar12 < *(int *)(param_1[0x56] + 0x680))) {
          cVar4 = FUN_142d3e330((longlong)iVar12 * 0x78 + *(longlong *)(param_1[0x56] + 0x678));
          if (cVar4 != '\0') {
            lVar1 = *(longlong *)(*(longlong *)(param_1[0x56] + 0x678) + lVar11);
            if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x68) != 0)) {
              lVar11 = *(longlong *)((longlong)iVar12 * 0x78 + *(longlong *)(param_1[0x56] + 0x678))
              ;
              goto LAB_142d22fb2;
            }
          }
        }
        lVar11 = lVar11 + -0x78;
        iVar12 = iVar12 + -1;
      } while (-1 < iVar12);
    }
  }
  else if (0 < (int)param_1[0x3d]) {
    pfVar13 = (float *)param_1[0x3c];
    uVar5 = uVar9;
    uVar10 = uVar9;
    uVar14 = uVar9;
LAB_142d22ec8:
    iVar12 = (int)uVar5;
    if (((*pfVar13 <= 0.0001) || ((longlong)uVar10 < 0)) ||
       (*(int *)(param_1[0x56] + 0x680) <= iVar12)) goto LAB_142d22f16;
    lVar11 = *(longlong *)(param_1[0x56] + 0x678);
    lVar1 = *(longlong *)(uVar14 + lVar11);
    if (lVar1 == 0) goto LAB_142d22f16;
    if (bVar3) {
      if (*(longlong *)(lVar1 + 0x68) == 0) goto LAB_142d22f16;
      lVar11 = *(longlong *)((longlong)iVar12 * 0x78 + lVar11);
LAB_142d22fb2:
      uVar6 = *(undefined8 *)(lVar11 + 0x68);
    }
    else {
      if (*(longlong *)(lVar1 + 0x60) == 0) goto LAB_142d22f16;
      uVar6 = *(undefined8 *)(*(longlong *)((longlong)iVar12 * 0x78 + lVar11) + 0x60);
    }
    FWeakObjectPtr::operator=((longlong)param_1 + 0xc4,uVar6);
  }
LAB_142d22fc2:
  fVar15 = (float)FUN_142d19870(param_1[0x56]);
  if (fVar15 - *(float *)(param_1 + 0x3b) <= 0.0001) {
    lVar11 = param_1[0x56];
    lVar1 = param_1[0x4d];
    lVar7 = *(longlong *)(lVar11 + 0x180);
    if (lVar7 == 0) {
      plVar2 = *(longlong **)(lVar11 + 0x118);
      if (plVar2 != (longlong *)0x0) {
        uVar6 = FUN_142e79d90();
        lVar7 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar6);
        *(longlong *)(lVar11 + 0x180) = lVar7;
        if (lVar7 != 0) goto LAB_142d2302a;
      }
      cVar4 = '\0';
    }
    else {
LAB_142d2302a:
      cVar4 = FUN_142dd5710(lVar7,lVar1);
    }
    *(byte *)((longlong)param_1 + 0x214) = *(byte *)((longlong)param_1 + 0x214) & 0xfb;
    *(byte *)((longlong)param_1 + 0x214) = *(byte *)((longlong)param_1 + 0x214) | cVar4 << 2;
  }
  if ((bVar3) && (param_1[0x3b] = 0, uVar5 = uVar9, 0 < (int)param_1[0x3d])) {
    do {
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      *(undefined4 *)(uVar5 + param_1[0x3c]) = 0;
      uVar5 = uVar5 + 4;
    } while ((int)uVar8 < (int)param_1[0x3d]);
  }
LAB_142d2309f:
  FUN_142d14090(param_1);
  return;
LAB_142d22f16:
  uVar5 = (ulonglong)(iVar12 + 1U);
  uVar10 = uVar10 + 1;
  pfVar13 = pfVar13 + 1;
  uVar14 = uVar14 + 0x78;
  if ((int)param_1[0x3d] <= (int)(iVar12 + 1U)) goto LAB_142d22fc2;
  goto LAB_142d22ec8;
}



// FUNCTION 142d230b0 FUN_142d230b0 body=297 status=ok
// SIG undefined FUN_142d230b0(void)

void FUN_142d230b0(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  UObject::PostLoad();
  lVar8 = *(longlong *)(param_1 + 0xf8);
  lVar7 = (longlong)*(int *)(param_1 + 0x100) * 0x40 + lVar8;
  if (lVar8 != lVar7) {
    piVar6 = (int *)(lVar8 + 0x20);
    do {
      puVar5 = *(undefined8 **)(piVar6 + -6);
      puVar1 = puVar5 + (longlong)piVar6[-4] * 3;
      for (; puVar5 != puVar1; puVar5 = puVar5 + 3) {
        uVar3 = *puVar5;
        FString::FString(&local_38,puVar5 + 1);
        iVar2 = *piVar6;
        *piVar6 = iVar2 + 1;
        if (piVar6[1] < iVar2 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(piVar6 + -2,iVar2);
        }
        puVar4 = (undefined8 *)((longlong)iVar2 * 0x20 + *(longlong *)(piVar6 + -2));
        *puVar4 = 0;
        puVar4[1] = uVar3;
        puVar4[2] = local_38;
        *(undefined4 *)(puVar4 + 3) = local_30;
        *(undefined4 *)((longlong)puVar4 + 0x1c) = local_2c;
      }
      lVar8 = lVar8 + 0x40;
      piVar6 = piVar6 + 0x10;
    } while (lVar8 != lVar7);
  }
  return;
}



// FUNCTION 142d231f0 FUN_142d231f0 body=29 status=ok
// SIG undefined FUN_142d231f0(void)

void FUN_142d231f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar1 = *(longlong *)(param_2 + 0xd0);
  if ((lVar1 != 0) && (lVar2 = *(longlong *)(param_1 + 0x10), lVar2 != 0)) {
    if ((*(longlong *)(lVar1 + 0x120) != 0) || (lVar3 = FUN_1423407b0(), lVar3 != 0)) {
      lVar3 = *(longlong *)(lVar1 + 0x120);
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0(lVar1);
      }
      lVar3 = UWorld::GetGameState<APVPGameState>(lVar3);
      if (((lVar3 != 0) && (lVar4 = FUN_142d818e0(lVar3), lVar4 != 0)) && (lVar2 != 0)) {
        uVar5 = FUN_142d818e0(lVar3);
        FUN_142d10700(uVar5,lVar1,lVar2,0);
        FUN_142d134a0(lVar1 + 0x1f0,lVar2);
      }
    }
    return;
  }
  return;
}



// FUNCTION 142d23210 FUN_142d23210 body=252 status=ok
// SIG undefined FUN_142d23210(void)

void FUN_142d23210(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar1 = *(longlong *)(param_2 + 0xd0);
  if (((lVar1 != 0) && (lVar2 = *(longlong *)(param_1 + 0x10), lVar2 != 0)) &&
     ((lVar3 = *(longlong *)(param_1 + 0x20), *(longlong *)(lVar1 + 0x120) != 0 ||
      (lVar4 = FUN_1423407b0(lVar1), lVar4 != 0)))) {
    lVar4 = *(longlong *)(lVar1 + 0x120);
    if (lVar4 == 0) {
      lVar4 = FUN_1423407b0(lVar1);
    }
    lVar4 = UWorld::GetGameState<APVPGameState>(lVar4);
    if ((lVar4 != 0) && (lVar5 = FUN_142d818e0(lVar4), lVar5 != 0)) {
      if (lVar3 != 0) {
        FUN_142d26ae0(lVar1,lVar3);
        FUN_142d2b1e0(lVar1 + 0x1f0,lVar3);
      }
      if (lVar2 != 0) {
        uVar6 = FUN_142d818e0(lVar4);
        FUN_142d10700(uVar6,lVar1,lVar2,0);
        FUN_142d134a0(lVar1 + 0x1f0,lVar2);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x10);
  return;
}



// FUNCTION 142d23310 FUN_142d23310 body=187 status=ok
// SIG undefined FUN_142d23310(void)

void FUN_142d23310(longlong *param_1)

{
  char local_res8 [8];
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  float local_28 [8];
  
  if (*(char *)((longlong)param_1 + 0x134) != '\x02') {
    FUN_142d0fda0();
    local_res10[0] = 0.0;
    local_res18[0] = 0.0;
    local_28[0] = 0.0;
    local_res20[0] = 1.0;
    local_res8[0] = '\0';
    (**(code **)(*param_1 + 0x60))(param_1,local_res10,local_res18,local_28,local_res20,local_res8);
    if (local_res8[0] != '\0') {
      *(float *)(param_1 + 0x3b) =
           ((local_res10[0] + 1.0) / (1.0 - local_res18[0])) * local_res20[0] *
           *(float *)(param_1 + 0x3b) + local_28[0];
    }
  }
  return;
}



// FUNCTION 142d23400 FUN_142d23400 body=69 status=ok
// SIG undefined FUN_142d23400(void)

void FUN_142d23400(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0xd0);
  if ((lVar1 != 0) && (lVar2 = *(longlong *)(param_1 + 0x10), lVar2 != 0)) {
    FUN_142d2b1e0(lVar1 + 0x1f0,lVar2);
    FUN_142d26ae0(lVar1,lVar2);
  }
  return;
}



// FUNCTION 142d23450 FUN_142d23450 body=141 status=ok
// SIG undefined FUN_142d23450(void)

void FUN_142d23450(undefined8 param_1,longlong param_2,char param_3,undefined8 param_4,char param_5,
                  undefined1 *param_6,undefined1 *param_7,float *param_8)

{
  char cVar1;
  float fVar2;
  
  if ((param_3 == '\0') || (*(char *)(param_2 + 0x131) != '\0')) {
    cVar1 = FUN_142d15330(param_1,param_2,param_4);
    if ((cVar1 != '\0') && ((*(char *)(param_2 + 0x138) == '\0' || (param_5 != '\0')))) {
      if (*(char *)(param_2 + 0x139) != '\0') {
        *param_6 = 1;
        *param_7 = 1;
        return;
      }
      fVar2 = (float)FUN_142c98860(param_2 + 0x140,param_4);
      *param_8 = fVar2 + *param_8;
      *param_7 = 1;
    }
  }
  return;
}



// FUNCTION 142d234e0 FUN_142d234e0 body=1033 status=ok
// SIG undefined FUN_142d234e0(void)

void FUN_142d234e0(undefined8 param_1,longlong param_2,char param_3,undefined8 param_4,char *param_5
                  )

{
  longlong *plVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined4 uVar13;
  float fVar14;
  char local_res18;
  longlong local_38;
  
  if ((param_3 != '\0') && (*(char *)(param_2 + 0x131) == '\0')) {
    return;
  }
  cVar3 = FUN_142d15330(param_1,param_2,param_4);
  if (cVar3 == '\0') {
    return;
  }
  local_38 = *(longlong *)(param_2 + 0x138);
  puVar8 = *(undefined8 **)(param_2 + 0x140);
  puVar11 = puVar8 + (longlong)*(int *)(param_2 + 0x148) * 2;
  for (; puVar8 != puVar11; puVar8 = puVar8 + 2) {
    cVar3 = FUN_142c48f90(*puVar8,param_4,0);
    if (cVar3 != '\0') {
      local_38 = puVar8[1];
      break;
    }
  }
  if (local_38 == 0) {
    return;
  }
  lVar4 = FUN_142e49950();
  lVar12 = local_38;
  while( true ) {
    if (lVar12 == 0) {
      return;
    }
    if (lVar12 == lVar4) break;
    lVar12 = *(longlong *)(lVar12 + 0x30);
  }
  bVar2 = *(byte *)(param_2 + 0x158);
  if (2 < bVar2) {
    if (bVar2 != 3) {
      if (bVar2 != 4) {
        return;
      }
      iVar10 = *(int *)(param_2 + 0x1d0);
      if (iVar10 <= *(int *)(param_5 + 0x10)) {
        return;
      }
      *(longlong *)(param_5 + 8) = local_38;
      *(int *)(param_5 + 0x10) = iVar10;
      uVar13 = FUN_142c98860(param_2 + 0x198,param_4);
      *(undefined4 *)(param_5 + 4) = uVar13;
      return;
    }
    if (*param_5 != '\0') {
      return;
    }
    fVar14 = (float)FUN_142c98860(param_2 + 0x160,param_4);
    plVar1 = (longlong *)(param_5 + 0x88);
    iVar10 = *(int *)(param_5 + 0xd0);
    plVar7 = *(longlong **)(param_5 + 200);
    if (*(longlong **)(param_5 + 200) == (longlong *)0x0) {
      plVar7 = plVar1;
    }
    plVar9 = plVar7 + (longlong)iVar10 * 2;
    if (plVar7 != plVar9) {
      do {
        if (*plVar7 != 0) {
          lVar5 = FUN_142e49950();
          lVar12 = *plVar7;
          for (lVar4 = lVar12; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
            if (lVar4 == lVar5) goto LAB_142d23677;
          }
        }
        lVar12 = 0;
LAB_142d23677:
        if (local_38 != 0) {
          lVar5 = FUN_142e49950();
          for (lVar4 = local_38; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
            lVar6 = local_38;
            if (lVar4 == lVar5) goto LAB_142d236a0;
          }
        }
        lVar6 = 0;
LAB_142d236a0:
        if (lVar12 == lVar6) goto LAB_142d236f3;
        plVar7 = plVar7 + 2;
      } while (plVar7 != plVar9);
      iVar10 = *(int *)(param_5 + 0xd0);
    }
    *(int *)(param_5 + 0xd0) = iVar10 + 1;
    if (*(int *)(param_5 + 0xd4) < iVar10 + 1) {
      TArray<FMovieSceneSectionData,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (plVar1,iVar10);
    }
    plVar7 = *(longlong **)(param_5 + 200);
    if (*(longlong **)(param_5 + 200) == (longlong *)0x0) {
      plVar7 = plVar1;
    }
    plVar7 = plVar7 + (longlong)iVar10 * 2;
    *plVar7 = local_38;
    *(undefined4 *)(plVar7 + 1) = 0;
LAB_142d236f3:
    *(float *)(plVar7 + 1) = fVar14 + *(float *)(plVar7 + 1);
    return;
  }
  if (*param_5 != '\0') {
    if (param_5[1] != '\x03') {
      return;
    }
    if (bVar2 == 0) {
      return;
    }
  }
  local_res18 = '\0';
  if (bVar2 == 1) {
    local_res18 = '\x01';
  }
  else if (bVar2 == 2) {
    local_res18 = '\x02';
  }
  fVar14 = (float)FUN_142c98860(param_2 + 0x160);
  plVar1 = (longlong *)(param_5 + 0x18);
  iVar10 = *(int *)(param_5 + 0x80);
  plVar7 = *(longlong **)(param_5 + 0x78);
  if (*(longlong **)(param_5 + 0x78) == (longlong *)0x0) {
    plVar7 = plVar1;
  }
  plVar9 = plVar7 + (longlong)iVar10 * 3;
  if (plVar7 != plVar9) {
    do {
      if (*(char *)((longlong)plVar7 + 0x14) == local_res18) {
        if (plVar7[1] != 0) {
          lVar5 = FUN_142e0d0b0();
          lVar12 = plVar7[1];
          for (lVar4 = lVar12; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
            if (lVar4 == lVar5) goto LAB_142d237c6;
          }
        }
        lVar12 = 0;
LAB_142d237c6:
        if (*(longlong *)(param_2 + 0x150) != 0) {
          lVar6 = FUN_142e0d0b0();
          lVar4 = *(longlong *)(param_2 + 0x150);
          for (lVar5 = lVar4; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
            if (lVar5 == lVar6) goto LAB_142d237f4;
          }
        }
        lVar4 = 0;
LAB_142d237f4:
        if (lVar12 == lVar4) {
          if (*plVar7 != 0) {
            lVar5 = FUN_142e49950();
            lVar12 = *plVar7;
            for (lVar4 = lVar12; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
              if (lVar4 == lVar5) goto LAB_142d23820;
            }
          }
          lVar12 = 0;
LAB_142d23820:
          if (local_38 != 0) {
            lVar5 = FUN_142e49950();
            for (lVar4 = local_38; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
              lVar6 = local_38;
              if (lVar4 == lVar5) goto LAB_142d2384b;
            }
          }
          lVar6 = 0;
LAB_142d2384b:
          if (lVar12 == lVar6) goto LAB_142d238b8;
        }
      }
      plVar7 = plVar7 + 3;
    } while (plVar7 != plVar9);
    iVar10 = *(int *)(param_5 + 0x80);
  }
  *(int *)(param_5 + 0x80) = iVar10 + 1;
  if (*(int *)(param_5 + 0x84) < iVar10 + 1) {
    TArray<FLatentResponse::FExecutionInfo,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
              (plVar1);
  }
  plVar7 = *(longlong **)(param_5 + 0x78);
  if (*(longlong **)(param_5 + 0x78) == (longlong *)0x0) {
    plVar7 = plVar1;
  }
  lVar12 = *(longlong *)(param_2 + 0x150);
  plVar7 = plVar7 + (longlong)iVar10 * 3;
  *plVar7 = local_38;
  *(char *)((longlong)plVar7 + 0x14) = local_res18;
  plVar7[1] = lVar12;
  *(undefined4 *)(plVar7 + 2) = 0;
LAB_142d238b8:
  *(float *)(plVar7 + 2) = fVar14 + *(float *)(plVar7 + 2);
  return;
}



// FUNCTION 142d238f0 FUN_142d238f0 body=153 status=ok
// SIG undefined FUN_142d238f0(void)

void FUN_142d238f0(undefined8 param_1,ulonglong *param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  plVar1 = (longlong *)*param_2;
  uVar2 = (longlong)(int)param_2[1] & 0x1fffffffffffffff;
  if (plVar1 + (int)param_2[1] < plVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FUN_142d234e0(param_1,*plVar1,param_3,param_4,param_5);
      }
      plVar1 = plVar1 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 142d23990 FUN_142d23990 body=559 status=ok
// SIG undefined FUN_142d23990(void)

void FUN_142d23990(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *local_48;
  uint local_40;
  uint local_3c;
  
  lVar1 = *(longlong *)(param_1 + 0x2a0);
  if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x1b0))) {
    uVar3 = FUN_142d19790();
    FUN_142d238f0(param_1,lVar1 + 0x1a8,0,uVar3,param_2);
  }
  lVar1 = *(longlong *)(param_1 + 0x290);
  if (((lVar1 != 0) && (lVar1 != *(longlong *)(param_1 + 0x2a0))) && (0 < *(int *)(lVar1 + 0x1b0)))
  {
    FUN_142d238f0(param_1,lVar1 + 0x1a8,1,*(undefined8 *)(param_1 + 0x268),param_2);
  }
  lVar1 = *(longlong *)(param_1 + 0x2b0);
  if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x1b0))) {
    FUN_142d238f0(param_1,lVar1 + 0x1a8,0,*(undefined8 *)(lVar1 + 0x118),param_2);
  }
  lVar1 = *(longlong *)(param_1 + 0x40);
  if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x1a0))) {
    FUN_142d238f0(param_1,lVar1 + 0x198,0,*(undefined8 *)(param_1 + 0x38),param_2);
  }
  lVar9 = *(longlong *)(param_1 + 0x1b0);
  plVar7 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_3c = 0;
  lVar1 = lVar9 + (longlong)*(int *)(param_1 + 0x1b8) * 8;
  plVar11 = plVar7;
  plVar10 = plVar7;
  if (lVar9 != lVar1) {
    do {
      lVar4 = FWeakObjectPtr::Get(lVar9);
      if (lVar4 != 0) {
        lVar5 = FUN_142e05930();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          iVar6 = (int)plVar7;
          local_40 = iVar6 + 1;
          if ((int)plVar10 < (int)local_40) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,plVar7);
            plVar10 = (longlong *)(ulonglong)local_3c;
            plVar11 = local_48;
          }
          plVar7 = (longlong *)(ulonglong)local_40;
          plVar11[iVar6] = lVar4;
        }
      }
      lVar9 = lVar9 + 8;
    } while (lVar9 != lVar1);
    uVar12 = 0;
    if (0 < (int)plVar7) {
      uVar3 = FUN_142d19790(param_1);
      uVar8 = (ulonglong)((longlong)(plVar11 + (int)plVar7) + (7 - (longlong)plVar11)) >> 3;
      if (plVar11 + (int)plVar7 < plVar11) {
        uVar8 = 0;
      }
      plVar10 = plVar11;
      if (uVar8 != 0) {
        do {
          if (*plVar10 != 0) {
            FUN_142d234e0(param_1,*plVar10,0,uVar3,param_2);
          }
          uVar12 = uVar12 + 1;
          plVar10 = plVar10 + 1;
        } while (uVar12 != uVar8);
      }
    }
    if (plVar11 != (longlong *)0x0) {
      FMemory::Free(plVar11);
    }
  }
  return;
}



// FUNCTION 142d23bc0 FUN_142d23bc0 body=892 status=ok
// SIG undefined FUN_142d23bc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_142d23bc0(longlong param_1,longlong param_2,char param_3,undefined8 param_4,longlong param_5,
             float *param_6,float *param_7,float *param_8,float *param_9)

{
  longlong *plVar1;
  int iVar2;
  float *pfVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_98;
  float fStack_94;
  undefined8 local_88;
  undefined4 uStack_74;
  
  if (((param_3 != '\0') && (*(char *)(param_2 + 0x131) == '\0')) ||
     (cVar4 = FUN_142d15330(param_1,param_2,param_4), cVar4 == '\0')) {
    return 0;
  }
  puVar7 = *(undefined8 **)(param_2 + 0x178);
  lVar9 = 0;
  puVar8 = puVar7 + (longlong)*(int *)(param_2 + 0x180) * 8;
  for (; puVar7 != puVar8; puVar7 = puVar7 + 8) {
    lVar6 = lVar9;
    if (*(longlong *)(param_1 + 0x2b0) != 0) {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x118);
    }
    cVar4 = FUN_142c48f90(*puVar7,lVar6,*(undefined8 *)(param_1 + 0x28));
    if (cVar4 != '\0') break;
  }
  fVar10 = (float)FUN_142c98860(param_2 + 0x140,param_4);
  if (*(char *)(param_2 + 0x188) != '\0') {
    if (*(longlong *)(param_1 + 0x2b0) != 0) {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x118);
    }
    if ((lVar9 != 0) && (*(longlong *)(param_1 + 0x28) != 0)) {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x168);
      if (lVar6 == 0) {
        local_88 = _DAT_1468b5d90;
        fVar12 = DAT_1468b5d98;
      }
      else {
        local_88 = *(undefined8 *)(lVar6 + 0x220);
        fVar12 = *(float *)(lVar6 + 0x228);
      }
      uVar5 = local_88;
      lVar9 = *(longlong *)(lVar9 + 0x168);
      if (lVar9 == 0) {
        local_88 = _DAT_1468b5d90;
        fVar11 = DAT_1468b5d98;
      }
      else {
        local_88 = *(undefined8 *)(lVar9 + 0x220);
        fVar11 = *(float *)(lVar9 + 0x228);
      }
      local_98 = (float)uVar5;
      local_98 = local_98 - (float)local_88;
      fStack_94 = (float)((ulonglong)uVar5 >> 0x20);
      fStack_94 = fStack_94 - (float)((ulonglong)local_88 >> 0x20);
      fVar12 = SQRT(fStack_94 * fStack_94 + local_98 * local_98 +
                    (fVar12 - fVar11) * (fVar12 - fVar11));
      if (0.0 < fVar12) {
        uVar5 = FRuntimeFloatCurve::GetRichCurve(param_2 + 400);
        fVar12 = (float)FRichCurve::Eval(uVar5,fVar12,0x3f800000);
        fVar10 = fVar12 * fVar10;
      }
    }
  }
  if (param_5 != 0) {
    cVar4 = *(char *)(param_2 + 0x138);
    fVar12 = *(float *)(param_1 + 0x1d8);
    if (cVar4 == '\0') {
      if (0.0 <= fVar10) {
        fVar11 = fVar12 * fVar10;
      }
      else {
        fVar11 = fVar12 / (1.0 - fVar10) - fVar12;
      }
    }
    else {
      fVar11 = fVar10;
      if (cVar4 != '\x01') {
        if (cVar4 == '\x02') {
          fVar11 = (fVar10 - 1.0) * fVar12;
        }
        else {
          fVar11 = 0.0;
        }
      }
    }
    iVar2 = *(int *)(param_1 + 0x250);
    *(int *)(param_1 + 0x250) = iVar2 + 1;
    if (*(int *)(param_1 + 0x254) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 0x248,iVar2);
    }
    lVar9 = *(longlong *)(param_1 + 0x248);
    plVar1 = (longlong *)(lVar9 + (longlong)iVar2 * 0x18);
    *plVar1 = param_2;
    plVar1[1] = param_5;
    *(ulonglong *)(lVar9 + 0x10 + (longlong)iVar2 * 0x18) = CONCAT44(uStack_74,fVar11);
  }
  cVar4 = *(char *)(param_2 + 0x138);
  if (cVar4 == '\0') {
    pfVar3 = param_6;
    if (fVar10 <= 0.0) {
      pfVar3 = param_7;
    }
LAB_142d23f00:
    param_9 = pfVar3;
    fVar10 = fVar10 + *param_9;
  }
  else {
    pfVar3 = param_8;
    if (cVar4 == '\x01') goto LAB_142d23f00;
    if (cVar4 != '\x02') goto LAB_142d23f08;
    fVar10 = fVar10 * *param_9;
  }
  *param_9 = fVar10;
LAB_142d23f08:
  if (*(char *)(param_2 + 0x208) != '\0') {
    *(undefined1 *)(param_1 + 0x344) = 1;
  }
  return 1;
}



// FUNCTION 142d23f40 FUN_142d23f40 body=172 status=ok
// SIG undefined FUN_142d23f40(void)

void FUN_142d23f40(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong local_18;
  undefined8 local_10;
  
  if ((*(uint *)(param_1 + 0x840) & 4) == 0) {
    *(uint *)(param_1 + 0x840) = *(uint *)(param_1 + 0x840) | 4;
    FUN_142d7f2b0(param_2,L"unit_health_depleted");
    if ((*(byte *)(param_1 + 0x660) & 0x10) != 0) {
      FUN_142d21bd0(param_1,param_2);
    }
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(param_2 + 0x290);
    }
    local_18 = param_1;
    local_10 = uVar1;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x230,&local_18);
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x240,param_2);
    FUN_142e0aa10(param_1,uVar1);
    FUN_142d28e10(param_1);
  }
  return;
}



// FUNCTION 142d24000 FUN_142d24000 body=457 status=ok
// SIG undefined FUN_142d24000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142d24000(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined4 local_a8;
  undefined2 local_a4;
  longlong local_80;
  undefined8 local_78;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  uVar4 = *(ulonglong *)(param_4 + 8);
  local_d0 = param_7;
  if (((uVar4 == 0) || ((*(byte *)(uVar4 + 0x660) & 8) == 0)) &&
     ((*(byte *)(param_1 + 0x2c) & 4) == 0)) {
    uVar4 = 0;
    local_a8 = 0;
    local_c0 = 0;
    local_80 = 0;
    local_78 = 0;
    local_60 = 0;
    local_58 = 0;
    local_b8 = 0x10000;
    local_b0 = 0;
    local_d8 = 0;
    local_c8 = 0;
    local_b4 = 0;
    local_a4 = 0x101;
    local_ac = 0;
    local_b2 = 0;
    if (*param_3 != 0) {
      FCollisionQueryParams::AddIgnoredActor(&local_c8);
      FCollisionQueryParams::AddIgnoredActor(&local_c8,*(undefined8 *)(*param_3 + 0x150));
    }
    uVar2 = 1;
    local_d8._4_4_ = (uint)((ulonglong)local_d8 >> 0x20) & 0xffffff00;
    local_d8 = CONCAT44(local_d8._4_4_,1);
    uVar5 = (longlong)DAT_146b31a78 & 0x3fffffffffffffff;
    if (DAT_146b31a70 + DAT_146b31a78 < DAT_146b31a70) {
      uVar5 = uVar4;
    }
    puVar3 = DAT_146b31a70;
    if (uVar5 != 0) {
      do {
        uVar2 = uVar2 | 1 << (*puVar3 & 0x1f);
        uVar4 = uVar4 + 1;
        local_d8 = CONCAT44(local_d8._4_4_,uVar2);
        puVar3 = puVar3 + 1;
      } while (uVar4 != uVar5);
    }
    local_d8._0_5_ = CONCAT14(param_8,(undefined4)local_d8);
    local_c8 = DAT_146b31a48;
    local_e0 = &local_c8;
    local_e8 = &local_d8;
    UWorld::LineTraceSingleByObjectType(param_5,param_2,param_6,local_d0);
    bVar1 = FUN_142d13550(param_1,param_2,param_4);
    if (local_60 != 0) {
      FMemory::Free();
    }
    if (local_80 != 0) {
      FMemory::Free();
    }
    uVar4 = (ulonglong)bVar1;
  }
  else {
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  return uVar4;
}



// FUNCTION 142d241d0 FUN_142d241d0 body=3374 status=ok
// SIG undefined FUN_142d241d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d241d0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong *plVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  longlong local_res20;
  longlong *local_288;
  int local_280;
  int local_27c;
  longlong local_268;
  undefined4 local_260;
  longlong local_258;
  undefined4 local_250;
  longlong *local_248;
  float local_240;
  longlong local_238;
  longlong local_230;
  longlong local_228;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 uStack_210;
  undefined4 local_20c;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined1 local_1c8;
  uint local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  int local_1a0;
  undefined4 local_19c;
  longlong local_198;
  longlong lStack_190;
  ulonglong local_188;
  undefined8 local_180;
  longlong local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined1 local_168;
  longlong local_158;
  undefined4 local_150;
  byte local_148 [4];
  longlong local_144;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  longlong local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  byte local_f0;
  undefined1 local_e8 [168];
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  iVar6 = FUN_142340f30();
  uVar17 = *(uint *)(param_1 + 0x108) >> 3;
  fVar19 = (float)(**(code **)(*param_2 + 0x18))(param_2,0);
  plVar12 = (longlong *)param_2[0xb];
  lVar11 = param_2[0x52];
  if (plVar12 == (longlong *)0x0) {
    local_res20 = 0;
  }
  else {
    local_res20 = plVar12[0x1f];
    if (local_res20 == 0) {
      (**(code **)(*plVar12 + 0x368))(plVar12);
      local_res20 = plVar12[0x1f];
    }
  }
  local_258 = 0;
  plVar12 = (longlong *)param_2[10];
  if ((plVar12 != (longlong *)0x0) && (local_258 = plVar12[0x1f], local_258 == 0)) {
    (**(code **)(*plVar12 + 0x368))(plVar12);
    local_258 = plVar12[0x1f];
  }
  lVar9 = param_2[9];
  fVar22 = 0.0;
  local_268 = lVar9;
  if ((uVar17 & 1) == 0) {
    if ((iVar6 != 3) && (lVar9 != 0)) {
      param_1[0x104] = lVar9;
      lVar7 = FUN_1429e18b0();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        param_1[0xf4] = lVar9;
      }
      lVar7 = param_1[0x23];
      if (lVar7 != 0) {
        lVar8 = FUN_1429d7ab0();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          *(longlong *)(lVar7 + 0x488) = lVar9;
        }
      }
    }
    local_170 = DAT_1468b5d98;
    local_198 = 0;
    lStack_190 = 0;
    local_178 = _DAT_1468b5d90;
    local_1b8 = CONCAT31(local_1b8._1_3_,*(undefined1 *)((longlong)param_2 + 0x214)) & 0xffffff01;
    uStack_1ac = (undefined4)param_2[0x23];
    uStack_1b4 = (undefined4)param_2[0x22];
    uStack_1b0 = (undefined4)((ulonglong)param_2[0x22] >> 0x20);
    uStack_1a8 = *(undefined8 *)((longlong)param_2 + 0x11c);
    local_1a0 = *(int *)((longlong)param_2 + 0x124);
    local_188 = 0;
    local_180 = 0;
    local_16c = 0;
    local_198 = FWeakObjectPtr::Get((longlong)param_2 + 0xd4);
    lStack_190 = param_2[0x5a];
    FUN_1408e22e0(&local_188,param_2 + 0x4b);
    local_168 = (char)param_2[0x43] != '\0';
    if ((byte)((char)param_2[0x5e] - 1U) < 2) {
      local_178 = param_2[0x5f];
      local_170 = (undefined4)param_2[0x60];
      local_16c = *(undefined4 *)((longlong)param_2 + 0x304);
    }
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x3d,param_2);
    lVar9 = FUN_140a7add0(local_e8,&local_1b8);
    puVar10 = (undefined1 *)FUN_140a7add0(local_148,lVar9);
    local_238 = local_res20;
    local_230 = local_258;
    local_228 = local_268;
    local_218 = CONCAT31(local_218._1_3_,*puVar10);
    local_20c = *(undefined4 *)(puVar10 + 0xc);
    local_200 = CONCAT44(local_200._4_4_,*(undefined4 *)(puVar10 + 0x18));
    local_1f8 = *(undefined8 *)(puVar10 + 0x20);
    local_1d8 = _DAT_1468b5d90;
    local_1f0 = *(undefined8 *)(puVar10 + 0x28);
    local_214 = (undefined4)*(undefined8 *)(puVar10 + 4);
    uStack_210 = (undefined4)((ulonglong)*(undefined8 *)(puVar10 + 4) >> 0x20);
    local_208 = *(undefined8 *)(puVar10 + 0x10);
    local_1d0 = DAT_1468b5d98;
    local_1e8 = 0;
    local_1e0 = 0;
    local_1cc = 0;
    local_220 = (undefined4)lVar11;
    uStack_21c = (undefined4)((ulonglong)lVar11 >> 0x20);
    local_248 = param_1;
    local_240 = fVar19;
    FUN_1408e22e0(&local_1e8,puVar10 + 0x30);
    local_1d8 = *(longlong *)(puVar10 + 0x40);
    local_1d0 = *(undefined4 *)(puVar10 + 0x48);
    local_1cc = *(undefined4 *)(puVar10 + 0x4c);
    local_1c8 = puVar10[0x50];
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x40,&local_248);
    if (local_1e8 != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(puVar10 + 0x30) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar9 + 0x30) != 0) {
      FMemory::Free();
    }
    FUN_142e0a8b0(param_1,fVar19,local_res20,local_258,local_268,lVar11,&local_1b8);
    lVar11 = param_1[0x24];
    lVar9 = lVar11;
    if (lVar11 == 0) {
      lVar9 = FUN_1423407b0(param_1);
      lVar11 = param_1[0x24];
    }
    if (lVar9 != 0) {
      if (lVar11 == 0) {
        lVar11 = FUN_1423407b0(param_1);
      }
      plVar12 = (longlong *)UWorld::GetAuthGameMode<ABaseGameMode>(lVar11);
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0xa08))(plVar12,param_2);
      }
    }
    if (local_188 != 0) {
      FMemory::Free();
    }
  }
  if ((param_1[0x103] == 0) || ((*(byte *)(param_1 + 0xfd) & 2) == 0)) {
    lVar11 = param_1[0x102];
  }
  else {
    lVar11 = FUN_142d1ab50();
  }
  if ((lVar11 != 0) && (0 < (int)param_2[0x48])) {
    if (((*(byte *)(param_1 + 0xcc) & 0x10) == 0) ||
       ((*(float *)((longlong)param_2 + 0x1c4) <= 0.0001 ||
        (fVar20 = (float)FUN_142d19870(param_1), 0.0001 < fVar20)))) {
      uVar14 = 0;
      uVar4 = 0;
      if ((uVar17 & 1) != 0) goto LAB_142d24672;
      uVar13 = 0;
    }
    else {
      uVar4 = 1;
LAB_142d24672:
      uVar14 = uVar4;
      uVar13 = 1;
    }
    lVar7 = param_2[0x47];
    lVar9 = lVar7 + (longlong)(int)param_2[0x48] * 0x18;
    for (; lVar7 != lVar9; lVar7 = lVar7 + 0x18) {
      FUN_142d334e0(lVar11,param_2,lVar7,uVar13,uVar14);
    }
  }
  if ((uVar17 & 1) != 0) goto LAB_142d24e4c;
  fVar20 = *(float *)((longlong)param_2 + 0x1c4);
  fVar21 = (float)FUN_142d19870(param_1);
  if (iVar6 != 3) {
    if ((0.0001 < fVar20) && (fVar21 <= 0.0001)) {
      FUN_142d23f40(param_1,param_2);
    }
    local_288 = (longlong *)0x0;
    local_27c = 0;
    iVar6 = 0;
    if (param_2[9] != 0) {
      local_280 = 1;
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_288);
      *local_288 = param_2[9];
      iVar6 = local_280;
    }
    if (param_2[0x4e] != 0) {
      for (plVar12 = local_288; plVar12 != local_288 + iVar6; plVar12 = plVar12 + 1) {
        if (*plVar12 == param_2[0x4e]) {
          if ((int)((longlong)plVar12 - (longlong)local_288 >> 3) != -1) goto LAB_142d247c8;
          break;
        }
      }
      local_280 = iVar6 + 1;
      if (local_27c < local_280) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_288,iVar6);
      }
      local_288[iVar6] = param_2[0x4e];
      iVar6 = local_280;
    }
LAB_142d247c8:
    if (param_2[0x4f] != 0) {
      for (plVar12 = local_288; plVar12 != local_288 + iVar6; plVar12 = plVar12 + 1) {
        if (*plVar12 == param_2[0x4f]) {
          if ((int)((longlong)plVar12 - (longlong)local_288 >> 3) != -1) goto LAB_142d24833;
          break;
        }
      }
      local_280 = iVar6 + 1;
      if (local_27c < local_280) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_288,iVar6);
      }
      local_288[iVar6] = param_2[0x4f];
      iVar6 = local_280;
    }
LAB_142d24833:
    if (param_2[0x51] != 0) {
      for (plVar12 = local_288; plVar12 != local_288 + iVar6; plVar12 = plVar12 + 1) {
        if (*plVar12 == param_2[0x51]) {
          if ((int)((longlong)plVar12 - (longlong)local_288 >> 3) != -1) goto LAB_142d2489b;
          break;
        }
      }
      local_280 = iVar6 + 1;
      if (local_27c < local_280) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_288,iVar6);
      }
      local_288[iVar6] = param_2[0x51];
      iVar6 = local_280;
    }
LAB_142d2489b:
    plVar3 = local_288;
    plVar12 = local_288 + iVar6;
    for (plVar18 = local_288; plVar18 != plVar12; plVar18 = plVar18 + 1) {
      plVar1 = (longlong *)*plVar18;
      if (plVar1 != (longlong *)0x0) {
        lVar11 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
        if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
            != lVar11 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          (**(code **)(*plVar1 + 0x1038))(plVar1,param_2);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      FMemory::Free(plVar3);
    }
  }
  uVar15 = 0;
  if (0.0 < fVar19) {
    FUN_142d1a4b0(param_2,&local_288);
    lVar11 = (longlong)local_280;
    if (0 < local_280) {
      plVar12 = (longlong *)param_2[5];
      lVar9 = param_1[0x23];
      local_f8 = DAT_1468b5d98;
      local_148[0] = *(byte *)((longlong)param_2 + 0x214) & 1;
      local_100 = _DAT_1468b5d90;
      local_144 = param_2[0x22];
      local_13c = (undefined4)param_2[0x23];
      local_130 = *(undefined4 *)((longlong)param_2 + 0x124);
      local_128 = param_2[7];
      local_138 = *(undefined8 *)((longlong)param_2 + 0x11c);
      local_110 = 0;
      local_108 = 0;
      local_f4 = 0;
      local_120 = FWeakObjectPtr::Get((longlong)param_2 + 0xd4);
      local_118 = param_2[0x5a];
      FUN_1408e22e0(&local_110,param_2 + 0x4b);
      local_f0 = (byte)(*(uint *)(param_2 + 0x20) >> 5) & 1;
      if ((byte)((char)param_2[0x5e] - 1U) < 2) {
        local_100 = param_2[0x5f];
        local_f8 = (undefined4)param_2[0x60];
        local_f4 = *(undefined4 *)((longlong)param_2 + 0x304);
      }
      fVar20 = (float)(**(code **)(*param_2 + 0x38))(param_2,fVar19);
      uVar16 = (ulonglong)((longlong)(local_288 + lVar11) + (7 - (longlong)local_288)) >> 3;
      if (local_288 + lVar11 < local_288) {
        uVar16 = 0;
      }
      plVar18 = local_288;
      if (uVar16 != 0) {
        do {
          lVar11 = *plVar18;
          if ((lVar11 != 0) &&
             (TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(lVar11 + 0x1d0,param_2),
             1 < (byte)(*(char *)((longlong)param_2 + 0x335) - 1U))) {
            lVar7 = FUN_142d0a220(local_e8,local_148);
            puVar10 = (undefined1 *)FUN_142d0a220(&local_1b8,lVar7);
            local_1e8 = 0;
            local_1e0 = 0;
            local_1cc = 0;
            local_238 = local_res20;
            local_230 = local_258;
            local_220 = CONCAT31(local_220._1_3_,*puVar10);
            local_214 = *(undefined4 *)(puVar10 + 0xc);
            local_208 = CONCAT44(local_208._4_4_,*(undefined4 *)(puVar10 + 0x18));
            local_200 = *(undefined8 *)(puVar10 + 0x20);
            local_1f8 = *(undefined8 *)(puVar10 + 0x28);
            local_1d8 = _DAT_1468b5d90;
            local_1f0 = *(undefined8 *)(puVar10 + 0x30);
            uStack_21c = (undefined4)*(undefined8 *)(puVar10 + 4);
            local_218 = (undefined4)((ulonglong)*(undefined8 *)(puVar10 + 4) >> 0x20);
            local_1d0 = DAT_1468b5d98;
            uStack_210 = (undefined4)*(undefined8 *)(puVar10 + 0x10);
            local_20c = (undefined4)((ulonglong)*(undefined8 *)(puVar10 + 0x10) >> 0x20);
            local_248 = plVar12;
            local_240 = fVar20;
            local_228 = lVar9;
            FUN_1408e22e0(&local_1e8,puVar10 + 0x38);
            local_1d8 = *(longlong *)(puVar10 + 0x48);
            local_1d0 = *(undefined4 *)(puVar10 + 0x50);
            local_1cc = *(undefined4 *)(puVar10 + 0x54);
            local_1c8 = puVar10[0x58];
            TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                      (lVar11 + 0x1e8,&local_248);
            if (local_1e8 != 0) {
              FMemory::Free();
            }
            if (*(longlong *)(puVar10 + 0x38) != 0) {
              FMemory::Free();
            }
            if (*(longlong *)(lVar7 + 0x38) != 0) {
              FMemory::Free();
            }
          }
          uVar15 = uVar15 + 1;
          plVar18 = plVar18 + 1;
        } while (uVar15 != uVar16);
      }
      if (local_110 != 0) {
        FMemory::Free();
      }
    }
    if (local_288 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  if ((local_res20 != 0) && (*(longlong *)(local_res20 + 0x100) != 0)) {
    if ((*(byte *)(param_1 + 0x108) & 1) == 0) {
      cVar5 = FUN_1407c3030(param_1 + 0x52);
      bVar2 = false;
      if (cVar5 != '\0') goto LAB_142d24c73;
    }
    else {
LAB_142d24c73:
      bVar2 = true;
    }
    if (!bVar2) {
      lVar11 = *(longlong *)(local_res20 + 0x100);
      plVar12 = (longlong *)param_1[0x23];
      if (plVar12 != (longlong *)0x0) {
        uVar13 = UNavigateHomeCharacterWidget::GetPrivateStaticClass();
        lVar9 = (**(code **)(*plVar12 + 0x628))(plVar12,uVar13);
        if (((lVar9 != 0) && (lVar11 != 0)) && (param_2[7] != 0)) {
          uStack_1b0 = 0xffffffff;
          uStack_1ac = 0;
          uStack_1a8 = 0xffffffff;
          local_1b8 = 0;
          uStack_1b4 = 0;
          local_1a0._0_1_ = 1;
          local_19c = 0;
          local_198 = 0;
          local_188 = local_188 & 0xffffffff00000000;
          lStack_190 = param_2[7];
          FWeakObjectPtr::operator=(&uStack_1b0);
          local_198 = param_2[9];
          local_1a0 = (uint)local_1a0._1_3_ << 8;
          local_1b8 = (uint)lVar11;
          uStack_1b4 = (undefined4)((ulonglong)lVar11 >> 0x20);
          cVar5 = (**(code **)(*param_1 + 0x440))(param_1,&local_1b8,param_2);
          if (cVar5 != '\0') {
            FUN_142dc49a0(lVar9,&local_288,&local_1b8);
          }
        }
      }
    }
  }
  lVar11 = 0;
  if (0.0 < fVar19) {
    if (local_268 != 0) {
      lVar11 = *(longlong *)(local_268 + 0x488);
    }
    if (lVar11 == 0) {
      local_288 = &local_268;
      local_268 = param_2[0x22];
      local_260 = (int)param_2[0x23];
    }
    else {
      lVar9 = *(longlong *)(lVar11 + 0x168);
      if (lVar9 == 0) {
        local_268 = _DAT_1468b5d90;
        local_260 = DAT_1468b5d98;
      }
      else {
        local_260 = *(undefined4 *)(lVar9 + 0x228);
        local_268 = *(longlong *)(lVar9 + 0x220);
      }
      local_288 = &local_258;
      local_258 = local_268;
      local_250 = local_260;
    }
    local_150 = (undefined4)param_2[0x23];
    local_158 = param_2[0x22];
    lVar9 = param_1[0x23];
    local_280 = (int)local_288[1];
    lVar7 = param_1[0x24];
    local_288 = (longlong *)*local_288;
    if (lVar7 == 0) {
      lVar7 = FUN_1423407b0(param_1);
    }
    FUN_142c262e0(lVar7,lVar9,lVar11,fVar19,&local_288,&local_158);
  }
  FUN_142d72750(param_1 + 0x7a,param_2);
LAB_142d24e4c:
  lVar11 = param_1[0x24];
  if ((lVar11 != 0) || (lVar11 = FUN_1423407b0(param_1), lVar11 != 0)) {
    fVar22 = *(float *)(lVar11 + 0x790);
  }
  if (_DAT_1466ad20c < fVar22 - *(float *)((longlong)param_1 + 0x864)) {
    *(float *)((longlong)param_1 + 0x864) = fVar22;
    param_1[0x10b] = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0;
  }
  FUN_142d22710(param_1,param_2);
  FUN_142d228c0(param_1,param_2);
  return;
}



// FUNCTION 142d24f00 FUN_142d24f00 body=247 status=ok
// SIG undefined FUN_142d24f00(void)

void FUN_142d24f00(longlong *param_1,longlong param_2)

{
  float *pfVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  
  if (param_2 != 0) {
    uVar4 = 0;
    fVar7 = 0.0;
    if ((0.0 < *(float *)(param_1 + 0x109)) &&
       (fVar6 = (float)(**(code **)(*param_1 + 0x408))(), 0.0 < fVar6)) {
      pfVar1 = *(float **)(param_2 + 0x1e0);
      uVar5 = (longlong)*(int *)(param_2 + 0x1e8) & 0x3fffffffffffffff;
      if (pfVar1 + *(int *)(param_2 + 0x1e8) < pfVar1) {
        uVar5 = uVar4;
      }
      uVar2 = uVar4;
      if (uVar5 != 0) {
        do {
          fVar7 = fVar7 + *pfVar1;
          pfVar1 = pfVar1 + 1;
          uVar2 = uVar2 + 1;
        } while (uVar2 != uVar5);
      }
      *(float *)((longlong)param_1 + 0x844) = fVar7 / fVar6 + *(float *)((longlong)param_1 + 0x844);
      FUN_142d29010(param_1);
    }
    FUN_142d0fb60(param_1,param_2);
    FUN_142d1d3b0(param_1,param_2);
    if (0 < (int)param_1[0x101]) {
      do {
        FUN_142d11120(param_1,param_1[0x100] + (longlong)(int)uVar4 * 0x48,param_2);
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while ((int)uVar3 < (int)param_1[0x101]);
    }
  }
  return;
}



// FUNCTION 142d25000 FUN_142d25000 body=1427 status=ok
// SIG undefined FUN_142d25000(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d25000(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  float fVar17;
  undefined4 uVar18;
  longlong local_res10;
  longlong local_res18;
  longlong local_d8;
  undefined4 local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  longlong lStack_a0;
  longlong local_98;
  
  if ((param_2 != (longlong *)0x0) && (*(int *)(param_1 + 0x670) == 0)) {
    fVar17 = (float)(**(code **)(*param_2 + 0x18))(param_2,0);
    plVar6 = (longlong *)param_2[10];
    uVar16 = 0;
    uVar2 = param_2[5];
    if (plVar6 == (longlong *)0x0) {
      local_res10 = 0;
    }
    else {
      local_res10 = plVar6[0x1f];
      if (local_res10 == 0) {
        (**(code **)(*plVar6 + 0x368))(plVar6);
        local_res10 = plVar6[0x1f];
      }
    }
    plVar6 = (longlong *)param_2[0xb];
    if (plVar6 == (longlong *)0x0) {
      local_res18 = 0;
    }
    else {
      local_res18 = plVar6[0x1f];
      if (local_res18 == 0) {
        (**(code **)(*plVar6 + 0x368))(plVar6);
        local_res18 = plVar6[0x1f];
      }
    }
    local_b8 = *(longlong **)(param_1 + 0x118);
    uStack_b0 = CONCAT44(uStack_b0._4_4_,fVar17);
    local_a8 = uVar2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x220,&local_b8);
    FUN_142e0a9c0(param_1,fVar17,uVar2);
    local_b8 = (longlong *)0x0;
    uStack_b0 = uStack_b0 & 0xffffffff;
    uVar9 = uVar16;
    iVar15 = 0;
    if (param_2[9] != 0) {
      uStack_b0 = 1;
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b8);
      uVar9 = uStack_b0 & 0xffffffff;
      *local_b8 = param_2[9];
      iVar15 = uStack_b0._4_4_;
    }
    if (param_2[0x4e] != 0) {
      iVar8 = (int)uVar9;
      for (plVar6 = local_b8; plVar6 != local_b8 + iVar8; plVar6 = plVar6 + 1) {
        if (*plVar6 == param_2[0x4e]) {
          if ((int)((longlong)plVar6 - (longlong)local_b8 >> 3) != -1) goto LAB_142d251ab;
          break;
        }
      }
      uVar7 = iVar8 + 1;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar7);
      if (iVar15 < (int)uVar7) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b8,uVar9);
        uVar7 = (uint)uStack_b0;
        iVar15 = uStack_b0._4_4_;
      }
      uVar9 = (ulonglong)uVar7;
      local_b8[iVar8] = param_2[0x4e];
    }
LAB_142d251ab:
    if (param_2[0x4f] != 0) {
      iVar8 = (int)uVar9;
      for (plVar6 = local_b8; plVar6 != local_b8 + iVar8; plVar6 = plVar6 + 1) {
        if (*plVar6 == param_2[0x4f]) {
          if ((int)((longlong)plVar6 - (longlong)local_b8 >> 3) != -1) goto LAB_142d25211;
          break;
        }
      }
      uVar7 = iVar8 + 1;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar7);
      if (iVar15 < (int)uVar7) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b8,uVar9);
        uVar7 = (uint)uStack_b0;
        iVar15 = uStack_b0._4_4_;
      }
      uVar9 = (ulonglong)uVar7;
      local_b8[iVar8] = param_2[0x4f];
    }
LAB_142d25211:
    iVar8 = (int)uVar9;
    if (param_2[0x51] != 0) {
      for (plVar6 = local_b8; plVar6 != local_b8 + iVar8; plVar6 = plVar6 + 1) {
        if (*plVar6 == param_2[0x51]) {
          if ((int)((longlong)plVar6 - (longlong)local_b8 >> 3) != -1) goto LAB_142d25277;
          break;
        }
      }
      lVar10 = (longlong)iVar8;
      iVar8 = iVar8 + 1;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,iVar8);
      if (iVar15 < iVar8) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b8,uVar9);
        iVar8 = (uint)uStack_b0;
      }
      local_b8[lVar10] = param_2[0x51];
    }
LAB_142d25277:
    plVar5 = local_b8;
    plVar6 = local_b8 + iVar8;
    for (plVar11 = local_b8; plVar11 != plVar6; plVar11 = plVar11 + 1) {
      plVar12 = (longlong *)*plVar11;
      if (plVar12 != (longlong *)0x0) {
        lVar10 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
        if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
            != lVar10 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          (**(code **)(*plVar12 + 0x1048))(plVar12,param_2);
        }
      }
    }
    if (0.0 < fVar17) {
      FUN_142d1a4b0(param_2,&local_b8);
      plVar6 = local_b8;
      lVar10 = (longlong)(int)(uint)uStack_b0;
      bVar4 = 0 < (int)(uint)uStack_b0;
      if (bVar4) {
        plVar11 = *(longlong **)(param_1 + 0x118);
        uVar18 = (**(code **)(*param_2 + 0x38))(param_2,fVar17);
        lStack_a0 = local_res10;
        local_a8 = CONCAT44(local_a8._4_4_,uVar18);
        uVar9 = local_a8;
        uVar14 = (ulonglong)((longlong)(plVar6 + lVar10) + (7 - (longlong)plVar6)) >> 3;
        if (plVar6 + lVar10 < plVar6) {
          uVar14 = uVar16;
        }
        local_98 = local_res18;
        plVar12 = plVar6;
        local_b8 = plVar11;
        uStack_b0 = uVar2;
        if (uVar14 != 0) {
          do {
            if (*plVar12 != 0) {
              local_98 = local_res18;
              lStack_a0 = local_res10;
              local_b8 = plVar11;
              uStack_b0 = uVar2;
              local_a8 = uVar9;
              TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                        (*plVar12 + 0x220,&local_b8);
            }
            uVar16 = uVar16 + 1;
            plVar12 = plVar12 + 1;
          } while (uVar16 != uVar14);
        }
      }
      if (plVar6 != (longlong *)0x0) {
        FMemory::Free(plVar6);
      }
    }
    if ((*(longlong *)(param_1 + 0x818) == 0) || ((*(byte *)(param_1 + 0x7e8) & 2) == 0)) {
      lVar10 = *(longlong *)(param_1 + 0x810);
    }
    else {
      lVar10 = FUN_142d1ab50();
    }
    if (lVar10 != 0) {
      lVar13 = param_2[0x47];
      lVar1 = lVar13 + (longlong)(int)param_2[0x48] * 0x18;
      for (; lVar13 != lVar1; lVar13 = lVar13 + 0x18) {
        FUN_142d33b60(lVar10,param_2,lVar13);
      }
    }
    if (0.0 < fVar17) {
      if (uVar2 == 0) {
        local_c8 = (longlong *)param_2[0x22];
        local_c0 = (int)param_2[0x23];
      }
      else {
        lVar10 = *(longlong *)(uVar2 + 0x168);
        local_c8 = _DAT_1468b5d90;
        local_c0 = DAT_1468b5d98;
        if (lVar10 != 0) {
          local_c8 = *(longlong **)(lVar10 + 0x220);
          local_c0 = *(undefined4 *)(lVar10 + 0x228);
        }
      }
      uVar3 = *(undefined8 *)(param_1 + 0x118);
      local_d0 = (undefined4)param_2[0x23];
      local_d8 = param_2[0x22];
      uStack_b0 = CONCAT44(uStack_b0._4_4_,local_c0);
      lVar10 = *(longlong *)(param_1 + 0x120);
      local_b8 = local_c8;
      if (lVar10 == 0) {
        lVar10 = FUN_1423407b0(param_1);
      }
      FUN_142c262e0(lVar10,uVar3,uVar2,-fVar17,&local_b8,&local_d8);
    }
    FUN_142d22710(param_1,param_2);
    if (plVar5 != (longlong *)0x0) {
      FMemory::Free(plVar5);
    }
  }
  return;
}



// FUNCTION 142d255a0 FUN_142d255a0 body=246 status=ok
// SIG undefined FUN_142d255a0(void)

void FUN_142d255a0(longlong param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  float fVar8;
  
  if (((param_2 != 0) && (*(int *)(param_1 + 0x670) == 0)) &&
     (iVar6 = 0, 0 < *(int *)(param_1 + 0x680))) {
    lVar5 = 0;
    do {
      lVar7 = *(longlong *)(param_1 + 0x678) + 0x60 + (longlong)iVar6 * 0x78;
      cVar3 = FUN_142d52a00(lVar7);
      if (((cVar3 != '\0') && (-1 < iVar6)) && (iVar6 < *(int *)(param_2 + 0x1e8))) {
        lVar2 = *(longlong *)(param_2 + 0x1e0);
        uVar4 = FUN_142d52a20(lVar7);
        uVar4 = FArchive::operator<<(uVar4);
        fVar8 = (float)FUN_142d5fed0(uVar4);
        fVar1 = *(float *)(lVar5 + lVar2);
        uVar4 = FUN_142d52a20(lVar7);
        uVar4 = FArchive::operator<<(uVar4);
        FUN_142d6f560(uVar4,fVar8 + fVar1,0);
      }
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 4;
    } while (iVar6 < *(int *)(param_1 + 0x680));
  }
  return;
}



// FUNCTION 142d256a0 FUN_142d256a0 body=1895 status=ok
// SIG undefined FUN_142d256a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d256a0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined4 *puVar16;
  longlong lVar17;
  uint **ppuVar18;
  int iVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  uint *puVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  uint uStack_230;
  uint uStack_22c;
  undefined8 local_228;
  uint uStack_220;
  int iStack_21c;
  undefined8 local_218;
  undefined4 local_210 [2];
  undefined8 local_208;
  uint local_200;
  uint uStack_1fc;
  uint *puStack_1f8;
  int local_1f0;
  int iStack_1ec;
  uint uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  longlong local_1d8;
  longlong local_1d0;
  code *local_1c8;
  uint uStack_1c0;
  uint uStack_1bc;
  uint *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  longlong local_198;
  undefined8 local_190;
  uint local_188 [4];
  uint *local_178;
  undefined8 local_170;
  undefined4 local_168;
  int local_164;
  longlong local_158;
  undefined4 local_150;
  longlong local_148;
  undefined8 local_140;
  uint local_138 [4];
  uint *local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  longlong local_108;
  undefined4 local_100;
  code *local_f8;
  undefined8 uStack_f0;
  uint *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  uint **local_c8;
  int local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  if ((param_2 != 0) && (local_38 = DAT_1468387a8 ^ (ulonglong)auStack_258, param_3 != 0)) {
    local_148 = 0;
    local_140 = 0;
    local_128 = (uint *)0x0;
    local_120 = 0;
    local_118 = 0xffffffff;
    local_114 = 0;
    local_108 = 0;
    local_100 = 0;
    local_1d8 = param_1;
    local_1d0 = param_3;
    iVar19 = 0;
    if ((*(longlong *)(param_2 + 0x110) != 0) &&
       (iVar19 = 0, *(longlong *)(*(longlong *)(param_2 + 0x110) + 0xf0) != 0)) {
      FUN_14058cbf0(&local_148,local_210);
      iVar19 = (int)local_120;
    }
    if ((*(longlong *)(param_3 + 0x110) != 0) &&
       (plVar14 = (longlong *)(*(longlong *)(param_3 + 0x110) + 0xf0), *plVar14 != 0)) {
      FUN_14058cbf0(&local_148,local_210,plVar14,0);
      iVar19 = (int)local_120;
    }
    lVar11 = local_1d8;
    local_198 = 0;
    puStack_1b8 = local_138;
    local_190 = 0;
    local_178 = (uint *)0x0;
    local_170 = 0;
    local_168 = 0xffffffff;
    local_164 = 0;
    local_158 = 0;
    local_150 = 0;
    local_238._0_4_ = 0;
    local_238._4_4_ = 1;
    local_228._4_4_ = 0;
    uStack_220 = 0;
    if (iVar19 != 0) {
      puVar22 = local_138;
      if (local_128 != (uint *)0x0) {
        puVar22 = local_128;
      }
      uVar12 = *puVar22;
      local_238._0_4_ = 0;
      uStack_220 = 0;
      while (uVar12 == 0) {
        lVar15 = (longlong)(int)(uint)local_238;
        uStack_220 = uStack_220 + 0x20;
        uVar12 = (uint)local_238 + 1;
        bVar4 = (int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)(uint)local_238;
        local_228._4_4_ = iVar19;
        local_238._0_4_ = uVar12;
        if (bVar4) goto LAB_142d25857;
        uVar12 = puVar22[lVar15 + 1];
      }
      local_238._4_4_ = -uVar12 & uVar12;
      iVar9 = 0x1f;
      if (local_238._4_4_ != 0) {
        for (; local_238._4_4_ >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (local_238._4_4_ == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      local_228._4_4_ = (uStack_220 - iVar9) + 0x1f;
      if (iVar19 < local_228._4_4_) {
        local_228._4_4_ = iVar19;
      }
    }
LAB_142d25857:
    uStack_1b0 = CONCAT44(local_228._4_4_,0xffffffff);
    local_218 = CONCAT44(iStack_21c,uStack_220);
    uStack_1c0 = (uint)local_238;
    uStack_1bc = local_238._4_4_;
    local_1c8 = (code *)&local_148;
    local_1f0 = -1 << ((byte)iVar19 & 0x1f);
    uStack_230 = (uint)local_238;
    uStack_22c = local_238._4_4_;
    uStack_220 = 0xffffffff;
    iStack_21c = local_228._4_4_;
    local_238 = local_1c8;
    iStack_1ec = iVar19;
    uStack_1a8 = local_218;
    local_228 = puStack_1b8;
    while (((lVar15 = local_1d0, iStack_21c != iVar19 || (local_228 != local_138)) ||
           (local_238 != (code *)&local_148))) {
      lVar17 = *(longlong *)(lVar11 + 0x2a0);
      lVar1 = *(longlong *)(*(longlong *)local_238 + (longlong)iStack_21c * 0x10);
      lVar15 = lVar17 + (longlong)*(int *)(lVar11 + 0x2a8) * 0x28;
      local_208 = lVar1;
      for (; lVar17 != lVar15; lVar17 = lVar17 + 0x28) {
        lVar2 = *(longlong *)(lVar17 + 0x10);
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xf0) == lVar1)) {
          lVar3 = *(longlong *)(param_2 + 0x110);
          if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0xf0) != lVar1)) {
            if (*(char *)(lVar2 + 0x109) != '\0') {
              puVar16 = &local_1e0;
              goto LAB_142d25942;
            }
          }
          else if (lVar3 == lVar2) {
            puVar16 = local_210;
LAB_142d25942:
            FUN_14058cbf0(&local_198,puVar16,&local_208,0);
          }
        }
      }
      uStack_220 = uStack_220 & ~uStack_22c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_230);
    }
    puVar10 = (undefined8 *)0x0;
    iVar19 = 0;
    local_238 = (code *)0x0;
    uStack_22c = 0;
    puVar23 = puVar10;
    if (0 < (int)local_190 - local_164) {
      iVar9 = (int)local_170;
      puStack_1f8 = local_188;
      local_200 = 0;
      uStack_1fc = 1;
      iStack_1ec = 0;
      uStack_1e8 = 0;
      if ((int)local_170 != 0) {
        puVar22 = local_188;
        if (local_178 != (uint *)0x0) {
          puVar22 = local_178;
        }
        uVar12 = *puVar22;
        puVar13 = puVar10;
        puVar21 = puVar10;
        while (uVar12 == 0) {
          iVar19 = (int)puVar13;
          uStack_1e8 = (int)puVar21 + 0x20;
          puVar21 = (undefined8 *)(ulonglong)uStack_1e8;
          local_200 = iVar19 + 1;
          puVar13 = (undefined8 *)(ulonglong)local_200;
          if ((int)((int)local_170 + -1 + ((int)local_170 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar19) {
            iStack_1ec = (int)local_170;
            goto LAB_142d25a5a;
          }
          uVar12 = puVar22[(longlong)iVar19 + 1];
        }
        uStack_1fc = -uVar12 & uVar12;
        iVar19 = 0x1f;
        if (uStack_1fc != 0) {
          for (; uStack_1fc >> iVar19 == 0; iVar19 = iVar19 + -1) {
          }
        }
        if (uStack_1fc == 0) {
          iVar19 = 0x20;
        }
        else {
          iVar19 = 0x1f - iVar19;
        }
        iStack_1ec = (uStack_1e8 - iVar19) + 0x1f;
        if ((int)local_170 < iStack_1ec) {
          iStack_1ec = (int)local_170;
        }
      }
LAB_142d25a5a:
      uStack_1b0 = CONCAT44(iStack_1ec,0xffffffff);
      uStack_1a8 = CONCAT44(uStack_1e4,uStack_1e8);
      local_1c8 = (code *)&local_198;
      uStack_f0 = CONCAT44(uStack_1fc,local_200);
      local_1f0 = -1 << ((byte)local_170 & 0x1f);
      iStack_1ec = (int)local_170;
      uStack_1c0 = local_200;
      uStack_1bc = uStack_1fc;
      puVar13 = puVar10;
      puStack_1b8 = puStack_1f8;
      local_f8 = local_1c8;
      puStack_e8 = puStack_1f8;
      uStack_e0 = uStack_1b0;
      uStack_d8 = uStack_1a8;
      while( true ) {
        iVar19 = (int)puVar10;
        if (((uStack_1b0._4_4_ == iVar9) && (puStack_1b8 == local_188)) &&
           (local_1c8 == (code *)&local_198)) break;
        lVar11 = *(longlong *)(lVar15 + 0x110);
        if ((lVar11 != 0) &&
           (*(longlong *)(lVar11 + 0xf0) ==
            *(longlong *)(*(longlong *)local_1c8 + (longlong)uStack_1b0._4_4_ * 0x10))) {
          uStack_230 = iVar19 + 1;
          if ((int)puVar13 < (int)uStack_230) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_238,puVar10);
            lVar11 = *(longlong *)(lVar15 + 0x110);
            puVar13 = (undefined8 *)(ulonglong)uStack_22c;
            puVar23 = (undefined8 *)local_238;
          }
          puVar10 = (undefined8 *)(ulonglong)uStack_230;
          puVar23[iVar19] = lVar11;
        }
        uStack_1b0 = CONCAT44(uStack_1b0._4_4_,(uint)uStack_1b0 & ~uStack_1bc);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1c0);
      }
    }
    uVar25 = 0;
    uVar24 = (ulonglong)((longlong)(puVar23 + iVar19) + (7 - (longlong)puVar23)) >> 3;
    if (puVar23 + iVar19 < puVar23) {
      uVar24 = uVar25;
    }
    puVar10 = puVar23;
    if (uVar24 != 0) {
      do {
        uVar20 = *puVar23;
        FWeakObjectPtr::operator=(&local_208,local_1d8);
        FWeakObjectPtr::operator=(&local_1e0,uVar20);
        uVar8 = local_1dc;
        uVar7 = local_1e0;
        uVar5 = (undefined4)local_208;
        uVar6 = local_208._4_4_;
        local_c8 = (uint **)0x0;
        local_b8 = 0;
        puVar10 = (undefined8 *)FUN_140438ef0(0x18,&puStack_e8);
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = &PTR_CopyToEmptyStorage_144266c58;
          *(undefined4 *)(puVar10 + 1) = uVar5;
          *(undefined4 *)((longlong)puVar10 + 0xc) = uVar6;
          *(undefined4 *)(puVar10 + 2) = uVar7;
          *(undefined4 *)((longlong)puVar10 + 0x14) = uVar8;
        }
        local_f8 = (code *)&LAB_142d13b60;
        lVar11 = *(longlong *)(local_1d8 + 0x120);
        if (lVar11 == 0) {
          lVar11 = FUN_1423407b0();
        }
        if (*(longlong *)(lVar11 + 400) == 0) {
          uVar20 = *(undefined8 *)(lVar11 + 0x3f8);
        }
        else {
          uVar20 = *(undefined8 *)(*(longlong *)(lVar11 + 400) + 0x90);
        }
        local_a8 = 0;
        local_a0 = 0;
        FWeakObjectPtr::operator=(local_98,0);
        ppuVar18 = local_c8;
        local_90 = 0;
        local_58 = (longlong *)0x0;
        local_48 = 0;
        if (local_c8 == (uint **)0x0) {
          _guard_xfg_dispatch_icall_nop(local_78,&puStack_e8,0x20);
          if (local_58 != (longlong *)0x0) {
            FMemory::Free();
            ppuVar18 = local_c8;
          }
        }
        iVar19 = local_b8;
        local_58 = (longlong *)ppuVar18;
        local_c8 = (uint **)0x0;
        local_48 = local_b8;
        local_b8 = 0;
        if (iVar19 == 0) {
LAB_142d25cc3:
          local_88 = AK::MemoryMgr::StartProfileThreadUsage;
        }
        else {
          plVar14 = local_78;
          if (ppuVar18 != (uint **)0x0) {
            plVar14 = (longlong *)ppuVar18;
          }
          if (plVar14 == (longlong *)0x0) goto LAB_142d25cc3;
          (**(code **)(*plVar14 + 8))();
          local_88 = local_f8;
        }
        local_f8 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880af0(uVar20,&local_a8);
        if (local_48 != 0) {
          plVar14 = local_78;
          if (local_58 != (longlong *)0x0) {
            plVar14 = local_58;
          }
          if (plVar14 != (longlong *)0x0) {
            (**(code **)(*plVar14 + 0x10))(plVar14,0);
          }
        }
        if (local_58 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
        if (local_b8 != 0) {
          ppuVar18 = &puStack_e8;
          if (local_c8 != (uint **)0x0) {
            ppuVar18 = local_c8;
          }
          if (ppuVar18 != (uint **)0x0) {
            (**(code **)(*ppuVar18 + 4))(ppuVar18,0);
          }
        }
        if (local_c8 != (uint **)0x0) {
          FMemory::Free();
        }
        puVar23 = puVar23 + 1;
        uVar25 = uVar25 + 1;
        puVar10 = (undefined8 *)local_238;
      } while (uVar25 != uVar24);
    }
    if (puVar10 != (undefined8 *)0x0) {
      FMemory::Free(puVar10);
    }
    local_150 = 0;
    if (local_158 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_198);
    local_100 = 0;
    if (local_108 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_148);
  }
  return;
}



// FUNCTION 142d25e10 FUN_142d25e10 body=961 status=ok
// SIG undefined FUN_142d25e10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d25e10(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined1 auStack_128 [32];
  char local_108;
  char local_107;
  uint local_104;
  uint local_100;
  longlong local_f8;
  undefined8 *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong *local_b0;
  undefined8 *local_a8;
  longlong local_a0 [2];
  longlong local_90 [2];
  undefined8 local_80 [8];
  undefined8 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  ulonglong uVar9;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  uVar5 = 0;
  local_104 = 0;
  (**(code **)(*param_1 + 0x260))();
  if (0 < (int)param_1[0x5a]) {
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_140a4d360(param_1[0x23],local_80,0);
    local_100 = 0;
    puVar4 = local_40;
    if (0 < (int)param_1[0x5a]) {
      local_d8 = 0;
      local_f8 = 0;
      uVar6 = uVar5;
      uVar9 = uVar5;
      do {
        uVar8 = (uint)uVar5;
        lVar11 = local_f8;
        if (((-1 < local_d8) && ((int)uVar8 < (int)param_1[0x31])) &&
           (0 < *(int *)(param_1[0x30] + 8 + local_f8))) {
          cVar7 = '\0';
          local_107 = '\0';
          local_108 = '\0';
          puVar14 = local_80;
          if (puVar4 != (undefined8 *)0x0) {
            puVar14 = puVar4;
          }
          local_a8 = puVar14 + (int)local_38;
          local_f0 = puVar14;
          if (puVar14 != local_a8) {
            do {
              plVar12 = (longlong *)*puVar14;
              local_f0 = puVar14;
              cVar2 = (**(code **)(*plVar12 + 0x8e0))
                                (plVar12,**(undefined8 **)(param_1[0x30] + lVar11));
              if (cVar2 != '\0') {
                if ((char)param_1[0x73] == '\0') {
                  uVar8 = (uint)uVar9 | 2;
                  local_104 = uVar8;
                  puVar3 = (ulonglong *)(**(code **)(*plVar12 + 0x8e8))(plVar12,local_a0);
                }
                else {
                  uVar8 = (uint)uVar9 | 1;
                  local_104 = uVar8;
                  puVar3 = (ulonglong *)FUN_142d19aa0(param_1,local_90,plVar12);
                }
                uVar9 = (ulonglong)uVar8;
                plVar12 = (longlong *)*puVar3;
                uVar13 = 0;
                *puVar3 = 0;
                uVar5 = puVar3[1];
                puVar3[1] = 0;
                local_b0 = plVar12;
                if ((uVar8 & 2) != 0) {
                  local_104 = uVar8 & 0xfffffffd;
                  uVar9 = (ulonglong)local_104;
                  if (local_a0[0] != 0) {
                    FMemory::Free();
                  }
                }
                if ((uVar9 & 1) != 0) {
                  local_104 = (uint)uVar9 & 0xfffffffe;
                  uVar9 = (ulonglong)local_104;
                  if (local_90[0] != 0) {
                    FMemory::Free();
                  }
                }
                uVar10 = (longlong)(int)uVar5 & 0x1fffffffffffffff;
                if (plVar12 + (int)uVar5 < plVar12) {
                  uVar10 = uVar13;
                }
                cVar7 = local_108;
                if (uVar10 != 0) {
                  do {
                    plVar1 = (longlong *)*plVar12;
                    if (plVar1 != (longlong *)0x0) {
                      if (local_107 == '\0') {
                        local_d0 = *(undefined8 *)(local_f8 + 0x10 + param_1[0x30]);
                        local_c4 = 0xffffffff;
                        local_c8 = 0x202ffff;
                        cVar2 = (**(code **)(*plVar1 + 0x400))(plVar1,&local_d0,&local_e8,0);
                        if (cVar2 != '\0') {
                          local_107 = '\x01';
                          *(undefined4 *)(uVar6 + 0x1c + param_1[0x59]) = local_e8;
                          *(undefined4 *)(uVar6 + 0x20 + param_1[0x59]) = local_e4;
                          *(undefined4 *)(uVar6 + 0x24 + param_1[0x59]) = local_e0;
                        }
                      }
                      if (cVar7 == '\0') {
                        local_c0 = *(undefined8 *)(local_f8 + 0x18 + param_1[0x30]);
                        local_b4 = 0xffffffff;
                        local_b8 = 0x202ffff;
                        cVar2 = (**(code **)(*plVar1 + 0x400))(plVar1,&local_c0,&local_e8);
                        if (cVar2 != '\0') {
                          lVar11 = param_1[0x59];
                          cVar7 = '\x01';
                          *(undefined4 *)(lVar11 + 0x28 + uVar6) = local_e8;
                          *(undefined4 *)(lVar11 + 0x2c + uVar6) = local_e4;
                          *(undefined4 *)(lVar11 + 0x30 + uVar6) = local_e0;
                        }
                      }
                    }
                    plVar12 = plVar12 + 1;
                    uVar13 = uVar13 + 1;
                  } while (uVar13 != uVar10);
                  uVar9 = (ulonglong)local_104;
                  local_108 = cVar7;
                }
                lVar11 = local_f8;
                puVar14 = local_f0;
                cVar7 = local_108;
                if (local_b0 != (longlong *)0x0) {
                  FMemory::Free();
                  lVar11 = local_f8;
                  puVar14 = local_f0;
                  cVar7 = local_108;
                }
              }
              puVar4 = local_40;
              uVar8 = local_100;
            } while (((local_107 == '\0') || (cVar7 == '\0')) &&
                    (puVar14 = puVar14 + 1, local_f0 = puVar14, puVar14 != local_a8));
          }
        }
        local_100 = uVar8 + 1;
        uVar5 = (ulonglong)local_100;
        local_d8 = local_d8 + 1;
        local_f8 = lVar11 + 0x38;
        uVar6 = uVar6 + 0x34;
      } while ((int)local_100 < (int)param_1[0x5a]);
    }
    if (puVar4 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142d261e0 FUN_142d261e0 body=587 status=ok
// SIG undefined FUN_142d261e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d261e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80 [8];
  undefined8 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  if (param_2 != 0) {
    local_30 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
    lVar9 = *(longlong *)(param_2 + 0xf0);
    if (lVar9 != 0) {
      lVar6 = *(longlong *)(lVar9 + 0x70);
      lVar9 = *(longlong *)(lVar9 + 0x68);
      if (((lVar9 != 0) && (lVar6 != 0)) && (*(int *)(param_1 + 0x2a8) != 0)) {
        local_40 = (undefined8 *)0x0;
        local_38 = 0;
        local_90 = lVar6;
        local_88 = lVar9;
        FUN_140a4d360(*(undefined8 *)(param_1 + 0x118),local_80,0);
        lVar12 = *(longlong *)(param_1 + 0x2a0);
        lVar3 = lVar12 + (longlong)*(int *)(param_1 + 0x2a8) * 0x28;
        puVar4 = local_40;
        local_98 = lVar3;
        if (lVar12 != lVar3) {
          do {
            plVar11 = *(longlong **)(lVar12 + 0x10);
            if (((plVar11 != (longlong *)0x0) && (lVar3 = local_98, plVar11[0x1e] != 0)) &&
               ((plVar11[0x1e] == lVar9 &&
                (cVar2 = (**(code **)(*plVar11 + 0x290))(plVar11,0), lVar3 = local_98,
                puVar4 = local_40, cVar2 != '\0')))) {
              plVar11 = *(longlong **)(*(longlong *)(lVar12 + 0x10) + 0xf8);
              plVar10 = plVar11 + (longlong)*(int *)(*(longlong *)(lVar12 + 0x10) + 0x100) * 8;
              for (; lVar3 = local_98, plVar11 != plVar10; plVar11 = plVar11 + 8) {
                uVar8 = 0;
                if (*plVar11 == lVar6) {
                  puVar5 = local_80;
                  if (puVar4 != (undefined8 *)0x0) {
                    puVar5 = puVar4;
                  }
                  uVar7 = (longlong)(int)local_38 & 0x1fffffffffffffff;
                  if (puVar5 + (int)local_38 < puVar5) {
                    uVar7 = uVar8;
                  }
                  lVar6 = local_90;
                  if (uVar7 != 0) {
                    do {
                      plVar1 = (longlong *)*puVar5;
                      cVar2 = (**(code **)(*plVar1 + 0x8e0))(plVar1);
                      if (cVar2 != '\0') {
                        (**(code **)(**(longlong **)(lVar12 + 0x10) + 0x298))
                                  (*(longlong **)(lVar12 + 0x10),plVar11,plVar1,param_1);
                      }
                      puVar5 = puVar5 + 1;
                      uVar8 = uVar8 + 1;
                      puVar4 = local_40;
                      lVar6 = local_90;
                    } while (uVar8 != uVar7);
                  }
                }
                lVar9 = local_88;
              }
            }
            lVar12 = lVar12 + 0x28;
          } while (lVar12 != lVar3);
        }
        if (puVar4 != (undefined8 *)0x0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 142d26430 FUN_142d26430 body=8 status=ok
// SIG undefined FUN_142d26430(void)

void FUN_142d26430(undefined8 param_1,undefined8 param_2)

{
  FUN_142d26450(param_1,param_2,0);
  return;
}



// FUNCTION 142d26440 thunk_FUN_142d0eb50 body=5 status=ok
// SIG undefined thunk_FUN_142d0eb50(void)

void thunk_FUN_142d0eb50(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if (param_2 != 0) {
    lVar4 = FUN_142e05930();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      plVar6 = (longlong *)(param_1 + 0x198);
      plVar1 = (longlong *)*plVar6;
      lVar4 = (longlong)*(int *)(param_1 + 0x1a0);
      for (plVar5 = plVar1; plVar5 != plVar1 + lVar4; plVar5 = plVar5 + 1) {
        if (*plVar5 == param_2) {
          if ((int)((longlong)plVar5 - (longlong)plVar1 >> 3) != -1) {
            return;
          }
          break;
        }
      }
      iVar3 = *(int *)(param_1 + 0x1a0) + 1;
      *(int *)(param_1 + 0x1a0) = iVar3;
      if (*(int *)(param_1 + 0x1a4) < iVar3) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6);
      }
    }
    else {
      lVar4 = FUN_142e02630();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        plVar6 = (longlong *)(param_1 + 0x1a8);
        plVar1 = (longlong *)*plVar6;
        lVar4 = (longlong)*(int *)(param_1 + 0x1b0);
        for (plVar5 = plVar1; plVar5 != plVar1 + lVar4; plVar5 = plVar5 + 1) {
          if (*plVar5 == param_2) {
            if ((int)((longlong)plVar5 - (longlong)plVar1 >> 3) != -1) {
              return;
            }
            break;
          }
        }
        iVar3 = *(int *)(param_1 + 0x1b0) + 1;
        *(int *)(param_1 + 0x1b0) = iVar3;
        if (*(int *)(param_1 + 0x1b4) < iVar3) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6);
        }
      }
      else {
        lVar4 = FUN_142e06650();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          plVar6 = (longlong *)(param_1 + 0x178);
          plVar1 = (longlong *)*plVar6;
          lVar4 = (longlong)*(int *)(param_1 + 0x180);
          for (plVar5 = plVar1; plVar5 != plVar1 + lVar4; plVar5 = plVar5 + 1) {
            if (*plVar5 == param_2) {
              if ((int)((longlong)plVar5 - (longlong)plVar1 >> 3) != -1) {
                return;
              }
              break;
            }
          }
          iVar3 = *(int *)(param_1 + 0x180) + 1;
          *(int *)(param_1 + 0x180) = iVar3;
          if (*(int *)(param_1 + 0x184) < iVar3) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6);
          }
        }
        else {
          lVar4 = FUN_142e02530();
          if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) {
            return;
          }
          plVar6 = (longlong *)(param_1 + 0x188);
          plVar1 = (longlong *)*plVar6;
          lVar4 = (longlong)*(int *)(param_1 + 400);
          for (plVar5 = plVar1; plVar5 != plVar1 + lVar4; plVar5 = plVar5 + 1) {
            if (*plVar5 == param_2) {
              if ((int)((longlong)plVar5 - (longlong)plVar1 >> 3) != -1) {
                return;
              }
              break;
            }
          }
          iVar3 = *(int *)(param_1 + 400) + 1;
          *(int *)(param_1 + 400) = iVar3;
          if (*(int *)(param_1 + 0x194) < iVar3) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6);
          }
        }
      }
    }
    *(longlong *)(*plVar6 + lVar4 * 8) = param_2;
  }
  return;
}



// FUNCTION 142d26450 FUN_142d26450 body=671 status=ok
// SIG undefined FUN_142d26450(void)

void FUN_142d26450(longlong param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if (param_2 != 0) {
    lVar3 = FUN_142e05930();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      plVar6 = (longlong *)(param_1 + 0x1a8);
      plVar5 = (longlong *)*plVar6;
      iVar2 = *(int *)(param_1 + 0x1b0);
      lVar3 = (longlong)iVar2;
      for (plVar4 = plVar5; plVar4 != plVar5 + lVar3; plVar4 = plVar4 + 1) {
        if (*plVar4 == param_2) {
          if ((int)((longlong)plVar4 - (longlong)plVar5 >> 3) != -1) {
            return;
          }
          break;
        }
      }
      *(int *)(param_1 + 0x1b0) = iVar2 + 1;
      if (*(int *)(param_1 + 0x1b4) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar2);
        *(longlong *)(*plVar6 + lVar3 * 8) = param_2;
        return;
      }
    }
    else {
      lVar3 = FUN_142e02630();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        lVar3 = FUN_142e06650();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          plVar6 = (longlong *)(param_1 + 0x188);
          lVar3 = (longlong)*(int *)(param_1 + 400);
          plVar5 = (longlong *)*plVar6;
          plVar4 = plVar5 + lVar3 * 2;
          for (; plVar5 != plVar4; plVar5 = plVar5 + 2) {
            if (*plVar5 == param_2) {
              return;
            }
          }
          iVar2 = *(int *)(param_1 + 400) + 1;
          *(int *)(param_1 + 400) = iVar2;
          if (*(int *)(param_1 + 0x194) < iVar2) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6);
          }
        }
        else {
          lVar3 = FUN_142e02530();
          if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) {
            return;
          }
          plVar6 = (longlong *)(param_1 + 0x198);
          lVar3 = (longlong)*(int *)(param_1 + 0x1a0);
          plVar5 = (longlong *)*plVar6;
          plVar4 = plVar5 + lVar3 * 2;
          for (; plVar5 != plVar4; plVar5 = plVar5 + 2) {
            if (*plVar5 == param_2) {
              return;
            }
          }
          iVar2 = *(int *)(param_1 + 0x1a0) + 1;
          *(int *)(param_1 + 0x1a0) = iVar2;
          if (*(int *)(param_1 + 0x1a4) < iVar2) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6);
          }
        }
        plVar5 = (longlong *)(*plVar6 + lVar3 * 0x10);
        *plVar5 = param_2;
        plVar5[1] = param_3;
        return;
      }
      plVar6 = (longlong *)(param_1 + 0x1b8);
      plVar5 = (longlong *)*plVar6;
      iVar2 = *(int *)(param_1 + 0x1c0);
      lVar3 = (longlong)iVar2;
      for (plVar4 = plVar5; plVar4 != plVar5 + lVar3; plVar4 = plVar4 + 1) {
        if (*plVar4 == param_2) {
          if ((int)((longlong)plVar4 - (longlong)plVar5 >> 3) != -1) {
            return;
          }
          break;
        }
      }
      *(int *)(param_1 + 0x1c0) = iVar2 + 1;
      if (*(int *)(param_1 + 0x1c4) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar2);
      }
    }
    *(longlong *)(*plVar6 + lVar3 * 8) = param_2;
  }
  return;
}



// FUNCTION 142d266f0 FUN_142d266f0 body=10 status=ok
// SIG undefined FUN_142d266f0(void)

void FUN_142d266f0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*param_1 + 8))();
  iVar1 = DAT_146b32128;
  lVar2 = (longlong)DAT_146b32128;
  DAT_146b32128 = DAT_146b32128 + 1;
  if (DAT_146b3212c < DAT_146b32128) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146b32120,iVar1);
  }
  *(longlong **)(DAT_146b32120 + lVar2 * 8) = param_1;
  return;
}



// FUNCTION 142d26700 FUN_142d26700 body=271 status=ok
// SIG undefined FUN_142d26700(void)

void FUN_142d26700(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  iVar2 = FUN_14233f450();
  if (iVar2 == 3) {
    lVar3 = param_1[0x54];
    lVar1 = lVar3 + (longlong)(int)param_1[0x55] * 0x28;
    for (; lVar3 != lVar1; lVar3 = lVar3 + 0x28) {
      if (*(longlong *)(lVar3 + 0x10) != 0) {
        FUN_142d26ae0(param_1);
      }
    }
    (**(code **)(*param_1 + 0x260))(param_1);
    *(undefined4 *)(param_1 + 0x55) = 0;
    if (*(int *)((longlong)param_1 + 0x2ac) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 0x54,0);
    }
    plVar4 = (longlong *)param_1[0x56];
    for (iVar2 = (int)param_1[0x57]; iVar2 != 0; iVar2 = iVar2 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 3;
    }
    *(undefined4 *)(param_1 + 0x57) = 0;
    if (*(int *)((longlong)param_1 + 700) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 0x56,0);
    }
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
              (param_1 + 0x3e);
    *(int *)((longlong)param_1 + 0x244) = *(int *)((longlong)param_1 + 0x244) + 1;
    if (*(int *)((longlong)param_1 + 0x244) == -1) {
      *(undefined4 *)((longlong)param_1 + 0x244) = 0;
    }
    param_1[0x53] = -1;
  }
  return;
}



// FUNCTION 142d26810 FUN_142d26810 body=272 status=ok
// SIG undefined FUN_142d26810(void)

void FUN_142d26810(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_3 != 0) {
    plVar7 = (longlong *)(*param_1 + 0x28 + (longlong)param_2 * 0x40);
    iVar6 = param_3;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar7 + 1);
      plVar3 = (longlong *)*plVar7;
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
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      if (plVar7[-3] != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 8;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar5 = (iVar6 - param_2) - param_3;
    if (iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x40),
                 (void *)((longlong)(param_2 + param_3) * 0x40 + *param_1),(longlong)iVar5 << 6);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - param_3;
    if (param_4 != '\0') {
      TArray<FPartyReservation,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 142d26920 FUN_142d26920 body=228 status=ok
// SIG undefined FUN_142d26920(void)

void FUN_142d26920(longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + 0x238 + (longlong)param_2 * 0x270);
    iVar3 = param_3;
    do {
      FUN_140591060(plVar2 + 4);
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      FUN_1409c53c0(plVar2 + -0x43);
      plVar2 = plVar2 + 0x4e;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x270),
                 (void *)((longlong)(param_2 + param_3) * 0x270 + *param_1),(longlong)iVar1 * 0x270)
      ;
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      FUN_140fd5890(param_1);
    }
  }
  return;
}


