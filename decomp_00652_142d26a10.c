// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142d26a10 FUN_142d26a10 body=207 status=ok
// SIG undefined FUN_142d26a10(void)

void FUN_142d26a10(longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + 0xe8 + (longlong)param_2 * 400);
    iVar3 = param_3;
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x32;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 400),
                 (void *)((longlong)(param_2 + param_3) * 400 + *param_1),(longlong)iVar1 * 400);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      FUN_142d27b20(param_1);
    }
  }
  return;
}



// FUNCTION 142d26ae0 FUN_142d26ae0 body=387 status=ok
// SIG undefined FUN_142d26ae0(void)

undefined1 FUN_142d26ae0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong *local_res8;
  
  uVar2 = 0;
  if ((param_1[0x23] != 0) && (param_2 != (longlong *)0x0)) {
    uVar2 = (**(code **)(*param_2 + 0x288))(param_2);
  }
  if (0 < (int)param_1[0x67]) {
    local_res8 = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x66,&local_res8);
  }
  if (((*(byte *)(param_1 + 0x17) & 8) == 0) || (iVar3 = FUN_14233f450(param_1), iVar3 == 3)) {
    (**(code **)(*param_1 + 0x260))(param_1);
    lVar1 = param_1[0x54];
    iVar3 = (int)param_1[0x55];
    for (lVar5 = lVar1; lVar5 != lVar1 + (longlong)iVar3 * 0x28; lVar5 = lVar5 + 0x28) {
      if (*(longlong **)(lVar5 + 0x10) == param_2) {
        iVar6 = (int)((lVar5 - lVar1) / 0x28);
        if (iVar6 == -1) {
          return uVar2;
        }
        iVar4 = (iVar3 - iVar6) + -1;
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar1 + (longlong)iVar6 * 0x28),
                     (void *)(lVar1 + (longlong)(iVar6 + 1) * 0x28),(longlong)iVar4 * 0x28);
          iVar3 = (int)param_1[0x55];
        }
        *(int *)(param_1 + 0x55) = iVar3 + -1;
        TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(param_1 + 0x54);
        FUN_142d2b1e0(param_1 + 0x3e,param_2);
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
                  (param_1 + 0x3e);
        *(int *)((longlong)param_1 + 0x244) = *(int *)((longlong)param_1 + 0x244) + 1;
        if (*(int *)((longlong)param_1 + 0x244) == -1) {
          *(undefined4 *)((longlong)param_1 + 0x244) = 0;
        }
        param_1[0x53] = -1;
        return uVar2;
      }
    }
  }
  return uVar2;
}



// FUNCTION 142d26c70 FUN_142d26c70 body=399 status=ok
// SIG undefined FUN_142d26c70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte FUN_142d26c70(longlong *param_1,longlong *param_2)

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
              bVar3 = (**(code **)(*param_1 + 0x2a0))(param_1,puVar9,plVar1,uVar4);
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



// FUNCTION 142d26e00 FUN_142d26e00 body=806 status=ok
// SIG undefined FUN_142d26e00(void)

ulonglong FUN_142d26e00(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  bool bVar2;
  ulonglong in_RAX;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  longlong *plVar11;
  
  if (param_3 == (longlong *)0x0) {
    return in_RAX & 0xffffffffffffff00;
  }
  lVar3 = FUN_142e5c1e0();
  if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  lVar3 = *(longlong *)(param_2 + 0x18);
  plVar11 = param_3;
  if (!bVar2) {
    plVar11 = (longlong *)0x0;
  }
  lVar4 = (longlong)*(int *)(param_2 + 0x20) * 0x20 + lVar3;
  uVar10 = 0;
  do {
    if (lVar3 == lVar4) {
      return uVar10;
    }
    lVar5 = FUN_141796df0(lVar3 + 8);
    if (lVar5 != 0) {
      lVar6 = USkeleton::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        if (plVar11 != (longlong *)0x0) {
          plVar1 = (longlong *)plVar11[2];
          lVar5 = plVar1[0x1f];
          if (lVar5 == 0) {
            (**(code **)(*plVar1 + 0x368))(plVar1);
            lVar5 = plVar1[0x1f];
            if (lVar5 != 0) goto LAB_142d26f24;
LAB_142d26f34:
            lVar5 = plVar11[3];
            if (plVar11[0x23] != 0) {
              plVar1 = *(longlong **)(plVar11[0x23] + 0x10);
              lVar6 = plVar1[0x1f];
              if (lVar6 == 0) {
                (**(code **)(*plVar1 + 0x368))(plVar1);
                lVar6 = plVar1[0x1f];
                if (lVar6 == 0) goto LAB_142d270ed;
              }
              lVar5 = UObject::GetDefaultSubobjectByName(lVar6,lVar5);
              if (lVar5 != 0) {
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
                if ((bVar2) && (lVar5 = *(longlong *)(lVar5 + 0x718), lVar5 != 0))
                goto LAB_142d26fce;
              }
            }
          }
          else {
LAB_142d26f24:
            lVar5 = *(longlong *)(lVar5 + 0x718);
            if (lVar5 == 0) goto LAB_142d26f34;
LAB_142d26fce:
            (**(code **)(*plVar11 + 0x930))(plVar11,lVar5,0);
            uVar10 = 1;
          }
        }
      }
      else {
        lVar6 = UMaterialInterface::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && (iVar9 = (int)param_3[0xdf] + -1, -1 < iVar9)) {
          lVar6 = (longlong)iVar9 * 8;
          do {
            lVar8 = *(longlong *)(lVar6 + param_3[0xde]);
            if (lVar8 != 0) {
              lVar7 = FUN_1429b6de0();
              if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (!bVar2) {
                lVar8 = 0;
              }
              if ((*(longlong *)(lVar6 + param_3[0xde]) == lVar5) ||
                 ((lVar8 != 0 && (*(longlong *)(lVar8 + 0x90) == lVar5)))) {
                (**(code **)(*param_3 + 0x568))(param_3,iVar9,0);
                FUN_142d28ae0(param_4,param_3,iVar9,0);
                uVar10 = 1;
              }
            }
            lVar6 = lVar6 + -8;
            iVar9 = iVar9 + -1;
          } while (-1 < iVar9);
        }
      }
    }
LAB_142d270ed:
    lVar3 = lVar3 + 0x20;
  } while( true );
}



// FUNCTION 142d27130 FUN_142d27130 body=188 status=ok
// SIG undefined FUN_142d27130(void)

void FUN_142d27130(longlong *param_1,int param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  if (((*(byte *)(param_1 + 0x17) & 8) != 0) && (iVar4 = FUN_14233f450(), iVar4 != 3)) {
    return;
  }
  if ((-1 < param_2) && (param_2 < (int)param_1[0x5a])) {
    (**(code **)(*param_1 + 0x260))(param_1);
    uVar1 = *param_3;
    lVar5 = (longlong)param_2 * 0x34;
    *(undefined1 *)(lVar5 + param_1[0x59]) = param_5;
    lVar3 = param_1[0x59];
    uVar2 = *(undefined4 *)(param_3 + 1);
    *(undefined8 *)(lVar3 + 4 + lVar5) = uVar1;
    uVar1 = *param_4;
    *(undefined4 *)(lVar3 + 0xc + lVar5) = uVar2;
    *(undefined1 *)(lVar5 + 1 + param_1[0x59]) = param_6;
    lVar3 = param_1[0x59];
    uVar2 = *(undefined4 *)(param_4 + 1);
    *(undefined8 *)(lVar3 + 0x10 + lVar5) = uVar1;
    *(undefined4 *)(lVar3 + 0x18 + lVar5) = uVar2;
    FUN_142d2baa0(param_1);
  }
  return;
}



// FUNCTION 142d271f0 FUN_142d271f0 body=609 status=ok
// SIG undefined FUN_142d271f0(void)

void FUN_142d271f0(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((((param_2 != 0) &&
       ((cVar3 = (**(code **)(*param_1 + 0x418))(), cVar3 != '\0' ||
        (param_2 = (**(code **)(*param_1 + 0x420))(param_1,param_2), param_2 != 0)))) &&
      (((*(byte *)(param_1 + 0x17) & 8) == 0 || (iVar4 = FUN_14233f450(param_1), iVar4 == 3)))) &&
     ((param_1[0x24] != 0 || (lVar5 = FUN_1423407b0(param_1), lVar5 != 0)))) {
    lVar5 = param_1[0x24];
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0(param_1);
    }
    lVar5 = UWorld::GetGameState<APVPGameState>(lVar5);
    if ((lVar5 != 0) && (lVar6 = FUN_142d818e0(lVar5), lVar6 != 0)) {
      if ((param_2 != 0) &&
         (((*(longlong *)(param_2 + 0xf0) != 0 &&
           (*(char *)(*(longlong *)(param_2 + 0xf0) + 0x60) != '\0')) &&
          (iVar4 = (int)param_1[0x55] + -1, lVar6 = (longlong)iVar4, -1 < iVar4)))) {
        lVar8 = lVar6 * 0x28;
        do {
          lVar9 = *(longlong *)(param_1[0x54] + 0x10 + lVar8);
          if ((lVar9 != 0) && (*(longlong *)(lVar9 + 0xf0) == *(longlong *)(param_2 + 0xf0))) {
            if (lVar9 == param_2) {
              return;
            }
            FUN_142d256a0(param_1,lVar9,param_2);
            FUN_142d26ae0(param_1,lVar9);
          }
          lVar8 = lVar8 + -0x28;
          lVar6 = lVar6 + -1;
        } while (-1 < lVar6);
      }
      if (((*(byte *)(param_1 + 0x17) & 8) == 0) || (iVar4 = FUN_14233f450(param_1), iVar4 == 3)) {
        (**(code **)(*param_1 + 0x260))(param_1);
        bVar2 = false;
        plVar1 = param_1 + 0x54;
        lVar9 = *plVar1;
        lVar8 = (longlong)(int)param_1[0x55] * 0x28;
        lVar6 = lVar9 + lVar8;
        for (; lVar9 != lVar6; lVar9 = lVar9 + 0x28) {
          if (*(longlong *)(lVar9 + 0x10) == param_2) goto LAB_142d273e3;
        }
        iVar4 = (int)param_1[0x55] + 1;
        *(int *)(param_1 + 0x55) = iVar4;
        if (*(int *)((longlong)param_1 + 0x2ac) < iVar4) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar1);
        }
        lVar6 = *plVar1;
        bVar2 = true;
        *(undefined8 *)(lVar8 + lVar6) = 0xffffffffffffffff;
        *(undefined4 *)(lVar8 + 8 + lVar6) = 0xffffffff;
        *(longlong *)(lVar8 + 0x10 + lVar6) = param_2;
        *(undefined4 *)(lVar8 + 0x18 + lVar6) = param_3;
        *(undefined8 *)(lVar8 + 0x20 + lVar6) = 0;
LAB_142d273e3:
        FUN_142d134a0(param_1 + 0x3e,param_2);
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
                  (param_1 + 0x3e);
        *(int *)((longlong)param_1 + 0x244) = *(int *)((longlong)param_1 + 0x244) + 1;
        if (*(int *)((longlong)param_1 + 0x244) == -1) {
          *(undefined4 *)((longlong)param_1 + 0x244) = 0;
        }
        param_1[0x53] = -1;
        if (bVar2) {
          uVar7 = FUN_142d818e0(lVar5);
          FUN_142d10700(uVar7,param_1,param_2,param_3);
        }
      }
    }
  }
  return;
}



// FUNCTION 142d27460 FUN_142d27460 body=284 status=ok
// SIG undefined FUN_142d27460(void)

void FUN_142d27460(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  
  if ((param_2 != (longlong *)0x0) &&
     (cVar3 = (**(code **)(*param_2 + 0x8e0))(param_2,0), cVar3 != '\0')) {
    lVar7 = *(longlong *)(param_1 + 0x2a0);
    bVar8 = 0;
    lVar1 = lVar7 + (longlong)*(int *)(param_1 + 0x2a8) * 0x28;
    if (lVar7 != lVar1) {
      do {
        plVar2 = *(longlong **)(lVar7 + 0x10);
        if ((plVar2 != (longlong *)0x0) &&
           (cVar3 = (**(code **)(*plVar2 + 0x290))(plVar2,0), cVar3 != '\0')) {
          lVar5 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + 0xf8);
          lVar6 = (longlong)*(int *)(*(longlong *)(lVar7 + 0x10) + 0x100) * 0x40 + lVar5;
          for (; lVar5 != lVar6; lVar5 = lVar5 + 0x40) {
            cVar3 = (**(code **)(*param_2 + 0x8e0))(param_2);
            if (cVar3 != '\0') {
              bVar4 = (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x298))
                                (*(longlong **)(lVar7 + 0x10),lVar5,param_2,param_1);
              bVar8 = bVar8 | bVar4;
            }
          }
        }
        lVar7 = lVar7 + 0x28;
      } while (lVar7 != lVar1);
      if (bVar8 != 0) {
        FUN_142d25e10(param_1);
        FUN_142d10430(param_1);
        FUN_142d12220(param_1);
      }
    }
  }
  return;
}



// FUNCTION 142d27580 FUN_142d27580 body=961 status=ok
// SIG undefined FUN_142d27580(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d27580(longlong param_1)

{
  undefined1 auStack_398 [32];
  undefined8 local_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined **local_368;
  undefined1 local_358 [432];
  undefined1 local_1a8 [8];
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_188;
  undefined8 local_180;
  undefined1 local_150;
  undefined8 local_14c;
  undefined2 local_144;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88 [2];
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined2 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_398;
  local_368 = &PTR_FUN_1458747c0;
  FUN_142d0ab00(local_358);
  local_1a0 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_198 = 0;
  local_188 = 0;
  local_180 = 0;
  local_150 = 0;
  local_14c = 0;
  local_144 = 0;
  local_140 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  FUN_142d1e4a0(local_1a8);
  local_378 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_370 = 0xffffffff;
  uStack_90 = 0xffffffff;
  uStack_8c = uStack_36c;
  local_88[0] = 0;
  local_88[1] = 0;
  local_98 = 0;
  local_28 = 0x3f800000;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_100 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_78 = 0;
  local_48 = 0;
  local_40 = 1;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  FUN_140a7db00(param_1 + 0x10,local_358);
  FUN_140a7dd90(param_1 + 0x1c0,local_1a8);
  *(undefined8 *)(param_1 + 0x268) = local_100;
  *(undefined8 *)(param_1 + 0x270) = local_f8;
  *(undefined8 *)(param_1 + 0x278) = uStack_f0;
  *(undefined8 *)(param_1 + 0x280) = local_e8;
  *(undefined8 *)(param_1 + 0x288) = uStack_e0;
  *(undefined8 *)(param_1 + 0x290) = local_d8;
  *(undefined8 *)(param_1 + 0x298) = uStack_d0;
  *(undefined8 *)(param_1 + 0x2a0) = local_c8;
  *(undefined8 *)(param_1 + 0x2a8) = uStack_c0;
  *(undefined8 *)(param_1 + 0x2b0) = local_b8;
  *(undefined8 *)(param_1 + 0x2b8) = uStack_b0;
  *(undefined8 *)(param_1 + 0x2c0) = local_a8;
  *(undefined8 *)(param_1 + 0x2c8) = uStack_a0;
  *(undefined4 *)(param_1 + 0x2d0) = (undefined4)local_98;
  *(undefined4 *)(param_1 + 0x2d4) = local_98._4_4_;
  *(undefined4 *)(param_1 + 0x2d8) = uStack_90;
  *(undefined4 *)(param_1 + 0x2dc) = uStack_8c;
  FUN_1408e22e0(param_1 + 0x2e0,local_88);
  *(undefined1 *)(param_1 + 0x2f0) = local_78;
  FUN_142d0c670(param_1 + 0x2f8,&local_70);
  *(undefined8 *)(param_1 + 800) = local_48;
  *(undefined4 *)(param_1 + 0x328) = (undefined4)local_40;
  *(undefined4 *)(param_1 + 0x32c) = local_40._4_4_;
  *(undefined1 *)(param_1 + 0x330) = (undefined1)local_38;
  *(undefined1 *)(param_1 + 0x331) = local_38._1_1_;
  *(undefined1 *)(param_1 + 0x332) = local_38._2_1_;
  *(undefined1 *)(param_1 + 0x333) = local_38._3_1_;
  *(undefined1 *)(param_1 + 0x334) = (undefined1)local_34;
  *(undefined1 *)(param_1 + 0x335) = local_34._1_1_;
  *(undefined4 *)(param_1 + 0x338) = local_30;
  *(undefined1 *)(param_1 + 0x33c) = local_2c;
  *(undefined1 *)(param_1 + 0x344) = (undefined1)local_24;
  *(undefined1 *)(param_1 + 0x345) = local_24._1_1_;
  *(undefined4 *)(param_1 + 0x340) = local_28;
  local_368 = &PTR_FUN_1458747c0;
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  FUN_142d0c360(local_1a8);
  FUN_140a7c7a0(local_358);
  return;
}



// FUNCTION 142d27950 FUN_142d27950 body=151 status=ok
// SIG undefined FUN_142d27950(void)

void FUN_142d27950(longlong *param_1)

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
  uVar4 = FMemory::QuantizeSize(lVar3 * 0x2e0,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0x642c8590b21642c9) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 9);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0x2e0,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 142d279f0 FUN_142d279f0 body=303 status=ok
// SIG undefined FUN_142d279f0(void)

void FUN_142d279f0(void *param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x8c8);
  if (uVar1 < 0xb) {
    uVar6 = 10;
  }
  else {
    lVar7 = 4;
    if ((*(int *)((longlong)param_1 + 0x8cc) != 0) || (4 < uVar1)) {
      lVar7 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar7 * 0xe0,0);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    lVar7 = SUB168(ZEXT816(0x2492492492492493) * auVar2,8);
    uVar6 = (uint)((uVar3 - lVar7 >> 1) + lVar7 >> 7);
    if ((int)uVar6 < (int)uVar1) {
      uVar6 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x8cc) = uVar6;
  pvVar4 = *(void **)((longlong)param_1 + 0x8c0);
  if (uVar6 < 0xb) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 * 0xe0);
    pvVar4 = *(void **)((longlong)param_1 + 0x8c0);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar7 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar6 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar6 * 0xe0,0);
        *(void **)((longlong)param_1 + 0x8c0) = pvVar4;
      }
      _guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 * 0xe0);
      return;
    }
    lVar7 = (longlong)(int)uVar6 * 0xe0;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar7,0);
  *(undefined8 *)((longlong)param_1 + 0x8c0) = uVar5;
  return;
}



// FUNCTION 142d27b20 FUN_142d27b20 body=171 status=ok
// SIG undefined FUN_142d27b20(void)

ulonglong FUN_142d27b20(ulonglong *param_1)

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
  if ((0x3fff < uVar2 * 400) || (uVar2 = (ulonglong)(uint)(iVar6 * 2), iVar5 * 3 < iVar6 * 2)) {
    if (0x40 < (uint)(iVar6 - iVar5)) {
      if (0 < iVar5) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar5 * 400,0);
        iVar6 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        lVar4 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar1,8);
        uVar2 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar1,0);
        iVar5 = (int)((uVar3 - lVar4 >> 1) + lVar4 >> 8);
      }
      goto LAB_142d27b9a;
    }
    if (iVar5 == 0) goto LAB_142d27b9a;
  }
  iVar5 = iVar6;
LAB_142d27b9a:
  if (iVar5 != iVar6) {
    *(int *)((longlong)param_1 + 0xc) = iVar5;
    if ((*param_1 != 0) || (iVar5 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar5 * 400,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 142d27bd0 ResizeTo body=130 status=ok
// SIG undefined ResizeTo(void)

void TArray<Chaos::FJointSolverGaussSeidel,TSizedDefaultAllocator<32>_>::ResizeTo
               (longlong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0x2e0,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x642c8590b21642c9) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 9);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if (iVar4 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x2e0,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 142d27c60 FUN_142d27c60 body=80 status=ok
// SIG undefined FUN_142d27c60(void)

undefined8 * FUN_142d27c60(longlong param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  cVar1 = FWeakObjectPtr::IsValid(param_3 + 0x14);
  if (cVar1 == '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0xa0);
  }
  else {
    lVar2 = FWeakObjectPtr::Get(param_3 + 0x14);
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
  }
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 142d27cb0 FUN_142d27cb0 body=80 status=ok
// SIG undefined FUN_142d27cb0(void)

undefined8 * FUN_142d27cb0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  cVar1 = FWeakObjectPtr::IsValid(param_3 + 0x1c);
  if (cVar1 == '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0xa8);
  }
  else {
    lVar2 = FWeakObjectPtr::Get(param_3 + 0x1c);
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
  }
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 142d27d00 FUN_142d27d00 body=96 status=ok
// SIG undefined FUN_142d27d00(void)

float FUN_142d27d00(longlong param_1,longlong param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  
  if (*(char *)(param_2 + 0x10c) != '\0') {
    return *(float *)(param_2 + 0x108);
  }
  fVar1 = (float)FUN_142c98860(param_1 + 0x28,param_3);
  fVar2 = (float)FUN_142c98860(param_1 + 0x60,param_3);
  return fVar2 * fVar1;
}



// FUNCTION 142d27d60 FUN_142d27d60 body=634 status=ok
// SIG undefined FUN_142d27d60(void)

undefined8 *
FUN_142d27d60(longlong param_1,undefined8 *param_2,longlong param_3,longlong *param_4,
             undefined8 *param_5,longlong param_6,longlong param_7)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  undefined8 local_58;
  float local_50;
  
  plVar2 = *(longlong **)(param_1 + 0x98);
  uVar1 = *(undefined4 *)(param_5 + 1);
  *param_2 = *param_5;
  *(undefined4 *)(param_2 + 1) = uVar1;
  if (plVar2 == (longlong *)0x0) {
    if (*(char *)(param_3 + 0xfc) != '\0') {
      uVar1 = *(undefined4 *)(param_3 + 0xf8);
      *param_2 = *(undefined8 *)(param_3 + 0xf0);
      *(undefined4 *)(param_2 + 1) = uVar1;
      return param_2;
    }
  }
  else {
    cVar4 = (**(code **)(*plVar2 + 0x288))();
    if (cVar4 == '\0') {
      return param_2;
    }
  }
  if (param_7 == 0) {
    local_50 = DAT_1468b5d98;
    fVar9 = DAT_1468b5d94;
    fVar8 = DAT_1468b5d90;
    if (*param_4 != 0) {
      lVar3 = *(longlong *)(*param_4 + 0x168);
      if (lVar3 == 0) {
        local_58 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      }
      else {
        local_58 = *(ulonglong *)(lVar3 + 0x220);
        local_50 = *(float *)(lVar3 + 0x228);
      }
      fVar9 = (float)(local_58 >> 0x20);
      goto LAB_142d27e73;
    }
  }
  else {
    local_50 = *(float *)(param_7 + 0x1c);
    fVar9 = (float)(*(ulonglong *)(param_7 + 0x14) >> 0x20);
    local_58 = *(ulonglong *)(param_7 + 0x14) & 0xffffffff;
LAB_142d27e73:
    fVar8 = (float)local_58;
  }
  if (((fVar8 == 0.0) && (fVar9 == 0.0)) && (local_50 == 0.0)) {
    return param_2;
  }
  if (((*(float *)(param_6 + 0x114) == 0.0) && (*(float *)(param_6 + 0x118) == 0.0)) &&
     (*(float *)(param_6 + 0x11c) == 0.0)) {
    return param_2;
  }
  fVar8 = *(float *)(param_6 + 0x114) - fVar8;
  fVar9 = *(float *)(param_6 + 0x118) - fVar9;
  local_50 = *(float *)(param_6 + 0x11c) - local_50;
  fVar5 = fVar9 * fVar9 + fVar8 * fVar8 + local_50 * local_50;
  if (fVar5 != 1.0) {
    if (fVar5 < 1e-08) {
      local_58 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      local_50 = DAT_1468b5d98;
      goto LAB_142d27fa0;
    }
    auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    fVar6 = auVar7._0_4_;
    fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
    fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
    fVar8 = fVar8 * fVar6;
    fVar9 = fVar9 * fVar6;
    local_50 = local_50 * fVar6;
  }
  local_58 = CONCAT44(fVar9,fVar8);
LAB_142d27fa0:
  *param_2 = local_58;
  *(float *)(param_2 + 1) = local_50;
  return param_2;
}



// FUNCTION 142d27fe0 FUN_142d27fe0 body=33 status=ok
// SIG undefined FUN_142d27fe0(void)

ulonglong FUN_142d27fe0(longlong param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  
  if (*(char *)(param_2 + 0x17c) != '\0') {
    return (ulonglong)*(uint *)(param_2 + 0x178);
  }
  uVar1 = FUN_142d9cad0(param_1 + 200,param_3);
  return uVar1;
}



// FUNCTION 142d28010 FUN_142d28010 body=154 status=ok
// SIG undefined FUN_142d28010(void)

void FUN_142d28010(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong *param_4)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  *param_3 = 0;
  *param_4 = 0;
  lVar1 = *(longlong *)(param_2 + 0x220);
  if (lVar1 != 0) {
    lVar4 = param_2 + 0x4c;
    cVar2 = FWeakObjectPtr::IsValid(lVar4);
    if (cVar2 == '\0') {
      lVar4 = param_2 + 0x10;
    }
    uVar3 = FWeakObjectPtr::Get(lVar4);
    lVar4 = *(longlong *)(param_2 + 0x120);
    if (lVar4 == 0) {
      lVar4 = *(longlong *)(lVar1 + 0x108);
    }
    *param_4 = lVar4;
    uVar3 = FUN_142d182a0(lVar1,uVar3);
    *param_3 = uVar3;
  }
  return;
}



// FUNCTION 142d280b0 FUN_142d280b0 body=1530 status=ok
// SIG undefined FUN_142d280b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d280b0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_res10;
  undefined8 local_res18;
  longlong local_res20;
  undefined4 local_138 [2];
  void *local_130;
  undefined8 local_128;
  longlong local_120;
  longlong local_118;
  undefined8 local_110;
  undefined4 local_108;
  longlong local_104;
  undefined4 local_fc;
  byte local_f8;
  uint local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  longlong local_d8 [2];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  float local_b4;
  float local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  float local_90;
  ulonglong local_88;
  undefined4 local_80;
  undefined8 local_78;
  float local_70;
  float local_60;
  
  local_res18 = param_3;
  if (param_2[2] == 0) {
    if (((longlong *)param_2[3] == (longlong *)0x0) || (param_2[4] == 0)) {
      plVar7 = (longlong *)FWeakObjectPtr::Get((longlong)param_2 + 0xcc);
      if (plVar7 == (longlong *)0x0) {
        return;
      }
      lVar6 = (**(code **)(*plVar7 + 0x148))(plVar7);
    }
    else {
      lVar6 = (**(code **)(*(longlong *)param_2[3] + 0x148))();
    }
  }
  else {
    lVar6 = *(longlong *)(param_2[2] + 0x120);
    if (lVar6 != 0) goto LAB_142d28131;
    lVar6 = FUN_1423407b0();
  }
  if (lVar6 == 0) {
    return;
  }
LAB_142d28131:
  iVar5 = FUN_1428cf800(lVar6);
  if (iVar5 != 3) {
    plVar7 = (longlong *)0x0;
    if (param_2[0x56] != 0) {
      plVar7 = *(longlong **)(param_2[0x56] + 0x118);
    }
    if (plVar7 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar7 + 0x670))(plVar7);
      if (lVar6 != 0) {
        uVar11 = 0;
        plVar12 = *(longlong **)(param_1 + 0x168);
        uVar13 = (longlong)*(int *)(param_1 + 0x170) & 0x1fffffffffffffff;
        if (plVar12 + *(int *)(param_1 + 0x170) < plVar12) {
          uVar13 = uVar11;
        }
        if (uVar13 != 0) {
          do {
            lVar2 = *plVar12;
            if (lVar2 != 0) {
              local_d8[0] = 0;
              local_d8[1] = 0;
              if ((*(byte *)(lVar2 + 0x30) & 3) == 0) {
                FUN_142d43590(lVar2,lVar6,0x3f800000,0,0,local_d8);
              }
              else {
                lVar10 = 0x2f8;
                uStack_e4 = 0;
                uStack_e0 = 0;
                local_e8 = local_e8 & 0xffffff00;
                if (1 < (byte)((char)param_2[0x5e] - 1U)) {
                  lVar10 = 0x104;
                }
                local_b4 = *(float *)(param_2 + 0x23);
                local_80 = 0;
                fVar16 = (float)((ulonglong)param_2[0x22] >> 0x20) -
                         *(float *)(lVar10 + 4 + (longlong)param_2);
                fVar15 = (float)param_2[0x22] - *(float *)(lVar10 + (longlong)param_2);
                fVar14 = *(float *)(param_2 + 0x23) - *(float *)(lVar10 + 8 + (longlong)param_2);
                local_a8 = *(float *)((longlong)param_2 + 0x124);
                lVar10 = plVar7[0x2d];
                local_88 = (ulonglong)local_e8;
                fVar14 = SQRT(fVar16 * fVar16 + fVar15 * fVar15 + fVar14 * fVar14);
                if (fVar14 <= 1.0) {
                  fVar14 = 1.0;
                }
                if (lVar10 == 0) {
                  local_9c = DAT_1468b5d98;
                  puVar8 = &local_a4;
                  local_a4 = _DAT_1468b5d90;
                }
                else {
                  puVar8 = (undefined8 *)&local_c8;
                  local_c8 = *(undefined4 *)(lVar10 + 0x220);
                  local_c0 = *(undefined4 *)(lVar10 + 0x228);
                  uStack_c4 = *(undefined4 *)(lVar10 + 0x224);
                }
                local_90 = *(float *)(puVar8 + 1);
                local_70 = local_90 + *(float *)((longlong)param_2 + 0x124) * fVar14;
                local_78 = CONCAT44((float)((ulonglong)*puVar8 >> 0x20) +
                                    (float)((ulonglong)*(undefined8 *)((longlong)param_2 + 0x11c) >>
                                           0x20) * fVar14,
                                    (float)*puVar8 +
                                    (float)*(undefined8 *)((longlong)param_2 + 0x11c) * fVar14);
                local_60 = local_70;
                FUN_142d444c0(lVar2,lVar6,&local_78,0,param_2[7],&local_88,local_d8);
              }
              if (local_d8[0] != 0) {
                FMemory::Free();
              }
            }
            plVar12 = plVar12 + 1;
            uVar11 = uVar11 + 1;
          } while (uVar11 != uVar13);
        }
      }
      uVar9 = 0;
      FUN_142d2ab20(param_1,param_2,local_res18);
      puVar1 = (undefined4 *)(param_1 + 0x1f0);
      cVar4 = FWeakObjectPtr::IsValid(puVar1);
      if (cVar4 == '\0') {
        plVar12 = (longlong *)param_2[5];
        local_res20 = param_2[2];
        lVar6 = param_2[7];
        if (plVar12 != (longlong *)0x0) {
          uVar9 = (**(code **)(*plVar12 + 0x148))(plVar12);
        }
        FWeakObjectPtr::operator=(puVar1,uVar9);
        cVar4 = FWeakObjectPtr::IsValid(puVar1);
        if (cVar4 == '\0') {
          uVar9 = (**(code **)(*plVar7 + 0x148))(plVar7);
          FWeakObjectPtr::operator=(puVar1,uVar9);
        }
        cVar4 = FWeakObjectPtr::IsValid(puVar1);
        if (cVar4 != '\0') {
          local_108 = DAT_1468b5d98;
          local_fc = DAT_1468b5d98;
          local_138[0] = 0;
          local_130 = (void *)0x0;
          local_128 = 0;
          local_120 = 0;
          local_118 = 0;
          local_110 = _DAT_1468b5d90;
          local_104 = _DAT_1468b5d90;
          local_f8 = 0;
          local_138[0] = (**(code **)(*param_2 + 0x18))(param_2,0);
          if (&local_130 != (void **)(param_2 + 0x4b)) {
            iVar5 = (int)param_2[0x4c];
            local_res10 = (void *)param_2[0x4b];
            local_128 = CONCAT44(local_128._4_4_,iVar5);
            if ((iVar5 == 0) && (local_128._4_4_ == 0)) {
              local_128 = 0;
            }
            else {
              TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_130,iVar5);
              _guard_xfg_dispatch_icall_nop(local_130,local_res10,(longlong)iVar5 << 4);
            }
          }
          local_110 = *(undefined8 *)((longlong)param_2 + 0x11c);
          local_108 = *(undefined4 *)((longlong)param_2 + 0x124);
          plVar3 = (longlong *)param_2[10];
          local_104 = param_2[0x22];
          local_fc = (undefined4)param_2[0x23];
          if (plVar3 == (longlong *)0x0) {
            local_118 = 0;
            lVar2 = local_118;
          }
          else {
            lVar2 = plVar3[0x1f];
            if (plVar3[0x1f] == 0) {
              (**(code **)(*plVar3 + 0x368))();
              lVar2 = plVar3[0x1f];
            }
          }
          local_118 = lVar2;
          plVar3 = (longlong *)param_2[0xb];
          if (plVar3 == (longlong *)0x0) {
            local_120 = 0;
            lVar2 = local_120;
          }
          else {
            lVar2 = plVar3[0x1f];
            if (plVar3[0x1f] == 0) {
              (**(code **)(*plVar3 + 0x368))(plVar3);
              lVar2 = plVar3[0x1f];
            }
          }
          local_120 = lVar2;
          lVar2 = param_2[0x65];
          local_f8 = *(byte *)((longlong)param_2 + 0x214) & 1;
          FUN_142e0d2b0(param_1,plVar12,lVar6,plVar7,local_138);
          if ((int)lVar2 == 0) {
            FUN_142e0d4b0(param_1,plVar12,lVar6,plVar7,local_138);
          }
          else if ((((int)lVar2 == 2) &&
                   (FUN_142e0d3b0(param_1,plVar12,lVar6,plVar7,local_138), local_res20 != 0)) &&
                  ((*(uint *)(local_res20 + 0x840) >> 3 & 1) != 0)) {
            FUN_142e0d5b0(param_1,plVar12,lVar6,plVar7,local_138);
          }
          FWeakObjectPtr::operator=(&local_res10,0);
          *puVar1 = (undefined4)local_res10;
          *(undefined4 *)(param_1 + 500) = local_res10._4_4_;
          if (local_130 != (void *)0x0) {
            FMemory::Free();
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142d286b0 FUN_142d286b0 body=433 status=ok
// SIG undefined FUN_142d286b0(void)

undefined8
FUN_142d286b0(undefined8 param_1,float *param_2,float *param_3,undefined8 param_4,undefined8 param_5
             ,char *param_6)

{
  char cVar1;
  undefined8 uVar2;
  float fVar3;
  undefined1 local_18 [16];
  
  cVar1 = *param_6;
  if (cVar1 == '\x01') {
    fVar3 = (*(float *)(param_6 + 0x18) - param_3[1]) * (*(float *)(param_6 + 0x18) - param_3[1]) +
            (*(float *)(param_6 + 0x14) - *param_3) * (*(float *)(param_6 + 0x14) - *param_3) +
            (*(float *)(param_6 + 0x1c) - param_3[2]) * (*(float *)(param_6 + 0x1c) - param_3[2]);
    if ((0.0 < *(float *)(param_6 + 0x80)) && (fVar3 < *(float *)(param_6 + 0x80))) {
      return 0;
    }
  }
  else {
    if (cVar1 == '\x02') {
      uVar2 = FUN_142d2c100(param_2,param_3,param_4,param_5,param_6 + 0x40,
                            *(undefined4 *)(param_6 + 0x80),*(undefined4 *)(param_6 + 0x84),
                            *(undefined4 *)(param_6 + 0x88),*(undefined4 *)(param_6 + 0x8c));
      return uVar2;
    }
    if (cVar1 == '\x03') {
      uVar2 = FRotator::Vector(param_6 + 0x20,local_18);
      uVar2 = FUN_142d2bc30(param_2,param_3,param_4,param_6 + 0x14,uVar2,
                            *(undefined4 *)(param_6 + 0x80),*(undefined4 *)(param_6 + 0x84));
      return uVar2;
    }
    if ((cVar1 != '\x04') && (cVar1 != '\x05')) {
      return 0;
    }
    fVar3 = (param_3[1] - *(float *)(param_6 + 0x18)) * (param_3[1] - *(float *)(param_6 + 0x18)) +
            (*param_3 - *(float *)(param_6 + 0x14)) * (*param_3 - *(float *)(param_6 + 0x14)) +
            (param_3[2] - *(float *)(param_6 + 0x1c)) * (param_3[2] - *(float *)(param_6 + 0x1c));
  }
  if (fVar3 <= 0.0) {
    fVar3 = 3.4028235e+38;
  }
  else {
    fVar3 = 1.0 / fVar3;
  }
  *param_2 = fVar3;
  return 1;
}



// FUNCTION 142d28870 FUN_142d28870 body=188 status=ok
// SIG undefined FUN_142d28870(void)

void FUN_142d28870(longlong *param_1,int param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  if (((*(byte *)(param_1 + 0x17) & 8) != 0) && (iVar4 = FUN_14233f450(), iVar4 != 3)) {
    return;
  }
  if ((-1 < param_2) && (param_2 < (int)param_1[0x5a])) {
    (**(code **)(*param_1 + 0x260))(param_1);
    uVar1 = *param_3;
    lVar5 = (longlong)param_2 * 0x34;
    *(undefined1 *)(lVar5 + param_1[0x59]) = param_5;
    lVar3 = param_1[0x59];
    uVar2 = *(undefined4 *)(param_3 + 1);
    *(undefined8 *)(lVar3 + 4 + lVar5) = uVar1;
    uVar1 = *param_4;
    *(undefined4 *)(lVar3 + 0xc + lVar5) = uVar2;
    *(undefined1 *)(param_1[0x59] + 1 + lVar5) = param_6;
    lVar3 = param_1[0x59];
    uVar2 = *(undefined4 *)(param_4 + 1);
    *(undefined8 *)(lVar3 + 0x10 + lVar5) = uVar1;
    *(undefined4 *)(lVar3 + 0x18 + lVar5) = uVar2;
    FUN_142d2baa0(param_1);
  }
  return;
}



// FUNCTION 142d28940 FUN_142d28940 body=42 status=ok
// SIG undefined FUN_142d28940(void)

void FUN_142d28940(longlong param_1,float param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if ((0.0 <= param_2) &&
     (fVar1 = *(float *)(param_1 + 0x44), param_2 <= *(float *)(param_1 + 0x44))) {
    fVar1 = param_2;
  }
  *(float *)(param_1 + 0x4c) = fVar1;
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142d28962. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x260))();
    return;
  }
  return;
}



// FUNCTION 142d28970 FUN_142d28970 body=269 status=ok
// SIG undefined FUN_142d28970(void)

void FUN_142d28970(longlong param_1,float param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  float fVar5;
  
  if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar3 = FUN_1423407b0(), lVar3 == 0)) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0(param_1);
  }
  iVar2 = FUN_1428cf800(lVar3);
  if ((iVar2 != 3) && ((*(uint *)(param_1 + 0x840) >> 3 & 1) == 0)) {
    if (*(int *)(param_1 + 0x670) == 0) {
      if ((0 < *(int *)(param_1 + 0x680)) &&
         (cVar1 = FUN_142d52a00(*(longlong *)(param_1 + 0x678) + 0x60), cVar1 != '\0')) {
        uVar4 = FUN_142d52a20(*(longlong *)(param_1 + 0x678) + 0x60);
        uVar4 = FArchive::operator<<(uVar4);
        FUN_142d6f560(uVar4,param_2,1);
      }
    }
    else if (*(int *)(param_1 + 0x670) == 1) {
      fVar5 = 0.0;
      if ((0.0 <= param_2) &&
         (fVar5 = *(float *)(param_1 + 0x6cc), param_2 <= *(float *)(param_1 + 0x6cc))) {
        fVar5 = param_2;
      }
      *(float *)(param_1 + 0x6d4) = fVar5;
      if (*(longlong **)(param_1 + 0x6d8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x260))();
        FUN_142d13bf0(param_1);
        return;
      }
    }
    FUN_142d13bf0(param_1);
  }
  return;
}



// FUNCTION 142d28a80 FUN_142d28a80 body=94 status=ok
// SIG undefined FUN_142d28a80(void)

void FUN_142d28a80(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined4 local_28;
  
  local_30 = 0;
  local_28 = 0;
  local_38[0] = 0xff;
  FUN_142d1bf20(param_1,local_38);
  cVar1 = FUN_142d52a00(local_38);
  if (cVar1 != '\0') {
    uVar2 = FUN_142d52a20(local_38);
    uVar2 = FArchive::operator<<(uVar2);
    FUN_142d6f560(uVar2,param_2,1);
  }
  return;
}



// FUNCTION 142d28ae0 FUN_142d28ae0 body=218 status=ok
// SIG undefined FUN_142d28ae0(void)

void FUN_142d28ae0(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *local_res8;
  undefined8 local_res10;
  int local_res18 [4];
  
  plVar1 = (longlong *)(param_1 + 0x348);
  local_res10 = param_2;
  piVar4 = (int *)TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
                  ::FindId(plVar1,local_res18,param_2);
  if (*piVar4 == -1) {
    local_res8 = &local_res10;
    FUN_1407b9130(plVar1,local_res18,&local_res8,0);
    param_2 = local_res10;
  }
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId(plVar1,local_res18,param_2);
  if (local_res18[0] == -1) {
    lVar5 = 0;
  }
  else {
    lVar5 = (longlong)local_res18[0] * 0x20 + *plVar1;
  }
  plVar1 = (longlong *)(lVar5 + 8);
  if (-1 < param_3) {
    iVar2 = *(int *)(lVar5 + 0x10);
    if (iVar2 <= param_3) {
      iVar6 = (param_3 - iVar2) + 1;
      iVar3 = iVar2 + iVar6;
      *(int *)(lVar5 + 0x10) = iVar3;
      if (*(int *)(lVar5 + 0x14) < iVar3) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar2 * 8),0,(longlong)iVar6 << 3);
    }
  }
  *(undefined8 *)(*plVar1 + (longlong)param_3 * 8) = param_4;
  return;
}



// FUNCTION 142d28bc0 FUN_142d28bc0 body=49 status=ok
// SIG undefined FUN_142d28bc0(void)

void FUN_142d28bc0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_14233f450();
  if ((iVar1 == 3) && (param_2 != param_1)) {
    *(longlong *)(param_1 + 0x818) = param_2;
  }
  return;
}



// FUNCTION 142d28c00 FUN_142d28c00 body=134 status=ok
// SIG undefined FUN_142d28c00(void)

void FUN_142d28c00(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_2 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = UScrollBox::GetPrivateStaticClass();
    uVar1 = (**(code **)(*param_2 + 0x628))(param_2,uVar1);
  }
  *param_1 = uVar1;
  if (param_2 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    uVar1 = UDamageableInterface::GetPrivateStaticClass();
    lVar2 = UObjectBaseUtility::GetInterfaceAddress(param_2,uVar1);
  }
  if (lVar2 == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    param_1[2] = lVar2;
    param_1[1] = param_2;
    if (param_2 == (longlong *)0x0) {
      param_1[2] = 0;
      return;
    }
  }
  return;
}



// FUNCTION 142d28c90 FUN_142d28c90 body=310 status=ok
// SIG undefined FUN_142d28c90(void)

void FUN_142d28c90(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  undefined4 uVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  
  param_1[0xea] = param_2;
  param_1[0xec] = param_4;
  param_1[0xeb] = param_3;
  cVar4 = FUN_142d5a800(param_1 + 0x7a);
  if ((cVar4 != '\0') && (param_4 != 0)) {
    lVar5 = FUN_142e20fc0();
    lVar6 = param_4;
    do {
      if (lVar6 == lVar5) {
        plVar2 = (longlong *)param_1[0x23];
        if (plVar2 != (longlong *)0x0) {
          lVar6 = AHeoCon::GetPrivateStaticClass();
          if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((bVar3) && (cVar4 = (**(code **)(*plVar2 + 0xa08))(plVar2), cVar4 != '\0')) {
            param_1[0xeb] = param_4;
          }
        }
        break;
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while (lVar6 != 0);
  }
  *(undefined4 *)(param_1 + 0xed) = *(undefined4 *)(param_5 + 0x10);
  *(undefined4 *)(param_1 + 0xef) = *(undefined4 *)(param_5 + 0x34);
  uVar1 = *(undefined4 *)(param_5 + 0x30);
  *(undefined8 *)((longlong)param_1 + 0x76c) = *(undefined8 *)(param_5 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x774) = uVar1;
  uVar1 = *(undefined4 *)(param_5 + 0x4c);
  param_1[0xf0] = *(longlong *)(param_5 + 0x44);
  *(undefined4 *)(param_1 + 0xf1) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x77c) = *(undefined4 *)(param_5 + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x78c) = 0;
  (**(code **)(*param_1 + 0x260))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000142d28dbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1[0x23] + 0x600))();
  return;
}



// FUNCTION 142d28dd0 FUN_142d28dd0 body=19 status=ok
// SIG undefined FUN_142d28dd0(void)

void FUN_142d28dd0(longlong param_1,byte param_2)

{
  *(uint *)(param_1 + 0x840) = *(uint *)(param_1 + 0x840) & 0xfffffffd;
  *(uint *)(param_1 + 0x840) = *(uint *)(param_1 + 0x840) | (uint)param_2 * 2;
  return;
}



// FUNCTION 142d28df0 FUN_142d28df0 body=17 status=ok
// SIG undefined FUN_142d28df0(void)

void FUN_142d28df0(longlong param_1,byte param_2)

{
  *(uint *)(param_1 + 0x840) = *(uint *)(param_1 + 0x840) & 0xfffffffe;
  *(uint *)(param_1 + 0x840) = *(uint *)(param_1 + 0x840) | (uint)param_2;
  return;
}



// FUNCTION 142d28e10 FUN_142d28e10 body=505 status=ok
// SIG undefined FUN_142d28e10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d28e10(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if ((*(longlong *)(param_1 + 0x838) == 0) &&
     ((lVar1 = *(longlong *)(param_1 + 0x120), lVar1 != 0 || (lVar1 = FUN_1423407b0(), lVar1 != 0)))
     ) {
    local_a8 = FUN_142d13bf0;
    uStack_a0 = 0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = (undefined4)local_a8;
      *(undefined4 *)((longlong)plVar2 + 0x14) = local_a8._4_4_;
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
    local_98 = 0;
    local_90 = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_98);
    }
    FWeakObjectPtr::operator=(local_88,0);
    local_b0 = 0xbf800000;
    local_b8 = 0;
    local_80 = 0;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_78 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar4,param_1 + 0x838,&local_98,0x800000);
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



// FUNCTION 142d29010 FUN_142d29010 body=532 status=ok
// SIG undefined FUN_142d29010(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d29010(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar1 = *(longlong *)(param_1 + 0x120);
  if ((((lVar1 != 0) || (lVar1 = FUN_1423407b0(), lVar1 != 0)) &&
      (*(longlong *)(param_1 + 0x850) == 0)) && (0.0 < *(float *)(param_1 + 0x844))) {
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    local_a8 = &LAB_142d2bb70;
    uStack_a0 = 0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = (undefined4)local_a8;
      *(undefined4 *)((longlong)plVar2 + 0x14) = local_a8._4_4_;
      *(undefined4 *)(plVar2 + 3) = uStack_a0;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_9c;
      lVar1 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar1;
      *plVar2 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_98 = 0;
    local_90 = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_98);
    }
    FWeakObjectPtr::operator=(local_88,0);
    local_b0 = 0xbf800000;
    local_b8 = 0;
    local_80 = 0;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_78 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar3,param_1 + 0x850,&local_98,0x3dcccccd);
    if (local_38 != 0) {
      plVar4 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar4 = local_48;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
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



// FUNCTION 142d29230 FUN_142d29230 body=11 status=ok
// SIG undefined FUN_142d29230(void)

void FUN_142d29230(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x7e0) = *param_2;
  return;
}



// FUNCTION 142d29240 FUN_142d29240 body=21 status=ok
// SIG undefined FUN_142d29240(void)

void FUN_142d29240(longlong param_1,undefined1 param_2,undefined8 param_3)

{
  *(undefined1 *)(param_1 + 0x2f0) = param_2;
  FUN_142d0c670(param_1 + 0x2f8,param_3);
  return;
}



// FUNCTION 142d29260 FUN_142d29260 body=244 status=ok
// SIG undefined FUN_142d29260(void)

undefined8 FUN_142d29260(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  if (((*DAT_146b31b00 != 0) && ((*(byte *)(param_1 + 0x10) & 1) != 0)) &&
     (*(char *)(param_2 + 0x102) != '\0')) {
    iVar1 = *(int *)((longlong)param_3 + 0xc);
    lVar4 = 0;
    lVar6 = lVar4;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    if (((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) &&
       ((*(byte *)((longlong)param_3 + 0x94) & 2) == 0)) {
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar5 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar5;
        lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
      }
      if (((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) &&
         (cVar2 = UMaterialInterface::GetCastShadowAsMasked(param_3), cVar2 == '\0')) {
        lVar4 = (**(code **)(*param_3 + 0x148))(param_3);
        if ((lVar4 != 0) && (cVar2 = FUN_14254a160(lVar4), cVar2 == '\0')) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142d29370 FUN_142d29370 body=1040 status=ok
// SIG undefined FUN_142d29370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d29370(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int *piVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined1 auStack_2c8 [32];
  undefined8 local_2a8;
  longlong local_290;
  undefined4 local_288;
  undefined8 local_280;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined8 local_270;
  longlong local_268;
  undefined8 local_260;
  undefined1 local_258 [512];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  local_270 = param_5;
  local_290 = param_3;
  local_268 = param_4;
  lVar5 = (**(code **)(*param_1 + 0x148))();
  if (param_2 != (longlong *)0x0) {
    plVar6 = (longlong *)UCelLightData::GetPrivateStaticClass();
    plVar7 = param_2;
    do {
      if (plVar7 == plVar6) {
        if (param_3 == 0) {
          return;
        }
        if (lVar5 == 0) {
          return;
        }
        lVar12 = param_2[0x1f];
        if (lVar12 == 0) {
          (**(code **)(*param_2 + 0x368))(param_2);
          lVar12 = param_2[0x1f];
        }
        if ((*(uint *)(lVar12 + 0x134) & 1) == 0) {
          return;
        }
        if (((((*(uint *)(lVar12 + 0x134) & 2) == 0) &&
             (iVar4 = FUN_142d18210(param_1,lVar12,param_3), -1 < iVar4)) &&
            (iVar4 < (int)param_1[7])) &&
           ((piVar11 = (int *)((longlong)iVar4 * 0x270 + param_1[6]), piVar11 != (int *)0x0 &&
            (*piVar11 != -1)))) {
          (**(code **)(*param_1 + 0x278))(param_1,piVar11);
          *piVar11 = -1;
        }
        iVar4 = (int)param_1[7];
        uVar1 = *(undefined4 *)(lVar5 + 0x790);
        *(int *)(param_1 + 7) = iVar4 + 1;
        if (*(int *)((longlong)param_1 + 0x3c) < iVar4 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<624,16>_>,FDefaultAllocator>::
          ResizeGrow(param_1 + 6,iVar4);
        }
        FUN_142d0a490(param_1[6] + (longlong)iVar4 * 0x270,lVar12,param_3);
        puVar13 = (undefined4 *)(param_1[6] + (longlong)iVar4 * 0x270);
        *puVar13 = (int)param_1[8];
        iVar2 = 0;
        if ((int)param_1[8] < 0x7fffffff) {
          iVar2 = (int)param_1[8] + 1;
        }
        *(int *)(param_1 + 8) = iVar2;
        if ((*(char *)(lVar12 + 0x140) != '\0') &&
           (cVar3 = FWeakObjectPtr::IsValid(puVar13 + 4), cVar3 != '\0')) {
          plVar7 = (longlong *)FWeakObjectPtr::Get(puVar13 + 4);
          uVar8 = UScrollBox::GetPrivateStaticClass();
          lVar5 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar8);
          param_5 = local_270;
          if (lVar5 != 0) {
            plVar7 = (longlong *)(lVar5 + 0x268);
            FUN_140483870(plVar7,param_1);
            uStack_278 = 0;
            local_280 = FUN_142d1d160;
            plVar6 = (longlong *)FMemory::Realloc(0,0x30);
            if (plVar6 != (longlong *)0x0) {
              *plVar6 = (longlong)&PTR_FUN_143fcfec0;
              FWeakObjectPtr::operator=(plVar6 + 1,param_1);
              *(undefined4 *)(plVar6 + 2) = (undefined4)local_280;
              *(undefined4 *)((longlong)plVar6 + 0x14) = local_280._4_4_;
              *(undefined4 *)(plVar6 + 3) = uStack_278;
              *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_274;
              lVar9 = FDelegateHandle::GenerateNewID();
              plVar6[5] = lVar9;
              *plVar6 = (longlong)&PTR_FUN_143fcff08;
              FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7,1);
              (**(code **)(*plVar6 + 0x20))(plVar6,&local_280);
              iVar2 = *(int *)(lVar5 + 0x270);
              *(int *)(lVar5 + 0x270) = iVar2 + 1;
              if (*(int *)(lVar5 + 0x274) < iVar2 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar2);
              }
              puVar10 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar7);
              *puVar10 = plVar6;
              *(undefined4 *)(puVar10 + 1) = 3;
              param_4 = local_268;
            }
            FWeakObjectPtr::operator=(puVar13 + 6,lVar5);
            param_5 = local_270;
            param_3 = local_290;
          }
        }
        puVar13[1] = uVar1;
        *(undefined8 *)(puVar13 + 2) = 0;
        puVar13[0x90] = 0;
        if (puVar13[0x91] != 0) {
          TArray<float,FDefaultAllocator>::ResizeTo(puVar13 + 0x8e,0);
        }
        FWeakObjectPtr::operator=(puVar13 + 0x8c,param_4);
        FUN_140a7d100(puVar13 + 8,param_5);
        *(byte *)(puVar13 + 0xc) = *(byte *)(puVar13 + 0xc) | 0x81;
        uVar8 = FUN_142d46fe0(param_3);
        FWeakObjectPtr::operator=(puVar13 + 0x8a,uVar8);
        if ((((*(char *)(puVar13 + 0x4f) == '\0') || (*(char *)(puVar13 + 0x53) == '\0')) &&
            ((*(uint *)(lVar12 + 0x134) & 1) != 0)) &&
           ((0.0 < *(float *)(lVar12 + 0x138) && ((*(uint *)(lVar12 + 0x134) >> 3 & 1) != 0)))) {
          local_260 = FWeakObjectPtr::Get(puVar13 + 0x8a);
          local_2a8 = param_5;
          local_268 = param_3;
          FUN_142d1c090(lVar12,&local_280,&local_290,&local_268);
          if (&local_280 != (undefined8 *)(puVar13 + 0x4c)) {
            *(code **)(puVar13 + 0x4c) = local_280;
            puVar13[0x4e] = uStack_278;
            *(undefined1 *)(puVar13 + 0x4f) = 1;
          }
          if (&local_290 != (longlong *)(puVar13 + 0x50)) {
            *(longlong *)(puVar13 + 0x50) = local_290;
            puVar13[0x52] = local_288;
            *(undefined1 *)(puVar13 + 0x53) = 1;
          }
        }
        (**(code **)(*param_1 + 0x280))(param_1,puVar13);
        FUN_140a7a190(local_258,puVar13 + 8);
        FUN_142d21890(param_1,iVar4,local_258);
        FUN_1409c53c0(local_258);
        return;
      }
      plVar7 = (longlong *)plVar7[6];
    } while (plVar7 != (longlong *)0x0);
  }
  return;
}



// FUNCTION 142d29780 FUN_142d29780 body=115 status=ok
// SIG undefined FUN_142d29780(void)

longlong FUN_142d29780(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  lVar2 = AHeoCon::GetPrivateStaticClass();
  if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return param_1[0x122];
  }
  uVar3 = UScrollBox::GetPrivateStaticClass();
                    /* WARNING: Could not recover jumptable at 0x000142d297e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar3);
  return lVar2;
}



// FUNCTION 142d29800 FUN_142d29800 body=209 status=ok
// SIG undefined FUN_142d29800(void)

void FUN_142d29800(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  ulonglong uVar5;
  
  piVar1 = (int *)param_1[6];
  uVar5 = (ulonglong)(int)param_1[7];
  piVar3 = piVar1 + uVar5 * 0x9c;
  if (piVar1 != piVar3) {
    do {
      if (*piVar1 != -1) {
        (**(code **)(*param_1 + 0x278))(param_1,piVar1);
        *piVar1 = -1;
      }
      piVar1 = piVar1 + 0x9c;
    } while (piVar1 != piVar3);
    uVar5 = (ulonglong)*(uint *)(param_1 + 7);
  }
  if ((int)uVar5 != 0) {
    plVar2 = (longlong *)(param_1[6] + 0x238);
    do {
      FUN_140591060(plVar2 + 4);
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      FUN_1409c53c0(plVar2 + -0x43);
      plVar2 = plVar2 + 0x4e;
      uVar4 = (int)uVar5 - 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 != 0);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<624,16>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 6,0);
  }
  return;
}



// FUNCTION 142d298e0 FUN_142d298e0 body=139 status=ok
// SIG undefined FUN_142d298e0(void)

void FUN_142d298e0(longlong *param_1,longlong param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_2 != 0) {
    piVar2 = (int *)param_1[6];
    piVar3 = piVar2 + (longlong)(int)param_1[7] * 0x9c;
    for (; piVar2 != piVar3; piVar2 = piVar2 + 0x9c) {
      cVar1 = FUN_14058c1e0(piVar2 + 4,param_2);
      if ((cVar1 != '\0') && (*piVar2 != -1)) {
        (**(code **)(*param_1 + 0x278))(param_1,piVar2);
        *piVar2 = -1;
      }
    }
  }
  return;
}



// FUNCTION 142d29970 FUN_142d29970 body=250 status=ok
// SIG undefined FUN_142d29970(void)

void FUN_142d29970(longlong *param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  
  if (param_2 != (longlong *)0x0) {
    plVar2 = (longlong *)UCelLightData::GetPrivateStaticClass();
    plVar3 = param_2;
    while (plVar3 != plVar2) {
      plVar3 = (longlong *)plVar3[6];
      if (plVar3 == (longlong *)0x0) {
        return;
      }
    }
    if (param_3 != 0) {
      lVar6 = param_2[0x1f];
      if (lVar6 == 0) {
        (**(code **)(*param_2 + 0x368))(param_2);
        lVar6 = param_2[0x1f];
      }
      piVar4 = (int *)param_1[6];
      piVar5 = piVar4 + (longlong)(int)param_1[7] * 0x9c;
      for (; piVar4 != piVar5; piVar4 = piVar4 + 0x9c) {
        cVar1 = FUN_14058c1e0(piVar4 + 4,param_3);
        if (((cVar1 != '\0') && (*(longlong *)(piVar4 + 0x88) == lVar6)) && (*piVar4 != -1)) {
          (**(code **)(*param_1 + 0x278))(param_1,piVar4);
          *piVar4 = -1;
        }
      }
    }
  }
  return;
}



// FUNCTION 142d29a70 FUN_142d29a70 body=267 status=ok
// SIG undefined FUN_142d29a70(void)

void FUN_142d29a70(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  
  if (param_2 != (longlong *)0x0) {
    plVar2 = (longlong *)UCelLightData::GetPrivateStaticClass();
    plVar3 = param_2;
    while (plVar3 != plVar2) {
      plVar3 = (longlong *)plVar3[6];
      if (plVar3 == (longlong *)0x0) {
        return;
      }
    }
    if ((param_3 != 0) && (param_4 != 0)) {
      lVar6 = param_2[0x1f];
      if (lVar6 == 0) {
        (**(code **)(*param_2 + 0x368))(param_2);
        lVar6 = param_2[0x1f];
      }
      piVar4 = (int *)param_1[6];
      piVar5 = piVar4 + (longlong)(int)param_1[7] * 0x9c;
      for (; piVar4 != piVar5; piVar4 = piVar4 + 0x9c) {
        cVar1 = FUN_14058c1e0(piVar4 + 4,param_3);
        if ((((cVar1 != '\0') && (*(longlong *)(piVar4 + 0x88) == lVar6)) &&
            (cVar1 = FUN_14058c1e0(piVar4 + 0x8c,param_4), cVar1 != '\0')) && (*piVar4 != -1)) {
          (**(code **)(*param_1 + 0x278))(param_1,piVar4);
          *piVar4 = -1;
        }
      }
    }
  }
  return;
}



// FUNCTION 142d29b80 FUN_142d29b80 body=1952 status=ok
// SIG undefined FUN_142d29b80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d29b80(longlong *param_1,float param_2,longlong *param_3)

{
  byte bVar1;
  uint7 uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  float *pfVar8;
  longlong *plVar9;
  longlong *plVar10;
  float *pfVar11;
  longlong *plVar12;
  longlong lVar13;
  float *pfVar14;
  byte bVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_268 [32];
  float *local_248;
  longlong **local_240;
  char local_238;
  longlong *local_230;
  undefined8 local_228;
  longlong *local_220;
  undefined4 local_218;
  float local_210 [24];
  float *local_1b0;
  undefined8 local_1a8;
  float local_1a0 [16];
  float *local_160;
  undefined8 local_158;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  lVar6 = param_1[0x24];
  if ((lVar6 == 0) && (lVar6 = FUN_1423407b0(), lVar6 == 0)) {
    return;
  }
  cVar4 = UWorld::IsInSeamlessTravel(lVar6);
  if (cVar4 != '\0') {
    return;
  }
  iVar5 = FUN_1428cf800(lVar6);
  if (iVar5 == 3) {
    iVar5 = FUN_14233f450(param_1);
    if (iVar5 != 3) {
      return;
    }
    if ((*(uint *)(param_1 + 0x108) >> 3 & 1) == 0) {
      return;
    }
  }
  cVar4 = UWorld::IsGameWorld(lVar6);
  if (cVar4 == '\0') {
    return;
  }
  if (param_1[0x23] == 0) {
    return;
  }
  if ((*(byte *)(param_1[0x23] + 0x94) & 0x18) != 0x10) {
    return;
  }
  local_238 = '\0';
  if (param_3 == (longlong *)0x0) {
    param_3 = (longlong *)FUN_142d54de0();
    if (param_3 == (longlong *)0x0) {
      return;
    }
    local_238 = '\x01';
    FUN_142d0ab00(&local_228);
    local_228 = param_1;
    (**(code **)(*param_3 + 0x10))(param_3,&local_228);
    FUN_140a7c7a0(&local_228);
  }
  if ((*(byte *)(param_1 + 0xfd) & 1) != 0) {
    if (((*(byte *)(param_1 + 0xfd) & 2) != 0) &&
       (((*(byte *)(param_3 + 0x20) & 4) != 0 || ((byte)((char)param_3[0x5e] - 1U) < 2))))
    goto LAB_142d2a2e8;
    lVar6 = FUN_142d19dd0(param_1);
    if (lVar6 != 0) {
      (**(code **)(*param_1 + 0x468))(param_1,param_2,param_3);
    }
    if ((*(byte *)(param_1 + 0xfd) & 2) != 0) goto LAB_142d2a2e8;
  }
  if ((int)param_3[0x67] == 0) {
    DAT_146b31930 = DAT_146b31930 + 1;
    if (DAT_146b31930 == 0) {
      DAT_146b31930 = 1;
    }
    *(int *)(param_3 + 0x67) = DAT_146b31930;
  }
  FUN_142d14f00(param_3);
  FUN_142d14ba0(param_3);
  bVar15 = *(byte *)((longlong)param_3 + 0x332);
  bVar1 = *(byte *)((longlong)param_3 + 0x335);
  if (bVar15 != 0) {
    if (bVar15 == 1) {
      (**(code **)(*param_1 + 0x488))(param_1,param_3);
      goto LAB_142d2a2e8;
    }
    if (bVar15 != 2) goto LAB_142d2a2e8;
  }
  plVar10 = (longlong *)0x0;
  local_228 = (longlong *)CONCAT44(0x3f800000,(undefined4)local_228);
  local_220 = (longlong *)0x0;
  local_218 = 0x80000000;
  local_1b0 = (float *)0x0;
  local_1a8 = 0;
  local_160 = (float *)0x0;
  local_158 = 0;
  uVar2 = CONCAT61((int6)((ulonglong)local_228 >> 0x10),bVar1);
  local_228 = (longlong *)((ulonglong)uVar2 << 8);
  fVar17 = param_2;
  if (((bVar15 != 2) && (bVar1 == 0)) || (local_228 = (longlong *)CONCAT71(uVar2,1), bVar1 < 4)) {
    (**(code **)(*param_3 + 0x58))(param_3,&local_228);
    if ((int)local_158 < 1) {
LAB_142d29eab:
      if (local_228._4_4_ != 1.0) goto LAB_142d29ef5;
      if (local_220 != (longlong *)0x0) {
        plVar7 = (longlong *)FUN_142e49950();
        for (plVar12 = local_220; plVar12 != (longlong *)0x0; plVar12 = (longlong *)plVar12[6]) {
          if (plVar12 == plVar7) goto LAB_142d29eea;
        }
      }
      if (((int)local_1a8 == 0) && ((int)local_158 == 0)) goto LAB_142d29f66;
LAB_142d29eea:
      if (local_228._4_4_ != 1.0) goto LAB_142d29ef5;
    }
    else {
      if (local_220 != (longlong *)0x0) {
        plVar7 = (longlong *)FUN_142e49950();
        lVar6 = local_158;
        for (plVar12 = local_220; plVar12 != (longlong *)0x0; plVar12 = (longlong *)plVar12[6]) {
          if (plVar12 == plVar7) {
            uVar3 = local_158._4_4_;
            local_158 = (ulonglong)local_158._4_4_ << 0x20;
            if ((lVar6 < 0) && (uVar3 != 0)) {
              FUN_141f620a0(local_1a0,0);
            }
            goto LAB_142d29eab;
          }
        }
      }
      fVar18 = 0.0;
      pfVar11 = local_1a0;
      if (local_160 != (float *)0x0) {
        pfVar11 = local_160;
      }
      pfVar14 = pfVar11 + (longlong)(int)local_158 * 4;
      pfVar8 = pfVar11;
      if (pfVar11 == pfVar14) {
LAB_142d29e9e:
        local_228 = (longlong *)CONCAT44(1.0 - fVar18,(undefined4)local_228);
        goto LAB_142d29eab;
      }
      do {
        fVar18 = fVar18 + pfVar8[2];
        pfVar8 = pfVar8 + 4;
      } while (pfVar8 != pfVar14);
      if (fVar18 <= 1.0) goto LAB_142d29e9e;
      if (pfVar11 != pfVar14) {
        do {
          pfVar11[2] = (1.0 / fVar18) * pfVar11[2];
          pfVar11 = pfVar11 + 4;
        } while (pfVar11 != pfVar14);
      }
      local_228 = (longlong *)((ulonglong)local_228 & 0xffffffff);
LAB_142d29ef5:
      fVar17 = param_2 * local_228._4_4_;
    }
    if (local_220 != (longlong *)0x0) {
      plVar9 = (longlong *)FUN_142e49950();
      plVar7 = local_220;
      for (plVar12 = local_220; plVar12 != (longlong *)0x0; plVar12 = (longlong *)plVar12[6]) {
        if (plVar12 == plVar9) {
          param_3[0xb] = (longlong)local_220;
          if (bVar15 != 2) {
            lVar6 = local_220[0x1f];
            if (lVar6 == 0) {
              (**(code **)(*local_220 + 0x368))(local_220);
              lVar6 = plVar7[0x1f];
            }
            if (*(char *)(lVar6 + 0xb0) != '\0') {
              FUN_142d14f00(param_3);
              bVar15 = *(byte *)((longlong)param_3 + 0x332);
            }
          }
          break;
        }
      }
    }
  }
LAB_142d29f66:
  if (ABS(local_228._4_4_) <= 1e-08) {
LAB_142d2a105:
    if ((bVar15 & 0xfd) == 0) goto LAB_142d2a10f;
  }
  else {
    if (bVar15 != 2) {
      if ((char)param_3[0x5e] == '\x01') {
        param_3[0x5a] = 0;
        *(undefined4 *)(param_3 + 0x5b) = 0xffffffff;
      }
      (**(code **)(*param_3 + 0x88))(param_3,fVar17);
      (**(code **)(*param_3 + 0x40))(param_3);
      (**(code **)(*param_3 + 0x48))(param_3);
      (**(code **)(*param_3 + 0x50))(param_3);
      (**(code **)(*param_1 + 0x448))(param_1,param_3);
      (**(code **)(*param_1 + 0x450))(param_1,param_3);
      lVar6 = param_1[0x24];
      if (lVar6 == 0) {
        lVar6 = FUN_1423407b0(param_1);
      }
      *(undefined4 *)(param_1 + 0xf2) = *(undefined4 *)(lVar6 + 0x790);
      if (((*(byte *)(param_1 + 0x17) & 8) != 0) && ((longlong *)param_1[0x23] != (longlong *)0x0))
      {
        (**(code **)(*(longlong *)param_1[0x23] + 0x600))();
      }
      if ((int)param_3[0x32] != 0) {
        plVar12 = (longlong *)param_3[0x30];
        plVar7 = plVar10;
        if (plVar12 == (longlong *)0x0) {
          plVar7 = param_3 + 0x2c;
        }
        if (plVar7 != (longlong *)0x0 || plVar12 != (longlong *)0x0) {
          local_230 = param_3;
          if ((int)param_3[0x32] != 0) {
            if (plVar12 == (longlong *)0x0) {
              plVar12 = param_3 + 0x2c;
            }
            if (plVar12 != (longlong *)0x0) {
              plVar10 = (longlong *)(**(code **)(*plVar12 + 8))();
            }
          }
          (*(code *)param_3[0x2a])(plVar10,&local_230);
        }
      }
      goto LAB_142d2a105;
    }
    (**(code **)(*param_3 + 0x88))(param_3,fVar17);
    (**(code **)(*param_3 + 0x70))(param_3);
    (**(code **)(*param_3 + 0x78))(param_3);
    (**(code **)(*param_3 + 0x80))(param_3);
    (**(code **)(*param_1 + 0x458))(param_1,param_3);
    (**(code **)(*param_1 + 0x460))(param_1,param_3);
    if (((*(byte *)(param_1 + 0x17) & 8) != 0) && ((longlong *)param_1[0x23] != (longlong *)0x0)) {
      (**(code **)(*(longlong *)param_1[0x23] + 0x600))();
    }
LAB_142d2a10f:
    if ((0 < (int)local_1a8) && ((bVar1 == 0 || (bVar1 == 3)))) {
      lVar6 = (longlong)(int)local_1a8;
      pfVar11 = local_210;
      if (local_1b0 != (float *)0x0) {
        pfVar11 = local_1b0;
      }
      if (pfVar11 != pfVar11 + lVar6 * 6) {
        pfVar8 = pfVar11 + 4;
        do {
          if (*(char *)(pfVar8 + 1) == '\x01') {
            if (bVar15 == 0) {
              lVar13 = *param_3;
              uVar16 = (**(code **)(lVar13 + 0x18))(param_3,0);
              fVar17 = (float)(**(code **)(lVar13 + 0x30))(param_3,uVar16);
              lVar13 = param_3[5];
LAB_142d2a1e4:
              fVar18 = *pfVar8;
              if ((lVar13 != 0) &&
                 (plVar10 = (longlong *)FUN_142d090e0(), plVar10 != (longlong *)0x0)) {
                local_248 = pfVar8 + -2;
                (**(code **)(*plVar10 + 0x478))(plVar10,fVar17 * fVar18,param_3,pfVar8 + -4);
              }
            }
          }
          else if (*(char *)(pfVar8 + 1) == '\x02') {
            if (bVar15 == 0) {
              lVar13 = *param_3;
              uVar16 = (**(code **)(lVar13 + 0x18))(param_3);
              fVar17 = (float)(**(code **)(lVar13 + 0x30))(param_3,uVar16);
              lVar13 = param_3[0x4d];
              goto LAB_142d2a1e4;
            }
          }
          else if (bVar1 == 0) {
            local_240 = (longlong **)(pfVar8 + -2);
            local_248 = pfVar8 + -4;
            (**(code **)(*param_1 + 0x470))(param_1,param_2 * *pfVar8,1,param_3);
          }
          pfVar14 = pfVar8 + 2;
          pfVar8 = pfVar8 + 6;
        } while (pfVar14 != pfVar11 + lVar6 * 6);
      }
    }
    if ((0 < (int)local_158) && (bVar1 == 0)) {
      pfVar11 = local_1a0;
      if (local_160 != (float *)0x0) {
        pfVar11 = local_160;
      }
      pfVar8 = pfVar11 + (longlong)(int)local_158 * 4;
      for (; pfVar11 != pfVar8; pfVar11 = pfVar11 + 4) {
        local_240 = &local_230;
        local_230 = (longlong *)0x0;
        local_248 = pfVar11;
        (**(code **)(*param_1 + 0x470))(param_1,param_2 * pfVar11[2],3,param_3);
      }
    }
  }
  if (local_160 != (float *)0x0) {
    FMemory::Free(local_160);
  }
  if (local_1b0 != (float *)0x0) {
    FMemory::Free();
  }
LAB_142d2a2e8:
  if ((local_238 != '\0') && (param_3 != (longlong *)0x0)) {
    FUN_142d6cc00(param_3);
  }
  return;
}



// FUNCTION 142d2a320 FUN_142d2a320 body=361 status=ok
// SIG undefined FUN_142d2a320(void)

void FUN_142d2a320(longlong *param_1,undefined4 param_2,longlong param_3,undefined8 param_4)

{
  void **ppvVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  undefined4 uVar4;
  void *local_38;
  undefined8 local_30;
  
  lVar3 = param_1[0x24];
  if ((((lVar3 == 0) && (lVar3 = FUN_1423407b0(), lVar3 == 0)) ||
      (iVar2 = FUN_1428cf800(lVar3), iVar2 != 3)) ||
     ((iVar2 = FUN_14233f450(param_1), iVar2 == 3 && ((*(uint *)(param_1 + 0x108) >> 3 & 1) != 0))))
  {
    if ((param_3 != 0) && (*(char *)(param_3 + 0x2f0) == '\x01')) {
      local_38 = (void *)0x0;
      local_30 = 0;
      if ((param_1[0x103] == 0) || ((*(byte *)(param_1 + 0xfd) & 2) == 0)) {
        lVar3 = param_1[0x102];
      }
      else {
        lVar3 = FUN_142d1ab50();
      }
      _Src = (void *)0x0;
      iVar2 = 0;
      if (lVar3 != 0) {
        FUN_142d3ba90(lVar3,param_3,&local_38);
        _Src = local_38;
        iVar2 = (int)local_30;
      }
      ppvVar1 = (void **)(param_3 + 0x2e0);
      if (ppvVar1 != &local_38) {
        *(int *)(param_3 + 0x2e8) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_3 + 0x2ec) == 0)) {
          *(undefined4 *)(param_3 + 0x2ec) = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(ppvVar1,iVar2);
          _guard_xfg_dispatch_icall_nop(*ppvVar1,_Src,(longlong)iVar2 << 4);
          _Src = local_38;
        }
      }
      if (_Src != (void *)0x0) {
        FMemory::Free(_Src);
      }
    }
    uVar4 = (**(code **)(*param_1 + 0x480))(param_1,param_2,param_3,param_4);
    FUN_142d29b80(param_1,uVar4,param_3);
  }
  return;
}



// FUNCTION 142d2a490 FUN_142d2a490 body=773 status=ok
// SIG undefined FUN_142d2a490(void)

void FUN_142d2a490(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  
  lVar3 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x148))();
  if (lVar3 != 0) {
    lVar9 = (longlong)*(int *)(param_1 + 0x18);
    uVar1 = *(undefined4 *)(lVar3 + 0x790);
    *(undefined1 *)(param_1 + 0xc) = 1;
    if (0 < lVar9) {
      lVar11 = 0;
      iVar12 = 0;
      do {
        plVar7 = (longlong *)(*(longlong *)(param_1 + 0x10) + lVar11);
        if ((int)plVar7[0x45] == -1) {
LAB_142d2a510:
          bVar14 = false;
        }
        else {
          if (*plVar7 == 0) {
            bVar14 = false;
          }
          else {
            if (*(longlong *)(*plVar7 + 0x98) != 0) {
              if ((((char)plVar7[0x58] == '\x02') || (*(char *)((longlong)plVar7 + 0x2c2) == '\x02')
                  ) || (*(char *)((longlong)plVar7 + 0x2c1) == '\x02')) goto LAB_142d2a510;
              lVar4 = plVar7[0x59];
              lVar5 = (longlong)(int)plVar7[0x5a] * 400 + lVar4;
              for (; lVar4 != lVar5; lVar4 = lVar4 + 400) {
                if ((*(byte *)(lVar4 + 8) & 8) != 0) goto LAB_142d2a510;
              }
            }
            if ((*(int *)(param_1 + 0x30) <= iVar12) &&
               (cVar2 = FUN_142d13b90(plVar7,uVar1), cVar2 == '\0')) {
              bVar14 = false;
              goto LAB_142d2a5aa;
            }
            FUN_142d18360(plVar7,lVar3,param_1 + -0x28);
            bVar14 = true;
          }
          *(undefined4 *)(plVar7 + 0x45) = 0xffffffff;
        }
LAB_142d2a5aa:
        lVar11 = lVar11 + 0x2e0;
        iVar13 = iVar12 + 1;
        if (!bVar14) {
          iVar13 = iVar12;
        }
        lVar9 = lVar9 + -1;
        iVar12 = iVar13;
      } while (lVar9 != 0);
    }
    *(undefined1 *)(param_1 + 0xc) = 0;
    if (0 < *(int *)(param_1 + 0x28)) {
      iVar12 = *(int *)(param_1 + 0x28);
      if (iVar12 != 0) {
        iVar13 = *(int *)(param_1 + 0x18);
        if (*(int *)(param_1 + 0x1c) < iVar13 + iVar12) {
          TArray<Chaos::FJointSolverGaussSeidel,TSizedDefaultAllocator<32>_>::ResizeTo
                    (param_1 + 0x10);
          iVar13 = *(int *)(param_1 + 0x18);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar13 * 0x2e0 + *(longlong *)(param_1 + 0x10)),
                   *(void **)(param_1 + 0x20),(longlong)iVar12 * 0x2e0);
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar12;
      }
      if (*(int *)(param_1 + 0x2c) < 0) {
        FUN_142d15ac0(param_1 + 0x20,0);
      }
      else {
        iVar12 = *(int *)(param_1 + 0x28);
        if (iVar12 != 0) {
          lVar3 = *(longlong *)(param_1 + 0x20) + 0x20;
          do {
            FUN_142d0c2a0(lVar3 + 0x2a8);
            FUN_1409c53c0(lVar3);
            lVar3 = lVar3 + 0x2e0;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
        *(undefined4 *)(param_1 + 0x28) = 0;
      }
    }
    lVar3 = (longlong)*(int *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x18) != 0) {
      iVar13 = 0;
      bVar14 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x228) != -1;
      lVar9 = 0;
      iVar12 = 0;
      do {
        lVar9 = lVar9 + 1;
        iVar8 = iVar12 + 1;
        if (lVar9 < lVar3) {
          piVar6 = (int *)(*(longlong *)(param_1 + 0x10) + 0x228 + lVar9 * 0x2e0);
          do {
            if (bVar14 != (*piVar6 != -1)) break;
            iVar8 = iVar8 + 1;
            lVar9 = lVar9 + 1;
            piVar6 = piVar6 + 0xb8;
          } while (lVar9 < lVar3);
        }
        iVar10 = iVar8 - iVar12;
        if (bVar14 == false) {
          if (iVar10 != 0) {
            lVar11 = (longlong)iVar12 * 0x2e0 + 0x20 + *(longlong *)(param_1 + 0x10);
            do {
              FUN_142d0c2a0(lVar11 + 0x2a8);
              FUN_1409c53c0(lVar11);
              lVar11 = lVar11 + 0x2e0;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
        }
        else {
          if (iVar13 != iVar12) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar13 * 0x2e0 + *(longlong *)(param_1 + 0x10)),
                       (void *)((longlong)iVar12 * 0x2e0 + *(longlong *)(param_1 + 0x10)),
                       (longlong)iVar10 * 0x2e0);
          }
          iVar13 = iVar13 + iVar10;
        }
        bVar14 = (bool)(bVar14 ^ 1);
        iVar12 = iVar8;
      } while (lVar9 < lVar3);
      *(int *)(param_1 + 0x18) = iVar13;
    }
  }
  return;
}



// FUNCTION 142d2a7a0 FUN_142d2a7a0 body=894 status=ok
// SIG undefined FUN_142d2a7a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d2a7a0(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_2f8 [32];
  undefined1 local_2d8 [16];
  byte local_2c8;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  if ((0 < *(int *)(param_1 + 0x10)) &&
     (lVar5 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x148))(param_1 + -0x28), lVar5 != 0)) {
    iVar7 = 0;
    iVar8 = *(int *)(param_1 + 0x10);
    fVar1 = *(float *)(lVar5 + 0x790);
    if (0 < iVar8) {
      lVar10 = 0;
      do {
        if ((((-1 < iVar7) && (iVar7 < *(int *)(param_1 + 0x10))) &&
            (piVar6 = (int *)(*(longlong *)(param_1 + 8) + lVar10), piVar6 != (int *)0x0)) &&
           ((*piVar6 != -1 && (lVar9 = *(longlong *)(piVar6 + 0x88), lVar9 != 0)))) {
          fVar12 = *(float *)(lVar9 + 0x13c);
          fVar13 = *(float *)(lVar9 + 0x138);
          if (fVar12 <= 0.1) {
            fVar12 = 0.1;
          }
          fVar2 = (float)piVar6[1];
          fVar11 = param_2 + (float)piVar6[2];
          if (0.0 < fVar12) {
            while (fVar12 <= fVar11) {
              FUN_140a7a190(local_2d8,piVar6 + 8);
              local_2c8 = local_2c8 | 6;
              FUN_142d21890(param_1 + -0x28,iVar7,local_2d8);
              fVar11 = fVar11 - fVar12;
              piVar6 = (int *)FUN_142d19db0(param_1 + -0x28,iVar7);
              if (piVar6 == (int *)0x0) {
                lVar9 = 0;
LAB_142d2a959:
                FUN_1409c53c0(local_2d8);
                break;
              }
              lVar9 = *(longlong *)(piVar6 + 0x88);
              if (lVar9 == 0) goto LAB_142d2a959;
              FUN_1409c53c0(local_2d8);
            }
          }
          if ((piVar6 != (int *)0x0) && (lVar9 != 0)) {
            piVar6[2] = (int)fVar11;
            if (((*(byte *)(lVar9 + 0x134) & 1) == 0) || (0.0 < *(float *)(lVar9 + 0x138))) {
              iVar4 = FUN_1428cf800(lVar5);
              if ((iVar4 == 3) && (10.0 < fVar13)) {
                fVar13 = 10.0;
              }
            }
            else {
              fVar13 = -1.0;
            }
            if (((fVar13 < fVar1 - fVar2) && (0.0 <= fVar13)) && (*piVar6 != -1)) {
              (**(code **)(*(longlong *)(param_1 + -0x28) + 0x278))(param_1 + -0x28,piVar6);
              *piVar6 = -1;
            }
          }
        }
        iVar7 = iVar7 + 1;
        lVar10 = lVar10 + 0x270;
      } while (iVar7 < iVar8);
    }
  }
  iVar8 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar8) {
    lVar5 = (longlong)iVar8 * 0x270;
    do {
      piVar6 = (int *)(*(longlong *)(param_1 + 8) + lVar5);
      if (*(longlong *)(piVar6 + 0x88) == 0) {
LAB_142d2aab8:
        if (*piVar6 != -1) {
          (**(code **)(*(longlong *)(param_1 + -0x28) + 0x278))
                    ((longlong *)(param_1 + -0x28),piVar6);
          *piVar6 = -1;
        }
LAB_142d2aad2:
        FUN_142d26920(param_1 + 8,iVar8,1,1);
      }
      else {
        if (*piVar6 == -1) goto LAB_142d2aad2;
        if (((*(byte *)(*(longlong *)(piVar6 + 0x88) + 0x134) & 1) == 0) ||
           (((cVar3 = FWeakObjectPtr::IsValid(piVar6 + 4), cVar3 == '\0' &&
             ((*(byte *)(*(longlong *)(piVar6 + 0x88) + 0x134) & 1) != 0)) &&
            (*(float *)(*(longlong *)(piVar6 + 0x88) + 0x138) <= 0.0)))) goto LAB_142d2aab8;
      }
      lVar5 = lVar5 + -0x270;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  return;
}



// FUNCTION 142d2ab20 FUN_142d2ab20 body=571 status=ok
// SIG undefined FUN_142d2ab20(void)

void FUN_142d2ab20(longlong *param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined8 local_58;
  float local_50;
  longlong *local_48;
  undefined8 local_40;
  float local_38;
  
  if ((param_3 == 0) ||
     (plVar3 = (longlong *)FWeakObjectPtr::Get(param_3 + 0x58), plVar3 == (longlong *)0x0)) {
    plVar3 = (longlong *)param_1[0x37];
  }
  cVar2 = (**(code **)(*param_1 + 0x288))(param_1,param_2);
  plVar6 = (longlong *)0x0;
  plVar7 = plVar6;
  if (((cVar2 != '\0') && (plVar7 = plVar3, plVar3 != (longlong *)0x0)) ||
     (plVar3 = plVar7, param_1[0x3d] != 0)) {
    if (*(longlong *)(param_2 + 0x2b0) != 0) {
      plVar6 = *(longlong **)(*(longlong *)(param_2 + 0x2b0) + 0x118);
    }
    if ((plVar6 != (longlong *)0x0) && (lVar4 = (**(code **)(*plVar6 + 0x670))(), lVar4 != 0)) {
      lVar5 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        local_58 = *(undefined8 *)(param_2 + 0x11c);
        local_50 = *(float *)(param_2 + 0x124);
        fVar8 = (float)((ulonglong)local_58 >> 0x20);
        fVar9 = fVar8 * fVar8 + (float)local_58 * (float)local_58;
        if (fVar9 == 1.0) {
          if (local_50 != 0.0) {
            local_50 = 0.0;
          }
        }
        else if (1e-08 <= fVar9) {
          auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
          fVar10 = auVar11._0_4_;
          fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
          fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
          local_58 = CONCAT44(fVar10 * fVar8,fVar10 * (float)local_58);
          local_50 = 0.0;
        }
        else {
          local_58 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
          local_50 = DAT_1468b5d98;
        }
        local_40 = local_58;
        local_38 = local_50;
        local_48 = plVar3;
        FUN_142e56370(lVar4,param_1,&local_48);
      }
    }
  }
  return;
}



// FUNCTION 142d2ad60 FUN_142d2ad60 body=111 status=ok
// SIG undefined FUN_142d2ad60(void)

void FUN_142d2ad60(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0xb8) & 8) != 0) {
      FUN_142350b20(param_1,0);
    }
    plVar1 = *(longlong **)(param_1 + 0x118);
    if (((plVar1 != (longlong *)0x0) &&
        (plVar2 = (longlong *)plVar1[0x2a], plVar2 != (longlong *)0x0)) && (plVar2 != plVar1)) {
      uVar3 = FUN_142e43690();
      lVar4 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
      if (lVar4 != 0) {
        FUN_142d1fad0(param_1,lVar4);
      }
    }
  }
  return;
}



// FUNCTION 142d2add0 FUN_142d2add0 body=647 status=ok
// SIG undefined FUN_142d2add0(void)

void FUN_142d2add0(longlong param_1,longlong *param_2,float *param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  undefined4 uVar4;
  float *pfVar5;
  longlong lVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  int local_res10 [2];
  int local_a8 [2];
  undefined8 local_a0;
  float local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  longlong local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if ((((param_2 != (longlong *)0x0) && (lVar6 = param_2[0x12f], lVar6 != 0)) &&
      (param_2[0xa5] != 0)) && (param_4 != 0)) {
    uStack_68 = *(undefined8 *)(param_1 + 0x1c0);
    local_60 = *(undefined4 *)(param_1 + 0x1c8);
    uStack_5c = *(undefined4 *)(param_1 + 0x1cc);
    uStack_58 = *(undefined4 *)(param_1 + 0x1d0);
    uStack_54 = *(undefined4 *)(param_1 + 0x1d4);
    local_50 = *(undefined4 *)(param_1 + 0x1d8);
    uStack_4c = *(undefined4 *)(param_1 + 0x1dc);
    uStack_48 = *(undefined4 *)(param_1 + 0x1e0);
    uStack_44 = *(undefined4 *)(param_1 + 0x1e4);
    local_70 = param_4;
    if (*(char *)(param_1 + 0x1b1) != '\0') {
      (**(code **)(*param_2 + 0x610))(param_2,local_80,local_90);
      FUN_142dcfa90(param_2,local_res10,local_a8);
      pfVar5 = (float *)FRotator::Vector(local_90,&local_a0);
      fVar1 = pfVar5[1];
      fVar8 = *pfVar5;
      fVar9 = fVar8 * fVar8 + fVar1 * fVar1;
      if (fVar9 == 1.0) {
        fVar10 = fVar1;
        fVar12 = fVar8;
        fVar13 = 0.0;
        if (pfVar5[2] == 0.0) {
          local_a0 = *(undefined8 *)pfVar5;
          local_98 = pfVar5[2];
          fVar10 = (float)((ulonglong)local_a0 >> 0x20);
          fVar12 = (float)local_a0;
          fVar13 = local_98;
        }
      }
      else {
        fVar10 = DAT_1468b5d94;
        fVar12 = DAT_1468b5d90;
        fVar13 = DAT_1468b5d98;
        if (1e-08 <= fVar9) {
          auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
          fVar10 = auVar11._0_4_;
          fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
          fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
          fVar12 = fVar8 * fVar10;
          fVar10 = fVar1 * fVar10;
          fVar13 = 0.0;
        }
      }
      plVar3 = (longlong *)param_2[0xa5];
      uVar4 = FUN_142708650(param_2);
      uVar7 = (**(code **)(*plVar3 + 0x778))(plVar3);
      fVar8 = (float)FUN_14271a5d0(param_2,uVar7,uVar4);
      fVar1 = param_3[1];
      if (fVar8 <= 0.001) {
        fVar8 = 0.001;
      }
      fVar9 = *param_3;
      fVar2 = param_3[2];
      fVar8 = _guard_xfg_dispatch_icall_nop(fVar8 * 0.008726646);
      fVar8 = _guard_xfg_dispatch_icall_nop(fVar8 * ((float)local_res10[0] / (float)local_a8[0]));
      fVar8 = _guard_xfg_dispatch_icall_nop(fVar8);
      if (-(fVar10 * fVar1 + fVar12 * fVar9 + fVar13 * fVar2) < fVar8) {
        return;
      }
      lVar6 = param_2[0x12f];
    }
    FUN_142db7ff0(lVar6,&local_70);
  }
  return;
}



// FUNCTION 142d2b060 FUN_142d2b060 body=383 status=ok
// SIG undefined FUN_142d2b060(void)

void FUN_142d2b060(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *local_28;
  int local_20;
  longlong *local_18;
  int local_10;
  
  if (((param_2 != 0) && ((*(byte *)(param_1 + 0x840) & 0x10) == 0)) &&
     (lVar6 = *(longlong *)(param_1 + 0x118), lVar6 != 0)) {
    uVar4 = UDamageableInterface::GetPrivateStaticClass();
    plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar4);
    if ((plVar5 != (longlong *)0x0) &&
       (cVar3 = (**(code **)(*plVar5 + 0x20))(plVar5), cVar3 != '\0')) {
      *(uint *)(param_1 + 0x840) = *(uint *)(param_1 + 0x840) | 0x10;
      FUN_142d1a630(param_2,&local_28);
      plVar5 = local_28 + local_20;
      for (plVar7 = local_28; plVar7 != plVar5; plVar7 = plVar7 + 1) {
        plVar1 = (longlong *)*plVar7;
        if (plVar1 != (longlong *)0x0) {
          lVar6 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
          if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
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
      FUN_142d1a4b0(param_2,&local_18);
      uVar8 = 0;
      uVar9 = (ulonglong)((longlong)(local_18 + local_10) + (7 - (longlong)local_18)) >> 3;
      if (local_18 + local_10 < local_18) {
        uVar9 = uVar8;
      }
      plVar5 = local_18;
      if (uVar9 != 0) {
        do {
          plVar7 = (longlong *)*plVar5;
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x3f8))(plVar7,param_2);
          }
          plVar5 = plVar5 + 1;
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar9);
      }
      if (local_18 != (longlong *)0x0) {
        FMemory::Free(local_18);
      }
      if (local_28 != (longlong *)0x0) {
        FMemory::Free(local_28);
      }
    }
  }
  return;
}



// FUNCTION 142d2b1e0 FUN_142d2b1e0 body=219 status=ok
// SIG undefined FUN_142d2b1e0(void)

void FUN_142d2b1e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  plVar1 = (longlong *)(param_1 + 0xc0);
  lVar2 = *plVar1;
  lVar6 = lVar2 + (longlong)*(int *)(param_1 + 200) * 0x18;
  lVar5 = lVar2;
  if (lVar2 != lVar6) {
    while (*(longlong *)(lVar5 + 0x10) != param_2) {
      lVar5 = lVar5 + 0x18;
      if (lVar5 == lVar6) {
        return;
      }
    }
    lVar6 = (lVar5 - lVar2) / 6 + (lVar5 - lVar2 >> 0x3f);
    iVar7 = (int)(lVar6 >> 2) - (int)(lVar6 >> 0x3f);
    if (iVar7 != -1) {
      if (*(longlong *)((longlong)iVar7 * 0x18 + lVar2) != 0) {
        FMemory::Free();
      }
      iVar4 = *(int *)(param_1 + 200);
      iVar3 = (iVar4 - iVar7) + -1;
      if (iVar3 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar1 + (longlong)iVar7 * 0x18),
                   (void *)(*plVar1 + (longlong)(iVar7 + 1) * 0x18),(longlong)iVar3 * 0x18);
        iVar4 = *(int *)(param_1 + 200);
      }
      *(int *)(param_1 + 200) = iVar4 + -1;
      TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(plVar1);
    }
  }
  return;
}



// FUNCTION 142d2b2c0 FUN_142d2b2c0 body=116 status=ok
// SIG undefined FUN_142d2b2c0(void)

void FUN_142d2b2c0(longlong param_1)

{
  int iVar1;
  
  if (((*(byte *)(param_1 + 0xb8) & 8) != 0) && (iVar1 = FUN_14233f450(), iVar1 != 3)) {
    return;
  }
  if (*(longlong *)(param_1 + 0x340) != 0) {
    FUN_1407665e0(*(longlong *)(param_1 + 0x340) + 800,param_1);
    FUN_1407665e0(*(longlong *)(param_1 + 0x340) + 0x330,param_1);
    FUN_140483870(*(longlong *)(param_1 + 0x340) + 0x308,param_1);
    *(undefined8 *)(param_1 + 0x340) = 0;
  }
  return;
}



// FUNCTION 142d2b340 thunk_FUN_142d2b620 body=5 status=ok
// SIG undefined thunk_FUN_142d2b620(void)

void thunk_FUN_142d2b620(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  longlong lStackX_10;
  
  if (param_2 != 0) {
    lVar1 = FUN_142e05930();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar1 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar1 + 0x90) * 8
         ) != lVar1 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    lStackX_10 = param_2;
    if (bVar7) {
      TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x1a8,&lStackX_10);
      return;
    }
    lVar1 = FUN_142e02630();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar1 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar1 + 0x90) * 8
         ) != lVar1 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x1b8,&lStackX_10);
      return;
    }
    lVar1 = FUN_142e06650();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar1 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar1 + 0x90) * 8
         ) != lVar1 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      lVar1 = (longlong)*(int *)(param_1 + 400);
      if (*(int *)(param_1 + 400) != 0) {
        iVar6 = 0;
        bVar7 = **(longlong **)(param_1 + 0x188) != param_2;
        lVar3 = 0;
        iVar4 = 0;
        do {
          lVar3 = lVar3 + 1;
          iVar5 = iVar4 + 1;
          if (lVar3 < lVar1) {
            plVar2 = (longlong *)(lVar3 * 0x10 + *(longlong *)(param_1 + 0x188));
            do {
              if (bVar7 != (*plVar2 != param_2)) break;
              iVar5 = iVar5 + 1;
              lVar3 = lVar3 + 1;
              plVar2 = plVar2 + 2;
            } while (lVar3 < lVar1);
          }
          if (bVar7 != false) {
            if (iVar6 != iVar4) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar6 * 0x10 + *(longlong *)(param_1 + 0x188)),
                         (void *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0x188)),
                         (longlong)(iVar5 - iVar4) << 4);
            }
            iVar6 = iVar6 + (iVar5 - iVar4);
          }
          bVar7 = (bool)(bVar7 ^ 1);
          iVar4 = iVar5;
        } while (lVar3 < lVar1);
        *(int *)(param_1 + 400) = iVar6;
      }
    }
    else {
      lVar1 = FUN_142e02530();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar1 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar1 + 0x90) * 8) != lVar1 + 0x88)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if ((bVar7) && (lVar1 = (longlong)*(int *)(param_1 + 0x1a0), *(int *)(param_1 + 0x1a0) != 0))
      {
        iVar6 = 0;
        bVar7 = **(longlong **)(param_1 + 0x198) != param_2;
        lVar3 = 0;
        iVar4 = 0;
        do {
          lVar3 = lVar3 + 1;
          iVar5 = iVar4 + 1;
          if (lVar3 < lVar1) {
            plVar2 = (longlong *)(lVar3 * 0x10 + *(longlong *)(param_1 + 0x198));
            do {
              if (bVar7 != (*plVar2 != param_2)) break;
              iVar5 = iVar5 + 1;
              lVar3 = lVar3 + 1;
              plVar2 = plVar2 + 2;
            } while (lVar3 < lVar1);
          }
          if (bVar7 != false) {
            if (iVar6 != iVar4) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar6 * 0x10 + *(longlong *)(param_1 + 0x198)),
                         (void *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0x198)),
                         (longlong)(iVar5 - iVar4) << 4);
            }
            iVar6 = iVar6 + (iVar5 - iVar4);
          }
          bVar7 = (bool)(bVar7 ^ 1);
          iVar4 = iVar5;
        } while (lVar3 < lVar1);
        *(int *)(param_1 + 0x1a0) = iVar6;
      }
    }
  }
  return;
}



// FUNCTION 142d2b350 FUN_142d2b350 body=705 status=ok
// SIG undefined FUN_142d2b350(void)

void FUN_142d2b350(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  longlong local_res10;
  
  if (param_2 != 0) {
    lVar1 = FUN_142e05930();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar1 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar1 + 0x90) * 8
         ) != lVar1 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    local_res10 = param_2;
    if (bVar7) {
      TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x198,&local_res10);
      return;
    }
    lVar1 = FUN_142e02630();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar1 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar1 + 0x90) * 8
         ) != lVar1 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x1a8,&local_res10);
      return;
    }
    lVar1 = FUN_142e06650();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar1 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar1 + 0x90) * 8
         ) != lVar1 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      lVar1 = (longlong)*(int *)(param_1 + 0x180);
      if (*(int *)(param_1 + 0x180) != 0) {
        iVar6 = 0;
        bVar7 = **(longlong **)(param_1 + 0x178) != param_2;
        lVar3 = 0;
        iVar4 = 0;
        do {
          lVar3 = lVar3 + 1;
          iVar5 = iVar4 + 1;
          if (lVar3 < lVar1) {
            plVar2 = (longlong *)(*(longlong *)(param_1 + 0x178) + lVar3 * 8);
            do {
              if (bVar7 != (*plVar2 != param_2)) break;
              iVar5 = iVar5 + 1;
              lVar3 = lVar3 + 1;
              plVar2 = plVar2 + 1;
            } while (lVar3 < lVar1);
          }
          if (bVar7 != false) {
            if (iVar6 != iVar4) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar6 * 8),
                         (void *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar4 * 8),
                         (longlong)(iVar5 - iVar4) << 3);
            }
            iVar6 = iVar6 + (iVar5 - iVar4);
          }
          bVar7 = (bool)(bVar7 ^ 1);
          iVar4 = iVar5;
        } while (lVar3 < lVar1);
        *(int *)(param_1 + 0x180) = iVar6;
      }
    }
    else {
      lVar1 = FUN_142e02530();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar1 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar1 + 0x90) * 8) != lVar1 + 0x88)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if ((bVar7) && (lVar1 = (longlong)*(int *)(param_1 + 400), *(int *)(param_1 + 400) != 0)) {
        iVar6 = 0;
        bVar7 = **(longlong **)(param_1 + 0x188) != param_2;
        lVar3 = 0;
        iVar4 = 0;
        do {
          lVar3 = lVar3 + 1;
          iVar5 = iVar4 + 1;
          if (lVar3 < lVar1) {
            plVar2 = (longlong *)(*(longlong *)(param_1 + 0x188) + lVar3 * 8);
            do {
              if (bVar7 != (*plVar2 != param_2)) break;
              iVar5 = iVar5 + 1;
              lVar3 = lVar3 + 1;
              plVar2 = plVar2 + 1;
            } while (lVar3 < lVar1);
          }
          if (bVar7 != false) {
            if (iVar6 != iVar4) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar6 * 8),
                         (void *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar4 * 8),
                         (longlong)(iVar5 - iVar4) << 3);
            }
            iVar6 = iVar6 + (iVar5 - iVar4);
          }
          bVar7 = (bool)(bVar7 ^ 1);
          iVar4 = iVar5;
        } while (lVar3 < lVar1);
        *(int *)(param_1 + 400) = iVar6;
      }
    }
  }
  return;
}



// FUNCTION 142d2b620 FUN_142d2b620 body=730 status=ok
// SIG undefined FUN_142d2b620(void)

void FUN_142d2b620(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  longlong local_res10;
  
  if (param_2 != 0) {
    lVar1 = FUN_142e05930();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar1 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar1 + 0x90) * 8
         ) != lVar1 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    local_res10 = param_2;
    if (bVar7) {
      TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x1a8,&local_res10);
      return;
    }
    lVar1 = FUN_142e02630();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar1 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar1 + 0x90) * 8
         ) != lVar1 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x1b8,&local_res10);
      return;
    }
    lVar1 = FUN_142e06650();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar1 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar1 + 0x90) * 8
         ) != lVar1 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      lVar1 = (longlong)*(int *)(param_1 + 400);
      if (*(int *)(param_1 + 400) != 0) {
        iVar6 = 0;
        bVar7 = **(longlong **)(param_1 + 0x188) != param_2;
        lVar3 = 0;
        iVar4 = 0;
        do {
          lVar3 = lVar3 + 1;
          iVar5 = iVar4 + 1;
          if (lVar3 < lVar1) {
            plVar2 = (longlong *)(lVar3 * 0x10 + *(longlong *)(param_1 + 0x188));
            do {
              if (bVar7 != (*plVar2 != param_2)) break;
              iVar5 = iVar5 + 1;
              lVar3 = lVar3 + 1;
              plVar2 = plVar2 + 2;
            } while (lVar3 < lVar1);
          }
          if (bVar7 != false) {
            if (iVar6 != iVar4) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar6 * 0x10 + *(longlong *)(param_1 + 0x188)),
                         (void *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0x188)),
                         (longlong)(iVar5 - iVar4) << 4);
            }
            iVar6 = iVar6 + (iVar5 - iVar4);
          }
          bVar7 = (bool)(bVar7 ^ 1);
          iVar4 = iVar5;
        } while (lVar3 < lVar1);
        *(int *)(param_1 + 400) = iVar6;
      }
    }
    else {
      lVar1 = FUN_142e02530();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar1 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar1 + 0x90) * 8) != lVar1 + 0x88)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if ((bVar7) && (lVar1 = (longlong)*(int *)(param_1 + 0x1a0), *(int *)(param_1 + 0x1a0) != 0))
      {
        iVar6 = 0;
        bVar7 = **(longlong **)(param_1 + 0x198) != param_2;
        lVar3 = 0;
        iVar4 = 0;
        do {
          lVar3 = lVar3 + 1;
          iVar5 = iVar4 + 1;
          if (lVar3 < lVar1) {
            plVar2 = (longlong *)(lVar3 * 0x10 + *(longlong *)(param_1 + 0x198));
            do {
              if (bVar7 != (*plVar2 != param_2)) break;
              iVar5 = iVar5 + 1;
              lVar3 = lVar3 + 1;
              plVar2 = plVar2 + 2;
            } while (lVar3 < lVar1);
          }
          if (bVar7 != false) {
            if (iVar6 != iVar4) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar6 * 0x10 + *(longlong *)(param_1 + 0x198)),
                         (void *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0x198)),
                         (longlong)(iVar5 - iVar4) << 4);
            }
            iVar6 = iVar6 + (iVar5 - iVar4);
          }
          bVar7 = (bool)(bVar7 ^ 1);
          iVar4 = iVar5;
        } while (lVar3 < lVar1);
        *(int *)(param_1 + 0x1a0) = iVar6;
      }
    }
  }
  return;
}



// FUNCTION 142d2b900 FUN_142d2b900 body=413 status=ok
// SIG undefined FUN_142d2b900(void)

void FUN_142d2b900(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  
  lVar7 = param_1[2];
  if (lVar7 != 0) {
    lVar8 = *(longlong *)(lVar7 + 0xf8);
    lVar7 = (longlong)*(int *)(lVar7 + 0x100) * 0x40 + lVar8;
    if (lVar8 != lVar7) {
      piVar9 = (int *)(lVar8 + 0x30);
      do {
        lVar6 = *(longlong *)(piVar9 + -6);
        lVar5 = (longlong)piVar9[-4] * 0x20 + lVar6;
        for (; lVar6 != lVar5; lVar6 = lVar6 + 0x20) {
          lVar3 = FUN_141796df0(lVar6 + 8);
          plVar2 = (longlong *)*param_1;
          iVar1 = (int)param_1[1];
          for (plVar4 = plVar2; plVar4 != plVar2 + iVar1; plVar4 = plVar4 + 1) {
            if (*plVar4 == lVar3) {
              if ((int)((longlong)plVar4 - (longlong)plVar2 >> 3) != -1) goto LAB_142d2b9da;
              break;
            }
          }
          *(int *)(param_1 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
          }
          *(longlong *)((longlong)iVar1 * 8 + *param_1) = lVar3;
LAB_142d2b9da:
        }
        lVar5 = *(longlong *)(piVar9 + -2);
        lVar6 = lVar5 + (longlong)*piVar9 * 0x18;
        for (; lVar5 != lVar6; lVar5 = lVar5 + 0x18) {
          lVar3 = FUN_141796280(lVar5);
          plVar2 = (longlong *)*param_1;
          iVar1 = (int)param_1[1];
          for (plVar4 = plVar2; plVar4 != plVar2 + iVar1; plVar4 = plVar4 + 1) {
            if (*plVar4 == lVar3) {
              if ((int)((longlong)plVar4 - (longlong)plVar2 >> 3) != -1) goto LAB_142d2ba5a;
              break;
            }
          }
          *(int *)(param_1 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
          }
          *(longlong *)((longlong)iVar1 * 8 + *param_1) = lVar3;
LAB_142d2ba5a:
        }
        lVar8 = lVar8 + 0x40;
        piVar9 = piVar9 + 0x10;
      } while (lVar8 != lVar7);
    }
  }
  return;
}



// FUNCTION 142d2baa0 FUN_142d2baa0 body=180 status=ok
// SIG undefined FUN_142d2baa0(void)

void FUN_142d2baa0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  FUN_142d10430();
  FUN_142d12220(param_1);
  bVar3 = false;
  *(int *)(param_1 + 0x31c) = *(int *)(param_1 + 0x31c) + 1;
  iVar6 = *(int *)(param_1 + 0x31c);
  iVar5 = *(int *)(param_1 + 0x310) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x308);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_142d2bb10:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_1);
        if (cVar4 == '\0') goto LAB_142d2bb10;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x31c);
  }
  *(int *)(param_1 + 0x31c) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x308),0);
    return;
  }
  return;
}



// FUNCTION 142d2bb60 FUN_142d2bb60 body=12 status=ok
// SIG undefined FUN_142d2bb60(void)

void FUN_142d2bb60(longlong param_1)

{
  FUN_142d74ef0(param_1 + 0x3d0);
  return;
}



// FUNCTION 142d2bbb0 FUN_142d2bbb0 body=113 status=ok
// SIG undefined FUN_142d2bbb0(void)

undefined8 FUN_142d2bbb0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_res10 [3];
  undefined1 local_18 [16];
  
  lVar1 = *(longlong *)(param_3 + 8);
  if (lVar1 != 0) {
    local_res10[0] = param_2;
    if ((*(longlong *)(lVar1 + 0x818) == 0) || ((*(byte *)(lVar1 + 0x7e8) & 2) == 0)) {
      lVar1 = *(longlong *)(lVar1 + 0x810);
    }
    else {
      lVar1 = FUN_142d1ab50();
    }
    if (lVar1 != 0) {
      plVar2 = (longlong *)FUN_142d3b4a0(lVar1,local_18,param_1,local_res10);
      if ((*plVar2 != 0) && ((*(byte *)(*plVar2 + 0x48) & 8) != 0)) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142d2bc30 FUN_142d2bc30 body=1225 status=ok
// SIG undefined FUN_142d2bc30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_142d2bc30(float *param_1,float *param_2,longlong *param_3,float *param_4,float *param_5,
             float param_6,float param_7)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_168 [32];
  float *local_148;
  float local_140;
  float local_138;
  float fStack_134;
  float local_130;
  float local_128;
  float fStack_124;
  float local_120;
  undefined8 local_118;
  float local_110;
  float local_108;
  float local_104;
  undefined4 local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8 [4];
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  fVar5 = *param_2 - *param_4;
  fVar7 = param_2[1] - param_4[1];
  fVar9 = param_2[2] - param_4[2];
  fVar10 = fVar7 * fVar7 + fVar5 * fVar5 + fVar9 * fVar9;
  fVar6 = fVar5;
  fVar11 = fVar7;
  fVar8 = fVar9;
  if ((fVar10 != 1.0) &&
     (fVar6 = DAT_1468b5d90, fVar11 = DAT_1468b5d94, fVar8 = DAT_1468b5d98, 1e-08 <= fVar10)) {
    auVar4 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
    fVar8 = auVar4._0_4_;
    fVar8 = fVar8 + fVar8 * (0.5 - fVar10 * 0.5 * fVar8 * fVar8);
    fVar8 = fVar8 + fVar8 * (0.5 - fVar10 * 0.5 * fVar8 * fVar8);
    fVar6 = fVar5 * fVar8;
    fVar11 = fVar7 * fVar8;
    fVar8 = fVar9 * fVar8;
  }
  fVar6 = fVar6 * *param_5 + fVar11 * param_5[1] + fVar8 * param_5[2];
  if ((fVar10 <= param_7) && (param_6 <= fVar6)) goto LAB_142d2c0ba;
  (**(code **)(*param_3 + 0x6c8))(param_3,&local_118);
  lVar1 = param_3[0x2d];
  local_f8 = (float)DAT_1464aa798;
  local_f4 = DAT_1464aa798._4_4_;
  local_f0 = DAT_1464aa7a0;
  if (local_108 <= local_104) {
    local_108 = local_104;
  }
  if (lVar1 == 0) {
    local_138 = DAT_1468b5d90;
    fStack_134 = DAT_1468b5d94;
    local_130 = DAT_1468b5d98;
  }
  else {
    local_138 = *(float *)(lVar1 + 0x220);
    fStack_134 = *(float *)(lVar1 + 0x224);
    local_130 = *(float *)(lVar1 + 0x228);
  }
  fVar11 = param_5[1];
  fVar8 = *param_5;
  local_128 = local_138;
  fStack_124 = fStack_134;
  local_120 = local_130;
  fVar5 = fVar8 * fVar8 + fVar11 * fVar11;
  if (fVar5 == 1.0) {
    if (param_5[2] == 0.0) {
      local_118 = *(undefined8 *)param_5;
      local_110 = param_5[2];
      fVar7 = (float)local_118;
      fVar9 = local_110;
      fVar10 = (float)((ulonglong)local_118 >> 0x20);
    }
    else {
LAB_142d2bf4e:
      fVar7 = fVar8;
      fVar9 = 0.0;
      fVar10 = fVar11;
    }
  }
  else {
    fVar7 = DAT_1468b5d90;
    fVar9 = DAT_1468b5d98;
    fVar10 = DAT_1468b5d94;
    if (1e-08 <= fVar5) {
      auVar4 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar7 = auVar4._0_4_;
      fVar7 = fVar7 + fVar7 * (0.5 - fVar5 * 0.5 * fVar7 * fVar7);
      fVar7 = fVar7 + fVar7 * (0.5 - fVar5 * 0.5 * fVar7 * fVar7);
      fVar8 = fVar8 * fVar7;
      fVar11 = fVar11 * fVar7;
      goto LAB_142d2bf4e;
    }
  }
  uVar3 = 0;
  local_e8[0] = local_138;
  local_e8[1] = fStack_134;
  local_e8[2] = local_130;
  local_d0 = (DAT_1464aa798._4_4_ * fVar9 - DAT_1464aa7a0 * fVar10) * local_108;
  local_e8[3] = local_138 - local_d0;
  local_d0 = local_d0 + local_138;
  local_cc = (DAT_1464aa7a0 * fVar7 - (float)DAT_1464aa798 * fVar9) * local_108;
  local_c0 = fStack_134 + fVar10 * local_108;
  local_c8 = ((float)DAT_1464aa798 * fVar10 - DAT_1464aa798._4_4_ * fVar7) * local_108;
  local_d8 = fStack_134 - local_cc;
  local_cc = local_cc + fStack_134;
  local_b4 = fStack_134 - fVar10 * local_108;
  local_d4 = local_130 - local_c8;
  local_c8 = local_c8 + local_130;
  local_c4 = local_138 + fVar7 * local_108;
  local_b8 = local_138 - fVar7 * local_108;
  local_bc = local_130 + fVar9 * local_108;
  local_b0 = local_130 - fVar9 * local_108;
  while( true ) {
    local_148 = param_5;
    local_140 = param_6 * param_6;
    cVar2 = FUN_142d2c4e0(local_e8 + (longlong)(int)uVar3 * 3,&local_f8,local_100,param_4);
    if (cVar2 != '\0') break;
    uVar3 = uVar3 + 1;
    if (4 < uVar3) {
      return 0;
    }
  }
LAB_142d2c0ba:
  *param_1 = fVar6;
  return 1;
}



// FUNCTION 142d2c100 FUN_142d2c100 body=979 status=ok
// SIG undefined FUN_142d2c100(void)

undefined8
FUN_142d2c100(float *param_1,float *param_2,longlong *param_3,longlong param_4,float *param_5,
             float param_6,float param_7,float param_8,float param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  
  (**(code **)(*param_3 + 0x6c8))(param_3,&local_c8,&local_b8);
  if (local_c8 * param_5[2] + fStack_c4 * param_5[6] +
      (fStack_c0 + local_b0) * param_5[10] + param_5[0xe] * 1.0 < -param_6) {
    return 0;
  }
  if (param_6 < local_c8 * param_5[2] + fStack_c4 * param_5[6] +
                (fStack_c0 - local_b0) * param_5[10] + param_5[0xe] * 1.0) {
    return 0;
  }
  fVar6 = *param_2 * *param_5 + param_2[1] * param_5[4] +
          param_2[2] * param_5[8] + param_5[0xc] * 1.0;
  fVar7 = *param_2 * param_5[1] + param_2[1] * param_5[5] +
          param_2[2] * param_5[9] + param_5[0xd] * 1.0;
  fVar5 = fVar7 * fVar7 + fVar6 * fVar6;
  fVar3 = fVar6;
  if ((fVar5 != 1.0) && (fVar3 = DAT_1468b5d90, 1e-08 <= fVar5)) {
    auVar4 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    fVar3 = auVar4._0_4_;
    fVar3 = fVar3 + fVar3 * (0.5 - fVar5 * 0.5 * fVar3 * fVar3);
    fVar3 = fVar6 * (fVar3 + fVar3 * (0.5 - fVar5 * 0.5 * fVar3 * fVar3));
  }
  if (fVar3 < param_9) {
    return 0;
  }
  if ((param_4 != 0) && ((*(byte *)(param_4 + 0x734) & 1) != 0)) {
    fVar3 = -local_b8;
    fVar2 = -local_b4;
    fVar1 = -local_b0;
    fVar5 = 0.0;
    if ((fVar6 < fVar3) || (fVar3 = local_b8, local_b8 < fVar6)) {
      fVar5 = (fVar6 - fVar3) * (fVar6 - fVar3);
    }
    if ((fVar7 < fVar2) || (fVar2 = local_b4, local_b4 < fVar7)) {
      fVar5 = fVar5 + (fVar7 - fVar2) * (fVar7 - fVar2);
    }
    if (fVar1 <= 0.0) {
      if (0.0 <= local_b0) goto LAB_142d2c44e;
    }
    else {
      fVar1 = -fVar1;
    }
    fVar5 = fVar5 + fVar1 * fVar1;
  }
LAB_142d2c44e:
  if ((fVar5 <= param_8) && ((param_7 <= 0.0 || (param_7 <= fVar5)))) {
    if (fVar5 <= 0.0) {
      *param_1 = 3.4028235e+38;
      return 1;
    }
    *param_1 = 1.0 / fVar5;
    return 1;
  }
  return 0;
}



// FUNCTION 142d2c4e0 FUN_142d2c4e0 body=784 status=ok
// SIG undefined FUN_142d2c4e0(void)

ulonglong FUN_142d2c4e0(undefined8 *param_1,undefined8 *param_2,float param_3,undefined8 *param_4,
                       float *param_5,float param_6)

{
  float fVar1;
  uint3 uVar2;
  ulonglong uVar3;
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
  float fStack_e4;
  float fStack_d4;
  
  fVar7 = (float)*param_2;
  fVar4 = *(float *)(param_2 + 1);
  fVar5 = (float)*(undefined8 *)param_5;
  fVar13 = (float)*param_1 - (float)*param_4;
  fVar8 = *(float *)(param_1 + 1) - *(float *)(param_4 + 1);
  fVar1 = param_5[2];
  uVar3 = (ulonglong)(uint)fVar1;
  fStack_d4 = (float)((ulonglong)*param_2 >> 0x20);
  fStack_e4 = (float)((ulonglong)*(undefined8 *)param_5 >> 0x20);
  fVar11 = (float)((ulonglong)*param_1 >> 0x20) - (float)((ulonglong)*param_4 >> 0x20);
  fVar9 = fVar7 * fVar5 + fStack_d4 * fStack_e4 + fVar1 * fVar4;
  fVar10 = fVar9 * fVar9 - param_6;
  fVar5 = fVar13 * fVar5 + fVar11 * fStack_e4 + fVar8 * fVar1;
  fVar12 = fVar5 * fVar9 - (fVar13 * fVar7 + fVar11 * fStack_d4 + fVar8 * fVar4) * param_6;
  fVar12 = fVar12 + fVar12;
  fVar5 = fVar12 * fVar12 -
          (fVar5 * fVar5 - (fVar11 * fVar11 + fVar13 * fVar13 + fVar8 * fVar8) * param_6) * fVar10 *
          4.0;
  if (0.0 < fVar5) {
    fVar5 = SQRT(fVar5);
    uVar2 = (uint3)((uint)fVar1 >> 8);
    uVar3 = (ulonglong)uVar2 << 8;
    fVar10 = 0.5 / fVar10;
    fVar6 = (-fVar12 - fVar5) * fVar10;
    if (0.0 <= (fStack_d4 * fVar6 + fVar11) * fStack_e4 + (fVar7 * fVar6 + fVar13) * *param_5 +
               (fVar4 * fVar6 + fVar8) * fVar1) {
      uVar3 = CONCAT71((uint7)uVar2,1);
    }
    else if (fVar9 <= 0.0) {
      fVar6 = -3.4028235e+38;
    }
    else {
      fVar6 = 3.4028235e+38;
    }
    fVar10 = (fVar5 - fVar12) * fVar10;
    if ((fStack_d4 * fVar10 + fVar11) * fStack_e4 + (fVar7 * fVar10 + fVar13) * *param_5 +
        (fVar4 * fVar10 + fVar8) * fVar1 < 0.0) {
      if (fVar9 <= 0.0) {
        fVar10 = -3.4028235e+38;
      }
      else {
        fVar10 = 3.4028235e+38;
      }
      if ((char)uVar3 == '\0') goto LAB_142d2c7ad;
    }
    fVar4 = fVar10;
    if (fVar10 <= fVar6) {
      fVar4 = fVar6;
    }
    if (-param_3 <= fVar4) {
      if (fVar6 <= fVar10) {
        fVar10 = fVar6;
      }
      if (fVar10 <= param_3) {
        return CONCAT71((int7)(uVar3 >> 8),1);
      }
    }
  }
LAB_142d2c7ad:
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 142d2c7f0 FUN_142d2c7f0 body=364 status=ok
// SIG undefined FUN_142d2c7f0(void)

void FUN_142d2c7f0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 != 0) {
    iVar6 = (int)param_1[1];
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + iVar1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,8>_>,FDefaultAllocator>::ResizeTo()
      ;
      iVar6 = (int)param_1[1];
    }
    puVar5 = (uint *)*param_2;
    puVar4 = (uint *)((longlong)iVar6 * 0x80 + *param_1);
    puVar3 = puVar4 + 0xf;
    iVar6 = iVar1;
    do {
      *puVar4 = *puVar4 ^ (*puVar4 ^ *puVar5) & 1;
      uVar2 = (*puVar4 ^ *puVar5) & 2 ^ *puVar4;
      *puVar4 = uVar2;
      uVar2 = (uVar2 ^ *puVar5) & 4 ^ uVar2;
      *puVar4 = uVar2;
      *puVar4 = (uVar2 ^ *puVar5) & 8 ^ uVar2;
      puVar3[-0xb] = 0;
      puVar3[-10] = 0;
      puVar3[-9] = 0;
      puVar3[-8] = 0;
      puVar3[-3] = 0;
      puVar3[-2] = 0;
      puVar3[-1] = 0;
      puVar3[0] = 0;
      puVar3[1] = 0xffffffff;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      *(undefined ***)(puVar3 + -0xd) = &PTR_FUN_14413ebc8;
      *(char *)(puVar3 + 9) = (char)puVar5[0x18];
      *(undefined1 *)((longlong)puVar3 + 0x25) = *(undefined1 *)((longlong)puVar5 + 0x61);
      puVar3[10] = puVar5[0x19];
      puVar3[0xb] = 0;
      puVar3[0xc] = 0;
      uVar2 = puVar5[0x1c];
      _Src = *(void **)(puVar5 + 0x1a);
      puVar3[0xd] = uVar2;
      if (uVar2 == 0) {
        puVar3[0xe] = 0;
      }
      else {
        TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(puVar3 + 0xb,uVar2,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(puVar3 + 0xb),_Src,(longlong)(int)uVar2 * 0x1c);
      }
      puVar4 = puVar4 + 0x20;
      *(undefined8 *)(puVar3 + 0xf) = *(undefined8 *)(puVar5 + 0x1e);
      puVar5 = puVar5 + 0x20;
      puVar3 = puVar3 + 0x20;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar1;
  }
  return;
}



// FUNCTION 142d2c960 FUN_142d2c960 body=631 status=ok
// SIG undefined FUN_142d2c960(void)

int * FUN_142d2c960(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  bool bVar11;
  
  iVar8 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x14) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  bVar11 = false;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  puVar1 = (uint *)(*param_1 + (longlong)iVar7 * 0x14);
  puVar3 = (undefined8 *)param_3[1];
  *puVar1 = *(uint *)*param_3;
  *(undefined8 *)(puVar1 + 1) = *puVar3;
  puVar1[3] = 0xffffffff;
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar10 != 1) {
    if (uVar10 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar5 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar1) * 4);
      if (iVar6 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar6 * 0x14) == *puVar1) goto LAB_142d2cabb;
          iVar6 = *(int *)(*param_1 + 0xc + (longlong)iVar6 * 0x14);
        } while (iVar6 != -1);
      }
    }
    iVar6 = -1;
LAB_142d2cabb:
    bVar11 = iVar6 != -1;
    if (bVar11) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar6 * 0x14),puVar1,0xc);
      TSparseArray<TSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar7,1);
      *param_2 = iVar6;
      goto LAB_142d2cbae;
    }
  }
  if (3 < uVar10) {
    uVar4 = (uVar10 >> 1) + 8;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar6 = 0x20;
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar8;
    }
    uVar4 = (uVar10 >> 1) + 7;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar9 = '\0';
    }
    else {
      cVar9 = '\x1f' - (char)iVar8;
    }
    iVar8 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar10 = (int)param_1[9] - 1U & *puVar1;
    puVar1[4] = uVar10;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    puVar1[3] = *(uint *)((longlong)plVar5 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         iVar7;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<unsigned_int,FMeshSectionInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FMeshSectionInfo,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142d2cbae:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 142d2cbe0 FUN_142d2cbe0 body=638 status=ok
// SIG undefined FUN_142d2cbe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_142d2cbe0(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  uint uStack_d0;
  int iStack_cc;
  int local_c8;
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  longlong local_b8;
  int iStack_b0;
  uint uStack_ac;
  uint *puStack_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int iStack_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_88 = 0;
  local_80 = 0;
  puStack_a8 = (uint *)(param_1 + 0x210);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  iVar1 = *(int *)(param_1 + 0x220);
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 1;
  local_d8._4_4_ = 0;
  uStack_d0 = 0;
  if (iVar1 != 0) {
    puVar8 = *(uint **)(param_1 + 0x218);
    if (*(uint **)(param_1 + 0x218) == (uint *)0x0) {
      puVar8 = puStack_a8;
    }
    uVar2 = *puVar8;
    local_e8._0_4_ = 0;
    uStack_d0 = 0;
    while (uVar2 == 0) {
      lVar6 = (longlong)(int)local_e8;
      uStack_d0 = uStack_d0 + 0x20;
      iVar5 = (int)local_e8 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_e8;
      local_e8._0_4_ = iVar5;
      if (bVar3) goto LAB_142d2cce4;
      uVar2 = puVar8[lVar6 + 1];
    }
    local_e8._4_4_ = -uVar2 & uVar2;
    iVar5 = 0x1f;
    if (local_e8._4_4_ != 0) {
      for (; local_e8._4_4_ >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (local_e8._4_4_ == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    local_d8._4_4_ = (uStack_d0 - iVar5) + 0x1f;
    if (iVar1 < local_d8._4_4_) {
LAB_142d2cce4:
      local_d8._4_4_ = iVar1;
    }
  }
  uStack_a0 = 0xffffffff;
  iStack_9c = local_d8._4_4_;
  iStack_98 = uStack_d0;
  iStack_b0 = (int)local_e8;
  uStack_ac = local_e8._4_4_;
  iStack_e0 = (int)local_e8;
  uStack_dc = local_e8._4_4_;
  local_c8 = uStack_d0;
  uStack_d0 = 0xffffffff;
  iStack_cc = local_d8._4_4_;
  bVar3 = local_d8._4_4_ < iVar1;
  local_e8 = param_1;
  local_b8 = param_1;
  local_d8 = puStack_a8;
  if (bVar3) {
    do {
      lVar6 = local_e8;
      lVar9 = (longlong)iStack_cc * 0x20;
      lVar7 = *(longlong *)(local_e8 + 0x200);
      if (*(longlong *)(local_e8 + 0x200) == 0) {
        lVar7 = local_e8;
      }
      piVar4 = (int *)TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindId
                                (&local_88,local_c0,lVar7 + lVar9);
      if (*piVar4 == -1) {
        iVar1 = (int)param_2[1];
        lVar7 = *(longlong *)(lVar6 + 0x200);
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
        }
        if (lVar7 == 0) {
          lVar7 = lVar6;
        }
        FString::FString((longlong)iVar1 * 0x10 + *param_2,lVar7 + lVar9);
        lVar7 = *(longlong *)(lVar6 + 0x200);
        if (*(longlong *)(lVar6 + 0x200) == 0) {
          lVar7 = lVar6;
        }
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  (&local_88,local_bc,lVar7 + lVar9,0);
      }
      uStack_d0 = uStack_d0 & ~uStack_dc;
      FUN_1406e9690(&iStack_e0);
    } while (iStack_cc < (int)local_d8[4]);
  }
  lVar6 = param_2[1];
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_88);
  return (int)lVar6;
}



// FUNCTION 142d2ce60 HeapSortInternal<FAnimSyncMarker,FIdentityFunctor,TDereferenceWrapper<FAnimSyncMarker,TLess<FAnimSyncMarker>_>_> body=451 status=ok
// SIG undefined HeapSortInternal<FAnimSyncMarker,FIdentityFunctor,TDereferenceWrapper<FAnimSyncMarker,TLess<FAnimSyncMarker>_>_>(void)

void AlgoImpl::
     HeapSortInternal<FAnimSyncMarker,FIdentityFunctor,TDereferenceWrapper<FAnimSyncMarker,TLess<FAnimSyncMarker>_>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar7 = (param_2 + -2) / 2;
  if (-1 < iVar7) {
    iVar8 = iVar7 * 2 + 1;
    iVar12 = iVar8;
    iVar13 = iVar7;
joined_r0x000142d2ce8a:
    do {
      if (iVar8 < param_2) {
        iVar10 = iVar7 * 2 + 1;
        iVar8 = iVar7 * 2 + 2;
        iVar11 = iVar10;
        if ((iVar8 < param_2) &&
           (fVar4 = *(float *)((longlong)param_1 + (longlong)iVar10 * 0xc + 8),
           pfVar3 = (float *)((longlong)param_1 + (longlong)iVar8 * 0xc + 8), iVar11 = iVar8,
           *pfVar3 <= fVar4 && fVar4 != *pfVar3)) {
          iVar11 = iVar10;
        }
        puVar9 = (undefined8 *)((longlong)param_1 + (longlong)iVar7 * 0xc);
        fVar4 = *(float *)((longlong)param_1 + (longlong)iVar11 * 0xc + 8);
        puVar1 = (undefined8 *)((longlong)param_1 + (longlong)iVar11 * 0xc);
        if (*(float *)(puVar9 + 1) <= fVar4 && fVar4 != *(float *)(puVar9 + 1)) {
          if (puVar9 != puVar1) {
            uVar5 = *puVar9;
            uVar6 = *(undefined4 *)(puVar9 + 1);
            *puVar9 = *puVar1;
            *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar1 + 1);
            *puVar1 = uVar5;
            *(undefined4 *)(puVar1 + 1) = uVar6;
          }
          iVar8 = iVar11 * 2 + 1;
          iVar7 = iVar11;
          goto joined_r0x000142d2ce8a;
        }
      }
      iVar8 = iVar12 + -2;
      iVar7 = iVar13 + -1;
      iVar12 = iVar8;
      iVar13 = iVar7;
    } while (-1 < iVar7);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar9 = (undefined8 *)((longlong)param_1 + (longlong)param_2 * 0xc);
    do {
      if (param_1 != puVar9) {
        uVar5 = *param_1;
        uVar6 = *(undefined4 *)(param_1 + 1);
        *param_1 = *puVar9;
        *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar9 + 1);
        *puVar9 = uVar5;
        *(undefined4 *)(puVar9 + 1) = uVar6;
      }
      iVar7 = 0;
      if (1 < param_2) {
        do {
          iVar8 = iVar7 * 2 + 1;
          iVar13 = iVar7 * 2 + 2;
          iVar12 = iVar8;
          if ((iVar13 < param_2) &&
             (fVar4 = *(float *)((longlong)param_1 + (longlong)iVar8 * 0xc + 8),
             pfVar3 = (float *)((longlong)param_1 + (longlong)iVar13 * 0xc + 8), iVar12 = iVar13,
             *pfVar3 <= fVar4 && fVar4 != *pfVar3)) {
            iVar12 = iVar8;
          }
          puVar1 = (undefined8 *)((longlong)param_1 + (longlong)iVar7 * 0xc);
          fVar4 = *(float *)((longlong)param_1 + (longlong)iVar12 * 0xc + 8);
          puVar2 = (undefined8 *)((longlong)param_1 + (longlong)iVar12 * 0xc);
          if (fVar4 < *(float *)(puVar1 + 1) || fVar4 == *(float *)(puVar1 + 1)) break;
          if (puVar1 != puVar2) {
            uVar5 = *puVar1;
            uVar6 = *(undefined4 *)(puVar1 + 1);
            *puVar1 = *puVar2;
            *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar2 + 1);
            *puVar2 = uVar5;
            *(undefined4 *)(puVar2 + 1) = uVar6;
          }
          iVar7 = iVar12;
        } while (iVar12 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar9 = (undefined8 *)((longlong)puVar9 + -0xc);
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142d2d030 IntroSortInternal<FAnimSyncMarker,FIdentityFunctor,TDereferenceWrapper<FAnimSyncMarker,TLess<FAnimSyncMarker>_>_> body=805 status=ok
// SIG undefined IntroSortInternal<FAnimSyncMarker,FIdentityFunctor,TDereferenceWrapper<FAnimSyncMarker,TLess<FAnimSyncMarker>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FAnimSyncMarker,FIdentityFunctor,TDereferenceWrapper<FAnimSyncMarker,TLess<FAnimSyncMarker>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  float *pfVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar9;
  undefined8 *puVar11;
  longlong *plVar12;
  float fVar13;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  undefined8 *puVar8;
  undefined8 *puVar10;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
    lStack_330 = param_1 + param_2 * 0xc + -0xc;
    fVar13 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar13 = fVar13 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar13 = ::_guard_xfg_dispatch_icall_nop(fVar13);
    local_328 = (undefined4)(longlong)(fVar13 + fVar13);
    ::_guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar12 = &local_338;
    do {
      puVar7 = (undefined8 *)*plVar12;
      puVar6 = (undefined8 *)plVar12[1];
      lVar2 = plVar12[2];
      local_348._0_4_ = (int)lVar2;
      lVar5 = ((longlong)puVar6 - (longlong)puVar7) / 0xc + 1;
      puVar11 = puVar7;
      if ((int)local_348 != 0) {
LAB_142d2d120:
        if (8 < lVar5) {
          if (lVar5 < 0) {
            lVar5 = lVar5 + 1;
          }
          puVar7 = (undefined8 *)((longlong)puVar11 + (lVar5 >> 1) * 0xc);
          if (puVar7 != puVar11) {
            uVar3 = *puVar7;
            uVar4 = *(undefined4 *)(puVar7 + 1);
            *puVar7 = *puVar11;
            *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar11 + 1);
            *puVar11 = uVar3;
            *(undefined4 *)(puVar11 + 1) = uVar4;
          }
          puVar9 = (undefined8 *)((longlong)puVar6 + 0xc);
          puVar7 = puVar11;
LAB_142d2d170:
          puVar8 = puVar7;
          puVar7 = (undefined8 *)((longlong)puVar8 + 0xc);
          if (puVar7 <= puVar6) goto code_r0x000142d2d179;
          goto LAB_142d2d186;
        }
        for (; puVar7 = puVar11, puVar9 = puVar11, puVar11 < puVar6;
            puVar6 = (undefined8 *)((longlong)puVar6 + -0xc)) {
          while (puVar8 = (undefined8 *)((longlong)puVar9 + 0xc), puVar8 <= puVar6) {
            pfVar1 = (float *)((longlong)puVar9 + 0x14);
            puVar9 = puVar8;
            if (*(float *)(puVar7 + 1) < *pfVar1) {
              puVar7 = puVar8;
            }
          }
          if (puVar7 != puVar6) {
            uVar3 = *puVar7;
            uVar4 = *(undefined4 *)(puVar7 + 1);
            *puVar7 = *puVar6;
            *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar6 + 1);
            *puVar6 = uVar3;
            *(undefined4 *)(puVar6 + 1) = uVar4;
          }
        }
        goto LAB_142d2d2ac;
      }
LAB_142d2d29d:
      local_348 = lVar2;
      HeapSortInternal<FAnimSyncMarker,FIdentityFunctor,TDereferenceWrapper<FAnimSyncMarker,TLess<FAnimSyncMarker>_>_>
                (puVar7,lVar5,param_3,param_4);
LAB_142d2d2ac:
      plVar12 = plVar12 + -3;
    } while (&local_338 <= plVar12);
  }
  return;
code_r0x000142d2d179:
  if (*(float *)((longlong)puVar8 + 0x14) < *(float *)(puVar11 + 1) ||
      *(float *)((longlong)puVar8 + 0x14) == *(float *)(puVar11 + 1)) goto LAB_142d2d170;
LAB_142d2d186:
  do {
    puVar10 = puVar9;
    puVar9 = (undefined8 *)((longlong)puVar10 + -0xc);
    if (puVar9 <= puVar11) break;
  } while (*(float *)(puVar11 + 1) < *(float *)((longlong)puVar10 + -4) ||
           *(float *)(puVar11 + 1) == *(float *)((longlong)puVar10 + -4));
  if (puVar7 <= puVar9) {
    if (puVar7 != puVar9) {
      uVar3 = *puVar7;
      uVar4 = *(undefined4 *)((longlong)puVar8 + 0x14);
      *puVar7 = *puVar9;
      *(undefined4 *)((longlong)puVar8 + 0x14) = *(undefined4 *)((longlong)puVar10 + -4);
      *puVar9 = uVar3;
      *(undefined4 *)((longlong)puVar10 + -4) = uVar4;
    }
    goto LAB_142d2d170;
  }
  if (puVar11 != puVar9) {
    uVar3 = *puVar11;
    uVar4 = *(undefined4 *)(puVar11 + 1);
    *puVar11 = *puVar9;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)((longlong)puVar10 + -4);
    *puVar9 = uVar3;
    *(undefined4 *)((longlong)puVar10 + -4) = uVar4;
  }
  local_348._0_4_ = (int)local_348 + -1;
  lVar5 = (longlong)puVar9 + (-0xc - (longlong)puVar11);
  lVar5 = lVar5 / 6 + (lVar5 >> 0x3f);
  if ((lVar5 >> 1) - (lVar5 >> 0x3f) < ((longlong)puVar6 - (longlong)puVar7) / 0xc) {
    if (puVar7 < puVar6) {
      *plVar12 = (longlong)puVar7;
      plVar12[1] = (longlong)puVar6;
      *(int *)(plVar12 + 2) = (int)local_348;
      plVar12 = plVar12 + 3;
    }
    if (puVar9 <= (undefined8 *)((longlong)puVar11 + 0xcU)) goto LAB_142d2d2ac;
    puVar6 = puVar10 + -3;
    puVar7 = puVar11;
  }
  else {
    if ((undefined8 *)((longlong)puVar11 + 0xcU) < puVar9) {
      *plVar12 = (longlong)puVar11;
      plVar12[1] = (longlong)(puVar10 + -3);
      *(int *)(plVar12 + 2) = (int)local_348;
      plVar12 = plVar12 + 3;
    }
    if (puVar6 <= puVar7) goto LAB_142d2d2ac;
  }
  lVar5 = ((longlong)puVar6 - (longlong)puVar7) / 0xc + 1;
  puVar11 = puVar7;
  if ((int)local_348 == 0) goto LAB_142d2d29d;
  goto LAB_142d2d120;
}



// FUNCTION 142d2d360 NewTask<UGameplayTask_SpawnActor> body=157 status=ok
// SIG undefined NewTask<UGameplayTask_SpawnActor>(void)

longlong UGameplayTask::NewTask<UGameplayTask_SpawnActor>(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar2 = GetTransientPackage();
  FUN_1417846f0(uVar2,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar3 = UAISense_Damage::GetPrivateStaticClass();
  lVar4 = FUN_1417985e0(uVar3,uVar2,0,0,0,0,0,0,0);
  *(undefined8 *)(lVar4 + 0x30) = param_2;
  uVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  FUN_142b79770(lVar4,param_1,uVar1);
  return lVar4;
}



// FUNCTION 142d2d400 FUN_142d2d400 body=534 status=ok
// SIG undefined FUN_142d2d400(void)

int FUN_142d2d400(longlong *param_1)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  float *pfVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  byte bVar15;
  float fVar16;
  
  iVar1 = (int)param_1[1];
  lVar12 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  lVar4 = *param_1;
  uVar8 = 0;
  uVar9 = uVar8;
  uVar14 = uVar8;
  fVar16 = DAT_1466ad3e4;
  if (*(char *)(lVar4 + 0xcc) == '\0') {
LAB_142d2d556:
    if (*(float *)(lVar4 + 0x30) <= DAT_1466ad3e4) {
      bVar15 = 1;
      goto LAB_142d2d4a0;
    }
  }
  else {
    lVar3 = *(longlong *)(lVar4 + 0x160);
    lVar5 = (longlong)*(int *)(lVar4 + 0x168) * 0xa0 + lVar3;
    for (; lVar3 != lVar5; lVar3 = lVar3 + 0xa0) {
      if (*(char *)(lVar3 + 0xc) == '\0') goto LAB_142d2d556;
    }
  }
  bVar15 = 0;
LAB_142d2d4a0:
  do {
    iVar7 = (int)uVar8;
    uVar9 = uVar9 + 1;
    uVar8 = (ulonglong)(iVar7 + 1);
    if ((longlong)uVar9 < lVar12) {
      pfVar11 = (float *)(*param_1 + 0x30 + uVar9 * 0x170);
      do {
        if (*(char *)(pfVar11 + 0x27) == '\0') {
LAB_142d2d569:
          if (fVar16 < *pfVar11) goto LAB_142d2d502;
          bVar2 = 1;
        }
        else {
          lVar4 = *(longlong *)(pfVar11 + 0x4c);
          lVar3 = (longlong)(int)pfVar11[0x4e] * 0xa0 + lVar4;
          for (; lVar4 != lVar3; lVar4 = lVar4 + 0xa0) {
            if (*(char *)(lVar4 + 0xc) == '\0') goto LAB_142d2d569;
          }
LAB_142d2d502:
          bVar2 = 0;
        }
        if (bVar15 != bVar2) break;
        uVar8 = (ulonglong)((int)uVar8 + 1);
        uVar9 = uVar9 + 1;
        pfVar11 = pfVar11 + 0x5c;
      } while ((longlong)uVar9 < lVar12);
    }
    iVar10 = (int)uVar8 - iVar7;
    if (bVar15 == 0) {
      if (iVar10 != 0) {
        plVar6 = (longlong *)((longlong)iVar7 * 0x170 + 0xa0 + *param_1);
        do {
          if (plVar6[0x18] != 0) {
            FMemory::Free();
          }
          if (*plVar6 != 0) {
            FMemory::Free();
          }
          if (plVar6[-4] != 0) {
            FMemory::Free();
          }
          plVar6 = plVar6 + 0x2e;
          iVar10 = iVar10 + -1;
          fVar16 = DAT_1466ad3e4;
        } while (iVar10 != 0);
      }
    }
    else {
      iVar13 = (int)uVar14;
      if (iVar13 != iVar7) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar13 * 0x170 + *param_1),
                   (void *)((longlong)iVar7 * 0x170 + *param_1),(longlong)iVar10 * 0x170);
      }
      uVar14 = (ulonglong)(uint)(iVar13 + iVar10);
    }
    bVar15 = bVar15 ^ 1;
    if (lVar12 <= (longlong)uVar9) {
      *(int *)(param_1 + 1) = (int)uVar14;
      return iVar1 - (int)uVar14;
    }
  } while( true );
}



// FUNCTION 142d2d620 FUN_142d2d620 body=970 status=ok
// SIG undefined FUN_142d2d620(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142d2d620(longlong param_1,byte param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  uint local_118 [2];
  undefined1 local_110 [192];
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  lVar5 = FUN_142bbd600();
  if (((lVar5 == 0) || (*(longlong *)(lVar5 + 8) == 0)) ||
     (lVar7 = *(longlong *)(*(longlong *)(lVar5 + 8) + 0x10), lVar6 = FUN_142dfc210(),
     lVar7 != lVar6)) {
    return 0;
  }
  lVar7 = *(longlong *)(lVar5 + 8);
  lVar13 = 0;
  bVar8 = *(byte *)(lVar7 + 0x2b) >> 1 & 1;
  lVar6 = lVar13;
  if ((*(int *)(param_1 + 400) != 0) && ((int)(uint)param_2 < *(int *)(param_1 + 0x1a0))) {
    lVar6 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (ulonglong)param_2 * 2) +
            *(longlong *)(param_1 + 0x188);
  }
  lVar2 = (ulonglong)bVar8 * 4;
  lVar6 = lVar6 + lVar2;
  if (lVar6 == 0) {
    return 0;
  }
  if (bVar8 != 0) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + (ulonglong)param_2 * 8);
  }
  cVar3 = FUN_142cd03f0(lVar7,lVar6,param_3);
  if (((cVar3 == '\0') ||
      (FUN_142bc3660(param_1,param_2), (*(byte *)(*(longlong *)(param_1 + 0x180) + 0x48) & 1) == 0))
     || (cVar3 = FUN_142bc1e70(param_1,param_2), cVar3 == '\0')) {
    return 1;
  }
  lVar7 = *(longlong *)(param_1 + 0x120);
  if (((lVar7 != 0) || (lVar7 = FUN_1423407b0(param_1), lVar7 != 0)) &&
     (lVar7 = *(longlong *)(lVar7 + 0x150), lVar7 != 0)) {
    lVar6 = FUN_142c32730();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_142d2d78d;
  }
  lVar7 = lVar13;
LAB_142d2d78d:
  UAISystem::CreateBlackboardDataToComponentsIterator
            (lVar7,local_118,*(undefined8 *)(param_1 + 0x180));
  do {
    uVar12 = (ulonglong)local_118[0];
    do {
      iVar11 = (int)uVar12;
      if (iVar11 < local_48) {
        puVar10 = local_110;
        if (local_50 != (undefined1 *)0x0) {
          puVar10 = local_50;
        }
        if (*(int *)(puVar10 + (longlong)iVar11 * 0x18 + 0x10) == -1) goto LAB_142d2d7db;
        bVar4 = true;
      }
      else {
LAB_142d2d7db:
        bVar4 = false;
      }
      if (!bVar4) {
        if (local_50 == (undefined1 *)0x0) {
          return 1;
        }
        FMemory::Free(local_50);
        return 1;
      }
      puVar10 = local_110;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
      lVar7 = FWeakObjectPtr::Get(**(longlong **)(puVar10 + (longlong)iVar11 * 0x18) +
                                  ((longlong)*(int *)(puVar10 + (longlong)iVar11 * 0x18 + 0x10) * 3
                                  + 1) * 8);
      if ((lVar7 != 0) && (cVar3 = FUN_142bcaf00(param_1,lVar7), cVar3 != '\0')) {
        lVar6 = FUN_142bbbf70(lVar7);
        if (lVar6 == 0) {
          bVar8 = 0xff;
        }
        else {
          bVar8 = UBlackboardData::GetKeyID(lVar6,lVar5);
        }
        if (bVar8 != 0xff) {
          lVar6 = *(longlong *)(lVar5 + 8);
          if ((*(byte *)(lVar6 + 0x2b) & 2) != 0) {
            lVar6 = *(longlong *)(*(longlong *)(lVar7 + 0x1a8) + (ulonglong)(uint)bVar8 * 8);
          }
          lVar9 = lVar13;
          if ((*(int *)(lVar7 + 400) != 0) && ((int)(uint)bVar8 < *(int *)(lVar7 + 0x1a0))) {
            lVar9 = (ulonglong)*(ushort *)(*(longlong *)(lVar7 + 0x198) + (ulonglong)bVar8 * 2) +
                    *(longlong *)(lVar7 + 0x188);
          }
          FUN_142cd03f0(lVar6,lVar9 + lVar2,param_3);
          FUN_142bc3660(lVar7,bVar8);
        }
      }
      puVar10 = local_110;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
      lVar7 = (longlong)(int)local_118[0];
      iVar11 = *(int *)(puVar10 + lVar7 * 0x18 + 0x14);
      *(int *)(puVar10 + lVar7 * 0x18 + 0x10) = iVar11;
      puVar1 = (undefined8 *)(puVar10 + lVar7 * 0x18);
      while (iVar11 != -1) {
        *(undefined4 *)((longlong)puVar1 + 0x14) =
             *(undefined4 *)(*(longlong *)*puVar1 + 0x10 + (longlong)iVar11 * 0x18);
        lVar7 = *(longlong *)*puVar1;
        local_120 = *(undefined4 *)(lVar7 + (longlong)iVar11 * 0x18);
        local_11c = *(undefined4 *)(lVar7 + 4 + (longlong)iVar11 * 0x18);
        local_128 = *(undefined4 *)(puVar1 + 1);
        local_124 = *(undefined4 *)((longlong)puVar1 + 0xc);
        cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_120,&local_128);
        if (cVar3 != '\0') break;
        iVar11 = *(int *)((longlong)puVar1 + 0x14);
        *(int *)(puVar1 + 2) = iVar11;
      }
      uVar12 = (ulonglong)(int)local_118[0];
      puVar10 = local_110;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
    } while ((*(int *)(puVar10 + uVar12 * 0x18 + 0x10) != -1) ||
            (local_48 + -1 <= (int)local_118[0]));
    local_118[0] = local_118[0] + 1;
    UAISystem::FBlackboardDataToComponentsIterator::TryMoveIteratorToParentBlackboard(local_118);
  } while( true );
}



// FUNCTION 142d2d9f0 FUN_142d2d9f0 body=949 status=ok
// SIG undefined FUN_142d2d9f0(void)

void FUN_142d2d9f0(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  int local_98;
  int local_90;
  int local_8c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_50;
  longlong local_48;
  
  uVar17 = (ulonglong)(int)param_2;
  local_50 = uVar17;
  local_48 = param_1;
  if (0 < (int)param_2) {
    iVar19 = 1;
    puVar6 = (undefined8 *)(param_1 + 0x10);
    lVar18 = (uVar17 - 1 >> 1) + 1;
    do {
      if (iVar19 < (int)param_2) {
        if (*(int *)(puVar6 + -1) == 0) {
          puVar13 = &DAT_143f3eda8;
        }
        else {
          puVar13 = (undefined2 *)puVar6[-2];
        }
        if (*(int *)(puVar6 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*puVar6;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar13);
        if (iVar4 < 0) {
          puVar8 = (undefined8 *)((longlong)iVar19 * 0x10 + param_1);
          puVar12 = (undefined8 *)((longlong)(iVar19 + -1) * 0x10 + param_1);
          if (puVar12 != puVar8) {
            uVar25 = *(undefined4 *)((longlong)puVar8 + 4);
            uVar26 = *(undefined4 *)(puVar8 + 1);
            uVar23 = *(undefined4 *)((longlong)puVar8 + 0xc);
            uVar2 = *puVar12;
            uVar3 = puVar12[1];
            *(undefined4 *)puVar12 = *(undefined4 *)puVar8;
            *(undefined4 *)((longlong)puVar12 + 4) = uVar25;
            *(undefined4 *)(puVar12 + 1) = uVar26;
            *(undefined4 *)((longlong)puVar12 + 0xc) = uVar23;
            *puVar8 = uVar2;
            puVar8[1] = uVar3;
          }
        }
      }
      iVar19 = iVar19 + 2;
      puVar6 = puVar6 + 4;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  local_8c = 2;
  uVar15 = uVar17;
  if (2 < (int)param_2) {
    do {
      iVar19 = local_8c * 2;
      local_90 = 0;
      local_68 = 0;
      lVar18 = (longlong)local_8c * 2;
      lVar21 = (longlong)local_8c << 5;
      local_60 = lVar21;
      local_58 = lVar18;
      do {
        iVar4 = (int)uVar17 - local_90;
        if (iVar19 <= iVar4) {
          iVar4 = iVar19;
        }
        iVar22 = 0;
        local_98 = local_8c;
        if (0 < local_8c) {
          do {
            if (iVar4 <= local_98) break;
            lVar18 = 0;
            lVar21 = (longlong)local_98;
            if (local_98 - iVar22 != 0) {
              uVar17 = (longlong)(local_98 - iVar22);
              do {
                uVar15 = uVar17 >> 1;
                lVar1 = (longlong)iVar22 + uVar15 + lVar18;
                if (*(int *)(param_1 + 8 + lVar1 * 0x10) == 0) {
                  puVar13 = &DAT_143f3eda8;
                }
                else {
                  puVar13 = *(undefined2 **)(param_1 + lVar1 * 0x10);
                }
                if (*(int *)(param_1 + 8 + lVar21 * 0x10) == 0) {
                  puVar9 = &DAT_143f3eda8;
                }
                else {
                  puVar9 = *(undefined2 **)(param_1 + lVar21 * 0x10);
                }
                iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar13);
                if (-1 < iVar5) {
                  lVar18 = (ulonglong)((uint)uVar17 & 1) + uVar15 + lVar18;
                }
                uVar17 = uVar15;
              } while (uVar15 != 0);
            }
            uVar17 = 0;
            iVar22 = iVar22 + (int)lVar18;
            if (local_98 <= iVar22) break;
            uVar15 = (longlong)(iVar4 - local_98);
            if (iVar4 - local_98 != 0) {
              do {
                uVar16 = uVar15 >> 1;
                lVar18 = lVar21 + uVar16 + uVar17;
                if (*(int *)(param_1 + 8 + (longlong)iVar22 * 0x10) == 0) {
                  puVar13 = &DAT_143f3eda8;
                }
                else {
                  puVar13 = *(undefined2 **)(param_1 + (longlong)iVar22 * 0x10);
                }
                if (*(int *)(param_1 + 8 + lVar18 * 0x10) == 0) {
                  puVar9 = &DAT_143f3eda8;
                }
                else {
                  puVar9 = *(undefined2 **)(param_1 + lVar18 * 0x10);
                }
                iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar13);
                if (iVar5 < 0) {
                  uVar17 = (ulonglong)((uint)uVar15 & 1) + uVar16 + uVar17;
                }
                uVar15 = uVar16;
              } while (uVar16 != 0);
            }
            lVar18 = 0;
            iVar5 = (int)uVar17;
            if (iVar5 != 0) {
              iVar20 = (iVar5 - iVar22) + local_98;
              uVar17 = uVar17 & 0xffffffff;
              iVar14 = iVar20;
              do {
                iVar7 = (int)uVar17;
                uVar11 = iVar14 % iVar7;
                uVar17 = (ulonglong)uVar11;
                iVar14 = iVar7;
              } while (uVar11 != 0);
              uVar17 = 0;
              if (0 < iVar7) {
                do {
                  iVar14 = (int)uVar17;
                  plVar10 = (longlong *)((iVar22 + lVar18) * 0x10 + param_1);
                  local_78 = *plVar10;
                  *plVar10 = 0;
                  uStack_70 = (undefined4)plVar10[1];
                  uStack_6c = *(undefined4 *)((longlong)plVar10 + 0xc);
                  plVar10[1] = 0;
                  if (0 < (int)((longlong)iVar20 / (longlong)iVar7)) {
                    local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
                    uVar15 = (longlong)iVar20 / (longlong)iVar7 & 0xffffffff;
                    uVar25 = uStack_70;
                    uVar26 = uStack_6c;
                    do {
                      uVar16 = (longlong)((int)uVar17 + iVar5) % (longlong)iVar20;
                      uVar17 = uVar16 & 0xffffffff;
                      puVar6 = (undefined8 *)((longlong)((int)uVar16 + iVar22) * 0x10 + param_1);
                      uVar23 = (undefined4)local_78;
                      uVar24 = local_78._4_4_;
                      uStack_70 = uVar25;
                      uStack_6c = uVar26;
                      if (puVar6 != &local_78) {
                        uVar23 = *(undefined4 *)puVar6;
                        uVar24 = *(undefined4 *)((longlong)puVar6 + 4);
                        uStack_70 = *(undefined4 *)(puVar6 + 1);
                        uStack_6c = *(undefined4 *)((longlong)puVar6 + 0xc);
                        *(undefined4 *)puVar6 = (undefined4)local_78;
                        *(undefined4 *)((longlong)puVar6 + 4) = local_78._4_4_;
                        *(undefined4 *)(puVar6 + 1) = uVar25;
                        *(undefined4 *)((longlong)puVar6 + 0xc) = uVar26;
                      }
                      uVar15 = uVar15 - 1;
                      local_78._0_4_ = uVar23;
                      local_78._4_4_ = uVar24;
                      uVar25 = uStack_70;
                      uVar26 = uStack_6c;
                    } while (uVar15 != 0);
                    local_78 = CONCAT44(uVar24,uVar23);
                  }
                  if (local_78 != 0) {
                    FMemory::Free(local_78);
                  }
                  uVar11 = iVar14 + 1;
                  uVar17 = (ulonglong)uVar11;
                  lVar18 = lVar18 + 1;
                } while ((int)uVar11 < iVar7);
              }
            }
            local_98 = local_98 + iVar5;
            iVar22 = iVar22 + 1 + iVar5;
          } while (iVar22 < local_98);
          uVar17 = (ulonglong)param_2;
          lVar18 = local_58;
          lVar21 = local_60;
          uVar15 = local_50;
        }
        local_90 = local_90 + local_8c * 2;
        local_68 = local_68 + lVar18;
        param_1 = param_1 + lVar21;
      } while (local_68 < (longlong)uVar15);
      param_1 = local_48;
      local_8c = iVar19;
    } while (iVar19 < (int)uVar17);
  }
  return;
}



// FUNCTION 142d2ddb0 FUN_142d2ddb0 body=201 status=ok
// SIG undefined FUN_142d2ddb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142d2ddb0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_14587a3d8;
  puVar1 = (undefined8 *)operator_new();
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
    *(undefined4 *)(puVar1 + 4) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0;
    *(undefined4 *)(puVar1 + 5) = 0xffffffff;
    *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[7] = 0;
    *(undefined4 *)(puVar1 + 8) = 0xffffffff;
    *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x4c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x54) = _DAT_1468b5d90;
    *(undefined4 *)((longlong)puVar1 + 0x5c) = DAT_1468b5d98;
    puVar2 = puVar1;
  }
  param_1[0x8d] = puVar2;
  param_1[0x8c] = puVar2;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 8;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfb | 2;
  return param_1;
}



// FUNCTION 142d2de80 FUN_142d2de80 body=119 status=ok
// SIG undefined FUN_142d2de80(void)

longlong FUN_142d2de80(longlong param_1)

{
  FUN_142de2eb0();
  *(undefined8 *)(param_1 + 0x80) = 0;
  FUN_142de2eb0(param_1 + 0x98);
  FUN_142de2eb0(param_1 + 0x118);
  *(undefined1 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1a4) = 0x44000000;
  *(undefined4 *)(param_1 + 0x19c) = 0x42340000;
  *(undefined1 *)(param_1 + 0x1a8) = 1;
  *(undefined4 *)(param_1 + 0x1ac) = 0x44800000;
  *(undefined1 *)(param_1 + 0x1b0) = 1;
  return param_1;
}



// FUNCTION 142d2df30 FUN_142d2df30 body=190 status=ok
// SIG undefined FUN_142d2df30(void)

undefined8 * FUN_142d2df30(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_1[4] = 0;
  FUN_1426f4440(param_1 + 4,param_2[4],*(undefined4 *)(param_2 + 5),0,0);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)((longlong)param_1 + 0x39) = *(undefined1 *)((longlong)param_2 + 0x39);
  *(undefined8 *)((longlong)param_1 + 0x3c) = *(undefined8 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  return param_1;
}



// FUNCTION 142d2dff0 FUN_142d2dff0 body=576 status=ok
// SIG undefined FUN_142d2dff0(void)

undefined8 *
FUN_142d2dff0(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined4 *param_4,
             undefined4 param_5,undefined8 *param_6,undefined8 *param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  uVar7 = 0;
  *param_1 = param_2;
  param_1[1] = param_3;
  uVar6 = uVar7;
  if (param_3 != (longlong *)0x0) {
    uVar6 = FUN_140a63ba0(param_3);
  }
  param_1[2] = uVar6;
  if (param_3 != (longlong *)0x0) {
    uVar7 = (**(code **)(*param_3 + 0x148))(param_3);
  }
  param_1[3] = uVar7;
  uVar2 = *param_4;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 5) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_5;
  param_1[7] = *param_6;
  param_1[8] = param_6[1];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_6 + 2);
  *(undefined1 *)((longlong)param_1 + 0x49) = *(undefined1 *)((longlong)param_6 + 0x11);
  *(undefined1 *)((longlong)param_1 + 0x4a) = *(undefined1 *)((longlong)param_6 + 0x12);
  *(undefined1 *)((longlong)param_1 + 0x4b) = *(undefined1 *)((longlong)param_6 + 0x13);
  *(undefined1 *)((longlong)param_1 + 0x4c) = *(undefined1 *)((longlong)param_6 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0x4d) = *(undefined1 *)((longlong)param_6 + 0x15);
  *(undefined1 *)((longlong)param_1 + 0x4e) = *(undefined1 *)((longlong)param_6 + 0x16);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_6 + 3);
  *(undefined1 *)((longlong)param_1 + 0x54) = *(undefined1 *)((longlong)param_6 + 0x1c);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_6 + 4);
  *(undefined1 *)((longlong)param_1 + 0x5c) = *(undefined1 *)((longlong)param_6 + 0x24);
  *(undefined1 *)((longlong)param_1 + 0x5d) = *(undefined1 *)((longlong)param_6 + 0x25);
  param_1[0x10] = 0;
  iVar1 = *(int *)(param_6 + 10);
  puVar9 = (undefined8 *)param_6[9];
  *(int *)(param_1 + 0x11) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  }
  else {
    TArray<unsigned_int,TInlineAllocator<8,FDefaultAllocator>_>::ResizeForCopy
              (param_1 + 0xc,iVar1,0);
    if (puVar9 == (undefined8 *)0x0) {
      puVar9 = param_6 + 5;
    }
    puVar8 = (undefined8 *)param_1[0x10];
    if ((undefined8 *)param_1[0x10] == (undefined8 *)0x0) {
      puVar8 = param_1 + 0xc;
    }
    _guard_xfg_dispatch_icall_nop(puVar8,puVar9,(longlong)iVar1 << 2);
  }
  param_1[0x14] = 0;
  iVar1 = *(int *)(param_6 + 0xe);
  puVar9 = (undefined8 *)param_6[0xd];
  *(int *)(param_1 + 0x15) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  }
  else {
    TArray<unsigned_int,TInlineAllocator<4,FDefaultAllocator>_>::ResizeForCopy
              (param_1 + 0x12,iVar1,0);
    if (puVar9 == (undefined8 *)0x0) {
      puVar9 = param_6 + 0xb;
    }
    puVar8 = (undefined8 *)param_1[0x14];
    if ((undefined8 *)param_1[0x14] == (undefined8 *)0x0) {
      puVar8 = param_1 + 0x12;
    }
    _guard_xfg_dispatch_icall_nop(puVar8,puVar9,(longlong)iVar1 << 2);
  }
  uVar2 = *(undefined4 *)(param_7 + 1);
  param_1[0x16] = *param_7;
  *(undefined4 *)(param_1 + 0x17) = uVar2;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x1a,0,0x90);
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3f800000;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  return param_1;
}



// FUNCTION 142d2e230 FUN_142d2e230 body=254 status=ok
// SIG undefined FUN_142d2e230(void)

undefined8 * FUN_142d2e230(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 9) = 0x10000;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[7] = 0;
  *(undefined2 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x5c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4e) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x1a,0,0x90);
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3f800000;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  return param_1;
}



// FUNCTION 142d2e330 FUN_142d2e330 body=119 status=ok
// SIG undefined FUN_142d2e330(void)

undefined8 * FUN_142d2e330(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 2,0,0x90);
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  return param_1;
}



// FUNCTION 142d2e3b0 FUN_142d2e3b0 body=452 status=ok
// SIG undefined FUN_142d2e3b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_142d2e3b0(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  lVar5 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *param_1 = *(undefined8 *)(param_4 + 0x28);
  param_1[1] = *(undefined8 *)(param_4 + 0x110);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_4 + 0x118);
  *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)(param_4 + 0x11c);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_4 + 0x124);
  plVar1 = *(longlong **)(param_4 + 0x50);
  if ((plVar1 == (longlong *)0x0) ||
     ((plVar1[0x1f] == 0 && ((**(code **)(*plVar1 + 0x368))(plVar1), plVar1[0x1f] == 0)))) {
    uVar4 = FUN_142e0d0b0();
  }
  else {
    plVar1 = *(longlong **)(param_4 + 0x50);
    lVar3 = lVar5;
    if ((plVar1 == (longlong *)0x0) || (lVar3 = plVar1[0x1f], plVar1[0x1f] != 0)) {
      uVar4 = *(undefined8 *)(lVar3 + 0x10);
    }
    else {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      uVar4 = *(undefined8 *)(plVar1[0x1f] + 0x10);
    }
  }
  param_1[4] = uVar4;
  plVar1 = *(longlong **)(param_4 + 0x58);
  if ((plVar1 == (longlong *)0x0) ||
     ((plVar1[0x1f] == 0 && ((**(code **)(*plVar1 + 0x368))(plVar1), plVar1[0x1f] == 0)))) {
    uVar4 = FUN_142e49950();
  }
  else {
    plVar1 = *(longlong **)(param_4 + 0x58);
    if ((plVar1 != (longlong *)0x0) && (lVar5 = plVar1[0x1f], lVar5 == 0)) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar5 = plVar1[0x1f];
    }
    uVar4 = *(undefined8 *)(lVar5 + 0x10);
  }
  param_1[5] = uVar4;
  uVar4 = FWeakObjectPtr::Get(param_4 + 0xd4);
  param_1[6] = uVar4;
  uVar4 = *param_2;
  uVar2 = param_2[1];
  *(undefined4 *)(param_1 + 0xb) = param_3;
  param_1[7] = uVar4;
  param_1[8] = uVar2;
  if ((byte)(*(char *)(param_4 + 0x2f0) - 1U) < 2) {
    param_1[9] = *(undefined8 *)(param_4 + 0x2f8);
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_4 + 0x300);
    uVar6 = *(undefined4 *)(param_4 + 0x304);
  }
  else {
    param_1[9] = _DAT_1468b5d90;
    uVar6 = 0;
    *(undefined4 *)(param_1 + 10) = DAT_1468b5d98;
  }
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar6;
  return param_1;
}



// FUNCTION 142d2e580 FUN_142d2e580 body=89 status=ok
// SIG undefined FUN_142d2e580(void)

undefined8 * FUN_142d2e580(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  return param_1;
}



// FUNCTION 142d2e5e0 FUN_142d2e5e0 body=59 status=ok
// SIG undefined FUN_142d2e5e0(void)

undefined4 * FUN_142d2e5e0(undefined4 *param_1)

{
  FUN_142494900(param_1 + 0xd);
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xfe;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  return param_1;
}



// FUNCTION 142d2e640 FUN_142d2e640 body=13 status=ok
// SIG undefined FUN_142d2e640(void)

byte * FUN_142d2e640(byte *param_1)

{
  *param_1 = *param_1 & 0xfc;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 142d2e650 FUN_142d2e650 body=10 status=ok
// SIG undefined FUN_142d2e650(void)

undefined4 * FUN_142d2e650(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return param_1;
}



// FUNCTION 142d2e660 FUN_142d2e660 body=636 status=ok
// SIG undefined FUN_142d2e660(void)

void * FUN_142d2e660(void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 local_88 [128];
  
  FUN_142de2eb0((longlong)param_1 + 0x18);
  FUN_142de2eb0((undefined1 *)((longlong)param_1 + 0xa0));
  FUN_142de2eb0((undefined1 *)((longlong)param_1 + 0x128));
  FUN_142de2eb0((longlong)param_1 + 0x1a8);
  _guard_xfg_dispatch_icall_nop(param_1,0,0x238);
  *(undefined2 *)((longlong)param_1 + 8) = 0x101;
  *(undefined4 *)((longlong)param_1 + 4) = 0x43800000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x40a00000;
  *(undefined2 *)((longlong)param_1 + 0x15) = 0x100;
  puVar5 = (undefined1 *)FUN_142de2d20(local_88,0x43800000,0);
  *(undefined1 *)((longlong)param_1 + 0x18) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x19) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x1a) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x1b) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x1c) = *(undefined8 *)(puVar5 + 4);
  *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)(puVar5 + 0x10);
  *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)(puVar5 + 0x20);
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  *(undefined8 *)((longlong)param_1 + 0x48) = *(undefined8 *)(puVar5 + 0x30);
  *(undefined8 *)((longlong)param_1 + 0x50) = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  *(undefined8 *)((longlong)param_1 + 0x58) = *(undefined8 *)(puVar5 + 0x40);
  *(undefined8 *)((longlong)param_1 + 0x60) = uVar4;
  *(undefined8 *)((longlong)param_1 + 0x68) = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)((longlong)param_1 + 0x70) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x78) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar3;
  *(undefined8 *)((longlong)param_1 + 0x80) = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x88) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)((longlong)param_1 + 0x90) = *(undefined4 *)(puVar5 + 0x78);
  *(undefined1 *)((longlong)param_1 + 0x120) = 1;
  puVar5 = (undefined1 *)FUN_142de2d20(local_88,0x43800000,0);
  *(undefined1 *)((longlong)param_1 + 0xa0) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0xa1) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0xa2) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0xa3) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0xa4) = *(undefined8 *)(puVar5 + 4);
  *(undefined8 *)((longlong)param_1 + 0xb0) = *(undefined8 *)(puVar5 + 0x10);
  *(undefined8 *)((longlong)param_1 + 0xb8) = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  *(undefined8 *)((longlong)param_1 + 0xc0) = *(undefined8 *)(puVar5 + 0x20);
  *(undefined8 *)((longlong)param_1 + 200) = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  *(undefined8 *)((longlong)param_1 + 0xd0) = *(undefined8 *)(puVar5 + 0x30);
  *(undefined8 *)((longlong)param_1 + 0xd8) = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  *(undefined8 *)((longlong)param_1 + 0xe0) = *(undefined8 *)(puVar5 + 0x40);
  *(undefined8 *)((longlong)param_1 + 0xe8) = uVar4;
  *(undefined8 *)((longlong)param_1 + 0xf0) = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)((longlong)param_1 + 0xf8) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0xfc) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x100) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x104) = uVar3;
  *(undefined8 *)((longlong)param_1 + 0x108) = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x110) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x114) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)((longlong)param_1 + 0x118) = *(undefined4 *)(puVar5 + 0x78);
  *(undefined2 *)((longlong)param_1 + 0x230) = 0x100;
  puVar5 = (undefined1 *)FUN_142de2d20(local_88,0x40a00000,0);
  *(undefined1 *)((longlong)param_1 + 0x128) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x129) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x12a) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 299) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 300) = *(undefined8 *)(puVar5 + 4);
  *(undefined8 *)((longlong)param_1 + 0x138) = *(undefined8 *)(puVar5 + 0x10);
  *(undefined8 *)((longlong)param_1 + 0x140) = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  *(undefined8 *)((longlong)param_1 + 0x148) = *(undefined8 *)(puVar5 + 0x20);
  *(undefined8 *)((longlong)param_1 + 0x150) = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  *(undefined8 *)((longlong)param_1 + 0x158) = *(undefined8 *)(puVar5 + 0x30);
  *(undefined8 *)((longlong)param_1 + 0x160) = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  *(undefined8 *)((longlong)param_1 + 0x168) = *(undefined8 *)(puVar5 + 0x40);
  *(undefined8 *)((longlong)param_1 + 0x170) = uVar4;
  *(undefined8 *)((longlong)param_1 + 0x178) = *(undefined8 *)(puVar5 + 0x50);
  uVar4 = *(undefined8 *)(puVar5 + 0x60);
  *(undefined8 *)((longlong)param_1 + 0x180) = *(undefined8 *)(puVar5 + 0x58);
  *(undefined8 *)((longlong)param_1 + 0x188) = uVar4;
  *(undefined8 *)((longlong)param_1 + 400) = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x198) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x19c) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)((longlong)param_1 + 0x1a0) = *(undefined4 *)(puVar5 + 0x78);
  *(undefined1 *)((longlong)param_1 + 0x1ab) = 6;
  *(byte *)((longlong)param_1 + 0x1a9) = *(byte *)((longlong)param_1 + 0x1a9) | 0x87;
  *(undefined1 *)((longlong)param_1 + 0x233) = 0;
  return param_1;
}



// FUNCTION 142d2e8e0 FUN_142d2e8e0 body=343 status=ok
// SIG undefined FUN_142d2e8e0(void)

undefined8 * FUN_142d2e8e0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  pvVar2 = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 1,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[1],pvVar2,(longlong)iVar1 << 3);
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeForCopy(param_1 + 3,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[3],pvVar2,(longlong)iVar1 * 0x50);
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 6,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[6],pvVar2,(longlong)iVar1 << 3);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  pvVar2 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 8,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[8],pvVar2,(longlong)iVar1 << 3);
  }
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  uVar3 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar3;
  param_1[0xd] = param_2[0xd];
  return param_1;
}



// FUNCTION 142d2ea60 FUN_142d2ea60 body=354 status=ok
// SIG undefined FUN_142d2ea60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142d2ea60(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_142326e40();
  *param_1 = &PTR_FUN_14587b770;
  param_1[5] = &PTR_LAB_14587bb68;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  FUN_142d2de80(param_1 + 0x43);
  FUN_142d2de80(param_1 + 0x7a);
  FUN_142de2eb0(param_1 + 0xb1);
  param_1[0xc1] = 0;
  FUN_142d2de80(param_1 + 0xc4);
  FUN_142de2eb0(param_1 + 0xfb);
  param_1[0x10b] = 0;
  plVar1 = param_1 + 0x11e;
  param_1[0x10c] = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  *(undefined1 *)((longlong)param_1 + 0x8b4) = 0;
  param_1[0x115] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x116) = DAT_1468b5d98;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  *(undefined1 *)((longlong)param_1 + 0x8d4) = 0;
  param_1[0x119] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x11a) = DAT_1468b5d98;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  *plVar1 = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  if ((*(byte *)(param_1 + 1) & 0x30) == 0) {
    param_1[0x120] = param_1;
    param_1[0x11f] = &DAT_146b31ef0;
    *plVar1 = (longlong)DAT_146b31ef0;
    DAT_146b31ef0 = plVar1;
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  *(undefined1 *)(param_1 + 0x42) = 0;
  return param_1;
}



// FUNCTION 142d2ebd0 FUN_142d2ebd0 body=90 status=ok
// SIG undefined FUN_142d2ebd0(void)

undefined8 * FUN_142d2ebd0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UAnimNotify::UAnimNotify(param_1,uVar1);
  *param_1 = &PTR_FUN_14587eb08;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  return param_1;
}



// FUNCTION 142d2ec30 FUN_142d2ec30 body=368 status=ok
// SIG undefined FUN_142d2ec30(void)

undefined8 * FUN_142d2ec30(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_1417818c0();
  puVar1 = param_1 + 5;
  *puVar1 = &PTR__purecall_143f740d8;
  plVar4 = (longlong *)FUN_1404cfca0();
  iVar2 = (int)plVar4[1];
  *(int *)(plVar4 + 1) = iVar2 + 1;
  if (*(int *)((longlong)plVar4 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4,iVar2);
  }
  uStack_10 = 0;
  *(undefined8 **)(*plVar4 + (longlong)iVar2 * 8) = puVar1;
  *param_1 = &PTR_FUN_14587e410;
  plVar4 = param_1 + 8;
  *puVar1 = &PTR_FUN_14587e688;
  param_1[6] = 0;
  param_1[7] = 0;
  *plVar4 = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  local_18 = FUN_142d3d350;
  plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_FUN_14471e7f0;
    FWeakObjectPtr::operator=(plVar5 + 1,param_1);
    *(undefined4 *)(plVar5 + 2) = (undefined4)local_18;
    *(undefined4 *)((longlong)plVar5 + 0x14) = local_18._4_4_;
    *(undefined4 *)(plVar5 + 3) = uStack_10;
    *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_c;
    *(undefined4 *)(plVar5 + 4) = 0xffffffff;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[5] = lVar6;
    *plVar5 = (longlong)&PTR_FUN_14471e838;
  }
  if (&local_18 != plVar4) {
    if (plVar5 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 9) != 0) && (plVar3 = (longlong *)*plVar4, plVar3 != (longlong *)0x0))
      {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        if (*plVar4 != 0) {
          lVar6 = FMemory::Realloc(*plVar4,0,0);
          *plVar4 = lVar6;
        }
        *(undefined4 *)(param_1 + 9) = 0;
      }
    }
    else {
      (**(code **)(*plVar5 + 0x30))(plVar5,plVar4);
    }
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5,0);
    lVar6 = FMemory::Realloc(plVar5,0,0);
    if (lVar6 != 0) {
      FMemory::Free(lVar6);
    }
  }
  return param_1;
}



// FUNCTION 142d2eda0 FUN_142d2eda0 body=84 status=ok
// SIG undefined FUN_142d2eda0(void)

undefined8 * FUN_142d2eda0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_145879268;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  return param_1;
}



// FUNCTION 142d2ee00 FUN_142d2ee00 body=50 status=ok
// SIG undefined FUN_142d2ee00(void)

undefined8 * FUN_142d2ee00(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_14420b9d8;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0x40400000;
  return param_1;
}



// FUNCTION 142d2ee40 FUN_142d2ee40 body=125 status=ok
// SIG undefined FUN_142d2ee40(void)

undefined8 * FUN_142d2ee40(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142326e40(param_1,uVar1);
  *(undefined4 *)(param_1 + 0x2f) = 0x44bb8000;
  *param_1 = &PTR__scalar_deleting_destructor__14587be58;
  param_1[5] = &PTR_LAB_145050818;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0xbf800000;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x3f800000;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  return param_1;
}



// FUNCTION 142d2eec0 FUN_142d2eec0 body=95 status=ok
// SIG undefined FUN_142d2eec0(void)

undefined8 * FUN_142d2eec0(undefined8 *param_1)

{
  FUN_142d2ee40();
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 0xe;
  *param_1 = &PTR_FUN_14587c260;
  param_1[5] = &PTR_LAB_14587c668;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0x42340000;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  return param_1;
}



// FUNCTION 142d2ef20 FUN_142d2ef20 body=94 status=ok
// SIG undefined FUN_142d2ef20(void)

undefined8 * FUN_142d2ef20(undefined8 *param_1)

{
  FUN_142d2ee40();
  *param_1 = &PTR__scalar_deleting_destructor__14587c698;
  param_1[5] = &PTR_LAB_14587caa0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 0xe;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0x3f800000;
  return param_1;
}



// FUNCTION 142d2ef80 FUN_142d2ef80 body=33 status=ok
// SIG undefined FUN_142d2ef80(void)

undefined8 * FUN_142d2ef80(undefined8 *param_1)

{
  UAIDataProvider::UAIDataProvider();
  *param_1 = &PTR_FUN_14587cad0;
  return param_1;
}



// FUNCTION 142d2efb0 FUN_142d2efb0 body=43 status=ok
// SIG undefined FUN_142d2efb0(void)

undefined8 * FUN_142d2efb0(undefined8 *param_1)

{
  UAIDataProvider::UAIDataProvider();
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14587cd50;
  *(undefined1 *)(param_1 + 6) = 1;
  return param_1;
}



// FUNCTION 142d2efe0 FUN_142d2efe0 body=33 status=ok
// SIG undefined FUN_142d2efe0(void)

undefined8 * FUN_142d2efe0(undefined8 *param_1)

{
  UAIDataProvider::UAIDataProvider();
  *param_1 = &PTR_FUN_14587cfd0;
  return param_1;
}



// FUNCTION 142d2f010 FUN_142d2f010 body=101 status=ok
// SIG undefined FUN_142d2f010(void)

undefined8 * FUN_142d2f010(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142bd6050(param_1,uVar1);
  *param_1 = &PTR_FUN_14587d4f0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  uVar1 = FUN_142e107c0();
  param_1[10] = uVar1;
  *(undefined1 *)((longlong)param_1 + 100) = 1;
  return param_1;
}



// FUNCTION 142d2f080 FUN_142d2f080 body=157 status=ok
// SIG undefined FUN_142d2f080(void)

undefined8 * FUN_142d2f080(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142bd6050(param_1,uVar1);
  *param_1 = &PTR_FUN_14587d250;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0xc);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  uVar1 = UEnvQueryItemType_Actor::GetPrivateStaticClass();
  param_1[10] = uVar1;
  *(undefined4 *)(param_1 + 0x11) = 0x447a0000;
  *(undefined1 *)((longlong)param_1 + 0x9b) = 1;
  return param_1;
}



// FUNCTION 142d2f120 FUN_142d2f120 body=53 status=ok
// SIG undefined FUN_142d2f120(void)

undefined8 * FUN_142d2f120(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UEnvQueryItemType::UEnvQueryItemType(param_1,uVar1);
  *param_1 = &PTR_FUN_14587d790;
  *(undefined2 *)(param_1 + 5) = 0x390;
  return param_1;
}



// FUNCTION 142d2f160 FUN_142d2f160 body=95 status=ok
// SIG undefined FUN_142d2f160(void)

undefined8 * FUN_142d2f160(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142326e40(param_1,uVar1);
  *param_1 = &PTR_FUN_14587e6d0;
  param_1[5] = &PTR_LAB_14587ead8;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x2f);
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x35) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x40400000;
  return param_1;
}



// FUNCTION 142d2f1c0 FUN_142d2f1c0 body=203 status=ok
// SIG undefined FUN_142d2f1c0(void)

undefined8 * FUN_142d2f1c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UFontFaceInterface::UFontFaceInterface(param_1,uVar1);
  *param_1 = &PTR_FUN_14587a158;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_142494900((longlong)param_1 + 0x4c);
  param_1[0xc] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_142494900((longlong)param_1 + 0xe4);
  param_1[0x1f] = 0;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfe;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfe;
  *(undefined4 *)(param_1 + 0x16) = 0x43800000;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  return param_1;
}



// FUNCTION 142d2f290 FUN_142d2f290 body=820 status=ok
// SIG undefined FUN_142d2f290(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142d2f290(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UFontFaceInterface::UFontFaceInterface(param_1,uVar1);
  *param_1 = &PTR_FUN_145879c00;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined1 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x3dcccccd;
  param_1[0x24] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0x3f800000;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined1 *)((longlong)param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x30) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x31) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 2;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0x40000000;
  *(undefined4 *)(param_1 + 0x33) = 2;
  *(undefined1 *)((longlong)param_1 + 0x1b4) = 1;
  *(undefined4 *)(param_1 + 0x3a) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x184) = 6;
  *(undefined1 *)(param_1 + 0x32) = 6;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0x41800000;
  *(undefined4 *)(param_1 + 0x3d) = 0x41100000;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x3e) = 0x10104;
  param_1[0x3f] = 0;
  param_1[0x41] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x42) = DAT_1468b5d98;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x43) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0x3f666666;
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined8 *)((longlong)param_1 + 0x234) = DAT_1464aa788;
  *(undefined4 *)((longlong)param_1 + 0x23c) = DAT_1464aa790;
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  param_1[0x49] = 0;
  param_1[0x4a] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x4b) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x52);
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0x3f800000;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x69);
  *(undefined1 *)(param_1 + 0x78) = 0;
  FUN_142494900((longlong)param_1 + 0x3c4);
  *(undefined1 *)(param_1 + 0x7a) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0xbf800000;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0x3f800000;
  return param_1;
}



// FUNCTION 142d2f5d0 FUN_142d2f5d0 body=70 status=ok
// SIG undefined FUN_142d2f5d0(void)

undefined8 * FUN_142d2f5d0(undefined8 *param_1)

{
  FUN_142300310();
  *param_1 = &PTR_FUN_14503cdb8;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined1 *)(param_1 + 10) = 1;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined1 *)(param_1 + 0x12) = 1;
  *(undefined1 *)(param_1 + 0x14) = 1;
  return param_1;
}



// FUNCTION 142d2f620 FUN_142d2f620 body=201 status=ok
// SIG undefined FUN_142d2f620(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142d2f620(undefined8 *param_1)

{
  undefined8 uVar1;
  
  UDamageType::UDamageType();
  *param_1 = &PTR_FUN_145879938;
  param_1[8] = &PTR_LAB_145879bb8;
  FText::FText(param_1 + 9);
  FText::FText(param_1 + 0xc);
  FText::FText(param_1 + 0xf);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x17) = 0x3f4ccccd;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x3e4ccccd;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x12] = _DAT_1464aa6c0;
  param_1[0x13] = uVar1;
  return param_1;
}



// FUNCTION 142d2f6f0 FUN_142d2f6f0 body=391 status=ok
// SIG undefined FUN_142d2f6f0(void)

undefined8 * FUN_142d2f6f0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14178c940();
  FUN_142bd5dc0(param_1,uVar2);
  *(undefined2 *)(param_1 + 0xe7) = 0;
  *param_1 = &PTR_FUN_14587da40;
  plVar1 = param_1 + 0x107;
  param_1[5] = &PTR_LAB_14587e328;
  param_1[0x5a] = &PTR_LAB_14587e358;
  param_1[0xe5] = &PTR_LAB_14587e3b0;
  param_1[0xe6] = &PTR_LAB_14587e3f8;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  *(undefined4 *)(param_1 + 0xf9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7cc) = 0;
  param_1[0xfb] = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0xea] = 0;
  *(undefined1 *)(param_1 + 0xef) = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  *plVar1 = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) & 0xfffffffe;
  *(undefined1 *)((longlong)param_1 + 0x791) = 1;
  FUN_142717090(param_1,0);
  if ((*(byte *)(param_1 + 1) & 0x30) == 0) {
    param_1[0x109] = param_1;
    param_1[0x108] = &DAT_146b31f50;
    *plVar1 = (longlong)DAT_146b31f50;
    DAT_146b31f50 = plVar1;
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return param_1;
}



// FUNCTION 142d2f880 FUN_142d2f880 body=138 status=ok
// SIG undefined FUN_142d2f880(void)

undefined8 * FUN_142d2f880(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_1417818c0();
  puVar1 = param_1 + 5;
  *puVar1 = &PTR__purecall_143f740d8;
  plVar3 = (longlong *)FUN_1404cfca0();
  iVar2 = (int)plVar3[1];
  *(int *)(plVar3 + 1) = iVar2 + 1;
  if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
  }
  *(undefined8 **)(*plVar3 + (longlong)iVar2 * 8) = puVar1;
  *param_1 = &PTR_FUN_145879e98;
  *puVar1 = &PTR_FUN_14587a110;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 142d2f910 FUN_142d2f910 body=196 status=ok
// SIG undefined FUN_142d2f910(void)

undefined8 * FUN_142d2f910(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_141781840();
  puVar1 = param_1 + 5;
  *puVar1 = &PTR__purecall_143f740d8;
  plVar3 = (longlong *)FUN_1404cfca0();
  iVar2 = (int)plVar3[1];
  *(int *)(plVar3 + 1) = iVar2 + 1;
  if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
  }
  *(undefined8 **)(*plVar3 + (longlong)iVar2 * 8) = puVar1;
  *param_1 = &PTR_FUN_14587bb98;
  *puVar1 = &PTR_FUN_14587be10;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 6) = 3;
  return param_1;
}



// FUNCTION 142d2f9e0 FUN_142d2f9e0 body=33 status=ok
// SIG undefined FUN_142d2f9e0(void)

undefined8 * FUN_142d2f9e0(undefined8 *param_1)

{
  FUN_142c8d050();
  *param_1 = &PTR_FUN_14587aad0;
  return param_1;
}



// FUNCTION 142d2fa10 FUN_142d2fa10 body=88 status=ok
// SIG undefined FUN_142d2fa10(void)

undefined8 * FUN_142d2fa10(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_1458794e0;
  param_1[5] = &PTR_LAB_1458798f0;
  param_1[0x2f] = &PTR_LAB_145879920;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x20000000;
  *(uint *)((longlong)param_1 + 0xc4) = *(uint *)((longlong)param_1 + 0xc4) | 1;
  return param_1;
}



// FUNCTION 142d2fa70 FUN_142d2fa70 body=503 status=ok
// SIG undefined FUN_142d2fa70(void)

undefined8 * FUN_142d2fa70(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UFontFaceInterface::UFontFaceInterface(param_1,uVar1);
  *param_1 = &PTR_FUN_14587adb0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  *(uint *)(param_1 + 0x23) = *(uint *)(param_1 + 0x23) & 0xfffffffa | 2;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x41800000;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x41800000;
  *(undefined4 *)(param_1 + 0x28) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x29) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2a] = 0x43340000;
  param_1[0x2c] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(byte *)((longlong)param_1 + 0x1a9) = *(byte *)((longlong)param_1 + 0x1a9) & 0xfe;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x35) = 0x40;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x36] = AK::MemoryMgr::StartProfileThreadUsage;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x42) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0x3f800000;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0x3f800000;
  *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x31;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x17) = 1;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x40a00000;
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(undefined1 *)(param_1 + 0x46) = 1;
  return param_1;
}



// FUNCTION 142d2fc70 FUN_142d2fc70 body=121 status=ok
// SIG undefined FUN_142d2fc70(void)

undefined8 * FUN_142d2fc70(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_14587b038;
  param_1[5] = &PTR_LAB_14587b450;
  param_1[0x31] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x30,0,0x1b0);
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(undefined4 *)(param_1 + 0xe) = 0;
  return param_1;
}



// FUNCTION 142d2fcf0 FUN_142d2fcf0 body=148 status=ok
// SIG undefined FUN_142d2fcf0(void)

undefined8 * FUN_142d2fcf0(undefined8 *param_1)

{
  FUN_142c8cfb0();
  *param_1 = &PTR_FUN_14587b480;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xd4)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x19,0);
  }
  if ((undefined2 *)param_1[0x19] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x19] = 0;
  }
  *(undefined4 *)(param_1 + 0x17) = 0;
  return param_1;
}



// FUNCTION 142d2fd90 FUN_142d2fd90 body=150 status=ok
// SIG undefined FUN_142d2fd90(void)

void FUN_142d2fd90(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    plVar3 = (longlong *)(lVar1 + 0x20);
    do {
      iVar4 = (int)plVar3[1];
      lVar1 = *plVar3;
      if (iVar4 != 0) {
        lVar1 = lVar1 + 8;
        do {
          FRichCurve::~FRichCurve(lVar1);
          lVar1 = lVar1 + 0x80;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        lVar1 = *plVar3;
      }
      if (lVar1 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 0xd;
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



// FUNCTION 142d2fe30 FUN_142d2fe30 body=141 status=ok
// SIG undefined FUN_142d2fe30(void)

void FUN_142d2fe30(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0xa0);
    do {
      if (plVar2[0x18] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      if (plVar2[-4] != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x2e;
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



// FUNCTION 142d2fec0 FUN_142d2fec0 body=198 status=ok
// SIG undefined FUN_142d2fec0(void)

void FUN_142d2fec0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  lVar7 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    lVar7 = lVar7 + 0x338;
    do {
      plVar4 = *(longlong **)(lVar7 + 0x60);
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
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7);
      if (*(longlong *)(lVar7 + -0x20) != 0) {
        FMemory::Free();
      }
      FUN_1406d8b70(lVar7 + -0x330);
      lVar7 = lVar7 + 0x3b0;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar7 = *param_1;
  }
  if (lVar7 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142d2ff90 FUN_142d2ff90 body=137 status=ok
// SIG undefined FUN_142d2ff90(void)

void FUN_142d2ff90(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x30);
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      if (plVar2[-3] != 0) {
        FMemory::Free();
      }
      if (plVar2[-5] != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xe;
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



// FUNCTION 142d30020 FUN_142d30020 body=105 status=ok
// SIG undefined FUN_142d30020(void)

void FUN_142d30020(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0x48;
    do {
      FRichCurve::~FRichCurve(lVar1 + 0xb0);
      FRichCurve::~FRichCurve(lVar1);
      lVar1 = lVar1 + 0x170;
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



// FUNCTION 142d30090 FUN_142d30090 body=449 status=ok
// SIG undefined FUN_142d30090(void)

void FUN_142d30090(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  uStack_54 = 1;
  puVar1 = (uint *)(param_1 + 0x210);
  local_58 = 0;
  iVar2 = *(int *)(param_1 + 0x220);
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)(param_1 + 0x218);
    if (*(uint **)(param_1 + 0x218) == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar3 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_142d30161;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
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
    if (iVar2 < iStack_44) {
LAB_142d30161:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      lVar5 = *(longlong *)(param_1 + 0x200);
      if (*(longlong *)(param_1 + 0x200) == 0) {
        lVar5 = param_1;
      }
      if (*(longlong *)(lVar5 + (longlong)iStack_1c * 0x20) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      FUN_1406e9690(&local_30);
    } while (iStack_1c < (int)puStack_28[4]);
  }
  *(undefined4 *)(param_1 + 0x208) = 0;
  if (*(int *)(param_1 + 0x20c) != 0) {
    FUN_142d46bd0(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x228) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  if (*(int *)(param_1 + 0x224) != 0) {
    *(undefined4 *)(param_1 + 0x224) = 0;
    TBitArray<TInlineAllocator<1,FDefaultAllocator>_>::Realloc(puVar1,0);
  }
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142d30260 FUN_142d30260 body=134 status=ok
// SIG undefined FUN_142d30260(void)

void FUN_142d30260(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x720);
  plVar1 = *(longlong **)(param_1 + 0x718);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 6;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x718);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*(longlong *)(param_1 + 0x708) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    FMemory::Free();
  }
  FUN_14061f760(param_1);
  return;
}



// FUNCTION 142d302f0 FUN_142d302f0 body=232 status=ok
// SIG undefined FUN_142d302f0(void)

void FUN_142d302f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 1000) != 0) {
    FMemory::Free();
  }
  FRichCurve::~FRichCurve(param_1 + 0x348);
  FRichCurve::~FRichCurve(param_1 + 0x290);
  if (*(longlong *)(param_1 + 0x278) != 0) {
    FMemory::Free();
  }
  FUN_142d30020(param_1 + 0x160);
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x60);
  lVar2 = *(longlong *)(param_1 + 0x58);
  if (iVar1 != 0) {
    lVar2 = lVar2 + 8;
    do {
      FRichCurve::~FRichCurve(lVar2);
      lVar2 = lVar2 + 0x80;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    lVar2 = *(longlong *)(param_1 + 0x58);
  }
  if (lVar2 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x40);
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (iVar1 != 0) {
    lVar2 = lVar2 + 8;
    do {
      FRichCurve::~FRichCurve(lVar2);
      lVar2 = lVar2 + 0x80;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    lVar2 = *(longlong *)(param_1 + 0x38);
  }
  if (lVar2 != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 142d303e0 FUN_142d303e0 body=124 status=ok
// SIG undefined FUN_142d303e0(void)

longlong * FUN_142d303e0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = (int)param_1[1];
    if (iVar2 != 0) {
      lVar1 = *param_1 + 8;
      do {
        FRichCurve::~FRichCurve(lVar1);
        lVar1 = lVar1 + 0x80;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_1426f4440(param_1,*param_2,(int)param_2[1],*(undefined4 *)((longlong)param_1 + 0xc),0);
  }
  *(int *)(param_1 + 2) = (int)param_2[2];
  return param_1;
}



// FUNCTION 142d30460 FUN_142d30460 body=35 status=ok
// SIG undefined FUN_142d30460(void)

undefined8 FUN_142d30460(char *param_1,char *param_2)

{
  if (((*param_2 == *param_1) && (*(float *)(param_1 + 8) == *(float *)(param_2 + 8))) &&
     (*(float *)(param_1 + 4) == *(float *)(param_2 + 4))) {
    return 0;
  }
  return 1;
}



// FUNCTION 142d30490 FUN_142d30490 body=173 status=ok
// SIG undefined FUN_142d30490(void)

ulonglong FUN_142d30490(undefined8 param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong in_RAX;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0xc);
    lVar5 = 0;
    lVar4 = lVar5;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar3 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar3;
      in_RAX = *(ulonglong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8);
      lVar4 = in_RAX + (longlong)(int)((uVar2 & 0xffff) - uVar3) * 0x18;
    }
    if (((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) && ((*(byte *)(param_2 + 0x94) & 2) == 0)) {
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar3 = iVar1 >> 0x1f & 0xffff;
        uVar2 = iVar1 + uVar3;
        lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                (longlong)(int)((uVar2 & 0xffff) - uVar3) * 0x18;
      }
      in_RAX = 0;
      if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) {
        return 1;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142d30600 FUN_142d30600 body=110 status=ok
// SIG undefined FUN_142d30600(void)

longlong FUN_142d30600(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x468);
  while (lVar1 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x468);
    *(undefined8 *)(param_1 + 0x468) = *puVar2;
    FMemory::operator_delete(puVar2,0x68);
    lVar1 = *(longlong *)(param_1 + 0x468);
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x470);
  }
  return param_1;
}



// FUNCTION 142d30670 FUN_142d30670 body=43 status=ok
// SIG undefined FUN_142d30670(void)

undefined8 * FUN_142d30670(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440780a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 142d306a0 FUN_142d306a0 body=168 status=ok
// SIG undefined FUN_142d306a0(void)

longlong FUN_142d306a0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x900) != 0) {
    if (*(longlong *)(param_1 + 0x8f0) == 0) {
      **(longlong **)(param_1 + 0x8f8) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x8f8) = *(longlong *)(param_1 + 0x8f0);
      *(undefined8 *)(*(longlong *)(param_1 + 0x8f0) + 8) = *(undefined8 *)(param_1 + 0x8f8);
      *(undefined8 *)(param_1 + 0x8f0) = 0;
    }
    *(undefined8 *)(param_1 + 0x8f8) = 0;
    *(undefined8 *)(param_1 + 0x900) = 0;
  }
  if (*(longlong *)(param_1 + 0x858) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x908);
  }
  return param_1;
}



// FUNCTION 142d30750 FUN_142d30750 body=82 status=ok
// SIG undefined FUN_142d30750(void)

longlong FUN_142d30750(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x40);
  FUN_142d2fe30(param_1 + 0x30);
  FUN_1404bf750(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 142d307b0 FUN_142d307b0 body=70 status=ok
// SIG undefined FUN_142d307b0(void)

longlong FUN_142d307b0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 142d30800 FUN_142d30800 body=52 status=ok
// SIG undefined FUN_142d30800(void)

undefined8 FUN_142d30800(undefined8 param_1,ulonglong param_2)

{
  FUN_140458c20();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 142d30840 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UZeppelinGameInstance::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1f0);
  }
  return param_1;
}



// FUNCTION 142d30890 FUN_142d30890 body=122 status=ok
// SIG undefined FUN_142d30890(void)

longlong FUN_142d30890(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x80);
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x68);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 142d30910 FUN_142d30910 body=165 status=ok
// SIG undefined FUN_142d30910(void)

longlong FUN_142d30910(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0xd0);
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0xb8);
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0xa8);
  *(undefined ***)(param_1 + 0x60) = &PTR_ValueToString_14407aff8;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 142d309c0 FUN_142d309c0 body=67 status=ok
// SIG undefined FUN_142d309c0(void)

longlong FUN_142d309c0(longlong param_1,ulonglong param_2)

{
  thunk_FUN_142478640(param_1 + 0x178);
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d8);
  }
  return param_1;
}



// FUNCTION 142d30a10 FUN_142d30a10 body=87 status=ok
// SIG undefined FUN_142d30a10(void)

longlong FUN_142d30a10(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 142d30a70 FUN_142d30a70 body=52 status=ok
// SIG undefined FUN_142d30a70(void)

undefined8 FUN_142d30a70(undefined8 param_1,ulonglong param_2)

{
  FUN_142d302f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3f8);
  }
  return param_1;
}



// FUNCTION 142d30ab0 FUN_142d30ab0 body=338 status=ok
// SIG undefined FUN_142d30ab0(void)

longlong FUN_142d30ab0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x80);
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
  plVar4 = *(longlong **)(param_1 + 0x68);
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
  *(undefined ***)(param_1 + 0x40) = &PTR_FUN_14407f730;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x128);
  }
  return param_1;
}



// FUNCTION 142d30c10 FUN_142d30c10 body=383 status=ok
// SIG undefined FUN_142d30c10(void)

longlong FUN_142d30c10(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x848) != 0) {
    if (*(longlong *)(param_1 + 0x838) == 0) {
      **(longlong **)(param_1 + 0x840) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x840) = *(longlong *)(param_1 + 0x838);
      *(undefined8 *)(*(longlong *)(param_1 + 0x838) + 8) = *(undefined8 *)(param_1 + 0x840);
      *(undefined8 *)(param_1 + 0x838) = 0;
    }
    *(undefined8 *)(param_1 + 0x840) = 0;
    *(undefined8 *)(param_1 + 0x848) = 0;
  }
  plVar4 = *(longlong **)(param_1 + 0x830);
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
  plVar4 = *(longlong **)(param_1 + 0x820);
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
  plVar4 = *(longlong **)(param_1 + 0x810);
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
  FUN_1406d8b70(param_1 + 0x750);
  if (*(longlong *)(param_1 + 0x740) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x730) = &PTR_FUN_144055c50;
  *(undefined ***)(param_1 + 0x728) = &PTR_FUN_144080410;
  FUN_142d30260(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x850);
  }
  return param_1;
}



// FUNCTION 142d30d90 FUN_142d30d90 body=73 status=ok
// SIG undefined FUN_142d30d90(void)

longlong FUN_142d30d90(longlong param_1,ulonglong param_2)

{
  FUN_142d2fd90(param_1 + 0x30);
  FUN_1404bf750(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142d30de0 FUN_142d30de0 body=120 status=ok
// SIG undefined FUN_142d30de0(void)

longlong FUN_142d30de0(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x60);
  FUN_142d2fec0(param_1 + 0x38);
  FUN_1404bf750(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 142d30e60 FUN_142d30e60 body=81 status=ok
// SIG undefined FUN_142d30e60(void)

longlong FUN_142d30e60(longlong param_1,ulonglong param_2)

{
  FUN_142d2ff90(param_1 + 0x188);
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_1440732c8;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b0);
  }
  return param_1;
}



// FUNCTION 142d30ec0 FUN_142d30ec0 body=116 status=ok
// SIG undefined FUN_142d30ec0(void)

longlong FUN_142d30ec0(longlong param_1,ulonglong param_2)

{
  FUN_1409c5510(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x260);
  }
  return param_1;
}



// FUNCTION 142d30f40 FUN_142d30f40 body=90 status=ok
// SIG undefined FUN_142d30f40(void)

longlong FUN_142d30f40(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x348) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x338) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x358);
  }
  return param_1;
}



// FUNCTION 142d30fa0 FUN_142d30fa0 body=169 status=ok
// SIG undefined FUN_142d30fa0(void)

void FUN_142d30fa0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_18;
  longlong *local_10;
  
  plVar3 = (longlong *)(param_1 + 0x808);
  lVar5 = *plVar3;
  if ((lVar5 != 0) && (*(int *)(lVar5 + 0x28) == 0)) {
    lVar6 = UBehaviorTreeManager::GetCurrent();
    if (lVar6 != 0) {
      FUN_142bd8290(lVar6,*(undefined4 *)(lVar5 + 0x30));
    }
  }
  local_10 = (longlong *)0x0;
  if (plVar3 != &local_18) {
    *plVar3 = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x810,&local_10);
    plVar3 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142d31050 FUN_142d31050 body=480 status=ok
// SIG undefined FUN_142d31050(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d31050(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [48];
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0();
  }
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x118) != 0)) {
    fVar4 = (float)param_2[6];
    if (fVar4 <= 0.0) {
      fVar4 = *(float *)(param_1 + 0x17c);
    }
    if (*(char *)(param_1 + 0x1c5) == '\0') {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
      if (lVar1 == 0) {
        local_88 = _DAT_1468b5d90;
        local_80 = DAT_1468b5d98;
      }
      else {
        local_80 = *(undefined4 *)(lVar1 + 0x228);
        local_88 = *(undefined8 *)(lVar1 + 0x220);
      }
      local_74 = local_80;
      puVar2 = &local_7c;
      local_7c = local_88;
    }
    else {
      local_80 = *(undefined4 *)(param_1 + 0x1d0);
      puVar2 = &local_88;
      local_88 = *(undefined8 *)(param_1 + 0x1c8);
    }
    local_70 = *puVar2;
    local_68 = *(undefined4 *)(puVar2 + 1);
    puVar3 = (undefined4 *)FUN_142d979a0(local_38,param_2[7]);
    local_48 = *(undefined8 *)(puVar3 + 4);
    uStack_40 = *(undefined8 *)(puVar3 + 6);
    local_58 = *puVar3;
    uStack_54 = puVar3[1];
    uStack_50 = puVar3[2];
    uStack_4c = puVar3[3];
    FUN_142d32d50(*(undefined8 *)(param_1 + 0x118),*param_2,&local_70,fVar4,
                  *(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4),param_2 + 0xe,
                  *(undefined8 *)(param_2 + 0xc),0,&local_58,3,1,*(undefined8 *)(param_2 + 10),
                  *(undefined8 *)(param_2 + 8),1);
  }
  return;
}



// FUNCTION 142d31230 FUN_142d31230 body=52 status=ok
// SIG undefined FUN_142d31230(void)

void FUN_142d31230(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*param_2 + 0x10);
  }
  local_18 = (undefined4)param_2[1];
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_10 = (undefined4)param_2[2];
  uStack_c = *(undefined4 *)((longlong)param_2 + 0x14);
  FUN_142d31b90(local_18,uVar1,param_2 + 4,&local_18);
  return;
}



// FUNCTION 142d31270 FUN_142d31270 body=1308 status=ok
// SIG undefined FUN_142d31270(void)

void FUN_142d31270(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = FIndianaSliderStyle::StaticStruct();
  lVar3 = *(longlong *)(lVar3 + 0x18);
  if (lVar3 == 0) {
    FUN_1417846f0(param_3,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar4 = FUN_142dfd5b0();
  lVar3 = FUN_1417985e0(uVar4,param_3,lVar3,0,0,0,0,0,0);
  if (lVar3 != 0) {
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
  }
  lVar3 = DAT_146b31f08;
  if (DAT_146b31f08 == 0) {
    FUN_1417846f0(param_3,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar4 = FUN_142dfc210();
  lVar3 = FUN_1417985e0(uVar4,param_3,lVar3,0,0,0,0,0,0);
  if (lVar3 != 0) {
    uVar4 = FFileManifestData::StaticStruct();
    FUN_142cd03b0(lVar3,uVar4);
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
  }
  lVar3 = DAT_146b31f10;
  if (DAT_146b31f10 == 0) {
    FUN_1417846f0(param_3,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar4 = UBlackboardKeyType_Object::GetPrivateStaticClass();
  lVar3 = FUN_1417985e0(uVar4,param_3,lVar3,0,0,0,0,0,0);
  if (lVar3 != 0) {
    uVar4 = FUN_1428dfc70();
    *(undefined8 *)(lVar3 + 0x30) = uVar4;
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
  }
  lVar3 = DAT_146b31f18;
  if (DAT_146b31f18 == 0) {
    FUN_1417846f0(param_3,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar4 = UBlackboardKeyType_Object::GetPrivateStaticClass();
  lVar3 = FUN_1417985e0(uVar4,param_3,lVar3,0,0,0,0,0,0);
  if (lVar3 != 0) {
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
  }
  lVar2 = DAT_146b31f20;
  if (DAT_146b31f20 == 0) {
    FUN_1417846f0(param_3,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar4 = FUN_142c361d0();
  uVar4 = FUN_1417985e0(uVar4,param_3,lVar2,0,0,0,0,0,0);
  if (lVar3 != 0) {
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar4;
  }
  lVar3 = DAT_146b31f28;
  if (DAT_146b31f28 == 0) {
    FUN_1417846f0(param_3,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar4 = FUN_142c361d0();
  lVar3 = FUN_1417985e0(uVar4,param_3,lVar3,0,0,0,0,0,0);
  if (lVar3 != 0) {
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
  }
  lVar3 = DAT_146b31f30;
  if (DAT_146b31f30 == 0) {
    FUN_1417846f0(param_3,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar4 = UBlackboardKeyType_Float::GetPrivateStaticClass();
  lVar3 = FUN_1417985e0(uVar4,param_3,lVar3,0,0,0,0,0,0);
  if (lVar3 != 0) {
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
  }
  lVar3 = DAT_146b31f40;
  if (DAT_146b31f40 == 0) {
    FUN_1417846f0(param_3,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar4 = UBlackboardKeyType_Float::GetPrivateStaticClass();
  lVar3 = FUN_1417985e0(uVar4,param_3,lVar3,0,0,0,0,0,0);
  if (lVar3 != 0) {
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
  }
  lVar3 = DAT_146b31f38;
  if (DAT_146b31f38 == 0) {
    FUN_1417846f0(param_3,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar4 = UBlackboardKeyType_Bool::GetPrivateStaticClass();
  lVar3 = FUN_1417985e0(uVar4,param_3,lVar3,0,0,0,0,0,0);
  if (lVar3 != 0) {
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
  }
  lVar3 = DAT_146b31f48;
  if (DAT_146b31f48 == 0) {
    FUN_1417846f0(param_3,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar4 = UBlackboardKeyType_Bool::GetPrivateStaticClass();
  lVar3 = FUN_1417985e0(uVar4,param_3,lVar3,0,0,0,0,0,0);
  if (lVar3 != 0) {
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
  }
  return;
}



// FUNCTION 142d31790 FUN_142d31790 body=49 status=ok
// SIG undefined FUN_142d31790(void)

void FUN_142d31790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18._0_4_ = (undefined4)param_3;
  uStack_10 = 0;
  uVar1 = (undefined4)local_18;
  local_18 = param_3;
  FUN_142d31b90(uVar1,param_2,param_5,&local_18);
  return;
}



// FUNCTION 142d317d0 FUN_142d317d0 body=953 status=ok
// SIG undefined FUN_142d317d0(void)

longlong *
FUN_142d317d0(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             undefined8 param_5,longlong *param_6,longlong *param_7)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined4 uVar12;
  undefined8 local_res8;
  undefined1 local_38 [16];
  
  if ((((((*(uint *)(param_1 + 8) >> 4 & 1) == 0) && (*(longlong *)(param_1 + 0x48) != 0)) &&
       (*(longlong *)(param_1 + 0x50) != 0)) &&
      ((cVar2 = UWorld::IsGameWorld(), cVar2 != '\0' && (param_3 != (longlong *)0x0)))) &&
     (*param_4 != 0)) {
    iVar1 = *(int *)(param_1 + 0x40);
    uVar8 = 0;
    if (0 < iVar1) {
      lVar4 = *(longlong *)(param_1 + 0x38);
      uVar10 = uVar8;
      do {
        iVar9 = (int)uVar10;
        if ((*(int *)(lVar4 + 0x328) < 0) || (*(int *)(lVar4 + 0x32c) < 0)) {
          iVar3 = *(int *)(lVar4 + 0x32c) + 1;
          local_res8 = CONCAT44(iVar3,iVar9);
          if ((-1 < iVar9) && (-1 < iVar3)) goto LAB_142d31981;
          break;
        }
        uVar10 = (ulonglong)(iVar9 + 1);
        uVar8 = uVar8 + 1;
        lVar4 = lVar4 + 0x3b0;
      } while ((longlong)uVar8 < (longlong)iVar1);
    }
    iVar9 = *(int *)(param_1 + 0x40);
    local_res8 = CONCAT44(1,iVar1);
    *(int *)(param_1 + 0x40) = iVar9 + 1;
    if (*(int *)(param_1 + 0x44) < iVar9 + 1) {
      TArray<Audio::FMixerSourceManager::FSourceInfo,TSizedDefaultAllocator<32>_>::ResizeGrow
                ((longlong *)(param_1 + 0x38),iVar9);
    }
    lVar4 = (longlong)iVar9 * 0x3b0 + *(longlong *)(param_1 + 0x38);
    *(undefined8 *)(lVar4 + 0x10) = 0;
    *(undefined8 *)(lVar4 + 0x18) = 0;
    *(undefined8 *)(lVar4 + 0x20) = 0;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    *(undefined8 *)(lVar4 + 0x38) = 0;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    *(undefined8 *)(lVar4 + 0x50) = 0;
    *(undefined8 *)(lVar4 + 0x58) = 0;
    *(undefined8 *)(lVar4 + 0x70) = 0;
    *(undefined8 *)(lVar4 + 0x78) = 0;
    *(undefined4 *)(lVar4 + 0x80) = 0xffffffff;
    *(undefined4 *)(lVar4 + 0x84) = 0;
    *(undefined8 *)(lVar4 + 0x90) = 0;
    *(undefined4 *)(lVar4 + 0x98) = 0;
    *(undefined8 *)(lVar4 + 0xa8) = 0;
    *(undefined8 *)(lVar4 + 0xb0) = 0;
    *(undefined8 *)(lVar4 + 8) = 0;
    *(undefined1 *)(lVar4 + 0x30) = 0;
    FUN_142d2e660(lVar4 + 0xc0);
    *(undefined8 *)(lVar4 + 0x318) = 0;
    *(undefined8 *)(lVar4 + 800) = 0;
    *(undefined8 *)(lVar4 + 0x328) = 0xffffffffffffffff;
    *(undefined8 *)(lVar4 + 0x338) = 0;
    *(undefined4 *)(lVar4 + 0x340) = 0;
    *(undefined8 *)(lVar4 + 0x390) = 0;
    *(undefined8 *)(lVar4 + 0x398) = 0;
    *(undefined4 *)(lVar4 + 0x3ac) = 0xbf800000;
    iVar9 = iVar1;
LAB_142d31981:
    plVar11 = (longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar9 * 0x3b0);
    _guard_xfg_dispatch_icall_nop(plVar11 + 1,0,800);
    _guard_xfg_dispatch_icall_nop((void *)((longlong)plVar11 + 0x334),0,0x7c);
    plVar11[0x65] = local_res8;
    *(undefined4 *)(plVar11 + 0x66) = 0xffffffff;
    *plVar11 = (longlong)param_3;
    FUN_1406da240(plVar11 + 1,param_4);
    FUN_1406da410(plVar11 + 0x18,param_5);
    FString::operator=(plVar11 + 99,param_7);
    if (((longlong *)*plVar11 != (longlong *)0x0) && ((char)plVar11[0x75] != '\x01')) {
      *(undefined1 *)(plVar11 + 0x75) = 1;
      lVar4 = (**(code **)(*(longlong *)*plVar11 + 0x148))();
      if (lVar4 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined4 *)(lVar4 + 0x8c8);
      }
      *(undefined4 *)((longlong)plVar11 + 0x3a4) = uVar12;
    }
    plVar5 = (longlong *)FUN_142d4fa40(local_38,param_3);
    plVar6 = plVar11 + 0x67;
    plVar11[0x69] = *plVar5;
    *(int *)(plVar11 + 0x6a) = (int)plVar5[1];
    if (param_6 != plVar6) {
      if (((int)param_6[1] == 0) || (plVar5 = (longlong *)*param_6, plVar5 == (longlong *)0x0)) {
        if (((int)plVar11[0x68] != 0) && (plVar5 = (longlong *)*plVar6, plVar5 != (longlong *)0x0))
        {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          if (*plVar6 != 0) {
            lVar4 = FMemory::Realloc(*plVar6,0,0);
            *plVar6 = lVar4;
          }
          *(undefined4 *)(plVar11 + 0x68) = 0;
        }
      }
      else {
        (**(code **)(*plVar5 + 0x30))(plVar5,plVar6);
      }
    }
    *(undefined4 *)((longlong)plVar11 + 0x3ac) = 0xbf800000;
    plVar6 = (longlong *)(**(code **)(*param_3 + 0x668))(param_3);
    if (plVar6 != (longlong *)0x0) {
      uVar7 = FUN_142c36280();
      lVar4 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar7);
      plVar11[0x60] = lVar4;
      uVar7 = FUN_142e6a0e0();
      lVar4 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar7);
      plVar11[0x61] = lVar4;
    }
    FUN_142d4f4c0(param_1,plVar11);
    FUN_142d4ad70(param_1);
    *param_2 = local_res8;
    TBaseDelegate<FText>::~TBaseDelegate<FText>(param_6);
    lVar4 = *param_7;
  }
  else {
    *param_2 = -1;
    TBaseDelegate<FText>::~TBaseDelegate<FText>(param_6);
    lVar4 = *param_7;
  }
  if (lVar4 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142d31b90 FUN_142d31b90 body=1025 status=ok
// SIG undefined FUN_142d31b90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d31b90(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined4 uVar10;
  longlong *local_res10;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  longlong *local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  undefined1 local_40;
  
  local_98 = 0xffffffff;
  uStack_90 = 0xffffffff;
  local_88 = 0xffffffff;
  uStack_80 = 0xffffffff;
  local_4c = _DAT_1468b5d90;
  local_78 = 0xffffffff;
  local_74 = 0;
  uStack_70 = 0;
  local_6c = 0;
  local_68 = (longlong *)0x0;
  local_60 = 0xffffffff;
  local_5c = 0;
  local_54 = 0;
  local_44 = DAT_1468b5d98;
  if (param_2 == (longlong *)0x0) goto LAB_142d31e54;
  lVar7 = param_2[0x1f];
  if (lVar7 == 0) {
    (**(code **)(*param_2 + 0x368))(param_2);
    lVar7 = param_2[0x1f];
    if (lVar7 != 0) goto LAB_142d31c44;
  }
  else {
LAB_142d31c44:
    if ((*(byte *)(lVar7 + 0x134) & 1) != 0) {
      local_40 = 1;
    }
    if ((*param_4 != 0) || (param_4[1] != 0)) {
      lVar5 = *param_4;
      if (param_4[1] != 0) {
        lVar5 = param_4[1];
      }
      FWeakObjectPtr::operator=(&local_98,lVar5);
    }
    plVar3 = (longlong *)UCelLightData::GetPrivateStaticClass();
    plVar4 = param_2;
    do {
      plVar9 = param_2;
      if (plVar4 == plVar3) break;
      plVar4 = (longlong *)plVar4[6];
      plVar9 = local_68;
    } while (plVar4 != (longlong *)0x0);
    local_68 = plVar9;
    if (*(char *)(param_3 + 0x10c) != '\0') {
      local_54 = CONCAT44(local_54._4_4_,*(undefined4 *)(param_3 + 0x108));
    }
    if (*(char *)(param_3 + 0x11c) == '\0') {
      FUN_142d1c090(lVar7,&local_4c,local_a8,param_4,param_3);
    }
    else {
      local_4c = *(undefined8 *)(param_3 + 0x110);
      local_44 = *(undefined4 *)(param_3 + 0x118);
    }
    if (*(char *)(param_3 + 0x164) == '\0') {
      plVar4 = (longlong *)FBufferReaderBase::Tell(lVar7);
      uVar10 = (**(code **)(*plVar4 + 0x298))(plVar4,*param_4);
    }
    else {
      uVar10 = *(undefined4 *)(param_3 + 0x160);
    }
    local_5c = CONCAT44(uVar10,(undefined4)local_5c);
    if (*(char *)(param_3 + 0x17c) == '\0') {
      uVar10 = FUN_142d9cad0(lVar7 + 200,*param_4);
    }
    else {
      uVar10 = *(undefined4 *)(param_3 + 0x178);
    }
    local_54 = CONCAT44(uVar10,(undefined4)local_54);
    lVar5 = FWeakObjectPtr::Get(param_3 + 0x34);
    if (lVar5 == 0) {
      uVar6 = FUN_142bbbf70(lVar7);
    }
    else {
      uVar6 = FWeakObjectPtr::Get(param_3 + 0x34);
    }
    FWeakObjectPtr::operator=(&uStack_90,uVar6);
    FWeakObjectPtr::operator=(&local_88,*(undefined8 *)(lVar7 + 0x188));
    FWeakObjectPtr::operator=(&uStack_80,*(undefined8 *)(lVar7 + 0x198));
    FWeakObjectPtr::operator=(&local_78,*(undefined8 *)(lVar7 + 0x1a0));
    uStack_70 = (undefined4)*(undefined8 *)(lVar7 + 400);
    local_6c = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 400) >> 0x20);
    FUN_142d27cb0(lVar7,&local_res10,param_3);
    if ((local_res10 != (longlong *)0x0) &&
       (plVar3 = (longlong *)FUN_142e49950(), plVar4 = local_res10, local_res10 != (longlong *)0x0))
    {
LAB_142d31dd0:
      if (plVar4 != plVar3) goto code_r0x000142d31dd5;
      plVar3 = (longlong *)FUN_142e49950();
      for (plVar4 = local_res10;
          (plVar9 = (longlong *)0x0, plVar4 != (longlong *)0x0 &&
          (plVar9 = local_res10, plVar4 != plVar3)); plVar4 = (longlong *)plVar4[6]) {
      }
      lVar7 = plVar9[0x1f];
      if (lVar7 == 0) {
        (**(code **)(*plVar9 + 0x368))(plVar9);
        lVar7 = plVar9[0x1f];
      }
      FWeakObjectPtr::operator=(&local_60,lVar7);
    }
  }
LAB_142d31e2a:
  if (local_68 != (longlong *)0x0) {
    plVar3 = (longlong *)UCelLightData::GetPrivateStaticClass();
    for (plVar4 = local_68; plVar4 != (longlong *)0x0; plVar4 = (longlong *)plVar4[6]) {
      if (plVar4 == plVar3) goto LAB_142d31e8f;
    }
  }
LAB_142d31e54:
  cVar2 = FWeakObjectPtr::IsValid(&uStack_90);
  if ((((cVar2 != '\0') || (lVar7 = FWeakObjectPtr::Get(&local_88), lVar7 != 0)) ||
      (lVar7 = FWeakObjectPtr::Get(&uStack_80), lVar7 != 0)) ||
     (lVar7 = FWeakObjectPtr::Get(&local_78), lVar7 != 0)) {
LAB_142d31e8f:
    if (0.0 < local_5c._4_4_) {
      if (**(longlong **)(param_1 + 0x468) == 0) {
        FUN_14288e3d0(param_1 + 0x28,1);
      }
      puVar8 = (undefined8 *)operator_new(0x68);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = 0;
        *(undefined4 *)(puVar8 + 1) = (undefined4)local_98;
        *(undefined4 *)((longlong)puVar8 + 0xc) = local_98._4_4_;
        *(undefined4 *)(puVar8 + 2) = (undefined4)uStack_90;
        *(undefined4 *)((longlong)puVar8 + 0x14) = uStack_90._4_4_;
        *(undefined4 *)(puVar8 + 3) = (undefined4)local_88;
        *(undefined4 *)((longlong)puVar8 + 0x1c) = local_88._4_4_;
        *(undefined4 *)(puVar8 + 4) = (undefined4)uStack_80;
        *(undefined4 *)((longlong)puVar8 + 0x24) = uStack_80._4_4_;
        *(undefined4 *)(puVar8 + 5) = local_78;
        *(undefined4 *)((longlong)puVar8 + 0x2c) = local_74;
        puVar8[6] = CONCAT44(local_6c,uStack_70);
        puVar8[7] = local_68;
        *(undefined4 *)(puVar8 + 8) = local_60;
        *(undefined4 *)((longlong)puVar8 + 0x44) = (undefined4)local_5c;
        *(float *)(puVar8 + 9) = local_5c._4_4_;
        *(undefined4 *)((longlong)puVar8 + 0x4c) = (undefined4)local_54;
        *(undefined4 *)(puVar8 + 10) = local_54._4_4_;
        *(undefined8 *)((longlong)puVar8 + 0x54) = local_4c;
        *(undefined4 *)((longlong)puVar8 + 0x5c) = local_44;
        *(undefined1 *)(puVar8 + 0xc) = local_40;
        puVar1 = *(undefined8 **)(param_1 + 0x460);
        *(undefined8 **)(param_1 + 0x460) = puVar8;
        *puVar1 = puVar8;
      }
    }
  }
  return;
code_r0x000142d31dd5:
  plVar4 = (longlong *)plVar4[6];
  if (plVar4 == (longlong *)0x0) goto LAB_142d31e2a;
  goto LAB_142d31dd0;
}



// FUNCTION 142d31fa0 FUN_142d31fa0 body=1091 status=ok
// SIG undefined FUN_142d31fa0(void)

void FUN_142d31fa0(longlong *param_1,longlong param_2,undefined8 param_3,float param_4,
                  ulonglong param_5,float *param_6,undefined8 param_7,undefined8 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  float *pfVar11;
  int iVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  undefined1 local_res10 [8];
  undefined8 in_stack_fffffffffffffec8;
  undefined4 uVar20;
  undefined8 local_108;
  float local_100;
  undefined1 local_f8 [4];
  float local_f4;
  undefined8 local_e8;
  float local_e0;
  float local_d0;
  undefined1 local_cc [180];
  
  uVar20 = (undefined4)((ulonglong)in_stack_fffffffffffffec8 >> 0x20);
  if (((param_2 != 0) && (0.0001 <= param_4)) &&
     (lVar8 = (**(code **)(*param_1 + 0x148))(), lVar8 != 0)) {
    uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
    cVar7 = UWorld::IsInSeamlessTravel(uVar9);
    if (cVar7 == '\0') {
      iVar12 = (int)param_1[7];
      *(int *)(param_1 + 7) = iVar12 + 1;
      if (*(int *)((longlong)param_1 + 0x3c) < iVar12 + 1) {
        TArray<`UCombatUtil::ApplyHits'::`2'::FMergedHits,FDefaultAllocator>::ResizeGrow
                  (param_1 + 6,iVar12);
      }
      local_108 = *(undefined8 *)param_6;
      local_100 = param_6[2];
      lVar13 = (longlong)iVar12 * 0x170 + param_1[6];
      FUN_142d2dff0(lVar13,param_2,param_8,param_3,CONCAT44(uVar20,param_4),param_5,&local_108);
      fVar1 = param_6[2];
      fVar2 = *param_6;
      fVar3 = param_6[1];
      uVar9 = *(undefined8 *)param_6;
      local_108 = *(undefined8 *)param_6;
      local_100 = fVar1 - param_4;
      lVar8 = *(longlong *)(lVar13 + 0x18);
      local_e0 = local_100;
      if (lVar8 == 0) {
        lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
        *(longlong *)(lVar13 + 0x18) = lVar8;
      }
      iVar12 = 0;
      if (lVar8 != 0) {
        puVar10 = (undefined8 *)
                  FUN_142330010(lVar8,local_res10,1,lVar13 + 0xb0,&local_108,
                                param_5 & 0xffffffff00000000,lVar13 + 0x38,&DAT_146aefe68,
                                param_1 + 8,0);
        *(undefined8 *)(lVar13 + 0xc0) = *puVar10;
      }
      local_100 = fVar1 + param_4;
      local_108 = uVar9;
      local_e0 = local_100;
      FUN_142d323f0(lVar13,&local_108,param_1,0);
      fVar19 = 0.0;
      if (0 < DAT_1466ad3e8) {
        fVar19 = 360.0 / (float)DAT_1466ad3e8;
      }
      FVector::Rotation(param_7,local_f8);
      if (0 < DAT_1466ad3e8) {
        do {
          pfVar11 = (float *)FRotator::Vector(local_f8,local_cc);
          fVar4 = pfVar11[1];
          fVar5 = *pfVar11;
          fVar6 = pfVar11[2];
          fVar15 = fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6;
          if (fVar15 == 1.0) {
            local_108 = *(undefined8 *)pfVar11;
            local_100 = pfVar11[2];
            fVar14 = (float)((ulonglong)local_108 >> 0x20);
            fVar16 = local_100;
            fVar18 = (float)local_108;
          }
          else {
            fVar14 = DAT_1468b5d94;
            fVar16 = DAT_1468b5d98;
            fVar18 = DAT_1468b5d90;
            if (1e-08 <= fVar15) {
              auVar17 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
              fVar16 = auVar17._0_4_;
              fVar16 = fVar16 + fVar16 * (0.5 - fVar15 * 0.5 * fVar16 * fVar16);
              fVar16 = fVar16 + fVar16 * (0.5 - fVar15 * 0.5 * fVar16 * fVar16);
              fVar18 = fVar5 * fVar16;
              fVar14 = fVar4 * fVar16;
              fVar16 = fVar6 * fVar16;
            }
          }
          local_e0 = fVar16 * param_4 + fVar1;
          local_e8 = CONCAT44(fVar14 * param_4 + fVar3,fVar18 * param_4 + fVar2);
          local_d0 = local_e0;
          FUN_142d323f0(lVar13,&local_e8,param_1,0);
          iVar12 = iVar12 + 1;
          local_f4 = local_f4 + fVar19;
        } while (iVar12 < DAT_1466ad3e8);
      }
    }
  }
  return;
}



// FUNCTION 142d323f0 FUN_142d323f0 body=372 status=ok
// SIG undefined FUN_142d323f0(void)

void FUN_142d323f0(longlong param_1,undefined8 param_2,longlong *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  
  lVar3 = 0;
  lVar5 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if (param_3 != (longlong *)0x0) {
      lVar3 = (**(code **)(*param_3 + 0x148))(param_3);
    }
    *(longlong *)(param_1 + 0x18) = lVar3;
    lVar5 = lVar3;
    if (lVar3 == 0) {
      return;
    }
  }
  if (param_4 == '\0') {
    iVar1 = *(int *)(param_1 + 0x168);
    iVar2 = iVar1 + 1;
    *(int *)(param_1 + 0x168) = iVar2;
    if (*(int *)(param_1 + 0x16c) < iVar2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 0x160);
    }
    puVar6 = (undefined8 *)((longlong)iVar1 * 0xa0 + *(longlong *)(param_1 + 0x160));
    *puVar6 = 0;
    *(undefined4 *)(puVar6 + 1) = 0xffffffff;
    *(undefined1 *)((longlong)puVar6 + 0xc) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x74) = 0xffffffff;
    *(undefined4 *)(puVar6 + 0xf) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x7c) = 0xffffffff;
    *(undefined4 *)(puVar6 + 0x10) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x84) = 0xffffffff;
    *(undefined4 *)(puVar6 + 0x11) = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    _guard_xfg_dispatch_icall_nop(puVar6 + 2,0,0x90);
    *(undefined4 *)((longlong)puVar6 + 0x1c) = 0x3f800000;
    lVar5 = *(longlong *)(param_1 + 0x18);
  }
  else {
    puVar6 = (undefined8 *)(param_1 + 0xc0);
  }
  puVar4 = (undefined8 *)
           FUN_142330010(lVar5,local_res8,1,param_1 + 0xb0,param_2,0,param_1 + 0x38,&DAT_146aefe68,
                         param_3 + 8,0);
  *puVar6 = *puVar4;
  return;
}



// FUNCTION 142d32570 FUN_142d32570 body=232 status=ok
// SIG undefined FUN_142d32570(void)

void FUN_142d32570(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 local_res8;
  undefined4 local_resc;
  
  lVar6 = FWeakObjectPtr::Get(param_1 + 1);
  if ((lVar6 == 0) || (*param_1 == 0)) {
    *param_1 = 0;
    FWeakObjectPtr::operator=(&local_res8,0);
    *(undefined4 *)(param_1 + 1) = local_res8;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_resc;
    return;
  }
  lVar6 = FWeakObjectPtr::Get(param_1 + 1);
  bVar3 = false;
  *(int *)(lVar6 + 0x8bc) = *(int *)(lVar6 + 0x8bc) + 1;
  iVar7 = *(int *)(lVar6 + 0x8bc);
  iVar5 = *(int *)(lVar6 + 0x8b0) + -1;
  lVar9 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar8 = lVar9 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(lVar6 + 0x8a8);
      if ((*(int *)(lVar8 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar8 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_142d325f1:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_1);
        if (cVar4 == '\0') goto LAB_142d325f1;
      }
      lVar8 = lVar8 + -0x10;
      lVar9 = lVar9 + -1;
    } while (-1 < lVar9);
    iVar7 = *(int *)(lVar6 + 0x8bc);
  }
  *(int *)(lVar6 + 0x8bc) = iVar7 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(lVar6 + 0x8a8),0);
  }
  return;
}



// FUNCTION 142d32660 FUN_142d32660 body=1143 status=ok
// SIG undefined FUN_142d32660(void)

ulonglong FUN_142d32660(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  uint **ppuVar2;
  longlong *plVar3;
  uint *puVar4;
  uint uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  uint *puVar16;
  int local_res8 [2];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_c8;
  uint *puStack_c0;
  uint local_b8;
  uint uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90 [2];
  longlong *local_88;
  undefined4 uStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 uStack_40;
  
  local_res10 = param_2;
  local_res18 = param_3;
  if (*(char *)(param_1 + 0x98) == '\0') {
    FUN_142d3d6e0();
    *(undefined1 *)(param_1 + 0x98) = 1;
  }
  local_c8 = 0x100000000;
  plVar1 = (longlong *)(param_1 + 0x48);
  uVar5 = *(uint *)(param_1 + 0x70);
  puVar4 = (uint *)(param_1 + 0x58);
  uStack_b4 = 0;
  iStack_b0 = 0;
  if (uVar5 != 0) {
    puVar16 = *(uint **)(param_1 + 0x68);
    if (*(uint **)(param_1 + 0x68) == (uint *)0x0) {
      puVar16 = puVar4;
    }
    uVar9 = *puVar16;
    iStack_b0 = 0;
    iVar10 = 0;
    while (uVar9 == 0) {
      iStack_b0 = iStack_b0 + 0x20;
      uVar11 = (ulonglong)local_c8 >> 0x20;
      local_c8 = CONCAT44((int)uVar11,iVar10 + 1);
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
      goto LAB_142d3274a;
      uVar9 = puVar16[(longlong)iVar10 + 1];
      iVar10 = iVar10 + 1;
    }
    uVar9 = -uVar9 & uVar9;
    iVar10 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    local_c8 = CONCAT44(uVar9,(undefined4)local_c8);
    if (uVar9 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_b4 = (iStack_b0 - iVar10) + 0x1f;
    if ((int)uVar5 < (int)uStack_b4) {
LAB_142d3274a:
      uStack_b4 = uVar5;
    }
  }
  uVar9 = *(uint *)(param_1 + 0x70);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_b4;
  local_68 = CONCAT44(uStack_ac,iStack_b0);
  local_b8 = -1 << ((byte)uVar9 & 0x1f);
  uStack_58 = local_c8;
  uVar8 = uStack_58;
  uVar15 = uVar9 & 0xffffffe0;
  uStack_58._0_4_ = (undefined4)local_c8;
  uStack_58._4_4_ = (uint)((ulonglong)local_c8 >> 0x20);
  uStack_80 = (undefined4)uStack_58;
  uStack_7c = uStack_58._4_4_;
  puStack_c0 = puVar4;
  uStack_b4 = uVar9;
  local_78 = puVar4;
  local_60 = plVar1;
  uStack_58 = uVar8;
  puStack_50 = puVar4;
  uStack_40 = local_68;
  local_88 = plVar1;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  if (uVar9 != uVar5) {
    puVar16 = *(uint **)(param_1 + 0x68);
    if (*(uint **)(param_1 + 0x68) == (uint *)0x0) {
      puVar16 = puVar4;
    }
    uVar13 = puVar16[(int)uVar9 >> 5] & local_b8;
    iVar10 = (int)uVar9 >> 5;
    while (uVar13 == 0) {
      uVar15 = uVar15 + 0x20;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
      goto LAB_142d32812;
      uVar13 = puVar16[(longlong)iVar10 + 1];
      local_b8 = 0xffffffff;
      iVar10 = iVar10 + 1;
    }
    uVar13 = -uVar13 & uVar13;
    iVar10 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar13 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_b4 = (uVar15 - iVar10) + 0x1f;
    uVar9 = uStack_b4;
    if ((int)uVar5 < (int)uStack_b4) {
LAB_142d32812:
      uStack_b4 = uVar5;
      uVar9 = uVar5;
    }
  }
  do {
    if (((uStack_6c == uVar9) && (local_78 == puVar4)) && (local_88 == plVar1)) {
      return CONCAT71((int7)(int3)(uStack_6c >> 8),1);
    }
    plVar3 = (longlong *)(*local_88 + (longlong)(int)uStack_6c * 0x18);
    if (*(longlong *)(*local_88 + (longlong)(int)uStack_6c * 0x18) != 0) {
      iVar10 = (int)plVar3[1];
      if ((iVar10 < 0) || (*(int *)(param_1 + 0x38) <= iVar10)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        local_c8 = 0;
        puStack_c0 = (uint *)((ulonglong)puStack_c0 & 0xffffffff00000000);
        local_b8 = 0;
        uStack_b4 = 0;
        iStack_b0 = 0;
        uStack_ac = 0;
        uVar11 = FUN_142de78e0((longlong)iVar10 * 0x88 + *(longlong *)(param_1 + 0x30),local_res10,
                               local_res18,&local_c8);
        if ((char)uVar11 == '\0') {
          if (*(char *)(param_1 + 0x41) == '\0') {
            plVar6 = (longlong *)*plVar3;
            plVar12 = (longlong *)plVar6[0x1f];
            if (plVar12 == (longlong *)0x0) {
              uVar11 = (**(code **)(*plVar6 + 0x368))(plVar6);
              plVar12 = (longlong *)plVar6[0x1f];
              if (plVar12 == (longlong *)0x0) goto LAB_142d32aac;
            }
            if ((char)plVar12[6] == '\0') {
LAB_142d32aac:
              if (CONCAT44(uStack_b4,local_b8) != 0) {
                uVar11 = FMemory::Free();
              }
              return uVar11 & 0xffffffffffffff00;
            }
            if (((int)plVar12[5] == 0) && (*(int *)((longlong)plVar12 + 0x2c) == 0)) {
              (**(code **)(*plVar12 + 0x278))(plVar12,param_4,&local_c8);
              TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
              ::FindId(param_4 + 0xc0,&local_9c,*plVar3);
              if ((local_9c == -1) ||
                 (lVar14 = (longlong)local_9c * 0x30 + *(longlong *)(param_4 + 0xc0), lVar14 == 0))
              {
                local_a8 = plVar3;
                FUN_142bd0120(param_4 + 0xc0,&local_98,&local_a8,0);
                iVar10 = local_98;
                goto LAB_142d329a2;
              }
              goto LAB_142d329b1;
            }
            TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
            ::FindId(param_4 + 0xc0,&local_94,*plVar3);
            if ((local_94 == -1) ||
               (lVar14 = (longlong)local_94 * 0x30 + *(longlong *)(param_4 + 0xc0), lVar14 == 0)) {
              local_a8 = plVar3;
              FUN_142bd0120(param_4 + 0xc0,local_90,&local_a8,0);
              lVar14 = (longlong)local_90[0] * 0x30 + *(longlong *)(param_4 + 0xc0);
            }
            ppuVar2 = (uint **)(lVar14 + 0x18);
            *(undefined8 *)(lVar14 + 8) = 0;
            *(undefined4 *)(lVar14 + 0x10) = 0;
            if (ppuVar2 != &puStack_50) {
              if (*ppuVar2 != (uint *)0x0) {
                FMemory::Free();
              }
              *ppuVar2 = (uint *)0x0;
              *(undefined8 *)(lVar14 + 0x20) = 0;
            }
          }
        }
        else {
          TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
          ::FindId(param_4 + 0xc0,local_res8,*plVar3);
          if ((local_res8[0] == -1) ||
             (lVar14 = (longlong)local_res8[0] * 0x30 + *(longlong *)(param_4 + 0xc0), lVar14 == 0))
          {
            local_a8 = plVar3;
            FUN_142bd0120(param_4 + 0xc0,&local_a0,&local_a8,0);
            iVar10 = local_a0;
LAB_142d329a2:
            lVar14 = (longlong)iVar10 * 0x30 + *(longlong *)(param_4 + 0xc0);
          }
LAB_142d329b1:
          puVar16 = (uint *)(lVar14 + 0x18);
          *(undefined8 *)(lVar14 + 8) = local_c8;
          *(undefined4 *)(lVar14 + 0x10) = puStack_c0._0_4_;
          if (puVar16 != &local_b8) {
            if (*(longlong *)puVar16 != 0) {
              FMemory::Free();
            }
            *(longlong *)puVar16 = CONCAT44(uStack_b4,local_b8);
            local_b8 = 0;
            uStack_b4 = 0;
            *(int *)(lVar14 + 0x20) = iStack_b0;
            *(undefined4 *)(lVar14 + 0x24) = uStack_ac;
            iStack_b0 = 0;
            uStack_ac = 0;
          }
        }
        if (CONCAT44(uStack_b4,local_b8) != 0) {
          FMemory::Free();
        }
      }
    }
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
  } while( true );
}



// FUNCTION 142d32ae0 FUN_142d32ae0 body=199 status=ok
// SIG undefined FUN_142d32ae0(void)

void FUN_142d32ae0(longlong *param_1,undefined4 param_2,longlong *param_3)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  cVar1 = FUN_142d1f200();
  plVar3 = param_3;
  if ((param_3 == (longlong *)0x0) &&
     (plVar3 = (longlong *)thunk_FUN_142d54de0(), plVar3 == (longlong *)0x0)) {
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
  if (((param_1[1] != 0) && (param_1[2] != 0)) &&
     ((cVar1 == '\0' || (cVar2 = (**(code **)(*(longlong *)param_1[2] + 0x10))(), cVar2 != '\0'))))
  {
    if (param_1[1] == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar4 + 0x18))(plVar4,param_2,plVar3);
  }
  if ((cVar1 == '\0') && (*param_1 != 0)) {
    FUN_142d29b80(*param_1,param_2,plVar3);
  }
  if (param_3 == (longlong *)0x0) {
    FUN_142d266f0(plVar3);
  }
  return;
}



// FUNCTION 142d32bb0 FUN_142d32bb0 body=373 status=ok
// SIG undefined FUN_142d32bb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d32bb0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  longlong local_1d0;
  longlong *local_1c8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  FUN_142d0aa70(&local_1d8,param_1,param_6,0);
  local_1a0 = param_5;
  local_198 = param_4;
  local_190 = param_3;
  cVar1 = FUN_142d1f200(&local_1d8);
  plVar3 = (longlong *)thunk_FUN_142d54de0();
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3,&local_1d8);
    if (((local_1d0 != 0) && (local_1c8 != (longlong *)0x0)) &&
       ((cVar1 == '\0' || (cVar2 = (**(code **)(*local_1c8 + 0x10))(local_1c8), cVar2 != '\0')))) {
      plVar4 = (longlong *)0x0;
      if (local_1d0 != 0) {
        plVar4 = local_1c8;
      }
      (**(code **)(*plVar4 + 0x18))(plVar4,param_2,plVar3);
    }
    if ((cVar1 == '\0') && (local_1d8 != 0)) {
      FUN_142d29b80(local_1d8,param_2,plVar3);
    }
    FUN_142d266f0(plVar3);
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    plVar3 = local_88;
    if (local_68 != (longlong *)0x0) {
      plVar3 = local_68;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142d32d30 FUN_142d32d30 body=30 status=ok
// SIG undefined FUN_142d32d30(void)

void FUN_142d32d30(undefined8 param_1,undefined8 param_2)

{
  FUN_142d32ae0(param_1,param_2,0);
  FUN_140a7c7a0(param_1);
  return;
}



// FUNCTION 142d32d50 FUN_142d32d50 body=1931 status=ok
// SIG undefined FUN_142d32d50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d32d50(ulonglong param_1,undefined4 param_2,float *param_3,float param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,ulonglong param_8,
                  undefined8 param_9,undefined8 param_10,undefined4 param_11,byte param_12,
                  undefined8 param_13,undefined8 param_14,char param_15)

{
  void **ppvVar1;
  uint uVar2;
  void *_Src;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint *puVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_418 [32];
  undefined8 local_3f8;
  ulonglong local_3f0;
  undefined4 local_3e8;
  float local_3d8;
  float fStack_3d4;
  float local_3d0;
  undefined8 local_3c8;
  float local_3c0;
  uint local_3b8;
  uint uStack_3b4;
  uint *puStack_3b0;
  int local_3a8;
  uint uStack_3a4;
  uint uStack_3a0;
  undefined4 uStack_39c;
  undefined8 local_398;
  float local_390;
  float local_38c;
  byte local_388;
  undefined1 local_387;
  void *local_380;
  undefined8 local_378;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  ulonglong local_348;
  undefined8 local_340;
  float local_338;
  float local_32c;
  longlong *local_328;
  uint uStack_320;
  uint uStack_31c;
  uint *local_318;
  uint uStack_310;
  uint uStack_30c;
  undefined8 local_308;
  float local_2f8;
  longlong *local_2f0;
  undefined8 uStack_2e8;
  uint *puStack_2e0;
  uint uStack_2d8;
  uint uStack_2d4;
  undefined8 uStack_2d0;
  longlong *local_2c8;
  longlong local_2c0;
  longlong *local_2b8;
  ulonglong local_2b0;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined1 local_278 [152];
  undefined8 local_1e0;
  undefined8 local_1bc;
  float local_1b4;
  undefined8 local_1b0;
  float local_1a8;
  longlong local_178 [4];
  longlong *local_158;
  int local_148;
  longlong local_128;
  longlong local_118 [2];
  uint local_108 [4];
  uint *local_f8;
  uint local_f0;
  longlong local_d8;
  undefined4 local_d0;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_418;
  local_360 = param_9;
  local_358 = param_10;
  local_368 = param_13;
  local_350 = param_14;
  if (param_1 == 0) {
    return;
  }
  uVar11 = 0;
  if (param_8 == 0) {
    lVar7 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
         ) != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    param_8 = param_1;
    if (!bVar3) {
      uVar8 = 0;
      param_8 = uVar11;
      goto LAB_142d32e8d;
    }
  }
  lVar7 = FUN_1429d7ab0();
  if ((*(int *)(*(longlong *)(param_8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
      != lVar7 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  uVar8 = param_8;
  if (!bVar3) {
    uVar8 = FUN_140a63ba0(param_8);
  }
LAB_142d32e8d:
  if (param_15 != '\0') {
    fVar15 = (float)FUN_142d3bb80(uVar8);
    param_4 = param_4 * fVar15;
  }
  local_3c0 = param_3[2];
  local_3c8 = *(undefined8 *)param_3;
  local_3e8 = param_11;
  local_3f8 = param_7;
  local_3f0 = param_8;
  FUN_142d395a0(local_118,param_1,&local_3c8,param_4);
  local_390 = param_3[2];
  local_318 = local_108;
  puStack_3b0 = local_318;
  local_38c = param_4;
  local_380 = (void *)0x0;
  local_378 = 0;
  local_398 = *(undefined8 *)param_3;
  local_388 = param_12 ^ 1;
  local_387 = 3;
  local_3b8 = 0;
  uStack_3b4 = 1;
  local_3a8 = 0xffffffff;
  uStack_3a4 = 0;
  uStack_3a0 = 0;
  if (local_f0 != 0) {
    puVar14 = local_108;
    if (local_f8 != (uint *)0x0) {
      puVar14 = local_f8;
    }
    uVar2 = *puVar14;
    uVar13 = uVar11;
    while (uVar2 == 0) {
      iVar6 = (int)uVar11;
      uStack_3a0 = (int)uVar13 + 0x20;
      uVar13 = (ulonglong)uStack_3a0;
      uVar11 = (ulonglong)(iVar6 + 1U);
      local_3b8 = iVar6 + 1U;
      if ((int)((local_f0 - 1) + ((int)(local_f0 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) {
        uStack_3a4 = local_f0;
        goto LAB_142d32fda;
      }
      uVar2 = puVar14[(longlong)iVar6 + 1];
      local_3a8 = 0xffffffff;
    }
    uStack_3b4 = -uVar2 & uVar2;
    iVar6 = 0x1f;
    if (uStack_3b4 != 0) {
      for (; uStack_3b4 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_3b4 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_3a4 = (uStack_3a0 - iVar6) + 0x1f;
    if ((int)local_f0 < (int)uStack_3a4) {
      uStack_3a4 = local_f0;
    }
  }
LAB_142d32fda:
  uStack_310 = 0xffffffff;
  uStack_30c = uStack_3a4;
  local_308 = CONCAT44(uStack_39c,uStack_3a0);
  local_2f0 = local_118;
  uStack_2e8 = CONCAT44(uStack_3b4,local_3b8);
  local_3a8 = -1 << ((byte)local_f0 & 0x1f);
  uStack_3a4 = local_f0;
  local_348 = (ulonglong)local_f0;
  uStack_320 = local_3b8;
  uStack_31c = uStack_3b4;
  puStack_2e0 = local_318;
  uStack_2d0 = local_308;
  local_328 = local_2f0;
  uStack_2d8 = uStack_310;
  uStack_2d4 = uStack_30c;
  do {
    if ((uStack_30c == (uint)local_348) && (local_318 == local_108)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_328 == local_118)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      if (local_380 != (void *)0x0) {
        FMemory::Free();
      }
      local_d0 = 0;
      if (local_d8 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (local_118);
      return;
    }
    plVar9 = (longlong *)((longlong)(int)uStack_30c * 0x20 + *local_328);
    lVar7 = *plVar9;
    ppvVar1 = (void **)(plVar9 + 1);
    if (lVar7 != 0) {
      FUN_142d0aa70(&local_2c8,lVar7,param_8,local_368);
      local_290 = local_360;
      local_280 = param_5;
      local_288 = param_6;
      lVar7 = *(longlong *)(lVar7 + 0x168);
      if (lVar7 == 0) {
        local_338 = DAT_1468b5d98;
        puVar10 = &local_340;
        local_340 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      }
      else {
        puVar10 = &local_3c8;
        local_3c0 = *(float *)(lVar7 + 0x228);
        local_3c8 = *(undefined8 *)(lVar7 + 0x220);
      }
      local_32c = *(float *)(puVar10 + 1);
      local_3d8 = (float)*puVar10 - *param_3;
      local_3d0 = local_32c - param_3[2];
      fStack_3d4 = (float)((ulonglong)*puVar10 >> 0x20) - param_3[1];
      fVar15 = local_3d8 * local_3d8 + fStack_3d4 * fStack_3d4 + local_3d0 * local_3d0;
      if (fVar15 != 1.0) {
        if (1e-08 <= fVar15) {
          auVar17 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
          fVar16 = auVar17._0_4_;
          fVar16 = fVar16 + fVar16 * (0.5 - fVar15 * 0.5 * fVar16 * fVar16);
          fVar16 = fVar16 + fVar16 * (0.5 - fVar15 * 0.5 * fVar16 * fVar16);
          local_3d8 = local_3d8 * fVar16;
          fStack_3d4 = fVar16 * fStack_3d4;
          local_3d0 = fVar16 * local_3d0;
        }
        else {
          local_3d8 = DAT_1468b5d90;
          local_3d0 = DAT_1468b5d98;
          fStack_3d4 = DAT_1468b5d94;
        }
      }
      local_1bc = CONCAT44(fStack_3d4,local_3d8);
      local_1b4 = local_3d0;
      local_2b0 = uVar8;
      fVar15 = (float)FUN_142d9cad0(local_358,0);
      local_2f8 = local_1b4 * fVar15;
      local_1e0 = local_350;
      local_1b0 = CONCAT44(local_1bc._4_4_ * fVar15,(float)local_1bc * fVar15);
      local_1a8 = local_2f8;
      if (0 < (int)plVar9[2]) {
        FUN_140729f20(local_278,*ppvVar1);
      }
      if (&local_380 != ppvVar1) {
        iVar6 = (int)plVar9[2];
        _Src = *ppvVar1;
        local_378 = CONCAT44(local_378._4_4_,iVar6);
        if ((iVar6 == 0) && (local_378._4_4_ == 0)) {
          local_378 = 0;
        }
        else {
          TArray<FLiveLinkFrame,FDefaultAllocator>::ResizeForCopy(&local_380,iVar6);
          _guard_xfg_dispatch_icall_nop(local_380,_Src,(longlong)iVar6 * 0x90);
        }
      }
      cVar4 = FUN_142d1f200(&local_2c8);
      plVar9 = (longlong *)thunk_FUN_142d54de0();
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x10))(plVar9,&local_2c8);
        FUN_142d29240(plVar9,1,&local_398);
        if ((local_2c0 != 0) && (local_2b8 != (longlong *)0x0)) {
          if (cVar4 != '\0') {
            cVar5 = (**(code **)(*local_2b8 + 0x10))(local_2b8);
            if (cVar5 == '\0') goto LAB_142d333a3;
          }
          plVar12 = (longlong *)0x0;
          if (local_2c0 != 0) {
            plVar12 = local_2b8;
          }
          (**(code **)(*plVar12 + 0x18))(plVar12,param_2,plVar9);
        }
LAB_142d333a3:
        if ((local_2c8 != (longlong *)0x0) && (cVar4 == '\0')) {
          (**(code **)(*local_2c8 + 0x400))(local_2c8,param_2,plVar9,&local_398);
        }
      }
      FUN_142d266f0(plVar9);
      if (local_128 != 0) {
        FMemory::Free();
      }
      if (local_148 != 0) {
        plVar9 = local_178;
        if (local_158 != (longlong *)0x0) {
          plVar9 = local_158;
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9,0);
        }
      }
      if (local_158 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    uStack_310 = uStack_310 & ~uStack_31c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_320);
  } while( true );
}



// FUNCTION 142d334e0 FUN_142d334e0 body=391 status=ok
// SIG undefined FUN_142d334e0(void)

void FUN_142d334e0(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined1 param_4,
                  undefined1 param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  lVar2 = FUN_142d3b850(param_1,param_3);
  if (((((*param_3 != 0) && (lVar2 != 0)) && ((*(byte *)(*param_3 + 0x48) & 0x20) != 0)) &&
      (cVar1 = FUN_142d3e230(param_1,lVar2), cVar1 == '\0')) &&
     ((lVar3 = FUN_142d39ba0(param_1), lVar3 == 0 || (cVar1 = FUN_142d1f620(lVar3), cVar1 == '\0')))
     ) {
    fVar7 = (float)FUN_142d39b50(lVar2);
    FUN_142d48590(lVar2,fVar7 - *(float *)(param_3 + 2));
    uVar8 = FUN_142d39b50(lVar2);
    lVar3 = param_3[2];
    cVar1 = FUN_142d52a00(lVar2 + 0x58);
    if (cVar1 == '\0') {
      fVar9 = *(float *)(lVar2 + 0x50);
    }
    else {
      uVar4 = FUN_142d52a20(lVar2 + 0x58);
      lVar5 = FArchive::operator<<(uVar4);
      fVar9 = *(float *)(lVar5 + 0x20);
    }
    if ((0.0 < fVar9) && (iVar6 = 0, 0 < *(int *)(lVar2 + 0x20))) {
      do {
        FUN_142d33670(param_1,lVar2,(longlong)iVar6 * 0x50 + *(longlong *)(lVar2 + 0x18),iVar6,
                      param_2,(int)lVar3,fVar7,uVar8,param_4,param_5);
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar2 + 0x20));
    }
  }
  return;
}



// FUNCTION 142d33670 FUN_142d33670 body=1262 status=ok
// SIG undefined FUN_142d33670(void)

void FUN_142d33670(longlong param_1,longlong *param_2,longlong param_3,undefined4 param_4,
                  longlong param_5,float param_6,float param_7,float param_8,char param_9,
                  char param_10)

{
  float fVar1;
  bool bVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  longlong *local_res18;
  undefined4 local_res20;
  longlong local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [176];
  
  if ((0 < *(int *)(param_3 + 0x20)) && (*(int *)(param_3 + 0x20) <= *(int *)(param_3 + 0x34))) {
    return;
  }
  if (((param_9 != '\0') && (param_10 == '\0')) && ((*(byte *)(param_3 + 0x30) & 4) == 0)) {
    return;
  }
  local_res18 = (longlong *)0x0;
  local_res20 = param_4;
  if ((*(longlong *)(param_3 + 0x28) != 0) &&
     (lVar8 = *(longlong *)(param_5 + 0xe0), lVar8 != *(longlong *)(param_3 + 0x28))) {
    if ((*(byte *)(param_3 + 0x30) & 1) == 0) {
      return;
    }
    lVar6 = FWeakObjectPtr::Get(param_5 + 0xd4);
    if (lVar6 == 0) {
      return;
    }
    lVar7 = FUN_142a0cc80();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return;
    }
    if (*(int *)(param_3 + 0x44) == -1) {
      FUN_1423aca10(lVar6,*(undefined8 *)(param_3 + 0x28),param_3 + 0x44,param_3 + 0x48);
    }
    iVar5 = FUN_1423ac950(lVar6,lVar8);
    if (iVar5 < *(int *)(param_3 + 0x44)) {
      return;
    }
    if (*(int *)(param_3 + 0x48) < iVar5) {
      return;
    }
  }
  uVar3 = local_res20;
  lVar8 = *(longlong *)(param_1 + 0x120);
  if (lVar8 == 0) {
    lVar8 = FUN_1423407b0(param_1);
  }
  cVar4 = *(char *)(param_3 + 0xc);
  fVar1 = *(float *)(lVar8 + 0x790);
  if (cVar4 == '\0') {
    fVar11 = (float)FUN_142d3c080(param_2);
    fVar14 = (float)FUN_142d3c080(param_2);
    if (param_7 / fVar11 <= *(float *)(param_3 + 8)) {
      return;
    }
    if (*(float *)(param_3 + 8) < param_8 / fVar14) {
      return;
    }
  }
  else {
    if (cVar4 == '\x01') {
      fVar11 = (float)FUN_142d3c080(param_2);
      bVar2 = param_8 / fVar11 < *(float *)(param_3 + 8) ||
              param_8 / fVar11 == *(float *)(param_3 + 8);
    }
    else {
      if (cVar4 != '\x02') {
        if (cVar4 != '\x03') {
          return;
        }
        if ((*(float *)(param_3 + 0x40) == 0.0) ||
           (fVar11 = fVar1 - *(float *)(param_3 + 0x40),
           *(float *)(param_3 + 0x18) <= fVar11 && fVar11 != *(float *)(param_3 + 0x18))) {
          *(float *)(param_3 + 0x40) = fVar1;
          *(undefined4 *)(param_3 + 0x3c) = 0;
        }
      }
      plVar10 = *(longlong **)(param_3 + 0x10);
      if ((plVar10 != (longlong *)0x0) &&
         (cVar4 = (**(code **)(*plVar10 + 0x278))(plVar10,param_5,0), cVar4 == '\0')) {
        return;
      }
      fVar12 = (float)FUN_142d3c080(param_2);
      fVar11 = *(float *)(param_3 + 0x3c);
      fVar13 = (float)FUN_142d3c080(param_2);
      *(float *)(param_3 + 0x3c) = param_6 + *(float *)(param_3 + 0x3c);
      fVar14 = *(float *)(param_3 + 8);
      if ((fVar14 <= 0.0) ||
         ((fVar11 * (1.0 / fVar12) < fVar14 && (fVar14 <= (fVar11 + param_6) / fVar13)))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      plVar10 = param_2;
      fVar11 = (float)FUN_142d3c080();
      fVar11 = fVar11 * *(float *)(param_3 + 8);
      if ((0.0001 < fVar11) && (fVar14 = *(float *)(param_3 + 0x3c), fVar11 <= fVar14)) {
        if (1e-08 < ABS(fVar11)) {
          fVar11 = (float)(int)(fVar14 / fVar11) * fVar11;
          if (ABS(fVar14) < ABS(fVar11)) {
            fVar11 = fVar14;
          }
          *(float *)(param_3 + 0x3c) = fVar14 - fVar11;
        }
        else {
          AK::MemoryMgr::StartProfileThreadUsage((long)plVar10);
          *(undefined4 *)(param_3 + 0x3c) = 0;
        }
      }
    }
    if (!bVar2) {
      return;
    }
  }
  if ((0.0 < *(float *)(param_3 + 0x38)) &&
     (fVar1 - *(float *)(param_3 + 0x38) < *(float *)(param_3 + 0x1c))) {
    return;
  }
  if (((*(byte *)(param_3 + 0x30) & 4) != 0) && (param_9 == '\0')) {
    return;
  }
  local_140 = (undefined4)param_2[5];
  local_148 = *param_2;
  puVar9 = (undefined8 *)FUN_142d2e3b0(local_d8,&local_148,uVar3,param_5);
  *(int *)(param_3 + 0x34) = *(int *)(param_3 + 0x34) + 1;
  *(float *)(param_3 + 0x38) = fVar1;
  if (((*(byte *)(param_3 + 0x30) & 6) != 0) &&
     ((iVar5 = FUN_142340f30(param_1), iVar5 == 2 || (iVar5 = FUN_142340f30(param_1), iVar5 == 1))))
  {
    FUN_142e65690(param_1,puVar9);
  }
  if ((*(byte *)(param_3 + 0x30) & 2) != 0) {
    lVar8 = FUN_1422312c0(*(undefined8 *)(param_1 + 0x118));
    if (lVar8 == 0) {
      return;
    }
    lVar6 = FUN_142e4e4a0();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return;
    }
    cVar4 = FUN_142d6fcd0(lVar8);
    if (cVar4 != '\0') {
      return;
    }
  }
  local_res18 = (longlong *)0x0;
  local_148 = 0;
  FUN_142d46d50(param_1,param_3,&local_res18,&local_148);
  if ((local_res18 != (longlong *)0x0) && (local_148 != 0)) {
    local_138 = *puVar9;
    uStack_130 = puVar9[1];
    local_128 = puVar9[2];
    uStack_120 = puVar9[3];
    local_118 = puVar9[4];
    uStack_110 = puVar9[5];
    local_108 = puVar9[6];
    uStack_100 = puVar9[7];
    local_f8 = *(undefined4 *)(puVar9 + 8);
    uStack_f4 = *(undefined4 *)((longlong)puVar9 + 0x44);
    uStack_f0 = *(undefined4 *)(puVar9 + 9);
    uStack_ec = *(undefined4 *)((longlong)puVar9 + 0x4c);
    local_e8 = *(undefined4 *)(puVar9 + 10);
    uStack_e4 = *(undefined4 *)((longlong)puVar9 + 0x54);
    uStack_e0 = *(undefined4 *)(puVar9 + 0xb);
    uStack_dc = *(undefined4 *)((longlong)puVar9 + 0x5c);
    (**(code **)(*local_res18 + 0x208))(local_res18,local_148,&local_138);
  }
  return;
}



// FUNCTION 142d33b60 FUN_142d33b60 body=106 status=ok
// SIG undefined FUN_142d33b60(void)

void FUN_142d33b60(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  
  lVar2 = FUN_142d3b850(param_1,param_3);
  if (((*param_3 != 0) && (lVar2 != 0)) && ((*(byte *)(*param_3 + 0x48) & 0x20) != 0)) {
    cVar1 = FUN_142d3e230(param_1,lVar2);
    if (cVar1 == '\0') {
      fVar3 = (float)FUN_142d39b50(lVar2);
      FUN_142d48590(lVar2,fVar3 + *(float *)(param_3 + 2));
    }
  }
  return;
}



// FUNCTION 142d33bd0 FUN_142d33bd0 body=238 status=ok
// SIG undefined FUN_142d33bd0(void)

void FUN_142d33bd0(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4,
                  longlong *param_5)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  cVar1 = FUN_142d1f200();
  plVar3 = param_5;
  if (param_5 == (longlong *)0x0) {
    plVar3 = (longlong *)thunk_FUN_142d54de0();
    if (plVar3 == (longlong *)0x0) goto LAB_142d33c93;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
  FUN_142d29240(plVar3,param_4,param_3);
  if ((param_1[1] != 0) && (param_1[2] != 0)) {
    if (cVar1 != '\0') {
      cVar2 = (**(code **)(*(longlong *)param_1[2] + 0x10))();
      if (cVar2 == '\0') goto LAB_142d33c74;
    }
    if (param_1[1] == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar4 + 0x18))(plVar4,param_2,plVar3);
  }
LAB_142d33c74:
  param_1 = (longlong *)*param_1;
  if ((param_1 != (longlong *)0x0) && (cVar1 == '\0')) {
    (**(code **)(*param_1 + 0x400))(param_1,param_2,plVar3,param_3);
  }
LAB_142d33c93:
  if (param_5 == (longlong *)0x0) {
    FUN_142d266f0(plVar3);
  }
  return;
}



// FUNCTION 142d33cc0 FUN_142d33cc0 body=19 status=ok
// SIG undefined FUN_142d33cc0(void)

ulonglong FUN_142d33cc0(longlong param_1,byte param_2)

{
  ulonglong in_RAX;
  
  if (param_2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  return (ulonglong)((*(byte *)(param_1 + 0x30) & param_2) == param_2);
}



// FUNCTION 142d33ce0 FUN_142d33ce0 body=113 status=ok
// SIG undefined FUN_142d33ce0(void)

void FUN_142d33ce0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong local_res10 [3];
  
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar1 = 0;
    iVar3 = -1;
    if (0 < *(int *)(param_1 + 400)) {
      plVar2 = *(longlong **)(param_1 + 0x188);
      do {
        if (*plVar2 == param_3) {
          if ((int)plVar2[7] == 0) goto LAB_142d33d33;
          if (iVar3 == -1) {
            iVar3 = iVar1;
          }
        }
        iVar1 = iVar1 + 1;
        plVar2 = plVar2 + 0xe;
      } while (iVar1 < *(int *)(param_1 + 400));
      iVar1 = iVar3;
      if (iVar3 != -1) {
LAB_142d33d33:
        plVar2 = *(longlong **)(param_1 + 0x188) + (longlong)iVar1 * 0xe;
        if (plVar2 != (longlong *)0x0) {
          local_res10[0] = param_2;
          TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
          AddUniqueImpl<UGeometryCacheComponent_*_const_&>(plVar2 + 6,local_res10);
        }
      }
    }
  }
  return;
}



// FUNCTION 142d33d60 FUN_142d33d60 body=180 status=ok
// SIG undefined FUN_142d33d60(void)

void FUN_142d33d60(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong local_res8;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_142e64ca0();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (((lVar2 != 0) && (param_2 != 0)) && (param_3 != 0)) {
      iVar4 = 0;
      iVar5 = -1;
      if (0 < *(int *)(lVar2 + 400)) {
        plVar3 = *(longlong **)(lVar2 + 0x188);
        do {
          if (*plVar3 == param_3) {
            if ((int)plVar3[7] == 0) goto LAB_142d33dea;
            if (iVar5 == -1) {
              iVar5 = iVar4;
            }
          }
          iVar4 = iVar4 + 1;
          plVar3 = plVar3 + 0xe;
        } while (iVar4 < *(int *)(lVar2 + 400));
        iVar4 = iVar5;
        if (iVar5 != -1) {
LAB_142d33dea:
          plVar3 = *(longlong **)(lVar2 + 0x188) + (longlong)iVar4 * 0xe;
          if (plVar3 != (longlong *)0x0) {
            local_res8 = param_2;
            TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
            AddUniqueImpl<UGeometryCacheComponent_*_const_&>(plVar3 + 6,&local_res8);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142d33e20 FUN_142d33e20 body=27 status=ok
// SIG undefined FUN_142d33e20(void)

void FUN_142d33e20(undefined8 param_1)

{
  FUN_142330a70();
  FUN_142d48b70(param_1);
  return;
}



// FUNCTION 142d33e40 FUN_142d33e40 body=103 status=ok
// SIG undefined FUN_142d33e40(void)

void FUN_142d33e40(longlong param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0;
  local_18 = param_2;
  fVar1 = (float)FUN_142ca2f00(*(undefined8 *)(param_1 + 0x28),&local_18,0);
  *(float *)(param_1 + 0x30) = fVar1;
  *(int *)(param_1 + 0x34) = (int)ROUND(fVar1 * 2.0 + 0.5) >> 1;
  *(bool *)(param_1 + 0x38) = 0.5 <= fVar1;
  return;
}



// FUNCTION 142d33eb0 FUN_142d33eb0 body=56 status=ok
// SIG undefined FUN_142d33eb0(void)

void FUN_142d33eb0(longlong param_1)

{
  int iVar1;
  float fVar2;
  
  fVar2 = (float)FUN_142c98860(param_1 + 0x28);
  *(float *)(param_1 + 0x60) = fVar2;
  iVar1 = (int)ROUND(fVar2 + fVar2 + 0.5) >> 1;
  *(int *)(param_1 + 100) = iVar1;
  *(bool *)(param_1 + 0x68) = iVar1 != 0;
  return;
}



// FUNCTION 142d33ef0 FUN_142d33ef0 body=70 status=ok
// SIG undefined FUN_142d33ef0(void)

void FUN_142d33ef0(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_142c988a0(*(undefined8 *)(param_1 + 0x28));
  *(float *)(param_1 + 0x30) = fVar1;
  *(int *)(param_1 + 0x34) = (int)ROUND(fVar1 * 2.0 + 0.5) >> 1;
  *(bool *)(param_1 + 0x38) = 0.5 <= fVar1;
  return;
}



// FUNCTION 142d33f40 FUN_142d33f40 body=344 status=ok
// SIG undefined FUN_142d33f40(void)

void FUN_142d33f40(undefined8 param_1,void **param_2,undefined8 *param_3,undefined8 param_4)

{
  uint uVar1;
  void *_Src;
  void *local_78;
  ulonglong local_70;
  void *local_68;
  longlong alStack_60 [2];
  void *pvStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  
  local_78 = (void *)0x0;
  local_70 = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  local_3a = 0;
  local_68 = (void *)0x0;
  alStack_60[0] = 0;
  alStack_60[1] = 0;
  pvStack_50 = (void *)0x0;
  local_44 = 0xffffffff;
  if (&local_78 != param_2) {
    _Src = *param_2;
    uVar1 = *(uint *)(param_2 + 1);
    local_70 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      TArray<FVector,FDefaultAllocator>::ResizeForCopy(&local_78,uVar1,0);
      _guard_xfg_dispatch_icall_nop(local_78,_Src,(longlong)(int)uVar1 * 0xc);
    }
  }
  local_68 = param_2[2];
  TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(alStack_60,param_2 + 3);
  local_38 = *param_3;
  pvStack_50 = param_2[5];
  local_48 = *(undefined4 *)(param_2 + 6);
  local_44 = *(undefined4 *)((longlong)param_2 + 0x34);
  local_40 = *(undefined4 *)(param_2 + 7);
  local_3c = *(undefined2 *)((longlong)param_2 + 0x3c);
  local_3a = *(undefined1 *)((longlong)param_2 + 0x3e);
  local_30 = *(undefined4 *)(param_3 + 1);
  local_28 = param_4;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1,&local_78);
  if (alStack_60[0] != 0) {
    FMemory::Free();
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142d340a0 FUN_142d340a0 body=250 status=ok
// SIG undefined FUN_142d340a0(void)

void FUN_142d340a0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  float fVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  float fVar7;
  
  lVar6 = FUN_142d3b850(param_1,param_2 + 0x2d0);
  lVar2 = *(longlong *)(param_2 + 0x2d0);
  if (((lVar2 != 0) && (lVar6 != 0)) && ((*(byte *)(lVar2 + 0x48) & 0x20) != 0)) {
    uVar3 = *(undefined4 *)(param_2 + 0x2d4);
    uVar4 = *(undefined4 *)(param_2 + 0x2d8);
    uVar5 = *(undefined4 *)(param_2 + 0x2dc);
    fVar1 = *(float *)(param_2 + 0x1d8);
    *param_3 = *(undefined4 *)(param_2 + 0x2d0);
    param_3[1] = uVar3;
    param_3[2] = uVar4;
    param_3[3] = uVar5;
    param_3[4] = fVar1;
    param_3[5] = fVar1;
    fVar7 = (float)FUN_142d3c080(lVar6);
    if ((0.0 < fVar7) && (fVar7 = (float)FUN_142d39b50(lVar6), *(char *)(lVar2 + 0x60) == '\x01')) {
      if (0.01 < fVar7) {
        if (fVar7 - fVar1 <= 0.01) {
          param_3[4] = fVar7;
        }
      }
      else {
        param_3[4] = 0;
      }
    }
    if (*(char *)(param_2 + 0x2f0) == '\x01') {
      param_3[5] = fVar1;
    }
    else if (*(char *)(lVar2 + 0x60) == '\0') {
      param_3[5] = 0;
    }
    else {
      param_3[5] = param_3[4];
    }
  }
  return;
}



// FUNCTION 142d341a0 FUN_142d341a0 body=123 status=ok
// SIG undefined FUN_142d341a0(void)

void FUN_142d341a0(undefined4 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_2 + 0x2d0);
  if (lVar2 != 0) {
    lVar4 = FUN_142d3b850(param_1,param_2 + 0x2d0);
    if ((lVar4 != 0) && ((*(byte *)(lVar2 + 0x48) & 0x20) != 0)) {
      uVar3 = *(undefined8 *)(param_2 + 0x2d8);
      uVar1 = *(undefined4 *)(param_2 + 0x1d8);
      *param_3 = *(undefined8 *)(param_2 + 0x2d0);
      param_3[1] = uVar3;
      *(undefined4 *)(param_3 + 2) = uVar1;
      *(undefined4 *)((longlong)param_3 + 0x14) = uVar1;
      if (*(char *)(lVar2 + 0x60) == '\0') {
        *(undefined4 *)((longlong)param_3 + 0x14) = 0;
      }
    }
  }
  return;
}



// FUNCTION 142d34220 FUN_142d34220 body=821 status=ok
// SIG undefined FUN_142d34220(void)

void FUN_142d34220(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((*(longlong *)(param_1 + 0x868) == 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x118), plVar1 != (longlong *)0x0)) {
    uVar3 = UCircularThrobber::GetPrivateStaticClass();
    uVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
    *(undefined8 *)(param_1 + 0x868) = uVar3;
  }
  if ((*(longlong *)(param_1 + 0x870) == 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x118), plVar1 != (longlong *)0x0)) {
    uVar3 = FUN_142e27720();
    uVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
    *(undefined8 *)(param_1 + 0x870) = uVar3;
  }
  if ((*(longlong *)(param_1 + 0x878) == 0) && (lVar5 = *(longlong *)(param_1 + 0x118), lVar5 != 0))
  {
    lVar4 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (plVar1 = *(longlong **)(lVar5 + 0x490), plVar1 != (longlong *)0x0)) {
      lVar5 = FUN_142c2de20();
      if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        uVar3 = FUN_142c36280();
        uVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
        *(undefined8 *)(param_1 + 0x878) = uVar3;
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x880) == 0) && (lVar5 = *(longlong *)(param_1 + 0x118), lVar5 != 0))
  {
    lVar4 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (plVar1 = *(longlong **)(lVar5 + 0x490), plVar1 != (longlong *)0x0)) {
      lVar5 = FUN_142c2de20();
      if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        uVar3 = UThrobber::GetPrivateStaticClass();
        uVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
        *(undefined8 *)(param_1 + 0x880) = uVar3;
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x888) == 0) && (lVar5 = *(longlong *)(param_1 + 0x118), lVar5 != 0))
  {
    lVar4 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (plVar1 = *(longlong **)(lVar5 + 0x490), plVar1 != (longlong *)0x0)) {
      lVar5 = FUN_142c2de20();
      if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        uVar3 = FUN_142e6a0e0();
        uVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
        *(undefined8 *)(param_1 + 0x888) = uVar3;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x890) != 0) {
    return;
  }
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  lVar5 = APostProcessVolume::GetPrivateStaticClass();
  if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  lVar5 = (**(code **)(*plVar1 + 0x6e8))(plVar1);
  if (lVar5 != 0) {
    lVar4 = FUN_142e39920();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_142d34543;
  }
  lVar5 = 0;
LAB_142d34543:
  *(longlong *)(param_1 + 0x890) = lVar5;
  return;
}



// FUNCTION 142d34560 FUN_142d34560 body=518 status=ok
// SIG undefined FUN_142d34560(void)

void FUN_142d34560(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (*(char *)(param_1 + 0x108) == '\0') {
    uVar6 = FUN_142c3f210();
    cVar5 = UObjectBaseUtility::IsIn(param_1,uVar6);
    if (cVar5 == '\0') {
      *(undefined1 *)(param_1 + 0x108) = 1;
      if ((((*(byte *)(param_1 + 200) & 1) != 0) && (0 < *(int *)(param_1 + 0xc0))) &&
         (*(int *)(param_1 + 0xf0) == 0)) {
        plVar1 = (longlong *)(param_1 + 0xe8);
        *(undefined4 *)(param_1 + 0xf0) = 0;
        if (*(int *)(param_1 + 0xf4) < *(int *)(param_1 + 0xc0)) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1);
        }
        lVar9 = *(longlong *)(param_1 + 0xb8);
        lVar2 = lVar9 + (longlong)*(int *)(param_1 + 0xc0) * 0x28;
        for (; lVar9 != lVar2; lVar9 = lVar9 + 0x28) {
          lVar7 = FUN_141796df0(lVar9 + 0x10);
          if (lVar7 != 0) {
            lVar8 = FUN_14171bfe0();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              iVar3 = *(int *)(param_1 + 0xf0);
              *(int *)(param_1 + 0xf0) = iVar3 + 1;
              if (*(int *)(param_1 + 0xf4) < iVar3 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
              }
              *(longlong *)(*plVar1 + (longlong)iVar3 * 8) = lVar7;
            }
          }
        }
      }
      if ((((*(byte *)(param_1 + 0xe0) & 1) != 0) && (0 < *(int *)(param_1 + 0xd8))) &&
         (*(int *)(param_1 + 0x100) == 0)) {
        plVar1 = (longlong *)(param_1 + 0xf8);
        *(undefined4 *)(param_1 + 0x100) = 0;
        if (*(int *)(param_1 + 0x104) < *(int *)(param_1 + 0xd8)) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1);
        }
        lVar9 = *(longlong *)(param_1 + 0xd0);
        lVar2 = lVar9 + (longlong)*(int *)(param_1 + 0xd8) * 0x28;
        for (; lVar9 != lVar2; lVar9 = lVar9 + 0x28) {
          lVar7 = FUN_141796df0(lVar9 + 0x10);
          if (lVar7 != 0) {
            lVar8 = FUN_14171bfe0();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              iVar3 = *(int *)(param_1 + 0x100);
              *(int *)(param_1 + 0x100) = iVar3 + 1;
              if (*(int *)(param_1 + 0x104) < iVar3 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
              }
              *(longlong *)(*plVar1 + (longlong)iVar3 * 8) = lVar7;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142d34770 FUN_142d34770 body=184 status=ok
// SIG undefined FUN_142d34770(void)

float FUN_142d34770(float param_1,longlong param_2)

{
  float fVar1;
  float _Y;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = 1.0;
  fVar4 = 0.0;
  if (param_2 == 0) {
    fVar1 = 0.0;
    fVar2 = 1.0;
    _Y = 1.0;
  }
  else {
    fVar1 = *(float *)(param_2 + 0xb4);
    fVar2 = *(float *)(param_2 + 0xb8);
    _Y = *(float *)(param_2 + 0x38);
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  if ((_Y != 0.0) && (fVar1 < param_1)) {
    fVar3 = fVar1;
    if (fVar1 <= fVar2) {
      fVar3 = fVar2;
    }
    fVar3 = (param_1 - fVar1) / (fVar3 - fVar1);
    if (0.0 <= fVar3) {
      if (1.0 <= fVar3) {
        fVar3 = 1.0;
      }
    }
    else {
      fVar3 = 0.0;
    }
    fVar3 = _guard_xfg_dispatch_icall_nop(1.0 - fVar3,_Y);
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    if (param_2 != 0) {
      fVar4 = *(float *)(param_2 + 0xbc);
    }
    fVar3 = (1.0 - fVar4) * fVar3 + fVar4;
  }
  return fVar3;
}



// FUNCTION 142d34830 FUN_142d34830 body=520 status=ok
// SIG undefined FUN_142d34830(void)

void FUN_142d34830(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  float fVar8;
  
  lVar6 = *param_1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (lVar6 == 0) goto LAB_142d34a1e;
  if (*(longlong *)(lVar6 + 0x80) != 0) {
    lVar3 = UNodeMappingContainer::GetPrivateStaticClass();
    for (lVar5 = *(longlong *)(lVar6 + 0x80); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
      if (lVar5 == lVar3) {
        if (*(longlong *)(lVar6 + 0x80) != 0) {
          lVar6 = *param_1;
          if (*(longlong *)(lVar6 + 0x80) == 0) goto LAB_142d348ce;
          plVar4 = (longlong *)UNodeMappingContainer::GetPrivateStaticClass();
          plVar7 = *(longlong **)(lVar6 + 0x80);
          plVar1 = plVar7;
          goto joined_r0x000142d348bb;
        }
        break;
      }
    }
  }
  goto LAB_142d34930;
joined_r0x000142d348bb:
  if (plVar1 == (longlong *)0x0) goto LAB_142d348ce;
  if (plVar1 == plVar4) goto LAB_142d348d0;
  plVar1 = (longlong *)plVar1[6];
  goto joined_r0x000142d348bb;
joined_r0x000142d3499e:
  if (plVar1 == (longlong *)0x0) goto LAB_142d349ae;
  if (plVar1 == plVar4) goto LAB_142d349b0;
  plVar1 = (longlong *)plVar1[6];
  goto joined_r0x000142d3499e;
LAB_142d349ae:
  plVar7 = (longlong *)0x0;
LAB_142d349b0:
  lVar6 = plVar7[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    lVar6 = plVar7[0x1f];
    if (lVar6 == 0) goto LAB_142d34a1e;
  }
  lVar5 = UNodeMappingContainer::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    fVar8 = *(float *)(lVar6 + 0x2c);
    if (*(float *)(lVar6 + 0x2c) <= *(float *)(param_1 + 0xc)) {
      fVar8 = *(float *)(param_1 + 0xc);
    }
    *(float *)(param_1 + 0xc) = fVar8;
  }
  goto LAB_142d34a1e;
LAB_142d348ce:
  plVar7 = (longlong *)0x0;
LAB_142d348d0:
  lVar6 = plVar7[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    lVar6 = plVar7[0x1f];
    if (lVar6 == 0) goto LAB_142d34930;
  }
  lVar5 = UNodeMappingContainer::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar6 + 0x2c);
  }
LAB_142d34930:
  lVar6 = *param_1;
  if (((*(byte *)(lVar6 + 0x30) & 2) != 0) && (*(longlong *)(lVar6 + 0x88) != 0)) {
    lVar3 = UNodeMappingContainer::GetPrivateStaticClass();
    for (lVar5 = *(longlong *)(lVar6 + 0x88); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
      if (lVar5 == lVar3) {
        if (*(longlong *)(lVar6 + 0x88) != 0) {
          lVar6 = *param_1;
          if (*(longlong *)(lVar6 + 0x88) == 0) goto LAB_142d349ae;
          plVar4 = (longlong *)UNodeMappingContainer::GetPrivateStaticClass();
          plVar7 = *(longlong **)(lVar6 + 0x88);
          plVar1 = plVar7;
          goto joined_r0x000142d3499e;
        }
        break;
      }
    }
  }
LAB_142d34a1e:
  fVar8 = *(float *)(param_1 + 6);
  if (*(float *)(param_1 + 6) <= *(float *)(param_1 + 0xc)) {
    fVar8 = *(float *)(param_1 + 0xc);
  }
  *(float *)(param_1 + 0xc) = fVar8;
  return;
}



// FUNCTION 142d34a40 FUN_142d34a40 body=273 status=ok
// SIG undefined FUN_142d34a40(void)

float FUN_142d34a40(longlong param_1,longlong *param_2,float *param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  float local_28;
  float fStack_24;
  float local_20;
  undefined1 local_18 [16];
  
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    fVar1 = 0.0;
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x648))(param_2,&local_28,local_18);
      fVar1 = SQRT((param_3[1] - fStack_24) * (param_3[1] - fStack_24) +
                   (*param_3 - local_28) * (*param_3 - local_28) +
                   (param_3[2] - local_20) * (param_3[2] - local_20));
    }
    fVar2 = *(float *)(param_4 + 1);
    local_28._0_1_ = (char)*param_4;
    if (local_28._0_1_ == '\0') {
      fStack_24 = *(float *)(param_1 + 0x26c);
      fVar2 = *(float *)(param_1 + 0x270);
    }
    else {
      fStack_24 = (float)((ulonglong)*param_4 >> 0x20);
    }
    if (fVar2 <= fVar1) {
      return 0.0;
    }
    if (fStack_24 < fVar1) {
      return 1.0 - (fVar1 - fStack_24) / (fVar2 - fStack_24);
    }
  }
  return 1.0;
}



// FUNCTION 142d34b60 FUN_142d34b60 body=271 status=ok
// SIG undefined FUN_142d34b60(void)

undefined1 FUN_142d34b60(longlong param_1,longlong param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  float fVar4;
  
  cVar3 = FUN_1407c3030(param_1 + 0x178);
  if ((cVar3 == '\0') &&
     ((*(longlong *)(param_1 + 0x890) == 0 ||
      (cVar3 = FUN_1407c3030(*(longlong *)(param_1 + 0x890) + 0x8b0), cVar3 == '\0')))) {
    if (*(longlong *)(param_1 + 0x8b8) != 0) {
      lVar2 = FUN_142e20fc0();
      for (lVar1 = *(longlong *)(param_1 + 0x8b8); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30))
      {
        if (lVar1 == lVar2) {
          if ((*(longlong *)(param_1 + 0x8b8) != 0) && (*(char *)(param_1 + 0x8d4) != '\0')) {
            return 0;
          }
          break;
        }
      }
    }
    cVar3 = FUN_142d3e8e0(param_1 + 0x898);
    if ((cVar3 == '\0') &&
       ((param_4 != '\0' ||
        ((((*(float *)(param_1 + 0x8d8) <= 0.0 ||
           (fVar4 = (float)FUN_140778f00(param_1), *(float *)(param_1 + 0x8d8) <= fVar4)) &&
          ((*(float *)(param_2 + 0x90) <= 0.0 ||
           (fVar4 = (float)FUN_140778f00(param_1), *(float *)(param_2 + 0x90) <= fVar4)))) &&
         (cVar3 = FUN_142c48f90(*(undefined8 *)(param_2 + 0x88),*(undefined8 *)(param_1 + 0x118),0),
         cVar3 != '\0')))))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142d34c70 FUN_142d34c70 body=710 status=ok
// SIG undefined FUN_142d34c70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142d34c70(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  float extraout_XMM0_Da;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_38;
  float local_30;
  undefined8 local_28;
  float local_20;
  
  cVar3 = FUN_142d34b60();
  if ((cVar3 == '\0') || (*(longlong *)(param_3 + 8) == *(longlong *)(param_1 + 0x118))) {
LAB_142d34f15:
    uVar6 = 0;
  }
  else {
    if (param_4 == '\0') {
      cVar3 = FUN_142d3e960(param_1,param_2,param_3);
      if (cVar3 == '\0') goto LAB_142d34f15;
      lVar1 = *(longlong *)(param_1 + 0x118);
      if ((*(char *)(param_2 + 0x1a8) != '\0') && (lVar1 != 0)) {
        lVar2 = *(longlong *)(lVar1 + 0x168);
        if (lVar2 == 0) {
          local_28 = _DAT_1468b5d90;
          puVar5 = &local_28;
          local_20 = DAT_1468b5d98;
        }
        else {
          puVar5 = &local_38;
          local_30 = *(float *)(lVar2 + 0x228);
          local_38 = *(undefined8 *)(lVar2 + 0x220);
        }
        local_28 = *puVar5;
        local_20 = *(float *)(puVar5 + 1);
        fVar9 = (float)((ulonglong)local_28 >> 0x20) - *(float *)(param_3 + 0x14);
        fVar8 = (float)local_28 - *(float *)(param_3 + 0x10);
        fVar7 = local_20 - *(float *)(param_3 + 0x18);
        if (*(float *)(param_2 + 0x1a4) * *(float *)(param_2 + 0x1a4) <
            fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7) goto LAB_142d34f15;
      }
      if (((*(char *)(param_2 + 0x1b0) != '\0') && (lVar1 != 0)) &&
         (*(longlong *)(param_3 + 8) != 0)) {
        lVar2 = *(longlong *)(lVar1 + 0x168);
        if (lVar2 == 0) {
          local_28 = _DAT_1468b5d90;
          local_20 = DAT_1468b5d98;
        }
        else {
          local_28 = *(undefined8 *)(lVar2 + 0x220);
          local_20 = *(float *)(lVar2 + 0x228);
        }
        fVar7 = local_20;
        uVar6 = local_28;
        local_30 = local_20;
        lVar2 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x168);
        if (lVar2 == 0) {
          local_28 = _DAT_1468b5d90;
          local_20 = DAT_1468b5d98;
        }
        else {
          local_28 = *(undefined8 *)(lVar2 + 0x220);
          local_20 = *(float *)(lVar2 + 0x228);
        }
        local_38._0_4_ = (float)uVar6;
        local_38._0_4_ = (float)local_38 - (float)local_28;
        local_38._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
        local_38._4_4_ = local_38._4_4_ - (float)((ulonglong)local_28 >> 0x20);
        if (local_38._4_4_ * local_38._4_4_ + (float)local_38 * (float)local_38 +
            (fVar7 - local_20) * (fVar7 - local_20) <
            *(float *)(param_2 + 0x1ac) * *(float *)(param_2 + 0x1ac)) goto LAB_142d34f15;
      }
      local_38 = *(undefined8 *)(param_1 + 0x878);
      FUN_142de77e0(param_2 + 0x98,lVar1,0,&local_38);
      fVar7 = 0.0;
      if (extraout_XMM0_Da < 0.0) {
LAB_142d34ed9:
        iVar4 = rand();
        if (fVar7 < (float)iVar4 * 3.051851e-05) goto LAB_142d34f15;
      }
      else {
        fVar7 = extraout_XMM0_Da;
        if (1.0 <= extraout_XMM0_Da) {
          fVar7 = 1.0;
        }
        if (fVar7 < 1.0) goto LAB_142d34ed9;
      }
      if ((*(longlong *)(param_1 + 0x868) != 0) && (*(longlong *)(param_3 + 8) != 0)) {
        iVar4 = FUN_142dec940();
        if (iVar4 == 0) goto LAB_142d34f15;
      }
    }
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 142d34f40 FUN_142d34f40 body=61 status=ok
// SIG undefined FUN_142d34f40(void)

undefined8 FUN_142d34f40(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x3a0) != '\0') {
    return 0;
  }
  if (((*(char *)(param_1 + 0x2f1) != '\0') && (*(longlong **)(param_1 + 0x308) != (longlong *)0x0))
     && (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x308) + 0x418))(), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 142d34f80 FUN_142d34f80 body=639 status=ok
// SIG undefined FUN_142d34f80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d34f80(longlong *param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_2c8 [32];
  longlong local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  longlong *local_288;
  undefined8 uStack_280;
  longlong local_278;
  longlong *local_270;
  undefined8 local_260;
  undefined1 local_258 [528];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  uVar7 = 0;
  if (param_1 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (**(code **)(*param_1 + 0x148))();
    if ((lVar3 != 0) && (cVar2 = UWorld::IsGameWorld(lVar3), cVar2 == '\0')) {
      return;
    }
  }
  if (param_2 != (longlong *)0x0) {
    lVar5 = param_2[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*param_2 + 0x368))(param_2);
      lVar5 = param_2[0x1f];
      if (lVar5 == 0) {
        return;
      }
    }
    if ((param_1 != (longlong *)0x0) &&
       ((((*(byte *)((longlong)param_1 + 0x94) & 0x18) == 0x10 ||
         (cVar2 = FUN_1407cd900(param_1), cVar2 != '\0')) && (lVar3 != 0)))) {
      bVar1 = false;
      lVar4 = FBufferReaderBase::Tell(lVar5);
      if ((lVar4 != 0) && ((*(byte *)(param_4 + 0x10) & 0x10) == 0)) {
        if ((char)param_1[0x25] != '\x03') {
          return;
        }
        bVar1 = true;
      }
      if ((*(byte *)(lVar5 + 0x134) & 1) == 0) {
        cVar2 = FUN_142d29260(param_4,lVar5,param_1);
        if (cVar2 != '\0') {
          lVar4 = FUN_142d18cf0(lVar3);
          if (lVar4 == 0) {
            return;
          }
          FUN_142d0a0e0(&local_278);
          local_278 = lVar5;
          local_270 = param_1;
          local_260 = param_3;
          FUN_140a7d100(local_258,param_4);
          FUN_142d0e6e0(lVar4,&local_278);
          if (((bVar1) && (plVar6 = (longlong *)FUN_142d5ecc0(lVar3), plVar6 != (longlong *)0x0)) &&
             (lVar3 = (**(code **)(*plVar6 + 0x298))(plVar6), lVar3 != 0)) {
            if (local_278 != 0) {
              uVar7 = *(undefined8 *)(local_278 + 0x10);
            }
            local_288 = local_270;
            FUN_142d31b90(lVar3,uVar7,local_258,&local_288);
          }
          FUN_1409c53c0(local_258);
          return;
        }
        local_298 = 0;
        local_2a0 = 0;
        local_2a8 = param_4;
        FUN_142d21420(lVar5,param_1,lVar3,param_3);
      }
      else {
        lVar5 = FUN_142d18d20(lVar3);
        if (lVar5 != 0) {
          local_2a8 = param_4;
          FUN_142d29370(lVar5,param_2,param_1,param_3);
        }
      }
      if (((bVar1) && (plVar6 = (longlong *)FUN_142d5ecc0(lVar3), plVar6 != (longlong *)0x0)) &&
         (lVar3 = (**(code **)(*plVar6 + 0x298))(plVar6), lVar3 != 0)) {
        uStack_280 = 0;
        local_288 = param_1;
        FUN_142d31b90(lVar3,param_2,param_4,&local_288);
      }
    }
  }
  return;
}



// FUNCTION 142d35200 FUN_142d35200 body=461 status=ok
// SIG undefined FUN_142d35200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d35200(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  longlong local_1d0;
  longlong *local_1c8;
  longlong *local_190;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  lVar6 = param_1;
  if (*(longlong *)(param_1 + 0x150) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x150);
  }
  fVar7 = (float)FUN_142c98860(param_1 + 0x4c8,lVar6);
  if ((param_2 != 0) && (0.0 < *(float *)(param_1 + 0x4a4))) {
    FUN_142d0aa70(&local_1d8,param_2,lVar6,0);
    plVar5 = (longlong *)0x0;
    local_190 = plVar5;
    if (*(longlong *)(param_1 + 0x4a8) != 0) {
      plVar3 = (longlong *)UDamageType::GetPrivateStaticClass();
      for (plVar4 = *(longlong **)(param_1 + 0x4a8);
          (local_190 = plVar5, plVar4 != (longlong *)0x0 &&
          (local_190 = *(longlong **)(param_1 + 0x4a8), plVar4 != plVar3));
          plVar4 = (longlong *)plVar4[6]) {
      }
    }
    fVar7 = fVar7 * *(float *)(param_1 + 0x4b0);
    cVar1 = FUN_142d1f200(&local_1d8);
    plVar4 = (longlong *)thunk_FUN_142d54de0();
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,&local_1d8);
      if (((local_1d0 != 0) && (local_1c8 != (longlong *)0x0)) &&
         ((cVar1 == '\0' || (cVar2 = (**(code **)(*local_1c8 + 0x10))(local_1c8), cVar2 != '\0'))))
      {
        if (local_1d0 != 0) {
          plVar5 = local_1c8;
        }
        (**(code **)(*plVar5 + 0x18))(plVar5,fVar7,plVar4);
      }
      if ((cVar1 == '\0') && (local_1d8 != 0)) {
        FUN_142d29b80(local_1d8,fVar7,plVar4);
      }
      FUN_142d266f0(plVar4);
    }
    if (local_38 != 0) {
      FMemory::Free();
    }
    if (local_58 != 0) {
      plVar5 = local_88;
      if (local_68 != (longlong *)0x0) {
        plVar5 = local_68;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142d353d0 FUN_142d353d0 body=123 status=ok
// SIG undefined FUN_142d353d0(void)

void FUN_142d353d0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_2;
  if ((((-1 < iVar1) && (-1 < param_2)) && (iVar1 < *(int *)(param_1 + 0x40))) &&
     (((lVar2 = (longlong)iVar1 * 0x3b0 + *(longlong *)(param_1 + 0x38),
       *(int *)(lVar2 + 0x328) == iVar1 &&
       (*(int *)(lVar2 + 0x32c) == (int)((ulonglong)param_2 >> 0x20))) &&
      ((lVar2 != 0 && (*(undefined4 *)(lVar2 + 0x328) = 0xffffffff, *(int *)(lVar2 + 0x330) != -1)))
      ))) {
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_142bd8290();
    }
    *(undefined4 *)(lVar2 + 0x330) = 0xffffffff;
  }
  return;
}



// FUNCTION 142d35450 FUN_142d35450 body=1420 status=ok
// SIG undefined FUN_142d35450(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_142d35450(longlong param_1,float *param_2,undefined8 param_3,int param_4,undefined1 param_5,
             byte *param_6)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  byte *pbVar6;
  uint *puVar7;
  ulonglong uVar8;
  float fVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_238 [32];
  float *local_218;
  undefined1 *local_210;
  undefined *local_208;
  undefined1 local_1f8 [8];
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  undefined8 local_1d0;
  float local_1c8;
  undefined8 local_1c0;
  float local_1b8;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a0;
  float local_19c;
  float local_198;
  undefined1 local_190 [152];
  undefined1 local_f8 [28];
  undefined1 local_dc;
  longlong local_b0;
  longlong local_90;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  fVar9 = 1.4013e-45;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b31fd8) && (_Init_thread_header(&DAT_146b31fd8), DAT_146b31fd8 == -1))
  {
    FName::FName(&DAT_146b31fd0,L"ComponentIsVisibleFrom",1);
    _Init_thread_footer(&DAT_146b31fd8);
  }
  local_218 = (float *)param_3;
  FUN_1422ffb20(local_f8,DAT_146b31fd0,local_1f8,1);
  lVar4 = *(longlong *)(param_1 + 0x120);
  local_dc = param_5;
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0(param_1);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x1d0);
  local_1c8 = *(float *)(param_1 + 0x1d8);
  local_1b8 = param_2[2];
  local_1c0 = *(undefined8 *)param_2;
  if ((((float)uVar10 == *param_2) &&
      (local_1d0._4_4_ = (float)((ulonglong)uVar10 >> 0x20), local_1d0._4_4_ == param_2[1])) &&
     (local_1c8 == param_2[2])) {
    local_1b8 = local_1b8 + 0.01;
  }
  local_1d0 = uVar10;
  if (param_4 == 3) {
    uVar8 = 0;
    local_1dc = (float)CONCAT31(local_1dc._1_3_,param_5);
    local_1e0 = 1.4013e-45;
    uVar11 = (longlong)DAT_146b31a78 & 0x3fffffffffffffff;
    if (DAT_146b31a70 + DAT_146b31a78 < DAT_146b31a70) {
      uVar11 = uVar8;
    }
    puVar7 = DAT_146b31a70;
    if (uVar11 != 0) {
      do {
        uVar1 = *puVar7;
        puVar7 = puVar7 + 1;
        fVar9 = (float)((uint)fVar9 | 1 << (uVar1 & 0x1f));
        uVar8 = uVar8 + 1;
        local_1e0 = fVar9;
      } while (uVar8 != uVar11);
    }
    local_210 = local_f8;
    local_218 = &local_1e0;
    cVar3 = UWorld::LineTraceSingleByObjectType(lVar4,param_6,&local_1c0,&local_1d0);
  }
  else {
    local_208 = &DAT_146aefe68;
    local_210 = local_f8;
    local_218 = (float *)CONCAT44(local_218._4_4_,param_4);
    cVar3 = UWorld::LineTraceSingleByChannel(lVar4,param_6,&local_1c0,&local_1d0);
  }
  if (cVar3 == '\0') {
    local_1a0 = *(float *)(param_1 + 0x220);
    local_19c = *(float *)(param_1 + 0x224);
    local_198 = *(float *)(param_1 + 0x228);
    local_1f0 = *param_2 - local_1a0;
    local_1e8 = param_2[2] - local_198;
    local_1ec = param_2[1] - local_19c;
    fVar9 = local_1ec * local_1ec + local_1f0 * local_1f0 + local_1e8 * local_1e8;
    if (fVar9 != 1.0) {
      if (1e-08 <= fVar9) {
        auVar13 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
        fVar12 = auVar13._0_4_;
        fVar12 = fVar12 + fVar12 * (0.5 - fVar9 * 0.5 * fVar12 * fVar12);
        fVar12 = fVar12 + fVar12 * (0.5 - fVar9 * 0.5 * fVar12 * fVar12);
        local_1f0 = local_1f0 * fVar12;
        local_1ec = local_1ec * fVar12;
        local_1e8 = local_1e8 * fVar12;
      }
      else {
        local_1f0 = DAT_1468b5d90;
        local_1e8 = DAT_1468b5d98;
        local_1ec = DAT_1468b5d94;
      }
    }
    local_218 = &local_1f0;
    pbVar6 = (byte *)FUN_1422ffd10(local_190,*(undefined8 *)(param_1 + 0x118),param_1,&local_1a0);
    *param_6 = *param_6 ^ (*pbVar6 ^ *param_6) & 1;
    *param_6 = *param_6 ^ (*pbVar6 ^ *param_6) & 2;
    *(undefined4 *)(param_6 + 4) = *(undefined4 *)(pbVar6 + 4);
    *(uint *)(param_6 + 8) =
         *(uint *)(param_6 + 8) ^ (*(uint *)(pbVar6 + 8) ^ *(uint *)(param_6 + 8)) & 1;
    *(undefined4 *)(param_6 + 0xc) = *(undefined4 *)(pbVar6 + 0xc);
    *(undefined4 *)(param_6 + 0x10) = *(undefined4 *)(pbVar6 + 0x10);
    *(undefined8 *)(param_6 + 0x14) = *(undefined8 *)(pbVar6 + 0x14);
    *(undefined4 *)(param_6 + 0x1c) = *(undefined4 *)(pbVar6 + 0x1c);
    *(undefined8 *)(param_6 + 0x20) = *(undefined8 *)(pbVar6 + 0x20);
    *(undefined4 *)(param_6 + 0x28) = *(undefined4 *)(pbVar6 + 0x28);
    *(undefined8 *)(param_6 + 0x2c) = *(undefined8 *)(pbVar6 + 0x2c);
    *(undefined4 *)(param_6 + 0x34) = *(undefined4 *)(pbVar6 + 0x34);
    *(undefined8 *)(param_6 + 0x38) = *(undefined8 *)(pbVar6 + 0x38);
    *(undefined4 *)(param_6 + 0x40) = *(undefined4 *)(pbVar6 + 0x40);
    *(undefined8 *)(param_6 + 0x44) = *(undefined8 *)(pbVar6 + 0x44);
    *(undefined4 *)(param_6 + 0x4c) = *(undefined4 *)(pbVar6 + 0x4c);
    *(undefined8 *)(param_6 + 0x50) = *(undefined8 *)(pbVar6 + 0x50);
    *(undefined4 *)(param_6 + 0x58) = *(undefined4 *)(pbVar6 + 0x58);
    *(undefined4 *)(param_6 + 0x5c) = *(undefined4 *)(pbVar6 + 0x5c);
    *(undefined4 *)(param_6 + 0x60) = *(undefined4 *)(pbVar6 + 0x60);
    *(undefined4 *)(param_6 + 100) = *(undefined4 *)(pbVar6 + 100);
    *(undefined4 *)(param_6 + 0x68) = *(undefined4 *)(pbVar6 + 0x68);
    *(undefined4 *)(param_6 + 0x6c) = *(undefined4 *)(pbVar6 + 0x6c);
    *(undefined4 *)(param_6 + 0x70) = *(undefined4 *)(pbVar6 + 0x70);
    *(undefined4 *)(param_6 + 0x74) = *(undefined4 *)(pbVar6 + 0x74);
    *(undefined4 *)(param_6 + 0x78) = *(undefined4 *)(pbVar6 + 0x78);
    *(undefined8 *)(param_6 + 0x80) = *(undefined8 *)(pbVar6 + 0x80);
    *(undefined8 *)(param_6 + 0x88) = *(undefined8 *)(pbVar6 + 0x88);
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0x118);
    plVar5 = (longlong *)FWeakObjectPtr::Get(param_6 + 0x6c);
    if (plVar5 != plVar2) {
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x6c8))(plVar2,&local_1e0,&local_1b0);
        if ((((local_1e0 - local_1b0 < *(float *)(param_6 + 0x14)) &&
             (*(float *)(param_6 + 0x14) < local_1e0 + local_1b0)) &&
            ((local_1dc - local_1ac < *(float *)(param_6 + 0x18) &&
             ((*(float *)(param_6 + 0x18) < local_1dc + local_1ac &&
              (local_1d8 - local_1a8 < *(float *)(param_6 + 0x1c))))))) &&
           (*(float *)(param_6 + 0x1c) < local_1d8 + local_1a8)) goto LAB_142d3592b;
      }
      uVar10 = 0;
      goto LAB_142d3592d;
    }
  }
LAB_142d3592b:
  uVar10 = 1;
LAB_142d3592d:
  if (local_90 != 0) {
    FMemory::Free();
  }
  if (local_b0 != 0) {
    FMemory::Free();
  }
  return uVar10;
}



// FUNCTION 142d359e0 FUN_142d359e0 body=60 status=ok
// SIG undefined FUN_142d359e0(void)

undefined8 FUN_142d359e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    if (param_2 == *(longlong *)(param_1 + 0x180)) {
      return 1;
    }
    plVar1 = *(longlong **)(param_1 + 0x188);
    plVar2 = plVar1 + (longlong)*(int *)(param_1 + 400) * 0xe;
    for (; plVar1 != plVar2; plVar1 = plVar1 + 0xe) {
      if (*plVar1 == param_2) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142d35a20 FUN_142d35a20 body=44 status=ok
// SIG undefined FUN_142d35a20(void)

undefined1 * FUN_142d35a20(undefined1 *param_1,undefined4 param_2)

{
  FUN_142d979c0();
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *param_1 = 0;
  return param_1;
}



// FUNCTION 142d35a50 FUN_142d35a50 body=7 status=ok
// SIG undefined FUN_142d35a50(void)

void FUN_142d35a50(undefined8 param_1)

{
  FUN_142d9cad0(param_1,0);
  return;
}



// FUNCTION 142d35a60 FUN_142d35a60 body=92 status=ok
// SIG undefined FUN_142d35a60(void)

void FUN_142d35a60(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_14587edb8;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_14587ee00;
  }
  return;
}



// FUNCTION 142d35ac0 FUN_142d35ac0 body=1498 status=ok
// SIG undefined FUN_142d35ac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_142d35ac0(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
             longlong *param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  void *pvVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  char *pcVar12;
  char *pcVar13;
  undefined8 **ppuVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float fVar17;
  undefined1 auStack_218 [32];
  void **local_1f8;
  undefined8 local_1f0;
  void *local_1e8;
  int local_1e0;
  int local_1dc;
  longlong local_1d8;
  longlong *plStack_1d0;
  int local_1c8 [2];
  undefined4 local_1c0 [2];
  float local_1b8 [2];
  void *local_1b0;
  ulonglong local_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [4];
  undefined1 local_194 [4];
  undefined1 local_190 [8];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  longlong *local_168;
  longlong *local_160;
  longlong local_158;
  longlong *local_150;
  undefined8 *local_148;
  int *local_140;
  undefined8 *local_138;
  undefined4 *local_130;
  undefined8 *local_128;
  float *local_120;
  undefined1 local_118 [16];
  longlong local_108;
  longlong *local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b0;
  undefined4 local_a8;
  void *local_a0;
  undefined8 local_98;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  local_168 = param_5;
  local_1d8 = 0;
  plStack_1d0 = (longlong *)0x0;
  lVar8 = local_1d8;
  if (((param_3 != (longlong *)0x0) &&
      (lVar7 = (**(code **)(*param_3 + 0x148))(param_3), lVar8 = local_1d8, lVar7 != 0)) &&
     (local_158 = UBehaviorTreeManager::GetCurrent(lVar7), lVar8 = local_1d8, local_158 != 0)) {
    local_150 = param_3;
    lVar8 = FUN_14291fb80();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    local_100 = param_3;
    if ((bVar5) && ((longlong *)param_3[0x91] != (longlong *)0x0)) {
      local_100 = (longlong *)param_3[0x91];
    }
    lVar8 = *param_1;
    uVar15 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = 0xffffffff;
    local_bc = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = (void *)0x0;
    local_98 = 0;
    local_1a0 = 0xffffffffffffffff;
    local_108 = lVar8;
    local_f8 = lVar7;
    if (0 < (int)param_1[0x15]) {
      pcVar12 = (char *)param_1[0x14];
      pcVar13 = pcVar12 + (longlong)(int)param_1[0x15] * 0x88;
      if (pcVar12 != pcVar13) {
        do {
          local_188 = local_1a0;
          fVar17 = (float)FUN_142de77e0(pcVar12,param_3,0,&local_188);
          cVar6 = *pcVar12;
          if (cVar6 == '\0') {
            local_170 = *(undefined8 *)(pcVar12 + 0x80);
            ppuVar14 = &local_128;
            puVar11 = local_190;
            local_128 = &local_170;
            local_120 = local_1b8;
            local_1b8[0] = fVar17;
LAB_142d35d3c:
            FUN_1417e05c0(&local_f0,puVar11,ppuVar14,0);
          }
          else if (cVar6 == '\x01') {
            local_178 = *(undefined8 *)(pcVar12 + 0x80);
            if (((int)ROUND(fVar17 * 2.0 + 0.5) & 0xfffffffeU) == 0) {
              local_1c0[0] = 0xbf800000;
            }
            else {
              local_1c0[0] = 0x3f800000;
            }
            local_138 = &local_178;
            local_130 = local_1c0;
            TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_const_&,float_const_&>_>
                      (&local_f0,local_194,&local_138,0);
          }
          else if (cVar6 == '\x02') {
            ppuVar14 = &local_148;
            puVar11 = local_198;
            local_1c8[0] = (int)ROUND(fVar17 * 2.0 + 0.5) >> 1;
            local_180 = *(undefined8 *)(pcVar12 + 0x80);
            local_148 = &local_180;
            local_140 = local_1c8;
            goto LAB_142d35d3c;
          }
          pcVar12 = pcVar12 + 0x88;
        } while (pcVar12 != pcVar13);
        lVar8 = *param_1;
      }
    }
    if ((lVar8 != 0) && (cVar6 = FUN_142bd9cf0(), cVar6 != '\0')) {
      local_1b0 = (void *)0x0;
      local_1a8 = 0;
      if (param_3 != (longlong *)0x0) {
        uVar9 = UDamageableInterface::GetPrivateStaticClass();
        plVar10 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_3,uVar9);
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x10))(plVar10,&local_1b0);
          pvVar4 = local_1b0;
          lVar8 = (longlong)(int)local_1a8;
          if (0 < (int)local_1a8) {
            local_98 = CONCAT44(local_98._4_4_,(int)local_1a8);
            TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy
                      (&local_a0,local_1a8 & 0xffffffff,local_98._4_4_);
            _guard_xfg_dispatch_icall_nop(local_a0,pvVar4,lVar8 * 0x30);
          }
        }
        if (local_1b0 != (void *)0x0) {
          FMemory::Free();
        }
      }
    }
    local_1e0 = (int)param_1[2];
    lVar8 = (longlong)local_1e0;
    pvVar4 = (void *)param_1[1];
    local_1e8 = (void *)0x0;
    if (local_1e0 == 0) {
      local_1dc = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_1e8,local_1e0,0);
      _guard_xfg_dispatch_icall_nop(local_1e8,pvVar4,lVar8 << 3);
    }
    if (local_1dc < (int)param_1[4]) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&local_1e8);
    }
    plVar10 = (longlong *)param_1[3];
    uVar16 = (longlong)(int)param_1[4] & 0x1fffffffffffffff;
    if (plVar10 + (int)param_1[4] < plVar10) {
      uVar16 = uVar15;
    }
    if (uVar16 != 0) {
      do {
        iVar3 = local_1e0;
        lVar8 = *plVar10;
        if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x30) != 0)) {
          lVar7 = (longlong)local_1e0;
          local_1e0 = local_1e0 + 1;
          if (local_1dc < local_1e0) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1e8,iVar3);
          }
          *(undefined8 *)((longlong)local_1e8 + lVar7 * 8) = *(undefined8 *)(lVar8 + 0x30);
        }
        plVar10 = plVar10 + 1;
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar16);
    }
    param_5 = local_168;
    lVar8 = param_1[5];
    local_1f0 = FString::FString(local_118,local_168);
    local_1f8 = &local_1e8;
    plVar10 = (longlong *)FUN_142bee300(local_158,&local_168,&local_108,(char)lVar8);
    if (&local_1d8 != plVar10) {
      local_1d8 = *plVar10;
      *plVar10 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_1d0,plVar10 + 1);
    }
    if (local_160 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_160 + 1;
      lVar8 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_160)(local_160);
        LOCK();
        piVar1 = (int *)((longlong)local_160 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_160 + 8))(local_160,1);
        }
      }
    }
    lVar8 = local_1d8;
    if ((local_1d8 != 0) &&
       (cVar6 = FUN_142d32660(param_1,local_150,&local_1a0,local_1d8), cVar6 == '\0')) {
      *param_2 = 0;
      param_2[1] = 0;
      if (local_1e8 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_a0 != (void *)0x0) {
        FMemory::Free();
      }
      local_a8 = 0;
      if (local_b0 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_f0);
      plVar10 = plStack_1d0;
      if (plStack_1d0 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_1d0 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plStack_1d0)(plStack_1d0);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_1d0 + 8))(plStack_1d0,1);
          }
        }
      }
      goto LAB_142d36069;
    }
    if (local_1e8 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_a0 != (void *)0x0) {
      FMemory::Free();
    }
    local_a8 = 0;
    if (local_b0 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_f0);
  }
  *param_2 = lVar8;
  param_2[1] = (longlong)plStack_1d0;
LAB_142d36069:
  if (*param_5 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142d360a0 FUN_142d360a0 body=791 status=ok
// SIG undefined FUN_142d360a0(void)

ulonglong FUN_142d360a0(longlong param_1,longlong *param_2,float *param_3)

{
  longlong *plVar1;
  float fVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  float *pfVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  int iVar15;
  undefined8 local_res20;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  uVar5 = *(ulonglong *)(DAT_146b33f38 + 0x58);
  if (param_2 == (longlong *)0x0) {
    local_res20 = 0;
  }
  else {
    local_res20 = (**(code **)(*param_2 + 0x148))(param_2);
  }
  if (((uVar5 == 0) || (param_2 == (longlong *)0x0)) || (local_res20 == 0)) {
    return uVar5 & 0xffffffffffffff00;
  }
  lVar3 = param_2[3];
  plVar1 = (longlong *)(param_1 + 0xa0);
  lVar6 = (longlong)*(int *)(param_1 + 0xa8);
  fVar2 = *(float *)(local_res20 + 0x790);
  iVar15 = 0;
  if (*(int *)(param_1 + 0xa8) != 0) {
    iVar15 = 0;
    bVar14 = fVar2 < *(float *)(*plVar1 + 0x14);
    lVar12 = 0;
    iVar9 = 0;
    do {
      lVar12 = lVar12 + 1;
      iVar10 = iVar9 + 1;
      if (lVar12 < lVar6) {
        pfVar7 = (float *)(*plVar1 + 0x14 + lVar12 * 0x20);
        do {
          if (bVar14 != fVar2 < *pfVar7) break;
          iVar10 = iVar10 + 1;
          lVar12 = lVar12 + 1;
          pfVar7 = pfVar7 + 8;
        } while (lVar12 < lVar6);
      }
      if (bVar14 != false) {
        if (iVar15 != iVar9) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar15 * 0x20 + *plVar1),
                     (void *)((longlong)iVar9 * 0x20 + *plVar1),(longlong)(iVar10 - iVar9) << 5);
        }
        iVar15 = iVar15 + (iVar10 - iVar9);
      }
      bVar14 = (bool)(bVar14 ^ 1);
      iVar9 = iVar10;
    } while (lVar12 < lVar6);
    *(int *)(param_1 + 0xa8) = iVar15;
  }
  lVar6 = local_res20;
  plVar11 = (longlong *)*plVar1;
  plVar8 = plVar11 + (longlong)iVar15 * 4;
  if (plVar11 != plVar8) {
    pfVar7 = (float *)(plVar11 + 2);
    do {
      if ((*plVar11 == lVar3) &&
         ((pfVar7[-1] - param_3[1]) * (pfVar7[-1] - param_3[1]) +
          (pfVar7[-2] - *param_3) * (pfVar7[-2] - *param_3) +
          (*pfVar7 - param_3[2]) * (*pfVar7 - param_3[2]) < *(float *)(uVar5 + 0x108))) {
        FWeakObjectPtr::operator=(&local_res20,lVar6);
        if (((pfVar7[2] == (float)local_res20) && (pfVar7[3] == local_res20._4_4_)) ||
           ((cVar4 = FWeakObjectPtr::IsValid(), cVar4 == '\0' &&
            (cVar4 = FWeakObjectPtr::IsValid(&local_res20), cVar4 == '\0')))) {
          *(float *)((longlong)plVar11 + 0x14) = fVar2 + *(float *)(uVar5 + 0x10c);
          return CONCAT71((int7)(uVar5 >> 8),1);
        }
      }
      plVar11 = plVar11 + 4;
      pfVar7 = pfVar7 + 8;
    } while (plVar11 != plVar8);
    iVar15 = *(int *)(param_1 + 0xa8);
  }
  iVar9 = iVar15 + 1;
  *(int *)(param_1 + 0xa8) = iVar9;
  if (*(int *)(param_1 + 0xac) < iVar9) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar1,iVar15);
    iVar9 = *(int *)(param_1 + 0xa8);
  }
  lVar12 = *plVar1;
  lVar13 = (longlong)iVar9 * 0x20;
  *(longlong *)(lVar13 + -0x20 + lVar12) = lVar3;
  *(undefined8 *)(lVar13 + -0x18 + lVar12) = *(undefined8 *)param_3;
  *(float *)(lVar13 + -0x10 + lVar12) = param_3[2];
  *(float *)(lVar13 + -0xc + lVar12) = fVar2 + *(float *)(uVar5 + 0x10c);
  uVar5 = FWeakObjectPtr::operator=(lVar12 + -8 + lVar13,lVar6);
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 142d363c0 FUN_142d363c0 body=286 status=ok
// SIG undefined FUN_142d363c0(void)

void FUN_142d363c0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if ((((param_2 != 0) && (param_3 != 0)) &&
      (lVar1 = FUN_142d3b8e0(param_1,param_3,param_2), lVar1 != 0)) &&
     (lVar3 = (longlong)*(int *)(lVar1 + 0x38), *(int *)(lVar1 + 0x38) != 0)) {
    iVar7 = 0;
    bVar8 = **(longlong **)(lVar1 + 0x30) != param_2;
    lVar4 = 0;
    iVar5 = 0;
    do {
      lVar4 = lVar4 + 1;
      iVar6 = iVar5 + 1;
      if (lVar4 < lVar3) {
        plVar2 = (longlong *)(*(longlong *)(lVar1 + 0x30) + lVar4 * 8);
        do {
          if (bVar8 != (*plVar2 != param_2)) break;
          iVar6 = iVar6 + 1;
          lVar4 = lVar4 + 1;
          plVar2 = plVar2 + 1;
        } while (lVar4 < lVar3);
      }
      if (bVar8 != false) {
        if (iVar7 != iVar5) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar7 * 8),
                     (void *)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar5 * 8),
                     (longlong)(iVar6 - iVar5) << 3);
        }
        iVar7 = iVar7 + (iVar6 - iVar5);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar5 = iVar6;
    } while (lVar4 < lVar3);
    *(int *)(lVar1 + 0x38) = iVar7;
  }
  return;
}



// FUNCTION 142d364e0 FUN_142d364e0 body=326 status=ok
// SIG undefined FUN_142d364e0(void)

void FUN_142d364e0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_78 = *(longlong *)(param_1 + 0x180);
  if (local_78 != 0) {
    iVar1 = 0;
    iVar3 = -1;
    if (0 < *(int *)(param_1 + 400)) {
      plVar2 = *(longlong **)(param_1 + 0x188);
      do {
        if (*plVar2 == local_78) {
          if ((int)plVar2[7] == 0) goto LAB_142d36549;
          if (iVar3 == -1) {
            iVar3 = iVar1;
          }
        }
        iVar1 = iVar1 + 1;
        plVar2 = plVar2 + 0xe;
      } while (iVar1 < *(int *)(param_1 + 400));
      iVar1 = iVar3;
      if (iVar3 != -1) {
LAB_142d36549:
        if (*(longlong **)(param_1 + 0x188) + (longlong)iVar1 * 0xe != (longlong *)0x0) {
          return;
        }
      }
    }
    iVar3 = *(int *)(param_1 + 400);
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0xff;
    local_18 = 0;
    local_10 = 0;
    *(int *)(param_1 + 400) = iVar3 + 1;
    if (*(int *)(param_1 + 0x194) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 0x188,iVar3);
    }
    FUN_142d2e8e0((longlong)iVar3 * 0x70 + *(longlong *)(param_1 + 0x188),&local_78);
    if (local_38 != 0) {
      FMemory::Free();
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (local_60 != 0) {
      FMemory::Free();
    }
    if (local_70 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142d36630 FUN_142d36630 body=566 status=ok
// SIG undefined FUN_142d36630(void)

undefined1 FUN_142d36630(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
LAB_142d3684c:
    return 0;
  }
  switch((char)param_1[1]) {
  case '\0':
    if ((param_2 == (longlong *)0x0) ||
       (lVar4 = (**(code **)(*param_2 + 0x148))(param_2), lVar4 == 0)) {
      uVar2 = FUN_142d3d1e0(lVar3,0,param_2);
    }
    else {
      uVar2 = FUN_142d3d1e0(lVar3,*(undefined4 *)(lVar4 + 0x8c8),param_2);
    }
    break;
  case '\x01':
    if ((param_2 == (longlong *)0x0) ||
       (lVar4 = (**(code **)(*param_2 + 0x148))(param_2), lVar4 == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(lVar4 + 0x8c8);
    }
    cVar1 = FUN_142d3d1e0(lVar3,uVar5,param_2);
    uVar2 = cVar1 == '\0';
    break;
  case '\x02':
    uVar5 = FUN_142c98860(param_1 + 2);
    lVar3 = *param_1;
    if ((param_2 == (longlong *)0x0) ||
       (lVar4 = (**(code **)(*param_2 + 0x148))(param_2), lVar4 == 0)) {
      uVar2 = FUN_142d4e110(lVar3,0,param_2,uVar5);
    }
    else {
      uVar2 = FUN_142d4e110(lVar3,*(undefined4 *)(lVar4 + 0x8c8),param_2,uVar5);
    }
    break;
  case '\x03':
    uVar5 = FUN_142c98860(param_1 + 2);
    lVar3 = *param_1;
    if ((param_2 == (longlong *)0x0) ||
       (lVar4 = (**(code **)(*param_2 + 0x148))(param_2), lVar4 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(lVar4 + 0x8c8);
    }
    lVar3 = FUN_142d3a910(lVar3,param_2);
    if (lVar3 != 0) {
      uVar2 = FUN_142d373f0(lVar3,uVar6,uVar5);
      return uVar2;
    }
    goto LAB_142d367a1;
  case '\x04':
    uVar5 = FUN_142c98860(param_1 + 2);
    lVar3 = *param_1;
    if ((param_2 == (longlong *)0x0) ||
       (lVar4 = (**(code **)(*param_2 + 0x148))(param_2), lVar4 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(lVar4 + 0x8c8);
    }
    lVar3 = FUN_142d3a910(lVar3,param_2);
    if (lVar3 != 0) {
      uVar2 = FUN_142d4e210(lVar3,uVar6,uVar5);
      return uVar2;
    }
LAB_142d367a1:
    uVar2 = 0;
    break;
  case '\x05':
    uVar5 = FUN_142c98860(param_1 + 2);
    lVar3 = *param_1;
    if ((param_2 == (longlong *)0x0) ||
       (lVar4 = (**(code **)(*param_2 + 0x148))(param_2), lVar4 == 0)) {
      uVar2 = FUN_142d374d0(lVar3,0,param_2,uVar5);
    }
    else {
      uVar2 = FUN_142d374d0(lVar3,*(undefined4 *)(lVar4 + 0x8c8),param_2,uVar5);
    }
    break;
  default:
    goto LAB_142d3684c;
  }
  return uVar2;
}



// FUNCTION 142d36890 FUN_142d36890 body=148 status=ok
// SIG undefined FUN_142d36890(void)

void FUN_142d36890(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  undefined8 local_38;
  longlong local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  lVar6 = FWeakObjectPtr::Get(param_1 + 8);
  local_38 = *param_2;
  local_20 = *(undefined4 *)(param_1 + 0x10);
  uStack_1c = *(undefined4 *)(param_1 + 0x14);
  pcVar5 = *(code **)(param_1 + 0x10);
  iStack_18 = *(int *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  local_30 = param_2[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  (*pcVar5)(iStack_18 + lVar6,&local_38,*(undefined8 *)(param_1 + 0x20));
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  return;
}



// FUNCTION 142d36930 FUN_142d36930 body=192 status=ok
// SIG undefined FUN_142d36930(void)

undefined8 FUN_142d36930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong *plStack_10;
  
  local_28 = 0;
  local_20 = 0;
  FUN_142d35ac0(param_1,&local_38,param_3,0,&local_28);
  plVar1 = plStack_30;
  local_18 = local_38;
  plStack_10 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  FUN_142d36f20(param_2,&local_18);
  plVar5 = plStack_30;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar1 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 142d369f0 FUN_142d369f0 body=178 status=ok
// SIG undefined FUN_142d369f0(void)

ulonglong FUN_142d369f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong *plStack_10;
  
  local_28 = 0;
  local_20 = 0;
  FUN_142d35ac0(param_1,&local_38,param_2,0,&local_28);
  plVar1 = plStack_30;
  local_18 = local_38;
  plStack_10 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  uVar6 = FUN_142d37050(&local_18,param_3);
  plVar5 = plStack_30;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar1 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      uVar6 = uVar6 & 0xffffffff;
      if (iVar3 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 142d36ab0 FUN_142d36ab0 body=310 status=ok
// SIG undefined FUN_142d36ab0(void)

undefined8 FUN_142d36ab0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 local_38;
  longlong *local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  lVar6 = FWeakObjectPtr::Get(param_1 + 8);
  plVar4 = (longlong *)param_2[1];
  if (lVar6 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    uVar7 = 0;
  }
  else {
    uVar7 = *param_2;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    lVar6 = FWeakObjectPtr::Get(param_1 + 8);
    local_20 = *(undefined4 *)(param_1 + 0x10);
    uStack_1c = *(undefined4 *)(param_1 + 0x14);
    pcVar5 = *(code **)(param_1 + 0x10);
    iStack_18 = *(int *)(param_1 + 0x18);
    uStack_14 = *(undefined4 *)(param_1 + 0x1c);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_38 = uVar7;
    local_30 = plVar4;
    (*pcVar5)(iStack_18 + lVar6,&local_38,*(undefined8 *)(param_1 + 0x20));
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    uVar7 = 1;
  }
  return uVar7;
}



// FUNCTION 142d36bf0 FUN_142d36bf0 body=810 status=ok
// SIG undefined FUN_142d36bf0(void)

void FUN_142d36bf0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *local_68;
  int local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  longlong local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (((*(char *)(param_1 + 0x738) != '\0') && (*(longlong *)(param_1 + 0x750) != 0)) &&
     (plVar2 = (longlong *)(param_1 + 0x808), *plVar2 == 0)) {
    plVar8 = *(longlong **)(param_1 + 0x118);
    if (plVar8 != (longlong *)0x0) {
      lVar6 = FUN_1429d7ab0();
      if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        if (plVar8[0x92] == 0) {
          (**(code **)(*plVar8 + 0x7c0))(plVar8);
        }
        plVar7 = (longlong *)(**(code **)(*plVar8 + 0x6e8))(plVar8);
        if (plVar7 != (longlong *)0x0) {
          lVar6 = FUN_142e39920();
          if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            lVar6 = plVar8[0x2d];
            if ((lVar6 != 0) && (cVar5 = (**(code **)(*plVar7 + 0x5c0))(plVar7), cVar5 == '\0')) {
              (**(code **)(*plVar7 + 0x450))(plVar7,lVar6);
            }
            if ((char)plVar7[0x96] == '\0') {
              *(undefined1 *)(plVar7 + 0x96) = 2;
            }
            (**(code **)(*plVar7 + 0x7a8))(plVar7);
            (**(code **)(*plVar7 + 0xc90))(plVar7);
          }
        }
      }
    }
    FUN_142d30fa0(param_1);
    *(undefined1 *)(param_1 + 0x791) = 1;
    local_58 = 0;
    local_50 = 0x16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"EqsRenderingComponent",0x2c);
    plVar8 = (longlong *)
             FUN_142d35ac0(param_1 + 0x750,local_28,*(undefined8 *)(param_1 + 0x118),0,&local_58);
    if (plVar2 != plVar8) {
      *plVar2 = *plVar8;
      *plVar8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x810,plVar8 + 1);
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_20 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    if (*plVar2 != 0) {
      *(undefined4 *)(*plVar2 + 0x16c) = 3;
      uStack_40 = 0;
      local_68 = (longlong *)0x0;
      *(undefined1 *)(*plVar2 + 0x130) = 1;
      local_48 = FUN_142d3ffa0;
      plVar8 = (longlong *)FMemory::Realloc(0,0x30);
      local_60 = 3;
      local_68 = plVar8;
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = (longlong)&PTR_FUN_144089920;
        FWeakObjectPtr::operator=(plVar8 + 1,param_1);
        *(undefined4 *)(plVar8 + 2) = (undefined4)local_48;
        *(undefined4 *)((longlong)plVar8 + 0x14) = local_48._4_4_;
        *(undefined4 *)(plVar8 + 3) = uStack_40;
        *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_3c;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar8[5] = lVar6;
        *plVar8 = (longlong)&PTR_FUN_144089968;
      }
      local_38 = *plVar2;
      local_30 = *(longlong *)(param_1 + 0x810);
      if (local_30 != 0) {
        LOCK();
        *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
        UNLOCK();
      }
      FUN_142d37050(&local_38,&local_68);
      if (local_60 != 0) {
        if (local_68 == (longlong *)0x0) {
          return;
        }
        (**(code **)(*local_68 + 0x28))(local_68,0);
        if (local_68 != (longlong *)0x0) {
          local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
        }
        local_60 = 0;
      }
      if (local_68 != (longlong *)0x0) {
        FMemory::Free(local_68);
      }
    }
  }
  return;
}



// FUNCTION 142d36f20 FUN_142d36f20 body=293 status=ok
// SIG undefined FUN_142d36f20(void)

longlong * FUN_142d36f20(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_18;
  longlong *local_10;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (*param_2 != 0) {
    lVar5 = UBehaviorTreeManager::GetCurrent(*(undefined8 *)(*param_2 + 0x58));
    if (lVar5 != 0) {
      FUN_142befb10(lVar5,param_2);
      local_10 = (longlong *)param_2[1];
      local_18 = *param_2;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_10 + 1) = (int)local_10[1] + 1;
        UNLOCK();
      }
      if (param_1 != &local_18) {
        *param_1 = local_18;
        local_18 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 1,&local_10);
      }
      plVar4 = local_10;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_10 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
    }
  }
  plVar4 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 142d37050 FUN_142d37050 body=144 status=ok
// SIG undefined FUN_142d37050(void)

undefined4 FUN_142d37050(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  uVar5 = 0xffffffff;
  if (*param_1 != 0) {
    lVar6 = UBehaviorTreeManager::GetCurrent(*(undefined8 *)(*param_1 + 0x58));
    uVar5 = 0xffffffff;
    if (lVar6 != 0) {
      uVar5 = FUN_142bf0fc0(lVar6,param_1,param_2);
    }
  }
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  return uVar5;
}



// FUNCTION 142d370e0 FUN_142d370e0 body=546 status=ok
// SIG undefined FUN_142d370e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d370e0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *plVar5;
  uint uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  uint local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  ulonglong local_48;
  undefined4 local_40;
  
  plVar1 = (longlong *)param_1[0x23];
  if (*(char *)((longlong)param_1 + 0x1c5) == '\0') {
    if (plVar1 == (longlong *)0x0) {
      uVar6 = (uint)local_48;
      uVar7 = (undefined4)(local_48 >> 0x20);
      uVar4 = local_40;
    }
    else {
      lVar3 = plVar1[0x2d];
      if (lVar3 == 0) {
        local_58 = (uint)_DAT_1468b5d90;
        uStack_54 = (undefined4)((ulonglong)_DAT_1468b5d90 >> 0x20);
        uVar6 = local_58;
        uVar7 = uStack_54;
        uVar4 = DAT_1468b5d98;
      }
      else {
        uVar6 = *(uint *)(lVar3 + 0x220);
        uVar7 = *(undefined4 *)(lVar3 + 0x224);
        uVar4 = *(undefined4 *)(lVar3 + 0x228);
      }
    }
  }
  else {
    uVar6 = (uint)param_1[0x39];
    uVar7 = (int)((ulonglong)param_1[0x39] >> 0x20);
    uVar4 = (int)param_1[0x3a];
  }
  fVar8 = *(float *)(param_2 + 0x18);
  if (fVar8 <= 0.0) {
    fVar8 = *(float *)((longlong)param_1 + 0x17c);
  }
  local_58 = uVar6;
  uStack_54 = uVar7;
  local_50 = uVar4;
  FUN_142d431f0(param_1[0x31],(int)param_1[0x33],fVar8,&local_58,0,param_1);
  plVar5 = plVar1;
  local_58 = uVar6;
  uStack_54 = uVar7;
  local_50 = uVar4;
  FUN_142d41cb0(param_1[0x34],0,fVar8,&local_58,plVar1,0);
  uVar9 = (undefined4)((ulonglong)plVar5 >> 0x20);
  if ((param_1[0x37] != 0) && (plVar1 != (longlong *)0x0)) {
    local_40 = 0;
    local_58 = local_58 & 0xffffff00;
    local_48 = (ulonglong)local_58;
    local_58 = uVar6;
    uStack_54 = uVar7;
    local_50 = uVar4;
    uVar2 = (**(code **)(*plVar1 + 0x148))(plVar1);
    FUN_142d42350(param_1[0x37],&local_58,&local_48,uVar2);
  }
  if (*(char *)((longlong)param_1 + 0x1c4) != '\0') {
    (**(code **)(*param_1 + 0x400))(param_1,param_2);
  }
  if (((char)param_1[0x35] != '\0') && (plVar1 != (longlong *)0x0)) {
    local_48 = CONCAT44(uVar7,uVar6);
    plVar5 = plVar1;
    if ((longlong *)plVar1[0x2a] != (longlong *)0x0) {
      plVar5 = (longlong *)plVar1[0x2a];
    }
    lVar3 = param_1[0x24];
    uVar2 = *(undefined8 *)(plVar1[2] + 0x18);
    local_40 = uVar4;
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    FUN_142c264a0(lVar3,&local_48,*(undefined4 *)((longlong)param_1 + 0x1ac),plVar5,
                  CONCAT44(uVar9,(int)param_1[0x36]),uVar2);
  }
  return;
}



// FUNCTION 142d37310 FUN_142d37310 body=210 status=ok
// SIG undefined FUN_142d37310(void)

void FUN_142d37310(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48 [6];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  undefined1 local_a;
  
  UGameplayTask::EndTask();
  uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar2 = UBehaviorTreeManager::GetCurrent(uVar1);
  if (lVar2 != 0) {
    FUN_142bd8290(lVar2,(int)param_1[0x11]);
    *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  }
  local_58 = DAT_1466ad3c0;
  local_50 = DAT_1466ad3c8;
  local_14 = 0xffffffff;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[4] = 0;
  local_48[5] = 2;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  local_a = 0;
  FUN_142d33f40(param_1 + 0xf,local_48,&local_58,0);
  if (local_48[3] != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142d373f0 FUN_142d373f0 body=105 status=ok
// SIG undefined FUN_142d373f0(void)

undefined8 FUN_142d373f0(byte *param_1,float param_2,float param_3)

{
  float fVar1;
  byte bVar2;
  
  bVar2 = *param_1;
  if (((bVar2 & 3) != 3) ||
     ((0.0 < *(float *)(param_1 + 8) &&
      (*(float *)(param_1 + 8) < param_2 - *(float *)(param_1 + 4))))) {
    if ((bVar2 & 1) == 0) {
      if ((bVar2 & 2) == 0) {
        param_2 = -1.0;
      }
      else {
        param_2 = param_2 - *(float *)(param_1 + 4);
      }
    }
    else {
      fVar1 = *(float *)(param_1 + 8);
      if ((fVar1 <= 0.0) || (param_2 - *(float *)(param_1 + 4) <= fVar1)) {
        param_2 = 0.0;
      }
      else {
        param_2 = (param_2 - *(float *)(param_1 + 4)) - fVar1;
      }
    }
    if (param_3 <= param_2) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142d37460 FUN_142d37460 body=105 status=ok
// SIG undefined FUN_142d37460(void)

undefined8 FUN_142d37460(byte *param_1,float param_2,float param_3)

{
  float fVar1;
  byte bVar2;
  
  bVar2 = *param_1;
  if (((bVar2 & 3) != 3) ||
     ((0.0 < *(float *)(param_1 + 8) &&
      (*(float *)(param_1 + 8) < param_2 - *(float *)(param_1 + 4))))) {
    if ((bVar2 & 1) == 0) {
      if ((bVar2 & 2) == 0) {
        param_2 = -1.0;
      }
      else {
        param_2 = param_2 - *(float *)(param_1 + 4);
      }
    }
    else {
      fVar1 = *(float *)(param_1 + 8);
      if ((fVar1 <= 0.0) || (param_2 - *(float *)(param_1 + 4) <= fVar1)) {
        param_2 = 0.0;
      }
      else {
        param_2 = (param_2 - *(float *)(param_1 + 4)) - fVar1;
      }
    }
    if (param_2 <= param_3) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142d374d0 FUN_142d374d0 body=182 status=ok
// SIG undefined FUN_142d374d0(void)

bool FUN_142d374d0(undefined8 param_1,float param_2,undefined8 param_3,float param_4)

{
  float fVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)FUN_142d3a910(param_1,param_3);
  if (pbVar2 == (byte *)0x0) {
    return false;
  }
  if (((*pbVar2 & 3) == 3) &&
     ((fVar1 = *(float *)(pbVar2 + 8), fVar1 <= 0.0 || (param_2 - *(float *)(pbVar2 + 4) <= fVar1)))
     ) {
    if (((*pbVar2 & 1) != 0) && ((fVar1 <= 0.0 || (param_2 - *(float *)(pbVar2 + 4) <= fVar1)))) {
      return param_2 - *(float *)(pbVar2 + 4) <= param_4;
    }
    return 0.0 <= param_4;
  }
  return true;
}



// FUNCTION 142d37590 FUN_142d37590 body=1528 status=ok
// SIG undefined FUN_142d37590(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d37590(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  float *pfVar7;
  float *pfVar8;
  longlong *plVar9;
  float *pfVar10;
  byte *pbVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_248 [32];
  undefined8 local_228;
  undefined8 *local_220;
  undefined *local_218;
  undefined1 local_208 [8];
  undefined8 local_200;
  float local_1f8;
  int local_1f4;
  float local_1f0;
  float fStack_1ec;
  float local_1e8;
  byte *local_1d8;
  byte local_1c8 [12];
  undefined4 local_1bc;
  undefined8 local_19c;
  float local_194;
  undefined8 local_190;
  float local_188;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_110;
  byte local_10f;
  code *local_108;
  longlong local_f8 [4];
  longlong *local_d8;
  int local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  ulonglong local_88;
  
  if (param_2 != (longlong *)0x0) {
    local_88 = DAT_1468387a8 ^ (ulonglong)auStack_248;
    lVar2 = (**(code **)(*param_2 + 0x148))(param_2);
    if (lVar2 != 0) {
      local_1d8 = (byte *)(param_1 + 0x1a);
      local_200 = (float *)0x0;
      local_1f4 = 0;
      fVar20 = 0.0;
      if ((*local_1d8 & 1) != 0) {
        local_1f8 = 1.4013e-45;
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_200,0);
        *(undefined8 *)local_200 = param_1[0x21];
        local_200[2] = *(float *)(param_1 + 0x22);
        fVar20 = local_1f8;
      }
      lVar2 = param_1[0x2c];
      lVar12 = (longlong)*(int *)(param_1 + 0x2d) * 0xa0 + lVar2;
      pfVar10 = local_200;
      if (lVar2 != lVar12) {
        pfVar8 = (float *)(lVar2 + 0x50);
        do {
          if (((uint)pfVar8[-0x10] & 1) != 0) {
            if (pfVar10 != pfVar10 + (longlong)(int)fVar20 * 3) {
              pfVar7 = pfVar10;
              do {
                if (0.95 < pfVar8[-1] * pfVar7[1] + pfVar8[-2] * *pfVar7 + *pfVar8 * pfVar7[2])
                goto LAB_142d37732;
                pfVar7 = pfVar7 + 3;
              } while (pfVar7 != pfVar10 + (longlong)(int)fVar20 * 3);
            }
            local_1f8 = (float)((int)fVar20 + 1);
            if (local_1f4 < (int)local_1f8) {
              TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_200,fVar20);
              pfVar10 = local_200;
            }
            *(undefined8 *)(pfVar10 + (longlong)(int)fVar20 * 3) = *(undefined8 *)(pfVar8 + -2);
            pfVar10[(longlong)(int)fVar20 * 3 + 2] = *pfVar8;
            fVar20 = local_1f8;
          }
LAB_142d37732:
          lVar2 = lVar2 + 0xa0;
          pfVar8 = pfVar8 + 0x28;
        } while (lVar2 != lVar12);
      }
      plVar6 = (longlong *)0x0;
      if (0 < (int)fVar20) {
        fVar13 = 1.0 / (float)(int)fVar20;
        fVar17 = DAT_1468b5d90;
        fVar18 = DAT_1468b5d94;
        fVar19 = DAT_1468b5d98;
        for (pfVar8 = pfVar10; pfVar8 != pfVar10 + (longlong)(int)fVar20 * 3; pfVar8 = pfVar8 + 3) {
          fVar17 = fVar17 + fVar13 * *pfVar8;
          fVar18 = fVar18 + fVar13 * pfVar8[1];
          fVar19 = fVar19 + fVar13 * pfVar8[2];
        }
        fVar20 = fVar18 * fVar18 + fVar17 * fVar17 + fVar19 * fVar19;
        local_1f0 = fVar17;
        fStack_1ec = fVar18;
        local_1e8 = fVar19;
        if (0.0 < fVar20) {
          plVar4 = (longlong *)param_1[1];
          local_10f = local_10f & 0xfe;
          local_108 = AK::MemoryMgr::StartProfileThreadUsage;
          local_a0 = param_1[4];
          local_b8 = 0;
          uStack_b0 = 0x3f80000000000000;
          local_98 = *(undefined4 *)(param_1 + 5);
          local_138 = 0;
          local_130 = 0;
          local_128 = 0;
          local_120 = 0;
          local_118 = 0;
          local_d8 = (longlong *)0x0;
          local_c8 = 0;
          local_a8 = 0x3f800000;
          local_a4 = 0x3f800000;
          local_94 = 0x3f800000;
          local_110 = 0xc0;
          cVar1 = FUN_142d30490(local_208,plVar4);
          plVar9 = plVar6;
          if (cVar1 == '\0') {
            plVar4 = (longlong *)param_1[2];
            cVar1 = FUN_142d30490(local_208,plVar4);
            if (((cVar1 == '\0') && (plVar9 = (longlong *)0x0, param_1[3] != 0)) &&
               (plVar3 = (longlong *)FUN_142d5ecc0(), plVar9 = local_d8, plVar4 = plVar6,
               plVar3 != (longlong *)0x0)) {
              plVar4 = (longlong *)(**(code **)(*plVar3 + 0x298))(plVar3);
              plVar9 = local_d8;
            }
          }
          cVar1 = FUN_142d30490(local_208);
          if (cVar1 == '\0') {
            if (local_c8 != 0) {
              plVar6 = local_f8;
              if (plVar9 != (longlong *)0x0) {
                plVar6 = plVar9;
              }
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 0x10))(plVar6,0);
                plVar9 = local_d8;
              }
            }
          }
          else {
            _guard_xfg_dispatch_icall_nop(local_1c8,0,0x90);
            local_1bc = 0x3f800000;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = CONCAT44(0,fVar20);
            auVar16._8_8_ = 0;
            auVar16._0_8_ = CONCAT44(0,fVar20);
            auVar16 = rsqrtss(auVar15,auVar16);
            fVar14 = auVar16._0_4_;
            fVar14 = fVar14 + fVar14 * (0.5 - fVar20 * 0.5 * fVar14 * fVar14);
            fVar13 = -*(float *)((longlong)param_1 + 0x34);
            fVar14 = fVar14 + fVar14 * (0.5 - fVar20 * 0.5 * fVar14 * fVar14);
            local_1f8 = fVar19 * fVar14 * fVar13 + *(float *)(param_1 + 0x17);
            local_200 = (float *)CONCAT44(fVar18 * fVar14 * fVar13 +
                                          *(float *)((longlong)param_1 + 0xb4),
                                          fVar17 * fVar14 * fVar13 + *(float *)(param_1 + 0x16));
            uVar5 = (**(code **)(*param_2 + 0x148))(param_2);
            local_218 = &DAT_146aefe68;
            local_228 = (longlong *)((ulonglong)local_228._4_4_ << 0x20);
            local_220 = param_1 + 7;
            cVar1 = UWorld::LineTraceSingleByChannel(uVar5,local_1c8,param_1 + 0x16,&local_200);
            if (cVar1 == '\0') {
              param_1[0x21] = CONCAT44(fStack_1ec,local_1f0);
              *(ulonglong *)((longlong)param_1 + 0xfc) = CONCAT44(fStack_1ec,local_1f0);
              *(float *)(param_1 + 0x22) = local_1e8;
              *(float *)((longlong)param_1 + 0x104) = local_1e8;
              pbVar11 = local_1d8;
            }
            else {
              local_19c = CONCAT44(fStack_1ec,local_1f0);
              local_188 = local_1e8;
              local_194 = local_1e8;
              pbVar11 = local_1c8;
              local_190 = local_19c;
            }
            local_228 = &local_138;
            local_220 = (undefined8 *)((ulonglong)local_220 & 0xffffffffffffff00);
            FUN_142d68ea0(*param_1,plVar4,pbVar11,0);
            plVar9 = local_d8;
            if (local_c8 != 0) {
              plVar6 = local_f8;
              if (local_d8 != (longlong *)0x0) {
                plVar6 = local_d8;
              }
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 0x10))(plVar6,0);
                plVar9 = local_d8;
              }
            }
          }
          if (plVar9 != (longlong *)0x0) {
            FMemory::Free(plVar9);
          }
          if (local_128 != 0) {
            FMemory::Free();
          }
          if (local_138 != 0) {
            FMemory::Free();
          }
        }
      }
      if (pfVar10 != (float *)0x0) {
        FMemory::Free(pfVar10);
      }
    }
  }
  return;
}



// FUNCTION 142d37b90 FUN_142d37b90 body=243 status=ok
// SIG undefined FUN_142d37b90(void)

longlong FUN_142d37b90(longlong *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  uVar2 = UGameplayTaskOwnerInterface::StaticClass();
  lVar3 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar2);
  if (lVar3 == 0) {
    uVar2 = UEnvQueryTest_Cover::StaticClass();
    lVar3 = (**(code **)(*param_1 + 0x628))(param_1,uVar2);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar3 + 0x178;
    }
  }
  if (lVar3 == 0) {
    lVar3 = FUN_1429d7ab0();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar3 = param_1[0x92];
    }
    else {
      lVar3 = FUN_14291fb80();
      if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        return 0;
      }
      lVar3 = param_1[0x91];
    }
    lVar3 = FUN_142d37c90(lVar3);
  }
  return lVar3;
}



// FUNCTION 142d37c90 FUN_142d37c90 body=81 status=ok
// SIG undefined FUN_142d37c90(void)

longlong FUN_142d37c90(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = UGameplayTaskOwnerInterface::StaticClass();
    lVar2 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar1);
    if (lVar2 != 0) {
      return lVar2;
    }
    uVar1 = UEnvQueryTest_Cover::StaticClass();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      return lVar2 + 0x178;
    }
  }
  return 0;
}



// FUNCTION 142d37cf0 FUN_142d37cf0 body=58 status=ok
// SIG undefined FUN_142d37cf0(void)

float FUN_142d37cf0(undefined8 param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  if (param_4 != 0.0) {
    param_4 = ABS(param_4);
    if (param_3 < param_2) {
      fVar1 = param_2 - param_3;
      if (param_4 <= param_2 - param_3) {
        fVar1 = param_4;
      }
      return param_2 - fVar1;
    }
    fVar1 = param_3 - param_2;
    if (param_4 <= param_3 - param_2) {
      fVar1 = param_4;
    }
    param_2 = fVar1 + param_2;
  }
  return param_2;
}



// FUNCTION 142d37d30 FUN_142d37d30 body=137 status=ok
// SIG undefined FUN_142d37d30(void)

ulonglong FUN_142d37d30(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  ulonglong in_RAX;
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      uVar3 = *(undefined4 *)(lVar1 + 0x8c8);
      goto LAB_142d37d72;
    }
  }
  uVar3 = 0;
LAB_142d37d72:
  lVar1 = FUN_142d3a910(param_2,param_3);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_142d373f0(lVar1,uVar3,param_4);
  }
  return uVar2;
}



// FUNCTION 142d37dc0 FUN_142d37dc0 body=135 status=ok
// SIG undefined FUN_142d37dc0(void)

ulonglong FUN_142d37dc0(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  ulonglong in_RAX;
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      uVar2 = FUN_142d374d0(param_2,*(undefined4 *)(lVar1 + 0x8c8),param_3,param_4);
      return uVar2;
    }
  }
  uVar2 = FUN_142d374d0(param_2,0,param_3,param_4);
  return uVar2;
}



// FUNCTION 142d37e50 FUN_142d37e50 body=135 status=ok
// SIG undefined FUN_142d37e50(void)

ulonglong FUN_142d37e50(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  ulonglong in_RAX;
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      uVar2 = FUN_142d4e110(param_2,*(undefined4 *)(lVar1 + 0x8c8),param_3,param_4);
      return uVar2;
    }
  }
  uVar2 = FUN_142d4e110(param_2,0,param_3,param_4);
  return uVar2;
}



// FUNCTION 142d37ee0 FUN_142d37ee0 body=137 status=ok
// SIG undefined FUN_142d37ee0(void)

ulonglong FUN_142d37ee0(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  ulonglong in_RAX;
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      uVar3 = *(undefined4 *)(lVar1 + 0x8c8);
      goto LAB_142d37f22;
    }
  }
  uVar3 = 0;
LAB_142d37f22:
  lVar1 = FUN_142d3a910(param_2,param_3);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_142d4e210(lVar1,uVar3,param_4);
  }
  return uVar2;
}



// FUNCTION 142d37f70 FUN_142d37f70 body=70 status=ok
// SIG undefined FUN_142d37f70(void)

void FUN_142d37f70(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      uVar2 = *(undefined4 *)(lVar1 + 0x8c8);
      goto LAB_142d37fa1;
    }
  }
  uVar2 = 0;
LAB_142d37fa1:
  FUN_142d373f0(param_2,uVar2,param_3);
  return;
}



// FUNCTION 142d37fc0 FUN_142d37fc0 body=185 status=ok
// SIG undefined FUN_142d37fc0(void)

bool FUN_142d37fc0(longlong *param_1,byte *param_2,float param_3)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  
  if (param_1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_1 + 0x148))();
    if (lVar2 != 0) {
      fVar3 = *(float *)(lVar2 + 0x8c8);
      goto LAB_142d37ff9;
    }
  }
  fVar3 = 0.0;
LAB_142d37ff9:
  if (((*param_2 & 3) != 3) ||
     ((fVar1 = *(float *)(param_2 + 8), 0.0 < fVar1 && (fVar1 < fVar3 - *(float *)(param_2 + 4)))))
  {
    return true;
  }
  if (((*param_2 & 1) != 0) && ((fVar1 <= 0.0 || (fVar3 - *(float *)(param_2 + 4) <= fVar1)))) {
    return fVar3 - *(float *)(param_2 + 4) <= param_3;
  }
  return 0.0 <= param_3;
}



// FUNCTION 142d38080 FUN_142d38080 body=166 status=ok
// SIG undefined FUN_142d38080(void)

undefined8 FUN_142d38080(longlong *param_1,byte *param_2,float param_3)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  
  if (param_1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_1 + 0x148))();
    if (lVar2 != 0) {
      fVar3 = *(float *)(lVar2 + 0x8c8);
      goto LAB_142d380b9;
    }
  }
  fVar3 = 0.0;
LAB_142d380b9:
  if (((*param_2 & 3) == 3) &&
     ((fVar1 = *(float *)(param_2 + 8), fVar1 <= 0.0 || (fVar3 - *(float *)(param_2 + 4) <= fVar1)))
     ) {
    if (((*param_2 & 1) == 0) || ((0.0 < fVar1 && (fVar1 < fVar3 - *(float *)(param_2 + 4))))) {
      fVar3 = 0.0;
    }
    else {
      fVar3 = fVar3 - *(float *)(param_2 + 4);
    }
    if (param_3 <= fVar3) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142d38130 FUN_142d38130 body=70 status=ok
// SIG undefined FUN_142d38130(void)

void FUN_142d38130(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      uVar2 = *(undefined4 *)(lVar1 + 0x8c8);
      goto LAB_142d38161;
    }
  }
  uVar2 = 0;
LAB_142d38161:
  FUN_142d4e210(param_2,uVar2,param_3);
  return;
}



// FUNCTION 142d38180 FUN_142d38180 body=174 status=ok
// SIG undefined FUN_142d38180(void)

void FUN_142d38180(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + -0x618);
  if (plVar3 != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(*plVar3 + 0x688))(plVar3);
    uVar2 = UDamageableInterface::GetPrivateStaticClass();
    if (plVar1 != (longlong *)0x0) {
      plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(plVar1,uVar2);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
      }
      plVar3 = (longlong *)plVar1[0x92];
      if (plVar3 == (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x7c0))(plVar1);
        plVar3 = (longlong *)plVar1[0x92];
        if (plVar3 == (longlong *)0x0) {
          return;
        }
      }
      uVar2 = UDamageableInterface::GetPrivateStaticClass();
    }
    plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(plVar3,uVar2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
    }
  }
  return;
}



// FUNCTION 142d38230 FUN_142d38230 body=1895 status=ok
// SIG undefined FUN_142d38230(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d38230(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ushort uVar2;
  bool bVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong *plVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined1 *puVar19;
  uint *puVar20;
  undefined1 *puVar21;
  ulonglong uVar22;
  undefined1 auStack_b6b8 [32];
  uint local_b698;
  undefined8 local_b690;
  undefined8 local_b688;
  int iStack_b680;
  uint uStack_b67c;
  undefined8 local_b678;
  uint uStack_b670;
  int iStack_b66c;
  undefined8 local_b668;
  undefined4 local_b660;
  uint uStack_b65c;
  uint local_b658;
  longlong local_b650;
  longlong local_b648;
  longlong *local_b640;
  longlong *local_b638;
  undefined8 uStack_b630;
  uint *puStack_b628;
  undefined8 uStack_b620;
  undefined8 uStack_b618;
  undefined1 local_b608 [8];
  undefined1 local_b600 [8];
  undefined1 local_b5f8 [888];
  int local_b280;
  undefined1 local_b278 [45600];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_b6b8;
  local_b648 = param_1;
  local_b640 = param_2;
  plVar7 = (longlong *)FWeakObjectPtr::Get();
  if (plVar7 == (longlong *)0x0) {
    return;
  }
  lVar8 = FUN_1428dfc70();
  if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
      lVar8 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  lVar8 = FUN_14291fb80();
  if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
      lVar8 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    plVar7 = (longlong *)plVar7[0x91];
  }
  if (plVar7 == (longlong *)0x0) {
    return;
  }
  lVar8 = AHeoCon::GetPrivateStaticClass();
  if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
      lVar8 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  plVar15 = (longlong *)0x0;
  if (bVar3) {
    lVar8 = plVar7[0x128];
    plVar15 = plVar7;
LAB_142d383b4:
    uVar10 = 0;
    if (lVar8 == 0) {
      return;
    }
    if (plVar15 != (longlong *)0x0) {
      if (plVar15[0x121] == 0) {
        local_b650 = plVar15[0x127];
        local_b690 = 0;
      }
      else {
        uVar10 = *(undefined8 *)(plVar15[0x121] + 0x180);
        local_b650 = plVar15[0x127];
        local_b690 = uVar10;
      }
      goto LAB_142d3840c;
    }
  }
  else {
    plVar9 = (longlong *)(**(code **)(*plVar7 + 0x668))(plVar7);
    if (plVar9 == (longlong *)0x0) {
LAB_142d3839a:
      uVar10 = UHomeWidget::GetPrivateStaticClass();
      lVar8 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar10);
      goto LAB_142d383b4;
    }
    uVar10 = UHomeWidget::GetPrivateStaticClass();
    lVar8 = (**(code **)(*plVar9 + 0x628))(plVar9,uVar10);
    if (lVar8 == 0) goto LAB_142d3839a;
  }
  uVar10 = FUN_142df3580(plVar7);
  local_b690 = uVar10;
  local_b650 = FUN_142ddddc0(plVar7);
LAB_142d3840c:
  uVar16 = *(int *)(lVar8 + 0x1c8) - *(int *)(lVar8 + 500);
  if (uVar16 != 0) {
    local_b698 = uVar16;
    if (*(char *)(param_1 + 0xa0) == '\0') {
      uVar11 = FUN_142c3f210();
      cVar5 = UObjectBaseUtility::IsIn(param_1,uVar11);
      if ((((cVar5 == '\0') &&
           (*(undefined1 *)(param_1 + 0xa0) = 1, (*(byte *)(param_1 + 0x78) & 1) != 0)) &&
          (0 < *(int *)(param_1 + 0x88))) && (*(int *)(param_1 + 0x98) == 0)) {
        plVar15 = (longlong *)(param_1 + 0x90);
        *(undefined4 *)(param_1 + 0x98) = 0;
        if (*(int *)(param_1 + 0x9c) < *(int *)(param_1 + 0x88)) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(plVar15);
        }
        lVar18 = *(longlong *)(param_1 + 0x80);
        lVar1 = lVar18 + (longlong)*(int *)(param_1 + 0x88) * 0x28;
        uVar16 = local_b698;
        for (; local_b698 = uVar16, lVar18 != lVar1; lVar18 = lVar18 + 0x28) {
          lVar12 = FUN_141796df0(lVar18 + 0x10);
          if (lVar12 != 0) {
            lVar13 = FUN_14171bfe0();
            if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              iVar6 = *(int *)(param_1 + 0x98);
              *(int *)(param_1 + 0x98) = iVar6 + 1;
              if (*(int *)(param_1 + 0x9c) < iVar6 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar15,iVar6);
              }
              *(longlong *)(*plVar15 + (longlong)iVar6 * 8) = lVar12;
            }
          }
          uVar10 = local_b690;
          param_2 = local_b640;
          uVar16 = local_b698;
        }
      }
    }
    plVar15 = (longlong *)(lVar8 + 0x1c0);
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    if (0 < (int)uVar16) {
      FUN_142d46cd0(local_b278,uVar16);
    }
    lVar1 = local_b650;
    puStack_b628 = (uint *)(lVar8 + 0x1d0);
    local_b688._4_4_ = 1;
    local_b688._0_4_ = 0;
    iVar6 = *(int *)(lVar8 + 0x1e8);
    local_b678._4_4_ = 0;
    uStack_b670 = 0;
    if (iVar6 != 0) {
      puVar20 = *(uint **)(lVar8 + 0x1e0);
      if (*(uint **)(lVar8 + 0x1e0) == (uint *)0x0) {
        puVar20 = puStack_b628;
      }
      uVar16 = *puVar20;
      uStack_b670 = 0;
      local_b688._0_4_ = 0;
      while (uVar16 == 0) {
        lVar8 = (longlong)(int)local_b688;
        uStack_b670 = uStack_b670 + 0x20;
        iVar14 = (int)local_b688 + 1;
        bVar3 = (int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_b688;
        local_b688._0_4_ = iVar14;
        local_b678._4_4_ = iVar6;
        if (bVar3) goto LAB_142d3862d;
        uVar16 = puVar20[lVar8 + 1];
      }
      local_b688._4_4_ = -uVar16 & uVar16;
      iVar14 = 0x1f;
      if (local_b688._4_4_ != 0) {
        for (; local_b688._4_4_ >> iVar14 == 0; iVar14 = iVar14 + -1) {
        }
      }
      if (local_b688._4_4_ == 0) {
        iVar14 = 0x20;
      }
      else {
        iVar14 = 0x1f - iVar14;
      }
      local_b678._4_4_ = (uStack_b670 - iVar14) + 0x1f;
      if (iVar6 < local_b678._4_4_) {
        local_b678._4_4_ = iVar6;
      }
    }
LAB_142d3862d:
    uStack_b630 = CONCAT44(local_b688._4_4_,(int)local_b688);
    uStack_b620 = CONCAT44(local_b678._4_4_,0xffffffff);
    local_b668 = CONCAT44(iStack_b66c,uStack_b670);
    _iStack_b680 = CONCAT44(local_b688._4_4_,(int)local_b688);
    uStack_b670 = 0xffffffff;
    iStack_b66c = local_b678._4_4_;
    bVar3 = local_b678._4_4_ < iVar6;
    lVar8 = local_b648;
    local_b638 = plVar15;
    uStack_b618 = local_b668;
    local_b688 = plVar15;
    local_b678 = puStack_b628;
    if (bVar3) {
      do {
        uVar17 = 0;
        lVar18 = *plVar15 + 8 + (longlong)iStack_b66c * 0x380;
        local_b688 = plVar15;
        cVar5 = FWeakObjectPtr::IsValid(lVar18);
        if (cVar5 != '\0') {
          cVar5 = FUN_1405dc8f0(lVar18,plVar7);
          if (cVar5 != '\0') {
            FUN_142dc1ad0(local_b608);
            FUN_142dd1ad0(local_b608,uVar10,lVar18);
            iVar6 = FUN_142d3c0d0(lVar8,plVar7,local_b608);
            if (iVar6 == 0) {
              FUN_142dc8570(local_b608,plVar7,lVar1);
              lVar18 = FWeakObjectPtr::Get(local_b5f8);
              uVar22 = local_50;
              if ((lVar18 == 0) || (*(int *)(lVar18 + 0x470) < 1)) {
                lVar18 = (longlong)(int)local_50;
                local_b280 = (int)local_50;
                iVar6 = (int)local_50 + 1;
                local_50 = CONCAT44(local_50._4_4_,iVar6);
                if (local_50._4_4_ < iVar6) {
                  FUN_142d46b30(local_b278,uVar22 & 0xffffffff);
                }
                puVar19 = local_b278;
                if (local_58 != (undefined1 *)0x0) {
                  puVar19 = local_58;
                }
                FUN_140726d20(puVar19 + lVar18 * 0x390,local_b608);
              }
              else {
                plVar15 = *(longlong **)(lVar18 + 0x468);
                uVar22 = (longlong)*(int *)(lVar18 + 0x470) & 0x1fffffffffffffff;
                if (plVar15 + *(int *)(lVar18 + 0x470) < plVar15) {
                  uVar22 = 0;
                }
                if (uVar22 != 0) {
                  do {
                    if (*plVar15 != 0) {
                      FWeakObjectPtr::operator=(local_b600);
                      uVar4 = local_50;
                      lVar8 = (longlong)(int)local_50;
                      local_b280 = (int)local_50;
                      iVar6 = (int)local_50 + 1;
                      local_50 = CONCAT44(local_50._4_4_,iVar6);
                      if (local_50._4_4_ < iVar6) {
                        FUN_142d46b30(local_b278,uVar4 & 0xffffffff);
                      }
                      puVar19 = local_b278;
                      if (local_58 != (undefined1 *)0x0) {
                        puVar19 = local_58;
                      }
                      FUN_140726d20(puVar19 + lVar8 * 0x390,local_b608);
                    }
                    plVar15 = plVar15 + 1;
                    uVar17 = uVar17 + 1;
                    lVar8 = local_b648;
                  } while (uVar17 != uVar22);
                }
              }
            }
          }
        }
        uStack_b670 = uStack_b670 & ~uStack_b67c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_b680);
        param_2 = local_b640;
        uVar10 = local_b690;
        plVar15 = local_b688;
      } while (iStack_b66c < (int)local_b678[6]);
    }
    FUN_142bef1a0(param_2);
    puVar19 = local_b278;
    if (local_58 != (undefined1 *)0x0) {
      puVar19 = local_58;
    }
    puVar21 = puVar19 + (longlong)(int)local_50 * 0x390;
    if (puVar19 != puVar21) {
      local_b698 = local_b658;
      do {
        uVar2 = *(ushort *)((longlong)param_2 + 0x154);
        uVar16 = *(uint *)(param_2 + 4);
        iVar6 = uVar16 + uVar2;
        *(int *)(param_2 + 4) = iVar6;
        if (*(int *)((longlong)param_2 + 0x24) < iVar6) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_2 + 3);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(param_2[3] + (longlong)(int)uVar16),0,(ulonglong)uVar2);
        FUN_142cb3d70(param_2[3] + (longlong)(int)uVar16);
        iVar6 = (int)param_2[1];
        uStack_b65c = uVar16 & 0x7fffffff;
        uVar16 = local_b698 & 0xfffffffe;
        local_b660 = 0;
        *(int *)(param_2 + 1) = iVar6 + 1;
        local_b698 = uVar16;
        if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2);
        }
        lVar8 = *param_2;
        puVar19 = puVar19 + 0x390;
        *(ulonglong *)(lVar8 + (longlong)iVar6 * 0xc) = CONCAT44(uStack_b65c,local_b660);
        *(uint *)(lVar8 + 8 + (longlong)iVar6 * 0xc) = uVar16;
      } while (puVar19 != puVar21);
    }
    if (local_58 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142d389a0 FUN_142d389a0 body=1019 status=ok
// SIG undefined FUN_142d389a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d389a0(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  char cVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  float fVar17;
  undefined1 auStack_288 [32];
  float local_268;
  undefined8 *local_260;
  undefined8 *local_258;
  undefined4 local_250;
  undefined8 *local_248;
  longlong local_240;
  undefined4 local_238;
  longlong *local_230;
  undefined8 local_228;
  undefined8 *local_220;
  undefined8 local_218;
  undefined8 *local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined1 local_1f0 [400];
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  local_230 = param_2;
  plVar10 = (longlong *)FWeakObjectPtr::Get((longlong)param_2 + 0x34);
  if (plVar10 != (longlong *)0x0) {
    lVar11 = FUN_1428dfc70();
    if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
        lVar11 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    plVar15 = plVar10;
    if (!bVar5) {
      lVar11 = FUN_1428e7a40();
      if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
          lVar11 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) {
        return;
      }
      plVar15 = (longlong *)plVar10[0x23];
      if ((longlong *)plVar10[0x23] == (longlong *)0x0) {
        return;
      }
    }
    FUN_142d34560(param_1);
    FAIDataProviderValue::BindData(param_1 + 0x60,plVar10,(int)param_2[6]);
    fVar17 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x60);
    lVar11 = plVar15[0x2d];
    if (lVar11 == 0) {
      local_258 = (undefined8 *)_DAT_1468b5d90;
      local_250 = DAT_1468b5d98;
    }
    else {
      local_258 = *(undefined8 **)(lVar11 + 0x220);
      local_250 = *(undefined4 *)(lVar11 + 0x228);
    }
    local_200 = local_258;
    local_1f8 = local_250;
    lVar11 = FUN_142df3580(plVar15);
    uVar16 = 0;
    local_60 = (undefined1 *)0x0;
    local_58 = 0;
    local_240 = lVar11;
    local_228 = (**(code **)(*plVar15 + 0x148))(plVar15);
    local_220 = &local_228;
    local_218 = FUN_14073d760(&local_228,DAT_146b34888);
    local_210 = &local_228;
    local_248 = local_220;
    local_208 = 0;
    puVar12 = (undefined8 *)FUN_14073d760(local_220,local_218);
    local_258 = (undefined8 *)FUN_14073d760(local_210,local_208);
    puVar6 = local_248;
    if (puVar12 != local_258) {
      do {
        lVar3 = puVar12[2];
        local_260 = &local_200;
        local_268 = fVar17 * fVar17;
        cVar8 = FUN_142d3e5e0(param_1,lVar3,plVar15,lVar11);
        uVar7 = local_58;
        if (cVar8 != '\0') {
          uVar4 = *(undefined8 *)(lVar3 + 0x118);
          lVar11 = (longlong)(int)local_58;
          iVar9 = (int)local_58 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar9);
          if (local_58._4_4_ < iVar9) {
            FUN_1407413c0(local_1f0,uVar7 & 0xffffffff);
          }
          puVar13 = local_1f0;
          if (local_60 != (undefined1 *)0x0) {
            puVar13 = local_60;
          }
          *(undefined8 *)(puVar13 + lVar11 * 8) = uVar4;
          lVar11 = local_240;
        }
        puVar12 = (undefined8 *)FUN_14073d760(puVar6,*puVar12);
        param_2 = local_230;
      } while (puVar12 != local_258);
    }
    FUN_142bef1a0(param_2,local_58 & 0xffffffff);
    puVar13 = local_1f0;
    if (local_60 != (undefined1 *)0x0) {
      puVar13 = local_60;
    }
    local_258 = (undefined8 *)((longlong)(int)local_58 & 0x1fffffffffffffff);
    if (puVar13 + (longlong)(int)local_58 * 8 < puVar13) {
      local_258 = (undefined8 *)uVar16;
    }
    if (local_258 != (undefined8 *)0x0) {
      local_248 = (undefined8 *)CONCAT44(local_248._4_4_,local_238);
      do {
        FWeakObjectPtr::operator=(&local_230);
        uVar1 = *(ushort *)((longlong)param_2 + 0x154);
        uVar2 = *(uint *)(param_2 + 4);
        iVar9 = uVar2 + uVar1;
        *(int *)(param_2 + 4) = iVar9;
        if (*(int *)((longlong)param_2 + 0x24) < iVar9) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_2 + 3);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(param_2[3] + (longlong)(int)uVar2),0,(ulonglong)uVar1);
        UEnvQueryItemType_Actor::SetValue(param_2[3] + (longlong)(int)uVar2,&local_230);
        iVar9 = (int)param_2[1];
        uVar14 = (uint)local_248 & 0xfffffffe;
        local_240 = (ulonglong)(uVar2 & 0x7fffffff) << 0x20;
        local_248 = (undefined8 *)((ulonglong)local_248 & 0xfffffffffffffffe);
        *(int *)(param_2 + 1) = iVar9 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 1) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar9);
        }
        lVar11 = *param_2;
        uVar16 = uVar16 + 1;
        *(longlong *)(lVar11 + (longlong)iVar9 * 0xc) = local_240;
        *(uint *)(lVar11 + 8 + (longlong)iVar9 * 0xc) = uVar14;
      } while ((undefined8 *)uVar16 != local_258);
    }
    if (local_60 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142d38da0 FUN_142d38da0 body=111 status=ok
// SIG undefined FUN_142d38da0(void)

void FUN_142d38da0(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    lVar4 = FUN_1428dfc70();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      iVar3 = rand();
      *(int *)((longlong)param_1 + 0x18c) = iVar3;
      (**(code **)(*param_1 + 0x260))(param_1);
    }
  }
  return;
}



// FUNCTION 142d38e10 FUN_142d38e10 body=1208 status=ok
// SIG undefined FUN_142d38e10(void)

void FUN_142d38e10(longlong param_1,float *param_2,longlong param_3,float param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float local_a8;
  
  fVar18 = *(float *)(param_1 + 0x180);
  fVar20 = *(float *)(param_1 + 0x17c);
  if ((*(char *)(param_1 + 0x174) != '\0') && (*(longlong *)(param_1 + 0x80) != 0)) {
    plVar12 = (longlong *)UNodeMappingContainer::GetPrivateStaticClass();
    plVar14 = *(longlong **)(param_1 + 0x80);
    for (plVar4 = plVar14; plVar4 != (longlong *)0x0; plVar4 = (longlong *)plVar4[6]) {
      if (plVar4 == plVar12) {
        if (plVar14 == (longlong *)0x0) break;
        lVar13 = plVar14[0x1f];
        if (lVar13 == 0) {
          (**(code **)(*plVar14 + 0x368))();
          lVar13 = plVar14[0x1f];
          if (lVar13 == 0) break;
        }
        fVar20 = *(float *)(param_1 + 0x178) * *(float *)(lVar13 + 0x2c);
        fVar18 = (1.0 - *(float *)(param_1 + 0x178)) * *(float *)(lVar13 + 0x2c);
        break;
      }
    }
  }
  *param_2 = fVar20;
  param_2[4] = fVar18;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 0x184);
  param_2[2] = *(float *)(param_1 + 0x188);
  param_2[3] = *(float *)(param_1 + 0x18c);
  *(undefined1 *)(param_2 + 5) = *(undefined1 *)(param_1 + 400);
  param_2[6] = *(float *)(param_1 + 0x194);
  param_2[7] = *(float *)(param_1 + 0x198);
  fVar18 = *(float *)(param_1 + 0x1c0);
  iVar6 = rand();
  fVar20 = *(float *)(param_1 + 0x1bc);
  iVar7 = rand();
  fVar15 = *(float *)(param_1 + 0x1b8);
  iVar8 = rand();
  fVar16 = *(float *)(param_1 + 0x1a4);
  iVar9 = rand();
  fVar1 = *(float *)(param_1 + 0x1a0);
  iVar10 = rand();
  fVar2 = *(float *)(param_1 + 0x19c);
  iVar11 = rand();
  fVar19 = 1.0;
  if (param_3 == 0) {
    plVar14 = (longlong *)0x0;
  }
  else {
    plVar14 = *(longlong **)(param_3 + 0x840);
  }
  if ((plVar14 != (longlong *)0x0) && (cVar5 = (**(code **)(*plVar14 + 0xa60))(), cVar5 != '\0')) {
    fVar19 = *(float *)(param_1 + 0x1d0);
  }
  fVar3 = *(float *)(param_1 + 0x1cc);
  param_4 = param_4 * fVar19;
  *(ulonglong *)(param_2 + 0xb) =
       CONCAT44(((float)iVar7 * fVar20 * 6.103702e-05 - fVar20) + *(float *)(param_1 + 0x1c8),
                ((float)iVar8 * fVar15 * 6.103702e-05 - fVar15) + *(float *)(param_1 + 0x1c4));
  param_2[0xd] = ((float)iVar6 * fVar18 * 6.103702e-05 - fVar18) + fVar3;
  param_2[0xb] = param_4 * param_2[0xb];
  param_2[0xc] = param_4 * param_2[0xc];
  param_2[0xd] = param_4 * param_2[0xd];
  fVar18 = *(float *)(param_1 + 0x1b0);
  *(ulonglong *)(param_2 + 8) =
       CONCAT44(((float)iVar10 * fVar1 * 6.103702e-05 - fVar1) + *(float *)(param_1 + 0x1ac),
                ((float)iVar11 * fVar2 * 6.103702e-05 - fVar2) + *(float *)(param_1 + 0x1a8));
  param_2[10] = ((float)iVar9 * fVar16 * 6.103702e-05 - fVar16) + fVar18;
  param_2[10] = param_4 * param_2[10];
  param_2[8] = param_4 * param_2[8];
  param_2[9] = param_4 * param_2[9];
  if (((*(uint *)(param_1 + 0x30) >> 1 & 1) != 0) &&
     (((fVar18 = *param_5, fVar18 != DAT_1468b5d90 || (DAT_1468b5d94 != param_5[1])) ||
      (DAT_1468b5d98 != param_5[2])))) {
    fVar20 = param_5[1];
    fVar15 = fVar20 * fVar20 + fVar18 * fVar18;
    if (fVar15 == 1.0) {
      fVar16 = fVar20;
      local_a8 = fVar18;
      if (param_5[2] == 0.0) {
        local_a8 = (float)*(undefined8 *)param_5;
        fVar16 = (float)((ulonglong)*(undefined8 *)param_5 >> 0x20);
      }
    }
    else {
      fVar16 = DAT_1468b5d94;
      local_a8 = DAT_1468b5d90;
      if (1e-08 <= fVar15) {
        auVar17 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
        fVar16 = auVar17._0_4_;
        fVar16 = fVar16 + fVar16 * (0.5 - fVar15 * 0.5 * fVar16 * fVar16);
        fVar16 = fVar16 + fVar16 * (0.5 - fVar15 * 0.5 * fVar16 * fVar16);
        local_a8 = fVar18 * fVar16;
        fVar16 = fVar20 * fVar16;
      }
    }
    param_2[0xb] = local_a8 * param_2[0xb];
    param_2[0xc] = fVar16 * param_2[0xc];
    if (*(char *)(param_1 + 0x1b4) != '\0') {
      param_2[10] = fVar16 * param_2[10];
      param_2[8] = -(local_a8 * param_2[8]);
      param_2[9] = fVar16 * param_2[9];
    }
  }
  return;
}



// FUNCTION 142d392d0 FUN_142d392d0 body=36 status=ok
// SIG undefined FUN_142d392d0(void)

void FUN_142d392d0(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_142d5ecc0();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142d392e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x298))(plVar1);
    return;
  }
  return;
}



// FUNCTION 142d39300 FUN_142d39300 body=31 status=ok
// SIG undefined FUN_142d39300(void)

void FUN_142d39300(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142d5ecc0();
  if (lVar1 != 0) {
    FVoicePacketImpl::GetSampleCounter(lVar1);
    return;
  }
  return;
}



// FUNCTION 142d39320 FUN_142d39320 body=98 status=ok
// SIG undefined FUN_142d39320(void)

undefined8 FUN_142d39320(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((param_1 != 0) && (lVar1 = *(longlong *)(param_1 + 0x150), lVar1 != 0)) {
    lVar3 = UAISystem::GetPrivateStaticClass();
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
      return *(undefined8 *)(lVar1 + 0x128);
    }
  }
  return 0;
}



// FUNCTION 142d393a0 FUN_142d393a0 body=199 status=ok
// SIG undefined FUN_142d393a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d393a0(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_2a8 [32];
  undefined1 local_288 [8];
  undefined1 *local_280;
  undefined1 local_278 [512];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  local_50 = 0xffffffff;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_58 = 0;
  local_4c = 0;
  local_28 = 0;
  local_20 = 0;
  (**(code **)(*(longlong *)(param_1 + 0x730) + 0x10))((longlong *)(param_1 + 0x730),local_278);
  FUN_142d2cbe0(local_278,param_2);
  local_280 = local_288;
  FUN_142d2d9f0(*param_2,*(undefined4 *)(param_2 + 1),&local_280);
  local_20 = 0;
  if (local_28 != 0) {
    FMemory::Free();
  }
  FUN_142d30090(local_278);
  return;
}



// FUNCTION 142d39470 FUN_142d39470 body=26 status=ok
// SIG undefined FUN_142d39470(void)

undefined8 * FUN_142d39470(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142dfd5b0();
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 142d39490 FUN_142d39490 body=271 status=ok
// SIG undefined FUN_142d39490(void)

undefined8 * FUN_142d39490(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x1a0);
  if ((lVar4 == 0) && (lVar1 = *(longlong *)(param_1 + 0x118), lVar1 != 0)) {
    lVar4 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar4 = *(longlong *)(lVar1 + 0x4c0);
      *(longlong *)(param_1 + 0x1a0) = lVar4;
    }
    else {
      plVar2 = *(longlong **)(param_1 + 0x118);
      uVar5 = FUN_142a07000();
      lVar4 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar5);
      *(longlong *)(param_1 + 0x1a0) = lVar4;
    }
  }
  if (((lVar4 != 0) && (param_3 != 0)) && (lVar1 = *(longlong *)(param_3 + 400), lVar1 != 0)) {
    if (lVar1 == lVar4) {
      *param_2 = *(undefined8 *)(param_3 + 0x198);
      return param_2;
    }
    if (*(longlong *)(lVar1 + 400) == lVar4) {
      *param_2 = *(undefined8 *)(lVar1 + 0x198);
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 142d395a0 FUN_142d395a0 body=1158 status=ok
// SIG undefined FUN_142d395a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_142d395a0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,longlong param_6,int param_7)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 uVar4;
  uint *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  byte *pbVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_1f8 [32];
  uint *local_1d8;
  byte *local_1d0;
  undefined1 *local_1c8;
  undefined1 local_1b8 [4];
  uint local_1b4;
  undefined1 local_1b0;
  int local_1ac;
  longlong local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  undefined8 local_188;
  longlong *local_178 [2];
  byte local_168 [4];
  undefined4 local_164;
  uint local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined8 local_154;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [72];
  longlong local_90;
  longlong local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  local_190 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b31fe8) && (_Init_thread_header(&DAT_146b31fe8), DAT_146b31fe8 == -1))
  {
    FName::FName(&DAT_146b31fe0,L"ApplyRadiusDamage",1);
    _Init_thread_footer(&DAT_146b31fe8);
  }
  local_1d8 = (uint *)param_6;
  FUN_1422ffb20(local_d8,DAT_146b31fe0,local_1b8,0);
  FCollisionQueryParams::AddIgnoredActors(local_d8,param_5);
  local_1a8 = 0;
  local_1a0 = 0;
  uVar4 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_2,1);
  local_188 = CONCAT44(param_4,2);
  puVar5 = (uint *)FUN_140a05dc0();
  local_1b4 = ~puVar5[1] & *puVar5;
  local_1c8 = local_d8;
  local_1d0 = (byte *)&local_188;
  local_1d8 = &local_1b4;
  local_1b0 = 0;
  UWorld::OverlapMultiByObjectType(uVar4,&local_1a8,param_3,&DAT_1464aa810);
  local_1b8[0] = 0;
  if ((0 < (int)local_1a0) && (param_6 != 0)) {
    local_1b8[0] = FUN_142dd0740(param_6);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  local_188 = local_1a8 + (longlong)(int)local_1a0 * 0x18;
  lVar12 = local_1a8;
  if (local_1a8 != local_188) {
    do {
      uVar2 = local_1b8[0];
      local_198 = FUN_1423111a0(lVar12);
      if ((((local_198 != 0) && ((*(byte *)(local_198 + 0x91) & 0x40) != 0)) &&
          (local_198 != param_6)) && (lVar6 = FWeakObjectPtr::Get(lVar12 + 8), lVar6 != 0)) {
        _guard_xfg_dispatch_icall_nop(local_168,0,0x90);
        local_15c = 0x3f800000;
        if (param_7 != 0x21) {
          local_1d0 = local_168;
          local_1d8 = (uint *)CONCAT71(local_1d8._1_7_,uVar2);
          cVar3 = FUN_142d35450(lVar6,param_3,param_6,param_7);
          if (cVar3 == '\0') goto LAB_142d39969;
        }
        TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
        ::FindId(param_1,&local_1ac,local_198);
        if ((local_1ac == -1) || (lVar8 = (longlong)local_1ac * 0x20 + *param_1, lVar8 == 0)) {
          local_178[0] = &local_198;
          FUN_1407b9130(param_1,&local_1b4,local_178,0);
          lVar8 = (longlong)(int)local_1b4 * 0x20 + *param_1;
        }
        lVar10 = *(longlong *)(lVar8 + 8);
        lVar11 = (longlong)*(int *)(lVar8 + 0x10) * 0x90 + lVar10;
        for (; lVar10 != lVar11; lVar10 = lVar10 + 0x90) {
          lVar7 = FWeakObjectPtr::Get(lVar10 + 0x74);
          if (lVar7 == lVar6) {
            param_3 = local_190;
            if (lVar10 != 0) goto LAB_142d39969;
            break;
          }
        }
        iVar1 = *(int *)(lVar8 + 0x10);
        *(int *)(lVar8 + 0x10) = iVar1 + 1;
        if (*(int *)(lVar8 + 0x14) < iVar1 + 1) {
          TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow
                    ((longlong *)(lVar8 + 8),iVar1);
        }
        pbVar9 = (byte *)((longlong)iVar1 * 0x90 + *(longlong *)(lVar8 + 8));
        *pbVar9 = *pbVar9 ^ (*pbVar9 ^ local_168[0]) & 1;
        *pbVar9 = *pbVar9 ^ (*pbVar9 ^ local_168[0]) & 2;
        *(undefined4 *)(pbVar9 + 4) = local_164;
        *(uint *)(pbVar9 + 8) = *(uint *)(pbVar9 + 8) ^ (local_160 ^ *(uint *)(pbVar9 + 8)) & 1;
        *(undefined4 *)(pbVar9 + 0xc) = local_15c;
        *(undefined4 *)(pbVar9 + 0x10) = local_158;
        *(undefined8 *)(pbVar9 + 0x14) = local_154;
        *(undefined4 *)(pbVar9 + 0x1c) = local_14c;
        *(undefined8 *)(pbVar9 + 0x20) = local_148;
        *(undefined4 *)(pbVar9 + 0x28) = local_140;
        *(undefined8 *)(pbVar9 + 0x2c) = local_13c;
        *(undefined4 *)(pbVar9 + 0x34) = local_134;
        *(undefined8 *)(pbVar9 + 0x38) = local_130;
        *(undefined4 *)(pbVar9 + 0x40) = local_128;
        *(undefined8 *)(pbVar9 + 0x44) = local_124;
        *(undefined4 *)(pbVar9 + 0x4c) = local_11c;
        *(undefined8 *)(pbVar9 + 0x50) = local_118;
        *(undefined4 *)(pbVar9 + 0x58) = local_110;
        *(undefined4 *)(pbVar9 + 0x5c) = local_10c;
        *(undefined4 *)(pbVar9 + 0x60) = local_108;
        *(undefined4 *)(pbVar9 + 100) = local_104;
        *(undefined4 *)(pbVar9 + 0x68) = local_100;
        *(undefined4 *)(pbVar9 + 0x6c) = local_fc;
        *(undefined4 *)(pbVar9 + 0x70) = local_f8;
        *(undefined4 *)(pbVar9 + 0x74) = local_f4;
        *(undefined4 *)(pbVar9 + 0x78) = local_f0;
        *(undefined8 *)(pbVar9 + 0x80) = local_e8;
        *(undefined8 *)(pbVar9 + 0x88) = local_e0;
        param_3 = local_190;
      }
LAB_142d39969:
      lVar12 = lVar12 + 0x18;
    } while (lVar12 != local_188);
  }
  if (local_1a8 != 0) {
    FMemory::Free(local_1a8);
  }
  if (local_70 != 0) {
    FMemory::Free();
  }
  if (local_90 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142d39a30 FUN_142d39a30 body=253 status=ok
// SIG undefined FUN_142d39a30(void)

longlong FUN_142d39a30(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar2 = *(longlong *)(param_1 + 0x9c0), lVar2 != 0)) {
      lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        return lVar2;
      }
    }
    lVar2 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((!bVar1) || (lVar2 = *(longlong *)(param_1 + 0x490), lVar2 == 0)) {
      lVar2 = FUN_142231800(param_1);
      return lVar2;
    }
  }
  return lVar2;
}



// FUNCTION 142d39b30 FUN_142d39b30 body=22 status=ok
// SIG undefined FUN_142d39b30(void)

undefined4 FUN_142d39b30(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x8c8);
  }
  return 0;
}



// FUNCTION 142d39b50 FUN_142d39b50 body=77 status=ok
// SIG undefined FUN_142d39b50(void)

ulonglong FUN_142d39b50(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  
  cVar2 = FUN_142d52a00(param_1 + 0x58);
  if (cVar2 != '\0') {
    uVar1 = FUN_142d52a20(param_1 + 0x58);
    uVar1 = FArchive::operator<<(uVar1);
    uVar3 = FUN_142d5fed0(uVar1);
    return uVar3;
  }
  return (ulonglong)*(uint *)(param_1 + 0x54);
}



// FUNCTION 142d39ba0 FUN_142d39ba0 body=59 status=ok
// SIG undefined FUN_142d39ba0(void)

longlong FUN_142d39ba0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x1a8);
  if (lVar1 == 0) {
    if (*(longlong *)(param_1 + 0x118) != 0) {
      lVar1 = FUN_142d29780();
      *(longlong *)(param_1 + 0x1a8) = lVar1;
      return lVar1;
    }
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 142d39be0 FUN_142d39be0 body=31 status=ok
// SIG undefined FUN_142d39be0(void)

void FUN_142d39be0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142d29780();
  if (lVar1 != 0) {
    FUN_142d19e30(lVar1);
    return;
  }
  return;
}



// FUNCTION 142d39c00 FUN_142d39c00 body=54 status=ok
// SIG undefined FUN_142d39c00(void)

undefined8 FUN_142d39c00(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x68) == '\0') {
    return 0x3f800000;
  }
  if (*(longlong *)(param_2 + 0x2b0) != 0) {
    uVar1 = FUN_142c98860(param_1 + 0x70,*(undefined8 *)(*(longlong *)(param_2 + 0x2b0) + 0x118));
    return uVar1;
  }
  uVar1 = FUN_142c98860(param_1 + 0x70,0);
  return uVar1;
}



// FUNCTION 142d39c40 FUN_142d39c40 body=29 status=ok
// SIG undefined FUN_142d39c40(void)

ulonglong FUN_142d39c40(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x250) != 0) {
    uVar1 = FUN_142db9240(*(undefined1 *)(*(longlong *)(param_1 + 0x250) + 0x50));
    return uVar1;
  }
  return (ulonglong)*(byte *)(param_1 + 600);
}



// FUNCTION 142d39c60 FUN_142d39c60 body=107 status=ok
// SIG undefined FUN_142d39c60(void)

float FUN_142d39c60(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  float fVar3;
  
  if (param_2 == (longlong *)0x0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = (float)(**(code **)(*param_2 + 0x18))(param_2,0);
    if ((char)param_2[0x5e] != '\x01') {
      plVar2 = (longlong *)param_2[0x47];
      plVar1 = plVar2 + (longlong)(int)param_2[0x48] * 3;
      if (plVar2 != plVar1) {
        do {
          if ((*plVar2 != 0) && (*(char *)(*plVar2 + 0x60) == '\0')) {
            fVar3 = fVar3 + *(float *)(plVar2 + 2);
          }
          plVar2 = plVar2 + 3;
        } while (plVar2 != plVar1);
        return fVar3;
      }
    }
  }
  return fVar3;
}



// FUNCTION 142d39cd0 FUN_142d39cd0 body=449 status=ok
// SIG undefined FUN_142d39cd0(void)

longlong * FUN_142d39cd0(longlong *param_1,longlong *param_2)

{
  void *_Dst;
  void *_Src;
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 local_res8;
  longlong local_38 [2];
  
  if (*param_1 == 0) {
    *param_2 = 0;
    param_2[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy(*param_2,&DAT_143f3edc8,10);
  }
  else {
    local_res8 = *(undefined8 *)(*param_1 + 0x18);
    FName::ToString(&local_res8);
  }
  lVar4 = param_1[0x14];
  lVar6 = (longlong)(int)param_1[0x15] * 0x88 + lVar4;
  for (; lVar4 != lVar6; lVar4 = lVar4 + 0x88) {
    iVar1 = (int)param_2[1];
    iVar5 = iVar1 + -1;
    if (iVar1 < 1) {
      iVar5 = 0;
    }
    iVar1 = (iVar1 < 1) + 1 + iVar1;
    *(int *)(param_2 + 1) = iVar1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
    }
    *(undefined2 *)(*param_2 + (longlong)iVar5 * 2) = 10;
    *(undefined2 *)(*param_2 + 2 + (longlong)iVar5 * 2) = 0;
    iVar1 = (int)param_2[1];
    iVar5 = iVar1 + -1;
    if (iVar1 < 1) {
      iVar5 = 0;
    }
    iVar1 = (iVar1 < 1) + 1 + iVar1;
    *(int *)(param_2 + 1) = iVar1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
    }
    *(undefined2 *)(*param_2 + (longlong)iVar5 * 2) = 9;
    *(undefined2 *)(*param_2 + 2 + (longlong)iVar5 * 2) = 0;
    puVar3 = (undefined8 *)FUN_142de9bb0(lVar4,local_38);
    _Src = (void *)*puVar3;
    iVar1 = *(int *)(puVar3 + 1) + -1;
    if (*(int *)(puVar3 + 1) == 0) {
      iVar1 = 0;
    }
    if (iVar1 != 0) {
      iVar5 = (int)param_2[1];
      iVar2 = (uint)(iVar5 == 0) + iVar1 + iVar5;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
      }
      _Dst = (void *)(*param_2 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar1 * 2);
      *(undefined2 *)((longlong)iVar1 * 2 + (longlong)_Dst) = 0;
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 142d39ea0 FUN_142d39ea0 body=97 status=ok
// SIG undefined FUN_142d39ea0(void)

undefined8 FUN_142d39ea0(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x2c;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Retrieves all allowed perceived target info",0x58);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142d39f10 FUN_142d39f10 body=97 status=ok
// SIG undefined FUN_142d39f10(void)

undefined8 FUN_142d39f10(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x28;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Retrieves all allowed targetable actors",0x50);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142d39f80 FUN_142d39f80 body=97 status=ok
// SIG undefined FUN_142d39f80(void)

undefined8 FUN_142d39f80(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x16;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Perceived Target Info",0x2c);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142d39ff0 GetDescriptionTitle body=97 status=ok
// SIG undefined GetDescriptionTitle(void)

undefined8
UEnvQueryGenerator_SinglePoint::GetDescriptionTitle(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x12;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Targetable Actors",0x24);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142d3a060 FUN_142d3a060 body=98 status=ok
// SIG undefined FUN_142d3a060(void)

float * FUN_142d3a060(longlong param_1,float param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  
  pfVar1 = *(float **)(param_1 + 0x30);
  pfVar3 = (float *)0x0;
  pfVar2 = pfVar1 + (longlong)*(int *)(param_1 + 0x38) * 0x14;
  for (; pfVar1 != pfVar2; pfVar1 = pfVar1 + 0x14) {
    if ((pfVar3 == (float *)0x0) || (ABS(*pfVar1 - param_2) <= ABS(*pfVar3 - param_2))) {
      pfVar3 = pfVar1;
    }
  }
  pfVar1 = (float *)&DAT_146b31f80;
  if (pfVar3 != (float *)0x0) {
    pfVar1 = pfVar3;
  }
  return pfVar1;
}



// FUNCTION 142d3a0d0 FUN_142d3a0d0 body=29 status=ok
// SIG undefined FUN_142d3a0d0(void)

void FUN_142d3a0d0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x30) & 1) != 0)) {
    *param_2 = *(undefined4 *)(param_1 + 0x26c);
    *param_3 = *(undefined4 *)(param_1 + 0x270);
  }
  return;
}



// FUNCTION 142d3a0f0 FUN_142d3a0f0 body=364 status=ok
// SIG undefined FUN_142d3a0f0(void)

float FUN_142d3a0f0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  longlong local_48;
  int local_40;
  
  if (param_1 == 0) {
    return 0.0;
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    lVar3 = UNodeMappingContainer::GetPrivateStaticClass();
    lVar4 = *(longlong *)(param_1 + 0x80);
    for (lVar6 = lVar4; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
      if (lVar6 == lVar3) {
        if (lVar4 != 0) {
          if (lVar4 == 0) goto LAB_142d3a1e5;
          plVar5 = (longlong *)UNodeMappingContainer::GetPrivateStaticClass();
          plVar7 = *(longlong **)(param_1 + 0x80);
          plVar1 = plVar7;
          goto joined_r0x000142d3a1d5;
        }
        break;
      }
    }
  }
  goto LAB_142d3a142;
joined_r0x000142d3a1d5:
  if (plVar1 == (longlong *)0x0) goto LAB_142d3a1e5;
  if (plVar1 == plVar5) goto LAB_142d3a1e7;
  plVar1 = (longlong *)plVar1[6];
  goto joined_r0x000142d3a1d5;
LAB_142d3a1e5:
  plVar7 = (longlong *)0x0;
LAB_142d3a1e7:
  lVar4 = plVar7[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    lVar4 = plVar7[0x1f];
    if (lVar4 == 0) goto LAB_142d3a142;
  }
  lVar6 = UNodeMappingContainer::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    fVar9 = *(float *)(lVar4 + 0x2c);
    goto LAB_142d3a145;
  }
LAB_142d3a142:
  fVar9 = 0.0;
LAB_142d3a145:
  lVar4 = FUN_142d3aaa0(param_1,&local_48,0x3f800000);
  fVar10 = *(float *)(lVar4 + 0x10);
  if (*(float *)(lVar4 + 0x10) <= fVar9) {
    fVar10 = fVar9;
  }
  if (local_40 != 0) {
    lVar4 = local_48 + 8;
    iVar8 = local_40;
    do {
      FRichCurve::~FRichCurve(lVar4);
      lVar4 = lVar4 + 0x80;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  return fVar10;
}



// FUNCTION 142d3a260 FUN_142d3a260 body=724 status=ok
// SIG undefined FUN_142d3a260(void)

longlong *
FUN_142d3a260(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,float param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  int iVar13;
  float local_res18 [2];
  undefined1 local_58 [8];
  longlong *local_50;
  void *local_48;
  longlong *local_40;
  
  iVar8 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  iVar10 = (int)param_2[1];
  *(undefined4 *)(param_2 + 2) = 0;
  if (iVar10 != 0) {
    lVar6 = *param_2 + 8;
    do {
      FRichCurve::~FRichCurve(lVar6);
      lVar6 = lVar6 + 0x80;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,8>_>,FDefaultAllocator>::ResizeTo
              (param_2,0);
  }
  FUN_142d2c7f0(param_2,param_4);
  local_50 = (longlong *)*param_3;
  plVar1 = local_50 + (int)param_3[1];
  local_40 = plVar1;
  if (local_50 != plVar1) {
    do {
      lVar6 = *local_50;
      if ((lVar6 != 0) && (iVar10 = *(int *)(lVar6 + 0x30), iVar10 != 0)) {
        iVar13 = (int)param_2[1];
        if (*(int *)((longlong)param_2 + 0xc) < iVar13 + iVar10) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,8>_>,FDefaultAllocator>::
          ResizeTo(param_2);
          iVar13 = (int)param_2[1];
        }
        puVar11 = *(uint **)(lVar6 + 0x28);
        puVar9 = (uint *)((longlong)iVar13 * 0x80 + *param_2);
        puVar7 = puVar9 + 0xf;
        iVar13 = iVar10;
        do {
          *puVar9 = *puVar9 ^ (*puVar11 ^ *puVar9) & 1;
          uVar3 = (*puVar9 ^ *puVar11) & 2 ^ *puVar9;
          *puVar9 = uVar3;
          uVar3 = (*puVar11 ^ uVar3) & 4 ^ uVar3;
          *puVar9 = uVar3;
          *puVar9 = (uVar3 ^ *puVar11) & 8 ^ uVar3;
          puVar7[-0xb] = 0;
          puVar7[-10] = 0;
          puVar7[-9] = 0;
          puVar7[-8] = 0;
          puVar7[-3] = 0;
          puVar7[-2] = 0;
          puVar7[-1] = 0;
          puVar7[0] = 0;
          puVar7[1] = 0xffffffff;
          puVar7[2] = 0;
          puVar7[5] = 0;
          puVar7[6] = 0;
          puVar7[7] = 0;
          *(undefined ***)(puVar7 + -0xd) = &PTR_FUN_14413ebc8;
          *(char *)(puVar7 + 9) = (char)puVar11[0x18];
          *(undefined1 *)((longlong)puVar7 + 0x25) = *(undefined1 *)((longlong)puVar11 + 0x61);
          puVar7[10] = puVar11[0x19];
          puVar7[0xb] = 0;
          puVar7[0xc] = 0;
          uVar3 = puVar11[0x1c];
          local_48 = *(void **)(puVar11 + 0x1a);
          puVar7[0xd] = uVar3;
          if (uVar3 == 0) {
            puVar7[0xe] = 0;
          }
          else {
            TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(puVar7 + 0xb,uVar3,0);
            _guard_xfg_dispatch_icall_nop
                      (*(void **)(puVar7 + 0xb),local_48,(longlong)(int)uVar3 * 0x1c);
          }
          puVar9 = puVar9 + 0x20;
          *(undefined8 *)(puVar7 + 0xf) = *(undefined8 *)(puVar11 + 0x1e);
          puVar11 = puVar11 + 0x20;
          puVar7 = puVar7 + 0x20;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
        *(int *)(param_2 + 1) = (int)param_2[1] + iVar10;
        plVar1 = local_40;
      }
      local_50 = local_50 + 1;
    } while (local_50 != plVar1);
  }
  if ((*(uint *)(param_1 + 0x30) >> 2 & 1) == 0) {
    lVar6 = *param_2;
    lVar12 = (longlong)(int)param_2[1] * 0x80 + lVar6;
    for (; lVar6 != lVar12; lVar6 = lVar6 + 0x80) {
      lVar4 = *(longlong *)(lVar6 + 0x68);
      lVar5 = (longlong)*(int *)(lVar6 + 0x70) * 0x1c + lVar4;
      for (; lVar4 != lVar5; lVar4 = lVar4 + 0x1c) {
        *(float *)(lVar4 + 8) = param_5 * *(float *)(lVar4 + 8);
      }
    }
  }
  if (0 < (int)param_2[1]) {
    do {
      uVar2 = FRuntimeFloatCurve::GetRichCurve(*param_2 + 8 + (longlong)iVar8 * 0x80);
      FRichCurve::GetTimeRange(uVar2,local_58,local_res18);
      if (*(float *)(param_2 + 2) <= local_res18[0] && local_res18[0] != *(float *)(param_2 + 2)) {
        *(float *)(param_2 + 2) = local_res18[0];
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)param_2[1]);
  }
  return param_2;
}



// FUNCTION 142d3a540 FUN_142d3a540 body=724 status=ok
// SIG undefined FUN_142d3a540(void)

longlong *
FUN_142d3a540(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,float param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  int iVar13;
  float local_res18 [2];
  undefined1 local_58 [8];
  longlong *local_50;
  void *local_48;
  longlong *local_40;
  
  iVar8 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  iVar10 = (int)param_2[1];
  *(undefined4 *)(param_2 + 2) = 0;
  if (iVar10 != 0) {
    lVar6 = *param_2 + 8;
    do {
      FRichCurve::~FRichCurve(lVar6);
      lVar6 = lVar6 + 0x80;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,8>_>,FDefaultAllocator>::ResizeTo
              (param_2,0);
  }
  FUN_142d2c7f0(param_2,param_4);
  local_50 = (longlong *)*param_3;
  plVar1 = local_50 + (int)param_3[1];
  local_40 = plVar1;
  if (local_50 != plVar1) {
    do {
      lVar6 = *local_50;
      if ((lVar6 != 0) && (iVar10 = *(int *)(lVar6 + 0x30), iVar10 != 0)) {
        iVar13 = (int)param_2[1];
        if (*(int *)((longlong)param_2 + 0xc) < iVar13 + iVar10) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,8>_>,FDefaultAllocator>::
          ResizeTo(param_2);
          iVar13 = (int)param_2[1];
        }
        puVar11 = *(uint **)(lVar6 + 0x28);
        puVar9 = (uint *)((longlong)iVar13 * 0x80 + *param_2);
        puVar7 = puVar9 + 0xf;
        iVar13 = iVar10;
        do {
          *puVar9 = *puVar9 ^ (*puVar11 ^ *puVar9) & 1;
          uVar3 = (*puVar9 ^ *puVar11) & 2 ^ *puVar9;
          *puVar9 = uVar3;
          uVar3 = (*puVar11 ^ uVar3) & 4 ^ uVar3;
          *puVar9 = uVar3;
          *puVar9 = (*puVar11 ^ uVar3) & 8 ^ uVar3;
          puVar7[-0xb] = 0;
          puVar7[-10] = 0;
          puVar7[-9] = 0;
          puVar7[-8] = 0;
          puVar7[-3] = 0;
          puVar7[-2] = 0;
          puVar7[-1] = 0;
          puVar7[0] = 0;
          puVar7[1] = 0xffffffff;
          puVar7[2] = 0;
          puVar7[5] = 0;
          puVar7[6] = 0;
          puVar7[7] = 0;
          *(undefined ***)(puVar7 + -0xd) = &PTR_FUN_14413ebc8;
          *(char *)(puVar7 + 9) = (char)puVar11[0x18];
          *(undefined1 *)((longlong)puVar7 + 0x25) = *(undefined1 *)((longlong)puVar11 + 0x61);
          puVar7[10] = puVar11[0x19];
          puVar7[0xb] = 0;
          puVar7[0xc] = 0;
          uVar3 = puVar11[0x1c];
          local_48 = *(void **)(puVar11 + 0x1a);
          puVar7[0xd] = uVar3;
          if (uVar3 == 0) {
            puVar7[0xe] = 0;
          }
          else {
            TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(puVar7 + 0xb,uVar3,0);
            _guard_xfg_dispatch_icall_nop
                      (*(void **)(puVar7 + 0xb),local_48,(longlong)(int)uVar3 * 0x1c);
          }
          puVar9 = puVar9 + 0x20;
          *(undefined8 *)(puVar7 + 0xf) = *(undefined8 *)(puVar11 + 0x1e);
          puVar11 = puVar11 + 0x20;
          puVar7 = puVar7 + 0x20;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
        *(int *)(param_2 + 1) = (int)param_2[1] + iVar10;
        plVar1 = local_40;
      }
      local_50 = local_50 + 1;
    } while (local_50 != plVar1);
  }
  if ((*(byte *)(param_1 + 0x30) & 4) == 0) {
    lVar6 = *param_2;
    lVar12 = (longlong)(int)param_2[1] * 0x80 + lVar6;
    for (; lVar6 != lVar12; lVar6 = lVar6 + 0x80) {
      lVar4 = *(longlong *)(lVar6 + 0x68);
      lVar5 = (longlong)*(int *)(lVar6 + 0x70) * 0x1c + lVar4;
      for (; lVar4 != lVar5; lVar4 = lVar4 + 0x1c) {
        *(float *)(lVar4 + 8) = param_5 * *(float *)(lVar4 + 8);
      }
    }
  }
  if (0 < (int)param_2[1]) {
    do {
      uVar2 = FRuntimeFloatCurve::GetRichCurve(*param_2 + 8 + (longlong)iVar8 * 0x80);
      FRichCurve::GetTimeRange(uVar2,local_58,local_res18);
      if (*(float *)(param_2 + 2) <= local_res18[0] && local_res18[0] != *(float *)(param_2 + 2)) {
        *(float *)(param_2 + 2) = local_res18[0];
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)param_2[1]);
  }
  return param_2;
}



// FUNCTION 142d3a820 FUN_142d3a820 body=237 status=ok
// SIG undefined FUN_142d3a820(void)

undefined8 FUN_142d3a820(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return 0;
  }
  lVar2 = param_1[1];
  if (*(longlong *)(lVar1 + 0x28) == 0) {
    return 0;
  }
  lVar4 = FUN_142e162e0();
  lVar5 = *(longlong *)(lVar1 + 0x28);
  while( true ) {
    if (lVar5 == 0) {
      return 0;
    }
    if (lVar5 == lVar4) break;
    lVar5 = *(longlong *)(lVar5 + 0x30);
  }
  if (lVar2 == 0) {
    return 0;
  }
  if (*(int *)(lVar1 + 0x38) != *(int *)(lVar1 + 100)) {
    lVar5 = *(longlong *)(lVar1 + 0x70);
    if (*(longlong *)(lVar1 + 0x70) == 0) {
      lVar5 = lVar1 + 0x68;
    }
    iVar3 = *(int *)(lVar5 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                             (longlong)*(int *)(lVar1 + 0x78) - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar7 = (longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar3 * 0x18);
        if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar3 * 0x18) == lVar2) {
          if (iVar3 != -1) goto LAB_142d3a8e3;
          break;
        }
        iVar3 = (int)plVar7[2];
      } while (iVar3 != -1);
    }
  }
  plVar7 = (longlong *)0x0;
LAB_142d3a8e3:
  plVar6 = plVar7 + 1;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  if ((plVar6 != (longlong *)0x0) && (*plVar6 != 0)) {
    return *(undefined8 *)(*plVar6 + 8);
  }
  return 0;
}



// FUNCTION 142d3a910 FUN_142d3a910 body=167 status=ok
// SIG undefined FUN_142d3a910(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142d3a910(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x30) == 0) && (*(longlong *)(param_1 + 0x38) != 0)) &&
     (*(longlong *)(param_1 + 0x40) != 0)) {
    FUN_142ca0820(*(longlong *)(param_1 + 0x38),local_28,0,param_2);
    lVar1 = **(longlong **)(param_1 + 0x40);
    uVar2 = FUN_142cc1650(local_28);
    uVar2 = (**(code **)(lVar1 + 0x278))(*(undefined8 *)(param_1 + 0x40),param_1,uVar2);
    if (local_20 != 0) {
      FMemory::Free();
    }
    return uVar2;
  }
  return 0;
}



// FUNCTION 142d3a9c0 FUN_142d3a9c0 body=106 status=ok
// SIG undefined FUN_142d3a9c0(void)

ulonglong FUN_142d3a9c0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      uVar2 = FUN_142d3d1e0(param_2,*(undefined4 *)(lVar1 + 0x8c8),param_3);
      return uVar2;
    }
  }
  uVar2 = FUN_142d3d1e0(param_2,0,param_3);
  return uVar2;
}



// FUNCTION 142d3aa30 FUN_142d3aa30 body=104 status=ok
// SIG undefined FUN_142d3aa30(void)

undefined8 FUN_142d3aa30(longlong *param_1,byte *param_2)

{
  longlong lVar1;
  float fVar2;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      fVar2 = *(float *)(lVar1 + 0x8c8);
      goto LAB_142d3aa61;
    }
  }
  fVar2 = 0.0;
LAB_142d3aa61:
  if (((*param_2 & 3) == 3) &&
     ((*(float *)(param_2 + 8) <= 0.0 ||
      (fVar2 - *(float *)(param_2 + 4) <= *(float *)(param_2 + 8))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 142d3aaa0 FUN_142d3aaa0 body=687 status=ok
// SIG undefined FUN_142d3aaa0(void)

undefined8 * FUN_142d3aaa0(longlong param_1,undefined8 *param_2,float param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  longlong lVar5;
  uint uVar6;
  float fVar8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  int local_90;
  uint *local_80;
  ulonglong local_78;
  undefined4 local_70;
  ulonglong uVar7;
  
  if ((*(byte *)(param_1 + 0x30) & 5) == 0) {
    FUN_142d3a260(param_1,param_2,param_1 + 0x48,param_1 + 0x38,param_3);
  }
  else {
    FUN_142d3a260(param_1,&local_80,param_1 + 0x48,param_1 + 0x38,0x3f800000);
    FUN_142d3a260(param_1,&local_98,param_1 + 0x68,param_1 + 0x58,0x3f800000);
    for (puVar4 = local_80; puVar4 != local_80 + (longlong)(int)local_78 * 0x20;
        puVar4 = puVar4 + 0x20) {
      lVar3 = *(longlong *)(puVar4 + 0x1a);
      lVar5 = (longlong)(int)puVar4[0x1c] * 0x1c + lVar3;
      for (; lVar3 != lVar5; lVar3 = lVar3 + 0x1c) {
        local_a8 = 0;
        uStack_a0 = 0;
        FUN_142451f80(&local_98,*(undefined4 *)(lVar3 + 4),&local_a8,0x3f800000);
        uVar6 = *puVar4;
        uVar2 = uVar6 & 1;
        fVar8 = 0.0;
        if (uVar2 != 0) {
          fVar8 = (float)local_a8;
        }
        if ((uVar6 & 2) != 0) {
          fVar8 = fVar8 + local_a8._4_4_;
          uVar2 = uVar2 + 1;
        }
        if ((uVar6 & 4) != 0) {
          fVar8 = fVar8 + (float)uStack_a0;
          uVar2 = uVar2 + 1;
        }
        if ((uVar6 & 8) != 0) {
          fVar8 = fVar8 + uStack_a0._4_4_;
          uVar2 = uVar2 + 1;
        }
        if (uVar2 == 0) {
          fVar8 = 0.0;
        }
        else {
          fVar8 = fVar8 / (float)uVar2;
        }
        if ((*(uint *)(param_1 + 0x30) >> 2 & 1) != 0) {
          iVar1 = rand();
          param_3 = (float)iVar1 * 3.051851e-05;
        }
        *(float *)(lVar3 + 8) = (*(float *)(lVar3 + 8) - fVar8) * param_3 + fVar8;
      }
    }
    *param_2 = 0;
    FUN_1426f4440(param_2,local_80,local_78 & 0xffffffff,0,0);
    *(undefined4 *)(param_2 + 2) = local_70;
    if (local_90 != 0) {
      lVar3 = local_98 + 8;
      iVar1 = local_90;
      do {
        FRichCurve::~FRichCurve(lVar3);
        lVar3 = lVar3 + 0x80;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    if (local_98 != 0) {
      FMemory::Free();
    }
    if ((int)local_78 != 0) {
      puVar4 = local_80 + 2;
      uVar7 = local_78;
      do {
        FRichCurve::~FRichCurve(puVar4);
        puVar4 = puVar4 + 0x20;
        uVar6 = (int)uVar7 - 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 != 0);
    }
    if (local_80 != (uint *)0x0) {
      FMemory::Free(local_80);
    }
  }
  return param_2;
}



// FUNCTION 142d3ad50 FUN_142d3ad50 body=702 status=ok
// SIG undefined FUN_142d3ad50(void)

undefined8 * FUN_142d3ad50(longlong param_1,undefined8 *param_2,float param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  longlong lVar5;
  uint uVar6;
  float fVar8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  int local_90;
  uint *local_80;
  ulonglong local_78;
  undefined4 local_70;
  ulonglong uVar7;
  
  if (((*(uint *)(param_1 + 0x30) & 1) == 0) && ((*(uint *)(param_1 + 0x30) & 4) == 0)) {
    FUN_142d3a540(param_1,param_2,param_1 + 0x48,param_1 + 0x38,param_3);
  }
  else {
    FUN_142d3a540(param_1,&local_80,param_1 + 0x48,param_1 + 0x38,0x3f800000);
    FUN_142d3a540(param_1,&local_98,param_1 + 0x68,param_1 + 0x58,0x3f800000);
    for (puVar4 = local_80; puVar4 != local_80 + (longlong)(int)local_78 * 0x20;
        puVar4 = puVar4 + 0x20) {
      lVar3 = *(longlong *)(puVar4 + 0x1a);
      lVar5 = (longlong)(int)puVar4[0x1c] * 0x1c + lVar3;
      for (; lVar3 != lVar5; lVar3 = lVar3 + 0x1c) {
        local_a8 = 0;
        uStack_a0 = 0;
        FUN_142451f80(&local_98,*(undefined4 *)(lVar3 + 4),&local_a8,0x3f800000);
        uVar6 = *puVar4;
        uVar2 = uVar6 & 1;
        fVar8 = 0.0;
        if (uVar2 != 0) {
          fVar8 = (float)local_a8;
        }
        if ((uVar6 & 2) != 0) {
          fVar8 = fVar8 + local_a8._4_4_;
          uVar2 = uVar2 + 1;
        }
        if ((uVar6 & 4) != 0) {
          fVar8 = fVar8 + (float)uStack_a0;
          uVar2 = uVar2 + 1;
        }
        if ((uVar6 & 8) != 0) {
          fVar8 = fVar8 + uStack_a0._4_4_;
          uVar2 = uVar2 + 1;
        }
        if (uVar2 == 0) {
          fVar8 = 0.0;
        }
        else {
          fVar8 = fVar8 / (float)uVar2;
        }
        if ((*(byte *)(param_1 + 0x30) & 4) != 0) {
          iVar1 = rand();
          param_3 = (float)iVar1 * 3.051851e-05;
        }
        *(float *)(lVar3 + 8) = (*(float *)(lVar3 + 8) - fVar8) * param_3 + fVar8;
      }
    }
    *param_2 = 0;
    FUN_1426f4440(param_2,local_80,local_78 & 0xffffffff,0,0);
    *(undefined4 *)(param_2 + 2) = local_70;
    if (local_90 != 0) {
      lVar3 = local_98 + 8;
      iVar1 = local_90;
      do {
        FRichCurve::~FRichCurve(lVar3);
        lVar3 = lVar3 + 0x80;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    if (local_98 != 0) {
      FMemory::Free();
    }
    if ((int)local_78 != 0) {
      puVar4 = local_80 + 2;
      uVar7 = local_78;
      do {
        FRichCurve::~FRichCurve(puVar4);
        puVar4 = puVar4 + 0x20;
        uVar6 = (int)uVar7 - 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 != 0);
    }
    if (local_80 != (uint *)0x0) {
      FMemory::Free(local_80);
    }
  }
  return param_2;
}


