// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141576fc0 FUN_141576fc0 body=508 status=ok
// SIG undefined FUN_141576fc0(void)

undefined8 FUN_141576fc0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  longlong local_48 [2];
  undefined **local_38 [2];
  longlong *local_28;
  longlong local_20;
  
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x68);
  if (cVar4 != '\0') {
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x68);
    lVar7 = FUN_14270bb10(uVar6);
    if (lVar7 != 0) {
      lVar7 = FUN_142547b50(lVar7,local_38);
      local_38[0] = &PTR_FUN_143f740c8;
      if (local_20 != 0) {
        FMemory::Free();
      }
      local_38[0] = &PTR_FUN_143f73d18;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_28 + 1;
        lVar8 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar1 = (int *)((longlong)local_28 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_28 + 8))(local_28,1);
          }
        }
      }
      lVar8 = *(longlong *)(lVar7 + 8);
      if (((lVar8 != 0) && (*(longlong *)(lVar8 + 8) != 0)) && (*(longlong *)(lVar8 + 0x10) != 0)) {
        piVar1 = (int *)(*(longlong *)(lVar8 + 0x10) + 8);
        LOCK();
        iVar5 = *piVar1;
        if (iVar5 == 0) {
          *piVar1 = 0;
          iVar5 = 0;
        }
        UNLOCK();
        if (0 < iVar5) {
          lVar8 = FUN_142b45e90();
          uVar6 = *(undefined8 *)(lVar8 + 0x18);
          local_68 = *(undefined8 *)(lVar7 + 8);
          local_60 = *(longlong **)(lVar7 + 0x10);
          if (local_60 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_60 + 1) = (int)local_60[1] + 1;
            UNLOCK();
          }
          plVar9 = (longlong *)FUN_142b4a990(uVar6,local_58,&local_68);
          plVar3 = (longlong *)(param_1 + 0x88);
          if (plVar3 != plVar9) {
            *plVar3 = *plVar9;
            *plVar9 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x90,plVar9 + 1);
          }
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_50 + 1;
            lVar7 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar1 = (int *)((longlong)local_50 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*local_50 + 8))(local_50,1);
              }
            }
          }
          plVar9 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_60 + 1;
            lVar7 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
          if (*plVar3 != 0) {
            uVar6 = FUN_142b46360(*plVar3,local_48);
            FString::operator=(param_1 + 0x98,uVar6);
            if (local_48[0] != 0) {
              FMemory::Free();
            }
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1415771c0 FUN_1415771c0 body=758 status=ok
// SIG undefined FUN_1415771c0(void)

/* WARNING: Removing unreachable block (ram,0x0001415772e1) */
/* WARNING: Removing unreachable block (ram,0x0001415772ed) */
/* WARNING: Removing unreachable block (ram,0x000141577301) */
/* WARNING: Removing unreachable block (ram,0x0001415773aa) */
/* WARNING: Removing unreachable block (ram,0x0001415773b6) */
/* WARNING: Removing unreachable block (ram,0x0001415773ca) */

void FUN_1415771c0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 local_98;
  longlong *plStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [32];
  
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x810);
  if ((cVar5 != '\0') && (*(char *)(param_1 + 0x82c) != '\0')) {
    puVar6 = (undefined8 *)FNumberFormattingOptions::FNumberFormattingOptions(local_28);
    *(undefined4 *)(puVar6 + 2) = 2;
    *(undefined4 *)((longlong)puVar6 + 0x14) = 2;
    local_88 = *puVar6;
    uStack_80 = puVar6[1];
    local_78 = puVar6[2];
    uVar7 = FWeakObjectPtr::Get(param_1 + 0x810);
    FUN_14155d900(uVar7);
    uVar7 = FText::AsNumber(local_70);
    plVar4 = *(longlong **)(param_1 + 0x720);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x2b0))(plVar4,uVar7,1,0);
    }
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_68 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)local_68 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
        }
      }
    }
    uVar7 = FWeakObjectPtr::Get(param_1 + 0x810);
    FUN_14155d900(uVar7);
    uVar7 = FText::AsNumber(local_58);
    plVar4 = *(longlong **)(param_1 + 0x728);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x2b0))(plVar4,uVar7,1,0);
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_50 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    local_98 = 0;
    plStack_90 = (longlong *)0x0;
    lVar8 = FWeakObjectPtr::Get(param_1 + 0x810);
    uVar7 = FText::AsNumber(local_40,*(undefined4 *)(lVar8 + 0x90),0,&local_98);
    plVar4 = *(longlong **)(param_1 + 0x750);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x2b0))(plVar4,uVar7,1,0);
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_38 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
    plVar4 = plStack_90;
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_90 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_90)(plStack_90);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1415774c0 FUN_1415774c0 body=233 status=ok
// SIG undefined FUN_1415774c0(void)

void FUN_1415774c0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x730);
  if (cVar5 != '\0') {
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    plVar6 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x730);
    lVar4 = *plVar6;
    uVar7 = FText::AsNumber(local_28,*(undefined4 *)(param_1 + 0x870),0,&local_38);
    (**(code **)(lVar4 + 0x2b0))(plVar6,uVar7,1,0);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_20 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    plVar6 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_30 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1415775b0 FUN_1415775b0 body=617 status=ok
// SIG undefined FUN_1415775b0(void)

void FUN_1415775b0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  
  if (*(char *)(param_1 + 0x38) == '\x01') {
    lVar6 = param_1 + 0x7c;
    *(undefined1 *)(param_1 + 0x38) = 2;
    cVar2 = FWeakObjectPtr::IsValid(lVar6);
    if (cVar2 != '\0') {
      cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x5c);
      if (cVar2 != '\0') {
        lVar4 = FWeakObjectPtr::Get(lVar6);
        uVar11 = 0;
        uVar9 = uVar11;
        uVar13 = uVar11;
        if (0 < *(int *)(lVar4 + 0xc0)) {
          do {
            lVar1 = *(longlong *)(lVar4 + 0xb8);
            iVar12 = (int)uVar9;
            uVar9 = uVar11;
            uVar10 = uVar11;
            if (0 < *(int *)(uVar13 + 8 + lVar1)) {
              do {
                iVar8 = (int)uVar9;
                if (0.0 < *(float *)(uVar10 + *(longlong *)(uVar13 + lVar1))) {
                  lVar5 = FWeakObjectPtr::Get(param_1 + 0x5c);
                  lVar5 = *(longlong *)(lVar5 + 0x180);
                  if ((lVar5 != 0) && (-1 < iVar12)) {
                    if ((iVar12 < *(int *)(lVar5 + 400)) && (-1 < iVar8)) {
                      if ((*(int *)(*(longlong *)(lVar5 + 0x188) + 8 + (longlong)iVar12 * 0x10) <=
                           iVar8) ||
                         (lVar7 = *(longlong *)
                                   (*(longlong *)
                                     (*(longlong *)(lVar5 + 0x188) + (longlong)iVar12 * 0x10) +
                                   (longlong)iVar8 * 8), lVar7 == 0)) goto LAB_1415776d6;
LAB_14157770a:
                      if (*(char *)(lVar7 + 0x1bb) == '\0') {
                        *(undefined1 *)(lVar7 + 0x1bb) = 1;
                        FUN_141576560();
                      }
                    }
                    else {
LAB_1415776d6:
                      if ((-1 < iVar12) && ((iVar12 < *(int *)(lVar5 + 0x1a0) && (-1 < iVar8)))) {
                        if ((iVar8 < *(int *)(*(longlong *)(lVar5 + 0x198) + 8 +
                                             (longlong)iVar12 * 0x10)) &&
                           (lVar7 = *(longlong *)
                                     (*(longlong *)
                                       (*(longlong *)(lVar5 + 0x198) + (longlong)iVar12 * 0x10) +
                                     (longlong)iVar8 * 8), lVar7 != 0)) goto LAB_14157770a;
                      }
                    }
                  }
                }
                uVar9 = (ulonglong)(iVar8 + 1U);
                uVar10 = uVar10 + 4;
              } while ((int)(iVar8 + 1U) < *(int *)(uVar13 + 8 + lVar1));
            }
            uVar9 = (ulonglong)(iVar12 + 1U);
            uVar13 = uVar13 + 0x10;
          } while ((int)(iVar12 + 1U) < *(int *)(lVar4 + 0xc0));
        }
        lVar6 = FWeakObjectPtr::Get(lVar6);
        uVar9 = uVar11;
        if (0 < *(int *)(lVar6 + 0xd0)) {
          do {
            if (*(char *)(uVar11 + *(longlong *)(lVar6 + 200)) != '\0') {
              iVar12 = *(int *)(param_1 + 0x138);
              *(int *)(param_1 + 0x138) = iVar12 + 1;
              if (*(int *)(param_1 + 0x13c) < iVar12 + 1) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x130,iVar12);
              }
              *(int *)(*(longlong *)(param_1 + 0x130) + (longlong)iVar12 * 4) = (int)uVar9;
            }
            uVar14 = (int)uVar9 + 1;
            uVar11 = uVar11 + 1;
            uVar9 = (ulonglong)uVar14;
          } while ((int)uVar14 < *(int *)(lVar6 + 0xd0));
        }
        uVar3 = 0xd;
        if (*(int *)(param_1 + 0x138) == 0) {
          uVar3 = 0xf;
        }
        *(undefined1 *)(param_1 + 0x38) = uVar3;
        return;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x15a) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0x11;
  return;
}



// FUNCTION 141577820 FUN_141577820 body=312 status=ok
// SIG undefined FUN_141577820(void)

void FUN_141577820(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  int local_res8;
  int iStackX_c;
  undefined1 local_res10 [8];
  
  lVar4 = thunk_FUN_142039c70();
  lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar6 = 0;
  if (lVar5 != 0) {
    lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar6 = *(longlong *)(lVar6 + 400);
  }
  if (((lVar4 != 0) && (DAT_146b17150 != 0)) && (lVar6 != 0)) {
    fVar10 = (float)FUN_14203ca10(lVar4);
    local_res8 = 0;
    iStackX_c = 0;
    lVar6 = thunk_FUN_142039c70();
    iVar9 = 0;
    iVar8 = 0;
    if (lVar6 != 0) {
      cVar2 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
        LOCK();
        lVar4 = *(longlong *)(lVar6 + 0x1a0);
        if (lVar4 == 0) {
          *(longlong *)(lVar6 + 0x1a0) = 0;
          lVar4 = 0;
        }
        UNLOCK();
        iVar9 = (int)lVar4;
        iVar8 = (int)((ulonglong)lVar4 >> 0x20);
      }
      else {
        plVar1 = *(longlong **)(lVar6 + 0x198);
        if (plVar1 != (longlong *)0x0) {
          piVar7 = (int *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res10);
          local_res8 = *piVar7;
          iStackX_c = piVar7[1];
        }
        LOCK();
        *(ulonglong *)(lVar6 + 0x1a0) = CONCAT44(iStackX_c,local_res8);
        UNLOCK();
        iVar9 = local_res8;
        iVar8 = iStackX_c;
      }
    }
    (**(code **)(*param_1 + 0x2c8))(param_1,CONCAT44((float)iVar8 * fVar10,(float)iVar9 * fVar10));
  }
  return;
}



// FUNCTION 141577960 FUN_141577960 body=2346 status=ok
// SIG undefined FUN_141577960(void)

void FUN_141577960(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  float fVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  byte bVar9;
  bool bVar10;
  float fVar11;
  longlong local_1c8 [15];
  longlong *plStack_150;
  undefined8 local_148;
  longlong *plStack_140;
  undefined8 local_138;
  longlong *plStack_130;
  undefined8 local_128;
  longlong *plStack_120;
  undefined8 local_118;
  longlong *plStack_110;
  undefined8 local_108;
  longlong *plStack_100;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x7c);
  if (cVar5 == '\0') {
    return;
  }
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x8c);
  if (cVar5 == '\0') {
    return;
  }
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x94);
  if (cVar5 == '\0') {
    return;
  }
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x9c);
  if (cVar5 == '\0') {
    return;
  }
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0xa4);
  if (cVar5 == '\0') {
    return;
  }
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0xac);
  if (cVar5 == '\0') {
    return;
  }
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0xb4);
  if (cVar5 == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x158) == '\0') {
    lVar8 = FWeakObjectPtr::Get(param_1 + 0x7c);
    fVar11 = (float)((int)ROUND((*(float *)(lVar8 + 0xb0) + *(float *)(lVar8 + 0xb0)) - 0.5) >> 1);
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x7c);
    cVar5 = FUN_141564220(uVar6);
    fVar4 = *(float *)(param_1 + 0x150);
    if (fVar4 < *(float *)(param_1 + 0x154) || fVar4 == *(float *)(param_1 + 0x154)) {
      if (cVar5 == '\0') {
        if (*(char *)(param_1 + 0x159) == '\0') {
          local_1c8[0xc] = 0;
          local_1c8[0xd] = 4;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1c8 + 0xc,0);
          FGenericPlatformString::Memcpy(local_1c8[0xc],&DAT_144c7d4e0,8);
          uVar6 = FText::FromString(local_80,local_1c8 + 0xc);
          bVar9 = 0xc0;
        }
        else {
          local_118 = 0;
          plStack_110 = (longlong *)0x0;
          uVar6 = FText::AsNumber(local_68);
          bVar9 = 0x30;
        }
        plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xb4);
        (**(code **)(*plVar7 + 0x2b0))(plVar7,uVar6,1,0);
        if (((char)bVar9 < '\0') && (bVar9 = bVar9 & 0x7f, local_78 != (longlong *)0x0)) {
          LOCK();
          plVar7 = local_78 + 1;
          lVar8 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_78)(local_78);
            LOCK();
            piVar1 = (int *)((longlong)local_78 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_78 + 8))(local_78,1);
            }
          }
        }
        if (((bVar9 & 0x40) != 0) && (bVar9 = bVar9 & 0xbf, local_1c8[0xc] != 0)) {
          FMemory::Free();
        }
        if (((bVar9 & 0x20) != 0) && (bVar9 = bVar9 & 0xdf, local_60 != (longlong *)0x0)) {
          LOCK();
          plVar7 = local_60 + 1;
          lVar8 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar1 = (int *)((longlong)local_60 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_60 + 8))(local_60,1);
            }
          }
        }
        plVar7 = plStack_110;
        if ((bVar9 & 0x10) == 0) goto LAB_14157819f;
      }
      else {
        if (((*(char *)(param_1 + 0x159) != '\0') && (1e-08 < ABS(fVar4 - fVar11))) &&
           (fVar4 <= fVar11)) goto LAB_14157819f;
        local_128 = 0;
        plStack_120 = (longlong *)0x0;
        plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xb4);
        lVar8 = *plVar7;
        uVar6 = FText::AsNumber(local_98);
        (**(code **)(lVar8 + 0x2b0))(plVar7,uVar6,1,0);
        plVar7 = plStack_120;
        if (local_90 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_90 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_90)(local_90);
            LOCK();
            piVar1 = (int *)((longlong)local_90 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar7 = plStack_120;
            if (iVar3 == 1) {
              (**(code **)(*local_90 + 8))(local_90,1);
              plVar7 = plStack_120;
            }
          }
        }
      }
    }
    else {
      local_1c8[8] = 0;
      local_1c8[9] = 3;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1c8 + 8,0);
      FGenericPlatformString::Memcpy(local_1c8[8],&DAT_144c7d4d0,6);
      uVar6 = FWeakObjectPtr::Get(param_1 + 0x9c);
      FUN_142088910(uVar6,local_1c8 + 8);
      if (local_1c8[8] != 0) {
        FMemory::Free();
      }
      if ((cVar5 == '\0') ||
         (((*(char *)(param_1 + 0x159) != '\0' &&
           (1e-08 < ABS(*(float *)(param_1 + 0x150) - fVar11))) &&
          (*(float *)(param_1 + 0x150) <= fVar11)))) goto LAB_14157819f;
      local_1c8[0xb] = 3;
      local_1c8[10] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1c8 + 10,0);
      FGenericPlatformString::Memcpy(local_1c8[10],&DAT_144c7d4d8,6);
      uVar6 = FWeakObjectPtr::Get(param_1 + 0xac);
      FUN_142088910(uVar6,local_1c8 + 10);
      if (local_1c8[10] != 0) {
        FMemory::Free();
      }
      local_138 = 0;
      plStack_130 = (longlong *)0x0;
      plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xb4);
      lVar8 = *plVar7;
      uVar6 = FText::AsNumber(local_b0);
      (**(code **)(lVar8 + 0x2b0))(plVar7,uVar6,1,0);
      plVar7 = plStack_130;
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_a8 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_a8)(local_a8);
          LOCK();
          piVar1 = (int *)((longlong)local_a8 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar7 = plStack_130;
          if (iVar3 == 1) {
            (**(code **)(*local_a8 + 8))(local_a8,1);
            plVar7 = plStack_130;
          }
        }
      }
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
  }
  else {
    local_1c8[0] = 0;
    local_1c8[1] = 3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1c8,0);
    FGenericPlatformString::Memcpy(local_1c8[0],&DAT_144c7d3d4,6);
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x9c);
    FUN_142088910(uVar6,local_1c8);
    if (local_1c8[0] != 0) {
      FMemory::Free();
    }
    local_1c8[3] = 3;
    local_1c8[2] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1c8 + 2,0);
    FGenericPlatformString::Memcpy(local_1c8[2],&DAT_144c7d4b4,6);
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x8c);
    FUN_142088910(uVar6,local_1c8 + 2);
    if (local_1c8[2] != 0) {
      FMemory::Free();
    }
    local_1c8[0xe] = 0;
    plStack_150 = (longlong *)0x0;
    plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x94);
    FWeakObjectPtr::Get(param_1 + 0x7c);
    lVar8 = *plVar7;
    uVar6 = FText::AsNumber(local_f8);
    (**(code **)(lVar8 + 0x2b0))(plVar7,uVar6,1,0);
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_f0 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar1 = (int *)((longlong)local_f0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
    plVar7 = plStack_150;
    if (plStack_150 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_150 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_150)(plStack_150);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    local_1c8[5] = 3;
    local_1c8[4] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1c8 + 4,0);
    FGenericPlatformString::Memcpy(local_1c8[4],&DAT_144c7d4bc,6);
    uVar6 = FWeakObjectPtr::Get(param_1 + 0xac);
    FUN_142088910(uVar6,local_1c8 + 4);
    if (local_1c8[4] != 0) {
      FMemory::Free();
    }
    bVar10 = *(char *)(param_1 + 0x159) == '\0';
    if (bVar10) {
      local_1c8[6] = 0;
      local_1c8[7] = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1c8 + 6,0);
      FGenericPlatformString::Memcpy(local_1c8[6],&DAT_144c7d4c8,8);
      uVar6 = FText::FromString(local_e0,local_1c8 + 6);
    }
    else {
      local_148 = 0;
      plStack_140 = (longlong *)0x0;
      FWeakObjectPtr::Get(param_1 + 0x7c);
      uVar6 = FText::AsNumber(local_c8);
    }
    plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xb4);
    (**(code **)(*plVar7 + 0x2b0))(plVar7,uVar6,1,0);
    if ((bVar10) && (local_d8 != (longlong *)0x0)) {
      LOCK();
      plVar7 = local_d8 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar1 = (int *)((longlong)local_d8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_d8 + 8))(local_d8,1);
        }
      }
    }
    if ((bVar10) && (local_1c8[6] != 0)) {
      FMemory::Free();
    }
    if ((!bVar10) && (local_c0 != (longlong *)0x0)) {
      LOCK();
      plVar7 = local_c0 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)local_c0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
    plVar7 = plStack_140;
    if ((!bVar10) && (plStack_140 != (longlong *)0x0)) {
      LOCK();
      plVar2 = plStack_140 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_140)(plStack_140);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x158) = 0;
  }
LAB_14157819f:
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xa4);
  lVar8 = *plVar7;
  uVar6 = FText::AsNumber(local_50);
  (**(code **)(lVar8 + 0x2b0))(plVar7,uVar6,1,0);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_48 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  plVar7 = plStack_100;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_100 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return;
}



// FUNCTION 141578290 FUN_141578290 body=521 status=ok
// SIG undefined FUN_141578290(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141578290(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_e0;
  code *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x68);
  if (cVar1 == '\0') {
    if (((*(int *)(param_1 + 0x30) != 0) && (*(longlong **)(param_1 + 0x28) != (longlong *)0x0)) &&
       (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))(), cVar1 != '\0')) {
      if (*(int *)(param_1 + 0x30) == 0) {
        (**(code **)(_DAT_00000000 + 0x40))(0,0);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x40))(*(longlong **)(param_1 + 0x28),0);
      }
    }
  }
  else {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x68);
    lVar3 = (**(code **)(*plVar2 + 0x148))(plVar2);
    if (lVar3 == 0) {
      TBaseDelegate<void,enum_ECheckBoxState>::ExecuteIfBound(param_1 + 0x28,0);
    }
    else {
      local_a8 = (longlong *)0x0;
      local_98 = 0;
      puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_c8);
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = param_1;
        *puVar4 = &PTR_FUN_143f77b70;
      }
      local_d8[0] = FUN_141558ac0;
      if (*(longlong *)(lVar3 + 400) == 0) {
        uVar5 = *(undefined8 *)(lVar3 + 0x3f8);
      }
      else {
        uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
      }
      local_88 = 0;
      local_80 = 0;
      FWeakObjectPtr::operator=(local_78,0);
      local_70 = 0;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_68,local_d8);
      local_e0 = 0x3f800000;
      local_e8 = 0;
      FUN_142880850(uVar5,param_1 + 0xd0,&local_88);
      if (local_28 != 0) {
        plVar2 = local_58;
        if (local_38 != (longlong *)0x0) {
          plVar2 = local_38;
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,0);
        }
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
      if (local_98 != 0) {
        plVar2 = local_c8;
        if (local_a8 != (longlong *)0x0) {
          plVar2 = local_a8;
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,0);
        }
      }
      if (local_a8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1415784a0 FUN_1415784a0 body=521 status=ok
// SIG undefined FUN_1415784a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415784a0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_e0;
  code *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x68);
  if (cVar1 == '\0') {
    if (((*(int *)(param_1 + 0x40) != 0) && (*(longlong **)(param_1 + 0x38) != (longlong *)0x0)) &&
       (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))(), cVar1 != '\0')) {
      if (*(int *)(param_1 + 0x40) == 0) {
        (**(code **)(_DAT_00000000 + 0x40))(0,0);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x40))(*(longlong **)(param_1 + 0x38),0);
      }
    }
  }
  else {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x68);
    lVar3 = (**(code **)(*plVar2 + 0x148))(plVar2);
    if (lVar3 == 0) {
      TBaseDelegate<void,enum_ECheckBoxState>::ExecuteIfBound(param_1 + 0x38,0);
    }
    else {
      local_a8 = (longlong *)0x0;
      local_98 = 0;
      puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_c8);
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = param_1;
        *puVar4 = &PTR_FUN_143f77b70;
      }
      local_d8[0] = FUN_1415589a0;
      if (*(longlong *)(lVar3 + 400) == 0) {
        uVar5 = *(undefined8 *)(lVar3 + 0x3f8);
      }
      else {
        uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
      }
      local_88 = 0;
      local_80 = 0;
      FWeakObjectPtr::operator=(local_78,0);
      local_70 = 0;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_68,local_d8);
      local_e0 = 0x3f800000;
      local_e8 = 0;
      FUN_142880850(uVar5,param_1 + 0xd0,&local_88);
      if (local_28 != 0) {
        plVar2 = local_58;
        if (local_38 != (longlong *)0x0) {
          plVar2 = local_38;
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,0);
        }
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
      if (local_98 != 0) {
        plVar2 = local_c8;
        if (local_a8 != (longlong *)0x0) {
          plVar2 = local_a8;
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,0);
        }
      }
      if (local_a8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1415786b0 FUN_1415786b0 body=695 status=ok
// SIG undefined FUN_1415786b0(void)

void FUN_1415786b0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  if (*(char *)(param_1 + 0x38) == '\t') {
    *(undefined1 *)(param_1 + 0x38) = 10;
    cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x7c);
    if ((cVar5 != '\0') && (cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x5c), cVar5 != '\0')) {
      lVar8 = FWeakObjectPtr::Get(param_1 + 0x7c);
      lVar9 = FWeakObjectPtr::Get(param_1 + 0x7c);
      iVar13 = *(int *)(param_1 + 0x140);
      if ((-1 < iVar13) && (iVar13 < *(int *)(lVar8 + 0xc0))) {
        plVar17 = (longlong *)((longlong)iVar13 * 0x10 + *(longlong *)(lVar8 + 0xb8));
        uVar10 = FWeakObjectPtr::Get(param_1 + 0x5c);
        plVar11 = (longlong *)FUN_14155d710(uVar10);
        uVar14 = (ulonglong)*(int *)(param_1 + 0x144);
        lVar8 = plVar11[1];
        uVar15 = uVar14;
        do {
          if ((longlong)(int)lVar8 <= (longlong)uVar14) {
            uVar6 = 0xb;
            if (*(int *)(param_1 + 0x138) == 0) {
              uVar6 = 0xf;
            }
            *(undefined1 *)(param_1 + 0x38) = uVar6;
            return;
          }
          lVar2 = *(longlong *)(*plVar11 + uVar14 * 8);
          iVar13 = (int)uVar15;
          if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x1d0) & 0x10) == 0)) {
            if ((iVar13 < 0) ||
               ((*(int *)(param_1 + 0x128) <= iVar13 ||
                (*(char *)(*(longlong *)(param_1 + 0x120) + uVar14) == '\0')))) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (((iVar13 < 0) || (*(int *)(lVar9 + 0xd0) <= iVar13)) ||
               (*(char *)(*(longlong *)(lVar9 + 200) + uVar14) == '\0')) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              if ((!bVar4) || (*(char *)(lVar2 + 0x1bb) == '\0')) {
                iVar1 = *(int *)(param_1 + 0x138);
                iVar7 = iVar1 + 1;
                *(int *)(param_1 + 0x138) = iVar7;
                if (*(int *)(param_1 + 0x13c) < iVar7) {
                  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x130);
                }
                *(int *)(*(longlong *)(param_1 + 0x130) + (longlong)iVar1 * 4) = iVar13;
              }
            }
            else if (((iVar13 < 0) || ((int)plVar17[1] <= iVar13)) ||
                    (*(float *)(*plVar17 + uVar14 * 4) <= 0.0)) {
              if (*(char *)(lVar2 + 0x1bb) != '\0') {
                *(undefined1 *)(lVar2 + 0x1bb) = 0;
                FUN_141576560();
              }
              cVar5 = FWeakObjectPtr::IsValid(param_1 + 0xec);
              if (cVar5 != '\0') {
                plVar12 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xec);
                puVar16 = &local_48;
                local_48 = 0;
                local_40 = 0;
                uVar10 = DAT_1468a68b8;
                goto LAB_1415788ef;
              }
            }
            else {
              if (*(char *)(lVar2 + 0x1bb) == '\0') {
                *(undefined1 *)(lVar2 + 0x1bb) = 1;
                FUN_141576560();
              }
              cVar5 = FWeakObjectPtr::IsValid(param_1 + 0xec);
              if (cVar5 != '\0') {
                plVar12 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xec);
                puVar16 = &local_58;
                local_58 = 0;
                local_50 = 0;
                uVar10 = DAT_1468a68b0;
LAB_1415788ef:
                (**(code **)(*plVar12 + 0x4e8))(plVar12,uVar10,puVar16);
              }
            }
          }
          uVar15 = (ulonglong)(iVar13 + 1);
          uVar14 = uVar14 + 1;
        } while( true );
      }
    }
  }
  *(undefined1 *)(param_1 + 0x15a) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0x11;
  return;
}



// FUNCTION 141578970 FUN_141578970 body=919 status=ok
// SIG undefined FUN_141578970(void)

void FUN_141578970(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 local_res10;
  
  iVar5 = *param_2;
  if ((iVar5 < 0) || (*(int *)(param_1 + 400) <= iVar5)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    iVar1 = param_2[1];
    if ((iVar1 < 0) ||
       (*(int *)((longlong)iVar5 * 0x10 + 8 + *(longlong *)(param_1 + 0x188)) <= iVar1)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) &&
       (lVar2 = *(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar5 * 0x10) +
                 (longlong)iVar1 * 8), lVar2 != 0)) {
      lVar6 = FUN_141582720();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        uVar10 = 0;
        if ((*(int *)(lVar2 + 0x178) != 0) &&
           (plVar3 = *(longlong **)(lVar2 + 0x170), plVar3 != (longlong *)0x0)) {
          (**(code **)(*plVar3 + 0x28))(plVar3,0);
          if (*(longlong *)(lVar2 + 0x170) != 0) {
            uVar7 = FMemory::Realloc(*(longlong *)(lVar2 + 0x170),0,0);
            *(undefined8 *)(lVar2 + 0x170) = uVar7;
          }
          *(undefined4 *)(lVar2 + 0x178) = 0;
        }
        if ((*(int *)(lVar2 + 0x188) != 0) &&
           (plVar3 = *(longlong **)(lVar2 + 0x180), plVar3 != (longlong *)0x0)) {
          (**(code **)(*plVar3 + 0x28))(plVar3,0);
          if (*(longlong *)(lVar2 + 0x180) != 0) {
            uVar7 = FMemory::Realloc(*(longlong *)(lVar2 + 0x180),0,0);
            *(undefined8 *)(lVar2 + 0x180) = uVar7;
          }
          *(undefined4 *)(lVar2 + 0x188) = 0;
        }
        FUN_14155a500(lVar2,0);
        *(undefined1 *)(lVar2 + 0x1ba) = 0;
        uVar11 = uVar10;
        if (0 < *(int *)(param_1 + 0x1d0)) {
          do {
            FUN_14157aa00(lVar2,0,uVar10);
            iVar5 = *(int *)(uVar11 + *(longlong *)(param_1 + 0x1c8));
            lVar6 = uVar11 + *(longlong *)(param_1 + 0x1c8);
            if ((iVar5 == *(int *)(lVar2 + 0x1c0)) &&
               (*(int *)(lVar6 + 4) == *(int *)(lVar2 + 0x1c4))) {
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            if (bVar4) {
              local_res10._0_4_ = (int)*(undefined8 *)(lVar2 + 0x1c0);
              lVar6 = (longlong)(int)local_res10;
              iVar5 = (int)((ulonglong)*(undefined8 *)(lVar2 + 0x1c0) >> 0x20) + 1;
              local_res10 = CONCAT44(iVar5,(int)local_res10);
              if (((int)local_res10 < 0) || (*(int *)(param_1 + 400) <= (int)local_res10)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (bVar4) {
                if ((iVar5 < 0) ||
                   (*(int *)(*(longlong *)(param_1 + 0x188) + 8 + lVar6 * 0x10) <= iVar5)) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                if ((!bVar4) ||
                   (lVar8 = *(longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x188) + lVar6 * 0x10) +
                             (longlong)iVar5 * 8), lVar8 == 0)) goto LAB_141578b81;
LAB_141578be7:
                FUN_14157aa00(lVar8,CONCAT71((int7)(int3)((uint)iVar5 >> 8),1),uVar10);
              }
              else {
LAB_141578b81:
                if (((int)local_res10 < 0) || (*(int *)(param_1 + 0x1a0) <= (int)local_res10)) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                if (bVar4) {
                  if ((iVar5 < 0) ||
                     (*(int *)(*(longlong *)(param_1 + 0x198) + 8 + lVar6 * 0x10) <= iVar5)) {
                    bVar4 = false;
                  }
                  else {
                    bVar4 = true;
                  }
                  if ((bVar4) &&
                     (lVar8 = *(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x198) + lVar6 * 0x10) +
                               (longlong)iVar5 * 8), lVar8 != 0)) goto LAB_141578be7;
                }
              }
            }
            else if (*(char *)(lVar6 + 8) != '\0') {
              if ((iVar5 < 0) || (*(int *)(param_1 + 400) <= iVar5)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (bVar4) {
                iVar1 = *(int *)(lVar6 + 4);
                if ((iVar1 < 0) ||
                   (*(int *)((longlong)iVar5 * 0x10 + 8 + *(longlong *)(param_1 + 0x188)) <= iVar1))
                {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                if ((((bVar4) &&
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar5 * 0x10) +
                       (longlong)iVar1 * 8) != 0)) && (iVar5 == *(int *)(lVar2 + 0x1c0))) &&
                   (*(int *)(lVar2 + 0x1c4) < iVar1)) {
                  *(int *)(lVar6 + 4) = iVar1 + -1;
                }
              }
            }
            uVar9 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar9;
            *(undefined1 *)(uVar11 + 8 + *(longlong *)(param_1 + 0x1c8)) = 0;
            uVar11 = uVar11 + 0xc;
          } while ((int)uVar9 < *(int *)(param_1 + 0x1d0));
        }
        iVar5 = *(int *)(lVar2 + 0x1c0);
        if ((iVar5 < 0) || (*(int *)(param_1 + 400) <= iVar5)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          local_res10 = lVar2;
          TArray<FName,FDefaultAllocator>::Remove
                    ((longlong)iVar5 * 0x10 + *(longlong *)(param_1 + 0x188),&local_res10);
        }
        if (*(longlong *)(param_1 + 0x1b0) == 0) {
          *(longlong *)(param_1 + 0x1b0) = lVar2;
          FUN_142ee17b0(param_1,lVar2);
          (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x278))(*(longlong **)(param_1 + 0x1b0),0)
          ;
        }
      }
    }
  }
  return;
}



// FUNCTION 141578d10 FUN_141578d10 body=849 status=ok
// SIG undefined FUN_141578d10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141578d10(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  undefined1 local_150;
  longlong **local_148;
  ulonglong local_138;
  longlong *local_130;
  undefined4 local_128;
  longlong *local_120;
  undefined8 local_118;
  ulonglong local_110;
  longlong *local_108;
  ulonglong local_100;
  longlong *plStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_d8 [128];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  uVar12 = 0;
  local_128 = 0;
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    return;
  }
  if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_141578dc8:
    puVar8 = &local_100;
    local_100 = 0;
    plStack_f8 = (longlong *)0x0;
    bVar5 = false;
    bVar4 = true;
    local_110 = uVar12;
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar11 = *piVar1;
    if (iVar11 == 0) {
      *piVar1 = 0;
      iVar11 = 0;
    }
    UNLOCK();
    if (iVar11 < 1) goto LAB_141578dc8;
    local_130 = *(longlong **)(param_1 + 0x30);
    bVar5 = true;
    bVar4 = false;
    local_138 = 0;
    if (local_130 != (longlong *)0x0) {
      LOCK();
      uVar2 = *(uint *)(local_130 + 1);
      bVar13 = uVar2 == 0;
      if (bVar13) {
        *(uint *)(local_130 + 1) = 0;
        uVar6 = uVar12;
      }
      else {
        uVar6 = (ulonglong)uVar2;
      }
      UNLOCK();
      while (!bVar13) {
        iVar11 = (int)uVar6;
        LOCK();
        bVar13 = iVar11 == (int)local_130[1];
        if (bVar13) {
          *(int *)(local_130 + 1) = iVar11 + 1;
        }
        UNLOCK();
        if (bVar13) {
          local_138 = *(ulonglong *)(param_1 + 0x28);
          puVar8 = &local_138;
          local_110 = local_138;
          goto LAB_141578dde;
        }
        uVar6 = 0;
        LOCK();
        uVar2 = *(uint *)(local_130 + 1);
        bVar13 = uVar2 == 0;
        if (bVar13) {
          *(uint *)(local_130 + 1) = 0;
        }
        else {
          uVar6 = (ulonglong)uVar2;
        }
        UNLOCK();
      }
      local_130 = (longlong *)0x0;
    }
    puVar8 = &local_138;
    local_110 = 0;
  }
LAB_141578dde:
  plVar3 = (longlong *)puVar8[1];
  puVar8[1] = 0;
  plVar10 = plStack_f8;
  local_108 = plVar3;
  *puVar8 = 0;
  if ((bVar4) && (plStack_f8 != (longlong *)0x0)) {
    LOCK();
    plVar3 = plStack_f8 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_f8)(plStack_f8);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plStack_f8 + 8))(plStack_f8,1);
      }
    }
  }
  plVar3 = local_130;
  if ((bVar5) && (local_130 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_130 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_130)(local_130);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_130 + 8))(local_130,1);
      }
    }
  }
  uVar6 = local_110;
  if (local_110 == 0) goto LAB_141578fea;
  puVar9 = &DAT_143f3eda8;
  if (DAT_1464a1458 != 0) {
    puVar9 = DAT_1464a1450;
  }
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  TStringConversion<TStringConvert<wchar_t,char>,128>(local_d8,puVar9);
  local_f0 = UPlatformGameInstance::StaticClass();
  local_e8 = *(undefined8 *)(uVar6 + 0x78);
  plVar3 = *(longlong **)(uVar6 + 0x80);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_148 = &local_120;
  local_120 = (longlong *)0x0;
  local_150 = 6;
  local_158 = &DAT_1464a1440;
  local_118 = 0;
  uVar6 = FUN_14202a0e0(local_e8,local_f0,param_1,local_50);
  if (uVar6 == 0) {
LAB_141578f5d:
    uVar6 = uVar12;
  }
  else {
    lVar7 = UPlatformGameInstance::StaticClass();
    if ((*(int *)(*(longlong *)(uVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_141578f5d;
  }
  plVar10 = local_120;
  for (iVar11 = (int)local_118; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_120 != (longlong *)0x0) {
    FMemory::Free(local_120);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar3 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  *(ulonglong *)(param_1 + 0x1b0) = uVar6;
  if (local_58 != 0) {
    FMemory::Free();
  }
LAB_141578fea:
  plVar3 = local_108;
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_108 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_108 + 8))(local_108,1);
      }
    }
  }
  return;
}



// FUNCTION 141579070 FUN_141579070 body=1851 status=ok
// SIG undefined FUN_141579070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141579070(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_3d8 [32];
  undefined8 *local_3b8;
  undefined1 local_3b0;
  longlong **local_3a8;
  longlong local_398;
  longlong *local_390;
  longlong local_388;
  longlong *local_380;
  undefined4 local_378;
  longlong *local_370;
  undefined8 local_368;
  longlong *local_360;
  undefined8 local_358;
  longlong *local_350;
  undefined8 local_348;
  longlong *local_340;
  undefined8 local_338;
  longlong local_330;
  longlong *plStack_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f0;
  undefined8 local_2e0;
  undefined8 local_2d0;
  undefined1 local_2b8 [128];
  longlong local_238;
  undefined8 local_230;
  undefined1 local_218 [128];
  longlong local_198;
  undefined8 local_190;
  undefined1 local_178 [128];
  longlong local_f8;
  undefined8 local_f0;
  undefined1 local_d8 [128];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_3d8;
  lVar12 = 0;
  local_378 = 0;
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    return;
  }
  if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_141579135:
    plVar8 = &local_330;
    local_330 = 0;
    plStack_328 = (longlong *)0x0;
    bVar3 = false;
    bVar2 = true;
    lVar6 = lVar12;
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar11 = *piVar1;
    if (iVar11 == 0) {
      *piVar1 = 0;
      iVar11 = 0;
    }
    UNLOCK();
    if (iVar11 < 1) goto LAB_141579135;
    local_390 = *(longlong **)(param_1 + 0x30);
    bVar3 = true;
    bVar2 = false;
    local_398 = 0;
    if (local_390 != (longlong *)0x0) {
      LOCK();
      iVar11 = (int)local_390[1];
      bVar13 = iVar11 == 0;
      if (bVar13) {
        *(int *)(local_390 + 1) = 0;
        iVar11 = 0;
      }
      UNLOCK();
      while (!bVar13) {
        LOCK();
        bVar13 = iVar11 == (int)local_390[1];
        if (bVar13) {
          *(int *)(local_390 + 1) = iVar11 + 1;
        }
        UNLOCK();
        if (bVar13) {
          local_398 = *(longlong *)(param_1 + 0x28);
          plVar8 = &local_398;
          lVar6 = local_398;
          goto LAB_141579149;
        }
        LOCK();
        iVar11 = (int)local_390[1];
        bVar13 = iVar11 == 0;
        if (bVar13) {
          *(int *)(local_390 + 1) = 0;
          iVar11 = 0;
        }
        UNLOCK();
      }
      local_390 = (longlong *)0x0;
    }
    plVar8 = &local_398;
    lVar6 = 0;
  }
LAB_141579149:
  plVar10 = (longlong *)plVar8[1];
  plVar8[1] = 0;
  plVar4 = plStack_328;
  local_380 = plVar10;
  *plVar8 = 0;
  local_388 = lVar6;
  if ((bVar2) && (plStack_328 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plStack_328 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_328)(plStack_328);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plStack_328 + 8))(plStack_328,1);
      }
    }
  }
  plVar8 = local_390;
  if ((bVar3) && (local_390 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_390 + 1;
    lVar6 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_390)(local_390);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_390 + 8))(local_390,1);
      }
    }
  }
  lVar6 = local_388;
  if (local_388 == 0) goto LAB_141579739;
  cVar5 = FUN_14155cda0(*(undefined1 *)(param_1 + 0x1d0));
  if (cVar5 == '\0') {
    puVar9 = &DAT_143f3eda8;
    if (DAT_1464a1468 != 0) {
      puVar9 = DAT_1464a1460;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_d8,puVar9);
    local_308 = UPlatformGameInstance::StaticClass();
    plVar8 = *(longlong **)(lVar6 + 0x80);
    local_2d0 = *(undefined8 *)(lVar6 + 0x78);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_3a8 = &local_340;
    local_340 = (longlong *)0x0;
    local_3b0 = 6;
    local_3b8 = &DAT_1464a1440;
    local_338 = 0;
    lVar6 = FUN_14202a0e0(local_2d0,local_308,param_1,local_50);
    if (lVar6 == 0) {
LAB_1415796a7:
      lVar6 = lVar12;
    }
    else {
      lVar7 = UPlatformGameInstance::StaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1415796a7;
    }
    plVar10 = local_340;
    for (iVar11 = (int)local_338; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_340 != (longlong *)0x0) {
      FMemory::Free(local_340);
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar8 + 1;
      lVar12 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
  else if (cVar5 == '\x01') {
    puVar9 = &DAT_143f3eda8;
    if (DAT_1464a1478 != 0) {
      puVar9 = DAT_1464a1470;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_178,puVar9);
    local_310 = UPlatformGameInstance::StaticClass();
    plVar8 = *(longlong **)(lVar6 + 0x80);
    local_2e0 = *(undefined8 *)(lVar6 + 0x78);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_3a8 = &local_350;
    local_350 = (longlong *)0x0;
    local_3b0 = 6;
    local_3b8 = &DAT_1464a1440;
    local_348 = 0;
    lVar6 = FUN_14202a0e0(local_2e0,local_310,param_1,local_f0);
    if (lVar6 == 0) {
LAB_141579575:
      lVar6 = lVar12;
    }
    else {
      lVar7 = UPlatformGameInstance::StaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_141579575;
    }
    plVar10 = local_350;
    for (iVar11 = (int)local_348; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_350 != (longlong *)0x0) {
      FMemory::Free(local_350);
    }
    local_58 = local_f8;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar8 + 1;
      lVar12 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        local_58 = local_f8;
        if (iVar11 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
          local_58 = local_f8;
        }
      }
    }
  }
  else if (cVar5 == '\x02') {
    puVar9 = &DAT_143f3eda8;
    if (DAT_1464a1488 != 0) {
      puVar9 = DAT_1464a1480;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_218,puVar9);
    local_318 = UPlatformGameInstance::StaticClass();
    plVar8 = *(longlong **)(lVar6 + 0x80);
    local_2f0 = *(undefined8 *)(lVar6 + 0x78);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_3a8 = &local_360;
    local_360 = (longlong *)0x0;
    local_3b0 = 6;
    local_3b8 = &DAT_1464a1440;
    local_358 = 0;
    lVar6 = FUN_14202a0e0(local_2f0,local_318,param_1,local_190);
    if (lVar6 == 0) {
LAB_14157943a:
      lVar6 = lVar12;
    }
    else {
      lVar7 = UPlatformGameInstance::StaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_14157943a;
    }
    plVar10 = local_360;
    for (iVar11 = (int)local_358; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_360 != (longlong *)0x0) {
      FMemory::Free(local_360);
    }
    local_58 = local_198;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar8 + 1;
      lVar12 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        local_58 = local_198;
        if (iVar11 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
          local_58 = local_198;
        }
      }
    }
  }
  else {
    if (cVar5 != '\x03') goto LAB_141579739;
    puVar9 = &DAT_143f3eda8;
    if (DAT_1464a1498 != 0) {
      puVar9 = DAT_1464a1490;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_2b8,puVar9);
    local_320 = UPlatformGameInstance::StaticClass();
    plVar8 = *(longlong **)(lVar6 + 0x80);
    local_300 = *(undefined8 *)(lVar6 + 0x78);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_3a8 = &local_370;
    local_370 = (longlong *)0x0;
    local_3b0 = 6;
    local_3b8 = &DAT_1464a1440;
    local_368 = 0;
    lVar6 = FUN_14202a0e0(local_300,local_320,param_1,local_230);
    if (lVar6 == 0) {
LAB_141579303:
      lVar6 = lVar12;
    }
    else {
      lVar7 = UPlatformGameInstance::StaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_141579303;
    }
    plVar10 = local_370;
    for (iVar11 = (int)local_368; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_370 != (longlong *)0x0) {
      FMemory::Free(local_370);
    }
    local_58 = local_238;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar8 + 1;
      lVar12 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        local_58 = local_238;
        if (iVar11 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
          local_58 = local_238;
        }
      }
    }
  }
  *(longlong *)(param_1 + 0x1b0) = lVar6;
  if (local_58 != 0) {
    FMemory::Free();
  }
LAB_141579739:
  plVar8 = local_380;
  if (local_380 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_380 + 1;
    lVar12 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_380)(local_380);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_380 + 8))(local_380,1);
      }
    }
  }
  return;
}



// FUNCTION 1415797b0 FUN_1415797b0 body=1893 status=ok
// SIG undefined FUN_1415797b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1415797b0(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_478 [32];
  undefined8 *local_458;
  undefined1 local_450;
  longlong **local_448;
  longlong local_438;
  longlong *local_430;
  longlong local_428;
  longlong *local_420;
  undefined4 local_418;
  longlong *local_410;
  undefined8 local_408;
  longlong *local_400;
  undefined8 local_3f8;
  longlong *local_3f0;
  undefined8 local_3e8;
  longlong *local_3e0;
  undefined8 local_3d8;
  longlong local_3d0;
  longlong *plStack_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_390;
  undefined8 local_380;
  undefined8 local_370;
  undefined1 local_358 [128];
  longlong local_2d8;
  undefined8 local_2d0;
  undefined1 local_2b8 [128];
  longlong local_238;
  undefined8 local_230;
  undefined1 local_218 [128];
  longlong local_198;
  undefined8 local_190;
  undefined1 local_178 [128];
  longlong local_f8;
  undefined8 local_f0;
  undefined1 local_d8 [128];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_478;
  lVar12 = 0;
  local_418 = 0;
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    puVar9 = &DAT_143f3eda8;
    if (DAT_1464a1448 != 0) {
      puVar9 = DAT_1464a1440;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_358,puVar9);
    FUN_1420845c0(param_1,local_2d0);
    if (local_2d8 != 0) {
      FMemory::Free();
    }
  }
  if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_1415798b5:
    plVar8 = &local_3d0;
    local_3d0 = 0;
    plStack_3c8 = (longlong *)0x0;
    bVar3 = false;
    bVar2 = true;
    lVar6 = lVar12;
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar11 = *piVar1;
    if (iVar11 == 0) {
      *piVar1 = 0;
      iVar11 = 0;
    }
    UNLOCK();
    if (iVar11 < 1) goto LAB_1415798b5;
    local_430 = *(longlong **)(param_1 + 0x30);
    local_438 = 0;
    bVar3 = true;
    bVar2 = false;
    if (local_430 != (longlong *)0x0) {
      LOCK();
      iVar11 = (int)local_430[1];
      bVar13 = iVar11 == 0;
      if (bVar13) {
        *(int *)(local_430 + 1) = 0;
        iVar11 = 0;
      }
      UNLOCK();
      while (!bVar13) {
        LOCK();
        bVar13 = iVar11 == (int)local_430[1];
        if (bVar13) {
          *(int *)(local_430 + 1) = iVar11 + 1;
        }
        UNLOCK();
        if (bVar13) {
          local_438 = *(longlong *)(param_1 + 0x28);
          plVar8 = &local_438;
          lVar6 = local_438;
          goto LAB_1415798c9;
        }
        LOCK();
        iVar11 = (int)local_430[1];
        bVar13 = iVar11 == 0;
        if (bVar13) {
          *(int *)(local_430 + 1) = 0;
          iVar11 = 0;
        }
        UNLOCK();
      }
      local_430 = (longlong *)0x0;
    }
    plVar8 = &local_438;
    lVar6 = 0;
  }
LAB_1415798c9:
  plVar10 = (longlong *)plVar8[1];
  plVar8[1] = 0;
  plVar4 = plStack_3c8;
  local_420 = plVar10;
  *plVar8 = 0;
  local_428 = lVar6;
  if ((bVar2) && (plStack_3c8 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plStack_3c8 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_3c8)(plStack_3c8);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plStack_3c8 + 8))(plStack_3c8,1);
      }
    }
  }
  plVar8 = local_430;
  if ((bVar3) && (local_430 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_430 + 1;
    lVar6 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_430)(local_430);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_430 + 8))(local_430,1);
      }
    }
  }
  lVar6 = local_428;
  if (local_428 == 0) goto LAB_141579e9c;
  cVar5 = FUN_14155cda0(*(undefined1 *)(param_1 + 0x1d0));
  if (cVar5 == '\0') {
    puVar9 = &DAT_143f3eda8;
    if (DAT_1464a1408 != 0) {
      puVar9 = DAT_1464a1400;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_d8,puVar9);
    local_3a8 = UPlatformGameInstance::StaticClass();
    plVar8 = *(longlong **)(lVar6 + 0x80);
    local_370 = *(undefined8 *)(lVar6 + 0x78);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_448 = &local_3e0;
    local_3e0 = (longlong *)0x0;
    local_450 = 6;
    local_458 = &DAT_1464a1440;
    local_3d8 = 0;
    lVar6 = FUN_14202a0e0(local_370,local_3a8,param_1,local_50);
    if (lVar6 == 0) {
LAB_141579e11:
      lVar6 = lVar12;
    }
    else {
      lVar7 = UPlatformGameInstance::StaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_141579e11;
    }
    plVar10 = local_3e0;
    for (iVar11 = (int)local_3d8; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_3e0 != (longlong *)0x0) {
      FMemory::Free(local_3e0);
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar8 + 1;
      lVar12 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
  else if (cVar5 == '\x01') {
    puVar9 = &DAT_143f3eda8;
    if (DAT_1464a1418 != 0) {
      puVar9 = DAT_1464a1410;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_178,puVar9);
    local_3b0 = UPlatformGameInstance::StaticClass();
    plVar8 = *(longlong **)(lVar6 + 0x80);
    local_380 = *(undefined8 *)(lVar6 + 0x78);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_448 = &local_3f0;
    local_3f0 = (longlong *)0x0;
    local_450 = 6;
    local_458 = &DAT_1464a1440;
    local_3e8 = 0;
    lVar6 = FUN_14202a0e0(local_380,local_3b0,param_1,local_f0);
    if (lVar6 == 0) {
LAB_141579ce3:
      lVar6 = lVar12;
    }
    else {
      lVar7 = UPlatformGameInstance::StaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_141579ce3;
    }
    plVar10 = local_3f0;
    for (iVar11 = (int)local_3e8; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_3f0 != (longlong *)0x0) {
      FMemory::Free(local_3f0);
    }
    local_58 = local_f8;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar8 + 1;
      lVar12 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        local_58 = local_f8;
        if (iVar11 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
          local_58 = local_f8;
        }
      }
    }
  }
  else if (cVar5 == '\x02') {
    puVar9 = &DAT_143f3eda8;
    if (DAT_1464a1428 != 0) {
      puVar9 = DAT_1464a1420;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_218,puVar9);
    local_3b8 = UPlatformGameInstance::StaticClass();
    plVar8 = *(longlong **)(lVar6 + 0x80);
    local_390 = *(undefined8 *)(lVar6 + 0x78);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_448 = &local_400;
    local_400 = (longlong *)0x0;
    local_450 = 6;
    local_458 = &DAT_1464a1440;
    local_3f8 = 0;
    lVar6 = FUN_14202a0e0(local_390,local_3b8,param_1,local_190);
    if (lVar6 == 0) {
LAB_141579bb3:
      lVar6 = lVar12;
    }
    else {
      lVar7 = UPlatformGameInstance::StaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_141579bb3;
    }
    plVar10 = local_400;
    for (iVar11 = (int)local_3f8; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_400 != (longlong *)0x0) {
      FMemory::Free(local_400);
    }
    local_58 = local_198;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar8 + 1;
      lVar12 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        local_58 = local_198;
        if (iVar11 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
          local_58 = local_198;
        }
      }
    }
  }
  else {
    if (cVar5 != '\x03') goto LAB_141579e9c;
    puVar9 = &DAT_143f3eda8;
    if (DAT_1464a1438 != 0) {
      puVar9 = DAT_1464a1430;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_2b8,puVar9);
    local_3c0 = UPlatformGameInstance::StaticClass();
    plVar8 = *(longlong **)(lVar6 + 0x80);
    local_3a0 = *(undefined8 *)(lVar6 + 0x78);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_448 = &local_410;
    local_410 = (longlong *)0x0;
    local_450 = 6;
    local_458 = &DAT_1464a1440;
    local_408 = 0;
    lVar6 = FUN_14202a0e0(local_3a0,local_3c0,param_1,local_230);
    if (lVar6 == 0) {
LAB_141579a7a:
      lVar6 = lVar12;
    }
    else {
      lVar7 = UPlatformGameInstance::StaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_141579a7a;
    }
    plVar10 = local_410;
    for (iVar11 = (int)local_408; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_410 != (longlong *)0x0) {
      FMemory::Free(local_410);
    }
    local_58 = local_238;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar8 + 1;
      lVar12 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        local_58 = local_238;
        if (iVar11 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
          local_58 = local_238;
        }
      }
    }
  }
  *(longlong *)(param_1 + 0x1b0) = lVar6;
  if (local_58 != 0) {
    FMemory::Free();
  }
LAB_141579e9c:
  plVar8 = local_420;
  if (local_420 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_420 + 1;
    lVar12 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_420)(local_420);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_420 + 8))(local_420,1);
      }
    }
  }
  return;
}



// FUNCTION 141579f20 FUN_141579f20 body=849 status=ok
// SIG undefined FUN_141579f20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141579f20(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  undefined1 local_150;
  longlong **local_148;
  ulonglong local_138;
  longlong *local_130;
  undefined4 local_128;
  longlong *local_120;
  undefined8 local_118;
  ulonglong local_110;
  longlong *local_108;
  ulonglong local_100;
  longlong *plStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_d8 [128];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  uVar12 = 0;
  local_128 = 0;
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    return;
  }
  if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_141579fd8:
    puVar8 = &local_100;
    local_100 = 0;
    plStack_f8 = (longlong *)0x0;
    bVar5 = false;
    bVar4 = true;
    local_110 = uVar12;
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar11 = *piVar1;
    if (iVar11 == 0) {
      *piVar1 = 0;
      iVar11 = 0;
    }
    UNLOCK();
    if (iVar11 < 1) goto LAB_141579fd8;
    local_130 = *(longlong **)(param_1 + 0x30);
    bVar5 = true;
    bVar4 = false;
    local_138 = 0;
    if (local_130 != (longlong *)0x0) {
      LOCK();
      uVar2 = *(uint *)(local_130 + 1);
      bVar13 = uVar2 == 0;
      if (bVar13) {
        *(uint *)(local_130 + 1) = 0;
        uVar6 = uVar12;
      }
      else {
        uVar6 = (ulonglong)uVar2;
      }
      UNLOCK();
      while (!bVar13) {
        iVar11 = (int)uVar6;
        LOCK();
        bVar13 = iVar11 == (int)local_130[1];
        if (bVar13) {
          *(int *)(local_130 + 1) = iVar11 + 1;
        }
        UNLOCK();
        if (bVar13) {
          local_138 = *(ulonglong *)(param_1 + 0x28);
          puVar8 = &local_138;
          local_110 = local_138;
          goto LAB_141579fee;
        }
        uVar6 = 0;
        LOCK();
        uVar2 = *(uint *)(local_130 + 1);
        bVar13 = uVar2 == 0;
        if (bVar13) {
          *(uint *)(local_130 + 1) = 0;
        }
        else {
          uVar6 = (ulonglong)uVar2;
        }
        UNLOCK();
      }
      local_130 = (longlong *)0x0;
    }
    puVar8 = &local_138;
    local_110 = 0;
  }
LAB_141579fee:
  plVar3 = (longlong *)puVar8[1];
  puVar8[1] = 0;
  plVar10 = plStack_f8;
  local_108 = plVar3;
  *puVar8 = 0;
  if ((bVar4) && (plStack_f8 != (longlong *)0x0)) {
    LOCK();
    plVar3 = plStack_f8 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_f8)(plStack_f8);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plStack_f8 + 8))(plStack_f8,1);
      }
    }
  }
  plVar3 = local_130;
  if ((bVar5) && (local_130 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_130 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_130)(local_130);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_130 + 8))(local_130,1);
      }
    }
  }
  uVar6 = local_110;
  if (local_110 == 0) goto LAB_14157a1fa;
  puVar9 = &DAT_143f3eda8;
  if (DAT_1464a14a8 != 0) {
    puVar9 = DAT_1464a14a0;
  }
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  TStringConversion<TStringConvert<wchar_t,char>,128>(local_d8,puVar9);
  local_f0 = UPlatformGameInstance::StaticClass();
  local_e8 = *(undefined8 *)(uVar6 + 0x78);
  plVar3 = *(longlong **)(uVar6 + 0x80);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_148 = &local_120;
  local_120 = (longlong *)0x0;
  local_150 = 6;
  local_158 = &DAT_1464a1440;
  local_118 = 0;
  uVar6 = FUN_14202a0e0(local_e8,local_f0,param_1,local_50);
  if (uVar6 == 0) {
LAB_14157a16d:
    uVar6 = uVar12;
  }
  else {
    lVar7 = UPlatformGameInstance::StaticClass();
    if ((*(int *)(*(longlong *)(uVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_14157a16d;
  }
  plVar10 = local_120;
  for (iVar11 = (int)local_118; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_120 != (longlong *)0x0) {
    FMemory::Free(local_120);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar3 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  *(ulonglong *)(param_1 + 0x1b0) = uVar6;
  if (local_58 != 0) {
    FMemory::Free();
  }
LAB_14157a1fa:
  plVar3 = local_108;
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_108 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_108 + 8))(local_108,1);
      }
    }
  }
  return;
}



// FUNCTION 14157a280 ResizeAllocation body=161 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<32,TSizedDefaultAllocator<32>_>::ForElementType<FSkeletalMeshSkinningData_*>::
     ResizeAllocation(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x100);
  if (param_3 < 0x21) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 3);
    pvVar1 = *(void **)((longlong)param_1 + 0x100);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0x100) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 3);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x100) = uVar2;
  return;
}



// FUNCTION 14157a330 FUN_14157a330 body=141 status=ok
// SIG undefined FUN_14157a330(void)

void FUN_14157a330(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (uVar1 < 0x21) {
    iVar2 = 0x20;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x10c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 * 8,0);
    iVar2 = (int)(uVar3 >> 3);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x10c) = iVar2;
  TInlineAllocator<32,TSizedDefaultAllocator<32>_>::ForElementType<FSkeletalMeshSkinningData_*>::
  ResizeAllocation(param_1,param_2,iVar2,8);
  return;
}



// FUNCTION 14157a3c0 ResizeTo body=110 status=ok
// SIG undefined ResizeTo(void)

void TArray<FSkeletalMeshSkinningData_*,TInlineAllocator<32,TSizedDefaultAllocator<32>_>_>::ResizeTo
               (longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x21) {
      iVar1 = 0x20;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x10c)) {
    *(int *)(param_1 + 0x10c) = iVar1;
    TInlineAllocator<32,TSizedDefaultAllocator<32>_>::ForElementType<FSkeletalMeshSkinningData_*>::
    ResizeAllocation(param_1,*(undefined4 *)(param_1 + 0x108),iVar1,8);
  }
  return;
}



// FUNCTION 14157a430 FUN_14157a430 body=498 status=ok
// SIG undefined FUN_14157a430(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14157a430(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined2 *puVar7;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  longlong local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong *local_118;
  uint local_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  uint local_e0;
  undefined1 local_d8;
  undefined7 uStack_d7;
  undefined1 local_c8 [128];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  if ((*(longlong *)(param_1 + 0x340) != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
    FUN_140ad4c90(*(longlong *)(param_1 + 0x38),&local_138);
    if (local_138 != 0) {
      local_118 = (longlong *)0x0;
      local_110 = 0;
      local_128 = 0xffffffffffffffff;
      uStack_120 = 0xffffffffffffffff;
      cVar6 = FUN_142eeb620(*(undefined8 *)(param_1 + 0x340),0,&local_128);
      if (cVar6 != '\0') {
        if (*(int *)(param_2 + 0x20) == 0) {
          puVar7 = &DAT_143f3eda8;
        }
        else {
          puVar7 = *(undefined2 **)(param_2 + 0x18);
        }
        TStringConversion<TStringConvert<wchar_t,char>,128>::
        TStringConversion<TStringConvert<wchar_t,char>,128>(local_c8,puVar7);
        local_148 = 0;
        FUN_142031710(local_138,param_1 + 0x350,local_40,0);
        if (local_48 != 0) {
          FMemory::Free();
        }
        local_148._0_1_ = ((byte)local_110 & 0x8f) == 10;
        (**(code **)(*local_118 + 0x28))(local_118,local_108,"bitmapData",param_1 + 0x350);
        local_f8 = 0xffffffffffffffff;
        uStack_f0 = 0xffffffffffffffff;
        local_e8 = (longlong *)0x0;
        local_e0 = 2;
        local_d8 = 0;
        local_148 = CONCAT31(local_148._1_3_,((byte)local_110 & 0x8f) == 10);
        (**(code **)(*local_118 + 0x28))(local_118,local_108,"smoothing",&local_f8);
        if ((local_e0 >> 6 & 1) != 0) {
          (**(code **)(*local_e8 + 0x10))(local_e8,&local_f8,CONCAT71(uStack_d7,local_d8));
        }
      }
      if ((local_110 >> 6 & 1) != 0) {
        (**(code **)(*local_118 + 0x10))(local_118,&local_128,local_108);
      }
    }
    plVar5 = local_130;
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_130 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_130)(local_130);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_130 + 8))(local_130,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14157a630 FUN_14157a630 body=498 status=ok
// SIG undefined FUN_14157a630(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14157a630(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined2 *puVar7;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  longlong local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong *local_118;
  uint local_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  uint local_e0;
  undefined1 local_d8;
  undefined7 uStack_d7;
  undefined1 local_c8 [128];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  if ((*(longlong *)(param_1 + 0x338) != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
    FUN_140ad4c90(*(longlong *)(param_1 + 0x38),&local_138);
    if (local_138 != 0) {
      local_118 = (longlong *)0x0;
      local_110 = 0;
      local_128 = 0xffffffffffffffff;
      uStack_120 = 0xffffffffffffffff;
      cVar6 = FUN_142eeb620(*(undefined8 *)(param_1 + 0x338),0,&local_128);
      if (cVar6 != '\0') {
        if (*(int *)(param_2 + 0x20) == 0) {
          puVar7 = &DAT_143f3eda8;
        }
        else {
          puVar7 = *(undefined2 **)(param_2 + 0x18);
        }
        TStringConversion<TStringConvert<wchar_t,char>,128>::
        TStringConversion<TStringConvert<wchar_t,char>,128>(local_c8,puVar7);
        local_148 = 0;
        FUN_142031710(local_138,param_1 + 0x390,local_40,0);
        if (local_48 != 0) {
          FMemory::Free();
        }
        local_148._0_1_ = ((byte)local_110 & 0x8f) == 10;
        (**(code **)(*local_118 + 0x28))(local_118,local_108,"bitmapData",param_1 + 0x390);
        local_f8 = 0xffffffffffffffff;
        uStack_f0 = 0xffffffffffffffff;
        local_e8 = (longlong *)0x0;
        local_e0 = 2;
        local_d8 = 0;
        local_148 = CONCAT31(local_148._1_3_,((byte)local_110 & 0x8f) == 10);
        (**(code **)(*local_118 + 0x28))(local_118,local_108,"smoothing",&local_f8);
        if ((local_e0 >> 6 & 1) != 0) {
          (**(code **)(*local_e8 + 0x10))(local_e8,&local_f8,CONCAT71(uStack_d7,local_d8));
        }
      }
      if ((local_110 >> 6 & 1) != 0) {
        (**(code **)(*local_118 + 0x10))(local_118,&local_128,local_108);
      }
    }
    plVar5 = local_130;
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_130 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_130)(local_130);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_130 + 8))(local_130,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14157a830 FUN_14157a830 body=449 status=ok
// SIG undefined FUN_14157a830(void)

void FUN_14157a830(longlong param_1,int param_2)

{
  undefined4 **ppuVar1;
  undefined4 *_Src;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *_Src_00;
  undefined4 *local_28;
  int local_20;
  
  if ((param_2 == 0) && (cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x68), cVar3 != '\0')) {
    uVar4 = FWeakObjectPtr::Get(param_1 + 0x68);
    lVar5 = FUN_140cff230(uVar4);
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x231) != '\0')) {
      uVar4 = FWeakObjectPtr::Get(param_1 + 0x68);
      cVar3 = FUN_1415642d0(param_1,uVar4);
      if (((cVar3 != '\0') && (lVar5 = FWeakObjectPtr::Get(param_1 + 0x68), lVar5 != 0)) &&
         (lVar6 = FUN_140cff230(lVar5), lVar6 != 0)) {
        cVar3 = FUN_14058c1e0(param_1 + 0x68,lVar5);
        if (cVar3 == '\0') {
          ppuVar1 = (undefined4 **)(lVar6 + 0x210);
          local_20 = *(int *)(lVar6 + 0x218);
          lVar5 = (longlong)local_20;
          _Src = *ppuVar1;
          _Src_00 = (undefined4 *)0x0;
          local_28 = (undefined4 *)0x0;
          if (local_20 != 0) {
            TArray<int,FDefaultAllocator>::ResizeForCopy(&local_28,local_20,0);
            _Src_00 = local_28;
            _guard_xfg_dispatch_icall_nop(local_28,_Src,lVar5 << 2);
          }
          iVar2 = local_20;
          if (0 < local_20) {
            *_Src_00 = 0;
            if (ppuVar1 != &local_28) {
              *(int *)(lVar6 + 0x218) = local_20;
              if ((local_20 == 0) && (*(int *)(lVar6 + 0x21c) == 0)) {
                *(undefined4 *)(lVar6 + 0x21c) = 0;
              }
              else {
                TArray<int,FDefaultAllocator>::ResizeForCopy(ppuVar1,local_20);
                _guard_xfg_dispatch_icall_nop(*ppuVar1,_Src_00,(longlong)iVar2 << 2);
              }
            }
            *(undefined1 *)(lVar6 + 0x28) = 1;
            FUN_14172cc40(lVar6,1);
          }
          if (_Src_00 != (undefined4 *)0x0) {
            FMemory::Free(_Src_00);
          }
        }
        else if (0 < *(int *)(param_1 + 0x80)) {
          **(undefined4 **)(param_1 + 0x78) = 0;
          TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(lVar6 + 0x210,param_1 + 0x78);
          *(undefined1 *)(lVar6 + 0x28) = 1;
          FUN_14172cc40(lVar6,1);
        }
      }
    }
  }
  *(int *)(param_1 + 0x70) = param_2;
  return;
}



// FUNCTION 14157aa00 FUN_14157aa00 body=326 status=ok
// SIG undefined FUN_14157aa00(void)

void FUN_14157aa00(longlong param_1,char param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  uint local_res8 [2];
  
  if (*(char *)(param_1 + 0x228) == '\0') {
    if (*(char *)(param_1 + 0x229) != param_2) {
      *(char *)(param_1 + 0x229) = param_2;
      if (*(longlong **)(param_1 + 0x1d8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x278))();
        param_2 = *(char *)(param_1 + 0x229);
      }
      if (param_2 != '\0') {
        FUN_142f0ad20(param_1,DAT_1468a6888);
        return;
      }
    }
  }
  else {
    lVar2 = FUN_140eccb70();
    if (lVar2 != 0) {
      lVar2 = FUN_140bbb120(lVar2,param_3);
      if (lVar2 != 0) {
        FUN_142710360(lVar2,local_res8);
        if (local_res8[0] != 0xffffffff) {
          if (param_2 == '\0') {
            *(uint *)(param_1 + 0x1f0) = *(uint *)(param_1 + 0x1f0) & ~(1 << (local_res8[0] & 0x1f))
            ;
          }
          else {
            *(uint *)(param_1 + 0x1f0) = *(uint *)(param_1 + 0x1f0) | 1 << (local_res8[0] & 0x1f);
            FUN_142f0ad20(param_1,DAT_1468a6888);
          }
          if (((-1 < (int)local_res8[0]) && ((int)local_res8[0] < *(int *)(param_1 + 0x1e8))) &&
             (plVar1 = *(longlong **)
                        (*(longlong *)(param_1 + 0x1e0) + (longlong)(int)local_res8[0] * 8),
             plVar1 != (longlong *)0x0)) {
            (**(code **)(*plVar1 + 0x278))(plVar1,param_2);
          }
          bVar3 = *(int *)(param_1 + 0x1f0) != 0;
          if ((bool)*(char *)(param_1 + 0x229) != bVar3) {
            *(bool *)(param_1 + 0x229) = bVar3;
            if (*(longlong **)(param_1 + 0x1d8) != (longlong *)0x0) {
              (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x278))();
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14157ab50 FUN_14157ab50 body=66 status=ok
// SIG undefined FUN_14157ab50(void)

void FUN_14157ab50(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_1 + 0x1b0) == 0) && (param_2 != 0)) {
    *(longlong *)(param_1 + 0x1b0) = param_2;
    FUN_142ee17b0();
                    /* WARNING: Could not emulate address calculation at 0x00014157ab7d */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x278))(*(longlong **)(param_1 + 0x1b0),0);
    return;
  }
  return;
}



// FUNCTION 14157aba0 FUN_14157aba0 body=670 status=ok
// SIG undefined FUN_14157aba0(void)

void FUN_14157aba0(longlong param_1)

{
  void **ppvVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  void *_Src;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  void *_Src_00;
  void *pvVar11;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  undefined1 local_res18 [8];
  longlong *local_68;
  int local_60;
  void *local_58;
  int local_50;
  longlong *local_48;
  longlong *local_40;
  
  FWeakObjectPtr::operator=(param_1 + 0x68);
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x68);
  if (cVar5 == '\0') {
    return;
  }
  uVar6 = FWeakObjectPtr::Get(param_1 + 0x68);
  lVar7 = FUN_140cff230(uVar6);
  pvVar11 = (void *)0x0;
  if (lVar7 != 0) {
    if (*(char *)(param_1 + 0xbc) == '\0') {
      local_50 = *(int *)(lVar7 + 0x218);
      lVar10 = (longlong)local_50;
      _Src = *(void **)(lVar7 + 0x210);
      local_58 = (void *)0x0;
      _Src_00 = pvVar11;
      if (local_50 == 0) {
LAB_14157ac8e:
        if ((*(longlong *)(param_1 + 0xb0) != 0) &&
           (lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x80), lVar10 != 0)) {
          pvVar11 = (void *)(ulonglong)*(uint *)(lVar10 + 0x38);
        }
        local_res8[0] = 0;
        TArray<int,FDefaultAllocator>::Init(param_1 + 0x78,local_res8,pvVar11);
        TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(lVar7 + 0x210,param_1 + 0x78);
        *(undefined1 *)(lVar7 + 0x28) = 1;
        FUN_14172cc40(lVar7,1);
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(&local_58,local_50,0);
        _Src_00 = local_58;
        _guard_xfg_dispatch_icall_nop(local_58,_Src,lVar10 << 2);
        lVar10 = (longlong)local_50;
        if (local_50 == 0) goto LAB_14157ac8e;
        ppvVar1 = (void **)(param_1 + 0x78);
        if (ppvVar1 != &local_58) {
          *(int *)(param_1 + 0x80) = local_50;
          TArray<int,FDefaultAllocator>::ResizeForCopy
                    (ppvVar1,local_50,*(undefined4 *)(param_1 + 0x84));
          _guard_xfg_dispatch_icall_nop(*ppvVar1,_Src_00,lVar10 << 2);
        }
      }
      if (_Src_00 != (void *)0x0) {
        FMemory::Free(_Src_00);
      }
    }
    FUN_141576fc0(param_1);
  }
  local_res10 = 0;
  FUN_140e21cd0(&local_48,0);
  uVar6 = DAT_1468a64a8;
  if ((local_48 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x48) == 0)) {
    local_68 = (longlong *)0x0;
    plVar8 = (longlong *)FMemory::Realloc(0,0x30);
    local_60 = 3;
    local_68 = plVar8;
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = (longlong)&PTR_FUN_144c7e268;
      FWeakObjectPtr::operator=(plVar8 + 1,uVar6);
      plVar8[2] = (longlong)FUN_14156ba00;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar8[4] = lVar7;
      *plVar8 = (longlong)&PTR_FUN_144c7e2b0;
    }
    puVar9 = (undefined8 *)(**(code **)(*local_48 + 0x80))(local_48,local_res18,&local_68);
    *(undefined8 *)(param_1 + 0x48) = *puVar9;
    if (local_60 != 0) {
      if (local_68 == (longlong *)0x0) goto LAB_14157ade8;
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
LAB_14157ade8:
  plVar8 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 14157ae40 FUN_14157ae40 body=288 status=ok
// SIG undefined FUN_14157ae40(void)

void FUN_14157ae40(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  longlong local_28 [4];
  
  fVar2 = 0.0;
  if ((0.0 <= param_2) && (fVar2 = param_2, 1.0 <= param_2)) {
    fVar2 = 1.0;
  }
  if (1e-08 < ABS(*(float *)(param_1 + 0x184) - fVar2)) {
    if (*(longlong *)(param_1 + 0x170) != 0) {
      FUN_142f113c0(*(longlong *)(param_1 + 0x170),(double)(fVar2 * *(float *)(param_1 + 0x180)));
    }
    if (*(longlong *)(param_1 + 0x178) != 0) {
      fVar1 = *(float *)(param_1 + 0x188);
      if (((1e-08 < ABS(*(float *)(param_1 + 0x184) - fVar1)) &&
          (*(float *)(param_1 + 0x184) < fVar1)) &&
         ((ABS(fVar2 - fVar1) <= 1e-08 || (fVar1 < fVar2)))) {
        local_28[1] = 3;
        local_28[0] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
        FGenericPlatformString::Memcpy(local_28[0],&DAT_144c6c5a4,6);
        FUN_142088910(*(undefined8 *)(param_1 + 0x178),local_28);
        if (local_28[0] != 0) {
          FMemory::Free();
        }
      }
    }
    *(float *)(param_1 + 0x184) = fVar2;
  }
  return;
}



// FUNCTION 14157af60 FUN_14157af60 body=208 status=ok
// SIG undefined FUN_14157af60(void)

void FUN_14157af60(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  *(int *)(param_1 + 0x180) = (int)param_2;
  if (*(longlong **)(param_1 + 0x178) != (longlong *)0x0) {
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    lVar5 = **(longlong **)(param_1 + 0x178);
    uVar6 = FText::AsNumber(local_28,param_2,0,&local_38);
    (**(code **)(lVar5 + 0x2b0))(*(undefined8 *)(param_1 + 0x178),uVar6,1,0);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    plVar1 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_30 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar1 + 8))(plVar1,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14157b030 FUN_14157b030 body=163 status=ok
// SIG undefined FUN_14157b030(void)

void FUN_14157b030(longlong param_1,int *param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *param_2;
  lVar4 = (longlong)iVar1;
  if (iVar1 < 0) {
    return;
  }
  if (iVar1 < *(int *)(param_1 + 400)) {
    iVar2 = param_2[1];
    if (((-1 < iVar2) && (iVar2 < *(int *)(*(longlong *)(param_1 + 0x188) + 8 + lVar4 * 0x10))) &&
       (lVar3 = *(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x188) + lVar4 * 0x10) + (longlong)iVar2 * 8
                 ), lVar3 != 0)) goto LAB_14157b0bd;
  }
  if (iVar1 < 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1a0) <= iVar1) {
    return;
  }
  iVar1 = param_2[1];
  if (iVar1 < 0) {
    return;
  }
  if (*(int *)(*(longlong *)(param_1 + 0x198) + 8 + lVar4 * 0x10) <= iVar1) {
    return;
  }
  lVar3 = *(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x198) + lVar4 * 0x10) + (longlong)iVar1 * 8);
  if (lVar3 == 0) {
    return;
  }
LAB_14157b0bd:
  FUN_14157aa00(lVar3,param_3,param_4);
  return;
}



// FUNCTION 14157b1a0 FUN_14157b1a0 body=419 status=ok
// SIG undefined FUN_14157b1a0(void)

void FUN_14157b1a0(longlong *param_1,char param_2)

{
  longlong local_58 [2];
  undefined2 local_48 [2];
  undefined8 local_44;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_2 != (char)param_1[0x3a]) {
    *(char *)(param_1 + 0x3a) = param_2;
    (**(code **)(*param_1 + 0x2c8))();
    if (param_1[0x36] != 0) {
      FUN_142f0bc30(param_1,param_1[0x36],0);
      local_48[0] = 2;
      local_44 = 0;
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      local_18 = 0;
      local_58[0] = 0;
      local_58[1] = 0xd;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_58[0],0xd,"mouseEnabled",0xd,0x3f);
      FUN_14208f550(param_1[0x36],local_58,local_48);
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      if (local_28 != 0) {
        FMemory::Free();
      }
      if (local_38 != 0) {
        FMemory::Free();
      }
      local_44 = 0;
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      local_20 = 0;
      local_18 = 0;
      local_48[0] = 2;
      local_58[0] = 0;
      local_58[1] = 0xe;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_58[0],0xe,"mouseChildren",0xe,0x3f);
      FUN_14208f550(param_1[0x36],local_58,local_48);
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      if (local_28 != 0) {
        FMemory::Free();
      }
      if (local_38 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 14157b350 FUN_14157b350 body=702 status=ok
// SIG undefined FUN_14157b350(void)

longlong FUN_14157b350(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                      undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  longlong *local_50;
  uint local_48;
  char *local_40;
  
  bVar15 = false;
  local_70 = (longlong *)0x0;
  local_68 = 0;
  lVar8 = FUN_14154e680(param_1,param_2,0,6,&local_70);
  plVar14 = local_70;
  for (iVar13 = (int)local_68; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar14 != 0) {
      FMemory::Free();
    }
    plVar14 = plVar14 + 2;
  }
  if (local_70 != (longlong *)0x0) {
    FMemory::Free(local_70);
  }
  if ((lVar8 == 0) || (lVar3 = *(longlong *)(lVar8 + 0x248), lVar3 == 0)) {
    plVar14 = (longlong *)0x0;
  }
  else {
    lVar4 = *(longlong *)(lVar3 + 0x170);
    plVar14 = *(longlong **)(lVar3 + 0x178);
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
    }
    bVar15 = true;
    if (lVar4 != 0) {
      bVar5 = true;
      goto LAB_14157b41b;
    }
  }
  bVar5 = false;
LAB_14157b41b:
  if ((bVar15) && (plVar14 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar14 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      iVar13 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  if (bVar5) {
    local_40 = "center";
    local_60 = 0xffffffffffffffff;
    uStack_58 = 0xffffffffffffffff;
    local_50 = (longlong *)0x0;
    local_48 = 6;
    plVar14 = *(longlong **)(*(longlong *)(lVar8 + 0x248) + 0x178);
    uVar9 = *(undefined8 *)(*(longlong *)(lVar8 + 0x248) + 0x170);
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
    }
    FUN_1420523e0(uVar9,"autoSize",&local_60);
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar14 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        iVar13 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
    if ((local_48 >> 6 & 1) != 0) {
      (**(code **)(*local_50 + 0x10))(local_50,&local_60,local_40);
    }
    *(undefined8 *)(lVar8 + 0x310) = *param_5;
    cVar6 = FWeakObjectPtr::IsValid(lVar8 + 0x240);
    if (cVar6 != '\0') {
      uVar9 = FWeakObjectPtr::Get(lVar8 + 0x240);
      uVar7 = FUN_142eb62a0(uVar9);
      FUN_14156b520(lVar8,uVar7);
    }
    FUN_142ed3af0(lVar8,param_3,0);
    uVar7 = FUN_142eb62a0(param_1);
    FUN_14156b520(lVar8,uVar7);
    FWeakObjectPtr::operator=(lVar8 + 0x1b0,param_1);
    puVar12 = &DAT_143f3eda8;
    *(undefined8 *)(lVar8 + 0x1b8) = *param_4;
    if (*(int *)(param_1 + 0x508) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = *(undefined2 **)(param_1 + 0x500);
    }
    puVar10 = (undefined8 *)FName::FName(local_80,puVar11,1);
    *(undefined8 *)(lVar8 + 0x1a8) = *puVar10;
    if (*(int *)(param_1 + 0x4f8) != 0) {
      puVar12 = *(undefined2 **)(param_1 + 0x4f0);
    }
    puVar10 = (undefined8 *)FName::FName(local_78,puVar12,1);
    *(undefined8 *)(lVar8 + 0x1a0) = *puVar10;
  }
  return lVar8;
}



// FUNCTION 14157b610 FUN_14157b610 body=716 status=ok
// SIG undefined FUN_14157b610(void)

longlong FUN_14157b610(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                      undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  longlong *local_50;
  uint local_48;
  char *local_40;
  
  bVar15 = false;
  local_70 = (longlong *)0x0;
  local_68 = 0;
  lVar8 = FUN_14154e680(param_1,param_2,0,6,&local_70);
  plVar14 = local_70;
  for (iVar13 = (int)local_68; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar14 != 0) {
      FMemory::Free();
    }
    plVar14 = plVar14 + 2;
  }
  if (local_70 != (longlong *)0x0) {
    FMemory::Free(local_70);
  }
  if ((lVar8 == 0) || (lVar3 = *(longlong *)(lVar8 + 0x248), lVar3 == 0)) {
    plVar14 = (longlong *)0x0;
  }
  else {
    lVar4 = *(longlong *)(lVar3 + 0x170);
    plVar14 = *(longlong **)(lVar3 + 0x178);
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
    }
    bVar15 = true;
    if (lVar4 != 0) {
      bVar5 = true;
      goto LAB_14157b6db;
    }
  }
  bVar5 = false;
LAB_14157b6db:
  if ((bVar15) && (plVar14 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar14 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      iVar13 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  if (bVar5) {
    local_40 = "center";
    local_60 = 0xffffffffffffffff;
    uStack_58 = 0xffffffffffffffff;
    local_50 = (longlong *)0x0;
    local_48 = 6;
    plVar14 = *(longlong **)(*(longlong *)(lVar8 + 0x248) + 0x178);
    uVar9 = *(undefined8 *)(*(longlong *)(lVar8 + 0x248) + 0x170);
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
    }
    FUN_1420523e0(uVar9,"autoSize",&local_60);
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar14 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        iVar13 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
    if ((local_48 >> 6 & 1) != 0) {
      (**(code **)(*local_50 + 0x10))(local_50,&local_60,local_40);
    }
    *(undefined8 *)(lVar8 + 0x310) = *param_5;
    cVar6 = FWeakObjectPtr::IsValid(lVar8 + 0x240);
    if (cVar6 != '\0') {
      uVar9 = FWeakObjectPtr::Get(lVar8 + 0x240);
      uVar7 = FUN_142eb62a0(uVar9);
      FUN_14156b520(lVar8,uVar7);
    }
    FUN_142ed3af0(lVar8,param_3,0);
    uVar7 = FUN_142eb62a0(param_1);
    FUN_14156b520(lVar8,uVar7);
    if ((*param_4 != 0) || (param_4[1] != 0)) {
      FWeakObjectPtr::operator=(lVar8 + 0x1b0,param_1);
      *(undefined8 *)(lVar8 + 0x1b8) = *(undefined8 *)param_4;
    }
    puVar12 = &DAT_143f3eda8;
    if (*(int *)(param_1 + 0x508) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = *(undefined2 **)(param_1 + 0x500);
    }
    puVar10 = (undefined8 *)FName::FName(local_80,puVar11,1);
    *(undefined8 *)(lVar8 + 0x1a8) = *puVar10;
    if (*(int *)(param_1 + 0x4f8) != 0) {
      puVar12 = *(undefined2 **)(param_1 + 0x4f0);
    }
    puVar10 = (undefined8 *)FName::FName(local_78,puVar12,1);
    *(undefined8 *)(lVar8 + 0x1a0) = *puVar10;
  }
  return lVar8;
}



// FUNCTION 14157b8e0 FUN_14157b8e0 body=175 status=ok
// SIG undefined FUN_14157b8e0(void)

/* WARNING: Removing unreachable block (ram,0x00014157b930) */
/* WARNING: Removing unreachable block (ram,0x00014157b938) */
/* WARNING: Removing unreachable block (ram,0x00014157b93d) */
/* WARNING: Removing unreachable block (ram,0x00014157b946) */
/* WARNING: Removing unreachable block (ram,0x00014157b950) */

void FUN_14157b8e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14154e680();
  FUN_14157ba50(param_1,uVar1,param_3,param_4,param_5);
  return;
}



// FUNCTION 14157b990 FUN_14157b990 body=182 status=ok
// SIG undefined FUN_14157b990(void)

void FUN_14157b990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  
  local_38 = DAT_146b3e2a0;
  local_30 = (longlong *)0x0;
  local_28 = 0;
  uVar1 = FUN_14154e680();
  plVar2 = local_30;
  for (iVar3 = (int)local_28; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_30 != (longlong *)0x0) {
    FMemory::Free(local_30);
  }
  FUN_14157ba50(param_1,uVar1,param_3,param_4,&local_38);
  return;
}



// FUNCTION 14157ba50 FUN_14157ba50 body=667 status=ok
// SIG undefined FUN_14157ba50(void)

longlong FUN_14157ba50(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                      undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  undefined4 local_res10;
  uint uStackX_14;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  longlong *local_50;
  uint local_48;
  char *local_40;
  
  bVar7 = false;
  local_res10 = 0;
  if (param_2 == 0) {
    return 0;
  }
  lVar4 = *(longlong *)(param_2 + 0x248);
  if (lVar4 == 0) {
    plVar13 = (longlong *)((ulonglong)uStackX_14 << 0x20);
  }
  else {
    lVar5 = *(longlong *)(lVar4 + 0x170);
    plVar13 = *(longlong **)(lVar4 + 0x178);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    bVar7 = true;
    if (lVar5 != 0) {
      bVar6 = true;
      goto LAB_14157bac5;
    }
  }
  bVar6 = false;
LAB_14157bac5:
  if ((bVar7) && (plVar13 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar13 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  if (bVar6) {
    local_40 = "center";
    local_60 = 0xffffffffffffffff;
    uStack_58 = 0xffffffffffffffff;
    local_50 = (longlong *)0x0;
    local_48 = 6;
    plVar13 = *(longlong **)(*(longlong *)(param_2 + 0x248) + 0x178);
    uVar10 = *(undefined8 *)(*(longlong *)(param_2 + 0x248) + 0x170);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    FUN_1420523e0(uVar10,"autoSize",&local_60);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar13 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    if ((local_48 >> 6 & 1) != 0) {
      (**(code **)(*local_50 + 0x10))(local_50,&local_60,local_40);
    }
    FUN_142ed3af0(param_2,param_3,0);
  }
  *(undefined8 *)(param_2 + 0x310) = *param_5;
  cVar8 = FWeakObjectPtr::IsValid(param_2 + 0x240);
  if (cVar8 != '\0') {
    uVar10 = FWeakObjectPtr::Get(param_2 + 0x240);
    uVar9 = FUN_142eb62a0(uVar10);
    FUN_14156b520(param_2,uVar9);
  }
  uVar9 = FUN_142eb62a0(param_1);
  FUN_14156b520(param_2,uVar9);
  FWeakObjectPtr::operator=(param_2 + 0x1b0,param_1);
  puVar14 = &DAT_143f3eda8;
  *(undefined8 *)(param_2 + 0x1b8) = *param_4;
  if (*(int *)(param_1 + 0x508) == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = *(undefined2 **)(param_1 + 0x500);
  }
  puVar11 = (undefined8 *)FName::FName(&local_res10,puVar12,1);
  *(undefined8 *)(param_2 + 0x1a8) = *puVar11;
  if (*(int *)(param_1 + 0x4f8) != 0) {
    puVar14 = *(undefined2 **)(param_1 + 0x4f0);
  }
  puVar11 = (undefined8 *)FName::FName(local_68,puVar14,1);
  *(undefined8 *)(param_2 + 0x1a0) = *puVar11;
  iVar3 = *(int *)(param_1 + 0x690);
  *(int *)(param_1 + 0x690) = iVar3 + 1;
  if (*(int *)(param_1 + 0x694) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x688,iVar3);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x688) + (longlong)iVar3 * 8) = param_2;
  return param_2;
}



// FUNCTION 14157bcf0 FUN_14157bcf0 body=36 status=ok
// SIG undefined FUN_14157bcf0(void)

void FUN_14157bcf0(void)

{
  FUN_14157ba50();
  return;
}



// FUNCTION 14157bd20 FUN_14157bd20 body=459 status=ok
// SIG undefined FUN_14157bd20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14157bd20(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined8 local_88;
  longlong *plStack_80;
  undefined1 local_78 [40];
  undefined1 local_50;
  ushort local_4e;
  uint local_4c;
  undefined1 local_48 [24];
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  if (param_2 != 0) {
    local_20 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
    lVar6 = (**(code **)(*param_1 + 0x148))();
    if ((lVar6 != 0) && ((*(uint *)(lVar6 + 0x830) & 0x400) == 0)) {
      plVar8 = (longlong *)param_1[0xdf];
      if (plVar8 == (longlong *)0x0) {
        FActorSpawnParameters::FActorSpawnParameters(local_78);
        local_4c = local_4c | 0x40;
        local_4e = local_4e | 8;
        local_50 = 1;
        uVar7 = FUN_1421f9b60();
        local_98 = local_78;
        lVar6 = UWorld::SpawnActor(lVar6,uVar7,0,0);
        param_1[0xdf] = lVar6;
        if (lVar6 == 0) {
          return;
        }
        uVar7 = FSoftObjectPath::FSoftObjectPath(local_48,param_2);
        FSoftObjectPath::operator=(param_1[0xdf] + 0x4b8,uVar7);
        lVar6 = param_1[0xdf];
        *(undefined4 *)(lVar6 + 0x468) = 0;
        *(undefined1 *)(lVar6 + 0x470) = 0;
        *(undefined8 *)(lVar6 + 0x474) = 0;
        *(undefined2 *)(lVar6 + 0x47c) = 0;
        *(undefined1 *)(lVar6 + 0x47e) = 0;
        *(undefined8 *)(lVar6 + 0x480) = 0;
        *(undefined4 *)(lVar6 + 0x46c) = 0x3f800000;
        *(undefined8 *)(lVar6 + 0x488) = 0;
        *(undefined8 *)(lVar6 + 0x490) = 0;
        puVar1 = (undefined8 *)(lVar6 + 0x498);
        if (&local_88 != puVar1) {
          local_88 = *puVar1;
          plVar8 = *(longlong **)(lVar6 + 0x4a0);
          local_30 = 0;
          uStack_28 = 0;
          *puVar1 = 0;
          *(undefined8 *)(lVar6 + 0x4a0) = 0;
          plStack_80 = plVar8;
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar8 + 1;
            lVar5 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar3 = (int *)((longlong)plVar8 + 0xc);
              iVar4 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plStack_80 + 8))(plStack_80,1);
              }
            }
          }
        }
        *(undefined1 *)(lVar6 + 0x4a8) = 0;
        plVar8 = (longlong *)param_1[0xdf];
      }
      (**(code **)(*plVar8 + 0x6e8))();
      param_1[0xde] = *(longlong *)(param_1[0xdf] + 0x4b0);
    }
  }
  return;
}



// FUNCTION 14157bef0 FUN_14157bef0 body=94 status=ok
// SIG undefined FUN_14157bef0(void)

void FUN_14157bef0(undefined8 param_1)

{
  longlong local_18 [2];
  
  local_18[1] = 5;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"show",10);
  FUN_142088910(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14157bf50 FUN_14157bf50 body=67 status=ok
// SIG undefined FUN_14157bf50(void)

void FUN_14157bf50(undefined1 param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(DAT_1468a64a8 + 0xa8) != 0) {
    lVar1 = FWeakObjectPtr::Get(*(longlong *)(DAT_1468a64a8 + 0xa8) + 0x48);
    if (lVar1 != 0) {
      FUN_14157c550(lVar1,param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14157bfa0 FUN_14157bfa0 body=139 status=ok
// SIG undefined FUN_14157bfa0(void)

void FUN_14157bfa0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (((*(longlong *)(DAT_1468a64a8 + 0xa8) != 0) &&
      (lVar2 = FWeakObjectPtr::Get(*(longlong *)(DAT_1468a64a8 + 0xa8) + 0x48), lVar2 != 0)) &&
     (*(longlong *)(lVar2 + 0x7c8) != 0)) {
    FUN_142088910(*(longlong *)(lVar2 + 0x7c8),&DAT_1464a0f70);
    plVar1 = *(longlong **)(lVar2 + 2000);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1,1,0);
    }
  }
  if (*param_1 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 14157c030 FUN_14157c030 body=857 status=ok
// SIG undefined FUN_14157c030(void)

void FUN_14157c030(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  longlong local_78;
  longlong local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  
  plVar11 = (longlong *)0x0;
  local_70 = (longlong)(*(int *)(param_1 + 0x1c8) + -1);
  if (0 < local_70) {
    lVar15 = local_70 << 5;
    do {
      lVar5 = *(longlong *)(param_1 + 0x1c0);
      plVar10 = *(longlong **)(lVar15 + 0x10 + lVar5);
      local_78 = 0;
      plVar4 = (longlong *)(lVar15 + lVar5);
      lVar1 = lVar15 + -0x20;
      plVar13 = plVar10;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        iVar8 = (int)plVar10[1];
        bVar16 = iVar8 == 0;
        if (bVar16) {
          *(int *)(plVar10 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
        while (plVar13 = plVar11, !bVar16) {
          LOCK();
          bVar16 = iVar8 == (int)plVar10[1];
          if (bVar16) {
            *(int *)(plVar10 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar16) {
            plVar13 = plVar10;
            if (plVar10 != (longlong *)0x0) {
              local_78 = plVar4[1];
            }
            break;
          }
          LOCK();
          iVar8 = (int)plVar10[1];
          bVar16 = iVar8 == 0;
          if (bVar16) {
            *(int *)(plVar10 + 1) = 0;
            iVar8 = 0;
          }
          UNLOCK();
        }
      }
      plVar10 = *(longlong **)(lVar15 + -0x10 + lVar5);
      plVar12 = plVar10;
      plVar14 = plVar11;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        iVar8 = (int)plVar10[1];
        bVar16 = iVar8 == 0;
        if (bVar16) {
          *(int *)(plVar10 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
        while (plVar12 = plVar11, !bVar16) {
          LOCK();
          bVar16 = iVar8 == (int)plVar10[1];
          if (bVar16) {
            *(int *)(plVar10 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar16) {
            plVar12 = plVar10;
            plVar14 = (longlong *)0x0;
            if (plVar10 != (longlong *)0x0) {
              plVar14 = *(longlong **)(lVar15 + -0x18 + lVar5);
            }
            break;
          }
          LOCK();
          iVar8 = (int)plVar10[1];
          bVar16 = iVar8 == 0;
          if (bVar16) {
            *(int *)(plVar10 + 1) = 0;
            iVar8 = 0;
          }
          UNLOCK();
        }
      }
      if ((((longlong *)*plVar4 != (longlong *)0x0) && (local_78 != 0)) &&
         (plVar14 != (longlong *)0x0)) {
        lVar6 = *(longlong *)*plVar4;
        uVar9 = FUN_142eee450(*(undefined8 *)(lVar1 + lVar5),local_68);
        (**(code **)(lVar6 + 0x2b0))(*plVar4,uVar9,1,0);
        plVar10 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_60 + 1;
          lVar6 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar3 = (int *)((longlong)plVar10 + 0xc);
            iVar8 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        lVar6 = *(longlong *)*plVar4;
        uVar7 = FUN_142088620(*(undefined8 *)(lVar1 + lVar5));
        (**(code **)(lVar6 + 0x278))(*plVar4,uVar7);
        uVar7 = FUN_14203d500(plVar14);
        FUN_142056670(local_78,uVar7);
        *(undefined4 *)(plVar4 + 3) = *(undefined4 *)(lVar15 + -8 + lVar5);
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar12 + 1;
        lVar15 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar3 = (int *)((longlong)plVar12 + 0xc);
          iVar8 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar13 + 1;
        lVar15 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar3 = (int *)((longlong)plVar13 + 0xc);
          iVar8 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
      local_70 = local_70 + -1;
      lVar15 = lVar1;
    } while (local_70 != 0);
  }
  lVar15 = *(longlong *)(param_1 + 0x1c0);
  plVar4 = *(longlong **)(lVar15 + 0x10);
  plVar10 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    iVar8 = (int)plVar4[1];
    bVar16 = iVar8 == 0;
    if (bVar16) {
      *(int *)(plVar4 + 1) = 0;
      iVar8 = 0;
    }
    UNLOCK();
    while (plVar10 = plVar11, !bVar16) {
      LOCK();
      bVar16 = iVar8 == (int)plVar4[1];
      if (bVar16) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
      }
      UNLOCK();
      if (bVar16) {
        plVar10 = plVar4;
        if (plVar4 != (longlong *)0x0) {
          plVar11 = *(longlong **)(lVar15 + 8);
        }
        break;
      }
      LOCK();
      iVar8 = (int)plVar4[1];
      bVar16 = iVar8 == 0;
      if (bVar16) {
        *(int *)(plVar4 + 1) = 0;
        iVar8 = 0;
      }
      UNLOCK();
    }
  }
  if (((*(int *)(param_1 + 0x1c8) != 0) &&
      (plVar4 = (longlong *)**(longlong **)(param_1 + 0x1c0), plVar4 != (longlong *)0x0)) &&
     (plVar11 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x2b0))(plVar4,param_2,1,0);
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x1c0) + 0x278))
              ((longlong *)**(undefined8 **)(param_1 + 0x1c0),1);
    FUN_142056670(plVar11,1);
    *(undefined4 *)(*(longlong *)(param_1 + 0x1c0) + 0x18) = *(undefined4 *)(param_1 + 0x170);
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar10 + 1;
    lVar15 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar3 = (int *)((longlong)plVar10 + 0xc);
      iVar8 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  return;
}



// FUNCTION 14157c390 FUN_14157c390 body=434 status=ok
// SIG undefined FUN_14157c390(void)

void FUN_14157c390(longlong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  longlong local_res10;
  undefined1 local_28 [8];
  longlong local_20;
  
  if (*(longlong *)(param_1 + 0x6c8) != 0) {
    thunk_FUN_142eb3990();
    *(undefined8 *)(param_1 + 0x6c8) = 0;
  }
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar5 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x808), cVar4 != '\0')) &&
       (lVar6 = FWeakObjectPtr::Get(param_1 + 0x808), *(longlong *)(lVar6 + 0xb0) != 0)) {
      FWeakObjectPtr::operator=(local_28,0);
      local_20 = 0;
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnErrorDialogClicked",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res10,pwVar3 + 2,1);
      FWeakObjectPtr::operator=(local_28,param_1);
      local_20 = local_res10;
      if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(local_28), lVar6 != 0)) {
        UObject::FindFunction(lVar6,local_20);
      }
      lVar6 = FWeakObjectPtr::Get(param_1 + 0x808);
      lVar6 = *(longlong *)(lVar6 + 0xb0);
      lVar8 = FWeakObjectPtr::Get(param_1 + 0x808);
      FUN_1410f3960(lVar5,*(longlong *)(lVar8 + 0xb0) + 0xf0,lVar6 + 0x108,local_28,0,0,2);
    }
  }
  return;
}



// FUNCTION 14157c550 FUN_14157c550 body=259 status=ok
// SIG undefined FUN_14157c550(void)

void FUN_14157c550(longlong param_1,char param_2,undefined1 param_3)

{
  longlong *plVar1;
  
  if (param_2 == '\0') {
    if (*(longlong *)(param_1 + 0x6e0) == 0) {
      return;
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6e0) + 0x188);
  }
  else {
    if (param_2 == '\x01') {
      plVar1 = *(longlong **)(param_1 + 0x7b8);
      if (plVar1 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*plVar1 + 0x278))(plVar1,param_3);
      if (*(longlong *)(param_1 + 0x7b0) == 0) {
        return;
      }
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x7b0) + 0x170);
                    /* WARNING: Could not recover jumptable at 0x00014157c61f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x38))(plVar1,param_3);
      return;
    }
    if (param_2 == '\x02') {
      plVar1 = *(longlong **)(param_1 + 0x7c0);
    }
    else if (param_2 == '\x03') {
      if (*(longlong *)(param_1 + 0x6e0) == 0) {
        return;
      }
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6e0) + 400);
    }
    else {
      if (param_2 != '\x04') {
        return;
      }
      plVar1 = *(longlong **)(param_1 + 0x6e8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x278))(plVar1,param_3);
      }
      plVar1 = *(longlong **)(param_1 + 0x6f8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x278))(plVar1,param_3);
      }
      plVar1 = *(longlong **)(param_1 + 0x708);
    }
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x278))(plVar1,param_3);
  }
  return;
}



// FUNCTION 14157c660 FUN_14157c660 body=1158 status=ok
// SIG undefined FUN_14157c660(void)

void FUN_14157c660(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  uint local_res10;
  int local_res14;
  uint local_res18;
  int local_res1c;
  int *local_res20;
  longlong local_70 [6];
  
  lVar6 = param_1 + 0x4c;
  *(undefined4 *)(param_1 + 0x54) = 1;
  cVar4 = FWeakObjectPtr::IsValid(lVar6);
  if (cVar4 != '\0') {
    lVar5 = FWeakObjectPtr::Get(lVar6);
    lVar5 = *(longlong *)(lVar5 + 400);
    if (lVar5 != 0) {
      lVar6 = FWeakObjectPtr::Get(lVar6);
      if (*(longlong *)(lVar6 + 0x180) == 0) {
        local_res20 = (int *)&DAT_144c7d8d8;
      }
      else {
        local_res20 = (int *)(*(longlong *)(lVar6 + 0x180) + 0x1c0);
      }
      fVar15 = *(float *)(param_1 + 0x38);
      iVar3 = *(int *)(lVar5 + 400);
      if (*(int *)(lVar5 + 400) <= local_res20[1]) {
        iVar3 = local_res20[1];
      }
      uVar12 = 0;
      if (0 < *local_res20) {
        do {
          uVar7 = FWeakObjectPtr::Get(param_1 + 0x4c);
          plVar8 = (longlong *)FUN_14155d710(uVar7,uVar12);
          iVar13 = 0;
          if (0 < (int)plVar8[1]) {
            lVar6 = 0;
            local_res10 = uVar12;
            do {
              local_res1c = iVar13 + iVar3;
              plVar2 = *(longlong **)(lVar6 + *plVar8);
              local_res14 = iVar13;
              local_res18 = uVar12;
              if (plVar2 != (longlong *)0x0) {
                iVar14 = *(int *)(param_1 + 0x60);
                *(int *)(param_1 + 0x60) = iVar14 + 1;
                if (*(int *)(param_1 + 100) < iVar14 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (param_1 + 0x58,iVar14);
                }
                *(longlong **)(*(longlong *)(param_1 + 0x58) + (longlong)iVar14 * 8) = plVar2;
                (**(code **)(*plVar2 + 0x278))(plVar2,1);
                plVar11 = plVar2 + 0x34;
                plVar9 = (longlong *)FMemory::Realloc(0,0x30);
                if (plVar9 != (longlong *)0x0) {
                  *plVar9 = (longlong)&PTR_FUN_143f4d290;
                  FWeakObjectPtr::operator=(plVar9 + 1,param_1);
                  plVar9[2] = (longlong)FUN_141575e80;
                  lVar10 = FDelegateHandle::GenerateNewID();
                  plVar9[4] = lVar10;
                  *plVar9 = (longlong)&PTR_FUN_143f4d2d8;
                }
                if (local_70 == plVar11) {
LAB_14157c82b:
                  if (plVar9 != (longlong *)0x0) {
                    (**(code **)(*plVar9 + 0x28))(plVar9,0);
                    lVar10 = FMemory::Realloc(plVar9,0,0);
                    if (lVar10 != 0) {
                      FMemory::Free(lVar10);
                    }
                  }
                }
                else {
                  if (plVar9 != (longlong *)0x0) {
                    (**(code **)(*plVar9 + 0x30))(plVar9,plVar11);
                    goto LAB_14157c82b;
                  }
                  if (((int)plVar2[0x35] != 0) &&
                     (plVar9 = (longlong *)*plVar11, plVar9 != (longlong *)0x0)) {
                    (**(code **)(*plVar9 + 0x28))(plVar9,0);
                    if (*plVar11 != 0) {
                      lVar10 = FMemory::Realloc(*plVar11,0,0);
                      *plVar11 = lVar10;
                    }
                    *(undefined4 *)(plVar2 + 0x35) = 0;
                  }
                }
                FUN_141564320(plVar2,&local_res18,&local_res10,param_1 + 0x44,
                              *(undefined4 *)(param_1 + 0x48),fVar15);
              }
              fVar15 = fVar15 + *(float *)(param_1 + 0x40);
              iVar13 = iVar13 + 1;
              lVar6 = lVar6 + 8;
            } while (iVar13 < (int)plVar8[1]);
          }
          uVar12 = uVar12 + 1;
          fVar15 = (float)(int)uVar12 * *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x38);
        } while ((int)uVar12 < *local_res20);
      }
      iVar13 = *(int *)(lVar5 + 0x180);
      iVar14 = 0;
      if (0 < (longlong)iVar13) {
        lVar6 = 0;
        local_res10 = 0;
        do {
          local_res1c = iVar14 + iVar3;
          local_res18 = 0;
          plVar8 = *(longlong **)(*(longlong *)(lVar5 + 0x178) + lVar6 * 8);
          if (plVar8 != (longlong *)0x0) {
            iVar1 = *(int *)(param_1 + 0x60);
            *(int *)(param_1 + 0x60) = iVar1 + 1;
            local_res14 = iVar14;
            if (*(int *)(param_1 + 100) < iVar1 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (param_1 + 0x58,iVar1);
            }
            *(longlong **)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8) = plVar8;
            (**(code **)(*plVar8 + 0x278))(plVar8,1);
            plVar2 = plVar8 + 0x34;
            plVar11 = (longlong *)FMemory::Realloc(0,0x30);
            if (plVar11 != (longlong *)0x0) {
              *plVar11 = (longlong)&PTR_FUN_143f4d290;
              FWeakObjectPtr::operator=(plVar11 + 1,param_1);
              plVar11[2] = (longlong)FUN_141575e80;
              lVar10 = FDelegateHandle::GenerateNewID();
              plVar11[4] = lVar10;
              *plVar11 = (longlong)&PTR_FUN_143f4d2d8;
            }
            if (local_70 == plVar2) {
LAB_14157c9bb:
              if (plVar11 != (longlong *)0x0) {
                (**(code **)(*plVar11 + 0x28))(plVar11,0);
                lVar10 = FMemory::Realloc(plVar11,0,0);
                if (lVar10 != 0) {
                  FMemory::Free(lVar10);
                }
              }
            }
            else {
              if (plVar11 != (longlong *)0x0) {
                (**(code **)(*plVar11 + 0x30))(plVar11,plVar2);
                goto LAB_14157c9bb;
              }
              if (((int)plVar8[0x35] != 0) &&
                 (plVar11 = (longlong *)*plVar2, plVar11 != (longlong *)0x0)) {
                (**(code **)(*plVar11 + 0x28))(plVar11,0);
                if (*plVar2 != 0) {
                  lVar10 = FMemory::Realloc(*plVar2,0,0);
                  *plVar2 = lVar10;
                }
                *(undefined4 *)(plVar8 + 0x35) = 0;
              }
            }
            FUN_141564320(plVar8,&local_res18,&local_res10,param_1 + 0x44,
                          *(undefined4 *)(param_1 + 0x48),fVar15);
          }
          fVar15 = fVar15 + *(float *)(param_1 + 0x40);
          iVar14 = iVar14 + 1;
          lVar6 = lVar6 + 1;
        } while (lVar6 < iVar13);
      }
    }
  }
  return;
}



// FUNCTION 14157caf0 FUN_14157caf0 body=555 status=ok
// SIG undefined FUN_14157caf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14157caf0(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  FUN_1415657e0();
  plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x58c);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar3 = (**(code **)(*plVar2 + 0x148))(plVar2);
      if (lVar3 != 0) {
        local_98 = FUN_1415657e0;
        uStack_90 = 0;
        if (*(longlong *)(lVar3 + 400) == 0) {
          uVar4 = *(undefined8 *)(lVar3 + 0x3f8);
        }
        else {
          uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
        }
        plVar2 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar2 != (longlong *)0x0) {
          *plVar2 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar2 + 1,param_1);
          *(undefined4 *)(plVar2 + 2) = (undefined4)local_98;
          *(undefined4 *)((longlong)plVar2 + 0x14) = local_98._4_4_;
          *(undefined4 *)(plVar2 + 3) = uStack_90;
          *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_8c;
          lVar3 = FDelegateHandle::GenerateNewID();
          plVar2[5] = lVar3;
          *plVar2 = (longlong)&PTR_FUN_143f77bd0;
        }
        local_88 = 0;
        local_80 = 0;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x30))(plVar2,&local_88);
        }
        FWeakObjectPtr::operator=(local_78,0);
        local_a0 = 0xbf800000;
        local_a8 = 1;
        local_70 = 0;
        local_38 = (longlong *)0x0;
        local_28 = 0;
        local_68 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar4,param_1 + 0x708,&local_88,0x3e4ccccd);
        if (local_28 != 0) {
          plVar5 = local_58;
          if (local_38 != (longlong *)0x0) {
            plVar5 = local_38;
          }
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x10))(plVar5,0);
          }
        }
        if (local_38 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          lVar3 = FMemory::Realloc(plVar2,0,0);
          if (lVar3 != 0) {
            FMemory::Free(lVar3);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14157cd20 FUN_14157cd20 body=761 status=ok
// SIG undefined FUN_14157cd20(void)

void FUN_14157cd20(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  
  FUN_140ae47e0();
  lVar3 = FUN_1422312c0(param_1);
  if (lVar3 != 0) {
    lVar4 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      plVar5 = (longlong *)UListView::OnItemSelectionChanged(lVar3);
      plVar8 = (longlong *)*plVar5;
      plVar5 = plVar8 + (int)plVar5[1];
      for (; plVar8 != plVar5; plVar8 = plVar8 + 1) {
        lVar3 = *plVar8;
        if (lVar3 != 0) {
          uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
          lVar3 = UPlayer::GetPlayerController(lVar3,uVar6);
          if (lVar3 != 0) {
            lVar4 = FUN_14145f370();
            if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              FUN_140d03d50(lVar3);
              FUN_142dafbc0(lVar3 + 0x1560,&DAT_1468a6a30);
              FUN_142dafbc0(lVar3 + 0x15f8,&DAT_1468a6a30);
              FUN_142dafbc0(lVar3 + 0x1690,&DAT_1468a6a30);
              FUN_140b83e90(lVar3,DAT_1468a6a30);
            }
          }
        }
      }
    }
  }
  plVar5 = (longlong *)param_1[0x9b];
  if (plVar5 != (longlong *)0x0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar3 = (**(code **)(*plVar5 + 0xfa8))(plVar5), lVar3 != 0)) {
      lVar4 = FUN_14154e4a0(lVar3);
      if ((lVar4 != 0) && (lVar4 = plVar5[0x109], lVar4 != 0)) {
        lVar7 = FUN_1413ffe00();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          thunk_FUN_141400bb0(lVar4);
        }
      }
      FUN_142ee3cb0(lVar3);
    }
  }
  FUN_140ad8160(param_1);
  FUN_14155e690(param_1,1);
  lVar3 = FUN_1422312c0(param_1);
  if (lVar3 != 0) {
    lVar4 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((((bVar1) && (iVar2 = FUN_14046e5c0(lVar3), 1 < iVar2)) && (DAT_146b17150 != 0)) &&
        ((*(longlong *)(DAT_146b17150 + 0x7b0) != 0 && (param_1[0x9b] != 0)))) &&
       (lVar4 = FUN_14270bb10(), lVar4 != 0)) {
      plVar5 = (longlong *)UListView::OnItemSelectionChanged(lVar3);
      iVar2 = 0;
      if (0 < (int)plVar5[1]) {
        lVar3 = 0;
        do {
          lVar7 = *(longlong *)(lVar3 + *plVar5);
          if ((lVar7 != 0) && (lVar7 == lVar4)) {
            FUN_14248df20(*(undefined8 *)(DAT_146b17150 + 0x7b0),
                          CONCAT71((int7)((ulonglong)lVar7 >> 8),1),iVar2);
          }
          iVar2 = iVar2 + 1;
          lVar3 = lVar3 + 8;
        } while (iVar2 < (int)plVar5[1]);
      }
    }
  }
  return;
}



// FUNCTION 14157d020 FUN_14157d020 body=67 status=ok
// SIG undefined FUN_14157d020(void)

void FUN_14157d020(undefined1 param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(DAT_1468a64a8 + 0xa8) != 0) {
    lVar1 = FWeakObjectPtr::Get(*(longlong *)(DAT_1468a64a8 + 0xa8) + 0x48);
    if (lVar1 != 0) {
      FUN_14155e960(lVar1,param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 14157d070 FUN_14157d070 body=178 status=ok
// SIG undefined FUN_14157d070(void)

void FUN_14157d070(longlong param_1,undefined1 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x518) != 0) && (lVar2 = FUN_1422312c0(), lVar2 != 0)) {
    lVar3 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (DAT_146b17150 != 0)) && (*(longlong *)(DAT_146b17150 + 0x7b0) != 0)) {
      FUN_14248df20(*(longlong *)(DAT_146b17150 + 0x7b0),0,0);
    }
  }
  FUN_14155e690(param_1,0);
  FUN_140ae3ec0(param_1);
  FUN_140ae5a60(param_1,param_2);
  return;
}



// FUNCTION 14157d130 FUN_14157d130 body=1567 status=ok
// SIG undefined FUN_14157d130(void)

void FUN_14157d130(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  float fVar18;
  undefined8 in_stack_fffffffffffffd58;
  longlong *local_298;
  undefined8 local_290;
  undefined8 local_280;
  undefined8 local_278;
  longlong local_270 [2];
  longlong *local_260;
  longlong local_258;
  longlong *local_250;
  int local_248;
  longlong *local_240;
  int local_238;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_220;
  longlong *local_218;
  undefined1 local_210 [8];
  undefined1 local_208 [8];
  undefined4 local_200;
  longlong *local_1f8;
  int local_1f0;
  undefined4 local_1ec;
  undefined1 local_1e8 [128];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  int local_148;
  double local_140;
  undefined1 local_138;
  undefined1 local_128 [240];
  ulonglong uVar14;
  
  plVar6 = (longlong *)(param_1 + 0x38);
  TBaseDelegate<FSlateBrush_const_*>::operator=(plVar6);
  if (*(int *)(param_1 + 0x70) == 0) {
    FUN_14155dac0(param_1);
    cVar3 = FUN_141557680(param_1);
    if (cVar3 != '\0') {
      uVar5 = FWeakObjectPtr::Get(param_1 + 0x68);
      FUN_14155db20(param_1,uVar5,*(undefined4 *)(param_1 + 0x70));
    }
    plVar8 = (longlong *)0x0;
    if (*(int *)(param_1 + 0x40) == 0) goto LAB_14157d72d;
    if (((longlong *)*plVar6 != (longlong *)0x0) &&
       (cVar3 = (**(code **)(*(longlong *)*plVar6 + 0x18))(), cVar3 != '\0')) {
      if (*(int *)(param_1 + 0x40) != 0) {
        plVar8 = (longlong *)*plVar6;
      }
      (**(code **)(*plVar8 + 0x40))(plVar8,1);
    }
    if ((*(int *)(param_1 + 0x40) == 0) || (plVar8 = (longlong *)*plVar6, plVar8 == (longlong *)0x0)
       ) goto LAB_14157d72d;
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    if (*plVar6 != 0) {
      lVar7 = FMemory::Realloc(*plVar6,0,0);
      *plVar6 = lVar7;
    }
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0xa8);
    if (lVar7 != 0) {
      *(undefined4 *)(param_1 + 0xc4) = param_3;
      *(undefined1 *)(param_1 + 200) = param_4;
      lVar2 = *(longlong *)(lVar7 + 0x50);
      plVar8 = *(longlong **)(lVar7 + 0x58);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      local_260 = plVar8;
      local_258 = lVar2;
      if (lVar2 == 0) {
        TBaseDelegate<void,enum_ECheckBoxState>::ExecuteIfBound(plVar6,0);
        if ((*(int *)(param_1 + 0x40) != 0) &&
           (plVar9 = (longlong *)*plVar6, plVar9 != (longlong *)0x0)) {
          (**(code **)(*plVar9 + 0x28))(plVar9,0);
          if (*plVar6 != 0) {
            lVar7 = FMemory::Realloc(*plVar6,0,0);
            *plVar6 = lVar7;
          }
          *(undefined4 *)(param_1 + 0x40) = 0;
        }
      }
      else {
        FUN_142b21da0(local_208);
        local_200 = *(undefined4 *)(lVar2 + 0x48);
        uVar12 = 0;
        lVar7 = *(longlong *)(param_1 + 0xa8);
        local_298 = (longlong *)0x0;
        iVar11 = *(int *)(lVar7 + 0x30);
        local_290 = 0;
        uVar17 = uVar12;
        local_270[0] = lVar7;
        if (0 < iVar11) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_298,iVar11);
          iVar11 = *(int *)(lVar7 + 0x30);
          uVar17 = local_290 & 0xffffffff;
        }
        uVar5 = *(undefined8 *)(lVar7 + 0xe8);
        if (0 < iVar11) {
          lVar7 = *(longlong *)(lVar7 + 0x28);
          plVar6 = local_298;
          uVar14 = uVar12;
          do {
            puVar4 = (undefined8 *)
                     (**(code **)(**(longlong **)(uVar12 + lVar7) + 0x290))
                               (*(longlong **)(uVar12 + lVar7),&local_250,uVar5);
            iVar11 = *(int *)(puVar4 + 1);
            plVar8 = local_250;
            iVar15 = local_248;
            if (iVar11 != 0) {
              iVar15 = (int)uVar17;
              if (local_290._4_4_ < (int)uVar17 + iVar11) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_298);
                plVar6 = local_298;
                iVar15 = (int)local_290;
              }
              _guard_xfg_dispatch_icall_nop
                        (plVar6 + (longlong)iVar15 * 2,(void *)*puVar4,(longlong)iVar11 << 4);
              uVar17 = (ulonglong)(uint)(iVar15 + iVar11);
              *(undefined4 *)(puVar4 + 1) = 0;
              local_290 = CONCAT44(local_290._4_4_,iVar15 + iVar11);
              plVar8 = local_250;
              iVar15 = local_248;
            }
            for (; iVar15 != 0; iVar15 = iVar15 + -1) {
              if (*plVar8 != 0) {
                FMemory::Free();
              }
              plVar8 = plVar8 + 2;
            }
            if (local_250 != (longlong *)0x0) {
              FMemory::Free(local_250);
            }
            uVar13 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar13;
            lVar7 = *(longlong *)(local_270[0] + 0x28);
            plVar8 = (longlong *)(uVar12 + lVar7);
            uVar12 = uVar12 + 8;
            uVar5 = *(undefined8 *)(*plVar8 + 0x38);
            plVar8 = local_260;
          } while ((int)uVar13 < *(int *)(local_270[0] + 0x30));
        }
        plVar10 = (longlong *)(param_1 + 0x38);
        uVar13 = (uint)((ulonglong)in_stack_fffffffffffffd58 >> 0x20);
        plVar6 = local_298;
        plVar9 = local_1f8;
        for (iVar11 = local_1f0; local_298 = plVar6, iVar11 != 0; iVar11 = iVar11 + -1) {
          if (*plVar9 != 0) {
            FMemory::Free();
          }
          uVar13 = (uint)((ulonglong)in_stack_fffffffffffffd58 >> 0x20);
          plVar9 = plVar9 + 2;
          plVar6 = local_298;
        }
        uVar16 = (uint)uVar17;
        TArray<FString,FDefaultAllocator>::CopyToEmpty<FString>
                  (&local_1f8,plVar6,uVar17,local_1ec,(ulonglong)uVar13 << 0x20);
        plVar9 = plVar6;
        while (uVar16 != 0) {
          if (*plVar9 != 0) {
            FMemory::Free();
          }
          uVar16 = (int)uVar17 - 1;
          uVar17 = (ulonglong)uVar16;
          plVar9 = plVar9 + 2;
        }
        if (plVar6 != (longlong *)0x0) {
          FMemory::Free(plVar6);
        }
        lVar7 = local_258;
        FUN_141552c40(local_1e8,local_258 + 0x50);
        uVar5 = FUN_14155d440(*(undefined8 *)(param_1 + 0xa8),&local_240);
        TArray<FString,TSizedDefaultAllocator<32>_>::operator=(local_168,uVar5);
        plVar6 = local_240;
        for (; local_238 != 0; local_238 = local_238 + -1) {
          if (*plVar6 != 0) {
            FMemory::Free();
          }
          plVar6 = plVar6 + 2;
        }
        if (local_240 != (longlong *)0x0) {
          FMemory::Free(local_240);
        }
        TArray<FString,TSizedDefaultAllocator<32>_>::operator=(local_158,lVar7 + 0xd0);
        lVar7 = *(longlong *)(param_1 + 0xa8);
        fVar18 = (float)FUN_14155d900(lVar7);
        local_140 = (double)-((int)ROUND(-0.5 - (fVar18 + fVar18)) >> 1);
        lVar7 = *(longlong *)(lVar7 + 0xe8);
        plVar6 = (longlong *)FDateTime::Now(local_210);
        fVar18 = (float)((double)(*plVar6 - lVar7) * 0.0001);
        local_148 = -((int)ROUND(-0.5 - (fVar18 + fVar18)) >> 1);
        local_138 = param_4;
        FUN_142b49630(*(undefined8 *)(param_1 + 0x88),&local_220);
        local_230 = 0;
        local_228 = 0;
        local_270[0] = 0;
        local_270[1] = 0;
        puVar4 = (undefined8 *)operator_new(0x20,&local_230);
        if (puVar4 != (undefined8 *)0x0) {
          puVar4[1] = param_1;
          *puVar4 = &PTR_GetPoolName_144c7e2f8;
          uVar5 = FDelegateHandle::GenerateNewID();
          puVar4[3] = uVar5;
          *puVar4 = &PTR_GetPoolName_144c7e340;
        }
        local_280 = 0;
        local_278 = 4;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_280,0);
        FGenericPlatformString::Memcpy(local_280,&DAT_144c6df30,8);
        uVar5 = FUN_141551df0(local_128,local_208);
        iVar11 = FUN_142b08d50(local_220,param_1 + 0x98,&local_280,uVar5,&local_230,local_270);
        if (iVar11 == 0) {
          if (*(int *)(param_1 + 0xc4) < 1) {
            TBaseDelegate<void,enum_ECheckBoxState>::ExecuteIfBound(plVar10,0);
            if ((*(int *)(param_1 + 0x40) != 0) &&
               (plVar6 = (longlong *)*plVar10, plVar6 != (longlong *)0x0)) {
              (**(code **)(*plVar6 + 0x28))(plVar6,0);
              if (*plVar10 != 0) {
                lVar7 = FMemory::Realloc(*plVar10,0,0);
                *plVar10 = lVar7;
              }
              *(undefined4 *)(param_1 + 0x40) = 0;
            }
          }
          else {
            FUN_1415784a0(param_1);
          }
        }
        if (local_218 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_218 + 1;
          lVar7 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_218)(local_218);
            LOCK();
            piVar1 = (int *)((longlong)local_218 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_218 + 8))(local_218,1);
            }
          }
        }
        FUN_142b22c80(local_208);
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar8 + 1;
        lVar7 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      goto LAB_14157d72d;
    }
    TBaseDelegate<void,enum_ECheckBoxState>::ExecuteIfBound(plVar6,0);
    if ((*(int *)(param_1 + 0x40) == 0) || (plVar8 = (longlong *)*plVar6, plVar8 == (longlong *)0x0)
       ) goto LAB_14157d72d;
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    if (*plVar6 != 0) {
      lVar7 = FMemory::Realloc(*plVar6,0,0);
      *plVar6 = lVar7;
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
LAB_14157d72d:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2);
  return;
}



// FUNCTION 14157d750 FUN_14157d750 body=274 status=ok
// SIG undefined FUN_14157d750(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14157d750(undefined8 param_1,undefined8 *param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_94;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  FWeakObjectPtr::operator=(&local_98,param_1);
  uVar1 = *param_2;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x28,local_78);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144c7e3e8;
    puVar2[1] = param_1;
    *(undefined4 *)(puVar2 + 2) = local_98;
    *(undefined4 *)((longlong)puVar2 + 0x14) = local_94;
    puVar2[3] = uVar1;
    *(undefined1 *)(puVar2 + 4) = param_3;
    *(undefined1 *)((longlong)puVar2 + 0x21) = param_4;
  }
  local_88[0] = &LAB_141558930;
  FUN_14208c260(param_1,local_88);
  if (local_48 != 0) {
    plVar3 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar3 = local_58;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14157d870 FUN_14157d870 body=55 status=ok
// SIG undefined FUN_14157d870(void)

undefined4 FUN_14157d870(char param_1)

{
  if (param_1 != '\0') {
    if (param_1 == '\x01') {
      return 0x41;
    }
    if (param_1 == '\x02') {
      return 0x54;
    }
    if (param_1 == '\x04') {
      return 0x43;
    }
    if (param_1 == '\b') {
      return 0x47;
    }
  }
  return 0x2d;
}



// FUNCTION 14157d8b0 FUN_14157d8b0 body=609 status=ok
// SIG undefined FUN_14157d8b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14157d8b0(longlong param_1,longlong *param_2,longlong param_3)

{
  short *_Src;
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  short *psVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_118 [32];
  short *local_f8;
  int local_f0;
  undefined4 local_ec;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8 [2];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [16];
  longlong local_58 [4];
  
  local_58[2] = DAT_1468387a8 ^ (ulonglong)auStack_118;
  cVar1 = *(char *)(param_1 + 0x40) + 'A';
  local_f8 = (short *)0x0;
  local_ec = 0;
  iVar8 = 0;
  if (cVar1 != '\0') {
    local_f0 = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
    *local_f8 = (short)cVar1;
    local_f8[1] = 0;
    iVar8 = local_f0;
  }
  _Src = local_f8;
  lVar7 = *(longlong *)(param_1 + 0x38);
  *param_2 = 0;
  param_2[1] = 0;
  local_e8 = (void *)0x0;
  local_e0 = iVar8;
  if (iVar8 == 0) {
    local_dc = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e8,iVar8,0);
    _guard_xfg_dispatch_icall_nop(local_e8,_Src,(longlong)iVar8 * 2);
  }
  FStringFormatArg::FStringFormatArg(local_a8,&local_e8);
  local_d8 = 0;
  local_d0 = 0;
  FString::AppendInt(&local_d8,*(undefined4 *)(param_1 + 0x44));
  FStringFormatArg::FStringFormatArg(local_88,&local_d8);
  local_c8 = 0;
  local_c0 = 0;
  FString::AppendInt(&local_c8,(longlong)((double)(lVar7 - param_3) * 0.0001) & 0xffffffff);
  FStringFormatArg::FStringFormatArg(local_68,&local_c8);
  lVar7 = 3;
  local_f8 = (short *)0x0;
  local_f0 = 3;
  TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(&local_f8,3,0);
  puVar4 = local_a8;
  iVar8 = 3;
  psVar6 = local_f8;
  do {
    FStringFormatArg::FStringFormatArg(psVar6,puVar4);
    psVar6 = psVar6 + 0x10;
    puVar4 = puVar4 + 0x20;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  puVar2 = (undefined8 *)FString::Format(local_b8,L"{0}{1}+;{2}",&local_f8);
  iVar8 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar8 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar8 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar8);
  }
  puVar3 = (undefined8 *)((longlong)iVar8 * 0x10 + *param_2);
  *puVar3 = 0;
  *puVar3 = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)((longlong)puVar3 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  if (local_b8[0] != 0) {
    FMemory::Free();
  }
  if (local_f0 != 0) {
    plVar5 = (longlong *)(local_f8 + 8);
    iVar8 = local_f0;
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 4;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (local_f8 != (short *)0x0) {
    FMemory::Free();
  }
  puVar4 = &stack0xffffffffffffffc8;
  do {
    plVar5 = (longlong *)(puVar4 + -0x20);
    puVar4 = puVar4 + -0x20;
    lVar7 = lVar7 + -1;
    if (*plVar5 != 0) {
      FMemory::Free();
    }
  } while (lVar7 != 0);
  if (_Src != (short *)0x0) {
    FMemory::Free(_Src);
  }
  return param_2;
}



// FUNCTION 14157db20 FUN_14157db20 body=609 status=ok
// SIG undefined FUN_14157db20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14157db20(longlong param_1,longlong *param_2,longlong param_3)

{
  short *_Src;
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  short *psVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_118 [32];
  short *local_f8;
  int local_f0;
  undefined4 local_ec;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8 [2];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [16];
  longlong local_58 [4];
  
  local_58[2] = DAT_1468387a8 ^ (ulonglong)auStack_118;
  cVar1 = *(char *)(param_1 + 0x40) + 'A';
  local_f8 = (short *)0x0;
  local_ec = 0;
  iVar8 = 0;
  if (cVar1 != '\0') {
    local_f0 = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
    *local_f8 = (short)cVar1;
    local_f8[1] = 0;
    iVar8 = local_f0;
  }
  _Src = local_f8;
  lVar7 = *(longlong *)(param_1 + 0x38);
  *param_2 = 0;
  param_2[1] = 0;
  local_e8 = (void *)0x0;
  local_e0 = iVar8;
  if (iVar8 == 0) {
    local_dc = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e8,iVar8,0);
    _guard_xfg_dispatch_icall_nop(local_e8,_Src,(longlong)iVar8 * 2);
  }
  FStringFormatArg::FStringFormatArg(local_a8,&local_e8);
  local_d8 = 0;
  local_d0 = 0;
  FString::AppendInt(&local_d8,*(undefined4 *)(param_1 + 0x44));
  FStringFormatArg::FStringFormatArg(local_88,&local_d8);
  local_c8 = 0;
  local_c0 = 0;
  FString::AppendInt(&local_c8,(longlong)((double)(lVar7 - param_3) * 0.0001) & 0xffffffff);
  FStringFormatArg::FStringFormatArg(local_68,&local_c8);
  lVar7 = 3;
  local_f8 = (short *)0x0;
  local_f0 = 3;
  TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(&local_f8,3,0);
  puVar4 = local_a8;
  iVar8 = 3;
  psVar6 = local_f8;
  do {
    FStringFormatArg::FStringFormatArg(psVar6,puVar4);
    psVar6 = psVar6 + 0x10;
    puVar4 = puVar4 + 0x20;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  puVar2 = (undefined8 *)FString::Format(local_b8,L"{0}{1}-;{2}",&local_f8);
  iVar8 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar8 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar8 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar8);
  }
  puVar3 = (undefined8 *)((longlong)iVar8 * 0x10 + *param_2);
  *puVar3 = 0;
  *puVar3 = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)((longlong)puVar3 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  if (local_b8[0] != 0) {
    FMemory::Free();
  }
  if (local_f0 != 0) {
    plVar5 = (longlong *)(local_f8 + 8);
    iVar8 = local_f0;
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 4;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (local_f8 != (short *)0x0) {
    FMemory::Free();
  }
  puVar4 = &stack0xffffffffffffffc8;
  do {
    plVar5 = (longlong *)(puVar4 + -0x20);
    puVar4 = puVar4 + -0x20;
    lVar7 = lVar7 + -1;
    if (*plVar5 != 0) {
      FMemory::Free();
    }
  } while (lVar7 != 0);
  if (_Src != (short *)0x0) {
    FMemory::Free(_Src);
  }
  return param_2;
}



// FUNCTION 14157dd90 FUN_14157dd90 body=1134 status=ok
// SIG undefined FUN_14157dd90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14157dd90(longlong param_1,longlong *param_2,longlong param_3)

{
  short *_Src;
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  short *psVar8;
  longlong lVar9;
  short *_Src_00;
  int iVar10;
  int iVar11;
  undefined1 auStack_138 [32];
  short *local_118;
  int local_110;
  undefined4 local_10c;
  int local_108;
  void *local_100;
  int local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  ulonglong local_c8;
  longlong local_c0 [3];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [16];
  longlong local_58 [4];
  
  local_58[2] = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_118 = (short *)0x0;
  local_10c = 0;
  cVar1 = *(char *)(param_1 + 0x48) + 'A';
  _Src_00 = (short *)0x0;
  iVar10 = 0;
  local_d0 = param_1;
  if (cVar1 != '\0') {
    local_110 = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
    *local_118 = (short)cVar1;
    local_118[1] = 0;
    _Src_00 = local_118;
    iVar10 = local_110;
  }
  cVar1 = *(char *)(param_1 + 0x50) + 'A';
  local_118 = (short *)0x0;
  local_108 = 0;
  local_10c = 0;
  if (cVar1 != '\0') {
    local_110 = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
    local_108 = local_110;
    *local_118 = (short)cVar1;
    local_118[1] = 0;
  }
  _Src = local_118;
  lVar9 = *(longlong *)(param_1 + 0x38);
  *param_2 = 0;
  param_2[1] = 0;
  local_100 = (void *)0x0;
  uVar4 = (ulonglong)((double)(lVar9 - param_3) * 0.0001);
  local_f8 = iVar10;
  local_c8 = uVar4;
  if (iVar10 == 0) {
    local_f4 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_100,iVar10,0);
    _guard_xfg_dispatch_icall_nop(local_100,_Src_00,(longlong)iVar10 * 2);
  }
  FStringFormatArg::FStringFormatArg(local_a8,&local_100);
  local_f0 = 0;
  local_e8 = 0;
  FString::AppendInt(&local_f0,*(undefined4 *)(param_1 + 0x4c));
  FStringFormatArg::FStringFormatArg(local_88,&local_f0);
  local_e0 = 0;
  local_d8 = 0;
  FString::AppendInt(&local_e0,uVar4 & 0xffffffff);
  FStringFormatArg::FStringFormatArg(local_68,&local_e0);
  lVar9 = 3;
  local_118 = (short *)0x0;
  local_110 = 3;
  TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(&local_118,3,0);
  puVar5 = local_a8;
  iVar11 = 3;
  psVar8 = local_118;
  iVar10 = iVar11;
  do {
    FStringFormatArg::FStringFormatArg(psVar8,puVar5);
    psVar8 = psVar8 + 0x10;
    puVar5 = puVar5 + 0x20;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  puVar2 = (undefined8 *)FString::Format(local_c0,L"{0}{1}-;{2}",&local_118);
  iVar10 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar10 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar10 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar10);
  }
  puVar3 = (undefined8 *)((longlong)iVar10 * 0x10 + *param_2);
  *puVar3 = 0;
  *puVar3 = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)((longlong)puVar3 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  if (local_c0[0] != 0) {
    FMemory::Free();
  }
  if (local_110 != 0) {
    plVar7 = (longlong *)(local_118 + 8);
    iVar10 = local_110;
    do {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 4;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  if (local_118 != (short *)0x0) {
    FMemory::Free();
  }
  lVar6 = 3;
  puVar5 = &stack0xffffffffffffffc8;
  do {
    plVar7 = (longlong *)(puVar5 + -0x20);
    puVar5 = puVar5 + -0x20;
    lVar6 = lVar6 + -1;
    if (*plVar7 != 0) {
      FMemory::Free();
    }
  } while (lVar6 != 0);
  lVar6 = (longlong)local_108;
  local_100 = (void *)0x0;
  local_f8 = local_108;
  if (local_108 == 0) {
    local_f4 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_100,local_108,0);
    _guard_xfg_dispatch_icall_nop(local_100,_Src,lVar6 * 2);
  }
  FStringFormatArg::FStringFormatArg(local_a8,&local_100);
  local_e0 = 0;
  local_d8 = 0;
  FString::AppendInt(&local_e0,*(undefined4 *)(local_d0 + 0x54));
  FStringFormatArg::FStringFormatArg(local_88,&local_e0);
  local_f0 = 0;
  local_e8 = 0;
  FString::AppendInt(&local_f0,local_c8 & 0xffffffff);
  FStringFormatArg::FStringFormatArg(local_68,&local_f0);
  local_118 = (short *)0x0;
  local_110 = 3;
  TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(&local_118,3,0);
  puVar5 = local_a8;
  psVar8 = local_118;
  do {
    FStringFormatArg::FStringFormatArg(psVar8,puVar5);
    psVar8 = psVar8 + 0x10;
    puVar5 = puVar5 + 0x20;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  puVar2 = (undefined8 *)FString::Format(local_c0,L"{0}{1}+;{2}",&local_118);
  lVar6 = param_2[1];
  iVar10 = (int)lVar6 + 1;
  *(int *)(param_2 + 1) = iVar10;
  if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2);
  }
  puVar3 = (undefined8 *)((longlong)(int)lVar6 * 0x10 + *param_2);
  *puVar3 = 0;
  *puVar3 = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)((longlong)puVar3 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  if (local_c0[0] != 0) {
    FMemory::Free();
  }
  if (local_110 != 0) {
    plVar7 = (longlong *)(local_118 + 8);
    iVar10 = local_110;
    do {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 4;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  if (local_118 != (short *)0x0) {
    FMemory::Free();
  }
  puVar5 = &stack0xffffffffffffffc8;
  do {
    plVar7 = (longlong *)(puVar5 + -0x20);
    puVar5 = puVar5 + -0x20;
    lVar9 = lVar9 + -1;
    if (*plVar7 != 0) {
      FMemory::Free();
    }
  } while (lVar9 != 0);
  if (_Src != (short *)0x0) {
    FMemory::Free(_Src);
  }
  if (_Src_00 != (short *)0x0) {
    FMemory::Free(_Src_00);
  }
  return param_2;
}



// FUNCTION 14157e200 FUN_14157e200 body=1315 status=ok
// SIG undefined FUN_14157e200(void)

void FUN_14157e200(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined4 local_res20;
  undefined4 local_res24;
  longlong local_108 [2];
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a8 [104];
  
  if (*(char *)(param_1 + 0x38) != '\x10') {
    return;
  }
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x7c);
  if (cVar6 == '\0') {
    return;
  }
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x6c);
  if (cVar6 == '\0') {
    return;
  }
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x74);
  if (cVar6 == '\0') {
    return;
  }
  FUN_141580830(param_1 + 0x110);
  lVar7 = FWeakObjectPtr::Get(param_1 + 0x7c);
  fVar12 = (float)((int)ROUND((*(float *)(lVar7 + 0xac) + *(float *)(lVar7 + 0xac)) - 0.5) >> 1);
  if (ABS(fVar12) <= 1e-08) {
    return;
  }
  if (fVar12 <= 0.0) {
    return;
  }
  fVar12 = *(float *)(param_1 + 0x150) / fVar12;
  fVar13 = 0.0;
  if ((0.0 <= fVar12) && (fVar13 = fVar12, 1.0 <= fVar12)) {
    fVar13 = 1.0;
  }
  lVar7 = FWeakObjectPtr::Get(param_1 + 0x6c);
  fVar12 = *(float *)(lVar7 + 0x184);
  if (ABS(fVar13 - fVar12) <= 1e-08) {
    return;
  }
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0xec);
  if (cVar6 != '\0') {
    if (fVar13 <= fVar12) {
      if (fVar12 <= fVar13) goto LAB_14157e3aa;
      plVar8 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xec);
      puVar11 = &local_c8;
      local_c8 = 0;
      local_c0 = 0;
      uVar9 = DAT_1468a6880;
    }
    else {
      plVar8 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xec);
      puVar11 = &local_d8;
      local_d8 = 0;
      local_d0 = 0;
      uVar9 = DAT_1468a6878;
    }
    (**(code **)(*plVar8 + 0x4e8))(plVar8,uVar9,puVar11);
  }
LAB_14157e3aa:
  if (ABS(fVar12 - 1.0) <= 1e-08) {
    local_108[0] = 0;
    local_108[1] = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108,0);
    FGenericPlatformString::Memcpy(local_108[0],&DAT_144c7d4a0,8);
    uVar9 = FWeakObjectPtr::Get(param_1 + 0x74);
    FUN_142088910(uVar9,local_108);
    if (local_108[0] != 0) {
      FMemory::Free();
    }
  }
  FWeakObjectPtr::operator=(&local_res18,param_1);
  FWeakObjectPtr::operator=(&local_res20,param_1);
  fVar3 = *(float *)(param_1 + 0x44);
  plVar8 = (longlong *)FUN_141580d60(local_b8);
  *(double *)(*plVar8 + 8) = (double)fVar3;
  fVar3 = *(float *)(param_1 + 0x40);
  lVar10 = FUN_1415514e0(plVar8,local_a8,fVar12,fVar13,1);
  *(double *)(*(longlong *)(lVar10 + 0x18) + 8) = (double)fVar3;
  lVar7 = *(longlong *)(lVar10 + 0x18);
  plVar8 = (longlong *)operator_new(0x28);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_FUN_144c7e5a0;
    plVar8[2] = (longlong)&PTR_FUN_144c7e3c8;
    plVar8[3] = param_1;
    *(undefined4 *)(plVar8 + 4) = local_res20;
    *(undefined4 *)((longlong)plVar8 + 0x24) = local_res24;
  }
  local_f8 = plVar8 + 2;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(lVar7 + 0x38);
  local_f0 = plVar8;
  if (*(longlong **)(lVar7 + 0x40) == plVar5) {
    FUN_141550e20(lVar7 + 0x30,plVar5,&local_f8);
    plVar5 = local_f0;
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_f0 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_f0 + 8))();
        }
      }
    }
  }
  else {
    *plVar5 = (longlong)local_f8;
    plVar5[1] = (longlong)plVar8;
    *(longlong *)(lVar7 + 0x38) = *(longlong *)(lVar7 + 0x38) + 0x10;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar8 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  lVar7 = *(longlong *)(lVar10 + 8);
  plVar8 = (longlong *)operator_new(0x30);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_FUN_144c7e580;
    plVar8[2] = (longlong)&PTR_FUN_144c7e3d8;
    *(float *)(plVar8 + 3) = fVar13;
    plVar8[4] = param_1;
    *(undefined4 *)(plVar8 + 5) = local_res18;
    *(undefined4 *)((longlong)plVar8 + 0x2c) = local_res1c;
  }
  local_e8 = plVar8 + 2;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(lVar7 + 0x88);
  local_e0 = plVar8;
  if (*(longlong **)(lVar7 + 0x90) == plVar5) {
    FUN_141551020(lVar7 + 0x80,plVar5,&local_e8);
    plVar5 = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e0 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_e0 + 8))();
        }
      }
    }
  }
  else {
    *plVar5 = (longlong)local_e8;
    plVar5[1] = (longlong)plVar8;
    *(longlong *)(lVar7 + 0x88) = *(longlong *)(lVar7 + 0x88) + 0x10;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar8 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  std::shared_ptr<gte::ETManifoldMesh::Triangle>::operator=(param_1 + 0x110,lVar10 + 8);
  FUN_141552790(local_a8);
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_b0 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)local_b0 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0);
      }
    }
  }
  FUN_141580fb0(param_1 + 0x110);
  return;
}



// FUNCTION 14157e730 FUN_14157e730 body=1087 status=ok
// SIG undefined FUN_14157e730(void)

void FUN_14157e730(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined4 local_res20;
  undefined4 local_res24;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong *local_a8 [2];
  undefined1 local_98 [8];
  longlong *local_90;
  undefined **local_88 [2];
  longlong *local_78;
  longlong *local_68;
  
  *(undefined1 *)(param_1 + 0x889) = 1;
  pplVar3 = (longlong **)(param_1 + 0x878);
  lVar10 = *param_2;
  lVar8 = param_2[1];
  plVar9 = (longlong *)FMemory::Realloc(0,0x30);
  local_a8[0] = plVar9;
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar9 + 1,param_1);
    plVar9[2] = lVar10;
    plVar9[3] = lVar8;
    lVar10 = FDelegateHandle::GenerateNewID();
    plVar9[5] = lVar10;
    *plVar9 = (longlong)&PTR_FUN_143f77bd0;
  }
  if (local_a8 != pplVar3) {
    if (plVar9 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 0x880) != 0) && (plVar11 = *pplVar3, plVar11 != (longlong *)0x0)) {
        (**(code **)(*plVar11 + 0x28))(plVar11,0);
        if (*pplVar3 != (longlong *)0x0) {
          plVar11 = (longlong *)FMemory::Realloc(*pplVar3,0,0);
          *pplVar3 = plVar11;
        }
        *(undefined4 *)(param_1 + 0x880) = 0;
      }
    }
    else {
      (**(code **)(*plVar9 + 0x30))(plVar9,pplVar3);
    }
  }
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9,0);
    local_a8[0] = (longlong *)FMemory::Realloc(plVar9,0,0);
    if (local_a8[0] != (longlong *)0x0) {
      FMemory::Free(local_a8[0]);
    }
  }
  uVar6 = *(undefined4 *)(param_1 + 0x874);
  uVar7 = *(undefined4 *)(param_1 + 0x870);
  FWeakObjectPtr::operator=(&local_res20,param_1);
  FWeakObjectPtr::operator=(&local_d8,param_1);
  fVar4 = *(float *)(param_1 + 0x6ac);
  plVar9 = (longlong *)FUN_141580d60(local_98);
  *(double *)(*plVar9 + 8) = (double)fVar4;
  local_b0 = FUN_141551360(plVar9,local_88,0,param_3,1);
  lVar10 = *(longlong *)(local_b0 + 0x18);
  plVar9 = (longlong *)operator_new(0x30);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_FUN_144c7e580;
    plVar9[2] = (longlong)&PTR_FUN_144c7e4d0;
    plVar9[3] = param_1;
    *(undefined4 *)(plVar9 + 4) = local_d8;
    *(undefined4 *)((longlong)plVar9 + 0x24) = local_d4;
    *(undefined4 *)(plVar9 + 5) = uVar6;
    *(undefined4 *)((longlong)plVar9 + 0x2c) = uVar7;
  }
  local_d0 = plVar9 + 2;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  plVar11 = *(longlong **)(lVar10 + 0x38);
  local_c8 = plVar9;
  if (*(longlong **)(lVar10 + 0x40) == plVar11) {
    FUN_141550e20(lVar10 + 0x30,plVar11,&local_d0);
    plVar11 = local_c8;
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c8 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_c8)(local_c8);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_c8 + 8))();
        }
      }
    }
  }
  else {
    *plVar11 = (longlong)local_d0;
    plVar11[1] = (longlong)plVar9;
    *(longlong *)(lVar10 + 0x38) = *(longlong *)(lVar10 + 0x38) + 0x10;
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar9 + 1;
    lVar10 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  lVar8 = local_b0;
  lVar10 = *(longlong *)(local_b0 + 8);
  plVar9 = (longlong *)operator_new(0x38);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_FUN_144c7e5c0;
    plVar9[2] = (longlong)&PTR_FUN_144c7e4e0;
    plVar9[3] = param_1;
    *(undefined4 *)(plVar9 + 4) = local_res20;
    *(undefined4 *)((longlong)plVar9 + 0x24) = local_res24;
    *(undefined4 *)(plVar9 + 6) = param_3;
    *(undefined4 *)(plVar9 + 5) = uVar6;
    *(undefined4 *)((longlong)plVar9 + 0x2c) = uVar7;
  }
  local_c0 = plVar9 + 2;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  plVar11 = *(longlong **)(lVar10 + 0x88);
  local_b8 = plVar9;
  if (*(longlong **)(lVar10 + 0x90) == plVar11) {
    FUN_141551020(lVar10 + 0x80,plVar11,&local_c0);
    plVar11 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b8 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_b8 + 8))();
        }
      }
    }
  }
  else {
    *plVar11 = (longlong)local_c0;
    plVar11[1] = (longlong)plVar9;
    *(longlong *)(lVar10 + 0x88) = *(longlong *)(lVar10 + 0x88) + 0x10;
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar9 + 1;
    lVar10 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  std::shared_ptr<gte::ETManifoldMesh::Triangle>::operator=(param_1 + 0x838,lVar8 + 8);
  local_88[0] = &PTR_FUN_144c7dde0;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_68 + 1;
    lVar10 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)local_68 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_68 + 8))(local_68);
      }
    }
  }
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_78 + 1;
    lVar10 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)local_78 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_78 + 8))(local_78);
      }
    }
  }
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_90 + 1;
    lVar10 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_90 + 8))(local_90);
      }
    }
  }
  FUN_141580fb0(param_1 + 0x838);
  return;
}



// FUNCTION 14157eb70 FUN_14157eb70 body=80 status=ok
// SIG undefined FUN_14157eb70(void)

void FUN_14157eb70(void)

{
  longlong lVar1;
  
  if (*(longlong *)(DAT_1468a64a8 + 0xa8) != 0) {
    lVar1 = FWeakObjectPtr::Get(*(longlong *)(DAT_1468a64a8 + 0xa8) + 0x48);
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x82a) = 0;
      if (*(longlong *)(lVar1 + 0x6e0) != 0) {
        FUN_14155a3a0(*(longlong *)(lVar1 + 0x6e0),*(char *)(lVar1 + 0x82f) != '\0');
        return;
      }
    }
  }
  return;
}



// FUNCTION 14157ebc0 FUN_14157ebc0 body=65 status=ok
// SIG undefined FUN_14157ebc0(void)

void FUN_14157ebc0(void)

{
  longlong lVar1;
  
  if (*(longlong *)(DAT_1468a64a8 + 0xa8) != 0) {
    lVar1 = FWeakObjectPtr::Get(*(longlong *)(DAT_1468a64a8 + 0xa8) + 0x48);
    if ((lVar1 != 0) && (*(undefined1 *)(lVar1 + 0x82b) = 0, *(char *)(lVar1 + 0x6c0) == '\x04')) {
      *(undefined1 *)(lVar1 + 0x6c0) = 5;
    }
  }
  return;
}



// FUNCTION 14157ec10 FUN_14157ec10 body=337 status=ok
// SIG undefined FUN_14157ec10(void)

void FUN_14157ec10(longlong *param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  if ((((DAT_1468a64a8 != 0) ||
       ((lVar1 = FUN_14155cb80(), lVar1 != 0 && (FUN_14155ee30(lVar1), DAT_1468a64a8 != 0)))) &&
      (lVar1 = DAT_1468a64a8, param_1 != (longlong *)0x0)) &&
     (*(longlong *)(DAT_1468a64a8 + 0xb0) != 0)) {
    (**(code **)(*param_1 + 0x148))(param_1);
    lVar2 = *(longlong *)(lVar1 + 0xb0);
    uVar4 = 0;
    plVar5 = *(longlong **)(lVar2 + 0x38);
    uVar6 = (longlong)*(int *)(lVar2 + 0x40) & 0x1fffffffffffffff;
    if (plVar5 + *(int *)(lVar2 + 0x40) < plVar5) {
      uVar6 = uVar4;
    }
    uVar3 = uVar4;
    if (uVar6 != 0) {
      do {
        if ((param_2 != '\0') && (*(longlong *)(*plVar5 + 0x130) == param_1[0x14b])) {
          thunk_FUN_14145e850(param_1);
        }
        plVar5 = plVar5 + 1;
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar6);
      lVar2 = *(longlong *)(lVar1 + 0xb0);
    }
    plVar5 = *(longlong **)(lVar2 + 0x48);
    uVar6 = (longlong)*(int *)(lVar2 + 0x50) & 0x1fffffffffffffff;
    if (plVar5 + *(int *)(lVar2 + 0x50) < plVar5) {
      uVar6 = uVar4;
    }
    if (uVar6 != 0) {
      do {
        if ((param_2 != '\0') && (*(longlong *)(*plVar5 + 0x130) == param_1[0x14b])) {
          thunk_FUN_14145e850(param_1);
        }
        plVar5 = plVar5 + 1;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar6);
    }
  }
  return;
}



// FUNCTION 14157ed70 FUN_14157ed70 body=219 status=ok
// SIG undefined FUN_14157ed70(void)

void FUN_14157ed70(longlong param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 0x6e0) != 0) {
    iVar5 = 0;
    iVar2 = FUN_142eb7440();
    if (0 < iVar2) {
      lVar6 = 0;
      do {
        lVar3 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x6e0),iVar5);
        if (lVar3 != 0) {
          lVar4 = FUN_1415838e0();
          iVar2 = *(int *)(lVar4 + 0x90);
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < iVar2) ||
             (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)iVar2 * 8)
              != lVar4 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            FUN_142ed3c20(lVar3,CONCAT71((int7)(int3)((uint)iVar2 >> 8),
                                         param_2 < *(int *)(*(longlong *)
                                                             (*(longlong *)(param_1 + 0x6d8) + 0x30)
                                                            + 0x70 + lVar6)),1);
          }
        }
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 0x90;
        iVar2 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x6e0));
      } while (iVar5 < iVar2);
    }
  }
  return;
}



// FUNCTION 14157ee50 FUN_14157ee50 body=163 status=ok
// SIG undefined FUN_14157ee50(void)

void FUN_14157ee50(longlong param_1,undefined8 param_2,char param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_res8;
  
  local_res8 = param_1;
  if (*(char *)(param_1 + 0x380) == param_3) {
    FUN_141555020(&local_res8,param_4);
    return;
  }
  FUN_142ed2820(param_1,param_3,1);
  if (param_3 == '\0') {
    if (*(longlong **)(param_1 + 0x348) != (longlong *)0x0) {
      lVar1 = **(longlong **)(param_1 + 0x348);
      uVar2 = FUN_1404b03b0();
      (**(code **)(lVar1 + 0x2b0))(*(undefined8 *)(param_1 + 0x348),uVar2,1,0);
    }
  }
  else {
    FUN_141555020(&local_res8,param_4);
  }
  *(char *)(param_1 + 0x380) = param_3;
  return;
}



// FUNCTION 14157ef00 FUN_14157ef00 body=132 status=ok
// SIG undefined FUN_14157ef00(void)

void FUN_14157ef00(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong local_18 [2];
  
  if (((*(longlong *)(param_1 + 0x6c8) != 0) && (DAT_1468a64a8 != 0)) &&
     (lVar1 = FUN_140e971d0(), lVar1 != 0)) {
    lVar1 = FUN_140cff230();
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = *(undefined4 *)(lVar1 + 0x22c);
    }
    local_18[0] = 0;
    local_18[1] = 0;
    FString::AppendInt(local_18,uVar2);
    (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x2a8))
              (*(longlong **)(param_1 + 0x6c8),local_18,1,0);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14157ef90 FUN_14157ef90 body=2653 status=ok
// SIG undefined FUN_14157ef90(void)

void FUN_14157ef90(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  
  local_d0 = 0xd;
  plVar5 = (longlong *)0x0;
  local_d8 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Memcpy(local_d8,L"PNL_Controls",0x1a);
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  lVar2 = FUN_140e96f30(param_1,&local_d8,0,6,&local_e8);
  plVar8 = local_e8;
  for (iVar7 = (int)local_e0; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free(local_e8);
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (lVar2 != 0) {
    local_f8 = (undefined8 *)0x0;
    local_f0 = 0x19;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
    FGenericPlatformString::Memcpy(local_f8,L"Gamepad_LeftThumbstick_1",0x32);
    cVar1 = DAT_1468c21f8;
    local_58 = 0;
    local_50 = 0x1b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"PNL_Preview_Controller_Ps4",0x36);
    local_68 = (longlong *)0x0;
    local_60 = 0;
    plVar3 = (longlong *)FUN_140ecbdf0(lVar2,&local_58,0,6,&local_68);
    plVar8 = local_68;
    for (iVar7 = (int)local_60; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free(local_68);
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar5;
    if (plVar3 != (longlong *)0x0) {
      if ((byte)(cVar1 - 2U) < 2) {
        (**(code **)(*plVar3 + 0x278))(plVar3,1);
        plVar8 = plVar3;
        if (local_f8 != (undefined8 *)&DAT_144c72180) {
          uVar6 = local_f0._4_4_;
          local_f0 = (ulonglong)local_f0._4_4_ << 0x20;
          plVar3 = plVar5;
          if (uVar6 != 0x19) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_f8,0x19);
            plVar3 = (longlong *)(local_f0 & 0xffffffff);
            uVar6 = local_f0._4_4_;
          }
          iVar7 = (int)plVar3 + 0x19;
          local_f0 = CONCAT44(local_f0._4_4_,iVar7);
          if ((int)uVar6 < iVar7) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8);
          }
          *local_f8 = 0x65006d00610047;
          local_f8[1] = 0x5f006400610070;
          local_f8[2] = 0x7400660065004c;
          local_f8[3] = 0x6d007500680054;
          *(undefined4 *)(local_f8 + 4) = 0x730062;
          *(undefined4 *)((longlong)local_f8 + 0x24) = 0x690074;
          *(undefined4 *)(local_f8 + 5) = 0x6b0063;
          *(undefined4 *)((longlong)local_f8 + 0x2c) = 0x32005f;
          *(undefined2 *)(local_f8 + 6) = 0;
        }
      }
      else {
        (**(code **)(*plVar3 + 0x278))(plVar3,0);
      }
    }
    local_88 = (longlong *)0x0;
    local_80 = 0x1b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    FGenericPlatformString::Memcpy(local_88,L"PNL_Preview_Controller_Ps5",0x36);
    local_98 = (longlong *)0x0;
    local_90 = 0;
    plVar4 = (longlong *)FUN_140ecbdf0(lVar2,&local_88,0,6,&local_98);
    plVar3 = local_98;
    for (iVar7 = (int)local_90; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free(local_98);
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x278))(plVar4,0);
    }
    local_98 = (longlong *)0x0;
    local_90 = 0x23;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    FGenericPlatformString::Memcpy(local_98,L"PNL_Preview_Controller_NintendoPro",0x46);
    local_88 = (longlong *)0x0;
    local_80 = 0;
    plVar4 = (longlong *)FUN_140ecbdf0(lVar2,&local_98,0,6,&local_88);
    plVar3 = local_88;
    for (iVar7 = (int)local_80; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free(local_88);
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (plVar4 != (longlong *)0x0) {
      if (cVar1 == '\b') {
        (**(code **)(*plVar4 + 0x278))(plVar4,1);
        plVar8 = plVar4;
      }
      else {
        (**(code **)(*plVar4 + 0x278))(plVar4,0);
      }
    }
    local_38 = 0;
    local_30 = 0x1e;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"PNL_Preview_Controller_Stadia",0x3c);
    local_48 = (longlong *)0x0;
    local_40 = 0;
    plVar4 = (longlong *)FUN_140ecbdf0(lVar2,&local_38,0,6,&local_48);
    plVar3 = local_48;
    for (iVar7 = (int)local_40; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
    if (local_38 != 0) {
      FMemory::Free();
    }
    if (plVar4 != (longlong *)0x0) {
      if (cVar1 == '\t') {
        (**(code **)(*plVar4 + 0x278))(plVar4,1);
        plVar8 = plVar4;
        if (local_f8 != (undefined8 *)&DAT_144c72330) {
          uVar6 = local_f0._4_4_;
          local_f0 = (ulonglong)local_f0._4_4_ << 0x20;
          if (uVar6 != 0x19) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_f8,0x19);
            plVar5 = (longlong *)(local_f0 & 0xffffffff);
            uVar6 = local_f0._4_4_;
          }
          iVar7 = (int)plVar5 + 0x19;
          local_f0 = CONCAT44(local_f0._4_4_,iVar7);
          if ((int)uVar6 < iVar7) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8);
          }
          *local_f8 = 0x65006d00610047;
          local_f8[1] = 0x5f006400610070;
          local_f8[2] = 0x7400660065004c;
          local_f8[3] = 0x6d007500680054;
          *(undefined4 *)(local_f8 + 4) = 0x730062;
          *(undefined4 *)((longlong)local_f8 + 0x24) = 0x690074;
          *(undefined4 *)(local_f8 + 5) = 0x6b0063;
          *(undefined4 *)((longlong)local_f8 + 0x2c) = 0x32005f;
          *(undefined2 *)(local_f8 + 6) = 0;
        }
      }
      else {
        (**(code **)(*plVar4 + 0x278))(plVar4,0);
      }
    }
    local_c8 = (longlong *)0x0;
    local_c0 = 0x1c;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
    FGenericPlatformString::Memcpy(local_c8,L"PNL_Preview_Controller_XBSX",0x38);
    local_78 = (longlong *)0x0;
    local_70 = 0;
    plVar3 = (longlong *)FUN_140ecbdf0(lVar2,&local_c8,0,6,&local_78);
    plVar5 = local_78;
    for (iVar7 = (int)local_70; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free(local_78);
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x278))(plVar3,0);
    }
    local_78 = (longlong *)0x0;
    local_70 = 0x1c;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"PNL_Preview_Controller_XBox",0x38);
    local_c8 = (longlong *)0x0;
    local_c0 = 0;
    plVar3 = (longlong *)FUN_140ecbdf0(lVar2,&local_78,0,6,&local_c8);
    plVar5 = local_c8;
    for (iVar7 = (int)local_c0; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free(local_c8);
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (plVar3 != (longlong *)0x0) {
      if (plVar8 == (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x278))(plVar3,1);
        plVar8 = plVar3;
      }
      else {
        (**(code **)(*plVar3 + 0x278))(plVar3,0);
      }
    }
    if (plVar8 != (longlong *)0x0) {
      local_e8 = (longlong *)0x0;
      local_e0 = 0x18;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
      FGenericPlatformString::Memcpy(local_e8,L"Gamepad_FaceButton_Left",0x30);
      local_d8 = (longlong *)0x0;
      local_d0 = 0;
      lVar2 = FUN_140ecbdf0(plVar8,&local_e8,0,6,&local_d8);
      plVar5 = local_d8;
      for (iVar7 = (int)local_d0; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 2;
      }
      if (local_d8 != (longlong *)0x0) {
        FMemory::Free(local_d8);
      }
      if (local_e8 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (lVar2 != 0) {
        local_a8 = (longlong *)0x0;
        local_a0 = 6;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
        FGenericPlatformString::Memcpy(local_a8,L"label",0xc);
        local_b8 = (longlong *)0x0;
        local_b0 = 0;
        plVar3 = (longlong *)FUN_140ecc7d0(lVar2,&local_a8,0,6,&local_b8);
        plVar5 = local_b8;
        for (iVar7 = (int)local_b0; iVar7 != 0; iVar7 = iVar7 + -1) {
          if (*plVar5 != 0) {
            FMemory::Free();
          }
          plVar5 = plVar5 + 2;
        }
        if (local_b8 != (longlong *)0x0) {
          FMemory::Free(local_b8);
        }
        if (local_a8 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x2b0))(plVar3,param_1 + 0x770,1,0);
        }
      }
      local_b8 = (longlong *)0x0;
      local_b0 = 0xf;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
      FGenericPlatformString::Memcpy(local_b8,L"Gamepad_DPad_1",0x1e);
      local_a8 = (longlong *)0x0;
      local_a0 = 0;
      lVar2 = FUN_140ecbdf0(plVar8,&local_b8,0,6,&local_a8);
      plVar5 = local_a8;
      for (iVar7 = (int)local_a0; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 2;
      }
      if (local_a8 != (longlong *)0x0) {
        FMemory::Free(local_a8);
      }
      if (local_b8 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (lVar2 != 0) {
        local_e8 = (longlong *)0x0;
        local_e0 = 6;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
        FGenericPlatformString::Memcpy(local_e8,L"label",0xc);
        local_d8 = (longlong *)0x0;
        local_d0 = 0;
        plVar3 = (longlong *)FUN_140ecc7d0(lVar2,&local_e8,0,6,&local_d8);
        plVar5 = local_d8;
        for (iVar7 = (int)local_d0; iVar7 != 0; iVar7 = iVar7 + -1) {
          if (*plVar5 != 0) {
            FMemory::Free();
          }
          plVar5 = plVar5 + 2;
        }
        if (local_d8 != (longlong *)0x0) {
          FMemory::Free(local_d8);
        }
        if (local_e8 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x2b0))(plVar3,param_1 + 0x788,1,0);
        }
      }
      local_a8 = (longlong *)0x0;
      local_a0 = 0;
      lVar2 = FUN_140ecbdf0(plVar8,&local_f8,0,6,&local_a8);
      plVar8 = local_a8;
      for (iVar7 = (int)local_a0; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 2;
      }
      if (local_a8 != (longlong *)0x0) {
        FMemory::Free(local_a8);
      }
      if (lVar2 != 0) {
        local_c8 = (longlong *)0x0;
        local_c0 = 6;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
        FGenericPlatformString::Memcpy(local_c8,L"label",0xc);
        local_b8 = (longlong *)0x0;
        local_b0 = 0;
        plVar5 = (longlong *)FUN_140ecc7d0(lVar2,&local_c8,0,6,&local_b8);
        plVar8 = local_b8;
        for (iVar7 = (int)local_b0; iVar7 != 0; iVar7 = iVar7 + -1) {
          if (*plVar8 != 0) {
            FMemory::Free();
          }
          plVar8 = plVar8 + 2;
        }
        if (local_b8 != (longlong *)0x0) {
          FMemory::Free(local_b8);
        }
        if (local_c8 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x2b0))(plVar5,param_1 + 0x788,1,0);
        }
      }
    }
    if (local_f8 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14157f9f0 FUN_14157f9f0 body=287 status=ok
// SIG undefined FUN_14157f9f0(void)

void FUN_14157f9f0(longlong param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 local_res8;
  undefined4 local_resc;
  
  uVar8 = param_2;
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar4 == '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0x24);
    uVar2 = *(undefined4 *)(param_1 + 0x28);
    uVar3 = *(undefined4 *)(param_1 + 0x20);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    *(undefined1 *)(param_2 + 0x70) = 1;
    lVar9 = (longlong)*(int *)(param_2 + 0x68);
    iVar6 = *(int *)(param_2 + 0x68) + 1;
    *(int *)(param_2 + 0x68) = iVar6;
    if (*(int *)(param_2 + 0x6c) < iVar6) {
      TArray<FLatentResponse::FExecutionInfo,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (param_2);
    }
    uVar8 = *(ulonglong *)(param_2 + 0x60);
    if (*(ulonglong *)(param_2 + 0x60) == 0) {
      uVar8 = param_2;
    }
    *(undefined4 *)(uVar8 + 8 + lVar9 * 0x18) = uVar3;
    *(undefined8 *)(uVar8 + lVar9 * 0x18) = uVar7;
    *(undefined4 *)(uVar8 + 0xc + lVar9 * 0x18) = uVar1;
    *(undefined4 *)(uVar8 + 0x10 + lVar9 * 0x18) = uVar2;
    return;
  }
  cVar4 = *(char *)(param_1 + 0x10);
  uVar8 = uVar8 & 0xffffffffffffff00;
  if (cVar4 == '\0') {
    uVar7 = FWeakObjectPtr::Get(param_1 + 8,uVar8);
    bVar5 = FUN_141564220(uVar7);
  }
  else {
    if (cVar4 != '\x01') {
      if (cVar4 == '\x02') {
        uVar7 = FWeakObjectPtr::Get(param_1 + 8,uVar8);
        bVar5 = FUN_141564220(uVar7);
        uVar8 = (ulonglong)(bVar5 ^ 1);
      }
      goto LAB_14157fa67;
    }
    uVar7 = FWeakObjectPtr::Get(param_1 + 8,uVar8);
    bVar5 = FUN_141564040(uVar7);
  }
  uVar8 = (ulonglong)bVar5;
LAB_14157fa67:
  local_res8 = *(undefined4 *)(param_1 + 0x24);
  local_resc = *(undefined4 *)(param_1 + 0x28);
  FLatentResponse::FinishAndTriggerIf
            (param_2,uVar8,*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),
             &local_res8);
  return;
}



// FUNCTION 14157fb10 FUN_14157fb10 body=171 status=ok
// SIG undefined FUN_14157fb10(void)

void FUN_14157fb10(longlong param_1)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  if (*(longlong *)(param_1 + 0x7a0) != 0) {
    FUN_142ed3c20(*(longlong *)(param_1 + 0x7a0),1);
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x7a0) + 0x170);
    (**(code **)(*plVar1 + 0x38))(plVar1,0);
    if (*(longlong *)(param_1 + 0x7a8) != 0) {
      local_18[0] = 0;
      local_18[1] = 0;
      FString::AppendInt(local_18,-((int)ROUND(-0.5 - (*(float *)(param_1 + 0x824) +
                                                      *(float *)(param_1 + 0x824))) >> 1));
      (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x2a8))
                (*(longlong **)(param_1 + 0x7a8),local_18,1,0);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 14157fbc0 FUN_14157fbc0 body=305 status=ok
// SIG undefined FUN_14157fbc0(void)

void FUN_14157fbc0(longlong param_1,char param_2)

{
  longlong local_18 [2];
  
  if (param_2 != *(char *)(param_1 + 0x7a0)) {
    *(char *)(param_1 + 0x7a0) = param_2;
    if (*(longlong *)(param_1 + 0x698) != 0) {
      if (param_2 == '\x01') {
        local_18[1] = 6;
        local_18[0] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
        FGenericPlatformString::Memcpy(local_18[0],L"Rules",0xc);
        FUN_142088cf0(*(undefined8 *)(param_1 + 0x698),local_18);
        if (local_18[0] != 0) {
          FMemory::Free();
        }
      }
      else if (param_2 == '\x02') {
        local_18[1] = 9;
        local_18[0] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
        FGenericPlatformString::Memcpy(local_18[0],L"Controls",0x12);
        FUN_142088cf0(*(undefined8 *)(param_1 + 0x698),local_18);
        if (local_18[0] != 0) {
          FMemory::Free();
        }
        FUN_14157ef90(param_1);
      }
    }
    if (*(longlong *)(param_1 + 0x680) != 0) {
      FUN_142ed2820(*(longlong *)(param_1 + 0x680),*(char *)(param_1 + 0x7a0) == '\x01',1);
    }
    if (*(longlong *)(param_1 + 0x688) != 0) {
      FUN_142ed2820(*(longlong *)(param_1 + 0x688),*(char *)(param_1 + 0x7a0) == '\x02',1);
      return;
    }
  }
  return;
}



// FUNCTION 14157fd00 FUN_14157fd00 body=22 status=ok
// SIG undefined FUN_14157fd00(void)

undefined8 * FUN_14157fd00(longlong param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_144c7e550;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return param_2;
}



// FUNCTION 14157fd20 FUN_14157fd20 body=14 status=ok
// SIG undefined FUN_14157fd20(void)

void FUN_14157fd20(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014157fd2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x10) + 0x10))(param_1 + 0x10,0);
  return;
}



// FUNCTION 14157fd30 FUN_14157fd30 body=378 status=ok
// SIG undefined FUN_14157fd30(void)

void FUN_14157fd30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *local_18;
  longlong *local_10;
  
  if (*(char *)(param_1 + 0xc0) == '\0') {
    iVar5 = _guard_xfg_dispatch_icall_nop(&DAT_1468a6a50);
    if (iVar5 != 0) {
      std::_guard_xfg_dispatch_icall_nop(iVar5);
    }
    local_10 = (longlong *)operator_new(200);
    if (local_10 == (longlong *)0x0) {
      local_10 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(local_10 + 1) = 1;
      *(undefined4 *)((longlong)local_10 + 0xc) = 1;
      *local_10 = (longlong)&PTR_FUN_144c7e080;
      FUN_141552210(local_10 + 2,param_1 + 0x10);
    }
    plVar3 = DAT_1468a6a40;
    local_18 = local_10 + 2;
    if (DAT_1468a6a48 == DAT_1468a6a40) {
      FUN_1415511e0(&DAT_1468a6a38,DAT_1468a6a40,&local_18);
      plVar3 = local_10;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_10 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_10 + 8))();
          }
        }
      }
    }
    else {
      *DAT_1468a6a40 = 0;
      *plVar3 = (longlong)local_18;
      plVar3[1] = (longlong)local_10;
      DAT_1468a6a40 = DAT_1468a6a40 + 2;
    }
    *(undefined1 *)(DAT_1468a6a40[-2] + 0xb0) = 1;
    iVar5 = _guard_xfg_dispatch_icall_nop(&DAT_1468a6a50);
    if (iVar5 != 0) {
      std::_guard_xfg_dispatch_icall_nop(iVar5);
    }
  }
  std::
  vector<std::shared_ptr<EOS_SessionDetailsHandle>,std::allocator<std::shared_ptr<EOS_SessionDetailsHandle>_>_>
  ::_Tidy(param_1 + 0xa8);
  *(undefined ***)(param_1 + 0x88) = &PTR__scalar_deleting_destructor__144c7db60;
  std::
  vector<std::shared_ptr<EOS_SessionDetailsHandle>,std::allocator<std::shared_ptr<EOS_SessionDetailsHandle>_>_>
  ::_Tidy(param_1 + 0x90);
  plVar3 = *(longlong **)(param_1 + 0x80);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3,plVar3 != (longlong *)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  std::
  vector<std::shared_ptr<EOS_SessionDetailsHandle>,std::allocator<std::shared_ptr<EOS_SessionDetailsHandle>_>_>
  ::_Tidy(param_1 + 0x30);
  return;
}



// FUNCTION 14157fed0 _Umove body=100 status=ok
// SIG undefined _Umove(void)

undefined8 *
std::
vector<std::shared_ptr<gte::ETManifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>
::_Umove(undefined8 param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  if (param_2 != param_3) {
    param_2 = param_2 - (longlong)param_4;
    do {
      *param_4 = 0;
      param_4[1] = 0;
      *param_4 = *(undefined8 *)(param_2 + (longlong)param_4);
      param_4[1] = *(undefined8 *)(param_2 + 8 + (longlong)param_4);
      *(undefined8 *)(param_2 + (longlong)param_4) = 0;
      *(undefined8 *)(param_2 + 8 + (longlong)param_4) = 0;
      param_4 = param_4 + 2;
    } while (param_2 + (longlong)param_4 != param_3);
  }
  _Destroy_range<std::allocator<std::shared_ptr<sio::message>_>_>(param_4,param_4,param_1);
  return param_4;
}



// FUNCTION 14157ff40 _Umove_if_noexcept body=75 status=ok
// SIG undefined _Umove_if_noexcept(void)

void std::
     vector<std::shared_ptr<gte::ETManifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>
     ::_Umove_if_noexcept(undefined8 param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  if (param_2 != param_3) {
    param_2 = param_2 - (longlong)param_4;
    do {
      *param_4 = 0;
      param_4[1] = 0;
      *param_4 = *(undefined8 *)(param_2 + (longlong)param_4);
      param_4[1] = *(undefined8 *)(param_2 + 8 + (longlong)param_4);
      *(undefined8 *)(param_2 + (longlong)param_4) = 0;
      *(undefined8 *)(param_2 + 8 + (longlong)param_4) = 0;
      param_4 = param_4 + 2;
    } while (param_2 + (longlong)param_4 != param_3);
  }
  _Destroy_range<std::allocator<std::shared_ptr<sio::message>_>_>(param_4,param_4,param_1);
  return;
}



// FUNCTION 14157ff90 FUN_14157ff90 body=170 status=ok
// SIG undefined FUN_14157ff90(void)

void FUN_14157ff90(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      lVar4 = *(longlong *)(param_1 + 8);
      if (*(longlong *)(lVar4 + 0x6e8) != 0) {
        FUN_142e72560(*(longlong *)(lVar4 + 0x6e8),*(undefined8 *)(lVar4 + 0x6c8),
                      *(undefined8 *)(lVar4 + 0x6c0),*(undefined8 *)(lVar4 + 0x6b8),
                      *(undefined4 *)(lVar4 + 0x710));
      }
    }
  }
  return;
}



// FUNCTION 141580050 FUN_141580050 body=200 status=ok
// SIG undefined FUN_141580050(void)

void FUN_141580050(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 local_res8 [24];
  undefined4 local_res20;
  undefined4 local_res24;
  
  local_res20 = *(undefined4 *)(param_1 + 8);
  lVar5 = param_1 + 8;
  local_res24 = *(undefined4 *)(param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res20);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      lVar4 = FWeakObjectPtr::Get(lVar5);
      if (*(longlong *)(lVar4 + 0x768) != 0) {
        lVar4 = FWeakObjectPtr::Get(lVar5);
        FUN_14157ae40(*(undefined8 *)(lVar4 + 0x768),*(undefined4 *)(param_1 + 0x10));
        lVar5 = FWeakObjectPtr::Get(lVar5);
        *(undefined1 *)(lVar5 + 0x6a0) = 4;
      }
    }
  }
  return;
}



// FUNCTION 141580130 FUN_141580130 body=368 status=ok
// SIG undefined FUN_141580130(void)

void FUN_141580130(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong local_res8;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x10);
    lVar5 = 0;
    iVar1 = *(int *)(lVar4 + 0xc);
    lVar4 = lVar5;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    if (((*(uint *)(lVar4 + 8) & 0x30000000) == 0) &&
       (cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x18), cVar2 != '\0')) {
      lVar4 = FWeakObjectPtr::Get(param_1 + 0x18);
      iVar1 = *(int *)(lVar4 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar6 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar6;
        lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
      }
      if ((*(uint *)(lVar5 + 8) & 0x30000000) == 0) {
        lVar5 = FWeakObjectPtr::Get(param_1 + 0x18);
        if (*(longlong *)(lVar5 + 0x1b0) != 0) {
          puVar7 = &DAT_1464a13d0;
          if (*(char *)(lVar5 + 0x1bb) != '\0') {
            puVar7 = &DAT_1464a13f0;
          }
          FUN_142088910(*(longlong *)(lVar5 + 0x1b0),puVar7);
        }
        *(undefined1 *)(lVar5 + 0x1bb) = 1;
        local_res8 = FWeakObjectPtr::Get(param_1 + 0x18);
        lVar5 = *(longlong *)(param_1 + 8);
        if ((local_res8 != 0) &&
           (TArray<FName,FDefaultAllocator>::Remove(lVar5 + 0xf8,&local_res8),
           *(int *)(lVar5 + 0x100) == 0)) {
          if (*(char *)(lVar5 + 0x38) == '\f') {
            *(undefined1 *)(lVar5 + 0x38) = 0xd;
            return;
          }
          *(undefined1 *)(lVar5 + 0x15a) = 0;
          *(undefined1 *)(lVar5 + 0x38) = 0x11;
        }
      }
    }
  }
  return;
}



// FUNCTION 1415802a0 FUN_1415802a0 body=126 status=ok
// SIG undefined FUN_1415802a0(void)

void FUN_1415802a0(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      FUN_1420900f0(*(longlong *)(param_1 + 8),*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x220));
    }
  }
  return;
}



// FUNCTION 141580320 FUN_141580320 body=232 status=ok
// SIG undefined FUN_141580320(void)

void FUN_141580320(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x2a8))
                (*(longlong **)(param_1 + 8),param_1 + 0x20);
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1b0);
      if (lVar4 != 0) {
        if (*(int *)(param_1 + 0x24) < *(int *)(param_1 + 0x1c)) {
          puVar5 = &DAT_1464a13b0;
          puVar7 = &DAT_1464a1390;
        }
        else {
          puVar5 = &DAT_1464a13c0;
          puVar7 = &DAT_1464a13a0;
        }
        if (*(char *)(*(longlong *)(param_1 + 8) + 0x1bb) != '\0') {
          puVar7 = puVar5;
        }
        FUN_142088910(lVar4,puVar7);
      }
      *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x22a) = 0;
      TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(*(longlong *)(param_1 + 8) + 0x1a0);
    }
  }
  return;
}



// FUNCTION 141580410 FUN_141580410 body=209 status=ok
// SIG undefined FUN_141580410(void)

void FUN_141580410(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      *(int *)(*(longlong *)(param_1 + 8) + 0x870) =
           *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x20);
      FUN_1415774c0(*(undefined8 *)(param_1 + 8));
      *(int *)(*(longlong *)(param_1 + 8) + 0x874) =
           *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20);
      lVar4 = *(longlong *)(param_1 + 8);
      if (*(longlong *)(lVar4 + 0x798) != 0) {
        FUN_14157af60(*(longlong *)(lVar4 + 0x798),*(undefined4 *)(lVar4 + 0x874));
        lVar4 = *(longlong *)(param_1 + 8);
      }
      *(undefined1 *)(lVar4 + 0x889) = 0;
      TBaseDelegate<void>::ExecuteIfBound(*(longlong *)(param_1 + 8) + 0x878);
    }
  }
  return;
}



// FUNCTION 1415804f0 FUN_1415804f0 body=273 status=ok
// SIG undefined FUN_1415804f0(void)

void FUN_1415804f0(longlong param_1,int *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  
  plVar9 = (longlong *)0x0;
  if (*(longlong *)(param_3 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_3 + 8) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    plVar9 = *(longlong **)(param_3 + 8);
  }
  iVar3 = *param_2;
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x10);
  if (cVar5 != '\0') {
    lVar7 = FWeakObjectPtr::Get(param_1 + 0x10);
    iVar4 = *(int *)(lVar7 + 0xc);
    if (iVar4 < (int)DAT_1469e91c4) {
      uVar8 = iVar4 >> 0x1f & 0xffff;
      uVar6 = iVar4 + uVar8;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
              (longlong)(int)((uVar6 & 0xffff) - uVar8) * 0x18;
    }
    else {
      lVar7 = 0;
    }
    if ((*(uint *)(lVar7 + 8) & 0x30000000) == 0) {
      *(int *)(*(longlong *)(param_1 + 8) + 0x870) = *(int *)(param_1 + 0x1c) + iVar3;
      FUN_1415774c0(*(undefined8 *)(param_1 + 8));
      *(int *)(*(longlong *)(param_1 + 8) + 0x874) = *(int *)(param_1 + 0x18) + iVar3;
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x798);
      if (lVar7 != 0) {
        FUN_14157af60(lVar7,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x874));
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  return;
}



// FUNCTION 141580610 FUN_141580610 body=241 status=ok
// SIG undefined FUN_141580610(void)

void FUN_141580610(longlong param_1,undefined4 *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong *plVar10;
  
  plVar10 = (longlong *)0x0;
  if (*(longlong *)(param_3 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_3 + 8) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    plVar10 = *(longlong **)(param_3 + 8);
  }
  uVar3 = *param_2;
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x10);
  if (cVar5 != '\0') {
    lVar7 = FWeakObjectPtr::Get(param_1 + 0x10);
    iVar4 = *(int *)(lVar7 + 0xc);
    if (iVar4 < (int)DAT_1469e91c4) {
      uVar9 = iVar4 >> 0x1f & 0xffff;
      uVar6 = iVar4 + uVar9;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
              (longlong)(int)((uVar6 & 0xffff) - uVar9) * 0x18;
    }
    else {
      lVar7 = 0;
    }
    if ((*(uint *)(lVar7 + 8) & 0x30000000) == 0) {
      cVar5 = FWeakObjectPtr::IsValid(*(longlong *)(param_1 + 8) + 0x6c);
      if (cVar5 != '\0') {
        uVar8 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 8) + 0x6c);
        FUN_14157ae40(uVar8,uVar3);
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar10 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
  }
  return;
}



// FUNCTION 141580710 FUN_141580710 body=273 status=ok
// SIG undefined FUN_141580710(void)

void FUN_141580710(longlong param_1,undefined4 *param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_res20;
  
  plVar9 = (longlong *)0x0;
  if (*(longlong *)(param_3 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_3 + 8) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    plVar9 = *(longlong **)(param_3 + 8);
  }
  local_res8 = *(undefined4 *)(param_1 + 8);
  uVar3 = *param_2;
  local_resc = *(undefined4 *)(param_1 + 0xc);
  local_res20 = param_4;
  FUN_141729b50(&local_res20);
  FUN_14172a400(&local_res20);
  cVar5 = FWeakObjectPtr::IsValid(&local_res8);
  if (cVar5 != '\0') {
    lVar7 = FWeakObjectPtr::Get(&local_res8);
    iVar4 = *(int *)(lVar7 + 0xc);
    if (iVar4 < (int)DAT_1469e91c4) {
      uVar8 = iVar4 >> 0x1f & 0xffff;
      uVar6 = iVar4 + uVar8;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
              (longlong)(int)((uVar6 & 0xffff) - uVar8) * 0x18;
    }
    else {
      lVar7 = 0;
    }
    if ((*(uint *)(lVar7 + 8) & 0x30000000) == 0) {
      lVar7 = FWeakObjectPtr::Get(param_1 + 8);
      if (*(longlong *)(lVar7 + 0x768) != 0) {
        lVar7 = FWeakObjectPtr::Get(param_1 + 8);
        FUN_14157ae40(*(undefined8 *)(lVar7 + 0x768),uVar3);
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  return;
}



// FUNCTION 141580830 FUN_141580830 body=121 status=ok
// SIG undefined FUN_141580830(void)

void FUN_141580830(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined1 local_res10 [24];
  
  iVar1 = _guard_xfg_dispatch_icall_nop(&DAT_1468a6a50);
  if (iVar1 != 0) {
    std::_guard_xfg_dispatch_icall_nop(iVar1);
  }
  if (DAT_1468a6a38 != DAT_1468a6a40) {
    plVar2 = DAT_1468a6a38;
    do {
      if (*plVar2 == *param_1) {
        FUN_141580950(&DAT_1468a6a38,local_res10);
        break;
      }
      plVar2 = plVar2 + 2;
    } while (plVar2 != DAT_1468a6a40);
  }
  iVar1 = _guard_xfg_dispatch_icall_nop(&DAT_1468a6a50);
  if (iVar1 == 0) {
    return;
  }
  std::_guard_xfg_dispatch_icall_nop(iVar1);
  return;
}



// FUNCTION 1415808e0 FUN_1415808e0 body=37 status=ok
// SIG undefined FUN_1415808e0(void)

double FUN_1415808e0(double param_1)

{
  double dVar1;
  
  dVar1 = _guard_xfg_dispatch_icall_nop(param_1 * 1.5707963267948966);
  return 1.0 - dVar1;
}



// FUNCTION 141580950 FUN_141580950 body=236 status=ok
// SIG undefined FUN_141580950(void)

longlong * FUN_141580950(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar8 = (undefined8 *)(param_3 + 0x10);
  puVar9 = *(undefined8 **)(param_1 + 8);
  if (puVar8 != puVar9) {
    do {
      uVar4 = *puVar8;
      uVar5 = puVar8[1];
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[-2] = uVar4;
      plVar6 = (longlong *)puVar8[-1];
      puVar8[-1] = uVar5;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6);
          }
        }
      }
      puVar8 = puVar8 + 2;
    } while (puVar8 != puVar9);
    puVar9 = *(undefined8 **)(param_1 + 8);
  }
  plVar6 = (longlong *)puVar9[-1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + -0x10;
  *param_2 = param_3;
  return param_2;
}



// FUNCTION 141580a60 FUN_141580a60 body=93 status=ok
// SIG undefined FUN_141580a60(void)

void FUN_141580a60(longlong param_1)

{
  code *local_18;
  undefined4 uStack_10;
  
  *(undefined1 *)(param_1 + 0x888) = 0;
  if ((*(char *)(param_1 + 0x6a0) == '\t') && (*(char *)(param_1 + 0x889) == '\0')) {
    local_18 = FUN_141575fe0;
    uStack_10 = 0;
    FUN_141550ab0(param_1 + 0x848,param_1,&local_18,*(undefined4 *)(param_1 + 0x6a8));
  }
  return;
}



// FUNCTION 141580b00 FUN_141580b00 body=248 status=ok
// SIG undefined FUN_141580b00(void)

void FUN_141580b00(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (((*(char *)(param_1 + 0x6a0) == '\x05') &&
      (*(longlong **)(param_1 + 0x758) != (longlong *)0x0)) && (*(longlong *)(param_1 + 0x818) != 0)
     ) {
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x818) + 0x78);
    lVar5 = **(longlong **)(param_1 + 0x758);
    iVar6 = *(int *)(param_1 + 0x820) + 1;
    if (iVar6 <= iVar4) {
      iVar4 = iVar6;
    }
    uVar7 = FText::AsNumber(local_28,iVar4,0,&local_38);
    (**(code **)(lVar5 + 0x2b0))(*(undefined8 *)(param_1 + 0x758),uVar7,1,0);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    plVar1 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_30 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar1 + 8))(plVar1,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 141580c00 FUN_141580c00 body=276 status=ok
// SIG undefined FUN_141580c00(void)

void FUN_141580c00(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *_Dst;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x6d0);
  if ((lVar1 != 0) && ((*(char *)(lVar1 + 0x38) - 4U & 0xfd) == 0)) {
    *(undefined1 *)(lVar1 + 0x109) = 1;
    cVar4 = FWeakObjectPtr::IsValid(lVar1 + 0x5c);
    if ((cVar4 != '\0') && (*(char *)(lVar1 + 0x38) == '\x04')) {
      lVar6 = FWeakObjectPtr::Get(lVar1 + 0x5c);
      lVar2 = *(longlong *)(lVar6 + 400);
      if (((lVar2 != 0) && (*(longlong *)(lVar6 + 0x180) != 0)) && (0 < *(int *)(lVar2 + 0x180))) {
        _Dst = *(longlong **)(lVar2 + 0x178);
        lVar3 = *_Dst;
        if (lVar3 != 0) {
          iVar5 = *(int *)(lVar2 + 0x180);
          if (iVar5 + -1 != 0) {
            _guard_xfg_dispatch_icall_nop(_Dst,_Dst + 1,(longlong)(iVar5 + -1) << 3);
            iVar5 = *(int *)(lVar2 + 0x180);
          }
          *(int *)(lVar2 + 0x180) = iVar5 + -1;
          FUN_142f05ef0(lVar2,lVar3,0);
          FUN_14157ab50(*(undefined8 *)(lVar6 + 0x180),lVar3);
        }
      }
    }
    if (((*(char *)(lVar1 + 0x108) != '\0') && (*(char *)(lVar1 + 0x109) != '\0')) &&
       (*(int *)(lVar1 + 0x100) == 0)) {
      FUN_14156c890(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 141580d60 FUN_141580d60 body=162 status=ok
// SIG undefined FUN_141580d60(void)

undefined8 FUN_141580d60(undefined8 param_1)

{
  undefined8 *local_58;
  undefined8 *local_50;
  undefined **local_48;
  undefined1 *local_40;
  undefined ***local_10;
  
  local_50 = (undefined8 *)operator_new(200);
  if (local_50 == (undefined8 *)0x0) {
    local_50 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(local_50 + 1) = 1;
    *(undefined4 *)((longlong)local_50 + 0xc) = 1;
    *local_50 = &PTR_FUN_144c7e080;
    local_48 = &PTR_FUN_144c7e550;
    local_40 = &LAB_141580f90;
    local_10 = &local_48;
    FUN_1415524d0(local_50 + 2,DAT_1468a64b0,&local_48,0);
  }
  local_58 = local_50 + 2;
  Stormancer::Party::PartyInvitation::PartyInvitation(param_1,&local_58);
  return param_1;
}



// FUNCTION 141580e10 FUN_141580e10 body=146 status=ok
// SIG undefined FUN_141580e10(void)

void FUN_141580e10(longlong param_1,double param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  double dVar5;
  double local_res10;
  
  local_res10 = param_2;
  dVar5 = _guard_xfg_dispatch_icall_nop
                    ((double)*(int *)(param_1 + 0x14) * param_2,(double)*(int *)(param_1 + 0x18));
  iVar3 = (int)dVar5 + *(int *)(param_1 + 0x10);
  if (iVar3 != **(int **)(param_1 + 0x20)) {
    **(int **)(param_1 + 0x20) = iVar3;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = *(undefined8 **)(param_1 + 0x38);
    for (puVar4 = *(undefined8 **)(param_1 + 0x30); puVar4 != puVar2; puVar4 = puVar4 + 2) {
      (**(code **)(*(longlong *)*puVar4 + 8))((longlong *)*puVar4,uVar1,param_3,&local_res10);
    }
  }
  return;
}



// FUNCTION 141580eb0 FUN_141580eb0 body=162 status=ok
// SIG undefined FUN_141580eb0(void)

void FUN_141580eb0(longlong param_1,double param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  double dVar4;
  float fVar5;
  double local_res10;
  
  local_res10 = param_2;
  dVar4 = _guard_xfg_dispatch_icall_nop
                    ((double)*(float *)(param_1 + 0x14) * param_2,(double)*(float *)(param_1 + 0x18)
                    );
  fVar5 = (float)dVar4 + *(float *)(param_1 + 0x10);
  if (fVar5 != **(float **)(param_1 + 0x20)) {
    puVar1 = *(undefined8 **)(param_1 + 0x38);
    **(float **)(param_1 + 0x20) = fVar5;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    for (puVar3 = *(undefined8 **)(param_1 + 0x30); puVar3 != puVar1; puVar3 = puVar3 + 2) {
      (**(code **)(*(longlong *)*puVar3 + 8))((longlong *)*puVar3,uVar2,param_3,&local_res10);
    }
  }
  return;
}



// FUNCTION 141580f60 FUN_141580f60 body=46 status=ok
// SIG undefined FUN_141580f60(void)

double FUN_141580f60(double param_1)

{
  double dVar1;
  
  dVar1 = _guard_xfg_dispatch_icall_nop(param_1 * 6.283185307179586 - 1.5707963267948966);
  return (dVar1 + 1.0) * 0.5;
}



// FUNCTION 141580fb0 FUN_141580fb0 body=199 status=ok
// SIG undefined FUN_141580fb0(void)

void FUN_141580fb0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  
  if (*(char *)((undefined8 *)*param_1 + 0x16) == '\0') {
    *(undefined8 *)*param_1 = DAT_1468a64b0;
    iVar3 = _guard_xfg_dispatch_icall_nop(&DAT_1468a6a50);
    if (iVar3 != 0) {
      std::_guard_xfg_dispatch_icall_nop(iVar3);
    }
    plVar2 = DAT_1468a6a40;
    if (DAT_1468a6a48 == DAT_1468a6a40) {
      std::
      vector<std::shared_ptr<gte::ETManifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>
      ::_Emplace_reallocate<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_&>
                (&DAT_1468a6a38,DAT_1468a6a40,param_1);
    }
    else {
      *DAT_1468a6a40 = 0;
      plVar2[1] = 0;
      if (param_1[1] != 0) {
        LOCK();
        piVar1 = (int *)(param_1[1] + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      *plVar2 = *param_1;
      plVar2[1] = param_1[1];
      DAT_1468a6a40 = DAT_1468a6a40 + 2;
    }
    *(undefined1 *)(DAT_1468a6a40[-2] + 0xb0) = 1;
    iVar3 = _guard_xfg_dispatch_icall_nop(&DAT_1468a6a50);
    if (iVar3 != 0) {
      std::_guard_xfg_dispatch_icall_nop(iVar3);
      return;
    }
  }
  return;
}



// FUNCTION 141581080 FUN_141581080 body=552 status=ok
// SIG undefined FUN_141581080(void)

bool FUN_141581080(double *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  double dVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  float fVar11;
  double local_res8;
  longlong *local_b8;
  longlong *local_b0;
  undefined **local_a8;
  undefined1 *local_a0;
  undefined ***local_70;
  
  plVar8 = (longlong *)0x0;
  plVar6 = (longlong *)operator_new(200);
  local_b0 = plVar8;
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_144c7e080;
    local_a8 = &PTR_FUN_144c7e550;
    local_a0 = &LAB_141580f90;
    local_70 = &local_a8;
    FUN_1415524d0(plVar6 + 2,DAT_1468a64b0,&local_a8,1);
    local_b0 = plVar6;
  }
  plVar6 = (longlong *)param_1[4];
  local_b8 = local_b0 + 2;
  plVar9 = (longlong *)param_1[5];
  if (plVar6 != plVar9) {
    do {
      puVar7 = (undefined8 *)*plVar6;
      fVar11 = (float)(((DAT_1468a64b0 - *param_1) - (double)puVar7[1]) / param_1[1]);
      if (0.0 <= fVar11) {
        if (1.0 < fVar11) {
          if (*(char *)(param_1 + 3) == '\0') {
            plVar8 = (longlong *)((longlong)plVar8 + 1);
            if (*(char *)((longlong)param_1 + 0x19) == '\0') {
              (**(code **)*puVar7)(puVar7,0x3ff0000000000000,&local_b8);
              goto LAB_1415811de;
            }
            (**(code **)*puVar7)(puVar7,0);
            puVar7 = (undefined8 *)*plVar6;
          }
          else {
            fVar11 = fVar11 + -1.0;
          }
        }
        plVar3 = (longlong *)param_1[0xe];
        local_res8 = (double)fVar11;
        if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::_guard_xfg_dispatch_icall_nop();
        }
        uVar10 = (**(code **)(*plVar3 + 0x10))(plVar3,&local_res8);
        (**(code **)*puVar7)(puVar7,uVar10,&local_b8);
      }
LAB_1415811de:
      plVar6 = plVar6 + 2;
    } while (plVar6 != plVar9);
    plVar9 = (longlong *)param_1[5];
  }
  plVar6 = local_b0;
  dVar4 = param_1[4];
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_b0 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  return plVar8 < (longlong *)((longlong)plVar9 - (longlong)dVar4 >> 4);
}



// FUNCTION 1415812b0 FUN_1415812b0 body=958 status=ok
// SIG undefined FUN_1415812b0(void)

ulonglong FUN_1415812b0(undefined8 param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 local_res8;
  longlong *local_88;
  longlong *local_80;
  undefined **local_78;
  undefined1 *local_70;
  undefined ***local_40;
  
  iVar7 = _guard_xfg_dispatch_icall_nop(&DAT_1468a6a50);
  if (iVar7 != 0) {
    std::_guard_xfg_dispatch_icall_nop(iVar7);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468a6ae0) && (_Init_thread_header(&DAT_1468a6ae0), DAT_1468a6ae0 == -1))
  {
    atexit(FUN_143e74c30);
    _Init_thread_footer(&DAT_1468a6ae0);
  }
  plVar9 = DAT_1468a6a38;
  DAT_1468a64b0 = param_1;
  plVar2 = DAT_1468a6ac8;
  plVar10 = DAT_1468a6ad0;
  if (DAT_1468a6a38 != DAT_1468a6a40) {
    do {
      cVar6 = FUN_141581080(*plVar9);
      plVar2 = DAT_1468a6ad0;
      if (cVar6 == '\0') {
        plVar10 = plVar9;
        if (DAT_1468a6ad8 == DAT_1468a6ad0) {
          std::
          vector<std::shared_ptr<gte::ETManifoldMesh::Triangle>,std::allocator<std::shared_ptr<gte::ETManifoldMesh::Triangle>_>_>
          ::_Emplace_reallocate<std::shared_ptr<gte::ETManifoldMesh::Triangle>_const_&>
                    (&DAT_1468a6ac8,DAT_1468a6ad0,plVar9);
          plVar2 = DAT_1468a6a40;
          plVar8 = DAT_1468a6a40;
        }
        else {
          *DAT_1468a6ad0 = 0;
          plVar2[1] = 0;
          if (plVar9[1] != 0) {
            LOCK();
            piVar1 = (int *)(plVar9[1] + 8);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          *plVar2 = *plVar9;
          plVar2[1] = plVar9[1];
          DAT_1468a6ad0 = DAT_1468a6ad0 + 2;
          plVar2 = DAT_1468a6a40;
          plVar8 = DAT_1468a6a40;
        }
        while (DAT_1468a6a40 = plVar8, plVar8 = DAT_1468a6a40, plVar10 = plVar10 + 2,
              plVar10 != DAT_1468a6a40) {
          lVar11 = *plVar10;
          lVar3 = plVar10[1];
          DAT_1468a6a40 = plVar2;
          *plVar10 = 0;
          plVar10[1] = 0;
          plVar10[-2] = lVar11;
          plVar4 = (longlong *)plVar10[-1];
          plVar10[-1] = lVar3;
          plVar2 = DAT_1468a6a40;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar4 + 1;
            lVar11 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            plVar2 = DAT_1468a6a40;
            if ((int)lVar11 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar2 = DAT_1468a6a40;
              if (iVar7 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4);
                plVar2 = DAT_1468a6a40;
              }
            }
          }
        }
        plVar10 = (longlong *)plVar2[-1];
        DAT_1468a6a40 = plVar2;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar10 + 1;
          lVar11 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10);
            }
          }
        }
        DAT_1468a6a40 = DAT_1468a6a40 + -2;
      }
      else {
        plVar9 = plVar9 + 2;
      }
      plVar2 = DAT_1468a6ac8;
      plVar10 = DAT_1468a6ad0;
    } while (plVar9 != DAT_1468a6a40);
  }
  for (; plVar9 = DAT_1468a6ad0, plVar2 != DAT_1468a6ad0; plVar2 = plVar2 + 2) {
    DAT_1468a6ad0 = plVar10;
    plVar8 = (longlong *)operator_new(200);
    plVar10 = (longlong *)0x0;
    if (plVar8 != (longlong *)0x0) {
      *(undefined4 *)(plVar8 + 1) = 1;
      *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
      *plVar8 = (longlong)&PTR_FUN_144c7e080;
      local_40 = &local_78;
      local_78 = &PTR_FUN_144c7e550;
      local_70 = &LAB_141580f90;
      FUN_1415524d0(plVar8 + 2,DAT_1468a64b0,&local_78,1);
      plVar10 = plVar8;
    }
    local_88 = plVar10 + 2;
    local_res8 = 0x3ff0000000000000;
    puVar5 = *(undefined8 **)(*plVar2 + 0x88);
    for (puVar12 = *(undefined8 **)(*plVar2 + 0x80); local_80 = plVar10, puVar12 != puVar5;
        puVar12 = puVar12 + 2) {
      (**(code **)(*(longlong *)*puVar12 + 8))((longlong *)*puVar12,&local_88,&local_res8);
      plVar10 = local_80;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar10 + 1;
      lVar11 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10);
        }
      }
    }
    plVar10 = DAT_1468a6ad0;
    DAT_1468a6ad0 = plVar9;
  }
  DAT_1468a6ad0 = plVar10;
  std::_Destroy_range<std::allocator<std::shared_ptr<sio::message>_>_>
            (DAT_1468a6ac8,plVar10,&DAT_1468a6ac8);
  lVar11 = (longlong)DAT_1468a6a40 - (longlong)DAT_1468a6a38;
  DAT_1468a6ad0 = DAT_1468a6ac8;
  iVar7 = _guard_xfg_dispatch_icall_nop(&DAT_1468a6a50);
  if (iVar7 != 0) {
    std::_guard_xfg_dispatch_icall_nop(iVar7);
  }
  return lVar11 >> 4 & 0xffffffff;
}



// FUNCTION 141581690 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMaterialParameterCollectionInstance::GetPrivateStaticClass(void)

{
  if (DAT_1468a7500 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"OakCitizenScienceManager",&DAT_1468a7500,FUN_141587d90,0xf8,
                  0x10000000,0,L"Engine",&LAB_1415857e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1468a7500;
}



// FUNCTION 141581730 FUN_141581730 body=47 status=ok
// SIG undefined FUN_141581730(void)

longlong FUN_141581730(void)

{
  if (DAT_1468a7470 == 0) {
    FUN_141786440(&DAT_1468a7470,&PTR_GetPrivateStaticClass_144c7f490);
  }
  return DAT_1468a7470;
}



// FUNCTION 141581760 FUN_141581760 body=47 status=ok
// SIG undefined FUN_141581760(void)

longlong FUN_141581760(void)

{
  if (DAT_1468a7420 == 0) {
    FUN_141786a30(&DAT_1468a7420,&PTR_FUN_1464a5e40);
  }
  return DAT_1468a7420;
}



// FUNCTION 141581790 FUN_141581790 body=47 status=ok
// SIG undefined FUN_141581790(void)

longlong FUN_141581790(void)

{
  if (DAT_1468a7428 == 0) {
    FUN_141786a30(&DAT_1468a7428,&PTR_FUN_1464a5e80);
  }
  return DAT_1468a7428;
}



// FUNCTION 1415817c0 FUN_1415817c0 body=47 status=ok
// SIG undefined FUN_1415817c0(void)

longlong FUN_1415817c0(void)

{
  if (DAT_1468a7430 == 0) {
    FUN_141786a30(&DAT_1468a7430,&PTR_FUN_1464a5ec0);
  }
  return DAT_1468a7430;
}



// FUNCTION 1415817f0 FUN_1415817f0 body=47 status=ok
// SIG undefined FUN_1415817f0(void)

longlong FUN_1415817f0(void)

{
  if (DAT_1468a7438 == 0) {
    FUN_141786a30(&DAT_1468a7438,&PTR_FUN_1464a5f00);
  }
  return DAT_1468a7438;
}



// FUNCTION 141581820 FUN_141581820 body=47 status=ok
// SIG undefined FUN_141581820(void)

longlong FUN_141581820(void)

{
  if (DAT_1468a7440 == 0) {
    FUN_141786a30(&DAT_1468a7440,&PTR_FUN_1464a5f40);
  }
  return DAT_1468a7440;
}



// FUNCTION 141581850 FUN_141581850 body=47 status=ok
// SIG undefined FUN_141581850(void)

longlong FUN_141581850(void)

{
  if (DAT_1468a7448 == 0) {
    FUN_141786a30(&DAT_1468a7448,&PTR_FUN_1464a5f80);
  }
  return DAT_1468a7448;
}



// FUNCTION 141581880 FUN_141581880 body=47 status=ok
// SIG undefined FUN_141581880(void)

longlong FUN_141581880(void)

{
  if (DAT_1468a7450 == 0) {
    FUN_141786a30(&DAT_1468a7450,&PTR_FUN_1464a5fc0);
  }
  return DAT_1468a7450;
}



// FUNCTION 1415818b0 FUN_1415818b0 body=47 status=ok
// SIG undefined FUN_1415818b0(void)

longlong FUN_1415818b0(void)

{
  if (DAT_1468a7458 == 0) {
    FUN_141786a30(&DAT_1468a7458,&PTR_FUN_1464a6080);
  }
  return DAT_1468a7458;
}



// FUNCTION 1415818e0 FUN_1415818e0 body=47 status=ok
// SIG undefined FUN_1415818e0(void)

longlong FUN_1415818e0(void)

{
  if (DAT_1468a74f8 == 0) {
    FUN_141786440(&DAT_1468a74f8,&PTR_GetPrivateStaticClass_144c7ea50);
  }
  return DAT_1468a74f8;
}



// FUNCTION 141581910 FUN_141581910 body=47 status=ok
// SIG undefined FUN_141581910(void)

longlong FUN_141581910(void)

{
  if (DAT_1468a7460 == 0) {
    FUN_141786a30(&DAT_1468a7460,&PTR_FUN_1464a6140);
  }
  return DAT_1468a7460;
}



// FUNCTION 141581940 FUN_141581940 body=47 status=ok
// SIG undefined FUN_141581940(void)

longlong FUN_141581940(void)

{
  if (DAT_1468a7468 == 0) {
    FUN_141786a30(&DAT_1468a7468,&PTR_FUN_1464a6200);
  }
  return DAT_1468a7468;
}



// FUNCTION 141581970 FUN_141581970 body=47 status=ok
// SIG undefined FUN_141581970(void)

longlong FUN_141581970(void)

{
  if (DAT_1468a74f0 == 0) {
    FUN_141786a30(&DAT_1468a74f0,&PTR_FUN_1464a7410);
  }
  return DAT_1468a74f0;
}



// FUNCTION 1415819c0 FUN_1415819c0 body=47 status=ok
// SIG undefined FUN_1415819c0(void)

longlong FUN_1415819c0(void)

{
  if (DAT_1468a7540 == 0) {
    FUN_141786440(&DAT_1468a7540,&PTR_GetPrivateStaticClass_144c7fa10);
  }
  return DAT_1468a7540;
}



// FUNCTION 1415819f0 FUN_1415819f0 body=47 status=ok
// SIG undefined FUN_1415819f0(void)

longlong FUN_1415819f0(void)

{
  if (DAT_1468a7528 == 0) {
    FUN_141786a30(&DAT_1468a7528,&PTR_FUN_1464a7710);
  }
  return DAT_1468a7528;
}



// FUNCTION 141581a20 FUN_141581a20 body=47 status=ok
// SIG undefined FUN_141581a20(void)

longlong FUN_141581a20(void)

{
  if (DAT_1468a7530 == 0) {
    FUN_141786a30(&DAT_1468a7530,&PTR_FUN_1464a7750);
  }
  return DAT_1468a7530;
}



// FUNCTION 141581a50 FUN_141581a50 body=47 status=ok
// SIG undefined FUN_141581a50(void)

longlong FUN_141581a50(void)

{
  if (DAT_1468a7538 == 0) {
    FUN_141786a30(&DAT_1468a7538,&PTR_FUN_1464a7790);
  }
  return DAT_1468a7538;
}



// FUNCTION 141581a80 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGameModeBase::GetPrivateStaticClass(void)

{
  if (DAT_1468a72d0 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"GFxCSLevelButton",&DAT_1468a72d0,FUN_140447710,0x3d0,0x10000008
                  ,0,L"Engine",FUN_141584d40,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGameInstanceGameParameters::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468a72d0;
}



// FUNCTION 141581b30 FUN_141581b30 body=53 status=ok
// SIG undefined FUN_141581b30(void)

void FUN_141581b30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_144c91d80;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141581b70 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGameInstanceGameParameters::GetPrivateStaticClass(void)

{
  if (DAT_1468a72e0 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"GFxCSLevelList",&DAT_1468a72e0,FUN_140447710,800,0x10000008,0,
                  L"Engine",FUN_141584e10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468a72e0;
}



// FUNCTION 141581c20 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ARemnantWeaponMod::GetPrivateStaticClass(void)

{
  if (DAT_1468a72f8 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"GFxCSLevelSelectorMenu",&DAT_1468a72f8,FUN_141587ca0,0x6c0,
                  0x10000000,0,L"Engine",FUN_141584e50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoUIInputKeySelector::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468a72f8;
}



// FUNCTION 141581cd0 FUN_141581cd0 body=47 status=ok
// SIG undefined FUN_141581cd0(void)

longlong FUN_141581cd0(void)

{
  if (DAT_1468a72f0 == 0) {
    FUN_141786440(&DAT_1468a72f0,&PTR_GetPrivateStaticClass_144c80650);
  }
  return DAT_1468a72f0;
}



// FUNCTION 141581d00 FUN_141581d00 body=47 status=ok
// SIG undefined FUN_141581d00(void)

longlong FUN_141581d00(void)

{
  if (DAT_1468a72e8 == 0) {
    FUN_141786a30(&DAT_1468a72e8,&PTR_FUN_1464a4140);
  }
  return DAT_1468a72e8;
}



// FUNCTION 141581d30 FUN_141581d30 body=162 status=ok
// SIG undefined FUN_141581d30(void)

longlong FUN_141581d30(void)

{
  if (DAT_1468a73d8 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"GFxCSPuzzleTile",&DAT_1468a73d8,FUN_140447710,0x230,0x10000008,
                  0,L"Engine",&LAB_1415852a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_1468a73d8;
}



// FUNCTION 141581e00 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UInputKeySelector::GetPrivateStaticClass(void)

{
  if (DAT_1468a7488 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"GFxCSStartScreen",&DAT_1468a7488,FUN_140447710,0x680,0x10000000
                  ,0,L"Engine",FUN_1415854f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1412d9d00,&LAB_140447700,0);
  }
  return DAT_1468a7488;
}



// FUNCTION 141581ed0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USlateBlueprintLibrary::GetPrivateStaticClass(void)

{
  if (DAT_1468a7218 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"CSTutorialBPLib",&DAT_1468a7218,
                  StaticRegisterNativesUSlateBlueprintLibrary,0x28,0x10000000,0,L"Engine",
                  FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_1468a7218;
}



// FUNCTION 141581f90 FUN_141581f90 body=162 status=ok
// SIG undefined FUN_141581f90(void)

longlong FUN_141581f90(void)

{
  if (DAT_1468a70e0 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"CSConsole",&DAT_1468a70e0,FUN_140447710,0x668,0x10000000,0,
                  L"Engine",FUN_1415843e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  ALandscapeStreamingProxy::StaticClass,&LAB_140447700,0);
  }
  return DAT_1468a70e0;
}



// FUNCTION 141582040 FUN_141582040 body=47 status=ok
// SIG undefined FUN_141582040(void)

longlong FUN_141582040(void)

{
  if (DAT_1468a7210 == 0) {
    FUN_141786440(&DAT_1468a7210,&PTR_GetPrivateStaticClass_144c81020);
  }
  return DAT_1468a7210;
}



// FUNCTION 141582070 FUN_141582070 body=47 status=ok
// SIG undefined FUN_141582070(void)

longlong FUN_141582070(void)

{
  if (DAT_1468a71b8 == 0) {
    FUN_141786a30(&DAT_1468a71b8,&PTR_FUN_1464a2950);
  }
  return DAT_1468a71b8;
}



// FUNCTION 1415820a0 FUN_1415820a0 body=47 status=ok
// SIG undefined FUN_1415820a0(void)

longlong FUN_1415820a0(void)

{
  if (DAT_1468a71c0 == 0) {
    FUN_141786a30(&DAT_1468a71c0,&PTR_FUN_1464a2990);
  }
  return DAT_1468a71c0;
}



// FUNCTION 1415820d0 FUN_1415820d0 body=47 status=ok
// SIG undefined FUN_1415820d0(void)

longlong FUN_1415820d0(void)

{
  if (DAT_1468a71c8 == 0) {
    FUN_141786a30(&DAT_1468a71c8,&PTR_FUN_1464a2ad0);
  }
  return DAT_1468a71c8;
}



// FUNCTION 141582100 FUN_141582100 body=47 status=ok
// SIG undefined FUN_141582100(void)

longlong FUN_141582100(void)

{
  if (DAT_1468a71d0 == 0) {
    FUN_141786a30(&DAT_1468a71d0,&PTR_FUN_1464a2b90);
  }
  return DAT_1468a71d0;
}



// FUNCTION 141582130 FUN_141582130 body=47 status=ok
// SIG undefined FUN_141582130(void)

longlong FUN_141582130(void)

{
  if (DAT_1468a71d8 == 0) {
    FUN_141786a30(&DAT_1468a71d8,&PTR_FUN_1464a2c10);
  }
  return DAT_1468a71d8;
}



// FUNCTION 141582160 FUN_141582160 body=47 status=ok
// SIG undefined FUN_141582160(void)

longlong FUN_141582160(void)

{
  if (DAT_1468a71e0 == 0) {
    FUN_141786a30(&DAT_1468a71e0,&PTR_FUN_1464a2cd0);
  }
  return DAT_1468a71e0;
}



// FUNCTION 141582190 FUN_141582190 body=47 status=ok
// SIG undefined FUN_141582190(void)

longlong FUN_141582190(void)

{
  if (DAT_1468a71e8 == 0) {
    FUN_141786a30(&DAT_1468a71e8,&PTR_FUN_1464a2d90);
  }
  return DAT_1468a71e8;
}



// FUNCTION 1415821c0 FUN_1415821c0 body=47 status=ok
// SIG undefined FUN_1415821c0(void)

longlong FUN_1415821c0(void)

{
  if (DAT_1468a71f0 == 0) {
    FUN_141786a30(&DAT_1468a71f0,&PTR_FUN_1464a2e10);
  }
  return DAT_1468a71f0;
}



// FUNCTION 1415821f0 FUN_1415821f0 body=47 status=ok
// SIG undefined FUN_1415821f0(void)

longlong FUN_1415821f0(void)

{
  if (DAT_1468a71f8 == 0) {
    FUN_141786a30(&DAT_1468a71f8,&PTR_FUN_1464a2ed0);
  }
  return DAT_1468a71f8;
}



// FUNCTION 141582220 FUN_141582220 body=47 status=ok
// SIG undefined FUN_141582220(void)

longlong FUN_141582220(void)

{
  if (DAT_1468a7200 == 0) {
    FUN_141786a30(&DAT_1468a7200,&PTR_FUN_1464a2f10);
  }
  return DAT_1468a7200;
}



// FUNCTION 141582250 FUN_141582250 body=47 status=ok
// SIG undefined FUN_141582250(void)

longlong FUN_141582250(void)

{
  if (DAT_1468a7208 == 0) {
    FUN_141786a30(&DAT_1468a7208,&PTR_FUN_1464a2f50);
  }
  return DAT_1468a7208;
}



// FUNCTION 1415822a0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGImpulseWindProjectile::GetPrivateStaticClass(void)

{
  if (DAT_1468a7328 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"GFxCSMainMenu",&DAT_1468a7328,FUN_141587cd0,0x6f0,0x10000000,0,
                  L"Engine",FUN_141584ec0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoUIInputKeySelector::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468a7328;
}



// FUNCTION 141582360 FUN_141582360 body=47 status=ok
// SIG undefined FUN_141582360(void)

longlong FUN_141582360(void)

{
  if (DAT_1468a7320 == 0) {
    FUN_141786440(&DAT_1468a7320,&PTR_GetPrivateStaticClass_144c81230);
  }
  return DAT_1468a7320;
}



// FUNCTION 141582390 FUN_141582390 body=47 status=ok
// SIG undefined FUN_141582390(void)

longlong FUN_141582390(void)

{
  if (DAT_1468a7300 == 0) {
    FUN_141786a30(&DAT_1468a7300,&PTR_FUN_1464a42f0);
  }
  return DAT_1468a7300;
}



// FUNCTION 1415823c0 FUN_1415823c0 body=47 status=ok
// SIG undefined FUN_1415823c0(void)

longlong FUN_1415823c0(void)

{
  if (DAT_1468a7308 == 0) {
    FUN_141786a30(&DAT_1468a7308,&PTR_FUN_1464a43f0);
  }
  return DAT_1468a7308;
}



// FUNCTION 1415823f0 FUN_1415823f0 body=47 status=ok
// SIG undefined FUN_1415823f0(void)

longlong FUN_1415823f0(void)

{
  if (DAT_1468a7310 == 0) {
    FUN_141786a30(&DAT_1468a7310,&PTR_FUN_1464a44b0);
  }
  return DAT_1468a7310;
}



// FUNCTION 141582420 FUN_141582420 body=47 status=ok
// SIG undefined FUN_141582420(void)

longlong FUN_141582420(void)

{
  if (DAT_1468a7318 == 0) {
    FUN_141786a30(&DAT_1468a7318,&PTR_FUN_1464a4570);
  }
  return DAT_1468a7318;
}



// FUNCTION 141582450 FUN_141582450 body=151 status=ok
// SIG undefined FUN_141582450(void)

longlong FUN_141582450(void)

{
  if (DAT_1468a70b0 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"CSAction",&DAT_1468a70b0,FUN_140447710,0x48,0x10000001,0,
                  L"Engine",FUN_1415845a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1468a70b0;
}



// FUNCTION 1415824f0 FUN_1415824f0 body=162 status=ok
// SIG undefined FUN_1415824f0(void)

longlong FUN_1415824f0(void)

{
  if (DAT_1468a73e8 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"GFxCSGridTile",&DAT_1468a73e8,FUN_140447710,0x230,0x10000008,0,
                  L"Engine",FUN_141584a40,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_141581d30,&LAB_140447700,0);
  }
  return DAT_1468a73e8;
}



// FUNCTION 1415825a0 FUN_1415825a0 body=162 status=ok
// SIG undefined FUN_1415825a0(void)

longlong FUN_1415825a0(void)

{
  if (DAT_1468a7138 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"CSConsoleProxy",&DAT_1468a7138,FUN_140447710,0x520,0x10000008,0
                  ,L"Engine",FUN_141584490,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_1412d7880
                  ,&LAB_140447700,0);
  }
  return DAT_1468a7138;
}



// FUNCTION 141582660 FUN_141582660 body=162 status=ok
// SIG undefined FUN_141582660(void)

longlong FUN_141582660(void)

{
  if (DAT_1468a73f8 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"GFxCSGuideTile",&DAT_1468a73f8,FUN_140447710,0x230,0x10000008,0
                  ,L"Engine",FUN_141584a70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_141581d30,&LAB_140447700,0);
  }
  return DAT_1468a73f8;
}



// FUNCTION 141582720 FUN_141582720 body=162 status=ok
// SIG undefined FUN_141582720(void)

longlong FUN_141582720(void)

{
  if (DAT_1468a7408 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"GFxCSTokenTile",&DAT_1468a7408,FUN_140447710,0x230,0x10000008,0
                  ,L"Engine",FUN_1415856d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_141581d30,&LAB_140447700,0);
  }
  return DAT_1468a7408;
}



// FUNCTION 1415827d0 FUN_1415827d0 body=162 status=ok
// SIG undefined FUN_1415827d0(void)

longlong FUN_1415827d0(void)

{
  if (DAT_1468a7080 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"CSActionInsertToken",&DAT_1468a7080,FUN_140447710,0x48,
                  0x10000000,0,L"Engine",FUN_1415845e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_141582450,&LAB_140447700,0);
  }
  return DAT_1468a7080;
}



// FUNCTION 141582880 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass(void)

{
  if (DAT_1468a7338 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"GFxCSProgressBar",&DAT_1468a7338,FUN_140447710,400,0x10000008,0
                  ,L"Engine",FUN_141584f30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_1468a7338;
}



// FUNCTION 141582930 FUN_141582930 body=47 status=ok
// SIG undefined FUN_141582930(void)

longlong FUN_141582930(void)

{
  if (DAT_1468a7130 == 0) {
    FUN_141786440(&DAT_1468a7130,&PTR_FUN_144c82420);
  }
  return DAT_1468a7130;
}



// FUNCTION 141582960 FUN_141582960 body=47 status=ok
// SIG undefined FUN_141582960(void)

longlong FUN_141582960(void)

{
  if (DAT_1468a70f0 == 0) {
    FUN_141786a30(&DAT_1468a70f0,&PTR_FUN_1464a16e0);
  }
  return DAT_1468a70f0;
}



// FUNCTION 141582990 FUN_141582990 body=47 status=ok
// SIG undefined FUN_141582990(void)

longlong FUN_141582990(void)

{
  if (DAT_1468a70f8 == 0) {
    FUN_141786a30(&DAT_1468a70f8,&PTR_FUN_1464a1720);
  }
  return DAT_1468a70f8;
}



// FUNCTION 1415829c0 FUN_1415829c0 body=47 status=ok
// SIG undefined FUN_1415829c0(void)

longlong FUN_1415829c0(void)

{
  if (DAT_1468a7100 == 0) {
    FUN_141786a30(&DAT_1468a7100,&PTR_FUN_1464a1760);
  }
  return DAT_1468a7100;
}



// FUNCTION 1415829f0 FUN_1415829f0 body=47 status=ok
// SIG undefined FUN_1415829f0(void)

longlong FUN_1415829f0(void)

{
  if (DAT_1468a7108 == 0) {
    FUN_141786a30(&DAT_1468a7108,&PTR_FUN_1464a17a0);
  }
  return DAT_1468a7108;
}



// FUNCTION 141582a20 FUN_141582a20 body=47 status=ok
// SIG undefined FUN_141582a20(void)

longlong FUN_141582a20(void)

{
  if (DAT_1468a7110 == 0) {
    FUN_141786a30(&DAT_1468a7110,&PTR_FUN_1464a17e0);
  }
  return DAT_1468a7110;
}



// FUNCTION 141582a50 FUN_141582a50 body=47 status=ok
// SIG undefined FUN_141582a50(void)

longlong FUN_141582a50(void)

{
  if (DAT_1468a7118 == 0) {
    FUN_141786a30(&DAT_1468a7118,&PTR_FUN_1464a1820);
  }
  return DAT_1468a7118;
}



// FUNCTION 141582a80 FUN_141582a80 body=47 status=ok
// SIG undefined FUN_141582a80(void)

longlong FUN_141582a80(void)

{
  if (DAT_1468a7120 == 0) {
    FUN_141786a30(&DAT_1468a7120,&PTR_FUN_1464a18b0);
  }
  return DAT_1468a7120;
}



// FUNCTION 141582ab0 FUN_141582ab0 body=47 status=ok
// SIG undefined FUN_141582ab0(void)

longlong FUN_141582ab0(void)

{
  if (DAT_1468a7128 == 0) {
    FUN_141786a30(&DAT_1468a7128,&PTR_FUN_1464a18f0);
  }
  return DAT_1468a7128;
}



// FUNCTION 141582ae0 FUN_141582ae0 body=162 status=ok
// SIG undefined FUN_141582ae0(void)

longlong FUN_141582ae0(void)

{
  if (DAT_1468a7090 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"CSActionRemoveToken",&DAT_1468a7090,FUN_140447710,0x48,
                  0x10000000,0,L"Engine",FUN_141584620,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_141582450,&LAB_140447700,0);
  }
  return DAT_1468a7090;
}



// FUNCTION 141582b90 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UCameraShake::GetPrivateStaticClass(void)

{
  if (DAT_1468a7178 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"CSPuzzleFeedbackManager",&DAT_1468a7178,FUN_140447710,0x160,
                  0x10000000,0,L"Engine",&LAB_141584760,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1468a7178;
}



// FUNCTION 141582c30 FUN_141582c30 body=162 status=ok
// SIG undefined FUN_141582c30(void)

longlong FUN_141582c30(void)

{
  if (DAT_1468a70a0 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"CSActionSwapTileAndToken",&DAT_1468a70a0,FUN_140447710,0x58,
                  0x10000000,0,L"Engine",FUN_141584660,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_141582450,&LAB_140447700,0);
  }
  return DAT_1468a70a0;
}



// FUNCTION 141582cf0 FUN_141582cf0 body=47 status=ok
// SIG undefined FUN_141582cf0(void)

longlong FUN_141582cf0(void)

{
  if (DAT_1468a70a8 == 0) {
    FUN_141786440(&DAT_1468a70a8,&PTR_FUN_144c82850);
  }
  return DAT_1468a70a8;
}



// FUNCTION 141582d20 FUN_141582d20 body=47 status=ok
// SIG undefined FUN_141582d20(void)

longlong FUN_141582d20(void)

{
  if (DAT_1468a7508 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_1468a7508,&PTR_s__Script_OakCS_144c91d08);
  }
  return DAT_1468a7508;
}



// FUNCTION 141582d50 FUN_141582d50 body=162 status=ok
// SIG undefined FUN_141582d50(void)

longlong FUN_141582d50(void)

{
  if (DAT_1468a7348 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"GFxCSPuzzle",&DAT_1468a7348,FUN_140447710,0x1a0,0x10000008,0,
                  L"Engine",FUN_141584f80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_1468a7348;
}



// FUNCTION 141582e50 FUN_141582e50 body=151 status=ok
// SIG undefined FUN_141582e50(void)

longlong FUN_141582e50(void)

{
  if (DAT_1468a70c0 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"CSCheatManager",&DAT_1468a70c0,FUN_140447710,0x28,0x10000000,0,
                  L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1468a70c0;
}



// FUNCTION 141582f10 FUN_141582f10 body=162 status=ok
// SIG undefined FUN_141582f10(void)

longlong FUN_141582f10(void)

{
  if (DAT_1468a7498 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"GFxCSSubtitles",&DAT_1468a7498,FUN_140447710,0x220,0x10000008,0
                  ,L"Engine",FUN_141585550,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_1468a7498;
}



// FUNCTION 141582fc0 FUN_141582fc0 body=53 status=ok
// SIG undefined FUN_141582fc0(void)

void FUN_141582fc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144c89f30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141583020 FUN_141583020 body=151 status=ok
// SIG undefined FUN_141583020(void)

longlong FUN_141583020(void)

{
  if (DAT_1468a7198 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"CSPuzzleIntroManager",&DAT_1468a7198,FUN_140447710,0x68,
                  0x10000000,0,L"Engine",FUN_141584780,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1468a7198;
}



// FUNCTION 1415830c0 FUN_1415830c0 body=162 status=ok
// SIG undefined FUN_1415830c0(void)

longlong FUN_1415830c0(void)

{
  if (DAT_1468a7358 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"GFxCSPuzzleGrid",&DAT_1468a7358,FUN_140447710,0x1f0,0x10000008,
                  0,L"Engine",FUN_141584fe0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_1468a7358;
}



// FUNCTION 141583170 FUN_141583170 body=162 status=ok
// SIG undefined FUN_141583170(void)

longlong FUN_141583170(void)

{
  if (DAT_1468a74b8 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"GFxCSTokenPool",&DAT_1468a74b8,FUN_140447710,0x1a0,0x10000008,0
                  ,L"Engine",FUN_141585660,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_1468a74b8;
}



// FUNCTION 141583220 FUN_141583220 body=53 status=ok
// SIG undefined FUN_141583220(void)

void FUN_141583220(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &PTR_FUN_144c8a2c0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141583260 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGameInstanceGameParameters::GetPrivateStaticClass(void)

{
  if (DAT_1468a7270 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"GFxCSButton",&DAT_1468a7270,FUN_141587c10,800,0x10000008,0,
                  L"Engine",&LAB_141584a20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  URemnantGameInstance::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468a7270;
}



// FUNCTION 141583320 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMaterialParameterCollectionInstance::GetPrivateStaticClass(void)

{
  if (DAT_1468a71a8 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"CSPuzzleSession",&DAT_1468a71a8,FUN_140447710,0xf8,0x10000000,0
                  ,L"Engine",FUN_1415847e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1468a71a8;
}



// FUNCTION 1415833c0 FUN_1415833c0 body=162 status=ok
// SIG undefined FUN_1415833c0(void)

longlong FUN_1415833c0(void)

{
  if (DAT_1468a72b0 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"GFxCSHUD",&DAT_1468a72b0,FUN_141587c40,0x720,0x10000000,0,
                  L"Engine",FUN_141584aa0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141343ff0,&LAB_140447700,0);
  }
  return DAT_1468a72b0;
}



// FUNCTION 141583480 FUN_141583480 body=162 status=ok
// SIG undefined FUN_141583480(void)

longlong FUN_141583480(void)

{
  if (DAT_1468a70d0 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"CSCondition",&DAT_1468a70d0,FUN_140447710,0x88,0x10000000,0,
                  L"Engine",FUN_1415846a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_1468a70d0;
}



// FUNCTION 141583530 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USoUIInputKeySelector::GetPrivateStaticClass(void)

{
  if (DAT_1468a72c0 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"GFxCSSubMenu",&DAT_1468a72c0,FUN_140447710,0x6a0,0x10000000,0,
                  L"Engine",&LAB_141585530,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141344000,&LAB_140447700,0);
  }
  return DAT_1468a72c0;
}



// FUNCTION 1415835f0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass(void)

{
  if (DAT_1468a7368 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"GFxCSPuzzleGuide",&DAT_1468a7368,FUN_140447710,400,0x10000008,0
                  ,L"Engine",FUN_141585090,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_1468a7368;
}



// FUNCTION 1415836c0 FUN_1415836c0 body=162 status=ok
// SIG undefined FUN_1415836c0(void)

longlong FUN_1415836c0(void)

{
  if (DAT_1468a74e0 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"GFxCSWhatsThisMenu",&DAT_1468a74e0,FUN_141587d60,0x720,
                  0x10000000,0,L"Engine",FUN_141585700,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoUIInputKeySelector::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468a74e0;
}



// FUNCTION 141583770 FUN_141583770 body=162 status=ok
// SIG undefined FUN_141583770(void)

longlong FUN_141583770(void)

{
  if (DAT_1468a73c8 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"GFxCSPuzzleMenu",&DAT_1468a73c8,FUN_141587d00,0x830,0x10000000,
                  0,L"Engine",FUN_1415850e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoUIInputKeySelector::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468a73c8;
}



// FUNCTION 141583820 FUN_141583820 body=47 status=ok
// SIG undefined FUN_141583820(void)

longlong FUN_141583820(void)

{
  if (DAT_1468a74d8 == 0) {
    FUN_141786440(&DAT_1468a74d8,&PTR_FUN_144c84300);
  }
  return DAT_1468a74d8;
}



// FUNCTION 141583850 FUN_141583850 body=47 status=ok
// SIG undefined FUN_141583850(void)

longlong FUN_141583850(void)

{
  if (DAT_1468a74c0 == 0) {
    FUN_141786a30(&DAT_1468a74c0,&PTR_FUN_1464a6f80);
  }
  return DAT_1468a74c0;
}



// FUNCTION 141583880 FUN_141583880 body=47 status=ok
// SIG undefined FUN_141583880(void)

longlong FUN_141583880(void)

{
  if (DAT_1468a74c8 == 0) {
    FUN_141786a30(&DAT_1468a74c8,&PTR_FUN_1464a6fc0);
  }
  return DAT_1468a74c8;
}



// FUNCTION 1415838b0 FUN_1415838b0 body=47 status=ok
// SIG undefined FUN_1415838b0(void)

longlong FUN_1415838b0(void)

{
  if (DAT_1468a74d0 == 0) {
    FUN_141786a30(&DAT_1468a74d0,&PTR_FUN_1464a7040);
  }
  return DAT_1468a74d0;
}



// FUNCTION 1415838e0 FUN_1415838e0 body=162 status=ok
// SIG undefined FUN_1415838e0(void)

longlong FUN_1415838e0(void)

{
  if (DAT_1468a7230 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"GFxCSBoosterItem",&DAT_1468a7230,FUN_140447710,0x390,0x10000008
                  ,0,L"Engine",FUN_1415848e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGameInstanceGameParameters::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468a7230;
}



// FUNCTION 141583990 FUN_141583990 body=162 status=ok
// SIG undefined FUN_141583990(void)

longlong FUN_141583990(void)

{
  if (DAT_1468a7258 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"GFxCSBoosterShopMenu",&DAT_1468a7258,FUN_141587be0,0x710,
                  0x10000000,0,L"Engine",FUN_141584970,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoUIInputKeySelector::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468a7258;
}



// FUNCTION 141583a50 FUN_141583a50 body=47 status=ok
// SIG undefined FUN_141583a50(void)

longlong FUN_141583a50(void)

{
  if (DAT_1468a73c0 == 0) {
    FUN_141786440(&DAT_1468a73c0,&PTR_FUN_144c84f70);
  }
  return DAT_1468a73c0;
}



// FUNCTION 141583a80 FUN_141583a80 body=47 status=ok
// SIG undefined FUN_141583a80(void)

longlong FUN_141583a80(void)

{
  if (DAT_1468a7378 == 0) {
    FUN_141786a30(&DAT_1468a7378,&PTR_FUN_1464a4c10);
  }
  return DAT_1468a7378;
}



// FUNCTION 141583ab0 FUN_141583ab0 body=47 status=ok
// SIG undefined FUN_141583ab0(void)

longlong FUN_141583ab0(void)

{
  if (DAT_1468a7380 == 0) {
    FUN_141786a30(&DAT_1468a7380,&PTR_FUN_1464a4c50);
  }
  return DAT_1468a7380;
}



// FUNCTION 141583ae0 FUN_141583ae0 body=47 status=ok
// SIG undefined FUN_141583ae0(void)

longlong FUN_141583ae0(void)

{
  if (DAT_1468a7388 == 0) {
    FUN_141786a30(&DAT_1468a7388,&PTR_FUN_1464a4c90);
  }
  return DAT_1468a7388;
}



// FUNCTION 141583b10 FUN_141583b10 body=47 status=ok
// SIG undefined FUN_141583b10(void)

longlong FUN_141583b10(void)

{
  if (DAT_1468a7390 == 0) {
    FUN_141786a30(&DAT_1468a7390,&PTR_FUN_1464a4cd0);
  }
  return DAT_1468a7390;
}



// FUNCTION 141583b40 FUN_141583b40 body=47 status=ok
// SIG undefined FUN_141583b40(void)

longlong FUN_141583b40(void)

{
  if (DAT_1468a7398 == 0) {
    FUN_141786a30(&DAT_1468a7398,&PTR_FUN_1464a4dd0);
  }
  return DAT_1468a7398;
}



// FUNCTION 141583b70 FUN_141583b70 body=47 status=ok
// SIG undefined FUN_141583b70(void)

longlong FUN_141583b70(void)

{
  if (DAT_1468a73a0 == 0) {
    FUN_141786a30(&DAT_1468a73a0,&PTR_FUN_1464a4ed0);
  }
  return DAT_1468a73a0;
}



// FUNCTION 141583ba0 FUN_141583ba0 body=47 status=ok
// SIG undefined FUN_141583ba0(void)

longlong FUN_141583ba0(void)

{
  if (DAT_1468a73a8 == 0) {
    FUN_141786a30(&DAT_1468a73a8,&PTR_FUN_1464a4f90);
  }
  return DAT_1468a73a8;
}



// FUNCTION 141583bd0 FUN_141583bd0 body=47 status=ok
// SIG undefined FUN_141583bd0(void)

longlong FUN_141583bd0(void)

{
  if (DAT_1468a73b0 == 0) {
    FUN_141786a30(&DAT_1468a73b0,&PTR_FUN_1464a5090);
  }
  return DAT_1468a73b0;
}



// FUNCTION 141583c00 FUN_141583c00 body=47 status=ok
// SIG undefined FUN_141583c00(void)

longlong FUN_141583c00(void)

{
  if (DAT_1468a73b8 == 0) {
    FUN_141786a30(&DAT_1468a73b8,&PTR_FUN_1464a5150);
  }
  return DAT_1468a73b8;
}



// FUNCTION 141583c30 FUN_141583c30 body=47 status=ok
// SIG undefined FUN_141583c30(void)

longlong FUN_141583c30(void)

{
  if (DAT_1468a7268 == 0) {
    FUN_141786440(&DAT_1468a7268,&PTR_GetPrivateStaticClass_144c85420);
  }
  return DAT_1468a7268;
}



// FUNCTION 141583c60 FUN_141583c60 body=47 status=ok
// SIG undefined FUN_141583c60(void)

longlong FUN_141583c60(void)

{
  if (DAT_1468a7250 == 0) {
    FUN_141786440(&DAT_1468a7250,&PTR_FUN_144c84cb0);
  }
  return DAT_1468a7250;
}



// FUNCTION 141583c90 FUN_141583c90 body=47 status=ok
// SIG undefined FUN_141583c90(void)

longlong FUN_141583c90(void)

{
  if (DAT_1468a72b8 == 0) {
    FUN_141786440(&DAT_1468a72b8,&PTR_GetPrivateStaticClass_144c7e6b0);
  }
  return DAT_1468a72b8;
}



// FUNCTION 141583cc0 FUN_141583cc0 body=47 status=ok
// SIG undefined FUN_141583cc0(void)

longlong FUN_141583cc0(void)

{
  if (DAT_1468a7238 == 0) {
    FUN_141786a30(&DAT_1468a7238,&PTR_FUN_1464a31f0);
  }
  return DAT_1468a7238;
}



// FUNCTION 141583cf0 FUN_141583cf0 body=47 status=ok
// SIG undefined FUN_141583cf0(void)

longlong FUN_141583cf0(void)

{
  if (DAT_1468a7240 == 0) {
    FUN_141786a30(&DAT_1468a7240,&PTR_FUN_1464a32f0);
  }
  return DAT_1468a7240;
}



// FUNCTION 141583d20 FUN_141583d20 body=47 status=ok
// SIG undefined FUN_141583d20(void)

longlong FUN_141583d20(void)

{
  if (DAT_1468a7248 == 0) {
    FUN_141786a30(&DAT_1468a7248,&PTR_FUN_1464a3370);
  }
  return DAT_1468a7248;
}



// FUNCTION 141583d80 FUN_141583d80 body=162 status=ok
// SIG undefined FUN_141583d80(void)

longlong FUN_141583d80(void)

{
  if (DAT_1468a7158 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"CSLevelData",&DAT_1468a7158,FUN_140447710,0x40,0x10000000,0,
                  L"Engine",FUN_141584720,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_1468a7158;
}



// FUNCTION 141583e30 FUN_141583e30 body=47 status=ok
// SIG undefined FUN_141583e30(void)

longlong FUN_141583e30(void)

{
  if (DAT_1468a7260 == 0) {
    FUN_141786a30(&DAT_1468a7260,&PTR_FUN_1464a35c0);
  }
  return DAT_1468a7260;
}



// FUNCTION 141583e70 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AIntroSparrow::GetPrivateStaticClass(void)

{
  if (DAT_1468a7288 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"GFxCSHelpMenu",&DAT_1468a7288,
                  StaticRegisterNativesAIntroSparrow,0x7b0,0x10000000,0,L"Engine",FUN_141584b80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1412d9d00,&LAB_140447700,0);
  }
  return DAT_1468a7288;
}



// FUNCTION 141583f30 FUN_141583f30 body=47 status=ok
// SIG undefined FUN_141583f30(void)

longlong FUN_141583f30(void)

{
  if (DAT_1468a73d0 == 0) {
    FUN_141786440(&DAT_1468a73d0,&PTR_FUN_144c85780);
  }
  return DAT_1468a73d0;
}



// FUNCTION 141583f60 FUN_141583f60 body=47 status=ok
// SIG undefined FUN_141583f60(void)

longlong FUN_141583f60(void)

{
  if (DAT_1468a7280 == 0) {
    FUN_141786440(&DAT_1468a7280,&PTR_GetPrivateStaticClass_144c859b0);
  }
  return DAT_1468a7280;
}



// FUNCTION 141583f90 FUN_141583f90 body=47 status=ok
// SIG undefined FUN_141583f90(void)

longlong FUN_141583f90(void)

{
  if (DAT_1468a7278 == 0) {
    FUN_141786a30(&DAT_1468a7278,&PTR_FUN_1464a36f0);
  }
  return DAT_1468a7278;
}



// FUNCTION 141583fe0 FUN_141583fe0 body=53 status=ok
// SIG undefined FUN_141583fe0(void)

void FUN_141583fe0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe8;
    *puVar1 = &PTR_FUN_144c89060;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141584040 FUN_141584040 body=47 status=ok
// SIG undefined FUN_141584040(void)

longlong FUN_141584040(void)

{
  if (DAT_1468a72a8 == 0) {
    FUN_141786440(&DAT_1468a72a8,&PTR_FUN_144c86ab0);
  }
  return DAT_1468a72a8;
}



// FUNCTION 141584070 FUN_141584070 body=47 status=ok
// SIG undefined FUN_141584070(void)

longlong FUN_141584070(void)

{
  if (DAT_1468a7290 == 0) {
    FUN_141786a30(&DAT_1468a7290,&PTR_FUN_1464a3960);
  }
  return DAT_1468a7290;
}



// FUNCTION 1415840a0 FUN_1415840a0 body=47 status=ok
// SIG undefined FUN_1415840a0(void)

longlong FUN_1415840a0(void)

{
  if (DAT_1468a7298 == 0) {
    FUN_141786a30(&DAT_1468a7298,&PTR_FUN_1464a39e0);
  }
  return DAT_1468a7298;
}



// FUNCTION 1415840d0 FUN_1415840d0 body=47 status=ok
// SIG undefined FUN_1415840d0(void)

longlong FUN_1415840d0(void)

{
  if (DAT_1468a72a0 == 0) {
    FUN_141786a30(&DAT_1468a72a0,&PTR_FUN_1464a3aa0);
  }
  return DAT_1468a72a0;
}



// FUNCTION 141584100 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAIAsyncTaskBlueprintProxy::GetPrivateStaticClass(void)

{
  if (DAT_1468a7548 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"TutorialPuzzle",&DAT_1468a7548,
                  StaticRegisterNativesUAIAsyncTaskBlueprintProxy,0x68,0x10000000,0,L"Engine",
                  FUN_1415857f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1468a7548;
}



// FUNCTION 1415841b0 FUN_1415841b0 body=162 status=ok
// SIG undefined FUN_1415841b0(void)

longlong FUN_1415841b0(void)

{
  if (DAT_1468a7558 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"CSGlobals",&DAT_1468a7558,FUN_140447710,0x1f0,0x10000000,0,
                  L"Engine",&LAB_141584700,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_1468a7558;
}



// FUNCTION 141584270 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass(void)

{
  if (DAT_1468a7418 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"GFxCSRewardScreenItem",&DAT_1468a7418,FUN_140447710,400,
                  0x10000008,0,L"Engine",FUN_1415852c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_1468a7418;
}



// FUNCTION 141584320 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ACameraActor::GetPrivateStaticClass(void)

{
  if (DAT_1468a7478 == 0) {
    FUN_14171ccd0(L"/Script/OakCS",L"GFxCSRewardScreenMenu",&DAT_1468a7478,FUN_141587d30,0x890,
                  0x10000000,0,L"Engine",FUN_141585310,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoUIInputKeySelector::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468a7478;
}



// FUNCTION 1415843e0 FUN_1415843e0 body=168 status=ok
// SIG undefined FUN_1415843e0(void)

void FUN_1415843e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140ac4d50(puVar1,param_1);
    puVar1[0xcc] = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144c87c60;
    puVar1[0x8b] = &PTR_LAB_144c88408;
    puVar1[0x8c] = &PTR_LAB_144c88468;
    puVar1[0x8d] = &PTR_LAB_144c88490;
    puVar1[0x8e] = &PTR_LAB_144c884a8;
    puVar1[0x8f] = &PTR_LAB_144c884d0;
    puVar1[0x90] = &PTR_LAB_144c884e0;
    puVar1[0x92] = &PTR_LAB_144c88520;
    puVar1[0x93] = &PTR_LAB_144c88538;
  }
  return;
}



// FUNCTION 141584490 FUN_141584490 body=268 status=ok
// SIG undefined FUN_141584490(void)

void FUN_141584490(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140ac4f70(puVar1,param_1);
    *puVar1 = &PTR_FUN_144c88608;
    puVar1[0x8b] = &PTR_LAB_144c88d70;
    puVar1[0x9d] = 0;
    puVar1[0xa1] = 0;
    puVar1[0xa2] = 0;
    *(undefined4 *)(puVar1 + 0x9e) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x4f4) = 0;
    puVar1[0xa0] = 0;
    *(undefined4 *)(puVar1 + 0xa2) = 0;
    if (0x7fffffff < *(uint *)((longlong)puVar1 + 0x514)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 0xa1,0);
    }
    if ((undefined2 *)puVar1[0xa1] != (undefined2 *)0x0) {
      *(undefined2 *)puVar1[0xa1] = 0;
    }
    *(undefined8 *)((longlong)puVar1 + 0x4f4) = 0;
    *(undefined4 *)(puVar1 + 0x9e) = 0xffffffff;
    puVar1[0xa0] = 0;
    *(undefined4 *)(puVar1 + 0xa2) = 0;
    if ((*(int *)((longlong)puVar1 + 0x514) < 0) && (*(int *)((longlong)puVar1 + 0x514) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 0xa1,0);
    }
    if ((undefined2 *)puVar1[0xa1] != (undefined2 *)0x0) {
      *(undefined2 *)puVar1[0xa1] = 0;
    }
    *(undefined4 *)(puVar1 + 0x9f) = 0;
    puVar1[0xa3] = 0;
  }
  return;
}



// FUNCTION 1415845a0 FUN_1415845a0 body=50 status=ok
// SIG undefined FUN_1415845a0(void)

void FUN_1415845a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144c86f58;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
  }
  return;
}



// FUNCTION 1415845e0 FUN_1415845e0 body=50 status=ok
// SIG undefined FUN_1415845e0(void)

void FUN_1415845e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144c87210;
  }
  return;
}



// FUNCTION 141584620 FUN_141584620 body=50 status=ok
// SIG undefined FUN_141584620(void)

void FUN_141584620(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144c874a8;
  }
  return;
}



// FUNCTION 141584660 FUN_141584660 body=50 status=ok
// SIG undefined FUN_141584660(void)

void FUN_141584660(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144c87740;
  }
  return;
}



// FUNCTION 1415846a0 FUN_1415846a0 body=90 status=ok
// SIG undefined FUN_1415846a0(void)

void FUN_1415846a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *(undefined1 *)((longlong)puVar1 + 0x29) = 3;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)((longlong)puVar1 + 100) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144c879d8;
    *(undefined4 *)(puVar1 + 0x10) = 0xbf800000;
  }
  return;
}



// FUNCTION 141584720 FUN_141584720 body=51 status=ok
// SIG undefined FUN_141584720(void)

void FUN_141584720(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_144c88de0;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  return;
}



// FUNCTION 141584780 FUN_141584780 body=94 status=ok
// SIG undefined FUN_141584780(void)

void FUN_141584780(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_144c8a048;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    *(undefined4 *)(puVar1 + 7) = 0x3e800000;
    *(undefined8 *)((longlong)puVar1 + 0x3c) = 0x3e800000;
    *(undefined1 *)((longlong)puVar1 + 0x44) = 0;
    *(undefined4 *)(puVar1 + 9) = 0x43af0000;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0xffffffff;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
  }
  return;
}



// FUNCTION 1415847e0 FUN_1415847e0 body=247 status=ok
// SIG undefined FUN_1415847e0(void)

void FUN_1415847e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_144c8a3d8;
    puVar1[5] = 0;
    puVar1[6] = 0;
    FWeakObjectPtr::operator=(puVar1 + 8,0);
    FWeakObjectPtr::operator=(puVar1 + 9,0);
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    *(undefined4 *)(puVar1 + 0x13) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x9c) = 0xc00000014;
    puVar1[0x17] = 0;
    *(undefined4 *)((longlong)puVar1 + 0xa4) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x15) = 0x3f933333;
    *(undefined4 *)((longlong)puVar1 + 0xac) = 0x41200000;
    *(undefined4 *)(puVar1 + 0x16) = 0x41600000;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    *(undefined4 *)(puVar1 + 0x1e) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xf4) = 0;
  }
  return;
}



// FUNCTION 1415848e0 FUN_1415848e0 body=144 status=ok
// SIG undefined FUN_1415848e0(void)

void FUN_1415848e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141585b30(puVar1,param_1);
    *(undefined4 *)(puVar1 + 99) = 0xffffffff;
    *puVar1 = &PTR_FUN_144c8bc48;
    puVar1[0x2e] = &PTR_LAB_144c8bf78;
    puVar1[100] = 0;
    puVar1[0x65] = 0;
    puVar1[0x66] = 0;
    puVar1[0x67] = 0;
    puVar1[0x68] = 0;
    puVar1[0x69] = 0;
    puVar1[0x6a] = 0xffffffffffffffff;
    puVar1[0x6b] = 0xffffffffffffffff;
    puVar1[0x6c] = 0;
    *(undefined4 *)(puVar1 + 0x6d) = 0;
  }
  return;
}



// FUNCTION 141584970 FUN_141584970 body=164 status=ok
// SIG undefined FUN_141584970(void)

void FUN_141584970(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141585ca0(puVar1,param_1);
    *puVar1 = &PTR_FUN_144c8bfc8;
    puVar1[0x9b] = &PTR_LAB_144c8c580;
    FText::FText(puVar1 + 0xd4);
    FText::FText(puVar1 + 0xd7);
    *(undefined4 *)(puVar1 + 0xda) = 3;
    puVar1[0xdb] = 0;
    puVar1[0xdc] = 0;
    puVar1[0xdd] = 0;
    FWeakObjectPtr::operator=(puVar1 + 0xde,0);
    puVar1[0xdf] = 0;
    *(undefined4 *)(puVar1 + 0xe0) = 0xffffffff;
    puVar1[0xe1] = 0;
  }
  return;
}



// FUNCTION 141584a40 FUN_141584a40 body=41 status=ok
// SIG undefined FUN_141584a40(void)

void FUN_141584a40(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141585bb0(puVar1,param_1);
    *puVar1 = &PTR_FUN_144c89448;
  }
  return;
}



// FUNCTION 141584a70 FUN_141584a70 body=41 status=ok
// SIG undefined FUN_141584a70(void)

void FUN_141584a70(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141585bb0(puVar1,param_1);
    *puVar1 = &PTR_FUN_144c89718;
  }
  return;
}



// FUNCTION 141584aa0 FUN_141584aa0 body=209 status=ok
// SIG undefined FUN_141584aa0(void)

void FUN_141584aa0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140e9aa30(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__14487a8b8;
    puVar1[0x9b] = &PTR_LAB_14487ae60;
    FWeakObjectPtr::operator=(puVar1 + 0xd0,0);
    puVar1[0xd1] = 0;
    puVar1[0xd2] = 0;
    *puVar1 = &PTR_FUN_144c8ada0;
    puVar1[0x9b] = &PTR_LAB_144c8b348;
    puVar1[0xd4] = 0;
    *(undefined4 *)(puVar1 + 0xd5) = 0;
    puVar1[0xd7] = 0;
    puVar1[0xd8] = 0;
    puVar1[0xd9] = 0;
    puVar1[0xda] = 0;
    puVar1[0xdb] = 0;
    puVar1[0xdc] = 0;
    puVar1[0xdd] = 0;
    puVar1[0xde] = 0;
    puVar1[0xdf] = 0;
    puVar1[0xe0] = 0;
    puVar1[0xe1] = 0;
    *(undefined1 *)(puVar1 + 0xe2) = 0;
  }
  return;
}



// FUNCTION 141584b80 FUN_141584b80 body=442 status=ok
// SIG undefined FUN_141584b80(void)

void FUN_141584b80(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140e9aa30(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144c8c7b0;
    puVar1[0x9b] = &PTR_LAB_144c8cd18;
    puVar1[0xd0] = 0;
    puVar1[0xd1] = 0;
    puVar1[0xd2] = 0;
    puVar1[0xd3] = 0;
    puVar1[0xd4] = 0;
    puVar1[0xd5] = 0;
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (puVar1 + 0xd6,L"The Game Objective",L"GFxCSHelpMenu",L"ObjectiveRuleTitle");
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (puVar1 + 0xd9,
               L"The objective of the game is to align the tiles with the guidelines on the left.",
               L"GFxCSHelpMenu",L"ObjectiveRuleText");
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (puVar1 + 0xdc,L"Inserting, Removing",L"GFxCSHelpMenu",L"TokensRuleTitle");
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (puVar1 + 0xdf,
               L"To align tiles, you add Tokens which push all tiles upward. You have limited amount of Tokens so try to use them as efficiently as possible! You can take back a Token by selecting it again."
               ,L"GFxCSHelpMenu",L"TokensRuleText");
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (puVar1 + 0xe2,L"Reach the Target Score",L"GFxCSHelpMenu",L"ScoreRuleTitle");
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (puVar1 + 0xe5,
               L"Each aligned tile will fill the score gauge! Once filled up, you reached the Target Score but you can still aim for more. Want a bigger reward? Try to beat the high score for each puzzle. The higher your score, the bigger the reward."
               ,L"GFxCSHelpMenu",L"ScoreRuleText");
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (puVar1 + 0xe8,L"Guide Lines",L"GFxCSHelpMenu",L"GuidesRuleTitle");
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (puVar1 + 0xeb,
               L"A guide line can have either one or two colors. If there are two colors, you can fill the line with tiles of either colors."
               ,L"GFxCSHelpMenu",L"GuidesRuleText");
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (puVar1 + 0xee,L"Insert / Remove Tokens",L"GFxCSHelpMenu",L"AButtonLabel");
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (puVar1 + 0xf1,L"Move Cursor",L"GFxCSHelpMenu",L"MovementLabel");
    *(undefined2 *)(puVar1 + 0xf4) = 0x100;
  }
  return;
}



// FUNCTION 141584d40 FUN_141584d40 body=194 status=ok
// SIG undefined FUN_141584d40(void)

void FUN_141584d40(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141585b30(puVar1,param_1);
    *puVar1 = &PTR_FUN_144c8d620;
    puVar1[0x2e] = &PTR_LAB_144c8d950;
    puVar1[99] = 0;
    puVar1[100] = 0;
    puVar1[0x65] = 0;
    puVar1[0x66] = 0;
    puVar1[0x67] = 0;
    puVar1[0x68] = 0;
    puVar1[0x69] = 0;
    puVar1[0x6a] = 0;
    puVar1[0x6b] = 0;
    puVar1[0x6c] = 0xffffffffffffffff;
    puVar1[0x6d] = 0xffffffffffffffff;
    puVar1[0x6e] = 0;
    *(undefined4 *)(puVar1 + 0x6f) = 0;
    puVar1[0x72] = 0xffffffffffffffff;
    puVar1[0x73] = 0xffffffffffffffff;
    puVar1[0x74] = 0;
    *(undefined4 *)(puVar1 + 0x75) = 0;
  }
  return;
}



// FUNCTION 141584e10 FUN_141584e10 body=55 status=ok
// SIG undefined FUN_141584e10(void)

void FUN_141584e10(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141363e50(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144c8d9a0;
    puVar1[0x2e] = &PTR_LAB_1448c2638;
  }
  return;
}



// FUNCTION 141584e50 FUN_141584e50 body=100 status=ok
// SIG undefined FUN_141584e50(void)

void FUN_141584e50(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141585ca0(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0xd5) = 0x3f800000;
    *puVar1 = &PTR_FUN_144c8dce8;
    puVar1[0x9b] = &PTR_LAB_144c8e2a0;
    puVar1[0xd4] = 0;
    puVar1[0xd6] = 0;
    FWeakObjectPtr::operator=(puVar1 + 0xd7,0);
    return;
  }
  return;
}



// FUNCTION 141584ec0 FUN_141584ec0 body=99 status=ok
// SIG undefined FUN_141584ec0(void)

void FUN_141584ec0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141585ca0(puVar1,param_1);
    *puVar1 = &PTR_FUN_144c8e4a8;
    puVar1[0x9b] = &PTR_LAB_144c8ea60;
    puVar1[0xd4] = 0;
    puVar1[0xd5] = 0;
    puVar1[0xd6] = 0;
    puVar1[0xd7] = 0;
    puVar1[0xd8] = 0;
    puVar1[0xdc] = 0;
  }
  return;
}



// FUNCTION 141584f30 FUN_141584f30 body=74 status=ok
// SIG undefined FUN_141584f30(void)

void FUN_141584f30(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    *(undefined8 *)((longlong)puVar1 + 0x184) = 0x3f800000;
    *puVar1 = &PTR_FUN_144c8ec20;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0;
    *(undefined4 *)(puVar1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 141584f80 FUN_141584f80 body=96 status=ok
// SIG undefined FUN_141584f80(void)

void FUN_141584f80(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    *puVar1 = &PTR_FUN_144c8eec8;
    puVar1[0x2e] = 0;
    *(undefined4 *)(puVar1 + 0x2f) = 0;
    puVar1[0x30] = 0;
    puVar1[0x31] = 0;
    puVar1[0x32] = 0;
    FWeakObjectPtr::operator=(puVar1 + 0x33,0);
    return;
  }
  return;
}



// FUNCTION 141584fe0 FUN_141584fe0 body=174 status=ok
// SIG undefined FUN_141584fe0(void)

void FUN_141584fe0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    *puVar1 = &PTR_FUN_144c8f170;
    puVar1[0x2e] = 0;
    *(undefined4 *)(puVar1 + 0x2f) = 0;
    puVar1[0x30] = 0;
    puVar1[0x31] = 0;
    puVar1[0x32] = 0;
    puVar1[0x33] = 0;
    puVar1[0x34] = 0;
    puVar1[0x35] = 0;
    puVar1[0x36] = 0;
    FWeakObjectPtr::operator=(puVar1 + 0x37,0);
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    *(undefined4 *)(puVar1 + 0x3c) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1e4) = 0;
  }
  return;
}



// FUNCTION 141585090 FUN_141585090 body=76 status=ok
// SIG undefined FUN_141585090(void)

void FUN_141585090(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    *puVar1 = &PTR_FUN_144c8f418;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0;
    FWeakObjectPtr::operator=(puVar1 + 0x30,0);
    return;
  }
  return;
}



// FUNCTION 1415850e0 FUN_1415850e0 body=440 status=ok
// SIG undefined FUN_1415850e0(void)

void FUN_1415850e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141585ca0(puVar1,param_1);
    *puVar1 = &PTR_FUN_144c8f6c0;
    puVar1[0x9b] = &PTR_LAB_144c8fc78;
    puVar1[0xd4] = 0;
    *(undefined4 *)(puVar1 + 0xd5) = 0;
    puVar1[0xd6] = 0;
    puVar1[0xd7] = 0;
    *(undefined1 *)(puVar1 + 0xd8) = 0;
    puVar1[0xd9] = 0;
    puVar1[0xdc] = 0;
    puVar1[0xdd] = 0;
    puVar1[0xde] = 0;
    puVar1[0xdf] = 0;
    puVar1[0xe0] = 0;
    puVar1[0xe1] = 0;
    puVar1[0xe2] = 0;
    puVar1[0xe3] = 0;
    puVar1[0xe4] = 0;
    puVar1[0xe5] = 0;
    puVar1[0xe6] = 0;
    puVar1[0xe7] = 0;
    puVar1[0xe8] = 0;
    puVar1[0xe9] = 0;
    puVar1[0xea] = 0;
    puVar1[0xeb] = 0;
    puVar1[0xec] = 0;
    puVar1[0xed] = 0;
    puVar1[0xee] = 0;
    puVar1[0xef] = 0;
    puVar1[0xf0] = 0;
    puVar1[0xf1] = 0;
    puVar1[0xf2] = 0;
    puVar1[0xf3] = 0;
    puVar1[0xf4] = 0;
    puVar1[0xf5] = 0;
    puVar1[0xf6] = 0;
    puVar1[0xf7] = 0;
    puVar1[0xf8] = 0;
    puVar1[0xf9] = 0;
    puVar1[0xfa] = 0;
    puVar1[0xfb] = 0;
    puVar1[0xfc] = 0;
    puVar1[0xfd] = 0;
    puVar1[0xfe] = 0;
    puVar1[0xff] = 0;
    puVar1[0x100] = 0;
    FWeakObjectPtr::operator=(puVar1 + 0x101,0);
    FWeakObjectPtr::operator=(puVar1 + 0x102,0);
    FWeakObjectPtr::operator=(puVar1 + 0x103,0);
    *(undefined4 *)(puVar1 + 0x104) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x824) = 0x41200000;
    *(undefined4 *)((longlong)puVar1 + 0x82c) = 0x1000000;
  }
  return;
}



// FUNCTION 1415852c0 FUN_1415852c0 body=70 status=ok
// SIG undefined FUN_1415852c0(void)

void FUN_1415852c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    *(undefined1 *)((longlong)puVar1 + 0x184) = 1;
    *puVar1 = &PTR_FUN_144c8fe90;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0;
    *(undefined4 *)(puVar1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 141585310 FUN_141585310 body=471 status=ok
// SIG undefined FUN_141585310(void)

void FUN_141585310(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141585ca0(puVar1,param_1);
    *(undefined1 *)(puVar1 + 0xd4) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144c90138;
    *(undefined4 *)((longlong)puVar1 + 0x6a4) = 0x3f800000;
    puVar1[0x9b] = &PTR_LAB_144c906f0;
    *(undefined4 *)(puVar1 + 0xd5) = 0x3f000000;
    *(undefined4 *)((longlong)puVar1 + 0x6ac) = 0x3f000000;
    FText::FText(puVar1 + 0xd6);
    FText::FText(puVar1 + 0xd9);
    FText::FText(puVar1 + 0xdc);
    FText::FText(puVar1 + 0xdf);
    FText::FText(puVar1 + 0xe2);
    puVar1[0xe5] = 0;
    FWeakObjectPtr::operator=(puVar1 + 0xe6,0);
    puVar1[0xe7] = 0;
    puVar1[0xe8] = 0;
    puVar1[0xe9] = 0;
    puVar1[0xea] = 0;
    puVar1[0xeb] = 0;
    puVar1[0xec] = 0;
    puVar1[0xed] = 0;
    puVar1[0xee] = 0;
    puVar1[0xef] = 0;
    puVar1[0xf0] = 0;
    puVar1[0xf1] = 0;
    puVar1[0xf2] = 0;
    puVar1[0xf3] = 0;
    puVar1[0xf4] = 0;
    puVar1[0xf5] = 0;
    puVar1[0xf6] = 0;
    puVar1[0xf7] = 0xffffffffffffffff;
    puVar1[0xf8] = 0xffffffffffffffff;
    puVar1[0xf9] = 0;
    *(undefined4 *)(puVar1 + 0xfa) = 0;
    puVar1[0xfd] = 0xffffffffffffffff;
    puVar1[0xfe] = 0xffffffffffffffff;
    puVar1[0xff] = 0;
    *(undefined4 *)(puVar1 + 0x100) = 0;
    puVar1[0x103] = 0;
    *(undefined4 *)(puVar1 + 0x104) = 0;
    FWeakObjectPtr::operator=((longlong)puVar1 + 0x824,0);
    FWeakObjectPtr::operator=((longlong)puVar1 + 0x82c,0);
    FUN_141552180(puVar1 + 0x107,0);
    FUN_141551dc0(puVar1 + 0x109);
    puVar1[0x10d] = 0;
    puVar1[0x10e] = 0;
    puVar1[0x10f] = 0;
    *(undefined4 *)(puVar1 + 0x110) = 0;
    *(undefined4 *)(puVar1 + 0x111) = 0;
  }
  return;
}



// FUNCTION 1415854f0 FUN_1415854f0 body=55 status=ok
// SIG undefined FUN_1415854f0(void)

void FUN_1415854f0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140e9aa30(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144c90910;
    puVar1[0x9b] = &PTR_LAB_144c90e78;
  }
  return;
}



// FUNCTION 141585550 FUN_141585550 body=259 status=ok
// SIG undefined FUN_141585550(void)

void FUN_141585550(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0x2e) = 0x40200000;
    *puVar1 = &PTR_FUN_144c90ff8;
    *(undefined4 *)((longlong)puVar1 + 0x174) = 0x43340000;
    puVar1[0x2f] = 0;
    puVar1[0x30] = 0;
    FWeakObjectPtr::operator=(puVar1 + 0x31,0);
    FWeakObjectPtr::operator=(puVar1 + 0x32,0);
    FWeakObjectPtr::operator=(puVar1 + 0x33,0);
    puVar1[0x34] = 0;
    puVar1[0x35] = 0;
    puVar1[0x37] = 0;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    InitializeSRWLock((PSRWLOCK)(puVar1 + 0x3c));
    puVar1[0x3d] = 0;
    *(undefined2 *)(puVar1 + 0x3e) = 0;
    *(undefined4 *)((longlong)puVar1 + 500) = 0xbf800000;
    *(undefined4 *)(puVar1 + 0x3f) = 0x42c80000;
    *(undefined4 *)((longlong)puVar1 + 0x1fc) = 0x42480000;
    uVar2 = FUN_1404b03b0();
    FText::FText(puVar1 + 0x40,uVar2);
  }
  return;
}



// FUNCTION 141585660 FUN_141585660 body=97 status=ok
// SIG undefined FUN_141585660(void)

void FUN_141585660(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    *puVar1 = &PTR_FUN_144c912a0;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0;
    puVar1[0x30] = 0;
    puVar1[0x31] = 0;
    puVar1[0x32] = 0;
    FWeakObjectPtr::operator=(puVar1 + 0x33,0);
    return;
  }
  return;
}



// FUNCTION 1415856d0 FUN_1415856d0 body=41 status=ok
// SIG undefined FUN_1415856d0(void)

void FUN_1415856d0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141585bb0(puVar1,param_1);
    *puVar1 = &PTR_FUN_144c899e8;
  }
  return;
}



// FUNCTION 141585700 FUN_141585700 body=215 status=ok
// SIG undefined FUN_141585700(void)

void FUN_141585700(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141585ca0(puVar1,param_1);
    *puVar1 = &PTR_FUN_144c91548;
    puVar1[0xd5] = 0;
    puVar1[0x9b] = &PTR_LAB_144c91b00;
    FName::FName(puVar1 + 0xd6,L"Material",1);
    FName::FName(puVar1 + 0xd7,L"MaskDensity",1);
    FName::FName(puVar1 + 0xd8,&DAT_144c91c98,1);
    puVar1[0xd9] = 0;
    *(undefined4 *)(puVar1 + 0xda) = 0x42480000;
    *(undefined4 *)((longlong)puVar1 + 0x6d4) = 0x40400000;
    puVar1[0xdd] = 0;
    puVar1[0xde] = 0;
    puVar1[0xdf] = 0;
    FUN_141552180(puVar1 + 0xe0,0);
    *(undefined4 *)(puVar1 + 0xe2) = 0;
  }
  return;
}



// FUNCTION 1415857f0 FUN_1415857f0 body=87 status=ok
// SIG undefined FUN_1415857f0(void)

void FUN_1415857f0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144c8a650;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x54) = 1;
    *(undefined4 *)(puVar1 + 0xb) = 0x3f933333;
    *(undefined4 *)((longlong)puVar1 + 0x5c) = 8;
    *(undefined4 *)(puVar1 + 0xc) = 10;
  }
  return;
}



// FUNCTION 141585850 FUN_141585850 body=280 status=ok
// SIG undefined FUN_141585850(void)

undefined8 * FUN_141585850(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = FUN_1404b03b0();
  FText::FText(param_1 + 9,uVar1);
  uVar1 = FUN_1404b03b0();
  FText::FText(param_1 + 0xc,uVar1);
  *(undefined4 *)(param_1 + 0xf) = 1;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x96;
  *(undefined4 *)(param_1 + 0x10) = 5;
  *(undefined4 *)((longlong)param_1 + 0x84) = 10;
  *(undefined4 *)(param_1 + 0x11) = 8;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 7;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xb4)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x15,0);
  }
  if ((undefined2 *)param_1[0x15] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x15] = 0;
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  FText::FText(param_1 + 0x17);
  FText::FText(param_1 + 0x1a);
  return param_1;
}



// FUNCTION 141585970 FUN_141585970 body=443 status=ok
// SIG undefined FUN_141585970(void)

undefined8 * FUN_141585970(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_144c89cb8;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 8) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f19999a;
  *(undefined4 *)(param_1 + 9) = 0x42f00000;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 10) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3e800000;
  *(undefined4 *)(param_1 + 0xb) = 0x3e800000;
  FWeakObjectPtr::operator=((longlong)param_1 + 0x5c,0);
  FWeakObjectPtr::operator=((longlong)param_1 + 100,0);
  FWeakObjectPtr::operator=((longlong)param_1 + 0x6c,0);
  FWeakObjectPtr::operator=((longlong)param_1 + 0x74,0);
  FWeakObjectPtr::operator=((longlong)param_1 + 0x7c,0);
  FWeakObjectPtr::operator=((longlong)param_1 + 0x84,0);
  FWeakObjectPtr::operator=((longlong)param_1 + 0x8c,0);
  FWeakObjectPtr::operator=((longlong)param_1 + 0x94,0);
  FWeakObjectPtr::operator=((longlong)param_1 + 0x9c,0);
  FWeakObjectPtr::operator=((longlong)param_1 + 0xa4,0);
  FWeakObjectPtr::operator=((longlong)param_1 + 0xac,0);
  FWeakObjectPtr::operator=((longlong)param_1 + 0xb4,0);
  FWeakObjectPtr::operator=((longlong)param_1 + 0xbc,0);
  FWeakObjectPtr::operator=((longlong)param_1 + 0xc4,0);
  FWeakObjectPtr::operator=((longlong)param_1 + 0xcc,0);
  FWeakObjectPtr::operator=((longlong)param_1 + 0xd4,0);
  FWeakObjectPtr::operator=((longlong)param_1 + 0xdc,0);
  FWeakObjectPtr::operator=((longlong)param_1 + 0xe4,0);
  FWeakObjectPtr::operator=((longlong)param_1 + 0xec,0);
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined2 *)(param_1 + 0x21) = 0;
  FUN_141552180(param_1 + 0x22,0);
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  *(undefined2 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x15a) = 1;
  return param_1;
}



// FUNCTION 141585b30 FUN_141585b30 body=113 status=ok
// SIG undefined FUN_141585b30(void)

undefined8 * FUN_141585b30(undefined8 *param_1)

{
  FUN_1413205b0();
  *(undefined4 *)(param_1 + 0x5b) = 0xffffffff;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined1 *)((longlong)param_1 + 0x2f4) = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *param_1 = &PTR_FUN_144c8aa20;
  param_1[0x2e] = &PTR_LAB_144c8ad50;
  param_1[0x61] = 0;
  param_1[0x62] = DAT_146b3e2a0;
  return param_1;
}



// FUNCTION 141585bb0 FUN_141585bb0 body=237 status=ok
// SIG undefined FUN_141585bb0(void)

undefined8 * FUN_141585bb0(undefined8 *param_1)

{
  FUN_14106e9c0();
  *param_1 = &PTR_FUN_144c89178;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1bc) = 0;
  param_1[0x38] = DAT_1464aa768;
  *(undefined4 *)(param_1 + 0x39) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined2 *)(param_1 + 0x45) = 0;
  *(undefined1 *)((longlong)param_1 + 0x22a) = 0;
  return param_1;
}



// FUNCTION 141585ca0 FUN_141585ca0 body=107 status=ok
// SIG undefined FUN_141585ca0(void)

undefined8 * FUN_141585ca0(undefined8 *param_1)

{
  FUN_140e9aa30();
  *param_1 = &PTR_FUN_144646880;
  param_1[0x9b] = &PTR_LAB_144646df0;
  FWeakObjectPtr::operator=(param_1 + 0xd0,0);
  *param_1 = &PTR__scalar_deleting_destructor__144c8b4c8;
  param_1[0x9b] = &PTR_LAB_144c8ba80;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  *(undefined1 *)(param_1 + 0xd3) = 0;
  return param_1;
}



// FUNCTION 141585d10 FUN_141585d10 body=432 status=ok
// SIG undefined FUN_141585d10(void)

void FUN_141585d10(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  lVar5 = *param_1;
  iVar7 = (int)param_1[1];
  if (iVar7 != 0) {
    plVar6 = (longlong *)(lVar5 + 0xc0);
    do {
      plVar4 = (longlong *)plVar6[3];
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
      plVar4 = (longlong *)*plVar6;
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
      if (plVar6[-3] != 0) {
        FMemory::Free();
      }
      plVar4 = (longlong *)plVar6[-0xb];
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
      plVar4 = (longlong *)plVar6[-0xe];
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
      if (plVar6[-0x11] != 0) {
        FMemory::Free();
      }
      if (plVar6[-0x13] != 0) {
        FMemory::Free();
      }
      if (plVar6[-0x15] != 0) {
        FMemory::Free();
      }
      if (plVar6[-0x17] != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 0x1d;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141585ec0 FUN_141585ec0 body=331 status=ok
// SIG undefined FUN_141585ec0(void)

void FUN_141585ec0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0xd8);
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
  plVar4 = *(longlong **)(param_1 + 0xc0);
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
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
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
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FMemory::Free();
  }
  return;
}


