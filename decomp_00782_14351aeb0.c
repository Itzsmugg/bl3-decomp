// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14351aeb0 FUN_14351aeb0 body=135 status=ok
// SIG undefined FUN_14351aeb0(void)

undefined8 FUN_14351aeb0(undefined8 param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  char cVar2;
  ulonglong uVar3;
  
  *(undefined4 *)(param_2 + 0x58) = 3;
  uVar3 = 0;
  uVar1 = *(ulonglong *)(param_3 + 8);
  if (uVar1 != 0) {
    do {
      cVar2 = FUN_14351af40(*(undefined8 *)(*(longlong *)(param_3 + 0x118) + uVar3 * 8),param_2,0);
      if (cVar2 == '\0') {
        (**(code **)(**(longlong **)(*(longlong *)(param_3 + 0x118) + uVar3 * 8) + 200))();
        return 0;
      }
      if ((*(byte *)(param_2 + 0x5c) & 0x18) != 0) {
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 1;
}



// FUNCTION 14351af40 FUN_14351af40 body=1632 status=ok
// SIG undefined FUN_14351af40(void)

undefined1 FUN_14351af40(ulonglong param_1,longlong param_2,char param_3)

{
  ulonglong uVar1;
  bool bVar2;
  longlong lVar3;
  undefined1 *puVar4;
  uint *puVar5;
  uint uVar6;
  longlong *plVar7;
  uint *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulonglong uVar12;
  longlong lVar13;
  char cVar14;
  longlong *plVar15;
  undefined1 uVar16;
  bool bVar17;
  uint local_res8 [2];
  longlong local_res10;
  undefined4 local_res20 [2];
  uint local_270 [2];
  undefined8 local_268;
  uint local_250 [2];
  undefined8 local_248;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  uint local_230 [2];
  undefined8 local_228;
  uint local_210 [2];
  undefined8 local_208;
  uint local_200;
  uint uStack_1fc;
  uint uStack_1f8;
  uint uStack_1f4;
  uint local_1f0 [10];
  undefined1 local_1c8 [400];
  longlong *plVar11;
  
  plVar11 = (longlong *)0x0;
  local_res8[0] = 0;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    return 1;
  }
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + 1U & 0x8fffffff;
  plVar7 = *(longlong **)(param_1 + 0x48);
  if (param_3 == '\0') {
    plVar7 = plVar7 + 1;
  }
  lVar13 = *plVar7;
  plVar7 = plVar11;
  local_res10 = param_2;
  if ((lVar13 != 0) && (lVar3 = FUN_1432ef240(), -1 < lVar3)) {
    plVar7 = (longlong *)(lVar13 + (lVar3 * 3 + 3) * 8);
  }
  plVar15 = plVar7 + 1;
  if (plVar7 == (longlong *)0x0) {
    plVar15 = plVar11;
  }
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,1);
  uVar16 = 1;
  if (plVar15 != (longlong *)0x0) {
    FUN_1434f0700(param_2 + 0x48,param_1);
    plVar15 = (longlong *)*plVar15;
    uVar1 = plVar15[1];
    if (uVar1 == 1) {
      lVar13 = *plVar15;
      puVar8 = (uint *)(lVar13 + 8);
      if (((*puVar8 >> 9 & 1) == 0) || (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 8) != 0)) {
        local_270[0] = 0;
        local_268 = 0;
        FUN_143590110(local_230,param_2);
        uVar6 = *puVar8;
        local_210[0] = 0;
        local_208 = 0;
        if ((uVar6 >> 9 & 1) == 0) {
          local_240 = *(undefined4 *)(lVar13 + 0x18);
          uStack_23c = *(undefined4 *)(lVar13 + 0x1c);
          uStack_238 = *(undefined4 *)(lVar13 + 0x20);
          uStack_234 = *(undefined4 *)(lVar13 + 0x24);
          local_248 = *(undefined8 *)(lVar13 + 0x10);
          local_250[0] = uVar6;
          if (9 < ((byte)uVar6 & 0x1f)) {
            FUN_143592070(puVar8);
          }
          puVar8 = local_250;
          bVar2 = false;
          bVar17 = true;
        }
        else {
          puVar8 = (uint *)FUN_143590020(local_1f0,puVar8,0);
          bVar2 = true;
          bVar17 = false;
        }
        local_res8[0] = 1;
        FUN_1435ce880(*(undefined8 *)(param_1 + 0x40),puVar8,local_270,local_210,local_res8,
                      local_230,0,1);
        if ((bVar17) && (9 < ((byte)local_250[0] & 0x1f))) {
          if ((local_250[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_250);
          }
          else {
            FUN_143592150();
          }
        }
        if ((bVar2) && (9 < ((byte)local_1f0[0] & 0x1f))) {
          if ((local_1f0[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_1f0);
          }
          else {
            FUN_143592150();
          }
        }
        uVar16 = *(char *)(*(longlong *)(param_1 + 0x40) + 0xb8) == '\0';
        if (!(bool)uVar16) {
          FUN_1435cc020();
        }
        if (9 < ((byte)local_210[0] & 0x1f)) {
          if ((local_210[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_210);
          }
          else {
            FUN_143592150();
          }
        }
        if (9 < ((byte)local_230[0] & 0x1f)) {
          if ((local_230[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_230);
          }
          else {
            FUN_143592150();
          }
        }
        if (9 < ((byte)local_270[0] & 0x1f)) {
          if ((local_270[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_270);
          }
          else {
            FUN_143592150();
          }
        }
      }
      else {
        uVar16 = 1;
      }
    }
    else if (1 < uVar1) {
      if (uVar1 < 0xb) {
        puVar4 = local_1c8;
      }
      else {
        puVar4 = (undefined1 *)
                 (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,uVar1 * 0x28,0);
      }
      uVar1 = plVar15[1];
      if (uVar1 != 0) {
        puVar9 = puVar4;
        uVar12 = uVar1;
        do {
          if (puVar9 != (undefined1 *)0x0) {
            FUN_143532f30(puVar9,puVar9 + (*plVar15 - (longlong)puVar4));
          }
          puVar9 = puVar9 + 0x28;
          uVar12 = uVar12 - 1;
          param_2 = local_res10;
        } while (uVar12 != 0);
      }
      uVar12 = 0;
      if (uVar1 != 0) {
        puVar8 = (uint *)(puVar4 + 8);
        do {
          uVar6 = *puVar8 >> 9;
          if ((uVar6 & 1) == 0) {
            bVar17 = true;
          }
          else {
            bVar17 = *(longlong *)(*(longlong *)(puVar8 + 2) + 8) != 0;
          }
          if (bVar17) {
            local_270[0] = 0;
            local_268 = 0;
            local_230[0] = 0;
            local_228 = 0;
            FUN_143590110(local_250,param_2);
            uVar6 = *puVar8;
            if ((uVar6 >> 9 & 1) == 0) {
              local_200 = puVar8[4];
              uStack_1fc = puVar8[5];
              uStack_1f8 = puVar8[6];
              uStack_1f4 = puVar8[7];
              local_208 = *(undefined8 *)(puVar8 + 2);
              uVar10 = (uint)plVar11 | 8;
              local_210[0] = uVar6;
              if (9 < ((byte)uVar6 & 0x1f)) {
                FUN_143592070(puVar8);
              }
              puVar5 = local_210;
            }
            else {
              uVar10 = (uint)plVar11 | 4;
              puVar5 = (uint *)FUN_143590020(local_1f0,puVar8,0);
            }
            plVar11 = (longlong *)(ulonglong)uVar10;
            local_res20[0] = 1;
            FUN_1435ce880(*(undefined8 *)(param_1 + 0x40),puVar5,local_270,local_230,local_res20,
                          local_250,0,1);
            if (((uVar10 & 8) != 0) &&
               (plVar11 = (longlong *)(ulonglong)(uVar10 & 0xfffffff7),
               9 < ((byte)local_210[0] & 0x1f))) {
              if ((local_210[0] >> 9 & 1) == 0) {
                FUN_1435920c0(local_210);
              }
              else {
                FUN_143592150();
              }
            }
            if ((((ulonglong)plVar11 & 4) != 0) &&
               (plVar11 = (longlong *)(ulonglong)((uint)plVar11 & 0xfffffffb),
               9 < ((byte)local_1f0[0] & 0x1f))) {
              if ((local_1f0[0] >> 9 & 1) == 0) {
                FUN_1435920c0(local_1f0);
              }
              else {
                FUN_143592150();
              }
            }
            if (*(char *)(*(longlong *)(param_1 + 0x40) + 0xb8) == '\0') {
              cVar14 = (char)local_res8[0];
            }
            else {
              FUN_1435cc020();
              local_res8[0] = local_res8[0] & 0xffffff00;
              cVar14 = '\0';
            }
            if (9 < ((byte)*puVar8 & 0x1f)) {
              if ((*puVar8 >> 9 & 1) == 0) {
                FUN_1435920c0(puVar8);
              }
              else {
                FUN_143592150();
              }
            }
            if (((*(byte *)(param_2 + 0x5c) & 0x10) != 0) || (cVar14 == '\0')) {
              if (9 < ((byte)local_250[0] & 0x1f)) {
                if ((local_250[0] >> 9 & 1) == 0) {
                  FUN_1435920c0(local_250);
                }
                else {
                  FUN_143592150();
                }
              }
              if (9 < ((byte)local_230[0] & 0x1f)) {
                if ((local_230[0] >> 9 & 1) == 0) {
                  FUN_1435920c0(local_230);
                }
                else {
                  FUN_143592150();
                }
              }
              if (9 < ((byte)local_270[0] & 0x1f)) {
                if ((local_270[0] >> 9 & 1) == 0) {
                  FUN_1435920c0(local_270);
                }
                else {
                  FUN_143592150();
                }
              }
              break;
            }
            if (9 < ((byte)local_250[0] & 0x1f)) {
              if ((local_250[0] >> 9 & 1) == 0) {
                FUN_1435920c0(local_250);
              }
              else {
                FUN_143592150();
              }
            }
            if (9 < ((byte)local_230[0] & 0x1f)) {
              if ((local_230[0] >> 9 & 1) == 0) {
                FUN_1435920c0(local_230);
              }
              else {
                FUN_143592150();
              }
            }
            if (9 < ((byte)local_270[0] & 0x1f)) {
              uVar6 = local_270[0] >> 9;
              puVar5 = local_270;
              goto LAB_14351b452;
            }
          }
          else {
            puVar5 = puVar8;
            if (9 < ((byte)*puVar8 & 0x1f)) {
LAB_14351b452:
              if ((uVar6 & 1) == 0) {
                FUN_1435920c0(puVar5);
              }
              else {
                FUN_143592150();
              }
            }
          }
          uVar12 = uVar12 + 1;
          puVar8 = puVar8 + 10;
        } while (uVar12 < uVar1);
      }
      uVar12 = uVar12 + 1;
      if (uVar12 < uVar1) {
        lVar13 = uVar1 - uVar12;
        puVar8 = (uint *)(puVar4 + (uVar12 * 5 + 1) * 8);
        do {
          if (9 < ((byte)*puVar8 & 0x1f)) {
            if ((*puVar8 >> 9 & 1) == 0) {
              FUN_1435920c0(puVar8);
            }
            else {
              FUN_143592150();
            }
          }
          puVar8 = puVar8 + 10;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      if (puVar4 != local_1c8) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      uVar16 = (char)local_res8[0];
    }
  }
  if (((param_1 & 1) == 0) && ((*(uint *)(param_1 + 8) & 0x3fffff) != 0)) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) - 1;
    FUN_1434ef880(param_1);
  }
  return uVar16;
}



// FUNCTION 14351b5b0 FUN_14351b5b0 body=331 status=ok
// SIG undefined FUN_14351b5b0(void)

void FUN_14351b5b0(longlong param_1,longlong *param_2,char param_3,longlong param_4)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar2 = *(longlong *)((*(ulonglong *)(param_1 + 0x28) & 0xfffffffffffffffe) + 0x98);
  lVar3 = *(longlong *)(lVar2 + 0x300);
  if (lVar3 != 0) {
    lVar4 = *param_2;
    if (lVar4 == *(longlong *)(lVar3 + 0x2b0)) {
      uVar5 = 2;
      puVar1 = (uint *)(*(longlong *)(lVar3 + 0x10) + 0x52f0);
      *puVar1 = *puVar1 | 0x80000;
    }
    else if (lVar4 == *(longlong *)(lVar3 + 0x2b8)) {
      uVar5 = 0x1000015;
    }
    else if (lVar4 == *(longlong *)(lVar3 + 0x2c0)) {
      uVar5 = 0x1000016;
    }
    else if (lVar4 == *(longlong *)(lVar3 + 0x280)) {
      uVar5 = 0x1000011;
    }
    else if (lVar4 == *(longlong *)(lVar3 + 0x2a8)) {
      uVar5 = 0x1000012;
    }
    else {
      if (lVar4 != *(longlong *)(lVar3 + 0x310)) {
        if ((((*(longlong *)(lVar3 + 0x338) != lVar4) && (*(longlong *)(lVar3 + 0x358) != lVar4)) &&
            (*(longlong *)(lVar3 + 0x328) != lVar4)) &&
           (((*(longlong *)(lVar3 + 0x330) != lVar4 && (*(longlong *)(lVar3 + 0x350) != lVar4)) &&
            ((*(longlong *)(lVar3 + 0x348) != lVar4 &&
             ((*(longlong *)(lVar3 + 0x370) != lVar4 && (*(longlong *)(lVar3 + 0x368) != lVar4))))))
           )) {
          return;
        }
        lVar2 = *(longlong *)(param_1 + 0x48);
        if (param_3 == '\0') {
          if (*(char *)(lVar2 + 0x13) == -1) {
            return;
          }
          *(char *)(lVar2 + 0x13) = *(char *)(lVar2 + 0x13) + -1;
          return;
        }
        if (*(char *)(lVar2 + 0x12) == -1) {
          return;
        }
        *(char *)(lVar2 + 0x12) = *(char *)(lVar2 + 0x12) + -1;
        return;
      }
      uVar5 = 0x1000013;
    }
    if (((param_4 == 0) && (*(int *)(*(longlong *)(param_1 + 0x28) + 0x90) - 0x18U < 0xd)) &&
       ((~(*(byte *)(*(longlong *)(param_1 + 0x28) + 0x88) >> 5) & 1) != 0)) {
      FUN_1435e9260(*(longlong *)(lVar2 + 0x300) + 400,uVar5,*(undefined8 *)(param_1 + 0x88));
      return;
    }
  }
  return;
}



// FUNCTION 14351b710 FUN_14351b710 body=215 status=ok
// SIG undefined FUN_14351b710(void)

undefined4 FUN_14351b710(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_res8;
  ulonglong local_res18;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x1d8);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x28);
  local_res8 = FUN_143360a60(*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218
                              ));
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_1435b4530(lVar3 + 0x28,&local_res18,&local_res8,uVar2);
  if ((longlong)local_res18 < 0) {
    lVar3 = 0;
  }
  else if (local_res18 < *(ulonglong *)(lVar3 + 0x28)) {
    lVar3 = FUN_1434ef150(*(undefined8 *)(lVar3 + 0x30),local_res18);
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x38) + 0x10 +
            ((local_res18 & 0xffffffff) - *(ulonglong *)(lVar3 + 0x28)) * 0x40;
  }
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (lVar3 != 0) {
    return *(undefined4 *)(lVar3 + 4);
  }
  return 0xffffffff;
}



// FUNCTION 14351b7f0 FUN_14351b7f0 body=339 status=ok
// SIG undefined FUN_14351b7f0(void)

void FUN_14351b7f0(longlong param_1,int param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 local_res10 [2];
  uint local_58 [2];
  undefined8 local_50;
  ulonglong local_48;
  uint local_38 [8];
  
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x28);
  local_58[0] = 0;
  local_50 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_58,*(longlong *)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x58) = 0;
  uVar3 = FUN_1434ef190(uVar3);
  FUN_1435d7ec0(uVar3,local_38,(longlong)param_2);
  local_res10[0] = param_4;
  FUN_1435ce880(*(undefined8 *)(param_1 + 0x40),local_38,local_58,param_3,local_res10,param_5,0,1);
  uVar2 = local_48;
  uVar1 = *(ulonglong *)(param_1 + 0x58);
  local_58[0] = local_58[0] & 0xffffffe0;
  local_48 = 0;
  if (uVar2 != uVar1) {
    if (uVar1 != 0) {
      if ((uVar1 & 1) == 0) {
        if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *(ulonglong *)(param_1 + 0x58) = uVar1 - 1;
      }
    }
    *(ulonglong *)(param_1 + 0x58) = uVar2;
  }
  if (9 < ((byte)local_38[0] & 0x1f)) {
    if ((local_38[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_38);
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)local_58[0] & 0x1f)) {
    if ((local_58[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_58);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 14351b950 GetDelegateTraits body=52 status=ok
// SIG undefined GetDelegateTraits(void)

undefined8
Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::GetDelegateTraits(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x60) == 0) {
    uVar1 = FUN_1435c8090(*(undefined8 *)(param_1 + 0x40),&DAT_145b26f58);
    *(undefined8 *)(param_1 + 0x60) = uVar1;
    return uVar1;
  }
  return *(undefined8 *)(param_1 + 0x60);
}



// FUNCTION 14351b990 FUN_14351b990 body=165 status=ok
// SIG undefined FUN_14351b990(void)

void FUN_14351b990(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong local_res10;
  
  for (lVar1 = *(longlong *)(param_2 + 0x38); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x38)) {
    lVar2 = (**(code **)(*(longlong *)(lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4) + 8))
                      (lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4);
    if (lVar2 != 0) {
      lVar2 = lVar2 + -0x38;
    }
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (uVar3 == 0) {
      uVar3 = *(ulonglong *)(lVar2 + 8);
    }
    if ((uVar3 & 1) != 0) {
      uVar3 = uVar3 - 1;
    }
    if (uVar3 != 0) {
      *(uint *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1U & 0x8fffffff;
      local_res10 = uVar3;
      FUN_143533fc0(param_3,&local_res10);
      if (((uVar3 & 1) == 0) && ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0)) {
        *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
        FUN_1434ef880(uVar3);
      }
    }
  }
  return;
}



// FUNCTION 14351ba50 FUN_14351ba50 body=125 status=ok
// SIG undefined FUN_14351ba50(void)

void FUN_14351ba50(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((((param_2 != 0) && (((byte)*param_3 & 0x1f) == 0xc)) && (*(longlong *)(param_3 + 4) != 0)) &&
     ((~(*(byte *)(*(longlong *)(*(longlong *)(param_3 + 4) + 0x28) + 0x88) >> 5) & 1) != 0)) {
    lVar3 = FUN_1435b4fa0();
    uVar1 = *(undefined8 *)(lVar3 + 0x28);
    uVar4 = Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::GetDelegateTraits(param_1);
    cVar2 = FUN_1435b5020(uVar4,uVar1);
    if (cVar2 != '\0') {
      FUN_1434f0700(param_1 + 0x58,*(undefined8 *)(param_3 + 4));
    }
  }
  return;
}



// FUNCTION 14351bae0 FUN_14351bae0 body=1559 status=ok
// SIG undefined FUN_14351bae0(void)

void FUN_14351bae0(longlong param_1,undefined8 param_2,ulonglong *param_3,uint *param_4,char param_5
                  ,int param_6,char param_7)

{
  uint *puVar1;
  int *piVar2;
  ushort *puVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  char cVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong *puVar20;
  ulonglong uVar21;
  longlong *local_res8;
  ulonglong local_108;
  undefined8 local_100;
  longlong **local_f8;
  undefined8 local_f0;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  undefined1 local_d8 [32];
  uint local_b8;
  undefined8 local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined4 local_98;
  undefined8 local_90;
  char local_88;
  undefined4 local_78;
  undefined8 local_70;
  int local_68;
  uint local_58 [4];
  char local_48;
  
  puVar15 = &stack0xffffffffffffffc8;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    if (*(int *)(param_1 + 0x68) < 0) {
      uVar11 = FUN_14351b710(param_1,"addEventListener");
      *(undefined4 *)(param_1 + 0x68) = uVar11;
    }
    if (-1 < *(int *)(param_1 + 0x68)) {
      Scaleform::GFx::AS3::Value::Value(local_d8,param_3);
      local_b0 = *(undefined8 *)(param_4 + 2);
      local_b8 = *param_4;
      local_a8 = param_4[4];
      uStack_a4 = param_4[5];
      uStack_a0 = param_4[6];
      uStack_9c = param_4[7];
      if (9 < ((byte)local_b8 & 0x1f)) {
        if ((local_b8 >> 9 & 1) == 0) {
          FUN_143592070(param_4);
        }
        else {
          FUN_143592140();
        }
      }
      local_88 = param_5;
      local_68 = param_6;
      local_90 = 0;
      local_70 = 0;
      local_58[2] = 0;
      local_58[3] = 0;
      local_100 = (ulonglong *)((ulonglong)local_100._4_4_ << 0x20);
      local_f8 = (longlong **)0x0;
      lVar18 = 5;
      local_48 = param_7;
      local_78 = 2;
      local_98 = 1;
      local_58[0] = 1;
      FUN_14351b7f0(param_1,*(undefined4 *)(param_1 + 0x68),&local_100,5,local_d8);
      if (9 < ((byte)local_100 & 0x1f)) {
        if (((uint)local_100 >> 9 & 1) == 0) {
          FUN_1435920c0(&local_100);
        }
        else {
          FUN_143592150();
        }
      }
      do {
        puVar1 = (uint *)(puVar15 + -0x20);
        puVar15 = puVar15 + -0x20;
        lVar18 = lVar18 + -1;
        if (9 < ((byte)*puVar1 & 0x1f)) {
          if ((*puVar1 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar15);
          }
          else {
            FUN_143592150();
          }
        }
      } while (lVar18 != 0);
      return;
    }
  }
  puVar16 = (undefined8 *)0x0;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    plVar13 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x48);
    puVar12 = (undefined8 *)(**(code **)(*plVar13 + 0x50))(plVar13,0x18,0);
    puVar17 = puVar16;
    if (puVar12 != (undefined8 *)0x0) {
      *puVar12 = 0;
      puVar12[1] = 0;
      *(undefined4 *)(puVar12 + 2) = 0;
      puVar17 = puVar12;
    }
    Scaleform::
    AutoPtr<Scaleform::GFx::AS3::Instances::fl_events::EventDispatcher::EventDispatcherImpl>::
    operator=(param_1 + 0x48,puVar17);
  }
  plVar13 = *(longlong **)(param_1 + 0x48);
  if (param_5 == '\0') {
    plVar13 = plVar13 + 1;
  }
  uVar7 = *param_3;
  iVar5 = *(int *)(uVar7 + 0x18);
  *(int *)(uVar7 + 0x18) = iVar5 + 1;
  lVar18 = *plVar13;
  puVar17 = puVar16;
  if (lVar18 != 0) {
    uVar8 = *(ulonglong *)(lVar18 + 8);
    uVar21 = *(uint *)(uVar7 + 0x1c) & uVar8;
    lVar4 = uVar21 * 3 + 2;
    puVar20 = (ulonglong *)(lVar18 + lVar4 * 8);
    if ((*(longlong *)(lVar18 + lVar4 * 8) != -2) &&
       (uVar19 = uVar21, (*(uint *)(puVar20[1] + 0x1c) & uVar8) == uVar21)) {
      while (((*(uint *)(puVar20[1] + 0x1c) & uVar8) != uVar21 || (puVar20[1] != uVar7))) {
        uVar19 = *puVar20;
        if (uVar19 == 0xffffffffffffffff) goto LAB_14351bd31;
        puVar20 = (ulonglong *)(lVar18 + uVar19 * 0x18 + 0x10);
      }
      if (-1 < (longlong)uVar19) {
        puVar17 = (undefined8 *)(lVar18 + (uVar19 + 1) * 0x18);
      }
    }
  }
LAB_14351bd31:
  *(int *)(uVar7 + 0x18) = iVar5;
  puVar12 = puVar17 + 1;
  if (puVar17 == (undefined8 *)0x0) {
    puVar12 = puVar16;
  }
  if (iVar5 == 0) {
    FUN_14335f920();
  }
  if (puVar12 == (undefined8 *)0x0) {
    plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x48);
    local_res8 = (longlong *)(**(code **)(*plVar9 + 0x50))(plVar9,0x18,0);
    if (local_res8 == (longlong *)0x0) {
      local_res8 = (longlong *)0x0;
    }
    else {
      *local_res8 = 0;
      local_res8[1] = 0;
      local_res8[2] = 0;
    }
    local_108 = *param_3;
    *(int *)(local_108 + 0x18) = *(int *)(local_108 + 0x18) + 1;
    local_100 = &local_108;
    local_f8 = &local_res8;
    FUN_1432eeeb0(plVar13,plVar13,&local_100,*(undefined4 *)(local_108 + 0x1c));
    piVar2 = (int *)(local_108 + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_14335f920();
    }
  }
  else {
    local_res8 = (longlong *)*puVar12;
  }
  puVar17 = (undefined8 *)local_res8[1];
  plVar13 = local_res8;
  puVar12 = puVar16;
  if (puVar17 != (undefined8 *)0x0) {
    do {
      lVar18 = *plVar13;
      if ((((*(uint *)(lVar18 + 8 + (longlong)puVar16) >> 9 & 1) == 0) ||
          (*(longlong *)(*(longlong *)(lVar18 + 0x10 + (longlong)puVar16) + 8) != 0)) &&
         (cVar10 = FUN_1435927d0(lVar18 + 8 + (longlong)puVar16,param_4), plVar13 = local_res8,
         cVar10 != '\0')) {
        return;
      }
      if (*(int *)((longlong)puVar16 + *plVar13) < param_6) break;
      puVar12 = (undefined8 *)((longlong)puVar12 + 1);
      puVar16 = puVar16 + 5;
    } while (puVar12 < puVar17);
  }
  puVar16 = (undefined8 *)plVar13[1];
  if (puVar12 < puVar16) {
    lVar18 = (longlong)puVar12 * 0x28;
    puVar17 = puVar12;
    do {
      lVar4 = *plVar13;
      if ((((*(uint *)(lVar4 + 8 + lVar18) >> 9 & 1) == 0) ||
          (*(longlong *)(*(longlong *)(lVar4 + 0x10 + lVar18) + 8) != 0)) &&
         (cVar10 = FUN_1435927d0(lVar4 + 8 + lVar18,param_4), plVar13 = local_res8, cVar10 != '\0'))
      {
        return;
      }
      puVar17 = (undefined8 *)((longlong)puVar17 + 1);
      lVar18 = lVar18 + 0x28;
    } while (puVar17 < puVar16);
  }
  lVar18 = *(longlong *)(param_1 + 0x40);
  lVar4 = *(longlong *)(lVar18 + 0x10);
  uVar7 = *param_3;
  *(int *)(uVar7 + 0x18) = *(int *)(uVar7 + 0x18) + 1;
  if (uVar7 == *(ulonglong *)(lVar4 + 0x110)) {
    uVar14 = 2;
    puVar1 = (uint *)(*(longlong *)(*(longlong *)(lVar18 + 0x300) + 0x10) + 0x52f0);
    *puVar1 = *puVar1 | 0x80000;
    puVar3 = (ushort *)(*(longlong *)(param_1 + 0x48) + 0x10);
    *puVar3 = *puVar3 | 1;
  }
  else if (uVar7 == *(ulonglong *)(lVar4 + 0x118)) {
    uVar14 = 0x1000015;
    puVar3 = (ushort *)(*(longlong *)(param_1 + 0x48) + 0x10);
    *puVar3 = *puVar3 | 0x20;
  }
  else if (uVar7 == *(ulonglong *)(lVar4 + 0x120)) {
    uVar14 = 0x1000016;
    puVar3 = (ushort *)(*(longlong *)(param_1 + 0x48) + 0x10);
    *puVar3 = *puVar3 | 0x40;
  }
  else if (uVar7 == *(ulonglong *)(lVar4 + 0xe0)) {
    uVar14 = 0x1000011;
    puVar3 = (ushort *)(*(longlong *)(param_1 + 0x48) + 0x10);
    *puVar3 = *puVar3 | 2;
  }
  else if (uVar7 == *(ulonglong *)(lVar4 + 0x108)) {
    uVar14 = 0x1000012;
    puVar3 = (ushort *)(*(longlong *)(param_1 + 0x48) + 0x10);
    *puVar3 = *puVar3 | 4;
  }
  else if (uVar7 == *(ulonglong *)(lVar4 + 0x170)) {
    uVar14 = 0x1000013;
    puVar3 = (ushort *)(*(longlong *)(param_1 + 0x48) + 0x10);
    *puVar3 = *puVar3 | 8;
  }
  else {
    if (uVar7 != *(ulonglong *)(lVar4 + 0x178)) {
      if (((*(ulonglong *)(lVar4 + 0x198) == uVar7) || (*(ulonglong *)(lVar4 + 0x1b8) == uVar7)) ||
         ((*(ulonglong *)(lVar4 + 0x188) == uVar7 ||
          ((((*(ulonglong *)(lVar4 + 400) == uVar7 || (*(ulonglong *)(lVar4 + 0x1b0) == uVar7)) ||
            (*(ulonglong *)(lVar4 + 0x1a8) == uVar7)) ||
           ((*(ulonglong *)(lVar4 + 0x1d0) == uVar7 || (*(ulonglong *)(lVar4 + 0x1c8) == uVar7))))))
         )) {
        lVar18 = *(longlong *)(param_1 + 0x48);
        if (param_5 == '\0') {
          if (*(char *)(lVar18 + 0x13) != -1) {
            *(char *)(lVar18 + 0x13) = *(char *)(lVar18 + 0x13) + '\x01';
          }
        }
        else if (*(char *)(lVar18 + 0x12) != -1) {
          *(char *)(lVar18 + 0x12) = *(char *)(lVar18 + 0x12) + '\x01';
        }
      }
      goto LAB_14351c02c;
    }
    uVar14 = 0x1000014;
    puVar3 = (ushort *)(*(longlong *)(param_1 + 0x48) + 0x10);
    *puVar3 = *puVar3 | 0x10;
  }
  if (((local_res8[1] == 0) && (*(int *)(*(longlong *)(param_1 + 0x28) + 0x90) - 0x18U < 0xd)) &&
     ((~(*(byte *)(*(longlong *)(param_1 + 0x28) + 0x88) >> 5) & 1) != 0)) {
    FUN_1435e9080(*(longlong *)(lVar18 + 0x300) + 400,uVar14,*(undefined8 *)(param_1 + 0x88));
  }
LAB_14351c02c:
  uVar6 = *param_4;
  local_e8 = param_4[4];
  uStack_e4 = param_4[5];
  uStack_e0 = param_4[6];
  uStack_dc = param_4[7];
  local_100 = (ulonglong *)CONCAT44(local_100._4_4_,param_6);
  local_f0 = *(undefined8 *)(param_4 + 2);
  local_f8 = (longlong **)CONCAT44(local_f8._4_4_,uVar6);
  if (9 < ((byte)uVar6 & 0x1f)) {
    if ((uVar6 >> 9 & 1) == 0) {
      FUN_143592070(param_4);
    }
    else {
      FUN_143592140();
    }
  }
  FUN_143533eb0(local_res8,puVar12,&local_100);
  if (9 < ((byte)local_f8 & 0x1f)) {
    if (((uint)local_f8 >> 9 & 1) == 0) {
      FUN_1435920c0(&local_f8);
    }
    else {
      FUN_143592150();
    }
  }
  if (param_7 != '\0') {
    FUN_143590620(*local_res8 + (longlong)puVar12 * 0x28 + 8);
  }
  piVar2 = (int *)(uVar7 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920(uVar7);
  }
  return;
}



// FUNCTION 14351c100 FUN_14351c100 body=1357 status=ok
// SIG undefined FUN_14351c100(void)

void FUN_14351c100(longlong param_1,byte *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  longlong *plVar9;
  uint *puVar10;
  longlong *plVar11;
  ulonglong local_res8;
  longlong local_res20;
  uint local_c8 [2];
  longlong local_c0;
  longlong *local_b8;
  uint local_a8 [2];
  undefined8 local_a0;
  uint local_88 [2];
  undefined8 local_80;
  uint local_68 [8];
  undefined1 local_48 [8];
  ulonglong local_40;
  uint local_38 [8];
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    if (*(int *)(param_1 + 0x6c) < 0) {
      uVar6 = FUN_14351b710(param_1,"dispatchEvent");
      *(undefined4 *)(param_1 + 0x6c) = uVar6;
    }
    if (-1 < *(int *)(param_1 + 0x6c)) {
      FUN_143590110(local_a8,param_3);
      local_88[0] = 0;
      local_80 = 0;
      FUN_14351b7f0(param_1,*(undefined4 *)(param_1 + 0x6c),local_88,1,local_a8);
      bVar4 = FUN_1435909c0(local_88);
      *param_2 = bVar4;
      if (9 < ((byte)local_88[0] & 0x1f)) {
        if ((local_88[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_88);
        }
        else {
          FUN_143592150();
        }
      }
      if (((byte)local_a8[0] & 0x1f) < 10) {
        return;
      }
      puVar10 = local_a8;
      if ((local_a8[0] >> 9 & 1) != 0) {
        FUN_143592150();
        return;
      }
      goto LAB_14351c1d6;
    }
  }
  if (param_3 == (longlong *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    uVar7 = FUN_1435c8e40(local_c8,0x3f1,uVar2);
    FUN_1435cbe70(uVar2,uVar7);
    piVar1 = (int *)(local_c0 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  plVar11 = (longlong *)0x0;
  cVar5 = FUN_143517d30(param_3);
  if (cVar5 == '\0') {
    *(uint *)(param_3 + 1) = (int)param_3[1] + 1U & 0x8fffffff;
  }
  else if ((*(byte *)(param_3[5] + 0x88) >> 4 & 1) == 0) {
    plVar9 = (longlong *)(**(code **)(*param_3 + 0xd0))(param_3,&local_res8);
    param_3 = plVar11;
    if (plVar9 != &local_res20) {
      lVar3 = *plVar9;
      if (lVar3 != 0) {
        *(uint *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1U & 0x8fffffff;
      }
      param_3 = (longlong *)*plVar9;
    }
    if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
       ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
      FUN_1434ef880();
    }
  }
  else {
    FUN_143590110(local_88,param_3);
    local_c8[0] = 0;
    local_c0 = 0;
    local_a8[0] = 0;
    local_a0 = 0;
    local_res8 = FUN_143360950(*(undefined8 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10) + 0x218),
                               "clone",5,0);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    Scaleform::GFx::AS3::Value::Value(local_68,&local_res8);
    FUN_1435ae6b0(local_48,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x1d8),local_68);
    if (9 < ((byte)local_68[0] & 0x1f)) {
      if ((local_68[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_68);
      }
      else {
        FUN_143592150();
      }
    }
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    pcVar8 = (char *)(**(code **)(*param_3 + 0x28))(param_3,&local_res8,local_48,local_a8);
    param_3 = plVar11;
    if (*pcVar8 != '\0') {
      local_res8 = local_res8 & 0xffffffff00000000;
      FUN_1435ce880(*(undefined8 *)(param_1 + 0x40),local_a8,local_88,local_c8,&local_res8,0,0,1);
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (*(char *)(lVar3 + 0xb8) != '\0') {
        FUN_1434e6250(local_48);
        if (9 < ((byte)local_a8[0] & 0x1f)) {
          if ((local_a8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_a8);
          }
          else {
            FUN_143592150();
          }
        }
        if (9 < ((byte)local_c8[0] & 0x1f)) {
          if ((local_c8[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_c8);
          }
          else {
            FUN_143592150();
          }
        }
        if (((byte)local_88[0] & 0x1f) < 10) {
          return;
        }
        puVar10 = local_88;
        if ((local_88[0] >> 9 & 1) != 0) {
          FUN_143592150(puVar10);
          return;
        }
        goto LAB_14351c1d6;
      }
      if (((((byte)local_c8[0] & 0x1f) == 0xc) &&
          (cVar5 = FUN_1435c8c20(lVar3,local_c8,*(undefined8 *)(*(longlong *)(lVar3 + 0x338) + 0x28)
                                ), cVar5 != '\0')) &&
         (param_3 = (longlong *)0x0, local_b8 != (longlong *)0x0)) {
        *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
        *(uint *)(local_b8 + 1) = *(uint *)(local_b8 + 1) & 0x8fffffff;
        param_3 = local_b8;
      }
    }
    if (9 < ((byte)local_38[0] & 0x1f)) {
      if ((local_38[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_38);
      }
      else {
        FUN_143592150();
      }
    }
    if (local_40 != 0) {
      if ((local_40 & 1) == 0) {
        if ((*(uint *)(local_40 + 8) & 0x3fffff) != 0) {
          *(uint *)(local_40 + 8) = *(uint *)(local_40 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        local_40 = local_40 - 1;
      }
    }
    if (9 < ((byte)local_a8[0] & 0x1f)) {
      if ((local_a8[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_a8);
      }
      else {
        FUN_143592150();
      }
    }
    if (9 < ((byte)local_c8[0] & 0x1f)) {
      if ((local_c8[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_c8);
      }
      else {
        FUN_143592150();
      }
    }
    if (9 < ((byte)local_88[0] & 0x1f)) {
      if ((local_88[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_88);
      }
      else {
        FUN_143592150();
      }
    }
  }
  if (param_3 != (longlong *)0x0) {
    FUN_1434f0700(param_3 + 10,param_1);
    if ((*(int *)(*(longlong *)(param_1 + 0x28) + 0x90) - 0x18U < 0xd) &&
       ((~(*(byte *)(*(longlong *)(param_1 + 0x28) + 0x88) >> 5) & 1) != 0)) {
      FUN_14351abc0(param_1,param_3,*(undefined8 *)(param_1 + 0x88));
    }
    else {
      *(byte *)((longlong)param_3 + 0x5c) = *(byte *)((longlong)param_3 + 0x5c) | 0x20;
      FUN_14351af40(param_1,param_3,0);
    }
    *param_2 = ~(*(byte *)((longlong)param_3 + 0x5c) >> 2) & 1;
    if (((ulonglong)param_3 & 1) != 0) {
      return;
    }
    if ((*(uint *)(param_3 + 1) & 0x3fffff) == 0) {
      return;
    }
    *(uint *)(param_3 + 1) = *(uint *)(param_3 + 1) - 1;
    FUN_1434ef880(param_3);
    return;
  }
  local_res8 = FUN_143360950(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10) + 0x218),"event",
                             5,0);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_68,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar7 = FUN_1435c8e40(local_c8,0x7d7,uVar2);
  FUN_1435cbe70(uVar2,uVar7);
  piVar1 = (int *)(local_c0 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (((byte)local_68[0] & 0x1f) < 10) {
    return;
  }
  puVar10 = local_68;
  if ((local_68[0] >> 9 & 1) != 0) {
    FUN_143592150(puVar10);
    return;
  }
LAB_14351c1d6:
  FUN_1435920c0(puVar10);
  return;
}



// FUNCTION 14351c660 FUN_14351c660 body=666 status=ok
// SIG undefined FUN_14351c660(void)

void FUN_14351c660(longlong param_1,char *param_2,ulonglong *param_3)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  uint local_48 [2];
  undefined8 local_40;
  uint local_28 [8];
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    if (*(int *)(param_1 + 0x70) < 0) {
      uVar7 = FUN_14351b710(param_1,"hasEventListener");
      *(undefined4 *)(param_1 + 0x70) = uVar7;
    }
    if (-1 < *(int *)(param_1 + 0x70)) {
      Scaleform::GFx::AS3::Value::Value(local_28,param_3);
      local_48[0] = 0;
      local_40 = 0;
      FUN_14351b7f0(param_1,*(undefined4 *)(param_1 + 0x70),local_48,1,local_28);
      cVar6 = FUN_1435909c0(local_48);
      *param_2 = cVar6;
      if (9 < ((byte)local_48[0] & 0x1f)) {
        if ((local_48[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_48);
        }
        else {
          FUN_143592150();
        }
      }
      if (((byte)local_28[0] & 0x1f) < 10) {
        return;
      }
      if ((local_28[0] >> 9 & 1) != 0) {
        FUN_143592150();
        return;
      }
      FUN_1435920c0(local_28);
      return;
    }
  }
  uVar3 = *param_3;
  plVar10 = (longlong *)0x0;
  *(int *)(uVar3 + 0x18) = *(int *)(uVar3 + 0x18) + 1;
  if (*(longlong *)(param_1 + 0x48) == 0) {
LAB_14351c80b:
    cVar6 = '\0';
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8);
    plVar9 = plVar10;
    if (lVar4 != 0) {
      uVar5 = *(ulonglong *)(lVar4 + 8);
      uVar13 = *(uint *)(uVar3 + 0x1c) & uVar5;
      lVar2 = uVar13 * 3 + 2;
      puVar12 = (ulonglong *)(lVar4 + lVar2 * 8);
      if ((*(longlong *)(lVar4 + lVar2 * 8) != -2) &&
         (uVar11 = uVar13, (*(uint *)(puVar12[1] + 0x1c) & uVar5) == uVar13)) {
        while (((*(uint *)(puVar12[1] + 0x1c) & uVar5) != uVar13 || (puVar12[1] != uVar3))) {
          uVar11 = *puVar12;
          if (uVar11 == 0xffffffffffffffff) goto LAB_14351c7e1;
          puVar12 = (ulonglong *)(lVar4 + uVar11 * 0x18 + 0x10);
        }
        if (-1 < (longlong)uVar11) {
          plVar9 = (longlong *)(lVar4 + (uVar11 + 1) * 0x18);
        }
      }
    }
LAB_14351c7e1:
    plVar8 = plVar9 + 1;
    if (plVar9 == (longlong *)0x0) {
      plVar8 = plVar10;
    }
    if (((plVar8 == (longlong *)0x0) || (*plVar8 == 0)) || (*(longlong *)(*plVar8 + 8) == 0))
    goto LAB_14351c80b;
    cVar6 = '\x01';
  }
  *param_2 = cVar6;
  piVar1 = (int *)(uVar3 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (*param_2 != '\0') {
    return;
  }
  uVar3 = *param_3;
  *(int *)(uVar3 + 0x18) = *(int *)(uVar3 + 0x18) + 1;
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    lVar4 = **(longlong **)(param_1 + 0x48);
    plVar9 = plVar10;
    if (lVar4 != 0) {
      uVar5 = *(ulonglong *)(lVar4 + 8);
      uVar13 = *(uint *)(uVar3 + 0x1c) & uVar5;
      lVar2 = uVar13 * 3 + 2;
      puVar12 = (ulonglong *)(lVar4 + lVar2 * 8);
      if ((*(longlong *)(lVar4 + lVar2 * 8) != -2) &&
         (uVar11 = uVar13, (*(uint *)(puVar12[1] + 0x1c) & uVar5) == uVar13)) {
        while (((*(uint *)(puVar12[1] + 0x1c) & uVar5) != uVar13 || (puVar12[1] != uVar3))) {
          uVar11 = *puVar12;
          if (uVar11 == 0xffffffffffffffff) goto LAB_14351c8b1;
          puVar12 = (ulonglong *)(lVar4 + uVar11 * 0x18 + 0x10);
        }
        if (-1 < (longlong)uVar11) {
          plVar9 = (longlong *)(lVar4 + (uVar11 + 1) * 0x18);
        }
      }
    }
LAB_14351c8b1:
    plVar8 = plVar9 + 1;
    if (plVar9 == (longlong *)0x0) {
      plVar8 = plVar10;
    }
    if (((plVar8 != (longlong *)0x0) && (*plVar8 != 0)) && (*(longlong *)(*plVar8 + 8) != 0)) {
      cVar6 = '\x01';
      goto LAB_14351c8d5;
    }
  }
  cVar6 = '\0';
LAB_14351c8d5:
  *param_2 = cVar6;
  piVar1 = (int *)(uVar3 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14351c900 FUN_14351c900 body=596 status=ok
// SIG undefined FUN_14351c900(void)

void FUN_14351c900(longlong param_1,undefined8 param_2,longlong *param_3,uint *param_4,char param_5)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint *puVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  uint local_98 [2];
  undefined8 local_90;
  undefined1 local_78 [32];
  uint local_58;
  undefined8 local_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38 [4];
  char local_28;
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    if (*(int *)(param_1 + 0x74) < 0) {
      uVar2 = FUN_14351b710(param_1,"removeEventListener");
      *(undefined4 *)(param_1 + 0x74) = uVar2;
    }
    if (-1 < *(int *)(param_1 + 0x74)) {
      Scaleform::GFx::AS3::Value::Value(local_78,param_3);
      local_50 = *(undefined8 *)(param_4 + 2);
      local_58 = *param_4;
      local_48 = param_4[4];
      uStack_44 = param_4[5];
      uStack_40 = param_4[6];
      uStack_3c = param_4[7];
      if (9 < ((byte)local_58 & 0x1f)) {
        if ((local_58 >> 9 & 1) == 0) {
          FUN_143592070(param_4);
        }
        else {
          FUN_143592140();
        }
      }
      local_28 = param_5;
      lVar9 = 3;
      local_38[0] = 1;
      local_38[2] = 0;
      local_38[3] = 0;
      local_98[0] = 0;
      local_90 = 0;
      FUN_14351b7f0(param_1,*(undefined4 *)(param_1 + 0x74),local_98,3,local_78);
      if (9 < ((byte)local_98[0] & 0x1f)) {
        if ((local_98[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_98);
        }
        else {
          FUN_143592150();
        }
      }
      puVar7 = &stack0xffffffffffffffe8;
      do {
        puVar6 = (uint *)(puVar7 + -0x20);
        puVar7 = puVar7 + -0x20;
        lVar9 = lVar9 + -1;
        if (9 < ((byte)*puVar6 & 0x1f)) {
          if ((*puVar6 >> 9 & 1) == 0) {
            FUN_1435920c0(puVar7);
          }
          else {
            FUN_143592150();
          }
        }
      } while (lVar9 != 0);
      return;
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x48);
  if (plVar4 != (longlong *)0x0) {
    if (param_5 == '\0') {
      plVar4 = plVar4 + 1;
    }
    lVar9 = *plVar4;
    plVar8 = (longlong *)0x0;
    plVar5 = plVar8;
    if ((lVar9 != 0) &&
       (lVar3 = FUN_1432ef240(plVar4,param_3,
                              (ulonglong)*(uint *)(*param_3 + 0x1c) & *(ulonglong *)(lVar9 + 8)),
       -1 < lVar3)) {
      plVar5 = (longlong *)(lVar9 + (lVar3 * 3 + 3) * 8);
    }
    plVar4 = plVar5 + 1;
    if (plVar5 == (longlong *)0x0) {
      plVar4 = plVar8;
    }
    if (plVar4 != (longlong *)0x0) {
      plVar4 = (longlong *)*plVar4;
      plVar5 = (longlong *)plVar4[1];
      plVar10 = plVar8;
      if (plVar5 != (longlong *)0x0) {
        do {
          puVar6 = (uint *)(*plVar4 + 8 + (longlong)plVar10);
          if ((((*puVar6 >> 9 & 1) == 0) || (*(longlong *)(*(longlong *)(puVar6 + 2) + 8) != 0)) &&
             (cVar1 = FUN_1435927d0(puVar6,param_4), cVar1 != '\0')) {
            FUN_1435341f0(plVar4,plVar8);
            FUN_14351b5b0(param_1,param_3,param_5,plVar4[1]);
            return;
          }
          plVar8 = (longlong *)((longlong)plVar8 + 1);
          plVar10 = plVar10 + 5;
        } while (plVar8 < plVar5);
      }
    }
  }
  return;
}



// FUNCTION 14351cb60 FUN_14351cb60 body=957 status=ok
// SIG undefined FUN_14351cb60(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14351cb60(longlong *param_1,char *param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong *puVar13;
  longlong *plVar14;
  uint local_188 [2];
  undefined8 local_180;
  uint local_168 [8];
  undefined8 local_148;
  longlong *local_140;
  undefined8 local_138;
  undefined8 local_130 [31];
  ulonglong local_38;
  undefined8 *local_30;
  
  if (param_1[0xb] != 0) {
    if ((int)param_1[0xf] < 0) {
      uVar4 = FUN_14351b710(param_1,"willTrigger");
      *(undefined4 *)(param_1 + 0xf) = uVar4;
    }
    if (-1 < (int)param_1[0xf]) {
      Scaleform::GFx::AS3::Value::Value(local_168,param_3);
      local_188[0] = 0;
      local_180 = 0;
      FUN_14351b7f0(param_1,(int)param_1[0xf],local_188,1,local_168);
      cVar3 = FUN_1435909c0(local_188);
      *param_2 = cVar3;
      if (9 < ((byte)local_188[0] & 0x1f)) {
        if ((local_188[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_188);
        }
        else {
          FUN_143592150();
        }
      }
      if (((byte)local_168[0] & 0x1f) < 10) {
        return;
      }
      if ((local_168[0] >> 9 & 1) != 0) {
        FUN_143592150();
        return;
      }
      FUN_1435920c0(local_168);
      return;
    }
  }
  plVar6 = (longlong *)param_1[9];
  plVar12 = (longlong *)0x0;
  if (plVar6 != (longlong *)0x0) {
    lVar10 = *plVar6;
    plVar14 = plVar12;
    if ((lVar10 != 0) &&
       (lVar5 = FUN_1432ef240(plVar6,param_3,
                              (ulonglong)*(uint *)(*param_3 + 0x1c) & *(ulonglong *)(lVar10 + 8)),
       -1 < lVar5)) {
      plVar14 = (longlong *)(lVar10 + (lVar5 * 3 + 3) * 8);
    }
    plVar6 = plVar14 + 1;
    if (plVar14 == (longlong *)0x0) {
      plVar6 = plVar12;
    }
    if (((plVar6 != (longlong *)0x0) && (*plVar6 != 0)) && (*(longlong *)(*plVar6 + 8) != 0)) {
      *param_2 = '\x01';
      goto LAB_14351cd27;
    }
  }
  *param_2 = '\0';
  lVar10 = param_1[9];
  if (lVar10 == 0) {
LAB_14351cd22:
    cVar3 = '\0';
  }
  else {
    lVar5 = *(longlong *)(lVar10 + 8);
    plVar6 = plVar12;
    if ((lVar5 != 0) &&
       (lVar10 = FUN_1432ef240(lVar10 + 8,param_3,
                               (ulonglong)*(uint *)(*param_3 + 0x1c) & *(ulonglong *)(lVar5 + 8)),
       -1 < lVar10)) {
      plVar6 = (longlong *)(lVar5 + (lVar10 * 3 + 3) * 8);
    }
    plVar14 = plVar6 + 1;
    if (plVar6 == (longlong *)0x0) {
      plVar14 = plVar12;
    }
    if (((plVar14 == (longlong *)0x0) || (*plVar14 == 0)) || (*(longlong *)(*plVar14 + 8) == 0))
    goto LAB_14351cd22;
    cVar3 = '\x01';
  }
  *param_2 = cVar3;
LAB_14351cd27:
  if (((*param_2 == '\0') && (*(int *)(param_1[5] + 0x90) - 0x18U < 0xd)) &&
     ((~(*(byte *)(param_1[5] + 0x88) >> 5) & 1) != 0)) {
    lVar5 = 0x20;
    local_148 = *(undefined8 *)(param_1[8] + 0x48);
    lVar10 = 4;
    local_140 = (longlong *)0x0;
    local_138 = 0x20;
    puVar7 = local_130;
    do {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      puVar7[6] = 0;
      puVar7[7] = 0;
      lVar10 = lVar10 + -1;
      puVar7 = puVar7 + 8;
    } while (lVar10 != 0);
    local_30 = local_130;
    (**(code **)(*param_1 + 0xc0))(param_1,param_1[0x11],&local_148);
    plVar6 = local_140;
    plVar14 = plVar12;
    if (local_140 != (longlong *)0x0) {
      do {
        lVar10 = local_30[(longlong)plVar14];
        plVar9 = *(longlong **)(lVar10 + 0x48);
        if (plVar9 != (longlong *)0x0) {
          lVar1 = *plVar9;
          plVar11 = plVar12;
          if ((lVar1 != 0) &&
             (lVar8 = FUN_1432ef240(plVar9,param_3,
                                    (ulonglong)*(uint *)(*param_3 + 0x1c) &
                                    *(ulonglong *)(lVar1 + 8)), -1 < lVar8)) {
            plVar11 = (longlong *)(lVar1 + (lVar8 * 3 + 3) * 8);
          }
          plVar9 = plVar11 + 1;
          if (plVar11 == (longlong *)0x0) {
            plVar9 = plVar12;
          }
          if (((plVar9 != (longlong *)0x0) && (*plVar9 != 0)) && (*(longlong *)(*plVar9 + 8) != 0))
          {
            *param_2 = '\x01';
            break;
          }
        }
        cVar3 = FUN_14351a530(lVar10,param_3,0);
        *param_2 = cVar3;
        if ((cVar3 != '\0') || (plVar14 = (longlong *)((longlong)plVar14 + 1), plVar6 <= plVar14))
        break;
      } while( true );
    }
    FUN_143533dd0(&local_148);
    puVar13 = (ulonglong *)&local_30;
    do {
      uVar2 = puVar13[-1];
      puVar13 = puVar13 + -1;
      lVar5 = lVar5 + -1;
      if (uVar2 != 0) {
        if ((uVar2 & 1) == 0) {
          if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *puVar13 = uVar2 - 1;
        }
      }
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 14351cf30 UMaterialExpressionRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionRerouteBase(void)

undefined8 * UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b2c2f0;
  return param_1;
}



// FUNCTION 14351cf60 FUN_14351cf60 body=218 status=ok
// SIG undefined FUN_14351cf60(void)

void FUN_14351cf60(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    UInterpTrackInst::UInterpTrackInst(puVar1,param_3);
    *puVar1 = &PTR_FUN_145b2c220;
    puVar1[8] = *(undefined8 *)(param_3 + 0x98);
    puVar1[9] = 0;
    *(undefined1 *)(puVar1 + 10) = 1;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0xffffffffffffffff;
    puVar1[0xe] = 0xffffffffffffffff;
    *(undefined4 *)(puVar1 + 0xf) = 0xffffffff;
  }
  local_20 = 0;
  local_28[0] = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 14351d040 UMaterialExpression body=33 status=ok
// SIG undefined UMaterialExpression(void)

undefined8 * UMaterialExpression::UMaterialExpression(undefined8 *param_1)

{
  UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14351d070 FUN_14351d070 body=227 status=ok
// SIG undefined FUN_14351d070(void)

undefined8 * FUN_14351d070(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b26f28);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b26f28);
    *puVar3 = &PTR_FUN_145b2c2f0;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b18698;
  }
  return param_1;
}



// FUNCTION 14351d160 FUN_14351d160 body=33 status=ok
// SIG undefined FUN_14351d160(void)

undefined8 * FUN_14351d160(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18698;
  return param_1;
}



// FUNCTION 14351d190 FUN_14351d190 body=220 status=ok
// SIG undefined FUN_14351d190(void)

undefined8 *
FUN_14351d190(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5)

{
  uint *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 local_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  undefined1 local_38;
  uint local_28 [4];
  undefined1 local_18;
  
  *param_1 = 0;
  Scaleform::GFx::AS3::Value::Value(local_68,param_3);
  local_40 = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  lVar3 = 3;
  local_18 = param_5;
  local_48 = 1;
  local_28[0] = 1;
  local_38 = param_4;
  FUN_1435e8720(param_2,param_1,*(undefined8 *)(param_2 + 0x338),3,local_68);
  puVar2 = &stack0xfffffffffffffff8;
  do {
    puVar1 = (uint *)(puVar2 + -0x20);
    puVar2 = puVar2 + -0x20;
    lVar3 = lVar3 + -1;
    if (9 < ((byte)*puVar1 & 0x1f)) {
      if ((*puVar1 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar2);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar3 != 0);
  return param_1;
}



// FUNCTION 14351d280 FUN_14351d280 body=429 status=ok
// SIG undefined FUN_14351d280(void)

longlong *
FUN_14351d280(longlong *param_1,longlong param_2,int *param_3,undefined8 param_4,undefined8 param_5)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res8;
  undefined4 local_resc;
  uint local_28 [8];
  
  lVar4 = 0;
  *param_1 = 0;
  Scaleform::GFx::AS3::Value::Value(local_28,param_4);
  lVar5 = 0x340;
  if (*(char *)(param_2 + 0x3f8) != '\0') {
    lVar5 = 0x348;
  }
  FUN_1435e8720(param_2,param_1,*(undefined8 *)(lVar5 + param_2),1,local_28);
  FUN_1434f0700(*param_1 + 0x50,param_5);
  if ((*param_3 - 0x2000U & 0xffffdfff) == 0) {
    pbVar1 = (byte *)(*param_1 + 0x5c);
    *pbVar1 = *pbVar1 & 0xfe;
  }
  else {
    pbVar1 = (byte *)(*param_1 + 0x5c);
    *pbVar1 = *pbVar1 | 1;
  }
  *(byte *)(*param_1 + 0x5c) = *(byte *)(*param_1 + 0x5c) & 0xfd;
  *(byte *)(*param_1 + 0x84) = *(byte *)((longlong)param_3 + 0x12) >> 2 & 1;
  *(byte *)(*param_1 + 0x85) = *(byte *)((longlong)param_3 + 0x12) >> 1 & 1;
  *(byte *)(*param_1 + 0x86) = *(byte *)((longlong)param_3 + 0x12) & 1;
  *(int *)(*param_1 + 0x60) = (int)*(char *)((longlong)param_3 + 0x13);
  if (*(char *)(param_2 + 0x3f8) != '\0') {
    lVar5 = *param_1;
    *(int *)(lVar5 + 0x88) = (int)*(char *)((longlong)param_3 + 0x11);
    *(uint *)(lVar5 + 0x90) = (uint)*(byte *)(param_3 + 4);
    *(uint *)(lVar5 + 0x8c) = (uint)*(byte *)(param_3 + 3);
  }
  if ((uint)(int)*(char *)((longlong)param_3 + 0x11) < 6) {
    lVar4 = ((ulonglong)(uint)(int)*(char *)((longlong)param_3 + 0x11) + 0x6d) * 0x50 +
            *(longlong *)(*(longlong *)(param_2 + 0x300) + 0x10);
  }
  local_res8 = *(undefined4 *)(lVar4 + 0x38);
  local_resc = *(undefined4 *)(lVar4 + 0x3c);
  FUN_1435200e0(*param_1,&local_res8);
  iVar2 = *param_3;
  if (((iVar2 == 0x2000) || (iVar2 == 0x4000)) || (iVar2 + 0xfefffff6U < 2)) {
    uVar3 = *(undefined4 *)(lVar4 + 0x34);
  }
  else {
    uVar3 = *(undefined4 *)(lVar4 + 0x30);
  }
  *(undefined4 *)(*param_1 + 0x80) = uVar3;
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_28);
    }
    else {
      FUN_143592150();
    }
  }
  return param_1;
}



// FUNCTION 14351d440 FUN_14351d440 body=290 status=ok
// SIG undefined FUN_14351d440(void)

longlong *
FUN_14351d440(longlong *param_1,longlong param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 uVar1;
  longlong lVar2;
  uint local_28 [8];
  
  *param_1 = 0;
  Scaleform::GFx::AS3::Value::Value(local_28,param_4);
  lVar2 = 0x350;
  if (*(char *)(param_2 + 0x3f8) != '\0') {
    lVar2 = 0x358;
  }
  FUN_1435e8720(param_2,param_1,*(undefined8 *)(lVar2 + param_2),1,local_28);
  FUN_1434f0700(*param_1 + 0x50,param_5);
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + 0x60) = *param_3;
  *(undefined4 *)(lVar2 + 100) = param_3[1];
  *(undefined4 *)(lVar2 + 0x68) = param_3[2];
  *(undefined1 *)(lVar2 + 0x6c) = *(undefined1 *)(param_3 + 3);
  *(undefined1 *)(lVar2 + 0x70) = *(undefined1 *)(param_3 + 4);
  *(undefined1 *)(lVar2 + 0x71) = *(undefined1 *)((longlong)param_3 + 0x11);
  *(undefined1 *)(lVar2 + 0x72) = *(undefined1 *)((longlong)param_3 + 0x12);
  *(undefined1 *)(lVar2 + 0x73) = *(undefined1 *)((longlong)param_3 + 0x13);
  if (*(char *)(lVar2 + 0x6c) == '\0') {
    uVar1 = FUN_14338a8c0();
    *(undefined1 *)(lVar2 + 0x6c) = uVar1;
  }
  *(byte *)(*param_1 + 0x5c) = *(byte *)(*param_1 + 0x5c) | 1;
  *(byte *)(*param_1 + 0x5c) = *(byte *)(*param_1 + 0x5c) & 0xfd;
  if (*(char *)(param_2 + 0x3f8) != '\0') {
    *(int *)(*param_1 + 0x78) = (int)*(char *)((longlong)param_3 + 0x11);
  }
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_28);
    }
    else {
      FUN_143592150();
    }
  }
  return param_1;
}



// FUNCTION 14351d570 FUN_14351d570 body=199 status=ok
// SIG undefined FUN_14351d570(void)

undefined8 * FUN_14351d570(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  uint *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 local_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  undefined1 local_38;
  uint local_28 [4];
  undefined1 local_18;
  
  *param_1 = 0;
  Scaleform::GFx::AS3::Value::Value(local_68,param_3);
  local_40 = 0;
  local_38 = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_18 = 0;
  lVar3 = 3;
  local_48 = 1;
  local_28[0] = 1;
  FUN_1435e8720(param_2,param_1,*(undefined8 *)(param_2 + 0x390),3,local_68);
  puVar2 = &stack0xfffffffffffffff8;
  do {
    puVar1 = (uint *)(puVar2 + -0x20);
    puVar2 = puVar2 + -0x20;
    lVar3 = lVar3 + -1;
    if (9 < ((byte)*puVar1 & 0x1f)) {
      if ((*puVar1 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar2);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar3 != 0);
  return param_1;
}



// FUNCTION 14351d640 FUN_14351d640 body=348 status=ok
// SIG undefined FUN_14351d640(void)

longlong *
FUN_14351d640(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined1 param_6,undefined4 param_7)

{
  uint *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_c8 [32];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined4 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined1 local_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  undefined1 local_38;
  uint local_28 [8];
  
  *param_1 = 0;
  Scaleform::GFx::AS3::Value::Value(local_c8,param_3);
  local_a8 = 1;
  local_a0 = 0;
  local_98 = 1;
  local_88 = 1;
  local_80 = 0;
  local_78 = 0;
  FUN_143590110(local_68,param_4);
  local_38 = param_6;
  local_28[4] = param_7;
  lVar4 = 0x368;
  if (*(char *)(param_2 + 0x3f8) != '\0') {
    lVar4 = 0x370;
  }
  local_40 = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  lVar3 = 6;
  local_48 = 1;
  local_28[0] = 3;
  FUN_1435e8720(param_2,param_1,*(undefined8 *)(lVar4 + param_2),6,local_c8);
  if (*(char *)(param_2 + 0x3f8) != '\0') {
    *(undefined4 *)(*param_1 + 0x70) = param_5;
  }
  puVar2 = &stack0xfffffffffffffff8;
  do {
    puVar1 = (uint *)(puVar2 + -0x20);
    puVar2 = puVar2 + -0x20;
    lVar3 = lVar3 + -1;
    if (9 < ((byte)*puVar1 & 0x1f)) {
      if ((*puVar1 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar2);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar3 != 0);
  return param_1;
}



// FUNCTION 14351d7b0 FUN_14351d7b0 body=89 status=ok
// SIG undefined FUN_14351d7b0(void)

undefined8 FUN_14351d7b0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong local_res8;
  
  local_res8 = FUN_143360a60(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x218),param_3);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_14351d810(param_1,param_2,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return param_1;
}



// FUNCTION 14351d810 FUN_14351d810 body=343 status=ok
// SIG undefined FUN_14351d810(void)

undefined8 * FUN_14351d810(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong local_res8;
  char *local_98;
  undefined8 local_90;
  undefined1 local_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined4 local_48;
  undefined8 local_40;
  undefined1 local_38;
  uint local_28 [8];
  
  *param_1 = 0;
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x218),"ioError",7);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_88,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_68 = 1;
  local_60 = 0;
  local_58 = 0;
  local_48 = 1;
  local_40 = 0;
  local_38 = 0;
  Scaleform::GFx::AS3::Value::Value(local_28,param_3);
  local_98 = "flash.events.IOErrorEvent";
  local_90 = 0x19;
  uVar3 = FUN_1435cc580(param_2,&local_98,*(undefined8 *)(param_2 + 0x1c8));
  lVar5 = 4;
  FUN_1435e8720(param_2,param_1,uVar3,4,local_88);
  puVar4 = &stack0xfffffffffffffff8;
  do {
    puVar2 = (uint *)(puVar4 + -0x20);
    puVar4 = puVar4 + -0x20;
    lVar5 = lVar5 + -1;
    if (9 < ((byte)*puVar2 & 0x1f)) {
      if ((*puVar2 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar4);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar5 != 0);
  return param_1;
}



// FUNCTION 14351d970 FUN_14351d970 body=263 status=ok
// SIG undefined FUN_14351d970(void)

longlong *
FUN_14351d970(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  uint *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined1 local_58;
  undefined4 local_48;
  undefined8 local_40;
  undefined1 local_38;
  uint local_28 [8];
  
  local_68[0] = 1;
  local_60 = 0;
  *param_1 = 0;
  lVar3 = 3;
  local_58 = 1;
  local_48 = 1;
  local_40 = 0;
  local_38 = 0;
  local_28[0] = 3;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[4] = *(undefined4 *)(param_3 + 8);
  FUN_1435e8720(param_2,param_1,*(undefined8 *)(param_2 + 0x360),3,local_68);
  FUN_1434f0700(*param_1 + 0x50,param_5);
  *(int *)(*param_1 + 100) = (int)*(char *)(param_3 + 0x11);
  *(double *)(*param_1 + 0x68) = (double)*(float *)(param_3 + 0x14);
  puVar2 = &stack0xfffffffffffffff8;
  *(double *)(*param_1 + 0x70) = (double)*(float *)(param_3 + 0x18);
  do {
    puVar1 = (uint *)(puVar2 + -0x20);
    puVar2 = puVar2 + -0x20;
    lVar3 = lVar3 + -1;
    if (9 < ((byte)*puVar1 & 0x1f)) {
      if ((*puVar1 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar2);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar3 != 0);
  return param_1;
}



// FUNCTION 14351da80 FUN_14351da80 body=362 status=ok
// SIG undefined FUN_14351da80(void)

undefined8 *
FUN_14351da80(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong local_res8;
  char *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [32];
  undefined4 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined1 local_58 [32];
  uint local_38 [8];
  
  *param_1 = 0;
  local_c0 = 0x1b;
  local_c8 = "flash.events.NetStatusEvent";
  uVar3 = FUN_1435cc580(param_2,&local_c8,*(undefined8 *)(param_2 + 0x1c8));
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x218),"netStatus",9);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_b8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_98 = 1;
  local_90 = 0;
  local_88 = 0;
  local_78 = 1;
  local_70 = 0;
  local_68 = 0;
  Scaleform::GFx::AS3::Value::Value(local_58,param_3);
  Scaleform::GFx::AS3::Value::Value(local_38,param_4);
  lVar5 = 5;
  FUN_1435e8720(param_2,param_1,uVar3,5,local_b8);
  puVar4 = &stack0xffffffffffffffe8;
  do {
    puVar2 = (uint *)(puVar4 + -0x20);
    puVar4 = puVar4 + -0x20;
    lVar5 = lVar5 + -1;
    if (9 < ((byte)*puVar2 & 0x1f)) {
      if ((*puVar2 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar4);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar5 != 0);
  return param_1;
}



// FUNCTION 14351dbf0 FUN_14351dbf0 body=320 status=ok
// SIG undefined FUN_14351dbf0(void)

longlong * FUN_14351dbf0(longlong *param_1,longlong param_2,longlong *param_3,undefined4 param_4)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  char *local_78;
  undefined8 local_70;
  undefined1 local_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  undefined1 local_38;
  uint local_28 [4];
  undefined1 local_18;
  
  *param_1 = 0;
  Scaleform::GFx::AS3::Value::Value(local_68,*(longlong *)(param_2 + 0x300) + 800);
  local_78 = "scaleform.gfx.MouseCursorEvent";
  local_48 = 1;
  local_40 = 0;
  local_38 = 0;
  local_28[0] = 1;
  local_28[2] = 0;
  local_28[3] = 0;
  local_18 = 1;
  local_70 = 0x1e;
  lVar4 = FUN_1435cc580(param_2,&local_78,*(undefined8 *)(param_2 + 0x1c8));
  lVar6 = 3;
  if (lVar4 != 0) {
    FUN_1435e8720(param_2,param_1,lVar4,3,local_68);
    *(undefined4 *)(*param_1 + 0x68) = param_4;
    lVar4 = *param_1;
    lVar3 = *param_3;
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(lVar4 + 0x60) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *(longlong *)(lVar4 + 0x60) = lVar3;
  }
  puVar5 = &stack0xfffffffffffffff8;
  do {
    puVar2 = (uint *)(puVar5 + -0x20);
    puVar5 = puVar5 + -0x20;
    lVar6 = lVar6 + -1;
    if (9 < ((byte)*puVar2 & 0x1f)) {
      if ((*puVar2 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar5);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar6 != 0);
  return param_1;
}



// FUNCTION 14351dd40 FUN_14351dd40 body=240 status=ok
// SIG undefined FUN_14351dd40(void)

longlong *
FUN_14351dd40(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  uint local_28 [8];
  
  *param_1 = 0;
  Scaleform::GFx::AS3::Value::Value(local_28,param_4);
  FUN_1435e8720(param_2,param_1,*(undefined8 *)(param_2 + 0x3a8),1,local_28);
  FUN_1434f0700(*param_1 + 0x50,param_5);
  *(byte *)(*param_1 + 0x5c) = *(byte *)(*param_1 + 0x5c) | 1;
  *(byte *)(*param_1 + 0x5c) = *(byte *)(*param_1 + 0x5c) & 0xfd;
  FUN_1433601c0(*param_1 + 0x60,(**(ulonglong **)(param_3 + 0x18) & 0xfffffffffffffffc) + 0xc);
  FUN_1433601c0(*param_1 + 0x68,(**(ulonglong **)(param_3 + 0x20) & 0xfffffffffffffffc) + 0xc);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return param_1;
    }
    FUN_1435920c0(local_28);
  }
  return param_1;
}



// FUNCTION 14351de40 FUN_14351de40 body=230 status=ok
// SIG undefined FUN_14351de40(void)

longlong *
FUN_14351de40(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  uint local_28 [8];
  
  *param_1 = 0;
  Scaleform::GFx::AS3::Value::Value(local_28,param_4);
  FUN_1435e8720(param_2,param_1,*(undefined8 *)(param_2 + 0x3b0),1,local_28);
  FUN_1434f0700(*param_1 + 0x50,param_5);
  *(byte *)(*param_1 + 0x5c) = *(byte *)(*param_1 + 0x5c) | 1;
  *(byte *)(*param_1 + 0x5c) = *(byte *)(*param_1 + 0x5c) & 0xfd;
  *(undefined8 *)(*param_1 + 0x78) = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(*param_1 + 0x60) = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(*param_1 + 0x68) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(*param_1 + 0x70) = *(undefined8 *)(param_3 + 0x30);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return param_1;
    }
    FUN_1435920c0(local_28);
  }
  return param_1;
}



// FUNCTION 14351df30 FUN_14351df30 body=286 status=ok
// SIG undefined FUN_14351df30(void)

longlong *
FUN_14351df30(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  uint local_28 [8];
  
  *param_1 = 0;
  Scaleform::GFx::AS3::Value::Value(local_28,param_4);
  FUN_1435e8720(param_2,param_1,*(undefined8 *)(param_2 + 0x3b8),1,local_28);
  FUN_1434f0700(*param_1 + 0x50,param_5);
  *(byte *)(*param_1 + 0x5c) = *(byte *)(*param_1 + 0x5c) | 1;
  *(byte *)(*param_1 + 0x5c) = *(byte *)(*param_1 + 0x5c) & 0xfd;
  *(undefined8 *)(*param_1 + 0x60) = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(*param_1 + 0x68) = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(*param_1 + 0x70) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(*param_1 + 0x78) = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)(*param_1 + 0x80) = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)(*param_1 + 0x88) = *(undefined8 *)(param_3 + 0x40);
  *(undefined8 *)(*param_1 + 0x90) = *(undefined8 *)(param_3 + 0x48);
  *(undefined8 *)(*param_1 + 0x98) = *(undefined8 *)(param_3 + 0x50);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return param_1;
    }
    FUN_1435920c0(local_28);
  }
  return param_1;
}



// FUNCTION 14351e060 FUN_14351e060 body=114 status=ok
// SIG undefined FUN_14351e060(void)

longlong * FUN_14351e060(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x3c0);
  lVar2 = FUN_1435b5bc0(uVar1);
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_14351f0b0(lVar2,uVar1);
  }
  *param_1 = lVar3;
  FUN_1434f0700(lVar3 + 0x50,param_3);
  FUN_143590140(*param_1 + 0x70,param_4);
  return param_1;
}



// FUNCTION 14351e0e0 FUN_14351e0e0 body=130 status=ok
// SIG undefined FUN_14351e0e0(void)

undefined8 * FUN_14351e0e0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_ForEachChild_GC_145b2bea8;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[8] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  param_1[9] = 0;
  param_1[10] = 0;
  *(byte *)((longlong)param_1 + 0x5c) = *(byte *)((longlong)param_1 + 0x5c) & 0xc0;
  *param_1 = &PTR_ForEachChild_GC_145b2c388;
  *(undefined4 *)(param_1 + 0xb) = 2;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[0xc] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  return param_1;
}



// FUNCTION 14351e190 FUN_14351e190 body=74 status=ok
// SIG undefined FUN_14351e190(void)

longlong * FUN_14351e190(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_143517380();
  lVar2 = *param_2;
  lVar3 = *(longlong *)(param_1 + 0x60);
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*(longlong *)(lVar2 + 0x60) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(lVar2 + 0x60) = lVar3;
  return param_2;
}



// FUNCTION 14351e1e0 FUN_14351e1e0 body=107 status=ok
// SIG undefined FUN_14351e1e0(void)

void FUN_14351e1e0(longlong param_1,undefined2 param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined2 local_res10 [12];
  
  local_res10[0] = param_2;
  lVar2 = FUN_143360fd0(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10)
                         + 0x218),local_res10,1);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 2;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x60) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(param_1 + 0x60) = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar2);
  }
  return;
}



// FUNCTION 14351e260 FUN_14351e260 body=95 status=ok
// SIG undefined FUN_14351e260(void)

void FUN_14351e260(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = FUN_143360fd0(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10)
                         + 0x218),param_2,0xffffffffffffffff);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 2;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x60) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(param_1 + 0x60) = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar2);
  }
  return;
}



// FUNCTION 14351e2d0 FUN_14351e2d0 body=203 status=ok
// SIG undefined FUN_14351e2d0(void)

void FUN_14351e2d0(longlong param_1,uint param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined1 local_res10 [8];
  undefined1 local_18 [8];
  longlong local_10;
  
  if (3 < param_2) {
    FUN_1435911f0(param_3 + 0x60,local_res10,param_1 + 0x60);
  }
  if (param_2 != 0) {
    if (param_2 != 1) {
      if (param_2 != 2) {
        bVar3 = FUN_1435909c0(param_3 + 0x40);
        *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xfd;
        *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | (bVar3 & 1) * '\x02';
      }
      bVar3 = FUN_1435909c0(param_3 + 0x20);
      *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xfe;
      *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | bVar3 & 1;
    }
    FUN_1435911f0(param_3,local_res10,param_1 + 0x40);
    return;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar4 = FUN_1435c8e40(local_18,0x427,uVar2);
  FUN_1435cbef0(uVar2,uVar4);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 14351e3b0 FUN_14351e3b0 body=62 status=ok
// SIG undefined FUN_14351e3b0(void)

void FUN_14351e3b0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x60);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    *param_2 = lVar2;
    return;
  }
  *param_2 = lVar2;
  return;
}



// FUNCTION 14351e400 FUN_14351e400 body=49 status=ok
// SIG undefined FUN_14351e400(void)

void FUN_14351e400(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *param_3;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x60) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(param_1 + 0x60) = lVar2;
  return;
}



// FUNCTION 14351e440 FUN_14351e440 body=75 status=ok
// SIG undefined FUN_14351e440(void)

void FUN_14351e440(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong local_res8 [4];
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0xd0))(param_1,local_res8);
  FUN_1434f0700(param_2,*puVar1);
  if (((local_res8[0] != 0) && ((local_res8[0] & 1) == 0)) &&
     ((*(uint *)(local_res8[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8[0] + 8) = *(uint *)(local_res8[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14351e4a0 FUN_14351e4a0 body=605 status=ok
// SIG undefined FUN_14351e4a0(void)

void FUN_14351e4a0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong local_res8;
  uint local_f8 [2];
  undefined8 local_f0;
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  uint local_38 [8];
  
  local_f8[0] = 0;
  local_f0 = 0;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"TextEvent",9);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_d8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),&DAT_145af4d3c,4);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_b8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"bubbles",7);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_98,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"cancelable",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_78,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"eventPhase",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_58,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),&DAT_145b0907c,4);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_38,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  lVar4 = 6;
  FUN_143518160(param_1,local_f8,6,local_d8);
  FUN_1435911f0(local_f8,&local_res8,param_2);
  puVar3 = &stack0xffffffffffffffe8;
  do {
    puVar2 = (uint *)(puVar3 + -0x20);
    puVar3 = puVar3 + -0x20;
    lVar4 = lVar4 + -1;
    if (9 < ((byte)*puVar2 & 0x1f)) {
      if ((*puVar2 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar3);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar4 != 0);
  if (9 < ((byte)local_f8[0] & 0x1f)) {
    if ((local_f8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_f8);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 14351e710 FUN_14351e710 body=85 status=ok
// SIG undefined FUN_14351e710(void)

undefined8 * FUN_14351e710(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulonglong local_res8 [4];
  
  *param_2 = 0;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0xd0))(param_1,local_res8);
  FUN_1434f0700(param_2,*puVar1);
  if (((local_res8[0] != 0) && ((local_res8[0] & 1) == 0)) &&
     ((*(uint *)(local_res8[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8[0] + 8) = *(uint *)(local_res8[0] + 8) - 1;
    FUN_1434ef880();
  }
  return param_2;
}



// FUNCTION 14351e770 UMaterialExpressionRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionRerouteBase(void)

undefined8 * UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b2c460;
  return param_1;
}



// FUNCTION 14351e7a0 FUN_14351e7a0 body=141 status=ok
// SIG undefined FUN_14351e7a0(void)

void FUN_14351e7a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_14351e0e0(lVar1,param_3);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,uVar2);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 14351e840 UMaterialExpressionRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionRerouteBase(void)

undefined8 * UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14351e870 FUN_14351e870 body=249 status=ok
// SIG undefined FUN_14351e870(void)

undefined8 * FUN_14351e870(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b28a40);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b28a40);
    *puVar3 = &PTR_FUN_145b2c460;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x60);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b23ad8;
    puVar3[10] = &DAT_145b2e1c8;
    puVar3[0xb] = "textInput";
  }
  return param_1;
}



// FUNCTION 14351e970 FUN_14351e970 body=55 status=ok
// SIG undefined FUN_14351e970(void)

undefined8 * FUN_14351e970(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23ad8;
  param_1[10] = &DAT_145b2e1c8;
  param_1[0xb] = "textInput";
  return param_1;
}



// FUNCTION 14351e9b0 FUN_14351e9b0 body=33 status=ok
// SIG undefined FUN_14351e9b0(void)

undefined8 * FUN_14351e9b0(undefined8 *param_1)

{
  FUN_14351e0e0();
  *param_1 = &PTR_ForEachChild_GC_145b2c4d8;
  return param_1;
}



// FUNCTION 14351e9e0 FUN_14351e9e0 body=93 status=ok
// SIG undefined FUN_14351e9e0(void)

longlong * FUN_14351e9e0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_143517380();
  lVar2 = *param_2;
  lVar3 = *(longlong *)(param_1 + 0x60);
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*(longlong *)(lVar2 + 0x60) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(lVar2 + 0x60) = lVar3;
  *(undefined4 *)(*param_2 + 0x68) = *(undefined4 *)(param_1 + 0x68);
  return param_2;
}



// FUNCTION 14351ea50 FUN_14351ea50 body=114 status=ok
// SIG undefined FUN_14351ea50(void)

void FUN_14351ea50(longlong param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  bool bVar2;
  
  FUN_14351e2d0();
  if (param_2 < 4) {
    return;
  }
  uVar1 = *(uint *)(param_3 + 0x60) & 0x1f;
  if (uVar1 == 0xc) {
    bVar2 = *(longlong *)(param_3 + 0x70) == 0;
  }
  else {
    if (uVar1 != 10) goto LAB_14351ea9e;
    bVar2 = *(longlong *)(param_3 + 0x70) == *(longlong *)(*(longlong *)(param_3 + 0x70) + 8) + 0x80
    ;
  }
  if (bVar2) {
    return;
  }
LAB_14351ea9e:
  if ((*(uint *)(param_3 + 0x60) & 0x1f) - 2 < 2) {
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_3 + 0x70);
  }
  return;
}



// FUNCTION 14351eae0 FUN_14351eae0 body=75 status=ok
// SIG undefined FUN_14351eae0(void)

void FUN_14351eae0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong local_res8 [4];
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0xd0))(param_1,local_res8);
  FUN_1434f0700(param_2,*puVar1);
  if (((local_res8[0] != 0) && ((local_res8[0] & 1) == 0)) &&
     ((*(uint *)(local_res8[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8[0] + 8) = *(uint *)(local_res8[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14351eb40 FUN_14351eb40 body=669 status=ok
// SIG undefined FUN_14351eb40(void)

void FUN_14351eb40(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong local_res8;
  uint local_118 [2];
  undefined8 local_110;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  uint local_38 [8];
  
  local_118[0] = 0;
  local_110 = 0;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"ErrorEvent",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_f8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),&DAT_145af4d3c,4);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_d8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  lVar5 = 7;
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"bubbles",7,0);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_b8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"cancelable",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_98,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"eventPhase",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_78,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),&DAT_145b0907c,4);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_58,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"errorID",7,0);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_38,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143518160(param_1,local_118,7,local_f8);
  FUN_1435911f0(local_118,&local_res8,param_2);
  puVar4 = &stack0xffffffffffffffe8;
  do {
    puVar2 = (uint *)(puVar4 + -0x20);
    puVar4 = puVar4 + -0x20;
    lVar5 = lVar5 + -1;
    if (9 < ((byte)*puVar2 & 0x1f)) {
      if ((*puVar2 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar4);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar5 != 0);
  if (9 < ((byte)local_118[0] & 0x1f)) {
    if ((local_118[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_118);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 14351edf0 FUN_14351edf0 body=85 status=ok
// SIG undefined FUN_14351edf0(void)

undefined8 * FUN_14351edf0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulonglong local_res8 [4];
  
  *param_2 = 0;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0xd0))(param_1,local_res8);
  FUN_1434f0700(param_2,*puVar1);
  if (((local_res8[0] != 0) && ((local_res8[0] & 1) == 0)) &&
     ((*(uint *)(local_res8[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8[0] + 8) = *(uint *)(local_res8[0] + 8) - 1;
    FUN_1434ef880();
  }
  return param_2;
}



// FUNCTION 14351ee50 FUN_14351ee50 body=33 status=ok
// SIG undefined FUN_14351ee50(void)

undefined8 * FUN_14351ee50(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b2c5b0;
  return param_1;
}



// FUNCTION 14351ee80 FUN_14351ee80 body=173 status=ok
// SIG undefined FUN_14351ee80(void)

void FUN_14351ee80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_14351e0e0(puVar1,param_3);
    *puVar1 = &PTR_ForEachChild_GC_145b2c4d8;
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 14351ef40 UMaterialExpressionRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionRerouteBase(void)

undefined8 * UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14351ef70 FUN_14351ef70 body=238 status=ok
// SIG undefined FUN_14351ef70(void)

undefined8 * FUN_14351ef70(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b29a90);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b29a90);
    *puVar3 = &PTR_FUN_145b2c5b0;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x58);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b231d0;
    puVar3[10] = "error";
  }
  return param_1;
}



// FUNCTION 14351f070 UFlowNodeBlueprint body=44 status=ok
// SIG undefined UFlowNodeBlueprint(void)

undefined8 * UFlowNodeBlueprint::UFlowNodeBlueprint(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b231d0;
  param_1[10] = "error";
  return param_1;
}



// FUNCTION 14351f0b0 FUN_14351f0b0 body=138 status=ok
// SIG undefined FUN_14351f0b0(void)

undefined8 * FUN_14351f0b0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_14351e0e0();
  *param_1 = &PTR_ForEachChild_GC_145b2c628;
  FUN_143590110(param_1 + 0xe,0);
  lVar2 = FUN_143360950(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218),
                        "uncaughtError",0xd);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 2;
  piVar1 = (int *)(param_1[8] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  param_1[8] = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar2);
  }
  *(byte *)((longlong)param_1 + 0x5c) = *(byte *)((longlong)param_1 + 0x5c) | 3;
  return param_1;
}



// FUNCTION 14351f150 FUN_14351f150 body=51 status=ok
// SIG undefined FUN_14351f150(void)

longlong * FUN_14351f150(longlong param_1,longlong *param_2)

{
  FUN_143517380();
  FUN_143590140(*param_2 + 0x70,param_1 + 0x70);
  return param_2;
}



// FUNCTION 14351f190 FUN_14351f190 body=62 status=ok
// SIG undefined FUN_14351f190(void)

void FUN_14351f190(longlong param_1,uint param_2,longlong param_3)

{
  FUN_143517f40();
  if (3 < param_2) {
    FUN_143590140(param_1 + 0x70,param_3 + 0x60);
  }
  return;
}



// FUNCTION 14351f200 FUN_14351f200 body=151 status=ok
// SIG undefined FUN_14351f200(void)

void FUN_14351f200(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong local_res8;
  
  puVar2 = (ulonglong *)(**(code **)(*param_1 + 0xd0))(param_1,&local_res8);
  if (puVar2 != param_2) {
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      *(uint *)(uVar1 + 8) = *(int *)(uVar1 + 8) + 1U & 0x8fffffff;
    }
    uVar1 = *param_2;
    if (uVar1 != 0) {
      if ((uVar1 & 1) == 0) {
        if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar1 - 1;
      }
    }
    *param_2 = *puVar2;
  }
  if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
     ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 14351f2a0 FUN_14351f2a0 body=605 status=ok
// SIG undefined FUN_14351f2a0(void)

void FUN_14351f2a0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong local_res8;
  uint local_f8 [2];
  undefined8 local_f0;
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  uint local_38 [8];
  
  local_f8[0] = 0;
  local_f0 = 0;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),
                             "UncaughtErrorEvent",0x12);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_d8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),&DAT_145af4d3c,4);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_b8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"bubbles",7);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_98,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"cancelable",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_78,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"eventPhase",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_58,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"error",5);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_38,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  lVar4 = 6;
  FUN_143518160(param_1,local_f8,6,local_d8);
  FUN_1435911f0(local_f8,&local_res8,param_2);
  puVar3 = &stack0xffffffffffffffe8;
  do {
    puVar2 = (uint *)(puVar3 + -0x20);
    puVar3 = puVar3 + -0x20;
    lVar4 = lVar4 + -1;
    if (9 < ((byte)*puVar2 & 0x1f)) {
      if ((*puVar2 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar3);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar4 != 0);
  if (9 < ((byte)local_f8[0] & 0x1f)) {
    if ((local_f8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_f8);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 14351f510 FUN_14351f510 body=30 status=ok
// SIG undefined FUN_14351f510(void)

undefined8 * FUN_14351f510(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14351f200();
  return param_2;
}



// FUNCTION 14351f540 FUN_14351f540 body=33 status=ok
// SIG undefined FUN_14351f540(void)

undefined8 * FUN_14351f540(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b2c700;
  return param_1;
}



// FUNCTION 14351f570 FUN_14351f570 body=141 status=ok
// SIG undefined FUN_14351f570(void)

void FUN_14351f570(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_14351f0b0(lVar1,param_3);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,uVar2);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 14351f610 FUN_14351f610 body=33 status=ok
// SIG undefined FUN_14351f610(void)

undefined8 * FUN_14351f610(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14351f640 FUN_14351f640 body=238 status=ok
// SIG undefined FUN_14351f640(void)

undefined8 * FUN_14351f640(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b2b0b0);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b2b0b0);
    *puVar3 = &PTR_FUN_145b2c700;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x58);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b231d0;
    puVar3[10] = "uncaughtError";
  }
  return param_1;
}



// FUNCTION 14351f740 UFlowNodeBlueprint body=44 status=ok
// SIG undefined UFlowNodeBlueprint(void)

undefined8 * UFlowNodeBlueprint::UFlowNodeBlueprint(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b231d0;
  param_1[10] = "uncaughtError";
  return param_1;
}



// FUNCTION 14351f780 FUN_14351f780 body=33 status=ok
// SIG undefined FUN_14351f780(void)

undefined8 * FUN_14351f780(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14351f7b0 FUN_14351f7b0 body=238 status=ok
// SIG undefined FUN_14351f7b0(void)

undefined8 * FUN_14351f7b0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b26fe8);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b26fe8);
    *puVar3 = &PTR_FUN_145b2bf80;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x58);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b231d0;
    puVar3[10] = "activity";
  }
  return param_1;
}



// FUNCTION 14351f8b0 UFlowNodeBlueprint body=44 status=ok
// SIG undefined UFlowNodeBlueprint(void)

undefined8 * UFlowNodeBlueprint::UFlowNodeBlueprint(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b231d0;
  param_1[10] = "activity";
  return param_1;
}



// FUNCTION 14351f8f0 FUN_14351f8f0 body=41 status=ok
// SIG undefined FUN_14351f8f0(void)

undefined8 * FUN_14351f8f0(undefined8 *param_1)

{
  FUN_14351e0e0();
  *param_1 = &PTR_ForEachChild_GC_145b2c790;
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 14351f920 FUN_14351f920 body=91 status=ok
// SIG undefined FUN_14351f920(void)

void FUN_14351f920(undefined8 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  *param_1 = &PTR_ForEachChild_GC_145b2c790;
  uVar2 = param_1[0xe];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0xe] = uVar2 - 1;
    }
  }
  piVar1 = (int *)(param_1[0xc] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_1435172f0(param_1);
  return;
}



// FUNCTION 14351f990 FUN_14351f990 body=33 status=ok
// SIG undefined FUN_14351f990(void)

undefined8 * FUN_14351f990(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b2c868;
  return param_1;
}



// FUNCTION 14351f9c0 FUN_14351f9c0 body=172 status=ok
// SIG undefined FUN_14351f9c0(void)

void FUN_14351f9c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14351e0e0(puVar1,param_3);
    *puVar1 = &PTR_ForEachChild_GC_145b2c790;
    puVar1[0xe] = 0;
  }
  local_20 = 0;
  local_28[0] = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 14351fa80 FUN_14351fa80 body=33 status=ok
// SIG undefined FUN_14351fa80(void)

undefined8 * FUN_14351fa80(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14351fab0 FUN_14351fab0 body=238 status=ok
// SIG undefined FUN_14351fab0(void)

undefined8 * FUN_14351fab0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b289e0);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b289e0);
    *puVar3 = &PTR_FUN_145b2c868;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x58);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b231d0;
    puVar3[10] = "asyncError";
  }
  return param_1;
}



// FUNCTION 14351fbb0 UFlowNodeBlueprint body=44 status=ok
// SIG undefined UFlowNodeBlueprint(void)

undefined8 * UFlowNodeBlueprint::UFlowNodeBlueprint(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b231d0;
  param_1[10] = "asyncError";
  return param_1;
}



// FUNCTION 14351fbf0 FUN_14351fbf0 body=33 status=ok
// SIG undefined FUN_14351fbf0(void)

undefined8 * FUN_14351fbf0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14351fc20 FUN_14351fc20 body=249 status=ok
// SIG undefined FUN_14351fc20(void)

undefined8 * FUN_14351fc20(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b2a060);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b2a060);
    *puVar3 = &PTR_FUN_145b2bf80;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x60);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b23ad8;
    puVar3[10] = "menuItemSelect";
    puVar3[0xb] = "menuSelect";
  }
  return param_1;
}



// FUNCTION 14351fd20 FUN_14351fd20 body=55 status=ok
// SIG undefined FUN_14351fd20(void)

undefined8 * FUN_14351fd20(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23ad8;
  param_1[10] = "menuItemSelect";
  param_1[0xb] = "menuSelect";
  return param_1;
}



// FUNCTION 14351fd60 FUN_14351fd60 body=33 status=ok
// SIG undefined FUN_14351fd60(void)

undefined8 * FUN_14351fd60(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 14351fd90 FUN_14351fd90 body=249 status=ok
// SIG undefined FUN_14351fd90(void)

undefined8 * FUN_14351fd90(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b2aa38);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b2aa38);
    *puVar3 = &PTR_FUN_145b2c460;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x60);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b23ad8;
    puVar3[10] = &DAT_145b138b0;
    puVar3[0xb] = "uploadCompleteData";
  }
  return param_1;
}



// FUNCTION 14351fe90 FUN_14351fe90 body=55 status=ok
// SIG undefined FUN_14351fe90(void)

undefined8 * FUN_14351fe90(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23ad8;
  param_1[10] = &DAT_145b138b0;
  param_1[0xb] = "uploadCompleteData";
  return param_1;
}



// FUNCTION 14351fed0 FUN_14351fed0 body=131 status=ok
// SIG undefined FUN_14351fed0(void)

undefined8 * FUN_14351fed0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_ForEachChild_GC_145b2bea8;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[8] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  param_1[9] = 0;
  param_1[10] = 0;
  *(byte *)((longlong)param_1 + 0x5c) = *(byte *)((longlong)param_1 + 0x5c) & 0xc0;
  *param_1 = &PTR_ForEachChild_GC_145b2cb20;
  *(undefined4 *)(param_1 + 0xb) = 2;
  param_1[0xd] = 0;
  *(undefined2 *)((longlong)param_1 + 0x85) = 0;
  *(undefined1 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return param_1;
}



// FUNCTION 14351ff60 ForEachChild_GC body=93 status=ok
// SIG undefined ForEachChild_GC(void)

void Scaleform::GFx::AS3::Instances::fl_events::FocusEvent::ForEachChild_GC
               (longlong param_1,undefined8 param_2,code *param_3)

{
  FUN_1435b16a0();
  if (*(longlong *)(param_1 + 0x48) != 0) {
    (*param_3)(param_2,param_1 + 0x48);
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    (*param_3)(param_2,param_1 + 0x50);
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    (*param_3)(param_2,param_1 + 0x68);
  }
  return;
}



// FUNCTION 14351fff0 FUN_14351fff0 body=225 status=ok
// SIG undefined FUN_14351fff0(void)

longlong * FUN_14351fff0(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_143517380();
  puVar1 = (ulonglong *)(param_1 + 0x68);
  lVar3 = *param_2;
  *(undefined1 *)(lVar3 + 0x84) = *(undefined1 *)(param_1 + 0x84);
  puVar2 = (ulonglong *)(lVar3 + 0x68);
  *(undefined1 *)(lVar3 + 0x85) = *(undefined1 *)(param_1 + 0x85);
  *(undefined1 *)(lVar3 + 0x86) = *(undefined1 *)(param_1 + 0x86);
  *(undefined4 *)(lVar3 + 0x60) = *(undefined4 *)(param_1 + 0x60);
  if (puVar1 != puVar2) {
    uVar4 = *puVar1;
    if (uVar4 != 0) {
      *(uint *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1U & 0x8fffffff;
    }
    uVar4 = *puVar2;
    if (uVar4 != 0) {
      if ((uVar4 & 1) == 0) {
        if ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *puVar2 = uVar4 - 1;
      }
    }
    *puVar2 = *puVar1;
  }
  *(undefined8 *)(lVar3 + 0x70) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(lVar3 + 0x78) = *(undefined8 *)(param_1 + 0x78);
  *(undefined4 *)(lVar3 + 0x80) = *(undefined4 *)(param_1 + 0x80);
  return param_2;
}



// FUNCTION 1435200e0 FUN_1435200e0 body=301 status=ok
// SIG undefined FUN_1435200e0(void)

void FUN_1435200e0(longlong param_1,Point<float> *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  float local_res8;
  float local_resc;
  uint local_38 [8];
  
  bVar5 = false;
  local_res8 = 0.0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x1c8);
    local_38[0] = 0;
    local_38[2] = 0;
    local_38[3] = 0;
    FUN_143590450(local_38);
    bVar5 = true;
    cVar4 = FUN_1435c8b00(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_38,
                          "flash.display.DisplayObject",uVar1);
    if (cVar4 != '\0') {
      bVar3 = true;
      goto LAB_143520161;
    }
  }
  bVar3 = false;
LAB_143520161:
  if ((bVar5) && (9 < ((byte)local_38[0] & 0x1f))) {
    if ((local_38[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_38);
    }
    else {
      FUN_143592150();
    }
  }
  if (bVar3) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x88);
    local_38[0] = 0x3f800000;
    local_38[1] = 0;
    local_38[2] = 0;
    local_38[3] = 0;
    local_38[4] = 0;
    local_38[5] = 0x3f800000;
    local_38[6] = 0;
    local_38[7] = 0;
    (**(code **)(*plVar2 + 0x1e8))(plVar2,local_38);
    Scaleform::Render::Matrix2x4<float>::TransformByInverse
              ((Matrix2x4<float> *)local_38,(Point<float> *)&local_res8,param_2);
    *(double *)(param_1 + 0x70) = (double)local_res8;
    *(double *)(param_1 + 0x78) = (double)local_resc;
  }
  else {
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  return;
}



// FUNCTION 143520220 FUN_143520220 body=421 status=ok
// SIG undefined FUN_143520220(void)

void FUN_143520220(longlong param_1,uint param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  undefined1 local_res10 [8];
  undefined4 local_res20;
  undefined4 uStackX_24;
  
  FUN_143517f40();
  if (param_2 < 2) {
    *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | 1;
  }
  if (3 < param_2) {
    FUN_143590af0(param_3 + 0x60,local_res10,&local_res20);
    *(double *)(param_1 + 0x70) = (double)CONCAT44(uStackX_24,local_res20) * 20.0;
  }
  if (4 < param_2) {
    FUN_143590af0(param_3 + 0x80,local_res10,&local_res20);
    *(double *)(param_1 + 0x78) = (double)CONCAT44(uStackX_24,local_res20) * 20.0;
  }
  if (5 < param_2) {
    uVar1 = *(ulonglong *)(param_1 + 0x68);
    if (uVar1 != 0) {
      if ((uVar1 & 1) == 0) {
        if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *(ulonglong *)(param_1 + 0x68) = uVar1 - 1;
      }
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    lVar2 = *(longlong *)(param_3 + 0xb0);
    if ((lVar2 != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98),
       cVar4 = FUN_1435c8b00(lVar3,param_3 + 0xa0,"flash.display.InteractiveObject",
                             *(undefined8 *)(lVar3 + 0x1c8)), cVar4 != '\0')) {
      FUN_1434f0700(param_1 + 0x68,lVar2);
    }
  }
  if (6 < param_2) {
    uVar5 = FUN_1435909c0(param_3 + 0xc0);
    *(undefined1 *)(param_1 + 0x85) = uVar5;
  }
  if (7 < param_2) {
    uVar5 = FUN_1435909c0(param_3 + 0xe0);
    *(undefined1 *)(param_1 + 0x84) = uVar5;
  }
  if (8 < param_2) {
    uVar5 = FUN_1435909c0(param_3 + 0x100);
    *(undefined1 *)(param_1 + 0x86) = uVar5;
  }
  if (9 < param_2) {
    cVar4 = FUN_1435909c0(param_3 + 0x120);
    if (cVar4 == '\0') {
      *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) & 0xfffffffe;
    }
    else {
      *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 1;
    }
  }
  if (10 < param_2) {
    FUN_143590b70(param_3 + 0x140,local_res10,&local_res20);
    *(undefined4 *)(param_1 + 0x60) = local_res20;
  }
  return;
}



// FUNCTION 143520560 FUN_143520560 body=117 status=ok
// SIG undefined FUN_143520560(void)

void FUN_143520560(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  puVar1 = (ulonglong *)(param_1 + 0x68);
  if (puVar1 != param_2) {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
    }
    uVar2 = *param_2;
    if (uVar2 != 0) {
      if ((uVar2 & 1) != 0) {
        *param_2 = uVar2 - 1;
        *param_2 = *puVar1;
        return;
      }
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *param_2 = *puVar1;
  }
  return;
}



// FUNCTION 143520620 FUN_143520620 body=319 status=ok
// SIG undefined FUN_143520620(void)

void FUN_143520620(longlong param_1,double *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  float local_28;
  float fStack_24;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  bVar5 = false;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x1c8);
    local_28 = 0.0;
    uStack_20 = 0;
    FUN_143590450(&local_28);
    bVar5 = true;
    cVar4 = FUN_1435c8b00(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),&local_28,
                          "flash.display.DisplayObject",uVar1);
    if (cVar4 != '\0') {
      bVar3 = true;
      goto LAB_14352069f;
    }
  }
  bVar3 = false;
LAB_14352069f:
  if ((bVar5) && (9 < (SUB41(local_28,0) & 0x1f))) {
    if (((uint)local_28 >> 9 & 1) == 0) {
      FUN_1435920c0(&local_28);
    }
    else {
      FUN_143592150();
    }
  }
  if (bVar3) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x88);
    local_28 = 1.0;
    fStack_24 = 0.0;
    uStack_20 = 0;
    local_18 = 0;
    uStack_14 = 0x3f800000;
    uStack_10 = 0;
    uStack_c = 0;
    (**(code **)(*plVar2 + 0x1e8))(plVar2,&local_28);
    *param_2 = (double)((fStack_24 * (float)*(double *)(param_1 + 0x78) +
                         local_28 * (float)*(double *)(param_1 + 0x70) + uStack_20._4_4_) * 0.05);
  }
  else {
    *param_2 = 0.0;
  }
  return;
}



// FUNCTION 143520770 FUN_143520770 body=319 status=ok
// SIG undefined FUN_143520770(void)

void FUN_143520770(longlong param_1,double *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  uint local_28 [4];
  float local_18;
  float fStack_14;
  undefined4 uStack_10;
  float fStack_c;
  
  bVar5 = false;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x1c8);
    local_28[0] = 0;
    local_28[2] = 0;
    local_28[3] = 0;
    FUN_143590450(local_28);
    bVar5 = true;
    cVar4 = FUN_1435c8b00(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),local_28,
                          "flash.display.DisplayObject",uVar1);
    if (cVar4 != '\0') {
      bVar3 = true;
      goto LAB_1435207ef;
    }
  }
  bVar3 = false;
LAB_1435207ef:
  if ((bVar5) && (9 < ((byte)local_28[0] & 0x1f))) {
    if ((local_28[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_28);
    }
    else {
      FUN_143592150();
    }
  }
  if (bVar3) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x88);
    local_28[0] = 0x3f800000;
    local_28[1] = 0;
    local_28[2] = 0;
    local_28[3] = 0;
    local_18 = 0.0;
    fStack_14 = 1.0;
    uStack_10 = 0;
    fStack_c = 0.0;
    (**(code **)(*plVar2 + 0x1e8))(plVar2,local_28);
    *param_2 = (double)((local_18 * (float)*(double *)(param_1 + 0x70) +
                         fStack_14 * (float)*(double *)(param_1 + 0x78) + fStack_c) * 0.05);
  }
  else {
    *param_2 = 0.0;
  }
  return;
}



// FUNCTION 1435208c0 FUN_1435208c0 body=75 status=ok
// SIG undefined FUN_1435208c0(void)

void FUN_1435208c0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong local_res8 [4];
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0xd0))(param_1,local_res8);
  FUN_1434f0700(param_2,*puVar1);
  if (((local_res8[0] != 0) && ((local_res8[0] & 1) == 0)) &&
     ((*(uint *)(local_res8[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8[0] + 8) = *(uint *)(local_res8[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143520920 FUN_143520920 body=1277 status=ok
// SIG undefined FUN_143520920(void)

void FUN_143520920(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong local_res8;
  uint local_1f8 [2];
  undefined8 local_1f0;
  undefined1 local_1d8 [32];
  undefined1 local_1b8 [32];
  undefined1 local_198 [32];
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  uint local_38 [8];
  
  local_1f8[0] = 0;
  local_1f0 = 0;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"MouseEvent",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_1d8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),&DAT_145af4d3c,4);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_1b8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"bubbles",7);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_198,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"cancelable",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_178,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"eventPhase",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_158,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"localX",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_138,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"localY",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_118,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"stageX",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_f8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"stageY",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_d8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"relatedObject",
                             0xd);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_b8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"ctrlKey",7);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_98,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"altKey",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_78,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"shiftKey",8);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_58,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"delta",5);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_38,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  lVar4 = 0xe;
  FUN_143518160(param_1,local_1f8,0xe,local_1d8);
  FUN_1435911f0(local_1f8,&local_res8,param_2);
  puVar3 = &stack0xffffffffffffffe8;
  do {
    puVar2 = (uint *)(puVar3 + -0x20);
    puVar3 = puVar3 + -0x20;
    lVar4 = lVar4 + -1;
    if (9 < ((byte)*puVar2 & 0x1f)) {
      if ((*puVar2 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar3);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar4 != 0);
  if (9 < ((byte)local_1f8[0] & 0x1f)) {
    if ((local_1f8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_1f8);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 143520e50 FUN_143520e50 body=30 status=ok
// SIG undefined FUN_143520e50(void)

undefined8 * FUN_143520e50(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_143520560();
  return param_2;
}



// FUNCTION 143520e80 FUN_143520e80 body=85 status=ok
// SIG undefined FUN_143520e80(void)

undefined8 * FUN_143520e80(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulonglong local_res8 [4];
  
  *param_2 = 0;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0xd0))(param_1,local_res8);
  FUN_1434f0700(param_2,*puVar1);
  if (((local_res8[0] != 0) && ((local_res8[0] & 1) == 0)) &&
     ((*(uint *)(local_res8[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8[0] + 8) = *(uint *)(local_res8[0] + 8) - 1;
    FUN_1434ef880();
  }
  return param_2;
}



// FUNCTION 143520ee0 UMaterialExpressionRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionRerouteBase(void)

undefined8 * UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b2cbf8;
  return param_1;
}



// FUNCTION 143520f10 FUN_143520f10 body=141 status=ok
// SIG undefined FUN_143520f10(void)

void FUN_143520f10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_14351fed0(lVar1,param_3);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,uVar2);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143520fb0 UMaterialExpressionRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionRerouteBase(void)

undefined8 * UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143520fe0 FUN_143520fe0 body=215 status=ok
// SIG undefined FUN_143520fe0(void)

undefined8 * FUN_143520fe0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b299d0);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b299d0);
    *puVar2 = &PTR_FUN_145b2cbf8;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0xd8,0);
  if (lVar3 != 0) {
    Scaleform::GFx::AS3::Classes::fl_events::MouseEvent::MouseEvent(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1435210c0 MouseEvent body=253 status=ok
// SIG undefined MouseEvent(void)

undefined8 * Scaleform::GFx::AS3::Classes::fl_events::MouseEvent::MouseEvent(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b2cc70;
  param_1[10] = "click";
  param_1[0xb] = "contextMenu";
  param_1[0xc] = "doubleClick";
  param_1[0xd] = "middleClick";
  param_1[0xe] = "middleMouseDown";
  param_1[0xf] = "middleMouseUp";
  param_1[0x10] = "mouseDown";
  param_1[0x11] = "mouseMove";
  param_1[0x12] = "mouseOut";
  param_1[0x13] = "mouseOver";
  param_1[0x14] = "mouseUp";
  param_1[0x15] = "mouseWheel";
  param_1[0x16] = "rightClick";
  param_1[0x17] = "rightMouseDown";
  param_1[0x18] = "rightMouseUp";
  param_1[0x19] = "rollOut";
  param_1[0x1a] = "rollOver";
  return param_1;
}



// FUNCTION 1435211d0 FUN_1435211d0 body=173 status=ok
// SIG undefined FUN_1435211d0(void)

undefined8 * FUN_1435211d0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_ForEachChild_GC_145b2bea8;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[8] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  param_1[9] = 0;
  param_1[10] = 0;
  *(byte *)((longlong)param_1 + 0x5c) = *(byte *)((longlong)param_1 + 0x5c) & 0xc0;
  *param_1 = &PTR_ForEachChild_GC_145b2cd48;
  *(undefined4 *)(param_1 + 0xb) = 2;
  param_1[0xd] = 0;
  param_1[0x14] = 0x3ff0000000000000;
  *(undefined4 *)((longlong)param_1 + 0x61) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined2 *)((longlong)param_1 + 0xac) = 0;
  return param_1;
}



// FUNCTION 143521290 ForEachChild_GC body=93 status=ok
// SIG undefined ForEachChild_GC(void)

void Scaleform::GFx::AS3::Instances::fl_events::FocusEvent::ForEachChild_GC
               (longlong param_1,undefined8 param_2,code *param_3)

{
  FUN_1435b16a0();
  if (*(longlong *)(param_1 + 0x48) != 0) {
    (*param_3)(param_2,param_1 + 0x48);
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    (*param_3)(param_2,param_1 + 0x50);
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    (*param_3)(param_2,param_1 + 0x68);
  }
  return;
}



// FUNCTION 143521300 FUN_143521300 body=581 status=ok
// SIG undefined FUN_143521300(void)

void FUN_143521300(longlong param_1,uint param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  char cVar5;
  undefined1 local_res10 [8];
  double local_res20;
  
  FUN_143517f40();
  if (3 < param_2) {
    FUN_143590b70(param_3 + 0x60,local_res10,param_1 + 0xa8);
  }
  if (4 < param_2) {
    uVar4 = FUN_1435909c0(param_3 + 0x80);
    *(undefined1 *)(param_1 + 0xac) = uVar4;
  }
  if (5 < param_2) {
    FUN_143590af0(param_3 + 0xa0,local_res10,&local_res20);
    *(undefined1 *)(param_1 + 0xad) = 1;
    *(double *)(param_1 + 0x70) = local_res20 * 20.0;
  }
  if (6 < param_2) {
    FUN_143590af0(param_3 + 0xc0,local_res10,&local_res20);
    *(undefined1 *)(param_1 + 0xad) = 1;
    *(double *)(param_1 + 0x78) = local_res20 * 20.0;
  }
  if (7 < param_2) {
    FUN_143590af0(param_3 + 0xe0,local_res10,&local_res20);
    *(undefined1 *)(param_1 + 0xad) = 1;
    *(double *)(param_1 + 0x80) = local_res20 * 20.0;
  }
  if (8 < param_2) {
    FUN_143590af0(param_3 + 0x100,local_res10,&local_res20);
    *(undefined1 *)(param_1 + 0xad) = 1;
    *(double *)(param_1 + 0x88) = local_res20 * 20.0;
  }
  if (9 < param_2) {
    FUN_143590af0(param_3 + 0x120,local_res10,param_1 + 0xa0);
  }
  if (10 < param_2) {
    uVar1 = *(ulonglong *)(param_1 + 0x68);
    if (uVar1 != 0) {
      if ((uVar1 & 1) == 0) {
        if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *(ulonglong *)(param_1 + 0x68) = uVar1 - 1;
      }
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    lVar2 = *(longlong *)(param_3 + 0xb0);
    if ((lVar2 != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98),
       cVar5 = FUN_1435c8b00(lVar3,param_3 + 0x140,"flash.display.InteractiveObject",
                             *(undefined8 *)(lVar3 + 0x1c8)), cVar5 != '\0')) {
      FUN_1434f0700(param_1 + 0x68,lVar2);
    }
  }
  if (0xb < param_2) {
    uVar4 = FUN_1435909c0(param_3 + 0x160);
    *(undefined1 *)(param_1 + 0x61) = uVar4;
  }
  if (0xc < param_2) {
    uVar4 = FUN_1435909c0(param_3 + 0x180);
    *(undefined1 *)(param_1 + 0x60) = uVar4;
  }
  if (0xd < param_2) {
    uVar4 = FUN_1435909c0(param_3 + 0x1a0);
    *(undefined1 *)(param_1 + 0x62) = uVar4;
  }
  if (0xe < param_2) {
    uVar4 = FUN_1435909c0(param_3 + 0x1c0);
    *(undefined1 *)(param_1 + 99) = uVar4;
  }
  if (0xf < param_2) {
    uVar4 = FUN_1435909c0(param_3 + 0x1e0);
    *(undefined1 *)(param_1 + 100) = uVar4;
  }
  return;
}



// FUNCTION 143521560 FUN_143521560 body=311 status=ok
// SIG undefined FUN_143521560(void)

longlong * FUN_143521560(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_143517380();
  puVar1 = (ulonglong *)(param_1 + 0x68);
  lVar3 = *param_2;
  *(undefined1 *)(lVar3 + 0x60) = *(undefined1 *)(param_1 + 0x60);
  puVar2 = (ulonglong *)(lVar3 + 0x68);
  *(undefined1 *)(lVar3 + 0x61) = *(undefined1 *)(param_1 + 0x61);
  *(undefined1 *)(lVar3 + 0x62) = *(undefined1 *)(param_1 + 0x62);
  *(undefined1 *)(lVar3 + 99) = *(undefined1 *)(param_1 + 99);
  *(undefined1 *)(lVar3 + 100) = *(undefined1 *)(param_1 + 100);
  *(undefined8 *)(lVar3 + 0xa0) = *(undefined8 *)(param_1 + 0xa0);
  if (puVar1 != puVar2) {
    uVar4 = *puVar1;
    if (uVar4 != 0) {
      *(uint *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1U & 0x8fffffff;
    }
    uVar4 = *puVar2;
    if (uVar4 != 0) {
      if ((uVar4 & 1) == 0) {
        if ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *puVar2 = uVar4 - 1;
      }
    }
    *puVar2 = *puVar1;
  }
  *(undefined8 *)(lVar3 + 0x70) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(lVar3 + 0x78) = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(lVar3 + 0x90) = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(lVar3 + 0x98) = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(lVar3 + 0x80) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(lVar3 + 0x88) = *(undefined8 *)(param_1 + 0x88);
  *(undefined4 *)(lVar3 + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined1 *)(lVar3 + 0xac) = *(undefined1 *)(param_1 + 0xac);
  *(undefined1 *)(lVar3 + 0xad) = *(undefined1 *)(param_1 + 0xad);
  return param_2;
}



// FUNCTION 1435216a0 FUN_1435216a0 body=950 status=ok
// SIG undefined FUN_1435216a0(void)

void FUN_1435216a0(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  char cVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_f8;
  float local_f4;
  undefined4 local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  undefined4 local_e0;
  float local_dc;
  float local_d8;
  float fStack_d4;
  undefined8 uStack_d0;
  float local_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  float fStack_bc;
  
  bVar17 = false;
  if (*(char *)(param_1 + 0xad) != '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    uVar5 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x1c8);
    local_d8 = 0.0;
    uStack_d0 = 0;
    FUN_143590450(&local_d8);
    bVar17 = true;
    cVar16 = FUN_1435c8b00(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),&local_d8,
                           "flash.display.DisplayObject",uVar5);
    if (cVar16 != '\0') {
      bVar7 = true;
      goto LAB_143521731;
    }
  }
  bVar7 = false;
LAB_143521731:
  if ((bVar17) && (9 < (SUB41(local_d8,0) & 0x1f))) {
    if (((uint)local_d8 >> 9 & 1) == 0) {
      FUN_1435920c0(&local_d8);
    }
    else {
      FUN_143592150();
    }
  }
  if (bVar7) {
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x88);
    local_d8 = 1.0;
    fStack_d4 = 0.0;
    uStack_d0 = 0;
    local_c8 = 0.0;
    fStack_c4 = 1.0;
    uStack_c0 = 0;
    fStack_bc = 0.0;
    (**(code **)(*plVar6 + 0x1e8))(plVar6,&local_d8);
    fVar15 = fStack_bc;
    uVar14 = uStack_c0;
    fVar13 = fStack_c4;
    fVar12 = local_c8;
    uVar5 = uStack_d0;
    fVar9 = fStack_d4;
    fVar8 = local_d8;
    uVar10 = (undefined4)uStack_d0;
    fVar11 = uStack_d0._4_4_;
    dVar1 = *(double *)(param_1 + 0x90);
    dVar2 = *(double *)(param_1 + 0x98);
    local_f8 = local_d8;
    local_f4 = fStack_d4;
    local_f0 = (undefined4)uStack_d0;
    local_ec = uStack_d0._4_4_;
    local_e8 = local_c8;
    local_e4 = fStack_c4;
    local_e0 = uStack_c0;
    local_dc = fStack_bc;
    Scaleform::Render::Matrix2x4<float>::SetInverse
              ((Matrix2x4<float> *)&local_f8,(Matrix2x4<float> *)&local_d8);
    fVar19 = local_f4 * (float)dVar2;
    dVar3 = *(double *)(param_1 + 0x88);
    local_f4 = fVar9;
    local_f0 = uVar10;
    fVar18 = local_f8 * (float)dVar1;
    dVar4 = *(double *)(param_1 + 0x80);
    fVar20 = local_e4 * (float)dVar2 + local_e8 * (float)dVar1 + local_dc;
    local_f8 = fVar8;
    local_e8 = fVar12;
    local_e4 = fVar13;
    local_e0 = uVar14;
    local_dc = fVar15;
    fVar18 = fVar19 + fVar18 + local_ec;
    local_ec = fVar11;
    *(double *)(param_1 + 0x70) = (double)fVar18;
    *(double *)(param_1 + 0x78) = (double)fVar20;
    local_d8 = fVar8;
    fStack_d4 = fVar9;
    uStack_d0 = uVar5;
    local_c8 = fVar12;
    fStack_c4 = fVar13;
    uStack_c0 = uVar14;
    fStack_bc = fVar15;
    Scaleform::Render::Matrix2x4<float>::SetInverse
              ((Matrix2x4<float> *)&local_f8,(Matrix2x4<float> *)&local_d8);
    *(double *)(param_1 + 0x80) =
         (double)(local_f4 * (float)dVar3 + local_f8 * (float)dVar4 + local_ec);
    *(double *)(param_1 + 0x88) =
         (double)(local_e4 * (float)dVar3 + local_e8 * (float)dVar4 + local_dc);
  }
  else {
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  *(undefined1 *)(param_1 + 0xad) = 1;
  return;
}



// FUNCTION 143521b20 FUN_143521b20 body=49 status=ok
// SIG undefined FUN_143521b20(void)

void FUN_143521b20(longlong param_1,double *param_2)

{
  FUN_1435216a0();
  *param_2 = *(double *)(param_1 + 0x70) * 0.05;
  return;
}



// FUNCTION 143521b60 FUN_143521b60 body=46 status=ok
// SIG undefined FUN_143521b60(void)

void FUN_143521b60(longlong param_1,undefined8 param_2,double param_3)

{
  FUN_1435216a0();
  *(double *)(param_1 + 0x70) = param_3 * 20.0;
  return;
}



// FUNCTION 143521ba0 FUN_143521ba0 body=49 status=ok
// SIG undefined FUN_143521ba0(void)

void FUN_143521ba0(longlong param_1,double *param_2)

{
  FUN_1435216a0();
  *param_2 = *(double *)(param_1 + 0x78) * 0.05;
  return;
}



// FUNCTION 143521be0 localYSet body=46 status=ok
// SIG undefined localYSet(void)

void Scaleform::GFx::AS3::Instances::fl_events::TouchEvent::localYSet
               (longlong param_1,undefined8 param_2,double param_3)

{
  FUN_1435216a0();
  *(double *)(param_1 + 0x78) = param_3 * 20.0;
  return;
}



// FUNCTION 143521c50 FUN_143521c50 body=117 status=ok
// SIG undefined FUN_143521c50(void)

void FUN_143521c50(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  puVar1 = (ulonglong *)(param_1 + 0x68);
  if (puVar1 != param_2) {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
    }
    uVar2 = *param_2;
    if (uVar2 != 0) {
      if ((uVar2 & 1) != 0) {
        *param_2 = uVar2 - 1;
        *param_2 = *puVar1;
        return;
      }
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *param_2 = *puVar1;
  }
  return;
}



// FUNCTION 143521d10 FUN_143521d10 body=52 status=ok
// SIG undefined FUN_143521d10(void)

void FUN_143521d10(longlong param_1,double *param_2)

{
  FUN_1435216a0();
  *param_2 = *(double *)(param_1 + 0x80) * 0.05;
  return;
}



// FUNCTION 143521d50 sizeXSet body=49 status=ok
// SIG undefined sizeXSet(void)

void Scaleform::GFx::AS3::Instances::fl_events::TouchEvent::sizeXSet
               (longlong param_1,undefined8 param_2,double param_3)

{
  FUN_1435216a0();
  *(double *)(param_1 + 0x80) = param_3 * 20.0;
  return;
}



// FUNCTION 143521d90 FUN_143521d90 body=52 status=ok
// SIG undefined FUN_143521d90(void)

void FUN_143521d90(longlong param_1,double *param_2)

{
  FUN_1435216a0();
  *param_2 = *(double *)(param_1 + 0x88) * 0.05;
  return;
}



// FUNCTION 143521dd0 sizeYSet body=49 status=ok
// SIG undefined sizeYSet(void)

void Scaleform::GFx::AS3::Instances::fl_events::TouchEvent::sizeYSet
               (longlong param_1,undefined8 param_2,double param_3)

{
  FUN_1435216a0();
  *(double *)(param_1 + 0x88) = param_3 * 20.0;
  return;
}



// FUNCTION 143521e70 FUN_143521e70 body=75 status=ok
// SIG undefined FUN_143521e70(void)

void FUN_143521e70(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong local_res8 [4];
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0xd0))(param_1,local_res8);
  FUN_1434f0700(param_2,*puVar1);
  if (((local_res8[0] != 0) && ((local_res8[0] & 1) == 0)) &&
     ((*(uint *)(local_res8[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8[0] + 8) = *(uint *)(local_res8[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143521ed0 FUN_143521ed0 body=1661 status=ok
// SIG undefined FUN_143521ed0(void)

void FUN_143521ed0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong local_res8;
  uint local_298 [2];
  undefined8 local_290;
  undefined1 local_278 [32];
  undefined1 local_258 [32];
  undefined1 local_238 [32];
  undefined1 local_218 [32];
  undefined1 local_1f8 [32];
  undefined1 local_1d8 [32];
  undefined1 local_1b8 [32];
  undefined1 local_198 [32];
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  uint local_38 [8];
  
  local_298[0] = 0;
  local_290 = 0;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"TouchEvent",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_278,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),&DAT_145af4d3c,4);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_258,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"bubbles",7);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_238,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"cancelable",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_218,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"eventPhase",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_1f8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"touchPointID",0xc
                            );
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_1d8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  lVar5 = 0x13;
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),
                             "isPrimaryTouchPoint",0x13,0);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_1b8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"localX",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_198,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"localY",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_178,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"stageX",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_158,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"stageY",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_138,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"sizeX",5);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_118,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"sizeY",5);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_f8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"relatedObject",
                             0xd);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_d8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"ctrlKey",7);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_b8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"altKey",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_98,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"shiftKey",8);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_78,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"commandKey",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_58,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"controlKey",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_38,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143518160(param_1,local_298,0x13,local_278);
  FUN_1435911f0(local_298,&local_res8,param_2);
  puVar4 = &stack0xffffffffffffffe8;
  do {
    puVar2 = (uint *)(puVar4 + -0x20);
    puVar4 = puVar4 + -0x20;
    lVar5 = lVar5 + -1;
    if (9 < ((byte)*puVar2 & 0x1f)) {
      if ((*puVar2 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar4);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar5 != 0);
  if (9 < ((byte)local_298[0] & 0x1f)) {
    if ((local_298[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_298);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 143522580 FUN_143522580 body=30 status=ok
// SIG undefined FUN_143522580(void)

undefined8 * FUN_143522580(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_143521c50();
  return param_2;
}



// FUNCTION 1435225b0 FUN_1435225b0 body=85 status=ok
// SIG undefined FUN_1435225b0(void)

undefined8 * FUN_1435225b0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulonglong local_res8 [4];
  
  *param_2 = 0;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0xd0))(param_1,local_res8);
  FUN_1434f0700(param_2,*puVar1);
  if (((local_res8[0] != 0) && ((local_res8[0] & 1) == 0)) &&
     ((*(uint *)(local_res8[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8[0] + 8) = *(uint *)(local_res8[0] + 8) - 1;
    FUN_1434ef880();
  }
  return param_2;
}



// FUNCTION 143522610 FUN_143522610 body=33 status=ok
// SIG undefined FUN_143522610(void)

undefined8 * FUN_143522610(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b2ce20;
  return param_1;
}



// FUNCTION 143522640 FUN_143522640 body=141 status=ok
// SIG undefined FUN_143522640(void)

void FUN_143522640(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_1435211d0(lVar1,param_3);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,uVar2);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 1435226e0 FUN_1435226e0 body=33 status=ok
// SIG undefined FUN_1435226e0(void)

undefined8 * FUN_1435226e0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143522710 FUN_143522710 body=215 status=ok
// SIG undefined FUN_143522710(void)

undefined8 * FUN_143522710(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b272d0);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar2,param_2,&PTR_DAT_145b272d0);
    *puVar2 = &PTR_FUN_145b2ce20;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x90,0);
  if (lVar3 != 0) {
    Scaleform::GFx::AS3::Classes::fl_events::TouchEvent::TouchEvent(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1435227f0 TouchEvent body=127 status=ok
// SIG undefined TouchEvent(void)

undefined8 * Scaleform::GFx::AS3::Classes::fl_events::TouchEvent::TouchEvent(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b26340;
  param_1[10] = "touchBegin";
  param_1[0xb] = "touchEnd";
  param_1[0xc] = "touchMove";
  param_1[0xd] = "touchOut";
  param_1[0xe] = "touchOver";
  param_1[0xf] = "touchRollOut";
  param_1[0x10] = "touchRollOver";
  param_1[0x11] = "touchTap";
  return param_1;
}



// FUNCTION 143522880 FUN_143522880 body=138 status=ok
// SIG undefined FUN_143522880(void)

undefined8 * FUN_143522880(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_ForEachChild_GC_145b2bea8;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[8] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  param_1[9] = 0;
  param_1[10] = 0;
  *(byte *)((longlong)param_1 + 0x5c) = *(byte *)((longlong)param_1 + 0x5c) & 0xc0;
  *param_1 = &PTR_ForEachChild_GC_145b2ce98;
  *(undefined4 *)(param_1 + 0xb) = 2;
  *(undefined4 *)((longlong)param_1 + 0x61) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x11) = 1;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 0;
  return param_1;
}



// FUNCTION 143522910 FUN_143522910 body=351 status=ok
// SIG undefined FUN_143522910(void)

void FUN_143522910(longlong param_1,uint param_2,longlong param_3)

{
  int *piVar1;
  double dVar2;
  undefined1 uVar3;
  undefined1 local_res10 [16];
  double local_res20;
  uint local_38 [2];
  undefined8 local_30;
  
  FUN_143517f40();
  if (3 < param_2) {
    dVar2 = *(double *)(param_3 + 0x70);
    local_38[0] = 0;
    local_30 = 0;
    *(int *)((longlong)dVar2 + 0x18) = *(int *)((longlong)dVar2 + 0x18) + 1;
    local_res20 = dVar2;
    FUN_143522fc0(param_1,local_38,&local_res20);
    piVar1 = (int *)((longlong)dVar2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(dVar2);
    }
    if (9 < ((byte)local_38[0] & 0x1f)) {
      if ((local_38[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_38);
      }
      else {
        FUN_143592150();
      }
    }
  }
  if (4 < param_2) {
    FUN_143590af0(param_3 + 0x80,local_res10,&local_res20);
    *(undefined1 *)(param_1 + 0x8c) = 1;
    *(double *)(param_1 + 0x68) = local_res20 * 20.0;
  }
  if (5 < param_2) {
    FUN_143590af0(param_3 + 0xa0,local_res10,&local_res20);
    *(undefined1 *)(param_1 + 0x8c) = 1;
    *(double *)(param_1 + 0x70) = local_res20 * 20.0;
  }
  if (6 < param_2) {
    uVar3 = FUN_1435909c0(param_3 + 0xc0);
    *(undefined1 *)(param_1 + 0x61) = uVar3;
  }
  if (7 < param_2) {
    uVar3 = FUN_1435909c0(param_3 + 0xe0);
    *(undefined1 *)(param_1 + 0x60) = uVar3;
  }
  if (8 < param_2) {
    uVar3 = FUN_1435909c0(param_3 + 0x100);
    *(undefined1 *)(param_1 + 0x62) = uVar3;
  }
  if (9 < param_2) {
    uVar3 = FUN_1435909c0(param_3 + 0x120);
    *(undefined1 *)(param_1 + 99) = uVar3;
  }
  if (10 < param_2) {
    uVar3 = FUN_1435909c0(param_3 + 0x140);
    *(undefined1 *)(param_1 + 100) = uVar3;
  }
  return;
}



// FUNCTION 143522a90 Clone body=143 status=ok
// SIG undefined Clone(void)

longlong *
Scaleform::GFx::AS3::Instances::fl_events::GestureEvent::Clone(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  FUN_143517380();
  lVar1 = *param_2;
  *(undefined1 *)(lVar1 + 0x60) = *(undefined1 *)(param_1 + 0x60);
  *(undefined1 *)(lVar1 + 0x61) = *(undefined1 *)(param_1 + 0x61);
  *(undefined1 *)(lVar1 + 0x62) = *(undefined1 *)(param_1 + 0x62);
  *(undefined1 *)(lVar1 + 99) = *(undefined1 *)(param_1 + 99);
  *(undefined1 *)(lVar1 + 100) = *(undefined1 *)(param_1 + 100);
  *(undefined8 *)(lVar1 + 0x68) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(lVar1 + 0x80) = *(undefined8 *)(param_1 + 0x80);
  *(undefined4 *)(lVar1 + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined1 *)(lVar1 + 0x8c) = *(undefined1 *)(param_1 + 0x8c);
  return param_2;
}



// FUNCTION 143522b30 FUN_143522b30 body=574 status=ok
// SIG undefined FUN_143522b30(void)

void FUN_143522b30(longlong param_1)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  float local_98;
  float local_94;
  undefined4 local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  float local_7c;
  float local_78;
  float fStack_74;
  undefined8 uStack_70;
  float local_68;
  float fStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  
  bVar7 = false;
  if (*(char *)(param_1 + 0x8c) != '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    uVar3 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x1c8);
    local_78 = 0.0;
    uStack_70 = 0;
    FUN_143590450(&local_78);
    bVar7 = true;
    cVar6 = FUN_1435c8b00(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),&local_78,
                          "flash.display.DisplayObject",uVar3);
    if (cVar6 != '\0') {
      bVar5 = true;
      goto LAB_143522bc1;
    }
  }
  bVar5 = false;
LAB_143522bc1:
  if ((bVar7) && (9 < (SUB41(local_78,0) & 0x1f))) {
    if (((uint)local_78 >> 9 & 1) == 0) {
      FUN_1435920c0(&local_78);
    }
    else {
      FUN_143592150();
    }
  }
  if (bVar5) {
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x88);
    local_78 = 1.0;
    fStack_74 = 0.0;
    uStack_70 = 0;
    local_68 = 0.0;
    fStack_64 = 1.0;
    uStack_60 = 0;
    fStack_5c = 0.0;
    (**(code **)(*plVar4 + 0x1e8))(plVar4,&local_78);
    dVar1 = *(double *)(param_1 + 0x78);
    dVar2 = *(double *)(param_1 + 0x80);
    local_90 = (undefined4)uStack_70;
    local_8c = uStack_70._4_4_;
    local_88 = local_68;
    local_84 = fStack_64;
    local_80 = uStack_60;
    local_7c = fStack_5c;
    local_98 = local_78;
    local_94 = fStack_74;
    Scaleform::Render::Matrix2x4<float>::SetInverse
              ((Matrix2x4<float> *)&local_98,(Matrix2x4<float> *)&local_78);
    *(double *)(param_1 + 0x68) =
         (double)(local_94 * (float)dVar2 + local_98 * (float)dVar1 + local_8c);
    *(double *)(param_1 + 0x70) =
         (double)(local_84 * (float)dVar2 + local_88 * (float)dVar1 + local_7c);
  }
  else {
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  *(undefined1 *)(param_1 + 0x8c) = 1;
  return;
}



// FUNCTION 143522e00 FUN_143522e00 body=49 status=ok
// SIG undefined FUN_143522e00(void)

void FUN_143522e00(longlong param_1,double *param_2)

{
  FUN_143522b30();
  *param_2 = *(double *)(param_1 + 0x68) * 0.05;
  return;
}



// FUNCTION 143522e40 localXSet body=46 status=ok
// SIG undefined localXSet(void)

void Scaleform::GFx::AS3::Instances::fl_events::GestureEvent::localXSet
               (longlong param_1,undefined8 param_2,double param_3)

{
  FUN_143522b30();
  *(double *)(param_1 + 0x68) = param_3 * 20.0;
  return;
}



// FUNCTION 143522e80 FUN_143522e80 body=49 status=ok
// SIG undefined FUN_143522e80(void)

void FUN_143522e80(longlong param_1,double *param_2)

{
  FUN_143522b30();
  *param_2 = *(double *)(param_1 + 0x70) * 0.05;
  return;
}



// FUNCTION 143522ec0 FUN_143522ec0 body=46 status=ok
// SIG undefined FUN_143522ec0(void)

void FUN_143522ec0(longlong param_1,undefined8 param_2,double param_3)

{
  FUN_143522b30();
  *(double *)(param_1 + 0x70) = param_3 * 20.0;
  return;
}



// FUNCTION 143522f00 FUN_143522f00 body=179 status=ok
// SIG undefined FUN_143522f00(void)

void FUN_143522f00(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(&DAT_1467d5f80 + (longlong)*(int *)(param_1 + 0x88) * 8);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(*param_2 + 8);
    piVar1 = (int *)(lVar2 + 0x98);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*param_2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = lVar2 + 0x80;
  }
  else {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(lVar2 + lVar3) != '\0');
    lVar2 = FUN_143360950(*(undefined8 *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218),
                          lVar2,lVar3,0);
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 2;
    piVar1 = (int *)(*param_2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_2 = lVar2;
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 143522fc0 FUN_143522fc0 body=229 status=ok
// SIG undefined FUN_143522fc0(void)

void FUN_143522fc0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  bool bVar7;
  
  param_3 = (longlong *)*param_3;
  lVar6 = 0;
  uVar5 = 0;
  if (param_3 == (longlong *)(param_3[1] + 0x80)) {
    *(undefined4 *)(param_1 + 0x88) = 0;
    return;
  }
  lVar1 = *param_3;
  lVar3 = lVar6;
  while (lVar2 = lVar3 + 1, lVar4 = lVar6, *(char *)(lVar1 + lVar3) == (&DAT_145b2e340)[lVar3]) {
    lVar3 = lVar2;
    if (lVar2 == 4) {
      *(undefined4 *)(param_1 + 0x88) = 1;
      return;
    }
  }
  while (lVar2 = lVar4 + 1, lVar3 = lVar6, *(char *)(lVar1 + lVar4) == "begin"[lVar4]) {
    lVar4 = lVar2;
    if (lVar2 == 6) {
      *(undefined4 *)(param_1 + 0x88) = 2;
      return;
    }
  }
  while (lVar4 = lVar3 + 1, *(char *)(lVar1 + lVar3) == (&DAT_145b2e34c)[lVar3]) {
    lVar3 = lVar4;
    if (lVar4 == 4) {
      *(undefined4 *)(param_1 + 0x88) = 3;
      return;
    }
  }
  do {
    lVar3 = lVar6;
    bVar7 = *(char *)(lVar1 + lVar3) == "update"[lVar3];
    if (!bVar7) goto LAB_143523099;
    lVar6 = lVar3 + 1;
  } while (lVar3 + 1 != 7);
  bVar7 = *(char *)(lVar1 + lVar3) == "update"[lVar3];
LAB_143523099:
  if (bVar7) {
    uVar5 = 4;
  }
  *(undefined4 *)(param_1 + 0x88) = uVar5;
  return;
}



// FUNCTION 143523110 FUN_143523110 body=75 status=ok
// SIG undefined FUN_143523110(void)

void FUN_143523110(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong local_res8 [4];
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0xd0))(param_1,local_res8);
  FUN_1434f0700(param_2,*puVar1);
  if (((local_res8[0] != 0) && ((local_res8[0] & 1) == 0)) &&
     ((*(uint *)(local_res8[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8[0] + 8) = *(uint *)(local_res8[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143523170 FUN_143523170 body=1277 status=ok
// SIG undefined FUN_143523170(void)

void FUN_143523170(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong local_res8;
  uint local_1f8 [2];
  undefined8 local_1f0;
  undefined1 local_1d8 [32];
  undefined1 local_1b8 [32];
  undefined1 local_198 [32];
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  uint local_38 [8];
  
  local_1f8[0] = 0;
  local_1f0 = 0;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"GestureEvent",0xc
                            );
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_1d8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),&DAT_145af4d3c,4);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_1b8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"bubbles",7);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_198,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"cancelable",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_178,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"phase",5);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_158,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"localX",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_138,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"localY",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_118,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"stageX",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_f8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"stageY",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_d8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"ctrlKey",7);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_b8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"altKey",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_98,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"shiftKey",8);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_78,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"commandKey",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_58,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"controlKey",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_38,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  lVar4 = 0xe;
  FUN_143518160(param_1,local_1f8,0xe,local_1d8);
  FUN_1435911f0(local_1f8,&local_res8,param_2);
  puVar3 = &stack0xffffffffffffffe8;
  do {
    puVar2 = (uint *)(puVar3 + -0x20);
    puVar3 = puVar3 + -0x20;
    lVar4 = lVar4 + -1;
    if (9 < ((byte)*puVar2 & 0x1f)) {
      if ((*puVar2 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar3);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar4 != 0);
  if (9 < ((byte)local_1f8[0] & 0x1f)) {
    if ((local_1f8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_1f8);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 1435236a0 FUN_1435236a0 body=85 status=ok
// SIG undefined FUN_1435236a0(void)

undefined8 * FUN_1435236a0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulonglong local_res8 [4];
  
  *param_2 = 0;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0xd0))(param_1,local_res8);
  FUN_1434f0700(param_2,*puVar1);
  if (((local_res8[0] != 0) && ((local_res8[0] & 1) == 0)) &&
     ((*(uint *)(local_res8[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8[0] + 8) = *(uint *)(local_res8[0] + 8) - 1;
    FUN_1434ef880();
  }
  return param_2;
}



// FUNCTION 143523700 FUN_143523700 body=33 status=ok
// SIG undefined FUN_143523700(void)

undefined8 * FUN_143523700(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b2cf70;
  return param_1;
}



// FUNCTION 143523730 FUN_143523730 body=141 status=ok
// SIG undefined FUN_143523730(void)

void FUN_143523730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_143522880(lVar1,param_3);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,uVar2);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 1435237d0 FUN_1435237d0 body=33 status=ok
// SIG undefined FUN_1435237d0(void)

undefined8 * FUN_1435237d0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143523800 FUN_143523800 body=238 status=ok
// SIG undefined FUN_143523800(void)

undefined8 * FUN_143523800(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b28da0);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b28da0);
    *puVar3 = &PTR_FUN_145b2cf70;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x58);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b231d0;
    puVar3[10] = "gestureTwoFingerTap";
  }
  return param_1;
}



// FUNCTION 143523900 UFlowNodeBlueprint body=44 status=ok
// SIG undefined UFlowNodeBlueprint(void)

undefined8 * UFlowNodeBlueprint::UFlowNodeBlueprint(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b231d0;
  param_1[10] = "gestureTwoFingerTap";
  return param_1;
}



// FUNCTION 143523940 FUN_143523940 body=100 status=ok
// SIG undefined FUN_143523940(void)

undefined8 * FUN_143523940(undefined8 *param_1)

{
  FUN_143522880();
  *param_1 = &PTR_ForEachChild_GC_145b2cfe8;
  param_1[0x17] = 0x3ff0000000000000;
  param_1[0x16] = 0x3ff0000000000000;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  return param_1;
}



// FUNCTION 1435239b0 FUN_1435239b0 body=559 status=ok
// SIG undefined FUN_1435239b0(void)

void FUN_1435239b0(longlong param_1,uint param_2,longlong param_3)

{
  int *piVar1;
  double dVar2;
  undefined1 uVar3;
  undefined1 local_res10 [8];
  double local_res20;
  uint local_48 [2];
  undefined8 local_40;
  
  FUN_143522910();
  if (3 < param_2) {
    dVar2 = *(double *)(param_3 + 0x70);
    local_48[0] = 0;
    local_40 = 0;
    *(int *)((longlong)dVar2 + 0x18) = *(int *)((longlong)dVar2 + 0x18) + 1;
    local_res20 = dVar2;
    FUN_143522fc0(param_1,local_48,&local_res20);
    piVar1 = (int *)((longlong)dVar2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(dVar2);
    }
    if (9 < ((byte)local_48[0] & 0x1f)) {
      if ((local_48[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_48);
      }
      else {
        FUN_143592150();
      }
    }
  }
  if (4 < param_2) {
    FUN_143590af0(param_3 + 0x80,local_res10,&local_res20);
    *(undefined1 *)(param_1 + 200) = 1;
    *(double *)(param_1 + 0x68) = local_res20 * 20.0;
  }
  if (5 < param_2) {
    FUN_143590af0(param_3 + 0xa0,local_res10,&local_res20);
    *(undefined1 *)(param_1 + 200) = 1;
    *(double *)(param_1 + 0x70) = local_res20 * 20.0;
  }
  if (6 < param_2) {
    FUN_143590af0(param_3 + 0xc0,local_res10,&local_res20);
    *(double *)(param_1 + 0xb0) = local_res20;
  }
  if (7 < param_2) {
    FUN_143590af0(param_3 + 0xe0,local_res10,&local_res20);
    *(double *)(param_1 + 0xb8) = local_res20;
  }
  if (8 < param_2) {
    FUN_143590af0(param_3 + 0x100,local_res10,&local_res20);
    *(double *)(param_1 + 0xc0) = local_res20;
  }
  if (9 < param_2) {
    FUN_143590af0(param_3 + 0x120,local_res10,&local_res20);
    *(double *)(param_1 + 0x90) = local_res20 * 20.0;
  }
  if (10 < param_2) {
    FUN_143590af0(param_3 + 0x140,local_res10,&local_res20);
    *(double *)(param_1 + 0x98) = local_res20 * 20.0;
  }
  if (0xb < param_2) {
    uVar3 = FUN_1435909c0(param_3 + 0x160);
    *(undefined1 *)(param_1 + 0x61) = uVar3;
  }
  if (0xc < param_2) {
    uVar3 = FUN_1435909c0(param_3 + 0x180);
    *(undefined1 *)(param_1 + 0x60) = uVar3;
  }
  if (0xd < param_2) {
    uVar3 = FUN_1435909c0(param_3 + 0x1a0);
    *(undefined1 *)(param_1 + 0x62) = uVar3;
  }
  if (0xe < param_2) {
    uVar3 = FUN_1435909c0(param_3 + 0x1c0);
    *(undefined1 *)(param_1 + 99) = uVar3;
  }
  if (0xf < param_2) {
    uVar3 = FUN_1435909c0(param_3 + 0x1e0);
    *(undefined1 *)(param_1 + 100) = uVar3;
  }
  return;
}



// FUNCTION 143523c00 Clone body=108 status=ok
// SIG undefined Clone(void)

longlong *
Scaleform::GFx::AS3::Instances::fl_events::TransformGestureEvent::Clone
          (longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  GestureEvent::Clone();
  lVar1 = *param_2;
  *(undefined8 *)(lVar1 + 0x90) = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(lVar1 + 0x98) = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(lVar1 + 0xb0) = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(lVar1 + 0xb8) = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(lVar1 + 0xc0) = *(undefined8 *)(param_1 + 0xc0);
  return param_2;
}



// FUNCTION 143523c80 FUN_143523c80 body=1017 status=ok
// SIG undefined FUN_143523c80(void)

void FUN_143523c80(longlong param_1)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  longlong *plVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  char cVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_108;
  float fStack_104;
  undefined4 uStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  undefined4 uStack_f0;
  float fStack_ec;
  float local_e8;
  float local_e4;
  undefined8 local_e0;
  float local_d8;
  float local_d4;
  undefined4 local_d0;
  float local_cc;
  
  bVar15 = false;
  if (*(char *)(param_1 + 200) != '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    uVar3 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x1c8);
    local_e8 = 0.0;
    local_e0 = 0;
    FUN_143590450(&local_e8);
    bVar15 = true;
    cVar14 = FUN_1435c8b00(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),&local_e8,
                           "flash.display.DisplayObject",uVar3);
    if (cVar14 != '\0') {
      bVar5 = true;
      goto LAB_143523d12;
    }
  }
  bVar5 = false;
LAB_143523d12:
  if ((bVar15) && (9 < (SUB41(local_e8,0) & 0x1f))) {
    if (((uint)local_e8 >> 9 & 1) == 0) {
      FUN_1435920c0(&local_e8);
    }
    else {
      FUN_143592150();
    }
  }
  if (bVar5) {
    plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x88) + 0x38);
    local_108 = 1.0;
    fStack_104 = 0.0;
    uStack_100 = 0;
    fStack_fc = 0.0;
    local_f8 = 0.0;
    fStack_f4 = 1.0;
    uStack_f0 = 0;
    fStack_ec = 0.0;
    if (plVar4 != (longlong *)0x0) {
      local_108 = 1.0;
      fStack_104 = 0.0;
      uStack_100 = 0;
      fStack_fc = 0.0;
      local_f8 = 0.0;
      fStack_f4 = 1.0;
      uStack_f0 = 0;
      fStack_ec = 0.0;
      (**(code **)(*plVar4 + 0x1e8))(plVar4,&local_108);
    }
    fVar13 = fStack_ec;
    uVar12 = uStack_f0;
    fVar11 = fStack_f4;
    fVar10 = local_f8;
    fVar9 = fStack_fc;
    uVar8 = uStack_100;
    fVar7 = fStack_104;
    fVar6 = local_108;
    dVar1 = *(double *)(param_1 + 0x78);
    dVar2 = *(double *)(param_1 + 0x80);
    local_e8 = local_108;
    local_e4 = fStack_104;
    local_e0 = CONCAT44(fStack_fc,uStack_100);
    local_d8 = local_f8;
    local_d4 = fStack_f4;
    local_d0 = uStack_f0;
    local_cc = fStack_ec;
    fVar17 = (float)dVar1;
    fVar16 = (float)dVar2;
    Scaleform::Render::Matrix2x4<float>::SetInverse
              ((Matrix2x4<float> *)&local_108,(Matrix2x4<float> *)&local_e8);
    fVar19 = fStack_f4 * fVar16 + local_f8 * fVar17 + fStack_ec;
    fVar18 = fStack_104 * fVar16 + local_108 * fVar17 + fStack_fc;
    local_e8 = fVar6;
    local_e4 = fVar7;
    local_e0 = CONCAT44(fVar9,uVar8);
    local_d8 = fVar10;
    local_d4 = fVar11;
    local_d0 = uVar12;
    local_cc = fVar13;
    fVar17 = (float)(dVar1 + *(double *)(param_1 + 0x90));
    fVar16 = (float)(dVar2 + *(double *)(param_1 + 0x98));
    local_108 = fVar6;
    fStack_104 = fVar7;
    uStack_100 = uVar8;
    fStack_fc = fVar9;
    local_f8 = fVar10;
    fStack_f4 = fVar11;
    uStack_f0 = uVar12;
    fStack_ec = fVar13;
    Scaleform::Render::Matrix2x4<float>::SetInverse
              ((Matrix2x4<float> *)&local_108,(Matrix2x4<float> *)&local_e8);
    *(double *)(param_1 + 0xa0) =
         (double)((fStack_104 * fVar16 + local_108 * fVar17 + fStack_fc) - fVar18);
    *(double *)(param_1 + 0xa8) =
         (double)((fStack_f4 * fVar16 + local_f8 * fVar17 + fStack_ec) - fVar19);
  }
  else {
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  *(undefined1 *)(param_1 + 200) = 1;
  return;
}



// FUNCTION 143524080 FUN_143524080 body=52 status=ok
// SIG undefined FUN_143524080(void)

void FUN_143524080(longlong param_1,double *param_2)

{
  FUN_143523c80();
  *param_2 = *(double *)(param_1 + 0xa0) * 0.05;
  return;
}



// FUNCTION 1435240c0 offsetXSet body=49 status=ok
// SIG undefined offsetXSet(void)

void Scaleform::GFx::AS3::Instances::fl_events::TransformGestureEvent::offsetXSet
               (longlong param_1,undefined8 param_2,double param_3)

{
  FUN_143523c80();
  *(double *)(param_1 + 0xa0) = param_3 * 20.0;
  return;
}



// FUNCTION 143524100 FUN_143524100 body=52 status=ok
// SIG undefined FUN_143524100(void)

void FUN_143524100(longlong param_1,double *param_2)

{
  FUN_143523c80();
  *param_2 = *(double *)(param_1 + 0xa8) * 0.05;
  return;
}



// FUNCTION 143524140 offsetYSet body=49 status=ok
// SIG undefined offsetYSet(void)

void Scaleform::GFx::AS3::Instances::fl_events::TransformGestureEvent::offsetYSet
               (longlong param_1,undefined8 param_2,double param_3)

{
  FUN_143523c80();
  *(double *)(param_1 + 0xa8) = param_3 * 20.0;
  return;
}



// FUNCTION 143524210 FUN_143524210 body=75 status=ok
// SIG undefined FUN_143524210(void)

void FUN_143524210(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong local_res8 [4];
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0xd0))(param_1,local_res8);
  FUN_1434f0700(param_2,*puVar1);
  if (((local_res8[0] != 0) && ((local_res8[0] & 1) == 0)) &&
     ((*(uint *)(local_res8[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8[0] + 8) = *(uint *)(local_res8[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143524270 FUN_143524270 body=1661 status=ok
// SIG undefined FUN_143524270(void)

void FUN_143524270(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong local_res8;
  uint local_298 [2];
  undefined8 local_290;
  undefined1 local_278 [32];
  undefined1 local_258 [32];
  undefined1 local_238 [32];
  undefined1 local_218 [32];
  undefined1 local_1f8 [32];
  undefined1 local_1d8 [32];
  undefined1 local_1b8 [32];
  undefined1 local_198 [32];
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  uint local_38 [8];
  
  local_298[0] = 0;
  local_290 = 0;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),
                             "TransformGestureEvent",0x15);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_278,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),&DAT_145af4d3c,4);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_258,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"bubbles",7);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_238,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"cancelable",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_218,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"phase",5);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_1f8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"localX",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_1d8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"localY",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_1b8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"stageX",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_198,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"stageY",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_178,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"scaleX",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_158,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"scaleY",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_138,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"rotation",8);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_118,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"offsetX",7);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_f8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"offsetY",7);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_d8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"ctrlKey",7);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_b8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"altKey",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_98,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"shiftKey",8);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_78,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"commandKey",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_58,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"controlKey",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_38,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  lVar4 = 0x13;
  FUN_143518160(param_1,local_298,0x13,local_278);
  FUN_1435911f0(local_298,&local_res8,param_2);
  puVar3 = &stack0xffffffffffffffe8;
  do {
    puVar2 = (uint *)(puVar3 + -0x20);
    puVar3 = puVar3 + -0x20;
    lVar4 = lVar4 + -1;
    if (9 < ((byte)*puVar2 & 0x1f)) {
      if ((*puVar2 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar3);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar4 != 0);
  if (9 < ((byte)local_298[0] & 0x1f)) {
    if ((local_298[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_298);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 143524900 FUN_143524900 body=85 status=ok
// SIG undefined FUN_143524900(void)

undefined8 * FUN_143524900(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulonglong local_res8 [4];
  
  *param_2 = 0;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0xd0))(param_1,local_res8);
  FUN_1434f0700(param_2,*puVar1);
  if (((local_res8[0] != 0) && ((local_res8[0] & 1) == 0)) &&
     ((*(uint *)(local_res8[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8[0] + 8) = *(uint *)(local_res8[0] + 8) - 1;
    FUN_1434ef880();
  }
  return param_2;
}



// FUNCTION 143524960 FUN_143524960 body=33 status=ok
// SIG undefined FUN_143524960(void)

undefined8 * FUN_143524960(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b2d0c0;
  return param_1;
}



// FUNCTION 143524990 FUN_143524990 body=141 status=ok
// SIG undefined FUN_143524990(void)

void FUN_143524990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_143523940(lVar1,param_3);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,uVar2);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143524a30 FUN_143524a30 body=33 status=ok
// SIG undefined FUN_143524a30(void)

undefined8 * FUN_143524a30(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143524a60 FUN_143524a60 body=271 status=ok
// SIG undefined FUN_143524a60(void)

undefined8 * FUN_143524a60(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b2a9d8);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b2a9d8);
    *puVar3 = &PTR_FUN_145b2d0c0;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x70);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b24fa0;
    puVar3[10] = "gesturePan";
    puVar3[0xb] = "gestureRotate";
    puVar3[0xc] = "gestureSwipe";
    puVar3[0xd] = "gestureZoom";
  }
  return param_1;
}



// FUNCTION 143524b80 FUN_143524b80 body=77 status=ok
// SIG undefined FUN_143524b80(void)

undefined8 * FUN_143524b80(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b24fa0;
  param_1[10] = "gesturePan";
  param_1[0xb] = "gestureRotate";
  param_1[0xc] = "gestureSwipe";
  param_1[0xd] = "gestureZoom";
  return param_1;
}



// FUNCTION 143524be0 FUN_143524be0 body=72 status=ok
// SIG undefined FUN_143524be0(void)

undefined8 * FUN_143524be0(undefined8 *param_1)

{
  FUN_143522880();
  *(undefined2 *)(param_1 + 0x16) = 0;
  *param_1 = &PTR_ForEachChild_GC_145b2d138;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 143524c30 FUN_143524c30 body=602 status=ok
// SIG undefined FUN_143524c30(void)

void FUN_143524c30(longlong param_1,uint param_2,longlong param_3)

{
  int *piVar1;
  double dVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong local_res20;
  uint local_58 [2];
  undefined8 local_50;
  
  FUN_143517f40();
  if (3 < param_2) {
    local_58[0] = 0;
    local_50 = 0;
    lVar3 = *(longlong *)(param_3 + 0x70);
    *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
    local_res20 = lVar3;
    FUN_143522fc0(param_1,local_58,&local_res20);
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar3);
    }
    if (9 < ((byte)local_58[0] & 0x1f)) {
      if ((local_58[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_58);
      }
      else {
        FUN_143592150();
      }
    }
  }
  if (4 < param_2) {
    dVar2 = *(double *)(param_3 + 0x90);
    local_58[0] = 0;
    local_50 = 0;
    FUN_143522b30(param_1);
    *(double *)(param_1 + 0x68) = dVar2 * 20.0;
    if (9 < ((byte)local_58[0] & 0x1f)) {
      if ((local_58[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_58);
      }
      else {
        FUN_143592150();
      }
    }
  }
  if (5 < param_2) {
    dVar2 = *(double *)(param_3 + 0xb0);
    local_58[0] = 0;
    local_50 = 0;
    FUN_143522b30(param_1);
    *(double *)(param_1 + 0x70) = dVar2 * 20.0;
    if (9 < ((byte)local_58[0] & 0x1f)) {
      if ((local_58[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_58);
      }
      else {
        FUN_143592150();
      }
    }
  }
  if (6 < param_2) {
    dVar2 = *(double *)(param_3 + 0xd0);
    local_58[0] = 0;
    local_50 = 0;
    FUN_143524f20(param_1);
    *(double *)(param_1 + 0x90) = dVar2 * 20.0;
    if (9 < ((byte)local_58[0] & 0x1f)) {
      if ((local_58[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_58);
      }
      else {
        FUN_143592150();
      }
    }
  }
  if (7 < param_2) {
    dVar2 = *(double *)(param_3 + 0xf0);
    local_58[0] = 0;
    local_50 = 0;
    FUN_143524f20(param_1);
    *(double *)(param_1 + 0x98) = dVar2 * 20.0;
    if (9 < ((byte)local_58[0] & 0x1f)) {
      if ((local_58[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_58);
      }
      else {
        FUN_143592150();
      }
    }
  }
  if (8 < param_2) {
    uVar4 = FUN_1435909c0(param_3 + 0x100);
    *(undefined1 *)(param_1 + 0x61) = uVar4;
  }
  if (9 < param_2) {
    uVar4 = FUN_1435909c0(param_3 + 0x120);
    *(undefined1 *)(param_1 + 0x60) = uVar4;
  }
  if (10 < param_2) {
    uVar4 = FUN_1435909c0(param_3 + 0x140);
    *(undefined1 *)(param_1 + 0x62) = uVar4;
  }
  if (0xb < param_2) {
    uVar4 = FUN_1435909c0(param_3 + 0x160);
    *(undefined1 *)(param_1 + 99) = uVar4;
  }
  if (0xc < param_2) {
    uVar4 = FUN_1435909c0(param_3 + 0x180);
    *(undefined1 *)(param_1 + 100) = uVar4;
  }
  return;
}



// FUNCTION 143524ea0 Clone body=122 status=ok
// SIG undefined Clone(void)

longlong *
Scaleform::GFx::AS3::Instances::fl_events::PressAndTapGestureEvent::Clone
          (longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  GestureEvent::Clone();
  lVar1 = *param_2;
  *(undefined8 *)(lVar1 + 0x90) = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(lVar1 + 0x98) = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(lVar1 + 0xa0) = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(lVar1 + 0xa8) = *(undefined8 *)(param_1 + 0xa8);
  *(undefined1 *)(lVar1 + 0xb1) = *(undefined1 *)(param_1 + 0xb1);
  *(undefined1 *)(lVar1 + 0xb0) = *(undefined1 *)(param_1 + 0xb0);
  return param_2;
}



// FUNCTION 143524f20 FUN_143524f20 body=598 status=ok
// SIG undefined FUN_143524f20(void)

void FUN_143524f20(longlong param_1)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  float local_98;
  float local_94;
  undefined4 local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  float local_7c;
  float local_78;
  float fStack_74;
  undefined8 uStack_70;
  float local_68;
  float fStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  
  if (*(char *)(param_1 + 0xb1) != '\0') {
    return;
  }
  bVar7 = false;
  if ((*(char *)(param_1 + 0xb0) != '\0') && (bVar7 = false, *(longlong *)(param_1 + 0x50) != 0)) {
    uVar3 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x1c8);
    local_78 = 0.0;
    uStack_70 = 0;
    FUN_143590450(&local_78);
    bVar7 = true;
    cVar6 = FUN_1435c8b00(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),&local_78,
                          "flash.display.DisplayObject",uVar3);
    if (cVar6 != '\0') {
      bVar5 = true;
      goto LAB_143524fba;
    }
  }
  bVar5 = false;
LAB_143524fba:
  if ((bVar7) && (9 < (SUB41(local_78,0) & 0x1f))) {
    if (((uint)local_78 >> 9 & 1) == 0) {
      FUN_1435920c0(&local_78);
    }
    else {
      FUN_143592150();
    }
  }
  if (bVar5) {
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x88);
    local_78 = 1.0;
    fStack_74 = 0.0;
    uStack_70 = 0;
    local_68 = 0.0;
    fStack_64 = 1.0;
    uStack_60 = 0;
    fStack_5c = 0.0;
    (**(code **)(*plVar4 + 0x1e8))(plVar4,&local_78);
    dVar1 = *(double *)(param_1 + 0xa0);
    dVar2 = *(double *)(param_1 + 0xa8);
    local_90 = (undefined4)uStack_70;
    local_8c = uStack_70._4_4_;
    local_88 = local_68;
    local_84 = fStack_64;
    local_80 = uStack_60;
    local_7c = fStack_5c;
    local_98 = local_78;
    local_94 = fStack_74;
    Scaleform::Render::Matrix2x4<float>::SetInverse
              ((Matrix2x4<float> *)&local_98,(Matrix2x4<float> *)&local_78);
    *(double *)(param_1 + 0x90) =
         (double)(local_94 * (float)dVar2 + local_98 * (float)dVar1 + local_8c);
    *(double *)(param_1 + 0x98) =
         (double)(local_84 * (float)dVar2 + local_88 * (float)dVar1 + local_7c);
  }
  else {
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  *(undefined1 *)(param_1 + 0xb1) = 1;
  return;
}



// FUNCTION 143525180 FUN_143525180 body=52 status=ok
// SIG undefined FUN_143525180(void)

void FUN_143525180(longlong param_1,double *param_2)

{
  FUN_143524f20();
  *param_2 = *(double *)(param_1 + 0x90) * 0.05;
  return;
}



// FUNCTION 1435251c0 tapLocalXSet body=49 status=ok
// SIG undefined tapLocalXSet(void)

void Scaleform::GFx::AS3::Instances::fl_events::PressAndTapGestureEvent::tapLocalXSet
               (longlong param_1,undefined8 param_2,double param_3)

{
  FUN_143524f20();
  *(double *)(param_1 + 0x90) = param_3 * 20.0;
  return;
}



// FUNCTION 143525200 FUN_143525200 body=52 status=ok
// SIG undefined FUN_143525200(void)

void FUN_143525200(longlong param_1,double *param_2)

{
  FUN_143524f20();
  *param_2 = *(double *)(param_1 + 0x98) * 0.05;
  return;
}



// FUNCTION 143525240 tapLocalYSet body=49 status=ok
// SIG undefined tapLocalYSet(void)

void Scaleform::GFx::AS3::Instances::fl_events::PressAndTapGestureEvent::tapLocalYSet
               (longlong param_1,undefined8 param_2,double param_3)

{
  FUN_143524f20();
  *(double *)(param_1 + 0x98) = param_3 * 20.0;
  return;
}



// FUNCTION 1435252c0 FUN_1435252c0 body=75 status=ok
// SIG undefined FUN_1435252c0(void)

void FUN_1435252c0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong local_res8 [4];
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0xd0))(param_1,local_res8);
  FUN_1434f0700(param_2,*puVar1);
  if (((local_res8[0] != 0) && ((local_res8[0] & 1) == 0)) &&
     ((*(uint *)(local_res8[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8[0] + 8) = *(uint *)(local_res8[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143525320 FUN_143525320 body=1277 status=ok
// SIG undefined FUN_143525320(void)

void FUN_143525320(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong local_res8;
  uint local_1f8 [2];
  undefined8 local_1f0;
  undefined1 local_1d8 [32];
  undefined1 local_1b8 [32];
  undefined1 local_198 [32];
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  uint local_38 [8];
  
  local_1f8[0] = 0;
  local_1f0 = 0;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),
                             "PressAndTapGestureEvent",0x17);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_1d8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),&DAT_145af4d3c,4);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_1b8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"bubbles",7);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_198,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"cancelable",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_178,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"phase",5);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_158,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"localX",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_138,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"localY",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_118,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"tapLocalX",9);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_f8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"tapLocalY",9);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_d8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"ctrlKey",7);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_b8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"altKey",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_98,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"shiftKey",8);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_78,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"commandKey",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_58,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x218),"controlKey",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_38,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  lVar4 = 0xe;
  FUN_143518160(param_1,local_1f8,0xe,local_1d8);
  FUN_1435911f0(local_1f8,&local_res8,param_2);
  puVar3 = &stack0xffffffffffffffe8;
  do {
    puVar2 = (uint *)(puVar3 + -0x20);
    puVar3 = puVar3 + -0x20;
    lVar4 = lVar4 + -1;
    if (9 < ((byte)*puVar2 & 0x1f)) {
      if ((*puVar2 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar3);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar4 != 0);
  if (9 < ((byte)local_1f8[0] & 0x1f)) {
    if ((local_1f8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_1f8);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 143525830 FUN_143525830 body=85 status=ok
// SIG undefined FUN_143525830(void)

undefined8 * FUN_143525830(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulonglong local_res8 [4];
  
  *param_2 = 0;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0xd0))(param_1,local_res8);
  FUN_1434f0700(param_2,*puVar1);
  if (((local_res8[0] != 0) && ((local_res8[0] & 1) == 0)) &&
     ((*(uint *)(local_res8[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8[0] + 8) = *(uint *)(local_res8[0] + 8) - 1;
    FUN_1434ef880();
  }
  return param_2;
}



// FUNCTION 143525890 FUN_143525890 body=33 status=ok
// SIG undefined FUN_143525890(void)

undefined8 * FUN_143525890(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b2d210;
  return param_1;
}



// FUNCTION 1435258c0 FUN_1435258c0 body=205 status=ok
// SIG undefined FUN_1435258c0(void)

void FUN_1435258c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_143522880(puVar1,param_3);
    *(undefined2 *)(puVar1 + 0x16) = 0;
    *puVar1 = &PTR_ForEachChild_GC_145b2d138;
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
    puVar1[0x15] = 0;
    puVar1[0x14] = 0;
  }
  local_20 = 0;
  local_28[0] = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 1435259a0 FUN_1435259a0 body=33 status=ok
// SIG undefined FUN_1435259a0(void)

undefined8 * FUN_1435259a0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1435259d0 FUN_1435259d0 body=238 status=ok
// SIG undefined FUN_1435259d0(void)

undefined8 * FUN_1435259d0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b276f0);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b276f0);
    *puVar3 = &PTR_FUN_145b2d210;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x58);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b231d0;
    puVar3[10] = "gesturePressAndTap";
  }
  return param_1;
}



// FUNCTION 143525ad0 UFlowNodeBlueprint body=44 status=ok
// SIG undefined UFlowNodeBlueprint(void)

undefined8 * UFlowNodeBlueprint::UFlowNodeBlueprint(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b231d0;
  param_1[10] = "gesturePressAndTap";
  return param_1;
}



// FUNCTION 143525b10 FUN_143525b10 body=121 status=ok
// SIG undefined FUN_143525b10(void)

undefined8 * FUN_143525b10(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_ForEachChild_GC_145b2bea8;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[8] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  param_1[9] = 0;
  param_1[10] = 0;
  *(byte *)((longlong)param_1 + 0x5c) = *(byte *)((longlong)param_1 + 0x5c) & 0xc0;
  *param_1 = &PTR_ForEachChild_GC_145b2d288;
  *(undefined4 *)(param_1 + 0xb) = 2;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xff00;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0xffffffff;
  return param_1;
}



// FUNCTION 143525bb0 Clone body=106 status=ok
// SIG undefined Clone(void)

longlong *
Scaleform::GFx::AS3::Instances::fl_events::KeyboardEvent::Clone(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  FUN_143517380();
  lVar1 = *param_2;
  *(undefined4 *)(lVar1 + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(lVar1 + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(lVar1 + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined1 *)(lVar1 + 0x6c) = *(undefined1 *)(param_1 + 0x6c);
  *(undefined1 *)(lVar1 + 0x70) = *(undefined1 *)(param_1 + 0x70);
  *(undefined1 *)(lVar1 + 0x71) = *(undefined1 *)(param_1 + 0x71);
  *(undefined1 *)(lVar1 + 0x72) = *(undefined1 *)(param_1 + 0x72);
  *(undefined1 *)(lVar1 + 0x73) = *(undefined1 *)(param_1 + 0x73);
  *(undefined4 *)(lVar1 + 0x74) = *(undefined4 *)(param_1 + 0x74);
  return param_2;
}



// FUNCTION 143525c20 FUN_143525c20 body=84 status=ok
// SIG undefined FUN_143525c20(void)

void FUN_143525c20(longlong param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  
  *(undefined4 *)(param_1 + 0x60) = *param_2;
  *(undefined4 *)(param_1 + 100) = param_2[1];
  *(undefined4 *)(param_1 + 0x68) = param_2[2];
  *(undefined1 *)(param_1 + 0x6c) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 0x71) = *(undefined1 *)((longlong)param_2 + 0x11);
  *(undefined1 *)(param_1 + 0x72) = *(undefined1 *)((longlong)param_2 + 0x12);
  *(undefined1 *)(param_1 + 0x73) = *(undefined1 *)((longlong)param_2 + 0x13);
  if (*(char *)(param_1 + 0x6c) == '\0') {
    uVar1 = FUN_14338a8c0();
    *(undefined1 *)(param_1 + 0x6c) = uVar1;
  }
  return;
}



// FUNCTION 143525c80 FUN_143525c80 body=613 status=ok
// SIG undefined FUN_143525c80(void)

void FUN_143525c80(longlong param_1,undefined4 param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  char *pcVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 local_28 [8];
  longlong local_20;
  
  *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xfd | 1;
  FUN_143590540();
  *(undefined1 *)(param_1 + 0x6c) = 0;
  FUN_143590540();
  lVar8 = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  FUN_143590540();
  *(undefined4 *)(param_1 + 0x74) = 0;
  FUN_143590540();
  *(byte *)(param_1 + 0x72) = *(byte *)(param_1 + 0x72) & 0xfd;
  FUN_143590540();
  *(byte *)(param_1 + 0x72) = *(byte *)(param_1 + 0x72) & 0xfb;
  FUN_143590540();
  *(byte *)(param_1 + 0x72) = *(byte *)(param_1 + 0x72) & 0xfe;
  FUN_143590540();
  *(byte *)(param_1 + 0x72) = *(byte *)(param_1 + 0x72) & 0xfd;
  FUN_143590540();
  *(byte *)(param_1 + 0x72) = *(byte *)(param_1 + 0x72) & 0xfd;
  switch(param_2) {
  case 0:
  case 1:
  case 2:
  case 3:
    goto switchD_143525d06_caseD_0;
  case 4:
    goto switchD_143525d06_caseD_4;
  case 5:
    goto switchD_143525d06_caseD_5;
  case 6:
    goto switchD_143525d06_caseD_6;
  case 7:
    goto switchD_143525d06_caseD_7;
  case 8:
    goto switchD_143525d06_caseD_8;
  case 9:
    goto switchD_143525d06_caseD_9;
  case 10:
    break;
  default:
    cVar4 = FUN_1435909c0(param_3 + 0x140);
    FUN_143590540();
    if (cVar4 == '\0') {
      *(byte *)(param_1 + 0x72) = *(byte *)(param_1 + 0x72) & 0xfd;
    }
    else {
      *(byte *)(param_1 + 0x72) = *(byte *)(param_1 + 0x72) | 2;
    }
  }
  cVar4 = FUN_1435909c0(param_3 + 0x120);
  FUN_143590540();
  if (cVar4 == '\0') {
    *(byte *)(param_1 + 0x72) = *(byte *)(param_1 + 0x72) & 0xfd;
  }
  else {
    *(byte *)(param_1 + 0x72) = *(byte *)(param_1 + 0x72) | 2;
  }
switchD_143525d06_caseD_9:
  cVar4 = FUN_1435909c0(param_3 + 0x100);
  FUN_143590540();
  if (cVar4 == '\0') {
    *(byte *)(param_1 + 0x72) = *(byte *)(param_1 + 0x72) & 0xfe;
  }
  else {
    *(byte *)(param_1 + 0x72) = *(byte *)(param_1 + 0x72) | 1;
  }
switchD_143525d06_caseD_8:
  cVar4 = FUN_1435909c0(param_3 + 0xe0);
  FUN_143590540();
  if (cVar4 == '\0') {
    *(byte *)(param_1 + 0x72) = *(byte *)(param_1 + 0x72) & 0xfb;
  }
  else {
    *(byte *)(param_1 + 0x72) = *(byte *)(param_1 + 0x72) | 4;
  }
switchD_143525d06_caseD_7:
  cVar4 = FUN_1435909c0(param_3 + 0xc0);
  FUN_143590540();
  if (cVar4 == '\0') {
    *(byte *)(param_1 + 0x72) = *(byte *)(param_1 + 0x72) & 0xfd;
  }
  else {
    *(byte *)(param_1 + 0x72) = *(byte *)(param_1 + 0x72) | 2;
  }
switchD_143525d06_caseD_6:
  pcVar5 = (char *)FUN_143590eb0(param_3 + 0xa0,local_res10,local_res8);
  uVar3 = local_res8[0];
  if (*pcVar5 != '\0') {
    FUN_143590540();
    *(undefined4 *)(param_1 + 0x74) = uVar3;
switchD_143525d06_caseD_5:
    pcVar5 = (char *)FUN_143590eb0(param_3 + 0x80,local_res10,local_res8);
    uVar3 = local_res8[0];
    if (*pcVar5 != '\0') {
      FUN_143590540();
      *(undefined4 *)(param_1 + 0x68) = uVar3;
switchD_143525d06_caseD_4:
      pcVar5 = (char *)FUN_143590eb0(param_3 + 0x60,local_res10,local_res8);
      if (*pcVar5 != '\0') {
        FUN_143590540();
        *(undefined1 *)(param_1 + 0x6c) = (undefined1)local_res8[0];
switchD_143525d06_caseD_0:
        FUN_143517f40(param_1,param_2,param_3);
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
        if (*(char *)(lVar2 + 0xb8) == '\0') {
          lVar9 = lVar8;
          do {
            lVar7 = lVar9 + 1;
            if (*(char *)(**(longlong **)(param_1 + 0x40) + lVar9) != "keyDown"[lVar9]) {
              do {
                lVar9 = lVar8 + 1;
                if (*(char *)(**(longlong **)(param_1 + 0x40) + lVar8) != (&DAT_145b2e070)[lVar8]) {
                  uVar6 = FUN_1435c8e40(local_28,0x5e4,lVar2);
                  FUN_1435cbe70(lVar2,uVar6);
                  piVar1 = (int *)(local_20 + 0x18);
                  *piVar1 = *piVar1 + -1;
                  if (*piVar1 != 0) {
                    return;
                  }
                  FUN_14335f920();
                  return;
                }
                lVar8 = lVar9;
              } while (lVar9 != 6);
              return;
            }
            lVar9 = lVar7;
          } while (lVar7 != 8);
        }
      }
    }
  }
  return;
}



// FUNCTION 1435260e0 FUN_1435260e0 body=151 status=ok
// SIG undefined FUN_1435260e0(void)

void FUN_1435260e0(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong local_res8;
  
  puVar2 = (ulonglong *)(**(code **)(*param_1 + 0xd0))(param_1,&local_res8);
  if (puVar2 != param_2) {
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      *(uint *)(uVar1 + 8) = *(int *)(uVar1 + 8) + 1U & 0x8fffffff;
    }
    uVar1 = *param_2;
    if (uVar1 != 0) {
      if ((uVar1 & 1) == 0) {
        if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar1 - 1;
      }
    }
    *param_2 = *puVar2;
  }
  if (((local_res8 != 0) && ((local_res8 & 1) == 0)) &&
     ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143526180 FUN_143526180 body=1037 status=ok
// SIG undefined FUN_143526180(void)

void FUN_143526180(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong local_res8;
  uint local_198 [2];
  undefined8 local_190;
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  uint local_38 [8];
  
  local_198[0] = 0;
  local_190 = 0;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"KeyboardEvent",
                             0xd);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_178,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),&DAT_145af4d3c,4);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_158,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"bubbles",7);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_138,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"cancelable",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_118,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"eventPhase",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_f8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"charCode",8);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_d8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"keyCode",7);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_b8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  lVar5 = 0xb;
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"keyLocation",0xb,
                             0);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_98,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"ctrlKey",7);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_78,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"altKey",6);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_58,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"shiftKey",8);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_38,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143518160(param_1,local_198,0xb,local_178);
  FUN_1435911f0(local_198,&local_res8,param_2);
  puVar4 = &stack0xffffffffffffffe8;
  do {
    puVar2 = (uint *)(puVar4 + -0x20);
    puVar4 = puVar4 + -0x20;
    lVar5 = lVar5 + -1;
    if (9 < ((byte)*puVar2 & 0x1f)) {
      if ((*puVar2 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar4);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar5 != 0);
  if (9 < ((byte)local_198[0] & 0x1f)) {
    if ((local_198[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_198);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 1435265c0 FUN_1435265c0 body=30 status=ok
// SIG undefined FUN_1435265c0(void)

undefined8 * FUN_1435265c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1435260e0();
  return param_2;
}



// FUNCTION 1435265f0 UMaterialExpressionRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionRerouteBase(void)

undefined8 * UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b2d360;
  return param_1;
}



// FUNCTION 143526620 FUN_143526620 body=141 status=ok
// SIG undefined FUN_143526620(void)

void FUN_143526620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_143525b10(lVar1,param_3);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,uVar2);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 1435266c0 UMaterialExpressionRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionRerouteBase(void)

undefined8 * UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1435266f0 FUN_1435266f0 body=249 status=ok
// SIG undefined FUN_1435266f0(void)

undefined8 * FUN_1435266f0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b28980);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b28980);
    *puVar3 = &PTR_FUN_145b2d360;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x60);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b23ad8;
    puVar3[10] = "keyDown";
    puVar3[0xb] = &DAT_145b2e070;
  }
  return param_1;
}



// FUNCTION 1435267f0 FUN_1435267f0 body=55 status=ok
// SIG undefined FUN_1435267f0(void)

undefined8 * FUN_1435267f0(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23ad8;
  param_1[10] = "keyDown";
  param_1[0xb] = &DAT_145b2e070;
  return param_1;
}



// FUNCTION 143526830 FUN_143526830 body=105 status=ok
// SIG undefined FUN_143526830(void)

undefined8 * FUN_143526830(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_ForEachChild_GC_145b2bea8;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[8] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  param_1[9] = 0;
  param_1[10] = 0;
  *(byte *)((longlong)param_1 + 0x5c) = *(byte *)((longlong)param_1 + 0x5c) & 0xc0;
  *param_1 = &PTR_ForEachChild_GC_145b2d3d8;
  *(undefined4 *)(param_1 + 0xb) = 2;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 1435268c0 Clone body=54 status=ok
// SIG undefined Clone(void)

longlong *
Scaleform::GFx::AS3::Instances::fl_events::ProgressEvent::Clone(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  FUN_143517380();
  lVar1 = *param_2;
  *(undefined8 *)(lVar1 + 0x60) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(lVar1 + 0x68) = *(undefined8 *)(param_1 + 0x68);
  return param_2;
}



// FUNCTION 143526900 FUN_143526900 body=254 status=ok
// SIG undefined FUN_143526900(void)

void FUN_143526900(longlong param_1,uint param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined1 local_res10 [8];
  uint local_res20 [2];
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_2 != 4) {
    if ((param_2 != 5) && (param_2 < 4)) goto LAB_143526961;
    FUN_143590eb0(param_3 + 0x80,local_res10,local_res20);
    *(ulonglong *)(param_1 + 0x68) = (ulonglong)local_res20[0];
  }
  FUN_143590eb0(param_3 + 0x60,local_res10,local_res20);
  *(ulonglong *)(param_1 + 0x60) = (ulonglong)local_res20[0];
LAB_143526961:
  if (param_2 != 0) {
    if (param_2 != 1) {
      if (param_2 != 2) {
        bVar3 = FUN_1435909c0(param_3 + 0x40);
        *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xfd;
        *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | (bVar3 & 1) * '\x02';
      }
      bVar3 = FUN_1435909c0(param_3 + 0x20);
      *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xfe;
      *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | bVar3 & 1;
    }
    FUN_1435911f0(param_3,local_res10,param_1 + 0x40);
    return;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar4 = FUN_1435c8e40(local_18,0x427,uVar2);
  FUN_1435cbef0(uVar2,uVar4);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143526af0 FUN_143526af0 body=75 status=ok
// SIG undefined FUN_143526af0(void)

void FUN_143526af0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong local_res8 [4];
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0xd0))(param_1,local_res8);
  FUN_1434f0700(param_2,*puVar1);
  if (((local_res8[0] != 0) && ((local_res8[0] & 1) == 0)) &&
     ((*(uint *)(local_res8[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8[0] + 8) = *(uint *)(local_res8[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143526b50 FUN_143526b50 body=669 status=ok
// SIG undefined FUN_143526b50(void)

void FUN_143526b50(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong local_res8;
  uint local_118 [2];
  undefined8 local_110;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  uint local_38 [8];
  
  local_118[0] = 0;
  local_110 = 0;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"ProgressEvent",
                             0xd);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_f8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),&DAT_145af4d3c,4);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_d8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  lVar5 = 7;
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"bubbles",7,0);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_b8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"cancelable",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_98,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"eventPhase",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_78,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"bytesLoaded",0xb)
  ;
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_58,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"bytesTotal",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_38,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143518160(param_1,local_118,7,local_f8);
  FUN_1435911f0(local_118,&local_res8,param_2);
  puVar4 = &stack0xffffffffffffffe8;
  do {
    puVar2 = (uint *)(puVar4 + -0x20);
    puVar4 = puVar4 + -0x20;
    lVar5 = lVar5 + -1;
    if (9 < ((byte)*puVar2 & 0x1f)) {
      if ((*puVar2 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar4);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar5 != 0);
  if (9 < ((byte)local_118[0] & 0x1f)) {
    if ((local_118[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_118);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 143526e00 FUN_143526e00 body=85 status=ok
// SIG undefined FUN_143526e00(void)

undefined8 * FUN_143526e00(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulonglong local_res8 [4];
  
  *param_2 = 0;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0xd0))(param_1,local_res8);
  FUN_1434f0700(param_2,*puVar1);
  if (((local_res8[0] != 0) && ((local_res8[0] & 1) == 0)) &&
     ((*(uint *)(local_res8[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8[0] + 8) = *(uint *)(local_res8[0] + 8) - 1;
    FUN_1434ef880();
  }
  return param_2;
}



// FUNCTION 143526e60 FUN_143526e60 body=33 status=ok
// SIG undefined FUN_143526e60(void)

undefined8 * FUN_143526e60(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b2d4b0;
  return param_1;
}



// FUNCTION 143526e90 FUN_143526e90 body=141 status=ok
// SIG undefined FUN_143526e90(void)

void FUN_143526e90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_143526830(lVar1,param_3);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,uVar2);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143526f30 FUN_143526f30 body=33 status=ok
// SIG undefined FUN_143526f30(void)

undefined8 * FUN_143526f30(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143526f60 FUN_143526f60 body=249 status=ok
// SIG undefined FUN_143526f60(void)

undefined8 * FUN_143526f60(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b2a150);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b2a150);
    *puVar3 = &PTR_FUN_145b2d4b0;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x60);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b23ad8;
    puVar3[10] = "progress";
    puVar3[0xb] = "socketData";
  }
  return param_1;
}



// FUNCTION 143527060 FUN_143527060 body=55 status=ok
// SIG undefined FUN_143527060(void)

undefined8 * FUN_143527060(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b23ad8;
  param_1[10] = "progress";
  param_1[0xb] = "socketData";
  return param_1;
}



// FUNCTION 1435270a0 FUN_1435270a0 body=107 status=ok
// SIG undefined FUN_1435270a0(void)

undefined8 * FUN_1435270a0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_ForEachChild_GC_145b2bea8;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[8] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  param_1[9] = 0;
  param_1[10] = 0;
  *(byte *)((longlong)param_1 + 0x5c) = *(byte *)((longlong)param_1 + 0x5c) & 0xc0;
  *param_1 = &PTR_ForEachChild_GC_145b2d528;
  *(undefined4 *)(param_1 + 0xb) = 2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 143527120 ForEachChild_GC body=93 status=ok
// SIG undefined ForEachChild_GC(void)

void Scaleform::GFx::AS3::Instances::fl_events::FocusEvent::ForEachChild_GC
               (longlong param_1,undefined8 param_2,code *param_3)

{
  FUN_1435b16a0();
  if (*(longlong *)(param_1 + 0x48) != 0) {
    (*param_3)(param_2,param_1 + 0x48);
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    (*param_3)(param_2,param_1 + 0x50);
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    (*param_3)(param_2,param_1 + 0x68);
  }
  return;
}



// FUNCTION 1435271b0 FUN_1435271b0 body=165 status=ok
// SIG undefined FUN_1435271b0(void)

longlong * FUN_1435271b0(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_143517380();
  lVar3 = *param_2;
  puVar1 = (ulonglong *)(param_1 + 0x68);
  puVar2 = (ulonglong *)(lVar3 + 0x68);
  if (puVar1 != puVar2) {
    uVar4 = *puVar1;
    if (uVar4 != 0) {
      *(uint *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1U & 0x8fffffff;
    }
    uVar4 = *puVar2;
    if (uVar4 != 0) {
      if ((uVar4 & 1) == 0) {
        if ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *puVar2 = uVar4 - 1;
      }
    }
    *puVar2 = *puVar1;
  }
  *(undefined1 *)(lVar3 + 0x60) = *(undefined1 *)(param_1 + 0x60);
  *(undefined4 *)(lVar3 + 100) = *(undefined4 *)(param_1 + 100);
  return param_2;
}



// FUNCTION 143527260 FUN_143527260 body=231 status=ok
// SIG undefined FUN_143527260(void)

void FUN_143527260(longlong param_1,uint param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  undefined1 local_res10 [8];
  undefined4 local_res20 [2];
  
  FUN_143517f40();
  if (3 < param_2) {
    uVar1 = *(ulonglong *)(param_1 + 0x68);
    if (uVar1 != 0) {
      if ((uVar1 & 1) == 0) {
        if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *(ulonglong *)(param_1 + 0x68) = uVar1 - 1;
      }
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    lVar2 = *(longlong *)(param_3 + 0x70);
    if ((lVar2 != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98),
       cVar4 = FUN_1435c8b00(lVar3,param_3 + 0x60,"flash.display.InteractiveObject",
                             *(undefined8 *)(lVar3 + 0x1c8)), cVar4 != '\0')) {
      FUN_1434f0700(param_1 + 0x68,lVar2);
    }
  }
  if (4 < param_2) {
    uVar5 = FUN_1435909c0(param_3 + 0x80);
    *(undefined1 *)(param_1 + 0x60) = uVar5;
  }
  if (5 < param_2) {
    FUN_143590eb0(param_3 + 0xa0,local_res10,local_res20);
    *(undefined4 *)(param_1 + 100) = local_res20[0];
  }
  return;
}



// FUNCTION 1435273d0 FUN_1435273d0 body=117 status=ok
// SIG undefined FUN_1435273d0(void)

void FUN_1435273d0(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  puVar1 = (ulonglong *)(param_1 + 0x68);
  if (puVar1 != param_2) {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
    }
    uVar2 = *param_2;
    if (uVar2 != 0) {
      if ((uVar2 & 1) != 0) {
        *param_2 = uVar2 - 1;
        *param_2 = *puVar1;
        return;
      }
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *param_2 = *puVar1;
  }
  return;
}



// FUNCTION 143527490 FUN_143527490 body=75 status=ok
// SIG undefined FUN_143527490(void)

void FUN_143527490(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong local_res8 [4];
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0xd0))(param_1,local_res8);
  FUN_1434f0700(param_2,*puVar1);
  if (((local_res8[0] != 0) && ((local_res8[0] & 1) == 0)) &&
     ((*(uint *)(local_res8[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8[0] + 8) = *(uint *)(local_res8[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1435274f0 FUN_1435274f0 body=733 status=ok
// SIG undefined FUN_1435274f0(void)

void FUN_1435274f0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong local_res8;
  uint local_138 [2];
  undefined8 local_130;
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  uint local_38 [8];
  
  local_138[0] = 0;
  local_130 = 0;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"FocusEvent",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_118,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),&DAT_145af4d3c,4);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_f8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"bubbles",7);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_d8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"cancelable",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_b8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"eventPhase",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_98,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"relatedObject",
                             0xd);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_78,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  lVar5 = 8;
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"shiftKey",8,0);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_58,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"keyCode",7);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_38,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143518160(param_1,local_138,8,local_118);
  FUN_1435911f0(local_138,&local_res8,param_2);
  puVar4 = &stack0xffffffffffffffe8;
  do {
    puVar2 = (uint *)(puVar4 + -0x20);
    puVar4 = puVar4 + -0x20;
    lVar5 = lVar5 + -1;
    if (9 < ((byte)*puVar2 & 0x1f)) {
      if ((*puVar2 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar4);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar5 != 0);
  if (9 < ((byte)local_138[0] & 0x1f)) {
    if ((local_138[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_138);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 1435277e0 FUN_1435277e0 body=30 status=ok
// SIG undefined FUN_1435277e0(void)

undefined8 * FUN_1435277e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1435273d0();
  return param_2;
}



// FUNCTION 143527810 FUN_143527810 body=85 status=ok
// SIG undefined FUN_143527810(void)

undefined8 * FUN_143527810(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulonglong local_res8 [4];
  
  *param_2 = 0;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0xd0))(param_1,local_res8);
  FUN_1434f0700(param_2,*puVar1);
  if (((local_res8[0] != 0) && ((local_res8[0] & 1) == 0)) &&
     ((*(uint *)(local_res8[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8[0] + 8) = *(uint *)(local_res8[0] + 8) - 1;
    FUN_1434ef880();
  }
  return param_2;
}



// FUNCTION 143527870 UMaterialExpressionRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionRerouteBase(void)

undefined8 * UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b2d600;
  return param_1;
}



// FUNCTION 1435278a0 FUN_1435278a0 body=141 status=ok
// SIG undefined FUN_1435278a0(void)

void FUN_1435278a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_1435270a0(lVar1,param_3);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,uVar2);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143527940 UMaterialExpressionRerouteBase body=33 status=ok
// SIG undefined UMaterialExpressionRerouteBase(void)

undefined8 * UMaterialExpressionRerouteBase::UMaterialExpressionRerouteBase(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143527970 FUN_143527970 body=271 status=ok
// SIG undefined FUN_143527970(void)

undefined8 * FUN_143527970(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b26ec8);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b26ec8);
    *puVar3 = &PTR_FUN_145b2d600;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x70);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b24fa0;
    puVar3[10] = "focusIn";
    puVar3[0xb] = "focusOut";
    puVar3[0xc] = "keyFocusChange";
    puVar3[0xd] = "mouseFocusChange";
  }
  return param_1;
}



// FUNCTION 143527a90 FUN_143527a90 body=77 status=ok
// SIG undefined FUN_143527a90(void)

undefined8 * FUN_143527a90(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b24fa0;
  param_1[10] = "focusIn";
  param_1[0xb] = "focusOut";
  param_1[0xc] = "keyFocusChange";
  param_1[0xd] = "mouseFocusChange";
  return param_1;
}



// FUNCTION 143527af0 FUN_143527af0 body=58 status=ok
// SIG undefined FUN_143527af0(void)

undefined8 * FUN_143527af0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_14351e0e0();
  *param_1 = &PTR_ForEachChild_GC_145b2d678;
  lVar2 = **(longlong **)(*(longlong *)(param_1[5] + 0x98) + 0x10);
  param_1[0xe] = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  return param_1;
}



// FUNCTION 143527b30 FUN_143527b30 body=58 status=ok
// SIG undefined FUN_143527b30(void)

void FUN_143527b30(longlong param_1)

{
  longlong lVar1;
  char *local_18;
  undefined8 local_10;
  
  local_10 = 0x19;
  local_18 = "flash.events.IOErrorEvent";
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  FUN_1435cc580(lVar1,&local_18,*(undefined8 *)(lVar1 + 0x1c8));
  return;
}



// FUNCTION 143527b70 FUN_143527b70 body=74 status=ok
// SIG undefined FUN_143527b70(void)

longlong * FUN_143527b70(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_143517380();
  lVar2 = *param_2;
  lVar3 = *(longlong *)(param_1 + 0x70);
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*(longlong *)(lVar2 + 0x70) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(lVar2 + 0x70) = lVar3;
  return param_2;
}



// FUNCTION 143527bc0 AS3Constructor body=67 status=ok
// SIG undefined AS3Constructor(void)

void Scaleform::GFx::AS3::Instances::fl_events::IOErrorEvent::AS3Constructor
               (longlong param_1,uint param_2,longlong param_3)

{
  undefined1 local_res10 [8];
  
  FUN_14351ea50();
  if (3 < param_2) {
    FUN_1435911f0(param_3 + 0x60,local_res10,param_1 + 0x70);
  }
  return;
}



// FUNCTION 143527c10 FUN_143527c10 body=62 status=ok
// SIG undefined FUN_143527c10(void)

void FUN_143527c10(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x70);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    *param_2 = lVar2;
    return;
  }
  *param_2 = lVar2;
  return;
}



// FUNCTION 143527c60 FUN_143527c60 body=49 status=ok
// SIG undefined FUN_143527c60(void)

void FUN_143527c60(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *param_3;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x70) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(param_1 + 0x70) = lVar2;
  return;
}



// FUNCTION 143527ca0 FUN_143527ca0 body=75 status=ok
// SIG undefined FUN_143527ca0(void)

void FUN_143527ca0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong local_res8 [4];
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0xd0))(param_1,local_res8);
  FUN_1434f0700(param_2,*puVar1);
  if (((local_res8[0] != 0) && ((local_res8[0] & 1) == 0)) &&
     ((*(uint *)(local_res8[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8[0] + 8) = *(uint *)(local_res8[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143527d00 FUN_143527d00 body=475 status=ok
// SIG undefined FUN_143527d00(void)

void FUN_143527d00(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong local_res8;
  uint local_b8 [2];
  undefined8 local_b0;
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  uint local_38 [8];
  
  local_b8[0] = 0;
  local_b0 = 0;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"IOErrorEvent",0xc
                            );
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_98,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  lVar5 = 4;
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),&DAT_145af4d3c,4,0
                            );
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_78,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),"bubbles",7);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_58,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x218),&DAT_145b0907c,4,0
                            );
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_38,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  FUN_143518160(param_1,local_b8,4,local_98);
  FUN_1435911f0(local_b8,&local_res8,param_2);
  puVar4 = &stack0xffffffffffffffe8;
  do {
    puVar2 = (uint *)(puVar4 + -0x20);
    puVar4 = puVar4 + -0x20;
    lVar5 = lVar5 + -1;
    if (9 < ((byte)*puVar2 & 0x1f)) {
      if ((*puVar2 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar4);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar5 != 0);
  if (9 < ((byte)local_b8[0] & 0x1f)) {
    if ((local_b8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_b8);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 143527ef0 FUN_143527ef0 body=85 status=ok
// SIG undefined FUN_143527ef0(void)

undefined8 * FUN_143527ef0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulonglong local_res8 [4];
  
  *param_2 = 0;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0xd0))(param_1,local_res8);
  FUN_1434f0700(param_2,*puVar1);
  if (((local_res8[0] != 0) && ((local_res8[0] & 1) == 0)) &&
     ((*(uint *)(local_res8[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8[0] + 8) = *(uint *)(local_res8[0] + 8) - 1;
    FUN_1434ef880();
  }
  return param_2;
}



// FUNCTION 143527f50 FUN_143527f50 body=33 status=ok
// SIG undefined FUN_143527f50(void)

undefined8 * FUN_143527f50(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b2d750;
  return param_1;
}



// FUNCTION 143527f80 FUN_143527f80 body=198 status=ok
// SIG undefined FUN_143527f80(void)

void FUN_143527f80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar3 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_14351e0e0(puVar3,param_3);
    *puVar3 = &PTR_ForEachChild_GC_145b2d678;
    lVar2 = **(longlong **)(*(longlong *)(puVar3[5] + 0x98) + 0x10);
    puVar3[0xe] = lVar2;
    piVar1 = (int *)(lVar2 + 0x18);
    *piVar1 = *piVar1 + 1;
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar3);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143528050 FUN_143528050 body=33 status=ok
// SIG undefined FUN_143528050(void)

undefined8 * FUN_143528050(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143528080 FUN_143528080 body=238 status=ok
// SIG undefined FUN_143528080(void)

undefined8 * FUN_143528080(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b27d80);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b27d80);
    *puVar3 = &PTR_FUN_145b2d750;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x58);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b231d0;
    puVar3[10] = "ioError";
  }
  return param_1;
}



// FUNCTION 143528180 UFlowNodeBlueprint body=44 status=ok
// SIG undefined UFlowNodeBlueprint(void)

undefined8 * UFlowNodeBlueprint::UFlowNodeBlueprint(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b231d0;
  param_1[10] = "ioError";
  return param_1;
}



// FUNCTION 1435281c0 FUN_1435281c0 body=163 status=ok
// SIG undefined FUN_1435281c0(void)

undefined8 * FUN_1435281c0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_ForEachChild_GC_145b2bea8;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[8] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  param_1[9] = 0;
  param_1[10] = 0;
  *(byte *)((longlong)param_1 + 0x5c) = *(byte *)((longlong)param_1 + 0x5c) & 0xc0;
  *param_1 = &PTR_ForEachChild_GC_145b2d7c8;
  *(undefined4 *)(param_1 + 0xb) = 2;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[0xc] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[0xd] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  return param_1;
}



// FUNCTION 143528270 FUN_143528270 body=110 status=ok
// SIG undefined FUN_143528270(void)

longlong * FUN_143528270(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_143517380();
  lVar2 = *param_2;
  lVar3 = *(longlong *)(param_1 + 0x60);
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*(longlong *)(lVar2 + 0x60) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(lVar2 + 0x60) = lVar3;
  lVar3 = *(longlong *)(param_1 + 0x68);
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*(longlong *)(lVar2 + 0x68) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(lVar2 + 0x68) = lVar3;
  return param_2;
}



// FUNCTION 143528300 FUN_143528300 body=58 status=ok
// SIG undefined FUN_143528300(void)

void FUN_143528300(longlong param_1)

{
  longlong lVar1;
  char *local_18;
  undefined8 local_10;
  
  local_10 = 0x1b;
  local_18 = "flash.events.NetStatusEvent";
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  FUN_1435cc580(lVar1,&local_18,*(undefined8 *)(lVar1 + 0x1c8));
  return;
}



// FUNCTION 143528340 AS3Constructor body=93 status=ok
// SIG undefined AS3Constructor(void)

void Scaleform::GFx::AS3::Instances::fl_events::NetStatusEvent::AS3Constructor
               (longlong param_1,uint param_2,longlong param_3)

{
  undefined1 local_res10 [8];
  
  FUN_143517f40();
  if (3 < param_2) {
    FUN_1435911f0(param_3 + 0x60,local_res10,param_1 + 0x60);
  }
  if (4 < param_2) {
    FUN_1435911f0(param_3 + 0x80,local_res10,param_1 + 0x68);
  }
  return;
}



// FUNCTION 1435283b0 FUN_1435283b0 body=424 status=ok
// SIG undefined FUN_1435283b0(void)

void FUN_1435283b0(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong local_res8;
  uint local_28 [8];
  
  puVar5 = (ulonglong *)
           FUN_1435ca830(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98),&local_res8);
  uVar2 = *puVar5;
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10);
  Scaleform::GFx::AS3::Value::Value(local_28,param_1 + 0x60);
  local_res8 = FUN_143360a60(*(undefined8 *)(lVar3 + 0x218),&DAT_145b2b8e4);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_1435b12c0(uVar2,&local_res8,local_28,0);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_28);
    }
    else {
      FUN_143592150();
    }
  }
  Scaleform::GFx::AS3::Value::Value(local_28,param_1 + 0x68);
  local_res8 = FUN_143360a60(*(undefined8 *)(lVar3 + 0x218),"level");
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_1435b12c0(uVar2,&local_res8,local_28,0);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_28);
    }
    else {
      FUN_143592150();
    }
  }
  if (&local_res8 != param_2) {
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
    }
    uVar4 = *param_2;
    if (uVar4 != 0) {
      if ((uVar4 & 1) == 0) {
        if ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *param_2 = uVar4 - 1;
      }
    }
    *param_2 = uVar2;
  }
  if (((uVar2 != 0) && ((uVar2 & 1) == 0)) && ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
    FUN_1434ef880(uVar2);
  }
  return;
}



// FUNCTION 143528560 FUN_143528560 body=597 status=ok
// SIG undefined FUN_143528560(void)

void FUN_143528560(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char *pcVar4;
  longlong local_res8;
  uint local_a8 [8];
  uint local_88 [2];
  undefined8 local_80;
  undefined1 local_68 [8];
  ulonglong local_60;
  uint local_58 [8];
  undefined1 local_38 [8];
  ulonglong local_30;
  uint local_28 [8];
  
  plVar2 = *(longlong **)(param_3 + 0x10);
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10);
  local_res8 = FUN_143360a60(*(undefined8 *)(lVar3 + 0x218),&DAT_145b2b8e4);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_a8,&local_res8);
  FUN_1435ae6b0(local_38,*(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x1d8),local_a8);
  if (9 < ((byte)local_a8[0] & 0x1f)) {
    if ((local_a8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_a8);
    }
    else {
      FUN_143592150();
    }
  }
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360a60(*(undefined8 *)(lVar3 + 0x218),"level");
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_a8,&local_res8);
  FUN_1435ae6b0(local_68,*(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x1d8),local_a8);
  if (9 < ((byte)local_a8[0] & 0x1f)) {
    if ((local_a8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_a8);
    }
    else {
      FUN_143592150();
    }
  }
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_88[0] = 0;
  local_80 = 0;
  pcVar4 = (char *)(**(code **)(*plVar2 + 0x28))(plVar2,&local_res8,local_38,local_88);
  if (*pcVar4 != '\0') {
    FUN_1435911f0(local_88,&local_res8,param_1 + 0x60);
  }
  pcVar4 = (char *)(**(code **)(*plVar2 + 0x28))(plVar2,&local_res8,local_68,local_88);
  if (*pcVar4 != '\0') {
    FUN_1435911f0(local_88,&local_res8,param_1 + 0x68);
  }
  if (9 < ((byte)local_88[0] & 0x1f)) {
    if ((local_88[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_88);
    }
    else {
      FUN_143592150();
    }
  }
  if (9 < ((byte)local_58[0] & 0x1f)) {
    if ((local_58[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_58);
    }
    else {
      FUN_143592150();
    }
  }
  if (local_60 != 0) {
    if ((local_60 & 1) == 0) {
      if ((*(uint *)(local_60 + 8) & 0x3fffff) != 0) {
        *(uint *)(local_60 + 8) = *(uint *)(local_60 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      local_60 = local_60 - 1;
    }
  }
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_28);
    }
    else {
      FUN_143592150();
    }
  }
  if (((local_30 != 0) && ((local_30 & 1) == 0)) && ((*(uint *)(local_30 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_30 + 8) = *(uint *)(local_30 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1435287c0 FUN_1435287c0 body=75 status=ok
// SIG undefined FUN_1435287c0(void)

void FUN_1435287c0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong local_res8 [4];
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0xd0))(param_1,local_res8);
  FUN_1434f0700(param_2,*puVar1);
  if (((local_res8[0] != 0) && ((local_res8[0] & 1) == 0)) &&
     ((*(uint *)(local_res8[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8[0] + 8) = *(uint *)(local_res8[0] + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 143528820 FUN_143528820 body=599 status=ok
// SIG undefined FUN_143528820(void)

void FUN_143528820(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong local_res8;
  uint local_f8 [2];
  undefined8 local_f0;
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  uint local_38 [8];
  
  lVar3 = *(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10);
  lVar4 = (**(code **)(*param_1 + 0xc0))();
  lVar6 = -1;
  do {
    lVar6 = lVar6 + 1;
  } while (*(char *)(lVar4 + lVar6) != '\0');
  local_res8 = FUN_143360950(*(undefined8 *)(lVar3 + 0x218),lVar4,lVar6,0);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_d8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(lVar3 + 0x218),&DAT_145af4d3c,4);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_b8,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(lVar3 + 0x218),"bubbles",7);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_98,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(lVar3 + 0x218),"cancelable",10);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_78,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_res8 = FUN_143360950(*(undefined8 *)(lVar3 + 0x218),&DAT_145b2b928,4);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_58,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  lVar4 = 6;
  local_res8 = FUN_143360950(*(undefined8 *)(lVar3 + 0x218),"target",6,0);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  Scaleform::GFx::AS3::Value::Value(local_38,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_f8[0] = 0;
  local_f0 = 0;
  FUN_143518160(param_1,local_f8,6,local_d8);
  FUN_1435911f0(local_f8,&local_res8,param_2);
  if (9 < ((byte)local_f8[0] & 0x1f)) {
    if ((local_f8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_f8);
    }
    else {
      FUN_143592150();
    }
  }
  puVar5 = &stack0xffffffffffffffe8;
  do {
    puVar2 = (uint *)(puVar5 + -0x20);
    puVar5 = puVar5 + -0x20;
    lVar4 = lVar4 + -1;
    if (9 < ((byte)*puVar2 & 0x1f)) {
      if ((*puVar2 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar5);
      }
      else {
        FUN_143592150();
      }
    }
  } while (lVar4 != 0);
  return;
}



// FUNCTION 143528a80 FUN_143528a80 body=85 status=ok
// SIG undefined FUN_143528a80(void)

undefined8 * FUN_143528a80(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulonglong local_res8 [4];
  
  *param_2 = 0;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0xd0))(param_1,local_res8);
  FUN_1434f0700(param_2,*puVar1);
  if (((local_res8[0] != 0) && ((local_res8[0] & 1) == 0)) &&
     ((*(uint *)(local_res8[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8[0] + 8) = *(uint *)(local_res8[0] + 8) - 1;
    FUN_1434ef880();
  }
  return param_2;
}



// FUNCTION 143528ae0 FUN_143528ae0 body=33 status=ok
// SIG undefined FUN_143528ae0(void)

undefined8 * FUN_143528ae0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b2d8a0;
  return param_1;
}



// FUNCTION 143528b10 FUN_143528b10 body=141 status=ok
// SIG undefined FUN_143528b10(void)

void FUN_143528b10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_1435281c0(lVar1,param_3);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,uVar2);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 143528bb0 FUN_143528bb0 body=33 status=ok
// SIG undefined FUN_143528bb0(void)

undefined8 * FUN_143528bb0(undefined8 *param_1)

{
  UMaterialExpression::UMaterialExpression();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 143528be0 FUN_143528be0 body=238 status=ok
// SIG undefined FUN_143528be0(void)

undefined8 * FUN_143528be0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b28d40);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    UMaterialExpression::UMaterialExpression(puVar3,param_2,&PTR_DAT_145b28d40);
    *puVar3 = &PTR_FUN_145b2d8a0;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x58);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b231d0;
    puVar3[10] = "netStatus";
  }
  return param_1;
}



// FUNCTION 143528ce0 UFlowNodeBlueprint body=44 status=ok
// SIG undefined UFlowNodeBlueprint(void)

undefined8 * UFlowNodeBlueprint::UFlowNodeBlueprint(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b231d0;
  param_1[10] = "netStatus";
  return param_1;
}



// FUNCTION 143528d20 FUN_143528d20 body=163 status=ok
// SIG undefined FUN_143528d20(void)

undefined8 * FUN_143528d20(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  UInterpTrackInst::UInterpTrackInst();
  *param_1 = &PTR_ForEachChild_GC_145b2bea8;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[8] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  param_1[9] = 0;
  param_1[10] = 0;
  *(byte *)((longlong)param_1 + 0x5c) = *(byte *)((longlong)param_1 + 0x5c) & 0xc0;
  *param_1 = &PTR_ForEachChild_GC_145b2d918;
  *(undefined4 *)(param_1 + 0xb) = 2;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[0xc] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[0xd] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  return param_1;
}



// FUNCTION 143528df0 FUN_143528df0 body=110 status=ok
// SIG undefined FUN_143528df0(void)

longlong * FUN_143528df0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_143517380();
  lVar2 = *param_2;
  lVar3 = *(longlong *)(param_1 + 0x60);
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*(longlong *)(lVar2 + 0x60) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(lVar2 + 0x60) = lVar3;
  lVar3 = *(longlong *)(param_1 + 0x68);
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*(longlong *)(lVar2 + 0x68) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(lVar2 + 0x68) = lVar3;
  return param_2;
}



// FUNCTION 143528e70 FUN_143528e70 body=107 status=ok
// SIG undefined FUN_143528e70(void)

void FUN_143528e70(longlong param_1,undefined2 param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined2 local_res10 [12];
  
  local_res10[0] = param_2;
  lVar2 = FUN_143360fd0(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10)
                         + 0x218),local_res10,1);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 2;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x60) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(param_1 + 0x60) = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar2);
  }
  return;
}



// FUNCTION 143528ef0 FUN_143528ef0 body=95 status=ok
// SIG undefined FUN_143528ef0(void)

void FUN_143528ef0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = FUN_143360fd0(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10)
                         + 0x218),param_2,0xffffffffffffffff);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 2;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x60) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(param_1 + 0x60) = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar2);
  }
  return;
}



// FUNCTION 143528f60 FUN_143528f60 body=107 status=ok
// SIG undefined FUN_143528f60(void)

void FUN_143528f60(longlong param_1,undefined2 param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined2 local_res10 [12];
  
  local_res10[0] = param_2;
  lVar2 = FUN_143360fd0(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10)
                         + 0x218),local_res10,1);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 2;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x68) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(param_1 + 0x68) = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar2);
  }
  return;
}



// FUNCTION 143528fe0 FUN_143528fe0 body=95 status=ok
// SIG undefined FUN_143528fe0(void)

void FUN_143528fe0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = FUN_143360fd0(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10)
                         + 0x218),param_2,0xffffffffffffffff);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 2;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x68) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(param_1 + 0x68) = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar2);
  }
  return;
}



// FUNCTION 143529050 FUN_143529050 body=236 status=ok
// SIG undefined FUN_143529050(void)

void FUN_143529050(longlong param_1,uint param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined1 local_res10 [8];
  undefined1 local_18 [8];
  longlong local_10;
  
  if (param_2 != 4) {
    if ((param_2 != 5) && (param_2 < 4)) goto LAB_14352909f;
    FUN_1435911f0(param_3 + 0x80,local_res10,param_1 + 0x68);
  }
  FUN_1435911f0(param_3 + 0x60,local_res10,param_1 + 0x60);
LAB_14352909f:
  if (param_2 != 0) {
    if (param_2 != 1) {
      if (param_2 != 2) {
        bVar3 = FUN_1435909c0(param_3 + 0x40);
        *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xfd;
        *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | (bVar3 & 1) * '\x02';
      }
      bVar3 = FUN_1435909c0(param_3 + 0x20);
      *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xfe;
      *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | bVar3 & 1;
    }
    FUN_1435911f0(param_3,local_res10,param_1 + 0x40);
    return;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar4 = FUN_1435c8e40(local_18,0x427,uVar2);
  FUN_1435cbef0(uVar2,uVar4);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143529150 FUN_143529150 body=62 status=ok
// SIG undefined FUN_143529150(void)

void FUN_143529150(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x60);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    *param_2 = lVar2;
    return;
  }
  *param_2 = lVar2;
  return;
}



// FUNCTION 1435291a0 FUN_1435291a0 body=49 status=ok
// SIG undefined FUN_1435291a0(void)

void FUN_1435291a0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *param_3;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x60) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(param_1 + 0x60) = lVar2;
  return;
}



// FUNCTION 1435291e0 FUN_1435291e0 body=62 status=ok
// SIG undefined FUN_1435291e0(void)

void FUN_1435291e0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x68);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    *param_2 = lVar2;
    return;
  }
  *param_2 = lVar2;
  return;
}


