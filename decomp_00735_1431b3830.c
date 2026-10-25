// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1431b3830 Set body=219 status=ok
// SIG undefined Set(void)

undefined8 *
CAkKeyList<unsigned_long,AkSwitchNodeParams,2,_ArrayPoolDefault>::Set
          (undefined8 *param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)*param_1;
  do {
    if (puVar4 == (undefined8 *)0x0) {
LAB_1431b3863:
      puVar5 = (undefined8 *)0x0;
      puVar4 = (undefined8 *)param_1[2];
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x18);
        if (puVar4 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        *puVar4 = param_1[2];
        param_1[2] = puVar4;
      }
      if ((undefined8 *)param_1[1] == (undefined8 *)0x0) {
        *param_1 = puVar4;
      }
      else {
        *(undefined8 *)param_1[1] = puVar4;
        puVar4 = (undefined8 *)param_1[2];
      }
      param_1[1] = puVar4;
      param_1[2] = *puVar4;
      *puVar4 = 0;
      *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
      lVar3 = param_1[1];
      if ((int *)(lVar3 + 8) != (int *)0x0) {
        uVar1 = *param_3;
        uVar2 = *(undefined4 *)(param_3 + 1);
        *(int *)(lVar3 + 8) = param_2;
        puVar5 = (undefined8 *)(lVar3 + 0xc);
        *puVar5 = uVar1;
        *(undefined4 *)(lVar3 + 0x14) = uVar2;
      }
      return puVar5;
    }
    if (*(int *)(puVar4 + 1) == param_2) {
      puVar5 = (undefined8 *)((longlong)puVar4 + 0xc);
      if (puVar5 != (undefined8 *)0x0) {
        uVar2 = *(undefined4 *)(param_3 + 1);
        *puVar5 = *param_3;
        *(undefined4 *)((longlong)puVar4 + 0x14) = uVar2;
        return puVar5;
      }
      goto LAB_1431b3863;
    }
    puVar4 = (undefined8 *)*puVar4;
  } while( true );
}



// FUNCTION 1431b3910 FUN_1431b3910 body=1254 status=ok
// SIG undefined FUN_1431b3910(void)

int FUN_1431b3910(longlong *param_1,uint *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  void *pvVar5;
  longlong *plVar6;
  uint *puVar7;
  byte *pbVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  byte bVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uStackX_c;
  uint *local_res10;
  undefined4 local_res18 [2];
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  iVar3 = (**(code **)(*param_1 + 0x80))();
  if (iVar3 != 4) {
    (**(code **)(*param_1 + 0x80))();
    AK::MemoryMgr::StartProfileThreadUsage((long)DAT_146b50b18);
    return 0x5b;
  }
  local_res10 = local_res10 + 1;
  iVar3 = FUN_143178ad0(param_1,&local_res10,local_res18,0);
  if (iVar3 == 1) {
    uVar2 = *local_res10;
    pbVar8 = (byte *)((longlong)local_res10 + 1);
    uVar1 = *(undefined4 *)((longlong)local_res10 + 5);
    pbVar4 = (byte *)((longlong)local_res10 + 9);
    local_res10 = (uint *)((longlong)local_res10 + 10);
    bVar12 = *pbVar4;
    if ((*(int *)pbVar8 != *(int *)((longlong)param_1 + 0x10c)) ||
       ((uint)(byte)uVar2 != *(uint *)(param_1 + 0x21))) {
      *(int *)((longlong)param_1 + 0x10c) = *(int *)pbVar8;
      *(uint *)(param_1 + 0x21) = (uint)(byte)uVar2;
      if ((*(byte *)((longlong)param_1 + 0xaa) & 2) != 0) {
        iVar3 = CAkSwitchAware::SubscribeSwitch(param_1 + 0x1d);
      }
    }
    if (iVar3 == 1) {
      *(byte *)((longlong)param_1 + 0xaa) = *(byte *)((longlong)param_1 + 0xaa) & 0xfd;
      *(undefined4 *)(param_1 + 0x22) = uVar1;
      puVar13 = (undefined8 *)0x0;
      *(byte *)((longlong)param_1 + 0xaa) =
           *(byte *)((longlong)param_1 + 0xaa) | -(bVar12 != 0) & 2U;
      uVar2 = *local_res10;
      local_res10 = local_res10 + 1;
      if (uVar2 != 0) {
        pvVar5 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar2 << 3);
        param_1[0x19] = (longlong)pvVar5;
        if (pvVar5 == (void *)0x0) {
          return 0x34;
        }
        *(uint *)((longlong)param_1 + 0xd4) = uVar2;
        puVar11 = puVar13;
        if (uVar2 != 0) {
          do {
            uVar15 = uStackX_c;
            uStackX_c = uStackX_c & 0xffffff00;
            uVar14 = *local_res10;
            local_res10 = local_res10 + 1;
            iVar3 = (**(code **)(*param_1 + 0x50))
                              (param_1,CONCAT44(uVar15,uVar14) & 0xffffff00ffffffff);
            if ((iVar3 != 1) && (iVar3 != 0xf)) break;
            uVar14 = (int)puVar11 + 1;
            puVar11 = (undefined8 *)(ulonglong)uVar14;
          } while (uVar14 < uVar2);
        }
      }
      if (iVar3 == 1) {
        uVar2 = *local_res10;
        local_res10 = local_res10 + 1;
        if (uVar2 != 0) {
          plVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar2 << 5);
          param_1[0x26] = (longlong)plVar6;
          if (plVar6 != (longlong *)0x0) {
            *(uint *)(param_1 + 0x27) = uVar2;
            param_1[0x25] = (longlong)plVar6;
            if (uVar2 != 0) {
              lVar9 = (longlong)plVar6 + 0x1c;
              puVar11 = puVar13;
              do {
                if (lVar9 != 0x14) {
                  *(undefined8 *)(lVar9 + -0xc) = 0;
                  *(undefined8 *)(lVar9 + -4) = 0;
                }
                uVar14 = (int)puVar11 + 1;
                puVar11 = (undefined8 *)(ulonglong)uVar14;
                *plVar6 = lVar9 + 4;
                lVar9 = lVar9 + 0x20;
                plVar6 = plVar6 + 4;
              } while (uVar14 < *(uint *)(param_1 + 0x27));
            }
            plVar6[-4] = 0;
          }
        }
        puVar11 = puVar13;
        if (uVar2 != 0) {
          do {
            uVar14 = *local_res10;
            local_res10 = local_res10 + 1;
            for (puVar16 = (undefined8 *)param_1[0x23]; puVar17 = puVar13,
                puVar16 != (undefined8 *)0x0; puVar16 = (undefined8 *)*puVar16) {
              if (*(uint *)(puVar16 + 1) == uVar14) {
                puVar17 = puVar16 + 2;
                if (puVar17 != (undefined8 *)0x0) goto LAB_1431b3c2a;
                break;
              }
            }
            plVar6 = (longlong *)param_1[0x25];
            if (plVar6 == (longlong *)0x0) {
              plVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x20);
              if (plVar6 != (longlong *)0x0) {
                if (plVar6 != (longlong *)0xfffffffffffffff8) {
                  plVar6[2] = 0;
                  plVar6[3] = 0;
                }
                *plVar6 = param_1[0x25];
                param_1[0x25] = (longlong)plVar6;
                goto LAB_1431b3bbb;
              }
            }
            else {
LAB_1431b3bbb:
              if ((undefined8 *)param_1[0x24] == (undefined8 *)0x0) {
                param_1[0x23] = (longlong)plVar6;
              }
              else {
                *(undefined8 *)param_1[0x24] = plVar6;
                plVar6 = (longlong *)param_1[0x25];
              }
              param_1[0x24] = (longlong)plVar6;
              param_1[0x25] = *plVar6;
              *plVar6 = 0;
              *(int *)((longlong)param_1 + 0x13c) = *(int *)((longlong)param_1 + 0x13c) + 1;
              lVar9 = param_1[0x24];
              puVar7 = (uint *)(lVar9 + 8);
              if (puVar7 != (uint *)0x0) {
                *puVar7 = uVar14;
                puVar17 = (undefined8 *)(lVar9 + 0x10);
              }
            }
            if (puVar17 == (undefined8 *)0x0) {
              return 2;
            }
LAB_1431b3c2a:
            uVar14 = *local_res10;
            local_res10 = local_res10 + 1;
            if (uVar14 != 0) {
              pvVar5 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar14 << 2);
              *puVar17 = pvVar5;
              if (pvVar5 != (void *)0x0) {
                *(uint *)((longlong)puVar17 + 0xc) = uVar14;
              }
            }
            puVar16 = puVar13;
            if (uVar14 != 0) {
              do {
                uVar15 = *local_res10;
                local_res10 = local_res10 + 1;
                iVar3 = FUN_1431b1a60(param_1,puVar17,uVar15);
                if (iVar3 != 1) {
                  return iVar3;
                }
                uVar15 = (int)puVar16 + 1;
                iVar3 = 1;
                puVar16 = (undefined8 *)(ulonglong)uVar15;
              } while (uVar15 < uVar14);
            }
            uVar14 = (int)puVar11 + 1;
            puVar11 = (undefined8 *)(ulonglong)uVar14;
          } while (uVar14 < uVar2);
        }
        uVar2 = *local_res10;
        local_res10 = local_res10 + 1;
        if (uVar2 != 0) {
          plVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar2 * 0x18);
          param_1[0x2b] = (longlong)plVar6;
          if (plVar6 != (longlong *)0x0) {
            *(uint *)(param_1 + 0x2c) = uVar2;
            param_1[0x2a] = (longlong)plVar6;
            plVar10 = plVar6;
            puVar11 = puVar13;
            if (uVar2 != 0) {
              do {
                plVar6 = plVar10 + 3;
                uVar14 = (int)puVar11 + 1;
                *plVar10 = (longlong)plVar6;
                plVar10 = plVar6;
                puVar11 = (undefined8 *)(ulonglong)uVar14;
              } while (uVar14 < *(uint *)(param_1 + 0x2c));
            }
            plVar6[-3] = 0;
          }
          if (uVar2 != 0) {
            bVar12 = (byte)local_50;
            do {
              uVar14 = *local_res10;
              bVar12 = ((byte)local_res10[1] & 3) << 3 | *(byte *)((longlong)local_res10 + 5) & 7 |
                       bVar12 & 0xe0;
              local_50 = CONCAT31(local_50._1_3_,bVar12);
              local_48 = *(undefined8 *)((longlong)local_res10 + 6);
              local_res10 = (uint *)((longlong)local_res10 + 0xe);
              local_40 = local_50;
              lVar9 = CAkKeyList<unsigned_long,AkSwitchNodeParams,2,_ArrayPoolDefault>::Set
                                (param_1 + 0x28,uVar14,&local_48);
              iVar3 = 2 - (uint)(lVar9 != 0);
              if (lVar9 == 0) {
                return 2;
              }
              uVar14 = (int)puVar13 + 1;
              puVar13 = (undefined8 *)(ulonglong)uVar14;
            } while (uVar14 < uVar2);
          }
        }
      }
    }
  }
  return iVar3;
}



// FUNCTION 1431b3e00 SetSwitch body=338 status=ok
// SIG undefined SetSwitch(void)

void CAkSwitchCntr::SetSwitch
               (longlong param_1,undefined4 param_2,longlong *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined1 local_28;
  undefined8 local_20;
  
  if ((*(byte *)(param_1 + -0x3e) & 2) != 0) {
    plVar1 = (longlong *)(param_1 + -0xe8);
    (**(code **)(*plVar1 + 8))(plVar1);
    if (*param_3 == 0) {
      if (*(int *)(param_1 + 0x80) == 0) {
        CAkRegistryMgr::ClearSwitchHist(g_pRegistryMgr,*(undefined4 *)(param_1 + -0xd8),0);
      }
      else {
        puVar3 = AK::MemoryMgr::Malloc
                           (g_DefaultPoolId,(ulonglong)(uint)(*(int *)(param_1 + 0x80) * 8));
        if (puVar3 != (undefined8 *)0x0) {
          plVar4 = *(longlong **)(param_1 + 0x88);
          uVar6 = 0;
          if (plVar4 != (longlong *)0x0) {
            do {
              if (param_4 == (undefined8 *)0x0) {
LAB_1431b3ec8:
                puVar3[uVar6] = plVar4[4];
                uVar6 = (ulonglong)((int)uVar6 + 1);
              }
              else {
                local_48 = plVar4[4];
                local_40 = 0;
                local_38 = 0;
                local_30 = 0xff;
                local_28 = 0xff;
                local_20 = 0;
                cVar2 = (**(code **)*param_4)(param_4,&local_48);
                if (cVar2 == '\0') goto LAB_1431b3ec8;
              }
              plVar4 = (longlong *)*plVar4;
            } while (plVar4 != (longlong *)0x0);
            puVar5 = puVar3;
            if ((int)uVar6 != 0) {
              do {
                FUN_1431b29b0(plVar1,param_2,*puVar5);
                uVar6 = uVar6 - 1;
                puVar5 = puVar5 + 1;
              } while (uVar6 != 0);
            }
          }
          AK::MemoryMgr::Free(g_DefaultPoolId,puVar3);
        }
      }
    }
    else {
      FUN_1431b29b0(plVar1,param_2);
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}



// FUNCTION 1431b3f60 FUN_1431b3f60 body=498 status=ok
// SIG undefined FUN_1431b3f60(void)

void FUN_1431b3f60(longlong *param_1,longlong param_2,int param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  long lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *local_res20;
  
  plVar8 = (longlong *)param_1[0x2e];
  bVar5 = false;
  local_res20 = (longlong *)0x0;
  if (plVar8 != (longlong *)0x0) {
    do {
      if (((param_2 == 0) || (param_2 == plVar8[4])) &&
         ((param_3 == 0 || (*(int *)((longlong)plVar8 + 0x1c) == param_3)))) {
        lVar7 = 0;
        if (param_2 == 0) {
          if (plVar8[4] != 0) {
            lVar7 = plVar8[4];
          }
        }
        else {
          bVar5 = true;
        }
        plVar9 = (longlong *)*plVar8;
        if (plVar8 == (longlong *)param_1[0x2e]) {
          param_1[0x2e] = (longlong)plVar9;
        }
        else {
          *local_res20 = (longlong)plVar9;
        }
        *(int *)(param_1 + 0x2d) = (int)param_1[0x2d] + -1;
        CAkPlayingMgr::RemoveItemActiveCount(DAT_146b50b00,*(undefined4 *)((longlong)plVar8 + 0x1c))
        ;
        (**(code **)(*param_1 + 0x130))(param_1,1);
        FUN_143177a90(param_1);
        puVar2 = (undefined8 *)plVar8[4];
        piVar1 = (int *)(puVar2 + 10);
        *piVar1 = *piVar1 + -1;
        lVar6 = g_DefaultPoolId;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,0);
          AK::MemoryMgr::Free(lVar6,puVar2);
        }
        if (plVar8[1] != 0) {
          AkExternalSourceArray::Release();
        }
        plVar3 = (longlong *)0x0;
        for (plVar4 = DAT_146b52010;
            (plVar4 != (longlong *)0x0 && ((plVar8 < plVar4 || (plVar4 + 0x780 <= plVar8))));
            plVar4 = (longlong *)plVar4[0x780]) {
          plVar3 = plVar4;
        }
        if (plVar4[0x782] == 0) {
          plVar4[0x782] = (longlong)plVar8;
          *plVar8 = 0;
        }
        else {
          *plVar8 = plVar4[0x782];
          plVar4[0x782] = (longlong)plVar8;
        }
        *(int *)(plVar4 + 0x781) = (int)plVar4[0x781] + 1;
        if ((int)plVar4[0x781] == 0x80) {
          plVar8 = (longlong *)plVar4[0x780];
          if (plVar4 != DAT_146b52010) {
            plVar3[0x780] = plVar4[0x780];
            plVar8 = DAT_146b52010;
          }
          DAT_146b52010 = plVar8;
          AK::MemoryMgr::Free(g_DefaultPoolId,plVar4);
        }
        if (lVar7 != 0) {
          CAkRegistryMgr::ClearSwitchHist(g_pRegistryMgr,(int)param_1[2],lVar7);
        }
      }
      else {
        plVar9 = (longlong *)*plVar8;
        local_res20 = plVar8;
      }
      plVar8 = plVar9;
    } while (plVar9 != (longlong *)0x0);
    if (bVar5) {
      CAkRegistryMgr::ClearSwitchHist(g_pRegistryMgr,(int)param_1[2],param_2);
    }
  }
  return;
}



// FUNCTION 1431b4160 StopPrevious body=498 status=ok
// SIG undefined StopPrevious(void)

undefined8
CAkSwitchCntr::StopPrevious
          (longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  longlong *plVar5;
  int *piVar6;
  uint uVar7;
  undefined4 local_68;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined2 local_38;
  undefined1 local_36;
  undefined2 local_35;
  undefined8 local_30;
  
  if (param_2 == (longlong *)0x0) {
    return 1;
  }
  piVar6 = (int *)*param_2;
  if (piVar6 != piVar6 + *(uint *)(param_2 + 1)) {
    do {
      iVar2 = *piVar6;
      for (puVar3 = *(undefined8 **)(param_1 + 0x140); puVar3 != (undefined8 *)0x0;
          puVar3 = (undefined8 *)*puVar3) {
        if (*(int *)(puVar3 + 1) == iVar2) {
          if ((undefined8 *)((longlong)puVar3 + 0xc) != (undefined8 *)0x0) {
            uVar7 = *(uint *)((longlong)puVar3 + 0x14) & 0xff;
            local_68 = (undefined4)*(undefined8 *)((longlong)puVar3 + 0xc);
            goto LAB_1431b41d7;
          }
          break;
        }
      }
      uVar7 = 0;
      local_68 = 0;
LAB_1431b41d7:
      if ((((*(byte *)(param_1 + 0xaa) & 2) != 0) && ((uVar7 & 0x10) != 0)) &&
         (param_3 != (undefined8 *)0x0)) {
        piVar4 = (int *)*param_3;
        piVar1 = piVar4 + *(uint *)(param_3 + 1);
        for (; piVar4 != piVar1; piVar4 = piVar4 + 1) {
          if (*piVar4 == iVar2) goto LAB_1431b42f2;
        }
      }
      plVar5 = (longlong *)CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,iVar2,0);
      if (plVar5 != (longlong *)0x0) {
        FUN_143140ce0(DAT_146b50b78,plVar5,param_4,0);
        if (((byte)uVar7 & 7) == 1) {
          local_3c = 0;
          local_30 = 0;
          local_38 = 0;
          local_36 = 0;
          local_58[0] = 0;
          local_48 = 0;
          local_35 = 0;
          local_40 = 4;
          local_50 = param_4;
          local_44 = local_68;
          (**(code **)(*plVar5 + 0x90))(plVar5,local_58);
          FUN_143140ce0(DAT_146b50b78,plVar5,param_4,local_48);
        }
        else {
          (**(code **)(*plVar5 + 0xb0))(plVar5,param_4);
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
LAB_1431b42f2:
      piVar6 = piVar6 + 1;
    } while (piVar6 != (int *)(*param_2 + (ulonglong)*(uint *)(param_2 + 1) * 4));
  }
  return 1;
}



// FUNCTION 1431b4360 FUN_1431b4360 body=788 status=ok
// SIG undefined FUN_1431b4360(void)

void FUN_1431b4360(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x188);
  while (puVar1 = *(undefined8 **)(param_1 + 0x178), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x178) = *puVar1;
    if (puVar1 == *(undefined8 **)(param_1 + 0x180)) {
      *(undefined8 *)(param_1 + 0x180) = 0;
    }
    *puVar1 = *(undefined8 *)(param_1 + 0x188);
    *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + -1;
    *(undefined8 **)(param_1 + 0x188) = puVar1;
    puVar2 = puVar1;
  }
  while (puVar1 = puVar2, puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    if ((puVar1 < *(undefined8 **)(param_1 + 400)) ||
       (*(undefined8 **)(param_1 + 400) + (ulonglong)*(uint *)(param_1 + 0x198) * 2 <= puVar1)) {
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar1);
    }
  }
  if (*(void **)(param_1 + 400) != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 400));
    *(undefined8 *)(param_1 + 400) = 0;
  }
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  CAkSwitchAware::UnsubscribeSwitches(param_1 + 0xe8);
  for (puVar2 = *(undefined8 **)(param_1 + 0x118); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    if ((void *)puVar2[2] != (void *)0x0) {
      *(undefined4 *)(puVar2 + 3) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,(void *)puVar2[2]);
      puVar2[2] = 0;
      *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
    }
  }
  while (puVar2 = *(undefined8 **)(param_1 + 0x118), puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x118) = *puVar2;
    if (puVar2 == *(undefined8 **)(param_1 + 0x120)) {
      *(undefined8 *)(param_1 + 0x120) = 0;
    }
    *puVar2 = *(undefined8 *)(param_1 + 0x128);
    *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + -1;
    *(undefined8 **)(param_1 + 0x128) = puVar2;
  }
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x150);
  while (puVar1 = *(undefined8 **)(param_1 + 0x140), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x140) = *puVar1;
    if (puVar1 == *(undefined8 **)(param_1 + 0x148)) {
      *(undefined8 *)(param_1 + 0x148) = 0;
    }
    *puVar1 = *(undefined8 *)(param_1 + 0x150);
    *(int *)(param_1 + 0x164) = *(int *)(param_1 + 0x164) + -1;
    *(undefined8 **)(param_1 + 0x150) = puVar1;
    puVar2 = puVar1;
  }
  while (puVar1 = puVar2, puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    if ((puVar1 < *(undefined8 **)(param_1 + 0x158)) ||
       (*(undefined8 **)(param_1 + 0x158) + (ulonglong)*(uint *)(param_1 + 0x160) * 3 <= puVar1)) {
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar1);
    }
  }
  if (*(void **)(param_1 + 0x158) != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x158));
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  while (puVar2 = *(undefined8 **)(param_1 + 0x118), puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x118) = *puVar2;
    if (puVar2 == *(undefined8 **)(param_1 + 0x120)) {
      *(undefined8 *)(param_1 + 0x120) = 0;
    }
    *puVar2 = *(undefined8 *)(param_1 + 0x128);
    *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + -1;
    *(undefined8 **)(param_1 + 0x128) = puVar2;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x128);
  while (puVar1 = puVar2, puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    if ((puVar1 < *(undefined8 **)(param_1 + 0x130)) ||
       (*(undefined8 **)(param_1 + 0x130) + (ulonglong)*(uint *)(param_1 + 0x138) * 4 <= puVar1)) {
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar1);
    }
  }
  if (*(void **)(param_1 + 0x130) != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x130));
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  CAkMultiPlayNode::Term(param_1);
  return;
}



// FUNCTION 1431b4690 FUN_1431b4690 body=332 status=ok
// SIG undefined FUN_1431b4690(void)

void FUN_1431b4690(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  int *piVar4;
  int iVar5;
  
  if (param_2 == 0) {
    puVar3 = *(undefined8 **)(param_1 + 200);
    if (puVar3 != puVar3 + *(uint *)(param_1 + 0xd0)) {
      do {
        (**(code **)(*(longlong *)*puVar3 + 0x140))((longlong *)*puVar3,0);
        puVar3 = puVar3 + 1;
      } while (puVar3 != (undefined8 *)
                         (*(longlong *)(param_1 + 200) + (ulonglong)*(uint *)(param_1 + 0xd0) * 8));
      return;
    }
  }
  else {
    piVar2 = (int *)FUN_1431b2640();
    if ((*piVar2 != 0) && (iVar5 = *piVar2 + -1, *piVar2 = iVar5, iVar5 == 0)) {
      puVar3 = (undefined8 *)
               FUN_1431c52c0(param_1 + 0xf0,*(undefined4 *)(param_1 + 0x10c),
                             *(undefined4 *)(param_1 + 0x108),param_2);
      if (puVar3 != (undefined8 *)0x0) {
        for (puVar1 = *(undefined8 **)(param_1 + 0x118); puVar1 != (undefined8 *)0x0;
            puVar1 = (undefined8 *)*puVar1) {
          piVar4 = (int *)*puVar3;
          piVar2 = piVar4 + *(uint *)(puVar3 + 1);
          if (piVar4 != piVar2) {
            do {
              if (*piVar4 == *(int *)(puVar1 + 1)) break;
              piVar4 = piVar4 + 1;
            } while (piVar4 != piVar2);
            if (piVar4 != piVar2) {
              FUN_1431b47e0(param_1,puVar1 + 2,param_2);
            }
          }
          if (*(int *)(puVar1 + 1) == *(int *)(param_1 + 0x110)) {
            FUN_1431b47e0(param_1,puVar1 + 2,param_2);
          }
        }
      }
      FUN_1431c53b0(param_1 + 0xf0,*(undefined4 *)(param_1 + 0x10c),*(undefined4 *)(param_1 + 0x108)
                    ,param_2);
    }
  }
  return;
}



// FUNCTION 1431b47e0 FUN_1431b47e0 body=80 status=ok
// SIG undefined FUN_1431b47e0(void)

void FUN_1431b47e0(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_2;
  if (puVar1 != puVar1 + *(uint *)(param_2 + 1)) {
    do {
      FUN_143179790(*puVar1,param_3);
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined4 *)(*param_2 + (ulonglong)*(uint *)(param_2 + 1) * 4));
  }
  return;
}



// FUNCTION 1431b4840 `scalar_deleting_destructor' body=242 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkLayerCntr::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = (undefined8 *)param_1[0x1d];
  *param_1 = &PTR__scalar_deleting_destructor__145acd850;
  uVar3 = 0;
  param_1[3] = &PTR_LAB_145acdab8;
  param_1[6] = &PTR_PushParamUpdate_145ac7228;
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x1e);
  if (puVar1 + *(uint *)(param_1 + 0x1e) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      FUN_143193f00(*puVar1,0);
      (**(code **)(*(longlong *)*puVar1 + 0x10))();
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  if ((void *)param_1[0x1d] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x1e) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[0x1d]);
    param_1[0x1d] = 0;
    *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  }
  param_1[0x20] = 0;
  CAkMultiPlayNode::Term(param_1);
  CAkMultiPlayNode::~CAkMultiPlayNode(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 1431b4940 AddChild body=184 status=ok
// SIG undefined AddChild(void)

ulonglong CAkLayerCntr::AddChild(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if ((int)param_2 == 0) {
    return 0xe;
  }
  lVar1 = CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,param_2,0);
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
    uVar3 = uVar2;
    if ((int)uVar2 == 1) {
      puVar4 = (undefined8 *)param_1[0x1d];
      uVar6 = 0;
      uVar5 = (ulonglong)*(uint *)(param_1 + 0x1e);
      if (puVar4 + *(uint *)(param_1 + 0x1e) < puVar4) {
        uVar5 = uVar6;
      }
      if (uVar5 != 0) {
        do {
          FUN_143194260(*puVar4,param_2 & 0xffffffff);
          uVar6 = uVar6 + 1;
          puVar4 = puVar4 + 1;
          uVar3 = uVar2 & 0xffffffff;
        } while (uVar6 != uVar5);
      }
    }
    return uVar3;
  }
  return 0xf;
}



// FUNCTION 1431b4a00 FUN_1431b4a00 body=197 status=ok
// SIG undefined FUN_1431b4a00(void)

undefined8 * FUN_1431b4a00(longlong *param_1,undefined8 param_2)

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
LAB_1431b4a90:
    uVar2 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar2 + 1;
    puVar5 = (undefined8 *)(*param_1 + (ulonglong)uVar2 * 8);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = param_2;
    }
  }
  else {
    uVar1 = *(uint *)((longlong)param_1 + 0xc) + 4;
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
      if (uVar2 < uVar1) goto LAB_1431b4a90;
    }
    puVar5 = (undefined8 *)0x0;
  }
  return puVar5;
}



// FUNCTION 1431b4ad0 Create body=172 status=ok
// SIG undefined Create(void)

longlong * CAkLayerCntr::Create(undefined4 param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x110);
  if (plVar2 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  CAkMultiPlayNode::CAkMultiPlayNode(plVar2,param_1);
  *plVar2 = (longlong)&PTR__scalar_deleting_destructor__145acd850;
  plVar2[3] = (longlong)&PTR_LAB_145acdab8;
  plVar2[6] = (longlong)&PTR_PushParamUpdate_145ac7228;
  plVar2[0x1d] = 0;
  plVar2[0x1e] = 0;
  plVar2[0x20] = 0;
  *(undefined1 *)(plVar2 + 0x21) = 0;
  iVar1 = CAkMultiPlayNode::Init(plVar2);
  if (iVar1 != 1) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    return (longlong *)0x0;
  }
  return plVar2;
}



// FUNCTION 1431b4b80 FUN_1431b4b80 body=150 status=ok
// SIG undefined FUN_1431b4b80(void)

void FUN_1431b4b80(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  
  CAkLayerCntr::ExecuteActionInternal();
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



// FUNCTION 1431b4c20 ExecuteActionExcept body=341 status=ok
// SIG undefined ExecuteActionExcept(void)

void CAkLayerCntr::ExecuteActionExcept(longlong param_1,int *param_2)

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
    StopContInst(param_1,*(undefined8 *)(param_2 + 2),param_2[4]);
  }
  else if (iVar1 == 1) {
    iVar1 = param_2[4];
    lVar7 = *(longlong *)(param_2 + 2);
    for (puVar2 = *(undefined8 **)(param_1 + 0x100); puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)*puVar2) {
      if (((lVar7 == 0) || (lVar7 == puVar2[1])) &&
         ((iVar1 == 0 || (*(int *)((longlong)puVar2 + 0x4c) == iVar1)))) {
        *(undefined4 *)(puVar2 + 10) = 1;
      }
    }
  }
  else if (iVar1 == 2) {
    iVar1 = param_2[4];
    lVar7 = *(longlong *)(param_2 + 2);
    for (puVar2 = *(undefined8 **)(param_1 + 0x100); puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)*puVar2) {
      if (((lVar7 == 0) || (lVar7 == puVar2[1])) &&
         ((iVar1 == 0 || (*(int *)((longlong)puVar2 + 0x4c) == iVar1)))) {
        *(undefined4 *)(puVar2 + 10) = 0;
      }
    }
  }
  if ((*(char *)((longlong)param_2 + 0x23) == '\0') || (*(char *)((longlong)param_2 + 0x21) == '\0')
     ) goto LAB_1431b4cf1;
  iVar1 = *param_2;
  if (iVar1 == 0) {
LAB_1431b4ce6:
    uVar5 = 0;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) goto LAB_1431b4cf1;
      goto LAB_1431b4ce6;
    }
    uVar5 = 1;
  }
  CAkStateAware::PauseTransitions(param_1 + 0x18,uVar5);
LAB_1431b4cf1:
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



// FUNCTION 1431b4d80 ExecuteActionInternal body=151 status=ok
// SIG undefined ExecuteActionInternal(void)

void CAkLayerCntr::ExecuteActionInternal(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
LAB_1431b4d9d:
    StopContInst(param_1,*(undefined8 *)(param_2 + 2),param_2[4]);
    return;
  }
  if (iVar1 == 1) {
    plVar3 = *(longlong **)(param_1 + 0x100);
    iVar1 = param_2[4];
    lVar2 = *(longlong *)(param_2 + 2);
    if (plVar3 != (longlong *)0x0) {
      do {
        if (((lVar2 == 0) || (lVar2 == plVar3[1])) &&
           ((iVar1 == 0 || (*(int *)((longlong)plVar3 + 0x4c) == iVar1)))) {
          *(undefined4 *)(plVar3 + 10) = 1;
        }
        plVar3 = (longlong *)*plVar3;
      } while (plVar3 != (longlong *)0x0);
      return;
    }
  }
  else if (iVar1 == 2) {
    plVar3 = *(longlong **)(param_1 + 0x100);
    iVar1 = param_2[4];
    lVar2 = *(longlong *)(param_2 + 2);
    if (plVar3 != (longlong *)0x0) {
      do {
        if (((lVar2 == 0) || (lVar2 == plVar3[1])) &&
           ((iVar1 == 0 || (*(int *)((longlong)plVar3 + 0x4c) == iVar1)))) {
          *(undefined4 *)(plVar3 + 10) = 0;
        }
        plVar3 = (longlong *)*plVar3;
      } while (plVar3 != (longlong *)0x0);
      return;
    }
  }
  else if (iVar1 == 3) goto LAB_1431b4d9d;
  return;
}



// FUNCTION 1431b4e20 ExecuteActionNoPropagate body=75 status=ok
// SIG undefined ExecuteActionNoPropagate(void)

void CAkLayerCntr::ExecuteActionNoPropagate(longlong param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  ExecuteActionInternal();
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
      goto LAB_1431b4e53;
    }
    if (iVar1 != 2) {
      return;
    }
  }
  uVar2 = 0;
LAB_1431b4e53:
  CAkStateAware::PauseTransitions(param_1 + 0x18,uVar2);
  return;
}



// FUNCTION 1431b4e70 NotifyEndContinuous body=153 status=ok
// SIG undefined NotifyEndContinuous(void)

void CAkLayerCntr::NotifyEndContinuous(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  
  CAkPlayingMgr::RemoveItemActiveCount(DAT_146b50b00,*(undefined4 *)(param_2 + 0x4c));
  (**(code **)(*param_1 + 0x130))(param_1,1);
  FUN_143177a90(param_1);
  puVar2 = *(undefined8 **)(param_2 + 8);
  piVar1 = (int *)(puVar2 + 10);
  *piVar1 = *piVar1 + -1;
  lVar3 = g_DefaultPoolId;
  if (*piVar1 == 0) {
    (**(code **)*puVar2)(puVar2,0);
    AK::MemoryMgr::Free(lVar3,puVar2);
  }
  if (*(void **)(param_2 + 0x58) != (void *)0x0) {
    *(undefined4 *)(param_2 + 0x60) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_2 + 0x58));
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined4 *)(param_2 + 100) = 0;
  }
  FUN_1431aceb0(param_2 + 0x68);
  return;
}



// FUNCTION 1431b4f10 FUN_1431b4f10 body=273 status=ok
// SIG undefined FUN_1431b4f10(void)

void FUN_1431b4f10(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x100);
  if (plVar3 != (longlong *)0x0) {
    do {
      if (plVar3 != (longlong *)0x0) {
        *(longlong *)(param_1 + 0x100) = *plVar3;
      }
      CAkLayerCntr::NotifyEndContinuous(param_1,plVar3);
      FUN_1431aceb0(plVar3 + 0xd);
      plVar1 = (longlong *)0x0;
      plVar2 = DAT_146b52020;
      if (plVar3[7] != 0) {
        AkExternalSourceArray::Release();
        plVar2 = DAT_146b52020;
      }
      for (; (plVar2 != (longlong *)0x0 && ((plVar3 < plVar2 || (plVar2 + 0x780 <= plVar3))));
          plVar2 = (longlong *)plVar2[0x780]) {
        plVar1 = plVar2;
      }
      if (plVar2[0x782] == 0) {
        plVar2[0x782] = (longlong)plVar3;
        *plVar3 = 0;
      }
      else {
        *plVar3 = plVar2[0x782];
        plVar2[0x782] = (longlong)plVar3;
      }
      *(int *)(plVar2 + 0x781) = (int)plVar2[0x781] + 1;
      if ((int)plVar2[0x781] == 0x80) {
        plVar3 = (longlong *)plVar2[0x780];
        if (plVar2 != DAT_146b52020) {
          plVar1[0x780] = plVar2[0x780];
          plVar3 = DAT_146b52020;
        }
        DAT_146b52020 = plVar3;
        AK::MemoryMgr::Free(g_DefaultPoolId,plVar2);
      }
      plVar3 = *(longlong **)(param_1 + 0x100);
    } while (plVar3 != (longlong *)0x0);
  }
  CAkStateAware::FlushStateTransitions(param_1 + 0x18);
  return;
}



// FUNCTION 1431b5030 FUN_1431b5030 body=2833 status=ok
// SIG undefined FUN_1431b5030(void)

int FUN_1431b5030(longlong *param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  ulonglong *puVar3;
  uint *puVar4;
  char cVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  int iVar8;
  void *pvVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  undefined8 *puVar15;
  int *piVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong *plVar19;
  int iVar20;
  bool bVar21;
  uint *local_res10;
  uint local_res18 [2];
  int local_res20;
  undefined4 uStackX_24;
  undefined4 local_258 [2];
  ulonglong local_250;
  longlong *local_248;
  ulonglong local_240;
  ulonglong *local_238;
  ulonglong local_230;
  ulonglong uStack_228;
  ulonglong local_220;
  undefined8 uStack_218;
  uint local_210;
  uint uStack_20c;
  ulonglong uStack_208;
  uint local_1f8 [2];
  longlong *local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  int *local_1d8;
  undefined8 local_1d0;
  uint local_1c8;
  uint local_1c4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  uint local_190;
  uint uStack_18c;
  uint uStack_188;
  uint uStack_184;
  undefined8 local_180;
  uint local_178;
  uint local_174;
  ulonglong *local_170;
  uint local_168;
  uint local_164;
  undefined4 local_160;
  undefined8 local_158;
  undefined1 local_150 [136];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  uint local_88;
  undefined8 local_80;
  undefined8 local_78;
  byte local_70;
  ulonglong *local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  
  iVar8 = 1;
  local_res20 = 1;
  local_res10 = param_2;
  FUN_14317e410(param_2,param_1);
  local_res18[0] = *param_2;
  if ((char)param_1[0x21] == '\0') {
    SafeContinuationList::SafeContinuationList(&local_res20,param_2,param_1);
    local_238 = (ulonglong *)(ulonglong)*(uint *)(param_1 + 0x1a);
    iVar14 = 0;
    puVar15 = (undefined8 *)param_1[0x19];
    iVar20 = 0;
    if (puVar15 != puVar15 + (longlong)local_238) {
      do {
        local_1f8[0] = *param_2;
        plVar17 = (longlong *)*puVar15;
        local_1f0 = *(longlong **)(param_2 + 2);
        local_1e8 = *(undefined8 *)(param_2 + 4);
        local_1e0 = *(undefined8 *)(param_2 + 6);
        local_1c4 = param_2[0xd];
        local_1d0 = *(undefined8 *)(param_2 + 10);
        local_1c8 = param_2[0xc];
        local_1d8 = *(int **)(param_2 + 8);
        if (local_1d8 != (int *)0x0) {
          *local_1d8 = *local_1d8 + 1;
        }
        local_1c0 = *(undefined8 *)(param_2 + 0xe);
        uStack_1b8 = *(undefined8 *)(param_2 + 0x10);
        local_178 = param_2[0x20];
        local_1b0 = *(undefined8 *)(param_2 + 0x12);
        uStack_1a8 = *(undefined8 *)(param_2 + 0x14);
        local_174 = param_2[0x21];
        local_170 = *(ulonglong **)(param_2 + 0x22);
        local_168 = param_2[0x24];
        local_164 = param_2[0x25];
        local_1a0 = *(undefined8 *)(param_2 + 0x16);
        uStack_198 = *(undefined8 *)(param_2 + 0x18);
        local_160 = param_2[0x26];
        local_158 = *(undefined8 *)(param_2 + 0x28);
        local_90 = *(undefined8 *)(param_2 + 0x5a);
        local_180 = *(undefined8 *)(param_2 + 0x1e);
        local_80 = *(undefined8 *)(param_2 + 0x5e);
        local_190 = param_2[0x1a];
        uStack_18c = param_2[0x1b];
        uStack_188 = param_2[0x1c];
        uStack_184 = param_2[0x1d];
        local_b8 = 0;
        uStack_b0 = 0;
        local_88 = param_2[0x5c];
        local_c8 = 0;
        local_c0 = 0;
        local_a8 = 0;
        local_a0 = 0;
        local_98 = 0;
        FUN_1431b1ce0(local_150,param_2 + 0x2a);
        uVar2 = local_1c4;
        local_78 = *(undefined8 *)(param_2 + 0x60);
        local_70 = (local_70 ^ (byte)param_2[0x62]) & 0xf ^ local_70;
        if (local_res18[0] == 0) {
          if (((char)local_160 == -0x70) && (local_160._3_1_ != '\0')) {
            local_res10 = (uint *)(CONCAT71(local_res10._1_7_,local_70) & 0xffffffffffffff01);
            uVar7 = AkPBIParams::GetMidiTargetID(local_1f8);
            iVar8 = CAkParameterNode::FilterAndTransformMidiEvent
                              (plVar17,&local_160,uVar7,&local_res10,local_1e8,uVar2);
            if (iVar8 != 1) goto LAB_1431b5a8d;
            local_70 = local_70 ^ (local_70 ^ (byte)local_res10) & 1;
          }
          iVar8 = FUN_1431a35f0(plVar17,local_1f8);
          if (iVar8 == 3) {
            iVar8 = 1;
          }
          else if (iVar8 == 1) {
            iVar8 = (**(code **)(*plVar17 + 0x238))(plVar17,local_1f8);
          }
        }
        else {
          AkContParamsAndPath::AkContParamsAndPath(&local_230,local_170);
          if ((int)local_238 == 1) {
            FUN_1431c43d0(param_1,local_170[3],&uStack_218);
LAB_1431b5a5e:
            local_170 = &local_230;
            iVar8 = FUN_14315d810(plVar17,local_1f8);
          }
          else {
            local_168 = 0;
            uVar13 = CAkContinuationList::Create();
            bVar21 = uStack_218 != 0;
            uStack_218 = uVar13;
            if (bVar21) {
              CAkContinuationList::Release();
            }
            if (uStack_218 == 0) {
              iVar8 = 0x34;
            }
            else {
              iVar8 = FUN_1431c4140(param_1,&local_230,local_1f8,&local_res20);
              if (iVar8 == 1) goto LAB_1431b5a5e;
            }
          }
          AkContParamsAndPath::~AkContParamsAndPath(&local_230);
        }
LAB_1431b5a8d:
        iVar20 = iVar14 + 1;
        if (iVar8 != 1) {
          iVar20 = iVar14;
        }
        AkInitialSoundParams::DoTerm(local_150);
        if (local_1d8 != (int *)0x0) {
          AkExternalSourceArray::Release();
        }
        puVar15 = puVar15 + 1;
        iVar14 = iVar20;
      } while (puVar15 != (undefined8 *)(param_1[0x19] + (ulonglong)*(uint *)(param_1 + 0x1a) * 8));
      if (iVar20 != 0) {
        iVar8 = 1;
      }
    }
    if (local_res18[0] != 0) {
      if (iVar20 == 0) {
        iVar8 = FUN_1431c46c0(param_1,param_2);
      }
      else {
        if (CONCAT44(uStackX_24,local_res20) == 0) {
          return iVar8;
        }
        iVar8 = CAkMultiPlayNode::ContUnrefList(param_1);
      }
    }
    if (CONCAT44(uStackX_24,local_res20) != 0) {
      CAkContinuationList::Release();
    }
  }
  else {
    cVar5 = (**(code **)(*param_1 + 0x128))(param_1,1);
    if (cVar5 == '\0') {
      (**(code **)(*param_1 + 0x130))(param_1,1);
      iVar8 = 2;
    }
    else {
      FUN_143173d90(param_1);
      uVar13 = 0;
      for (pvVar9 = DAT_146b52020; pvVar9 != (void *)0x0;
          pvVar9 = *(void **)((longlong)pvVar9 + 0x3c00)) {
        if (*(longlong *)((longlong)pvVar9 + 0x3c10) != 0) goto LAB_1431b5129;
      }
      pvVar9 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x3c18);
      if (pvVar9 != (void *)0x0) {
        AkDynaBlkPool<CAkSwitchCntr::SwitchContPlaybackItem,128,AkArrayAllocatorNoAlign<0>_>::
        PoolChunk::PoolChunk(pvVar9);
        if (DAT_146b52020 == (void *)0x0) {
          DAT_146b52020 = pvVar9;
          *(undefined8 *)((longlong)pvVar9 + 0x3c00) = 0;
        }
        else {
          *(void **)((longlong)pvVar9 + 0x3c00) = DAT_146b52020;
          DAT_146b52020 = pvVar9;
        }
LAB_1431b5129:
        puVar3 = *(ulonglong **)((longlong)pvVar9 + 0x3c10);
        local_68 = puVar3;
        if (puVar3 != (ulonglong *)0x0) {
          uVar10 = *puVar3;
          if (*puVar3 == 0) {
            uVar10 = uVar13;
          }
          *(ulonglong *)((longlong)pvVar9 + 0x3c10) = uVar10;
          *(int *)((longlong)pvVar9 + 0x3c08) = *(int *)((longlong)pvVar9 + 0x3c08) + -1;
          if (puVar3 != (ulonglong *)0x0) {
            puVar3[1] = 0;
            local_238 = puVar3 + 0xb;
            *(undefined4 *)(puVar3 + 2) = 0;
            *(undefined4 *)(puVar3 + 3) = 0;
            *(undefined1 *)(puVar3 + 4) = 0xff;
            *(undefined1 *)(puVar3 + 5) = 0xff;
            puVar3[6] = 0;
            puVar3[9] = 0;
            puVar3[8] = 0;
            puVar3[7] = 0;
            *local_238 = 0;
            puVar3[0xc] = 0;
            FUN_141713660(puVar3 + 0xd);
            if (param_1[0x20] == 0) {
              param_1[0x20] = (longlong)puVar3;
              *puVar3 = 0;
            }
            else {
              *puVar3 = param_1[0x20];
              param_1[0x20] = (longlong)puVar3;
            }
            *(uint *)(puVar3 + 2) = param_2[0xd];
            uVar10 = *(ulonglong *)(param_2 + 4);
            puVar3[1] = uVar10;
            if ((((char)param_2[0x26] + 0x80U & 0xcf) == 0) && ((char)param_2[0x26] != -0x50)) {
              uVar6 = *(undefined1 *)((longlong)param_2 + 0x9a);
            }
            else {
              uVar6 = 0xff;
            }
            *(undefined1 *)(puVar3 + 4) = *(undefined1 *)((longlong)param_2 + 0x99);
            *(undefined1 *)(puVar3 + 5) = uVar6;
            if (((char)param_2[0x26] != '\0') && (*(longlong *)(param_2 + 2) != 0)) {
              *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(*(longlong *)(param_2 + 2) + 0x10);
            }
            piVar1 = (int *)(uVar10 + 0x50);
            *piVar1 = *piVar1 + 1;
            UserParams::operator=(puVar3 + 7,param_2 + 8);
            *(uint *)(puVar3 + 10) = param_2[0x20];
            CAkPlayingMgr::AddItemActiveCount(DAT_146b50b00,param_2[0xd]);
            puVar15 = (undefined8 *)param_1[0x1d];
            uVar10 = (ulonglong)*(uint *)(param_1 + 0x1e);
            if (puVar15 + *(uint *)(param_1 + 0x1e) < puVar15) {
              uVar10 = uVar13;
            }
            uVar18 = uVar13;
            if (uVar10 != 0) {
              do {
                local_60 = *puVar15;
                uStack_228 = CONCAT44(uStack_228._4_4_,param_2[0x26]);
                local_220 = *(ulonglong *)(param_2 + 0x28);
                local_50 = 4;
                local_230 = 0;
                uStack_218 = 0;
                local_210 = 0;
                uStack_20c = 1;
                uStack_208 = 0;
                local_58 = param_1;
                uVar7 = AkPBIParams::GetMidiTargetID(param_2);
                local_230 = *(ulonglong *)(param_2 + 4);
                local_210 = param_2[0x21];
                uStack_218 = CONCAT44(param_2[0xd],uVar7);
                uStack_20c = (byte)((byte)param_2[0x62] >> 1) & 1;
                uStack_208 = 0;
                CAkModulatorMgr::Trigger(DAT_146b50ae0,&local_60,&local_230,puVar3 + 0xd);
                uVar18 = uVar18 + 1;
                puVar15 = puVar15 + 1;
                iVar8 = local_res20;
              } while (uVar18 != uVar10);
            }
            puVar15 = (undefined8 *)param_1[0x19];
            if (puVar15 == puVar15 + *(uint *)(param_1 + 0x1a)) {
              return iVar8;
            }
            do {
              puVar3 = local_68;
              plVar17 = (longlong *)param_1[0x1d];
              plVar19 = (longlong *)*puVar15;
              local_res18[0] = 0;
              local_250 = 0;
              uVar10 = (ulonglong)*(uint *)(param_1 + 0x1e);
              if (plVar17 + *(uint *)(param_1 + 0x1e) < plVar17) {
                uVar10 = uVar13;
              }
              uVar18 = uVar13;
              iVar20 = 0;
              local_248 = plVar19;
              local_240 = uVar10;
              if (uVar10 != 0) {
                do {
                  lVar12 = *plVar17;
                  uVar2 = *(uint *)(lVar12 + 0x38);
                  if (uVar2 != 0) {
                    piVar16 = *(int **)(lVar12 + 0x18);
                    piVar1 = piVar16 + (ulonglong)*(uint *)(lVar12 + 0x20) * 0xc;
                    for (; (piVar16 != piVar1 && (*piVar16 != (int)plVar19[2]));
                        piVar16 = piVar16 + 0xc) {
                    }
                    if (piVar16 ==
                        (int *)(*(longlong *)(lVar12 + 0x18) +
                               (ulonglong)*(uint *)(lVar12 + 0x20) * 0x30)) {
                      uVar18 = (ulonglong)local_res18[0];
                      uVar10 = local_240;
                    }
                    else {
                      local_230 = puVar3[1];
                      uStack_228 = puVar3[2];
                      local_220 = puVar3[3];
                      uStack_218 = puVar3[4];
                      local_210 = (uint)puVar3[5];
                      uStack_20c = *(uint *)((longlong)puVar3 + 0x2c);
                      uStack_208 = puVar3[6];
                      if (*(uint *)(g_pRTPCMgr + 8) != 0) {
                        for (puVar4 = *(uint **)(*(longlong *)g_pRTPCMgr +
                                                ((ulonglong)uVar2 %
                                                (ulonglong)*(uint *)(g_pRTPCMgr + 8)) * 8);
                            puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 2)) {
                          if (*puVar4 == uVar2) {
                            if (puVar4 != (uint *)0x0) {
                              puVar11 = (undefined4 *)
                                        AkRTPCNestedSearchTree<AkRTPCKey,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidPlayingID,AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*,GetNullPbiPtr>,AkRTPCValue>_>_>_>_>_>
                                        ::FindBestMatch(puVar4 + 8,&local_230);
                              if (puVar11 == (undefined4 *)0x0) goto LAB_1431b5464;
                              local_258[0] = *puVar11;
                              goto LAB_1431b54a8;
                            }
                            break;
                          }
                        }
                      }
                      cVar5 = CurrentValue::GetModulatorValue(uVar2,&local_230,local_258);
                      if (cVar5 == '\0') {
LAB_1431b5464:
                        local_258[0] = CAkRTPCMgr::GetDefaultValue(g_pRTPCMgr,uVar2,0);
                      }
LAB_1431b54a8:
                      cVar5 = FUN_143193270(piVar16 + 2,local_258[0]);
                      uVar18 = (ulonglong)local_res18[0];
                      uVar10 = local_240;
                      plVar19 = local_248;
                      if (cVar5 != '\0') {
                        local_res18[0] = local_res18[0] + 1;
                        uVar18 = (ulonglong)local_res18[0];
                      }
                    }
                  }
                  iVar20 = (int)uVar18;
                  local_250 = local_250 + 1;
                  plVar17 = plVar17 + 1;
                  param_2 = local_res10;
                } while (local_250 != uVar10);
              }
              lVar12 = FUN_1431b5c70(local_238,(int)plVar19[2],&local_res20);
              iVar14 = 0;
              if (lVar12 != 0) {
                *(int *)(lVar12 + 4) = iVar20;
                iVar14 = iVar20;
              }
              if (iVar14 == 0) {
                local_1f8[0] = *param_2;
                local_1f0 = *(longlong **)(param_2 + 2);
                local_1e8 = *(undefined8 *)(param_2 + 4);
                local_1e0 = *(undefined8 *)(param_2 + 6);
                local_1c4 = param_2[0xd];
                local_1d0 = *(undefined8 *)(param_2 + 10);
                local_1c8 = param_2[0xc];
                local_1d8 = *(int **)(param_2 + 8);
                if (local_1d8 != (int *)0x0) {
                  *local_1d8 = *local_1d8 + 1;
                }
                local_1c0 = *(undefined8 *)(param_2 + 0xe);
                uStack_1b8 = *(undefined8 *)(param_2 + 0x10);
                local_178 = param_2[0x20];
                local_1b0 = *(undefined8 *)(param_2 + 0x12);
                uStack_1a8 = *(undefined8 *)(param_2 + 0x14);
                local_174 = param_2[0x21];
                local_170 = *(ulonglong **)(param_2 + 0x22);
                local_168 = param_2[0x24];
                local_164 = param_2[0x25];
                local_1a0 = *(undefined8 *)(param_2 + 0x16);
                uStack_198 = *(undefined8 *)(param_2 + 0x18);
                local_160 = param_2[0x26];
                local_158 = *(undefined8 *)(param_2 + 0x28);
                local_180 = *(undefined8 *)(param_2 + 0x1e);
                local_90 = *(undefined8 *)(param_2 + 0x5a);
                local_190 = param_2[0x1a];
                uStack_18c = param_2[0x1b];
                uStack_188 = param_2[0x1c];
                uStack_184 = param_2[0x1d];
                local_80 = *(undefined8 *)(param_2 + 0x5e);
                local_b8 = 0;
                uStack_b0 = 0;
                local_88 = param_2[0x5c];
                local_c8 = 0;
                local_c0 = 0;
                local_a8 = 0;
                local_a0 = 0;
                local_98 = 0;
                FUN_1431b1ce0(local_150);
                uVar2 = local_1c4;
                local_78 = *(undefined8 *)(param_2 + 0x60);
                local_70 = ((byte)param_2[0x62] ^ local_70) & 0xf ^ local_70;
                local_1f8[0] = 0;
                local_170 = (ulonglong *)0x0;
                local_168 = 0;
                plVar17 = local_248;
                local_1f0 = param_1;
                if (((char)local_160 == -0x70) && (local_160._3_1_ != '\0')) {
                  local_res18[0] = CONCAT31(local_res18[0]._1_3_,local_70) & 0xffffff01;
                  uVar7 = AkPBIParams::GetMidiTargetID(local_1f8);
                  plVar17 = local_248;
                  iVar8 = CAkParameterNode::FilterAndTransformMidiEvent
                                    (local_248,&local_160,uVar7,local_res18,local_1e8,uVar2);
                  if (iVar8 == 1) {
                    local_70 = local_70 ^ (local_70 ^ (byte)local_res18[0]) & 1;
                    goto LAB_1431b5709;
                  }
                }
                else {
LAB_1431b5709:
                  iVar8 = FUN_1431a35f0(plVar17,local_1f8);
                  if (iVar8 == 3) {
                    iVar8 = 1;
                  }
                  else if (iVar8 == 1) {
                    iVar8 = (**(code **)(*plVar17 + 0x238))(plVar17,local_1f8);
                  }
                }
                AkInitialSoundParams::DoTerm(local_150);
                if (local_1d8 != (int *)0x0) {
                  AkExternalSourceArray::Release();
                }
              }
              puVar15 = puVar15 + 1;
              if (puVar15 ==
                  (undefined8 *)(param_1[0x19] + (ulonglong)*(uint *)(param_1 + 0x1a) * 8)) {
                return iVar8;
              }
            } while( true );
          }
        }
      }
      (**(code **)(*param_1 + 0x130))(param_1,1);
      FUN_143177a90(param_1);
      iVar8 = 2;
    }
  }
  return iVar8;
}



// FUNCTION 1431b5b50 FUN_1431b5b50 body=275 status=ok
// SIG undefined FUN_1431b5b50(void)

void FUN_1431b5b50(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  
  puVar8 = (undefined8 *)param_1[0x1d];
  iVar4 = 0;
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x1e);
  uVar6 = 0;
  if (puVar8 + uVar5 < puVar8) {
    uVar5 = 0;
  }
  if (uVar5 != 0) {
    do {
      FUN_143194190(*puVar8,(int)param_2[2]);
      uVar6 = uVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar6 != uVar5);
  }
  if ((longlong *)param_2[0x10] == param_1) {
    (**(code **)(*param_2 + 0x30))(param_2,0);
    uVar10 = *(uint *)(param_1 + 0x1a);
    iVar7 = uVar10 - 1;
    if (-1 < iVar7) {
      lVar3 = param_1[0x19];
      do {
        iVar2 = (iVar7 - iVar4) / 2 + iVar4;
        puVar8 = (undefined8 *)(lVar3 + (longlong)iVar2 * 8);
        uVar1 = *(uint *)(*(longlong *)(lVar3 + (longlong)iVar2 * 8) + 0x10);
        if (uVar1 <= *(uint *)(param_2 + 2)) {
          if (uVar1 < *(uint *)(param_2 + 2)) {
            iVar4 = iVar2 + 1;
            goto LAB_1431b5c05;
          }
          puVar9 = (undefined8 *)(lVar3 + ((ulonglong)uVar10 - 1) * 8);
          if (puVar8 < puVar9) {
            lVar3 = ((ulonglong)((longlong)puVar9 + (-1 - (longlong)puVar8)) >> 3) + 1;
            puVar9 = puVar8;
            for (; puVar8 = puVar8 + 1, lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar9 = *puVar8;
              puVar9 = puVar9 + 1;
            }
            uVar10 = *(uint *)(param_1 + 0x1a);
          }
          *(uint *)(param_1 + 0x1a) = uVar10 - 1;
          break;
        }
        iVar7 = iVar2 + -1;
LAB_1431b5c05:
      } while (iVar4 <= iVar7);
    }
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  return;
}



// FUNCTION 1431b5c70 FUN_1431b5c70 body=330 status=ok
// SIG undefined FUN_1431b5c70(void)

uint * FUN_1431b5c70(longlong *param_1,uint param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  
  iVar10 = 0;
  iVar11 = (int)param_1[1] + -1;
  if (-1 < iVar11) {
    do {
      iVar5 = (iVar11 - iVar10) / 2 + iVar10;
      uVar2 = *(uint *)((longlong)iVar5 * 8 + *param_1);
      if (param_2 < uVar2) {
        iVar11 = iVar5 + -1;
      }
      else {
        if (param_2 <= uVar2) {
          *param_3 = 1;
          return (uint *)(*param_1 + (longlong)iVar5 * 8);
        }
        iVar10 = iVar5 + 1;
      }
    } while (iVar10 <= iVar11);
  }
  *param_3 = 0;
  lVar3 = *param_1;
  if (lVar3 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = lVar3 + (longlong)iVar10 * 8;
  }
  uVar2 = *(uint *)(param_1 + 1);
  if (lVar8 == 0) {
    if ((*(uint *)((longlong)param_1 + 0xc) <= uVar2) &&
       (cVar4 = FUN_143134440(param_1,1), cVar4 == '\0')) {
      return (uint *)0x0;
    }
    if (*(uint *)((longlong)param_1 + 0xc) <= uVar2) {
      return (uint *)0x0;
    }
    uVar2 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar2 + 1;
    puVar6 = (uint *)(*param_1 + (ulonglong)uVar2 * 8);
  }
  else {
    if (((*(uint *)((longlong)param_1 + 0xc) <= uVar2) &&
        (cVar4 = FUN_143134440(param_1,1), cVar4 == '\0')) ||
       (*(uint *)((longlong)param_1 + 0xc) <= uVar2)) {
      return (uint *)0x0;
    }
    uVar2 = *(uint *)(param_1 + 1);
    lVar9 = *param_1;
    *(uint *)(param_1 + 1) = uVar2 + 1;
    puVar7 = (undefined8 *)(lVar9 + (ulonglong)uVar2 * 8);
    lVar3 = (lVar8 - lVar3 >> 3 & 0xffffffffU) * 8;
    if ((undefined8 *)(lVar3 + lVar9) < puVar7) {
      do {
        puVar1 = puVar7 + -1;
        *puVar7 = puVar7[-1];
        lVar9 = *param_1;
        puVar7 = puVar1;
      } while ((undefined8 *)(lVar9 + lVar3) < puVar1);
    }
    puVar6 = (uint *)(lVar3 + lVar9);
  }
  if (puVar6 != (uint *)0x0) {
    *puVar6 = param_2;
  }
  return puVar6;
}



// FUNCTION 1431b5dc0 FUN_1431b5dc0 body=462 status=ok
// SIG undefined FUN_1431b5dc0(void)

int FUN_1431b5dc0(longlong *param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uStackX_c;
  uint *local_res10;
  undefined4 local_res18 [4];
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  iVar4 = (**(code **)(*param_1 + 0x80))();
  if (iVar4 != 5) {
    (**(code **)(*param_1 + 0x80))();
    AK::MemoryMgr::StartProfileThreadUsage((long)DAT_146b50b18);
    return 0x5b;
  }
  local_res10 = local_res10 + 1;
  iVar4 = FUN_143178ad0(param_1,&local_res10,local_res18,0);
  if (iVar4 == 1) {
    uVar8 = 0;
    uVar1 = *local_res10;
    local_res10 = local_res10 + 1;
    if (uVar1 != 0) {
      pvVar5 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 3);
      param_1[0x19] = (longlong)pvVar5;
      if (pvVar5 == (void *)0x0) {
        return 0x34;
      }
      *(uint *)((longlong)param_1 + 0xd4) = uVar1;
      uVar9 = 0;
      if (uVar1 != 0) {
        do {
          uVar3 = uStackX_c;
          uStackX_c = uStackX_c & 0xffffff00;
          uVar2 = *local_res10;
          local_res10 = local_res10 + 1;
          iVar4 = (**(code **)(*param_1 + 0x50))(param_1,CONCAT44(uVar3,uVar2) & 0xffffff00ffffffff)
          ;
          if ((iVar4 != 1) && (iVar4 != 0xf)) break;
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar1);
      }
    }
    if (iVar4 == 1) {
      uVar1 = *local_res10;
      local_res10 = local_res10 + 1;
      if (uVar1 != 0) {
        do {
          plVar6 = (longlong *)CAkLayer::Create(*local_res10);
          if (plVar6 == (longlong *)0x0) {
            iVar4 = 2;
            break;
          }
          FUN_143193f00(plVar6,param_1);
          iVar4 = FUN_143193da0(plVar6,&local_res10,local_res18);
          if (iVar4 != 1) {
LAB_1431b5f51:
            (**(code **)(*plVar6 + 0x10))(plVar6);
            break;
          }
          lVar7 = FUN_1431b4a00(param_1 + 0x1d,plVar6);
          if (lVar7 == 0) {
            iVar4 = 2;
            goto LAB_1431b5f51;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar1);
      }
      *(bool *)(param_1 + 0x21) = (char)*local_res10 != '\0';
    }
  }
  return iVar4;
}



// FUNCTION 1431b5f90 StopContInst body=343 status=ok
// SIG undefined StopContInst(void)

void CAkLayerCntr::StopContInst(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)0x0;
  plVar1 = *(longlong **)(param_1 + 0x100);
  plVar4 = plVar6;
  while (plVar5 = plVar1, plVar5 != (longlong *)0x0) {
    if (((param_2 == 0) || (param_2 == plVar5[1])) &&
       ((param_3 == 0 || (*(int *)((longlong)plVar5 + 0x4c) == param_3)))) {
      plVar1 = (longlong *)*plVar5;
      if (plVar5 == *(longlong **)(param_1 + 0x100)) {
        *(longlong **)(param_1 + 0x100) = plVar1;
      }
      else {
        *plVar4 = (longlong)plVar1;
      }
      NotifyEndContinuous(param_1,plVar5);
      FUN_1431aceb0(plVar5 + 0xd);
      plVar2 = plVar6;
      plVar3 = DAT_146b52020;
      if (plVar5[7] != 0) {
        AkExternalSourceArray::Release();
        plVar3 = DAT_146b52020;
      }
      for (; (plVar3 != (longlong *)0x0 && ((plVar5 < plVar3 || (plVar3 + 0x780 <= plVar5))));
          plVar3 = (longlong *)plVar3[0x780]) {
        plVar2 = plVar3;
      }
      if (plVar3[0x782] == 0) {
        plVar3[0x782] = (longlong)plVar5;
        *plVar5 = 0;
      }
      else {
        *plVar5 = plVar3[0x782];
        plVar3[0x782] = (longlong)plVar5;
      }
      *(int *)(plVar3 + 0x781) = (int)plVar3[0x781] + 1;
      if ((int)plVar3[0x781] == 0x80) {
        plVar5 = (longlong *)plVar3[0x780];
        if (plVar3 != DAT_146b52020) {
          plVar2[0x780] = plVar3[0x780];
          plVar5 = DAT_146b52020;
        }
        DAT_146b52020 = plVar5;
        AK::MemoryMgr::Free(g_DefaultPoolId,plVar3);
      }
    }
    else {
      plVar1 = (longlong *)*plVar5;
      plVar4 = plVar5;
    }
  }
  return;
}



// FUNCTION 1431b60f0 CAkContainerBase body=71 status=ok
// SIG undefined CAkContainerBase(void)

undefined8 * CAkContainerBase::CAkContainerBase(undefined8 *param_1)

{
  CAkParameterNode::CAkParameterNode();
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145acdb38;
  param_1[3] = &PTR_LAB_145accfa0;
  param_1[6] = &PTR_PushParamUpdate_145ac7228;
  return param_1;
}



// FUNCTION 1431b6140 ~CAkContainerBase body=37 status=ok
// SIG undefined ~CAkContainerBase(void)

void CAkContainerBase::~CAkContainerBase(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__145accd40;
  param_1[3] = &PTR_LAB_145accfa0;
  param_1[6] = &PTR_PushParamUpdate_145ac7228;
  CAkParentNode<CAkParameterNode>::~CAkParentNode<CAkParameterNode>();
  return;
}



// FUNCTION 1431b6170 CanAddChild body=168 status=ok
// SIG undefined CanAddChild(void)

undefined4 CAkContainerBase::CanAddChild(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  iVar3 = (**(code **)(*param_2 + 0x80))(param_2);
  sVar2 = (**(code **)(*param_1 + 0x250))(param_1);
  if (sVar2 == -1) {
    uVar4 = 9;
  }
  else if (iVar3 - 2U < 4) {
    if (param_2[0x10] == 0) {
      lVar1 = param_2[2];
      lVar5 = FUN_143145200(param_1 + 0x19,(int)lVar1);
      if (lVar5 == 0) {
        uVar4 = 1;
        if ((int)param_1[2] == (int)lVar1) {
          uVar4 = 0x17;
        }
      }
      else {
        uVar4 = 5;
      }
    }
    else {
      uVar4 = 0x15;
    }
  }
  else {
    uVar4 = 4;
  }
  return uVar4;
}



// FUNCTION 1431b6220 CAkRandomInfo body=58 status=ok
// SIG undefined CAkRandomInfo(void)

undefined8 * CAkRandomInfo::CAkRandomInfo(undefined8 *param_1,ushort param_2)

{
  *(ushort *)(param_1 + 2) = param_2;
  *param_1 = &PTR__scalar_deleting_destructor__145acdd98;
  *(ushort *)((longlong)param_1 + 0x12) = param_2;
  *(uint *)(param_1 + 1) = (uint)param_2 * 50000;
  *(uint *)((longlong)param_1 + 0xc) = (uint)param_2 * 50000;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 1431b6260 CAkSequenceInfo body=27 status=ok
// SIG undefined CAkSequenceInfo(void)

undefined8 * CAkSequenceInfo::CAkSequenceInfo(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145acddc8;
  *(undefined2 *)((longlong)param_1 + 10) = 0xffff;
  return param_1;
}



// FUNCTION 1431b6280 `scalar_deleting_destructor' body=130 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkRandomInfo::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acdd98;
  if ((void *)param_1[5] != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[5]);
  }
  if ((void *)param_1[3] != (void *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[3]);
    param_1[3] = 0;
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  *param_1 = &PTR_FUN_143f74308;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1431b6310 FUN_1431b6310 body=43 status=ok
// SIG undefined FUN_1431b6310(void)

undefined8 * FUN_1431b6310(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f74308;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1431b6340 FUN_1431b6340 body=553 status=ok
// SIG undefined FUN_1431b6340(void)

longlong * FUN_1431b6340(longlong param_1,ushort param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  void *pvVar6;
  void *pvVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined2 *puVar10;
  
  if (param_2 == 0) {
    return (longlong *)0x0;
  }
  plVar5 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x38);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    *(ushort *)(plVar5 + 2) = param_2;
    *plVar5 = (longlong)&PTR__scalar_deleting_destructor__145acdd98;
    *(ushort *)((longlong)plVar5 + 0x12) = param_2;
    *(uint *)(plVar5 + 1) = (uint)param_2 * 50000;
    *(uint *)((longlong)plVar5 + 0xc) = (uint)param_2 * 50000;
    plVar5[3] = 0;
    plVar5[4] = 0;
    plVar5[5] = 0;
    plVar5[6] = 0;
    *(undefined4 *)(plVar5 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)plVar5 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined2 *)(plVar5 + 2) = *(undefined2 *)(param_1 + 0x10);
    *(undefined2 *)((longlong)plVar5 + 0x12) = *(undefined2 *)(param_1 + 0x12);
    if (*(longlong *)(param_1 + 0x28) != 0) {
      uVar9 = param_2 + 7 >> 3;
      uVar3 = uVar9 * 2;
      pvVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar3);
      plVar5[5] = (longlong)pvVar6;
      if (pvVar6 == (void *)0x0) {
LAB_1431b6530:
        (**(code **)(*plVar5 + 8))(plVar5);
        return (longlong *)0x0;
      }
      plVar5[6] = (ulonglong)uVar9 + (longlong)pvVar6;
      _guard_xfg_dispatch_icall_nop(pvVar6,*(void **)(param_1 + 0x28),(ulonglong)uVar3);
    }
    AkArray<unsigned_short,unsigned_short,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkAssignmentMovePolicy<unsigned_short>_>
    ::Reserve(plVar5 + 3,*(undefined4 *)(param_1 + 0x20));
    puVar10 = *(undefined2 **)(param_1 + 0x18);
    if (puVar10 != puVar10 + *(uint *)(param_1 + 0x20)) {
      do {
        uVar2 = *puVar10;
        uVar3 = *(uint *)(plVar5 + 4);
        if (*(uint *)((longlong)plVar5 + 0x24) <= uVar3) {
          uVar9 = *(uint *)((longlong)plVar5 + 0x24) + 1;
          pvVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar9 * 2);
          if (pvVar6 == (void *)0x0) goto LAB_1431b6530;
          pvVar7 = (void *)plVar5[3];
          if ((pvVar7 != (void *)0x0) && (pvVar7 != pvVar6)) {
            uVar4 = *(uint *)(plVar5 + 4);
            uVar8 = 0;
            if ((ulonglong)uVar4 != 0) {
              do {
                *(undefined2 *)((longlong)pvVar6 + uVar8 * 2) =
                     *(undefined2 *)(plVar5[3] + uVar8 * 2);
                uVar8 = uVar8 + 1;
              } while (uVar8 < uVar4);
              pvVar7 = (void *)plVar5[3];
            }
            AK::MemoryMgr::Free(g_DefaultPoolId,pvVar7);
          }
          plVar5[3] = (longlong)pvVar6;
          *(uint *)((longlong)plVar5 + 0x24) = uVar9;
          if (uVar9 <= uVar3) goto LAB_1431b6530;
        }
        uVar3 = *(uint *)(plVar5 + 4);
        *(uint *)(plVar5 + 4) = uVar3 + 1;
        puVar1 = (undefined2 *)(plVar5[3] + (ulonglong)uVar3 * 2);
        if (puVar1 == (undefined2 *)0x0) goto LAB_1431b6530;
        *puVar1 = uVar2;
        puVar10 = puVar10 + 1;
      } while (puVar10 !=
               (undefined2 *)
               (*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x20) * 2));
    }
  }
  return plVar5;
}



// FUNCTION 1431b6570 Clone body=80 status=ok
// SIG undefined Clone(void)

void CAkSequenceInfo::Clone(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_145acddc8;
    *(undefined2 *)((longlong)puVar1 + 10) = 0xffff;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_1 + 8);
    *(undefined2 *)((longlong)puVar1 + 10) = *(undefined2 *)(param_1 + 10);
    return;
  }
  return;
}



// FUNCTION 1431b65c0 FUN_1431b65c0 body=409 status=ok
// SIG undefined FUN_1431b65c0(void)

undefined8 FUN_1431b65c0(longlong param_1,undefined8 *param_2,ushort param_3)

{
  char cVar1;
  uint uVar2;
  ushort local_res10 [4];
  ushort local_res18 [4];
  undefined2 local_res20 [4];
  undefined2 local_38 [2];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  
  local_res10[0] = 0;
  uVar2 = param_3 + 7 >> 3;
  cVar1 = (**(code **)*param_2)(param_2,local_res10,2,local_2c);
  if ((cVar1 != '\0') && (local_res10[0] == param_3)) {
    local_30 = 0;
    local_res20[0] = 0;
    local_38[0] = 0;
    local_res18[0] = 0;
    local_34 = 0;
    cVar1 = (**(code **)*param_2)(param_2,&local_30,4,local_2c);
    if ((cVar1 != '\0') &&
       ((((cVar1 = (**(code **)*param_2)(param_2,local_res20,2,local_2c), cVar1 != '\0' &&
          (cVar1 = (**(code **)*param_2)(param_2,local_38,2,local_2c), cVar1 != '\0')) &&
         (cVar1 = (**(code **)*param_2)(param_2,local_res18,2,local_2c), cVar1 != '\0')) &&
        ((cVar1 = (**(code **)*param_2)(param_2,*(undefined8 *)(param_1 + 0x28),uVar2,&local_34),
         cVar1 != '\0' &&
         (cVar1 = (**(code **)*param_2)(param_2,*(undefined8 *)(param_1 + 0x30),uVar2,&local_34),
         cVar1 != '\0')))))) {
      *(undefined4 *)(param_1 + 0xc) = local_30;
      *(undefined2 *)(param_1 + 0x10) = local_res20[0];
      *(undefined2 *)(param_1 + 0x12) = local_38[0];
      if (local_res18[0] == 0) {
        return 1;
      }
      uVar2 = (uint)local_res18[0];
      if ((((uint)local_res18[0] < *(uint *)(param_1 + 0x20)) ||
          ((uint)local_res18[0] < *(uint *)(param_1 + 0x24) || uVar2 == *(uint *)(param_1 + 0x24)))
         || (cVar1 = FUN_1431b6890(param_1 + 0x18,uVar2 - *(uint *)(param_1 + 0x20)), cVar1 != '\0')
         ) {
        *(uint *)(param_1 + 0x20) = uVar2;
        cVar1 = (**(code **)*param_2)
                          (param_2,*(undefined8 *)(param_1 + 0x18),(uint)local_res18[0] * 2,
                           &local_34);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 2;
}



// FUNCTION 1431b6760 DeserializeHistory body=92 status=ok
// SIG undefined DeserializeHistory(void)

undefined8 CAkSequenceInfo::DeserializeHistory(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 local_res8 [8];
  
  cVar1 = (**(code **)*param_2)(param_2,param_1 + 8,1,local_res8);
  if ((cVar1 != '\0') &&
     (cVar1 = (**(code **)*param_2)(param_2,param_1 + 10,2,local_res8), cVar1 != '\0')) {
    return 1;
  }
  return 2;
}



// FUNCTION 1431b67c0 Destroy body=52 status=ok
// SIG undefined Destroy(void)

void CAkRandomInfo::Destroy(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = g_DefaultPoolId;
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    AK::MemoryMgr::Free(lVar1,param_1);
  }
  return;
}



// FUNCTION 1431b6800 FlagAsBlocked body=29 status=ok
// SIG undefined FlagAsBlocked(void)

void CAkRandomInfo::FlagAsBlocked(longlong param_1,ushort param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)((ulonglong)(param_2 >> 3) + *(longlong *)(param_1 + 0x30));
  *pbVar1 = *pbVar1 | (byte)(1 << (param_2 & 7));
  return;
}



// FUNCTION 1431b6820 FlagAsUnBlocked body=29 status=ok
// SIG undefined FlagAsUnBlocked(void)

void CAkRandomInfo::FlagAsUnBlocked(longlong param_1,ushort param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)((ulonglong)(param_2 >> 3) + *(longlong *)(param_1 + 0x30));
  *pbVar1 = *pbVar1 & ~(byte)(1 << (param_2 & 7));
  return;
}



// FUNCTION 1431b6840 FlagSetPlayed body=29 status=ok
// SIG undefined FlagSetPlayed(void)

void CAkRandomInfo::FlagSetPlayed(longlong param_1,ushort param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)((ulonglong)(param_2 >> 3) + *(longlong *)(param_1 + 0x28));
  *pbVar1 = *pbVar1 | (byte)(1 << (param_2 & 7));
  return;
}



// FUNCTION 1431b6860 GetRandomValue body=43 status=ok
// SIG undefined GetRandomValue(void)

ulonglong CAkRandomInfo::GetRandomValue(longlong param_1)

{
  DAT_146b50b60 = DAT_146b50b60 * 0x5851f42d4c957f2d + 1;
  return (DAT_146b50b60 >> 0x21) % (ulonglong)*(uint *)(param_1 + 0xc);
}



// FUNCTION 1431b6890 FUN_1431b6890 body=156 status=ok
// SIG undefined FUN_1431b6890(void)

undefined8 FUN_1431b6890(longlong *param_1,int param_2)

{
  uint uVar1;
  AKRESULT AVar2;
  void *pvVar3;
  undefined4 extraout_var;
  ulonglong uVar5;
  uint uVar6;
  void *pvVar4;
  
  uVar6 = *(int *)((longlong)param_1 + 0xc) + param_2;
  pvVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar6 * 2);
  if (pvVar3 != (void *)0x0) {
    pvVar4 = (void *)*param_1;
    if ((pvVar4 != (void *)0x0) && (pvVar4 != pvVar3)) {
      uVar1 = *(uint *)(param_1 + 1);
      uVar5 = 0;
      if ((ulonglong)uVar1 != 0) {
        do {
          *(undefined2 *)((longlong)pvVar3 + uVar5 * 2) = *(undefined2 *)(*param_1 + uVar5 * 2);
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar1);
        pvVar4 = (void *)*param_1;
      }
      AVar2 = AK::MemoryMgr::Free(g_DefaultPoolId,pvVar4);
      pvVar4 = (void *)CONCAT44(extraout_var,AVar2);
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar6;
    *param_1 = (longlong)pvVar3;
    return CONCAT71((int7)((ulonglong)pvVar4 >> 8),1);
  }
  return 0;
}



// FUNCTION 1431b6930 Init body=169 status=ok
// SIG undefined Init(void)

undefined4 CAkRandomInfo::Init(longlong param_1,ushort param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(ushort *)(param_1 + 0x12) + 7 >> 3;
  uVar4 = uVar3 * 2;
  pvVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar4);
  *(void **)(param_1 + 0x28) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    uVar1 = 2;
  }
  else {
    *(ulonglong *)(param_1 + 0x30) = (ulonglong)uVar3 + (longlong)pvVar2;
    ::_guard_xfg_dispatch_icall_nop(pvVar2,0,(ulonglong)uVar4);
    uVar4 = (uint)param_2;
    if (3 < param_2) {
      uVar4 = 4;
    }
    if (uVar4 != 0) {
      pvVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar4 * 2);
      *(void **)(param_1 + 0x18) = pvVar2;
      if (pvVar2 == (void *)0x0) {
        return 0x34;
      }
      *(uint *)(param_1 + 0x24) = uVar4;
    }
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1431b69e0 IsFlagBlocked body=30 status=ok
// SIG undefined IsFlagBlocked(void)

bool CAkRandomInfo::IsFlagBlocked(longlong param_1,ushort param_2)

{
  return ((uint)(int)*(char *)((ulonglong)(param_2 >> 3) + *(longlong *)(param_1 + 0x30)) >>
          (param_2 & 7) & 1) != 0;
}



// FUNCTION 1431b6a00 IsFlagSetPlayed body=30 status=ok
// SIG undefined IsFlagSetPlayed(void)

bool CAkRandomInfo::IsFlagSetPlayed(longlong param_1,ushort param_2)

{
  return ((uint)(int)*(char *)((ulonglong)(param_2 >> 3) + *(longlong *)(param_1 + 0x28)) >>
          (param_2 & 7) & 1) != 0;
}



// FUNCTION 1431b6a20 Reserve body=78 status=ok
// SIG undefined Reserve(void)

undefined8
AkArray<unsigned_short,unsigned_short,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkAssignmentMovePolicy<unsigned_short>_>
::Reserve(undefined8 *param_1,uint param_2)

{
  void *pvVar1;
  
  if (param_2 != 0) {
    pvVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)param_2 * 2);
    *param_1 = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 0x34;
    }
    *(uint *)((longlong)param_1 + 0xc) = param_2;
  }
  return 1;
}



// FUNCTION 1431b6a70 ResetFlagsPlayed body=53 status=ok
// SIG undefined ResetFlagsPlayed(void)

void CAkRandomInfo::ResetFlagsPlayed(longlong param_1,longlong param_2)

{
  ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x28),0,param_2 + 7U >> 3 & 0xffffffff);
  *(short *)(param_1 + 0x10) = (short)param_2;
  return;
}



// FUNCTION 1431b6ab0 FUN_1431b6ab0 body=306 status=ok
// SIG undefined FUN_1431b6ab0(void)

undefined8 FUN_1431b6ab0(longlong param_1,undefined8 *param_2,ushort param_3)

{
  char cVar1;
  uint uVar2;
  undefined2 local_res10 [4];
  ushort local_res18 [4];
  undefined4 local_res20 [2];
  undefined1 local_28 [16];
  
  local_res20[0] = 0;
  uVar2 = param_3 + 7 >> 3;
  local_res18[0] = param_3;
  cVar1 = (**(code **)*param_2)(param_2,local_res18,2,local_res10);
  if ((((cVar1 != '\0') &&
       (cVar1 = (**(code **)*param_2)(param_2,param_1 + 0xc,4,local_res10), cVar1 != '\0')) &&
      (cVar1 = (**(code **)*param_2)(param_2,param_1 + 0x10,2,local_res10), cVar1 != '\0')) &&
     (cVar1 = (**(code **)*param_2)(param_2,param_1 + 0x12,2,local_res10), cVar1 != '\0')) {
    local_res10[0] = *(undefined2 *)(param_1 + 0x20);
    cVar1 = (**(code **)*param_2)(param_2,local_res10,2,local_28);
    if (((cVar1 != '\0') &&
        (cVar1 = (**(code **)*param_2)(param_2,*(undefined8 *)(param_1 + 0x28),uVar2,local_res20),
        cVar1 != '\0')) &&
       (cVar1 = (**(code **)*param_2)(param_2,*(undefined8 *)(param_1 + 0x30),uVar2,local_res20),
       cVar1 != '\0')) {
      if ((*(int *)(param_1 + 0x20) != 0) &&
         (cVar1 = (**(code **)*param_2)
                            (param_2,*(undefined8 *)(param_1 + 0x18),*(int *)(param_1 + 0x20) * 2,
                             local_res20), cVar1 == '\0')) {
        return 2;
      }
      return 1;
    }
  }
  return 2;
}



// FUNCTION 1431b6bf0 FReferenceCollector body=24 status=ok
// SIG undefined FReferenceCollector(void)

undefined8 * FReferenceCollector::FReferenceCollector(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145acddf8;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 1431b6c10 FReferenceCollector body=24 status=ok
// SIG undefined FReferenceCollector(void)

undefined8 * FReferenceCollector::FReferenceCollector(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145acde60;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 1431b6c30 FUN_1431b6c30 body=43 status=ok
// SIG undefined FUN_1431b6c30(void)

undefined8 * FUN_1431b6c30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144eec1b8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1431b6c60 FUN_1431b6c60 body=234 status=ok
// SIG undefined FUN_1431b6c60(void)

undefined8 FUN_1431b6c60(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  void *pvVar6;
  ulonglong uVar7;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 0x14) <= uVar3) {
    uVar1 = *(uint *)(param_1 + 0x14) + 8;
    pvVar5 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 3);
    if (pvVar5 == (void *)0x0) {
      return 2;
    }
    pvVar6 = *(void **)(param_1 + 8);
    if ((pvVar6 != (void *)0x0) && (pvVar6 != pvVar5)) {
      uVar4 = *(uint *)(param_1 + 0x10);
      uVar7 = 0;
      if ((ulonglong)uVar4 != 0) {
        do {
          *(undefined8 *)((longlong)pvVar5 + uVar7 * 8) =
               *(undefined8 *)(*(longlong *)(param_1 + 8) + uVar7 * 8);
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar4);
        pvVar6 = *(void **)(param_1 + 8);
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar6);
    }
    *(void **)(param_1 + 8) = pvVar5;
    *(uint *)(param_1 + 0x14) = uVar1;
    if (uVar1 <= uVar3) {
      return 2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = uVar3 + 1;
  puVar2 = (undefined4 *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar3 * 8);
  if (puVar2 == (undefined4 *)0x0) {
    return 2;
  }
  puVar2[1] = param_3;
  *puVar2 = param_2;
  return 1;
}



// FUNCTION 1431b6d50 FUN_1431b6d50 body=225 status=ok
// SIG undefined FUN_1431b6d50(void)

int FUN_1431b6d50(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  puVar7 = (undefined4 *)0x0;
  if (*(uint *)(param_1 + 0x14) <= uVar2) {
    uVar1 = *(uint *)(param_1 + 0x14) + 0x10;
    pvVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 2);
    if (pvVar4 == (void *)0x0) goto LAB_1431b6e0a;
    pvVar5 = *(void **)(param_1 + 8);
    if ((pvVar5 != (void *)0x0) && (pvVar5 != pvVar4)) {
      uVar3 = *(uint *)(param_1 + 0x10);
      puVar6 = puVar7;
      if ((undefined4 *)(ulonglong)uVar3 != (undefined4 *)0x0) {
        do {
          *(undefined4 *)((longlong)pvVar4 + (longlong)puVar6 * 4) =
               *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)puVar6 * 4);
          puVar6 = (undefined4 *)((longlong)puVar6 + 1);
        } while (puVar6 < (undefined4 *)(ulonglong)uVar3);
        pvVar5 = *(void **)(param_1 + 8);
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar5);
    }
    *(void **)(param_1 + 8) = pvVar4;
    *(uint *)(param_1 + 0x14) = uVar1;
    if (uVar1 <= uVar2) goto LAB_1431b6e0a;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = uVar2 + 1;
  puVar7 = (undefined4 *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar2 * 4);
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = param_2;
  }
LAB_1431b6e0a:
  return 2 - (uint)(puVar7 != (undefined4 *)0x0);
}



// FUNCTION 1431b6e60 Destroy body=87 status=ok
// SIG undefined Destroy(void)

void CAkPlayListRandom::Destroy(undefined8 *param_1)

{
  long lVar1;
  
  if ((void *)param_1[1] != (void *)0x0) {
    *(undefined4 *)(param_1 + 2) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[1]);
    param_1[1] = 0;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  lVar1 = g_DefaultPoolId;
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    AK::MemoryMgr::Free(lVar1,param_1);
  }
  return;
}



// FUNCTION 1431b6fe0 Remove body=120 status=ok
// SIG undefined Remove(void)

void CAkPlayListRandom::Remove(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  piVar1 = *(int **)(param_1 + 8);
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x10);
  piVar5 = piVar1;
  if (piVar1 != piVar1 + uVar3 * 2) {
    do {
      iVar4 = (int)uVar3;
      if (*piVar1 == param_2) {
        if (piVar1 < piVar5 + (uVar3 - 1) * 2) {
          lVar2 = ((ulonglong)((longlong)(piVar5 + (uVar3 - 1) * 2) + (-1 - (longlong)piVar1)) >> 3)
                  + 1;
          piVar6 = piVar1;
          piVar5 = piVar1;
          for (; piVar5 = piVar5 + 2, lVar2 != 0; lVar2 = lVar2 + -1) {
            *(undefined8 *)piVar6 = *(undefined8 *)piVar5;
            piVar6 = piVar6 + 2;
          }
          iVar4 = *(int *)(param_1 + 0x10);
        }
        uVar3 = (ulonglong)(iVar4 - 1U);
        *(uint *)(param_1 + 0x10) = iVar4 - 1U;
      }
      else {
        piVar1 = piVar1 + 2;
      }
      piVar5 = *(int **)(param_1 + 8);
    } while (piVar1 != *(int **)(param_1 + 8) + uVar3 * 2);
  }
  return;
}



// FUNCTION 1431b7060 Remove body=100 status=ok
// SIG undefined Remove(void)

void CAkPlayListSequence::Remove(longlong param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = *(int **)(param_1 + 8);
  uVar2 = *(uint *)(param_1 + 0x10);
  piVar4 = piVar3 + uVar2;
  if (piVar3 != piVar4) {
    do {
      if (*piVar3 == param_2) break;
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar4);
    if (piVar3 != piVar4) {
      if (piVar3 < piVar4 + -1) {
        lVar1 = ((ulonglong)((longlong)(piVar4 + -1) + (-1 - (longlong)piVar3)) >> 2) + 1;
        piVar4 = piVar3;
        for (; piVar3 = piVar3 + 1, lVar1 != 0; lVar1 = lVar1 + -1) {
          *piVar4 = *piVar3;
          piVar4 = piVar4 + 1;
        }
        uVar2 = *(uint *)(param_1 + 0x10);
      }
      *(uint *)(param_1 + 0x10) = uVar2 - 1;
    }
  }
  return;
}



// FUNCTION 1431b70e0 FUN_1431b70e0 body=386 status=ok
// SIG undefined FUN_1431b70e0(void)

undefined8 *
FUN_1431b70e0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  uint uVar4;
  
  FUN_14317cf50(param_1,param_2,param_3,param_4,param_5,0);
  *param_1 = &PTR_FUN_145acdec0;
  param_1[2] = &PTR_FUN_145acae80;
  param_1[3] = &PTR_LAB_145acdf30;
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x88) + 0x18);
  param_1[0x5e] = lVar1;
  if (lVar1 != 0) {
    CAkContinuationList::AddRef();
  }
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0;
  plVar2 = *(longlong **)(param_2 + 8);
  *(uint *)(param_1 + 0x6a) = *(uint *)(param_1 + 0x6a) & 0xfffffff0;
  param_1[0x68] = plVar2;
  param_1[0x69] = 0;
  *(byte *)((longlong)param_1 + 0x354) =
       *(byte *)(param_2 + 0x188) >> 1 & 1 | *(byte *)((longlong)param_1 + 0x354) & 0xf8;
  (**(code **)(*plVar2 + 8))();
  *(undefined4 *)((longlong)param_1 + 0x2b4) = *(undefined4 *)(*(longlong *)(param_2 + 0x88) + 0x20)
  ;
  if (param_1[0x41] == 0) {
    param_1[0x41] = **(undefined8 **)(param_2 + 0x88);
    **(undefined8 **)(param_2 + 0x88) = 0;
  }
  if (param_1[0x42] == 0) {
    param_1[0x42] = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 8);
    *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 8) = 0;
  }
  *(undefined4 *)(param_1 + 0x5f) = 0;
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  param_1[0x5f] = *(undefined8 *)(param_2 + 0x38);
  param_1[0x60] = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  param_1[0x61] = *(undefined8 *)(param_2 + 0x48);
  param_1[0x62] = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  param_1[99] = *(undefined8 *)(param_2 + 0x58);
  param_1[100] = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x70);
  param_1[0x65] = *(undefined8 *)(param_2 + 0x68);
  param_1[0x66] = uVar3;
  *(undefined4 *)(param_1 + 0x67) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)((longlong)param_1 + 0x33c) = *(undefined4 *)(param_2 + 0x7c);
  uVar4 = *(uint *)(param_1 + 0x5f);
  while ((uVar4 != 0 &&
         ((uVar4 = uVar4 - 1, 0x1f < uVar4 ||
          ((*(uint *)((longlong)param_1 + 0x33c) >> ((ulonglong)uVar4 & 0x3f) & 1) == 0))))) {
    *(uint *)(param_1 + 0x5f) = uVar4;
  }
  return param_1;
}



// FUNCTION 1431b7270 FUN_1431b7270 body=95 status=ok
// SIG undefined FUN_1431b7270(void)

void FUN_1431b7270(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145acdec0;
  param_1[2] = &PTR_FUN_145acae80;
  param_1[3] = &PTR_LAB_145acdf30;
  (**(code **)(*(longlong *)param_1[0x68] + 0x10))();
  if (param_1[0x5e] != 0) {
    CAkContinuationList::Release();
    param_1[0x5e] = 0;
  }
  FUN_14317d360(param_1);
  return;
}



// FUNCTION 1431b72e0 FUN_1431b72e0 body=129 status=ok
// SIG undefined FUN_1431b72e0(void)

undefined8 * FUN_1431b72e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145acdec0;
  param_1[2] = &PTR_FUN_145acae80;
  param_1[3] = &PTR_LAB_145acdf30;
  (**(code **)(*(longlong *)param_1[0x68] + 0x10))();
  if (param_1[0x5e] != 0) {
    CAkContinuationList::Release();
    param_1[0x5e] = 0;
  }
  FUN_14317d360(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x358);
  }
  return param_1;
}



// FUNCTION 1431b7370 FUN_1431b7370 body=176 status=ok
// SIG undefined FUN_1431b7370(void)

undefined8 FUN_1431b7370(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  
  bVar1 = false;
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x188) + 0x80);
  if (plVar3 != (longlong *)0x0) {
    do {
      iVar2 = (**(code **)(*plVar3 + 0x80))(plVar3);
      if (iVar2 == 2) {
        iVar2 = CAkRanSeqCntr::TransitionMode(plVar3);
        if (iVar2 == 1) {
          return 0;
        }
        iVar2 = CAkRanSeqCntr::TransitionMode(plVar3);
        if (iVar2 == 2) {
          return 0;
        }
        iVar2 = CAkRanSeqCntr::TransitionMode(plVar3);
        if (iVar2 == 5) {
          return 0;
        }
        iVar2 = CAkRanSeqCntr::TransitionMode(plVar3);
        if (iVar2 == 4) {
          bVar1 = true;
        }
      }
      plVar3 = (longlong *)plVar3[0x10];
    } while (plVar3 != (longlong *)0x0);
    if ((bVar1) && ((*(byte *)(param_1 + 0x354) & 1) == 0)) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1431b7420 FUN_1431b7420 body=441 status=ok
// SIG undefined FUN_1431b7420(void)

ulonglong FUN_1431b7420(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar4 = FUN_14317de60();
  if ((int)uVar4 != 1) {
    return uVar4;
  }
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    plVar1 = (longlong *)(param_1 + -0x18);
    lVar5 = param_1 + -8;
    if (plVar1 == (longlong *)0x0) {
      lVar5 = 0;
    }
    iVar3 = FUN_14314fb80(DAT_146b50af0,*(longlong *)(param_1 + 0x1f0),lVar5);
    if (iVar3 == 1) {
      cVar2 = CAkTransitionManager::IsTerminated(DAT_146b50af0,*(undefined8 *)(param_1 + 0x1f0));
      if (cVar2 == '\0') {
        (**(code **)(*plVar1 + 0x58))(plVar1,0xe,0xffffffff);
        goto LAB_1431b74f5;
      }
      cVar2 = CAkTransition::IsFadingOut(*(undefined8 *)(param_1 + 0x1f0));
      if (cVar2 != '\0') {
        *(byte *)(param_1 + 0x27a) = *(byte *)(param_1 + 0x27a) & 0xfa;
        *(byte *)(param_1 + 0x27a) = *(byte *)(param_1 + 0x27a) | 2;
      }
      FUN_1431501b0(DAT_146b50af0,*(undefined8 *)(param_1 + 0x1f0),lVar5);
    }
    else {
      *(byte *)(param_1 + 0x27a) = *(byte *)(param_1 + 0x27a) & 0xfa;
      *(byte *)(param_1 + 0x27a) = *(byte *)(param_1 + 0x27a) | 2;
    }
    *(undefined8 *)(param_1 + 0x1f0) = 0;
  }
LAB_1431b74f5:
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    plVar1 = (longlong *)(param_1 + -0x18);
    lVar5 = param_1 + -8;
    if (plVar1 == (longlong *)0x0) {
      lVar5 = 0;
    }
    iVar3 = FUN_14314fb80(DAT_146b50af0,*(longlong *)(param_1 + 0x1f8),lVar5);
    if (iVar3 == 1) {
      cVar2 = CAkTransitionManager::IsTerminated(DAT_146b50af0,*(undefined8 *)(param_1 + 0x1f8));
      if (cVar2 == '\0') {
        (**(code **)(*plVar1 + 0x58))(plVar1,0xe,0xffffffff);
        goto LAB_1431b7595;
      }
      cVar2 = CAkTransition::IsFadingOut(*(undefined8 *)(param_1 + 0x1f8));
      if ((cVar2 != '\0') && ((*(byte *)(param_1 + 0x27a) & 7) == 0)) {
        *(byte *)(param_1 + 0x27a) = *(byte *)(param_1 + 0x27a) & 0xf9 | 1;
      }
      FUN_1431501b0(DAT_146b50af0,*(undefined8 *)(param_1 + 0x1f8),lVar5);
    }
    *(undefined8 *)(param_1 + 0x1f8) = 0;
  }
LAB_1431b7595:
  if ((((*(byte *)(param_1 + 0x27a) & 7) == 0) && (*(int *)(param_1 + 0x29c) != 0)) &&
     (*(longlong *)(param_1 + 0x1f8) == 0)) {
    *(byte *)(param_1 + 0x27a) = *(byte *)(param_1 + 0x27a) & 0xf9 | 1;
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1431b75e0 MillisecondsToSamples body=69 status=ok
// SIG undefined MillisecondsToSamples(void)

int AkTimeConv::MillisecondsToSamples(double param_1)

{
  double dVar1;
  
  dVar1 = (double)DAT_1467bdcac * param_1 * 0.001;
  if (0.0 < dVar1) {
    return (int)(dVar1 + 0.5);
  }
  return (int)(dVar1 + -0.5);
}



// FUNCTION 1431b7630 FUN_1431b7630 body=472 status=ok
// SIG undefined FUN_1431b7630(void)

void FUN_1431b7630(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  longlong local_res8;
  
  plVar7 = (longlong *)0x0;
  if (*(int *)(param_1 + 0x34c) != 0) {
    plVar7 = (longlong *)
             CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,*(int *)(param_1 + 0x34c),0);
  }
  if ((((*(byte *)(param_1 + 0x354) & 4) == 0) || (*(int *)(param_1 + 0x34c) == 0)) ||
     (cVar5 = CAkParameterNode::IsOrIsChildOf(plVar7,param_2,0), cVar5 != '\0')) {
    *(byte *)(param_1 + 0x354) = *(byte *)(param_1 + 0x354) & 0xfb;
    plVar3 = *(longlong **)(param_1 + 0x2f0);
    *(undefined4 *)(param_1 + 0x34c) = 0;
    if (plVar3 != (longlong *)0x0) {
      iVar2 = (int)plVar3[1];
      while (iVar2 != 0) {
        lVar1 = *plVar3 + (ulonglong)*(uint *)(plVar3 + 1) * 0x28;
        lVar4 = *(longlong *)(*plVar3 + -0x10 + (ulonglong)*(uint *)(plVar3 + 1) * 0x28);
        if (lVar4 == 0) {
          cVar5 = CAkParameterNode::IsOrIsChildOf(*(undefined8 *)(lVar1 + -0x28),param_2,0);
          if (cVar5 == '\0') break;
          uVar6 = *(int *)(param_1 + 0x2f8) - 1;
          *(uint *)(param_1 + 0x2f8) = uVar6;
          while ((uVar6 != 0 &&
                 ((uVar6 = uVar6 - 1, 0x1f < uVar6 ||
                  ((*(uint *)(param_1 + 0x33c) >> ((ulonglong)uVar6 & 0x3f) & 1) == 0))))) {
            *(uint *)(param_1 + 0x2f8) = uVar6;
          }
          plVar3 = *(longlong **)(param_1 + 0x2f0);
          CAkContinueListItem::~CAkContinueListItem
                    (*plVar3 + ((ulonglong)*(uint *)(plVar3 + 1) * 5 + -5) * 8);
          *(int *)(plVar3 + 1) = (int)plVar3[1] + -1;
        }
        else {
          local_res8 = 0;
          FUN_1431c43d0(lVar4,*(undefined8 *)(lVar1 + -8),&local_res8);
          plVar3 = *(longlong **)(param_1 + 0x2f0);
          CAkContinueListItem::~CAkContinueListItem
                    (*plVar3 + ((ulonglong)*(uint *)(plVar3 + 1) * 5 + -5) * 8);
          lVar1 = local_res8;
          *(int *)(plVar3 + 1) = (int)plVar3[1] + -1;
          if (local_res8 != 0) {
            CAkContinuationList::AddRef(local_res8);
            lVar4 = *(longlong *)(param_1 + 0x2f0);
            *(longlong *)(param_1 + 0x2f0) = lVar1;
            if (lVar4 != 0) {
              CAkContinuationList::Release();
            }
            if (local_res8 != 0) {
              CAkContinuationList::Release();
            }
          }
        }
        plVar3 = *(longlong **)(param_1 + 0x2f0);
        iVar2 = (int)plVar3[1];
      }
      lVar1 = *(longlong *)(param_1 + 0x2f0);
      if ((*(int *)(lVar1 + 8) == 0) && (*(undefined8 *)(param_1 + 0x2f0) = 0, lVar1 != 0)) {
        CAkContinuationList::Release();
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  FUN_14317e3f0(param_1,param_2);
  return;
}



// FUNCTION 1431b7810 FUN_1431b7810 body=664 status=ok
// SIG undefined FUN_1431b7810(void)

void FUN_1431b7810(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined2 local_res8 [4];
  undefined1 local_res18 [8];
  longlong local_res20;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined1 local_38;
  undefined8 local_30;
  
  if (((*(byte *)(param_1 + 0x354) & 4) == 0) &&
     (plVar5 = *(longlong **)(param_1 + 0x2f0), plVar5 != (longlong *)0x0)) {
    iVar1 = (int)plVar5[1];
    while (iVar1 != 0) {
      uVar4 = (ulonglong)*(uint *)(plVar5 + 1);
      lVar2 = *plVar5;
      lVar3 = *(longlong *)(lVar2 + -0x10 + uVar4 * 0x28);
      if (lVar3 == 0) {
        plVar5 = (longlong *)
                 CAkRanSeqCntr::GetNextToPlayContinuous
                           (*(undefined8 *)(lVar2 + -0x28 + uVar4 * 0x28),
                            *(undefined8 *)(param_1 + 0x30),local_res8,local_res18,
                            lVar2 + (uVar4 * 5 + -4) * 8,lVar2 + (uVar4 * 5 + -3) * 8);
        if (plVar5 != (longlong *)0x0) {
          *(undefined2 *)(param_1 + 0x2fc + (ulonglong)(*(int *)(param_1 + 0x2f8) - 1) * 2) =
               local_res8[0];
          *(int *)(param_1 + 0x34c) = (int)plVar5[2];
          uVar6 = CAkRanSeqCntr::TransitionMode(*(undefined8 *)(lVar2 + -0x28 + uVar4 * 0x28));
          *(uint *)(param_1 + 0x350) =
               *(uint *)(param_1 + 0x350) ^ (*(uint *)(param_1 + 0x350) ^ uVar6) & 0xf;
          if (((*(int *)(param_1 + 0x350) << 0x1c) >> 0x1c) - 1U < 3) {
            local_58 = *(undefined8 *)(param_1 + 0x30);
            local_50 = *(undefined4 *)(param_1 + 0x200);
            local_48 = 0;
            local_40 = 0xff;
            local_38 = 0xff;
            local_30 = 0;
            uVar7 = CAkRanSeqCntr::TransitionTime
                              (*(undefined8 *)(lVar2 + -0x28 + uVar4 * 0x28),&local_58);
          }
          else {
            uVar7 = 0;
          }
          *(undefined4 *)(param_1 + 0x348) = uVar7;
          *(byte *)(param_1 + 0x354) = *(byte *)(param_1 + 0x354) | 4;
          (**(code **)(*plVar5 + 0x10))(plVar5);
          return;
        }
        uVar6 = *(int *)(param_1 + 0x2f8) - 1;
        *(uint *)(param_1 + 0x2f8) = uVar6;
        while ((uVar6 != 0 &&
               ((uVar6 = uVar6 - 1, 0x1f < uVar6 ||
                ((*(uint *)(param_1 + 0x33c) >> ((ulonglong)uVar6 & 0x3f) & 1) == 0))))) {
          *(uint *)(param_1 + 0x2f8) = uVar6;
        }
        plVar5 = *(longlong **)(param_1 + 0x2f0);
        CAkContinueListItem::~CAkContinueListItem
                  (*plVar5 + ((ulonglong)*(uint *)(plVar5 + 1) * 5 + -5) * 8);
        *(int *)(plVar5 + 1) = (int)plVar5[1] + -1;
      }
      else {
        if (param_2 != '\0') {
          return;
        }
        local_res20 = 0;
        FUN_1431c43d0(lVar3,*(undefined8 *)(lVar2 + -8 + uVar4 * 0x28),&local_res20);
        plVar5 = *(longlong **)(param_1 + 0x2f0);
        CAkContinueListItem::~CAkContinueListItem
                  (*plVar5 + ((ulonglong)*(uint *)(plVar5 + 1) * 5 + -5) * 8);
        lVar2 = local_res20;
        *(int *)(plVar5 + 1) = (int)plVar5[1] + -1;
        if (local_res20 == 0) {
          lVar2 = *(longlong *)(param_1 + 0x2f0);
          *(undefined8 *)(param_1 + 0x2f0) = 0;
          if (lVar2 == 0) {
            return;
          }
          CAkContinuationList::Release();
          if (local_res20 == 0) {
            return;
          }
          CAkContinuationList::Release();
          return;
        }
        CAkContinuationList::AddRef(local_res20);
        lVar3 = *(longlong *)(param_1 + 0x2f0);
        *(longlong *)(param_1 + 0x2f0) = lVar2;
        if (lVar3 != 0) {
          CAkContinuationList::Release();
        }
        if (local_res20 != 0) {
          CAkContinuationList::Release();
        }
      }
      plVar5 = *(longlong **)(param_1 + 0x2f0);
      iVar1 = (int)plVar5[1];
    }
    *(undefined8 *)(param_1 + 0x2f0) = 0;
    if (plVar5 != (longlong *)0x0) {
      CAkContinuationList::Release();
    }
  }
  *(byte *)(param_1 + 0x354) = *(byte *)(param_1 + 0x354) | 4;
  return;
}



// FUNCTION 1431b7ab0 FUN_1431b7ab0 body=612 status=ok
// SIG undefined FUN_1431b7ab0(void)

void FUN_1431b7ab0(longlong *param_1)

{
  longlong lVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  void *pvVar7;
  longlong *plVar8;
  undefined4 uStackX_c;
  
  if ((((*(byte *)((longlong)param_1 + 0x294) & 0x10) == 0) &&
      ((**(code **)(*param_1 + 0x68))(param_1,1), ((byte)(int)param_1[0x6a] & 0xf) == 4)) &&
     (*(int *)((longlong)param_1 + 0x34c) != 0)) {
    plVar5 = (longlong *)
             CAkAudioLibIndex::GetNodePtrAndAddRef
                       (DAT_146b50af8,*(int *)((longlong)param_1 + 0x34c),0);
    if (((plVar5 == (longlong *)0x0) || (iVar3 = (**(code **)(*plVar5 + 0x80))(plVar5), iVar3 != 2))
       || (iVar3 = CAkRanSeqCntr::TransitionMode(plVar5), iVar3 != 5)) {
      plVar6 = (longlong *)FUN_1431a56b0(0x503,0,param_1 + 0x5e);
      if (plVar6 != (longlong *)0x0) {
        pvVar7 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x48);
        if ((pvVar7 != (void *)0x0) &&
           (plVar8 = (longlong *)AkPendingAction::AkPendingAction(pvVar7,param_1[6]),
           plVar8 != (longlong *)0x0)) {
          *(undefined4 *)(plVar6 + 0x1d) = *(undefined4 *)((longlong)param_1 + 0x2b4);
          CAkActionPlayAndContinue::SetHistory(plVar6,param_1 + 0x5f);
          (**(code **)(*plVar6 + 0x20))
                    (plVar6,CONCAT44(uStackX_c,*(undefined4 *)((longlong)param_1 + 0x34c)) &
                            0xffffff00ffffffff);
          CAkActionPlayAndContinue::SetInstigator(plVar6,param_1[0x68]);
          CAkAction::SetPlayDirectly(plVar6,*(byte *)((longlong)param_1 + 0x194) >> 6 & 1);
          uVar4 = CAkParameterNode::GetMidiNoteOffAction(param_1[0x31]);
          FUN_1431a53e0(plVar6,uVar4,param_1[0x5a],(longlong)param_1 + 0x2cc);
          CAkActionPlayAndContinue::AssignModulator(plVar6,param_1 + 0xe);
          iVar3 = CAkActionPlayAndContinue::SetPlayStopTransition(plVar6,param_1[0x41],plVar8);
          if ((iVar3 == 1) &&
             (iVar3 = CAkActionPlayAndContinue::SetPauseResumeTransition
                                (plVar6,param_1[0x42],plVar8), iVar3 == 1)) {
            CAkActionPlayAndContinue::SetPathInfo(plVar6,param_1 + 0x24);
            if ((*(byte *)((longlong)param_1 + 0x294) & 0x40) != 0) {
              CAkActionPlayAndContinue::StartAsPaused(plVar6);
            }
            CAkActionPlayAndContinue::SetSAInfo(plVar6,(int)param_1[0x55]);
            plVar8[1] = (longlong)plVar6;
            UserParams::operator=((longlong)plVar8 + 0x1c,(longlong)param_1 + 0x1ec);
            FUN_14313c660(DAT_146b50b78,plVar8);
          }
          else {
            lVar2 = g_DefaultPoolId;
            (**(code **)(*plVar8 + 8))(plVar8,0);
            AK::MemoryMgr::Free(lVar2,plVar8);
          }
        }
        (**(code **)(*plVar6 + 0x10))(plVar6);
        *(byte *)((longlong)param_1 + 0x294) = *(byte *)((longlong)param_1 + 0x294) | 2;
      }
      lVar1 = param_1[0x5e];
      param_1[0x5e] = 0;
      if (lVar1 != 0) {
        CAkContinuationList::Release();
      }
      *(undefined4 *)((longlong)param_1 + 0x34c) = 0;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return;
}



// FUNCTION 1431b7d20 SeekPercent body=65 status=ok
// SIG undefined SeekPercent(void)

void CAkContinuousPBI::SeekPercent(undefined8 param_1,undefined4 param_2,undefined1 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1431b7370();
  if (cVar1 != '\0') {
    FUN_14317efb0(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 1431b7d70 SeekTimeAbsolute body=63 status=ok
// SIG undefined SeekTimeAbsolute(void)

void CAkContinuousPBI::SeekTimeAbsolute(undefined8 param_1,undefined4 param_2,undefined1 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1431b7370();
  if (cVar1 != '\0') {
    FUN_14317efe0(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 1431b7db0 FUN_1431b7db0 body=642 status=ok
// SIG undefined FUN_1431b7db0(void)

void FUN_1431b7db0(longlong *param_1,float param_2)

{
  longlong lVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  void *pvVar7;
  longlong *plVar8;
  float fVar9;
  undefined4 uStackX_c;
  
  if (((((*(byte *)((longlong)param_1 + 0x294) & 0x10) == 0) &&
       ((*(byte *)((longlong)param_1 + 0x294) & 0x20) == 0)) &&
      ((**(code **)(*param_1 + 0x68))(param_1,1), (((int)param_1[0x6a] << 0x1c) >> 0x1c) - 1U < 2))
     && ((50.0 <= param_2 && (*(int *)((longlong)param_1 + 0x34c) != 0)))) {
    plVar6 = (longlong *)FUN_1431a56b0(0x503,0,param_1 + 0x5e);
    if (plVar6 != (longlong *)0x0) {
      pvVar7 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x48);
      if ((pvVar7 != (void *)0x0) &&
         (plVar8 = (longlong *)AkPendingAction::AkPendingAction(pvVar7,param_1[6]),
         plVar8 != (longlong *)0x0)) {
        *(undefined4 *)(plVar6 + 0x1d) = *(undefined4 *)((longlong)param_1 + 0x2b4);
        CAkActionPlayAndContinue::SetHistory(plVar6,param_1 + 0x5f);
        (**(code **)(*plVar6 + 0x20))
                  (plVar6,CONCAT44(uStackX_c,*(undefined4 *)((longlong)param_1 + 0x34c)) &
                          0xffffff00ffffffff);
        CAkActionPlayAndContinue::SetInstigator(plVar6,param_1[0x68]);
        CAkAction::SetPlayDirectly(plVar6,*(byte *)((longlong)param_1 + 0x194) >> 6 & 1);
        uVar3 = CAkParameterNode::GetMidiNoteOffAction(param_1[0x31]);
        FUN_1431a53e0(plVar6,uVar3,param_1[0x5a],(longlong)param_1 + 0x2cc);
        CAkActionPlayAndContinue::AssignModulator(plVar6,param_1 + 0xe);
        CAkActionPlayAndContinue::SetPauseResumeTransition(plVar6,param_1[0x42],plVar8);
        CAkActionPlayAndContinue::SetPathInfo(plVar6,param_1 + 0x24);
        fVar9 = param_2 * 0.5;
        if (*(float *)(param_1 + 0x69) <= param_2 * 0.5) {
          fVar9 = *(float *)(param_1 + 0x69);
        }
        iVar4 = AkTimeConv::MillisecondsToSamples((double)(param_2 - fVar9));
        CAkActionPlayAndContinue::SetFadeBack(plVar6,param_1,(int)fVar9);
        iVar5 = (**(code **)(*plVar6 + 0x28))(plVar6,0xf,iVar4,0,0);
        lVar2 = g_DefaultPoolId;
        if (iVar5 == 1) {
          plVar8[1] = (longlong)plVar6;
          UserParams::operator=((longlong)plVar8 + 0x1c,(longlong)param_1 + 0x1ec);
          FUN_14313c660(DAT_146b50b78,plVar8);
          if (((int)(uint)DAT_1467bdcb8 <= iVar4) && (*(int *)((longlong)param_1 + 0x2b4) != 0)) {
            CAkAudioMgr::PausePending(DAT_146b50b78,plVar8);
          }
        }
        else {
          (**(code **)(*plVar8 + 8))(plVar8,0);
          AK::MemoryMgr::Free(lVar2,plVar8);
        }
      }
      (**(code **)(*plVar6 + 0x10))(plVar6);
      *(byte *)((longlong)param_1 + 0x294) = *(byte *)((longlong)param_1 + 0x294) | 2;
    }
    lVar1 = param_1[0x5e];
    param_1[0x5e] = 0;
    if (lVar1 != 0) {
      CAkContinuationList::Release();
    }
    *(undefined4 *)((longlong)param_1 + 0x34c) = 0;
  }
  return;
}



// FUNCTION 1431b8050 FUN_1431b8050 body=882 status=ok
// SIG undefined FUN_1431b8050(void)

void FUN_1431b8050(longlong param_1,char param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  void *pvVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  undefined4 uStackX_c;
  
  FUN_14317d8f0(param_1 + -0x18);
  (**(code **)(*(longlong *)(param_1 + -0x18) + 0x68))(param_1 + -0x18,0);
  iVar3 = *(int *)(param_1 + 0x334);
  if (iVar3 == 0) {
    if (DAT_146b50b78 == 0) goto LAB_1431b8376;
    CAkAudioMgr::ClearCrossFadeOccurence(DAT_146b50b78,param_1 + -0x18);
    iVar3 = *(int *)(param_1 + 0x334);
    if (iVar3 == 0) goto LAB_1431b8376;
  }
  if (((*(byte *)(param_1 + 0x27c) & 4) != 0) ||
     ((((*(byte *)(param_1 + 0x27c) & 0x20) != 0 &&
       (((*(int *)(param_1 + 0x338) << 0x1c) >> 0x1c) - 1U < 2)) ||
      (plVar4 = (longlong *)CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,iVar3,0),
      plVar4 == (longlong *)0x0)))) goto LAB_1431b8376;
  plVar5 = (longlong *)FUN_1431a56b0(0x503,0,param_1 + 0x2d8);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 0x1d) = *(undefined4 *)(param_1 + 0x29c);
    CAkActionPlayAndContinue::SetHistory(plVar5,param_1 + 0x2e0);
    (**(code **)(*plVar5 + 0x20))(plVar5,CONCAT44(uStackX_c,(int)plVar4[2]) & 0xffffff00ffffffff);
    CAkActionPlayAndContinue::SetInstigator(plVar5,*(undefined8 *)(param_1 + 0x328));
    CAkAction::SetPlayDirectly(plVar5,*(byte *)(param_1 + 0x17c) >> 6 & 1);
    uVar2 = CAkParameterNode::GetMidiNoteOffAction(*(undefined8 *)(param_1 + 0x170));
    FUN_1431a53e0(plVar5,uVar2,*(undefined8 *)(param_1 + 0x2b8),param_1 + 0x2b4);
    CAkActionPlayAndContinue::AssignModulator(plVar5,param_1 + 0x58);
    pvVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x48);
    if ((pvVar6 != (void *)0x0) &&
       (plVar7 = (longlong *)
                 AkPendingAction::AkPendingAction(pvVar6,*(undefined8 *)(param_1 + 0x18)),
       plVar7 != (longlong *)0x0)) {
      iVar3 = CAkActionPlayAndContinue::SetPlayStopTransition
                        (plVar5,*(undefined8 *)(param_1 + 0x1f0),plVar7);
      if ((iVar3 == 1) &&
         (iVar3 = CAkActionPlayAndContinue::SetPauseResumeTransition
                            (plVar5,*(undefined8 *)(param_1 + 0x1f8),plVar7), iVar3 == 1)) {
        CAkActionPlayAndContinue::SetPathInfo(plVar5,param_1 + 0x108);
        if (((*(byte *)(param_1 + 0x27c) & 8) == 0) && (param_2 == '\0')) {
          if (((byte)*(undefined4 *)(param_1 + 0x338) & 0xf) == 3) {
            lVar9 = *plVar5;
            uVar2 = AkTimeConv::MillisecondsToSamples((double)*(float *)(param_1 + 0x330));
            iVar3 = (**(code **)(lVar9 + 0x28))(plVar5,0xf,uVar2,0,0);
            goto LAB_1431b82cf;
          }
        }
        else {
          CAkActionPlayAndContinue::SetIsFirstPlay(plVar5,*(byte *)(param_1 + 0x33c) & 1);
          iVar3 = AkTimeConv::MillisecondsToSamples((double)*(float *)(param_1 + 0x330));
          iVar8 = (DAT_146b50bd0 + 10) * (uint)DAT_1467bdcb8;
          if ((((byte)*(undefined4 *)(param_1 + 0x338) & 0xf) != 3) || (iVar3 < iVar8)) {
            iVar3 = iVar8;
          }
          iVar3 = (**(code **)(*plVar5 + 0x28))(plVar5,0xf,iVar3,0,0);
LAB_1431b82cf:
          if (iVar3 != 1) goto LAB_1431b8327;
        }
        plVar7[1] = (longlong)plVar5;
        UserParams::operator=((longlong)plVar7 + 0x1c,param_1 + 0x1d4);
        FUN_14313c660(DAT_146b50b78,plVar7);
        if (((*(float *)(param_1 + 0x330) != 0.0) && (*(int *)(param_1 + 0x29c) != 0)) &&
           (*(longlong *)(param_1 + 0x1f8) == 0)) {
          CAkAudioMgr::PausePending(DAT_146b50b78,plVar7);
        }
      }
      else {
LAB_1431b8327:
        lVar1 = g_DefaultPoolId;
        (**(code **)(*plVar7 + 8))(plVar7,0);
        AK::MemoryMgr::Free(lVar1,plVar7);
      }
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((*(byte *)(param_1 + 0x27c) & 1) != 0) {
    *(byte *)(param_1 + 0x27c) = *(byte *)(param_1 + 0x27c) | 2;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4);
LAB_1431b8376:
  lVar9 = *(longlong *)(param_1 + 0x2d8);
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  if (lVar9 != 0) {
    CAkContinuationList::Release();
  }
  if ((*(byte *)(param_1 + 0x27c) & 3) == 3) {
    *(byte *)(param_1 + 0x27c) = *(byte *)(param_1 + 0x27c) & 0xfe;
  }
  FUN_14317f1e0(param_1,param_2);
  return;
}



// FUNCTION 1431b83d0 FUN_1431b83d0 body=92 status=ok
// SIG undefined FUN_1431b83d0(void)

void FUN_1431b83d0(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  longlong lVar1;
  
  *(byte *)(param_1 + 0x354) = *(byte *)(param_1 + 0x354) | 4;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  lVar1 = *(longlong *)(param_1 + 0x2f0);
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  if (lVar1 != 0) {
    CAkContinuationList::Release();
  }
  FUN_143180260(param_1,param_2,param_3);
  return;
}



// FUNCTION 1431b8430 CAkSoundBase body=55 status=ok
// SIG undefined CAkSoundBase(void)

undefined8 * CAkSoundBase::CAkSoundBase(undefined8 *param_1)

{
  CAkParameterNode::CAkParameterNode();
  *param_1 = &PTR__scalar_deleting_destructor__145acdf98;
  param_1[3] = &PTR_LAB_145ace1e8;
  param_1[6] = &PTR_PushParamUpdate_145ac7228;
  return param_1;
}



// FUNCTION 1431b8470 ~CAkSoundBase body=37 status=ok
// SIG undefined ~CAkSoundBase(void)

void CAkSoundBase::~CAkSoundBase(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acdf98;
  param_1[3] = &PTR_LAB_145ace1e8;
  param_1[6] = &PTR_PushParamUpdate_145ac7228;
  CAkParameterNode::~CAkParameterNode();
  return;
}



// FUNCTION 1431b84b0 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkSoundBase::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acdf98;
  param_1[3] = &PTR_LAB_145ace1e8;
  param_1[6] = &PTR_PushParamUpdate_145ac7228;
  CAkParameterNode::~CAkParameterNode();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 1431b8510 FUN_1431b8510 body=68 status=ok
// SIG undefined FUN_1431b8510(void)

void FUN_1431b8510(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x18), lVar2 != 0)) {
    do {
      lVar1 = lVar2 + -0x18;
      if (lVar2 == 0) {
        lVar1 = 0;
      }
      FUN_14317d5f0(lVar1);
      lVar2 = *(longlong *)(lVar2 + 0x50);
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1431b8560 FUN_1431b8560 body=197 status=ok
// SIG undefined FUN_1431b8560(void)

void FUN_1431b8560(longlong param_1,code *param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x18), lVar2 != 0)) {
    do {
      if ((((*param_3 == 0) || (*(longlong *)(lVar2 + 0x18) == *param_3)) &&
          (((int)param_3[1] == 0 || (*(int *)(lVar2 + 0x20) == (int)param_3[1])))) &&
         (((((int)param_3[2] == 0 || (*(int *)(lVar2 + 0x28) == (int)param_3[2])) &&
           (((char)param_3[3] == -1 || (*(char *)(lVar2 + 0x30) == (char)param_3[3])))) &&
          ((((char)param_3[4] == -1 || (*(char *)(lVar2 + 0x38) == (char)param_3[4])) &&
           ((param_3[5] == 0 || (*(longlong *)(lVar2 + 0x40) == param_3[5])))))))) {
        lVar1 = lVar2 + -0x18;
        if (lVar2 == 0) {
          lVar1 = 0;
        }
        (*param_2)(lVar1,param_3,param_4);
      }
      lVar2 = *(longlong *)(lVar2 + 0x50);
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1431b8630 FUN_1431b8630 body=226 status=ok
// SIG undefined FUN_1431b8630(void)

undefined8 FUN_1431b8630(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  byte *pbVar2;
  undefined8 uVar3;
  uint uVar4;
  byte *pbVar5;
  short sVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte local_res8 [8];
  
  pbVar2 = *(byte **)(param_1 + 0x98);
  pbVar8 = (byte *)0x0;
  local_res8[0] = 1;
  local_res8[1] = 0;
  local_res8[2] = 0;
  local_res8[3] = 0;
  pbVar5 = pbVar8;
  if (pbVar2 != (byte *)0x0) {
    pbVar7 = pbVar8;
    do {
      uVar4 = (int)pbVar7 + 1;
      if (pbVar2[uVar4] == 0x3a) {
        pbVar5 = pbVar2 + (longlong)pbVar7 * 4 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc);
        break;
      }
      pbVar7 = (byte *)(ulonglong)uVar4;
    } while (uVar4 < *pbVar2);
  }
  pbVar2 = local_res8;
  if (pbVar5 != (byte *)0x0) {
    pbVar2 = pbVar5;
  }
  pbVar5 = *(byte **)(param_1 + 0xb0);
  sVar6 = (short)*(undefined4 *)pbVar2;
  if (pbVar5 != (byte *)0x0) {
    do {
      uVar4 = (int)pbVar8 + 1;
      if (pbVar5[uVar4] == 0x3a) {
        if (pbVar5 + ((ulonglong)(*pbVar5 + 4) & 0xfffffffc) + (longlong)pbVar8 * 8 != (byte *)0x0)
        {
          sVar1 = RandomizerModifier::GetMod<long>();
          sVar6 = sVar6 + sVar1;
        }
        break;
      }
      pbVar8 = (byte *)(ulonglong)uVar4;
    } while (uVar4 < *pbVar5);
  }
  if (sVar6 == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = CAkParameterNodeBase::IsInfiniteLooping(param_1,param_2,param_3);
  }
  return uVar3;
}



// FUNCTION 1431b8720 Loop body=189 status=ok
// SIG undefined Loop(void)

uint CAkSoundBase::Loop(longlong param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint local_res8 [2];
  
  pbVar1 = *(byte **)(param_1 + 0x98);
  puVar6 = (uint *)0x0;
  local_res8[0] = 1;
  puVar7 = puVar6;
  if (pbVar1 != (byte *)0x0) {
    puVar4 = puVar6;
    do {
      uVar5 = (int)puVar4 + 1;
      if (pbVar1[uVar5] == 0x3a) {
        puVar7 = (uint *)(pbVar1 + (longlong)puVar4 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
        break;
      }
      puVar4 = (uint *)(ulonglong)uVar5;
    } while (uVar5 < *pbVar1);
  }
  puVar4 = local_res8;
  if (puVar7 != (uint *)0x0) {
    puVar4 = puVar7;
  }
  pbVar1 = *(byte **)(param_1 + 0xb0);
  uVar5 = *puVar4;
  if (pbVar1 != (byte *)0x0) {
    do {
      uVar2 = (int)puVar6 + 1;
      if (pbVar1[uVar2] == 0x3a) {
        if (pbVar1 + (longlong)puVar6 * 8 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) != (byte *)0x0)
        {
          iVar3 = RandomizerModifier::GetMod<long>();
          return iVar3 + uVar5;
        }
        break;
      }
      puVar6 = (uint *)(ulonglong)uVar2;
    } while (uVar2 < *pbVar1);
  }
  return uVar5 & 0xffff;
}



// FUNCTION 1431b87e0 FUN_1431b87e0 body=103 status=ok
// SIG undefined FUN_1431b87e0(void)

void FUN_1431b87e0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x18), lVar2 != 0)) {
    do {
      lVar1 = lVar2 + -0x18;
      if (lVar2 == 0) {
        lVar1 = 0;
      }
      FUN_14317e2d0(lVar1,param_2,param_3,0);
      lVar2 = *(longlong *)(lVar2 + 0x50);
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1431b8850 FUN_1431b8850 body=157 status=ok
// SIG undefined FUN_1431b8850(void)

void FUN_1431b8850(longlong param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x18), lVar2 != 0)) {
    do {
      lVar1 = lVar2 + -0x18;
      if (lVar2 == 0) {
        lVar1 = 0;
      }
      if ((param_3 == 0) || (*(longlong *)(lVar1 + 0x30) == param_3)) {
        FUN_14317e2d0(lVar1,param_2,param_4,param_5);
      }
      lVar2 = *(longlong *)(lVar2 + 0x50);
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1431b88f0 FUN_1431b88f0 body=159 status=ok
// SIG undefined FUN_1431b88f0(void)

void FUN_1431b88f0(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4,
                  undefined8 *param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x18), lVar2 != 0)) {
    do {
      lVar3 = lVar2 + -0x18;
      if (lVar2 == 0) {
        lVar3 = 0;
      }
      if (((param_5 == (undefined8 *)0x0) ||
          (cVar1 = (**(code **)*param_5)(param_5,lVar3 + 0x30), cVar1 == '\0')) &&
         ((param_4 == 0 || (*(longlong *)(lVar3 + 0x30) == param_4)))) {
        FUN_14317e310(lVar3,param_2,param_3);
      }
      lVar2 = *(longlong *)(lVar2 + 0x50);
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1431b8990 FUN_1431b8990 body=126 status=ok
// SIG undefined FUN_1431b8990(void)

void FUN_1431b8990(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x18), lVar4 != 0)) {
    do {
      puVar1 = *(undefined8 **)(param_2 + 0x40);
      if (puVar1 == (undefined8 *)0x0) {
LAB_1431b89de:
        lVar3 = lVar4;
        if (lVar4 == 0) {
          lVar3 = 0x18;
        }
        FUN_14317c270(lVar3,param_2);
      }
      else {
        lVar3 = lVar4 + 0x18;
        if (lVar4 == 0) {
          lVar3 = 0x30;
        }
        cVar2 = (**(code **)*puVar1)(puVar1,lVar3);
        if (cVar2 == '\0') goto LAB_1431b89de;
      }
      lVar4 = *(longlong *)(lVar4 + 0x50);
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1431b8a10 FUN_1431b8a10 body=142 status=ok
// SIG undefined FUN_1431b8a10(void)

void FUN_1431b8a10(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x18), lVar2 != 0)) {
    do {
      plVar1 = (longlong *)(lVar2 + -0x18);
      if (lVar2 == 0) {
        plVar1 = (longlong *)0x0;
      }
      if (((param_2 == 0) || (plVar1[6] == param_2)) &&
         ((param_4 == 0 || (param_4 == (int)plVar1[0x40])))) {
        (**(code **)(*plVar1 + 0x28))(plVar1,param_3);
      }
      lVar2 = *(longlong *)(lVar2 + 0x50);
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1431b8aa0 FUN_1431b8aa0 body=77 status=ok
// SIG undefined FUN_1431b8aa0(void)

void FUN_1431b8aa0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x18);
  if (lVar2 != 0) {
    do {
      lVar1 = lVar2 + -0x18;
      if (lVar2 == 0) {
        lVar1 = 0;
      }
      FUN_14317e5e0(lVar1,param_2);
      lVar2 = *(longlong *)(lVar2 + 0x50);
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1431b8af0 FUN_1431b8af0 body=145 status=ok
// SIG undefined FUN_1431b8af0(void)

void FUN_1431b8af0(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  char cVar2;
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    for (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x18); lVar1 != 0;
        lVar1 = *(longlong *)(lVar1 + 0x50)) {
      if (((param_5 == (undefined8 *)0x0) ||
          (cVar2 = (**(code **)*param_5)(param_5,lVar1 + 0x18), cVar2 == '\0')) &&
         ((param_4 == 0 || (*(longlong *)(lVar1 + 0x18) == param_4)))) {
        FUN_14317c310(lVar1,param_2,param_3);
      }
    }
  }
  return;
}



// FUNCTION 1431b8b90 FUN_1431b8b90 body=64 status=ok
// SIG undefined FUN_1431b8b90(void)

void FUN_1431b8b90(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    for (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x18); lVar1 != 0;
        lVar1 = *(longlong *)(lVar1 + 0x50)) {
      FUN_14317c6b0(lVar1,param_2);
    }
  }
  return;
}



// FUNCTION 1431b8bd0 FUN_1431b8bd0 body=91 status=ok
// SIG undefined FUN_1431b8bd0(void)

void FUN_1431b8bd0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x18), lVar2 != 0)) {
    do {
      lVar1 = lVar2 + -0x18;
      if (lVar2 == 0) {
        lVar1 = 0;
      }
      FUN_14317f680(lVar1,param_2);
      lVar2 = *(longlong *)(lVar2 + 0x50);
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1431b8c30 AddPointsInArea body=227 status=ok
// SIG undefined AddPointsInArea(void)

void AkVBAPMap::AddPointsInArea
               (undefined8 param_1,float *param_2,longlong *param_3,undefined8 param_4,
               longlong *param_5)

{
  float fVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  
  puVar3 = (undefined4 *)*param_3;
  if (puVar3 != puVar3 + (ulonglong)*(uint *)(param_3 + 1) * 6) {
    pfVar5 = (float *)(puVar3 + 5);
    do {
      fVar1 = *pfVar5;
      fVar6 = ABS(pfVar5[-1] - param_2[1]);
      fVar7 = ABS(pfVar5[-2] - *param_2);
      if ((fVar6 + fVar7 <= fVar1) ||
         (((fVar7 <= fVar1 && (fVar6 <= fVar1)) &&
          (fVar6 * fVar6 + fVar7 * fVar7 <= (fVar1 + 0.05) * (fVar1 + 0.05))))) {
        uVar4 = (ulonglong)*(uint *)((longlong)param_5 + 0xc);
        lVar2 = *param_5;
        *(uint *)((longlong)param_5 + 0xc) = *(uint *)((longlong)param_5 + 0xc) + 1;
        fVar1 = pfVar5[-3];
        fVar6 = pfVar5[-4];
        *(undefined4 *)(lVar2 + uVar4 * 0x18) = *puVar3;
        *(float *)(lVar2 + 4 + uVar4 * 0x18) = fVar6;
        *(float *)(lVar2 + 8 + uVar4 * 0x18) = fVar1;
      }
      puVar3 = puVar3 + 6;
      pfVar5 = pfVar5 + 6;
    } while (puVar3 != (undefined4 *)(*param_3 + (ulonglong)*(uint *)(param_3 + 1) * 0x18));
  }
  return;
}



// FUNCTION 1431b8d20 Allocate body=487 status=ok
// SIG undefined Allocate(void)

undefined8 AkVBAPMap::Allocate(uint *param_1,longlong *param_2,int param_3)

{
  uint uVar1;
  void *pvVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar1 = (param_3 + 1U) * 2;
  *param_1 = param_3 + 1U;
  if (uVar1 != 0) {
    pvVar2 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,(ulonglong)uVar1 * 0x18);
    *(void **)(param_1 + 2) = pvVar2;
    if (pvVar2 != (void *)0x0) {
      param_1[5] = uVar1;
    }
  }
  uVar1 = *param_1 * 2;
  if (uVar1 != 0) {
    pvVar2 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,(ulonglong)uVar1 * 0x18);
    *(void **)(param_1 + 6) = pvVar2;
    if (pvVar2 != (void *)0x0) {
      param_1[9] = uVar1;
    }
  }
  uVar1 = *param_1 * 2;
  if (uVar1 != 0) {
    pvVar2 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,(ulonglong)uVar1 * 0x18);
    *(void **)(param_1 + 10) = pvVar2;
    if (pvVar2 != (void *)0x0) {
      param_1[0xd] = uVar1;
    }
  }
  uVar1 = *param_1 * 2;
  if (uVar1 != 0) {
    pvVar2 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,(ulonglong)uVar1 * 0x18);
    *(void **)(param_1 + 0xe) = pvVar2;
    if (pvVar2 != (void *)0x0) {
      param_1[0x11] = uVar1;
    }
  }
  uVar3 = (**(code **)(*param_2 + 8))(param_2,(ulonglong)*param_1 * 0xc);
  *(undefined8 *)(param_1 + 0x12) = uVar3;
  uVar3 = (**(code **)(*param_2 + 8))(param_2,(ulonglong)*param_1 << 3);
  *(undefined8 *)(param_1 + 0x14) = uVar3;
  lVar4 = (**(code **)(*param_2 + 8))(param_2,(ulonglong)*param_1 << 3);
  *(longlong *)(param_1 + 0x16) = lVar4;
  if (((*(longlong *)(param_1 + 0x12) != 0) && (*(longlong *)(param_1 + 0x14) != 0)) && (lVar4 != 0)
     ) {
    return 1;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    param_1[4] = 0;
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,*(void **)(param_1 + 2));
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[5] = 0;
  }
  if (*(void **)(param_1 + 6) != (void *)0x0) {
    param_1[8] = 0;
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,*(void **)(param_1 + 6));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 10) != (void *)0x0) {
    param_1[0xc] = 0;
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,*(void **)(param_1 + 10));
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  if (*(void **)(param_1 + 0xe) != (void *)0x0) {
    param_1[0x10] = 0;
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,*(void **)(param_1 + 0xe));
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x11] = 0;
  }
  if (*(longlong *)(param_1 + 0x12) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  if (*(longlong *)(param_1 + 0x14) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  if (*(longlong *)(param_1 + 0x16) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return 0x34;
}



// FUNCTION 1431b8f10 ComputeVBAP2D body=319 status=ok
// SIG undefined ComputeVBAP2D(void)

ulonglong AkVBAPMap::ComputeVBAP2D(int *param_1,uint *param_2,float *param_3,longlong param_4)

{
  float fVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  bVar7 = 0;
  uVar3 = *param_2;
  if (uVar3 == *param_1 - 1U) {
    uVar3 = param_2[1];
  }
  uVar5 = param_2[2];
  if (uVar5 == *param_1 - 1U) {
    uVar5 = param_2[1];
  }
  lVar2 = *(longlong *)(param_1 + 0x12);
  uVar4 = (ulonglong)uVar3;
  uVar6 = (ulonglong)uVar5;
  fVar10 = *(float *)(lVar2 + uVar4 * 0xc);
  fVar8 = *(float *)(lVar2 + 4 + uVar4 * 0xc);
  fVar9 = *(float *)(lVar2 + uVar6 * 0xc);
  fVar1 = *(float *)(lVar2 + 4 + uVar6 * 0xc);
  fVar11 = fVar1 * fVar10 - fVar9 * fVar8;
  if ((1e-38 <= fVar11) || (fVar11 <= -1e-38)) {
    fVar11 = 1.0 / fVar11;
    fVar9 = fVar1 * fVar11 * *param_3 - fVar9 * fVar11 * param_3[1];
    fVar10 = fVar10 * fVar11 * param_3[1] - fVar8 * fVar11 * *param_3;
    if ((fVar9 < -1e-05) || (fVar10 < -1e-05)) goto LAB_1431b903c;
  }
  else {
    fVar9 = 0.0;
    fVar10 = 0.0;
  }
  fVar8 = fVar10 * fVar10 + fVar9 * fVar9;
  if ((fVar8 < 1e-38) && (-1e-38 < fVar8)) {
    return uVar6 * 3 & 0xffffffffffffff00;
  }
  bVar7 = 1;
  *(float *)(param_4 + uVar4 * 4) = (1.0 / fVar8) * fVar9 * fVar9 + *(float *)(param_4 + uVar4 * 4);
  *(float *)(param_4 + uVar6 * 4) =
       (1.0 / fVar8) * fVar10 * fVar10 + *(float *)(param_4 + uVar6 * 4);
LAB_1431b903c:
  return (ulonglong)bVar7;
}



// FUNCTION 1431b9050 ComputeVBAP3D body=856 status=ok
// SIG undefined ComputeVBAP3D(void)

ulonglong AkVBAPMap::ComputeVBAP3D(longlong param_1,uint *param_2,float *param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
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
  
  lVar6 = *(longlong *)(param_1 + 0x48);
  uVar9 = (ulonglong)*param_2;
  uVar8 = (ulonglong)param_2[2];
  uVar7 = (ulonglong)param_2[1];
  fVar11 = *(float *)(lVar6 + 8 + uVar8 * 0xc);
  fVar10 = *(float *)(lVar6 + uVar8 * 0xc);
  fVar14 = *(float *)(lVar6 + 8 + uVar7 * 0xc);
  fVar1 = *(float *)(lVar6 + uVar9 * 0xc);
  fVar13 = *(float *)(lVar6 + 8 + uVar9 * 0xc);
  fVar15 = *(float *)(lVar6 + uVar7 * 0xc);
  fVar12 = fVar13 * *(float *)(lVar6 + 4 + uVar7 * 0xc);
  fVar18 = fVar1 * *(float *)(lVar6 + 4 + uVar7 * 0xc);
  fVar17 = fVar14 * *(float *)(lVar6 + 4 + uVar9 * 0xc);
  fVar19 = fVar15 * *(float *)(lVar6 + 4 + uVar9 * 0xc);
  fVar14 = fVar14 * fVar1;
  fVar15 = fVar15 * fVar13;
  fVar13 = (fVar17 * fVar10 + fVar18 * fVar11 + fVar15 * *(float *)(lVar6 + 4 + uVar8 * 0xc)) -
           (fVar12 * fVar10 + fVar19 * fVar11 + fVar14 * *(float *)(lVar6 + 4 + uVar8 * 0xc));
  if ((1e-38 <= fVar13) || (fVar13 <= -1e-38)) {
    fVar2 = *(float *)(lVar6 + 4 + uVar8 * 0xc);
    fVar3 = *param_3;
    fVar4 = param_3[2];
    fVar13 = 1.0 / fVar13;
    fVar5 = param_3[1];
    fVar16 = (fVar11 * *(float *)(lVar6 + 4 + uVar7 * 0xc) -
             fVar2 * *(float *)(lVar6 + 8 + uVar7 * 0xc)) * fVar13 * fVar3 +
             (fVar10 * *(float *)(lVar6 + 8 + uVar7 * 0xc) -
             *(float *)(lVar6 + uVar7 * 0xc) * fVar11) * fVar13 * fVar5 +
             (fVar2 * *(float *)(lVar6 + uVar7 * 0xc) - fVar10 * *(float *)(lVar6 + 4 + uVar7 * 0xc)
             ) * fVar13 * fVar4;
    fVar2 = *(float *)(lVar6 + 4 + uVar8 * 0xc);
    fVar14 = (fVar15 - fVar14) * fVar13 * fVar5 + (fVar17 - fVar12) * fVar13 * fVar3 +
             (fVar18 - fVar19) * fVar13 * fVar4;
    fVar11 = (fVar2 * *(float *)(lVar6 + 8 + uVar9 * 0xc) -
             *(float *)(lVar6 + 4 + uVar9 * 0xc) * fVar11) * fVar13 * fVar3 +
             (fVar11 * *(float *)(lVar6 + uVar9 * 0xc) -
             *(float *)(lVar6 + 8 + uVar9 * 0xc) * fVar10) * fVar13 * fVar5 +
             (fVar10 * *(float *)(lVar6 + 4 + uVar9 * 0xc) - fVar2 * fVar1) * fVar13 * fVar4;
    if (fVar16 < -1e-05) {
      return 0;
    }
    if (fVar11 < -1e-05) {
      return 0;
    }
    if (fVar14 < -1e-05) {
      return 0;
    }
  }
  else {
    fVar16 = 0.0;
    fVar11 = 0.0;
    fVar14 = 0.0;
  }
  fVar10 = fVar11 * fVar11 + fVar16 * fVar16 + fVar14 * fVar14;
  if ((1e-38 <= fVar10) || (fVar10 <= -1e-38)) {
    fVar10 = 1.0 / fVar10;
    uVar8 = 1;
    *(float *)(param_4 + uVar9 * 4) = fVar10 * fVar16 * fVar16 + *(float *)(param_4 + uVar9 * 4);
    *(float *)(param_4 + (ulonglong)param_2[1] * 4) =
         fVar10 * fVar11 * fVar11 + *(float *)(param_4 + (ulonglong)param_2[1] * 4);
    *(float *)(param_4 + (ulonglong)param_2[2] * 4) =
         fVar10 * fVar14 * fVar14 + *(float *)(param_4 + (ulonglong)param_2[2] * 4);
  }
  else {
    uVar8 = uVar9 * 3 & 0xffffffffffffff00;
  }
  return uVar8;
}



// FUNCTION 1431b93b0 ComputeVBAP body=64 status=ok
// SIG undefined ComputeVBAP(void)

void AkVBAPMap::ComputeVBAP
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5)

{
  ComputeVBAPSquared();
  NormalizePreSquaredGain(param_1,param_4,param_5);
  return;
}



// FUNCTION 1431b93f0 ComputeVBAPSquared body=450 status=ok
// SIG undefined ComputeVBAPSquared(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void AkVBAPMap::ComputeVBAPSquared
               (int *param_1,undefined4 param_2,undefined4 param_3,uint param_4,void *param_5)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ushort uVar9;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 auStack_b0 [5];
  longlong alStack_88 [2];
  undefined8 local_78;
  uint local_70;
  longlong local_68;
  uint local_60;
  uint local_5c;
  ulonglong uVar10;
  float fVar13;
  
  auStack_b0[0] = 0x1431b944e;
  uVar11 = __libm_sse2_sincosf_(param_3);
  fVar13 = (float)((ulonglong)uVar11 >> 0x20);
  auStack_b0[0] = 0x1431b9468;
  uVar12 = __libm_sse2_sincosf_(param_2);
  local_60 = param_4 * 2;
  uVar10 = 0;
  local_5c = 0;
  local_78 = CONCAT44((float)uVar12 * fVar13,(float)((ulonglong)uVar12 >> 0x20) * fVar13);
  uVar8 = (ulonglong)local_60 * 0x18 + 0xf;
  if (uVar8 <= (ulonglong)local_60 * 0x18) {
    uVar8 = 0xffffffffffffff0;
  }
  auStack_b0[0] = 0x1431b94b3;
  lVar2 = -(uVar8 & 0xfffffffffffffff0);
  local_68 = (longlong)&local_78 + lVar2;
  local_70 = (uint)uVar11;
  *(longlong **)((longlong)alStack_88 + lVar2) = &local_68;
  *(undefined8 *)((longlong)auStack_b0 + lVar2) = 0x1431b94df;
  FindTriangle(param_1,&local_78,param_2,param_3);
  if (param_4 != 0) {
    *(undefined8 *)((longlong)auStack_b0 + lVar2) = 0x1431b94fc;
    ::_guard_xfg_dispatch_icall_nop(param_5,0,(ulonglong)param_4 << 2);
  }
  uVar6 = local_5c;
  lVar5 = local_68;
  uVar4 = local_70;
  lVar3 = local_78;
  if (local_5c != 0) {
    do {
      iVar7 = *param_1 + -1;
      piVar1 = (int *)(lVar5 + uVar10 * 0x18);
      if (((*piVar1 == iVar7) || (piVar1[1] == iVar7)) || (piVar1[2] == iVar7)) {
        local_68 = lVar3;
        local_60 = uVar4;
        *(undefined8 *)((longlong)auStack_b0 + lVar2) = 0x1431b956f;
        ComputeVBAP2D(param_1,piVar1,&local_68,param_5);
      }
      else {
        local_78 = lVar3;
        local_70 = uVar4;
        *(undefined8 *)((longlong)auStack_b0 + lVar2) = 0x1431b9555;
        ComputeVBAP3D(param_1,piVar1,&local_78,param_5);
      }
      uVar9 = (short)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
    } while (uVar9 < uVar6);
  }
  return;
}



// FUNCTION 1431b95c0 ComputeVBAPSquared body=514 status=ok
// SIG undefined ComputeVBAPSquared(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void AkVBAPMap::ComputeVBAPSquared
               (int *param_1,float param_2,float param_3,float param_4,uint param_5,void *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ushort uVar8;
  float fVar10;
  float fVar11;
  undefined8 auStack_b0 [5];
  longlong alStack_88 [2];
  undefined8 local_78;
  float local_70;
  longlong local_68;
  float local_60;
  uint local_5c;
  ulonglong uVar9;
  
  uVar9 = 0;
  local_60 = (float)(param_5 * 2);
  uVar7 = (ulonglong)(uint)local_60 * 0x18 + 0xf;
  local_78 = CONCAT44(param_3,param_2);
  local_5c = 0;
  if (uVar7 <= (ulonglong)(uint)local_60 * 0x18) {
    uVar7 = 0xffffffffffffff0;
  }
  auStack_b0[0] = 0x1431b9653;
  lVar2 = -(uVar7 & 0xfffffffffffffff0);
  local_68 = (longlong)&local_78 + lVar2;
  local_70 = param_4;
  *(undefined8 *)((longlong)auStack_b0 + lVar2) = 0x1431b966b;
  fVar10 = ::_guard_xfg_dispatch_icall_nop(param_3,param_2);
  *(undefined8 *)((longlong)auStack_b0 + lVar2) = 0x1431b969e;
  fVar11 = ::_guard_xfg_dispatch_icall_nop
                     (param_4 / SQRT(param_2 * param_2 + param_3 * param_3 + param_4 * param_4));
  if (3.1415927 < fVar10) {
    fVar10 = fVar10 - 6.2831855;
  }
  if (fVar10 < -3.1415927) {
    fVar10 = fVar10 + 6.2831855;
  }
  if (1.5707964 < fVar11) {
    fVar11 = fVar11 - 3.1415927;
  }
  if (fVar11 < -1.5707964) {
    fVar11 = fVar11 + 3.1415927;
  }
  *(longlong **)((longlong)alStack_88 + lVar2) = &local_68;
  *(undefined8 *)((longlong)auStack_b0 + lVar2) = 0x1431b96f9;
  FindTriangle(param_1,&local_78,fVar10,fVar11);
  if (param_5 != 0) {
    *(undefined8 *)((longlong)auStack_b0 + lVar2) = 0x1431b9716;
    ::_guard_xfg_dispatch_icall_nop(param_6,0,(ulonglong)param_5 << 2);
  }
  uVar5 = local_5c;
  lVar4 = local_68;
  fVar10 = local_70;
  lVar3 = local_78;
  if (local_5c != 0) {
    do {
      iVar6 = *param_1 + -1;
      piVar1 = (int *)(lVar4 + uVar9 * 0x18);
      if (((*piVar1 == iVar6) || (piVar1[1] == iVar6)) || (piVar1[2] == iVar6)) {
        local_68 = lVar3;
        local_60 = fVar10;
        *(undefined8 *)((longlong)auStack_b0 + lVar2) = 0x1431b977f;
        ComputeVBAP2D(param_1,piVar1,&local_68,param_6);
      }
      else {
        local_78 = lVar3;
        local_70 = fVar10;
        *(undefined8 *)((longlong)auStack_b0 + lVar2) = 0x1431b9765;
        ComputeVBAP3D(param_1,piVar1,&local_78,param_6);
      }
      uVar8 = (short)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while (uVar8 < uVar5);
  }
  return;
}



// FUNCTION 1431b97d0 FindPointInTriangle body=637 status=ok
// SIG undefined FindPointInTriangle(void)

longlong AkVBAPMap::FindPointInTriangle
                   (uint *param_1,float *param_2,uint param_3,uint param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint7 uVar9;
  longlong lVar8;
  uint uVar10;
  float *pfVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar1 = param_2[(longlong)(int)param_3 * 2 + 1];
  fVar2 = param_2[(longlong)(int)param_3 * 2];
  fVar13 = (param_2[(longlong)(int)param_5 * 2 + 1] - fVar1) *
           (param_2[(longlong)(int)param_4 * 2] - fVar2) -
           (param_2[(longlong)(int)param_4 * 2 + 1] - fVar1) *
           (param_2[(longlong)(int)param_5 * 2] - fVar2);
  uVar9 = (uint7)(int3)(param_3 >> 8);
  if (fVar13 == 0.0) {
    lVar8 = CONCAT71(uVar9,1);
  }
  else {
    uVar12 = param_5;
    if (0.0 <= fVar13) {
      uVar12 = param_4;
      param_4 = param_5;
    }
    lVar8 = (ulonglong)uVar9 << 8;
    uVar10 = 0;
    if (*param_1 != 0) {
      pfVar11 = param_2;
      do {
        if ((char)lVar8 != '\0') {
          return lVar8;
        }
        if (((uVar10 != param_3) && (uVar10 != uVar12)) && (uVar10 != param_4)) {
          fVar13 = *pfVar11;
          fVar3 = pfVar11[1];
          fVar4 = param_2[(longlong)(int)uVar12 * 2];
          fVar5 = param_2[(longlong)(int)param_4 * 2];
          fVar15 = fVar3 * fVar3;
          fVar14 = fVar13 * fVar13;
          fVar6 = param_2[(longlong)(int)uVar12 * 2 + 1];
          fVar16 = ((fVar2 * fVar2 - fVar14) + fVar1 * fVar1) - fVar15;
          fVar7 = param_2[(longlong)(int)param_4 * 2 + 1];
          fVar17 = ((fVar4 * fVar4 - fVar14) + fVar6 * fVar6) - fVar15;
          fVar15 = ((fVar5 * fVar5 - fVar14) + fVar7 * fVar7) - fVar15;
          lVar8 = CONCAT71((int7)((ulonglong)lVar8 >> 8),
                           0.01 < (fVar17 * (fVar1 - fVar3) * (fVar5 - fVar13) +
                                   (fVar6 - fVar3) * (fVar2 - fVar13) * fVar15 +
                                  (fVar4 - fVar13) * fVar16 * (fVar7 - fVar3)) -
                                  ((fVar6 - fVar3) * fVar16 * (fVar5 - fVar13) +
                                   (fVar4 - fVar13) * (fVar1 - fVar3) * fVar15 +
                                  fVar17 * (fVar2 - fVar13) * (fVar7 - fVar3)));
        }
        uVar10 = uVar10 + 1;
        pfVar11 = pfVar11 + 2;
      } while (uVar10 < *param_1);
    }
  }
  return lVar8;
}



// FUNCTION 1431b9a50 FindTriangle body=581 status=ok
// SIG undefined FindTriangle(void)

void AkVBAPMap::FindTriangle
               (longlong param_1,float *param_2,float param_3,float param_4,undefined8 param_5)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_58;
  float local_54;
  
  local_58 = param_3;
  local_54 = param_4;
  if (param_4 <= 0.0) {
    AddPointsInArea(0,&local_58,param_1 + 0x28,*(undefined8 *)(param_1 + 0x50),param_5);
    fVar4 = -*param_2;
    fVar1 = param_2[2];
    fVar5 = -param_2[1];
    fVar3 = ::_guard_xfg_dispatch_icall_nop(fVar1,fVar4);
    local_58 = fVar3;
    local_54 = ::_guard_xfg_dispatch_icall_nop
                         (fVar5 / SQRT(fVar1 * fVar1 + fVar4 * fVar4 + fVar5 * fVar5));
    if (3.1415927 < fVar3) {
      fVar3 = fVar3 - 6.2831855;
      local_58 = fVar3;
    }
    if (fVar3 < -3.1415927) {
      local_58 = fVar3 + 6.2831855;
    }
    if (1.5707964 < local_54) {
      local_54 = local_54 - 3.1415927;
    }
    if (local_54 < -1.5707964) {
      local_54 = local_54 + 3.1415927;
    }
    lVar2 = 0x38;
  }
  else {
    AddPointsInArea(0,&local_58,param_1 + 8,*(undefined8 *)(param_1 + 0x50),param_5);
    fVar4 = -*param_2;
    fVar1 = param_2[2];
    fVar5 = -param_2[1];
    fVar3 = ::_guard_xfg_dispatch_icall_nop(fVar1,fVar4);
    local_58 = fVar3;
    local_54 = ::_guard_xfg_dispatch_icall_nop
                         (fVar5 / SQRT(fVar1 * fVar1 + fVar4 * fVar4 + fVar5 * fVar5));
    if (3.1415927 < fVar3) {
      fVar3 = fVar3 - 6.2831855;
      local_58 = fVar3;
    }
    if (fVar3 < -3.1415927) {
      local_58 = fVar3 + 6.2831855;
    }
    if (1.5707964 < local_54) {
      local_54 = local_54 - 3.1415927;
    }
    if (local_54 < -1.5707964) {
      local_54 = local_54 + 3.1415927;
    }
    lVar2 = 0x18;
  }
  AddPointsInArea(param_1,&local_58,lVar2 + param_1,*(undefined8 *)(param_1 + 0x58),param_5);
  return;
}



// FUNCTION 1431b9ca0 NormalizePreSquaredGain body=481 status=ok
// SIG undefined NormalizePreSquaredGain(void)

void AkVBAPMap::NormalizePreSquaredGain(undefined8 param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  float *pfVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar9 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar4 = 0;
  fVar8 = 0.0;
  fVar10 = 0.0;
  fVar11 = 0.0;
  fVar12 = 0.0;
  if (param_2 != 0) {
    uVar7 = uVar4;
    if (7 < param_2) {
      fVar13 = 0.0;
      fVar14 = 0.0;
      fVar15 = 0.0;
      fVar16 = 0.0;
      do {
        iVar5 = (int)uVar7;
        pfVar3 = (float *)(param_3 + uVar7 * 4);
        uVar6 = iVar5 + 8;
        uVar7 = (ulonglong)uVar6;
        fVar13 = fVar13 + *pfVar3;
        fVar14 = fVar14 + pfVar3[1];
        fVar15 = fVar15 + pfVar3[2];
        fVar16 = fVar16 + pfVar3[3];
        pfVar3 = (float *)(param_3 + (ulonglong)(iVar5 + 4) * 4);
        fVar8 = fVar8 + *pfVar3;
        fVar10 = fVar10 + pfVar3[1];
        fVar11 = fVar11 + pfVar3[2];
        fVar12 = fVar12 + pfVar3[3];
      } while (uVar6 < (param_2 & 0xfffffff8));
      fVar8 = fVar15 + fVar11 + fVar13 + fVar8 + fVar16 + fVar12 + fVar14 + fVar10;
    }
    uVar6 = (uint)uVar7;
    if (uVar6 < param_2) {
      if (3 < param_2 - uVar6) {
        uVar1 = ((param_2 - uVar6) - 4 >> 2) + 1;
        pfVar3 = (float *)(param_3 + (uVar7 + 2) * 4);
        uVar7 = (ulonglong)uVar1;
        uVar6 = uVar6 + uVar1 * 4;
        do {
          fVar8 = fVar8 + pfVar3[-2] + pfVar3[-1] + *pfVar3 + pfVar3[1];
          pfVar3 = pfVar3 + 4;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if (uVar6 < param_2) {
        pfVar3 = (float *)(param_3 + (ulonglong)uVar6 * 4);
        uVar7 = (ulonglong)(param_2 - uVar6);
        do {
          fVar8 = fVar8 + *pfVar3;
          pfVar3 = pfVar3 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    if (fVar8 != 0.0) goto LAB_1431b9d88;
  }
  fVar8 = fVar8 + 1.0;
LAB_1431b9d88:
  fVar8 = 1.0 / fVar8;
  if (param_2 != 0) {
    if (3 < param_2) {
      do {
        pfVar3 = (float *)(param_3 + uVar4 * 4);
        auVar9._0_4_ = fVar8 * *pfVar3;
        auVar9._4_4_ = fVar8 * pfVar3[1];
        auVar9._8_4_ = fVar8 * pfVar3[2];
        auVar9._12_4_ = fVar8 * pfVar3[3];
        auVar9 = sqrtps(auVar9,auVar9);
        *(undefined1 (*) [16])(param_3 + uVar4 * 4) = auVar9;
        uVar6 = (int)uVar4 + 4;
        uVar4 = (ulonglong)uVar6;
      } while (uVar6 < (param_2 & 0xfffffffc));
    }
    uVar6 = (uint)uVar4;
    if (uVar6 < param_2) {
      if (3 < param_2 - uVar6) {
        lVar2 = uVar4 + 2;
        uVar1 = ((param_2 - uVar6) - 4 >> 2) + 1;
        uVar7 = (ulonglong)uVar1;
        uVar4 = (ulonglong)(uVar6 + uVar1 * 4);
        pfVar3 = (float *)(param_3 + lVar2 * 4);
        do {
          pfVar3[-2] = SQRT(fVar8 * pfVar3[-2]);
          pfVar3[-1] = SQRT(fVar8 * pfVar3[-1]);
          *pfVar3 = SQRT(fVar8 * *pfVar3);
          pfVar3[1] = SQRT(fVar8 * pfVar3[1]);
          uVar7 = uVar7 - 1;
          pfVar3 = pfVar3 + 4;
        } while (uVar7 != 0);
      }
      if ((uint)uVar4 < param_2) {
        uVar7 = (ulonglong)(param_2 - (uint)uVar4);
        pfVar3 = (float *)(param_3 + uVar4 * 4);
        do {
          *pfVar3 = SQRT(fVar8 * *pfVar3);
          uVar7 = uVar7 - 1;
          pfVar3 = pfVar3 + 1;
        } while (uVar7 != 0);
      }
    }
  }
  return;
}



// FUNCTION 1431b9e90 PointsToVBAPMap body=932 status=ok
// SIG undefined PointsToVBAPMap(void)

void AkVBAPMap::PointsToVBAPMap(int *param_1,longlong param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (param_3 != 0) {
    lVar7 = 0;
    lVar6 = 0;
    uVar5 = (ulonglong)param_3;
    do {
      fVar9 = *(float *)(param_2 + 4 + lVar6);
      fVar11 = *(float *)(param_2 + 8 + lVar6);
      if (3.1415927 < fVar9) {
        fVar9 = fVar9 + -6.2831855;
      }
      if (fVar9 < -3.1415927) {
        fVar9 = fVar9 + 6.2831855;
      }
      if (1.5707964 < fVar11) {
        fVar11 = fVar11 + -3.1415927;
      }
      if (fVar11 < -1.5707964) {
        fVar11 = fVar11 + 3.1415927;
      }
      lVar2 = *(longlong *)(param_1 + 0x12);
      uVar8 = __libm_sse2_sincosf4_(fVar11,fVar9);
      fVar10 = (float)((ulonglong)uVar8 >> 0x20);
      *(int *)(lVar6 + 8 + lVar2) = (int)uVar8;
      *(float *)(lVar6 + lVar2) = extraout_XMM0_Dd * fVar10;
      *(float *)(lVar6 + 4 + lVar2) = extraout_XMM0_Dc * fVar10;
      lVar2 = *(longlong *)(param_1 + 0x14);
      *(float *)(lVar7 + lVar2) = fVar9;
      *(float *)(lVar7 + 4 + lVar2) = fVar11;
      lVar2 = *(longlong *)(param_1 + 0x12);
      lVar3 = *(longlong *)(param_1 + 0x16);
      fVar9 = *(float *)(lVar6 + 8 + lVar2);
      fVar10 = -*(float *)(lVar6 + lVar2);
      fVar12 = -*(float *)(lVar6 + 4 + lVar2);
      fVar11 = ::_guard_xfg_dispatch_icall_nop(fVar9,fVar10);
      *(float *)(lVar7 + lVar3) = fVar11;
      fVar9 = ::_guard_xfg_dispatch_icall_nop
                        (fVar12 / SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar12 * fVar12));
      *(float *)(lVar7 + 4 + lVar3) = fVar9;
      if (3.1415927 < fVar11) {
        fVar11 = fVar11 - 6.2831855;
        *(float *)(lVar7 + lVar3) = fVar11;
      }
      if (fVar11 < -3.1415927) {
        *(float *)(lVar7 + lVar3) = fVar11 + 6.2831855;
      }
      if (1.5707964 < fVar9) {
        fVar9 = fVar9 - 3.1415927;
        *(float *)(lVar7 + 4 + lVar3) = fVar9;
      }
      if (fVar9 < -1.5707964) {
        *(float *)(lVar7 + 4 + lVar3) = fVar9 + 3.1415927;
      }
      lVar6 = lVar6 + 0xc;
      lVar7 = lVar7 + 8;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  uVar5 = (ulonglong)(*param_1 - 1);
  lVar6 = *(longlong *)(param_1 + 0x12);
  *(undefined4 *)(lVar6 + uVar5 * 0xc) = 0xb33bbd2e;
  *(undefined4 *)(lVar6 + 4 + uVar5 * 0xc) = 0x80000000;
  *(undefined4 *)(lVar6 + 8 + uVar5 * 0xc) = 0xbf800000;
  lVar6 = *(longlong *)(param_1 + 0x14);
  iVar1 = *param_1;
  *(undefined4 *)(lVar6 + (ulonglong)(iVar1 - 1) * 8) = 0;
  *(undefined4 *)(lVar6 + 4 + (ulonglong)(iVar1 - 1) * 8) = 0xbfc90fdb;
  lVar6 = *(longlong *)(param_1 + 0x16);
  uVar5 = (ulonglong)(*param_1 - 1U);
  uVar4 = (ulonglong)(*param_1 - 1U);
  lVar7 = *(longlong *)(param_1 + 0x12);
  fVar9 = *(float *)(lVar7 + 8 + uVar5 * 0xc);
  fVar10 = -*(float *)(lVar7 + uVar5 * 0xc);
  fVar12 = -*(float *)(lVar7 + 4 + uVar5 * 0xc);
  fVar11 = ::_guard_xfg_dispatch_icall_nop(fVar9,fVar10);
  *(float *)(lVar6 + uVar4 * 8) = fVar11;
  fVar9 = ::_guard_xfg_dispatch_icall_nop
                    (fVar12 / SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar12 * fVar12));
  *(float *)(lVar6 + 4 + uVar4 * 8) = fVar9;
  if (3.1415927 < fVar11) {
    fVar11 = fVar11 - 6.2831855;
    *(float *)(lVar6 + uVar4 * 8) = fVar11;
  }
  if (fVar11 < -3.1415927) {
    *(float *)(lVar6 + uVar4 * 8) = fVar11 + 6.2831855;
  }
  if (1.5707964 < fVar9) {
    fVar9 = fVar9 - 3.1415927;
    *(float *)(lVar6 + 4 + uVar4 * 8) = fVar9;
  }
  if (fVar9 < -1.5707964) {
    *(float *)(lVar6 + 4 + uVar4 * 8) = fVar9 + 3.1415927;
  }
  FUN_1431ba240(param_1,*(undefined8 *)(param_1 + 0x14),0,0,param_1 + 2,param_1 + 10);
  FUN_1431ba240(param_1,*(undefined8 *)(param_1 + 0x16),param_1 + 2,param_1 + 10,param_1 + 6,
                param_1 + 0xe);
  return;
}



// FUNCTION 1431ba240 FUN_1431ba240 body=1340 status=ok
// SIG undefined FUN_1431ba240(void)

void FUN_1431ba240(uint *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  char cVar10;
  uint *puVar11;
  void *pvVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  void *pvVar15;
  longlong *plVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  undefined8 *puVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  uint local_f8;
  
  uVar22 = *param_1;
  uVar23 = 0;
  if (uVar22 != 2) {
    do {
      uVar1 = uVar23 + 1;
      if (uVar1 < uVar22 - 1) {
        local_f8 = uVar23 + 2;
        uVar17 = uVar1;
        do {
          uVar18 = (ulonglong)uVar17;
          uVar19 = local_f8;
          if (local_f8 < uVar22) {
            do {
              uVar22 = uVar22 - 1;
              if (((uVar23 == uVar22) || (uVar17 == uVar22)) ||
                 (plVar16 = param_5, puVar24 = param_3, uVar19 == uVar22)) {
                plVar16 = param_6;
                puVar24 = param_4;
              }
              cVar10 = AkVBAPMap::FindPointInTriangle(param_1,param_2,uVar23,uVar18,uVar19);
              if (cVar10 == '\0') {
                if (puVar24 != (undefined8 *)0x0) {
                  bVar9 = false;
                  puVar11 = (uint *)*puVar24;
                  puVar21 = puVar11 + (ulonglong)*(uint *)(puVar24 + 1) * 6;
                  if (puVar11 != puVar21) {
                    do {
                      if (bVar9) goto LAB_1431ba69a;
                      if (((uVar23 == *puVar11) && (uVar17 == puVar11[1])) &&
                         (bVar9 = false, uVar19 == puVar11[2])) {
                        bVar9 = true;
                      }
                      puVar11 = puVar11 + 6;
                    } while (puVar11 != puVar21);
                    if (bVar9) goto LAB_1431ba69a;
                  }
                }
                uVar22 = *(uint *)(plVar16 + 1);
                if (uVar22 < *(uint *)((longlong)plVar16 + 0xc)) {
LAB_1431ba476:
                  uVar22 = *(uint *)(plVar16 + 1);
                  *(uint *)(plVar16 + 1) = uVar22 + 1;
                  puVar21 = (uint *)(*plVar16 + (ulonglong)uVar22 * 0x18);
                }
                else {
                  uVar2 = *(uint *)((longlong)plVar16 + 0xc) + 4;
                  pvVar12 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,(ulonglong)uVar2 * 0x18);
                  if (pvVar12 != (void *)0x0) {
                    pvVar15 = (void *)*plVar16;
                    if ((pvVar15 != (void *)0x0) && (pvVar15 != pvVar12)) {
                      uVar20 = (ulonglong)*(uint *)(plVar16 + 1);
                      if (uVar20 != 0) {
                        puVar14 = (undefined4 *)((longlong)pvVar12 + 0x14);
                        do {
                          puVar13 = (undefined4 *)
                                    ((longlong)puVar14 + *plVar16 + (-0x14 - (longlong)pvVar12));
                          puVar14[-5] = *puVar13;
                          puVar14[-4] = puVar13[1];
                          puVar14[-3] = puVar13[2];
                          puVar14[-2] = puVar13[3];
                          puVar14[-1] = puVar13[4];
                          *puVar14 = puVar13[5];
                          uVar20 = uVar20 - 1;
                          puVar14 = puVar14 + 6;
                        } while (uVar20 != 0);
                        pvVar15 = (void *)*plVar16;
                      }
                      AK::MemoryMgr::Free(g_LEngineDefaultPoolId,pvVar15);
                    }
                    *plVar16 = (longlong)pvVar12;
                    *(uint *)((longlong)plVar16 + 0xc) = uVar2;
                    if (uVar22 < uVar2) goto LAB_1431ba476;
                  }
                  puVar21 = (uint *)0x0;
                }
                *puVar21 = uVar23;
                puVar21[1] = uVar17;
                puVar21[2] = uVar19;
                fVar3 = *(float *)(param_2 + 4 + (ulonglong)uVar19 * 8);
                fVar4 = *(float *)(param_2 + 4 + uVar18 * 8);
                fVar5 = *(float *)(param_2 + 4 + (ulonglong)uVar23 * 8);
                fVar6 = *(float *)(param_2 + (ulonglong)uVar19 * 8);
                fVar7 = *(float *)(param_2 + (ulonglong)uVar23 * 8);
                fVar8 = *(float *)(param_2 + uVar18 * 8);
                fVar29 = fVar3 * fVar3 + fVar6 * fVar6;
                fVar25 = (fVar6 * fVar5 + fVar4 * fVar7 + fVar8 * fVar3) -
                         (fVar4 * fVar6 + fVar8 * fVar5 + fVar3 * fVar7);
                fVar26 = fVar4 * fVar4 + fVar8 * fVar8;
                fVar27 = fVar5 * fVar5 + fVar7 * fVar7;
                fVar30 = (fVar4 * fVar29 + fVar26 * fVar5 + fVar3 * fVar27) -
                         (fVar29 * fVar5 + fVar4 * fVar27 + fVar3 * fVar26);
                fVar28 = (fVar29 * fVar7 + fVar27 * fVar8 + fVar26 * fVar6) -
                         (fVar8 * fVar29 + fVar7 * fVar26 + fVar27 * fVar6);
                puVar21[3] = (uint)(fVar30 * (-0.5 / fVar25));
                puVar21[4] = (uint)((-0.5 / fVar25) * fVar28);
                puVar21[5] = (uint)(SQRT((fVar28 * fVar28 + fVar30 * fVar30) -
                                         ((fVar3 * fVar7 * fVar26 + fVar29 * fVar8 * fVar5 +
                                          fVar4 * fVar27 * fVar6) -
                                         (fVar3 * fVar27 * fVar8 + fVar29 * fVar4 * fVar7 +
                                         fVar26 * fVar5 * fVar6)) * fVar25 * 4.0) *
                                   (0.5 / ABS(fVar25)));
              }
LAB_1431ba69a:
              uVar19 = uVar19 + 1;
              uVar22 = *param_1;
            } while (uVar19 < uVar22);
          }
          local_f8 = local_f8 + 1;
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar22 - 1);
      }
      uVar23 = uVar1;
    } while (uVar1 < uVar22 - 2);
  }
  return;
}



// FUNCTION 1431ba780 Term body=225 status=ok
// SIG undefined Term(void)

void AkVBAPMap::Term(longlong param_1,longlong *param_2)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,*(void **)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,*(void **)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,*(void **)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (*(void **)(param_1 + 0x38) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,*(void **)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}



// FUNCTION 1431ba870 CAkSwitchAware body=14 status=ok
// SIG undefined CAkSwitchAware(void)

undefined8 * CAkSwitchAware::CAkSwitchAware(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_143f47c98;
  return param_1;
}



// FUNCTION 1431ba880 GetSwitchToUse body=40 status=ok
// SIG undefined GetSwitchToUse(void)

void CAkSwitchAware::GetSwitchToUse
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  if (param_4 == 1) {
    CAkStateMgr::GetState(DAT_146b50ae8,param_3);
    return;
  }
  FUN_14314a760(g_pSwitchMgr,param_3,param_2);
  return;
}



// FUNCTION 1431ba8b0 SubscribeSwitch body=174 status=ok
// SIG undefined SubscribeSwitch(void)

undefined8 CAkSwitchAware::SubscribeSwitch(undefined8 param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  FUN_14314b0c0(g_pSwitchMgr,param_1);
  CAkStateMgr::UnregisterSwitch(DAT_146b50ae8,param_1);
  if (param_2 == 0) {
    return 1;
  }
  if (param_3 != 0) {
    if (param_3 != 1) {
      return 0x1f;
    }
    uVar1 = CAkStateMgr::RegisterSwitch(DAT_146b50ae8,param_1,param_2);
    return uVar1;
  }
  uVar1 = FUN_14314ae10(g_pSwitchMgr,param_1,param_2);
  return uVar1;
}



// FUNCTION 1431ba960 UnsubscribeSwitches body=44 status=ok
// SIG undefined UnsubscribeSwitches(void)

void CAkSwitchAware::UnsubscribeSwitches(undefined8 param_1)

{
  FUN_14314b0c0(g_pSwitchMgr,param_1);
  CAkStateMgr::UnregisterSwitch(DAT_146b50ae8,param_1);
  return;
}



// FUNCTION 1431ba990 CAkMidiBaseCtx body=120 status=ok
// SIG undefined CAkMidiBaseCtx(void)

undefined8 *
CAkMidiBaseCtx::CAkMidiBaseCtx
          (undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
          undefined4 param_5)

{
  int *piVar1;
  
  param_1[2] = param_2;
  *param_1 = &PTR__scalar_deleting_destructor__145ace270;
  param_1[1] = 0;
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_4 + 0x14);
  param_1[4] = param_4[1];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_4 + 2);
  piVar1 = (int *)*param_4;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  param_1[3] = piVar1;
  param_1[6] = *param_3;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_5;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 1;
  *(undefined1 *)(param_1 + 10) = 0;
  if (param_1[2] != 0) {
    piVar1 = (int *)(param_1[2] + 0x50);
    *piVar1 = *piVar1 + 1;
  }
  return param_1;
}



// FUNCTION 1431baa10 ~CAkMidiBaseCtx body=126 status=ok
// SIG undefined ~CAkMidiBaseCtx(void)

void CAkMidiBaseCtx::~CAkMidiBaseCtx(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)param_1[2];
  *param_1 = &PTR__scalar_deleting_destructor__145ace270;
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 10);
    *piVar1 = *piVar1 + -1;
    lVar3 = g_DefaultPoolId;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,0);
      AK::MemoryMgr::Free(lVar3,puVar2);
    }
  }
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x10))();
  }
  if (param_1[3] != 0) {
    AkExternalSourceArray::Release();
    return;
  }
  return;
}



// FUNCTION 1431baa90 `scalar_deleting_destructor' body=149 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkMidiBaseCtx::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)param_1[2];
  *param_1 = &PTR__scalar_deleting_destructor__145ace270;
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 10);
    *piVar1 = *piVar1 + -1;
    lVar3 = g_DefaultPoolId;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,0);
      AK::MemoryMgr::Free(lVar3,puVar2);
    }
  }
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x10))();
  }
  if (param_1[3] != 0) {
    AkExternalSourceArray::Release();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1431bab30 AddMidiEvent body=264 status=ok
// SIG undefined AddMidiEvent(void)

void CAkMidiBaseCtx::AddMidiEvent
               (longlong param_1,undefined8 *param_2,byte *param_3,undefined4 param_4,uint param_5,
               byte param_6,byte param_7)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((((char)*param_3 < '\0') && ((*param_3 & 0xf0) != 0xf0)) &&
     (*(char *)(param_1 + 0x50) == '\0')) {
    plVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x20);
    if (plVar1 != (longlong *)0x0) {
      *plVar1 = param_1;
      *(undefined4 *)(plVar1 + 1) = *(undefined4 *)param_3;
      *(undefined4 *)((longlong)plVar1 + 0xc) = param_4;
      plVar1[3] = 0;
      *(uint *)(plVar1 + 2) = (param_6 & 1) << 0x1e | param_5 & 0x3fffffff | (uint)param_7 << 0x1f;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
      lVar3 = param_2[1];
      lVar4 = 0;
      if (lVar3 != 0) {
        while (lVar2 = lVar3, lVar3 = lVar2,
              *(uint *)(lVar2 + 0xc) <= *(uint *)((longlong)plVar1 + 0xc)) {
          if (((*(uint *)(lVar2 + 0xc) == *(uint *)((longlong)plVar1 + 0xc)) &&
              ((((*(uint *)(lVar2 + 0x10) >> 0x1e & 1) != 0 &&
                ((*(uint *)(plVar1 + 2) & 0x40000000) == 0)) ||
               ((-1 < (int)*(uint *)(lVar2 + 0x10) && ((int)plVar1[2] < 0)))))) ||
             (lVar3 = *(longlong *)(lVar2 + 0x18), lVar4 = lVar2, lVar3 == 0)) break;
        }
      }
      plVar1[3] = lVar3;
      if (lVar4 == 0) {
        param_2[1] = plVar1;
      }
      else {
        *(longlong **)(lVar4 + 0x18) = plVar1;
      }
      if (lVar3 == 0) {
        *param_2 = plVar1;
      }
    }
  }
  return;
}



// FUNCTION 1431bac40 AddRef body=9 status=ok
// SIG undefined AddRef(void)

void CAkMidiBaseCtx::AddRef(longlong param_1)

{
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  return;
}



// FUNCTION 1431bac50 CleanupActions body=49 status=ok
// SIG undefined CleanupActions(void)

void CAkMidiBaseCtx::CleanupActions(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x28))();
  if ((param_1[8] != 0) && (lVar1 != 0)) {
    CAkMidiBaseMgr::CleanupActions(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 1431bac90 Init body=22 status=ok
// SIG undefined Init(void)

int CAkMidiBaseCtx::Init(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x20))();
  return 2 - (uint)(cVar1 != '\0');
}



// FUNCTION 1431bacb0 Release body=71 status=ok
// SIG undefined Release(void)

int CAkMidiBaseCtx::Release(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = *(int *)((longlong)param_1 + 0x4c) + -1;
  *(int *)((longlong)param_1 + 0x4c) = iVar2;
  lVar1 = g_DefaultPoolId;
  if (iVar2 == 0) {
    (**(code **)*param_1)(param_1,0);
    AK::MemoryMgr::Free(lVar1,param_1);
  }
  return iVar2;
}



// FUNCTION 1431bad00 CAkMidiBaseMgr body=36 status=ok
// SIG undefined CAkMidiBaseMgr(void)

undefined8 * CAkMidiBaseMgr::CAkMidiBaseMgr(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_145ace2a0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 1431bad30 FUN_1431bad30 body=338 status=ok
// SIG undefined FUN_1431bad30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431bad30(undefined8 *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  
  puVar3 = (undefined8 *)param_1[3];
  *param_1 = &PTR_LAB_145ace2a0;
  uVar5 = *(uint *)(param_1 + 4);
  puVar4 = puVar3;
  if (puVar3 != puVar3 + (ulonglong)uVar5 * 4) {
    do {
      if (puVar3[2] == 0) {
        if (puVar3 < puVar4 + (ulonglong)uVar5 * 4 + -4) {
          uVar2 = ((ulonglong)
                   ((longlong)(puVar4 + (ulonglong)uVar5 * 4 + -4) + (-1 - (longlong)puVar3)) >> 3 &
                  0xfffffffffffffffc) + 4 & 0x1ffffffffffffffc;
          puVar4 = puVar3 + 4;
          puVar6 = puVar3;
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
        uVar5 = *(uint *)(param_1 + 4);
      }
      else {
        puVar3 = puVar3 + 4;
      }
      puVar4 = (undefined8 *)param_1[3];
    } while (puVar3 != puVar4 + (ulonglong)uVar5 * 4);
  }
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,puVar4);
    param_1[3] = 0;
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  puVar3 = (undefined8 *)param_1[6];
  while (puVar3 != (undefined8 *)0x0) {
    lVar1 = puVar3[2];
    puVar4 = (undefined8 *)*puVar3;
    puVar6 = puVar4;
    if (puVar3 == (undefined8 *)param_1[6]) {
      param_1[6] = puVar4;
      puVar6 = (undefined8 *)_DAT_00000000;
    }
    _DAT_00000000 = puVar6;
    if (puVar3 == (undefined8 *)param_1[5]) {
      param_1[5] = 0;
    }
    *(undefined8 *)(lVar1 + 0x10) = 0;
    FUN_1431be620(puVar3);
    CAkMidiNoteEvent::Release(puVar3);
    puVar3 = puVar4;
  }
  param_1[6] = 0;
  param_1[5] = 0;
  return;
}



// FUNCTION 1431bae90 AttachCtx body=27 status=ok
// SIG undefined AttachCtx(void)

void CAkMidiBaseMgr::AttachCtx(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    *(longlong *)(param_1 + 0x10) = param_2;
    *(undefined8 *)(param_2 + 8) = 0;
    return;
  }
  *(longlong *)(param_2 + 8) = *(longlong *)(param_1 + 0x10);
  *(longlong *)(param_1 + 0x10) = param_2;
  return;
}



// FUNCTION 1431baeb0 CleanupActions body=392 status=ok
// SIG undefined CleanupActions(void)

void CAkMidiBaseMgr::CleanupActions(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined4 local_res8;
  
  plVar4 = *(longlong **)(param_1 + 0x18);
  plVar7 = plVar4 + (ulonglong)*(uint *)(param_1 + 0x20) * 4;
  for (; (plVar4 != plVar7 && (*plVar4 != *(longlong *)(param_2 + 0x40))); plVar4 = plVar4 + 4) {
  }
  plVar8 = (longlong *)0x0;
  plVar3 = plVar4 + 1;
  if (plVar4 == plVar7) {
    plVar3 = plVar8;
  }
  plVar6 = plVar8;
  if (plVar3 != (longlong *)0x0) {
    do {
      local_res8 = CONCAT22(0x40,CONCAT11((char)plVar6,0xb0));
      FUN_1431bb3e0(param_1,param_2,&local_res8,0,0,0);
      uVar5 = (int)plVar6 + 1;
      plVar6 = (longlong *)(ulonglong)uVar5;
    } while (uVar5 < 0x10);
    plVar3 = plVar4 + 3;
    if (plVar4 == plVar7) {
      plVar3 = (longlong *)&DAT_00000010;
    }
    *(undefined2 *)plVar3 = 0;
    plVar3 = plVar4 + 2;
    if (plVar4 == plVar7) {
      plVar3 = (longlong *)&DAT_00000008;
    }
    for (puVar1 = (undefined8 *)*plVar3; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1
        ) {
      if ((((puVar1[3] == param_2) &&
           (*(undefined4 *)((longlong)puVar1 + 0x2c) = 0, *(char *)(puVar1 + 5) == -0x70)) &&
          (*(char *)((longlong)puVar1 + 0x2b) != '\0')) && ((*(byte *)(puVar1 + 6) & 4) == 0)) {
        local_res8 = CONCAT31((int3)((uint)*(undefined4 *)(puVar1 + 5) >> 8),0x80);
        FUN_1431bb3e0(param_1,param_2,&local_res8,0,1,0);
      }
    }
    UpdateMidiNotes(param_1,0);
    plVar4 = *(longlong **)(param_1 + 0x30);
    while (plVar7 = plVar8, plVar8 = plVar4, plVar8 != (longlong *)0x0) {
      lVar2 = plVar8[2];
      plVar4 = (longlong *)*plVar8;
      if (plVar8[3] == param_2) {
        if (plVar8 == *(longlong **)(param_1 + 0x30)) {
          *(longlong **)(param_1 + 0x30) = plVar4;
        }
        else {
          *plVar7 = (longlong)plVar4;
        }
        if (plVar8 == *(longlong **)(param_1 + 0x28)) {
          *(longlong **)(param_1 + 0x28) = plVar7;
        }
        *(undefined8 *)(lVar2 + 0x10) = 0;
        FUN_1431be620(plVar8);
        CAkMidiNoteEvent::Release(plVar8);
        plVar8 = plVar7;
      }
    }
  }
  return;
}



// FUNCTION 1431bb040 DetachCtx body=60 status=ok
// SIG undefined DetachCtx(void)

void CAkMidiBaseMgr::DetachCtx(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar4 = 0;
  lVar2 = lVar1;
  lVar3 = lVar1;
  if (lVar1 != 0) {
    while (lVar3 = lVar2, lVar3 != param_2) {
      lVar2 = *(longlong *)(lVar3 + 8);
      lVar4 = lVar3;
      if (*(longlong *)(lVar3 + 8) == 0) {
        return;
      }
    }
  }
  if (lVar3 != 0) {
    if (lVar3 == lVar1) {
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar3 + 8);
      return;
    }
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar3 + 8);
  }
  return;
}



// FUNCTION 1431bb080 KillAllNotes body=212 status=ok
// SIG undefined KillAllNotes(void)

void CAkMidiBaseMgr::KillAllNotes(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  undefined1 local_res8;
  undefined3 uStackX_9;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  uVar4 = (uint)DAT_1467bdcb8;
  plVar5 = plVar2 + (ulonglong)*(uint *)(param_1 + 0x20) * 4;
  for (; (plVar2 != plVar5 && (*plVar2 != *(longlong *)(param_2 + 0x40))); plVar2 = plVar2 + 4) {
  }
  plVar3 = plVar2 + 1;
  if (plVar2 == plVar5) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 != (longlong *)0x0) {
    for (puVar1 = (undefined8 *)plVar3[1]; puVar1 != (undefined8 *)0x0;
        puVar1 = (undefined8 *)*puVar1) {
      if ((((puVar1[3] == param_2) && (*(char *)(puVar1 + 5) == -0x70)) &&
          (*(char *)((longlong)puVar1 + 0x2b) != '\0')) &&
         (((*(byte *)(puVar1 + 6) & 4) == 0 && (*(int *)((longlong)puVar1 + 0x2c) <= (int)uVar4))))
      {
        _local_res8 = CONCAT31((int3)((uint)*(undefined4 *)(puVar1 + 5) >> 8),0x80);
        FUN_1431bb3e0(param_1,param_2,&local_res8,*(int *)((longlong)puVar1 + 0x2c),1,0);
      }
    }
  }
  return;
}



// FUNCTION 1431bb160 KillNotes body=206 status=ok
// SIG undefined KillNotes(void)

void CAkMidiBaseMgr::KillNotes(longlong param_1,longlong param_2,int param_3,char param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 local_res8;
  undefined3 uStackX_9;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  plVar4 = plVar2 + (ulonglong)*(uint *)(param_1 + 0x20) * 4;
  for (; (plVar2 != plVar4 && (*plVar2 != *(longlong *)(param_2 + 0x40))); plVar2 = plVar2 + 4) {
  }
  plVar3 = plVar2 + 1;
  if (plVar2 == plVar4) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 != (longlong *)0x0) {
    for (puVar1 = (undefined8 *)plVar3[1]; puVar1 != (undefined8 *)0x0;
        puVar1 = (undefined8 *)*puVar1) {
      if (((puVar1[3] == param_2) &&
          (((*(char *)((longlong)puVar1 + 0x29) == param_4 || (param_4 == -1)) &&
           (*(char *)(puVar1 + 5) == -0x70)))) &&
         (((*(char *)((longlong)puVar1 + 0x2b) != '\0' && ((*(byte *)(puVar1 + 6) & 4) == 0)) &&
          (*(int *)((longlong)puVar1 + 0x2c) <= param_3)))) {
        _local_res8 = CONCAT31((int3)((uint)*(undefined4 *)(puVar1 + 5) >> 8),0x80);
        FUN_1431bb3e0(param_1,param_2,&local_res8,*(int *)((longlong)puVar1 + 0x2c),1,0);
      }
    }
  }
  return;
}



// FUNCTION 1431bb280 OnPaused body=166 status=ok
// SIG undefined OnPaused(void)

void CAkMidiBaseMgr::OnPaused(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  plVar4 = plVar2 + (ulonglong)*(uint *)(param_1 + 0x20) * 4;
  for (; (plVar2 != plVar4 && (*plVar2 != *(longlong *)(param_2 + 0x40))); plVar2 = plVar2 + 4) {
  }
  plVar3 = plVar2 + 1;
  if (plVar2 == plVar4) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 != (longlong *)0x0) {
    for (puVar1 = (undefined8 *)plVar3[1]; puVar1 != (undefined8 *)0x0;
        puVar1 = (undefined8 *)*puVar1) {
      if (puVar1[3] == param_2) {
        CAkMidiNoteEvent::_ExecutePause(puVar1);
      }
    }
  }
  for (puVar1 = *(undefined8 **)(param_1 + 0x30); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    if (puVar1[3] == param_2) {
      CAkMidiNoteEvent::_ExecutePause(puVar1);
    }
  }
  return;
}



// FUNCTION 1431bb330 OnResumed body=166 status=ok
// SIG undefined OnResumed(void)

void CAkMidiBaseMgr::OnResumed(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  plVar4 = plVar2 + (ulonglong)*(uint *)(param_1 + 0x20) * 4;
  for (; (plVar2 != plVar4 && (*plVar2 != *(longlong *)(param_2 + 0x40))); plVar2 = plVar2 + 4) {
  }
  plVar3 = plVar2 + 1;
  if (plVar2 == plVar4) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 != (longlong *)0x0) {
    for (puVar1 = (undefined8 *)plVar3[1]; puVar1 != (undefined8 *)0x0;
        puVar1 = (undefined8 *)*puVar1) {
      if (puVar1[3] == param_2) {
        CAkMidiNoteEvent::_ExecuteResume(puVar1);
      }
    }
  }
  for (puVar1 = *(undefined8 **)(param_1 + 0x30); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    if (puVar1[3] == param_2) {
      CAkMidiNoteEvent::_ExecuteResume(puVar1);
    }
  }
  return;
}



// FUNCTION 1431bb3e0 FUN_1431bb3e0 body=514 status=ok
// SIG undefined FUN_1431bb3e0(void)

void FUN_1431bb3e0(longlong param_1,longlong param_2,char *param_3,undefined4 param_4,char param_5)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  void *pvVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined2 local_38;
  
  if (*(int *)(param_2 + 0x2c) != 0) {
    CAkPlayingMgr::NotifyMidiEvent(DAT_146b50b00);
  }
  plVar7 = *(longlong **)(param_1 + 0x18);
  plVar8 = plVar7 + (ulonglong)*(uint *)(param_1 + 0x20) * 4;
  for (; (plVar7 != plVar8 && (*plVar7 != *(longlong *)(param_2 + 0x40))); plVar7 = plVar7 + 4) {
  }
  plVar9 = (longlong *)0x0;
  plVar4 = plVar7 + 1;
  if (plVar7 == plVar8) {
    plVar4 = plVar9;
  }
  if (plVar4 == (longlong *)0x0) {
    local_38 = 0;
    local_48 = 0;
    uStack_40 = 0;
    plVar4 = (longlong *)FUN_1431bb6c0(param_1 + 0x18,*(longlong *)(param_2 + 0x40),&local_48);
    if (plVar4 == (longlong *)0x0) {
      return;
    }
  }
  plVar7 = *(longlong **)(param_2 + 0x40);
  iVar3 = (**(code **)(*plVar7 + 0x80))(plVar7);
  if (((iVar3 == 0) || (iVar3 = (**(code **)(*plVar7 + 0x80))(plVar7), iVar3 == 10)) &&
     (*param_3 != -0x50)) {
    return;
  }
  pvVar5 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x38);
  if (pvVar5 == (void *)0x0) {
    return;
  }
  puVar6 = (undefined8 *)CAkMidiNoteEvent::CAkMidiNoteEvent(pvVar5,param_2,plVar7);
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
  cVar2 = FUN_1431be460(puVar6,param_3,param_4);
  if (cVar2 == '\0') goto LAB_1431bb53b;
  cVar2 = *param_3;
  if (cVar2 == -0x80) {
LAB_1431bb504:
    for (puVar1 = (undefined8 *)plVar4[1]; puVar1 != (undefined8 *)0x0;
        puVar1 = (undefined8 *)*puVar1) {
      if (((param_5 == '\0') || (puVar1[3] == puVar6[3])) &&
         (cVar2 = CAkMidiNoteEvent::PairWithExistingNote(puVar6,puVar1), cVar2 != '\0')) {
        cVar2 = *param_3;
        goto LAB_1431bb566;
      }
    }
LAB_1431bb53b:
    CAkMidiNoteEvent::Release(puVar6);
    return;
  }
  if (cVar2 == -0x70) {
    if (param_3[3] == '\0') goto LAB_1431bb504;
LAB_1431bb566:
    if ((cVar2 == -0x70) && (param_3[3] != '\0')) goto LAB_1431bb5a4;
  }
  if ((cVar2 != -0x80) &&
     ((((cVar2 != -0x70 || (param_3[3] != '\0')) && (*(char *)(puVar6 + 5) == -0x50)) &&
      ((*(char *)((longlong)puVar6 + 0x2a) == '{' || (*(char *)((longlong)puVar6 + 0x2a) == 'x')))))
     ) {
    CAkMidiBaseMgr::KillNotes(param_1,puVar6[3],param_4,*(undefined1 *)((longlong)puVar6 + 0x29));
  }
LAB_1431bb5a4:
  plVar7 = (longlong *)plVar4[1];
  if (plVar7 != (longlong *)0x0) {
    do {
      plVar8 = plVar7;
      plVar7 = plVar8;
      if (*(int *)((longlong)puVar6 + 0x2c) < *(int *)((longlong)plVar8 + 0x2c)) break;
      plVar7 = (longlong *)*plVar8;
      plVar9 = plVar8;
    } while (plVar7 != (longlong *)0x0);
  }
  *puVar6 = plVar7;
  if (plVar9 == (longlong *)0x0) {
    plVar4[1] = (longlong)puVar6;
  }
  else {
    *plVar9 = (longlong)puVar6;
  }
  if (plVar7 != (longlong *)0x0) {
    return;
  }
  *plVar4 = (longlong)puVar6;
  return;
}



// FUNCTION 1431bb5f0 FUN_1431bb5f0 body=198 status=ok
// SIG undefined FUN_1431bb5f0(void)

void FUN_1431bb5f0(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 != (undefined8 *)0x0) {
    if (puVar2 == (undefined8 *)0x0) goto LAB_1431bb63b;
    do {
      if (puVar2[3] == 0) {
        param_2[1] = 0;
        *param_2 = 0;
      }
      else {
        param_2[1] = puVar2[3];
      }
LAB_1431bb63b:
      if (((int)*(uint *)(puVar2 + 2) < 0) && ((*(uint *)(puVar2 + 2) >> 0x1e & 1) == 0)) {
        (**(code **)(*param_1 + 8))(param_1,param_2,puVar2);
      }
      FUN_1431bb3e0(param_1,*puVar2,puVar2 + 1,*(undefined4 *)((longlong)puVar2 + 0xc),0,1);
      lVar1 = g_DefaultPoolId;
      CAkMidiBaseCtx::Release(*puVar2);
      AK::MemoryMgr::Free(lVar1,puVar2);
      puVar2 = (undefined8 *)param_2[1];
    } while (puVar2 != (undefined8 *)0x0);
  }
  CAkMidiBaseMgr::UpdateMidiNotes(param_1,param_3);
  return;
}



// FUNCTION 1431bb6c0 FUN_1431bb6c0 body=417 status=ok
// SIG undefined FUN_1431bb6c0(void)

longlong * FUN_1431bb6c0(longlong *param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  void *pvVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  void *pvVar10;
  longlong *plVar11;
  ulonglong uVar12;
  
  plVar8 = (longlong *)*param_1;
  uVar3 = *(uint *)(param_1 + 1);
  plVar7 = plVar8 + (ulonglong)uVar3 * 4;
  for (; (plVar8 != plVar7 && (*plVar8 != param_2)); plVar8 = plVar8 + 4) {
  }
  plVar11 = plVar8 + 1;
  if (plVar8 == plVar7) {
    plVar11 = (longlong *)0x0;
  }
  if (plVar11 != (longlong *)0x0) {
    lVar4 = param_3[1];
    *plVar11 = *param_3;
    plVar11[1] = lVar4;
    plVar11[2] = param_3[2];
    return plVar11;
  }
  if (*(uint *)((longlong)param_1 + 0xc) <= uVar3) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc) + 1;
    pvVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 5);
    if (pvVar6 == (void *)0x0) {
      return (longlong *)0x0;
    }
    pvVar10 = (void *)*param_1;
    if ((pvVar10 != (void *)0x0) && (pvVar10 != pvVar6)) {
      uVar12 = (ulonglong)*(uint *)(param_1 + 1);
      if (uVar12 != 0) {
        puVar9 = (undefined8 *)((longlong)pvVar6 + 0x18);
        do {
          if (puVar9 + -3 != (undefined8 *)0x0) {
            puVar9[-2] = 0;
            puVar9[-1] = 0;
            *(undefined2 *)puVar9 = 0;
          }
          lVar4 = *param_1;
          puVar2 = (undefined8 *)((longlong)puVar9 + lVar4 + -(longlong)pvVar6 + -0x18);
          uVar5 = puVar2[1];
          puVar9[-3] = *puVar2;
          puVar9[-2] = uVar5;
          puVar2 = (undefined8 *)((longlong)puVar9 + lVar4 + -(longlong)pvVar6 + -8);
          uVar5 = puVar2[1];
          puVar9[-1] = *puVar2;
          *puVar9 = uVar5;
          uVar12 = uVar12 - 1;
          puVar9 = puVar9 + 4;
        } while (uVar12 != 0);
        pvVar10 = (void *)*param_1;
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar10);
    }
    plVar8 = (longlong *)0x0;
    *param_1 = (longlong)pvVar6;
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    if (uVar1 <= uVar3) goto LAB_1431bb823;
  }
  uVar3 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar3 + 1;
  plVar8 = (longlong *)((ulonglong)uVar3 * 0x20 + *param_1);
  if (plVar8 != (longlong *)0x0) {
    plVar8[1] = 0;
    plVar8[2] = 0;
    *(undefined2 *)(plVar8 + 3) = 0;
  }
LAB_1431bb823:
  if (plVar8 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    *plVar8 = param_2;
    plVar7 = plVar8 + 1;
    lVar4 = param_3[1];
    *plVar7 = *param_3;
    plVar8[2] = lVar4;
    plVar8[3] = param_3[2];
  }
  return plVar7;
}



// FUNCTION 1431bb870 UpdateMidiNotes body=868 status=ok
// SIG undefined UpdateMidiNotes(void)

void CAkMidiBaseMgr::UpdateMidiNotes(longlong param_1,undefined4 param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  ushort uVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined8 local_50;
  
  lVar10 = *(longlong *)(param_1 + 0x18);
  if (lVar10 != (ulonglong)*(uint *)(param_1 + 0x20) * 0x20 + lVar10) {
    puVar13 = (undefined8 *)(lVar10 + 0x10);
    do {
      puVar3 = (undefined8 *)*puVar13;
      puVar6 = (undefined8 *)0x0;
      while (puVar5 = puVar3, puVar5 != (undefined8 *)0x0) {
        uVar9 = 0;
        if (((*(ushort *)(puVar13 + 1) >> (*(byte *)((longlong)puVar5 + 0x29) & 0x1f) & 1) == 0) ||
           ((*(char *)(puVar5 + 5) != -0x80 &&
            ((*(char *)(puVar5 + 5) != -0x70 || (*(char *)((longlong)puVar5 + 0x2b) != '\0')))))) {
          uVar12 = 1;
        }
        else {
          uVar12 = 0;
        }
        cVar7 = FUN_1431be680(puVar5,param_2,uVar12);
        if (cVar7 == '\0') {
          puVar3 = (undefined8 *)*puVar5;
          puVar6 = puVar5;
        }
        else {
          cVar7 = *(char *)(puVar5 + 5);
          if ((cVar7 != -0x70) || (*(char *)((longlong)puVar5 + 0x2b) == '\0')) {
            if ((cVar7 == -0x80) ||
               ((cVar7 == -0x70 && (*(char *)((longlong)puVar5 + 0x2b) == '\0')))) {
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            if (!bVar4) {
              lVar2 = puVar5[3];
              if (*(char *)(lVar2 + 0x48) == '\0') {
                uVar9 = *(undefined8 *)(lVar2 + 0x10);
              }
              local_68 = *(undefined4 *)(lVar2 + 0x3c);
              local_60 = *(undefined1 *)((longlong)puVar5 + 0x29);
              if (((cVar7 + 0x80U & 0xcf) == 0) && (cVar7 != -0x50)) {
                local_58 = *(undefined1 *)((longlong)puVar5 + 0x2a);
              }
              else {
                local_58 = 0xff;
              }
              local_50 = 0;
              local_70 = 0;
              local_78 = uVar9;
              if (cVar7 == -0x50) {
                bVar1 = *(byte *)((longlong)puVar5 + 0x2a);
                if (bVar1 == 0x79) {
                  *(undefined2 *)(puVar13 + 1) = 0;
                  local_88 = 0;
                  uVar11 = 1;
                  local_84 = 4;
                  local_80 = 0;
                  do {
                    FUN_1431367b0(g_pRTPCMgr,uVar11,&local_78,&local_88);
                    uVar11 = uVar11 + 1;
                  } while (uVar11 < 0x86);
                }
                else if (((bVar1 != 0x7b) && (bVar1 != 0x78)) &&
                        (CAkRTPCMgr::SetMidiParameterValue(g_pRTPCMgr,bVar1 + 1,local_68,&local_78),
                        *(char *)((longlong)puVar5 + 0x2a) == '@')) {
                  uVar8 = *(ushort *)(puVar13 + 1) &
                          ~(ushort)(1 << (*(byte *)((longlong)puVar5 + 0x29) & 0x1f));
                  *(ushort *)(puVar13 + 1) = uVar8;
                  *(ushort *)(puVar13 + 1) =
                       (ushort)(0x3f < *(byte *)((longlong)puVar5 + 0x2b)) <<
                       (*(byte *)((longlong)puVar5 + 0x29) & 0x1f) | uVar8;
                }
              }
              else if (cVar7 == -0x20) {
                CAkRTPCMgr::SetMidiParameterValue
                          (g_pRTPCMgr,0x83,
                           (float)((uint)*(byte *)((longlong)puVar5 + 0x2b) << 7 |
                                  (uint)*(byte *)((longlong)puVar5 + 0x2a)) * 0.0078125,&local_78);
              }
            }
          }
          puVar3 = (undefined8 *)*puVar5;
          if (puVar5 == (undefined8 *)*puVar13) {
            *puVar13 = puVar3;
          }
          else {
            *puVar6 = puVar3;
          }
          if (puVar5 == (undefined8 *)puVar13[-1]) {
            puVar13[-1] = puVar6;
          }
          if ((*(char *)(puVar5 + 5) == -0x80) ||
             ((*(char *)(puVar5 + 5) == -0x70 && (*(char *)((longlong)puVar5 + 0x2b) == '\0')))) {
            *(longlong *)(puVar5[2] + 0x10) = param_1;
            *puVar5 = 0;
            if (*(longlong *)(param_1 + 0x30) == 0) {
              *(undefined8 **)(param_1 + 0x30) = puVar5;
              *(undefined8 **)(param_1 + 0x28) = puVar5;
            }
            else {
              **(undefined8 **)(param_1 + 0x28) = puVar5;
              *(undefined8 **)(param_1 + 0x28) = puVar5;
            }
          }
          else {
            CAkMidiNoteEvent::Release(puVar5);
          }
        }
      }
      lVar10 = lVar10 + 0x20;
      puVar13 = puVar13 + 4;
    } while (lVar10 != (ulonglong)*(uint *)(param_1 + 0x20) * 0x20 + *(longlong *)(param_1 + 0x18));
  }
  puVar13 = *(undefined8 **)(param_1 + 0x30);
  puVar3 = (undefined8 *)0x0;
  while (puVar6 = puVar13, puVar6 != (undefined8 *)0x0) {
    lVar10 = puVar6[2];
    if ((*(int *)(lVar10 + 100) == 0) && (*(int *)(lVar10 + 0x8c) == 0)) {
      puVar13 = (undefined8 *)*puVar6;
      if (puVar6 == *(undefined8 **)(param_1 + 0x30)) {
        *(undefined8 **)(param_1 + 0x30) = puVar13;
      }
      else {
        *puVar3 = puVar13;
      }
      if (puVar6 == *(undefined8 **)(param_1 + 0x28)) {
        *(undefined8 **)(param_1 + 0x28) = puVar3;
      }
      *(undefined8 *)(lVar10 + 0x10) = 0;
      FUN_1431be620(puVar6);
      CAkMidiNoteEvent::Release(puVar6);
    }
    else {
      puVar13 = (undefined8 *)*puVar6;
      puVar3 = puVar6;
    }
  }
  return;
}



// FUNCTION 1431bbbe0 CAkMidiDeviceCtx body=105 status=ok
// SIG undefined CAkMidiDeviceCtx(void)

undefined8 *
CAkMidiDeviceCtx::CAkMidiDeviceCtx
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined4 param_6,byte param_7)

{
  CAkMidiBaseCtx::CAkMidiBaseCtx(param_1,param_3,param_4,param_5,param_6);
  *param_1 = &PTR__scalar_deleting_destructor__145ace2b0;
  param_1[0xb] = param_2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(uint *)(param_1 + 0xe) =
       ((uint)param_7 * 2 | *(uint *)(param_1 + 0xe) & 0xfffffffc) & 0xfffffffb;
  return param_1;
}



// FUNCTION 1431bbc50 `scalar_deleting_destructor' body=171 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkMidiDeviceCtx::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  void *pvVar1;
  longlong lVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__145ace2b0;
  pvVar1 = (void *)param_1[0xd];
  while (pvVar1 != (void *)0x0) {
    if (param_1[0xd] != 0) {
      lVar2 = *(longlong *)(param_1[0xd] + 8);
      if (lVar2 == 0) {
        param_1[0xd] = 0;
        param_1[0xc] = 0;
      }
      else {
        param_1[0xd] = lVar2;
      }
    }
    if (pvVar1 != (void *)0x0) {
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar1);
    }
    pvVar1 = (void *)param_1[0xd];
  }
  if (param_1[0xb] != 0) {
    CAkMidiBaseMgr::DetachCtx(param_1[0xb],param_1);
  }
  CAkMidiBaseCtx::~CAkMidiBaseCtx(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1431bbd00 AddEvent body=141 status=ok
// SIG undefined AddEvent(void)

void CAkMidiDeviceCtx::AddEvent(longlong param_1,undefined4 *param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  
  if (((*(byte *)(param_1 + 0x70) & 5) == 0) &&
     (puVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x10), puVar4 != (undefined4 *)0x0)) {
    *puVar4 = *param_2;
    *(undefined8 *)(puVar4 + 2) = 0;
    puVar4[1] = param_3;
    lVar3 = *(longlong *)(param_1 + 0x68);
    lVar2 = 0;
    while ((lVar1 = lVar3, lVar1 != 0 && (*(uint *)(lVar1 + 4) <= param_3))) {
      lVar2 = lVar1;
      lVar3 = *(longlong *)(lVar1 + 8);
    }
    *(longlong *)(puVar4 + 2) = lVar1;
    if (lVar2 == 0) {
      *(undefined4 **)(param_1 + 0x68) = puVar4;
    }
    else {
      *(undefined4 **)(lVar2 + 8) = puVar4;
    }
    if (lVar1 == 0) {
      *(undefined4 **)(param_1 + 0x60) = puVar4;
    }
  }
  return;
}



// FUNCTION 1431bbd90 DetachAndRelease body=78 status=ok
// SIG undefined DetachAndRelease(void)

void CAkMidiDeviceCtx::DetachAndRelease(longlong param_1)

{
  if ((*(uint *)(param_1 + 0x70) & 1) == 0) {
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 1;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      CAkMidiBaseMgr::CleanupActions(*(longlong *)(param_1 + 0x58),param_1);
      CAkMidiBaseMgr::DetachCtx(*(undefined8 *)(param_1 + 0x58),param_1);
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    CAkMidiBaseCtx::Release(param_1);
    return;
  }
  return;
}



// FUNCTION 1431bbde0 Init body=50 status=ok
// SIG undefined Init(void)

ulonglong CAkMidiDeviceCtx::Init(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = CAkMidiBaseCtx::Init();
  if ((int)uVar1 == 1) {
    CAkMidiBaseMgr::AttachCtx(*(undefined8 *)(param_1 + 0x58),param_1);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 1431bbe20 OnFrame body=292 status=ok
// SIG undefined OnFrame(void)

void CAkMidiDeviceCtx::OnFrame(longlong param_1,undefined8 param_2,uint param_3)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  
  CAkMidiBaseCtx::AddRef();
  if ((param_3 != 0) && ((*(byte *)(param_1 + 0x70) & 1) == 0)) {
    pvVar1 = *(void **)(param_1 + 0x68);
    pvVar3 = (void *)0x0;
    while (pvVar2 = pvVar1, pvVar2 != (void *)0x0) {
      pvVar1 = *(void **)((longlong)pvVar2 + 8);
      if (*(uint *)((longlong)pvVar2 + 4) < param_3) {
        if (pvVar2 == *(void **)(param_1 + 0x68)) {
          *(void **)(param_1 + 0x68) = pvVar1;
        }
        else {
          *(void **)((longlong)pvVar3 + 8) = pvVar1;
        }
        if (pvVar2 == *(void **)(param_1 + 0x60)) {
          *(void **)(param_1 + 0x60) = pvVar3;
        }
        CAkMidiBaseCtx::AddMidiEvent(param_1,param_2,pvVar2,*(int *)((longlong)pvVar2 + 4),0,0,0);
        AK::MemoryMgr::Free(g_DefaultPoolId,pvVar2);
      }
      else {
        *(int *)((longlong)pvVar2 + 4) = *(uint *)((longlong)pvVar2 + 4) - param_3;
        pvVar3 = pvVar2;
      }
    }
  }
  iVar4 = CAkMidiBaseCtx::Release(param_1);
  if (((iVar4 == 1) && (((byte)*(uint *)(param_1 + 0x70) & 6) == 2)) &&
     (*(longlong *)(param_1 + 0x68) == 0)) {
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 4;
    CAkMidiBaseCtx::Release(param_1);
    return;
  }
  return;
}



// FUNCTION 1431bbf50 ResolveMidiTarget body=47 status=ok
// SIG undefined ResolveMidiTarget(void)

bool CAkMidiDeviceCtx::ResolveMidiTarget(longlong param_1)

{
  longlong lVar1;
  
  *(undefined1 *)(param_1 + 0x48) = 0;
  lVar1 = CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,*(undefined4 *)(param_1 + 0x3c),0);
  *(longlong *)(param_1 + 0x40) = lVar1;
  return lVar1 != 0;
}



// FUNCTION 1431bbf80 CopyRelevantMarkers body=339 status=ok
// SIG undefined CopyRelevantMarkers(void)

void CAkVPLNode::CopyRelevantMarkers(longlong param_1,longlong param_2,uint param_3,int param_4)

{
  undefined8 uVar1;
  void *_Dst;
  uint *puVar2;
  undefined8 *puVar3;
  ushort uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar7 = 0;
    uVar4 = 0;
    if (*(ushort *)(param_1 + 0x18) != 0) {
      puVar2 = (uint *)(*(longlong *)(param_1 + 0x20) + 8);
      uVar5 = (ulonglong)*(ushort *)(param_1 + 0x18);
      do {
        if ((param_3 <= *puVar2) && (*puVar2 < param_3 + param_4)) {
          uVar4 = uVar4 + 1;
        }
        puVar2 = puVar2 + 8;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      if (uVar4 != 0) {
        _Dst = AK::MemoryMgr::Malloc
                         (g_LEngineDefaultPoolId,
                          ((ulonglong)uVar4 + (ulonglong)*(ushort *)(param_2 + 0x18)) * 0x20);
        if (_Dst == (void *)0x0) {
          AkPipelineBuffer::FreeMarkers(param_2);
        }
        else {
          if (*(void **)(param_2 + 0x20) != (void *)0x0) {
            ::_guard_xfg_dispatch_icall_nop
                      (_Dst,*(void **)(param_2 + 0x20),(ulonglong)*(ushort *)(param_2 + 0x18) << 5);
          }
          puVar6 = *(undefined8 **)(param_1 + 0x20);
          puVar8 = (undefined8 *)((ulonglong)*(ushort *)(param_2 + 0x18) * 0x20 + (longlong)_Dst);
          if (*(short *)(param_1 + 0x18) != 0) {
            puVar9 = puVar8 + 2;
            puVar3 = puVar6 + 2;
            do {
              if ((param_3 <= *(uint *)(puVar3 + -1)) &&
                 (*(uint *)(puVar3 + -1) < param_3 + param_4)) {
                *puVar8 = *puVar6;
                puVar8 = puVar8 + 4;
                *(undefined4 *)(puVar9 + -1) = 0;
                uVar1 = puVar3[1];
                *puVar9 = *puVar3;
                puVar9[1] = uVar1;
                puVar9 = puVar9 + 4;
              }
              puVar6 = puVar6 + 4;
              puVar3 = puVar3 + 4;
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(ushort *)(param_1 + 0x18));
          }
          AkPipelineBuffer::FreeMarkers(param_2);
          *(short *)(param_2 + 0x18) = *(short *)(param_2 + 0x18) + uVar4;
          *(void **)(param_2 + 0x20) = _Dst;
        }
      }
    }
  }
  return;
}



// FUNCTION 1431bc0e0 Disconnect body=9 status=ok
// SIG undefined Disconnect(void)

void CAkVPLNode::Disconnect(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 1431bc0f0 CAkResampler body=44 status=ok
// SIG undefined CAkResampler(void)

longlong CAkResampler::CAkResampler(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x54) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x5e) = 1;
  *(undefined8 *)(param_1 + 0x30) = 0x10000;
  return param_1;
}



// FUNCTION 1431bc120 DeinterleaveAndSwapOutput body=129 status=ok
// SIG undefined DeinterleaveAndSwapOutput(void)

undefined8 CAkResampler::DeinterleaveAndSwapOutput(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_48 = *param_2;
  uStack_40 = param_2[1];
  local_38 = param_2[2];
  uStack_30 = param_2[3];
  local_28 = *(undefined4 *)(param_2 + 4);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_20 = *(undefined4 *)(param_2 + 5);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_18 = param_2[6];
  uVar1 = AkPipelineBufferBase::GetCachedBuffer
                    (&local_48,*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 1));
  if ((int)uVar1 == 1) {
    local_38._0_4_ = CONCAT22(*(undefined2 *)((longlong)param_2 + 0x12),(undefined2)local_38);
    Deinterleave_Native_NChan(param_2,&local_48);
    AkPipelineBufferBase::ReleaseCachedBuffer(param_2);
    uVar1 = 1;
    *param_2 = local_48;
    param_2[1] = uStack_40;
    param_2[2] = local_38;
  }
  return uVar1;
}



// FUNCTION 1431bc1b0 Execute body=173 status=ok
// SIG undefined Execute(void)

undefined4 CAkResampler::Execute(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (*(short *)(param_2 + 0x12) == 0) {
    return 0x11;
  }
  uVar2 = *(uint *)(param_1 + 0x44);
  do {
    uVar1 = (*(code *)(&PTR_Bypass_I16_NChanVecSSE2_1467be3b0)
                      [(ulonglong)*(byte *)(param_1 + 0x5c) + (longlong)*(int *)(param_1 + 0x50) * 6
                      ])(param_2,param_3,uVar2,param_1);
    if ((*(int *)(param_1 + 0x50) == 2) && (0x3ff < *(uint *)(param_1 + 0x3c))) {
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x50) = 1;
    }
  } while ((*(short *)(param_2 + 0x12) != 0) &&
          (uVar2 = *(uint *)(param_1 + 0x44), *(ushort *)(param_3 + 0x12) < uVar2));
  return uVar1;
}



// FUNCTION 1431bc260 GetLastRate body=25 status=ok
// SIG undefined GetLastRate(void)

float CAkResampler::GetLastRate(longlong param_1)

{
  return ((float)*(uint *)(param_1 + 0x34) * 1.5258789e-05) / *(float *)(param_1 + 0x54);
}



// FUNCTION 1431bc280 Init body=506 status=ok
// SIG undefined Init(void)

int CAkResampler::Init(undefined4 *param_1,uint *param_2,uint param_3)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  void *pvVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  bVar2 = (byte)param_2[1];
  uVar6 = (uint)bVar2;
  if (bVar2 < 9) {
    *(undefined4 **)(param_1 + 8) = param_1;
    *(undefined1 *)(param_1 + 0x12) = 0;
    *param_1 = 0;
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 4) = 0;
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 8) = 0;
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xc) = 0;
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x10) = 0;
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x14) = 0;
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x18) = 0;
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1c) = 0;
  }
  else {
    uVar8 = (ulonglong)(uint)bVar2;
    uVar7 = (uint)bVar2;
    if (((byte)param_2[2] & 0x3f) == 0x20) {
      pvVar4 = AK::MemoryMgr::Malign(g_LEngineDefaultPoolId,(ulonglong)bVar2 * 4,0x10);
      *(void **)(param_1 + 8) = pvVar4;
      if (pvVar4 == (void *)0x0) {
        return 2;
      }
      uVar3 = 0;
      if (3 < uVar7) {
        uVar3 = (bVar2 - 4 >> 2) + 1;
        uVar8 = (ulonglong)uVar3;
        uVar3 = uVar3 * 4;
        lVar5 = 0;
        do {
          lVar1 = lVar5 + 0x10;
          *(undefined4 *)(lVar5 + *(longlong *)(param_1 + 8)) = 0;
          *(undefined4 *)(*(longlong *)(param_1 + 8) + -0xc + lVar1) = 0;
          *(undefined4 *)(*(longlong *)(param_1 + 8) + -8 + lVar1) = 0;
          *(undefined4 *)(lVar5 + 0xc + *(longlong *)(param_1 + 8)) = 0;
          uVar8 = uVar8 - 1;
          lVar5 = lVar1;
        } while (uVar8 != 0);
      }
      if (uVar3 < uVar7) {
        uVar8 = (ulonglong)(uVar6 - uVar3);
        lVar5 = (ulonglong)uVar3 * 4;
        do {
          *(undefined4 *)(lVar5 + *(longlong *)(param_1 + 8)) = 0;
          uVar8 = uVar8 - 1;
          lVar5 = lVar5 + 4;
        } while (uVar8 != 0);
        *(undefined1 *)(param_1 + 0x12) = 1;
        goto LAB_1431bc3e6;
      }
    }
    else {
      pvVar4 = AK::MemoryMgr::Malign(g_LEngineDefaultPoolId,(ulonglong)bVar2 * 2,0x10);
      *(void **)(param_1 + 8) = pvVar4;
      if (pvVar4 == (void *)0x0) {
        return 2;
      }
      if (uVar7 != 0) {
        lVar5 = 0;
        do {
          *(undefined2 *)(lVar5 + *(longlong *)(param_1 + 8)) = 0;
          uVar8 = uVar8 - 1;
          lVar5 = lVar5 + 2;
        } while (uVar8 != 0);
      }
    }
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
LAB_1431bc3e6:
  param_1[0x10] = (int)(48000 / (ulonglong)param_3);
  uVar7 = *param_2;
  *(byte *)((longlong)param_1 + 0x5d) = bVar2;
  param_1[0x15] = (float)uVar7 / (float)param_3;
  if ((param_2[2] & 0x3f) == 0x10) {
    if (uVar6 == 1) {
      bVar2 = 0;
    }
    else if (uVar6 == 2) {
      bVar2 = 1;
    }
    else {
      bVar2 = 2;
    }
  }
  else if ((param_2[2] & 0x3f) == 0x20) {
    if (uVar6 == 1) {
      bVar2 = 3;
    }
    else if (uVar6 == 2) {
      bVar2 = 4;
    }
    else {
      bVar2 = 5;
    }
  }
  else {
    bVar2 = 0xff;
  }
  *(byte *)(param_1 + 0x17) = bVar2;
  return 2 - (uint)(bVar2 < 6);
}



// FUNCTION 1431bc480 InterleaveAndSwapOutput body=129 status=ok
// SIG undefined InterleaveAndSwapOutput(void)

undefined8 CAkResampler::InterleaveAndSwapOutput(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_48 = *param_1;
  uStack_40 = param_1[1];
  local_38 = param_1[2];
  uStack_30 = param_1[3];
  local_28 = *(undefined4 *)(param_1 + 4);
  uStack_24 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_20 = *(undefined4 *)(param_1 + 5);
  uStack_1c = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_18 = param_1[6];
  uVar1 = AkPipelineBufferBase::GetCachedBuffer
                    (&local_48,*(undefined2 *)(param_1 + 2),*(undefined4 *)(param_1 + 1));
  if ((int)uVar1 == 1) {
    local_38._0_4_ = CONCAT22(*(undefined2 *)((longlong)param_1 + 0x12),(undefined2)local_38);
    Interleave_Native_NChan(param_1,&local_48);
    AkPipelineBufferBase::ReleaseCachedBuffer(param_1);
    uVar1 = 1;
    *param_1 = local_48;
    param_1[1] = uStack_40;
    param_1[2] = local_38;
  }
  return uVar1;
}



// FUNCTION 1431bc510 IsPostDeInterleaveRequired body=28 status=ok
// SIG undefined IsPostDeInterleaveRequired(void)

ulonglong CAkResampler::IsPostDeInterleaveRequired(longlong param_1)

{
  ulonglong in_RAX;
  
  if (((*(int *)(param_1 + 0x50) == 0) && (2 < *(byte *)(param_1 + 0x5d))) &&
     (in_RAX = 0, 2 < (byte)(*(char *)(param_1 + 0x5c) - 3U))) {
    return 1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1431bc530 ResetOffsets body=7 status=ok
// SIG undefined ResetOffsets(void)

void CAkResampler::ResetOffsets(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 1431bc540 SetPitch body=402 status=ok
// SIG undefined SetPitch(void)

void CAkResampler::SetPitch(longlong param_1,float param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  
  if (*(char *)(param_1 + 0x5e) == '\0') {
    fVar4 = *(float *)(param_1 + 0x58);
    uVar3 = *(uint *)(param_1 + 0x34);
    uVar2 = *(uint *)(param_1 + 0x38);
  }
  else {
    fVar4 = ::_guard_xfg_dispatch_icall_nop(2.0,param_2 * 0.00083333335);
    fVar4 = fVar4 * *(float *)(param_1 + 0x54) * 65536.0 + 0.5;
    if (fVar4 < 2.1474836e+09) {
      uVar2 = (uint)(longlong)fVar4;
      if (uVar2 == 0) {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0x7fffffff;
    }
    *(float *)(param_1 + 0x58) = param_2;
    *(uint *)(param_1 + 0x34) = uVar2;
    *(uint *)(param_1 + 0x38) = uVar2;
    *(undefined4 *)(param_1 + 0x3c) = 0x400;
    *(undefined1 *)(param_1 + 0x5e) = 0;
    fVar4 = param_2;
    uVar3 = uVar2;
  }
  if (param_2 != fVar4) {
    if (*(int *)(param_1 + 0x50) == 2) {
      iVar1 = (*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34)) * *(int *)(param_1 + 0x3c);
      uVar3 = ((int)((iVar1 >> 0x1f & 0x3ffU) + iVar1) >> 10) + *(int *)(param_1 + 0x34);
      *(uint *)(param_1 + 0x34) = uVar3;
      if (uVar3 == 0) {
        *(undefined4 *)(param_1 + 0x34) = 1;
        uVar3 = 1;
      }
      else if (0x7fffffff < uVar3) {
        *(undefined4 *)(param_1 + 0x34) = 0x7fffffff;
        uVar3 = 0x7fffffff;
      }
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
    fVar4 = ::_guard_xfg_dispatch_icall_nop(2.0,param_2 * 0.00083333335);
    fVar4 = fVar4 * *(float *)(param_1 + 0x54) * 65536.0 + 0.5;
    if (fVar4 < 2.1474836e+09) {
      uVar2 = (uint)(longlong)fVar4;
      if (uVar2 == 0) {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0x7fffffff;
    }
    *(float *)(param_1 + 0x58) = param_2;
    *(uint *)(param_1 + 0x38) = uVar2;
    if (param_3 == '\0') {
      *(uint *)(param_1 + 0x34) = uVar2;
      uVar3 = uVar2;
    }
  }
  if (uVar3 == uVar2) {
    *(uint *)(param_1 + 0x50) = (uint)(uVar3 != 0x10000);
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = 2;
  }
  return;
}



// FUNCTION 1431bc6e0 SetPitchForTimeSkip body=135 status=ok
// SIG undefined SetPitchForTimeSkip(void)

void CAkResampler::SetPitchForTimeSkip(longlong param_1,float param_2)

{
  int iVar1;
  float fVar2;
  
  if ((*(char *)(param_1 + 0x5e) != '\0') || (param_2 != *(float *)(param_1 + 0x58))) {
    fVar2 = ::_guard_xfg_dispatch_icall_nop(2.0,param_2 * 0.00083333335);
    fVar2 = fVar2 * *(float *)(param_1 + 0x54) * 65536.0 + 0.5;
    if (fVar2 < 2.1474836e+09) {
      iVar1 = (int)(longlong)fVar2;
      if (iVar1 == 0) {
        iVar1 = 1;
      }
    }
    else {
      iVar1 = 0x7fffffff;
    }
    *(float *)(param_1 + 0x58) = param_2;
    *(int *)(param_1 + 0x34) = iVar1;
    *(int *)(param_1 + 0x38) = iVar1;
    *(undefined4 *)(param_1 + 0x3c) = 0x400;
    *(undefined1 *)(param_1 + 0x5e) = 0;
  }
  return;
}



// FUNCTION 1431bc770 SwitchTo body=726 status=ok
// SIG undefined SwitchTo(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CAkResampler::SwitchTo
               (longlong param_1,uint *param_2,undefined4 param_3,undefined8 *param_4,uint param_5)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  bool bVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  float fVar12;
  undefined8 auStack_80 [5];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  bVar6 = *(byte *)(param_1 + 0x5d);
  uVar9 = (ulonglong)bVar6 * 4 + 0xf;
  if (uVar9 <= (ulonglong)bVar6 * 4) {
    uVar9 = 0xffffffffffffff0;
  }
  auStack_80[0] = 0x1431bc7c3;
  lVar4 = -(uVar9 & 0xfffffffffffffff0);
  uVar9 = 0;
  bVar1 = *(byte *)(param_1 + 0x5c);
  if (bVar1 < 3) {
    uVar11 = uVar9;
    if (bVar6 != 0) {
      do {
        uVar10 = (int)uVar11 + 1;
        *(float *)((longlong)&local_58 + uVar11 * 4 + lVar4) =
             (float)(int)*(short *)(*(longlong *)(param_1 + 0x20) + uVar11 * 2) * 3.0517578e-05;
        bVar6 = *(byte *)(param_1 + 0x5d);
        uVar11 = (ulonglong)uVar10;
      } while (uVar10 < bVar6);
    }
  }
  else if ((((byte)(bVar1 - 3) < 2) || (bVar1 == 5)) && (uVar11 = uVar9, bVar6 != 0)) {
    do {
      uVar10 = (int)uVar11 + 1;
      *(undefined4 *)((longlong)&local_58 + uVar11 * 4 + lVar4) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x20) + uVar11 * 4);
      bVar6 = *(byte *)(param_1 + 0x5d);
      uVar11 = (ulonglong)uVar10;
    } while (uVar10 < bVar6);
  }
  if (((*(int *)(param_1 + 0x50) == 0) && (2 < bVar6)) &&
     (2 < (byte)(*(char *)(param_1 + 0x5c) - 3U))) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if ((float)*param_2 / (float)param_5 != *(float *)(param_1 + 0x54)) {
    *(float *)(param_1 + 0x54) = (float)*param_2 / (float)param_5;
    *(undefined1 *)(param_1 + 0x5e) = 1;
  }
  *(undefined8 *)((longlong)auStack_80 + lVar4) = 0x1431bc8a0;
  SetPitch(param_1,param_3,1);
  if ((param_2[2] & 0x3f) == 0x10) {
    if (*(char *)(param_1 + 0x5d) == '\x01') {
      cVar7 = '\0';
    }
    else if (*(char *)(param_1 + 0x5d) == '\x02') {
      cVar7 = '\x01';
    }
    else {
      cVar7 = '\x02';
    }
  }
  else if ((param_2[2] & 0x3f) == 0x20) {
    if (*(char *)(param_1 + 0x5d) == '\x01') {
      cVar7 = '\x03';
    }
    else if (*(char *)(param_1 + 0x5d) == '\x02') {
      cVar7 = '\x04';
    }
    else {
      cVar7 = '\x05';
    }
  }
  else {
    cVar7 = -1;
  }
  *(char *)(param_1 + 0x5c) = cVar7;
  if (((*(int *)(param_1 + 0x50) == 0) && (2 < *(byte *)(param_1 + 0x5d))) &&
     (2 < (byte)(cVar7 - 3U))) {
    if (bVar5) goto LAB_1431bc9ba;
    local_58 = *param_4;
    uStack_50 = param_4[1];
    uVar3 = *(undefined4 *)(param_4 + 1);
    local_48 = param_4[2];
    uStack_40 = param_4[3];
    uVar2 = *(undefined2 *)(param_4 + 2);
    local_38 = param_4[4];
    uStack_30 = param_4[5];
    local_28 = param_4[6];
    *(undefined8 *)((longlong)auStack_80 + lVar4) = 0x1431bc936;
    iVar8 = AkPipelineBufferBase::GetCachedBuffer(&local_58,uVar2,uVar3);
    if (iVar8 != 1) goto LAB_1431bc9ba;
    local_48._0_4_ = CONCAT22(*(undefined2 *)((longlong)param_4 + 0x12),(undefined2)local_48);
    *(undefined8 *)((longlong)auStack_80 + lVar4) = 0x1431bc94f;
    Interleave_Native_NChan(param_4,&local_58);
  }
  else {
    if (!bVar5) goto LAB_1431bc9ba;
    local_58 = *param_4;
    uStack_50 = param_4[1];
    uVar3 = *(undefined4 *)(param_4 + 1);
    local_48 = param_4[2];
    uStack_40 = param_4[3];
    uVar2 = *(undefined2 *)(param_4 + 2);
    local_38 = param_4[4];
    uStack_30 = param_4[5];
    local_28 = param_4[6];
    *(undefined8 *)((longlong)auStack_80 + lVar4) = 0x1431bc988;
    iVar8 = AkPipelineBufferBase::GetCachedBuffer(&local_58,uVar2,uVar3);
    if (iVar8 != 1) goto LAB_1431bc9ba;
    local_48._0_4_ = CONCAT22(*(undefined2 *)((longlong)param_4 + 0x12),(undefined2)local_48);
    *(undefined8 *)((longlong)auStack_80 + lVar4) = 0x1431bc9a1;
    Deinterleave_Native_NChan(param_4,&local_58);
  }
  *(undefined8 *)((longlong)auStack_80 + lVar4) = 0x1431bc9a9;
  AkPipelineBufferBase::ReleaseCachedBuffer(param_4);
  *param_4 = local_58;
  param_4[1] = uStack_50;
  param_4[2] = local_48;
LAB_1431bc9ba:
  if (*(byte *)(param_1 + 0x5c) < 3) {
    if (*(char *)(param_1 + 0x5d) != '\0') {
      do {
        fVar12 = *(float *)((longlong)&local_58 + uVar9 * 4 + lVar4) * 32767.0;
        if (32767.0 <= fVar12) {
          fVar12 = 32767.0;
        }
        if (fVar12 <= -32768.0) {
          fVar12 = -32768.0;
        }
        *(short *)(*(longlong *)(param_1 + 0x20) + uVar9 * 2) = (short)(int)fVar12;
        uVar10 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar10;
      } while (uVar10 < *(byte *)(param_1 + 0x5d));
    }
  }
  else if (((byte)(*(byte *)(param_1 + 0x5c) - 3) < 3) && (*(char *)(param_1 + 0x5d) != '\0')) {
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + uVar9 * 4) =
           *(undefined4 *)((longlong)&local_58 + uVar9 * 4 + lVar4);
      uVar10 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar10;
    } while (uVar10 < *(byte *)(param_1 + 0x5d));
  }
  return;
}



// FUNCTION 1431bca50 Term body=54 status=ok
// SIG undefined Term(void)

void CAkResampler::Term(longlong param_1)

{
  if (*(char *)(param_1 + 0x48) != '\0') {
    AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,*(void **)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x28) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 1431bca90 FUN_1431bca90 body=218 status=ok
// SIG undefined FUN_1431bca90(void)

undefined8
FUN_1431bca90(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
             longlong param_5)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = 0;
  *(longlong *)(param_1 + 0x10) = param_5;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined2 *)(param_1 + 0x8a) = 0;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = param_4;
  lVar1 = *(longlong *)(param_5 + 8) + -0x18;
  if (*(longlong *)(param_5 + 8) == 0) {
    lVar1 = lVar3;
  }
  lVar4 = lVar3;
  if (lVar1 != 0) {
    lVar4 = lVar1 + 0x18;
  }
  lVar1 = FUN_14318af60(param_1 + 0x20,*param_3,lVar4);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(*param_3 + 0x30);
    pvVar2 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,0x28);
    if (pvVar2 != (void *)0x0) {
      lVar3 = CAkInsertFXContext::CAkInsertFXContext(pvVar2,param_5,param_4);
    }
    *(longlong *)(param_1 + 0x18) = lVar3;
    if (lVar3 != 0) {
      return 1;
    }
  }
  return 2;
}



// FUNCTION 1431bcb70 Term body=88 status=ok
// SIG undefined Term(void)

void CAkVPLFilterNodeBase::Term(longlong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  (**(code **)(*(longlong *)(param_1 + 0x20) + 0x20))(param_1 + 0x20);
  lVar2 = g_LEngineDefaultPoolId;
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,0);
    AK::MemoryMgr::Free(lVar2,puVar1);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1431bcbf0 FUN_1431bcbf0 body=42 status=ok
// SIG undefined FUN_1431bcbf0(void)

void FUN_1431bcbf0(longlong param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001431bcc01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
    return;
  }
  if (*(char *)(param_1 + 0x88) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001431bcc15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
    return;
  }
  return;
}



// FUNCTION 1431bcc20 FUN_1431bcc20 body=244 status=ok
// SIG undefined FUN_1431bcc20(void)

void FUN_1431bcc20(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  short *psVar2;
  void *pvVar3;
  
  if (*(short *)(param_1 + 0x8a) == 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
    psVar2 = (short *)(lVar1 + 0xec);
    if (lVar1 == 0) {
      psVar2 = (short *)&DAT_00000104;
    }
    if (*psVar2 == 0) {
      *(undefined1 *)(param_1 + 0x8c) = 0;
      if ((int)param_2[7] == 0x11) {
        *(undefined1 *)(param_1 + 0x88) = 1;
      }
      if (*param_2 == 0) {
        pvVar3 = AK::MemoryMgr::Malign
                           (g_LEngineDefaultPoolId,
                            (ulonglong)*(byte *)(param_2 + 1) * (ulonglong)*(ushort *)(param_2 + 2)
                            * 4,0x10);
        *(void **)(param_1 + 0xa0) = pvVar3;
        if (pvVar3 == (void *)0x0) {
          *(undefined4 *)(param_2 + 7) = 2;
          return;
        }
        *param_2 = (longlong)pvVar3;
        *(undefined2 *)((longlong)param_2 + 0x12) = 0;
      }
      *(int *)((longlong)param_2 + 0xc) = (int)param_2[7];
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x38))(*(longlong **)(param_1 + 0x98),param_2);
      *(undefined4 *)(param_2 + 7) = *(undefined4 *)((longlong)param_2 + 0xc);
      return;
    }
  }
  if (*(char *)(param_1 + 0x8c) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))();
  }
  *(undefined1 *)(param_1 + 0x8c) = 1;
  return;
}



// FUNCTION 1431bcd40 FUN_1431bcd40 body=12 status=ok
// SIG undefined FUN_1431bcd40(void)

undefined4 * FUN_1431bcd40(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0xa8);
  return param_2;
}



// FUNCTION 1431bcd50 Init body=132 status=ok
// SIG undefined Init(void)

void CAkVPLFilterNode::Init(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong in_stack_00000030;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(in_stack_00000030 + 4);
  *(undefined8 *)(param_1 + 0x98) = param_2;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  lVar2 = in_stack_00000030;
  iVar1 = FUN_1431bca90();
  if (iVar1 == 1) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x30))
                      (*(longlong **)(param_1 + 0x98),&PTR_PTR_1467be108,
                       *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28),
                       in_stack_00000030,lVar2);
    if (iVar1 == 1) {
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))();
    }
  }
  return;
}



// FUNCTION 1431bcde0 ReleaseBuffer body=76 status=ok
// SIG undefined ReleaseBuffer(void)

void CAkVPLFilterNode::ReleaseBuffer(longlong param_1)

{
  if (*(void **)(param_1 + 0xa0) != (void *)0x0) {
    AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,*(void **)(param_1 + 0xa0));
    *(undefined8 *)(param_1 + 0xa0) = 0;
    return;
  }
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001431bce22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1431bce30 ReleaseMemory body=85 status=ok
// SIG undefined ReleaseMemory(void)

void CAkVPLFilterNode::ReleaseMemory(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x98);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,&PTR_PTR_1467be108);
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if (*(void **)(param_1 + 0xa0) != (void *)0x0) {
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,*(void **)(param_1 + 0xa0));
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 1431bce90 Seek body=45 status=ok
// SIG undefined Seek(void)

void CAkVPLFilterNode::Seek(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))();
  *(undefined1 *)(param_1 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001431bceb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
  return;
}



// FUNCTION 1431bcec0 Term body=28 status=ok
// SIG undefined Term(void)

void CAkVPLFilterNode::Term(longlong *param_1)

{
  (**(code **)(*param_1 + 0x58))();
  CAkVPLFilterNodeBase::Term(param_1);
  return;
}



// FUNCTION 1431bcee0 TimeSkip body=85 status=ok
// SIG undefined TimeSkip(void)

undefined8 CAkVPLFilterNode::TimeSkip(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x88) != '\0') {
    return 0x11;
  }
  plVar1 = *(longlong **)(param_1 + 0x98);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,*param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001431bcf31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2);
  return uVar2;
}



// FUNCTION 1431bcf40 VirtualOn body=53 status=ok
// SIG undefined VirtualOn(void)

void CAkVPLFilterNode::VirtualOn(longlong param_1,int param_2)

{
  if (param_2 != 2) {
    (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))();
  }
  FUN_1431bcbf0(param_1,param_2);
  return;
}



// FUNCTION 1431bcf80 FUN_1431bcf80 body=871 status=ok
// SIG undefined FUN_1431bcf80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1431bcf80(longlong *param_1,undefined8 *param_2)

{
  AkAudioBuffer *pAVar1;
  longlong *plVar2;
  float *pfVar3;
  ushort uVar4;
  code *pcVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  void *pvVar9;
  short *psVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint uVar17;
  uint uVar18;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 *local_res10;
  undefined8 uStack_90;
  undefined1 auStack_88 [32];
  uint auStack_68 [2];
  float afStack_60 [2];
  ushort local_58 [4];
  undefined8 local_50;
  float local_48 [4];
  
  puVar16 = auStack_88;
  if (*(int *)(param_2 + 7) == 0x11) {
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  pAVar1 = (AkAudioBuffer *)(param_1 + 0x15);
  local_res10 = param_2;
  if (*(short *)((longlong)param_1 + 0xba) == 0) {
    *(undefined4 *)(param_1 + 0x25) = 0;
    lVar6 = param_2[1];
    *(undefined8 *)pAVar1 = *param_2;
    param_1[0x16] = lVar6;
    lVar6 = param_2[3];
    param_1[0x17] = param_2[2];
    param_1[0x18] = lVar6;
    lVar6 = param_2[5];
    param_1[0x19] = param_2[4];
    param_1[0x1a] = lVar6;
    uVar11 = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar7 = *(undefined4 *)(param_2 + 7);
    uVar8 = *(undefined4 *)((longlong)param_2 + 0x3c);
    *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0xdc) = uVar11;
    *(undefined4 *)(param_1 + 0x1c) = uVar7;
    *(undefined4 *)((longlong)param_1 + 0xe4) = uVar8;
    uStack_90 = 0x1431bd004;
    CAkVPLNode::CopyRelevantMarkers(param_2,pAVar1,0);
  }
  plVar2 = param_1 + 0x1d;
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)(param_2 + 7);
  if (*plVar2 == 0) {
    uStack_90 = 0x1431bd03f;
    pvVar9 = AK::MemoryMgr::Malloc
                       (g_LEngineDefaultPoolId,
                        (ulonglong)*(ushort *)(param_1 + 0x14) *
                        (ulonglong)*(byte *)(param_1 + 0x1e) * 4);
    if (pvVar9 == (void *)0x0) {
      *(undefined4 *)(param_2 + 7) = 2;
      return;
    }
    *(short *)(param_1 + 0x1f) = (short)param_1[0x14];
    *(undefined2 *)((longlong)param_1 + 0xfa) = 0;
    *plVar2 = (longlong)pvVar9;
    *(int *)(param_1 + 0x1e) = (int)param_1[0x1e];
  }
  uVar4 = *(ushort *)((longlong)param_1 + 0xba);
  *(uint *)((longlong)param_1 + 300) = (uint)uVar4;
  if (*(short *)((longlong)param_1 + 0x8a) == 0) {
    psVar10 = (short *)(*(longlong *)(param_1[2] + 8) + 0xec);
    if (*(longlong *)(param_1[2] + 8) == 0) {
      psVar10 = (short *)&DAT_00000104;
    }
    if (*psVar10 == 0) {
      *(undefined1 *)((longlong)param_1 + 0x8c) = 0;
      uStack_90 = 0x1431bd0c5;
      (**(code **)(*(longlong *)param_1[0x13] + 0x38))
                ((longlong *)param_1[0x13],param_1 + 0x15,(int)param_1[0x25],plVar2);
      puVar16 = auStack_88;
      goto LAB_1431bd2c3;
    }
  }
  if (*(char *)((longlong)param_1 + 0x8c) == '\0') {
    uStack_90 = 0x1431bd0ed;
    (**(code **)(*(longlong *)param_1[0x13] + 0x10))();
    uVar4 = *(ushort *)((longlong)param_1 + 0xba);
  }
  uVar12 = 0;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 1;
  if (*(ushort *)(param_1 + 0x1f) <= uVar4) {
    uVar4 = *(ushort *)(param_1 + 0x1f);
  }
  uVar18 = (uint)uVar4;
  if (uVar18 != 0) {
    uVar15 = *(uint *)(param_1 + 0x1e);
    uVar17 = uVar18 + 0xf & 0xfffffff0;
    if ((char)uVar15 != '\0') {
      do {
        uStack_90 = 0x1431bd15b;
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar2 + *(ushort *)(param_1 + 0x1f) * uVar12 * 4),0,
                   (ulonglong)(uVar17 * 4));
        uVar15 = *(uint *)(param_1 + 0x1e);
        uVar14 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar14;
        param_2 = local_res10;
      } while (uVar14 < (uVar15 & 0xff));
    }
    uVar12 = 0;
    if ((uVar17 != uVar18) && ((char)param_1[0x16] != '\0')) {
      do {
        uStack_90 = 0x1431bd1b7;
        _guard_xfg_dispatch_icall_nop
                  ((void *)(param_1[0x15] +
                           (*(ushort *)(param_1 + 0x17) * uVar12 + (ulonglong)uVar4) * 4),0,
                   (ulonglong)((uVar17 - uVar18) * 4));
        uVar15 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar15;
      } while (uVar15 < *(byte *)(param_1 + 0x16));
      uVar15 = *(uint *)(param_1 + 0x1e);
      param_2 = local_res10;
    }
    uVar14 = *(uint *)(param_1 + 0x16);
    uVar12 = (ulonglong)(((uVar15 & 0xff) + 3 >> 2) * (uVar14 & 0xff) * 0x10);
    uVar13 = uVar12 + 0xf;
    if (uVar13 <= uVar12) {
      uVar13 = 0xffffffffffffff0;
    }
    uStack_90 = 0x1431bd210;
    lVar6 = -(uVar13 & 0xfffffffffffffff0);
    puVar16 = auStack_88 + lVar6;
    *(undefined8 *)((longlong)&local_50 + lVar6) = 0;
    pfVar3 = (float *)((longlong)local_48 + lVar6);
    *(float **)((longlong)local_58 + lVar6) = pfVar3;
    *(uint *)((longlong)afStack_60 + lVar6) = uVar15;
    *(uint *)((longlong)auStack_68 + lVar6) = uVar14;
    *(undefined8 *)(auStack_88 + lVar6 + -8) = 0x1431bd248;
    FUN_143165e50(uVar14,0,0x3f800000,0);
    *(short *)((longlong)local_58 + lVar6) = (short)uVar17;
    local_res8 = 0x3f800000;
    local_resc = 0x3f800000;
    *(float *)((longlong)afStack_60 + lVar6) = 1.0 / (float)uVar18;
    *(float **)((longlong)auStack_68 + lVar6) = pfVar3;
    *(undefined8 *)(auStack_88 + lVar6 + -8) = 0x1431bd285;
    CAkMixer::MixNinNChannels
              (pAVar1,(AkAudioBuffer *)(param_1 + 0x1d),(AkRamp *)&local_res8,pfVar3,
               *(float **)((longlong)auStack_68 + lVar6),*(float *)((longlong)afStack_60 + lVar6),
               *(ushort *)((longlong)local_58 + lVar6));
  }
  *(undefined2 *)((longlong)param_1 + 0xba) = 0;
  if ((char)param_1[0x11] == '\0') {
    uVar11 = 0x2b;
    if (*(short *)((longlong)param_1 + 0xfa) == (short)param_1[0x1f]) {
      uVar11 = 0x2d;
    }
    *(undefined4 *)((longlong)param_1 + 0xf4) = uVar11;
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0xf4) = 0x11;
  }
LAB_1431bd2c3:
  pcVar5 = *(code **)(*param_1 + 8);
  *(undefined8 *)(puVar16 + -8) = 0x1431bd2cf;
  (*pcVar5)(param_1,param_2);
  return;
}



// FUNCTION 1431bd340 Init body=295 status=ok
// SIG undefined Init(void)

void CAkVPLFilterNodeOutOfPlace::Init(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong in_stack_00000030;
  longlong lVar2;
  
  *(undefined8 *)(param_1 + 0x98) = param_2;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined2 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0x2b;
  *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xdc) = 1;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0x2b;
  *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x114) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x118) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x11c) = 1;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x13c) = 0x3f800000;
  lVar2 = in_stack_00000030;
  iVar1 = FUN_1431bca90();
  if (iVar1 == 1) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x30))
                      (*(longlong **)(param_1 + 0x98),&PTR_PTR_1467be108,
                       *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28),
                       in_stack_00000030,lVar2);
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(in_stack_00000030 + 4);
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))();
    }
  }
  return;
}



// FUNCTION 1431bd470 ProcessDone body=521 status=ok
// SIG undefined ProcessDone(void)

void CAkVPLFilterNodeOutOfPlace::ProcessDone(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  
  puVar1 = (undefined8 *)(param_1 + 0xa8);
  iVar6 = *(int *)(param_1 + 300) - (uint)*(ushort *)(param_1 + 0xba);
  CAkVPLNode::CopyRelevantMarkers(puVar1,param_1 + 0xe8,*(undefined4 *)(param_1 + 0x128),iVar6);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
  puVar4 = (uint *)(lVar2 + -0x10);
  if (lVar2 == 0) {
    puVar4 = (uint *)&DAT_00000008;
  }
  if ((*puVar4 & 0x100000) != 0) {
    uVar5 = *(int *)(param_1 + 0x140) + iVar6;
    *(uint *)(param_1 + 0x140) = uVar5;
    if ((*(int *)(param_1 + 0xf4) == 0x2d) || (*(int *)(param_1 + 0xf4) == 0x11)) {
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(float *)(param_1 + 0x138) = (float)uVar5 * 0.125 + *(float *)(param_1 + 0x138) * 0.875;
      *(float *)(param_1 + 0x13c) =
           (float)*(ushort *)(param_1 + 0xfa) * 0.125 + *(float *)(param_1 + 0x13c) * 0.875;
      if (*(int *)(param_1 + 0xd0) != -1) {
        *(undefined4 *)((longlong)param_2 + 0x34) = *(undefined4 *)(param_1 + 0xdc);
        *(int *)(param_2 + 5) = *(int *)(param_1 + 0xd0) + *(int *)(param_1 + 0x128);
        *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0xd8);
        *(float *)((longlong)param_2 + 0x2c) =
             *(float *)(param_1 + 0x138) / *(float *)(param_1 + 0x13c);
      }
    }
  }
  *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + iVar6;
  *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + iVar6;
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x134);
  if (*(short *)(param_1 + 0xba) == 0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    AkPipelineBuffer::FreeMarkers(puVar1);
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0xb4) = 0x2b;
    *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xdc) = 1;
    *param_2 = 0;
    *(undefined2 *)((longlong)param_2 + 0x12) = 0;
  }
  iVar6 = *(int *)(param_1 + 0xf4);
  if ((iVar6 == 0x2d) || (iVar6 == 0x11)) {
    uVar3 = param_2[6];
    *(undefined8 *)(param_1 + 0x110) = param_2[5];
    *(undefined8 *)(param_1 + 0x118) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0xf0);
    *param_2 = *(undefined8 *)(param_1 + 0xe8);
    param_2[1] = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x100);
    param_2[2] = *(undefined8 *)(param_1 + 0xf8);
    param_2[3] = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x110);
    param_2[4] = *(undefined8 *)(param_1 + 0x108);
    param_2[5] = uVar3;
    param_2[6] = *(undefined8 *)(param_1 + 0x118);
    iVar6 = *(int *)(param_1 + 0xf4);
  }
  *(int *)(param_2 + 7) = iVar6;
  return;
}



// FUNCTION 1431bd680 ReleaseBuffer body=112 status=ok
// SIG undefined ReleaseBuffer(void)

void CAkVPLFilterNodeOutOfPlace::ReleaseBuffer(longlong param_1)

{
  if (*(void **)(param_1 + 0xe8) != (void *)0x0) {
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,*(void **)(param_1 + 0xe8));
    *(undefined8 *)(param_1 + 0xf4) = 0x2b;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined2 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x114) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x118) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x11c) = 1;
  }
  return;
}



// FUNCTION 1431bd6f0 ReleaseInputBuffer body=88 status=ok
// SIG undefined ReleaseInputBuffer(void)

undefined8 CAkVPLFilterNodeOutOfPlace::ReleaseInputBuffer(longlong param_1)

{
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  }
  AkPipelineBuffer::FreeMarkers((undefined8 *)(param_1 + 0xa8));
  *(undefined8 *)(param_1 + 0xb4) = 0x2b;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xdc) = 1;
  return 1;
}



// FUNCTION 1431bd750 ReleaseMemory body=51 status=ok
// SIG undefined ReleaseMemory(void)

void CAkVPLFilterNodeOutOfPlace::ReleaseMemory(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x98);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,&PTR_PTR_1467be108);
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  return;
}



// FUNCTION 1431bd790 Seek body=119 status=ok
// SIG undefined Seek(void)

void CAkVPLFilterNodeOutOfPlace::Seek(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))();
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  AkPipelineBuffer::FreeMarkers((undefined8 *)(param_1 + 0xa8));
  *(undefined8 *)(param_1 + 0xb4) = 0x2b;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xdc) = 1;
  *(undefined1 *)(param_1 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001431bd803. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
  return;
}



// FUNCTION 1431bd810 Term body=104 status=ok
// SIG undefined Term(void)

void CAkVPLFilterNodeOutOfPlace::Term(longlong *param_1)

{
  (**(code **)(*param_1 + 0x58))();
  CAkVPLFilterNodeBase::Term(param_1);
  if (param_1[0x1d] != 0) {
    AkPipelineBuffer::FreeMarkers(param_1 + 0x1d);
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,(void *)param_1[0x1d]);
    param_1[0x1d] = 0;
    *(undefined4 *)(param_1 + 0x1f) = 0;
  }
  AkPipelineBuffer::FreeMarkers(param_1 + 0x15);
  return;
}



// FUNCTION 1431bd880 TimeSkip body=179 status=ok
// SIG undefined TimeSkip(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int CAkVPLFilterNodeOutOfPlace::TimeSkip(longlong param_1,uint *param_2)

{
  int iVar1;
  uint local_res8 [4];
  uint local_res18 [4];
  
  if (*(char *)(param_1 + 0x88) != '\0') {
    return 0x11;
  }
  local_res8[0] = *param_2;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x40))
                    (*(longlong **)(param_1 + 0x98),local_res8);
  *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + local_res8[0];
  local_res8[0] = *(int *)(param_1 + 0x134) - *(int *)(param_1 + 0x130);
  if ((_DAT_1467bdcb8 & 0xffff) <= local_res8[0]) {
    local_res18[0] = _DAT_1467bdcb8 & 0xffff;
    do {
      if (iVar1 != 0x2d) {
        return iVar1;
      }
      iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                        (*(longlong **)(param_1 + 8),local_res18);
      local_res8[0] = local_res8[0] - local_res18[0];
      *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + local_res18[0];
      *(bool *)(param_1 + 0x88) = iVar1 == 0x11;
      local_res18[0] = _DAT_1467bdcb8 & 0xffff;
    } while (local_res18[0] <= local_res8[0]);
  }
  return iVar1;
}



// FUNCTION 1431bd940 VirtualOn body=62 status=ok
// SIG undefined VirtualOn(void)

void CAkVPLFilterNodeOutOfPlace::VirtualOn(longlong *param_1,int param_2)

{
  if (param_2 != 2) {
    (**(code **)(*(longlong *)param_1[0x13] + 0x10))();
    (**(code **)(*param_1 + 0x60))(param_1);
  }
  FUN_1431bcbf0(param_1,param_2);
  return;
}



// FUNCTION 1431bd980 AkPositioningParams body=12 status=ok
// SIG undefined AkPositioningParams(void)

longlong AkPositioningParams::AkPositioningParams(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 1431bd990 CAk3DAutomationParams body=59 status=ok
// SIG undefined CAk3DAutomationParams(void)

undefined8 * CAk3DAutomationParams::CAk3DAutomationParams(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145ace2e0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  return param_1;
}



// FUNCTION 1431bd9d0 ~AkPositioningParams body=38 status=ok
// SIG undefined ~AkPositioningParams(void)

void AkPositioningParams::~AkPositioningParams(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1431bda00 ~CAk3DAutomationParamsEx body=57 status=ok
// SIG undefined ~CAk3DAutomationParamsEx(void)

void CAk3DAutomationParamsEx::~CAk3DAutomationParamsEx(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__145acaa60;
  if (param_1[9] != 0) {
    AkSharedPathState::Release();
  }
  param_1[9] = 0;
  *param_1 = &PTR_FUN_145ace2e0;
  return;
}



// FUNCTION 1431bda40 FUN_1431bda40 body=43 status=ok
// SIG undefined FUN_1431bda40(void)

undefined8 * FUN_1431bda40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145ace2e0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1431bda70 FreePathInfo body=37 status=ok
// SIG undefined FreePathInfo(void)

void CAk3DAutomationParamsEx::FreePathInfo(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    AkSharedPathState::Release();
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



// FUNCTION 1431bdaa0 PathIsDifferent body=237 status=ok
// SIG undefined PathIsDifferent(void)

undefined8
CAk3DAutomationParams::PathIsDifferent
          (longlong param_1,float *param_2,int param_3,longlong param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if ((*(int *)(param_1 + 0x28) != param_3) || ((*(uint *)(param_1 + 0x38) & 0x7fffffff) != param_5)
     ) {
    return 1;
  }
  pfVar3 = *(float **)(param_1 + 0x20);
  uVar5 = 0;
  if (param_5 != 0) {
    do {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x30) + 8 + uVar5 * 0x18);
      if (iVar1 != *(int *)(param_4 + 4 + uVar5 * 8)) {
        return 1;
      }
      if (iVar1 != 0) {
        iVar2 = 0;
        if (0 < iVar1 + -1) {
          do {
            if (*pfVar3 != *param_2) {
              return 1;
            }
            if (pfVar3[1] != param_2[1]) {
              return 1;
            }
            if (pfVar3[2] != param_2[2]) {
              return 1;
            }
            if (param_2[3] != pfVar3[3]) {
              return 1;
            }
            param_2 = param_2 + 4;
            pfVar3 = pfVar3 + 4;
            iVar2 = iVar2 + 1;
          } while (iVar2 < iVar1 + -1);
        }
        if (*pfVar3 != *param_2) {
          return 1;
        }
        if (pfVar3[1] != param_2[1]) {
          return 1;
        }
        if (pfVar3[2] != param_2[2]) {
          return 1;
        }
        param_2 = param_2 + 4;
        pfVar3 = pfVar3 + 4;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < param_5);
  }
  return 0;
}



// FUNCTION 1431bdb90 SetPath body=490 status=ok
// SIG undefined SetPath(void)

undefined8
CAk3DAutomationParams::SetPath
          (longlong param_1,void *param_2,uint param_3,uint *param_4,uint param_5)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar7 = 0;
  uVar6 = 1;
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  uVar3 = *(uint *)(param_1 + 0x38) & 0x80000000;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(uint *)(param_1 + 0x38) = uVar3;
  if ((((param_3 == 0) || (param_5 == 0)) || (param_2 == (void *)0x0)) || (param_4 == (uint *)0x0))
  {
    uVar6 = 0x1f;
    goto LAB_1431bdd21;
  }
  pvVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)(param_3 << 4));
  *(void **)(param_1 + 0x20) = pvVar4;
  if (pvVar4 == (void *)0x0) {
LAB_1431bdd0d:
    uVar6 = 0x34;
  }
  else {
    ::_guard_xfg_dispatch_icall_nop(pvVar4,param_2,(ulonglong)(param_3 << 4));
    *(uint *)(param_1 + 0x28) = param_3;
    pvVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)(param_5 * 0x18));
    *(void **)(param_1 + 0x30) = pvVar4;
    if (pvVar4 == (void *)0x0) goto LAB_1431bdd0d;
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0x80000000;
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | param_5 & 0x7fffffff;
    uVar5 = uVar7;
    puVar8 = param_4;
    uVar10 = uVar7;
    if (param_5 != 0) {
      do {
        uVar3 = *param_4;
        puVar1 = param_4 + 1;
        param_4 = param_4 + 2;
        *(uint *)(uVar5 + 8 + *(longlong *)(param_1 + 0x30)) = *puVar1;
        if (param_3 <= *puVar8) {
          uVar3 = *(uint *)(param_1 + 0x38);
          uVar6 = 2;
          goto LAB_1431bdd21;
        }
        uVar9 = (int)uVar10 + 1;
        *(ulonglong *)(uVar5 + *(longlong *)(param_1 + 0x30)) =
             (ulonglong)uVar3 * 0x10 + *(longlong *)(param_1 + 0x20);
        *(undefined4 *)(uVar5 + 0xc + *(longlong *)(param_1 + 0x30)) = 0;
        *(undefined4 *)(uVar5 + 0x10 + *(longlong *)(param_1 + 0x30)) = 0;
        *(undefined4 *)(uVar5 + 0x14 + *(longlong *)(param_1 + 0x30)) = 0;
        uVar5 = uVar5 + 0x18;
        puVar8 = puVar8 + 2;
        uVar10 = (ulonglong)uVar9;
      } while (uVar9 < param_5);
      uVar3 = *(uint *)(param_1 + 0x38);
      goto LAB_1431bdd21;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x38);
LAB_1431bdd21:
  if ((uVar3 & 0x7fffffff) != 0) {
    do {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x30) + 8 + uVar7 * 0x18);
      if (0 < iVar2) {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x30) + uVar7 * 0x18) + -4 + (longlong)iVar2 * 0x10)
             = *(undefined4 *)(param_1 + 0x1c);
      }
      uVar3 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar3;
    } while (uVar3 < (*(uint *)(param_1 + 0x38) & 0x7fffffff));
  }
  return uVar6;
}



// FUNCTION 1431bdd80 SetPathPlayList body=56 status=ok
// SIG undefined SetPathPlayList(void)

void CAk3DAutomationParams::SetPathPlayList(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  CAkPathManager::SetPathsList
            (DAT_146b50b10,param_2,*(undefined8 *)(param_1 + 0x30),
             *(uint *)(param_1 + 0x38) & 0x7fffffff,*(undefined4 *)(param_1 + 0x18),
             (byte)(*(uint *)(param_1 + 0x38) >> 0x1f),param_3);
  return;
}



// FUNCTION 1431bddc0 SetTransition body=81 status=ok
// SIG undefined SetTransition(void)

void CAk3DAutomationParams::SetTransition(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  if ((*(uint *)(param_1 + 0x38) & 0x7fffffff) != 0) {
    do {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x30) + 8 + uVar3 * 0x18);
      if (0 < iVar1) {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x30) + uVar3 * 0x18) + -4 + (longlong)iVar1 * 0x10)
             = *(undefined4 *)(param_1 + 0x1c);
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < (*(uint *)(param_1 + 0x38) & 0x7fffffff));
  }
  return;
}



// FUNCTION 1431bde20 FUN_1431bde20 body=85 status=ok
// SIG undefined FUN_1431bde20(void)

void FUN_1431bde20(longlong param_1)

{
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0x80000000;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 1431bde80 CAkMidiNoteEvent body=79 status=ok
// SIG undefined CAkMidiNoteEvent(void)

longlong CAkMidiNoteEvent::CAkMidiNoteEvent(longlong param_1,longlong param_2,undefined8 param_3)

{
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(longlong *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  *(undefined2 *)(param_1 + 0x28) = 0xff00;
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xf8;
  if (param_2 != 0) {
    CAkMidiBaseCtx::AddRef(param_2);
  }
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 8))();
  }
  return param_1;
}



// FUNCTION 1431bded0 FUN_1431bded0 body=533 status=ok
// SIG undefined FUN_1431bded0(void)

void FUN_1431bded0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  for (puVar2 = *(undefined8 **)(param_1 + 0x18); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    (**(code **)(*(longlong *)puVar2[2] + 0x10))();
  }
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  while (puVar1 = *(undefined8 **)(param_1 + 0x18), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = *puVar1;
    if (puVar1 == *(undefined8 **)(param_1 + 0x20)) {
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    *puVar1 = *(undefined8 *)(param_1 + 0x28);
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
    *(undefined8 **)(param_1 + 0x28) = puVar1;
    puVar2 = puVar1;
  }
  while (puVar1 = puVar2, puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    if ((puVar1 < *(undefined8 **)(param_1 + 0x30)) ||
       (*(undefined8 **)(param_1 + 0x30) + (ulonglong)*(uint *)(param_1 + 0x38) * 4 <= puVar1)) {
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar1);
    }
  }
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  while (puVar1 = *(undefined8 **)(param_1 + 0x40), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = *puVar1;
    if (puVar1 == *(undefined8 **)(param_1 + 0x48)) {
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    *puVar1 = *(undefined8 *)(param_1 + 0x50);
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
    *(undefined8 **)(param_1 + 0x50) = puVar1;
    puVar2 = puVar1;
  }
  while (puVar1 = puVar2, puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    if ((puVar1 < *(undefined8 **)(param_1 + 0x58)) ||
       (*(undefined8 **)(param_1 + 0x58) + (ulonglong)*(uint *)(param_1 + 0x60) * 3 <= puVar1)) {
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar1);
    }
  }
  if (*(void **)(param_1 + 0x58) != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x58));
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x78);
  while (puVar1 = *(undefined8 **)(param_1 + 0x68), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x68) = *puVar1;
    if (puVar1 == *(undefined8 **)(param_1 + 0x70)) {
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
    *puVar1 = *(undefined8 *)(param_1 + 0x78);
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + -1;
    *(undefined8 **)(param_1 + 0x78) = puVar1;
    puVar2 = puVar1;
  }
  while (puVar1 = puVar2, puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    if ((puVar1 < *(undefined8 **)(param_1 + 0x80)) ||
       (*(undefined8 **)(param_1 + 0x80) + (ulonglong)*(uint *)(param_1 + 0x88) * 3 <= puVar1)) {
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar1);
    }
  }
  if (*(void **)(param_1 + 0x80) != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x80));
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}



// FUNCTION 1431be0f0 AddRef body=7 status=ok
// SIG undefined AddRef(void)

void CAkMidiNoteState::AddRef(int *param_1)

{
  *param_1 = *param_1 + 1;
  return;
}



// FUNCTION 1431be100 PairWithExistingNote body=187 status=ok
// SIG undefined PairWithExistingNote(void)

uint CAkMidiNoteEvent::PairWithExistingNote(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  byte bVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (*(char *)(param_1 + 0x29) == *(char *)(param_2 + 0x29)) {
    bVar1 = *(byte *)(param_1 + 0x28);
    uVar5 = bVar1 + 0x80;
    if (((uVar5 & 0xcf) == 0) && (bVar1 != 0xb0)) {
      bVar2 = *(byte *)(param_2 + 0x28);
      uVar5 = bVar2 + 0x80;
      if (((uVar5 & 0xcf) == 0) &&
         ((bVar2 != 0xb0 && (uVar5 = 0, *(char *)(param_1 + 0x2a) == *(char *)(param_2 + 0x2a))))) {
        bVar4 = *(byte *)(param_2 + 0x30);
        uVar5 = 0;
        if ((bVar4 & 4) == 0) {
          if ((((bVar1 == 0x80) || ((bVar1 == 0x90 && (*(char *)(param_1 + 0x2b) == '\0')))) &&
              (bVar2 == 0x90)) && (*(char *)(param_2 + 0x2b) != '\0')) {
            *(undefined1 *)(param_1 + 0x28) = 0x80;
            *(undefined1 *)(param_1 + 0x2b) = *(undefined1 *)(param_2 + 0x2b);
            piVar3 = *(int **)(param_2 + 0x10);
            *(int **)(param_1 + 0x10) = piVar3;
            *piVar3 = *piVar3 + 1;
            bVar4 = *(byte *)(param_2 + 0x30);
          }
          if ((*(char *)(param_1 + 0x28) != -0x80) &&
             ((*(char *)(param_1 + 0x28) != -0x70 || (*(char *)(param_1 + 0x2b) != '\0')))) {
            *(byte *)(param_2 + 0x30) = bVar4 & 0xfb;
            return 1;
          }
          *(byte *)(param_2 + 0x30) = bVar4 & 0xfb | 4;
          return 1;
        }
      }
    }
  }
  return uVar5 & 0xffffff00;
}



// FUNCTION 1431be1c0 FUN_1431be1c0 body=435 status=ok
// SIG undefined FUN_1431be1c0(void)

void FUN_1431be1c0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 *param_6)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  byte local_res10 [8];
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined1 local_1b0;
  undefined4 local_1a8 [2];
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 *local_190;
  int *local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_110 [2];
  undefined8 local_108;
  undefined1 local_100 [224];
  byte local_20;
  
  iVar3 = (**(code **)(*param_2 + 0x18))(param_2);
  if (iVar3 == 0xb) {
    return;
  }
  FUN_14313bbf0(local_1a8);
  local_1a8[0] = 0;
  local_118 = 0;
  local_174 = *(undefined4 *)((longlong)param_5 + 0x14);
  piVar1 = (int *)*param_5;
  local_180 = param_5[1];
  local_178 = *(undefined4 *)(param_5 + 2);
  local_1a0 = param_3;
  if (local_188 != (int *)0x0) {
    AkExternalSourceArray::Release();
  }
  uVar2 = local_174;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  local_124 = *(undefined4 *)(param_1 + 0x2c);
  bVar5 = local_20 | 2;
  local_190 = &local_1b8;
  local_128 = 0;
  local_120 = 0;
  local_1b0 = 0;
  local_1b8 = 0;
  local_110[0] = *param_6;
  local_108 = *(undefined8 *)(param_1 + 0x10);
  local_1b4 = 4;
  local_198 = param_4;
  local_188 = piVar1;
  if ((((char)local_110[0] != '\0') && ((char)local_110[0] == -0x70)) &&
     ((char)((uint)local_110[0] >> 0x18) != '\0')) {
    local_res10[0] = local_20 & 1;
    local_20 = bVar5;
    uVar4 = AkPBIParams::GetMidiTargetID(local_1a8);
    iVar3 = CAkParameterNode::FilterAndTransformMidiEvent
                      (param_2,local_110,uVar4,local_res10,param_4,uVar2);
    if (iVar3 != 1) goto LAB_1431be33e;
    bVar5 = local_20 ^ (local_res10[0] ^ local_20) & 1;
  }
  local_20 = bVar5;
  iVar3 = FUN_1431a35f0(param_2,local_1a8);
  if (iVar3 == 1) {
    (**(code **)(*param_2 + 0x238))(param_2,local_1a8);
  }
LAB_1431be33e:
  FUN_1431a3820();
  AkInitialSoundParams::DoTerm(local_100);
  if (local_188 != (int *)0x0) {
    AkExternalSourceArray::Release();
  }
  return;
}



// FUNCTION 1431be380 Release body=150 status=ok
// SIG undefined Release(void)

undefined4 CAkMidiNoteEvent::Release(void *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  
  piVar1 = (int *)((longlong)param_1 + 8);
  *piVar1 = *piVar1 + -1;
  lVar3 = g_DefaultPoolId;
  uVar2 = *(undefined4 *)((longlong)param_1 + 8);
  if (*piVar1 == 0) {
    if (*(longlong *)((longlong)param_1 + 0x18) != 0) {
      CAkMidiBaseCtx::Release();
    }
    if (*(longlong **)((longlong)param_1 + 0x20) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)param_1 + 0x20) + 0x10))();
    }
    piVar1 = *(int **)((longlong)param_1 + 0x10);
    if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, lVar4 = g_DefaultPoolId, *piVar1 == 0)) {
      FUN_1431bded0(piVar1);
      AK::MemoryMgr::Free(lVar4,piVar1);
    }
    AK::MemoryMgr::Free(lVar3,param_1);
  }
  return uVar2;
}



// FUNCTION 1431be420 Release body=64 status=ok
// SIG undefined Release(void)

int CAkMidiNoteState::Release(int *param_1)

{
  int iVar1;
  long lVar2;
  
  *param_1 = *param_1 + -1;
  lVar2 = g_DefaultPoolId;
  iVar1 = *param_1;
  if (*param_1 == 0) {
    FUN_1431bded0();
    AK::MemoryMgr::Free(lVar2,param_1);
  }
  return iVar1;
}



// FUNCTION 1431be460 FUN_1431be460 body=444 status=ok
// SIG undefined FUN_1431be460(void)

undefined8 FUN_1431be460(longlong param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  uint uVar12;
  
  bVar4 = *(byte *)(param_1 + 0x30) & 0xfd;
  *(byte *)(param_1 + 0x30) = bVar4;
  cVar1 = *param_2;
  uVar11 = 1;
  if ((cVar1 == -0x70) && (param_2[3] != '\0')) {
    puVar5 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x90);
    puVar9 = (undefined4 *)0x0;
    puVar10 = puVar9;
    if (puVar5 != (undefined4 *)0x0) {
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
      uVar2 = *(undefined4 *)param_2;
      *puVar5 = 1;
      puVar5[1] = uVar2;
      *(undefined8 *)(puVar5 + 2) = uVar3;
      *(undefined8 *)(puVar5 + 4) = 0;
      *(undefined8 *)(puVar5 + 6) = 0;
      *(undefined8 *)(puVar5 + 8) = 0;
      *(undefined8 *)(puVar5 + 10) = 0;
      *(undefined8 *)(puVar5 + 0xc) = 0;
      *(undefined8 *)(puVar5 + 0xe) = 0;
      *(undefined8 *)(puVar5 + 0x10) = 0;
      *(undefined8 *)(puVar5 + 0x12) = 0;
      *(undefined8 *)(puVar5 + 0x14) = 0;
      *(undefined8 *)(puVar5 + 0x16) = 0;
      *(undefined8 *)(puVar5 + 0x18) = 0;
      *(undefined8 *)(puVar5 + 0x1a) = 0;
      *(undefined8 *)(puVar5 + 0x1c) = 0;
      *(undefined8 *)(puVar5 + 0x1e) = 0;
      *(undefined8 *)(puVar5 + 0x20) = 0;
      *(undefined8 *)(puVar5 + 0x22) = 0;
      puVar10 = puVar5;
    }
    *(undefined4 **)(param_1 + 0x10) = puVar10;
    if (puVar10 != (undefined4 *)0x0) {
      puVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x80);
      *(undefined8 **)(puVar10 + 0xc) = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        puVar10[0xe] = 4;
        puVar7 = puVar6 + 3;
        *(undefined8 **)(puVar10 + 10) = puVar6;
        puVar5 = puVar9;
        do {
          puVar8 = puVar6;
          if (puVar7 != (undefined8 *)&DAT_00000010) {
            puVar7[-1] = 0;
            *(undefined2 *)puVar7 = 0xffff;
          }
          uVar12 = (int)puVar5 + 1;
          puVar5 = (undefined4 *)(ulonglong)uVar12;
          *puVar8 = puVar7 + 1;
          puVar7 = puVar7 + 4;
          puVar6 = puVar8 + 4;
        } while (uVar12 < (uint)puVar10[0xe]);
        *puVar8 = 0;
        puVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x60);
        *(undefined8 **)(puVar10 + 0x16) = puVar6;
        if (puVar6 != (undefined8 *)0x0) {
          puVar10[0x18] = 4;
          *(undefined8 **)(puVar10 + 0x14) = puVar6;
          do {
            puVar7 = puVar6;
            uVar12 = (int)puVar9 + 1;
            puVar9 = (undefined4 *)(ulonglong)uVar12;
            *puVar7 = puVar7 + 3;
            puVar6 = puVar7 + 3;
          } while (uVar12 < (uint)puVar10[0x18]);
          *puVar7 = 0;
          goto LAB_1431be5f5;
        }
      }
    }
    uVar11 = 0;
  }
  else {
    if ((cVar1 == -0x80) || ((cVar1 == -0x70 && (param_2[3] == '\0')))) {
      bVar4 = bVar4 | 4;
    }
    else {
      bVar4 = bVar4 | 7;
    }
    *(byte *)(param_1 + 0x30) = bVar4;
  }
LAB_1431be5f5:
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  return uVar11;
}



// FUNCTION 1431be620 FUN_1431be620 body=95 status=ok
// SIG undefined FUN_1431be620(void)

void FUN_1431be620(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  
  for (puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 0x40); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    lVar2 = puVar1[2];
    *(undefined4 *)(lVar2 + 0x2e8) = 0xffffffff;
    local_10 = 0;
    local_18 = 0;
    local_14 = 4;
    FUN_143180140(lVar2,&local_18,1);
  }
  return;
}



// FUNCTION 1431be680 FUN_1431be680 body=822 status=ok
// SIG undefined FUN_1431be680(void)

bool FUN_1431be680(longlong param_1,int param_2,char param_3)

{
  char *pcVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  byte bVar9;
  longlong *plVar10;
  int iVar11;
  undefined4 local_res8;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  
  pcVar1 = (char *)(param_1 + 0x28);
  cVar5 = *pcVar1;
  if ((((cVar5 != -0x70) || (*(char *)(param_1 + 0x2b) == '\0')) && (cVar5 != -0x80)) &&
     ((cVar5 != -0x70 || (*(char *)(param_1 + 0x2b) != '\0')))) {
    return true;
  }
  if (((*(longlong *)(param_1 + 0x18) != 0) &&
      (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10) != 0)) && (param_3 != '\0')) {
    bVar9 = *(byte *)(param_1 + 0x30);
    if (((bVar9 & 2) == 0) && (*(int *)(param_1 + 0x2c) < (int)(uint)DAT_1467bdcb8)) {
      if ((cVar5 == -0x80) || ((cVar5 == -0x70 && (*(char *)(param_1 + 0x2b) == '\0')))) {
        lVar6 = *(longlong *)(param_1 + 0x10);
        plVar10 = *(longlong **)(lVar6 + 0x40);
        if (plVar10 != (longlong *)0x0) {
          do {
            plVar2 = (longlong *)plVar10[2];
            iVar11 = *(int *)(param_1 + 0x2c);
            if (plVar2[0xe] == 0) {
              *(int *)(plVar2 + 0xf) = iVar11;
            }
            else {
              CAkModulatorPBIData::TriggerRelease(plVar2[0xe],iVar11);
            }
            cVar5 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
            if (cVar5 == '\0') {
              iVar8 = (int)plVar10[1];
            }
            else {
              *(undefined4 *)(plVar10 + 1) = 3;
              iVar11 = -1;
              iVar8 = 3;
            }
            if (iVar8 == 2) {
              (**(code **)(*plVar2 + 0x28))(plVar2,*(undefined8 *)(param_1 + 0x20));
            }
            else if (iVar8 == 3) {
              *(int *)(plVar2 + 0x5d) = iVar11;
              local_60 = 0;
              local_68 = 0;
              local_64 = 4;
              FUN_143180140(plVar2,&local_68,iVar11 == -1);
            }
            plVar10 = (longlong *)*plVar10;
          } while (plVar10 != (longlong *)0x0);
          lVar6 = *(longlong *)(param_1 + 0x10);
        }
        for (puVar3 = *(undefined8 **)(lVar6 + 0x68); puVar3 != (undefined8 *)0x0;
            puVar3 = (undefined8 *)*puVar3) {
          FUN_14313cfa0(DAT_146b50b78,puVar3[2],*(undefined8 *)(param_1 + 0x20),
                        *(undefined4 *)(puVar3 + 1));
        }
      }
      *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 2;
      bVar9 = *(byte *)(param_1 + 0x30);
    }
    if ((bVar9 & 1) == 0) {
      lVar6 = *(longlong *)(param_1 + 0x18);
      uVar4 = *(undefined8 *)(lVar6 + 0x10);
      if ((*pcVar1 == -0x70) && (*(char *)(param_1 + 0x2b) != '\0')) {
        FUN_1431be1c0(param_1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x20),uVar4,
                      lVar6 + 0x18,pcVar1);
      }
      else {
        lVar7 = *(longlong *)(param_1 + 0x10);
        plVar10 = *(longlong **)(lVar7 + 0x18);
        if (plVar10 != (longlong *)0x0) {
          do {
            if ((int)plVar10[1] == 1) {
              local_res8._0_1_ = (undefined1)*(undefined4 *)pcVar1;
              local_res8._0_2_ =
                   CONCAT11(*(undefined1 *)((longlong)plVar10 + 0x19),(undefined1)local_res8);
              local_res8._3_1_ = (undefined1)((uint)*(undefined4 *)pcVar1 >> 0x18);
              local_res8._0_3_ = CONCAT12((char)plVar10[3],(undefined2)local_res8);
              FUN_1431be1c0(param_1,plVar10[2],*(undefined8 *)(param_1 + 0x20),uVar4,lVar6 + 0x18,
                            &local_res8);
            }
            plVar10 = (longlong *)*plVar10;
          } while (plVar10 != (longlong *)0x0);
          lVar7 = *(longlong *)(param_1 + 0x10);
        }
        for (puVar3 = *(undefined8 **)(lVar7 + 0x40); puVar3 != (undefined8 *)0x0;
            puVar3 = (undefined8 *)*puVar3) {
          if (*(int *)(puVar3 + 1) != 1) {
            local_30 = puVar3[2];
            plVar10 = *(longlong **)(local_30 + 0x188);
            if (plVar10 != (longlong *)0x0) {
              local_res8._0_1_ = (undefined1)*(undefined4 *)pcVar1;
              local_res8._0_2_ = CONCAT11(*(undefined1 *)(local_30 + 0x2cd),(undefined1)local_res8);
              local_res8._3_1_ = (undefined1)((uint)*(undefined4 *)pcVar1 >> 0x18);
              local_res8._0_3_ = CONCAT12(*(undefined1 *)(local_30 + 0x2ce),(undefined2)local_res8);
              local_50 = local_res8;
              local_48 = *(undefined8 *)(local_30 + 0x2d0);
              local_40 = *(undefined4 *)(local_30 + 0x40);
              local_38 = *(undefined4 *)(param_1 + 0x2c);
              local_3c = *(undefined4 *)(lVar6 + 0x2c);
              local_34 = 3;
              local_58 = uVar4;
              (**(code **)(*plVar10 + 0x148))(plVar10,&local_58,local_30 + 0x70,1);
            }
          }
        }
      }
      *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 1;
    }
  }
  param_2 = *(int *)(param_1 + 0x2c) - param_2;
  iVar11 = 0;
  if (-1 < param_2) {
    iVar11 = param_2;
  }
  *(int *)(param_1 + 0x2c) = iVar11;
  return (*(byte *)(param_1 + 0x30) & 6) == 6;
}



// FUNCTION 1431be9c0 _ExecutePause body=126 status=ok
// SIG undefined _ExecutePause(void)

void CAkMidiNoteEvent::_ExecutePause(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  plVar3 = *(longlong **)(lVar2 + 0x40);
  if (plVar3 != (longlong *)0x0) {
    do {
      local_10 = 0;
      local_14 = 4;
      local_18 = 0;
      FUN_14317fca0(plVar3[2],&local_18);
      plVar3 = (longlong *)*plVar3;
    } while (plVar3 != (longlong *)0x0);
    lVar2 = *(longlong *)(param_1 + 0x10);
  }
  for (puVar1 = *(undefined8 **)(lVar2 + 0x68); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    CAkAudioMgr::PausePendingAction(DAT_146b50b78,puVar1[2]);
  }
  return;
}



// FUNCTION 1431bea40 _ExecuteResume body=142 status=ok
// SIG undefined _ExecuteResume(void)

void CAkMidiNoteEvent::_ExecuteResume(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  plVar3 = *(longlong **)(lVar2 + 0x40);
  if (plVar3 != (longlong *)0x0) {
    do {
      local_10 = 0;
      local_14 = 4;
      local_18 = 0;
      FUN_14317ff90(plVar3[2],&local_18,0);
      plVar3 = (longlong *)*plVar3;
    } while (plVar3 != (longlong *)0x0);
    lVar2 = *(longlong *)(param_1 + 0x10);
  }
  for (puVar1 = *(undefined8 **)(lVar2 + 0x68); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    CAkAudioMgr::ResumePausedPendingAction(DAT_146b50b78,puVar1[2]);
  }
  return;
}



// FUNCTION 1431bead0 CAkSrcBankPCM body=33 status=ok
// SIG undefined CAkSrcBankPCM(void)

undefined8 * CAkSrcBankPCM::CAkSrcBankPCM(undefined8 *param_1)

{
  FUN_1431c7cd0();
  *param_1 = &PTR__scalar_deleting_destructor__145ace2f8;
  return param_1;
}



// FUNCTION 1431beb00 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TaskBattleStartAction::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ace2f8;
  CAkSrcBaseEx::~CAkSrcBaseEx();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1431beb40 FUN_1431beb40 body=62 status=ok
// SIG undefined FUN_1431beb40(void)

int FUN_1431beb40(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_1431c7f80();
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(byte *)(lVar1 + 0x295) = *(byte *)(lVar1 + 0x295) & 0x3f;
  *(byte *)(lVar1 + 0x296) = *(byte *)(lVar1 + 0x296) & 0xfe;
  *(undefined4 *)(lVar1 + 0x28c) = 0;
  return 2 - (uint)(*(uint *)(param_1 + 0x2c) < *(uint *)(param_1 + 0x28));
}



// FUNCTION 1431beb80 FUN_1431beb80 body=117 status=ok
// SIG undefined FUN_1431beb80(void)

void FUN_1431beb80(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ushort uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar4 = *(ushort *)(param_2 + 0x10);
  if (*(short *)(param_1 + 0x54) == 1) {
    uVar3 = *(uint *)(param_1 + 0x28);
  }
  else {
    uVar3 = *(int *)(param_1 + 0x3c) + 1;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  if (uVar3 < (uint)uVar4 + iVar1) {
    uVar4 = (short)uVar3 - (short)iVar1;
  }
  FUN_1431c8210(param_1,(ulonglong)(iVar1 * (*(uint *)(lVar2 + 0x238) >> 6 & 0x3ff)) +
                        *(longlong *)(param_1 + 0x58),uVar4,*(undefined4 *)(lVar2 + 0x230),
                *(undefined4 *)(lVar2 + 0x234),param_2);
  return;
}



// FUNCTION 1431bec50 FUN_1431bec50 body=413 status=ok
// SIG undefined FUN_1431bec50(void)

undefined8 FUN_1431bec50(longlong param_1,longlong param_2,int param_3)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  uint local_50;
  int local_48 [2];
  undefined8 local_40;
  undefined1 local_38 [8];
  short *local_30;
  
  if (param_2 != 0) {
    puVar1 = (uint *)(param_1 + 0x3c);
    local_48[0] = 0;
    local_40 = 0;
    iVar7 = AkFileParser::Parse(param_2,param_3,local_38,param_1 + 0x40,(uint *)(param_1 + 0x38),
                                puVar1,(uint *)(param_1 + 0x30),(uint *)(param_1 + 0x34),local_48,0,
                                0);
    if ((iVar7 != 1) || (*local_30 != -2)) {
      return 7;
    }
    uVar2 = local_30[6];
    uVar3 = local_30[7];
    lVar6 = *(longlong *)(param_1 + 0x18);
    *(ulonglong *)(lVar6 + 0x230) =
         CONCAT44(*(undefined4 *)(local_30 + 10),*(undefined4 *)(local_30 + 2));
    *(uint *)(lVar6 + 0x238) = (uVar2 & 0x3ff) << 6 | uVar3 & 0x3f | local_50 & 0xfff80000;
    if (local_48[0] != 0) {
      *(undefined8 *)(param_1 + 0x10) = local_40;
    }
    uVar4 = *(uint *)(param_1 + 0x34);
    uVar5 = *(uint *)(param_1 + 0x30);
    *(ulonglong *)(param_1 + 0x58) = param_2 + (ulonglong)uVar4;
    uVar8 = uVar5 / (ushort)local_30[6];
    uVar11 = (ulonglong)uVar5 % (ulonglong)(ushort)local_30[6];
    *(uint *)(param_1 + 0x28) = uVar8;
    uVar9 = *puVar1;
    if ((uVar9 == 0) || (*(short *)(param_1 + 0x54) == 1)) {
      uVar11 = (ulonglong)uVar5 % (ulonglong)(ushort)local_30[6];
      uVar9 = uVar5 / (ushort)local_30[6] - 1;
      *puVar1 = uVar9;
    }
    if (((*(uint *)(param_1 + 0x38) <= uVar9) && (uVar9 < uVar8)) && (param_3 == uVar5 + uVar4)) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
      if ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x295) & 0x40) != 0) {
        uVar10 = FUN_1431beb40(param_1,uVar11);
        return uVar10;
      }
      return 1;
    }
  }
  return 2;
}



// FUNCTION 1431bee30 CAkSrcFilePCM body=49 status=ok
// SIG undefined CAkSrcFilePCM(void)

undefined8 * CAkSrcFilePCM::CAkSrcFilePCM(undefined8 *param_1)

{
  CAkSrcFileBase::CAkSrcFileBase();
  *param_1 = &PTR_FUN_145ace3e0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  return param_1;
}



// FUNCTION 1431bee70 FUN_1431bee70 body=62 status=ok
// SIG undefined FUN_1431bee70(void)

undefined8 * FUN_1431bee70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145ace3e0;
  CAkSrcFileBase::~CAkSrcFileBase();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1431beeb0 ChangeSourcePosition body=76 status=ok
// SIG undefined ChangeSourcePosition(void)

void CAkSrcFilePCM::ChangeSourcePosition(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x94) = 0;
  if (*(void **)(param_1 + 0x88) != (void *)0x0) {
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,*(void **)(param_1 + 0x88));
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  CAkSrcFileBase::ChangeSourcePosition(param_1);
  return;
}



// FUNCTION 1431bef00 FindClosestFileOffset body=67 status=ok
// SIG undefined FindClosestFileOffset(void)

undefined8
CAkSrcFilePCM::FindClosestFileOffset(longlong *param_1,int param_2,int *param_3,int *param_4)

{
  ushort uVar1;
  
  *param_3 = param_2;
  uVar1 = (**(code **)(*param_1 + 0x108))();
  *param_4 = (uint)uVar1 * param_2 + *(int *)((longlong)param_1 + 0x34);
  return 1;
}



// FUNCTION 1431bef70 FUN_1431bef70 body=711 status=ok
// SIG undefined FUN_1431bef70(void)

void FUN_1431bef70(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  void *_Dst;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int local_res8 [2];
  int local_res18;
  undefined4 local_res20;
  undefined4 local_res24;
  float local_48 [4];
  
  iVar6 = 0x2d;
  if ((*(byte *)(param_1 + 4) & 2) != 0) {
    plVar2 = (longlong *)param_1[0xb];
    lVar4 = param_1[0xd];
    iVar6 = (**(code **)(*plVar2 + 0x50))(plVar2);
    if (iVar6 - 0x2dU < 2) {
      uVar8 = (**(code **)(*plVar2 + 0x58))(plVar2);
      if (uVar8 <= (uint)(local_res18 + (int)lVar4)) goto LAB_1431befd8;
      iVar6 = 0x2e;
    }
    else if (iVar6 == 0x11) {
LAB_1431befd8:
      *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfd;
      iVar6 = 0x2d;
    }
  }
  if ((*(uint *)(param_1[3] + 8) & 0x400000) != 0) {
    plVar2 = (longlong *)param_1[0xb];
    lVar4 = param_1[0xd];
    iVar7 = (**(code **)(*plVar2 + 0x50))(plVar2,local_res8);
    local_res20 = 0;
    if (iVar7 == 2) {
      local_res24 = 2;
    }
    else {
      (**(code **)(*plVar2 + 0x20))(plVar2,local_48);
      local_res20 = (undefined4)(longlong)((float)(uint)(local_res8[0] + (int)lVar4) / local_48[0]);
      if ((iVar7 == 0x11) ||
         (uVar8 = (**(code **)(*plVar2 + 0x58))(plVar2), uVar8 <= (uint)(local_res8[0] + (int)lVar4)
         )) {
        local_res24 = 0x11;
      }
      else {
        local_res24 = 1;
      }
    }
    FUN_143162760(DAT_146b50b70,*(undefined4 *)(param_1[3] + 0x200),param_1,&local_res20);
  }
  if (iVar6 != 0x2d) {
    *(int *)(param_2 + 0x38) = iVar6;
    return;
  }
  if (((int)param_1[0xd] == 0) && (iVar6 = FUN_1431c8680(param_1), iVar6 != 0x2d)) {
    *(int *)(param_2 + 0x38) = iVar6;
    return;
  }
  uVar5 = (**(code **)(*param_1 + 0x108))(param_1);
  uVar8 = *(uint *)(param_1 + 0xd);
  uVar3 = (ulonglong)uVar8 / (ulonglong)uVar5;
  if ((uVar8 == 0) && ((*(byte *)((longlong)param_1 + 0x82) & 1) != 0)) {
LAB_1431bf1be:
    *(undefined4 *)(param_2 + 0x38) = 2;
  }
  else {
    uVar11 = (ulonglong)*(ushort *)(param_2 + 0x10);
    lVar4 = param_1[3];
    if ((uint)uVar3 <= (uint)*(ushort *)(param_2 + 0x10)) {
      uVar11 = uVar3 & 0xffff;
    }
    uVar1 = *(uint *)(param_1 + 0x12);
    uVar9 = (uint)uVar5;
    if (uVar1 == 0) {
      if ((void *)param_1[0x11] != (void *)0x0) {
        AK::MemoryMgr::Free(g_LEngineDefaultPoolId,(void *)param_1[0x11]);
        uVar8 = *(uint *)(param_1 + 0xd);
        param_1[0x11] = 0;
      }
      lVar10 = param_1[0xc];
      iVar6 = (int)uVar11 * uVar9;
      uVar8 = uVar8 - iVar6;
      *(int *)((longlong)param_1 + 0x94) = iVar6;
      if ((uVar8 < uVar9) && (uVar8 != 0)) {
        _Dst = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,(ulonglong)uVar5);
        param_1[0x11] = (longlong)_Dst;
        if (_Dst == (void *)0x0) goto LAB_1431bf1be;
        *(uint *)(param_1 + 0x12) = uVar8 & 0xffff;
        _guard_xfg_dispatch_icall_nop
                  (_Dst,(void *)((ulonglong)*(uint *)((longlong)param_1 + 0x94) + param_1[0xc]),
                   (ulonglong)(uVar8 & 0xffff));
        *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + (int)param_1[0x12]
        ;
      }
    }
    else {
      uVar9 = uVar9 - uVar1;
      if (uVar8 < uVar9) goto LAB_1431bf1be;
      _guard_xfg_dispatch_icall_nop
                ((void *)((ulonglong)uVar1 + param_1[0x11]),(void *)param_1[0xc],(ulonglong)uVar9);
      uVar11 = 1;
      *(undefined4 *)(param_1 + 0x12) = 0;
      lVar10 = param_1[0x11];
      *(uint *)((longlong)param_1 + 0x94) = uVar9 & 0xffff;
    }
    FUN_1431c8210(param_1,lVar10,uVar11,*(undefined4 *)(lVar4 + 0x230),
                  *(undefined4 *)(lVar4 + 0x234),param_2);
  }
  return;
}



// FUNCTION 1431bf290 FUN_1431bf290 body=508 status=ok
// SIG undefined FUN_1431bf290(void)

undefined8 FUN_1431bf290(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint local_50;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3b;
  int local_38 [2];
  undefined8 local_30;
  undefined1 local_28 [8];
  short *local_20;
  
  local_38[0] = 0;
  local_30 = 0;
  puVar1 = (uint *)(param_1 + 0x3c);
  puVar2 = (uint *)(param_1 + 0x38);
  uVar8 = AkFileParser::Parse(param_2,*(undefined4 *)(param_1 + 0x68),local_28,param_1 + 0x40,puVar2
                              ,puVar1,(uint *)(param_1 + 0x30),(int *)(param_1 + 0x34),local_38,0,0)
  ;
  if ((int)uVar8 != 1) {
    return uVar8;
  }
  if (*local_20 == -2) {
    uVar3 = local_20[6];
    uVar4 = local_20[7];
    lVar7 = *(longlong *)(param_1 + 0x18);
    *(ulonglong *)(lVar7 + 0x230) =
         CONCAT44(*(undefined4 *)(local_20 + 10),*(undefined4 *)(local_20 + 2));
    *(uint *)(lVar7 + 0x238) = (uVar3 & 0x3ff) << 6 | uVar4 & 0x3f | local_50 & 0xfff80000;
    if (local_38[0] != 0) {
      CAkSrcFileBase::StoreAnalysisData(param_1);
    }
    uVar9 = *(uint *)(param_1 + 0x30);
    iVar5 = *(int *)(param_1 + 0x34);
    uVar6 = *puVar1;
    uVar11 = iVar5 + uVar9;
    *(uint *)(param_1 + 0x28) = uVar9 / (ushort)local_20[6];
    if ((uVar6 == 0) || (*(short *)(param_1 + 0x54) == 1)) {
      *(int *)(param_1 + 0x78) = iVar5;
      *(uint *)(param_1 + 0x7c) = uVar11;
      *puVar1 = uVar9 / (ushort)local_20[6] - 1;
    }
    else {
      uVar9 = *puVar2 * (uint)(ushort)local_20[6] + iVar5;
      uVar10 = (uVar6 + 1) * (uint)(ushort)local_20[6] + iVar5;
      *(uint *)(param_1 + 0x78) = uVar9;
      *(uint *)(param_1 + 0x7c) = uVar10;
      if (((uVar6 < *puVar2) || (uVar11 < uVar9)) || (uVar11 < uVar10)) goto LAB_1431bf3db;
    }
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))(*(longlong **)(param_1 + 0x58),&local_48);
    local_48 = (float)((uint)(ushort)local_20[6] * *(int *)(local_20 + 2)) * 0.001;
    if (*(short *)(param_1 + 0x54) != 1) {
      local_44 = *(undefined4 *)(param_1 + 0x78);
      local_40 = *(undefined4 *)(param_1 + 0x7c);
    }
    local_3b = (undefined1)(int)*(float *)(*(longlong *)(param_1 + 0x18) + 0x2a0);
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x28))(*(longlong **)(param_1 + 0x58),&local_48);
    uVar8 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x30))
                      (*(longlong **)(param_1 + 0x58),local_20[6]);
  }
  else {
LAB_1431bf3db:
    uVar8 = 7;
  }
  return uVar8;
}



// FUNCTION 1431bf4d0 StopStream body=60 status=ok
// SIG undefined StopStream(void)

void CAkSrcFilePCM::StopStream(longlong param_1)

{
  if (*(void **)(param_1 + 0x88) != (void *)0x0) {
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,*(void **)(param_1 + 0x88));
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  CAkSrcFileBase::StopStream(param_1);
  return;
}



// FUNCTION 1431bf510 VirtualOn body=78 status=ok
// SIG undefined VirtualOn(void)

void CAkSrcFilePCM::VirtualOn(longlong param_1,uint param_2)

{
  if ((*(void **)(param_1 + 0x88) != (void *)0x0) && (param_2 < 2)) {
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,*(void **)(param_1 + 0x88));
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  CAkSrcFileBase::VirtualOn(param_1,param_2);
  return;
}



// FUNCTION 1431bf560 CAkSrcPhysModel body=266 status=ok
// SIG undefined CAkSrcPhysModel(void)

undefined8 * CAkSrcPhysModel::CAkSrcPhysModel(undefined8 *param_1)

{
  CAkVPLSrcNode::CAkVPLSrcNode();
  *param_1 = &PTR_FUN_145ace518;
  param_1[5] = &PTR_LAB_145ace5f8;
  param_1[6] = &PTR_LAB_145ace688;
  *(undefined1 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xff;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x2b;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined1 *)((longlong)param_1 + 0x74) = 0;
  *(uint *)((longlong)param_1 + 0x74) = *(uint *)((longlong)param_1 + 0x74) & 0xff;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0xff;
  *(undefined1 *)(param_1 + 0x19) = 0xff;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x12] = &PTR__scalar_deleting_destructor__145ace4f0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0xffffffff;
  param_1[0x1f] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x2b;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 1;
  return param_1;
}



// FUNCTION 1431bf690 FUN_1431bf690 body=196 status=ok
// SIG undefined FUN_1431bf690(void)

undefined8 * FUN_1431bf690(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145ace518;
  param_1[5] = &PTR_LAB_145ace5f8;
  param_1[6] = &PTR_LAB_145ace688;
  CAkSrcPhysModel::ReleaseBuffer();
  (**(code **)(param_1[0x12] + 0x20))(param_1 + 0x12);
  param_1[0x12] = &PTR__scalar_deleting_destructor__145ac6a78;
  FUN_14318ccc0(param_1 + 0x12);
  param_1[0x12] = &PTR_FUN_144024f50;
  FUN_143184300(param_1 + 0x10);
  param_1[6] = &PTR_FUN_144cb0188;
  param_1[5] = &PTR_FUN_144cb0f40;
  *param_1 = &PTR_FUN_145aca4d0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 1431bf760 FUN_1431bf760 body=162 status=ok
// SIG undefined FUN_1431bf760(void)

void FUN_1431bf760(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  float fVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  uVar1 = *(uint *)(lVar3 + 0x230);
  if (*(char *)(lVar3 + 0x295) < '\0') {
    fVar4 = (float)(**(code **)(**(longlong **)(param_1 + 0xf8) + 0x38))();
    lVar3 = *(longlong *)(param_1 + 0x18);
    uVar2 = (ulonglong)(fVar4 * *(float *)(lVar3 + 0x28c) * (float)uVar1 * 0.001);
  }
  else {
    uVar2 = ((ulonglong)*(uint *)(lVar3 + 0x28c) * (ulonglong)uVar1) / (ulonglong)DAT_1467bdcac &
            0xffffffff;
  }
  *(byte *)(lVar3 + 0x295) = *(byte *)(lVar3 + 0x295) & 0x3f;
  *(byte *)(lVar3 + 0x296) = *(byte *)(lVar3 + 0x296) & 0xfe;
  *(undefined4 *)(lVar3 + 0x28c) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001431bf7fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x50))(*(longlong **)(param_1 + 0xf8),uVar2);
  return;
}



// FUNCTION 1431bf820 FUN_1431bf820 body=179 status=ok
// SIG undefined FUN_1431bf820(void)

float FUN_1431bf820(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*(longlong **)(param_1 + 0xf8) != (longlong *)0x0) {
    fVar2 = (float)(**(code **)(**(longlong **)(param_1 + 0xf8) + 0x40))();
    fVar1 = (float)(((uint)(fVar2 + 1e-38) & 0x7fffff) + 0x3f800000);
    fVar3 = fVar1 + 1.0;
    return (((fVar1 * fVar1 * fVar1 - 1.0) * 1.1581186) / (fVar3 * fVar3 * fVar3)) * 20.0 +
           ((float)((uint)(fVar2 + 1e-38) >> 0x17 & 0xff) - 127.0) * 6.0206;
  }
  return 0.0;
}



// FUNCTION 1431bf8e0 FUN_1431bf8e0 body=355 status=ok
// SIG undefined FUN_1431bf8e0(void)

void FUN_1431bf8e0(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  void *pvVar5;
  
  if (*(longlong *)(param_1 + 0xf8) == 0) {
    *param_2 = 0;
    *(undefined2 *)(param_2 + 3) = 0;
    param_2[4] = 0;
    *(undefined8 *)((longlong)param_2 + 0xc) = 0x2b;
    *(undefined4 *)(param_2 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3f800000;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 0x34) = 1;
    *(undefined4 *)(param_2 + 7) = 2;
    return;
  }
  uVar1 = *(ushort *)(param_2 + 2);
  if (uVar1 == 0) {
    *(undefined4 *)(param_2 + 7) = 0x11;
    return;
  }
  iVar4 = 1;
  uVar2 = *(undefined4 *)(param_1 + 0x74);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    if ((*(uint *)(param_1 + 0x78) >> 0x12 & 1) == 0) {
      pvVar5 = AK::MemoryMgr::Malign
                         (g_LEngineDefaultPoolId,
                          (ulonglong)((uint)uVar1 * (*(uint *)(param_1 + 0x78) >> 6 & 0x3ff)),0x10);
      if (pvVar5 != (void *)0x0) {
        *param_2 = (longlong)pvVar5;
        *(undefined2 *)((longlong)param_2 + 0x12) = 0;
        *(undefined4 *)(param_2 + 1) = uVar2;
        goto LAB_1431bf982;
      }
      iVar4 = 2;
    }
    else {
      iVar4 = AkPipelineBufferBase::GetCachedBuffer(param_2,uVar1,uVar2);
    }
  }
  else {
    *param_2 = *(longlong *)(param_1 + 0x38);
    *(undefined2 *)((longlong)param_2 + 0x12) = 0;
    *(undefined4 *)(param_2 + 1) = uVar2;
  }
  if (iVar4 != 1) {
    *(undefined4 *)(param_2 + 7) = 2;
    return;
  }
LAB_1431bf982:
  *(undefined4 *)((longlong)param_2 + 0xc) = 0x2b;
  (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x60))(*(longlong **)(param_1 + 0xf8),param_2);
  lVar3 = param_2[1];
  *(undefined4 *)(param_2 + 7) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(longlong *)(param_1 + 0x38) = *param_2;
  *(longlong *)(param_1 + 0x40) = lVar3;
  lVar3 = param_2[3];
  *(longlong *)(param_1 + 0x48) = param_2[2];
  *(longlong *)(param_1 + 0x50) = lVar3;
  lVar3 = param_2[5];
  *(longlong *)(param_1 + 0x58) = param_2[4];
  *(longlong *)(param_1 + 0x60) = lVar3;
  *(longlong *)(param_1 + 0x68) = param_2[6];
  return;
}



// FUNCTION 1431bfb40 FUN_1431bfb40 body=128 status=ok
// SIG undefined FUN_1431bfb40(void)

bool FUN_1431bfb40(longlong param_1,longlong param_2,uint *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  lVar2 = CAkRegisteredObj::GetListeners(*(undefined8 *)(param_1 + 0x18));
  uVar4 = *(uint *)(lVar2 + 0x10);
  if (param_2 != 0) {
    if (*param_3 <= uVar4) {
      uVar4 = *param_3;
    }
    uVar5 = 0;
    *param_3 = uVar4;
    uVar3 = 0;
    if (uVar4 != 0) {
      do {
        lVar1 = uVar5 * 8;
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        *(undefined8 *)(lVar1 + param_2) = *(undefined8 *)(lVar1 + *(longlong *)(lVar2 + 8));
        uVar3 = *param_3;
      } while (uVar4 < uVar3);
    }
    return uVar3 == *(uint *)(lVar2 + 0x10);
  }
  *param_3 = uVar4;
  return true;
}



// FUNCTION 1431bfc30 GetOutputBusNode body=87 status=ok
// SIG undefined GetOutputBusNode(void)

undefined8 CAkSrcPhysModel::GetOutputBusNode(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + -0x10) + 0x228) + 0x40);
  if (lVar3 != 0) {
    iVar5 = 0;
    do {
      piVar1 = (int *)(lVar3 + 0x164);
      lVar3 = *(longlong *)(lVar3 + 0x48);
      iVar2 = iVar5 + 1;
      if (*piVar1 != 0) {
        iVar2 = iVar5;
      }
      iVar5 = iVar2;
    } while (lVar3 != 0);
    if (iVar5 != 0) {
      uVar4 = CAkVPL3dMixable::GetFirstDirectConnection();
      uVar4 = FARSupportInterface::GetXRTrackingSystem(uVar4);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 1431bfcb0 FUN_1431bfcb0 body=257 status=ok
// SIG undefined FUN_1431bfcb0(void)

void FUN_1431bfcb0(longlong param_1,int param_2,undefined8 *param_3,int *param_4)

{
  int *piVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar1 = *(int **)(param_1 + 0x58);
  piVar5 = piVar1 + (ulonglong)*(uint *)(param_1 + 0x60) * 8;
  for (; (piVar1 != piVar5 && (*piVar1 != param_2)); piVar1 = piVar1 + 8) {
  }
  piVar3 = piVar1 + 2;
  if (piVar1 == piVar5) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 == (int *)0x0) {
    plVar2 = (longlong *)
             CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef
                       (DAT_146b50af8 + 0x2c0,
                        **(undefined4 **)(*(longlong *)(param_1 + -0x10) + 0x220));
    iVar4 = 0;
    if (plVar2 != (longlong *)0x0) {
      piVar5 = (int *)plVar2[8];
      piVar1 = piVar5 + (ulonglong)*(uint *)(plVar2 + 9) * 2;
      for (; (piVar5 != piVar1 && (*piVar5 != param_2)); piVar5 = piVar5 + 2) {
      }
      piVar3 = piVar5 + 1;
      if (piVar5 == piVar1) {
        piVar3 = (int *)0x0;
      }
      if (piVar3 != (int *)0x0) {
        iVar4 = *piVar3;
      }
      (**(code **)(*plVar2 + 0x10))(plVar2);
      if ((iVar4 != -1) &&
         (piVar3 = (int *)FUN_143184490(param_1 + 0x58,param_2,iVar4), piVar3 != (int *)0x0))
      goto LAB_1431bfd86;
    }
    *param_3 = 0;
    *param_4 = 0;
  }
  else {
LAB_1431bfd86:
    *param_4 = piVar3[2];
    *param_3 = *(undefined8 *)piVar3;
  }
  return;
}



// FUNCTION 1431bfe10 IsUsingThisSlot body=139 status=ok
// SIG undefined IsUsingThisSlot(void)

undefined8 CAkSrcPhysModel::IsUsingThisSlot(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (lVar2 != (ulonglong)*(uint *)(param_1 + 0x88) * 0x20 + lVar2) {
    do {
      if (*(longlong *)(lVar2 + 0x18) == param_2) {
        cVar1 = FUN_1431846f0(param_2,lVar2 + 8,*(undefined8 *)(param_1 + 0xf8));
        if (cVar1 == '\0') {
          return 1;
        }
      }
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != (ulonglong)*(uint *)(param_1 + 0x88) * 0x20 + *(longlong *)(param_1 + 0x80));
  }
  return 0;
}



// FUNCTION 1431bfea0 ReleaseBuffer body=65 status=ok
// SIG undefined ReleaseBuffer(void)

void CAkSrcPhysModel::ReleaseBuffer(longlong param_1)

{
  if (*(void **)(param_1 + 0x38) != (void *)0x0) {
    if ((*(uint *)(param_1 + 0x78) & 0x40000) != 0) {
      AkPipelineBufferBase::ReleaseCachedBuffer((undefined8 *)(param_1 + 0x38));
      return;
    }
    AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,*(void **)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1431bfef0 FUN_1431bfef0 body=107 status=ok
// SIG undefined FUN_1431bfef0(void)

void FUN_1431bfef0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  (**(code **)(*param_1 + 0x50))();
  lVar1 = param_1[0x10];
  lVar2 = (ulonglong)*(uint *)(param_1 + 0x11) * 0x20 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x20) {
    FUN_1431842c0(lVar1 + 8);
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001431bff57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,0,0);
  return;
}



// FUNCTION 1431bff60 FUN_1431bff60 body=387 status=ok
// SIG undefined FUN_1431bff60(void)

int FUN_1431bff60(longlong *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_res8;
  undefined8 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  
  iVar3 = 2;
  local_res8 = 0;
  local_28 = 0;
  local_1e = 0;
  local_20 = 1;
  plVar4 = (longlong *)
           CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef
                     (DAT_146b50af8 + 0x2c0,**(undefined4 **)(param_1[3] + 0x220));
  if (plVar4 != (longlong *)0x0) {
    lVar5 = plVar4[6];
    *(int *)(param_1 + 0x1e) = (int)lVar5;
    iVar3 = FUN_143128650((int)lVar5,&local_res8,&local_28);
    if (iVar3 == 1) {
      param_1[0x1f] = local_res8;
      iVar3 = CAkEffectsMgr::ValidatePluginInfo((int)param_1[0x1e],2,&local_28);
      if (iVar3 == 0) {
        lVar5 = param_1[3] + 0x18;
        if (param_1[3] == 0) {
          lVar5 = 0;
        }
        lVar5 = FUN_14318af60(param_1 + 0x12,plVar4,lVar5);
        uVar2 = DAT_1467bdcac;
        if (lVar5 != 0) {
          plVar1 = param_1 + 0xe;
          *(uint *)(param_1 + 0xf) = *(uint *)(param_1 + 0xf) & 0xfffd0120;
          *(uint *)(param_1 + 0xf) = *(uint *)(param_1 + 0xf) | 0x50120;
          *(undefined4 *)plVar1 = uVar2;
          *(undefined4 *)((longlong)param_1 + 0x74) = 0x4101;
          iVar3 = (**(code **)(*(longlong *)param_1[0x1f] + 0x30))
                            ((longlong *)param_1[0x1f],&PTR_PTR_1467be108,param_1 + 5,param_1[0x13],
                             plVar1);
          if (iVar3 == 1) {
            iVar3 = (**(code **)(*(longlong *)param_1[0x1f] + 0x10))();
            if (iVar3 == 1) {
              lVar5 = param_1[3];
              *(longlong *)(lVar5 + 0x230) = *plVar1;
              *(int *)(lVar5 + 0x238) = (int)param_1[0xf];
              goto LAB_1431c00bd;
            }
          }
          goto LAB_1431c00b4;
        }
      }
      iVar3 = 2;
    }
  }
LAB_1431c00b4:
  (**(code **)(*param_1 + 0x50))(param_1);
LAB_1431c00bd:
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return iVar3;
}



// FUNCTION 1431c0110 StopStream body=34 status=ok
// SIG undefined StopStream(void)

void CAkSrcPhysModel::StopStream(longlong *param_1)

{
  (**(code **)(*param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x0001431c012e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[0x12] + 0x20))();
  return;
}



// FUNCTION 1431c0140 Term body=52 status=ok
// SIG undefined Term(void)

void CAkSrcPhysModel::PluginParams::Term(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x68);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,&PTR_PTR_1467be108);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  FUN_14318ccc0(param_1);
  return;
}



// FUNCTION 1431c0180 TimeSkip body=65 status=ok
// SIG undefined TimeSkip(void)

undefined8 CAkSrcPhysModel::TimeSkip(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x2d;
  if (*(longlong **)(param_1 + 0xf8) != (longlong *)0x0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x58))();
    if ((int)uVar1 == 0) {
      uVar1 = FUN_143181890(param_1,param_2);
    }
  }
  return uVar1;
}



// FUNCTION 1431c01f0 CAkSrcFileADPCM body=56 status=ok
// SIG undefined CAkSrcFileADPCM(void)

undefined8 * CAkSrcFileADPCM::CAkSrcFileADPCM(undefined8 *param_1)

{
  CAkSrcFileBase::CAkSrcFileBase();
  *param_1 = &PTR__scalar_deleting_destructor__145ace6f0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  return param_1;
}



// FUNCTION 1431c0230 `scalar_deleting_destructor' body=123 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * CAkSrcFileADPCM::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ace6f0;
  if ((void *)param_1[0x12] != (void *)0x0) {
    AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,(void *)param_1[0x12]);
    param_1[0x12] = 0;
  }
  if ((void *)param_1[0x13] != (void *)0x0) {
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,(void *)param_1[0x13]);
  }
  CAkSrcFileBase::~CAkSrcFileBase(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 1431c02e0 FUN_1431c02e0 body=1052 status=ok
// SIG undefined FUN_1431c02e0(void)

void FUN_1431c02e0(longlong param_1,longlong param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  void *pvVar11;
  void *_Dst;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  void *pvVar17;
  uint uVar18;
  ulonglong uVar19;
  uint local_res8 [2];
  uint local_res18 [2];
  undefined4 local_res20;
  undefined4 local_res24;
  float local_48 [4];
  
  iVar8 = 0x2d;
  if ((*(byte *)(param_1 + 0x20) & 2) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x58);
    iVar3 = *(int *)(param_1 + 0x68);
    iVar8 = (**(code **)(*plVar4 + 0x50))(plVar4,local_res18);
    if (iVar8 - 0x2dU < 2) {
      uVar10 = (**(code **)(*plVar4 + 0x58))(plVar4);
      if (uVar10 <= local_res18[0] + iVar3) goto LAB_1431c0342;
      iVar8 = 0x2e;
    }
    else if (iVar8 == 0x11) {
LAB_1431c0342:
      *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xfd;
      iVar8 = 0x2d;
    }
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x18) + 8) & 0x400000) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x58);
    iVar3 = *(int *)(param_1 + 0x68);
    iVar9 = (**(code **)(*plVar4 + 0x50))(plVar4,local_res8);
    local_res20 = 0;
    if (iVar9 == 2) {
      local_res24 = 2;
    }
    else {
      (**(code **)(*plVar4 + 0x20))(plVar4,local_48);
      local_res20 = (undefined4)(longlong)((float)(local_res8[0] + iVar3) / local_48[0]);
      if ((iVar9 == 0x11) ||
         (uVar10 = (**(code **)(*plVar4 + 0x58))(plVar4), uVar10 <= local_res8[0] + iVar3)) {
        local_res24 = 0x11;
      }
      else {
        local_res24 = 1;
      }
    }
    FUN_143162760(DAT_146b50b70,*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x200),param_1,
                  &local_res20);
  }
  if (iVar8 != 0x2d) {
    *(int *)(param_2 + 0x38) = iVar8;
    return;
  }
  if ((*(int *)(param_1 + 0x68) == 0) && (iVar8 = FUN_1431c8680(param_1), iVar8 != 0x2d)) {
    *(int *)(param_2 + 0x38) = iVar8;
    return;
  }
  uVar7 = DAT_1467bdcb8;
  uVar18 = (uint)DAT_1467bdcb8;
  lVar5 = *(longlong *)(param_1 + 0x18);
  bVar1 = *(byte *)(lVar5 + 0x234);
  uVar10 = *(uint *)(lVar5 + 0x238) >> 6 & 0x3ff;
  local_res18[0] = uVar10;
  pvVar11 = AK::MemoryMgr::Malign(g_LEngineDefaultPoolId,(ulonglong)(uVar18 * uVar10),0x10);
  *(void **)(param_1 + 0x90) = pvVar11;
  if (pvVar11 == (void *)0x0) {
LAB_1431c06d7:
    *(undefined4 *)(param_2 + 0x38) = 2;
  }
  else {
    uVar2 = *(ushort *)(param_1 + 0xa0);
    local_res8[0] = uVar10 << 6;
    uVar10 = (uint)bVar1;
    if (uVar2 == 0) {
      uVar15 = *(uint *)(param_1 + 0x88);
    }
    else {
      _guard_xfg_dispatch_icall_nop
                ((void *)((ulonglong)uVar2 + *(longlong *)(param_1 + 0x98)),
                 *(void **)(param_1 + 0x60),(ulonglong)(*(int *)(param_1 + 0x88) - (uint)uVar2));
      uVar18 = 0;
      pvVar17 = pvVar11;
      if (bVar1 != 0) {
        do {
          FUN_1431c9340((ulonglong)(uVar18 * 0x24) + *(longlong *)(param_1 + 0x98),pvVar17,1,
                        *(undefined4 *)(param_1 + 0x88),uVar10);
          uVar18 = uVar18 + 1;
          pvVar17 = (void *)((longlong)pvVar17 + 2);
        } while (uVar18 < uVar10);
      }
      uVar15 = *(uint *)(param_1 + 0x88);
      uVar18 = uVar15 - *(ushort *)(param_1 + 0xa0);
      *(undefined2 *)(param_1 + 0xa0) = 0;
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) - uVar18;
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + uVar18;
      *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + (ulonglong)uVar18;
      pvVar11 = (void *)((longlong)pvVar11 + (ulonglong)local_res8[0]);
      uVar18 = (uint)(ushort)(uVar7 - 0x40);
    }
    uVar14 = *(uint *)(param_1 + 0x68);
    lVar16 = *(longlong *)(param_1 + 0x60);
    uVar13 = 0;
    uVar19 = (ulonglong)(uVar18 >> 6);
    if ((uint)((ulonglong)uVar14 / (ulonglong)uVar15) < uVar18 >> 6) {
      uVar19 = (ulonglong)uVar14 / (ulonglong)uVar15;
    }
    pvVar17 = pvVar11;
    if (uVar10 != 0) {
      do {
        FUN_1431c9340((ulonglong)(uVar13 * 0x24) + *(longlong *)(param_1 + 0x60),pvVar17,uVar19,
                      *(undefined4 *)(param_1 + 0x88),uVar10);
        uVar13 = uVar13 + 1;
        pvVar17 = (void *)((longlong)pvVar17 + 2);
      } while (uVar13 < uVar10);
      uVar15 = *(uint *)(param_1 + 0x88);
      uVar14 = *(uint *)(param_1 + 0x68);
      lVar16 = *(longlong *)(param_1 + 0x60);
    }
    uVar12 = (ulonglong)local_res18[0];
    uVar10 = (int)uVar19 * local_res8[0];
    lVar6 = *(longlong *)(param_1 + 0x90);
    uVar18 = uVar15 * (int)uVar19;
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + uVar18;
    uVar14 = uVar14 - uVar18;
    pvVar17 = (void *)((ulonglong)uVar18 + lVar16);
    *(uint *)(param_1 + 0x68) = uVar14;
    *(void **)(param_1 + 0x60) = pvVar17;
    if (uVar14 < uVar15) {
      _Dst = *(void **)(param_1 + 0x98);
      if (_Dst == (void *)0x0) {
        _Dst = AK::MemoryMgr::Malloc
                         (g_LEngineDefaultPoolId,(ulonglong)(((uint)bVar1 + (uint)bVar1 * 8) * 4));
        *(void **)(param_1 + 0x98) = _Dst;
        if (_Dst == (void *)0x0) goto LAB_1431c06d7;
        uVar14 = (uint)*(ushort *)(param_1 + 0x68);
        pvVar17 = *(void **)(param_1 + 0x60);
      }
      *(short *)(param_1 + 0xa0) = (short)uVar14;
      _guard_xfg_dispatch_icall_nop(_Dst,pvVar17,(ulonglong)(uVar14 & 0xffff));
      *(longlong *)(param_1 + 0x60) =
           *(longlong *)(param_1 + 0x60) + (ulonglong)*(uint *)(param_1 + 0x68);
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + *(uint *)(param_1 + 0x68);
      *(undefined4 *)(param_1 + 0x68) = 0;
      if ((*(byte *)(param_1 + 0x82) & 2) == 0) {
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x88))();
      }
      else {
        *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) & 0xfd;
      }
    }
    FUN_1431c8210(param_1,*(undefined8 *)(param_1 + 0x90),
                  (longlong)(((ulonglong)uVar10 - lVar6) + (longlong)pvVar11) / (longlong)uVar12 &
                  0xffff,*(undefined4 *)(lVar5 + 0x230),*(undefined4 *)(lVar5 + 0x234),param_2);
  }
  return;
}



// FUNCTION 1431c0700 FUN_1431c0700 body=565 status=ok
// SIG undefined FUN_1431c0700(void)

undefined8 FUN_1431c0700(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  uint local_50;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3b;
  int local_38 [2];
  undefined8 local_30;
  undefined1 local_28 [8];
  short *local_20;
  
  local_38[0] = 0;
  local_30 = 0;
  puVar1 = (uint *)(param_1 + 0x3c);
  puVar2 = (uint *)(param_1 + 0x38);
  uVar8 = AkFileParser::Parse(param_2,*(undefined4 *)(param_1 + 0x68),local_28,param_1 + 0x40,puVar2
                              ,puVar1,(uint *)(param_1 + 0x30),(int *)(param_1 + 0x34),local_38,0,0)
  ;
  if ((int)uVar8 != 1) {
    return uVar8;
  }
  if (*local_20 == 2) {
    uVar4 = local_20[1];
    lVar7 = *(longlong *)(param_1 + 0x18);
    *(ulonglong *)(lVar7 + 0x230) =
         CONCAT44(*(undefined4 *)(local_20 + 10),*(undefined4 *)(local_20 + 2));
    *(uint *)(lVar7 + 0x238) = (uVar4 & 0x1ff) << 7 | local_50 & 0xfff80010 | 0x10;
    if (local_38[0] != 0) {
      CAkSrcFileBase::StoreAnalysisData(param_1);
    }
    uVar9 = *(uint *)(param_1 + 0x30);
    uVar4 = local_20[6];
    iVar5 = *(int *)(param_1 + 0x34);
    uVar6 = *puVar1;
    *(uint *)(param_1 + 0x88) = (uint)uVar4;
    uVar3 = iVar5 + uVar9;
    *(int *)(param_1 + 0x28) = SUB164((ZEXT416(uVar9) << 6) / ZEXT216((ushort)local_20[6]),0);
    if ((uVar6 == 0) || (*(short *)(param_1 + 0x54) == 1)) {
      *(int *)(param_1 + 0x78) = iVar5;
      *(uint *)(param_1 + 0x7c) = uVar3;
      *puVar1 = (uVar9 / uVar4) * 0x40 - 1;
    }
    else {
      uVar9 = (*puVar2 >> 6) * (uint)uVar4 + iVar5;
      uVar10 = (uVar6 + 1 >> 6) * (uint)uVar4 + iVar5;
      *(uint *)(param_1 + 0x78) = uVar9;
      *(uint *)(param_1 + 0x7c) = uVar10;
      if (((uVar6 < *puVar2) || (uVar3 < uVar9)) || (uVar3 < uVar10)) goto LAB_1431c0851;
    }
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))(*(longlong **)(param_1 + 0x58),&local_48);
    if (((*puVar2 < *puVar1) && (*puVar2 <= *(uint *)(param_1 + 0x28))) &&
       (*puVar1 < *(uint *)(param_1 + 0x28))) {
      local_48 = (float)(ushort)local_20[6] * (float)*(uint *)(local_20 + 2) * 1.5625e-05;
      if (*(short *)(param_1 + 0x54) != 1) {
        local_44 = *(undefined4 *)(param_1 + 0x78);
        local_40 = *(undefined4 *)(param_1 + 0x7c);
      }
      local_3b = (undefined1)(int)*(float *)(*(longlong *)(param_1 + 0x18) + 0x2a0);
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x28))
                (*(longlong **)(param_1 + 0x58),&local_48);
      uVar8 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x30))
                        (*(longlong **)(param_1 + 0x58),
                         ((uint)(ushort)local_20[1] + (uint)(ushort)local_20[1] * 8) * 4);
    }
    else {
      uVar8 = 2;
    }
  }
  else {
LAB_1431c0851:
    uVar8 = 7;
  }
  return uVar8;
}



// FUNCTION 1431c0940 ReleaseBuffer body=49 status=ok
// SIG undefined ReleaseBuffer(void)

void CAkSrcFileADPCM::ReleaseBuffer(longlong param_1)

{
  if (*(void **)(param_1 + 0x90) != (void *)0x0) {
    AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,*(void **)(param_1 + 0x90));
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  return;
}



// FUNCTION 1431c0980 StopStream body=28 status=ok
// SIG undefined StopStream(void)

void CAkSrcFileADPCM::StopStream(longlong *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  CAkSrcFileBase::StopStream(param_1);
  return;
}



// FUNCTION 1431c09a0 VirtualOn body=45 status=ok
// SIG undefined VirtualOn(void)

void CAkSrcFileADPCM::VirtualOn(longlong param_1,uint param_2)

{
  CAkSrcFileBase::VirtualOn();
  if (param_2 < 2) {
    *(undefined2 *)(param_1 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 1431c09d0 CAkSrcBankADPCM body=43 status=ok
// SIG undefined CAkSrcBankADPCM(void)

undefined8 * CAkSrcBankADPCM::CAkSrcBankADPCM(undefined8 *param_1)

{
  FUN_1431c7cd0();
  *param_1 = &PTR__scalar_deleting_destructor__145ace800;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 1431c0a00 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FSoundEffectSubmix::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ace800;
  CAkSrcBaseEx::~CAkSrcBaseEx();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1431c0a50 FUN_1431c0a50 body=301 status=ok
// SIG undefined FUN_1431c0a50(void)

void FUN_1431c0a50(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  void *pvVar3;
  uint uVar4;
  ushort uVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  bVar1 = *(byte *)(lVar2 + 0x234);
  pvVar3 = AK::MemoryMgr::Malign
                     (g_LEngineDefaultPoolId,(ulonglong)((uint)DAT_1467bdcb8 * (uint)bVar1 * 2),0x10
                     );
  *(void **)(param_1 + 0x68) = pvVar3;
  if (pvVar3 == (void *)0x0) {
    *(undefined4 *)(param_2 + 0x38) = 2;
    return;
  }
  uVar5 = *(ushort *)(param_2 + 0x10);
  if (*(short *)(param_1 + 0x54) == 1) {
    uVar4 = *(uint *)(param_1 + 0x28);
  }
  else {
    uVar4 = *(int *)(param_1 + 0x3c) + 1;
  }
  if (uVar4 < (uint)uVar5 + *(int *)(param_1 + 0x2c)) {
    uVar5 = (short)uVar4 - (short)*(int *)(param_1 + 0x2c);
  }
  uVar4 = 0;
  uVar5 = uVar5 >> 6;
  if (bVar1 != 0) {
    do {
      FUN_1431c9340((ulonglong)(uVar4 * 0x24) + *(longlong *)(param_1 + 0x58),pvVar3,(uint)uVar5,
                    *(undefined2 *)(param_1 + 0x60),(uint)bVar1);
      uVar4 = uVar4 + 1;
      pvVar3 = (void *)((longlong)pvVar3 + 2);
    } while (uVar4 < bVar1);
    pvVar3 = *(void **)(param_1 + 0x68);
  }
  *(longlong *)(param_1 + 0x58) =
       *(longlong *)(param_1 + 0x58) + (ulonglong)((uint)*(ushort *)(param_1 + 0x60) * (uint)uVar5);
  FUN_1431c8210(param_1,pvVar3,uVar5 << 6,*(undefined4 *)(lVar2 + 0x230),
                *(undefined4 *)(lVar2 + 0x234),param_2);
  return;
}



// FUNCTION 1431c0bd0 ReleaseBuffer body=43 status=ok
// SIG undefined ReleaseBuffer(void)

void CAkSrcBankADPCM::ReleaseBuffer(longlong param_1)

{
  if (*(void **)(param_1 + 0x68) != (void *)0x0) {
    AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,*(void **)(param_1 + 0x68));
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  return;
}



// FUNCTION 1431c0c10 FUN_1431c0c10 body=122 status=ok
// SIG undefined FUN_1431c0c10(void)

undefined8 FUN_1431c0c10(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x295) & 0x40) != 0) {
    uVar2 = FUN_1431c7f80();
    lVar1 = *(longlong *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x2c) = uVar2 & 0xffffffc0;
    *(byte *)(lVar1 + 0x295) = *(byte *)(lVar1 + 0x295) & 0x3f;
    *(byte *)(lVar1 + 0x296) = *(byte *)(lVar1 + 0x296) & 0xfe;
    *(uint *)(lVar1 + 0x28c) = uVar2 - (uVar2 & 0xffffffc0);
    if (*(uint *)(param_1 + 0x28) <= *(uint *)(param_1 + 0x2c)) {
      return 2;
    }
    *(ulonglong *)(param_1 + 0x58) =
         (ulonglong)((*(uint *)(param_1 + 0x2c) >> 6) * (uint)*(ushort *)(param_1 + 0x60)) +
         (ulonglong)*(uint *)(param_1 + 0x34) + *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x2c0)
    ;
  }
  return 1;
}



// FUNCTION 1431c0c90 FUN_1431c0c90 body=452 status=ok
// SIG undefined FUN_1431c0c90(void)

undefined8 FUN_1431c0c90(longlong param_1,longlong param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  uint local_50;
  int local_48 [2];
  undefined8 local_40;
  undefined1 local_38 [8];
  short *local_30;
  
  if (param_2 == 0) {
    return 2;
  }
  puVar1 = (uint *)(param_1 + 0x34);
  puVar2 = (uint *)(param_1 + 0x3c);
  local_48[0] = 0;
  local_40 = 0;
  iVar7 = AkFileParser::Parse(param_2,param_3,local_38,param_1 + 0x40,(uint *)(param_1 + 0x38),
                              puVar2,(uint *)(param_1 + 0x30),puVar1,local_48,0,0);
  if ((iVar7 != 1) || (*local_30 != 2)) {
    return 7;
  }
  uVar3 = local_30[1];
  lVar5 = *(longlong *)(param_1 + 0x18);
  *(ulonglong *)(lVar5 + 0x230) =
       CONCAT44(*(undefined4 *)(local_30 + 10),*(undefined4 *)(local_30 + 2));
  *(uint *)(lVar5 + 0x238) = (uVar3 & 0x1ff) << 7 | local_50 & 0xfff80010 | 0x10;
  if (local_48[0] != 0) {
    *(undefined8 *)(param_1 + 0x10) = local_40;
  }
  uVar3 = local_30[6];
  uVar4 = *(uint *)(param_1 + 0x30);
  *(ushort *)(param_1 + 0x60) = uVar3;
  auVar6 = ZEXT416(uVar4) << 6;
  uVar9 = *puVar2;
  uVar8 = SUB164(auVar6 / ZEXT216(uVar3),0);
  *(uint *)(param_1 + 0x28) = uVar8;
  if ((uVar9 == 0) || (*(short *)(param_1 + 0x54) == 1)) {
    uVar9 = uVar8 - 1;
    *puVar2 = uVar9;
  }
  if ((*(uint *)(param_1 + 0x38) <= uVar9) && (uVar9 < uVar8)) {
    uVar9 = *puVar1;
    uVar10 = 1;
    if (param_3 == uVar9 + uVar4) goto LAB_1431c0df3;
  }
  uVar9 = *puVar1;
  uVar10 = 2;
LAB_1431c0df3:
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(ulonglong *)(param_1 + 0x58) = (ulonglong)uVar9 + param_2;
  if ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x295) & 0x40) != 0) {
    uVar10 = FUN_1431c0c10(param_1,SUB168(auVar6 % ZEXT216(uVar3),0));
  }
  return uVar10;
}



// FUNCTION 1431c0e60 StopStream body=28 status=ok
// SIG undefined StopStream(void)

void CAkSrcBankADPCM::StopStream(longlong *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  CAkSrcBaseEx::StopStream(param_1);
  return;
}



// FUNCTION 1431c0f00 Allocate body=185 status=ok
// SIG undefined Allocate(void)

undefined8 AkAudioMix::Allocate(undefined8 *param_1,int param_2,int param_3)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (param_3 + 3U >> 2) * param_2;
  uVar3 = uVar2 * 0x20;
  if (uVar3 == *(uint *)(param_1 + 1)) {
    return 1;
  }
  if (*(uint *)(param_1 + 1) != 0) {
    if ((void *)*param_1 != (void *)0x0) {
      AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,(void *)*param_1);
    }
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  pvVar1 = AK::MemoryMgr::Malign(g_LEngineDefaultPoolId,(ulonglong)uVar3,0x10);
  *param_1 = pvVar1;
  if (pvVar1 != (void *)0x0) {
    param_1[2] = pvVar1;
    param_1[3] = (ulonglong)((uVar2 & 0x7ffffff) << 4) + (longlong)pvVar1;
    *(uint *)(param_1 + 1) = uVar3;
    return 1;
  }
  return 2;
}



// FUNCTION 1431c0fc0 Free body=50 status=ok
// SIG undefined Free(void)

void AkAudioMix::Free(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,(void *)*param_1);
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// FUNCTION 1431c1000 CAkFxBaseStateAware body=41 status=ok
// SIG undefined CAkFxBaseStateAware(void)

undefined8 * CAkFxBaseStateAware::CAkFxBaseStateAware(undefined8 *param_1)

{
  CAkStateAware::CAkStateAware();
  param_1[2] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145ace8e8;
  return param_1;
}



// FUNCTION 1431c1030 ~CAkFxBaseStateAware body=157 status=ok
// SIG undefined ~CAkFxBaseStateAware(void)

void CAkFxBaseStateAware::~CAkFxBaseStateAware(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  
  pvVar2 = (void *)param_1[2];
  *param_1 = &PTR__scalar_deleting_destructor__145ace8e8;
  if (pvVar2 != (void *)0x0) {
    if (*(longlong *)((longlong)pvVar2 + 8) != 0) {
      CAkStateAware::FlushStateTransitions();
      CAkStateAware::RemoveStateGroups(param_1,0);
      pvVar2 = (void *)param_1[2];
    }
    lVar1 = g_DefaultPoolId;
    if (pvVar2 != (void *)0x0) {
      *(undefined8 *)((longlong)pvVar2 + 8) = 0;
      if (*(void **)((longlong)pvVar2 + 0x10) != (void *)0x0) {
        *(undefined4 *)((longlong)pvVar2 + 0x18) = 0;
        AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)((longlong)pvVar2 + 0x10));
        *(undefined8 *)((longlong)pvVar2 + 0x10) = 0;
        *(undefined4 *)((longlong)pvVar2 + 0x1c) = 0;
      }
      AK::MemoryMgr::Free(lVar1,pvVar2);
    }
    param_1[2] = 0;
  }
  CAkStateAware::~CAkStateAware(param_1);
  return;
}



// FUNCTION 1431c10d0 `scalar_deleting_destructor' body=196 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
CAkFxBaseStateAware::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  long lVar1;
  void *pvVar2;
  
  pvVar2 = (void *)param_1[2];
  *param_1 = &PTR__scalar_deleting_destructor__145ace8e8;
  if (pvVar2 != (void *)0x0) {
    if (*(longlong *)((longlong)pvVar2 + 8) != 0) {
      CAkStateAware::FlushStateTransitions();
      CAkStateAware::RemoveStateGroups(param_1,0);
      pvVar2 = (void *)param_1[2];
    }
    lVar1 = g_DefaultPoolId;
    if (pvVar2 != (void *)0x0) {
      *(undefined8 *)((longlong)pvVar2 + 8) = 0;
      if (*(void **)((longlong)pvVar2 + 0x10) != (void *)0x0) {
        *(undefined4 *)((longlong)pvVar2 + 0x18) = 0;
        AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)((longlong)pvVar2 + 0x10));
        *(undefined8 *)((longlong)pvVar2 + 0x10) = 0;
        *(undefined4 *)((longlong)pvVar2 + 0x1c) = 0;
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



// FUNCTION 1431c11a0 EnsureStateData body=86 status=ok
// SIG undefined EnsureStateData(void)

bool CAkFxBaseStateAware::EnsureStateData(longlong param_1)

{
  void *pvVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    pvVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x20);
    if (pvVar1 != (void *)0x0) {
      *(undefined8 *)((longlong)pvVar1 + 8) = 0;
      *(undefined8 *)((longlong)pvVar1 + 0x10) = 0;
      *(undefined8 *)((longlong)pvVar1 + 0x18) = 0;
      *(void **)(param_1 + 0x10) = pvVar1;
      return pvVar1 != (void *)0x0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    bVar2 = true;
  }
  return !bVar2;
}



// FUNCTION 1431c1220 PushStateParamUpdate body=128 status=ok
// SIG undefined PushStateParamUpdate(void)

void CAkFxBaseStateAware::PushStateParamUpdate
               (longlong param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,undefined4 param_6)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(param_1 + 0x60);
  if (param_1 == 0) {
    plVar2 = (longlong *)&DAT_00000078;
  }
  for (lVar1 = *plVar2; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x58)) {
    FUN_14318cdf0(lVar1,2,param_4,param_2,param_3,param_6);
  }
  return;
}



// FUNCTION 1431c12a0 SetStateProperties body=156 status=ok
// SIG undefined SetStateProperties(void)

void CAkFxBaseStateAware::SetStateProperties
               (longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  short *psVar1;
  longlong lVar2;
  short *psVar3;
  short *psVar4;
  
  CAkStateAware::SetStateProperties();
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    psVar4 = *(short **)(lVar2 + 0x10);
    if (psVar4 != psVar4 + (ulonglong)*(uint *)(lVar2 + 0x18) * 2) {
      do {
        psVar3 = *(short **)(param_1 + 0x48);
        psVar1 = psVar3 + (ulonglong)*(uint *)(param_1 + 0x50) * 4;
        if (psVar3 != psVar1) {
          do {
            if (*psVar3 == *psVar4) {
              *(char *)(psVar3 + 1) = (char)psVar4[1];
              break;
            }
            psVar3 = psVar3 + 4;
          } while (psVar3 != psVar1);
        }
        psVar4 = psVar4 + 2;
      } while (psVar4 != (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) +
                                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x10) + 0x18) * 4));
    }
    if (param_4 != '\0') {
      FUN_143190d20(param_1);
    }
  }
  return;
}



// FUNCTION 1431c1340 CAkModulatorCtx body=102 status=ok
// SIG undefined CAkModulatorCtx(void)

undefined8 * CAkModulatorCtx::CAkModulatorCtx(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ace968;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x7fffffff;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 1;
  return param_1;
}



// FUNCTION 1431c13b0 ~CAkModulatorCtx body=15 status=ok
// SIG undefined ~CAkModulatorCtx(void)

void CAkModulatorCtx::~CAkModulatorCtx(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ace968;
  FUN_1431c1760();
  return;
}



// FUNCTION 1431c13c0 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FClothingSimulationContextNv::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ace968;
  FUN_1431c1760();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 1431c1510 IsFinished body=34 status=ok
// SIG undefined IsFinished(void)

undefined1 CAkModulatorCtx::IsFinished(longlong param_1)

{
  if (((*(longlong *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 0x78) != 3)) &&
     ((1 < *(int *)(param_1 + 0x7c) || (*(int *)(param_1 + 0x84) != 0)))) {
    return 0;
  }
  return 1;
}



// FUNCTION 1431c1540 FUN_1431c1540 body=236 status=ok
// SIG undefined FUN_1431c1540(void)

undefined8 FUN_1431c1540(longlong *param_1,int param_2,float param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(param_2 + -8) {
  case 0:
    uVar2 = AkTimeConv::SecondsToSamples((double)param_3);
    *(undefined4 *)((longlong)param_1 + 0xac) = uVar2;
    (**(code **)(*param_1 + 0x20))();
    return 1;
  case 1:
    *(float *)(param_1 + 0x16) = param_3 * 0.01;
    return 1;
  case 2:
    uVar2 = AkTimeConv::SecondsToSamples((double)param_3);
    *(undefined4 *)(param_1 + 0x17) = uVar2;
    (**(code **)(*param_1 + 0x20))();
    return 1;
  case 3:
    *(float *)((longlong)param_1 + 0xb4) = param_3 * 0.01;
    return 1;
  case 4:
    break;
  case 5:
    uVar2 = AkTimeConv::SecondsToSamples((double)param_3);
    *(undefined4 *)((longlong)param_1 + 0xbc) = uVar2;
    return 1;
  default:
    return 0;
  }
  if (param_3 < 0.0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0x7fffffff;
    return 0x7fffff01;
  }
  iVar1 = AkTimeConv::SecondsToSamples((double)param_3);
  *(int *)((longlong)param_1 + 0x6c) =
       iVar1 + (int)param_1[0x17] + *(int *)((longlong)param_1 + 0xac);
  return 1;
}



// FUNCTION 1431c1650 FUN_1431c1650 body=204 status=ok
// SIG undefined FUN_1431c1650(void)

undefined8 FUN_1431c1650(longlong *param_1,undefined4 param_2,float param_3)

{
  undefined4 uVar1;
  
  switch(param_2) {
  case 0:
    *(float *)(param_1 + 0x15) = param_3 * 0.01;
    return 1;
  case 1:
    uVar1 = AkTimeConv::SecondsToSamples((double)param_3);
    *(undefined4 *)((longlong)param_1 + 0xac) = uVar1;
    return 1;
  case 2:
    *(float *)(param_1 + 0x17) = param_3;
    *(undefined1 *)(param_1 + 0x1d) = 1;
    (**(code **)(*param_1 + 0x20))();
    return 1;
  case 3:
    *(undefined1 *)(param_1 + 0x1d) = 1;
    *(int *)((longlong)param_1 + 0xb4) = (int)(longlong)param_3;
    return 1;
  case 4:
    *(undefined1 *)(param_1 + 0x1d) = 1;
    *(float *)((longlong)param_1 + 0xbc) = param_3 * 0.01;
    return 1;
  case 5:
    *(undefined1 *)(param_1 + 0x1d) = 1;
    *(float *)(param_1 + 0x18) = param_3 * 0.01;
    return 1;
  default:
    return 0;
  }
}



// FUNCTION 1431c1760 FUN_1431c1760 body=720 status=ok
// SIG undefined FUN_1431c1760(void)

void FUN_1431c1760(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  
  *(undefined4 *)(param_1 + 0x78) = 3;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    cVar3 = CAkModulator::StopWhenFinished();
    if (cVar3 != '\0') {
      iVar1 = *(int *)(param_1 + 0x7c);
      if (iVar1 == 0) {
        if (*(longlong *)(param_1 + 0x18) != 0) {
          local_10 = 0;
          local_18 = 0;
          local_14 = 4;
          FUN_143180140(*(longlong *)(param_1 + 0x18),&local_18,1);
        }
      }
      else if (iVar1 == 2) {
        if (*(uint *)(param_1 + 0x28) != 0) {
          puVar6 = *(undefined8 **)(param_1 + 0x20);
          local_10 = 0;
          local_18 = 0;
          local_14 = 4;
          if (puVar6 != puVar6 + *(uint *)(param_1 + 0x28)) {
            do {
              FUN_143180140(*puVar6,&local_18,1);
              puVar6 = puVar6 + 1;
            } while (puVar6 != (undefined8 *)
                               (*(longlong *)(param_1 + 0x20) +
                               (ulonglong)*(uint *)(param_1 + 0x28) * 8));
          }
        }
      }
      else if ((iVar1 == 1) && (*(uint *)(param_1 + 0x38) != 0)) {
        lVar7 = *(longlong *)(param_1 + 0x48);
        if (lVar7 == 0) {
          puVar6 = *(undefined8 **)(param_1 + 0x30);
          if (puVar6 != puVar6 + *(uint *)(param_1 + 0x38)) {
            do {
              uVar2 = *puVar6;
              if (DAT_146b50b78 != 0) {
                FUN_143140ce0(DAT_146b50b78,uVar2,*(undefined8 *)(param_1 + 0x40),
                              *(undefined4 *)(param_1 + 0x58));
              }
              CAkParameterNodeBase::Stop
                        (uVar2,*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x58),0,4);
              puVar6 = puVar6 + 1;
            } while (puVar6 != (undefined8 *)
                               (*(longlong *)(param_1 + 0x30) +
                               (ulonglong)*(uint *)(param_1 + 0x38) * 8));
          }
        }
        else {
          plVar4 = *(longlong **)(lVar7 + 0x40);
          if (plVar4 != (longlong *)0x0) {
            do {
              if ((*(longlong *)(plVar4[2] + 0x70) != 0) &&
                 (cVar3 = CAkModulatorPBIData::HasModulationSource
                                    (*(longlong *)(plVar4[2] + 0x70),param_1), cVar3 != '\0')) {
                local_10 = 0;
                local_18 = 0;
                local_14 = 4;
                FUN_143180140(plVar4[2],&local_18,1);
              }
              plVar4 = (longlong *)*plVar4;
            } while (plVar4 != (longlong *)0x0);
            lVar7 = *(longlong *)(param_1 + 0x48);
          }
          for (puVar6 = *(undefined8 **)(lVar7 + 0x68); puVar6 != (undefined8 *)0x0;
              puVar6 = (undefined8 *)*puVar6) {
            puVar5 = *(undefined8 **)(param_1 + 0x30);
            if (puVar5 != puVar5 + *(uint *)(param_1 + 0x38)) {
              do {
                cVar3 = CAkActionPlayAndContinue::HasModulator(puVar6[2],param_1);
                if (cVar3 != '\0') {
                  FUN_14313cfa0(DAT_146b50b78,puVar6[2],*puVar5,3);
                }
                puVar5 = puVar5 + 1;
              } while (puVar5 != (undefined8 *)
                                 (*(longlong *)(param_1 + 0x30) +
                                 (ulonglong)*(uint *)(param_1 + 0x38) * 8));
            }
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  *(undefined2 *)(param_1 + 0x50) = 0xffff;
  *(undefined8 *)(param_1 + 0x54) = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  while (iVar1 != 0) {
    plVar4 = *(longlong **)
              (*(longlong *)(param_1 + 0x30) + -8 + (ulonglong)*(uint *)(param_1 + 0x38) * 8);
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) - 1;
    (**(code **)(*plVar4 + 0x10))();
    iVar1 = *(int *)(param_1 + 0x38);
  }
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
    CAkMidiNoteState::Release();
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}



// FUNCTION 1431c1a30 FUN_1431c1a30 body=651 status=ok
// SIG undefined FUN_1431c1a30(void)

undefined8
FUN_1431c1a30(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4,int param_5)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  void *pvVar8;
  void *pvVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined2 local_res8;
  
  if ((param_1[9] != param_3[2]) || ((int)param_1[0xb] != *(int *)((longlong)param_3 + 0x1c))) {
    FUN_1431c1760();
  }
  param_1[2] = param_2;
  uVar11 = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0xf) = 1;
  *(int *)(param_1 + 0xd) = (int)param_3[4];
  param_1[8] = 0;
  *(int *)((longlong)param_1 + 0x54) = (int)param_3[3];
  if ((((char)param_3[1] + 0x80U & 0xcf) == 0) && ((char)param_3[1] != -0x50)) {
    local_res8 = CONCAT11(*(undefined1 *)((longlong)param_3 + 9),
                          *(undefined1 *)((longlong)param_3 + 10));
  }
  else {
    local_res8 = CONCAT11(*(undefined1 *)((longlong)param_3 + 9),0xff);
  }
  *(undefined2 *)(param_1 + 10) = local_res8;
  *(undefined1 *)(param_1 + 10) = 0xff;
  *(int *)((longlong)param_1 + 0x7c) = param_5;
  if (param_5 == 3) goto LAB_1431c1c76;
  param_1[8] = *param_3;
  if (param_5 == 2) {
LAB_1431c1c37:
    if (param_3[5] != 0) {
      FUN_1431b4a00(param_1 + 4);
    }
  }
  else {
    if (param_5 != 1) {
      param_1[3] = param_3[5];
    }
    if ((((char)param_3[1] + 0x80U & 0xcf) == 0) && ((char)param_3[1] != -0x50)) {
      param_5._0_2_ =
           CONCAT11(*(byte *)((longlong)param_3 + 9),*(undefined1 *)((longlong)param_3 + 10));
    }
    else {
      param_5 = CONCAT31((uint3)*(byte *)((longlong)param_3 + 9),0xff);
    }
    *(undefined2 *)(param_1 + 10) = (undefined2)param_5;
    if ((param_1[9] == 0) && (param_3[2] != 0)) {
      param_1[9] = param_3[2];
      CAkMidiNoteState::AddRef();
    }
    if (param_4 != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[6];
      uVar4 = *(uint *)(param_1 + 7);
      plVar2 = plVar7 + uVar4;
      for (; plVar7 != plVar2; plVar7 = plVar7 + 1) {
        if (param_4 == (longlong *)*plVar7) goto LAB_1431c1c14;
      }
      if (uVar4 < *(uint *)((longlong)param_1 + 0x3c)) {
LAB_1431c1be3:
        uVar4 = *(uint *)(param_1 + 7);
        *(uint *)(param_1 + 7) = uVar4 + 1;
        puVar3 = (undefined8 *)(param_1[6] + (ulonglong)uVar4 * 8);
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = param_4;
          (**(code **)(*param_4 + 8))(param_4);
        }
      }
      else {
        uVar1 = *(uint *)((longlong)param_1 + 0x3c) + 1;
        pvVar8 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 3);
        if (pvVar8 != (void *)0x0) {
          pvVar9 = (void *)param_1[6];
          if ((pvVar9 != (void *)0x0) && (pvVar9 != pvVar8)) {
            uVar5 = *(uint *)(param_1 + 7);
            if ((ulonglong)uVar5 != 0) {
              do {
                *(undefined8 *)((longlong)pvVar8 + uVar11 * 8) =
                     *(undefined8 *)(param_1[6] + uVar11 * 8);
                uVar11 = uVar11 + 1;
              } while (uVar11 < uVar5);
              pvVar9 = (void *)param_1[6];
            }
            AK::MemoryMgr::Free(g_DefaultPoolId,pvVar9);
          }
          param_1[6] = (longlong)pvVar8;
          *(uint *)((longlong)param_1 + 0x3c) = uVar1;
          if (uVar4 < uVar1) goto LAB_1431c1be3;
        }
      }
    }
LAB_1431c1c14:
    iVar6 = *(int *)((longlong)param_3 + 0x1c);
    *(int *)(param_1 + 0xb) = iVar6;
    if ((((*(char *)((longlong)param_1 + 0x51) == -1) && ((char)param_1[10] == -1)) && (iVar6 == 0))
       && (param_1[3] == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x7c) = 2;
      goto LAB_1431c1c37;
    }
  }
  if (param_1[8] == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 3;
    if ((void *)param_1[4] != (void *)0x0) {
      *(undefined4 *)(param_1 + 5) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[4]);
      param_1[4] = 0;
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
  }
LAB_1431c1c76:
  lVar10 = (**(code **)(*param_1 + 0x18))(param_1);
  (**(code **)(*(longlong *)param_1[2] + 0x28))((longlong *)param_1[2],lVar10,param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)(lVar10 + 8);
  (**(code **)(*param_1 + 0x28))(param_1);
  return 1;
}



// FUNCTION 1431c1cc0 TriggerRelease body=29 status=ok
// SIG undefined TriggerRelease(void)

void CAkModulatorCtx::TriggerRelease(longlong param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x6c) == 0x7fffffff) &&
     (*(int *)(param_1 + 0x6c) = param_2 + *(int *)(param_1 + 0x70), *(int *)(param_1 + 0x78) != 3))
  {
    *(undefined4 *)(param_1 + 0x78) = 2;
  }
  return;
}



// FUNCTION 1431c1ce0 CAkActionPlay body=40 status=ok
// SIG undefined CAkActionPlay(void)

undefined8 * CAkActionPlay::CAkActionPlay(undefined8 *param_1)

{
  CAkAction::CAkAction();
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_145ace998;
  return param_1;
}



// FUNCTION 1431c1d10 FUN_1431c1d10 body=15 status=ok
// SIG undefined FUN_1431c1d10(void)

void FUN_1431c1d10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145ace998;
  CAkAction::~CAkAction();
  return;
}



// FUNCTION 1431c1d20 FUN_1431c1d20 body=62 status=ok
// SIG undefined FUN_1431c1d20(void)

undefined8 * FUN_1431c1d20(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145ace998;
  CAkAction::~CAkAction();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}


