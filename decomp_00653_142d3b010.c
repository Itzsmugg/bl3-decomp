// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142d3b010 FUN_142d3b010 body=1053 status=ok
// SIG undefined FUN_142d3b010(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142d3b010(longlong param_1,undefined8 *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  float *pfVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float local_98;
  float local_94;
  float local_90;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  float local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 local_60 [24];
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  if (*(longlong *)(param_3 + 0x18) == 0) {
    *param_2 = 0;
    return param_2;
  }
  plVar4 = *(longlong **)(*(longlong *)(param_3 + 0x18) + 0x118);
  if (plVar4 != (longlong *)0x0) {
    uVar9 = ULevelSequencePlayer::GetPrivateStaticClass();
    lVar10 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar9);
    if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x898) != 0)) {
      lVar11 = FUN_142e20fc0();
      for (lVar14 = *(longlong *)(lVar10 + 0x898); lVar14 != 0;
          lVar14 = *(longlong *)(lVar14 + 0x30)) {
        if (lVar14 == lVar11) {
          if ((*(longlong *)(lVar10 + 0x898) != 0) && (*(char *)(lVar10 + 0x8b4) != '\0')) {
            pfVar12 = (float *)(**(code **)(*plVar4 + 0x308))(plVar4,&local_6c);
            lVar14 = plVar4[0x2d];
            fVar1 = pfVar12[1];
            fVar2 = *pfVar12;
            fVar3 = pfVar12[2];
            if (lVar14 == 0) {
              local_78 = _DAT_1468b5d90;
              local_70 = DAT_1468b5d98;
            }
            else {
              local_78 = *(undefined8 *)(lVar14 + 0x220);
              local_70 = *(float *)(lVar14 + 0x228);
            }
            local_88 = local_78;
            local_80 = local_70;
            if (lVar14 == 0) {
              uVar15 = (undefined4)DAT_1468b5da0;
              uVar16 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
              local_70 = (float)DAT_1468b5da8;
            }
            else {
              local_48 = *(float *)(lVar14 + 0x210);
              fStack_44 = *(float *)(lVar14 + 0x214);
              fStack_40 = *(float *)(lVar14 + 0x218);
              fStack_3c = *(float *)(lVar14 + 0x21c);
              auVar7._4_4_ = -(uint)(*(float *)(lVar14 + 0x254) != fStack_44);
              auVar7._0_4_ = -(uint)(*(float *)(lVar14 + 0x250) != local_48);
              auVar7._8_4_ = -(uint)(*(float *)(lVar14 + 600) != fStack_40);
              auVar7._12_4_ = -(uint)(*(float *)(lVar14 + 0x25c) != fStack_3c);
              iVar8 = movmskps(local_70,auVar7);
              if (iVar8 != 0) {
                *(float *)(lVar14 + 0x250) = local_48;
                *(float *)(lVar14 + 0x254) = fStack_44;
                *(float *)(lVar14 + 600) = fStack_40;
                *(float *)(lVar14 + 0x25c) = fStack_3c;
                puVar13 = (undefined8 *)FQuat::Rotator(&local_48,local_60);
                *(undefined8 *)(lVar14 + 0x260) = *puVar13;
                *(undefined4 *)(lVar14 + 0x268) = *(undefined4 *)(puVar13 + 1);
              }
              uVar15 = (undefined4)*(undefined8 *)(lVar14 + 0x260);
              uVar16 = (undefined4)((ulonglong)*(undefined8 *)(lVar14 + 0x260) >> 0x20);
              local_70 = (float)*(undefined4 *)(lVar14 + 0x268);
            }
            local_78 = CONCAT44(uVar16,uVar15);
            local_6c = local_78;
            local_64 = local_70;
            FRotator::Vector(&local_6c,&local_98);
            bVar5 = (local_98 * DAT_1464aa7a0 - local_90 * (float)DAT_1464aa798) *
                    (*(float *)(lVar10 + 0x8ac) - local_88._4_4_) +
                    (local_90 * DAT_1464aa798._4_4_ - local_94 * DAT_1464aa7a0) *
                    (*(float *)(lVar10 + 0x8a8) - (float)local_88) +
                    (local_94 * (float)DAT_1464aa798 - local_98 * DAT_1464aa798._4_4_) *
                    (*(float *)(lVar10 + 0x8b0) - local_80) < 0.0;
            if (fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3 <= 100.0) {
              if (bVar5) {
                uVar9 = *(undefined8 *)(param_1 + 0x68);
              }
              else {
                uVar9 = *(undefined8 *)(param_1 + 0x60);
              }
              goto LAB_142d3b3ea;
            }
            pfVar12 = (float *)(**(code **)(*plVar4 + 0x308))(plVar4,local_60);
            bVar6 = local_94 * pfVar12[1] + local_98 * *pfVar12 + local_90 * pfVar12[2] < 0.0;
            if (bVar5) {
              if (bVar6) {
                if (*(longlong *)(param_1 + 0x90) == 0) goto LAB_142d3b3d3;
                lVar11 = FUN_142e20fc0();
                lVar14 = *(longlong *)(param_1 + 0x90);
                lVar10 = lVar14;
                goto joined_r0x000142d3b3c3;
              }
              if (*(longlong *)(param_1 + 0x98) == 0) goto LAB_142d3b39e;
              lVar11 = FUN_142e20fc0();
              lVar14 = *(longlong *)(param_1 + 0x98);
              lVar10 = lVar14;
              goto joined_r0x000142d3b38a;
            }
            if (bVar6) {
              if (*(longlong *)(param_1 + 0x78) == 0) goto LAB_142d3b35e;
              lVar11 = FUN_142e20fc0();
              lVar14 = *(longlong *)(param_1 + 0x78);
              lVar10 = lVar14;
              goto joined_r0x000142d3b347;
            }
            if (*(longlong *)(param_1 + 0x80) == 0) goto LAB_142d3b322;
            lVar11 = FUN_142e20fc0();
            lVar14 = *(longlong *)(param_1 + 0x80);
            lVar10 = lVar14;
            goto joined_r0x000142d3b312;
          }
          break;
        }
      }
    }
  }
  *param_2 = 0;
  return param_2;
joined_r0x000142d3b312:
  if (lVar10 == 0) goto LAB_142d3b322;
  if (lVar10 == lVar11) goto LAB_142d3b324;
  lVar10 = *(longlong *)(lVar10 + 0x30);
  goto joined_r0x000142d3b312;
LAB_142d3b322:
  lVar14 = 0;
LAB_142d3b324:
  lVar10 = 0x80;
  lVar11 = 0x70;
  goto LAB_142d3b3df;
joined_r0x000142d3b347:
  if (lVar10 == 0) goto LAB_142d3b35e;
  if (lVar10 == lVar11) goto LAB_142d3b360;
  lVar10 = *(longlong *)(lVar10 + 0x30);
  goto joined_r0x000142d3b347;
LAB_142d3b35e:
  lVar14 = 0;
LAB_142d3b360:
  lVar10 = 0x78;
  lVar11 = 0x70;
  goto LAB_142d3b3df;
joined_r0x000142d3b38a:
  if (lVar10 == 0) goto LAB_142d3b39e;
  if (lVar10 == lVar11) goto LAB_142d3b3a0;
  lVar10 = *(longlong *)(lVar10 + 0x30);
  goto joined_r0x000142d3b38a;
LAB_142d3b39e:
  lVar14 = 0;
LAB_142d3b3a0:
  lVar10 = 0x98;
  goto LAB_142d3b3da;
joined_r0x000142d3b3c3:
  if (lVar10 == 0) goto LAB_142d3b3d3;
  if (lVar10 == lVar11) goto LAB_142d3b3d5;
  lVar10 = *(longlong *)(lVar10 + 0x30);
  goto joined_r0x000142d3b3c3;
LAB_142d3b3d3:
  lVar14 = 0;
LAB_142d3b3d5:
  lVar10 = 0x90;
LAB_142d3b3da:
  lVar11 = 0x88;
LAB_142d3b3df:
  if (lVar14 == 0) {
    lVar10 = lVar11;
  }
  uVar9 = *(undefined8 *)(lVar10 + param_1);
LAB_142d3b3ea:
  *param_2 = uVar9;
  return param_2;
}



// FUNCTION 142d3b430 FUN_142d3b430 body=97 status=ok
// SIG undefined FUN_142d3b430(void)

ulonglong FUN_142d3b430(void)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = FUN_142d3b8e0();
  if (lVar3 == 0) {
    return 0;
  }
  cVar2 = FUN_142d52a00(lVar3 + 0x58);
  if (cVar2 != '\0') {
    uVar1 = FUN_142d52a20(lVar3 + 0x58);
    uVar1 = FArchive::operator<<(uVar1);
    uVar4 = FUN_142d5fed0(uVar1);
    return uVar4;
  }
  return (ulonglong)*(uint *)(lVar3 + 0x54);
}



// FUNCTION 142d3b4a0 FUN_142d3b4a0 body=291 status=ok
// SIG undefined FUN_142d3b4a0(void)

longlong * FUN_142d3b4a0(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 local_res10;
  longlong local_res18;
  longlong local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_res18 = *param_4;
  if ((param_3 == 0) ||
     (plVar3 = (longlong *)FUN_142d3b9a0(param_1,param_3), plVar3 == (longlong *)0x0)) {
    local_res10 = 0;
    if (local_res18 == 0) {
      plVar3 = (longlong *)FUN_142d39490(param_1,&local_res10,param_3);
      local_res18 = *plVar3;
    }
    plVar5 = *(longlong **)(param_1 + 0x188);
    plVar6 = plVar5 + (longlong)*(int *)(param_1 + 400) * 0xe;
    for (plVar3 = plVar5; plVar3 != plVar6; plVar3 = plVar3 + 0xe) {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        plVar4 = *(longlong **)(lVar2 + 0x38);
        plVar1 = plVar4 + *(int *)(lVar2 + 0x40);
        for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
          if (*plVar4 == local_res18) goto LAB_142d3b55a;
        }
      }
    }
    plVar3 = (longlong *)0x0;
LAB_142d3b55a:
    if (plVar3 == (longlong *)0x0) {
      if (plVar5 != plVar6) {
        do {
          if (*plVar5 == *(longlong *)(param_1 + 0x180)) goto LAB_142d3b581;
          plVar5 = plVar5 + 0xe;
        } while (plVar5 != plVar6);
      }
      plVar5 = (longlong *)0x0;
LAB_142d3b581:
      plVar3 = plVar5;
      if (plVar5 == (longlong *)0x0) {
        uStack_10 = 0xffffffff;
        local_18 = 0;
        goto LAB_142d3b5a5;
      }
    }
  }
  local_18 = *plVar3;
  uStack_10 = (undefined4)plVar3[5];
LAB_142d3b5a5:
  *param_2 = local_18;
  param_2[1] = CONCAT44(uStack_c,uStack_10);
  return param_2;
}



// FUNCTION 142d3b5d0 FUN_142d3b5d0 body=330 status=ok
// SIG undefined FUN_142d3b5d0(void)

longlong * FUN_142d3b5d0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 local_res18;
  longlong local_res20;
  
  local_res20 = *(longlong *)(param_3 + 0xe0);
  lVar2 = FWeakObjectPtr::Get(param_3 + 0xd4);
  if ((lVar2 == 0) || (plVar3 = (longlong *)FUN_142d3b9a0(param_1,lVar2), plVar3 == (longlong *)0x0)
     ) {
    local_res18 = 0;
    if (local_res20 == 0) {
      uVar4 = FWeakObjectPtr::Get(param_3 + 0xd4);
      plVar3 = (longlong *)FUN_142d39490(param_1,&local_res18,uVar4);
      local_res20 = *plVar3;
    }
    plVar3 = *(longlong **)(param_1 + 0x188);
    plVar7 = plVar3 + (longlong)*(int *)(param_1 + 400) * 0xe;
    for (plVar6 = plVar3; plVar6 != plVar7; plVar6 = plVar6 + 0xe) {
      lVar2 = *plVar6;
      if (lVar2 != 0) {
        plVar5 = *(longlong **)(lVar2 + 0x38);
        plVar1 = plVar5 + *(int *)(lVar2 + 0x40);
        for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
          if (*plVar5 == local_res20) goto LAB_142d3b6aa;
        }
      }
    }
    plVar6 = (longlong *)0x0;
LAB_142d3b6aa:
    if (plVar6 != (longlong *)0x0) goto LAB_142d3b6d6;
    if (plVar3 != plVar7) {
      do {
        if (*plVar3 == *(longlong *)(param_1 + 0x180)) goto LAB_142d3b6d1;
        plVar3 = plVar3 + 0xe;
      } while (plVar3 != plVar7);
    }
    plVar3 = (longlong *)0x0;
  }
LAB_142d3b6d1:
  plVar6 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    *param_2 = *(longlong *)(param_1 + 0x180);
    *(undefined4 *)(param_2 + 1) = 0xffffffff;
    return param_2;
  }
LAB_142d3b6d6:
  *param_2 = *plVar6;
  *(int *)(param_2 + 1) = (int)plVar6[5];
  return param_2;
}



// FUNCTION 142d3b720 FUN_142d3b720 body=95 status=ok
// SIG undefined FUN_142d3b720(void)

undefined4 FUN_142d3b720(void)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = FUN_142d3b8e0();
  if (lVar3 == 0) {
    return 0;
  }
  cVar2 = FUN_142d52a00(lVar3 + 0x58);
  if (cVar2 != '\0') {
    uVar1 = FUN_142d52a20(lVar3 + 0x58);
    lVar3 = FArchive::operator<<(uVar1);
    return *(undefined4 *)(lVar3 + 0x20);
  }
  return *(undefined4 *)(lVar3 + 0x50);
}



// FUNCTION 142d3b780 FUN_142d3b780 body=200 status=ok
// SIG undefined FUN_142d3b780(void)

undefined8 FUN_142d3b780(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined4 uVar8;
  undefined4 uVar7;
  
  lVar3 = FUN_142d3b8e0();
  if (lVar3 != 0) {
    cVar2 = FUN_142d52a00(lVar3 + 0x58);
    if (cVar2 == '\0') {
      fVar4 = *(float *)(lVar3 + 0x50);
    }
    else {
      uVar6 = FUN_142d52a20(lVar3 + 0x58);
      lVar1 = FArchive::operator<<(uVar6);
      fVar4 = *(float *)(lVar1 + 0x20);
    }
    if (0.0 < fVar4) {
      cVar2 = FUN_142d52a00(lVar3 + 0x58);
      if (cVar2 == '\0') {
        fVar4 = *(float *)(lVar3 + 0x50);
      }
      else {
        uVar6 = FUN_142d52a20(lVar3 + 0x58);
        lVar1 = FArchive::operator<<(uVar6);
        fVar4 = *(float *)(lVar1 + 0x20);
      }
      uVar6 = FUN_142d39b50(lVar3);
      uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
      fVar4 = (float)uVar6 / fVar4;
      fVar5 = 0.0;
      uVar8 = 0;
      if ((0.0 <= fVar4) && (fVar5 = fVar4, uVar8 = uVar7, 1.0 <= fVar4)) {
        fVar5 = 1.0;
      }
      return CONCAT44(uVar8,fVar5);
    }
  }
  return 0;
}



// FUNCTION 142d3b850 FUN_142d3b850 body=143 status=ok
// SIG undefined FUN_142d3b850(void)

longlong * FUN_142d3b850(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  iVar6 = (int)param_2[1];
  if ((iVar6 < 0) || (iVar7 = *(int *)(param_1 + 400), iVar7 <= iVar6)) {
    lVar8 = *param_2;
    iVar7 = *(int *)(param_1 + 400);
  }
  else {
    lVar8 = *param_2;
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar6 * 0x70);
    if (*plVar2 == lVar8) {
      return plVar2;
    }
  }
  plVar2 = (longlong *)0x0;
  iVar6 = -1;
  if (0 < iVar7) {
    plVar1 = *(longlong **)(param_1 + 0x188);
    plVar3 = plVar1;
    plVar5 = plVar2;
    do {
      iVar4 = (int)plVar5;
      if (*plVar3 == lVar8) {
        if ((int)plVar3[7] == 0) {
          return plVar1 + (longlong)iVar4 * 0xe;
        }
        if (iVar6 == -1) {
          iVar6 = iVar4;
        }
      }
      plVar5 = (longlong *)(ulonglong)(iVar4 + 1U);
      plVar3 = plVar3 + 0xe;
    } while ((int)(iVar4 + 1U) < iVar7);
    if (iVar6 != -1) {
      plVar2 = plVar1 + (longlong)iVar6 * 0xe;
    }
  }
  return plVar2;
}



// FUNCTION 142d3b8e0 FUN_142d3b8e0 body=178 status=ok
// SIG undefined FUN_142d3b8e0(void)

longlong * FUN_142d3b8e0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  iVar4 = -1;
  if (0 < *(int *)(param_1 + 400)) {
    plVar2 = *(longlong **)(param_1 + 0x188);
    plVar5 = plVar2;
    do {
      if (*plVar5 == param_2) {
        if (param_3 == 0) {
          iVar7 = (int)plVar5[7];
          if (iVar7 == 0) {
LAB_142d3b926:
            return plVar2 + (longlong)iVar6 * 0xe;
          }
        }
        else {
          plVar3 = (longlong *)plVar5[6];
          iVar7 = (int)plVar5[7];
          plVar1 = plVar3 + iVar7;
          for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
            if (*plVar3 == param_3) goto LAB_142d3b926;
          }
        }
        if ((iVar4 == -1) || (iVar7 == 0)) {
          iVar4 = iVar6;
        }
      }
      iVar6 = iVar6 + 1;
      plVar5 = plVar5 + 0xe;
    } while (iVar6 < *(int *)(param_1 + 400));
    if (iVar4 != -1) {
      return plVar2 + (longlong)iVar4 * 0xe;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 142d3b9a0 FUN_142d3b9a0 body=234 status=ok
// SIG undefined FUN_142d3b9a0(void)

longlong FUN_142d3b9a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  
  if (param_2 != 0) {
    if (*(longlong *)(param_2 + 0x118) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_1422336c0();
    }
    iVar2 = *(int *)(param_1 + 400);
    iVar6 = 0;
    if (0 < iVar2) {
      lVar7 = 0;
      piVar5 = (int *)(*(longlong *)(param_1 + 0x188) + 0x48);
      do {
        plVar4 = *(longlong **)(piVar5 + -6);
        plVar1 = plVar4 + piVar5[-4];
        for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
          if (*plVar4 == param_2) goto LAB_142d3ba74;
        }
        if (lVar3 != 0) {
          plVar4 = *(longlong **)(piVar5 + -2);
          plVar1 = plVar4 + *piVar5;
          for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
            if ((*plVar4 != 0) && (*(longlong *)(*plVar4 + 0x118) == lVar3)) {
LAB_142d3ba74:
              if (iVar6 < 0) {
                return 0;
              }
              if (iVar2 <= iVar6) {
                return 0;
              }
              return (longlong)iVar6 * 0x70 + *(longlong *)(param_1 + 0x188);
            }
          }
        }
        iVar6 = iVar6 + 1;
        lVar7 = lVar7 + 1;
        piVar5 = piVar5 + 0x1c;
      } while (lVar7 < iVar2);
    }
  }
  return 0;
}



// FUNCTION 142d3ba90 FUN_142d3ba90 body=191 status=ok
// SIG undefined FUN_142d3ba90(void)

void FUN_142d3ba90(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_c;
  
  plVar6 = *(longlong **)(param_1 + 0x188);
  plVar7 = plVar6 + (longlong)*(int *)(param_1 + 400) * 0xe;
  for (; plVar6 != plVar7; plVar6 = plVar6 + 0xe) {
    lVar3 = *plVar6;
    if ((((lVar3 != 0) && ((*(uint *)(lVar3 + 0x48) & 1) != 0)) &&
        (((byte)*(uint *)(lVar3 + 0x48) & 6) != 2)) &&
       (cVar5 = FUN_142d3e230(param_1,plVar6), cVar5 == '\0')) {
      lVar4 = plVar6[5];
      iVar2 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
      }
      local_18 = (undefined4)lVar3;
      uStack_14 = (undefined4)((ulonglong)lVar3 >> 0x20);
      puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
      *puVar1 = local_18;
      puVar1[1] = uStack_14;
      puVar1[2] = (int)lVar4;
      puVar1[3] = uStack_c;
    }
  }
  return;
}



// FUNCTION 142d3bb50 FUN_142d3bb50 body=45 status=ok
// SIG undefined FUN_142d3bb50(void)

undefined8 FUN_142d3bb50(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if ((((-1 < param_2) && (param_2 < *(int *)(param_1 + 400))) &&
      (lVar1 = (longlong)param_2 * 0x70 + *(longlong *)(param_1 + 0x188), lVar1 != 0)) &&
     (0 < *(int *)(lVar1 + 0x38))) {
    return **(undefined8 **)(lVar1 + 0x30);
  }
  return 0;
}



// FUNCTION 142d3bb80 FUN_142d3bb80 body=100 status=ok
// SIG undefined FUN_142d3bb80(void)

undefined4 FUN_142d3bb80(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = UDamageableInterface::GetPrivateStaticClass();
    plVar2 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_1,uVar1);
    if (plVar2 == (longlong *)0x0) {
      uVar1 = FUN_142e0a580();
      lVar3 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    }
    else {
      lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
    }
    if (lVar3 != 0) {
      return *(undefined4 *)(lVar3 + 0x290);
    }
  }
  return 0x3f800000;
}



// FUNCTION 142d3bbf0 FUN_142d3bbf0 body=101 status=ok
// SIG undefined FUN_142d3bbf0(void)

undefined8 FUN_142d3bbf0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_3 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x70);
    plVar1 = plVar2 + (longlong)*(int *)(param_1 + 0x78) * 2;
    for (; plVar2 != plVar1; plVar2 = plVar2 + 2) {
      if (*plVar2 == param_3) {
        uStack_10 = 0;
        local_18 = param_2;
        uVar3 = FUN_142ca2f00(plVar2[1],&local_18,0);
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 142d3bc60 FUN_142d3bc60 body=32 status=ok
// SIG undefined FUN_142d3bc60(void)

undefined8 FUN_142d3bc60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142dcd4d0(param_3,param_2,0,0);
  return param_2;
}



// FUNCTION 142d3bc80 FUN_142d3bc80 body=289 status=ok
// SIG undefined FUN_142d3bc80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142d3bc80(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  plVar3 = (longlong *)UEnvQueryItemType_Actor::GetValue(param_3);
  uVar7 = DAT_1466ad3c0;
  uVar2 = DAT_1466ad3c8;
  if (plVar3 != (longlong *)0x0) {
    plVar4 = (longlong *)(**(code **)(*plVar3 + 0x678))(plVar3);
    if ((plVar4 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar4 + 0x780))(plVar4), cVar1 == '\0')) {
      lVar5 = FUN_142dddd00(plVar3);
      if (lVar5 == 0) {
        lVar5 = plVar3[0x2d];
        if (lVar5 == 0) {
          local_28 = _DAT_1468b5d90;
          local_20 = DAT_1468b5d98;
        }
        else {
          local_28 = *(undefined8 *)(lVar5 + 0x220);
          local_20 = *(undefined4 *)(lVar5 + 0x228);
        }
        local_10 = local_20;
        puVar6 = &local_18;
        local_18 = local_28;
      }
      else {
        puVar6 = (undefined8 *)FUN_142dd0240(lVar5,&local_18);
      }
      uVar7 = *puVar6;
      uVar2 = *(undefined4 *)(puVar6 + 1);
    }
    else {
      (**(code **)(*plVar4 + 0x610))(plVar4,&local_28,&local_18);
      uVar7 = local_28;
      uVar2 = local_20;
    }
  }
  *param_2 = uVar7;
  *(undefined4 *)(param_2 + 1) = uVar2;
  return param_2;
}



// FUNCTION 142d3bdb0 FUN_142d3bdb0 body=227 status=ok
// SIG undefined FUN_142d3bdb0(void)

undefined8 * FUN_142d3bdb0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 local_28;
  float fStack_20;
  float fStack_1c;
  undefined1 local_18 [16];
  
  lVar6 = FUN_142dd0030(param_3);
  if (lVar6 == 0) {
    uVar8 = (undefined4)DAT_1466ad3a0;
    uVar9 = (undefined4)((ulonglong)DAT_1466ad3a0 >> 0x20);
    uVar5 = DAT_1466ad3a8;
  }
  else {
    lVar1 = *(longlong *)(lVar6 + 0x168);
    if (lVar1 == 0) {
      uVar8 = (undefined4)DAT_1468b5da0;
      uVar9 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      uVar5 = DAT_1468b5da8;
    }
    else {
      fVar3 = *(float *)(lVar1 + 0x210);
      local_28 = *(undefined8 *)(lVar1 + 0x210);
      fStack_20 = *(float *)(lVar1 + 0x218);
      fStack_1c = *(float *)(lVar1 + 0x21c);
      auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != *(float *)(lVar1 + 0x214));
      auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != fVar3);
      auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_20);
      auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_1c);
      iVar4 = movmskps((int)lVar6,auVar2);
      if (iVar4 != 0) {
        *(float *)(lVar1 + 0x250) = fVar3;
        *(float *)(lVar1 + 0x254) = *(float *)(lVar1 + 0x214);
        *(float *)(lVar1 + 600) = fStack_20;
        *(float *)(lVar1 + 0x25c) = fStack_1c;
        puVar7 = (undefined8 *)FQuat::Rotator(&local_28,local_18);
        *(undefined8 *)(lVar1 + 0x260) = *puVar7;
        *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar7 + 1);
      }
      uVar8 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
      uVar9 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
      uVar5 = *(undefined4 *)(lVar1 + 0x268);
    }
  }
  *param_2 = CONCAT44(uVar9,uVar8);
  *(undefined4 *)(param_2 + 1) = uVar5;
  return param_2;
}



// FUNCTION 142d3bea0 FUN_142d3bea0 body=236 status=ok
// SIG undefined FUN_142d3bea0(void)

void FUN_142d3bea0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14233e8d0();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b32008) && (_Init_thread_header(&DAT_146b32008), DAT_146b32008 == -1))
  {
    uVar1 = UEnvQueryTest_Random::StaticClass();
    UEnvQueryTest_Random::StaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"RandomNumberSeed",1);
    DAT_146b32000 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b32008);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146b32000 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b32000 + 0x40) + (short)iVar3;
      local_14 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b32000 + 0x30));
  }
  return;
}



// FUNCTION 142d3bf90 FUN_142d3bf90 body=236 status=ok
// SIG undefined FUN_142d3bf90(void)

void FUN_142d3bf90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14233e8d0();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b31ff8) && (_Init_thread_header(&DAT_146b31ff8), DAT_146b31ff8 == -1))
  {
    uVar1 = FUN_142e6f7c0();
    FUN_142e6f7c0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"RecentlyCausedDamageInstances",1);
    DAT_146b31ff0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b31ff8);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146b31ff0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b31ff0 + 0x40) + (short)iVar3;
      local_14 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b31ff0 + 0x30));
  }
  return;
}



// FUNCTION 142d3c080 FUN_142d3c080 body=75 status=ok
// SIG undefined FUN_142d3c080(void)

undefined4 FUN_142d3c080(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  
  cVar3 = FUN_142d52a00(param_1 + 0x58);
  if (cVar3 != '\0') {
    uVar1 = FUN_142d52a20(param_1 + 0x58);
    lVar2 = FArchive::operator<<(uVar1);
    return *(undefined4 *)(lVar2 + 0x20);
  }
  return *(undefined4 *)(param_1 + 0x50);
}



// FUNCTION 142d3c0d0 FUN_142d3c0d0 body=647 status=ok
// SIG undefined FUN_142d3c0d0(void)

undefined4 FUN_142d3c0d0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  
  lVar5 = FUN_142dd0030(param_3);
  if (lVar5 == 0) {
    return 1;
  }
  cVar4 = FUN_142dd3e20(param_3,param_2);
  if (cVar4 != '\0') {
    return 3;
  }
  lVar6 = FWeakObjectPtr::Get(param_3 + 0x10);
  if (lVar6 == 0) {
    return 5;
  }
  lVar7 = FUN_142d29780(lVar5);
  if ((lVar7 != 0) && ((*(uint *)(lVar7 + 0x840) >> 3 & 1) != 0)) {
    return 2;
  }
  cVar4 = FUN_142dd39e0(lVar6,param_2);
  if (cVar4 == '\0') {
    return 6;
  }
  if ((*(char *)(param_1 + 100) == '\0') && (*(char *)(param_3 + 0x380) == '\x02')) {
    return 0xb;
  }
  if ((*(char *)(param_1 + 0x65) == '\0') && (*(char *)(param_3 + 0x380) == '\0')) {
    return 0xc;
  }
  lVar6 = param_2;
  if ((*(char *)(param_1 + 0x66) == '\0') && (*(char *)(param_3 + 0x380) == '\x01')) {
    return 0xd;
  }
  for (; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x118)) {
    if (lVar6 == lVar5) {
      return 7;
    }
  }
  cVar4 = FUN_14077cd10(param_3 + 0x368);
  if (cVar4 == '\0') {
    return 8;
  }
  if ((0.0 < *(float *)(param_1 + 0x60)) &&
     (*(float *)(param_1 + 0x60) < *(float *)(param_3 + 0x360))) {
    return 9;
  }
  if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
    plVar8 = *(longlong **)(param_1 + 0x90);
    plVar1 = plVar8 + *(int *)(param_1 + 0x98);
    if (plVar8 != plVar1) {
      do {
        iVar2 = *(int *)(*plVar8 + 0x90);
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < iVar2) ||
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)iVar2 * 8)
            != *plVar8 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) goto LAB_142d3c290;
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar1);
    }
    return 4;
  }
LAB_142d3c290:
  if ((0 < *(int *)(param_1 + 0x70)) && (cVar4 = FUN_142def1c0(param_1 + 0x68,lVar5), cVar4 == '\0')
     ) {
    return 0xe;
  }
  lVar6 = FUN_142ddddc0(param_2);
  if (lVar6 == 0) {
    return 0;
  }
  if (*(char *)(lVar6 + 0xe768) == '\0') {
    return 0;
  }
  lVar5 = FUN_142ddddc0(lVar5);
  if (lVar5 == 0) {
    return 0;
  }
  lVar6 = *(longlong *)(param_2 + 0x118);
  if (lVar6 != 0) {
    lVar7 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uVar9 = *(undefined8 *)(lVar6 + 0x9d0);
      goto LAB_142d3c324;
    }
  }
  uVar9 = 0;
LAB_142d3c324:
  cVar4 = FUN_142dd3b80(lVar5,param_2,uVar9);
  if (cVar4 != '\0') {
    return 0;
  }
  return 10;
}



// FUNCTION 142d3c360 FUN_142d3c360 body=47 status=ok
// SIG undefined FUN_142d3c360(void)

undefined8 FUN_142d3c360(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    cVar1 = FUN_142d867f0(param_2);
    if (cVar1 != '\0') {
      return *(undefined8 *)(param_1 + 0x18);
    }
  }
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 142d3c390 FUN_142d3c390 body=61 status=ok
// SIG undefined FUN_142d3c390(void)

longlong FUN_142d3c390(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_2;
  if ((((iVar2 < 0) || (param_2 < 0)) || (*(int *)(param_1 + 0x40) <= iVar2)) ||
     ((lVar1 = *(longlong *)(param_1 + 0x38) + (longlong)iVar2 * 0x3b0,
      *(int *)(lVar1 + 0x328) != iVar2 ||
      (*(int *)(lVar1 + 0x32c) != (int)((ulonglong)param_2 >> 0x20))))) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 142d3c3d0 FUN_142d3c3d0 body=182 status=ok
// SIG undefined FUN_142d3c3d0(void)

undefined8 * FUN_142d3c3d0(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x94)) {
    lVar2 = *(longlong *)(param_1 + 0xa0);
    if (*(longlong *)(param_1 + 0xa0) == 0) {
      lVar2 = param_1 + 0x98;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0xa8) - 1U & (longlong)param_3) * 4);
    if (iVar1 != -1) {
      do {
        puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar1 * 0x14);
        if (*(int *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar1 * 0x14) == param_3) {
          if (iVar1 != -1) goto LAB_142d3c443;
          break;
        }
        iVar1 = *(int *)((longlong)puVar4 + 0xc);
      } while (iVar1 != -1);
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_142d3c443:
  puVar3 = (undefined8 *)((longlong)puVar4 + 4);
  if (puVar4 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  if (puVar3 == (undefined8 *)0x0) {
    *param_2 = 0xffffffffffffffff;
    return param_2;
  }
  *param_2 = *puVar3;
  return param_2;
}



// FUNCTION 142d3c490 FUN_142d3c490 body=324 status=ok
// SIG undefined FUN_142d3c490(void)

undefined8 FUN_142d3c490(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  lVar2 = UEnvQueryItemType_ActorBase::GetPrivateStaticClass();
  if (param_1[2] != 0) {
    lVar3 = UEnvQueryItemType::GetPrivateStaticClass();
    lVar8 = param_1[2];
    for (lVar6 = lVar8; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
      if (lVar6 == lVar3) goto joined_r0x000142d3c4e4;
    }
  }
  lVar8 = 0;
joined_r0x000142d3c4e4:
  do {
    if (lVar8 == 0) goto LAB_142d3c4f4;
    if (lVar8 == lVar2) {
      if (0 < (int)param_1[1]) {
        if (param_1[2] == 0) goto LAB_142d3c544;
        plVar4 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
        plVar5 = (longlong *)param_1[2];
        plVar7 = plVar5;
        break;
      }
      goto LAB_142d3c4f4;
    }
    lVar8 = *(longlong *)(lVar8 + 0x30);
  } while( true );
joined_r0x000142d3c534:
  if (plVar7 == (longlong *)0x0) goto LAB_142d3c544;
  if (plVar7 == plVar4) goto LAB_142d3c546;
  plVar7 = (longlong *)plVar7[6];
  goto joined_r0x000142d3c534;
LAB_142d3c544:
  plVar5 = (longlong *)0x0;
LAB_142d3c546:
  plVar7 = (longlong *)plVar5[0x1f];
  if (plVar7 == (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x368))(plVar5);
    plVar7 = (longlong *)plVar5[0x1f];
    if (plVar7 == (longlong *)0x0) goto LAB_142d3c4f4;
  }
  lVar6 = *param_1;
  lVar8 = param_1[3];
  lVar2 = lVar6 + (longlong)(int)param_1[1] * 0xc;
  for (; lVar6 != lVar2; lVar6 = lVar6 + 0xc) {
    iVar1 = *(int *)(lVar6 + 4) * 2;
    if (((-1 < iVar1) && (-1 < *(int *)(lVar6 + 4))) &&
       (lVar3 = (**(code **)(*plVar7 + 0x2a8))(plVar7,((longlong)iVar1 >> 1) + lVar8), lVar3 != 0))
    {
      *param_2 = lVar3;
      return 1;
    }
  }
LAB_142d3c4f4:
  *param_2 = 0;
  return 0;
}



// FUNCTION 142d3c5e0 FUN_142d3c5e0 body=428 status=ok
// SIG undefined FUN_142d3c5e0(void)

undefined8 FUN_142d3c5e0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  
  uVar9 = 0;
  lVar3 = UEnvQueryItemType_ActorBase::GetPrivateStaticClass();
  if (param_1[2] != 0) {
    lVar4 = UEnvQueryItemType::GetPrivateStaticClass();
    lVar5 = param_1[2];
    for (lVar8 = lVar5; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
      if (lVar8 == lVar4) goto joined_r0x000142d3c629;
    }
  }
  lVar5 = 0;
joined_r0x000142d3c629:
  while( true ) {
    if (lVar5 == 0) {
      return 0;
    }
    if (lVar5 == lVar3) break;
    lVar5 = *(longlong *)(lVar5 + 0x30);
  }
  if ((int)param_1[1] < 1) {
    return 0;
  }
  if (param_1[2] != 0) {
    plVar6 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
    plVar7 = (longlong *)param_1[2];
    for (plVar10 = plVar7; plVar10 != (longlong *)0x0; plVar10 = (longlong *)plVar10[6]) {
      if (plVar10 == plVar6) goto LAB_142d3c680;
    }
  }
  plVar7 = (longlong *)0x0;
LAB_142d3c680:
  plVar10 = (longlong *)plVar7[0x1f];
  if (plVar10 == (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    plVar10 = (longlong *)plVar7[0x1f];
    if (plVar10 == (longlong *)0x0) {
      return 0;
    }
  }
  cVar1 = *(char *)((longlong)param_1 + 0x3c);
  if ((cVar1 == '\0') && (*(int *)((longlong)param_2 + 0xc) < (int)param_2[1] + (int)param_1[1])) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
  }
  lVar8 = *param_1;
  lVar5 = param_1[3];
  lVar3 = lVar8 + (longlong)(int)param_1[1] * 0xc;
  do {
    if (lVar8 == lVar3) {
      return uVar9;
    }
    iVar2 = *(int *)(lVar8 + 4) * 2;
    if (((-1 < iVar2) && (-1 < *(int *)(lVar8 + 4))) &&
       (lVar4 = (**(code **)(*plVar10 + 0x2a8))(plVar10,((longlong)iVar2 >> 1) + lVar5), lVar4 != 0)
       ) {
      iVar2 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
      *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar4;
      uVar9 = 1;
      if (cVar1 != '\0') {
        return 1;
      }
    }
    lVar8 = lVar8 + 0xc;
  } while( true );
}



// FUNCTION 142d3c790 FUN_142d3c790 body=465 status=ok
// SIG undefined FUN_142d3c790(void)

longlong FUN_142d3c790(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  float local_28;
  float fStack_24;
  float local_20;
  
  lVar3 = UEnvQueryItemType_VectorBase::GetPrivateStaticClass();
  if (param_1[2] != 0) {
    lVar4 = UEnvQueryItemType::GetPrivateStaticClass();
    lVar9 = param_1[2];
    for (lVar7 = lVar9; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
      if (lVar7 == lVar4) goto joined_r0x000142d3c7e8;
    }
  }
  lVar9 = 0;
joined_r0x000142d3c7e8:
  do {
    if (lVar9 == 0) goto LAB_142d3c7fe;
    if (lVar9 == lVar3) {
      if (0 < (int)param_1[1]) {
        if (param_1[2] == 0) goto LAB_142d3c861;
        plVar5 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
        plVar6 = (longlong *)param_1[2];
        plVar8 = plVar6;
        break;
      }
      goto LAB_142d3c7fe;
    }
    lVar9 = *(longlong *)(lVar9 + 0x30);
  } while( true );
joined_r0x000142d3c851:
  if (plVar8 == (longlong *)0x0) goto LAB_142d3c861;
  if (plVar8 == plVar5) goto LAB_142d3c863;
  plVar8 = (longlong *)plVar8[6];
  goto joined_r0x000142d3c851;
LAB_142d3c861:
  plVar6 = (longlong *)0x0;
LAB_142d3c863:
  plVar8 = (longlong *)plVar6[0x1f];
  if (plVar8 == (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
    plVar8 = (longlong *)plVar6[0x1f];
    if (plVar8 == (longlong *)0x0) goto LAB_142d3c7fe;
  }
  lVar7 = *param_1;
  lVar9 = param_1[3];
  lVar3 = lVar7 + (longlong)(int)param_1[1] * 0xc;
  for (; lVar7 != lVar3; lVar7 = lVar7 + 0xc) {
    iVar1 = *(int *)(lVar7 + 4) * 2;
    if (((((-1 < iVar1) && (-1 < *(int *)(lVar7 + 4))) &&
         ((**(code **)(*plVar8 + 0x298))(plVar8,&local_28,((longlong)iVar1 >> 1) + lVar9),
         -(float)DAT_1466ad3c0 < local_28)) &&
        ((local_28 < (float)DAT_1466ad3c0 && (-DAT_1466ad3c0._4_4_ < fStack_24)))) &&
       ((fStack_24 < DAT_1466ad3c0._4_4_ &&
        ((-DAT_1466ad3c8 < local_20 && (local_20 < DAT_1466ad3c8)))))) {
      *param_2 = CONCAT44(fStack_24,local_28);
      *(float *)(param_2 + 1) = local_20;
      return CONCAT71((uint7)(uint3)((uint)local_20 >> 8),1);
    }
  }
LAB_142d3c7fe:
  *param_2 = CONCAT44(DAT_1466ad3c0._4_4_,(float)DAT_1466ad3c0);
  fVar2 = DAT_1466ad3c8;
  *(float *)(param_2 + 1) = DAT_1466ad3c8;
  return (ulonglong)(uint3)((uint)fVar2 >> 8) << 8;
}



// FUNCTION 142d3c970 FUN_142d3c970 body=555 status=ok
// SIG undefined FUN_142d3c970(void)

undefined8 FUN_142d3c970(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  float local_48;
  float fStack_44;
  float local_40;
  
  uVar9 = 0;
  lVar3 = UEnvQueryItemType_VectorBase::GetPrivateStaticClass();
  if (param_1[2] != 0) {
    lVar4 = UEnvQueryItemType::GetPrivateStaticClass();
    lVar5 = param_1[2];
    for (lVar8 = lVar5; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
      if (lVar8 == lVar4) goto joined_r0x000142d3c9b8;
    }
  }
  lVar5 = 0;
joined_r0x000142d3c9b8:
  while( true ) {
    if (lVar5 == 0) {
      return 0;
    }
    if (lVar5 == lVar3) break;
    lVar5 = *(longlong *)(lVar5 + 0x30);
  }
  if ((int)param_1[1] < 1) {
    return 0;
  }
  if (param_1[2] != 0) {
    plVar6 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
    plVar7 = (longlong *)param_1[2];
    for (plVar10 = plVar7; plVar10 != (longlong *)0x0; plVar10 = (longlong *)plVar10[6]) {
      if (plVar10 == plVar6) goto LAB_142d3ca11;
    }
  }
  plVar7 = (longlong *)0x0;
LAB_142d3ca11:
  plVar10 = (longlong *)plVar7[0x1f];
  if (plVar10 == (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    plVar10 = (longlong *)plVar7[0x1f];
    if (plVar10 == (longlong *)0x0) {
      return 0;
    }
  }
  cVar1 = *(char *)((longlong)param_1 + 0x3c);
  if ((cVar1 == '\0') && (*(int *)((longlong)param_2 + 0xc) < (int)param_2[1] + (int)param_1[1])) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_2);
  }
  lVar8 = *param_1;
  lVar5 = param_1[3];
  lVar3 = lVar8 + (longlong)(int)param_1[1] * 0xc;
  do {
    if (lVar8 == lVar3) {
      return uVar9;
    }
    iVar2 = *(int *)(lVar8 + 4) * 2;
    if (((((-1 < iVar2) && (-1 < *(int *)(lVar8 + 4))) &&
         ((**(code **)(*plVar10 + 0x298))(plVar10,&local_48,((longlong)iVar2 >> 1) + lVar5),
         -(float)DAT_1466ad3c0 < local_48)) &&
        ((local_48 < (float)DAT_1466ad3c0 && (-DAT_1466ad3c0._4_4_ < fStack_44)))) &&
       ((fStack_44 < DAT_1466ad3c0._4_4_ &&
        ((-DAT_1466ad3c8 < local_40 && (local_40 < DAT_1466ad3c8)))))) {
      iVar2 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
      lVar4 = *param_2;
      uVar9 = 1;
      *(ulonglong *)(lVar4 + (longlong)iVar2 * 0xc) = CONCAT44(fStack_44,local_48);
      *(float *)(lVar4 + 8 + (longlong)iVar2 * 0xc) = local_40;
      if (cVar1 != '\0') {
        return 1;
      }
    }
    lVar8 = lVar8 + 0xc;
  } while( true );
}



// FUNCTION 142d3cba0 FUN_142d3cba0 body=21 status=ok
// SIG undefined FUN_142d3cba0(void)

float FUN_142d3cba0(longlong param_1)

{
  return *(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x18) *
         *(float *)(param_1 + 0x1c);
}



// FUNCTION 142d3cbc0 FUN_142d3cbc0 body=465 status=ok
// SIG undefined FUN_142d3cbc0(void)

undefined8 FUN_142d3cbc0(longlong *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong *plVar6;
  float *pfVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float local_88;
  float local_84;
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  float local_58;
  float local_54;
  float local_50;
  undefined1 local_4c [12];
  undefined1 local_40 [56];
  
  if (*param_1 == 0) {
    return 0x3f800000;
  }
  lVar5 = FWeakObjectPtr::Get(param_1 + 1);
  if (lVar5 == 0) {
    return 0x3f800000;
  }
  plVar6 = (longlong *)FWeakObjectPtr::Get(param_1 + 1);
  (**(code **)(*plVar6 + 0x610))(plVar6,&local_88,&local_68);
  local_78 = *(float *)((longlong)param_1 + 0x3c) - local_88;
  fVar1 = *(float *)((longlong)param_1 + 0x14);
  fVar2 = *(float *)(param_1 + 2);
  local_74 = *(float *)(param_1 + 8) - local_84;
  fVar3 = *(float *)(param_1 + 3);
  local_70 = *(float *)((longlong)param_1 + 0x44) - local_80;
  fVar4 = *(float *)((longlong)param_1 + 0x1c);
  pfVar7 = (float *)FVector::Rotation(&local_78,local_4c);
  local_50 = local_60 - pfVar7[2];
  local_54 = local_64 - pfVar7[1];
  local_58 = local_68 - *pfVar7;
  pfVar7 = (float *)FRotator::Vector(&local_58,local_40);
  fVar12 = *pfVar7;
  fVar9 = fVar12 * fVar12 + pfVar7[1] * pfVar7[1];
  if (fVar9 == 1.0) {
    if (pfVar7[2] == 0.0) {
      uVar8 = *(ulonglong *)pfVar7;
      goto LAB_142d3cd53;
    }
  }
  else {
    if (fVar9 < 1e-08) {
      uVar8 = (ulonglong)DAT_1468b5d90;
      goto LAB_142d3cd53;
    }
    auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
    fVar10 = auVar11._0_4_;
    fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
    fVar12 = fVar12 * (fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10));
  }
  uVar8 = (ulonglong)(uint)fVar12;
LAB_142d3cd53:
  return CONCAT44((int)(uVar8 >> 0x20),(float)uVar8 * fVar1 * fVar2 * fVar3 * fVar4);
}



// FUNCTION 142d3cda0 FUN_142d3cda0 body=479 status=ok
// SIG undefined FUN_142d3cda0(void)

ulonglong FUN_142d3cda0(longlong *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong *plVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float local_88;
  float local_84;
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  float local_58;
  float local_54;
  float local_50;
  undefined1 local_4c [12];
  undefined1 local_40 [56];
  
  if (*param_1 == 0) {
    return 0x3f800000;
  }
  lVar5 = FWeakObjectPtr::Get(param_1 + 1);
  if (lVar5 == 0) {
    return 0x3f800000;
  }
  plVar6 = (longlong *)FWeakObjectPtr::Get(param_1 + 1);
  (**(code **)(*plVar6 + 0x610))(plVar6,&local_88,&local_68);
  local_78 = *(float *)((longlong)param_1 + 0x3c) - local_88;
  fVar1 = *(float *)((longlong)param_1 + 0x14);
  fVar2 = *(float *)(param_1 + 2);
  local_74 = *(float *)(param_1 + 8) - local_84;
  fVar3 = *(float *)(param_1 + 3);
  local_70 = *(float *)((longlong)param_1 + 0x44) - local_80;
  fVar4 = *(float *)((longlong)param_1 + 0x1c);
  pfVar7 = (float *)FVector::Rotation(&local_78,local_4c);
  local_50 = local_60 - pfVar7[2];
  local_54 = local_64 - pfVar7[1];
  local_58 = local_68 - *pfVar7;
  pfVar7 = (float *)FRotator::Vector(&local_58,local_40);
  fVar11 = pfVar7[1];
  fVar8 = *pfVar7 * *pfVar7 + fVar11 * fVar11;
  if (fVar8 == 1.0) {
    if (pfVar7[2] == 0.0) {
      fVar8 = (float)((ulonglong)*(undefined8 *)pfVar7 >> 0x20);
      fVar11 = fVar8;
      goto LAB_142d3cf37;
    }
  }
  else {
    if (fVar8 < 1e-08) {
      fVar8 = 0.0;
      fVar11 = DAT_1468b5d94;
      goto LAB_142d3cf37;
    }
    auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
    fVar9 = auVar10._0_4_;
    fVar9 = fVar9 + fVar9 * (0.5 - fVar8 * 0.5 * fVar9 * fVar9);
    fVar11 = fVar11 * (fVar9 + fVar9 * (0.5 - fVar8 * 0.5 * fVar9 * fVar9));
  }
  fVar8 = 0.0;
LAB_142d3cf37:
  return CONCAT44(fVar8,fVar11 * fVar1 * fVar2 * fVar3 * fVar4) ^ 0x8000000080000000;
}



// FUNCTION 142d3cf80 FUN_142d3cf80 body=484 status=ok
// SIG undefined FUN_142d3cf80(void)

undefined8
FUN_142d3cf80(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
             longlong *param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if (param_2 == 0) {
LAB_142d3cfde:
    lVar2 = 0;
  }
  else {
    lVar2 = UScrollBox::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar2 = param_2;
    if (!bVar1) goto LAB_142d3cfde;
  }
  if (param_2 != 0) {
    lVar3 = FUN_142e0a580();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar3 = param_2;
    if (bVar1) goto LAB_142d3d022;
  }
  lVar3 = 0;
LAB_142d3d022:
  if (lVar2 == 0) {
    if (lVar3 == 0) {
      return 0;
    }
    plVar6 = (longlong *)(lVar3 + 0x270);
  }
  else {
    plVar6 = (longlong *)(lVar2 + 0x720);
  }
  if (plVar6 == (longlong *)0x0) {
    return 0;
  }
  lVar3 = param_1 + 0xb0;
  lVar2 = FWeakObjectPtr::Get(lVar3);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(param_1 + 0xb8)) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      return 0;
    }
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar3,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0xb8) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(lVar3);
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar3 = UBTTask_RunBehaviorDynamic::GetPrivateStaticClass();
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
    plVar5 = (longlong *)*plVar6;
    plVar6 = plVar5 + (longlong)(int)plVar6[1] * 6;
    for (; plVar5 != plVar6; plVar5 = plVar5 + 6) {
      if (*plVar5 == lVar2) {
        uVar4 = FAnimNode_MeshSpaceRefPose::StaticStruct();
        *param_3 = uVar4;
        *param_4 = plVar5;
        *param_5 = param_2;
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142d3d170 FUN_142d3d170 body=61 status=ok
// SIG undefined FUN_142d3d170(void)

void FUN_142d3d170(longlong param_1,char param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = *(char **)(param_1 + 0x108);
  pcVar2 = pcVar1 + (longlong)*(int *)(param_1 + 0x110) * 0x40;
  if (pcVar1 == pcVar2) {
    return;
  }
  do {
    if (*pcVar1 == param_2) {
      FUN_142c98860(0x3f800000,param_3);
      return;
    }
    pcVar1 = pcVar1 + 0x40;
  } while (pcVar1 != pcVar2);
  return;
}



// FUNCTION 142d3d1b0 FUN_142d3d1b0 body=38 status=ok
// SIG undefined FUN_142d3d1b0(void)

undefined8 FUN_142d3d1b0(byte *param_1,float param_2)

{
  if (((*param_1 & 3) == 3) &&
     ((*(float *)(param_1 + 8) <= 0.0 ||
      (param_2 - *(float *)(param_1 + 4) <= *(float *)(param_1 + 8))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 142d3d1e0 FUN_142d3d1e0 body=125 status=ok
// SIG undefined FUN_142d3d1e0(void)

undefined8 FUN_142d3d1e0(longlong param_1,float param_2,longlong param_3)

{
  undefined8 uVar1;
  byte *pbVar2;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    uVar1 = FUN_142c48f90(*(longlong *)(param_1 + 0x30),param_3,0);
    return uVar1;
  }
  pbVar2 = (byte *)FUN_142d3a910(param_1,param_3);
  if ((((pbVar2 != (byte *)0x0) && (param_3 != 0)) && ((*pbVar2 & 3) == 3)) &&
     ((*(float *)(pbVar2 + 8) <= 0.0 || (param_2 - *(float *)(pbVar2 + 4) <= *(float *)(pbVar2 + 8))
      ))) {
    return 1;
  }
  return 0;
}



// FUNCTION 142d3d260 FUN_142d3d260 body=233 status=ok
// SIG undefined FUN_142d3d260(void)

undefined4 * FUN_142d3d260(longlong param_1,undefined4 *param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  longlong local_18 [2];
  
  if (param_3 != 0) {
    lVar2 = UScrollBox::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(int *)(param_3 + 0x670) == 0)) {
      plVar3 = *(longlong **)(param_3 + 0x678);
      plVar4 = plVar3 + (longlong)*(int *)(param_3 + 0x680) * 0xf;
      if (plVar3 != plVar4) {
        do {
          if ((*(longlong *)(param_1 + 0x28) == plVar3[1]) && (*plVar3 != 0)) {
            local_18[1] = 0;
            local_18[0] = param_3;
            uVar5 = FUN_142ca2f00(*(undefined8 *)(*plVar3 + 0x70),local_18,0x3f800000);
            *param_2 = uVar5;
            goto LAB_142d3d2fd;
          }
          plVar3 = plVar3 + 0xf;
        } while (plVar3 != plVar4);
      }
    }
  }
  *param_2 = 0x3f800000;
LAB_142d3d2fd:
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 142d3d350 FUN_142d3d350 body=821 status=ok
// SIG undefined FUN_142d3d350(void)

void FUN_142d3d350(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  byte local_98 [4];
  undefined4 local_94;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  longlong local_18;
  longlong local_10;
  
  _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
  local_8c = 0x3f800000;
  uVar5 = 0x3f800000;
  if (0 < *(int *)(param_3 + 0x108)) {
    FUN_140729f20(local_98,*(undefined8 *)(param_3 + 0x100));
    uVar5 = local_8c;
  }
  lVar3 = *(longlong *)(param_1 + 0x30);
  lVar4 = (longlong)*(int *)(param_1 + 0x38) * 0x170 + lVar3;
  if (lVar3 != lVar4) {
    do {
      if (*param_2 == *(longlong *)(lVar3 + 0xc0)) {
        *(undefined4 *)(lVar3 + 200) = 0xffffffff;
        *(undefined1 *)(lVar3 + 0xcc) = 1;
        *(byte *)(lVar3 + 0xd0) = *(byte *)(lVar3 + 0xd0) & 0xfc;
        *(byte *)(lVar3 + 0xd0) = *(byte *)(lVar3 + 0xd0) | local_98[0] & 3;
        *(uint *)(lVar3 + 0xd8) = *(uint *)(lVar3 + 0xd8) & 0xfffffffe;
        *(undefined4 *)(lVar3 + 0xd4) = local_94;
        *(undefined4 *)(lVar3 + 0xdc) = uVar5;
        *(uint *)(lVar3 + 0xd8) = *(uint *)(lVar3 + 0xd8) | local_90 & 1;
        *(undefined4 *)(lVar3 + 0xe0) = local_88;
        *(longlong *)(lVar3 + 0xf0) = local_78;
        *(undefined8 *)(lVar3 + 0xfc) = local_6c;
        *(longlong *)(lVar3 + 0x108) = local_60;
        *(undefined8 *)(lVar3 + 0x114) = local_54;
        *(longlong *)(lVar3 + 0x120) = local_48;
        *(undefined8 *)(lVar3 + 0xe4) = local_84;
        *(undefined4 *)(lVar3 + 0xec) = local_7c;
        *(undefined4 *)(lVar3 + 0xf8) = local_70;
        *(undefined4 *)(lVar3 + 0x104) = local_64;
        *(undefined4 *)(lVar3 + 0x110) = local_58;
        *(undefined4 *)(lVar3 + 0x11c) = local_4c;
        *(undefined4 *)(lVar3 + 0x128) = local_40;
        *(undefined4 *)(lVar3 + 0x130) = local_38;
        *(undefined4 *)(lVar3 + 300) = local_3c;
        *(undefined4 *)(lVar3 + 0x134) = local_34;
        *(undefined4 *)(lVar3 + 0x138) = local_30;
        *(undefined4 *)(lVar3 + 0x13c) = local_2c;
        *(undefined4 *)(lVar3 + 0x140) = local_28;
        *(undefined4 *)(lVar3 + 0x144) = local_24;
        *(undefined4 *)(lVar3 + 0x148) = local_20;
        *(longlong *)(lVar3 + 0x150) = local_18;
        *(longlong *)(lVar3 + 0x158) = local_10;
        return;
      }
      plVar1 = *(longlong **)(lVar3 + 0x160);
      plVar2 = plVar1 + (longlong)*(int *)(lVar3 + 0x168) * 0x14;
      for (; plVar1 != plVar2; plVar1 = plVar1 + 0x14) {
        if (*param_2 == *plVar1) {
          *(undefined4 *)(plVar1 + 1) = 0xffffffff;
          *(undefined1 *)((longlong)plVar1 + 0xc) = 1;
          *(byte *)(plVar1 + 2) = *(byte *)(plVar1 + 2) & 0xfc;
          *(byte *)(plVar1 + 2) = *(byte *)(plVar1 + 2) | local_98[0] & 3;
          *(uint *)(plVar1 + 3) = *(uint *)(plVar1 + 3) & 0xfffffffe;
          *(undefined4 *)((longlong)plVar1 + 0x14) = local_94;
          *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar5;
          *(uint *)(plVar1 + 3) = *(uint *)(plVar1 + 3) | local_90 & 1;
          *(undefined4 *)(plVar1 + 4) = local_88;
          plVar1[6] = local_78;
          *(undefined8 *)((longlong)plVar1 + 0x3c) = local_6c;
          plVar1[9] = local_60;
          *(undefined8 *)((longlong)plVar1 + 0x54) = local_54;
          plVar1[0xc] = local_48;
          *(undefined8 *)((longlong)plVar1 + 0x24) = local_84;
          *(undefined4 *)((longlong)plVar1 + 0x2c) = local_7c;
          *(undefined4 *)(plVar1 + 7) = local_70;
          *(undefined4 *)((longlong)plVar1 + 0x44) = local_64;
          *(undefined4 *)(plVar1 + 10) = local_58;
          *(undefined4 *)((longlong)plVar1 + 0x5c) = local_4c;
          *(undefined4 *)(plVar1 + 0xd) = local_40;
          *(undefined4 *)(plVar1 + 0xe) = local_38;
          *(undefined4 *)((longlong)plVar1 + 0x6c) = local_3c;
          *(undefined4 *)((longlong)plVar1 + 0x74) = local_34;
          *(undefined4 *)(plVar1 + 0xf) = local_30;
          *(undefined4 *)((longlong)plVar1 + 0x7c) = local_2c;
          *(undefined4 *)(plVar1 + 0x10) = local_28;
          *(undefined4 *)((longlong)plVar1 + 0x84) = local_24;
          *(undefined4 *)(plVar1 + 0x11) = local_20;
          plVar1[0x12] = local_18;
          plVar1[0x13] = local_10;
          return;
        }
      }
      lVar3 = lVar3 + 0x170;
    } while (lVar3 != lVar4);
  }
  return;
}



// FUNCTION 142d3d690 FUN_142d3d690 body=10 status=ok
// SIG undefined FUN_142d3d690(void)

bool FUN_142d3d690(longlong param_1,byte param_2)

{
  return (*(uint *)(param_1 + 0x30) & (uint)param_2) != 0;
}



// FUNCTION 142d3d6a0 IsDisabled body=9 status=ok
// SIG undefined IsDisabled(void)

uint UCameraModifier::IsDisabled(longlong param_1)

{
  return *(uint *)(param_1 + 0x30) >> 2 & 0xffffff01;
}



// FUNCTION 142d3d6b0 FUN_142d3d6b0 body=9 status=ok
// SIG undefined FUN_142d3d6b0(void)

uint FUN_142d3d6b0(longlong param_1)

{
  return *(uint *)(param_1 + 0x30) >> 4 & 0xffffff01;
}



// FUNCTION 142d3d6c0 FUN_142d3d6c0 body=31 status=ok
// SIG undefined FUN_142d3d6c0(void)

void FUN_142d3d6c0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x400))();
  *(byte *)(param_1 + 0x31) = *(byte *)(param_1 + 0x31) | 1;
  return;
}



// FUNCTION 142d3d6e0 FUN_142d3d6e0 body=922 status=ok
// SIG undefined FUN_142d3d6e0(void)

void FUN_142d3d6e0(longlong *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint *puVar13;
  uint local_res10 [2];
  undefined1 local_res18 [8];
  longlong *local_res20;
  undefined8 local_c8;
  uint *puStack_c0;
  uint local_b8;
  uint uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  longlong *local_a0;
  undefined4 uStack_98;
  uint uStack_94;
  uint *local_90;
  uint uStack_88;
  uint uStack_84;
  undefined8 local_80;
  longlong *local_78;
  undefined8 uStack_70;
  uint *puStack_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 uStack_58;
  
  local_res20 = param_1 + 9;
  TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
  ::Reset(local_res20);
  lVar11 = *param_1;
  if (lVar11 == 0) {
    return;
  }
  local_a8 = (longlong *)(lVar11 + 0x48);
  uVar3 = *(uint *)(lVar11 + 0x70);
  puVar1 = (uint *)(lVar11 + 0x58);
  local_c8 = (longlong *)0x100000000;
  uStack_b4 = 0;
  iStack_b0 = 0;
  if (uVar3 != 0) {
    puVar13 = *(uint **)(lVar11 + 0x68);
    if (*(uint **)(lVar11 + 0x68) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar6 = *puVar13;
    iStack_b0 = 0;
    iVar7 = 0;
    while (uVar6 == 0) {
      iStack_b0 = iStack_b0 + 0x20;
      uVar5 = (ulonglong)local_c8 >> 0x20;
      local_c8 = (longlong *)CONCAT44((int)uVar5,iVar7 + 1);
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_142d3d7ea;
      uVar6 = puVar13[(longlong)iVar7 + 1];
      iVar7 = iVar7 + 1;
    }
    uVar6 = -uVar6 & uVar6;
    iVar7 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    local_c8 = (longlong *)CONCAT44(uVar6,SUB84(local_c8,0));
    if (uVar6 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_b4 = (iStack_b0 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_b4) {
LAB_142d3d7ea:
      uStack_b4 = uVar3;
    }
  }
  uVar6 = *(uint *)(lVar11 + 0x70);
  uStack_88 = 0xffffffff;
  uStack_84 = uStack_b4;
  local_80 = CONCAT44(uStack_ac,iStack_b0);
  local_b8 = -1 << ((byte)uVar6 & 0x1f);
  uStack_70 = local_c8;
  plVar2 = uStack_70;
  uVar12 = uVar6 & 0xffffffe0;
  uStack_70._0_4_ = SUB84(local_c8,0);
  uStack_70._4_4_ = (uint)((ulonglong)local_c8 >> 0x20);
  uStack_98 = (undefined4)uStack_70;
  uStack_94 = uStack_70._4_4_;
  puStack_c0 = puVar1;
  uStack_b4 = uVar6;
  local_90 = puVar1;
  local_78 = local_a8;
  uStack_70 = plVar2;
  puStack_68 = puVar1;
  uStack_58 = local_80;
  local_a0 = local_a8;
  uStack_60 = uStack_88;
  uStack_5c = uStack_84;
  if (uVar6 != uVar3) {
    puVar13 = *(uint **)(lVar11 + 0x68);
    if (*(uint **)(lVar11 + 0x68) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar10 = puVar13[(int)uVar6 >> 5] & local_b8;
    iVar7 = (int)uVar6 >> 5;
    while (uVar10 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_142d3d8b2;
      uVar10 = puVar13[(longlong)iVar7 + 1];
      local_b8 = 0xffffffff;
      iVar7 = iVar7 + 1;
    }
    uVar10 = -uVar10 & uVar10;
    iVar7 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar10 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_b4 = (uVar12 - iVar7) + 0x1f;
    uVar6 = uStack_b4;
    if ((int)uVar3 < (int)uStack_b4) {
LAB_142d3d8b2:
      uStack_b4 = uVar3;
      uVar6 = uVar3;
    }
  }
LAB_142d3d8d0:
  if (((uStack_84 == uVar6) && (local_90 == puVar1)) && (local_a0 == local_a8)) {
    return;
  }
  plVar2 = (longlong *)(*local_a0 + (longlong)(int)uStack_84 * 0x18);
  lVar11 = plVar2[1];
  if (lVar11 != 0) {
    lVar8 = FUN_142e11bf0();
    do {
      if (lVar11 == lVar8) {
        lVar11 = param_1[6];
        lVar8 = (longlong)(int)param_1[7] * 0x88 + lVar11;
        if (lVar11 == lVar8) goto LAB_142d3d969;
        lVar9 = lVar11;
        goto LAB_142d3d950;
      }
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  goto LAB_142d3da0a;
  while (lVar9 = lVar9 + 0x88, lVar9 != lVar8) {
LAB_142d3d950:
    if (*(longlong *)(lVar9 + 0x80) == *plVar2) {
      local_res10[0] = (uint)((lVar9 - lVar11) / 0x88);
      goto LAB_142d3d96e;
    }
  }
LAB_142d3d969:
  local_res10[0] = 0xffffffff;
LAB_142d3d96e:
  if (local_res10[0] == 0xffffffff) {
    plVar4 = (longlong *)plVar2[1];
    lVar11 = plVar4[0x1f];
    if (lVar11 == 0) {
      (**(code **)(*plVar4 + 0x368))(plVar4);
      lVar11 = plVar4[0x1f];
      if (lVar11 == 0) goto LAB_142d3d9ea;
    }
    if ((*(int *)(lVar11 + 0x28) != 0) || (*(int *)(lVar11 + 0x2c) != 0)) {
      uVar3 = *(uint *)(param_1 + 7);
      *(uint *)(param_1 + 7) = uVar3 + 1;
      if (*(int *)((longlong)param_1 + 0x3c) < (int)(uVar3 + 1)) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::
        ResizeGrow(param_1 + 6,uVar3);
      }
      FUN_142de2910((longlong)(int)uVar3 * 0x88 + param_1[6],*plVar2,*(undefined8 *)(lVar11 + 0x28),
                    3);
      local_res10[0] = uVar3;
    }
  }
LAB_142d3d9ea:
  puStack_c0 = local_res10;
  local_c8 = plVar2 + 1;
  TSet<TTuple<VkImage_T_*,enum_VkImageLayout>,TDefaultMapHashableKeyFuncs<VkImage_T_*,enum_VkImageLayout,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<VkImage_T_*_const_&,enum_VkImageLayout_&&>_>
            (local_res20,local_res18,&local_c8,0);
LAB_142d3da0a:
  uStack_88 = uStack_88 & ~uStack_94;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_98);
  goto LAB_142d3d8d0;
}



// FUNCTION 142d3da80 FUN_142d3da80 body=170 status=ok
// SIG undefined FUN_142d3da80(void)

void FUN_142d3da80(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined1 local_28 [32];
  
  if ((*(longlong *)(param_1 + 8) != 0) && (param_2 != (longlong *)0x0)) {
    uVar1 = FUN_142e1a5a0();
    lVar6 = (**(code **)(*param_2 + 0x628))(param_2,uVar1);
    if (lVar6 != 0) {
      puVar7 = (undefined4 *)
               FUN_142d62190(lVar6,local_28,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x30));
      uVar2 = puVar7[1];
      uVar3 = puVar7[2];
      uVar4 = puVar7[3];
      *(undefined4 *)(param_1 + 0x60) = *puVar7;
      *(undefined4 *)(param_1 + 100) = uVar2;
      *(undefined4 *)(param_1 + 0x68) = uVar3;
      *(undefined4 *)(param_1 + 0x6c) = uVar4;
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(puVar7 + 4);
      cVar5 = FUN_142d52a00(param_1 + 0x60);
      if (cVar5 == '\0') {
        puVar8 = (undefined8 *)FUN_142d5bb30(lVar6,local_28,*(undefined8 *)(param_1 + 8),0);
        uVar1 = puVar8[1];
        *(undefined8 *)(param_1 + 0x60) = *puVar8;
        *(undefined8 *)(param_1 + 0x68) = uVar1;
        *(undefined8 *)(param_1 + 0x70) = puVar8[2];
      }
    }
  }
  return;
}



// FUNCTION 142d3db30 FUN_142d3db30 body=1087 status=ok
// SIG undefined FUN_142d3db30(void)

void FUN_142d3db30(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  uint *puVar15;
  uint uVar16;
  float fVar17;
  longlong *local_res8;
  int local_98;
  uint uStack_94;
  uint *puStack_90;
  uint local_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  lVar9 = *(longlong *)(param_1 + 0x1a8);
  if (lVar9 == 0) {
    if (*(longlong *)(param_1 + 0x118) != 0) {
      lVar9 = FUN_142d29780(*(longlong *)(param_1 + 0x118));
      *(longlong *)(param_1 + 0x1a8) = lVar9;
    }
    if (lVar9 == 0) {
      return;
    }
  }
  if ((param_2 != (longlong *)0x0) && (lVar13 = *param_2, lVar13 != 0)) {
    if ((*(byte *)(lVar13 + 0x48) & 0x20) != 0) {
      if (*(longlong *)(lVar13 + 0x58) == 0) {
        fVar17 = (float)FUN_142d1b990();
        fVar17 = fVar17 * *(float *)(*param_2 + 0x50);
        *(float *)(param_2 + 10) = fVar17;
        *(float *)((longlong)param_2 + 0x54) = fVar17;
      }
      else {
        local_res8 = (longlong *)0x0;
        puVar10 = (undefined4 *)FUN_142d61e00(&local_98,&local_res8,*(undefined8 *)(lVar9 + 0x118));
        uVar6 = puVar10[1];
        uVar7 = puVar10[2];
        uVar8 = puVar10[3];
        *(undefined4 *)(param_2 + 0xb) = *puVar10;
        *(undefined4 *)((longlong)param_2 + 0x5c) = uVar6;
        *(undefined4 *)(param_2 + 0xc) = uVar7;
        *(undefined4 *)((longlong)param_2 + 100) = uVar8;
        param_2[0xd] = *(longlong *)(puVar10 + 4);
      }
    }
    *(undefined4 *)(param_2 + 7) = 0;
    if (*(int *)((longlong)param_2 + 0x3c) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_2 + 6,0);
    }
    *(undefined4 *)(param_2 + 9) = 0;
    if (*(int *)((longlong)param_2 + 0x4c) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_2 + 8,0);
    }
    lVar9 = *(longlong *)(param_1 + 0x118);
    if (lVar9 != 0) {
      local_res8 = (longlong *)(lVar9 + 0x2b0);
      uVar3 = *(uint *)(lVar9 + 0x2d8);
      puVar1 = (uint *)(lVar9 + 0x2c0);
      local_98 = 0;
      uStack_94 = 1;
      uStack_84 = 0;
      iStack_80 = 0;
      if (uVar3 != 0) {
        puVar15 = *(uint **)(lVar9 + 0x2d0);
        if (*(uint **)(lVar9 + 0x2d0) == (uint *)0x0) {
          puVar15 = puVar1;
        }
        uVar4 = *puVar15;
        iStack_80 = 0;
        local_98 = 0;
        while (uVar4 == 0) {
          lVar13 = (longlong)local_98;
          iStack_80 = iStack_80 + 0x20;
          iVar11 = local_98 + 1;
          bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
          local_98 = iVar11;
          if (bVar5) goto LAB_142d3dced;
          uVar4 = puVar15[lVar13 + 1];
        }
        uStack_94 = uVar4 - 1 & uVar4 ^ uVar4;
        iVar11 = 0x1f;
        if (uStack_94 != 0) {
          for (; uStack_94 >> iVar11 == 0; iVar11 = iVar11 + -1) {
          }
        }
        if (uStack_94 == 0) {
          iVar11 = 0x20;
        }
        else {
          iVar11 = 0x1f - iVar11;
        }
        uStack_84 = (iStack_80 - iVar11) + 0x1f;
        if ((int)uVar3 < (int)uStack_84) {
LAB_142d3dced:
          uStack_84 = uVar3;
        }
      }
      uVar4 = *(uint *)(lVar9 + 0x2d8);
      uStack_60 = 0xffffffff;
      uStack_5c = uStack_84;
      local_58 = CONCAT44(uStack_7c,iStack_80);
      uStack_48 = CONCAT44(uStack_94,local_98);
      local_88 = -1 << ((byte)uVar4 & 0x1f);
      uVar16 = uVar4 & 0xffffffe0;
      iStack_70 = local_98;
      uStack_6c = uStack_94;
      puStack_90 = puVar1;
      uStack_84 = uVar4;
      local_68 = puVar1;
      local_50 = local_res8;
      puStack_40 = puVar1;
      uStack_30 = local_58;
      local_78 = local_res8;
      uStack_38 = uStack_60;
      uStack_34 = uStack_5c;
      if (uVar4 != uVar3) {
        puVar15 = *(uint **)(lVar9 + 0x2d0);
        if (*(uint **)(lVar9 + 0x2d0) == (uint *)0x0) {
          puVar15 = puVar1;
        }
        uVar12 = puVar15[(int)uVar4 >> 5] & local_88;
        iVar11 = (int)uVar4 >> 5;
        while (uVar12 == 0) {
          uVar16 = uVar16 + 0x20;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
          goto LAB_142d3ddc5;
          uVar12 = puVar15[(longlong)iVar11 + 1];
          local_88 = 0xffffffff;
          iVar11 = iVar11 + 1;
        }
        uVar12 = uVar12 - 1 & uVar12 ^ uVar12;
        iVar11 = 0x1f;
        if (uVar12 != 0) {
          for (; uVar12 >> iVar11 == 0; iVar11 = iVar11 + -1) {
          }
        }
        if (uVar12 == 0) {
          iVar11 = 0x20;
        }
        else {
          iVar11 = 0x1f - iVar11;
        }
        uStack_84 = (uVar16 - iVar11) + 0x1f;
        uVar4 = uStack_84;
        if ((int)uVar3 < (int)uStack_84) {
LAB_142d3ddc5:
          uStack_84 = uVar3;
          uVar4 = uVar3;
        }
      }
      while( true ) {
        if ((uStack_5c == uVar4) && (local_68 == puVar1)) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if ((bVar5) && (local_78 == local_res8)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) break;
        lVar9 = *(longlong *)(*local_78 + (longlong)(int)uStack_5c * 0x10);
        if (lVar9 != 0) {
          lVar13 = FUN_1429f11d0();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            plVar14 = (longlong *)param_2[1];
            plVar2 = plVar14 + (int)param_2[2];
            if (plVar14 != plVar2) {
LAB_142d3de70:
              if (*plVar14 != *(longlong *)(lVar9 + 0x18)) goto code_r0x000142d3de75;
              iVar11 = (int)param_2[7];
              *(int *)(param_2 + 7) = iVar11 + 1;
              if (*(int *)((longlong)param_2 + 0x3c) < iVar11 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (param_2 + 6,iVar11);
              }
              lVar13 = param_2[6];
LAB_142d3df1e:
              *(longlong *)(lVar13 + (longlong)iVar11 * 8) = lVar9;
            }
          }
          else {
            lVar13 = UUGStartScreenUW::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              plVar14 = (longlong *)param_2[1];
              plVar2 = plVar14 + (int)param_2[2];
              for (; plVar14 != plVar2; plVar14 = plVar14 + 1) {
                if (*plVar14 == *(longlong *)(lVar9 + 0x18)) {
                  iVar11 = (int)param_2[9];
                  *(int *)(param_2 + 9) = iVar11 + 1;
                  if (*(int *)((longlong)param_2 + 0x4c) < iVar11 + 1) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (param_2 + 8,iVar11);
                  }
                  lVar13 = param_2[8];
                  goto LAB_142d3df1e;
                }
              }
            }
          }
        }
LAB_142d3df22:
        uStack_60 = uStack_60 & ~uStack_6c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
      }
    }
  }
  return;
code_r0x000142d3de75:
  plVar14 = plVar14 + 1;
  if (plVar14 == plVar2) goto LAB_142d3df22;
  goto LAB_142d3de70;
}



// FUNCTION 142d3df70 FUN_142d3df70 body=424 status=ok
// SIG undefined FUN_142d3df70(void)

void FUN_142d3df70(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 local_res10 [8];
  undefined4 uStack_c;
  
  iVar2 = FUN_14233f450();
  if (iVar2 != 3) {
    return;
  }
  if (*(char *)(param_1 + 0x198) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x198) = 1;
  FUN_142d364e0(param_1);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 400)) {
    lVar3 = 0;
    do {
      *(int *)(*(longlong *)(param_1 + 0x188) + 0x28 + lVar3) = iVar2;
      FUN_142d3db30(param_1,(longlong)iVar2 * 0x70 + *(longlong *)(param_1 + 0x188));
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 0x70;
    } while (iVar2 < *(int *)(param_1 + 400));
  }
  lVar3 = *(longlong *)(param_1 + 0x1a8);
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 0x118) == 0) {
      return;
    }
    lVar3 = FUN_142d29780();
    *(longlong *)(param_1 + 0x1a8) = lVar3;
    if (lVar3 == 0) {
      return;
    }
  }
  if ((*(int *)(lVar3 + 0x670) == 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x118), plVar1 != (longlong *)0x0)) {
    uVar4 = FUN_142e1a5a0();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar4);
    if (lVar3 != 0) {
      plVar1 = (longlong *)(lVar3 + 0x288);
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar5 + 1,param_1);
        *(undefined4 *)(plVar5 + 2) = 0x42d4ed00;
        *(undefined4 *)((longlong)plVar5 + 0x14) = 1;
        *(undefined4 *)(plVar5 + 3) = 0;
        *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_c;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar5[5] = lVar6;
        *plVar5 = (longlong)&PTR_FUN_143f77bd0;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        (**(code **)(*plVar5 + 0x20))(plVar5,local_res10);
        iVar2 = *(int *)(lVar3 + 0x290);
        *(int *)(lVar3 + 0x290) = iVar2 + 1;
        if (*(int *)(lVar3 + 0x294) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
        }
        puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
        *puVar7 = plVar5;
        *(undefined4 *)(puVar7 + 1) = 3;
      }
    }
  }
  return;
}



// FUNCTION 142d3e120 FUN_142d3e120 body=127 status=ok
// SIG undefined FUN_142d3e120(void)

void FUN_142d3e120(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x198) == '\0') {
    *(undefined1 *)(param_1 + 0x198) = 1;
    FUN_142d364e0();
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 400)) {
      lVar1 = 0;
      do {
        *(int *)(*(longlong *)(param_1 + 0x188) + 0x28 + lVar1) = iVar2;
        FUN_142d3db30(param_1,(longlong)iVar2 * 0x70 + *(longlong *)(param_1 + 0x188));
        iVar2 = iVar2 + 1;
        lVar1 = lVar1 + 0x70;
      } while (iVar2 < *(int *)(param_1 + 400));
    }
  }
  return;
}



// FUNCTION 142d3e1a0 FUN_142d3e1a0 body=138 status=ok
// SIG undefined FUN_142d3e1a0(void)

undefined8 FUN_142d3e1a0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_2 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(param_2 + 0x118);
  }
  if (lVar5 != 0) {
    lVar2 = param_1[1];
    if (lVar2 != 0) {
      if (lVar2 == lVar5) {
        return 1;
      }
      plVar4 = *(longlong **)(lVar2 + 0x158);
      plVar1 = plVar4 + *(int *)(lVar2 + 0x160);
      for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
        if (*plVar4 == lVar5) {
          cVar3 = AActor::IsChildActor(lVar5);
          if (cVar3 != '\0') {
            return 1;
          }
          break;
        }
      }
    }
    if ((*param_1 != 0) && (*param_1 == lVar5)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142d3e230 FUN_142d3e230 body=248 status=ok
// SIG undefined FUN_142d3e230(void)

undefined8 FUN_142d3e230(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar2 = *param_2;
  if (((lVar2 == 0) || (lVar2 == *(longlong *)(param_1 + 0x180))) || (0 < *(int *)(lVar2 + 0x40))) {
LAB_142d3e311:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)param_2[9];
    bVar8 = iVar5 == 0;
    if (bVar8) {
      plVar7 = (longlong *)param_2[6];
      plVar1 = plVar7 + (int)param_2[7];
      if (plVar7 != plVar1) {
        while (((plVar3 = (longlong *)*plVar7, plVar3 == (longlong *)0x0 ||
                ((*(byte *)(plVar3 + 0x17) & 1) == 0)) ||
               (iVar5 = (**(code **)(*plVar3 + 0x4e8))(), iVar5 == 0))) {
          plVar7 = plVar7 + 1;
          if (plVar7 == plVar1) {
            return 1;
          }
        }
        iVar5 = (int)param_2[9];
        bVar8 = iVar5 == 0;
        goto LAB_142d3e2c0;
      }
    }
    else {
LAB_142d3e2c0:
      if (bVar8 || iVar5 < 0) goto LAB_142d3e311;
      plVar7 = (longlong *)param_2[8];
      uVar6 = *(undefined8 *)(param_1 + 0x118);
      plVar1 = plVar7 + (int)param_2[9];
      for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
        if (((*plVar7 != 0) && (plVar3 = *(longlong **)(*plVar7 + 0x2d8), plVar3 != (longlong *)0x0)
            ) && (cVar4 = (**(code **)(*plVar3 + 0x528))(plVar3,uVar6), cVar4 != '\0'))
        goto LAB_142d3e311;
      }
    }
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 142d3e330 FUN_142d3e330 body=68 status=ok
// SIG undefined FUN_142d3e330(void)

undefined1 FUN_142d3e330(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_142d52a00(param_1 + 0x60);
  if (cVar2 != '\0') {
    uVar1 = FUN_142d52a20(param_1 + 0x60);
    uVar1 = FArchive::operator<<(uVar1);
    cVar2 = FUN_142d639f0(uVar1,0);
    if (cVar2 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142d3e380 FUN_142d3e380 body=481 status=ok
// SIG undefined FUN_142d3e380(void)

undefined1 FUN_142d3e380(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong local_18;
  longlong *local_10;
  
  if (((*(longlong *)(param_1 + 0x888) == 0) || (*(longlong *)(param_1 + 0x890) == 0)) ||
     (param_2 == (longlong *)0x0)) {
    return 1;
  }
  lVar8 = param_2[0x1f];
  if (lVar8 == 0) {
    (**(code **)(*param_2 + 0x368))(param_2);
    lVar8 = param_2[0x1f];
    if (lVar8 == 0) {
      return 1;
    }
  }
  lVar6 = UThrobber::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return 1;
  }
  plVar3 = *(longlong **)(param_1 + 0x118);
  lVar8 = 0;
  if (plVar3 != (longlong *)0x0) {
    uVar7 = FUN_142e27720();
    lVar8 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar7);
  }
  FUN_142c85760(lVar8,&local_18,param_2);
  if (local_18 != 0) {
    lVar8 = *(longlong *)(local_18 + 8);
    lVar6 = FUN_142e219b0();
    for (; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
      if (lVar8 == lVar6) {
        bVar4 = true;
        goto LAB_142d3e487;
      }
    }
    bVar4 = false;
LAB_142d3e487:
    lVar8 = 0;
    if (bVar4) {
      lVar8 = local_18;
    }
    if ((lVar8 != 0) && (lVar8 = FUN_142c6f8e0(lVar8,1), lVar8 != 0)) {
      lVar6 = UAnimMontage::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        uVar5 = (**(code **)(**(longlong **)(param_1 + 0x888) + 0x470))
                          (*(longlong **)(param_1 + 0x888),lVar8,1);
        goto LAB_142d3e4fe;
      }
    }
  }
  uVar5 = 1;
LAB_142d3e4fe:
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return uVar5;
}



// FUNCTION 142d3e570 FUN_142d3e570 body=106 status=ok
// SIG undefined FUN_142d3e570(void)

undefined8 FUN_142d3e570(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  float extraout_XMM0_Da;
  
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    lVar1 = param_2[0x1f];
    if (lVar1 == 0) {
      (**(code **)(*param_2 + 0x368))(param_2);
      lVar1 = param_2[0x1f];
      if (lVar1 == 0) {
        return 0;
      }
    }
    FUN_142d1bed0(lVar1 + 0xe0,param_1);
    if (extraout_XMM0_Da == 0.0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142d3e5e0 FUN_142d3e5e0 body=701 status=ok
// SIG undefined FUN_142d3e5e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_142d3e5e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
             float *param_6)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  float fVar9;
  float fVar10;
  undefined8 local_18;
  float local_10;
  
  lVar2 = *(longlong *)(param_2 + 0x118);
  if ((lVar2 != 0) && ((*(char *)(param_1 + 0x9a) != '\0' || (lVar2 != param_3)))) {
    if ((*(longlong *)(param_1 + 0x90) == 0) ||
       (cVar3 = FUN_142c48f90(*(longlong *)(param_1 + 0x90),lVar2), cVar3 == '\0')) {
      lVar7 = *(longlong *)(lVar2 + 0x168);
      if (lVar7 == 0) {
        local_18 = _DAT_1468b5d90;
        local_10 = DAT_1468b5d98;
      }
      else {
        local_18 = *(undefined8 *)(lVar7 + 0x220);
        local_10 = *(float *)(lVar7 + 0x228);
      }
      fVar9 = *param_6 - (float)local_18;
      fVar10 = param_6[1] - (float)((ulonglong)local_18 >> 0x20);
      if (param_5 < fVar10 * fVar10 + fVar9 * fVar9 +
                    (param_6[2] - local_10) * (param_6[2] - local_10)) {
        return 0;
      }
    }
    if ((*(char *)(param_1 + 0x98) != '\0') ||
       (cVar3 = FUN_142dd39e0(param_2,param_3), cVar3 != '\0')) {
      if (param_4 == 0) {
        iVar5 = 1;
      }
      else {
        uVar6 = FUN_142df3580(lVar2);
        iVar5 = FUN_142de8c20(param_4,uVar6);
      }
      if ((((*(char *)(param_1 + 0x9b) != '\0') || (iVar5 != 2)) &&
          ((*(char *)(param_1 + 0x9c) != '\0' || (iVar5 != 0)))) &&
         ((*(char *)(param_1 + 0x9d) != '\0' || (iVar5 != 1)))) {
        if ((*(char *)(param_1 + 0x99) == '\0') &&
           ((lVar7 = FUN_142d29780(lVar2), lVar7 != 0 && ((*(uint *)(lVar7 + 0x840) >> 3 & 1) != 0))
           )) {
          return 0;
        }
        if ((*(longlong *)(param_1 + 0xa0) == 0) ||
           (cVar3 = FUN_142c48f60(*(longlong *)(param_1 + 0xa0),lVar2,param_3), cVar3 != '\0')) {
          if ((*(byte *)(param_1 + 200) & 1) == 0) {
LAB_142d3e813:
            if ((*(byte *)(param_1 + 0xe0) & 1) != 0) {
              plVar8 = *(longlong **)(param_1 + 0xf8);
              plVar1 = plVar8 + *(int *)(param_1 + 0x100);
              if (plVar8 != plVar1) {
                do {
                  iVar5 = *(int *)(*plVar8 + 0x90);
                  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < iVar5) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)iVar5 * 8) !=
                      *plVar8 + 0x88)) {
                    bVar4 = false;
                  }
                  else {
                    bVar4 = true;
                  }
                  if (bVar4) {
                    return 0;
                  }
                  plVar8 = plVar8 + 1;
                } while (plVar8 != plVar1);
              }
            }
            if ((*(int *)(param_1 + 0xb0) < 1) ||
               (cVar3 = FUN_142def1c0(param_1 + 0xa8,lVar2), cVar3 != '\0')) {
              return 1;
            }
          }
          else {
            plVar8 = *(longlong **)(param_1 + 0xe8);
            plVar1 = plVar8 + *(int *)(param_1 + 0xf0);
            if (plVar8 != plVar1) {
              do {
                iVar5 = *(int *)(*plVar8 + 0x90);
                if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < iVar5) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)iVar5 * 8) !=
                    *plVar8 + 0x88)) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                if (bVar4) goto LAB_142d3e813;
                plVar8 = plVar8 + 1;
              } while (plVar8 != plVar1);
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142d3e8a0 FUN_142d3e8a0 body=55 status=ok
// SIG undefined FUN_142d3e8a0(void)

bool FUN_142d3e8a0(longlong param_1)

{
  char cVar1;
  
  if ((((*(uint *)(param_1 + -0x20) >> 4 & 1) == 0) && (*(longlong *)(param_1 + 0x20) != 0)) &&
     (*(longlong *)(param_1 + 0x28) != 0)) {
    cVar1 = UWorld::IsGameWorld(*(longlong *)(param_1 + 0x20));
    return cVar1 != '\0';
  }
  return false;
}



// FUNCTION 142d3e8e0 FUN_142d3e8e0 body=73 status=ok
// SIG undefined FUN_142d3e8e0(void)

undefined1 FUN_142d3e8e0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_1 != 0) {
    lVar2 = FUN_142e20fc0();
    for (lVar1 = *param_1; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) {
        if (*param_1 == 0) {
          return 0;
        }
        if (*(char *)((longlong)param_1 + 0x1c) == '\0') {
          return 0;
        }
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142d3e930 HasEnd body=8 status=ok
// SIG undefined HasEnd(void)

byte USequencerScriptingRangeExtensions::HasEnd(byte *param_1)

{
  return *param_1 >> 1 & 1;
}



// FUNCTION 142d3e940 FUN_142d3e940 body=17 status=ok
// SIG undefined FUN_142d3e940(void)

undefined1 FUN_142d3e940(int *param_1)

{
  if ((-1 < *param_1) && (-1 < param_1[1])) {
    return 1;
  }
  return 0;
}



// FUNCTION 142d3e960 FUN_142d3e960 body=1040 status=ok
// SIG undefined FUN_142d3e960(void)

bool FUN_142d3e960(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  float *pfVar5;
  undefined4 uVar6;
  undefined4 uVar7;
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
  undefined8 local_a8;
  float local_a0;
  undefined8 local_98;
  float local_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  if (((*(char *)(param_2 + 0x1a0) == '\0') || (*(longlong *)(param_3 + 8) == 0)) ||
     (*(longlong *)(param_1 + 0x118) == 0)) {
    return true;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
  if (lVar1 == 0) {
    uVar6 = (undefined4)DAT_1468b5da0;
    uVar7 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
    local_a0 = DAT_1468b5da8;
    fVar11 = DAT_1468b5d98;
    fVar14 = DAT_1468b5d90;
    fVar13 = DAT_1468b5d94;
  }
  else {
    fVar14 = *(float *)(lVar1 + 0x220);
    fVar13 = *(float *)(lVar1 + 0x224);
    fVar11 = *(float *)(lVar1 + 0x228);
    local_88 = *(float *)(lVar1 + 0x210);
    fStack_84 = *(float *)(lVar1 + 0x214);
    fStack_80 = *(float *)(lVar1 + 0x218);
    fStack_7c = *(float *)(lVar1 + 0x21c);
    auVar12._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_84);
    auVar12._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_88);
    auVar12._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_80);
    auVar12._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_7c);
    iVar3 = movmskps(fVar11,auVar12);
    if (iVar3 != 0) {
      *(float *)(lVar1 + 0x250) = local_88;
      *(float *)(lVar1 + 0x254) = fStack_84;
      *(float *)(lVar1 + 600) = fStack_80;
      *(float *)(lVar1 + 0x25c) = fStack_7c;
      local_a0 = fVar11;
      local_a8._0_4_ = fVar14;
      local_a8._4_4_ = fVar13;
      puVar4 = (undefined8 *)FQuat::Rotator(&local_88,&local_a8);
      *(undefined8 *)(lVar1 + 0x260) = *puVar4;
      *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar4 + 1);
    }
    uVar6 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
    uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
    local_a0 = *(float *)(lVar1 + 0x268);
  }
  local_a8 = CONCAT44(uVar7,uVar6);
  local_98 = local_a8;
  local_90 = local_a0;
  pfVar5 = (float *)FRotator::Vector(&local_98,&local_a8);
  fVar9 = pfVar5[1];
  fVar17 = *pfVar5;
  fVar8 = fVar17 * fVar17 + fVar9 * fVar9;
  if (fVar8 == 1.0) {
    if (pfVar5[2] == 0.0) {
      local_a8 = *(undefined8 *)pfVar5;
      local_a0 = pfVar5[2];
      uVar2 = local_a8;
      fVar10 = (float)((ulonglong)local_a8 >> 0x20);
      fVar16 = pfVar5[2];
      fVar18 = (float)local_a8;
      local_a8 = uVar2;
    }
    else {
LAB_142d3ebb0:
      fVar10 = fVar9;
      fVar16 = 0.0;
      fVar18 = fVar17;
    }
  }
  else {
    fVar10 = DAT_1468b5d94;
    fVar16 = DAT_1468b5d98;
    fVar18 = DAT_1468b5d90;
    if (1e-08 <= fVar8) {
      auVar12 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
      fVar10 = auVar12._0_4_;
      fVar10 = fVar10 + fVar10 * (0.5 - fVar8 * 0.5 * fVar10 * fVar10);
      fVar10 = fVar10 + fVar10 * (0.5 - fVar8 * 0.5 * fVar10 * fVar10);
      fVar17 = fVar17 * fVar10;
      fVar9 = fVar9 * fVar10;
      goto LAB_142d3ebb0;
    }
  }
  lVar1 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x168);
  if (lVar1 == 0) {
    local_90 = DAT_1468b5d98;
    puVar4 = &local_98;
    local_98 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  }
  else {
    puVar4 = &local_a8;
    local_a0 = *(float *)(lVar1 + 0x228);
    local_a8 = *(undefined8 *)(lVar1 + 0x220);
  }
  local_90 = *(float *)(puVar4 + 1);
  fVar13 = (float)((ulonglong)*puVar4 >> 0x20) - fVar13;
  fVar14 = (float)*puVar4 - fVar14;
  fVar9 = fVar13 * fVar13 + fVar14 * fVar14;
  if (fVar9 == 1.0) {
    fVar17 = local_90 - fVar11;
    fVar8 = fVar13;
    fVar15 = fVar14;
    if (local_90 - fVar11 == 0.0) goto LAB_142d3ecd5;
  }
  else {
    fVar17 = DAT_1468b5d98;
    fVar8 = DAT_1468b5d94;
    fVar15 = DAT_1468b5d90;
    if (fVar9 < 1e-08) goto LAB_142d3ecd5;
    auVar12 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
    fVar11 = auVar12._0_4_;
    fVar11 = fVar11 + fVar11 * (0.5 - fVar9 * 0.5 * fVar11 * fVar11);
    fVar11 = fVar11 + fVar11 * (0.5 - fVar9 * 0.5 * fVar11 * fVar11);
    fVar14 = fVar14 * fVar11;
    fVar13 = fVar13 * fVar11;
  }
  fVar17 = 0.0;
  fVar8 = fVar13;
  fVar15 = fVar14;
LAB_142d3ecd5:
  fVar13 = fVar10 * fVar8 + fVar15 * fVar18 + fVar16 * fVar17;
  fVar14 = -1.0;
  if ((-1.0 <= fVar13) && (fVar14 = fVar13, 1.0 <= fVar13)) {
    fVar14 = 1.0;
  }
  fVar14 = _guard_xfg_dispatch_icall_nop(fVar14);
  return fVar14 * 57.295776 < *(float *)(param_2 + 0x19c) ||
         fVar14 * 57.295776 == *(float *)(param_2 + 0x19c);
}



// FUNCTION 142d3ed70 FUN_142d3ed70 body=469 status=ok
// SIG undefined FUN_142d3ed70(void)

longlong FUN_142d3ed70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
                      float *param_9,undefined8 param_10)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float local_48;
  
  FUN_142d0aa70(param_1,param_3,param_2,0);
  *(undefined8 *)(param_1 + 0x40) = param_5;
  *(undefined8 *)(param_1 + 0x48) = param_4;
  FUN_140729f20(param_1 + 0x50,param_6);
  uVar3 = *(undefined4 *)(param_7 + 1);
  *(undefined8 *)(param_1 + 0x100) = *param_7;
  *(undefined4 *)(param_1 + 0x108) = uVar3;
  uVar3 = *(undefined4 *)(param_8 + 1);
  *(undefined8 *)(param_1 + 0x10c) = *param_8;
  *(undefined4 *)(param_1 + 0x114) = uVar3;
  fVar4 = param_9[1];
  fVar1 = *param_9;
  fVar2 = param_9[2];
  fVar5 = fVar1 * fVar1 + fVar4 * fVar4 + fVar2 * fVar2;
  if (fVar5 == 1.0) {
    local_48 = (float)*(undefined8 *)param_9;
    fVar8 = (float)((ulonglong)*(undefined8 *)param_9 >> 0x20);
    fVar6 = param_9[2];
  }
  else {
    fVar8 = DAT_1468b5d94;
    fVar6 = DAT_1468b5d98;
    local_48 = DAT_1468b5d90;
    if (1e-08 <= fVar5) {
      auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar6 = auVar7._0_4_;
      fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
      fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
      local_48 = fVar1 * fVar6;
      fVar8 = fVar4 * fVar6;
      fVar6 = fVar2 * fVar6;
    }
  }
  fVar4 = (float)FUN_142d9cad0(param_10,0);
  *(ulonglong *)(param_1 + 0x118) = CONCAT44(fVar8 * fVar4,local_48 * fVar4);
  *(float *)(param_1 + 0x120) = fVar6 * fVar4;
  return param_1;
}



// FUNCTION 142d3ef50 FUN_142d3ef50 body=238 status=ok
// SIG undefined FUN_142d3ef50(void)

void FUN_142d3ef50(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  longlong local_10;
  
  plVar3 = (longlong *)(param_2 + 0x390);
  *(undefined1 *)(param_2 + 0x3a8) = 0;
  if (*plVar3 == 0) {
    *(undefined1 *)(param_2 + 0x2f3) = 0;
    return;
  }
  local_20 = (longlong *)0x0;
  if (plVar3 != &local_28) {
    *plVar3 = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 0x398,&local_20);
    plVar6 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  local_18 = *plVar3;
  local_10 = *(longlong *)(param_2 + 0x398);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_140699060(param_2 + 0x338,&local_18);
  *(undefined1 *)(param_2 + 0x2f3) = 0;
  return;
}



// FUNCTION 142d3f040 FUN_142d3f040 body=70 status=ok
// SIG undefined FUN_142d3f040(void)

void FUN_142d3f040(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_2;
  if ((((-1 < iVar1) && (-1 < param_2)) && (iVar1 < *(int *)(param_1 + 0x40))) &&
     (((lVar2 = (longlong)iVar1 * 0x3b0 + *(longlong *)(param_1 + 0x38),
       *(int *)(lVar2 + 0x328) == iVar1 &&
       (*(int *)(lVar2 + 0x32c) == (int)((ulonglong)param_2 >> 0x20))) && (lVar2 != 0)))) {
    FUN_142d3ef50(param_1,lVar2);
    return;
  }
  return;
}



// FUNCTION 142d3f090 FUN_142d3f090 body=1304 status=ok
// SIG undefined FUN_142d3f090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d3f090(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  undefined4 param_5,longlong *param_6,undefined4 param_7,longlong param_8,
                  longlong param_9,longlong param_10,longlong param_11,longlong param_12,
                  undefined4 param_13)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_2b8 [32];
  longlong *local_298;
  longlong *local_290;
  longlong local_288;
  undefined4 local_280;
  undefined4 local_27c;
  longlong local_278;
  undefined4 local_270;
  undefined4 local_26c;
  longlong local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  undefined1 local_248 [12];
  undefined4 local_23c;
  undefined1 local_22c [24];
  undefined1 local_214 [212];
  undefined4 local_140;
  undefined1 local_13c;
  longlong local_138;
  undefined4 local_130;
  undefined1 local_12c;
  longlong local_118;
  undefined4 local_110;
  undefined1 local_10c;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined4 local_d0;
  undefined1 local_cc;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  local_288 = param_8;
  local_278 = param_11;
  local_260 = param_9;
  local_268 = param_10;
  local_258 = param_2;
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if (lVar4 == 0) {
    return;
  }
  uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  iVar3 = FUN_1428cf800(uVar5);
  if (iVar3 != 3) {
    return;
  }
  local_250 = param_2;
  if (param_2 == 0) {
    local_250 = (**(code **)(*param_1 + 0x148))(param_1);
  }
  plVar10 = (longlong *)0x0;
  if (param_3 != (longlong *)0x0) {
    plVar6 = (longlong *)UCelLightData::GetPrivateStaticClass();
    plVar8 = param_3;
    do {
      if (plVar8 == plVar6) {
        plVar6 = (longlong *)UCelLightData::GetPrivateStaticClass();
        plVar8 = param_3;
        goto LAB_142d3f183;
      }
      plVar8 = (longlong *)plVar8[6];
    } while (plVar8 != (longlong *)0x0);
  }
LAB_142d3f3b1:
  lVar4 = local_250;
  if ((local_250 != 0) && (param_4 != (longlong *)0x0)) {
    plVar6 = (longlong *)FUN_142e49950();
    lVar2 = local_258;
    lVar7 = local_288;
    plVar8 = param_4;
    do {
      if (plVar8 == plVar6) {
        if (local_288 == 0) {
          if (param_9 != 0) {
            local_280 = (undefined4)param_6[1];
            local_288 = *param_6;
            local_290 = (longlong *)local_258;
            local_298 = (longlong *)param_12;
            FUN_142d431f0(param_9,0,param_5,&local_288);
          }
          if (param_10 != 0) {
            local_288 = *param_6;
            local_280 = (undefined4)param_6[1];
            local_290 = (longlong *)0x0;
            local_298 = (longlong *)lVar2;
            FUN_142d41cb0(param_10,0,param_5,&local_288);
          }
          lVar4 = local_278;
          if (local_278 == 0) {
            return;
          }
          local_270 = (undefined4)param_6[1];
          local_288 = 0;
          local_278 = *param_6;
          local_27c = local_26c;
          local_280 = 0;
          _guard_xfg_dispatch_icall_nop(local_248,0,0x90);
          local_290 = (longlong *)local_248;
          local_298 = &local_288;
          local_23c = 0x3f800000;
          FUN_142d424e0(lVar4,param_5,&local_278,lVar2);
          return;
        }
        plVar6 = (longlong *)FUN_142e49950();
        plVar8 = param_4;
        goto LAB_142d3f3f5;
      }
      plVar8 = (longlong *)plVar8[6];
    } while (plVar8 != (longlong *)0x0);
  }
  return;
  while (plVar8 = (longlong *)plVar8[6], plVar9 = plVar10, plVar8 != (longlong *)0x0) {
LAB_142d3f183:
    plVar9 = param_3;
    if (plVar8 == plVar6) break;
  }
  lVar4 = plVar9[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar9 + 0x368))(plVar9);
    lVar4 = plVar9[0x1f];
    param_10 = local_268;
    param_9 = local_260;
    if (lVar4 == 0) goto LAB_142d3f3b1;
  }
  lVar7 = UCelLightData::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  param_10 = local_268;
  param_9 = local_260;
  if ((!bVar1) || ((*(byte *)(lVar4 + 0x134) & 1) == 0)) goto LAB_142d3f3b1;
  uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar4 = FUN_142d18d20(uVar5);
  if (lVar4 == 0) {
    return;
  }
  FUN_142d0a300(local_248);
  if (param_4 != (longlong *)0x0) {
    plVar6 = (longlong *)FUN_142e49950();
    plVar8 = param_4;
    do {
      if (plVar8 == plVar6) {
        plVar6 = (longlong *)FUN_142e49950();
        plVar8 = param_4;
        goto LAB_142d3f260;
      }
      plVar8 = (longlong *)plVar8[6];
    } while (plVar8 != (longlong *)0x0);
  }
  goto LAB_142d3f2cb;
  while (plVar8 = (longlong *)plVar8[6], plVar9 = plVar10, plVar8 != (longlong *)0x0) {
LAB_142d3f3f5:
    plVar9 = param_4;
    if (plVar8 == plVar6) break;
  }
  _guard_xfg_dispatch_icall_nop(local_248,0,0x90);
  local_278 = *param_6;
  local_270 = (undefined4)param_6[1];
  local_23c = 0x3f800000;
  local_298 = (longlong *)lVar4;
  local_290 = plVar9;
  FUN_142d41800(lVar7,param_5,local_248,&local_278);
  return;
  while (plVar8 = (longlong *)plVar8[6], plVar9 = plVar10, plVar8 != (longlong *)0x0) {
LAB_142d3f260:
    plVar9 = param_4;
    if (plVar8 == plVar6) break;
  }
  plVar8 = (longlong *)plVar9[0x1f];
  if (plVar8 == (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x368))(plVar9);
    plVar8 = (longlong *)plVar9[0x1f];
    if (plVar8 == (longlong *)0x0) goto LAB_142d3f2cb;
  }
  lVar7 = FUN_142e49950();
  if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) goto LAB_142d3f2ce;
LAB_142d3f2cb:
  plVar8 = plVar10;
LAB_142d3f2ce:
  FWeakObjectPtr::operator=(local_22c,plVar8);
  local_e8 = param_5;
  local_e4 = 1;
  if (param_6 != &local_138) {
    local_138 = *param_6;
    local_130 = (undefined4)param_6[1];
    local_12c = 1;
  }
  if (param_6 != &local_118) {
    local_118 = *param_6;
    local_110 = (undefined4)param_6[1];
    local_10c = 1;
  }
  local_140 = param_7;
  local_13c = 1;
  FWeakObjectPtr::operator=(local_214,local_288);
  local_298 = (longlong *)local_248;
  local_d0 = param_13;
  local_cc = 1;
  FUN_142d29370(lVar4,param_3,local_258,0);
  FUN_1409c53c0(local_248);
  return;
}



// FUNCTION 142d3f5b0 FUN_142d3f5b0 body=147 status=ok
// SIG undefined FUN_142d3f5b0(void)

void FUN_142d3f5b0(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 != 0) {
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    iVar1 = FUN_1428cf800(uVar3);
    if (iVar1 == 3) {
      uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar2 = FUN_142d18d20(uVar3);
      if (lVar2 != 0) {
        if (param_4 == '\0') {
          FUN_142d29970(lVar2,param_3,param_2);
        }
        else {
          FUN_142d298e0(lVar2,param_2);
        }
      }
    }
  }
  return;
}



// FUNCTION 142d3f650 FUN_142d3f650 body=559 status=ok
// SIG undefined FUN_142d3f650(void)

void FUN_142d3f650(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  ulonglong in_stack_ffffffffffffff88;
  uint local_58;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  longlong *local_18;
  int local_10;
  
  UAnimNotify::Notify();
  if (*(longlong *)(param_1 + 0x48) != 0) {
    if (((*(byte *)(param_1 + 0x38) & 1) == 0) && (*(char *)(param_1 + 0x3c) == '\0')) {
      if (((longlong *)param_2[0x23] != (longlong *)0x0) &&
         (lVar1 = (**(code **)(*(longlong *)param_2[0x23] + 0x670))(), lVar1 != 0)) {
        uVar4 = FUN_142c98860(param_1 + 0x58,*(undefined8 *)(lVar1 + 0x488));
        FUN_142d408e0(*(undefined8 *)(param_1 + 0x48),lVar1,uVar4,0,0);
      }
    }
    else if (((longlong *)param_2[0x23] != (longlong *)0x0) &&
            (lVar1 = (**(code **)(*(longlong *)param_2[0x23] + 0x148))(), lVar1 != 0)) {
      UWorld::GetPlayerControllerIterator(lVar1,&local_18);
      while ((-1 < local_10 && (local_10 < (int)local_18[1]))) {
        lVar1 = FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
        if ((lVar1 == 0) ||
           (((lVar3 = *(longlong *)(param_1 + 0x48),
             ((byte)*(undefined4 *)(param_1 + 0x38) & 3) == 3 &&
             (lVar2 = (**(code **)(*(longlong *)param_2[0x23] + 0x668))(), lVar2 == lVar1)) &&
            (lVar3 = *(longlong *)(param_1 + 0x50), lVar3 == 0)))) {
LAB_142d3f840:
          local_10 = local_10 + 1;
        }
        else {
          if (*(char *)(param_1 + 0x3c) == '\0') {
            uVar4 = FUN_142c98860(param_1 + 0x58,*(undefined8 *)(lVar1 + 0x488));
            in_stack_ffffffffffffff88 = 0;
            FUN_142d408e0(lVar3,lVar1,uVar4,0,0);
            goto LAB_142d3f840;
          }
          (**(code **)(*param_2 + 0x428))(param_2,&local_48,*(undefined8 *)(param_1 + 0x40));
          local_30 = 0;
          local_58 = local_58 & 0xffffff00;
          local_38 = (ulonglong)local_58;
          local_28 = local_48;
          local_20 = local_40;
          in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffffffffffff00;
          FUN_142d40a00(lVar3,lVar1,&local_28,&local_38,in_stack_ffffffffffffff88,0,0,0);
          local_10 = local_10 + 1;
        }
      }
    }
  }
  return;
}



// FUNCTION 142d3f880 FUN_142d3f880 body=167 status=ok
// SIG undefined FUN_142d3f880(void)

void FUN_142d3f880(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  
  plVar3 = *(longlong **)(param_1 + 0x38);
  plVar4 = plVar3 + (longlong)*(int *)(param_1 + 0x40) * 0x76;
  for (; plVar3 != plVar4; plVar3 = plVar3 + 0x76) {
    if ((((*(char *)((longlong)plVar3 + 0x2f2) != '\0') && (-1 < (int)plVar3[0x65])) &&
        (-1 < *(int *)((longlong)plVar3 + 0x32c))) &&
       (((plVar1 = (longlong *)*plVar3, plVar1 == param_2 && (plVar1 != (longlong *)0x0)) &&
        ((char)plVar3[0x75] != '\x01')))) {
      *(undefined1 *)(plVar3 + 0x75) = 1;
      lVar2 = (**(code **)(*plVar1 + 0x148))();
      if (lVar2 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(lVar2 + 0x8c8);
      }
      *(undefined4 *)((longlong)plVar3 + 0x3a4) = uVar5;
    }
  }
  return;
}



// FUNCTION 142d3f930 FUN_142d3f930 body=111 status=ok
// SIG undefined FUN_142d3f930(void)

void FUN_142d3f930(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x178) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x178) + 0x848) != param_2)) {
    iVar1 = FUN_14233f450();
    if (iVar1 == 3) {
      lVar2 = FUN_142d29780(param_2);
      if (lVar2 != 0) {
        FUN_140483870(lVar2 + 0x1e8,param_1);
      }
    }
  }
  FUN_142d48a00(param_1,1,param_3);
  return;
}



// FUNCTION 142d3f9a0 FUN_142d3f9a0 body=150 status=ok
// SIG undefined FUN_142d3f9a0(void)

void FUN_142d3f9a0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_142d44ce0();
  if ((param_2 != 0) && (lVar2 = *(longlong *)(param_2 + 0xf8), lVar2 != 0)) {
    plVar5 = (longlong *)(param_1 + 0x348);
    plVar3 = (longlong *)*plVar5;
    iVar1 = *(int *)(param_1 + 0x350);
    for (plVar4 = plVar3; plVar4 != plVar3 + iVar1; plVar4 = plVar4 + 1) {
      if (*plVar4 == lVar2) {
        if ((int)((longlong)plVar4 - (longlong)plVar3 >> 3) != -1) {
          return;
        }
        break;
      }
    }
    *(int *)(param_1 + 0x350) = iVar1 + 1;
    if (*(int *)(param_1 + 0x354) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5);
    }
    *(longlong *)((longlong)iVar1 * 8 + *plVar5) = lVar2;
  }
  return;
}



// FUNCTION 142d3fa40 FUN_142d3fa40 body=268 status=ok
// SIG undefined FUN_142d3fa40(void)

void FUN_142d3fa40(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  longlong local_20;
  undefined8 local_18;
  
  if ((((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0x2b0), lVar1 != 0)) &&
      ((*(byte *)(lVar1 + 0x660) & 1) != 0)) &&
     ((*(longlong *)(param_2 + 0x2d0) == 0 ||
      (*(char *)(*(longlong *)(param_2 + 0x2d0) + 0xa8) != '\0')))) {
    lVar3 = 0;
    lVar2 = lVar3;
    if (param_1[0x2f] != 0) {
      lVar2 = *(longlong *)(param_1[0x2f] + 0x488);
    }
    if (lVar2 != *(longlong *)(lVar1 + 0x118)) {
      local_38 = 0;
      uStack_30 = 0;
      local_28 = 0;
      local_18 = 0;
      local_3c = (**(code **)(*param_1 + 0x3f8))(param_1,param_2);
      if (*(longlong *)(param_2 + 0x2b0) != 0) {
        lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x2b0) + 0x118);
      }
      local_40 = *(undefined4 *)(param_2 + 0x118);
      local_48 = *(undefined8 *)(param_2 + 0x110);
      local_28 = local_28 | 2;
      local_58 = *(undefined8 *)(param_2 + 0x58);
      local_50 = *(undefined8 *)(param_2 + 0x50);
      local_20 = lVar3;
      FUN_142d4e7a0(param_1,&local_58);
    }
  }
  return;
}



// FUNCTION 142d3fb50 FUN_142d3fb50 body=716 status=ok
// SIG undefined FUN_142d3fb50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d3fb50(longlong param_1,char param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined8 local_res8;
  
  if (*(longlong *)(param_1 + 0x890) != 0) {
    FUN_142dbb5d0(*(longlong *)(param_1 + 0x890) + 0x8b0,&DAT_146b31d08);
    FUN_142dbb5d0(*(longlong *)(param_1 + 0x890) + 0x948,&DAT_146b31d08);
  }
  plVar6 = *(longlong **)(param_1 + 0x880);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x448))(plVar6,&DAT_146b31d08);
  }
  if (*(longlong *)(param_1 + 0x8b8) != 0) {
    lVar3 = FUN_142e20fc0();
    lVar4 = *(longlong *)(param_1 + 0x8b8);
    lVar5 = lVar4;
    if (lVar4 != 0) {
      while (lVar5 != lVar3) {
        plVar6 = (longlong *)(lVar5 + 0x30);
        lVar5 = *plVar6;
        if (*plVar6 == 0) {
          return;
        }
      }
      if ((lVar4 != 0) && (*(char *)(param_1 + 0x8d4) != '\0')) {
        lVar4 = *(longlong *)(param_1 + 0x120);
        if ((lVar4 == 0) && (lVar4 = FUN_1423407b0(param_1), lVar4 == 0)) {
          fVar12 = 0.0;
        }
        else {
          fVar12 = *(float *)(lVar4 + 0x790);
        }
        local_res8 = *(undefined8 *)(param_1 + 0x878);
        fVar10 = (float)FUN_142de77e0(param_1 + 0x7d8,*(undefined8 *)(param_1 + 0x118),0,&local_res8
                                     );
        cVar1 = *(char *)(param_1 + 0x8d4);
        lVar4 = 0;
        *(float *)(param_1 + 0x8d8) = fVar10 + fVar12;
        if (cVar1 == '\x01') {
          lVar4 = param_1 + 0x218;
        }
        else if (cVar1 == '\x02') {
          lVar4 = param_1 + 0x3d0;
        }
        else if (cVar1 == '\x04') {
          lVar4 = param_1 + 0x620;
        }
        *(undefined8 *)(param_1 + 0x8b8) = 0;
        *(undefined8 *)(param_1 + 0x8c0) = 0;
        *(undefined1 *)(param_1 + 0x8d4) = 0;
        *(undefined8 *)(param_1 + 0x8c8) = _DAT_1468b5d90;
        *(undefined4 *)(param_1 + 0x8d0) = DAT_1468b5d98;
        *(undefined1 *)(param_1 + 0x210) = 0;
        if (lVar4 != 0) {
          lVar5 = *(longlong *)(param_1 + 0x120);
          if ((lVar5 == 0) && (lVar5 = FUN_1423407b0(param_1), lVar5 == 0)) {
            fVar12 = 0.0;
          }
          else {
            fVar12 = *(float *)(lVar5 + 0x790);
          }
          local_res8 = *(undefined8 *)(param_1 + 0x878);
          fVar10 = (float)FUN_142de77e0(lVar4,*(undefined8 *)(param_1 + 0x118),0,&local_res8);
          *(float *)(lVar4 + 0x90) = fVar10 + fVar12;
        }
        if (((param_2 == '\x01') && (*(longlong **)(param_1 + 0x118) != (longlong *)0x0)) &&
           (plVar6 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x118) + 0x668))(),
           plVar6 != (longlong *)0x0)) {
          uVar7 = (**(code **)(*plVar6 + 0x148))(plVar6);
          lVar4 = FUN_142d39320(uVar7);
          if (lVar4 != 0) {
            puVar8 = *(undefined8 **)(lVar4 + 0x38);
            puVar9 = puVar8 + (longlong)*(int *)(lVar4 + 0x40) * 0x76;
            for (; puVar8 != puVar9; puVar8 = puVar8 + 0x76) {
              if (((-1 < *(int *)(puVar8 + 0x65)) && (-1 < *(int *)((longlong)puVar8 + 0x32c))) &&
                 ((plVar2 = (longlong *)*puVar8, plVar2 == plVar6 &&
                  ((plVar2 != (longlong *)0x0 && (*(char *)(puVar8 + 0x75) != '\x01')))))) {
                *(undefined1 *)(puVar8 + 0x75) = 1;
                lVar4 = (**(code **)(*plVar2 + 0x148))();
                if (lVar4 == 0) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = *(undefined4 *)(lVar4 + 0x8c8);
                }
                *(undefined4 *)((longlong)puVar8 + 0x3a4) = uVar11;
              }
            }
          }
        }
        FUN_142d48b70(param_1);
      }
    }
  }
  return;
}



// FUNCTION 142d3fe40 FUN_142d3fe40 body=351 status=ok
// SIG undefined FUN_142d3fe40(void)

void FUN_142d3fe40(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  longlong local_48 [6];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  undefined1 local_a;
  
  UGameplayTask::EndTask();
  lVar4 = *param_2;
  if ((lVar4 == 0) || (*(int *)(lVar4 + 8) < 1)) {
    local_68 = DAT_1466ad3c0;
    local_60 = DAT_1466ad3c8;
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
    FUN_142d33f40(param_1 + 0x78,local_48,&local_68,0);
    if (local_48[3] != 0) {
      FMemory::Free();
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  else {
    puVar6 = (undefined8 *)FUN_142be50e0(lVar4,local_58,0);
    local_78 = *puVar6;
    local_70 = *(undefined4 *)(puVar6 + 1);
    uVar7 = FUN_142be4ff0(lVar4,0);
    FUN_142d33f40(param_1 + 0x68,lVar4,&local_78,uVar7);
  }
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  plVar5 = (longlong *)param_2[1];
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
  return;
}



// FUNCTION 142d3ffa0 FUN_142d3ffa0 body=606 status=ok
// SIG undefined FUN_142d3ffa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d3ffa0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined8 local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if (((*(byte *)(param_1 + 0x778) != 3) && (lVar6 = *(longlong *)(param_1 + 0x808), lVar6 != 0)) &&
     (*(uint *)(lVar6 + 0x16c) = (uint)*(byte *)(param_1 + 0x778), 0 < *(int *)(lVar6 + 8))) {
    *(undefined1 *)(lVar6 + 0x3c) = 1;
  }
  local_88 = *param_2;
  if ((local_88 == 0) || (*(int *)(local_88 + 0x28) != 3)) {
    uStack_80 = (longlong *)param_2[1];
    plVar2 = (longlong *)(param_1 + 0x828);
    if (uStack_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_80 + 1) = (int)uStack_80[1] + 1;
      UNLOCK();
    }
    if (&local_88 != plVar2) {
      local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
      uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
      lVar6 = *plVar2;
      plVar8 = *(longlong **)(param_1 + 0x830);
      local_58 = (undefined4)local_88;
      uStack_54 = local_88._4_4_;
      uStack_50 = (undefined4)uStack_80;
      uStack_4c = uStack_80._4_4_;
      *(undefined4 *)plVar2 = (undefined4)local_88;
      *(undefined4 *)(param_1 + 0x82c) = local_88._4_4_;
      *(undefined4 *)(param_1 + 0x830) = (undefined4)uStack_80;
      *(undefined4 *)(param_1 + 0x834) = uStack_80._4_4_;
      local_88 = lVar6;
      uStack_80 = plVar8;
    }
    plVar2 = uStack_80;
    if (uStack_80 != (longlong *)0x0) {
      LOCK();
      plVar8 = uStack_80 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*uStack_80)(uStack_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*uStack_80 + 8))(uStack_80,1);
        }
      }
    }
    puVar3 = (undefined8 *)(param_1 + 0x808);
    plVar2 = *(longlong **)(param_1 + 0x810);
    puVar4 = (undefined8 *)(param_1 + 0x818);
    uVar7 = *puVar3;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    local_78 = uVar7;
    plStack_70 = plVar2;
    if (&local_78 != puVar4) {
      local_78 = *puVar4;
      plStack_70 = *(longlong **)(param_1 + 0x820);
      *puVar4 = uVar7;
      *(longlong **)(param_1 + 0x820) = plVar2;
      local_48 = uVar7;
      plStack_40 = plVar2;
    }
    plVar2 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar8 = plStack_70 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_70)();
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plStack_70 + 8))(plStack_70,1);
        }
      }
    }
    local_60 = (longlong *)0x0;
    if (puVar3 != &local_68) {
      *puVar3 = 0;
      local_68 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x810,&local_60);
      plVar2 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_60 + 1;
        lVar6 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
    }
    FUN_1423424e0(param_1);
    FUN_142d36bf0(param_1);
    plVar2 = (longlong *)param_2[1];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar2 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
  }
  else {
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
  }
  return;
}



// FUNCTION 142d40200 FUN_142d40200 body=611 status=ok
// SIG undefined FUN_142d40200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d40200(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *plStack_70;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (*param_2 != 0) {
    TSet<TTuple<unsigned_int,TTuple<unsigned_int,unsigned_int>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<unsigned_int,unsigned_int>,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0x60,*(undefined4 *)(*param_2 + 0x30));
  }
  iVar6 = (int)param_3;
  if ((((iVar6 < 0) || (param_3 < 0)) || (*(int *)(param_1 + 0x40) <= iVar6)) ||
     ((lVar7 = (longlong)iVar6 * 0x3b0 + *(longlong *)(param_1 + 0x38),
      *(int *)(lVar7 + 0x328) != iVar6 ||
      (*(int *)(lVar7 + 0x32c) != (int)((ulonglong)param_3 >> 0x20))))) {
    lVar7 = 0;
  }
  if (lVar7 == 0) {
    plVar2 = (longlong *)param_2[1];
    goto joined_r0x000142d40417;
  }
  local_58 = *param_2;
  local_50 = param_2[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  FUN_142d482f0(param_1,lVar7,&local_58);
  *(undefined1 *)(lVar7 + 0x3a0) = 0;
  cVar5 = FUN_142d4fe80(param_2);
  if (cVar5 == '\0') {
    if (*(char *)(lVar7 + 0x388) == '\0') {
      local_60 = (longlong *)0x0;
      if ((undefined8 *)(lVar7 + 0x390) != &local_68) {
        *(undefined8 *)(lVar7 + 0x390) = 0;
        local_68 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(lVar7 + 0x398,&local_60);
        plVar2 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_60 + 1;
          lVar4 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar2 = local_60;
            goto joined_r0x000142d403cd;
          }
        }
      }
      goto LAB_142d403df;
    }
  }
  else {
    plVar3 = (longlong *)param_2[1];
    plVar2 = (longlong *)(lVar7 + 0x390);
    lVar4 = *param_2;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_78 = lVar4;
    plStack_70 = plVar3;
    if (&local_78 != plVar2) {
      local_78 = *plVar2;
      plStack_70 = *(longlong **)(lVar7 + 0x398);
      *plVar2 = lVar4;
      *(longlong **)(lVar7 + 0x398) = plVar3;
      local_38 = lVar4;
      plStack_30 = plVar3;
    }
    plVar2 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_70 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar2 = plStack_70;
joined_r0x000142d403cd:
        if (iVar6 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
LAB_142d403df:
    local_48 = *param_2;
    local_40 = param_2[1];
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    FUN_140699060(lVar7 + 0x338,&local_48);
  }
  *(undefined4 *)(lVar7 + 0x330) = 0xffffffff;
  plVar2 = (longlong *)param_2[1];
joined_r0x000142d40417:
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar2 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return;
}



// FUNCTION 142d40470 FUN_142d40470 body=45 status=ok
// SIG undefined FUN_142d40470(void)

void FUN_142d40470(longlong *param_1)

{
  FUN_142343b00();
  if (param_1[4] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000142d40490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x3f8))(param_1);
    return;
  }
  return;
}



// FUNCTION 142d404a0 FUN_142d404a0 body=27 status=ok
// SIG undefined FUN_142d404a0(void)

void FUN_142d404a0(undefined8 param_1)

{
  FUN_1423937b0();
  FUN_142d36bf0(param_1);
  return;
}



// FUNCTION 142d404c0 FUN_142d404c0 body=145 status=ok
// SIG undefined FUN_142d404c0(void)

void FUN_142d404c0(longlong param_1)

{
  bool bVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_142343b00();
  lVar4 = *(longlong *)(param_1 + 0x118);
  if (lVar4 != 0) {
    lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142d40516;
  }
  lVar4 = 0;
LAB_142d40516:
  *(longlong *)(param_1 + 0x178) = lVar4;
  if (((*(uint *)(param_1 + 8) >> 4 & 1) == 0) && (*(longlong *)(param_1 + 0x118) != 0)) {
    uVar2 = FUN_142232850();
    FUN_14247c340(param_1 + 0x140,uVar2);
  }
  return;
}



// FUNCTION 142d40560 FUN_142d40560 body=27 status=ok
// SIG undefined FUN_142d40560(void)

void FUN_142d40560(undefined8 param_1)

{
  FUN_142d30fa0();
  FUN_142393f60(param_1);
  return;
}



// FUNCTION 142d40580 ClearGarbages body=31 status=ok
// SIG undefined ClearGarbages(void)

void UStaffSkills::ClearGarbages(longlong param_1)

{
  FUN_142344780();
  *(undefined8 *)(param_1 + 0x178) = 0;
  return;
}



// FUNCTION 142d405a0 FUN_142d405a0 body=76 status=ok
// SIG undefined FUN_142d405a0(void)

void FUN_142d405a0(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  uVar1 = FUN_142d3a820(&local_28);
  FUN_142d408e0(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 142d405f0 FUN_142d405f0 body=143 status=ok
// SIG undefined FUN_142d405f0(void)

void FUN_142d405f0(undefined4 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_38 = *param_4;
  local_30 = *(undefined4 *)(param_4 + 1);
  local_28 = *param_3;
  local_18 = *param_1;
  uStack_14 = param_1[1];
  uStack_10 = param_1[2];
  uStack_c = param_1[3];
  local_20 = *(undefined4 *)(param_3 + 1);
  uVar1 = FUN_142d3a820(&local_18);
  FUN_142d40a00(uVar1,param_2,&local_28,&local_38,param_5,param_6,param_7,param_8);
  return;
}



// FUNCTION 142d40680 FUN_142d40680 body=268 status=ok
// SIG undefined FUN_142d40680(void)

void FUN_142d40680(undefined4 *param_1,undefined4 param_2,undefined1 param_3,longlong *param_4,
                  undefined8 param_5,longlong param_6,longlong param_7)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  local_28 = *param_1;
  uStack_24 = param_1[1];
  iStack_20 = param_1[2];
  uStack_1c = param_1[3];
  lVar1 = FUN_142d3a820(&local_28);
  if (((lVar1 != 0) && (param_4 != (longlong *)0x0)) &&
     (lVar2 = (**(code **)(*param_4 + 0x148))(param_4), lVar2 != 0)) {
    uVar3 = (**(code **)(*param_4 + 0x148))(param_4);
    UWorld::GetPlayerControllerIterator(uVar3,&local_28);
    for (; (-1 < iStack_20 && (iStack_20 < (int)((longlong *)CONCAT44(uStack_24,local_28))[1]));
        iStack_20 = iStack_20 + 1) {
      lVar2 = FWeakObjectPtr::Get(*(longlong *)CONCAT44(uStack_24,local_28) +
                                  (longlong)iStack_20 * 8);
      if (lVar2 != 0) {
        lVar4 = param_7;
        if (lVar2 != param_6) {
          lVar4 = lVar1;
        }
        FUN_142d408e0(lVar4,lVar2,param_2,param_3,param_5);
      }
    }
  }
  return;
}



// FUNCTION 142d40790 FUN_142d40790 body=322 status=ok
// SIG undefined FUN_142d40790(void)

void FUN_142d40790(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4,
                  undefined8 param_5,longlong *param_6,undefined8 param_7,undefined8 param_8)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  local_28 = *param_1;
  uStack_24 = param_1[1];
  iStack_20 = param_1[2];
  uStack_1c = param_1[3];
  lVar1 = FUN_142d3a820(&local_28);
  if (((lVar1 != 0) && (param_6 != (longlong *)0x0)) &&
     (lVar2 = (**(code **)(*param_6 + 0x148))(param_6), lVar2 != 0)) {
    uVar3 = (**(code **)(*param_6 + 0x148))(param_6);
    UWorld::GetPlayerControllerIterator(uVar3,&local_28);
    for (; (-1 < iStack_20 && (iStack_20 < (int)((longlong *)CONCAT44(uStack_24,local_28))[1]));
        iStack_20 = iStack_20 + 1) {
      lVar2 = FWeakObjectPtr::Get(*(longlong *)CONCAT44(uStack_24,local_28) +
                                  (longlong)iStack_20 * 8);
      if (lVar2 != 0) {
        local_48 = *param_3;
        local_40 = *(undefined4 *)(param_3 + 1);
        local_30 = *(undefined4 *)(param_2 + 1);
        local_38 = *param_2;
        FUN_142d40a00(lVar1,lVar2,&local_38,&local_48,param_4,param_6,param_7,param_8);
      }
    }
  }
  return;
}



// FUNCTION 142d408e0 FUN_142d408e0 body=288 status=ok
// SIG undefined FUN_142d408e0(void)

/* WARNING: Removing unreachable block (ram,0x000142d409ac) */

void FUN_142d408e0(longlong *param_1,longlong *param_2,undefined4 param_3,undefined1 param_4,
                  longlong *param_5)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1 != (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
    if (param_5 != param_2) {
      plVar4 = param_5;
    }
    if (param_2 != (longlong *)0x0) {
      lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
      if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        cVar2 = (**(code **)(*param_2 + 0x768))(param_2);
        if (cVar2 == '\0') {
          FUN_142e56530(param_2,param_1,param_3,param_4,plVar4);
        }
        else {
          FUN_142dd5bc0();
        }
      }
      else {
        (**(code **)(*param_1 + 0x280))(param_1,param_2,param_3,param_4,plVar4,&DAT_1468b5d90);
      }
    }
  }
  return;
}



// FUNCTION 142d40a00 FUN_142d40a00 body=440 status=ok
// SIG undefined FUN_142d40a00(void)

void FUN_142d40a00(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 param_5,longlong *param_6,longlong *param_7,longlong *param_8)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  longlong local_28 [2];
  
  plVar4 = (longlong *)0x0;
  if (param_6 != param_2) {
    plVar4 = param_6;
  }
  if (param_2 != (longlong *)0x0) {
    lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((param_2 == param_7) && (param_1 = param_8, param_8 == (longlong *)0x0)) {
        return;
      }
      cVar2 = (**(code **)(*param_2 + 0x768))(param_2);
      local_38 = *param_4;
      local_30 = *(undefined4 *)(param_4 + 1);
      if (cVar2 == '\0') {
        local_40 = *(undefined4 *)(param_3 + 1);
        local_48 = *param_3;
        FUN_142e564b0(param_2,param_1,&local_48,param_5,plVar4,&local_38);
        return;
      }
      local_28[0] = 0;
      local_28[1] = 0;
      local_48 = local_38;
      local_40 = local_30;
      local_38 = *param_3;
      local_30 = *(undefined4 *)(param_3 + 1);
      FUN_142dd58a0(param_2,param_1,&local_38,param_5,plVar4,&local_48,local_28);
      if (local_28[0] == 0) {
        return;
      }
      FMemory::Free();
      return;
    }
  }
  if ((param_1 != (longlong *)0x0) && (param_2 != (longlong *)0x0)) {
    if (param_2 == param_7) {
      if (param_8 == (longlong *)0x0) {
        return;
      }
      local_30 = *(undefined4 *)(param_4 + 1);
      lVar3 = *param_8;
    }
    else {
      local_30 = *(undefined4 *)(param_4 + 1);
      lVar3 = *param_1;
      param_8 = param_1;
    }
    local_38 = *param_4;
    (**(code **)(lVar3 + 0x288))(param_8,param_2,param_3,param_5,plVar4,&local_38);
  }
  return;
}



// FUNCTION 142d40bc0 FUN_142d40bc0 body=243 status=ok
// SIG undefined FUN_142d40bc0(void)

void FUN_142d40bc0(longlong param_1,undefined4 param_2,undefined1 param_3,longlong *param_4,
                  undefined8 param_5,longlong param_6,longlong param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *local_28;
  int local_20;
  
  if (((param_1 != 0) && (param_4 != (longlong *)0x0)) &&
     (lVar1 = (**(code **)(*param_4 + 0x148))(param_4), lVar1 != 0)) {
    uVar2 = (**(code **)(*param_4 + 0x148))(param_4);
    UWorld::GetPlayerControllerIterator(uVar2,&local_28);
    for (; (-1 < local_20 && (local_20 < (int)local_28[1])); local_20 = local_20 + 1) {
      lVar1 = FWeakObjectPtr::Get(*local_28 + (longlong)local_20 * 8);
      if (lVar1 != 0) {
        lVar3 = param_7;
        if (lVar1 != param_6) {
          lVar3 = param_1;
        }
        FUN_142d408e0(lVar3,lVar1,param_2,param_3,param_5);
      }
    }
  }
  return;
}



// FUNCTION 142d40cc0 FUN_142d40cc0 body=312 status=ok
// SIG undefined FUN_142d40cc0(void)

void FUN_142d40cc0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4,
                  longlong *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  longlong *local_28;
  int local_20;
  
  if (((param_1 != 0) && (param_5 != (longlong *)0x0)) &&
     (lVar1 = (**(code **)(*param_5 + 0x148))(param_5), lVar1 != 0)) {
    uVar2 = (**(code **)(*param_5 + 0x148))(param_5);
    UWorld::GetPlayerControllerIterator(uVar2,&local_28);
    for (; (-1 < local_20 && (local_20 < (int)local_28[1])); local_20 = local_20 + 1) {
      lVar1 = FWeakObjectPtr::Get(*local_28 + (longlong)local_20 * 8);
      if (lVar1 != 0) {
        local_48 = *param_3;
        local_40 = *(undefined4 *)(param_3 + 1);
        local_30 = *(undefined4 *)(param_2 + 1);
        local_38 = *param_2;
        FUN_142d40a00(param_1,lVar1,&local_38,&local_48,param_4,param_6,param_7,param_8);
      }
    }
  }
  return;
}



// FUNCTION 142d40e00 FUN_142d40e00 body=101 status=ok
// SIG undefined FUN_142d40e00(void)

void FUN_142d40e00(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_2;
  if ((((-1 < iVar1) && (-1 < param_2)) && (iVar1 < *(int *)(param_1 + 0x40))) &&
     (((lVar2 = (longlong)iVar1 * 0x3b0 + *(longlong *)(param_1 + 0x38),
       *(int *)(lVar2 + 0x328) == iVar1 &&
       (*(int *)(lVar2 + 0x32c) == (int)((ulonglong)param_2 >> 0x20))) && (lVar2 != 0)))) {
    if (*(longlong *)(param_1 + 0x48) != 0) {
      *(undefined4 *)(lVar2 + 0x3ac) = *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x8c8);
      return;
    }
    *(undefined4 *)(lVar2 + 0x3ac) = 0;
  }
  return;
}



// FUNCTION 142d40e70 FUN_142d40e70 body=974 status=ok
// SIG undefined FUN_142d40e70(void)

void FUN_142d40e70(longlong param_1,longlong *param_2,float param_3,char param_4,longlong *param_5,
                  undefined8 param_6)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  longlong *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  float fVar10;
  undefined8 in_stack_ffffffffffffff58;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  uint local_80;
  undefined8 local_7c;
  uint local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if ((param_2 != (longlong *)0x0) && ((*(byte *)(param_2 + 200) & 2) == 0)) {
    lVar2 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    plVar7 = (longlong *)0x0;
    plVar4 = param_2;
    if (!bVar1) {
      plVar4 = plVar7;
    }
    if (param_3 < 0.0) {
      param_3 = 1.0;
    }
    if ((param_4 == '\0') && (*(char *)(param_1 + 0x268) == '\0')) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
    fVar10 = 1.0;
    if ((*(char *)(param_1 + 0x78) != '\0') || (fVar10 = param_3, 0.0 < param_3)) {
      FUN_142d3aaa0(param_1,&local_88,fVar10);
      in_stack_ffffffffffffff58 = *(undefined8 *)(param_1 + 0x18);
      (**(code **)(*param_2 + 0xf00))(param_2,&local_88,uVar6,0,in_stack_ffffffffffffff58);
      if (local_80 != 0) {
        lVar2 = local_88 + 8;
        uVar8 = local_80;
        do {
          FRichCurve::~FRichCurve(lVar2);
          lVar2 = lVar2 + 0x80;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (local_88 != 0) {
        FMemory::Free();
      }
    }
    uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
    if ((param_2[0xa5] != 0) && (0.0 < param_3)) {
      plVar3 = param_2;
      if (param_5 != (longlong *)0x0) {
        plVar3 = param_5;
      }
      fVar10 = (float)FUN_142c98860(param_1 + 0x128,plVar3);
      puVar11 = (undefined8 *)CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff58 >> 8),uVar6);
      FUN_142d41240(param_1,*(undefined8 *)(param_1 + 0x80),param_2,fVar10 * param_3,puVar11);
      puVar5 = *(undefined8 **)(param_1 + 0x160);
      puVar9 = puVar5 + (longlong)*(int *)(param_1 + 0x168) * 0x2e;
      for (; uVar12 = (undefined4)((ulonglong)puVar11 >> 0x20), puVar5 != puVar9;
          puVar5 = puVar5 + 0x2e) {
        puVar11 = &local_98;
        local_98 = DAT_1468b5da0;
        local_90 = DAT_1468b5da8;
        FUN_1427116d0(param_2,*puVar5,fVar10 * param_3,0,puVar11,uVar6);
      }
    }
    if (((*(longlong *)(param_1 + 0x1d8) != 0) && (plVar4 != (longlong *)0x0)) &&
       (plVar4[0x12f] != 0)) {
      local_7c = *(undefined8 *)(param_1 + 0x1e4);
      local_74 = *(uint *)(param_1 + 0x1ec);
      local_70 = CONCAT31(local_70._1_3_,*(undefined1 *)(param_1 + 0x1f0));
      uStack_60 = 0;
      local_68 = *(undefined8 *)(param_1 + 0x1f8);
      local_80 = CONCAT31((int3)(local_80 >> 8),
                          (((*(byte *)(param_1 + 499) & 1) << 2 | *(byte *)(param_1 + 0x1f2) & 1) *
                           '\x02' | *(byte *)(param_1 + 0x1f1) & 1) << 2 |
                          *(byte *)(param_1 + 0x1e0) & 1) & 0xfffffeff | 0x42;
      local_88 = *(longlong *)(param_1 + 0x1d8);
      FUN_142db7ff0(plVar4[0x12f],&local_88);
    }
    if (*(char *)(param_1 + 0x170) == '\x01') {
      if (plVar4 != (longlong *)0x0) {
        plVar7 = (longlong *)plVar4[0x126];
      }
      if (plVar7 != (longlong *)0x0) {
        local_88 = CONCAT35(local_88._5_3_,0x3dcccccd);
        local_80 = 0x40000000;
        local_68 = 0;
        uStack_60 = 0;
        local_7c = 0x3dcccccd00000002;
        local_74 = local_74 & 0xffffff00;
        local_70 = 0x40000000;
        local_6c = 2;
        local_58 = 0;
        FUN_142d38e10(param_1,&local_88,plVar4,param_3,param_6);
        uVar12 = (undefined4)((ulonglong)param_6 >> 0x20);
        FUN_142cb6770(plVar7,&local_88);
      }
    }
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(param_1 + 0x18);
      (**(code **)(*plVar4 + 0x1010))(plVar4,param_1 + 0x208);
    }
    if (*(char *)(param_1 + 0x3c0) != '\0') {
      local_88 = *(longlong *)(param_1 + 0x3d4);
      local_80 = *(undefined4 *)(param_1 + 0x3dc);
      local_90 = *(undefined4 *)(param_1 + 0x3cc);
      local_98 = CONCAT44(*(undefined4 *)(param_1 + 0x3c8),(undefined4)local_98);
      local_98 = CONCAT71(local_98._1_7_,*(undefined1 *)(param_1 + 0x3c4));
      FUN_1429e0c40(param_2,&local_98,*(undefined1 *)(param_1 + 0x3d0),&local_88,
                    CONCAT44(uVar12,*(undefined4 *)(param_1 + 0x3e0)));
    }
  }
  return;
}



// FUNCTION 142d41240 FUN_142d41240 body=71 status=ok
// SIG undefined FUN_142d41240(void)

void FUN_142d41240(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                  undefined1 param_5)

{
  undefined8 local_18;
  undefined4 local_10;
  
  if (param_3 != 0) {
    local_10 = DAT_1468b5da8;
    local_18 = DAT_1468b5da0;
    FUN_1427116d0(param_3,param_2,param_4,0,&local_18,param_5);
  }
  return;
}



// FUNCTION 142d41290 FUN_142d41290 body=1386 status=ok
// SIG undefined FUN_142d41290(void)

ulonglong FUN_142d41290(longlong *param_1,longlong *param_2,longlong param_3,ulonglong *param_4)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined8 in_stack_fffffffffffffe98;
  ulonglong *puVar19;
  uint local_158;
  float fStack_154;
  float local_150;
  ulonglong local_148;
  float local_140;
  uint local_138;
  float fStack_134;
  float local_130;
  ulonglong local_128;
  ulonglong local_120;
  ulonglong local_118;
  float local_110;
  undefined4 local_10c;
  ulonglong local_108;
  float local_100;
  undefined4 local_fc;
  ulonglong local_f8;
  undefined1 local_f0 [184];
  
  uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
  if ((*(byte *)(param_3 + 0x10) & 2) != 0) {
    if (*(char *)((longlong)param_4 + 0xc) == '\0') {
      return 0;
    }
    *(undefined1 *)((longlong)param_4 + 0xc) = 0;
    return 0;
  }
  plVar1 = (longlong *)*param_1;
  uVar12 = 0;
  uVar4 = uVar12;
  if (plVar1 != (longlong *)0x0) {
    uVar4 = (**(code **)(*plVar1 + 0x148))();
  }
  if (param_2 != (longlong *)0x0) {
    lVar11 = param_2[0x1f];
    local_120 = uVar4;
    if (lVar11 == 0) {
      (**(code **)(*param_2 + 0x368))(param_2);
      lVar11 = param_2[0x1f];
      if (lVar11 == 0) goto LAB_142d417d3;
    }
    if (uVar4 != 0) {
      cVar3 = FWeakObjectPtr::IsValid(param_3 + 0x34);
      if (cVar3 == '\0') {
        lVar5 = FUN_142bbbf70(lVar11);
      }
      else {
        lVar5 = FWeakObjectPtr::Get(param_3 + 0x34);
      }
      local_128 = 0;
      if ((((lVar5 != 0) || (*(longlong *)(lVar11 + 0x188) != 0)) ||
          (*(longlong *)(lVar11 + 0x198) != 0)) &&
         (lVar6 = FBufferReaderBase::Tell(lVar11), lVar6 != 0)) {
        FUN_142d27cb0(lVar11,&local_f8,param_3);
        cVar3 = FWeakObjectPtr::IsValid(param_3 + 0x2c);
        plVar7 = plVar1;
        if (cVar3 != '\0') {
          plVar7 = (longlong *)FWeakObjectPtr::Get(param_3 + 0x2c);
        }
        local_138 = (uint)plVar7;
        fStack_134 = (float)((ulonglong)plVar7 >> 0x20);
        if (*(char *)((longlong)param_4 + 0xc) == '\0') {
          lVar6 = param_3;
          FUN_142d1c090(lVar11,&local_148,&local_118,param_1,param_3);
          uVar15 = (undefined4)((ulonglong)lVar6 >> 0x20);
        }
        else {
          local_148 = *param_4;
          local_140 = *(float *)(param_4 + 1);
        }
        if (*(char *)(param_3 + 0x164) == '\0') {
          plVar8 = (longlong *)FBufferReaderBase::Tell(lVar11);
          uVar10 = (**(code **)(*plVar8 + 0x298))(plVar8,plVar1);
          fVar17 = (float)uVar10;
          uVar18 = (undefined4)((ulonglong)uVar10 >> 0x20);
        }
        else {
          fVar17 = *(float *)(param_3 + 0x160);
          uVar18 = 0;
        }
        if ((*(byte *)(param_3 + 0x10) & 8) != 0) {
          fVar14 = (float)FUN_142d3bb80(param_1[1]);
          fVar17 = fVar17 * fVar14;
        }
        if (lVar5 == 0) {
          if (DAT_146b33f38 == 0) {
            FUN_142d7ebe0();
          }
          uVar4 = uVar12;
          if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
            uVar4 = FUN_142d819d0(*(longlong *)(DAT_146b33f38 + 0x58),CONCAT44(uVar18,fVar17));
          }
          if (*(longlong *)(lVar11 + 0x188) != 0) {
            local_150 = local_140;
            uVar10 = *(undefined8 *)(lVar11 + 400);
            local_158 = (uint)local_148;
            fStack_154 = (float)(local_148 >> 0x20);
            FUN_142d431f0(*(longlong *)(lVar11 + 0x188),0,fVar17,&local_158,uVar10,
                          CONCAT44(fStack_134,local_138));
            uVar15 = (undefined4)((ulonglong)uVar10 >> 0x20);
          }
          if (*(longlong *)(lVar11 + 0x198) != 0) {
            local_158 = (uint)local_148;
            fStack_154 = (float)(local_148 >> 0x20);
            local_150 = local_140;
            plVar7 = plVar1;
            FUN_142d41cb0(*(longlong *)(lVar11 + 0x198),0,fVar17,&local_158,plVar1,0);
            uVar15 = (undefined4)((ulonglong)plVar7 >> 0x20);
          }
          if (*(longlong *)(lVar11 + 0x1a0) != 0) {
            local_110 = fVar17;
            if (*(char *)(lVar11 + 0x1b0) == '\0') {
              local_110 = 0.0;
            }
            local_118 = *(ulonglong *)(lVar11 + 0x1a8);
            local_10c = local_fc;
            local_158 = (uint)local_148;
            fStack_154 = (float)(local_148 >> 0x20);
            local_150 = local_140;
            local_108 = local_118;
            uVar10 = FUN_140729f20(local_f0,param_3 + 0x60);
            puVar19 = &local_118;
            FUN_142d424e0(*(undefined8 *)(lVar11 + 0x1a0),CONCAT44(uVar18,fVar17),&local_158,plVar1,
                          puVar19,uVar10);
            uVar15 = (undefined4)((ulonglong)puVar19 >> 0x20);
          }
          FUN_142d43400(0,uVar4,local_120,&local_148,CONCAT44(uVar15,fVar17));
        }
        else {
          local_158 = (uint)local_148;
          fStack_154 = (float)(local_148 >> 0x20);
          local_150 = local_140;
          uVar4 = uVar12;
          if (local_f8 != 0) {
            uVar9 = FUN_142e49950();
            for (uVar13 = local_f8;
                (uVar4 = uVar12, uVar13 != 0 && (uVar4 = local_f8, uVar13 != uVar9));
                uVar13 = *(ulonglong *)(uVar13 + 0x30)) {
            }
          }
          local_128 = FUN_142d41800(lVar5,CONCAT44(uVar18,fVar17),param_3 + 0x60,&local_158,plVar7,
                                    uVar4);
        }
        uVar4 = local_120;
        plVar7 = *(longlong **)(lVar11 + 0x168);
        uVar13 = (longlong)*(int *)(lVar11 + 0x170) & 0x1fffffffffffffff;
        if (plVar7 + *(int *)(lVar11 + 0x170) < plVar7) {
          uVar13 = uVar12;
        }
        if (uVar13 != 0) {
          do {
            lVar6 = *plVar7;
            if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0x30) & 3) != 0)) {
              local_158 = local_158 & 0xffffff00;
              fStack_154 = 0.0;
              local_150 = 0.0;
              if (lVar5 == 0) {
                local_100 = 0.0;
                local_108 = (ulonglong)local_158;
              }
              else {
                uVar2 = local_138 >> 8;
                local_138 = local_138 & 0xffffff00;
                fVar16 = fVar17 * *(float *)(lVar5 + 0x98);
                fStack_134 = 0.0;
                local_130 = 0.0;
                fVar14 = fVar17 * *(float *)(lVar5 + 0x9c);
                if ((fVar16 != 0.0) && (fVar14 != 0.0)) {
                  local_138 = CONCAT31((int3)uVar2,1);
                  fStack_134 = fVar16;
                  local_130 = fVar14;
                }
                local_108 = CONCAT44(fStack_134,local_138);
                local_158 = local_138;
                fStack_154 = fStack_134;
                local_100 = local_130;
              }
              local_118 = local_148;
              local_110 = local_140;
              FUN_142d42350(lVar6,&local_118,&local_108,uVar4);
            }
            plVar7 = plVar7 + 1;
            uVar12 = uVar12 + 1;
          } while (uVar12 != uVar13);
        }
        plVar7 = (longlong *)FUN_142d5ecc0(local_120);
        uVar12 = local_128;
        if ((plVar7 != (longlong *)0x0) &&
           (plVar7 = (longlong *)(**(code **)(*plVar7 + 0x2a0))(plVar7), uVar12 = local_128,
           plVar7 != (longlong *)0x0)) {
          fVar14 = 1.0;
          if (DAT_146b33f38 == 0) {
            FUN_142d7ebe0();
          }
          if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
            fVar14 = *(float *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0xd8);
          }
          lVar5 = *plVar7;
          uVar15 = FUN_142d27fe0(lVar11,param_3,plVar1);
          (**(code **)(lVar5 + 0x6e8))(plVar7,&local_148,uVar15,fVar14 * fVar17);
          uVar12 = local_128;
        }
      }
      if (*(char *)((longlong)param_4 + 0xc) != '\0') {
        *(undefined1 *)((longlong)param_4 + 0xc) = 0;
        return uVar12;
      }
      return uVar12;
    }
  }
LAB_142d417d3:
  if (*(char *)((longlong)param_4 + 0xc) != '\0') {
    *(undefined1 *)((longlong)param_4 + 0xc) = 0;
  }
  return 0;
}



// FUNCTION 142d41800 FUN_142d41800 body=1037 status=ok
// SIG undefined FUN_142d41800(void)

undefined8
FUN_142d41800(longlong param_1,ulonglong param_2,undefined8 param_3,float *param_4,longlong *param_5
             ,undefined8 param_6)

{
  undefined1 uVar1;
  bool bVar2;
  uint uVar3;
  char cVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  float fVar13;
  float fVar14;
  float local_108;
  float fStack_104;
  float local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  float local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined1 local_e0 [168];
  
  fVar13 = (float)param_2;
  if (param_1 == 0) {
    return 0;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 0x58) == 0) {
    local_e8 = 0;
  }
  else {
    local_e8 = FUN_142d819d0(*(longlong *)(DAT_146b33f38 + 0x58),param_2);
  }
  puVar5 = (undefined4 *)FUN_142d480a0(param_1,param_2,param_6);
  if ((*(byte *)(puVar5 + 0xc) & 4) == 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x58);
  }
  else {
    uVar1 = *(undefined1 *)(puVar5 + 0x10);
  }
  if (param_5 == (longlong *)0x0) {
LAB_142d418e3:
    plVar11 = (longlong *)0x0;
    if (param_5 != (longlong *)0x0) {
      lVar6 = FUN_1428e7a40();
      if ((*(int *)(param_5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        plVar11 = (longlong *)param_5[0x23];
      }
    }
  }
  else {
    lVar6 = FUN_1428dfc70();
    if ((*(int *)(param_5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    plVar11 = param_5;
    if (!bVar2) goto LAB_142d418e3;
  }
  if (plVar11 == (longlong *)0x0) {
    if (param_5 != (longlong *)0x0) {
      lVar6 = FUN_142a2f930();
      if ((*(int *)(param_5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      plVar7 = param_5;
      if (bVar2) goto LAB_142d41980;
    }
    plVar7 = (longlong *)0x0;
  }
  else {
    plVar7 = (longlong *)(**(code **)(*plVar11 + 0x148))(plVar11);
  }
LAB_142d41980:
  if (((DAT_1468b5d90 == *param_4) && (DAT_1468b5d94 == param_4[1])) &&
     (DAT_1468b5d98 == param_4[2])) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((bVar2) && (plVar11 != (longlong *)0x0)) {
    lVar6 = plVar11[0x2d];
    if (lVar6 == 0) {
      local_108 = DAT_1468b5d90;
      fStack_104 = DAT_1468b5d94;
      local_100 = DAT_1468b5d98;
    }
    else {
      local_108 = *(float *)(lVar6 + 0x220);
      fStack_104 = *(float *)(lVar6 + 0x224);
      local_100 = *(float *)(lVar6 + 0x228);
    }
    *(ulonglong *)param_4 = CONCAT44(fStack_104,local_108);
    param_4[2] = local_100;
  }
  puVar12 = (undefined4 *)0x0;
  if ((*(byte *)(puVar5 + 0xc) & 2) == 0) {
    if (*(char *)(param_1 + 0x48) != '\0') {
      puVar12 = (undefined4 *)(param_1 + 0x4c);
    }
  }
  else {
    puVar12 = puVar5 + 0xd;
  }
  local_100 = param_4[2];
  local_108 = (float)*(undefined8 *)param_4;
  fStack_104 = (float)((ulonglong)*(undefined8 *)param_4 >> 0x20);
  if (((*(byte *)(puVar5 + 0xc) & 1) == 0) || (cVar4 = FUN_142d867f0(param_5), cVar4 == '\0')) {
    uVar8 = *(undefined8 *)(puVar5 + 4);
  }
  else {
    uVar8 = *(undefined8 *)(puVar5 + 6);
  }
  uVar8 = FUN_142d431f0(uVar8,*puVar5,fVar13,&local_108,*(undefined8 *)(puVar5 + 0x12),param_5);
  local_100 = param_4[2];
  plVar9 = plVar7;
  if (plVar11 != (longlong *)0x0) {
    plVar9 = plVar11;
  }
  local_108 = (float)*(undefined8 *)param_4;
  fStack_104 = (float)((ulonglong)*(undefined8 *)param_4 >> 0x20);
  FUN_142d41cb0(*(undefined8 *)(puVar5 + 8),uVar1,fVar13,&local_108,plVar9,param_1);
  uVar3 = (uint)local_108 >> 8;
  local_108 = (float)((uint)local_108 & 0xffffff00);
  fVar14 = fVar13 * *(float *)(param_1 + 0x98);
  fStack_104 = 0.0;
  local_100 = 0.0;
  fVar13 = fVar13 * *(float *)(param_1 + 0x9c);
  if ((fVar14 != 0.0) && (fVar13 != 0.0)) {
    local_108 = (float)CONCAT31((int3)uVar3,1);
    fStack_104 = fVar14;
    local_100 = fVar13;
  }
  local_f8 = CONCAT44(fStack_104,local_108);
  local_f0 = local_100;
  local_100 = param_4[2];
  local_108 = (float)*(undefined8 *)param_4;
  fStack_104 = (float)((ulonglong)*(undefined8 *)param_4 >> 0x20);
  FUN_142d42350(*(undefined8 *)(puVar5 + 2),&local_108,&local_f8,plVar7);
  local_f0 = param_4[2];
  local_108 = 0.0;
  fStack_104 = 0.0;
  local_f8 = *(undefined8 *)param_4;
  local_fc = local_ec;
  local_100 = 0.0;
  uVar10 = FUN_140729f20(local_e0,param_3);
  FUN_142d424e0(*(undefined8 *)(puVar5 + 10),param_2,&local_f8,plVar11,&local_108,uVar10);
  FUN_142d43400(puVar12,local_e8,plVar7,param_4,param_2 & 0xffffffff);
  return uVar8;
}



// FUNCTION 142d41c10 FUN_142d41c10 body=152 status=ok
// SIG undefined FUN_142d41c10(void)

void FUN_142d41c10(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [12];
  undefined4 local_9c;
  
  _guard_xfg_dispatch_icall_nop(local_a8,0,0x90);
  local_b0 = *(undefined4 *)(param_3 + 1);
  local_b8 = *param_3;
  local_9c = 0x3f800000;
  FUN_142d41800(param_1,param_2,local_a8,&local_b8,param_4,param_5);
  return;
}



// FUNCTION 142d41cb0 FUN_142d41cb0 body=1689 status=ok
// SIG undefined FUN_142d41cb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d41cb0(longlong param_1,char param_2,undefined4 param_3,undefined1 (*param_4) [12],
                  longlong *param_5,longlong param_6)

{
  undefined1 auVar1 [16];
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined1 auStack_278 [32];
  undefined4 local_258;
  longlong *local_250;
  undefined *local_248;
  char local_238;
  longlong local_230;
  longlong local_228;
  float local_220;
  longlong local_218;
  undefined8 local_210;
  longlong local_208;
  longlong local_200;
  float local_1f8;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined1 local_1d8 [32];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [12];
  float local_17c;
  float local_174;
  float local_170;
  float local_16c;
  undefined1 local_124 [8];
  undefined1 local_11c [36];
  longlong local_f8 [2];
  undefined4 local_e8;
  undefined2 local_e4;
  undefined1 local_e2;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined4 local_d8;
  undefined2 local_d4;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_90;
  undefined8 local_88;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  local_208 = param_1;
  if (param_5 != (longlong *)0x0) {
    lVar6 = FUN_1428dfc70();
    if ((*(int *)(param_5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      plVar7 = (longlong *)(**(code **)(*param_5 + 0x148))(param_5);
      plVar15 = param_5;
      goto LAB_142d41d96;
    }
  }
  plVar15 = (longlong *)0x0;
  if (param_5 != (longlong *)0x0) {
    lVar6 = FUN_142a2f930();
    if ((*(int *)(param_5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    plVar7 = param_5;
    if (bVar2) goto LAB_142d41d96;
  }
  plVar7 = (longlong *)0x0;
LAB_142d41d96:
  if ((DAT_1468536c6 != '\0') || (lVar6 = DAT_1468536c8, DAT_1468536c5 == '\0')) {
    lVar6 = 0;
  }
  if (((plVar7 != (longlong *)0x0) && (lVar6 != 0)) &&
     ((param_6 == 0 || (cVar3 = FUN_142d360a0(param_6,plVar15,param_4), cVar3 == '\0')))) {
    uVar8 = 0;
    if (param_2 != '\0') {
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
        uVar8 = FUN_142d82030(*(longlong *)(DAT_146b33f38 + 0x58),param_2);
      }
    }
    local_220 = *(float *)(*param_4 + 8);
    local_228 = *(longlong *)*param_4;
    local_258 = param_3;
    local_238 = FUN_14059f060(param_5,local_208,&local_228,0x3f800000);
    local_220 = *(float *)(*param_4 + 8);
    local_228 = *(longlong *)*param_4;
    local_258 = param_3;
    cVar3 = FUN_14059f060(param_5,uVar8,&local_228,0x3f800000);
    if (((local_238 != '\0') || (cVar3 != '\0')) &&
       (uVar4 = FUN_14059ce50(lVar6 + 8,&local_230,plVar7), local_230 != 0)) {
      if (plVar15 == (longlong *)0x0) {
        plVar12 = &local_218;
        local_218 = DAT_1468b5da0;
        local_210 = CONCAT44(local_210._4_4_,DAT_1468b5da8);
      }
      else {
        lVar6 = plVar15[0x2d];
        if (lVar6 == 0) {
          uVar4 = (undefined4)DAT_1468b5da0;
          uVar17 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
          local_220 = DAT_1468b5da8;
        }
        else {
          local_1e8 = *(float *)(lVar6 + 0x210);
          fStack_1e4 = *(float *)(lVar6 + 0x214);
          fStack_1e0 = *(float *)(lVar6 + 0x218);
          fStack_1dc = *(float *)(lVar6 + 0x21c);
          auVar1._4_4_ = -(uint)(*(float *)(lVar6 + 0x254) != fStack_1e4);
          auVar1._0_4_ = -(uint)(*(float *)(lVar6 + 0x250) != local_1e8);
          auVar1._8_4_ = -(uint)(*(float *)(lVar6 + 600) != fStack_1e0);
          auVar1._12_4_ = -(uint)(*(float *)(lVar6 + 0x25c) != fStack_1dc);
          iVar5 = movmskps(uVar4,auVar1);
          if (iVar5 != 0) {
            *(float *)(lVar6 + 0x250) = local_1e8;
            *(float *)(lVar6 + 0x254) = fStack_1e4;
            *(float *)(lVar6 + 600) = fStack_1e0;
            *(float *)(lVar6 + 0x25c) = fStack_1dc;
            puVar9 = (undefined8 *)FQuat::Rotator(&local_1e8,&local_228);
            *(undefined8 *)(lVar6 + 0x260) = *puVar9;
            *(undefined4 *)(lVar6 + 0x268) = *(undefined4 *)(puVar9 + 1);
          }
          uVar4 = (undefined4)*(undefined8 *)(lVar6 + 0x260);
          uVar17 = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x260) >> 0x20);
          local_220 = *(float *)(lVar6 + 0x268);
        }
        plVar12 = &local_200;
        local_228 = CONCAT44(uVar17,uVar4);
        local_200 = local_228;
        local_1f8 = local_220;
      }
      FRotator::Quaternion(plVar12,&local_1e8);
      local_1b8 = CONCAT44(fStack_1e4,local_1e8);
      uStack_1b0 = CONCAT44(fStack_1dc,fStack_1e0);
      local_1a8._12_4_ = 0;
      local_1a8._0_12_ = *param_4;
      local_198._4_4_ = param_3;
      local_198._0_4_ = param_3;
      local_198._8_4_ = param_3;
      local_198._12_4_ = 0;
      uVar10 = FUN_14058f8f0(local_1d8,&local_230);
      FUN_1405a9d00(uVar10,&local_1b8);
      uVar10 = FUN_14058f880(&local_228);
      FUN_14059e7e0(uVar10);
      lVar6 = local_208;
      if ((local_208 != 0) && ((*(uint *)(local_208 + 0x60) & 0x100) != 0)) {
        local_e8 = 0x10000;
        local_f8[1] = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_90 = 0;
        local_88 = 0;
        local_e0 = 0;
        local_208 = 0;
        local_f8[0] = 0;
        local_e4 = 0;
        local_d4 = 0x101;
        local_dc = 0;
        local_e2 = 0;
        local_d8 = 0;
        if (plVar15 != (longlong *)0x0) {
          FCollisionQueryParams::AddIgnoredActor(local_f8);
        }
        local_e4 = CONCAT11(local_e4._1_1_,1);
        local_e8._0_2_ = (ushort)(byte)local_e8;
        _guard_xfg_dispatch_icall_nop(local_188,0,0x90);
        local_228 = *(longlong *)*param_4;
        local_248 = &DAT_146aefe68;
        local_250 = local_f8;
        local_220 = *(float *)(*param_4 + 8) - 100.0;
        local_17c = 1.0;
        local_258 = 3;
        UWorld::LineTraceSingleByChannel(plVar7,local_188,param_4);
        lVar11 = FWeakObjectPtr::Get(local_11c);
        if ((lVar11 != 0) && (local_17c < 1.0)) {
          if ((local_174 == 0.0) && ((local_170 == 0.0 && (local_16c == 0.0)))) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if ((!bVar2) && (lVar11 = FWeakObjectPtr::Get(local_124), lVar11 != 0)) {
            uVar10 = FUN_142db9220(*(undefined1 *)(lVar11 + 0x50));
            FUN_1405aaf10(local_230,uVar10);
          }
        }
        if (local_90 != 0) {
          FMemory::Free();
        }
        if (local_b0 != 0) {
          FMemory::Free();
        }
      }
      *(undefined1 *)(local_230 + 0x62) = 3;
      lVar11 = FUN_1405c6c00();
      uVar13 = 0;
      if (lVar11 != 0) {
        local_250 = (longlong *)((ulonglong)local_250 & 0xffffffff00000000);
        local_258._0_1_ = 4;
        FUN_1405aaa50(local_230,*(undefined8 *)(lVar11 + 0x1d0),param_3,0);
        fVar18 = 0.0;
        *(undefined4 *)(local_230 + 100) = *(undefined4 *)(lVar11 + 0xd8);
        plVar15 = (longlong *)
                  ((ulonglong)(*(longlong *)(local_230 + 0x110) != 0) - 1 & local_230 + 0x100U |
                  *(ulonglong *)(local_230 + 0x110));
        uVar14 = (longlong)*(int *)(local_230 + 0x118) & 0x1fffffffffffffff;
        if (plVar15 + *(int *)(local_230 + 0x118) < plVar15) {
          uVar14 = uVar13;
        }
        if (uVar14 != 0) {
          do {
            if (*plVar15 == 0) {
              fVar16 = 0.0;
            }
            else {
              fVar16 = *(float *)(*plVar15 + 0x2d4);
            }
            plVar15 = plVar15 + 1;
            if (fVar18 <= fVar16) {
              fVar18 = fVar16;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 != uVar14);
        }
        local_250 = (longlong *)((ulonglong)local_250 & 0xffffffff00000000);
        local_258 = CONCAT31(local_258._1_3_,4);
        FUN_1405aaa50(local_230,*(undefined8 *)(lVar11 + 0x1e0),uVar14,0);
      }
      if (local_238 != '\0') {
        local_250 = &local_218;
        local_258 = 0;
        local_218 = 0;
        local_210 = 0;
        FUN_1405a2d20(local_230,local_1d8,lVar6,0);
        FUN_140591060(local_1d8);
        if (local_218 != 0) {
          FMemory::Free();
        }
      }
      if (cVar3 != '\0') {
        local_250 = &local_218;
        local_258 = 0;
        local_218 = 0;
        local_210 = 0;
        FUN_1405a2d20(local_230,local_1d8,uVar8,0);
        FUN_140591060(local_1d8);
        if (local_218 != 0) {
          FMemory::Free();
        }
      }
      if (local_230 != 0) {
        FUN_1405a53f0();
      }
    }
  }
  return;
}



// FUNCTION 142d42350 FUN_142d42350 body=398 status=ok
// SIG undefined FUN_142d42350(void)

void FUN_142d42350(longlong param_1,float *param_2,char *param_3,longlong param_4)

{
  float fVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  float local_58;
  float local_54;
  float local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  float local_30;
  undefined1 local_28 [16];
  longlong *local_18;
  int local_10;
  
  if (((param_4 != 0) && (iVar2 = FUN_1428cf800(param_4), iVar2 != 3)) && (param_1 != 0)) {
    UWorld::GetPlayerControllerIterator(param_4,&local_18);
    for (; (-1 < local_10 && (local_10 < (int)local_18[1])); local_10 = local_10 + 1) {
      plVar3 = (longlong *)FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
      (**(code **)(*plVar3 + 0x610))(plVar3,&local_58,local_28);
      if (*param_3 == '\0') {
        fVar1 = *(float *)(param_1 + 0x270);
      }
      else {
        fVar1 = *(float *)(param_3 + 8);
      }
      if (SQRT((local_54 - param_2[1]) * (local_54 - param_2[1]) +
               (local_58 - *param_2) * (local_58 - *param_2) +
               (local_50 - param_2[2]) * (local_50 - param_2[2])) < fVar1) {
        local_40 = *(undefined4 *)(param_3 + 8);
        local_48 = *(undefined8 *)param_3;
        local_30 = param_2[2];
        local_38 = *(undefined8 *)param_2;
        uVar4 = FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
        FUN_142d40a00(param_1,uVar4,&local_38,&local_48,*(undefined1 *)(param_1 + 0x268),0,0,0);
      }
    }
  }
  return;
}



// FUNCTION 142d424e0 FUN_142d424e0 body=3329 status=ok
// SIG undefined FUN_142d424e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d424e0(longlong param_1,float param_2,ulonglong *param_3,float *param_4,
                  undefined8 *param_5,longlong param_6)

{
  undefined1 auVar1 [16];
  bool bVar2;
  char cVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  undefined8 *puVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  float *pfVar16;
  undefined1 *puVar17;
  longlong *plVar18;
  float *pfVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_4c8 [32];
  undefined8 local_4a8;
  ulonglong *local_4a0;
  undefined8 *local_498;
  float *local_490;
  undefined8 local_488;
  float local_480;
  ulonglong local_478;
  float local_470;
  undefined8 local_468;
  float local_460;
  undefined8 local_458;
  float local_450;
  float *local_448;
  uint local_440;
  int local_43c;
  ulonglong local_438;
  float local_430;
  undefined4 local_428;
  float fStack_424;
  undefined4 uStack_420;
  float local_418;
  undefined8 *local_410;
  float local_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  undefined1 local_3f8 [12];
  undefined4 local_3ec;
  longlong local_3cc;
  float local_3c4;
  undefined8 local_3c0;
  float local_3b8;
  undefined1 local_368 [12];
  undefined4 local_35c;
  longlong local_33c;
  float local_334;
  longlong local_330;
  float local_328;
  ulonglong local_2d8;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  longlong local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined1 local_2b0;
  byte local_2af;
  code *local_2a8;
  undefined8 local_2a0;
  float local_298 [8];
  float *local_278;
  int local_268;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  undefined4 local_244;
  undefined8 local_240;
  undefined4 local_238;
  undefined4 local_234;
  ulonglong local_228 [5];
  undefined1 local_200;
  byte local_1ff;
  code *local_1f8;
  longlong local_1e8 [4];
  longlong *local_1c8;
  int local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_184;
  ulonglong local_178 [2];
  undefined4 local_168;
  undefined2 local_164;
  undefined1 local_162;
  undefined4 local_160;
  undefined1 local_15c;
  undefined4 local_158;
  undefined2 local_154;
  ulonglong local_130;
  undefined8 local_128;
  longlong local_110;
  undefined8 local_108;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_4c8;
  local_410 = param_5;
  if (param_1 == 0) {
    return;
  }
  if (param_4 == (float *)0x0) {
    return;
  }
  local_458 = param_1;
  lVar6 = FUN_1428dfc70();
  if ((*(int *)(*(longlong *)(param_4 + 4) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_4 + 4) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  pfVar12 = (float *)0x0;
  if (bVar2) {
    pfVar7 = (float *)(**(code **)(*(longlong *)param_4 + 0x148))(param_4);
    pfVar19 = param_4;
    param_4 = pfVar7;
  }
  else {
    lVar6 = FUN_142a2f930();
    if ((*(int *)(*(longlong *)(param_4 + 4) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 4) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    pfVar19 = pfVar12;
    if (!bVar2) {
      return;
    }
  }
  if (param_4 == (float *)0x0) {
    return;
  }
  if (((DAT_1468b5d90 == *(float *)(param_6 + 0x38)) &&
      (DAT_1468b5d94 == *(float *)(param_6 + 0x3c))) &&
     (DAT_1468b5d98 == *(float *)(param_6 + 0x40))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    if (((DAT_1468b5d90 == *(float *)(param_6 + 0x20)) &&
        (DAT_1468b5d94 == *(float *)(param_6 + 0x24))) &&
       (DAT_1468b5d98 == *(float *)(param_6 + 0x28))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_2af = local_2af & 0xfe;
      local_2a8 = AK::MemoryMgr::StartProfileThreadUsage;
      local_240 = *param_5;
      local_258 = 0;
      uStack_250 = 0x3f80000000000000;
      local_4a8 = &local_2d8;
      local_238 = *(undefined4 *)(param_5 + 1);
      local_4a0 = (ulonglong *)((ulonglong)local_4a0 & 0xffffffffffffff00);
      local_2d8 = 0;
      _local_2d0 = 0;
      local_2c8 = 0;
      local_2c0 = 0;
      local_2b8 = 0;
      local_278 = (float *)0x0;
      local_268 = 0;
      local_248 = 0x3f800000;
      local_244 = 0x3f800000;
      local_234 = 0x3f800000;
      local_2b0 = 0xc0;
      FUN_142d68ea0(param_1,pfVar19,param_6,0);
      if (local_268 != 0) {
        pfVar12 = local_298;
        if (local_278 != (float *)0x0) {
          pfVar12 = local_278;
        }
        if (pfVar12 != (float *)0x0) {
          (**(code **)(*(longlong *)pfVar12 + 0x10))(pfVar12,0);
        }
      }
      if (local_278 != (float *)0x0) {
        FMemory::Free();
      }
      uVar14 = local_2d8;
      if (local_2c8 != 0) {
        FMemory::Free();
        uVar14 = local_2d8;
      }
      goto LAB_142d4319f;
    }
  }
  local_178[0] = 0;
  local_178[1] = 0;
  local_130 = 0;
  local_128 = 0;
  local_110 = 0;
  local_108 = 0;
  local_168 = 0x10000;
  local_160 = 0;
  local_478 = 0;
  local_164 = 0;
  local_154 = 0x101;
  local_15c = 0;
  local_162 = 0;
  local_158 = 0;
  if (pfVar19 != (float *)0x0) {
    FCollisionQueryParams::AddIgnoredActor(local_178);
  }
  local_164 = CONCAT11(local_164._1_1_,1);
  lVar6 = FUN_142d5ecc0(param_4);
  if ((lVar6 == 0) || (lVar6 = FNiagaraEmitterHandle::GetInstance(lVar6), lVar6 == 0)) {
    if ((pfVar19 != (float *)0x0) && (*(longlong *)(pfVar19 + 0x5a) != 0)) {
      FUN_142369f10();
    }
    local_460 = *(float *)(param_3 + 1);
    uVar14 = *param_3;
    local_448 = (float *)0x0;
    local_43c = 0;
    _guard_xfg_dispatch_icall_nop(local_368,0,0x90);
    local_4a0 = local_178;
    local_498 = (undefined8 *)&DAT_146aefe68;
    fVar28 = -param_2;
    local_470 = local_460 + fVar28;
    local_35c = 0x3f800000;
    local_4a8 = (ulonglong *)((ulonglong)local_4a8._4_4_ << 0x20);
    local_478 = uVar14;
    local_468 = uVar14;
    local_418 = fVar28;
    cVar3 = UWorld::LineTraceSingleByChannel(param_4,local_368,&local_468,&local_478);
    pfVar7 = pfVar12;
    pfVar16 = pfVar12;
    if (cVar3 != '\0') {
      local_440 = 1;
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_448);
      pfVar7 = (float *)(ulonglong)local_440;
      *(longlong *)local_448 = local_330;
      local_448[2] = local_328;
      pfVar16 = local_448;
    }
    _guard_xfg_dispatch_icall_nop(&local_2d8,0,0x90);
    local_4a0 = local_178;
    local_470 = local_460 + param_2;
    local_498 = (undefined8 *)&DAT_146aefe68;
    local_478 = local_468;
    _local_2d0 = CONCAT44(0x3f800000,local_2d0);
    local_4a8 = (ulonglong *)((ulonglong)local_4a8 & 0xffffffff00000000);
    fVar4 = (float)UWorld::LineTraceSingleByChannel(param_4,&local_2d8,&local_468,&local_478);
    if (SUB41(fVar4,0) != '\0') {
      iVar15 = (int)pfVar7;
      local_440 = iVar15 + 1;
      if (local_43c < (int)local_440) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_448,pfVar7);
        pfVar16 = local_448;
      }
      pfVar7 = (float *)(ulonglong)local_440;
      *(undefined8 *)(pfVar16 + (longlong)iVar15 * 3) = local_2a0;
      pfVar16[(longlong)iVar15 * 3 + 2] = local_298[0];
      fVar4 = local_298[0];
    }
    iVar15 = (int)pfVar7;
    fVar29 = 0.0;
    if (0 < DAT_1466ad3ec) {
      fVar29 = 360.0 / (float)DAT_1466ad3ec;
    }
    iVar13 = DAT_1466ad3ec;
    if (pfVar19 == (float *)0x0) {
      local_478 = 0;
    }
    else {
      lVar6 = *(longlong *)(pfVar19 + 0x5a);
      local_480 = DAT_1468b5da8;
      local_488 = DAT_1468b5da0;
      if (lVar6 != 0) {
        local_408 = *(float *)(lVar6 + 0x210);
        fStack_404 = *(float *)(lVar6 + 0x214);
        fStack_400 = *(float *)(lVar6 + 0x218);
        fStack_3fc = *(float *)(lVar6 + 0x21c);
        auVar25._4_4_ = -(uint)(*(float *)(lVar6 + 0x254) != fStack_404);
        auVar25._0_4_ = -(uint)(*(float *)(lVar6 + 0x250) != local_408);
        auVar25._8_4_ = -(uint)(*(float *)(lVar6 + 600) != fStack_400);
        auVar25._12_4_ = -(uint)(*(float *)(lVar6 + 0x25c) != fStack_3fc);
        iVar5 = movmskps(fVar4,auVar25);
        if (iVar5 != 0) {
          *(float *)(lVar6 + 0x250) = local_408;
          *(float *)(lVar6 + 0x254) = fStack_404;
          *(float *)(lVar6 + 600) = fStack_400;
          *(float *)(lVar6 + 0x25c) = fStack_3fc;
          puVar10 = (undefined8 *)FQuat::Rotator(&local_408,&local_488);
          iVar13 = DAT_1466ad3ec;
          *(undefined8 *)(lVar6 + 0x260) = *puVar10;
          *(undefined4 *)(lVar6 + 0x268) = *(undefined4 *)(puVar10 + 1);
        }
        local_480 = *(float *)(lVar6 + 0x268);
        local_488 = *(ulonglong *)(lVar6 + 0x260);
      }
      local_478 = local_488 & 0xffffffff00000000;
    }
    local_470 = 0.0;
    local_428 = 0;
    fStack_424 = (float)(local_478 >> 0x20);
    uStack_420 = 0;
    if (0 < iVar13) {
      do {
        pfVar11 = (float *)FRotator::Vector(&local_428);
        fVar28 = pfVar11[1];
        fVar4 = *pfVar11;
        fVar27 = pfVar11[2];
        fVar21 = fVar4 * fVar4 + fVar28 * fVar28 + fVar27 * fVar27;
        if (fVar21 == 1.0) {
          local_438 = *(ulonglong *)pfVar11;
          local_430 = pfVar11[2];
          fVar23 = (float)(local_438 >> 0x20);
          fVar22 = local_430;
          fVar26 = (float)local_438;
        }
        else {
          fVar23 = DAT_1468b5d94;
          fVar22 = DAT_1468b5d98;
          fVar26 = DAT_1468b5d90;
          if (1e-08 <= fVar21) {
            auVar25 = rsqrtss(ZEXT416((uint)fVar21),ZEXT416((uint)fVar21));
            fVar22 = auVar25._0_4_;
            fVar22 = fVar22 + fVar22 * (0.5 - fVar21 * 0.5 * fVar22 * fVar22);
            fVar22 = fVar22 * (0.5 - fVar21 * 0.5 * fVar22 * fVar22) + fVar22;
            fVar26 = fVar22 * fVar4;
            fVar23 = fVar22 * fVar28;
            fVar22 = fVar22 * fVar27;
          }
        }
        _guard_xfg_dispatch_icall_nop(local_3f8,0,0x90);
        local_4a0 = local_178;
        local_498 = (undefined8 *)&DAT_146aefe68;
        local_3ec = 0x3f800000;
        local_4a8 = (ulonglong *)((ulonglong)local_4a8 & 0xffffffff00000000);
        local_480 = local_460 + fVar22 * param_2;
        local_488 = CONCAT44(local_468._4_4_ + fVar23 * param_2,(float)local_468 + fVar26 * param_2)
        ;
        cVar3 = UWorld::LineTraceSingleByChannel(param_4,local_3f8,&local_468,&local_488);
        if (cVar3 != '\0') {
          iVar15 = (int)pfVar7;
          if (pfVar16 != pfVar16 + (longlong)iVar15 * 3) {
            pfVar11 = pfVar16;
            do {
              if (0.95 < local_3c0._4_4_ * pfVar11[1] + (float)local_3c0 * *pfVar11 +
                         local_3b8 * pfVar11[2]) goto LAB_142d42dfb;
              pfVar11 = pfVar11 + 3;
            } while (pfVar11 != pfVar16 + (longlong)iVar15 * 3);
          }
          local_440 = iVar15 + 1;
          if (local_43c < (int)local_440) {
            TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_448,pfVar7);
            pfVar16 = local_448;
          }
          pfVar7 = (float *)(ulonglong)local_440;
          *(longlong *)(pfVar16 + (longlong)iVar15 * 3) = local_3c0;
          pfVar16[(longlong)iVar15 * 3 + 2] = local_3b8;
        }
LAB_142d42dfb:
        iVar15 = (int)pfVar7;
        uVar20 = (int)pfVar12 + 1;
        pfVar12 = (float *)(ulonglong)uVar20;
        fStack_424 = fStack_424 + fVar29;
        param_1 = local_458;
        fVar28 = local_418;
      } while ((int)uVar20 < DAT_1466ad3ec);
    }
    if (0 < iVar15) {
      fVar4 = 0.0;
      fVar29 = 0.0;
      fVar27 = 0.0;
      local_458 = 0;
      local_450 = 0.0;
      fVar21 = 1.0 / (float)iVar15;
      pfVar12 = pfVar16;
      if (pfVar16 != pfVar16 + (longlong)iVar15 * 3) {
        do {
          pfVar7 = pfVar12 + 3;
          fVar4 = fVar4 + fVar21 * *pfVar12;
          fVar29 = fVar29 + fVar21 * pfVar12[1];
          fVar27 = fVar27 + fVar21 * pfVar12[2];
          pfVar12 = pfVar7;
        } while (pfVar7 != pfVar16 + (longlong)iVar15 * 3);
        local_458 = CONCAT44(fVar29,fVar4);
        local_450 = fVar27;
      }
      fVar27 = local_450;
      fVar21 = fVar29 * fVar29 + fVar4 * fVar4 + local_450 * local_450;
      if (0.0 < fVar21) {
        local_1ff = local_1ff & 0xfe;
        local_1f8 = AK::MemoryMgr::StartProfileThreadUsage;
        local_190 = *local_410;
        local_1a8 = 0;
        uStack_1a0 = 0x3f80000000000000;
        local_188 = *(undefined4 *)(local_410 + 1);
        local_228[0] = 0;
        local_228[1] = 0;
        local_228[2] = 0;
        local_228[3] = 0;
        local_228[4] = 0;
        local_1c8 = (longlong *)0x0;
        local_1b8 = 0;
        local_198 = 0x3f800000;
        local_194 = 0x3f800000;
        local_184 = 0x3f800000;
        local_200 = 0xc0;
        _guard_xfg_dispatch_icall_nop(local_3f8,0,0x90);
        local_498 = (undefined8 *)&DAT_146aefe68;
        local_3ec = 0x3f800000;
        local_4a0 = local_178;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = CONCAT44(0,fVar21);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = CONCAT44(0,fVar21);
        auVar25 = rsqrtss(auVar24,auVar1);
        local_4a8 = (ulonglong *)((ulonglong)local_4a8 & 0xffffffff00000000);
        fVar23 = auVar25._0_4_;
        fVar23 = fVar23 + fVar23 * (0.5 - fVar21 * 0.5 * fVar23 * fVar23);
        fVar23 = fVar23 + fVar23 * (0.5 - fVar21 * 0.5 * fVar23 * fVar23);
        local_480 = local_460 + fVar27 * fVar23 * fVar28;
        local_488 = CONCAT44(local_468._4_4_ + fVar29 * fVar23 * fVar28,
                             (float)local_468 + fVar4 * fVar23 * fVar28);
        cVar3 = UWorld::LineTraceSingleByChannel(param_4,local_3f8,&local_468,&local_488);
        if (cVar3 == '\0') {
          local_330 = local_458;
          puVar17 = local_368;
          local_328 = local_450;
          local_33c = local_458;
          local_334 = local_450;
        }
        else {
          local_3c0 = local_458;
          puVar17 = local_3f8;
          local_3b8 = local_450;
          local_3cc = local_458;
          local_3c4 = local_450;
        }
        local_4a8 = local_228;
        local_4a0 = (ulonglong *)((ulonglong)local_4a0 & 0xffffffffffffff00);
        FUN_142d68ea0(param_1,pfVar19,puVar17,0);
        if (local_1b8 != 0) {
          plVar18 = local_1e8;
          if (local_1c8 != (longlong *)0x0) {
            plVar18 = local_1c8;
          }
          if (plVar18 != (longlong *)0x0) {
            (**(code **)(*plVar18 + 0x10))(plVar18,0);
          }
        }
        if (local_1c8 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (local_228[2] != 0) {
          FMemory::Free();
        }
        if (local_228[0] != 0) {
          FMemory::Free();
        }
      }
    }
    if (pfVar16 != (float *)0x0) {
      FMemory::Free(pfVar16);
    }
  }
  else {
    local_168 = CONCAT31(local_168._1_3_,1);
    if (pfVar19 == (float *)0x0) {
      puVar9 = (ulonglong *)&local_428;
      local_428 = 0x3f800000;
      fStack_424 = 0.0;
      uStack_420 = 0;
    }
    else {
      if (*(longlong *)(pfVar19 + 0x5a) == 0) {
        local_480 = (float)DAT_1464aa7b0;
        puVar8 = &local_488;
        local_488 = DAT_1464aa7a8;
      }
      else {
        puVar8 = (ulonglong *)FUN_142369f10(*(longlong *)(pfVar19 + 0x5a),&local_488);
      }
      local_430 = (float)(int)puVar8[1];
      puVar9 = &local_438;
      local_438 = *puVar8;
    }
    local_488 = *puVar9;
    local_480 = *(float *)(puVar9 + 1);
    local_430 = *(float *)(param_3 + 1);
    local_498 = &local_488;
    local_4a0 = &local_438;
    local_4a8 = local_178;
    local_438 = *param_3;
    local_490 = pfVar19;
    FUN_142d31fa0(lVar6,param_1,param_5,param_2);
  }
  uVar14 = local_130;
  if (local_110 != 0) {
    FMemory::Free();
    uVar14 = local_130;
  }
LAB_142d4319f:
  if (uVar14 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142d431f0 FUN_142d431f0 body=523 status=ok
// SIG undefined FUN_142d431f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_142d431f0(longlong param_1,float param_2,float param_3,undefined1 (*param_4) [12],
             longlong param_5,longlong *param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_d8 [32];
  float local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  float local_a0;
  float local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined1 local_78 [16];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (((param_1 != 0) && (param_6 != (longlong *)0x0)) &&
     (lVar1 = (**(code **)(*param_6 + 0x148))(), lVar1 != 0)) {
    local_a8 = 0;
    if ((param_5 != 0) && (lVar2 = FUN_142d80ec0(lVar1), lVar2 != 0)) {
      local_b8 = param_3;
      if ((*(byte *)(param_1 + 0x98) & 1) != 0) {
        local_b8 = (*(float *)(param_1 + 0xac) - *(float *)(param_1 + 0xa0)) * 0.5;
        fVar4 = (*(float *)(param_1 + 0xa8) - *(float *)(param_1 + 0x9c)) * 0.5;
        fVar5 = (*(float *)(param_1 + 0xb0) - *(float *)(param_1 + 0xa4)) * 0.5;
        if (local_b8 <= fVar4) {
          local_b8 = fVar4;
        }
        if (local_b8 <= fVar5) {
          local_b8 = fVar5;
        }
      }
      local_b0 = CONCAT71(local_b0._1_7_,1);
      fVar4 = (float)FUN_142d81a10(lVar2,param_5,0,param_4);
      if (fVar4 <= 0.0) {
        return (longlong *)0x0;
      }
    }
    local_68 = _DAT_146b31c30 & _DAT_146b31c40;
    uStack_64 = uRam0000000146b31c34 & uRam0000000146b31c44;
    uStack_60 = uRam0000000146b31c38 & uRam0000000146b31c48;
    uStack_5c = uRam0000000146b31c3c & uRam0000000146b31c4c;
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = uRam0000000146b31c3c;
    local_b0 = 0;
    local_78._12_4_ = 0;
    local_78._0_12_ = *param_4;
    local_b8 = (float)CONCAT31(local_b8._1_3_,1);
    plVar3 = (longlong *)FUN_14245f910(lVar1,param_1,&local_88,1);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x280))(plVar3,1);
      *(byte *)((longlong)plVar3 + 0x71a) = *(byte *)((longlong)plVar3 + 0x71a) | 0x40;
      if (0.0001 < param_2) {
        local_a0 = param_3 / param_2;
        local_a8 = CONCAT44(local_a0,local_a0);
        local_90 = local_a0;
        (**(code **)(*plVar3 + 0x3f8))(plVar3,&local_a8);
        return plVar3;
      }
      return plVar3;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 142d43400 FUN_142d43400 body=397 status=ok
// SIG undefined FUN_142d43400(void)

void FUN_142d43400(undefined1 *param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  float param_5)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  longlong *local_28;
  int local_20;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar1 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar1 != 0) {
    FUN_142494900(local_58);
    if (param_1 == (undefined1 *)0x0) {
      if (param_2 != 0) {
        local_58[0] = *(undefined1 *)(param_2 + 4);
        local_54 = *(undefined4 *)(param_2 + 8);
        local_50 = *(undefined4 *)(param_2 + 0xc);
      }
    }
    else {
      local_58[0] = *param_1;
      local_54 = *(undefined4 *)(param_1 + 4);
      local_50 = *(undefined4 *)(param_1 + 8);
    }
    if ((*(float *)(lVar1 + 0xdc) <= param_5) && (param_3 != 0)) {
      UWorld::GetPlayerControllerIterator(param_3,&local_28);
      for (; (-1 < local_20 && (local_20 < (int)local_28[1])); local_20 = local_20 + 1) {
        plVar3 = (longlong *)FWeakObjectPtr::Get(*local_28 + (longlong)local_20 * 8);
        if ((plVar3 != (longlong *)0x0) &&
           (cVar2 = (**(code **)(*plVar3 + 0x768))(plVar3), cVar2 != '\0')) {
          local_38 = *param_4;
          local_30 = *(undefined4 *)(param_4 + 1);
          local_44 = local_54;
          local_48[0] = local_58[0];
          local_40 = local_50;
          (**(code **)(*plVar3 + 0x850))(plVar3,local_48,1,&local_38,param_5 + param_5);
        }
      }
    }
  }
  return;
}



// FUNCTION 142d43590 FUN_142d43590 body=349 status=ok
// SIG undefined FUN_142d43590(void)

void FUN_142d43590(longlong *param_1,longlong param_2,undefined4 param_3,ulonglong param_4,
                  undefined8 param_5,longlong *param_6)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 in_R8;
  ulonglong uVar8;
  
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x280))(param_1,param_2,in_R8,param_4,param_5,&DAT_1468b5d90);
    iVar2 = (int)param_6[1];
    *(int *)(param_6 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_6 + 0xc) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_6,iVar2);
    }
    *(longlong **)(*param_6 + (longlong)iVar2 * 8) = param_1;
    lVar4 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      plVar6 = (longlong *)param_1[0x4f];
      uVar7 = 0;
      uVar8 = (longlong)(int)param_1[0x50] & 0x1fffffffffffffff;
      if (plVar6 + (int)param_1[0x50] < plVar6) {
        uVar8 = uVar7;
      }
      if (uVar8 != 0) {
        do {
          lVar4 = *plVar6;
          if (lVar4 != 0) {
            plVar5 = (longlong *)*param_6;
            plVar1 = plVar5 + (int)param_6[1];
            for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
              if (*plVar5 == lVar4) goto LAB_142d436bf;
            }
            FUN_142dd5bc0(param_2,lVar4,param_3,param_4 & 0xff,param_5,param_6);
          }
LAB_142d436bf:
          plVar6 = plVar6 + 1;
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar8);
      }
    }
  }
  return;
}



// FUNCTION 142d436f0 FUN_142d436f0 body=715 status=ok
// SIG undefined FUN_142d436f0(void)

void FUN_142d436f0(longlong *param_1,longlong *param_2,float *param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  bool bVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_98;
  float local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [80];
  
  if (param_2 != (longlong *)0x0) {
    local_a0 = *(float *)(param_6 + 1);
    local_a8 = *param_6;
    local_98 = *(undefined8 *)param_3;
    local_90 = param_3[2];
    fVar3 = (float)FUN_142d34a40(local_98,param_2,&local_98,&local_a8);
    if (0.0001 < fVar3) {
      (**(code **)(*param_2 + 0x610))(param_2,&local_b8,local_88);
      local_c4 = local_b4 - param_3[1];
      local_c8 = local_b8 - *param_3;
      local_c0 = local_b0 - param_3[2];
      fVar4 = local_c8 * local_c8 + local_c4 * local_c4 + local_c0 * local_c0;
      if (fVar4 != 1.0) {
        if (1e-08 <= fVar4) {
          auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
          fVar5 = auVar6._0_4_;
          fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
          fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
          local_c8 = local_c8 * fVar5;
          local_c0 = fVar5 * local_c0;
          local_c4 = fVar5 * local_c4;
        }
        else {
          local_c8 = DAT_1468b5d90;
          local_c0 = DAT_1468b5d98;
          local_c4 = DAT_1468b5d94;
        }
      }
      FRotator::UnrotateVector(local_88,local_78,&local_c8);
      (**(code **)(*param_1 + 0x280))(param_1,param_2,fVar3,param_4,param_5,local_78);
      if ((*(uint *)(param_1 + 6) >> 1 & 1) != 0) {
        local_90 = *(float *)(param_6 + 1);
        local_98 = *param_6;
        FUN_142d44690(param_1,param_2,param_3,param_4,param_5,&local_98);
      }
      lVar2 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
      if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
          lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        local_98 = *param_6;
        local_90 = *(float *)(param_6 + 1);
        local_a8 = *(undefined8 *)param_3;
        local_a0 = param_3[2];
        FUN_142de11c0(param_2,param_1,&local_a8,&local_98);
      }
    }
  }
  return;
}



// FUNCTION 142d439c0 FUN_142d439c0 body=380 status=ok
// SIG undefined FUN_142d439c0(void)

void FUN_142d439c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined4 param_6,undefined8 param_7)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_1 != 0) {
    lVar2 = FUN_142e45800();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_142d43b40(param_1,param_2,param_3,param_4);
      return;
    }
    lVar2 = FUN_142e458b0();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
      uVar5 = 0;
      uVar4 = (longlong)*(int *)(param_1 + 0x38) & 0x1fffffffffffffff;
      if (puVar3 + *(int *)(param_1 + 0x38) < puVar3) {
        uVar4 = uVar5;
      }
      if (uVar4 != 0) {
        do {
          FUN_142d43b40(*puVar3,param_2,param_3,param_4,param_5,param_6,param_7);
          uVar5 = uVar5 + 1;
          puVar3 = puVar3 + 1;
        } while (uVar5 != uVar4);
      }
    }
  }
  return;
}



// FUNCTION 142d43b40 FUN_142d43b40 body=497 status=ok
// SIG undefined FUN_142d43b40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d43b40(longlong param_1,longlong *param_2,longlong param_3,ulonglong param_4,
                  char param_5,undefined4 param_6,undefined8 param_7)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48;
  int local_40;
  
  if (param_1 != 0) {
    if ((param_3 == 0) || (param_5 != '\0')) {
      if ((param_2 != (longlong *)0x0) &&
         (lVar2 = (**(code **)(*param_2 + 0x148))(param_2), lVar2 != 0)) {
        UWorld::GetPlayerControllerIterator(lVar2,&local_48);
        while( true ) {
          if ((local_40 < 0) || (*(int *)(local_48 + 8) <= local_40)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) break;
          lVar2 = FWeakObjectPtr::Get();
          if (lVar2 != 0) {
            lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if ((bVar1) && ((param_5 == '\0' || (lVar2 != param_3)))) {
              local_50 = DAT_1468b5d98;
              local_58 = _DAT_1468b5d90;
              FUN_142e56610(lVar2,param_1,0,param_4 & 0xff,param_6,param_7,&local_58,0,0);
            }
          }
          local_40 = local_40 + 1;
        }
      }
    }
    else {
      local_58 = _DAT_1468b5d90;
      local_50 = DAT_1468b5d98;
      FUN_142e56610(param_3,param_1,0,param_4,param_6,param_7,&local_58,0,0);
    }
  }
  return;
}



// FUNCTION 142d43d40 FUN_142d43d40 body=600 status=ok
// SIG undefined FUN_142d43d40(void)

void FUN_142d43d40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 local_68;
  undefined4 local_60;
  
  if (param_1 != 0) {
    lVar2 = FUN_142e45800();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_68 = *param_4;
      local_60 = *(undefined4 *)(param_4 + 1);
      FUN_142d43fa0(param_1,param_2,param_3,&local_68,param_5,param_6,param_7,param_8,param_9,
                    param_10);
      return;
    }
    lVar2 = FUN_142e458b0();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      puVar5 = *(undefined8 **)(param_1 + 0x30);
      uVar3 = 0;
      uVar4 = (longlong)*(int *)(param_1 + 0x38) & 0x1fffffffffffffff;
      if (puVar5 + *(int *)(param_1 + 0x38) < puVar5) {
        uVar4 = uVar3;
      }
      if (uVar4 != 0) {
        do {
          local_68 = *param_4;
          local_60 = *(undefined4 *)(param_4 + 1);
          FUN_142d43fa0(*puVar5,param_2,param_3,&local_68,param_5,param_6,param_7,param_8,param_9,
                        param_10);
          uVar3 = uVar3 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar3 != uVar4);
      }
    }
  }
  return;
}



// FUNCTION 142d43fa0 FUN_142d43fa0 body=573 status=ok
// SIG undefined FUN_142d43fa0(void)

void FUN_142d43fa0(longlong param_1,longlong *param_2,longlong param_3,undefined8 *param_4,
                  undefined1 param_5,char param_6,undefined4 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  int local_50;
  
  if (param_1 != 0) {
    if ((param_3 == 0) || (param_6 != '\0')) {
      if ((param_2 != (longlong *)0x0) &&
         (lVar2 = (**(code **)(*param_2 + 0x148))(param_2), lVar2 != 0)) {
        UWorld::GetPlayerControllerIterator(lVar2,&local_58);
        while( true ) {
          if ((local_50 < 0) || (*(int *)(local_58 + 8) <= local_50)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) break;
          lVar2 = FWeakObjectPtr::Get();
          if (lVar2 != 0) {
            lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if ((bVar1) && ((param_6 == '\0' || (lVar2 != param_3)))) {
              local_60 = *(undefined4 *)(param_4 + 1);
              local_68 = *param_4;
              FUN_142e56610(lVar2,param_1,1,param_5,param_7,param_8,&local_68,param_9,param_10);
            }
          }
          local_50 = local_50 + 1;
        }
      }
    }
    else {
      local_68 = *param_4;
      local_60 = *(undefined4 *)(param_4 + 1);
      FUN_142e56610(param_3,param_1,1,param_5,param_7,param_8,&local_68,param_9,param_10);
    }
  }
  return;
}



// FUNCTION 142d441e0 FUN_142d441e0 body=722 status=ok
// SIG undefined FUN_142d441e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d441e0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 uStack_3c;
  longlong local_38;
  longlong *local_30;
  longlong *local_28;
  
  lVar4 = *(longlong *)(param_1 + 0x120);
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0();
  }
  if (((lVar4 != 0) && (*(longlong *)(param_1 + 0x870) != 0)) &&
     (*(longlong *)(param_1 + 0x898) != 0)) {
    lVar5 = FUN_142e20fc0();
    for (lVar4 = *(longlong *)(param_1 + 0x898); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
      if (lVar4 == lVar5) {
        if (((*(longlong *)(param_1 + 0x898) != 0) && (*(char *)(param_1 + 0x8b4) != '\0')) &&
           (cVar3 = FUN_1407c3030(param_1 + 0x178), cVar3 == '\0')) {
          *(undefined1 *)(param_1 + 0x210) = 1;
          *(undefined8 *)(param_1 + 0x8b8) = *(undefined8 *)(param_1 + 0x898);
          *(undefined8 *)(param_1 + 0x8c0) = *(undefined8 *)(param_1 + 0x8a0);
          *(undefined4 *)(param_1 + 0x8c8) = *(undefined4 *)(param_1 + 0x8a8);
          *(undefined4 *)(param_1 + 0x8cc) = *(undefined4 *)(param_1 + 0x8ac);
          *(undefined4 *)(param_1 + 0x8d0) = *(undefined4 *)(param_1 + 0x8b0);
          *(undefined4 *)(param_1 + 0x8d4) = *(undefined4 *)(param_1 + 0x8b4);
          *(undefined8 *)(param_1 + 0x898) = 0;
          *(undefined8 *)(param_1 + 0x8a0) = 0;
          *(undefined1 *)(param_1 + 0x8b4) = 0;
          *(undefined8 *)(param_1 + 0x8a8) = _DAT_1468b5d90;
          *(undefined4 *)(param_1 + 0x8b0) = DAT_1468b5d98;
          if (*(longlong *)(param_1 + 0x890) != 0) {
            FUN_142dafbc0(*(longlong *)(param_1 + 0x890) + 0x8b0,&DAT_146b31d08);
            FUN_142dafbc0(*(longlong *)(param_1 + 0x890) + 0x948,&DAT_146b31d08);
          }
          plVar6 = *(longlong **)(param_1 + 0x880);
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x440))(plVar6,&DAT_146b31d08,0);
          }
          FUN_142c7bae0(*(undefined8 *)(param_1 + 0x870),&local_38,*(undefined8 *)(param_1 + 0x8b8))
          ;
          if (local_38 == 0) {
            FUN_142d3fb50(param_1,4);
          }
          else {
            plVar6 = (longlong *)FMemory::Realloc(0,0x30);
            local_28 = plVar6;
            if (plVar6 != (longlong *)0x0) {
              *plVar6 = (longlong)&PTR_FUN_143fcff50;
              FWeakObjectPtr::operator=(plVar6 + 1,param_1);
              *(undefined4 *)(plVar6 + 2) = 0x42d3fb50;
              *(undefined4 *)((longlong)plVar6 + 0x14) = 1;
              *(undefined4 *)(plVar6 + 3) = 0;
              *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_3c;
              lVar4 = FDelegateHandle::GenerateNewID();
              plVar6[5] = lVar4;
              *plVar6 = (longlong)&PTR_FUN_143fcff98;
              FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(local_38 + 0x58,1);
              (**(code **)(*plVar6 + 0x20))(plVar6,local_res10);
              iVar2 = *(int *)(local_38 + 0x60);
              *(int *)(local_38 + 0x60) = iVar2 + 1;
              if (*(int *)(local_38 + 100) < iVar2 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(local_38 + 0x58,iVar2);
              }
              puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(local_38 + 0x58));
              *puVar7 = plVar6;
              *(undefined4 *)(puVar7 + 1) = 3;
            }
            if (0 < *(int *)(param_1 + 0x860)) {
              local_res8[0] = *(undefined1 *)(param_1 + 0x8d4);
              TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                        (param_1 + 0x858,local_res8);
            }
          }
          if (local_30 == (longlong *)0x0) {
            return;
          }
          LOCK();
          plVar6 = local_30 + 1;
          lVar4 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar4 != 1) {
            return;
          }
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)local_30 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 != 1) {
            return;
          }
          (**(code **)(*local_30 + 8))(local_30,1);
          return;
        }
        break;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x898) = 0;
  *(undefined8 *)(param_1 + 0x8a0) = 0;
  *(undefined1 *)(param_1 + 0x8b4) = 0;
  *(undefined8 *)(param_1 + 0x8a8) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x8b0) = DAT_1468b5d98;
  return;
}



// FUNCTION 142d444c0 FUN_142d444c0 body=452 status=ok
// SIG undefined FUN_142d444c0(void)

void FUN_142d444c0(longlong *param_1,longlong param_2,undefined8 *param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 *param_6,longlong *param_7)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x288))(param_1);
    uVar3 = *(undefined4 *)(param_3 + 1);
    uVar2 = *param_3;
    iVar4 = (int)param_7[1];
    *(int *)(param_7 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_7 + 0xc) < iVar4 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_7,iVar4);
    }
    *(longlong **)(*param_7 + (longlong)iVar4 * 8) = param_1;
    lVar6 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
         ) != lVar6 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      plVar8 = (longlong *)param_1[0x4f];
      uVar9 = 0;
      uVar10 = (longlong)(int)param_1[0x50] & 0x1fffffffffffffff;
      if (plVar8 + (int)param_1[0x50] < plVar8) {
        uVar10 = uVar9;
      }
      if (uVar10 != 0) {
        do {
          lVar6 = *plVar8;
          if (lVar6 != 0) {
            plVar7 = (longlong *)*param_7;
            plVar1 = plVar7 + (int)param_7[1];
            for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
              if (*plVar7 == lVar6) goto LAB_142d4464d;
            }
            local_40 = *(undefined4 *)(param_6 + 1);
            local_48 = *param_6;
            local_38 = uVar2;
            local_30 = uVar3;
            FUN_142dd58a0(param_2,lVar6,&local_38,param_4,param_5,&local_48,param_7);
          }
LAB_142d4464d:
          plVar8 = plVar8 + 1;
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar10);
      }
    }
  }
  return;
}



// FUNCTION 142d44690 FUN_142d44690 body=950 status=ok
// SIG undefined FUN_142d44690(void)

void FUN_142d44690(longlong param_1,longlong *param_2,float *param_3,char param_4,longlong *param_5,
                  undefined8 *param_6)

{
  undefined8 uVar1;
  bool bVar2;
  float *pfVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float local_c8;
  float local_c4;
  undefined4 local_c0;
  undefined8 local_b8;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_88;
  float local_84;
  float local_80;
  undefined8 local_78;
  float local_70;
  undefined4 local_68 [20];
  
  if (param_2 != (longlong *)0x0) {
    if ((param_4 == '\0') && (*(char *)(param_1 + 0x268) == '\0')) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
    (**(code **)(*param_2 + 0x610))(param_2,&local_a8,&local_98);
    local_b0 = local_a0 - param_3[2];
    local_b8 = CONCAT44(local_a4 - param_3[1],local_a8 - *param_3);
    pfVar3 = (float *)FVector::Rotation(&local_b8,&local_78);
    local_80 = local_90 - pfVar3[2];
    local_84 = local_94 - pfVar3[1];
    local_88 = local_98 - *pfVar3;
    FRotator::Vector(&local_88,&local_c8);
    fVar8 = local_c4 * local_c4 + local_c8 * local_c8;
    if (1e-08 < fVar8) {
      auVar11 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
      fVar10 = auVar11._0_4_;
      fVar10 = fVar10 + fVar10 * (0.5 - fVar8 * 0.5 * fVar10 * fVar10);
      fVar10 = fVar10 + fVar10 * (0.5 - fVar8 * 0.5 * fVar10 * fVar10);
      local_c8 = local_c8 * fVar10;
      local_c4 = local_c4 * fVar10;
    }
    local_c0 = 0;
    plVar5 = param_2;
    if (param_5 != (longlong *)0x0) {
      plVar5 = param_5;
    }
    fVar8 = (float)FUN_142c98860(param_1 + 0x128,plVar5);
    fVar10 = 1.0;
    uVar6 = local_b8;
    if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
      local_70 = param_3[2];
      uVar1 = *(undefined8 *)param_3;
      (**(code **)(*param_2 + 0x648))(param_2,&local_b8,local_68);
      fVar9 = local_70 - local_b0;
      fVar12 = (float)uVar1 - (float)local_b8;
      local_b8._4_4_ = (float)((ulonglong)uVar1 >> 0x20) - local_b8._4_4_;
      uVar6 = *param_6;
      local_b0 = *(float *)(param_6 + 1);
      local_b8._0_1_ = (char)uVar6;
      fVar9 = SQRT(fVar12 * fVar12 + local_b8._4_4_ * local_b8._4_4_ + fVar9 * fVar9);
      if ((char)local_b8 == '\0') {
        local_b8._4_4_ = *(float *)(param_1 + 0x26c);
        fVar12 = *(float *)(param_1 + 0x270);
      }
      else {
        local_b8._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
        fVar12 = local_b0;
      }
      local_78 = uVar1;
      if (fVar12 <= fVar9) {
        fVar10 = 0.0;
      }
      else if (local_b8._4_4_ < fVar9) {
        fVar10 = 1.0 - (fVar9 - local_b8._4_4_) / (fVar12 - local_b8._4_4_);
      }
    }
    local_b8 = uVar6;
    plVar5 = (longlong *)param_2[0xa5];
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x840))(plVar5,*(undefined8 *)(param_1 + 0x80),1);
      local_70 = (float)DAT_1468b5da8;
      local_78 = DAT_1468b5da0;
      fVar9 = local_c8 * fVar10 * fVar8;
      if (local_c8 <= 0.0) {
        uVar6 = *(undefined8 *)(param_1 + 0x88);
        fVar9 = -fVar9;
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + 0x80);
      }
      FUN_1427116d0(param_2,uVar6,fVar9,0,&local_78,uVar7);
      local_70 = (float)DAT_1468b5da8;
      local_78 = DAT_1468b5da0;
      fVar8 = local_c4 * fVar10 * fVar8;
      if (local_c4 <= 0.0) {
        uVar6 = *(undefined8 *)(param_1 + 0x98);
        fVar8 = -fVar8;
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + 0x90);
      }
      FUN_1427116d0(param_2,uVar6,fVar8,0,&local_78,uVar7);
      lVar4 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
      if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_142ddcca0(param_2,param_1,local_c8,local_c4);
      }
    }
  }
  return;
}



// FUNCTION 142d44a50 FUN_142d44a50 body=451 status=ok
// SIG undefined FUN_142d44a50(void)

void FUN_142d44a50(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  
  pfVar4 = (float *)(param_1 + 0x198);
  lVar5 = 6;
  do {
    if (*(longlong *)((longlong)pfVar4 + (longlong)(&DAT_146b31d30 + (-0x198 - param_1))) != 0) {
      lVar1 = FUN_142e49950();
      lVar6 = *(longlong *)((longlong)pfVar4 + (longlong)(&DAT_146b31d30 + (-0x198 - param_1)));
      for (lVar3 = lVar6; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
        if (lVar3 == lVar1) goto LAB_142d44b22;
      }
    }
    lVar6 = 0;
LAB_142d44b22:
    if (*(longlong *)(pfVar4 + -6) != 0) {
      lVar2 = FUN_142e49950();
      lVar3 = *(longlong *)(pfVar4 + -6);
      for (lVar1 = lVar3; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
        if (lVar1 == lVar2) goto LAB_142d44b50;
      }
    }
    lVar3 = 0;
LAB_142d44b50:
    if (((((lVar6 != lVar3) ||
          (pfVar4[-2] != *(float *)(((longlong)&DAT_146b31ba8 - param_1) + (longlong)pfVar4))) ||
         (pfVar4[-1] != *(float *)((0x146b31bac - param_1) + (longlong)pfVar4))) ||
        ((*pfVar4 != *(float *)(((longlong)&DAT_146b31bb0 - param_1) + (longlong)pfVar4) ||
         (0.0001 < ABS(*(float *)((0x146b31bb4 - param_1) + (longlong)pfVar4) - pfVar4[1]))))) ||
       ((*(char *)((longlong)pfVar4 + ((longlong)&DAT_146b31bc8 - param_1)) != *(char *)(pfVar4 + 6)
        || ((*(char *)(((longlong)&DAT_146b31bb8 - param_1) + (longlong)pfVar4) !=
             *(char *)(pfVar4 + 2) ||
            (*(longlong *)(((longlong)&DAT_146b31bc0 - param_1) + (longlong)pfVar4) !=
             *(longlong *)(pfVar4 + 4))))))) {
      *(undefined1 *)(pfVar4 + 10) = 1;
    }
    pfVar4 = pfVar4 + 0x12;
    lVar5 = lVar5 + -1;
    if (lVar5 == 0) {
      return;
    }
  } while( true );
}



// FUNCTION 142d44c20 FUN_142d44c20 body=54 status=ok
// SIG undefined FUN_142d44c20(void)

void FUN_142d44c20(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    iVar1 = FArchive::CustomVer(param_2,&DAT_1466ad3d0);
    if (iVar1 < 1) {
      *(bool *)(param_1 + 0x15) = *(char *)(param_1 + 0x14) != '\0';
    }
  }
  return;
}



// FUNCTION 142d44ce0 FUN_142d44ce0 body=593 status=ok
// SIG undefined FUN_142d44ce0(void)

void FUN_142d44ce0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  int *piVar10;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  float local_3c;
  undefined8 local_38;
  longlong lStack_30;
  ulonglong local_28;
  longlong local_20;
  undefined8 local_18;
  
  if (param_2 != 0) {
    lVar8 = 0;
    if (*(longlong *)(param_2 + 0x2b0) != 0) {
      lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x2b0) + 0x118);
    }
    if (((((lVar8 != 0) &&
          ((((param_1[0x2f] == 0 ||
             (plVar9 = (longlong *)(param_1[0x2f] + 0x830),
             iVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,lVar8), iVar6 != 0)) &&
            (lVar3 = *(longlong *)(param_2 + 0x2b0), lVar3 != 0)) &&
           ((*(byte *)(lVar3 + 0x660) & 1) != 0)))) &&
         ((cVar5 = FUN_142d1f620(lVar3), cVar5 == '\0' || ((*(byte *)(lVar3 + 0x660) & 2) != 0))))
        && ((lVar3 = *(longlong *)(param_2 + 0x2d0), lVar3 == 0 || (*(char *)(lVar3 + 0xa8) != '\0')
            ))) &&
       ((local_3c = (float)(**(code **)(*param_1 + 0x3f8))(param_1,param_2),
        *(float *)(param_2 + 0x1c0) != 0.0 || (local_3c != 0.0)))) {
      local_40 = *(undefined4 *)(param_2 + 0x118);
      local_48 = *(undefined8 *)(param_2 + 0x110);
      local_50 = *(undefined8 *)(param_2 + 0x50);
      local_58 = *(longlong **)(param_2 + 0x58);
      local_38 = 0;
      lStack_30 = 0;
      local_28 = 0;
      local_18 = 0;
      if ((lVar3 != 0) && (lStack_30 = 0, *(longlong *)(lVar3 + 0x240) != 0)) {
        lStack_30 = lVar3;
      }
      if (local_3c == 0.0) {
        local_28 = 0x40;
      }
      local_20 = lVar8;
      if ((*(byte *)(param_2 + 0x214) & 1) != 0) {
        iVar6 = *(int *)(param_2 + 0x338);
        plVar9 = param_1 + 0x67;
        piVar10 = (int *)*plVar9;
        iVar2 = (int)param_1[0x68];
        piVar1 = piVar10 + iVar2;
        for (; piVar10 != piVar1; piVar10 = piVar10 + 1) {
          if (*piVar10 == iVar6) goto LAB_142d44e90;
        }
        *(int *)(param_1 + 0x68) = iVar2 + 1;
        if (*(int *)((longlong)param_1 + 0x344) < iVar2 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar9);
        }
        *(int *)(*plVar9 + (longlong)iVar2 * 4) = iVar6;
        local_28 = local_28 | 1;
      }
LAB_142d44e90:
      if (local_58 != (longlong *)0x0) {
        plVar7 = (longlong *)FUN_142e49950();
        plVar4 = local_58;
        for (plVar9 = local_58; plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[6]) {
          if (plVar9 == plVar7) {
            lVar8 = local_58[0x1f];
            if (lVar8 == 0) {
              (**(code **)(*local_58 + 0x368))(local_58);
              lVar8 = plVar4[0x1f];
              if (lVar8 == 0) break;
            }
            if (*(char *)(lVar8 + 0xb1) != '\0') {
              local_28 = local_28 | 0x10;
            }
            break;
          }
        }
      }
      (**(code **)(*param_1 + 0x408))(param_1,param_2,&local_58);
      FUN_142d4e7a0(param_1,&local_58);
    }
  }
  return;
}



// FUNCTION 142d44f40 FUN_142d44f40 body=195 status=ok
// SIG undefined FUN_142d44f40(void)

void FUN_142d44f40(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  float *pfVar4;
  float local_38;
  float local_34;
  float local_30;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  plVar2 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x34);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_1428dfc70();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*plVar2 + 0x648))(plVar2,&local_38,local_28);
      pfVar4 = (float *)FRotator::Vector(local_28,local_18);
      local_38 = local_38 + *pfVar4;
      local_34 = local_34 + pfVar4[1];
      local_30 = local_30 + pfVar4[2];
      UEnvQueryItemType_Point::SetContextHelper(param_3,&local_38);
    }
  }
  return;
}



// FUNCTION 142d45010 FUN_142d45010 body=126 status=ok
// SIG undefined FUN_142d45010(void)

void FUN_142d45010(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  plVar2 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x34);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_1428dfc70();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*plVar2 + 0x648))(plVar2,local_28,local_18);
      UEnvQueryItemType_Point::SetContextHelper(param_3,local_28);
    }
  }
  return;
}



// FUNCTION 142d45090 FUN_142d45090 body=425 status=ok
// SIG undefined FUN_142d45090(void)

void FUN_142d45090(longlong param_1,longlong param_2,undefined8 *param_3)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined1 local_res10 [8];
  undefined8 local_18;
  undefined2 local_10;
  
  plVar3 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x34);
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  lVar4 = FUN_1428dfc70();
  if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  lVar4 = (**(code **)(*plVar3 + 0x668))(plVar3);
  if (lVar4 != 0) {
    lVar5 = FUN_142c2de20();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar4 = *(longlong *)(lVar4 + 0x568);
      goto LAB_142d4515c;
    }
  }
  uVar6 = FUN_142c36280();
  lVar4 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar6);
LAB_142d4515c:
  if (lVar4 == 0) {
    uVar6 = UEnvQueryItemType_Actor::GetPrivateStaticClass();
    *param_3 = uVar6;
    *(undefined4 *)(param_3 + 1) = 1;
    iVar7 = *(int *)(param_3 + 3);
    if (iVar7 < 8) {
      *(undefined4 *)(param_3 + 3) = 8;
      if (*(int *)((longlong)param_3 + 0x1c) < 8) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_3 + 2);
      }
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar7 + param_3[2]),0,(longlong)(8 - iVar7));
    }
    else if ((8 < iVar7) && (iVar8 = iVar7 + -8, iVar8 != 0)) {
      iVar2 = (iVar7 - iVar8) + -8;
      if (iVar2 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(param_3[2] + 8),(void *)((longlong)iVar7 + param_3[2]),(longlong)iVar2);
        iVar7 = *(int *)(param_3 + 3);
      }
      *(int *)(param_3 + 3) = iVar7 - iVar8;
      TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_3 + 2);
    }
    FWeakObjectPtr::operator=(local_res10,plVar3);
    UEnvQueryItemType_Actor::SetValue(param_3[2],local_res10);
  }
  else {
    local_18 = *(undefined8 *)(param_1 + 0x28);
    local_10 = 0xff00;
    FUN_142cd3f10(&local_18,lVar4,param_3);
  }
  return;
}



// FUNCTION 142d45240 FUN_142d45240 body=382 status=ok
// SIG undefined FUN_142d45240(void)

void FUN_142d45240(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  float fVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  longlong local_res10;
  undefined8 local_38;
  float local_30;
  undefined8 local_28;
  
  plVar2 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x34);
  uVar3 = 0;
  if (plVar2 != (longlong *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x148))(plVar2);
  }
  lVar4 = FUN_142d39320(uVar3);
  if (lVar4 != 0) {
    FUN_142d3c3d0(lVar4,&local_res10,*(undefined4 *)(param_2 + 0x30));
    iVar7 = (int)local_res10;
    if (((((iVar7 < 0) || (local_res10 < 0)) || (*(int *)(lVar4 + 0x40) <= iVar7)) ||
        ((lVar4 = (longlong)iVar7 * 0x3b0 + *(longlong *)(lVar4 + 0x38),
         *(int *)(lVar4 + 0x328) != iVar7 ||
         (*(int *)(lVar4 + 0x32c) != (int)((ulonglong)local_res10 >> 0x20))))) || (lVar4 == 0)) {
      local_30 = DAT_1466ad3c8;
      puVar5 = &local_38;
      local_38 = CONCAT44(DAT_1466ad3c0._4_4_,(float)DAT_1466ad3c0);
    }
    else {
      puVar5 = (undefined8 *)FUN_142d4fdc0(&local_38,lVar4 + 0x390);
    }
    uVar3 = *puVar5;
    fVar1 = *(float *)(puVar5 + 1);
    if ((((float)uVar3 != (float)DAT_1466ad3c0) ||
        (local_38._4_4_ = (float)((ulonglong)uVar3 >> 0x20), local_38._4_4_ != DAT_1466ad3c0._4_4_))
       || (fVar1 != DAT_1466ad3c8)) {
      *(undefined4 *)(param_3 + 1) = 1;
      iVar7 = *(int *)(param_3 + 3);
      local_38 = uVar3;
      local_30 = fVar1;
      if (iVar7 < 0xc) {
        *(undefined4 *)(param_3 + 3) = 0xc;
        if (*(int *)((longlong)param_3 + 0x1c) < 0xc) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_3 + 2,iVar7);
        }
      }
      else if ((0xc < iVar7) && (iVar7 + -0xc != 0)) {
        *(int *)(param_3 + 3) = iVar7 - (iVar7 + -0xc);
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_3 + 2);
      }
      uVar6 = UEnvQueryItemType_Point::GetPrivateStaticClass();
      *param_3 = uVar6;
      local_28 = 0;
      local_38 = uVar3;
      local_30 = fVar1;
      UEnvQueryItemType_Point::SetValue(param_3[2],&local_38);
    }
  }
  return;
}



// FUNCTION 142d453c0 FUN_142d453c0 body=943 status=ok
// SIG undefined FUN_142d453c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d453c0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  int local_res10;
  int iStackX_14;
  undefined8 local_38;
  float local_30;
  undefined8 local_28;
  float local_20;
  
  plVar2 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x34);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  local_30 = DAT_1466ad3c8;
  local_38 = CONCAT44(DAT_1466ad3c0._4_4_,(float)DAT_1466ad3c0);
  uVar3 = (**(code **)(*plVar2 + 0x148))(plVar2);
  lVar4 = FUN_142d39320(uVar3);
  if (lVar4 == 0) {
LAB_142d454fb:
    uVar10 = local_38 & 0xffffffff;
    fVar7 = local_38._4_4_;
  }
  else {
    FUN_142d3c3d0(lVar4,&local_res10,*(undefined4 *)(param_2 + 0x30));
    if ((local_res10 < 0) || (iStackX_14 < 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_142d454fb;
    if ((local_res10 < 0) || (iStackX_14 < 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((local_res10 < 0) || (*(int *)(lVar4 + 0x40) <= local_res10)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_142d454c8;
      lVar4 = (longlong)local_res10 * 0x3b0 + *(longlong *)(lVar4 + 0x38);
      if ((*(int *)(lVar4 + 0x328) == local_res10) && (*(int *)(lVar4 + 0x32c) == iStackX_14)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if ((!bVar1) || (lVar4 == 0)) goto LAB_142d454c8;
      puVar5 = (ulonglong *)(lVar4 + 0x348);
    }
    else {
LAB_142d454c8:
      puVar5 = &DAT_1466ad3c0;
    }
    uVar10 = *puVar5;
    local_30 = *(float *)(puVar5 + 1);
    local_38 = uVar10;
    local_28 = uVar10;
    local_20 = local_30;
    fVar7 = (float)(uVar10 >> 0x20);
  }
  if ((((((float)uVar10 <= -(float)DAT_1466ad3c0) || ((float)DAT_1466ad3c0 <= (float)uVar10)) ||
       (fVar7 <= -DAT_1466ad3c0._4_4_)) ||
      ((DAT_1466ad3c0._4_4_ <= fVar7 || (local_30 <= -DAT_1466ad3c8)))) ||
     (DAT_1466ad3c8 <= local_30)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) goto LAB_142d45755;
  uVar3 = UDamageableInterface::GetPrivateStaticClass();
  plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(plVar2,uVar3);
  if (plVar6 != (longlong *)0x0) {
    puVar5 = (ulonglong *)(**(code **)(*plVar6 + 0x10))(plVar6,&local_28);
    local_38 = *puVar5;
    local_30 = *(float *)(puVar5 + 1);
    goto LAB_142d45755;
  }
  lVar4 = FUN_1428dfc70();
  if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
LAB_142d456e7:
    lVar4 = plVar2[0x2d];
    if (lVar4 != 0) {
      uVar8 = *(undefined4 *)(lVar4 + 0x220);
      uVar9 = *(undefined4 *)(lVar4 + 0x224);
      local_20 = *(float *)(lVar4 + 0x228);
      goto LAB_142d456fa;
    }
LAB_142d45716:
    local_28 = _DAT_1468b5d90;
    local_20 = DAT_1468b5d98;
  }
  else {
    lVar4 = FUN_1429ff160();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_38 = plVar2[0x44];
      local_30 = *(float *)(plVar2 + 0x45);
      goto LAB_142d45755;
    }
    lVar4 = FUN_1428e7a40();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      uVar3 = FUN_1428dfc70();
      plVar2 = (longlong *)UObjectBaseUtility::GetTypedOuter(plVar2,uVar3);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      lVar4 = FUN_1428dfc70();
      if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        return;
      }
      goto LAB_142d456e7;
    }
    if (plVar2[0x23] == 0) {
      return;
    }
    lVar4 = *(longlong *)(plVar2[0x23] + 0x168);
    if (lVar4 == 0) goto LAB_142d45716;
    uVar8 = *(undefined4 *)(lVar4 + 0x220);
    uVar9 = *(undefined4 *)(lVar4 + 0x224);
    local_20 = *(float *)(lVar4 + 0x228);
LAB_142d456fa:
    local_28 = CONCAT44(uVar9,uVar8);
  }
  local_30 = local_20;
  local_38 = local_28;
LAB_142d45755:
  UEnvQueryItemType_Point::SetContextHelper(param_3,&local_38);
  return;
}



// FUNCTION 142d45770 FUN_142d45770 body=204 status=ok
// SIG undefined FUN_142d45770(void)

void FUN_142d45770(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  float local_38;
  float local_34;
  float local_30;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  lVar3 = FWeakObjectPtr::Get(param_2 + 0x34);
  if (lVar3 != 0) {
    lVar4 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (plVar1 = *(longlong **)(lVar3 + 0x118), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x648))(plVar1,&local_38,local_28);
      pfVar5 = (float *)FRotator::Vector(local_28,local_18);
      local_38 = local_38 + *pfVar5;
      local_34 = local_34 + pfVar5[1];
      local_30 = local_30 + pfVar5[2];
      UEnvQueryItemType_Point::SetContextHelper(param_3,&local_38);
    }
  }
  return;
}



// FUNCTION 142d45840 FUN_142d45840 body=135 status=ok
// SIG undefined FUN_142d45840(void)

void FUN_142d45840(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  lVar3 = FWeakObjectPtr::Get(param_2 + 0x34);
  if (lVar3 != 0) {
    lVar4 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (plVar1 = *(longlong **)(lVar3 + 0x118), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x648))(plVar1,local_28,local_18);
      UEnvQueryItemType_Point::SetContextHelper(param_3,local_28);
    }
  }
  return;
}



// FUNCTION 142d458d0 FUN_142d458d0 body=452 status=ok
// SIG undefined FUN_142d458d0(void)

void FUN_142d458d0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 local_res10 [8];
  
  plVar4 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x34);
  if (plVar4 == (longlong *)0x0) {
    return;
  }
  lVar5 = FUN_1428dfc70();
  if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  lVar5 = (**(code **)(*plVar4 + 0x678))(plVar4);
  if (lVar5 != 0) {
    lVar6 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar5 = *(longlong *)(lVar5 + 0x9d0);
      goto LAB_142d4597f;
    }
  }
  lVar5 = 0;
LAB_142d4597f:
  if (lVar5 != 0) {
    *(undefined4 *)(param_3 + 1) = 1;
    iVar3 = *(int *)(param_3 + 3);
    if (iVar3 < 8) {
      *(undefined4 *)(param_3 + 3) = 8;
      if (*(int *)((longlong)param_3 + 0x1c) < 8) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_3 + 2,iVar3);
      }
    }
    else if ((8 < iVar3) && (iVar1 = iVar3 + -8, iVar1 != 0)) {
      iVar8 = (iVar3 - iVar1) + -8;
      if (iVar8 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(param_3[2] + 8),(void *)((longlong)iVar3 + param_3[2]),(longlong)iVar8);
        iVar3 = *(int *)(param_3 + 3);
      }
      *(int *)(param_3 + 3) = iVar3 - iVar1;
      TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_3 + 2);
    }
    uVar7 = UEnvQueryItemType_Actor::GetPrivateStaticClass();
    *param_3 = uVar7;
    iVar3 = *(int *)(param_3 + 3);
    if (iVar3 < 8) {
      *(undefined4 *)(param_3 + 3) = 8;
      if (*(int *)((longlong)param_3 + 0x1c) < 8) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_3 + 2,iVar3);
      }
    }
    else if ((8 < iVar3) && (iVar1 = iVar3 + -8, iVar1 != 0)) {
      iVar8 = (iVar3 - iVar1) + -8;
      if (iVar8 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(param_3[2] + 8),(void *)((longlong)iVar3 + param_3[2]),(longlong)iVar8);
        iVar3 = *(int *)(param_3 + 3);
      }
      *(int *)(param_3 + 3) = iVar3 - iVar1;
      TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_3 + 2);
    }
    FWeakObjectPtr::operator=(local_res10,lVar5);
    UEnvQueryItemType_Actor::SetValue(param_3[2],local_res10);
  }
  return;
}



// FUNCTION 142d45aa0 FUN_142d45aa0 body=303 status=ok
// SIG undefined FUN_142d45aa0(void)

void FUN_142d45aa0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong local_28;
  undefined8 local_20;
  longlong local_18;
  int local_10;
  
  plVar3 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x34);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = FUN_1428dfc70();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_28 = 0;
      local_20 = 0;
      lVar4 = (**(code **)(*plVar3 + 0x148))(plVar3);
      if (lVar4 != 0) {
        UWorld::GetPlayerControllerIterator(lVar4,&local_18);
        while( true ) {
          if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) break;
          lVar4 = FWeakObjectPtr::Get();
          uVar2 = local_20;
          if (lVar4 != 0) {
            lVar6 = (longlong)(int)local_20;
            if (*(longlong *)(lVar4 + 0x488) != 0) {
              lVar4 = *(longlong *)(lVar4 + 0x488);
            }
            iVar5 = (int)local_20 + 1;
            local_20 = CONCAT44(local_20._4_4_,iVar5);
            if (local_20._4_4_ < iVar5) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (&local_28,uVar2 & 0xffffffff);
            }
            *(longlong *)(local_28 + lVar6 * 8) = lVar4;
          }
          local_10 = local_10 + 1;
        }
      }
      UEnvQueryItemType_Actor::SetContextHelper(param_3,&local_28);
      if (local_28 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 142d45bd0 FUN_142d45bd0 body=583 status=ok
// SIG undefined FUN_142d45bd0(void)

void FUN_142d45bd0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float local_68;
  float fStack_64;
  float local_60;
  undefined8 local_58;
  float local_50;
  undefined4 local_48 [2];
  float local_40;
  undefined1 local_38 [48];
  
  plVar2 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x34);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_1428dfc70();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      lVar3 = FUN_1428e7a40();
      if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        return;
      }
      plVar2 = (longlong *)plVar2[0x23];
      if (plVar2 == (longlong *)0x0) {
        return;
      }
    }
    (**(code **)(*plVar2 + 0x648))(plVar2,local_38,local_48);
    if (1e-08 < ABS(local_40)) {
      puVar4 = (undefined8 *)FRotator::Vector(local_48,&local_68);
      local_58._0_4_ = (float)*puVar4;
      local_58._4_4_ = (float)((ulonglong)*puVar4 >> 0x20);
      local_60 = *(float *)(puVar4 + 1);
      fVar5 = (float)local_58 * (float)local_58 + local_58._4_4_ * local_58._4_4_;
      if (fVar5 == 1.0) {
        local_68 = (float)local_58;
        fStack_64 = local_58._4_4_;
        if (local_60 != 0.0) {
          local_60 = 0.0;
        }
      }
      else if (1e-08 <= fVar5) {
        auVar6 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
        local_68 = auVar6._0_4_;
        local_68 = local_68 + local_68 * (0.5 - fVar5 * 0.5 * local_68 * local_68);
        local_68 = local_68 + local_68 * (0.5 - fVar5 * 0.5 * local_68 * local_68);
        fStack_64 = local_68 * local_58._4_4_;
        local_68 = local_68 * (float)local_58;
        local_60 = 0.0;
      }
      else {
        local_68 = DAT_1468b5d90;
        fStack_64 = DAT_1468b5d94;
        local_60 = DAT_1468b5d98;
      }
      local_58 = CONCAT44(fStack_64,local_68);
      local_50 = local_60;
    }
    else {
      local_48[0] = 0;
      puVar4 = (undefined8 *)FRotator::Vector(local_48,&local_68);
      local_58 = *puVar4;
      local_50 = *(float *)(puVar4 + 1);
    }
    UEnvQueryItemType_Direction::SetContextHelper(param_3,&local_58);
  }
  return;
}



// FUNCTION 142d45e20 FUN_142d45e20 body=213 status=ok
// SIG undefined FUN_142d45e20(void)

void FUN_142d45e20(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  plVar2 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x34);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_1428dfc70();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      lVar3 = FUN_1428e7a40();
      if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        return;
      }
      plVar2 = (longlong *)plVar2[0x23];
      if (plVar2 == (longlong *)0x0) {
        return;
      }
    }
    (**(code **)(*plVar2 + 0x648))(plVar2,local_28,local_38);
    uVar4 = FRotator::Vector(local_38,local_18);
    UEnvQueryItemType_Direction::SetContextHelper(param_3,uVar4);
  }
  return;
}



// FUNCTION 142d45f00 FUN_142d45f00 body=200 status=ok
// SIG undefined FUN_142d45f00(void)

void FUN_142d45f00(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  plVar2 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x34);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_1428dfc70();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      lVar3 = FUN_1428e7a40();
      if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        return;
      }
      plVar2 = (longlong *)plVar2[0x23];
      if (plVar2 == (longlong *)0x0) {
        return;
      }
    }
    (**(code **)(*plVar2 + 0x648))(plVar2,local_28,local_18);
    UEnvQueryItemType_Point::SetContextHelper(param_3,local_28);
  }
  return;
}



// FUNCTION 142d45fd0 FUN_142d45fd0 body=575 status=ok
// SIG undefined FUN_142d45fd0(void)

void FUN_142d45fd0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float local_58;
  float local_54;
  float local_50;
  undefined8 local_48;
  float local_40;
  
  plVar2 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x34);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_1428dfc70();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      lVar3 = FUN_1428e7a40();
      if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        return;
      }
      plVar2 = (longlong *)plVar2[0x23];
      if (plVar2 == (longlong *)0x0) {
        return;
      }
    }
    (**(code **)(*plVar2 + 0x308))(plVar2,&local_58);
    if (((0.0001 < ABS(local_58)) || (0.0001 < ABS(local_54))) || (0.0001 < ABS(local_50))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (plVar2[0x2d] == 0) {
        local_40 = (float)DAT_1464aa7b0;
        puVar4 = &local_48;
        local_48 = DAT_1464aa7a8;
      }
      else {
        puVar4 = (undefined8 *)FUN_142369f10(plVar2[0x2d],&local_48);
      }
      local_50 = *(float *)(puVar4 + 1);
      local_58 = (float)*puVar4;
      local_54 = (float)((ulonglong)*puVar4 >> 0x20);
      local_40 = local_50;
    }
    else {
      fVar5 = local_58 * local_58 + local_54 * local_54 + local_50 * local_50;
      if (1e-08 < fVar5) {
        auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
        fVar6 = auVar7._0_4_;
        fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
        fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
        local_58 = local_58 * fVar6;
        local_54 = local_54 * fVar6;
        local_50 = local_50 * fVar6;
      }
    }
    UEnvQueryItemType_Direction::SetContextHelper(param_3,&local_58);
  }
  return;
}



// FUNCTION 142d46210 FUN_142d46210 body=324 status=ok
// SIG undefined FUN_142d46210(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d46210(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar2 = FWeakObjectPtr::Get(param_2 + 0x34);
  if (lVar2 != 0) {
    lVar3 = FUN_1428dfc70();
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
      lVar3 = *(longlong *)(lVar2 + 0x168);
      if (lVar3 == 0) {
        local_18 = _DAT_1468b5d90;
        local_10 = DAT_1468b5d98;
      }
      else {
        local_18 = *(undefined8 *)(lVar3 + 0x220);
        local_10 = *(undefined4 *)(lVar3 + 0x228);
      }
      local_28 = local_18;
      local_20 = local_10;
      lVar2 = FUN_142ddddc0(lVar2);
      if (lVar2 != 0) {
        lVar2 = FUN_142dcd660(lVar2,0);
        if (lVar2 != 0) {
          lVar3 = FUN_1429d7ab0();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            puVar4 = (undefined8 *)
                     (**(code **)(*(longlong *)(lVar2 + 0x458) + 0x18))
                               ((longlong *)(lVar2 + 0x458),&local_18);
            local_28 = *puVar4;
            local_20 = *(undefined4 *)(puVar4 + 1);
          }
        }
      }
      UEnvQueryItemType_Point::SetContextHelper(param_3,&local_28);
    }
  }
  return;
}



// FUNCTION 142d46360 FUN_142d46360 body=152 status=ok
// SIG undefined FUN_142d46360(void)

void FUN_142d46360(float param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  float fVar3;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_142e64ca0();
    lVar2 = (**(code **)(*param_2 + 0x628))(param_2,uVar1);
    if (lVar2 != 0) {
      fVar3 = (float)FUN_142d3b430(lVar2,param_3,param_4);
      lVar2 = FUN_142d3b8e0(lVar2,param_3,param_4);
      if (lVar2 != 0) {
        FUN_142d48590(lVar2,fVar3 + param_1);
      }
    }
  }
  return;
}



// FUNCTION 142d46400 FUN_142d46400 body=265 status=ok
// SIG undefined FUN_142d46400(void)

void FUN_142d46400(float param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_142e64ca0();
    lVar3 = (**(code **)(*param_2 + 0x628))(param_2,uVar1);
    if (lVar3 != 0) {
      fVar5 = (float)FUN_142d3b430(lVar3,param_3,param_4);
      lVar4 = FUN_142d3b8e0(lVar3,param_3,param_4);
      if (lVar4 == 0) {
        fVar6 = 0.0;
      }
      else {
        cVar2 = FUN_142d52a00(lVar4 + 0x58);
        if (cVar2 == '\0') {
          fVar6 = *(float *)(lVar4 + 0x50);
        }
        else {
          uVar1 = FUN_142d52a20(lVar4 + 0x58);
          lVar4 = FArchive::operator<<(uVar1);
          fVar6 = *(float *)(lVar4 + 0x20);
        }
      }
      lVar3 = FUN_142d3b8e0(lVar3,param_3,param_4);
      if (lVar3 != 0) {
        FUN_142d48590(lVar3,fVar6 * param_1 + fVar5);
      }
    }
  }
  return;
}



// FUNCTION 142d46510 FUN_142d46510 body=250 status=ok
// SIG undefined FUN_142d46510(void)

void FUN_142d46510(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  if (param_3 != 0) {
    plVar3 = (longlong *)(*param_1 + 0x20 + (longlong)param_2 * 0x68);
    iVar2 = param_3;
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
    iVar2 = (int)param_1[1];
    iVar4 = (iVar2 - param_2) - param_3;
    if (param_3 <= iVar4) {
      iVar4 = param_3;
    }
    if (iVar4 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x68),
                 (void *)((longlong)(iVar2 - iVar4) * 0x68 + *param_1),(longlong)iVar4 * 0x68);
      iVar2 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar2 - param_3;
    if (param_4 != '\0') {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::
      ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 142d46610 FUN_142d46610 body=73 status=ok
// SIG undefined FUN_142d46610(void)

undefined1 FUN_142d46610(longlong *param_1)

{
  undefined1 uVar1;
  undefined8 local_res8 [4];
  
  if (((((int)param_1[8] != 0) && (*param_1 != 0)) && (param_1[0x60] != 0)) &&
     (*(char *)(param_1[7] + 3) == '\x05')) {
    local_res8[0] = 0;
    uVar1 = FUN_142cc3a70(param_1[7] + 0x58,param_1[0x60],local_res8);
    return uVar1;
  }
  return 0;
}



// FUNCTION 142d46660 FUN_142d46660 body=64 status=ok
// SIG undefined FUN_142d46660(void)

void FUN_142d46660(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x188);
  lVar2 = (longlong)*(int *)(param_1 + 400) * 0x70 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x70) {
    FUN_142d46710(lVar1);
  }
  return;
}



// FUNCTION 142d466a0 FUN_142d466a0 body=98 status=ok
// SIG undefined FUN_142d466a0(void)

void FUN_142d466a0(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_142e64ca0();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x188);
      lVar2 = (longlong)*(int *)(lVar2 + 400) * 0x70 + lVar3;
      for (; lVar3 != lVar2; lVar3 = lVar3 + 0x70) {
        FUN_142d46710(lVar3);
      }
    }
  }
  return;
}



// FUNCTION 142d46710 FUN_142d46710 body=159 status=ok
// SIG undefined FUN_142d46710(void)

void FUN_142d46710(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  cVar2 = FUN_142d52a00(param_1 + 0x58);
  if (cVar2 == '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0x50);
  }
  else {
    uVar3 = FUN_142d52a20(param_1 + 0x58);
    lVar4 = FArchive::operator<<(uVar3);
    uVar1 = *(undefined4 *)(lVar4 + 0x20);
  }
  FUN_142d48590(param_1,uVar1);
  lVar4 = *(longlong *)(param_1 + 0x18);
  lVar6 = (longlong)*(int *)(param_1 + 0x20) * 0x50 + lVar4;
  if (lVar4 != lVar6) {
    puVar5 = (undefined8 *)(lVar4 + 0x34);
    do {
      lVar4 = lVar4 + 0x50;
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0xffffffffffffffff;
      puVar5 = puVar5 + 10;
    } while (lVar4 != lVar6);
  }
  return;
}



// FUNCTION 142d467b0 FUN_142d467b0 body=98 status=ok
// SIG undefined FUN_142d467b0(void)

void FUN_142d467b0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_142e64ca0();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if ((lVar2 != 0) && (lVar2 = FUN_142d3b8e0(lVar2,param_2,param_3), lVar2 != 0)) {
      FUN_142d46710(lVar2);
    }
  }
  return;
}



// FUNCTION 142d46820 FUN_142d46820 body=161 status=ok
// SIG undefined FUN_142d46820(void)

void FUN_142d46820(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0xb220);
  if (param_3 < 0x33) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x390);
    pvVar1 = *(void **)((longlong)param_1 + 0xb220);
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
        *(void **)((longlong)param_1 + 0xb220) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x390);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0xb220) = uVar2;
  return;
}



// FUNCTION 142d468d0 ResizeGrow body=151 status=ok
// SIG undefined ResizeGrow(void)

void TArray<`UCombatUtil::ApplyHits'::`2'::FMergedHits,FDefaultAllocator>::ResizeGrow
               (longlong *param_1)

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
  uVar4 = FMemory::QuantizeSize(lVar3 * 0x170,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0x642c8590b21642c9) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 8);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0x170,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 142d46970 ResizeGrow body=138 status=ok
// SIG undefined ResizeGrow(void)

void TArray<Audio::FMixerSourceManager::FSourceInfo,TSizedDefaultAllocator<32>_>::ResizeGrow
               (longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar2 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x3b0,0);
  iVar4 = (int)(uVar3 / 0x3b0);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x3b0,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 142d46a00 FUN_142d46a00 body=297 status=ok
// SIG undefined FUN_142d46a00(void)

void FUN_142d46a00(void *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc08);
  if (uVar1 < 0x101) {
    uVar5 = 0x100;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0xc0c) != 0) || (4 < uVar1)) {
      lVar6 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar2 = FMemory::QuantizeSize(lVar6 * 0xc,0);
    uVar5 = (uint)(uVar2 / 0xc);
    if ((int)uVar5 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0xc0c) = uVar5;
  pvVar3 = *(void **)((longlong)param_1 + 0xc00);
  if (uVar5 < 0x101) {
    if (pvVar3 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar3,(longlong)param_2 * 0xc);
    pvVar3 = *(void **)((longlong)param_1 + 0xc00);
    if (pvVar3 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
      if (uVar5 != 0) {
        pvVar3 = (void *)FMemory::Realloc(0,(longlong)(int)uVar5 * 0xc,0);
        *(void **)((longlong)param_1 + 0xc00) = pvVar3;
      }
      _guard_xfg_dispatch_icall_nop(pvVar3,param_1,(longlong)param_2 * 0xc);
      return;
    }
    lVar6 = (longlong)(int)uVar5 * 0xc;
  }
  uVar4 = FMemory::Realloc(pvVar3,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0xc00) = uVar4;
  return;
}



// FUNCTION 142d46b30 FUN_142d46b30 body=156 status=ok
// SIG undefined FUN_142d46b30(void)

void FUN_142d46b30(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0xb228);
  if (uVar1 < 0x33) {
    iVar4 = 0x32;
  }
  else {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0xb22c) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0x390,0);
    iVar4 = (int)(uVar3 / 0x390);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0xb22c) = iVar4;
  FUN_142d46820(param_1,param_2,iVar4,0x390);
  return;
}



// FUNCTION 142d46bd0 FUN_142d46bd0 body=245 status=ok
// SIG undefined FUN_142d46bd0(void)

void FUN_142d46bd0(void *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x11) {
      uVar2 = 0x10;
    }
    else {
      uVar3 = FMemory::QuantizeSize((longlong)(int)param_2 << 5,0);
      uVar2 = (uint)(uVar3 >> 5);
      if ((int)uVar2 < (int)param_2) {
        uVar2 = 0x7fffffff;
      }
    }
  }
  if (uVar2 == *(uint *)((longlong)param_1 + 0x20c)) {
    return;
  }
  iVar1 = *(int *)((longlong)param_1 + 0x208);
  *(uint *)((longlong)param_1 + 0x20c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x200);
  if (uVar2 < 0x11) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)iVar1 << 5);
    pvVar4 = *(void **)((longlong)param_1 + 0x200);
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
        *(void **)((longlong)param_1 + 0x200) = pvVar4;
      }
      _guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)iVar1 << 5);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 5;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x200) = uVar5;
  return;
}



// FUNCTION 142d46cd0 FUN_142d46cd0 body=126 status=ok
// SIG undefined FUN_142d46cd0(void)

void FUN_142d46cd0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x33) {
      iVar2 = 0x32;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x390,0);
      iVar2 = (int)(uVar1 / 0x390);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 0xb22c)) {
    *(int *)(param_1 + 0xb22c) = iVar2;
    FUN_142d46820(param_1,*(undefined4 *)(param_1 + 0xb228),iVar2,0x390);
  }
  return;
}



// FUNCTION 142d46d50 FUN_142d46d50 body=273 status=ok
// SIG undefined FUN_142d46d50(void)

void FUN_142d46d50(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_38;
  longlong local_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  *param_3 = 0;
  *param_4 = 0;
  if ((*param_2 != 0) &&
     (((lVar3 = UObject::FindFunction(param_1,*param_2), lVar3 != 0 ||
       ((param_1 = *(longlong *)(param_1 + 0x118), param_1 != 0 &&
        (lVar3 = UObject::FindFunction(param_1,*param_2), lVar3 != 0)))) &&
      (*(char *)(lVar3 + 0x8c) == '\x01')))) {
    local_30 = *(longlong *)(lVar3 + 0x38);
    local_28 = 0xffffffff;
    local_24 = 0x101;
    local_22 = 0;
    local_38 = lVar3;
    FUN_140472e10(&local_38);
    lVar2 = local_30;
    if (local_30 != 0) {
      lVar4 = UStructProperty::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (((bVar1) && (*(longlong *)(lVar2 + 0x70) != 0)) &&
         (lVar4 = FBoneSocketTarget::StaticStruct(), *(longlong *)(lVar2 + 0x70) == lVar4)) {
        *param_3 = param_1;
        *param_4 = lVar3;
      }
    }
  }
  return;
}



// FUNCTION 142d46e70 FUN_142d46e70 body=355 status=ok
// SIG undefined FUN_142d46e70(void)

longlong FUN_142d46e70(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 local_res8;
  
  if ((param_1 == 0) || (lVar3 = FUN_142d1ab50(), lVar3 == 0)) {
    return 0;
  }
  if ((param_2 == 0) ||
     (plVar4 = (longlong *)FUN_142d3b9a0(lVar3,param_2), plVar4 == (longlong *)0x0)) {
    local_res8 = 0;
    if (param_3 == 0) {
      plVar4 = (longlong *)FUN_142d39490(lVar3,&local_res8,param_2);
      param_3 = *plVar4;
    }
    plVar6 = *(longlong **)(lVar3 + 0x188);
    plVar7 = plVar6 + (longlong)*(int *)(lVar3 + 400) * 0xe;
    for (plVar4 = plVar6; plVar4 != plVar7; plVar4 = plVar4 + 0xe) {
      lVar2 = *plVar4;
      if (lVar2 != 0) {
        plVar5 = *(longlong **)(lVar2 + 0x38);
        plVar1 = plVar5 + *(int *)(lVar2 + 0x40);
        for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
          if (*plVar5 == param_3) goto LAB_142d46f49;
        }
      }
    }
    plVar4 = (longlong *)0x0;
LAB_142d46f49:
    if (plVar4 == (longlong *)0x0) {
      if (plVar6 != plVar7) {
        do {
          if (*plVar6 == *(longlong *)(lVar3 + 0x180)) goto LAB_142d46f70;
          plVar6 = plVar6 + 0xe;
        } while (plVar6 != plVar7);
      }
      plVar6 = (longlong *)0x0;
LAB_142d46f70:
      plVar4 = plVar6;
      if (plVar6 == (longlong *)0x0) {
        return 0;
      }
    }
  }
  return *plVar4;
}



// FUNCTION 142d46fe0 FUN_142d46fe0 body=98 status=ok
// SIG undefined FUN_142d46fe0(void)

longlong FUN_142d46fe0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = FUN_1429d7ab0();
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
      != lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return param_1;
  }
  lVar2 = FUN_140a63ba0(param_1);
  return lVar2;
}



// FUNCTION 142d47050 FUN_142d47050 body=584 status=ok
// SIG undefined FUN_142d47050(void)

longlong * FUN_142d47050(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_68;
  int local_60;
  code *local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined8 local_40;
  code *local_38;
  undefined8 uStack_30;
  
  if ((param_1 == 0) || (lVar5 = FUN_142d37b90(), lVar5 == 0)) {
    return (longlong *)0x0;
  }
  plVar6 = (longlong *)UGameplayTask::NewTask<UGameplayTask_SpawnActor>(lVar5,0);
  if (plVar6 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  local_38 = FUN_142d3fe40;
  uStack_30 = (longlong *)((ulonglong)uStack_30._4_4_ << 0x20);
  local_68 = (longlong *)0x0;
  plVar7 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_60 = 3;
  local_68 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_144089920;
    FWeakObjectPtr::operator=(plVar7 + 1,plVar6);
    plVar7[2] = (longlong)local_38;
    plVar7[3] = (longlong)uStack_30;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar5;
    *plVar7 = (longlong)&PTR_FUN_144089968;
  }
  local_48 = 0;
  local_40 = 0;
  FUN_142d35ac0(param_2,&local_58,param_1,0,&local_48);
  plVar7 = plStack_50;
  local_38 = local_58;
  uStack_30 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
    UNLOCK();
  }
  uVar4 = 0xffffffff;
  if ((local_58 != (code *)0x0) &&
     (lVar5 = UBehaviorTreeManager::GetCurrent(*(undefined8 *)(local_58 + 0x58)), uVar4 = 0xffffffff
     , lVar5 != 0)) {
    uVar4 = FUN_142bf0fc0(lVar5,&local_38,&local_68);
  }
  plVar3 = uStack_30;
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    plVar7 = uStack_30 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    plVar7 = plStack_50;
    if ((int)lVar5 == 1) {
      (**(code **)*uStack_30)(uStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar7 = plStack_50;
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
        plVar7 = plStack_50;
      }
    }
  }
  plVar3 = plStack_50;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar7 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  *(undefined4 *)(plVar6 + 0x11) = uVar4;
  if (local_60 != 0) {
    if (local_68 == (longlong *)0x0) goto LAB_142d4725a;
    (**(code **)(*local_68 + 0x28))(local_68,0);
    if (local_68 != (longlong *)0x0) {
      local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
    }
    local_60 = 0;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
LAB_142d4725a:
  if ((int)plVar6[0x11] < 0) {
    (**(code **)(*plVar6 + 0x298))(plVar6);
    plVar6 = (longlong *)0x0;
  }
  return plVar6;
}



// FUNCTION 142d472a0 FUN_142d472a0 body=508 status=ok
// SIG undefined FUN_142d472a0(void)

undefined8 FUN_142d472a0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong *local_38;
  longlong *local_30;
  
  uVar11 = 0;
  FUN_142d36930(param_2,&local_38,param_1);
  if (local_38 != (longlong *)0x0) {
    lVar4 = UEnvQueryItemType_ActorBase::GetPrivateStaticClass();
    if (local_38[2] != 0) {
      lVar5 = UEnvQueryItemType::GetPrivateStaticClass();
      lVar6 = local_38[2];
      for (lVar9 = lVar6; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
        if (lVar9 == lVar5) goto joined_r0x000142d4730b;
      }
    }
    lVar6 = 0;
joined_r0x000142d4730b:
    do {
      if (lVar6 == 0) break;
      if (lVar6 == lVar4) {
        if (0 < (int)local_38[1]) {
          if (local_38[2] == 0) goto LAB_142d4735e;
          plVar7 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
          plVar8 = (longlong *)local_38[2];
          plVar10 = plVar8;
          goto joined_r0x000142d4734c;
        }
        break;
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while( true );
  }
  goto LAB_142d4744a;
joined_r0x000142d4734c:
  if (plVar10 == (longlong *)0x0) goto LAB_142d4735e;
  if (plVar10 == plVar7) goto LAB_142d47360;
  plVar10 = (longlong *)plVar10[6];
  goto joined_r0x000142d4734c;
LAB_142d4735e:
  plVar8 = (longlong *)0x0;
LAB_142d47360:
  plVar10 = (longlong *)plVar8[0x1f];
  if (plVar10 == (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x368))(plVar8);
    plVar10 = (longlong *)plVar8[0x1f];
    if (plVar10 == (longlong *)0x0) goto LAB_142d4744a;
  }
  cVar3 = *(char *)((longlong)local_38 + 0x3c);
  if ((cVar3 == '\0') && (*(int *)((longlong)param_3 + 0xc) < (int)param_3[1] + (int)local_38[1])) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_3);
  }
  lVar9 = *local_38;
  lVar6 = local_38[3];
  lVar4 = lVar9 + (longlong)(int)local_38[1] * 0xc;
  for (; lVar9 != lVar4; lVar9 = lVar9 + 0xc) {
    iVar2 = *(int *)(lVar9 + 4) * 2;
    if (((-1 < iVar2) && (-1 < *(int *)(lVar9 + 4))) &&
       (lVar5 = (**(code **)(*plVar10 + 0x2a8))(plVar10,((longlong)iVar2 >> 1) + lVar6), lVar5 != 0)
       ) {
      iVar2 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
      }
      uVar11 = 1;
      *(longlong *)(*param_3 + (longlong)iVar2 * 8) = lVar5;
      if (cVar3 != '\0') break;
    }
  }
LAB_142d4744a:
  plVar8 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_30 + 1;
    lVar4 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return uVar11;
}



// FUNCTION 142d474a0 FUN_142d474a0 body=676 status=ok
// SIG undefined FUN_142d474a0(void)

undefined8 FUN_142d474a0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  float local_58;
  float fStack_54;
  float local_50;
  longlong *local_48;
  longlong *local_40;
  
  uVar10 = 0;
  FUN_142d36930(param_2,&local_48,param_1);
  if (local_48 != (longlong *)0x0) {
    lVar4 = UEnvQueryItemType_VectorBase::GetPrivateStaticClass();
    if (local_48[2] != 0) {
      lVar5 = UEnvQueryItemType::GetPrivateStaticClass();
      lVar6 = local_48[2];
      for (lVar9 = lVar6; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
        if (lVar9 == lVar5) goto joined_r0x000142d47513;
      }
    }
    lVar6 = 0;
joined_r0x000142d47513:
    do {
      if (lVar6 == 0) break;
      if (lVar6 == lVar4) {
        if (0 < (int)local_48[1]) {
          if (local_48[2] == 0) goto LAB_142d4756e;
          plVar7 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
          plVar8 = (longlong *)local_48[2];
          plVar11 = plVar8;
          goto joined_r0x000142d4755b;
        }
        break;
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while( true );
  }
  goto LAB_142d476f0;
joined_r0x000142d4755b:
  if (plVar11 == (longlong *)0x0) goto LAB_142d4756e;
  if (plVar11 == plVar7) goto LAB_142d47570;
  plVar11 = (longlong *)plVar11[6];
  goto joined_r0x000142d4755b;
LAB_142d4756e:
  plVar8 = (longlong *)0x0;
LAB_142d47570:
  plVar11 = (longlong *)plVar8[0x1f];
  if (plVar11 == (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x368))(plVar8);
    plVar11 = (longlong *)plVar8[0x1f];
    if (plVar11 == (longlong *)0x0) goto LAB_142d476f0;
  }
  cVar3 = *(char *)((longlong)local_48 + 0x3c);
  if ((cVar3 == '\0') && (*(int *)((longlong)param_3 + 0xc) < (int)param_3[1] + (int)local_48[1])) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_3);
  }
  lVar9 = *local_48;
  lVar6 = local_48[3];
  lVar4 = lVar9 + (longlong)(int)local_48[1] * 0xc;
  for (; lVar9 != lVar4; lVar9 = lVar9 + 0xc) {
    iVar2 = *(int *)(lVar9 + 4) * 2;
    if (((((-1 < iVar2) && (-1 < *(int *)(lVar9 + 4))) &&
         ((**(code **)(*plVar11 + 0x298))(plVar11,&local_58,((longlong)iVar2 >> 1) + lVar6),
         -(float)DAT_1466ad3c0 < local_58)) &&
        ((local_58 < (float)DAT_1466ad3c0 && (-DAT_1466ad3c0._4_4_ < fStack_54)))) &&
       ((fStack_54 < DAT_1466ad3c0._4_4_ &&
        ((-DAT_1466ad3c8 < local_50 && (local_50 < DAT_1466ad3c8)))))) {
      iVar2 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
      }
      lVar5 = *param_3;
      uVar10 = 1;
      *(ulonglong *)(lVar5 + (longlong)iVar2 * 0xc) = CONCAT44(fStack_54,local_58);
      *(float *)(lVar5 + 8 + (longlong)iVar2 * 0xc) = local_50;
      if (cVar3 != '\0') break;
    }
  }
LAB_142d476f0:
  plVar8 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_40 + 1;
    lVar4 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return uVar10;
}



// FUNCTION 142d47750 FUN_142d47750 body=418 status=ok
// SIG undefined FUN_142d47750(void)

undefined8 FUN_142d47750(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *local_18;
  longlong *local_10;
  
  FUN_142d36930(param_2,&local_18,param_1);
  if (local_18 != (longlong *)0x0) {
    lVar3 = UEnvQueryItemType_ActorBase::GetPrivateStaticClass();
    if (local_18[2] != 0) {
      lVar4 = UEnvQueryItemType::GetPrivateStaticClass();
      lVar6 = local_18[2];
      for (lVar8 = lVar6; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
        if (lVar8 == lVar4) goto joined_r0x000142d477c3;
      }
    }
    lVar6 = 0;
joined_r0x000142d477c3:
    do {
      if (lVar6 == 0) break;
      if (lVar6 == lVar3) {
        if (0 < (int)local_18[1]) {
          if (local_18[2] == 0) goto LAB_142d47865;
          plVar5 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
          plVar7 = (longlong *)local_18[2];
          plVar10 = plVar7;
          goto joined_r0x000142d47855;
        }
        break;
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while( true );
  }
  goto LAB_142d477d3;
joined_r0x000142d47855:
  if (plVar10 == (longlong *)0x0) goto LAB_142d47865;
  if (plVar10 == plVar5) goto LAB_142d47867;
  plVar10 = (longlong *)plVar10[6];
  goto joined_r0x000142d47855;
LAB_142d47865:
  plVar7 = (longlong *)0x0;
LAB_142d47867:
  plVar10 = (longlong *)plVar7[0x1f];
  if (plVar10 == (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    plVar10 = (longlong *)plVar7[0x1f];
    if (plVar10 == (longlong *)0x0) goto LAB_142d477d3;
  }
  lVar8 = *local_18;
  lVar6 = local_18[3];
  lVar3 = lVar8 + (longlong)(int)local_18[1] * 0xc;
  for (; lVar8 != lVar3; lVar8 = lVar8 + 0xc) {
    iVar2 = *(int *)(lVar8 + 4) * 2;
    if (((-1 < iVar2) && (-1 < *(int *)(lVar8 + 4))) &&
       (lVar4 = (**(code **)(*plVar10 + 0x2a8))(plVar10,((longlong)iVar2 >> 1) + lVar6), lVar4 != 0)
       ) {
      uVar9 = 1;
      goto LAB_142d477d8;
    }
  }
LAB_142d477d3:
  uVar9 = 0;
  lVar4 = 0;
LAB_142d477d8:
  plVar7 = local_10;
  *param_3 = lVar4;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_10 + 1;
    lVar3 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return uVar9;
}



// FUNCTION 142d47900 FUN_142d47900 body=569 status=ok
// SIG undefined FUN_142d47900(void)

undefined8 FUN_142d47900(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  float local_38;
  float fStack_34;
  float local_30;
  longlong *local_28;
  longlong *local_20;
  
  FUN_142d36930(param_2,&local_28,param_1);
  if (local_28 != (longlong *)0x0) {
    lVar3 = UEnvQueryItemType_VectorBase::GetPrivateStaticClass();
    if (local_28[2] != 0) {
      lVar4 = UEnvQueryItemType::GetPrivateStaticClass();
      lVar6 = local_28[2];
      for (lVar8 = lVar6; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
        if (lVar8 == lVar4) goto joined_r0x000142d47973;
      }
    }
    lVar6 = 0;
joined_r0x000142d47973:
    do {
      if (lVar6 == 0) break;
      if (lVar6 == lVar3) {
        if (0 < (int)local_28[1]) {
          if (local_28[2] == 0) goto LAB_142d47a34;
          plVar5 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
          plVar7 = (longlong *)local_28[2];
          plVar9 = plVar7;
          goto joined_r0x000142d47a24;
        }
        break;
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while( true );
  }
  goto LAB_142d47987;
joined_r0x000142d47a24:
  if (plVar9 == (longlong *)0x0) goto LAB_142d47a34;
  if (plVar9 == plVar5) goto LAB_142d47a36;
  plVar9 = (longlong *)plVar9[6];
  goto joined_r0x000142d47a24;
LAB_142d47a34:
  plVar7 = (longlong *)0x0;
LAB_142d47a36:
  plVar9 = (longlong *)plVar7[0x1f];
  if (plVar9 == (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    plVar9 = (longlong *)plVar7[0x1f];
    if (plVar9 == (longlong *)0x0) goto LAB_142d47987;
  }
  lVar8 = *local_28;
  lVar6 = local_28[3];
  lVar3 = lVar8 + (longlong)(int)local_28[1] * 0xc;
  for (; lVar8 != lVar3; lVar8 = lVar8 + 0xc) {
    iVar2 = *(int *)(lVar8 + 4) * 2;
    if (((((-1 < iVar2) && (-1 < *(int *)(lVar8 + 4))) &&
         ((**(code **)(*plVar9 + 0x298))(plVar9,&local_38,((longlong)iVar2 >> 1) + lVar6),
         -(float)DAT_1466ad3c0 < local_38)) &&
        ((local_38 < (float)DAT_1466ad3c0 && (-DAT_1466ad3c0._4_4_ < fStack_34)))) &&
       ((fStack_34 < DAT_1466ad3c0._4_4_ &&
        ((-DAT_1466ad3c8 < local_30 && (local_30 < DAT_1466ad3c8)))))) {
      uVar10 = 1;
      *param_3 = CONCAT44(fStack_34,local_38);
      goto LAB_142d4799d;
    }
  }
LAB_142d47987:
  uVar10 = 0;
  *param_3 = CONCAT44(DAT_1466ad3c0._4_4_,(float)DAT_1466ad3c0);
  local_30 = DAT_1466ad3c8;
LAB_142d4799d:
  plVar7 = local_20;
  *(float *)(param_3 + 1) = local_30;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_20 + 1;
    lVar3 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return uVar10;
}



// FUNCTION 142d47b40 FUN_142d47b40 body=654 status=ok
// SIG undefined FUN_142d47b40(void)

longlong * FUN_142d47b40(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *local_68;
  int local_60;
  code *local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined8 local_40;
  code *local_38;
  undefined8 uStack_30;
  
  if ((param_1 == 0) || (lVar6 = FUN_142d37b90(), lVar6 == 0)) {
    return (longlong *)0x0;
  }
  plVar7 = (longlong *)UGameplayTask::NewTask<UGameplayTask_SpawnActor>(lVar6,0);
  if (plVar7 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  local_38 = FUN_142d3fe40;
  uStack_30 = (longlong *)((ulonglong)uStack_30._4_4_ << 0x20);
  local_68 = (longlong *)0x0;
  plVar8 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_60 = 3;
  local_68 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&PTR_FUN_144089920;
    FWeakObjectPtr::operator=(plVar8 + 1,plVar7);
    plVar8[2] = (longlong)local_38;
    plVar8[3] = (longlong)uStack_30;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar8[5] = lVar6;
    *plVar8 = (longlong)&PTR_FUN_144089968;
  }
  local_48 = 0;
  local_40 = 0;
  uVar5 = 0xffffffff;
  FUN_142d35ac0(param_2,&local_58,param_1,1,&local_48);
  pcVar3 = local_58;
  plVar8 = plStack_50;
  if (local_58 != (code *)0x0) {
    uVar9 = UEnvQueryItemType_Actor::GetPrivateStaticClass();
    FUN_142bede50(pcVar3,uVar9,1,0);
    FUN_140747080(pcVar3,param_3);
    FUN_142be2a50(pcVar3);
    plVar8 = plStack_50;
    local_38 = local_58;
    uStack_30 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
    }
    if ((local_58 != (code *)0x0) &&
       (lVar6 = UBehaviorTreeManager::GetCurrent(*(undefined8 *)(local_58 + 0x58)),
       uVar5 = 0xffffffff, lVar6 != 0)) {
      uVar5 = FUN_142bf0fc0(lVar6,&local_38,&local_68);
    }
    plVar4 = uStack_30;
    if (uStack_30 != (longlong *)0x0) {
      LOCK();
      plVar8 = uStack_30 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      plVar8 = plStack_50;
      if ((int)lVar6 == 1) {
        (**(code **)*uStack_30)(uStack_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar8 = plStack_50;
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
          plVar8 = plStack_50;
        }
      }
    }
  }
  plVar4 = plStack_50;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar8 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  *(undefined4 *)(plVar7 + 0x11) = uVar5;
  if (local_60 != 0) {
    if (local_68 == (longlong *)0x0) goto LAB_142d47d8f;
    (**(code **)(*local_68 + 0x28))(local_68,0);
    if (local_68 != (longlong *)0x0) {
      local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
    }
    local_60 = 0;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
LAB_142d47d8f:
  if ((int)plVar7[0x11] < 0) {
    (**(code **)(*plVar7 + 0x298))(plVar7);
    plVar7 = (longlong *)0x0;
  }
  return plVar7;
}



// FUNCTION 142d47dd0 FUN_142d47dd0 body=707 status=ok
// SIG undefined FUN_142d47dd0(void)

longlong * FUN_142d47dd0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *local_98;
  int local_90;
  code *local_88;
  longlong *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  code *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  code *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  if ((param_1 == 0) || (lVar6 = FUN_142d37b90(), lVar6 == 0)) {
    return (longlong *)0x0;
  }
  plVar7 = (longlong *)UGameplayTask::NewTask<UGameplayTask_SpawnActor>(lVar6,0);
  if (plVar7 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  local_68 = FUN_142d3fe40;
  uStack_60 = (longlong *)((ulonglong)uStack_60._4_4_ << 0x20);
  local_98 = (longlong *)0x0;
  plVar8 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_90 = 3;
  local_98 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&PTR_FUN_144089920;
    FWeakObjectPtr::operator=(plVar8 + 1,plVar7);
    plVar8[2] = (longlong)local_68;
    plVar8[3] = (longlong)uStack_60;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar8[5] = lVar6;
    *plVar8 = (longlong)&PTR_FUN_144089968;
  }
  local_78 = 0;
  local_70 = 0;
  uVar5 = 0xffffffff;
  FUN_142d35ac0(param_2,&local_88,param_1,1,&local_78);
  pcVar3 = local_88;
  plVar8 = plStack_80;
  if (local_88 != (code *)0x0) {
    uVar9 = UEnvQueryItemType_Point::GetPrivateStaticClass();
    FUN_142bede50(pcVar3,uVar9,1,0);
    uStack_40 = *(undefined4 *)(param_3 + 1);
    local_68 = (code *)*param_3;
    local_58 = 0;
    uStack_60 = (longlong *)CONCAT44(uStack_60._4_4_,uStack_40);
    uStack_3c = uStack_60._4_4_;
    local_38 = 0;
    local_48 = local_68;
    FUN_142bf6df0(pcVar3,&local_48);
    FUN_142be2a50(pcVar3);
    plVar8 = plStack_80;
    local_68 = local_88;
    uStack_60 = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
      UNLOCK();
    }
    if ((local_88 != (code *)0x0) &&
       (lVar6 = UBehaviorTreeManager::GetCurrent(*(undefined8 *)(local_88 + 0x58)),
       uVar5 = 0xffffffff, lVar6 != 0)) {
      uVar5 = FUN_142bf0fc0(lVar6,&local_68,&local_98);
    }
    plVar4 = uStack_60;
    if (uStack_60 != (longlong *)0x0) {
      LOCK();
      plVar8 = uStack_60 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      plVar8 = plStack_80;
      if ((int)lVar6 == 1) {
        (**(code **)*uStack_60)(uStack_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar8 = plStack_80;
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
          plVar8 = plStack_80;
        }
      }
    }
  }
  plVar4 = plStack_80;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar8 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_80 + 8))(plStack_80,1);
      }
    }
  }
  *(undefined4 *)(plVar7 + 0x11) = uVar5;
  if (local_90 != 0) {
    if (local_98 == (longlong *)0x0) goto LAB_142d4804d;
    (**(code **)(*local_98 + 0x28))(local_98,0);
    if (local_98 != (longlong *)0x0) {
      local_98 = (longlong *)FMemory::Realloc(local_98,0,0);
    }
    local_90 = 0;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
LAB_142d4804d:
  if ((int)plVar7[0x11] < 0) {
    (**(code **)(*plVar7 + 0x298))(plVar7);
    plVar7 = (longlong *)0x0;
  }
  return plVar7;
}



// FUNCTION 142d480a0 FUN_142d480a0 body=548 status=ok
// SIG undefined FUN_142d480a0(void)

float * FUN_142d480a0(longlong param_1,float param_2,float *param_3)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(char *)(param_1 + 0x59) != '\0') {
    *(byte *)(param_1 + 0xe0) = *(byte *)(param_1 + 0xe0) & 0xfc;
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0x80);
    *(float *)(param_1 + 0xb0) = param_2;
    *(byte *)(param_1 + 0xe0) =
         *(byte *)(param_1 + 0xe0) |
         (*(byte *)(param_1 + 0x48) & 1) * '\x02' | *(byte *)(param_1 + 0x68) & 1;
    *(undefined1 *)(param_1 + 0xe4) = *(undefined1 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0x54);
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0x60);
    return (float *)(param_1 + 0xb0);
  }
  pfVar5 = (float *)0x0;
  if (param_3 != (float *)0x0) {
    pfVar2 = (float *)UDamageType::GetPrivateStaticClass();
    pfVar6 = param_3;
    do {
      if (pfVar6 == pfVar2) {
        plVar7 = *(longlong **)(param_1 + 0x38);
        plVar8 = plVar7 + (longlong)*(int *)(param_1 + 0x40) * 2;
        goto joined_r0x000142d48221;
      }
      pfVar6 = *(float **)(pfVar6 + 0xc);
    } while (pfVar6 != (float *)0x0);
  }
LAB_142d4819e:
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 == 0) {
LAB_142d4829c:
    pfVar6 = (float *)&DAT_146b31f80;
  }
  else {
    pfVar6 = *(float **)(lVar1 + 0x30);
    pfVar2 = pfVar6 + (longlong)*(int *)(lVar1 + 0x38) * 0x14;
    for (; pfVar6 != pfVar2; pfVar6 = pfVar6 + 0x14) {
      if ((pfVar5 == (float *)0x0) || (ABS(*pfVar6 - param_2) <= ABS(*pfVar5 - param_2))) {
        pfVar5 = pfVar6;
      }
    }
    pfVar6 = (float *)&DAT_146b31f80;
    if (pfVar5 != (float *)0x0) {
      pfVar6 = pfVar5;
    }
  }
  return pfVar6;
joined_r0x000142d48221:
  if (plVar7 == plVar8) goto LAB_142d4819e;
  pfVar6 = pfVar5;
  if (*plVar7 != 0) {
    pfVar3 = (float *)UDamageType::GetPrivateStaticClass();
    for (pfVar2 = (float *)*plVar7;
        (pfVar6 = pfVar5, pfVar2 != (float *)0x0 && (pfVar6 = (float *)*plVar7, pfVar2 != pfVar3));
        pfVar2 = *(float **)(pfVar2 + 0xc)) {
    }
  }
  pfVar3 = (float *)UDamageType::GetPrivateStaticClass();
  pfVar2 = param_3;
  do {
    pfVar4 = param_3;
    if (pfVar2 == pfVar3) break;
    pfVar2 = *(float **)(pfVar2 + 0xc);
    pfVar4 = pfVar5;
  } while (pfVar2 != (float *)0x0);
  if (pfVar6 == pfVar4) {
    if (plVar7[1] != 0) {
      pfVar5 = (float *)FUN_142d3a060(plVar7[1],param_2);
      return pfVar5;
    }
    goto LAB_142d4829c;
  }
  plVar7 = plVar7 + 2;
  goto joined_r0x000142d48221;
}



// FUNCTION 142d482d0 FUN_142d482d0 body=26 status=ok
// SIG undefined FUN_142d482d0(void)

undefined1 FUN_142d482d0(undefined8 param_1,undefined8 param_2)

{
  FArchive::UsingCustomVersion(param_2,&DAT_1466ad3d0);
  return 0;
}



// FUNCTION 142d482f0 FUN_142d482f0 body=442 status=ok
// SIG undefined FUN_142d482f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d482f0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  int *piVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  plVar11 = (longlong *)*param_3;
  if (plVar11 != (longlong *)0x0) {
    iVar3 = (int)plVar11[1];
    if (((1 < iVar3) && ((int)plVar11[5] != 3)) && ((int)plVar11[5] != 0)) {
      if (*(char *)((longlong)plVar11 + 0x3d) != '\0') {
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
        return;
      }
      uVar10 = 0;
      if ((*(int *)(param_2 + 900) != -1) && (0 < iVar3)) {
        piVar7 = (int *)(*plVar11 + 4);
        uVar6 = uVar10;
        uVar9 = uVar10;
        do {
          iVar8 = (int)uVar9;
          if (*piVar7 * 2 >> 1 == *(int *)(param_2 + 900)) {
            if ((-1 < *(int *)(*plVar11 + 4 + (longlong)iVar8 * 0xc)) && (iVar8 != -1))
            goto LAB_142d48408;
            break;
          }
          uVar9 = (ulonglong)(iVar8 + 1);
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 3;
        } while ((longlong)uVar6 < (longlong)iVar3);
      }
      if ((*(int *)(param_2 + 0x380) == -1) || (iVar3 < 1)) {
LAB_142d4844e:
        plVar11 = (longlong *)param_3[1];
      }
      else {
        piVar7 = (int *)(*plVar11 + 4);
        uVar6 = uVar10;
        do {
          iVar8 = (int)uVar10;
          if (*piVar7 * 2 >> 1 == *(int *)(param_2 + 0x380)) {
            if (-1 < *(int *)(*plVar11 + 4 + (longlong)iVar8 * 0xc)) {
LAB_142d48408:
              if ((0 < iVar8) && (iVar8 < iVar3)) {
                puVar4 = (undefined8 *)*plVar11;
                puVar2 = (undefined8 *)((longlong)puVar4 + (longlong)iVar8 * 0xc);
                if (puVar4 != puVar2) {
                  local_38 = *puVar4;
                  local_30 = *(undefined4 *)(puVar4 + 1);
                  *puVar4 = *puVar2;
                  *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar2 + 1);
                  *puVar2 = local_38;
                  *(undefined4 *)(puVar2 + 1) = local_30;
                }
              }
            }
            goto LAB_142d4844e;
          }
          uVar10 = (ulonglong)(iVar8 + 1);
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 3;
        } while ((longlong)uVar6 < (longlong)iVar3);
        plVar11 = (longlong *)param_3[1];
      }
      goto LAB_142d48462;
    }
  }
  plVar11 = (longlong *)param_3[1];
LAB_142d48462:
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar11 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar7 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  return;
}



// FUNCTION 142d484b0 FUN_142d484b0 body=209 status=ok
// SIG undefined FUN_142d484b0(void)

void FUN_142d484b0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x7540);
    uVar3 = FUN_142e107c0();
    *param_1 = uVar3;
    iVar2 = *(int *)(param_2 + 0x7540) * 0x390;
    iVar1 = *(int *)(param_1 + 3);
    if (iVar1 < iVar2) {
      *(int *)(param_1 + 3) = iVar2;
      if (*(int *)((longlong)param_1 + 0x1c) < iVar2) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar1);
      }
    }
    else if ((iVar2 < iVar1) && (iVar2 != iVar1)) {
      *(int *)(param_1 + 3) = iVar2;
      TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_1 + 2);
    }
    lVar6 = param_1[2];
    lVar4 = *(longlong *)(param_2 + 0x7538);
    if (*(longlong *)(param_2 + 0x7538) == 0) {
      lVar4 = param_2 + 0x338;
    }
    lVar5 = (longlong)*(int *)(param_2 + 0x7540) * 0x390 + lVar4;
    for (; lVar4 != lVar5; lVar4 = lVar4 + 0x390) {
      FUN_142cb3d70(lVar6,lVar4);
      lVar6 = lVar6 + 0x390;
    }
  }
  return;
}



// FUNCTION 142d48590 FUN_142d48590 body=118 status=ok
// SIG undefined FUN_142d48590(void)

void FUN_142d48590(longlong param_1,float param_2)

{
  undefined8 uVar1;
  char cVar2;
  float fVar3;
  
  cVar2 = FUN_142d52a00(param_1 + 0x58);
  if (cVar2 != '\0') {
    uVar1 = FUN_142d52a20(param_1 + 0x58);
    uVar1 = FArchive::operator<<(uVar1);
    FUN_142d6f560(uVar1,param_2,1);
    return;
  }
  fVar3 = 0.0;
  if ((0.0 <= param_2) &&
     (fVar3 = *(float *)(param_1 + 0x50), param_2 <= *(float *)(param_1 + 0x50))) {
    fVar3 = param_2;
  }
  *(float *)(param_1 + 0x54) = fVar3;
  return;
}



// FUNCTION 142d48610 FUN_142d48610 body=4 status=ok
// SIG undefined FUN_142d48610(void)

void FUN_142d48610(longlong param_1,byte param_2)

{
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | param_2;
  return;
}



// FUNCTION 142d48620 FUN_142d48620 body=114 status=ok
// SIG undefined FUN_142d48620(void)

void FUN_142d48620(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x50) = param_2;
  if (lVar1 != 0) {
    lVar3 = FUN_142a2f930();
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
      *(longlong *)(param_1 + 0x48) = lVar1;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



// FUNCTION 142d486a0 FUN_142d486a0 body=29 status=ok
// SIG undefined FUN_142d486a0(void)

void FUN_142d486a0(longlong param_1,undefined8 *param_2)

{
  *(undefined1 *)(param_1 + 0x1c5) = 1;
  *(undefined8 *)(param_1 + 0x1c8) = *param_2;
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_2 + 1);
  return;
}



// FUNCTION 142d486c0 FUN_142d486c0 body=116 status=ok
// SIG undefined FUN_142d486c0(void)

void FUN_142d486c0(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  byte *pbVar2;
  undefined4 uVar3;
  
  if (param_2 != 0) {
    if ((param_1 == (longlong *)0x0) || (lVar1 = (**(code **)(*param_1 + 0x148))(), lVar1 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(lVar1 + 0x8c8);
    }
    pbVar2 = (byte *)FUN_142d3a910(param_2,param_3);
    if (pbVar2 != (byte *)0x0) {
      *pbVar2 = *pbVar2 | 3;
      *(undefined4 *)(pbVar2 + 4) = uVar3;
      *(undefined4 *)(pbVar2 + 8) = param_4;
    }
  }
  return;
}



// FUNCTION 142d48740 FUN_142d48740 body=150 status=ok
// SIG undefined FUN_142d48740(void)

void FUN_142d48740(longlong *param_1,longlong param_2,longlong param_3,byte param_4)

{
  longlong lVar1;
  byte *pbVar2;
  undefined4 uVar3;
  
  if (param_2 != 0) {
    if ((param_1 == (longlong *)0x0) || (lVar1 = (**(code **)(*param_1 + 0x148))(), lVar1 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(lVar1 + 0x8c8);
    }
    pbVar2 = (byte *)FUN_142d3a910(param_2,param_3);
    if ((pbVar2 != (byte *)0x0) && (param_3 != 0)) {
      if ((*pbVar2 & 1) != param_4) {
        *(undefined4 *)(pbVar2 + 4) = uVar3;
      }
      pbVar2[8] = 0;
      pbVar2[9] = 0;
      pbVar2[10] = 0;
      pbVar2[0xb] = 0;
      *pbVar2 = *pbVar2 & 0xfe | param_4 | 2;
    }
  }
  return;
}



// FUNCTION 142d487e0 FUN_142d487e0 body=73 status=ok
// SIG undefined FUN_142d487e0(void)

void FUN_142d487e0(longlong *param_1,byte *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      uVar2 = *(undefined4 *)(lVar1 + 0x8c8);
      goto LAB_142d48811;
    }
  }
  uVar2 = 0;
LAB_142d48811:
  *param_2 = *param_2 | 3;
  *(undefined4 *)(param_2 + 8) = param_3;
  *(undefined4 *)(param_2 + 4) = uVar2;
  return;
}



// FUNCTION 142d48830 FUN_142d48830 body=96 status=ok
// SIG undefined FUN_142d48830(void)

void FUN_142d48830(longlong *param_1,byte *param_2,byte param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      uVar2 = *(undefined4 *)(lVar1 + 0x8c8);
      goto LAB_142d48861;
    }
  }
  uVar2 = 0;
LAB_142d48861:
  if ((*param_2 & 1) != param_3) {
    *(undefined4 *)(param_2 + 4) = uVar2;
  }
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *param_2 = *param_2 & 0xfe | param_3 | 2;
  return;
}



// FUNCTION 142d48890 FUN_142d48890 body=86 status=ok
// SIG undefined FUN_142d48890(void)

void FUN_142d48890(longlong *param_1)

{
  longlong lVar1;
  
  if (((longlong *)*param_1 != (longlong *)0x0) && ((char)param_1[0x75] != '\x01')) {
    *(undefined1 *)(param_1 + 0x75) = 1;
    lVar1 = (**(code **)(*(longlong *)*param_1 + 0x148))();
    if (lVar1 != 0) {
      *(undefined4 *)((longlong)param_1 + 0x3a4) = *(undefined4 *)(lVar1 + 0x8c8);
      return;
    }
    *(undefined4 *)((longlong)param_1 + 0x3a4) = 0;
  }
  return;
}



// FUNCTION 142d488f0 FUN_142d488f0 body=146 status=ok
// SIG undefined FUN_142d488f0(void)

undefined8
FUN_142d488f0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,char param_5)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_2;
  if (-1 < iVar1) {
    if ((-1 < param_2) && (iVar1 < *(int *)(param_1 + 0x40))) {
      lVar2 = (longlong)iVar1 * 0x3b0 + *(longlong *)(param_1 + 0x38);
      if ((*(int *)(lVar2 + 0x328) == iVar1) &&
         ((*(int *)(lVar2 + 0x32c) == (int)((ulonglong)param_2 >> 0x20) && (lVar2 != 0)))) {
        FUN_1406d8f00(lVar2 + 0xa8,param_3);
        FUN_1406da410(lVar2 + 0xc0,param_4);
        if (param_5 != '\0') {
          FUN_142d48890(lVar2);
        }
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142d48990 FUN_142d48990 body=111 status=ok
// SIG undefined FUN_142d48990(void)

void FUN_142d48990(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_2;
  if ((((((-1 < iVar1) && (-1 < param_2)) && (iVar1 < *(int *)(param_1 + 0x40))) &&
       ((lVar2 = *(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 0x3b0,
        *(int *)(lVar2 + 0x328) == iVar1 &&
        (*(int *)(lVar2 + 0x32c) == (int)((ulonglong)param_2 >> 0x20))))) &&
      ((lVar2 != 0 &&
       ((*(char *)(lVar2 + 0x310) != param_3 &&
        (*(char *)(lVar2 + 0x310) = param_3, param_3 != '\0')))))) &&
     (*(char *)(lVar2 + 0xd6) == '\0')) {
    *(undefined1 *)(lVar2 + 0x3a8) = 0;
  }
  return;
}



// FUNCTION 142d48a00 FUN_142d48a00 body=274 status=ok
// SIG undefined FUN_142d48a00(void)

void FUN_142d48a00(undefined8 param_1,char param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res20 [8];
  undefined4 uStack_c;
  
  iVar2 = FUN_14233f450();
  if ((iVar2 == 3) && (lVar3 = FUN_142d29780(param_3), lVar3 != 0)) {
    plVar1 = (longlong *)(lVar3 + 0x1e8);
    FUN_140483870(plVar1,param_1);
    if ((param_2 != '\0') &&
       (plVar4 = (longlong *)FMemory::Realloc(0,0x30), plVar4 != (longlong *)0x0)) {
      *plVar4 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar4 + 1,param_1);
      *(undefined4 *)(plVar4 + 2) = 0x406daf40;
      *(undefined4 *)((longlong)plVar4 + 0x14) = 1;
      *(undefined4 *)(plVar4 + 3) = 0;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_c;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[5] = lVar5;
      *plVar4 = (longlong)&PTR_FUN_143fcff08;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      (**(code **)(*plVar4 + 0x20))(plVar4,local_res20);
      iVar2 = *(int *)(lVar3 + 0x1f0);
      *(int *)(lVar3 + 0x1f0) = iVar2 + 1;
      if (*(int *)(lVar3 + 500) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar6 = plVar4;
      *(undefined4 *)(puVar6 + 1) = 3;
    }
  }
  return;
}



// FUNCTION 142d48b20 FUN_142d48b20 body=14 status=ok
// SIG undefined FUN_142d48b20(void)

void FUN_142d48b20(byte *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = *param_1 | 3;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



// FUNCTION 142d48b30 FUN_142d48b30 body=42 status=ok
// SIG undefined FUN_142d48b30(void)

void FUN_142d48b30(byte *param_1,undefined4 param_2,byte param_3,char param_4)

{
  if ((param_4 != '\0') || ((*param_1 & 1) != param_3)) {
    *(undefined4 *)(param_1 + 4) = param_2;
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = *param_1 & 0xfe | param_3 | 2;
  return;
}



// FUNCTION 142d48b60 thunk_FUN_142cb3d70 body=5 status=ok
// SIG undefined thunk_FUN_142cb3d70(void)

undefined4 * thunk_FUN_142cb3d70(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  puVar4 = (undefined8 *)(param_1 + 0x16);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar5 = (longlong)param_2 - (longlong)param_1;
  param_1[2] = param_2[2];
  lVar3 = 4;
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  do {
    *(undefined4 *)(puVar4 + -7) = *(undefined4 *)((longlong)puVar4 + lVar5 + -0x38);
    *(undefined4 *)((longlong)puVar4 + -0x34) = *(undefined4 *)(lVar5 + -0x34 + (longlong)puVar4);
    *(undefined4 *)(puVar4 + -6) = *(undefined4 *)(lVar5 + -0x30 + (longlong)puVar4);
    *(undefined8 *)((longlong)puVar4 + -0x2c) = *(undefined8 *)(lVar5 + -0x2c + (longlong)puVar4);
    *(undefined4 *)((longlong)puVar4 + -0x24) = *(undefined4 *)(lVar5 + -0x24 + (longlong)puVar4);
    puVar4[-4] = *(undefined8 *)(lVar5 + -0x20 + (longlong)puVar4);
    *(undefined4 *)(puVar4 + -3) = *(undefined4 *)(lVar5 + -0x18 + (longlong)puVar4);
    puVar4[-2] = *(undefined8 *)((longlong)puVar4 + lVar5 + -0x10);
    *(undefined1 *)(puVar4 + -1) = *(undefined1 *)((longlong)puVar4 + lVar5 + -8);
    *puVar4 = *(undefined8 *)(lVar5 + (longlong)puVar4);
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)((longlong)puVar4 + lVar5 + 8);
    *(uint *)((longlong)puVar4 + 0xc) =
         *(uint *)((longlong)puVar4 + 0xc) ^
         (*(uint *)((longlong)puVar4 + 0xc) ^ *(uint *)((longlong)puVar4 + lVar5 + 0xc)) & 1;
    uVar2 = (*(uint *)((longlong)puVar4 + 0xc) ^ *(uint *)((longlong)puVar4 + lVar5 + 0xc)) & 2 ^
            *(uint *)((longlong)puVar4 + 0xc);
    *(uint *)((longlong)puVar4 + 0xc) = uVar2;
    uVar2 = (uVar2 ^ *(uint *)((longlong)puVar4 + lVar5 + 0xc)) & 4 ^ uVar2;
    *(uint *)((longlong)puVar4 + 0xc) = uVar2;
    uVar2 = (uVar2 ^ *(uint *)((longlong)puVar4 + lVar5 + 0xc)) & 8 ^ uVar2;
    *(uint *)((longlong)puVar4 + 0xc) = uVar2;
    uVar2 = (uVar2 ^ *(uint *)((longlong)puVar4 + lVar5 + 0xc)) & 0x10 ^ uVar2;
    *(uint *)((longlong)puVar4 + 0xc) = uVar2;
    uVar2 = (uVar2 ^ *(uint *)((longlong)puVar4 + lVar5 + 0xc)) & 0x20 ^ uVar2;
    *(uint *)((longlong)puVar4 + 0xc) = uVar2;
    uVar2 = (uVar2 ^ *(uint *)((longlong)puVar4 + lVar5 + 0xc)) & 0x40 ^ uVar2;
    *(uint *)((longlong)puVar4 + 0xc) = uVar2;
    uVar2 = (uVar2 ^ *(uint *)((longlong)puVar4 + lVar5 + 0xc)) & 0x80 ^ uVar2;
    *(uint *)((longlong)puVar4 + 0xc) = uVar2;
    uVar2 = (uVar2 ^ *(uint *)((longlong)puVar4 + lVar5 + 0xc)) & 0x100 ^ uVar2;
    *(uint *)((longlong)puVar4 + 0xc) = uVar2;
    *(uint *)((longlong)puVar4 + 0xc) =
         (uVar2 ^ *(uint *)((longlong)puVar4 + lVar5 + 0xc)) & 0x200 ^ uVar2;
    puVar4[2] = *(undefined8 *)((longlong)puVar4 + lVar5 + 0x10);
    *(undefined4 *)(puVar4 + 3) = *(undefined4 *)((longlong)puVar4 + lVar5 + 0x18);
    *(undefined4 *)((longlong)puVar4 + 0x1c) = *(undefined4 *)((longlong)puVar4 + lVar5 + 0x1c);
    puVar4[4] = *(undefined8 *)((longlong)puVar4 + lVar5 + 0x20);
    *(undefined4 *)(puVar4 + 5) = *(undefined4 *)((longlong)puVar4 + lVar5 + 0x28);
    *(undefined4 *)(puVar4 + 6) = *(undefined4 *)((longlong)puVar4 + lVar5 + 0x30);
    *(undefined4 *)((longlong)puVar4 + 0x34) = *(undefined4 *)((longlong)puVar4 + lVar5 + 0x34);
    *(undefined4 *)(puVar4 + 7) = *(undefined4 *)((longlong)puVar4 + lVar5 + 0x38);
    *(undefined8 *)((longlong)puVar4 + 0x3c) = *(undefined8 *)((longlong)puVar4 + lVar5 + 0x3c);
    *(undefined4 *)((longlong)puVar4 + 0x44) = *(undefined4 *)((longlong)puVar4 + lVar5 + 0x44);
    puVar4[9] = *(undefined8 *)((longlong)puVar4 + lVar5 + 0x48);
    *(undefined4 *)(puVar4 + 10) = *(undefined4 *)((longlong)puVar4 + lVar5 + 0x50);
    puVar4[0xb] = *(undefined8 *)((longlong)puVar4 + lVar5 + 0x58);
    *(undefined1 *)(puVar4 + 0xc) = *(undefined1 *)((longlong)puVar4 + lVar5 + 0x60);
    puVar4[0xd] = *(undefined8 *)(lVar5 + 0x68 + (longlong)puVar4);
    *(undefined4 *)(puVar4 + 0xe) = *(undefined4 *)((longlong)puVar4 + lVar5 + 0x70);
    *(uint *)((longlong)puVar4 + 0x74) =
         *(uint *)((longlong)puVar4 + 0x74) ^
         (*(uint *)((longlong)puVar4 + 0x74) ^ *(uint *)((longlong)puVar4 + lVar5 + 0x74)) & 1;
    uVar2 = (*(uint *)((longlong)puVar4 + 0x74) ^ *(uint *)((longlong)puVar4 + lVar5 + 0x74)) & 2 ^
            *(uint *)((longlong)puVar4 + 0x74);
    *(uint *)((longlong)puVar4 + 0x74) = uVar2;
    uVar2 = (uVar2 ^ *(uint *)((longlong)puVar4 + lVar5 + 0x74)) & 4 ^ uVar2;
    *(uint *)((longlong)puVar4 + 0x74) = uVar2;
    uVar2 = (uVar2 ^ *(uint *)((longlong)puVar4 + lVar5 + 0x74)) & 8 ^ uVar2;
    *(uint *)((longlong)puVar4 + 0x74) = uVar2;
    uVar2 = (uVar2 ^ *(uint *)((longlong)puVar4 + lVar5 + 0x74)) & 0x10 ^ uVar2;
    *(uint *)((longlong)puVar4 + 0x74) = uVar2;
    uVar2 = (uVar2 ^ *(uint *)((longlong)puVar4 + lVar5 + 0x74)) & 0x20 ^ uVar2;
    *(uint *)((longlong)puVar4 + 0x74) = uVar2;
    uVar2 = (uVar2 ^ *(uint *)((longlong)puVar4 + lVar5 + 0x74)) & 0x40 ^ uVar2;
    *(uint *)((longlong)puVar4 + 0x74) = uVar2;
    uVar2 = (uVar2 ^ *(uint *)((longlong)puVar4 + lVar5 + 0x74)) & 0x80 ^ uVar2;
    *(uint *)((longlong)puVar4 + 0x74) = uVar2;
    uVar2 = (uVar2 ^ *(uint *)((longlong)puVar4 + lVar5 + 0x74)) & 0x100 ^ uVar2;
    *(uint *)((longlong)puVar4 + 0x74) = uVar2;
    *(uint *)((longlong)puVar4 + 0x74) =
         (uVar2 ^ *(uint *)((longlong)puVar4 + lVar5 + 0x74)) & 0x200 ^ uVar2;
    puVar4[0xf] = *(undefined8 *)((longlong)puVar4 + lVar5 + 0x78);
    *(undefined4 *)(puVar4 + 0x10) = *(undefined4 *)((longlong)puVar4 + lVar5 + 0x80);
    *(undefined4 *)((longlong)puVar4 + 0x84) = *(undefined4 *)((longlong)puVar4 + lVar5 + 0x84);
    puVar4[0x11] = *(undefined8 *)((longlong)puVar4 + lVar5 + 0x88);
    *(undefined4 *)(puVar4 + 0x12) = *(undefined4 *)((longlong)puVar4 + lVar5 + 0x90);
    puVar4 = puVar4 + 0x1a;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  param_1[0xd8] = param_2[0xd8];
  *(undefined1 *)(param_1 + 0xda) = *(undefined1 *)(param_2 + 0xda);
  *(undefined8 *)(param_1 + 0xdc) = *(undefined8 *)(param_2 + 0xdc);
  *(undefined1 *)(param_1 + 0xde) = *(undefined1 *)(param_2 + 0xde);
  param_1[0xdf] = param_2[0xdf];
  *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)(param_2 + 0xe0);
  *(undefined1 *)((longlong)param_1 + 0x381) = *(undefined1 *)((longlong)param_2 + 0x381);
  param_1[0xe1] = param_2[0xe1];
  param_1[0xe2] = param_2[0xe2];
  *(byte *)(param_1 + 0xe3) =
       *(byte *)(param_1 + 0xe3) ^ (*(byte *)(param_1 + 0xe3) ^ *(byte *)(param_2 + 0xe3)) & 1;
  bVar1 = (*(byte *)(param_2 + 0xe3) ^ *(byte *)(param_1 + 0xe3)) & 2 ^ *(byte *)(param_1 + 0xe3);
  *(byte *)(param_1 + 0xe3) = bVar1;
  *(byte *)(param_1 + 0xe3) = (bVar1 ^ *(byte *)(param_2 + 0xe3)) & 4 ^ bVar1;
  return param_1;
}



// FUNCTION 142d48b70 FUN_142d48b70 body=622 status=ok
// SIG undefined FUN_142d48b70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d48b70(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  float fVar6;
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
  if (*(longlong *)(param_1 + 0x608) != 0) {
    lVar1 = FUN_142e20fc0();
    for (lVar2 = *(longlong *)(param_1 + 0x608); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar1) {
        if (*(longlong *)(param_1 + 0x608) == 0) {
          return;
        }
        lVar2 = *(longlong *)(param_1 + 0x120);
        if ((lVar2 == 0) && (lVar2 = FUN_1423407b0(param_1), lVar2 == 0)) {
          return;
        }
        local_a8 = *(code **)(param_1 + 0x878);
        fVar6 = (float)FUN_142de77e0(param_1 + 0x588,*(undefined8 *)(param_1 + 0x118),0,&local_a8);
        local_a8 = FUN_142d4dd70;
        if (fVar6 <= 0.1) {
          fVar6 = 0.1;
        }
        uStack_a0 = 0;
        *(float *)(param_1 + 0x618) = fVar6;
        if (*(longlong *)(lVar2 + 400) == 0) {
          uVar4 = *(undefined8 *)(lVar2 + 0x3f8);
        }
        else {
          uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
        }
        plVar3 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar3 != (longlong *)0x0) {
          *plVar3 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar3 + 1,param_1);
          *(undefined4 *)(plVar3 + 2) = (undefined4)local_a8;
          *(undefined4 *)((longlong)plVar3 + 0x14) = local_a8._4_4_;
          *(undefined4 *)(plVar3 + 3) = uStack_a0;
          *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_9c;
          lVar2 = FDelegateHandle::GenerateNewID();
          plVar3[5] = lVar2;
          *plVar3 = (longlong)&PTR_FUN_143f77bd0;
        }
        local_98 = 0;
        local_90 = 0;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x30))(plVar3,&local_98);
        }
        FWeakObjectPtr::operator=(local_88,0);
        local_b0 = 0xbf800000;
        local_b8 = 0;
        local_80 = 0;
        local_48 = (longlong *)0x0;
        local_38 = 0;
        local_78 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar4,param_1 + 0x8e8,&local_98,fVar6);
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
        if (plVar3 == (longlong *)0x0) {
          return;
        }
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        lVar2 = FMemory::Realloc(plVar3,0,0);
        if (lVar2 == 0) {
          return;
        }
        FMemory::Free(lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142d48de0 FUN_142d48de0 body=658 status=ok
// SIG undefined FUN_142d48de0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_142d48de0(undefined8 param_1,undefined8 *param_2)

{
  float fVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 *local_res10;
  float local_98;
  float local_94;
  float local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  if (((*(char *)(param_2 + 0x62) != '\0') && (*(char *)(param_2 + 0x19) != '\0')) &&
     (cVar2 = FUN_142d4fe80(param_2 + 0x72), cVar2 != '\0')) {
    local_88 = 0;
    uStack_80 = 0;
    FUN_142d4fcb0(&local_res10,param_2,&local_88);
    if (local_res10 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)UEnvQueryItemType::GetPrivateStaticClass();
      puVar4 = local_res10;
      do {
        puVar5 = local_res10;
        if (puVar4 == puVar3) goto LAB_142d48e90;
        puVar4 = *(undefined1 **)(puVar4 + 0x30);
      } while (puVar4 != (undefined1 *)0x0);
    }
    puVar5 = (undefined1 *)0x0;
LAB_142d48e90:
    puVar4 = (undefined1 *)UEnvQueryItemType_Point::GetPrivateStaticClass();
    if (puVar5 == puVar4) {
      FUN_142d4fdc0(&local_98,param_2 + 0x72);
      FUN_142d4fa40(&local_88,*param_2);
      fVar7 = -(float)DAT_1466ad3c0;
      if (((((fVar7 < local_98) && (local_98 < (float)DAT_1466ad3c0)) &&
           ((fVar6 = -DAT_1466ad3c0._4_4_, fVar6 < local_94 &&
            ((local_94 < DAT_1466ad3c0._4_4_ && (fVar8 = -DAT_1466ad3c8, fVar8 < local_90)))))) &&
          ((local_90 < DAT_1466ad3c8 &&
           (((((fVar7 < (float)local_88 && ((float)local_88 < (float)DAT_1466ad3c0)) &&
              (fVar6 < local_88._4_4_)) &&
             ((local_88._4_4_ < DAT_1466ad3c0._4_4_ && (fVar8 < (float)uStack_80)))) &&
            ((float)uStack_80 < DAT_1466ad3c8)))))) &&
         (((fVar1 = *(float *)((longlong)param_2 + 0x374), fVar1 <= fVar7 ||
           ((float)DAT_1466ad3c0 <= fVar1)) ||
          ((*(float *)(param_2 + 0x6f) <= fVar6 ||
           ((((DAT_1466ad3c0._4_4_ <= *(float *)(param_2 + 0x6f) ||
              (fVar7 = *(float *)((longlong)param_2 + 0x37c), fVar7 <= fVar8)) ||
             (DAT_1466ad3c8 <= fVar7)) ||
            (_DAT_1466ad3e0 <=
             (*(float *)(param_2 + 0x6f) - local_88._4_4_) *
             (*(float *)(param_2 + 0x6f) - local_88._4_4_) +
             (fVar1 - (float)local_88) * (fVar1 - (float)local_88) +
             (fVar7 - (float)uStack_80) * (fVar7 - (float)uStack_80))))))))) {
        return (local_94 - local_88._4_4_) * (local_94 - local_88._4_4_) +
               (local_98 - (float)local_88) * (local_98 - (float)local_88) +
               (local_90 - (float)uStack_80) * (local_90 - (float)uStack_80) <=
               *(float *)((longlong)param_2 + 0xc4) * *(float *)((longlong)param_2 + 0xc4);
      }
    }
  }
  return false;
}



// FUNCTION 142d49080 FUN_142d49080 body=1812 status=ok
// SIG undefined FUN_142d49080(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d49080(longlong param_1,longlong param_2,longlong param_3,char param_4,char param_5,
                  float param_6,longlong param_7,undefined8 *param_8,undefined4 param_9,
                  float param_10)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulonglong in_stack_fffffffffffffef8;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined8 local_f8;
  uint local_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  longlong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  char local_b0;
  undefined1 local_af;
  undefined8 local_ac;
  uint local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  float local_94;
  undefined8 local_90;
  longlong local_78;
  uint local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  if (param_2 == 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  if ((*(char *)(param_2 + 0x9c) != '\0') && (param_4 == '\0')) {
    plVar3 = *(longlong **)(param_1 + 0x30);
    plVar8 = plVar3 + (longlong)*(int *)(param_1 + 0x38) * 0xd;
    for (; plVar3 != plVar8; plVar3 = plVar3 + 0xd) {
      if (((*plVar3 == param_2) && (lVar2 = FWeakObjectPtr::Get(plVar3 + 1), lVar2 == param_3)) &&
         ((char)plVar3[7] == '\0')) {
        *(float *)(plVar3 + 2) = param_6;
        *(char *)(plVar3 + 7) = param_5;
        if (param_5 == '\0') {
          *(undefined4 *)(plVar3 + 0xb) = *(undefined4 *)((longlong)plVar3 + 0x5c);
        }
        FUN_142d32570(plVar3);
        return;
      }
    }
  }
  local_e0 = 0xffffffff;
  local_dc = 0;
  local_d8 = 1.0;
  fStack_d4 = 1.0;
  fStack_d0 = 1.0;
  fStack_cc = 1.0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_af = 0;
  local_a0 = 0xffffffff;
  local_9c = 0;
  local_90 = 0;
  local_e8 = param_2;
  FWeakObjectPtr::operator=(&local_e0,param_3);
  local_d8 = param_6;
  local_b0 = param_5;
  local_90 = 0;
  plVar3 = (longlong *)FUN_142d3ad50(param_2,&local_78,0x3f800000);
  if (&local_c8 != plVar3) {
    if ((int)local_c0 != 0) {
      lVar2 = local_c8 + 8;
      iVar6 = (int)local_c0;
      do {
        FRichCurve::~FRichCurve(lVar2);
        lVar2 = lVar2 + 0x80;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    in_stack_fffffffffffffef8 = in_stack_fffffffffffffef8 & 0xffffffff00000000;
    FUN_1426f4440(&local_c8,*plVar3,(int)plVar3[1],local_c0._4_4_,in_stack_fffffffffffffef8);
  }
  uVar12 = (undefined4)(in_stack_fffffffffffffef8 >> 0x20);
  local_b8 = (undefined4)plVar3[2];
  if (local_70 != 0) {
    lVar2 = local_78 + 8;
    uVar7 = local_70;
    do {
      FRichCurve::~FRichCurve(lVar2);
      uVar12 = (undefined4)(in_stack_fffffffffffffef8 >> 0x20);
      lVar2 = lVar2 + 0x80;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  FUN_142d34830(&local_e8);
  if ((((*(uint *)(param_2 + 0x30) & 1) == 0) && ((*(uint *)(param_2 + 0x30) & 2) == 0)) ||
     (param_4 != '\0')) {
    FWeakObjectPtr::operator=(&local_a0,param_7);
    local_ac = *param_8;
    local_a4 = *(uint *)(param_8 + 1);
    local_98 = param_9;
    local_94 = param_10;
  }
  else {
    FWeakObjectPtr::operator=(&local_a0,*(undefined8 *)(param_3 + 0x488));
    lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x488) + 0x168);
    if (lVar2 == 0) {
      local_f8 = _DAT_1468b5d90;
      local_f0 = DAT_1468b5d98;
    }
    else {
      local_f8 = *(undefined8 *)(lVar2 + 0x220);
      local_f0 = *(uint *)(lVar2 + 0x228);
    }
    local_98 = 0x447a0000;
    local_ac = local_f8;
    local_94 = 1000.0;
    local_a4 = local_f0;
  }
  if (((*(uint *)(param_2 + 0x30) & 4) != 0) || ((*(uint *)(param_2 + 0x30) & 0x10) != 0)) {
    FUN_142d4f640(&local_e8,0xbf800000);
  }
  FUN_142d4f7f0(&local_e8);
  if ((*(byte *)(param_2 + 0x30) & 2) == 0) {
    if (*(longlong *)(param_2 + 0x80) != 0) {
      lVar4 = UNodeMappingContainer::GetPrivateStaticClass();
      lVar2 = *(longlong *)(param_2 + 0x80);
      for (lVar5 = lVar2; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
        if (lVar5 == lVar4) {
          if (lVar2 != 0) {
            local_f0 = DAT_1468b5da8;
            puVar11 = &local_f8;
            local_f8 = DAT_1468b5da0;
            FUN_1427116d0(param_3,lVar2,fStack_d4 * local_d8 * fStack_d0 * fStack_cc,0,puVar11,0);
            uVar12 = (undefined4)((ulonglong)puVar11 >> 0x20);
          }
          break;
        }
      }
    }
  }
  else {
    if (*(longlong *)(param_2 + 0x80) != 0) {
      lVar4 = UNodeMappingContainer::GetPrivateStaticClass();
      lVar2 = *(longlong *)(param_2 + 0x80);
      for (lVar5 = lVar2; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
        if (lVar5 == lVar4) {
          if (lVar2 != 0) {
            local_f0 = DAT_1468b5da8;
            puVar11 = &local_f8;
            local_f8 = DAT_1468b5da0;
            FUN_1427116d0(param_3,lVar2,0x3f800000,0,puVar11,0);
            uVar12 = (undefined4)((ulonglong)puVar11 >> 0x20);
          }
          break;
        }
      }
    }
    if (*(longlong *)(param_2 + 0x88) != 0) {
      lVar4 = UNodeMappingContainer::GetPrivateStaticClass();
      lVar2 = *(longlong *)(param_2 + 0x88);
      lVar5 = lVar2;
      if (lVar2 != 0) {
        do {
          if (lVar5 == lVar4) {
            if (lVar2 != 0) {
              local_f0 = DAT_1468b5da8;
              puVar11 = &local_f8;
              local_f8 = DAT_1468b5da0;
              FUN_1427116d0(param_3,lVar2,0x3f800000,0,puVar11,0);
              uVar12 = (undefined4)((ulonglong)puVar11 >> 0x20);
            }
            goto LAB_142d4944c;
          }
          lVar5 = *(longlong *)(lVar5 + 0x30);
        } while (lVar5 != 0);
        FUN_142d32570(&local_e8);
        goto LAB_142d494d5;
      }
    }
LAB_142d4944c:
    FUN_142d32570(&local_e8);
  }
LAB_142d494d5:
  if (*(char *)(param_2 + 0x1d0) == '\0') goto LAB_142d4966a;
  uVar9 = (undefined4)*(undefined8 *)(param_2 + 0x1e4);
  uVar10 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x1e4) >> 0x20);
  local_70 = *(uint *)(param_2 + 0x1ec);
  if (param_7 == 0) {
LAB_142d49605:
    if ((*(char *)(param_2 + 0x1e1) == '\0') || (param_10 <= 0.0)) goto LAB_142d49614;
  }
  else {
    if (*(char *)(param_2 + 0x1e1) != '\0') {
      lVar2 = FUN_1428dfc70();
      if ((*(int *)(*(longlong *)(param_7 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_7 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar2 = *(longlong *)(param_7 + 0x168);
        if (lVar2 == 0) {
          local_f8 = _DAT_1468b5d90;
          uVar9 = (undefined4)_DAT_1468b5d90;
          uVar10 = (undefined4)((ulonglong)_DAT_1468b5d90 >> 0x20);
          local_70 = DAT_1468b5d98;
        }
        else {
          uVar9 = *(undefined4 *)(lVar2 + 0x220);
          uVar10 = *(undefined4 *)(lVar2 + 0x224);
          local_f8 = *(undefined8 *)(lVar2 + 0x220);
          local_70 = *(uint *)(lVar2 + 0x228);
        }
      }
      else {
        lVar2 = FUN_1429ff160();
        if ((*(int *)(*(longlong *)(param_7 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          uVar9 = *(undefined4 *)(param_7 + 0x220);
          uVar10 = *(undefined4 *)(param_7 + 0x224);
          local_70 = *(uint *)(param_7 + 0x228);
        }
        else {
          uVar9 = (undefined4)*param_8;
          uVar10 = (undefined4)((ulonglong)*param_8 >> 0x20);
          local_70 = *(uint *)(param_8 + 1);
        }
      }
      goto LAB_142d49605;
    }
LAB_142d49614:
    param_10 = *(float *)(param_2 + 0x1f0);
  }
  local_f0 = *(uint *)(param_2 + 0x1dc);
  local_78 = CONCAT44(uVar10,uVar9);
  local_f8 = CONCAT44(*(undefined4 *)(param_2 + 0x1d8),(undefined4)local_f8);
  local_f8 = CONCAT71(local_f8._1_7_,*(undefined1 *)(param_2 + 0x1d4));
  FUN_1429e0c40(param_3,&local_f8,*(undefined1 *)(param_2 + 0x1e0),&local_78,
                CONCAT44(uVar12,param_10));
LAB_142d4966a:
  if ((*(longlong *)(param_2 + 0x1f8) != 0) && (*(longlong *)(param_3 + 0x978) != 0)) {
    local_6c = *(undefined8 *)(param_2 + 0x204);
    local_64 = *(undefined4 *)(param_2 + 0x20c);
    local_60 = *(undefined1 *)(param_2 + 0x210);
    local_50 = 0;
    local_58 = *(undefined8 *)(param_2 + 0x18);
    local_70 = CONCAT31((int3)(local_70 >> 8),
                        (((*(byte *)(param_2 + 0x213) & 1) << 2 | *(byte *)(param_2 + 0x212) & 1) *
                         '\x02' | *(byte *)(param_2 + 0x211) & 1) << 2 |
                        *(byte *)(param_2 + 0x200) & 1) & 0xfffffeff | 0x42;
    local_78 = *(longlong *)(param_2 + 0x1f8);
    FUN_142db7ff0(*(longlong *)(param_3 + 0x978),&local_78);
  }
  iVar6 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar6 + 1;
  if (*(int *)(param_1 + 0x3c) < iVar6 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0x30,iVar6);
  }
  FUN_142d2df30((longlong)iVar6 * 0x68 + *(longlong *)(param_1 + 0x30),&local_e8);
  if ((int)local_c0 != 0) {
    lVar2 = local_c8 + 8;
    iVar6 = (int)local_c0;
    do {
      FRichCurve::~FRichCurve(lVar2);
      lVar2 = lVar2 + 0x80;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142d497a0 FUN_142d497a0 body=716 status=ok
// SIG undefined FUN_142d497a0(void)

void FUN_142d497a0(longlong param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  
  if (param_2 != (longlong *)0x0) {
    FUN_1429e1210(param_2,*(undefined8 *)(param_1 + 0x18));
    plVar13 = (longlong *)param_2[0xa5];
    if (plVar13 != (longlong *)0x0) {
      (**(code **)(*plVar13 + 0x840))(plVar13,*(undefined8 *)(param_1 + 0x80),0);
      if ((*(uint *)(param_1 + 0x30) >> 1 & 1) != 0) {
        (**(code **)(*(longlong *)param_2[0xa5] + 0x840))
                  ((longlong *)param_2[0xa5],*(undefined8 *)(param_1 + 0x90),0);
        (**(code **)(*(longlong *)param_2[0xa5] + 0x840))
                  ((longlong *)param_2[0xa5],*(undefined8 *)(param_1 + 0x88),0);
        (**(code **)(*(longlong *)param_2[0xa5] + 0x840))
                  ((longlong *)param_2[0xa5],*(undefined8 *)(param_1 + 0x98),0);
      }
      puVar12 = *(undefined8 **)(param_1 + 0x160);
      puVar10 = puVar12 + (longlong)*(int *)(param_1 + 0x168) * 0x2e;
      for (; puVar12 != puVar10; puVar12 = puVar12 + 0x2e) {
        (**(code **)(*(longlong *)param_2[0xa5] + 0x840))((longlong *)param_2[0xa5],*puVar12,0);
      }
    }
    if (*(longlong *)(param_1 + 0x1d8) != 0) {
      uVar3 = FUN_142e71aa0();
      lVar4 = AGameStateBase::OnRep_GameModeClass(param_2,uVar3);
      if (lVar4 != 0) {
        lVar5 = FUN_142e71aa0();
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
          FUN_142e724b0(lVar4,*(undefined8 *)(param_1 + 0x1d8),*(undefined8 *)(param_1 + 0x1f8),
                        *(undefined1 *)(param_1 + 0x200));
        }
      }
    }
    lVar4 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(param_1 + 0x18);
      (**(code **)(*param_2 + 0x1018))(param_2,param_1 + 0x208);
    }
    lVar4 = (**(code **)(*param_2 + 0x148))(param_2);
    if (lVar4 != 0) {
      plVar14 = (longlong *)(param_1 + 1000);
      plVar13 = (longlong *)*plVar14;
      plVar7 = plVar13 + (longlong)*(int *)(param_1 + 0x3f0) * 7;
      for (; plVar13 != plVar7; plVar13 = plVar13 + 7) {
        if ((longlong *)*plVar13 == param_2) {
          lVar4 = (**(code **)(*param_2 + 0x148))(param_2);
          if (*(longlong *)(lVar4 + 400) == 0) {
            uVar3 = *(undefined8 *)(lVar4 + 0x3f8);
          }
          else {
            uVar3 = *(undefined8 *)(*(longlong *)(lVar4 + 400) + 0x90);
          }
          FUN_142880530(uVar3,plVar13 + 3);
          uVar8 = 0;
          plVar13[3] = 0;
          iVar1 = *(int *)(param_1 + 0x3f0);
          lVar4 = *plVar13;
          if (iVar1 < 1) {
            return;
          }
          uVar11 = uVar8;
          do {
            iVar9 = (int)uVar11;
            lVar5 = *plVar14;
            if (*(longlong *)(uVar8 + lVar5) == lVar4) {
              iVar6 = (iVar1 - iVar9) + -1;
              if (0 < iVar6) {
                iVar6 = 1;
              }
              if (iVar6 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)iVar9 * 0x38 + lVar5),
                           (void *)((longlong)(iVar1 - iVar6) * 0x38 + lVar5),(longlong)iVar6 * 0x38
                          );
                iVar1 = *(int *)(param_1 + 0x3f0);
              }
              *(int *)(param_1 + 0x3f0) = iVar1 + -1;
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
              ResizeShrink(plVar14);
              iVar9 = iVar9 + -1;
              uVar8 = uVar8 - 0x38;
            }
            iVar1 = *(int *)(param_1 + 0x3f0);
            uVar11 = (ulonglong)(iVar9 + 1U);
            uVar8 = uVar8 + 0x38;
          } while ((int)(iVar9 + 1U) < iVar1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 142d49a70 FUN_142d49a70 body=498 status=ok
// SIG undefined FUN_142d49a70(void)

void FUN_142d49a70(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  
  if ((*param_1 != 0) && (lVar3 = FWeakObjectPtr::Get(param_1 + 1), lVar3 != 0)) {
    lVar3 = *param_1;
    if (*(longlong *)(lVar3 + 0x80) != 0) {
      lVar4 = UNodeMappingContainer::GetPrivateStaticClass();
      lVar3 = *(longlong *)(lVar3 + 0x80);
      for (lVar7 = lVar3; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
        if (lVar7 == lVar4) {
          if (lVar3 != 0) {
            uVar5 = FWeakObjectPtr::Get(param_1 + 1);
            FUN_1429e11c0(uVar5,*(undefined8 *)(*param_1 + 0x80),1);
          }
          break;
        }
      }
    }
    lVar3 = *param_1;
    if (*(longlong *)(lVar3 + 0x88) != 0) {
      lVar4 = UNodeMappingContainer::GetPrivateStaticClass();
      lVar3 = *(longlong *)(lVar3 + 0x88);
      for (lVar7 = lVar3; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
        if (lVar7 == lVar4) {
          if (lVar3 != 0) {
            uVar5 = FWeakObjectPtr::Get(param_1 + 1);
            FUN_1429e11c0(uVar5,*(undefined8 *)(*param_1 + 0x88),1);
          }
          break;
        }
      }
    }
  }
  plVar1 = param_1 + 4;
  if (plVar1 != &DAT_146af39a8) {
    iVar8 = (int)param_1[5];
    if (iVar8 != 0) {
      lVar3 = *plVar1 + 8;
      do {
        FRichCurve::~FRichCurve(lVar3);
        lVar3 = lVar3 + 0x80;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    FUN_1426f4440(plVar1,DAT_146af39a8,DAT_146af39b0,*(undefined4 *)((longlong)param_1 + 0x2c),0);
  }
  *(undefined4 *)(param_1 + 6) = DAT_146af39b8;
  if (((*param_1 != 0) && (*(longlong *)(*param_1 + 0x1f8) != 0)) &&
     (lVar3 = FWeakObjectPtr::Get(param_1 + 1), lVar3 != 0)) {
    uVar5 = FUN_142e71aa0();
    uVar6 = FWeakObjectPtr::Get(param_1 + 1);
    lVar3 = AGameStateBase::OnRep_GameModeClass(uVar6,uVar5);
    if (lVar3 != 0) {
      lVar7 = FUN_142e71aa0();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar7 = *param_1;
        FUN_142e724b0(lVar3,*(undefined8 *)(lVar7 + 0x1f8),*(undefined8 *)(lVar7 + 0x18),
                      *(undefined1 *)(lVar7 + 0x214));
      }
    }
  }
  return;
}



// FUNCTION 142d49c70 FUN_142d49c70 body=130 status=ok
// SIG undefined FUN_142d49c70(void)

void FUN_142d49c70(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((param_1 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_1 + 0x148))(), lVar2 != 0)) {
    lVar3 = FUN_142d18d20(lVar2);
    if (lVar3 != 0) {
      FUN_142d298e0(lVar3,param_1);
    }
    iVar1 = FUN_1428cf800(lVar2);
    if (((iVar1 != 3) && (plVar4 = (longlong *)FUN_142d5ecc0(lVar2), plVar4 != (longlong *)0x0)) &&
       (lVar2 = (**(code **)(*plVar4 + 0x298))(plVar4), lVar2 != 0)) {
      FUN_142e6fa60(lVar2,param_1,0,1);
    }
  }
  return;
}



// FUNCTION 142d49d00 FUN_142d49d00 body=197 status=ok
// SIG undefined FUN_142d49d00(void)

void FUN_142d49d00(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (((param_1 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_1 + 0x148))(), lVar2 != 0)) &&
     (param_2 != 0)) {
    lVar3 = UCelLightData::GetPrivateStaticClass();
    lVar4 = param_2;
    while (lVar4 != lVar3) {
      lVar4 = *(longlong *)(lVar4 + 0x30);
      if (lVar4 == 0) {
        return;
      }
    }
    lVar4 = FUN_142d18d20(lVar2);
    if (lVar4 != 0) {
      FUN_142d29970(lVar4,param_2,param_1);
    }
    iVar1 = FUN_1428cf800(lVar2);
    if (((iVar1 != 3) && (plVar5 = (longlong *)FUN_142d5ecc0(lVar2), plVar5 != (longlong *)0x0)) &&
       (lVar2 = (**(code **)(*plVar5 + 0x298))(plVar5), lVar2 != 0)) {
      FUN_142e6fa60(lVar2,param_1,param_2,0);
    }
  }
  return;
}



// FUNCTION 142d49dd0 FUN_142d49dd0 body=147 status=ok
// SIG undefined FUN_142d49dd0(void)

void FUN_142d49dd0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((((param_1 != (longlong *)0x0) && (lVar1 = (**(code **)(*param_1 + 0x148))(), lVar1 != 0)) &&
      (param_2 != 0)) && (param_3 != 0)) {
    lVar2 = UCelLightData::GetPrivateStaticClass();
    lVar3 = param_3;
    do {
      if (lVar3 == lVar2) {
        lVar1 = FUN_142d18d20(lVar1);
        if (lVar1 == 0) {
          return;
        }
        FUN_142d29a70(lVar1,param_3,param_1,param_2);
        return;
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 142d49e70 FUN_142d49e70 body=43 status=ok
// SIG undefined FUN_142d49e70(void)

void FUN_142d49e70(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_1;
  uStack_14 = param_1[1];
  uStack_10 = param_1[2];
  uStack_c = param_1[3];
  uVar1 = FUN_142d3a820(&local_18);
  FUN_142d49f50(uVar1,param_2);
  return;
}



// FUNCTION 142d49ea0 FUN_142d49ea0 body=164 status=ok
// SIG undefined FUN_142d49ea0(void)

void FUN_142d49ea0(undefined4 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_1;
  uStack_14 = param_1[1];
  iStack_10 = param_1[2];
  uStack_c = param_1[3];
  lVar1 = FUN_142d3a820(&local_18);
  if ((lVar1 != 0) && (param_2 != (longlong *)0x0)) {
    lVar2 = (**(code **)(*param_2 + 0x148))(param_2);
    if (lVar2 != 0) {
      uVar3 = (**(code **)(*param_2 + 0x148))(param_2);
      UWorld::GetPlayerControllerIterator(uVar3,&local_18);
      for (; (-1 < iStack_10 && (iStack_10 < (int)((longlong *)CONCAT44(uStack_14,local_18))[1]));
          iStack_10 = iStack_10 + 1) {
        lVar2 = FWeakObjectPtr::Get(*(longlong *)CONCAT44(uStack_14,local_18) +
                                    (longlong)iStack_10 * 8);
        if (lVar2 != 0) {
          FUN_142d49f50(lVar1,lVar2);
        }
      }
    }
  }
  return;
}



// FUNCTION 142d49f50 FUN_142d49f50 body=199 status=ok
// SIG undefined FUN_142d49f50(void)

void FUN_142d49f50(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong local_18 [2];
  
  if ((param_1 != (longlong *)0x0) && (param_2 != (longlong *)0x0)) {
    lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cVar2 = (**(code **)(*param_2 + 0x768))(param_2);
      if (cVar2 == '\0') {
        FUN_142e565d0(param_2,param_1);
        return;
      }
      local_18[0] = 0;
      local_18[1] = 0;
      FUN_142dddf90(param_2,param_1,local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
        return;
      }
    }
    else {
      (**(code **)(*param_1 + 0x290))(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 142d4a020 FUN_142d4a020 body=134 status=ok
// SIG undefined FUN_142d4a020(void)

void FUN_142d4a020(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar2 = *(int *)(param_1 + 0x38) + -1;
  if (-1 < iVar2) {
    lVar4 = (longlong)iVar2 * 0x68;
    do {
      plVar3 = (longlong *)(*(longlong *)(param_1 + 0x30) + lVar4);
      if ((*plVar3 == param_2) && (lVar1 = FWeakObjectPtr::Get(plVar3 + 1), lVar1 == param_3)) {
        FUN_142d49a70(plVar3);
        FUN_142d46510((longlong *)(param_1 + 0x30),iVar2,1,1);
      }
      lVar4 = lVar4 + -0x68;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  return;
}



// FUNCTION 142d4a0b0 FUN_142d4a0b0 body=148 status=ok
// SIG undefined FUN_142d4a0b0(void)

void FUN_142d4a0b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *local_18;
  int local_10;
  
  if (((param_1 != 0) && (param_2 != (longlong *)0x0)) &&
     (lVar1 = (**(code **)(*param_2 + 0x148))(param_2), lVar1 != 0)) {
    uVar2 = (**(code **)(*param_2 + 0x148))(param_2);
    UWorld::GetPlayerControllerIterator(uVar2,&local_18);
    for (; (-1 < local_10 && (local_10 < (int)local_18[1])); local_10 = local_10 + 1) {
      lVar1 = FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
      if (lVar1 != 0) {
        FUN_142d49f50(param_1,lVar1);
      }
    }
  }
  return;
}



// FUNCTION 142d4a150 FUN_142d4a150 body=271 status=ok
// SIG undefined FUN_142d4a150(void)

void FUN_142d4a150(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x290))();
    iVar2 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
    }
    *(longlong **)(*param_3 + (longlong)iVar2 * 8) = param_1;
    lVar4 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      plVar7 = (longlong *)param_1[0x4f];
      uVar6 = 0;
      uVar8 = (longlong)(int)param_1[0x50] & 0x1fffffffffffffff;
      if (plVar7 + (int)param_1[0x50] < plVar7) {
        uVar8 = uVar6;
      }
      if (uVar8 != 0) {
        do {
          lVar4 = *plVar7;
          if (lVar4 != 0) {
            plVar5 = (longlong *)*param_3;
            plVar1 = plVar5 + (int)param_3[1];
            for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
              if (*plVar5 == lVar4) goto LAB_142d4a239;
            }
            FUN_142dddf90(param_2,lVar4,param_3);
          }
LAB_142d4a239:
          plVar7 = plVar7 + 1;
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar8);
      }
    }
  }
  return;
}



// FUNCTION 142d4a260 FUN_142d4a260 body=277 status=ok
// SIG undefined FUN_142d4a260(void)

void FUN_142d4a260(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_1 != 0) {
    lVar2 = FUN_142e45800();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_142d4a380(param_1,param_2,param_3);
      return;
    }
    lVar2 = FUN_142e458b0();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
      uVar5 = 0;
      uVar4 = (longlong)*(int *)(param_1 + 0x38) & 0x1fffffffffffffff;
      if (puVar3 + *(int *)(param_1 + 0x38) < puVar3) {
        uVar4 = uVar5;
      }
      if (uVar4 != 0) {
        do {
          FUN_142d4a380(*puVar3,param_2,param_3);
          uVar5 = uVar5 + 1;
          puVar3 = puVar3 + 1;
        } while (uVar5 != uVar4);
      }
    }
  }
  return;
}



// FUNCTION 142d4a380 FUN_142d4a380 body=283 status=ok
// SIG undefined FUN_142d4a380(void)

void FUN_142d4a380(undefined8 param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_18;
  int local_10;
  
  if ((param_2 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_2 + 0x148))(param_2), lVar2 != 0)
     ) {
    uVar3 = (**(code **)(*param_2 + 0x148))(param_2);
    lVar2 = FUN_142d5ecc0(uVar3);
    if ((lVar2 != 0) && (lVar2 = FVoicePacketImpl::GetSampleCounter(lVar2), lVar2 != 0)) {
      if (param_3 == 0) {
        uVar3 = (**(code **)(*param_2 + 0x148))(param_2);
        UWorld::GetPlayerControllerIterator(uVar3,&local_18);
        while( true ) {
          if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) break;
          lVar4 = FWeakObjectPtr::Get();
          if (lVar4 != 0) {
            lVar5 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              FUN_142d4a020(lVar2,param_1,lVar4);
            }
          }
          local_10 = local_10 + 1;
        }
      }
      else {
        FUN_142d4a020(lVar2,param_1,param_3);
      }
    }
  }
  return;
}



// FUNCTION 142d4a4a0 FUN_142d4a4a0 body=2249 status=ok
// SIG undefined FUN_142d4a4a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142d4a4a0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 (*pauVar11) [12];
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong *plVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_408;
  float local_400;
  undefined8 local_3f8;
  float local_3f0;
  float local_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  undefined1 local_3d8 [960];
  
  if (*(longlong *)(param_2 + 0x18) != 0) {
    lVar5 = UBlackboardKeyType::GetPrivateStaticClass();
    for (lVar12 = *(longlong *)(param_2 + 0x18); lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x30))
    {
      if (lVar12 == lVar5) {
        if (*(longlong *)(param_2 + 0x18) == 0) {
          return 0;
        }
        plVar6 = (longlong *)FUN_142dfd5b0();
        plVar15 = (longlong *)0x0;
        plVar10 = plVar15;
        if (*(longlong *)(param_2 + 0x18) != 0) {
          plVar7 = (longlong *)UBlackboardKeyType::GetPrivateStaticClass();
          for (plVar8 = *(longlong **)(param_2 + 0x18);
              (plVar10 = plVar15, plVar8 != (longlong *)0x0 &&
              (plVar10 = *(longlong **)(param_2 + 0x18), plVar8 != plVar7));
              plVar8 = (longlong *)plVar8[6]) {
          }
        }
        for (; plVar10 != (longlong *)0x0; plVar10 = (longlong *)plVar10[6]) {
          if (plVar10 == plVar6) {
            uVar2 = *(undefined1 *)(param_2 + 0x20);
            uVar14 = FUN_140726d20(local_3d8,param_4);
            FUN_142cb1140(param_3,uVar2,uVar14);
            return 1;
          }
        }
        plVar6 = (longlong *)FUN_142dfc210();
        plVar10 = plVar15;
        if (*(longlong *)(param_2 + 0x18) != 0) {
          plVar7 = (longlong *)UBlackboardKeyType::GetPrivateStaticClass();
          for (plVar8 = *(longlong **)(param_2 + 0x18);
              (plVar10 = plVar15, plVar8 != (longlong *)0x0 &&
              (plVar10 = *(longlong **)(param_2 + 0x18), plVar8 != plVar7));
              plVar8 = (longlong *)plVar8[6]) {
          }
        }
        for (; plVar10 != (longlong *)0x0; plVar10 = (longlong *)plVar10[6]) {
          if (plVar10 == plVar6) {
            lVar12 = FFileManifestData::StaticStruct();
            if (lVar12 == 0) {
              return 0;
            }
            plVar10 = plVar15;
            if (*(longlong *)(param_2 + 0x18) != 0) {
              plVar8 = (longlong *)UBlackboardKeyType::GetPrivateStaticClass();
              for (plVar6 = *(longlong **)(param_2 + 0x18);
                  (plVar10 = plVar15, plVar6 != (longlong *)0x0 &&
                  (plVar10 = *(longlong **)(param_2 + 0x18), plVar6 != plVar8));
                  plVar6 = (longlong *)plVar6[6]) {
              }
            }
            lVar5 = plVar10[0x1f];
            if (lVar5 == 0) {
              (**(code **)(*plVar10 + 0x368))(plVar10);
              lVar5 = plVar10[0x1f];
              if (lVar5 == 0) {
                return 0;
              }
            }
            if (*(longlong *)(lVar5 + 0x30) != lVar12) {
              return 0;
            }
            if (*(byte *)(param_4 + 0x368) < 8) {
              plVar15 = (longlong *)(param_4 + 0x20 + (ulonglong)*(byte *)(param_4 + 0x368) * 0x68);
            }
            FUN_142d2d620(param_3,*(undefined1 *)(param_2 + 0x20),plVar15);
            return 1;
          }
        }
        plVar6 = (longlong *)UBlackboardKeyType_Object::GetPrivateStaticClass();
        plVar10 = plVar15;
        if (*(longlong *)(param_2 + 0x18) != 0) {
          plVar7 = (longlong *)UBlackboardKeyType::GetPrivateStaticClass();
          for (plVar8 = *(longlong **)(param_2 + 0x18);
              (plVar10 = plVar15, plVar8 != (longlong *)0x0 &&
              (plVar10 = *(longlong **)(param_2 + 0x18), plVar8 != plVar7));
              plVar8 = (longlong *)plVar8[6]) {
          }
        }
        for (; plVar10 != (longlong *)0x0; plVar10 = (longlong *)plVar10[6]) {
          if (plVar10 == plVar6) {
            uVar2 = *(undefined1 *)(param_2 + 0x20);
            uVar14 = (**(code **)(*param_1 + 0x2a8))(param_1,param_4);
            FUN_140725870(param_3,uVar2,uVar14);
            return 1;
          }
        }
        plVar6 = (longlong *)UBlackboardKeyType_Object::GetPrivateStaticClass();
        plVar10 = plVar15;
        if (*(longlong *)(param_2 + 0x18) != 0) {
          plVar7 = (longlong *)UBlackboardKeyType::GetPrivateStaticClass();
          for (plVar8 = *(longlong **)(param_2 + 0x18);
              (plVar10 = plVar15, plVar8 != (longlong *)0x0 &&
              (plVar10 = *(longlong **)(param_2 + 0x18), plVar8 != plVar7));
              plVar8 = (longlong *)plVar8[6]) {
          }
        }
        for (; plVar10 != (longlong *)0x0; plVar10 = (longlong *)plVar10[6]) {
          if (plVar10 == plVar6) {
            puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x298))(param_1,&local_3f8,param_4);
            local_408 = *puVar9;
            local_400 = *(float *)(puVar9 + 1);
            FUN_14074b0b0(param_3,*(undefined1 *)(param_2 + 0x20),&local_408);
            return 1;
          }
        }
        plVar6 = (longlong *)FUN_142c361d0();
        plVar10 = plVar15;
        if (*(longlong *)(param_2 + 0x18) != 0) {
          plVar7 = (longlong *)UBlackboardKeyType::GetPrivateStaticClass();
          for (plVar8 = *(longlong **)(param_2 + 0x18);
              (plVar10 = plVar15, plVar8 != (longlong *)0x0 &&
              (plVar10 = *(longlong **)(param_2 + 0x18), plVar8 != plVar7));
              plVar8 = (longlong *)plVar8[6]) {
          }
        }
        do {
          if (plVar10 == (longlong *)0x0) {
LAB_142d4a692:
            plVar6 = (longlong *)UBlackboardKeyType_Float::GetPrivateStaticClass();
            plVar10 = plVar15;
            if (*(longlong *)(param_2 + 0x18) != 0) {
              plVar7 = (longlong *)UBlackboardKeyType::GetPrivateStaticClass();
              for (plVar8 = *(longlong **)(param_2 + 0x18);
                  (plVar10 = plVar15, plVar8 != (longlong *)0x0 &&
                  (plVar10 = *(longlong **)(param_2 + 0x18), plVar8 != plVar7));
                  plVar8 = (longlong *)plVar8[6]) {
              }
            }
            for (; plVar10 != (longlong *)0x0; plVar10 = (longlong *)plVar10[6]) {
              if (plVar10 == plVar6) {
                if (*(longlong *)(param_2 + 0x10) == DAT_146b31f30) {
                  lVar12 = FUN_142dd0030(param_4);
                  if ((lVar12 != 0) && (lVar5 = *(longlong *)(param_3 + 0x118), lVar5 != 0)) {
                    lVar13 = FUN_14291fb80();
                    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                         (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = true;
                    }
                    if (bVar1) {
                      lVar5 = *(longlong *)(lVar5 + 0x488);
                    }
                    if (lVar5 != 0) {
                      lVar12 = *(longlong *)(lVar12 + 0x168);
                      if (lVar12 == 0) {
                        local_408 = _DAT_1468b5d90;
                        local_400 = DAT_1468b5d98;
                      }
                      else {
                        local_408 = *(undefined8 *)(lVar12 + 0x220);
                        local_400 = *(float *)(lVar12 + 0x228);
                      }
                      fVar18 = local_400;
                      uVar14 = local_408;
                      local_3f0 = local_400;
                      lVar12 = *(longlong *)(lVar5 + 0x168);
                      local_3f8 = local_408;
                      if (lVar12 == 0) {
                        local_408 = _DAT_1468b5d90;
                        local_400 = DAT_1468b5d98;
                      }
                      else {
                        local_408 = *(undefined8 *)(lVar12 + 0x220);
                        local_400 = *(float *)(lVar12 + 0x228);
                      }
                      local_3f8._0_4_ = (float)uVar14;
                      local_3f8._4_4_ = (float)((ulonglong)uVar14 >> 0x20);
                      fVar19 = (float)local_3f8 - (float)local_408;
                      fVar20 = local_3f8._4_4_ - (float)((ulonglong)local_408 >> 0x20);
                      local_3f8 = uVar14;
                      uVar14 = FUN_142bafc40(param_3,*(undefined1 *)(param_2 + 0x20),
                                             SQRT(fVar20 * fVar20 + fVar19 * fVar19 +
                                                  (fVar18 - local_400) * (fVar18 - local_400)));
                      return uVar14;
                    }
                  }
                  uVar2 = *(undefined1 *)(param_2 + 0x20);
                }
                else {
                  if (*(longlong *)(param_2 + 0x10) != DAT_146b31f40) {
                    return 0;
                  }
                  uVar14 = FUN_142dd07a0(param_4);
                  uVar2 = *(undefined1 *)(param_2 + 0x20);
                  if ((float)uVar14 != 3.4028235e+38) {
                    uVar14 = FUN_142bafc40(param_3,uVar2,uVar14);
                    return uVar14;
                  }
                }
                FUN_142bb5c50(param_3,uVar2);
                return 1;
              }
            }
            plVar6 = (longlong *)UBlackboardKeyType_Bool::GetPrivateStaticClass();
            plVar10 = plVar15;
            if (*(longlong *)(param_2 + 0x18) != 0) {
              plVar7 = (longlong *)UBlackboardKeyType::GetPrivateStaticClass();
              for (plVar8 = *(longlong **)(param_2 + 0x18);
                  (plVar10 = plVar15, plVar8 != (longlong *)0x0 &&
                  (plVar10 = *(longlong **)(param_2 + 0x18), plVar8 != plVar7));
                  plVar8 = (longlong *)plVar8[6]) {
              }
            }
            while( true ) {
              if (plVar10 == (longlong *)0x0) {
                return 0;
              }
              if (plVar10 == plVar6) break;
              plVar10 = (longlong *)plVar10[6];
            }
            if (*(longlong *)(param_2 + 0x10) != DAT_146b31f38) {
              if (*(longlong *)(param_2 + 0x10) != DAT_146b31f48) {
                return 0;
              }
              uVar2 = FUN_142dd3420(param_4);
              uVar14 = FUN_1409f2510(param_3,*(undefined1 *)(param_2 + 0x20),uVar2);
              return uVar14;
            }
            uVar2 = FUN_142dd38f0(param_4);
            uVar14 = FUN_1409f2510(param_3,*(undefined1 *)(param_2 + 0x20),uVar2);
            return uVar14;
          }
          if (plVar10 == plVar6) {
            if (*(longlong *)(param_2 + 0x10) == DAT_146b31f28) {
              puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x2a0))(param_1,&local_3f8,param_4);
              local_400 = *(float *)(puVar9 + 1);
              local_408 = *puVar9;
              uVar14 = local_3f8;
              fVar18 = local_3f0;
              goto LAB_142d4a879;
            }
            if (*(longlong *)(param_2 + 0x10) != DAT_146b31f20) goto LAB_142d4a692;
            plVar10 = (longlong *)FUN_142dd0030(param_4);
            if (plVar10 == (longlong *)0x0) {
              return 0;
            }
            uVar14 = (**(code **)(*plVar10 + 0x308))(plVar10,&local_408);
            pauVar11 = (undefined1 (*) [12])FVector::Rotation(uVar14,&local_3f8);
            auVar16._12_4_ = 0;
            auVar16._0_12_ = *pauVar11;
            auVar16 = divps(auVar16,_DAT_146b31c00);
            fVar18 = (float)DAT_146b31c00;
            fVar21 = DAT_146b31c00._4_4_;
            fVar22 = DAT_146b31c00._8_4_;
            fVar19 = (float)*(undefined8 *)*pauVar11 - (float)(int)auVar16._0_4_ * fVar18;
            fVar20 = (float)((ulonglong)*(undefined8 *)*pauVar11 >> 0x20) -
                     (float)(int)auVar16._4_4_ * fVar21;
            fVar23 = *(float *)(*pauVar11 + 8) - (float)(int)auVar16._8_4_ * fVar22;
            fVar19 = (float)(((uint)(fVar19 + fVar18) ^ (uint)fVar19) & -(uint)(0.0 <= fVar19) ^
                            (uint)(fVar19 + fVar18));
            fVar20 = (float)(((uint)(fVar20 + fVar21) ^ (uint)fVar20) & -(uint)(0.0 <= fVar20) ^
                            (uint)(fVar20 + fVar21));
            local_3f0 = (float)(((uint)(fVar23 + fVar22) ^ (uint)fVar23) & -(uint)(0.0 <= fVar23) ^
                               (uint)(fVar23 + fVar22));
            fVar19 = (float)(((uint)(fVar19 - fVar18) ^ (uint)fVar19) &
                             -(uint)(_DAT_146b31bf0 < fVar19) ^ (uint)fVar19);
            fVar20 = (float)(((uint)(fVar20 - fVar21) ^ (uint)fVar20) &
                             -(uint)(fRam0000000146b31bf4 < fVar20) ^ (uint)fVar20);
            local_3f0 = (float)(((uint)(local_3f0 - fVar22) ^ (uint)local_3f0) &
                                -(uint)(fRam0000000146b31bf8 < local_3f0) ^ (uint)local_3f0);
            uVar3 = (uint)(fVar19 * 0.0027777778);
            local_3f8 = CONCAT44(fVar20,fVar19);
            fVar18 = (float)(int)uVar3 * 360.0;
            if (ABS(fVar19) < ABS((float)(int)uVar3 * 360.0)) {
              fVar18 = fVar19;
            }
            fVar19 = fVar19 - fVar18;
            if (fVar19 < 0.0) {
              fVar19 = fVar19 + 360.0;
            }
            if (fVar19 == 0.0) {
              uVar3 = (uint)(fVar20 * 0.0027777778);
              fVar18 = (float)(int)uVar3 * 360.0;
              if (ABS(fVar20) < ABS((float)(int)uVar3 * 360.0)) {
                fVar18 = fVar20;
              }
              fVar20 = fVar20 - fVar18;
              if (fVar20 < 0.0) {
                fVar20 = fVar20 + 360.0;
              }
              if (fVar20 != 0.0) goto LAB_142d4aa7b;
              uVar3 = (uint)(local_3f0 * 0.0027777778);
              fVar18 = (float)(int)uVar3 * 360.0;
              if (ABS(local_3f0) < ABS((float)(int)uVar3 * 360.0)) {
                fVar18 = local_3f0;
              }
              fVar18 = local_3f0 - fVar18;
              if (fVar18 < 0.0) {
                fVar18 = fVar18 + 360.0;
              }
              if (fVar18 != 0.0) goto LAB_142d4aa7b;
              uVar3 = (uint)CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
            }
            else {
LAB_142d4aa7b:
              uVar3 = uVar3 & 0xffffff00;
            }
            local_400 = local_3f0;
            local_408 = local_3f8;
            uVar14 = local_3f8;
            fVar18 = local_3f0;
            if (((char)uVar3 != '\0') &&
               (lVar12 = plVar10[0x2d], local_400 = DAT_1468b5da8, local_408 = DAT_1468b5da0,
               uVar14 = DAT_1468b5da0, fVar18 = DAT_1468b5da8, lVar12 != 0)) {
              local_3e8 = *(float *)(lVar12 + 0x210);
              fStack_3e4 = *(float *)(lVar12 + 0x214);
              fStack_3e0 = *(float *)(lVar12 + 0x218);
              fStack_3dc = *(float *)(lVar12 + 0x21c);
              auVar17._4_4_ = -(uint)(*(float *)(lVar12 + 0x254) != fStack_3e4);
              auVar17._0_4_ = -(uint)(*(float *)(lVar12 + 0x250) != local_3e8);
              auVar17._8_4_ = -(uint)(*(float *)(lVar12 + 600) != fStack_3e0);
              auVar17._12_4_ = -(uint)(*(float *)(lVar12 + 0x25c) != fStack_3dc);
              iVar4 = movmskps(uVar3,auVar17);
              if (iVar4 != 0) {
                *(float *)(lVar12 + 0x250) = local_3e8;
                *(float *)(lVar12 + 0x254) = fStack_3e4;
                *(float *)(lVar12 + 600) = fStack_3e0;
                *(float *)(lVar12 + 0x25c) = fStack_3dc;
                puVar9 = (undefined8 *)FQuat::Rotator(&local_3e8,&local_408);
                *(undefined8 *)(lVar12 + 0x260) = *puVar9;
                *(undefined4 *)(lVar12 + 0x268) = *(undefined4 *)(puVar9 + 1);
              }
              local_408 = *(undefined8 *)(lVar12 + 0x260);
              local_400 = *(float *)(lVar12 + 0x268);
              uVar14 = local_408;
              fVar18 = *(float *)(lVar12 + 0x268);
            }
LAB_142d4a879:
            local_3f0 = fVar18;
            local_3f8 = uVar14;
            FUN_14074ace0(param_3,*(undefined1 *)(param_2 + 0x20),&local_408);
            return 1;
          }
          plVar10 = (longlong *)plVar10[6];
        } while( true );
      }
    }
  }
  return 0;
}



// FUNCTION 142d4ad70 FUN_142d4ad70 body=980 status=ok
// SIG undefined FUN_142d4ad70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d4ad70(longlong param_1)

{
  undefined8 *puVar1;
  float fVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_cc8 [32];
  undefined1 local_ca8 [4];
  undefined8 local_ca4;
  float local_c9c;
  undefined8 local_c98 [384];
  undefined8 *local_98;
  undefined8 local_90;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_cc8;
  if (((((*(uint *)(param_1 + 8) >> 4 & 1) == 0) && (*(longlong *)(param_1 + 0x48) != 0)) &&
      (*(longlong *)(param_1 + 0x50) != 0)) &&
     ((cVar4 = UWorld::IsGameWorld(), cVar4 != '\0' &&
      (*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x94) < *(int *)(param_1 + 0x30))))) {
    lVar7 = *(longlong *)(param_1 + 0x38);
    lVar9 = (longlong)*(int *)(param_1 + 0x40) * 0x3b0 + lVar7;
    local_98 = (undefined8 *)0x0;
    local_90 = 0;
    for (; lVar7 != lVar9; lVar7 = lVar7 + 0x3b0) {
      fVar12 = *(float *)(lVar7 + 0xd0);
      if ((fVar12 <= 0.0) ||
         ((fVar2 = *(float *)(lVar7 + 0x3ac), 0.0 <= fVar2 &&
          (fVar11 = (float)FUN_142d39b30(param_1), fVar11 - fVar2 <= fVar12)))) {
        if ((-1 < *(int *)(lVar7 + 0x328)) &&
           (((((-1 < *(int *)(lVar7 + 0x32c) && (*(char *)(lVar7 + 0x3a8) != '\0')) &&
              (*(char *)(lVar7 + 0x3a0) == '\0')) &&
             (((*(char *)(lVar7 + 0x2f1) == '\0' ||
               (*(longlong **)(lVar7 + 0x308) == (longlong *)0x0)) ||
              (cVar4 = (**(code **)(**(longlong **)(lVar7 + 0x308) + 0x418))(), cVar4 != '\0')))) &&
            ((*(longlong *)(lVar7 + 0x2f8) != 0 || (cVar4 = FUN_142d46610(lVar7), cVar4 == '\0')))))
           ) {
          uVar3 = local_90;
          if (*(longlong *)(param_1 + 0x48) == 0) {
            fVar12 = 0.0;
          }
          else {
            fVar12 = *(float *)(*(longlong *)(param_1 + 0x48) + 0x8c8);
          }
          fVar12 = fVar12 - *(float *)(lVar7 + 0x3a4);
          if (0.0 < fVar12) {
            fVar12 = 1.0 / fVar12;
            if (10.0 <= fVar12) {
              fVar12 = 10.0;
            }
            if (3.4028235e+38 <= fVar12) goto LAB_142d4b035;
          }
          else {
            fVar12 = 10.0;
          }
          local_c9c = fVar12;
          local_ca4 = *(undefined8 *)(lVar7 + 0x328);
          lVar10 = (longlong)(int)local_90;
          iVar5 = (int)local_90 + 1;
          local_90 = CONCAT44(local_90._4_4_,iVar5);
          if (local_90._4_4_ < iVar5) {
            FUN_142d46a00(local_c98,uVar3 & 0xffffffff);
          }
          puVar8 = local_c98;
          if (local_98 != (undefined8 *)0x0) {
            puVar8 = local_98;
          }
          *(undefined8 *)((longlong)puVar8 + lVar10 * 0xc) = local_ca4;
          *(float *)((longlong)puVar8 + lVar10 * 0xc + 8) = local_c9c;
        }
      }
      else if (*(longlong *)(lVar7 + 0x390) != 0) {
        lVar10 = *(longlong *)(lVar7 + 0x328);
        iVar5 = (int)lVar10;
        if ((((-1 < iVar5) && (-1 < lVar10)) && (iVar5 < *(int *)(param_1 + 0x40))) &&
           (((lVar6 = (longlong)iVar5 * 0x3b0 + *(longlong *)(param_1 + 0x38),
             *(int *)(lVar6 + 0x328) == iVar5 &&
             (*(int *)(lVar6 + 0x32c) == (int)((ulonglong)lVar10 >> 0x20))) && (lVar6 != 0)))) {
          FUN_142d3ef50(param_1);
        }
      }
LAB_142d4b035:
    }
    puVar8 = local_c98;
    if (local_98 != (undefined8 *)0x0) {
      puVar8 = local_98;
    }
    AlgoImpl::
    IntroSortInternal<FAnimSyncMarker,FIdentityFunctor,TDereferenceWrapper<FAnimSyncMarker,TLess<FAnimSyncMarker>_>_>
              (puVar8,(longlong)(int)local_90,local_ca8[0],local_ca8);
    puVar8 = local_c98;
    if (local_98 != (undefined8 *)0x0) {
      puVar8 = local_98;
    }
    puVar1 = (undefined8 *)((longlong)puVar8 + (longlong)(int)local_90 * 0xc);
    while ((puVar8 != puVar1 &&
           (FUN_142d4b150(param_1,*puVar8),
           *(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x94) < *(int *)(param_1 + 0x30)))) {
      puVar8 = (undefined8 *)((longlong)puVar8 + 0xc);
    }
    if (local_98 != (undefined8 *)0x0) {
      FMemory::Free(local_98);
    }
  }
  return;
}



// FUNCTION 142d4b150 FUN_142d4b150 body=1075 status=ok
// SIG undefined FUN_142d4b150(void)

ulonglong FUN_142d4b150(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined2 uVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  ulonglong in_RAX;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 local_res10 [8];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  int local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  
  iVar8 = (int)param_2;
  if (iVar8 < 0) {
LAB_142d4b574:
    return in_RAX & 0xffffffffffffff00;
  }
  in_RAX = param_2 >> 0x20;
  if (((longlong)param_2 < 0) || (*(int *)(param_1 + 0x40) <= iVar8)) goto LAB_142d4b574;
  in_RAX = *(ulonglong *)(param_1 + 0x38);
  puVar13 = (undefined8 *)((longlong)iVar8 * 0x3b0 + in_RAX);
  if ((*(int *)(puVar13 + 0x65) != iVar8) ||
     ((in_RAX = param_2 >> 0x20, *(int *)((longlong)puVar13 + 0x32c) != (int)(param_2 >> 0x20) ||
      (puVar13 == (undefined8 *)0x0)))) goto LAB_142d4b574;
  FUN_142d4f4c0(param_1,puVar13);
  cVar7 = *(char *)(puVar13 + 0x75);
  *(undefined1 *)(puVar13 + 0x75) = 0;
  uVar9 = FString::FString(local_38,puVar13 + 99);
  FUN_142d35ac0(puVar13 + 1,&local_68,*puVar13,0,uVar9);
  if (local_68 == (longlong *)0x0) {
    uVar14 = 0;
    goto LAB_142d4b514;
  }
  *(undefined1 *)((longlong)local_68 + 0x3e) = *(undefined1 *)((longlong)puVar13 + 0x2f3);
  puVar13[0x70] = 0xffffffffffffffff;
  *(undefined1 *)(puVar13 + 0x71) = 0;
  if ((cVar7 == '\x02') || (*(char *)(puVar13 + 0x18) == '\x02')) {
    FUN_142d4e280(param_1,puVar13,&local_68);
    FUN_142be2a50(local_68);
    *(bool *)(puVar13 + 0x71) = cVar7 == '\x02';
  }
  else {
    cVar7 = FUN_142d48de0(param_1,puVar13);
    if ((cVar7 == '\0') && (1 < (byte)(*(char *)(puVar13 + 0x18) - 1U))) {
      bVar5 = false;
LAB_142d4b28f:
      if ((*(char *)((longlong)puVar13 + 0xc9) == '\0') ||
         (cVar7 = FUN_142d4fe80(puVar13 + 0x72), cVar7 == '\0')) goto LAB_142d4b2ad;
      bVar6 = true;
    }
    else {
      bVar5 = true;
      if (cVar7 == '\0') goto LAB_142d4b28f;
LAB_142d4b2ad:
      bVar6 = false;
    }
    if (bVar5) {
      FUN_142d4e280(param_1,puVar13,&local_68);
    }
    if (((bVar6) && (local_68 != (longlong *)0x0)) &&
       (cVar7 = FUN_142d4fe80(puVar13 + 0x72), cVar7 != '\0')) {
      plVar12 = (longlong *)puVar13[0x72];
      lVar15 = ((longlong)(*(int *)(*plVar12 + 4) * 2) >> 1) + plVar12[3];
      if (plVar12[2] != 0) {
        plVar10 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
        plVar12 = (longlong *)plVar12[2];
        for (plVar4 = plVar12; plVar4 != (longlong *)0x0; plVar4 = (longlong *)plVar4[6]) {
          if (plVar4 == plVar10) goto LAB_142d4b330;
        }
      }
      plVar12 = (longlong *)0x0;
LAB_142d4b330:
      lVar11 = plVar12[0x1f];
      if (lVar11 == 0) {
        (**(code **)(*plVar12 + 0x368))(plVar12);
        lVar11 = plVar12[0x1f];
      }
      uVar3 = *(undefined2 *)(lVar11 + 0x28);
      FUN_142d4fbb0(&local_88,*(undefined8 *)(puVar13[0x72] + 0x10),lVar15);
      local_78 = local_88;
      local_70 = local_80;
      cVar7 = FUN_142be8940(local_68,&local_78,2,0x41700000);
      if (cVar7 == '\0') {
        FUN_142bedd50(local_68,0);
        FUN_142bd8790(local_68,lVar15,uVar3);
        lVar15 = local_68[1];
        *(int *)(puVar13 + 0x70) = *(int *)(*local_68 + -8 + (longlong)(int)lVar15 * 0xc) * 2 >> 1;
        puVar2 = (uint *)(*local_68 + -4 + (longlong)(int)lVar15 * 0xc);
        *puVar2 = *puVar2 | 1;
      }
    }
  }
  local_48 = FUN_142d40200;
  uStack_40 = (undefined8 *)((ulonglong)uStack_40._4_4_ << 0x20);
  local_58 = (longlong *)0x0;
  plVar12 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_50 = 3;
  local_58 = plVar12;
  if (plVar12 != (longlong *)0x0) {
    *plVar12 = (longlong)&PTR_FUN_14587edb8;
    FWeakObjectPtr::operator=(plVar12 + 1,param_1);
    *(undefined4 *)(plVar12 + 2) = (undefined4)local_48;
    *(undefined4 *)((longlong)plVar12 + 0x14) = local_48._4_4_;
    *(undefined4 *)(plVar12 + 3) = (undefined4)uStack_40;
    *(uint *)((longlong)plVar12 + 0x1c) = uStack_40._4_4_;
    plVar12[4] = param_2;
    lVar15 = FDelegateHandle::GenerateNewID();
    plVar12[5] = lVar15;
    *plVar12 = (longlong)&PTR_FUN_14587ee00;
  }
  iVar8 = FUN_142bf0fc0(*(undefined8 *)(param_1 + 0x50),&local_68,&local_58);
  *(int *)(puVar13 + 0x66) = iVar8;
  if (iVar8 != -1) {
    uStack_40 = puVar13 + 0x65;
    *(undefined1 *)(puVar13 + 0x75) = 0;
    *(undefined1 *)(puVar13 + 0x74) = 1;
    local_48 = (code *)(puVar13 + 0x66);
    FUN_142d2c960(param_1 + 0x60,local_res10,&local_48,0);
  }
  uVar14 = (ulonglong)(iVar8 != -1);
  if (local_50 != 0) {
    if (local_58 == (longlong *)0x0) goto LAB_142d4b514;
    (**(code **)(*local_58 + 0x28))(local_58,0);
    if (local_58 != (longlong *)0x0) {
      local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
    }
    local_50 = 0;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
LAB_142d4b514:
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_60 + 1;
    lVar15 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return uVar14;
}



// FUNCTION 142d4b590 FUN_142d4b590 body=953 status=ok
// SIG undefined FUN_142d4b590(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4b590(longlong *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  longlong local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [40];
  undefined8 local_70;
  undefined1 local_40;
  
  iVar12 = 0;
  bVar1 = false;
  if (0 < DAT_1466ad2f0) {
    do {
      uVar11 = 0;
      if (*(longlong *)param_1[0x8d] == 0) break;
      local_b4 = DAT_1468b5d98;
      local_108 = 0xffffffff;
      uStack_100 = 0xffffffff;
      local_f8 = 0xffffffff;
      uStack_f0 = 0xffffffff;
      local_e8 = 0xffffffff;
      local_e4 = 0;
      uStack_e0 = 0;
      local_dc = 0;
      local_d8 = 0;
      local_d0 = 0xffffffff;
      local_cc = 0;
      local_c4 = 0;
      local_bc = _DAT_1468b5d90;
      lVar5 = *(longlong *)param_1[0x8d];
      if (lVar5 == 0) break;
      lVar4 = param_1[0x8d];
      local_108 = *(undefined8 *)(lVar5 + 8);
      uStack_100 = *(undefined8 *)(lVar5 + 0x10);
      local_f8 = *(undefined8 *)(lVar5 + 0x18);
      uStack_f0 = *(undefined8 *)(lVar5 + 0x20);
      local_e8 = *(undefined4 *)(lVar5 + 0x28);
      local_e4 = *(undefined4 *)(lVar5 + 0x2c);
      uStack_e0 = (undefined4)*(undefined8 *)(lVar5 + 0x30);
      local_dc = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x30) >> 0x20);
      local_d8 = *(longlong *)(lVar5 + 0x38);
      local_d0 = *(undefined4 *)(lVar5 + 0x40);
      local_cc = *(undefined8 *)(lVar5 + 0x44);
      local_c4 = *(undefined8 *)(lVar5 + 0x4c);
      local_bc = *(undefined8 *)(lVar5 + 0x54);
      local_b4 = *(undefined4 *)(lVar5 + 0x5c);
      local_b0 = *(undefined1 *)(lVar5 + 0x60);
      param_1[0x8d] = lVar5;
      _guard_xfg_dispatch_icall_nop(local_98,0,0x60);
      uVar2 = DAT_1468b5d98;
      uVar6 = _DAT_1468b5d90;
      *(undefined4 *)(lVar5 + 8) = 0xffffffff;
      *(undefined4 *)(lVar5 + 0xc) = 0;
      *(undefined4 *)(lVar5 + 0x10) = 0xffffffff;
      *(undefined4 *)(lVar5 + 0x14) = 0;
      *(undefined4 *)(lVar5 + 0x18) = 0xffffffff;
      *(undefined4 *)(lVar5 + 0x1c) = 0;
      *(undefined4 *)(lVar5 + 0x20) = 0xffffffff;
      *(undefined4 *)(lVar5 + 0x24) = 0;
      *(undefined4 *)(lVar5 + 0x28) = 0xffffffff;
      *(undefined4 *)(lVar5 + 0x2c) = 0;
      *(undefined8 *)(lVar5 + 0x30) = local_70;
      *(undefined8 *)(lVar5 + 0x38) = 0;
      *(undefined4 *)(lVar5 + 0x40) = 0xffffffff;
      *(undefined8 *)(lVar5 + 0x44) = 0;
      *(undefined8 *)(lVar5 + 0x54) = uVar6;
      *(undefined4 *)(lVar5 + 0x5c) = uVar2;
      *(undefined8 *)(lVar5 + 0x4c) = 0;
      *(undefined1 *)(lVar5 + 0x60) = local_40;
      FMemory::operator_delete(lVar4);
      if (local_d8 != 0) {
        lVar4 = UCelLightData::GetPrivateStaticClass();
        for (lVar5 = local_d8; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
          if (lVar5 == lVar4) goto LAB_142d4b7ec;
        }
      }
      cVar3 = FWeakObjectPtr::IsValid(&uStack_100);
      if ((((cVar3 != '\0') || (lVar5 = FWeakObjectPtr::Get(&local_f8), lVar5 != 0)) ||
          (lVar5 = FWeakObjectPtr::Get(&uStack_f0), lVar5 != 0)) ||
         (lVar5 = FWeakObjectPtr::Get(&local_e8), lVar5 != 0)) {
LAB_142d4b7ec:
        if (0.0 < local_cc._4_4_) {
          bVar1 = true;
          lVar5 = FWeakObjectPtr::Get(&local_d0);
          if (lVar5 != 0) {
            lVar5 = FWeakObjectPtr::Get(&local_d0);
            uVar11 = *(undefined8 *)(lVar5 + 0x10);
          }
          local_a8 = local_bc;
          local_a0 = local_b4;
          uVar6 = FWeakObjectPtr::Get(&local_e8);
          uVar7 = FWeakObjectPtr::Get(&uStack_f0);
          uVar8 = FWeakObjectPtr::Get(&local_f8);
          uVar9 = FWeakObjectPtr::Get(&uStack_100);
          uVar10 = FWeakObjectPtr::Get(&local_108);
          FUN_142e6f990(param_1,uVar10,local_d8,uVar11,local_cc._4_4_,&local_a8,(undefined4)local_c4
                        ,uVar9,uVar8,uVar7,uVar6,CONCAT44(local_dc,uStack_e0),local_c4._4_4_);
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < DAT_1466ad2f0);
    if (bVar1) {
      (**(code **)(*param_1 + 0x600))(param_1);
    }
  }
  if (*(longlong *)param_1[0x8d] == 0) {
    FUN_14288e3d0(param_1 + 5,0);
  }
  return;
}



// FUNCTION 142d4b950 FUN_142d4b950 body=209 status=ok
// SIG undefined FUN_142d4b950(void)

void FUN_142d4b950(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)(param_1 + 8);
  lVar4 = (longlong)*(int *)(param_1 + 0x10) * 0x170 + lVar3;
  do {
    if (lVar3 == lVar4) {
      FUN_142d2d400(param_1 + 8,local_res8);
      return;
    }
    fVar5 = param_2 + *(float *)(lVar3 + 0x30);
    *(float *)(lVar3 + 0x30) = fVar5;
    if (*(char *)(lVar3 + 0xcc) == '\0') {
LAB_142d4b9d8:
      if (DAT_1466ad3e4 < fVar5) goto LAB_142d4b9e1;
    }
    else {
      lVar1 = *(longlong *)(lVar3 + 0x160);
      lVar2 = (longlong)*(int *)(lVar3 + 0x168) * 0xa0 + lVar1;
      for (; lVar1 != lVar2; lVar1 = lVar1 + 0xa0) {
        if (*(char *)(lVar1 + 0xc) == '\0') goto LAB_142d4b9d8;
      }
LAB_142d4b9e1:
      FUN_142d37590(lVar3,param_1 + -0x28);
    }
    lVar3 = lVar3 + 0x170;
  } while( true );
}



// FUNCTION 142d4ba30 FUN_142d4ba30 body=1329 status=ok
// SIG undefined FUN_142d4ba30(void)

void FUN_142d4ba30(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  float fVar16;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  
  iVar14 = *(int *)(param_1 + 0x10) + -1;
  if (iVar14 < 0) {
    return;
  }
  lVar15 = (longlong)iVar14 * 0x68;
LAB_142d4bac0:
  plVar12 = (longlong *)(*(longlong *)(param_1 + 8) + lVar15);
  if ((*plVar12 != 0) && (lVar7 = FWeakObjectPtr::Get(plVar12 + 1), lVar7 != 0)) {
    if (*(char *)((longlong)plVar12 + 0x39) == '\0') {
      uVar8 = FWeakObjectPtr::Get(plVar12 + 1);
      lVar7 = ATTLCharacterCommon::GetCurrentSupportWeapon(uVar8);
      if (lVar7 == 0) goto LAB_142d4bb1a;
      uVar8 = FWeakObjectPtr::Get(plVar12 + 1);
      lVar7 = ATTLCharacterCommon::GetCurrentSupportWeapon(uVar8);
      if (*(char *)(lVar7 + 0x30) == '\0') goto LAB_142d4bb1a;
      goto LAB_142d4bee5;
    }
LAB_142d4bb1a:
    fVar1 = *(float *)((longlong)plVar12 + 0x5c);
    *(float *)((longlong)plVar12 + 0x5c) = fVar1 + param_2;
    if (((char)plVar12[7] == '\0') &&
       (fVar16 = (fVar1 + param_2) - *(float *)(plVar12 + 0xb),
       *(float *)(plVar12 + 0xc) <= fVar16 && fVar16 != *(float *)(plVar12 + 0xc)))
    goto LAB_142d4bec9;
    fVar16 = *(float *)(plVar12 + 2);
    fVar2 = *(float *)((longlong)plVar12 + 0x14);
    fVar3 = *(float *)(plVar12 + 3);
    fVar4 = *(float *)((longlong)plVar12 + 0x1c);
    if ((*(byte *)(*plVar12 + 0x30) & 8) != 0) {
      FUN_142d4f7f0(plVar12);
      FUN_142d4e970(plVar12);
    }
    FUN_142d4f640(plVar12,fVar1);
    lVar7 = *plVar12;
    if ((char)plVar12[7] == '\0') {
      if ((((*(uint *)(lVar7 + 0x30) & 0x10) != 0) || ((*(uint *)(lVar7 + 0x30) & 8) != 0)) ||
         (0.0001 < ABS(*(float *)(plVar12 + 2) * *(float *)((longlong)plVar12 + 0x14) *
                       *(float *)(plVar12 + 3) * *(float *)((longlong)plVar12 + 0x1c) -
                       fVar16 * fVar2 * fVar3 * fVar4))) {
        FUN_142d32570(plVar12);
      }
      goto LAB_142d4bee5;
    }
    if (*(longlong *)(lVar7 + 0x80) != 0) {
      lVar9 = UNodeMappingContainer::GetPrivateStaticClass();
      for (lVar11 = *(longlong *)(lVar7 + 0x80); lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x30))
      {
        if (lVar11 == lVar9) {
          if (*(longlong *)(lVar7 + 0x80) != 0) {
            lVar7 = *plVar12;
            if (*(longlong *)(lVar7 + 0x80) == 0) goto LAB_142d4bbfe;
            plVar10 = (longlong *)UNodeMappingContainer::GetPrivateStaticClass();
            plVar13 = *(longlong **)(lVar7 + 0x80);
            plVar5 = plVar13;
            goto joined_r0x000142d4bbeb;
          }
          break;
        }
      }
    }
    goto LAB_142d4bd00;
  }
LAB_142d4bec9:
  FUN_142d49a70(plVar12);
  FUN_142d46510((longlong *)(param_1 + 8),iVar14,1,1);
  goto LAB_142d4bee5;
joined_r0x000142d4bbeb:
  if (plVar5 == (longlong *)0x0) goto LAB_142d4bbfe;
  if (plVar5 == plVar10) goto LAB_142d4bc00;
  plVar5 = (longlong *)plVar5[6];
  goto joined_r0x000142d4bbeb;
LAB_142d4bbfe:
  plVar13 = (longlong *)0x0;
LAB_142d4bc00:
  lVar7 = plVar13[0x1f];
  if (lVar7 == 0) {
    (**(code **)(*plVar13 + 0x368))(plVar13);
    lVar7 = plVar13[0x1f];
    if (lVar7 != 0) goto LAB_142d4bc28;
  }
  else {
LAB_142d4bc28:
    lVar11 = UNodeMappingContainer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
        != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (((bVar6) && (fVar16 = *(float *)(lVar7 + 0x2c), 0.0001 < fVar16)) &&
       ((float)((int)ROUND((1.0 / fVar16 + 1.0 / fVar16) * fVar1 - 0.5) >> 1) <
        (float)((int)ROUND((*(float *)((longlong)plVar12 + 0x5c) +
                           *(float *)((longlong)plVar12 + 0x5c)) / fVar16 - 0.5) >> 1))) {
      local_a8 = DAT_1468b5da0;
      local_a0 = DAT_1468b5da8;
      uVar8 = FWeakObjectPtr::Get(plVar12 + 1);
      FUN_1427116d0(uVar8,*(undefined8 *)(*plVar12 + 0x80),0x3f800000,0,&local_a8,0);
    }
  }
LAB_142d4bd00:
  lVar7 = *plVar12;
  if (((*(byte *)(lVar7 + 0x30) & 2) != 0) && (*(longlong *)(lVar7 + 0x88) != 0)) {
    lVar9 = UNodeMappingContainer::GetPrivateStaticClass();
    lVar7 = *(longlong *)(lVar7 + 0x88);
    lVar11 = lVar7;
    if (lVar7 != 0) {
      do {
        if (lVar11 == lVar9) {
          if (lVar7 == 0) goto LAB_142d4be88;
          lVar7 = *plVar12;
          if (*(longlong *)(lVar7 + 0x88) == 0) goto LAB_142d4bd86;
          plVar10 = (longlong *)UNodeMappingContainer::GetPrivateStaticClass();
          plVar13 = *(longlong **)(lVar7 + 0x88);
          plVar5 = plVar13;
          goto joined_r0x000142d4bd76;
        }
        lVar11 = *(longlong *)(lVar11 + 0x30);
      } while (lVar11 != 0);
      FUN_142d32570(plVar12);
      goto LAB_142d4bee5;
    }
  }
  goto LAB_142d4be88;
joined_r0x000142d4bd76:
  if (plVar5 == (longlong *)0x0) goto LAB_142d4bd86;
  if (plVar5 == plVar10) goto LAB_142d4bd88;
  plVar5 = (longlong *)plVar5[6];
  goto joined_r0x000142d4bd76;
LAB_142d4bd86:
  plVar13 = (longlong *)0x0;
LAB_142d4bd88:
  lVar7 = plVar13[0x1f];
  if (lVar7 == 0) {
    (**(code **)(*plVar13 + 0x368))(plVar13);
    lVar7 = plVar13[0x1f];
    if (lVar7 == 0) goto LAB_142d4be88;
  }
  lVar11 = UNodeMappingContainer::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
      != lVar11 + 0x88)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (((bVar6) && (fVar16 = *(float *)(lVar7 + 0x2c), 0.0001 < fVar16)) &&
     ((float)((int)ROUND((1.0 / fVar16 + 1.0 / fVar16) * fVar1 - 0.5) >> 1) <
      (float)((int)ROUND((*(float *)((longlong)plVar12 + 0x5c) +
                         *(float *)((longlong)plVar12 + 0x5c)) / fVar16 - 0.5) >> 1))) {
    local_98 = DAT_1468b5da0;
    local_90 = DAT_1468b5da8;
    uVar8 = FWeakObjectPtr::Get(plVar12 + 1);
    FUN_1427116d0(uVar8,*(undefined8 *)(*plVar12 + 0x88),0x3f800000,0,&local_98,0);
  }
LAB_142d4be88:
  FUN_142d32570(plVar12);
LAB_142d4bee5:
  lVar15 = lVar15 + -0x68;
  iVar14 = iVar14 + -1;
  if (iVar14 < 0) {
    return;
  }
  goto LAB_142d4bac0;
}



// FUNCTION 142d4bf70 FUN_142d4bf70 body=131 status=ok
// SIG undefined FUN_142d4bf70(void)

void FUN_142d4bf70(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x20) == 0) ||
     ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x830) & 0x80) == 0)) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    lVar2 = (longlong)*(int *)(param_1 + 0x18) * 0x3b0 + lVar1;
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x3b0) {
      if ((-1 < *(int *)(lVar1 + 0x328)) && (-1 < *(int *)(lVar1 + 0x32c))) {
        FUN_142d4eec0(param_1 + -0x28,lVar1);
      }
    }
    FUN_142d4ad70(param_1 + -0x28);
  }
  return;
}



// FUNCTION 142d4c000 FUN_142d4c000 body=2536 status=ok
// SIG undefined FUN_142d4c000(void)

void FUN_142d4c000(longlong *param_1,float param_2)

{
  float *pfVar1;
  bool bVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  float *pfVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_a8;
  float local_a0;
  
  FUN_142357eb0();
  cVar4 = (**(code **)(*param_1 + 0x2a0))(param_1);
  if (cVar4 == '\0') {
    return;
  }
  lVar13 = param_1[4];
  if (lVar13 == 0) {
LAB_142d4c07f:
    lVar13 = 0;
  }
  else {
    lVar6 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_142d4c07f;
  }
  lVar6 = param_1[0x24];
  if (lVar6 == 0) {
    lVar6 = FUN_1423407b0(param_1);
  }
  if (lVar13 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x31) & 1) == 0) {
    return;
  }
  if (lVar6 == 0) {
    return;
  }
  if (((*(char *)(lVar13 + 0x128) != '\x03') && ((*(byte *)(lVar13 + 0x90) & 0x11) == 0x10)) &&
     ((*(byte *)(lVar13 + 0x90) & 0x20) == 0)) {
    return;
  }
  plVar8 = (longlong *)param_1[0x36];
  if (plVar8 == (longlong *)0x0) {
    uVar7 = FUN_1429f6c00();
    plVar8 = (longlong *)AGameStateBase::OnRep_GameModeClass(lVar13,uVar7);
    if (plVar8 == (longlong *)0x0) {
LAB_142d4c137:
      plVar8 = (longlong *)0x0;
    }
    else {
      lVar9 = FUN_1429f6c00();
      if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
          lVar9 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_142d4c137;
    }
    param_1[0x36] = (longlong)plVar8;
    if (plVar8 == (longlong *)0x0) {
      return;
    }
  }
  cVar4 = (**(code **)(*plVar8 + 0x2a0))(plVar8);
  if (cVar4 == '\0') {
    return;
  }
  if (((char)param_1[0x3f] != '\0') ||
     (fVar27 = *(float *)((longlong)param_1 + 0x1d4), fVar27 <= 0.0001)) {
    lVar9 = param_1[0x36];
    fVar27 = SQRT(*(float *)(lVar9 + 0x18c) * *(float *)(lVar9 + 0x18c) +
                  *(float *)(lVar9 + 400) * *(float *)(lVar9 + 400) +
                  *(float *)(lVar9 + 0x194) * *(float *)(lVar9 + 0x194));
    if (fVar27 < 0.0001) {
      return;
    }
  }
  fVar26 = *(float *)(lVar6 + 0x790);
  fVar14 = *(float *)((longlong)param_1 + 0x184);
  if (*(float *)((longlong)param_1 + 0x184) < 0.0) {
    *(float *)((longlong)param_1 + 0x184) = fVar26;
    *(undefined8 *)((longlong)param_1 + 0x1fc) = *(undefined8 *)(param_1[0x36] + 0x18c);
    *(undefined4 *)((longlong)param_1 + 0x204) = *(undefined4 *)(param_1[0x36] + 0x194);
    *(float *)(param_1 + 0x3a) =
         SQRT(*(float *)((longlong)param_1 + 0x1fc) * *(float *)((longlong)param_1 + 0x1fc) +
              *(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x40) +
              *(float *)((longlong)param_1 + 0x204) * *(float *)((longlong)param_1 + 0x204));
    fVar14 = fVar26;
  }
  if (fVar26 - fVar14 < *(float *)((longlong)param_1 + 0x17c)) {
    return;
  }
  fVar20 = *(float *)(param_1 + 0x30);
  fVar25 = 1.0;
  if (((0.0 < fVar20) &&
      (fVar14 = (fVar26 - fVar14) - *(float *)((longlong)param_1 + 0x17c), fVar14 < fVar20)) &&
     (fVar25 = fVar14 / fVar20, 1.0 <= fVar25)) {
    fVar25 = 1.0;
  }
  if ((fVar25 <= 0.0) || (fVar26 < *(float *)(param_1 + 0x37) + *(float *)(param_1 + 0x3b)))
  goto LAB_142d4c5fd;
  *(float *)(param_1 + 0x3b) = fVar26;
  srand(*(uint *)((longlong)param_1 + 0x18c));
  fVar26 = *(float *)((longlong)param_1 + 0x1c4);
  if (0.0 <= fVar26) {
    if (180.0 <= fVar26) {
      fVar26 = 180.0;
    }
  }
  else {
    fVar26 = 0.0;
  }
  fVar14 = *(float *)((longlong)param_1 + 0x1dc);
  if (0.0 <= fVar14) {
    fVar26 = fVar14 - fVar26;
  }
  else {
    fVar26 = 0.0;
    fVar14 = 360.0;
  }
  uVar7 = FUN_142e6f710();
  lVar9 = AGameStateBase::OnRep_GameModeClass(lVar13,uVar7);
  if (lVar9 == 0) {
LAB_142d4c3c0:
    uVar7 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    puVar11 = &local_b8;
    lVar9 = 0;
    local_b8 = uVar7;
    local_b0 = DAT_1468b5d98;
  }
  else {
    lVar10 = FUN_142e6f710();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_142d4c3c0;
    puVar11 = (undefined8 *)FUN_142d613d0(lVar9,&local_b8);
    uVar7 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  }
  local_c8 = *puVar11;
  fVar20 = *(float *)(puVar11 + 1);
  uVar3 = local_c8;
  local_c0 = fVar20;
  local_c8 = uVar3;
  if ((lVar9 != 0) && (*(char *)(lVar9 + 0x200) != '\0')) {
    fVar21 = (float)local_c8;
    local_c8._4_4_ = (float)((ulonglong)local_c8 >> 0x20);
    fVar17 = local_c8._4_4_;
    if (((float)local_c8 == DAT_1468b5d90) &&
       ((local_c8._4_4_ == DAT_1468b5d94 && (fVar20 == DAT_1468b5d98)))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar13 = *(longlong *)(lVar13 + 0x168);
      if (lVar13 == 0) {
        local_b8 = uVar7;
        puVar11 = &local_b8;
        local_b0 = DAT_1468b5d98;
      }
      else {
        puVar11 = &local_c8;
        local_c0 = (float)*(undefined4 *)(lVar13 + 0x228);
        local_c8 = *(undefined8 *)(lVar13 + 0x220);
      }
      local_b8 = *puVar11;
      fVar21 = fVar21 - (float)local_b8;
      fVar17 = fVar17 - (float)((ulonglong)local_b8 >> 0x20);
      local_b0 = *(float *)(puVar11 + 1);
      fVar20 = fVar20 - *(float *)(puVar11 + 1);
      local_c8 = CONCAT44(fVar17,fVar21);
      local_c0 = fVar20;
      fVar15 = SQRT(fVar21 * fVar21 + fVar17 * fVar17 + fVar20 * fVar20);
      if (*(float *)(param_1 + 0x2f) <= fVar15 && fVar15 != *(float *)(param_1 + 0x2f)) {
        if (*(char *)(lVar9 + 0x178) == '\0') {
          lVar13 = param_1[0x36];
          puVar11 = &local_c8;
          local_c8 = CONCAT44((fVar17 + *(float *)(lVar13 + 400)) * 0.5,
                              (fVar21 + *(float *)(lVar13 + 0x18c)) * 0.5);
          local_c0 = (fVar20 + *(float *)(lVar13 + 0x194)) * 0.5;
        }
        else {
          local_b0 = fVar20;
          puVar11 = &local_b8;
          local_b8 = local_c8;
        }
        uVar7 = *puVar11;
        fVar20 = *(float *)(puVar11 + 1);
      }
      else {
        *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
        uVar7 = local_c8;
      }
      *(undefined8 *)((longlong)param_1 + 0x1fc) = uVar7;
      *(float *)((longlong)param_1 + 0x204) = fVar20;
    }
  }
  iVar5 = rand();
  fVar26 = (float)iVar5 * 3.051851e-05 * (fVar14 - fVar26) + fVar26;
  auVar24 = ZEXT416((uint)fVar26);
  uVar16 = (ulonglong)(uint)fVar26;
  *(float *)((longlong)param_1 + 0x1dc) = fVar26;
  if (360.0 < fVar26) {
    do {
      auVar24._0_4_ = auVar24._0_4_ + -360.0;
      uVar16 = auVar24._0_8_;
    } while (360.0 < auVar24._0_4_);
    *(float *)((longlong)param_1 + 0x1dc) = auVar24._0_4_;
  }
  fVar26 = *(float *)(param_1 + 0x38);
  uVar7 = __libm_sse2_sincosf_(uVar16);
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  *(float *)(param_1 + 0x3e) = (float)((ulonglong)uVar7 >> 0x20) * fVar26;
  *(float *)((longlong)param_1 + 0x1ec) = (float)uVar7 * fVar26;
  iVar5 = rand();
  *(int *)((longlong)param_1 + 0x18c) = iVar5;
LAB_142d4c5fd:
  if (*(float *)(param_1 + 0x3e) != *(float *)((longlong)param_1 + 0x1e4)) {
    fVar14 = (float)FUN_142d37cf0(param_1);
    fVar26 = (float)(int)(fVar14 * 0.0027777778) * 360.0;
    if (ABS(fVar14) < ABS(fVar26)) {
      fVar26 = fVar14;
    }
    fVar14 = fVar14 - fVar26;
    if (fVar14 < 0.0) {
      fVar14 = fVar14 + 360.0;
    }
    if (180.0 < fVar14) {
      fVar14 = fVar14 - 360.0;
    }
    *(float *)((longlong)param_1 + 0x1e4) = fVar14;
  }
  fVar26 = *(float *)(param_1 + 0x3c);
  if (*(float *)((longlong)param_1 + 0x1ec) != fVar26) {
    fVar26 = (float)FUN_142d37cf0(param_1,fVar26);
    fVar14 = (float)(int)(fVar26 * 0.0027777778) * 360.0;
    if (ABS(fVar26) < ABS(fVar14)) {
      fVar14 = fVar26;
    }
    fVar26 = fVar26 - fVar14;
    if (fVar26 < 0.0) {
      fVar26 = fVar26 + 360.0;
    }
    if (180.0 < fVar26) {
      fVar26 = fVar26 - 360.0;
    }
    *(float *)(param_1 + 0x3c) = fVar26;
  }
  pfVar1 = (float *)((longlong)param_1 + 0x1fc);
  fVar14 = *(float *)((longlong)param_1 + 0x1e4);
  pfVar12 = (float *)FVector::Rotation(pfVar1,&local_b8);
  local_a8 = CONCAT44(fVar25 * fVar14 + pfVar12[1],fVar26 * fVar25 + *pfVar12);
  *(undefined8 *)pfVar12 = local_a8;
  local_a0 = pfVar12[2];
  pfVar12 = (float *)FRotator::Vector(&local_a8,&local_c8);
  fVar26 = pfVar12[1];
  fVar14 = *pfVar12;
  fVar20 = pfVar12[2];
  fVar25 = fVar14 * fVar14 + fVar26 * fVar26 + fVar20 * fVar20;
  if (fVar25 == 1.0) {
    local_c8 = *(undefined8 *)pfVar12;
    local_c0 = pfVar12[2];
    local_b0 = local_c0;
    fVar21 = (float)local_c8;
    fVar17 = (float)((ulonglong)local_c8 >> 0x20);
  }
  else {
    local_b0 = DAT_1468b5d98;
    fVar21 = DAT_1468b5d90;
    fVar17 = DAT_1468b5d94;
    if (1e-08 <= fVar25) {
      auVar18._8_8_ = 0;
      auVar18._0_8_ = CONCAT44(0,fVar25);
      auVar22._8_8_ = 0;
      auVar22._0_8_ = CONCAT44(0,fVar25);
      auVar24 = rsqrtss(auVar22,auVar18);
      fVar17 = auVar24._0_4_;
      fVar17 = fVar17 + fVar17 * (0.5 - fVar25 * 0.5 * fVar17 * fVar17);
      fVar17 = fVar17 + fVar17 * (0.5 - fVar25 * 0.5 * fVar17 * fVar17);
      fVar21 = fVar14 * fVar17;
      local_b0 = fVar20 * fVar17;
      fVar17 = fVar26 * fVar17;
    }
  }
  lVar13 = param_1[0x36];
  local_b0 = local_b0 * fVar27;
  *(ulonglong *)(lVar13 + 0x18c) = CONCAT44(fVar17 * fVar27,fVar21 * fVar27);
  *(float *)(lVar13 + 0x194) = local_b0;
  if ((char)param_1[0x39] != '\0') {
    fVar26 = (float)FUN_1428cc5b0(lVar6);
    *(float *)((longlong)param_1 + 0x204) =
         fVar26 * *(float *)((longlong)param_1 + 0x1cc) * param_2 +
         *(float *)((longlong)param_1 + 0x204);
    fVar26 = *(float *)(param_1 + 0x40);
    fVar14 = *pfVar1;
    fVar20 = *(float *)((longlong)param_1 + 0x204);
    fVar25 = fVar14 * fVar14 + fVar26 * fVar26 + fVar20 * fVar20;
    if (1e-08 < fVar25) {
      auVar19._8_8_ = 0;
      auVar19._0_8_ = CONCAT44(0,fVar25);
      auVar23._8_8_ = 0;
      auVar23._0_8_ = CONCAT44(0,fVar25);
      auVar24 = rsqrtss(auVar23,auVar19);
      fVar21 = auVar24._0_4_;
      fVar21 = fVar21 + fVar21 * (0.5 - fVar25 * 0.5 * fVar21 * fVar21);
      fVar21 = fVar21 + fVar21 * (0.5 - fVar25 * 0.5 * fVar21 * fVar21);
      fVar14 = fVar14 * fVar21;
      *pfVar1 = fVar14;
      *(float *)(param_1 + 0x40) = fVar26 * fVar21;
      *(float *)((longlong)param_1 + 0x204) = fVar20 * fVar21;
    }
    fVar26 = *(float *)(param_1 + 0x3a);
    *(float *)(param_1 + 0x40) = fVar26 * *(float *)(param_1 + 0x40);
    *(float *)((longlong)param_1 + 0x204) = fVar26 * *(float *)((longlong)param_1 + 0x204);
    *pfVar1 = fVar26 * fVar14;
  }
  *(float *)((longlong)param_1 + 0x1d4) = fVar27;
  return;
}



// FUNCTION 142d4c9f0 FUN_142d4c9f0 body=2156 status=ok
// SIG undefined FUN_142d4c9f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4c9f0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  longlong lVar9;
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
  undefined1 local_res8 [8];
  float local_f8;
  float fStack_f4;
  undefined4 local_f0;
  float local_e8;
  float fStack_e4;
  float local_e0;
  undefined8 local_d8;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  
  FUN_142357eb0();
  cVar2 = (**(code **)(*param_1 + 0x2a0))(param_1);
  if (cVar2 == '\0') {
    return;
  }
  lVar9 = param_1[4];
  if (lVar9 == 0) {
LAB_142d4ca6a:
    lVar9 = 0;
  }
  else {
    lVar4 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_142d4ca6a;
  }
  lVar4 = param_1[0x24];
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0(param_1);
  }
  if (lVar9 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x31) & 1) == 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (((*(char *)(lVar9 + 0x128) != '\x03') && ((*(byte *)(lVar9 + 0x90) & 0x11) == 0x10)) &&
     ((*(byte *)(lVar9 + 0x90) & 0x20) == 0)) {
    return;
  }
  lVar6 = param_1[0x36];
  if (lVar6 == 0) {
    uVar5 = FUN_1429f6c00();
    lVar6 = AGameStateBase::OnRep_GameModeClass(lVar9,uVar5);
    if (lVar6 == 0) {
LAB_142d4cb22:
      lVar6 = 0;
    }
    else {
      lVar7 = FUN_1429f6c00();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_142d4cb22;
    }
    param_1[0x36] = lVar6;
    if (lVar6 == 0) {
      return;
    }
  }
  fVar26 = *(float *)((longlong)param_1 + 0x1dc);
  if ((fVar26 <= 0.0001) &&
     (fVar26 = SQRT(*(float *)(lVar6 + 0x18c) * *(float *)(lVar6 + 0x18c) +
                    *(float *)(lVar6 + 400) * *(float *)(lVar6 + 400) +
                    *(float *)(lVar6 + 0x194) * *(float *)(lVar6 + 0x194)), fVar26 < 0.0001)) {
    return;
  }
  fVar11 = *(float *)((longlong)param_1 + 0x184);
  fVar16 = *(float *)(lVar4 + 0x790);
  fVar24 = 0.0;
  if (fVar11 < 0.0) {
    *(float *)((longlong)param_1 + 0x184) = fVar16;
    srand(*(uint *)((longlong)param_1 + 0x18c));
    fVar11 = *(float *)((longlong)param_1 + 0x1cc);
    iVar3 = rand();
    *(float *)(param_1 + 0x3b) = (float)iVar3 * 3.051851e-05 * fVar11;
    fVar11 = *(float *)((longlong)param_1 + 0x184);
  }
  fVar16 = fVar16 - fVar11;
  if (fVar16 < *(float *)((longlong)param_1 + 0x17c)) {
    return;
  }
  fVar11 = *(float *)(param_1 + 0x30);
  fVar18 = 1.0;
  if ((fVar11 <= 0.0) || (fVar10 = fVar16 - *(float *)((longlong)param_1 + 0x17c), fVar11 <= fVar10)
     ) {
LAB_142d4cc61:
    if (0.0 < *(float *)(param_1 + 0x2f)) {
      uVar5 = FUN_142e6f710();
      lVar4 = AGameStateBase::OnRep_GameModeClass(lVar9,uVar5);
      if (lVar4 != 0) {
        lVar6 = FUN_142e6f710();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (((bVar1) && (*(char *)(lVar4 + 0x200) != '\0')) &&
           ((*(longlong *)(lVar4 + 0x1a0) != 0 || (*(longlong *)(lVar4 + 0x1a8) != 0)))) {
          lVar9 = *(longlong *)(lVar9 + 0x168);
          if (lVar9 == 0) {
            local_d0 = (float)DAT_1468b5d98;
            pfVar8 = (float *)&local_d8;
            local_d8 = _DAT_1468b5d90;
          }
          else {
            pfVar8 = &local_f8;
            local_f8 = *(float *)(lVar9 + 0x220);
            local_f0 = *(undefined4 *)(lVar9 + 0x228);
            fStack_f4 = (float)*(undefined4 *)(lVar9 + 0x224);
          }
          uVar5 = *(undefined8 *)pfVar8;
          local_d0 = pfVar8[2];
          pfVar8 = (float *)FUN_142d613d0(lVar4,&local_e8);
          fVar11 = *pfVar8 - (float)uVar5;
          fVar10 = pfVar8[1] - (float)((ulonglong)uVar5 >> 0x20);
          fVar10 = fVar10 * fVar10 + fVar11 * fVar11 +
                   (pfVar8[2] - local_d0) * (pfVar8[2] - local_d0);
          fVar11 = *(float *)(param_1 + 0x2f);
          local_d8 = uVar5;
          if (SQRT(fVar10) <= fVar11) {
            fVar18 = (fVar18 / (fVar11 * fVar11)) * fVar10;
          }
        }
      }
    }
    if (0.0 < fVar18) goto LAB_142d4ce08;
  }
  else {
    fVar18 = fVar10 / fVar11;
    if (1.0 <= fVar18) {
      fVar18 = 1.0;
    }
    if (0.0 < fVar18) goto LAB_142d4cc61;
  }
  lVar9 = _DAT_1464aa818;
  if ((*(float *)(param_1 + 0x3c) == 0.0) && (*(float *)((longlong)param_1 + 0x1e4) == 0.0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    param_1[0x32] = _DAT_1464aa810;
    param_1[0x33] = lVar9;
    *(undefined4 *)(param_1 + 0x3c) = (undefined4)DAT_1468b5d88;
    *(undefined4 *)((longlong)param_1 + 0x1e4) = DAT_1468b5d88._4_4_;
    return;
  }
LAB_142d4ce08:
  lVar4 = param_1[0x37];
  fVar11 = *(float *)(param_1 + 0x3b);
  lVar9 = lVar4 + (longlong)(int)param_1[0x38] * 0x18;
  fVar10 = 0.0;
  for (; lVar4 != lVar9; lVar4 = lVar4 + 0x18) {
    pfVar8 = (float *)FUN_142dac000(lVar4,local_res8,fVar16 + fVar11);
    fVar24 = fVar24 + *pfVar8;
    fVar10 = fVar10 + pfVar8[1];
  }
  local_f0 = 0;
  fVar25 = fVar24 * *(float *)(param_1 + 0x39) * fVar18;
  fVar18 = fVar10 * *(float *)(param_1 + 0x39) * fVar18;
  local_f8 = fVar18;
  fStack_f4 = fVar25;
  FRotator::Vector(&local_f8,&local_d8);
  fVar14 = -*(float *)((longlong)param_1 + 0x194);
  uVar5 = *(undefined8 *)(param_1[0x36] + 0x18c);
  fVar22 = -*(float *)(param_1 + 0x33);
  fVar11 = *(float *)(param_1[0x36] + 0x194);
  fVar24 = (float)((ulonglong)uVar5 >> 0x20);
  fVar16 = *(float *)((longlong)param_1 + 0x19c);
  fVar23 = -*(float *)(param_1 + 0x32);
  local_e8 = (float)uVar5;
  fVar10 = fVar11 * fVar14 - fVar24 * fVar22;
  fVar13 = local_e8 * fVar22 - fVar11 * fVar23;
  fVar10 = fVar10 + fVar10;
  fVar12 = fVar24 * fVar23 - local_e8 * fVar14;
  fVar13 = fVar13 + fVar13;
  fVar12 = fVar12 + fVar12;
  local_e0 = (fVar23 * fVar13 - fVar14 * fVar10) + fVar11 + fVar16 * fVar12;
  _local_e8 = CONCAT44((fVar22 * fVar10 - fVar23 * fVar12) + fVar24 + fVar16 * fVar13,
                       (fVar14 * fVar12 - fVar22 * fVar13) + local_e8 + fVar16 * fVar10);
  FVector4::ToOrientationQuat(&local_e8,&local_c8);
  lVar9 = param_1[0x36];
  fVar24 = local_d0 * local_c4 - local_d8._4_4_ * local_c0;
  fVar24 = fVar24 + fVar24;
  fVar11 = (float)local_d8 * local_c0 - local_d0 * local_c8;
  fVar16 = local_d8._4_4_ * local_c8 - (float)local_d8 * local_c4;
  fVar11 = fVar11 + fVar11;
  fVar16 = fVar16 + fVar16;
  local_e0 = ((local_c8 * fVar11 - local_c4 * fVar24) + local_d0 + local_bc * fVar16) * fVar26;
  *(ulonglong *)(lVar9 + 0x18c) =
       CONCAT44(((local_c0 * fVar24 - local_c8 * fVar16) + local_d8._4_4_ + local_bc * fVar11) *
                fVar26,((local_c4 * fVar16 - local_c0 * fVar11) +
                       (float)local_d8 + local_bc * fVar24) * fVar26);
  *(float *)(lVar9 + 0x194) = local_e0;
  fVar19 = -local_c8;
  fVar15 = -local_c4;
  fVar17 = -local_c0;
  pfVar8 = (float *)FVector4::ToOrientationQuat(param_1[0x36] + 0x18c,&local_e8);
  fVar26 = *pfVar8;
  fVar16 = pfVar8[1];
  fVar11 = pfVar8[2];
  fVar24 = pfVar8[3];
  fVar13 = local_bc * fVar26 * _DAT_146b31c70;
  fVar14 = fVar17 * fVar26 * fRam0000000146b31c74;
  fVar22 = fVar15 * fVar26 * fRam0000000146b31c78;
  fVar23 = fVar19 * fVar26 * fRam0000000146b31c7c;
  fVar26 = fVar17 * fVar16 * _DAT_146b31c60;
  fVar10 = local_bc * fVar16 * fRam0000000146b31c64;
  fVar12 = fVar19 * fVar16 * fRam0000000146b31c68;
  fVar16 = fVar15 * fVar16 * fRam0000000146b31c6c;
  *(float *)((longlong)param_1 + 0x1e4) = fVar18;
  fVar18 = fVar15 * fVar11 * _DAT_146b31c50;
  fVar20 = fVar19 * fVar11 * fRam0000000146b31c54;
  fVar21 = local_bc * fVar11 * fRam0000000146b31c58;
  fVar11 = fVar17 * fVar11 * fRam0000000146b31c5c;
  *(float *)(param_1 + 0x3c) = fVar25;
  *(float *)(param_1 + 0x32) = fVar13 + fVar24 * fVar19 + fVar26 + fVar18;
  *(float *)((longlong)param_1 + 0x194) = fVar14 + fVar24 * fVar15 + fVar10 + fVar20;
  *(float *)(param_1 + 0x33) = fVar22 + fVar24 * fVar17 + fVar12 + fVar21;
  *(float *)((longlong)param_1 + 0x19c) = fVar23 + fVar24 * local_bc + fVar16 + fVar11;
  return;
}



// FUNCTION 142d4d260 FUN_142d4d260 body=320 status=ok
// SIG undefined FUN_142d4d260(void)

void FUN_142d4d260(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  FUN_142357eb0();
  uVar6 = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x344)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x67,0);
  }
  plVar5 = param_1 + 0x30;
  bVar2 = false;
  if (plVar5 != param_1 + 0x66) {
    do {
      if ((char)plVar5[8] != '\0') {
        plVar1 = (longlong *)param_1[0x2f];
        if (((plVar1 != (longlong *)0x0) && ((*(uint *)((longlong)plVar1 + 0x4cc) >> 1 & 1) != 0))
           && (cVar3 = (**(code **)(*plVar1 + 0x768))(), cVar3 != '\0')) {
          (**(code **)(*param_1 + 0x410))(param_1,plVar5);
        }
        *(undefined1 *)(plVar5 + 8) = 0;
        bVar2 = true;
      }
      plVar5 = plVar5 + 9;
    } while (plVar5 != param_1 + 0x66);
    if (bVar2) {
      (**(code **)(*param_1 + 0x260))(param_1);
    }
  }
  iVar4 = FUN_14233f450(param_1);
  if (iVar4 == 3) {
    plVar5 = (longlong *)param_1[0x69];
    uVar7 = (longlong)(int)param_1[0x6a] & 0x1fffffffffffffff;
    if (plVar5 + (int)param_1[0x6a] < plVar5) {
      uVar7 = uVar6;
    }
    if (uVar7 != 0) {
      do {
        if ((*plVar5 != 0) && (param_1[0x2f] != 0)) {
          FUN_142e56460(param_1[0x2f],*plVar5,0);
        }
        plVar5 = plVar5 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar7);
    }
    *(undefined4 *)(param_1 + 0x6a) = 0;
    if (*(int *)((longlong)param_1 + 0x354) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x69,0);
    }
  }
  return;
}



// FUNCTION 142d4d3a0 FUN_142d4d3a0 body=150 status=ok
// SIG undefined FUN_142d4d3a0(void)

undefined8 FUN_142d4d3a0(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined8 local_res8 [4];
  undefined2 *local_18;
  undefined8 local_10;
  
  puVar1 = *(undefined2 **)(param_1 + 0x28);
  if (puVar1 == (undefined2 *)0x0) {
    local_10 = 5;
    local_18 = puVar1;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,&DAT_143f3edc8,10);
  }
  else {
    local_res8[0] = *(undefined8 *)(puVar1 + 0xc);
    FName::ToString(local_res8,&local_18);
  }
  puVar1 = &DAT_143f3eda8;
  if ((int)local_10 != 0) {
    puVar1 = local_18;
  }
  FString::PrintfImpl(param_2,L"AttributeData.%s",puVar1);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142d4d440 ToString body=80 status=ok
// SIG undefined ToString(void)

undefined8 UAIDataProvider_QueryParams::ToString(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FUN_142ca25e0(param_1 + 0x28,local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"AttributeInitializationData.%s",puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142d4d490 FUN_142d4d490 body=198 status=ok
// SIG undefined FUN_142d4d490(void)

undefined8 FUN_142d4d490(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined8 local_res8;
  undefined2 *local_18;
  undefined8 local_10;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar3 = UAnimNotifyState::GetPrivateStaticClass();
    lVar1 = *(longlong *)(param_1 + 0x28);
    for (lVar2 = lVar1; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar3) {
        if (lVar1 != 0) {
          local_res8 = *(undefined8 *)(lVar1 + 0x18);
          FName::ToString(&local_res8,&local_18);
          goto LAB_142d4d4f9;
        }
        break;
      }
    }
  }
  local_10 = 5;
  local_18 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,&DAT_143f3edc8,10);
LAB_142d4d4f9:
  puVar4 = &DAT_143f3eda8;
  if ((int)local_10 != 0) {
    puVar4 = local_18;
  }
  FString::PrintfImpl(param_2,L"AttributeInitializer.%s",puVar4);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142d4d560 FUN_142d4d560 body=1017 status=ok
// SIG undefined FUN_142d4d560(void)

void FUN_142d4d560(longlong *param_1,float *param_2,float *param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  undefined8 local_118;
  float local_110;
  undefined8 local_108;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  
  if (((param_1 != (longlong *)0x0) && (lVar6 = (**(code **)(*param_1 + 0x148))(), lVar6 != 0)) &&
     (iVar5 = FUN_1428cf800(lVar6), iVar5 != 3)) {
    fVar11 = param_3[1];
    fVar1 = param_3[2];
    fVar2 = *param_3;
    fVar10 = fVar2 * fVar2 + fVar11 * fVar11 + fVar1 * fVar1;
    if (fVar10 == 1.0) {
      local_118 = *(undefined8 *)param_3;
      local_110 = param_3[2];
      fVar14 = local_110;
      fVar15 = (float)local_118;
      fVar12 = (float)((ulonglong)local_118 >> 0x20);
    }
    else {
      fVar14 = DAT_1468b5d98;
      fVar15 = DAT_1468b5d90;
      fVar12 = DAT_1468b5d94;
      if (1e-08 <= fVar10) {
        auVar13 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar12 = auVar13._0_4_;
        fVar12 = fVar12 + fVar12 * (0.5 - fVar10 * 0.5 * fVar12 * fVar12);
        fVar12 = fVar12 + fVar12 * (0.5 - fVar10 * 0.5 * fVar12 * fVar12);
        fVar15 = fVar2 * fVar12;
        fVar14 = fVar1 * fVar12;
        fVar12 = fVar11 * fVar12;
      }
    }
    local_d8 = (**(code **)(*param_1 + 0x148))(param_1);
    local_d0 = &local_d8;
    local_c8 = FUN_14073d760(&local_d8,DAT_146b31ef0);
    puVar4 = local_d0;
    local_c0 = &local_d8;
    local_b8 = 0;
    puVar7 = (undefined8 *)FUN_14073d760(local_d0,local_c8);
    puVar8 = (undefined8 *)FUN_14073d760(local_c0,local_b8);
    for (; puVar7 != puVar8; puVar7 = (undefined8 *)FUN_14073d760(puVar4,*puVar7)) {
      lVar6 = *(longlong *)(puVar7[2] + 0x118);
      if (lVar6 != 0) {
        lVar6 = *(longlong *)(lVar6 + 0x168);
        if (lVar6 == 0) {
          local_e0 = DAT_1468b5d98;
          puVar9 = &local_e8;
          local_e8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        }
        else {
          puVar9 = &local_118;
          local_110 = *(float *)(lVar6 + 0x228);
          local_118 = *(undefined8 *)(lVar6 + 0x220);
        }
        uVar3 = *puVar9;
        local_100 = *(float *)(puVar9 + 1);
        local_108._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
        fVar11 = ((float)uVar3 - *param_2) * fVar15 + (local_108._4_4_ - param_2[1]) * fVar12 +
                 (local_100 - param_2[2]) * fVar14;
        local_f8 = fVar15 * fVar11 + *param_2;
        local_f4 = fVar12 * fVar11 + param_2[1];
        local_f0 = fVar14 * fVar11 + param_2[2];
        fVar11 = local_f8 - (float)uVar3;
        if (SQRT(fVar10) <= 0.0) {
          fVar11 = 0.0;
        }
        else {
          fVar11 = SQRT((local_f4 - local_108._4_4_) * (local_f4 - local_108._4_4_) +
                        fVar11 * fVar11 + (local_f0 - local_100) * (local_f0 - local_100)) *
                   (1.0 / SQRT(fVar10));
        }
        local_108 = uVar3;
        FUN_142d4db00(puVar7[2],CONCAT71((int7)((ulonglong)lVar6 >> 8),1),&local_f8,param_4,fVar11,0
                     );
      }
    }
  }
  return;
}



// FUNCTION 142d4d960 FUN_142d4d960 body=405 status=ok
// SIG undefined FUN_142d4d960(void)

void FUN_142d4d960(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *local_res18;
  longlong local_res20;
  undefined8 local_78;
  undefined8 uStack_70;
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
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar3 = FUN_14233f450();
  if ((iVar3 != 3) && (lVar4 = FUN_142d3b850(param_1,param_2 + 7), lVar4 != 0)) {
    iVar3 = *(int *)(param_2 + 0xb);
    if ((iVar3 < 0) || (*(int *)(lVar4 + 0x20) <= iVar3)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar4 = (longlong)iVar3 * 0x50 + *(longlong *)(lVar4 + 0x18);
      if ((*(byte *)(lVar4 + 0x30) & 2) != 0) {
        lVar5 = FUN_1422312c0(*(undefined8 *)(param_1 + 0x118));
        if (lVar5 == 0) {
          return;
        }
        lVar6 = FUN_142e4e4a0();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) {
          return;
        }
        cVar2 = FUN_142d6fcd0(lVar5);
        if (cVar2 != '\0') {
          return;
        }
      }
      *(int *)(lVar4 + 0x34) = *(int *)(lVar4 + 0x34) + 1;
      lVar5 = *(longlong *)(param_1 + 0x120);
      if (lVar5 == 0) {
        lVar5 = FUN_1423407b0(param_1);
      }
      *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)(lVar5 + 0x790);
      local_res18 = (longlong *)0x0;
      local_res20 = 0;
      FUN_142d46d50(param_1,lVar4,&local_res18,&local_res20);
      if ((local_res18 != (longlong *)0x0) && (local_res20 != 0)) {
        local_78 = *param_2;
        uStack_70 = param_2[1];
        local_68 = param_2[2];
        uStack_60 = param_2[3];
        local_58 = param_2[4];
        uStack_50 = param_2[5];
        local_48 = param_2[6];
        uStack_40 = param_2[7];
        local_38 = *(undefined4 *)(param_2 + 8);
        uStack_34 = *(undefined4 *)((longlong)param_2 + 0x44);
        uStack_30 = *(undefined4 *)(param_2 + 9);
        uStack_2c = *(undefined4 *)((longlong)param_2 + 0x4c);
        local_28 = *(undefined4 *)(param_2 + 10);
        uStack_24 = *(undefined4 *)((longlong)param_2 + 0x54);
        uStack_20 = *(undefined4 *)(param_2 + 0xb);
        uStack_1c = *(undefined4 *)((longlong)param_2 + 0x5c);
        (**(code **)(*local_res18 + 0x208))(local_res18,local_res20,&local_78);
      }
    }
  }
  return;
}



// FUNCTION 142d4db00 FUN_142d4db00 body=312 status=ok
// SIG undefined FUN_142d4db00(void)

ulonglong FUN_142d4db00(longlong param_1,char param_2,undefined8 *param_3,undefined8 param_4,
                       float param_5,undefined1 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  float fVar4;
  undefined8 local_res8;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  char local_1c;
  
  local_28 = *param_3;
  local_20 = *(undefined4 *)(param_3 + 1);
  local_38 = 0;
  local_30 = param_4;
  local_1c = param_2;
  uVar3 = FUN_142d34220();
  if (*(longlong *)(param_1 + 0x870) != 0) {
    if (param_2 == '\x01') {
      uVar3 = 0x218;
    }
    else if (param_2 == '\x02') {
      uVar3 = 0x3d0;
    }
    else {
      if (param_2 != '\x04') goto LAB_142d4db9e;
      uVar3 = 0x620;
    }
    lVar1 = param_1 + uVar3;
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x80) != 0)) {
      uVar3 = FUN_142e20fc0();
      for (uVar2 = *(ulonglong *)(lVar1 + 0x80); uVar2 != 0; uVar2 = *(ulonglong *)(uVar2 + 0x30)) {
        if (uVar2 == uVar3) {
          if ((*(ulonglong *)(lVar1 + 0x80) != 0) &&
             (uVar3 = FUN_142d34c70(param_1,lVar1,&local_38,param_6), (char)uVar3 != '\0')) {
            fVar4 = 0.0;
            if (*(char *)(lVar1 + 0x198) == '\0') {
              local_res8 = *(undefined8 *)(param_1 + 0x878);
              fVar4 = (float)FUN_142de77e0(lVar1 + 0x118,*(undefined8 *)(param_1 + 0x118),0,
                                           &local_res8);
              fVar4 = fVar4 + param_5;
              if (fVar4 <= 0.0) {
                fVar4 = 0.0;
              }
            }
            uVar3 = FUN_142d4e450(param_1,lVar1,&local_38,fVar4);
            return uVar3;
          }
          break;
        }
      }
    }
  }
LAB_142d4db9e:
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 142d4dc40 FUN_142d4dc40 body=294 status=ok
// SIG undefined FUN_142d4dc40(void)

void FUN_142d4dc40(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  if (((param_1 != (longlong *)0x0) && (lVar3 = (**(code **)(*param_1 + 0x148))(), lVar3 != 0)) &&
     (iVar2 = FUN_1428cf800(lVar3), iVar2 != 3)) {
    local_48 = (**(code **)(*param_1 + 0x148))(param_1);
    local_40 = &local_48;
    local_38 = FUN_14073d760(&local_48,DAT_146b31ef0);
    puVar1 = local_40;
    local_30 = &local_48;
    local_28 = 0;
    puVar4 = (undefined8 *)FUN_14073d760(local_40,local_38);
    puVar5 = (undefined8 *)FUN_14073d760(local_30,local_28);
    for (; puVar4 != puVar5; puVar4 = (undefined8 *)FUN_14073d760(puVar1,*puVar4)) {
      FUN_142d4db00(puVar4[2],2,param_2,param_3,param_4,0);
    }
  }
  return;
}



// FUNCTION 142d4dd70 FUN_142d4dd70 body=282 status=ok
// SIG undefined FUN_142d4dd70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4dd70(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  local_28 = *(longlong *)(param_1 + 0x118);
  local_14 = 3;
  local_20 = _DAT_1468b5d90;
  local_18 = DAT_1468b5d98;
  if ((local_28 != 0) && (lVar1 = *(longlong *)(local_28 + 0x168), lVar1 != 0)) {
    local_20 = *(undefined8 *)(lVar1 + 0x220);
    local_18 = *(undefined4 *)(lVar1 + 0x228);
  }
  local_30 = 0;
  FUN_142d34220(param_1);
  if ((*(longlong *)(param_1 + 0x870) != 0) &&
     ((cVar2 = FUN_142d34b60(param_1,param_1 + 0x588,&local_30,0), cVar2 == '\0' ||
      (cVar2 = FUN_142d4e450(param_1,param_1 + 0x588,&local_30,0), cVar2 == '\0')))) {
    FUN_142d48b70(param_1);
  }
  return;
}



// FUNCTION 142d4de90 FUN_142d4de90 body=629 status=ok
// SIG undefined FUN_142d4de90(void)

void FUN_142d4de90(longlong *param_1,longlong *param_2,float *param_3,float *param_4,
                  undefined8 param_5)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float local_48;
  float fStack_44;
  float local_40;
  
  if ((((param_2 != (longlong *)0x0) && (param_1 != (longlong *)0x0)) &&
      (lVar6 = (**(code **)(*param_1 + 0x148))(), lVar6 != 0)) &&
     (iVar5 = FUN_1428cf800(lVar6), iVar5 != 3)) {
    uVar7 = ULevelSequencePlayer::GetPrivateStaticClass();
    lVar6 = (**(code **)(*param_2 + 0x628))(param_2,uVar7);
    if (lVar6 != 0) {
      lVar3 = param_2[0x2d];
      if (lVar3 == 0) {
        local_48 = DAT_1468b5d90;
        fStack_44 = DAT_1468b5d94;
        local_40 = DAT_1468b5d98;
      }
      else {
        local_48 = *(float *)(lVar3 + 0x220);
        fStack_44 = *(float *)(lVar3 + 0x224);
        local_40 = *(float *)(lVar3 + 0x228);
      }
      fVar4 = local_48;
      fVar10 = param_4[1];
      fVar1 = *param_4;
      fVar2 = param_4[2];
      fVar8 = fVar1 * fVar1 + fVar10 * fVar10 + fVar2 * fVar2;
      if (fVar8 == 1.0) {
        local_48 = (float)*(undefined8 *)param_4;
        fVar12 = (float)((ulonglong)*(undefined8 *)param_4 >> 0x20);
        fVar9 = param_4[2];
      }
      else {
        fVar12 = DAT_1468b5d94;
        local_48 = DAT_1468b5d90;
        fVar9 = DAT_1468b5d98;
        if (1e-08 <= fVar8) {
          auVar11 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
          fVar9 = auVar11._0_4_;
          fVar9 = fVar9 + fVar9 * (0.5 - fVar8 * 0.5 * fVar9 * fVar9);
          fVar9 = fVar9 + fVar9 * (0.5 - fVar8 * 0.5 * fVar9 * fVar9);
          local_48 = fVar1 * fVar9;
          fVar12 = fVar10 * fVar9;
          fVar9 = fVar2 * fVar9;
        }
      }
      fVar10 = (fStack_44 - param_3[1]) * fVar12 + (fVar4 - *param_3) * local_48 +
               (local_40 - param_3[2]) * fVar9;
      local_40 = fVar10 * fVar9 + param_3[2];
      _local_48 = CONCAT44(fVar12 * fVar10 + param_3[1],local_48 * fVar10 + *param_3);
      FUN_142d4db00(lVar6,4,&local_48,param_5,0,0);
    }
  }
  return;
}



// FUNCTION 142d4e110 FUN_142d4e110 body=145 status=ok
// SIG undefined FUN_142d4e110(void)

undefined1 FUN_142d4e110(undefined8 param_1,float param_2,undefined8 param_3,float param_4)

{
  float fVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)FUN_142d3a910(param_1,param_3);
  if (((pbVar2 != (byte *)0x0) && ((*pbVar2 & 3) == 3)) &&
     ((fVar1 = *(float *)(pbVar2 + 8), fVar1 <= 0.0 || (param_2 - *(float *)(pbVar2 + 4) <= fVar1)))
     ) {
    if (((*pbVar2 & 1) == 0) || ((0.0 < fVar1 && (fVar1 < param_2 - *(float *)(pbVar2 + 4))))) {
      param_2 = 0.0;
    }
    else {
      param_2 = param_2 - *(float *)(pbVar2 + 4);
    }
    if (param_4 <= param_2) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142d4e1b0 FUN_142d4e1b0 body=82 status=ok
// SIG undefined FUN_142d4e1b0(void)

undefined8 FUN_142d4e1b0(byte *param_1,float param_2,float param_3)

{
  float fVar1;
  
  if (((*param_1 & 3) == 3) &&
     ((fVar1 = *(float *)(param_1 + 8), fVar1 <= 0.0 || (param_2 - *(float *)(param_1 + 4) <= fVar1)
      ))) {
    if (((*param_1 & 1) == 0) || ((0.0 < fVar1 && (fVar1 < param_2 - *(float *)(param_1 + 4))))) {
      param_2 = 0.0;
    }
    else {
      param_2 = param_2 - *(float *)(param_1 + 4);
    }
    if (param_2 <= param_3) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142d4e210 FUN_142d4e210 body=104 status=ok
// SIG undefined FUN_142d4e210(void)

bool FUN_142d4e210(byte *param_1,float param_2,float param_3)

{
  float fVar1;
  byte bVar2;
  
  bVar2 = *param_1;
  if (((bVar2 & 3) == 3) &&
     ((*(float *)(param_1 + 8) <= 0.0 ||
      (param_2 - *(float *)(param_1 + 4) <= *(float *)(param_1 + 8))))) {
    return true;
  }
  if ((bVar2 & 1) == 0) {
    if ((bVar2 & 2) == 0) {
      return false;
    }
    param_2 = param_2 - *(float *)(param_1 + 4);
  }
  else {
    fVar1 = *(float *)(param_1 + 8);
    if ((fVar1 <= 0.0) || (param_2 - *(float *)(param_1 + 4) <= fVar1)) {
      param_2 = 0.0;
      goto LAB_142d4e271;
    }
    param_2 = (param_2 - *(float *)(param_1 + 4)) - fVar1;
  }
  if (param_2 == -1.0) {
    return false;
  }
LAB_142d4e271:
  return param_2 <= param_3;
}



// FUNCTION 142d4e280 FUN_142d4e280 body=460 status=ok
// SIG undefined FUN_142d4e280(void)

void FUN_142d4e280(undefined8 param_1,longlong param_2,longlong *param_3)

{
  uint *puVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res18 [2];
  undefined1 local_68 [8];
  float local_60;
  longlong local_58;
  longlong local_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  longlong local_38;
  undefined1 local_28 [16];
  longlong local_18;
  
  local_58 = *param_3;
  if ((local_58 != 0) && (*(longlong *)(param_2 + 0x308) != 0)) {
    local_50 = param_3[1];
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
    }
    FUN_142d4fcb0(local_res18,param_2,&local_58);
    if (local_res18[0] != 0) {
      lVar3 = UEnvQueryItemType::GetPrivateStaticClass();
      lVar4 = local_res18[0];
      do {
        lVar5 = local_res18[0];
        if (lVar4 == lVar3) goto LAB_142d4e300;
        lVar4 = *(longlong *)(lVar4 + 0x30);
      } while (lVar4 != 0);
    }
    lVar5 = 0;
LAB_142d4e300:
    lVar4 = UEnvQueryItemType_Point::GetPrivateStaticClass();
    if (lVar5 == lVar4) {
      (**(code **)(**(longlong **)(param_2 + 0x308) + 0x428))
                (*(longlong **)(param_2 + 0x308),&local_48);
      if (local_38 != 0) {
        if ((-(float)DAT_1466ad3c0 < local_48) && (local_48 < (float)DAT_1466ad3c0)) {
          if ((-DAT_1466ad3c0._4_4_ < fStack_44) && (fStack_44 < DAT_1466ad3c0._4_4_)) {
            if ((-DAT_1466ad3c8 < fStack_40) && (fStack_40 < DAT_1466ad3c8)) {
              local_60 = fStack_40;
              cVar2 = FUN_142be8940(*param_3,local_68,2,0x41700000);
              if (cVar2 == '\0') {
                FUN_142bedd50(*param_3,0);
                local_18 = local_38;
                FUN_142bf6df0(*param_3,local_28);
                lVar4 = (longlong)(int)((longlong *)*param_3)[1];
                *(int *)(param_2 + 900) =
                     *(int *)(*(longlong *)*param_3 + -8 + lVar4 * 0xc) * 2 >> 1;
                puVar1 = (uint *)(*(longlong *)*param_3 + -4 + lVar4 * 0xc);
                *puVar1 = *puVar1 | 1;
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142d4e450 FUN_142d4e450 body=843 status=ok
// SIG undefined FUN_142d4e450(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142d4e450(longlong param_1,longlong param_2,undefined8 *param_3,float param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 auStack_208 [32];
  undefined1 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  longlong *local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1a8 [24];
  undefined8 local_190;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  code *local_b8;
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  uVar10 = *param_3;
  uVar1 = param_3[1];
  lVar5 = *(longlong *)(param_1 + 0x120);
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  local_1c8 = (longlong *)uVar10;
  uStack_1c0 = uVar1;
  if ((lVar5 == 0) && (lVar5 = FUN_1423407b0(), lVar5 == 0)) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x898) = uVar10;
  *(undefined8 *)(param_1 + 0x8a0) = uVar1;
  *(undefined8 *)(param_1 + 0x8a8) = uVar2;
  *(undefined8 *)(param_1 + 0x8b0) = uVar3;
  *(undefined8 *)(param_1 + 0x898) = *(undefined8 *)(param_2 + 0x80);
  FUN_142c62180(local_1a8);
  plVar6 = *(longlong **)(param_2 + 0x80);
  local_190 = *(undefined8 *)(param_1 + 0x870);
  if (plVar6 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    plVar8 = (longlong *)plVar6[0x1f];
    if (plVar8 == (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x368))(plVar6);
      plVar8 = (longlong *)plVar6[0x1f];
    }
  }
  plVar6 = (longlong *)(**(code **)(*plVar8 + 0x278))(plVar8,&local_1d8,local_1a8);
  plVar6 = (longlong *)*plVar6;
  *(undefined8 *)(param_1 + 0x898) = 0;
  *(undefined8 *)(param_1 + 0x8a0) = 0;
  *(undefined1 *)(param_1 + 0x8b4) = 0;
  *(undefined8 *)(param_1 + 0x8a8) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x8b0) = DAT_1468b5d98;
  local_1c8 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    plVar7 = (longlong *)FUN_142e20fc0();
    plVar8 = plVar6;
    do {
      if (plVar8 == plVar7) {
        lVar9 = plVar6[0x1f];
        if (lVar9 == 0) {
          (**(code **)(*plVar6 + 0x368))(plVar6);
          lVar9 = plVar6[0x1f];
        }
        cVar4 = FUN_142c737f0(*(undefined8 *)(param_1 + 0x870),lVar9 + 0x48);
        if ((cVar4 == '\0') && (cVar4 = FUN_142d3e380(param_1,plVar6), cVar4 != '\0')) {
          *(longlong **)(param_1 + 0x898) = local_1c8;
          *(undefined8 *)(param_1 + 0x8a0) = uStack_1c0;
          *(undefined8 *)(param_1 + 0x8a8) = uVar2;
          *(undefined8 *)(param_1 + 0x8b0) = uVar3;
          if (param_4 == 0.0) {
            FUN_142d441e0(param_1);
            uVar10 = 1;
          }
          else {
            uStack_1d0 = 0;
            local_1d8 = FUN_142d441e0;
            if (*(longlong *)(lVar5 + 400) == 0) {
              uVar10 = *(undefined8 *)(lVar5 + 0x3f8);
            }
            else {
              uVar10 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
            }
            plVar6 = (longlong *)FMemory::Realloc(0,0x30);
            if (plVar6 != (longlong *)0x0) {
              *plVar6 = (longlong)&PTR_FUN_143f77b88;
              FWeakObjectPtr::operator=(plVar6 + 1,param_1);
              *(undefined4 *)(plVar6 + 2) = (undefined4)local_1d8;
              *(undefined4 *)((longlong)plVar6 + 0x14) = local_1d8._4_4_;
              *(undefined4 *)(plVar6 + 3) = uStack_1d0;
              *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_1cc;
              lVar5 = FDelegateHandle::GenerateNewID();
              plVar6[5] = lVar5;
              *plVar6 = (longlong)&PTR_FUN_143f77bd0;
            }
            local_d8 = 0;
            local_d0 = 0;
            if (plVar6 != (longlong *)0x0) {
              (**(code **)(*plVar6 + 0x30))(plVar6,&local_d8);
            }
            FWeakObjectPtr::operator=(local_c8,0);
            local_1e0 = 0xbf800000;
            local_1e8 = 0;
            local_c0 = 0;
            local_88 = (longlong *)0x0;
            local_78 = 0;
            local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
            FUN_142880850(uVar10,param_1 + 0x8e0,&local_d8,param_4);
            if (local_78 != 0) {
              plVar8 = local_a8;
              if (local_88 != (longlong *)0x0) {
                plVar8 = local_88;
              }
              if (plVar8 != (longlong *)0x0) {
                (**(code **)(*plVar8 + 0x10))(plVar8,0);
              }
            }
            if (local_88 != (longlong *)0x0) {
              FMemory::Free();
            }
            TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
            if (plVar6 != (longlong *)0x0) {
              (**(code **)(*plVar6 + 0x28))(plVar6,0);
              lVar5 = FMemory::Realloc(plVar6,0,0);
              if (lVar5 != 0) {
                FMemory::Free(lVar5);
              }
            }
            uVar10 = 1;
          }
          goto LAB_142d4e590;
        }
        break;
      }
      plVar8 = (longlong *)plVar8[6];
    } while (plVar8 != (longlong *)0x0);
  }
  uVar10 = 0;
LAB_142d4e590:
  FUN_142c63c50(local_1a8);
  return uVar10;
}



// FUNCTION 142d4e7a0 FUN_142d4e7a0 body=456 status=ok
// SIG undefined FUN_142d4e7a0(void)

void FUN_142d4e7a0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  
  if (*(longlong **)(param_1 + 0x118) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x118) + 0x600))();
  }
  plVar9 = (longlong *)(param_1 + 0x180);
  do {
    if (plVar9 == (longlong *)(param_1 + 0x330)) {
      iVar6 = *(int *)(param_1 + 0x330);
      lVar8 = (longlong)iVar6;
      if (*(char *)(param_1 + 0x1c0 + lVar8 * 0x48) == '\0') {
        lVar7 = param_2[1];
        cVar2 = *(char *)(param_1 + 0x1a0 + lVar8 * 0x48);
        plVar9 = (longlong *)(param_1 + 0x180 + lVar8 * 0x48);
        *plVar9 = *param_2;
        plVar9[1] = lVar7;
        lVar7 = param_2[3];
        plVar9 = (longlong *)(param_1 + 400 + lVar8 * 0x48);
        *plVar9 = param_2[2];
        plVar9[1] = lVar7;
        lVar7 = param_2[5];
        plVar9 = (longlong *)(param_1 + 0x1a0 + lVar8 * 0x48);
        *plVar9 = param_2[4];
        plVar9[1] = lVar7;
        lVar7 = param_2[7];
        plVar9 = (longlong *)(param_1 + 0x1b0 + lVar8 * 0x48);
        *plVar9 = param_2[6];
        plVar9[1] = lVar7;
        *(longlong *)(param_1 + 0x1c0 + lVar8 * 0x48) = param_2[8];
        *(undefined1 *)(param_1 + 0x1c0 + lVar8 * 0x48) = 1;
        *(char *)(param_1 + 0x1a0 + lVar8 * 0x48) = cVar2 + '\x01';
        iVar6 = *(int *)(param_1 + 0x330);
      }
      iVar6 = iVar6 + 1;
      *(int *)(param_1 + 0x330) =
           iVar6 + (iVar6 / 6 + (iVar6 >> 0x1f) +
                   (int)(((longlong)iVar6 / 6 + ((longlong)iVar6 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                   -6;
      return;
    }
    bVar1 = *(byte *)(plVar9 + 6);
    bVar3 = *(byte *)(param_2 + 6);
    if (bVar1 == bVar3) {
LAB_142d4e823:
      if (*param_2 != 0) {
        lVar4 = FUN_142e49950();
        lVar8 = *param_2;
        for (lVar7 = lVar8; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
          if (lVar7 == lVar4) goto LAB_142d4e850;
        }
      }
      lVar8 = 0;
LAB_142d4e850:
      if (*plVar9 != 0) {
        lVar5 = FUN_142e49950();
        lVar7 = *plVar9;
        for (lVar4 = lVar7; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
          if (lVar4 == lVar5) goto LAB_142d4e876;
        }
      }
      lVar7 = 0;
LAB_142d4e876:
      if ((((lVar8 == lVar7) && (param_2[7] == plVar9[7])) && (param_2[5] == plVar9[5])) &&
         ((char)plVar9[8] != '\0')) {
        *(float *)((longlong)plVar9 + 0x1c) =
             *(float *)((longlong)param_2 + 0x1c) + *(float *)((longlong)plVar9 + 0x1c);
        *(byte *)(plVar9 + 6) = *(byte *)(plVar9 + 6) | *(byte *)(param_2 + 6);
        return;
      }
    }
    else if (((bVar1 & 0x40) == 0) && ((bVar3 & 0x40) == 0)) {
      bVar3 = bVar3 >> 4 & 1;
      if ((((bVar1 & 0x10) == 0) || (bVar3 != 0)) && (((bVar1 & 0x10) != 0 || (bVar3 == 0))))
      goto LAB_142d4e823;
    }
    plVar9 = plVar9 + 9;
  } while( true );
}



// FUNCTION 142d4e970 FUN_142d4e970 body=625 status=ok
// SIG undefined FUN_142d4e970(void)

void FUN_142d4e970(longlong *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  float fVar6;
  longlong local_88 [2];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  bVar1 = false;
  lVar5 = *param_1;
  if (lVar5 == 0) {
    return;
  }
  if ((*(byte *)(lVar5 + 0x30) & 8) == 0) {
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  if (*(char *)(lVar5 + 0x9d) != '\0') {
    local_78 = 0;
    local_48 = 0x3f800000;
    local_70 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    local_60 = 0;
    cVar3 = FUN_142c8d9c0(lVar5 + 0xa0,&local_78);
    if (cVar3 != '\0') {
      uVar4 = FWeakObjectPtr::Get(param_1 + 1);
      fVar6 = (float)FUN_142c98860(*param_1 + 0xa0,uVar4);
      *(float *)((longlong)param_1 + 0x1c) = fVar6 * *(float *)((longlong)param_1 + 0x1c);
    }
    lVar5 = *param_1;
    if ((*(float *)(lVar5 + 0x134) != 3.4028235e+38) || (*(int *)(lVar5 + 0x140) != 0)) {
      fVar6 = (float)FRichCurve::Eval(lVar5 + 0xd8,*(undefined4 *)((longlong)param_1 + 0x5c),0);
      lVar5 = *param_1;
      *(float *)((longlong)param_1 + 0x1c) = fVar6 * *(float *)((longlong)param_1 + 0x1c);
    }
    lVar5 = *(longlong *)(lVar5 + 0x148);
    if (lVar5 == 0) {
LAB_142d4ea94:
      bVar2 = false;
    }
    else {
      lVar5 = (*(code *)**(undefined8 **)(lVar5 + 0x28))(lVar5 + 0x28,local_88);
      bVar1 = true;
      if (*(int *)(lVar5 + 8) < 1) goto LAB_142d4ea94;
      bVar2 = true;
    }
    if ((bVar1) && (local_88[0] != 0)) {
      FMemory::Free();
    }
    if (bVar2) {
      fVar6 = (float)UCurveFloat::GetFloatValue
                               (*(undefined8 *)(*param_1 + 0x148),
                                *(undefined4 *)((longlong)param_1 + 0x5c));
      *(float *)((longlong)param_1 + 0x1c) = fVar6 * *(float *)((longlong)param_1 + 0x1c);
    }
  }
  bVar1 = false;
  lVar5 = *param_1;
  if (*(char *)(lVar5 + 0x150) == '\0') {
    return;
  }
  if (*(char *)(lVar5 + 0x151) == '\0') {
    if (*(float *)(param_1 + 0xc) <= 0.0001) {
      return;
    }
    fVar6 = 1.0 - *(float *)((longlong)param_1 + 0x5c) / *(float *)(param_1 + 0xc);
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    *(float *)((longlong)param_1 + 0x1c) = fVar6 * *(float *)((longlong)param_1 + 0x1c);
    return;
  }
  if ((*(float *)(lVar5 + 0x1b4) != 3.4028235e+38) || (*(int *)(lVar5 + 0x1c0) != 0)) {
    fVar6 = (float)FRichCurve::Eval(lVar5 + 0x158,*(undefined4 *)((longlong)param_1 + 0x5c),0);
    lVar5 = *param_1;
    *(float *)((longlong)param_1 + 0x1c) = fVar6 * *(float *)((longlong)param_1 + 0x1c);
  }
  lVar5 = *(longlong *)(lVar5 + 0x1c8);
  if (lVar5 != 0) {
    bVar1 = true;
    lVar5 = (*(code *)**(undefined8 **)(lVar5 + 0x28))(lVar5 + 0x28,local_88);
    if (0 < *(int *)(lVar5 + 8)) {
      bVar2 = true;
      goto LAB_142d4eb4e;
    }
  }
  bVar2 = false;
LAB_142d4eb4e:
  if ((bVar1) && (local_88[0] != 0)) {
    FMemory::Free();
  }
  if (bVar2) {
    fVar6 = (float)UCurveFloat::GetFloatValue
                             (*(undefined8 *)(*param_1 + 0x1c8),
                              *(undefined4 *)((longlong)param_1 + 0x5c));
    *(float *)((longlong)param_1 + 0x1c) = fVar6 * *(float *)((longlong)param_1 + 0x1c);
  }
  return;
}



// FUNCTION 142d4ebf0 FUN_142d4ebf0 body=258 status=ok
// SIG undefined FUN_142d4ebf0(void)

void FUN_142d4ebf0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  
  plVar2 = *(longlong **)(param_1 + 0x30);
  plVar3 = plVar2 + (longlong)*(int *)(param_1 + 0x38) * 0xd;
  for (; plVar2 != plVar3; plVar2 = plVar2 + 0xd) {
    if ((0 < (int)plVar2[5]) &&
       (((lVar1 = *plVar2, lVar1 != 0 && (*(char *)(lVar1 + 0x78) != '\0')) ||
        (0.0001 < *(float *)(plVar2 + 3) * *(float *)(plVar2 + 2) *
                  *(float *)((longlong)plVar2 + 0x1c))))) {
      fVar4 = *(float *)((longlong)plVar2 + 0x5c) / *(float *)(plVar2 + 6);
      if ((lVar1 == 0) || (*(char *)(lVar1 + 0x78) == '\0')) {
        fVar5 = *(float *)(plVar2 + 3) * *(float *)(plVar2 + 2) *
                *(float *)((longlong)plVar2 + 0x1c);
      }
      else {
        fVar5 = 1.0;
      }
      FUN_142451f80(plVar2 + 4,
                    *(float *)((longlong)plVar2 + 0x5c) -
                    (float)((int)ROUND((fVar4 + fVar4) - 0.5) >> 1) * *(float *)(plVar2 + 6),param_3
                    ,fVar5);
    }
  }
  return;
}



// FUNCTION 142d4ed00 FUN_142d4ed00 body=286 status=ok
// SIG undefined FUN_142d4ed00(void)

void FUN_142d4ed00(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = FUN_14233f450();
  if (iVar1 != 3) {
    return;
  }
  if (*(char *)(param_1 + 0x198) == '\0') {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x1a8);
  if (lVar2 == 0) {
    if (*(longlong *)(param_1 + 0x118) == 0) {
      return;
    }
    lVar2 = FUN_142d29780();
    *(longlong *)(param_1 + 0x1a8) = lVar2;
    if (lVar2 == 0) {
      return;
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x188);
  plVar4 = plVar3 + (longlong)*(int *)(param_1 + 400) * 0xe;
  for (; plVar3 != plVar4; plVar3 = plVar3 + 0xe) {
    if ((*plVar3 != 0) && ((*(byte *)(*plVar3 + 0x48) & 0x20) != 0)) {
      fVar5 = (float)FUN_142d3c080(plVar3);
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      else {
        fVar5 = (float)FUN_142d39b50(plVar3);
        fVar6 = (float)FUN_142d3c080(plVar3);
        fVar5 = fVar5 / fVar6;
      }
      if (*(longlong *)(*plVar3 + 0x58) == 0) {
        fVar6 = (float)FUN_142d1b990(lVar2);
        *(float *)(plVar3 + 10) = fVar6 * *(float *)(*plVar3 + 0x50);
      }
      if (0.0 <= fVar5) {
        FUN_142d48590(plVar3,fVar5 * *(float *)(plVar3 + 10));
      }
    }
  }
  return;
}



// FUNCTION 142d4ee20 FUN_142d4ee20 body=158 status=ok
// SIG undefined FUN_142d4ee20(void)

void FUN_142d4ee20(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  
  plVar3 = *(longlong **)(param_1 + 0x38);
  plVar4 = plVar3 + (longlong)*(int *)(param_1 + 0x40) * 0x76;
  for (; plVar3 != plVar4; plVar3 = plVar3 + 0x76) {
    if ((((-1 < (int)plVar3[0x65]) && (-1 < *(int *)((longlong)plVar3 + 0x32c))) &&
        (plVar1 = (longlong *)*plVar3, plVar1 == param_2)) &&
       ((plVar1 != (longlong *)0x0 && ((char)plVar3[0x75] != '\x01')))) {
      *(undefined1 *)(plVar3 + 0x75) = 1;
      lVar2 = (**(code **)(*plVar1 + 0x148))();
      if (lVar2 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(lVar2 + 0x8c8);
      }
      *(undefined4 *)((longlong)plVar3 + 0x3a4) = uVar5;
    }
  }
  return;
}



// FUNCTION 142d4eec0 FUN_142d4eec0 body=1356 status=ok
// SIG undefined FUN_142d4eec0(void)

void FUN_142d4eec0(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  longlong local_res10;
  float local_38;
  float fStack_34;
  float local_30;
  
  if (((((int)param_2[0x65] < 0) || (*(int *)((longlong)param_2 + 0x32c) < 0)) || (param_2[1] == 0))
     || (*param_2 == 0)) {
    *(undefined4 *)(param_2 + 0x65) = 0xffffffff;
    if ((int)param_2[0x66] == -1) {
      return;
    }
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_142bd8290();
    }
    *(undefined4 *)(param_2 + 0x66) = 0xffffffff;
    return;
  }
  if ((((char)param_2[0x75] != '\0') && (param_2[0x5f] == 0)) &&
     (cVar1 = FUN_142d46610(param_2), cVar1 != '\0')) {
    *(undefined1 *)(param_2 + 0x75) = 0;
  }
  if ((((char)param_2[0x17] != '\0') && ((longlong *)*param_2 != (longlong *)0x0)) &&
     (lVar3 = (**(code **)(*(longlong *)*param_2 + 0x688))(), lVar3 != 0)) {
    uVar4 = UDamageableInterface::GetPrivateStaticClass();
    plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
    if (((plVar5 != (longlong *)0x0) && (iVar2 = (**(code **)(*plVar5 + 0x10))(plVar5), 0 < iVar2))
       && (iVar2 < (int)(uint)*(byte *)(param_2 + 0x17))) {
      return;
    }
  }
  uVar10 = 0;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    fVar8 = 0.0;
  }
  else {
    fVar8 = *(float *)(*(longlong *)(param_1 + 0x48) + 0x8c8);
  }
  if ((char)param_2[0x62] == '\0') {
LAB_142d4f018:
    plVar5 = (longlong *)FUN_142d4fa40(&local_38,*param_2);
    param_2[0x69] = *plVar5;
    *(int *)(param_2 + 0x6a) = (int)plVar5[1];
    if ((char)param_2[0x62] != '\0') {
      FUN_142d48890(param_2);
LAB_142d4f04a:
      local_res10 = param_2[0x60];
      fVar7 = (float)FUN_142de77e0(param_2 + 0x3d,*param_2,0,&local_res10);
      *(float *)((longlong)param_2 + 0x354) = fVar7 + fVar8;
    }
  }
  else if ((char)param_2[0x5e] != '\0') {
    cVar1 = FUN_142deefb0(param_2 + 0x4d);
    if (cVar1 != '\0') {
      local_res10 = param_2[0x60];
      fVar7 = (float)FUN_142de77e0(param_2 + 0x4d,*param_2,0,&local_res10);
      if (0.5 <= fVar7 == ((char)param_2[0x5d] == '\0')) goto LAB_142d4f00a;
      goto LAB_142d4f04a;
    }
LAB_142d4f00a:
    if (*(float *)((longlong)param_2 + 0x354) <= fVar8) goto LAB_142d4f018;
  }
  if ((char)param_2[0x75] != '\0') {
    return;
  }
  cVar1 = FUN_142d34f40(param_2);
  if (cVar1 == '\0') {
    return;
  }
  if (fVar8 < *(float *)(param_2 + 0x6b) + *(float *)((longlong)param_2 + 0xcc)) {
    return;
  }
  if (*(char *)((longlong)param_2 + 0xd6) == '\0') {
    if ((char)param_2[0x62] != '\0') {
      *(undefined1 *)(param_2 + 0x75) = 0;
      return;
    }
  }
  else if ((char)param_2[0x62] != '\0') goto LAB_142d4f1d4;
  if (((char)param_2[0x2b] != '\0') &&
     ((((float)DAT_1466ad3c0 != *(float *)((longlong)param_2 + 0x35c) ||
       (DAT_1466ad3c0._4_4_ != *(float *)(param_2 + 0x6c))) ||
      (DAT_1466ad3c8 != *(float *)((longlong)param_2 + 0x364))))) {
    FUN_142d4fa40(&local_38,*param_2);
    local_res10 = param_2[0x60];
    fVar8 = (float)FUN_142de77e0(param_2 + 0x1b,*param_2,0,&local_res10);
    if ((((local_38 != (float)DAT_1466ad3c0) || (fStack_34 != DAT_1466ad3c0._4_4_)) ||
        (local_30 != DAT_1466ad3c8)) &&
       (fVar9 = local_38 - *(float *)((longlong)param_2 + 0x35c),
       fVar7 = local_30 - *(float *)((longlong)param_2 + 0x364),
       fVar8 * fVar8 <=
       (fStack_34 - *(float *)(param_2 + 0x6c)) * (fStack_34 - *(float *)(param_2 + 0x6c)) +
       fVar9 * fVar9 + fVar7 * fVar7)) {
      FUN_142d48890(param_2);
      *(ulonglong *)((longlong)param_2 + 0x35c) = CONCAT44(fStack_34,local_38);
      *(float *)((longlong)param_2 + 0x364) = local_30;
    }
  }
LAB_142d4f1d4:
  cVar1 = FUN_142d46610(param_2);
  if (cVar1 != '\0') {
    local_res10 = param_2[0x60];
    lVar3 = FUN_142de7b90(param_2[7],*param_2,&local_res10);
    if ((lVar3 == 0) || (cVar1 = FUN_140c61930(lVar3), cVar1 == '\0')) {
      lVar3 = 0;
    }
    lVar6 = param_2[0x5f];
    if (lVar3 != param_2[0x5f]) {
      FUN_142d48890(param_2);
      param_2[0x5f] = lVar3;
      lVar6 = lVar3;
    }
    if (lVar6 == 0) {
      FUN_142d3ef50(param_1,param_2);
      return;
    }
  }
  if ((*(char *)((longlong)param_2 + 0xd5) == '\x01') ||
     ((*(char *)((longlong)param_2 + 0xd5) == '\x02' &&
      (((longlong *)param_2[0x61] == (longlong *)0x0 ||
       (cVar1 = (**(code **)(*(longlong *)param_2[0x61] + 0x410))(), cVar1 == '\0')))))) {
    FUN_142d48890(param_2);
  }
  if (((char)param_2[0x3c] != '\0') &&
     ((((float)DAT_1466ad3c0 != *(float *)(param_2 + 0x6d) ||
       (DAT_1466ad3c0._4_4_ != *(float *)((longlong)param_2 + 0x36c))) ||
      (DAT_1466ad3c8 != *(float *)(param_2 + 0x6e))))) {
    FUN_142d4fa40(&local_38,param_2[0x5f]);
    local_res10 = param_2[0x60];
    fVar8 = (float)FUN_142de77e0(param_2 + 0x2c,*param_2,0,&local_res10);
    if ((((local_38 != (float)DAT_1466ad3c0) || (fStack_34 != DAT_1466ad3c0._4_4_)) ||
        (local_30 != DAT_1466ad3c8)) &&
       (fVar7 = fStack_34 - *(float *)((longlong)param_2 + 0x36c),
       fVar8 * fVar8 <=
       fVar7 * fVar7 +
       (local_38 - *(float *)(param_2 + 0x6d)) * (local_38 - *(float *)(param_2 + 0x6d)) +
       (local_30 - *(float *)(param_2 + 0x6e)) * (local_30 - *(float *)(param_2 + 0x6e)))) {
      FUN_142d48890(param_2);
      param_2[0x6d] = CONCAT44(fStack_34,local_38);
      *(float *)(param_2 + 0x6e) = local_30;
    }
  }
  if ((((char)param_2[0x75] == '\0') && (cVar1 = FUN_142d48de0(param_1,param_2), cVar1 != '\0')) &&
     (((longlong *)*param_2 != (longlong *)0x0 && ((char)param_2[0x75] == '\0')))) {
    *(undefined1 *)(param_2 + 0x75) = 2;
    lVar3 = (**(code **)(*(longlong *)*param_2 + 0x148))();
    if (lVar3 != 0) {
      uVar10 = *(undefined4 *)(lVar3 + 0x8c8);
    }
    *(undefined4 *)((longlong)param_2 + 0x3a4) = uVar10;
  }
  return;
}



// FUNCTION 142d4f410 FUN_142d4f410 body=161 status=ok
// SIG undefined FUN_142d4f410(void)

void FUN_142d4f410(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  iVar2 = (int)param_2;
  if (((((-1 < iVar2) && (-1 < param_2)) && (iVar2 < *(int *)(param_1 + 0x40))) &&
      ((plVar3 = (longlong *)((longlong)iVar2 * 0x3b0 + *(longlong *)(param_1 + 0x38)),
       (int)plVar3[0x65] == iVar2 &&
       (*(int *)((longlong)plVar3 + 0x32c) == (int)((ulonglong)param_2 >> 0x20))))) &&
     ((plVar3 != (longlong *)0x0 &&
      (((longlong *)*plVar3 != (longlong *)0x0 && ((char)plVar3[0x75] != '\x01')))))) {
    *(undefined1 *)(plVar3 + 0x75) = 1;
    lVar1 = (**(code **)(*(longlong *)*plVar3 + 0x148))();
    if (lVar1 != 0) {
      *(undefined4 *)((longlong)plVar3 + 0x3a4) = *(undefined4 *)(lVar1 + 0x8c8);
      return;
    }
    *(undefined4 *)((longlong)plVar3 + 0x3a4) = 0;
  }
  return;
}



// FUNCTION 142d4f4c0 FUN_142d4f4c0 body=381 status=ok
// SIG undefined FUN_142d4f4c0(void)

void FUN_142d4f4c0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined4 uVar7;
  longlong local_res8;
  undefined1 local_18 [16];
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x8c8);
  }
  *(undefined4 *)(param_2 + 0x6b) = uVar7;
  if ((char)param_2[0x75] == '\x02') {
    puVar5 = (undefined8 *)FUN_142d4fa40(local_18,*param_2);
    *(undefined8 *)((longlong)param_2 + 0x374) = *puVar5;
    *(undefined4 *)((longlong)param_2 + 0x37c) = *(undefined4 *)(puVar5 + 1);
    return;
  }
  if (((((int)param_2[8] == 0) || (*param_2 == 0)) || (param_2[0x60] == 0)) ||
     (*(char *)(param_2[7] + 3) != '\x05')) goto LAB_142d4f5ab;
  local_res8 = 0;
  cVar2 = FUN_142cc3a70(param_2[7] + 0x58,param_2[0x60],&local_res8);
  if (cVar2 == '\0') goto LAB_142d4f5ab;
  local_res8 = param_2[0x60];
  lVar3 = FUN_142de7b90(param_2[7],*param_2,&local_res8);
  if (lVar3 == 0) {
LAB_142d4f59d:
    lVar3 = 0;
  }
  else {
    lVar4 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_142d4f59d;
  }
  param_2[0x5f] = lVar3;
LAB_142d4f5ab:
  puVar5 = (undefined8 *)FUN_142d4fa40(local_18,*param_2);
  *(undefined8 *)((longlong)param_2 + 0x35c) = *puVar5;
  *(undefined4 *)((longlong)param_2 + 0x364) = *(undefined4 *)(puVar5 + 1);
  plVar6 = (longlong *)FUN_142d4fa40(local_18,param_2[0x5f]);
  param_2[0x6d] = *plVar6;
  *(int *)(param_2 + 0x6e) = (int)plVar6[1];
  *(undefined8 *)((longlong)param_2 + 0x374) = DAT_1466ad3c0;
  *(undefined4 *)((longlong)param_2 + 0x37c) = DAT_1466ad3c8;
  return;
}



// FUNCTION 142d4f640 FUN_142d4f640 body=429 status=ok
// SIG undefined FUN_142d4f640(void)

void FUN_142d4f640(longlong *param_1,float param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  longlong local_68;
  int local_60;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    if (((*(byte *)(lVar3 + 0x30) & 0x10) != 0) &&
       ((*(float *)(lVar3 + 0x90) < 0.0001 ||
        (fVar4 = 1.0 / *(float *)(lVar3 + 0x90), fVar5 = fVar4 * param_2,
        fVar4 = fVar4 * *(float *)((longlong)param_1 + 0x5c),
        (int)((int)ROUND((fVar5 + fVar5) - 0.5) & 0xfffffffeU) <
        (int)((int)ROUND((fVar4 + fVar4) - 0.5) & 0xfffffffeU))))) {
      fVar4 = *(float *)(lVar3 + 0x94);
      fVar5 = *(float *)(lVar3 + 0x98);
      iVar1 = rand();
      lVar3 = *param_1;
      *(float *)((longlong)param_1 + 0x14) = (float)iVar1 * 3.051851e-05 * (fVar4 - fVar5) + fVar5;
    }
    if (((*(byte *)(lVar3 + 0x30) & 4) != 0) &&
       ((*(float *)(param_1 + 6) < 0.0001 ||
        (fVar4 = 1.0 / *(float *)(param_1 + 6), param_2 = fVar4 * param_2,
        fVar4 = fVar4 * *(float *)((longlong)param_1 + 0x5c),
        (int)((int)ROUND((param_2 + param_2) - 0.5) & 0xfffffffeU) <
        (int)((int)ROUND((fVar4 + fVar4) - 0.5) & 0xfffffffeU))))) {
      uVar2 = FUN_142d3ad50(lVar3,&local_68,0x3f800000);
      FUN_142d303e0(param_1 + 4,uVar2);
      if (local_60 != 0) {
        lVar3 = local_68 + 8;
        iVar1 = local_60;
        do {
          FRichCurve::~FRichCurve(lVar3);
          lVar3 = lVar3 + 0x80;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      if (local_68 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 142d4f7f0 FUN_142d4f7f0 body=592 status=ok
// SIG undefined FUN_142d4f7f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4f7f0(longlong *param_1)

{
  float fVar1;
  bool bVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float local_28;
  float local_24;
  float local_20;
  undefined1 local_18 [16];
  
  if (*param_1 == 0) {
    return;
  }
  lVar4 = FWeakObjectPtr::Get(param_1 + 1);
  if (lVar4 == 0) {
    return;
  }
  if (((*(uint *)(*param_1 + 0x30) & 2) == 0) && ((*(uint *)(*param_1 + 0x30) & 1) == 0)) {
    return;
  }
  lVar4 = FWeakObjectPtr::Get(param_1 + 9);
  if (lVar4 == 0) goto LAB_142d4f96d;
  lVar4 = FWeakObjectPtr::Get(param_1 + 9);
  if (lVar4 == 0) {
LAB_142d4f8f8:
    lVar4 = FWeakObjectPtr::Get(param_1 + 9);
    if (lVar4 == 0) goto LAB_142d4f96d;
    lVar5 = FUN_1429ff160();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_142d4f96d;
    uVar8 = *(undefined8 *)(lVar4 + 0x220);
    uVar3 = (int)*(undefined8 *)(lVar4 + 0x228);
  }
  else {
    lVar5 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_142d4f8f8;
    lVar4 = *(longlong *)(lVar4 + 0x168);
    uVar8 = _DAT_1468b5d90;
    uVar3 = DAT_1468b5d98;
    if (lVar4 != 0) {
      uVar8 = *(undefined8 *)(lVar4 + 0x220);
      uVar3 = *(undefined4 *)(lVar4 + 0x228);
    }
  }
  *(undefined8 *)((longlong)param_1 + 0x3c) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar3;
LAB_142d4f96d:
  plVar6 = (longlong *)FWeakObjectPtr::Get(param_1 + 1);
  (**(code **)(*plVar6 + 0x610))(plVar6,&local_28,local_18);
  local_28 = *(float *)((longlong)param_1 + 0x3c) - local_28;
  local_20 = *(float *)((longlong)param_1 + 0x44) - local_20;
  fVar9 = SQRT((*(float *)(param_1 + 8) - local_24) * (*(float *)(param_1 + 8) - local_24) +
               local_28 * local_28 + local_20 * local_20);
  if ((*(byte *)(*param_1 + 0x30) & 1) != 0) {
    fVar1 = *(float *)(param_1 + 10);
    if (fVar9 < fVar1) {
      *(undefined4 *)(param_1 + 3) = 0x3f800000;
      return;
    }
    if (*(float *)((longlong)param_1 + 0x54) < fVar9) {
      *(undefined4 *)(param_1 + 3) = 0;
      return;
    }
    fVar7 = *(float *)((longlong)param_1 + 0x54) - fVar1;
    if (0.0001 < fVar7) {
      *(float *)(param_1 + 3) = 1.0 - (fVar9 - fVar1) / fVar7;
    }
  }
  return;
}



// FUNCTION 142d4fa40 FUN_142d4fa40 body=364 status=ok
// SIG undefined FUN_142d4fa40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142d4fa40(undefined8 *param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  bool bVar2;
  float fVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 local_28;
  float local_20;
  undefined1 local_18 [8];
  float local_10;
  
  if (param_2 != (longlong *)0x0) {
    lVar4 = (**(code **)(*param_2 + 0x668))(param_2);
    if ((lVar4 == 0) || (param_2 = *(longlong **)(lVar4 + 0x488), param_2 != (longlong *)0x0)) {
      lVar4 = APostProcessVolume::GetPrivateStaticClass();
      if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar4 = param_2[0x9a];
      }
      else {
        uVar5 = FUN_142912e90();
        lVar4 = (**(code **)(*param_2 + 0x628))(param_2,uVar5);
      }
      if (lVar4 == 0) {
        FUN_14222da00(param_2,1,&local_28,local_18);
      }
      else {
        uVar8 = *(uint *)(lVar4 + 0x230) & _DAT_146b31cc0;
        uVar9 = *(uint *)(lVar4 + 0x234) & uRam0000000146b31cc4;
        uVar10 = *(uint *)(lVar4 + 0x238) & uRam0000000146b31cc8;
        uVar11 = *(uint *)(lVar4 + 0x23c) & uRam0000000146b31ccc;
        auVar12._4_4_ = uVar9;
        auVar12._0_4_ = uVar8;
        auVar12._8_4_ = uVar10;
        auVar12._12_4_ = uVar11;
        auVar13._4_4_ = uVar10;
        auVar13._0_4_ = uVar9;
        auVar13._8_4_ = uVar8;
        auVar13._12_4_ = uVar11;
        auVar13 = minps(auVar12,auVar13);
        auVar1._4_4_ = uVar8;
        auVar1._0_4_ = uVar10;
        auVar1._8_4_ = uVar9;
        auVar1._12_4_ = uVar11;
        auVar13 = minps(auVar13,auVar1);
        local_10 = auVar13._0_4_ * *(float *)(lVar4 + 0x710);
      }
      lVar4 = param_2[0x2d];
      if (lVar4 == 0) {
        local_28 = _DAT_1468b5d90;
        local_20 = DAT_1468b5d98;
      }
      else {
        local_28 = *(undefined8 *)(lVar4 + 0x220);
        local_20 = *(float *)(lVar4 + 0x228);
      }
      uVar6 = (undefined4)local_28;
      uVar7 = (undefined4)((ulonglong)local_28 >> 0x20);
      fVar3 = local_20 - local_10;
      goto LAB_142d4fb97;
    }
  }
  uVar6 = (undefined4)DAT_1466ad3c0;
  uVar7 = (undefined4)((ulonglong)DAT_1466ad3c0 >> 0x20);
  fVar3 = DAT_1466ad3c8;
LAB_142d4fb97:
  *param_1 = CONCAT44(uVar7,uVar6);
  *(float *)(param_1 + 1) = fVar3;
  return param_1;
}



// FUNCTION 142d4fbb0 FUN_142d4fbb0 body=254 status=ok
// SIG undefined FUN_142d4fbb0(void)

undefined8 * FUN_142d4fbb0(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != (longlong *)0x0) {
    plVar2 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
    plVar4 = param_2;
    do {
      if (plVar4 == plVar2) {
        plVar2 = (longlong *)UEnvQueryItemType_VectorBase::GetPrivateStaticClass();
        plVar3 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
        plVar4 = param_2;
        goto LAB_142d4fc32;
      }
      plVar4 = (longlong *)plVar4[6];
    } while (plVar4 != (longlong *)0x0);
  }
LAB_142d4fbee:
  *param_1 = DAT_1466ad3c0;
  *(undefined4 *)(param_1 + 1) = DAT_1466ad3c8;
  return param_1;
  while (plVar4 = (longlong *)plVar4[6], plVar1 = (longlong *)0x0, plVar4 != (longlong *)0x0) {
LAB_142d4fc32:
    plVar1 = param_2;
    if (plVar4 == plVar3) break;
  }
  do {
    if (plVar1 == (longlong *)0x0) goto LAB_142d4fbee;
    if (plVar1 == plVar2) {
      plVar2 = (longlong *)UEnvQueryItemType::GetPrivateStaticClass();
      plVar4 = param_2;
      break;
    }
    plVar1 = (longlong *)plVar1[6];
  } while( true );
  while (plVar4 = (longlong *)plVar4[6], plVar3 = (longlong *)0x0, plVar4 != (longlong *)0x0) {
    plVar3 = param_2;
    if (plVar4 == plVar2) break;
  }
  plVar4 = (longlong *)plVar3[0x1f];
  if (plVar4 == (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    plVar4 = (longlong *)plVar3[0x1f];
  }
  (**(code **)(*plVar4 + 0x298))(plVar4,param_1,param_3);
  return param_1;
}



// FUNCTION 142d4fcb0 FUN_142d4fcb0 body=259 status=ok
// SIG undefined FUN_142d4fcb0(void)

undefined8 * FUN_142d4fcb0(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar4 = *param_3;
  if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x10) != 0)) {
    lVar7 = UEnvQueryItemType::GetPrivateStaticClass();
    for (lVar5 = *(longlong *)(lVar4 + 0x10); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
      if (lVar5 == lVar7) {
        if (*(longlong *)(lVar4 + 0x10) != 0) {
          *param_1 = *(undefined8 *)(*param_3 + 0x10);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
          return param_1;
        }
        break;
      }
    }
  }
  lVar4 = *(longlong *)(param_2 + 8);
  if ((lVar4 == 0) || (*(int *)(lVar4 + 0x40) == 0)) {
    plVar6 = (longlong *)param_3[1];
    *param_1 = 0;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
  else if ((**(longlong **)(lVar4 + 0x38) == 0) ||
          (lVar4 = *(longlong *)(**(longlong **)(lVar4 + 0x38) + 0x28), lVar4 == 0)) {
    *param_1 = 0;
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
  }
  else {
    *param_1 = *(undefined8 *)(lVar4 + 0x50);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
  }
  return param_1;
}



// FUNCTION 142d4fdc0 FUN_142d4fdc0 body=182 status=ok
// SIG undefined FUN_142d4fdc0(void)

undefined8 * FUN_142d4fdc0(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  if ((((lVar1 != 0) && (*(int *)(lVar1 + 0x28) != 3)) && (*(int *)(lVar1 + 0x28) != 0)) &&
     (*(longlong *)(lVar1 + 0x10) != 0)) {
    lVar3 = UEnvQueryItemType::GetPrivateStaticClass();
    for (lVar2 = *(longlong *)(lVar1 + 0x10); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar3) {
        if ((*(longlong *)(lVar1 + 0x10) != 0) && (0 < *(int *)(lVar1 + 8))) {
          param_2 = (longlong *)*param_2;
          FUN_142d4fbb0(param_1,param_2[2],
                        ((longlong)(*(int *)(*param_2 + 4) * 2) >> 1) + param_2[3]);
          return param_1;
        }
        break;
      }
    }
  }
  *param_1 = DAT_1466ad3c0;
  *(undefined4 *)(param_1 + 1) = DAT_1466ad3c8;
  return param_1;
}



// FUNCTION 142d4fe80 FUN_142d4fe80 body=91 status=ok
// SIG undefined FUN_142d4fe80(void)

undefined8 FUN_142d4fe80(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if ((((lVar1 != 0) && (*(int *)(lVar1 + 0x28) != 3)) && (*(int *)(lVar1 + 0x28) != 0)) &&
     (*(longlong *)(lVar1 + 0x10) != 0)) {
    lVar3 = UEnvQueryItemType::GetPrivateStaticClass();
    for (lVar2 = *(longlong *)(lVar1 + 0x10); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar3) {
        if (*(longlong *)(lVar1 + 0x10) == 0) {
          return 0;
        }
        if (*(int *)(lVar1 + 8) < 1) {
          return 0;
        }
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142d4ff00 FUN_142d4ff00 body=652 status=ok
// SIG undefined FUN_142d4ff00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d4ff00(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  long lVar6;
  undefined1 local_res10 [8];
  
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9a8;
    plVar2[1] = (longlong)FUN_142d66920;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9f0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464b57d0,1);
    (**(code **)(*plVar2 + 0x20))(plVar2,local_res10);
    iVar1 = DAT_1464b57d8;
    lVar3 = (longlong)DAT_1464b57d8;
    DAT_1464b57d8 = DAT_1464b57d8 + 1;
    if (DAT_1464b57dc < DAT_1464b57d8) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464b57d0,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + DAT_1464b57d0);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 2;
  }
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9a8;
    plVar2[1] = (longlong)FUN_142c810a0;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9f0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146535790,1);
    (**(code **)(*plVar2 + 0x20))(plVar2,local_res10);
    iVar1 = DAT_146535798;
    lVar3 = (longlong)DAT_146535798;
    DAT_146535798 = DAT_146535798 + 1;
    if (DAT_14653579c < DAT_146535798) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146535790,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + _DAT_146535790);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 2;
  }
  lVar6 = 0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_1440459e8;
    plVar2[1] = (longlong)&LAB_142defcf0;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_144045a30;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1465357a8,1);
    plVar5 = plVar2;
    (**(code **)(*plVar2 + 0x20))(plVar2,local_res10);
    iVar1 = DAT_1465357b0;
    lVar6 = (long)plVar5;
    lVar3 = (longlong)DAT_1465357b0;
    DAT_1465357b0 = DAT_1465357b0 + 1;
    if (DAT_1465357b4 < DAT_1465357b0) {
      lVar6 = 0x465357a8;
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1465357a8,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + DAT_1465357a8);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 2;
  }
  FUN_1422b1460();
  AK::MemoryMgr::StartProfileThreadUsage(lVar6);
  plVar2 = (longlong *)FUN_142d873f0();
  plVar5 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar5[1] = (longlong)FUN_142586890;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar5[3] = lVar3;
    *plVar5 = (longlong)&PTR_GetPoolName_143f3f090;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar2,1);
    (**(code **)(*plVar5 + 0x20))(plVar5,local_res10);
    iVar1 = (int)plVar2[1];
    *(int *)(plVar2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar1);
    }
    puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar2);
    *puVar4 = plVar5;
    *(undefined4 *)(puVar4 + 1) = 2;
  }
  return;
}



// FUNCTION 142d501a0 FUN_142d501a0 body=72 status=ok
// SIG undefined FUN_142d501a0(void)

undefined8 * FUN_142d501a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1458859d8;
  FUN_142d5ea10();
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142d501f0 FUN_142d501f0 body=836 status=ok
// SIG undefined FUN_142d501f0(void)

uint * FUN_142d501f0(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong *_Src;
  void *_Dst;
  byte bVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  bool bVar13;
  uint local_res8 [2];
  ulonglong local_58 [4];
  
  iVar8 = 1;
  uVar12 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar9 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar9 + 1)) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,uVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar9 = *(uint *)(param_1 + 6);
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar10 = *(int *)(*param_1 + 4 + (longlong)(int)uVar9 * 0x28);
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar10 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = uVar9;
  local_58[0] = 0;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar5 +
                   (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar9 & 0x1f);
  local_58[1] = 0;
  local_58[2] = 2;
  _Src = (ulonglong *)(*param_1 + (longlong)(int)uVar9 * 0x28);
  *_Src = *(ulonglong *)*param_3;
  _Src[1] = 0;
  _Src[2] = 0;
  _Src[3] = 2;
  if (local_58 != _Src + 1) {
    FMulticastDelegateBase<FWeakObjectPtr>::Clear();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(local_58);
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  uVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (uVar9 != 1) {
    TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,*_Src);
    uVar4 = local_res8[0];
    lVar7 = (longlong)(int)local_res8[0];
    bVar13 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar13);
    if (bVar13) {
      _Dst = (void *)(*param_1 + lVar7 * 0x28);
      TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>
                ((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x20);
      uVar9 = *param_2;
      bVar2 = (byte)uVar9 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = uVar9;
      }
      lVar7 = *param_1;
      *(undefined4 *)(lVar7 + (longlong)(int)uVar9 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar12 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar7 + 4 + (longlong)(int)uVar9 * 0x28) = uVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar9;
      plVar5 = (longlong *)param_1[4];
      *param_2 = uVar4;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar5 +
                       (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_142d50502;
    }
  }
  if (3 < uVar9) {
    uVar4 = (uVar9 >> 1) + 8;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar10 = 0x20;
    cVar6 = '\0';
    if (uVar4 != 0) {
      iVar10 = 0x1f - iVar8;
    }
    uVar4 = (uVar9 >> 1) + 7;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar6 = '\x1f' - (char)iVar8;
    }
    iVar8 = 1 << (~(byte)((iVar10 << 0x1a) >> 0x1f) & 0x20U - cVar6 & 0x1f);
  }
  if (((int)uVar9 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    iVar8 = (int)(*_Src >> 4);
    uVar4 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
    uVar11 = -(uVar4 + iVar8) ^ uVar4 >> 0xd;
    uVar9 = (iVar8 - uVar4) - uVar11 ^ uVar11 >> 0xc;
    uVar4 = (uVar4 - uVar9) - uVar11 ^ uVar9 << 0x10;
    uVar11 = (uVar11 - uVar4) - uVar9 ^ uVar4 >> 5;
    uVar9 = (uVar9 - uVar4) - uVar11 ^ uVar11 >> 3;
    uVar4 = (uVar4 - uVar9) - uVar11 ^ uVar9 << 10;
    uVar9 = ((uVar11 - uVar4) - uVar9 ^ uVar4 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x24) = uVar9;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(uint *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<TSharedRef<FUniqueNetId_const_,0>,FString>,TDefaultMapHashableKeyFuncs<TSharedRef<FUniqueNetId_const_,0>,FString,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142d50502:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 142d50540 FUN_142d50540 body=526 status=ok
// SIG undefined FUN_142d50540(void)

int * FUN_142d50540(longlong param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 uVar12;
  longlong lVar13;
  undefined4 uVar14;
  int iVar15;
  bool bVar16;
  int local_res8 [2];
  int local_48 [2];
  undefined4 *local_40;
  
  FUN_142d55b10(param_1,local_48);
  puVar2 = (undefined4 *)*param_3;
  uVar14 = 0xffffffff;
  *param_2 = local_48[0];
  uVar4 = *puVar2;
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  local_40[4] = 0;
  *local_40 = uVar4;
  local_40[1] = uVar5;
  local_40[2] = uVar6;
  local_40[3] = uVar7;
  local_40[6] = 0xffffffff;
  iVar15 = *(int *)(param_1 + 0x1008) - *(int *)(param_1 + 0x1034);
  if (iVar15 != 1) {
    FUN_142d5e3a0(param_1,local_res8,local_40);
    iVar8 = local_res8[0];
    lVar13 = (longlong)local_res8[0];
    bVar16 = local_res8[0] != -1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar16);
    if (bVar16) {
      lVar11 = *(longlong *)(param_1 + 0x1000);
      if (*(longlong *)(param_1 + 0x1000) == 0) {
        lVar11 = param_1;
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar11 + lVar13 * 0x20),local_40,0x18);
      bVar3 = (byte)local_48[0] & 0x1f;
      if (*(int *)(param_1 + 0x1034) != 0) {
        lVar13 = *(longlong *)(param_1 + 0x1000);
        if (*(longlong *)(param_1 + 0x1000) == 0) {
          lVar13 = param_1;
        }
        *(int *)(lVar13 + (longlong)*(int *)(param_1 + 0x1030) * 0x20) = local_48[0];
      }
      lVar13 = *(longlong *)(param_1 + 0x1000);
      if (*(longlong *)(param_1 + 0x1000) == 0) {
        lVar13 = param_1;
      }
      *(undefined4 *)(lVar13 + (longlong)local_48[0] * 0x20) = 0xffffffff;
      if (0 < *(int *)(param_1 + 0x1034)) {
        uVar14 = *(undefined4 *)(param_1 + 0x1030);
      }
      *(undefined4 *)(lVar13 + 4 + (longlong)local_48[0] * 0x20) = uVar14;
      *(int *)(param_1 + 0x1034) = *(int *)(param_1 + 0x1034) + 1;
      *(int *)(param_1 + 0x1030) = local_48[0];
      lVar13 = *(longlong *)(param_1 + 0x1020);
      *param_2 = iVar8;
      if (lVar13 == 0) {
        lVar13 = param_1 + 0x1010;
      }
      puVar1 = (uint *)(lVar13 + (longlong)((int)(local_48[0] + (local_48[0] >> 0x1f & 0x1fU)) >> 5)
                                 * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      uVar12 = (undefined1)local_res8[0];
      goto LAB_142d50727;
    }
  }
  uVar12 = 0;
  cVar9 = FUN_142d5b6e0(param_1,iVar15,0);
  if (cVar9 == '\0') {
    uVar10 = GetTypeHash(local_40);
    uVar10 = uVar10 & *(int *)(param_1 + 0x1140) - 1U;
    local_40[7] = uVar10;
    lVar13 = *(longlong *)(param_1 + 0x1138);
    if (*(longlong *)(param_1 + 0x1138) == 0) {
      lVar13 = param_1 + 0x1038;
    }
    local_40[6] = *(undefined4 *)
                   (lVar13 + ((longlong)*(int *)(param_1 + 0x1140) - 1U & (longlong)(int)uVar10) * 4
                   );
    lVar13 = *(longlong *)(param_1 + 0x1138);
    if (*(longlong *)(param_1 + 0x1138) == 0) {
      lVar13 = param_1 + 0x1038;
    }
    *(int *)(lVar13 + ((longlong)*(int *)(param_1 + 0x1140) - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
LAB_142d50727:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar12;
  }
  return param_2;
}



// FUNCTION 142d50750 FUN_142d50750 body=612 status=ok
// SIG undefined FUN_142d50750(void)

void FUN_142d50750(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  
  iVar6 = (param_2 + -2) / 2;
  if (-1 < iVar6) {
    iVar7 = iVar6 * 2 + 1;
    iVar5 = iVar7;
    iVar9 = iVar6;
joined_r0x000142d507a6:
    do {
      if (iVar7 < param_2) {
        iVar7 = iVar6 * 2;
        iVar8 = iVar7 + 1;
        if (iVar7 + 2 < param_2) {
          lVar10 = param_1[iVar8];
          lVar1 = param_1[(longlong)iVar7 + 2];
          fVar11 = (float)FUN_14236eb80(lVar1);
          fVar12 = (float)FUN_14236eb80(lVar10);
          if (fVar11 == fVar12) {
            bVar4 = *(float *)(lVar1 + 0x730) < *(float *)(lVar10 + 0x730);
          }
          else {
            bVar4 = fVar11 < fVar12;
          }
          if (bVar4) {
            iVar8 = iVar7;
          }
          iVar8 = iVar8 + 1;
        }
        lVar10 = param_1[iVar6];
        lVar1 = param_1[iVar8];
        fVar11 = (float)FUN_14236eb80(lVar10);
        fVar12 = (float)FUN_14236eb80(lVar1);
        if (fVar11 == fVar12) {
          bVar4 = *(float *)(lVar10 + 0x730) < *(float *)(lVar1 + 0x730);
        }
        else {
          bVar4 = fVar11 < fVar12;
        }
        if (bVar4) {
          uVar2 = param_1[iVar6];
          param_1[iVar6] = param_1[iVar8];
          iVar7 = iVar8 * 2 + 1;
          param_1[iVar8] = uVar2;
          iVar6 = iVar8;
          goto joined_r0x000142d507a6;
        }
      }
      iVar7 = iVar5 + -2;
      iVar6 = iVar9 + -1;
      iVar5 = iVar7;
      iVar9 = iVar6;
    } while (-1 < iVar6);
  }
  param_2 = param_2 + -1;
  lVar10 = (longlong)param_2;
  if (0 < param_2) {
    do {
      iVar6 = 0;
      uVar2 = *param_1;
      *param_1 = param_1[lVar10];
      param_1[lVar10] = uVar2;
      if (1 < param_2) {
        do {
          iVar5 = iVar6 * 2;
          iVar7 = iVar5 + 1;
          if (iVar5 + 2 < param_2) {
            lVar1 = param_1[iVar7];
            lVar3 = param_1[(longlong)iVar5 + 2];
            fVar11 = (float)FUN_14236eb80(lVar3);
            fVar12 = (float)FUN_14236eb80(lVar1);
            if (fVar11 == fVar12) {
              bVar4 = *(float *)(lVar3 + 0x730) < *(float *)(lVar1 + 0x730);
            }
            else {
              bVar4 = fVar11 < fVar12;
            }
            if (bVar4) {
              iVar7 = iVar5;
            }
            iVar7 = iVar7 + 1;
          }
          lVar1 = param_1[iVar6];
          lVar3 = param_1[iVar7];
          fVar11 = (float)FUN_14236eb80(lVar1);
          fVar12 = (float)FUN_14236eb80(lVar3);
          if (fVar11 == fVar12) {
            bVar4 = *(float *)(lVar1 + 0x730) < *(float *)(lVar3 + 0x730);
          }
          else {
            bVar4 = fVar11 < fVar12;
          }
          if (!bVar4) break;
          uVar2 = param_1[iVar6];
          param_1[iVar6] = param_1[iVar7];
          param_1[iVar7] = uVar2;
          iVar6 = iVar7;
        } while (iVar7 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar10 = lVar10 + -1;
    } while (0 < lVar10);
  }
  return;
}



// FUNCTION 142d509c0 FUN_142d509c0 body=879 status=ok
// SIG undefined FUN_142d509c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d509c0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_3a8 [32];
  longlong *local_388;
  int local_380;
  undefined8 local_378;
  longlong local_360;
  longlong local_358;
  longlong lStack_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  if (1 < param_2) {
    local_58 = DAT_1468387a8 ^ (ulonglong)auStack_3a8;
    lStack_350 = param_1 + (param_2 - 1) * 8;
    fVar9 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar9 = fVar9 + 1.8446744e+19;
    }
    local_378 = param_4;
    local_358 = param_1;
    fVar9 = _guard_xfg_dispatch_icall_nop(fVar9);
    local_348 = (undefined4)(longlong)(fVar9 + fVar9);
    _guard_xfg_dispatch_icall_nop(local_340,0,0x2e8);
    local_388 = &local_358;
    do {
      plVar4 = (longlong *)*local_388;
      plVar6 = (longlong *)local_388[1];
      local_360 = local_388[2];
      local_380 = (int)local_360;
      lVar3 = ((longlong)plVar6 - (longlong)plVar4 >> 3) + 1;
      plVar5 = plVar4;
      if ((int)local_360 != 0) {
LAB_142d50ab0:
        if (8 < lVar3) {
          if (lVar3 < 0) {
            lVar3 = lVar3 + 1;
          }
          plVar7 = plVar6 + 1;
          lVar1 = plVar5[lVar3 >> 1];
          plVar5[lVar3 >> 1] = *plVar5;
          *plVar5 = lVar1;
          plVar4 = plVar5;
LAB_142d50ae0:
          plVar4 = plVar4 + 1;
          if (plVar4 <= plVar6) goto code_r0x000142d50ae9;
          goto LAB_142d50b27;
        }
        for (; plVar7 = plVar5, plVar4 = plVar5, plVar5 < plVar6; plVar6 = plVar6 + -1) {
          while (plVar8 = plVar7, plVar4 = plVar4 + 1, plVar4 <= plVar6) {
            lVar3 = *plVar8;
            lVar1 = *plVar4;
            fVar9 = (float)FUN_14236eb80(lVar3);
            fVar10 = (float)FUN_14236eb80(lVar1);
            if (fVar9 == fVar10) {
              bVar2 = *(float *)(lVar3 + 0x730) < *(float *)(lVar1 + 0x730);
            }
            else {
              bVar2 = fVar9 < fVar10;
            }
            plVar7 = plVar4;
            if (!bVar2) {
              plVar7 = plVar8;
            }
          }
          lVar3 = *plVar8;
          *plVar8 = *plVar6;
          *plVar6 = lVar3;
          param_4 = local_378;
        }
        goto LAB_142d50c40;
      }
LAB_142d50c2c:
      FUN_142d50750(plVar4,lVar3,param_3,param_4);
LAB_142d50c40:
      local_388 = local_388 + -3;
    } while (&local_358 <= local_388);
  }
  return;
code_r0x000142d50ae9:
  lVar3 = *plVar5;
  lVar1 = *plVar4;
  fVar9 = (float)FUN_14236eb80(lVar3);
  fVar10 = (float)FUN_14236eb80(lVar1);
  if (fVar9 == fVar10) {
    bVar2 = *(float *)(lVar3 + 0x730) < *(float *)(lVar1 + 0x730);
  }
  else {
    bVar2 = fVar9 < fVar10;
  }
  if (!bVar2) goto LAB_142d50ae0;
LAB_142d50b27:
  do {
    plVar8 = plVar7;
    plVar7 = plVar8 + -1;
    if (plVar7 <= plVar5) break;
    lVar3 = *plVar7;
    lVar1 = *plVar5;
    fVar9 = (float)FUN_14236eb80(lVar3);
    fVar10 = (float)FUN_14236eb80(lVar1);
    if (fVar9 == fVar10) {
      bVar2 = *(float *)(lVar3 + 0x730) < *(float *)(lVar1 + 0x730);
    }
    else {
      bVar2 = fVar9 < fVar10;
    }
  } while (!bVar2);
  if (plVar4 <= plVar7) {
    lVar3 = *plVar4;
    *plVar4 = *plVar7;
    *plVar7 = lVar3;
    goto LAB_142d50ae0;
  }
  lVar3 = *plVar5;
  *plVar5 = *plVar7;
  local_380 = local_380 + -1;
  *plVar7 = lVar3;
  if ((longlong)((longlong)plVar7 + (-8 - (longlong)plVar5) & 0xfffffffffffffff8U) <
      (longlong)((longlong)plVar6 - (longlong)plVar4 & 0xfffffffffffffff8U)) {
    if (plVar4 < plVar6) {
      *local_388 = (longlong)plVar4;
      local_388[1] = (longlong)plVar6;
      *(int *)(local_388 + 2) = local_380;
      local_388 = local_388 + 3;
    }
    if (plVar7 <= plVar5 + 1) goto LAB_142d50c40;
    plVar6 = plVar8 + -2;
    plVar4 = plVar5;
  }
  else {
    if (plVar5 + 1 < plVar7) {
      *local_388 = (longlong)plVar5;
      local_388[1] = (longlong)(plVar8 + -2);
      *(int *)(local_388 + 2) = local_380;
      local_388 = local_388 + 3;
    }
    if (plVar6 <= plVar4) goto LAB_142d50c40;
  }
  lVar3 = ((longlong)plVar6 - (longlong)plVar4 >> 3) + 1;
  plVar5 = plVar4;
  if (local_380 == 0) goto LAB_142d50c2c;
  goto LAB_142d50ab0;
}



// FUNCTION 142d50d30 FUN_142d50d30 body=109 status=ok
// SIG undefined FUN_142d50d30(void)

longlong FUN_142d50d30(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_res18 [2];
  
  local_res18[0] = 0;
  FUN_142c81650(param_1,local_res18,param_2);
  lVar3 = local_res18[0];
  if (local_res18[0] != 0) {
    lVar4 = UTextureRenderTarget::StaticClass();
    lVar1 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 142d50da0 FUN_142d50da0 body=120 status=ok
// SIG undefined FUN_142d50da0(void)

undefined8 * FUN_142d50da0(undefined8 *param_1)

{
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_14588afb0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8ac) = 0;
  *(undefined4 *)(param_1 + 0x115) = 0xffffffff;
  param_1[0x117] = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  return param_1;
}



// FUNCTION 142d50e20 FUN_142d50e20 body=381 status=ok
// SIG undefined FUN_142d50e20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142d50e20(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_1407aeff0();
  *param_1 = &PTR_FUN_1458894a8;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  uVar1 = uRam00000001468b5b78;
  param_1[0x90] = _DAT_1468b5b70;
  param_1[0x91] = uVar1;
  uVar1 = uRam00000001468b5b88;
  param_1[0x92] = _DAT_1468b5b80;
  param_1[0x93] = uVar1;
  uVar1 = uRam00000001468b5b98;
  param_1[0x94] = _DAT_1468b5b90;
  param_1[0x95] = uVar1;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4cc) = 0x10000;
  *(undefined1 *)((longlong)param_1 + 0x4d4) = 0;
  *(undefined1 *)(param_1 + 0x9b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4dc) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x4e4) = DAT_1468b5d98;
  param_1[0x9d] = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f4) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4fc) = 0xffffffff;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  uVar2 = uRam0000000146b3206c;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x544) = 0;
  *(undefined4 *)(param_1 + 0xa9) = 0;
  *(uint *)((longlong)param_1 + 0x54c) = uVar2;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  uVar2 = uRam0000000146b32064 & uRam0000000146b32074;
  uVar3 = uRam0000000146b32068 & uRam0000000146b32078;
  uVar4 = uRam0000000146b3206c & uRam0000000146b3207c;
  *(uint *)(param_1 + 0xac) = _DAT_146b32060 & _DAT_146b32070;
  *(uint *)((longlong)param_1 + 0x564) = uVar2;
  *(uint *)(param_1 + 0xad) = uVar3;
  *(uint *)((longlong)param_1 + 0x56c) = uVar4;
  FUN_142d97c50(param_1 + 0xae);
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  *(undefined1 *)(param_1 + 0xb5) = 0;
  *(undefined1 *)(param_1 + 0x9b) = 0;
  if (*(char *)(param_1 + 0xb5) != '\0') {
    *(undefined1 *)(param_1 + 0xb5) = 0;
  }
  *(undefined1 *)(param_1 + 0xb4) = 0;
  return param_1;
}



// FUNCTION 142d50fa0 FUN_142d50fa0 body=511 status=ok
// SIG undefined FUN_142d50fa0(void)

undefined4 * FUN_142d50fa0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  FUN_14246d930(param_1 + 4,param_2 + 4);
  FUN_14246d930(param_1 + 7,param_2 + 7);
  FUN_14246d930(param_1 + 10,param_2 + 10);
  FUN_14246d930(param_1 + 0xd,param_2 + 0xd);
  FUN_14246d930(param_1 + 0x10,param_2 + 0x10);
  FUN_14246d930(param_1 + 0x13,param_2 + 0x13);
  FUN_14246d930(param_1 + 0x16,param_2 + 0x16);
  FUN_14246d930(param_1 + 0x19,param_2 + 0x19);
  FUN_14246d930(param_1 + 0x1c,param_2 + 0x1c);
  FUN_14246d930(param_1 + 0x1f,param_2 + 0x1f);
  FUN_14246d930(param_1 + 0x22,param_2 + 0x22);
  FUN_14246d9c0(param_1 + 0x25,param_2 + 0x25);
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = param_2[0x2b];
  FUN_14246d930(param_1 + 0x2c,param_2 + 0x2c);
  FUN_14246d930(param_1 + 0x2f,param_2 + 0x2f);
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
  param_1[0x34] = param_2[0x34];
  param_1[0x35] = param_2[0x35];
  param_1[0x36] = param_2[0x36];
  param_1[0x37] = param_2[0x37];
  param_1[0x38] = param_2[0x38];
  param_1[0x39] = param_2[0x39];
  param_1[0x3a] = param_2[0x3a];
  *(undefined1 *)(param_1 + 0x3b) = *(undefined1 *)(param_2 + 0x3b);
  *(undefined1 *)((longlong)param_1 + 0xed) = *(undefined1 *)((longlong)param_2 + 0xed);
  *(undefined1 *)((longlong)param_1 + 0xee) = *(undefined1 *)((longlong)param_2 + 0xee);
  *(undefined1 *)((longlong)param_1 + 0xef) = *(undefined1 *)((longlong)param_2 + 0xef);
  *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
  *(undefined1 *)((longlong)param_1 + 0xf1) = *(undefined1 *)((longlong)param_2 + 0xf1);
  *(undefined1 *)((longlong)param_1 + 0xf2) = *(undefined1 *)((longlong)param_2 + 0xf2);
  *(undefined1 *)((longlong)param_1 + 0xf3) = *(undefined1 *)((longlong)param_2 + 0xf3);
  *(undefined1 *)(param_1 + 0x3d) = *(undefined1 *)(param_2 + 0x3d);
  return param_1;
}



// FUNCTION 142d511a0 FUN_142d511a0 body=36 status=ok
// SIG undefined FUN_142d511a0(void)

void * FUN_142d511a0(void *param_1)

{
  _guard_xfg_dispatch_icall_nop(param_1,0,0x58);
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  return param_1;
}



// FUNCTION 142d511d0 FUN_142d511d0 body=239 status=ok
// SIG undefined FUN_142d511d0(void)

undefined2 * FUN_142d511d0(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffffffa | 2;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x41800000;
  *(undefined4 *)(param_1 + 0x26) = 0x41800000;
  *(undefined4 *)(param_1 + 0x28) = 0x41200000;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0x43340000;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(byte *)((longlong)param_1 + 0xb9) = *(byte *)((longlong)param_1 + 0xb9) & 0xfe;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0x40;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(code **)(param_1 + 0x60) = AK::MemoryMgr::StartProfileThreadUsage;
  *(undefined4 *)(param_1 + 0x8e) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x92) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0x3f800000;
  return param_1;
}



// FUNCTION 142d512c0 FUN_142d512c0 body=466 status=ok
// SIG undefined FUN_142d512c0(void)

undefined8 * FUN_142d512c0(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  byte bVar2;
  longlong *plVar3;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  param_1[4] = param_2[4];
  *(byte *)(param_1 + 5) =
       *(byte *)(param_1 + 5) ^ (*(byte *)(param_1 + 5) ^ *(byte *)(param_2 + 5)) & 1;
  bVar2 = (*(byte *)(param_2 + 5) ^ *(byte *)(param_1 + 5)) & 2 ^ *(byte *)(param_1 + 5);
  *(byte *)(param_1 + 5) = bVar2;
  bVar2 = (*(byte *)(param_2 + 5) ^ bVar2) & 4 ^ bVar2;
  *(byte *)(param_1 + 5) = bVar2;
  bVar2 = (bVar2 ^ *(byte *)(param_2 + 5)) & 8 ^ bVar2;
  *(byte *)(param_1 + 5) = bVar2;
  bVar2 = (bVar2 ^ *(byte *)(param_2 + 5)) & 0x10 ^ bVar2;
  *(byte *)(param_1 + 5) = bVar2;
  bVar2 = (bVar2 ^ *(byte *)(param_2 + 5)) & 0x20 ^ bVar2;
  *(byte *)(param_1 + 5) = bVar2;
  bVar2 = (bVar2 ^ *(byte *)(param_2 + 5)) & 0x40 ^ bVar2;
  *(byte *)(param_1 + 5) = bVar2;
  *(byte *)(param_1 + 5) = (bVar2 ^ *(byte *)(param_2 + 5)) & 0x7f ^ *(byte *)(param_2 + 5);
  *(byte *)((longlong)param_1 + 0x29) =
       *(byte *)((longlong)param_1 + 0x29) ^
       (*(byte *)((longlong)param_2 + 0x29) ^ *(byte *)((longlong)param_1 + 0x29)) & 1;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_2[0xc] == 0) {
    _guard_xfg_dispatch_icall_nop(param_1 + 8,param_2 + 8,0x20);
  }
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  param_1[0xc] = param_2[0xc];
  param_2[0xc] = 0;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)(param_2 + 0xe) = 0;
  if (*(int *)(param_1 + 0xe) != 0) {
    plVar3 = (longlong *)param_1[0xc];
    if ((longlong *)param_1[0xc] == (longlong *)0x0) {
      plVar3 = param_1 + 8;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3);
      pcVar1 = (code *)param_2[6];
      goto LAB_142d5140e;
    }
  }
  pcVar1 = AK::MemoryMgr::StartProfileThreadUsage;
LAB_142d5140e:
  param_1[6] = pcVar1;
  param_2[6] = AK::MemoryMgr::StartProfileThreadUsage;
  param_1[0x10] = param_2[0x10];
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined8 *)((longlong)param_1 + 0x8c) = *(undefined8 *)((longlong)param_2 + 0x8c);
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x94);
  param_1[0x13] = param_2[0x13];
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0xa4);
  return param_1;
}



// FUNCTION 142d514a0 FUN_142d514a0 body=90 status=ok
// SIG undefined FUN_142d514a0(void)

undefined8 * FUN_142d514a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142bd6400(param_1,uVar1);
  *param_1 = &PTR__scalar_deleting_destructor__145889b48;
  *(undefined4 *)(param_1 + 0x1e) = 0x1010200;
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0x40400000;
  uVar1 = UEnvQueryItemType_ActorBase::GetPrivateStaticClass();
  param_1[0x38] = uVar1;
  return param_1;
}



// FUNCTION 142d51500 FUN_142d51500 body=46 status=ok
// SIG undefined FUN_142d51500(void)

undefined8 * FUN_142d51500(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_145885a18;
  FText::FText(param_1 + 6);
  *(undefined1 *)((longlong)param_1 + 0x49) = 0;
  return param_1;
}



// FUNCTION 142d51530 FUN_142d51530 body=33 status=ok
// SIG undefined FUN_142d51530(void)

undefined8 * FUN_142d51530(undefined8 *param_1)

{
  FUN_142c8cfb0();
  *param_1 = &PTR_FUN_145886378;
  return param_1;
}



// FUNCTION 142d51560 FUN_142d51560 body=37 status=ok
// SIG undefined FUN_142d51560(void)

undefined8 * FUN_142d51560(undefined8 *param_1)

{
  FUN_142c8cfb0();
  *(undefined1 *)(param_1 + 5) = 1;
  *param_1 = &PTR_FUN_145886668;
  return param_1;
}



// FUNCTION 142d51590 FUN_142d51590 body=53 status=ok
// SIG undefined FUN_142d51590(void)

undefined8 * FUN_142d51590(undefined8 *param_1)

{
  FUN_142c8cfb0();
  *(undefined4 *)(param_1 + 0x17) = 0x800000;
  *param_1 = &PTR__scalar_deleting_destructor__145886958;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x7f7fffff;
  return param_1;
}



// FUNCTION 142d515d0 FUN_142d515d0 body=33 status=ok
// SIG undefined FUN_142d515d0(void)

undefined8 * FUN_142d515d0(undefined8 *param_1)

{
  FUN_142c8d050();
  *param_1 = &PTR_FUN_145886f28;
  return param_1;
}



// FUNCTION 142d51600 FUN_142d51600 body=33 status=ok
// SIG undefined FUN_142d51600(void)

undefined8 * FUN_142d51600(undefined8 *param_1)

{
  FUN_142c8d050();
  *param_1 = &PTR_FUN_145886c48;
  return param_1;
}



// FUNCTION 142d51630 FUN_142d51630 body=85 status=ok
// SIG undefined FUN_142d51630(void)

undefined8 * FUN_142d51630(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_1458860e0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x7e) = 1;
  return param_1;
}



// FUNCTION 142d51690 FUN_142d51690 body=298 status=ok
// SIG undefined FUN_142d51690(void)

undefined8 * FUN_142d51690(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142326e40(param_1,uVar1);
  *param_1 = &PTR_FUN_145885c98;
  param_1[5] = &PTR_LAB_145886098;
  param_1[0x2f] = &PTR_LAB_1458860c8;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x41) = 0xffffffff;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0xffffffff;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 2;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  *(uint *)((longlong)param_1 + 0xc4) = *(uint *)((longlong)param_1 + 0xc4) | 1;
  return param_1;
}



// FUNCTION 142d517c0 FUN_142d517c0 body=144 status=ok
// SIG undefined FUN_142d517c0(void)

undefined8 * FUN_142d517c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142c62e40();
  *param_1 = &PTR_FUN_145888908;
  param_1[5] = &PTR_LAB_145888ba0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x12] = 0;
  FUN_142d511d0(param_1 + 0x14);
  uVar1 = FUN_1428dfc70();
  param_1[0x12] = uVar1;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x14) = 1;
  uVar1 = FUN_142e26130();
  param_1[0xb] = uVar1;
  return param_1;
}



// FUNCTION 142d51850 FUN_142d51850 body=213 status=ok
// SIG undefined FUN_142d51850(void)

undefined8 * FUN_142d51850(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_res8 [4];
  
  FUN_142c63600();
  *param_1 = &PTR_FUN_145888be8;
  param_1[5] = &PTR_LAB_145888e98;
  param_1[0xc] = &PTR_LAB_145888ee0;
  FUN_142c622d0(param_1 + 0x19);
  FUN_142c622d0(param_1 + 0x28);
  param_1[0x38] = 0;
  FUN_142c62230(param_1 + 0x3b);
  FUN_142c62230(param_1 + 0x3e);
  *(undefined4 *)(param_1 + 0x17) = 0x437a0000;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0x37) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0x3dcccccd;
  FName::FName(local_res8,L"FullBody",1);
  param_1[0x38] = local_res8[0];
  *(undefined1 *)(param_1 + 0x16) = 0;
  uVar1 = FActiveGameplayEffectsContainer::StaticStruct();
  param_1[0xb] = uVar1;
  return param_1;
}



// FUNCTION 142d51930 FUN_142d51930 body=335 status=ok
// SIG undefined FUN_142d51930(void)

undefined8 * FUN_142d51930(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  
  FUN_142c63420();
  *param_1 = &PTR__scalar_deleting_destructor__145888ef0;
  plVar1 = param_1 + 0x3b;
  param_1[5] = &PTR_LAB_1458891a0;
  param_1[0xc] = &PTR_LAB_1458891e8;
  *plVar1 = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0x40a00000;
  *(undefined1 *)((longlong)param_1 + 0x1cd) = 0;
  *(undefined2 *)(param_1 + 0x3d) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1d4) = 1;
  *(undefined1 *)(param_1 + 0x35) = 1;
  *(undefined1 *)((longlong)param_1 + 0x1aa) = 2;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c3) = 6;
  *(undefined2 *)((longlong)param_1 + 0x69) = 0x101;
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined1 *)(param_1 + 0x26) = 1;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x3f59999a;
  *(undefined4 *)(param_1 + 0x36) = 0xbdcccccd;
  uVar3 = FUN_142e262b0();
  param_1[0xb] = uVar3;
  FName::FName(&local_res8,L"L_Foot",1);
  iVar2 = *(int *)(param_1 + 0x3c);
  *(int *)(param_1 + 0x3c) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x1e4) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = local_res8;
  FName::FName(&local_res8,L"R_Foot",1);
  iVar2 = *(int *)(param_1 + 0x3c);
  *(int *)(param_1 + 0x3c) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x1e4) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = local_res8;
  *(undefined1 *)(param_1 + 10) = 2;
  return param_1;
}



// FUNCTION 142d51a80 FUN_142d51a80 body=556 status=ok
// SIG undefined FUN_142d51a80(void)

undefined8 * FUN_142d51a80(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  
  FUN_142c63600();
  *param_1 = &PTR_FUN_1458895c0;
  param_1[5] = &PTR_LAB_145889870;
  param_1[0xc] = &PTR_LAB_1458898b8;
  FUN_142c62230(param_1 + 0x17);
  FUN_142c62230(param_1 + 0x1d);
  plVar1 = param_1 + 0x22;
  param_1[0x21] = 0;
  *plVar1 = 0;
  param_1[0x23] = 0;
  param_1[0x28] = 0;
  FUN_142c62230(param_1 + 0x2a);
  FUN_142c62230(param_1 + 0x2d);
  uVar3 = FUN_142e26310();
  param_1[0xb] = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1a) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x1b) = 0x45ea6000;
  *(undefined4 *)(param_1 + 0x1c) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x30) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x27) = 0x42c80000;
  FName::FName(&local_res8,L"Hips",1);
  param_1[0x28] = local_res8;
  *(undefined4 *)(param_1 + 0x29) = 0x1020001;
  FName::FName(&local_res8,L"FullBody",1);
  param_1[0x21] = local_res8;
  *(undefined1 *)((longlong)param_1 + 0x6b) = 1;
  iVar2 = *(int *)(param_1 + 0x23);
  *(int *)(param_1 + 0x23) = iVar2 + 2;
  if (*(int *)((longlong)param_1 + 0x11c) < iVar2 + 2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar1);
  }
  FName::FName(&local_res8,L"R_Hand_Weapon",1);
  *(undefined8 *)*plVar1 = local_res8;
  FName::FName(&local_res8,L"R_Hand_Object",1);
  *(undefined8 *)(*plVar1 + 8) = local_res8;
  FName::FName(&local_res8,L"R_Hand",1);
  *(undefined8 *)(*plVar1 + 0x10) = local_res8;
  FName::FName(&local_res8,L"L_Hand_Weapon",1);
  *(undefined8 *)(*plVar1 + 0x18) = local_res8;
  FName::FName(&local_res8,L"L_Hand_Object",1);
  *(undefined8 *)(*plVar1 + 0x20) = local_res8;
  FName::FName(&local_res8,L"L_Hand",1);
  *(undefined8 *)(*plVar1 + 0x28) = local_res8;
  return param_1;
}



// FUNCTION 142d51cb0 FUN_142d51cb0 body=266 status=ok
// SIG undefined FUN_142d51cb0(void)

undefined8 * FUN_142d51cb0(undefined8 *param_1)

{
  FUN_14243eb70();
  *(undefined1 *)((longlong)param_1 + 0xc9) = 0;
  *param_1 = &PTR_FUN_145888248;
  param_1[5] = &PTR_LAB_145888628;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 2;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3d] = 0;
  return param_1;
}



// FUNCTION 142d51dc0 FUN_142d51dc0 body=43 status=ok
// SIG undefined FUN_142d51dc0(void)

undefined8 * FUN_142d51dc0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_145888638;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 142d51df0 FUN_142d51df0 body=40 status=ok
// SIG undefined FUN_142d51df0(void)

undefined8 * FUN_142d51df0(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *param_1 = &PTR_FUN_145887750;
  return param_1;
}



// FUNCTION 142d51e20 FUN_142d51e20 body=66 status=ok
// SIG undefined FUN_142d51e20(void)

undefined8 * FUN_142d51e20(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *param_1 = &PTR__scalar_deleting_destructor__145887aa8;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  return param_1;
}



// FUNCTION 142d51e70 FUN_142d51e70 body=50 status=ok
// SIG undefined FUN_142d51e70(void)

undefined8 * FUN_142d51e70(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *param_1 = &PTR__scalar_deleting_destructor__145887d38;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}


