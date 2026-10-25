// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141035490 FUN_141035490 body=223 status=ok
// SIG undefined FUN_141035490(void)

void FUN_141035490(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  
  (**(code **)(**(longlong **)(param_1 + 8) + 0x588))(*(longlong **)(param_1 + 8),0);
  iVar6 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xc78);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xcc0);
  if (0 < *(int *)(lVar1 + 0x198)) {
    lVar7 = 0;
    do {
      lVar3 = *(longlong *)(lVar1 + 400);
      if (((*(int *)(lVar7 + 8 + lVar3) != 0) &&
          (plVar4 = *(longlong **)(lVar7 + lVar3), plVar4 != (longlong *)0x0)) &&
         (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8), *plVar4 == lVar2))
      {
        if ((*(int *)(lVar7 + 8 + lVar3) != 0) &&
           (plVar4 = *(longlong **)(lVar7 + lVar3), plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x28))(plVar4,0);
          if (*(longlong *)(lVar7 + lVar3) != 0) {
            uVar5 = FMemory::Realloc(*(longlong *)(lVar7 + lVar3),0,0);
            *(undefined8 *)(lVar7 + lVar3) = uVar5;
          }
          *(undefined4 *)(lVar7 + 8 + lVar3) = 0;
        }
        break;
      }
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while (iVar6 < *(int *)(lVar1 + 0x198));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar1 + 400,0);
  return;
}



// FUNCTION 141035570 Execute body=62 status=ok
// SIG undefined Execute(void)

void TBaseFunctorDelegateInstance<bool___cdecl(void),TFunction<bool___cdecl(void)>_>::Execute
               (longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x40);
    if (*(longlong **)(param_1 + 0x40) == (longlong *)0x0) {
      plVar2 = (longlong *)(param_1 + 0x20);
    }
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 8))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001410355ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1);
  return;
}



// FUNCTION 1410355b0 FUN_1410355b0 body=59 status=ok
// SIG undefined FUN_1410355b0(void)

undefined1 FUN_1410355b0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  puVar1 = (undefined8 *)FName::FName(local_res10,L"GameContext",1);
  FUN_1421849d0(param_2 + 0x18,DAT_146aeb090,*puVar1);
  return 1;
}



// FUNCTION 1410355f0 FUN_1410355f0 body=64 status=ok
// SIG undefined FUN_1410355f0(void)

undefined1 FUN_1410355f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    FUN_141043040(lVar1,param_2,*(undefined1 *)(param_1 + 0x11),*(undefined1 *)(param_1 + 0x10));
  }
  return 1;
}



// FUNCTION 141035630 FUN_141035630 body=227 status=ok
// SIG undefined FUN_141035630(void)

undefined1 FUN_141035630(longlong param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
  if (lVar2 != 0) {
    if (param_2 == 1) {
      lVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
      FWeakObjectPtr::IsValid(lVar2 + 0x680);
    }
    else if (param_2 == 2) {
      lVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
      cVar1 = FWeakObjectPtr::IsValid(lVar2 + 0x680);
      if (cVar1 != '\0') {
        plVar3 = (longlong *)FWeakObjectPtr::Get(lVar2 + 0x680);
        (**(code **)(*plVar3 + 0x578))(plVar3);
        return 1;
      }
    }
    else {
      if (param_2 != 3) {
        return 1;
      }
      lVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
      cVar1 = FWeakObjectPtr::IsValid(lVar2 + 0x680);
      if (cVar1 != '\0') {
        plVar3 = (longlong *)FWeakObjectPtr::Get(lVar2 + 0x680);
        (**(code **)(*plVar3 + 0x570))(plVar3);
        return 1;
      }
    }
    FUN_142eb3990(lVar2);
  }
  return 1;
}



// FUNCTION 141035720 FUN_141035720 body=20 status=ok
// SIG undefined FUN_141035720(void)

undefined1 FUN_141035720(longlong param_1)

{
  FUN_141029750(param_1 + 8);
  return 1;
}



// FUNCTION 141035740 FUN_141035740 body=222 status=ok
// SIG undefined FUN_141035740(void)

undefined8 FUN_141035740(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  
  (**(code **)(**(longlong **)(param_1 + 8) + 0x588))(*(longlong **)(param_1 + 8),0);
  iVar4 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xc78);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xcc0);
  if (0 < *(int *)(lVar1 + 0x198)) {
    lVar5 = 0;
    do {
      plVar6 = (longlong *)(*(longlong *)(lVar1 + 400) + lVar5);
      if ((((int)plVar6[1] != 0) && (plVar2 = (longlong *)*plVar6, plVar2 != (longlong *)0x0)) &&
         (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8), *plVar2 == lVar3))
      {
        if (((int)plVar6[1] != 0) && (plVar2 = (longlong *)*plVar6, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar6 != 0) {
            lVar3 = FMemory::Realloc(*plVar6,0,0);
            *plVar6 = lVar3;
          }
          *(undefined4 *)(plVar6 + 1) = 0;
        }
        break;
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar4 < *(int *)(lVar1 + 0x198));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar1 + 400,0);
  return 1;
}



// FUNCTION 141035820 FUN_141035820 body=61 status=ok
// SIG undefined FUN_141035820(void)

undefined8 FUN_141035820(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x40);
    if (*(longlong **)(param_1 + 0x40) == (longlong *)0x0) {
      plVar2 = (longlong *)(param_1 + 0x20);
    }
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 8))();
    }
  }
  (**(code **)(param_1 + 0x10))(uVar1);
  return 1;
}



// FUNCTION 141035860 FUN_141035860 body=31 status=ok
// SIG undefined FUN_141035860(void)

void FUN_141035860(undefined8 param_1)

{
  FUN_14105c930(param_1,0);
  FUN_141065c60(param_1,1);
  return;
}



// FUNCTION 141035880 FUN_141035880 body=82 status=ok
// SIG undefined FUN_141035880(void)

void FUN_141035880(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0xbc8) != 0) {
    cVar1 = FUN_140fb3d70(*(longlong *)(param_1 + 0xbc8),param_1 + 0x9c8);
    if (cVar1 != '\0') {
      iVar2 = FUN_1406ab3e0(*(undefined8 *)(param_1 + 0xbc8));
      if ((iVar2 == *(int *)(param_1 + 0x9b0)) || (iVar2 == *(int *)(param_1 + 0x9b4))) {
        LOCK();
        *(undefined4 *)(param_1 + 0xedc) = 1;
        UNLOCK();
      }
    }
  }
  return;
}



// FUNCTION 1410358e0 FUN_1410358e0 body=432 status=ok
// SIG undefined FUN_1410358e0(void)

longlong FUN_1410358e0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  lVar7 = 0;
  if (param_2 != 0) {
    plVar3 = *(longlong **)(param_1 + 0x6c0);
    iVar1 = *(int *)(param_1 + 0x6c8);
    if (plVar3 != plVar3 + (longlong)iVar1 * 8) {
      plVar9 = plVar3 + 2;
      do {
        if ((*plVar9 == 0) || ((char)plVar9[3] != '\x02')) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          lVar4 = *(longlong *)(*plVar9 + 0x2e0);
          lVar7 = 0;
          if (lVar4 != 0) {
            iVar2 = *(int *)(lVar4 + 0x280);
            iVar12 = 0;
            lVar11 = 0;
            if (0 < (longlong)iVar2) {
              lVar13 = 0;
              do {
                if ((lVar11 < 0) || (*(int *)(lVar4 + 0x280) <= iVar12)) {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                if ((bVar6) &&
                   (lVar5 = *(longlong *)(lVar13 + 0x18 + *(longlong *)(lVar4 + 0x278)), lVar5 != 0)
                   ) {
                  lVar7 = FUN_141397a70();
                  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                    bVar6 = false;
                  }
                  else {
                    bVar6 = true;
                  }
                  if (bVar6) {
                    for (plVar10 = (longlong *)(lVar5 + 0x308);
                        plVar10 != (longlong *)(lVar5 + 0x330); plVar10 = plVar10 + 1) {
                      lVar7 = *plVar10;
                      if ((lVar7 != 0) && (lVar8 = FUN_141039b60(lVar7), lVar8 == param_2))
                      goto LAB_141035a41;
                    }
                  }
                }
                iVar12 = iVar12 + 1;
                lVar11 = lVar11 + 1;
                lVar13 = lVar13 + 0x20;
                lVar7 = 0;
              } while (lVar11 < iVar2);
            }
LAB_141035a41:
            if (lVar7 != 0) {
              return lVar7;
            }
          }
        }
        plVar10 = plVar9 + 6;
        plVar9 = plVar9 + 8;
        if (plVar10 == plVar3 + (longlong)iVar1 * 8) {
          return lVar7;
        }
      } while( true );
    }
  }
  return 0;
}



// FUNCTION 141035a90 FUN_141035a90 body=405 status=ok
// SIG undefined FUN_141035a90(void)

longlong FUN_141035a90(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  
  if ((param_2 == 0) || (lVar2 = *(longlong *)(param_1 + 0x2e0), lVar2 == 0)) {
    return 0;
  }
  iVar1 = *(int *)(lVar2 + 0x280);
  iVar9 = 0;
  lVar11 = 0;
  if (0 < (longlong)iVar1) {
    lVar10 = 0;
    do {
      if ((lVar11 < 0) || (*(int *)(lVar2 + 0x280) <= iVar9)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) &&
         (lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x278) + 0x18 + lVar10), lVar3 != 0)) {
        lVar5 = FUN_141397a70();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          for (plVar8 = (longlong *)(lVar3 + 0x308); plVar8 != (longlong *)(lVar3 + 0x330);
              plVar8 = plVar8 + 1) {
            lVar5 = *plVar8;
            if (lVar5 != 0) {
              lVar7 = *(longlong *)(lVar5 + 0x458);
              if (lVar7 == 0) {
LAB_141035bc3:
                lVar7 = 0;
              }
              else {
                lVar6 = FUN_14144ee20();
                if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                if (!bVar4) goto LAB_141035bc3;
                lVar7 = *(longlong *)(lVar7 + 0x88);
              }
              if (lVar7 == param_2) {
                return lVar5;
              }
            }
          }
        }
      }
      iVar9 = iVar9 + 1;
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x20;
    } while (lVar11 < iVar1);
  }
  return 0;
}



// FUNCTION 141035c30 FUN_141035c30 body=405 status=ok
// SIG undefined FUN_141035c30(void)

longlong FUN_141035c30(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  
  if ((param_2 == 0) || (lVar2 = *(longlong *)(param_1 + 0x2e0), lVar2 == 0)) {
    return 0;
  }
  iVar1 = *(int *)(lVar2 + 0x280);
  iVar9 = 0;
  lVar11 = 0;
  if (0 < (longlong)iVar1) {
    lVar10 = 0;
    do {
      if ((lVar11 < 0) || (*(int *)(lVar2 + 0x280) <= iVar9)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) &&
         (lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x278) + 0x18 + lVar10), lVar3 != 0)) {
        lVar5 = FUN_141397a70();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          for (plVar8 = (longlong *)(lVar3 + 0x308); plVar8 != (longlong *)(lVar3 + 0x330);
              plVar8 = plVar8 + 1) {
            lVar5 = *plVar8;
            if (lVar5 != 0) {
              lVar7 = *(longlong *)(lVar5 + 0x458);
              if (lVar7 == 0) {
LAB_141035d63:
                lVar7 = 0;
              }
              else {
                lVar6 = FUN_14144ef80();
                if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                if (!bVar4) goto LAB_141035d63;
                lVar7 = *(longlong *)(lVar7 + 0x88);
              }
              if (lVar7 == param_2) {
                return lVar5;
              }
            }
          }
        }
      }
      iVar9 = iVar9 + 1;
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x20;
    } while (lVar11 < iVar1);
  }
  return 0;
}



// FUNCTION 141035dd0 FUN_141035dd0 body=258 status=ok
// SIG undefined FUN_141035dd0(void)

int FUN_141035dd0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar1 = *(int *)(param_1 + 0x280);
  iVar6 = 0;
  lVar7 = 0;
  if (0 < (longlong)iVar1) {
    lVar8 = 0;
    do {
      if ((lVar7 < 0) || (*(int *)(param_1 + 0x280) <= iVar6)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) &&
         (lVar2 = *(longlong *)(lVar8 + 0x18 + *(longlong *)(param_1 + 0x278)), lVar2 != 0)) {
        lVar4 = FUN_141397a70();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          for (plVar5 = (longlong *)(lVar2 + 0x308); plVar5 != (longlong *)(lVar2 + 0x330);
              plVar5 = plVar5 + 1) {
            if ((*plVar5 != 0) && (*plVar5 == param_2)) {
              return iVar6;
            }
          }
        }
      }
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + 0x20;
    } while (lVar7 < iVar1);
  }
  return -1;
}



// FUNCTION 141035ee0 FUN_141035ee0 body=79 status=ok
// SIG undefined FUN_141035ee0(void)

void FUN_141035ee0(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    cVar1 = FUN_14105a570(*(longlong *)(param_1 + 0x2e0),0,param_2,param_3);
    if (cVar1 == '\0') {
      FUN_14105a570(*(undefined8 *)(param_1 + 0x2e0),0,0,param_3);
    }
  }
  return;
}



// FUNCTION 141035f30 FUN_141035f30 body=292 status=ok
// SIG undefined FUN_141035f30(void)

void FUN_141035f30(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  int local_res8 [2];
  longlong local_res18;
  
  if (*(float *)(param_1 + 0x90) <= 0.0) {
    iVar3 = 0;
  }
  else {
    fVar10 = (float)FUN_142eedeb0(param_1 + 0x20);
    fVar10 = fVar10 / *(float *)(param_1 + 0x90);
    iVar3 = (int)ROUND((fVar10 + fVar10) - 0.5) >> 1;
  }
  iVar1 = *(int *)(param_1 + 0x54);
  iVar3 = iVar1 * iVar3;
  if (iVar3 < 0) {
    iVar8 = *(int *)(param_1 + 0x88);
  }
  else {
    if ((*(int *)(param_1 + 0x58) < 1) || (iVar1 < 1)) {
      iVar9 = 1;
    }
    else {
      iVar9 = (*(int *)(param_1 + 0x58) + -1 + iVar1) / iVar1;
    }
    iVar8 = *(int *)(param_1 + 0x88);
    iVar4 = iVar8;
    if (0 < iVar1) {
      iVar4 = (iVar8 - iVar1) / iVar1;
    }
    if (iVar4 <= iVar9) {
      iVar4 = iVar9;
    }
    if (iVar3 < iVar4 * iVar1) goto LAB_141035fce;
  }
  iVar3 = -1;
LAB_141035fce:
  if (0 < iVar8) {
    lVar7 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x80) + lVar7 * 8);
      local_res18 = 0;
      if (lVar2 != 0) {
        local_res18 = *(longlong *)(lVar2 + 0x10);
      }
      if (local_res18 != 0) {
        local_res8[0] = iVar3;
        if (*(int *)(param_2 + 8) == 0) {
LAB_141036026:
          uVar5 = 0;
        }
        else {
          plVar6 = (longlong *)param_2[6];
          if ((longlong *)param_2[6] == (longlong *)0x0) {
            plVar6 = param_2 + 2;
          }
          if (plVar6 == (longlong *)0x0) goto LAB_141036026;
          uVar5 = (**(code **)(*plVar6 + 8))();
        }
        (*(code *)*param_2)(uVar5,local_res8,&local_res18);
      }
      iVar3 = iVar3 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar8);
  }
  return;
}



// FUNCTION 141036060 FUN_141036060 body=931 status=ok
// SIG undefined FUN_141036060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141036060(undefined8 param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  longlong lVar11;
  undefined1 auStack_198 [32];
  undefined4 *local_178;
  ulonglong *puStack_170;
  longlong local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  longlong *plStack_148;
  undefined8 local_140;
  longlong *plStack_138;
  undefined1 local_130 [8];
  undefined4 local_128;
  undefined1 local_118 [16];
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [16];
  undefined1 local_e0 [24];
  undefined1 local_c8 [32];
  undefined4 local_a8 [4];
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_198;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468743e8) {
    _Init_thread_header(&DAT_1468743e8);
    if (DAT_1468743e8 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_1468743d0,L"This code is valid for {0}:{1}",L"SHiFTMenu",
                 L"LinkCodeValidForText");
      atexit(FUN_143e5d980);
      _Init_thread_footer(&DAT_1468743e8);
    }
  }
  FNumberFormattingOptions::FNumberFormattingOptions(local_130);
  local_140 = 0;
  plStack_138 = (longlong *)0x0;
  local_150 = 0;
  plStack_148 = (longlong *)0x0;
  lVar11 = 2;
  local_128 = 2;
  lVar6 = FText::AsNumber(local_e0,param_3 % 0x3c,local_130,&local_140);
  local_168 = lVar6;
  lVar7 = FText::AsNumber(local_c8,param_3 / 0x3c,local_130,&local_150);
  puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_f0,&DAT_1468743d0);
  local_a8[0] = 4;
  FText::FText(local_98,lVar7);
  local_80 = 1;
  local_78 = 4;
  FText::FText(local_68,lVar6);
  local_178 = local_a8;
  local_50 = 1;
  puStack_170 = local_48;
  local_160 = *puVar8;
  local_158 = puVar8[1];
  if (local_158 != 0) {
    LOCK();
    *(int *)(local_158 + 8) = *(int *)(local_158 + 8) + 1;
    UNLOCK();
  }
  uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_118,&local_178);
  uVar9 = FText::Format(local_108,&local_160,uVar9);
  FText::FText(param_2,uVar9);
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_100 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar1 = (int *)((longlong)local_100 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_100 + 8))(local_100,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_118);
  pcVar10 = &stack0xffffffffffffffe0;
  do {
    lVar11 = lVar11 + -1;
    pcVar2 = pcVar10 + -0x30;
    if (*pcVar2 != '\0') {
      *pcVar2 = '\0';
      plVar5 = *(longlong **)(pcVar10 + -0x40);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
    }
    pcVar10 = pcVar2;
  } while (lVar11 != 0);
  plVar5 = (longlong *)puVar8[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(lVar7 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(local_168 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = plStack_148;
  if (plStack_148 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_148 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_148)(plStack_148);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = plStack_138;
  if (plStack_138 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_138 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_138)(plStack_138);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 141036410 FUN_141036410 body=2838 status=ok
// SIG undefined FUN_141036410(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141036884) */
/* WARNING: Removing unreachable block (ram,0x000141036894) */
/* WARNING: Removing unreachable block (ram,0x0001410368a0) */
/* WARNING: Removing unreachable block (ram,0x0001410368b4) */

undefined8 FUN_141036410(undefined8 param_1,char *param_2)

{
  int *piVar1;
  longlong *plVar2;
  char *pcVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  longlong lVar13;
  char *pcVar14;
  bool bVar15;
  undefined1 auStack_408 [32];
  undefined4 *local_3e8;
  undefined4 *puStack_3e0;
  longlong local_3d8 [6];
  undefined4 *local_3a8;
  ulonglong *puStack_3a0;
  undefined8 local_398;
  longlong local_390;
  undefined8 local_388;
  longlong local_380;
  undefined8 local_378;
  longlong local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined1 local_358 [16];
  undefined8 local_348;
  undefined8 uStack_340;
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [8];
  longlong *local_310;
  undefined1 local_300 [8];
  longlong *local_2f8;
  undefined1 local_2e8 [8];
  longlong *local_2e0;
  undefined1 local_2d0 [8];
  longlong *local_2c8;
  undefined1 local_2b8 [8];
  longlong *local_2b0;
  undefined1 local_2a0 [8];
  longlong *local_298;
  undefined1 local_288 [8];
  longlong *local_280;
  undefined1 local_270 [8];
  longlong *local_268;
  undefined1 local_258 [8];
  longlong *local_250;
  undefined1 local_240 [8];
  longlong *local_238;
  undefined1 local_228 [8];
  longlong *local_220;
  undefined1 local_210 [24];
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined1 local_1e0 [8];
  longlong *local_1d8;
  undefined1 local_1c8 [8];
  longlong *local_1c0;
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [24];
  undefined1 local_150 [24];
  undefined1 local_138 [24];
  undefined1 local_120 [24];
  undefined4 local_108 [4];
  undefined1 local_f8 [8];
  longlong *local_f0;
  char local_e0;
  undefined4 local_d8 [4];
  undefined1 local_c8 [8];
  longlong *local_c0;
  char local_b0;
  undefined4 local_a8 [4];
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_408;
  local_3e8 = (undefined4 *)((ulonglong)local_3e8 & 0xffffffff00000000);
  bVar15 = *param_2 != '\x04';
  if (bVar15) {
    local_3d8[0] = 0;
    local_3d8[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_3d8,0);
    FGenericPlatformString::Memcpy(local_3d8[0],L"{0}\n",10);
    uVar9 = FText::FromString(local_288,local_3d8);
  }
  else {
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_270,L"Current Effect:\n{0}\n",L"GFxSkillScreenTree",
                       L"Current Effect Title");
  }
  FText::FText(local_2e8,uVar9);
  if ((bVar15) && (local_280 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_280 + 1;
    lVar10 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_280)(local_280);
      LOCK();
      piVar1 = (int *)((longlong)local_280 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_280 + 8))(local_280,1);
      }
    }
  }
  if ((bVar15) && (local_3d8[0] != 0)) {
    FMemory::Free();
  }
  if ((!bVar15) && (local_268 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_268 + 1;
    lVar10 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_268)(local_268);
      LOCK();
      piVar1 = (int *)((longlong)local_268 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_268 + 8))(local_268,1);
      }
    }
  }
  bVar15 = *param_2 != '\x04';
  if (bVar15) {
    local_3d8[2] = 0;
    local_3d8[3] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_3d8 + 2,0);
    FGenericPlatformString::Memcpy(local_3d8[2],L"{0}\n",10);
    uVar9 = FText::FromString(local_258,local_3d8 + 2);
  }
  else {
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_240,L"Next Rank:\n{0}\n",L"GFxSkillScreenTree",L"Next Effect Title");
  }
  FText::FText(local_300,uVar9);
  if ((bVar15) && (local_250 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_250 + 1;
    lVar10 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_250)(local_250);
      LOCK();
      piVar1 = (int *)((longlong)local_250 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_250 + 8))(local_250,1);
      }
    }
  }
  if ((bVar15) && (local_3d8[2] != 0)) {
    FMemory::Free();
  }
  if ((!bVar15) && (local_238 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_238 + 1;
    lVar10 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_238)(local_238);
      LOCK();
      piVar1 = (int *)((longlong)local_238 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_238 + 8))(local_238,1);
      }
    }
  }
  cVar8 = FText::IsEmpty(param_2 + 0x50);
  if (cVar8 == '\0') {
    lVar10 = FText::FText(local_168,param_2 + 0x50);
    puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_198,local_2e8);
    local_108[0] = 4;
    FText::FText(local_f8,lVar10);
    local_3e8 = local_108;
    local_e0 = '\x01';
    puStack_3e0 = local_d8;
    local_398 = *puVar11;
    local_390 = puVar11[1];
    if (local_390 != 0) {
      LOCK();
      *(int *)(local_390 + 8) = *(int *)(local_390 + 8) + 1;
      UNLOCK();
    }
    local_368 = local_3e8;
    uStack_360 = puStack_3e0;
    uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_358,&local_368);
    uVar9 = FText::Format(local_228,&local_398,uVar9);
    FText::FText(local_2d0,uVar9);
    if (local_220 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_220 + 1;
      lVar13 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_220)(local_220);
        LOCK();
        piVar1 = (int *)((longlong)local_220 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_220 + 8))(local_220,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_358);
    if ((local_e0 != '\0') && (local_e0 = '\0', local_f0 != (longlong *)0x0)) {
      LOCK();
      plVar5 = local_f0 + 1;
      lVar13 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar1 = (int *)((longlong)local_f0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
    plVar5 = (longlong *)puVar11[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar13 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    plVar5 = *(longlong **)(lVar10 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar10 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    puVar12 = local_2d0;
    bVar15 = true;
  }
  else {
    uVar9 = FUN_1404b03b0();
    puVar12 = (undefined1 *)FText::FText(local_210,uVar9);
    bVar15 = false;
  }
  FText::FText(local_318,puVar12);
  if ((bVar15) && (local_2c8 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_2c8 + 1;
    lVar10 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_2c8)(local_2c8);
      LOCK();
      piVar1 = (int *)((longlong)local_2c8 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_2c8 + 8))(local_2c8,1);
      }
    }
  }
  cVar8 = FText::IsEmpty(param_2 + 0x68);
  if (cVar8 == '\0') {
    lVar10 = FText::FText(local_150,param_2 + 0x68);
    puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_188,local_300);
    local_d8[0] = 4;
    FText::FText(local_c8,lVar10);
    local_3e8 = local_d8;
    local_b0 = '\x01';
    puStack_3e0 = local_a8;
    local_388 = *puVar11;
    local_380 = puVar11[1];
    if (local_380 != 0) {
      LOCK();
      *(int *)(local_380 + 8) = *(int *)(local_380 + 8) + 1;
      UNLOCK();
    }
    local_348 = local_3e8;
    uStack_340 = puStack_3e0;
    uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_338,&local_348);
    uVar9 = FText::Format(local_1f8,&local_388,uVar9);
    FText::FText(local_2b8,uVar9);
    if (local_1f0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_1f0 + 1;
      lVar13 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_1f0)(local_1f0);
        LOCK();
        piVar1 = (int *)((longlong)local_1f0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1f0 + 8))(local_1f0,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_338);
    if ((local_b0 != '\0') && (local_b0 = '\0', local_c0 != (longlong *)0x0)) {
      LOCK();
      plVar5 = local_c0 + 1;
      lVar13 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)local_c0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
    plVar5 = (longlong *)puVar11[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar13 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    plVar5 = *(longlong **)(lVar10 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar10 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    puVar12 = local_2b8;
    bVar6 = true;
    bVar15 = false;
  }
  else {
    uVar9 = FUN_1404b03b0();
    puVar12 = (undefined1 *)FText::FText(local_1e0,uVar9);
    bVar6 = false;
    bVar15 = true;
  }
  FText::FText(local_2a0,puVar12);
  if ((bVar15) && (local_1d8 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_1d8 + 1;
    lVar10 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_1d8)(local_1d8);
      LOCK();
      piVar1 = (int *)((longlong)local_1d8 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1d8 + 8))(local_1d8,1);
      }
    }
  }
  if ((bVar6) && (local_2b0 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_2b0 + 1;
    lVar10 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_2b0)(local_2b0);
      LOCK();
      piVar1 = (int *)((longlong)local_2b0 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_2b0 + 8))(local_2b0,1);
      }
    }
  }
  local_3d8[4] = 0;
  local_3d8[5] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_3d8 + 4,0);
  FGenericPlatformString::Memcpy(local_3d8[4],L"{0}{1}",0xe);
  lVar10 = FText::FText(local_138,local_2a0);
  local_3e8 = (undefined4 *)lVar10;
  lVar13 = FText::FText(local_120,local_318);
  uVar9 = FText::FromString(local_1b0,local_3d8 + 4);
  puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_178,uVar9);
  local_a8[0] = 4;
  FText::FText(local_98,lVar13);
  local_80 = 1;
  local_78 = 4;
  FText::FText(local_68,lVar10);
  local_3a8 = local_a8;
  local_50 = 1;
  puStack_3a0 = local_48;
  local_378 = *puVar11;
  local_370 = puVar11[1];
  if (local_370 != 0) {
    LOCK();
    *(int *)(local_370 + 8) = *(int *)(local_370 + 8) + 1;
    UNLOCK();
  }
  uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_328,&local_3a8);
  uVar9 = FText::Format(local_1c8,&local_378,uVar9);
  FText::FText(param_1,uVar9);
  if (local_1c0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1c0 + 1;
    lVar10 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_1c0)(local_1c0);
      LOCK();
      piVar1 = (int *)((longlong)local_1c0 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1c0 + 8))(local_1c0,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_328);
  lVar10 = 2;
  pcVar14 = &stack0xffffffffffffffe0;
  do {
    lVar10 = lVar10 + -1;
    pcVar3 = pcVar14 + -0x30;
    if (*pcVar3 != '\0') {
      *pcVar3 = '\0';
      plVar5 = *(longlong **)(pcVar14 + -0x40);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
    }
    pcVar14 = pcVar3;
  } while (lVar10 != 0);
  plVar5 = (longlong *)puVar11[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(lVar13 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)((longlong)local_3e8 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (local_1a8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1a8 + 1;
    lVar10 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_1a8)(local_1a8);
      LOCK();
      piVar1 = (int *)((longlong)local_1a8 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1a8 + 8))(local_1a8,1);
      }
    }
  }
  if (local_3d8[4] != 0) {
    FMemory::Free();
  }
  if (local_298 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_298 + 1;
    lVar10 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_298)(local_298);
      LOCK();
      piVar1 = (int *)((longlong)local_298 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_298 + 8))(local_298,1);
      }
    }
  }
  if (local_310 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_310 + 1;
    lVar10 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_310)(local_310);
      LOCK();
      piVar1 = (int *)((longlong)local_310 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_310 + 8))(local_310,1);
      }
    }
  }
  if (local_2f8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_2f8 + 1;
    lVar10 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_2f8)(local_2f8);
      LOCK();
      piVar1 = (int *)((longlong)local_2f8 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_2f8 + 8))(local_2f8,1);
      }
    }
  }
  if (local_2e0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_2e0 + 1;
    lVar10 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_2e0)(local_2e0);
      LOCK();
      piVar1 = (int *)((longlong)local_2e0 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_2e0 + 8))(local_2e0,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 141036f30 FUN_141036f30 body=756 status=ok
// SIG undefined FUN_141036f30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141036f30(LARGE_INTEGER *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  DWORD DVar4;
  longlong lVar5;
  LARGE_INTEGER *pLVar6;
  LARGE_INTEGER *pLVar7;
  undefined8 *puVar8;
  LARGE_INTEGER *pLVar9;
  longlong *plVar10;
  undefined1 auStack_138 [32];
  LARGE_INTEGER local_118;
  longlong *local_110;
  LARGE_INTEGER *local_108;
  LARGE_INTEGER *local_100;
  LARGE_INTEGER local_f8 [2];
  LARGE_INTEGER *local_e8;
  LARGE_INTEGER *local_e0;
  undefined1 local_d8 [16];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  QueryPerformanceCounter(local_f8);
  *param_1 = local_f8[0];
  pLVar6 = (LARGE_INTEGER *)operator_new(0x18);
  pLVar7 = (LARGE_INTEGER *)0x0;
  pLVar9 = pLVar7;
  if (pLVar6 != (LARGE_INTEGER *)0x0) {
    TPromiseBase<int>::TPromiseBase<int>(pLVar6);
    *(undefined1 *)(pLVar6 + 2) = 0;
    pLVar9 = pLVar6;
  }
  pLVar6 = (LARGE_INTEGER *)operator_new(0x18);
  if (pLVar6 != (LARGE_INTEGER *)0x0) {
    pLVar6[1].s.LowPart = 1;
    pLVar6->QuadPart = (LONGLONG)&PTR_DestroyObject_1444f8938;
    *(undefined4 *)((longlong)pLVar6 + 0xc) = 1;
    pLVar6[2].QuadPart = (LONGLONG)pLVar9;
    pLVar7 = pLVar6;
  }
  local_108 = pLVar9;
  local_100 = pLVar7;
  SharedPointerInternals::EnableSharedFromThis(&local_108,pLVar9,pLVar9);
  *(undefined1 *)(local_108 + 2) = 1;
  local_110 = (longlong *)local_108[1].QuadPart;
  local_118 = *local_108;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_110 + 1) = (int)local_110[1] + 1;
    UNLOCK();
  }
  if (param_1 + 0x18 != &local_118) {
    param_1[0x18] = local_118;
    local_118.QuadPart = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x19,&local_110);
  }
  plVar10 = local_110;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_110 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[1] = param_1;
    *puVar8 = &PTR_FUN_143f77b70;
  }
  local_88[0] = &LAB_141031f50;
  local_e8 = local_108;
  local_e0 = local_100;
  if (local_100 != (LARGE_INTEGER *)0x0) {
    LOCK();
    local_100[1].s.LowPart = local_100[1].s.LowPart + 1;
    UNLOCK();
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_d8,local_88);
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  puVar8 = (undefined8 *)FUN_140438ef0(0x70,param_2 + 2);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &PTR_CopyToEmptyStorage_14467a650;
    puVar8[2] = local_e8;
    puVar8[3] = local_e0;
    if (local_e0 != (LARGE_INTEGER *)0x0) {
      LOCK();
      local_e0[1].s.LowPart = local_e0[1].s.LowPart + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar8 + 4,local_d8);
  }
  *param_2 = &LAB_141031f70;
  if (local_98 != 0) {
    plVar10 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar10 = local_a8;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  pLVar7 = local_e0;
  if (local_e0 != (LARGE_INTEGER *)0x0) {
    LOCK();
    pLVar9 = local_e0 + 1;
    DVar4 = (pLVar9->s).LowPart;
    (pLVar9->s).LowPart = (pLVar9->s).LowPart - 1;
    UNLOCK();
    if (DVar4 == 1) {
      (**(code **)*(LONGLONG *)local_e0)(local_e0);
      LOCK();
      piVar2 = (int *)((longlong)pLVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(pLVar7->QuadPart + 8))(pLVar7,1);
      }
    }
  }
  if (local_48 != 0) {
    plVar10 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar10 = local_58;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  pLVar7 = local_100;
  if (local_100 != (LARGE_INTEGER *)0x0) {
    LOCK();
    pLVar9 = local_100 + 1;
    DVar4 = (pLVar9->s).LowPart;
    (pLVar9->s).LowPart = (pLVar9->s).LowPart - 1;
    UNLOCK();
    if (DVar4 == 1) {
      (**(code **)*(LONGLONG *)local_100)(local_100);
      LOCK();
      piVar2 = (int *)((longlong)pLVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(pLVar7->QuadPart + 8))(pLVar7,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 141037230 FUN_141037230 body=313 status=ok
// SIG undefined FUN_141037230(void)

undefined4 FUN_141037230(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0xc0);
  if ((lVar4 != 0) && (cVar2 = FUN_140d022f0(), cVar2 == '\0')) {
    do {
      cVar2 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar2 == '\0') &&
         ((DAT_1468c21ae != '\0' && (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)))) {
        lVar4 = FUN_14203ca70();
        if (lVar4 != 0) {
          FUN_1420714f0(lVar4);
        }
      }
      else {
        FUN_142036de0();
      }
      cVar2 = FUN_140d022f0(param_1);
      if ((cVar2 == '\0') && (*(longlong *)(param_1 + 0xc0) != 0)) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x50);
        (**(code **)(*plVar1 + 0x20))(plVar1,5,0);
      }
      cVar2 = FUN_140d022f0(param_1);
    } while (cVar2 == '\0');
    lVar4 = *(longlong *)(param_1 + 0xc0);
  }
  cVar2 = *(char *)(lVar4 + 0x58);
  while (cVar2 == '\0') {
    (**(code **)(**(longlong **)(lVar4 + 0x50) + 0x20))(*(longlong **)(lVar4 + 0x50),0x5d638865,0);
    cVar2 = *(char *)(lVar4 + 0x58);
  }
  return *(undefined4 *)(lVar4 + 0x60);
}



// FUNCTION 141037370 FUN_141037370 body=530 status=ok
// SIG undefined FUN_141037370(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141037370(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_38 [2];
  longlong local_28;
  longlong local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146873fa8) {
    _Init_thread_header(&DAT_146873fa8);
    if (DAT_146873fa8 == -1) {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"ShiftCode",1);
      uVar2 = FUN_14217c7e0(local_38,L"gbxtelemetry",L"RedeemShiftCode",&DAT_1446606cc);
      FUN_14217c110(&DAT_146873f80,*puVar1,uVar2);
      if (local_18 != 0) {
        FMemory::Free();
      }
      if (local_28 != 0) {
        FMemory::Free();
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      FUN_14217bd20(&DAT_146873f88);
      FUN_14217bd20(&DAT_146873f90);
      FUN_14217bd20(&DAT_146873f98);
      FUN_14217bd20(&DAT_146873fa0);
      uVar2 = DAT_146873f80;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"player_id",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      uVar2 = DAT_146873f80;
      _DAT_146873f88 = *puVar1;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"player_character_guid",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      uVar2 = DAT_146873f80;
      _DAT_146873f90 = *puVar1;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"shift_code_input",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      uVar2 = DAT_146873f80;
      _DAT_146873f98 = *puVar1;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"shift_code_result",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      _DAT_146873fa0 = *puVar1;
      _Init_thread_footer(&DAT_146873fa8);
      return &DAT_146873f80;
    }
  }
  return &DAT_146873f80;
}



// FUNCTION 141037590 FUN_141037590 body=110 status=ok
// SIG undefined FUN_141037590(void)

undefined8 FUN_141037590(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x594);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_1413f82e0();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = AGFireballProjectile::GetPrivateStaticClass();
                    /* WARNING: Could not recover jumptable at 0x0001410375ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar4);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 141037600 FUN_141037600 body=448 status=ok
// SIG undefined FUN_141037600(void)

char FUN_141037600(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  
  cVar4 = '\0';
  if (param_2 != 0) {
    bVar5 = 1;
    bVar1 = true;
    if ((*(longlong *)(param_1 + 0xbc8) != 0) && (cVar2 = FUN_140cb6290(), bVar5 = 1, cVar2 != '\0')
       ) {
      bVar1 = false;
      bVar5 = 0;
      cVar2 = FUN_140fb3d70(*(undefined8 *)(param_1 + 0xbc8),param_1 + 0x9c8);
      if (cVar2 == '\0') {
        cVar2 = FUN_140fb3d70(*(undefined8 *)(param_1 + 0xbc8),param_1 + 0x9a0);
        if (cVar2 != '\0') {
          iVar3 = FUN_1406ab3e0(*(undefined8 *)(param_1 + 0xbc8));
          bVar1 = false;
          if (iVar3 == *(int *)(param_1 + 0x9c4)) {
            bVar1 = true;
          }
        }
      }
      else {
        iVar3 = FUN_1406ab3e0();
        bVar5 = 0;
        if ((iVar3 == *(int *)(param_1 + 0x9b8)) || (iVar3 == *(int *)(param_1 + 0x9bc))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
          if (iVar3 == *(int *)(param_1 + 0x9c0)) {
            bVar5 = 1;
          }
        }
      }
    }
    if (*(char *)(param_2 + 0x5b1) == '\0') {
      if ((*(longlong *)(param_2 + 0x468) == 0) ||
         (cVar4 = '\t',
         *(int *)(param_2 + 0x4a8) - *(int *)(*(longlong *)(param_2 + 0x468) + 0x32c) < 1)) {
        cVar4 = '\n';
      }
    }
    else if (*(char *)(param_2 + 0x500) == '\x04') {
      if (*(int *)(param_1 + 0x6b8) < 1) {
        cVar4 = '\x05';
      }
      else if (bVar1) {
        cVar2 = *(char *)(param_2 + 0x4b0);
        if (cVar2 == '\x01') {
          cVar4 = '\x06';
        }
        else if (cVar2 == '\x02') {
          cVar4 = '\a';
        }
        else if (cVar2 == '\x03') {
          cVar4 = '\b';
        }
      }
      else {
        cVar4 = '\x04';
      }
    }
    else if (*(int *)(param_1 + 0xc48) < 1) {
      cVar4 = '\v';
    }
    else if (*(int *)(param_1 + 0xc48) < 2) {
      if (*(int *)(**(longlong **)(param_1 + 0xc40) + 0x300) == 0) {
        cVar4 = '\x04';
        if (bVar1) {
          cVar4 = '\x01';
        }
      }
      else {
        cVar4 = ((bVar5 ^ 1) + 1) * '\x02';
      }
    }
    else if (bVar1) {
      cVar4 = bVar5 * '\x02' + '\x01';
    }
    else {
      cVar4 = '\x04';
      if (bVar5 != 0) {
        cVar4 = '\x02';
      }
    }
  }
  return cVar4;
}



// FUNCTION 1410377c0 FUN_1410377c0 body=165 status=ok
// SIG undefined FUN_1410377c0(void)

float FUN_1410377c0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  float fVar5;
  
  fVar5 = (float)FUN_142eb5850();
  lVar1 = DAT_146873eb0;
  if (*(char *)(param_1 + 0x6b0) == '\a') goto LAB_14103782c;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 == DAT_1468c21c0) goto LAB_141037820;
    lVar4 = 4;
  }
  else {
LAB_141037820:
    lVar4 = 0;
  }
  fVar5 = fVar5 * *(float *)(lVar4 + lVar1);
LAB_14103782c:
  if (*(longlong *)(param_1 + 0xeb8) != 0) {
    cVar2 = TBaseSPMethodDelegateInstance<0,SSearchBox,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,FText>
            ::IsSafeToExecute();
    if (cVar2 != '\0') {
      return 1e-08;
    }
  }
  return fVar5;
}



// FUNCTION 141037870 FUN_141037870 body=2122 status=ok
// SIG undefined FUN_141037870(void)

void FUN_141037870(longlong param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  bool bVar12;
  longlong *local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140;
  longlong *local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  
  plVar4 = &local_a8;
  lVar9 = 0;
  if (*(char *)(param_1 + 0x41c) == '\0') {
    local_128 = 0;
    local_120 = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    FGenericPlatformString::Memcpy(local_128,L"branch",0xe);
    local_138 = (longlong *)0x0;
    local_130 = 0;
    cVar2 = FUN_140e98b90(param_1,(undefined8 *)(param_1 + 0x2d8),&local_128,0,6,&local_138);
    plVar10 = local_138;
    for (iVar11 = (int)local_130; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_138 != (longlong *)0x0) {
      FMemory::Free(local_138);
    }
    if (local_128 != 0) {
      FMemory::Free();
    }
    if (cVar2 != '\0') {
      local_118 = 0;
      local_110 = 9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
      FGenericPlatformString::Memcpy(local_118,L"Standard",0x12);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x2d8),&local_118);
      lVar7 = local_118;
      goto LAB_141037aa2;
    }
  }
  else {
    local_158 = 0;
    local_150 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
    FGenericPlatformString::Memcpy(local_158,L"branchSplit",0x18);
    local_168 = (longlong *)0x0;
    local_160 = 0;
    cVar2 = FUN_140e98b90(param_1,(undefined8 *)(param_1 + 0x2d8),&local_158,0,6,&local_168);
    plVar10 = local_168;
    for (iVar11 = (int)local_160; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_168 != (longlong *)0x0) {
      FMemory::Free(local_168);
    }
    if (local_158 != 0) {
      FMemory::Free();
    }
    if (cVar2 != '\0') {
      local_148 = 0;
      local_140 = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
      FGenericPlatformString::Memcpy(local_148,L"Split",0xc);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x2d8),&local_148);
      lVar7 = local_148;
LAB_141037aa2:
      if (lVar7 != 0) {
        FMemory::Free();
      }
    }
  }
  if (*(longlong *)(param_1 + 0x2d8) == 0) goto LAB_141038048;
  local_f8 = 0;
  local_f0 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
  FGenericPlatformString::Memcpy(local_f8,L"allRows",0x10);
  local_108 = (longlong *)0x0;
  local_100 = 0;
  cVar2 = FUN_1410222d0(*(longlong *)(param_1 + 0x2d8),param_1 + 0x2e0,&local_f8,0,6,&local_108);
  plVar10 = local_108;
  for (iVar11 = (int)local_100; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_108 != (longlong *)0x0) {
    FMemory::Free(local_108);
  }
  if (local_f8 != 0) {
    FMemory::Free();
  }
  uVar6 = 0xffffffff;
  if (cVar2 != '\0') {
    if (*(char *)(param_1 + 0x41c) != '\0') {
      uVar6 = *(undefined4 *)(param_1 + 0x2d0);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x2e0) + 800) = uVar6;
  }
  plVar10 = (longlong *)(param_1 + 0x2d8);
  if (*(char *)(param_1 + 0x41c) != '\0') {
    uVar3 = FUN_142085870(*plVar10,local_90,L"branchPageText");
    FUN_142ede260(param_1 + 0x3c0,uVar3);
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_88 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
  }
  if (*plVar10 == 0) goto LAB_141038048;
  local_d8 = 0;
  local_d0 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Memcpy(local_d8,L"branchFill",0x16);
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  local_98 = 0;
  FUN_140f16560(*plVar10,param_1 + 0x310,&local_d8,0,6,&local_e8);
  plVar8 = local_e8;
  for (iVar11 = (int)local_e0; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free(local_e8);
  }
  if (local_d8 != 0) {
    FMemory::Free();
  }
  if ((*(longlong *)(param_1 + 0x390) == 0) || (*(longlong *)(param_1 + 0x398) == 0)) {
LAB_141037cca:
    bVar12 = *plVar10 == 0;
    if (bVar12) {
      local_a8 = 0;
      plStack_a0 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)FUN_142085870(*plVar10,local_80,L"ArtWrapper");
      lVar9 = *plVar4;
    }
    plVar10 = (longlong *)plVar4[1];
    plVar4[1] = 0;
    *plVar4 = 0;
    plVar4 = plStack_a0;
    if ((bVar12) && (plStack_a0 != (longlong *)0x0)) {
      LOCK();
      plVar8 = plStack_a0 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_a0)(plStack_a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plStack_a0 + 8))(plStack_a0,1);
        }
      }
    }
    if ((!bVar12) && (local_78 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_78 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)local_78 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    if (lVar9 != 0) {
      local_b8 = 0;
      local_b0 = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
      FGenericPlatformString::Memcpy(local_b8,L"Header",0xe);
      local_c8 = (longlong *)0x0;
      local_c0 = 0;
      puVar5 = (undefined8 *)
               FUN_14202b820(lVar9,local_70,L"header",&local_b8,0xffffffff,0,&local_c8);
      *(undefined8 *)(param_1 + 0x390) = *puVar5;
      plVar4 = (longlong *)puVar5[1];
      plVar8 = *(longlong **)(param_1 + 0x398);
      if (plVar4 != plVar8) {
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
          UNLOCK();
          plVar8 = *(longlong **)(param_1 + 0x398);
        }
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
        *(longlong **)(param_1 + 0x398) = plVar4;
      }
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_68 + 1;
        lVar9 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar1 = (int *)((longlong)local_68 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_68 + 8))(local_68,1);
          }
        }
      }
      plVar4 = local_c8;
      for (iVar11 = (int)local_c0; iVar11 != 0; iVar11 = iVar11 + -1) {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 2;
      }
      if (local_c8 != (longlong *)0x0) {
        FMemory::Free(local_c8);
      }
      if (local_b8 != 0) {
        FMemory::Free();
      }
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar10 + 1;
      lVar9 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x398) + 8);
    LOCK();
    iVar11 = *piVar1;
    if (iVar11 == 0) {
      *piVar1 = 0;
      iVar11 = 0;
    }
    UNLOCK();
    if (iVar11 < 1) goto LAB_141037cca;
  }
  if ((*(longlong *)(param_1 + 0x3a0) != 0) && (*(longlong *)(param_1 + 0x3a8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x3a8) + 8);
    LOCK();
    iVar11 = *piVar1;
    if (iVar11 == 0) {
      *piVar1 = 0;
      iVar11 = 0;
    }
    UNLOCK();
    if (0 < iVar11) goto LAB_141038048;
  }
  plVar4 = *(longlong **)(param_1 + 0x398);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    iVar11 = (int)plVar4[1];
    bVar12 = iVar11 == 0;
    if (bVar12) {
      *(int *)(plVar4 + 1) = 0;
      iVar11 = 0;
    }
    UNLOCK();
    while (!bVar12) {
      LOCK();
      bVar12 = iVar11 == (int)plVar4[1];
      if (bVar12) {
        *(int *)(plVar4 + 1) = iVar11 + 1;
      }
      UNLOCK();
      if (bVar12) {
        if (plVar4 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0x390) != 0) {
            puVar5 = (undefined8 *)
                     FUN_1420392d0(*(longlong *)(param_1 + 0x390),local_60,L"illustrations");
            *(undefined8 *)(param_1 + 0x3a0) = *puVar5;
            plVar10 = (longlong *)puVar5[1];
            plVar8 = *(longlong **)(param_1 + 0x3a8);
            if (plVar10 != plVar8) {
              if (plVar10 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
                UNLOCK();
                plVar8 = *(longlong **)(param_1 + 0x3a8);
              }
              if (plVar8 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plVar8 + 0xc);
                iVar11 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar11 == 1) {
                  (**(code **)(*plVar8 + 8))(plVar8,1);
                }
              }
              *(longlong **)(param_1 + 0x3a8) = plVar10;
            }
            if (local_58 != (longlong *)0x0) {
              LOCK();
              plVar10 = local_58 + 1;
              lVar9 = *plVar10;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*local_58)(local_58);
                LOCK();
                piVar1 = (int *)((longlong)local_58 + 0xc);
                iVar11 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar11 == 1) {
                  (**(code **)(*local_58 + 8))(local_58,1);
                }
              }
            }
          }
          LOCK();
          plVar10 = plVar4 + 1;
          lVar9 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar11 = (int)plVar4[1];
      bVar12 = iVar11 == 0;
      if (bVar12) {
        *(int *)(plVar4 + 1) = 0;
        iVar11 = 0;
      }
      UNLOCK();
    }
  }
LAB_141038048:
  if ((((*(longlong *)(param_1 + 0x2d8) != 0) && (*(longlong *)(param_1 + 0x2e0) != 0)) &&
      (*(longlong *)(param_1 + 0x310) != 0)) &&
     ((*(longlong *)(param_1 + 0x390) != 0 && (*(longlong *)(param_1 + 0x398) != 0)))) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x398) + 8);
    LOCK();
    iVar11 = *piVar1;
    if (iVar11 == 0) {
      *piVar1 = 0;
      iVar11 = 0;
    }
    UNLOCK();
    if (0 < iVar11) {
      *(undefined1 *)(param_1 + 0x2d4) = 3;
    }
  }
  return;
}



// FUNCTION 1410380c0 FUN_1410380c0 body=342 status=ok
// SIG undefined FUN_1410380c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1410380c0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_198 [32];
  undefined2 local_178;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 *local_148 [2];
  longlong local_138 [4];
  longlong *local_118;
  int local_108;
  undefined1 local_f8 [208];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  FWeakObjectPtr::operator=(&local_168,param_1);
  local_118 = (longlong *)0x0;
  local_108 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_138);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444f8920;
    puVar2[1] = param_1;
    *(undefined4 *)(puVar2 + 2) = local_168;
    *(undefined4 *)((longlong)puVar2 + 0x14) = local_164;
  }
  local_160 = 0;
  local_148[0] = &LAB_141032380;
  local_158 = 0x31;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_160,0);
  local_178 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>
            (local_160,0x31,"UGFxSHiFTMenuNoCrossplay::GetAmountofDiamondKeys");
  FUN_141022700(local_f8,&local_160,local_148);
  uVar3 = FUN_141036f30(local_f8,local_148);
  FUN_14208c260(param_1,uVar3);
  if (local_108 != 0) {
    plVar4 = local_138;
    if (local_118 != (longlong *)0x0) {
      plVar4 = local_118;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free();
  }
  uVar1 = FUN_141037230(local_f8);
  FUN_140ce1dc0(local_f8);
  return uVar1;
}



// FUNCTION 141038220 FUN_141038220 body=342 status=ok
// SIG undefined FUN_141038220(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_141038220(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_198 [32];
  undefined2 local_178;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 *local_148 [2];
  longlong local_138 [4];
  longlong *local_118;
  int local_108;
  undefined1 local_f8 [208];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  FWeakObjectPtr::operator=(&local_168,param_1);
  local_118 = (longlong *)0x0;
  local_108 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_138);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444f8920;
    puVar2[1] = param_1;
    *(undefined4 *)(puVar2 + 2) = local_168;
    *(undefined4 *)((longlong)puVar2 + 0x14) = local_164;
  }
  local_160 = 0;
  local_148[0] = &LAB_141032540;
  local_158 = 0x30;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_160,0);
  local_178 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>
            (local_160,0x30,"UGFxSHiFTMenuNoCrossplay::GetAmountofGoldenKeys");
  FUN_141022700(local_f8,&local_160,local_148);
  uVar3 = FUN_141036f30(local_f8,local_148);
  FUN_14208c260(param_1,uVar3);
  if (local_108 != 0) {
    plVar4 = local_138;
    if (local_118 != (longlong *)0x0) {
      plVar4 = local_118;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free();
  }
  uVar1 = FUN_141037230(local_f8);
  FUN_140ce1dc0(local_f8);
  return uVar1;
}



// FUNCTION 141038380 FUN_141038380 body=356 status=ok
// SIG undefined FUN_141038380(void)

longlong FUN_141038380(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  if (*(int *)(param_1 + 0xa10) != 0) {
    return param_1 + 0xa08;
  }
  lVar6 = FUN_141037590();
  lVar7 = 0;
  if (lVar6 != 0) {
    lVar7 = *(longlong *)(lVar6 + 0x398);
  }
  lVar6 = 0;
  if (lVar7 != 0) {
    lVar6 = *(longlong *)(lVar7 + 0x30);
  }
  if (lVar6 == 0) {
    return param_1 + 0xa08;
  }
  puVar8 = *(undefined8 **)(lVar6 + 0x38);
  puVar1 = puVar8 + *(int *)(lVar6 + 0x40);
  if (puVar8 == puVar1) {
    return param_1 + 0xa08;
  }
  do {
    uVar3 = *puVar8;
    lVar7 = FWeakObjectPtr::Get(param_1 + 0x58c);
    if (lVar7 == 0) {
LAB_141038439:
      lVar7 = 0;
    }
    else {
      lVar6 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_141038439;
    }
    cVar5 = FUN_1411d5380(lVar7,uVar3);
    if (cVar5 != '\0') {
      iVar2 = *(int *)(param_1 + 0xa10);
      *(int *)(param_1 + 0xa10) = iVar2 + 1;
      if (*(int *)(param_1 + 0xa14) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xa08,iVar2);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0xa08) + (longlong)iVar2 * 8) = uVar3;
    }
    puVar8 = puVar8 + 1;
    if (puVar8 == puVar1) {
      return param_1 + 0xa08;
    }
  } while( true );
}



// FUNCTION 1410384f0 FUN_1410384f0 body=1557 status=ok
// SIG undefined FUN_1410384f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1410384f0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  int local_9c;
  undefined2 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar8 + 0x38) < DAT_146874464) &&
     (_Init_thread_header(&DAT_146874464), DAT_146874464 == -1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fcd0,0);
    FGenericPlatformString::Memcpy(DAT_14629fcd0,L"selected",0x12);
    atexit((_func_5014 *)&LAB_143e5d720);
    _Init_thread_footer(&DAT_146874464);
  }
  if ((*(int *)(lVar8 + 0x38) < DAT_146874468) &&
     (_Init_thread_header(&DAT_146874468), DAT_146874468 == -1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fce0,0);
    FGenericPlatformString::Memcpy(DAT_14629fce0,L"gray",10);
    atexit((_func_5014 *)&LAB_143e5d370);
    _Init_thread_footer(&DAT_146874468);
  }
  FUN_142ebdd00(param_4);
  FUN_142ebdcf0(param_4);
  FUN_142ebdcd0(param_4);
  ULowEntryExtendedStandardLibrary::ByteToBoolean(param_4);
  cVar3 = UNF_CustomizationStatics::IsWeaponType(param_4);
  local_90 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_a0 = 0xffffffff;
  if (((param_1[0x8c] == 0) || (param_1[0x8b] == 0)) ||
     (cVar4 = FUN_1409a7560(param_1[0x8c],param_1[0x8b],&local_a8), cVar4 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    if ((param_1[0x65] != 0) && (param_1[0x66] != 0)) {
      piVar1 = (int *)(param_1[0x66] + 8);
      LOCK();
      iVar5 = *piVar1;
      if (iVar5 == 0) {
        *piVar1 = 0;
        iVar5 = 0;
      }
      UNLOCK();
      if (0 < iVar5) {
        if (((char)param_1[0xa0] == '\x04') &&
           ((*(char *)((longlong)param_1 + 0x5b1) != '\0' || (0 < local_9c)))) {
          uVar7 = 1;
        }
        else {
          uVar7 = 0;
        }
        FUN_142f10d20(param_1 + 100,uVar7);
      }
    }
    cVar4 = FUN_14208d2d0(param_1,param_1 + 0x69,L"PointBG");
    if (cVar4 != '\0') {
      if (((char)param_1[0xa0] == '\x04') &&
         ((*(char *)((longlong)param_1 + 0x5b1) != '\0' || (0 < local_9c)))) {
        FUN_142056670(param_1[0x69],1);
      }
      else {
        FUN_142056670(param_1[0x69],0);
      }
    }
  }
  if (cVar3 == '\0') {
    if (bVar2) {
      if (*(char *)((longlong)param_1 + 0x5b1) == '\0') {
        lVar8 = param_1[7];
        local_88 = _DAT_1464aa6d0;
        uStack_84 = uRam00000001464aa6d4;
        uStack_80 = uRam00000001464aa6d8;
        uStack_7c = uRam00000001464aa6dc;
        if (lVar8 != 0) {
          lVar6 = FUN_14139c4f0();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          local_88 = _DAT_1464aa6d0;
          uStack_84 = uRam00000001464aa6d4;
          uStack_80 = uRam00000001464aa6d8;
          uStack_7c = uRam00000001464aa6dc;
          if (bVar2) {
            local_88 = *(undefined4 *)(lVar8 + 0x9f0);
            uStack_84 = *(undefined4 *)(lVar8 + 0x9f4);
            uStack_80 = *(undefined4 *)(lVar8 + 0x9f8);
            uStack_7c = *(undefined4 *)(lVar8 + 0x9fc);
          }
        }
        FUN_14105c180((longlong)param_1 + 0x4b4,&local_88);
        lVar8 = param_1[7];
        local_78 = _DAT_1464aa6d0;
        uStack_74 = uRam00000001464aa6d4;
        uStack_70 = uRam00000001464aa6d8;
        uStack_6c = uRam00000001464aa6dc;
        if (lVar8 != 0) {
          lVar6 = FUN_14139c4f0();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          local_78 = _DAT_1464aa6d0;
          uStack_74 = uRam00000001464aa6d4;
          uStack_70 = uRam00000001464aa6d8;
          uStack_6c = uRam00000001464aa6dc;
          if (bVar2) {
            local_78 = *(undefined4 *)(lVar8 + 0x9f0);
            uStack_74 = *(undefined4 *)(lVar8 + 0x9f4);
            uStack_70 = *(undefined4 *)(lVar8 + 0x9f8);
            uStack_6c = *(undefined4 *)(lVar8 + 0x9fc);
          }
        }
        FUN_14105c180(param_1 + 0x9b,&local_78);
        FUN_1410648e0(param_1,&DAT_14629fce0,param_1 + 0x93);
        *param_2 = 0;
        param_2[1] = 7;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
        FGenericPlatformString::Memcpy(*param_2,L"locked",0xe);
      }
      else {
        if ((char)param_1[0xb6] == '\0') {
          uVar7 = FUN_141039470(param_1,local_48);
          FUN_14105c180((longlong)param_1 + 0x4b4,uVar7);
          uVar7 = FUN_141039470(param_1,local_38);
          FUN_14105c180(param_1 + 0x9b,uVar7);
          pfVar10 = (float *)(param_1 + 0x93);
          puVar9 = &DAT_14629fce0;
        }
        else {
          uVar7 = FUN_141039570(param_1,local_68);
          FUN_14105c180((longlong)param_1 + 0x4b4,uVar7);
          uVar7 = FUN_1410395f0(param_1,local_58);
          FUN_14105c180(param_1 + 0x9b,uVar7);
          cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x8e);
          local_b8 = DAT_1464aa6c0;
          fStack_b4 = (float)DAT_1464aa6c4;
          fStack_b0 = (float)DAT_1464aa6c8;
          fStack_ac = (float)DAT_1464aa6cc;
          if (cVar3 != '\0') {
            lVar8 = FWeakObjectPtr::Get(param_1 + 0x8e);
            local_b8 = *(float *)(lVar8 + 0x358);
            fStack_b4 = (float)*(undefined4 *)(lVar8 + 0x35c);
            fStack_b0 = (float)*(undefined4 *)(lVar8 + 0x360);
            fStack_ac = (float)*(undefined4 *)(lVar8 + 0x364);
          }
          puVar9 = (undefined8 *)FUN_141039360(param_1);
          pfVar10 = &local_b8;
        }
        FUN_1410648e0(param_1,puVar9,pfVar10);
        *param_2 = 0;
        param_2[1] = 10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
        FGenericPlatformString::Memcpy(*param_2,L"available",0x14);
      }
    }
    else {
      (**(code **)(*param_1 + 0x308))(param_1,param_2,param_4);
    }
  }
  else {
    lVar8 = param_1[7];
    fVar11 = _DAT_1464aa720;
    fVar12 = fRam00000001464aa724;
    fVar13 = fRam00000001464aa728;
    fVar14 = fRam00000001464aa72c;
    if (lVar8 != 0) {
      lVar6 = FUN_14139c4f0();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      fVar11 = _DAT_1464aa720;
      fVar12 = fRam00000001464aa724;
      fVar13 = fRam00000001464aa728;
      fVar14 = fRam00000001464aa72c;
      if (bVar2) {
        fVar11 = *(float *)(lVar8 + 0x9d0);
        fVar12 = *(float *)(lVar8 + 0x9d4);
        fVar13 = *(float *)(lVar8 + 0x9d8);
        fVar14 = *(float *)(lVar8 + 0x9dc);
      }
    }
    local_b8 = *(float *)((longlong)param_1 + 0x4b4);
    fStack_b4 = *(float *)(param_1 + 0x97);
    fStack_b0 = *(float *)((longlong)param_1 + 0x4bc);
    fStack_ac = *(float *)(param_1 + 0x98);
    if ((((fVar11 == local_b8) && (fVar12 == fStack_b4)) && (fVar13 == fStack_b0)) &&
       (fVar14 == fStack_ac)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(float *)((longlong)param_1 + 0x4c4) = fVar11;
      *(float *)(param_1 + 0x99) = fVar12;
      *(float *)((longlong)param_1 + 0x4cc) = fVar13;
      *(float *)(param_1 + 0x9a) = fVar14;
      *(undefined1 *)((longlong)param_1 + 0x4d4) = 1;
    }
    lVar8 = param_1[7];
    fVar11 = _DAT_1464aa720;
    fVar12 = fRam00000001464aa724;
    fVar13 = fRam00000001464aa728;
    fVar14 = fRam00000001464aa72c;
    if (lVar8 != 0) {
      lVar6 = FUN_14139c4f0();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      fVar11 = _DAT_1464aa720;
      fVar12 = fRam00000001464aa724;
      fVar13 = fRam00000001464aa728;
      fVar14 = fRam00000001464aa72c;
      if (bVar2) {
        fVar11 = *(float *)(lVar8 + 0x9d0);
        fVar12 = *(float *)(lVar8 + 0x9d4);
        fVar13 = *(float *)(lVar8 + 0x9d8);
        fVar14 = *(float *)(lVar8 + 0x9dc);
      }
    }
    local_b8 = *(float *)(param_1 + 0x9b);
    fStack_b4 = *(float *)((longlong)param_1 + 0x4dc);
    fStack_b0 = *(float *)(param_1 + 0x9c);
    fStack_ac = *(float *)((longlong)param_1 + 0x4e4);
    if (((fVar11 == local_b8) && (fVar12 == fStack_b4)) &&
       ((fVar13 == fStack_b0 && (fVar14 == fStack_ac)))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(float *)(param_1 + 0x9d) = fVar11;
      *(float *)((longlong)param_1 + 0x4ec) = fVar12;
      *(float *)(param_1 + 0x9e) = fVar13;
      *(float *)((longlong)param_1 + 0x4f4) = fVar14;
      *(undefined1 *)(param_1 + 0x9f) = 1;
    }
    FUN_1410648e0(param_1,&DAT_14629fcd0,param_1 + 0x91);
    *param_2 = 0;
    param_2[1] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy(*param_2,L"focused",0x10);
  }
  return param_2;
}



// FUNCTION 141038b10 FUN_141038b10 body=804 status=ok
// SIG undefined FUN_141038b10(void)

undefined8 *
FUN_141038b10(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  wchar_t *pwVar5;
  int iVar6;
  longlong lVar7;
  
  FUN_142ebdd00(param_4);
  cVar2 = FUN_142ebdcf0(param_4);
  cVar3 = FUN_142ebdcd0(param_4);
  ULowEntryExtendedStandardLibrary::ByteToBoolean(param_4);
  cVar4 = UNF_CustomizationStatics::IsWeaponType(param_4);
  cVar1 = (char)param_1[0x70];
  if (cVar4 == '\0') {
    if (cVar1 == '\0') {
      *param_2 = 0;
      if (cVar3 == '\0') {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        if (cVar2 == '\0') {
          *(undefined4 *)(param_2 + 1) = 9;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
          FGenericPlatformString::Memcpy(*param_2,L"lockedUp",0x12);
        }
        else {
          *(undefined4 *)(param_2 + 1) = 0xb;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
          FGenericPlatformString::Memcpy(*param_2,L"lockedOver",0x16);
        }
      }
      else {
        param_2[1] = 0xb;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
        FGenericPlatformString::Memcpy(*param_2,L"lockedDown",0x16);
      }
    }
    else if (cVar1 == '\x02') {
      *param_2 = 0;
      if (cVar3 == '\0') {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        if (cVar2 == '\0') {
          *(undefined4 *)(param_2 + 1) = 0xb;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
          FGenericPlatformString::Memcpy(*param_2,L"equippedUp",0x16);
        }
        else {
          *(undefined4 *)(param_2 + 1) = 0xd;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
          FGenericPlatformString::Memcpy(*param_2,L"equippedOver",0x1a);
        }
      }
      else {
        param_2[1] = 0xd;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
        FGenericPlatformString::Memcpy(*param_2,L"equippedDown",0x1a);
      }
    }
    else if (cVar1 == '\x01') {
      *param_2 = 0;
      if (cVar3 == '\0') {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        if (cVar2 == '\0') {
          *(undefined4 *)(param_2 + 1) = 0xc;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
          FGenericPlatformString::Memcpy(*param_2,L"availableUp",0x18);
        }
        else {
          *(undefined4 *)(param_2 + 1) = 0xe;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
          FGenericPlatformString::Memcpy(*param_2,L"availableOver",0x1c);
        }
      }
      else {
        param_2[1] = 0xe;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
        FGenericPlatformString::Memcpy(*param_2,L"availableDown",0x1c);
      }
    }
    else {
      (**(code **)(*param_1 + 0x308))(param_1,param_2,param_4);
    }
  }
  else {
    if (cVar3 == '\0') {
      *param_2 = 0;
      param_2[1] = 0;
      if (cVar2 == '\0') {
        pwVar5 = L"focusedUp";
        if (cVar1 == '\0') {
          pwVar5 = L"focusedLockedUp";
        }
        if (*pwVar5 == L'\0') {
          return param_2;
        }
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (pwVar5[lVar7] != L'\0');
      }
      else {
        pwVar5 = L"focusedOver";
        if (cVar1 == '\0') {
          pwVar5 = L"focusedLockedOver";
        }
        if (*pwVar5 == L'\0') {
          return param_2;
        }
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (pwVar5[lVar7] != L'\0');
      }
    }
    else {
      pwVar5 = L"focusedDown";
      if (cVar1 == '\0') {
        pwVar5 = L"focusedLockedDown";
      }
      *param_2 = 0;
      param_2[1] = 0;
      if (*pwVar5 == L'\0') {
        return param_2;
      }
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (pwVar5[lVar7] != L'\0');
    }
    iVar6 = (int)lVar7 + 1;
    *(int *)(param_2 + 1) = iVar6;
    if (0 < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    }
    FGenericPlatformString::Memcpy(*param_2,pwVar5,(longlong)iVar6 * 2);
  }
  return param_2;
}



// FUNCTION 141038e40 FUN_141038e40 body=357 status=ok
// SIG undefined FUN_141038e40(void)

longlong FUN_141038e40(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FText::FText(param_2,param_1 + 0x640);
  FText::FText(param_2 + 0x18,param_1 + 0x658);
  FText::FText(param_2 + 0x30,param_1 + 0x670);
  FText::FText(param_2 + 0x48,param_1 + 0x688);
  FText::FText(param_2 + 0x60,param_1 + 0x6a0);
  FString::FString(param_2 + 0x78,param_1 + 0x6b8);
  *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_1 + 0x6c8);
  *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(param_1 + 0x6d0);
  *(undefined1 *)(param_2 + 0x98) = *(undefined1 *)(param_1 + 0x6d8);
  *(undefined1 *)(param_2 + 0x99) = *(undefined1 *)(param_1 + 0x6d9);
  *(undefined4 *)(param_2 + 0x9c) = *(undefined4 *)(param_1 + 0x6dc);
  *(undefined4 *)(param_2 + 0xa0) = *(undefined4 *)(param_1 + 0x6e0);
  *(undefined1 *)(param_2 + 0xa4) = *(undefined1 *)(param_1 + 0x6e4);
  *(undefined1 *)(param_2 + 0xa5) = *(undefined1 *)(param_1 + 0x6e5);
  *(undefined8 *)(param_2 + 0xa8) = *(undefined8 *)(param_1 + 0x6e8);
  FUN_14080bc50(param_2 + 0xb0,param_1 + 0x6f0);
  *(undefined1 *)(param_2 + 0x138) = *(undefined1 *)(param_1 + 0x778);
  *(undefined8 *)(param_2 + 0x140) = *(undefined8 *)(param_1 + 0x780);
  *(undefined8 *)(param_2 + 0x148) = *(undefined8 *)(param_1 + 0x788);
  lVar1 = *(longlong *)(param_1 + 0x790);
  *(longlong *)(param_2 + 0x150) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_2 + 0x158) = *(undefined8 *)(param_1 + 0x798);
  *(undefined4 *)(param_2 + 0x160) = *(undefined4 *)(param_1 + 0x7a0);
  return param_2;
}



// FUNCTION 141039030 FUN_141039030 body=63 status=ok
// SIG undefined FUN_141039030(void)

undefined8 FUN_141039030(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_14103fac0();
  if (((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x88))) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar2 * 8), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0x10);
  }
  return 0;
}



// FUNCTION 141039070 FUN_141039070 body=282 status=ok
// SIG undefined FUN_141039070(void)

longlong FUN_141039070(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *local_18;
  int local_10;
  undefined4 local_c;
  
  if (param_2 != 0) {
    plVar6 = (longlong *)0x0;
    local_18 = (longlong *)0x0;
    local_c = 0;
    plVar1 = (longlong *)FUN_140e97230();
    iVar4 = 0;
    if (plVar1 != (longlong *)0x0) {
      uVar2 = AGFireballProjectile::GetPrivateStaticClass();
      lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
      iVar4 = 0;
      if ((lVar3 != 0) && (&local_18 != (longlong **)(lVar3 + 0x550))) {
        local_10 = *(int *)(lVar3 + 0x558);
        lVar5 = (longlong)local_10;
        plVar1 = *(longlong **)(lVar3 + 0x550);
        iVar4 = local_10;
        if (local_10 != 0) {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                    (&local_18,local_10,0);
          plVar6 = local_18;
          _guard_xfg_dispatch_icall_nop(local_18,plVar1,lVar5 << 3);
          iVar4 = local_10;
        }
      }
    }
    for (plVar1 = plVar6; plVar1 != plVar6 + iVar4; plVar1 = plVar1 + 1) {
      lVar3 = *plVar1;
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x10) == *(longlong *)(param_2 + 0x10))) {
        if (plVar6 != (longlong *)0x0) {
          FMemory::Free(plVar6);
        }
        return lVar3;
      }
    }
    if (plVar6 != (longlong *)0x0) {
      FMemory::Free(plVar6);
    }
  }
  return 0;
}



// FUNCTION 141039190 FUN_141039190 body=93 status=ok
// SIG undefined FUN_141039190(void)

undefined8 FUN_141039190(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x458);
  if (lVar1 != 0) {
    lVar3 = FUN_14144ef80();
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
      return *(undefined8 *)(lVar1 + 0x88);
    }
  }
  return 0;
}



// FUNCTION 1410391f0 FUN_1410391f0 body=368 status=ok
// SIG undefined FUN_1410391f0(void)

longlong * FUN_1410391f0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  void *_Src;
  longlong *plVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 local_48 [8];
  longlong *local_40;
  
  uVar10 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  iVar3 = *(int *)(param_1 + 0x220);
  uVar11 = uVar10;
  if (0 < (longlong)iVar3) {
    do {
      lVar9 = 0;
      if ((-1 < (longlong)uVar11) && ((int)uVar10 < *(int *)(param_1 + 0x220))) {
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x218) + uVar11 * 8);
      }
      if (lVar9 != 0) {
        uVar7 = FUN_142eb8880(lVar9 + 0x308,local_48);
        puVar8 = (undefined8 *)FText::ToString(uVar7);
        _Src = (void *)*puVar8;
        iVar12 = *(int *)(puVar8 + 1) + -1;
        if (*(int *)(puVar8 + 1) == 0) {
          iVar12 = 0;
        }
        if (iVar12 != 0) {
          iVar4 = (int)param_2[1];
          iVar6 = (uint)(iVar4 == 0) + iVar12 + iVar4;
          *(int *)(param_2 + 1) = iVar6;
          if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
          }
          _Dst = (void *)(*param_2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar12 * 2);
          *(undefined2 *)((longlong)iVar12 * 2 + (longlong)_Dst) = 0;
        }
        plVar5 = local_40;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_40 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar12 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5);
            }
          }
        }
      }
      uVar10 = (ulonglong)((int)uVar10 + 1);
      uVar11 = uVar11 + 1;
    } while ((longlong)uVar11 < (longlong)iVar3);
  }
  return param_2;
}



// FUNCTION 141039360 FUN_141039360 body=144 status=ok
// SIG undefined FUN_141039360(void)

undefined8 * FUN_141039360(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146874460) {
    _Init_thread_header(&DAT_146874460);
    if (DAT_146874460 == -1) {
      atexit((_func_5014 *)&LAB_143e5c320);
      _Init_thread_footer(&DAT_146874460);
    }
  }
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x470);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x470);
    return (undefined8 *)(lVar2 + 0x348);
  }
  return &DAT_146874450;
}



// FUNCTION 1410393f0 FUN_1410393f0 body=62 status=ok
// SIG undefined FUN_1410393f0(void)

int FUN_1410393f0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x54);
  if ((*(int *)(param_1 + 0x58) < 1) || (iVar1 < 1)) {
    iVar3 = 1;
  }
  else {
    iVar3 = (*(int *)(param_1 + 0x58) + -1 + iVar1) / iVar1;
  }
  iVar2 = *(int *)(param_1 + 0x88);
  if (0 < iVar1) {
    iVar2 = (iVar2 - iVar1) / iVar1;
  }
  if (iVar2 <= iVar3) {
    iVar2 = iVar3;
  }
  return iVar2;
}



// FUNCTION 141039430 FUN_141039430 body=55 status=ok
// SIG undefined FUN_141039430(void)

undefined * FUN_141039430(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      return PTR_s_PrimaryBG_14629fd38;
    }
    if (cVar1 == '\x03') {
      return PTR_s_SecondaryBG_14629fd40;
    }
    if (cVar1 == '\x04') {
      return PTR_s_PassiveBG_14629fd48;
    }
  }
  return PTR_s_ActionBG_14629fd30;
}



// FUNCTION 141039470 FUN_141039470 body=124 status=ok
// SIG undefined FUN_141039470(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141039470(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    lVar4 = FUN_14139c4f0();
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
      uVar2 = *(undefined8 *)(lVar1 + 0x9e8);
      *param_2 = *(undefined8 *)(lVar1 + 0x9e0);
      param_2[1] = uVar2;
      return param_2;
    }
  }
  uVar2 = _DAT_1464aa6c8;
  *param_2 = _DAT_1464aa6c0;
  param_2[1] = uVar2;
  return param_2;
}



// FUNCTION 1410394f0 FUN_1410394f0 body=124 status=ok
// SIG undefined FUN_1410394f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1410394f0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    lVar4 = FUN_14139c4f0();
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
      uVar2 = *(undefined8 *)(lVar1 + 0x9f8);
      *param_2 = *(undefined8 *)(lVar1 + 0x9f0);
      param_2[1] = uVar2;
      return param_2;
    }
  }
  uVar2 = uRam00000001464aa6d8;
  *param_2 = _DAT_1464aa6d0;
  param_2[1] = uVar2;
  return param_2;
}



// FUNCTION 141039570 FUN_141039570 body=115 status=ok
// SIG undefined FUN_141039570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141039570(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x470);
  if (cVar2 != '\0') {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x470);
    cVar2 = FWeakObjectPtr::IsValid(lVar3 + 0x368);
    if (cVar2 != '\0') {
      lVar3 = FWeakObjectPtr::Get(lVar3 + 0x368);
      uVar1 = *(undefined8 *)(lVar3 + 0x90);
      *param_2 = *(undefined8 *)(lVar3 + 0x88);
      param_2[1] = uVar1;
      return param_2;
    }
  }
  uVar1 = _DAT_1464aa6c8;
  *param_2 = _DAT_1464aa6c0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1410395f0 FUN_1410395f0 body=112 status=ok
// SIG undefined FUN_1410395f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1410395f0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x470);
  if (cVar2 != '\0') {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x470);
    cVar2 = FWeakObjectPtr::IsValid(lVar3 + 0x368);
    if (cVar2 != '\0') {
      lVar3 = FWeakObjectPtr::Get(lVar3 + 0x368);
      uVar1 = *(undefined8 *)(lVar3 + 0x80);
      *param_2 = *(undefined8 *)(lVar3 + 0x78);
      param_2[1] = uVar1;
      return param_2;
    }
  }
  uVar1 = _DAT_1464aa6c8;
  *param_2 = _DAT_1464aa6c0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141039660 FUN_141039660 body=1231 status=ok
// SIG undefined FUN_141039660(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_141039660(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  ulonglong *puStack_1e0;
  undefined4 *local_1d8;
  undefined8 *puStack_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188 [16];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [16];
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined4 local_c8 [4];
  undefined1 local_b8 [8];
  longlong *local_b0;
  char local_a0;
  undefined4 local_98 [2];
  longlong local_90;
  longlong *local_80;
  char local_70;
  undefined4 local_68 [2];
  longlong local_60;
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_208;
  if (param_3 == 0) goto switchD_1410396bd_caseD_4;
  switch(*(undefined1 *)(param_3 + 0x5b3)) {
  case 1:
  case 2:
  case 3:
    if (*(int *)(param_3 + 0x4ac) < 1) {
      param_1 = param_1 + 0xdc8;
    }
    else {
      param_1 = param_1 + 0xdb0;
    }
    break;
  case 5:
    cVar3 = *(char *)(param_3 + 0x4b0);
    if (cVar3 == '\x01') {
      param_1 = param_1 + 0xea0;
      break;
    }
    if (cVar3 == '\x02') goto switchD_1410396bd_caseD_7;
    if (cVar3 == '\x03') goto switchD_1410396bd_caseD_8;
  default:
switchD_1410396bd_caseD_4:
    param_1 = FUN_1404b03b0();
    break;
  case 6:
    param_1 = param_1 + 0xe58;
    break;
  case 7:
switchD_1410396bd_caseD_7:
    param_1 = param_1 + 0xe70;
    break;
  case 8:
switchD_1410396bd_caseD_8:
    param_1 = param_1 + 0xe88;
    break;
  case 9:
    if ((*(char *)(param_3 + 0x5b1) == '\0') && (*(longlong *)(param_3 + 0x468) != 0)) {
      iVar7 = *(int *)(param_3 + 0x4a8) - *(int *)(*(longlong *)(param_3 + 0x468) + 0x32c);
    }
    else {
      iVar7 = 0;
    }
    plVar5 = (longlong *)FTextFormat::FTextFormat(local_e8,param_1 + 0xe28);
    local_90 = (longlong)iVar7;
    local_1e8 = (undefined8 *)local_98;
    puStack_1e0 = (ulonglong *)local_68;
    local_1d8 = (undefined4 *)*plVar5;
    puStack_1d0 = (undefined8 *)plVar5[1];
    local_98[0] = 0;
    local_70 = '\0';
    if (puStack_1d0 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puStack_1d0 + 1) = *(int *)(puStack_1d0 + 1) + 1;
      UNLOCK();
    }
    local_198 = local_1e8;
    uStack_190 = puStack_1e0;
    uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_188,&local_198);
    uVar6 = FText::Format(local_128,&local_1d8,uVar6);
    FText::FText(param_2,uVar6);
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_120 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_120)(local_120);
        LOCK();
        piVar1 = (int *)((longlong)local_120 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_120 + 8))(local_120,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_188);
    if (local_70 != '\0') {
      local_70 = '\0';
      plVar8 = local_80;
LAB_141039a60:
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar8 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
    }
    goto LAB_141039a93;
  case 10:
    iVar7 = *(int *)(param_1 + 0x910);
    plVar5 = (longlong *)FTextFormat::FTextFormat(local_d8,param_1 + 0xe40);
    local_68[0] = 0;
    local_1e8 = (undefined8 *)local_68;
    local_40 = '\0';
    puStack_1e0 = local_38;
    local_1c0 = plVar5[1];
    local_1c8 = *plVar5;
    if (local_1c0 != 0) {
      LOCK();
      *(int *)(local_1c0 + 8) = *(int *)(local_1c0 + 8) + 1;
      UNLOCK();
    }
    local_60 = (longlong)iVar7;
    local_178 = local_1e8;
    uStack_170 = puStack_1e0;
    uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_168,&local_178);
    uVar6 = FText::Format(local_110,&local_1c8,uVar6);
    FText::FText(param_2,uVar6);
    if (local_108 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_108 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_108)(local_108);
        LOCK();
        piVar1 = (int *)((longlong)local_108 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_108 + 8))(local_108,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_168);
    if (local_40 != '\0') {
      local_40 = '\0';
      plVar8 = local_50;
      goto LAB_141039a60;
    }
LAB_141039a93:
    plVar5 = (longlong *)plVar5[1];
LAB_141039a97:
    if (plVar5 == (longlong *)0x0) {
      return param_2;
    }
    LOCK();
    plVar8 = plVar5 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 != 1) {
      return param_2;
    }
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar7 != 1) {
      return param_2;
    }
    (**(code **)(*plVar5 + 8))(plVar5,1);
    return param_2;
  case 0xb:
    if (*(longlong *)(param_3 + 0x458) == 0) {
      lVar4 = FUN_1404b03b0();
    }
    else {
      lVar4 = *(longlong *)(param_3 + 0x458) + 0x50;
    }
    FText::FText(local_158,lVar4);
    plVar5 = (longlong *)FTextFormat::FTextFormat(local_f8,param_1 + 0xe10);
    local_c8[0] = 4;
    FText::FText(local_b8,local_158);
    local_1e8 = (undefined8 *)*plVar5;
    local_1d8 = local_c8;
    puStack_1d0 = (undefined8 *)local_98;
    puStack_1e0 = (ulonglong *)plVar5[1];
    local_a0 = '\x01';
    if (puStack_1e0 != (ulonglong *)0x0) {
      LOCK();
      *(int *)(puStack_1e0 + 1) = (int)puStack_1e0[1] + 1;
      UNLOCK();
    }
    local_1b8 = local_1d8;
    uStack_1b0 = puStack_1d0;
    uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_1a8,&local_1b8);
    uVar6 = FText::Format(local_140,&local_1e8,uVar6);
    FText::FText(param_2,uVar6);
    if (local_138 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_138 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_138)(local_138);
        LOCK();
        piVar1 = (int *)((longlong)local_138 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_138 + 8))(local_138,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_1a8);
    if ((local_a0 != '\0') && (local_a0 = '\0', local_b0 != (longlong *)0x0)) {
      LOCK();
      plVar8 = local_b0 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)local_b0 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
    plVar5 = (longlong *)plVar5[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar5 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    plVar5 = local_150;
    goto LAB_141039a97;
  }
  FText::FText(param_2,param_1);
  return param_2;
}



// FUNCTION 141039b60 FUN_141039b60 body=129 status=ok
// SIG undefined FUN_141039b60(void)

longlong FUN_141039b60(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x458);
  if (lVar1 != 0) {
    lVar4 = FUN_14144ecc0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (plVar2 = *(longlong **)(lVar1 + 0x88), plVar2 != (longlong *)0x0)) {
      if (plVar2[0x1f] != 0) {
        return plVar2[0x1f];
      }
      (**(code **)(*plVar2 + 0x368))(plVar2);
      return plVar2[0x1f];
    }
  }
  return 0;
}



// FUNCTION 141039bf0 FUN_141039bf0 body=93 status=ok
// SIG undefined FUN_141039bf0(void)

undefined8 FUN_141039bf0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x458);
  if (lVar1 != 0) {
    lVar3 = FUN_14144ee20();
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
      return *(undefined8 *)(lVar1 + 0x88);
    }
  }
  return 0;
}



// FUNCTION 141039c50 FUN_141039c50 body=435 status=ok
// SIG undefined FUN_141039c50(void)

undefined4 * FUN_141039c50(undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_58;
  undefined1 local_50 [16];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  if (param_3 != 0) {
    lVar2 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar2 = *(longlong *)(param_3 + 0x848), lVar2 != 0)) {
      lVar3 = FUN_1413ffe00();
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
        local_28 = 0;
        local_40 = *(undefined4 *)(lVar2 + 0x2a88);
        local_3c = *(undefined4 *)(lVar2 + 0x2a8c);
        local_38 = *(undefined4 *)(lVar2 + 0x2a90);
        local_58 = *(undefined8 *)(lVar2 + 0x2a98);
        local_20 = 0;
        local_30 = 0;
        FString::FString(local_50,lVar2 + 0x2aa0);
        FSoftObjectPath::operator=(&local_30,&local_58);
        FUN_142eb7c20(param_1,param_2,&local_40,param_3);
        return param_2;
      }
    }
  }
  *(undefined8 *)(param_2 + 6) = 0;
  param_2[9] = 0;
  *param_2 = 0xffffffff;
  param_2[1] = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  param_2[8] = 0;
  if (0x7fffffff < (uint)param_2[9]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 6,0);
  }
  if (*(undefined2 **)(param_2 + 6) != (undefined2 *)0x0) {
    **(undefined2 **)(param_2 + 6) = 0;
  }
  *(undefined8 *)(param_2 + 1) = 0;
  *param_2 = 0xffffffff;
  *(undefined8 *)(param_2 + 4) = 0;
  param_2[8] = 0;
  if (0x7fffffff < (uint)param_2[9]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 6,0);
  }
  if (*(undefined2 **)(param_2 + 6) != (undefined2 *)0x0) {
    **(undefined2 **)(param_2 + 6) = 0;
  }
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 141039e10 FUN_141039e10 body=154 status=ok
// SIG undefined FUN_141039e10(void)

undefined8 FUN_141039e10(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  
  if (param_3 == '\x01') {
    FText::FText(param_2,param_1 + 0xca8);
    return param_2;
  }
  if (param_3 == '\x02') {
    FText::FText(param_2,param_1 + 0xcd8);
    return param_2;
  }
  if (param_3 == '\x03') {
    FText::FText(param_2,param_1 + 0xd08);
    return param_2;
  }
  if (param_3 != '\x04') {
    uVar1 = FUN_1404b03b0();
    FText::FText(param_2,uVar1);
    return param_2;
  }
  FText::FText(param_2,param_1 + 0xd38);
  return param_2;
}



// FUNCTION 141039eb0 FUN_141039eb0 body=1801 status=ok
// SIG undefined FUN_141039eb0(void)

longlong FUN_141039eb0(longlong param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  int iVar10;
  bool bVar11;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  bVar11 = false;
  bVar9 = false;
  switch(param_2) {
  case 2:
    lVar6 = *(longlong *)(param_1 + 0x6a8);
    if (lVar6 == 0) {
      local_38 = (longlong *)0x0;
      local_30 = 0x12;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      FGenericPlatformString::Memcpy(local_38,L"signInAccountPage",0x24);
      local_48 = (longlong *)0x0;
      local_40 = 0;
      lVar6 = FUN_141020ad0(param_1,&local_38,0,6,&local_48);
      plVar8 = local_48;
      for (iVar10 = (int)local_40; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 2;
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free(local_48);
      }
      if (lVar6 != 0) {
        FWeakObjectPtr::operator=(lVar6 + 0x184,param_1);
        local_20 = 0;
        local_28 = lVar6;
        uVar7 = UBlendableInterface::GetPrivateStaticClass();
        local_20 = UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar7);
        FUN_142ecfdd0(param_1,&local_28,0,0,0,0);
      }
      bVar9 = true;
    }
    plVar8 = local_38;
    if (!bVar9) {
      return lVar6;
    }
    goto LAB_14103a592;
  case 3:
    lVar6 = *(longlong *)(param_1 + 0x6b0);
    if (lVar6 == 0) {
      local_48 = (longlong *)0x0;
      local_40 = 0x12;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      FGenericPlatformString::Memcpy(local_48,L"createAccountPage",0x24);
      local_38 = (longlong *)0x0;
      local_30 = 0;
      lVar6 = FUN_14101fa10(param_1,&local_48,0,6,&local_38);
      plVar8 = local_38;
      for (iVar10 = (int)local_30; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 2;
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free(local_38);
      }
      if (lVar6 != 0) {
        FWeakObjectPtr::operator=(lVar6 + 0x184,param_1);
        local_20 = 0;
        local_28 = lVar6;
        uVar7 = UBlendableInterface::GetPrivateStaticClass();
        local_20 = UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar7);
        FUN_142ecfdd0(param_1,&local_28,0,0,0,0);
      }
      bVar11 = true;
    }
    bVar11 = !bVar11;
    break;
  case 4:
    lVar6 = *(longlong *)(param_1 + 0x6a0);
    if (lVar6 == 0) {
      local_48 = (longlong *)0x0;
      local_40 = 0x12;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      FGenericPlatformString::Memcpy(local_48,L"resetPasswordPage",0x24);
      local_38 = (longlong *)0x0;
      local_30 = 0;
      lVar6 = FUN_141020590(param_1,&local_48,0,6,&local_38);
      plVar8 = local_38;
      for (iVar10 = (int)local_30; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 2;
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free(local_38);
      }
      if (lVar6 != 0) {
        FWeakObjectPtr::operator=(lVar6 + 0x184,param_1);
        local_20 = 0;
        local_28 = lVar6;
        uVar7 = UBlendableInterface::GetPrivateStaticClass();
        local_20 = UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar7);
        FUN_142ecfdd0(param_1,&local_28,0,0,0,0);
      }
      bVar1 = true;
    }
    bVar11 = !bVar1;
    break;
  case 5:
    lVar6 = *(longlong *)(param_1 + 0x6c0);
    if (lVar6 == 0) {
      local_48 = (longlong *)0x0;
      local_40 = 0x13;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      FGenericPlatformString::Memcpy(local_48,L"codeRedemptionPage",0x26);
      local_38 = (longlong *)0x0;
      local_30 = 0;
      lVar6 = FUN_14101f770(param_1,&local_48,0,6,&local_38);
      plVar8 = local_38;
      for (iVar10 = (int)local_30; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 2;
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free(local_38);
      }
      if (lVar6 != 0) {
        FWeakObjectPtr::operator=(lVar6 + 0x184,param_1);
        local_20 = 0;
        local_28 = lVar6;
        uVar7 = UBlendableInterface::GetPrivateStaticClass();
        local_20 = UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar7);
        FUN_142ecfdd0(param_1,&local_28,0,0,0,0);
      }
      bVar3 = true;
    }
    bVar11 = !bVar3;
    break;
  case 6:
    lVar6 = *(longlong *)(param_1 + 0x6b8);
    if (lVar6 == 0) {
      local_48 = (longlong *)0x0;
      local_40 = 0x12;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      FGenericPlatformString::Memcpy(local_48,L"rewardHistoryPage",0x24);
      local_38 = (longlong *)0x0;
      local_30 = 0;
      lVar6 = FUN_141020830(param_1,&local_48,0,6,&local_38);
      plVar8 = local_38;
      for (iVar10 = (int)local_30; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 2;
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free(local_38);
      }
      if (lVar6 != 0) {
        FWeakObjectPtr::operator=(lVar6 + 0x184,param_1);
        local_20 = 0;
        local_28 = lVar6;
        uVar7 = UBlendableInterface::GetPrivateStaticClass();
        local_20 = UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar7);
        FUN_142ecfdd0(param_1,&local_28,0,0,0,0);
      }
      bVar2 = true;
    }
    bVar11 = !bVar2;
    break;
  case 7:
    lVar6 = *(longlong *)(param_1 + 0x6c8);
    if (lVar6 == 0) {
      local_48 = (longlong *)0x0;
      local_40 = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      FGenericPlatformString::Memcpy(local_48,L"shiftOfflinePage",0x22);
      local_38 = (longlong *)0x0;
      local_30 = 0;
      lVar6 = FUN_1410202f0(param_1,&local_48,0,6,&local_38);
      plVar8 = local_38;
      for (iVar10 = (int)local_30; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 2;
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free(local_38);
      }
      if (lVar6 != 0) {
        FWeakObjectPtr::operator=(lVar6 + 0x184,param_1);
        local_20 = 0;
        local_28 = lVar6;
        uVar7 = UBlendableInterface::GetPrivateStaticClass();
        local_20 = UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar7);
        FUN_142ecfdd0(param_1,&local_28,0,0,0,0);
      }
      bVar4 = true;
    }
    bVar11 = !bVar4;
    break;
  default:
    lVar6 = *(longlong *)(param_1 + 0x698);
    if (lVar6 == 0) {
      local_48 = (longlong *)0x0;
      local_40 = 0xc;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      FGenericPlatformString::Memcpy(local_48,L"landingPage",0x18);
      local_38 = (longlong *)0x0;
      local_30 = 0;
      lVar6 = FUN_141020050(param_1,&local_48,0,6,&local_38);
      plVar8 = local_38;
      for (iVar10 = (int)local_30; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 2;
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free(local_38);
      }
      if (lVar6 != 0) {
        FWeakObjectPtr::operator=(lVar6 + 0x184,param_1);
        local_20 = 0;
        local_28 = lVar6;
        uVar7 = UBlendableInterface::GetPrivateStaticClass();
        local_20 = UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar7);
        FUN_142ecfdd0(param_1,&local_28,0,0,0,0);
      }
      bVar5 = true;
    }
    bVar11 = !bVar5;
  }
  plVar8 = local_48;
  if (!bVar11) {
LAB_14103a592:
    if (plVar8 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return lVar6;
}



// FUNCTION 14103a5e0 FUN_14103a5e0 body=1269 status=ok
// SIG undefined FUN_14103a5e0(void)

void FUN_14103a5e0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar2 + 0x38) < DAT_146874488) &&
     (_Init_thread_header(&DAT_146874488), DAT_146874488 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_146874470,L"Equip Slot 1",L"GFxSkillScreenItem",L"Equip Text Slot 1");
    atexit(FUN_143e5c690);
    _Init_thread_footer(&DAT_146874488);
  }
  if ((*(int *)(lVar2 + 0x38) < DAT_1468744a8) &&
     (_Init_thread_header(&DAT_1468744a8), DAT_1468744a8 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_146874490,L"Equip Slot 2",L"GFxSkillScreenItem",L"Equip Text Slot 2");
    atexit(FUN_143e5c6e0);
    _Init_thread_footer(&DAT_1468744a8);
  }
  if ((*(int *)(lVar2 + 0x38) < DAT_1468744c8) &&
     (_Init_thread_header(&DAT_1468744c8), DAT_1468744c8 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_1468744b0,&DAT_144661578,L"GFxSkillScreenItem",L"Purchase Item Text");
    atexit(FUN_143e5d690);
    _Init_thread_footer(&DAT_1468744c8);
  }
  if ((*(int *)(lVar2 + 0x38) < DAT_1468744e8) &&
     (_Init_thread_header(&DAT_1468744e8), DAT_1468744e8 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_1468744d0,L"Add Point",L"GFxSkillScreenItem",L"Add Point Text");
    atexit(FUN_143e5c290);
    _Init_thread_footer(&DAT_1468744e8);
  }
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x240);
  uVar12 = 0;
  if (cVar4 == '\0') {
LAB_14103a6e8:
    lVar6 = 0;
  }
  else {
    lVar6 = FWeakObjectPtr::Get(param_1 + 0x240);
    lVar6 = FWeakObjectPtr::Get(lVar6 + 0x58c);
    if (lVar6 == 0) goto LAB_14103a6e8;
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14103a6e8;
  }
  if (lVar6 != 0) {
    FUN_142f30760();
    plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar6);
    if ((plVar8 != (longlong *)0x0) && (lVar7 = (**(code **)(*plVar8 + 0x10))(plVar8), lVar7 != 0))
    {
      uVar12 = *(undefined4 *)(lVar7 + 400);
    }
  }
  uVar14 = 0xbf800000;
  if ((*(longlong *)(param_1 + 0x3f0) == 0) || (*(longlong *)(param_1 + 0x3f8) == 0)) {
LAB_14103a756:
    uVar13 = 0xbf800000;
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x3f8) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (iVar5 < 1) goto LAB_14103a756;
    uVar13 = FUN_1406a5e50(param_1 + 1000);
  }
  if ((*(longlong *)(param_1 + 0x430) != 0) && (*(longlong *)(param_1 + 0x438) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x438) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      uVar14 = FUN_1406a5e50(param_1 + 0x428);
    }
  }
  FUN_142ef30e0(local_78,DAT_146b3e2a0,lVar6,0,uVar13,uVar12);
  FUN_142ef30e0(local_60,DAT_146873b58,lVar6,0,uVar14,uVar12);
  puVar10 = &DAT_1468744f0;
  if ((*(int *)(lVar2 + 0x38) < DAT_146874508) &&
     (_Init_thread_header(&DAT_146874508), DAT_146874508 == -1)) {
    uVar9 = FUN_1404b03b0();
    FText::FText(&DAT_1468744f0,uVar9);
    atexit(FUN_143e5c620);
    _Init_thread_footer(&DAT_146874508);
  }
  if (param_2 == '\x01') {
    puVar11 = &DAT_146874470;
LAB_14103a871:
    FText::operator=(param_3,puVar11);
    param_6 = param_5;
  }
  else {
    if (param_2 == '\x02') {
      FText::operator=(param_3,&DAT_146874490);
      puVar11 = local_60;
      param_6 = param_5;
      goto LAB_14103a884;
    }
    if (param_2 != '\x03') {
      if (param_2 == '\x06') {
        puVar11 = &DAT_1468744b0;
      }
      else {
        if (param_2 != '\a') {
          puVar11 = &DAT_1468744f0;
          param_6 = param_4;
          param_4 = param_3;
          goto LAB_14103a884;
        }
        puVar11 = &DAT_1468744d0;
      }
      goto LAB_14103a871;
    }
    FText::operator=(param_3,&DAT_146874490);
    FText::operator=(param_4,&DAT_146874470);
    puVar10 = local_60;
    param_4 = param_5;
  }
  puVar11 = local_78;
LAB_14103a884:
  FText::operator=(param_4,puVar10);
  FText::operator=(param_6,puVar11);
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_58 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_70 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  return;
}



// FUNCTION 14103aae0 FUN_14103aae0 body=15 status=ok
// SIG undefined FUN_14103aae0(void)

undefined8 FUN_14103aae0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x10);
  }
  return 0;
}



// FUNCTION 14103aaf0 FUN_14103aaf0 body=435 status=ok
// SIG undefined FUN_14103aaf0(void)

undefined8 * FUN_14103aaf0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_28 [3];
  longlong *local_10;
  
  if (*(longlong *)(param_1 + 0x6e0) != 0) {
    FUN_142b45fe0(*(longlong *)(param_1 + 0x6e0),local_28 + 2);
    if (local_28[2] != 0) {
      lVar4 = *(longlong *)(local_28[2] + 8);
      plVar5 = *(longlong **)(local_28[2] + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      if (lVar4 != 0) {
        local_28[1] = 9;
        local_28[0] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
        FGenericPlatformString::Memcpy(local_28[0],L"ShiftUrl",0x12);
        FUN_142afb430(lVar4,param_2,local_28);
        if (local_28[0] != 0) {
          FMemory::Free();
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        if (local_10 == (longlong *)0x0) {
          return param_2;
        }
        LOCK();
        plVar5 = local_10 + 1;
        lVar4 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar4 != 1) {
          return param_2;
        }
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)local_10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 != 1) {
          return param_2;
        }
        (**(code **)(*local_10 + 8))(local_10,1);
        return param_2;
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
    }
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_10 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
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
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14103acb0 FUN_14103acb0 body=421 status=ok
// SIG undefined FUN_14103acb0(void)

undefined8 * FUN_14103acb0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_28 [3];
  longlong *local_10;
  
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x184);
  if (*(longlong *)(lVar5 + 0x6e0) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x184);
  FUN_142b45fe0(*(undefined8 *)(lVar5 + 0x6e0),local_28 + 2);
  if (local_28[2] != 0) {
    lVar5 = *(longlong *)(local_28[2] + 8);
    plVar4 = *(longlong **)(local_28[2] + 0x10);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (lVar5 != 0) {
      local_28[1] = 0xc;
      local_28[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
      FGenericPlatformString::Memcpy(local_28[0],L"LinkCodeUrl",0x18);
      FUN_142afb430(lVar5,param_2,local_28);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
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
      goto LAB_14103ae05;
    }
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
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_14103ae05:
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  }
  return param_2;
}



// FUNCTION 14103ae60 ToggleTabWellVisibility body=12 status=ok
// SIG undefined ToggleTabWellVisibility(void)

void SDockingTabStack::ToggleTabWellVisibility(longlong param_1)

{
  FWeakObjectPtr::Get(param_1 + 0x420);
  return;
}



// FUNCTION 14103ae70 FUN_14103ae70 body=165 status=ok
// SIG undefined FUN_14103ae70(void)

undefined8 FUN_14103ae70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar3 = FWeakObjectPtr::Get(param_2 + 0x420);
  if (lVar3 == 0) {
    return 1;
  }
  plVar4 = *(longlong **)(param_1 + 0xc20);
  plVar1 = plVar4 + *(int *)(param_1 + 0xc28);
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    if (*plVar4 == param_2) {
      return 2;
    }
  }
  if ((*(longlong *)(param_2 + 0x2f8) != 0) &&
     (cVar2 = FOpenXRHMD::IsStereoEnabled(), cVar2 != '\0')) {
    return 3;
  }
  return 4;
}



// FUNCTION 14103af20 FUN_14103af20 body=70 status=ok
// SIG undefined FUN_14103af20(void)

int FUN_14103af20(longlong param_1)

{
  float fVar1;
  
  if (0.0 < *(float *)(param_1 + 0x90)) {
    fVar1 = (float)FUN_142eedeb0(param_1 + 0x20);
    fVar1 = fVar1 / *(float *)(param_1 + 0x90);
    return (int)ROUND((fVar1 + fVar1) - 0.5) >> 1;
  }
  return 0;
}



// FUNCTION 14103af70 IsOwnerSelected body=39 status=ok
// SIG undefined IsOwnerSelected(void)

undefined1 UActorComponent::IsOwnerSelected(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x98) != 0) {
    cVar1 = FUN_142f0b080();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14103afa0 FUN_14103afa0 body=322 status=ok
// SIG undefined FUN_14103afa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14103afa0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  FUN_142eb90d0();
  if (*(char *)(param_1 + 0x500) == '\x04') {
    local_88 = (longlong *)0x0;
    local_78 = 0;
    puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = param_1;
      *puVar1 = &PTR_FUN_143f77b70;
    }
    local_b8[0] = &LAB_141032330;
    uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
    FUN_14208c300(param_1,uVar2);
    if (local_28 != 0) {
      plVar3 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar3 = local_38;
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_78 != 0) {
      plVar3 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar3 = local_88;
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,0);
      }
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else if (*(char *)(param_1 + 0x5b0) != '\0') {
    TBaseDelegate<void,FText_const_&,enum_ETextCommit::Type>::ExecuteIfBound
              (param_1 + 0x2d8,param_1,0);
  }
  return;
}



// FUNCTION 14103b0f0 FUN_14103b0f0 body=269 status=ok
// SIG undefined FUN_14103b0f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14103b0f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
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
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x30,local_78);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14467a490;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_98;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_94;
    puVar1[3] = param_2;
    puVar1[4] = param_3;
    puVar1[5] = param_4;
  }
  local_88[0] = &LAB_1410323f0;
  FUN_14208c260(param_1,local_88);
  if (local_48 != 0) {
    plVar2 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar2 = local_58;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14103b200 FUN_14103b200 body=269 status=ok
// SIG undefined FUN_14103b200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14103b200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
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
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x30,local_78);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14467a490;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_98;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_94;
    puVar1[3] = param_2;
    puVar1[4] = param_3;
    puVar1[5] = param_4;
  }
  local_88[0] = &LAB_141031ea0;
  FUN_14208c260(param_1,local_88);
  if (local_48 != 0) {
    plVar2 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar2 = local_58;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14103b310 FUN_14103b310 body=57 status=ok
// SIG undefined FUN_14103b310(void)

void FUN_14103b310(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  *(undefined1 *)(param_1 + 0x1f1) = 1;
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x184);
  if (cVar2 != '\0') {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x184);
    LOCK();
    *(undefined4 *)(lVar1 + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14103b350 FUN_14103b350 body=50 status=ok
// SIG undefined FUN_14103b350(void)

void FUN_14103b350(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x184);
  if (cVar2 != '\0') {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x184);
    LOCK();
    *(undefined4 *)(lVar1 + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14103b390 FUN_14103b390 body=8 status=ok
// SIG undefined FUN_14103b390(void)

void FUN_14103b390(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x6b0) = 6;
  return;
}



// FUNCTION 14103b3a0 FUN_14103b3a0 body=507 status=ok
// SIG undefined FUN_14103b3a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14103b3a0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_1410322c0;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_141032590;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c4f0(param_1,uVar2);
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_1410325b0;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c4f0(param_1,uVar2);
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14103b5a0 FUN_14103b5a0 body=2752 status=ok
// SIG undefined FUN_14103b5a0(void)

void FUN_14103b5a0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  bool bVar15;
  bool bVar16;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined8 local_res18;
  undefined8 local_res20;
  longlong **pplVar17;
  ulonglong local_1f8;
  longlong *local_1f0;
  ulonglong local_1e8;
  longlong *local_1e0;
  code *local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  longlong *local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  longlong *local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  longlong *local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  longlong *local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  longlong *plStack_e0;
  ulonglong local_d8;
  longlong *plStack_d0;
  undefined8 local_c8;
  longlong local_c0;
  ulonglong local_b8;
  longlong local_b0;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [8];
  longlong *local_50;
  
  uVar10 = 0;
  local_res8 = 0;
  local_1b8 = 0;
  local_1b0 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
  FGenericPlatformString::Memcpy(local_1b8,L"treeContainer",0x1c);
  local_1c8 = (longlong *)0x0;
  local_1c0 = 0;
  local_a0 = 0;
  lVar5 = FUN_140e96f30(param_1,&local_1b8,0,6,&local_1c8);
  param_1[0x140] = lVar5;
  plVar9 = local_1c8;
  for (iVar14 = (int)local_1c0; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_1c8 != (longlong *)0x0) {
    FMemory::Free(local_1c8);
  }
  if (local_1b8 != 0) {
    FMemory::Free();
  }
  plVar9 = param_1 + 0x153;
  cVar4 = FUN_14208d120(param_1,plVar9,L"arrowWrapperRight");
  if (cVar4 != '\0') {
    local_198 = 0;
    local_190 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
    FGenericPlatformString::Memcpy(local_198,L"arrow",0xc);
    local_1a8 = (longlong *)0x0;
    local_1a0 = 0;
    local_98 = 0;
    cVar4 = FUN_140e98250(*plVar9,param_1 + 0x176,&local_198,0,6,&local_1a8);
    plVar11 = local_1a8;
    for (iVar14 = (int)local_1a0; iVar14 != 0; iVar14 = iVar14 + -1) {
      if (*plVar11 != 0) {
        FMemory::Free();
      }
      plVar11 = plVar11 + 2;
    }
    if (local_1a8 != (longlong *)0x0) {
      FMemory::Free(local_1a8);
    }
    if (local_198 != 0) {
      FMemory::Free();
    }
    if (cVar4 != '\0') {
      FName::FName(&local_res20,L"OnSpinButtonPressed",1);
      lVar5 = param_1[0x176];
      FWeakObjectPtr::operator=(lVar5 + 0x1f0,param_1);
      *(undefined8 *)(lVar5 + 0x1f8) = local_res20;
    }
    local_178 = 0;
    local_170 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
    FGenericPlatformString::Memcpy(local_178,L"arrowHint",0x14);
    local_188 = (longlong *)0x0;
    local_180 = 0;
    local_90 = 0;
    cVar4 = FUN_140e98440(*plVar9,param_1 + 0x177,&local_178,0,6,&local_188);
    plVar9 = local_188;
    for (iVar14 = (int)local_180; iVar14 != 0; iVar14 = iVar14 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_188 != (longlong *)0x0) {
      FMemory::Free(local_188);
    }
    if (local_178 != 0) {
      FMemory::Free();
    }
    if (cVar4 != '\0') {
      lVar5 = param_1[0x177];
      local_b8 = uVar10;
      local_c0 = lVar5;
      if (lVar5 != 0) {
        uVar6 = UBlendableInterface::GetPrivateStaticClass();
        local_b8 = UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar6);
      }
      FUN_142ecff00(param_1,&local_c0,DAT_146873b90);
    }
  }
  plVar9 = param_1 + 0x151;
  cVar4 = FUN_14208d120(param_1,plVar9,L"arrowWrapperLeft");
  if (cVar4 != '\0') {
    local_158 = 0;
    local_150 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
    FGenericPlatformString::Memcpy(local_158,L"arrow",0xc);
    local_168 = (longlong *)0x0;
    local_160 = 0;
    local_88 = 0;
    cVar4 = FUN_140e98250(*plVar9,param_1 + 0x174,&local_158,0,6,&local_168);
    plVar11 = local_168;
    for (iVar14 = (int)local_160; iVar14 != 0; iVar14 = iVar14 + -1) {
      if (*plVar11 != 0) {
        FMemory::Free();
      }
      plVar11 = plVar11 + 2;
    }
    if (local_168 != (longlong *)0x0) {
      FMemory::Free(local_168);
    }
    if (local_158 != 0) {
      FMemory::Free();
    }
    if (cVar4 != '\0') {
      FName::FName(&local_c8,L"OnSpinButtonPressed",1);
      lVar5 = param_1[0x174];
      FWeakObjectPtr::operator=(lVar5 + 0x1f0,param_1);
      *(undefined8 *)(lVar5 + 0x1f8) = local_c8;
    }
    local_138 = 0;
    local_130 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
    FGenericPlatformString::Memcpy(local_138,L"arrowHint",0x14);
    local_148 = (longlong *)0x0;
    local_140 = 0;
    local_80 = 0;
    cVar4 = FUN_140e98440(*plVar9,param_1 + 0x175,&local_138,0,6,&local_148);
    plVar9 = local_148;
    for (iVar14 = (int)local_140; iVar14 != 0; iVar14 = iVar14 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_148 != (longlong *)0x0) {
      FMemory::Free(local_148);
    }
    if (local_138 != 0) {
      FMemory::Free();
    }
    if (cVar4 != '\0') {
      lVar5 = param_1[0x175];
      local_a8 = uVar10;
      local_b0 = lVar5;
      if (lVar5 != 0) {
        uVar6 = UBlendableInterface::GetPrivateStaticClass();
        local_a8 = UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar6);
      }
      FUN_142ecff00(param_1,&local_b0,DAT_146873b98);
    }
  }
  local_118 = 0;
  local_110 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
  FGenericPlatformString::Memcpy(local_118,L"dragSkillItem",0x1c);
  pplVar17 = &local_128;
  local_128 = (longlong *)0x0;
  local_120 = 0;
  local_78 = 0;
  lVar5 = FUN_1410213b0(param_1,&local_118,0,6,pplVar17);
  param_1[0x178] = lVar5;
  plVar9 = local_128;
  for (iVar14 = (int)local_120; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_128 != (longlong *)0x0) {
    FMemory::Free(local_128);
  }
  if (local_118 != 0) {
    FMemory::Free();
  }
  lVar5 = param_1[0x178];
  if (lVar5 == 0) {
    plVar9 = (longlong *)CONCAT44(uStackX_c,local_res8);
    uVar12 = uVar10;
LAB_14103bc69:
    bVar15 = false;
  }
  else {
    if ((*(longlong *)(lVar5 + 0x28) == 0) || (*(longlong *)(lVar5 + 0x30) == 0)) {
LAB_14103bba5:
      puVar7 = &local_e8;
      local_e8 = 0;
      plStack_e0 = (longlong *)0x0;
      uVar12 = 5;
      uVar13 = uVar10;
    }
    else {
      piVar1 = (int *)(*(longlong *)(lVar5 + 0x30) + 8);
      LOCK();
      iVar14 = *piVar1;
      if (iVar14 == 0) {
        *piVar1 = 0;
        iVar14 = 0;
      }
      UNLOCK();
      if (iVar14 < 1) goto LAB_14103bba5;
      local_1f0 = *(longlong **)(lVar5 + 0x30);
      local_1f8 = 0;
      if (local_1f0 != (longlong *)0x0) {
        LOCK();
        iVar14 = (int)local_1f0[1];
        bVar15 = iVar14 == 0;
        if (bVar15) {
          *(int *)(local_1f0 + 1) = 0;
          iVar14 = 0;
        }
        UNLOCK();
        while (!bVar15) {
          LOCK();
          bVar15 = iVar14 == (int)local_1f0[1];
          if (bVar15) {
            *(int *)(local_1f0 + 1) = iVar14 + 1;
          }
          UNLOCK();
          if (bVar15) {
            local_1f8 = *(ulonglong *)(lVar5 + 0x28);
            puVar7 = &local_1f8;
            uVar12 = 3;
            uVar13 = local_1f8;
            goto LAB_14103bbba;
          }
          LOCK();
          iVar14 = (int)local_1f0[1];
          bVar15 = iVar14 == 0;
          if (bVar15) {
            *(int *)(local_1f0 + 1) = 0;
            iVar14 = 0;
          }
          UNLOCK();
        }
        local_1f0 = (longlong *)0x0;
      }
      puVar7 = &local_1f8;
      uVar12 = 3;
      uVar13 = 0;
    }
LAB_14103bbba:
    plVar9 = (longlong *)puVar7[1];
    puVar7[1] = 0;
    plVar11 = plStack_e0;
    *puVar7 = 0;
    if (((uVar12 & 4) != 0) &&
       (uVar12 = (ulonglong)((uint)uVar12 & 0xfffffffb), plStack_e0 != (longlong *)0x0)) {
      LOCK();
      plVar2 = plStack_e0 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_e0)(plStack_e0);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*plStack_e0 + 8))(plStack_e0,1);
        }
      }
    }
    plVar11 = local_1f0;
    if (((uVar12 & 2) != 0) &&
       (uVar12 = (ulonglong)((uint)uVar12 & 0xfffffffd), local_1f0 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_1f0 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_1f0)(local_1f0);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_1f0 + 8))(local_1f0,1);
        }
      }
    }
    if (uVar13 == 0) goto LAB_14103bc69;
    bVar15 = true;
  }
  if (((uVar12 & 1) != 0) && (plVar9 != (longlong *)0x0)) {
    LOCK();
    plVar11 = plVar9 + 1;
    lVar5 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  if (!bVar15) goto LAB_14103be22;
  lVar5 = param_1[0x178];
  if ((*(longlong *)(lVar5 + 0x28) == 0) || (*(longlong *)(lVar5 + 0x30) == 0)) {
LAB_14103bd34:
    puVar7 = &local_d8;
    local_d8 = 0;
    plStack_d0 = (longlong *)0x0;
    bVar3 = false;
    bVar15 = true;
  }
  else {
    piVar1 = (int *)(*(longlong *)(lVar5 + 0x30) + 8);
    LOCK();
    iVar14 = *piVar1;
    if (iVar14 == 0) {
      *piVar1 = 0;
      iVar14 = 0;
    }
    UNLOCK();
    if (iVar14 < 1) goto LAB_14103bd34;
    local_1e0 = *(longlong **)(lVar5 + 0x30);
    bVar3 = true;
    bVar15 = false;
    local_1e8 = 0;
    if (local_1e0 != (longlong *)0x0) {
      LOCK();
      iVar14 = (int)local_1e0[1];
      bVar16 = iVar14 == 0;
      if (bVar16) {
        *(int *)(local_1e0 + 1) = 0;
        iVar14 = 0;
      }
      UNLOCK();
      while (!bVar16) {
        LOCK();
        bVar16 = iVar14 == (int)local_1e0[1];
        if (bVar16) {
          *(int *)(local_1e0 + 1) = iVar14 + 1;
        }
        UNLOCK();
        if (bVar16) {
          uVar10 = *(ulonglong *)(lVar5 + 0x28);
          puVar7 = &local_1e8;
          local_1e8 = uVar10;
          goto LAB_14103bd47;
        }
        LOCK();
        iVar14 = (int)local_1e0[1];
        bVar16 = iVar14 == 0;
        if (bVar16) {
          *(int *)(local_1e0 + 1) = 0;
          iVar14 = 0;
        }
        UNLOCK();
      }
      local_1e0 = (longlong *)0x0;
    }
    uVar10 = 0;
    puVar7 = &local_1e8;
  }
LAB_14103bd47:
  plVar9 = (longlong *)puVar7[1];
  puVar7[1] = 0;
  plVar11 = plStack_d0;
  *puVar7 = 0;
  if ((bVar15) && (plStack_d0 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_d0 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_d0)(plStack_d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
      }
    }
  }
  plVar11 = local_1e0;
  if ((bVar3) && (local_1e0 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_1e0 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_1e0)(local_1e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_1e0 + 8))(local_1e0,1);
      }
    }
  }
  FUN_142051fa0(uVar10,1);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar9 + 1;
    lVar5 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
LAB_14103be22:
  if (param_1[0x1d7] == 0) {
    FUN_14172a070(&local_res8,0);
    uVar6 = GetTransientPackage();
    FUN_1417846f0(uVar6,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    local_res18 = 0;
    uVar8 = FUN_142f1c920();
    lVar5 = FUN_1417985e0(uVar8,uVar6,0,0,(ulonglong)pplVar17 & 0xffffffff00000000,0,0,0,0);
    param_1[0x1d7] = lVar5;
    FUN_14172a400(&local_res8);
  }
  local_f8 = 0;
  local_f0 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
  FGenericPlatformString::Memcpy(local_f8,L"tutorialWrapper",0x20);
  local_108 = (longlong *)0x0;
  local_100 = 0;
  local_70 = 0;
  lVar5 = FUN_140f99e20(param_1,&local_f8,0,6,&local_108);
  param_1[0x179] = lVar5;
  plVar9 = local_108;
  for (iVar14 = (int)local_100; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_108 != (longlong *)0x0) {
    FMemory::Free(local_108);
  }
  if (local_f8 != 0) {
    FMemory::Free();
  }
  if (param_1[0x179] != 0) {
    uStack_1d0 = 0;
    local_1d8 = FUN_1410526b0;
    local_68 = 0x410526b0;
    uStack_64 = 1;
    uStack_60 = 0;
    uStack_5c = uStack_1cc;
    FUN_1407ffe80(param_1[0x179] + 0x170,param_1,&local_68);
    local_1d8 = FUN_141052a20;
    uStack_1d0 = 0;
    FUN_1407ffe80(param_1[0x179] + 0x180,param_1,&local_1d8);
    if (param_1[0x140] != 0) {
      FUN_140fda020(param_1[0x179],param_1[0x140],param_1 + 0x132);
    }
  }
  plVar9 = (longlong *)(**(code **)(*param_1 + 0x4a8))(param_1,local_58,L"loadoutDescription");
  if (param_1 + 0x155 != plVar9) {
    param_1[0x155] = *plVar9;
    *plVar9 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x156,plVar9 + 1);
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_50 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  *(undefined1 *)(param_1 + 0xd6) = 2;
  return;
}



// FUNCTION 14103c060 FUN_14103c060 body=90 status=ok
// SIG undefined FUN_14103c060(void)

void FUN_14103c060(longlong param_1)

{
  int iVar1;
  longlong local_res8;
  
  iVar1 = 0;
  local_res8 = param_1;
  if (*(int *)(param_1 + 0x6c8) != 0) {
    do {
      FUN_141025c40(&local_res8,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 != *(int *)(param_1 + 0x6c8));
    *(undefined1 *)(param_1 + 0x6b0) = 4;
    return;
  }
  *(undefined1 *)(param_1 + 0x6b0) = 4;
  return;
}



// FUNCTION 14103c0c0 FUN_14103c0c0 body=806 status=ok
// SIG undefined FUN_14103c0c0(void)

void FUN_14103c0c0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 local_res8;
  longlong *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 0x10;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"infoCardWrapper",0x20);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140e96f30(param_1,&local_18,0,6,&local_28);
  FUN_14103d7b0(param_1 + 0x6e0,uVar1);
  plVar3 = local_28;
  for (iVar4 = (int)local_20; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x7f8) != 0) {
    FName::FName(&local_res8,L"OnInfoCardHovered",1);
    lVar2 = *(longlong *)(param_1 + 0x7f8);
    FWeakObjectPtr::operator=(lVar2 + 0x210,param_1);
    *(undefined8 *)(lVar2 + 0x218) = local_res8;
    FName::FName(&local_res8,L"OnInfoCardUnhovered",1);
    lVar2 = *(longlong *)(param_1 + 0x7f8);
    FWeakObjectPtr::operator=(lVar2 + 0x220,param_1);
    *(undefined8 *)(lVar2 + 0x228) = local_res8;
  }
  if (*(longlong *)(param_1 + 0x810) != 0) {
    lVar2 = FUN_142eedf70();
    if (lVar2 != 0) {
      FName::FName(&local_res8,L"OnInfoCardHovered",1);
      FWeakObjectPtr::operator=(lVar2 + 0x210,param_1);
      *(undefined8 *)(lVar2 + 0x218) = local_res8;
      FName::FName(&local_res8,L"OnInfoCardUnhovered",1);
      FWeakObjectPtr::operator=(lVar2 + 0x220,param_1);
      *(undefined8 *)(lVar2 + 0x228) = local_res8;
    }
    lVar2 = FUN_142eedf80(*(undefined8 *)(param_1 + 0x810));
    if (lVar2 != 0) {
      FName::FName(&local_res8,L"OnInfoCardHovered",1);
      FWeakObjectPtr::operator=(lVar2 + 0x210,param_1);
      *(undefined8 *)(lVar2 + 0x218) = local_res8;
      FName::FName(&local_res8,L"OnInfoCardUnhovered",1);
      FWeakObjectPtr::operator=(lVar2 + 0x220,param_1);
      *(undefined8 *)(lVar2 + 0x228) = local_res8;
    }
    lVar2 = FUN_142eeea30(*(undefined8 *)(param_1 + 0x810));
    if (lVar2 != 0) {
      FName::FName(&local_res8,L"OnInfoCardHovered",1);
      FWeakObjectPtr::operator=(lVar2 + 0x210,param_1);
      *(undefined8 *)(lVar2 + 0x218) = local_res8;
      FName::FName(&local_res8,L"OnInfoCardUnhovered",1);
      FWeakObjectPtr::operator=(lVar2 + 0x220,param_1);
      *(undefined8 *)(lVar2 + 0x228) = local_res8;
    }
    lVar2 = APatrolNode::GetAction(*(undefined8 *)(param_1 + 0x810));
    if (lVar2 != 0) {
      FName::FName(&local_res8,L"OnInfoCardHovered",1);
      FWeakObjectPtr::operator=(lVar2 + 0x210,param_1);
      *(undefined8 *)(lVar2 + 0x218) = local_res8;
      FName::FName(&local_res8,L"OnInfoCardUnhovered",1);
      FWeakObjectPtr::operator=(lVar2 + 0x220,param_1);
      *(undefined8 *)(lVar2 + 0x228) = local_res8;
    }
  }
  *(undefined1 *)(param_1 + 0x6b0) = 3;
  return;
}



// FUNCTION 14103c3f0 FUN_14103c3f0 body=326 status=ok
// SIG undefined FUN_14103c3f0(void)

void FUN_14103c3f0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (((char)param_1[0x1e1] != '\0') && (*(int *)((longlong)param_1 + 0xf04) != (int)param_1[0x1e0])
     ) {
    lVar3 = 0xf04;
    if ((char)param_1[0x1e1] == '\0') {
      lVar3 = 0xf00;
    }
    iVar2 = *(int *)(lVar3 + (longlong)param_1);
    *(int *)(param_1 + 0x1e0) = iVar2;
    if ((char)param_1[0x1e1] != '\0') {
      *(undefined1 *)(param_1 + 0x1e1) = 0;
      iVar2 = (int)param_1[0x1e0];
    }
    if ((iVar2 < (int)param_1[0xd9]) &&
       (cVar1 = (**(code **)(*param_1 + 0x3f8))(param_1), cVar1 != '\0')) {
      *(undefined1 *)(param_1 + 0xd6) = 3;
    }
  }
  if ((int)param_1[0x1e0] != (int)param_1[0xd9]) {
    return;
  }
  cVar1 = FUN_141061650();
  if (cVar1 == '\0') {
    lVar3 = param_1[0xd8];
    lVar5 = (longlong)(int)param_1[0xd9] * 0x40 + lVar3;
    for (lVar4 = lVar3; lVar4 != lVar5; lVar4 = lVar4 + 0x40) {
      if ((*(longlong *)(lVar4 + 0x10) == 0) || (*(char *)(lVar4 + 0x28) != '\x02')) {
        if (lVar4 != lVar5) {
          iVar2 = (int)(lVar4 - lVar3 >> 6);
          goto LAB_14103c4bd;
        }
        break;
      }
    }
    iVar2 = -1;
LAB_14103c4bd:
    if (iVar2 != -1) {
      if (lVar3 == lVar5) {
        return;
      }
      do {
        if ((*(longlong *)(lVar3 + 0x10) != 0) &&
           (*(char *)(*(longlong *)(lVar3 + 0x10) + 0x2d4) == '\x04')) {
          *(undefined1 *)(lVar3 + 0x28) = 2;
        }
        lVar3 = lVar3 + 0x40;
      } while (lVar3 != lVar5);
      return;
    }
  }
  cVar1 = (**(code **)(*param_1 + 0x3f8))(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x5c0))(param_1);
    FUN_14103b3a0(param_1);
    return;
  }
  *(undefined1 *)(param_1 + 0xd6) = 5;
  return;
}



// FUNCTION 14103c540 FUN_14103c540 body=372 status=ok
// SIG undefined FUN_14103c540(void)

undefined8 FUN_14103c540(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(char *)((longlong)param_2 + 0xc) == '\0') {
    if (DAT_146873af8 == *param_2) {
      FUN_14103fb50(param_1,-*(int *)(param_1 + 0x54));
      return 1;
    }
    if (DAT_146873b00 == *param_2) {
      FUN_14103fb50(param_1,*(undefined4 *)(param_1 + 0x54));
      return 1;
    }
    if (DAT_146873b08 == *param_2) {
      FUN_14103fb50(param_1,0xffffffff);
      return 1;
    }
    if (DAT_146873b10 == *param_2) {
      FUN_14103fb50(param_1,1);
      return 1;
    }
  }
  if (*(char *)((longlong)param_2 + 0xc) == '\0') {
    if (DAT_146b3e2a0 == *param_2) {
      iVar1 = *(int *)(param_1 + 0x5c);
      if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x58))) {
        uVar2 = FUN_141039030(param_1,iVar1);
        FUN_14057da00(param_1 + 0x10,iVar1,uVar2);
        return 1;
      }
    }
    else if (DAT_146873ca0 == *param_2) {
      if (*(int *)(param_1 + 0x5c) != -1) {
        FUN_142f0ced0(param_1 + 0x20,*(float *)(param_1 + 0x90) + *(float *)(param_1 + 0x3c));
        return 1;
      }
    }
    else if ((DAT_146873c98 == *param_2) && (*(int *)(param_1 + 0x5c) != -1)) {
      FUN_142f0ced0(param_1 + 0x20,*(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x90));
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14103c6c0 FUN_14103c6c0 body=196 status=ok
// SIG undefined FUN_14103c6c0(void)

undefined8 FUN_14103c6c0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  
  if ((*(char *)((longlong)param_2 + 0xc) == '\0') &&
     ((DAT_146873b00 == *param_2 || (DAT_146873af8 == *param_2)))) {
    return 0;
  }
  cVar2 = FWeakObjectPtr::IsValid();
  if (cVar2 != '\0') {
    FWeakObjectPtr::Get(param_1 + 0xd0);
    cVar2 = FUN_142eb62a0();
    if (cVar2 == '\x01') {
      bVar1 = true;
      goto LAB_14103c732;
    }
  }
  bVar1 = false;
LAB_14103c732:
  if ((((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2a0 == *param_2)) &&
      (*(char *)(param_1 + 0x290) != '\0')) && (bVar1)) {
    FUN_142eda580(param_1 + -0x170);
    return 1;
  }
  uVar3 = FUN_142eb9c40(param_1,param_2);
  return uVar3;
}



// FUNCTION 14103c790 FUN_14103c790 body=147 status=ok
// SIG undefined FUN_14103c790(void)

void FUN_14103c790(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2b8 == *param_2)) &&
      (*(longlong *)(param_1 + 0x98) != 0)) &&
     (lVar1 = (**(code **)(*(longlong *)(param_1 + -0x170) + 0x148))(), lVar1 != 0)) {
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar2,param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  FUN_14103c830(param_1,param_2);
  return;
}



// FUNCTION 14103c830 FUN_14103c830 body=111 status=ok
// SIG undefined FUN_14103c830(void)

undefined8 FUN_14103c830(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (((*(char *)(param_1 + 0x81) == '\0') && (*(char *)((longlong)param_2 + 0xc) == '\0')) &&
     (DAT_146873c68 == *param_2)) {
    param_1 = param_1 + 0x14;
    cVar1 = FWeakObjectPtr::IsValid(param_1);
    if (cVar1 != '\0') {
      lVar2 = FWeakObjectPtr::Get(param_1);
      if (*(longlong **)(lVar2 + 0x6e0) != (longlong *)0x0) {
        cVar1 = (**(code **)(**(longlong **)(lVar2 + 0x6e0) + 0x10))();
        if (cVar1 != '\0') {
          uVar3 = FWeakObjectPtr::Get(param_1);
          FUN_141062360(uVar3);
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14103c8b0 FUN_14103c8b0 body=184 status=ok
// SIG undefined FUN_14103c8b0(void)

undefined8 FUN_14103c8b0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)((longlong)param_2 + 0xc) == '\0') {
    if (DAT_146873af8 == *param_2) {
      if (*(longlong *)(param_1 + 0x2f8) != 0) {
        uVar1 = FUN_14105a4f0(*(longlong *)(param_1 + 0x2f8),0,param_1 + -0x170);
        return uVar1;
      }
    }
    else if (DAT_146873b00 == *param_2) {
      if (*(longlong *)(param_1 + 0x2f8) != 0) {
        uVar1 = FUN_14105a4f0(*(longlong *)(param_1 + 0x2f8),1,param_1 + -0x170);
        return uVar1;
      }
    }
    else if ((DAT_146873b58 == *param_2) && (*(char *)(param_1 + 0x440) != '\0')) {
      TBaseDelegate<void,FText_const_&,enum_ETextCommit::Type>::ExecuteIfBound
                (param_1 + 0x168,param_1 + -0x170,1);
      return 1;
    }
  }
  uVar1 = FUN_142eb9ae0();
  return uVar1;
}



// FUNCTION 14103c970 FUN_14103c970 body=214 status=ok
// SIG undefined FUN_14103c970(void)

void FUN_14103c970(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar6 = 0;
  if (0 < *(int *)(param_1 + 0x88)) {
    plVar4 = *(longlong **)(param_1 + 0x80);
    uVar7 = uVar6;
    uVar8 = uVar6;
    while( true ) {
      uVar5 = uVar6;
      if (*plVar4 != 0) {
        uVar5 = *(ulonglong *)(*plVar4 + 0x10);
      }
      if (uVar5 == param_2) break;
      uVar8 = (ulonglong)((int)uVar8 + 1);
      uVar7 = uVar7 + 1;
      plVar4 = plVar4 + 1;
      if ((longlong)*(int *)(param_1 + 0x88) <= (longlong)uVar7) {
        return;
      }
    }
    iVar2 = FUN_141032d00(param_1,uVar8);
    if (((iVar2 != -1) && (FUN_14105bee0(param_1,iVar2), -1 < iVar2)) &&
       (iVar2 < *(int *)(param_1 + 0x58))) {
      iVar3 = FUN_14103fac0(param_1,iVar2);
      if (((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 0x88))) &&
         (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar3 * 8), lVar1 != 0)) {
        uVar6 = *(ulonglong *)(lVar1 + 0x10);
      }
      FUN_14057da00(param_1 + 0x10,iVar2,uVar6);
    }
  }
  return;
}



// FUNCTION 14103ca50 FUN_14103ca50 body=180 status=ok
// SIG undefined FUN_14103ca50(void)

void FUN_14103ca50(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  iVar6 = -1;
  iVar1 = iVar6;
  if (0 < *(int *)(param_1 + 0x88)) {
    plVar3 = *(longlong **)(param_1 + 0x80);
    do {
      if (*plVar3 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(longlong *)(*plVar3 + 0x10);
      }
      if (lVar4 == param_2) {
        iVar1 = FUN_141032d00(param_1);
        break;
      }
      iVar5 = iVar5 + 1;
      plVar3 = plVar3 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x88));
  }
  if (param_3 == '\0') {
    if (iVar1 != *(int *)(param_1 + 0x5c)) {
      return;
    }
    uVar2 = FUN_14103fac0(param_1);
    *(undefined4 *)(param_1 + 0xa0) = uVar2;
    if (*(int *)(param_1 + 0x9c) < -1) {
      iVar6 = *(int *)(param_1 + 0x9c);
    }
  }
  else {
    if (iVar1 == *(int *)(param_1 + 0x5c)) {
      return;
    }
    iVar5 = *(int *)(param_1 + 0x9c);
    iVar6 = iVar1;
    if ((iVar5 != -1) && (iVar5 < iVar1)) {
      iVar6 = iVar5;
    }
  }
  FUN_14105bee0(param_1,iVar6);
  return;
}



// FUNCTION 14103cb10 FUN_14103cb10 body=51 status=ok
// SIG undefined FUN_14103cb10(void)

void FUN_14103cb10(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x40);
  fVar1 = 0.0;
  if (1e-08 < ABS(fVar2)) {
    fVar1 = fVar2 * param_2;
  }
  FUN_142f0ee50(param_1 + 0x20,fVar1);
  return;
}



// FUNCTION 14103cb50 FUN_14103cb50 body=218 status=ok
// SIG undefined FUN_14103cb50(void)

void FUN_14103cb50(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  
  lVar4 = FUN_1410833d0();
  cVar2 = FUN_142ebd930(param_1);
  if ((cVar2 != '\0') && (lVar4 != 0)) {
    cVar2 = FUN_1411e70c0(lVar4 + 0x6e0);
    if ((cVar2 == '\x02') && (param_2 != 0)) {
      lVar4 = FUN_141404840();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar4 = FUN_140e97230(param_1);
        if ((lVar4 != 0) && (*(longlong **)(lVar4 + 0x10d8) != (longlong *)0x0)) {
          bVar5 = 1;
          iVar3 = (**(code **)(**(longlong **)(lVar4 + 0x10d8) + 0x408))();
          if (*(int *)(param_1 + 0x910) <= iVar3) {
            bVar5 = -(*(char *)(param_1 + 0xed0) != '\0') & 2;
          }
          FUN_140e52980(param_2,bVar5);
        }
      }
    }
  }
  return;
}



// FUNCTION 14103cc30 FUN_14103cc30 body=34 status=ok
// SIG undefined FUN_14103cc30(void)

void FUN_14103cc30(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1410cb7c0();
  FWeakObjectPtr::operator=(param_1 + 0x6d8,uVar1);
  return;
}



// FUNCTION 14103cc60 FUN_14103cc60 body=514 status=ok
// SIG undefined FUN_14103cc60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14103cc60(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  float fVar12;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined2 local_97;
  undefined1 local_95;
  int local_90 [2];
  longlong local_88;
  undefined1 *puStack_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  puStack_80 = &local_98;
  lVar11 = 0;
  local_97 = 0;
  local_95 = 0;
  local_98 = 1;
  local_48 = (longlong *)0x0;
  iVar2 = 0;
  local_38 = 0;
  local_88 = param_1;
  puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_68);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_143f77c18;
    puVar4[1] = local_88;
    puVar4[2] = puStack_80;
  }
  local_78 = FUN_141032360;
  if (0.0 < *(float *)(param_1 + 0x90)) {
    fVar12 = (float)FUN_142eedeb0(param_1 + 0x20);
    fVar12 = fVar12 / *(float *)(param_1 + 0x90);
    iVar2 = (int)ROUND((fVar12 + fVar12) - 0.5) >> 1;
  }
  iVar1 = *(int *)(param_1 + 0x54);
  iVar2 = iVar1 * iVar2;
  if (iVar2 < 0) {
    iVar7 = *(int *)(param_1 + 0x88);
  }
  else {
    if ((*(int *)(param_1 + 0x58) < 1) || (iVar1 < 1)) {
      iVar10 = 1;
    }
    else {
      iVar10 = (*(int *)(param_1 + 0x58) + -1 + iVar1) / iVar1;
    }
    iVar7 = *(int *)(param_1 + 0x88);
    iVar3 = iVar7;
    if (0 < iVar1) {
      iVar3 = (iVar7 - iVar1) / iVar1;
    }
    if (iVar3 <= iVar10) {
      iVar3 = iVar10;
    }
    if (iVar2 < iVar3 * iVar1) goto LAB_14103cd76;
  }
  iVar2 = -1;
LAB_14103cd76:
  lVar9 = lVar11;
  if (0 < iVar7) {
    do {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x80) + lVar9 * 8);
      lVar5 = lVar11;
      if (lVar6 != 0) {
        lVar5 = *(longlong *)(lVar6 + 0x10);
      }
      if (lVar5 != 0) {
        lVar6 = lVar11;
        local_90[0] = iVar2;
        local_88 = lVar5;
        if (local_38 != 0) {
          plVar8 = local_68;
          if (local_48 != (longlong *)0x0) {
            plVar8 = local_48;
          }
          if (plVar8 != (longlong *)0x0) {
            lVar6 = (**(code **)(*plVar8 + 8))();
          }
        }
        (*local_78)(lVar6,local_90,&local_88);
      }
      iVar2 = iVar2 + 1;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar7);
  }
  if (local_38 != 0) {
    plVar8 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar8 = local_48;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14103ce70 FUN_14103ce70 body=179 status=ok
// SIG undefined FUN_14103ce70(void)

void FUN_14103ce70(longlong param_1)

{
  longlong local_28 [4];
  
  if (*(char *)(param_1 + 0x1b0) != '\0') {
    *(undefined1 *)(param_1 + 0x1b0) = 0;
    local_28[0] = 0;
    local_28[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Memcpy(local_28[0],L"hide",10);
    FUN_142088910(param_1,local_28);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    *(undefined8 *)(param_1 + 0x1b4) = 0;
    *(undefined8 *)(param_1 + 0x1bc) = 0;
    *(undefined8 *)(param_1 + 0x1c4) = 0;
  }
  return;
}



// FUNCTION 14103cf30 FUN_14103cf30 body=133 status=ok
// SIG undefined FUN_14103cf30(void)

undefined8 FUN_14103cf30(longlong *param_1)

{
  float fVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  fVar1 = *(float *)(param_1 + 199);
  if (fVar1 <= 1e-08) {
    (**(code **)(*param_1 + 0x580))(fVar1,0);
    uVar2 = 0;
    *(undefined4 *)((longlong)param_1 + 0x63c) = 3;
    if (param_1[0x132] != 0) {
      local_18 = 0;
      local_10 = 0;
      uVar2 = (**(code **)(*param_1 + 0x4e8))(param_1,param_1[0x132],&local_18);
    }
    *(undefined1 *)(param_1 + 0xc6) = 0;
    return uVar2;
  }
  *(float *)((longlong)param_1 + 0x634) = fVar1;
  *(undefined1 *)(param_1 + 0xc6) = 1;
  return in_RAX;
}



// FUNCTION 14103cfc0 FUN_14103cfc0 body=2020 status=ok
// SIG undefined FUN_14103cfc0(void)

void FUN_14103cfc0(longlong param_1,longlong param_2)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong *plVar19;
  short *psVar20;
  longlong *plVar21;
  uint local_res10 [2];
  longlong *local_res18;
  longlong *local_res20;
  longlong local_98;
  ulonglong local_90;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  short *local_60;
  int local_58;
  
  FUN_141033a10();
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x68);
  cVar2 = FWeakObjectPtr::IsValid(param_2);
  puVar14 = (undefined8 *)0x0;
  if (cVar2 == '\0') goto LAB_14103d1b7;
  local_70 = (longlong *)0x0;
  local_68 = 0;
  uVar4 = FWeakObjectPtr::Get(param_2);
  lVar5 = FUN_140ecbdf0(uVar4,param_2 + 8,0,6,&local_70);
  puVar1 = (uint *)(param_1 + 0x68);
  if (*(longlong *)puVar1 == 0) {
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)operator_new(0x18);
      puVar9 = puVar14;
      if (puVar6 != (undefined8 *)0x0) {
        FGCObject::FGCObject(puVar6);
        *puVar6 = &PTR__scalar_deleting_destructor__1440f8f50;
        puVar6[2] = lVar5;
        puVar9 = puVar6;
      }
      if (puVar1 == local_res10) {
        if (puVar9 != (undefined8 *)0x0) {
          puVar6 = (undefined8 *)*puVar9;
          goto LAB_14103d0b6;
        }
      }
      else {
        puVar11 = *(undefined8 **)puVar1;
        *(undefined8 **)puVar1 = puVar9;
        if (puVar11 != (undefined8 *)0x0) {
          puVar6 = (undefined8 *)*puVar11;
          puVar9 = puVar11;
LAB_14103d0b6:
          (*(code *)*puVar6)(puVar9,1);
        }
      }
    }
  }
  else {
    *(longlong *)(*(longlong *)puVar1 + 0x10) = lVar5;
  }
  plVar12 = local_70;
  for (iVar15 = (int)local_68; iVar15 != 0; iVar15 = iVar15 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_70 != (longlong *)0x0) {
    FMemory::Free(local_70);
  }
  local_70 = (longlong *)0x0;
  local_68 = 0;
  uVar4 = FWeakObjectPtr::Get(param_2);
  lVar5 = FUN_141021f30(uVar4,param_2 + 0x18,0,6,&local_70);
  puVar1 = (uint *)(param_1 + 0x70);
  if (*(longlong *)puVar1 == 0) {
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)operator_new(0x18);
      puVar9 = puVar14;
      if (puVar6 != (undefined8 *)0x0) {
        FGCObject::FGCObject(puVar6);
        *puVar6 = &PTR__scalar_deleting_destructor__1440f8f50;
        puVar6[2] = lVar5;
        puVar9 = puVar6;
      }
      if (puVar1 == local_res10) {
        if (puVar9 != (undefined8 *)0x0) {
          puVar6 = (undefined8 *)*puVar9;
          goto LAB_14103d17e;
        }
      }
      else {
        puVar11 = *(undefined8 **)puVar1;
        *(undefined8 **)puVar1 = puVar9;
        if (puVar11 != (undefined8 *)0x0) {
          puVar6 = (undefined8 *)*puVar11;
          puVar9 = puVar11;
LAB_14103d17e:
          (*(code *)*puVar6)(puVar9,1);
        }
      }
    }
  }
  else {
    *(longlong *)(*(longlong *)puVar1 + 0x10) = lVar5;
  }
  plVar12 = local_70;
  for (iVar15 = (int)local_68; iVar15 != 0; iVar15 = iVar15 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_70 != (longlong *)0x0) {
    FMemory::Free(local_70);
  }
LAB_14103d1b7:
  if ((*(longlong *)(param_1 + 0x68) != 0) &&
     (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10), lVar5 != 0)) {
    FUN_142087ad0(lVar5,param_1 + 0x78,param_1 + 0x7c);
    local_80 = (longlong *)0x0;
    local_res10[0] = 0;
    local_74 = 0;
    puVar9 = puVar14;
    puVar6 = puVar14;
    if (0 < *(int *)(param_2 + 0x50)) {
      do {
        if (*(int *)(param_2 + 0x30) == 0) {
          puVar13 = &DAT_143f3eda8;
        }
        else {
          puVar13 = *(undefined2 **)(param_2 + 0x28);
        }
        FString::PrintfImpl(&local_60,L"%s%d",puVar13,*(int *)(param_2 + 0x54) + (int)puVar9);
        local_98 = 0;
        psVar20 = &DAT_143f3eda8;
        if (local_58 != 0) {
          psVar20 = local_60;
        }
        local_90 = 0;
        if ((psVar20 != (short *)0x0) && (*psVar20 != 0)) {
          lVar5 = -1;
          do {
            lVar18 = lVar5 + 1;
            lVar5 = lVar5 + 1;
          } while (psVar20[lVar18] != 0);
          uVar16 = (int)lVar5 + 1;
          local_90 = (ulonglong)uVar16;
          if (0 < (int)uVar16) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
          }
          FGenericPlatformString::Memcpy(local_98,psVar20,(longlong)(int)uVar16 * 2);
        }
        local_70 = (longlong *)0x0;
        local_68 = 0;
        puVar11 = puVar14;
        if (*(longlong *)(param_2 + 0x38) != 0) {
          puVar7 = (undefined8 *)UPlatformGameInstance::StaticClass();
          for (puVar8 = *(undefined8 **)(param_2 + 0x38);
              (puVar11 = puVar14, puVar8 != (undefined8 *)0x0 &&
              (puVar11 = *(undefined8 **)(param_2 + 0x38), puVar8 != puVar7));
              puVar8 = (undefined8 *)puVar8[6]) {
          }
        }
        puVar8 = puVar14;
        if (*(longlong *)(param_1 + 0x68) != 0) {
          puVar8 = *(undefined8 **)(*(longlong *)(param_1 + 0x68) + 0x10);
        }
        lVar5 = FUN_140ecbdf0(puVar8,&local_98,puVar11,6,&local_70);
        plVar12 = local_70;
        for (iVar15 = (int)local_68; iVar15 != 0; iVar15 = iVar15 + -1) {
          if (*plVar12 != 0) {
            FMemory::Free();
          }
          plVar12 = plVar12 + 2;
        }
        if (local_70 != (longlong *)0x0) {
          FMemory::Free(local_70);
        }
        if (local_98 != 0) {
          FMemory::Free();
        }
        if (lVar5 == 0) {
          if (local_60 != (short *)0x0) {
            FMemory::Free();
          }
          break;
        }
        iVar15 = (int)puVar6;
        local_res10[0] = iVar15 + 1;
        local_78 = local_res10[0];
        if (local_74 < (int)local_res10[0]) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_80,puVar6);
        }
        puVar6 = (undefined8 *)(ulonglong)local_78;
        local_80[iVar15] = lVar5;
        local_res10[0] = local_78;
        if (local_60 != (short *)0x0) {
          FMemory::Free();
        }
        uVar16 = (int)puVar9 + 1;
        puVar9 = (undefined8 *)(ulonglong)uVar16;
      } while ((int)uVar16 < *(int *)(param_2 + 0x50));
    }
    uVar16 = (uint)puVar6;
    local_88 = 0;
    iVar3 = (*(int *)(param_2 + 0x5c) - uVar16) + *(int *)(param_1 + 0x54);
    local_res18 = (longlong *)CONCAT44(local_res18._4_4_,uVar16);
    iVar15 = 0;
    if (-1 < iVar3) {
      iVar15 = iVar3;
    }
    local_98 = CONCAT44(local_98._4_4_,iVar15);
    iVar3 = 1;
    if (0 < *(int *)(param_2 + 0x58)) {
      iVar3 = *(int *)(param_2 + 0x58);
    }
    local_res20 = (longlong *)CONCAT44(local_res20._4_4_,iVar3);
    if ((0 < (int)uVar16) && (*local_80 != 0)) {
      FUN_142087ad0(*local_80,&local_88,(longlong)&local_88 + 4);
    }
    puVar9 = puVar14;
    puVar11 = puVar6;
    plVar12 = local_80;
    if (0 < iVar15) {
      do {
        uVar16 = (uint)puVar11;
        iVar15 = *(int *)(param_2 + 0x54) + (int)puVar9 + (int)puVar6;
        if (*(int *)(param_2 + 0x30) == 0) {
          puVar13 = &DAT_143f3eda8;
        }
        else {
          puVar13 = *(undefined2 **)(param_2 + 0x28);
        }
        FString::PrintfImpl(&local_60,L"%s%d",puVar13,iVar15);
        local_70 = (longlong *)0x0;
        psVar20 = &DAT_143f3eda8;
        if (local_58 != 0) {
          psVar20 = local_60;
        }
        local_68 = 0;
        if ((psVar20 != (short *)0x0) && (*psVar20 != 0)) {
          lVar5 = -1;
          do {
            lVar18 = lVar5 + 1;
            lVar5 = lVar5 + 1;
          } while (psVar20[lVar18] != 0);
          uVar17 = (int)lVar5 + 1;
          local_68 = (ulonglong)uVar17;
          if (0 < (int)uVar17) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,0);
          }
          FGenericPlatformString::Memcpy(local_70,psVar20,(longlong)(int)uVar17 * 2);
          iVar3 = (int)local_res20;
        }
        puVar6 = puVar14;
        if (*(longlong *)(param_2 + 0x38) != 0) {
          puVar7 = (undefined8 *)UPlatformGameInstance::StaticClass();
          for (puVar8 = *(undefined8 **)(param_2 + 0x38);
              (puVar6 = puVar14, puVar8 != (undefined8 *)0x0 &&
              (puVar6 = *(undefined8 **)(param_2 + 0x38), puVar8 != puVar7));
              puVar8 = (undefined8 *)puVar8[6]) {
          }
        }
        if (*(int *)(param_2 + 0x48) == 0) {
          puVar13 = &DAT_143f3eda8;
        }
        else {
          puVar13 = *(undefined2 **)(param_2 + 0x40);
        }
        puVar8 = puVar14;
        if (*(longlong *)(param_1 + 0x68) != 0) {
          puVar8 = *(undefined8 **)(*(longlong *)(param_1 + 0x68) + 0x10);
        }
        lVar5 = FUN_140f986f0(puVar8,puVar13,&local_70,puVar6);
        if (local_70 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (lVar5 == 0) {
          plVar12 = local_80;
          if (local_60 != (short *)0x0) {
            FMemory::Free();
            plVar12 = local_80;
          }
          break;
        }
        FUN_1420900f0(lVar5,CONCAT44((float)(iVar15 / iVar3) * *(float *)(param_2 + 0x68) +
                                     local_88._4_4_,
                                     (float)(iVar15 % iVar3) * *(float *)(param_2 + 100) +
                                     (float)local_88));
        lVar18 = (longlong)(int)uVar16;
        local_res10[0] = uVar16 + 1;
        local_78 = local_res10[0];
        if (local_74 < (int)local_res10[0]) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_80,puVar11);
        }
        uVar16 = local_78;
        plVar12 = local_80;
        puVar11 = (undefined8 *)(ulonglong)local_78;
        local_80[lVar18] = lVar5;
        local_res10[0] = local_78;
        if (local_60 != (short *)0x0) {
          FMemory::Free();
        }
        puVar6 = (undefined8 *)((ulonglong)local_res18 & 0xffffffff);
        uVar17 = (int)puVar9 + 1;
        puVar9 = (undefined8 *)(ulonglong)uVar17;
        iVar3 = (int)local_res20;
      } while ((int)uVar17 < (int)local_98);
    }
    local_res18 = (longlong *)(param_1 + 0x80);
    iVar15 = *(int *)(param_1 + 0x88);
    if (iVar15 < (int)uVar16) {
      *(uint *)(param_1 + 0x88) = uVar16;
      if (*(int *)(param_1 + 0x8c) < (int)uVar16) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_res18,iVar15);
      }
      if (uVar16 - iVar15 != 0) {
        puVar9 = (undefined8 *)(*local_res18 + (longlong)iVar15 * 8);
        for (uVar10 = (ulonglong)(uVar16 - iVar15); uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
      }
    }
    else if ((int)uVar16 < iVar15) {
      TArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>,TSizedDefaultAllocator<32>_>
      ::RemoveAtImpl(local_res18,uVar16,iVar15 - uVar16,1);
    }
    puVar9 = puVar14;
    puVar6 = puVar14;
    plVar21 = plVar12;
    plVar19 = plVar12;
    if (0 < *(int *)(param_1 + 0x88)) {
      do {
        local_res20 = plVar19;
        if (((-1 < (longlong)puVar6) && ((int)puVar9 < (int)local_res10[0])) &&
           (lVar5 = *plVar21, lVar5 != 0)) {
          plVar19 = (longlong *)((longlong)plVar21 + (*local_res18 - (longlong)plVar12));
          if (*plVar19 == 0) {
            puVar8 = (undefined8 *)operator_new(0x18);
            puVar11 = puVar14;
            if (puVar8 != (undefined8 *)0x0) {
              FGCObject::FGCObject(puVar8);
              puVar8[2] = lVar5;
              *puVar8 = &PTR__scalar_deleting_destructor__1440f8f50;
              puVar11 = puVar8;
            }
            plVar12 = local_res20;
            if (plVar19 == &local_98) {
              if (puVar11 != (undefined8 *)0x0) {
                puVar8 = (undefined8 *)*puVar11;
                goto LAB_14103d69f;
              }
            }
            else {
              puVar7 = (undefined8 *)*plVar19;
              *plVar19 = (longlong)puVar11;
              if (puVar7 != (undefined8 *)0x0) {
                puVar8 = (undefined8 *)*puVar7;
                puVar11 = puVar7;
LAB_14103d69f:
                (*(code *)*puVar8)(puVar11,1);
                plVar12 = local_res20;
              }
            }
          }
          else {
            *(longlong *)(*plVar19 + 0x10) = lVar5;
          }
        }
        uVar16 = (int)puVar9 + 1;
        puVar9 = (undefined8 *)(ulonglong)uVar16;
        puVar6 = (undefined8 *)((longlong)puVar6 + 1);
        plVar21 = plVar21 + 1;
        plVar19 = local_res20;
      } while ((int)uVar16 < *(int *)(param_1 + 0x88));
    }
    if (local_80 != (longlong *)0x0) {
      FMemory::Free(local_80);
    }
  }
  iVar15 = *(int *)(param_1 + 0x54);
  iVar3 = *(int *)(param_1 + 0x88);
  if (0 < iVar15) {
    iVar3 = (iVar3 - iVar15) / iVar15;
  }
  FUN_142f11a80(param_1 + 0x20,(float)iVar3 * *(float *)(param_1 + 0x90),
                (float)iVar3 * *(float *)(param_1 + 0x90));
  if ((*(longlong *)(param_1 + 0x70) != 0) &&
     (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x10), lVar5 != 0)) {
    FUN_142f0f790(lVar5,1);
  }
  iVar15 = -1;
  if (*(int *)(param_1 + 0x9c) < -1) {
    iVar15 = *(int *)(param_1 + 0x9c);
  }
  FUN_14105bee0(param_1,iVar15);
  FUN_142f0ee50(param_1 + 0x20);
  return;
}



// FUNCTION 14103d7b0 FUN_14103d7b0 body=3010 status=ok
// SIG undefined FUN_14103d7b0(void)

void FUN_14103d7b0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong **pplVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  bool bVar14;
  longlong *local_278;
  longlong *local_270;
  longlong *local_268;
  undefined8 local_260;
  longlong *local_258;
  undefined8 local_250;
  longlong local_248;
  undefined8 local_240;
  longlong *local_238;
  undefined8 local_230;
  longlong local_228;
  undefined8 local_220;
  longlong *local_218;
  undefined8 local_210;
  longlong local_208;
  undefined8 local_200;
  longlong *local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  longlong *local_198;
  longlong *local_190;
  longlong *local_188;
  longlong *plStack_180;
  longlong *local_178;
  longlong *plStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 *local_98 [2];
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  
  plVar8 = (longlong *)0x0;
  if (param_2 == 0) {
    pplVar6 = &local_178;
    local_178 = (longlong *)0x0;
    plStack_170 = (longlong *)0x0;
    bVar4 = false;
    bVar14 = true;
    plVar13 = plVar8;
    goto LAB_14103d945;
  }
  if ((*(longlong *)(param_2 + 0x28) == 0) || (*(longlong *)(param_2 + 0x30) == 0)) {
LAB_14103d873:
    pplVar6 = &local_188;
    local_188 = (longlong *)0x0;
    plStack_180 = (longlong *)0x0;
    bVar4 = false;
    bVar14 = true;
    plVar13 = (longlong *)0x0;
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_2 + 0x30) + 8);
    LOCK();
    iVar12 = *piVar1;
    if (iVar12 == 0) {
      *piVar1 = 0;
      iVar12 = 0;
    }
    UNLOCK();
    if (iVar12 < 1) goto LAB_14103d873;
    local_270 = *(longlong **)(param_2 + 0x30);
    local_278 = (longlong *)0x0;
    if (local_270 == (longlong *)0x0) {
LAB_14103d861:
      pplVar6 = &local_278;
      bVar4 = true;
      bVar14 = false;
      plVar13 = local_278;
    }
    else {
      LOCK();
      iVar12 = (int)local_270[1];
      bVar14 = iVar12 == 0;
      if (bVar14) {
        *(int *)(local_270 + 1) = 0;
        iVar12 = 0;
      }
      UNLOCK();
      while (!bVar14) {
        LOCK();
        bVar14 = iVar12 == (int)local_270[1];
        if (bVar14) {
          *(int *)(local_270 + 1) = iVar12 + 1;
        }
        UNLOCK();
        if (bVar14) {
          if (local_270 != (longlong *)0x0) {
            local_278 = *(longlong **)(param_2 + 0x28);
          }
          goto LAB_14103d861;
        }
        LOCK();
        iVar12 = (int)local_270[1];
        bVar14 = iVar12 == 0;
        if (bVar14) {
          *(int *)(local_270 + 1) = 0;
          iVar12 = 0;
        }
        UNLOCK();
      }
      pplVar6 = &local_278;
      local_270 = (longlong *)0x0;
      bVar4 = true;
      bVar14 = false;
      plVar13 = (longlong *)0x0;
    }
  }
  plVar3 = pplVar6[1];
  pplVar6[1] = (longlong *)0x0;
  plVar11 = plStack_180;
  local_190 = plVar3;
  *pplVar6 = (longlong *)0x0;
  local_198 = plVar13;
  if ((bVar14) && (plStack_180 != (longlong *)0x0)) {
    LOCK();
    plVar3 = plStack_180 + 1;
    lVar10 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_180)(plStack_180);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plStack_180 + 8))(plStack_180,1);
      }
    }
  }
  plVar3 = local_270;
  if ((bVar4) && (local_270 != (longlong *)0x0)) {
    LOCK();
    plVar11 = local_270 + 1;
    lVar10 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_270)(local_270);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_270 + 8))(local_270,1);
      }
    }
  }
  bVar4 = true;
  bVar14 = false;
  pplVar6 = &local_198;
LAB_14103d945:
  plVar3 = pplVar6[1];
  pplVar6[1] = (longlong *)0x0;
  *pplVar6 = (longlong *)0x0;
  plVar11 = plStack_170;
  if ((bVar14) && (plStack_170 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_170 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_170)(plStack_170);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plStack_170 + 8))(plStack_170,1);
      }
    }
  }
  plVar11 = local_190;
  if ((bVar4) && (local_190 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_190 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_190)(local_190);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_190 + 8))(local_190,1);
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_68 = 0;
    local_58 = 0;
    puVar7 = (undefined8 *)FUN_140438ef0(0x18,local_88);
    plVar11 = plVar3;
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &PTR_FUN_14461b758;
      puVar7[1] = plVar13;
      puVar7[2] = plVar3;
      plVar11 = plVar8;
    }
    local_98[0] = &LAB_1410322a0;
    FUN_14204c6c0(plVar13,local_98);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar11 + 1;
      lVar10 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar3 + 1;
    lVar10 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  bVar14 = param_2 != 0;
  if (bVar14) {
    local_208 = 0;
    local_200 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,0);
    FGenericPlatformString::Memcpy(local_208,L"infoCard",0x12);
    local_218 = (longlong *)0x0;
    local_210 = 0;
    plVar8 = (longlong *)FUN_140ecbdf0(param_2,&local_208,0,6,&local_218);
  }
  *param_1 = (longlong)plVar8;
  if (bVar14) {
    plVar8 = local_218;
    for (iVar12 = (int)local_210; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_218 != (longlong *)0x0) {
      FMemory::Free(local_218);
    }
  }
  if ((bVar14) && (local_208 != 0)) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    uVar9 = FUN_142085870(*param_1,local_140,L"infoCardItemType");
    FUN_142ede260(param_1 + 0xb,uVar9);
    if (local_138 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_138 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_138)(local_138);
        LOCK();
        piVar1 = (int *)((longlong)local_138 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_138 + 8))(local_138,1);
        }
      }
    }
    uVar9 = FUN_142085870(*param_1,local_130,L"infoCardItemName");
    FUN_142ede260(param_1 + 0xe,uVar9);
    if (local_128 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_128 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_128)(local_128);
        LOCK();
        piVar1 = (int *)((longlong)local_128 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_128 + 8))(local_128,1);
        }
      }
    }
    uVar9 = FUN_142085870(*param_1,local_120,L"statusText");
    FUN_142ede260(param_1 + 0x20,uVar9);
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_118 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar1 = (int *)((longlong)local_118 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_118 + 8))(local_118,1);
        }
      }
    }
    uVar9 = FUN_142085870(*param_1,local_110,L"infoCardEffectText");
    FUN_142ede260(param_1 + 0x14,uVar9);
    if (local_108 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_108 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_108)(local_108);
        LOCK();
        piVar1 = (int *)((longlong)local_108 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_108 + 8))(local_108,1);
        }
      }
    }
    uVar9 = FUN_142085870(*param_1,local_100,L"classModPoints");
    FUN_142ede260(param_1 + 0x11,uVar9);
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_f8 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar1 = (int *)((longlong)local_f8 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_f8 + 8))(local_f8,1);
        }
      }
    }
    local_1e8 = 0;
    local_1e0 = 0x18;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e8,0);
    FGenericPlatformString::Memcpy(local_1e8,L"infoCardItemDescription",0x30);
    local_1f8 = (longlong *)0x0;
    local_1f0 = 0;
    lVar10 = FUN_140ecc7d0(*param_1,&local_1e8,0,6,&local_1f8);
    param_1[0x25] = lVar10;
    plVar8 = local_1f8;
    for (iVar12 = (int)local_1f0; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_1f8 != (longlong *)0x0) {
      FMemory::Free(local_1f8);
    }
    if (local_1e8 != 0) {
      FMemory::Free();
    }
    local_1c8 = 0;
    local_1c0 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
    FGenericPlatformString::Memcpy(local_1c8,L"scrollBar",0x14);
    local_1d8 = (longlong *)0x0;
    local_1d0 = 0;
    local_148 = 0;
    lVar10 = FUN_141021f30(*param_1,&local_1c8,0,6,&local_1d8);
    param_1[0x26] = lVar10;
    plVar8 = local_1d8;
    for (iVar12 = (int)local_1d0; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_1d8 != (longlong *)0x0) {
      FMemory::Free(local_1d8);
    }
    if (local_1c8 != 0) {
      FMemory::Free();
    }
    local_248 = 0;
    local_240 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,0);
    FGenericPlatformString::Memcpy(local_248,L"scrollMask",0x16);
    local_258 = (longlong *)0x0;
    local_250 = 0;
    local_168 = 0;
    lVar10 = FUN_140ecbdf0(*param_1,&local_248,0,6,&local_258);
    param_1[0x27] = lVar10;
    plVar8 = local_258;
    for (iVar12 = (int)local_250; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_258 != (longlong *)0x0) {
      FMemory::Free(local_258);
    }
    if (local_248 != 0) {
      FMemory::Free();
    }
    local_228 = 0;
    local_220 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,0);
    FGenericPlatformString::Memcpy(local_228,L"infoCardButton",0x1e);
    local_238 = (longlong *)0x0;
    local_230 = 0;
    local_160 = 0;
    lVar10 = FUN_140f9a360(*param_1,&local_228,0,6,&local_238);
    param_1[0x23] = lVar10;
    plVar8 = local_238;
    for (iVar12 = (int)local_230; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_238 != (longlong *)0x0) {
      FMemory::Free(local_238);
    }
    if (local_228 != 0) {
      FMemory::Free();
    }
    if (((param_1[0x25] != 0) && (param_1[0x26] != 0)) && (param_1[0x27] != 0)) {
      FUN_142f118f0();
    }
    cVar5 = FUN_14208d2d0(*param_1,param_1 + 5,L"iconBGSelected");
    if (cVar5 != '\0') {
      plVar8 = (longlong *)FUN_1420392d0(param_1[5],local_f0,L"classModIndicator");
      if (param_1 + 3 != plVar8) {
        param_1[3] = *plVar8;
        *plVar8 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 4,plVar8 + 1);
      }
      if (local_e8 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_e8 + 1;
        lVar10 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_e8)(local_e8);
          LOCK();
          piVar1 = (int *)((longlong)local_e8 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_e8 + 8))(local_e8,1);
          }
        }
      }
    }
    cVar5 = FUN_14208d2d0(*param_1,param_1 + 1,L"availablePoints");
    if (cVar5 != '\0') {
      uVar9 = FUN_1420392d0(param_1[1],local_e0,L"pointCounterText");
      FUN_142ede260(param_1 + 0x1a,uVar9);
      if (local_d8 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_d8 + 1;
        lVar10 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_d8)(local_d8);
          LOCK();
          piVar1 = (int *)((longlong)local_d8 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_d8 + 8))(local_d8,1);
          }
        }
      }
      uVar9 = FUN_1420392d0(param_1[1],local_d0,L"availablePointsText");
      FUN_142ede260(param_1 + 0x17,uVar9);
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_c8 + 1;
        lVar10 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_c8)(local_c8);
          LOCK();
          piVar1 = (int *)((longlong)local_c8 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_c8 + 8))(local_c8,1);
          }
        }
      }
    }
    local_1b8 = 0;
    local_1b0 = 0x1a;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
    FGenericPlatformString::Memcpy(local_1b8,L"skillIconSelected.iconArt",0x34);
    local_268 = (longlong *)0x0;
    local_260 = 0;
    local_158 = 0;
    lVar10 = FUN_140ecbdf0(*param_1,&local_1b8,0,6,&local_268);
    plVar8 = local_268;
    for (iVar12 = (int)local_260; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_268 != (longlong *)0x0) {
      FMemory::Free(local_268);
    }
    if (local_1b8 != 0) {
      FMemory::Free();
    }
    if (lVar10 != 0) {
      local_1a8 = 0;
      local_1a0 = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
      FGenericPlatformString::Memcpy(local_1a8,L"IconArt",0x10);
      local_150 = 0;
      lVar10 = FUN_140f986f0(lVar10,L"SkillIcons",&local_1a8,0);
      param_1[0x24] = lVar10;
      if (local_1a8 != 0) {
        FMemory::Free();
      }
    }
    cVar5 = FUN_14208d2d0(*param_1,param_1 + 7,L"skillPoints");
    if (cVar5 != '\0') {
      uVar9 = FUN_1420392d0(param_1[7],local_c0,L"skillPointsText");
      FUN_142ede260(param_1 + 0x1d,uVar9);
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_b8 + 1;
        lVar10 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_b8)(local_b8);
          LOCK();
          piVar1 = (int *)((longlong)local_b8 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_b8 + 8))(local_b8,1);
          }
        }
      }
      plVar8 = (longlong *)FUN_1420392d0(param_1[7],local_b0,L"skillPointsBG");
      if (param_1 + 9 != plVar8) {
        param_1[9] = *plVar8;
        *plVar8 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 10,plVar8 + 1);
      }
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_a8 + 1;
        lVar10 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_a8)(local_a8);
          LOCK();
          piVar1 = (int *)((longlong)local_a8 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_a8 + 8))(local_a8,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14103e380 FUN_14103e380 body=93 status=ok
// SIG undefined FUN_14103e380(void)

void FUN_14103e380(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FString::operator=(param_1 + 0x5b8,param_1 + 0x898);
  FUN_142ebbf20(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14103e3e0 FUN_14103e3e0 body=383 status=ok
// SIG undefined FUN_14103e3e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14103e3e0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  longlong *local_18;
  int local_10;
  
  if (*(char *)(param_1 + 8) != '\0') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if ((DAT_146873e58 == '\0') && (puVar2 = (undefined8 *)FUN_141037370(), puVar2 != &DAT_146873e30))
  {
    DAT_146873e30 = *puVar2;
    _DAT_146873e38 = puVar2[1];
    _DAT_146873e40 = puVar2[2];
    DAT_146873e48 = puVar2[3];
    DAT_146873e50 = puVar2[4];
    DAT_146873e58 = '\x01';
  }
  FUN_14217b9f0(param_1,L"successful_only",DAT_146873e30);
  if ((DAT_146873e58 == '\0') && (puVar2 = (undefined8 *)FUN_141037370(), puVar2 != &DAT_146873e30))
  {
    DAT_146873e30 = *puVar2;
    _DAT_146873e38 = puVar2[1];
    _DAT_146873e40 = puVar2[2];
    DAT_146873e48 = puVar2[3];
    DAT_146873e50 = puVar2[4];
    DAT_146873e58 = '\x01';
  }
  uVar1 = DAT_146873e30;
  local_18 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_14467a4a8;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[2] = lVar4;
  }
  FUN_142184b10(uVar1,local_res8,3,&local_18);
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14103e54b;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14103e54b:
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



// FUNCTION 14103e560 FUN_14103e560 body=1653 status=ok
// SIG undefined FUN_14103e560(void)

void FUN_14103e560(longlong *param_1)

{
  int *piVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined2 *puVar10;
  longlong *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar6 = 0;
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  lVar3 = FUN_140e96f30(param_1,param_1 + 0xb7,0,6,&local_d8);
  plVar4 = local_d8;
  for (iVar9 = (int)local_d0; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free(local_d8);
  }
  if (lVar3 != 0) {
    param_1[0x57] = lVar3;
  }
  (**(code **)(*param_1 + 0x4a8))(param_1,&local_b8,L"userPicMC");
  if (local_b8 != 0) {
    FUN_142056670(local_b8,0);
    plVar7 = local_b0;
    param_1[0xf5] = local_b8;
    plVar4 = (longlong *)param_1[0xf6];
    if (local_b0 != plVar4) {
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_b0 + 0xc) = *(int *)((longlong)local_b0 + 0xc) + 1;
        UNLOCK();
        plVar4 = (longlong *)param_1[0xf6];
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      param_1[0xf6] = (longlong)plVar7;
    }
  }
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_b0 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)local_b0 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  if (param_1[0x57] != 0) {
    puVar10 = &DAT_143f3eda8;
    if (1 < (int)param_1[0x124]) {
      if ((int)param_1[0x124] == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)param_1[0x123];
      }
      plVar4 = (longlong *)FUN_142085870(param_1[0x57],local_a8,puVar8);
      param_1[0xf9] = *plVar4;
      plVar4 = (longlong *)plVar4[1];
      plVar7 = (longlong *)param_1[0xfa];
      if (plVar4 != plVar7) {
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
          UNLOCK();
          plVar7 = (longlong *)param_1[0xfa];
        }
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
        param_1[0xfa] = (longlong)plVar4;
      }
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_a0 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)local_a0 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_a0 + 8))(local_a0,1);
          }
        }
      }
    }
    if (1 < (int)param_1[0x126]) {
      if ((int)param_1[0x126] == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)param_1[0x125];
      }
      plVar4 = (longlong *)FUN_142085870(param_1[0x57],local_98,puVar8);
      param_1[0xfb] = *plVar4;
      plVar4 = (longlong *)plVar4[1];
      plVar7 = (longlong *)param_1[0xfc];
      if (plVar4 != plVar7) {
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
          UNLOCK();
          plVar7 = (longlong *)param_1[0xfc];
        }
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
        param_1[0xfc] = (longlong)plVar4;
      }
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_90 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar1 = (int *)((longlong)local_90 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_90 + 8))(local_90,1);
          }
        }
      }
    }
    if (1 < (int)param_1[0x116]) {
      if ((int)param_1[0x116] == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)param_1[0x115];
      }
      plVar4 = (longlong *)FUN_142085870(param_1[0x57],local_88,puVar8);
      param_1[0xf7] = *plVar4;
      plVar4 = (longlong *)plVar4[1];
      plVar7 = (longlong *)param_1[0xf8];
      if (plVar4 != plVar7) {
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
          UNLOCK();
          plVar7 = (longlong *)param_1[0xf8];
        }
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
        param_1[0xf8] = (longlong)plVar4;
      }
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_80 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)local_80 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
    }
    if (1 < (int)param_1[0x118]) {
      if ((int)param_1[0x118] == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)param_1[0x117];
      }
      uVar5 = FUN_142085870(param_1[0x57],local_78,puVar8);
      FUN_142ede260(param_1 + 0xfd,uVar5);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_70 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)local_70 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
    }
    if (1 < (int)param_1[0x120]) {
      if ((int)param_1[0x120] == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)param_1[0x11f];
      }
      uVar5 = FUN_142085870(param_1[0x57],local_68,puVar8);
      FUN_142ede260(param_1 + 0x103,uVar5);
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_60 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)local_60 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
    }
    if (1 < (int)param_1[0x11a]) {
      if ((int)param_1[0x11a] == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)param_1[0x119];
      }
      uVar5 = FUN_142085870(param_1[0x57],local_58,puVar8);
      FUN_142ede260(param_1 + 0x106,uVar5);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_50 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
    if (1 < (int)param_1[0x11c]) {
      if ((int)param_1[0x11c] == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)param_1[0x11b];
      }
      uVar5 = FUN_142085870(param_1[0x57],local_48,puVar8);
      FUN_142ede260(param_1 + 0x109,uVar5);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_40 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)local_40 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
    bVar2 = 1 < (int)param_1[0x11e];
    if (bVar2) {
      local_c8 = (longlong *)0x0;
      local_c0 = 0;
      lVar6 = FUN_140ecba50(param_1[0x57],param_1 + 0x11d,0,6,&local_c8);
    }
    param_1[0x10c] = lVar6;
    if (bVar2) {
      plVar4 = local_c8;
      for (iVar9 = (int)local_c0; iVar9 != 0; iVar9 = iVar9 + -1) {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 2;
      }
      if (local_c8 != (longlong *)0x0) {
        FMemory::Free(local_c8);
      }
    }
    if (1 < (int)param_1[0x122]) {
      if ((int)param_1[0x122] != 0) {
        puVar10 = (undefined2 *)param_1[0x121];
      }
      uVar5 = FUN_142085870(param_1[0x57],local_38,puVar10);
      FUN_142ede260(param_1 + 0x100,uVar5);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_30 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)local_30 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
    }
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffefff;
  if (param_1[0xf0] != 0) {
    (**(code **)(*param_1 + 0x5e0))(param_1,param_1 + 200);
  }
  return;
}



// FUNCTION 14103ebe0 PerformAction body=39 status=ok
// SIG undefined PerformAction(void)

undefined1 AAIController::PerformAction(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    cVar1 = FOpenXRHMD::IsStereoEnabled();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14103ec10 FUN_14103ec10 body=406 status=ok
// SIG undefined FUN_14103ec10(void)

undefined1 * FUN_14103ec10(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  bVar4 = false;
  bVar3 = false;
  if ((*(longlong *)(param_1 + 0x208) == 0) || (*(longlong *)(param_1 + 0x210) == 0)) {
    return &stack0x00000000;
  }
  FUN_142eb8880(*(longlong *)(param_1 + 0x208) + 0x308,local_58);
  cVar6 = FText::IsEmpty(local_58);
  if (cVar6 == '\0') {
    bVar4 = true;
    bVar3 = true;
    uVar8 = FUN_142eb8880(*(longlong *)(param_1 + 0x210) + 0x308,local_28);
    uVar9 = FUN_142eb8880(*(longlong *)(param_1 + 0x208) + 0x308,local_40);
    iVar7 = FText::CompareTo(uVar9,uVar8,0);
    if (iVar7 == 0) {
      puVar10 = (undefined1 *)0x1;
      goto LAB_14103ecbd;
    }
  }
  puVar10 = (undefined1 *)0x0;
LAB_14103ecbd:
  if (bVar3) {
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
  }
  if ((bVar4) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return puVar10;
}



// FUNCTION 14103edb0 FUN_14103edb0 body=164 status=ok
// SIG undefined FUN_14103edb0(void)

ulonglong FUN_14103edb0(longlong param_1,ulonglong param_2)

{
  bool bVar1;
  ulonglong in_RAX;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 == 0) goto LAB_14103ee4c;
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x60c);
  if (lVar2 == 0) {
LAB_14103ee38:
    in_RAX = 0;
  }
  else {
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
    if (!bVar1) goto LAB_14103ee38;
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if (*(longlong *)(DAT_146b33f38 + 0x58) == 0) goto LAB_14103ee38;
    in_RAX = *(ulonglong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x30);
  }
  if (param_2 == in_RAX) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
LAB_14103ee4c:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14103ee60 FUN_14103ee60 body=440 status=ok
// SIG undefined FUN_14103ee60(void)

undefined8 FUN_14103ee60(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  
  if (((param_2 != 0) && (param_3 != 0)) && (*(longlong *)(param_1 + 0x6d0) != 0)) {
    if (*(longlong *)(param_2 + 0x408) == 0) {
      if (*(longlong *)(param_2 + 0x410) == 0) {
        bVar5 = *(longlong *)(param_2 + 0x418) == 0;
      }
      else {
        bVar5 = param_4 < *(int *)(*(longlong *)(param_2 + 0x410) + 0x60);
      }
    }
    else {
      cVar2 = FUN_1409aec20(*(longlong *)(param_2 + 0x408),param_4);
      bVar5 = cVar2 == '\0';
    }
    if (!bVar5) {
      lVar3 = FUN_14144ee20();
      if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && (lVar3 = *(longlong *)(param_2 + 0x408), lVar3 != 0)) {
        plVar4 = *(longlong **)(lVar3 + 0x68);
        plVar1 = plVar4 + *(int *)(lVar3 + 0x70);
        for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
          if (*plVar4 == *(longlong *)(param_3 + 0x88)) {
            return 1;
          }
        }
      }
      lVar3 = FUN_14144ecc0();
      if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (((bVar5) && (*(longlong *)(param_2 + 0x410) != 0)) &&
         (cVar2 = FUN_1409ae470(*(longlong *)(param_2 + 0x410),param_3 + 0x88), cVar2 != '\0')) {
        return 1;
      }
      lVar3 = FUN_14144ef80();
      if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && (lVar3 = *(longlong *)(param_2 + 0x418), lVar3 != 0)) {
        plVar4 = *(longlong **)(lVar3 + 0x60);
        plVar1 = plVar4 + *(int *)(lVar3 + 0x68);
        for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
          if (*plVar4 == *(longlong *)(param_3 + 0x88)) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14103f020 FUN_14103f020 body=319 status=ok
// SIG undefined FUN_14103f020(void)

ulonglong FUN_14103f020(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  uVar8 = FWeakObjectPtr::IsValid(param_1 + 0x690);
  if ((char)uVar8 != '\0') {
    uVar9 = FWeakObjectPtr::Get(param_1 + 0x690);
    uVar8 = FUN_142dcf3a0(uVar9,&local_28);
    if (local_28 != 0) {
      local_18 = local_28;
      plStack_10 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
        UNLOCK();
      }
      bVar6 = FUN_142b547d0(*param_2,&local_18);
      plVar3 = plStack_10;
      if (plStack_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_10 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_10)(plStack_10);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_20 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_20)(plStack_20);
          LOCK();
          piVar2 = (int *)((longlong)plStack_20 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_20 + 8))(plStack_20,1);
          }
        }
      }
      return (ulonglong)bVar6;
    }
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_20 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      uVar7 = (int)lVar5 - 1;
      uVar8 = (ulonglong)uVar7;
      if (uVar7 == 0) {
        uVar8 = (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plStack_20 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          uVar8 = (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  return uVar8 & 0xffffffffffffff00;
}



// FUNCTION 14103f160 FUN_14103f160 body=319 status=ok
// SIG undefined FUN_14103f160(void)

ulonglong FUN_14103f160(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  uVar8 = FWeakObjectPtr::IsValid(param_1 + 0x6d8);
  if ((char)uVar8 != '\0') {
    uVar9 = FWeakObjectPtr::Get(param_1 + 0x6d8);
    uVar8 = FUN_142dcf3a0(uVar9,&local_28);
    if (local_28 != 0) {
      local_18 = local_28;
      plStack_10 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
        UNLOCK();
      }
      bVar6 = FUN_142b547d0(*param_2,&local_18);
      plVar3 = plStack_10;
      if (plStack_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_10 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_10)(plStack_10);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_20 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_20)(plStack_20);
          LOCK();
          piVar2 = (int *)((longlong)plStack_20 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_20 + 8))(plStack_20,1);
          }
        }
      }
      return (ulonglong)bVar6;
    }
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_20 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      uVar7 = (int)lVar5 - 1;
      uVar8 = (ulonglong)uVar7;
      if (uVar7 == 0) {
        uVar8 = (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plStack_20 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          uVar8 = (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  return uVar8 & 0xffffffffffffff00;
}



// FUNCTION 14103f2a0 FUN_14103f2a0 body=100 status=ok
// SIG undefined FUN_14103f2a0(void)

undefined1 FUN_14103f2a0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_142ebd920();
  if (cVar2 != '\0') {
    cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x5d0);
    if (cVar2 != '\0') {
      uVar1 = FWeakObjectPtr::Get(param_1 + 0x5d0);
      cVar2 = FUN_142ebe1d0(uVar1,param_1);
      if ((cVar2 != '\0') && (*(int *)(param_1 + 0x63c) == 1)) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14103f310 FUN_14103f310 body=849 status=ok
// SIG undefined FUN_14103f310(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14103f310(undefined8 param_1,longlong *param_2)

{
  wint_t wVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 auStack_68 [32];
  byte local_48 [2];
  undefined2 uStack_46;
  byte local_40 [4];
  byte local_3c;
  byte local_3b;
  byte local_3a;
  byte local_39;
  byte local_38;
  byte local_37;
  byte local_36;
  byte local_35;
  byte local_34;
  byte local_33;
  byte local_32;
  byte local_31;
  byte local_30;
  byte local_2f;
  byte local_2e;
  byte local_2d;
  byte local_2c;
  byte local_2b;
  byte local_2a;
  char local_29 [9];
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  uVar6 = *(uint *)(param_2 + 1);
  uVar2 = 0;
  iVar3 = uVar6 - 1;
  if (uVar6 == 0) {
    iVar3 = 0;
  }
  uVar4 = uVar2;
  if (iVar3 == 0x19) {
    do {
      wVar1 = towupper(*(wint_t *)(*param_2 + uVar4 * 2));
      local_40[uVar4] = (byte)wVar1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != 0x19);
    uVar6 = *(uint *)(&DAT_144678370 +
                     (ulonglong)
                     (((uint)local_40[1] ^
                      *(uint *)(&DAT_144678370 + (ulonglong)(byte)~local_40[0] * 4) ^ 0xffffff) &
                     0xff) * 4) ^
            (*(uint *)(&DAT_144678370 + (ulonglong)(byte)~local_40[0] * 4) ^ 0xffffff) >> 8;
    uVar6 = *(uint *)(&DAT_144678370 + (ulonglong)((local_40[2] ^ uVar6) & 0xff) * 4) ^ uVar6 >> 8;
    uVar6 = *(uint *)(&DAT_144678370 + (ulonglong)((local_40[3] ^ uVar6) & 0xff) * 4) ^ uVar6 >> 8;
    uVar6 = *(uint *)(&DAT_144678370 + (ulonglong)((local_3c ^ uVar6) & 0xff) * 4) ^ uVar6 >> 8;
    uVar6 = *(uint *)(&DAT_144678370 + (ulonglong)((local_3b ^ uVar6) & 0xff) * 4) ^ uVar6 >> 8;
    uVar6 = *(uint *)(&DAT_144678370 + (ulonglong)((local_3a ^ uVar6) & 0xff) * 4) ^ uVar6 >> 8;
    uVar6 = *(uint *)(&DAT_144678370 + (ulonglong)((local_39 ^ uVar6) & 0xff) * 4) ^ uVar6 >> 8;
    uVar6 = *(uint *)(&DAT_144678370 + (ulonglong)((local_38 ^ uVar6) & 0xff) * 4) ^ uVar6 >> 8;
    uVar6 = *(uint *)(&DAT_144678370 + (ulonglong)((local_37 ^ uVar6) & 0xff) * 4) ^ uVar6 >> 8;
    uVar6 = *(uint *)(&DAT_144678370 + (ulonglong)((local_36 ^ uVar6) & 0xff) * 4) ^ uVar6 >> 8;
    uVar6 = *(uint *)(&DAT_144678370 + (ulonglong)((local_35 ^ uVar6) & 0xff) * 4) ^ uVar6 >> 8;
    uVar6 = *(uint *)(&DAT_144678370 + (ulonglong)((local_34 ^ uVar6) & 0xff) * 4) ^ uVar6 >> 8;
    uVar6 = *(uint *)(&DAT_144678370 + (ulonglong)((local_33 ^ uVar6) & 0xff) * 4) ^ uVar6 >> 8;
    uVar6 = *(uint *)(&DAT_144678370 + (ulonglong)((local_32 ^ uVar6) & 0xff) * 4) ^ uVar6 >> 8;
    uVar6 = *(uint *)(&DAT_144678370 + (ulonglong)((local_31 ^ uVar6) & 0xff) * 4) ^ uVar6 >> 8;
    uVar6 = *(uint *)(&DAT_144678370 + (ulonglong)((local_30 ^ uVar6) & 0xff) * 4) ^ uVar6 >> 8;
    uVar6 = *(uint *)(&DAT_144678370 + (ulonglong)((local_2f ^ uVar6) & 0xff) * 4) ^ uVar6 >> 8;
    uVar6 = *(uint *)(&DAT_144678370 + (ulonglong)((local_2e ^ uVar6) & 0xff) * 4) ^ uVar6 >> 8;
    uVar6 = *(uint *)(&DAT_144678370 + (ulonglong)((local_2d ^ uVar6) & 0xff) * 4) ^ uVar6 >> 8;
    uVar6 = *(uint *)(&DAT_144678370 + (ulonglong)((local_2c ^ uVar6) & 0xff) * 4) ^ uVar6 >> 8;
    uVar6 = *(uint *)(&DAT_144678370 + (ulonglong)((local_2b ^ uVar6) & 0xff) * 4) ^ uVar6 >> 8;
    uVar6 = ~(*(uint *)(&DAT_144678370 + (ulonglong)((local_2a ^ uVar6) & 0xff) * 4) ^ uVar6 >> 8);
    pcVar7 = local_29;
    uStack_46._1_1_ = (byte)(uVar6 >> 0x18);
    local_48[1] = (byte)(uVar6 >> 8);
    local_48[1] = local_48[1] ^ uStack_46._1_1_;
    uStack_46 = (undefined2)(uVar6 >> 0x10);
    local_48 = (byte  [2])CONCAT11(local_48[1],(byte)(uVar6 >> 0x10) ^ (byte)uVar6);
    do {
      uVar6 = (uint)uVar2 & 0x80000003;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
      }
      if (*pcVar7 != "BCFHJKRSTWXZ3569"[local_48[(int)uVar6] & 0xf]) goto LAB_14103f64a;
      uVar5 = (uint)uVar2 + 1;
      uVar2 = (ulonglong)uVar5;
      pcVar7 = pcVar7 + 1;
    } while ((int)uVar5 < 2);
    uVar2 = CONCAT71((uint7)(uint3)(uVar6 >> 8),1);
  }
  else {
LAB_14103f64a:
    uVar2 = (ulonglong)uVar6 & 0xffffffffffffff00;
  }
  return uVar2;
}



// FUNCTION 14103f670 FUN_14103f670 body=562 status=ok
// SIG undefined FUN_14103f670(void)

ulonglong FUN_14103f670(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong local_58 [2];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  uVar6 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  uVar8 = (ulonglong)uVar6;
  if ((int)uVar6 < DAT_1468743c8) {
    uVar8 = _Init_thread_header(&DAT_1468743c8);
    if (DAT_1468743c8 == -1) {
      local_58[1] = 0x68;
      local_58[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
      FGenericPlatformString::Memcpy
                (local_58[0],
                 L"^([A-Z|a-z|0-9]([.]|[_]|[-]|[+]){0,1})+[A-Z|a-z|0-9]*[@]([A-Z|a-z|0-9]([-]|[.]){0,1})+[.][a-zA-Z]{2,3}$"
                 ,0xd0);
      FUN_1415cd4d0(&DAT_1468743b8,local_58);
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      atexit(FUN_143e5c5b0);
      uVar8 = _Init_thread_footer(&DAT_1468743c8);
    }
  }
  if (param_1 != 0) {
    uVar7 = FUN_142eb8880(param_1 + 0x308,local_20);
    FText::FText(local_38,uVar7);
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_18)(local_18);
        LOCK();
        piVar2 = (int *)((longlong)local_18 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_18 + 8))(local_18,1);
        }
      }
    }
    uVar8 = FText::ToString(local_38);
    if (1 < *(int *)(uVar8 + 8)) {
      FUN_1415cd370(local_48,&DAT_1468743b8,uVar8);
      bVar5 = FUN_1415d6d60(local_48);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)local_40 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)local_30 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
      return (ulonglong)bVar5;
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar6 = (int)lVar4 - 1;
      uVar8 = (ulonglong)uVar6;
      if (uVar6 == 0) {
        uVar8 = (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          uVar8 = (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  return uVar8 & 0xffffffffffffff00;
}



// FUNCTION 14103f8b0 FUN_14103f8b0 body=521 status=ok
// SIG undefined FUN_14103f8b0(void)

undefined8 FUN_14103f8b0(longlong param_1)

{
  int *piVar1;
  wint_t *pwVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  
  lVar10 = 0;
  bVar11 = param_1 == 0;
  if (bVar11) {
    uVar7 = FUN_1404b03b0();
    uVar7 = FText::FText(local_60,uVar7);
  }
  else {
    uVar7 = FUN_142eb8880(param_1 + 0x308,local_48);
  }
  FText::FText(local_78,uVar7);
  if ((bVar11) && (local_58 != (longlong *)0x0)) {
    LOCK();
    plVar8 = local_58 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  if ((!bVar11) && (local_40 != (longlong *)0x0)) {
    LOCK();
    plVar8 = local_40 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  plVar8 = (longlong *)FText::ToString(local_78);
  iVar9 = (int)plVar8[1] + -1;
  if ((int)plVar8[1] == 0) {
    iVar9 = 0;
  }
  if (iVar9 < 8) {
    uVar7 = 0;
  }
  else {
    bVar4 = false;
    bVar3 = false;
    bVar11 = false;
    if (iVar9 != 0) {
      do {
        pwVar2 = (wint_t *)(*plVar8 + lVar10 * 2);
        iVar6 = iswupper(*(wint_t *)(*plVar8 + lVar10 * 2));
        bVar11 = (bool)(bVar11 | iVar6 != 0);
        if (iVar6 == 0) {
          iVar6 = iswlower(*pwVar2);
          bVar3 = (bool)(bVar3 | iVar6 != 0);
          if (iVar6 == 0) {
            iVar6 = iswgraph(*pwVar2);
            bVar4 = (bool)(bVar4 | iVar6 != 0);
            if (iVar6 == 0) goto LAB_14103fa44;
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 != iVar9);
      if (((bVar11) && (bVar3)) && (bVar4)) {
        uVar7 = 1;
        goto LAB_14103fa5e;
      }
    }
LAB_14103fa44:
    uVar7 = 0;
  }
LAB_14103fa5e:
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_70 + 1;
    lVar10 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  return uVar7;
}



// FUNCTION 14103fac0 FUN_14103fac0 body=135 status=ok
// SIG undefined FUN_14103fac0(void)

/* WARNING: Removing unreachable block (ram,0x00014103fb37) */

int FUN_14103fac0(longlong param_1,int param_2)

{
  int iVar1;
  float fVar2;
  
  if (*(float *)(param_1 + 0x90) <= 0.0) {
    iVar1 = 0;
  }
  else {
    fVar2 = (float)FUN_142eedeb0(param_1 + 0x20);
    fVar2 = fVar2 / *(float *)(param_1 + 0x90);
    iVar1 = (int)ROUND((fVar2 + fVar2) - 0.5) >> 1;
  }
  if (((param_2 != -1) && (param_2 = param_2 - *(int *)(param_1 + 0x54) * iVar1, -1 < param_2)) &&
     (param_2 < *(int *)(param_1 + 0x88))) {
    return param_2;
  }
  return -1;
}



// FUNCTION 14103fb50 FUN_14103fb50 body=251 status=ok
// SIG undefined FUN_14103fb50(void)

void FUN_14103fb50(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x5c) == -1) {
    iVar1 = *(int *)(param_1 + 0xa0);
    if (((iVar1 != -1) && (-1 < iVar1)) && (iVar1 < *(int *)(param_1 + 0x88))) {
      iVar2 = FUN_141032d00();
      iVar1 = *(int *)(param_1 + 0x9c);
      if ((iVar1 != -1) && (iVar1 < iVar2)) {
        iVar2 = iVar1;
      }
      FUN_14105bee0(param_1,iVar2);
      FUN_14105a3e0(param_1,iVar2,0);
      *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
      return;
    }
    param_2 = 0;
    if (*(int *)(param_1 + 0x9c) < -1) {
      param_2 = *(int *)(param_1 + 0x9c);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x54);
    if ((*(int *)(param_1 + 0x58) < 1) || (iVar1 < 1)) {
      iVar2 = 1;
    }
    else {
      iVar2 = (*(int *)(param_1 + 0x58) + -1 + iVar1) / iVar1;
    }
    iVar3 = *(int *)(param_1 + 0x88);
    if (0 < iVar1) {
      iVar3 = (iVar3 - iVar1) / iVar1;
    }
    param_2 = *(int *)(param_1 + 0x5c) + param_2;
    if (param_2 < 0) {
      return;
    }
    if (iVar3 <= iVar2) {
      iVar3 = iVar2;
    }
    if (iVar3 * iVar1 <= param_2) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x9c);
    if ((iVar1 != -1) && (iVar1 < param_2)) {
      param_2 = iVar1;
    }
  }
  FUN_14105bee0(param_1,param_2);
  FUN_14105a3e0(param_1,param_2,0);
  return;
}



// FUNCTION 14103fc50 FUN_14103fc50 body=596 status=ok
// SIG undefined FUN_14103fc50(void)

void FUN_14103fc50(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  if (param_2 != 0) {
    lVar5 = FUN_141398ff0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      plVar2 = *(longlong **)(param_1 + 0x218);
      plVar9 = plVar2;
      if (plVar2 != plVar2 + *(int *)(param_1 + 0x220)) {
        while (*plVar9 != param_2) {
          plVar9 = plVar9 + 1;
          if (plVar9 == plVar2 + *(int *)(param_1 + 0x220)) {
            return;
          }
        }
        iVar8 = (int)((longlong)plVar9 - (longlong)plVar2 >> 3);
        if ((iVar8 != -1) && (iVar8 < *(int *)(param_1 + 0x220) + -1)) {
          if ((iVar8 + 1 < 0) || (*(int *)(param_1 + 0x220) <= iVar8 + 1)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((bVar3) &&
             (plVar2 = (longlong *)plVar2[(longlong)iVar8 + 1], plVar2 != (longlong *)0x0)) {
            uVar6 = FUN_142eb8880(plVar2 + 0x61,local_50);
            cVar4 = FText::IsEmpty(uVar6);
            if (local_48 != (longlong *)0x0) {
              LOCK();
              plVar9 = local_48 + 1;
              lVar5 = *plVar9;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*local_48)(local_48);
                LOCK();
                piVar1 = (int *)((longlong)local_48 + 0xc);
                iVar8 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*local_48 + 8))(local_48,1);
                }
              }
            }
            if (cVar4 != '\0') {
              param_1 = param_1 + 0x184;
              cVar4 = FWeakObjectPtr::IsValid(param_1);
              if (cVar4 != '\0') {
                uVar6 = FWeakObjectPtr::Get(param_1);
                uVar7 = TScriptInterface<IBlendableInterface>::
                        TScriptInterface<IBlendableInterface><UMaterialInterface>(local_78,plVar2);
                FUN_142ed36d0(uVar6,uVar7,0);
              }
              cVar4 = FWeakObjectPtr::IsValid(param_1);
              if (cVar4 == '\0') {
                local_30 = 0;
              }
              else {
                uVar6 = FWeakObjectPtr::Get(param_1);
                local_30 = FUN_142eb7540(uVar6);
              }
              local_38 = DAT_146b3e2a0;
              local_68 = 0;
              local_2c = 0;
              local_28 = 0;
              local_20 = 0;
              plStack_18 = (longlong *)0x0;
              local_10 = 0;
              (**(code **)(*plVar2 + 0x300))(plVar2,&local_38);
              plVar2 = plStack_18;
              if (plStack_18 != (longlong *)0x0) {
                LOCK();
                plVar9 = plStack_18 + 1;
                lVar5 = *plVar9;
                *(int *)plVar9 = (int)*plVar9 + -1;
                UNLOCK();
                if ((int)lVar5 == 1) {
                  (**(code **)*plStack_18)(plStack_18);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar2 + 0xc);
                  iVar8 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (**(code **)(*plVar2 + 8))(plVar2,1);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14103feb0 FUN_14103feb0 body=514 status=ok
// SIG undefined FUN_14103feb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14103feb0(undefined8 param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0 [2];
  code *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar2 = FUN_141083310();
  if (lVar2 != 0) {
    lVar3 = FUN_141404840();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_e0[0] = 0xffffffff;
      if (param_3 != 0) {
        FUN_14170c210(local_e0,param_3);
      }
      local_e4 = 0xffffffff;
      FUN_14170c210(&local_e4,lVar2);
      local_e8 = 0xffffffff;
      uVar6 = 0xffffffff;
      if (param_2 != 0) {
        FUN_14170c210(&local_e8,param_2);
        uVar6 = local_e8;
      }
      uVar7 = local_e0[0];
      uVar8 = local_e4;
      local_e8 = 0xffffffff;
      local_e4 = 0xffffffff;
      local_e0[0] = 0xffffffff;
      local_a8 = (longlong *)0x0;
      local_98 = 0;
      puVar4 = (undefined8 *)FUN_140438ef0(0x20,local_c8);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &PTR_FUN_144605c68;
        puVar4[1] = param_1;
        *(undefined4 *)(puVar4 + 2) = uVar6;
        uVar6 = 0xffffffff;
        *(undefined4 *)((longlong)puVar4 + 0x14) = uVar8;
        uVar8 = 0xffffffff;
        *(undefined4 *)(puVar4 + 3) = uVar7;
        uVar7 = 0xffffffff;
      }
      local_d8[0] = FUN_141032400;
      uVar5 = FUN_1420849a0(param_1,local_88,local_d8);
      FUN_14208c260(param_1,uVar5);
      if (local_48 != 0) {
        plVar9 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar9 = local_58;
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9,0);
        }
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (local_98 != 0) {
        plVar9 = local_c8;
        if (local_a8 != (longlong *)0x0) {
          plVar9 = local_a8;
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9,0);
        }
      }
      if (local_a8 != (longlong *)0x0) {
        FMemory::Free();
      }
      FUN_1416f8340(uVar7);
      FUN_1416f8340(uVar8);
      FUN_1416f8340(uVar6);
      FUN_1416f8340(local_e8);
      FUN_1416f8340(local_e4);
      FUN_1416f8340(local_e0[0]);
    }
  }
  return;
}



// FUNCTION 1410400c0 FUN_1410400c0 body=448 status=ok
// SIG undefined FUN_1410400c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410400c0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d4 [3];
  code *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  lVar2 = FUN_141083310();
  if (lVar2 != 0) {
    lVar3 = FUN_141404840();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_d4[0] = 0xffffffff;
      FUN_14170c210(local_d4,lVar2);
      local_d8 = 0xffffffff;
      uVar6 = 0xffffffff;
      if (param_2 != 0) {
        FUN_14170c210(&local_d8,param_2);
        uVar6 = local_d8;
      }
      uVar7 = local_d4[0];
      local_d8 = 0xffffffff;
      local_d4[0] = 0xffffffff;
      local_98 = (longlong *)0x0;
      local_88 = 0;
      puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_b8);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &PTR_FUN_144605c38;
        puVar4[1] = param_1;
        *(undefined4 *)(puVar4 + 2) = uVar6;
        uVar6 = 0xffffffff;
        *(undefined4 *)((longlong)puVar4 + 0x14) = uVar7;
        uVar7 = 0xffffffff;
      }
      local_c8[0] = FUN_141031e30;
      uVar5 = FUN_1420849a0(param_1,local_78,local_c8);
      FUN_14208c260(param_1,uVar5);
      if (local_38 != 0) {
        plVar8 = local_68;
        if (local_48 != (longlong *)0x0) {
          plVar8 = local_48;
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x10))(plVar8,0);
        }
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (local_88 != 0) {
        plVar8 = local_b8;
        if (local_98 != (longlong *)0x0) {
          plVar8 = local_98;
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x10))(plVar8,0);
        }
      }
      if (local_98 != (longlong *)0x0) {
        FMemory::Free();
      }
      FUN_1416f8340(uVar7);
      FUN_1416f8340(uVar6);
      FUN_1416f8340(local_d8);
      FUN_1416f8340(local_d4[0]);
    }
  }
  return;
}



// FUNCTION 141040280 FUN_141040280 body=27 status=ok
// SIG undefined FUN_141040280(void)

undefined4 FUN_141040280(longlong param_1)

{
  undefined4 uVar1;
  
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0xed4);
  *(undefined4 *)(param_1 + 0xed4) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0xef8) = 1;
  UNLOCK();
  *(undefined1 *)(param_1 + 0x6bc) = 1;
  return uVar1;
}



// FUNCTION 1410402a0 FUN_1410402a0 body=532 status=ok
// SIG undefined FUN_1410402a0(void)

undefined4 FUN_1410402a0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 local_38 [8];
  undefined4 local_30;
  
  plVar3 = *(longlong **)(param_1 + 0x6c0);
  iVar2 = *(int *)(param_1 + 0x6c8);
  if (plVar3 != plVar3 + (longlong)iVar2 * 8) {
    plVar12 = plVar3 + 2;
    do {
      lVar4 = *plVar12;
      if ((lVar4 == 0) || ((char)plVar12[3] != '\x02')) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        lVar11 = *(longlong *)(lVar4 + 0x2e0);
        if (lVar11 != 0) {
          lVar10 = *(longlong *)(lVar11 + 0x278);
          lVar11 = (longlong)*(int *)(lVar11 + 0x280) * 0x20 + lVar10;
          for (; lVar10 != lVar11; lVar10 = lVar10 + 0x20) {
            lVar5 = *(longlong *)(lVar10 + 0x18);
            if (lVar5 != 0) {
              lVar8 = FUN_141397a70();
              if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              if (bVar6) {
                for (plVar9 = (longlong *)(lVar5 + 0x308); plVar9 != (longlong *)(lVar5 + 0x330);
                    plVar9 = plVar9 + 1) {
                  lVar8 = *plVar9;
                  if ((lVar8 != 0) && (param_2 == *(longlong *)(lVar8 + 0x458))) {
                    FUN_141057000(lVar8,0);
                    goto LAB_1410403c4;
                  }
                }
              }
            }
          }
        }
LAB_1410403c4:
        if (*(longlong *)(lVar4 + 0x2e8) != 0) {
          FAnimNode_AimOffsetLookAt::GetLODThreshold();
          if ((*(longlong *)(lVar4 + 0x2e8) != 0) &&
             (cVar7 = FUN_1409a73a0(*(longlong *)(lVar4 + 0x2e8),*(undefined8 *)(lVar4 + 0x2f0),
                                    local_38), cVar7 != '\0')) {
            *(undefined4 *)(lVar4 + 0x418) = local_30;
            FUN_1410638d0(lVar4,1);
            if (*(longlong *)(lVar4 + 0x2e0) != 0) {
              *(undefined4 *)(*(longlong *)(lVar4 + 0x2e0) + 0x32c) = *(undefined4 *)(lVar4 + 0x418)
              ;
            }
          }
        }
      }
      else {
        LOCK();
        *(undefined4 *)(param_1 + 0xed8) = 1;
        UNLOCK();
      }
      plVar9 = plVar12 + 6;
      plVar12 = plVar12 + 8;
    } while (plVar9 != plVar3 + (longlong)iVar2 * 8);
  }
  lVar4 = *(longlong *)(param_1 + 0xbe0);
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xbd8));
  lVar11 = *(longlong *)(param_1 + 0xbe0);
  if ((lVar11 != 0) && (lVar11 != lVar4)) {
    FUN_141064ec0(lVar11,0);
  }
  *(longlong *)(param_1 + 0xbe0) = lVar4;
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xbd8));
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0xee0);
  *(undefined4 *)(param_1 + 0xee0) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 1410404c0 FUN_1410404c0 body=97 status=ok
// SIG undefined FUN_1410404c0(void)

void FUN_1410404c0(longlong param_1)

{
  char cVar1;
  undefined1 local_18 [8];
  undefined4 local_10;
  
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    cVar1 = FUN_1409a73a0(*(longlong *)(param_1 + 0x2e8),*(undefined8 *)(param_1 + 0x2f0),local_18);
    if (cVar1 != '\0') {
      *(undefined4 *)(param_1 + 0x418) = local_10;
      FUN_1410638d0(param_1,1);
      if (*(longlong *)(param_1 + 0x2e0) != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x2e0) + 0x32c) = *(undefined4 *)(param_1 + 0x418);
      }
    }
  }
  return;
}



// FUNCTION 141040530 FUN_141040530 body=67 status=ok
// SIG undefined FUN_141040530(void)

undefined4 FUN_141040530(longlong param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 < *(int *)(param_1 + 0x6b8)) {
    *(undefined1 *)(param_1 + 0x6bc) = 1;
  }
  *(int *)(param_1 + 0x6b8) = param_2;
  FUN_14105c6d0(param_1 + 0x6e0);
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0xed4);
  *(undefined4 *)(param_1 + 0xed4) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 141040580 thunk_FUN_141058c60 body=5 status=ok
// SIG undefined thunk_FUN_141058c60(void)

void thunk_FUN_141058c60(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  wchar_t *pwVar11;
  longlong *plStack_28;
  ulonglong uStack_20;
  
  plVar3 = (longlong *)FUN_140eccca0();
  if (plVar3 != (longlong *)0x0) {
    uVar4 = AGFireballProjectile::GetPrivateStaticClass();
    lVar5 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
    if ((lVar5 != 0) && (*(longlong *)(param_1 + 0x630) != 0)) {
      plVar8 = (longlong *)0x0;
      plStack_28 = (longlong *)0x0;
      uStack_20 = (ulonglong)(uint)uStack_20;
      plVar3 = plVar8;
      iVar9 = 0;
      if (&plStack_28 != (longlong **)(lVar5 + 0x550)) {
        uVar6 = *(uint *)(lVar5 + 0x558);
        plVar7 = *(longlong **)(lVar5 + 0x550);
        uStack_20 = (ulonglong)uVar6;
        if (uVar6 == 0) {
          plVar3 = (longlong *)0x0;
          iVar9 = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&plStack_28,uVar6,0)
          ;
          plVar3 = plStack_28;
          _guard_xfg_dispatch_icall_nop(plStack_28,plVar7,(longlong)(int)uVar6 << 3);
          iVar9 = (uint)uStack_20;
        }
      }
      plVar7 = plVar3;
      while ((plVar10 = plVar8, plVar7 != plVar3 + iVar9 &&
             ((plVar10 = (longlong *)*plVar7, plVar10 == (longlong *)0x0 ||
              (cVar2 = FUN_1409a7fb0(plVar10), cVar2 != '\x01'))))) {
        plVar7 = plVar7 + 1;
      }
      FUN_14105d3b0(param_1,plVar10,*(undefined8 *)(param_1 + 0x638));
      plVar7 = plVar3;
      while ((plVar10 = plVar8, plVar7 != plVar3 + iVar9 &&
             ((plVar10 = (longlong *)*plVar7, plVar10 == (longlong *)0x0 ||
              (cVar2 = FUN_1409a7fb0(plVar10), cVar2 != '\x02'))))) {
        plVar7 = plVar7 + 1;
      }
      FUN_14105d3b0(param_1,plVar10,*(undefined8 *)(param_1 + 0x640));
      if ((*(longlong *)(param_1 + 0x640) == 0) ||
         (*(longlong *)(*(longlong *)(param_1 + 0x640) + 0x1a8) == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      plStack_28 = (longlong *)0x0;
      uStack_20 = 0;
      pwVar11 = L"oneSkill";
      if (bVar1) {
        pwVar11 = L"twoSkills";
      }
      if (*pwVar11 != L'\0') {
        lVar5 = -1;
        do {
          lVar5 = lVar5 + 1;
        } while (pwVar11[lVar5] != L'\0');
        uVar6 = (int)lVar5 + 1;
        uStack_20 = (ulonglong)uVar6;
        if (0 < (int)uVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&plStack_28,0);
        }
        FGenericPlatformString::Memcpy(plStack_28,pwVar11,(longlong)(int)uVar6 * 2);
      }
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x630),&plStack_28);
      if (plStack_28 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (plVar3 != (longlong *)0x0) {
        FMemory::Free(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 141040590 FUN_141040590 body=276 status=ok
// SIG undefined FUN_141040590(void)

void FUN_141040590(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 0x2e0);
  if (lVar6 != 0) {
    lVar5 = *(longlong *)(lVar6 + 0x278);
    lVar6 = (longlong)*(int *)(lVar6 + 0x280) * 0x20 + lVar5;
    if (lVar5 != lVar6) {
      do {
        lVar1 = *(longlong *)(lVar5 + 0x18);
        if (lVar1 != 0) {
          lVar3 = FUN_141397a70();
          if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (((bVar2) && (*(longlong *)(lVar1 + 0x330) == param_2)) &&
             (plVar4 = (longlong *)(lVar1 + 0x308), lVar3 = 0,
             plVar4 <= (longlong *)(lVar1 + 0x330U))) {
            do {
              if (*plVar4 != 0) {
                FUN_141057000(*plVar4,0);
              }
              plVar4 = plVar4 + 1;
              lVar3 = lVar3 + 1;
            } while (lVar3 != 5);
          }
        }
        lVar5 = lVar5 + 0x20;
      } while (lVar5 != lVar6);
    }
  }
  return;
}



// FUNCTION 1410406b0 FUN_1410406b0 body=57 status=ok
// SIG undefined FUN_1410406b0(void)

void FUN_1410406b0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  *(undefined1 *)(param_1 + 0x1f1) = 0;
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x184);
  if (cVar2 != '\0') {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x184);
    LOCK();
    *(undefined4 *)(lVar1 + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1410406f0 FUN_1410406f0 body=139 status=ok
// SIG undefined FUN_1410406f0(void)

void FUN_1410406f0(longlong param_1,undefined8 *param_2,char param_3)

{
  char cVar1;
  
  cVar1 = FUN_14103f020();
  if (cVar1 != '\0') {
    if ((*(longlong *)(param_1 + 0x698) != 0) && (*(longlong *)(param_1 + 0x6c8) != 0)) {
      TBaseMulticastDelegate<void>::Remove
                (*(longlong *)(param_1 + 0x698) + 0x210,*(undefined8 *)(param_1 + 0x6c8));
    }
    if ((param_3 != '\0') && (cVar1 = FUN_142b4f460(*param_2), cVar1 != '\0')) {
      FUN_142eb3990();
      return;
    }
    FUN_141052d80(param_1);
  }
  return;
}



// FUNCTION 141040780 FUN_141040780 body=171 status=ok
// SIG undefined FUN_141040780(void)

void FUN_141040780(longlong param_1,undefined8 *param_2,char param_3)

{
  char cVar1;
  
  cVar1 = FUN_14103f160();
  if (cVar1 != '\0') {
    if ((*(longlong *)(param_1 + 0x6e0) != 0) && (*(longlong *)(param_1 + 0x8b8) != 0)) {
      TBaseMulticastDelegate<void>::Remove
                (*(longlong *)(param_1 + 0x6e0) + 0x210,*(undefined8 *)(param_1 + 0x8b8));
    }
    if (param_3 != '\0') {
      cVar1 = FUN_142b4f460(*param_2);
      if (cVar1 == '\0') {
        *(undefined1 *)(param_1 + 0x688) = 2;
        FUN_141066f40();
        return;
      }
      FUN_142eb3990(param_1);
      return;
    }
    FUN_1410622b0(param_1,7);
  }
  return;
}



// FUNCTION 141040830 FUN_141040830 body=264 status=ok
// SIG undefined FUN_141040830(void)

void FUN_141040830(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_18;
  int local_10;
  
  if ((*(longlong *)(param_1 + 0x638) != 0) &&
     (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x638) + 0x1a8), lVar4 != 0)) {
    lVar4 = *(longlong *)(lVar4 + 0x10);
    if (param_2 != 0) {
      lVar1 = UUGLoadoutBarUW::GetPrivateStaticClass();
      lVar3 = param_2;
      do {
        lVar2 = param_2;
        if (lVar3 == lVar1) goto LAB_141040880;
        lVar3 = *(longlong *)(lVar3 + 0x30);
      } while (lVar3 != 0);
    }
    lVar2 = 0;
LAB_141040880:
    if (lVar4 == lVar2) {
      lVar4 = *(longlong *)(param_1 + 0x638);
      goto LAB_1410408dc;
    }
  }
  if (*(longlong *)(param_1 + 0x640) == 0) {
    return;
  }
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x640) + 0x1a8);
  if (lVar4 == 0) {
    return;
  }
  lVar4 = *(longlong *)(lVar4 + 0x10);
  if (param_2 != 0) {
    lVar1 = UUGLoadoutBarUW::GetPrivateStaticClass();
    lVar3 = param_2;
    do {
      if (lVar3 == lVar1) goto LAB_1410408d0;
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  param_2 = 0;
LAB_1410408d0:
  if (lVar4 != param_2) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x640);
LAB_1410408dc:
  if (((lVar4 != 0) && (*(longlong *)(lVar4 + 0x1a8) != 0)) && (*(longlong *)(lVar4 + 0x170) != 0))
  {
    FUN_1413dced0(*(longlong *)(lVar4 + 0x1a8),&local_18);
    if (1 < local_10) {
      FUN_142088cf0(*(undefined8 *)(lVar4 + 0x170),&local_18);
    }
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141040940 FUN_141040940 body=48 status=ok
// SIG undefined FUN_141040940(void)

void FUN_141040940(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  
  if (param_2 == *(longlong *)(param_1 + 0x2f8)) {
    uVar1 = FOpenXRHMD::IsStereoEnabled(param_2);
    FUN_14105ac20(param_1,uVar1);
    return;
  }
  return;
}



// FUNCTION 141040990 FUN_141040990 body=60 status=ok
// SIG undefined FUN_141040990(void)

void FUN_141040990(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong alStack_28 [4];
  
  if (((param_2 != 0) &&
      (((lVar1 = *(longlong *)(param_1 + 0x638), lVar1 != 0 &&
        (*(longlong *)(lVar1 + 0x1a8) == param_2)) ||
       ((lVar1 = *(longlong *)(param_1 + 0x640), lVar1 != 0 &&
        (*(longlong *)(lVar1 + 0x1a8) == param_2)))))) && (lVar1 != 0)) {
    if (*(char *)(lVar1 + 0x1b0) != '\0') {
      *(undefined1 *)(lVar1 + 0x1b0) = 0;
      alStack_28[0] = 0;
      alStack_28[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(alStack_28,0);
      FGenericPlatformString::Memcpy(alStack_28[0],L"hide",10);
      FUN_142088910(lVar1,alStack_28);
      if (alStack_28[0] != 0) {
        FMemory::Free();
      }
      *(undefined8 *)(lVar1 + 0x1b4) = 0;
      *(undefined8 *)(lVar1 + 0x1bc) = 0;
      *(undefined8 *)(lVar1 + 0x1c4) = 0;
    }
    return;
  }
  return;
}



// FUNCTION 1410409d0 FUN_1410409d0 body=42 status=ok
// SIG undefined FUN_1410409d0(void)

void FUN_1410409d0(longlong *param_1)

{
  FUN_142ebee70();
  FUN_1410563b0(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001410409f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x578))(param_1,0);
  return;
}



// FUNCTION 141040a00 FUN_141040a00 body=301 status=ok
// SIG undefined FUN_141040a00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141040a00(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  FUN_142ebee70();
  *(undefined1 *)(param_1 + 0x672) = 0;
  FUN_141063550(param_1,*(undefined1 *)(param_1 + 0x670),1);
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_141031da0;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141040b30 FUN_141040b30 body=44 status=ok
// SIG undefined FUN_141040b30(void)

void FUN_141040b30(longlong *param_1)

{
  FUN_142ebee70();
  (**(code **)(*param_1 + 0x580))(param_1,1);
  *(undefined4 *)((longlong)param_1 + 0x63c) = 1;
  return;
}



// FUNCTION 141040b60 FUN_141040b60 body=42 status=ok
// SIG undefined FUN_141040b60(void)

void FUN_141040b60(longlong *param_1)

{
  FUN_142ebee70();
  FUN_141058c60(param_1);
                    /* WARNING: Could not recover jumptable at 0x000141040b83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x578))(param_1,1);
  return;
}



// FUNCTION 141040b90 FUN_141040b90 body=68 status=ok
// SIG undefined FUN_141040b90(void)

void FUN_141040b90(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  
  if (*(longlong *)(param_1 + 0x218) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x218) + 0x170);
    uVar2 = FUN_141032650();
    (**(code **)(lVar1 + 0x38))(*(longlong *)(param_1 + 0x218) + 0x170,uVar2);
  }
  return;
}



// FUNCTION 141040be0 FUN_141040be0 body=94 status=ok
// SIG undefined FUN_141040be0(void)

void FUN_141040be0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  float fVar3;
  
  cVar2 = FUN_142d52a00(param_2);
  if (cVar2 != '\0') {
    uVar1 = FUN_142d52a20(param_2);
    uVar1 = FArchive::operator<<(uVar1);
    fVar3 = (float)FUN_142d5fea0(uVar1);
    *(bool *)(param_1 + 0x304) = 1e-08 < ABS(fVar3 - 1.0);
  }
  return;
}



// FUNCTION 141040c40 FUN_141040c40 body=2342 status=ok
// SIG undefined FUN_141040c40(void)

void FUN_141040c40(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  int *piVar10;
  undefined *puVar11;
  longlong local_48 [2];
  undefined1 local_38 [16];
  undefined1 local_28 [8];
  longlong *local_20;
  
  piVar10 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar10 < DAT_146873fc8) && (_Init_thread_header(&DAT_146873fc8), DAT_146873fc8 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_146873fb0,L"Code Redemption Failed",L"SHiFTMenu",L"CodeRedeemErrorHeader");
    atexit(FUN_143e5caa0);
    _Init_thread_footer(&DAT_146873fc8);
  }
  if ((*piVar10 < DAT_146873fe8) && (_Init_thread_header(&DAT_146873fe8), DAT_146873fe8 == -1)) {
    uVar7 = FUN_141062ee0(param_2);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,
                       L"Received unhandled error type \"{0}\" from SHiFT server.\nPlease open a JIRA bug for the UI team and attach a screenshot of this message."
                       ,L"SHiFTMenu",L"CodeRedeemErrorUnhandled");
    uVar8 = FTextFormat::FTextFormat(local_38,uVar8);
    FUN_14101f150(&DAT_146873fd0,uVar8,uVar7);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
    atexit(FUN_143e5d0e0);
    _Init_thread_footer(&DAT_146873fe8);
  }
  if ((*piVar10 < DAT_146874008) && (_Init_thread_header(&DAT_146874008), DAT_146874008 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_146873ff0,L"Sorry, but the code you have entered has already been redeemed.",
               L"SHiFTMenu",L"CodeRedeemErrorTaken");
    atexit(FUN_143e5cff0);
    _Init_thread_footer(&DAT_146874008);
  }
  if ((*piVar10 < DAT_146874028) && (_Init_thread_header(&DAT_146874028), DAT_146874028 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_146874010,
               L"Sorry, but the code you have entered is expired and can no longer be redeemed.",
               L"SHiFTMenu",L"CodeRedeemErrorExpired");
    atexit(FUN_143e5c910);
    _Init_thread_footer(&DAT_146874028);
  }
  if ((*piVar10 < DAT_146874048) && (_Init_thread_header(&DAT_146874048), DAT_146874048 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_146874030,
               L"Sorry, but the code you have entered is not valid. Please ensure all 25 characters of the code are entered correctly."
               ,L"SHiFTMenu",L"CodeRedeemErrorInvalid");
    atexit(FUN_143e5cbe0);
    _Init_thread_footer(&DAT_146874048);
  }
  if ((*piVar10 < DAT_146874068) && (_Init_thread_header(&DAT_146874068), DAT_146874068 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_146874050,L"Sorry, but the code you have entered cannot be redeemed.",
               L"SHiFTMenu",L"CodeRedeemErrorGeneralFailure");
    atexit(FUN_143e5c960);
    _Init_thread_footer(&DAT_146874068);
  }
  if ((*piVar10 < DAT_146874088) && (_Init_thread_header(&DAT_146874088), DAT_146874088 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_146874070,&DAT_1446740a0,L"SHiFTMenu",L"CodeRedeemErrorNetworkFailure");
    atexit(FUN_143e5cc80);
    _Init_thread_footer(&DAT_146874088);
  }
  if ((*piVar10 < DAT_1468740a8) && (_Init_thread_header(&DAT_1468740a8), DAT_1468740a8 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_146874090,&DAT_1446741f0,L"SHiFTMenu",L"CodeRedeemErrorTimeout");
    atexit(FUN_143e5d040);
    _Init_thread_footer(&DAT_1468740a8);
  }
  if ((*piVar10 < DAT_1468740c8) && (_Init_thread_header(&DAT_1468740c8), DAT_1468740c8 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_1468740b0,
               L"You have already redeemed this one-time offer. Feel free to share this code with a friend!"
               ,L"SHiFTMenu",L"CodeRedeemErrorDuplicate");
    atexit(FUN_143e5c780);
    _Init_thread_footer(&DAT_1468740c8);
  }
  if ((*piVar10 < DAT_1468740e8) && (_Init_thread_header(&DAT_1468740e8), DAT_1468740e8 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_1468740d0,L"You already have this item.",L"SHiFTMenu",
               L"CodeRedeemErrorAtCapacity");
    atexit(FUN_143e5c730);
    _Init_thread_footer(&DAT_1468740e8);
  }
  if ((*piVar10 < DAT_146874108) && (_Init_thread_header(&DAT_146874108), DAT_146874108 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_1468740f0,L"You must specify a password.",L"SHiFTMenu",
               L"SignUpErrorPasswordBlank");
    atexit(FUN_143e5cd20);
    _Init_thread_footer(&DAT_146874108);
  }
  if ((*piVar10 < DAT_146874128) && (_Init_thread_header(&DAT_146874128), DAT_146874128 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_146874110,
               L"The password you have specified is too short. A valid password contains a minimum of 8 characters."
               ,L"SHiFTMenu",L"SignUpErrorPasswordTooShort");
    atexit(FUN_143e5cf00);
    _Init_thread_footer(&DAT_146874128);
  }
  if ((*piVar10 < DAT_146874148) && (_Init_thread_header(&DAT_146874148), DAT_146874148 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_146874130,L"The password you have specified is too long.",L"SHiFTMenu",
               L"SignUpErrorPasswordTooLong");
    atexit(FUN_143e5ce60);
    _Init_thread_footer(&DAT_146874148);
  }
  if ((*piVar10 < DAT_146874168) && (_Init_thread_header(&DAT_146874168), DAT_146874168 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_146874150,
               L"The password you have specified contains invalid characters. It must be 8+ characters long, with at least one uppercase character, one lowercase character, and one number or special character."
               ,L"SHiFTMenu",L"SignUpErrorPasswordInvalid");
    atexit(FUN_143e5cdc0);
    _Init_thread_footer(&DAT_146874168);
  }
  if ((*piVar10 < DAT_146874188) && (_Init_thread_header(&DAT_146874188), DAT_146874188 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_146874170,L"You must specify an e-mail.",L"SHiFTMenu",L"SignUpErrorEmailBlank");
    atexit(FUN_143e5c7d0);
    _Init_thread_footer(&DAT_146874188);
  }
  if ((*piVar10 < DAT_1468741a8) && (_Init_thread_header(&DAT_1468741a8), DAT_1468741a8 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_146874190,L"Code Redeemed",L"SHiFTMenu",L"CodeRedeemSuccessHeader");
    atexit(FUN_143e5d820);
    _Init_thread_footer(&DAT_1468741a8);
  }
  if ((*piVar10 < DAT_1468741c8) && (_Init_thread_header(&DAT_1468741c8), DAT_1468741c8 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_1468741b0,&DAT_144674b10,L"SHiFTMenu",L"CodeRedeemSuccessMessage");
    atexit(FUN_143e5d8c0);
    _Init_thread_footer(&DAT_1468741c8);
  }
  lVar3 = param_1 + 0x184;
  cVar5 = FWeakObjectPtr::IsValid(lVar3);
  if (cVar5 == '\0') {
    return;
  }
  lVar6 = FWeakObjectPtr::Get(lVar3);
  if (*(longlong *)(lVar6 + 0x6e0) != 0) {
    lVar6 = FWeakObjectPtr::Get(lVar3);
    TBaseMulticastDelegate<void>::Remove
              (*(longlong *)(lVar6 + 0x6e0) + 0x1b0,*(undefined8 *)(param_1 + 0x1f8));
  }
  lVar6 = FWeakObjectPtr::Get(lVar3);
  if (*(longlong *)(lVar6 + 0x690) == 0) {
    return;
  }
  if (*(longlong *)(lVar6 + 0x690) != param_1) {
    return;
  }
  uVar7 = FWeakObjectPtr::Get(lVar3);
  if (DAT_146873e68 == '\0') {
    FUN_14103e3e0(&DAT_146873e60);
  }
  uVar8 = FUN_1410391f0(param_1,local_48);
  uVar7 = FUN_140e971d0(uVar7);
  FUN_14105a780(&DAT_146873e60,uVar7,uVar8,param_2);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  switch(param_2) {
  case 0:
    lVar6 = FWeakObjectPtr::Get(lVar3);
    *(undefined4 *)(lVar6 + 0x6f4) = 6;
    *(undefined1 *)(lVar6 + 0x688) = 0;
    FUN_141066f40(lVar6);
    uVar7 = FWeakObjectPtr::Get(lVar3);
    puVar11 = &DAT_1468741b0;
    puVar9 = &DAT_146874190;
    goto LAB_141040f1a;
  case 1:
    uVar7 = FWeakObjectPtr::Get(lVar3);
    puVar11 = &DAT_146874010;
    break;
  case 2:
    uVar7 = FWeakObjectPtr::Get(lVar3);
    puVar11 = &DAT_146874030;
    break;
  case 3:
    uVar7 = FWeakObjectPtr::Get(lVar3);
    puVar11 = &DAT_146873ff0;
    break;
  default:
    uVar7 = FWeakObjectPtr::Get(lVar3);
    puVar11 = &DAT_146874050;
    break;
  case 5:
    uVar7 = FWeakObjectPtr::Get(lVar3);
    puVar11 = &DAT_146874070;
    break;
  case 6:
    uVar7 = FWeakObjectPtr::Get(lVar3);
    puVar11 = &DAT_146874090;
    break;
  case 7:
    uVar7 = FWeakObjectPtr::Get(lVar3);
    puVar11 = &DAT_1468740b0;
    break;
  case 8:
    uVar7 = FWeakObjectPtr::Get(lVar3);
    puVar11 = &DAT_1468740d0;
  }
  puVar9 = &DAT_146873fb0;
LAB_141040f1a:
  FUN_141061c00(uVar7,puVar9,puVar11);
  return;
}



// FUNCTION 141041590 FUN_141041590 body=2602 status=ok
// SIG undefined FUN_141041590(void)

void FUN_141041590(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  int *piVar9;
  undefined *puVar10;
  bool bVar11;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [16];
  undefined1 local_30 [24];
  
  piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar9 < DAT_1468741e8) && (_Init_thread_header(&DAT_1468741e8), DAT_1468741e8 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_1468741d0,L"Sign Up Failed",L"SHiFTMenu",L"SignUpErrorHeaderText");
    atexit(FUN_143e5caf0);
    _Init_thread_footer(&DAT_1468741e8);
  }
  if ((*piVar9 < DAT_146874208) && (_Init_thread_header(&DAT_146874208), DAT_146874208 == -1)) {
    switch(param_2) {
    case 0:
      pwVar8 = L"Success";
      break;
    case 1:
      pwVar8 = L"EmailTaken";
      break;
    case 2:
      pwVar8 = L"PlatformTaken";
      break;
    case 3:
      pwVar8 = L"GeneralFailure";
      break;
    case 4:
      pwVar8 = L"PasswordNotSet";
      break;
    case 5:
      pwVar8 = L"PasswordTooShort";
      break;
    case 6:
      pwVar8 = L"PasswordTooLong";
      break;
    case 7:
      pwVar8 = L"PasswordInvalid";
      break;
    case 8:
      pwVar8 = L"EmailNotSet";
      break;
    case 9:
      pwVar8 = L"EmailNotValid";
      break;
    case 10:
      pwVar8 = L"NetworkFailure";
      break;
    case 0xb:
      pwVar8 = L"Timeout";
      break;
    default:
      pwVar8 = L"";
    }
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_88,
                       L"Received unhandled error type \"{0}\" from SHiFT server.\nPlease open a JIRA bug for the UI team and attach a screenshot of this message."
                       ,L"SHiFTMenu",L"SignUpErrorUnhandledText");
    uVar7 = FTextFormat::FTextFormat(local_40,uVar7);
    FUN_14101f150(&DAT_1468741f0,uVar7,pwVar8);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)local_80 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    atexit(FUN_143e5d130);
    _Init_thread_footer(&DAT_146874208);
  }
  if ((*piVar9 < DAT_146874228) && (_Init_thread_header(&DAT_146874228), DAT_146874228 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_146874210,&DAT_1446776a0,L"SHiFTMenu",L"SignUpErrorEmailTakenText");
    atexit(FUN_143e5c8c0);
    _Init_thread_footer(&DAT_146874228);
  }
  if ((*piVar9 < DAT_146874248) && (_Init_thread_header(&DAT_146874248), DAT_146874248 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_146874230,&DAT_144677770,L"SHiFTMenu",L"SignUpErrorPlatformTakenText");
    atexit(FUN_143e5cfa0);
    _Init_thread_footer(&DAT_146874248);
  }
  if ((*piVar9 < DAT_146874268) && (_Init_thread_header(&DAT_146874268), DAT_146874268 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_146874250,&DAT_144677850,L"SHiFTMenu",L"SignUpErrorGeneralFailureText");
    atexit(FUN_143e5c9b0);
    _Init_thread_footer(&DAT_146874268);
  }
  if ((*piVar9 < DAT_146874288) && (_Init_thread_header(&DAT_146874288), DAT_146874288 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_146874270,L"You must specify a password.",L"SHiFTMenu",
               L"SignUpErrorPasswordBlankText");
    atexit(FUN_143e5cd70);
    _Init_thread_footer(&DAT_146874288);
  }
  if ((*piVar9 < DAT_1468742a8) && (_Init_thread_header(&DAT_1468742a8), DAT_1468742a8 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_146874290,
               L"The password you have specified is too short. A valid password contains a minimum of 8 characters."
               ,L"SHiFTMenu",L"SignUpErrorPasswordTooShortText");
    atexit(FUN_143e5cf50);
    _Init_thread_footer(&DAT_1468742a8);
  }
  if ((*piVar9 < DAT_1468742c8) && (_Init_thread_header(&DAT_1468742c8), DAT_1468742c8 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_1468742b0,L"The password you have specified is too long.",L"SHiFTMenu",
               L"SignUpErrorPasswordTooLongText");
    atexit(FUN_143e5ceb0);
    _Init_thread_footer(&DAT_1468742c8);
  }
  if ((*piVar9 < DAT_1468742e8) && (_Init_thread_header(&DAT_1468742e8), DAT_1468742e8 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_1468742d0,
               L"The password you have specified contains invalid characters. It must be 8+ characters long, with at least one uppercase character, one lowercase character, and one number or special character."
               ,L"SHiFTMenu",L"SignUpErrorPasswordInvalidText");
    atexit(FUN_143e5ce10);
    _Init_thread_footer(&DAT_1468742e8);
  }
  if ((*piVar9 < DAT_146874308) && (_Init_thread_header(&DAT_146874308), DAT_146874308 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_1468742f0,L"You must specify an e-mail.",L"SHiFTMenu",
               L"SignUpErrorEmailBlankText");
    atexit(FUN_143e5c820);
    _Init_thread_footer(&DAT_146874308);
  }
  if ((*piVar9 < DAT_146874328) && (_Init_thread_header(&DAT_146874328), DAT_146874328 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_146874310,L"The e-mail address you have specified is not valid.",L"SHiFTMenu",
               L"SignUpErrorEmailInvalidText");
    atexit(FUN_143e5c870);
    _Init_thread_footer(&DAT_146874328);
  }
  if ((*piVar9 < DAT_146874348) && (_Init_thread_header(&DAT_146874348), DAT_146874348 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_146874330,&DAT_144677ee0,L"SHiFTMenu",L"SignUpErrorNetworkFailureText");
    atexit(FUN_143e5ccd0);
    _Init_thread_footer(&DAT_146874348);
  }
  if ((*piVar9 < DAT_146874368) && (_Init_thread_header(&DAT_146874368), DAT_146874368 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_146874350,&DAT_144678000,L"SHiFTMenu",L"SignInErrorTimeoutText");
    atexit(FUN_143e5d090);
    _Init_thread_footer(&DAT_146874368);
  }
  if ((*piVar9 < DAT_146874388) && (_Init_thread_header(&DAT_146874388), DAT_146874388 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_146874370,&DAT_144678130,L"SHiFTMenu",L"SignUpSuccessHeaderText");
    atexit(FUN_143e5d870);
    _Init_thread_footer(&DAT_146874388);
  }
  if ((*piVar9 < DAT_1468743a8) && (_Init_thread_header(&DAT_1468743a8), DAT_1468743a8 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_146874390,&DAT_1446781e0,L"SHiFTMenu",L"SignUpSuccessMessageText");
    atexit(FUN_143e5d910);
    _Init_thread_footer(&DAT_1468743a8);
  }
  lVar3 = param_1 + 0x184;
  cVar5 = FWeakObjectPtr::IsValid(lVar3);
  if (cVar5 != '\0') {
    lVar6 = FWeakObjectPtr::Get(lVar3);
    if (*(longlong *)(lVar6 + 0x6e0) != 0) {
      lVar6 = FWeakObjectPtr::Get(lVar3);
      TBaseMulticastDelegate<void>::Remove
                (*(longlong *)(lVar6 + 0x6e0) + 0x120,*(undefined8 *)(param_1 + 0x220));
    }
    lVar6 = FWeakObjectPtr::Get(lVar3);
    if ((*(longlong *)(lVar6 + 0x690) != 0) && (*(longlong *)(lVar6 + 0x690) == param_1)) {
      switch(param_2) {
      case 0:
        lVar6 = FWeakObjectPtr::Get(lVar3);
        *(undefined4 *)(lVar6 + 0x6f4) = 5;
        *(undefined1 *)(lVar6 + 0x688) = 0;
        FUN_141066f40(lVar6);
        bVar11 = *(longlong *)(param_1 + 0x200) == 0;
        if (bVar11) {
          uVar7 = FUN_1404b03b0();
          uVar7 = FText::FText(local_70,uVar7);
        }
        else {
          uVar7 = FUN_142eb8880(*(longlong *)(param_1 + 0x200) + 0x308,local_58);
        }
        FText::FText(local_a0,uVar7);
        if ((bVar11) && (local_68 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_68 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar9 = (int *)((longlong)local_68 + 0xc);
            iVar4 = *piVar9;
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_68 + 8))(local_68,1);
            }
          }
        }
        if ((!bVar11) && (local_50 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_50 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar9 = (int *)((longlong)local_50 + 0xc);
            iVar4 = *piVar9;
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_50 + 8))(local_50,1);
            }
          }
        }
        uVar7 = FTextFormat::FTextFormat(local_30,&DAT_146874390);
        FUN_14101f070(local_b8,uVar7,local_a0);
        uVar7 = FWeakObjectPtr::Get(lVar3);
        FUN_141061c00(uVar7,&DAT_146874370,local_b8);
        if (local_b0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_b0 + 1;
          lVar3 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_b0)(local_b0);
            LOCK();
            piVar9 = (int *)((longlong)local_b0 + 0xc);
            iVar4 = *piVar9;
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_b0 + 8))(local_b0,1);
            }
          }
        }
        if (local_98 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar1 = local_98 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 != 1) {
          return;
        }
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar9 = (int *)((longlong)local_98 + 0xc);
        iVar4 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar4 != 1) {
          return;
        }
        (**(code **)(*local_98 + 8))(local_98,1);
        return;
      case 1:
        uVar7 = FWeakObjectPtr::Get(lVar3);
        puVar10 = &DAT_146874210;
        break;
      case 2:
        uVar7 = FWeakObjectPtr::Get(lVar3);
        puVar10 = &DAT_146874230;
        break;
      default:
        uVar7 = FWeakObjectPtr::Get(lVar3);
        puVar10 = &DAT_146874250;
        break;
      case 4:
        uVar7 = FWeakObjectPtr::Get(lVar3);
        puVar10 = &DAT_146874270;
        break;
      case 5:
        uVar7 = FWeakObjectPtr::Get(lVar3);
        puVar10 = &DAT_146874290;
        break;
      case 6:
        uVar7 = FWeakObjectPtr::Get(lVar3);
        puVar10 = &DAT_1468742b0;
        break;
      case 7:
        uVar7 = FWeakObjectPtr::Get(lVar3);
        puVar10 = &DAT_1468742d0;
        break;
      case 8:
        uVar7 = FWeakObjectPtr::Get(lVar3);
        puVar10 = &DAT_1468742f0;
        break;
      case 9:
        uVar7 = FWeakObjectPtr::Get(lVar3);
        puVar10 = &DAT_146874310;
        break;
      case 10:
        uVar7 = FWeakObjectPtr::Get(lVar3);
        puVar10 = &DAT_146874330;
        break;
      case 0xb:
        uVar7 = FWeakObjectPtr::Get(lVar3);
        puVar10 = &DAT_146874350;
      }
      FUN_141061c00(uVar7,&DAT_1468741d0,puVar10);
    }
  }
  return;
}



// FUNCTION 141042020 FUN_141042020 body=409 status=ok
// SIG undefined FUN_141042020(void)

void FUN_141042020(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined1 local_28 [32];
  
  if (((*(char *)(param_1 + 0x210) == '\x01') && (iVar4 = *(int *)(param_1 + 0x1d8), iVar4 != 0)) &&
     (fVar7 = *(float *)(param_2 + 4),
     *(float *)(param_1 + 0x1cc) <= ABS(fVar7) && ABS(fVar7) != *(float *)(param_1 + 0x1cc))) {
    lVar5 = *(longlong *)(param_2 + 8);
    bVar1 = false;
    if (lVar5 == DAT_146873bc8) {
      fVar6 = *(float *)(param_1 + 0x200);
      *(float *)(param_1 + 0x200) = fVar7;
      lVar5 = *(longlong *)(param_2 + 8);
      bVar1 = 1e-08 < ABS(fVar6 - fVar7);
    }
    if (lVar5 == DAT_146873bd0) {
      fVar7 = *(float *)(param_2 + 4);
      fVar6 = *(float *)(param_1 + 0x204);
      *(float *)(param_1 + 0x204) = fVar7;
      bVar1 = 1e-08 < ABS(fVar6 - fVar7);
    }
    if (bVar1) {
      fVar7 = *(float *)(param_1 + 0x200);
      fVar6 = _guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 0x204) / fVar7);
      if (-1e-08 <= fVar7) {
        fVar7 = 0.0;
      }
      else {
        fVar7 = 180.0;
      }
      fVar7 = (90.0 - fVar6 * 57.295776) + fVar7;
      iVar4 = iVar4 + -1;
      *(float *)(param_1 + 0x208) = fVar7;
      fVar7 = (fVar7 - *(float *)(param_1 + 0x20c) * 0.5) / *(float *)(param_1 + 0x20c);
      iVar2 = -((int)ROUND(-0.5 - (fVar7 + fVar7)) >> 1);
      if (iVar2 < 0) {
        iVar4 = 0;
      }
      else if (iVar2 < iVar4) {
        iVar4 = iVar2;
      }
      uVar3 = TScriptInterface<IBlendableInterface>::
              TScriptInterface<IBlendableInterface><UMaterialInterface>
                        (local_28,*(undefined8 *)
                                   (*(longlong *)(param_1 + 0x1d0) + (longlong)iVar4 * 8));
      FUN_142ed36d0(param_1 + -0x4d8,uVar3,0);
    }
  }
  FOutputDevice::CanBeUsedOnAnyThread(param_1,param_2);
  return;
}



// FUNCTION 1410421c0 FUN_1410421c0 body=79 status=ok
// SIG undefined FUN_1410421c0(void)

undefined8 FUN_1410421c0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    cVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x170) + 0x28))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  uVar2 = FOutputDevice::CanBeUsedOnAnyThread(param_1,param_2);
  return uVar2;
}



// FUNCTION 141042210 FUN_141042210 body=125 status=ok
// SIG undefined FUN_141042210(void)

undefined1 FUN_141042210(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (((*(longlong *)(param_2 + 8) == DAT_146873be0) && (*(longlong *)(param_1 + 0x330) != 0)) &&
     (cVar1 = FUN_142f0b080(), cVar1 != '\0')) {
    FUN_1410813d0(param_1 + -0x4d8,param_2 + 8,*(undefined4 *)(param_2 + 4));
    return 1;
  }
  cVar1 = FUN_1410885f0(param_1,param_2);
  if (cVar1 != '\0') {
    return 1;
  }
  return 0;
}



// FUNCTION 141042290 FUN_141042290 body=195 status=ok
// SIG undefined FUN_141042290(void)

void FUN_141042290(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x6b4);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x6c0);
    lVar3 = (longlong)*(int *)(param_1 + 0x6c8) * 0x40 + lVar2;
    for (lVar7 = lVar2; lVar7 != lVar3; lVar7 = lVar7 + 0x40) {
      if (param_2 == *(longlong *)(lVar7 + 0x18)) {
        if (lVar7 != lVar3) {
          uVar8 = lVar7 - lVar2 >> 6;
          goto LAB_1410422ec;
        }
        break;
      }
    }
    uVar8 = 0xffffffff;
  }
LAB_1410422ec:
  if (*(char *)(param_1 + 0x6b0) != '\a') {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x6c8);
  iVar4 = 0;
  uVar6 = 0;
  if (0 < iVar1) {
    do {
      if (iVar1 < 1) {
        iVar5 = 0;
      }
      else {
        iVar5 = (iVar4 + 1) % iVar1;
      }
      if ((*(int *)(param_1 + 0x6b4) == iVar4) && ((int)uVar8 == iVar5)) {
        uVar6 = 1;
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  FUN_141062820(param_1,uVar6,CONCAT71((int7)(uVar8 >> 8),1));
  return;
}



// FUNCTION 141042360 FUN_141042360 body=127 status=ok
// SIG undefined FUN_141042360(void)

void FUN_141042360(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = FUN_141398ca0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(char *)(param_2 + 0x414) != '\0')) {
      cVar2 = *(char *)(param_1 + 0xc09);
      if (cVar2 == '\0') {
        cVar2 = *(char *)(param_1 + 0xc08);
      }
      if (cVar2 == '\x02') {
        FUN_141065c60(param_1,1);
      }
    }
  }
  return;
}



// FUNCTION 1410423e0 FUN_1410423e0 body=1233 status=ok
// SIG undefined FUN_1410423e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410423e0(longlong param_1,longlong param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  void *pvVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  void *pvVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  undefined4 uVar15;
  undefined1 auStack_148 [32];
  longlong **local_128;
  void *local_118;
  void *local_110;
  undefined8 local_108;
  longlong *local_100;
  undefined8 local_f8;
  longlong local_f0;
  longlong local_e8;
  code *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  lVar5 = FUN_141037590();
  pvVar11 = (void *)0x0;
  local_118 = pvVar11;
  pvVar1 = pvVar11;
  if (lVar5 != 0) {
    local_118 = *(void **)(lVar5 + 0x3b0);
    pvVar1 = *(void **)(lVar5 + 0x398);
  }
  pvVar6 = pvVar11;
  if (pvVar1 != (void *)0x0) {
    pvVar6 = *(void **)((longlong)pvVar1 + 0x30);
  }
  if (((param_2 != 0) && (local_118 != (void *)0x0)) && (pvVar6 != (void *)0x0)) {
    puVar7 = (undefined8 *)FUN_141038380(param_1);
    local_110 = (void *)0x0;
    iVar14 = *(int *)(puVar7 + 1);
    pvVar1 = (void *)*puVar7;
    local_108 = CONCAT44(local_108._4_4_,iVar14);
    iVar12 = 0;
    if (iVar14 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_110,iVar14,0);
      pvVar11 = local_110;
      _guard_xfg_dispatch_icall_nop(local_110,pvVar1,(longlong)iVar14 << 3);
      iVar12 = (int)local_108;
    }
    lVar5 = *(longlong *)(param_1 + 0x6c0);
    lVar10 = (longlong)*(int *)(param_1 + 0x6c8) * 0x40 + lVar5;
    for (lVar8 = lVar5; lVar8 != lVar10; lVar8 = lVar8 + 0x40) {
      if (lVar8 == param_2) {
        if (((lVar8 != lVar10) && (iVar14 = (int)(lVar8 - lVar5 >> 6), -1 < iVar14)) &&
           (iVar14 < iVar12)) {
          local_e8 = *(longlong *)((longlong)pvVar11 + (longlong)iVar14 * 8);
          lVar5 = (longlong)iVar14 * 0x40;
          lVar8 = *(longlong *)(param_1 + 0x6c0) + lVar5;
          *(undefined1 *)(lVar8 + 0x28) = 1;
          if ((*(longlong **)(lVar8 + 8) != (longlong *)0x0) && (local_e8 != 0)) {
            local_f0 = local_e8 + 0x48;
            (**(code **)(**(longlong **)(lVar8 + 8) + 0x280))();
            local_110 = (void *)0x0;
            local_108 = 0xe;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_110,0);
            FGenericPlatformString::Memcpy(local_110,L"branchLayouts",0x1c);
            local_128 = &local_100;
            local_100 = (longlong *)0x0;
            local_f8 = 0;
            uVar9 = FUN_141021010(*(undefined8 *)(lVar8 + 8),&local_110,0,6);
            *(undefined8 *)(lVar8 + 0x18) = uVar9;
            *(undefined8 *)(lVar8 + 0x10) = uVar9;
            plVar13 = local_100;
            for (iVar14 = (int)local_f8; iVar14 != 0; iVar14 = iVar14 + -1) {
              if (*plVar13 != 0) {
                FMemory::Free();
              }
              plVar13 = plVar13 + 2;
            }
            if (local_100 != (longlong *)0x0) {
              FMemory::Free(local_100);
            }
            if (local_110 != (void *)0x0) {
              FMemory::Free();
            }
            if (*(longlong *)(lVar8 + 0x10) != 0) {
              FUN_14105d0c0(*(longlong *)(lVar8 + 0x10),*(undefined1 *)(lVar8 + 0x29));
              lVar4 = local_f0;
              lVar10 = *(longlong *)(lVar8 + 0x10);
              FString::operator=(lVar10 + 0x3d8,local_f0);
              uVar9 = *(undefined8 *)(lVar4 + 0x18);
              *(undefined8 *)(lVar10 + 1000) = *(undefined8 *)(lVar4 + 0x10);
              *(undefined8 *)(lVar10 + 0x3f0) = uVar9;
              uVar15 = *(undefined4 *)(lVar4 + 0x24);
              uVar2 = *(undefined4 *)(lVar4 + 0x28);
              uVar3 = *(undefined4 *)(lVar4 + 0x2c);
              *(undefined4 *)(lVar10 + 0x3f8) = *(undefined4 *)(lVar4 + 0x20);
              *(undefined4 *)(lVar10 + 0x3fc) = uVar15;
              *(undefined4 *)(lVar10 + 0x400) = uVar2;
              *(undefined4 *)(lVar10 + 0x404) = uVar3;
              FUN_14105f160(*(undefined8 *)(lVar8 + 0x10),local_118,local_e8);
            }
          }
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x6c0) + 0x10 + lVar5);
          if (lVar5 != 0) {
            local_118._0_4_ = 0xffffffff;
            FUN_14170c210(&local_118,lVar5);
            uVar15 = local_118._0_4_;
            local_118 = (void *)CONCAT44(local_118._4_4_,0xffffffff);
            local_a8 = (longlong *)0x0;
            local_98 = 0;
            puVar7 = (undefined8 *)FUN_140438ef0(0x18,local_c8);
            if (puVar7 != (undefined8 *)0x0) {
              *puVar7 = &PTR_FUN_144266c70;
              puVar7[1] = param_1;
              *(undefined4 *)(puVar7 + 2) = uVar15;
              uVar15 = 0xffffffff;
            }
            local_d8[0] = FUN_141031ee0;
            uVar9 = FUN_1420849a0(param_1,local_88,local_d8);
            FUN_14208c4f0(param_1,uVar9);
            if (local_98 != 0) {
              plVar13 = local_c8;
              if (local_a8 != (longlong *)0x0) {
                plVar13 = local_a8;
              }
              if (plVar13 != (longlong *)0x0) {
                (**(code **)(*plVar13 + 0x10))(plVar13,0);
              }
            }
            if (local_a8 != (longlong *)0x0) {
              FMemory::Free();
            }
            FUN_1416f8340(uVar15);
            FUN_1416f8340((ulonglong)local_118 & 0xffffffff);
            local_118._0_4_ = 0xffffffff;
            FUN_14170c210(&local_118,lVar5);
            uVar15 = local_118._0_4_;
            local_118 = (void *)CONCAT44(local_118._4_4_,0xffffffff);
            local_a8 = (longlong *)0x0;
            local_98 = 0;
            puVar7 = (undefined8 *)FUN_140438ef0(0x18,local_c8);
            if (puVar7 != (undefined8 *)0x0) {
              *puVar7 = &PTR_FUN_144266c70;
              puVar7[1] = param_1;
              *(undefined4 *)(puVar7 + 2) = uVar15;
              uVar15 = 0xffffffff;
            }
            local_d8[0] = (code *)&LAB_141032350;
            uVar9 = FUN_1420849a0(param_1,local_88,local_d8);
            FUN_14208c940(param_1,uVar9);
            if (local_48 != 0) {
              plVar13 = local_78;
              if (local_58 != (longlong *)0x0) {
                plVar13 = local_58;
              }
              if (plVar13 != (longlong *)0x0) {
                (**(code **)(*plVar13 + 0x10))(plVar13,0);
              }
            }
            if (local_58 != (longlong *)0x0) {
              FMemory::Free();
            }
            if (local_98 != 0) {
              plVar13 = local_c8;
              if (local_a8 != (longlong *)0x0) {
                plVar13 = local_a8;
              }
              if (plVar13 != (longlong *)0x0) {
                (**(code **)(*plVar13 + 0x10))(plVar13,0);
              }
            }
            if (local_a8 != (longlong *)0x0) {
              FMemory::Free();
            }
            FUN_1416f8340(uVar15);
            FUN_1416f8340((ulonglong)local_118 & 0xffffffff);
          }
        }
        break;
      }
    }
    if (pvVar11 != (void *)0x0) {
      FMemory::Free(pvVar11);
    }
  }
  lVar5 = 0xf04;
  if (*(char *)(param_1 + 0xf08) == '\0') {
    lVar5 = 0xf00;
  }
  if (*(int *)(lVar5 + param_1) < *(int *)(param_1 + 0x6c8)) {
    if (&local_118 != (void **)(param_1 + 0xf04)) {
      *(int *)(param_1 + 0xf04) = *(int *)(lVar5 + param_1) + 1;
      *(undefined1 *)(param_1 + 0xf08) = 1;
    }
  }
  return;
}



// FUNCTION 1410428d0 FUN_1410428d0 body=163 status=ok
// SIG undefined FUN_1410428d0(void)

void FUN_1410428d0(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar4 = FUN_141398ff0();
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
      iVar1 = *(int *)(param_2 + 0x428);
      if (iVar1 == 1) {
        cVar3 = FUN_14103f670(*(undefined8 *)(param_1 + 0x200));
      }
      else if (iVar1 == 2) {
        cVar3 = FUN_14103ec10(param_1);
      }
      else {
        if (iVar1 != 3) {
          return;
        }
        cVar3 = FUN_14103f8b0(*(undefined8 *)(param_1 + 0x208));
      }
      FUN_142ed2820(param_2,cVar3 != '\0',1);
    }
  }
  return;
}



// FUNCTION 141042980 FUN_141042980 body=445 status=ok
// SIG undefined FUN_141042980(void)

void FUN_141042980(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  
  param_1 = param_1 + 0x184;
  lVar9 = 0;
  cVar8 = FWeakObjectPtr::IsValid(param_1);
  if (cVar8 == '\0') {
    plVar10 = &local_28;
    local_28 = 0;
    plStack_20 = (longlong *)0x0;
    bVar6 = false;
    bVar5 = true;
  }
  else {
    lVar9 = FWeakObjectPtr::Get(param_1);
    local_30 = *(longlong **)(lVar9 + 0x6e8);
    lVar9 = *(longlong *)(lVar9 + 0x6e0);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    plVar10 = &local_38;
    bVar6 = true;
    bVar5 = false;
    local_38 = lVar9;
  }
  plVar4 = (longlong *)plVar10[1];
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10 = plStack_20;
  if (bVar5) {
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_20 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  plVar10 = local_30;
  if ((bVar6) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (lVar9 == 0) {
LAB_141042ac9:
    cVar8 = FWeakObjectPtr::IsValid(param_1);
    if (cVar8 == '\0') goto LAB_141042af6;
    lVar9 = FWeakObjectPtr::Get(param_1);
    *(undefined4 *)(lVar9 + 0x6f4) = 1;
  }
  else {
    lVar9 = FWeakObjectPtr::Get(param_1);
    cVar8 = (**(code **)(**(longlong **)(lVar9 + 0x6e0) + 0x10))();
    if (cVar8 == '\0') goto LAB_141042ac9;
    lVar9 = FWeakObjectPtr::Get(param_1);
    *(undefined4 *)(lVar9 + 0x6f4) = 5;
  }
  *(undefined1 *)(lVar9 + 0x688) = 0;
  FUN_141066f40(lVar9);
LAB_141042af6:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar4 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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



// FUNCTION 141042b40 FUN_141042b40 body=69 status=ok
// SIG undefined FUN_141042b40(void)

void FUN_141042b40(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x184);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x184);
    *(undefined4 *)(lVar2 + 0x6f4) = 5;
    *(undefined1 *)(lVar2 + 0x688) = 0;
    FUN_141066f40(lVar2);
    return;
  }
  return;
}



// FUNCTION 141042b90 FUN_141042b90 body=69 status=ok
// SIG undefined FUN_141042b90(void)

void FUN_141042b90(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x184);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x184);
    *(undefined4 *)(lVar2 + 0x6f4) = 3;
    *(undefined1 *)(lVar2 + 0x688) = 0;
    FUN_141066f40(lVar2);
    return;
  }
  return;
}



// FUNCTION 141042be0 FUN_141042be0 body=329 status=ok
// SIG undefined FUN_141042be0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141042be0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_74;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FWeakObjectPtr::operator=(&local_78,param_1);
  uVar2 = local_74;
  uVar1 = local_78;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_58);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1444f8920;
    puVar3[1] = param_1;
    *(undefined4 *)(puVar3 + 2) = uVar1;
    *(undefined4 *)((longlong)puVar3 + 0x14) = uVar2;
  }
  local_68[0] = &LAB_141032530;
  FUN_14208c5d0(param_1,local_68);
  FWeakObjectPtr::operator=(&local_78,param_1);
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_58);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1444f8920;
    puVar3[1] = param_1;
    *(undefined4 *)(puVar3 + 2) = local_78;
    *(undefined4 *)((longlong)puVar3 + 0x14) = local_74;
  }
  local_68[0] = &LAB_141032510;
  FUN_14208c300(param_1,local_68);
  if (local_28 != 0) {
    plVar4 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar4 = local_38;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141042d30 FUN_141042d30 body=69 status=ok
// SIG undefined FUN_141042d30(void)

void FUN_141042d30(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x184);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x184);
    *(undefined4 *)(lVar2 + 0x6f4) = 6;
    *(undefined1 *)(lVar2 + 0x688) = 0;
    FUN_141066f40(lVar2);
    return;
  }
  return;
}



// FUNCTION 141042d80 FUN_141042d80 body=69 status=ok
// SIG undefined FUN_141042d80(void)

void FUN_141042d80(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x184);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x184);
    *(undefined4 *)(lVar2 + 0x6f4) = 2;
    *(undefined1 *)(lVar2 + 0x688) = 0;
    FUN_141066f40(lVar2);
    return;
  }
  return;
}



// FUNCTION 141042dd0 thunk_FUN_141030820 body=5 status=ok
// SIG undefined thunk_FUN_141030820(void)

void thunk_FUN_141030820(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined *puVar11;
  undefined1 auStackX_8 [8];
  longlong alStack_58 [2];
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong *plStack_38;
  
  piVar10 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar10 < DAT_146873f38) && (_Init_thread_header(&DAT_146873f38), DAT_146873f38 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_146873f20,L"Code Redemption Failed",L"SHiFTMenu",L"CodeRedeemErrorHeader");
    atexit(FUN_143e5ca50);
    _Init_thread_footer(&DAT_146873f38);
  }
  puVar11 = &DAT_146873f40;
  if ((*piVar10 < DAT_146873f58) && (_Init_thread_header(&DAT_146873f58), DAT_146873f58 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_146873f40,&DAT_1446673b0,L"SHiFTMenu",L"CodeRedeemErrorNetworkFailure");
    atexit(FUN_143e5cc30);
    _Init_thread_footer(&DAT_146873f58);
  }
  if ((*piVar10 < DAT_146873f78) && (_Init_thread_header(&DAT_146873f78), DAT_146873f78 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_146873f60,
               L"Sorry, but the code you have entered is not valid. Please ensure all 25 characters of the code are entered correctly."
               ,L"SHiFTMenu",L"CodeRedeemErrorInvalid");
    atexit(FUN_143e5cb90);
    _Init_thread_footer(&DAT_146873f78);
  }
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x184);
  if (cVar4 == '\0') {
    return;
  }
  FUN_1410391f0(param_1,alStack_58);
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x184);
  plVar3 = *(longlong **)(lVar5 + 0x6e8);
  lVar5 = *(longlong *)(lVar5 + 0x6e0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (lVar5 != 0) {
    cVar4 = FUN_14103f310(param_1,alStack_58);
    if (cVar4 != '\0') {
      TBaseMulticastDelegate<void>::Remove(lVar5 + 0x1b0,*(undefined8 *)(param_1 + 0x1f8));
      uVar6 = 0;
      uStack_48 = FUN_141040c40;
      uStack_40 = 0;
      plVar1 = (longlong *)(lVar5 + 0x1b0);
      plVar7 = (longlong *)FMemory::Realloc(0,0x30,0);
      plStack_38 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_FUN_1442cc120;
        FWeakObjectPtr::operator=(plVar7 + 1,param_1);
        *(undefined4 *)(plVar7 + 2) = (undefined4)uStack_48;
        *(undefined4 *)((longlong)plVar7 + 0x14) = uStack_48._4_4_;
        *(undefined4 *)(plVar7 + 3) = uStack_40;
        *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_3c;
        lVar8 = FDelegateHandle::GenerateNewID();
        plVar7[5] = lVar8;
        *plVar7 = (longlong)&PTR_FUN_1442cc168;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,auStackX_8);
        iVar2 = *(int *)(lVar5 + 0x1b8);
        uVar6 = *puVar9;
        *(int *)(lVar5 + 0x1b8) = iVar2 + 1;
        if (*(int *)(lVar5 + 0x1bc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
        }
        puVar9 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
        *puVar9 = plVar7;
        *(undefined4 *)(puVar9 + 1) = 3;
      }
      *(undefined8 *)(param_1 + 0x1f8) = uVar6;
      FUN_142b64c90(lVar5,alStack_58);
      goto LAB_141030a02;
    }
    puVar11 = &DAT_146873f60;
  }
  uVar6 = FWeakObjectPtr::Get(param_1 + 0x184);
  FUN_141061c00(uVar6,&DAT_146873f20,puVar11);
LAB_141030a02:
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar10 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if (alStack_58[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141042de0 FUN_141042de0 body=37 status=ok
// SIG undefined FUN_141042de0(void)

void FUN_141042de0(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_141032650();
  if (cVar1 != '\0') {
    FUN_141030b60(param_1);
    return;
  }
  return;
}



// FUNCTION 141042e10 thunk_FUN_141062c40 body=5 status=ok
// SIG undefined thunk_FUN_141062c40(void)

void thunk_FUN_141062c40(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  void *_Src;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  void *pvStack_58;
  int iStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [8];
  longlong *plStack_40;
  undefined1 auStack_30 [8];
  longlong *plStack_28;
  
  lVar3 = param_1 + 0x184;
  cVar6 = FWeakObjectPtr::IsValid(lVar3);
  if (cVar6 != '\0') {
    lVar7 = FWeakObjectPtr::Get(lVar3);
    plVar5 = *(longlong **)(lVar7 + 0x6e8);
    lVar7 = *(longlong *)(lVar7 + 0x6e0);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    if ((lVar7 != 0) && (*(longlong *)(param_1 + 0x1f8) != 0)) {
      FUN_142eb8880(*(longlong *)(param_1 + 0x1f8) + 0x308,auStack_48);
      puVar8 = (undefined8 *)FText::ToString();
      pvStack_58 = (void *)0x0;
      iStack_50 = *(int *)(puVar8 + 1);
      lVar11 = (longlong)iStack_50;
      _Src = (void *)*puVar8;
      if (iStack_50 == 0) {
        uStack_4c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&pvStack_58,iStack_50,0);
        _guard_xfg_dispatch_icall_nop(pvStack_58,_Src,lVar11 * 2);
      }
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_40 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plStack_40)(plStack_40);
          LOCK();
          piVar2 = (int *)((longlong)plStack_40 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_40 + 8))(plStack_40,1);
          }
        }
      }
      FUN_142b68e00(lVar7,&pvStack_58);
      lVar7 = FWeakObjectPtr::Get(lVar3);
      uVar9 = FWeakObjectPtr::Get(lVar3);
      uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (auStack_30,L"Reset Password",L"SHiFTMenu",L"ResetPasswordText");
      FUN_141061c00(uVar9,uVar10,lVar7 + 0x7e8);
      if (plStack_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_28 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plStack_28)(plStack_28);
          LOCK();
          piVar2 = (int *)((longlong)plStack_28 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_28 + 8))(plStack_28,1);
          }
        }
      }
      if (pvStack_58 != (void *)0x0) {
        FMemory::Free();
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 141042e20 FUN_141042e20 body=480 status=ok
// SIG undefined FUN_141042e20(void)

void FUN_141042e20(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  
  lVar8 = 0;
  cVar7 = FWeakObjectPtr::IsValid(param_1 + 0x184);
  if (cVar7 == '\0') {
    plVar9 = &local_38;
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    bVar6 = false;
    bVar5 = true;
  }
  else {
    lVar8 = FWeakObjectPtr::Get(param_1 + 0x184);
    local_40 = *(longlong **)(lVar8 + 0x6e8);
    lVar8 = *(longlong *)(lVar8 + 0x6e0);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    plVar9 = &local_48;
    bVar6 = true;
    bVar5 = false;
    local_48 = lVar8;
  }
  plVar4 = (longlong *)plVar9[1];
  plVar9[1] = 0;
  *plVar9 = 0;
  plVar9 = plStack_30;
  if (bVar5) {
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_30 + 8))(plStack_30,1);
        }
      }
    }
  }
  plVar9 = local_40;
  if ((bVar6) && (local_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (lVar8 != 0) {
    lVar10 = FWeakObjectPtr::Get(param_1 + 0x184);
    cVar7 = (**(code **)(**(longlong **)(lVar10 + 0x6e0) + 0x10))();
    if (cVar7 != '\0') {
      cVar7 = FUN_142b54800(lVar8);
      if (cVar7 == '\0') {
        lVar8 = FWeakObjectPtr::Get(param_1 + 0x184);
        *(undefined4 *)(lVar8 + 0x6f4) = 5;
        *(undefined1 *)(lVar8 + 0x688) = 0;
        FUN_141066f40(lVar8);
        goto LAB_141042fb8;
      }
    }
  }
  cVar7 = FWeakObjectPtr::IsValid(param_1 + 0x184);
  if (cVar7 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x210) + 0x278))(*(longlong **)(param_1 + 0x210),0);
    FUN_141031480(param_1);
  }
LAB_141042fb8:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar4 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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



// FUNCTION 141043000 FUN_141043000 body=52 status=ok
// SIG undefined FUN_141043000(void)

undefined4 FUN_141043000(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  
  if ((param_2 != 0) && (*(char *)(param_3 + 1) != '\0')) {
    *(undefined1 *)(param_1 + 0x671) = 1;
    LOCK();
    uVar1 = *(undefined4 *)(param_1 + 0x678);
    *(undefined4 *)(param_1 + 0x678) = 1;
    UNLOCK();
    return uVar1;
  }
  *(undefined1 *)(param_1 + 0x671) = 0;
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x678);
  *(undefined4 *)(param_1 + 0x678) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 141043040 FUN_141043040 body=1425 status=ok
// SIG undefined FUN_141043040(void)

void FUN_141043040(longlong *param_1,ulonglong param_2,char param_3,char param_4)

{
  int *piVar1;
  bool bVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined4 uVar15;
  undefined1 local_res8 [8];
  longlong local_a8 [4];
  undefined1 local_88 [16];
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [40];
  
  *(undefined8 *)((longlong)param_1 + 0xbec) = 0xffffffffffffffff;
  if (param_2 != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146873ed8) &&
       (_Init_thread_header(&DAT_146873ed8), DAT_146873ed8 == -1)) {
      FName::FName(&DAT_146873ed0,&DAT_1446692c8,1);
      _Init_thread_footer(&DAT_146873ed8);
    }
    uVar13 = 0;
    local_a8[2] = 0;
    local_a8[3] = 0;
    (**(code **)(*param_1 + 0x4e8))(param_1,DAT_146873ed0,local_a8 + 2);
    if (param_1[0x191] != 0) {
      lVar6 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      uVar12 = param_2;
      if (!bVar2) {
        uVar12 = uVar13;
      }
      FUN_1414b1ff0(param_1[0x191],uVar12);
    }
    lVar6 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
    if (lVar6 != 0) {
      lVar7 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        if (param_1[399] != 0) {
          if (*(longlong *)(param_2 + 0xf0) != 0) {
            lVar7 = FText::FText(local_60,*(longlong *)(param_2 + 0xf0) + 0x30);
            lVar6 = param_1[399];
            plVar9 = *(longlong **)(lVar6 + 0x170);
            if ((plVar9 != (longlong *)0x0) && (*(longlong *)(lVar6 + 0x178) != 0)) {
              (**(code **)(*plVar9 + 0x2b0))(plVar9,lVar7,1,0);
              (**(code **)(**(longlong **)(lVar6 + 0x178) + 0x2b0))
                        (*(longlong **)(lVar6 + 0x178),lVar7,1,0);
            }
            if (*(longlong *)(lVar6 + 0x180) != 0) {
              FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_78,L"Unlocked!",L"GFxQuickChangeMenuStore",L"UnlockedSubtitle");
              (**(code **)(**(longlong **)(lVar6 + 0x180) + 0x2b0))
                        (*(longlong **)(lVar6 + 0x180),local_78,1,0);
              if (local_70 != (longlong *)0x0) {
                LOCK();
                plVar9 = local_70 + 1;
                lVar3 = *plVar9;
                *(int *)plVar9 = (int)*plVar9 + -1;
                UNLOCK();
                if ((int)lVar3 == 1) {
                  (**(code **)*local_70)(local_70);
                  LOCK();
                  piVar1 = (int *)((longlong)local_70 + 0xc);
                  iVar5 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar5 == 1) {
                    (**(code **)(*local_70 + 8))(local_70,1);
                  }
                }
              }
            }
            local_a8[0] = 0;
            local_a8[1] = 5;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
            FGenericPlatformString::Memcpy(local_a8[0],L"play",10);
            FUN_142088910(lVar6,local_a8);
            if (local_a8[0] != 0) {
              FMemory::Free();
            }
            *(undefined1 *)(lVar6 + 0x188) = 1;
            plVar9 = *(longlong **)(lVar7 + 8);
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              plVar14 = plVar9 + 1;
              lVar6 = *plVar14;
              *(int *)plVar14 = (int)*plVar14 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*plVar9)(plVar9);
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
          }
        }
        lVar6 = param_1[0xd9];
        if (param_4 == (char)lVar6) {
          uVar15 = 0;
          uVar12 = uVar13;
          if (param_1[0xde] != 0) {
            uVar15 = FUN_142eedeb0(param_1[0xde] + 0x2b8);
            uVar4 = FUN_142eb7a00(param_1[0xde]);
            uVar12 = (ulonglong)uVar4;
            iVar5 = FUN_142eb7440(param_1[0xde]);
            if (uVar4 == iVar5 - 1U) {
              uVar12 = (ulonglong)(uVar4 - 1);
            }
          }
          FUN_140ff9b60(param_1,(char)param_1[0xd9]);
          *(undefined1 *)(param_1 + 0x183) = 1;
          if (param_1[0xde] != 0) {
            uVar8 = TScriptInterface<IBlendableInterface>::
                    TScriptInterface<IBlendableInterface><UMaterialInterface>(local_88);
            FUN_142ed36d0(param_1,uVar8,0);
            (**(code **)(*(longlong *)param_1[0xde] + 0x2f8))((longlong *)param_1[0xde],uVar15,0);
            (**(code **)(*(longlong *)param_1[0xde] + 0x2b8))((longlong *)param_1[0xde],uVar12,0,0);
          }
        }
        if (param_3 != '\0') {
          if (param_4 == '\x05') {
            if ((char)lVar6 == '\x05') {
              plVar9 = (longlong *)param_1[0xdc];
              if (plVar9 != (longlong *)0x0) {
                (**(code **)(*plVar9 + 0x278))(plVar9,1);
              }
              lVar6 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (!bVar2) {
                param_2 = uVar13;
              }
              FUN_140ff40b0(param_1,param_2);
            }
          }
          else if (2 < (byte)(param_4 - 8U)) {
            lVar6 = FUN_140f578e0(param_1);
            uVar12 = uVar13;
            if (lVar6 != 0) {
              uVar12 = *(ulonglong *)(lVar6 + 0x2a60);
            }
            if (uVar12 != 0) {
              FUN_142e438a0(uVar12,param_2,0);
            }
          }
        }
        if ((param_1[0xde] != 0) && (iVar5 = FUN_142eb7440(), iVar5 == 0)) {
          FUN_1411f7810(param_1 + 0xf4,0);
          lVar6 = param_1[399];
          if ((lVar6 == 0) || (*(char *)(lVar6 + 0x188) == '\0')) {
            (**(code **)(*param_1 + 0x588))(param_1,0);
          }
          else {
            plVar14 = (longlong *)(lVar6 + 400);
            plVar9 = (longlong *)FMemory::Realloc(0,0x20);
            if (plVar9 != (longlong *)0x0) {
              plVar9[1] = (longlong)param_1;
              *plVar9 = (longlong)&PTR_GetPoolName_14467a340;
              lVar7 = FDelegateHandle::GenerateNewID();
              plVar9[3] = lVar7;
              *plVar9 = (longlong)&PTR_GetPoolName_14467a388;
              FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar14,1);
              puVar10 = (ulonglong *)(**(code **)(*plVar9 + 0x20))(plVar9,local_res8);
              iVar5 = *(int *)(lVar6 + 0x198);
              uVar13 = *puVar10;
              *(int *)(lVar6 + 0x198) = iVar5 + 1;
              if (*(int *)(lVar6 + 0x19c) < iVar5 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar5);
              }
              puVar11 = (undefined8 *)((longlong)iVar5 * 0x10 + *plVar14);
              *puVar11 = plVar9;
              *(undefined4 *)(puVar11 + 1) = 2;
            }
            param_1[0x198] = uVar13;
          }
        }
      }
    }
  }
  FUN_141064c80(param_1,0);
  return;
}



// FUNCTION 1410435e0 FUN_1410435e0 body=279 status=ok
// SIG undefined FUN_1410435e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410435e0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_141031f80;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_142ebfbd0(param_1);
  return;
}



// FUNCTION 141043700 FUN_141043700 body=54 status=ok
// SIG undefined FUN_141043700(void)

void FUN_141043700(longlong *param_1)

{
  FUN_142ebfbd0();
  (**(code **)(*param_1 + 0x580))(param_1,1);
  *(undefined4 *)((longlong)param_1 + 0x63c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x634) = 0;
  return;
}



// FUNCTION 141043740 FUN_141043740 body=296 status=ok
// SIG undefined FUN_141043740(void)

void FUN_141043740(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  thunk_FUN_14208af70();
  plVar1 = *(longlong **)(param_1 + 0x170);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x170) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x178) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x180) = 0;
  return;
}



// FUNCTION 141043870 FUN_141043870 body=407 status=ok
// SIG undefined FUN_141043870(void)

void FUN_141043870(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  undefined8 local_res8;
  
  lVar5 = (**(code **)(*param_1 + 0x148))();
  if (lVar5 != 0) {
    uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar5 = UWorld::GetGameState<APVPGameState>(uVar6);
    if (lVar5 != 0) {
      FUN_1407665e0(lVar5 + 0xb90,param_1);
    }
  }
  lVar5 = FWeakObjectPtr::Get(param_1 + 0xbb);
  if (lVar5 != 0) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (*(int *)(lVar5 + 0xae0) != 0)) &&
       (plVar1 = *(longlong **)(lVar5 + 0xad8), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x28))(plVar1,0);
      if (*(longlong *)(lVar5 + 0xad8) != 0) {
        uVar6 = FMemory::Realloc(*(longlong *)(lVar5 + 0xad8),0,0);
        *(undefined8 *)(lVar5 + 0xad8) = uVar6;
      }
      *(undefined4 *)(lVar5 + 0xae0) = 0;
    }
  }
  lVar5 = FWeakObjectPtr::Get(param_1 + 0xb9);
  if (lVar5 != 0) {
    lVar7 = FUN_14142a560();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pwVar8 = _guard_xfg_dispatch_icall_nop
                         (L"&UGFxRaidSpectatorWidget::OnInputDeviceChanged",L"::");
      pwVar4 = (wchar_t *)0x0;
      while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar4 = pwVar3;
      }
      FName::FName(&local_res8,pwVar4 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar5 + 0x5f8,param_1,local_res8);
    }
  }
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 141043a10 FUN_141043a10 body=33 status=ok
// SIG undefined FUN_141043a10(void)

void FUN_141043a10(longlong *param_1)

{
  (**(code **)(*param_1 + 0x580))(param_1,1);
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 141043a40 FUN_141043a40 body=1926 status=ok
// SIG undefined FUN_141043a40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141043a40(longlong param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_2c8 [32];
  undefined2 local_2a8;
  longlong *local_298;
  longlong *local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  longlong *local_270;
  LARGE_INTEGER local_268;
  longlong local_260;
  longlong *local_258;
  code *local_248 [2];
  undefined1 local_238 [32];
  undefined8 local_218;
  undefined4 local_208;
  undefined1 *local_1f8 [2];
  undefined1 local_1e8 [32];
  undefined8 local_1c8;
  undefined4 local_1b8;
  longlong *local_1a8;
  longlong *local_1a0;
  undefined1 local_198 [16];
  longlong local_188 [4];
  longlong *local_168;
  int local_158;
  undefined1 *local_148 [2];
  longlong local_138 [4];
  longlong *local_118;
  int local_108;
  LARGE_INTEGER local_f8 [24];
  longlong local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  plVar8 = (longlong *)0x0;
  local_218 = 0;
  local_208 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_238);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = param_1;
    *puVar4 = &PTR_FUN_143f77b70;
  }
  local_288 = 0;
  local_248[0] = FUN_141031d00;
  local_280 = 0x48;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_288,0);
  local_2a8 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>
            (local_288,0x48,
             "UGFxSHiFTMenuCodeRedemptionPage::OnDeinit::RemoveCodeRedemptionDelegate");
  FUN_140cdf730(local_f8,&local_288,local_248);
  QueryPerformanceCounter(&local_268);
  local_f8[0] = local_268;
  plVar5 = (longlong *)operator_new(0x18);
  plVar7 = plVar8;
  if (plVar5 != (longlong *)0x0) {
    TPromiseBase<int>::TPromiseBase<int>(plVar5);
    *(undefined1 *)(plVar5 + 2) = 0;
    plVar7 = plVar5;
  }
  plVar5 = (longlong *)operator_new(0x18);
  local_290 = plVar8;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *plVar5 = (longlong)&PTR_DestroyObject_1444f8938;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    plVar5[2] = (longlong)plVar7;
    local_290 = plVar5;
  }
  local_298 = plVar7;
  SharedPointerInternals::EnableSharedFromThis(&local_298,plVar7,plVar7);
  *(undefined1 *)(local_298 + 2) = 1;
  local_270 = (longlong *)local_298[1];
  local_260 = *local_298;
  if (local_270 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_270 + 1) = (int)local_270[1] + 1;
    UNLOCK();
  }
  local_278 = 0;
  local_258 = local_270;
  local_38 = local_260;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_30,&local_270);
  plVar7 = local_270;
  if (local_270 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_270 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_270)(local_270);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_270 + 8))(local_270,1);
      }
    }
  }
  local_118 = (longlong *)0x0;
  local_108 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_138);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_1444f8620;
    puVar4[1] = local_f8;
  }
  local_148[0] = &LAB_140cee980;
  local_1a8 = local_298;
  local_1a0 = local_290;
  if (local_290 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_290 + 1) = (int)local_290[1] + 1;
    UNLOCK();
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_198,local_148);
  local_1c8 = 0;
  local_1b8 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x70,local_1e8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_CopyToEmptyStorage_1444f8578;
    puVar4[2] = local_1a8;
    puVar4[3] = local_1a0;
    if (local_1a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1a0 + 1) = (int)local_1a0[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar4 + 4,local_198);
  }
  local_1f8[0] = &LAB_140cee8d0;
  if (local_158 != 0) {
    plVar7 = local_188;
    if (local_168 != (longlong *)0x0) {
      plVar7 = local_168;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_168 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar7 = local_1a0;
  if (local_1a0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1a0 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_1a0)(local_1a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  if (local_108 != 0) {
    plVar7 = local_138;
    if (local_118 != (longlong *)0x0) {
      plVar7 = local_118;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar7 = local_290;
  if (local_290 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_290 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_290)(local_290);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  FUN_14204c280(local_1f8);
  FUN_140d1b3a0(local_f8);
  plVar7 = *(longlong **)(param_1 + 0x200);
  if (plVar7 != (longlong *)0x0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      (**(code **)(*plVar7 + 0x288))(plVar7);
    }
  }
  plVar7 = *(longlong **)(param_1 + 0x208);
  *(undefined8 *)(param_1 + 0x200) = 0;
  if (plVar7 != (longlong *)0x0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      (**(code **)(*plVar7 + 0x288))(plVar7);
    }
  }
  plVar7 = *(longlong **)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x208) = 0;
  if (plVar7 != (longlong *)0x0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      (**(code **)(*plVar7 + 0x288))(plVar7);
    }
  }
  plVar7 = *(longlong **)(param_1 + 0x228);
  *(undefined8 *)(param_1 + 0x210) = 0;
  if (plVar7 != (longlong *)0x0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      (**(code **)(*plVar7 + 0x288))(plVar7);
    }
  }
  plVar7 = *(longlong **)(param_1 + 0x230);
  *(undefined8 *)(param_1 + 0x228) = 0;
  if (plVar7 != (longlong *)0x0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      (**(code **)(*plVar7 + 0x288))(plVar7);
    }
  }
  plVar7 = *(longlong **)(param_1 + 0x238);
  *(undefined8 *)(param_1 + 0x230) = 0;
  if (plVar7 != (longlong *)0x0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      (**(code **)(*plVar7 + 0x288))(plVar7);
    }
  }
  plVar7 = *(longlong **)(param_1 + 0x240);
  *(undefined8 *)(param_1 + 0x238) = 0;
  if (plVar7 != (longlong *)0x0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      (**(code **)(*plVar7 + 0x288))(plVar7);
    }
  }
  plVar7 = *(longlong **)(param_1 + 0x248);
  *(undefined8 *)(param_1 + 0x240) = 0;
  if (plVar7 != (longlong *)0x0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      (**(code **)(*plVar7 + 0x288))(plVar7);
    }
  }
  plVar7 = *(longlong **)(param_1 + 0x250);
  *(undefined8 *)(param_1 + 0x248) = 0;
  if (plVar7 != (longlong *)0x0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      (**(code **)(*plVar7 + 0x288))(plVar7);
    }
  }
  *(undefined8 *)(param_1 + 0x250) = 0;
  plVar7 = plVar8;
  if (0 < *(int *)(param_1 + 0x220)) {
    do {
      plVar5 = *(longlong **)((longlong)plVar8 + *(longlong *)(param_1 + 0x218));
      if (plVar5 != (longlong *)0x0) {
        lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
        if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          (**(code **)(*plVar5 + 0x288))(plVar5);
        }
      }
      uVar9 = (int)plVar7 + 1;
      *(undefined8 *)((longlong)plVar8 + *(longlong *)(param_1 + 0x218)) = 0;
      plVar8 = plVar8 + 1;
      plVar7 = (longlong *)(ulonglong)uVar9;
    } while ((int)uVar9 < *(int *)(param_1 + 0x220));
  }
  *(undefined4 *)(param_1 + 0x220) = 0;
  if (*(int *)(param_1 + 0x224) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x218,0);
  }
  if ((*(char *)(param_1 + 0x180) == '\0') && (*(char *)(param_1 + 0x1f0) == '\0')) {
    FUN_14105c820(param_1,1);
  }
  thunk_FUN_14208af70(param_1);
  FUN_140ce1dc0(local_f8);
  return;
}



// FUNCTION 1410441d0 FUN_1410441d0 body=501 status=ok
// SIG undefined FUN_1410441d0(void)

void FUN_1410441d0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x1f8);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x208);
  *(undefined8 *)(param_1 + 0x200) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x208) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x218);
  *(undefined8 *)(param_1 + 0x210) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x218) = 0;
  if ((*(char *)(param_1 + 0x180) == '\0') && (*(char *)(param_1 + 0x1f0) == '\0')) {
    FUN_14105c820(param_1,1);
  }
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 1410443d0 FUN_1410443d0 body=209 status=ok
// SIG undefined FUN_1410443d0(void)

void FUN_1410443d0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x418);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x420);
  *(undefined8 *)(param_1 + 0x418) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x420) = 0;
  FUN_142ebffa0(param_1);
  return;
}



// FUNCTION 1410444b0 FUN_1410444b0 body=242 status=ok
// SIG undefined FUN_1410444b0(void)

void FUN_1410444b0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x1f8);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x200) = 0;
  if ((*(char *)(param_1 + 0x180) == '\0') && (*(char *)(param_1 + 0x1f0) == '\0')) {
    FUN_14105c820(param_1,1);
  }
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 1410445b0 FUN_1410445b0 body=242 status=ok
// SIG undefined FUN_1410445b0(void)

void FUN_1410445b0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x200);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x200) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  if ((*(char *)(param_1 + 0x180) == '\0') && (*(char *)(param_1 + 0x1f0) == '\0')) {
    FUN_14105c820(param_1,1);
  }
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 1410446b0 FUN_1410446b0 body=52 status=ok
// SIG undefined FUN_1410446b0(void)

void FUN_1410446b0(longlong param_1)

{
  if ((*(char *)(param_1 + 0x180) == '\0') && (*(char *)(param_1 + 0x1f0) == '\0')) {
    FUN_14105c820(param_1,1);
  }
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 1410446f0 FUN_1410446f0 body=331 status=ok
// SIG undefined FUN_1410446f0(void)

void FUN_1410446f0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x1f8);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x208);
  *(undefined8 *)(param_1 + 0x200) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x208) = 0;
  if ((*(char *)(param_1 + 0x180) == '\0') && (*(char *)(param_1 + 0x1f0) == '\0')) {
    FUN_14105c820(param_1,1);
  }
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 141044840 FUN_141044840 body=671 status=ok
// SIG undefined FUN_141044840(void)

void FUN_141044840(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x200);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x208);
  *(undefined8 *)(param_1 + 0x200) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x208) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x218);
  *(undefined8 *)(param_1 + 0x210) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x220);
  *(undefined8 *)(param_1 + 0x218) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x230);
  *(undefined8 *)(param_1 + 0x220) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x228);
  *(undefined8 *)(param_1 + 0x230) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x228) = 0;
  if ((*(char *)(param_1 + 0x180) == '\0') && (*(char *)(param_1 + 0x1f0) == '\0')) {
    FUN_14105c820(param_1,1);
  }
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 141044ae0 FUN_141044ae0 body=1170 status=ok
// SIG undefined FUN_141044ae0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141044ae0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_2c8 [32];
  undefined2 local_2a8;
  longlong *local_298;
  longlong *local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  longlong *local_270;
  LARGE_INTEGER local_268;
  longlong local_260;
  longlong *local_258;
  undefined1 *local_248 [2];
  undefined1 local_238 [32];
  undefined8 local_218;
  undefined4 local_208;
  undefined1 *local_1f8 [2];
  undefined1 local_1e8 [32];
  undefined8 local_1c8;
  undefined4 local_1b8;
  longlong *local_1a8;
  longlong *local_1a0;
  undefined1 local_198 [16];
  longlong local_188 [4];
  longlong *local_168;
  int local_158;
  undefined1 *local_148 [2];
  longlong local_138 [4];
  longlong *local_118;
  int local_108;
  LARGE_INTEGER local_f8 [24];
  longlong local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  plVar6 = (longlong *)0x0;
  local_218 = 0;
  local_208 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_238);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = param_1;
    *puVar4 = &PTR_FUN_143f77b70;
  }
  local_288 = 0;
  local_248[0] = &LAB_141031fd0;
  local_280 = 0x3a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_288,0);
  local_2a8 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>
            (local_288,0x3a,"UGFxSHiFTMenuSignInAccountPage::OnDeinit::RemoveDelegates");
  FUN_140cdf730(local_f8,&local_288,local_248);
  QueryPerformanceCounter(&local_268);
  local_f8[0] = local_268;
  plVar5 = (longlong *)operator_new(0x18);
  plVar8 = plVar6;
  if (plVar5 != (longlong *)0x0) {
    TPromiseBase<int>::TPromiseBase<int>(plVar5);
    *(undefined1 *)(plVar5 + 2) = 0;
    plVar8 = plVar5;
  }
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *plVar5 = (longlong)&PTR_DestroyObject_1444f8938;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    plVar5[2] = (longlong)plVar8;
    plVar6 = plVar5;
  }
  local_298 = plVar8;
  local_290 = plVar6;
  SharedPointerInternals::EnableSharedFromThis(&local_298,plVar8,plVar8);
  *(undefined1 *)(local_298 + 2) = 1;
  local_270 = (longlong *)local_298[1];
  local_260 = *local_298;
  if (local_270 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_270 + 1) = (int)local_270[1] + 1;
    UNLOCK();
  }
  local_278 = 0;
  local_258 = local_270;
  local_38 = local_260;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_30,&local_270);
  plVar6 = local_270;
  if (local_270 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_270 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_270)(local_270);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_270 + 8))(local_270,1);
      }
    }
  }
  local_118 = (longlong *)0x0;
  local_108 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_138);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_1444f8620;
    puVar4[1] = local_f8;
  }
  local_148[0] = &LAB_140cee980;
  local_1a8 = local_298;
  local_1a0 = local_290;
  if (local_290 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_290 + 1) = (int)local_290[1] + 1;
    UNLOCK();
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_198,local_148);
  local_1c8 = 0;
  local_1b8 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x70,local_1e8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_CopyToEmptyStorage_1444f8578;
    puVar4[2] = local_1a8;
    puVar4[3] = local_1a0;
    if (local_1a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1a0 + 1) = (int)local_1a0[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar4 + 4,local_198);
  }
  local_1f8[0] = &LAB_140cee8d0;
  if (local_158 != 0) {
    plVar6 = local_188;
    if (local_168 != (longlong *)0x0) {
      plVar6 = local_168;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_168 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar6 = local_1a0;
  if (local_1a0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_1a0 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_1a0)(local_1a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  if (local_108 != 0) {
    plVar6 = local_138;
    if (local_118 != (longlong *)0x0) {
      plVar6 = local_118;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar6 = local_290;
  if (local_290 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_290 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_290)(local_290);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  FUN_14204c280(local_1f8);
  FUN_140d1b3a0(local_f8);
  plVar6 = *(longlong **)(param_1 + 0x210);
  if (plVar6 != (longlong *)0x0) {
    lVar7 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      (**(code **)(*plVar6 + 0x288))(plVar6);
    }
  }
  plVar6 = *(longlong **)(param_1 + 0x238);
  *(undefined8 *)(param_1 + 0x210) = 0;
  if (plVar6 != (longlong *)0x0) {
    lVar7 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      (**(code **)(*plVar6 + 0x288))(plVar6);
    }
  }
  *(undefined8 *)(param_1 + 0x238) = 0;
  if ((*(char *)(param_1 + 0x180) == '\0') && (*(char *)(param_1 + 0x1f0) == '\0')) {
    FUN_14105c820(param_1,1);
  }
  thunk_FUN_14208af70(param_1);
  FUN_140ce1dc0(local_f8);
  return;
}



// FUNCTION 141044f80 FUN_141044f80 body=279 status=ok
// SIG undefined FUN_141044f80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141044f80(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_141031eb0;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 1410450a0 FUN_1410450a0 body=1025 status=ok
// SIG undefined FUN_1410450a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410450a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f4;
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
  longlong *local_88 [2];
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_f4 = 0xffffffff;
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    FUN_14170c210(&local_f4);
  }
  local_f8 = 0xffffffff;
  FUN_14170c210(&local_f8,param_1);
  uVar8 = local_f4;
  uVar6 = local_f8;
  local_f8 = 0xffffffff;
  local_f4 = 0xffffffff;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_14461b890;
    *(undefined4 *)(puVar5 + 1) = uVar6;
    uVar6 = 0xffffffff;
    *(undefined4 *)((longlong)puVar5 + 0xc) = uVar8;
    uVar8 = 0xffffffff;
  }
  local_78[0] = &LAB_141032160;
  FUN_14208c300(param_1,local_78);
  if (local_38 != 0) {
    plVar7 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar7 = local_48;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_1416f8340(uVar8);
  FUN_1416f8340(uVar6);
  FUN_1416f8340(local_f8);
  FUN_1416f8340(local_f4);
  local_e8 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 800) != &local_f0) {
    *(undefined8 *)(param_1 + 800) = 0;
    local_f0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x328,&local_e8);
    plVar7 = local_e8;
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e8 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_e8 + 8))(local_e8,1);
        }
      }
    }
  }
  local_d8 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x330) != &local_e0) {
    *(undefined8 *)(param_1 + 0x330) = 0;
    local_e0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x338,&local_d8);
    plVar7 = local_d8;
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d8 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_d8 + 8))(local_d8,1);
        }
      }
    }
  }
  local_c8 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x340) != &local_d0) {
    *(undefined8 *)(param_1 + 0x340) = 0;
    local_d0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x348,&local_c8);
    plVar7 = local_c8;
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c8 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_c8)(local_c8);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_c8 + 8))(local_c8,1);
        }
      }
    }
  }
  local_b8 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x350) != &local_c0) {
    *(undefined8 *)(param_1 + 0x350) = 0;
    local_c0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x358,&local_b8);
    plVar7 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b8 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
  }
  local_a8 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x360) != &local_b0) {
    *(undefined8 *)(param_1 + 0x360) = 0;
    local_b0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x368,&local_a8);
    plVar7 = local_a8;
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_a8 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_a8 + 8))(local_a8,1);
        }
      }
    }
  }
  local_98 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x370) != &local_a0) {
    *(undefined8 *)(param_1 + 0x370) = 0;
    local_a0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x378,&local_98);
    plVar7 = local_98;
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_98 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_98 + 8))(local_98,1);
        }
      }
    }
  }
  local_88[0] = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x380) != &local_90) {
    *(undefined8 *)(param_1 + 0x380) = 0;
    local_90 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x388,local_88);
    plVar7 = local_88[0];
    if (local_88[0] != (longlong *)0x0) {
      LOCK();
      plVar1 = local_88[0] + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_88[0])(local_88[0]);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_88[0] + 8))(local_88[0],1);
        }
      }
    }
  }
  FUN_142ebfc00(param_1);
  return;
}



// FUNCTION 1410454b0 FUN_1410454b0 body=259 status=ok
// SIG undefined FUN_1410454b0(void)

void FUN_1410454b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_20 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x170) != &local_28) {
    *(undefined8 *)(param_1 + 0x170) = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x178,&local_20);
    plVar5 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x180) != &local_18) {
    *(undefined8 *)(param_1 + 0x180) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x188,&local_10);
    plVar5 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 1410455c0 FUN_1410455c0 body=670 status=ok
// SIG undefined FUN_1410455c0(void)

void FUN_1410455c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_60 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x338) != &local_68) {
    *(undefined8 *)(param_1 + 0x338) = 0;
    local_68 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x340,&local_60);
    plVar5 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
  }
  local_50 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x348) != &local_58) {
    *(undefined8 *)(param_1 + 0x348) = 0;
    local_58 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x350,&local_50);
    plVar5 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  local_40 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x3b8) != &local_48) {
    *(undefined8 *)(param_1 + 0x3b8) = 0;
    local_48 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x3c0,&local_40);
    plVar5 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  local_30 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x3c8) != &local_38) {
    *(undefined8 *)(param_1 + 0x3c8) = 0;
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x3d0,&local_30);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
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
  if ((undefined8 *)(param_1 + 0x3d8) != &local_28) {
    *(undefined8 *)(param_1 + 0x3d8) = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x3e0,&local_20);
    plVar5 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x418) != &local_18) {
    *(undefined8 *)(param_1 + 0x418) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x420,&local_10);
    plVar5 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  FUN_142ebfc00(param_1);
  return;
}



// FUNCTION 141045860 FUN_141045860 body=253 status=ok
// SIG undefined FUN_141045860(void)

void FUN_141045860(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *local_18;
  longlong *local_10;
  
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x6d8);
  if (cVar5 != '\0') {
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x6d8);
    FUN_142dcf3a0(uVar6,&local_18);
    if (local_18 == (undefined8 *)0x0) {
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
      }
    }
    else {
      cVar5 = (**(code **)*local_18)(local_18,*param_2);
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
      }
      if (cVar5 != '\0') {
        FUN_141058b70(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141045960 FUN_141045960 body=137 status=ok
// SIG undefined FUN_141045960(void)

void FUN_141045960(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x59c);
  if (cVar3 != '\0') {
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x59c);
    if ((*(int *)(lVar4 + 0x100) != 0) &&
       (plVar1 = *(longlong **)(lVar4 + 0xf8), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x28))(plVar1,0);
      if (*(longlong *)(lVar4 + 0xf8) != 0) {
        uVar2 = FMemory::Realloc(*(longlong *)(lVar4 + 0xf8),0,0);
        *(undefined8 *)(lVar4 + 0xf8) = uVar2;
      }
      *(undefined4 *)(lVar4 + 0x100) = 0;
    }
  }
  *(int *)(param_1 + 0x6c0) = *(int *)(param_1 + 0x6c0) + 1;
  FUN_141061980(param_1);
  return;
}



// FUNCTION 1410459f0 FUN_1410459f0 body=137 status=ok
// SIG undefined FUN_1410459f0(void)

void FUN_1410459f0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x59c);
  if (cVar3 != '\0') {
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x59c);
    if ((*(int *)(lVar4 + 0x100) != 0) &&
       (plVar1 = *(longlong **)(lVar4 + 0xf8), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x28))(plVar1,0);
      if (*(longlong *)(lVar4 + 0xf8) != 0) {
        uVar2 = FMemory::Realloc(*(longlong *)(lVar4 + 0xf8),0,0);
        *(undefined8 *)(lVar4 + 0xf8) = uVar2;
      }
      *(undefined4 *)(lVar4 + 0x100) = 0;
    }
  }
  *(int *)(param_1 + 0x8b0) = *(int *)(param_1 + 0x8b0) + 1;
  FUN_141061ac0(param_1);
  return;
}



// FUNCTION 141045a80 FUN_141045a80 body=10 status=ok
// SIG undefined FUN_141045a80(void)

void FUN_141045a80(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141045a83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x300))();
  return;
}



// FUNCTION 141045a90 FUN_141045a90 body=10 status=ok
// SIG undefined FUN_141045a90(void)

void FUN_141045a90(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141045a93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x308))();
  return;
}



// FUNCTION 141045aa0 FUN_141045aa0 body=523 status=ok
// SIG undefined FUN_141045aa0(void)

void FUN_141045aa0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x184);
  if (cVar2 != '\0') {
    uVar3 = FWeakObjectPtr::Get(param_1 + 0x184);
    cVar2 = FUN_14103f160(uVar3,param_2);
    if ((cVar2 != '\0') &&
       (lVar4 = FWeakObjectPtr::Get(param_1 + 0x184), *(longlong *)(lVar4 + 0x6e0) != 0)) {
      lVar4 = FWeakObjectPtr::Get(param_1 + 0x184);
      TBaseMulticastDelegate<void>::Remove
                (*(longlong *)(lVar4 + 0x6e0) + 0xd8,*(undefined8 *)(param_1 + 0x1f8));
      lVar4 = FWeakObjectPtr::Get(param_1 + 0x184);
      puVar9 = (undefined8 *)0x0;
      uVar8 = 0;
      local_c8 = (undefined8 *)0x0;
      iVar6 = *(int *)(*(longlong *)(lVar4 + 0x6e0) + 0x2d8);
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x6e0) + 0x2d0);
      iVar7 = iVar6;
      if (iVar6 != 0) {
        local_c0._0_4_ = iVar6;
        TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_c8,iVar6,0);
        lVar4 = lVar4 - (longlong)local_c8;
        puVar5 = local_c8;
        do {
          *puVar5 = *(undefined8 *)(lVar4 + (longlong)puVar5);
          lVar1 = *(longlong *)(lVar4 + 8 + (longlong)puVar5);
          puVar5[1] = lVar1;
          if (lVar1 != 0) {
            LOCK();
            *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
            UNLOCK();
          }
          puVar5 = puVar5 + 2;
          iVar6 = iVar6 + -1;
          puVar9 = local_c8;
          iVar7 = (int)local_c0;
          uVar8 = local_c0._4_4_;
        } while (iVar6 != 0);
      }
      local_c8 = (undefined8 *)0x0;
      local_c0 = 0;
      local_98 = param_1;
      FWeakObjectPtr::operator=(&local_res8,param_1);
      local_90 = 0;
      local_a8 = CONCAT44(uVar8,iVar7);
      local_88 = 0;
      local_a0 = local_res8;
      local_9c = local_resc;
      local_48 = 0;
      local_38 = 0;
      local_b8 = param_1;
      local_b0 = puVar9;
      puVar5 = (undefined8 *)FUN_140438ef0(0x28,local_68);
      if (puVar5 != (undefined8 *)0x0) {
        local_b0 = (undefined8 *)0x0;
        *puVar5 = &PTR_FUN_14467a638;
        puVar5[1] = param_1;
        puVar5[2] = puVar9;
        *(int *)(puVar5 + 3) = iVar7;
        *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar8;
        *(undefined4 *)(puVar5 + 4) = local_res8;
        *(undefined4 *)((longlong)puVar5 + 0x24) = local_resc;
        local_a8 = 0;
      }
      local_78[0] = &LAB_141031fa0;
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_b0);
      FUN_14208c5d0(param_1,local_78);
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_90);
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_c8);
    }
  }
  return;
}



// FUNCTION 141045cb0 FUN_141045cb0 body=5956 status=ok
// SIG undefined FUN_141045cb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141045cb0(longlong *param_1,longlong param_2,char *param_3)

{
  char *pcVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong *puVar13;
  char *pcVar14;
  int *piVar15;
  undefined1 uVar16;
  bool bVar17;
  undefined1 auStack_758 [32];
  undefined1 local_738;
  char *local_730;
  longlong local_728;
  ulonglong *local_718;
  undefined8 *puStack_710;
  longlong local_708;
  undefined4 local_700;
  longlong local_6f8;
  longlong local_6f0 [17];
  undefined4 *local_668;
  ulonglong *puStack_660;
  undefined1 local_658 [8];
  longlong *local_650;
  longlong local_640;
  undefined4 local_638;
  longlong local_630;
  undefined4 local_628;
  undefined1 local_620 [8];
  longlong *local_618;
  char local_608 [8];
  longlong *local_600;
  undefined8 local_5f0;
  longlong local_5e8;
  undefined8 local_5e0;
  longlong local_5d8;
  undefined8 local_5d0;
  longlong local_5c8;
  undefined8 local_5c0;
  longlong local_5b8;
  longlong local_5b0 [2];
  undefined8 local_5a0;
  longlong local_598;
  undefined1 local_590 [8];
  longlong *local_588;
  undefined1 local_578 [16];
  undefined8 local_568;
  undefined8 uStack_560;
  undefined1 local_558 [16];
  undefined8 local_548;
  undefined8 uStack_540;
  undefined1 local_538 [16];
  undefined8 local_528;
  undefined8 uStack_520;
  undefined1 local_518 [16];
  undefined8 local_508;
  undefined8 uStack_500;
  undefined1 local_4f8 [16];
  undefined1 local_4e8 [8];
  longlong *local_4e0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined1 local_4b8 [8];
  longlong *local_4b0;
  undefined1 local_4a0 [8];
  longlong *local_498;
  undefined1 local_488 [8];
  longlong *local_480;
  undefined1 local_470 [8];
  longlong *local_468;
  undefined1 local_458 [8];
  longlong *local_450;
  undefined1 local_440 [8];
  longlong *local_438;
  undefined1 local_428 [8];
  longlong *local_420;
  undefined1 local_410 [8];
  longlong *local_408;
  undefined1 local_3f8 [8];
  longlong *local_3f0;
  undefined1 local_3e0 [8];
  longlong *local_3d8;
  undefined1 local_3c8 [8];
  longlong *local_3c0;
  undefined1 local_3b0 [8];
  longlong *local_3a8;
  undefined1 local_398 [8];
  longlong *local_390;
  undefined1 local_380 [8];
  longlong *local_378;
  undefined1 local_368 [8];
  longlong *local_360;
  undefined1 local_350 [16];
  undefined1 local_340 [16];
  undefined1 local_330 [16];
  undefined1 local_320 [16];
  undefined1 local_310 [16];
  undefined1 local_300 [24];
  undefined1 local_2e8 [24];
  undefined1 local_2d0 [24];
  undefined1 local_2b8 [24];
  undefined1 local_2a0 [24];
  undefined1 local_288 [24];
  undefined1 local_270 [24];
  undefined1 local_258 [24];
  undefined1 local_240 [24];
  undefined4 local_228 [2];
  longlong local_220;
  undefined1 local_218 [24];
  undefined1 local_200;
  undefined4 local_1f8 [4];
  undefined1 local_1e8 [24];
  undefined1 local_1d0;
  undefined4 local_1c8;
  undefined1 local_1b8 [24];
  undefined1 local_1a0;
  undefined4 local_198 [4];
  undefined1 local_188 [24];
  char local_170 [8];
  undefined4 local_168;
  undefined1 local_158 [24];
  undefined1 local_140;
  undefined4 local_138 [4];
  undefined1 local_128 [24];
  char local_110 [8];
  undefined4 local_108;
  undefined1 local_f8 [24];
  undefined1 local_e0;
  undefined8 local_d8 [2];
  undefined1 local_c8 [24];
  char local_b0 [8];
  undefined4 local_a8;
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_758;
  local_730 = param_3;
  if (param_2 != 0) {
    cVar6 = *param_3;
    if (cVar6 == '\x01') {
      param_2 = param_2 + 0xca8;
    }
    else if (cVar6 == '\x02') {
      param_2 = param_2 + 0xcd8;
    }
    else if (cVar6 == '\x03') {
      param_2 = param_2 + 0xd08;
    }
    else if (cVar6 == '\x04') {
      param_2 = param_2 + 0xd38;
    }
    else {
      param_2 = FUN_1404b03b0();
    }
    FText::FText(local_4b8,param_2);
    if ((param_1[0xc] != 0) && (param_1[0xd] != 0)) {
      piVar15 = (int *)(param_1[0xd] + 8);
      LOCK();
      iVar7 = *piVar15;
      if (iVar7 == 0) {
        *piVar15 = 0;
        iVar7 = 0;
      }
      UNLOCK();
      if (0 < iVar7) {
        UMistDebugEntityScreen::InspectEntity(param_1 + 0xb,local_4b8,1,0);
      }
    }
    if (local_4b0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_4b0 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_4b0)(local_4b0);
        LOCK();
        piVar15 = (int *)((longlong)local_4b0 + 0xc);
        iVar7 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_4b0 + 8))(local_4b0,1);
        }
      }
    }
  }
  if ((param_1[0xf] != 0) && (param_1[0x10] != 0)) {
    piVar15 = (int *)(param_1[0x10] + 8);
    LOCK();
    iVar7 = *piVar15;
    if (iVar7 == 0) {
      *piVar15 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0xe,param_3 + 8,1,0);
    }
  }
  FText::FText(local_658,param_3 + 0x20);
  FUN_141036410(local_590,param_3);
  FText::FText(local_620,param_3 + 0x38);
  cVar6 = FText::IsEmpty(local_590);
  if (cVar6 == '\0') {
    local_6f0[0] = 0;
    local_6f0[1] = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6f0,0);
    FGenericPlatformString::Memcpy(local_6f0[0],L"{0} \n \n \n{1}",0x1a);
    lVar8 = FText::FText(local_300,local_590);
    local_728 = lVar8;
    lVar9 = FText::FText(local_2e8,local_658);
    local_6f8 = lVar9;
    uVar10 = FText::FromString(local_428,local_6f0);
    puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_340,uVar10);
    local_1f8[0] = 4;
    FText::FText(local_1e8,lVar9);
    local_1d0 = 1;
    local_1c8 = 4;
    FText::FText(local_1b8,lVar8);
    local_718 = (ulonglong *)local_1f8;
    local_1a0 = 1;
    puStack_710 = (undefined8 *)local_198;
    local_5f0 = *puVar11;
    local_5e8 = puVar11[1];
    if (local_5e8 != 0) {
      LOCK();
      *(int *)(local_5e8 + 8) = *(int *)(local_5e8 + 8) + 1;
      UNLOCK();
    }
    local_4c8 = local_718;
    uStack_4c0 = puStack_710;
    uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_578,&local_4c8);
    uVar10 = FText::Format(local_440,&local_5f0,uVar10);
    FText::FText(local_4a0,uVar10);
    if (local_438 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_438 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_438)(local_438);
        LOCK();
        piVar15 = (int *)((longlong)local_438 + 0xc);
        iVar7 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_438 + 8))(local_438,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_578);
    lVar8 = 2;
    lVar9 = 2;
    pcVar14 = local_170;
    do {
      lVar9 = lVar9 + -1;
      pcVar1 = pcVar14 + -0x30;
      if (*pcVar1 != '\0') {
        *pcVar1 = '\0';
        plVar5 = *(longlong **)(pcVar14 + -0x40);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          lVar12 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar15 = (int *)((longlong)plVar5 + 0xc);
            iVar7 = *piVar15;
            *piVar15 = *piVar15 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
      }
      pcVar14 = pcVar1;
    } while (lVar9 != 0);
    plVar5 = (longlong *)puVar11[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar15 = (int *)((longlong)plVar5 + 0xc);
        iVar7 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    plVar5 = *(longlong **)(local_6f8 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar15 = (int *)((longlong)plVar5 + 0xc);
        iVar7 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    plVar5 = *(longlong **)(local_728 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar15 = (int *)((longlong)plVar5 + 0xc);
        iVar7 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    FText::operator=(local_658,local_4a0);
    if (local_498 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_498 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_498)(local_498);
        LOCK();
        piVar15 = (int *)((longlong)local_498 + 0xc);
        iVar7 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_498 + 8))(local_498,1);
        }
      }
    }
    if (local_420 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_420 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_420)(local_420);
        LOCK();
        piVar15 = (int *)((longlong)local_420 + 0xc);
        iVar7 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_420 + 8))(local_420,1);
        }
      }
    }
    if (local_6f0[0] != 0) {
      FMemory::Free();
    }
    cVar6 = FText::IsEmpty(local_620);
    param_3 = local_730;
    if (cVar6 != '\0') goto LAB_14104677e;
    local_6f0[3] = 9;
    local_6f0[2] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6f0 + 2,0);
    FGenericPlatformString::Memcpy(local_6f0[2],L"{0} \n{1}",0x12);
    lVar9 = FText::FText(local_2d0,local_620);
    local_728 = lVar9;
    lVar12 = FText::FText(local_2b8,local_658);
    uVar10 = FText::FromString(local_3f8,local_6f0 + 2);
    puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_350,uVar10);
    local_198[0] = 4;
    FText::FText(local_188,lVar12);
    local_170[0] = '\x01';
    local_168 = 4;
    FText::FText(local_158,lVar9);
    local_718 = (ulonglong *)local_198;
    local_140 = 1;
    puStack_710 = (undefined8 *)local_138;
    local_5e0 = *puVar11;
    local_5d8 = puVar11[1];
    if (local_5d8 != 0) {
      LOCK();
      *(int *)(local_5d8 + 8) = *(int *)(local_5d8 + 8) + 1;
      UNLOCK();
    }
    local_568 = local_718;
    uStack_560 = puStack_710;
    uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_558,&local_568);
    uVar10 = FText::Format(local_410,&local_5e0,uVar10);
    FText::FText(local_488,uVar10);
    if (local_408 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_408 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_408)(local_408);
        LOCK();
        piVar15 = (int *)((longlong)local_408 + 0xc);
        iVar7 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_408 + 8))(local_408,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_558);
    pcVar14 = local_110;
    do {
      lVar8 = lVar8 + -1;
      pcVar1 = pcVar14 + -0x30;
      if (*pcVar1 != '\0') {
        *pcVar1 = '\0';
        plVar5 = *(longlong **)(pcVar14 + -0x40);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          lVar9 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar15 = (int *)((longlong)plVar5 + 0xc);
            iVar7 = *piVar15;
            *piVar15 = *piVar15 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
      }
      pcVar14 = pcVar1;
    } while (lVar8 != 0);
    plVar5 = (longlong *)puVar11[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar15 = (int *)((longlong)plVar5 + 0xc);
        iVar7 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    plVar5 = *(longlong **)(lVar12 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar15 = (int *)((longlong)plVar5 + 0xc);
        iVar7 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    plVar5 = *(longlong **)(local_728 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar15 = (int *)((longlong)plVar5 + 0xc);
        iVar7 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    FText::operator=(local_658,local_488);
    if (local_480 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_480 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_480)(local_480);
        LOCK();
        piVar15 = (int *)((longlong)local_480 + 0xc);
        iVar7 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_480 + 8))(local_480,1);
        }
      }
    }
    if (local_3f0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_3f0 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_3f0)(local_3f0);
        LOCK();
        piVar15 = (int *)((longlong)local_3f0 + 0xc);
        iVar7 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_3f0 + 8))(local_3f0,1);
        }
      }
    }
    lVar8 = local_6f0[2];
  }
  else {
    cVar6 = FText::IsEmpty(local_620);
    if (cVar6 != '\0') goto LAB_14104677e;
    local_6f0[4] = 0;
    local_6f0[5] = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6f0 + 4,0);
    FGenericPlatformString::Memcpy(local_6f0[4],L"{0} \n \n \n{1}",0x1a);
    lVar8 = FText::FText(local_2a0,local_620);
    local_728 = lVar8;
    lVar9 = FText::FText(local_288,local_658);
    uVar10 = FText::FromString(local_3c8,local_6f0 + 4);
    puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_310,uVar10);
    local_138[0] = 4;
    FText::FText(local_128,lVar9);
    local_110[0] = '\x01';
    local_108 = 4;
    FText::FText(local_f8,lVar8);
    local_718 = (ulonglong *)local_138;
    local_e0 = 1;
    puStack_710 = local_d8;
    local_5d0 = *puVar11;
    local_5c8 = puVar11[1];
    if (local_5c8 != 0) {
      LOCK();
      *(int *)(local_5c8 + 8) = *(int *)(local_5c8 + 8) + 1;
      UNLOCK();
    }
    local_548 = local_718;
    uStack_540 = puStack_710;
    uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_538,&local_548);
    uVar10 = FText::Format(local_3e0,&local_5d0,uVar10);
    FText::FText(local_4e8,uVar10);
    if (local_3d8 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_3d8 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_3d8)(local_3d8);
        LOCK();
        piVar15 = (int *)((longlong)local_3d8 + 0xc);
        iVar7 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_3d8 + 8))(local_3d8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_538);
    lVar8 = 2;
    pcVar14 = local_b0;
    do {
      lVar8 = lVar8 + -1;
      pcVar1 = pcVar14 + -0x30;
      if (*pcVar1 != '\0') {
        *pcVar1 = '\0';
        plVar5 = *(longlong **)(pcVar14 + -0x40);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          lVar12 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar15 = (int *)((longlong)plVar5 + 0xc);
            iVar7 = *piVar15;
            *piVar15 = *piVar15 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
      }
      pcVar14 = pcVar1;
    } while (lVar8 != 0);
    plVar5 = (longlong *)puVar11[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar15 = (int *)((longlong)plVar5 + 0xc);
        iVar7 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    plVar5 = *(longlong **)(lVar9 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar15 = (int *)((longlong)plVar5 + 0xc);
        iVar7 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    plVar5 = *(longlong **)(local_728 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar15 = (int *)((longlong)plVar5 + 0xc);
        iVar7 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    FText::operator=(local_658,local_4e8);
    if (local_4e0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_4e0 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_4e0)(local_4e0);
        LOCK();
        piVar15 = (int *)((longlong)local_4e0 + 0xc);
        iVar7 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_4e0 + 8))(local_4e0,1);
        }
      }
    }
    if (local_3c0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_3c0 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_3c0)(local_3c0);
        LOCK();
        piVar15 = (int *)((longlong)local_3c0 + 0xc);
        iVar7 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_3c0 + 8))(local_3c0,1);
        }
      }
    }
    lVar8 = local_6f0[4];
  }
  param_3 = local_730;
  if (lVar8 != 0) {
    FMemory::Free();
    param_3 = local_730;
  }
LAB_14104677e:
  plVar5 = (longlong *)param_1[0x25];
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x2b0))(plVar5,local_658,1,0);
  }
  uVar10 = FUN_1404b03b0();
  if ((param_1[0x15] != 0) && (param_1[0x16] != 0)) {
    piVar15 = (int *)(param_1[0x16] + 8);
    LOCK();
    iVar7 = *piVar15;
    if (iVar7 == 0) {
      *piVar15 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x14,uVar10,1,0);
    }
  }
  cVar6 = FText::IsEmpty(uVar10);
  *(bool *)(param_1 + 0x2b) = cVar6 == '\0';
  lVar8 = 0x84;
  if (param_3[0x88] == '\0') {
    lVar8 = 0x80;
  }
  iVar7 = *(int *)(param_3 + lVar8);
  lVar8 = 0x90;
  if (param_3[0x94] == '\0') {
    lVar8 = 0x8c;
  }
  uVar3 = *(undefined4 *)(param_3 + lVar8);
  lVar8 = 0x9c;
  if (param_3[0xa0] == '\0') {
    lVar8 = 0x98;
  }
  iVar4 = *(int *)(param_3 + lVar8);
  local_738 = 0 < iVar4;
  uVar10 = FUN_1404b03b0();
  FText::FText(local_608,uVar10);
  uVar16 = 0 < iVar4;
  if (*param_3 == '\x04') {
    local_708 = 0;
    if (iVar4 < 1) {
      FString::PrintfImpl(&local_630,L"<font color=\'#EBE310\'>%d</font>",iVar7);
      if (local_708 != 0) {
        FMemory::Free();
      }
      local_708 = local_630;
      local_700 = local_628;
    }
    else {
      FString::PrintfImpl(&local_640,L"<font color=\'#19FAFF\'>%d</font>",iVar7 + iVar4);
      if (local_708 != 0) {
        FMemory::Free();
      }
      local_708 = local_640;
      local_700 = local_638;
    }
    local_6f0[6] = 0;
    local_6f0[7] = 0x1f;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6f0 + 6,0);
    FGenericPlatformString::Memcpy(local_6f0[6],L"<font color=\'#EBE310\'>/</font>",0x3e);
    FString::PrintfImpl(local_5b0,L"<font color=\'#EBE310\'>%d</font>",uVar3);
    puVar13 = (ulonglong *)FText::FromString(local_270,local_5b0);
    local_718 = puVar13;
    lVar8 = FText::FromString(local_258,local_6f0 + 6);
    local_6f8 = lVar8;
    lVar9 = FText::FromString(local_240,&local_708);
    local_728 = lVar9;
    uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_398,L"{0}{1}{2}",L"GFxSkillScreenTree",L"Item Rank String");
    puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_330,uVar10);
    local_d8[0]._0_4_ = 4;
    FText::FText(local_c8,lVar9);
    local_b0[0] = '\x01';
    local_a8 = 4;
    FText::FText(local_98,lVar8);
    local_80 = 1;
    local_78 = 4;
    FText::FText(local_68,puVar13);
    local_668 = (undefined4 *)local_d8;
    local_50 = 1;
    puStack_660 = local_48;
    local_5c0 = *puVar11;
    local_5b8 = puVar11[1];
    if (local_5b8 != 0) {
      LOCK();
      *(int *)(local_5b8 + 8) = *(int *)(local_5b8 + 8) + 1;
      UNLOCK();
    }
    local_528 = local_668;
    uStack_520 = puStack_660;
    uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_518,&local_528);
    uVar10 = FText::Format(local_3b0,&local_5c0,uVar10);
    FText::FText(local_470,uVar10);
    if (local_3a8 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_3a8 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_3a8)(local_3a8);
        LOCK();
        piVar15 = (int *)((longlong)local_3a8 + 0xc);
        iVar7 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_3a8 + 8))(local_3a8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_518);
    lVar8 = 3;
    pcVar14 = &stack0xffffffffffffffe0;
    do {
      lVar8 = lVar8 + -1;
      pcVar1 = pcVar14 + -0x30;
      if (*pcVar1 != '\0') {
        *pcVar1 = '\0';
        plVar5 = *(longlong **)(pcVar14 + -0x40);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          lVar9 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar15 = (int *)((longlong)plVar5 + 0xc);
            iVar7 = *piVar15;
            *piVar15 = *piVar15 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
      }
      pcVar14 = pcVar1;
    } while (lVar8 != 0);
    plVar5 = (longlong *)puVar11[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar15 = (int *)((longlong)plVar5 + 0xc);
        iVar7 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    plVar5 = *(longlong **)(local_728 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar15 = (int *)((longlong)plVar5 + 0xc);
        iVar7 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    plVar5 = *(longlong **)(local_6f8 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar15 = (int *)((longlong)plVar5 + 0xc);
        iVar7 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    plVar5 = (longlong *)local_718[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar15 = (int *)((longlong)plVar5 + 0xc);
        iVar7 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    FText::operator=(local_608,local_470);
    if (local_468 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_468 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_468)(local_468);
        LOCK();
        piVar15 = (int *)((longlong)local_468 + 0xc);
        iVar7 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_468 + 8))(local_468,1);
        }
      }
    }
    if (local_390 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_390 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_390)(local_390);
        LOCK();
        piVar15 = (int *)((longlong)local_390 + 0xc);
        iVar7 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_390 + 8))(local_390,1);
        }
      }
    }
    if (local_5b0[0] != 0) {
      FMemory::Free();
    }
    if (local_6f0[6] != 0) {
      FMemory::Free();
    }
    param_3 = local_730;
    uVar16 = local_738;
    if (local_708 != 0) {
      FMemory::Free();
      param_3 = local_730;
      uVar16 = local_738;
    }
  }
  puVar11 = &DAT_14629fcf0;
  piVar15 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if (*piVar15 < DAT_14687450c) {
    _Init_thread_header(&DAT_14687450c);
    if (DAT_14687450c == -1) {
      _DAT_14629fcf8 = 0xc;
      DAT_14629fcf0 = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fcf0,0);
      FGenericPlatformString::Memcpy(DAT_14629fcf0,L"actionSkill",0x18);
      atexit((_func_5014 *)&LAB_143e5c270);
      _Init_thread_footer(&DAT_14687450c);
    }
  }
  if (*piVar15 < DAT_146874510) {
    _Init_thread_header(&DAT_146874510);
    if (DAT_146874510 == -1) {
      _DAT_14629fd08 = 0xb;
      DAT_14629fd00 = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fd00,0);
      FGenericPlatformString::Memcpy(DAT_14629fd00,L"modPrimary",0x16);
      atexit((_func_5014 *)&LAB_143e5d570);
      _Init_thread_footer(&DAT_146874510);
    }
  }
  if (*piVar15 < DAT_146874514) {
    _Init_thread_header(&DAT_146874514);
    if (DAT_146874514 == -1) {
      _DAT_14629fd18 = 0xd;
      DAT_14629fd10 = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fd10,0);
      FGenericPlatformString::Memcpy(DAT_14629fd10,L"modSecondary",0x1a);
      atexit((_func_5014 *)&LAB_143e5d590);
      _Init_thread_footer(&DAT_146874514);
    }
  }
  if (*piVar15 < DAT_146874518) {
    _Init_thread_header(&DAT_146874518);
    if (DAT_146874518 == -1) {
      DAT_14629fd20 = 0;
      _DAT_14629fd28 = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629fd20,0);
      FGenericPlatformString::Memcpy(DAT_14629fd20,L"passive",0x10);
      atexit((_func_5014 *)&LAB_143e5d610);
      _Init_thread_footer(&DAT_146874518);
    }
  }
  cVar6 = *param_3;
  if (cVar6 != '\x01') {
    if (cVar6 == '\x02') {
      puVar11 = &DAT_14629fd00;
    }
    else if (cVar6 == '\x03') {
      puVar11 = &DAT_14629fd10;
    }
    else if (cVar6 == '\x04') {
      puVar11 = &DAT_14629fd20;
    }
  }
  if (param_1[5] != 0) {
    FUN_14203e230(param_1[5],puVar11);
  }
  if (param_1[0x24] != 0) {
    FUN_142088cf0(param_1[0x24],param_3 + 0xb8);
  }
  cVar6 = FText::IsEmpty(local_608);
  bVar17 = cVar6 == '\0';
  if ((param_1[0x1e] != 0) && (param_1[0x1f] != 0)) {
    piVar15 = (int *)(param_1[0x1f] + 8);
    LOCK();
    iVar7 = *piVar15;
    if (iVar7 == 0) {
      *piVar15 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      FUN_142f10d20(param_1 + 0x1d,bVar17);
      if (bVar17) {
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x1d,local_608,1,0);
      }
    }
  }
  if (param_1[9] != 0) {
    FUN_142056670(param_1[9],bVar17);
  }
  local_508 = (undefined4 *)CONCAT44(local_508._4_4_,(undefined4)local_508);
  uStack_500 = (ulonglong *)CONCAT44(uStack_500._4_4_,(undefined4)uStack_500);
  if ((param_1[0x12] != 0) &&
     (local_508 = (undefined4 *)CONCAT44(local_508._4_4_,(undefined4)local_508),
     uStack_500 = (ulonglong *)CONCAT44(uStack_500._4_4_,(undefined4)uStack_500), param_1[0x13] != 0
     )) {
    piVar15 = (int *)(param_1[0x13] + 8);
    LOCK();
    iVar7 = *piVar15;
    if (iVar7 == 0) {
      *piVar15 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    local_508 = (undefined4 *)CONCAT44(local_508._4_4_,(undefined4)local_508);
    uStack_500 = (ulonglong *)CONCAT44(uStack_500._4_4_,(undefined4)uStack_500);
    if (0 < iVar7) {
      if (iVar4 < 1) {
        FUN_142f10d20(param_1 + 0x11,0);
      }
      else {
        FUN_142f10d20(param_1 + 0x11,1);
        uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_368,
                            L"+{0} {0}|plural(one=Point,other=Points,many=Points) From Class Mod",
                            L"GFxSkillScreenTree",L"Class Mod Bonus String");
        puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_320,uVar10);
        local_228[0] = 0;
        local_668 = local_228;
        local_200 = 0;
        puStack_660 = (ulonglong *)local_1f8;
        local_5a0 = *puVar11;
        local_598 = puVar11[1];
        if (local_598 != 0) {
          LOCK();
          *(int *)(local_598 + 8) = *(int *)(local_598 + 8) + 1;
          UNLOCK();
        }
        local_220 = (longlong)iVar4;
        local_508 = local_668;
        uStack_500 = puStack_660;
        uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                 TArray<FFormatArgumentValue,FDefaultAllocator>(local_4f8,&local_508);
        uVar10 = FText::Format(local_380,&local_5a0,uVar10);
        FText::FText(local_458,uVar10);
        if (local_378 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_378 + 1;
          lVar8 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_378)(local_378);
            LOCK();
            piVar15 = (int *)((longlong)local_378 + 0xc);
            iVar7 = *piVar15;
            *piVar15 = *piVar15 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_378 + 8))(local_378,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_4f8);
        TOptional<FExpressionError>::Reset(local_218);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(puVar11);
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x11,local_458,1,0);
        if (local_450 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_450 + 1;
          lVar8 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_450)(local_450);
            LOCK();
            piVar15 = (int *)((longlong)local_450 + 0xc);
            iVar7 = *piVar15;
            *piVar15 = *piVar15 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_450 + 8))(local_450,1);
            }
          }
        }
        param_3 = local_730;
        if (local_360 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_360 + 1;
          lVar8 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_360)(local_360);
            LOCK();
            piVar15 = (int *)((longlong)local_360 + 0xc);
            iVar7 = *piVar15;
            *piVar15 = *piVar15 + -1;
            UNLOCK();
            param_3 = local_730;
            if (iVar7 == 1) {
              (**(code **)(*local_360 + 8))(local_360,1);
              param_3 = local_730;
            }
          }
        }
      }
    }
  }
  if (param_1[3] != 0) {
    FUN_142056670(param_1[3],uVar16);
  }
  if (*param_1 != 0) {
    if (*param_3 == '\x05') {
      local_6f0[8] = 0;
      local_6f0[9] = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6f0 + 8,0);
      FGenericPlatformString::Memcpy(local_6f0[8],L"ability",0x10);
      FUN_142088cf0(*param_1,local_6f0 + 8);
      lVar8 = local_6f0[8];
    }
    else if (param_3[0xb2] == '\0') {
      local_6f0[0xe] = 0;
      local_6f0[0xf] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6f0 + 0xe,0);
      FGenericPlatformString::Memcpy(local_6f0[0xe],L"slot",10);
      FUN_142088cf0(*param_1,local_6f0 + 0xe);
      lVar8 = local_6f0[0xe];
    }
    else if ((char)param_1[0x2b] == '\0') {
      local_6f0[0xc] = 0;
      local_6f0[0xd] = 0xd;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6f0 + 0xc,0);
      FGenericPlatformString::Memcpy(local_6f0[0xc],L"itemNoEffect",0x1a);
      FUN_142088cf0(*param_1,local_6f0 + 0xc);
      lVar8 = local_6f0[0xc];
    }
    else {
      local_6f0[10] = 0;
      local_6f0[0xb] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6f0 + 10,0);
      FGenericPlatformString::Memcpy(local_6f0[10],L"item",10);
      FUN_142088cf0(*param_1,local_6f0 + 10);
      lVar8 = local_6f0[10];
    }
    if (lVar8 != 0) {
      FMemory::Free();
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x159) = 1;
  if (local_600 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_600 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_600)(local_600);
      LOCK();
      piVar15 = (int *)((longlong)local_600 + 0xc);
      iVar7 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_600 + 8))(local_600,1);
      }
    }
  }
  if (local_618 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_618 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_618)(local_618);
      LOCK();
      piVar15 = (int *)((longlong)local_618 + 0xc);
      iVar7 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_618 + 8))(local_618,1);
      }
    }
  }
  if (local_588 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_588 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_588)(local_588);
      LOCK();
      piVar15 = (int *)((longlong)local_588 + 0xc);
      iVar7 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_588 + 8))(local_588,1);
      }
    }
  }
  if (local_650 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_650 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_650)(local_650);
      LOCK();
      piVar15 = (int *)((longlong)local_650 + 0xc);
      iVar7 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_650 + 8))(local_650,1);
      }
    }
  }
  return;
}



// FUNCTION 141047400 FUN_141047400 body=1139 status=ok
// SIG undefined FUN_141047400(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141047400(undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined1 auStack_2c8 [32];
  undefined4 local_2a8;
  undefined4 local_2a4;
  longlong *local_2a0;
  longlong *local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  longlong *local_278;
  LARGE_INTEGER local_270;
  undefined1 *local_268 [2];
  undefined1 local_258 [32];
  undefined8 local_238;
  undefined4 local_228;
  longlong *local_218;
  longlong *local_210;
  undefined1 local_208 [16];
  longlong local_1f8 [4];
  longlong *local_1d8;
  int local_1c8;
  undefined1 *local_1b8 [2];
  longlong local_1a8 [4];
  longlong *local_188;
  int local_178;
  undefined1 *local_168 [2];
  longlong local_158 [4];
  longlong *local_138;
  int local_128;
  LARGE_INTEGER local_118 [24];
  longlong local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  if ((param_2 != 0) && (local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2c8, param_3 != 0)) {
    local_2a4 = 0xffffffff;
    FUN_14170c210(&local_2a4,param_3);
    local_2a8 = 0xffffffff;
    FUN_14170c210(&local_2a8,param_2);
    uVar9 = local_2a4;
    uVar7 = local_2a8;
    plVar6 = (longlong *)0x0;
    local_2a8 = 0xffffffff;
    local_238 = 0;
    local_228 = 0;
    local_2a4 = 0xffffffff;
    puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_258);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_14461b890;
      *(undefined4 *)(puVar4 + 1) = uVar7;
      uVar7 = 0xffffffff;
      *(undefined4 *)((longlong)puVar4 + 0xc) = uVar9;
      uVar9 = 0xffffffff;
    }
    local_290 = 0;
    local_268[0] = &LAB_141031e10;
    local_288 = 0x32;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_290,0);
    FGenericPlatformString::Memcpy
              (local_290,L"FGFxSkillScreenInfoCardContainer::OnFocusChange()",100);
    FUN_140cdf730(local_118,&local_290,local_268);
    FUN_1416f8340(uVar9);
    FUN_1416f8340(uVar7);
    FUN_1416f8340(local_2a8);
    FUN_1416f8340(local_2a4);
    QueryPerformanceCounter(&local_270);
    local_118[0] = local_270;
    plVar5 = (longlong *)operator_new(0x18);
    plVar8 = plVar6;
    if (plVar5 != (longlong *)0x0) {
      TPromiseBase<int>::TPromiseBase<int>(plVar5);
      *(undefined1 *)(plVar5 + 2) = 0;
      plVar8 = plVar5;
    }
    plVar5 = (longlong *)operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *plVar5 = (longlong)&PTR_DestroyObject_1444f8938;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      plVar5[2] = (longlong)plVar8;
      plVar6 = plVar5;
    }
    local_2a0 = plVar8;
    local_298 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_2a0,plVar8,plVar8);
    *(undefined1 *)(local_2a0 + 2) = 1;
    local_278 = (longlong *)local_2a0[1];
    local_58 = *local_2a0;
    if (local_278 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_278 + 1) = (int)local_278[1] + 1;
      UNLOCK();
    }
    local_280 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_50,&local_278);
    plVar6 = local_278;
    if (local_278 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_278 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_278)(local_278);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_278 + 8))(local_278,1);
        }
      }
    }
    local_188 = (longlong *)0x0;
    local_178 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_1a8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_1444f8620;
      puVar4[1] = local_118;
    }
    local_1b8[0] = &LAB_140cee980;
    local_218 = local_2a0;
    local_210 = local_298;
    if (local_298 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_298 + 1) = (int)local_298[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_208,local_1b8);
    local_138 = (longlong *)0x0;
    local_128 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x70,local_158);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_CopyToEmptyStorage_1444f8578;
      puVar4[2] = local_218;
      puVar4[3] = local_210;
      if (local_210 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_210 + 1) = (int)local_210[1] + 1;
        UNLOCK();
      }
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar4 + 4,local_208);
    }
    local_168[0] = &LAB_140cee8d0;
    if (local_1c8 != 0) {
      plVar6 = local_1f8;
      if (local_1d8 != (longlong *)0x0) {
        plVar6 = local_1d8;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_1d8 != (longlong *)0x0) {
      FMemory::Free();
    }
    plVar6 = local_210;
    if (local_210 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_210 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_210)(local_210);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    if (local_178 != 0) {
      plVar6 = local_1a8;
      if (local_188 != (longlong *)0x0) {
        plVar6 = local_188;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_188 != (longlong *)0x0) {
      FMemory::Free();
    }
    plVar6 = local_298;
    if (local_298 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_298 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_298)(local_298);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    FUN_142084370(param_2,local_168);
    if (local_128 != 0) {
      plVar6 = local_158;
      if (local_138 != (longlong *)0x0) {
        plVar6 = local_138;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_138 != (longlong *)0x0) {
      FMemory::Free();
    }
    FUN_140d1b3a0(local_118);
    FUN_141045cb0(param_1,param_2,param_3 + 0x500);
    FUN_140ce1dc0(local_118);
  }
  return;
}



// FUNCTION 141047880 FUN_141047880 body=476 status=ok
// SIG undefined FUN_141047880(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141047880(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined1 auStack_f8 [32];
  undefined4 local_d8 [4];
  code *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_d8[0] = 0xffffffff;
  uVar8 = 0xffffffff;
  if (param_2 != 0) {
    FUN_14170c210(local_d8);
    uVar8 = local_d8[0];
  }
  lVar6 = 0;
  local_d8[0] = 0xffffffff;
  local_98 = (longlong *)0x0;
  local_88 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_b8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_144266c70;
    puVar4[1] = param_1;
    *(undefined4 *)(puVar4 + 2) = uVar8;
    uVar8 = 0xffffffff;
  }
  local_c8[0] = thunk_FUN_14102c110;
  FUN_1420849a0(param_1,local_78,local_c8);
  if (local_88 != 0) {
    plVar7 = local_b8;
    if (local_98 != (longlong *)0x0) {
      plVar7 = local_98;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_1416f8340(uVar8);
  FUN_1416f8340(local_d8[0]);
  lVar1 = DAT_146873ec8;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    lVar5 = 4;
    if (DVar3 != DAT_1468c21c0) goto LAB_14104798a;
  }
  lVar5 = lVar6;
LAB_14104798a:
  if (*(int *)(lVar5 + lVar1) == 0) {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_c8,local_78);
    if (local_88 != 0) {
      plVar7 = local_b8;
      if (local_98 != (longlong *)0x0) {
        plVar7 = local_98;
      }
      if (plVar7 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar7 + 8))();
      }
    }
    (*local_c8[0])(lVar6);
    if (local_88 != 0) {
      plVar7 = local_b8;
      if (local_98 != (longlong *)0x0) {
        plVar7 = local_98;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_c8);
    FUN_14208c4f0(param_1,local_c8);
  }
  if (local_38 != 0) {
    plVar7 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar7 = local_48;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141047a60 FUN_141047a60 body=113 status=ok
// SIG undefined FUN_141047a60(void)

undefined4 FUN_141047a60(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xbd8));
  lVar2 = *(longlong *)(param_1 + 0xbe0);
  if ((lVar2 != 0) && (lVar2 != param_2)) {
    FUN_141064ec0(lVar2,0);
  }
  *(longlong *)(param_1 + 0xbe0) = param_2;
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xbd8));
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0xee0);
  *(undefined4 *)(param_1 + 0xee0) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 141047b00 FUN_141047b00 body=44 status=ok
// SIG undefined FUN_141047b00(void)

void FUN_141047b00(longlong param_1)

{
  FUN_142ec1f90();
  *(undefined4 *)(param_1 + 0x6f4) = 5;
  *(undefined1 *)(param_1 + 0x688) = 0;
  FUN_141066f40(param_1);
  return;
}



// FUNCTION 141047b30 FUN_141047b30 body=1715 status=ok
// SIG undefined FUN_141047b30(void)

void FUN_141047b30(longlong *param_1)

{
  undefined8 uVar1;
  double dVar2;
  float fVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  undefined8 local_res20;
  longlong *local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong *local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [72];
  
  FUN_142ec1f90();
  fVar11 = 1.0;
  fVar12 = 0.0;
  lVar5 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
  if (lVar5 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_141047bb2;
  }
  lVar5 = 0;
LAB_141047bb2:
  local_128 = 0;
  local_120 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
  FGenericPlatformString::Memcpy(local_128,L"safeArea",0x12);
  local_138 = (longlong *)0x0;
  local_130 = 0;
  lVar6 = FUN_140e96f30(param_1,&local_128,0,6,&local_138);
  param_1[0xd9] = lVar6;
  plVar8 = local_138;
  for (iVar9 = (int)local_130; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_138 != (longlong *)0x0) {
    FMemory::Free(local_138);
  }
  if (local_128 != 0) {
    FMemory::Free();
  }
  if (lVar5 != 0) {
    fVar11 = (float)FUN_140d001c0(lVar5);
    *(float *)(param_1 + 0xdc) = fVar11;
    if ((fVar11 < *(float *)(lVar5 + 0x1218)) || (*(float *)(lVar5 + 0x121c) <= fVar11)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      fVar11 = *(float *)((longlong)param_1 + 0x6b4);
    }
    *(float *)(param_1 + 0xdc) = fVar11;
    puVar7 = (undefined8 *)FUN_142eb8d60(param_1,local_res10);
    uVar1 = *puVar7;
    fVar12 = (float)((ulonglong)uVar1 >> 0x20);
    *(undefined8 *)((longlong)param_1 + 0x6e4) = uVar1;
    fVar3 = (float)uVar1;
    if (fVar3 / fVar12 <= 1.7777778) {
      fVar11 = fVar3 * 0.00052083336;
    }
    else {
      fVar11 = fVar12 * 0.0009259259;
    }
    if (param_1[0xd9] != 0) {
      FUN_142f113c0(param_1[0xd9],(double)(fVar3 * *(float *)(param_1 + 0xdc)));
      FUN_142f0da80(param_1[0xd9],(double)(*(float *)(param_1 + 0xdc) * *(float *)(param_1 + 0xdd)))
      ;
    }
  }
  local_108 = 0;
  local_100 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
  FGenericPlatformString::Memcpy(local_108,L"background",0x16);
  local_118 = (longlong *)0x0;
  local_110 = 0;
  local_res18 = 0;
  lVar5 = FUN_140e96f30(param_1,&local_108,0,6,&local_118);
  param_1[0xda] = lVar5;
  plVar8 = local_118;
  for (iVar9 = (int)local_110; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free(local_118);
  }
  if (local_108 != 0) {
    FMemory::Free();
  }
  if (param_1[0xda] != 0) {
    FUN_142f113c0(param_1[0xda],(double)*(float *)((longlong)param_1 + 0x6e4));
    FUN_142f0da80(param_1[0xda],(double)*(float *)(param_1 + 0xdd));
  }
  local_e8 = 0;
  local_e0 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
  FGenericPlatformString::Memcpy(local_e8,L"TXT_Preview_Title",0x24);
  local_f8 = (longlong *)0x0;
  local_f0 = 0;
  local_res20 = 0;
  lVar5 = FUN_140ac4770(param_1,&local_e8,0,6,&local_f8);
  param_1[0xd7] = lVar5;
  plVar8 = local_f8;
  for (iVar9 = (int)local_f0; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_f8 != (longlong *)0x0) {
    FMemory::Free(local_f8);
  }
  if (local_e8 != 0) {
    FMemory::Free();
  }
  plVar8 = (longlong *)param_1[0xd7];
  dVar2 = (double)fVar11;
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x2b0))(plVar8,param_1 + 0xd0,1,0);
    dVar10 = (double)FUN_142eeea40(param_1[0xd7]);
    FUN_142f113c0(param_1[0xd7],dVar10 * dVar2);
    dVar10 = (double)FUN_142eeca30(param_1[0xd7]);
    FUN_142f0da80(param_1[0xd7],dVar10 * dVar2);
    FUN_14208ff10(param_1[0xd7],CONCAT44(fVar12,fVar11 * -444.0),fVar11 * -124.35);
  }
  local_c8 = 0;
  local_c0 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
  FGenericPlatformString::Memcpy(local_c8,L"TXT_Description",0x20);
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  local_88 = 0;
  lVar5 = FUN_140ac4770(param_1,&local_c8,0,6,&local_d8);
  param_1[0xd8] = lVar5;
  plVar8 = local_d8;
  for (iVar9 = (int)local_d0; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free(local_d8);
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  plVar8 = (longlong *)param_1[0xd8];
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x2b0))(plVar8,param_1 + 0xd3,1,0);
    dVar10 = (double)FUN_142eeea40(param_1[0xd8]);
    FUN_142f113c0(param_1[0xd8],dVar10 * (double)fVar11);
    dVar10 = (double)FUN_142eeca30(param_1[0xd8]);
    FUN_142f0da80(param_1[0xd8],dVar10 * (double)fVar11);
    FUN_14208ff10(param_1[0xd8],CONCAT44(fVar12,fVar11 * -524.15),fVar11 * -68.45);
  }
  local_a8 = 0;
  local_a0 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
  FGenericPlatformString::Memcpy(local_a8,L"hintBarWrapper",0x1e);
  local_b8 = (longlong *)0x0;
  local_b0 = 0;
  local_80 = 0;
  lVar5 = FUN_140e96f30(param_1,&local_a8,0,6,&local_b8);
  param_1[0xdb] = lVar5;
  plVar8 = local_b8;
  for (iVar9 = (int)local_b0; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free(local_b8);
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  if (param_1[0xdb] != 0) {
    dVar10 = (double)FUN_142eeea40();
    FUN_142f113c0(param_1[0xdb],dVar10 * dVar2);
    dVar10 = (double)FUN_142eeca30(param_1[0xdb]);
    FUN_142f0da80(param_1[0xdb],dVar10 * dVar2);
    FUN_14208ff10(param_1[0xdb],0,fVar11 * 115.2);
  }
  local_98 = 0;
  local_90 = 0;
  lVar5 = *param_1;
  puVar7 = (undefined8 *)FName::FName(local_78,&DAT_144662fc0,1);
  (**(code **)(lVar5 + 0x4e8))(param_1,*puVar7,&local_98);
  LOCK();
  *(undefined4 *)(param_1 + 0xb1) = 1;
  UNLOCK();
  return;
}



// FUNCTION 1410481f0 FUN_1410481f0 body=84 status=ok
// SIG undefined FUN_1410481f0(void)

void FUN_1410481f0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_18 = 0;
  local_10 = 0;
  puVar2 = (undefined8 *)FName::FName(local_res8,"Close",1);
  (**(code **)(lVar1 + 0x4e8))(param_1,*puVar2,&local_18);
  FUN_142ec20c0(param_1);
  return;
}



// FUNCTION 141048250 FUN_141048250 body=47 status=ok
// SIG undefined FUN_141048250(void)

void FUN_141048250(longlong *param_1)

{
  (**(code **)(*param_1 + 0x2b0))(param_1,0);
  (**(code **)(*param_1 + 0x2b8))(param_1,0);
  FUN_142ecd4d0(param_1);
  return;
}



// FUNCTION 141048280 FUN_141048280 body=8 status=ok
// SIG undefined FUN_141048280(void)

void FUN_141048280(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xed1) = 1;
  return;
}



// FUNCTION 141048290 FUN_141048290 body=8 status=ok
// SIG undefined FUN_141048290(void)

void FUN_141048290(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xed1) = 0;
  return;
}



// FUNCTION 1410482a0 FUN_1410482a0 body=518 status=ok
// SIG undefined FUN_1410482a0(void)

void FUN_1410482a0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142ef9e70();
  local_10 = 8;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"titleMC",0x10);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x170) = uVar1;
  plVar3 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"titleDsMC",0x14);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x178) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"subtitleMC",0x16);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x180) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410484b0 FUN_1410484b0 body=1961 status=ok
// SIG undefined FUN_1410484b0(void)

void FUN_1410484b0(longlong *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  bool bVar16;
  undefined8 local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong **pplVar17;
  int local_158;
  int local_154;
  longlong local_150;
  int local_148;
  int local_144;
  longlong local_140;
  longlong *local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong *local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  longlong *local_f8 [2];
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_d8 [2];
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 *local_98 [2];
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  
  FUN_142ec45d0();
  local_128 = 0;
  local_120 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
  FGenericPlatformString::Memcpy(local_128,L"hintBar",0x10);
  local_138 = (longlong *)0x0;
  local_130 = 0;
  local_e8 = 0;
  lVar6 = FUN_141021c90(param_1,&local_128,0,6,&local_138);
  param_1[199] = lVar6;
  plVar11 = local_138;
  for (iVar15 = (int)local_130; iVar15 != 0; iVar15 = iVar15 + -1) {
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    plVar11 = plVar11 + 2;
  }
  if (local_138 != (longlong *)0x0) {
    FMemory::Free(local_138);
  }
  if (local_128 != 0) {
    FMemory::Free();
  }
  local_108 = 0;
  local_100 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
  FGenericPlatformString::Memcpy(local_108,L"targetName",0x16);
  pplVar17 = &local_118;
  local_118 = (longlong *)0x0;
  local_110 = 0;
  local_e0 = 0;
  lVar6 = FUN_140ac4770(param_1,&local_108,0,6,pplVar17);
  param_1[200] = lVar6;
  plVar11 = local_118;
  for (iVar15 = (int)local_110; iVar15 != 0; iVar15 = iVar15 + -1) {
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    plVar11 = plVar11 + 2;
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free(local_118);
  }
  if (local_108 != 0) {
    FMemory::Free();
  }
  uVar7 = GetTransientPackage();
  FUN_1417846f0(uVar7,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar8 = FUN_142f25af0();
  lVar6 = FUN_1417985e0(uVar8,uVar7,0,0,(ulonglong)pplVar17 & 0xffffffff00000000,0,0,0,0);
  param_1[0xc6] = lVar6;
  lVar6 = FWeakObjectPtr::Get(param_1 + 0xbb);
  if (lVar6 == 0) {
    return;
  }
  local_res20 = lVar6;
  lVar9 = FUN_14145f370();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
      lVar9 + 0x88)) {
    bVar16 = false;
  }
  else {
    bVar16 = true;
  }
  if (!bVar16) {
    return;
  }
  if (param_1[200] == 0) {
    return;
  }
  if (param_1[199] == 0) {
    return;
  }
  if (param_1[0xc6] == 0) {
    return;
  }
  lVar9 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar9 != 0) {
    uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar9 = UWorld::GetGameState<APVPGameState>(uVar7);
    if (lVar9 != 0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnNumSpectatablePlayersChanged",L"::");
      pwVar2 = (wchar_t *)0x0;
      while (pwVar1 = pwVar10, pwVar1 != (wchar_t *)0x0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
        pwVar2 = pwVar1;
      }
      FName::FName(&local_res18,pwVar2 + 2,1);
      plVar11 = (longlong *)(lVar9 + 0xb90);
      FWeakObjectPtr::operator=(&local_158,0);
      local_150 = 0;
      FWeakObjectPtr::operator=(&local_158,param_1);
      local_150 = local_res18;
      local_res10 = 0;
      if ((local_res18 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_158), lVar6 != 0)) {
        UObject::FindFunction(lVar6,local_150);
      }
      piVar13 = (int *)*plVar11;
      iVar15 = *(int *)(lVar9 + 0xb98);
      for (piVar14 = piVar13; piVar14 != piVar13 + (longlong)iVar15 * 4; piVar14 = piVar14 + 4) {
        if (((*piVar14 == local_158) && (piVar14[1] == local_154)) ||
           ((cVar5 = FWeakObjectPtr::IsValid(piVar14), cVar5 == '\0' &&
            (cVar5 = FWeakObjectPtr::IsValid(&local_158), cVar5 == '\0')))) {
          bVar16 = true;
        }
        else {
          bVar16 = false;
        }
        if ((bVar16) && (*(longlong *)(piVar14 + 2) == local_150)) {
          bVar16 = true;
        }
        else {
          bVar16 = false;
        }
        if (bVar16) {
          if ((int)((longlong)piVar14 - (longlong)piVar13 >> 4) != -1) goto LAB_14104888c;
          break;
        }
      }
      iVar15 = *(int *)(lVar9 + 0xb98);
      *(int *)(lVar9 + 0xb98) = iVar15 + 1;
      if (*(int *)(lVar9 + 0xb9c) < iVar15 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar15);
      }
      piVar13 = (int *)((longlong)iVar15 * 0x10 + *plVar11);
      *piVar13 = local_158;
      piVar13[1] = local_154;
      *(longlong *)(piVar13 + 2) = local_150;
LAB_14104888c:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar11);
      *(undefined4 *)(param_1 + 0xc9) = *(undefined4 *)(lVar9 + 0xba4);
      lVar6 = local_res20;
    }
  }
  pplVar17 = (longlong **)(lVar6 + 0xad8);
  plVar11 = (longlong *)FMemory::Realloc(0,0x30);
  local_f8[0] = plVar11;
  if (plVar11 != (longlong *)0x0) {
    *plVar11 = (longlong)&PTR_FUN_143f4d290;
    FWeakObjectPtr::operator=(plVar11 + 1,param_1);
    plVar11[2] = (longlong)FUN_14104f5b0;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar11[4] = lVar9;
    *plVar11 = (longlong)&PTR_FUN_143f4d2d8;
  }
  if (local_f8 != pplVar17) {
    if (plVar11 == (longlong *)0x0) {
      if ((*(int *)(lVar6 + 0xae0) != 0) && (plVar11 = *pplVar17, plVar11 != (longlong *)0x0)) {
        (**(code **)(*plVar11 + 0x28))(plVar11,0);
        if (*pplVar17 != (longlong *)0x0) {
          plVar11 = (longlong *)FMemory::Realloc(*pplVar17,0,0);
          *pplVar17 = plVar11;
        }
        *(undefined4 *)(lVar6 + 0xae0) = 0;
      }
      goto LAB_14104894f;
    }
    (**(code **)(*plVar11 + 0x30))(plVar11,pplVar17);
  }
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x28))(plVar11,0);
    local_f8[0] = (longlong *)FMemory::Realloc(plVar11,0,0);
    if (local_f8[0] != (longlong *)0x0) {
      FMemory::Free(local_f8[0]);
    }
  }
LAB_14104894f:
  bVar16 = *(longlong *)(lVar6 + 0xae8) == 0;
  if (bVar16) {
    uVar7 = FUN_1404b03b0();
    uVar7 = FText::FText(local_c8,uVar7);
  }
  else {
    uVar7 = FUN_14270d290(*(longlong *)(lVar6 + 0xae8),local_d8);
    uVar7 = FText::FromString(local_b0,uVar7);
  }
  (**(code **)(*(longlong *)param_1[200] + 0x2b0))((longlong *)param_1[200],uVar7,1,0);
  if ((bVar16) && (local_c0 != (longlong *)0x0)) {
    LOCK();
    plVar11 = local_c0 + 1;
    lVar6 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar13 = (int *)((longlong)local_c0 + 0xc);
      iVar15 = *piVar13;
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  if ((!bVar16) && (local_a8 != (longlong *)0x0)) {
    LOCK();
    plVar11 = local_a8 + 1;
    lVar6 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar13 = (int *)((longlong)local_a8 + 0xc);
      iVar15 = *piVar13;
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*local_a8 + 8))(local_a8,1);
      }
    }
  }
  if ((!bVar16) && (local_d8[0] != 0)) {
    FMemory::Free();
  }
  lVar6 = FUN_140eccbe0(param_1);
  if (lVar6 != 0) {
    pwVar10 = _guard_xfg_dispatch_icall_nop(L"&UGFxRaidSpectatorWidget::OnInputDeviceChanged",L"::")
    ;
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar10, pwVar1 != (wchar_t *)0x0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res20,pwVar2 + 2,1);
    lVar9 = local_res20;
    plVar11 = (longlong *)(lVar6 + 0x5f8);
    FWeakObjectPtr::operator=(&local_148,0);
    local_140 = 0;
    FWeakObjectPtr::operator=(&local_148,param_1);
    local_140 = lVar9;
    if ((lVar9 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_148), lVar9 != 0)) {
      UObject::FindFunction(lVar9,local_140);
    }
    piVar13 = (int *)*plVar11;
    iVar15 = *(int *)(lVar6 + 0x600);
    for (piVar14 = piVar13; piVar14 != piVar13 + (longlong)iVar15 * 4; piVar14 = piVar14 + 4) {
      if (((*piVar14 == local_148) && (piVar14[1] == local_144)) ||
         ((cVar5 = FWeakObjectPtr::IsValid(piVar14), cVar5 == '\0' &&
          (cVar5 = FWeakObjectPtr::IsValid(&local_148), cVar5 == '\0')))) {
        bVar16 = true;
      }
      else {
        bVar16 = false;
      }
      if ((bVar16) && (*(longlong *)(piVar14 + 2) == local_140)) {
        bVar16 = true;
      }
      else {
        bVar16 = false;
      }
      if (bVar16) {
        if ((int)((longlong)piVar14 - (longlong)piVar13 >> 4) != -1) goto LAB_141048bdc;
        break;
      }
    }
    iVar15 = *(int *)(lVar6 + 0x600);
    *(int *)(lVar6 + 0x600) = iVar15 + 1;
    if (*(int *)(lVar6 + 0x604) < iVar15 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar15);
    }
    piVar13 = (int *)((longlong)iVar15 * 0x10 + *plVar11);
    *piVar13 = local_148;
    piVar13[1] = local_144;
    *(longlong *)(piVar13 + 2) = local_140;
LAB_141048bdc:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar11);
  }
  FWeakObjectPtr::operator=(&local_res10,param_1);
  uVar3 = (undefined4)local_res10;
  uVar4 = local_res10._4_4_;
  local_68 = 0;
  local_58 = 0;
  puVar12 = (undefined8 *)FUN_140438ef0(0x18,local_88);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &PTR_FUN_1444f8920;
    puVar12[1] = param_1;
    *(undefined4 *)(puVar12 + 2) = uVar3;
    *(undefined4 *)((longlong)puVar12 + 0x14) = uVar4;
  }
  local_98[0] = &LAB_141032490;
  FUN_14204c280(local_98);
  return;
}



// FUNCTION 141048c60 FUN_141048c60 body=679 status=ok
// SIG undefined FUN_141048c60(void)

void FUN_141048c60(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142ec45d0();
  local_10 = 0xd;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"reloadIconMC",0x1a);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140e96f30(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x650) = uVar1;
  plVar3 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"keybindingMC",0x1a);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ac4770(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x658) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"reloadNotificationMC",0x2a);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140e96f30(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x660) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0x1e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"reloadNotificationMC.reloadTF",0x3c);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ac4770(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x668) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 0x672) = 0;
  return;
}



// FUNCTION 141048f10 FUN_141048f10 body=89 status=ok
// SIG undefined FUN_141048f10(void)

void FUN_141048f10(longlong param_1)

{
  longlong lVar1;
  
  FString::operator=(param_1 + 0x5b8,param_1 + 0x898);
  FUN_142ec45d0(param_1);
  if (*(char *)(param_1 + 0x988) != '\0') {
    lVar1 = FUN_140eccc40(param_1);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1428) != 0)) {
      FUN_1411eaf00(*(longlong *)(lVar1 + 0x1428),param_1);
      return;
    }
  }
  return;
}



// FUNCTION 141048f70 FUN_141048f70 body=185 status=ok
// SIG undefined FUN_141048f70(void)

void FUN_141048f70(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FUN_1410493f0();
  FWeakObjectPtr::operator=(&local_res8,param_1);
  uVar1 = local_res8;
  local_28 = 0;
  local_18 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444f8920;
    puVar2[1] = param_1;
    *(uint *)(puVar2 + 2) = uVar1;
    *(undefined4 *)((longlong)puVar2 + 0x14) = local_resc;
  }
  local_58[0] = &LAB_141031dd0;
  FUN_14208c5d0(param_1,local_58);
  if (*(char *)(param_1 + 0x1f0) != '\0') {
    *(undefined1 *)(param_1 + 0x1f0) = 0;
    local_res8 = local_res8 & 0xffffff00;
    FUN_140801b20(&local_res8,0);
  }
  return;
}



// FUNCTION 141049030 FUN_141049030 body=185 status=ok
// SIG undefined FUN_141049030(void)

void FUN_141049030(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FUN_1410493f0();
  FWeakObjectPtr::operator=(&local_res8,param_1);
  uVar1 = local_res8;
  local_28 = 0;
  local_18 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444f8920;
    puVar2[1] = param_1;
    *(uint *)(puVar2 + 2) = uVar1;
    *(undefined4 *)((longlong)puVar2 + 0x14) = local_resc;
  }
  local_58[0] = &LAB_141031f30;
  FUN_14208c5d0(param_1,local_58);
  if (*(char *)(param_1 + 0x1f0) != '\0') {
    *(undefined1 *)(param_1 + 0x1f0) = 0;
    local_res8 = local_res8 & 0xffffff00;
    FUN_140801b20(&local_res8,0);
  }
  return;
}



// FUNCTION 1410490f0 FUN_1410490f0 body=434 status=ok
// SIG undefined FUN_1410490f0(void)

void FUN_1410490f0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142ec3ee0();
  local_10 = 7;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"header",0xe);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x418) = uVar1;
  plVar3 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"description",0x18);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x420) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  ATribePawnBP_C__pf2348183285::bpf__SetVirtualHeadphoneEnabled__pf(param_1,1);
  uVar1 = FUN_1404b03b0();
  FUN_142ed51f0(param_1,uVar1,0);
  FUN_142ed2620(param_1,0x40);
  FUN_142ed2600(param_1,3);
                    /* WARNING: Could not recover jumptable at 0x00014104929e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x170) + 0x38))((longlong *)(param_1 + 0x170),1);
  return;
}



// FUNCTION 1410492b0 FUN_1410492b0 body=145 status=ok
// SIG undefined FUN_1410492b0(void)

void FUN_1410492b0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FUN_1410493f0();
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
  }
  local_58[0] = &LAB_141031fc0;
  FUN_14208c5d0(param_1,local_58);
  return;
}



// FUNCTION 141049350 FUN_141049350 body=145 status=ok
// SIG undefined FUN_141049350(void)

void FUN_141049350(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FUN_1410493f0();
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
  }
  local_58[0] = &LAB_141032570;
  FUN_14208c5d0(param_1,local_58);
  return;
}



// FUNCTION 1410493f0 FUN_1410493f0 body=443 status=ok
// SIG undefined FUN_1410493f0(void)

void FUN_1410493f0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_78;
  undefined4 uStack_70;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  FUN_142ef9e70();
  lVar4 = *(longlong *)(param_1 + 0x38);
  if (lVar4 != 0) {
    lVar2 = ACineCameraActor::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_141049455;
  }
  lVar4 = 0;
LAB_141049455:
  FWeakObjectPtr::operator=(param_1 + 0x184,lVar4);
  local_78 = &LAB_1404c2180;
  uStack_70 = 0;
  FUN_140cdd210(param_1 + 400,param_1,&local_78);
  local_78 = &LAB_1404c218c;
  uStack_70 = 0;
  FUN_140cdd210(param_1 + 0x1a0,param_1,&local_78);
  local_78 = &LAB_14102fc44;
  uStack_70 = 0;
  FUN_140cdd210(param_1 + 0x1b0,param_1,&local_78);
  local_78 = &LAB_1404c2114;
  uStack_70 = 0;
  FUN_140cdd210(param_1 + 0x1c0,param_1,&local_78);
  local_78 = &LAB_14102fc50;
  uStack_70 = 0;
  FUN_140cdd210(param_1 + 0x1d0,param_1,&local_78);
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_38 = 0;
  local_28 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_58);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1444f8920;
    puVar3[1] = param_1;
    *(undefined4 *)(puVar3 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar3 + 0x14) = local_resc;
  }
  local_68[0] = &LAB_141032080;
  FUN_14208c5d0(param_1,local_68);
  return;
}



// FUNCTION 1410495b0 FUN_1410495b0 body=185 status=ok
// SIG undefined FUN_1410495b0(void)

void FUN_1410495b0(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FUN_1410493f0();
  FWeakObjectPtr::operator=(&local_res8,param_1);
  uVar1 = local_res8;
  local_28 = 0;
  local_18 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444f8920;
    puVar2[1] = param_1;
    *(uint *)(puVar2 + 2) = uVar1;
    *(undefined4 *)((longlong)puVar2 + 0x14) = local_resc;
  }
  local_58[0] = &LAB_141032520;
  FUN_14208c5d0(param_1,local_58);
  if (*(char *)(param_1 + 0x1f0) != '\0') {
    *(undefined1 *)(param_1 + 0x1f0) = 0;
    local_res8 = local_res8 & 0xffffff00;
    FUN_140801b20(&local_res8,0);
  }
  return;
}



// FUNCTION 141049670 FUN_141049670 body=185 status=ok
// SIG undefined FUN_141049670(void)

void FUN_141049670(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FUN_1410493f0();
  FWeakObjectPtr::operator=(&local_res8,param_1);
  uVar1 = local_res8;
  local_28 = 0;
  local_18 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444f8920;
    puVar2[1] = param_1;
    *(uint *)(puVar2 + 2) = uVar1;
    *(undefined4 *)((longlong)puVar2 + 0x14) = local_resc;
  }
  local_58[0] = &LAB_141031dc0;
  FUN_14208c5d0(param_1,local_58);
  if (*(char *)(param_1 + 0x1f0) != '\0') {
    *(undefined1 *)(param_1 + 0x1f0) = 0;
    local_res8 = local_res8 & 0xffffff00;
    FUN_140801b20(&local_res8,0);
  }
  return;
}



// FUNCTION 141049730 FUN_141049730 body=185 status=ok
// SIG undefined FUN_141049730(void)

void FUN_141049730(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FUN_1410493f0();
  FWeakObjectPtr::operator=(&local_res8,param_1);
  uVar1 = local_res8;
  local_28 = 0;
  local_18 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444f8920;
    puVar2[1] = param_1;
    *(uint *)(puVar2 + 2) = uVar1;
    *(undefined4 *)((longlong)puVar2 + 0x14) = local_resc;
  }
  local_58[0] = &LAB_141032000;
  FUN_14208c5d0(param_1,local_58);
  if (*(char *)(param_1 + 0x1f0) != '\0') {
    *(undefined1 *)(param_1 + 0x1f0) = 0;
    local_res8 = local_res8 & 0xffffff00;
    FUN_140801b20(&local_res8,0);
  }
  return;
}



// FUNCTION 1410497f0 FUN_1410497f0 body=1365 status=ok
// SIG undefined FUN_1410497f0(void)

void FUN_1410497f0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  int iVar6;
  longlong **pplVar7;
  longlong lVar8;
  longlong *local_res8;
  longlong *local_68;
  int local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38 [2];
  
  puVar5 = &stack0xffffffffffffffd8;
  FUN_142ec45d0();
  local_40 = 0xe;
  local_48 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"backgroundBar",0x1c);
  local_38[0] = 0;
  local_38[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"maxValueLabel",0x1c);
  lVar8 = 2;
  local_68 = (longlong *)0x0;
  local_60 = 2;
  TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_68,2,0);
  pplVar7 = &local_48;
  iVar6 = 2;
  plVar4 = local_68;
  do {
    *plVar4 = 0;
    iVar1 = *(int *)(pplVar7 + 1);
    local_res8 = *pplVar7;
    *(int *)(plVar4 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)plVar4 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar4,iVar1,0);
      _guard_xfg_dispatch_icall_nop((void *)*plVar4,local_res8,(longlong)iVar1 * 2);
    }
    plVar4 = plVar4 + 2;
    pplVar7 = pplVar7 + 2;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  do {
    plVar4 = (longlong *)(puVar5 + -0x10);
    puVar5 = puVar5 + -0x10;
    lVar8 = lVar8 + -1;
    if (*plVar4 != 0) {
      FMemory::Free();
    }
  } while (lVar8 != 0);
  uVar2 = AReplicationGraphDebugActor::GetPrivateStaticClass();
  uVar2 = FUN_140f13c90(param_1,param_1 + 0x6b8,uVar2,2,&local_68);
  *(undefined8 *)(param_1 + 0x6d8) = uVar2;
  local_48 = (longlong *)0x0;
  local_40 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"edgeFlash",0x14);
  local_58 = (longlong *)0x0;
  local_50 = 0;
  uVar2 = FUN_140e96f30(param_1,&local_48,0,6,&local_58);
  *(undefined8 *)(param_1 + 0x6e0) = uVar2;
  plVar4 = local_58;
  for (iVar6 = (int)local_50; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_58 = (longlong *)0x0;
  local_50 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"hitDetectAnim",0x1c);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  uVar2 = FUN_140e96f30(param_1,&local_58,0,6,&local_48);
  *(undefined8 *)(param_1 + 0x6e8) = uVar2;
  plVar4 = local_48;
  for (iVar6 = (int)local_40; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_58 = (longlong *)0x0;
  local_50 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"shieldGlowAnim",0x1e);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  uVar2 = FUN_140e96f30(param_1,&local_58,0,6,&local_48);
  *(undefined8 *)(param_1 + 0x6f0) = uVar2;
  plVar4 = local_48;
  for (iVar6 = (int)local_40; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_58 = (longlong *)0x0;
  local_50 = 0x17;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"shieldInitializationMC",0x2e);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  uVar2 = FUN_140e96f30(param_1,&local_58,0,6,&local_48);
  *(undefined8 *)(param_1 + 0x5f0) = uVar2;
  plVar4 = local_48;
  for (iVar6 = (int)local_40; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"OnShieldEquippedOnSlot",1);
  FWeakObjectPtr::operator=(param_1 + 0x630,param_1);
  *(undefined8 *)(param_1 + 0x638) = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"OnShieldUnequippedOnSlot",1);
  FWeakObjectPtr::operator=(param_1 + 0x640,param_1);
  *(undefined8 *)(param_1 + 0x648) = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"OnShieldsNormal",1);
  FWeakObjectPtr::operator=(param_1 + 0x650,param_1);
  *(undefined8 *)(param_1 + 0x658) = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"OnShieldsLow",1);
  FWeakObjectPtr::operator=(param_1 + 0x660,param_1);
  *(undefined8 *)(param_1 + 0x668) = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"OnShieldsVeryLow",1);
  FWeakObjectPtr::operator=(param_1 + 0x670,param_1);
  *(undefined8 *)(param_1 + 0x678) = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"OnShieldsDepleted",1);
  FWeakObjectPtr::operator=(param_1 + 0x680,param_1);
  *(undefined8 *)(param_1 + 0x688) = *puVar3;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"OnTakeShieldDamage",1);
  FWeakObjectPtr::operator=(param_1 + 0x690,param_1);
  *(undefined8 *)(param_1 + 0x698) = *puVar3;
  plVar4 = local_68;
  for (iVar6 = local_60; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}



// FUNCTION 141049d50 FUN_141049d50 body=1018 status=ok
// SIG undefined FUN_141049d50(void)

void FUN_141049d50(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  
  uVar2 = 0;
  FUN_142ef9e70();
  local_38 = (longlong *)0x0;
  local_30 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"skills",0xe);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  uVar1 = FUN_140ecc430(param_1,&local_38,0,6,&local_48);
  *(undefined8 *)(param_1 + 0x170) = uVar1;
  plVar5 = local_48;
  for (iVar4 = (int)local_40; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  uVar7 = uVar2;
  if (*(longlong *)(param_1 + 0x170) != 0) {
    local_48 = (longlong *)0x0;
    local_40 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"chargeIconWrapper",0x24);
    local_38 = (longlong *)0x0;
    local_30 = 0;
    uVar2 = FUN_140ecc430(*(undefined8 *)(param_1 + 0x170),&local_48,0,6,&local_38);
    uVar7 = 3;
  }
  *(ulonglong *)(param_1 + 0x188) = uVar2;
  if ((uVar7 & 2) != 0) {
    uVar7 = (ulonglong)((uint)uVar7 & 0xfffffffd);
    plVar5 = local_38;
    for (iVar4 = (int)local_30; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  if (((uVar7 & 1) != 0) && (local_48 != (longlong *)0x0)) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    plVar5 = (longlong *)(param_1 + 0x178);
    *(undefined4 *)(param_1 + 0x180) = 0;
    if (*(int *)(param_1 + 0x184) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar5,0);
    }
    while( true ) {
      local_38 = (longlong *)0x0;
      local_30 = 0;
      FString::PrintfImpl(&local_48,L"skill%i",*(int *)(param_1 + 0x180) + 1);
      lVar3 = FUN_140ecc430(*(undefined8 *)(param_1 + 0x170),&local_48,0,6,&local_38);
      if (local_48 != (longlong *)0x0) {
        FMemory::Free();
      }
      plVar6 = local_38;
      for (iVar4 = (int)local_30; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 2;
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free(local_38);
      }
      if (lVar3 == 0) break;
      iVar4 = *(int *)(param_1 + 0x180);
      *(int *)(param_1 + 0x180) = iVar4 + 1;
      if (*(int *)(param_1 + 0x184) < iVar4 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5,iVar4);
      }
      *(longlong *)(*plVar5 + (longlong)iVar4 * 8) = lVar3;
    }
    plVar5 = (longlong *)(param_1 + 400);
    *(undefined4 *)(param_1 + 0x198) = 0;
    if (*(int *)(param_1 + 0x19c) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar5,0);
    }
    if (*(longlong *)(param_1 + 0x188) != 0) {
      while( true ) {
        local_38 = (longlong *)0x0;
        local_30 = 0;
        FString::PrintfImpl(&local_48,L"chargeIcon%i",*(int *)(param_1 + 0x198) + 1);
        lVar3 = FUN_140ecc430(*(undefined8 *)(param_1 + 0x188),&local_48,0,6,&local_38);
        if (local_48 != (longlong *)0x0) {
          FMemory::Free();
        }
        plVar6 = local_38;
        for (iVar4 = (int)local_30; iVar4 != 0; iVar4 = iVar4 + -1) {
          if (*plVar6 != 0) {
            FMemory::Free();
          }
          plVar6 = plVar6 + 2;
        }
        if (local_38 != (longlong *)0x0) {
          FMemory::Free(local_38);
        }
        if (lVar3 == 0) break;
        iVar4 = *(int *)(param_1 + 0x198);
        *(int *)(param_1 + 0x198) = iVar4 + 1;
        if (*(int *)(param_1 + 0x19c) < iVar4 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5,iVar4);
        }
        *(longlong *)(*plVar5 + (longlong)iVar4 * 8) = lVar3;
      }
    }
    local_48 = (longlong *)0x0;
    local_40 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"secondaryFill",0x1c);
    local_38 = (longlong *)0x0;
    local_30 = 0;
    uVar1 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x170),&local_48,0,6,&local_38);
    *(undefined8 *)(param_1 + 0x1a0) = uVar1;
    plVar5 = local_38;
    for (iVar4 = (int)local_30; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14104a150 FUN_14104a150 body=681 status=ok
// SIG undefined FUN_14104a150(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14104a150(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  longlong **local_a8;
  undefined8 local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  FUN_142ec45d0();
  local_80 = 0x1c;
  local_88 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  FGenericPlatformString::Memcpy(local_88,L"skillDurationBarsNumWrapper",0x38);
  local_a8 = (longlong **)&local_98;
  local_98 = (longlong *)0x0;
  local_90 = 0;
  uVar3 = FUN_140e96f30(param_1,&local_88,0,6);
  *(undefined8 *)(param_1 + 0x630) = uVar3;
  plVar6 = local_98;
  for (iVar5 = (int)local_90; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_98 = (longlong *)0x0;
  local_90 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
  FGenericPlatformString::Memcpy(local_98,L"leftSkills",0x16);
  local_a8 = &local_88;
  local_88 = (longlong *)0x0;
  local_80 = 0;
  uVar3 = FUN_141020d70(param_1,&local_98,0,6);
  *(undefined8 *)(param_1 + 0x638) = uVar3;
  plVar6 = local_88;
  for (iVar5 = (int)local_80; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_98 = (longlong *)0x0;
  local_90 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
  FGenericPlatformString::Memcpy(local_98,L"rightSkills",0x18);
  local_a8 = &local_88;
  local_88 = (longlong *)0x0;
  local_80 = 0;
  uVar3 = FUN_141020d70(param_1,&local_98,0,6);
  *(undefined8 *)(param_1 + 0x640) = uVar3;
  plVar6 = local_88;
  for (iVar5 = (int)local_80; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  FWeakObjectPtr::operator=(&local_98,param_1);
  uVar1 = (undefined4)local_98;
  uVar2 = local_98._4_4_;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_68);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_1444f8920;
    puVar4[1] = param_1;
    *(undefined4 *)(puVar4 + 2) = uVar1;
    *(undefined4 *)((longlong)puVar4 + 0x14) = uVar2;
  }
  local_78[0] = &LAB_141031ec0;
  FUN_14208c260(param_1,local_78);
  if (local_38 != 0) {
    plVar6 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar6 = local_48;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14104a400 FUN_14104a400 body=124 status=ok
// SIG undefined FUN_14104a400(void)

void FUN_14104a400(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  FUN_142ec3600();
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    lVar4 = FUN_14139c4f0();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      cVar3 = (**(code **)(*plVar1 + 0x3f8))(plVar1);
      if (cVar3 != '\0') {
        *(undefined1 *)(param_1 + 0x2d4) = 1;
      }
    }
  }
  FUN_142f10940(param_1,1);
  return;
}



// FUNCTION 14104a480 FUN_14104a480 body=532 status=ok
// SIG undefined FUN_14104a480(void)

void FUN_14104a480(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_142ef9e70();
  puVar2 = (undefined8 *)FUN_142085870(param_1,local_38,L"iconBGLocked");
  if ((undefined8 *)(param_1 + 0x170) != puVar2) {
    *(undefined8 *)(param_1 + 0x170) = *puVar2;
    *puVar2 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x178,puVar2 + 1);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  plVar3 = (longlong *)FUN_142085870(param_1,local_28,L"skillIconSelected");
  plVar7 = (longlong *)(param_1 + 0x180);
  if (plVar7 != plVar3) {
    *plVar7 = *plVar3;
    *plVar3 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x188,plVar3 + 1);
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if (*plVar7 != 0) {
    local_58 = 0;
    local_50 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"iconArt",0x10);
    local_68 = (longlong *)0x0;
    local_60 = 0;
    lVar4 = FUN_140f55da0(*plVar7,&local_58,0,6,&local_68);
    plVar7 = local_68;
    for (iVar6 = (int)local_60; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free(local_68);
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
    if (lVar4 != 0) {
      local_48[0] = 0;
      local_48[1] = 0x15;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
      FGenericPlatformString::Memcpy(local_48[0],L"SkillIconArtSelected",0x2a);
      uVar5 = FUN_140f986f0(lVar4,L"SkillIcons",local_48,0);
      *(undefined8 *)(param_1 + 400) = uVar5;
      if (local_48[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 14104a6a0 FUN_14104a6a0 body=860 status=ok
// SIG undefined FUN_14104a6a0(void)

void FUN_14104a6a0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  longlong local_18 [2];
  
  FUN_142ec3600();
  *(undefined1 *)(param_1 + 0x198) = 1;
  uVar6 = FUN_142085870(param_1,&local_68,L"skillPointsText");
  FUN_142ede260(param_1 + 800,uVar6);
  plVar2 = (longlong *)CONCAT44(uStack_5c,uStack_60);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar2 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  cVar5 = FUN_14208d2d0(param_1,param_1 + 0x3d8,L"selectionButton1");
  if (cVar5 != '\0') {
    FUN_142051fa0(*(undefined8 *)(param_1 + 0x3d8),1);
    uVar6 = FUN_1420392d0(*(undefined8 *)(param_1 + 0x3d8),local_58,L"hintWrapper.hintGlyph");
    FUN_142ede260(param_1 + 1000,uVar6);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_50 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
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
    uVar6 = FUN_1420392d0(*(undefined8 *)(param_1 + 0x3d8),local_48,L"buttonHelpText");
    FUN_142ede260(param_1 + 0x400,uVar6);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_40 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    FUN_142051fa0(*(undefined8 *)(param_1 + 0x3d8),1);
  }
  cVar5 = FUN_14208d2d0(param_1,param_1 + 0x418,L"selectionButton2");
  if (cVar5 != '\0') {
    FUN_142051fa0(*(undefined8 *)(param_1 + 0x418),1);
    uVar6 = FUN_1420392d0(*(undefined8 *)(param_1 + 0x418),local_38,L"hintWrapper.hintGlyph");
    FUN_142ede260(param_1 + 0x428,uVar6);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_30 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
    uVar6 = FUN_1420392d0(*(undefined8 *)(param_1 + 0x418),local_28,L"buttonHelpText");
    FUN_142ede260(param_1 + 0x440,uVar6);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_20 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
    FUN_142051fa0(*(undefined8 *)(param_1 + 0x418),1);
  }
  uStack_60 = 0;
  local_68 = FUN_1410384f0;
  plVar2 = (longlong *)(param_1 + 0x188);
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_14461b688;
    FWeakObjectPtr::operator=(plVar7 + 1,param_1);
    *(undefined4 *)(plVar7 + 2) = (undefined4)local_68;
    *(undefined4 *)((longlong)plVar7 + 0x14) = local_68._4_4_;
    *(undefined4 *)(plVar7 + 3) = uStack_60;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_5c;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar8;
  }
  if (local_18 != plVar2) {
    if (plVar7 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 400) != 0) &&
         (plVar4 = (longlong *)*plVar2, plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        if (*plVar2 != 0) {
          lVar8 = FMemory::Realloc(*plVar2,0,0);
          *plVar2 = lVar8;
        }
        *(undefined4 *)(param_1 + 400) = 0;
      }
    }
    else {
      (**(code **)(*plVar7 + 0x30))(plVar7,plVar2);
    }
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    lVar8 = FMemory::Realloc(plVar7,0,0);
    if (lVar8 != 0) {
      FMemory::Free(lVar8);
    }
  }
  return;
}



// FUNCTION 14104aa00 FUN_14104aa00 body=1424 status=ok
// SIG undefined FUN_14104aa00(void)

void FUN_14104aa00(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FUN_142ec5080();
  uStack_10 = 0x10;
  local_18 = (code *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"skillIconLocked",0x20);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar2 = FUN_140ecbdf0(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x308) = uVar2;
  plVar6 = local_28;
  for (iVar5 = (int)local_20; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (code *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"skillIconColored",0x22);
  local_18 = (code *)0x0;
  uStack_10 = 0;
  uVar2 = FUN_140ecbdf0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x310) = uVar2;
  plVar6 = (longlong *)local_18;
  for (iVar5 = (int)uStack_10; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_18 != (code *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"skillIconSelected",0x24);
  local_18 = (code *)0x0;
  uStack_10 = 0;
  uVar2 = FUN_140ecbdf0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x318) = uVar2;
  plVar6 = (longlong *)local_18;
  for (iVar5 = (int)uStack_10; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_18 != (code *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"iconBGLocked",0x1a);
  local_18 = (code *)0x0;
  uStack_10 = 0;
  uVar2 = FUN_140ecbdf0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 800) = uVar2;
  plVar6 = (longlong *)local_18;
  for (iVar5 = (int)uStack_10; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_18 != (code *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"iconBGColored",0x1c);
  local_18 = (code *)0x0;
  uStack_10 = 0;
  uVar2 = FUN_140ecbdf0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x328) = uVar2;
  plVar6 = (longlong *)local_18;
  for (iVar5 = (int)uStack_10; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_18 != (code *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"iconBGSelected",0x1e);
  local_18 = (code *)0x0;
  uStack_10 = 0;
  uVar2 = FUN_140ecbdf0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x330) = uVar2;
  plVar6 = (longlong *)local_18;
  for (iVar5 = (int)uStack_10; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_18 != (code *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x308) != 0) {
    local_18 = (code *)0x0;
    uStack_10 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"item",10);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x308),&local_18);
    if (local_18 != (code *)0x0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x310) != 0) {
    local_18 = (code *)0x0;
    uStack_10 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"item",10);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x310),&local_18);
    if (local_18 != (code *)0x0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x318) != 0) {
    local_18 = (code *)0x0;
    uStack_10 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"item",10);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x318),&local_18);
    if (local_18 != (code *)0x0) {
      FMemory::Free();
    }
  }
  uStack_10 = uStack_10 & 0xffffffff00000000;
  local_18 = FUN_141038b10;
  plVar6 = (longlong *)(param_1 + 0x188);
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_14461b688;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    *(undefined4 *)(plVar3 + 2) = (undefined4)local_18;
    *(undefined4 *)((longlong)plVar3 + 0x14) = local_18._4_4_;
    *(int *)(plVar3 + 3) = (int)uStack_10;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_10._4_4_;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar4;
  }
  if (&local_18 != plVar6) {
    if (plVar3 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 400) != 0) &&
         (plVar1 = (longlong *)*plVar6, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*plVar6 != 0) {
          lVar4 = FMemory::Realloc(*plVar6,0,0);
          *plVar6 = lVar4;
        }
        *(undefined4 *)(param_1 + 400) = 0;
      }
    }
    else {
      (**(code **)(*plVar3 + 0x30))(plVar3,plVar6);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar4 = FMemory::Realloc(plVar3,0,0);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  return;
}



// FUNCTION 14104af90 FUN_14104af90 body=691 status=ok
// SIG undefined FUN_14104af90(void)

void FUN_14104af90(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  longlong *local_30;
  
  FUN_142ec3600();
  local_80 = 0xe;
  local_88 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  FGenericPlatformString::Memcpy(local_88,L"lockedOverlay",0x1c);
  local_98 = (longlong *)0x0;
  local_90 = 0;
  uVar4 = FUN_140ecbdf0(param_1,&local_88,0,6,&local_98);
  *(undefined8 *)(param_1 + 0x2d8) = uVar4;
  plVar5 = local_98;
  for (iVar6 = (int)local_90; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  local_68 = 0;
  local_60 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  FGenericPlatformString::Memcpy(local_68,L"slotIndicator",0x1c);
  local_78 = (longlong *)0x0;
  local_70 = 0;
  uVar4 = FUN_140ecbdf0(param_1,&local_68,0,6,&local_78);
  *(undefined8 *)(param_1 + 0x2e8) = uVar4;
  plVar5 = local_78;
  for (iVar6 = (int)local_70; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  FUN_142085870(param_1,&local_38,L"icon");
  if (local_38 != 0) {
    FUN_14203e4e0(local_38,L"empty");
    local_48 = 0;
    local_40 = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"receiveHighlight",0x22);
    local_58 = (longlong *)0x0;
    local_50 = 0;
    uVar4 = FUN_140f55da0(local_38,&local_48,0,6,&local_58);
    *(undefined8 *)(param_1 + 0x2e0) = uVar4;
    plVar5 = local_58;
    for (iVar6 = (int)local_50; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free(local_58);
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    plVar3 = local_30;
    *(longlong *)(param_1 + 800) = local_38;
    plVar5 = *(longlong **)(param_1 + 0x328);
    if (local_30 != plVar5) {
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
        UNLOCK();
        plVar5 = *(longlong **)(param_1 + 0x328);
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *(longlong **)(param_1 + 0x328) = plVar3;
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar2 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return;
}



// FUNCTION 14104b250 FUN_14104b250 body=2603 status=ok
// SIG undefined FUN_14104b250(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14104b250(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_e8 [32];
  longlong **local_c8;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  FUN_142ec5080();
  lVar6 = 0;
  local_90 = 7;
  local_98 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
  FGenericPlatformString::Memcpy(local_98,L"skill0",0xe);
  local_c8 = &local_a8;
  local_a8 = (longlong *)0x0;
  local_a0 = 0;
  plVar9 = (longlong *)(param_1 + 0x308);
  lVar1 = FUN_141021650(param_1,&local_98,0,6);
  *plVar9 = lVar1;
  plVar8 = local_a8;
  for (iVar4 = (int)local_a0; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free(local_a8);
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_a8 = (longlong *)0x0;
  local_a0 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
  FGenericPlatformString::Memcpy(local_a8,L"skill1",0xe);
  local_c8 = &local_98;
  local_98 = (longlong *)0x0;
  local_90 = 0;
  uVar2 = FUN_141021650(param_1,&local_a8,0,6);
  *(undefined8 *)(param_1 + 0x310) = uVar2;
  plVar8 = local_98;
  for (iVar4 = (int)local_90; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_a8 = (longlong *)0x0;
  local_a0 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
  FGenericPlatformString::Memcpy(local_a8,L"skill2",0xe);
  local_c8 = &local_98;
  local_98 = (longlong *)0x0;
  local_90 = 0;
  uVar2 = FUN_141021650(param_1,&local_a8,0,6);
  *(undefined8 *)(param_1 + 0x318) = uVar2;
  plVar8 = local_98;
  for (iVar4 = (int)local_90; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_a8 = (longlong *)0x0;
  local_a0 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
  FGenericPlatformString::Memcpy(local_a8,L"skill3",0xe);
  local_c8 = &local_98;
  local_98 = (longlong *)0x0;
  local_90 = 0;
  uVar2 = FUN_141021650(param_1,&local_a8,0,6);
  *(undefined8 *)(param_1 + 800) = uVar2;
  plVar8 = local_98;
  for (iVar4 = (int)local_90; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_a8 = (longlong *)0x0;
  local_a0 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
  FGenericPlatformString::Memcpy(local_a8,L"skill4",0xe);
  local_c8 = &local_98;
  local_98 = (longlong *)0x0;
  local_90 = 0;
  uVar2 = FUN_141021650(param_1,&local_a8,0,6);
  *(undefined8 *)(param_1 + 0x328) = uVar2;
  plVar8 = local_98;
  for (iVar4 = (int)local_90; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar8 = plVar9;
  if (plVar9 <= (longlong *)(param_1 + 0x330U)) {
    do {
      if (*plVar8 != 0) {
        FWeakObjectPtr::operator=(*plVar8 + 0x470,param_1);
      }
      plVar8 = plVar8 + 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 5);
  }
  local_b4 = 0xffffffff;
  if (*(longlong *)(param_1 + 0x310) != 0) {
    FUN_14170c210(&local_b4);
  }
  local_b8 = 0xffffffff;
  if (*plVar9 != 0) {
    FUN_14170c210(&local_b8);
  }
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x240);
  local_b0 = 0xffffffff;
  uVar7 = 0xffffffff;
  if (lVar1 != 0) {
    FUN_14170c210(&local_b0,lVar1);
    uVar7 = local_b0;
  }
  uVar11 = local_b4;
  uVar5 = local_b8;
  local_b8 = 0xffffffff;
  local_b4 = 0xffffffff;
  local_b0 = 0xffffffff;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_78);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_14467a518;
    *(undefined4 *)(puVar3 + 1) = uVar7;
    uVar7 = 0xffffffff;
    *(undefined4 *)((longlong)puVar3 + 0xc) = uVar5;
    uVar5 = 0xffffffff;
    *(undefined4 *)(puVar3 + 2) = uVar11;
    uVar11 = 0xffffffff;
  }
  local_88[0] = &LAB_141031fe0;
  FUN_14208c300(param_1,local_88);
  if (local_48 != 0) {
    plVar8 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar8 = local_58;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_1416f8340(uVar11);
  FUN_1416f8340(uVar5);
  FUN_1416f8340(uVar7);
  FUN_1416f8340(local_b0);
  FUN_1416f8340(local_b8);
  FUN_1416f8340(local_b4);
  local_ac = 0xffffffff;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    FUN_14170c210(&local_ac);
  }
  local_b0 = 0xffffffff;
  if (*plVar9 != 0) {
    FUN_14170c210(&local_b0);
  }
  local_b8 = 0xffffffff;
  if (*(longlong *)(param_1 + 0x310) != 0) {
    FUN_14170c210(&local_b8);
  }
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x240);
  local_b4 = 0xffffffff;
  uVar7 = 0xffffffff;
  if (lVar1 != 0) {
    FUN_14170c210(&local_b4,lVar1);
    uVar7 = local_b4;
  }
  uVar10 = local_ac;
  uVar11 = local_b0;
  uVar5 = local_b8;
  local_b8 = 0xffffffff;
  local_b0 = 0xffffffff;
  local_ac = 0xffffffff;
  local_b4 = 0xffffffff;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_78);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_14467a530;
    *(undefined4 *)(puVar3 + 1) = uVar7;
    uVar7 = 0xffffffff;
    *(undefined4 *)((longlong)puVar3 + 0xc) = uVar5;
    uVar5 = 0xffffffff;
    *(undefined4 *)(puVar3 + 2) = uVar11;
    uVar11 = 0xffffffff;
    *(undefined4 *)((longlong)puVar3 + 0x14) = uVar10;
    uVar10 = 0xffffffff;
  }
  local_88[0] = &LAB_141031f90;
  FUN_14208c300(param_1,local_88);
  if (local_48 != 0) {
    plVar9 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar9 = local_58;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_1416f8340(uVar10);
  FUN_1416f8340(uVar11);
  FUN_1416f8340(uVar5);
  FUN_1416f8340(uVar7);
  FUN_1416f8340(local_b4);
  FUN_1416f8340(local_b8);
  FUN_1416f8340(local_b0);
  FUN_1416f8340(local_ac);
  local_b0 = 0xffffffff;
  if (*(longlong *)(param_1 + 800) != 0) {
    FUN_14170c210(&local_b0);
  }
  local_b8 = 0xffffffff;
  if (*(longlong *)(param_1 + 0x310) != 0) {
    FUN_14170c210(&local_b8);
  }
  local_b4 = 0xffffffff;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    FUN_14170c210(&local_b4);
  }
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x240);
  local_ac = 0xffffffff;
  uVar7 = 0xffffffff;
  if (lVar1 != 0) {
    FUN_14170c210(&local_ac,lVar1);
    uVar7 = local_ac;
  }
  uVar10 = local_b0;
  uVar11 = local_b4;
  uVar5 = local_b8;
  local_b4 = 0xffffffff;
  local_b8 = 0xffffffff;
  local_b0 = 0xffffffff;
  local_ac = 0xffffffff;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_78);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_14467a530;
    *(undefined4 *)(puVar3 + 1) = uVar7;
    uVar7 = 0xffffffff;
    *(undefined4 *)((longlong)puVar3 + 0xc) = uVar11;
    uVar11 = 0xffffffff;
    *(undefined4 *)(puVar3 + 2) = uVar5;
    uVar5 = 0xffffffff;
    *(undefined4 *)((longlong)puVar3 + 0x14) = uVar10;
    uVar10 = 0xffffffff;
  }
  local_88[0] = &LAB_141031f90;
  FUN_14208c300(param_1,local_88);
  if (local_48 != 0) {
    plVar9 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar9 = local_58;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_1416f8340(uVar10);
  FUN_1416f8340(uVar5);
  FUN_1416f8340(uVar11);
  FUN_1416f8340(uVar7);
  FUN_1416f8340(local_ac);
  FUN_1416f8340(local_b4);
  FUN_1416f8340(local_b8);
  FUN_1416f8340(local_b0);
  local_b0 = 0xffffffff;
  if (*(longlong *)(param_1 + 0x328) != 0) {
    FUN_14170c210(&local_b0);
  }
  local_b8 = 0xffffffff;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    FUN_14170c210(&local_b8);
  }
  local_b4 = 0xffffffff;
  if (*(longlong *)(param_1 + 800) != 0) {
    FUN_14170c210(&local_b4);
  }
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x240);
  local_ac = 0xffffffff;
  uVar7 = 0xffffffff;
  if (lVar1 != 0) {
    FUN_14170c210(&local_ac,lVar1);
    uVar7 = local_ac;
  }
  uVar10 = local_b0;
  uVar11 = local_b4;
  uVar5 = local_b8;
  local_b4 = 0xffffffff;
  local_b8 = 0xffffffff;
  local_b0 = 0xffffffff;
  local_ac = 0xffffffff;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_78);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_14467a530;
    *(undefined4 *)(puVar3 + 1) = uVar7;
    uVar7 = 0xffffffff;
    *(undefined4 *)((longlong)puVar3 + 0xc) = uVar11;
    uVar11 = 0xffffffff;
    *(undefined4 *)(puVar3 + 2) = uVar5;
    uVar5 = 0xffffffff;
    *(undefined4 *)((longlong)puVar3 + 0x14) = uVar10;
    uVar10 = 0xffffffff;
  }
  local_88[0] = &LAB_141031f90;
  FUN_14208c300(param_1,local_88);
  if (local_48 != 0) {
    plVar9 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar9 = local_58;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_1416f8340(uVar10);
  FUN_1416f8340(uVar5);
  FUN_1416f8340(uVar11);
  FUN_1416f8340(uVar7);
  FUN_1416f8340(local_ac);
  FUN_1416f8340(local_b4);
  FUN_1416f8340(local_b8);
  FUN_1416f8340(local_b0);
  local_b8 = 0xffffffff;
  if (*(longlong *)(param_1 + 800) != 0) {
    FUN_14170c210(&local_b8);
  }
  local_b4 = 0xffffffff;
  if (*(longlong *)(param_1 + 0x328) != 0) {
    FUN_14170c210(&local_b4);
  }
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x240);
  local_ac = 0xffffffff;
  uVar7 = 0xffffffff;
  if (lVar1 != 0) {
    FUN_14170c210(&local_ac,lVar1);
    uVar7 = local_ac;
  }
  uVar11 = local_b4;
  uVar5 = local_b8;
  local_b4 = 0xffffffff;
  local_b8 = 0xffffffff;
  local_ac = 0xffffffff;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_78);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_14467a518;
    *(undefined4 *)(puVar3 + 1) = uVar7;
    uVar7 = 0xffffffff;
    *(undefined4 *)((longlong)puVar3 + 0xc) = uVar11;
    uVar11 = 0xffffffff;
    *(undefined4 *)(puVar3 + 2) = uVar5;
    uVar5 = 0xffffffff;
  }
  local_88[0] = &LAB_1410321a0;
  FUN_14208c300(param_1,local_88);
  if (local_48 != 0) {
    plVar9 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar9 = local_58;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_1416f8340(uVar5);
  FUN_1416f8340(uVar11);
  FUN_1416f8340(uVar7);
  FUN_1416f8340(local_ac);
  FUN_1416f8340(local_b4);
  FUN_1416f8340(local_b8);
  return;
}



// FUNCTION 14104bc80 FUN_14104bc80 body=29 status=ok
// SIG undefined FUN_14104bc80(void)

void FUN_14104bc80(longlong param_1)

{
  thunk_FUN_142ec4360();
  *(undefined2 *)(param_1 + 0x240) = 0x101;
  return;
}



// FUNCTION 14104bca0 FUN_14104bca0 body=518 status=ok
// SIG undefined FUN_14104bca0(void)

void FUN_14104bca0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142ef9e70();
  local_10 = 8;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"titleMC",0x10);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x170) = uVar1;
  plVar3 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"titleDsMC",0x14);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x178) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"subtitleMC",0x16);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x180) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14104beb0 FUN_14104beb0 body=259 status=ok
// SIG undefined FUN_14104beb0(void)

undefined8 FUN_14104beb0(longlong param_1,longlong *param_2)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146873b58 == *param_2)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((bVar2) && (*(char *)(param_1 + 0x1f0) != '\0')) {
    cVar1 = FUN_1410328e0(param_1 + -0x4d8);
    if (cVar1 != '\0') {
      if (((byte)(*(char *)(param_1 + 0x1f0) - 1U) < 3) || (*(char *)(param_1 + 0x1f0) == '\x06')) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        if (*(longlong **)(param_1 + 0x218) != (longlong *)0x0) {
          lVar3 = (**(code **)(**(longlong **)(param_1 + 0x218) + 0x2b0))();
          if (lVar3 != 0) {
            lVar4 = FUN_14138e2b0();
            if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              FUN_141063030(param_1 + -0x4d8,*(undefined8 *)(lVar3 + 0x308),1);
            }
          }
        }
        return 1;
      }
    }
  }
  uVar5 = FUN_141002f60(param_1,param_2);
  return uVar5;
}



// FUNCTION 14104bfc0 FUN_14104bfc0 body=300 status=ok
// SIG undefined FUN_14104bfc0(void)

undefined8 FUN_14104bfc0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 local_res10 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2b8 == *param_2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    FUN_142eb3990(param_1 + -0x4d8);
    return 1;
  }
  if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2a0 == *param_2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (lVar2 = FUN_142eb65a0(param_1 + -0x4d8), lVar2 != 0)) {
    lVar3 = FUN_142f18d50();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_141067780(param_1 + -0x4d8,lVar2,param_2);
      lVar2 = *(longlong *)(param_1 + -0x4d8);
      local_18 = 0;
      local_10 = 0;
      puVar4 = (undefined8 *)FName::FName(local_res10,L"Quick_Emote_Select",1);
      (**(code **)(lVar2 + 0x4e8))(param_1 + -0x4d8,*puVar4,&local_18);
      return 1;
    }
  }
  uVar5 = FUN_142ec6030(param_1,param_2);
  return uVar5;
}



// FUNCTION 14104c0f0 FUN_14104c0f0 body=234 status=ok
// SIG undefined FUN_14104c0f0(void)

undefined8 FUN_14104c0f0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (*(char *)((longlong)param_2 + 0xc) != '\0') {
LAB_14104c1c8:
    uVar3 = FUN_1410db2b0(param_1);
    return uVar3;
  }
  if (DAT_146873b80 == *param_2) {
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x1a8);
    if (cVar1 != '\0') {
      plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x1a8);
      (**(code **)(*plVar2 + 0x570))(plVar2);
      return 1;
    }
  }
  else if (DAT_146873b88 == *param_2) {
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x1a8);
    if (cVar1 != '\0') {
      plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x1a8);
      (**(code **)(*plVar2 + 0x578))(plVar2);
      return 1;
    }
  }
  else {
    if (DAT_146b3e2b8 != *param_2) goto LAB_14104c1c8;
    FWeakObjectPtr::IsValid(param_1 + 0x1a8);
  }
  FUN_142eb3990(param_1 + -0x4d8);
  return 1;
}



// FUNCTION 14104c1e0 FUN_14104c1e0 body=310 status=ok
// SIG undefined FUN_14104c1e0(void)

undefined8 FUN_14104c1e0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2b8 == *param_2)) &&
      (*(longlong *)(param_1 + 0x1b8) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x1b8) + 0x1f1) == '\0')) {
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
    if (cVar1 != '\0') {
      uVar2 = FWeakObjectPtr::Get(param_1 + 0xc4);
      lVar3 = FUN_140ec9a00(uVar2);
      if ((lVar3 != 0) && (cVar1 = FUN_141111680(lVar3), cVar1 != '\0'))
      goto switchD_14104c28d_default;
    }
    switch(*(undefined4 *)(param_1 + 0x218)) {
    case 1:
    case 2:
    case 5:
    case 6:
      *(undefined1 *)(*(longlong *)(param_1 + 0x1b8) + 0x180) = 1;
      FUN_142ecd3f0(param_1 + -0x4d8);
      return 1;
    case 3:
      *(undefined4 *)(param_1 + 0x21c) = 1;
      break;
    case 4:
      *(undefined4 *)(param_1 + 0x21c) = 2;
      break;
    default:
      goto switchD_14104c28d_default;
    }
    *(undefined1 *)(param_1 + 0x1b0) = 0;
    FUN_141066f40(param_1 + -0x4d8);
  }
  else {
switchD_14104c28d_default:
    cVar1 = FUN_1410db2b0(param_1,param_2);
    if ((cVar1 == '\0') &&
       ((*(longlong *)(param_1 + 0x1b8) == 0 ||
        (plVar4 = (longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x170),
        cVar1 = (**(code **)(*plVar4 + 0x20))(plVar4,param_2), cVar1 == '\0')))) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14104c330 FUN_14104c330 body=636 status=ok
// SIG undefined FUN_14104c330(void)

undefined8 FUN_14104c330(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  float fVar6;
  longlong local_18 [2];
  
  if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2a0 == *param_2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0xb4);
    if (lVar2 != 0) {
      lVar3 = FUN_14145f370();
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
        FUN_140d14130(lVar2,*(undefined4 *)(param_1 + 0x208));
      }
    }
    if (DAT_1468b6148 != 0) {
      local_18[0] = 0;
      local_18[1] = 0;
      FConfigCacheIni::Flush(DAT_1468b6148,0,local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
    FUN_142eb3990(param_1 + -0x4d8);
    return 1;
  }
  if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146873b58 == *param_2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_1 + 0x1dc);
    FUN_141058760(param_1 + -0x4d8);
    return 1;
  }
  lVar2 = FWeakObjectPtr::Get(param_1 + 0xb4);
  if (lVar2 == 0) goto LAB_14104c592;
  lVar3 = FUN_14145f370();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_14104c592;
  cVar5 = *(char *)((longlong)param_2 + 0xc);
  if ((cVar5 == '\0') && (DAT_146873af8 == *param_2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
LAB_14104c4ce:
    fVar6 = *(float *)(param_1 + 0x208) + *(float *)(param_1 + 0x1d8);
    if ((fVar6 < *(float *)(lVar2 + 0x1218)) ||
       (*(float *)(lVar2 + 0x121c) <= fVar6 && fVar6 != *(float *)(lVar2 + 0x121c))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      fVar6 = *(float *)(param_1 + 0x208);
    }
    *(float *)(param_1 + 0x208) = fVar6;
    FUN_141058760(param_1 + -0x4d8);
    cVar5 = *(char *)((longlong)param_2 + 0xc);
  }
  else {
    if ((cVar5 == '\0') && (DAT_146873b10 == *param_2)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) goto LAB_14104c4ce;
  }
  if ((cVar5 == '\0') && (DAT_146873b00 == *param_2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    if ((cVar5 == '\0') && (DAT_146873b08 == *param_2)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) goto LAB_14104c592;
  }
  fVar6 = *(float *)(param_1 + 0x208) - *(float *)(param_1 + 0x1d8);
  if ((fVar6 < *(float *)(lVar2 + 0x1218)) ||
     (*(float *)(lVar2 + 0x121c) <= fVar6 && fVar6 != *(float *)(lVar2 + 0x121c))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    fVar6 = *(float *)(param_1 + 0x208);
  }
  *(float *)(param_1 + 0x208) = fVar6;
  FUN_141058760(param_1 + -0x4d8);
LAB_14104c592:
  uVar4 = FUN_142ec6030(param_1,param_2);
  return uVar4;
}



// FUNCTION 14104c5b0 FUN_14104c5b0 body=687 status=ok
// SIG undefined FUN_14104c5b0(void)

char FUN_14104c5b0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 local_18;
  undefined8 local_10;
  
  plVar1 = (longlong *)(param_1 + -0x4d8);
  cVar3 = *(char *)(param_1 + 0x731);
  cVar4 = '\0';
  if (cVar3 == '\0') {
    cVar3 = *(char *)(param_1 + 0x730);
  }
  if ((cVar3 == '\x03') &&
     ((*(char *)((longlong)param_2 + 0xc) != '\0' || (DAT_146b3e2b8 != *param_2)))) {
    cVar4 = '\x01';
  }
  if ((*(longlong *)(param_1 + 0x6f0) == 0) || (cVar3 = FUN_140fb2f70(), cVar3 == '\0')) {
    if (cVar4 != '\0') goto LAB_14104c7ef;
    if (((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2b8 == *param_2)) &&
       ((*(longlong *)(param_1 + 0x6f0) == 0 || (cVar3 = FUN_140cb6290(), cVar3 == '\0')))) {
      cVar3 = *(char *)(param_1 + 0x731);
      if (cVar3 == '\0') {
        cVar3 = *(char *)(param_1 + 0x730);
      }
      if (cVar3 == '\x02') {
        FUN_141065c60(plVar1,1);
        goto LAB_14104c7ec;
      }
    }
    cVar4 = FUN_1410949b0(param_1,param_2);
    if (cVar4 != '\0') goto LAB_14104c7ef;
    if (*(char *)(param_1 + 0x1d8) != '\a') {
      return '\0';
    }
    if ((*(char *)((longlong)param_2 + 0xc) == '\0') &&
       ((lVar2 = *param_2, DAT_146873b08 == lVar2 || (DAT_146873b98 == lVar2)))) {
      cVar3 = *(char *)(param_1 + 0x731);
      cVar4 = cVar3;
      if (cVar3 == '\0') {
        cVar4 = *(char *)(param_1 + 0x730);
      }
      if (cVar4 != '\x01') {
        if (cVar3 == '\0') {
          cVar3 = *(char *)(param_1 + 0x730);
        }
        if (cVar3 != '\x05') {
          return '\0';
        }
      }
      FUN_141062820(plVar1,0,CONCAT71((int7)((ulonglong)lVar2 >> 8),DAT_146873b08 == lVar2));
    }
    else {
      if (*(char *)((longlong)param_2 + 0xc) != '\0') {
        return '\0';
      }
      lVar2 = *param_2;
      if ((DAT_146873b10 == lVar2) || (DAT_146873b90 == lVar2)) {
        cVar3 = *(char *)(param_1 + 0x731);
        cVar4 = cVar3;
        if (cVar3 == '\0') {
          cVar4 = *(char *)(param_1 + 0x730);
        }
        if (cVar4 != '\x01') {
          if (cVar3 == '\0') {
            cVar3 = *(char *)(param_1 + 0x730);
          }
          if (cVar3 != '\x05') {
            return '\0';
          }
        }
        FUN_141062820(plVar1,1,CONCAT71((int7)((ulonglong)lVar2 >> 8),DAT_146873b10 == lVar2));
      }
      else {
        if (DAT_146873b60 != *param_2) {
          if ((DAT_146873c98 != *param_2) && (DAT_146873ca0 != *param_2)) {
            return '\0';
          }
          if (*(char *)(param_1 + 0x9f9) == '\0') {
            return '\0';
          }
          FUN_142f0b150(*(undefined8 *)(param_1 + 0x330),param_2);
          return '\0';
        }
        cVar3 = *(char *)(param_1 + 0x731);
        cVar4 = cVar3;
        if (cVar3 == '\0') {
          cVar4 = *(char *)(param_1 + 0x730);
        }
        if (cVar4 == '\x01') {
          FUN_141065c60(plVar1,2);
          uVar5 = *(undefined8 *)(param_1 + 0x4a0);
        }
        else {
          cVar4 = cVar3;
          if (cVar3 == '\0') {
            cVar4 = *(char *)(param_1 + 0x730);
          }
          if (cVar4 == '\x05') {
            uVar5 = 4;
          }
          else {
            if (cVar3 == '\0') {
              cVar3 = *(char *)(param_1 + 0x730);
            }
            if (cVar3 != '\x04') {
              return '\0';
            }
            uVar5 = 5;
          }
          FUN_141065c60(plVar1,uVar5);
          uVar5 = *(undefined8 *)(param_1 + 0x488);
        }
        local_18 = 0;
        local_10 = 0;
        (**(code **)(*plVar1 + 0x4e8))(plVar1,uVar5,&local_18);
      }
    }
  }
LAB_14104c7ec:
  cVar4 = '\x01';
LAB_14104c7ef:
  FUN_141081510(plVar1,param_2);
  return cVar4;
}



// FUNCTION 14104c860 FUN_14104c860 body=49 status=ok
// SIG undefined FUN_14104c860(void)

void FUN_14104c860(longlong param_1,undefined1 param_2)

{
  FUN_142ec64e0();
  *(undefined1 *)(param_1 + 0x210) = param_2;
  FUN_1410584d0(param_1 + -0x4d8);
  return;
}



// FUNCTION 14104c8b0 FUN_14104c8b0 body=385 status=ok
// SIG undefined FUN_14104c8b0(void)

void FUN_14104c8b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146873ef8) && (_Init_thread_header(&DAT_146873ef8), DAT_146873ef8 == -1))
  {
    FName::FName(&DAT_146873ef0,"OakPC_Reload",1);
    _Init_thread_footer(&DAT_146873ef8);
  }
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x5d8);
  bVar4 = true;
  if (lVar5 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    if (bVar4) goto LAB_14104c93d;
  }
  lVar5 = 0;
LAB_14104c93d:
  if ((*(longlong *)(param_1 + 0x658) != 0) && (*(char *)(param_1 + 0x670) == '\x01')) {
    FUN_142ef39a0(local_28,DAT_146873ef0,lVar5,0,0);
    (**(code **)(**(longlong **)(param_1 + 0x658) + 0x2b0))
              (*(longlong **)(param_1 + 0x658),local_28,1,1);
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
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x678) = 1;
  UNLOCK();
  return;
}



// FUNCTION 14104ca40 FUN_14104ca40 body=151 status=ok
// SIG undefined FUN_14104ca40(void)

void FUN_14104ca40(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x5d8);
  if (lVar3 != 0) {
    lVar4 = FUN_14145f370();
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
      lVar3 = FUN_140cff1b0(lVar3);
      if (lVar3 != 0) {
        cVar2 = FUN_140cbbac0(lVar3,param_1);
        if (cVar2 != '\0') {
          FUN_141056270(param_1,1);
          return;
        }
      }
    }
  }
  FUN_141056270(param_1,0);
  return;
}



// FUNCTION 14104cae0 FUN_14104cae0 body=113 status=ok
// SIG undefined FUN_14104cae0(void)

void FUN_14104cae0(longlong param_1)

{
  longlong lVar1;
  
  FUN_142ec64e0();
  if (*(longlong *)(param_1 + 0x330) != 0) {
    FUN_142f04f30();
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x700));
  lVar1 = *(longlong *)(param_1 + 0x708);
  if (lVar1 != 0) {
    FUN_141064ec0(lVar1,*(undefined1 *)(lVar1 + 0x5b3));
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x700));
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    FUN_140fcf410();
  }
  return;
}



// FUNCTION 14104cb60 FUN_14104cb60 body=7 status=ok
// SIG undefined FUN_14104cb60(void)

void FUN_14104cb60(undefined8 param_1)

{
  FUN_141064c80(param_1,0);
  return;
}



// FUNCTION 14104cb70 FUN_14104cb70 body=102 status=ok
// SIG undefined FUN_14104cb70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14104cb70(longlong param_1,undefined4 param_2)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x470) != 0) && (*(longlong **)(param_1 + 0x468) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x468) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x470) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014104cbbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x468) + 0x40))
                  (*(longlong **)(param_1 + 0x468),param_2);
        return;
      }
      (**(code **)(_DAT_00000000 + 0x40))(0,param_2);
    }
  }
  return;
}



// FUNCTION 14104cbe0 FUN_14104cbe0 body=193 status=ok
// SIG undefined FUN_14104cbe0(void)

void FUN_14104cbe0(longlong *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((-1 < param_2) && (param_2 < (int)param_1[0x124])) {
    local_28 = 0;
    local_20 = 0;
    (**(code **)(*param_1 + 0x4e8))
              (param_1,*(undefined8 *)(param_1[0x123] + (longlong)param_2 * 8),&local_28);
    if (param_2 == (int)param_1[0x124] + -1) {
      local_18 = 0;
      local_10 = 0;
      (**(code **)(*param_1 + 0x4e8))(param_1,param_1[0x125],&local_18);
    }
  }
  if (((param_1[0x179] != 0) &&
      (cVar1 = FUN_140fb3d70(param_1[0x179],param_1 + 0x134), cVar1 != '\0')) &&
     (iVar2 = FUN_1406ab3e0(param_1[0x179]), iVar2 == *(int *)((longlong)param_1 + 0x9c4))) {
    LOCK();
    *(undefined4 *)((longlong)param_1 + 0xedc) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14104ccb0 FUN_14104ccb0 body=18 status=ok
// SIG undefined FUN_14104ccb0(void)

void FUN_14104ccb0(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    TBaseDelegate<void,FText_const_&,enum_ETextCommit::Type>::ExecuteIfBound(param_1 + 0x458);
    return;
  }
  return;
}



// FUNCTION 14104ccd0 FUN_14104ccd0 body=67 status=ok
// SIG undefined FUN_14104ccd0(void)

void FUN_14104ccd0(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_2 + 0x458) != 0) {
    plVar3 = *(longlong **)(param_1 + 0xc40);
    plVar1 = plVar3 + *(int *)(param_1 + 0xc48);
    for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
      lVar2 = *plVar3;
      if ((lVar2 != 0) && (*(int *)(lVar2 + 0x300) == param_3)) {
        FUN_1410626a0(param_1,lVar2,*(longlong *)(param_2 + 0x458));
        return;
      }
    }
  }
  return;
}



// FUNCTION 14104cd20 FUN_14104cd20 body=88 status=ok
// SIG undefined FUN_14104cd20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14104cd20(longlong param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x480) != 0) && (*(longlong **)(param_1 + 0x478) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x478) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x480) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014104cd60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x478) + 0x40))();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014104cd6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_00000000 + 0x40))();
      return;
    }
  }
  return;
}



// FUNCTION 14104cd80 FUN_14104cd80 body=42 status=ok
// SIG undefined FUN_14104cd80(void)

void FUN_14104cd80(longlong *param_1)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  (**(code **)(*param_1 + 0x4e8))(param_1,param_1[0x126],&local_18);
  return;
}



// FUNCTION 14104cdb0 FUN_14104cdb0 body=18 status=ok
// SIG undefined FUN_14104cdb0(void)

void FUN_14104cdb0(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x438);
    return;
  }
  return;
}



// FUNCTION 14104cdd0 FUN_14104cdd0 body=45 status=ok
// SIG undefined FUN_14104cdd0(void)

void FUN_14104cdd0(longlong param_1,longlong param_2)

{
  if ((((param_2 != 0) && (*(char *)(param_2 + 0x5b0) != '\0')) && (0 < *(int *)(param_2 + 0x4a8)))
     && (*(char *)(param_2 + 0x500) != '\x04')) {
    *(undefined1 *)(param_1 + 0x6bd) = 1;
    FUN_141053470();
    return;
  }
  return;
}



// FUNCTION 14104ce40 FUN_14104ce40 body=839 status=ok
// SIG undefined FUN_14104ce40(void)

void FUN_14104ce40(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  int *piVar9;
  undefined1 local_48 [16];
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar7 = param_1 + 0x184;
  cVar4 = FWeakObjectPtr::IsValid(lVar7);
  if (cVar4 != '\0') {
    lVar5 = FWeakObjectPtr::Get(lVar7);
    if ((*(longlong *)(lVar5 + 0x690) != 0) && (*(longlong *)(lVar5 + 0x690) == param_1)) {
      lVar5 = FWeakObjectPtr::Get(lVar7);
      if (*(longlong *)(lVar5 + 0x6e0) != 0) {
        lVar5 = FWeakObjectPtr::Get(lVar7);
        TBaseMulticastDelegate<void>::Remove
                  (*(longlong *)(lVar5 + 0x6e0) + 0x138,*(undefined8 *)(param_1 + 0x200));
        lVar5 = FWeakObjectPtr::Get(lVar7);
        TBaseMulticastDelegate<void>::Remove
                  (*(longlong *)(lVar5 + 0x6e0) + 0x150,*(undefined8 *)(param_1 + 0x208));
      }
      piVar9 = (int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38);
      if ((*piVar9 < DAT_146874408) && (_Init_thread_header(&DAT_146874408), DAT_146874408 == -1)) {
        FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                  (&DAT_1468743f0,L"Sign In Failed",L"SHiFTMenu",L"SignInErrorHeader");
        atexit(FUN_143e5cb40);
        _Init_thread_footer(&DAT_146874408);
      }
      if ((*piVar9 < DAT_146874428) && (_Init_thread_header(&DAT_146874428), DAT_146874428 == -1)) {
        if (param_2 == 0) {
          pwVar8 = L"Success";
        }
        else if (param_2 == 1) {
          pwVar8 = L"GenericFailure";
        }
        else if (param_2 == 2) {
          pwVar8 = L"Aborted";
        }
        else {
          pwVar8 = L"";
        }
        uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_38,
                           L"Received unhandled error type \"{0}\" from SHiFT server.\nPlease open a JIRA bug for the UI team and attach a screenshot of this message."
                           ,L"SHiFTMenu",L"SignInErrorUnhandled");
        uVar6 = FTextFormat::FTextFormat(local_48,uVar6);
        FUN_14101f150(&DAT_146874410,uVar6,pwVar8);
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_30 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar2 = (int *)((longlong)local_30 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_30 + 8))(local_30,1);
            }
          }
        }
        atexit(FUN_143e5d180);
        _Init_thread_footer(&DAT_146874428);
      }
      if ((*piVar9 < DAT_146874448) && (_Init_thread_header(&DAT_146874448), DAT_146874448 == -1)) {
        FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                  (&DAT_146874430,&DAT_1446652b0,L"SHiFTMenu",L"SignInErrorGeneralFailure");
        atexit(FUN_143e5ca00);
        _Init_thread_footer(&DAT_146874448);
      }
      if (param_2 != 0) {
        if ((param_2 != 1) && (param_2 == 2)) {
          (**(code **)(**(longlong **)(param_1 + 0x210) + 0x278))(*(longlong **)(param_1 + 0x210),1)
          ;
          (**(code **)(**(longlong **)(param_1 + 0x238) + 0x278))(*(longlong **)(param_1 + 0x238),1)
          ;
          (**(code **)(**(longlong **)(param_1 + 0x228) + 0x278))(*(longlong **)(param_1 + 0x228),0)
          ;
                    /* WARNING: Could not recover jumptable at 0x00014104cfb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(longlong **)(param_1 + 0x230) + 0x278))(*(longlong **)(param_1 + 0x230),0)
          ;
          return;
        }
        uVar6 = FWeakObjectPtr::Get(lVar7);
        FUN_141061c00(uVar6,&DAT_1468743f0,&DAT_146874430);
        return;
      }
      lVar7 = FWeakObjectPtr::Get(lVar7);
      *(undefined4 *)(lVar7 + 0x6f4) = 5;
      *(undefined1 *)(lVar7 + 0x688) = 0;
      FUN_141066f40(lVar7);
    }
  }
  return;
}



// FUNCTION 14104d190 FUN_14104d190 body=238 status=ok
// SIG undefined FUN_14104d190(void)

void FUN_14104d190(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  *(float *)(param_1 + 0x240) = (float)param_3;
  (**(code **)(**(longlong **)(param_1 + 0x238) + 0x278))(*(longlong **)(param_1 + 0x238),0);
  (**(code **)(**(longlong **)(param_1 + 0x228) + 0x278))(*(longlong **)(param_1 + 0x228),1);
  (**(code **)(**(longlong **)(param_1 + 0x230) + 0x278))(*(longlong **)(param_1 + 0x230),1);
  (**(code **)(**(longlong **)(param_1 + 0x228) + 0x2a8))
            (*(longlong **)(param_1 + 0x228),param_2,1,0);
  lVar4 = **(longlong **)(param_1 + 0x230);
  uVar5 = FUN_141036060(param_1,local_28,param_3);
  (**(code **)(lVar4 + 0x2b0))(*(undefined8 *)(param_1 + 0x230),uVar5,1,0);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return;
}



// FUNCTION 14104d290 FUN_14104d290 body=263 status=ok
// SIG undefined FUN_14104d290(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14104d290(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [80];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  FUN_141096090();
  if (*(char *)(param_1 + 0x1d8) == '\a') {
    local_38 = (longlong *)0x0;
    local_28 = 0;
    puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_58);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &PTR_FUN_143f77b70;
      puVar1[1] = param_1 + -0x4d8;
    }
    local_68[0] = &LAB_141031e80;
    uVar2 = FUN_1420849a0(param_1 + -0x4d8,local_b8,local_68);
    FUN_14208c4f0(param_1 + -0x4d8,uVar2);
    if (local_28 != 0) {
      plVar3 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar3 = local_38;
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14104d3a0 FUN_14104d3a0 body=39 status=ok
// SIG undefined FUN_14104d3a0(void)

void FUN_14104d3a0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_142ee3e70();
  }
  FUN_142ec7580(param_1);
  return;
}



// FUNCTION 14104d3d0 FUN_14104d3d0 body=70 status=ok
// SIG undefined FUN_14104d3d0(void)

void FUN_14104d3d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x7b8) != 0) {
    FUN_1407665e0(*(longlong *)(param_1 + 0x7b8) + 0x318);
  }
  if (*(longlong *)(param_1 + 0x7b0) != 0) {
    FUN_1414b1fb0();
  }
  FUN_141004470(param_1);
  return;
}



// FUNCTION 14104d420 FUN_14104d420 body=445 status=ok
// SIG undefined FUN_14104d420(void)

void FUN_14104d420(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong local_38;
  longlong *plStack_30;
  
  uVar7 = 0;
  uVar8 = uVar7;
  if (0 < *(int *)(param_1 + 0x1d8)) {
    do {
      lVar6 = *(longlong *)(uVar7 + *(longlong *)(param_1 + 0x1d0));
      if (lVar6 != 0) {
        FWeakObjectPtr::operator=(lVar6 + 0x1f0,0);
        *(undefined8 *)(lVar6 + 0x1f8) = 0;
      }
      uVar9 = (int)uVar8 + 1;
      uVar7 = uVar7 + 8;
      uVar8 = (ulonglong)uVar9;
    } while ((int)uVar9 < *(int *)(param_1 + 0x1d8));
  }
  plVar4 = (longlong *)(param_1 + 0x228);
  plVar10 = (longlong *)*plVar4;
  uVar8 = (ulonglong)*(int *)(param_1 + 0x230);
  plVar11 = plVar10 + uVar8 * 2;
  if (plVar10 != plVar11) {
    do {
      if (*plVar10 != 0) {
        FUN_142833de0();
        FUN_14283ef20(*plVar10);
        local_38 = 0;
        plStack_30 = (longlong *)0x0;
        if (plVar10 != &local_38) {
          *plVar10 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(plVar10 + 1,&plStack_30);
          plVar3 = plStack_30;
          if (plStack_30 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_30 + 1;
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plStack_30)(plStack_30);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              iVar5 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plStack_30 + 8))(plStack_30,1);
              }
            }
          }
        }
      }
      plVar10 = plVar10 + 2;
    } while (plVar10 != plVar11);
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x230);
  }
  if ((int)uVar8 != 0) {
    plVar10 = (longlong *)(*plVar4 + 8);
    do {
      plVar11 = (longlong *)*plVar10;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar11 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      plVar10 = plVar10 + 2;
      uVar9 = (int)uVar8 - 1;
      uVar8 = (ulonglong)uVar9;
    } while (uVar9 != 0);
  }
  *(undefined4 *)(param_1 + 0x230) = 0;
  if (*(int *)(param_1 + 0x234) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar4,0);
  }
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 14104d5e0 FUN_14104d5e0 body=360 status=ok
// SIG undefined FUN_14104d5e0(void)

void FUN_14104d5e0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  
  (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x148))();
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x1b8);
  if (cVar2 != '\0') {
    uVar3 = FWeakObjectPtr::Get(param_1 + 0x1b8);
    lVar4 = FUN_14270bb10(uVar3);
    if (lVar4 != 0) {
      lVar5 = FUN_141432660();
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
        lVar5 = *(longlong *)(param_1 + 0x1b0);
        iVar7 = 0;
        if (0 < *(int *)(lVar4 + 0x1d0)) {
          lVar9 = 0;
          do {
            plVar8 = (longlong *)(*(longlong *)(lVar4 + 0x1c8) + lVar9);
            if ((((int)plVar8[1] != 0) && (plVar6 = (longlong *)*plVar8, plVar6 != (longlong *)0x0))
               && (plVar6 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,local_res8),
                  *plVar6 == lVar5)) {
              if (((int)plVar8[1] != 0) && (plVar6 = (longlong *)*plVar8, plVar6 != (longlong *)0x0)
                 ) {
                (**(code **)(*plVar6 + 0x28))(plVar6,0);
                if (*plVar8 != 0) {
                  lVar5 = FMemory::Realloc(*plVar8,0,0);
                  *plVar8 = lVar5;
                }
                *(undefined4 *)(plVar8 + 1) = 0;
              }
              break;
            }
            iVar7 = iVar7 + 1;
            lVar9 = lVar9 + 0x10;
          } while (iVar7 < *(int *)(lVar4 + 0x1d0));
        }
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar4 + 0x1c8,0);
        FUN_140e47630(lVar4);
      }
    }
  }
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 14104d750 FUN_14104d750 body=878 status=ok
// SIG undefined FUN_14104d750(void)

void FUN_14104d750(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0xf4);
  if (lVar2 != 0) {
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
    if (bVar1) {
      TBaseMulticastDelegate<void>::Remove
                (*(longlong *)(lVar2 + 0x478) + 0x1e0,*(undefined8 *)(param_1 + 1000));
    }
  }
  if (*(longlong *)(param_1 + 0x3b8) != 0) {
    uVar4 = (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x148))();
    plVar5 = (longlong *)FUN_140d3a420(uVar4);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x88))(plVar5,param_1 + 0x3b8);
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x1c0);
  if (plVar5 != (longlong *)0x0) {
    lVar2 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*plVar5 + 0x288))(plVar5);
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  if (plVar5 != (longlong *)0x0) {
    lVar2 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*plVar5 + 0x288))(plVar5);
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  if (plVar5 != (longlong *)0x0) {
    lVar2 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*plVar5 + 0x288))(plVar5);
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  if (plVar5 != (longlong *)0x0) {
    lVar2 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*plVar5 + 0x288))(plVar5);
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x1e0);
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  if (plVar5 != (longlong *)0x0) {
    lVar2 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*plVar5 + 0x288))(plVar5);
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x1e8);
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  if (plVar5 != (longlong *)0x0) {
    lVar2 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*plVar5 + 0x288))(plVar5);
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x1f0);
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  if (plVar5 != (longlong *)0x0) {
    lVar2 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*plVar5 + 0x288))(plVar5);
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  if (plVar5 != (longlong *)0x0) {
    lVar2 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*plVar5 + 0x288))(plVar5);
    }
  }
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 14104dac0 FUN_14104dac0 body=619 status=ok
// SIG undefined FUN_14104dac0(void)

void FUN_14104dac0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  wchar_t *pwVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  undefined8 local_res8;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xb4);
  if (plVar5 == (longlong *)0x0) goto LAB_14104dc2d;
  lVar6 = FUN_14145f370();
  if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((!bVar3) ||
     (*(undefined4 *)(plVar5 + 0x32e) = *(undefined4 *)(param_1 + 0x1dc),
     *(char *)(param_1 + 0x1e4) == '\0')) goto LAB_14104dc2d;
  lVar6 = (**(code **)(*plVar5 + 0x148))(plVar5);
  FUN_142dcf3a0(plVar5,&local_28);
  if ((lVar6 == 0) || (pwVar9 = *(wchar_t **)(lVar6 + 400), pwVar9 == (wchar_t *)0x0)) {
LAB_14104dba8:
    pwVar9 = (wchar_t *)0x0;
  }
  else {
    lVar6 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(pwVar9 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar9 + 8) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14104dba8;
  }
  if ((local_28 != 0) && (pwVar9 != (wchar_t *)0x0)) {
    local_18 = local_28;
    plStack_10 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
      UNLOCK();
    }
    uVar7 = FUN_140bb7440(pwVar9);
    FUN_140d9f870(uVar7,&local_18,4);
  }
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_20 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar1 = (int *)((longlong)plStack_20 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
  }
LAB_14104dc2d:
  plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xbc);
  if (plVar5 != (longlong *)0x0) {
    lVar6 = FUN_1413f82e0();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uVar7 = AGFireballProjectile::GetPrivateStaticClass();
      lVar6 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar7);
      if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 0x3b0), lVar6 != 0)) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnAbilityItemChanged",L"::");
        pwVar9 = (wchar_t *)0x0;
        while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
          pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar9 = pwVar4;
        }
        FName::FName(&local_res8,pwVar9 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar6 + 0x38,param_1 + -0x4d8,local_res8);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x9e0) != 0) {
    FUN_142eb3ca0(*(longlong *)(param_1 + 0x9e0),0);
  }
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 14104dd30 FUN_14104dd30 body=890 status=ok
// SIG undefined FUN_14104dd30(void)

void FUN_14104dd30(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  bool bVar16;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong *plStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar13 = 0;
  FUN_142ec8980();
  lVar3 = param_1 + -0x4d8;
  uVar9 = FUN_1410cb7c0(lVar3);
  lVar14 = param_1 + 0x1b8;
  FWeakObjectPtr::operator=(lVar14,uVar9);
  cVar8 = FWeakObjectPtr::IsValid(lVar14);
  if (cVar8 == '\0') {
    uVar9 = FUN_140f141d0(lVar3);
    FWeakObjectPtr::operator=(lVar14,uVar9);
    cVar8 = FWeakObjectPtr::IsValid(lVar14);
    if (cVar8 == '\0') {
      return;
    }
  }
  lVar10 = FWeakObjectPtr::Get(param_1 + 0x1a8);
  if (lVar10 != 0) {
    lVar11 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    if ((bVar16) && (1 < *(int *)(lVar10 + 0x6f0) - 1U)) {
      cVar8 = FWeakObjectPtr::IsValid(lVar14);
      bVar16 = cVar8 == '\0';
      if (bVar16) {
        plVar12 = &local_78;
        local_78 = 0;
        plStack_70 = (longlong *)0x0;
      }
      else {
        uVar9 = FWeakObjectPtr::Get(lVar14);
        plVar12 = (longlong *)FUN_142dcf3a0(uVar9,local_48);
        lVar13 = *plVar12;
      }
      plVar5 = (longlong *)plVar12[1];
      plVar12[1] = 0;
      *plVar12 = 0;
      plVar12 = plStack_70;
      if ((bVar16) && (plStack_70 != (longlong *)0x0)) {
        LOCK();
        plVar15 = plStack_70 + 1;
        lVar14 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_70 + 8))(plStack_70,1);
          }
        }
      }
      if ((!bVar16) && (local_40 != (longlong *)0x0)) {
        LOCK();
        plVar12 = local_40 + 1;
        lVar14 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)local_40 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
      if (lVar13 == 0) {
        plVar12 = &local_68;
        local_68 = 0;
        plStack_60 = (longlong *)0x0;
        bVar7 = false;
        bVar6 = false;
        bVar16 = true;
      }
      else {
        local_88 = (undefined4)lVar13;
        uStack_84 = (undefined4)((ulonglong)lVar13 >> 0x20);
        uStack_80 = SUB84(plVar5,0);
        uStack_7c = (undefined4)((ulonglong)plVar5 >> 0x20);
        local_58 = local_88;
        uStack_54 = uStack_84;
        uStack_50 = uStack_80;
        uStack_4c = uStack_7c;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        lVar14 = FUN_142b45e90();
        plVar12 = (longlong *)FUN_142b4a990(*(undefined8 *)(lVar14 + 0x18),local_38,&local_58);
        bVar7 = true;
        bVar6 = true;
        bVar16 = false;
      }
      plVar15 = (longlong *)(param_1 + 0x1c0);
      if (plVar15 != plVar12) {
        *plVar15 = *plVar12;
        *plVar12 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1c8,plVar12 + 1);
      }
      plVar12 = plStack_60;
      if ((bVar16) && (plStack_60 != (longlong *)0x0)) {
        LOCK();
        plVar2 = plStack_60 + 1;
        lVar14 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_60 + 8))(plStack_60,1);
          }
        }
      }
      if ((bVar6) && (local_30 != (longlong *)0x0)) {
        LOCK();
        plVar12 = local_30 + 1;
        lVar14 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)local_30 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
      if ((bVar7) &&
         (plVar12 = (longlong *)CONCAT44(uStack_4c,uStack_50), plVar12 != (longlong *)0x0)) {
        LOCK();
        plVar2 = plVar12 + 1;
        lVar14 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      if (((*plVar15 == 0) || (*(char *)(*plVar15 + 0x18) == '\0')) ||
         (cVar8 = FUN_142b4f460(), cVar8 == '\0')) {
        FUN_141052d80(lVar3);
      }
      else {
        FUN_141055bb0(lVar3);
      }
      if (plVar5 == (longlong *)0x0) {
        return;
      }
      LOCK();
      plVar12 = plVar5 + 1;
      lVar3 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar3 != 1) {
        return;
      }
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 != 1) {
        return;
      }
      (**(code **)(*plVar5 + 8))(plVar5,1);
      return;
    }
  }
  FUN_141052d80(lVar3);
  return;
}



// FUNCTION 14104e0b0 FUN_14104e0b0 body=323 status=ok
// SIG undefined FUN_14104e0b0(void)

void FUN_14104e0b0(longlong param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  undefined4 uStack_1c;
  
  FUN_142ec8980();
  lVar3 = FWeakObjectPtr::Get(param_1 + 0xf4);
  if (lVar3 != 0) {
    lVar4 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar3 = *(longlong *)(lVar3 + 0x478);
      uVar7 = 0;
      plVar8 = (longlong *)(lVar3 + 0x1e0);
      plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar5 + 1,param_1 + -0x4d8);
        *(undefined4 *)(plVar5 + 2) = 0x41045860;
        *(undefined4 *)((longlong)plVar5 + 0x14) = 1;
        *(undefined4 *)(plVar5 + 3) = 0;
        *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_1c;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar5[5] = lVar4;
        *plVar5 = (longlong)&PTR_FUN_143fcff08;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
        puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
        iVar1 = *(int *)(lVar3 + 0x1e8);
        uVar7 = *puVar6;
        *(int *)(lVar3 + 0x1e8) = iVar1 + 1;
        if (*(int *)(lVar3 + 0x1ec) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar1);
        }
        puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar8);
        *puVar6 = plVar5;
        *(undefined4 *)(puVar6 + 1) = 3;
      }
      *(undefined8 *)(param_1 + 1000) = uVar7;
    }
  }
  return;
}



// FUNCTION 14104e200 FUN_14104e200 body=856 status=ok
// SIG undefined FUN_14104e200(void)

void FUN_14104e200(longlong param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  wchar_t *pwVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  undefined8 *puVar14;
  int *piVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  undefined8 local_res8;
  longlong local_res10;
  int local_38;
  int local_34;
  longlong local_30;
  
  if (*(int *)(param_1 + 0x1f0) == 0) {
    lVar9 = FUN_141038380(param_1 + -0x4d8);
    iVar1 = *(int *)(param_1 + 0x1f0);
    iVar4 = *(int *)(lVar9 + 8);
    if (*(int *)(lVar9 + 8) < 4) {
      iVar4 = 3;
    }
    iVar8 = iVar1 + iVar4;
    *(int *)(param_1 + 0x1f0) = iVar8;
    if (*(int *)(param_1 + 500) < iVar8) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 0x1e8);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar1 * 0x40 + *(longlong *)(param_1 + 0x1e8)),0,
               (longlong)iVar4 << 6);
  }
  FUN_1410975c0(param_1);
  *(uint *)(param_1 + -0x498) = *(uint *)(param_1 + -0x498) & 0xffefffff;
  plVar10 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xbc);
  pwVar17 = (wchar_t *)0x0;
  if (plVar10 != (longlong *)0x0) {
    lVar9 = FUN_1413f82e0();
    if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      uVar11 = AGFireballProjectile::GetPrivateStaticClass();
      lVar9 = (**(code **)(*plVar10 + 0x628))(plVar10,uVar11);
      if ((lVar9 != 0) && (lVar9 = *(longlong *)(lVar9 + 0x3b0), lVar9 != 0)) {
        pwVar12 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnAbilityItemChanged",L"::");
        pwVar16 = pwVar17;
        while (pwVar6 = pwVar12, pwVar6 != (wchar_t *)0x0) {
          pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
          pwVar16 = pwVar6;
        }
        FName::FName(&local_res10,pwVar16 + 2,1);
        FWeakObjectPtr::operator=(&local_38,0);
        local_30 = 0;
        FWeakObjectPtr::operator=(&local_38,param_1 + -0x4d8);
        local_30 = local_res10;
        local_res8 = 0;
        if ((local_res10 != 0) && (lVar13 = FWeakObjectPtr::Get(&local_38), lVar13 != 0)) {
          UObject::FindFunction(lVar13,local_30);
        }
        piVar2 = *(int **)(lVar9 + 0x38);
        iVar1 = *(int *)(lVar9 + 0x40);
        for (piVar15 = piVar2; piVar15 != piVar2 + (longlong)iVar1 * 4; piVar15 = piVar15 + 4) {
          if (((*piVar15 == local_38) && (piVar15[1] == local_34)) ||
             ((cVar7 = FWeakObjectPtr::IsValid(piVar15), cVar7 == '\0' &&
              (cVar7 = FWeakObjectPtr::IsValid(&local_38), cVar7 == '\0')))) {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          if ((bVar5) && (*(longlong *)(piVar15 + 2) == local_30)) {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          if (bVar5) {
            if ((int)((longlong)piVar15 - (longlong)piVar2 >> 4) != -1) goto LAB_14104e465;
            break;
          }
        }
        iVar1 = *(int *)(lVar9 + 0x40);
        lVar13 = (longlong)iVar1;
        *(int *)(lVar9 + 0x40) = iVar1 + 1;
        if (*(int *)(lVar9 + 0x44) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar9 + 0x38,iVar1);
        }
        lVar3 = *(longlong *)(lVar9 + 0x38);
        *(int *)(lVar3 + lVar13 * 0x10) = local_38;
        *(int *)(lVar3 + 4 + lVar13 * 0x10) = local_34;
        *(longlong *)(lVar3 + 8 + lVar13 * 0x10) = local_30;
LAB_14104e465:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(lVar9 + 0x38);
      }
    }
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  pwVar16 = *(wchar_t **)(DAT_146b33f38 + 0x90);
  if (pwVar16 != (wchar_t *)0x0) {
    lVar9 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(pwVar16 + 8) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar16 + 8) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_14104e4d5;
  }
  pwVar16 = pwVar17;
LAB_14104e4d5:
  lVar9 = FWeakObjectPtr::Get(param_1 + 0xb4);
  if (lVar9 != 0) {
    lVar13 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8)
        != lVar13 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pwVar17 = *(wchar_t **)(lVar9 + 0xa58);
    }
  }
  if ((pwVar16 != (wchar_t *)0x0) && (pwVar17 != (wchar_t *)0x0)) {
    puVar14 = (undefined8 *)FUN_1411e6b10(pwVar16,&local_res8,pwVar17 + 0x44);
    *(undefined8 *)(param_1 + 0x4f0) = *puVar14;
  }
  return;
}



// FUNCTION 14104e560 FUN_14104e560 body=126 status=ok
// SIG undefined FUN_14104e560(void)

void FUN_14104e560(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    thunk_FUN_140fb3220();
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x700));
  if (*(longlong *)(param_1 + 0x708) != 0) {
    FUN_141064ec0(*(longlong *)(param_1 + 0x708),0);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x700));
  FUN_1410652a0(param_1 + -0x4d8,0);
  *(undefined1 *)(param_1 + 0x730) = 0;
  FUN_142ecd460(param_1 + -0x4d8);
  FUN_142ec8ac0(param_1);
  return;
}



// FUNCTION 14104e5e0 FUN_14104e5e0 body=653 status=ok
// SIG undefined FUN_14104e5e0(void)

ulonglong FUN_14104e5e0(longlong param_1,float param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  
  FUN_142ec8c70();
  if (*(longlong *)(param_1 + 0x9e0) != 0) {
    FUN_142edaa40();
  }
  plVar1 = (longlong *)(param_1 + -0x4d8);
  uVar6 = (**(code **)(*plVar1 + 0x3f8))(plVar1);
  if ((char)uVar6 != '\0') {
    LOCK();
    bVar9 = *(int *)(param_1 + 0xa24) == 0;
    if (bVar9) {
      *(int *)(param_1 + 0xa24) = 0;
    }
    UNLOCK();
    if (bVar9) {
      lVar7 = *(longlong *)(param_1 + 0x1e8);
      lVar8 = (longlong)*(int *)(param_1 + 0x1f0) * 0x40 + lVar7;
      bVar9 = true;
      for (; lVar7 != lVar8; lVar7 = lVar7 + 0x40) {
        lVar3 = *(longlong *)(lVar7 + 0x10);
        if (lVar3 == 0) {
LAB_14104e685:
          bVar9 = false;
        }
        else if (*(char *)(lVar7 + 0x28) != '\x02') {
          if ((lVar3 != 0) && (*(char *)(lVar3 + 0x2d4) == '\x04')) {
            *(undefined1 *)(lVar7 + 0x28) = 2;
          }
          goto LAB_14104e685;
        }
      }
      LOCK();
      bVar10 = *(int *)(param_1 + 0xa24) == 0;
      if (bVar10) {
        *(int *)(param_1 + 0xa24) = 0;
      }
      UNLOCK();
      if ((bVar10) && (bVar9)) {
        LOCK();
        *(undefined4 *)(param_1 + 0xa00) = 1;
        UNLOCK();
        cVar4 = FUN_141061650();
        if (cVar4 != '\0') {
          FUN_14105ecc0(plVar1);
          FUN_142ecd4d0(plVar1);
        }
        lVar7 = *(longlong *)(param_1 + 0x1e8);
        lVar8 = (longlong)*(int *)(param_1 + 0x1f0) * 0x40 + lVar7;
        for (; lVar7 != lVar8; lVar7 = lVar7 + 0x40) {
          if (*(longlong *)(lVar7 + 0x10) != 0) {
            FUN_141032eb0();
          }
        }
      }
      LOCK();
      *(uint *)(param_1 + 0xa24) = (uint)bVar9;
      UNLOCK();
    }
    uVar5 = *(byte *)(param_1 + 0x1d8) - 1;
    uVar6 = (ulonglong)uVar5;
    switch(uVar5) {
    case 0:
      uVar6 = FUN_14103b5a0(plVar1);
      break;
    case 1:
      uVar6 = FUN_14103c0c0(plVar1);
      break;
    case 2:
      uVar6 = FUN_14103c060(plVar1);
      break;
    case 3:
      uVar6 = FUN_14103c3f0(plVar1);
      break;
    case 4:
      uVar6 = (**(code **)(*plVar1 + 0x5c0))(plVar1);
      break;
    case 5:
      uVar6 = FUN_14103b3a0(plVar1);
      break;
    case 6:
      if ((0.0 < *(float *)(param_1 + 0x9f4)) &&
         (param_2 = *(float *)(param_1 + 0x9f4) - param_2, *(float *)(param_1 + 0x9f4) = param_2,
         param_2 <= 0.0)) {
        FUN_141053b70(plVar1);
      }
      LOCK();
      iVar2 = *(int *)(param_1 + 0xa08);
      *(int *)(param_1 + 0xa08) = 0;
      UNLOCK();
      if (iVar2 != 0) {
        FUN_141067050(plVar1);
      }
      LOCK();
      iVar2 = *(int *)(param_1 + 0x9fc);
      *(int *)(param_1 + 0x9fc) = 0;
      UNLOCK();
      if (iVar2 != 0) {
        FUN_1410582c0(plVar1);
      }
      LOCK();
      iVar2 = *(int *)(param_1 + 0xa20);
      *(int *)(param_1 + 0xa20) = 0;
      UNLOCK();
      if (iVar2 != 0) {
        FUN_141056e20(plVar1);
      }
      uVar6 = 0;
      LOCK();
      uVar5 = *(uint *)(param_1 + 0xa24);
      if (uVar5 == 0) {
        *(uint *)(param_1 + 0xa24) = 0;
      }
      else {
        uVar6 = (ulonglong)uVar5;
      }
      UNLOCK();
      if (uVar5 != 0) {
        LOCK();
        uVar5 = *(uint *)(param_1 + 0xa00);
        *(uint *)(param_1 + 0xa00) = 0;
        uVar6 = (ulonglong)uVar5;
        UNLOCK();
        if (uVar5 != 0) {
          lVar7 = *(longlong *)(param_1 + 0x1e8);
          lVar8 = (longlong)*(int *)(param_1 + 0x1f0) * 0x40 + lVar7;
          for (; lVar7 != lVar8; lVar7 = lVar7 + 0x40) {
            uVar6 = FUN_141057960(*(undefined8 *)(lVar7 + 0x10),0);
          }
        }
      }
      if (*(longlong *)(param_1 + 0x6f0) != 0) {
        LOCK();
        iVar2 = *(int *)(param_1 + 0xa04);
        *(int *)(param_1 + 0xa04) = 0;
        UNLOCK();
        if (iVar2 != 0) {
          uVar6 = FUN_140fd5570(*(undefined8 *)(param_1 + 0x6f0));
        }
      }
    }
  }
  return uVar6;
}



// FUNCTION 14104e890 FUN_14104e890 body=207 status=ok
// SIG undefined FUN_14104e890(void)

ulonglong FUN_14104e890(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar2 = FUN_142ec8d60();
  if ((char)uVar2 == '\0') {
    return uVar2 & 0xffffffffffffff00;
  }
  plVar3 = (longlong *)FUN_140e97230(param_1 + -0x4d8);
  if (plVar3 != (longlong *)0x0) {
    uVar4 = AGFireballProjectile::GetPrivateStaticClass();
    lVar5 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
    if (lVar5 != 0) {
      uVar2 = *(ulonglong *)(lVar5 + 0x3b0);
      goto LAB_14104e8ee;
    }
  }
  uVar2 = 0;
LAB_14104e8ee:
  *(ulonglong *)(param_1 + 0x1f8) = uVar2;
  if (*(char *)(param_1 + 0x1d8) == '\a') {
    FUN_141063a00(param_1 + -0x4d8,0,1,0);
    FUN_14105ecc0(param_1 + -0x4d8);
    FUN_142ecd4d0(param_1 + -0x4d8);
    LOCK();
    *(undefined4 *)(param_1 + 0xa00) = 1;
    UNLOCK();
    LOCK();
    uVar1 = *(uint *)(param_1 + 0x9fc);
    *(uint *)(param_1 + 0x9fc) = 1;
    uVar2 = (ulonglong)uVar1;
    UNLOCK();
    LOCK();
    *(undefined4 *)(param_1 + 0xb0) = 1;
    UNLOCK();
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}



// FUNCTION 14104e980 FUN_14104e980 body=18 status=ok
// SIG undefined FUN_14104e980(void)

undefined4 FUN_14104e980(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x648) = param_2;
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x64c);
  *(undefined4 *)(param_1 + 0x64c) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 14104e9a0 FUN_14104e9a0 body=205 status=ok
// SIG undefined FUN_14104e9a0(void)

void FUN_14104e9a0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_18;
  undefined8 local_10;
  
  cVar1 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x184);
  if (cVar1 != '\0') {
    FUN_141057d60(param_1);
    if (0 < (int)param_1[0x44]) {
      lVar3 = *(longlong *)param_1[0x43];
      local_18 = lVar3;
      if (lVar3 == 0) {
        local_10 = 0;
      }
      else {
        uVar2 = UBlendableInterface::GetPrivateStaticClass();
        local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar2);
      }
      uVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0x184);
      FUN_142ed36d0(uVar2,&local_18,0);
    }
  }
  (**(code **)(*param_1 + 0x2d0))(param_1);
  cVar1 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x184);
  if (cVar1 != '\0') {
    lVar3 = FWeakObjectPtr::Get((longlong)param_1 + 0x184);
    LOCK();
    *(undefined4 *)(lVar3 + 0x588) = 1;
    UNLOCK();
  }
                    /* WARNING: Could not recover jumptable at 0x00014104ea66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x278))(param_1,1);
  return;
}



// FUNCTION 14104ea70 FUN_14104ea70 body=185 status=ok
// SIG undefined FUN_14104ea70(void)

void FUN_14104ea70(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_18;
  undefined8 local_10;
  
  cVar1 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x184);
  if (cVar1 != '\0') {
    lVar3 = param_1[0x40];
    local_18 = lVar3;
    if (lVar3 == 0) {
      local_10 = 0;
    }
    else {
      uVar2 = UBlendableInterface::GetPrivateStaticClass();
      local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar2);
    }
    uVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0x184);
    FUN_142ed36d0(uVar2,&local_18,0);
  }
  (**(code **)(*param_1 + 0x2d0))(param_1);
  cVar1 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x184);
  if (cVar1 != '\0') {
    lVar3 = FWeakObjectPtr::Get((longlong)param_1 + 0x184);
    LOCK();
    *(undefined4 *)(lVar3 + 0x588) = 1;
    UNLOCK();
  }
                    /* WARNING: Could not recover jumptable at 0x00014104eb22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x278))(param_1,1);
  return;
}



// FUNCTION 14104eb30 FUN_14104eb30 body=185 status=ok
// SIG undefined FUN_14104eb30(void)

void FUN_14104eb30(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_18;
  undefined8 local_10;
  
  cVar1 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x184);
  if (cVar1 != '\0') {
    lVar3 = param_1[0x3f];
    local_18 = lVar3;
    if (lVar3 == 0) {
      local_10 = 0;
    }
    else {
      uVar2 = UBlendableInterface::GetPrivateStaticClass();
      local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar2);
    }
    uVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0x184);
    FUN_142ed36d0(uVar2,&local_18,0);
  }
  (**(code **)(*param_1 + 0x2d0))(param_1);
  cVar1 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x184);
  if (cVar1 != '\0') {
    lVar3 = FWeakObjectPtr::Get((longlong)param_1 + 0x184);
    LOCK();
    *(undefined4 *)(lVar3 + 0x588) = 1;
    UNLOCK();
  }
                    /* WARNING: Could not recover jumptable at 0x00014104ebe2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x278))(param_1,1);
  return;
}



// FUNCTION 14104ebf0 FUN_14104ebf0 body=308 status=ok
// SIG undefined FUN_14104ebf0(void)

void FUN_14104ebf0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong local_28 [3];
  undefined8 local_10;
  
  if (param_1[0x40] != 0) {
    plVar4 = (longlong *)(param_1[0x40] + 0x170);
    (**(code **)(*plVar4 + 0x38))(plVar4,1);
  }
  cVar1 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x184);
  if (cVar1 != '\0') {
    lVar3 = param_1[0x40];
    local_28[2] = lVar3;
    if (lVar3 == 0) {
      local_10 = 0;
    }
    else {
      uVar2 = UBlendableInterface::GetPrivateStaticClass();
      local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar2);
    }
    uVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0x184);
    FUN_142ed36d0(uVar2,local_28 + 2,0);
  }
  (**(code **)(*param_1 + 0x2d0))(param_1);
  cVar1 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x184);
  if (cVar1 != '\0') {
    lVar3 = FWeakObjectPtr::Get((longlong)param_1 + 0x184);
    LOCK();
    *(undefined4 *)(lVar3 + 0x588) = 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x278))(param_1,1);
  if (param_1[0x3f] != 0) {
    local_28[0] = 0;
    local_28[1] = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Memcpy(local_28[0],L"transitionOff",0x1c);
    FUN_142088910(param_1[0x3f],local_28);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14104ed30 FUN_14104ed30 body=86 status=ok
// SIG undefined FUN_14104ed30(void)

void FUN_14104ed30(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  (**(code **)(*param_1 + 0x2d0))();
  cVar1 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x184);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0x184);
    LOCK();
    *(undefined4 *)(lVar2 + 0x588) = 1;
    UNLOCK();
  }
                    /* WARNING: Could not recover jumptable at 0x00014104ed7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x278))(param_1,1);
  return;
}



// FUNCTION 14104ed90 FUN_14104ed90 body=515 status=ok
// SIG undefined FUN_14104ed90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14104ed90(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_a0;
  undefined8 local_98;
  undefined1 local_90 [24];
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  cVar1 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x184);
  if (cVar1 == '\0') goto LAB_14104ef38;
  FUN_141057fb0(param_1);
  FWeakObjectPtr::operator=(&local_a8,param_1);
  uVar4 = 0;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_68);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1444f8920;
    puVar3[1] = param_1;
    *(undefined4 *)(puVar3 + 2) = local_a8;
    *(undefined4 *)((longlong)puVar3 + 0x14) = local_a4;
  }
  local_78[0] = &LAB_141031e00;
  FUN_14208c300(param_1,local_78);
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
  if (param_1[0x41] == 0) {
LAB_14104eee3:
    lVar6 = param_1[0x42];
    local_a0 = lVar6;
    if (lVar6 != 0) {
      uVar4 = UBlendableInterface::GetPrivateStaticClass();
      uVar4 = UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar4);
    }
    local_98 = uVar4;
    uVar4 = FWeakObjectPtr::Get((longlong)param_1 + 0x184);
    plVar5 = &local_a0;
  }
  else {
    iVar2 = FUN_142eb7440();
    if (iVar2 < 1) goto LAB_14104eee3;
    (**(code **)(*(longlong *)param_1[0x41] + 0x2c8))((longlong *)param_1[0x41],0,0);
    uVar4 = FWeakObjectPtr::Get((longlong)param_1 + 0x184);
    plVar5 = (longlong *)
             TScriptInterface<IBlendableInterface>::
             TScriptInterface<IBlendableInterface><UMaterialInterface>(local_90,param_1[0x41]);
  }
  FUN_142ed36d0(uVar4,plVar5,0);
LAB_14104ef38:
  (**(code **)(*param_1 + 0x2d0))(param_1);
  cVar1 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x184);
  if (cVar1 != '\0') {
    lVar6 = FWeakObjectPtr::Get((longlong)param_1 + 0x184);
    LOCK();
    *(undefined4 *)(lVar6 + 0x588) = 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x278))(param_1,1);
  return;
}



// FUNCTION 14104efa0 FUN_14104efa0 body=214 status=ok
// SIG undefined FUN_14104efa0(void)

void FUN_14104efa0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_18;
  undefined8 local_10;
  
  lVar4 = (longlong)param_1 + 0x184;
  cVar1 = FWeakObjectPtr::IsValid(lVar4);
  if (cVar1 != '\0') {
    lVar3 = param_1[0x47];
    local_18 = lVar3;
    if (lVar3 == 0) {
      local_10 = 0;
    }
    else {
      uVar2 = UBlendableInterface::GetPrivateStaticClass();
      local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar2);
    }
    uVar2 = FWeakObjectPtr::Get(lVar4);
    FUN_142ed36d0(uVar2,&local_18,0);
  }
  lVar3 = FWeakObjectPtr::Get(lVar4);
  if (*(longlong *)(lVar3 + 0x6e0) != 0) {
    lVar3 = FWeakObjectPtr::Get(lVar4);
    FUN_142b6fa90(*(undefined8 *)(lVar3 + 0x6e0));
  }
  (**(code **)(*param_1 + 0x2d0))(param_1);
  cVar1 = FWeakObjectPtr::IsValid(lVar4);
  if (cVar1 != '\0') {
    lVar4 = FWeakObjectPtr::Get(lVar4);
    LOCK();
    *(undefined4 *)(lVar4 + 0x588) = 1;
    UNLOCK();
  }
                    /* WARNING: Could not recover jumptable at 0x00014104f06f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x278))(param_1,1);
  return;
}



// FUNCTION 14104f080 FUN_14104f080 body=114 status=ok
// SIG undefined FUN_14104f080(void)

void FUN_14104f080(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x184);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0x184);
    if (*(longlong *)(lVar2 + 0x6e0) != 0) {
      lVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0x184);
      TBaseMulticastDelegate<void>::Remove(*(longlong *)(lVar2 + 0x6e0) + 0x1b0,param_1[0x3f]);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014104f0eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x278))(param_1,0);
  return;
}



// FUNCTION 14104f100 FUN_14104f100 body=114 status=ok
// SIG undefined FUN_14104f100(void)

void FUN_14104f100(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x184);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0x184);
    if (*(longlong *)(lVar2 + 0x6e0) != 0) {
      lVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0x184);
      TBaseMulticastDelegate<void>::Remove(*(longlong *)(lVar2 + 0x6e0) + 0x120,param_1[0x44]);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014104f16b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x278))(param_1,0);
  return;
}



// FUNCTION 14104f190 FUN_14104f190 body=165 status=ok
// SIG undefined FUN_14104f190(void)

void FUN_14104f190(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)param_1[0x40];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x278))(plVar1,0);
  }
  if (param_1[0x41] != 0) {
    FUN_142ecffe0();
  }
  if (((param_1[0x3f] != 0) &&
      (cVar2 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x184), cVar2 != '\0')) &&
     (lVar3 = FWeakObjectPtr::Get((longlong)param_1 + 0x184), *(longlong *)(lVar3 + 0x6e0) != 0)) {
    lVar3 = FWeakObjectPtr::Get((longlong)param_1 + 0x184);
    TBaseMulticastDelegate<void>::Remove(*(longlong *)(lVar3 + 0x6e0) + 0xd8,param_1[0x3f]);
  }
                    /* WARNING: Could not recover jumptable at 0x00014104f22e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x278))(param_1,0);
  return;
}



// FUNCTION 14104f240 FUN_14104f240 body=176 status=ok
// SIG undefined FUN_14104f240(void)

void FUN_14104f240(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x184);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0x184);
    if (*(longlong *)(lVar2 + 0x6e0) != 0) {
      lVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0x184);
      TBaseMulticastDelegate<void>::Remove(*(longlong *)(lVar2 + 0x6e0) + 0x138,param_1[0x40]);
      lVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0x184);
      TBaseMulticastDelegate<void>::Remove(*(longlong *)(lVar2 + 0x6e0) + 0x150,param_1[0x41]);
      lVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0x184);
      FUN_142b6fa90(*(undefined8 *)(lVar2 + 0x6e0));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014104f2e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x278))(param_1,0);
  return;
}



// FUNCTION 14104f2f0 FUN_14104f2f0 body=385 status=ok
// SIG undefined FUN_14104f2f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14104f2f0(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e4 [3];
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  (**(code **)(*param_1 + 0x580))(param_1,1);
  local_e4[0] = 0xffffffff;
  if (param_3 != 0) {
    FUN_14170c210(local_e4,param_3);
  }
  local_e8 = 0xffffffff;
  uVar2 = 0xffffffff;
  if (param_2 != 0) {
    FUN_14170c210(&local_e8,param_2);
    uVar2 = local_e8;
  }
  uVar3 = local_e4[0];
  local_e8 = 0xffffffff;
  local_e4[0] = 0xffffffff;
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_c8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605c38;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = uVar2;
    uVar2 = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uVar3;
    uVar3 = 0xffffffff;
  }
  local_d8[0] = &LAB_141031e90;
  FUN_1420849a0(param_1,local_88,local_d8);
  if (local_98 != 0) {
    plVar4 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar4 = local_a8;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_1416f8340(uVar3);
  FUN_1416f8340(uVar2);
  FUN_1416f8340(local_e8);
  FUN_1416f8340(local_e4[0]);
  FUN_14208c260(param_1,local_88);
  if (local_48 != 0) {
    plVar4 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar4 = local_58;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14104f480 FUN_14104f480 body=302 status=ok
// SIG undefined FUN_14104f480(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14104f480(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  FWeakObjectPtr::operator=(&local_d8);
  local_98 = (longlong *)0x0;
  local_88 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_b8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_d8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_d4;
  }
  local_c8[0] = &LAB_141031f60;
  uVar2 = FUN_1420849a0(param_1,local_78,local_c8);
  FUN_14208c260(param_1,uVar2);
  if (local_38 != 0) {
    plVar3 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar3 = local_48;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    plVar3 = local_b8;
    if (local_98 != (longlong *)0x0) {
      plVar3 = local_98;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14104f5b0 FUN_14104f5b0 body=29 status=ok
// SIG undefined FUN_14104f5b0(void)

void FUN_14104f5b0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x640);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014104f5c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_2,1,0);
    return;
  }
  return;
}



// FUNCTION 14104f5d0 FUN_14104f5d0 body=182 status=ok
// SIG undefined FUN_14104f5d0(void)

void FUN_14104f5d0(longlong param_1,undefined8 *param_2,char param_3)

{
  char cVar1;
  
  cVar1 = FUN_14103f020();
  if (cVar1 != '\0') {
    if ((*(longlong *)(param_1 + 0x698) != 0) && (*(longlong *)(param_1 + 0x6a8) != 0)) {
      TBaseMulticastDelegate<void>::Remove
                (*(longlong *)(param_1 + 0x698) + 0x1f8,*(undefined8 *)(param_1 + 0x6a8));
    }
    if (param_3 != '\0') {
      TArray<FEdgeLoop,TSizedDefaultAllocator<32>_>::Reset(param_1 + 0x6b0,0);
      cVar1 = FUN_142b4f460(*param_2);
      if (cVar1 != '\0') {
        FUN_142b47080(*param_2,param_1 + 0x6b0);
        *(undefined4 *)(param_1 + 0x6c0) = 0;
        FUN_141061980(param_1);
        return;
      }
    }
    FUN_141052d80(param_1);
  }
  return;
}



// FUNCTION 14104f690 FUN_14104f690 body=217 status=ok
// SIG undefined FUN_14104f690(void)

void FUN_14104f690(longlong param_1,undefined8 *param_2,char param_3)

{
  char cVar1;
  
  cVar1 = FUN_14103f160();
  if (cVar1 != '\0') {
    if ((*(longlong *)(param_1 + 0x6e0) != 0) && (*(longlong *)(param_1 + 0x898) != 0)) {
      TBaseMulticastDelegate<void>::Remove
                (*(longlong *)(param_1 + 0x6e0) + 0x1f8,*(undefined8 *)(param_1 + 0x898));
    }
    if (param_3 != '\0') {
      TArray<FEdgeLoop,TSizedDefaultAllocator<32>_>::Reset(param_1 + 0x8a0,0);
      cVar1 = FUN_142b4f460(*param_2);
      if (cVar1 != '\0') {
        FUN_142b47080(*param_2,param_1 + 0x8a0);
        *(undefined4 *)(param_1 + 0x8b0) = 0;
        FUN_141061ac0(param_1);
        return;
      }
      *(undefined1 *)(param_1 + 0x688) = 2;
      FUN_141066f40(param_1);
      return;
    }
    FUN_1410622b0(param_1,7);
  }
  return;
}



// FUNCTION 14104f770 FUN_14104f770 body=251 status=ok
// SIG undefined FUN_14104f770(void)

void FUN_14104f770(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong local_90 [2];
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  longlong local_70 [3];
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_78 = param_1;
  FString::FString(local_70);
  FWeakObjectPtr::operator=(&local_res8,param_1);
  uVar1 = local_78;
  FString::FString(local_90,local_70);
  local_80 = local_res8;
  local_7c = local_resc;
  local_28 = 0;
  local_18 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x28,local_48);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_14467a608;
    puVar2[1] = uVar1;
    FString::FString(puVar2 + 2,local_90);
    *(undefined4 *)(puVar2 + 4) = local_80;
    *(undefined4 *)((longlong)puVar2 + 0x24) = local_7c;
  }
  local_58[0] = &LAB_141032580;
  if (local_90[0] != 0) {
    FMemory::Free();
  }
  FUN_14208c5d0(param_1,local_58);
  if (local_70[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14104f870 FUN_14104f870 body=251 status=ok
// SIG undefined FUN_14104f870(void)

void FUN_14104f870(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong local_90 [2];
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  longlong local_70 [3];
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_78 = param_1;
  FString::FString(local_70);
  FWeakObjectPtr::operator=(&local_res8,param_1);
  uVar1 = local_78;
  FString::FString(local_90,local_70);
  local_80 = local_res8;
  local_7c = local_resc;
  local_28 = 0;
  local_18 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x28,local_48);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_14467a608;
    puVar2[1] = uVar1;
    FString::FString(puVar2 + 2,local_90);
    *(undefined4 *)(puVar2 + 4) = local_80;
    *(undefined4 *)((longlong)puVar2 + 0x24) = local_7c;
  }
  local_58[0] = &LAB_1410323e0;
  if (local_90[0] != 0) {
    FMemory::Free();
  }
  FUN_14208c5d0(param_1,local_58);
  if (local_70[0] != 0) {
    FMemory::Free();
  }
  return;
}


